#ifdef ZZ_INCLUDE_CODE
ZZ_4FEE0:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 5492); //+ 0xFFFFEA8C
	if (!V0)
	{
		A2 = A0;
		ZZ_CLOCKCYCLES(5,0x8004FF30);
		goto ZZ_4FEE0_50;
	}
	A2 = A0;
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 - 5484); //+ 0xFFFFEA94
	EMU_UDivide(A1,A0);
	if (A0)
	{
		ZZ_CLOCKCYCLES(11,0x8004FF10);
		goto ZZ_4FEE0_30;
	}
	EMU_Break(7168);
	ZZ_CLOCKCYCLES(12,0x8004FF10);
ZZ_4FEE0_30:
	V0 = HI;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(3,0x8004FF30);
		goto ZZ_4FEE0_50;
	}
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 5480); //+ 0xFFFFEA98
	A1 += A0;
	V0 = ~V0;
	A1 &= V0;
	ZZ_CLOCKCYCLES(8,0x8004FF30);
ZZ_4FEE0_50:
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 - 5488); //+ 0xFFFFEA90
	A3 = A1 >> V0;
	V0 = -2;
	if (A2 == V0)
	{
		V1 = A3;
		ZZ_CLOCKCYCLES(7,0x8004FF60);
		goto ZZ_4FEE0_80;
	}
	V1 = A3;
	V0 = -1;
	if (A2 != V0)
	{
		V0 = A1;
		ZZ_CLOCKCYCLES(10,0x8004FF68);
		goto ZZ_4FEE0_88;
	}
	V0 = A1;
	V0 = V1 & 0xFFFF;
	ZZ_CLOCKCYCLES(12,0x8004FF7C);
	goto ZZ_4FEE0_9C;
ZZ_4FEE0_80:
	V0 = A1;
	ZZ_CLOCKCYCLES(2,0x8004FF7C);
	goto ZZ_4FEE0_9C;
ZZ_4FEE0_88:
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 - 5528); //+ 0xFFFFEA68
	V1 = A2 << 1;
	V1 += A0;
	EMU_Write16(V1,A3);
	ZZ_CLOCKCYCLES(5,0x8004FF7C);
ZZ_4FEE0_9C:
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(2);
	ZZ_JUMPREGISTER(0x80051E04,ZZ_51B50_2B4);
	ZZ_JUMPREGISTER(0x80051E24,ZZ_51B50_2D4);
	ZZ_JUMPREGISTER(0x80051558,ZZ_51530_28);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8004FEE0,ZZ_4FEE0);
ZZ_MARK(0x8004FEE4);
ZZ_MARK(0x8004FEE8);
ZZ_MARK(0x8004FEEC);
ZZ_MARK(0x8004FEF0);
ZZ_MARK(0x8004FEF4);
ZZ_MARK(0x8004FEF8);
ZZ_MARK(0x8004FEFC);
ZZ_MARK(0x8004FF00);
ZZ_MARK(0x8004FF04);
ZZ_MARK(0x8004FF08);
ZZ_MARK(0x8004FF0C);
ZZ_MARK_TARGET(0x8004FF10,ZZ_4FEE0_30);
ZZ_MARK(0x8004FF14);
ZZ_MARK(0x8004FF18);
ZZ_MARK(0x8004FF1C);
ZZ_MARK(0x8004FF20);
ZZ_MARK(0x8004FF24);
ZZ_MARK(0x8004FF28);
ZZ_MARK(0x8004FF2C);
ZZ_MARK_TARGET(0x8004FF30,ZZ_4FEE0_50);
ZZ_MARK(0x8004FF34);
ZZ_MARK(0x8004FF38);
ZZ_MARK(0x8004FF3C);
ZZ_MARK(0x8004FF40);
ZZ_MARK(0x8004FF44);
ZZ_MARK(0x8004FF48);
ZZ_MARK(0x8004FF4C);
ZZ_MARK(0x8004FF50);
ZZ_MARK(0x8004FF54);
ZZ_MARK(0x8004FF58);
ZZ_MARK(0x8004FF5C);
ZZ_MARK_TARGET(0x8004FF60,ZZ_4FEE0_80);
ZZ_MARK(0x8004FF64);
ZZ_MARK_TARGET(0x8004FF68,ZZ_4FEE0_88);
ZZ_MARK(0x8004FF6C);
ZZ_MARK(0x8004FF70);
ZZ_MARK(0x8004FF74);
ZZ_MARK(0x8004FF78);
ZZ_MARK_TARGET(0x8004FF7C,ZZ_4FEE0_9C);
ZZ_MARK(0x8004FF80);