#ifdef ZZ_INCLUDE_CODE
ZZ_4B6EC:
	V1 = EMU_ReadU32(SP + 16); //+ 0x10
	V0 = A0;
	EMU_Write16(V0,A1);
	EMU_Write16(V0 + 2,A2); //+ 0x2
	EMU_Write16(V0 + 4,A3); //+ 0x4
	EMU_Write16(V0 + 8,R0); //+ 0x8
	EMU_Write16(V0 + 10,R0); //+ 0xA
	EMU_Write16(V0 + 12,R0); //+ 0xC
	EMU_Write16(V0 + 14,R0); //+ 0xE
	EMU_Write8(V0 + 17,R0); //+ 0x11
	EMU_Write8(V0 + 16,R0); //+ 0x10
	EMU_Write8(V0 + 19,R0); //+ 0x13
	EMU_Write8(V0 + 18,R0); //+ 0x12
	ZZ_JUMPREGISTER_BEGIN(RA);
	EMU_Write16(V0 + 6,V1); //+ 0x6
	ZZ_CLOCKCYCLES_JR(15);
	ZZ_JUMPREGISTER(0x80016258,ZZ_161D4_84);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004B6EC,0x8004B728,ZZ_4B6EC);
