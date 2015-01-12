#ifdef ZZ_INCLUDE_CODE
ZZ_269D8:
	SP -= 120;
	V0 = A0;
	EMU_Write32(SP + 112,S0); //+ 0x70
	S0 = A1;
	A0 = SP + 16;
	EMU_Write32(SP + 116,RA); //+ 0x74
	RA = 0x800269F8; //ZZ_269D8_20
	A1 = V0;
	ZZ_CLOCKCYCLES(8,0x80026A38);
	goto ZZ_26A38;
ZZ_269D8_20:
	if (!V0)
	{
		V0 = R0;
		ZZ_CLOCKCYCLES(2,0x80026A24);
		goto ZZ_269D8_4C;
	}
	V0 = R0;
	V0 = EMU_ReadU32(SP + 16); //+ 0x10
	V1 = EMU_ReadU32(SP + 20); //+ 0x14
	A0 = EMU_ReadU32(SP + 24); //+ 0x18
	A1 = EMU_ReadU32(SP + 28); //+ 0x1C
	EMU_Write32(S0,V0);
	EMU_Write32(S0 + 4,V1); //+ 0x4
	EMU_Write32(S0 + 8,A0); //+ 0x8
	EMU_Write32(S0 + 12,A1); //+ 0xC
	V0 = 0x1;
	ZZ_CLOCKCYCLES(11,0x80026A24);
ZZ_269D8_4C:
	RA = EMU_ReadU32(SP + 116); //+ 0x74
	S0 = EMU_ReadU32(SP + 112); //+ 0x70
	SP += 120;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(5);
	ZZ_JUMPREGISTER(0x80022C10,ZZ_22AD4_13C);
	ZZ_JUMPREGISTER(0x800223A4,ZZ_221A8_1FC);
	ZZ_JUMPREGISTER(0x80021FDC,ZZ_21C64_378);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x800269D8,ZZ_269D8);
ZZ_MARK(0x800269DC);
ZZ_MARK(0x800269E0);
ZZ_MARK(0x800269E4);
ZZ_MARK(0x800269E8);
ZZ_MARK(0x800269EC);
ZZ_MARK(0x800269F0);
ZZ_MARK(0x800269F4);
ZZ_MARK_TARGET(0x800269F8,ZZ_269D8_20);
ZZ_MARK(0x800269FC);
ZZ_MARK(0x80026A00);
ZZ_MARK(0x80026A04);
ZZ_MARK(0x80026A08);
ZZ_MARK(0x80026A0C);
ZZ_MARK(0x80026A10);
ZZ_MARK(0x80026A14);
ZZ_MARK(0x80026A18);
ZZ_MARK(0x80026A1C);
ZZ_MARK(0x80026A20);
ZZ_MARK_TARGET(0x80026A24,ZZ_269D8_4C);
ZZ_MARK(0x80026A28);
ZZ_MARK(0x80026A2C);
ZZ_MARK(0x80026A30);
ZZ_MARK(0x80026A34);