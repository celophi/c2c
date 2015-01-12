#ifdef ZZ_INCLUDE_CODE
ZZ_5A690:
	SP -= 24;
	V0 = A0 & 0xFFFF;
	V0 = V0 < 16;
	EMU_Write32(SP + 20,RA); //+ 0x14
	if (!V0)
	{
		EMU_Write32(SP + 16,S0); //+ 0x10
		ZZ_CLOCKCYCLES(6,0x8005A700);
		goto ZZ_5A690_70;
	}
	EMU_Write32(SP + 16,S0); //+ 0x10
	V0 = A0 << 16;
	S0 = (int32_t)V0 >> 16;
	AT = 0x80070000;
	AT += S0;
	V1 = EMU_ReadU8(AT - 26596); //+ 0xFFFF981C
	V0 = 1;
	if (V1 != V0)
	{
		V0 = S0 << 2;
		ZZ_CLOCKCYCLES(14,0x8005A700);
		goto ZZ_5A690_70;
	}
	V0 = S0 << 2;
	AT = 0x80070000;
	AT += V0;
	A0 = EMU_ReadU32(AT - 13016); //+ 0xFFFFCD28
	RA = 0x8005A6DC; //ZZ_5A690_4C
	ZZ_CLOCKCYCLES(19,0x8005A714);
	goto ZZ_5A714;
ZZ_5A690_4C:
	AT = 0x80070000;
	AT += S0;
	EMU_Write8(AT - 26596,R0); //+ 0xFFFF981C
	V0 = 0x80070000;
	V0 = EMU_ReadU16(V0 - 13020); //+ 0xFFFFCD24
	V0 -= 1;
	AT = 0x80070000;
	EMU_Write16(AT - 13020,V0); //+ 0xFFFFCD24
	ZZ_CLOCKCYCLES(9,0x8005A700);
ZZ_5A690_70:
	RA = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(5);
	ZZ_JUMPREGISTER(0x800347BC,ZZ_34770_4C);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8005A690,ZZ_5A690);
ZZ_MARK(0x8005A694);
ZZ_MARK(0x8005A698);
ZZ_MARK(0x8005A69C);
ZZ_MARK(0x8005A6A0);
ZZ_MARK(0x8005A6A4);
ZZ_MARK(0x8005A6A8);
ZZ_MARK(0x8005A6AC);
ZZ_MARK(0x8005A6B0);
ZZ_MARK(0x8005A6B4);
ZZ_MARK(0x8005A6B8);
ZZ_MARK(0x8005A6BC);
ZZ_MARK(0x8005A6C0);
ZZ_MARK(0x8005A6C4);
ZZ_MARK(0x8005A6C8);
ZZ_MARK(0x8005A6CC);
ZZ_MARK(0x8005A6D0);
ZZ_MARK(0x8005A6D4);
ZZ_MARK(0x8005A6D8);
ZZ_MARK_TARGET(0x8005A6DC,ZZ_5A690_4C);
ZZ_MARK(0x8005A6E0);
ZZ_MARK(0x8005A6E4);
ZZ_MARK(0x8005A6E8);
ZZ_MARK(0x8005A6EC);
ZZ_MARK(0x8005A6F0);
ZZ_MARK(0x8005A6F4);
ZZ_MARK(0x8005A6F8);
ZZ_MARK(0x8005A6FC);
ZZ_MARK_TARGET(0x8005A700,ZZ_5A690_70);
ZZ_MARK(0x8005A704);
ZZ_MARK(0x8005A708);
ZZ_MARK(0x8005A70C);
ZZ_MARK(0x8005A710);