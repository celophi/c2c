#ifdef ZZ_INCLUDE_CODE
ZZ_57A6C:
	V0 = 1;
	if (A0 != V0)
	{
		ZZ_CLOCKCYCLES(3,0x80057A84);
		goto ZZ_57A6C_18;
	}
	AT = 0x80060000;
	EMU_Write32(AT - 5476,R0); //+ 0xFFFFEA9C
	ZZ_CLOCKCYCLES(6,0x80057A8C);
	goto ZZ_57A6C_20;
ZZ_57A6C_18:
	AT = 0x80060000;
	EMU_Write32(AT - 5476,V0); //+ 0xFFFFEA9C
	ZZ_CLOCKCYCLES(2,0x80057A8C);
ZZ_57A6C_20:
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(2);
	ZZ_JUMPREGISTER(0x80057768,ZZ_5774C_1C);
	ZZ_JUMPREGISTER(0x8005AAD4,ZZ_5AA94_40);
	ZZ_JUMPREGISTER(0x8005ABE8,ZZ_5AB94_54);
	ZZ_JUMPREGISTER(0x8005ACAC,ZZ_5AB94_118);
	ZZ_JUMPREGISTER(0x8005AE70,ZZ_5AB94_2DC);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80057A6C,ZZ_57A6C);
ZZ_MARK(0x80057A70);
ZZ_MARK(0x80057A74);
ZZ_MARK(0x80057A78);
ZZ_MARK(0x80057A7C);
ZZ_MARK(0x80057A80);
ZZ_MARK_TARGET(0x80057A84,ZZ_57A6C_18);
ZZ_MARK(0x80057A88);
ZZ_MARK_TARGET(0x80057A8C,ZZ_57A6C_20);
ZZ_MARK(0x80057A90);