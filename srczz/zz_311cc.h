#ifdef ZZ_INCLUDE_CODE
ZZ_311CC:
	A2 = A0;
	A0 = EMU_ReadU32(A2 + 4); //+ 0x4
	V1 = EMU_ReadU32(A1 + 16); //+ 0x10
	V1 = (int32_t)V1 < (int32_t)A0;
	if (V1)
	{
		V0 = R0;
		ZZ_CLOCKCYCLES(7,0x8003125C);
		goto ZZ_311CC_90;
	}
	V0 = R0;
	A0 = EMU_ReadU32(A2 + 16); //+ 0x10
	V1 = EMU_ReadU32(A1 + 4); //+ 0x4
	V1 = (int32_t)V1 < (int32_t)A0;
	if (!V1)
	{
		ZZ_CLOCKCYCLES(13,0x8003125C);
		goto ZZ_311CC_90;
	}
	A0 = EMU_ReadU32(A2 + 12); //+ 0xC
	V1 = EMU_ReadU32(A1);
	V1 = (int32_t)V1 < (int32_t)A0;
	if (!V1)
	{
		ZZ_CLOCKCYCLES(19,0x8003125C);
		goto ZZ_311CC_90;
	}
	A0 = EMU_ReadU32(A2 + 20); //+ 0x14
	V1 = EMU_ReadU32(A1 + 8); //+ 0x8
	V1 = (int32_t)V1 < (int32_t)A0;
	if (!V1)
	{
		ZZ_CLOCKCYCLES(25,0x8003125C);
		goto ZZ_311CC_90;
	}
	A0 = EMU_ReadU32(A2);
	V1 = EMU_ReadU32(A1 + 12); //+ 0xC
	V1 = (int32_t)V1 < (int32_t)A0;
	if (V1)
	{
		ZZ_CLOCKCYCLES(31,0x8003125C);
		goto ZZ_311CC_90;
	}
	V1 = EMU_ReadU32(A2 + 8); //+ 0x8
	V0 = EMU_ReadU32(A1 + 20); //+ 0x14
	V0 = (int32_t)V0 < (int32_t)V1;
	V0 ^= 0x1;
	ZZ_CLOCKCYCLES(36,0x8003125C);
ZZ_311CC_90:
	ZZ_JUMPREGISTER_BEGIN(RA);
	ZZ_CLOCKCYCLES_JR(2);
	ZZ_JUMPREGISTER(0x8002DD04,ZZ_2D9F8_30C);
	ZZ_JUMPREGISTER(0x8002E090,ZZ_2D9F8_698);
	ZZ_JUMPREGISTER(0x8001A970,ZZ_1A848_128);
	ZZ_JUMPREGISTER(0x8001AA00,ZZ_1A848_1B8);
	ZZ_JUMPREGISTER(0x8002CFAC,ZZ_2CF64_48);
	ZZ_JUMPREGISTER(0x8001D108,ZZ_1D014_F4);
	ZZ_JUMPREGISTER(0x8001D268,ZZ_1D014_254);
	ZZ_JUMPREGISTER_END();
#endif
ZZ_MARK_TARGET(0x800311CC,ZZ_311CC);
ZZ_MARK(0x800311D0);
ZZ_MARK(0x800311D4);
ZZ_MARK(0x800311D8);
ZZ_MARK(0x800311DC);
ZZ_MARK(0x800311E0);
ZZ_MARK(0x800311E4);
ZZ_MARK(0x800311E8);
ZZ_MARK(0x800311EC);
ZZ_MARK(0x800311F0);
ZZ_MARK(0x800311F4);
ZZ_MARK(0x800311F8);
ZZ_MARK(0x800311FC);
ZZ_MARK(0x80031200);
ZZ_MARK(0x80031204);
ZZ_MARK(0x80031208);
ZZ_MARK(0x8003120C);
ZZ_MARK(0x80031210);
ZZ_MARK(0x80031214);
ZZ_MARK(0x80031218);
ZZ_MARK(0x8003121C);
ZZ_MARK(0x80031220);
ZZ_MARK(0x80031224);
ZZ_MARK(0x80031228);
ZZ_MARK(0x8003122C);
ZZ_MARK(0x80031230);
ZZ_MARK(0x80031234);
ZZ_MARK(0x80031238);
ZZ_MARK(0x8003123C);
ZZ_MARK(0x80031240);
ZZ_MARK(0x80031244);
ZZ_MARK(0x80031248);
ZZ_MARK(0x8003124C);
ZZ_MARK(0x80031250);
ZZ_MARK(0x80031254);
ZZ_MARK(0x80031258);
ZZ_MARK_TARGET(0x8003125C,ZZ_311CC_90);
ZZ_MARK(0x80031260);