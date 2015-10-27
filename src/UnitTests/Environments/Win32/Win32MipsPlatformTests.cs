﻿using NUnit.Framework;
using Reko.Core;
using Reko.Core.Expressions;
using Reko.Core.Rtl;
using Reko.Core.Types;
using Reko.Environments.Windows;
using Reko.UnitTests.Mocks;
using Rhino.Mocks;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Reko.UnitTests.Environments.Win32
{
    [TestFixture]
    public class Win32MipsPlatformTests
    {
        private MockRepository mr;

        [SetUp]
        public void Setup()
        {
            mr = new MockRepository();
        }

        [Test]
        public void W32Mips_Trampoline()
        {
            var instrs = new List<RtlInstructionCluster>();
            var frame = new Frame(PrimitiveType.Pointer32);
            var r9 = frame.EnsureRegister(new RegisterStorage("r9", 9, PrimitiveType.Word32));
            var rtl = new RtlTrace(0x123460)
            {
                m => m.Assign(r9, 0x00030000),
                m => m.Assign(r9, m.LoadDw(m.IAdd(r9, 0x1234))),
                m => m.Goto(r9)
            };

            var host = mr.Stub<IRewriterHost>();
            var services = mr.Stub<IServiceProvider>();
            var arch = mr.Stub<IProcessorArchitecture>();
            var state = mr.Stub<ProcessorState>();
            var addr = Address.Ptr32(0x00031234);
            arch.Stub(a => a.CreateFrame()).Return(frame);
            arch.Stub(a => a.CreateProcessorState()).Return(state);
            arch.Stub(a => a.CreateRewriter(null, null, null, null)).IgnoreArguments().Return(rtl);
            arch.Stub(a => a.MakeAddressFromConstant(Arg<Constant>.Is.NotNull)).Return(addr);
            host.Stub(h => h.GetImportedProcedure(
                Arg<Address>.Is.Equal(addr),
                Arg<Address>.Is.NotNull)).Return(new ExternalProcedure("foo", new ProcedureSignature()));
            mr.ReplayAll();

            var platform = new Win32MipsPlatform(services, arch);
            var result = platform.GetTrampolineDestination(new LeImageReader(new byte[0]), host);
            Assert.IsNotNull(result);
        }
    }
}
