#ifdef ZZ_INCLUDE_CODE
ZZ_24DE0:
	SP -= 152;
	EMU_Write32(SP + 112,S0); //+ 0x70
	S0 = A0;
	EMU_Write32(SP + 148,RA); //+ 0x94
	EMU_Write32(SP + 144,FP); //+ 0x90
	EMU_Write32(SP + 140,S7); //+ 0x8C
	EMU_Write32(SP + 136,S6); //+ 0x88
	EMU_Write32(SP + 132,S5); //+ 0x84
	EMU_Write32(SP + 128,S4); //+ 0x80
	EMU_Write32(SP + 124,S3); //+ 0x7C
	EMU_Write32(SP + 120,S2); //+ 0x78
	EMU_Write32(SP + 116,S1); //+ 0x74
	EMU_Write32(SP + 88,A3); //+ 0x58
	T1 = EMU_ReadU32(S0 + 4); //+ 0x4
	EMU_Write32(SP + 104,T1); //+ 0x68
	V0 = EMU_ReadU32(A1);
	S2 = EMU_ReadU32(S0 + 8); //+ 0x8
	V0 = (int32_t)V0 >> 8;
	EMU_Write32(SP + 40,V0); //+ 0x28
	V0 = EMU_ReadU32(A1 + 4); //+ 0x4
	V0 = (int32_t)V0 >> 8;
	EMU_Write32(SP + 44,V0); //+ 0x2C
	V0 = EMU_ReadU32(A1 + 8); //+ 0x8
	S6 = A2;
	A2 = R0;
	A3 = 0x2;
	V0 = (int32_t)V0 >> 8;
	EMU_Write32(SP + 48,V0); //+ 0x30
	V0 = EMU_ReadU32(T1 + 4); //+ 0x4
	A0 = EMU_ReadU32(SP + 104); //+ 0x68
	S3 = (int32_t)S2 >> 8;
	S7 = EMU_ReadU32(V0 + 20); //+ 0x14
	RA = 0x80024E70; //ZZ_24DE0_90
	A1 = 0x4B;
	ZZ_CLOCKCYCLES(36,0x800325CC);
	goto ZZ_325CC;
ZZ_24DE0_90:
	A0 = EMU_ReadU32(SP + 104); //+ 0x68
	A1 = 0x4B;
	A2 = R0;
	A3 = S3;
	V1 = 0x2;
	V0 -= 1;
	EMU_Write32(SP + 16,R0); //+ 0x10
	EMU_Write32(SP + 20,V1); //+ 0x14
	EMU_Write32(SP + 24,R0); //+ 0x18
	EMU_Write32(SP + 28,R0); //+ 0x1C
	EMU_Write32(SP + 32,R0); //+ 0x20
	RA = 0x80024EA4; //ZZ_24DE0_C4
	EMU_Write32(SP + 96,V0); //+ 0x60
	ZZ_CLOCKCYCLES(13,0x80031DF4);
	goto ZZ_31DF4;
ZZ_24DE0_C4:
	T1 = EMU_ReadU32(SP + 96); //+ 0x60
	A0 = V0;
	V0 = (int32_t)S3 < (int32_t)T1;
	if (V0)
	{
		S5 = S3 + 1;
		ZZ_CLOCKCYCLES(5,0x80024EC4);
		goto ZZ_24DE0_E4;
	}
	S5 = S3 + 1;
	S5 = S3;
	A3 = A0;
	ZZ_CLOCKCYCLES(8,0x80024EC8);
	goto ZZ_24DE0_E8;
ZZ_24DE0_E4:
	A3 = A0 + 6;
	ZZ_CLOCKCYCLES(1,0x80024EC8);
ZZ_24DE0_E8:
	T1 = EMU_ReadU32(SP + 172); //+ 0xAC
	V0 = T1 & 0x5;
	if (!V0)
	{
		A2 = S2 & 0xFF;
		ZZ_CLOCKCYCLES(5,0x80024FD0);
		goto ZZ_24DE0_1F0;
	}
	A2 = S2 & 0xFF;
	A1 = EMU_ReadS16(A0);
	V0 = EMU_ReadU32(S7);
	A1 += V0;
	EMU_Write32(SP + 56,A1); //+ 0x38
	A0 = EMU_ReadS16(A0 + 4); //+ 0x4
	V0 = EMU_ReadU32(S7 + 8); //+ 0x8
	A0 += V0;
	EMU_Write32(SP + 64,A0); //+ 0x40
	V0 = EMU_ReadS16(A3);
	V1 = EMU_ReadU32(S7);
	V0 += V1;
	V1 = V0 - A1;
	EMU_SMultiply(V1,A2);
	EMU_Write32(SP + 72,V0); //+ 0x48
	V0 = EMU_ReadS16(A3 + 4); //+ 0x4
	V1 = EMU_ReadU32(S7 + 8); //+ 0x8
	T0 = LO;
	V0 += V1;
	V1 = V0 - A0;
	EMU_SMultiply(V1,A2);
	EMU_Write32(SP + 80,V0); //+ 0x50
	V1 = EMU_ReadU32(SP + 40); //+ 0x28
	V0 = (int32_t)T0 >> 8;
	A1 += V0;
	A2 = EMU_ReadU32(SP + 48); //+ 0x30
	A3 = V1 - A1;
	T2 = LO;
	V0 = (int32_t)T2 >> 8;
	A0 += V0;
	V0 = 0x1;
	if (T1 != V0)
	{
		V1 = A2 - A0;
		ZZ_CLOCKCYCLES(40,0x80024F9C);
		goto ZZ_24DE0_1BC;
	}
	V1 = A2 - A0;
	T1 = EMU_ReadU32(SP + 168); //+ 0xA8
	EMU_SMultiply(V1,T1);
	T1 = EMU_ReadU32(SP + 88); //+ 0x58
	V1 = LO;
	EMU_SMultiply(A3,T1);
	V1 = (int32_t)V1 >> 4;
	V0 = LO;
	V0 = (int32_t)V0 >> 4;
	A2 = V1 + V0;
	ZZ_CLOCKCYCLES(53,0x80025018);
	goto ZZ_24DE0_238;
ZZ_24DE0_1BC:
	T1 = EMU_ReadU32(SP + 88); //+ 0x58
	EMU_SMultiply(V1,T1);
	T1 = EMU_ReadU32(SP + 168); //+ 0xA8
	V1 = LO;
	EMU_SMultiply(A3,T1);
	V1 = (int32_t)V1 >> 4;
	V0 = LO;
	V0 = (int32_t)V0 >> 4;
	A2 = V0 - V1;
	ZZ_CLOCKCYCLES(13,0x80025018);
	goto ZZ_24DE0_238;
ZZ_24DE0_1F0:
	V0 = EMU_ReadS16(A0 + 2); //+ 0x2
	V1 = EMU_ReadU32(S7 + 4); //+ 0x4
	V0 += V1;
	EMU_Write32(SP + 60,V0); //+ 0x3C
	A0 = EMU_ReadS16(A3 + 2); //+ 0x2
	V1 = EMU_ReadU32(S7 + 4); //+ 0x4
	A0 += V1;
	V1 = A0 - V0;
	EMU_SMultiply(V1,A2);
	A1 = EMU_ReadU32(SP + 44); //+ 0x2C
	EMU_Write32(SP + 76,A0); //+ 0x4C
	T1 = LO;
	V1 = (int32_t)T1 >> 8;
	V0 += V1;
	V0 = V0 - A1;
	A2 = V0 << 8;
	ZZ_CLOCKCYCLES(18,0x80025018);
ZZ_24DE0_238:
	V0 = (int32_t)S6 < (int32_t)A2;
	if (V0)
	{
		FP = S2;
		ZZ_CLOCKCYCLES(3,0x80025034);
		goto ZZ_24DE0_254;
	}
	FP = S2;
	T1 = EMU_ReadU32(SP + 176); //+ 0xB0
	V0 = S6 - A2;
	EMU_Write32(T1,S2);
	ZZ_CLOCKCYCLES(7,0x800255F0);
	goto ZZ_24DE0_810;
ZZ_24DE0_254:
	V1 = EMU_ReadU32(S0 + 12); //+ 0xC
	V0 = 0x2;
	if (V1 != V0)
	{
		S4 = A2 - S6;
		ZZ_CLOCKCYCLES(4,0x800252B4);
		goto ZZ_24DE0_4D4;
	}
	S4 = A2 - S6;
	T1 = EMU_ReadU32(SP + 172); //+ 0xAC
	V0 = T1 & 0x5;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(9,0x800250E4);
		goto ZZ_24DE0_304;
	}
	A1 = EMU_ReadU32(SP + 40); //+ 0x28
	V1 = EMU_ReadU32(SP + 72); //+ 0x48
	A0 = EMU_ReadU32(SP + 48); //+ 0x30
	V0 = EMU_ReadU32(SP + 80); //+ 0x50
	A3 = A1 - V1;
	V1 = A0 - V0;
	V0 = 0x1;
	if (T1 != V0)
	{
		ZZ_CLOCKCYCLES(18,0x800250B0);
		goto ZZ_24DE0_2D0;
	}
	T1 = EMU_ReadU32(SP + 168); //+ 0xA8
	EMU_SMultiply(V1,T1);
	T1 = EMU_ReadU32(SP + 88); //+ 0x58
	V1 = LO;
	EMU_SMultiply(A3,T1);
	V1 = (int32_t)V1 >> 4;
	V0 = LO;
	V0 = (int32_t)V0 >> 4;
	S1 = V1 + V0;
	ZZ_CLOCKCYCLES(31,0x800250F8);
	goto ZZ_24DE0_318;
ZZ_24DE0_2D0:
	T1 = EMU_ReadU32(SP + 88); //+ 0x58
	EMU_SMultiply(V1,T1);
	T1 = EMU_ReadU32(SP + 168); //+ 0xA8
	V1 = LO;
	EMU_SMultiply(A3,T1);
	V1 = (int32_t)V1 >> 4;
	V0 = LO;
	V0 = (int32_t)V0 >> 4;
	S1 = V0 - V1;
	ZZ_CLOCKCYCLES(13,0x800250F8);
	goto ZZ_24DE0_318;
ZZ_24DE0_304:
	V1 = EMU_ReadU32(SP + 44); //+ 0x2C
	V0 = EMU_ReadU32(SP + 76); //+ 0x4C
	V0 = V0 - V1;
	S1 = V0 << 8;
	ZZ_CLOCKCYCLES(5,0x800250F8);
ZZ_24DE0_318:
	V0 = (int32_t)S6 < (int32_t)S1;
	if (V0)
	{
		V1 = S1 - S6;
		ZZ_CLOCKCYCLES(3,0x80025164);
		goto ZZ_24DE0_384;
	}
	V1 = S1 - S6;
	V0 = A2 - S6;
	V0 <<= 8;
	V1 = A2 - S1;
	EMU_SDivide(V0,V1);
	if (V1)
	{
		ZZ_CLOCKCYCLES(9,0x80025120);
		goto ZZ_24DE0_340;
	}
	EMU_Break(7168);
	ZZ_CLOCKCYCLES(10,0x80025120);
ZZ_24DE0_340:
	AT = -1;
	if (V1 != AT)
	{
		AT = 0x80000000;
		ZZ_CLOCKCYCLES(3,0x80025138);
		goto ZZ_24DE0_358;
	}
	AT = 0x80000000;
	if (V0 != AT)
	{
		ZZ_CLOCKCYCLES(5,0x80025138);
		goto ZZ_24DE0_358;
	}
	EMU_Break(6144);
	ZZ_CLOCKCYCLES(6,0x80025138);
ZZ_24DE0_358:
	A2 = LO;
	V0 = S5 << 8;
	V0 = V0 - S2;
	EMU_SMultiply(V0,A2);
	T1 = LO;
	V1 = (int32_t)T1 >> 8;
	T1 = EMU_ReadU32(SP + 176); //+ 0xB0
	V0 = R0;
	V1 += S2;
	EMU_Write32(T1,V1);
	ZZ_CLOCKCYCLES(11,0x800255F0);
	goto ZZ_24DE0_810;
ZZ_24DE0_384:
	V0 = (int32_t)V1 < (int32_t)S4;
	if (!V0)
	{
		S2 = R0;
		ZZ_CLOCKCYCLES(3,0x8002517C);
		goto ZZ_24DE0_39C;
	}
	S2 = R0;
	ZZ_CLOCKCYCLES(3,0x80025170);
ZZ_24DE0_390:
	S4 = V1;
	FP = S5 << 8;
	S2 = R0;
	ZZ_CLOCKCYCLES(3,0x8002517C);
ZZ_24DE0_39C:
	T1 = EMU_ReadU32(SP + 96); //+ 0x60
	if (S5 == T1)
	{
		S3 = S5;
		ZZ_CLOCKCYCLES(4,0x80025574);
		goto ZZ_24DE0_794;
	}
	S3 = S5;
	S5 = S3 + 1;
	A0 = EMU_ReadU32(SP + 104); //+ 0x68
	A1 = 0x4B;
	A2 = R0;
	A3 = S5 << 8;
	A3 = (int32_t)A3 >> 8;
	V0 = 0x2;
	EMU_Write32(SP + 16,R0); //+ 0x10
	EMU_Write32(SP + 20,V0); //+ 0x14
	EMU_Write32(SP + 24,R0); //+ 0x18
	EMU_Write32(SP + 28,R0); //+ 0x1C
	RA = 0x800251C0; //ZZ_24DE0_3E0
	EMU_Write32(SP + 32,R0); //+ 0x20
	ZZ_CLOCKCYCLES(17,0x80031DF4);
	goto ZZ_31DF4;
ZZ_24DE0_3E0:
	T1 = EMU_ReadU32(SP + 172); //+ 0xAC
	A0 = V0;
	V0 = T1 & 0x5;
	if (!V0)
	{
		S0 = S1;
		ZZ_CLOCKCYCLES(5,0x80025270);
		goto ZZ_24DE0_490;
	}
	S0 = S1;
	V1 = EMU_ReadS16(A0);
	A2 = EMU_ReadU32(S7);
	A3 = EMU_ReadU32(SP + 40); //+ 0x28
	V0 = EMU_ReadS16(A0 + 4); //+ 0x4
	A0 = EMU_ReadU32(S7 + 8); //+ 0x8
	A1 = EMU_ReadU32(SP + 48); //+ 0x30
	V1 += A2;
	A3 = A3 - V1;
	V0 += A0;
	V1 = A1 - V0;
	V0 = 0x1;
	if (T1 != V0)
	{
		ZZ_CLOCKCYCLES(18,0x8002523C);
		goto ZZ_24DE0_45C;
	}
	T1 = EMU_ReadU32(SP + 168); //+ 0xA8
	EMU_SMultiply(V1,T1);
	T1 = EMU_ReadU32(SP + 88); //+ 0x58
	T0 = LO;
	EMU_SMultiply(A3,T1);
	V1 = (int32_t)T0 >> 4;
	V0 = LO;
	V0 = (int32_t)V0 >> 4;
	S1 = V1 + V0;
	ZZ_CLOCKCYCLES(31,0x80025288);
	goto ZZ_24DE0_4A8;
ZZ_24DE0_45C:
	T1 = EMU_ReadU32(SP + 88); //+ 0x58
	EMU_SMultiply(V1,T1);
	T1 = EMU_ReadU32(SP + 168); //+ 0xA8
	T0 = LO;
	EMU_SMultiply(A3,T1);
	V1 = (int32_t)T0 >> 4;
	V0 = LO;
	V0 = (int32_t)V0 >> 4;
	S1 = V0 - V1;
	ZZ_CLOCKCYCLES(13,0x80025288);
	goto ZZ_24DE0_4A8;
ZZ_24DE0_490:
	V0 = EMU_ReadS16(A0 + 2); //+ 0x2
	V1 = EMU_ReadU32(S7 + 4); //+ 0x4
	A0 = EMU_ReadU32(SP + 44); //+ 0x2C
	V0 += V1;
	V0 = V0 - A0;
	S1 = V0 << 8;
	ZZ_CLOCKCYCLES(6,0x80025288);
ZZ_24DE0_4A8:
	V0 = (int32_t)S6 < (int32_t)S1;
	if (!V0)
	{
		V1 = S1 - S6;
		ZZ_CLOCKCYCLES(3,0x80025584);
		goto ZZ_24DE0_7A4;
	}
	V1 = S1 - S6;
	V0 = (int32_t)V1 < (int32_t)S4;
	if (V0)
	{
		S2 += 1;
		ZZ_CLOCKCYCLES(6,0x80025170);
		goto ZZ_24DE0_390;
	}
	S2 += 1;
	V0 = (int32_t)S2 < 3;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(9,0x800255E0);
		goto ZZ_24DE0_800;
	}
	ZZ_CLOCKCYCLES(11,0x8002517C);
	goto ZZ_24DE0_39C;
ZZ_24DE0_4D4:
	T1 = EMU_ReadU32(SP + 172); //+ 0xAC
	V0 = T1 & 0x5;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(5,0x80025354);
		goto ZZ_24DE0_574;
	}
	A1 = EMU_ReadU32(SP + 40); //+ 0x28
	V1 = EMU_ReadU32(SP + 56); //+ 0x38
	A0 = EMU_ReadU32(SP + 48); //+ 0x30
	V0 = EMU_ReadU32(SP + 64); //+ 0x40
	A3 = A1 - V1;
	V1 = A0 - V0;
	V0 = 0x1;
	if (T1 != V0)
	{
		ZZ_CLOCKCYCLES(14,0x80025320);
		goto ZZ_24DE0_540;
	}
	T1 = EMU_ReadU32(SP + 168); //+ 0xA8
	EMU_SMultiply(V1,T1);
	T1 = EMU_ReadU32(SP + 88); //+ 0x58
	V1 = LO;
	EMU_SMultiply(A3,T1);
	V1 = (int32_t)V1 >> 4;
	V0 = LO;
	V0 = (int32_t)V0 >> 4;
	S0 = V1 + V0;
	ZZ_CLOCKCYCLES(27,0x80025368);
	goto ZZ_24DE0_588;
ZZ_24DE0_540:
	T1 = EMU_ReadU32(SP + 88); //+ 0x58
	EMU_SMultiply(V1,T1);
	T1 = EMU_ReadU32(SP + 168); //+ 0xA8
	V1 = LO;
	EMU_SMultiply(A3,T1);
	V1 = (int32_t)V1 >> 4;
	V0 = LO;
	V0 = (int32_t)V0 >> 4;
	S0 = V0 - V1;
	ZZ_CLOCKCYCLES(13,0x80025368);
	goto ZZ_24DE0_588;
ZZ_24DE0_574:
	V1 = EMU_ReadU32(SP + 44); //+ 0x2C
	V0 = EMU_ReadU32(SP + 60); //+ 0x3C
	V0 = V0 - V1;
	S0 = V0 << 8;
	ZZ_CLOCKCYCLES(5,0x80025368);
ZZ_24DE0_588:
	V0 = (int32_t)S6 < (int32_t)S0;
	if (V0)
	{
		V1 = S0 - S6;
		ZZ_CLOCKCYCLES(3,0x800253D4);
		goto ZZ_24DE0_5F4;
	}
	V1 = S0 - S6;
	V0 = A2 - S6;
	V0 <<= 8;
	V1 = A2 - S0;
	EMU_SDivide(V0,V1);
	if (V1)
	{
		ZZ_CLOCKCYCLES(9,0x80025390);
		goto ZZ_24DE0_5B0;
	}
	EMU_Break(7168);
	ZZ_CLOCKCYCLES(10,0x80025390);
ZZ_24DE0_5B0:
	AT = -1;
	if (V1 != AT)
	{
		AT = 0x80000000;
		ZZ_CLOCKCYCLES(3,0x800253A8);
		goto ZZ_24DE0_5C8;
	}
	AT = 0x80000000;
	if (V0 != AT)
	{
		ZZ_CLOCKCYCLES(5,0x800253A8);
		goto ZZ_24DE0_5C8;
	}
	EMU_Break(6144);
	ZZ_CLOCKCYCLES(6,0x800253A8);
ZZ_24DE0_5C8:
	A2 = LO;
	V0 = S3 << 8;
	V0 = S2 - V0;
	EMU_SMultiply(V0,A2);
	T1 = LO;
	V1 = (int32_t)T1 >> 8;
	T1 = EMU_ReadU32(SP + 176); //+ 0xB0
	V0 = R0;
	V1 = S2 - V1;
	EMU_Write32(T1,V1);
	ZZ_CLOCKCYCLES(11,0x800255F0);
	goto ZZ_24DE0_810;
ZZ_24DE0_5F4:
	V0 = (int32_t)V1 < (int32_t)S4;
	if (!V0)
	{
		S2 = R0;
		ZZ_CLOCKCYCLES(3,0x800253EC);
		goto ZZ_24DE0_60C;
	}
	S2 = R0;
	S4 = V1;
	ZZ_CLOCKCYCLES(4,0x800253E4);
ZZ_24DE0_604:
	FP = S3 << 8;
	S2 = R0;
	ZZ_CLOCKCYCLES(2,0x800253EC);
ZZ_24DE0_60C:
	if (S3)
	{
		S5 = S3;
		ZZ_CLOCKCYCLES(2,0x80025408);
		goto ZZ_24DE0_628;
	}
	S5 = S3;
	T1 = EMU_ReadU32(SP + 176); //+ 0xB0
	EMU_Write32(T1,FP);
	V0 = S4;
	ZZ_CLOCKCYCLES(7,0x800255F0);
	goto ZZ_24DE0_810;
ZZ_24DE0_628:
	S3 -= 1;
	A0 = EMU_ReadU32(SP + 104); //+ 0x68
	A1 = 0x4B;
	A2 = R0;
	A3 = S3 << 8;
	A3 = (int32_t)A3 >> 8;
	V0 = 0x2;
	EMU_Write32(SP + 16,R0); //+ 0x10
	EMU_Write32(SP + 20,V0); //+ 0x14
	EMU_Write32(SP + 24,R0); //+ 0x18
	EMU_Write32(SP + 28,R0); //+ 0x1C
	RA = 0x8002543C; //ZZ_24DE0_65C
	EMU_Write32(SP + 32,R0); //+ 0x20
	ZZ_CLOCKCYCLES(13,0x80031DF4);
	goto ZZ_31DF4;
ZZ_24DE0_65C:
	T1 = EMU_ReadU32(SP + 172); //+ 0xAC
	A0 = V0;
	V0 = T1 & 0x5;
	if (!V0)
	{
		S1 = S0;
		ZZ_CLOCKCYCLES(5,0x800254EC);
		goto ZZ_24DE0_70C;
	}
	S1 = S0;
	V1 = EMU_ReadS16(A0);
	A2 = EMU_ReadU32(S7);
	A3 = EMU_ReadU32(SP + 40); //+ 0x28
	V0 = EMU_ReadS16(A0 + 4); //+ 0x4
	A0 = EMU_ReadU32(S7 + 8); //+ 0x8
	A1 = EMU_ReadU32(SP + 48); //+ 0x30
	V1 += A2;
	A3 = A3 - V1;
	V0 += A0;
	V1 = A1 - V0;
	V0 = 0x1;
	if (T1 != V0)
	{
		ZZ_CLOCKCYCLES(18,0x800254B8);
		goto ZZ_24DE0_6D8;
	}
	T1 = EMU_ReadU32(SP + 168); //+ 0xA8
	EMU_SMultiply(V1,T1);
	T1 = EMU_ReadU32(SP + 88); //+ 0x58
	T0 = LO;
	EMU_SMultiply(A3,T1);
	V1 = (int32_t)T0 >> 4;
	V0 = LO;
	V0 = (int32_t)V0 >> 4;
	S0 = V1 + V0;
	ZZ_CLOCKCYCLES(31,0x80025504);
	goto ZZ_24DE0_724;
ZZ_24DE0_6D8:
	T1 = EMU_ReadU32(SP + 88); //+ 0x58
	EMU_SMultiply(V1,T1);
	T1 = EMU_ReadU32(SP + 168); //+ 0xA8
	T0 = LO;
	EMU_SMultiply(A3,T1);
	V1 = (int32_t)T0 >> 4;
	V0 = LO;
	V0 = (int32_t)V0 >> 4;
	S0 = V0 - V1;
	ZZ_CLOCKCYCLES(13,0x80025504);
	goto ZZ_24DE0_724;
ZZ_24DE0_70C:
	V0 = EMU_ReadS16(A0 + 2); //+ 0x2
	V1 = EMU_ReadU32(S7 + 4); //+ 0x4
	A0 = EMU_ReadU32(SP + 44); //+ 0x2C
	V0 += V1;
	V0 = V0 - A0;
	S0 = V0 << 8;
	ZZ_CLOCKCYCLES(6,0x80025504);
ZZ_24DE0_724:
	V0 = (int32_t)S6 < (int32_t)S0;
	if (V0)
	{
		V1 = S0 - S6;
		ZZ_CLOCKCYCLES(3,0x80025560);
		goto ZZ_24DE0_780;
	}
	V1 = S0 - S6;
	V1 = S1 - S6;
	V1 <<= 8;
	V0 = S1 - S0;
	EMU_SDivide(V1,V0);
	if (V0)
	{
		ZZ_CLOCKCYCLES(9,0x8002552C);
		goto ZZ_24DE0_74C;
	}
	EMU_Break(7168);
	ZZ_CLOCKCYCLES(10,0x8002552C);
ZZ_24DE0_74C:
	AT = -1;
	if (V0 != AT)
	{
		AT = 0x80000000;
		ZZ_CLOCKCYCLES(3,0x80025544);
		goto ZZ_24DE0_764;
	}
	AT = 0x80000000;
	if (V1 != AT)
	{
		ZZ_CLOCKCYCLES(5,0x80025544);
		goto ZZ_24DE0_764;
	}
	EMU_Break(6144);
	ZZ_CLOCKCYCLES(6,0x80025544);
ZZ_24DE0_764:
	A2 = LO;
	T1 = EMU_ReadU32(SP + 176); //+ 0xB0
	V0 = R0;
	V1 = S5 << 8;
	V1 = V1 - A2;
	EMU_Write32(T1,V1);
	ZZ_CLOCKCYCLES(7,0x800255F0);
	goto ZZ_24DE0_810;
ZZ_24DE0_780:
	V0 = (int32_t)V1 < (int32_t)S4;
	if (!V0)
	{
		S2 += 1;
		ZZ_CLOCKCYCLES(3,0x800255D4);
		goto ZZ_24DE0_7F4;
	}
	S2 += 1;
	S4 = V1;
	ZZ_CLOCKCYCLES(5,0x800253E4);
	goto ZZ_24DE0_604;
ZZ_24DE0_794:
	T1 = EMU_ReadU32(SP + 176); //+ 0xB0
	V0 = S4;
	EMU_Write32(T1,FP);
	ZZ_CLOCKCYCLES(4,0x800255F0);
	goto ZZ_24DE0_810;
ZZ_24DE0_7A4:
	V1 = S0 - S6;
	V1 <<= 8;
	V0 = S0 - S1;
	EMU_SDivide(V1,V0);
	if (V0)
	{
		ZZ_CLOCKCYCLES(6,0x800255A0);
		goto ZZ_24DE0_7C0;
	}
	EMU_Break(7168);
	ZZ_CLOCKCYCLES(7,0x800255A0);
ZZ_24DE0_7C0:
	AT = -1;
	if (V0 != AT)
	{
		AT = 0x80000000;
		ZZ_CLOCKCYCLES(3,0x800255B8);
		goto ZZ_24DE0_7D8;
	}
	AT = 0x80000000;
	if (V1 != AT)
	{
		ZZ_CLOCKCYCLES(5,0x800255B8);
		goto ZZ_24DE0_7D8;
	}
	EMU_Break(6144);
	ZZ_CLOCKCYCLES(6,0x800255B8);
ZZ_24DE0_7D8:
	A2 = LO;
	T1 = EMU_ReadU32(SP + 176); //+ 0xB0
	V0 = R0;
	V1 = S3 << 8;
	V1 += A2;
	EMU_Write32(T1,V1);
	ZZ_CLOCKCYCLES(7,0x800255F0);
	goto ZZ_24DE0_810;
ZZ_24DE0_7F4:
	V0 = (int32_t)S2 < 3;
	if (V0)
	{
		ZZ_CLOCKCYCLES(3,0x800253EC);
		goto ZZ_24DE0_60C;
	}
	ZZ_CLOCKCYCLES(3,0x800255E0);
ZZ_24DE0_800:
	T1 = EMU_ReadU32(SP + 176); //+ 0xB0
	EMU_Write32(T1,FP);
	V0 = -1;
	ZZ_CLOCKCYCLES(4,0x800255F0);
ZZ_24DE0_810:
	RA = EMU_ReadU32(SP + 148); //+ 0x94
	FP = EMU_ReadU32(SP + 144); //+ 0x90
	S7 = EMU_ReadU32(SP + 140); //+ 0x8C
	S6 = EMU_ReadU32(SP + 136); //+ 0x88
	S5 = EMU_ReadU32(SP + 132); //+ 0x84
	S4 = EMU_ReadU32(SP + 128); //+ 0x80
	S3 = EMU_ReadU32(SP + 124); //+ 0x7C
	S2 = EMU_ReadU32(SP + 120); //+ 0x78
	S1 = EMU_ReadU32(SP + 116); //+ 0x74
	S0 = EMU_ReadU32(SP + 112); //+ 0x70
	SP += 152;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(13);
	ZZ_JUMPREGISTER(0x80024A4C,ZZ_248CC_180);
	ZZ_JUMPREGISTER(0x80024D20,ZZ_24CBC_64);
	ZZ_JUMPREGISTER(0x80024D54,ZZ_24CBC_98);
	ZZ_JUMPREGISTER(0x80024C24,ZZ_248CC_358);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80024DE0,ZZ_24DE0);
ZZ_MARK(0x80024DE4);
ZZ_MARK(0x80024DE8);
ZZ_MARK(0x80024DEC);
ZZ_MARK(0x80024DF0);
ZZ_MARK(0x80024DF4);
ZZ_MARK(0x80024DF8);
ZZ_MARK(0x80024DFC);
ZZ_MARK(0x80024E00);
ZZ_MARK(0x80024E04);
ZZ_MARK(0x80024E08);
ZZ_MARK(0x80024E0C);
ZZ_MARK(0x80024E10);
ZZ_MARK(0x80024E14);
ZZ_MARK(0x80024E18);
ZZ_MARK(0x80024E1C);
ZZ_MARK(0x80024E20);
ZZ_MARK(0x80024E24);
ZZ_MARK(0x80024E28);
ZZ_MARK(0x80024E2C);
ZZ_MARK(0x80024E30);
ZZ_MARK(0x80024E34);
ZZ_MARK(0x80024E38);
ZZ_MARK(0x80024E3C);
ZZ_MARK(0x80024E40);
ZZ_MARK(0x80024E44);
ZZ_MARK(0x80024E48);
ZZ_MARK(0x80024E4C);
ZZ_MARK(0x80024E50);
ZZ_MARK(0x80024E54);
ZZ_MARK(0x80024E58);
ZZ_MARK(0x80024E5C);
ZZ_MARK(0x80024E60);
ZZ_MARK(0x80024E64);
ZZ_MARK(0x80024E68);
ZZ_MARK(0x80024E6C);
ZZ_MARK_TARGET(0x80024E70,ZZ_24DE0_90);
ZZ_MARK(0x80024E74);
ZZ_MARK(0x80024E78);
ZZ_MARK(0x80024E7C);
ZZ_MARK(0x80024E80);
ZZ_MARK(0x80024E84);
ZZ_MARK(0x80024E88);
ZZ_MARK(0x80024E8C);
ZZ_MARK(0x80024E90);
ZZ_MARK(0x80024E94);
ZZ_MARK(0x80024E98);
ZZ_MARK(0x80024E9C);
ZZ_MARK(0x80024EA0);
ZZ_MARK_TARGET(0x80024EA4,ZZ_24DE0_C4);
ZZ_MARK(0x80024EA8);
ZZ_MARK(0x80024EAC);
ZZ_MARK(0x80024EB0);
ZZ_MARK(0x80024EB4);
ZZ_MARK(0x80024EB8);
ZZ_MARK(0x80024EBC);
ZZ_MARK(0x80024EC0);
ZZ_MARK_TARGET(0x80024EC4,ZZ_24DE0_E4);
ZZ_MARK_TARGET(0x80024EC8,ZZ_24DE0_E8);
ZZ_MARK(0x80024ECC);
ZZ_MARK(0x80024ED0);
ZZ_MARK(0x80024ED4);
ZZ_MARK(0x80024ED8);
ZZ_MARK(0x80024EDC);
ZZ_MARK(0x80024EE0);
ZZ_MARK(0x80024EE4);
ZZ_MARK(0x80024EE8);
ZZ_MARK(0x80024EEC);
ZZ_MARK(0x80024EF0);
ZZ_MARK(0x80024EF4);
ZZ_MARK(0x80024EF8);
ZZ_MARK(0x80024EFC);
ZZ_MARK(0x80024F00);
ZZ_MARK(0x80024F04);
ZZ_MARK(0x80024F08);
ZZ_MARK(0x80024F0C);
ZZ_MARK(0x80024F10);
ZZ_MARK(0x80024F14);
ZZ_MARK(0x80024F18);
ZZ_MARK(0x80024F1C);
ZZ_MARK(0x80024F20);
ZZ_MARK(0x80024F24);
ZZ_MARK(0x80024F28);
ZZ_MARK(0x80024F2C);
ZZ_MARK(0x80024F30);
ZZ_MARK(0x80024F34);
ZZ_MARK(0x80024F38);
ZZ_MARK(0x80024F3C);
ZZ_MARK(0x80024F40);
ZZ_MARK(0x80024F44);
ZZ_MARK(0x80024F48);
ZZ_MARK(0x80024F4C);
ZZ_MARK(0x80024F50);
ZZ_MARK(0x80024F54);
ZZ_MARK(0x80024F58);
ZZ_MARK(0x80024F5C);
ZZ_MARK(0x80024F60);
ZZ_MARK(0x80024F64);
ZZ_MARK(0x80024F68);
ZZ_MARK(0x80024F6C);
ZZ_MARK(0x80024F70);
ZZ_MARK(0x80024F74);
ZZ_MARK(0x80024F78);
ZZ_MARK(0x80024F7C);
ZZ_MARK(0x80024F80);
ZZ_MARK(0x80024F84);
ZZ_MARK(0x80024F88);
ZZ_MARK(0x80024F8C);
ZZ_MARK(0x80024F90);
ZZ_MARK(0x80024F94);
ZZ_MARK(0x80024F98);
ZZ_MARK_TARGET(0x80024F9C,ZZ_24DE0_1BC);
ZZ_MARK(0x80024FA0);
ZZ_MARK(0x80024FA4);
ZZ_MARK(0x80024FA8);
ZZ_MARK(0x80024FAC);
ZZ_MARK(0x80024FB0);
ZZ_MARK(0x80024FB4);
ZZ_MARK(0x80024FB8);
ZZ_MARK(0x80024FBC);
ZZ_MARK(0x80024FC0);
ZZ_MARK(0x80024FC4);
ZZ_MARK(0x80024FC8);
ZZ_MARK(0x80024FCC);
ZZ_MARK_TARGET(0x80024FD0,ZZ_24DE0_1F0);
ZZ_MARK(0x80024FD4);
ZZ_MARK(0x80024FD8);
ZZ_MARK(0x80024FDC);
ZZ_MARK(0x80024FE0);
ZZ_MARK(0x80024FE4);
ZZ_MARK(0x80024FE8);
ZZ_MARK(0x80024FEC);
ZZ_MARK(0x80024FF0);
ZZ_MARK(0x80024FF4);
ZZ_MARK(0x80024FF8);
ZZ_MARK(0x80024FFC);
ZZ_MARK(0x80025000);
ZZ_MARK(0x80025004);
ZZ_MARK(0x80025008);
ZZ_MARK(0x8002500C);
ZZ_MARK(0x80025010);
ZZ_MARK(0x80025014);
ZZ_MARK_TARGET(0x80025018,ZZ_24DE0_238);
ZZ_MARK(0x8002501C);
ZZ_MARK(0x80025020);
ZZ_MARK(0x80025024);
ZZ_MARK(0x80025028);
ZZ_MARK(0x8002502C);
ZZ_MARK(0x80025030);
ZZ_MARK_TARGET(0x80025034,ZZ_24DE0_254);
ZZ_MARK(0x80025038);
ZZ_MARK(0x8002503C);
ZZ_MARK(0x80025040);
ZZ_MARK(0x80025044);
ZZ_MARK(0x80025048);
ZZ_MARK(0x8002504C);
ZZ_MARK(0x80025050);
ZZ_MARK(0x80025054);
ZZ_MARK(0x80025058);
ZZ_MARK(0x8002505C);
ZZ_MARK(0x80025060);
ZZ_MARK(0x80025064);
ZZ_MARK(0x80025068);
ZZ_MARK(0x8002506C);
ZZ_MARK(0x80025070);
ZZ_MARK(0x80025074);
ZZ_MARK(0x80025078);
ZZ_MARK(0x8002507C);
ZZ_MARK(0x80025080);
ZZ_MARK(0x80025084);
ZZ_MARK(0x80025088);
ZZ_MARK(0x8002508C);
ZZ_MARK(0x80025090);
ZZ_MARK(0x80025094);
ZZ_MARK(0x80025098);
ZZ_MARK(0x8002509C);
ZZ_MARK(0x800250A0);
ZZ_MARK(0x800250A4);
ZZ_MARK(0x800250A8);
ZZ_MARK(0x800250AC);
ZZ_MARK_TARGET(0x800250B0,ZZ_24DE0_2D0);
ZZ_MARK(0x800250B4);
ZZ_MARK(0x800250B8);
ZZ_MARK(0x800250BC);
ZZ_MARK(0x800250C0);
ZZ_MARK(0x800250C4);
ZZ_MARK(0x800250C8);
ZZ_MARK(0x800250CC);
ZZ_MARK(0x800250D0);
ZZ_MARK(0x800250D4);
ZZ_MARK(0x800250D8);
ZZ_MARK(0x800250DC);
ZZ_MARK(0x800250E0);
ZZ_MARK_TARGET(0x800250E4,ZZ_24DE0_304);
ZZ_MARK(0x800250E8);
ZZ_MARK(0x800250EC);
ZZ_MARK(0x800250F0);
ZZ_MARK(0x800250F4);
ZZ_MARK_TARGET(0x800250F8,ZZ_24DE0_318);
ZZ_MARK(0x800250FC);
ZZ_MARK(0x80025100);
ZZ_MARK(0x80025104);
ZZ_MARK(0x80025108);
ZZ_MARK(0x8002510C);
ZZ_MARK(0x80025110);
ZZ_MARK(0x80025114);
ZZ_MARK(0x80025118);
ZZ_MARK(0x8002511C);
ZZ_MARK_TARGET(0x80025120,ZZ_24DE0_340);
ZZ_MARK(0x80025124);
ZZ_MARK(0x80025128);
ZZ_MARK(0x8002512C);
ZZ_MARK(0x80025130);
ZZ_MARK(0x80025134);
ZZ_MARK_TARGET(0x80025138,ZZ_24DE0_358);
ZZ_MARK(0x8002513C);
ZZ_MARK(0x80025140);
ZZ_MARK(0x80025144);
ZZ_MARK(0x80025148);
ZZ_MARK(0x8002514C);
ZZ_MARK(0x80025150);
ZZ_MARK(0x80025154);
ZZ_MARK(0x80025158);
ZZ_MARK(0x8002515C);
ZZ_MARK(0x80025160);
ZZ_MARK_TARGET(0x80025164,ZZ_24DE0_384);
ZZ_MARK(0x80025168);
ZZ_MARK(0x8002516C);
ZZ_MARK_TARGET(0x80025170,ZZ_24DE0_390);
ZZ_MARK(0x80025174);
ZZ_MARK(0x80025178);
ZZ_MARK_TARGET(0x8002517C,ZZ_24DE0_39C);
ZZ_MARK(0x80025180);
ZZ_MARK(0x80025184);
ZZ_MARK(0x80025188);
ZZ_MARK(0x8002518C);
ZZ_MARK(0x80025190);
ZZ_MARK(0x80025194);
ZZ_MARK(0x80025198);
ZZ_MARK(0x8002519C);
ZZ_MARK(0x800251A0);
ZZ_MARK(0x800251A4);
ZZ_MARK(0x800251A8);
ZZ_MARK(0x800251AC);
ZZ_MARK(0x800251B0);
ZZ_MARK(0x800251B4);
ZZ_MARK(0x800251B8);
ZZ_MARK(0x800251BC);
ZZ_MARK_TARGET(0x800251C0,ZZ_24DE0_3E0);
ZZ_MARK(0x800251C4);
ZZ_MARK(0x800251C8);
ZZ_MARK(0x800251CC);
ZZ_MARK(0x800251D0);
ZZ_MARK(0x800251D4);
ZZ_MARK(0x800251D8);
ZZ_MARK(0x800251DC);
ZZ_MARK(0x800251E0);
ZZ_MARK(0x800251E4);
ZZ_MARK(0x800251E8);
ZZ_MARK(0x800251EC);
ZZ_MARK(0x800251F0);
ZZ_MARK(0x800251F4);
ZZ_MARK(0x800251F8);
ZZ_MARK(0x800251FC);
ZZ_MARK(0x80025200);
ZZ_MARK(0x80025204);
ZZ_MARK(0x80025208);
ZZ_MARK(0x8002520C);
ZZ_MARK(0x80025210);
ZZ_MARK(0x80025214);
ZZ_MARK(0x80025218);
ZZ_MARK(0x8002521C);
ZZ_MARK(0x80025220);
ZZ_MARK(0x80025224);
ZZ_MARK(0x80025228);
ZZ_MARK(0x8002522C);
ZZ_MARK(0x80025230);
ZZ_MARK(0x80025234);
ZZ_MARK(0x80025238);
ZZ_MARK_TARGET(0x8002523C,ZZ_24DE0_45C);
ZZ_MARK(0x80025240);
ZZ_MARK(0x80025244);
ZZ_MARK(0x80025248);
ZZ_MARK(0x8002524C);
ZZ_MARK(0x80025250);
ZZ_MARK(0x80025254);
ZZ_MARK(0x80025258);
ZZ_MARK(0x8002525C);
ZZ_MARK(0x80025260);
ZZ_MARK(0x80025264);
ZZ_MARK(0x80025268);
ZZ_MARK(0x8002526C);
ZZ_MARK_TARGET(0x80025270,ZZ_24DE0_490);
ZZ_MARK(0x80025274);
ZZ_MARK(0x80025278);
ZZ_MARK(0x8002527C);
ZZ_MARK(0x80025280);
ZZ_MARK(0x80025284);
ZZ_MARK_TARGET(0x80025288,ZZ_24DE0_4A8);
ZZ_MARK(0x8002528C);
ZZ_MARK(0x80025290);
ZZ_MARK(0x80025294);
ZZ_MARK(0x80025298);
ZZ_MARK(0x8002529C);
ZZ_MARK(0x800252A0);
ZZ_MARK(0x800252A4);
ZZ_MARK(0x800252A8);
ZZ_MARK(0x800252AC);
ZZ_MARK(0x800252B0);
ZZ_MARK_TARGET(0x800252B4,ZZ_24DE0_4D4);
ZZ_MARK(0x800252B8);
ZZ_MARK(0x800252BC);
ZZ_MARK(0x800252C0);
ZZ_MARK(0x800252C4);
ZZ_MARK(0x800252C8);
ZZ_MARK(0x800252CC);
ZZ_MARK(0x800252D0);
ZZ_MARK(0x800252D4);
ZZ_MARK(0x800252D8);
ZZ_MARK(0x800252DC);
ZZ_MARK(0x800252E0);
ZZ_MARK(0x800252E4);
ZZ_MARK(0x800252E8);
ZZ_MARK(0x800252EC);
ZZ_MARK(0x800252F0);
ZZ_MARK(0x800252F4);
ZZ_MARK(0x800252F8);
ZZ_MARK(0x800252FC);
ZZ_MARK(0x80025300);
ZZ_MARK(0x80025304);
ZZ_MARK(0x80025308);
ZZ_MARK(0x8002530C);
ZZ_MARK(0x80025310);
ZZ_MARK(0x80025314);
ZZ_MARK(0x80025318);
ZZ_MARK(0x8002531C);
ZZ_MARK_TARGET(0x80025320,ZZ_24DE0_540);
ZZ_MARK(0x80025324);
ZZ_MARK(0x80025328);
ZZ_MARK(0x8002532C);
ZZ_MARK(0x80025330);
ZZ_MARK(0x80025334);
ZZ_MARK(0x80025338);
ZZ_MARK(0x8002533C);
ZZ_MARK(0x80025340);
ZZ_MARK(0x80025344);
ZZ_MARK(0x80025348);
ZZ_MARK(0x8002534C);
ZZ_MARK(0x80025350);
ZZ_MARK_TARGET(0x80025354,ZZ_24DE0_574);
ZZ_MARK(0x80025358);
ZZ_MARK(0x8002535C);
ZZ_MARK(0x80025360);
ZZ_MARK(0x80025364);
ZZ_MARK_TARGET(0x80025368,ZZ_24DE0_588);
ZZ_MARK(0x8002536C);
ZZ_MARK(0x80025370);
ZZ_MARK(0x80025374);
ZZ_MARK(0x80025378);
ZZ_MARK(0x8002537C);
ZZ_MARK(0x80025380);
ZZ_MARK(0x80025384);
ZZ_MARK(0x80025388);
ZZ_MARK(0x8002538C);
ZZ_MARK_TARGET(0x80025390,ZZ_24DE0_5B0);
ZZ_MARK(0x80025394);
ZZ_MARK(0x80025398);
ZZ_MARK(0x8002539C);
ZZ_MARK(0x800253A0);
ZZ_MARK(0x800253A4);
ZZ_MARK_TARGET(0x800253A8,ZZ_24DE0_5C8);
ZZ_MARK(0x800253AC);
ZZ_MARK(0x800253B0);
ZZ_MARK(0x800253B4);
ZZ_MARK(0x800253B8);
ZZ_MARK(0x800253BC);
ZZ_MARK(0x800253C0);
ZZ_MARK(0x800253C4);
ZZ_MARK(0x800253C8);
ZZ_MARK(0x800253CC);
ZZ_MARK(0x800253D0);
ZZ_MARK_TARGET(0x800253D4,ZZ_24DE0_5F4);
ZZ_MARK(0x800253D8);
ZZ_MARK(0x800253DC);
ZZ_MARK(0x800253E0);
ZZ_MARK_TARGET(0x800253E4,ZZ_24DE0_604);
ZZ_MARK(0x800253E8);
ZZ_MARK_TARGET(0x800253EC,ZZ_24DE0_60C);
ZZ_MARK(0x800253F0);
ZZ_MARK(0x800253F4);
ZZ_MARK(0x800253F8);
ZZ_MARK(0x800253FC);
ZZ_MARK(0x80025400);
ZZ_MARK(0x80025404);
ZZ_MARK_TARGET(0x80025408,ZZ_24DE0_628);
ZZ_MARK(0x8002540C);
ZZ_MARK(0x80025410);
ZZ_MARK(0x80025414);
ZZ_MARK(0x80025418);
ZZ_MARK(0x8002541C);
ZZ_MARK(0x80025420);
ZZ_MARK(0x80025424);
ZZ_MARK(0x80025428);
ZZ_MARK(0x8002542C);
ZZ_MARK(0x80025430);
ZZ_MARK(0x80025434);
ZZ_MARK(0x80025438);
ZZ_MARK_TARGET(0x8002543C,ZZ_24DE0_65C);
ZZ_MARK(0x80025440);
ZZ_MARK(0x80025444);
ZZ_MARK(0x80025448);
ZZ_MARK(0x8002544C);
ZZ_MARK(0x80025450);
ZZ_MARK(0x80025454);
ZZ_MARK(0x80025458);
ZZ_MARK(0x8002545C);
ZZ_MARK(0x80025460);
ZZ_MARK(0x80025464);
ZZ_MARK(0x80025468);
ZZ_MARK(0x8002546C);
ZZ_MARK(0x80025470);
ZZ_MARK(0x80025474);
ZZ_MARK(0x80025478);
ZZ_MARK(0x8002547C);
ZZ_MARK(0x80025480);
ZZ_MARK(0x80025484);
ZZ_MARK(0x80025488);
ZZ_MARK(0x8002548C);
ZZ_MARK(0x80025490);
ZZ_MARK(0x80025494);
ZZ_MARK(0x80025498);
ZZ_MARK(0x8002549C);
ZZ_MARK(0x800254A0);
ZZ_MARK(0x800254A4);
ZZ_MARK(0x800254A8);
ZZ_MARK(0x800254AC);
ZZ_MARK(0x800254B0);
ZZ_MARK(0x800254B4);
ZZ_MARK_TARGET(0x800254B8,ZZ_24DE0_6D8);
ZZ_MARK(0x800254BC);
ZZ_MARK(0x800254C0);
ZZ_MARK(0x800254C4);
ZZ_MARK(0x800254C8);
ZZ_MARK(0x800254CC);
ZZ_MARK(0x800254D0);
ZZ_MARK(0x800254D4);
ZZ_MARK(0x800254D8);
ZZ_MARK(0x800254DC);
ZZ_MARK(0x800254E0);
ZZ_MARK(0x800254E4);
ZZ_MARK(0x800254E8);
ZZ_MARK_TARGET(0x800254EC,ZZ_24DE0_70C);
ZZ_MARK(0x800254F0);
ZZ_MARK(0x800254F4);
ZZ_MARK(0x800254F8);
ZZ_MARK(0x800254FC);
ZZ_MARK(0x80025500);
ZZ_MARK_TARGET(0x80025504,ZZ_24DE0_724);
ZZ_MARK(0x80025508);
ZZ_MARK(0x8002550C);
ZZ_MARK(0x80025510);
ZZ_MARK(0x80025514);
ZZ_MARK(0x80025518);
ZZ_MARK(0x8002551C);
ZZ_MARK(0x80025520);
ZZ_MARK(0x80025524);
ZZ_MARK(0x80025528);
ZZ_MARK_TARGET(0x8002552C,ZZ_24DE0_74C);
ZZ_MARK(0x80025530);
ZZ_MARK(0x80025534);
ZZ_MARK(0x80025538);
ZZ_MARK(0x8002553C);
ZZ_MARK(0x80025540);
ZZ_MARK_TARGET(0x80025544,ZZ_24DE0_764);
ZZ_MARK(0x80025548);
ZZ_MARK(0x8002554C);
ZZ_MARK(0x80025550);
ZZ_MARK(0x80025554);
ZZ_MARK(0x80025558);
ZZ_MARK(0x8002555C);
ZZ_MARK_TARGET(0x80025560,ZZ_24DE0_780);
ZZ_MARK(0x80025564);
ZZ_MARK(0x80025568);
ZZ_MARK(0x8002556C);
ZZ_MARK(0x80025570);
ZZ_MARK_TARGET(0x80025574,ZZ_24DE0_794);
ZZ_MARK(0x80025578);
ZZ_MARK(0x8002557C);
ZZ_MARK(0x80025580);
ZZ_MARK_TARGET(0x80025584,ZZ_24DE0_7A4);
ZZ_MARK(0x80025588);
ZZ_MARK(0x8002558C);
ZZ_MARK(0x80025590);
ZZ_MARK(0x80025594);
ZZ_MARK(0x80025598);
ZZ_MARK(0x8002559C);
ZZ_MARK_TARGET(0x800255A0,ZZ_24DE0_7C0);
ZZ_MARK(0x800255A4);
ZZ_MARK(0x800255A8);
ZZ_MARK(0x800255AC);
ZZ_MARK(0x800255B0);
ZZ_MARK(0x800255B4);
ZZ_MARK_TARGET(0x800255B8,ZZ_24DE0_7D8);
ZZ_MARK(0x800255BC);
ZZ_MARK(0x800255C0);
ZZ_MARK(0x800255C4);
ZZ_MARK(0x800255C8);
ZZ_MARK(0x800255CC);
ZZ_MARK(0x800255D0);
ZZ_MARK_TARGET(0x800255D4,ZZ_24DE0_7F4);
ZZ_MARK(0x800255D8);
ZZ_MARK(0x800255DC);
ZZ_MARK_TARGET(0x800255E0,ZZ_24DE0_800);
ZZ_MARK(0x800255E4);
ZZ_MARK(0x800255E8);
ZZ_MARK(0x800255EC);
ZZ_MARK_TARGET(0x800255F0,ZZ_24DE0_810);
ZZ_MARK(0x800255F4);
ZZ_MARK(0x800255F8);
ZZ_MARK(0x800255FC);
ZZ_MARK(0x80025600);
ZZ_MARK(0x80025604);
ZZ_MARK(0x80025608);
ZZ_MARK(0x8002560C);
ZZ_MARK(0x80025610);
ZZ_MARK(0x80025614);
ZZ_MARK(0x80025618);
ZZ_MARK(0x8002561C);
ZZ_MARK(0x80025620);