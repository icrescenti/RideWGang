#region Local Var
	var uLocal_0 = 7;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = -1;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	float fLocal_16 = 0f;
	float fLocal_17 = 0f;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	vector3 vLocal_48 = { 0f, 0f, 0f };
	bool bLocal_51 = false;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	bool bLocal_57 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_16 = 1f;
	fLocal_17 = 1f;
	vLocal_48 = { -1837.777f, -440.5519f, 158.5646f };
	iLocal_52 = 20000;
	iLocal_55 = vScriptParam_0.x;
	iLocal_53 = vScriptParam_0.z;
	bLocal_57 = false;
	if (Global_1901929->f_1.f_24 > 0)
	{
		func_1();
	}
	func_2();
	func_3();
	iLocal_54 = MISC::GET_GAME_TIMER();
	iVar0 = 0;
	while (func_4())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_54)
		{
			iLocal_54 = 0;
			func_5(iLocal_55, &iLocal_53);
			switch (iLocal_53)
			{
				case 0:
					if (Global_1901929->f_1.f_24 > 0)
					{
						iLocal_56 = (MISC::GET_GAME_TIMER() + Global_1901929->f_1.f_24);
						iLocal_53 = 1;
					}
					else
					{
						iLocal_53 = 2;
					}
					break;
				case 1:
					if (!func_1() || iLocal_56 < MISC::GET_GAME_TIMER())
					{
						bLocal_57 = false;
						iLocal_53 = 2;
					}
					break;
				case 2:
					func_6(iLocal_55);
					func_7();
					func_8();
					if (func_10(func_9(iLocal_55)))
					{
						func_11(func_9(iLocal_55), 4);
					}
					LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), func_12(iLocal_55));
					Global_1896608 = -1;
					iLocal_56 = (iLocal_52 + MISC::GET_GAME_TIMER());
					iLocal_53 = 3;
					break;
				case 3:
					if (func_13() || iLocal_56 < MISC::GET_GAME_TIMER())
					{
						func_14(iLocal_55);
						iLocal_56 = (iLocal_52 + MISC::GET_GAME_TIMER());
						iLocal_53 = 4;
					}
					break;
				case 4:
					if (func_15(iLocal_55) || iLocal_56 < MISC::GET_GAME_TIMER())
					{
						func_16(iLocal_55);
						iLocal_56 = (MISC::GET_GAME_TIMER() + iLocal_52);
						iLocal_53 = 5;
					}
					break;
				case 5:
					if (func_17(iLocal_55) || iLocal_56 < MISC::GET_GAME_TIMER())
					{
						func_18(iLocal_55);
						iLocal_56 = (iLocal_52 + MISC::GET_GAME_TIMER());
						iLocal_53 = 7;
					}
					break;
				case 7:
					if (func_10(func_9(iLocal_55)))
					{
						if (func_19(func_9(iLocal_55), 4) && !iLocal_56 < MISC::GET_GAME_TIMER())
						{
						}
						else
						{
							if (func_20(iLocal_55) || iLocal_56 < MISC::GET_GAME_TIMER())
							{
								func_21(iLocal_55, 4);
								iLocal_56 = (iLocal_52 + MISC::GET_GAME_TIMER());
								iLocal_53 = 8;
							}
							Jump @832; //curOff = 548
							func_22(iLocal_55);
							func_23();
							if (!func_24(4105, 0))
							{
								func_25();
							}
							func_26();
							func_27();
							func_28();
							func_29(iLocal_55);
							func_30(iLocal_55);
							func_31();
							func_32();
							iLocal_53 = 9;
							Jump @832; //curOff = 616
							func_33(iLocal_55);
							func_34();
							iLocal_53 = 10;
							Jump @832; //curOff = 633
							func_35(Global_1896662);
							func_36(iLocal_55, Global_1896662);
							iLocal_53 = 11;
							Jump @832; //curOff = 658
							func_37(iLocal_55);
							func_21(iLocal_55, 8);
							if (func_38(32))
							{
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									CAM::DO_SCREEN_FADE_IN(500);
								}
								func_39(32);
							}
							iLocal_53 = 12;
							Jump @832; //curOff = 708
							if (func_40(iLocal_55))
							{
								iLocal_54 = MISC::GET_GAME_TIMER() + 1000;
							}
							func_41(Global_1896662, iLocal_55);
							func_42(iLocal_55);
							func_21(iLocal_55, 8);
							if (func_43())
							{
								PED::_0xBA0980B5C0A11924(0f);
							}
							PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(((*Global_1887327)[iLocal_55 /*36*/])->f_11);
							if (((*Global_1887327)[iLocal_55 /*36*/])->f_12 > 0f)
							{
								PED::_0xA77FA7BE9312F8C0(((*Global_1887327)[iLocal_55 /*36*/])->f_12);
							}
							Jump @832; //curOff = 809
							func_8();
							func_44(iVar0);
							iVar0 = (1 + iVar0);
						}
						if (((*Global_1887327)[iLocal_55 /*36*/])->f_13 != 0)
						{
							PED::_0x95423627A9CA598E(((*Global_1887327)[iLocal_55 /*36*/])->f_13);
						}
						BUILTIN::WAIT(0);
						iVar0 = 0;
						while (!func_44(iVar0))
						{
							iVar0 = (1 + iVar0);
							BUILTIN::WAIT(0);
						}
						if (func_45() != -1)
						{
							func_46();
						}
						SCRIPTS::TERMINATE_THIS_THREAD();
					}
			}
		}
	}

int func_1()
{
	if (!bLocal_57)
	{
		if (&Global_1051089)
		{
			bLocal_57 = true;
			return 1;
		}
		if (func_47() && func_48())
		{
			bLocal_57 = true;
			return 1;
		}
		return 0;
	}
	if (&Global_1051089)
	{
		return 1;
	}
	if (func_48())
	{
		return 1;
	}
	bLocal_57 = false;
	return 0;
}

void func_2()
{
	int iVar0;

	if (func_45() != -1)
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	}
	else if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		if (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
		}
		iVar0 = 0;
		while (!func_44(iVar0))
		{
			iVar0++;
			BUILTIN::WAIT(0);
		}
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

void func_3()
{
}

int func_4()
{
	if (func_45() != -1)
	{
		return !func_49(1, 1);
	}
	return 1;
}

void func_5(int iParam0, int iParam1)
{
	if (!func_38(16))
	{
		return;
	}
	if (Global_1893575->f_7 == 0)
	{
		func_39(16);
		return;
	}
	if (!func_50(iParam0))
	{
		Global_1893575->f_7 = 0;
		func_39(16);
		return;
	}
	if (func_51(8))
	{
		if (*iParam1 == 12)
		{
			*iParam1 = 8;
			return;
		}
		else if (*iParam1 != 8)
		{
			func_52(8);
			*iParam1 = 12;
			return;
		}
	}
	if (func_51(2))
	{
		if (*iParam1 == 12)
		{
			*iParam1 = 4;
			return;
		}
		else if (*iParam1 != 4)
		{
			func_52(2);
			*iParam1 = 12;
			return;
		}
	}
	if (func_51(16))
	{
		if (*iParam1 == 12)
		{
			*iParam1 = 9;
			return;
		}
		else if (*iParam1 != 9)
		{
			func_52(16);
			*iParam1 = 12;
			return;
		}
	}
	if (func_51(4))
	{
		if (*iParam1 == 12)
		{
			*iParam1 = 7;
			return;
		}
		else if (*iParam1 != 7)
		{
			func_52(4);
			*iParam1 = 12;
			return;
		}
	}
	if (func_51(1))
	{
		if (*iParam1 == 12)
		{
			*iParam1 = 3;
			return;
		}
		else if (*iParam1 != 3)
		{
			func_52(1);
			*iParam1 = 12;
			return;
		}
	}
}

void func_6(int iParam0)
{
}

void func_7()
{
	if (!Global_1099293->f_644)
	{
		Global_1099293->f_644 = 1;
	}
}

void func_8()
{
	if (!Global_1070355->f_22101)
	{
		Global_1070355->f_22101 = 1;
	}
}

int func_9(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	else if (iParam0 <= 10)
	{
		return 0;
	}
	else if (iParam0 <= 30)
	{
		return 1;
	}
	else if (iParam0 <= 34)
	{
		return 2;
	}
	else if (iParam0 <= 38)
	{
		return 3;
	}
	else if (iParam0 <= 41)
	{
		return 4;
	}
	else if (iParam0 <= 52)
	{
		return 7;
	}
	else if (iParam0 <= 61)
	{
		return 6;
	}
	else if (iParam0 <= 66)
	{
		return 8;
	}
	else if (iParam0 <= 81)
	{
		return 9;
	}
	else if (iParam0 <= 98)
	{
		return 10;
	}
	else if (iParam0 <= 112)
	{
		return 11;
	}
	else if (iParam0 <= 119)
	{
		return 12;
	}
	else if (iParam0 <= 122)
	{
		return 13;
	}
	else if (iParam0 <= 126)
	{
		return 14;
	}
	else if (iParam0 <= 133)
	{
		return 15;
	}
	else if (iParam0 <= 136)
	{
		return 16;
	}
	return -1;
}

bool func_10(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

void func_11(int iParam0, int iParam1)
{
	(*Global_1896610)[iParam0 /*2*/] = (Global_1896610[iParam0 /*2*/] || iParam1);
}

int func_12(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 40:
			iVar0 = -34953917;
			break;
		case 87:
			iVar0 = -1182515549;
			break;
		case 74:
			iVar0 = -180439396;
			break;
		case 66:
			iVar0 = -380981263;
			break;
		case 116:
			iVar0 = 960614592;
			break;
		case 5:
			iVar0 = -896916581;
			break;
		case 37:
			iVar0 = 503372696;
			break;
		case 111:
			iVar0 = 1004478670;
			break;
		case 26:
			iVar0 = -1545648199;
			break;
		case 81:
			iVar0 = -379634634;
			break;
		case 98:
			iVar0 = 288297518;
			break;
		case 60:
			iVar0 = 1812404612;
			break;
		case 83:
			iVar0 = 1827444358;
			break;
		default:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_13()
{
	iLocal_21 = ((*Global_1887327)[26 /*36*/])->f_5;
	VOLUME::_0xB469CFD9E065EB99(iLocal_21, 7);
	iLocal_22 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Strawberry - m_volGeneral Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_22, -1791.951f, -386.005f, 161.147f, 0f, 0f, -34.984f, 8.855f, 6.307f, 3.139f);
	VOLUME::_0x39816F6F94F385AD(iLocal_22, -1793.558f, -394.3542f, 160.6098f, 0f, 0f, -34.79824f, 2f, 4.25f, 2.559283f);
	iLocal_23 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1791.368f, -386.7759f, 160.8563f, 0f, 0f, -34.984f, 1.732364f, 2.839859f, 3.059408f, "Strawberry - m_volGeneralPrompt");
	iLocal_24 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1789.667f, -388.7473f, 160.8563f, 0f, 0f, -34.984f, 1.732364f, 3.896986f, 3.059408f, "Strawberry - m_volGeneralCounterOff");
	VOLUME::_0xB469CFD9E065EB99(iLocal_22, 10031);
	iLocal_39 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1815.467f, -370.5389f, 164.0239f, 0f, 0f, 0f, 11.60175f, 9.167067f, 6.826107f, "Strawberry - m_volHotel");
	iLocal_40 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1818.428f, -370.8229f, 163.5279f, 0f, 0f, 0f, 3.110365f, 1.628369f, 2.537012f, "Strawberry - m_volHotelPrompt");
	iLocal_41 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1817.185f, -372.616f, 163.5279f, 0f, 0f, 0f, 2.140435f, 1.628369f, 2.537012f, "Strawberry - m_volHotelOfflimits");
	iLocal_42 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1808.08f, -370.6061f, 162.8967f, 0f, 0f, 0f, 3.017183f, 9.270863f, 2.154101f, "Strawberry - m_volHotelPorch");
	iLocal_43 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1815.467f, -370.539f, 166.547f, 0f, 0f, 0f, 12.2f, 9.494f, 2.515f, "Strawberry - m_volMute");
	iLocal_28 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1764.683f, -382.6835f, 158.2782f, 0f, 0f, -34.984f, 9.48952f, 5.821443f, 3.059408f, "Strawberry - m_volPostOfficeOwner");
	iLocal_30 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Strawberry - m_volPostOfficeOfflimits Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_30, -1763.516f, -378.3214f, 158.2782f, 0f, 0f, -34.984f, 4.345877f, 2.597463f, 3.059408f);
	VOLUME::_0x39816F6F94F385AD(iLocal_30, -1766.218f, -379.3755f, 158.2782f, 0f, 0f, -34.984f, 3.121531f, 2.179444f, 3.059408f);
	VOLUME::_0x39816F6F94F385AD(iLocal_30, -1762.194f, -384.4291f, 158.2782f, 0f, 0f, -34.984f, 3.429085f, 5.790822f, 3.059408f);
	iLocal_29 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1765.216f, -384.046f, 158.2782f, 0f, 0f, -34.984f, 1.835f, 2.004f, 3.059f, "Strawberry - m_volPostOfficePrompt");
	iLocal_31 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Strawberry Stn - m_volPostOfficePARENT Agg");
	VOLUME::_0x6E0D3C3F828DA773(iLocal_31, iLocal_28);
	VOLUME::_0x6E0D3C3F828DA773(iLocal_31, iLocal_30);
	VOLUME::_0xB469CFD9E065EB99(iLocal_31, 10032);
	iLocal_26 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Strawberry - m_volSheriff");
	VOLUME::_0x39816F6F94F385AD(iLocal_26, func_53(26), 0f, 0f, 65.016f, 12f, 7f, 7.256f);
	VOLUME::_0x39816F6F94F385AD(iLocal_26, -1815.8f, -346.5f, 162.9f, 0f, 0f, 65.016f, 12f, 4f, 12f);
	iLocal_37 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1791.951f, -386.005f, 160.8563f, 0f, 0f, -34.984f, 9.1f, 6.4f, 3.256194f, "Strawberry - m_volGeneralPerscharOwnerVolume");
	iLocal_38 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1812.002f, -350.8301f, 161.6032f, 0f, 0f, 65.01599f, 11.2f, 6.3f, 4f, "Strawberry - m_volSheriffPerscharOwnerVolume");
	iLocal_32 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1753.4f, -392.8f, 156.3f, 0f, 0f, 58.4334f, 12.83099f, 10.50166f, 3.5f, "Strawberry - m_volButcher");
	iLocal_33 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1753.057f, -395.413f, 156.2f, 0f, 0f, 0.043f, 3f, 2f, 2f, "Strawberry - m_volButcherPrompt");
	VOLUME::_0xB469CFD9E065EB99(iLocal_32, 10028);
	iLocal_45 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1792.105f, -567.4036f, 156.8778f, 0f, 0f, -17.23253f, 31.23772f, 57.05016f, 16.08004f, "Strawberry - m_volHorseShopPen");
	iLocal_46 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1774.928f, -442.6181f, 155.4679f, 0f, 0f, -15.38216f, 6.696809f, 7.42134f, 4.243239f, "Strawberry - m_volRancherOwner");
	if (func_45() == -1)
	{
		iLocal_35 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1819.88f, -561.8194f, 156.632f, 0f, 0f, 74.99999f, 6.328568f, 11.11597f, 4.543f, "Strawberry Horse Shop - m_volHorseShop");
		iLocal_36 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1813.551f, -563.673f, 157.3218f, 0f, 0f, 74.99999f, 3.5f, 3.557868f, 4.892247f, "StrawberryHorse Shop - m_volHorseShopOutsideDoor");
		func_54(9, iLocal_36);
	}
	else
	{
		iLocal_35 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1819.88f, -561.8194f, 157.2323f, 0f, 0f, 74.99999f, 6.328568f, 11.11597f, 3.806699f, "Strawberry - m_volHorseShop");
	}
	iLocal_27 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Strawberry - m_volSheriffLoitering Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_27, -1812.852f, -352.8134f, 163.3997f, 0f, 0f, 65.01599f, 6.286466f, 5.825926f, 7.256f);
	VOLUME::_0x39816F6F94F385AD(iLocal_27, -1810.468f, -349.3962f, 163.3997f, 0f, 0f, 65.01599f, 6.286466f, 7.111871f, 7.151284f);
	VOLUME::_0x3EFABB21E14A6BD1(iLocal_27, 5, 1);
	func_55();
	return 1;
}

void func_14(int iParam0)
{
	iParam0 = iParam0;
}

int func_15(int iParam0)
{
	iParam0 = iParam0;
	return 1;
}

void func_16(int iParam0)
{
	iParam0 = iParam0;
}

int func_17(int iParam0)
{
	iParam0 = iParam0;
	return 1;
}

void func_18(int iParam0)
{
	iParam0 = iParam0;
}

bool func_19(int iParam0, int iParam1)
{
	return (Global_1896610[iParam0 /*2*/] && iParam1) != 0;
}

bool func_20(int iParam0)
{
	return func_56(iParam0, -1, -1, 0);
}

void func_21(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		Global_7888[iParam0 /*11*/] = (Global_7888[iParam0 /*11*/] || iParam1);
	}
	else
	{
		Global_1070355->f_17941[iParam0 /*11*/] = (Global_1070355->f_17941[iParam0 /*11*/] || iParam1);
	}
}

void func_22(int iParam0)
{
	iParam0 = iParam0;
}

void func_23()
{
}

int func_24(int iParam0, bool bParam1)
{
	if (func_57(iParam0))
	{
		return 1;
	}
	if (!bParam1)
	{
		if (func_58(5000))
		{
			return 1;
		}
	}
	switch (func_60(func_59(0)))
	{
		case -1:
			return 0;
		case 2:
			if (iParam0 & 1 != 0)
			{
				return 1;
			}
			break;
		case 5:
			if (iParam0 & 2 != 0)
			{
				return 1;
			}
			break;
		case 3:
			if (iParam0 & 16 != 0)
			{
				return 1;
			}
			break;
		case 4:
			if (iParam0 & 32 != 0)
			{
				return 1;
			}
			break;
		case 7:
			if (iParam0 & 1024 != 0)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_25()
{
}

void func_26()
{
	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
	}
}

void func_27()
{
}

void func_28()
{
}

void func_29(int iParam0)
{
	func_61(3, iLocal_22, iParam0, iLocal_23, iLocal_24, 4, 0, 0, -1082130432 /* Float: -1f */, 0);
	func_62(3, 1595373759, 0, 0);
	func_62(3, 1854467923, 0, 0);
	func_63(3, 8192);
	func_64(3, 0);
	func_61(25, iLocal_26, iParam0, 0, 0, 2, 0, 0, -1082130432 /* Float: -1f */, 0);
	func_63(25, 1);
	func_63(25, 16384);
	func_63(25, 8192);
	func_63(25, 536870912);
	func_61(10, iLocal_32, iParam0, iLocal_33, 0, 460, 0, 0, -1082130432 /* Float: -1f */, 0);
	func_63(10, 536870912);
	func_64(10, 0);
	func_61(9, iLocal_35, iParam0, 0, 0, 2, 1, 0, -1082130432 /* Float: -1f */, 0);
	func_63(9, 536870912);
	func_63(9, 16384);
	func_63(9, 32768);
	func_63(9, 1);
	func_63(9, 8388608);
	func_63(9, 8192);
	func_63(9, 4);
	func_63(9, 16777216);
	func_63(9, 67108864);
	if (!func_65() && func_66())
	{
		func_62(9, 1889654345, 0, 0);
		func_62(9, -937753286, 0, 0);
	}
	else
	{
		func_62(9, 1889654345, -1f, 1);
		func_62(9, -937753286, 1f, 1);
	}
	func_61(2, iLocal_31, iParam0, iLocal_29, iLocal_30, 1277952, 0, 0, -1082130432 /* Float: -1f */, 0);
	func_64(2, 0);
	func_67(iParam0);
	ENTITY::CREATE_MODEL_HIDE(vLocal_48, 5f, 2052583298, false);
}

void func_30(int iParam0)
{
	iParam0 = iParam0;
	if (func_68(466, iLocal_38, 1))
	{
		func_68(467, iLocal_38, 0);
		VOLUME::_0x3EFABB21E14A6BD1(iLocal_38, 5, 1);
	}
	func_68(468, iLocal_37, 1);
	func_68(470, iLocal_31, 1);
	func_68(473, iLocal_45, 1);
	func_68(474, iLocal_45, 0);
	func_68(478, iLocal_46, 1);
}

void func_31()
{
}

void func_32()
{
}

void func_33(int iParam0)
{
	func_69(1f, 0f, 0f, 0f);
	iLocal_47 = VEHICLE::_ADD_SPEED_ZONE_FOR_COORD(-1809.28f, -396.9163f, 153.0447f, 85f, 2f, 2f, 0, 6f, 10f, 25f, 7.5f);
}

void func_34()
{
	if (!Global_1893575->f_186)
	{
		VEHICLE::_0xF5FFB08976911B50(Global_1893575->f_182, Global_1893575->f_183, Global_1893575->f_184, Global_1893575->f_185);
	}
}

void func_35(var uParam0)
{
	int iVar0;

	if (uParam0->f_61 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		(*uParam0)[iVar0 /*3*/] = 0;
		((*uParam0)[iVar0 /*3*/])->f_1 = 0;
		((*uParam0)[uParam0->f_61 /*3*/])->f_2 = 0;
		iVar0++;
	}
	uParam0->f_61 = 0;
}

void func_36(int iParam0, var uParam1)
{
	iParam0 = iParam0;
	func_70(uParam1, iLocal_21, 1);
	func_70(uParam1, iLocal_32, 2);
	func_70(uParam1, iLocal_22, 2);
	func_70(uParam1, iLocal_31, 10);
}

void func_37(int iParam0)
{
	if (!func_71(iParam0))
	{
		return;
	}
	func_72();
	func_73(0, -1885260346);
	func_73(2, 885069200);
}

bool func_38(int iParam0)
{
	return (Global_1893575 && iParam0) != 0;
}

void func_39(int iParam0)
{
	Global_1893575 = (&Global_1893575 - (Global_1893575 && iParam0));
}

int func_40(int iParam0)
{
	func_74();
	if (func_75(&bLocal_51))
	{
		if (bLocal_51)
		{
			func_76(-1751348037, 1);
			func_77(-387803631, 1, 0, 0, 0, 0, 0, 0);
			func_76(1024651048, 1);
			func_76(-2089878557, 1);
		}
	}
	return 0;
}

void func_41(var uParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;

	if ((BUILTIN::VDIST(Global_36, 0f, 0f, 0f) <= 5f || func_78(&Global_1939168, 32768)) || func_78(&Global_1939168, 16777216))
	{
		return;
	}
	if (func_79(uParam0, 1))
	{
		return;
	}
	uParam0->f_63++;
	if (uParam0->f_63 < 10)
	{
		return;
	}
	uParam0->f_63 = 0;
	bVar0 = false;
	bVar1 = ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADING_OUT());
	bVar2 = func_80();
	iVar3 = 0;
	while (iVar3 < uParam0->f_61)
	{
		switch (((*uParam0)[iVar3 /*3*/])->f_1)
		{
			case 1:
				if (VOLUME::_0x92A78D0BEDB332A3(uParam0[iVar3 /*3*/]))
				{
					if (VOLUME::_0xF256A75210C5C0EB(uParam0[iVar3 /*3*/], Global_36))
					{
						if (!bVar1 && !bVar2)
						{
							if ((!func_81((*uParam0)[iVar3 /*3*/], 1) && func_82(iParam1)) && !func_83(iParam1, 16))
							{
								func_85(iParam1, func_84(), -1, 0, -1, 0);
								func_86((*uParam0)[iVar3 /*3*/], 1);
							}
							func_87(iParam1, 0);
						}
						bVar0 = true;
					}
				}
				break;
			default:
				break;
		}
		iVar3++;
	}
	func_88(bVar0);
}

int func_42(int iParam0)
{
	iParam0 = iParam0;
	return 1;
}

int func_43()
{
	var uVar0;
	var uVar1;
	float fVar2;
	int iVar3;

	MISC::_GET_WEATHER_TYPE_TRANSITION(&uVar0, &uVar1, &fVar2);
	if (fVar2 < 0.75f)
	{
		iVar3 = uVar0;
	}
	else
	{
		iVar3 = uVar1;
	}
	if (func_89(iVar3))
	{
		return 1;
	}
	return 0;
}

int func_44(int iParam0)
{
	if (iParam0 == 0)
	{
		func_90();
		LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), 0);
		func_21(iLocal_55, 2048);
		if (STATS::CHAL_IS_GOAL_ACTIVE(-663946200, 1055032020))
		{
			switch (iLocal_55)
			{
				case 3:
				case 5:
				case 26:
				case 40:
				case 45:
				case 81:
				case 83:
				case 98:
				case 111:
				case 121:
				case 127:
				case 135:
					STATS::CHAL_ADD_GOAL_PROGRESS_INT_BY_SCORE_ID(func_91(iLocal_55, 0), 1);
					break;
			}
		}
		if (func_10(func_84()))
		{
			func_11(func_84(), 8);
		}
		func_92(iLocal_55, 4);
		func_92(iLocal_55, 8);
		func_88(0);
		if (func_45() == -1)
		{
			func_93(0);
		}
		func_94(iLocal_55);
		func_34();
		return 0;
	}
	else if (func_45() == -1)
	{
		func_95(iLocal_55);
		func_96(iLocal_55);
		if (!func_97(iLocal_55, 0))
		{
			return 0;
		}
	}
	else if (!func_98(iLocal_55))
	{
		return 0;
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
	return 1;
}

int func_45()
{
	return Global_1572887->f_13;
}

void func_46()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_47()
{
	if (Global_1572887->f_342.f_3 > 0)
	{
		return 1;
	}
	if (Global_1572887->f_342.f_4 != 0)
	{
		return 1;
	}
	return 0;
}

int func_48()
{
	if (NETWORK::_0x1B89BC43B6E69107(joaat("fm_mission_controller"), -1, 0, 0))
	{
		return 1;
	}
	if (NETWORK::_0x1B89BC43B6E69107(-701235215, -1, 0, 0))
	{
		return 1;
	}
	if (NETWORK::_0x1B89BC43B6E69107(-814065802, -1, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_49(bool bParam0, bool bParam1)
{
	int iVar0;

	if (Global_1572887->f_12)
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bParam1 && NETWORK::_0xF2CBC969C4F090C7())
		{
		}
		else if (bParam1 && NETWORK::NETWORK_IS_SESSION_ACTIVE())
		{
		}
		else if (bParam1 && &Global_1572887 < 39)
		{
		}
		else
		{
			return 1;
		}
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
		{
			case 0:
				return 1;
			case 1:
				return 1;
			case 2:
				if (!bParam0)
				{
					return 1;
				}
				break;
			case 4:
				return 1;
			case 3:
				return 1;
			default:
				return 1;
		}
	}
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		if (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0) == 1976253964)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_50(int iParam0)
{
	if (!func_71(iParam0))
	{
		return 0;
	}
	return func_99(iParam0, 8);
}

bool func_51(int iParam0)
{
	return (Global_1893575->f_7 && iParam0) != 0;
}

void func_52(int iParam0)
{
	Global_1893575->f_7 = (Global_1893575->f_7 - (Global_1893575->f_7 && iParam0));
}

Vector3 func_53(int iParam0)
{
	switch (iParam0)
	{
		case 83:
			return 2907.465f, 1311.91f, 45.43893f;
		case 81:
			return -275.6f, 805.3f, 119.4f;
		case 40:
			return -763f, -1269.2f, 44.5f;
		case 26:
			return -1809.3f, -349.3f, 164.6f;
		case 5:
			return 2512.3f, -1306f, 48f;
		case 111:
			return 1359.2f, -1302.9f, 77.8f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_54(int iParam0, int iParam1)
{
	(Global_1915170->f_3[iParam0 /*447*/])->f_32 = iParam1;
}

void func_55()
{
	iLocal_25 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN - m_volGeneralStorePorch Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_25, -1796.973f, -382.4901f, 160.8563f, 0f, 0f, -34.984f, 3.075656f, 10.30693f, 3.256194f);
	VOLUME::_0x39816F6F94F385AD(iLocal_25, -1789.325f, -382.7872f, 160.8563f, 0f, 0f, -124.786f, 1.84945f, 10.30693f, 3.256194f);
}

int func_56(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_45() != -1)
	{
		return 1;
	}
	if (!func_71(iParam0))
	{
		return 1;
	}
	if (func_99(iParam0, 16))
	{
		return 1;
	}
	if (func_100(iParam0) && !func_101(iParam0))
	{
	}
	if (func_102(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (func_103(iParam1))
		{
			iVar0 = iParam1;
		}
		if (func_103(iParam2))
		{
			iVar1 = iParam2;
		}
		if (&Global_1896608 < iVar0 || &Global_1896608 > iVar1)
		{
			Global_1896608 = iVar0;
		}
		while (true)
		{
			if ((!func_100(iParam0) || func_101(iParam0)) || func_104(&Global_1896608))
			{
				func_105(&Global_1896608, 0);
			}
			Global_1896608 = &Global_1896608 + 1;
			iVar2++;
			if (&Global_1896608 > iVar1)
			{
				Global_1896608 = -1;
				return 1;
			}
			if (iVar2 >= 10 && !bParam3)
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_57(var uParam0)
{
	return (Global_1939168 && uParam0) != 0;
}

bool func_58(int iParam0)
{
	return (MISC::GET_GAME_TIMER() - iParam0) < &Global_1900853;
}

struct<2> func_59(int iParam0)
{
	return *(Global_1900718->f_1[iParam0 /*2*/]);
}

int func_60(var uParam0, var uParam1)
{
	return uParam0;
}

void func_61(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, float fParam8, int iParam9)
{
	if (iParam0 == 9 && !(!func_65() && func_106()))
	{
		if (func_107(255))
		{
			if (VOLUME::_0xF256A75210C5C0EB(iParam1, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
			{
				func_108(1, 1);
			}
		}
	}
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	func_109(iParam0);
	Global_1051387->f_69[iParam0 /*76*/] = 0;
	(Global_1051387->f_69[iParam0 /*76*/])->f_18 = func_110(iParam2, iParam0);
	(Global_1051387->f_69[iParam0 /*76*/])->f_25 = iParam1;
	(Global_1051387->f_69[iParam0 /*76*/])->f_3 = { VOLUME::_0xF70F00013A62F866(iParam1) };
	(Global_1051387->f_69[iParam0 /*76*/])->f_26 = iParam3;
	(Global_1051387->f_69[iParam0 /*76*/])->f_28 = iParam4;
	(Global_1051387->f_69[iParam0 /*76*/])->f_2 = iParam2;
	(Global_1051387->f_69[iParam0 /*76*/])->f_64 = func_111((Global_1051387->f_69[iParam0 /*76*/])->f_18);
	(Global_1051387->f_69[iParam0 /*76*/])->f_73 = iParam9;
	(Global_1051387->f_69[iParam0 /*76*/])->f_74 = 0;
	(Global_1051387->f_69[iParam0 /*76*/])->f_49 = 0;
	if (fParam8 <= 0f)
	{
		fParam8 = func_112(iParam0);
	}
	(Global_1051387->f_69[iParam0 /*76*/])->f_10 = fParam8;
	(Global_1051387->f_69[iParam0 /*76*/])->f_14 = iParam5;
	if (bParam6)
	{
		POPULATION::_0x18262CAFEBB5FBE1((Global_1051387->f_69[iParam0 /*76*/])->f_25, 0, 0, 0, -1, -1, 0);
		POPULATION::_0xB56D41A694E42E86((Global_1051387->f_69[iParam0 /*76*/])->f_25, 0, 0, 0, -1, -1, 0);
	}
	if (bParam7)
	{
		POPULATION::_0x18262CAFEBB5FBE1((Global_1051387->f_69[iParam0 /*76*/])->f_26, 0, 0, 0, -1, -1, 0);
		POPULATION::_0xB56D41A694E42E86((Global_1051387->f_69[iParam0 /*76*/])->f_26, 0, 0, 0, -1, -1, 0);
	}
	NETWORK::_0xEEB7818B1D307212((Global_1051387->f_69[iParam0 /*76*/])->f_25);
	func_113(iParam0, 4);
	func_114(iParam0);
}

void func_62(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_115(iParam0);
	if (iVar0 < 0 || iVar0 >= 15)
	{
		return;
	}
	(Global_1051387->f_69[iParam0 /*76*/])->f_32[iVar0] = func_116(iParam1, 0, 0);
	if (func_117(&((Global_1051387->f_69[iParam0 /*76*/])->f_32[iVar0])))
	{
		if (!func_118(&((Global_1051387->f_69[iParam0 /*76*/])->f_32[iVar0])))
		{
			func_77(&((Global_1051387->f_69[iParam0 /*76*/])->f_32[iVar0]), 0, fParam2, bParam3, 1, 0, 0, 0);
		}
	}
	(Global_1051387->f_69[iParam0 /*76*/])->f_48++;
}

void func_63(int iParam0, int iParam1)
{
	func_119(&((Global_1051387->f_69[iParam0 /*76*/])->f_50), iParam1);
}

int func_64(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	vector3 vVar3;

	if ((func_120(iParam0, 16384) || func_120(iParam0, 32768)) || func_121((Global_1051387->f_69[iParam0 /*76*/])->f_3))
	{
		if (TASK::_0x841475AC96E794D1((Global_1051387->f_69[iParam0 /*76*/])->f_6))
		{
			TASK::_0x81948DFE4F5A0283((Global_1051387->f_69[iParam0 /*76*/])->f_6);
		}
		if (TASK::_0x841475AC96E794D1((Global_1915170->f_3[iParam0 /*447*/])->f_16))
		{
			TASK::_0x81948DFE4F5A0283((Global_1915170->f_3[iParam0 /*447*/])->f_16);
		}
		(Global_1051387->f_69[iParam0 /*76*/])->f_6 = 0;
		(Global_1915170->f_3[iParam0 /*447*/])->f_16 = 0;
		(Global_1051387->f_69[iParam0 /*76*/])->f_8 = 0;
		return 0;
	}
	iVar0 = func_110(func_122(), iParam0);
	if ((!bParam1 && func_123(iVar0, &iVar1, &uVar2, &vVar3)) || (bParam1 && func_124(iVar0, &iVar1, &uVar2, &vVar3)))
	{
		func_125(iParam0, iVar1, vVar3, uVar2, 0);
		(Global_1051387->f_69[iParam0 /*76*/])->f_3 = { vVar3 };
		(Global_1051387->f_69[iParam0 /*76*/])->f_8 = iVar1;
	}
	return (Global_1051387->f_69[iParam0 /*76*/])->f_6;
}

int func_65()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return 1;
	}
	return 0;
}

bool func_66()
{
	return func_126(func_59(0));
}

void func_67(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_1051387->f_4319[iVar0 /*7*/] = -1;
		(Global_1051387->f_4319[iVar0 /*7*/])->f_3 = 0;
		(Global_1051387->f_4319[iVar0 /*7*/])->f_4 = 0;
		iVar0++;
	}
	switch (iParam0)
	{
		case 40:
			func_127(16);
			func_127(17);
			func_127(18);
			func_113(32, 4);
			func_114(32);
			break;
		case 87:
			func_127(132);
			func_113(32, 4);
			func_114(32);
			break;
		case 111:
			func_127(38);
			func_113(32, 4);
			func_114(32);
			break;
		case 5:
			func_127(59);
			func_127(58);
			func_113(32, 4);
			func_114(32);
			break;
		case 26:
			func_127(72);
			func_127(73);
			func_113(32, 4);
			func_114(32);
			break;
	}
}

int func_68(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_45() != -1)
	{
		return 0;
	}
	if (!func_128(iParam0, 0))
	{
		return 0;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam1))
	{
		return 0;
	}
	iVar0 = func_129(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	VOLUME::_0xE2BE6FFA4A13CBB0(iParam1, iVar0, iParam2);
	return 1;
}

void func_69(float fParam0, float fParam1, float fParam2, float fParam3)
{
	Global_1893575->f_182 = fParam0;
	Global_1893575->f_183 = fParam1;
	Global_1893575->f_184 = fParam2;
	Global_1893575->f_185 = fParam3;
}

void func_70(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_61 >= 20)
	{
		return;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam1))
	{
		return;
	}
	if (!func_130(iParam2))
	{
		return;
	}
	(*uParam0)[uParam0->f_61 /*3*/] = iParam1;
	((*uParam0)[uParam0->f_61 /*3*/])->f_1 = iParam2;
	((*uParam0)[uParam0->f_61 /*3*/])->f_2 = 0;
	uParam0->f_61++;
}

bool func_71(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

void func_72()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (func_131(iVar0))
		{
			(*Global_1900684)[iVar0] = -1;
		}
		iVar0++;
	}
}

void func_73(int iParam0, int iParam1)
{
	if (!func_131(iParam0))
	{
		return;
	}
	if (!func_132(iParam1))
	{
		return;
	}
	(*Global_1900684)[iParam0] = iParam1;
}

void func_74()
{
	if (!func_133(26))
	{
		return;
	}
	func_134(26);
}

int func_75(bool bParam0)
{
	if (func_135())
	{
		if (!*bParam0)
		{
			*bParam0 = 1;
			return 1;
		}
	}
	else if (*bParam0)
	{
		*bParam0 = 0;
		return 1;
	}
	return 0;
}

void func_76(int iParam0, int iParam1)
{
	func_77(iParam0, 1, 0, 0, 0, 0, 0, 0);
}

void func_77(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
{
	func_116(iParam0, 0, 0);
	if (func_117(iParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam2, bParam6);
		if (fParam5 > 0f)
		{
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_136(iParam0, fParam2, 1, bParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_137(iParam0, 1);
			}
			else
			{
				func_138(iParam0, 1);
			}
		}
		else
		{
			func_139(iParam0, 1);
		}
		if (bParam7)
		{
			OBJECT::_0x276AAF0F1C7F2494(iParam0, 1);
		}
	}
	else if (func_140())
	{
	}
	else if (NETWORK::NETWORK_IS_IN_SESSION())
	{
	}
}

bool func_78(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_79(var uParam0, int iParam1)
{
	return (uParam0->f_62 && iParam1) != 0;
}

bool func_80()
{
	return func_78(&Global_1939168, 8192);
}

bool func_81(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_82(int iParam0)
{
	if (!func_71(iParam0))
	{
		return false;
	}
	return ((((*Global_1887327)[iParam0 /*36*/])->f_21 == 1 || ((*Global_1887327)[iParam0 /*36*/])->f_21 == 2) && !func_141(iParam0));
}

bool func_83(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 150)
	{
		return false;
	}
	return (((*Global_1887327)[iParam0 /*36*/])->f_22 && iParam1) != 0;
}

int func_84()
{
	return Global_1896610->f_41;
}

void func_85(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	char[] cVar6[8];
	float fVar7;
	char* sVar8;
	char* sVar9;
	char[] cVar10[8];

	if (!func_142())
	{
		return;
	}
	sVar1 = func_143(iParam0, iParam1, iParam2, iParam4, bParam5, bParam3, &bVar0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		if (bParam3)
		{
			return;
		}
		sVar1 = "DISTRICT_GRIZZLIES";
	}
	if (!func_144(iParam4))
	{
		if (func_71(iParam0))
		{
			iParam4 = func_145(func_9(iParam0));
		}
		else
		{
			iParam4 = func_145(iParam1);
		}
	}
	if (func_144(iParam4))
	{
		iVar3 = func_146(iParam4);
	}
	if (bVar0 && bParam3)
	{
		sVar2 = func_148(func_147(iParam2));
	}
	else if ((func_149(iParam1, 2) || func_150(iParam4, 2)) && !Global_1893575->f_9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_MALE(PLAYER::PLAYER_PED_ID()))
			{
				sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_FULL_D_OR_A_M");
			}
			else
			{
				sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_FULL_D_OR_A_F");
			}
		}
		Global_1893575->f_9 = 1;
	}
	else if ((func_71(iParam0) && func_99(iParam0, 16777216)) && !Global_1893575->f_9)
	{
		sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_RESTRICTED_AREA");
		Global_1893575->f_9 = 1;
	}
	else if (iVar3 >= 1 && !Global_1893575->f_9)
	{
		sVar2 = MISC::_CREATE_VAR_STRING(2, "REGION_BOUNTY", iVar3);
		Global_1893575->f_9 = 1;
	}
	else
	{
		iVar4 = func_152(func_151());
		iVar5 = func_153(func_151());
		if (iVar5 < 10)
		{
			StringConCat(&cVar6, "0", 8);
		}
		StringIntConCat(&cVar6, iVar5, 8);
		fVar7 = MISC::_GET_TEMPERATURE_AT_COORDS(Global_36);
		if (!MISC::_SHOULD_USE_24_HOUR_CLOCK())
		{
			sVar9 = "AM";
			if (iVar4 >= 12)
			{
				sVar9 = "PM";
				if (iVar4 > 12)
				{
					iVar4 = (iVar4 - 12);
				}
			}
			else if (iVar4 == 0)
			{
				iVar4 = 12;
			}
			sVar8 = "TIME_AND_TEMP_C";
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				fVar7 = func_154(fVar7);
				sVar8 = "TIME_AND_TEMP_F";
			}
			IntToString(&cVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::_CREATE_VAR_STRING(674, sVar8, iVar4, func_155(&cVar6, joaat("COLOR_PURE_WHITE")), sVar9, func_155(&cVar10, joaat("COLOR_PURE_WHITE")));
		}
		else
		{
			sVar8 = "TIME_AND_TEMP_C_24";
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				fVar7 = func_154(fVar7);
				sVar8 = "TIME_AND_TEMP_F_24";
			}
			IntToString(&cVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::_CREATE_VAR_STRING(162, sVar8, iVar4, func_155(&cVar6, joaat("COLOR_PURE_WHITE")), func_155(&cVar10, joaat("COLOR_PURE_WHITE")));
		}
		Global_1893575->f_9 = 0;
	}
	Global_1938075->f_145 = func_156(sVar1, sVar2, 4000, 0, 0, 0, 0, 1);
}

void func_86(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_87(int iParam0, bool bParam1)
{
	if (Global_1572887->f_11 && func_45() == 0)
	{
		return;
	}
	if (!func_157(iParam0))
	{
		return;
	}
	if (func_99(iParam0, 32))
	{
		return;
	}
	func_21(iParam0, 32);
	func_158(Global_1939168, 16384);
	func_160(func_159(-1532769513, joaat("areas")), 1);
	switch (func_9(iParam0))
	{
		case 0:
		case 2:
		case 11:
			func_160(func_159(-1532769513, 213519508), 1);
			break;
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			func_160(func_159(-1532769513, 242571679), 1);
			break;
		case 3:
		case 10:
			func_160(func_159(-1532769513, 1349449307), 1);
			break;
		case 4:
		case 9:
			func_160(func_159(-1532769513, 1140362070), 1);
			break;
		case 8:
			func_160(func_159(-1532769513, -172330899), 1);
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			func_160(func_159(-1532769513, -910218296), 1);
			break;
	}
	switch (iParam0)
	{
		case 0:
			MAP::_0xD8C7162AB2E2AF45(1822876181);
			break;
		case 1:
			MAP::_0xD8C7162AB2E2AF45(1092217275);
			break;
		case 2:
			MAP::_0xD8C7162AB2E2AF45(1855549007);
			MAP::_0xD8C7162AB2E2AF45(1542246539);
			break;
		case 6:
			MAP::_0xD8C7162AB2E2AF45(-237206861);
			break;
		case 7:
			MAP::_0xD8C7162AB2E2AF45(276890716);
			break;
		case 9:
			MAP::_0xD8C7162AB2E2AF45(-353968602);
			break;
		case 10:
			MAP::_0xD8C7162AB2E2AF45(-1354901649);
			MAP::_0xD8C7162AB2E2AF45(-1354901649);
			break;
		case 11:
			MAP::_0xD8C7162AB2E2AF45(-496244122);
			break;
		case 12:
			MAP::_0xD8C7162AB2E2AF45(-678676588);
			break;
		case 15:
			MAP::_0xD8C7162AB2E2AF45(-732274047);
			break;
		case 16:
			MAP::_0xD8C7162AB2E2AF45(-12216052);
			break;
		case 17:
			MAP::_0xD8C7162AB2E2AF45(-1456731677);
			break;
		case 21:
			MAP::_0xD8C7162AB2E2AF45(-2086563810);
			break;
		case 22:
			MAP::_0xD8C7162AB2E2AF45(221661572);
			break;
		case 24:
			MAP::_0xD8C7162AB2E2AF45(222265732);
			break;
		case 25:
			MAP::_0xD8C7162AB2E2AF45(-1484929764);
			break;
		case 26:
			MAP::_0xD8C7162AB2E2AF45(1104975149);
			break;
		case 27:
			MAP::_0xD8C7162AB2E2AF45(235472255);
			break;
		case 28:
			MAP::_0xD8C7162AB2E2AF45(-1337880478);
			break;
		case 30:
			MAP::_0xD8C7162AB2E2AF45(-1813267128);
			break;
		case 31:
			MAP::_0xD8C7162AB2E2AF45(-1941572412);
			break;
		case 32:
			MAP::_0xD8C7162AB2E2AF45(1006072805);
			break;
		case 128:
			MAP::_0xD8C7162AB2E2AF45(929640770);
			break;
		case 129:
			MAP::_0xD8C7162AB2E2AF45(1603579970);
			break;
		case 131:
			MAP::_0xD8C7162AB2E2AF45(-1332669948);
			break;
		case 130:
			MAP::_0xD8C7162AB2E2AF45(-1807212021);
			break;
		case 36:
			MAP::_0xD8C7162AB2E2AF45(-1347759053);
			break;
		case 38:
			MAP::_0xD8C7162AB2E2AF45(-918096609);
			break;
		case 120:
			MAP::_0xD8C7162AB2E2AF45(1728445882);
			break;
		case 39:
			MAP::_0xD8C7162AB2E2AF45(-507075109);
			break;
		case 42:
			MAP::_0xD8C7162AB2E2AF45(462373845);
			break;
		case 44:
			MAP::_0xD8C7162AB2E2AF45(-1727895786);
			break;
		case 45:
			MAP::_0xD8C7162AB2E2AF45(1826504111);
			break;
		case 46:
			MAP::_0xD8C7162AB2E2AF45(1714554710);
			break;
		case 47:
			MAP::_0xD8C7162AB2E2AF45(-91026072);
			break;
		case 58:
			MAP::_0xD8C7162AB2E2AF45(893855320);
			break;
		case 59:
			MAP::_0xD8C7162AB2E2AF45(326709244);
			break;
		case 52:
			MAP::_0xD8C7162AB2E2AF45(653799702);
			break;
		case 67:
			MAP::_0xD8C7162AB2E2AF45(415864829);
			break;
		case 69:
			MAP::_0xD8C7162AB2E2AF45(-1836330842);
			break;
		case 70:
			MAP::_0xD8C7162AB2E2AF45(648073069);
			break;
		case 71:
			MAP::_0xD8C7162AB2E2AF45(770074951);
			break;
		case 73:
			MAP::_0xD8C7162AB2E2AF45(-1276637644);
			break;
		case 76:
			MAP::_0xD8C7162AB2E2AF45(-431488293);
			break;
		case 77:
			MAP::_0xD8C7162AB2E2AF45(-1101810198);
			break;
		case 79:
			MAP::_0xD8C7162AB2E2AF45(-1344767066);
			break;
		case 82:
			MAP::_0xD8C7162AB2E2AF45(1472232821);
			break;
		case 84:
			MAP::_0xD8C7162AB2E2AF45(-1368676121);
			break;
		case 68:
			MAP::_0xD8C7162AB2E2AF45(-33677540);
			break;
		case 85:
			MAP::_0xD8C7162AB2E2AF45(1602161184);
			MAP::_0xD8C7162AB2E2AF45(-443207523);
			MAP::_0xD8C7162AB2E2AF45(-683043834);
			break;
		case 87:
			MAP::_0xD8C7162AB2E2AF45(147256338);
			MAP::_0xD8C7162AB2E2AF45(-134804027);
			MAP::_0xD8C7162AB2E2AF45(2027689141);
			break;
		case 88:
			MAP::_0xD8C7162AB2E2AF45(-161135375);
			break;
		case 90:
			MAP::_0xD8C7162AB2E2AF45(1625008147);
			break;
		case 91:
			MAP::_0xD8C7162AB2E2AF45(121074776);
			break;
		case 92:
			MAP::_0xD8C7162AB2E2AF45(1876184276);
			break;
		case 94:
			MAP::_0xD8C7162AB2E2AF45(458479023);
			break;
		case 97:
			MAP::_0xD8C7162AB2E2AF45(85299473);
			break;
		case 102:
			MAP::_0xD8C7162AB2E2AF45(-1150244084);
			break;
		case 104:
			MAP::_0xD8C7162AB2E2AF45(759314201);
			break;
		case 105:
			MAP::_0xD8C7162AB2E2AF45(2063457042);
			break;
		case 106:
			MAP::_0xD8C7162AB2E2AF45(1877776161);
			break;
		case 108:
			MAP::_0xD8C7162AB2E2AF45(2143316225);
			break;
		case 110:
			MAP::_0xD8C7162AB2E2AF45(-1623232489);
			MAP::_0xD8C7162AB2E2AF45(-1393093729);
			break;
		case 112:
			MAP::_0xD8C7162AB2E2AF45(1354284392);
			break;
		case 113:
			MAP::_0xD8C7162AB2E2AF45(-1430883057);
			break;
		case 115:
			MAP::_0xD8C7162AB2E2AF45(820139809);
			break;
		case 118:
			MAP::_0xD8C7162AB2E2AF45(1561007383);
			MAP::_0xD8C7162AB2E2AF45(-960425936);
			break;
	}
	if (bParam1)
	{
		func_21(iParam0, 64);
	}
}

void func_88(bool bParam0)
{
	if (bParam0)
	{
		Global_1893575 |= 1;
	}
	else
	{
		Global_1893575 = (&Global_1893575 - Global_1893575 & 1);
	}
}

int func_89(int iParam0)
{
	switch (iParam0)
	{
		case joaat("drizzle"):
		case joaat("thunder"):
		case joaat("shower"):
		case joaat("sleet"):
		case joaat("hurricane"):
		case joaat("rain"):
		case joaat("hail"):
		case joaat("thunderstorm"):
			return 1;
		default:
			break;
	}
	return 0;
}

void func_90()
{
}

int func_91(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return -4613767;
		case 1:
			return 1567162363;
		case 2:
			return 456471693;
		case 3:
			return -1772963474;
		case 4:
			return 1881496386;
		case 5:
			return 711768994;
		case 6:
			return -440834066;
		case 7:
			return -1363847832;
		case 8:
			return 967769300;
		case 9:
			return -1436873944;
		case 10:
			return -1585669139;
		case 11:
			return 16791368;
		case 12:
			return 1452922822;
		case 13:
			return 549538301;
		case 14:
			return 974698954;
		case 15:
			return 445881012;
		case 16:
			return -2043891857;
		case 17:
			return 419656993;
		case 18:
			return -1732457315;
		case 19:
			return 1794318026;
		case 20:
			return 2035159966;
		case 21:
			return 770832805;
		case 22:
			return -1109814766;
		case 24:
			return -1075550363;
		case 23:
			return -1080317735;
		case 25:
			return 2138576151;
		case 26:
			return 1180954297;
		case 27:
			return 783603394;
		case 28:
			return 1162337247;
		case 30:
			return -170458336;
		case 29:
			return 2023240596;
		case 31:
			return 1285083821;
		case 32:
			return -1840907462;
		case 33:
			return 756710130;
		case 34:
			return 1634157321;
		case 35:
			return 388370024;
		case 36:
			return 1092296123;
		case 37:
			return 467491346;
		case 38:
			return -1391584612;
		case 39:
			return -152111346;
		case 40:
			return 1447551317;
		case 41:
			return 153136092;
		case 42:
			return 1304405732;
		case 43:
			return 1074984055;
		case 53:
			return 1087476368;
		case 54:
			return -1768057340;
		case 44:
			return 1218874593;
		case 55:
			return -1438443836;
		case 45:
			return -2036340415;
		case 56:
			return -597278150;
		case 46:
			return 803939643;
		case 57:
			return -632496195;
		case 47:
			return -965943619;
		case 48:
			return 283532073;
		case 49:
			return -462827524;
		case 50:
			return -69067491;
		case 51:
			return -1864895118;
		case 58:
			return -1929806571;
		case 59:
			return -698525417;
		case 60:
			return -1149739894;
		case 52:
			return 380507325;
		case 61:
			return -875142075;
		case 62:
			return 407796241;
		case 63:
			return -152267914;
		case 64:
			return -1675443320;
		case 65:
			return 1940341639;
		case 66:
			return 1846596114;
		case 67:
			return 907708501;
		case 69:
			return 1825644981;
		case 70:
			return 2065937607;
		case 71:
			return -211317417;
		case 72:
			return 1801307910;
		case 73:
			return -4118897;
		case 74:
			return 1853610692;
		case 75:
			return -1574644415;
		case 76:
			return 2133055515;
		case 77:
			return -1413401932;
		case 78:
			return 801090761;
		case 79:
			return 2131218644;
		case 80:
			return 1708823660;
		case 81:
			return 7976942;
		case 82:
			return 2111120505;
		case 83:
			return 176893118;
		case 84:
			return 1179148161;
		case 68:
			return 602306665;
		case 85:
			return 547412068;
		case 86:
			return -1539748801;
		case 87:
			return -1605119912;
		case 88:
			return -884464063;
		case 89:
			return -1420970720;
		case 90:
			return 1017024547;
		case 91:
			return -1204497306;
		case 92:
			return -1621069480;
		case 93:
			return -458604261;
		case 94:
			return -923391614;
		case 95:
			return -689247089;
		case 97:
			return 44049568;
		case 98:
			return 1350259552;
		case 96:
			return 620414938;
		case 99:
			return -61661574;
		case 100:
			return -725338054;
		case 101:
			return -770123507;
		case 102:
			return 1322486734;
		case 103:
			return -460939553;
		case 104:
			return -1451863552;
		case 105:
			return 173833068;
		case 106:
			return -1681004136;
		case 107:
			return 713715980;
		case 108:
			return -31204969;
		case 109:
			return -1720064790;
		case 110:
			return -532172775;
		case 111:
			return -739067737;
		case 112:
			return -1203133835;
		case 113:
			return -1947411598;
		case 115:
			return -1298718762;
		case 116:
			return -595083064;
		case 117:
			return 884833917;
		case 118:
			return 2141950651;
		case 114:
			return -1049753365;
		case 119:
			return -1437650729;
		case 134:
			return 672925454;
		case 135:
			return 846062774;
		case 136:
			return 1713550306;
		case 127:
			return 1369756178;
		case 128:
			return -736172423;
		case 129:
			return 1597070291;
		case 131:
			return -159501564;
		case 130:
			return -1438809608;
		case 132:
			return -102682392;
		case 133:
			return 676673543;
		case 120:
			return -81068979;
		case 121:
			return 227618407;
		case 122:
			return 2106043438;
		case 123:
			return -1380256064;
		case 124:
			return -2118469183;
		case 125:
			return -558997834;
		case 126:
			return 1563120499;
		case 137:
			return 658339366;
		default:
			break;
	}
	if (bParam1)
	{
		return 1757124778 /* GXTEntry: "Wilderness" */;
	}
	return 0;
}

void func_92(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		Global_7888[iParam0 /*11*/] = (&Global_7888[iParam0 /*11*/] - (Global_7888[iParam0 /*11*/] && iParam1));
		return;
	}
	Global_1070355->f_17941[iParam0 /*11*/] = (&Global_1070355->f_17941[iParam0 /*11*/] - (Global_1070355->f_17941[iParam0 /*11*/] && iParam1));
}

void func_93(bool bParam0)
{
	if (bParam0)
	{
		Global_1893575 |= 2;
	}
	else
	{
		Global_1893575 = (&Global_1893575 - Global_1893575 & 2);
	}
}

void func_94(int iParam0)
{
	func_69(0.775f, 0.2f, 0.025f, 0f);
	if (VOLUME::_0x92A78D0BEDB332A3(iLocal_44))
	{
		VOLUME::_0x43F867EF5C463A53(iLocal_44);
	}
	VEHICLE::_REMOVE_SPEED_ZONE(iLocal_47);
	ENTITY::REMOVE_MODEL_HIDE(vLocal_48, 5f, 2052583298, 0);
	iParam0 = iParam0;
}

void func_95(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if ((Global_1938932->f_5[iVar0 /*11*/])->f_5 == iParam0)
		{
			func_161(iVar0);
		}
		iVar0++;
	}
}

void func_96(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if ((Global_1915170->f_3[iVar0 /*447*/])->f_8 == iParam0)
		{
			func_162(iVar0);
		}
		iVar0++;
	}
}

int func_97(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_45() != -1)
	{
		return 1;
	}
	if (!func_71(iParam0))
	{
		return 1;
	}
	if (func_102(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (Global_1896608->f_1 < iVar0 || Global_1896608->f_1 > iVar1)
		{
			Global_1896608->f_1 = iVar0;
		}
		while (true)
		{
			if (!func_163(Global_1896608->f_1, 16))
			{
				func_164(Global_1896608->f_1, 0);
			}
			Global_1896608->f_1++;
			iVar2++;
			if (Global_1896608->f_1 > iVar1)
			{
				Global_1896608->f_1 = -1;
				return 1;
			}
			if (iVar2 >= 10 && !bParam1)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_98(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_165(iVar0) || func_166(iVar0))
		{
		}
		else
		{
			switch (iVar0)
			{
				case 34:
					break;
				case 30:
					func_167();
					break;
				case 32:
					func_168();
					break;
				default:
					if ((Global_1051387->f_69[iVar0 /*76*/])->f_2 == iParam0)
					{
						func_109(iVar0);
						(Global_1051387->f_69[iVar0 /*76*/])->f_2 = -1;
					}
					break;
			}
		}
		iVar0++;
	}
	return 1;
}

bool func_99(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		return (Global_7888[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1070355->f_17941[iParam0 /*11*/] && iParam1) != 0;
}

int func_100(int iParam0)
{
	if (!func_71(iParam0))
	{
		return 0;
	}
	return func_99(iParam0, 33554432);
}

int func_101(int iParam0)
{
	if (!func_71(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 33:
			return 1;
		case 37:
			return 1;
		case 70:
			return 1;
		case 101:
			return 1;
	}
	return 0;
}

int func_102(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;

	bVar0 = func_45() != -1;
	switch (iParam0)
	{
		case 81:
			*iParam1 = 0;
			if (bParam3)
			{
				*iParam2 = 47;
			}
			else
			{
				*iParam2 = 63;
			}
			if (bVar0)
			{
				*iParam2 = 5;
			}
			break;
		case 111:
			*iParam1 = 69;
			if (bParam3)
			{
				*iParam2 = 127;
			}
			else
			{
				*iParam2 = 136;
			}
			if (bVar0)
			{
				*iParam2 = 72;
			}
			break;
		case 5:
			*iParam1 = 137;
			*iParam2 = 318;
			if (bVar0)
			{
				*iParam2 = 142;
			}
			break;
		case 66:
			*iParam1 = 374;
			*iParam2 = 375;
			if (bVar0)
			{
				*iParam2 = 374;
			}
			break;
		case 83:
			*iParam1 = 376;
			*iParam2 = 425;
			if (bVar0)
			{
				*iParam2 = 378;
			}
			break;
		case 98:
			*iParam1 = 437;
			*iParam2 = 465;
			if (bVar0)
			{
				*iParam2 = 437;
			}
			break;
		case 26:
			*iParam1 = 466;
			if (bParam3)
			{
				*iParam2 = 494;
			}
			else
			{
				*iParam2 = 496;
			}
			if (bVar0)
			{
				*iParam2 = 466;
			}
			break;
		case 40:
			*iParam1 = 502;
			*iParam2 = 547;
			if (bVar0)
			{
				*iParam2 = 503;
			}
			break;
		case 73:
			*iParam1 = 548;
			*iParam2 = 559;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 70:
			*iParam1 = 560;
			*iParam2 = 582;
			if (bVar0)
			{
				*iParam2 = 560;
			}
			break;
		case 74:
			*iParam1 = 583;
			if (bParam3)
			{
				*iParam2 = 592;
			}
			else
			{
				*iParam2 = 606;
			}
			if (bVar0)
			{
				*iParam2 = 584;
			}
			break;
		case 80:
			*iParam1 = 497;
			*iParam2 = 500;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 99:
			*iParam1 = 607;
			*iParam2 = 619;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 101:
			*iParam1 = 620;
			*iParam2 = 635;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 103:
			*iParam1 = 636;
			*iParam2 = 637;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 3:
			*iParam1 = 638;
			*iParam2 = 650;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 6:
			*iParam1 = 651;
			*iParam2 = 652;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 33:
			*iParam1 = 319;
			*iParam2 = 338;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 87:
			*iParam1 = 653;
			if (bParam3)
			{
				*iParam2 = 667;
			}
			else
			{
				*iParam2 = 684;
			}
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 37:
			*iParam1 = 685;
			*iParam2 = 694;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 60:
			*iParam1 = 695;
			*iParam2 = 702;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 22:
			if (bParam4)
			{
				*iParam1 = 709;
			}
			else
			{
				*iParam1 = 703;
			}
			*iParam2 = 717;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 116:
			*iParam1 = 718;
			*iParam2 = 724;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 69:
			*iParam1 = 730;
			*iParam2 = 734;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 71:
			*iParam1 = 739;
			*iParam2 = 744;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 75:
			*iParam1 = 745;
			*iParam2 = 748;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 82:
			*iParam1 = 725;
			*iParam2 = 726;
			break;
		case 102:
			*iParam1 = 735;
			*iParam2 = 737;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 30:
			*iParam1 = 738;
			*iParam2 = 738;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 106:
			*iParam1 = 749;
			*iParam2 = 757;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 108:
			*iParam1 = 758;
			*iParam2 = 761;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 77:
			*iParam1 = 727;
			*iParam2 = 729;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 131:
			*iParam1 = 785;
			*iParam2 = 787;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 91:
			*iParam1 = 762;
			*iParam2 = 766;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 134:
			*iParam1 = 767;
			*iParam2 = 773;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 127:
			*iParam1 = 426;
			*iParam2 = 436;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 121:
			*iParam1 = 339;
			*iParam2 = 369;
			if (bVar0)
			{
				*iParam2 = 369;
			}
			break;
		case 132:
			*iParam1 = 370;
			*iParam2 = 373;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 122:
			*iParam1 = 777;
			*iParam2 = 784;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 21:
			*iParam1 = 774;
			*iParam2 = 776;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 44:
			*iParam1 = 788;
			*iParam2 = 792;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 94:
			*iParam1 = 793;
			*iParam2 = 794;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 23:
			*iParam1 = 795;
			*iParam2 = 795;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 28:
			*iParam1 = 796;
			*iParam2 = 797;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 107:
			*iParam1 = 798;
			*iParam2 = 800;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 123:
			*iParam1 = 501;
			*iParam2 = 501;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 11:
			*iParam1 = 801;
			*iParam2 = 827;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 137:
			*iParam1 = 828;
			*iParam2 = 851;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		default:
			*iParam1 = -1;
			*iParam2 = -1;
			break;
	}
	if (*iParam1 == -1 || *iParam2 == -1)
	{
		return 0;
	}
	return 1;
}

bool func_103(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 948);
}

int func_104(int iParam0)
{
	switch (iParam0)
	{
		case 64:
			return 1;
		case 65:
			return 1;
		case 66:
			return 1;
		case 67:
			return 1;
		case 68:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_105(int iParam0, bool bParam1)
{
	if (!func_103(iParam0))
	{
		return 0;
	}
	if (!func_163(iParam0, 2))
	{
		return 0;
	}
	if (func_163(iParam0, 32) && !bParam1)
	{
		func_170(iParam0, _NAMESPACE48::_0x4F76E3676583D951(func_169(iParam0)));
		if (func_45() == -1)
		{
			if (func_163(iParam0, 2048))
			{
				_NAMESPACE48::_0x49A8C2CD97815215(func_129(iParam0));
				func_171(iParam0, 2048);
			}
			_NAMESPACE48::_0xFCC6DB8DBE709BC8(func_129(iParam0));
		}
		return 0;
	}
	if (!func_172(iParam0) && func_45() == -1)
	{
		return 0;
	}
	if (_NAMESPACE48::_0x800DF3FC913355F3(func_129(iParam0)))
	{
		func_171(iParam0, 128);
		return 1;
	}
	func_170(iParam0, _NAMESPACE48::_0x4F76E3676583D951(func_169(iParam0)));
	_NAMESPACE48::_0x4F81EAD1DE8FA19B(func_129(iParam0));
	if (func_163(iParam0, 2048))
	{
		_NAMESPACE48::_0x49A8C2CD97815215(func_129(iParam0));
		func_171(iParam0, 2048);
	}
	return 1;
}

bool func_106()
{
	return func_173(func_59(0));
}

bool func_107(int iParam0)
{
	return !func_174(iParam0);
}

void func_108(bool bParam0, bool bParam1)
{
	if (func_175(255) == 4)
	{
		return;
	}
	if (func_121(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_176(0);
	}
	else
	{
		if (bParam1)
		{
			func_177(0, 0, 0, 1);
		}
		func_178(0);
		func_179(&(Global_1099293->f_516));
		Global_1099293->f_516 = 0f;
		Global_1099293->f_516.f_5 = 1;
		Global_1099293->f_516.f_16 = 0;
		Global_1099293->f_516.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
		Global_1099293->f_516.f_17.f_3 = { 0f, 0f, 0f };
		Global_1099293->f_516.f_17 = { Global_1901929->f_44.f_1, Global_1901929->f_44.f_1, Global_1901929->f_44.f_1 };
		Global_1099293->f_516.f_17.f_9 = -432403087;
		func_180(&(Global_1099293->f_555));
		Global_1099293->f_555.f_6 = { Global_1099293->f_516.f_17.f_6 };
		Global_1099293->f_555 = Global_1099293->f_516;
		Global_1099293->f_555.f_5 = 1;
		if (bParam1)
		{
			Global_1099293->f_26.f_18 = 0;
			Global_1099293->f_26.f_19 = 0;
		}
	}
	func_181(Global_1099293->f_516, 36);
	func_182(Global_1099293->f_555, 36);
}

void func_109(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	bVar0 = func_183(iParam0);
	if (!bVar0)
	{
		if (ENTITY::DOES_ENTITY_EXIST((Global_1051387->f_69[iParam0 /*76*/])->f_21) && !ENTITY::DOES_ENTITY_EXIST(&(Global_1051387->f_3222[(Global_1051387->f_69[iParam0 /*76*/])->f_18 /*2*/])))
		{
			if (!ENTITY::_0x88AD6CC10D8D35B2((Global_1051387->f_69[iParam0 /*76*/])->f_21))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY((Global_1051387->f_69[iParam0 /*76*/])->f_21, true, true);
			}
			ENTITY::DELETE_ENTITY(&((Global_1051387->f_69[iParam0 /*76*/])->f_21));
		}
		if (STREAMING::IS_MODEL_VALID((Global_1051387->f_69[iParam0 /*76*/])->f_19))
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED((Global_1051387->f_69[iParam0 /*76*/])->f_19);
		}
	}
	if (VOLUME::_0x92A78D0BEDB332A3((Global_1051387->f_69[iParam0 /*76*/])->f_25))
	{
		NETWORK::_0xA35E7BF20FA269E0((Global_1051387->f_69[iParam0 /*76*/])->f_25);
		POPULATION::_0xA1CFB35069D23C23((Global_1051387->f_69[iParam0 /*76*/])->f_25);
		POPULATION::_0x74C2B3DC0B294102((Global_1051387->f_69[iParam0 /*76*/])->f_25);
		if (func_120(iParam0, 524288))
		{
			VOLUME::_0x43F867EF5C463A53((Global_1051387->f_69[iParam0 /*76*/])->f_25);
		}
	}
	if (VOLUME::_0x92A78D0BEDB332A3((Global_1051387->f_69[iParam0 /*76*/])->f_26))
	{
		POPULATION::_0xA1CFB35069D23C23((Global_1051387->f_69[iParam0 /*76*/])->f_26);
		POPULATION::_0x74C2B3DC0B294102((Global_1051387->f_69[iParam0 /*76*/])->f_26);
		if (func_120(iParam0, 524288))
		{
			VOLUME::_0x43F867EF5C463A53((Global_1051387->f_69[iParam0 /*76*/])->f_26);
		}
	}
	if (VOLUME::_0x92A78D0BEDB332A3((Global_1051387->f_69[iParam0 /*76*/])->f_28))
	{
		if (func_120(iParam0, 524288))
		{
			VOLUME::_0x43F867EF5C463A53((Global_1051387->f_69[iParam0 /*76*/])->f_28);
		}
	}
	if (func_184(iParam0, 16384) && !bVar0)
	{
		iVar1 = TASK::_0x295514F198EFD0CA((Global_1051387->f_69[iParam0 /*76*/])->f_6, "mp001_s_mp_catalogue01x_noanim_PH_R_HAND");
		if (TASK::_0x841475AC96E794D1((Global_1051387->f_69[iParam0 /*76*/])->f_6))
		{
			TASK::_0x81948DFE4F5A0283((Global_1051387->f_69[iParam0 /*76*/])->f_6);
		}
		if (TASK::_0x841475AC96E794D1((Global_1915170->f_3[iParam0 /*447*/])->f_16))
		{
			TASK::_0x81948DFE4F5A0283((Global_1915170->f_3[iParam0 /*447*/])->f_16);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar1);
		}
		func_185(iParam0, 16384);
	}
	Global_1051387->f_69[iParam0 /*76*/] = -1;
	(Global_1051387->f_69[iParam0 /*76*/])->f_3 = { 0f, 0f, 0f };
	(Global_1051387->f_69[iParam0 /*76*/])->f_21 = 0;
	(Global_1051387->f_69[iParam0 /*76*/])->f_19 = 0;
	(Global_1051387->f_69[iParam0 /*76*/])->f_6 = 0;
	(Global_1051387->f_69[iParam0 /*76*/])->f_49 = 0;
	(Global_1051387->f_69[iParam0 /*76*/])->f_74 = 1;
	if (func_184(iParam0, 262144) && !bVar0)
	{
		PED::REMOVE_RELATIONSHIP_GROUP((Global_1051387->f_69[iParam0 /*76*/])->f_22);
		func_185(iParam0, 262144);
	}
	(Global_1915170->f_3[iParam0 /*447*/])->f_16 = 0;
	iVar3 = func_115(iParam0);
	if (iVar3 >= 15)
	{
		(Global_1915170->f_3[iParam0 /*447*/])->f_409 = 0;
	}
	else
	{
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			func_186(&((Global_1051387->f_69[iParam0 /*76*/])->f_32[iVar2]));
			(Global_1051387->f_69[iParam0 /*76*/])->f_32[iVar2] = 0;
			iVar2++;
		}
		(Global_1051387->f_69[iParam0 /*76*/])->f_48 = 0;
	}
	func_187(iParam0);
	if (func_120(iParam0, 262144))
	{
		(Global_1051387->f_69[iParam0 /*76*/])->f_50 = 262144;
	}
	else
	{
		func_188(iParam0);
	}
	if (VOLUME::_0x92A78D0BEDB332A3((Global_1051387->f_69[iParam0 /*76*/])->f_25) && func_189(iParam0, 2))
	{
		VOLUME::_0xFD010A2154B40676((Global_1051387->f_69[iParam0 /*76*/])->f_25, 623901053);
		PATHFIND::_0x2C87C3E1C7B96EE2((Global_1051387->f_69[iParam0 /*76*/])->f_25);
	}
	func_190(iParam0);
	(Global_1051387->f_69[iParam0 /*76*/])->f_1 &= 2375680;
	func_191(iParam0);
}

int func_110(int iParam0, int iParam1)
{
	if (iParam1 == 11)
	{
		return 119;
	}
	else if (iParam1 == 27)
	{
		return 133;
	}
	else if (iParam1 == 34)
	{
		return 148;
	}
	else if (iParam1 == 28)
	{
		return 149;
	}
	else if (iParam1 == 29)
	{
		return 150;
	}
	if (iParam1 == 33)
	{
		return 20;
	}
	switch (iParam0)
	{
		case 84:
			switch (iParam1)
			{
				case 0:
					return 151;
				case 6:
					return 153;
				case 23:
					return 154;
				case 22:
					return 152;
				case 16:
					return 67;
				default:
					break;
			}
			break;
		case 40:
			switch (iParam1)
			{
				case 12:
					return 5;
				case 30:
					return 10;
				case 25:
					return 122;
				case 26:
					return 123;
				case 3:
					return 6;
				case 8:
					return 8;
				case 10:
					return 9;
				case 9:
					return 13;
				case 2:
					return 14;
				case 1:
					return 15;
				case 7:
					return 19;
				case 18:
					return 12;
				default:
					break;
			}
			break;
		case 104:
			switch (iParam1)
			{
				case 0:
					return 155;
				case 6:
					return 157;
				case 23:
					return 158;
				case 22:
					return 156;
				case 16:
					return 65;
				default:
					break;
			}
			break;
		case 74:
			switch (iParam1)
			{
				case 4:
					return 22;
				case 33:
					return 21;
				case 3:
					return 23;
				case 2:
					return 24;
				case 1:
					return 25;
				case 38:
					return 140;
				default:
					break;
			}
			break;
		case 76:
			switch (iParam1)
			{
				case 0:
					return 160;
				case 6:
					return 162;
				case 23:
					return 163;
				case 22:
					return 161;
				case 16:
					return 64;
				case 38:
					return 141;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 164;
				case 6:
					return 166;
				case 23:
					return 167;
				case 22:
					return 165;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 14:
					return 26;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 12:
					return 42;
				case 8:
					return 43;
				case 30:
					return 54;
				case 25:
					return 124;
				case 10:
					return 44;
				case 26:
					return 125;
				case 0:
					return 45;
				case 4:
					return 46;
				case 33:
					return 20;
				case 3:
					return 48;
				case 6:
					return 49;
				case 9:
					return 50;
				case 2:
					return 51;
				case 1:
					return 52;
				case 7:
					return 53;
				case 15:
					return 63;
				case 18:
					return 60;
				case 36:
					return 61;
				default:
					break;
			}
			break;
		case 111:
			switch (iParam1)
			{
				case 12:
					return 29;
				case 30:
					return 36;
				case 25:
					return 126;
				case 10:
					return 30;
				case 4:
					return 31;
				case 33:
					return 32;
				case 3:
					return 33;
				case 6:
					return 34;
				case 2:
					return 35;
				case 1:
					return 39;
				default:
					break;
			}
			break;
		case 107:
			switch (iParam1)
			{
				case 9:
					return 41;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 15:
					return 3;
				default:
					break;
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 2:
					return 27;
				case 1:
					return 28;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 168;
				case 22:
					return 169;
				case 6:
					return 170;
				case 23:
					return 171;
				case 16:
					return 66;
				default:
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 25:
					return 127;
				case 30:
					return 75;
				case 10:
					return 68;
				case 3:
					return 69;
				case 17:
					return 70;
				case 9:
					return 71;
				case 2:
					return 74;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 15:
					return 4;
				default:
					break;
			}
			break;
		case 81:
			switch (iParam1)
			{
				case 12:
					return 77;
				case 8:
					return 78;
				case 30:
					return 79;
				case 25:
					return 120;
				case 10:
					return 82;
				case 26:
					return 121;
				case 0:
					return 83;
				case 3:
					return 84;
				case 6:
					return 85;
				case 9:
					return 86;
				case 2:
					return 87;
				case 1:
					return 88;
				case 17:
					return 90;
				case 36:
					return 89;
				case 38:
					return 136;
				default:
					break;
			}
			break;
		case 98:
			switch (iParam1)
			{
				case 26:
					return 128;
				case 4:
					return 93;
				case 33:
					return 92;
				case 2:
					return 98;
				case 1:
					return 97;
				case 9:
					return 96;
				default:
					break;
			}
			break;
		case 83:
			switch (iParam1)
			{
				case 25:
					return 129;
				case 6:
					return 0;
				case 2:
					return 1;
				case 1:
					return 2;
				default:
					break;
			}
			break;
		case 95:
		case 137:
			switch (iParam1)
			{
				case 15:
					return 40;
				default:
					break;
			}
			break;
		case 28:
			switch (iParam1)
			{
				case 2:
					return 101;
				case 1:
					return 100;
				case 3:
					return 99;
				default:
					break;
			}
			break;
		case 121:
			switch (iParam1)
			{
				case 30:
					return 105;
				case 3:
					return 102;
				case 6:
					return 103;
				case 9:
					return 107;
				case 10:
					return 104;
				default:
					break;
			}
			break;
		case 127:
			switch (iParam1)
			{
				case 3:
					return 108;
				case 2:
					return 111;
				case 1:
					return 112;
				case 35:
					return 109;
				default:
					break;
			}
			break;
		case 130:
			switch (iParam1)
			{
				case 4:
					return 116;
				default:
					break;
			}
			break;
		case 123:
			switch (iParam1)
			{
				case 2:
					return 117;
				case 1:
					return 118;
				default:
					break;
			}
			break;
		case 119:
			switch (iParam1)
			{
				case 15:
					return 76;
				default:
					break;
			}
			break;
		case 135:
			switch (iParam1)
			{
				case 4:
					return 130;
				default:
					break;
			}
			break;
		case 96:
			switch (iParam1)
			{
				case 35:
					return 113;
				default:
					break;
			}
			break;
		case 29:
			switch (iParam1)
			{
				case 35:
					return 114;
				default:
					break;
			}
			break;
		case 126:
			switch (iParam1)
			{
				case 38:
					return 135;
				default:
					break;
			}
			break;
		case 133:
			switch (iParam1)
			{
				case 38:
					return 136;
				default:
					break;
			}
			break;
		case 136:
			switch (iParam1)
			{
				case 38:
					return 137;
				default:
					break;
			}
			break;
		case 39:
			switch (iParam1)
			{
				case 38:
					return 138;
				default:
					break;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 38:
					return 139;
				default:
					break;
			}
			break;
		case 61:
			switch (iParam1)
			{
				case 38:
					return 142;
				default:
					break;
			}
			break;
		case 100:
			switch (iParam1)
			{
				case 38:
					return 143;
				default:
					break;
			}
			break;
		case 34:
			switch (iParam1)
			{
				case 38:
					return 144;
				default:
					break;
			}
			break;
		case 43:
			switch (iParam1)
			{
				case 38:
					return 145;
				default:
					break;
			}
			break;
		case 85:
			switch (iParam1)
			{
				case 38:
					return 146;
				default:
					break;
			}
			break;
	}
	if (iParam1 == 38)
	{
		return 147;
	}
	if (iParam1 == 33)
	{
		return 20;
	}
	if (iParam1 == 37)
	{
		return 134;
	}
	return -1;
}

int func_111(int iParam0)
{
	if (!func_192(iParam0))
	{
		return 0;
	}
	if (&Global_1051387->f_4360[iParam0] == 0)
	{
		Global_1051387->f_4360[iParam0] = func_193(iParam0);
	}
	return &(Global_1051387->f_4360[iParam0]);
}

float func_112(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 50f;
		case 9:
			return 25f;
		case 10:
			return 25f;
		case 29:
			return 25f;
		case 38:
			return 70f;
		case 37:
			return 30f;
	}
	return 12.5f;
}

void func_113(int iParam0, int iParam1)
{
	if (!func_184(iParam0, iParam1))
	{
	}
	(Global_1051387->f_69[iParam0 /*76*/])->f_1 = ((Global_1051387->f_69[iParam0 /*76*/])->f_1 || iParam1);
}

void func_114(int iParam0)
{
	(*Global_1051387)[Global_1051387->f_40] = iParam0;
	Global_1051387->f_40++;
	if (Global_1051387->f_40 >= 39)
	{
		Global_1051387->f_40 = (39 - 1);
	}
}

int func_115(int iParam0)
{
	return (Global_1051387->f_69[iParam0 /*76*/])->f_48;
}

int func_116(int iParam0, bool bParam1, bool bParam2)
{
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0))
	{
		if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::_DOES_THREAD_EXIST(&(Global_1051202->f_16[0]))) && bParam1)
		{
			OBJECT::_0xD99229FE93B46286(iParam0, 1, 1, 0, &(Global_1051202->f_16[0]), 0, 0);
		}
		else
		{
			OBJECT::_0xD99229FE93B46286(iParam0, 1, 0, 0, 0, 0, 0);
		}
	}
	else if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::_DOES_THREAD_EXIST(&(Global_1051202->f_16[0]))) && bParam1)
	{
		if (!OBJECT::_0xB5DED7B65C604FDF(iParam0))
		{
			OBJECT::_0xD99229FE93B46286(iParam0, 1, 1, 0, &(Global_1051202->f_16[0]), 0, 0);
		}
	}
	if (bParam2)
	{
		OBJECT::_0x1F1FABFE9B2A1254(iParam0, 1);
	}
	return iParam0;
}

int func_117(int iParam0)
{
	if (func_194(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return 0;
}

int func_118(int iParam0)
{
	func_116(iParam0, 0, 0);
	if (func_117(iParam0))
	{
		return OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) == 0;
	}
	return 0;
}

void func_119(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_120(int iParam0, int iParam1)
{
	return ((Global_1051387->f_69[iParam0 /*76*/])->f_50 && iParam1) != 0;
}

int func_121(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_122()
{
	return Global_1893575->f_2;
}

bool func_123(int iParam0, int iParam1, bool bParam2, var uParam3)
{
	return func_195(iParam0, "sHash", iParam1, "fHeading", bParam2, "vPos", uParam3);
}

bool func_124(int iParam0, int iParam1, bool bParam2, var uParam3)
{
	return func_195(iParam0, "sClosedHash", iParam1, "fClosedHeading", bParam2, "vClosedPos", uParam3);
}

void func_125(int iParam0, int iParam1, vector3 vParam2, var uParam5, bool bParam6)
{
	if (bParam6)
	{
		MISC::GET_GROUND_Z_FOR_3D_COORD(vParam2, &(vParam2.f_2), 0);
	}
	(Global_1051387->f_69[iParam0 /*76*/])->f_6 = func_196(iParam1, vParam2, uParam5, 0, 0, 0);
	(Global_1915170->f_3[iParam0 /*447*/])->f_16 = (Global_1051387->f_69[iParam0 /*76*/])->f_6;
	TASK::_0x5AF19B6CC2115D34((Global_1051387->f_69[iParam0 /*76*/])->f_6, 23, 1);
	TASK::_0xA7479FB665361EDB((Global_1051387->f_69[iParam0 /*76*/])->f_6, 0);
	func_113(iParam0, 16384);
}

bool func_126(struct<2> Param0)
{
	return func_197(Param0, 9, 12);
}

int func_127(int iParam0)
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	vVar2 = { 0f, 0f, 0f };
	if (!func_123(iParam0, &iVar0, &uVar1, &vVar2) || func_121(vVar2))
	{
		return 0;
	}
	iVar6 = 4;
	iVar5 = 0;
	while (iVar5 < 4)
	{
		if (&Global_1051387->f_4319[iVar5 /*7*/] == -1)
		{
			iVar6 = iVar5;
		}
		else
		{
			iVar5++;
		}
	}
	if (iVar6 == 4)
	{
		return 0;
	}
	Global_1051387->f_4319[iVar6 /*7*/] = iParam0;
	(Global_1051387->f_4319[iVar6 /*7*/])->f_6 = func_196(iVar0, vVar2, uVar1, 0, 0, 0);
	(Global_1051387->f_4319[iVar6 /*7*/])->f_5 = iVar0;
	TASK::_0x5AF19B6CC2115D34((Global_1051387->f_4319[iVar6 /*7*/])->f_6, 23, 1);
	TASK::_0xA7479FB665361EDB((Global_1051387->f_4319[iVar6 /*7*/])->f_6, 0);
	func_113(32, 16384);
	iVar7 = 0;
	iVar8 = 0;
	if (func_198(iParam0, &iVar7, &iVar8))
	{
		(Global_1051387->f_4319[iVar6 /*7*/])->f_3 = iVar7;
		(Global_1051387->f_4319[iVar6 /*7*/])->f_4 = iVar8;
	}
	return 1;
}

bool func_128(int iParam0, bool bParam1)
{
	if (func_45() != -1)
	{
		return false;
	}
	if (!func_103(iParam0))
	{
		return false;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(func_129(iParam0)))
	{
		return false;
	}
	if (bParam1 && !ENTITY::DOES_ENTITY_EXIST(func_199(iParam0)))
	{
		return false;
	}
	return !_NAMESPACE48::_0xEB98B38CA60742D7(func_129(iParam0));
}

int func_129(int iParam0)
{
	if (!func_103(iParam0))
	{
		return 0;
	}
	return ((*Global_1893763)[iParam0 /*3*/])->f_1;
}

bool func_130(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 12);
}

bool func_131(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 16);
}

bool func_132(int iParam0)
{
	return iParam0 != 0;
}

int func_133(int iParam0)
{
	return 0;
}

void func_134(int iParam0)
{
	if (!func_200(1, 1))
	{
		return;
	}
	if (!LAW::_0xC7DC5A0A7DF608CB(func_201(1)))
	{
		return;
	}
	if (func_202(0, 0, 1))
	{
		return;
	}
	if (func_192(func_110(iParam0, 3)))
	{
		if (func_203(Global_35, (Global_1915170->f_3[3 /*447*/])->f_10, 1) > 80f)
		{
			return;
		}
	}
	if (func_192(func_110(iParam0, 0)))
	{
		if (func_203(Global_35, (Global_1915170->f_3[0 /*447*/])->f_10, 1) > 100f)
		{
			return;
		}
	}
	func_204(1, iParam0);
}

int func_135()
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return Global_1070355->f_4;
}

void func_136(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (func_117(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam1, bParam3);
	}
}

void func_137(int iParam0, bool bParam1)
{
	if (func_117(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 2 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 2);
		}
	}
}

void func_138(int iParam0, bool bParam1)
{
	if (func_117(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
	}
}

void func_139(int iParam0, bool bParam1)
{
	if (func_117(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 0 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 0);
		}
	}
}

int func_140()
{
	return 1;
}

int func_141(int iParam0)
{
	if ((iParam0 == 22 || iParam0 == 39) && !func_205())
	{
		return 1;
	}
	if (iParam0 == 66)
	{
		return 1;
	}
	return 0;
}

int func_142()
{
	if (Global_13)
	{
		return 0;
	}
	if (!func_206())
	{
		return 0;
	}
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1938075->f_75.f_55))
	{
		return 0;
	}
	if (func_202(-1 ^ 9, 0, 1))
	{
		return 0;
	}
	return 1;
}

char* func_143(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, var uParam6)
{
	char* sVar0;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1893575->f_162)))
	{
		sVar0 = func_207(Global_1893575->f_162);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && bParam4)
	{
		sVar0 = func_209(func_208(Global_36));
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		if (!func_210(iParam0) || func_211(44))
		{
			switch (iParam0)
			{
				case 2:
					sVar0 = "LANDMARK_MERKINS_WALLER";
					break;
				case 3:
					sVar0 = "SETTLEMENT_LAGRAS";
					break;
				case 4:
					sVar0 = "HIDEOUT_LAKAY";
					break;
				case 1:
					sVar0 = "LANDMARK_MACOMBS_END";
					break;
				case 6:
					sVar0 = "LANDMARK_HAGEN_ORCHARDS";
					break;
				case 5:
					sVar0 = "TOWN_SAINTDENIS";
					break;
				case 8:
					sVar0 = "SETTLEMENT_GRAND_KORRIGAN";
					break;
				case 9:
					sVar0 = "HIDEOUT_SHADY_BELLE";
					break;
				case 10:
					sVar0 = "LANDMARK_SILTWATER_STRAND";
					break;
				case 11:
					sVar0 = "SETTLEMENT_APPLESEED_TIMBER_CO";
					break;
				case 12:
					sVar0 = "LANDMARK_BERYLS_DREAM";
					break;
				case 15:
					sVar0 = "SETTLEMENT_FORT_RIGGS_HOLDING_CAMP";
					break;
				case 16:
					sVar0 = "HIDEOUT_HANGING_DOG_RANCH";
					break;
				case 17:
					sVar0 = "HOMESTEAD_LONE_MULE_STEAD";
					break;
				case 19:
					sVar0 = "LANDMARK_MONTOS_REST";
					break;
				case 20:
					sVar0 = "LANDMARK_OWANJILA_DAM";
					break;
				case 21:
					sVar0 = "HOMESTEAD_PAINTED_SKY";
					break;
				case 22:
					sVar0 = "SETTLEMENT_PRONGHORN_RANCH";
					break;
				case 23:
					sVar0 = "LANDMARK_RIGGS_STATION";
					break;
				case 25:
					sVar0 = "HOMESTEAD_SHEPHERDS_RISE";
					break;
				case 26:
					sVar0 = "TOWN_STRAWBERRY";
					break;
				case 27:
					sVar0 = "LANDMARK_VALLEY_VIEW";
					break;
				case 28:
					sVar0 = "LANDMARK_WALLACE_STATION";
					break;
				case 30:
					sVar0 = "HOMESTEAD_WATSONS_CABIN";
					break;
				case 31:
					sVar0 = "LANDMARK_CANEBREAK_MANOR";
					break;
				case 32:
					sVar0 = "LANDMARK_COPPERHEAD_LANDING";
					break;
				case 33:
					sVar0 = "SETTLEMENT_SISIKA_PENITENTIARY";
					break;
				case 127:
					sVar0 = "TOWN_ARMADILLO";
					break;
				case 128:
					sVar0 = "SETTLEMENT_COOTS_CHAPEL";
					break;
				case 131:
					sVar0 = "SETTLEMENT_RIDGEWOOD_FARM";
					break;
				case 130:
					sVar0 = "LANDMARK_RILEYS_CHARGE";
					break;
				case 132:
					sVar0 = "HIDEOUT_TWIN_ROCKS";
					break;
				case 35:
					sVar0 = "LANDMARK_BACCHUS_BRIDGE";
					break;
				case 36:
					sVar0 = "HOMESTEAD_FIRWOOD_RISE";
					break;
				case 37:
					sVar0 = "SETTLEMENT_FORT_WALLACE";
					break;
				case 38:
					sVar0 = "HIDEOUT_SIX_POINT_CABIN";
					break;
				case 120:
					sVar0 = "HIDEOUT_GAPTOOTH_BREACH";
					break;
				case 122:
					sVar0 = "SETTLEMENT_RATHSKELLER_FORK";
					break;
				case 121:
					sVar0 = "TOWN_TUMBLEWEED";
					break;
				case 39:
					sVar0 = "SETTLEMENT_BEECHERS_HOPE";
					break;
				case 40:
					sVar0 = "TOWN_BLACKWATER";
					break;
				case 41:
					sVar0 = "LANDMARK_QUAKERS_COVE";
					break;
				case 42:
					sVar0 = "HOMESTEAD_ADLER_RANCH";
					break;
				case 53:
					sVar0 = "LANDMARK_CALUMET_RAVINE";
					break;
				case 44:
					sVar0 = "HOMESTEAD_CHEZ_PORTER";
					break;
				case 45:
					sVar0 = "HIDEOUT_COLTER";
					break;
				case 43:
					sVar0 = "LANDMARK_WINDOW_ROCK";
					break;
				case 47:
					sVar0 = "LANDMARK_MILLESANI_CLAIM";
					break;
				case 51:
					sVar0 = "LANDMARK_TEMPEST_RIM";
					break;
				case 58:
					sVar0 = "LANDMARK_THE_LOFT";
					break;
				case 60:
					sVar0 = "SETTLEMENT_WAPITI";
					break;
				case 52:
					sVar0 = "LANDMARK_EWING_BASIN";
					break;
				case 62:
					sVar0 = "SETTLEMENT_AGUASDULCES";
					break;
				case 64:
					sVar0 = "LANDMARK_CINCO_TORRES";
					break;
				case 65:
					sVar0 = "LANDMARK_LA_CAPILLA";
					break;
				case 66:
					sVar0 = "TOWN_MANICATO";
					break;
				case 134:
					sVar0 = "TOWN_MACFARLANES_RANCH";
					break;
				case 135:
					sVar0 = "SETTLEMENT_THIEVES_LANDING";
					break;
				case 67:
					sVar0 = "LANDMARK_OLD_GREENBANK_MILL";
					break;
				case 69:
					sVar0 = "HOMESTEAD_CARMODY_DELL";
					break;
				case 70:
					sVar0 = "SETTLEMENT_CORNWALL_KEROSENE_TAR";
					break;
				case 71:
					sVar0 = "HOMESTEAD_GUTHRIE_FARM";
					break;
				case 72:
					sVar0 = "LANDMARK_CUMBERLAND_FALLS";
					break;
				case 73:
					sVar0 = "HOMESTEAD_DOWNES_RANCH";
					break;
				case 74:
					sVar0 = "SETTLEMENT_EMERALD_RANCH";
					break;
				case 75:
					sVar0 = "LANDMARK_GRANGERS_HOGGERY";
					break;
				case 77:
					sVar0 = "HOMESTEAD_LARNED_SOD";
					break;
				case 79:
					sVar0 = "LANDMARK_LUCKYS_CABIN";
					break;
				case 80:
					sVar0 = "LANDMARK_FLATNECK_STATION";
					break;
				case 81:
					sVar0 = "TOWN_VALENTINE";
					break;
				case 82:
					sVar0 = "HOMESTEAD_ABERDEEN_PIG_FARM";
					break;
				case 83:
					sVar0 = "TOWN_ANNESBURG";
					break;
				case 84:
					sVar0 = "HIDEOUT_BEAVER_HOLLOW";
					break;
				case 87:
					sVar0 = "SETTLEMENT_BUTCHER_CREEK";
					break;
				case 85:
					sVar0 = "LANDMARK_BLACK_BALSAM_RISE";
					break;
				case 86:
					sVar0 = "LANDMARK_BRANDYWINE_DROP";
					break;
				case 88:
					sVar0 = "HOMESTEAD_DOVERHILL";
					break;
				case 91:
					sVar0 = "HOMESTEAD_MACLEANS_HOUSE";
					break;
				case 92:
					sVar0 = "LANDMARK_MOSSY_FLATS";
					break;
				case 93:
					sVar0 = "LANDMARK_ROANOKE_VALLEY";
					break;
				case 94:
					sVar0 = "HOMESTEAD_WILLARDS_REST";
					break;
				case 98:
					sVar0 = "TOWN_VANHORN";
					break;
				case 123:
					sVar0 = "SETTLEMENT_BENEDICT_POINT";
					break;
				case 124:
					sVar0 = "HIDEOUT_FORT_MERCER";
					break;
				case 125:
					sVar0 = "SETTLEMENT_PLAINVIEW";
					break;
				case 99:
					sVar0 = "SETTLEMENT_BRAITHWAITE_MANOR";
					break;
				case 100:
					sVar0 = "LANDMARK_BOLGER_GLADE";
					break;
				case 101:
					sVar0 = "SETTLEMENT_CALIGA_HALL";
					break;
				case 102:
					sVar0 = "HOMESTEAD_CATFISH_JACKSONS";
					break;
				case 104:
					sVar0 = "HIDEOUT_CLEMENS_POINT";
					break;
				case 105:
					sVar0 = "HOMESTEAD_COMPSONS_STEAD";
					break;
				case 106:
					sVar0 = "HOMESTEAD_HILL_HAVEN_RANCH";
					break;
				case 108:
					sVar0 = "HOMESTEAD_LONNIES_SHACK";
					break;
				case 110:
					sVar0 = "LANDMARK_RADLEYS_PASTURE";
					break;
				case 111:
					sVar0 = "TOWN_RHODES";
					break;
				case 114:
					sVar0 = "LANDMARK_BEAR_CLAW";
					break;
				case 116:
					sVar0 = "SETTLEMENT_MANZANITA_POST";
					break;
				case 117:
					sVar0 = "LANDMARK_PACIFIC_UNION_RAILROAD";
					break;
				case 118:
					sVar0 = "LANDMARK_TANNERS_REACH";
					break;
				case 137:
					sVar0 = "SETTLEMENT_CENTRAL_UNION_RAILROAD_CAMP";
					break;
			}
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) || bParam5)
	{
		switch (iParam2)
		{
			case -49694339:
				sVar0 = "WATER_ARROYO_DE_LA_VIBORA";
				*uParam6 = 1;
				break;
			case -196675805: /* GXTEntry: "Aurora Basin" */
				sVar0 = "WATER_AURORA_BASIN";
				*uParam6 = 1;
				break;
			case -1168459546:
				sVar0 = "WATER_BAHIA_DE_LA_PAZ";
				*uParam6 = 1;
				break;
			case 795414694: /* GXTEntry: "Barrow Lagoon" */
				sVar0 = "WATER_BARROW_LAGOON";
				*uParam6 = 1;
				break;
			case -557290573: /* GXTEntry: "Bayou Nwa" */
				sVar0 = "DISTRICT_BAYOU_NWA";
				*uParam6 = 1;
				break;
			case -1073312073: /* GXTEntry: "Cairn Lake" */
				sVar0 = "WATER_CAIRN_LAKE";
				*uParam6 = 1;
				break;
			case -804804953:
				sVar0 = "WATER_CATTAIL_POND";
				*uParam6 = 1;
				break;
			case 370072007: /* GXTEntry: "Dakota River" */
				sVar0 = "WATER_DAKOTA_RIVER";
				*uParam6 = 1;
				break;
			case 1245451421: /* GXTEntry: "Deadboot Creek" */
				sVar0 = "WATER_DEADBOOT_CREEK";
				*uParam6 = 1;
				break;
			case -105598602: /* GXTEntry: "Elysian Pool" */
				sVar0 = "WATER_ELYSIAN_POOL";
				*uParam6 = 1;
				break;
			case -1356490953:
				sVar0 = "WATER_FLAT_IRON_LAKE";
				*uParam6 = 1;
				break;
			case -1276586360: /* GXTEntry: "Hawks Eye Creek" */
				sVar0 = "WATER_HAWKS_EYE_CREEK";
				*uParam6 = 1;
				break;
			case 1755369577: /* GXTEntry: "Heartlands Overflow" */
				sVar0 = "LANDMARK_HEARTLAND_OVERFLOW";
				*uParam6 = 1;
				break;
			case 1175365009: /* GXTEntry: "Hot Springs" */
				sVar0 = "WATER_COTORRA_SPRINGS";
				*uParam6 = 1;
				break;
			case -1369817450: /* GXTEntry: "Lake Don Julio" */
				sVar0 = "WATER_LAKE_DON_JULIO";
				*uParam6 = 1;
				break;
			case 592454541: /* GXTEntry: "Lake Isabella" */
				sVar0 = "WATER_LAKE_ISABELLA";
				*uParam6 = 1;
				break;
			case -2040708515:
				sVar0 = "WATER_LANNAHECHEE_RIVER";
				*uParam6 = 1;
				break;
			case -1410384421: /* GXTEntry: "Little Creek River" */
				sVar0 = "WATER_LITTLE_CREEK_RIVER";
				*uParam6 = 1;
				break;
			case -1308233316: /* GXTEntry: "Lower Montana River" */
				sVar0 = "WATER_LOWER_MONTANA_RIVER";
				*uParam6 = 1;
				break;
			case 301094150: /* GXTEntry: "Mattlock Pond" */
				sVar0 = "WATER_MATTOCK_POND";
				*uParam6 = 1;
				break;
			case -811730579: /* GXTEntry: "Moonstone Pond" */
				sVar0 = "WATER_MOONSTONE_POND";
				*uParam6 = 1;
				break;
			case -1817904483:
				sVar0 = "WATER_OCREAGHS_RUN";
				*uParam6 = 1;
				break;
			case -1300497193: /* GXTEntry: "Owanjila" */
				sVar0 = "WATER_OWANJILA";
				*uParam6 = 1;
				break;
			case 2005774838: /* GXTEntry: "Ringneck Creek" */
				sVar0 = "WATER_RINGNECK_CREEK";
				*uParam6 = 1;
				break;
			case -247856387: /* GXTEntry: "Sea of Coronado" */
				sVar0 = "WATER_SEA_OF_CORONADO";
				*uParam6 = 1;
				break;
			case -823661292: /* GXTEntry: "Southfield Flats" */
				sVar0 = "WATER_SOUTHFIELD_FLATS";
				*uParam6 = 1;
				break;
			case -218679770: /* GXTEntry: "Spider Gorge" */
				sVar0 = "WATER_SPIDER_GORGE";
				*uParam6 = 1;
				break;
			case -1287619521: /* GXTEntry: "Stillwater Creek" */
				sVar0 = "WATER_STILLWATER_CREEK";
				*uParam6 = 1;
				break;
			case -1781130443: /* GXTEntry: "Upper Montana River" */
				sVar0 = "WATER_UPPER_MONTANA_RIVER";
				*uParam6 = 1;
				break;
			case -261541730: /* GXTEntry: "Whinyard Strait" */
				sVar0 = "WATER_WHINYARD_STRAIT";
				*uParam6 = 1;
				break;
			case -1229593481: /* GXTEntry: "Kamassa River" */
				if (iParam1 == 10)
				{
					sVar0 = "WATER_KAMASSA_RIVER";
				}
				else if (iParam1 == 2)
				{
					sVar0 = "WATER_KAMASSA_RIVER_BLUEWATER_MARSH";
				}
				else
				{
					sVar0 = "WATER_KAMASSA_RIVER_BAYOU_NWA";
				}
				*uParam6 = 1;
				break;
			case -1504425495: /* GXTEntry: "San Luis River" */
				if (iParam1 == 4 || iParam1 == 12)
				{
					sVar0 = "WATER_SAN_LUIS_RIVER_WEST_ELIZABETH";
				}
				else
				{
					sVar0 = "WATER_SAN_LUIS_RIVER_NEW_AUSTIN";
				}
				*uParam6 = 1;
				break;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		switch (iParam1)
		{
			case 0:
				sVar0 = "DISTRICT_BAYOU_NWA";
				break;
			case 1:
				sVar0 = "DISTRICT_BIG_VALLEY";
				break;
			case 2:
				sVar0 = "DISTRICT_BLUEWATER_MARSH";
				break;
			case 3:
				sVar0 = "DISTRICT_CUMBERLAND_FOREST";
				break;
			case 4:
				sVar0 = "DISTRICT_GREAT_PLAINS";
				break;
			case 6:
				sVar0 = "DISTRICT_GRIZZLIES";
				break;
			case 7:
				sVar0 = "DISTRICT_GRIZZLIES";
				break;
			case 8:
				sVar0 = "DISTRICT_GUARMA";
				break;
			case 9:
				sVar0 = "DISTRICT_HEARTLANDS";
				break;
			case 10:
				sVar0 = "DISTRICT_ROANOAKE_RIDGE";
				break;
			case 11:
				sVar0 = "DISTRICT_SCARLETT_MEADOWS";
				break;
			case 12:
				sVar0 = "DISTRICT_TALL_TREES";
				break;
			case 13:
				sVar0 = "DISTRICT_GAPTOOTH_RIDGE";
				break;
			case 14:
				sVar0 = "DISTRICT_RIO_BRAVO";
				break;
			case 15:
				sVar0 = "DISTRICT_CHOLLA_SPRINGS";
				break;
			case 16:
				sVar0 = "DISTRICT_HENNIGANS_STEAD";
				break;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		switch (iParam3)
		{
			case 0:
				sVar0 = "STATE_AMBARINO";
				break;
			case 2:
				sVar0 = "STATE_LEMOYNE";
				break;
			case 3:
				sVar0 = "STATE_WEST_ELIZABETH";
				break;
			case 4:
				sVar0 = "STATE_NEW_AUSTIN";
				break;
			case 1:
				sVar0 = "STATE_NEW_HANOVER";
				break;
			case 5:
				sVar0 = "STATE_GUARMA";
				break;
		}
	}
	return sVar0;
}

bool func_144(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

int func_145(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 2:
			return 2;
		case 11:
			return 2;
		case 9:
			return 1;
		case 10:
			return 1;
		case 3:
			return 1;
		case 4:
			return 3;
		case 12:
			return 3;
		case 1:
			return 3;
		case 5:
			return 0;
		case 6:
			return 0;
		case 7:
			return 0;
		case 8:
			return 5;
		case 13:
			return 4;
		case 14:
			return 4;
		case 15:
			return 4;
		case 16:
			return 4;
		default:
			break;
	}
	return -1;
}

int func_146(int iParam0)
{
	int iVar0;
	struct<7> Var1;
	var uVar8;

	if (!func_144(iParam0))
	{
		return -1;
	}
	if (Global_1572887->f_13 == -1)
	{
		return &(Global_40.f_186[iParam0 /*12*/]);
	}
	iVar0 = 0;
	Var1 = { func_212(PLAYER::PLAYER_ID()) };
	BOUNTY::_0x4EF23E04A0C8FF51(&Var1, &uVar8);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1070355->f_19592[iVar0 /*12*/] = uVar8;
		iVar0++;
	}
	return &(Global_1070355->f_19592[iParam0 /*12*/]);
}

int func_147(int iParam0)
{
	switch (iParam0)
	{
		case -196675805: /* GXTEntry: "Aurora Basin" */
			return 0;
		case 795414694: /* GXTEntry: "Barrow Lagoon" */
			return 0;
		case -557290573: /* GXTEntry: "Bayou Nwa" */
			return 2;
		case 650214731: /* GXTEntry: "Beartooth Beck" */
			return 1;
		case -1073312073: /* GXTEntry: "Cairn Lake" */
			return 0;
		case 231313522:
			return 0;
		case -804804953:
			return 0;
		case 370072007: /* GXTEntry: "Dakota River" */
			return 1;
		case 1245451421: /* GXTEntry: "Deadboot Creek" */
			return 1;
		case 469159176: /* GXTEntry: "Dewberry Creek" */
			return 1;
		case -105598602: /* GXTEntry: "Elysian Pool" */
			return 0;
		case -1356490953:
			return 0;
		case -1276586360: /* GXTEntry: "Hawks Eye Creek" */
			return 1;
		case 1755369577: /* GXTEntry: "Heartlands Overflow" */
			return 0;
		case 1175365009: /* GXTEntry: "Hot Springs" */
			return 0;
		case -1229593481: /* GXTEntry: "Kamassa River" */
			return 1;
		case -1369817450: /* GXTEntry: "Lake Don Julio" */
			return 0;
		case 592454541: /* GXTEntry: "Lake Isabella" */
			return 0;
		case -2040708515:
			return 1;
		case -1410384421: /* GXTEntry: "Little Creek River" */
			return 1;
		case -1308233316: /* GXTEntry: "Lower Montana River" */
			return 1;
		case 301094150: /* GXTEntry: "Mattlock Pond" */
			return 0;
		case -811730579: /* GXTEntry: "Moonstone Pond" */
			return 0;
		case -1817904483:
			return 0;
		case -1300497193: /* GXTEntry: "Owanjila" */
			return 0;
		case 2005774838: /* GXTEntry: "Ringneck Creek" */
			return 1;
		case -1504425495: /* GXTEntry: "San Luis River" */
			return 1;
		case -247856387: /* GXTEntry: "Sea of Coronado" */
			return 1;
		case -823661292: /* GXTEntry: "Southfield Flats" */
			return 0;
		case -218679770: /* GXTEntry: "Spider Gorge" */
			return 1;
		case -1287619521: /* GXTEntry: "Stillwater Creek" */
			return 1;
		case -1781130443: /* GXTEntry: "Upper Montana River" */
			return 1;
		case -261541730: /* GXTEntry: "Whinyard Strait" */
			return 1;
		default:
			break;
	}
	return -1;
}

char* func_148(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "WATER_TYPE_LAKE";
		case 1:
			return "WATER_TYPE_RIVER";
		case 2:
			return "WATER_TYPE_SWAMP";
		default:
			break;
	}
	return "";
}

bool func_149(int iParam0, int iParam1)
{
	if (!func_10(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_13 == -1)
	{
		return (Global_40.f_259[iParam0] && iParam1) != 0;
	}
	return (Global_1070355->f_19665[iParam0] && iParam1) != 0;
}

bool func_150(int iParam0, int iParam1)
{
	if (!func_144(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_13 == -1)
	{
		return ((Global_40.f_186[iParam0 /*12*/])->f_5 && iParam1) != 0;
	}
	return ((Global_1070355->f_19592[iParam0 /*12*/])->f_5 && iParam1) != 0;
}

int func_151()
{
	return &Global_1902688;
}

int func_152(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_153(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

float func_154(float fParam0)
{
	return ((fParam0 * 1.8f) + 32f);
}

char* func_155(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_213(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

var func_156(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<4> Var0;
	vector3 vVar13;
	var uVar16;

	Var0 = -2;
	Var0 = iParam2;
	Var0.f_1 = iParam3;
	Var0.f_2 = iParam4;
	Var0.f_3 = iParam5;
	vVar13.f_1 = sParam0;
	vVar13.f_2 = sParam1;
	uVar16 = _NAMESPACE71::_0xD05590C1AB38F068(&Var0, &vVar13, iParam6, iParam7);
	return uVar16;
}

int func_157(int iParam0)
{
	if (func_210(iParam0))
	{
		if (!func_211(44))
		{
			return 0;
		}
	}
	return 1;
}

void func_158(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

struct<2> func_159(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_160(var uParam0, int iParam1, bool bParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_0x6A0184E904CDF25E(&uParam0, bParam2);
}

void func_161(int iParam0)
{
	func_214((Global_1938932->f_5[iParam0 /*11*/])->f_6, 1);
	func_215((Global_1938932->f_5[iParam0 /*11*/])->f_6, 0);
	if (VOLUME::_0xF6A8A652A6B186CD((Global_1938932->f_5[iParam0 /*11*/])->f_8))
	{
		VOLUME::_0xFDFECC6EE4491E11((Global_1938932->f_5[iParam0 /*11*/])->f_8);
	}
	func_216(iParam0, 8192);
	func_216(iParam0, 32768);
	func_216(iParam0, 524288);
	func_216(iParam0, 1048576);
	(Global_1938932->f_5[iParam0 /*11*/])->f_10 = 0;
	(Global_1938932->f_5[&Global_1938932 /*11*/])->f_9 = 0;
	Global_1938932->f_5[iParam0 /*11*/] = 0;
	(Global_1938932->f_5[iParam0 /*11*/])->f_1 = { 0f, 0f, 0f };
	(Global_1938932->f_5[iParam0 /*11*/])->f_4 = 0;
	(Global_1938932->f_5[iParam0 /*11*/])->f_5 = -1;
	(Global_1938932->f_5[iParam0 /*11*/])->f_6 = -1;
	(Global_1938932->f_5[iParam0 /*11*/])->f_7 = 0;
}

void func_162(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_103((Global_1915170->f_3[iParam0 /*447*/])->f_21) && func_217((Global_1915170->f_3[iParam0 /*447*/])->f_21))
	{
		func_218((Global_1915170->f_3[iParam0 /*447*/])->f_21, 0, 1, 0, 0);
	}
	(Global_1915170->f_3[iParam0 /*447*/])->f_10 = { 0f, 0f, 0f };
	(Global_1915170->f_3[iParam0 /*447*/])->f_21 = -1;
	(Global_1915170->f_3[iParam0 /*447*/])->f_22 = -1;
	(Global_1915170->f_3[iParam0 /*447*/])->f_16 = 0;
	(Global_1915170->f_3[iParam0 /*447*/])->f_1 = 0;
	if (PED::_0x91A5F9CBEBB9D936((Global_1915170->f_3[iParam0 /*447*/])->f_35))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA((Global_1915170->f_3[iParam0 /*447*/])->f_35, false);
	}
	func_219((Global_1915170->f_3[iParam0 /*447*/])->f_9, 0);
	func_220(iParam0, 536870912);
	iVar1 = func_221(iParam0);
	if (iVar1 >= 15)
	{
		(Global_1915170->f_3[iParam0 /*447*/])->f_409 = 0;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			func_186(&((Global_1915170->f_3[iParam0 /*447*/])->f_318[iVar0 /*6*/]));
			(Global_1915170->f_3[iParam0 /*447*/])->f_318[iVar0 /*6*/] = 0;
			((Global_1915170->f_3[iParam0 /*447*/])->f_318[iVar0 /*6*/])->f_1 = { 0f, 0f, 0f };
			((Global_1915170->f_3[iParam0 /*447*/])->f_318[iVar0 /*6*/])->f_4 = 0f;
			((Global_1915170->f_3[iParam0 /*447*/])->f_318[iVar0 /*6*/])->f_5 = 0;
			iVar0++;
		}
		(Global_1915170->f_3[iParam0 /*447*/])->f_409 = 0;
	}
	if ((Global_1915170->f_3[iParam0 /*447*/])->f_441 != 0)
	{
		_NAMESPACE71::_0x2F901291EF177B02((Global_1915170->f_3[iParam0 /*447*/])->f_441, 0);
	}
	(Global_1915170->f_3[iParam0 /*447*/])->f_23 = 0;
	func_222(iParam0);
	(Global_1915170->f_3[iParam0 /*447*/])->f_9 = -1;
	(Global_1915170->f_3[iParam0 /*447*/])->f_8 = -1;
}

bool func_163(int iParam0, int iParam1)
{
	if (func_45() != -1)
	{
		return false;
	}
	if (!func_103(iParam0))
	{
		return false;
	}
	return (Global_9657[iParam0 /*2*/] && iParam1) != 0;
}

int func_164(int iParam0, bool bParam1)
{
	if (!func_103(iParam0))
	{
		return 0;
	}
	if (!func_163(iParam0, 2))
	{
		return 0;
	}
	if (func_169(iParam0) == 0)
	{
		return 1;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(func_129(iParam0)))
	{
		return 1;
	}
	if (func_163(iParam0, 1) && !bParam1)
	{
		func_223(iParam0, 128);
		return 1;
	}
	func_171(iParam0, 129);
	func_224(iParam0);
	_NAMESPACE48::_0xFC77C5B44D5FF7C0(func_129(iParam0));
	func_170(iParam0, 0);
	return 1;
}

int func_165(int iParam0)
{
	switch (iParam0)
	{
		case 27:
		case 28:
		case 29:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_166(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 37:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_167()
{
	int iVar0;
	var uVar1;

	func_188(30);
	func_190(30);
	func_225(30);
	func_191(30);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (TASK::_0x841475AC96E794D1((Global_1051387->f_3582[iVar0 /*19*/])->f_6))
		{
			TASK::_0x81948DFE4F5A0283((Global_1051387->f_3582[iVar0 /*19*/])->f_6);
		}
		(Global_1051387->f_3582[iVar0 /*19*/])->f_6 = uVar1;
		if (TASK::_0x841475AC96E794D1((Global_1051387->f_3582[iVar0 /*19*/])->f_13))
		{
			TASK::_0x81948DFE4F5A0283((Global_1051387->f_3582[iVar0 /*19*/])->f_13);
		}
		(Global_1051387->f_3582[iVar0 /*19*/])->f_13 = uVar1;
		if (MAP::DOES_BLIP_EXIST((Global_1051387->f_3582[iVar0 /*19*/])->f_17))
		{
			MAP::REMOVE_BLIP(&((Global_1051387->f_3582[iVar0 /*19*/])->f_17));
		}
		if (ENTITY::DOES_ENTITY_EXIST((Global_1051387->f_3582[iVar0 /*19*/])->f_8))
		{
			if (!ENTITY::_0x88AD6CC10D8D35B2((Global_1051387->f_3582[iVar0 /*19*/])->f_8))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY((Global_1051387->f_3582[iVar0 /*19*/])->f_8, true, true);
			}
			PED::DELETE_PED(&((Global_1051387->f_3582[iVar0 /*19*/])->f_8));
		}
		if (ENTITY::DOES_ENTITY_EXIST((Global_1051387->f_3582[iVar0 /*19*/])->f_15))
		{
			if (!ENTITY::_0x88AD6CC10D8D35B2((Global_1051387->f_3582[iVar0 /*19*/])->f_15))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY((Global_1051387->f_3582[iVar0 /*19*/])->f_15, true, true);
			}
			PED::DELETE_PED(&((Global_1051387->f_3582[iVar0 /*19*/])->f_15));
		}
		(Global_1051387->f_3582[iVar0 /*19*/])->f_1 = 0;
		(Global_1051387->f_3582[iVar0 /*19*/])->f_5 = 0;
		(Global_1051387->f_3582[iVar0 /*19*/])->f_8 = 0;
		(Global_1051387->f_3582[iVar0 /*19*/])->f_15 = 0;
		(Global_1051387->f_3582[iVar0 /*19*/])->f_7 = 0;
		(Global_1051387->f_3582[iVar0 /*19*/])->f_14 = 0;
		(Global_1051387->f_3582[iVar0 /*19*/])->f_9 = -1;
		Global_1051387->f_3582[iVar0 /*19*/] = -1;
		iVar0++;
	}
	if (func_184(30, 262144))
	{
		PED::REMOVE_RELATIONSHIP_GROUP((Global_1051387->f_69[30 /*76*/])->f_22);
		func_185(30, 262144);
	}
}

void func_168()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_1051387->f_4319[iVar0 /*7*/] = -1;
		(Global_1051387->f_4319[iVar0 /*7*/])->f_3 = 0;
		(Global_1051387->f_4319[iVar0 /*7*/])->f_4 = 0;
		if (TASK::_0x841475AC96E794D1((Global_1051387->f_4319[iVar0 /*7*/])->f_6))
		{
			TASK::_0x81948DFE4F5A0283((Global_1051387->f_4319[iVar0 /*7*/])->f_6);
		}
		iVar0++;
	}
	func_191(32);
}

int func_169(int iParam0)
{
	if (!func_103(iParam0))
	{
		return 0;
	}
	return Global_1893763[iParam0 /*3*/];
}

void func_170(int iParam0, int iParam1)
{
	if (!func_103(iParam0))
	{
		return;
	}
	((*Global_1893763)[iParam0 /*3*/])->f_1 = iParam1;
}

void func_171(int iParam0, int iParam1)
{
	if (func_45() != -1)
	{
		return;
	}
	if (!func_103(iParam0))
	{
		return;
	}
	Global_9657[iParam0 /*2*/] = (&Global_9657[iParam0 /*2*/] - (Global_9657[iParam0 /*2*/] && iParam1));
}

int func_172(int iParam0)
{
	if (!func_103(iParam0))
	{
		return 0;
	}
	if (!func_163(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

bool func_173(struct<2> Param0)
{
	return func_197(Param0, 5, 8);
}

bool func_174(int iParam0)
{
	return func_226(1, iParam0);
}

int func_175(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1099293->f_1;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 26;
	}
	if (&Global_1273882->f_22[iParam0])
	{
		return ((*Global_1097609)[iParam0 /*51*/])->f_1;
	}
	return 26;
}

int func_176(int iParam0)
{
	if (func_227(&(Global_1099293->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

void func_177(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_228(iParam0);
	if (!func_229(1))
	{
		return;
	}
	if (bParam1)
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	else if (!func_230(128) && !func_231(18))
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	if (bParam3 && func_232() == 4)
	{
		func_176(17);
	}
	func_233(1024);
}

int func_178(int iParam0)
{
	if (func_234(&(Global_1099293->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

void func_179(var uParam0)
{
	struct<30> Var0;

	*uParam0 = { Var0 };
}

void func_180(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

void func_181(struct<29> Param0, var uParam29, int iParam30)
{
	switch (Param0.f_5)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(Param0.f_4))
			{
			}
			break;
	}
	if (Param0.f_16)
	{
	}
	if (VOLUME::_0x92A78D0BEDB332A3(Param0.f_27) && Param0.f_28)
	{
	}
}

void func_182(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
{
	switch (Param0.f_5)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
}

int func_183(int iParam0)
{
	if (((iParam0 == 28 || iParam0 == 29) || iParam0 == 38) || iParam0 == 27)
	{
		return 1;
	}
	if (func_120(iParam0, 65536))
	{
		return 1;
	}
	return 0;
}

bool func_184(int iParam0, int iParam1)
{
	return ((Global_1051387->f_69[iParam0 /*76*/])->f_1 && iParam1) != 0;
}

void func_185(int iParam0, int iParam1)
{
	if (func_184(iParam0, iParam1))
	{
	}
	(Global_1051387->f_69[iParam0 /*76*/])->f_1 = ((Global_1051387->f_69[iParam0 /*76*/])->f_1 - ((Global_1051387->f_69[iParam0 /*76*/])->f_1 && iParam1));
}

void func_186(int iParam0)
{
	if (func_117(iParam0) && func_235())
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iParam0);
	}
}

void func_187(int iParam0)
{
}

void func_188(int iParam0)
{
	(Global_1051387->f_69[iParam0 /*76*/])->f_50 = 0;
}

bool func_189(int iParam0, int iParam1)
{
	return func_236((Global_1051387->f_69[iParam0 /*76*/])->f_51, iParam1);
}

void func_190(int iParam0)
{
	(Global_1051387->f_69[iParam0 /*76*/])->f_51 = 0;
}

void func_191(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (Global_1051387->f_40 < 1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1051387->f_40)
	{
		if (iParam0 == Global_1051387[iVar0])
		{
			iVar1 = iVar0;
			bVar2 = true;
		}
		else
		{
			iVar0++;
		}
	}
	if (!bVar2)
	{
		return;
	}
	Global_1051387->f_40 = (Global_1051387->f_40 - 1);
	if (Global_1051387->f_40 < 0)
	{
		Global_1051387->f_40 = 0;
	}
	(*Global_1051387)[iVar1] = Global_1051387[Global_1051387->f_40];
}

bool func_192(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 176);
}

int func_193(int iParam0)
{
	vector3 vVar0;

	if (DATAFILE::_0x603AC35FD4602C76(Global_1131373->f_7) && !func_238(12, func_237(iParam0), &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_194(int iParam0)
{
	return iParam0 != 0;
}

int func_195(int iParam0, char* sParam1, int iParam2, char* sParam3, bool bParam4, char* sParam5, var uParam6)
{
	struct<4> Var0;

	Var0 = func_239();
	Var0.f_2 = -738708473;
	Var0.f_3 = func_237(iParam0);
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		return 0;
	}
	Var0.f_2 = -1407851228;
	Var0.f_3 = MISC::GET_HASH_KEY(sParam1);
	DATAFILE::_DATAFILE_GET_HASH(iParam2, &Var0);
	Var0.f_2 = 1059891245;
	Var0.f_3 = MISC::GET_HASH_KEY(sParam3);
	DATAFILE::_DATAFILE_GET_FLOAT(bParam4, &Var0);
	Var0.f_2 = -99852754;
	Var0.f_3 = MISC::GET_HASH_KEY(sParam5);
	DATAFILE::_DATAFILE_GET_VECTOR(uParam6, &Var0);
	return 1;
}

int func_196(int iParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6, int iParam7)
{
	return TASK::CREATE_SCENARIO_POINT(iParam0, vParam1, iParam4, iParam5, iParam6, iParam7);
}

bool func_197(struct<2> Param0, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_240(Param0))
	{
		return false;
	}
	if (Param0 != 2)
	{
		return false;
	}
	iVar0 = func_241(Param0);
	return (iVar0 >= iParam2 && iVar0 <= iParam3);
}

int func_198(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;

	Var0 = func_239();
	Var0.f_2 = -738708473;
	Var0.f_3 = func_237(iParam0);
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		return 0;
	}
	Var0.f_2 = 110382701;
	Var0.f_3 = MISC::GET_HASH_KEY("startTime");
	DATAFILE::_DATAFILE_GET_INT(iParam1, &Var0);
	Var0.f_2 = 110382701;
	Var0.f_3 = MISC::GET_HASH_KEY("endTime");
	DATAFILE::_DATAFILE_GET_INT(iParam2, &Var0);
	return 1;
}

int func_199(int iParam0)
{
	int iVar0;

	iVar0 = func_129(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(iVar0))
	{
		return 0;
	}
	return _NAMESPACE48::_0x31C70A716CAE1FEE(iVar0);
}

int func_200(int iParam0, int iParam1)
{
	return 0;
}

int func_201(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 1:
			iVar0 = 1;
			break;
		case 6:
			iVar0 = 64;
			break;
		case 2:
			iVar0 = 32;
			break;
		case 7:
			iVar0 = 16;
			break;
		case 8:
			iVar0 = 8;
			break;
	}
	return iVar0;
}

int func_202(int iParam0, bool bParam1, bool bParam2)
{
	if (Global_1572887->f_13 != -1)
	{
		if ((bParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1900718->f_67;
		}
		if ((bParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1900718->f_68;
		}
		if (func_242())
		{
			return 1;
		}
		if (Global_1070355->f_3 && !Global_1572887->f_9)
		{
			if ((((*Global_1055965)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*436*/])->f_428 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
			{
				return 1;
			}
		}
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1900718->f_67;
		}
		else
		{
			return Global_1900718->f_68;
		}
	}
	if (iParam0 == 0 && func_240(func_59(0)))
	{
		return 1;
	}
	if ((Global_1939168 && 81919 & (-1 - iParam0)) != 0)
	{
		return 1;
	}
	if (!bParam1)
	{
		if ((MISC::GET_GAME_TIMER() - 5000) < &Global_1900853)
		{
			return 1;
		}
	}
	switch (func_60(func_59(0)))
	{
		case -1:
			return 0;
		case 2:
			return iParam0 & 1 == 0;
		case 5:
			return iParam0 & 2 == 0;
		case 3:
			return iParam0 & 16 == 0;
		case 4:
			return iParam0 & 32 == 0;
		case 7:
			return iParam0 & 1024 == 0;
		default:
			break;
	}
	return 0;
}

float func_203(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_204(int iParam0, int iParam1)
{
}

int func_205()
{
	return 0;
}

int func_206()
{
	struct<2> Var0;
	struct<2> Var2;

	if (func_45() != 0)
	{
		return 1;
	}
	if (func_242())
	{
		return 0;
	}
	if (HUD::_0x7EC0D68233E391AC(6) == 1)
	{
		return 1;
	}
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { func_243() };
	if (func_240(Var0))
	{
		return 0;
	}
	Var2 = { func_244() };
	if (func_240(Var2))
	{
		return 0;
	}
	return 1;
}

char* func_207(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_208(vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 51)
	{
		if (func_245(vParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

char* func_209(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LANDMARK_MOUNT_HAGEN";
		case 1:
			return "LANDMARK_SCRATCHING_POST";
		case 2:
			return "LANDMARK_JORGES_GAP";
		case 3:
			return "LANDMARK_MERCER_STATION";
		case 4:
			return "LANDMARK_ODDFELLOWS_REST";
		case 5:
			return "LANDMARK_RATTLESNAKE_HOLLOW";
		case 6:
			return "LANDMARK_SILENT_STEAD";
		case 7:
			return "LANDMARK_THE_HANGING_ROCK";
		case 8:
			return "LANDMARK_THE_OLD_BACCHUS_PLACE";
		case 9:
			return "LANDMARK_TWO_CROWS";
		case 10:
			return "LANDMARK_REPENTANCE";
		case 11:
			return "LANDMARK_BENEDICT_PASS";
		case 12:
			return "WATER_MANTECA_FALLS";
		case 13:
			return "SETTLEMENT_LIMPANY";
		case 14:
			return "WATER_MOUNT_SHANN";
		case 15:
			return "LANDMARK_THREE_SISTERS";
		case 16:
			return "HIDEOUT_PIKES_BASIN";
		case 17:
			return "SETTLEMENT_EL_NIDO";
		case 18:
			return "LANDMARK_BRITTLEBUSH_TRAWL";
		case 19:
			return "LANDMARK_ERIS_FIELD";
		case 20:
			return "LANDMARK_GRANITE_PASS";
		case 21:
			return "LANDMARK_VENTERS_PLACE";
		case 22:
			return "LANDMARK_PLEASANCE_HOUSE";
		case 23:
			return "HOMESTEAD_CHADWICK_FARM";
		case 24:
			return "LANDMARK_BLACK_BONE_FOREST";
		case 25:
			return "LANDMARK_CITADEL_ROCK";
		case 26:
			return "LANDMARK_CUEVA_SECA";
		case 27:
			return "LANDMARK_DEWBERRY_CREEK";
		case 28:
			return "LANDMARK_DIABLO_RIDGE";
		case 29:
			return "LANDMARK_DONNER_FALLS";
		case 31:
			return "HIDEOUT_SOLOMONS_FOLLY";
		case 32:
			return "LANDMARK_FORT_BRENNAND";
		case 33:
			return "LANDMARK_CALIBANS_SEAT";
		case 34:
			return "HIDEOUT_HORSESHOE_OVERLOOK";
		case 35:
			return "LANDMARK_MESCALERO";
		case 36:
			return "LANDMARK_RIO_DEL_LOBO_HOUSE";
		case 37:
			return "LANDMARK_RIO_DEL_LOBO_ROCK";
		case 38:
			return "LANDMARK_BROKEN_TREE";
		case 39:
			return "LANDMARK_BARDS_CROSSING";
		case 40:
			return "LANDMARK_FACE_ROCK";
		case 50:
			return "LANDMARK_NEKOTI_ROCK";
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
			return "";
	}
	return "";
}

int func_210(int iParam0)
{
	switch (iParam0)
	{
		case 22:
		case 25:
		case 68:
			return 1;
	}
	return 0;
}

int func_211(int iParam0)
{
	if (!func_246(iParam0))
	{
		return 0;
	}
	return func_247(iParam0);
}

struct<7> func_212(int iParam0)
{
	struct<7> Var0;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0);
	return Var0;
}

char* func_213(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

void func_214(int iParam0, bool bParam1)
{
	char* sVar0;

	switch (iParam0)
	{
		case 5:
			sVar0 = "IZ_val_saloon_int_room_main";
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return;
	}
	AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(sVar0, bParam1, true);
}

void func_215(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 5:
			if (bParam1)
			{
				AUDIO::SET_PORTAL_SETTINGS_OVERRIDE("VAL_SALOON_SWINGING_DOOR", "VAL_SALOON_SWINGING_DOOR_BARRED");
			}
			else
			{
				AUDIO::REMOVE_PORTAL_SETTINGS_OVERRIDE("VAL_SALOON_SWINGING_DOOR_BARRED");
			}
			break;
	}
}

void func_216(int iParam0, int iParam1)
{
	func_248(&((Global_1938932->f_5[iParam0 /*11*/])->f_7), iParam1);
}

bool func_217(int iParam0)
{
	if (!func_103(iParam0))
	{
		return false;
	}
	return ((*Global_1893763)[iParam0 /*3*/])->f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_218(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_103(iParam0))
	{
		return;
	}
	if (!func_163(iParam0, 1))
	{
		return;
	}
	if (!func_163(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_217(iParam0)) && func_249(iParam0))
	{
		return;
	}
	func_171(iParam0, 1);
	func_224(iParam0);
	if (func_250(func_169(iParam0)))
	{
		iVar0 = func_129(iParam0);
		if (!_NAMESPACE48::_0x800DF3FC913355F3(iVar0))
		{
			return;
		}
		_NAMESPACE48::_0xBB68908CD11AEBDC(iVar0);
		_NAMESPACE48::_0xB65E7F733956CF25(iVar0);
		if (bParam2 && !_NAMESPACE48::_0xEB98B38CA60742D7(iVar0))
		{
			_NAMESPACE48::_0x631CD2D77FDC0316(iVar0);
		}
		iVar1 = _NAMESPACE48::_0x31C70A716CAE1FEE(iVar0);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			PED::SET_PED_CONFIG_FLAG(iVar1, 171, false);
		}
		if (bParam1)
		{
			_NAMESPACE48::_0x7B204F88F6C3D287(iVar0);
		}
		func_171(iParam0, 16);
	}
	if (func_163(iParam0, 128) && !bParam3)
	{
		func_164(iParam0, 0);
	}
}

void func_219(int iParam0, bool bParam1)
{
	if (!func_192(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (!func_251(iParam0, 1024))
		{
			func_252(iParam0, 1024);
			INVENTORY::_0x9B4E793B1CB6550A();
		}
	}
	else if (func_251(iParam0, 1024))
	{
		func_253(iParam0, 1024);
		INVENTORY::_0x9B4E793B1CB6550A();
	}
	func_254(iParam0);
}

void func_220(int iParam0, int iParam1)
{
	if (!func_255(iParam0))
	{
		return;
	}
	if (func_45() == -1)
	{
		(Global_1915170->f_3[iParam0 /*447*/])->f_6 = ((Global_1915170->f_3[iParam0 /*447*/])->f_6 - ((Global_1915170->f_3[iParam0 /*447*/])->f_6 && iParam1));
	}
	else
	{
		(Global_1051387->f_69[iParam0 /*76*/])->f_1 = ((Global_1051387->f_69[iParam0 /*76*/])->f_1 - ((Global_1051387->f_69[iParam0 /*76*/])->f_1 && iParam1));
	}
}

int func_221(int iParam0)
{
	return (Global_1915170->f_3[iParam0 /*447*/])->f_409;
}

void func_222(int iParam0)
{
	(Global_1915170->f_3[iParam0 /*447*/])->f_6 = 0;
}

void func_223(int iParam0, int iParam1)
{
	if (func_45() != -1)
	{
		return;
	}
	if (!func_103(iParam0))
	{
		return;
	}
	Global_9657[iParam0 /*2*/] = (Global_9657[iParam0 /*2*/] || iParam1);
}

void func_224(int iParam0)
{
	int iVar0;

	if (!func_103(iParam0))
	{
		return;
	}
	iVar0 = func_199(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
	((*Global_1893763)[iParam0 /*3*/])->f_2 = 0;
}

void func_225(int iParam0)
{
	(Global_1051387->f_69[iParam0 /*76*/])->f_1 = 0;
}

int func_226(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_256(&(Global_1099293->f_4), iVar0, 5);
	}
	if (iParam1 == func_257())
	{
		return func_256(&(Global_1099293->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1273882->f_22[iParam1])
	{
		return func_256(&(((*Global_1097609)[iParam1 /*51*/])->f_4), iVar0, 5);
	}
	return 0;
}

bool func_227(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
	MISC::CLEAR_BIT((*uParam0)[iVar0], iVar1);
	return bVar2;
}

void func_228(int iParam0)
{
	Global_1099293->f_26.f_12 = iParam0;
}

bool func_229(int iParam0)
{
	return (Global_1099293->f_26.f_7 && iParam0) != 0;
}

bool func_230(int iParam0)
{
	return (Global_1099293->f_26.f_9 && iParam0) != 0;
}

bool func_231(int iParam0)
{
	return (Global_1099293->f_4[Global_1100046[iParam0 /*2*/]] && ((*Global_1100046)[iParam0 /*2*/])->f_1) == ((*Global_1100046)[iParam0 /*2*/])->f_1;
}

int func_232()
{
	if (&Global_1099293 <= 5)
	{
		return &Global_1099293;
	}
	if (&Global_1099293 <= 22)
	{
		return 4;
	}
	if (&Global_1099293 <= 25)
	{
		return 3;
	}
	return 26;
}

void func_233(int iParam0)
{
	if (func_258(iParam0))
	{
		return;
	}
	Global_1099293->f_26.f_9 = (Global_1099293->f_26.f_9 || iParam0);
}

bool func_234(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
	MISC::SET_BIT((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

int func_235()
{
	return 1;
}

bool func_236(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_237(int iParam0)
{
	switch (iParam0)
	{
		case 132:
			return -809040070;
		case 6:
			return 443958153;
		case 7:
			return 1035357148;
		case 8:
			return -990591911;
		case 19:
			return 1434435999;
		case 13:
			return 914613127;
		case 14:
			return 277114628;
		case 15:
			return -441298053;
		case 12:
			return -2008988392;
		case 122:
			return 1866591384;
		case 123:
			return -810797676;
		case 5:
			return 1591504033;
		case 9:
			return -1481022983;
		case 10:
			return -200160067;
		case 11:
			return -906556724;
		case 16:
			return 882729775;
		case 17:
			return 1957450109;
		case 18:
			return 1826386989;
		case 23:
			return 213861089;
		case 24:
			return 187124199;
		case 25:
			return -1639286351;
		case 22:
			return 1244472740;
		case 26:
			return -184950877;
		case 45:
			return -922179383;
		case 48:
			return 877339314;
		case 46:
			return 327042733;
		case 49:
			return -1159824322;
		case 42:
			return 187784199;
		case 43:
			return 156869848;
		case 44:
			return 959980967;
		case 50:
			return -605457855;
		case 51:
			return -967272484;
		case 52:
			return 253446434;
		case 53:
			return -24930371;
		case 63:
			return -491616406;
		case 56:
			return 1428271505;
		case 57:
			return -404449802;
		case 60:
			return -2132681852;
		case 124:
			return 1479356600;
		case 125:
			return -1608228131;
		case 54:
			return 1700741106;
		case 55:
			return 509242725;
		case 59:
			return -1243693278;
		case 58:
			return 106026254;
		case 61:
			return -1340467914;
		case 62:
			return -2128099513;
		case 27:
			return -768596287;
		case 28:
			return -1789795772;
		case 33:
			return 986912071;
		case 31:
			return 312948291;
		case 34:
			return 770563571;
		case 35:
			return 288839560;
		case 30:
			return 399352507;
		case 39:
			return -1241147617;
		case 126:
			return 1576805996;
		case 29:
			return -1427623397;
		case 36:
			return 305555540;
		case 37:
			return -697751457;
		case 38:
			return -994915577;
		case 68:
			return 2080716288;
		case 69:
			return 922959422;
		case 70:
			return joaat("rage_p2_3");
		case 71:
			return 599204508;
		case 74:
			return -362796541;
		case 127:
			return -176953214;
		case 75:
			return -1992095599;
		case 72:
			return -553046416;
		case 73:
			return 1410537143;
		case 83:
			return 646741747;
		case 84:
			return -773037432;
		case 85:
			return 1444751354;
		case 78:
			return 709943351;
		case 87:
			return 731746260;
		case 86:
			return 405856312;
		case 82:
			return -1749578899;
		case 88:
			return 1581089825;
		case 81:
			return 1124822890;
		case 91:
			return 1618521465;
		case 90:
			return -442258411;
		case 120:
			return 1665083003;
		case 121:
			return 810431028;
		case 77:
			return 1161446575;
		case 79:
			return -406930559;
		case 80:
			return -1850308061;
		case 89:
			return 787686374;
		case 41:
			return 1523596125;
		case 98:
			return -372049939;
		case 97:
			return 226213668;
		case 93:
			return 1437804895;
		case 96:
			return -1254552445;
		case 94:
			return 1526480524;
		case 95:
			return 470861506;
		case 128:
			return 644508980;
		case 129:
			return -1985767496;
		case 0:
			return 1117878254;
		case 1:
			return 622553269;
		case 2:
			return -1934358691;
		case 101:
			return 94750187;
		case 99:
			return 545745902;
		case 100:
			return 1875117241;
		case 119:
			return -1861588330 /* GXTEntry: "Trade" */;
		case 133:
			return -1079912632 /* GXTEntry: "Wilderness Outfitters" */;
		case 148:
			return -1624899219;
		case 172:
			return 1712034773;
		case 173:
			return 1084233913 /* GXTEntry: "Shop at Clothing Store" */;
		case 174:
			return -1628307596;
		case 149:
			return 1109728466;
		case 150:
			return 151142181;
		case 147:
			return 191185611;
		case 135:
			return 1689047337;
		case 136:
			return 631237697;
		case 137:
			return 1309294228;
		case 138:
			return -1862366064;
		case 139:
			return -708893514;
		case 140:
			return -61253253;
		case 141:
			return -1674694281;
		case 142:
			return 14391281;
		case 143:
			return -869603674;
		case 144:
			return 2081857521;
		case 145:
			return 526646992;
		case 146:
			return 1672297313;
		case 47:
			return 1025033373;
		case 32:
			return 1025033373;
		case 21:
			return 1025033373;
		case 115:
			return 1025033373;
		case 92:
			return 1025033373;
		case 131:
			return 1025033373;
		case 20:
			return 1025033373;
		case 134:
			return -765151559;
		case 175:
			return 1244193358;
		case 151:
			return -268420964;
		case 152:
			return -283845926;
		case 153:
			return 76731659;
		case 154:
			return 2141489518;
		case 67:
			return 1529797091;
		case 155:
			return 1120323763;
		case 156:
			return -1951530479;
		case 157:
			return 2034257465;
		case 158:
			return 278587369;
		case 65:
			return 1388932648;
		case 160:
			return 1467401843;
		case 161:
			return -1049737591;
		case 162:
			return 1175719437;
		case 163:
			return 2115547696;
		case 64:
			return 878376253;
		case 164:
			return -508879537;
		case 165:
			return -654369397;
		case 166:
			return 1573058547;
		case 167:
			return 1753151614;
		case 168:
			return -2113647360;
		case 169:
			return 1337275619;
		case 170:
			return -237650722;
		case 171:
			return 283754781;
		case 66:
			return -2076086367;
		case 159:
			return -487054121;
		case 108:
			return -1769964380;
		case 110:
			return -1464928880;
		case 109:
			return -812483303;
		case 111:
			return 1315212395;
		case 112:
			return 450843655;
		case 113:
			return -1477315484;
		case 114:
			return -1132316597;
		case 102:
			return -1495157302;
		case 105:
			return -2140031237;
		case 106:
			return -375350;
		case 103:
			return -1829807698;
		case 104:
			return 186603357;
		case 107:
			return -1575817877;
		case 116:
			return 1087483310;
		case 130:
			return -552506176;
		case 117:
			return 441769767;
		case 118:
			return 1318049946;
		case 3:
			return 548657065;
		case 4:
			return 243086140;
		case 40:
			return -305029900;
		case 76:
			return 1008537949;
		default:
			break;
	}
	return 0;
}

int func_238(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (func_259(iParam0, uParam1, &uVar0))
	{
		func_260(&uVar0, iParam0, uParam2);
	}
	else
	{
		return 0;
	}
	return 1;
}

var func_239()
{
	return (Global_1070355->f_26934[47 /*4*/])->f_3;
}

int func_240(struct<2> Param0)
{
	if (!func_261(Param0))
	{
		return 0;
	}
	if (Param0.f_1 < 0)
	{
		return 0;
	}
	if (Param0.f_1 >= func_262(Param0))
	{
		return 0;
	}
	return 1;
}

int func_241(struct<2> Param0)
{
	if (Param0 == 2)
	{
		return func_263(Param0);
	}
	return -1;
}

int func_242()
{
	if (&Global_1048576)
	{
		return 1;
	}
	if (Global_1572887->f_4)
	{
		return 1;
	}
	if (&Global_2883584)
	{
		return 1;
	}
	if (&Global_1048577)
	{
		return 1;
	}
	if (!func_240(*Global_1051163) && Global_1572887->f_7 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

struct<2> func_243()
{
	return *Global_1051163;
}

struct<2> func_244()
{
	if (Global_1182844->f_129 <= 0)
	{
		return func_59(0);
	}
	if (Global_1182844->f_130 < 0 || Global_1182844->f_131 == 0)
	{
		return func_59(0);
	}
	return ((*Global_1182844)[Global_1182844->f_130 /*4*/])->f_1;
}

int func_245(vector3 vParam0, int iParam3)
{
	vector3 vVar0;
	struct<2> Var3;
	var uVar6;

	func_264(iParam3, &vVar0, &Var3, &uVar6);
	if (func_265(vParam0, vVar0, Var3, Var3.f_1, uVar6))
	{
		return 1;
	}
	return 0;
}

int func_246(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_247(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_40.f_3434[iVar1]), iVar2);
}

void func_248(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_249(int iParam0)
{
	if (!func_103(iParam0))
	{
		return false;
	}
	return SCRIPTS::_DOES_THREAD_EXIST(((*Global_1893763)[iParam0 /*3*/])->f_2);
}

bool func_250(int iParam0)
{
	return iParam0 != 0;
}

bool func_251(int iParam0, int iParam1)
{
	if (!func_192(iParam0))
	{
		return false;
	}
	return (Global_1915170->f_17437[iParam0] && iParam1) != 0;
}

void func_252(int iParam0, int iParam1)
{
	if (!func_192(iParam0))
	{
		return;
	}
	Global_1915170->f_17437[iParam0] = (Global_1915170->f_17437[iParam0] || iParam1);
}

void func_253(int iParam0, int iParam1)
{
	if (!func_192(iParam0))
	{
		return;
	}
	Global_1915170->f_17437[iParam0] = (&Global_1915170->f_17437[iParam0] - (Global_1915170->f_17437[iParam0] && iParam1));
}

void func_254(int iParam0)
{
	func_267(func_266(iParam0));
}

bool func_255(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 39);
}

bool func_256(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_257()
{
	return Global_1099293->f_339;
}

bool func_258(int iParam0)
{
	return (Global_1099293->f_26.f_9 && iParam0) == iParam0;
}

bool func_259(int iParam0, var uParam1, int iParam2)
{
	*iParam2 = Global_1131373->f_7;
	iParam2->f_2 = 1351168281;
	iParam2->f_3 = func_268(iParam0);
	iParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(iParam2->f_1), iParam2);
}

void func_260(int iParam0, int iParam1, var uParam2)
{
	var uVar0;

	*uParam2 = iParam1;
	iParam0->f_2 = -611386243;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_1), iParam0);
	iParam0->f_2 = -2140901307;
	if (DATAFILE::_DATAFILE_GET_HASH(&uVar0, iParam0))
	{
		uParam2->f_2 = uVar0;
	}
	iParam0->f_2 = -2140901307;
	DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_11), iParam0);
	iParam0->f_2 = 1292053410;
	DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_19), iParam0);
	iParam0->f_2 = 1234058424;
	DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_3), iParam0);
}

int func_261(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_262(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_1070355->f_634.f_601;
		case 3:
			return Global_1070355->f_634.f_2103;
		case 4:
			return Global_1070355->f_634.f_12605;
		case 5:
			return Global_1070355->f_634.f_12907;
		case 6:
			return Global_1070355->f_634.f_15909;
		case 7:
			return Global_1070355->f_634.f_15980;
		case 8:
			return Global_1070355->f_634.f_17182;
		default:
			break;
	}
	return -1;
}

int func_263(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_269(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

void func_264(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -1616.769f, 1260.714f, 205.33f };
			*uParam2 = { 150f, 150f, 184f };
			*uParam3 = 0f;
			break;
		case 1:
			*uParam1 = { -5837.918f, -3738.832f, -20.6f };
			*uParam2 = { 40f, 35f, 70f };
			*uParam3 = 45f;
			break;
		case 2:
			*uParam1 = { -4160.689f, -2836.915f, -13.674f };
			*uParam2 = { 43f, 197f, 70f };
			*uParam3 = 38f;
			break;
		case 3:
			*uParam1 = { -4359.861f, -3083.375f, -13.674f };
			*uParam2 = { 30f, 30f, 70f };
			*uParam3 = 0f;
			break;
		case 4:
			*uParam1 = { -4446.777f, -2689.265f, -13.674f };
			*uParam2 = { 30f, 30f, 70f };
			*uParam3 = 0f;
			break;
		case 5:
			*uParam1 = { -4415.84f, -2199.774f, 22.356f };
			*uParam2 = { 13f, 21f, 47f };
			*uParam3 = 34f;
			break;
		case 6:
			*uParam1 = { -5554.764f, -2395.945f, 7.172f };
			*uParam2 = { 21f, 21f, 47f };
			*uParam3 = 0f;
			break;
		case 7:
			*uParam1 = { -3447.267f, -2257.723f, 7.172f };
			*uParam2 = { 40f, 23f, 47f };
			*uParam3 = 0f;
			break;
		case 8:
			*uParam1 = { -1425.852f, -2676.848f, 73.224f };
			*uParam2 = { 40f, 25f, 47f };
			*uParam3 = 26f;
			break;
		case 9:
			*uParam1 = { -3829.438f, -3009.26f, -13.674f };
			*uParam2 = { 39f, 54f, 70f };
			*uParam3 = -46f;
			break;
		case 10:
			*uParam1 = { -4696.308f, -3302.809f, -13.674f };
			*uParam2 = { 104f, 57f, 70f };
			*uParam3 = 0f;
			break;
		case 11:
			*uParam1 = { -5064.707f, -3139.862f, -13.674f };
			*uParam2 = { 23f, 26f, 70f };
			*uParam3 = 43f;
			break;
		case 12:
			*uParam1 = { -1631.875f, -2856.089f, -1.645f };
			*uParam2 = { 149f, 65f, 154f };
			*uParam3 = 39f;
			break;
		case 13:
			*uParam1 = { -347.889f, -131.72f, -1.645f };
			*uParam2 = { 52f, 40f, 154f };
			*uParam3 = 0f;
			break;
		case 14:
			*uParam1 = { -2126.5f, 88.317f, 139.179f };
			*uParam2 = { 334f, 171f, 277f };
			*uParam3 = -45f;
			break;
		case 15:
			*uParam1 = { 1574.061f, 1121.954f, 201.6f };
			*uParam2 = { 147f, 194f, 201f };
			*uParam3 = 0f;
			break;
		case 16:
			*uParam1 = { -2741.641f, -2375.761f, 31.492f };
			*uParam2 = { 86f, 61f, 50f };
			*uParam3 = 11f;
			break;
		case 17:
			*uParam1 = { 1773.323f, -5976.334f, 71.662f };
			*uParam2 = { 34f, 34f, 100f };
			*uParam3 = -124f;
			break;
		case 18:
			*uParam1 = { -2022.258f, -3039.913f, 25f };
			*uParam2 = { 25f, 25f, 45f };
			*uParam3 = 0f;
			break;
		case 19:
			*uParam1 = { 1394.172f, -647.735f, 72.455f };
			*uParam2 = { 19f, 18f, 100f };
			*uParam3 = 40f;
			break;
		case 20:
			*uParam1 = { -242.336f, 1624.373f, 212.894f };
			*uParam2 = { 98f, 52f, 120f };
			*uParam3 = 51f;
			break;
		case 21:
			*uParam1 = { -3543.512f, -3032.038f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
		case 22:
			*uParam1 = { -4348.655f, -2427.582f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
		case 23:
			*uParam1 = { -391.586f, 922.337f, 137.604f };
			*uParam2 = { 31f, 30f, 40f };
			*uParam3 = 0f;
			break;
		case 24:
			*uParam1 = { -2656.999f, 153.667f, 189.043f };
			*uParam2 = { 177f, 126f, 102f };
			*uParam3 = 52f;
			break;
		case 25:
			*uParam1 = { 156.109f, 425.799f, 120f };
			*uParam2 = { 249f, 112f, 120f };
			*uParam3 = -36f;
			break;
		case 26:
			*uParam1 = { -5868.5f, -2752.441f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
		case 27:
			*uParam1 = { 898.505f, -335.252f, 48.403f };
			*uParam2 = { 56f, 152f, 70f };
			*uParam3 = -36f;
			break;
		case 28:
			*uParam1 = { -889.947f, -171.356f, 90.537f };
			*uParam2 = { 180f, 95f, 100f };
			*uParam3 = 29f;
			break;
		case 29:
			*uParam1 = { 571.454f, 1968.615f, 122.93f };
			*uParam2 = { 32f, 49f, 140f };
			*uParam3 = 0f;
			break;
		case 30:
			*uParam1 = { -2769.681f, -3210.99f, 25f };
			*uParam2 = { 25f, 25f, 45f };
			*uParam3 = 0f;
			break;
		case 31:
			*uParam1 = { -5409.034f, -3657.266f, -14.496f };
			*uParam2 = { 36f, 30f, 30f };
			*uParam3 = -24f;
			break;
		case 32:
			*uParam1 = { 2453.293f, 290.68f, 69.615f };
			*uParam2 = { 35f, 42f, 19f };
			*uParam3 = -4f;
			break;
		case 33:
			*uParam1 = { -643.042f, 278.359f, 95.5f };
			*uParam2 = { 70f, 67f, 65f };
			*uParam3 = -109f;
			break;
		case 34:
			*uParam1 = { -118.339f, -24.853f, 96.907f };
			*uParam2 = { 84f, 69f, 37f };
			*uParam3 = 0f;
			break;
		case 35:
			*uParam1 = { -2863.456f, -2723.259f, 93.195f };
			*uParam2 = { 196f, 157f, 85f };
			*uParam3 = -18f;
			break;
		case 36:
			*uParam1 = { -3484.814f, -3466.383f, -0.849f };
			*uParam2 = { 12f, 12f, 70f };
			*uParam3 = 0f;
			break;
		case 37:
			*uParam1 = { -3620.875f, -3575.926f, -0.849f };
			*uParam2 = { 126f, 86f, 70f };
			*uParam3 = -6f;
			break;
		case 38:
			*uParam1 = { -1382.32f, -1400.969f, 56.092f };
			*uParam2 = { 22f, 32f, 86f };
			*uParam3 = 0f;
			break;
		case 39:
			*uParam1 = { -713.105f, -538.091f, 59.42f };
			*uParam2 = { 160f, 22f, 100f };
			*uParam3 = 26f;
			break;
		case 40:
			*uParam1 = { 1083.588f, -693.478f, 48.403f };
			*uParam2 = { 45f, 46f, 70f };
			*uParam3 = 0f;
			break;
		case 41:
			*uParam1 = { -956.489f, 2175.227f, 307.401f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 42:
			*uParam1 = { 1457.354f, -1576.261f, 95.401f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 43:
			*uParam1 = { 348.488f, -669.098f, 95f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 44:
			*uParam1 = { 2008.052f, 617.155f, 95f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 45:
			*uParam1 = { 2099.835f, -283.012f, 42f };
			*uParam2 = { 21f, 29f, 49f };
			*uParam3 = 52f;
			break;
		case 46:
			*uParam1 = { -1759.31f, -224.369f, 168f };
			*uParam2 = { 21f, 29f, 116f };
			*uParam3 = 56f;
			break;
		case 47:
			*uParam1 = { 2142.39f, -1284.068f, 85f };
			*uParam2 = { 40f, 71f, 116f };
			*uParam3 = 70f;
			break;
		case 48:
			*uParam1 = { 2309.119f, -343.031f, 85f };
			*uParam2 = { 15f, 15f, 116f };
			*uParam3 = 0f;
			break;
		case 49:
			*uParam1 = { -1815.147f, -2405.116f, 71f };
			*uParam2 = { 25f, 25f, 50f };
			*uParam3 = 0f;
			break;
		case 50:
			*uParam1 = { -2269.232f, -1145.787f, 214f };
			*uParam2 = { 37f, 33f, 68f };
			*uParam3 = 0f;
			break;
	}
}

bool func_265(vector3 vParam0, vector3 vParam3, float fParam6, float fParam7, float fParam8)
{
	vector3 vVar0;
	struct<2> Var3;
	float fVar6;

	vVar0 = { vParam0 - vParam3 };
	Var3 = ((vVar0.x * BUILTIN::COS(fParam8)) + (vVar0.y * BUILTIN::SIN(fParam8)));
	Var3.f_1 = ((vVar0.x * BUILTIN::SIN(fParam8)) - (vVar0.y * BUILTIN::COS(fParam8)));
	fVar6 = (((Var3 * Var3) / (fParam6 * fParam6)) + ((Var3.f_1 * Var3.f_1) / (fParam7 * fParam7)));
	return fVar6 <= 1f;
}

int func_266(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 < 176))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 133:
			return 27;
		case 149:
			return 28;
		case 150:
			return 29;
		case 26:
			return 14;
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
			return 38;
		case 134:
			return 37;
		case 3:
		case 4:
		case 40:
		case 63:
		case 76:
			return 15;
		case 64:
		case 65:
		case 66:
		case 67:
			return 16;
		case 120:
		case 122:
		case 124:
		case 126:
		case 127:
		case 129:
			return 25;
		case 45:
		case 83:
		case 151:
		case 155:
		case 160:
		case 164:
		case 168:
			return 0;
		case 6:
		case 23:
		case 33:
		case 48:
		case 69:
		case 84:
		case 99:
		case 102:
		case 108:
		case 152:
		case 156:
		case 161:
		case 165:
		case 169:
			return 3;
		case 0:
		case 7:
		case 34:
		case 49:
		case 85:
		case 103:
		case 153:
		case 157:
		case 162:
		case 166:
		case 170:
			return 6;
		case 19:
		case 53:
			return 7;
		case 22:
		case 31:
		case 46:
		case 93:
		case 116:
		case 130:
			return 4;
		case 20:
			return 33;
		case 21:
		case 32:
		case 47:
		case 92:
		case 115:
		case 131:
			return 33;
		case 9:
		case 30:
		case 44:
		case 68:
		case 82:
		case 104:
			return 10;
		case 1:
		case 14:
		case 24:
		case 27:
		case 35:
		case 51:
		case 74:
		case 87:
		case 98:
		case 101:
		case 111:
		case 117:
			return 2;
		case 2:
		case 15:
		case 25:
		case 28:
		case 39:
		case 52:
		case 88:
		case 97:
		case 100:
		case 112:
		case 118:
			return 1;
		case 8:
		case 43:
		case 78:
			return 8;
		case 13:
		case 41:
		case 50:
		case 71:
		case 86:
		case 96:
		case 107:
			return 9;
		case 121:
		case 123:
		case 125:
		case 128:
			return 26;
		case 159:
			return 5;
		case 5:
		case 29:
		case 42:
		case 77:
			return 12;
		case 10:
		case 36:
		case 54:
		case 56:
		case 75:
		case 79:
		case 81:
		case 91:
		case 94:
		case 105:
		case 110:
			return 30;
		case 11:
		case 37:
		case 55:
		case 57:
		case 80:
		case 95:
		case 106:
			return 31;
		case 16:
		case 17:
		case 18:
		case 38:
		case 58:
		case 59:
		case 72:
		case 73:
		case 132:
			return 32;
		case 70:
		case 90:
			return 17;
		case 119:
			return 11;
		case 172:
			return 19;
		case 173:
			return 20;
		case 174:
			return 21;
		case 12:
		case 60:
			return 18;
		case 148:
			return 34;
		case 154:
		case 158:
		case 163:
		case 167:
		case 171:
			return 23;
		case 175:
			return 20;
		case 109:
		case 113:
		case 114:
			return 35;
		case 61:
		case 62:
		case 89:
			return 36;
		default:
			break;
	}
	return -1;
}

void func_267(var uParam0)
{
	Global_1915170->f_17792 = uParam0;
}

int func_268(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("challenge");
			break;
		case -3:
			iVar0 = 1300413597;
			break;
		case 1:
			iVar0 = -1841318328;
			break;
		case -2:
			iVar0 = joaat("gold");
			break;
		case 2:
			iVar0 = -1599460565;
			break;
		case 3:
			iVar0 = 1610555441;
			break;
		case 4:
			iVar0 = 2080488347;
			break;
		case 5:
			iVar0 = 1107336882;
			break;
		case 6:
			iVar0 = -1307562954;
			break;
		case 7:
			iVar0 = 1198585370;
			break;
		case 8:
			iVar0 = 1753821005;
			break;
		case 9:
			iVar0 = joaat("property");
			break;
		case 10:
			iVar0 = 1894568478;
			break;
		case 11:
			iVar0 = joaat("title");
			break;
		case 12:
			iVar0 = joaat("shop");
			break;
		case 13:
			iVar0 = 1252941330;
			break;
		case 14:
			iVar0 = -1930354636;
			break;
		case 15:
			iVar0 = 1332629624;
			break;
		case 16:
			iVar0 = 1746212499;
			break;
		case 17:
			iVar0 = 1859328971;
			break;
		case 18:
			iVar0 = 1151893103;
			break;
		case 19:
			iVar0 = -312924468;
			break;
	}
	return iVar0;
}

int func_269(struct<2> Param0, int iParam2)
{
	if (!func_240(Param0))
	{
		return 0;
	}
	func_270(iParam2);
	switch (Param0)
	{
		case 2:
			MISC::_COPY_MEMORY(iParam2, Global_1070355->f_634[Param0.f_1 /*3*/], 3);
			return 1;
		case 3:
			MISC::_COPY_MEMORY(iParam2, Global_1070355->f_634.f_602[Param0.f_1 /*3*/], 3);
			return 1;
		case 4:
			MISC::_COPY_MEMORY(iParam2, Global_1070355->f_634.f_2104[Param0.f_1 /*3*/], 3);
			return 1;
		case 5:
			MISC::_COPY_MEMORY(iParam2, Global_1070355->f_634.f_12606[Param0.f_1 /*3*/], 3);
			return 1;
		case 6:
			MISC::_COPY_MEMORY(iParam2, Global_1070355->f_634.f_12908[Param0.f_1 /*3*/], 3);
			return 1;
		case 7:
			MISC::_COPY_MEMORY(iParam2, Global_1070355->f_634.f_15910[Param0.f_1 /*3*/], 3);
			return 1;
		case 8:
			MISC::_COPY_MEMORY(iParam2, Global_1070355->f_634.f_15981[Param0.f_1 /*3*/], 3);
			return 1;
		default:
			break;
	}
	return 0;
}

void func_270(int iParam0)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = -1;
}

