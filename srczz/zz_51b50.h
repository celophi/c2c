#ifdef ZZ_INCLUDE_CODE
ZZ_51B50:
	SP -= 56;
	EMU_Write32(SP + 24,S0); //+ 0x18
	S0 = A0;
	EMU_Write32(SP + 40,S4); //+ 0x28
	S4 = R0;
	EMU_Write32(SP + 48,RA); //+ 0x30
	EMU_Write32(SP + 44,S5); //+ 0x2C
	EMU_Write32(SP + 36,S3); //+ 0x24
	EMU_Write32(SP + 32,S2); //+ 0x20
	EMU_Write32(SP + 28,S1); //+ 0x1C
	S1 = EMU_ReadU32(S0 + 4); //+ 0x4
	S5 = 0x80060000;
	S5 -= 5356;
	S2 = S1 < 1;
	ZZ_CLOCKCYCLES(14,0x80051B88);
ZZ_51B50_38:
	V0 = 1;
	V1 = EMU_ReadU32(S0);
	V0 <<= S4;
	V1 &= V0;
	if (!V1)
	{
		ZZ_CLOCKCYCLES(6,0x800520C4);
		goto ZZ_51B50_574;
	}
	if (S2)
	{
		S3 = S4 << 3;
		ZZ_CLOCKCYCLES(8,0x80051BB4);
		goto ZZ_51B50_64;
	}
	S3 = S4 << 3;
	V0 = S1 & 0x10;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(11,0x80051BCC);
		goto ZZ_51B50_7C;
	}
	ZZ_CLOCKCYCLES(11,0x80051BB4);
ZZ_51B50_64:
	V0 = S4 << 4;
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 5528); //+ 0xFFFFEA68
	A0 = EMU_ReadU16(S0 + 20); //+ 0x14
	V0 += V1;
	EMU_Write16(V0 + 4,A0); //+ 0x4
	ZZ_CLOCKCYCLES(6,0x80051BCC);
ZZ_51B50_7C:
	if (S2)
	{
		V0 = S1 & 0x40;
		ZZ_CLOCKCYCLES(2,0x80051BDC);
		goto ZZ_51B50_8C;
	}
	V0 = S1 & 0x40;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(4,0x80051BE8);
		goto ZZ_51B50_98;
	}
	ZZ_CLOCKCYCLES(4,0x80051BDC);
ZZ_51B50_8C:
	V0 = EMU_ReadU16(S0 + 24); //+ 0x18
	EMU_Write16(S5,V0);
	ZZ_CLOCKCYCLES(3,0x80051BE8);
ZZ_51B50_98:
	if (S2)
	{
		V0 = S1 & 0x20;
		ZZ_CLOCKCYCLES(2,0x80051BF8);
		goto ZZ_51B50_A8;
	}
	V0 = S1 & 0x20;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(4,0x80051C28);
		goto ZZ_51B50_D8;
	}
	ZZ_CLOCKCYCLES(4,0x80051BF8);
ZZ_51B50_A8:
	A1 = EMU_ReadU16(S5);
	A3 = EMU_ReadU16(S0 + 22); //+ 0x16
	A0 = A1 >> 8;
	A1 &= 0xFF;
	A2 = A3 >> 8;
	RA = 0x80051C14; //ZZ_51B50_C4
	A3 &= 0xFF;
	ZZ_CLOCKCYCLES(7,0x800521DC);
	goto ZZ_521DC;
ZZ_51B50_C4:
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 - 5528); //+ 0xFFFFEA68
	V1 = S3 << 1;
	V1 += A0;
	EMU_Write16(V1 + 4,V0); //+ 0x4
	ZZ_CLOCKCYCLES(5,0x80051C28);
ZZ_51B50_D8:
	if (S2)
	{
		V0 = S1 & 0x1;
		ZZ_CLOCKCYCLES(2,0x80051C38);
		goto ZZ_51B50_E8;
	}
	V0 = S1 & 0x1;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(4,0x80051D08);
		goto ZZ_51B50_1B8;
	}
	ZZ_CLOCKCYCLES(4,0x80051C38);
ZZ_51B50_E8:
	V0 = EMU_ReadU16(S0 + 8); //+ 0x8
	A0 = R0;
	if (S2)
	{
		A1 = V0 & 0x7FFF;
		ZZ_CLOCKCYCLES(4,0x80051C54);
		goto ZZ_51B50_104;
	}
	A1 = V0 & 0x7FFF;
	V0 = S1 & 0x4;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(7,0x80051CC0);
		goto ZZ_51B50_170;
	}
	ZZ_CLOCKCYCLES(7,0x80051C54);
ZZ_51B50_104:
	V0 = EMU_ReadU16(S0 + 12); //+ 0xC
	V0 -= 1;
	V0 <<= 16;
	V1 = (int32_t)V0 >> 16;
	V0 = V1 < 7;
	if (!V0)
	{
		V0 = V1 << 2;
		ZZ_CLOCKCYCLES(8,0x80051CC0);
		goto ZZ_51B50_170;
	}
	V0 = V1 << 2;
	AT = 0x80010000;
	AT += V0;
	V0 = EMU_ReadU32(AT + 4380); //+ 0x111C
	ZZ_JUMPREGISTER_BEGIN(V0);
	ZZ_CLOCKCYCLES_JR(14);
	ZZ_JUMPREGISTER(0x80051C8C,ZZ_51B50_13C);
	ZZ_JUMPREGISTER(0x80051C94,ZZ_51B50_144);
	ZZ_JUMPREGISTER(0x80051C9C,ZZ_51B50_14C);
	ZZ_JUMPREGISTER(0x80051CA4,ZZ_51B50_154);
	ZZ_JUMPREGISTER(0x80051CAC,ZZ_51B50_15C);
	ZZ_JUMPREGISTER(0x80051CB4,ZZ_51B50_164);
	ZZ_JUMPREGISTER(0x80051CBC,ZZ_51B50_16C);
	ZZ_JUMPREGISTER_END();
ZZ_51B50_13C:
	A0 = 0x8000;
	ZZ_CLOCKCYCLES(2,0x80051CC0);
	goto ZZ_51B50_170;
ZZ_51B50_144:
	A0 = 0x9000;
	ZZ_CLOCKCYCLES(2,0x80051CC0);
	goto ZZ_51B50_170;
ZZ_51B50_14C:
	A0 = 0xA000;
	ZZ_CLOCKCYCLES(2,0x80051CC0);
	goto ZZ_51B50_170;
ZZ_51B50_154:
	A0 = 0xB000;
	ZZ_CLOCKCYCLES(2,0x80051CC0);
	goto ZZ_51B50_170;
ZZ_51B50_15C:
	A0 = 0xC000;
	ZZ_CLOCKCYCLES(2,0x80051CC0);
	goto ZZ_51B50_170;
ZZ_51B50_164:
	A0 = 0xD000;
	ZZ_CLOCKCYCLES(2,0x80051CC0);
	goto ZZ_51B50_170;
ZZ_51B50_16C:
	A0 = 0xE000;
	ZZ_CLOCKCYCLES(1,0x80051CC0);
ZZ_51B50_170:
	if (!A0)
	{
		ZZ_CLOCKCYCLES(2,0x80051CF0);
		goto ZZ_51B50_1A0;
	}
	V1 = EMU_ReadS16(S0 + 8); //+ 0x8
	V0 = (int32_t)V1 < 128;
	if (V0)
	{
		ZZ_CLOCKCYCLES(7,0x80051CE4);
		goto ZZ_51B50_194;
	}
	A1 = 127;
	ZZ_CLOCKCYCLES(9,0x80051CF0);
	goto ZZ_51B50_1A0;
ZZ_51B50_194:
	if ((int32_t)V1 >= 0)
	{
		ZZ_CLOCKCYCLES(2,0x80051CF0);
		goto ZZ_51B50_1A0;
	}
	A1 = R0;
	ZZ_CLOCKCYCLES(3,0x80051CF0);
ZZ_51B50_1A0:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 5528); //+ 0xFFFFEA68
	V1 = S3 << 1;
	V1 += V0;
	V0 = A1 | A0;
	EMU_Write16(V1,V0);
	ZZ_CLOCKCYCLES(6,0x80051D08);
ZZ_51B50_1B8:
	if (S2)
	{
		V0 = S1 & 0x2;
		ZZ_CLOCKCYCLES(2,0x80051D18);
		goto ZZ_51B50_1C8;
	}
	V0 = S1 & 0x2;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(4,0x80051DE8);
		goto ZZ_51B50_298;
	}
	ZZ_CLOCKCYCLES(4,0x80051D18);
ZZ_51B50_1C8:
	V0 = EMU_ReadU16(S0 + 10); //+ 0xA
	A0 = R0;
	if (S2)
	{
		A1 = V0 & 0x7FFF;
		ZZ_CLOCKCYCLES(4,0x80051D34);
		goto ZZ_51B50_1E4;
	}
	A1 = V0 & 0x7FFF;
	V0 = S1 & 0x8;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(7,0x80051DA0);
		goto ZZ_51B50_250;
	}
	ZZ_CLOCKCYCLES(7,0x80051D34);
ZZ_51B50_1E4:
	V0 = EMU_ReadU16(S0 + 14); //+ 0xE
	V0 -= 1;
	V0 <<= 16;
	V1 = (int32_t)V0 >> 16;
	V0 = V1 < 7;
	if (!V0)
	{
		V0 = V1 << 2;
		ZZ_CLOCKCYCLES(8,0x80051DA0);
		goto ZZ_51B50_250;
	}
	V0 = V1 << 2;
	AT = 0x80010000;
	AT += V0;
	V0 = EMU_ReadU32(AT + 4412); //+ 0x113C
	ZZ_JUMPREGISTER_BEGIN(V0);
	ZZ_CLOCKCYCLES_JR(14);
	ZZ_JUMPREGISTER(0x80051D6C,ZZ_51B50_21C);
	ZZ_JUMPREGISTER(0x80051D74,ZZ_51B50_224);
	ZZ_JUMPREGISTER(0x80051D7C,ZZ_51B50_22C);
	ZZ_JUMPREGISTER(0x80051D84,ZZ_51B50_234);
	ZZ_JUMPREGISTER(0x80051D8C,ZZ_51B50_23C);
	ZZ_JUMPREGISTER(0x80051D94,ZZ_51B50_244);
	ZZ_JUMPREGISTER(0x80051D9C,ZZ_51B50_24C);
	ZZ_JUMPREGISTER_END();
ZZ_51B50_21C:
	A0 = 0x8000;
	ZZ_CLOCKCYCLES(2,0x80051DA0);
	goto ZZ_51B50_250;
ZZ_51B50_224:
	A0 = 0x9000;
	ZZ_CLOCKCYCLES(2,0x80051DA0);
	goto ZZ_51B50_250;
ZZ_51B50_22C:
	A0 = 0xA000;
	ZZ_CLOCKCYCLES(2,0x80051DA0);
	goto ZZ_51B50_250;
ZZ_51B50_234:
	A0 = 0xB000;
	ZZ_CLOCKCYCLES(2,0x80051DA0);
	goto ZZ_51B50_250;
ZZ_51B50_23C:
	A0 = 0xC000;
	ZZ_CLOCKCYCLES(2,0x80051DA0);
	goto ZZ_51B50_250;
ZZ_51B50_244:
	A0 = 0xD000;
	ZZ_CLOCKCYCLES(2,0x80051DA0);
	goto ZZ_51B50_250;
ZZ_51B50_24C:
	A0 = 0xE000;
	ZZ_CLOCKCYCLES(1,0x80051DA0);
ZZ_51B50_250:
	if (!A0)
	{
		ZZ_CLOCKCYCLES(2,0x80051DD0);
		goto ZZ_51B50_280;
	}
	V1 = EMU_ReadS16(S0 + 10); //+ 0xA
	V0 = (int32_t)V1 < 128;
	if (V0)
	{
		ZZ_CLOCKCYCLES(7,0x80051DC4);
		goto ZZ_51B50_274;
	}
	A1 = 127;
	ZZ_CLOCKCYCLES(9,0x80051DD0);
	goto ZZ_51B50_280;
ZZ_51B50_274:
	if ((int32_t)V1 >= 0)
	{
		ZZ_CLOCKCYCLES(2,0x80051DD0);
		goto ZZ_51B50_280;
	}
	A1 = R0;
	ZZ_CLOCKCYCLES(3,0x80051DD0);
ZZ_51B50_280:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 5528); //+ 0xFFFFEA68
	V1 = S3 << 1;
	V1 += V0;
	V0 = A1 | A0;
	EMU_Write16(V1 + 2,V0); //+ 0x2
	ZZ_CLOCKCYCLES(6,0x80051DE8);
ZZ_51B50_298:
	if (S2)
	{
		V0 = S1 & 0x80;
		ZZ_CLOCKCYCLES(2,0x80051DF8);
		goto ZZ_51B50_2A8;
	}
	V0 = S1 & 0x80;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(4,0x80051E04);
		goto ZZ_51B50_2B4;
	}
	ZZ_CLOCKCYCLES(4,0x80051DF8);
ZZ_51B50_2A8:
	A1 = EMU_ReadU32(S0 + 28); //+ 0x1C
	RA = 0x80051E04; //ZZ_51B50_2B4
	A0 = S3 | 0x3;
	ZZ_CLOCKCYCLES(3,0x8004FEE0);
	goto ZZ_4FEE0;
ZZ_51B50_2B4:
	if (S2)
	{
		V0 = 0x10000;
		ZZ_CLOCKCYCLES(2,0x80051E18);
		goto ZZ_51B50_2C8;
	}
	V0 = 0x10000;
	V0 &= S1;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(5,0x80051E24);
		goto ZZ_51B50_2D4;
	}
	ZZ_CLOCKCYCLES(5,0x80051E18);
ZZ_51B50_2C8:
	A1 = EMU_ReadU32(S0 + 32); //+ 0x20
	RA = 0x80051E24; //ZZ_51B50_2D4
	A0 = S3 | 0x7;
	ZZ_CLOCKCYCLES(3,0x8004FEE0);
	goto ZZ_4FEE0;
ZZ_51B50_2D4:
	if (S2)
	{
		V0 = S3 << 1;
		ZZ_CLOCKCYCLES(2,0x80051E3C);
		goto ZZ_51B50_2EC;
	}
	V0 = S3 << 1;
	V0 = 0x20000;
	V0 &= S1;
	if (!V0)
	{
		V0 = S3 << 1;
		ZZ_CLOCKCYCLES(6,0x80051E50);
		goto ZZ_51B50_300;
	}
	V0 = S3 << 1;
	ZZ_CLOCKCYCLES(6,0x80051E3C);
ZZ_51B50_2EC:
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 5528); //+ 0xFFFFEA68
	A0 = EMU_ReadU16(S0 + 58); //+ 0x3A
	V0 += V1;
	EMU_Write16(V0 + 8,A0); //+ 0x8
	ZZ_CLOCKCYCLES(5,0x80051E50);
ZZ_51B50_300:
	if (S2)
	{
		V0 = S3 << 1;
		ZZ_CLOCKCYCLES(2,0x80051E68);
		goto ZZ_51B50_318;
	}
	V0 = S3 << 1;
	V0 = 0x40000;
	V0 &= S1;
	if (!V0)
	{
		V0 = S3 << 1;
		ZZ_CLOCKCYCLES(6,0x80051E7C);
		goto ZZ_51B50_32C;
	}
	V0 = S3 << 1;
	ZZ_CLOCKCYCLES(6,0x80051E68);
ZZ_51B50_318:
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 5528); //+ 0xFFFFEA68
	A0 = EMU_ReadU16(S0 + 60); //+ 0x3C
	V0 += V1;
	EMU_Write16(V0 + 10,A0); //+ 0xA
	ZZ_CLOCKCYCLES(5,0x80051E7C);
ZZ_51B50_32C:
	if (S2)
	{
		V0 = S1 & 0x800;
		ZZ_CLOCKCYCLES(2,0x80051E8C);
		goto ZZ_51B50_33C;
	}
	V0 = S1 & 0x800;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(4,0x80051EF8);
		goto ZZ_51B50_3A8;
	}
	ZZ_CLOCKCYCLES(4,0x80051E8C);
ZZ_51B50_33C:
	A1 = EMU_ReadU16(S0 + 48); //+ 0x30
	V0 = A1 < 128;
	if (V0)
	{
		ZZ_CLOCKCYCLES(5,0x80051EA4);
		goto ZZ_51B50_354;
	}
	A1 = 127;
	ZZ_CLOCKCYCLES(6,0x80051EA4);
ZZ_51B50_354:
	if (S2)
	{
		A2 = R0;
		ZZ_CLOCKCYCLES(2,0x80051EB8);
		goto ZZ_51B50_368;
	}
	A2 = R0;
	V0 = S1 & 0x100;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(5,0x80051ECC);
		goto ZZ_51B50_37C;
	}
	ZZ_CLOCKCYCLES(5,0x80051EB8);
ZZ_51B50_368:
	V1 = EMU_ReadU32(S0 + 36); //+ 0x24
	V0 = 5;
	if (V1 != V0)
	{
		ZZ_CLOCKCYCLES(4,0x80051ECC);
		goto ZZ_51B50_37C;
	}
	A2 = 128;
	ZZ_CLOCKCYCLES(5,0x80051ECC);
ZZ_51B50_37C:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 5528); //+ 0xFFFFEA68
	A0 = S3 << 1;
	A0 += V0;
	V0 = EMU_ReadU16(A0 + 8); //+ 0x8
	V1 = V0 & 0xFF;
	V0 = A1 | A2;
	V0 <<= 8;
	V1 |= V0;
	EMU_Write16(A0 + 8,V1); //+ 0x8
	ZZ_CLOCKCYCLES(11,0x80051EF8);
ZZ_51B50_3A8:
	if (S2)
	{
		V0 = S1 & 0x1000;
		ZZ_CLOCKCYCLES(2,0x80051F08);
		goto ZZ_51B50_3B8;
	}
	V0 = S1 & 0x1000;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(4,0x80051F44);
		goto ZZ_51B50_3F4;
	}
	ZZ_CLOCKCYCLES(4,0x80051F08);
ZZ_51B50_3B8:
	A1 = EMU_ReadU16(S0 + 50); //+ 0x32
	V0 = A1 < 16;
	if (V0)
	{
		ZZ_CLOCKCYCLES(5,0x80051F20);
		goto ZZ_51B50_3D0;
	}
	A1 = 15;
	ZZ_CLOCKCYCLES(6,0x80051F20);
ZZ_51B50_3D0:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 5528); //+ 0xFFFFEA68
	A0 = S3 << 1;
	A0 += V0;
	V0 = EMU_ReadU16(A0 + 8); //+ 0x8
	V1 = A1 << 4;
	V0 &= 0xFF0F;
	V0 |= V1;
	EMU_Write16(A0 + 8,V0); //+ 0x8
	ZZ_CLOCKCYCLES(9,0x80051F44);
ZZ_51B50_3F4:
	if (S2)
	{
		V0 = S1 & 0x2000;
		ZZ_CLOCKCYCLES(2,0x80051F54);
		goto ZZ_51B50_404;
	}
	V0 = S1 & 0x2000;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(4,0x80051FFC);
		goto ZZ_51B50_4AC;
	}
	ZZ_CLOCKCYCLES(4,0x80051F54);
ZZ_51B50_404:
	A1 = EMU_ReadU16(S0 + 52); //+ 0x34
	V0 = A1 < 128;
	if (V0)
	{
		ZZ_CLOCKCYCLES(5,0x80051F6C);
		goto ZZ_51B50_41C;
	}
	A1 = 127;
	ZZ_CLOCKCYCLES(6,0x80051F6C);
ZZ_51B50_41C:
	if (S2)
	{
		A2 = 256;
		ZZ_CLOCKCYCLES(2,0x80051F80);
		goto ZZ_51B50_430;
	}
	A2 = 256;
	V0 = S1 & 0x200;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(5,0x80051FD0);
		goto ZZ_51B50_480;
	}
	ZZ_CLOCKCYCLES(5,0x80051F80);
ZZ_51B50_430:
	V1 = EMU_ReadU32(S0 + 40); //+ 0x28
	V0 = 5;
	if (V1 == V0)
	{
		V0 = (int32_t)V1 < 6;
		ZZ_CLOCKCYCLES(4,0x80051FC4);
		goto ZZ_51B50_474;
	}
	V0 = (int32_t)V1 < 6;
	if (!V0)
	{
		V0 = 1;
		ZZ_CLOCKCYCLES(6,0x80051FA8);
		goto ZZ_51B50_458;
	}
	V0 = 1;
	if (V1 == V0)
	{
		ZZ_CLOCKCYCLES(8,0x80051FBC);
		goto ZZ_51B50_46C;
	}
	ZZ_CLOCKCYCLES(10,0x80051FD0);
	goto ZZ_51B50_480;
ZZ_51B50_458:
	V0 = 7;
	if (V1 == V0)
	{
		ZZ_CLOCKCYCLES(3,0x80051FCC);
		goto ZZ_51B50_47C;
	}
	ZZ_CLOCKCYCLES(5,0x80051FD0);
	goto ZZ_51B50_480;
ZZ_51B50_46C:
	A2 = R0;
	ZZ_CLOCKCYCLES(2,0x80051FD0);
	goto ZZ_51B50_480;
ZZ_51B50_474:
	A2 = 512;
	ZZ_CLOCKCYCLES(2,0x80051FD0);
	goto ZZ_51B50_480;
ZZ_51B50_47C:
	A2 = 768;
	ZZ_CLOCKCYCLES(1,0x80051FD0);
ZZ_51B50_480:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 5528); //+ 0xFFFFEA68
	A0 = S3 << 1;
	A0 += V0;
	V0 = EMU_ReadU16(A0 + 10); //+ 0xA
	V1 = V0 & 0x3F;
	V0 = A1 | A2;
	V0 <<= 6;
	V1 |= V0;
	EMU_Write16(A0 + 10,V1); //+ 0xA
	ZZ_CLOCKCYCLES(11,0x80051FFC);
ZZ_51B50_4AC:
	if (S2)
	{
		V0 = S1 & 0x4000;
		ZZ_CLOCKCYCLES(2,0x8005200C);
		goto ZZ_51B50_4BC;
	}
	V0 = S1 & 0x4000;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(4,0x80052078);
		goto ZZ_51B50_528;
	}
	ZZ_CLOCKCYCLES(4,0x8005200C);
ZZ_51B50_4BC:
	A1 = EMU_ReadU16(S0 + 54); //+ 0x36
	V0 = A1 < 32;
	if (V0)
	{
		ZZ_CLOCKCYCLES(5,0x80052024);
		goto ZZ_51B50_4D4;
	}
	A1 = 31;
	ZZ_CLOCKCYCLES(6,0x80052024);
ZZ_51B50_4D4:
	if (S2)
	{
		A2 = R0;
		ZZ_CLOCKCYCLES(2,0x80052038);
		goto ZZ_51B50_4E8;
	}
	A2 = R0;
	V0 = S1 & 0x400;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(5,0x80052054);
		goto ZZ_51B50_504;
	}
	ZZ_CLOCKCYCLES(5,0x80052038);
ZZ_51B50_4E8:
	V1 = EMU_ReadU32(S0 + 44); //+ 0x2C
	V0 = 3;
	if (V1 == V0)
	{
		V0 = 7;
		ZZ_CLOCKCYCLES(4,0x80052054);
		goto ZZ_51B50_504;
	}
	V0 = 7;
	if (V1 != V0)
	{
		ZZ_CLOCKCYCLES(6,0x80052054);
		goto ZZ_51B50_504;
	}
	A2 = 32;
	ZZ_CLOCKCYCLES(7,0x80052054);
ZZ_51B50_504:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 5528); //+ 0xFFFFEA68
	A0 = S3 << 1;
	A0 += V0;
	V0 = EMU_ReadU16(A0 + 10); //+ 0xA
	V1 = A1 | A2;
	V0 &= 0xFFC0;
	V0 |= V1;
	EMU_Write16(A0 + 10,V0); //+ 0xA
	ZZ_CLOCKCYCLES(9,0x80052078);
ZZ_51B50_528:
	if (S2)
	{
		V0 = S1 & 0x8000;
		ZZ_CLOCKCYCLES(2,0x80052088);
		goto ZZ_51B50_538;
	}
	V0 = S1 & 0x8000;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(4,0x800520C4);
		goto ZZ_51B50_574;
	}
	ZZ_CLOCKCYCLES(4,0x80052088);
ZZ_51B50_538:
	A1 = EMU_ReadU16(S0 + 56); //+ 0x38
	V0 = A1 < 16;
	if (V0)
	{
		ZZ_CLOCKCYCLES(5,0x800520A0);
		goto ZZ_51B50_550;
	}
	A1 = 15;
	ZZ_CLOCKCYCLES(6,0x800520A0);
ZZ_51B50_550:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 5528); //+ 0xFFFFEA68
	V1 = S3 << 1;
	V1 += V0;
	V0 = EMU_ReadU16(V1 + 8); //+ 0x8
	V0 &= 0xFFF0;
	V0 |= A1;
	EMU_Write16(V1 + 8,V0); //+ 0x8
	ZZ_CLOCKCYCLES(9,0x800520C4);
ZZ_51B50_574:
	S4 += 1;
	V0 = (int32_t)S4 < 24;
	if (V0)
	{
		S5 += 2;
		ZZ_CLOCKCYCLES(4,0x80051B88);
		goto ZZ_51B50_38;
	}
	S5 += 2;
	V0 = 1;
	EMU_Write32(SP + 20,V0); //+ 0x14
	EMU_Write32(SP + 16,R0); //+ 0x10
	ZZ_CLOCKCYCLES(8,0x80052110);
	goto ZZ_51B50_5C0;
ZZ_51B50_594:
	V1 = EMU_ReadU32(SP + 20); //+ 0x14
	V0 = V1 << 1;
	V0 += V1;
	V0 <<= 2;
	V0 += V1;
	EMU_Write32(SP + 20,V0); //+ 0x14
	V0 = EMU_ReadU32(SP + 16); //+ 0x10
	V0 += 1;
	EMU_Write32(SP + 16,V0); //+ 0x10
	ZZ_CLOCKCYCLES(11,0x80052110);
ZZ_51B50_5C0:
	V0 = EMU_ReadU32(SP + 16); //+ 0x10
	V0 = (int32_t)V0 < 2;
	if (V0)
	{
		ZZ_CLOCKCYCLES(5,0x800520E4);
		goto ZZ_51B50_594;
	}
	RA = EMU_ReadU32(SP + 48); //+ 0x30
	S5 = EMU_ReadU32(SP + 44); //+ 0x2C
	S4 = EMU_ReadU32(SP + 40); //+ 0x28
	S3 = EMU_ReadU32(SP + 36); //+ 0x24
	S2 = EMU_ReadU32(SP + 32); //+ 0x20
	S1 = EMU_ReadU32(SP + 28); //+ 0x1C
	S0 = EMU_ReadU32(SP + 24); //+ 0x18
	ZZ_JUMPREGISTER_BEGIN(RA);
	SP += 56;
	ZZ_CLOCKCYCLES_JR(14);
	ZZ_JUMPREGISTER(0x8003370C,ZZ_3322C_4E0);
	ZZ_JUMPREGISTER(0x800331A8,ZZ_32E88_320);
	ZZ_JUMPREGISTER(0x800579B8,ZZ_5774C_26C);
	ZZ_JUMPREGISTER(0x80033BBC,ZZ_337BC_400);
	ZZ_JUMPREGISTER(0x80057628,ZZ_572C0_368);
	ZZ_JUMPREGISTER(0x80033F28,ZZ_337BC_76C);
	ZZ_JUMPREGISTER(0x80033CF0,ZZ_337BC_534);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80051B50,0x80051B88,ZZ_51B50);
ZZ_MARK_TARGET(0x80051B88,0x80051BB4,ZZ_51B50_38);
ZZ_MARK_TARGET(0x80051BB4,0x80051BCC,ZZ_51B50_64);
ZZ_MARK_TARGET(0x80051BCC,0x80051BDC,ZZ_51B50_7C);
ZZ_MARK_TARGET(0x80051BDC,0x80051BE8,ZZ_51B50_8C);
ZZ_MARK_TARGET(0x80051BE8,0x80051BF8,ZZ_51B50_98);
ZZ_MARK_TARGET(0x80051BF8,0x80051C14,ZZ_51B50_A8);
ZZ_MARK_TARGET(0x80051C14,0x80051C28,ZZ_51B50_C4);
ZZ_MARK_TARGET(0x80051C28,0x80051C38,ZZ_51B50_D8);
ZZ_MARK_TARGET(0x80051C38,0x80051C54,ZZ_51B50_E8);
ZZ_MARK_TARGET(0x80051C54,0x80051C8C,ZZ_51B50_104);
ZZ_MARK_TARGET(0x80051C8C,0x80051C94,ZZ_51B50_13C);
ZZ_MARK_TARGET(0x80051C94,0x80051C9C,ZZ_51B50_144);
ZZ_MARK_TARGET(0x80051C9C,0x80051CA4,ZZ_51B50_14C);
ZZ_MARK_TARGET(0x80051CA4,0x80051CAC,ZZ_51B50_154);
ZZ_MARK_TARGET(0x80051CAC,0x80051CB4,ZZ_51B50_15C);
ZZ_MARK_TARGET(0x80051CB4,0x80051CBC,ZZ_51B50_164);
ZZ_MARK_TARGET(0x80051CBC,0x80051CC0,ZZ_51B50_16C);
ZZ_MARK_TARGET(0x80051CC0,0x80051CE4,ZZ_51B50_170);
ZZ_MARK_TARGET(0x80051CE4,0x80051CF0,ZZ_51B50_194);
ZZ_MARK_TARGET(0x80051CF0,0x80051D08,ZZ_51B50_1A0);
ZZ_MARK_TARGET(0x80051D08,0x80051D18,ZZ_51B50_1B8);
ZZ_MARK_TARGET(0x80051D18,0x80051D34,ZZ_51B50_1C8);
ZZ_MARK_TARGET(0x80051D34,0x80051D6C,ZZ_51B50_1E4);
ZZ_MARK_TARGET(0x80051D6C,0x80051D74,ZZ_51B50_21C);
ZZ_MARK_TARGET(0x80051D74,0x80051D7C,ZZ_51B50_224);
ZZ_MARK_TARGET(0x80051D7C,0x80051D84,ZZ_51B50_22C);
ZZ_MARK_TARGET(0x80051D84,0x80051D8C,ZZ_51B50_234);
ZZ_MARK_TARGET(0x80051D8C,0x80051D94,ZZ_51B50_23C);
ZZ_MARK_TARGET(0x80051D94,0x80051D9C,ZZ_51B50_244);
ZZ_MARK_TARGET(0x80051D9C,0x80051DA0,ZZ_51B50_24C);
ZZ_MARK_TARGET(0x80051DA0,0x80051DC4,ZZ_51B50_250);
ZZ_MARK_TARGET(0x80051DC4,0x80051DD0,ZZ_51B50_274);
ZZ_MARK_TARGET(0x80051DD0,0x80051DE8,ZZ_51B50_280);
ZZ_MARK_TARGET(0x80051DE8,0x80051DF8,ZZ_51B50_298);
ZZ_MARK_TARGET(0x80051DF8,0x80051E04,ZZ_51B50_2A8);
ZZ_MARK_TARGET(0x80051E04,0x80051E18,ZZ_51B50_2B4);
ZZ_MARK_TARGET(0x80051E18,0x80051E24,ZZ_51B50_2C8);
ZZ_MARK_TARGET(0x80051E24,0x80051E3C,ZZ_51B50_2D4);
ZZ_MARK_TARGET(0x80051E3C,0x80051E50,ZZ_51B50_2EC);
ZZ_MARK_TARGET(0x80051E50,0x80051E68,ZZ_51B50_300);
ZZ_MARK_TARGET(0x80051E68,0x80051E7C,ZZ_51B50_318);
ZZ_MARK_TARGET(0x80051E7C,0x80051E8C,ZZ_51B50_32C);
ZZ_MARK_TARGET(0x80051E8C,0x80051EA4,ZZ_51B50_33C);
ZZ_MARK_TARGET(0x80051EA4,0x80051EB8,ZZ_51B50_354);
ZZ_MARK_TARGET(0x80051EB8,0x80051ECC,ZZ_51B50_368);
ZZ_MARK_TARGET(0x80051ECC,0x80051EF8,ZZ_51B50_37C);
ZZ_MARK_TARGET(0x80051EF8,0x80051F08,ZZ_51B50_3A8);
ZZ_MARK_TARGET(0x80051F08,0x80051F20,ZZ_51B50_3B8);
ZZ_MARK_TARGET(0x80051F20,0x80051F44,ZZ_51B50_3D0);
ZZ_MARK_TARGET(0x80051F44,0x80051F54,ZZ_51B50_3F4);
ZZ_MARK_TARGET(0x80051F54,0x80051F6C,ZZ_51B50_404);
ZZ_MARK_TARGET(0x80051F6C,0x80051F80,ZZ_51B50_41C);
ZZ_MARK_TARGET(0x80051F80,0x80051FA8,ZZ_51B50_430);
ZZ_MARK_TARGET(0x80051FA8,0x80051FBC,ZZ_51B50_458);
ZZ_MARK_TARGET(0x80051FBC,0x80051FC4,ZZ_51B50_46C);
ZZ_MARK_TARGET(0x80051FC4,0x80051FCC,ZZ_51B50_474);
ZZ_MARK_TARGET(0x80051FCC,0x80051FD0,ZZ_51B50_47C);
ZZ_MARK_TARGET(0x80051FD0,0x80051FFC,ZZ_51B50_480);
ZZ_MARK_TARGET(0x80051FFC,0x8005200C,ZZ_51B50_4AC);
ZZ_MARK_TARGET(0x8005200C,0x80052024,ZZ_51B50_4BC);
ZZ_MARK_TARGET(0x80052024,0x80052038,ZZ_51B50_4D4);
ZZ_MARK_TARGET(0x80052038,0x80052054,ZZ_51B50_4E8);
ZZ_MARK_TARGET(0x80052054,0x80052078,ZZ_51B50_504);
ZZ_MARK_TARGET(0x80052078,0x80052088,ZZ_51B50_528);
ZZ_MARK_TARGET(0x80052088,0x800520A0,ZZ_51B50_538);
ZZ_MARK_TARGET(0x800520A0,0x800520C4,ZZ_51B50_550);
ZZ_MARK_TARGET(0x800520C4,0x800520E4,ZZ_51B50_574);
ZZ_MARK_TARGET(0x800520E4,0x80052110,ZZ_51B50_594);
ZZ_MARK_TARGET(0x80052110,0x80052148,ZZ_51B50_5C0);
