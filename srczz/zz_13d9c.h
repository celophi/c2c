#ifdef ZZ_INCLUDE_CODE
ZZ_13D9C:
	SP -= 32;
	A1 = EMU_ReadU32(SP + 48); //+ 0x30
	EMU_Write32(SP + 16,S0); //+ 0x10
	S0 = A0;
	EMU_Write32(SP + 24,S2); //+ 0x18
	S2 = A2;
	EMU_Write32(SP + 20,S1); //+ 0x14
	S1 = A3;
	EMU_Write32(SP + 28,RA); //+ 0x1C
	RA = 0x80013DC8; //ZZ_13D9C_2C
	A0 = S1;
	ZZ_CLOCKCYCLES(11,0x800137CC);
	goto ZZ_137CC;
ZZ_13D9C_2C:
	V1 = V0;
	V0 = -1;
	if (V1 == V0)
	{
		V0 = -12;
		ZZ_CLOCKCYCLES(4,0x80013EF8);
		goto ZZ_13D9C_15C;
	}
	V0 = -12;
	A0 = EMU_ReadU32(S1);
	V0 = V1 + A0;
	V1 = V0 << 1;
	V1 += V0;
	V1 <<= 2;
	V1 = V1 - V0;
	V1 <<= 2;
	V0 = 0x80060000;
	V0 += 30752;
	if (!S0)
	{
		A3 = V1 + V0;
		ZZ_CLOCKCYCLES(16,0x80013EF4);
		goto ZZ_13D9C_158;
	}
	A3 = V1 + V0;
	A2 = A0 - 1;
	V1 = EMU_ReadU32(S0 + 20); //+ 0x14
	if ((int32_t)A2 < 0)
	{
		T0 = A3;
		ZZ_CLOCKCYCLES(20,0x80013EEC);
		goto ZZ_13D9C_150;
	}
	T0 = A3;
	A0 = (int32_t)V1 >> 1;
	T1 = 0x63960000;
	T1 |= 0x347F;
	T4 = 0x1;
	T3 = 0x2;
	T2 = 0xC;
	A1 = A3 + 20;
	ZZ_CLOCKCYCLES(27,0x80013E34);
ZZ_13D9C_98:
	V0 = 0x80070000;
	V0 = EMU_ReadU32(V0 - 32164); //+ 0xFFFF825C
	V1 = A0 + A2;
	V1 <<= 2;
	V1 += V0;
	S0 = EMU_ReadU32(V1);
	V0 = EMU_ReadU32(S0 + 20); //+ 0x14
	if (S2 == T1)
	{
		EMU_Write32(A1,V0);
		ZZ_CLOCKCYCLES(10,0x80013E64);
		goto ZZ_13D9C_C8;
	}
	EMU_Write32(A1,V0);
	EMU_Write32(A1 + 4,S2); //+ 0x4
	ZZ_CLOCKCYCLES(12,0x80013E70);
	goto ZZ_13D9C_D4;
ZZ_13D9C_C8:
	V0 = EMU_ReadU32(S0 + 24); //+ 0x18
	EMU_Write32(A1 + 4,V0); //+ 0x4
	ZZ_CLOCKCYCLES(3,0x80013E70);
ZZ_13D9C_D4:
	V0 = EMU_ReadU8(S0 + 15); //+ 0xF
	EMU_Write16(S0 + 4,T4); //+ 0x4
	EMU_Write8(A1 - 5,V0); //+ 0xFFFFFFFB
	V0 = EMU_ReadU8(S0 + 14); //+ 0xE
	EMU_Write8(S0 + 15,R0); //+ 0xF
	EMU_Write8(A1 - 6,V0); //+ 0xFFFFFFFA
	V0 = EMU_ReadU32(S0 + 40); //+ 0x28
	EMU_Write32(A1 + 20,V0); //+ 0x14
	V0 = EMU_ReadU32(S1);
	EMU_Write32(A1 + 16,T0); //+ 0x10
	EMU_Write32(A1 + 8,V0); //+ 0x8
	V0 = EMU_ReadU32(S1);
	V0 -= 1;
	if (A2 != V0)
	{
		ZZ_CLOCKCYCLES(17,0x80013EBC);
		goto ZZ_13D9C_120;
	}
	EMU_Write16(A1 - 16,T3); //+ 0xFFFFFFF0
	ZZ_CLOCKCYCLES(19,0x80013EC0);
	goto ZZ_13D9C_124;
ZZ_13D9C_120:
	EMU_Write16(A1 - 16,T2); //+ 0xFFFFFFF0
	ZZ_CLOCKCYCLES(1,0x80013EC0);
ZZ_13D9C_124:
	V0 = EMU_ReadU32(A1);
	A1 -= 44;
	V1 = 0x80070000;
	V1 = EMU_ReadU32(V1 - 32164); //+ 0xFFFF825C
	A2 -= 1;
	V0 = (int32_t)V0 >> 1;
	V0 <<= 2;
	V0 += V1;
	EMU_Write32(V0,A3);
	if ((int32_t)A2 >= 0)
	{
		A3 -= 44;
		ZZ_CLOCKCYCLES(11,0x80013E34);
		goto ZZ_13D9C_98;
	}
	A3 -= 44;
	ZZ_CLOCKCYCLES(11,0x80013EEC);
ZZ_13D9C_150:
	V0 = T0;
	ZZ_CLOCKCYCLES(2,0x80013EF8);
	goto ZZ_13D9C_15C;
ZZ_13D9C_158:
	V0 = A3;
	ZZ_CLOCKCYCLES(1,0x80013EF8);
ZZ_13D9C_15C:
	RA = EMU_ReadU32(SP + 28); //+ 0x1C
	S2 = EMU_ReadU32(SP + 24); //+ 0x18
	S1 = EMU_ReadU32(SP + 20); //+ 0x14
	S0 = EMU_ReadU32(SP + 16); //+ 0x10
	SP += 32;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(7);
	ZZ_JUMPREGISTER(0x80012E24,ZZ_12C88_19C);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80013D9C,0x80013DC8,ZZ_13D9C);
ZZ_MARK_TARGET(0x80013DC8,0x80013E34,ZZ_13D9C_2C);
ZZ_MARK_TARGET(0x80013E34,0x80013E64,ZZ_13D9C_98);
ZZ_MARK_TARGET(0x80013E64,0x80013E70,ZZ_13D9C_C8);
ZZ_MARK_TARGET(0x80013E70,0x80013EBC,ZZ_13D9C_D4);
ZZ_MARK_TARGET(0x80013EBC,0x80013EC0,ZZ_13D9C_120);
ZZ_MARK_TARGET(0x80013EC0,0x80013EEC,ZZ_13D9C_124);
ZZ_MARK_TARGET(0x80013EEC,0x80013EF4,ZZ_13D9C_150);
ZZ_MARK_TARGET(0x80013EF4,0x80013EF8,ZZ_13D9C_158);
ZZ_MARK_TARGET(0x80013EF8,0x80013F14,ZZ_13D9C_15C);
