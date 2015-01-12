#ifdef ZZ_INCLUDE_CODE
ZZ_1828C:
	V0 = 0x1000;
	EMU_Write32(A0 + 12,R0); //+ 0xC
	EMU_Write32(A0 + 16,R0); //+ 0x10
	EMU_Write32(A0 + 20,R0); //+ 0x14
	EMU_Write32(A0,R0);
	EMU_Write32(A0 + 4,R0); //+ 0x4
	EMU_Write32(A0 + 8,R0); //+ 0x8
	EMU_Write32(A0 + 24,V0); //+ 0x18
	EMU_Write32(A0 + 28,V0); //+ 0x1C
	ZZ_JUMPREGISTER_BEGIN(RA);
	EMU_Write32(A0 + 32,V0); //+ 0x20
	ZZ_CLOCKCYCLES_JR(11);
	ZZ_JUMPREGISTER(0x80017B94,ZZ_17AB0_E4);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8001828C,ZZ_1828C);
ZZ_MARK(0x80018290);
ZZ_MARK(0x80018294);
ZZ_MARK(0x80018298);
ZZ_MARK(0x8001829C);
ZZ_MARK(0x800182A0);
ZZ_MARK(0x800182A4);
ZZ_MARK(0x800182A8);
ZZ_MARK(0x800182AC);
ZZ_MARK(0x800182B0);
ZZ_MARK(0x800182B4);