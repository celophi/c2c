#ifdef ZZ_INCLUDE_CODE
ZZ_3ED6C:
	T0 = EMU_ReadU32(A2);
	T1 = EMU_ReadU32(A2 + 4); //+ 0x4
	T2 = EMU_ReadU32(A2 + 8); //+ 0x8
	T3 = EMU_ReadU32(A2 + 12); //+ 0xC
	T4 = EMU_ReadU32(A2 + 16); //+ 0x10
	T5 = EMU_ReadU32(A3);
	T6 = EMU_ReadU32(A3 + 4); //+ 0x4
	T7 = EMU_ReadU32(A3 + 8); //+ 0x8
	GTE_SetRegister(GTE_CREG_RT11_RT12,T0);
	GTE_SetRegister(GTE_CREG_RT13_RT21,T1);
	GTE_SetRegister(GTE_CREG_RT22_RT23,T2);
	GTE_SetRegister(GTE_CREG_RT31_RT32,T3);
	GTE_SetRegister(GTE_CREG_RT33_NONE,T4);
	A3 = EMU_ReadU32(SP + 16); //+ 0x10
	T3 = EMU_ReadU32(SP + 20); //+ 0x14
	ZZ_CLOCKCYCLES(16,0x8003EE14);
	goto ZZ_3ED6C_A8;
ZZ_3ED6C_40:
	T0 = EMU_ReadU32(A1);
	T1 = EMU_ReadU32(A1 + 4); //+ 0x4
	T2 = EMU_ReadU32(A1 + 8); //+ 0x8
	T0 = (int32_t)T0 >> T3;
	T1 = (int32_t)T1 >> T3;
	T2 = (int32_t)T2 >> T3;
	T1 <<= 16;
	T0 &= 0xFFFF;
	T0 |= T1;
	GTE_SetRegister(GTE_DREG_VXY0,T0);
	GTE_SetRegister(GTE_DREG_VZ0,T2);
	A1 = EMU_CheckedAdd(A1,12);
	A0 = EMU_CheckedAdd(A0,12);
	GTE_Multiply_V0_Rotation();
	T0 = GTE_GetRegister(GTE_DREG_IR1);
	T1 = GTE_GetRegister(GTE_DREG_IR2);
	T2 = GTE_GetRegister(GTE_DREG_IR3);
	T0 <<= T3;
	T1 <<= T3;
	T2 <<= T3;
	T0 += T5;
	T1 += T6;
	T2 += T7;
	EMU_Write32(A0 - 12,T0); //+ 0xFFFFFFF4
	EMU_Write32(A0 - 8,T1); //+ 0xFFFFFFF8
	EMU_Write32(A0 - 4,T2); //+ 0xFFFFFFFC
	ZZ_CLOCKCYCLES(26,0x8003EE14);
ZZ_3ED6C_A8:
	if ((int32_t)A3 > 0)
	{
		A3 = EMU_CheckedAdd(A3,-1);
		ZZ_CLOCKCYCLES(2,0x8003EDAC);
		goto ZZ_3ED6C_40;
	}
	A3 = EMU_CheckedAdd(A3,-1);
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x8002AFC0,ZZ_2ABE4_3DC);
	ZZ_JUMPREGISTER(0x8002D068,ZZ_2CF64_104);
	ZZ_JUMPREGISTER_END();
ZZ_3ED6C_F0:
	V0 = GTE_GetRegister(GTE_DREG_SZ1);
	T8 = GTE_GetRegister(GTE_DREG_SZ2);
	T9 = GTE_GetRegister(GTE_DREG_SZ3);
	if ((int32_t)V0 <= 0)
	{
		V0 += T8;
		ZZ_CLOCKCYCLES(5,0x8003EFA4);
		goto ZZ_3ED6C_238;
	}
	V0 += T8;
	if ((int32_t)T8 <= 0)
	{
		V0 += T9;
		ZZ_CLOCKCYCLES(7,0x8003EFA4);
		goto ZZ_3ED6C_238;
	}
	V0 += T9;
	GTE_NormalClip();
	if ((int32_t)T9 <= 0)
	{
		V0 >>= 5;
		ZZ_CLOCKCYCLES(10,0x8003EFA4);
		goto ZZ_3ED6C_238;
	}
	V0 >>= 5;
	A3 = EMU_ReadU32(V1 + 236); //+ 0xEC
	T8 = EMU_ReadU32(V1 + 240); //+ 0xF0
	A1 = A3 & 0xFFFF;
	V0 = T8 - V0;
	T9 = T0 << 2;
	T8 = GTE_GetRegister(GTE_DREG_MAC0);
	T9 ^= A3;
	if (!T8)
	{
		T9 ^= T8;
		ZZ_CLOCKCYCLES(19,0x8003EFA4);
		goto ZZ_3ED6C_238;
	}
	T9 ^= T8;
	T8 = T0 << 3;
	if ((int32_t)T8 >= 0)
	{
		ZZ_CLOCKCYCLES(22,0x8003EEBC);
		goto ZZ_3ED6C_150;
	}
	if ((int32_t)T9 <= 0)
	{
		ZZ_CLOCKCYCLES(24,0x8003EFA4);
		goto ZZ_3ED6C_238;
	}
	ZZ_CLOCKCYCLES(24,0x8003EEBC);
ZZ_3ED6C_150:
	GTE_SetRegister(GTE_DREG_RGB0,T5);
	GTE_SetRegister(GTE_DREG_RGB1,T6);
	GTE_SetRegister(GTE_DREG_RGB2,T7);
	GTE_SetRegister(GTE_DREG_IR0,A1);
	T9 = T0 << 7;
	if ((int32_t)T9 < 0)
	{
		A0 = EMU_ReadU32(V1 + 112); //+ 0x70
		ZZ_CLOCKCYCLES(7,0x8003EEE4);
		goto ZZ_3ED6C_178;
	}
	A0 = EMU_ReadU32(V1 + 112); //+ 0x70
	if (!A1)
	{
		ZZ_CLOCKCYCLES(9,0x8003EEE4);
		goto ZZ_3ED6C_178;
	}
	GTE_DepthCueTriple();
	ZZ_CLOCKCYCLES(10,0x8003EEE4);
ZZ_3ED6C_178:
	if ((int32_t)V0 >= 0)
	{
		V0 <<= 2;
		ZZ_CLOCKCYCLES(2,0x8003EEF0);
		goto ZZ_3ED6C_184;
	}
	V0 <<= 2;
	V0 = 0;
	ZZ_CLOCKCYCLES(3,0x8003EEF0);
ZZ_3ED6C_184:
	T8 = EMU_CheckedAdd(V0,-8188);
	if ((int32_t)T8 <= 0)
	{
		V0 += FP;
		ZZ_CLOCKCYCLES(3,0x8003EF00);
		goto ZZ_3ED6C_194;
	}
	V0 += FP;
	V0 = EMU_CheckedAdd(FP,8188);
	ZZ_CLOCKCYCLES(4,0x8003EF00);
ZZ_3ED6C_194:
	if (A2)
	{
		T8 = 0x30000000;
		ZZ_CLOCKCYCLES(2,0x8003EF34);
		goto ZZ_3ED6C_1C8;
	}
	T8 = 0x30000000;
	EMU_Write32(S7 + 8,GTE_GetRegister(GTE_DREG_SXY0)); //+ 0x8
	EMU_Write32(S7 + 16,GTE_GetRegister(GTE_DREG_SXY1)); //+ 0x10
	EMU_Write32(S7 + 24,GTE_GetRegister(GTE_DREG_SXY2)); //+ 0x18
	T9 = GTE_GetRegister(GTE_DREG_RGB0);
	A0 = 28;
	T8 |= T9;
	EMU_Write32(S7 + 4,T8); //+ 0x4
	EMU_Write32(S7 + 12,GTE_GetRegister(GTE_DREG_RGB1)); //+ 0xC
	EMU_Write32(S7 + 20,GTE_GetRegister(GTE_DREG_RGB2)); //+ 0x14
	T9 = 0x6000000;
	ZZ_CLOCKCYCLES(13,0x8003EF88);
	goto ZZ_3ED6C_21C;
ZZ_3ED6C_1C8:
	T8 = EMU_ReadU32(A0 - 12); //+ 0xFFFFFFF4
	T9 = EMU_ReadU32(A0 - 8); //+ 0xFFFFFFF8
	A0 = EMU_ReadU32(A0 - 4); //+ 0xFFFFFFFC
	EMU_Write32(S7 + 8,GTE_GetRegister(GTE_DREG_SXY0)); //+ 0x8
	EMU_Write32(S7 + 20,GTE_GetRegister(GTE_DREG_SXY1)); //+ 0x14
	EMU_Write32(S7 + 32,GTE_GetRegister(GTE_DREG_SXY2)); //+ 0x20
	EMU_Write32(S7 + 12,T8); //+ 0xC
	EMU_Write32(S7 + 24,T9); //+ 0x18
	EMU_Write32(S7 + 36,A0); //+ 0x24
	A0 = GTE_GetRegister(GTE_DREG_RGB0);
	T8 = 0x600000;
	T9 &= T8;
	if (T8 == T9)
	{
		T8 = 0x34000000;
		ZZ_CLOCKCYCLES(14,0x8003EF70);
		goto ZZ_3ED6C_204;
	}
	T8 = 0x34000000;
	T8 = 0x36000000;
	ZZ_CLOCKCYCLES(15,0x8003EF70);
ZZ_3ED6C_204:
	T8 |= A0;
	EMU_Write32(S7 + 4,T8); //+ 0x4
	EMU_Write32(S7 + 16,GTE_GetRegister(GTE_DREG_RGB1)); //+ 0x10
	EMU_Write32(S7 + 28,GTE_GetRegister(GTE_DREG_RGB2)); //+ 0x1C
	A0 = 40;
	T9 = 0x9000000;
	ZZ_CLOCKCYCLES(6,0x8003EF88);
ZZ_3ED6C_21C:
	T8 = EMU_ReadU32(V0 + 24); //+ 0x18
	A1 = S7 << 8;
	T8 |= T9;
	EMU_Write32(S7,T8);
	A1 >>= 8;
	EMU_Write32(V0 + 24,A1); //+ 0x18
	S7 += A0;
	ZZ_CLOCKCYCLES(7,0x8003EFA4);
ZZ_3ED6C_238:
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(2);
	ZZ_JUMPREGISTER(0x8002AFC0,ZZ_2ABE4_3DC);
	ZZ_JUMPREGISTER(0x8002D068,ZZ_2CF64_104);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8003ED6C,0x8003EDAC,ZZ_3ED6C);
ZZ_MARK_TARGET(0x8003EDAC,0x8003EE14,ZZ_3ED6C_40);
ZZ_MARK_TARGET(0x8003EE14,0x8003EE24,ZZ_3ED6C_A8);
ZZ_MARK_TARGET(0x8003EE5C,0x8003EEBC,ZZ_3ED6C_F0);
ZZ_MARK_TARGET(0x8003EEBC,0x8003EEE4,ZZ_3ED6C_150);
ZZ_MARK_TARGET(0x8003EEE4,0x8003EEF0,ZZ_3ED6C_178);
ZZ_MARK_TARGET(0x8003EEF0,0x8003EF00,ZZ_3ED6C_184);
ZZ_MARK_TARGET(0x8003EF00,0x8003EF34,ZZ_3ED6C_194);
ZZ_MARK_TARGET(0x8003EF34,0x8003EF70,ZZ_3ED6C_1C8);
ZZ_MARK_TARGET(0x8003EF70,0x8003EF88,ZZ_3ED6C_204);
ZZ_MARK_TARGET(0x8003EF88,0x8003EFA4,ZZ_3ED6C_21C);
ZZ_MARK_TARGET(0x8003EFA4,0x8003EFAC,ZZ_3ED6C_238);
