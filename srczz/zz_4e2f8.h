#ifdef ZZ_INCLUDE_CODE
ZZ_4E2F8:
	V1 = 0x4000000;
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 8056); //+ 0xFFFFE088
	V1 |= 0x2;
	EMU_Write32(V0,V1);
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 8052); //+ 0xFFFFE08C
	EMU_Write32(V0,A0);
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 8048); //+ 0xFFFFE090
	V1 = 0x1000000;
	EMU_Write32(V0,R0);
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 8044); //+ 0xFFFFE094
	V1 |= 0x401;
	EMU_Write32(V0,V1);
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(19);
	ZZ_JUMPREGISTER(0x8004DD90,ZZ_4DB50_240);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004E2F8,0x8004E344,ZZ_4E2F8);
