// VCExeSample.c
// Generated by decompiling VCExeSample.exe
// using Reko decompiler version 0.7.2.0.

#include "VCExeSample.h"

// 00401000: Register int32 main(Stack int32 argc, Stack (ptr (ptr char)) argv)
int32 main(int32 argc, char * * argv)
{
	test1(*argv, argc, "test123", 1.0F);
	return 0x00;
}

// 00401030: void test1(Stack (ptr char) arg1, Stack int32 arg2, Stack (ptr char) arg3, Stack real32 arg4)
void test1(char * arg1, int32 arg2, char * arg3, real32 arg4)
{
	printf("%s %d %s %f", arg1, arg2, arg3, (real64) arg4);
}

// 00401060: void test2(Stack word32 dwArg04)
void test2(word32 dwArg04)
{
	test1("1", 0x02, "3", globals->r4020E8);
	if (dwArg04 == 0x00)
		test1("5", 0x06, "7", globals->r4020E4);
}

// 004010B0: void indirect_call_test3(Stack (ptr Eq_51) c)
void indirect_call_test3(cdecl_class * c)
{
	c->vtbl->method04(c, 1000);
}

// 004010D0: void test4()
void test4()
{
	struct Eq_61 * ecx_10 = globals->gbl_c;
	struct Eq_64 * edx_11 = ecx_10->ptr0000;
	<anonymous> * eax_12 = edx_11->ptr0000;
	word32 esp_13;
	word32 ebp_14;
	word32 eax_15;
	word32 ecx_16;
	word32 edx_17;
	byte SCZO_18;
	eax_12();
}

// 004010F0: void test5()
void test5()
{
	globals->gbl_c->ptr0000->ptr0004(globals->gbl_c, 999, globals->r4020EC);
}

// 00401120: void test6(Stack (ptr Eq_92) c, Stack int32 a, Stack int32 b)
void test6(cdecl_class * c, int32 a, int32 b)
{
	c->vtbl->method04(c, c->vtbl->sum(c, a, b));
}

// 00401160: void test7(Stack real64 rArg04)
void test7(real64 rArg04)
{
	ptr32 esp_12 = fp - 0x04;
	if (1.0 < rArg04)
	{
		struct Eq_131 * edx_38 = *globals->gbl_thiscall;
		<anonymous> * eax_40 = edx_38->ptr0000;
		word32 ebp_42;
		byte FPUF_43;
		byte SCZO_44;
		word32 eax_45;
		word32 edx_46;
		word32 ecx_47;
		eax_40();
	}
	real64 * esp_13 = esp_12 - 0x08;
	*esp_13 = rArg04;
	*(esp_13 - 0x04) = 0x0D;
	struct Eq_131 * edx_20 = *globals->gbl_thiscall;
	<anonymous> * eax_22 = edx_20->ptr0004;
	word32 esp_23;
	word32 ebp_24;
	byte FPUF_25;
	byte SCZO_26;
	word32 eax_27;
	word32 edx_28;
	word32 ecx_29;
	eax_22();
}

// 004011B0: Register word32 nested_if_blocks_test8(Stack real64 rArg04, FpuStack real64 rArg0)
word32 nested_if_blocks_test8(real64 rArg04, real64 rArg0)
{
	struct Eq_131 * edx_15 = *globals->gbl_thiscall;
	<anonymous> * eax_17 = edx_15->ptr0004;
	word32 ebp_19;
	byte SCZO_20;
	word32 eax_21;
	word32 edx_22;
	word32 ecx_23;
	byte FPUF_24;
	ptr32 esp_18;
	eax_17();
	if (globals->r4020F8 != rArg04 && globals->r4020F0 > rArg04)
	{
		*(esp_18 - 0x08) = rArg04;
		struct Eq_131 * edx_54 = *globals->gbl_thiscall;
		<anonymous> * eax_56 = edx_54->ptr0000;
		word32 ebp_58;
		byte SCZO_59;
		word32 eax_60;
		word32 edx_61;
		word32 ecx_62;
		byte FPUF_63;
		eax_56();
	}
	struct Eq_187 * esp_35 = esp_18 - 0x04;
	esp_35->dw0000 = 0x07;
	*(esp_35 - 0x04) = 0x06;
	*(esp_35 - 0x08) = (struct Eq_61 **) globals->gbl_c;
	test6(*(esp_35 - 0x08), *(esp_35 - 0x04), esp_35->dw0000);
	return esp_35->dw0004;
}

// 00401230: void loop_test9(Stack real32 rArg04, FpuStack real64 rArg0)
void loop_test9(real32 rArg04, real64 rArg0)
{
	ptr32 esp_11 = fp - 0x10;
	word32 dwLoc08_12 = 0x00;
	while (true)
	{
		real64 * esp_16 = esp_11 - 0x08;
		*esp_16 = (real64) rArg04;
		*(esp_16 - 0x04) = dwLoc08_12;
		struct Eq_131 * eax_23 = *globals->gbl_thiscall;
		<anonymous> * edx_25 = eax_23->ptr0004;
		ptr32 esp_27;
		word32 ebp_28;
		byte SCZO_29;
		word32 ecx_30;
		word32 edx_31;
		word32 eax_32;
		byte FPUF_33;
		edx_25();
		if (rArg0 <= (real64) dwLoc08_12)
			break;
		rArg0 = (real64) rArg04;
		*(esp_27 - 0x08) = rArg0;
		struct Eq_131 * edx_41 = *globals->gbl_thiscall;
		<anonymous> * eax_43 = edx_41->ptr0000;
		word32 ebp_45;
		byte SCZO_46;
		word32 ecx_47;
		word32 edx_48;
		word32 eax_49;
		byte FPUF_50;
		eax_43();
		dwLoc08_12 = dwLoc08_12 + 0x01;
	}
}

// 004012A0: void const_div_test10(Stack word32 dwArg04)
void const_div_test10(word32 dwArg04)
{
	uint32 eax_16 = 0x0A;
	uint32 ecx_19 = 0x03;
	if (dwArg04 != 0x00)
	{
		eax_16 = 0x03;
		ecx_19 = 0x01;
	}
	globals->dw40301C = ecx_19;
	globals->dw403020 = eax_16;
}

// 004012D0: void loop_test11(Register word32 ecx, Register word32 ebp)
void loop_test11(word32 ecx, word32 ebp)
{
	struct Eq_327 * ebp_19 = fp - 0x04;
	while (*(ebp_19 - 0x04) > 0x00)
	{
		ui32 eax_26 = *(ebp_19 - 0x04);
		ui32 eax_27 = eax_26 & 0x80000001;
		if ((eax_26 & 0x80000001) < 0x00)
			eax_27 = ((eax_26 & 0x80000001) - 0x01 | ~0x01) + 0x01;
		if (eax_27 == 0x00)
		{
			*(ebp_19 - 0x08) = (real32) ebp_19->r0008;
			real64 rLoc1_44 = (real64) *(ebp_19 - 0x08);
			*(fp - 0x10) = ecx;
			*(fp - 0x10) = (real32) rLoc1_44;
			loop_test9(rArg00, rArg0);
		}
		else
		{
			*(fp - 0x14) = ebp_19->r0008;
			ebp_19 = nested_if_blocks_test8(rArg00, rArg0);
		}
		word32 ecx_38 = *(ebp_19 - 0x04);
		*(ebp_19 - 0x04) = ecx_38 - 0x01;
		ecx = ecx_38 - 0x01;
	}
}

// 00401330: void nested_structs_test12(Stack (ptr Eq_416) dwArg04)
void nested_structs_test12(nested_structs_type * dwArg04)
{
	dwArg04->a = 0x01;
	dwArg04->str.b = 0x02;
	dwArg04->str.c = 0x03;
	dwArg04->d = 0x04;
}

// 00401360: void nested_structs_test13(Stack (ptr Eq_433) str)
void nested_structs_test13(nested_structs_type * str)
{
	nested_structs_test12(str);
}

