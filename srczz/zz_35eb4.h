#ifdef ZZ_INCLUDE_CODE
ZZ_35EB4:
	A0 = EMU_ReadU32(GP + 548); //+ 0x224
	SP -= 24;
	EMU_Write32(SP + 16,RA); //+ 0x10
	RA = 0x80035EC8; //ZZ_35EB4_14
	ZZ_CLOCKCYCLES(5,0x80049F84);
	goto ZZ_49F84;
ZZ_35EB4_14:
	A0 = EMU_ReadU32(GP + 552); //+ 0x228
	RA = 0x80035ED4; //ZZ_35EB4_20
	ZZ_CLOCKCYCLES(3,0x80049F84);
	goto ZZ_49F84;
ZZ_35EB4_20:
	A0 = EMU_ReadU32(GP + 556); //+ 0x22C
	RA = 0x80035EE0; //ZZ_35EB4_2C
	ZZ_CLOCKCYCLES(3,0x80049F84);
	goto ZZ_49F84;
ZZ_35EB4_2C:
	A0 = EMU_ReadU32(GP + 560); //+ 0x230
	RA = 0x80035EEC; //ZZ_35EB4_38
	ZZ_CLOCKCYCLES(3,0x80049F84);
	goto ZZ_49F84;
ZZ_35EB4_38:
	RA = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(4);
	ZZ_JUMPREGISTER(0x80034BF4,ZZ_34BCC_28);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80035EB4,ZZ_35EB4);
ZZ_MARK(0x80035EB8);
ZZ_MARK(0x80035EBC);
ZZ_MARK(0x80035EC0);
ZZ_MARK(0x80035EC4);
ZZ_MARK_TARGET(0x80035EC8,ZZ_35EB4_14);
ZZ_MARK(0x80035ECC);
ZZ_MARK(0x80035ED0);
ZZ_MARK_TARGET(0x80035ED4,ZZ_35EB4_20);
ZZ_MARK(0x80035ED8);
ZZ_MARK(0x80035EDC);
ZZ_MARK_TARGET(0x80035EE0,ZZ_35EB4_2C);
ZZ_MARK(0x80035EE4);
ZZ_MARK(0x80035EE8);
ZZ_MARK_TARGET(0x80035EEC,ZZ_35EB4_38);
ZZ_MARK(0x80035EF0);
ZZ_MARK(0x80035EF4);
ZZ_MARK(0x80035EF8);