#ifdef ZZ_INCLUDE_CODE
ZZ_4E2A8:
	SP -= 8;
	A2 = A1 - 1;
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 - 8056); //+ 0xFFFFE088
	V0 = 0x4000000;
	EMU_Write32(V1,V0);
	if (!A1)
	{
		V0 = R0;
		ZZ_CLOCKCYCLES(8,0x8004E2EC);
		goto ZZ_4E2A8_44;
	}
	V0 = R0;
	A1 = -1;
	ZZ_CLOCKCYCLES(9,0x8004E2CC);
ZZ_4E2A8_24:
	V1 = EMU_ReadU32(A0);
	A0 += 4;
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 8060); //+ 0xFFFFE084
	A2 -= 1;
	EMU_Write32(V0,V1);
	if (A2 != A1)
	{
		V0 = R0;
		ZZ_CLOCKCYCLES(8,0x8004E2CC);
		goto ZZ_4E2A8_24;
	}
	V0 = R0;
	ZZ_CLOCKCYCLES(8,0x8004E2EC);
ZZ_4E2A8_44:
	SP += 8;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(3);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004E2A8,ZZ_4E2A8);
ZZ_MARK(0x8004E2AC);
ZZ_MARK(0x8004E2B0);
ZZ_MARK(0x8004E2B4);
ZZ_MARK(0x8004E2B8);
ZZ_MARK(0x8004E2BC);
ZZ_MARK(0x8004E2C0);
ZZ_MARK(0x8004E2C4);
ZZ_MARK(0x8004E2C8);
ZZ_MARK_TARGET(0x8004E2CC,ZZ_4E2A8_24);
ZZ_MARK(0x8004E2D0);
ZZ_MARK(0x8004E2D4);
ZZ_MARK(0x8004E2D8);
ZZ_MARK(0x8004E2DC);
ZZ_MARK(0x8004E2E0);
ZZ_MARK(0x8004E2E4);
ZZ_MARK(0x8004E2E8);
ZZ_MARK_TARGET(0x8004E2EC,ZZ_4E2A8_44);
ZZ_MARK(0x8004E2F0);
ZZ_MARK(0x8004E2F4);