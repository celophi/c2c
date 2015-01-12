#ifdef ZZ_INCLUDE_CODE
ZZ_370C8:
	V0 = A1 & 0x800;
	if (!V0)
	{
		SP -= 16;
		ZZ_CLOCKCYCLES(3,0x80037208);
		goto ZZ_370C8_140;
	}
	SP -= 16;
	V0 = A1 & 0x400;
	if (!V0)
	{
		V0 = A1 & 0x200;
		ZZ_CLOCKCYCLES(6,0x8003716C);
		goto ZZ_370C8_A4;
	}
	V0 = A1 & 0x200;
	if (!V0)
	{
		V1 = A1 & 0x1FF;
		ZZ_CLOCKCYCLES(8,0x80037140);
		goto ZZ_370C8_78;
	}
	V1 = A1 & 0x1FF;
	V0 = 0x1F;
	if (V1 != V0)
	{
		A1 = V1;
		ZZ_CLOCKCYCLES(11,0x8003712C);
		goto ZZ_370C8_64;
	}
	A1 = V1;
	if (A2)
	{
		ZZ_CLOCKCYCLES(13,0x80037114);
		goto ZZ_370C8_4C;
	}
	V0 = EMU_ReadU32(A0 + 188); //+ 0xBC
	V0 -= 4;
	V1 = V0;
	EMU_Write32(A0 + 188,V1); //+ 0xBC
	ZZ_CLOCKCYCLES(19,0x80037138);
	goto ZZ_370C8_70;
ZZ_370C8_4C:
	V0 = EMU_ReadU32(A0 + 188); //+ 0xBC
	V1 = V0;
	V0 = V1 + 4;
	EMU_Write32(A0 + 188,V0); //+ 0xBC
	ZZ_CLOCKCYCLES(6,0x80037138);
	goto ZZ_370C8_70;
ZZ_370C8_64:
	V0 = A1 << 2;
	V0 += 64;
	V1 = A0 + V0;
	ZZ_CLOCKCYCLES(3,0x80037138);
ZZ_370C8_70:
	V0 = V1;
	ZZ_CLOCKCYCLES(2,0x80037238);
	goto ZZ_370C8_170;
ZZ_370C8_78:
	V0 = A1 >> 4;
	V0 &= 0x1C;
	V0 += A0;
	V1 = EMU_ReadU32(V0 + 64); //+ 0x40
	if (!V1)
	{
		V0 = A1 & 0x3F;
		ZZ_CLOCKCYCLES(7,0x80037190);
		goto ZZ_370C8_C8;
	}
	V0 = A1 & 0x3F;
	V0 <<= 2;
	V0 += 64;
	V0 += V1;
	ZZ_CLOCKCYCLES(11,0x80037238);
	goto ZZ_370C8_170;
ZZ_370C8_A4:
	if (!V0)
	{
		V0 = A1 & 0x100;
		ZZ_CLOCKCYCLES(2,0x800371E0);
		goto ZZ_370C8_118;
	}
	V0 = A1 & 0x100;
	if (!V0)
	{
		V0 = A1 & 0x80;
		ZZ_CLOCKCYCLES(4,0x800371B8);
		goto ZZ_370C8_F0;
	}
	V0 = A1 & 0x80;
	if (!V0)
	{
		V0 = A1 << 25;
		ZZ_CLOCKCYCLES(6,0x800371A8);
		goto ZZ_370C8_E0;
	}
	V0 = A1 << 25;
	V0 = 0xBE0;
	if (A1 != V0)
	{
		V0 = 0xBF0;
		ZZ_CLOCKCYCLES(9,0x80037198);
		goto ZZ_370C8_D0;
	}
	V0 = 0xBF0;
	ZZ_CLOCKCYCLES(9,0x80037190);
ZZ_370C8_C8:
	V0 = R0;
	ZZ_CLOCKCYCLES(2,0x80037238);
	goto ZZ_370C8_170;
ZZ_370C8_D0:
	if (A1 != V0)
	{
		ZZ_CLOCKCYCLES(2,0x80037238);
		goto ZZ_370C8_170;
	}
	V0 = 0x1;
	ZZ_CLOCKCYCLES(4,0x80037238);
	goto ZZ_370C8_170;
ZZ_370C8_E0:
	V1 = EMU_ReadU32(A0 + 196); //+ 0xC4
	V0 = (int32_t)V0 >> 23;
	V0 += V1;
	ZZ_CLOCKCYCLES(4,0x80037238);
	goto ZZ_370C8_170;
ZZ_370C8_F0:
	V1 = EMU_ReadU32(GP + 284); //+ 0x11C
	A0 = EMU_ReadU32(GP + 280); //+ 0x118
	V1 = V1 < 1;
	V0 = V1 << 2;
	V0 += A0;
	EMU_Write32(GP + 284,V1); //+ 0x11C
	V1 = A1 << 24;
	V1 = (int32_t)V1 >> 20;
	EMU_Write32(V0,V1);
	ZZ_CLOCKCYCLES(10,0x80037238);
	goto ZZ_370C8_170;
ZZ_370C8_118:
	V1 = EMU_ReadU32(GP + 284); //+ 0x11C
	A0 = EMU_ReadU32(GP + 280); //+ 0x118
	V1 = V1 < 1;
	V0 = V1 << 2;
	V0 += A0;
	EMU_Write32(GP + 284,V1); //+ 0x11C
	V1 = A1 << 23;
	V1 = (int32_t)V1 >> 15;
	EMU_Write32(V0,V1);
	ZZ_CLOCKCYCLES(10,0x80037238);
	goto ZZ_370C8_170;
ZZ_370C8_140:
	V0 = A1 & 0x400;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(3,0x80037220);
		goto ZZ_370C8_158;
	}
	V0 = EMU_ReadU32(A0 + 20); //+ 0x14
	ZZ_CLOCKCYCLES(6,0x80037224);
	goto ZZ_370C8_15C;
ZZ_370C8_158:
	V0 = EMU_ReadU32(A0 + 16); //+ 0x10
	ZZ_CLOCKCYCLES(1,0x80037224);
ZZ_370C8_15C:
	V1 = EMU_ReadU32(V0 + 24); //+ 0x18
	V0 = A1 & 0x3FF;
	V0 <<= 2;
	V0 += V1;
	ZZ_CLOCKCYCLES(5,0x80037238);
ZZ_370C8_170:
	SP += 16;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(3);
	ZZ_JUMPREGISTER(0x800391C0,ZZ_39198_28);
	ZZ_JUMPREGISTER(0x800391D4,ZZ_39198_3C);
	ZZ_JUMPREGISTER(0x800389DC,ZZ_38998_44);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x800370C8,ZZ_370C8);
ZZ_MARK(0x800370CC);
ZZ_MARK(0x800370D0);
ZZ_MARK(0x800370D4);
ZZ_MARK(0x800370D8);
ZZ_MARK(0x800370DC);
ZZ_MARK(0x800370E0);
ZZ_MARK(0x800370E4);
ZZ_MARK(0x800370E8);
ZZ_MARK(0x800370EC);
ZZ_MARK(0x800370F0);
ZZ_MARK(0x800370F4);
ZZ_MARK(0x800370F8);
ZZ_MARK(0x800370FC);
ZZ_MARK(0x80037100);
ZZ_MARK(0x80037104);
ZZ_MARK(0x80037108);
ZZ_MARK(0x8003710C);
ZZ_MARK(0x80037110);
ZZ_MARK_TARGET(0x80037114,ZZ_370C8_4C);
ZZ_MARK(0x80037118);
ZZ_MARK(0x8003711C);
ZZ_MARK(0x80037120);
ZZ_MARK(0x80037124);
ZZ_MARK(0x80037128);
ZZ_MARK_TARGET(0x8003712C,ZZ_370C8_64);
ZZ_MARK(0x80037130);
ZZ_MARK(0x80037134);
ZZ_MARK_TARGET(0x80037138,ZZ_370C8_70);
ZZ_MARK(0x8003713C);
ZZ_MARK_TARGET(0x80037140,ZZ_370C8_78);
ZZ_MARK(0x80037144);
ZZ_MARK(0x80037148);
ZZ_MARK(0x8003714C);
ZZ_MARK(0x80037150);
ZZ_MARK(0x80037154);
ZZ_MARK(0x80037158);
ZZ_MARK(0x8003715C);
ZZ_MARK(0x80037160);
ZZ_MARK(0x80037164);
ZZ_MARK(0x80037168);
ZZ_MARK_TARGET(0x8003716C,ZZ_370C8_A4);
ZZ_MARK(0x80037170);
ZZ_MARK(0x80037174);
ZZ_MARK(0x80037178);
ZZ_MARK(0x8003717C);
ZZ_MARK(0x80037180);
ZZ_MARK(0x80037184);
ZZ_MARK(0x80037188);
ZZ_MARK(0x8003718C);
ZZ_MARK_TARGET(0x80037190,ZZ_370C8_C8);
ZZ_MARK(0x80037194);
ZZ_MARK_TARGET(0x80037198,ZZ_370C8_D0);
ZZ_MARK(0x8003719C);
ZZ_MARK(0x800371A0);
ZZ_MARK(0x800371A4);
ZZ_MARK_TARGET(0x800371A8,ZZ_370C8_E0);
ZZ_MARK(0x800371AC);
ZZ_MARK(0x800371B0);
ZZ_MARK(0x800371B4);
ZZ_MARK_TARGET(0x800371B8,ZZ_370C8_F0);
ZZ_MARK(0x800371BC);
ZZ_MARK(0x800371C0);
ZZ_MARK(0x800371C4);
ZZ_MARK(0x800371C8);
ZZ_MARK(0x800371CC);
ZZ_MARK(0x800371D0);
ZZ_MARK(0x800371D4);
ZZ_MARK(0x800371D8);
ZZ_MARK(0x800371DC);
ZZ_MARK_TARGET(0x800371E0,ZZ_370C8_118);
ZZ_MARK(0x800371E4);
ZZ_MARK(0x800371E8);
ZZ_MARK(0x800371EC);
ZZ_MARK(0x800371F0);
ZZ_MARK(0x800371F4);
ZZ_MARK(0x800371F8);
ZZ_MARK(0x800371FC);
ZZ_MARK(0x80037200);
ZZ_MARK(0x80037204);
ZZ_MARK_TARGET(0x80037208,ZZ_370C8_140);
ZZ_MARK(0x8003720C);
ZZ_MARK(0x80037210);
ZZ_MARK(0x80037214);
ZZ_MARK(0x80037218);
ZZ_MARK(0x8003721C);
ZZ_MARK_TARGET(0x80037220,ZZ_370C8_158);
ZZ_MARK_TARGET(0x80037224,ZZ_370C8_15C);
ZZ_MARK(0x80037228);
ZZ_MARK(0x8003722C);
ZZ_MARK(0x80037230);
ZZ_MARK(0x80037234);
ZZ_MARK_TARGET(0x80037238,ZZ_370C8_170);
ZZ_MARK(0x8003723C);
ZZ_MARK(0x80037240);