#ifdef ZZ_INCLUDE_CODE
ZZ_4F060:
	T0 = EMU_ReadU32(A1);
	T1 = EMU_ReadU32(A1 + 4); //+ 0x4
	T2 = EMU_ReadU32(A1 + 8); //+ 0x8
	EMU_Write32(A0 + 20,T0); //+ 0x14
	EMU_Write32(A0 + 24,T1); //+ 0x18
	EMU_Write32(A0 + 28,T2); //+ 0x1C
	V0 = A0;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(9);
	ZZ_JUMPREGISTER(0x80017E94,ZZ_17CE8_1AC);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004F060,0x8004F084,ZZ_4F060);
