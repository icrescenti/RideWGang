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
	var uLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	bool bLocal_32 = false;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	bool bLocal_40 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_16 = 1f;
	fLocal_17 = 1f;
	iLocal_35 = 20000;
	iLocal_38 = vScriptParam_0.x;
	iLocal_36 = vScriptParam_0.z;
	bLocal_40 = false;
	if (Global_1901929->f_1.f_24 > 0)
	{
		func_1();
	}
	func_2();
	func_3();
	iLocal_37 = MISC::GET_GAME_TIMER();
	iVar0 = 0;
	while (func_4())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_37)
		{
			iLocal_37 = 0;
			func_5(iLocal_38, &iLocal_36);
			switch (iLocal_36)
			{
				case 0:
					if (Global_1901929->f_1.f_24 > 0)
					{
						iLocal_39 = (MISC::GET_GAME_TIMER() + Global_1901929->f_1.f_24);
						iLocal_36 = 1;
					}
					else
					{
						iLocal_36 = 2;
					}
					break;
				case 1:
					if (!func_1() || iLocal_39 < MISC::GET_GAME_TIMER())
					{
						bLocal_40 = false;
						iLocal_36 = 2;
					}
					break;
				case 2:
					func_6(iLocal_38);
					func_7();
					func_8();
					if (func_10(func_9(iLocal_38)))
					{
						func_11(func_9(iLocal_38), 4);
					}
					LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), func_12(iLocal_38));
					Global_1896608 = -1;
					iLocal_39 = (iLocal_35 + MISC::GET_GAME_TIMER());
					iLocal_36 = 3;
					break;
				case 3:
					if (func_13() || iLocal_39 < MISC::GET_GAME_TIMER())
					{
						func_14(iLocal_38);
						iLocal_39 = (iLocal_35 + MISC::GET_GAME_TIMER());
						iLocal_36 = 4;
					}
					break;
				case 4:
					if (func_15(iLocal_38) || iLocal_39 < MISC::GET_GAME_TIMER())
					{
						func_16(iLocal_38);
						iLocal_39 = (MISC::GET_GAME_TIMER() + iLocal_35);
						iLocal_36 = 5;
					}
					break;
				case 5:
					if (func_17(iLocal_38) || iLocal_39 < MISC::GET_GAME_TIMER())
					{
						func_18(iLocal_38);
						iLocal_39 = (iLocal_35 + MISC::GET_GAME_TIMER());
						iLocal_36 = 7;
					}
					break;
				case 7:
					if (func_10(func_9(iLocal_38)))
					{
						if (func_19(func_9(iLocal_38), 4) && !iLocal_39 < MISC::GET_GAME_TIMER())
						{
						}
						else
						{
							if (func_20(iLocal_38) || iLocal_39 < MISC::GET_GAME_TIMER())
							{
								func_21(iLocal_38, 4);
								iLocal_39 = (iLocal_35 + MISC::GET_GAME_TIMER());
								iLocal_36 = 8;
							}
							Jump @813; //curOff = 529
							func_22(iLocal_38);
							func_23();
							if (!func_24(4105, 0))
							{
								func_25();
							}
							func_26();
							func_27();
							func_28();
							func_29(iLocal_38);
							func_30(iLocal_38);
							func_31();
							func_32();
							iLocal_36 = 9;
							Jump @813; //curOff = 597
							func_33(iLocal_38);
							func_34();
							iLocal_36 = 10;
							Jump @813; //curOff = 614
							func_35(Global_1896662);
							func_36(iLocal_38, Global_1896662);
							iLocal_36 = 11;
							Jump @813; //curOff = 639
							func_37(iLocal_38);
							func_21(iLocal_38, 8);
							if (func_38(32))
							{
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									CAM::DO_SCREEN_FADE_IN(500);
								}
								func_39(32);
							}
							iLocal_36 = 12;
							Jump @813; //curOff = 689
							if (func_40(iLocal_38))
							{
								iLocal_37 = MISC::GET_GAME_TIMER() + 1000;
							}
							func_41(Global_1896662, iLocal_38);
							func_42(iLocal_38);
							func_21(iLocal_38, 8);
							if (func_43())
							{
								PED::_0xBA0980B5C0A11924(0f);
							}
							PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(((*Global_1887327)[iLocal_38 /*36*/])->f_11);
							if (((*Global_1887327)[iLocal_38 /*36*/])->f_12 > 0f)
							{
								PED::_0xA77FA7BE9312F8C0(((*Global_1887327)[iLocal_38 /*36*/])->f_12);
							}
							Jump @813; //curOff = 790
							func_8();
							func_44(iVar0);
							iVar0 = (1 + iVar0);
						}
						if (((*Global_1887327)[iLocal_38 /*36*/])->f_13 != 0)
						{
							PED::_0x95423627A9CA598E(((*Global_1887327)[iLocal_38 /*36*/])->f_13);
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
	if (!bLocal_40)
	{
		if (&Global_1051089)
		{
			bLocal_40 = true;
			return 1;
		}
		if (func_47() && func_48())
		{
			bLocal_40 = true;
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
	bLocal_40 = false;
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
	iLocal_21 = ((*Global_1887327)[74 /*36*/])->f_5;
	VOLUME::_0xB469CFD9E065EB99(iLocal_21, 17);
	iLocal_22 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Emerald - m_volPostOfficeOwner");
	VOLUME::_0x39816F6F94F385AD(iLocal_22, 1522f, 442.664f, 91.328f, 0f, 0f, 89.95493f, 5.041f, 4.081f, 3.9f);
	VOLUME::_0x39816F6F94F385AD(iLocal_22, 1521.951f, 438.992f, 91.328f, 0f, 0f, 89.95493f, 2.586f, 2.534f, 3.9f);
	VOLUME::_0x39816F6F94F385AD(iLocal_22, 1525.561f, 442.571f, 91.328f, 0f, 0f, 89.95493f, 2.417f, 2.096f, 3.9f);
	iLocal_24 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Emerald - m_volPostOfficeOfflimits");
	VOLUME::_0x39816F6F94F385AD(iLocal_24, 1522.286f, 442.6286f, 91.09468f, 0f, 0f, 0.127711f, 3.924281f, 4.586129f, 2.884516f);
	VOLUME::_0x39816F6F94F385AD(iLocal_24, 1524.154f, 443.6188f, 91.33035f, 0f, 0f, -40.52857f, 0.901248f, 0.812041f, 3.364722f);
	VOLUME::_0x39816F6F94F385AD(iLocal_24, 1524.148f, 441.6273f, 91.32803f, 0f, 0f, 41.59158f, 0.901248f, 0.812041f, 3.361498f);
	VOLUME::_0x39816F6F94F385AD(iLocal_24, 1524.171f, 442.5686f, 91.33483f, 0f, 0f, 89.87004f, 2.182719f, 0.812041f, 3.355471f);
	iLocal_23 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Emerald - m_volPostOfficePrompt Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_23, 1521.928f, 439.418f, 91.598f, 0f, 0f, 89.87004f, 1.421f, 1.98f, 3.9f);
	VOLUME::_0x39816F6F94F385AD(iLocal_23, 1525.299f, 442.591f, 91.598f, 0f, 0f, 0.50203f, 1.421f, 1.902f, 3.9f);
	VOLUME::_0xB469CFD9E065EB99(iLocal_22, 10052);
	iLocal_27 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1416.919f, 275.628f, 89.84f, 0f, 0f, 13.744f, 4.796f, 10.102f, 3.23f, "Emerald - Fence Shop Volume");
	VOLUME::_0xB469CFD9E065EB99(iLocal_27, 10050);
	iLocal_30 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Emerald - m_volHorsePen Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_30, 1392.317f, 341.5652f, 89.24782f, 0f, 0f, 12.46095f, 34.19419f, 40.64669f, 5.552397f);
	VOLUME::_0x39816F6F94F385AD(iLocal_30, 1406.395f, 342.4568f, 89.58327f, 0f, 0f, 39.45417f, 18.04731f, 26.06224f, 4.902727f);
	VOLUME::_0x39816F6F94F385AD(iLocal_30, 1416.681f, 332.729f, 89.86327f, 0f, 0f, 85.96169f, 12.0553f, 10.04752f, 5.028452f);
	iLocal_26 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1521.955f, 437.362f, 91.328f, 0f, 0f, 89.955f, 18.275f, 7.419f, 3.9f, "Emerald - m_volTrainStation");
	if (func_45() == 0)
	{
	}
	iLocal_28 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1246.785f, 170.357f, 87.12f, 0f, 0f, -80f, 14.456f, 10.148f, 8.8f, "HRT E TravellingSalesman - m_volTravellingSalesman");
	iLocal_29 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1245.177f, 174.244f, 87.12f, 0f, 0f, -80f, 3.7f, 3.7f, 4.2f, "HRT E TravellingSalesman - m_volTravellingSalesmanPrompt");
	func_53();
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
	ENTITY::CREATE_MODEL_HIDE(1446.648f, 371.4435f, 89.77228f, 0.25f, joaat("p_bottlebeer01x"), true);
	ENTITY::CREATE_MODEL_HIDE(1446.594f, 371.3564f, 89.84016f, 0.25f, 654026816, true);
	ENTITY::CREATE_MODEL_HIDE(1446.431f, 371.1044f, 89.73589f, 0.25f, 954963420, true);
	TASK::_0x6C269F673C47031E(-736104133);
}

int func_17(int iParam0)
{
	if (!TASK::_0xF97F462779B31786(-736104133))
	{
		return 0;
	}
	if (!func_54("EMRHAU"))
	{
		return 0;
	}
	if (!func_54("SHOWFAU"))
	{
		return 0;
	}
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
	return func_55(iParam0, -1, -1, 0);
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
	if (func_56(iParam0))
	{
		return 1;
	}
	if (!bParam1)
	{
		if (func_57(5000))
		{
			return 1;
		}
	}
	switch (func_59(func_58(0)))
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
}

void func_27()
{
}

void func_28()
{
}

void func_29(int iParam0)
{
	func_60(2, iLocal_22, iParam0, iLocal_23, iLocal_24, 1277952, 0, 0, -1082130432 /* Float: -1f */, 0);
	func_61(2, 2057841001, 0, 0);
	func_62(2, 0);
	func_60(4, iLocal_27, iParam0, iLocal_27, 0, 12, 0, 0, -1082130432 /* Float: -1f */, 0);
	func_62(4, 0);
	func_60(38, iLocal_28, iParam0, iLocal_29, 0, 12, 1, 0, -1082130432 /* Float: -1f */, 0);
	func_62(38, 0);
}

void func_30(int iParam0)
{
	iParam0 = iParam0;
	func_63(592, iLocal_27, 1);
	func_63(584, iLocal_22, 1);
	func_63(583, iLocal_30, 1);
	func_63(588, iLocal_30, 0);
	func_63(589, iLocal_30, 0);
	func_63(590, iLocal_30, 0);
	func_63(591, iLocal_30, 0);
	func_63(592, iLocal_30, 0);
	func_63(587, iLocal_30, 0);
	func_63(585, iLocal_30, 0);
	func_63(586, iLocal_30, 0);
}

void func_31()
{
}

void func_32()
{
}

void func_33(int iParam0)
{
	func_64(0.8f, 0.2f, 0f, 0f);
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
	func_65(uParam1, iLocal_21, 1);
	func_65(uParam1, iLocal_27, 2);
	func_65(uParam1, iLocal_22, 10);
}

void func_37(int iParam0)
{
	if (!func_66(iParam0))
	{
		return;
	}
	func_67();
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
	if (func_68(&bLocal_32))
	{
		if (bLocal_32)
		{
			func_69(220516644, 1);
			func_69(-336949584, 1);
		}
	}
	func_70(&uLocal_33, &iLocal_34, 1422.583f, 377.0824f, 89.0055f, joaat("p_door41x"));
	func_71(25, iLocal_26, &uLocal_25);
	if (func_72(6) && !func_73(6))
	{
		if (!VOLUME::_0x92A78D0BEDB332A3(iLocal_31))
		{
			iLocal_31 = VOLUME::_0x0EB78C2B156635B1(-1612834106, 1448.551f, 374.271f, 90.332f, 0f, 0f, -0.353f, 11.5f, 12.211f, 2.918f);
			VOLUME::_0x5B23DFF8E0948BB2(iLocal_31, 1);
			VOLUME::_0xBE551C2CC421185D(iLocal_31, 1);
		}
	}
	else if (VOLUME::_0x92A78D0BEDB332A3(iLocal_31))
	{
		VOLUME::_0x5B23DFF8E0948BB2(iLocal_31, 0);
		VOLUME::_0xBE551C2CC421185D(iLocal_31, 0);
		VOLUME::_0x43F867EF5C463A53(iLocal_31);
	}
	return 1;
}

void func_41(var uParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;

	if ((BUILTIN::VDIST(Global_36, 0f, 0f, 0f) <= 5f || func_74(&Global_1939168, 32768)) || func_74(&Global_1939168, 16777216))
	{
		return;
	}
	if (func_75(uParam0, 1))
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
	bVar2 = func_76();
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
							if ((!func_77((*uParam0)[iVar3 /*3*/], 1) && func_78(iParam1)) && !func_79(iParam1, 16))
							{
								func_81(iParam1, func_80(), -1, 0, -1, 0);
								func_82((*uParam0)[iVar3 /*3*/], 1);
							}
							func_83(iParam1, 0);
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
	func_84(bVar0);
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
	if (func_85(iVar3))
	{
		return 1;
	}
	return 0;
}

int func_44(int iParam0)
{
	if (iParam0 == 0)
	{
		func_86();
		LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), 0);
		func_21(iLocal_38, 2048);
		if (STATS::CHAL_IS_GOAL_ACTIVE(-663946200, 1055032020))
		{
			switch (iLocal_38)
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
					STATS::CHAL_ADD_GOAL_PROGRESS_INT_BY_SCORE_ID(func_87(iLocal_38, 0), 1);
					break;
			}
		}
		if (func_10(func_80()))
		{
			func_11(func_80(), 8);
		}
		func_88(iLocal_38, 4);
		func_88(iLocal_38, 8);
		func_84(0);
		if (func_45() == -1)
		{
			func_89(0);
		}
		func_90(iLocal_38);
		func_34();
		return 0;
	}
	else if (func_45() == -1)
	{
		func_91(iLocal_38);
		func_92(iLocal_38);
		if (!func_93(iLocal_38, 0))
		{
			return 0;
		}
	}
	else if (!func_94(iLocal_38))
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
	if (!func_66(iParam0))
	{
		return 0;
	}
	return func_95(iParam0, 8);
}

bool func_51(int iParam0)
{
	return (Global_1893575->f_7 && iParam0) != 0;
}

void func_52(int iParam0)
{
	Global_1893575->f_7 = (Global_1893575->f_7 - (Global_1893575->f_7 && iParam0));
}

void func_53()
{
}

int func_54(char* sParam0)
{
	HUD::_0xF66090013DE648D5(sParam0);
	if (!HUD::_0xD0976CC34002DB57(sParam0))
	{
		HUD::_0xF66090013DE648D5(sParam0);
		return 0;
	}
	return 1;
}

int func_55(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_45() != -1)
	{
		return 1;
	}
	if (!func_66(iParam0))
	{
		return 1;
	}
	if (func_95(iParam0, 16))
	{
		return 1;
	}
	if (func_96(iParam0) && !func_97(iParam0))
	{
	}
	if (func_98(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (func_99(iParam1))
		{
			iVar0 = iParam1;
		}
		if (func_99(iParam2))
		{
			iVar1 = iParam2;
		}
		if (&Global_1896608 < iVar0 || &Global_1896608 > iVar1)
		{
			Global_1896608 = iVar0;
		}
		while (true)
		{
			if ((!func_96(iParam0) || func_97(iParam0)) || func_100(&Global_1896608))
			{
				func_101(&Global_1896608, 0);
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

bool func_56(var uParam0)
{
	return (Global_1939168 && uParam0) != 0;
}

bool func_57(int iParam0)
{
	return (MISC::GET_GAME_TIMER() - iParam0) < &Global_1900853;
}

struct<2> func_58(int iParam0)
{
	return *(Global_1900718->f_1[iParam0 /*2*/]);
}

int func_59(var uParam0, var uParam1)
{
	return uParam0;
}

void func_60(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, float fParam8, int iParam9)
{
	if (iParam0 == 9 && !(!func_102() && func_103()))
	{
		if (func_104(255))
		{
			if (VOLUME::_0xF256A75210C5C0EB(iParam1, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
			{
				func_105(1, 1);
			}
		}
	}
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	func_106(iParam0);
	Global_1051387->f_69[iParam0 /*76*/] = 0;
	(Global_1051387->f_69[iParam0 /*76*/])->f_18 = func_107(iParam2, iParam0);
	(Global_1051387->f_69[iParam0 /*76*/])->f_25 = iParam1;
	(Global_1051387->f_69[iParam0 /*76*/])->f_3 = { VOLUME::_0xF70F00013A62F866(iParam1) };
	(Global_1051387->f_69[iParam0 /*76*/])->f_26 = iParam3;
	(Global_1051387->f_69[iParam0 /*76*/])->f_28 = iParam4;
	(Global_1051387->f_69[iParam0 /*76*/])->f_2 = iParam2;
	(Global_1051387->f_69[iParam0 /*76*/])->f_64 = func_108((Global_1051387->f_69[iParam0 /*76*/])->f_18);
	(Global_1051387->f_69[iParam0 /*76*/])->f_73 = iParam9;
	(Global_1051387->f_69[iParam0 /*76*/])->f_74 = 0;
	(Global_1051387->f_69[iParam0 /*76*/])->f_49 = 0;
	if (fParam8 <= 0f)
	{
		fParam8 = func_109(iParam0);
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
	func_110(iParam0, 4);
	func_111(iParam0);
}

void func_61(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_112(iParam0);
	if (iVar0 < 0 || iVar0 >= 15)
	{
		return;
	}
	(Global_1051387->f_69[iParam0 /*76*/])->f_32[iVar0] = func_113(iParam1, 0, 0);
	if (func_114(&((Global_1051387->f_69[iParam0 /*76*/])->f_32[iVar0])))
	{
		if (!func_115(&((Global_1051387->f_69[iParam0 /*76*/])->f_32[iVar0])))
		{
			func_116(&((Global_1051387->f_69[iParam0 /*76*/])->f_32[iVar0]), 0, fParam2, bParam3, 1, 0, 0, 0);
		}
	}
	(Global_1051387->f_69[iParam0 /*76*/])->f_48++;
}

int func_62(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	vector3 vVar3;

	if ((func_117(iParam0, 16384) || func_117(iParam0, 32768)) || func_118((Global_1051387->f_69[iParam0 /*76*/])->f_3))
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
	iVar0 = func_107(func_119(), iParam0);
	if ((!bParam1 && func_120(iVar0, &iVar1, &uVar2, &vVar3)) || (bParam1 && func_121(iVar0, &iVar1, &uVar2, &vVar3)))
	{
		func_122(iParam0, iVar1, vVar3, uVar2, 0);
		(Global_1051387->f_69[iParam0 /*76*/])->f_3 = { vVar3 };
		(Global_1051387->f_69[iParam0 /*76*/])->f_8 = iVar1;
	}
	return (Global_1051387->f_69[iParam0 /*76*/])->f_6;
}

int func_63(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_45() != -1)
	{
		return 0;
	}
	if (!func_123(iParam0, 0))
	{
		return 0;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam1))
	{
		return 0;
	}
	iVar0 = func_124(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	VOLUME::_0xE2BE6FFA4A13CBB0(iParam1, iVar0, iParam2);
	return 1;
}

void func_64(float fParam0, float fParam1, float fParam2, float fParam3)
{
	Global_1893575->f_182 = fParam0;
	Global_1893575->f_183 = fParam1;
	Global_1893575->f_184 = fParam2;
	Global_1893575->f_185 = fParam3;
}

void func_65(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_61 >= 20)
	{
		return;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam1))
	{
		return;
	}
	if (!func_125(iParam2))
	{
		return;
	}
	(*uParam0)[uParam0->f_61 /*3*/] = iParam1;
	((*uParam0)[uParam0->f_61 /*3*/])->f_1 = iParam2;
	((*uParam0)[uParam0->f_61 /*3*/])->f_2 = 0;
	uParam0->f_61++;
}

bool func_66(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

void func_67()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (func_126(iVar0))
		{
			(*Global_1900684)[iVar0] = -1;
		}
		iVar0++;
	}
}

int func_68(bool bParam0)
{
	if (func_127())
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

void func_69(int iParam0, int iParam1)
{
	func_116(iParam0, 1, 0, 0, 0, 0, 0, 0);
}

void func_70(var uParam0, int iParam1, vector3 vParam2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!*uParam0)
	{
		if (BUILTIN::VDIST(Global_36, vParam2) > 100f)
		{
			return;
		}
		if (!ITEMSET::IS_ITEMSET_VALID(*iParam1))
		{
			*iParam1 = ITEMSET::CREATE_ITEMSET(true);
		}
		ITEMSET::_0x20A4BF0E09BEE146(*iParam1);
		iVar0 = ENTITY::_0x59B57C4B06531E1E(vParam2, 1f, *iParam1, 3);
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			iVar2 = MISC::_0xEE04C0AFD4EFAF0E(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, *iParam1));
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (ENTITY::GET_ENTITY_MODEL(iVar2) == iParam5)
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, true, false);
					ENTITY::FREEZE_ENTITY_POSITION(iVar2, true);
					*uParam0 = 1;
				}
			}
			iVar1++;
		}
	}
}

void func_71(int iParam0, int iParam1, var uParam2)
{
	if (!*uParam2)
	{
		if (func_128(Global_35, iParam1, 1, 0))
		{
			func_130(func_129(iParam0), 1);
			*uParam2 = 1;
		}
	}
	else if (!func_128(Global_35, iParam1, 1, 0))
	{
		*uParam2 = 0;
	}
}

bool func_72(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return Global_1270337[iParam0] == iParam0;
}

int func_73(int iParam0)
{
	int iVar0;
	int iVar1;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	iVar0 = func_131(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar0))
	{
		iVar1 = func_132(1, iParam0);
		if (iVar1 == 0)
		{
			return 0;
		}
		if (NETWORK::_0xFBE782B3165AC8EC(iVar1))
		{
			return 1;
		}
	}
	return 0;
}

bool func_74(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_75(var uParam0, int iParam1)
{
	return (uParam0->f_62 && iParam1) != 0;
}

bool func_76()
{
	return func_74(&Global_1939168, 8192);
}

bool func_77(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_78(int iParam0)
{
	if (!func_66(iParam0))
	{
		return false;
	}
	return ((((*Global_1887327)[iParam0 /*36*/])->f_21 == 1 || ((*Global_1887327)[iParam0 /*36*/])->f_21 == 2) && !func_133(iParam0));
}

bool func_79(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 150)
	{
		return false;
	}
	return (((*Global_1887327)[iParam0 /*36*/])->f_22 && iParam1) != 0;
}

int func_80()
{
	return Global_1896610->f_41;
}

void func_81(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
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

	if (!func_134())
	{
		return;
	}
	sVar1 = func_135(iParam0, iParam1, iParam2, iParam4, bParam5, bParam3, &bVar0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		if (bParam3)
		{
			return;
		}
		sVar1 = "DISTRICT_GRIZZLIES";
	}
	if (!func_136(iParam4))
	{
		if (func_66(iParam0))
		{
			iParam4 = func_137(func_9(iParam0));
		}
		else
		{
			iParam4 = func_137(iParam1);
		}
	}
	if (func_136(iParam4))
	{
		iVar3 = func_138(iParam4);
	}
	if (bVar0 && bParam3)
	{
		sVar2 = func_140(func_139(iParam2));
	}
	else if ((func_141(iParam1, 2) || func_142(iParam4, 2)) && !Global_1893575->f_9)
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
	else if ((func_66(iParam0) && func_95(iParam0, 16777216)) && !Global_1893575->f_9)
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
		iVar4 = func_144(func_143());
		iVar5 = func_145(func_143());
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
				fVar7 = func_146(fVar7);
				sVar8 = "TIME_AND_TEMP_F";
			}
			IntToString(&cVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::_CREATE_VAR_STRING(674, sVar8, iVar4, func_147(&cVar6, joaat("COLOR_PURE_WHITE")), sVar9, func_147(&cVar10, joaat("COLOR_PURE_WHITE")));
		}
		else
		{
			sVar8 = "TIME_AND_TEMP_C_24";
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				fVar7 = func_146(fVar7);
				sVar8 = "TIME_AND_TEMP_F_24";
			}
			IntToString(&cVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::_CREATE_VAR_STRING(162, sVar8, iVar4, func_147(&cVar6, joaat("COLOR_PURE_WHITE")), func_147(&cVar10, joaat("COLOR_PURE_WHITE")));
		}
		Global_1893575->f_9 = 0;
	}
	Global_1938075->f_145 = func_148(sVar1, sVar2, 4000, 0, 0, 0, 0, 1);
}

void func_82(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_83(int iParam0, bool bParam1)
{
	if (Global_1572887->f_11 && func_45() == 0)
	{
		return;
	}
	if (!func_149(iParam0))
	{
		return;
	}
	if (func_95(iParam0, 32))
	{
		return;
	}
	func_21(iParam0, 32);
	func_150(Global_1939168, 16384);
	func_130(func_151(-1532769513, joaat("areas")), 1);
	switch (func_9(iParam0))
	{
		case 0:
		case 2:
		case 11:
			func_130(func_151(-1532769513, 213519508), 1);
			break;
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			func_130(func_151(-1532769513, 242571679), 1);
			break;
		case 3:
		case 10:
			func_130(func_151(-1532769513, 1349449307), 1);
			break;
		case 4:
		case 9:
			func_130(func_151(-1532769513, 1140362070), 1);
			break;
		case 8:
			func_130(func_151(-1532769513, -172330899), 1);
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			func_130(func_151(-1532769513, -910218296), 1);
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

void func_84(bool bParam0)
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

int func_85(int iParam0)
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

void func_86()
{
}

int func_87(int iParam0, bool bParam1)
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

void func_88(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		Global_7888[iParam0 /*11*/] = (&Global_7888[iParam0 /*11*/] - (Global_7888[iParam0 /*11*/] && iParam1));
		return;
	}
	Global_1070355->f_17941[iParam0 /*11*/] = (&Global_1070355->f_17941[iParam0 /*11*/] - (Global_1070355->f_17941[iParam0 /*11*/] && iParam1));
}

void func_89(bool bParam0)
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

void func_90(int iParam0)
{
	func_64(0.775f, 0.2f, 0.025f, 0f);
	func_152("EMRHAU");
	func_152("SHOWFAU");
	TASK::_0x9667CCE29BFA0780(-736104133);
	if (VOLUME::_0x92A78D0BEDB332A3(iLocal_31))
	{
		VOLUME::_0x5B23DFF8E0948BB2(iLocal_31, 1);
		VOLUME::_0xBE551C2CC421185D(iLocal_31, 1);
		VOLUME::_0x43F867EF5C463A53(iLocal_31);
	}
	if (ITEMSET::IS_ITEMSET_VALID(iLocal_34))
	{
		ITEMSET::DESTROY_ITEMSET(iLocal_34);
	}
	iParam0 = iParam0;
}

void func_91(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if ((Global_1938932->f_5[iVar0 /*11*/])->f_5 == iParam0)
		{
			func_153(iVar0);
		}
		iVar0++;
	}
}

void func_92(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if ((Global_1915170->f_3[iVar0 /*447*/])->f_8 == iParam0)
		{
			func_154(iVar0);
		}
		iVar0++;
	}
}

int func_93(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_45() != -1)
	{
		return 1;
	}
	if (!func_66(iParam0))
	{
		return 1;
	}
	if (func_98(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (Global_1896608->f_1 < iVar0 || Global_1896608->f_1 > iVar1)
		{
			Global_1896608->f_1 = iVar0;
		}
		while (true)
		{
			if (!func_155(Global_1896608->f_1, 16))
			{
				func_156(Global_1896608->f_1, 0);
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

int func_94(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_157(iVar0) || func_158(iVar0))
		{
		}
		else
		{
			switch (iVar0)
			{
				case 34:
					break;
				case 30:
					func_159();
					break;
				case 32:
					func_160();
					break;
				default:
					if ((Global_1051387->f_69[iVar0 /*76*/])->f_2 == iParam0)
					{
						func_106(iVar0);
						(Global_1051387->f_69[iVar0 /*76*/])->f_2 = -1;
					}
					break;
			}
		}
		iVar0++;
	}
	return 1;
}

bool func_95(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		return (Global_7888[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1070355->f_17941[iParam0 /*11*/] && iParam1) != 0;
}

int func_96(int iParam0)
{
	if (!func_66(iParam0))
	{
		return 0;
	}
	return func_95(iParam0, 33554432);
}

int func_97(int iParam0)
{
	if (!func_66(iParam0))
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

int func_98(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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

bool func_99(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 948);
}

int func_100(int iParam0)
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

int func_101(int iParam0, bool bParam1)
{
	if (!func_99(iParam0))
	{
		return 0;
	}
	if (!func_155(iParam0, 2))
	{
		return 0;
	}
	if (func_155(iParam0, 32) && !bParam1)
	{
		func_162(iParam0, _NAMESPACE48::_0x4F76E3676583D951(func_161(iParam0)));
		if (func_45() == -1)
		{
			if (func_155(iParam0, 2048))
			{
				_NAMESPACE48::_0x49A8C2CD97815215(func_124(iParam0));
				func_163(iParam0, 2048);
			}
			_NAMESPACE48::_0xFCC6DB8DBE709BC8(func_124(iParam0));
		}
		return 0;
	}
	if (!func_164(iParam0) && func_45() == -1)
	{
		return 0;
	}
	if (_NAMESPACE48::_0x800DF3FC913355F3(func_124(iParam0)))
	{
		func_163(iParam0, 128);
		return 1;
	}
	func_162(iParam0, _NAMESPACE48::_0x4F76E3676583D951(func_161(iParam0)));
	_NAMESPACE48::_0x4F81EAD1DE8FA19B(func_124(iParam0));
	if (func_155(iParam0, 2048))
	{
		_NAMESPACE48::_0x49A8C2CD97815215(func_124(iParam0));
		func_163(iParam0, 2048);
	}
	return 1;
}

int func_102()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return 1;
	}
	return 0;
}

bool func_103()
{
	return func_165(func_58(0));
}

bool func_104(int iParam0)
{
	return !func_166(iParam0);
}

void func_105(bool bParam0, bool bParam1)
{
	if (func_167(255) == 4)
	{
		return;
	}
	if (func_118(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_168(0);
	}
	else
	{
		if (bParam1)
		{
			func_169(0, 0, 0, 1);
		}
		func_170(0);
		func_171(&(Global_1099293->f_516));
		Global_1099293->f_516 = 0f;
		Global_1099293->f_516.f_5 = 1;
		Global_1099293->f_516.f_16 = 0;
		Global_1099293->f_516.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
		Global_1099293->f_516.f_17.f_3 = { 0f, 0f, 0f };
		Global_1099293->f_516.f_17 = { Global_1901929->f_44.f_1, Global_1901929->f_44.f_1, Global_1901929->f_44.f_1 };
		Global_1099293->f_516.f_17.f_9 = -432403087;
		func_172(&(Global_1099293->f_555));
		Global_1099293->f_555.f_6 = { Global_1099293->f_516.f_17.f_6 };
		Global_1099293->f_555 = Global_1099293->f_516;
		Global_1099293->f_555.f_5 = 1;
		if (bParam1)
		{
			Global_1099293->f_26.f_18 = 0;
			Global_1099293->f_26.f_19 = 0;
		}
	}
	func_173(Global_1099293->f_516, 36);
	func_174(Global_1099293->f_555, 36);
}

void func_106(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	bVar0 = func_175(iParam0);
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
		if (func_117(iParam0, 524288))
		{
			VOLUME::_0x43F867EF5C463A53((Global_1051387->f_69[iParam0 /*76*/])->f_25);
		}
	}
	if (VOLUME::_0x92A78D0BEDB332A3((Global_1051387->f_69[iParam0 /*76*/])->f_26))
	{
		POPULATION::_0xA1CFB35069D23C23((Global_1051387->f_69[iParam0 /*76*/])->f_26);
		POPULATION::_0x74C2B3DC0B294102((Global_1051387->f_69[iParam0 /*76*/])->f_26);
		if (func_117(iParam0, 524288))
		{
			VOLUME::_0x43F867EF5C463A53((Global_1051387->f_69[iParam0 /*76*/])->f_26);
		}
	}
	if (VOLUME::_0x92A78D0BEDB332A3((Global_1051387->f_69[iParam0 /*76*/])->f_28))
	{
		if (func_117(iParam0, 524288))
		{
			VOLUME::_0x43F867EF5C463A53((Global_1051387->f_69[iParam0 /*76*/])->f_28);
		}
	}
	if (func_176(iParam0, 16384) && !bVar0)
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
		func_177(iParam0, 16384);
	}
	Global_1051387->f_69[iParam0 /*76*/] = -1;
	(Global_1051387->f_69[iParam0 /*76*/])->f_3 = { 0f, 0f, 0f };
	(Global_1051387->f_69[iParam0 /*76*/])->f_21 = 0;
	(Global_1051387->f_69[iParam0 /*76*/])->f_19 = 0;
	(Global_1051387->f_69[iParam0 /*76*/])->f_6 = 0;
	(Global_1051387->f_69[iParam0 /*76*/])->f_49 = 0;
	(Global_1051387->f_69[iParam0 /*76*/])->f_74 = 1;
	if (func_176(iParam0, 262144) && !bVar0)
	{
		PED::REMOVE_RELATIONSHIP_GROUP((Global_1051387->f_69[iParam0 /*76*/])->f_22);
		func_177(iParam0, 262144);
	}
	(Global_1915170->f_3[iParam0 /*447*/])->f_16 = 0;
	iVar3 = func_112(iParam0);
	if (iVar3 >= 15)
	{
		(Global_1915170->f_3[iParam0 /*447*/])->f_409 = 0;
	}
	else
	{
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			func_178(&((Global_1051387->f_69[iParam0 /*76*/])->f_32[iVar2]));
			(Global_1051387->f_69[iParam0 /*76*/])->f_32[iVar2] = 0;
			iVar2++;
		}
		(Global_1051387->f_69[iParam0 /*76*/])->f_48 = 0;
	}
	func_179(iParam0);
	if (func_117(iParam0, 262144))
	{
		(Global_1051387->f_69[iParam0 /*76*/])->f_50 = 262144;
	}
	else
	{
		func_180(iParam0);
	}
	if (VOLUME::_0x92A78D0BEDB332A3((Global_1051387->f_69[iParam0 /*76*/])->f_25) && func_181(iParam0, 2))
	{
		VOLUME::_0xFD010A2154B40676((Global_1051387->f_69[iParam0 /*76*/])->f_25, 623901053);
		PATHFIND::_0x2C87C3E1C7B96EE2((Global_1051387->f_69[iParam0 /*76*/])->f_25);
	}
	func_182(iParam0);
	(Global_1051387->f_69[iParam0 /*76*/])->f_1 &= 2375680;
	func_183(iParam0);
}

int func_107(int iParam0, int iParam1)
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

int func_108(int iParam0)
{
	if (!func_184(iParam0))
	{
		return 0;
	}
	if (&Global_1051387->f_4360[iParam0] == 0)
	{
		Global_1051387->f_4360[iParam0] = func_185(iParam0);
	}
	return &(Global_1051387->f_4360[iParam0]);
}

float func_109(int iParam0)
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

void func_110(int iParam0, int iParam1)
{
	if (!func_176(iParam0, iParam1))
	{
	}
	(Global_1051387->f_69[iParam0 /*76*/])->f_1 = ((Global_1051387->f_69[iParam0 /*76*/])->f_1 || iParam1);
}

void func_111(int iParam0)
{
	(*Global_1051387)[Global_1051387->f_40] = iParam0;
	Global_1051387->f_40++;
	if (Global_1051387->f_40 >= 39)
	{
		Global_1051387->f_40 = (39 - 1);
	}
}

int func_112(int iParam0)
{
	return (Global_1051387->f_69[iParam0 /*76*/])->f_48;
}

int func_113(int iParam0, bool bParam1, bool bParam2)
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

int func_114(int iParam0)
{
	if (func_186(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return 0;
}

int func_115(int iParam0)
{
	func_113(iParam0, 0, 0);
	if (func_114(iParam0))
	{
		return OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) == 0;
	}
	return 0;
}

void func_116(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_113(iParam0, 0, 0);
	if (func_114(iParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam2, iParam6);
		if (fParam5 > 0f)
		{
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_187(iParam0, fParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_188(iParam0, 1);
			}
			else
			{
				func_189(iParam0, 1);
			}
		}
		else
		{
			func_190(iParam0, 1);
		}
		if (bParam7)
		{
			OBJECT::_0x276AAF0F1C7F2494(iParam0, 1);
		}
	}
	else if (func_191())
	{
	}
	else if (NETWORK::NETWORK_IS_IN_SESSION())
	{
	}
}

bool func_117(int iParam0, int iParam1)
{
	return ((Global_1051387->f_69[iParam0 /*76*/])->f_50 && iParam1) != 0;
}

int func_118(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_119()
{
	return Global_1893575->f_2;
}

bool func_120(int iParam0, int iParam1, var uParam2, var uParam3)
{
	return func_192(iParam0, "sHash", iParam1, "fHeading", uParam2, "vPos", uParam3);
}

bool func_121(int iParam0, int iParam1, var uParam2, var uParam3)
{
	return func_192(iParam0, "sClosedHash", iParam1, "fClosedHeading", uParam2, "vClosedPos", uParam3);
}

void func_122(int iParam0, int iParam1, vector3 vParam2, var uParam5, bool bParam6)
{
	if (bParam6)
	{
		MISC::GET_GROUND_Z_FOR_3D_COORD(vParam2, &(vParam2.f_2), 0);
	}
	(Global_1051387->f_69[iParam0 /*76*/])->f_6 = func_193(iParam1, vParam2, uParam5, 0, 0, 0);
	(Global_1915170->f_3[iParam0 /*447*/])->f_16 = (Global_1051387->f_69[iParam0 /*76*/])->f_6;
	TASK::_0x5AF19B6CC2115D34((Global_1051387->f_69[iParam0 /*76*/])->f_6, 23, 1);
	TASK::_0xA7479FB665361EDB((Global_1051387->f_69[iParam0 /*76*/])->f_6, 0);
	func_110(iParam0, 16384);
}

bool func_123(int iParam0, bool bParam1)
{
	if (func_45() != -1)
	{
		return false;
	}
	if (!func_99(iParam0))
	{
		return false;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(func_124(iParam0)))
	{
		return false;
	}
	if (bParam1 && !ENTITY::DOES_ENTITY_EXIST(func_194(iParam0)))
	{
		return false;
	}
	return !_NAMESPACE48::_0xEB98B38CA60742D7(func_124(iParam0));
}

int func_124(int iParam0)
{
	if (!func_99(iParam0))
	{
		return 0;
	}
	return ((*Global_1893763)[iParam0 /*3*/])->f_1;
}

bool func_125(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 12);
}

bool func_126(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 16);
}

int func_127()
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return Global_1070355->f_4;
}

bool func_128(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam1))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iParam1, bParam2, iParam3);
}

struct<2> func_129(int iParam0)
{
	int iVar0;

	iVar0 = func_195(iParam0);
	return func_151(-277276100, iVar0);
}

void func_130(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

int func_131(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -1519264107;
		case 2:
			return -1349160228;
		case 3:
			return -732709691;
		case 4:
			return 1691387227;
		case 5:
			return -969278268;
		case 6:
			return 650135692;
		default:
			break;
	}
	return 0;
}

int func_132(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return -562854755;
				case 1:
					return -193397860;
				case 2:
					return -1639158743;
				case 3:
					return -545263819;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -331472846;
				case 1:
					return 1266428317;
				case 2:
					return -1342435444;
				case 3:
					return -243002563;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 429079746;
				case 1:
					return 1587973176;
				case 2:
					return 1338229360;
				case 3:
					return -271501111;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return 771711526;
				case 1:
					return -466995375;
				case 2:
					return -398924971;
				case 3:
					return -1232006170;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return -2052512212;
				case 1:
					return -1144971953;
				case 2:
					return 86781479;
				case 3:
					return 416111513;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					return -446960320;
				case 1:
					return -2015262927;
				case 2:
					return -707938197;
				case 3:
					return 2136054096;
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_133(int iParam0)
{
	if ((iParam0 == 22 || iParam0 == 39) && !func_196())
	{
		return 1;
	}
	if (iParam0 == 66)
	{
		return 1;
	}
	return 0;
}

int func_134()
{
	if (Global_13)
	{
		return 0;
	}
	if (!func_197())
	{
		return 0;
	}
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1938075->f_75.f_55))
	{
		return 0;
	}
	if (func_198(-1 ^ 9, 0, 1))
	{
		return 0;
	}
	return 1;
}

char* func_135(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, var uParam6)
{
	char* sVar0;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1893575->f_162)))
	{
		sVar0 = func_199(Global_1893575->f_162);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && bParam4)
	{
		sVar0 = func_201(func_200(Global_36));
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		if (!func_202(iParam0) || func_203(44))
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

bool func_136(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

int func_137(int iParam0)
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

int func_138(int iParam0)
{
	int iVar0;
	struct<7> Var1;
	var uVar8;

	if (!func_136(iParam0))
	{
		return -1;
	}
	if (Global_1572887->f_13 == -1)
	{
		return &(Global_40.f_186[iParam0 /*12*/]);
	}
	iVar0 = 0;
	Var1 = { func_204(PLAYER::PLAYER_ID()) };
	BOUNTY::_0x4EF23E04A0C8FF51(&Var1, &uVar8);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1070355->f_19592[iVar0 /*12*/] = uVar8;
		iVar0++;
	}
	return &(Global_1070355->f_19592[iParam0 /*12*/]);
}

int func_139(int iParam0)
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

char* func_140(int iParam0)
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

bool func_141(int iParam0, int iParam1)
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

bool func_142(int iParam0, int iParam1)
{
	if (!func_136(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_13 == -1)
	{
		return ((Global_40.f_186[iParam0 /*12*/])->f_5 && iParam1) != 0;
	}
	return ((Global_1070355->f_19592[iParam0 /*12*/])->f_5 && iParam1) != 0;
}

int func_143()
{
	return &Global_1902688;
}

int func_144(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_145(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

float func_146(float fParam0)
{
	return ((fParam0 * 1.8f) + 32f);
}

char* func_147(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_205(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

var func_148(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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

int func_149(int iParam0)
{
	if (func_202(iParam0))
	{
		if (!func_203(44))
		{
			return 0;
		}
	}
	return 1;
}

void func_150(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

struct<2> func_151(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_152(char* sParam0)
{
	if (HUD::_0x2C729F2B94CEA911(sParam0))
	{
		if (HUD::_0xD0976CC34002DB57(sParam0))
		{
			HUD::_0xAA03F130A637D923(sParam0);
		}
	}
}

void func_153(int iParam0)
{
	func_206((Global_1938932->f_5[iParam0 /*11*/])->f_6, 1);
	func_207((Global_1938932->f_5[iParam0 /*11*/])->f_6, 0);
	if (VOLUME::_0xF6A8A652A6B186CD((Global_1938932->f_5[iParam0 /*11*/])->f_8))
	{
		VOLUME::_0xFDFECC6EE4491E11((Global_1938932->f_5[iParam0 /*11*/])->f_8);
	}
	func_208(iParam0, 8192);
	func_208(iParam0, 32768);
	func_208(iParam0, 524288);
	func_208(iParam0, 1048576);
	(Global_1938932->f_5[iParam0 /*11*/])->f_10 = 0;
	(Global_1938932->f_5[&Global_1938932 /*11*/])->f_9 = 0;
	Global_1938932->f_5[iParam0 /*11*/] = 0;
	(Global_1938932->f_5[iParam0 /*11*/])->f_1 = { 0f, 0f, 0f };
	(Global_1938932->f_5[iParam0 /*11*/])->f_4 = 0;
	(Global_1938932->f_5[iParam0 /*11*/])->f_5 = -1;
	(Global_1938932->f_5[iParam0 /*11*/])->f_6 = -1;
	(Global_1938932->f_5[iParam0 /*11*/])->f_7 = 0;
}

void func_154(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_99((Global_1915170->f_3[iParam0 /*447*/])->f_21) && func_209((Global_1915170->f_3[iParam0 /*447*/])->f_21))
	{
		func_210((Global_1915170->f_3[iParam0 /*447*/])->f_21, 0, 1, 0, 0);
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
	func_211((Global_1915170->f_3[iParam0 /*447*/])->f_9, 0);
	func_212(iParam0, 536870912);
	iVar1 = func_213(iParam0);
	if (iVar1 >= 15)
	{
		(Global_1915170->f_3[iParam0 /*447*/])->f_409 = 0;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			func_178(&((Global_1915170->f_3[iParam0 /*447*/])->f_318[iVar0 /*6*/]));
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
	func_214(iParam0);
	(Global_1915170->f_3[iParam0 /*447*/])->f_9 = -1;
	(Global_1915170->f_3[iParam0 /*447*/])->f_8 = -1;
}

bool func_155(int iParam0, int iParam1)
{
	if (func_45() != -1)
	{
		return false;
	}
	if (!func_99(iParam0))
	{
		return false;
	}
	return (Global_9657[iParam0 /*2*/] && iParam1) != 0;
}

int func_156(int iParam0, bool bParam1)
{
	if (!func_99(iParam0))
	{
		return 0;
	}
	if (!func_155(iParam0, 2))
	{
		return 0;
	}
	if (func_161(iParam0) == 0)
	{
		return 1;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(func_124(iParam0)))
	{
		return 1;
	}
	if (func_155(iParam0, 1) && !bParam1)
	{
		func_215(iParam0, 128);
		return 1;
	}
	func_163(iParam0, 129);
	func_216(iParam0);
	_NAMESPACE48::_0xFC77C5B44D5FF7C0(func_124(iParam0));
	func_162(iParam0, 0);
	return 1;
}

int func_157(int iParam0)
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

int func_158(int iParam0)
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

void func_159()
{
	int iVar0;
	var uVar1;

	func_180(30);
	func_182(30);
	func_217(30);
	func_183(30);
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
	if (func_176(30, 262144))
	{
		PED::REMOVE_RELATIONSHIP_GROUP((Global_1051387->f_69[30 /*76*/])->f_22);
		func_177(30, 262144);
	}
}

void func_160()
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
	func_183(32);
}

int func_161(int iParam0)
{
	if (!func_99(iParam0))
	{
		return 0;
	}
	return Global_1893763[iParam0 /*3*/];
}

void func_162(int iParam0, int iParam1)
{
	if (!func_99(iParam0))
	{
		return;
	}
	((*Global_1893763)[iParam0 /*3*/])->f_1 = iParam1;
}

void func_163(int iParam0, int iParam1)
{
	if (func_45() != -1)
	{
		return;
	}
	if (!func_99(iParam0))
	{
		return;
	}
	Global_9657[iParam0 /*2*/] = (&Global_9657[iParam0 /*2*/] - (Global_9657[iParam0 /*2*/] && iParam1));
}

int func_164(int iParam0)
{
	if (!func_99(iParam0))
	{
		return 0;
	}
	if (!func_155(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

bool func_165(struct<2> Param0)
{
	return func_218(Param0, 5, 8);
}

bool func_166(int iParam0)
{
	return func_219(1, iParam0);
}

int func_167(int iParam0)
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

int func_168(int iParam0)
{
	if (func_220(&(Global_1099293->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

void func_169(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_221(iParam0);
	if (!func_222(1))
	{
		return;
	}
	if (bParam1)
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	else if (!func_223(128) && !func_224(18))
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	if (bParam3 && func_225() == 4)
	{
		func_168(17);
	}
	func_226(1024);
}

int func_170(int iParam0)
{
	if (func_227(&(Global_1099293->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

void func_171(var uParam0)
{
	struct<30> Var0;

	*uParam0 = { Var0 };
}

void func_172(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

void func_173(struct<29> Param0, var uParam29, int iParam30)
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

void func_174(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

int func_175(int iParam0)
{
	if (((iParam0 == 28 || iParam0 == 29) || iParam0 == 38) || iParam0 == 27)
	{
		return 1;
	}
	if (func_117(iParam0, 65536))
	{
		return 1;
	}
	return 0;
}

bool func_176(int iParam0, int iParam1)
{
	return ((Global_1051387->f_69[iParam0 /*76*/])->f_1 && iParam1) != 0;
}

void func_177(int iParam0, int iParam1)
{
	if (func_176(iParam0, iParam1))
	{
	}
	(Global_1051387->f_69[iParam0 /*76*/])->f_1 = ((Global_1051387->f_69[iParam0 /*76*/])->f_1 - ((Global_1051387->f_69[iParam0 /*76*/])->f_1 && iParam1));
}

void func_178(int iParam0)
{
	if (func_114(iParam0) && func_228())
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iParam0);
	}
}

void func_179(int iParam0)
{
}

void func_180(int iParam0)
{
	(Global_1051387->f_69[iParam0 /*76*/])->f_50 = 0;
}

bool func_181(int iParam0, int iParam1)
{
	return func_229((Global_1051387->f_69[iParam0 /*76*/])->f_51, iParam1);
}

void func_182(int iParam0)
{
	(Global_1051387->f_69[iParam0 /*76*/])->f_51 = 0;
}

void func_183(int iParam0)
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

bool func_184(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 176);
}

int func_185(int iParam0)
{
	vector3 vVar0;

	if (DATAFILE::_0x603AC35FD4602C76(Global_1131373->f_7) && !func_231(12, func_230(iParam0), &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_186(int iParam0)
{
	return iParam0 != 0;
}

void func_187(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	if (func_114(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam1, iParam3);
	}
}

void func_188(int iParam0, bool bParam1)
{
	if (func_114(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 2 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 2);
		}
	}
}

void func_189(int iParam0, bool bParam1)
{
	if (func_114(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
	}
}

void func_190(int iParam0, bool bParam1)
{
	if (func_114(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 0 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 0);
		}
	}
}

int func_191()
{
	return 1;
}

int func_192(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, var uParam6)
{
	struct<4> Var0;

	Var0 = func_232();
	Var0.f_2 = -738708473;
	Var0.f_3 = func_230(iParam0);
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		return 0;
	}
	Var0.f_2 = -1407851228;
	Var0.f_3 = MISC::GET_HASH_KEY(sParam1);
	DATAFILE::_DATAFILE_GET_HASH(iParam2, &Var0);
	Var0.f_2 = 1059891245;
	Var0.f_3 = MISC::GET_HASH_KEY(sParam3);
	DATAFILE::_DATAFILE_GET_FLOAT(uParam4, &Var0);
	Var0.f_2 = -99852754;
	Var0.f_3 = MISC::GET_HASH_KEY(sParam5);
	DATAFILE::_DATAFILE_GET_VECTOR(uParam6, &Var0);
	return 1;
}

var func_193(int iParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6, int iParam7)
{
	return TASK::CREATE_SCENARIO_POINT(iParam0, vParam1, iParam4, iParam5, iParam6, iParam7);
}

int func_194(int iParam0)
{
	int iVar0;

	iVar0 = func_124(iParam0);
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

int func_195(int iParam0)
{
	int iVar0;

	iVar0 = func_230(iParam0);
	if (iVar0 == 0)
	{
	}
	return iVar0;
}

int func_196()
{
	return 0;
}

int func_197()
{
	struct<2> Var0;
	struct<2> Var2;

	if (func_45() != 0)
	{
		return 1;
	}
	if (func_233())
	{
		return 0;
	}
	if (HUD::_0x7EC0D68233E391AC(6) == 1)
	{
		return 1;
	}
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { func_234() };
	if (func_235(Var0))
	{
		return 0;
	}
	Var2 = { func_236() };
	if (func_235(Var2))
	{
		return 0;
	}
	return 1;
}

int func_198(int iParam0, bool bParam1, bool bParam2)
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
		if (func_233())
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
	if (iParam0 == 0 && func_235(func_58(0)))
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
	switch (func_59(func_58(0)))
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

var func_199(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_200(vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 51)
	{
		if (func_237(vParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

char* func_201(int iParam0)
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

int func_202(int iParam0)
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

int func_203(int iParam0)
{
	if (!func_238(iParam0))
	{
		return 0;
	}
	return func_239(iParam0);
}

struct<7> func_204(int iParam0)
{
	struct<7> Var0;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0);
	return Var0;
}

char* func_205(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

void func_206(int iParam0, bool bParam1)
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

void func_207(int iParam0, bool bParam1)
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

void func_208(int iParam0, int iParam1)
{
	func_240(&((Global_1938932->f_5[iParam0 /*11*/])->f_7), iParam1);
}

bool func_209(int iParam0)
{
	if (!func_99(iParam0))
	{
		return false;
	}
	return ((*Global_1893763)[iParam0 /*3*/])->f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_210(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_99(iParam0))
	{
		return;
	}
	if (!func_155(iParam0, 1))
	{
		return;
	}
	if (!func_155(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_209(iParam0)) && func_241(iParam0))
	{
		return;
	}
	func_163(iParam0, 1);
	func_216(iParam0);
	if (func_242(func_161(iParam0)))
	{
		iVar0 = func_124(iParam0);
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
		func_163(iParam0, 16);
	}
	if (func_155(iParam0, 128) && !bParam3)
	{
		func_156(iParam0, 0);
	}
}

void func_211(int iParam0, bool bParam1)
{
	if (!func_184(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (!func_243(iParam0, 1024))
		{
			func_244(iParam0, 1024);
			INVENTORY::_0x9B4E793B1CB6550A();
		}
	}
	else if (func_243(iParam0, 1024))
	{
		func_245(iParam0, 1024);
		INVENTORY::_0x9B4E793B1CB6550A();
	}
	func_246(iParam0);
}

void func_212(int iParam0, int iParam1)
{
	if (!func_247(iParam0))
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

int func_213(int iParam0)
{
	return (Global_1915170->f_3[iParam0 /*447*/])->f_409;
}

void func_214(int iParam0)
{
	(Global_1915170->f_3[iParam0 /*447*/])->f_6 = 0;
}

void func_215(int iParam0, int iParam1)
{
	if (func_45() != -1)
	{
		return;
	}
	if (!func_99(iParam0))
	{
		return;
	}
	Global_9657[iParam0 /*2*/] = (Global_9657[iParam0 /*2*/] || iParam1);
}

void func_216(int iParam0)
{
	int iVar0;

	if (!func_99(iParam0))
	{
		return;
	}
	iVar0 = func_194(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
	((*Global_1893763)[iParam0 /*3*/])->f_2 = 0;
}

void func_217(int iParam0)
{
	(Global_1051387->f_69[iParam0 /*76*/])->f_1 = 0;
}

bool func_218(struct<2> Param0, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_235(Param0))
	{
		return false;
	}
	if (Param0 != 2)
	{
		return false;
	}
	iVar0 = func_248(Param0);
	return (iVar0 >= iParam2 && iVar0 <= iParam3);
}

int func_219(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_249(&(Global_1099293->f_4), iVar0, 5);
	}
	if (iParam1 == func_250())
	{
		return func_249(&(Global_1099293->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1273882->f_22[iParam1])
	{
		return func_249(&(((*Global_1097609)[iParam1 /*51*/])->f_4), iVar0, 5);
	}
	return 0;
}

bool func_220(var uParam0, int iParam1, int iParam2)
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

void func_221(int iParam0)
{
	Global_1099293->f_26.f_12 = iParam0;
}

bool func_222(int iParam0)
{
	return (Global_1099293->f_26.f_7 && iParam0) != 0;
}

bool func_223(int iParam0)
{
	return (Global_1099293->f_26.f_9 && iParam0) != 0;
}

bool func_224(int iParam0)
{
	return (Global_1099293->f_4[Global_1100046[iParam0 /*2*/]] && ((*Global_1100046)[iParam0 /*2*/])->f_1) == ((*Global_1100046)[iParam0 /*2*/])->f_1;
}

int func_225()
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

void func_226(int iParam0)
{
	if (func_251(iParam0))
	{
		return;
	}
	Global_1099293->f_26.f_9 = (Global_1099293->f_26.f_9 || iParam0);
}

bool func_227(var uParam0, int iParam1, int iParam2)
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

int func_228()
{
	return 1;
}

bool func_229(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_230(int iParam0)
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

int func_231(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (func_252(iParam0, uParam1, &uVar0))
	{
		func_253(&uVar0, iParam0, uParam2);
	}
	else
	{
		return 0;
	}
	return 1;
}

var func_232()
{
	return (Global_1070355->f_26934[47 /*4*/])->f_3;
}

int func_233()
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
	if (!func_235(*Global_1051163) && Global_1572887->f_7 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

struct<2> func_234()
{
	return *Global_1051163;
}

int func_235(struct<2> Param0)
{
	if (!func_254(Param0))
	{
		return 0;
	}
	if (Param0.f_1 < 0)
	{
		return 0;
	}
	if (Param0.f_1 >= func_255(Param0))
	{
		return 0;
	}
	return 1;
}

struct<2> func_236()
{
	if (Global_1182844->f_129 <= 0)
	{
		return func_58(0);
	}
	if (Global_1182844->f_130 < 0 || Global_1182844->f_131 == 0)
	{
		return func_58(0);
	}
	return ((*Global_1182844)[Global_1182844->f_130 /*4*/])->f_1;
}

int func_237(vector3 vParam0, int iParam3)
{
	vector3 vVar0;
	struct<2> Var3;
	var uVar6;

	func_256(iParam3, &vVar0, &Var3, &uVar6);
	if (func_257(vParam0, vVar0, Var3, Var3.f_1, uVar6))
	{
		return 1;
	}
	return 0;
}

int func_238(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_239(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_40.f_3434[iVar1]), iVar2);
}

void func_240(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_241(int iParam0)
{
	if (!func_99(iParam0))
	{
		return false;
	}
	return SCRIPTS::_DOES_THREAD_EXIST(((*Global_1893763)[iParam0 /*3*/])->f_2);
}

bool func_242(int iParam0)
{
	return iParam0 != 0;
}

bool func_243(int iParam0, int iParam1)
{
	if (!func_184(iParam0))
	{
		return false;
	}
	return (Global_1915170->f_17437[iParam0] && iParam1) != 0;
}

void func_244(int iParam0, int iParam1)
{
	if (!func_184(iParam0))
	{
		return;
	}
	Global_1915170->f_17437[iParam0] = (Global_1915170->f_17437[iParam0] || iParam1);
}

void func_245(int iParam0, int iParam1)
{
	if (!func_184(iParam0))
	{
		return;
	}
	Global_1915170->f_17437[iParam0] = (&Global_1915170->f_17437[iParam0] - (Global_1915170->f_17437[iParam0] && iParam1));
}

void func_246(int iParam0)
{
	func_259(func_258(iParam0));
}

bool func_247(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 39);
}

int func_248(struct<2> Param0)
{
	if (Param0 == 2)
	{
		return func_260(Param0);
	}
	return -1;
}

bool func_249(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_250()
{
	return Global_1099293->f_339;
}

bool func_251(int iParam0)
{
	return (Global_1099293->f_26.f_9 && iParam0) == iParam0;
}

bool func_252(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1131373->f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_261(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_253(var uParam0, int iParam1, var uParam2)
{
	var uVar0;

	*uParam2 = iParam1;
	uParam0->f_2 = -611386243;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_1), uParam0);
	uParam0->f_2 = -2140901307;
	if (DATAFILE::_DATAFILE_GET_HASH(&uVar0, uParam0))
	{
		uParam2->f_2 = uVar0;
	}
	uParam0->f_2 = -2140901307;
	DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_11), uParam0);
	uParam0->f_2 = 1292053410;
	DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_19), uParam0);
	uParam0->f_2 = 1234058424;
	DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_3), uParam0);
}

int func_254(int iParam0)
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

int func_255(int iParam0)
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

void func_256(int iParam0, var uParam1, var uParam2, var uParam3)
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

bool func_257(vector3 vParam0, vector3 vParam3, float fParam6, float fParam7, float fParam8)
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

int func_258(int iParam0)
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

void func_259(var uParam0)
{
	Global_1915170->f_17792 = uParam0;
}

int func_260(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_262(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_261(int iParam0)
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

int func_262(struct<2> Param0, var uParam2)
{
	if (!func_235(Param0))
	{
		return 0;
	}
	func_263(uParam2);
	switch (Param0)
	{
		case 2:
			MISC::_COPY_MEMORY(uParam2, Global_1070355->f_634[Param0.f_1 /*3*/], 3);
			return 1;
		case 3:
			MISC::_COPY_MEMORY(uParam2, Global_1070355->f_634.f_602[Param0.f_1 /*3*/], 3);
			return 1;
		case 4:
			MISC::_COPY_MEMORY(uParam2, Global_1070355->f_634.f_2104[Param0.f_1 /*3*/], 3);
			return 1;
		case 5:
			MISC::_COPY_MEMORY(uParam2, Global_1070355->f_634.f_12606[Param0.f_1 /*3*/], 3);
			return 1;
		case 6:
			MISC::_COPY_MEMORY(uParam2, Global_1070355->f_634.f_12908[Param0.f_1 /*3*/], 3);
			return 1;
		case 7:
			MISC::_COPY_MEMORY(uParam2, Global_1070355->f_634.f_15910[Param0.f_1 /*3*/], 3);
			return 1;
		case 8:
			MISC::_COPY_MEMORY(uParam2, Global_1070355->f_634.f_15981[Param0.f_1 /*3*/], 3);
			return 1;
		default:
			break;
	}
	return 0;
}

void func_263(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

