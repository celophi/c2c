#ifdef ZZ_INCLUDE_CODE
ZZ_34204:
	V0 = EMU_ReadS16(GP + 612); //+ 0x264
	V1 = EMU_ReadU32(GP + 396); //+ 0x18C
	SP -= 64;
	EMU_Write32(SP + 48,S4); //+ 0x30
	S4 = A0;
	EMU_Write32(SP + 60,RA); //+ 0x3C
	EMU_Write32(SP + 56,S6); //+ 0x38
	EMU_Write32(SP + 52,S5); //+ 0x34
	EMU_Write32(SP + 44,S3); //+ 0x2C
	EMU_Write32(SP + 40,S2); //+ 0x28
	EMU_Write32(SP + 36,S1); //+ 0x24
	EMU_Write32(SP + 32,S0); //+ 0x20
	V0 = ~V0;
	if (!V1)
	{
		S6 = V0 < 1;
		ZZ_CLOCKCYCLES(15,0x80034248);
		goto ZZ_34204_44;
	}
	S6 = V0 < 1;
	V0 = -1;
	ZZ_CLOCKCYCLES(17,0x80034530);
	goto ZZ_34204_32C;
ZZ_34204_44:
	V1 = EMU_ReadU32(GP + 544); //+ 0x220
	V0 = 0x1;
	if (V1 != V0)
	{
		ZZ_CLOCKCYCLES(4,0x80034330);
		goto ZZ_34204_12C;
	}
	V0 = EMU_ReadU32(GP + 228); //+ 0xE4
	V1 = V0 + 1;
	V0 = (int32_t)V0 < 3;
	EMU_Write32(GP + 228,V1); //+ 0xE4
	if (V0)
	{
		V0 = R0;
		ZZ_CLOCKCYCLES(11,0x80034530);
		goto ZZ_34204_32C;
	}
	V0 = R0;
	V0 = EMU_ReadU32(GP + 376); //+ 0x178
	S0 = 0x63960000;
	S0 |= 0x347F;
	EMU_Write32(GP + 228,R0); //+ 0xE4
	if (V0 == S0)
	{
		ZZ_CLOCKCYCLES(17,0x800342AC);
		goto ZZ_34204_A8;
	}
	A0 = EMU_ReadS16(GP + 616); //+ 0x268
	RA = 0x80034298; //ZZ_34204_94
	ZZ_CLOCKCYCLES(20,0x800529D0);
	goto ZZ_529D0;
ZZ_34204_94:
	V0 = EMU_ReadU32(GP + 376); //+ 0x178
	A0 = SP + 16;
	A1 = 0x1;
	RA = 0x800342AC; //ZZ_34204_A8
	EMU_Write32(SP + 16,V0); //+ 0x10
	ZZ_CLOCKCYCLES(5,0x800144C4);
	goto ZZ_144C4;
ZZ_34204_A8:
	V0 = EMU_ReadU32(S4);
	if (V0 == S0)
	{
		A0 = S4;
		ZZ_CLOCKCYCLES(4,0x80034324);
		goto ZZ_34204_120;
	}
	A0 = S4;
	A1 = 0x1;
	RA = 0x800342C8; //ZZ_34204_C4
	A2 = 0x1;
	ZZ_CLOCKCYCLES(7,0x80014364);
	goto ZZ_14364;
ZZ_34204_C4:
	S2 = V0;
	S0 = R0;
	V0 = EMU_ReadU32(S2 + 4); //+ 0x4
	S3 = 0x63960000;
	S3 |= 0x347F;
	S1 = 0x8;
	EMU_Write32(GP + 376,V0); //+ 0x178
	ZZ_CLOCKCYCLES(7,0x800342E4);
ZZ_34204_E0:
	A0 = EMU_ReadU32(S2 + 16); //+ 0x10
	V0 = S0 << 2;
	V0 += A0;
	V0 = EMU_ReadU32(V0 + 8); //+ 0x8
	if (V0 == S3)
	{
		A0 += S1;
		ZZ_CLOCKCYCLES(7,0x8003430C);
		goto ZZ_34204_108;
	}
	A0 += S1;
	A1 = R0;
	RA = 0x8003430C; //ZZ_34204_108
	A2 = 0x1;
	ZZ_CLOCKCYCLES(10,0x80014364);
	goto ZZ_14364;
ZZ_34204_108:
	S0 += 1;
	V0 = (int32_t)S0 < 7;
	if (V0)
	{
		S1 += 4;
		ZZ_CLOCKCYCLES(4,0x800342E4);
		goto ZZ_34204_E0;
	}
	S1 += 4;
	ZZ_CLOCKCYCLES(6,0x80034330);
	goto ZZ_34204_12C;
ZZ_34204_120:
	EMU_Write32(GP + 376,V0); //+ 0x178
	V0 = R0;
	ZZ_CLOCKCYCLES(3,0x80034530);
	goto ZZ_34204_32C;
ZZ_34204_12C:
	V1 = EMU_ReadU32(S4);
	V0 = 0x63960000;
	V0 |= 0x347F;
	if (V1 != V0)
	{
		A0 = S4;
		ZZ_CLOCKCYCLES(5,0x80034354);
		goto ZZ_34204_150;
	}
	A0 = S4;
	EMU_Write32(GP + 376,V1); //+ 0x178
	EMU_Write32(GP + 544,R0); //+ 0x220
	V0 = R0;
	ZZ_CLOCKCYCLES(9,0x80034530);
	goto ZZ_34204_32C;
ZZ_34204_150:
	A1 = 0x1;
	V0 = 0x2;
	EMU_Write32(GP + 544,V0); //+ 0x220
	RA = 0x80034368; //ZZ_34204_164
	A2 = R0;
	ZZ_CLOCKCYCLES(5,0x80014364);
	goto ZZ_14364;
ZZ_34204_164:
	S2 = V0;
	S0 = R0;
	S3 = 0x63960000;
	S3 |= 0x347F;
	S1 = 0x8;
	EMU_Write32(GP + 216,R0); //+ 0xD8
	ZZ_CLOCKCYCLES(6,0x80034380);
ZZ_34204_17C:
	A0 = EMU_ReadU32(S2 + 16); //+ 0x10
	V0 = S0 << 2;
	V0 += A0;
	V0 = EMU_ReadU32(V0 + 8); //+ 0x8
	if (V0 == S3)
	{
		A0 += S1;
		ZZ_CLOCKCYCLES(7,0x800343AC);
		goto ZZ_34204_1A8;
	}
	A0 += S1;
	RA = 0x800343A4; //ZZ_34204_1A0
	A1 = R0;
	ZZ_CLOCKCYCLES(9,0x800144C4);
	goto ZZ_144C4;
ZZ_34204_1A0:
	if (!V0)
	{
		V0 = R0;
		ZZ_CLOCKCYCLES(2,0x80034530);
		goto ZZ_34204_32C;
	}
	V0 = R0;
	ZZ_CLOCKCYCLES(2,0x800343AC);
ZZ_34204_1A8:
	S0 += 1;
	V0 = (int32_t)S0 < 7;
	if (V0)
	{
		S1 += 4;
		ZZ_CLOCKCYCLES(4,0x80034380);
		goto ZZ_34204_17C;
	}
	S1 += 4;
	V0 = EMU_ReadU32(S2 + 16); //+ 0x10
	S0 = EMU_ReadS16(GP + 612); //+ 0x264
	V1 = EMU_ReadU32(V0);
	V0 = 0x3;
	EMU_Write32(GP + 544,V0); //+ 0x220
	V0 = -1;
	EMU_Write16(GP + 380,V1); //+ 0x17C
	if (S0 != V0)
	{
		A1 = 0x1;
		ZZ_CLOCKCYCLES(13,0x8003444C);
		goto ZZ_34204_248;
	}
	A1 = 0x1;
	A0 = EMU_ReadU32(S2 + 16); //+ 0x10
	A2 = 0x1;
	RA = 0x800343F0; //ZZ_34204_1EC
	A0 += 4;
	ZZ_CLOCKCYCLES(17,0x80014364);
	goto ZZ_14364;
ZZ_34204_1EC:
	A0 = EMU_ReadU32(V0 + 20); //+ 0x14
	A2 = 0x80070000;
	A2 = EMU_ReadU32(A2 - 32176); //+ 0xFFFF8250
	RA = 0x80034404; //ZZ_34204_200
	A1 = -1;
	ZZ_CLOCKCYCLES(5,0x8005AB64);
	goto ZZ_5AB64;
ZZ_34204_200:
	EMU_Write16(GP + 612,V0); //+ 0x264
	V0 <<= 16;
	A0 = (int32_t)V0 >> 16;
	if (A0 != S0)
	{
		ZZ_CLOCKCYCLES(5,0x80034420);
		goto ZZ_34204_21C;
	}
	RA = 0x80034420; //ZZ_34204_21C
	A0 = -1;
	ZZ_CLOCKCYCLES(7,0x8004940C);
	goto ZZ_4940C;
ZZ_34204_21C:
	RA = 0x80034428; //ZZ_34204_224
	ZZ_CLOCKCYCLES(2,0x8005AA94);
	goto ZZ_5AA94;
ZZ_34204_224:
	EMU_Write16(GP + 612,V0); //+ 0x264
	V0 <<= 16;
	V0 = (int32_t)V0 >> 16;
	if (V0 != S0)
	{
		ZZ_CLOCKCYCLES(5,0x80034444);
		goto ZZ_34204_240;
	}
	RA = 0x80034444; //ZZ_34204_240
	A0 = -1;
	ZZ_CLOCKCYCLES(7,0x8004940C);
	goto ZZ_4940C;
ZZ_34204_240:
	RA = 0x8003444C; //ZZ_34204_248
	ZZ_CLOCKCYCLES(2,0x800550CC);
	goto ZZ_550CC;
ZZ_34204_248:
	A0 = EMU_ReadU32(S2 + 24); //+ 0x18
	A1 = EMU_ReadS16(GP + 612); //+ 0x264
	A2 = EMU_ReadS16(GP + 380); //+ 0x17C
	RA = 0x80034460; //ZZ_34204_25C
	ZZ_CLOCKCYCLES(5,0x80053014);
	goto ZZ_53014;
ZZ_34204_25C:
	EMU_Write16(GP + 616,V0); //+ 0x268
	V0 <<= 16;
	V0 = (int32_t)V0 >> 16;
	V1 = -1;
	if (V0 != V1)
	{
		ZZ_CLOCKCYCLES(6,0x80034480);
		goto ZZ_34204_27C;
	}
	RA = 0x80034480; //ZZ_34204_27C
	A0 = -1;
	ZZ_CLOCKCYCLES(8,0x8004940C);
	goto ZZ_4940C;
ZZ_34204_27C:
	V0 = EMU_ReadS16(GP + 380); //+ 0x17C
	if ((int32_t)V0 <= 0)
	{
		S0 = R0;
		ZZ_CLOCKCYCLES(4,0x80034518);
		goto ZZ_34204_314;
	}
	S0 = R0;
	S1 = 0x80060000;
	S1 -= 152;
	S2 = R0;
	ZZ_CLOCKCYCLES(7,0x8003449C);
ZZ_34204_298:
	if (!S6)
	{
		A0 = S1;
		ZZ_CLOCKCYCLES(2,0x800344CC);
		goto ZZ_34204_2C8;
	}
	A0 = S1;
	A1 = EMU_ReadU16(GP + 368); //+ 0x170
	A2 = S0;
	A3 = S5;
	A1 <<= 16;
	A1 = (int32_t)A1 >> 23;
	V0 = A1 << 16;
	RA = 0x800344C4; //ZZ_34204_2C0
	A1 |= V0;
	ZZ_CLOCKCYCLES(10,0x800346F0);
	goto ZZ_346F0;
ZZ_34204_2C0:
	ZZ_CLOCKCYCLES(2,0x80034500);
	goto ZZ_34204_2FC;
ZZ_34204_2C8:
	A1 = R0;
	A2 = S0;
	RA = 0x800344DC; //ZZ_34204_2D8
	A3 = S5;
	ZZ_CLOCKCYCLES(4,0x800346F0);
	goto ZZ_346F0;
ZZ_34204_2D8:
	A2 = EMU_ReadU16(GP + 368); //+ 0x170
	A0 = EMU_ReadS16(GP + 616); //+ 0x268
	AT = 0x80060000;
	AT += S2;
	A1 = EMU_ReadS16(AT - 152); //+ 0xFFFFFF68
	A3 = 0x19;
	A2 <<= 16;
	RA = 0x80034500; //ZZ_34204_2FC
	A2 = (int32_t)A2 >> 23;
	ZZ_CLOCKCYCLES(9,0x80052B5C);
	goto ZZ_52B5C;
ZZ_34204_2FC:
	V0 = EMU_ReadS16(GP + 380); //+ 0x17C
	S1 += 20;
	S0 += 1;
	V0 = (int32_t)S0 < (int32_t)V0;
	if (V0)
	{
		S2 += 20;
		ZZ_CLOCKCYCLES(6,0x8003449C);
		goto ZZ_34204_298;
	}
	S2 += 20;
	ZZ_CLOCKCYCLES(6,0x80034518);
ZZ_34204_314:
	A0 = 0x80060000;
	A0 -= 152;
	A1 = R0;
	RA = 0x8003452C; //ZZ_34204_328
	A2 = R0;
	ZZ_CLOCKCYCLES(5,0x800347D4);
	goto ZZ_347D4;
ZZ_34204_328:
	V0 = R0;
	ZZ_CLOCKCYCLES(1,0x80034530);
ZZ_34204_32C:
	RA = EMU_ReadU32(SP + 60); //+ 0x3C
	S6 = EMU_ReadU32(SP + 56); //+ 0x38
	S5 = EMU_ReadU32(SP + 52); //+ 0x34
	S4 = EMU_ReadU32(SP + 48); //+ 0x30
	S3 = EMU_ReadU32(SP + 44); //+ 0x2C
	S2 = EMU_ReadU32(SP + 40); //+ 0x28
	S1 = EMU_ReadU32(SP + 36); //+ 0x24
	S0 = EMU_ReadU32(SP + 32); //+ 0x20
	SP += 64;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(11);
	ZZ_JUMPREGISTER(0x800346A4,ZZ_34578_12C);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x80034204,ZZ_34204);
ZZ_MARK(0x80034208);
ZZ_MARK(0x8003420C);
ZZ_MARK(0x80034210);
ZZ_MARK(0x80034214);
ZZ_MARK(0x80034218);
ZZ_MARK(0x8003421C);
ZZ_MARK(0x80034220);
ZZ_MARK(0x80034224);
ZZ_MARK(0x80034228);
ZZ_MARK(0x8003422C);
ZZ_MARK(0x80034230);
ZZ_MARK(0x80034234);
ZZ_MARK(0x80034238);
ZZ_MARK(0x8003423C);
ZZ_MARK(0x80034240);
ZZ_MARK(0x80034244);
ZZ_MARK_TARGET(0x80034248,ZZ_34204_44);
ZZ_MARK(0x8003424C);
ZZ_MARK(0x80034250);
ZZ_MARK(0x80034254);
ZZ_MARK(0x80034258);
ZZ_MARK(0x8003425C);
ZZ_MARK(0x80034260);
ZZ_MARK(0x80034264);
ZZ_MARK(0x80034268);
ZZ_MARK(0x8003426C);
ZZ_MARK(0x80034270);
ZZ_MARK(0x80034274);
ZZ_MARK(0x80034278);
ZZ_MARK(0x8003427C);
ZZ_MARK(0x80034280);
ZZ_MARK(0x80034284);
ZZ_MARK(0x80034288);
ZZ_MARK(0x8003428C);
ZZ_MARK(0x80034290);
ZZ_MARK(0x80034294);
ZZ_MARK_TARGET(0x80034298,ZZ_34204_94);
ZZ_MARK(0x8003429C);
ZZ_MARK(0x800342A0);
ZZ_MARK(0x800342A4);
ZZ_MARK(0x800342A8);
ZZ_MARK_TARGET(0x800342AC,ZZ_34204_A8);
ZZ_MARK(0x800342B0);
ZZ_MARK(0x800342B4);
ZZ_MARK(0x800342B8);
ZZ_MARK(0x800342BC);
ZZ_MARK(0x800342C0);
ZZ_MARK(0x800342C4);
ZZ_MARK_TARGET(0x800342C8,ZZ_34204_C4);
ZZ_MARK(0x800342CC);
ZZ_MARK(0x800342D0);
ZZ_MARK(0x800342D4);
ZZ_MARK(0x800342D8);
ZZ_MARK(0x800342DC);
ZZ_MARK(0x800342E0);
ZZ_MARK_TARGET(0x800342E4,ZZ_34204_E0);
ZZ_MARK(0x800342E8);
ZZ_MARK(0x800342EC);
ZZ_MARK(0x800342F0);
ZZ_MARK(0x800342F4);
ZZ_MARK(0x800342F8);
ZZ_MARK(0x800342FC);
ZZ_MARK(0x80034300);
ZZ_MARK(0x80034304);
ZZ_MARK(0x80034308);
ZZ_MARK_TARGET(0x8003430C,ZZ_34204_108);
ZZ_MARK(0x80034310);
ZZ_MARK(0x80034314);
ZZ_MARK(0x80034318);
ZZ_MARK(0x8003431C);
ZZ_MARK(0x80034320);
ZZ_MARK_TARGET(0x80034324,ZZ_34204_120);
ZZ_MARK(0x80034328);
ZZ_MARK(0x8003432C);
ZZ_MARK_TARGET(0x80034330,ZZ_34204_12C);
ZZ_MARK(0x80034334);
ZZ_MARK(0x80034338);
ZZ_MARK(0x8003433C);
ZZ_MARK(0x80034340);
ZZ_MARK(0x80034344);
ZZ_MARK(0x80034348);
ZZ_MARK(0x8003434C);
ZZ_MARK(0x80034350);
ZZ_MARK_TARGET(0x80034354,ZZ_34204_150);
ZZ_MARK(0x80034358);
ZZ_MARK(0x8003435C);
ZZ_MARK(0x80034360);
ZZ_MARK(0x80034364);
ZZ_MARK_TARGET(0x80034368,ZZ_34204_164);
ZZ_MARK(0x8003436C);
ZZ_MARK(0x80034370);
ZZ_MARK(0x80034374);
ZZ_MARK(0x80034378);
ZZ_MARK(0x8003437C);
ZZ_MARK_TARGET(0x80034380,ZZ_34204_17C);
ZZ_MARK(0x80034384);
ZZ_MARK(0x80034388);
ZZ_MARK(0x8003438C);
ZZ_MARK(0x80034390);
ZZ_MARK(0x80034394);
ZZ_MARK(0x80034398);
ZZ_MARK(0x8003439C);
ZZ_MARK(0x800343A0);
ZZ_MARK_TARGET(0x800343A4,ZZ_34204_1A0);
ZZ_MARK(0x800343A8);
ZZ_MARK_TARGET(0x800343AC,ZZ_34204_1A8);
ZZ_MARK(0x800343B0);
ZZ_MARK(0x800343B4);
ZZ_MARK(0x800343B8);
ZZ_MARK(0x800343BC);
ZZ_MARK(0x800343C0);
ZZ_MARK(0x800343C4);
ZZ_MARK(0x800343C8);
ZZ_MARK(0x800343CC);
ZZ_MARK(0x800343D0);
ZZ_MARK(0x800343D4);
ZZ_MARK(0x800343D8);
ZZ_MARK(0x800343DC);
ZZ_MARK(0x800343E0);
ZZ_MARK(0x800343E4);
ZZ_MARK(0x800343E8);
ZZ_MARK(0x800343EC);
ZZ_MARK_TARGET(0x800343F0,ZZ_34204_1EC);
ZZ_MARK(0x800343F4);
ZZ_MARK(0x800343F8);
ZZ_MARK(0x800343FC);
ZZ_MARK(0x80034400);
ZZ_MARK_TARGET(0x80034404,ZZ_34204_200);
ZZ_MARK(0x80034408);
ZZ_MARK(0x8003440C);
ZZ_MARK(0x80034410);
ZZ_MARK(0x80034414);
ZZ_MARK(0x80034418);
ZZ_MARK(0x8003441C);
ZZ_MARK_TARGET(0x80034420,ZZ_34204_21C);
ZZ_MARK(0x80034424);
ZZ_MARK_TARGET(0x80034428,ZZ_34204_224);
ZZ_MARK(0x8003442C);
ZZ_MARK(0x80034430);
ZZ_MARK(0x80034434);
ZZ_MARK(0x80034438);
ZZ_MARK(0x8003443C);
ZZ_MARK(0x80034440);
ZZ_MARK_TARGET(0x80034444,ZZ_34204_240);
ZZ_MARK(0x80034448);
ZZ_MARK_TARGET(0x8003444C,ZZ_34204_248);
ZZ_MARK(0x80034450);
ZZ_MARK(0x80034454);
ZZ_MARK(0x80034458);
ZZ_MARK(0x8003445C);
ZZ_MARK_TARGET(0x80034460,ZZ_34204_25C);
ZZ_MARK(0x80034464);
ZZ_MARK(0x80034468);
ZZ_MARK(0x8003446C);
ZZ_MARK(0x80034470);
ZZ_MARK(0x80034474);
ZZ_MARK(0x80034478);
ZZ_MARK(0x8003447C);
ZZ_MARK_TARGET(0x80034480,ZZ_34204_27C);
ZZ_MARK(0x80034484);
ZZ_MARK(0x80034488);
ZZ_MARK(0x8003448C);
ZZ_MARK(0x80034490);
ZZ_MARK(0x80034494);
ZZ_MARK(0x80034498);
ZZ_MARK_TARGET(0x8003449C,ZZ_34204_298);
ZZ_MARK(0x800344A0);
ZZ_MARK(0x800344A4);
ZZ_MARK(0x800344A8);
ZZ_MARK(0x800344AC);
ZZ_MARK(0x800344B0);
ZZ_MARK(0x800344B4);
ZZ_MARK(0x800344B8);
ZZ_MARK(0x800344BC);
ZZ_MARK(0x800344C0);
ZZ_MARK_TARGET(0x800344C4,ZZ_34204_2C0);
ZZ_MARK(0x800344C8);
ZZ_MARK_TARGET(0x800344CC,ZZ_34204_2C8);
ZZ_MARK(0x800344D0);
ZZ_MARK(0x800344D4);
ZZ_MARK(0x800344D8);
ZZ_MARK_TARGET(0x800344DC,ZZ_34204_2D8);
ZZ_MARK(0x800344E0);
ZZ_MARK(0x800344E4);
ZZ_MARK(0x800344E8);
ZZ_MARK(0x800344EC);
ZZ_MARK(0x800344F0);
ZZ_MARK(0x800344F4);
ZZ_MARK(0x800344F8);
ZZ_MARK(0x800344FC);
ZZ_MARK_TARGET(0x80034500,ZZ_34204_2FC);
ZZ_MARK(0x80034504);
ZZ_MARK(0x80034508);
ZZ_MARK(0x8003450C);
ZZ_MARK(0x80034510);
ZZ_MARK(0x80034514);
ZZ_MARK_TARGET(0x80034518,ZZ_34204_314);
ZZ_MARK(0x8003451C);
ZZ_MARK(0x80034520);
ZZ_MARK(0x80034524);
ZZ_MARK(0x80034528);
ZZ_MARK_TARGET(0x8003452C,ZZ_34204_328);
ZZ_MARK_TARGET(0x80034530,ZZ_34204_32C);
ZZ_MARK(0x80034534);
ZZ_MARK(0x80034538);
ZZ_MARK(0x8003453C);
ZZ_MARK(0x80034540);
ZZ_MARK(0x80034544);
ZZ_MARK(0x80034548);
ZZ_MARK(0x8003454C);
ZZ_MARK(0x80034550);
ZZ_MARK(0x80034554);
ZZ_MARK(0x80034558);