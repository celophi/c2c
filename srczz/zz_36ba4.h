#ifdef ZZ_INCLUDE_CODE
ZZ_36BA4:
	SP -= 24;
	EMU_Write32(SP + 16,S0); //+ 0x10
	S0 = A0;
	A1 = R0;
	EMU_Write32(SP + 20,RA); //+ 0x14
	RA = 0x80036BC0; //ZZ_36BA4_1C
	A2 = 0x2A4;
	ZZ_CLOCKCYCLES(7,0x800494CC);
	goto ZZ_494CC;
ZZ_36BA4_1C:
	V0 = 0x8;
	EMU_Write32(S0,V0);
	V0 = 0x1;
	EMU_Write32(S0 + 4,V0); //+ 0x4
	V0 = EMU_ReadU32(GP + 268); //+ 0x10C
	V1 = EMU_ReadS16(GP + 272); //+ 0x110
	EMU_Write32(S0 + 12,V0); //+ 0xC
	EMU_Write16(S0 + 16,V1); //+ 0x10
	V0 = 0x63;
	EMU_Write32(S0 + 32,V0); //+ 0x20
	V0 = 0x5;
	EMU_Write32(S0 + 44,V0); //+ 0x2C
	V0 = 0xFF;
	EMU_Write32(S0 + 88,V0); //+ 0x58
	EMU_Write32(S0 + 92,V0); //+ 0x5C
	RA = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(20);
	ZZ_JUMPREGISTER(0x80036B80,ZZ_36B58_28);
	ZZ_JUMPREGISTER(0x80036A94,ZZ_369C4_D0);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80036BA4,ZZ_36BA4);
ZZ_MARK(0x80036BA8);
ZZ_MARK(0x80036BAC);
ZZ_MARK(0x80036BB0);
ZZ_MARK(0x80036BB4);
ZZ_MARK(0x80036BB8);
ZZ_MARK(0x80036BBC);
ZZ_MARK_TARGET(0x80036BC0,ZZ_36BA4_1C);
ZZ_MARK(0x80036BC4);
ZZ_MARK(0x80036BC8);
ZZ_MARK(0x80036BCC);
ZZ_MARK(0x80036BD0);
ZZ_MARK(0x80036BD4);
ZZ_MARK(0x80036BD8);
ZZ_MARK(0x80036BDC);
ZZ_MARK(0x80036BE0);
ZZ_MARK(0x80036BE4);
ZZ_MARK(0x80036BE8);
ZZ_MARK(0x80036BEC);
ZZ_MARK(0x80036BF0);
ZZ_MARK(0x80036BF4);
ZZ_MARK(0x80036BF8);
ZZ_MARK(0x80036BFC);
ZZ_MARK(0x80036C00);
ZZ_MARK(0x80036C04);
ZZ_MARK(0x80036C08);
ZZ_MARK(0x80036C0C);