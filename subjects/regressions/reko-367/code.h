// code.h
// Generated by decompiling code.bin
// using Reko decompiler version 0.7.2.0.

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_3: (fn void (word32))
	T_3 (in fn800003CC : ptr32)
	T_4 (in signature of fn800003CC : void)
Eq_45: (fn real80 (word32, real96, real96))
	T_45 (in fn80000132 : ptr32)
	T_46 (in signature of fn80000132 : void)
	T_77 (in fn80000132 : ptr32)
	T_115 (in fn80000132 : ptr32)
Eq_55: (fn real80 (word32, real96))
	T_55 (in fn8000018E : ptr32)
	T_56 (in signature of fn8000018E : void)
	T_86 (in fn8000018E : ptr32)
	T_121 (in fn8000018E : ptr32)
Eq_67: (union "Eq_67" (real80 u0) (ptr32 u1))
	T_67 (in fp2Out : Eq_67)
	T_106 (in out fp2_32 : ptr32)
	T_133 (in out fp2_50 : ptr32)
Eq_96: (fn real80 (word32, real96))
	T_96 (in fn800001F2 : ptr32)
	T_97 (in signature of fn800001F2 : void)
	T_125 (in fn800001F2 : ptr32)
Eq_102: (fn real80 (word32, real96, Eq_67))
	T_102 (in fn800002AE : ptr32)
	T_103 (in signature of fn800002AE : void)
	T_130 (in fn800002AE : ptr32)
Eq_135: (fn void (word32, real96))
	T_135 (in fn8000036C : ptr32)
	T_136 (in signature of fn8000036C : void)
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in d2 : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_3: (in fn800003CC : ptr32)
  Class: Eq_3
  DataType: (ptr Eq_3)
  OrigDataType: (ptr (fn T_6 (T_2)))
T_4: (in signature of fn800003CC : void)
  Class: Eq_3
  DataType: (ptr Eq_3)
  OrigDataType: 
T_5: (in d2 : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_6: (in fn800003CC(d2) : void)
  Class: Eq_6
  DataType: void
  OrigDataType: void
T_7: (in fp0 : real80)
  Class: Eq_7
  DataType: real80
  OrigDataType: real80
T_8: (in d2 : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_9: (in rArg04 : real96)
  Class: Eq_9
  DataType: real96
  OrigDataType: real96
T_10: (in rArg10 : real96)
  Class: Eq_10
  DataType: real96
  OrigDataType: real96
T_11: (in dwLoc14_17 : word32)
  Class: Eq_11
  DataType: word32
  OrigDataType: word32
T_12: (in 0x00000000 : word32)
  Class: Eq_11
  DataType: word32
  OrigDataType: word32
T_13: (in rLoc24 : real96)
  Class: Eq_13
  DataType: real96
  OrigDataType: real96
T_14: (in dwLoc10 : word32)
  Class: Eq_14
  DataType: word32
  OrigDataType: word32
T_15: (in DPB(rLoc24, dwLoc10, 0) : real96)
  Class: Eq_15
  DataType: real96
  OrigDataType: real96
T_16: (in (real80) DPB(rLoc24, dwLoc10, 0) : real80)
  Class: Eq_7
  DataType: real80
  OrigDataType: real80
T_17: (in 0x00000001 : word32)
  Class: Eq_17
  DataType: word32
  OrigDataType: word32
T_18: (in dwLoc14_17 + 0x00000001 : word32)
  Class: Eq_11
  DataType: word32
  OrigDataType: word32
T_19: (in (real80) dwLoc14_17 : real80)
  Class: Eq_19
  DataType: real80
  OrigDataType: real80
T_20: (in (real96) (real80) dwLoc14_17 : real96)
  Class: Eq_10
  DataType: real96
  OrigDataType: real96
T_21: (in (real96) (real80) dwLoc14_17 >= rArg10 : bool)
  Class: Eq_21
  DataType: bool
  OrigDataType: bool
T_22: (in fp0 : real80)
  Class: Eq_22
  DataType: real80
  OrigDataType: real80
T_23: (in d2 : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_24: (in rArg04 : real96)
  Class: Eq_24
  DataType: real96
  OrigDataType: real96
T_25: (in dwLoc14_19 : int32)
  Class: Eq_25
  DataType: int32
  OrigDataType: int32
T_26: (in 1 : int32)
  Class: Eq_25
  DataType: int32
  OrigDataType: int32
T_27: (in rLoc24 : real96)
  Class: Eq_27
  DataType: real96
  OrigDataType: real96
T_28: (in dwLoc10 : word32)
  Class: Eq_28
  DataType: word32
  OrigDataType: word32
T_29: (in DPB(rLoc24, dwLoc10, 0) : real96)
  Class: Eq_29
  DataType: real96
  OrigDataType: real96
T_30: (in (real80) DPB(rLoc24, dwLoc10, 0) : real80)
  Class: Eq_22
  DataType: real80
  OrigDataType: real80
T_31: (in 0x00000001 : word32)
  Class: Eq_31
  DataType: word32
  OrigDataType: word32
T_32: (in dwLoc14_19 + 0x00000001 : word32)
  Class: Eq_25
  DataType: int32
  OrigDataType: int32
T_33: (in (real80) dwLoc14_19 : real80)
  Class: Eq_33
  DataType: real80
  OrigDataType: real80
T_34: (in (real96) (real80) dwLoc14_19 : real96)
  Class: Eq_24
  DataType: real96
  OrigDataType: real96
T_35: (in (real96) (real80) dwLoc14_19 > rArg04 : bool)
  Class: Eq_35
  DataType: bool
  OrigDataType: bool
T_36: (in fp0 : real80)
  Class: Eq_36
  DataType: real80
  OrigDataType: real80
T_37: (in d2 : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_38: (in rArg04 : real96)
  Class: Eq_38
  DataType: real96
  OrigDataType: real96
T_39: (in dwLoc20_28 : int32)
  Class: Eq_39
  DataType: int32
  OrigDataType: int32
T_40: (in 3 : int32)
  Class: Eq_39
  DataType: int32
  OrigDataType: int32
T_41: (in rLoc3C : real96)
  Class: Eq_24
  DataType: real96
  OrigDataType: real96
T_42: (in dwLoc10 : word32)
  Class: Eq_42
  DataType: word32
  OrigDataType: word32
T_43: (in DPB(rLoc3C, dwLoc10, 0) : real96)
  Class: Eq_43
  DataType: real96
  OrigDataType: real96
T_44: (in (real80) DPB(rLoc3C, dwLoc10, 0) : real80)
  Class: Eq_36
  DataType: real80
  OrigDataType: real80
T_45: (in fn80000132 : ptr32)
  Class: Eq_45
  DataType: (ptr Eq_45)
  OrigDataType: (ptr (fn T_51 (T_37, T_48, T_50)))
T_46: (in signature of fn80000132 : void)
  Class: Eq_45
  DataType: (ptr Eq_45)
  OrigDataType: 
T_47: (in (real80) rArg04 : real80)
  Class: Eq_47
  DataType: real80
  OrigDataType: real80
T_48: (in (real96) (real80) rArg04 : real96)
  Class: Eq_9
  DataType: real96
  OrigDataType: real96
T_49: (in (real80) dwLoc20_28 : real80)
  Class: Eq_49
  DataType: real80
  OrigDataType: real80
T_50: (in (real96) (real80) dwLoc20_28 : real96)
  Class: Eq_10
  DataType: real96
  OrigDataType: real96
T_51: (in fn80000132(d2, (real96) (real80) rArg04, (real96) (real80) dwLoc20_28) : real80)
  Class: Eq_51
  DataType: real80
  OrigDataType: real80
T_52: (in v19_67 : real96)
  Class: Eq_24
  DataType: real96
  OrigDataType: real96
T_53: (in (real80) dwLoc20_28 : real80)
  Class: Eq_53
  DataType: real80
  OrigDataType: real80
T_54: (in (real96) (real80) dwLoc20_28 : real96)
  Class: Eq_24
  DataType: real96
  OrigDataType: real96
T_55: (in fn8000018E : ptr32)
  Class: Eq_55
  DataType: (ptr Eq_55)
  OrigDataType: (ptr (fn T_57 (T_37, T_52)))
T_56: (in signature of fn8000018E : void)
  Class: Eq_55
  DataType: (ptr Eq_55)
  OrigDataType: 
T_57: (in fn8000018E(d2, v19_67) : real80)
  Class: Eq_57
  DataType: real80
  OrigDataType: real80
T_58: (in 0x00000002 : word32)
  Class: Eq_58
  DataType: word32
  OrigDataType: word32
T_59: (in dwLoc20_28 + 0x00000002 : word32)
  Class: Eq_39
  DataType: int32
  OrigDataType: int32
T_60: (in 100 : int32)
  Class: Eq_60
  DataType: int32
  OrigDataType: int32
T_61: (in 100 - dwLoc20_28 : word32)
  Class: Eq_61
  DataType: int32
  OrigDataType: int32
T_62: (in 0x00000000 : word32)
  Class: Eq_61
  DataType: int32
  OrigDataType: int32
T_63: (in 100 - dwLoc20_28 < 0x00000000 : bool)
  Class: Eq_63
  DataType: bool
  OrigDataType: bool
T_64: (in fp0 : real80)
  Class: Eq_64
  DataType: real80
  OrigDataType: real80
T_65: (in d2 : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_66: (in rArg04 : real96)
  Class: Eq_66
  DataType: real96
  OrigDataType: real96
T_67: (in fp2Out : Eq_67)
  Class: Eq_67
  DataType: Eq_67
  OrigDataType: ptr32
T_68: (in dwLoc20_27 : int32)
  Class: Eq_68
  DataType: int32
  OrigDataType: int32
T_69: (in 2 : int32)
  Class: Eq_68
  DataType: int32
  OrigDataType: int32
T_70: (in fp2_118 : real80)
  Class: Eq_70
  DataType: real80
  OrigDataType: real80
T_71: (in fp2 : real80)
  Class: Eq_71
  DataType: real80
  OrigDataType: real80
T_72: (in *fp2Out : real80)
  Class: Eq_71
  DataType: real80
  OrigDataType: real80
T_73: (in rLoc3C : real96)
  Class: Eq_24
  DataType: real96
  OrigDataType: real96
T_74: (in dwLoc10 : word32)
  Class: Eq_74
  DataType: word32
  OrigDataType: word32
T_75: (in DPB(rLoc3C, dwLoc10, 0) : real96)
  Class: Eq_75
  DataType: real96
  OrigDataType: real96
T_76: (in (real80) DPB(rLoc3C, dwLoc10, 0) : real80)
  Class: Eq_64
  DataType: real80
  OrigDataType: real80
T_77: (in fn80000132 : ptr32)
  Class: Eq_45
  DataType: (ptr Eq_45)
  OrigDataType: (ptr (fn T_82 (T_65, T_79, T_81)))
T_78: (in (real80) rArg04 : real80)
  Class: Eq_78
  DataType: real80
  OrigDataType: real80
T_79: (in (real96) (real80) rArg04 : real96)
  Class: Eq_9
  DataType: real96
  OrigDataType: real96
T_80: (in (real80) dwLoc20_27 : real80)
  Class: Eq_80
  DataType: real80
  OrigDataType: real80
T_81: (in (real96) (real80) dwLoc20_27 : real96)
  Class: Eq_10
  DataType: real96
  OrigDataType: real96
T_82: (in fn80000132(d2, (real96) (real80) rArg04, (real96) (real80) dwLoc20_27) : real80)
  Class: Eq_51
  DataType: real80
  OrigDataType: real80
T_83: (in v19_67 : real96)
  Class: Eq_24
  DataType: real96
  OrigDataType: real96
T_84: (in (real80) dwLoc20_27 : real80)
  Class: Eq_84
  DataType: real80
  OrigDataType: real80
T_85: (in (real96) (real80) dwLoc20_27 : real96)
  Class: Eq_24
  DataType: real96
  OrigDataType: real96
T_86: (in fn8000018E : ptr32)
  Class: Eq_55
  DataType: (ptr Eq_55)
  OrigDataType: (ptr (fn T_87 (T_65, T_83)))
T_87: (in fn8000018E(d2, v19_67) : real80)
  Class: Eq_57
  DataType: real80
  OrigDataType: real80
T_88: (in 0x00000002 : word32)
  Class: Eq_88
  DataType: word32
  OrigDataType: word32
T_89: (in dwLoc20_27 + 0x00000002 : word32)
  Class: Eq_68
  DataType: int32
  OrigDataType: int32
T_90: (in 100 : int32)
  Class: Eq_90
  DataType: int32
  OrigDataType: int32
T_91: (in 100 - dwLoc20_27 : word32)
  Class: Eq_91
  DataType: int32
  OrigDataType: int32
T_92: (in 0x00000000 : word32)
  Class: Eq_91
  DataType: int32
  OrigDataType: int32
T_93: (in 100 - dwLoc20_27 < 0x00000000 : bool)
  Class: Eq_93
  DataType: bool
  OrigDataType: bool
T_94: (in d2 : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_95: (in rArg04 : real96)
  Class: Eq_95
  DataType: real96
  OrigDataType: real96
T_96: (in fn800001F2 : ptr32)
  Class: Eq_96
  DataType: (ptr Eq_96)
  OrigDataType: (ptr (fn T_100 (T_94, T_99)))
T_97: (in signature of fn800001F2 : void)
  Class: Eq_96
  DataType: (ptr Eq_96)
  OrigDataType: 
T_98: (in (real80) rArg04 : real80)
  Class: Eq_98
  DataType: real80
  OrigDataType: real80
T_99: (in (real96) (real80) rArg04 : real96)
  Class: Eq_38
  DataType: real96
  OrigDataType: real96
T_100: (in fn800001F2(d2, (real96) (real80) rArg04) : real80)
  Class: Eq_100
  DataType: real80
  OrigDataType: real80
T_101: (in fp2_32 : real80)
  Class: Eq_101
  DataType: real80
  OrigDataType: real80
T_102: (in fn800002AE : ptr32)
  Class: Eq_102
  DataType: (ptr Eq_102)
  OrigDataType: (ptr (fn T_107 (T_94, T_105, T_106)))
T_103: (in signature of fn800002AE : void)
  Class: Eq_102
  DataType: (ptr Eq_102)
  OrigDataType: 
T_104: (in (real80) rArg04 : real80)
  Class: Eq_104
  DataType: real80
  OrigDataType: real80
T_105: (in (real96) (real80) rArg04 : real96)
  Class: Eq_66
  DataType: real96
  OrigDataType: real96
T_106: (in out fp2_32 : ptr32)
  Class: Eq_67
  DataType: Eq_67
  OrigDataType: (union (real80 u0) (ptr32 u1))
T_107: (in fn800002AE(d2, (real96) (real80) rArg04, out fp2_32) : real80)
  Class: Eq_107
  DataType: real80
  OrigDataType: real80
T_108: (in v6_10 : real96)
  Class: Eq_108
  DataType: real96
  OrigDataType: real96
T_109: (in 80000538 : ptr32)
  Class: Eq_109
  DataType: (ptr real96)
  OrigDataType: (ptr (struct (0 T_112 t0000)))
T_110: (in 0x00000000 : word32)
  Class: Eq_110
  DataType: word32
  OrigDataType: word32
T_111: (in 0x80000538 + 0x00000000 : word32)
  Class: Eq_111
  DataType: (ptr real96)
  OrigDataType: (ptr T_112)
T_112: (in Mem0[0x80000538 + 0x00000000:real96] : real96)
  Class: Eq_112
  DataType: real96
  OrigDataType: real96
T_113: (in (real80) *(real96 *) 0x80000538 : real80)
  Class: Eq_113
  DataType: real80
  OrigDataType: real80
T_114: (in (real96) (real80) *(real96 *) 0x80000538 : real96)
  Class: Eq_108
  DataType: real96
  OrigDataType: real96
T_115: (in fn80000132 : ptr32)
  Class: Eq_45
  DataType: (ptr Eq_45)
  OrigDataType: (ptr (fn T_120 (T_5, T_117, T_119)))
T_116: (in (real80) v6_10 : real80)
  Class: Eq_116
  DataType: real80
  OrigDataType: real80
T_117: (in (real96) (real80) v6_10 : real96)
  Class: Eq_9
  DataType: real96
  OrigDataType: real96
T_118: (in (real80) v6_10 : real80)
  Class: Eq_118
  DataType: real80
  OrigDataType: real80
T_119: (in (real96) (real80) v6_10 : real96)
  Class: Eq_10
  DataType: real96
  OrigDataType: real96
T_120: (in fn80000132(d2, (real96) (real80) v6_10, (real96) (real80) v6_10) : real80)
  Class: Eq_51
  DataType: real80
  OrigDataType: real80
T_121: (in fn8000018E : ptr32)
  Class: Eq_55
  DataType: (ptr Eq_55)
  OrigDataType: (ptr (fn T_124 (T_5, T_123)))
T_122: (in (real80) v6_10 : real80)
  Class: Eq_122
  DataType: real80
  OrigDataType: real80
T_123: (in (real96) (real80) v6_10 : real96)
  Class: Eq_24
  DataType: real96
  OrigDataType: real96
T_124: (in fn8000018E(d2, (real96) (real80) v6_10) : real80)
  Class: Eq_57
  DataType: real80
  OrigDataType: real80
T_125: (in fn800001F2 : ptr32)
  Class: Eq_96
  DataType: (ptr Eq_96)
  OrigDataType: (ptr (fn T_128 (T_5, T_127)))
T_126: (in (real80) v6_10 : real80)
  Class: Eq_126
  DataType: real80
  OrigDataType: real80
T_127: (in (real96) (real80) v6_10 : real96)
  Class: Eq_38
  DataType: real96
  OrigDataType: real96
T_128: (in fn800001F2(d2, (real96) (real80) v6_10) : real80)
  Class: Eq_100
  DataType: real80
  OrigDataType: real80
T_129: (in fp2_50 : real80)
  Class: Eq_129
  DataType: real80
  OrigDataType: real80
T_130: (in fn800002AE : ptr32)
  Class: Eq_102
  DataType: (ptr Eq_102)
  OrigDataType: (ptr (fn T_134 (T_5, T_132, T_133)))
T_131: (in (real80) v6_10 : real80)
  Class: Eq_131
  DataType: real80
  OrigDataType: real80
T_132: (in (real96) (real80) v6_10 : real96)
  Class: Eq_66
  DataType: real96
  OrigDataType: real96
T_133: (in out fp2_50 : ptr32)
  Class: Eq_67
  DataType: Eq_67
  OrigDataType: (union (real80 u0) (ptr32 u1))
T_134: (in fn800002AE(d2, (real96) (real80) v6_10, out fp2_50) : real80)
  Class: Eq_107
  DataType: real80
  OrigDataType: real80
T_135: (in fn8000036C : ptr32)
  Class: Eq_135
  DataType: (ptr Eq_135)
  OrigDataType: (ptr (fn T_139 (T_5, T_138)))
T_136: (in signature of fn8000036C : void)
  Class: Eq_135
  DataType: (ptr Eq_135)
  OrigDataType: 
T_137: (in (real80) v6_10 : real80)
  Class: Eq_137
  DataType: real80
  OrigDataType: real80
T_138: (in (real96) (real80) v6_10 : real96)
  Class: Eq_95
  DataType: real96
  OrigDataType: real96
T_139: (in fn8000036C(d2, (real96) (real80) v6_10) : void)
  Class: Eq_139
  DataType: void
  OrigDataType: void
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_3)(word32);

typedef real80 (Eq_45)(word32, real96, real96);

typedef real80 (Eq_55)(word32, real96);

typedef union Eq_67 {
	real80 u0;
	ptr32 u1;
} Eq_67;

typedef real80 (Eq_96)(word32, real96);

typedef real80 (Eq_102)(word32, real96, Eq_67);

typedef void (Eq_135)(word32, real96);

