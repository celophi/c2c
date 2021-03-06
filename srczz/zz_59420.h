#ifdef ZZ_INCLUDE_CODE
ZZ_59420:
	SP -= 24;
	T1 = A0;
	A0 <<= 16;
	A0 = (int32_t)A0 >> 16;
	V0 = EMU_ReadU32(SP + 40); //+ 0x28
	A1 <<= 16;
	EMU_Write32(SP + 20,RA); //+ 0x14
	EMU_Write32(SP + 16,S0); //+ 0x10
	T0 = V0 - 64;
	V0 = A0 << 3;
	V0 = V0 - A0;
	V0 <<= 2;
	V0 = V0 - A0;
	A0 = V0 << 1;
	AT = 0x80060000;
	AT += A0;
	V0 = EMU_ReadS16(AT + 1204); //+ 0x4B4
	A1 = (int32_t)A1 >> 16;
	if (V0 != A1)
	{
		V0 = R0;
		ZZ_CLOCKCYCLES(20,0x8005960C);
		goto ZZ_59420_1EC;
	}
	V0 = R0;
	AT = 0x80060000;
	AT += A0;
	V1 = EMU_ReadS16(AT + 1212); //+ 0x4BC
	V0 = A2 << 16;
	V0 = (int32_t)V0 >> 16;
	if (V1 != V0)
	{
		V0 = R0;
		ZZ_CLOCKCYCLES(27,0x8005960C);
		goto ZZ_59420_1EC;
	}
	V0 = R0;
	AT = 0x80060000;
	AT += A0;
	V1 = EMU_ReadS16(AT + 1208); //+ 0x4B8
	V0 = A3 << 16;
	V0 = (int32_t)V0 >> 16;
	if (V1 != V0)
	{
		V0 = R0;
		ZZ_CLOCKCYCLES(34,0x8005960C);
		goto ZZ_59420_1EC;
	}
	V0 = R0;
	V0 = 0x80070000;
	V0 = EMU_ReadU8(V0 - 26621); //+ 0xFFFF9803
	AT = 0x80060000;
	AT += A0;
	V1 = EMU_ReadU16(AT + 1210); //+ 0x4BA
	AT = 0x80060000;
	AT += A0;
	A2 = EMU_ReadU16(AT + 1202); //+ 0x4B2
	V0 <<= 4;
	V1 += V0;
	V0 = T0 << 16;
	A1 = (int32_t)V0 >> 16;
	if ((int32_t)A1 <= 0)
	{
		V0 = V1 & 0xFFFF;
		ZZ_CLOCKCYCLES(48,0x80059538);
		goto ZZ_59420_118;
	}
	V0 = V1 & 0xFFFF;
	V1 = 0x80070000;
	V1 = EMU_ReadU32(V1 - 32140); //+ 0xFFFF8274
	V0 <<= 5;
	V0 += V1;
	A0 = EMU_ReadU8(V0 + 13); //+ 0xD
	EMU_SMultiply(A1,A0);
	A0 = LO;
	V0 = 0x82080000;
	V0 |= 0x2083;
	EMU_SMultiply(A0,V0);
	V1 = (int32_t)A0 >> 31;
	T2 = HI;
	V0 = T2 + A0;
	V0 = (int32_t)V0 >> 5;
	V0 = V0 - V1;
	A2 += V0;
	V1 = V0 << 6;
	V1 = V1 - V0;
	A0 = A0 - V1;
	A1 = A0 << 1;
	ZZ_CLOCKCYCLES(70,0x80059594);
	goto ZZ_59420_174;
ZZ_59420_118:
	if ((int32_t)A1 >= 0)
	{
		ZZ_CLOCKCYCLES(2,0x80059590);
		goto ZZ_59420_170;
	}
	V0 = V1 & 0xFFFF;
	V1 = 0x80070000;
	V1 = EMU_ReadU32(V1 - 32140); //+ 0xFFFF8274
	V0 <<= 5;
	V0 += V1;
	V0 = EMU_ReadU8(V0 + 12); //+ 0xC
	EMU_SMultiply(A1,V0);
	A0 = LO;
	if ((int32_t)A0 >= 0)
	{
		V0 = A0;
		ZZ_CLOCKCYCLES(13,0x80059570);
		goto ZZ_59420_150;
	}
	V0 = A0;
	V0 = A0 + 63;
	ZZ_CLOCKCYCLES(14,0x80059570);
ZZ_59420_150:
	V0 = (int32_t)V0 >> 6;
	V1 = A2 + V0;
	A2 = V1 - 1;
	V0 <<= 6;
	V0 = A0 - V0;
	V0 <<= 1;
	A1 = V0 + 127;
	ZZ_CLOCKCYCLES(8,0x80059594);
	goto ZZ_59420_174;
ZZ_59420_170:
	A1 = R0;
	ZZ_CLOCKCYCLES(1,0x80059594);
ZZ_59420_174:
	S0 = T1 << 16;
	S0 = (int32_t)S0 >> 16;
	V0 = S0 << 3;
	V0 = V0 - S0;
	V0 <<= 2;
	V0 = V0 - S0;
	V0 <<= 1;
	A0 = A2 & 0xFFFF;
	AT = 0x80060000;
	AT += V0;
	V0 = EMU_ReadU16(AT + 1210); //+ 0x4BA
	AT = 0x80070000;
	EMU_Write16(AT - 26602,T1); //+ 0xFFFF9816
	AT = 0x80070000;
	EMU_Write8(AT - 26616,V0); //+ 0xFFFF9808
	RA = 0x800595D8; //ZZ_59420_1B8
	A1 &= 0xFFFF;
	ZZ_CLOCKCYCLES(17,0x80058804);
	goto ZZ_58804;
ZZ_59420_1B8:
	V1 = S0 << 4;
	AT = 0x80070000;
	AT += V1;
	EMU_Write16(AT - 26576,V0); //+ 0xFFFF9830
	AT = 0x80060000;
	AT += S0;
	V1 = EMU_ReadU8(AT + 2508); //+ 0x9CC
	V1 |= 0x4;
	AT = 0x80060000;
	AT += S0;
	EMU_Write8(AT + 2508,V1); //+ 0x9CC
	V0 = 1;
	ZZ_CLOCKCYCLES(13,0x8005960C);
ZZ_59420_1EC:
	RA = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 24;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(5);
	ZZ_JUMPREGISTER(0x800596B4,ZZ_59620_94);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80059420,0x80059538,ZZ_59420);
ZZ_MARK_TARGET(0x80059538,0x80059570,ZZ_59420_118);
ZZ_MARK_TARGET(0x80059570,0x80059590,ZZ_59420_150);
ZZ_MARK_TARGET(0x80059590,0x80059594,ZZ_59420_170);
ZZ_MARK_TARGET(0x80059594,0x800595D8,ZZ_59420_174);
ZZ_MARK_TARGET(0x800595D8,0x8005960C,ZZ_59420_1B8);
ZZ_MARK_TARGET(0x8005960C,0x80059620,ZZ_59420_1EC);
