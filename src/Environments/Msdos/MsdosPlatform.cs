#region License
/* 
 * Copyright (C) 1999-2016 John K�ll�n.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; see the file COPYING.  If not, write to
 * the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.
 */
#endregion

using Reko.Arch.X86;
using Reko.Core;
using Reko.Core.CLanguage;
using Reko.Core.Lib;
using Reko.Core.Serialization;
using Reko.Core.Services;
using Reko.Core.Types;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.IO;
using System.Linq;
using System.Reflection;

namespace Reko.Environments.Msdos
{
    /// <summary>
    /// Platform services for the MS-DOS real-mode operating environment.
    /// </summary>
    [Designer("Reko.Environments.Msdos.Design.MsdosPlatformDesigner,Reko.Environments.Msdos.Design")]
    public partial class MsdosPlatform : Platform
	{
		private SystemService [] realModeServices; 

		public MsdosPlatform(IServiceProvider services, IProcessorArchitecture arch) : base(services, arch, "ms-dos")
		{
		}

        public override HashSet<RegisterStorage> CreateImplicitArgumentRegisters()
        {
            return new HashSet<RegisterStorage>
            {
            Registers.cs,
            Registers.ss,
            Registers.sp,
            Registers.esp,
            };
        }

        public override ProcedureSerializer CreateProcedureSerializer(ISerializedTypeVisitor<DataType> typeLoader, string defaultConvention)
        {
            //$BUGBUG: unlikely to be correct in long run.
            return new X86ProcedureSerializer((IntelArchitecture) this.Architecture, typeLoader, defaultConvention);
        }

        public override string DetermineCallingConvention(ProcedureSignature signature)
        {
            if (!signature.HasVoidReturn)
            {
                var reg = signature.ReturnValue.Storage as RegisterStorage;
                if (reg != null)
                {
                    if (reg != Registers.al && reg != Registers.ax)
                        return null;
                }
                var seq = signature.ReturnValue.Storage as SequenceStorage;
                if (seq != null)
                {
                    if (seq.Head != Registers.dx || seq.Tail != Registers.ax)
                        return null;
                }
            }
            if (signature.Parameters.Any(p => !(p.Storage is StackArgumentStorage)))
                return null;
            if (signature.FpuStackDelta != 0 || signature.FpuStackArgumentMax >= 0)
                return null;
            if (signature.StackDelta == 0)
                return "__cdecl";
            else
                return "__pascal";
        }

        public override void EnsureTypeLibraries(string envName)
        {
            base.EnsureTypeLibraries(envName);
            LoadRealmodeServices(Architecture);
        }

        public override ImageSymbol FindMainProcedure(Program program, Address addrStart)
        {
            var sf = new StartupFinder(Services, program, addrStart);
            return sf.FindMainAddress();
        }

        public override SystemService FindService(int vector, ProcessorState state)
		{
            EnsureTypeLibraries(PlatformIdentifier);
			foreach (SystemService svc in realModeServices)
			{
				if (svc.SyscallInfo.Matches(vector, state))
					return svc;
			}
			return null;
		}

        public override int GetByteSizeFromCBasicType(CBasicType cb)
        {
            switch (cb)
            {
            case CBasicType.Char: return 1;
            case CBasicType.Short: return 2;
            case CBasicType.Int: return 2;
            case CBasicType.Long: return 4;
            case CBasicType.LongLong: return 8;
            case CBasicType.Float: return 4;
            case CBasicType.Double: return 8;
            case CBasicType.LongDouble: return 8;
            case CBasicType.Int64: return 8;
            default: throw new NotImplementedException(string.Format("C basic type {0} not supported.", cb));
            }
        }

        /// <summary>
        /// MS-DOS has no concept of "trampolines".
        /// </summary>
        /// <param name="imageReader"></param>
        /// <param name="host"></param>
        /// <returns></returns>
        public override ProcedureBase GetTrampolineDestination(ImageReader imageReader, IRewriterHost host)
        {
            return null;
        }
        
        public override ExternalProcedure LookupProcedureByName(string moduleName, string procName)
        {
            throw new NotImplementedException();
        }

        public void LoadRealmodeServices(IProcessorArchitecture arch)
        {
            var prefix = Path.GetDirectoryName(Assembly.GetExecutingAssembly().Location);
            var libPath = Path.Combine(prefix, "realmodeintservices.xml");
            if (!File.Exists(libPath))
            {
                libPath = Path.Combine(Directory.GetCurrentDirectory(), "realmodeintservices.xml");
            }

            SerializedLibrary lib;
            var fsSvc = Services.RequireService<IFileSystemService>();
            using (Stream stm = fsSvc.CreateFileStream(libPath, FileMode.Open, FileAccess.Read))
            {
                lib = SerializedLibrary.LoadFromStream(stm);
            }

            realModeServices = lib.Procedures
                .Cast<SerializedService>()
                .Select(s => s.Build(this, Metadata))
                .ToArray();
        }

        public override string DefaultCallingConvention
        {
            get { return "cdecl"; }
        }
	}
}
