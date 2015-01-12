#ifdef ZZ_INCLUDE_CODE
ZZ_1EB2C:
	SP -= 96;
	EMU_Write32(SP + 80,S0); //+ 0x50
	S0 = A0;
	EMU_Write32(SP + 84,S1); //+ 0x54
	S1 = A1;
	EMU_Write32(SP + 88,S2); //+ 0x58
	S2 = EMU_ReadU32(SP + 112); //+ 0x70
	A0 = SP + 16;
	A1 = A2;
	EMU_Write32(SP + 92,RA); //+ 0x5C
	RA = 0x8001EB5C; //ZZ_1EB2C_30
	A2 = A3;
	ZZ_CLOCKCYCLES(12,0x8001E9C8);
	goto ZZ_1E9C8;
ZZ_1EB2C_30:
	V0 = EMU_ReadU32(S0);
	if ((int32_t)V0 >= 0)
	{
		ZZ_CLOCKCYCLES(4,0x8001EB70);
		goto ZZ_1EB2C_44;
	}
	V0 += 15;
	ZZ_CLOCKCYCLES(5,0x8001EB70);
ZZ_1EB2C_44:
	V0 = (int32_t)V0 >> 4;
	EMU_Write32(SP + 64,V0); //+ 0x40
	V0 = EMU_ReadU32(S0 + 4); //+ 0x4
	if ((int32_t)V0 >= 0)
	{
		ZZ_CLOCKCYCLES(6,0x8001EB8C);
		goto ZZ_1EB2C_60;
	}
	V0 += 15;
	ZZ_CLOCKCYCLES(7,0x8001EB8C);
ZZ_1EB2C_60:
	V0 = (int32_t)V0 >> 4;
	EMU_Write32(SP + 68,V0); //+ 0x44
	V0 = EMU_ReadU32(S0 + 8); //+ 0x8
	if ((int32_t)V0 >= 0)
	{
		A0 = SP + 64;
		ZZ_CLOCKCYCLES(6,0x8001EBA8);
		goto ZZ_1EB2C_7C;
	}
	A0 = SP + 64;
	V0 += 15;
	ZZ_CLOCKCYCLES(7,0x8001EBA8);
ZZ_1EB2C_7C:
	A1 = SP + 16;
	A2 = SP + 48;
	V0 = (int32_t)V0 >> 4;
	RA = 0x8001EBBC; //ZZ_1EB2C_90
	EMU_Write32(SP + 72,V0); //+ 0x48
	ZZ_CLOCKCYCLES(5,0x800182B8);
	goto ZZ_182B8;
ZZ_1EB2C_90:
	A0 = EMU_ReadU32(SP + 48); //+ 0x30
	V0 = EMU_ReadU32(SP + 52); //+ 0x34
	V1 = EMU_ReadU32(SP + 56); //+ 0x38
	A0 <<= 4;
	V0 <<= 4;
	V1 <<= 4;
	EMU_Write32(SP + 48,A0); //+ 0x30
	EMU_Write32(SP + 52,V0); //+ 0x34
	EMU_Write32(SP + 56,V1); //+ 0x38
	V0 = EMU_ReadU32(S1);
	A0 += V0;
	EMU_Write32(S2,A0);
	V0 = EMU_ReadU32(SP + 52); //+ 0x34
	V1 = EMU_ReadU32(S1 + 4); //+ 0x4
	V0 += V1;
	EMU_Write32(S2 + 4,V0); //+ 0x4
	V0 = EMU_ReadU32(SP + 56); //+ 0x38
	V1 = EMU_ReadU32(S1 + 8); //+ 0x8
	V0 += V1;
	EMU_Write32(S2 + 8,V0); //+ 0x8
	RA = EMU_ReadU32(SP + 92); //+ 0x5C
	S2 = EMU_ReadU32(SP + 88); //+ 0x58
	S1 = EMU_ReadU32(SP + 84); //+ 0x54
	S0 = EMU_ReadU32(SP + 80); //+ 0x50
	SP += 96;
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(30);
	ZZ_JUMPREGISTER(0x80038658,ZZ_38414_244);
	ZZ_JUMPREGISTER(0x8003880C,ZZ_38414_3F8);
	ZZ_JUMPREGISTER(0x8002C9C8,ZZ_2C638_390);
	ZZ_JUMPREGISTER(0x8001E4AC,ZZ_1D860_C4C);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x8001EB2C,ZZ_1EB2C);
ZZ_MARK(0x8001EB30);
ZZ_MARK(0x8001EB34);
ZZ_MARK(0x8001EB38);
ZZ_MARK(0x8001EB3C);
ZZ_MARK(0x8001EB40);
ZZ_MARK(0x8001EB44);
ZZ_MARK(0x8001EB48);
ZZ_MARK(0x8001EB4C);
ZZ_MARK(0x8001EB50);
ZZ_MARK(0x8001EB54);
ZZ_MARK(0x8001EB58);
ZZ_MARK_TARGET(0x8001EB5C,ZZ_1EB2C_30);
ZZ_MARK(0x8001EB60);
ZZ_MARK(0x8001EB64);
ZZ_MARK(0x8001EB68);
ZZ_MARK(0x8001EB6C);
ZZ_MARK_TARGET(0x8001EB70,ZZ_1EB2C_44);
ZZ_MARK(0x8001EB74);
ZZ_MARK(0x8001EB78);
ZZ_MARK(0x8001EB7C);
ZZ_MARK(0x8001EB80);
ZZ_MARK(0x8001EB84);
ZZ_MARK(0x8001EB88);
ZZ_MARK_TARGET(0x8001EB8C,ZZ_1EB2C_60);
ZZ_MARK(0x8001EB90);
ZZ_MARK(0x8001EB94);
ZZ_MARK(0x8001EB98);
ZZ_MARK(0x8001EB9C);
ZZ_MARK(0x8001EBA0);
ZZ_MARK(0x8001EBA4);
ZZ_MARK_TARGET(0x8001EBA8,ZZ_1EB2C_7C);
ZZ_MARK(0x8001EBAC);
ZZ_MARK(0x8001EBB0);
ZZ_MARK(0x8001EBB4);
ZZ_MARK(0x8001EBB8);
ZZ_MARK_TARGET(0x8001EBBC,ZZ_1EB2C_90);
ZZ_MARK(0x8001EBC0);
ZZ_MARK(0x8001EBC4);
ZZ_MARK(0x8001EBC8);
ZZ_MARK(0x8001EBCC);
ZZ_MARK(0x8001EBD0);
ZZ_MARK(0x8001EBD4);
ZZ_MARK(0x8001EBD8);
ZZ_MARK(0x8001EBDC);
ZZ_MARK(0x8001EBE0);
ZZ_MARK(0x8001EBE4);
ZZ_MARK(0x8001EBE8);
ZZ_MARK(0x8001EBEC);
ZZ_MARK(0x8001EBF0);
ZZ_MARK(0x8001EBF4);
ZZ_MARK(0x8001EBF8);
ZZ_MARK(0x8001EBFC);
ZZ_MARK(0x8001EC00);
ZZ_MARK(0x8001EC04);
ZZ_MARK(0x8001EC08);
ZZ_MARK(0x8001EC0C);
ZZ_MARK(0x8001EC10);
ZZ_MARK(0x8001EC14);
ZZ_MARK(0x8001EC18);
ZZ_MARK(0x8001EC1C);
ZZ_MARK(0x8001EC20);
ZZ_MARK(0x8001EC24);
ZZ_MARK(0x8001EC28);
ZZ_MARK(0x8001EC2C);
ZZ_MARK(0x8001EC30);