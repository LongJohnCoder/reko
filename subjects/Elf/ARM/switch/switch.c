// switch.c
// Generated by decompiling switch
// using Reko decompiler version 0.7.2.0.

#include "switch.h"

// 000082F0: Register word32 _init(Register word32 lr, Register word32 pc, Register out ptr32 r10Out)
word32 _init(word32 lr, word32 pc, ptr32 & r10Out)
{
	word32 r10_6;
	*r10Out = call_gmon_start(pc, lr);
	frame_dummy();
	word32 r4_8;
	__do_global_ctors_aux(dwArg00, out r4_8);
	return r4_8;
}

// 00008314: Register word32 abort(Register word32 pc)
word32 abort(word32 pc)
{
	<anonymous> ** ip_5 = pc + globals->dw8320;
	word32 sp_6;
	word32 pc_7;
	word32 ip_8;
	(*ip_5)();
	return ip_8;
}

// 00008324: void __libc_start_main(Register word32 pc)
void __libc_start_main(word32 pc)
{
	<anonymous> ** ip_5 = pc + globals->dw8330;
	word32 sp_6;
	word32 pc_7;
	word32 ip_8;
	(*ip_5)();
}

// 00008334: void _start(Register word32 pc, Register word32 r4, Register word32 r5, Register word32 r6, Register word32 r8, Stack word32 dwArg00)
void _start(word32 pc, word32 r4, word32 r5, word32 r6, word32 r8, word32 dwArg00)
{
	word32 ip_3 = globals->dw8360;
	uint16 * r0_14 = globals->ptr8364;
	__libc_start_main(pc);
	abort(pc);
	if (!Z)
		*r0_14 = (uint16) r8;
	if (Z)
		call_gmon_start(pc, ip_3);
	else
		call_gmon_start(pc, ip_3);
}

// 0000836C: Register word32 call_gmon_start(Register word32 pc, Stack word32 dwArg00)
word32 call_gmon_start(word32 pc, word32 dwArg00)
{
	<anonymous> ** r10_11 = pc + globals->dw8394;
	<anonymous> * r3_12 = *r10_11;
	if (r3_12 == null)
		return dwLoc08;
	word32 sp_26;
	word32 r10_27;
	word32 lr_28;
	word32 r3_29;
	word32 pc_30;
	byte NZCV_31;
	byte Z_32;
	r3_12();
	return r10_27;
}

// 0000839C: void __do_global_dtors_aux(Stack word32 dwArg00)
void __do_global_dtors_aux(word32 dwArg00)
{
	union Eq_111 * r5_10 = globals->ptr83F4;
	if (*r5_10 != 0x00)
		return;
	<anonymous> *** r4_29 = globals->ptr83F8;
	<anonymous> * r2_31 = **r4_29;
	if (r2_31 == null)
		*r5_10 = (union Eq_111 *) 0x01;
	else
	{
		*r4_29 = (<anonymous> ***) ((char *) *r4_29 + 0x04);
		word32 sp_38;
		word32 r4_39;
		word32 r5_40;
		word32 lr_41;
		word32 pc_42;
		word32 r3_43;
		byte NZCV_44;
		byte Z_45;
		word32 r2_46;
		r2_31();
	}
}

// 000083FC: void call___do_global_dtors_aux()
void call___do_global_dtors_aux()
{
}

// 00008404: void frame_dummy()
void frame_dummy()
{
	word32 * r0_3 = globals->ptr8424;
	if (*r0_3 == 0x00)
		return;
	word32 r3_14 = globals->dw8428;
	if (r3_14 == 0x00)
		return;
	word32 sp_17;
	word32 pc_18;
	word32 r0_19;
	word32 r3_20;
	byte NZCV_21;
	byte Z_22;
	fn00000000();
}

// 0000842C: void call_frame_dummy()
void call_frame_dummy()
{
}

// 00008434: Register Eq_174 frobulate(Register word32 lr, Register Eq_174 r0, Register ptr32 fp, Stack Eq_174 dwArg00)
Eq_174 frobulate(word32 lr, Eq_174 r0, ptr32 fp, Eq_174 dwArg00)
{
	return __divsi3(lr, r0 * r0, 1337);
}

// 00008470: void bazulate(Register word32 lr, Register Eq_174 r0, Register Eq_174 r1, Register ptr32 fp, Stack uint32 dwArg00)
void bazulate(word32 lr, Eq_174 r0, Eq_174 r1, ptr32 fp, uint32 dwArg00)
{
	__divsi3(lr, __divsi3(lr, r0 + r1, frobulate(lr, r0, fp - 0x04, r1)), frobulate(lr, r1, fp - 0x04, r4));
}

// 000084D4: Register ptr32 switcheroo(Register word32 lr, Register uint32 r0, Register ptr32 fp, Stack word32 dwArg00)
ptr32 switcheroo(word32 lr, uint32 r0, ptr32 fp, word32 dwArg00)
{
	if (r0 > 0x06)
	{
		bazulate(lr, 0x00, 0x00, fp - 0x04, r0);
		return fp;
	}
	else
	{
		word32 sp_30;
		word32 ip_31;
		ptr32 fp_32;
		word32 lr_33;
		word32 pc_34;
		word32 r0_35;
		word32 r3_36;
		byte NZCV_37;
		byte ZC_38;
		word32 r1_39;
		(*((char *) globals->a84F8 + r0 * 0x04))();
		return fp_32;
	}
}

// 0000855C: void main(Register word32 lr, Register uint32 r0, Register word32 r1, Stack word32 dwArg00)
void main(word32 lr, uint32 r0, word32 r1, word32 dwArg00)
{
	switcheroo(lr, r0, fp - 0x04, r1);
}

// 00008588: Register Eq_174 __divsi3(Register word32 lr, Register Eq_174 r0, Register Eq_174 r1)
Eq_174 __divsi3(word32 lr, Eq_174 r0, Eq_174 r1)
{
	int32 ip_4 = r0 ^ r1;
	uint32 r3_106 = 0x01;
	Eq_174 r2_100 = 0x00;
	Eq_174 r1_107 = r1;
	if (r1 == 0x00)
	{
		__div0(r0, lr);
		return 0x00;
	}
	else
	{
		Eq_174 r0_24 = r0;
		if (r0 >= r1)
		{
			do
			{
				bool C_117 = cond(r1_107 - 0x10000000);
				if (r1_107 < 0x10000000)
					C_117 = cond(r1_107 - r0);
				if (!C_117)
					r1_107 = r1_107 << 0x04;
				if (!C_117)
					r3_106 = r3_106 << 0x04;
			} while (C_117);
			do
			{
				bool C_111 = cond(r1_107 - 0x80000000);
				if (r1_107 < 0x80000000)
					C_111 = cond(r1_107 - r0);
				if (!C_111)
					r1_107 = r1_107 << 0x01;
				if (!C_111)
					r3_106 = r3_106 << 0x01;
			} while (C_111);
			do
			{
				Eq_174 r0_105;
				r0_105 = r0_24;
				if (r0_24 >= r1_107)
					r0_105 = r0_24 - r1_107;
				if (r0_24 >= r1_107)
					r2_100 = r2_100 | r3_106;
				Eq_174 r0_103;
				r0_103 = r0_105;
				if (r0_105 >= r1_107 >> 0x01)
					r0_103 = r0_105 - (r1_107 >> 0x01);
				if (r0_105 >= r1_107 >> 0x01)
					r2_100 = r2_100 | r3_106 >> 0x01;
				Eq_174 r0_101;
				r0_101 = r0_103;
				if (r0_103 >= r1_107 >> 0x02)
					r0_101 = r0_103 - (r1_107 >> 0x02);
				if (r0_103 >= r1_107 >> 0x02)
					r2_100 = r2_100 | r3_106 >> 0x02;
				r0_24 = r0_101;
				if (r0_101 >= r1_107 >> 0x03)
					r0_24 = r0_101 - (r1_107 >> 0x03);
				if (r0_101 >= r1_107 >> 0x03)
					r2_100 = r2_100 | r3_106 >> 0x03;
				if (r0_24 != 0x00)
					r3_106 = r3_106 >> 0x04;
				if (r0_24 != 0x00)
					r1_107 = r1_107 >> 0x04;
			} while (r0_24 != 0x00);
		}
		return r2_100;
	}
}

// 00008638: void __div0(Register Eq_174 r0, Stack word32 dwArg00)
void __div0(Eq_174 r0, word32 dwArg00)
{
	__syscall(0x00900014);
	if (r0 >= 1000)
		return;
	__syscall(0x00900025);
}

// 00008654: void __libc_csu_init(Register word32 lr, Register word32 pc, Stack word32 dwArg00)
void __libc_csu_init(word32 lr, word32 pc, word32 dwArg00)
{
	<anonymous> *** r10_18;
	Eq_350 r4_19 = _init(lr, pc, out r10_18);
	<anonymous> ** r1_22 = *r10_18;
	int32 r3_24 = r1_22 - *r10_18;
	if (r4_19 >= r3_24 >> 0x02)
		return;
	word32 sp_49;
	word32 r4_50;
	word32 r5_51;
	word32 r6_52;
	word32 r10_53;
	word32 lr_54;
	word32 pc_55;
	word32 r3_56;
	word32 r2_57;
	word32 r1_58;
	byte NZCV_59;
	byte C_60;
	bcuisposr0 None_61;
	(*r1_22)();
}

// 000086B0: void __libc_csu_fini(Register word32 pc, Register word32 r5, Stack word32 dwArg00)
void __libc_csu_fini(word32 pc, word32 r5, word32 dwArg00)
{
	<anonymous> *** r10_16 = pc + globals->dw8700;
	<anonymous> ** r1_17 = *r10_16;
	int32 r3_19 = r1_17 - *r10_16;
	if (r3_19 >> 0x02 == 0x00)
		_fini(r5);
	else
	{
		word32 sp_37;
		word32 r4_38;
		word32 r5_39;
		word32 r10_40;
		word32 lr_41;
		word32 pc_42;
		word32 r3_43;
		word32 r2_44;
		word32 r1_45;
		byte NZCV_46;
		byte Z_47;
		(*r1_17)();
	}
}

// 0000870C: Register ptr32 __do_global_ctors_aux(Stack word32 dwArg00, Register out ptr32 r4Out)
ptr32 __do_global_ctors_aux(word32 dwArg00, ptr32 & r4Out)
{
	<anonymous> * r2_9 = globals->ptr8740->ptrFFFFFFFC;
	if (r2_9 != (<anonymous> *) 0x01)
	{
		ptr32 sp_28;
		word32 r4_29;
		word32 lr_30;
		word32 pc_31;
		word32 r3_32;
		word32 r2_33;
		byte NZCV_34;
		byte Z_35;
		r2_9();
		return sp_28;
	}
	else
	{
		word32 r4_23;
		*r4Out = dwLoc08;
		return fp;
	}
}

// 00008744: void call___do_global_ctors_aux()
void call___do_global_ctors_aux()
{
}

// 0000874C: void _fini(Register word32 lr)
void _fini(word32 lr)
{
	__do_global_dtors_aux(lr);
}

