#ifdef ZZ_INCLUDE_CODE
ZZ_3FFAC:
	V0 = T0 >> 13;
	V0 &= 0x7F8;
	T8 = T0 << 5;
	if ((int32_t)T8 >= 0)
	{
		V0 += V1;
		ZZ_CLOCKCYCLES(5,0x8003FFCC);
		goto ZZ_3FFAC_20;
	}
	V0 += V1;
	T9 = EMU_ReadU32(V0 + 320); //+ 0x140
	T8 = EMU_ReadU32(V0 + 324); //+ 0x144
	ZZ_CLOCKCYCLES(8,0x80040184);
	goto ZZ_3FFAC_1D8;
ZZ_3FFAC_20:
	if (GP)
	{
		T9 = S4 & 0x2;
		ZZ_CLOCKCYCLES(2,0x8003FFE8);
		goto ZZ_3FFAC_3C;
	}
	T9 = S4 & 0x2;
	S4 = EMU_CheckedAdd(S4,3);
	if (!T9)
	{
		EMU_ReadRight(S4 + -3,&T8); //+ 0xFFFFFFFD
		ZZ_CLOCKCYCLES(5,0x8004011C);
		goto ZZ_3FFAC_170;
	}
	EMU_ReadRight(S4 + -3,&T8); //+ 0xFFFFFFFD
	EMU_ReadLeft(S4,&T8);
	ZZ_CLOCKCYCLES(7,0x8004011C);
	goto ZZ_3FFAC_170;
ZZ_3FFAC_3C:
	AT = EMU_ReadU32(GP);
	GP = EMU_CheckedAdd(GP,4);
	T8 = AT >> 6;
	T8 &= 0x7;
	T9 = T8 ^ 0x1F;
	T8 += 1;
	A3 = T8 - 8;
	T4 += T8;
	if ((int32_t)T4 <= 0)
	{
		A0 = (int32_t)T3 >> T9;
		ZZ_CLOCKCYCLES(10,0x80040034);
		goto ZZ_3FFAC_88;
	}
	A0 = (int32_t)T3 >> T9;
	A0 = T3;
	T3 = EMU_ReadU32(S4);
	S4 = EMU_CheckedAdd(S4,4);
	T8 = T8 - T4;
	T8 = T3 >> T8;
	A0 |= T8;
	A0 = (int32_t)A0 >> T9;
	T8 = T4;
	T4 = EMU_CheckedAdd(T4,-32);
	ZZ_CLOCKCYCLES(19,0x80040034);
ZZ_3FFAC_88:
	if (!A3)
	{
		T3 <<= T8;
		ZZ_CLOCKCYCLES(2,0x80040050);
		goto ZZ_3FFAC_A4;
	}
	T3 <<= T8;
	T9 = (int32_t)AT >> 25;
	T9 <<= 1;
	T8 = EMU_ReadS8(V1 + 272); //+ 0x110
	A0 += T9;
	A0 += T8;
	ZZ_CLOCKCYCLES(7,0x80040050);
ZZ_3FFAC_A4:
	EMU_Write8(V1 + 272,A0); //+ 0x110
	T8 = AT >> 3;
	T8 &= 0x7;
	T9 = T8 ^ 0x1F;
	T8 += 1;
	A3 = T8 - 8;
	T4 += T8;
	if ((int32_t)T4 <= 0)
	{
		A0 = (int32_t)T3 >> T9;
		ZZ_CLOCKCYCLES(9,0x80040098);
		goto ZZ_3FFAC_EC;
	}
	A0 = (int32_t)T3 >> T9;
	A0 = T3;
	T3 = EMU_ReadU32(S4);
	S4 = EMU_CheckedAdd(S4,4);
	T8 = T8 - T4;
	T8 = T3 >> T8;
	A0 |= T8;
	A0 = (int32_t)A0 >> T9;
	T8 = T4;
	T4 = EMU_CheckedAdd(T4,-32);
	ZZ_CLOCKCYCLES(18,0x80040098);
ZZ_3FFAC_EC:
	if (!A3)
	{
		T3 <<= T8;
		ZZ_CLOCKCYCLES(2,0x800400B4);
		goto ZZ_3FFAC_108;
	}
	T3 <<= T8;
	T9 = AT << 7;
	T9 = (int32_t)T9 >> 24;
	T8 = EMU_ReadS8(V1 + 274); //+ 0x112
	A0 += T9;
	A0 += T8;
	ZZ_CLOCKCYCLES(7,0x800400B4);
ZZ_3FFAC_108:
	EMU_Write8(V1 + 274,A0); //+ 0x112
	T8 = AT & 0x7;
	T9 = T8 ^ 0x1F;
	T8 += 1;
	A3 = T8 - 8;
	T4 += T8;
	if ((int32_t)T4 <= 0)
	{
		A0 = (int32_t)T3 >> T9;
		ZZ_CLOCKCYCLES(8,0x800400F8);
		goto ZZ_3FFAC_14C;
	}
	A0 = (int32_t)T3 >> T9;
	A0 = T3;
	T3 = EMU_ReadU32(S4);
	S4 = EMU_CheckedAdd(S4,4);
	T8 = T8 - T4;
	T8 = T3 >> T8;
	A0 |= T8;
	A0 = (int32_t)A0 >> T9;
	T8 = T4;
	T4 = EMU_CheckedAdd(T4,-32);
	ZZ_CLOCKCYCLES(17,0x800400F8);
ZZ_3FFAC_14C:
	if (!A3)
	{
		T3 <<= T8;
		ZZ_CLOCKCYCLES(2,0x80040114);
		goto ZZ_3FFAC_168;
	}
	T3 <<= T8;
	T9 = AT << 15;
	T9 = (int32_t)T9 >> 24;
	T8 = EMU_ReadS8(V1 + 273); //+ 0x111
	A0 += T9;
	A0 += T8;
	ZZ_CLOCKCYCLES(7,0x80040114);
ZZ_3FFAC_168:
	EMU_Write8(V1 + 273,A0); //+ 0x111
	T8 = EMU_ReadU32(V1 + 272); //+ 0x110
	ZZ_CLOCKCYCLES(2,0x8004011C);
ZZ_3FFAC_170:
	AT = EMU_ReadU32(V1 + 280); //+ 0x118
	T8 <<= 2;
	T9 = T8 & T1;
	T9 += AT;
	AT = EMU_ReadU32(V1 + 284); //+ 0x11C
	T9 &= T2;
	T8 >>= 8;
	T8 &= 0x3FC;
	T8 += AT;
	GTE_SetRegister(GTE_DREG_VXY0,T9);
	GTE_SetRegister(GTE_DREG_VZ0,T8);
	GTE_SetRegister(GTE_DREG_VXY1,T9);
	GTE_SetRegister(GTE_DREG_VZ1,T8);
	GTE_SetRegister(GTE_DREG_VXY2,T9);
	GTE_SetRegister(GTE_DREG_VZ2,T8);
	GTE_Multiply_V1_Light();
	T9 = GTE_GetRegister(GTE_DREG_IR2);
	GTE_Multiply_V0_Light();
	A0 = GTE_GetRegister(GTE_DREG_IR1);
	T9 <<= 16;
	A0 &= 0xFFFF;
	T9 |= A0;
	GTE_Multiply_V2_Light();
	T8 = GTE_GetRegister(GTE_DREG_IR3);
	EMU_Write32(V0 + 320,T9); //+ 0x140
	EMU_Write32(V0 + 324,T8); //+ 0x144
	ZZ_CLOCKCYCLES(26,0x80040184);
ZZ_3FFAC_1D8:
	A0 = T0 >> 7;
	A1 = T0 << 4;
	if ((int32_t)A1 < 0)
	{
		A0 &= 0x1FC;
		ZZ_CLOCKCYCLES(4,0x800401A0);
		goto ZZ_3FFAC_1F4;
	}
	A0 &= 0x1FC;
	A0 += S6;
	ZZ_JUMPREGISTER_BEGIN(RA);
	A0 = EMU_ReadU32(A0);
	ZZ_CLOCKCYCLES_JR(7);
	ZZ_JUMPREGISTER(0x80040264,ZZ_3FFAC_2B8);
	ZZ_JUMPREGISTER(0x80040290,ZZ_3FFAC_2E4);
	ZZ_JUMPREGISTER(0x800402C4,ZZ_3FFAC_318);
	ZZ_JUMPREGISTER_END();
ZZ_3FFAC_1F4:
	A0 += V1;
	ZZ_JUMPREGISTER_BEGIN(RA);
	A0 = EMU_ReadU32(A0 + 320); //+ 0x140
	ZZ_CLOCKCYCLES_JR(3);
	ZZ_JUMPREGISTER(0x80040264,ZZ_3FFAC_2B8);
	ZZ_JUMPREGISTER(0x80040290,ZZ_3FFAC_2E4);
	ZZ_JUMPREGISTER(0x800402C4,ZZ_3FFAC_318);
	ZZ_JUMPREGISTER_END();
ZZ_3FFAC_200:
	A0 = EMU_ReadU32(GP + 108); //+ 0x6C
	EMU_Write32(V1 + 104,RA); //+ 0x68
	if (!A0)
	{
		ZZ_CLOCKCYCLES(4,0x8003E174);
		goto ZZ_3DFAC_1C8;
	}
	RA = 0x800401C4; //ZZ_3FFAC_218
	T9 = EMU_ReadU32(SP + 72); //+ 0x48
	ZZ_CLOCKCYCLES(6,0x80043A34);
	goto ZZ_43A34;
ZZ_3FFAC_218:
	RA = 0x800401CC; //ZZ_3FFAC_220
	T8 = EMU_ReadU32(SP + 32); //+ 0x20
	ZZ_CLOCKCYCLES(2,0x80043960);
	goto ZZ_43960;
ZZ_3FFAC_220:
	RA = 0x800401D4; //ZZ_3FFAC_228
	A0 = EMU_ReadU32(GP + 100); //+ 0x64
	ZZ_CLOCKCYCLES(2,0x80043A8C);
	goto ZZ_43A8C;
ZZ_3FFAC_228:
	if ((int32_t)T9 < 0)
	{
		EMU_Write32(V1 + 296,A0); //+ 0x128
		ZZ_CLOCKCYCLES(2,0x8003E604);
		goto ZZ_3DFAC_658;
	}
	EMU_Write32(V1 + 296,A0); //+ 0x128
	RA = 0x800401E4; //ZZ_3FFAC_238
	T9 = EMU_ReadU32(GP + 168); //+ 0xA8
	ZZ_CLOCKCYCLES(4,0x80043A24);
	goto ZZ_43A24;
ZZ_3FFAC_238:
	ZZ_JUMPREGISTER_BEGIN(T8);
	RA = 0x800401EC; //ZZ_3FFAC_240
	S3 = EMU_ReadU32(SP + 36); //+ 0x24
	ZZ_CLOCKCYCLES_JR(2);
	// UNIMPLEMENTED JUMP-TO-REGISTER-AND-LINK (T8,800401E4)
	ZZ_JUMPREGISTER_END();
ZZ_3FFAC_240:
	if (T8)
	{
		ZZ_CLOCKCYCLES(2,0x8003E784);
		goto ZZ_3DFAC_7D8;
	}
	T8 = EMU_ReadU32(SP + 20); //+ 0x14
	T0 = EMU_ReadU32(T8);
	T1 = EMU_ReadU32(T8 + 4); //+ 0x4
	T2 = EMU_ReadU32(T8 + 8); //+ 0x8
	T3 = EMU_ReadU32(T8 + 12); //+ 0xC
	T4 = EMU_ReadU32(T8 + 16); //+ 0x10
	GTE_SetRegister(GTE_CREG_L11_L12,T0);
	GTE_SetRegister(GTE_CREG_L13_L21,T1);
	GTE_SetRegister(GTE_CREG_L22_L23,T2);
	GTE_SetRegister(GTE_CREG_L31_L32,T3);
	GTE_SetRegister(GTE_CREG_L33_NONE,T4);
	T0 = EMU_ReadU32(V1 + 32); //+ 0x20
	T1 = EMU_ReadU32(V1 + 36); //+ 0x24
	T2 = EMU_ReadU32(V1 + 40); //+ 0x28
	T3 = EMU_ReadU32(V1 + 44); //+ 0x2C
	RA = 0x8004023C; //ZZ_3FFAC_290
	T4 = EMU_ReadU32(V1 + 48); //+ 0x30
	ZZ_CLOCKCYCLES(20,0x8004330C);
	goto ZZ_4330C;
ZZ_3FFAC_290:
	RA = 0x80040244; //ZZ_3FFAC_298
	A0 = EMU_CheckedAdd(V1,32);
	ZZ_CLOCKCYCLES(2,0x800433A8);
	goto ZZ_433A8;
ZZ_3FFAC_298:
	RA = 0x8004024C; //ZZ_3FFAC_2A0
	ZZ_CLOCKCYCLES(2,0x800439E8);
	goto ZZ_439E8;
ZZ_3FFAC_2A0:
	RA = 0x80040254; //ZZ_3FFAC_2A8
	ZZ_CLOCKCYCLES(2,0x8004388C);
	goto ZZ_4388C;
ZZ_3FFAC_2A8:
	if (!T9)
	{
		ZZ_CLOCKCYCLES(2,0x8003E784);
		goto ZZ_3DFAC_7D8;
	}
	RA = 0x80040264; //ZZ_3FFAC_2B8
	ZZ_CLOCKCYCLES(4,0x8003FFAC);
	goto ZZ_3FFAC;
ZZ_3FFAC_2B8:
	GTE_SetRegister(GTE_DREG_VXY0,T9);
	GTE_SetRegister(GTE_DREG_VZ0,T8);
	EMU_Write32(V1 + 128,T9); //+ 0x80
	EMU_Write32(V1 + 132,T8); //+ 0x84
	T8 = EMU_ReadU32(V1 + 296); //+ 0x128
	T9 = (int32_t)T9 >> 16;
	T9 = T8 - T9;
	EMU_Write32(V1 + 116,T9); //+ 0x74
	T0 = EMU_ReadU32(S2);
	RA = 0x80040290; //ZZ_3FFAC_2E4
	T5 = A0;
	ZZ_CLOCKCYCLES(11,0x8003FFAC);
	goto ZZ_3FFAC;
ZZ_3FFAC_2E4:
	GTE_SetRegister(GTE_DREG_VXY1,T9);
	GTE_SetRegister(GTE_DREG_VZ1,T8);
	EMU_Write32(V1 + 144,T9); //+ 0x90
	EMU_Write32(V1 + 148,T8); //+ 0x94
	T8 = EMU_ReadU32(V1 + 296); //+ 0x128
	T9 = (int32_t)T9 >> 16;
	T9 = T8 - T9;
	EMU_Write32(V1 + 120,T9); //+ 0x78
	T0 = EMU_ReadU32(S2 + 4); //+ 0x4
	S2 = EMU_CheckedAdd(S2,8);
	T6 = A0;
	ZZ_CLOCKCYCLES(11,0x800402BC);
ZZ_3FFAC_310:
	RA = 0x800402C4; //ZZ_3FFAC_318
	ZZ_CLOCKCYCLES(2,0x8003FFAC);
	goto ZZ_3FFAC;
ZZ_3FFAC_318:
	GTE_SetRegister(GTE_DREG_VXY2,T9);
	GTE_SetRegister(GTE_DREG_VZ2,T8);
	EMU_Write32(V1 + 160,T9); //+ 0xA0
	EMU_Write32(V1 + 164,T8); //+ 0xA4
	T8 = EMU_ReadU32(V1 + 296); //+ 0x128
	T9 = (int32_t)T9 >> 16;
	T9 = T8 - T9;
	EMU_Write32(V1 + 124,T9); //+ 0x7C
	T7 = A0;
	A0 = T0 << 23;
	if (!A0)
	{
		A2 = T0 & 0xFF;
		ZZ_CLOCKCYCLES(12,0x80040344);
		goto ZZ_3FFAC_398;
	}
	A2 = T0 & 0xFF;
	if ((int32_t)A0 > 0)
	{
		A0 = A2 << 2;
		ZZ_CLOCKCYCLES(14,0x80040338);
		goto ZZ_3FFAC_38C;
	}
	ZZ_CLOCKCYCLES(13,0x800402F8);
ZZ_3FFAC_34C:
	A0 = A2 << 2;
	A0 += S0;
	A2 = EMU_ReadU32(A0);
	A0 = EMU_ReadU32(V1 + 28); //+ 0x1C
	A1 = A2 >> 26;
	A1 &= 0x1F;
	A0 >>= A1;
	A1 = A2 >> 19;
	A0 += A1;
	A1 = A2 >> 12;
	A1 &= 0x7F;
	A0 &= A1;
	A1 = A2 << 20;
	A2 += A0;
	if ((int32_t)A1 < 0)
	{
		A2 &= 0x7FF;
		ZZ_CLOCKCYCLES(16,0x800402F8);
		goto ZZ_3FFAC_34C;
	}
	A2 &= 0x7FF;
	ZZ_CLOCKCYCLES(16,0x80040338);
ZZ_3FFAC_38C:
	A0 = A2 << 1;
	A2 += A0;
	A2 <<= 2;
	ZZ_CLOCKCYCLES(3,0x80040344);
ZZ_3FFAC_398:
	RA = 0x8004034C; //ZZ_3FFAC_3A0
	ZZ_CLOCKCYCLES(2,0x800414B0);
	goto ZZ_414B0;
ZZ_3FFAC_3A0:
	T0 = EMU_ReadU32(S2);
	S2 = EMU_CheckedAdd(S2,4);
	if ((int32_t)T0 < 0)
	{
		T9 = EMU_CheckedAdd(T0,1);
		ZZ_CLOCKCYCLES(4,0x80040254);
		goto ZZ_3FFAC_2A8;
	}
	T9 = EMU_CheckedAdd(T0,1);
	T9 = T0 >> 16;
	if (T9)
	{
		A0 = T0 << 1;
		ZZ_CLOCKCYCLES(7,0x800403B4);
		goto ZZ_3FFAC_408;
	}
	A0 = T0 << 1;
	T9 = T0 << 31;
	T8 = T0 >> 7;
	if ((int32_t)T9 < 0)
	{
		T8 &= 0x1FC;
		ZZ_CLOCKCYCLES(11,0x80040384);
		goto ZZ_3FFAC_3D8;
	}
	T8 &= 0x1FC;
	T8 += S6;
	T6 = EMU_ReadU32(T8);
	ZZ_CLOCKCYCLES(14,0x8004038C);
	goto ZZ_3FFAC_3E0;
ZZ_3FFAC_3D8:
	T8 += V1;
	T6 = EMU_ReadU32(T8 + 320); //+ 0x140
	ZZ_CLOCKCYCLES(2,0x8004038C);
ZZ_3FFAC_3E0:
	T9 = T0 << 30;
	if ((int32_t)T9 < 0)
	{
		T8 = T0 & 0x1FC;
		ZZ_CLOCKCYCLES(3,0x800403A4);
		goto ZZ_3FFAC_3F8;
	}
	T8 = T0 & 0x1FC;
	T8 += S6;
	T7 = EMU_ReadU32(T8);
	ZZ_CLOCKCYCLES(6,0x800403AC);
	goto ZZ_3FFAC_400;
ZZ_3FFAC_3F8:
	T8 += V1;
	T7 = EMU_ReadU32(T8 + 320); //+ 0x140
	ZZ_CLOCKCYCLES(2,0x800403AC);
ZZ_3FFAC_400:
	T5 = T6;
	ZZ_CLOCKCYCLES(2,0x8004034C);
	goto ZZ_3FFAC_3A0;
ZZ_3FFAC_408:
	if ((int32_t)A0 >= 0)
	{
		ZZ_CLOCKCYCLES(2,0x800403C4);
		goto ZZ_3FFAC_418;
	}
	T6 = T5;
	ZZ_CLOCKCYCLES(4,0x800403DC);
	goto ZZ_3FFAC_430;
ZZ_3FFAC_418:
	A0 = EMU_ReadU32(V1 + 144); //+ 0x90
	A1 = EMU_ReadU32(V1 + 148); //+ 0x94
	EMU_Write32(V1 + 128,A0); //+ 0x80
	A0 = EMU_ReadU32(V1 + 120); //+ 0x78
	EMU_Write32(V1 + 132,A1); //+ 0x84
	EMU_Write32(V1 + 116,A0); //+ 0x74
	ZZ_CLOCKCYCLES(6,0x800403DC);
ZZ_3FFAC_430:
	A0 = EMU_ReadU32(V1 + 160); //+ 0xA0
	A1 = EMU_ReadU32(V1 + 164); //+ 0xA4
	EMU_Write32(V1 + 144,A0); //+ 0x90
	A0 = EMU_ReadU32(V1 + 124); //+ 0x7C
	EMU_Write32(V1 + 148,A1); //+ 0x94
	EMU_Write32(V1 + 120,A0); //+ 0x78
	T5 = T6;
	T6 = T7;
	ZZ_CLOCKCYCLES(9,0x800402BC);
	goto ZZ_3FFAC_310;
ZZ_3FFAC_454:
	EMU_Write32(V1 + 104,RA); //+ 0x68
	RA = 0x8004040C; //ZZ_3FFAC_460
	T9 = EMU_ReadU32(SP + 72); //+ 0x48
	ZZ_CLOCKCYCLES(3,0x80043A34);
	goto ZZ_43A34;
ZZ_3FFAC_460:
	RA = 0x80040414; //ZZ_3FFAC_468
	T8 = EMU_ReadU32(SP + 32); //+ 0x20
	ZZ_CLOCKCYCLES(2,0x80043960);
	goto ZZ_43960;
ZZ_3FFAC_468:
	RA = 0x8004041C; //ZZ_3FFAC_470
	T9 = EMU_ReadU32(GP + 168); //+ 0xA8
	ZZ_CLOCKCYCLES(2,0x80043A10);
	goto ZZ_43A10;
ZZ_3FFAC_470:
	ZZ_JUMPREGISTER_BEGIN(T8);
	RA = 0x80040424; //ZZ_3FFAC_478
	S3 = EMU_ReadU32(SP + 36); //+ 0x24
	ZZ_CLOCKCYCLES_JR(2);
	// UNIMPLEMENTED JUMP-TO-REGISTER-AND-LINK (T8,8004041C)
	ZZ_JUMPREGISTER_END();
ZZ_3FFAC_478:
	if (T8)
	{
		ZZ_CLOCKCYCLES(2,0x8003E784);
		goto ZZ_3DFAC_7D8;
	}
	RA = 0x80040434; //ZZ_3FFAC_488
	ZZ_CLOCKCYCLES(4,0x8004388C);
	goto ZZ_4388C;
ZZ_3FFAC_488:
	if (!T9)
	{
		ZZ_CLOCKCYCLES(2,0x8003E784);
		goto ZZ_3DFAC_7D8;
	}
	RA = 0x80040444; //ZZ_3FFAC_498
	EMU_Write32(V1 + 288,T0); //+ 0x120
	ZZ_CLOCKCYCLES(4,0x8003DFAC);
	goto ZZ_3DFAC;
ZZ_3FFAC_498:
	GTE_SetRegister(GTE_DREG_VXY0,T9);
	GTE_SetRegister(GTE_DREG_VZ0,T8);
	T0 = EMU_ReadU32(S2);
	RA = 0x80040458; //ZZ_3FFAC_4AC
	T5 = A0;
	ZZ_CLOCKCYCLES(5,0x8003DFAC);
	goto ZZ_3DFAC;
ZZ_3FFAC_4AC:
	GTE_SetRegister(GTE_DREG_VXY1,T9);
	GTE_SetRegister(GTE_DREG_VZ1,T8);
	T0 = EMU_ReadU32(S2 + 4); //+ 0x4
	RA = 0x8004046C; //ZZ_3FFAC_4C0
	T6 = A0;
	ZZ_CLOCKCYCLES(5,0x8003DFAC);
	goto ZZ_3DFAC;
ZZ_3FFAC_4C0:
	GTE_SetRegister(GTE_DREG_VXY2,T9);
	GTE_SetRegister(GTE_DREG_VZ2,T8);
	T7 = A0;
	T0 = EMU_ReadU32(V1 + 288); //+ 0x120
	GTE_RotateTranslateProjectTriple();
	S2 = EMU_CheckedAdd(S2,8);
	EMU_Write32(V1 + 128,GTE_GetRegister(GTE_DREG_SXY0)); //+ 0x80
	EMU_Write32(V1 + 132,GTE_GetRegister(GTE_DREG_SZ1)); //+ 0x84
	EMU_Write32(V1 + 144,GTE_GetRegister(GTE_DREG_SXY1)); //+ 0x90
	EMU_Write32(V1 + 148,GTE_GetRegister(GTE_DREG_SZ2)); //+ 0x94
	EMU_Write32(V1 + 160,GTE_GetRegister(GTE_DREG_SXY2)); //+ 0xA0
	EMU_Write32(V1 + 164,GTE_GetRegister(GTE_DREG_SZ3)); //+ 0xA4
	T8 = EMU_ReadU32(V1 + 116); //+ 0x74
	T9 = GTE_GetRegister(GTE_DREG_VXY0);
	A0 = GTE_GetRegister(GTE_DREG_VXY1);
	A1 = GTE_GetRegister(GTE_DREG_VXY2);
	A3 = 0xFFFF0000;
	A2 = T9 & 0xFFFF;
	T9 &= A3;
	T9 = T8 - T9;
	T9 |= A2;
	A2 = A0 & 0xFFFF;
	A0 &= A3;
	A0 = T8 - A0;
	A0 |= A2;
	A2 = A1 & 0xFFFF;
	A1 &= A3;
	A1 = T8 - A1;
	A1 |= A2;
	GTE_SetRegister(GTE_DREG_VXY0,T9);
	GTE_SetRegister(GTE_DREG_VXY1,A0);
	GTE_SetRegister(GTE_DREG_VXY2,A1);
	GTE_RotateTranslateProjectTriple();
	ZZ_CLOCKCYCLES(35,0x800404F8);
ZZ_3FFAC_54C:
	A0 = T0 << 23;
	if (!A0)
	{
		A2 = T0 & 0xFF;
		ZZ_CLOCKCYCLES(3,0x80040554);
		goto ZZ_3FFAC_5A8;
	}
	A2 = T0 & 0xFF;
	if ((int32_t)A0 > 0)
	{
		A0 = A2 << 2;
		ZZ_CLOCKCYCLES(5,0x80040548);
		goto ZZ_3FFAC_59C;
	}
	ZZ_CLOCKCYCLES(4,0x80040508);
ZZ_3FFAC_55C:
	A0 = A2 << 2;
	A0 += S0;
	A2 = EMU_ReadU32(A0);
	A0 = EMU_ReadU32(V1 + 28); //+ 0x1C
	A1 = A2 >> 26;
	A1 &= 0x1F;
	A0 >>= A1;
	A1 = A2 >> 19;
	A0 += A1;
	A1 = A2 >> 12;
	A1 &= 0x7F;
	A0 &= A1;
	A1 = A2 << 20;
	A2 += A0;
	if ((int32_t)A1 < 0)
	{
		A2 &= 0x7FF;
		ZZ_CLOCKCYCLES(16,0x80040508);
		goto ZZ_3FFAC_55C;
	}
	A2 &= 0x7FF;
	ZZ_CLOCKCYCLES(16,0x80040548);
ZZ_3FFAC_59C:
	A0 = A2 << 1;
	A2 += A0;
	A2 <<= 2;
	ZZ_CLOCKCYCLES(3,0x80040554);
ZZ_3FFAC_5A8:
	T8 = A2 + S1;
	T9 = EMU_ReadS16(V1 + 238); //+ 0xEE
	EMU_Write32(V1 + 112,T8); //+ 0x70
	T9 ^= 0x8000;
	EMU_Write16(V1 + 238,T9); //+ 0xEE
	T8 = EMU_ReadU32(V1 + 248); //+ 0xF8
	ZZ_JUMPREGISTER_BEGIN(S3);
	RA = 0x80040574; //ZZ_3FFAC_5C8
	EMU_Write32(V1 + 240,T8); //+ 0xF0
	ZZ_CLOCKCYCLES_JR(8);
	// UNIMPLEMENTED JUMP-TO-REGISTER-AND-LINK (S3,8004056C)
	ZZ_JUMPREGISTER_END();
ZZ_3FFAC_5C8:
	EMU_Write32(V1 + 208,GTE_GetRegister(GTE_DREG_SXY0)); //+ 0xD0
	EMU_Write32(V1 + 212,GTE_GetRegister(GTE_DREG_SZ1)); //+ 0xD4
	EMU_Write32(V1 + 216,GTE_GetRegister(GTE_DREG_SXY1)); //+ 0xD8
	EMU_Write32(V1 + 220,GTE_GetRegister(GTE_DREG_SZ2)); //+ 0xDC
	EMU_Write32(V1 + 224,GTE_GetRegister(GTE_DREG_SXY2)); //+ 0xE0
	EMU_Write32(V1 + 228,GTE_GetRegister(GTE_DREG_SZ3)); //+ 0xE4
	GTE_SetRegister(GTE_DREG_SXY0,EMU_ReadU32(V1 + 128)); //+ 0x80
	GTE_SetRegister(GTE_DREG_SZ1,EMU_ReadU32(V1 + 132)); //+ 0x84
	GTE_SetRegister(GTE_DREG_SXY1,EMU_ReadU32(V1 + 144)); //+ 0x90
	GTE_SetRegister(GTE_DREG_SZ2,EMU_ReadU32(V1 + 148)); //+ 0x94
	GTE_SetRegister(GTE_DREG_SXY2,EMU_ReadU32(V1 + 160)); //+ 0xA0
	T9 = EMU_ReadS16(V1 + 238); //+ 0xEE
	GTE_SetRegister(GTE_DREG_SZ3,EMU_ReadU32(V1 + 164)); //+ 0xA4
	T9 ^= 0x8000;
	EMU_Write16(V1 + 238,T9); //+ 0xEE
	T8 = EMU_ReadU32(V1 + 244); //+ 0xF4
	ZZ_JUMPREGISTER_BEGIN(S3);
	RA = 0x800405BC; //ZZ_3FFAC_610
	EMU_Write32(V1 + 240,T8); //+ 0xF0
	ZZ_CLOCKCYCLES_JR(18);
	// UNIMPLEMENTED JUMP-TO-REGISTER-AND-LINK (S3,800405B4)
	ZZ_JUMPREGISTER_END();
ZZ_3FFAC_610:
	T0 = EMU_ReadU32(S2);
	S2 = EMU_CheckedAdd(S2,4);
	if ((int32_t)T0 < 0)
	{
		T9 = EMU_CheckedAdd(T0,1);
		ZZ_CLOCKCYCLES(4,0x80040434);
		goto ZZ_3FFAC_488;
	}
	T9 = EMU_CheckedAdd(T0,1);
	T9 = T0 >> 16;
	if (T9)
	{
		A0 = T0 << 1;
		ZZ_CLOCKCYCLES(7,0x80040624);
		goto ZZ_3FFAC_678;
	}
	A0 = T0 << 1;
	T9 = T0 << 31;
	T8 = T0 >> 7;
	if ((int32_t)T9 < 0)
	{
		T8 &= 0x1FC;
		ZZ_CLOCKCYCLES(11,0x800405F4);
		goto ZZ_3FFAC_648;
	}
	T8 &= 0x1FC;
	T8 += S6;
	T6 = EMU_ReadU32(T8);
	ZZ_CLOCKCYCLES(14,0x800405FC);
	goto ZZ_3FFAC_650;
ZZ_3FFAC_648:
	T8 += V1;
	T6 = EMU_ReadU32(T8 + 320); //+ 0x140
	ZZ_CLOCKCYCLES(2,0x800405FC);
ZZ_3FFAC_650:
	T9 = T0 << 30;
	if ((int32_t)T9 < 0)
	{
		T8 = T0 & 0x1FC;
		ZZ_CLOCKCYCLES(3,0x80040614);
		goto ZZ_3FFAC_668;
	}
	T8 = T0 & 0x1FC;
	T8 += S6;
	T7 = EMU_ReadU32(T8);
	ZZ_CLOCKCYCLES(6,0x8004061C);
	goto ZZ_3FFAC_670;
ZZ_3FFAC_668:
	T8 += V1;
	T7 = EMU_ReadU32(T8 + 320); //+ 0x140
	ZZ_CLOCKCYCLES(2,0x8004061C);
ZZ_3FFAC_670:
	T5 = T6;
	ZZ_CLOCKCYCLES(2,0x800405BC);
	goto ZZ_3FFAC_610;
ZZ_3FFAC_678:
	if ((int32_t)A0 >= 0)
	{
		ZZ_CLOCKCYCLES(2,0x80040650);
		goto ZZ_3FFAC_6A4;
	}
	A0 = GTE_GetRegister(GTE_DREG_SXY0);
	A1 = GTE_GetRegister(GTE_DREG_SZ1);
	GTE_SetRegister(GTE_DREG_SXY1,A0);
	GTE_SetRegister(GTE_DREG_SZ2,A1);
	T6 = T5;
	A0 = EMU_ReadU32(V1 + 208); //+ 0xD0
	A1 = EMU_ReadU32(V1 + 212); //+ 0xD4
	EMU_Write32(V1 + 216,A0); //+ 0xD8
	EMU_Write32(V1 + 220,A1); //+ 0xDC
	ZZ_CLOCKCYCLES(11,0x80040650);
ZZ_3FFAC_6A4:
	RA = 0x80040658; //ZZ_3FFAC_6AC
	T5 = T6;
	ZZ_CLOCKCYCLES(2,0x8003DFAC);
	goto ZZ_3DFAC;
ZZ_3FFAC_6AC:
	GTE_SetRegister(GTE_DREG_VXY0,T9);
	GTE_SetRegister(GTE_DREG_VZ0,T8);
	T6 = T7;
	T7 = A0;
	GTE_RotateTranslateProjectSingle();
	EMU_Write32(V1 + 128,GTE_GetRegister(GTE_DREG_SXY0)); //+ 0x80
	EMU_Write32(V1 + 132,GTE_GetRegister(GTE_DREG_SZ1)); //+ 0x84
	EMU_Write32(V1 + 144,GTE_GetRegister(GTE_DREG_SXY1)); //+ 0x90
	EMU_Write32(V1 + 148,GTE_GetRegister(GTE_DREG_SZ2)); //+ 0x94
	EMU_Write32(V1 + 160,GTE_GetRegister(GTE_DREG_SXY2)); //+ 0xA0
	EMU_Write32(V1 + 164,GTE_GetRegister(GTE_DREG_SZ3)); //+ 0xA4
	T8 = EMU_ReadU32(V1 + 116); //+ 0x74
	T9 = GTE_GetRegister(GTE_DREG_VXY0);
	A3 = 0xFFFF0000;
	A2 = T9 & 0xFFFF;
	T9 &= A3;
	T9 = T8 - T9;
	T9 |= A2;
	GTE_SetRegister(GTE_DREG_VXY0,T9);
	GTE_SetRegister(GTE_DREG_SXY1,EMU_ReadU32(V1 + 216)); //+ 0xD8
	GTE_SetRegister(GTE_DREG_SZ2,EMU_ReadU32(V1 + 220)); //+ 0xDC
	GTE_SetRegister(GTE_DREG_SXY2,EMU_ReadU32(V1 + 224)); //+ 0xE0
	GTE_SetRegister(GTE_DREG_SZ3,EMU_ReadU32(V1 + 228)); //+ 0xE4
	GTE_RotateTranslateProjectSingle();
	ZZ_CLOCKCYCLES(28,0x800404F8);
	goto ZZ_3FFAC_54C;
ZZ_3FFAC_A48:
	V0 = GTE_GetRegister(GTE_DREG_SZ1);
	T8 = GTE_GetRegister(GTE_DREG_SZ2);
	T9 = GTE_GetRegister(GTE_DREG_SZ3);
	if ((int32_t)V0 <= 0)
	{
		V0 += T8;
		ZZ_CLOCKCYCLES(5,0x80040BD8);
		goto ZZ_3FFAC_C2C;
	}
	V0 += T8;
	if ((int32_t)T8 <= 0)
	{
		V0 += T9;
		ZZ_CLOCKCYCLES(7,0x80040BD8);
		goto ZZ_3FFAC_C2C;
	}
	V0 += T9;
	GTE_NormalClip();
	if ((int32_t)T9 <= 0)
	{
		A3 = EMU_ReadU32(V1 + 236); //+ 0xEC
		ZZ_CLOCKCYCLES(10,0x80040BD8);
		goto ZZ_3FFAC_C2C;
	}
	A3 = EMU_ReadU32(V1 + 236); //+ 0xEC
	T9 = T0 << 2;
	A0 = GTE_GetRegister(GTE_DREG_MAC0);
	T9 ^= A3;
	if (!A0)
	{
		A2 = A0 ^ T9;
		ZZ_CLOCKCYCLES(15,0x80040BD8);
		goto ZZ_3FFAC_C2C;
	}
	A2 = A0 ^ T9;
	T8 = EMU_ReadU32(V1 + 240); //+ 0xF0
	if ((int32_t)A2 >= 0)
	{
		V0 >>= 5;
		ZZ_CLOCKCYCLES(18,0x80040A40);
		goto ZZ_3FFAC_A94;
	}
	V0 >>= 5;
	T8 = EMU_CheckedAdd(T8,-10);
	ZZ_CLOCKCYCLES(19,0x80040A40);
ZZ_3FFAC_A94:
	V0 = T8 - V0;
	if ((int32_t)V0 >= 0)
	{
		V0 <<= 2;
		ZZ_CLOCKCYCLES(3,0x80040A50);
		goto ZZ_3FFAC_AA4;
	}
	V0 <<= 2;
	V0 = 0;
	ZZ_CLOCKCYCLES(4,0x80040A50);
ZZ_3FFAC_AA4:
	T8 = EMU_CheckedAdd(V0,-8188);
	if ((int32_t)T8 <= 0)
	{
		V0 += FP;
		ZZ_CLOCKCYCLES(3,0x80040A60);
		goto ZZ_3FFAC_AB4;
	}
	V0 += FP;
	V0 = EMU_CheckedAdd(FP,8188);
	ZZ_CLOCKCYCLES(4,0x80040A60);
ZZ_3FFAC_AB4:
	EMU_Write32(S7 + 8,GTE_GetRegister(GTE_DREG_SXY0)); //+ 0x8
	EMU_Write32(S7 + 16,GTE_GetRegister(GTE_DREG_SXY1)); //+ 0x10
	EMU_Write32(S7 + 24,GTE_GetRegister(GTE_DREG_SXY2)); //+ 0x18
	T8 = T5 << 24;
	T8 = (int32_t)T8 >> 19;
	GTE_SetRegister(GTE_DREG_IR1,T8);
	T8 = T5 >> 8;
	T8 <<= 24;
	T8 = (int32_t)T8 >> 19;
	GTE_SetRegister(GTE_DREG_IR2,T8);
	T8 = T5 >> 16;
	T8 <<= 24;
	T8 = (int32_t)T8 >> 19;
	GTE_SetRegister(GTE_DREG_IR3,T8);
	GTE_Multiply_IR_Light();
	T8 = GTE_GetRegister(GTE_DREG_IR1);
	T9 = GTE_GetRegister(GTE_DREG_IR3);
	T8 = EMU_CheckedAdd(T8,4096);
	A0 = T8 << 1;
	T8 += A0;
	A0 <<= 1;
	T8 += A0;
	T8 = EMU_CheckedAdd(T8,8192);
	if ((int32_t)A2 >= 0)
	{
		T8 >>= 4;
		ZZ_CLOCKCYCLES(27,0x80040AD0);
		goto ZZ_3FFAC_B24;
	}
	T8 >>= 4;
	T8 >>= 1;
	ZZ_CLOCKCYCLES(28,0x80040AD0);
ZZ_3FFAC_B24:
	A0 = A3 & 0xFFFF;
	T8 = T8 - A0;
	if ((int32_t)T8 >= 0)
	{
		T9 = (int32_t)T9 >> 3;
		ZZ_CLOCKCYCLES(4,0x80040AE4);
		goto ZZ_3FFAC_B38;
	}
	T9 = (int32_t)T9 >> 3;
	T8 = 0;
	ZZ_CLOCKCYCLES(5,0x80040AE4);
ZZ_3FFAC_B38:
	GTE_SetRegister(GTE_DREG_IR0,T8);
	A0 = 0x80060000;
	A0 -= 14104;
	GTE_DepthCueSingle();
	if ((int32_t)T9 >= 0)
	{
		ZZ_CLOCKCYCLES(6,0x80040B00);
		goto ZZ_3FFAC_B54;
	}
	T9 = -T9;
	ZZ_CLOCKCYCLES(7,0x80040B00);
ZZ_3FFAC_B54:
	T9 = EMU_CheckedAdd(T9,-384);
	if ((int32_t)T9 < 0)
	{
		T8 = 0;
		ZZ_CLOCKCYCLES(3,0x80040B20);
		goto ZZ_3FFAC_B74;
	}
	T8 = 0;
	T8 = EMU_CheckedAdd(T9,-128);
	if ((int32_t)T8 < 0)
	{
		T9 += A0;
		ZZ_CLOCKCYCLES(6,0x80040B1C);
		goto ZZ_3FFAC_B70;
	}
	T9 += A0;
	T9 = EMU_CheckedAdd(A0,127);
	ZZ_CLOCKCYCLES(7,0x80040B1C);
ZZ_3FFAC_B70:
	T8 = EMU_ReadU8(T9);
	ZZ_CLOCKCYCLES(1,0x80040B20);
ZZ_3FFAC_B74:
	T9 = GTE_GetRegister(GTE_DREG_RGB2);
	if ((int32_t)A2 >= 0)
	{
		A0 = T9 >> 8;
		ZZ_CLOCKCYCLES(3,0x80040B30);
		goto ZZ_3FFAC_B84;
	}
	A0 = T9 >> 8;
	T8 >>= 3;
	ZZ_CLOCKCYCLES(4,0x80040B30);
ZZ_3FFAC_B84:
	A1 = T9 >> 16;
	T9 &= 0xFF;
	A0 &= 0xFF;
	A1 &= 0xFF;
	T9 += T8;
	A0 += T8;
	A1 += T8;
	T8 = EMU_CheckedAdd(A1,-255);
	if ((int32_t)T8 <= 0)
	{
		A1 <<= 16;
		ZZ_CLOCKCYCLES(10,0x80040B5C);
		goto ZZ_3FFAC_BB0;
	}
	A1 <<= 16;
	A1 = 0xFF0000;
	ZZ_CLOCKCYCLES(11,0x80040B5C);
ZZ_3FFAC_BB0:
	T8 = EMU_CheckedAdd(A0,-255);
	if ((int32_t)T8 <= 0)
	{
		A0 <<= 8;
		ZZ_CLOCKCYCLES(3,0x80040B6C);
		goto ZZ_3FFAC_BC0;
	}
	A0 <<= 8;
	A0 = 0xFF00;
	ZZ_CLOCKCYCLES(4,0x80040B6C);
ZZ_3FFAC_BC0:
	T8 = EMU_CheckedAdd(T9,-255);
	if ((int32_t)T8 <= 0)
	{
		A0 |= A1;
		ZZ_CLOCKCYCLES(3,0x80040B7C);
		goto ZZ_3FFAC_BD0;
	}
	A0 |= A1;
	T9 = 255;
	ZZ_CLOCKCYCLES(4,0x80040B7C);
ZZ_3FFAC_BD0:
	T8 = EMU_ReadU32(V1 + 112); //+ 0x70
	A0 |= T9;
	A1 = EMU_ReadU32(T8 - 8); //+ 0xFFFFFFF8
	T9 = 0x600000;
	T8 = T9 & A1;
	if (T8)
	{
		T8 = 0x24000000;
		ZZ_CLOCKCYCLES(7,0x80040BA8);
		goto ZZ_3FFAC_BFC;
	}
	T8 = 0x24000000;
	if ((int32_t)A2 < 0)
	{
		ZZ_CLOCKCYCLES(9,0x80040BA8);
		goto ZZ_3FFAC_BFC;
	}
	T9 = 0x200000;
	T8 = 0x26000000;
	ZZ_CLOCKCYCLES(11,0x80040BA8);
ZZ_3FFAC_BFC:
	T8 |= A0;
	T9 |= A1;
	A0 = EMU_ReadU32(V1 + 112); //+ 0x70
	EMU_Write32(S7 + 4,T8); //+ 0x4
	T8 = EMU_ReadU32(A0 - 12); //+ 0xFFFFFFF4
	A0 = EMU_ReadU32(A0 - 4); //+ 0xFFFFFFFC
	EMU_Write32(S7 + 12,T8); //+ 0xC
	EMU_Write32(S7 + 20,T9); //+ 0x14
	EMU_Write32(S7 + 28,A0); //+ 0x1C
	T9 = 0x7000000;
	A0 = 32;
	ZZ_CLOCKCYCLES(12,0x8003EF88);
	goto ZZ_3ED6C_21C;
ZZ_3FFAC_C2C:
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(2);
	ZZ_JUMPREGISTER(0x80040264,ZZ_3FFAC_2B8);
	ZZ_JUMPREGISTER(0x80040290,ZZ_3FFAC_2E4);
	ZZ_JUMPREGISTER(0x800402C4,ZZ_3FFAC_318);
	ZZ_JUMPREGISTER_END();
ZZ_3FFAC_C34:
	V0 = GTE_GetRegister(GTE_DREG_SZ1);
	T8 = GTE_GetRegister(GTE_DREG_SZ2);
	T9 = GTE_GetRegister(GTE_DREG_SZ3);
	if ((int32_t)V0 <= 0)
	{
		V0 += T8;
		ZZ_CLOCKCYCLES(5,0x80040DD4);
		goto ZZ_3FFAC_E28;
	}
	V0 += T8;
	if ((int32_t)T8 <= 0)
	{
		V0 += T9;
		ZZ_CLOCKCYCLES(7,0x80040DD4);
		goto ZZ_3FFAC_E28;
	}
	V0 += T9;
	GTE_NormalClip();
	if ((int32_t)T9 <= 0)
	{
		A3 = EMU_ReadU32(V1 + 236); //+ 0xEC
		ZZ_CLOCKCYCLES(10,0x80040DD4);
		goto ZZ_3FFAC_E28;
	}
	A3 = EMU_ReadU32(V1 + 236); //+ 0xEC
	T9 = T0 << 2;
	A0 = GTE_GetRegister(GTE_DREG_MAC0);
	T9 ^= A3;
	if (!A0)
	{
		A2 = A0 ^ T9;
		ZZ_CLOCKCYCLES(15,0x80040DD4);
		goto ZZ_3FFAC_E28;
	}
	A2 = A0 ^ T9;
	T8 = EMU_ReadU32(V1 + 240); //+ 0xF0
	if ((int32_t)A2 >= 0)
	{
		V0 >>= 5;
		ZZ_CLOCKCYCLES(18,0x80040C2C);
		goto ZZ_3FFAC_C80;
	}
	V0 >>= 5;
	T8 = EMU_CheckedAdd(T8,-10);
	ZZ_CLOCKCYCLES(19,0x80040C2C);
ZZ_3FFAC_C80:
	V0 = T8 - V0;
	if ((int32_t)V0 >= 0)
	{
		V0 <<= 2;
		ZZ_CLOCKCYCLES(3,0x80040C3C);
		goto ZZ_3FFAC_C90;
	}
	V0 <<= 2;
	V0 = 0;
	ZZ_CLOCKCYCLES(4,0x80040C3C);
ZZ_3FFAC_C90:
	T8 = EMU_CheckedAdd(V0,-8188);
	if ((int32_t)T8 <= 0)
	{
		V0 += FP;
		ZZ_CLOCKCYCLES(3,0x80040C4C);
		goto ZZ_3FFAC_CA0;
	}
	V0 += FP;
	V0 = EMU_CheckedAdd(FP,8188);
	ZZ_CLOCKCYCLES(4,0x80040C4C);
ZZ_3FFAC_CA0:
	EMU_Write32(S7 + 8,GTE_GetRegister(GTE_DREG_SXY0)); //+ 0x8
	EMU_Write32(S7 + 16,GTE_GetRegister(GTE_DREG_SXY1)); //+ 0x10
	EMU_Write32(S7 + 24,GTE_GetRegister(GTE_DREG_SXY2)); //+ 0x18
	T8 = T5 << 24;
	T8 = (int32_t)T8 >> 19;
	GTE_SetRegister(GTE_DREG_IR1,T8);
	T8 = T5 >> 8;
	T8 <<= 24;
	T8 = (int32_t)T8 >> 19;
	GTE_SetRegister(GTE_DREG_IR2,T8);
	T8 = T5 >> 16;
	T8 <<= 24;
	T8 = (int32_t)T8 >> 19;
	GTE_SetRegister(GTE_DREG_IR3,T8);
	GTE_Multiply_IR_Light();
	T8 = GTE_GetRegister(GTE_DREG_IR1);
	T9 = GTE_GetRegister(GTE_DREG_IR3);
	T8 = EMU_CheckedAdd(T8,4096);
	A0 = T8 << 1;
	T8 += A0;
	A0 <<= 1;
	T8 += A0;
	T8 = EMU_CheckedAdd(T8,8192);
	if ((int32_t)A2 >= 0)
	{
		T8 >>= 4;
		ZZ_CLOCKCYCLES(27,0x80040CBC);
		goto ZZ_3FFAC_D10;
	}
	T8 >>= 4;
	T8 >>= 1;
	ZZ_CLOCKCYCLES(28,0x80040CBC);
ZZ_3FFAC_D10:
	A0 = A3 & 0xFFFF;
	T8 = T8 - A0;
	if ((int32_t)T8 >= 0)
	{
		T9 = (int32_t)T9 >> 3;
		ZZ_CLOCKCYCLES(4,0x80040CD0);
		goto ZZ_3FFAC_D24;
	}
	T9 = (int32_t)T9 >> 3;
	T8 = 0;
	ZZ_CLOCKCYCLES(5,0x80040CD0);
ZZ_3FFAC_D24:
	GTE_SetRegister(GTE_DREG_IR0,T8);
	A0 = 0x80060000;
	A0 -= 14104;
	GTE_DepthCueSingle();
	if ((int32_t)T9 >= 0)
	{
		ZZ_CLOCKCYCLES(6,0x80040CEC);
		goto ZZ_3FFAC_D40;
	}
	T9 = -T9;
	ZZ_CLOCKCYCLES(7,0x80040CEC);
ZZ_3FFAC_D40:
	T9 = EMU_CheckedAdd(T9,-384);
	if ((int32_t)T9 < 0)
	{
		T8 = 0;
		ZZ_CLOCKCYCLES(3,0x80040D0C);
		goto ZZ_3FFAC_D60;
	}
	T8 = 0;
	T8 = EMU_CheckedAdd(T9,-128);
	if ((int32_t)T8 < 0)
	{
		T9 += A0;
		ZZ_CLOCKCYCLES(6,0x80040D08);
		goto ZZ_3FFAC_D5C;
	}
	T9 += A0;
	T9 = EMU_CheckedAdd(A0,127);
	ZZ_CLOCKCYCLES(7,0x80040D08);
ZZ_3FFAC_D5C:
	T8 = EMU_ReadU8(T9);
	ZZ_CLOCKCYCLES(1,0x80040D0C);
ZZ_3FFAC_D60:
	T9 = GTE_GetRegister(GTE_DREG_RGB2);
	if ((int32_t)A2 >= 0)
	{
		A0 = T9 >> 8;
		ZZ_CLOCKCYCLES(3,0x80040D1C);
		goto ZZ_3FFAC_D70;
	}
	A0 = T9 >> 8;
	T8 >>= 3;
	ZZ_CLOCKCYCLES(4,0x80040D1C);
ZZ_3FFAC_D70:
	A1 = T9 >> 16;
	T9 &= 0xFF;
	A0 &= 0xFF;
	A1 &= 0xFF;
	T9 += T8;
	A0 += T8;
	A1 += T8;
	T8 = EMU_CheckedAdd(A1,-255);
	if ((int32_t)T8 <= 0)
	{
		A1 <<= 16;
		ZZ_CLOCKCYCLES(10,0x80040D48);
		goto ZZ_3FFAC_D9C;
	}
	A1 <<= 16;
	A1 = 0xFF0000;
	ZZ_CLOCKCYCLES(11,0x80040D48);
ZZ_3FFAC_D9C:
	T8 = EMU_CheckedAdd(A0,-255);
	if ((int32_t)T8 <= 0)
	{
		A0 <<= 8;
		ZZ_CLOCKCYCLES(3,0x80040D58);
		goto ZZ_3FFAC_DAC;
	}
	A0 <<= 8;
	A0 = 0xFF00;
	ZZ_CLOCKCYCLES(4,0x80040D58);
ZZ_3FFAC_DAC:
	T8 = EMU_CheckedAdd(T9,-255);
	if ((int32_t)T8 <= 0)
	{
		A0 |= A1;
		ZZ_CLOCKCYCLES(3,0x80040D68);
		goto ZZ_3FFAC_DBC;
	}
	A0 |= A1;
	T9 = 255;
	ZZ_CLOCKCYCLES(4,0x80040D68);
ZZ_3FFAC_DBC:
	T8 = EMU_ReadU32(V1 + 112); //+ 0x70
	A0 |= T9;
	A1 = EMU_ReadU32(T8 - 8); //+ 0xFFFFFFF8
	T9 = 0x600000;
	T8 = T9 & A1;
	if (!T8)
	{
		T8 = T0 << 3;
		ZZ_CLOCKCYCLES(7,0x80040D94);
		goto ZZ_3FFAC_DE8;
	}
	T8 = T0 << 3;
	T8 &= A2;
	if ((int32_t)T8 >= 0)
	{
		T8 = 0x24000000;
		ZZ_CLOCKCYCLES(10,0x80040DA4);
		goto ZZ_3FFAC_DF8;
	}
	T8 = 0x24000000;
	ZZ_JUMPREGISTER_BEGIN(RA);
	T9 = 0x200000;
	ZZ_CLOCKCYCLES_JR(12);
	ZZ_JUMPREGISTER(0x80040264,ZZ_3FFAC_2B8);
	ZZ_JUMPREGISTER(0x80040290,ZZ_3FFAC_2E4);
	ZZ_JUMPREGISTER(0x800402C4,ZZ_3FFAC_318);
	ZZ_JUMPREGISTER_END();
	ZZ_CLOCKCYCLES(11,0x80040D94);
ZZ_3FFAC_DE8:
	T9 = 0x200000;
	if ((int32_t)A2 >= 0)
	{
		T8 = 0x26000000;
		ZZ_CLOCKCYCLES(3,0x80040DA4);
		goto ZZ_3FFAC_DF8;
	}
	T8 = 0x26000000;
	T9 = 0x400000;
	ZZ_CLOCKCYCLES(4,0x80040DA4);
ZZ_3FFAC_DF8:
	T8 |= A0;
	T9 |= A1;
	A0 = EMU_ReadU32(V1 + 112); //+ 0x70
	EMU_Write32(S7 + 4,T8); //+ 0x4
	T8 = EMU_ReadU32(A0 - 12); //+ 0xFFFFFFF4
	A0 = EMU_ReadU32(A0 - 4); //+ 0xFFFFFFFC
	EMU_Write32(S7 + 12,T8); //+ 0xC
	EMU_Write32(S7 + 20,T9); //+ 0x14
	EMU_Write32(S7 + 28,A0); //+ 0x1C
	T9 = 0x7000000;
	A0 = 32;
	ZZ_CLOCKCYCLES(12,0x8003EF88);
	goto ZZ_3ED6C_21C;
ZZ_3FFAC_E28:
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(2);
	ZZ_JUMPREGISTER(0x80040264,ZZ_3FFAC_2B8);
	ZZ_JUMPREGISTER(0x80040290,ZZ_3FFAC_2E4);
	ZZ_JUMPREGISTER(0x800402C4,ZZ_3FFAC_318);
	ZZ_JUMPREGISTER_END();
ZZ_3FFAC_E30:
	A0 = T0 << 7;
	if ((int32_t)A0 >= 0)
	{
		ZZ_CLOCKCYCLES(3,0x8003EE5C);
		goto ZZ_3ED6C_F0;
	}
	V0 = GTE_GetRegister(GTE_DREG_SZ1);
	T8 = GTE_GetRegister(GTE_DREG_SZ2);
	T9 = GTE_GetRegister(GTE_DREG_SZ3);
	if ((int32_t)V0 <= 0)
	{
		V0 += T8;
		ZZ_CLOCKCYCLES(8,0x80040FA4);
		goto ZZ_3FFAC_FF8;
	}
	V0 += T8;
	if ((int32_t)T8 <= 0)
	{
		V0 += T9;
		ZZ_CLOCKCYCLES(10,0x80040FA4);
		goto ZZ_3FFAC_FF8;
	}
	V0 += T9;
	GTE_NormalClip();
	if ((int32_t)T9 <= 0)
	{
		V0 >>= 5;
		ZZ_CLOCKCYCLES(13,0x80040FA4);
		goto ZZ_3FFAC_FF8;
	}
	V0 >>= 5;
	T8 = EMU_ReadU32(V1 + 240); //+ 0xF0
	A3 = EMU_ReadU32(V1 + 236); //+ 0xEC
	V0 = T8 - V0;
	T9 = T0 << 2;
	T8 = GTE_GetRegister(GTE_DREG_MAC0);
	T9 ^= A3;
	if (!T8)
	{
		T9 ^= T8;
		ZZ_CLOCKCYCLES(21,0x80040FA4);
		goto ZZ_3FFAC_FF8;
	}
	T9 ^= T8;
	T8 = T0 << 3;
	if ((int32_t)T8 >= 0)
	{
		EMU_Write32(V1 + 292,T5); //+ 0x124
		ZZ_CLOCKCYCLES(24,0x80040E44);
		goto ZZ_3FFAC_E98;
	}
	EMU_Write32(V1 + 292,T5); //+ 0x124
	if ((int32_t)T9 <= 0)
	{
		ZZ_CLOCKCYCLES(26,0x80040FA4);
		goto ZZ_3FFAC_FF8;
	}
	ZZ_CLOCKCYCLES(26,0x80040E44);
ZZ_3FFAC_E98:
	EMU_Write32(V1 + 296,T6); //+ 0x128
	EMU_Write32(V1 + 300,T7); //+ 0x12C
	T9 = 728;
	A0 = GTE_GetRegister(GTE_DREG_SZ1);
	A1 = GTE_GetRegister(GTE_DREG_SZ2);
	A0 = EMU_CheckedAdd(A0,-600);
	if ((int32_t)A0 > 0)
	{
		ZZ_CLOCKCYCLES(8,0x80040E6C);
		goto ZZ_3FFAC_EC0;
	}
	EMU_Write32(V1 + 292,R0); //+ 0x124
	ZZ_CLOCKCYCLES(10,0x80040E94);
	goto ZZ_3FFAC_EE8;
ZZ_3FFAC_EC0:
	GTE_SetRegister(GTE_DREG_RGB2,T5);
	A0 = T9 - A0;
	if ((int32_t)A0 < 0)
	{
		A0 <<= 5;
		ZZ_CLOCKCYCLES(4,0x80040E94);
		goto ZZ_3FFAC_EE8;
	}
	A0 <<= 5;
	GTE_SetRegister(GTE_DREG_RGBC,T5);
	GTE_SetRegister(GTE_DREG_IR0,A0);
	GTE_DepthCueSingle();
	EMU_Write32(V1 + 292,GTE_GetRegister(GTE_DREG_RGB2)); //+ 0x124
	ZZ_CLOCKCYCLES(10,0x80040E94);
ZZ_3FFAC_EE8:
	A0 = GTE_GetRegister(GTE_DREG_SZ3);
	A1 = EMU_CheckedAdd(A1,-600);
	if ((int32_t)A1 > 0)
	{
		ZZ_CLOCKCYCLES(4,0x80040EAC);
		goto ZZ_3FFAC_F00;
	}
	EMU_Write32(V1 + 296,R0); //+ 0x128
	ZZ_CLOCKCYCLES(6,0x80040ED0);
	goto ZZ_3FFAC_F24;
ZZ_3FFAC_F00:
	A1 = T9 - A1;
	if ((int32_t)A1 < 0)
	{
		A1 <<= 5;
		ZZ_CLOCKCYCLES(3,0x80040ED0);
		goto ZZ_3FFAC_F24;
	}
	A1 <<= 5;
	GTE_SetRegister(GTE_DREG_RGBC,T6);
	GTE_SetRegister(GTE_DREG_IR0,A1);
	GTE_DepthCueSingle();
	EMU_Write32(V1 + 296,GTE_GetRegister(GTE_DREG_RGB2)); //+ 0x128
	ZZ_CLOCKCYCLES(9,0x80040ED0);
ZZ_3FFAC_F24:
	A0 = EMU_CheckedAdd(A0,-600);
	if ((int32_t)A0 > 0)
	{
		ZZ_CLOCKCYCLES(3,0x80040EE4);
		goto ZZ_3FFAC_F38;
	}
	EMU_Write32(V1 + 300,R0); //+ 0x12C
	ZZ_CLOCKCYCLES(5,0x80040F08);
	goto ZZ_3FFAC_F5C;
ZZ_3FFAC_F38:
	A0 = T9 - A0;
	if ((int32_t)A0 < 0)
	{
		A0 <<= 5;
		ZZ_CLOCKCYCLES(3,0x80040F08);
		goto ZZ_3FFAC_F5C;
	}
	A0 <<= 5;
	GTE_SetRegister(GTE_DREG_RGBC,T7);
	GTE_SetRegister(GTE_DREG_IR0,A0);
	GTE_DepthCueSingle();
	EMU_Write32(V1 + 300,GTE_GetRegister(GTE_DREG_RGB2)); //+ 0x12C
	ZZ_CLOCKCYCLES(9,0x80040F08);
ZZ_3FFAC_F5C:
	T9 = EMU_ReadU32(V1 + 292); //+ 0x124
	A0 = EMU_ReadU32(V1 + 296); //+ 0x128
	A1 = EMU_ReadU32(V1 + 300); //+ 0x12C
	T8 = T9 | A0;
	T8 |= A1;
	if (!T8)
	{
		T9 <<= 8;
		ZZ_CLOCKCYCLES(7,0x80040FA4);
		goto ZZ_3FFAC_FF8;
	}
	T9 <<= 8;
	T9 >>= 8;
	if ((int32_t)V0 >= 0)
	{
		V0 <<= 2;
		ZZ_CLOCKCYCLES(10,0x80040F34);
		goto ZZ_3FFAC_F88;
	}
	V0 <<= 2;
	V0 = 0;
	ZZ_CLOCKCYCLES(11,0x80040F34);
ZZ_3FFAC_F88:
	T8 = EMU_CheckedAdd(V0,-8188);
	if ((int32_t)T8 <= 0)
	{
		V0 += FP;
		ZZ_CLOCKCYCLES(3,0x80040F44);
		goto ZZ_3FFAC_F98;
	}
	V0 += FP;
	V0 = EMU_CheckedAdd(FP,8188);
	ZZ_CLOCKCYCLES(4,0x80040F44);
ZZ_3FFAC_F98:
	T8 = 0x36000000;
	T8 |= T9;
	EMU_Write32(S7 + 4,T8); //+ 0x4
	EMU_Write32(S7 + 16,A0); //+ 0x10
	A0 = EMU_ReadU32(V1 + 112); //+ 0x70
	EMU_Write32(S7 + 28,A1); //+ 0x1C
	T8 = EMU_ReadU32(A0 - 12); //+ 0xFFFFFFF4
	T9 = EMU_ReadU32(A0 - 8); //+ 0xFFFFFFF8
	A0 = EMU_ReadU32(A0 - 4); //+ 0xFFFFFFFC
	EMU_Write32(S7 + 8,GTE_GetRegister(GTE_DREG_SXY0)); //+ 0x8
	EMU_Write32(S7 + 20,GTE_GetRegister(GTE_DREG_SXY1)); //+ 0x14
	EMU_Write32(S7 + 32,GTE_GetRegister(GTE_DREG_SXY2)); //+ 0x20
	EMU_Write32(S7 + 12,T8); //+ 0xC
	EMU_Write32(S7 + 24,T9); //+ 0x18
	EMU_Write32(S7 + 36,A0); //+ 0x24
	A0 = 40;
	T9 = 0x9000000;
	T8 = EMU_ReadU32(V0 + 24); //+ 0x18
	A1 = S7 << 8;
	T8 |= T9;
	EMU_Write32(S7,T8);
	A1 >>= 8;
	EMU_Write32(V0 + 24,A1); //+ 0x18
	S7 += A0;
	ZZ_CLOCKCYCLES(24,0x80040FA4);
ZZ_3FFAC_FF8:
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(2);
	ZZ_JUMPREGISTER(0x80040264,ZZ_3FFAC_2B8);
	ZZ_JUMPREGISTER(0x80040290,ZZ_3FFAC_2E4);
	ZZ_JUMPREGISTER(0x800402C4,ZZ_3FFAC_318);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8003FFAC,0x8003FFCC,ZZ_3FFAC);
ZZ_MARK_TARGET(0x8003FFCC,0x8003FFE8,ZZ_3FFAC_20);
ZZ_MARK_TARGET(0x8003FFE8,0x80040034,ZZ_3FFAC_3C);
ZZ_MARK_TARGET(0x80040034,0x80040050,ZZ_3FFAC_88);
ZZ_MARK_TARGET(0x80040050,0x80040098,ZZ_3FFAC_A4);
ZZ_MARK_TARGET(0x80040098,0x800400B4,ZZ_3FFAC_EC);
ZZ_MARK_TARGET(0x800400B4,0x800400F8,ZZ_3FFAC_108);
ZZ_MARK_TARGET(0x800400F8,0x80040114,ZZ_3FFAC_14C);
ZZ_MARK_TARGET(0x80040114,0x8004011C,ZZ_3FFAC_168);
ZZ_MARK_TARGET(0x8004011C,0x80040184,ZZ_3FFAC_170);
ZZ_MARK_TARGET(0x80040184,0x800401A0,ZZ_3FFAC_1D8);
ZZ_MARK_TARGET(0x800401A0,0x800401AC,ZZ_3FFAC_1F4);
ZZ_MARK_TARGET(0x800401AC,0x800401C4,ZZ_3FFAC_200);
ZZ_MARK_TARGET(0x800401C4,0x800401CC,ZZ_3FFAC_218);
ZZ_MARK_TARGET(0x800401CC,0x800401D4,ZZ_3FFAC_220);
ZZ_MARK_TARGET(0x800401D4,0x800401E4,ZZ_3FFAC_228);
ZZ_MARK_TARGET(0x800401E4,0x800401EC,ZZ_3FFAC_238);
ZZ_MARK_TARGET(0x800401EC,0x8004023C,ZZ_3FFAC_240);
ZZ_MARK_TARGET(0x8004023C,0x80040244,ZZ_3FFAC_290);
ZZ_MARK_TARGET(0x80040244,0x8004024C,ZZ_3FFAC_298);
ZZ_MARK_TARGET(0x8004024C,0x80040254,ZZ_3FFAC_2A0);
ZZ_MARK_TARGET(0x80040254,0x80040264,ZZ_3FFAC_2A8);
ZZ_MARK_TARGET(0x80040264,0x80040290,ZZ_3FFAC_2B8);
ZZ_MARK_TARGET(0x80040290,0x800402BC,ZZ_3FFAC_2E4);
ZZ_MARK_TARGET(0x800402BC,0x800402C4,ZZ_3FFAC_310);
ZZ_MARK_TARGET(0x800402C4,0x800402F8,ZZ_3FFAC_318);
ZZ_MARK_TARGET(0x800402F8,0x80040338,ZZ_3FFAC_34C);
ZZ_MARK_TARGET(0x80040338,0x80040344,ZZ_3FFAC_38C);
ZZ_MARK_TARGET(0x80040344,0x8004034C,ZZ_3FFAC_398);
ZZ_MARK_TARGET(0x8004034C,0x80040384,ZZ_3FFAC_3A0);
ZZ_MARK_TARGET(0x80040384,0x8004038C,ZZ_3FFAC_3D8);
ZZ_MARK_TARGET(0x8004038C,0x800403A4,ZZ_3FFAC_3E0);
ZZ_MARK_TARGET(0x800403A4,0x800403AC,ZZ_3FFAC_3F8);
ZZ_MARK_TARGET(0x800403AC,0x800403B4,ZZ_3FFAC_400);
ZZ_MARK_TARGET(0x800403B4,0x800403C4,ZZ_3FFAC_408);
ZZ_MARK_TARGET(0x800403C4,0x800403DC,ZZ_3FFAC_418);
ZZ_MARK_TARGET(0x800403DC,0x80040400,ZZ_3FFAC_430);
ZZ_MARK_TARGET(0x80040400,0x8004040C,ZZ_3FFAC_454);
ZZ_MARK_TARGET(0x8004040C,0x80040414,ZZ_3FFAC_460);
ZZ_MARK_TARGET(0x80040414,0x8004041C,ZZ_3FFAC_468);
ZZ_MARK_TARGET(0x8004041C,0x80040424,ZZ_3FFAC_470);
ZZ_MARK_TARGET(0x80040424,0x80040434,ZZ_3FFAC_478);
ZZ_MARK_TARGET(0x80040434,0x80040444,ZZ_3FFAC_488);
ZZ_MARK_TARGET(0x80040444,0x80040458,ZZ_3FFAC_498);
ZZ_MARK_TARGET(0x80040458,0x8004046C,ZZ_3FFAC_4AC);
ZZ_MARK_TARGET(0x8004046C,0x800404F8,ZZ_3FFAC_4C0);
ZZ_MARK_TARGET(0x800404F8,0x80040508,ZZ_3FFAC_54C);
ZZ_MARK_TARGET(0x80040508,0x80040548,ZZ_3FFAC_55C);
ZZ_MARK_TARGET(0x80040548,0x80040554,ZZ_3FFAC_59C);
ZZ_MARK_TARGET(0x80040554,0x80040574,ZZ_3FFAC_5A8);
ZZ_MARK_TARGET(0x80040574,0x800405BC,ZZ_3FFAC_5C8);
ZZ_MARK_TARGET(0x800405BC,0x800405F4,ZZ_3FFAC_610);
ZZ_MARK_TARGET(0x800405F4,0x800405FC,ZZ_3FFAC_648);
ZZ_MARK_TARGET(0x800405FC,0x80040614,ZZ_3FFAC_650);
ZZ_MARK_TARGET(0x80040614,0x8004061C,ZZ_3FFAC_668);
ZZ_MARK_TARGET(0x8004061C,0x80040624,ZZ_3FFAC_670);
ZZ_MARK_TARGET(0x80040624,0x80040650,ZZ_3FFAC_678);
ZZ_MARK_TARGET(0x80040650,0x80040658,ZZ_3FFAC_6A4);
ZZ_MARK_TARGET(0x80040658,0x800406C8,ZZ_3FFAC_6AC);
ZZ_MARK_TARGET(0x800409F4,0x80040A40,ZZ_3FFAC_A48);
ZZ_MARK_TARGET(0x80040A40,0x80040A50,ZZ_3FFAC_A94);
ZZ_MARK_TARGET(0x80040A50,0x80040A60,ZZ_3FFAC_AA4);
ZZ_MARK_TARGET(0x80040A60,0x80040AD0,ZZ_3FFAC_AB4);
ZZ_MARK_TARGET(0x80040AD0,0x80040AE4,ZZ_3FFAC_B24);
ZZ_MARK_TARGET(0x80040AE4,0x80040B00,ZZ_3FFAC_B38);
ZZ_MARK_TARGET(0x80040B00,0x80040B1C,ZZ_3FFAC_B54);
ZZ_MARK_TARGET(0x80040B1C,0x80040B20,ZZ_3FFAC_B70);
ZZ_MARK_TARGET(0x80040B20,0x80040B30,ZZ_3FFAC_B74);
ZZ_MARK_TARGET(0x80040B30,0x80040B5C,ZZ_3FFAC_B84);
ZZ_MARK_TARGET(0x80040B5C,0x80040B6C,ZZ_3FFAC_BB0);
ZZ_MARK_TARGET(0x80040B6C,0x80040B7C,ZZ_3FFAC_BC0);
ZZ_MARK_TARGET(0x80040B7C,0x80040BA8,ZZ_3FFAC_BD0);
ZZ_MARK_TARGET(0x80040BA8,0x80040BD8,ZZ_3FFAC_BFC);
ZZ_MARK_TARGET(0x80040BD8,0x80040BE0,ZZ_3FFAC_C2C);
ZZ_MARK_TARGET(0x80040BE0,0x80040C2C,ZZ_3FFAC_C34);
ZZ_MARK_TARGET(0x80040C2C,0x80040C3C,ZZ_3FFAC_C80);
ZZ_MARK_TARGET(0x80040C3C,0x80040C4C,ZZ_3FFAC_C90);
ZZ_MARK_TARGET(0x80040C4C,0x80040CBC,ZZ_3FFAC_CA0);
ZZ_MARK_TARGET(0x80040CBC,0x80040CD0,ZZ_3FFAC_D10);
ZZ_MARK_TARGET(0x80040CD0,0x80040CEC,ZZ_3FFAC_D24);
ZZ_MARK_TARGET(0x80040CEC,0x80040D08,ZZ_3FFAC_D40);
ZZ_MARK_TARGET(0x80040D08,0x80040D0C,ZZ_3FFAC_D5C);
ZZ_MARK_TARGET(0x80040D0C,0x80040D1C,ZZ_3FFAC_D60);
ZZ_MARK_TARGET(0x80040D1C,0x80040D48,ZZ_3FFAC_D70);
ZZ_MARK_TARGET(0x80040D48,0x80040D58,ZZ_3FFAC_D9C);
ZZ_MARK_TARGET(0x80040D58,0x80040D68,ZZ_3FFAC_DAC);
ZZ_MARK_TARGET(0x80040D68,0x80040D94,ZZ_3FFAC_DBC);
ZZ_MARK_TARGET(0x80040D94,0x80040DA4,ZZ_3FFAC_DE8);
ZZ_MARK_TARGET(0x80040DA4,0x80040DD4,ZZ_3FFAC_DF8);
ZZ_MARK_TARGET(0x80040DD4,0x80040DDC,ZZ_3FFAC_E28);
ZZ_MARK_TARGET(0x80040DDC,0x80040E44,ZZ_3FFAC_E30);
ZZ_MARK_TARGET(0x80040E44,0x80040E6C,ZZ_3FFAC_E98);
ZZ_MARK_TARGET(0x80040E6C,0x80040E94,ZZ_3FFAC_EC0);
ZZ_MARK_TARGET(0x80040E94,0x80040EAC,ZZ_3FFAC_EE8);
ZZ_MARK_TARGET(0x80040EAC,0x80040ED0,ZZ_3FFAC_F00);
ZZ_MARK_TARGET(0x80040ED0,0x80040EE4,ZZ_3FFAC_F24);
ZZ_MARK_TARGET(0x80040EE4,0x80040F08,ZZ_3FFAC_F38);
ZZ_MARK_TARGET(0x80040F08,0x80040F34,ZZ_3FFAC_F5C);
ZZ_MARK_TARGET(0x80040F34,0x80040F44,ZZ_3FFAC_F88);
ZZ_MARK_TARGET(0x80040F44,0x80040FA4,ZZ_3FFAC_F98);
ZZ_MARK_TARGET(0x80040FA4,0x80040FAC,ZZ_3FFAC_FF8);
