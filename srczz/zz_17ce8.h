#ifdef ZZ_INCLUDE_CODE
ZZ_17CE8:
	SP -= 104;
	EMU_Write32(SP + 96,RA); //+ 0x60
	EMU_Write32(SP + 92,S3); //+ 0x5C
	EMU_Write32(SP + 88,S2); //+ 0x58
	EMU_Write32(SP + 84,S1); //+ 0x54
	RA = 0x80017D04; //ZZ_17CE8_1C
	EMU_Write32(SP + 80,S0); //+ 0x50
	ZZ_CLOCKCYCLES(7,0x80020C80);
	goto ZZ_20C80;
ZZ_17CE8_1C:
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 + 2720); //+ 0xAA0
	RA = 0x80017D14; //ZZ_17CE8_2C
	A0 = -A0;
	ZZ_CLOCKCYCLES(4,0x8003D584);
	goto ZZ_3D584;
ZZ_17CE8_2C:
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 + 2720); //+ 0xAA0
	S0 = V0;
	RA = 0x80017D28; //ZZ_17CE8_40
	A0 = -A0;
	ZZ_CLOCKCYCLES(5,0x8003D5F8);
	goto ZZ_3D5F8;
ZZ_17CE8_40:
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 + 2712); //+ 0xA98
	S3 = 0x80060000;
	S3 += 2700;
	V1 = -S0;
	S1 = 0x1000;
	EMU_Write16(S3 - 160,V0); //+ 0xFFFFFF60
	AT = 0x80060000;
	EMU_Write16(AT + 2542,V1); //+ 0x9EE
	AT = 0x80060000;
	EMU_Write16(AT + 2544,R0); //+ 0x9F0
	AT = 0x80060000;
	EMU_Write16(AT + 2546,S0); //+ 0x9F2
	AT = 0x80060000;
	EMU_Write16(AT + 2548,V0); //+ 0x9F4
	AT = 0x80060000;
	EMU_Write16(AT + 2550,R0); //+ 0x9F6
	AT = 0x80060000;
	EMU_Write16(AT + 2552,R0); //+ 0x9F8
	AT = 0x80060000;
	EMU_Write16(AT + 2554,R0); //+ 0x9FA
	AT = 0x80060000;
	EMU_Write16(AT + 2556,S1); //+ 0x9FC
	RA = 0x80017D8C; //ZZ_17CE8_A4
	A0 = -A0;
	ZZ_CLOCKCYCLES(25,0x8003D584);
	goto ZZ_3D584;
ZZ_17CE8_A4:
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 + 2712); //+ 0xA98
	S0 = V0;
	RA = 0x80017DA0; //ZZ_17CE8_B8
	A0 = -A0;
	ZZ_CLOCKCYCLES(5,0x8003D5F8);
	goto ZZ_3D5F8;
ZZ_17CE8_B8:
	S2 = S3 - 160;
	A0 = S2;
	A1 = SP + 32;
	V1 = -S0;
	EMU_Write16(SP + 32,S1); //+ 0x20
	EMU_Write16(SP + 34,R0); //+ 0x22
	EMU_Write16(SP + 36,R0); //+ 0x24
	EMU_Write16(SP + 38,R0); //+ 0x26
	EMU_Write16(SP + 40,V0); //+ 0x28
	EMU_Write16(SP + 42,V1); //+ 0x2A
	EMU_Write16(SP + 44,R0); //+ 0x2C
	EMU_Write16(SP + 46,S0); //+ 0x2E
	RA = 0x80017DD8; //ZZ_17CE8_F0
	EMU_Write16(SP + 48,V0); //+ 0x30
	ZZ_CLOCKCYCLES(14,0x8004EF50);
	goto ZZ_4EF50;
ZZ_17CE8_F0:
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 + 2716); //+ 0xA9C
	RA = 0x80017DE8; //ZZ_17CE8_100
	A0 = -A0;
	ZZ_CLOCKCYCLES(4,0x8003D584);
	goto ZZ_3D584;
ZZ_17CE8_100:
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 + 2716); //+ 0xA9C
	S0 = V0;
	RA = 0x80017DFC; //ZZ_17CE8_114
	A0 = -A0;
	ZZ_CLOCKCYCLES(5,0x8003D5F8);
	goto ZZ_3D5F8;
ZZ_17CE8_114:
	A0 = S2;
	A1 = SP + 32;
	V1 = S0;
	S0 = -S0;
	EMU_Write16(SP + 32,V0); //+ 0x20
	EMU_Write16(SP + 34,R0); //+ 0x22
	EMU_Write16(SP + 36,V1); //+ 0x24
	EMU_Write16(SP + 38,R0); //+ 0x26
	EMU_Write16(SP + 40,S1); //+ 0x28
	EMU_Write16(SP + 42,R0); //+ 0x2A
	EMU_Write16(SP + 44,S0); //+ 0x2C
	EMU_Write16(SP + 46,R0); //+ 0x2E
	RA = 0x80017E34; //ZZ_17CE8_14C
	EMU_Write16(SP + 48,V0); //+ 0x30
	ZZ_CLOCKCYCLES(14,0x8004EF50);
	goto ZZ_4EF50;
ZZ_17CE8_14C:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 2916); //+ 0xB64
	V0 = EMU_ReadU32(V0 + 16); //+ 0x10
	A0 = EMU_ReadU8(V0 + 692); //+ 0x2B4
	A1 = EMU_ReadU8(V0 + 693); //+ 0x2B5
	A2 = EMU_ReadU8(V0 + 694); //+ 0x2B6
	RA = 0x80017E5C; //ZZ_17CE8_174
	ZZ_CLOCKCYCLES(10,0x8004F260);
	goto ZZ_4F260;
ZZ_17CE8_174:
	V0 = EMU_ReadU32(S3);
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 + 2704); //+ 0xA90
	A2 = 0x80060000;
	A2 = EMU_ReadU32(A2 + 2708); //+ 0xA94
	A0 = S2;
	A1 = SP + 64;
	V0 = (int32_t)V0 >> 8;
	V1 = (int32_t)V1 >> 8;
	A2 = (int32_t)A2 >> 8;
	EMU_Write32(SP + 64,V0); //+ 0x40
	EMU_Write32(SP + 68,V1); //+ 0x44
	RA = 0x80017E94; //ZZ_17CE8_1AC
	EMU_Write32(SP + 72,A2); //+ 0x48
	ZZ_CLOCKCYCLES(14,0x8004F060);
	goto ZZ_4F060;
ZZ_17CE8_1AC:
	A0 = S3 - 128;
	RA = 0x80017EA0; //ZZ_17CE8_1B8
	A1 = S2;
	ZZ_CLOCKCYCLES(3,0x80017C1C);
	goto ZZ_17C1C;
ZZ_17CE8_1B8:
	A1 = 0x80060000;
	A1 += 2604;
	V0 = EMU_ReadU32(S3 - 128); //+ 0xFFFFFF80
	V1 = EMU_ReadU32(S3 - 124); //+ 0xFFFFFF84
	A0 = EMU_ReadU32(S3 - 120); //+ 0xFFFFFF88
	EMU_Write32(A1,V0);
	EMU_Write32(A1 + 4,V1); //+ 0x4
	EMU_Write32(A1 + 8,A0); //+ 0x8
	V0 = EMU_ReadU32(S3 - 116); //+ 0xFFFFFF8C
	V1 = EMU_ReadU32(S3 - 112); //+ 0xFFFFFF90
	A0 = EMU_ReadU32(S3 - 108); //+ 0xFFFFFF94
	EMU_Write32(A1 + 12,V0); //+ 0xC
	EMU_Write32(A1 + 16,V1); //+ 0x10
	EMU_Write32(A1 + 20,A0); //+ 0x14
	V0 = EMU_ReadU32(S3 - 104); //+ 0xFFFFFF98
	V1 = EMU_ReadU32(S3 - 100); //+ 0xFFFFFF9C
	EMU_Write32(A1 + 24,V0); //+ 0x18
	EMU_Write32(A1 + 28,V1); //+ 0x1C
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 2916); //+ 0xB64
	V0 = EMU_ReadU32(V0 + 16); //+ 0x10
	V0 = EMU_ReadU32(V0 + 668); //+ 0x29C
	V0 &= 0x1000;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(28,0x80017FF0);
		goto ZZ_17CE8_308;
	}
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 3036); //+ 0xBDC
	if ((int32_t)V0 >= 0)
	{
		V1 = V0;
		ZZ_CLOCKCYCLES(33,0x80017F28);
		goto ZZ_17CE8_240;
	}
	V1 = V0;
	V1 = V0 + 127;
	ZZ_CLOCKCYCLES(34,0x80017F28);
ZZ_17CE8_240:
	V1 = (int32_t)V1 >> 7;
	V1 <<= 7;
	V1 = V0 - V1;
	V1 -= 64;
	V0 = V1 << 1;
	V0 += V1;
	V0 <<= 3;
	V0 += V1;
	V1 = V0 << 5;
	if ((int32_t)V1 < 0)
	{
		V0 = 0xD0000;
		ZZ_CLOCKCYCLES(11,0x80017F6C);
		goto ZZ_17CE8_284;
	}
	V0 = 0xD0000;
	V0 |= 0xC1E0;
	V0 += V1;
	AT = 0x80060000;
	EMU_Write32(AT + 2776,V0); //+ 0xAD8
	ZZ_CLOCKCYCLES(17,0x80017F78);
	goto ZZ_17CE8_290;
ZZ_17CE8_284:
	V0 |= 0xC1E0;
	V0 = V0 - V1;
	EMU_Write32(S3 + 76,V0); //+ 0x4C
	ZZ_CLOCKCYCLES(3,0x80017F78);
ZZ_17CE8_290:
	RA = 0x80017F80; //ZZ_17CE8_298
	A0 = 0x7D;
	ZZ_CLOCKCYCLES(2,0x8003D584);
	goto ZZ_3D584;
ZZ_17CE8_298:
	A0 = 0x7D;
	RA = 0x80017F8C; //ZZ_17CE8_2A4
	S0 = V0;
	ZZ_CLOCKCYCLES(3,0x8003D5F8);
	goto ZZ_3D5F8;
ZZ_17CE8_2A4:
	A1 = 0x80060000;
	A1 += 2636;
	V1 = 0x1000;
	EMU_Write16(A1,V1);
	V1 = -S0;
	AT = 0x80060000;
	EMU_Write16(AT + 2638,R0); //+ 0xA4E
	AT = 0x80060000;
	EMU_Write16(AT + 2640,R0); //+ 0xA50
	AT = 0x80060000;
	EMU_Write16(AT + 2642,R0); //+ 0xA52
	AT = 0x80060000;
	EMU_Write16(AT + 2644,V0); //+ 0xA54
	AT = 0x80060000;
	EMU_Write16(AT + 2646,V1); //+ 0xA56
	AT = 0x80060000;
	EMU_Write16(AT + 2648,R0); //+ 0xA58
	AT = 0x80060000;
	EMU_Write16(AT + 2650,S0); //+ 0xA5A
	AT = 0x80060000;
	EMU_Write16(AT + 2652,V0); //+ 0xA5C
	RA = 0x80017FE8; //ZZ_17CE8_300
	A0 = A1 + 32;
	ZZ_CLOCKCYCLES(23,0x80017C1C);
	goto ZZ_17C1C;
ZZ_17CE8_300:
	ZZ_CLOCKCYCLES(2,0x80018070);
	goto ZZ_17CE8_388;
ZZ_17CE8_308:
	V0 = EMU_ReadU32(S3 - 160); //+ 0xFFFFFF60
	V1 = EMU_ReadU32(S3 - 156); //+ 0xFFFFFF64
	A0 = EMU_ReadU32(S3 - 152); //+ 0xFFFFFF68
	A1 = EMU_ReadU32(S3 - 148); //+ 0xFFFFFF6C
	EMU_Write32(S3 - 64,V0); //+ 0xFFFFFFC0
	EMU_Write32(S3 - 60,V1); //+ 0xFFFFFFC4
	EMU_Write32(S3 - 56,A0); //+ 0xFFFFFFC8
	EMU_Write32(S3 - 52,A1); //+ 0xFFFFFFCC
	V0 = EMU_ReadU32(S3 - 144); //+ 0xFFFFFF70
	V1 = EMU_ReadU32(S3 - 140); //+ 0xFFFFFF74
	A0 = EMU_ReadU32(S3 - 136); //+ 0xFFFFFF78
	A1 = EMU_ReadU32(S3 - 132); //+ 0xFFFFFF7C
	EMU_Write32(S3 - 48,V0); //+ 0xFFFFFFD0
	EMU_Write32(S3 - 44,V1); //+ 0xFFFFFFD4
	EMU_Write32(S3 - 40,A0); //+ 0xFFFFFFD8
	EMU_Write32(S3 - 36,A1); //+ 0xFFFFFFDC
	V0 = EMU_ReadU32(S3 - 128); //+ 0xFFFFFF80
	V1 = EMU_ReadU32(S3 - 124); //+ 0xFFFFFF84
	A0 = EMU_ReadU32(S3 - 120); //+ 0xFFFFFF88
	A1 = EMU_ReadU32(S3 - 116); //+ 0xFFFFFF8C
	EMU_Write32(S3 - 32,V0); //+ 0xFFFFFFE0
	EMU_Write32(S3 - 28,V1); //+ 0xFFFFFFE4
	EMU_Write32(S3 - 24,A0); //+ 0xFFFFFFE8
	EMU_Write32(S3 - 20,A1); //+ 0xFFFFFFEC
	V0 = EMU_ReadU32(S3 - 112); //+ 0xFFFFFF90
	V1 = EMU_ReadU32(S3 - 108); //+ 0xFFFFFF94
	A0 = EMU_ReadU32(S3 - 104); //+ 0xFFFFFF98
	A1 = EMU_ReadU32(S3 - 100); //+ 0xFFFFFF9C
	EMU_Write32(S3 - 16,V0); //+ 0xFFFFFFF0
	EMU_Write32(S3 - 12,V1); //+ 0xFFFFFFF4
	EMU_Write32(S3 - 8,A0); //+ 0xFFFFFFF8
	EMU_Write32(S3 - 4,A1); //+ 0xFFFFFFFC
	ZZ_CLOCKCYCLES(32,0x80018070);
ZZ_17CE8_388:
	A0 = 0x80070000;
	A0 = EMU_ReadU32(A0 - 12616); //+ 0xFFFFCEB8
	V0 = 0x80070000;
	V0 = EMU_ReadU32(V0 - 12784); //+ 0xFFFFCE10
	A1 = 0x80070000;
	A1 = EMU_ReadU32(A1 - 12612); //+ 0xFFFFCEBC
	A0 += 256;
	V0 = (int32_t)V0 >> 8;
	A1 += V0;
	RA = 0x8001809C; //ZZ_17CE8_3B4
	A1 += 128;
	ZZ_CLOCKCYCLES(11,0x8004F280);
	goto ZZ_4F280;
ZZ_17CE8_3B4:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 3048); //+ 0xFFFFF418
	if (V0)
	{
		ZZ_CLOCKCYCLES(5,0x800180FC);
		goto ZZ_17CE8_414;
	}
	V0 = 0x80070000;
	V0 = EMU_ReadU32(V0 - 12784); //+ 0xFFFFCE10
	V0 = (int32_t)V0 >> 8;
	if (V0)
	{
		ZZ_CLOCKCYCLES(11,0x800180D8);
		goto ZZ_17CE8_3F0;
	}
	AT = 0x80070000;
	EMU_Write32(AT - 12784,R0); //+ 0xFFFFCE10
	ZZ_CLOCKCYCLES(15,0x800180FC);
	goto ZZ_17CE8_414;
ZZ_17CE8_3F0:
	if ((int32_t)V0 <= 0)
	{
		ZZ_CLOCKCYCLES(2,0x800180EC);
		goto ZZ_17CE8_404;
	}
	V0 = -V0;
	V0 += 1;
	ZZ_CLOCKCYCLES(5,0x800180F0);
	goto ZZ_17CE8_408;
ZZ_17CE8_404:
	V0 = ~V0;
	ZZ_CLOCKCYCLES(1,0x800180F0);
ZZ_17CE8_408:
	V0 <<= 8;
	AT = 0x80070000;
	EMU_Write32(AT - 12784,V0); //+ 0xFFFFCE10
	ZZ_CLOCKCYCLES(3,0x800180FC);
ZZ_17CE8_414:
	T1 = 0x80060000;
	T1 += 2700;
	V0 = EMU_ReadU32(T1);
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 + 2704); //+ 0xA90
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 + 2708); //+ 0xA94
	A1 = 0x80060000;
	A1 = EMU_ReadU32(A1 + 2712); //+ 0xA98
	A2 = 0x80060000;
	A2 = EMU_ReadU32(A2 + 2716); //+ 0xA9C
	A3 = 0x80060000;
	A3 = EMU_ReadU32(A3 + 2720); //+ 0xAA0
	T0 = 0x80060000;
	T0 = EMU_ReadU32(T0 + 2916); //+ 0xB64
	AT = 0x80070000;
	EMU_Write32(AT - 12644,V0); //+ 0xFFFFCE9C
	AT = 0x80070000;
	EMU_Write32(AT - 12640,V1); //+ 0xFFFFCEA0
	AT = 0x80070000;
	EMU_Write32(AT - 12636,A0); //+ 0xFFFFCEA4
	AT = 0x80070000;
	EMU_Write32(AT - 12632,A1); //+ 0xFFFFCEA8
	AT = 0x80070000;
	EMU_Write32(AT - 12628,A2); //+ 0xFFFFCEAC
	AT = 0x80070000;
	EMU_Write32(AT - 12624,A3); //+ 0xFFFFCEB0
	V0 = EMU_ReadU32(T0 + 16); //+ 0x10
	V0 = EMU_ReadU32(V0 + 668); //+ 0x29C
	V0 &= 0x1000;
	if (V0)
	{
		A2 = R0;
		ZZ_CLOCKCYCLES(34,0x80018208);
		goto ZZ_17CE8_520;
	}
	A2 = R0;
	A1 = 0x80060000;
	A1 += 2772;
	V0 = EMU_ReadU32(T1);
	V1 = EMU_ReadU32(T1 + 4); //+ 0x4
	A0 = EMU_ReadU32(T1 + 8); //+ 0x8
	EMU_Write32(A1,V0);
	EMU_Write32(A1 + 4,V1); //+ 0x4
	EMU_Write32(A1 + 8,A0); //+ 0x8
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 + 2924); //+ 0xB6C
	A1 = 0x29;
	V0 = 0x2;
	A3 = R0;
	EMU_Write32(SP + 16,R0); //+ 0x10
	EMU_Write32(SP + 20,V0); //+ 0x14
	RA = 0x800181C8; //ZZ_17CE8_4E0
	EMU_Write32(SP + 24,R0); //+ 0x18
	ZZ_CLOCKCYCLES(51,0x800324E0);
	goto ZZ_324E0;
ZZ_17CE8_4E0:
	V1 = 0x4;
	if (V0 == V1)
	{
		ZZ_CLOCKCYCLES(3,0x800181EC);
		goto ZZ_17CE8_504;
	}
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 2752); //+ 0xAC0
	V0 &= 0xFFF;
	AT = 0x80060000;
	EMU_Write32(AT + 2988,V0); //+ 0xBAC
	ZZ_CLOCKCYCLES(9,0x800181EC);
ZZ_17CE8_504:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 30772); //+ 0x7834
	V1 = EMU_ReadU32(V0 + 8); //+ 0x8
	V0 = 0x3;
	if (V1 != V0)
	{
		ZZ_CLOCKCYCLES(7,0x80018210);
		goto ZZ_17CE8_528;
	}
	ZZ_CLOCKCYCLES(7,0x80018208);
ZZ_17CE8_520:
	AT = 0x80060000;
	EMU_Write32(AT + 2988,R0); //+ 0xBAC
	ZZ_CLOCKCYCLES(2,0x80018210);
ZZ_17CE8_528:
	S0 = 0x80060000;
	S0 += 2988;
	A0 = EMU_ReadU32(S0);
	AT = 0x80070000;
	EMU_Write32(AT - 12732,A0); //+ 0xFFFFCE44
	RA = 0x8001822C; //ZZ_17CE8_544
	ZZ_CLOCKCYCLES(7,0x8003D584);
	goto ZZ_3D584;
ZZ_17CE8_544:
	A0 = EMU_ReadU32(S0);
	V0 = (int32_t)V0 >> 4;
	AT = 0x80060000;
	EMU_Write32(AT + 3016,V0); //+ 0xBC8
	AT = 0x80060000;
	EMU_Write32(AT + 3020,R0); //+ 0xBCC
	RA = 0x8001824C; //ZZ_17CE8_564
	ZZ_CLOCKCYCLES(8,0x8003D5F8);
	goto ZZ_3D5F8;
ZZ_17CE8_564:
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 + 2916); //+ 0xB64
	V0 = (int32_t)V0 >> 4;
	AT = 0x80060000;
	EMU_Write32(AT + 3024,V0); //+ 0xBD0
	A0 = EMU_ReadU32(V1 + 16); //+ 0x10
	RA = 0x8001826C; //ZZ_17CE8_584
	ZZ_CLOCKCYCLES(8,0x800183B8);
	goto ZZ_183B8;
ZZ_17CE8_584:
	RA = EMU_ReadU32(SP + 96); //+ 0x60
	S3 = EMU_ReadU32(SP + 92); //+ 0x5C
	S2 = EMU_ReadU32(SP + 88); //+ 0x58
	S1 = EMU_ReadU32(SP + 84); //+ 0x54
	S0 = EMU_ReadU32(SP + 80); //+ 0x50
	SP += 104;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(8);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80017CE8,0x80017D04,ZZ_17CE8);
ZZ_MARK_TARGET(0x80017D04,0x80017D14,ZZ_17CE8_1C);
ZZ_MARK_TARGET(0x80017D14,0x80017D28,ZZ_17CE8_2C);
ZZ_MARK_TARGET(0x80017D28,0x80017D8C,ZZ_17CE8_40);
ZZ_MARK_TARGET(0x80017D8C,0x80017DA0,ZZ_17CE8_A4);
ZZ_MARK_TARGET(0x80017DA0,0x80017DD8,ZZ_17CE8_B8);
ZZ_MARK_TARGET(0x80017DD8,0x80017DE8,ZZ_17CE8_F0);
ZZ_MARK_TARGET(0x80017DE8,0x80017DFC,ZZ_17CE8_100);
ZZ_MARK_TARGET(0x80017DFC,0x80017E34,ZZ_17CE8_114);
ZZ_MARK_TARGET(0x80017E34,0x80017E5C,ZZ_17CE8_14C);
ZZ_MARK_TARGET(0x80017E5C,0x80017E94,ZZ_17CE8_174);
ZZ_MARK_TARGET(0x80017E94,0x80017EA0,ZZ_17CE8_1AC);
ZZ_MARK_TARGET(0x80017EA0,0x80017F28,ZZ_17CE8_1B8);
ZZ_MARK_TARGET(0x80017F28,0x80017F6C,ZZ_17CE8_240);
ZZ_MARK_TARGET(0x80017F6C,0x80017F78,ZZ_17CE8_284);
ZZ_MARK_TARGET(0x80017F78,0x80017F80,ZZ_17CE8_290);
ZZ_MARK_TARGET(0x80017F80,0x80017F8C,ZZ_17CE8_298);
ZZ_MARK_TARGET(0x80017F8C,0x80017FE8,ZZ_17CE8_2A4);
ZZ_MARK_TARGET(0x80017FE8,0x80017FF0,ZZ_17CE8_300);
ZZ_MARK_TARGET(0x80017FF0,0x80018070,ZZ_17CE8_308);
ZZ_MARK_TARGET(0x80018070,0x8001809C,ZZ_17CE8_388);
ZZ_MARK_TARGET(0x8001809C,0x800180D8,ZZ_17CE8_3B4);
ZZ_MARK_TARGET(0x800180D8,0x800180EC,ZZ_17CE8_3F0);
ZZ_MARK_TARGET(0x800180EC,0x800180F0,ZZ_17CE8_404);
ZZ_MARK_TARGET(0x800180F0,0x800180FC,ZZ_17CE8_408);
ZZ_MARK_TARGET(0x800180FC,0x800181C8,ZZ_17CE8_414);
ZZ_MARK_TARGET(0x800181C8,0x800181EC,ZZ_17CE8_4E0);
ZZ_MARK_TARGET(0x800181EC,0x80018208,ZZ_17CE8_504);
ZZ_MARK_TARGET(0x80018208,0x80018210,ZZ_17CE8_520);
ZZ_MARK_TARGET(0x80018210,0x8001822C,ZZ_17CE8_528);
ZZ_MARK_TARGET(0x8001822C,0x8001824C,ZZ_17CE8_544);
ZZ_MARK_TARGET(0x8001824C,0x8001826C,ZZ_17CE8_564);
ZZ_MARK_TARGET(0x8001826C,0x8001828C,ZZ_17CE8_584);
