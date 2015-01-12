#ifdef ZZ_INCLUDE_CODE
ZZ_4CBA8:
	V0 = 0x80060000;
	V0 = EMU_ReadU8(V0 - 8266); //+ 0xFFFFDFB6
	SP -= 40;
	EMU_Write32(SP + 16,S0); //+ 0x10
	S0 = A0;
	EMU_Write32(SP + 28,S3); //+ 0x1C
	S3 = 0x8000000;
	EMU_Write32(SP + 32,RA); //+ 0x20
	EMU_Write32(SP + 24,S2); //+ 0x18
	V0 = V0 < 2;
	if (V0)
	{
		EMU_Write32(SP + 20,S1); //+ 0x14
		ZZ_CLOCKCYCLES(12,0x8004CBF4);
		goto ZZ_4CBA8_4C;
	}
	EMU_Write32(SP + 20,S1); //+ 0x14
	A0 = 0x80010000;
	A0 += 4136;
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 8272); //+ 0xFFFFDFB0
	ZZ_JUMPREGISTER_BEGIN(V0);
	RA = 0x8004CBF4; //ZZ_4CBA8_4C
	A1 = S0;
	ZZ_CLOCKCYCLES_JR(19);
	// UNIMPLEMENTED JUMP-TO-REGISTER-AND-LINK (V0,8004CBEC)
	ZZ_JUMPREGISTER_END();
ZZ_4CBA8_4C:
	V0 = 0x80060000;
	V0 = EMU_ReadU8(V0 - 8268); //+ 0xFFFFDFB4
	V0 -= 1;
	V0 = V0 < 2;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(7,0x8004CC34);
		goto ZZ_4CBA8_8C;
	}
	RA = 0x8004CC18; //ZZ_4CBA8_70
	A0 = S0;
	ZZ_CLOCKCYCLES(9,0x8004D9A0);
	goto ZZ_4D9A0;
ZZ_4CBA8_70:
	V1 = EMU_ReadU16(S0 + 2); //+ 0x2
	V0 &= 0xFFF;
	V1 &= 0xFFF;
	V1 <<= 12;
	V1 |= V0;
	V0 = 0x5000000;
	ZZ_CLOCKCYCLES(7,0x8004CC50);
	goto ZZ_4CBA8_A8;
ZZ_4CBA8_8C:
	V0 = EMU_ReadU16(S0 + 2); //+ 0x2
	V1 = EMU_ReadU16(S0);
	V0 &= 0x3FF;
	V0 <<= 10;
	V1 &= 0x3FF;
	V0 |= V1;
	V1 = 0x5000000;
	ZZ_CLOCKCYCLES(7,0x8004CC50);
ZZ_4CBA8_A8:
	A0 = V0 | V1;
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 8276); //+ 0xFFFFDFAC
	V0 = EMU_ReadU32(V0 + 16); //+ 0x10
	ZZ_JUMPREGISTER_BEGIN(V0);
	RA = 0x8004CC70; //ZZ_4CBA8_C8
	ZZ_CLOCKCYCLES_JR(8);
	// UNIMPLEMENTED JUMP-TO-REGISTER-AND-LINK (V0,8004CC68)
	ZZ_JUMPREGISTER_END();
ZZ_4CBA8_C8:
	V0 = 0x80060000;
	V0 -= 8152;
	V0 = EMU_ReadU16(V0);
	V1 = EMU_ReadS16(S0 + 8); //+ 0x8
	V0 <<= 16;
	V0 = (int32_t)V0 >> 16;
	if (V0 != V1)
	{
		ZZ_CLOCKCYCLES(8,0x8004CCE4);
		goto ZZ_4CBA8_13C;
	}
	V0 = 0x80060000;
	V0 = EMU_ReadU16(V0 - 8150); //+ 0xFFFFE02A
	V1 = EMU_ReadS16(S0 + 10); //+ 0xA
	V0 <<= 16;
	V0 = (int32_t)V0 >> 16;
	if (V0 != V1)
	{
		ZZ_CLOCKCYCLES(15,0x8004CCE4);
		goto ZZ_4CBA8_13C;
	}
	V0 = 0x80060000;
	V0 = EMU_ReadU16(V0 - 8148); //+ 0xFFFFE02C
	V1 = EMU_ReadS16(S0 + 12); //+ 0xC
	V0 <<= 16;
	V0 = (int32_t)V0 >> 16;
	if (V0 != V1)
	{
		ZZ_CLOCKCYCLES(22,0x8004CCE4);
		goto ZZ_4CBA8_13C;
	}
	V0 = 0x80060000;
	V0 = EMU_ReadU16(V0 - 8146); //+ 0xFFFFE02E
	V1 = EMU_ReadS16(S0 + 14); //+ 0xE
	V0 <<= 16;
	V0 = (int32_t)V0 >> 16;
	if (V0 == V1)
	{
		ZZ_CLOCKCYCLES(29,0x8004CEAC);
		goto ZZ_4CBA8_304;
	}
	ZZ_CLOCKCYCLES(29,0x8004CCE4);
ZZ_4CBA8_13C:
	RA = 0x8004CCEC; //ZZ_4CBA8_144
	ZZ_CLOCKCYCLES(2,0x8004B468);
	goto ZZ_4B468;
ZZ_4CBA8_144:
	A0 = EMU_ReadS16(S0 + 8); //+ 0x8
	EMU_Write8(S0 + 18,V0); //+ 0x12
	V0 &= 0xFF;
	V1 = A0 << 2;
	V1 += A0;
	V1 <<= 1;
	A0 = EMU_ReadS16(S0 + 10); //+ 0xA
	if (!V0)
	{
		V1 += 608;
		ZZ_CLOCKCYCLES(9,0x8004CD18);
		goto ZZ_4CBA8_170;
	}
	V1 += 608;
	S1 = A0 + 19;
	ZZ_CLOCKCYCLES(11,0x8004CD1C);
	goto ZZ_4CBA8_174;
ZZ_4CBA8_170:
	S1 = A0 + 16;
	ZZ_CLOCKCYCLES(1,0x8004CD1C);
ZZ_4CBA8_174:
	A1 = EMU_ReadS16(S0 + 12); //+ 0xC
	if (!A1)
	{
		V0 = A1 << 2;
		ZZ_CLOCKCYCLES(4,0x8004CD3C);
		goto ZZ_4CBA8_194;
	}
	V0 = A1 << 2;
	V0 += A1;
	V0 <<= 1;
	A2 = V1 + V0;
	ZZ_CLOCKCYCLES(8,0x8004CD40);
	goto ZZ_4CBA8_198;
ZZ_4CBA8_194:
	A2 = V1 + 2560;
	ZZ_CLOCKCYCLES(1,0x8004CD40);
ZZ_4CBA8_198:
	V0 = EMU_ReadS16(S0 + 14); //+ 0xE
	if (V0)
	{
		S2 = S1 + V0;
		ZZ_CLOCKCYCLES(4,0x8004CD54);
		goto ZZ_4CBA8_1AC;
	}
	S2 = S1 + V0;
	S2 = S1 + 240;
	ZZ_CLOCKCYCLES(5,0x8004CD54);
ZZ_4CBA8_1AC:
	V0 = (int32_t)V1 < 500;
	if (V0)
	{
		V0 = (int32_t)V1 < 3291;
		ZZ_CLOCKCYCLES(3,0x8004CD70);
		goto ZZ_4CBA8_1C8;
	}
	V0 = (int32_t)V1 < 3291;
	if (!V0)
	{
		A1 = 3290;
		ZZ_CLOCKCYCLES(5,0x8004CD74);
		goto ZZ_4CBA8_1CC;
	}
	A1 = 3290;
	A1 = V1;
	ZZ_CLOCKCYCLES(7,0x8004CD74);
	goto ZZ_4CBA8_1CC;
ZZ_4CBA8_1C8:
	A1 = 500;
	ZZ_CLOCKCYCLES(1,0x8004CD74);
ZZ_4CBA8_1CC:
	V1 = A1;
	A1 = V1 + 80;
	V0 = (int32_t)A2 < (int32_t)A1;
	if (V0)
	{
		V0 = (int32_t)S1 < 16;
		ZZ_CLOCKCYCLES(5,0x8004CD9C);
		goto ZZ_4CBA8_1F4;
	}
	V0 = (int32_t)S1 < 16;
	V0 = (int32_t)A2 < 3291;
	if (!V0)
	{
		A1 = 3290;
		ZZ_CLOCKCYCLES(8,0x8004CD98);
		goto ZZ_4CBA8_1F0;
	}
	A1 = 3290;
	A1 = A2;
	ZZ_CLOCKCYCLES(9,0x8004CD98);
ZZ_4CBA8_1F0:
	V0 = (int32_t)S1 < 16;
	ZZ_CLOCKCYCLES(1,0x8004CD9C);
ZZ_4CBA8_1F4:
	if (V0)
	{
		A2 = A1;
		ZZ_CLOCKCYCLES(2,0x8004CDF0);
		goto ZZ_4CBA8_248;
	}
	A2 = A1;
	V0 = EMU_ReadU8(S0 + 18); //+ 0x12
	if (!V0)
	{
		V0 = (int32_t)S1 < 311;
		ZZ_CLOCKCYCLES(6,0x8004CDC4);
		goto ZZ_4CBA8_21C;
	}
	V0 = (int32_t)S1 < 311;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(8,0x8004CDD0);
		goto ZZ_4CBA8_228;
	}
	A0 = S1;
	ZZ_CLOCKCYCLES(10,0x8004CDF4);
	goto ZZ_4CBA8_24C;
ZZ_4CBA8_21C:
	V0 = (int32_t)S1 < 257;
	if (V0)
	{
		ZZ_CLOCKCYCLES(3,0x8004CDE8);
		goto ZZ_4CBA8_240;
	}
	ZZ_CLOCKCYCLES(3,0x8004CDD0);
ZZ_4CBA8_228:
	V0 = EMU_ReadU8(S0 + 18); //+ 0x12
	if (!V0)
	{
		A0 = 256;
		ZZ_CLOCKCYCLES(4,0x8004CDF4);
		goto ZZ_4CBA8_24C;
	}
	A0 = 256;
	A0 = 310;
	ZZ_CLOCKCYCLES(6,0x8004CDF4);
	goto ZZ_4CBA8_24C;
ZZ_4CBA8_240:
	A0 = S1;
	ZZ_CLOCKCYCLES(2,0x8004CDF4);
	goto ZZ_4CBA8_24C;
ZZ_4CBA8_248:
	A0 = 16;
	ZZ_CLOCKCYCLES(1,0x8004CDF4);
ZZ_4CBA8_24C:
	S1 = A0;
	A1 = S1 + 2;
	V0 = (int32_t)S2 < (int32_t)A1;
	if (V0)
	{
		ZZ_CLOCKCYCLES(5,0x8004CE50);
		goto ZZ_4CBA8_2A8;
	}
	V0 = EMU_ReadU8(S0 + 18); //+ 0x12
	if (!V0)
	{
		V0 = (int32_t)S2 < 313;
		ZZ_CLOCKCYCLES(9,0x8004CE28);
		goto ZZ_4CBA8_280;
	}
	V0 = (int32_t)S2 < 313;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(11,0x8004CE34);
		goto ZZ_4CBA8_28C;
	}
	A1 = S2;
	ZZ_CLOCKCYCLES(13,0x8004CE50);
	goto ZZ_4CBA8_2A8;
ZZ_4CBA8_280:
	V0 = (int32_t)S2 < 259;
	if (V0)
	{
		ZZ_CLOCKCYCLES(3,0x8004CE4C);
		goto ZZ_4CBA8_2A4;
	}
	ZZ_CLOCKCYCLES(3,0x8004CE34);
ZZ_4CBA8_28C:
	V0 = EMU_ReadU8(S0 + 18); //+ 0x12
	if (!V0)
	{
		A1 = 258;
		ZZ_CLOCKCYCLES(4,0x8004CE50);
		goto ZZ_4CBA8_2A8;
	}
	A1 = 258;
	A1 = 312;
	ZZ_CLOCKCYCLES(6,0x8004CE50);
	goto ZZ_4CBA8_2A8;
ZZ_4CBA8_2A4:
	A1 = S2;
	ZZ_CLOCKCYCLES(1,0x8004CE50);
ZZ_4CBA8_2A8:
	S2 = A1;
	V0 = A2 & 0xFFF;
	V0 <<= 12;
	A0 = V1 & 0xFFF;
	V1 = 0x6000000;
	A1 = 0x80060000;
	A1 = EMU_ReadU32(A1 - 8276); //+ 0xFFFFDFAC
	A0 |= V1;
	V1 = EMU_ReadU32(A1 + 16); //+ 0x10
	ZZ_JUMPREGISTER_BEGIN(V1);
	RA = 0x8004CE80; //ZZ_4CBA8_2D8
	A0 |= V0;
	ZZ_CLOCKCYCLES_JR(12);
	// UNIMPLEMENTED JUMP-TO-REGISTER-AND-LINK (V1,8004CE78)
	ZZ_JUMPREGISTER_END();
ZZ_4CBA8_2D8:
	V0 = S2 & 0x3FF;
	V0 <<= 10;
	A0 = S1 & 0x3FF;
	V1 = 0x7000000;
	A1 = 0x80060000;
	A1 = EMU_ReadU32(A1 - 8276); //+ 0xFFFFDFAC
	A0 |= V1;
	V1 = EMU_ReadU32(A1 + 16); //+ 0x10
	ZZ_JUMPREGISTER_BEGIN(V1);
	RA = 0x8004CEAC; //ZZ_4CBA8_304
	A0 |= V0;
	ZZ_CLOCKCYCLES_JR(11);
	// UNIMPLEMENTED JUMP-TO-REGISTER-AND-LINK (V1,8004CEA4)
	ZZ_JUMPREGISTER_END();
ZZ_4CBA8_304:
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 8144); //+ 0xFFFFE030
	V0 = EMU_ReadU32(S0 + 16); //+ 0x10
	if (V1 != V0)
	{
		ZZ_CLOCKCYCLES(6,0x8004CF34);
		goto ZZ_4CBA8_38C;
	}
	V0 = 0x80060000;
	V0 = EMU_ReadU16(V0 - 8160); //+ 0xFFFFE020
	V1 = EMU_ReadS16(S0);
	V0 <<= 16;
	V0 = (int32_t)V0 >> 16;
	if (V0 != V1)
	{
		ZZ_CLOCKCYCLES(13,0x8004CF34);
		goto ZZ_4CBA8_38C;
	}
	V0 = 0x80060000;
	V0 = EMU_ReadU16(V0 - 8158); //+ 0xFFFFE022
	V1 = EMU_ReadS16(S0 + 2); //+ 0x2
	V0 <<= 16;
	V0 = (int32_t)V0 >> 16;
	if (V0 != V1)
	{
		ZZ_CLOCKCYCLES(20,0x8004CF34);
		goto ZZ_4CBA8_38C;
	}
	V0 = 0x80060000;
	V0 = EMU_ReadU16(V0 - 8156); //+ 0xFFFFE024
	V1 = EMU_ReadS16(S0 + 4); //+ 0x4
	V0 <<= 16;
	V0 = (int32_t)V0 >> 16;
	if (V0 != V1)
	{
		ZZ_CLOCKCYCLES(27,0x8004CF34);
		goto ZZ_4CBA8_38C;
	}
	V0 = 0x80060000;
	V0 = EMU_ReadU16(V0 - 8154); //+ 0xFFFFE026
	V1 = EMU_ReadS16(S0 + 6); //+ 0x6
	V0 <<= 16;
	V0 = (int32_t)V0 >> 16;
	if (V0 == V1)
	{
		ZZ_CLOCKCYCLES(34,0x8004D018);
		goto ZZ_4CBA8_470;
	}
	ZZ_CLOCKCYCLES(34,0x8004CF34);
ZZ_4CBA8_38C:
	RA = 0x8004CF3C; //ZZ_4CBA8_394
	ZZ_CLOCKCYCLES(2,0x8004B468);
	goto ZZ_4B468;
ZZ_4CBA8_394:
	EMU_Write8(S0 + 18,V0); //+ 0x12
	V0 &= 0xFF;
	V1 = 1;
	if (V0 != V1)
	{
		ZZ_CLOCKCYCLES(5,0x8004CF54);
		goto ZZ_4CBA8_3AC;
	}
	S3 |= 0x8;
	ZZ_CLOCKCYCLES(6,0x8004CF54);
ZZ_4CBA8_3AC:
	V0 = EMU_ReadU8(S0 + 17); //+ 0x11
	if (!V0)
	{
		ZZ_CLOCKCYCLES(4,0x8004CF68);
		goto ZZ_4CBA8_3C0;
	}
	S3 |= 0x10;
	ZZ_CLOCKCYCLES(5,0x8004CF68);
ZZ_4CBA8_3C0:
	V0 = EMU_ReadU8(S0 + 16); //+ 0x10
	if (!V0)
	{
		ZZ_CLOCKCYCLES(4,0x8004CF7C);
		goto ZZ_4CBA8_3D4;
	}
	S3 |= 0x20;
	ZZ_CLOCKCYCLES(5,0x8004CF7C);
ZZ_4CBA8_3D4:
	V0 = 0x80060000;
	V0 = EMU_ReadU8(V0 - 8265); //+ 0xFFFFDFB7
	if (!V0)
	{
		ZZ_CLOCKCYCLES(5,0x8004CF94);
		goto ZZ_4CBA8_3EC;
	}
	S3 |= 0x80;
	ZZ_CLOCKCYCLES(6,0x8004CF94);
ZZ_4CBA8_3EC:
	V1 = EMU_ReadS16(S0 + 4); //+ 0x4
	V0 = (int32_t)V1 < 281;
	if (V0)
	{
		V0 = (int32_t)V1 < 353;
		ZZ_CLOCKCYCLES(5,0x8004CFDC);
		goto ZZ_4CBA8_434;
	}
	V0 = (int32_t)V1 < 353;
	if (!V0)
	{
		V0 = (int32_t)V1 < 401;
		ZZ_CLOCKCYCLES(7,0x8004CFB8);
		goto ZZ_4CBA8_410;
	}
	V0 = (int32_t)V1 < 401;
	S3 |= 0x1;
	ZZ_CLOCKCYCLES(9,0x8004CFDC);
	goto ZZ_4CBA8_434;
ZZ_4CBA8_410:
	if (!V0)
	{
		V0 = (int32_t)V1 < 561;
		ZZ_CLOCKCYCLES(2,0x8004CFC8);
		goto ZZ_4CBA8_420;
	}
	V0 = (int32_t)V1 < 561;
	S3 |= 0x40;
	ZZ_CLOCKCYCLES(4,0x8004CFDC);
	goto ZZ_4CBA8_434;
ZZ_4CBA8_420:
	if (!V0)
	{
		ZZ_CLOCKCYCLES(2,0x8004CFD8);
		goto ZZ_4CBA8_430;
	}
	S3 |= 0x2;
	ZZ_CLOCKCYCLES(4,0x8004CFDC);
	goto ZZ_4CBA8_434;
ZZ_4CBA8_430:
	S3 |= 0x3;
	ZZ_CLOCKCYCLES(1,0x8004CFDC);
ZZ_4CBA8_434:
	V0 = EMU_ReadU8(S0 + 18); //+ 0x12
	V1 = EMU_ReadS16(S0 + 6); //+ 0x6
	if (V0)
	{
		V0 = (int32_t)V1 < 289;
		ZZ_CLOCKCYCLES(4,0x8004CFF0);
		goto ZZ_4CBA8_448;
	}
	V0 = (int32_t)V1 < 289;
	V0 = (int32_t)V1 < 257;
	ZZ_CLOCKCYCLES(5,0x8004CFF0);
ZZ_4CBA8_448:
	if (V0)
	{
		ZZ_CLOCKCYCLES(2,0x8004CFFC);
		goto ZZ_4CBA8_454;
	}
	S3 |= 0x24;
	ZZ_CLOCKCYCLES(3,0x8004CFFC);
ZZ_4CBA8_454:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 8276); //+ 0xFFFFDFAC
	V0 = EMU_ReadU32(V0 + 16); //+ 0x10
	ZZ_JUMPREGISTER_BEGIN(V0);
	RA = 0x8004D018; //ZZ_4CBA8_470
	A0 = S3;
	ZZ_CLOCKCYCLES_JR(7);
	// UNIMPLEMENTED JUMP-TO-REGISTER-AND-LINK (V0,8004D010)
	ZZ_JUMPREGISTER_END();
ZZ_4CBA8_470:
	A0 = 0x80060000;
	A0 -= 8160;
	A1 = S0;
	RA = 0x8004D02C; //ZZ_4CBA8_484
	A2 = 20;
	ZZ_CLOCKCYCLES(5,0x800494BC);
	goto ZZ_494BC;
ZZ_4CBA8_484:
	V0 = S0;
	RA = EMU_ReadU32(SP + 32); //+ 0x20
	S3 = EMU_ReadU32(SP + 28); //+ 0x1C
	S2 = EMU_ReadU32(SP + 24); //+ 0x18
	S1 = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 40;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(9);
	ZZ_JUMPREGISTER(0x800162E8,ZZ_161D4_114);
	ZZ_JUMPREGISTER(0x80016AE4,ZZ_1658C_558);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004CBA8,ZZ_4CBA8);
ZZ_MARK(0x8004CBAC);
ZZ_MARK(0x8004CBB0);
ZZ_MARK(0x8004CBB4);
ZZ_MARK(0x8004CBB8);
ZZ_MARK(0x8004CBBC);
ZZ_MARK(0x8004CBC0);
ZZ_MARK(0x8004CBC4);
ZZ_MARK(0x8004CBC8);
ZZ_MARK(0x8004CBCC);
ZZ_MARK(0x8004CBD0);
ZZ_MARK(0x8004CBD4);
ZZ_MARK(0x8004CBD8);
ZZ_MARK(0x8004CBDC);
ZZ_MARK(0x8004CBE0);
ZZ_MARK(0x8004CBE4);
ZZ_MARK(0x8004CBE8);
ZZ_MARK(0x8004CBEC);
ZZ_MARK(0x8004CBF0);
ZZ_MARK_TARGET(0x8004CBF4,ZZ_4CBA8_4C);
ZZ_MARK(0x8004CBF8);
ZZ_MARK(0x8004CBFC);
ZZ_MARK(0x8004CC00);
ZZ_MARK(0x8004CC04);
ZZ_MARK(0x8004CC08);
ZZ_MARK(0x8004CC0C);
ZZ_MARK(0x8004CC10);
ZZ_MARK(0x8004CC14);
ZZ_MARK_TARGET(0x8004CC18,ZZ_4CBA8_70);
ZZ_MARK(0x8004CC1C);
ZZ_MARK(0x8004CC20);
ZZ_MARK(0x8004CC24);
ZZ_MARK(0x8004CC28);
ZZ_MARK(0x8004CC2C);
ZZ_MARK(0x8004CC30);
ZZ_MARK_TARGET(0x8004CC34,ZZ_4CBA8_8C);
ZZ_MARK(0x8004CC38);
ZZ_MARK(0x8004CC3C);
ZZ_MARK(0x8004CC40);
ZZ_MARK(0x8004CC44);
ZZ_MARK(0x8004CC48);
ZZ_MARK(0x8004CC4C);
ZZ_MARK_TARGET(0x8004CC50,ZZ_4CBA8_A8);
ZZ_MARK(0x8004CC54);
ZZ_MARK(0x8004CC58);
ZZ_MARK(0x8004CC5C);
ZZ_MARK(0x8004CC60);
ZZ_MARK(0x8004CC64);
ZZ_MARK(0x8004CC68);
ZZ_MARK(0x8004CC6C);
ZZ_MARK_TARGET(0x8004CC70,ZZ_4CBA8_C8);
ZZ_MARK(0x8004CC74);
ZZ_MARK(0x8004CC78);
ZZ_MARK(0x8004CC7C);
ZZ_MARK(0x8004CC80);
ZZ_MARK(0x8004CC84);
ZZ_MARK(0x8004CC88);
ZZ_MARK(0x8004CC8C);
ZZ_MARK(0x8004CC90);
ZZ_MARK(0x8004CC94);
ZZ_MARK(0x8004CC98);
ZZ_MARK(0x8004CC9C);
ZZ_MARK(0x8004CCA0);
ZZ_MARK(0x8004CCA4);
ZZ_MARK(0x8004CCA8);
ZZ_MARK(0x8004CCAC);
ZZ_MARK(0x8004CCB0);
ZZ_MARK(0x8004CCB4);
ZZ_MARK(0x8004CCB8);
ZZ_MARK(0x8004CCBC);
ZZ_MARK(0x8004CCC0);
ZZ_MARK(0x8004CCC4);
ZZ_MARK(0x8004CCC8);
ZZ_MARK(0x8004CCCC);
ZZ_MARK(0x8004CCD0);
ZZ_MARK(0x8004CCD4);
ZZ_MARK(0x8004CCD8);
ZZ_MARK(0x8004CCDC);
ZZ_MARK(0x8004CCE0);
ZZ_MARK_TARGET(0x8004CCE4,ZZ_4CBA8_13C);
ZZ_MARK(0x8004CCE8);
ZZ_MARK_TARGET(0x8004CCEC,ZZ_4CBA8_144);
ZZ_MARK(0x8004CCF0);
ZZ_MARK(0x8004CCF4);
ZZ_MARK(0x8004CCF8);
ZZ_MARK(0x8004CCFC);
ZZ_MARK(0x8004CD00);
ZZ_MARK(0x8004CD04);
ZZ_MARK(0x8004CD08);
ZZ_MARK(0x8004CD0C);
ZZ_MARK(0x8004CD10);
ZZ_MARK(0x8004CD14);
ZZ_MARK_TARGET(0x8004CD18,ZZ_4CBA8_170);
ZZ_MARK_TARGET(0x8004CD1C,ZZ_4CBA8_174);
ZZ_MARK(0x8004CD20);
ZZ_MARK(0x8004CD24);
ZZ_MARK(0x8004CD28);
ZZ_MARK(0x8004CD2C);
ZZ_MARK(0x8004CD30);
ZZ_MARK(0x8004CD34);
ZZ_MARK(0x8004CD38);
ZZ_MARK_TARGET(0x8004CD3C,ZZ_4CBA8_194);
ZZ_MARK_TARGET(0x8004CD40,ZZ_4CBA8_198);
ZZ_MARK(0x8004CD44);
ZZ_MARK(0x8004CD48);
ZZ_MARK(0x8004CD4C);
ZZ_MARK(0x8004CD50);
ZZ_MARK_TARGET(0x8004CD54,ZZ_4CBA8_1AC);
ZZ_MARK(0x8004CD58);
ZZ_MARK(0x8004CD5C);
ZZ_MARK(0x8004CD60);
ZZ_MARK(0x8004CD64);
ZZ_MARK(0x8004CD68);
ZZ_MARK(0x8004CD6C);
ZZ_MARK_TARGET(0x8004CD70,ZZ_4CBA8_1C8);
ZZ_MARK_TARGET(0x8004CD74,ZZ_4CBA8_1CC);
ZZ_MARK(0x8004CD78);
ZZ_MARK(0x8004CD7C);
ZZ_MARK(0x8004CD80);
ZZ_MARK(0x8004CD84);
ZZ_MARK(0x8004CD88);
ZZ_MARK(0x8004CD8C);
ZZ_MARK(0x8004CD90);
ZZ_MARK(0x8004CD94);
ZZ_MARK_TARGET(0x8004CD98,ZZ_4CBA8_1F0);
ZZ_MARK_TARGET(0x8004CD9C,ZZ_4CBA8_1F4);
ZZ_MARK(0x8004CDA0);
ZZ_MARK(0x8004CDA4);
ZZ_MARK(0x8004CDA8);
ZZ_MARK(0x8004CDAC);
ZZ_MARK(0x8004CDB0);
ZZ_MARK(0x8004CDB4);
ZZ_MARK(0x8004CDB8);
ZZ_MARK(0x8004CDBC);
ZZ_MARK(0x8004CDC0);
ZZ_MARK_TARGET(0x8004CDC4,ZZ_4CBA8_21C);
ZZ_MARK(0x8004CDC8);
ZZ_MARK(0x8004CDCC);
ZZ_MARK_TARGET(0x8004CDD0,ZZ_4CBA8_228);
ZZ_MARK(0x8004CDD4);
ZZ_MARK(0x8004CDD8);
ZZ_MARK(0x8004CDDC);
ZZ_MARK(0x8004CDE0);
ZZ_MARK(0x8004CDE4);
ZZ_MARK_TARGET(0x8004CDE8,ZZ_4CBA8_240);
ZZ_MARK(0x8004CDEC);
ZZ_MARK_TARGET(0x8004CDF0,ZZ_4CBA8_248);
ZZ_MARK_TARGET(0x8004CDF4,ZZ_4CBA8_24C);
ZZ_MARK(0x8004CDF8);
ZZ_MARK(0x8004CDFC);
ZZ_MARK(0x8004CE00);
ZZ_MARK(0x8004CE04);
ZZ_MARK(0x8004CE08);
ZZ_MARK(0x8004CE0C);
ZZ_MARK(0x8004CE10);
ZZ_MARK(0x8004CE14);
ZZ_MARK(0x8004CE18);
ZZ_MARK(0x8004CE1C);
ZZ_MARK(0x8004CE20);
ZZ_MARK(0x8004CE24);
ZZ_MARK_TARGET(0x8004CE28,ZZ_4CBA8_280);
ZZ_MARK(0x8004CE2C);
ZZ_MARK(0x8004CE30);
ZZ_MARK_TARGET(0x8004CE34,ZZ_4CBA8_28C);
ZZ_MARK(0x8004CE38);
ZZ_MARK(0x8004CE3C);
ZZ_MARK(0x8004CE40);
ZZ_MARK(0x8004CE44);
ZZ_MARK(0x8004CE48);
ZZ_MARK_TARGET(0x8004CE4C,ZZ_4CBA8_2A4);
ZZ_MARK_TARGET(0x8004CE50,ZZ_4CBA8_2A8);
ZZ_MARK(0x8004CE54);
ZZ_MARK(0x8004CE58);
ZZ_MARK(0x8004CE5C);
ZZ_MARK(0x8004CE60);
ZZ_MARK(0x8004CE64);
ZZ_MARK(0x8004CE68);
ZZ_MARK(0x8004CE6C);
ZZ_MARK(0x8004CE70);
ZZ_MARK(0x8004CE74);
ZZ_MARK(0x8004CE78);
ZZ_MARK(0x8004CE7C);
ZZ_MARK_TARGET(0x8004CE80,ZZ_4CBA8_2D8);
ZZ_MARK(0x8004CE84);
ZZ_MARK(0x8004CE88);
ZZ_MARK(0x8004CE8C);
ZZ_MARK(0x8004CE90);
ZZ_MARK(0x8004CE94);
ZZ_MARK(0x8004CE98);
ZZ_MARK(0x8004CE9C);
ZZ_MARK(0x8004CEA0);
ZZ_MARK(0x8004CEA4);
ZZ_MARK(0x8004CEA8);
ZZ_MARK_TARGET(0x8004CEAC,ZZ_4CBA8_304);
ZZ_MARK(0x8004CEB0);
ZZ_MARK(0x8004CEB4);
ZZ_MARK(0x8004CEB8);
ZZ_MARK(0x8004CEBC);
ZZ_MARK(0x8004CEC0);
ZZ_MARK(0x8004CEC4);
ZZ_MARK(0x8004CEC8);
ZZ_MARK(0x8004CECC);
ZZ_MARK(0x8004CED0);
ZZ_MARK(0x8004CED4);
ZZ_MARK(0x8004CED8);
ZZ_MARK(0x8004CEDC);
ZZ_MARK(0x8004CEE0);
ZZ_MARK(0x8004CEE4);
ZZ_MARK(0x8004CEE8);
ZZ_MARK(0x8004CEEC);
ZZ_MARK(0x8004CEF0);
ZZ_MARK(0x8004CEF4);
ZZ_MARK(0x8004CEF8);
ZZ_MARK(0x8004CEFC);
ZZ_MARK(0x8004CF00);
ZZ_MARK(0x8004CF04);
ZZ_MARK(0x8004CF08);
ZZ_MARK(0x8004CF0C);
ZZ_MARK(0x8004CF10);
ZZ_MARK(0x8004CF14);
ZZ_MARK(0x8004CF18);
ZZ_MARK(0x8004CF1C);
ZZ_MARK(0x8004CF20);
ZZ_MARK(0x8004CF24);
ZZ_MARK(0x8004CF28);
ZZ_MARK(0x8004CF2C);
ZZ_MARK(0x8004CF30);
ZZ_MARK_TARGET(0x8004CF34,ZZ_4CBA8_38C);
ZZ_MARK(0x8004CF38);
ZZ_MARK_TARGET(0x8004CF3C,ZZ_4CBA8_394);
ZZ_MARK(0x8004CF40);
ZZ_MARK(0x8004CF44);
ZZ_MARK(0x8004CF48);
ZZ_MARK(0x8004CF4C);
ZZ_MARK(0x8004CF50);
ZZ_MARK_TARGET(0x8004CF54,ZZ_4CBA8_3AC);
ZZ_MARK(0x8004CF58);
ZZ_MARK(0x8004CF5C);
ZZ_MARK(0x8004CF60);
ZZ_MARK(0x8004CF64);
ZZ_MARK_TARGET(0x8004CF68,ZZ_4CBA8_3C0);
ZZ_MARK(0x8004CF6C);
ZZ_MARK(0x8004CF70);
ZZ_MARK(0x8004CF74);
ZZ_MARK(0x8004CF78);
ZZ_MARK_TARGET(0x8004CF7C,ZZ_4CBA8_3D4);
ZZ_MARK(0x8004CF80);
ZZ_MARK(0x8004CF84);
ZZ_MARK(0x8004CF88);
ZZ_MARK(0x8004CF8C);
ZZ_MARK(0x8004CF90);
ZZ_MARK_TARGET(0x8004CF94,ZZ_4CBA8_3EC);
ZZ_MARK(0x8004CF98);
ZZ_MARK(0x8004CF9C);
ZZ_MARK(0x8004CFA0);
ZZ_MARK(0x8004CFA4);
ZZ_MARK(0x8004CFA8);
ZZ_MARK(0x8004CFAC);
ZZ_MARK(0x8004CFB0);
ZZ_MARK(0x8004CFB4);
ZZ_MARK_TARGET(0x8004CFB8,ZZ_4CBA8_410);
ZZ_MARK(0x8004CFBC);
ZZ_MARK(0x8004CFC0);
ZZ_MARK(0x8004CFC4);
ZZ_MARK_TARGET(0x8004CFC8,ZZ_4CBA8_420);
ZZ_MARK(0x8004CFCC);
ZZ_MARK(0x8004CFD0);
ZZ_MARK(0x8004CFD4);
ZZ_MARK_TARGET(0x8004CFD8,ZZ_4CBA8_430);
ZZ_MARK_TARGET(0x8004CFDC,ZZ_4CBA8_434);
ZZ_MARK(0x8004CFE0);
ZZ_MARK(0x8004CFE4);
ZZ_MARK(0x8004CFE8);
ZZ_MARK(0x8004CFEC);
ZZ_MARK_TARGET(0x8004CFF0,ZZ_4CBA8_448);
ZZ_MARK(0x8004CFF4);
ZZ_MARK(0x8004CFF8);
ZZ_MARK_TARGET(0x8004CFFC,ZZ_4CBA8_454);
ZZ_MARK(0x8004D000);
ZZ_MARK(0x8004D004);
ZZ_MARK(0x8004D008);
ZZ_MARK(0x8004D00C);
ZZ_MARK(0x8004D010);
ZZ_MARK(0x8004D014);
ZZ_MARK_TARGET(0x8004D018,ZZ_4CBA8_470);
ZZ_MARK(0x8004D01C);
ZZ_MARK(0x8004D020);
ZZ_MARK(0x8004D024);
ZZ_MARK(0x8004D028);
ZZ_MARK_TARGET(0x8004D02C,ZZ_4CBA8_484);
ZZ_MARK(0x8004D030);
ZZ_MARK(0x8004D034);
ZZ_MARK(0x8004D038);
ZZ_MARK(0x8004D03C);
ZZ_MARK(0x8004D040);
ZZ_MARK(0x8004D044);
ZZ_MARK(0x8004D048);
ZZ_MARK(0x8004D04C);