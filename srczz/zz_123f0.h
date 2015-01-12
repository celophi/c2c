#ifdef ZZ_INCLUDE_CODE
ZZ_123F0:
	V0 = EMU_ReadU32(GP + 40); //+ 0x28
	SP -= 56;
	EMU_Write32(SP + 36,S1); //+ 0x24
	S1 = A1;
	EMU_Write32(SP + 48,RA); //+ 0x30
	EMU_Write32(SP + 44,S3); //+ 0x2C
	EMU_Write32(SP + 40,S2); //+ 0x28
	if (!V0)
	{
		EMU_Write32(SP + 32,S0); //+ 0x20
		ZZ_CLOCKCYCLES(9,0x8001252C);
		goto ZZ_123F0_13C;
	}
	EMU_Write32(SP + 32,S0); //+ 0x20
	V0 = 0x1;
	if (A2 != V0)
	{
		S2 = R0;
		ZZ_CLOCKCYCLES(12,0x80012528);
		goto ZZ_123F0_138;
	}
	S2 = R0;
	if (S1)
	{
		S3 = A0;
		ZZ_CLOCKCYCLES(14,0x8001246C);
		goto ZZ_123F0_7C;
	}
	S3 = A0;
	V1 = EMU_ReadU32(S3 + 4); //+ 0x4
	V0 = 0x10000;
	V0 |= 0xFFFF;
	V1 &= V0;
	V0 = V1 + 2047;
	if ((int32_t)V0 >= 0)
	{
		V0 = (int32_t)V0 >> 11;
		ZZ_CLOCKCYCLES(21,0x8001244C);
		goto ZZ_123F0_5C;
	}
	V0 = (int32_t)V0 >> 11;
	V0 = V1 + 4094;
	V0 = (int32_t)V0 >> 11;
	ZZ_CLOCKCYCLES(23,0x8001244C);
ZZ_123F0_5C:
	S2 = V0 << 11;
	RA = 0x80012458; //ZZ_123F0_68
	A0 = S2;
	ZZ_CLOCKCYCLES(3,0x8001148C);
	goto ZZ_1148C;
ZZ_123F0_68:
	S1 = V0;
	if (S1)
	{
		V0 = 0x7F0000;
		ZZ_CLOCKCYCLES(3,0x80012470);
		goto ZZ_123F0_80;
	}
	V0 = 0x7F0000;
	V0 = -15;
	ZZ_CLOCKCYCLES(5,0x8001252C);
	goto ZZ_123F0_13C;
ZZ_123F0_7C:
	V0 = 0x7F0000;
	ZZ_CLOCKCYCLES(1,0x80012470);
ZZ_123F0_80:
	A0 = EMU_ReadU32(S3);
	V0 |= 0xFFFF;
	S0 = SP + 24;
	A1 = S0;
	RA = 0x80012488; //ZZ_123F0_98
	A0 &= V0;
	ZZ_CLOCKCYCLES(6,0x80047234);
	goto ZZ_47234;
ZZ_123F0_98:
	A0 = 0x2;
	A1 = S0;
	RA = 0x80012498; //ZZ_123F0_A8
	A2 = SP + 16;
	ZZ_CLOCKCYCLES(4,0x80046DE8);
	goto ZZ_46DE8;
ZZ_123F0_A8:
	if (!V0)
	{
		S0 = 0x10000;
		ZZ_CLOCKCYCLES(2,0x8001246C);
		goto ZZ_123F0_7C;
	}
	S0 = 0x10000;
	V0 = EMU_ReadU32(S3 + 4); //+ 0x4
	S0 |= 0xFFFF;
	V0 &= S0;
	A0 = V0 + 2047;
	if ((int32_t)A0 >= 0)
	{
		A0 >>= 11;
		ZZ_CLOCKCYCLES(8,0x800124C0);
		goto ZZ_123F0_D0;
	}
	A0 >>= 11;
	A0 = V0 + 4094;
	A0 >>= 11;
	ZZ_CLOCKCYCLES(10,0x800124C0);
ZZ_123F0_D0:
	A1 = S1;
	RA = 0x800124CC; //ZZ_123F0_DC
	A2 = 0x80;
	ZZ_CLOCKCYCLES(3,0x8004920C);
	goto ZZ_4920C;
ZZ_123F0_DC:
	if (!V0)
	{
		ZZ_CLOCKCYCLES(2,0x800124E8);
		goto ZZ_123F0_F8;
	}
	RA = 0x800124DC; //ZZ_123F0_EC
	A0 = 0x1;
	ZZ_CLOCKCYCLES(4,0x80012F94);
	goto ZZ_12F94;
ZZ_123F0_EC:
	V1 = -16;
	if (V0 != V1)
	{
		ZZ_CLOCKCYCLES(3,0x80012500);
		goto ZZ_123F0_110;
	}
	ZZ_CLOCKCYCLES(3,0x800124E8);
ZZ_123F0_F8:
	A0 = 0x80060000;
	A0 -= 3008;
	RA = 0x800124F8; //ZZ_123F0_108
	ZZ_CLOCKCYCLES(4,0x800494DC);
	goto ZZ_494DC;
ZZ_123F0_108:
	V0 = 0x7F0000;
	ZZ_CLOCKCYCLES(2,0x80012470);
	goto ZZ_123F0_80;
ZZ_123F0_110:
	if (!S2)
	{
		V0 = S1;
		ZZ_CLOCKCYCLES(2,0x8001252C);
		goto ZZ_123F0_13C;
	}
	V0 = S1;
	V0 = EMU_ReadU32(S3 + 4); //+ 0x4
	A1 = V0 & S0;
	if (S2 == A1)
	{
		V0 = S1;
		ZZ_CLOCKCYCLES(7,0x8001252C);
		goto ZZ_123F0_13C;
	}
	V0 = S1;
	RA = 0x80012524; //ZZ_123F0_134
	A0 = S1;
	ZZ_CLOCKCYCLES(9,0x800116D4);
	goto ZZ_116D4;
ZZ_123F0_134:
	S1 = V0;
	ZZ_CLOCKCYCLES(1,0x80012528);
ZZ_123F0_138:
	V0 = S1;
	ZZ_CLOCKCYCLES(1,0x8001252C);
ZZ_123F0_13C:
	RA = EMU_ReadU32(SP + 48); //+ 0x30
	S3 = EMU_ReadU32(SP + 44); //+ 0x2C
	S2 = EMU_ReadU32(SP + 40); //+ 0x28
	S1 = EMU_ReadU32(SP + 36); //+ 0x24
	S0 = EMU_ReadU32(SP + 32); //+ 0x20
	SP += 56;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(8);
	ZZ_JUMPREGISTER(0x80014E58,ZZ_14D6C_EC);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x800123F0,ZZ_123F0);
ZZ_MARK(0x800123F4);
ZZ_MARK(0x800123F8);
ZZ_MARK(0x800123FC);
ZZ_MARK(0x80012400);
ZZ_MARK(0x80012404);
ZZ_MARK(0x80012408);
ZZ_MARK(0x8001240C);
ZZ_MARK(0x80012410);
ZZ_MARK(0x80012414);
ZZ_MARK(0x80012418);
ZZ_MARK(0x8001241C);
ZZ_MARK(0x80012420);
ZZ_MARK(0x80012424);
ZZ_MARK(0x80012428);
ZZ_MARK(0x8001242C);
ZZ_MARK(0x80012430);
ZZ_MARK(0x80012434);
ZZ_MARK(0x80012438);
ZZ_MARK(0x8001243C);
ZZ_MARK(0x80012440);
ZZ_MARK(0x80012444);
ZZ_MARK(0x80012448);
ZZ_MARK_TARGET(0x8001244C,ZZ_123F0_5C);
ZZ_MARK(0x80012450);
ZZ_MARK(0x80012454);
ZZ_MARK_TARGET(0x80012458,ZZ_123F0_68);
ZZ_MARK(0x8001245C);
ZZ_MARK(0x80012460);
ZZ_MARK(0x80012464);
ZZ_MARK(0x80012468);
ZZ_MARK_TARGET(0x8001246C,ZZ_123F0_7C);
ZZ_MARK_TARGET(0x80012470,ZZ_123F0_80);
ZZ_MARK(0x80012474);
ZZ_MARK(0x80012478);
ZZ_MARK(0x8001247C);
ZZ_MARK(0x80012480);
ZZ_MARK(0x80012484);
ZZ_MARK_TARGET(0x80012488,ZZ_123F0_98);
ZZ_MARK(0x8001248C);
ZZ_MARK(0x80012490);
ZZ_MARK(0x80012494);
ZZ_MARK_TARGET(0x80012498,ZZ_123F0_A8);
ZZ_MARK(0x8001249C);
ZZ_MARK(0x800124A0);
ZZ_MARK(0x800124A4);
ZZ_MARK(0x800124A8);
ZZ_MARK(0x800124AC);
ZZ_MARK(0x800124B0);
ZZ_MARK(0x800124B4);
ZZ_MARK(0x800124B8);
ZZ_MARK(0x800124BC);
ZZ_MARK_TARGET(0x800124C0,ZZ_123F0_D0);
ZZ_MARK(0x800124C4);
ZZ_MARK(0x800124C8);
ZZ_MARK_TARGET(0x800124CC,ZZ_123F0_DC);
ZZ_MARK(0x800124D0);
ZZ_MARK(0x800124D4);
ZZ_MARK(0x800124D8);
ZZ_MARK_TARGET(0x800124DC,ZZ_123F0_EC);
ZZ_MARK(0x800124E0);
ZZ_MARK(0x800124E4);
ZZ_MARK_TARGET(0x800124E8,ZZ_123F0_F8);
ZZ_MARK(0x800124EC);
ZZ_MARK(0x800124F0);
ZZ_MARK(0x800124F4);
ZZ_MARK_TARGET(0x800124F8,ZZ_123F0_108);
ZZ_MARK(0x800124FC);
ZZ_MARK_TARGET(0x80012500,ZZ_123F0_110);
ZZ_MARK(0x80012504);
ZZ_MARK(0x80012508);
ZZ_MARK(0x8001250C);
ZZ_MARK(0x80012510);
ZZ_MARK(0x80012514);
ZZ_MARK(0x80012518);
ZZ_MARK(0x8001251C);
ZZ_MARK(0x80012520);
ZZ_MARK_TARGET(0x80012524,ZZ_123F0_134);
ZZ_MARK_TARGET(0x80012528,ZZ_123F0_138);
ZZ_MARK_TARGET(0x8001252C,ZZ_123F0_13C);
ZZ_MARK(0x80012530);
ZZ_MARK(0x80012534);
ZZ_MARK(0x80012538);
ZZ_MARK(0x8001253C);
ZZ_MARK(0x80012540);
ZZ_MARK(0x80012544);
ZZ_MARK(0x80012548);