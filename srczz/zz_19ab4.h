#ifdef ZZ_INCLUDE_CODE
ZZ_19AB4:
	SP -= 32;
	V0 = EMU_ReadU32(SP + 52); //+ 0x34
	EMU_Write32(SP + 16,S0); //+ 0x10
	S0 = A0;
	T1 = A1;
	EMU_Write32(SP + 20,S1); //+ 0x14
	S1 = A2;
	EMU_Write32(SP + 24,S2); //+ 0x18
	S2 = A3;
	if (V0)
	{
		EMU_Write32(SP + 28,RA); //+ 0x1C
		ZZ_CLOCKCYCLES(11,0x80019AEC);
		goto ZZ_19AB4_38;
	}
	EMU_Write32(SP + 28,RA); //+ 0x1C
	EMU_Write32(S0 + 184,R0); //+ 0xB8
	EMU_Write32(S0 + 240,R0); //+ 0xF0
	EMU_Write32(S0 + 248,R0); //+ 0xF8
	ZZ_CLOCKCYCLES(14,0x80019AEC);
ZZ_19AB4_38:
	A0 = EMU_ReadU32(S0 + 68); //+ 0x44
	V1 = 0x1;
	V0 = 0xFFFF;
	EMU_Write32(S0 + 312,V0); //+ 0x138
	V0 = -2;
	EMU_Write32(S0 + 244,R0); //+ 0xF4
	EMU_Write32(S0,V1);
	EMU_Write32(S0 + 132,R0); //+ 0x84
	EMU_Write32(S0 + 136,R0); //+ 0x88
	EMU_Write32(S0 + 140,R0); //+ 0x8C
	EMU_Write32(S0 + 144,R0); //+ 0x90
	EMU_Write32(S0 + 148,R0); //+ 0x94
	EMU_Write32(S0 + 152,R0); //+ 0x98
	EMU_Write32(S0 + 156,R0); //+ 0x9C
	EMU_Write32(S0 + 160,R0); //+ 0xA0
	EMU_Write32(S0 + 164,R0); //+ 0xA4
	EMU_Write32(S0 + 260,R0); //+ 0x104
	EMU_Write32(S0 + 236,R0); //+ 0xEC
	EMU_Write32(S0 + 216,R0); //+ 0xD8
	EMU_Write32(S0 + 148,R0); //+ 0x94
	EMU_Write32(S0 + 168,R0); //+ 0xA8
	EMU_Write32(S0 + 176,R0); //+ 0xB0
	EMU_Write32(S0 + 172,R0); //+ 0xAC
	EMU_Write32(S0 + 264,R0); //+ 0x108
	EMU_Write32(S0 + 280,R0); //+ 0x118
	EMU_Write32(S0 + 272,R0); //+ 0x110
	EMU_Write32(S0 + 296,R0); //+ 0x128
	EMU_Write32(S0 + 300,V0); //+ 0x12C
	EMU_Write32(S0 + 288,R0); //+ 0x120
	V0 = EMU_ReadU32(A0);
	if (V0 != V1)
	{
		V0 = 0x1000;
		ZZ_CLOCKCYCLES(33,0x80019BC0);
		goto ZZ_19AB4_10C;
	}
	V0 = 0x1000;
	V0 = EMU_ReadU32(S0 + 68); //+ 0x44
	V1 = EMU_ReadU32(A0 + 24); //+ 0x18
	A3 = S0 + 96;
	A2 = V0 + 96;
	T0 = V0 + 128;
	EMU_Write32(S0 + 24,V1); //+ 0x18
	ZZ_CLOCKCYCLES(39,0x80019B88);
ZZ_19AB4_D4:
	V0 = EMU_ReadU32(A2);
	V1 = EMU_ReadU32(A2 + 4); //+ 0x4
	A0 = EMU_ReadU32(A2 + 8); //+ 0x8
	A1 = EMU_ReadU32(A2 + 12); //+ 0xC
	EMU_Write32(A3,V0);
	EMU_Write32(A3 + 4,V1); //+ 0x4
	EMU_Write32(A3 + 8,A0); //+ 0x8
	EMU_Write32(A3 + 12,A1); //+ 0xC
	A2 += 16;
	if (A2 != T0)
	{
		A3 += 16;
		ZZ_CLOCKCYCLES(11,0x80019B88);
		goto ZZ_19AB4_D4;
	}
	A3 += 16;
	V0 = EMU_ReadU32(A2);
	EMU_Write32(A3,V0);
	ZZ_CLOCKCYCLES(14,0x80019BDC);
	goto ZZ_19AB4_128;
ZZ_19AB4_10C:
	EMU_Write32(S0 + 24,R0); //+ 0x18
	EMU_Write32(S0 + 108,R0); //+ 0x6C
	EMU_Write32(S0 + 112,R0); //+ 0x70
	EMU_Write32(S0 + 116,R0); //+ 0x74
	EMU_Write32(S0 + 120,V0); //+ 0x78
	EMU_Write32(S0 + 124,V0); //+ 0x7C
	EMU_Write32(S0 + 128,V0); //+ 0x80
	ZZ_CLOCKCYCLES(7,0x80019BDC);
ZZ_19AB4_128:
	V0 = (int32_t)T1 < 4;
	if (V0)
	{
		V0 = (int32_t)T1 < 6;
		ZZ_CLOCKCYCLES(3,0x80019BFC);
		goto ZZ_19AB4_148;
	}
	V0 = (int32_t)T1 < 6;
	if (V0)
	{
		V0 = 0x1D;
		ZZ_CLOCKCYCLES(5,0x80019BF8);
		goto ZZ_19AB4_144;
	}
	V0 = 0x1D;
	if (T1 != V0)
	{
		ZZ_CLOCKCYCLES(7,0x80019BFC);
		goto ZZ_19AB4_148;
	}
	ZZ_CLOCKCYCLES(7,0x80019BF8);
ZZ_19AB4_144:
	EMU_Write32(S0 + 24,R0); //+ 0x18
	ZZ_CLOCKCYCLES(1,0x80019BFC);
ZZ_19AB4_148:
	V1 = EMU_ReadU32(S0 + 4); //+ 0x4
	V0 = 0x3;
	if (V1 != V0)
	{
		V0 = -14;
		ZZ_CLOCKCYCLES(4,0x80019CD8);
		goto ZZ_19AB4_224;
	}
	V0 = -14;
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 + 30772); //+ 0x7834
	V0 = T1 << 2;
	V0 += 16;
	A0 = V1 + V0;
	V1 = EMU_ReadU32(A0);
	V0 = 0x63960000;
	V0 |= 0x347F;
	if (V1 == V0)
	{
		V0 = (int32_t)T1 < 64;
		ZZ_CLOCKCYCLES(14,0x80019CD4);
		goto ZZ_19AB4_220;
	}
	V0 = (int32_t)T1 < 64;
	if (!V0)
	{
		A1 = 0x1;
		ZZ_CLOCKCYCLES(16,0x80019CD4);
		goto ZZ_19AB4_220;
	}
	A1 = 0x1;
	RA = 0x80019C44; //ZZ_19AB4_190
	A2 = R0;
	ZZ_CLOCKCYCLES(18,0x80014364);
	goto ZZ_14364;
ZZ_19AB4_190:
	EMU_Write32(S0 + 12,V0); //+ 0xC
	V1 = EMU_ReadU32(S0 + 12); //+ 0xC
	V1 = (int32_t)V1 < -254;
	if (!V1)
	{
		EMU_Write32(S0 + 16,V0); //+ 0x10
		ZZ_CLOCKCYCLES(6,0x80019CD4);
		goto ZZ_19AB4_220;
	}
	EMU_Write32(S0 + 16,V0); //+ 0x10
	EMU_Write32(S0 + 64,S0); //+ 0x40
	EMU_Write32(S0 + 88,R0); //+ 0x58
	EMU_Write32(S0 + 80,R0); //+ 0x50
	EMU_Write32(S0 + 92,R0); //+ 0x5C
	V0 = 0x80070000;
	V0 = EMU_ReadU32(V0 - 12888); //+ 0xFFFFCDA8
	A0 = EMU_ReadU32(S0 + 12); //+ 0xC
	EMU_Write32(S0 + 180,S1); //+ 0xB4
	EMU_Write32(S0 + 232,R0); //+ 0xE8
	EMU_Write32(S0 + 208,R0); //+ 0xD0
	EMU_Write32(S0 + 84,V0); //+ 0x54
	V0 = EMU_ReadU32(A0 + 16); //+ 0x10
	V1 = EMU_ReadU32(S0 + 180); //+ 0xB4
	V0 = EMU_ReadU32(V0 + 16); //+ 0x10
	A0 = EMU_ReadU32(A0 + 28); //+ 0x1C
	V0 += V1;
	V0 <<= 1;
	V0 += A0;
	A1 = EMU_ReadU16(V0);
	V0 = 0xFF;
	if (A1 != V0)
	{
		A0 = S0;
		ZZ_CLOCKCYCLES(28,0x80019CBC);
		goto ZZ_19AB4_208;
	}
	A0 = S0;
	V0 = -27;
	ZZ_CLOCKCYCLES(30,0x80019CD8);
	goto ZZ_19AB4_224;
ZZ_19AB4_208:
	A3 = EMU_ReadU32(SP + 48); //+ 0x30
	RA = 0x80019CC8; //ZZ_19AB4_214
	A2 = S2;
	ZZ_CLOCKCYCLES(3,0x8001C478);
	goto ZZ_1C478;
ZZ_19AB4_214:
	V0 = (int32_t)V0 < -254;
	if (V0)
	{
		V0 = -255;
		ZZ_CLOCKCYCLES(3,0x80019CD8);
		goto ZZ_19AB4_224;
	}
	V0 = -255;
	ZZ_CLOCKCYCLES(3,0x80019CD4);
ZZ_19AB4_220:
	V0 = -14;
	ZZ_CLOCKCYCLES(1,0x80019CD8);
ZZ_19AB4_224:
	RA = EMU_ReadU32(SP + 28); //+ 0x1C
	S2 = EMU_ReadU32(SP + 24); //+ 0x18
	S1 = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 32;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(7);
	ZZ_JUMPREGISTER(0x80019A58,ZZ_19928_130);
	ZZ_JUMPREGISTER(0x80019720,ZZ_191D4_54C);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80019AB4,ZZ_19AB4);
ZZ_MARK(0x80019AB8);
ZZ_MARK(0x80019ABC);
ZZ_MARK(0x80019AC0);
ZZ_MARK(0x80019AC4);
ZZ_MARK(0x80019AC8);
ZZ_MARK(0x80019ACC);
ZZ_MARK(0x80019AD0);
ZZ_MARK(0x80019AD4);
ZZ_MARK(0x80019AD8);
ZZ_MARK(0x80019ADC);
ZZ_MARK(0x80019AE0);
ZZ_MARK(0x80019AE4);
ZZ_MARK(0x80019AE8);
ZZ_MARK_TARGET(0x80019AEC,ZZ_19AB4_38);
ZZ_MARK(0x80019AF0);
ZZ_MARK(0x80019AF4);
ZZ_MARK(0x80019AF8);
ZZ_MARK(0x80019AFC);
ZZ_MARK(0x80019B00);
ZZ_MARK(0x80019B04);
ZZ_MARK(0x80019B08);
ZZ_MARK(0x80019B0C);
ZZ_MARK(0x80019B10);
ZZ_MARK(0x80019B14);
ZZ_MARK(0x80019B18);
ZZ_MARK(0x80019B1C);
ZZ_MARK(0x80019B20);
ZZ_MARK(0x80019B24);
ZZ_MARK(0x80019B28);
ZZ_MARK(0x80019B2C);
ZZ_MARK(0x80019B30);
ZZ_MARK(0x80019B34);
ZZ_MARK(0x80019B38);
ZZ_MARK(0x80019B3C);
ZZ_MARK(0x80019B40);
ZZ_MARK(0x80019B44);
ZZ_MARK(0x80019B48);
ZZ_MARK(0x80019B4C);
ZZ_MARK(0x80019B50);
ZZ_MARK(0x80019B54);
ZZ_MARK(0x80019B58);
ZZ_MARK(0x80019B5C);
ZZ_MARK(0x80019B60);
ZZ_MARK(0x80019B64);
ZZ_MARK(0x80019B68);
ZZ_MARK(0x80019B6C);
ZZ_MARK(0x80019B70);
ZZ_MARK(0x80019B74);
ZZ_MARK(0x80019B78);
ZZ_MARK(0x80019B7C);
ZZ_MARK(0x80019B80);
ZZ_MARK(0x80019B84);
ZZ_MARK_TARGET(0x80019B88,ZZ_19AB4_D4);
ZZ_MARK(0x80019B8C);
ZZ_MARK(0x80019B90);
ZZ_MARK(0x80019B94);
ZZ_MARK(0x80019B98);
ZZ_MARK(0x80019B9C);
ZZ_MARK(0x80019BA0);
ZZ_MARK(0x80019BA4);
ZZ_MARK(0x80019BA8);
ZZ_MARK(0x80019BAC);
ZZ_MARK(0x80019BB0);
ZZ_MARK(0x80019BB4);
ZZ_MARK(0x80019BB8);
ZZ_MARK(0x80019BBC);
ZZ_MARK_TARGET(0x80019BC0,ZZ_19AB4_10C);
ZZ_MARK(0x80019BC4);
ZZ_MARK(0x80019BC8);
ZZ_MARK(0x80019BCC);
ZZ_MARK(0x80019BD0);
ZZ_MARK(0x80019BD4);
ZZ_MARK(0x80019BD8);
ZZ_MARK_TARGET(0x80019BDC,ZZ_19AB4_128);
ZZ_MARK(0x80019BE0);
ZZ_MARK(0x80019BE4);
ZZ_MARK(0x80019BE8);
ZZ_MARK(0x80019BEC);
ZZ_MARK(0x80019BF0);
ZZ_MARK(0x80019BF4);
ZZ_MARK_TARGET(0x80019BF8,ZZ_19AB4_144);
ZZ_MARK_TARGET(0x80019BFC,ZZ_19AB4_148);
ZZ_MARK(0x80019C00);
ZZ_MARK(0x80019C04);
ZZ_MARK(0x80019C08);
ZZ_MARK(0x80019C0C);
ZZ_MARK(0x80019C10);
ZZ_MARK(0x80019C14);
ZZ_MARK(0x80019C18);
ZZ_MARK(0x80019C1C);
ZZ_MARK(0x80019C20);
ZZ_MARK(0x80019C24);
ZZ_MARK(0x80019C28);
ZZ_MARK(0x80019C2C);
ZZ_MARK(0x80019C30);
ZZ_MARK(0x80019C34);
ZZ_MARK(0x80019C38);
ZZ_MARK(0x80019C3C);
ZZ_MARK(0x80019C40);
ZZ_MARK_TARGET(0x80019C44,ZZ_19AB4_190);
ZZ_MARK(0x80019C48);
ZZ_MARK(0x80019C4C);
ZZ_MARK(0x80019C50);
ZZ_MARK(0x80019C54);
ZZ_MARK(0x80019C58);
ZZ_MARK(0x80019C5C);
ZZ_MARK(0x80019C60);
ZZ_MARK(0x80019C64);
ZZ_MARK(0x80019C68);
ZZ_MARK(0x80019C6C);
ZZ_MARK(0x80019C70);
ZZ_MARK(0x80019C74);
ZZ_MARK(0x80019C78);
ZZ_MARK(0x80019C7C);
ZZ_MARK(0x80019C80);
ZZ_MARK(0x80019C84);
ZZ_MARK(0x80019C88);
ZZ_MARK(0x80019C8C);
ZZ_MARK(0x80019C90);
ZZ_MARK(0x80019C94);
ZZ_MARK(0x80019C98);
ZZ_MARK(0x80019C9C);
ZZ_MARK(0x80019CA0);
ZZ_MARK(0x80019CA4);
ZZ_MARK(0x80019CA8);
ZZ_MARK(0x80019CAC);
ZZ_MARK(0x80019CB0);
ZZ_MARK(0x80019CB4);
ZZ_MARK(0x80019CB8);
ZZ_MARK_TARGET(0x80019CBC,ZZ_19AB4_208);
ZZ_MARK(0x80019CC0);
ZZ_MARK(0x80019CC4);
ZZ_MARK_TARGET(0x80019CC8,ZZ_19AB4_214);
ZZ_MARK(0x80019CCC);
ZZ_MARK(0x80019CD0);
ZZ_MARK_TARGET(0x80019CD4,ZZ_19AB4_220);
ZZ_MARK_TARGET(0x80019CD8,ZZ_19AB4_224);
ZZ_MARK(0x80019CDC);
ZZ_MARK(0x80019CE0);
ZZ_MARK(0x80019CE4);
ZZ_MARK(0x80019CE8);
ZZ_MARK(0x80019CEC);
ZZ_MARK(0x80019CF0);