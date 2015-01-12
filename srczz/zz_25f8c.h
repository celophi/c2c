#ifdef ZZ_INCLUDE_CODE
ZZ_25F8C:
	SP -= 88;
	EMU_Write32(SP + 48,S0); //+ 0x30
	S0 = A0;
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 + 2928); //+ 0xB70
	A2 = 0x80060000;
	A2 = EMU_ReadU32(A2 + 2936); //+ 0xB78
	A1 = 0x1E3;
	A3 = R0;
	EMU_Write32(SP + 84,RA); //+ 0x54
	EMU_Write32(SP + 80,FP); //+ 0x50
	EMU_Write32(SP + 76,S7); //+ 0x4C
	EMU_Write32(SP + 72,S6); //+ 0x48
	EMU_Write32(SP + 68,S5); //+ 0x44
	EMU_Write32(SP + 64,S4); //+ 0x40
	EMU_Write32(SP + 60,S3); //+ 0x3C
	EMU_Write32(SP + 56,S2); //+ 0x38
	EMU_Write32(SP + 52,S1); //+ 0x34
	EMU_Write32(SP + 16,R0); //+ 0x10
	EMU_Write32(SP + 20,R0); //+ 0x14
	EMU_Write32(SP + 24,R0); //+ 0x18
	EMU_Write32(SP + 28,R0); //+ 0x1C
	RA = 0x80025FEC; //ZZ_25F8C_60
	EMU_Write32(SP + 32,R0); //+ 0x20
	ZZ_CLOCKCYCLES(24,0x80031DF4);
	goto ZZ_31DF4;
ZZ_25F8C_60:
	A0 = V0;
	if (!A0)
	{
		ZZ_CLOCKCYCLES(3,0x80026058);
		goto ZZ_25F8C_CC;
	}
	S5 = EMU_ReadS16(A0);
	S6 = EMU_ReadS16(A0 + 2); //+ 0x2
	V0 = (int32_t)S6 < (int32_t)S5;
	if (V0)
	{
		ZZ_CLOCKCYCLES(9,0x80026058);
		goto ZZ_25F8C_CC;
	}
	V1 = EMU_ReadU32(S0 + 4); //+ 0x4
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 2704); //+ 0xA90
	V1 = V1 - V0;
	V0 = S5 << 8;
	V0 = (int32_t)V1 < (int32_t)V0;
	if (V0)
	{
		V0 = S6 << 8;
		ZZ_CLOCKCYCLES(18,0x80026040);
		goto ZZ_25F8C_B4;
	}
	V0 = S6 << 8;
	V0 = (int32_t)V0 < (int32_t)V1;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(21,0x80026058);
		goto ZZ_25F8C_CC;
	}
	ZZ_CLOCKCYCLES(21,0x80026040);
ZZ_25F8C_B4:
	V0 = EMU_ReadS16(A0 + 4); //+ 0x4
	A0 = R0;
	A1 = SP + 40;
	V0 <<= 8;
	RA = 0x80026058; //ZZ_25F8C_CC
	EMU_Write32(SP + 40,V0); //+ 0x28
	ZZ_CLOCKCYCLES(6,0x80026250);
	goto ZZ_26250;
ZZ_25F8C_CC:
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 + 2928); //+ 0xB70
	A2 = 0x80060000;
	A2 = EMU_ReadU32(A2 + 2936); //+ 0xB78
	A1 = 0x1E2;
	A3 = R0;
	EMU_Write32(SP + 16,R0); //+ 0x10
	EMU_Write32(SP + 20,R0); //+ 0x14
	EMU_Write32(SP + 24,R0); //+ 0x18
	EMU_Write32(SP + 28,R0); //+ 0x1C
	RA = 0x80026088; //ZZ_25F8C_FC
	EMU_Write32(SP + 32,R0); //+ 0x20
	ZZ_CLOCKCYCLES(12,0x80031DF4);
	goto ZZ_31DF4;
ZZ_25F8C_FC:
	S3 = V0;
	if (!S3)
	{
		ZZ_CLOCKCYCLES(3,0x800260B0);
		goto ZZ_25F8C_124;
	}
	S5 = EMU_ReadS16(S3);
	S6 = EMU_ReadS16(S3 + 2); //+ 0x2
	V0 = (int32_t)S6 < (int32_t)S5;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(9,0x800260B0);
		goto ZZ_25F8C_124;
	}
	S3 = R0;
	ZZ_CLOCKCYCLES(10,0x800260B0);
ZZ_25F8C_124:
	A0 = 0x80060000;
	A0 = EMU_ReadU32(A0 + 2928); //+ 0xB70
	A2 = 0x80060000;
	A2 = EMU_ReadU32(A2 + 2936); //+ 0xB78
	A1 = 0x1E4;
	A3 = R0;
	EMU_Write32(SP + 16,R0); //+ 0x10
	EMU_Write32(SP + 20,R0); //+ 0x14
	EMU_Write32(SP + 24,R0); //+ 0x18
	EMU_Write32(SP + 28,R0); //+ 0x1C
	RA = 0x800260E0; //ZZ_25F8C_154
	EMU_Write32(SP + 32,R0); //+ 0x20
	ZZ_CLOCKCYCLES(12,0x80031DF4);
	goto ZZ_31DF4;
ZZ_25F8C_154:
	S2 = V0;
	if (!S2)
	{
		ZZ_CLOCKCYCLES(3,0x80026108);
		goto ZZ_25F8C_17C;
	}
	S7 = EMU_ReadS16(S2);
	FP = EMU_ReadS16(S2 + 2); //+ 0x2
	V0 = (int32_t)FP < (int32_t)S7;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(9,0x80026108);
		goto ZZ_25F8C_17C;
	}
	S2 = R0;
	ZZ_CLOCKCYCLES(10,0x80026108);
ZZ_25F8C_17C:
	if (S3)
	{
		ZZ_CLOCKCYCLES(2,0x80026118);
		goto ZZ_25F8C_18C;
	}
	if (!S2)
	{
		ZZ_CLOCKCYCLES(4,0x8002621C);
		goto ZZ_25F8C_290;
	}
	ZZ_CLOCKCYCLES(4,0x80026118);
ZZ_25F8C_18C:
	A1 = EMU_ReadU32(S0);
	V1 = 0x80060000;
	V1 = EMU_ReadU32(V1 + 2700); //+ 0xA8C
	A0 = EMU_ReadU32(S0 + 8); //+ 0x8
	V0 = 0x80060000;
	V0 = EMU_ReadU32(V0 + 2708); //+ 0xA94
	S0 = 0x80060000;
	S0 = EMU_ReadU32(S0 + 2752); //+ 0xAC0
	S1 = A1 - V1;
	S4 = A0 - V0;
	S0 = -S0;
	RA = 0x8002614C; //ZZ_25F8C_1C0
	A0 = S0;
	ZZ_CLOCKCYCLES(13,0x8003D5F8);
	goto ZZ_3D5F8;
ZZ_25F8C_1C0:
	A0 = S0;
	RA = 0x80026158; //ZZ_25F8C_1CC
	S0 = V0;
	ZZ_CLOCKCYCLES(3,0x8003D584);
	goto ZZ_3D584;
ZZ_25F8C_1CC:
	A0 = (int32_t)S4 >> 8;
	EMU_SMultiply(A0,V0);
	A1 = LO;
	V1 = (int32_t)S1 >> 8;
	EMU_SMultiply(V1,S0);
	T1 = LO;
	EMU_SMultiply(V1,V0);
	A2 = LO;
	EMU_SMultiply(A0,S0);
	V1 = (int32_t)A1 >> 4;
	V0 = (int32_t)T1 >> 4;
	S1 = V1 + V0;
	V1 = (int32_t)A2 >> 4;
	A0 = LO;
	V0 = (int32_t)A0 >> 4;
	if (!S3)
	{
		S4 = V1 - V0;
		ZZ_CLOCKCYCLES(22,0x800261E4);
		goto ZZ_25F8C_258;
	}
	S4 = V1 - V0;
	V0 = S5 << 8;
	V0 = (int32_t)S1 < (int32_t)V0;
	if (V0)
	{
		V0 = S6 << 8;
		ZZ_CLOCKCYCLES(26,0x800261CC);
		goto ZZ_25F8C_240;
	}
	V0 = S6 << 8;
	V0 = (int32_t)V0 < (int32_t)S1;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(29,0x800261E4);
		goto ZZ_25F8C_258;
	}
	ZZ_CLOCKCYCLES(29,0x800261CC);
ZZ_25F8C_240:
	V0 = EMU_ReadS16(S3 + 4); //+ 0x4
	A0 = R0;
	A1 = SP + 40;
	V0 <<= 8;
	RA = 0x800261E4; //ZZ_25F8C_258
	EMU_Write32(SP + 40,V0); //+ 0x28
	ZZ_CLOCKCYCLES(6,0x80026250);
	goto ZZ_26250;
ZZ_25F8C_258:
	if (!S2)
	{
		V0 = S7 << 8;
		ZZ_CLOCKCYCLES(2,0x8002621C);
		goto ZZ_25F8C_290;
	}
	V0 = S7 << 8;
	V0 = (int32_t)S4 < (int32_t)V0;
	if (V0)
	{
		V0 = FP << 8;
		ZZ_CLOCKCYCLES(5,0x80026204);
		goto ZZ_25F8C_278;
	}
	V0 = FP << 8;
	V0 = (int32_t)V0 < (int32_t)S4;
	if (!V0)
	{
		ZZ_CLOCKCYCLES(8,0x8002621C);
		goto ZZ_25F8C_290;
	}
	ZZ_CLOCKCYCLES(8,0x80026204);
ZZ_25F8C_278:
	V0 = EMU_ReadS16(S2 + 4); //+ 0x4
	A0 = R0;
	A1 = SP + 40;
	V0 <<= 8;
	RA = 0x8002621C; //ZZ_25F8C_290
	EMU_Write32(SP + 40,V0); //+ 0x28
	ZZ_CLOCKCYCLES(6,0x80026250);
	goto ZZ_26250;
ZZ_25F8C_290:
	RA = EMU_ReadU32(SP + 84); //+ 0x54
	FP = EMU_ReadU32(SP + 80); //+ 0x50
	S7 = EMU_ReadU32(SP + 76); //+ 0x4C
	S6 = EMU_ReadU32(SP + 72); //+ 0x48
	S5 = EMU_ReadU32(SP + 68); //+ 0x44
	S4 = EMU_ReadU32(SP + 64); //+ 0x40
	S3 = EMU_ReadU32(SP + 60); //+ 0x3C
	S2 = EMU_ReadU32(SP + 56); //+ 0x38
	S1 = EMU_ReadU32(SP + 52); //+ 0x34
	S0 = EMU_ReadU32(SP + 48); //+ 0x30
	SP += 88;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(13);
	ZZ_JUMPREGISTER(0x80026FD4,ZZ_26F14_C0);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80025F8C,ZZ_25F8C);
ZZ_MARK(0x80025F90);
ZZ_MARK(0x80025F94);
ZZ_MARK(0x80025F98);
ZZ_MARK(0x80025F9C);
ZZ_MARK(0x80025FA0);
ZZ_MARK(0x80025FA4);
ZZ_MARK(0x80025FA8);
ZZ_MARK(0x80025FAC);
ZZ_MARK(0x80025FB0);
ZZ_MARK(0x80025FB4);
ZZ_MARK(0x80025FB8);
ZZ_MARK(0x80025FBC);
ZZ_MARK(0x80025FC0);
ZZ_MARK(0x80025FC4);
ZZ_MARK(0x80025FC8);
ZZ_MARK(0x80025FCC);
ZZ_MARK(0x80025FD0);
ZZ_MARK(0x80025FD4);
ZZ_MARK(0x80025FD8);
ZZ_MARK(0x80025FDC);
ZZ_MARK(0x80025FE0);
ZZ_MARK(0x80025FE4);
ZZ_MARK(0x80025FE8);
ZZ_MARK_TARGET(0x80025FEC,ZZ_25F8C_60);
ZZ_MARK(0x80025FF0);
ZZ_MARK(0x80025FF4);
ZZ_MARK(0x80025FF8);
ZZ_MARK(0x80025FFC);
ZZ_MARK(0x80026000);
ZZ_MARK(0x80026004);
ZZ_MARK(0x80026008);
ZZ_MARK(0x8002600C);
ZZ_MARK(0x80026010);
ZZ_MARK(0x80026014);
ZZ_MARK(0x80026018);
ZZ_MARK(0x8002601C);
ZZ_MARK(0x80026020);
ZZ_MARK(0x80026024);
ZZ_MARK(0x80026028);
ZZ_MARK(0x8002602C);
ZZ_MARK(0x80026030);
ZZ_MARK(0x80026034);
ZZ_MARK(0x80026038);
ZZ_MARK(0x8002603C);
ZZ_MARK_TARGET(0x80026040,ZZ_25F8C_B4);
ZZ_MARK(0x80026044);
ZZ_MARK(0x80026048);
ZZ_MARK(0x8002604C);
ZZ_MARK(0x80026050);
ZZ_MARK(0x80026054);
ZZ_MARK_TARGET(0x80026058,ZZ_25F8C_CC);
ZZ_MARK(0x8002605C);
ZZ_MARK(0x80026060);
ZZ_MARK(0x80026064);
ZZ_MARK(0x80026068);
ZZ_MARK(0x8002606C);
ZZ_MARK(0x80026070);
ZZ_MARK(0x80026074);
ZZ_MARK(0x80026078);
ZZ_MARK(0x8002607C);
ZZ_MARK(0x80026080);
ZZ_MARK(0x80026084);
ZZ_MARK_TARGET(0x80026088,ZZ_25F8C_FC);
ZZ_MARK(0x8002608C);
ZZ_MARK(0x80026090);
ZZ_MARK(0x80026094);
ZZ_MARK(0x80026098);
ZZ_MARK(0x8002609C);
ZZ_MARK(0x800260A0);
ZZ_MARK(0x800260A4);
ZZ_MARK(0x800260A8);
ZZ_MARK(0x800260AC);
ZZ_MARK_TARGET(0x800260B0,ZZ_25F8C_124);
ZZ_MARK(0x800260B4);
ZZ_MARK(0x800260B8);
ZZ_MARK(0x800260BC);
ZZ_MARK(0x800260C0);
ZZ_MARK(0x800260C4);
ZZ_MARK(0x800260C8);
ZZ_MARK(0x800260CC);
ZZ_MARK(0x800260D0);
ZZ_MARK(0x800260D4);
ZZ_MARK(0x800260D8);
ZZ_MARK(0x800260DC);
ZZ_MARK_TARGET(0x800260E0,ZZ_25F8C_154);
ZZ_MARK(0x800260E4);
ZZ_MARK(0x800260E8);
ZZ_MARK(0x800260EC);
ZZ_MARK(0x800260F0);
ZZ_MARK(0x800260F4);
ZZ_MARK(0x800260F8);
ZZ_MARK(0x800260FC);
ZZ_MARK(0x80026100);
ZZ_MARK(0x80026104);
ZZ_MARK_TARGET(0x80026108,ZZ_25F8C_17C);
ZZ_MARK(0x8002610C);
ZZ_MARK(0x80026110);
ZZ_MARK(0x80026114);
ZZ_MARK_TARGET(0x80026118,ZZ_25F8C_18C);
ZZ_MARK(0x8002611C);
ZZ_MARK(0x80026120);
ZZ_MARK(0x80026124);
ZZ_MARK(0x80026128);
ZZ_MARK(0x8002612C);
ZZ_MARK(0x80026130);
ZZ_MARK(0x80026134);
ZZ_MARK(0x80026138);
ZZ_MARK(0x8002613C);
ZZ_MARK(0x80026140);
ZZ_MARK(0x80026144);
ZZ_MARK(0x80026148);
ZZ_MARK_TARGET(0x8002614C,ZZ_25F8C_1C0);
ZZ_MARK(0x80026150);
ZZ_MARK(0x80026154);
ZZ_MARK_TARGET(0x80026158,ZZ_25F8C_1CC);
ZZ_MARK(0x8002615C);
ZZ_MARK(0x80026160);
ZZ_MARK(0x80026164);
ZZ_MARK(0x80026168);
ZZ_MARK(0x8002616C);
ZZ_MARK(0x80026170);
ZZ_MARK(0x80026174);
ZZ_MARK(0x80026178);
ZZ_MARK(0x8002617C);
ZZ_MARK(0x80026180);
ZZ_MARK(0x80026184);
ZZ_MARK(0x80026188);
ZZ_MARK(0x8002618C);
ZZ_MARK(0x80026190);
ZZ_MARK(0x80026194);
ZZ_MARK(0x80026198);
ZZ_MARK(0x8002619C);
ZZ_MARK(0x800261A0);
ZZ_MARK(0x800261A4);
ZZ_MARK(0x800261A8);
ZZ_MARK(0x800261AC);
ZZ_MARK(0x800261B0);
ZZ_MARK(0x800261B4);
ZZ_MARK(0x800261B8);
ZZ_MARK(0x800261BC);
ZZ_MARK(0x800261C0);
ZZ_MARK(0x800261C4);
ZZ_MARK(0x800261C8);
ZZ_MARK_TARGET(0x800261CC,ZZ_25F8C_240);
ZZ_MARK(0x800261D0);
ZZ_MARK(0x800261D4);
ZZ_MARK(0x800261D8);
ZZ_MARK(0x800261DC);
ZZ_MARK(0x800261E0);
ZZ_MARK_TARGET(0x800261E4,ZZ_25F8C_258);
ZZ_MARK(0x800261E8);
ZZ_MARK(0x800261EC);
ZZ_MARK(0x800261F0);
ZZ_MARK(0x800261F4);
ZZ_MARK(0x800261F8);
ZZ_MARK(0x800261FC);
ZZ_MARK(0x80026200);
ZZ_MARK_TARGET(0x80026204,ZZ_25F8C_278);
ZZ_MARK(0x80026208);
ZZ_MARK(0x8002620C);
ZZ_MARK(0x80026210);
ZZ_MARK(0x80026214);
ZZ_MARK(0x80026218);
ZZ_MARK_TARGET(0x8002621C,ZZ_25F8C_290);
ZZ_MARK(0x80026220);
ZZ_MARK(0x80026224);
ZZ_MARK(0x80026228);
ZZ_MARK(0x8002622C);
ZZ_MARK(0x80026230);
ZZ_MARK(0x80026234);
ZZ_MARK(0x80026238);
ZZ_MARK(0x8002623C);
ZZ_MARK(0x80026240);
ZZ_MARK(0x80026244);
ZZ_MARK(0x80026248);
ZZ_MARK(0x8002624C);