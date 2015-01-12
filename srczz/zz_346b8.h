#ifdef ZZ_INCLUDE_CODE
ZZ_346B8:
	V0 = EMU_ReadU32(GP + 208); //+ 0xD0
	SP -= 24;
	if (!V0)
	{
		EMU_Write32(SP + 16,RA); //+ 0x10
		ZZ_CLOCKCYCLES(4,0x800346E0);
		goto ZZ_346B8_28;
	}
	EMU_Write32(SP + 16,RA); //+ 0x10
	A0 = EMU_ReadS16(GP + 616); //+ 0x268
	RA = 0x800346D4; //ZZ_346B8_1C
	A1 = 0x1;
	ZZ_CLOCKCYCLES(7,0x80034770);
	goto ZZ_34770;
ZZ_346B8_1C:
	RA = 0x800346DC; //ZZ_346B8_24
	ZZ_CLOCKCYCLES(2,0x80052E18);
	goto ZZ_52E18;
ZZ_346B8_24:
	EMU_Write32(GP + 208,R0); //+ 0xD0
	ZZ_CLOCKCYCLES(1,0x800346E0);
ZZ_346B8_28:
	RA = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x800153E0,ZZ_15340_A0);
	ZZ_JUMPREGISTER(0x800153B8,ZZ_15340_78);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x800346B8,ZZ_346B8);
ZZ_MARK(0x800346BC);
ZZ_MARK(0x800346C0);
ZZ_MARK(0x800346C4);
ZZ_MARK(0x800346C8);
ZZ_MARK(0x800346CC);
ZZ_MARK(0x800346D0);
ZZ_MARK_TARGET(0x800346D4,ZZ_346B8_1C);
ZZ_MARK(0x800346D8);
ZZ_MARK_TARGET(0x800346DC,ZZ_346B8_24);
ZZ_MARK_TARGET(0x800346E0,ZZ_346B8_28);
ZZ_MARK(0x800346E4);
ZZ_MARK(0x800346E8);
ZZ_MARK(0x800346EC);