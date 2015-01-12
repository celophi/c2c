#ifdef ZZ_INCLUDE_CODE
ZZ_29728:
	SP -= 40;
	EMU_Write32(SP + 32,S0); //+ 0x20
	S0 = A0;
	EMU_Write32(SP + 36,RA); //+ 0x24
	A0 = EMU_ReadU32(S0 + 240); //+ 0xF0
	if (!A0)
	{
		A1 = 0xF2;
		ZZ_CLOCKCYCLES(8,0x80029798);
		goto ZZ_29728_70;
	}
	A1 = 0xF2;
	A2 = R0;
	V0 = 0x2;
	A3 = R0;
	EMU_Write32(SP + 16,R0); //+ 0x10
	EMU_Write32(SP + 20,V0); //+ 0x14
	RA = 0x80029764; //ZZ_29728_3C
	EMU_Write32(SP + 24,R0); //+ 0x18
	ZZ_CLOCKCYCLES(15,0x800324E0);
	goto ZZ_324E0;
ZZ_29728_3C:
	A0 = V0;
	V1 = A0 & 0xFFFF;
	V0 = 0xFFFF;
	if (V1 == V0)
	{
		V0 = A0 & 0x3F0;
		ZZ_CLOCKCYCLES(5,0x80029798);
		goto ZZ_29728_70;
	}
	V0 = A0 & 0x3F0;
	A1 = V0 >> 4;
	V0 = A1 - 48;
	V0 = V0 < 16;
	if (V0)
	{
		A0 = S0;
		ZZ_CLOCKCYCLES(10,0x80029790);
		goto ZZ_29728_68;
	}
	A0 = S0;
	A1 = -1;
	ZZ_CLOCKCYCLES(11,0x80029790);
ZZ_29728_68:
	RA = 0x80029798; //ZZ_29728_70
	A2 = R0;
	ZZ_CLOCKCYCLES(2,0x80028C38);
	goto ZZ_28C38;
ZZ_29728_70:
	RA = EMU_ReadU32(SP + 36); //+ 0x24
	S0 = EMU_ReadU32(SP + 32); //+ 0x20
	SP += 40;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(5);
	ZZ_JUMPREGISTER(0x80038D78,ZZ_38998_3E0);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80029728,ZZ_29728);
ZZ_MARK(0x8002972C);
ZZ_MARK(0x80029730);
ZZ_MARK(0x80029734);
ZZ_MARK(0x80029738);
ZZ_MARK(0x8002973C);
ZZ_MARK(0x80029740);
ZZ_MARK(0x80029744);
ZZ_MARK(0x80029748);
ZZ_MARK(0x8002974C);
ZZ_MARK(0x80029750);
ZZ_MARK(0x80029754);
ZZ_MARK(0x80029758);
ZZ_MARK(0x8002975C);
ZZ_MARK(0x80029760);
ZZ_MARK_TARGET(0x80029764,ZZ_29728_3C);
ZZ_MARK(0x80029768);
ZZ_MARK(0x8002976C);
ZZ_MARK(0x80029770);
ZZ_MARK(0x80029774);
ZZ_MARK(0x80029778);
ZZ_MARK(0x8002977C);
ZZ_MARK(0x80029780);
ZZ_MARK(0x80029784);
ZZ_MARK(0x80029788);
ZZ_MARK(0x8002978C);
ZZ_MARK_TARGET(0x80029790,ZZ_29728_68);
ZZ_MARK(0x80029794);
ZZ_MARK_TARGET(0x80029798,ZZ_29728_70);
ZZ_MARK(0x8002979C);
ZZ_MARK(0x800297A0);
ZZ_MARK(0x800297A4);
ZZ_MARK(0x800297A8);