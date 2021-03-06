#ifdef ZZ_INCLUDE_CODE
ZZ_13148:
	V0 = 0x2;
	EMU_Write16(A0 + 4,V0); //+ 0x4
	V0 = 0x1;
	EMU_Write32(A0 + 28,V0); //+ 0x1C
	V0 = -16;
	ZZ_JUMPREGISTER_BEGIN(RA);
	EMU_Write32(A0 + 36,A0); //+ 0x24
	ZZ_CLOCKCYCLES_JR(7);
	ZZ_JUMPREGISTER(0x800134E4,ZZ_13304_1E0);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80013148,0x80013164,ZZ_13148);
