#ifdef ZZ_INCLUDE_CODE
ZZ_1473C:
	SP -= 16;
	T1 = A0;
	A2 = 0x7;
	V0 = T1 + 28;
	ZZ_CLOCKCYCLES(4,0x8001474C);
ZZ_1473C_10:
	EMU_Write32(V0,R0);
	A2 -= 1;
	if ((int32_t)A2 >= 0)
	{
		V0 -= 4;
		ZZ_CLOCKCYCLES(4,0x8001474C);
		goto ZZ_1473C_10;
	}
	V0 -= 4;
	V1 = 0x80060000;
	V1 += 31720;
	V0 = EMU_ReadU32(V1);
	if ((int32_t)V0 <= 0)
	{
		A2 = R0;
		ZZ_CLOCKCYCLES(10,0x800147F4);
		goto ZZ_1473C_B8;
	}
	A2 = R0;
	T0 = 0x1;
	T2 = V1;
	A3 = T2 + 4;
	ZZ_CLOCKCYCLES(13,0x80014780);
ZZ_1473C_44:
	V1 = A3;
	V0 = EMU_ReadS16(V1 + 4); //+ 0x4
	if (V0 == T0)
	{
		ZZ_CLOCKCYCLES(5,0x800147E0);
		goto ZZ_1473C_A4;
	}
	V0 = EMU_ReadS8(V1 + 15); //+ 0xF
	if (!V0)
	{
		ZZ_CLOCKCYCLES(9,0x800147E0);
		goto ZZ_1473C_A4;
	}
	V0 = EMU_ReadU32(V1 + 20); //+ 0x14
	A1 = (int32_t)V0 >> 1;
	if ((int32_t)A1 >= 0)
	{
		V0 = A1;
		ZZ_CLOCKCYCLES(14,0x800147BC);
		goto ZZ_1473C_80;
	}
	V0 = A1;
	V0 = A1 + 31;
	ZZ_CLOCKCYCLES(15,0x800147BC);
ZZ_1473C_80:
	V0 = (int32_t)V0 >> 5;
	A0 = V0 << 2;
	A0 += T1;
	V1 = EMU_ReadU32(A0);
	V0 <<= 5;
	V0 = A1 - V0;
	V0 = T0 << V0;
	V1 |= V0;
	EMU_Write32(A0,V1);
	ZZ_CLOCKCYCLES(9,0x800147E0);
ZZ_1473C_A4:
	V0 = EMU_ReadU32(T2);
	A2 += 1;
	V0 = (int32_t)A2 < (int32_t)V0;
	if (V0)
	{
		A3 += 44;
		ZZ_CLOCKCYCLES(5,0x80014780);
		goto ZZ_1473C_44;
	}
	A3 += 44;
	ZZ_CLOCKCYCLES(5,0x800147F4);
ZZ_1473C_B8:
	V1 = 0x80060000;
	V1 += 30792;
	V0 = EMU_ReadU32(V1);
	if ((int32_t)V0 <= 0)
	{
		A2 = R0;
		ZZ_CLOCKCYCLES(6,0x80014888);
		goto ZZ_1473C_14C;
	}
	A2 = R0;
	T0 = 0x1;
	T2 = V1;
	A3 = T2 + 4;
	ZZ_CLOCKCYCLES(9,0x80014818);
ZZ_1473C_DC:
	V0 = EMU_ReadS16(A3 + 4); //+ 0x4
	if (V0 == T0)
	{
		ZZ_CLOCKCYCLES(4,0x80014874);
		goto ZZ_1473C_138;
	}
	V0 = EMU_ReadS8(A3 + 15); //+ 0xF
	if (!V0)
	{
		ZZ_CLOCKCYCLES(8,0x80014874);
		goto ZZ_1473C_138;
	}
	V0 = EMU_ReadU32(A3 + 20); //+ 0x14
	A1 = (int32_t)V0 >> 1;
	if ((int32_t)A1 >= 0)
	{
		V0 = A1;
		ZZ_CLOCKCYCLES(13,0x80014850);
		goto ZZ_1473C_114;
	}
	V0 = A1;
	V0 = A1 + 31;
	ZZ_CLOCKCYCLES(14,0x80014850);
ZZ_1473C_114:
	V0 = (int32_t)V0 >> 5;
	A0 = V0 << 2;
	A0 += T1;
	V1 = EMU_ReadU32(A0);
	V0 <<= 5;
	V0 = A1 - V0;
	V0 = T0 << V0;
	V1 |= V0;
	EMU_Write32(A0,V1);
	ZZ_CLOCKCYCLES(9,0x80014874);
ZZ_1473C_138:
	V0 = EMU_ReadU32(T2);
	A2 += 1;
	V0 = (int32_t)A2 < (int32_t)V0;
	if (V0)
	{
		A3 += 44;
		ZZ_CLOCKCYCLES(5,0x80014818);
		goto ZZ_1473C_DC;
	}
	A3 += 44;
	ZZ_CLOCKCYCLES(5,0x80014888);
ZZ_1473C_14C:
	SP += 16;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(3);
	ZZ_JUMPREGISTER(0x8002F900,ZZ_2F658_2A8);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8001473C,ZZ_1473C);
ZZ_MARK(0x80014740);
ZZ_MARK(0x80014744);
ZZ_MARK(0x80014748);
ZZ_MARK_TARGET(0x8001474C,ZZ_1473C_10);
ZZ_MARK(0x80014750);
ZZ_MARK(0x80014754);
ZZ_MARK(0x80014758);
ZZ_MARK(0x8001475C);
ZZ_MARK(0x80014760);
ZZ_MARK(0x80014764);
ZZ_MARK(0x80014768);
ZZ_MARK(0x8001476C);
ZZ_MARK(0x80014770);
ZZ_MARK(0x80014774);
ZZ_MARK(0x80014778);
ZZ_MARK(0x8001477C);
ZZ_MARK_TARGET(0x80014780,ZZ_1473C_44);
ZZ_MARK(0x80014784);
ZZ_MARK(0x80014788);
ZZ_MARK(0x8001478C);
ZZ_MARK(0x80014790);
ZZ_MARK(0x80014794);
ZZ_MARK(0x80014798);
ZZ_MARK(0x8001479C);
ZZ_MARK(0x800147A0);
ZZ_MARK(0x800147A4);
ZZ_MARK(0x800147A8);
ZZ_MARK(0x800147AC);
ZZ_MARK(0x800147B0);
ZZ_MARK(0x800147B4);
ZZ_MARK(0x800147B8);
ZZ_MARK_TARGET(0x800147BC,ZZ_1473C_80);
ZZ_MARK(0x800147C0);
ZZ_MARK(0x800147C4);
ZZ_MARK(0x800147C8);
ZZ_MARK(0x800147CC);
ZZ_MARK(0x800147D0);
ZZ_MARK(0x800147D4);
ZZ_MARK(0x800147D8);
ZZ_MARK(0x800147DC);
ZZ_MARK_TARGET(0x800147E0,ZZ_1473C_A4);
ZZ_MARK(0x800147E4);
ZZ_MARK(0x800147E8);
ZZ_MARK(0x800147EC);
ZZ_MARK(0x800147F0);
ZZ_MARK_TARGET(0x800147F4,ZZ_1473C_B8);
ZZ_MARK(0x800147F8);
ZZ_MARK(0x800147FC);
ZZ_MARK(0x80014800);
ZZ_MARK(0x80014804);
ZZ_MARK(0x80014808);
ZZ_MARK(0x8001480C);
ZZ_MARK(0x80014810);
ZZ_MARK(0x80014814);
ZZ_MARK_TARGET(0x80014818,ZZ_1473C_DC);
ZZ_MARK(0x8001481C);
ZZ_MARK(0x80014820);
ZZ_MARK(0x80014824);
ZZ_MARK(0x80014828);
ZZ_MARK(0x8001482C);
ZZ_MARK(0x80014830);
ZZ_MARK(0x80014834);
ZZ_MARK(0x80014838);
ZZ_MARK(0x8001483C);
ZZ_MARK(0x80014840);
ZZ_MARK(0x80014844);
ZZ_MARK(0x80014848);
ZZ_MARK(0x8001484C);
ZZ_MARK_TARGET(0x80014850,ZZ_1473C_114);
ZZ_MARK(0x80014854);
ZZ_MARK(0x80014858);
ZZ_MARK(0x8001485C);
ZZ_MARK(0x80014860);
ZZ_MARK(0x80014864);
ZZ_MARK(0x80014868);
ZZ_MARK(0x8001486C);
ZZ_MARK(0x80014870);
ZZ_MARK_TARGET(0x80014874,ZZ_1473C_138);
ZZ_MARK(0x80014878);
ZZ_MARK(0x8001487C);
ZZ_MARK(0x80014880);
ZZ_MARK(0x80014884);
ZZ_MARK_TARGET(0x80014888,ZZ_1473C_14C);
ZZ_MARK(0x8001488C);
ZZ_MARK(0x80014890);