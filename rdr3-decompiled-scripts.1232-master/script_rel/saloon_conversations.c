#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	float fLocal_7 = 0f;
	float fLocal_8 = 0f;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = -1;
	var uLocal_22 = 0;
	char* sLocal_23 = NULL;
	int iLocal_24 = 0;
	struct<2> Local_25 = { 0, 0 } ;
	var uLocal_27 = -1082130432;
	var uLocal_28 = -1082130432;
	var uLocal_29 = 0;
	var uLocal_30 = -1082130432;
	var uLocal_31 = -1082130432;
	var uLocal_32 = 0;
	var uLocal_33 = -1082130432;
	var uLocal_34 = -1082130432;
	var uLocal_35 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
#endregion

void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	sLocal_23 = "beat_gang_camp_reminder";
	iLocal_24 = 23;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1();
	}
	Local_25 = vScriptParam_0.x;
	Local_25.f_1 = vScriptParam_0.y;
	if (func_2(Local_25.f_1) && func_3(Local_25))
	{
		while (!func_4(1) && !func_5(32768))
		{
			if (func_6(vScriptParam_0.f_2))
			{
			}
			else
			{
				func_7();
				BUILTIN::WAIT(0);
			}
		}
	}
	func_1();
}

void func_1()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_2(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 3)
	{
		return 0;
	}
	return 1;
}

int func_3(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 9)
	{
		return 0;
	}
	return 1;
}

int func_4(bool bParam0)
{
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
	return 0;
}

bool func_5(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

int func_6(vector3 vParam0)
{
	if ((MISC::GET_FRAME_COUNT() % 10) == 0)
	{
		if (!&Global_1935369->f_5[Local_25.f_1 /*11*/])
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vParam0, true) > 20f)
			{
				return 1;
			}
		}
		if (func_8(&Global_1935630, 2097152))
		{
			return 1;
		}
	}
	return 0;
}

void func_7()
{
	if ((Global_1879534->f_1 || Global_1879534) // PointerArith)
	{
		return;
	}
	switch (Local_25)
	{
		case 5:
			func_9(&uLocal_27, 84, 5, -316.4756f, 795.1207f, 116.6641f, 0, Local_25.f_1);
			break;
		case 3:
			func_9(&uLocal_30, 101, 3, 1342.767f, -1374.869f, 79.5128f, 1, Local_25.f_1);
			break;
		case 1:
			func_9(&uLocal_33, 110, 1, 2796.278f, -1168.035f, 46.924f, 1, Local_25.f_1);
			break;
	}
}

bool func_8(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_9(var uParam0, int iParam1, int iParam2, vector3 vParam3, bool bParam6, int iParam7)
{
	bool bVar0;

	switch (uParam0->f_2)
	{
		case 0:
			*uParam0 = -1f;
			uParam0->f_1 = -1f;
			func_10(uParam0, iParam1, 1);
			break;
		case 1:
			if (!&Global_1935369->f_5[iParam7 /*11*/] && iParam1 != 101)
			{
			}
			else
			{
				if (Local_25 != iParam2)
				{
					func_10(uParam0, iParam1, 5);
				}
				else if (func_11(iParam1))
				{
					func_10(uParam0, iParam1, 3);
				}
				else
				{
					switch (iParam1)
					{
						case 84:
							bVar0 = func_12();
							break;
						case 101:
							bVar0 = func_13();
							break;
						case 110:
							bVar0 = func_14();
							break;
					}
					if (bVar0)
					{
						func_15(iParam1, bParam6, vParam3, -1, 0, 0);
						*uParam0 = func_16();
						func_10(uParam0, iParam1, 2);
					}
				}
				Jump @396; //curOff = 228
				if ((func_16() - *uParam0) > 8f)
				{
					if (func_11(iParam1))
					{
						func_10(uParam0, iParam1, 3);
					}
					else if (func_17(iParam1) > 0)
					{
						func_10(uParam0, iParam1, 5);
					}
					else
					{
						uParam0->f_1 = func_16();
						func_10(uParam0, iParam1, 4);
					}
				}
				Jump @396; //curOff = 308
				if (!func_11(iParam1))
				{
					uParam0->f_1 = func_16();
					func_10(uParam0, iParam1, 4);
				}
				else if (func_17(iParam1) > 0)
				{
					func_10(uParam0, iParam1, 5);
				}
				Jump @396; //curOff = 360
				if ((func_16() - uParam0->f_1) > 10f)
				{
					func_10(uParam0, iParam1, 0);
				}
			}
		}

void func_10(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = iParam2;
}

bool func_11(int iParam0)
{
	return ((*Global_1310750)[iParam0 /*111*/])->f_48;
}

int func_12()
{
	if (!func_18(84, 5, 0, -1082130432))
	{
		return 0;
	}
	if (func_19(84) >= 2)
	{
		return 0;
	}
	if (!func_20(84))
	{
		return 0;
	}
	return 1;
}

int func_13()
{
	if (!func_18(101, 3, 0, -1082130432))
	{
		return 0;
	}
	if (func_17(101) >= 1)
	{
		return 0;
	}
	if (func_21(18))
	{
		return 0;
	}
	if (func_22(1342.767f, -1374.869f, 79.5128f))
	{
		return 0;
	}
	return 1;
}

int func_14()
{
	if (func_23() != 5)
	{
		return 0;
	}
	if (!func_18(110, 1, 1, 20f))
	{
		return 0;
	}
	if (func_17(110) >= 1)
	{
		return 0;
	}
	if (func_11(107))
	{
		return 0;
	}
	if (!func_20(110))
	{
		return 0;
	}
	if (func_22(2796.278f, -1168.035f, 46.924f))
	{
		return 0;
	}
	return 1;
}

void func_15(int iParam0, bool bParam1, vector3 vParam2, int iParam5, bool bParam6, bool bParam7)
{
	if (!func_24(iParam0) && !bParam7)
	{
		return;
	}
	if (Global_1310750->f_16071 != -1 && !bParam6)
	{
		return;
	}
	func_25();
	if (iParam5 == -1)
	{
		iParam5 = PLAYER::PLAYER_ID();
	}
	Global_1310750->f_16103 = { vParam2 };
	Global_1327479 = iParam0;
	Global_1327479->f_1 = iParam5;
	Global_1327479->f_10 = func_26(iParam0, vParam2);
	func_27(0);
	func_28(0, 0, 1);
	if (bParam1)
	{
		Global_1310750->f_16077 = 0;
		Global_1310750->f_16071 = -1;
		Global_1310750->f_16075 = 1;
		(Global_17503.f_42[iParam0 /*8*/])->f_4 = 0;
		func_29(8);
		func_30(Global_36, 1137180672);
	}
	if (bParam7)
	{
		Global_1310750->f_16076 = 1;
	}
}

float func_16()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

int func_17(int iParam0)
{
	if (!func_24(iParam0))
	{
		return 0;
	}
	return (Global_17503.f_42[iParam0 /*8*/])->f_1;
}

int func_18(int iParam0, int iParam1, int iParam2, float fParam3)
{
	float fVar0;

	if (fParam3 > 0f)
	{
		fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, (Global_1935369->f_5[iParam2 /*11*/])->f_1, true);
		if (fVar0 > fParam3)
		{
			return 0;
		}
	}
	else if (!func_31(iParam1))
	{
		return 0;
	}
	if (func_11(iParam0))
	{
		return 0;
	}
	if (iParam0 == 84)
	{
		if (func_32(64, 0, 1))
		{
			return 0;
		}
	}
	else if (func_33())
	{
		return 0;
	}
	if (func_34())
	{
		return 0;
	}
	if (func_35(1))
	{
		return 0;
	}
	if (!func_36(iParam0))
	{
		return 0;
	}
	if (func_37(iParam0))
	{
		return 0;
	}
	if (!(Global_17503.f_42[iParam0 /*8*/])->f_7)
	{
		return 0;
	}
	return 1;
}

int func_19(int iParam0)
{
	if (!func_24(iParam0))
	{
		return 0;
	}
	return &(Global_17503.f_42[iParam0 /*8*/]);
}

int func_20(int iParam0)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	iVar0 = func_38();
	switch (iParam0)
	{
		case 0:
			if (func_39(0, iVar0) > 0)
			{
				if (((iVar0 == 4 || iVar0 == 7) || iVar0 == 9) || iVar0 == 10)
				{
					return 0;
				}
			}
			return 1;
		case 2:
			if (func_21(11) && func_38() == 1)
			{
				return 0;
			}
			if (func_40() && func_38() == 4)
			{
				return 0;
			}
			if (!PED::IS_PED_ON_MOUNT(Global_35))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		case 3:
			if (func_41(2) || func_42(2))
			{
				return 0;
			}
			return 1;
		case 76:
			if (func_43(19))
			{
				return 0;
			}
			else if (!func_44(115, -1, 0))
			{
				return 0;
			}
			if (func_43(68) && !func_45(59))
			{
				return 0;
			}
			return 1;
		case 6:
			if (iVar0 == -1)
			{
				return 0;
			}
			if (iVar0 == 8)
			{
				if (func_46(39))
				{
					return 0;
				}
			}
			else if (!func_47(joaat("weapon_shotgun_doublebarrel")))
			{
				return 0;
			}
			return 1;
		case 7:
			if (func_40())
			{
				if (!func_45(7))
				{
					return 0;
				}
			}
			else if (func_48())
			{
				if (!func_45(69))
				{
					return 0;
				}
			}
			return 1;
		case 31:
			if (func_49() || func_50())
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		case 10:
			if (!func_48() && (func_51(10, 0) == 2 || func_51(10, 0) == 1))
			{
				return 0;
			}
			if (func_48() && ((func_51(10, 1) == 2 || func_51(10, 0) == 1) || func_51(10, 1) == 1))
			{
				return 0;
			}
			return 1;
		case 11:
			if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
			{
				return 0;
			}
			if (func_41(2) || func_42(2))
			{
				return 0;
			}
			return 1;
		case 12:
			if (func_19(12) < 3)
			{
				switch (func_38())
				{
					case 4:
					case 12:
						if (((!func_41(3) && !func_45(75)) && func_52(12, 1) != 2) && func_48())
						{
							return 1;
						}
						else
						{
							return 0;
						}
						break;
					case 1:
					case 3:
					case 9:
						if (((!func_41(0) && func_52(12, 0) != 1) && !func_43(65)) && func_40())
						{
							return 1;
						}
						else
						{
							return 0;
						}
						break;
					case 13:
					case 14:
					case 15:
					case 16:
						if ((!func_41(5) && func_52(12, 2) != 3) && func_48())
						{
							return 1;
						}
						else
						{
							return 0;
						}
						break;
				}
			}
			break;
		case 79:
			if (func_19(4) == 0 && func_19(45) == 0)
			{
				return 0;
			}
			switch (func_23())
			{
				case 76:
					if ((func_52(45, 0) == 5 || func_52(45, 0) == 6) && func_52(45, 5) == 1)
					{
						if ((!func_48() && func_52(45, 3) == 1) || (func_48() && func_52(45, 3) == 2))
						{
							if (func_53(45, 0) == 3)
							{
								return 0;
							}
							else if (func_54(45, 0, 1, 6))
							{
								if (func_55())
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
							else
							{
								return 0;
							}
						}
					}
					break;
				case 26:
					if (func_52(4, 1) == 1)
					{
						if ((!func_48() && func_52(4, 4) == 1) || (func_48() && func_52(4, 4) == 2))
						{
							if (func_53(4, 1) == 3)
							{
								return 0;
							}
							else if (func_54(4, 1, 1, 6))
							{
								if (func_55())
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
							else
							{
								return 0;
							}
						}
					}
					break;
				case 105:
					if ((func_52(45, 2) == 5 || func_52(45, 2) == 6) && func_52(45, 6) == 1)
					{
						if ((!func_48() && func_52(45, 4) == 1) || (func_48() && func_52(45, 4) == 2))
						{
							if (func_53(45, 2) == 3)
							{
								return 0;
							}
							else if (func_54(45, 2, 1, 6))
							{
								if (func_55())
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
							else
							{
								return 0;
							}
						}
					}
					break;
				case 78:
					if (func_52(4, 0) == 1)
					{
						if ((!func_48() && func_52(4, 3) == 1) || (func_48() && func_52(4, 3) == 2))
						{
							if (func_53(4, 0) == 3)
							{
								return 0;
							}
							else if (func_54(4, 0, 1, 6))
							{
								if (func_55())
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
							else
							{
								return 0;
							}
						}
					}
					break;
			}
			return 0;
		case 82:
			if (func_56(0))
			{
				if (func_23() == 5 && func_52(82, 0) == 1)
				{
					return 0;
				}
				if (func_23() == 38 && func_52(82, 1) == 1)
				{
					return 0;
				}
			}
			return 1;
		case 83:
			if (func_17(75) <= 0)
			{
				return 0;
			}
			if (func_57())
			{
				return 0;
			}
			return 1;
		case 84:
			if (func_58(76, 1, 0))
			{
				return 0;
			}
			if (func_60(func_59(76), 557524588, 1))
			{
				return 0;
			}
			if (func_61(117, 0) || func_61(118, 0))
			{
				return 0;
			}
			if (func_19(84) >= 2)
			{
				return 0;
			}
			if (func_51(84, 0) == 2 || func_51(84, 1) == 2)
			{
				return 0;
			}
			if (func_51(84, 0) == 3 || func_51(84, 1) == 3)
			{
				return 0;
			}
			if (func_52(84, 2) == 1 && func_48())
			{
				return 0;
			}
			if (func_40())
			{
				if (!func_45(7))
				{
					return 0;
				}
			}
			if (func_46(69))
			{
				return 0;
			}
			else if (func_46(9))
			{
				return 0;
			}
			else if (func_46(5))
			{
				return 0;
			}
			return 1;
		case 15:
			if (func_52(15, 0) >= 1)
			{
				return 0;
			}
			if (func_53(15, 1) >= 3)
			{
				return 0;
			}
			if (func_52(15, 2) >= 1)
			{
				return 0;
			}
			return 1;
		case 86:
			if (func_23() != 78 && func_45(26))
			{
				return 0;
			}
			return 1;
		case 87:
			if (func_48())
			{
			}
			else if (func_19(87) >= 2)
			{
				return 0;
			}
			return 1;
		case 16:
			if (func_19(16) > 0)
			{
				return 0;
			}
			if (!func_62(688258043, 1, 0))
			{
				return 0;
			}
			return 1;
		case 90:
			iVar2 = func_23();
			iVar3 = func_64(func_63(904), 1);
			if (iVar2 == 92 && iVar3 == 92)
			{
				return 0;
			}
			if (func_65() == 0)
			{
				return 0;
			}
			return 1;
		case 89:
			iVar4 = func_23();
			if (func_58(iVar4, 1, 0))
			{
				return 0;
			}
			if (func_65() == 0)
			{
				return 0;
			}
			if (func_17(101) >= 1)
			{
				return 1;
			}
			return 0;
		case 88:
			iVar5 = func_23();
			if (func_58(iVar5, 1, 0))
			{
				return 0;
			}
			if (iVar5 == 76)
			{
				if (func_46(69))
				{
					return 0;
				}
				else if (func_46(9))
				{
					return 0;
				}
				else if (func_46(5))
				{
					return 0;
				}
				else if (func_61(117, 0))
				{
					return 0;
				}
				else if (func_61(118, 0))
				{
					return 0;
				}
				if (func_31(5))
				{
					return 0;
				}
			}
			iVar6 = func_64(func_63(904), 1);
			if (iVar5 == 92)
			{
				if (iVar6 == 92)
				{
					return 0;
				}
				if (func_31(8))
				{
					return 0;
				}
			}
			if (func_65() == 0)
			{
				return 0;
			}
			return 1;
		case 17:
			if (func_21(56))
			{
				return 0;
			}
			if (func_38() == 11 || func_38() == 0)
			{
				if (func_66(3) || func_67(3))
				{
					return 0;
				}
			}
			else if (func_66(69) || func_67(69))
			{
				return 0;
			}
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				if (PED::_0xA911EE21EDF69DAF(Global_1935630->f_40))
				{
					return 0;
				}
			}
			else
			{
				return 0;
			}
			return 1;
		case 18:
			if (func_41(2))
			{
				return 0;
			}
			return 1;
		case 91:
			if (func_17(75) <= 0)
			{
				return 0;
			}
			return 1;
		case 92:
			switch (func_38())
			{
				case 11:
					if (func_41(2) || func_42(2))
					{
						return 0;
					}
					if (func_68(30))
					{
						return 0;
					}
					return 1;
				case 1:
				case 3:
				case 9:
					if (func_41(0))
					{
						return 0;
					}
					return 1;
			}
			return 1;
		case 20:
			if (func_46(13))
			{
				return 0;
			}
			return 1;
		case 23:
			if (func_69() == 0)
			{
				return 1;
			}
			return 0;
		case 94:
			iVar7 = func_23();
			switch (iVar7)
			{
				case 26:
				case 76:
					if (func_41(0))
					{
						return 0;
					}
					if (!func_70(76, 2048))
					{
						return 0;
					}
					if (func_11(99))
					{
						return 0;
					}
					break;
				case 5:
				case 105:
					if (func_11(96))
					{
						return 0;
					}
					if (func_11(77))
					{
						return 0;
					}
					break;
			}
			return 1;
		case 119:
			if (!func_43(152))
			{
				return 0;
			}
			if (func_71())
			{
				return 0;
			}
			if (func_72(iVar0))
			{
				return 1;
			}
			break;
		case 27:
			if (!PED::IS_PED_ON_MOUNT(Global_35))
			{
				return 0;
			}
			else
			{
				if (func_53(27, 0) == 3)
				{
					return 0;
				}
				if (func_53(27, 1) == 3)
				{
					return 0;
				}
				if (func_53(27, 2) == 3)
				{
					return 0;
				}
				if (func_52(27, 0) >= 3)
				{
					return 0;
				}
				if (func_52(27, 1) >= 3)
				{
					return 0;
				}
				if (func_52(27, 2) >= 3)
				{
					return 0;
				}
				if (ATTRIBUTE::GET_ATTRIBUTE_RANK(PED::GET_MOUNT(Global_35), 4) < 2 && ATTRIBUTE::GET_ATTRIBUTE_RANK(PED::GET_MOUNT(Global_35), 5) < 2)
				{
					return 0;
				}
				if (func_73(7) < 3)
				{
					return 0;
				}
				if (func_38() == 3 || func_38() == 6)
				{
					if (func_45(56) && !func_45(60))
					{
						return 0;
					}
				}
				if (func_38() == 11)
				{
					if (func_45(26) && !func_45(28))
					{
						return 0;
					}
				}
				return 1;
			}
			break;
		case 95:
			if (func_41(2))
			{
				return 0;
			}
			return 1;
		case 30:
			switch (func_38())
			{
				case 0:
				case 2:
					if (func_67(5) || func_66(5))
					{
						return 0;
					}
					if (func_45(44))
					{
						if (!func_45(45) && !func_43(24))
						{
							if (func_39(30, 2) == 0 && func_39(30, 0) == 0)
							{
								return 0;
							}
						}
					}
					if (func_74(0, 39))
					{
						return 0;
					}
					if (func_75(0))
					{
						return 0;
					}
					if (func_76(39))
					{
						return 0;
					}
					if (func_77(0, 39, &uVar8))
					{
						return 0;
					}
					return 1;
			}
			return 1;
		case 32:
			if (func_19(34) > 0 && func_19(33) > 0)
			{
				if (func_19(32) == 0)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else
			{
				return 0;
			}
			break;
		case 33:
			if (func_51(33, 0) == 16)
			{
				return 0;
			}
			else if (func_38() == 1 && func_78(Global_35, -1374.053f, -741.9763f, 90.7132f, 1) < 200f)
			{
				if (func_61(49, 0))
				{
					return 0;
				}
				if (func_61(101, 0))
				{
					return 0;
				}
			}
			else
			{
				return 1;
			}
			return 1;
		case 34:
			if (func_19(33) > 0)
			{
				if (func_19(34) == 0)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else
			{
				return 0;
			}
			break;
		case 37:
			switch (func_79(func_38()))
			{
				case 1:
					if (func_48())
					{
						if (func_52(37, 5) == 1)
						{
							return 0;
						}
					}
					if (func_51(37, 0) == 2)
					{
						return 0;
					}
					break;
				case 3:
					if (func_48())
					{
						if (func_52(37, 6) == 1)
						{
							return 0;
						}
					}
					if (func_51(37, 1) == 2)
					{
						return 0;
					}
					break;
			}
			return 1;
		case 97:
			if (func_38() == 1 && func_46(11))
			{
				return 0;
			}
			if (func_38() == 9 && !func_80(0))
			{
				return 0;
			}
			return 1;
		case 98:
			if (func_23() == 76 && func_52(98, 1) == 1)
			{
				return 0;
			}
			if (func_23() == 92)
			{
				if (func_61(82, 0) || func_61(83, 0))
				{
					return 0;
				}
			}
			return 1;
		case 39:
			if (func_66(26) || func_67(26))
			{
				return 0;
			}
			return 1;
		case 28:
			if (func_45(22) && !func_45(27))
			{
				if (func_81(-1063.709f, -520.2658f, 82.0255f, 1) < 110f || func_81(-815.6782f, -520.9415f, 45.4979f, 1) < 110f)
				{
					return 0;
				}
			}
			if (func_38() == 0 || func_38() == 11)
			{
				if (((*Global_1888801)[0 /*35*/])->f_1 > 0)
				{
					if (((*Global_1888801)[0 /*35*/])->f_1 + 900000) > MISC::GET_GAME_TIMER()
					{
						return 0;
					}
				}
			}
			if (func_38() == 1)
			{
				if (((*Global_1888801)[17 /*35*/])->f_1 > 0)
				{
					if (((*Global_1888801)[17 /*35*/])->f_1 + 900000) > MISC::GET_GAME_TIMER()
					{
						return 0;
					}
				}
				if (!func_48())
				{
					return 0;
				}
			}
			return 1;
		case 40:
			if (func_82())
			{
				if (func_83(func_38(), 1, 0) != 0)
				{
					return 1;
				}
			}
			break;
		case 42:
			if (func_51(42, 0) == 2 || func_51(42, 1) == 2)
			{
				return 0;
			}
			if (func_19(42) >= 2)
			{
				return 0;
			}
			return 1;
		case 77:
			if (func_11(94))
			{
				return 0;
			}
			return 1;
		case 96:
			if (func_11(94))
			{
				return 0;
			}
			return 1;
		case 99:
			if (func_17(99) >= 2)
			{
				return 0;
			}
			if (func_11(94))
			{
				return 0;
			}
			return 1;
		case 100:
			switch (func_38())
			{
				case 1:
					if (func_51(100, 1) != 1 && func_48())
					{
						return 1;
					}
					break;
				case 0:
				case 11:
					return 0;
			}
			return 0;
		case 44:
			if (func_11(57))
			{
				return 0;
			}
			switch (func_38())
			{
				case 1:
				case 3:
				case 9:
					if (func_41(0) || func_48())
					{
						return 0;
					}
					break;
				case 11:
					if (func_41(2) || func_42(2))
					{
						return 0;
					}
					else if (func_81(1624.51f, -1818.45f, 49.6045f, 1) < 225f)
					{
						if (SCRIPTS::HAS_SCRIPT_LOADED("gang_enc_lemoyne_church") || !func_84(65536, 2))
						{
							return 0;
						}
					}
					break;
			}
			return 1;
		case 101:
			if (func_41(2))
			{
				return 0;
			}
			if (func_85(92, 65536) || func_37(92))
			{
				return 1;
			}
			return 0;
		case 102:
			switch (func_23())
			{
				case 76:
					if (func_51(102, 1) == 1 && func_51(102, 2) == 1)
					{
						return 0;
					}
					break;
				case 26:
					if (func_51(102, 0) == 1)
					{
						return 0;
					}
					break;
			}
			return 1;
		case 103:
			if (func_19(103) >= 2)
			{
				return 0;
			}
			if (func_23() == 5)
			{
				if (!func_86(6, -1))
				{
					return 0;
				}
				if (func_78(Global_35, 2720.815f, -1283.54f, 48.638f, 1) < func_78(Global_35, 2551.768f, -1173.668f, 52.683f, 1))
				{
					if (func_61(77, 0))
					{
						return 0;
					}
				}
			}
			else if (func_23() == 92)
			{
				if (func_61(143, 0))
				{
					return 0;
				}
			}
			return 1;
		case 45:
			if (func_38() == 9)
			{
				if (func_51(45, 0) == 2)
				{
					return 0;
				}
			}
			else if (func_38() == 11)
			{
				if (func_48())
				{
					if (func_52(45, 4) == 1)
					{
						return 0;
					}
				}
				if (func_51(45, 2) == 2)
				{
					return 0;
				}
			}
			return 1;
		case 46:
			if (func_19(46) >= 4 || func_52(46, 0) == 1)
			{
				return 0;
			}
			else if (func_87() == 1 || (func_87() == 3 && func_88()))
			{
				return 1;
			}
			break;
		case 48:
			return 1;
		case 49:
			if (!PED::IS_PED_ON_MOUNT(Global_35))
			{
				return 0;
			}
			if (!func_89(2, 0, 0))
			{
				return 0;
			}
			if (!func_89(3, 0, 0))
			{
				return 0;
			}
			iVar9 = MISC::GET_GAME_TIMER();
			if ((iVar9 - Global_1357549->f_1484) >= 300000)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 50:
			if (func_90())
			{
				return 0;
			}
			if (func_92(func_91(func_38())) > 0)
			{
				return 0;
			}
			switch (Global_1393447->f_49)
			{
				case 3:
				case 4:
				case 5:
				case 6:
				case 35:
				case 38:
				case 42:
					return 0;
			}
			if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(910719791) > 0)
			{
				return 0;
			}
			return 1;
		case 106:
			if (func_23() == 76)
			{
				if (func_61(26, 0) || func_61(27, 0))
				{
					if (func_61(117, 0) || func_61(118, 0))
					{
						return 0;
					}
				}
				if (func_92(1) > 0)
				{
					return 0;
				}
				if (func_46(7))
				{
					return 0;
				}
				if (func_51(106, 1) != 7)
				{
					return 1;
				}
				if (func_51(87, 0) == 3 && func_51(106, 3) != 7)
				{
					return 1;
				}
				if (func_51(84, 0) == 3 || func_51(84, 1) == 3)
				{
					if (func_51(106, 4) != 7)
					{
						if (!func_48())
						{
							return 1;
						}
					}
				}
			}
			else if (func_23() == 105)
			{
				if (func_92(2) > 0)
				{
					return 0;
				}
				if (func_51(87, 0) == 3 && func_51(106, 3) != 7)
				{
					return 1;
				}
				else if (func_51(87, 0) != 3)
				{
				}
				else if (func_51(106, 3) == 7)
				{
				}
				if ((func_43(13) && func_51(106, 5) == 3) && func_51(106, 5) != 7)
				{
					if (func_93(106, 5))
					{
						return 1;
					}
				}
			}
			else if (func_23() == 5)
			{
				if (func_92(2) > 0)
				{
					return 0;
				}
				if (func_43(12))
				{
					if (func_51(106, 6) == 3)
					{
						if (func_51(106, 6) != 7)
						{
							if (func_93(106, 6))
							{
								return 1;
							}
						}
					}
				}
				if (func_51(30, 3) == 3 && func_51(106, 7) != 7)
				{
					if (func_93(106, 7))
					{
						return 1;
					}
				}
			}
			else if (func_23() == 38)
			{
				if (func_92(3) > 0)
				{
					return 0;
				}
				if ((func_43(18) && func_51(106, 0) == 3) && func_51(106, 0) != 7)
				{
					return 1;
				}
				if ((func_43(17) && func_51(106, 8) == 3) && func_51(106, 8) != 7)
				{
					return 1;
				}
			}
			return 0;
		case 107:
			if (((func_61(77, 0) || func_61(106, 0)) || func_21(45)) || func_21(47))
			{
				return 0;
			}
			return 1;
		case 51:
			if (func_41(2) || func_42(2))
			{
				return 0;
			}
			return 1;
		case 108:
			if (func_23() == 76)
			{
				if (func_94(108, 2097152) > 0 && (func_41(0) || func_42(0)))
				{
					return 0;
				}
				if (func_58(76, 1, 0))
				{
					return 0;
				}
				if (func_60(func_59(76), 557524588, 1))
				{
					return 0;
				}
			}
			return 1;
		case 57:
			if (func_11(44))
			{
				return 0;
			}
			if (iVar0 == -1)
			{
				return 0;
			}
			if (func_95(iVar0))
			{
				return 0;
			}
			if (!func_96(24))
			{
				return 0;
			}
			return 1;
		case 109:
			switch (func_38())
			{
				case 1:
					if (func_52(109, 0) == 1)
					{
						return 0;
					}
					break;
				case 10:
					if (func_52(109, 0) == 1 && func_52(109, 1) == 1)
					{
						return 0;
					}
					break;
				case 11:
					if (func_52(109, 1) == 1)
					{
						return 0;
					}
					break;
			}
			return 1;
		case 58:
			if ((func_61(119, 0) || func_68(119)) && func_81(-1006.029f, 458.253f, 55.49393f, 1) < 200f)
			{
				return 0;
			}
			else if (!func_48() && func_19(58) >= 1)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		case 110:
			if (func_61(77, 0))
			{
				return 0;
			}
			if (func_21(47))
			{
				return 0;
			}
			if (func_66(5))
			{
				return 0;
			}
			if (func_58(5, 1, 0))
			{
				return 0;
			}
			if (!func_48())
			{
				if (func_45(31))
				{
					return 1;
				}
			}
			else if (func_45(73))
			{
				return 1;
			}
			return 0;
		case 60:
			if (iParam0 == 60)
			{
				switch (func_79(func_38()))
				{
					case 1:
						if (func_52(60, 0) < 2)
						{
							return 1;
						}
						break;
					case 0:
						if (func_52(60, 1) < 3)
						{
							return 1;
						}
						break;
					case 4:
						if (func_52(60, 2) < 2)
						{
							return 1;
						}
						break;
				}
			}
			break;
		case 61:
			if (func_19(46) >= 2 || func_52(46, 0) == 1)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		case 59:
			if (!func_98(Global_35, Global_1900383[func_97(7) /*45*/], 0))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		case 62:
			switch (func_99())
			{
				case 1:
					if (func_52(62, 0) == 1)
					{
						return 0;
					}
					break;
				case 0:
				case 2:
					if (func_52(62, 1) == 1)
					{
						return 0;
					}
					break;
			}
			return 1;
		case 111:
			switch (func_38())
			{
				case 9:
					if (func_58(76, 1, 0))
					{
						return 0;
					}
					else if (func_100(14))
					{
						return 0;
					}
					else if (func_45(71) && func_61(10, 0))
					{
						return 0;
					}
					return 1;
				case 4:
					if (!func_43(9))
					{
						return 0;
					}
					if (func_46(72))
					{
						return 0;
					}
					if (func_46(70))
					{
						return 0;
					}
					if (func_46(75))
					{
						return 0;
					}
					if (!func_89(4, 0, 0))
					{
						return 0;
					}
					iVar10 = MISC::GET_GAME_TIMER();
					if ((iVar10 - Global_1357549->f_1484) >= 300000)
					{
						return 1;
					}
					else
					{
						return 0;
					}
					return 1;
				default:
					return 1;
			}
			break;
		case 112:
			if (func_101(14, 4096))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		case 67:
			if (func_19(67) >= 2)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		case 113:
			if (!func_103(func_102()))
			{
				switch (func_23())
				{
					case 105:
						if (func_52(113, 3) != 2 && !Global_1326862->f_611)
						{
							Global_1326862->f_611 = 1;
							return 1;
						}
						else
						{
							Global_1326862->f_611 = 0;
							return 0;
						}
						break;
					case 38:
						if (func_43(17) && func_52(113, 4) != 3)
						{
							if (!Global_1326862->f_612)
							{
								func_105(113, 4, func_104());
								Global_1326862->f_612 = 1;
							}
							if (Global_1326862->f_612)
							{
								if (func_54(113, 4, 7, 0))
								{
									func_106(113, 4, 3);
									return 0;
								}
								else if (!func_37(113))
								{
									if (func_51(106, 8) == 3)
									{
										if (func_51(106, 8) == 7)
										{
											Global_1326862->f_612 = 0;
											return 1;
										}
										else
										{
											return 0;
										}
									}
									else
									{
										Global_1326862->f_612 = 0;
										return 1;
									}
								}
							}
						}
						else if (func_43(18) && func_52(113, 4) != 4)
						{
							if (!Global_1326862->f_613)
							{
								func_105(113, 4, func_104());
								Global_1326862->f_613 = 1;
							}
							if (Global_1326862->f_613)
							{
								if (func_54(113, 4, 7, 0))
								{
									func_106(113, 4, 4);
									return 0;
								}
								else if (!func_37(113))
								{
									if (func_51(106, 0) == 3)
									{
										if (func_51(106, 0) == 7)
										{
											Global_1326862->f_613 = 0;
											return 1;
										}
										else
										{
											return 0;
										}
									}
									else
									{
										Global_1326862->f_613 = 0;
										return 1;
									}
								}
							}
						}
						else
						{
							return 0;
						}
						break;
				}
			}
			else
			{
				return 0;
			}
			break;
		case 114:
			if (func_107())
			{
				return 1;
			}
			return 0;
		case 116:
			if (func_108(&uVar1))
			{
				return 0;
			}
			if (func_23() == 76)
			{
				if (func_109(76) >= 10)
				{
					if (!Global_1326862->f_614)
					{
						func_110(116, 1, 0, 0, 0, 1, 0, 1);
						func_105(116, 1, func_104());
						Global_1326862->f_614 = 1;
					}
					else if (func_54(116, 1, 8, 0))
					{
						return 0;
					}
					else if (!func_37(116))
					{
						return 1;
					}
				}
				else
				{
					return 0;
				}
			}
			if (func_23() == 105)
			{
				if (func_109(105) >= 10)
				{
					if (!Global_1326862->f_615)
					{
						func_110(116, 1, 0, 0, 0, 1, 0, 1);
						func_105(116, 2, func_104());
						Global_1326862->f_615 = 1;
					}
					else if (func_54(116, 2, 8, 0))
					{
						return 0;
					}
					else if (!func_37(116))
					{
						return 1;
					}
				}
				else
				{
					return 0;
				}
			}
			if (func_23() == 78)
			{
				if (func_109(78) >= 10)
				{
					if (!Global_1326862->f_616)
					{
						func_110(116, 1, 0, 0, 0, 1, 0, 1);
						func_105(116, 3, func_104());
						Global_1326862->f_616 = 1;
					}
					else if (func_54(116, 3, 8, 0))
					{
						return 0;
					}
					else if (!func_37(116))
					{
						return 1;
					}
				}
				else
				{
					return 0;
				}
			}
			break;
		case 117:
			if (func_17(75) <= 0)
			{
				return 0;
			}
			return 1;
		case 115:
			if (func_51(115, 0) == 3)
			{
				return 0;
			}
			if (func_48())
			{
				if (func_52(115, 4) == 1)
				{
					return 0;
				}
			}
			if (func_94(115, 2097152) >= 2)
			{
				return 0;
			}
			if (func_51(115, 0) == 2)
			{
				return 0;
			}
			return 1;
		case 63:
			switch (func_38())
			{
				case 1:
					if (func_48())
					{
						if (func_41(4))
						{
							return 0;
						}
					}
					else
					{
						return 0;
					}
					break;
			}
			return 1;
		case 64:
			if (Global_1430231->f_4)
			{
				return 0;
			}
			if (func_45(56) && !func_48())
			{
				return 0;
			}
			if ((func_38() == 11 || func_38() == 0) || func_38() == 2)
			{
				if (func_41(2) || func_42(2))
				{
					return 0;
				}
			}
			else if (func_38() == 9)
			{
				if (func_41(0) || func_42(0))
				{
					return 0;
				}
			}
			iVar11 = func_111(Global_36, 0);
			if (func_112(iVar11))
			{
				if (func_113(iVar11, Global_36) <= 400f)
				{
					return 0;
				}
			}
			return 1;
		case 65:
			if (func_38() == 11)
			{
				if (func_45(26))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			break;
		case 66:
			if (!func_43(146))
			{
				return 0;
			}
			if (func_62(1134518629, 1, 0))
			{
				return 0;
			}
			return 1;
		case 105:
			if (func_23() == 38)
			{
				if (func_92(3) > 0)
				{
					return 0;
				}
			}
			else if (func_23() == 5)
			{
				if (func_92(2) > 0)
				{
					return 0;
				}
			}
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				return 0;
			}
			break;
		case 71:
			if (func_38() != 8)
			{
				if (func_114(71, 2) || func_114(71, 1))
				{
					return 0;
				}
			}
			return 1;
		case 118:
			if (func_23() == 38)
			{
				if (!func_43(8))
				{
					return 0;
				}
			}
			return 1;
		case 73:
			if (func_51(73, 0) == 2)
			{
				return 0;
			}
			return 1;
		default:
			break;
	}
	return 0;
}

int func_21(int iParam0)
{
	int iVar0;

	if (!func_115(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_1879534->f_7300)
	{
		if (!MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iVar0 /*4*/]), 2))
		{
			if (MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iVar0 /*4*/]), 1))
			{
				switch (&Global_1879534->f_1911[(Global_1879534->f_7301.f_2[iVar0 /*4*/])->f_1 /*3*/])
				{
					case -2093459088:
						if ((Global_1879534->f_1911[(Global_1879534->f_7301.f_2[iVar0 /*4*/])->f_1 /*3*/])->f_2 == iParam0)
						{
							return 1;
						}
						break;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_22(vector3 vParam0)
{
	float fVar0;

	if (func_116(vParam0))
	{
		return false;
	}
	fVar0 = func_117(func_49(), 6f, 22f);
	return VOLUME::_0x769BB7626B8CDB06(vParam0, fVar0, 1, 0, 16384);
}

int func_23()
{
	return Global_1894899->f_2;
}

bool func_24(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_25()
{
	if (!func_24(&Global_1327479))
	{
		return;
	}
	if (SCRIPTS::DOES_SCRIPT_EXIST(&(((*Global_1310750)[&Global_1327479 /*111*/])->f_40)))
	{
		if (SCRIPTS::HAS_SCRIPT_LOADED(&(((*Global_1310750)[&Global_1327479 /*111*/])->f_40)))
		{
			SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(((*Global_1310750)[&Global_1327479 /*111*/])->f_40));
		}
	}
	func_27(0);
	Global_1327479 = -1;
	Global_1310750->f_16075 = 0;
	Global_1310750->f_16076 = 0;
	Global_1310750->f_16103 = { 0f, 0f, 0f };
}

int func_26(int iParam0, vector3 vParam1)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	while (iVar0 < func_118(iParam0))
	{
		vVar1 = { func_119(iParam0, iVar0) };
		if (func_120(vVar1, vParam1, 1056964608, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_27(int iParam0)
{
	Global_1327479->f_3 = iParam0;
}

void func_28(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = MISC::GET_GAME_TIMER();
	func_121(iParam0, iParam1, bParam2);
}

void func_29(int iParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	iVar0 = 0;
	while (iVar0 < &Global_1911670)
	{
		iVar1 = Global_1911670[iVar0];
		if (VOLUME::_0xF6A8A652A6B186CD(iVar1))
		{
			vVar2 = { VOLUME::_0xC4019CF9AE8E931A(iVar1) };
			if (VOLUME::_0x769BB7626B8CDB06(vVar2, 1f, 0, iParam0, 16384))
			{
				VOLUME::_0xFDFECC6EE4491E11(iVar1);
				(*Global_1911670)[iVar0] = 0;
			}
		}
		iVar0++;
	}
}

void func_30(vector3 vParam0, float fParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < Global_1310750->f_16078)
	{
		iVar1 = &Global_1310750->f_16078[iVar0];
		if (VOLUME::_0xF6A8A652A6B186CD(iVar1))
		{
			if (BUILTIN::VDIST(VOLUME::_0xC4019CF9AE8E931A(iVar1), vParam0) < fParam3)
			{
				VOLUME::_0xFDFECC6EE4491E11(iVar1);
				Global_1310750->f_16078[iVar0] = 0;
				*(Global_17503.f_2084[iVar0 /*5*/]) = { 0f, 0f, 0f };
				(Global_17503.f_2084[iVar0 /*5*/])->f_3 = -1;
				(Global_17503.f_2084[iVar0 /*5*/])->f_4 = 0;
			}
		}
		iVar0++;
	}
}

int func_31(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_3(iParam0))
	{
		return 0;
	}
	iVar0 = func_122(iParam0);
	iVar1 = func_123(iParam0);
	if (!func_124(iVar0))
	{
		return 0;
	}
	if (!func_2(iVar1))
	{
		return 0;
	}
	if (func_23() == iVar0)
	{
		if (func_125(iVar1))
		{
			return 1;
		}
	}
	return 0;
}

int func_32(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (Global_1572887->f_12 != -1)
	{
		if ((iParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1898164->f_163;
		}
		if ((iParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1898164->f_164;
		}
		if (func_126())
		{
			return 1;
		}
		if (Global_1058888->f_3 && !Global_1572887->f_8)
		{
			if (((*Global_1055058)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*116*/])->f_114 && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
			{
				return 1;
			}
		}
	}
	else if (iParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1898164->f_163;
		}
		else
		{
			return Global_1898164->f_164;
		}
	}
	if ((Global_1898164->f_1[0 /*5*/])->f_2 == 8)
	{
		iVar0 = func_127(&(Global_1898164->f_1[0 /*5*/]));
		if (func_128(iVar0) && func_129(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_130(&(Global_1898164->f_1[0 /*5*/])))
	{
		return 1;
	}
	if ((Global_1935630 && 40959 & (-1 - iParam0)) != 0)
	{
		return 1;
	}
	if (!bParam1)
	{
		if ((MISC::GET_GAME_TIMER() - 5000) < &Global_1898438)
		{
			return 1;
		}
	}
	switch ((Global_1898164->f_1[0 /*5*/])->f_2)
	{
		case 0:
			return 0;
		case 1:
			return iParam0 & 1 == 0;
		case 4:
			return iParam0 & 2 == 0;
		case 6:
			return iParam0 & 4 == 0;
		case 2:
			return iParam0 & 16 == 0;
		case 5:
			return iParam0 & 32 == 0;
		case 9:
			return iParam0 & 64 == 0;
		case 8:
			return iParam0 & 8 == 0;
		case 10:
			return iParam0 & 512 == 0;
		case 3:
			return iParam0 & 128 == 0;
		case 11:
			return iParam0 & 256 == 0;
		default:
			break;
	}
	return 0;
}

bool func_33()
{
	return Global_1898164->f_163;
}

bool func_34()
{
	return Global_1310750->f_16077 != 0;
}

bool func_35(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_36(int iParam0)
{
	if (func_131(iParam0, 2048))
	{
		return true;
	}
	if (func_131(iParam0, 4096))
	{
		return Global_1327479->f_5 < MISC::GET_GAME_TIMER();
	}
	return Global_1327479->f_4 < MISC::GET_GAME_TIMER();
}

bool func_37(int iParam0)
{
	if (!func_24(iParam0))
	{
		return true;
	}
	return (Global_17503.f_42[iParam0 /*8*/])->f_4 > 0;
}

int func_38()
{
	return Global_1897952->f_41;
}

int func_39(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 != -1)
	{
		iVar0 = func_132(iParam0, iParam1);
		if (iVar0 == -1)
		{
			return 0;
		}
		return (Global_17503.f_2205[iVar0 /*2*/])->f_1;
	}
	return 0;
}

int func_40()
{
	if (func_133() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == joaat("player_zero"))
	{
		return 1;
	}
	return 0;
}

bool func_41(int iParam0)
{
	if (!func_134(iParam0, 0))
	{
		return false;
	}
	return (Global_40.f_9571[iParam0 /*10*/])->f_1 == 5;
}

bool func_42(int iParam0)
{
	if (!func_134(iParam0, 0))
	{
		return false;
	}
	return (Global_40.f_9571[iParam0 /*10*/])->f_1 == 4;
}

int func_43(int iParam0)
{
	if (func_133() != -1)
	{
		return 0;
	}
	if (!func_128(iParam0))
	{
		return 0;
	}
	return func_135(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
}

int func_44(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 1;
	}
	if (iVar0 || iParam1 == 0)
	{
		if (func_133() != -1)
		{
			return 0;
		}
		if (func_32(0, 1, 1))
		{
			return 0;
		}
		if (!func_136(0))
		{
			return 0;
		}
		if (!func_137())
		{
			return 0;
		}
		if (func_70(iParam0, 2097152))
		{
			return 0;
		}
	}
	if (iVar0 || iParam1 == 1)
	{
		if (iParam0 == 38)
		{
			if (!func_48())
			{
				return 0;
			}
		}
		else if (iParam0 == 76)
		{
			if (func_45(14) && !func_45(17))
			{
				return 0;
			}
			if (Global_1392235->f_2)
			{
				return 0;
			}
		}
		else if (iParam0 == 26)
		{
			if (!func_45(11))
			{
				return 0;
			}
		}
		else if (iParam0 == 105)
		{
			if (!func_45(27))
			{
				return 0;
			}
			else if (func_61(31, 0))
			{
				return 0;
			}
		}
		else if (iParam0 == 5)
		{
			if (func_61(130, 0))
			{
				return 0;
			}
		}
		else if (iParam0 == 115 && iParam2)
		{
			if (!func_138())
			{
				return 0;
			}
		}
		if (func_48() && !func_45(69))
		{
			return 0;
		}
		if (func_139(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			return 0;
		}
		if (func_70(iParam0, 33554432))
		{
			return 0;
		}
		if (func_67(iParam0))
		{
			return 0;
		}
	}
	if (iVar0 || iParam1 == 2)
	{
		if ((((((((((((func_61(11, 0) || func_61(12, 0)) || func_61(13, 0)) || func_61(153, 0)) || func_61(14, 0)) || func_61(154, 0)) || func_61(15, 0)) || func_61(16, 0)) || func_61(17, 0)) || func_61(18, 0)) || func_61(155, 0)) || func_61(19, 0)) || func_61(20, 0))
		{
			return 0;
		}
		if (func_140(iParam0) == -1)
		{
			return 0;
		}
		if (!func_141(iParam0))
		{
			return 0;
		}
		if (Global_1392235->f_4)
		{
			return 0;
		}
	}
	return 1;
}

bool func_45(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_135(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
	}
	return (UNLOCK::_UNLOCK_IS_UNLOCKED(((*Global_1835011)[iParam0 /*74*/])->f_2) && !UNLOCK::_UNLOCK_IS_VISIBLE(((*Global_1835011)[iParam0 /*74*/])->f_2));
}

int func_46(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_142(((*Global_1835011)[iParam0 /*74*/])->f_1);
}

int func_47(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_0x865F36299079FB75(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_48()
{
	if (func_133() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == 11966224)
	{
		return 1;
	}
	return 0;
}

bool func_49()
{
	return (Global_1894899 & 1 != 0 && func_23() != -1);
}

bool func_50()
{
	return Global_1894899 & 4 != 0;
}

int func_51(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 != -1)
	{
		iVar0 = func_52(iParam0, iParam1);
	}
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return 0;
}

int func_52(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_143(iParam0, iParam1);
	if (iVar0 != -1)
	{
		return (Global_17503.f_1003[iVar0 /*6*/])->f_1;
	}
	return 0;
}

int func_53(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_143(iParam0, iParam1);
	if (iVar0 != -1)
	{
		return (Global_17503.f_1003[iVar0 /*6*/])->f_2;
	}
	return 0;
}

int func_54(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;

	iVar0 = func_104();
	iVar1 = func_144(iParam0, iParam1);
	func_145(iVar0, iVar1, &uVar2, &uVar3, &iVar4, &iVar5, &uVar6, &uVar7);
	if (iVar5 >= iParam2 && iParam2 > 0)
	{
		return 1;
	}
	if (iVar4 > iParam3 && iParam3 > 0)
	{
		return 1;
	}
	return 0;
}

int func_55()
{
	int iVar0;
	int iVar1;
	var uVar2;

	switch (func_23())
	{
		case 76:
			iVar0 = 75;
			iVar1 = 6;
			break;
		case 26:
			iVar0 = 61;
			iVar1 = 3;
			break;
		case 78:
			iVar0 = 0;
			iVar1 = 6;
			break;
		case 105:
			iVar0 = 28;
			iVar1 = 3;
			break;
	}
	if (!func_86(iVar1, -1))
	{
		return 0;
	}
	if (func_76(iVar0))
	{
		return 0;
	}
	if (!func_146(iVar0))
	{
		return 0;
	}
	if (func_74(iVar1, iVar0))
	{
		return 0;
	}
	if (func_75(iVar1))
	{
		return 0;
	}
	if (func_76(iVar0))
	{
		return 0;
	}
	if (func_77(iVar1, iVar0, &uVar2))
	{
		return 0;
	}
	return 1;
}

int func_56(int iParam0)
{
	if (func_48())
	{
		return 0;
	}
	return func_135(((*Global_1347702)[58 /*49*/])->f_15, 1);
}

int func_57()
{
	if (func_52(83, 0) == 1)
	{
		return 1;
	}
	return 0;
}

int func_58(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_59(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (func_60(iVar0, -423064657, 1))
	{
		return 1;
	}
	if (bParam1)
	{
		switch (iParam2)
		{
			case 0:
			case 2:
				if (func_60(iVar0, 557524588, 1) || func_60(iVar0, 1590600971, 1))
				{
					return 1;
				}
				break;
			case 1:
				if (func_60(iVar0, 1792646445, 1) || func_60(iVar0, 1590600971, 1))
				{
					return 1;
				}
				break;
		}
	}
	return 0;
}

int func_59(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			return 0;
		case 120:
			return 1;
		case 38:
			return 2;
		case 93:
			return 3;
		case 82:
			return 4;
		case 65:
			return 5;
		case 3:
			return 6;
		case 110:
			return 7;
		case 105:
			return 8;
		case 5:
			return 9;
		case 26:
			return 10;
		case 75:
			return 11;
		case 115:
			return 12;
		case 76:
			return 13;
		case 92:
			return 14;
		case 56:
			return 15;
		default:
			break;
	}
	return -1;
}

int func_60(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_147(iParam0))
	{
		return 0;
	}
	if (!func_148(iParam1))
	{
		return 0;
	}
	if (bParam2)
	{
		return func_149(iParam0, iParam1);
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/] == iParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_61(int iParam0, bool bParam1)
{
	int iVar0;

	if (func_133() != -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_40.f_1094 - 1))
	{
		if (&Global_40.f_450[iVar0] == iParam0)
		{
			if (!bParam1 || ((*Global_1347702)[iVar0 /*49*/])->f_13 & 16384 == 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_62(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_150(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_151(iParam0);
	if (iVar0 == -427144552)
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (iVar0 == 307971639)
	{
		if (!func_152(iParam0, 1))
		{
			return false;
		}
	}
	return func_153(iParam0, 0, bParam2) >= iParam1;
}

Vector3 func_63(int iParam0)
{
	if (!func_154(iParam0))
	{
		return 0f, 0f, 0f;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(func_155(iParam0)))
	{
		return 0f, 0f, 0f;
	}
	return _NAMESPACE48::_0x5EE6FCCC9C832CA2(func_155(iParam0));
}

int func_64(vector3 vParam0, bool bParam3)
{
	int iVar0;

	iVar0 = func_23();
	if (func_124(iVar0))
	{
		if (VOLUME::_0xF256A75210C5C0EB(((*Global_1888801)[iVar0 /*35*/])->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_156(vParam0, bParam3);
}

int func_65()
{
	int iVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false);
	if (!func_157(&iVar0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 3, false);
	}
	if (!func_157(&iVar0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false);
	}
	if (!func_157(&iVar0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 1, false);
	}
	if (!func_157(&iVar0))
	{
		iVar0 = 0;
	}
	if (!func_157(&iVar0))
	{
		iVar0 = func_158(131200, 0);
	}
	if (!func_157(&iVar0))
	{
		return 0;
	}
	return 1;
}

int func_66(int iParam0)
{
	if (!func_124(iParam0))
	{
		return 0;
	}
	return func_70(iParam0, 33554432);
}

int func_67(int iParam0)
{
	if (!func_124(iParam0))
	{
		return 0;
	}
	return func_70(iParam0, 67108864);
}

int func_68(int iParam0)
{
	if (func_133() != -1)
	{
		return 0;
	}
	if (!func_128(iParam0))
	{
		return 0;
	}
	return func_159(((*Global_1347702)[iParam0 /*49*/])->f_15);
}

int func_69()
{
	int iVar0;
	float fVar1;

	if ((func_33() || PED::_0xA911EE21EDF69DAF(Global_35)) || func_139(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		return 1;
	}
	iVar0 = 5400;
	if (func_21(26))
	{
		iVar0 = 600;
	}
	else if (func_61(68, 1))
	{
		iVar0 = 2400;
	}
	else if (func_21(57))
	{
		iVar0 = 1800;
	}
	if (Global_1359489->f_61 >= 3)
	{
		return 2;
	}
	else if (func_160(&(Global_1359489->f_55)) < IntToFloat(iVar0))
	{
		return 3;
	}
	else if (MISC::GET_GAME_TIMER() < Global_1359489->f_60)
	{
		return 4;
	}
	else if (!func_161())
	{
		return 5;
	}
	else if (!func_45(5))
	{
		return 6;
	}
	else
	{
		fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), func_163(func_162()));
		if (fVar1 <= 750f)
		{
			return 7;
		}
		return 0;
	}
	return -1;
}

bool func_70(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23117[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0 /*11*/] && iParam1) != 0;
}

bool func_71()
{
	return func_164(7);
}

bool func_72(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 1:
		case 6:
		case 12:
			iVar0 = 19;
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			iVar0 = 40;
			break;
		default:
			iVar0 = func_165(iParam0, 0, 0, 119, 0);
			break;
	}
	return iVar0 != 0;
}

int func_73(int iParam0)
{
	iParam0 = func_97(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_372;
}

int func_74(int iParam0, int iParam1)
{
	if (!func_166(iParam0))
	{
		return 0;
	}
	if (func_167(iParam1))
	{
		return 0;
	}
	return func_168((Global_1914319->f_3[iParam0 /*446*/])->f_10, 1024);
}

int func_75(int iParam0)
{
	if (!func_166(iParam0))
	{
		return 0;
	}
	if (func_169(iParam0, 64))
	{
		return 1;
	}
	return 0;
}

int func_76(int iParam0)
{
	if (func_168(iParam0, 32768) || func_168(iParam0, 16384))
	{
		return 1;
	}
	return 0;
}

int func_77(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(Global_35) && !ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (func_139(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			*uParam2 = 1;
			return 1;
		}
	}
	if (func_168(iParam1, 1048576))
	{
		*uParam2 = 4;
		return 1;
	}
	if (func_8(&Global_1935630, 2097152))
	{
		*uParam2 = 4;
		return 1;
	}
	if (func_74(iParam0, iParam1))
	{
		*uParam2 = 3;
		return 1;
	}
	if (func_170(iParam1) == 105 && func_46(21))
	{
		*uParam2 = 4;
		return 1;
	}
	if (func_171(iParam0, &iVar0))
	{
		if (!func_172(iParam1))
		{
			if (Global_1393529->f_3 == iVar0 && func_173(Global_1393529->f_3, 0, &(Global_1393529->f_256), &(Global_1393529->f_284), 0, 0))
			{
				*uParam2 = 5;
				return 1;
			}
			if (!func_174(iParam0))
			{
				*uParam2 = 6;
				return 1;
			}
			if (PED::IS_PED_FLEEING(iVar0))
			{
				*uParam2 = 6;
				return 1;
			}
			if (TASK::GET_IS_TASK_ACTIVE(iVar0, 0))
			{
				*uParam2 = 7;
				return 1;
			}
		}
	}
	else if (func_166(iParam0))
	{
		if (func_154((Global_1914319->f_3[iParam0 /*446*/])->f_21))
		{
			iVar1 = func_155((Global_1914319->f_3[iParam0 /*446*/])->f_21);
			if (iVar1 != 0 && !_NAMESPACE48::_0x4AFC7288C77238B3(iVar1))
			{
				*uParam2 = 6;
				return 1;
			}
		}
	}
	return 0;
}

float func_78(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

int func_79(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 11:
			return 3;
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			return 0;
		case 3:
		case 10:
			return 2;
		case 4:
		case 9:
			return 1;
		case 8:
			return 4;
		case 13:
		case 14:
		case 15:
		case 16:
			return 5;
		default:
			break;
	}
	return -1;
}

int func_80(int iParam0)
{
	if (!func_175(iParam0))
	{
		return 1;
	}
	return func_135(((*Global_1392626)[iParam0 /*32*/])->f_3, 1);
}

float func_81(vector3 vParam0, bool bParam3)
{
	return func_78(Global_35, vParam0, bParam3);
}

int func_82()
{
	switch (func_38())
	{
		case 1:
		case 4:
		case 5:
		case 6:
		case 7:
		case 9:
		case 12:
			if (func_51(40, 0) == 9 || func_51(40, 8) == 16)
			{
				return 0;
			}
			break;
		case 0:
		case 2:
		case 3:
		case 10:
		case 11:
			if (func_51(40, 1) == 9 || func_51(40, 9) == 16)
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_83(int iParam0, bool bParam1, int iParam2)
{
	int iVar0[3];

	iVar0[0] = 0;
	iVar0[1] = 0;
	iVar0[2] = 0;
	switch (iParam0)
	{
		case 1:
			iVar0[0] = 20;
			iVar0[1] = 3;
			break;
		case 5:
			iVar0[0] = 20;
			iVar0[1] = 3;
			break;
		case 12:
			iVar0[0] = 20;
			iVar0[1] = 3;
			break;
		case 9:
			iVar0[0] = 20;
			iVar0[1] = 3;
			break;
		case 4:
			iVar0[0] = 20;
			iVar0[1] = 3;
			break;
		case 11:
			iVar0[0] = 20;
			iVar0[1] = 5;
			break;
		case 0:
			iVar0[0] = 23;
			iVar0[1] = 26;
			iVar0[2] = 5;
			break;
		case 2:
			iVar0[0] = 23;
			iVar0[1] = 26;
			iVar0[2] = 5;
			break;
		case 3:
			iVar0[0] = 20;
			iVar0[1] = 3;
			iVar0[2] = 5;
			break;
		case 10:
			iVar0[0] = 23;
			iVar0[1] = 26;
			iVar0[2] = 5;
			break;
	}
	if (bParam1)
	{
		if (!func_176(&(iVar0[0])) && &iVar0[0] != iParam2)
		{
			return &(iVar0[0]);
		}
		else if (!func_176(&(iVar0[1])) && &iVar0[1] != iParam2)
		{
			return &(iVar0[1]);
		}
		else if (!func_176(&(iVar0[2])) && &iVar0[2] != iParam2)
		{
			return &(iVar0[2]);
		}
	}
	else if (&iVar0[0] != iParam2)
	{
		return &(iVar0[0]);
	}
	else
	{
		return &(iVar0[1]);
	}
	return 0;
}

bool func_84(int iParam0, int iParam1)
{
	return (Global_40.f_9571[iParam1 /*10*/] && iParam0) != 0;
}

bool func_85(int iParam0, int iParam1)
{
	return func_177(iParam0, iParam1) > 0;
}

int func_86(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	if (func_133() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = func_178(func_23(), iParam0);
		}
		iVar1 = MISC::GET_FRAME_COUNT();
		if ((Global_1914319->f_3[iParam0 /*446*/])->f_444 >= iVar1)
		{
			return (Global_1914319->f_3[iParam0 /*446*/])->f_445;
		}
		iVar0 = (func_179(iParam1) || func_181(func_180(iParam0)));
		(Global_1914319->f_3[iParam0 /*446*/])->f_444 = iVar1;
		(Global_1914319->f_3[iParam0 /*446*/])->f_445 = iVar0;
	}
	return iVar0;
}

int func_87()
{
	if (!func_182())
	{
		return -1;
	}
	return Global_1392135->f_3;
}

bool func_88()
{
	return Global_1894899 & 2 != 0;
}

int func_89(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_183(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		return func_184(iParam0, 26, 1);
	}
	if (bParam2)
	{
		if (!func_186(func_185(iParam0), 0))
		{
			return 0;
		}
	}
	if (!func_187(iParam0, 1, 0))
	{
		return 0;
	}
	if (func_184(iParam0, 44, 1))
	{
		return 0;
	}
	return 1;
}

int func_90()
{
	if (Global_1894899->f_187)
	{
		return 1;
	}
	if (func_45(16) && !func_45(21))
	{
		return 1;
	}
	return 0;
}

int func_91(int iParam0)
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

int func_92(int iParam0)
{
	if (!func_188(iParam0))
	{
		return -1;
	}
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_40.f_358[iParam0 /*12*/]);
	}
	return &(Global_1058888->f_42266[iParam0 /*12*/]);
}

int func_93(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		return 0;
	}
	else if (func_48())
	{
		if ((func_189(iParam0, iParam1) == joaat("cs_johnmarston") || iParam1 == 0) || iParam1 == 8)
		{
			return 1;
		}
	}
	else if (func_189(iParam0, iParam1) != joaat("cs_johnmarston"))
	{
		return 1;
	}
	return 0;
}

int func_94(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 != 0)
	{
		iVar0 = func_190(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_132(iParam0, iVar1);
		if (iVar2 == -1)
		{
			return 0;
		}
		return (Global_17503.f_2205[iVar2 /*2*/])->f_1;
	}
	return 0;
}

int func_95(int iParam0)
{
	switch (func_79(iParam0))
	{
		case 3:
			if (func_191(func_53(57, 0), 32))
			{
				return 1;
			}
			break;
		default:
			if (func_191(func_52(57, 0), 32))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_96(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;

	if (func_45(59))
	{
		if (!func_45(67))
		{
			return 0;
		}
	}
	iVar0 = 0;
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = false;
	iVar1 = 0;
	while (iVar1 < 29)
	{
		iVar2 = 0;
		if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar2, false, iVar1, false))
		{
			if (func_192(iVar2))
			{
				if (func_153(iVar2, 1, 0) >= iParam0)
				{
					if (!bVar3)
					{
						if (WEAPON::_0xDDC64F5E31EEDAB6(iVar2))
						{
							bVar3 = true;
							iVar0++;
						}
					}
					if (!bVar4)
					{
						if (WEAPON::_0xC212F1D05A8232BB(iVar2))
						{
							bVar4 = true;
							iVar0++;
						}
					}
					if (!bVar5)
					{
						if (WEAPON::_0xDDB2578E95EF7138(iVar2))
						{
							bVar5 = true;
							iVar0++;
						}
					}
					if (!bVar6)
					{
						if (WEAPON::_0x0A82317B7EBFC420(iVar2) && !WEAPON::_0x6AD66548840472E5(iVar2))
						{
							bVar6 = true;
							iVar0++;
						}
					}
				}
			}
		}
		iVar1++;
	}
	if (iVar0 > 0)
	{
		return 1;
	}
	return 0;
}

int func_97(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_98(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (bParam2)
			{
				return (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iParam0, true) && PED::GET_MOUNT(iParam0) == iParam1);
			}
			else
			{
				return (PED::IS_PED_ON_MOUNT(iParam0) && PED::GET_MOUNT(iParam0) == iParam1);
			}
		}
	}
	return 0;
}

int func_99()
{
	return func_79(func_38());
}

int func_100(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_159(((*Global_1835011)[iParam0 /*74*/])->f_1);
}

bool func_101(int iParam0, int iParam1)
{
	if (!func_193(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0 /*3*/] && iParam1) != 0;
}

int func_102()
{
	var uVar0;
	var uVar1;
	float fVar2;
	var uVar3;

	MISC::_GET_WEATHER_TYPE_TRANSITION(&uVar0, &uVar1, &fVar2);
	if (fVar2 < 0.75f)
	{
		uVar3 = uVar0;
	}
	else
	{
		uVar3 = uVar1;
	}
	return uVar3;
}

int func_103(int iParam0)
{
	switch (iParam0)
	{
		case -1721991356:
		case -1233681761:
		case -416908843:
		case 212278652:
		case 839715153:
		case 1420204096:
		case 1974067816:
		case 2082228755:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_104()
{
	return &Global_1899515;
}

void func_105(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_194(iParam0, iParam1);
	(Global_17503.f_1003[iVar0 /*6*/])->f_5 = iParam2;
}

void func_106(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_194(iParam0, iParam1);
	(Global_17503.f_1003[iVar0 /*6*/])->f_1 = iParam2;
}

int func_107()
{
	var uVar0;

	if (func_108(&uVar0))
	{
		return 0;
	}
	if (!func_48())
	{
		if (func_52(114, 1) != 1)
		{
			if (func_23() == 76)
			{
				if (func_45(5))
				{
					if (func_52(114, 2) != 1)
					{
						func_106(114, 2, 1);
						func_105(114, 0, func_104());
						return 0;
					}
					else if (func_54(114, 0, 1, 0) && !func_54(114, 0, 8, 0))
					{
						return 1;
					}
				}
			}
		}
		if (func_52(114, 2) != 1)
		{
			if (func_23() == 105)
			{
				if (func_45(21))
				{
					if (func_52(114, 2) != 2)
					{
						func_106(114, 2, 2);
						func_105(114, 1, func_104());
						return 0;
					}
					if (func_54(114, 1, 1, 0) && !func_54(114, 1, 8, 0))
					{
						return 1;
					}
				}
			}
		}
		if (func_52(114, 3) != 1)
		{
			if (func_23() == 5)
			{
				if (func_45(34))
				{
					if (func_52(114, 2) != 3)
					{
						func_106(114, 2, 3);
						func_105(114, 2, func_104());
						return 0;
					}
					if (func_54(114, 2, 1, 0) && !func_54(114, 2, 8, 0))
					{
						return 1;
					}
				}
			}
		}
		if (func_52(114, 4) != 1)
		{
			if (func_23() == 92)
			{
				if (func_45(55))
				{
					if (func_52(114, 2) != 4)
					{
						func_106(114, 2, 4);
						func_105(114, 3, func_104());
						return 0;
					}
					if (func_54(114, 3, 1, 0) && !func_54(114, 3, 8, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_108(var uParam0)
{
	if (-1829635046 == func_195(81053684))
	{
		if (func_196(uParam0))
		{
			return 1;
		}
	}
	else if (func_197(-525676072, uParam0))
	{
		if (func_196(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_109(int iParam0)
{
	if (!func_124(iParam0))
	{
		return 0;
	}
	return (Global_23117[iParam0 /*11*/])->f_10;
}

void func_110(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;

	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_198(iParam0) == 1 && iParam7)
	{
		return;
	}
	if (bParam6)
	{
		if ((Global_17503.f_42[iParam0 /*8*/])->f_4 > iVar0)
		{
			return;
		}
	}
	if ((iParam1 || bParam6) || func_133() != -1)
	{
		(Global_17503.f_42[iParam0 /*8*/])->f_4 = 0;
	}
	(Global_17503.f_42[iParam0 /*8*/])->f_4 = ((Global_17503.f_42[iParam0 /*8*/])->f_4 + iVar0);
}

int func_111(vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;

	iVar1 = -1;
	fVar2 = 1E+08f;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (!bParam3 || func_199(iVar0))
		{
			fVar3 = func_113(iVar0, vParam0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_112(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return 0;
	}
	return 1;
}

float func_113(int iParam0, vector3 vParam1)
{
	if (func_200(iParam0))
	{
		return BUILTIN::VDIST(VEHICLE::_0x1E8A921112891651(((*Global_1425371)[iParam0 /*373*/])->f_1), vParam1);
	}
	return 1E+08f;
}

int func_114(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 3:
			return func_201(iParam0, iParam1) >= &((*Global_1310750)[iParam0 /*111*/])->f_64[0];
		case 0:
			return func_201(iParam0, iParam1) >= &((*Global_1310750)[iParam0 /*111*/])->f_64[1];
		case 2:
			return func_201(iParam0, iParam1) >= &((*Global_1310750)[iParam0 /*111*/])->f_64[3];
		case 1:
			return func_201(iParam0, iParam1) >= &((*Global_1310750)[iParam0 /*111*/])->f_64[4];
		case 4:
			return func_201(iParam0, iParam1) >= &((*Global_1310750)[iParam0 /*111*/])->f_64[8];
		case 5:
			return func_201(iParam0, iParam1) >= &((*Global_1310750)[iParam0 /*111*/])->f_64[13];
	}
	return 0;
}

bool func_115(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

int func_116(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

float func_117(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_118(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
		case 1:
			return 12;
		case 2:
			return 23;
		case 3:
			return 6;
		case 4:
			return 17;
		case 5:
			return 1;
		case 6:
			return 3;
		case 7:
			return 23;
		case 8:
			return 1;
		case 9:
			return 8;
		case 10:
			return 2;
		case 11:
			return 4;
		case 12:
			return 18;
		case 13:
			return 12;
		case 14:
			return 7;
		case 15:
			return 21;
		case 16:
			return 19;
		case 17:
			return 12;
		case 18:
			return 7;
		case 19:
			return 1;
		case 20:
			return 17;
		case 21:
			return 3;
		case 22:
			return 1;
		case 23:
			return 17;
		case 24:
			return 14;
		case 27:
			return 11;
		case 28:
			return 5;
		case 29:
			return 8;
		case 30:
			return 38;
		case 31:
			return 20;
		case 32:
			return 10;
		case 33:
			return 13;
		case 34:
			return 11;
		case 35:
			return 2;
		case 36:
			return 12;
		case 37:
			return 20;
		case 38:
			return 1;
		case 39:
			return 1;
		case 40:
			return 12;
		case 41:
			return 3;
		case 42:
			return 1;
		case 43:
			return 27;
		case 44:
			return 9;
		case 45:
			return 15;
		case 46:
			return 2;
		case 47:
			return 2;
		case 48:
			return 9;
		case 49:
			return 7;
		case 50:
			return 36;
		case 51:
			return 5;
		case 53:
			return 3;
		case 54:
			return 6;
		case 55:
			return 2;
		case 56:
			return 12;
		case 57:
			return 14;
		case 58:
			return 8;
		case 59:
			return 3;
		case 60:
			return 11;
		case 61:
			return 2;
		case 62:
			return 17;
		case 63:
			return 6;
		case 64:
			return 7;
		case 65:
			return 10;
		case 66:
			return 12;
		case 67:
			return 5;
		case 68:
			return 5;
		case 69:
			return 5;
		case 70:
			return 6;
		case 71:
			return 8;
		case 72:
			return 9;
		case 73:
			return 4;
		case 74:
			return 1;
		case 75:
			return 1;
		case 76:
			return 1;
		case 77:
			return 3;
		case 78:
			return 2;
		case 79:
			return 6;
		case 80:
			return 3;
		case 81:
			return 15;
		case 82:
			return 9;
		case 83:
			return 2;
		case 84:
			return 2;
		case 85:
			return 11;
		case 86:
			return 2;
		case 87:
			return 9;
		case 88:
			return 2;
		case 89:
			return 1;
		case 90:
			return 2;
		case 91:
			return 2;
		case 92:
			return 3;
		case 93:
			return 1;
		case 94:
			return 9;
		case 95:
			return 1;
		case 96:
			return 7;
		case 97:
			return 6;
		case 98:
			return 4;
		case 99:
			return 2;
		case 100:
			return 1;
		case 101:
			return 2;
		case 102:
			return 3;
		case 103:
			return 3;
		case 104:
			return 3;
		case 105:
			return 2;
		case 106:
			return 4;
		case 107:
			return 1;
		case 108:
			return 3;
		case 109:
			return 3;
		case 110:
			return 1;
		case 111:
			return 4;
		case 112:
			return 3;
		case 113:
			return 3;
		case 114:
			return 16;
		case 115:
			return 3;
		case 116:
			return 7;
		case 117:
			return 2;
		case 118:
			return 10;
		case 119:
			return 17;
		default:
			break;
	}
	return 0;
}

Vector3 func_119(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 < 0)
	{
		return 0f, 0f, 0f;
	}
	if (!func_24(iParam0))
	{
		return 0f, 0f, 0f;
	}
	if (func_118(iParam0) == 0)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = (func_202(iParam0) + iParam1);
	if (iVar0 >= 892)
	{
		return 0f, 0f, 0f;
	}
	return *(Global_1310750->f_13358[iVar0 /*3*/]);
}

int func_120(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (MISC::ABSF((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (MISC::ABSF((vParam0.y - vParam3.y)) <= fParam6)
		{
			if (!bParam7 || MISC::ABSF((vParam0.z - vParam3.z)) <= fParam6)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_121(int iParam0, int iParam1, bool bParam2)
{
	if (Global_1327479->f_9)
	{
		return;
	}
	Global_1327479->f_4 = (Global_1327479->f_4 + iParam0 * 1000);
	if (bParam2)
	{
		Global_1310750->f_16106 = { Global_36 };
	}
	if (iParam1 == 0)
	{
		if (iParam0 > 0)
		{
			Global_1327479->f_5 = (MISC::GET_GAME_TIMER() + ((Global_1327479->f_4 - MISC::GET_GAME_TIMER()) / 2));
		}
		else
		{
			Global_1327479->f_5 = (Global_1327479->f_5 + iParam0 * 500);
		}
	}
	else
	{
		Global_1327479->f_5 = (MISC::GET_GAME_TIMER() + iParam1 * 1000);
	}
}

int func_122(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 38;
		case 5:
			return 76;
		case 6:
			return 76;
		case 3:
			return 105;
		case 2:
			return 5;
		case 1:
			return 5;
		case 8:
			return 92;
		case 4:
			return 115;
		case 7:
			return 120;
		default:
			break;
	}
	return -1;
}

int func_123(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 2;
		case 5:
			return 0;
		case 6:
			return 1;
		case 8:
			return 0;
		case 0:
			return 0;
		case 4:
			return 0;
		case 7:
			return 0;
		default:
			break;
	}
	return -1;
}

bool func_124(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_125(int iParam0)
{
	if (!func_2(iParam0))
	{
		return 0;
	}
	return &(Global_1935369->f_5[iParam0 /*11*/]);
}

int func_126()
{
	if (&Global_1048576)
	{
		return 1;
	}
	if (Global_1572887->f_4)
	{
		return 1;
	}
	if (&Global_524298)
	{
		return 1;
	}
	if (&Global_1048577)
	{
		return 1;
	}
	if (&Global_1051043 == -1 && Global_1572887->f_6 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

int func_127(int iParam0)
{
	if (!func_130(iParam0))
	{
		return -1;
	}
	return func_204(func_203(iParam0));
}

bool func_128(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_129(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_130(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_131(int iParam0, int iParam1)
{
	if (!func_24(iParam0))
	{
		return false;
	}
	return (((*Global_1310750)[iParam0 /*111*/])->f_1 && iParam1) != 0;
}

int func_132(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;

	uVar0 = &Global_1326862->f_512[iParam1];
	iVar1 = &Global_1326862->f_558[iParam1];
	iVar2 = uVar0;
	while (iVar2 <= iVar1)
	{
		if (iParam0 == &Global_1326862->f_11[iVar2])
		{
			return iVar2;
		}
		iVar2++;
	}
	return -1;
}

int func_133()
{
	return Global_1572887->f_12;
}

int func_134(int iParam0, bool bParam1)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if ((iParam0 >= 6 && !bParam1) || (iParam0 > 10 && bParam1))
	{
		return 0;
	}
	return 1;
}

int func_135(int iParam0, bool bParam1)
{
	switch (func_205(iParam0))
	{
		case 5:
			return 1;
		case 6:
			if (bParam1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_136(int iParam0)
{
	if (!func_206(iParam0))
	{
		return false;
	}
	if (func_133() == 0)
	{
		return true;
	}
	return (!func_207() || MISC::IS_BIT_SET(Global_40.f_7856, iParam0));
}

int func_137()
{
	if (func_208(1))
	{
		return 0;
	}
	return &Global_1934181;
}

int func_138()
{
	if (func_209())
	{
		if (Global_1392235->f_1 == 1)
		{
			return 1;
		}
	}
	else if (func_19(76) >= 1)
	{
		return 1;
	}
	return 0;
}

int func_139(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_210(bParam1, iParam2, bParam3);
	}
	if (Global_1572887->f_12 != -1)
	{
		if (iParam0 == Global_1225638->f_10)
		{
			if (!Global_1225638->f_11)
			{
				return 0;
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
		{
			return 0;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		return 0;
	}
	if (LAW::_0xAD401C63158ACBAA(iParam0))
	{
		LAW::_0xCBFB4951F2E3934C(iParam0, &Var0);
		if ((bParam3 || Var0.f_10 > 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(iParam0) > 0)
		{
			return 1;
		}
	}
	else if (iParam2 && !LAW::_0x148E7AC8141C9E64(iParam0) == 1370593166)
	{
		return 0;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (LAW::_0x532C5FDDB986EE5C(iParam0, iVar17, &Var18))
		{
			if (Var18.f_10 && (bParam3 || LAW::_0xDAEFDFDB2AEECE37(Var18, Var18.f_7) > 0))
			{
				return 1;
			}
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (LAW::_0x69E181772886F48B(iParam0) || LAW::_0xF0FBFB9AB15F7734(iParam0, 0, 0))
		{
			if (bParam3 || LAW::_0xE083BEDA81709891(iParam0) > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_140(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = func_211(iParam0);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar2 = func_212(iParam0, iVar0);
		if (!func_43(iVar2))
		{
			if (func_213(iVar2))
			{
				return iVar2;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_141(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_214(0, iParam0, 2, 0);
	iVar2 = func_215(iVar0);
	if (iVar2 == -15)
	{
		iVar2 = func_104();
		func_216(&iVar2, 0, 10, 0, 0, 0, 0);
	}
	else
	{
		func_217(&iVar2, 0, 0, 20, 0, 0, 0, 0);
	}
	if (func_218(iParam0, &iVar1))
	{
		if (func_219(iVar1, iVar2, 1))
		{
			iVar2 = iVar1;
		}
	}
	if (func_220(&iVar1))
	{
		if (func_219(iVar1, iVar2, 1))
		{
			iVar2 = iVar1;
		}
	}
	if (func_221(iVar2, 1))
	{
		return 1;
	}
	return 0;
}

int func_142(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < 771))
		{
			return 0;
		}
		iVar0 = (Global_12105[iParam0 /*7*/])->f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
		{
			return 0;
		}
		iVar0 = func_222(iParam0);
	}
	if (iVar0 == 1)
	{
		return 1;
	}
	if (iVar0 == 2)
	{
		return 1;
	}
	return 0;
}

int func_143(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_223(iParam0, iParam1);
	iVar0 = 0;
	while (iVar0 < Global_17503.f_1003)
	{
		if (&Global_17503.f_1003[iVar0 /*6*/] == iVar1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_144(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_143(iParam0, iParam1);
	if (iVar0 != -1)
	{
		return (Global_17503.f_1003[iVar0 /*6*/])->f_5;
	}
	return -15;
}

void func_145(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (func_219(iParam0, iParam1, 1))
	{
		iVar0 = func_224(iParam1);
		iVar1 = func_225(iParam0);
		iVar2 = (func_225(iParam0) - func_225(iParam1));
		iVar3 = (func_224(iParam0) - func_224(iParam1));
		iVar4 = (func_226(iParam0) - func_226(iParam1));
		iVar5 = (func_227(iParam0) - func_227(iParam1));
		iVar6 = (func_228(iParam0) - func_228(iParam1));
		iVar7 = (func_229(iParam0) - func_229(iParam1));
	}
	else
	{
		iVar0 = func_224(iParam0);
		iVar1 = func_225(iParam1);
		iVar2 = (func_225(iParam1) - func_225(iParam0));
		iVar3 = (func_224(iParam1) - func_224(iParam0));
		iVar4 = (func_226(iParam1) - func_226(iParam0));
		iVar5 = (func_227(iParam1) - func_227(iParam0));
		iVar6 = (func_228(iParam1) - func_228(iParam0));
		iVar7 = (func_229(iParam1) - func_229(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_230(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = BUILTIN::ROUND(func_231(BUILTIN::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

bool func_146(int iParam0)
{
	return !func_168(iParam0, 1);
}

int func_147(int iParam0)
{
	if (iParam0 != -1)
	{
		return 1;
	}
	return 0;
}

int func_148(int iParam0)
{
	if (iParam0 != 0)
	{
		return 1;
	}
	return 0;
}

bool func_149(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_147(iParam0))
	{
		return false;
	}
	func_232(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_1935183->f_73[iParam0 /*7*/][iVar0], iVar1);
}

bool func_150(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_151(int iParam0)
{
	vector3 vVar0;

	if (!func_150(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_152(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_150(iParam0, 0))
	{
		return 0;
	}
	if (Global_1935630->f_12)
	{
		return 0;
	}
	iVar0 = func_233(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_234("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_235(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_192(Var4.f_4))
			{
			}
			else if (WEAPON::_0x5C2EA6C44F515F34(Var4.f_4) == iVar0)
			{
				func_236(iVar1);
				return 1;
			}
			iVar3++;
		}
		func_236(iVar1);
	}
	return 0;
}

int func_153(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_150(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_151(iParam0);
	if (iVar0 == 307971639 || (iParam1 && iVar0 == -427144552))
	{
		iVar1 = func_233(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_237(iParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_238(bParam2), iParam0, 0);
	return iVar2;
}

bool func_154(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

int func_155(int iParam0)
{
	if (!func_154(iParam0))
	{
		return 0;
	}
	return ((*Global_1895087)[iParam0 /*3*/])->f_1;
}

int func_156(vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	iVar0 = func_239(vParam0);
	iVar1 = -1;
	if (Global_1894882[iVar0] > 0)
	{
		iVar2 = (Global_1894882[iVar0] - 1);
		bVar3 = false;
		while (iVar2 >= 0 && !bVar3)
		{
			iVar4 = (*Global_1894065)[iVar0 /*51*/][iVar2];
			if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1888801)[iVar4 /*35*/])->f_3))
			{
				if (VOLUME::_0xF256A75210C5C0EB(((*Global_1888801)[iVar4 /*35*/])->f_3, vParam0))
				{
					switch (((*Global_1888801)[iVar4 /*35*/])->f_20)
					{
						case 5:
							if (!bParam3)
							{
								iVar1 = iVar4;
								bVar3 = true;
							}
							break;
						default:
							iVar1 = iVar4;
							bVar3 = true;
							break;
					}
				}
			}
			iVar2 = (iVar2 - 1);
		}
	}
	if (iVar1 != -1)
	{
	}
	return iVar1;
}

int func_157(int iParam0)
{
	if (!WEAPON::IS_WEAPON_VALID(*iParam0))
	{
		return 0;
	}
	if (*iParam0 == joaat("weapon_unarmed"))
	{
		return 0;
	}
	if (WEAPON::_0xC75386174ECE95D5(*iParam0))
	{
		return 0;
	}
	if (WEAPON::_0xDDC64F5E31EEDAB6(*iParam0) || WEAPON::_0xC212F1D05A8232BB(*iParam0))
	{
		return 1;
	}
	return 0;
}

int func_158(int iParam0, int iParam1)
{
	var uVar0;

	return func_240(&uVar0, iParam0, iParam1);
}

bool func_159(int iParam0)
{
	int iVar0;

	iVar0 = func_205(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

float func_160(var uParam0)
{
	if (!func_241(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_242(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_16() - uParam0->f_1);
}

int func_161()
{
	int iVar0;

	iVar0 = func_243();
	switch (iVar0)
	{
		case 0:
		case 4:
		case 7:
			return 0;
	}
	return 1;
}

int func_162()
{
	return Global_40.f_4283;
}

Vector3 func_163(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1343.699f, 2429.397f, 307.0626f;
		case 1:
			return -123.1805f, -28.8611f, 94.8478f;
		case 2:
			return 667.9077f, -1252.78f, 42.9221f;
		case 3:
			return 1880.807f, -1873.231f, 41.8094f;
		case 4:
			return 1422.625f, -7332.473f, 80.5977f;
		case 5:
			return 2254.96f, -758.12f, 41.75f;
		case 6:
			return 2351.282f, 1362.077f, 104.9752f;
		case 7:
			return -2593.21f, 453.9533f, 145.9973f;
		case 8:
			return func_244();
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_164(int iParam0)
{
	int iVar0;

	if (iParam0 != -1)
	{
		iVar0 = func_245(0);
		return MISC::IS_BIT_SET(iVar0, iParam0);
	}
	return 0;
}

int func_165(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0[4];
	int iVar5;

	iVar0[0] = 0;
	iVar0[1] = 0;
	iVar0[2] = 0;
	iVar0[3] = 0;
	switch (iParam3)
	{
		case -1:
			switch (iParam0)
			{
				case 1:
					iVar0[0] = 7;
					iVar0[1] = 20;
					iVar0[2] = 3;
					break;
				case 5:
				case 6:
				case 7:
					iVar0[0] = 38;
					iVar0[1] = 20;
					iVar0[2] = 3;
					break;
				case 12:
					iVar0[0] = 19;
					iVar0[1] = 38;
					iVar0[2] = 20;
					iVar0[3] = 3;
					break;
				case 9:
					iVar0[0] = 43;
					iVar0[1] = 23;
					iVar0[2] = 20;
					iVar0[3] = 3;
					break;
				case 4:
					iVar0[0] = 18;
					iVar0[1] = 20;
					iVar0[2] = 3;
					break;
				case 11:
					iVar0[0] = 19;
					iVar0[1] = 20;
					iVar0[2] = 3;
					break;
				case 0:
					iVar0[0] = 23;
					iVar0[1] = 20;
					iVar0[2] = 3;
					break;
				case 2:
					iVar0[0] = 23;
					iVar0[1] = 20;
					iVar0[2] = 3;
					break;
				case 3:
					iVar0[0] = 7;
					iVar0[1] = 20;
					iVar0[2] = 3;
					break;
				case 10:
					iVar0[0] = 18;
					iVar0[1] = 20;
					iVar0[2] = 3;
					break;
			}
			break;
		case 119:
			switch (iParam0)
			{
				case 1:
					iVar0[0] = 43;
					iVar0[1] = 19;
					break;
				case 5:
				case 6:
				case 7:
					iVar0[0] = 38;
					break;
				case 12:
					iVar0[0] = 19;
					iVar0[1] = 18;
					break;
				case 9:
					iVar0[0] = 43;
					break;
				case 4:
					iVar0[0] = 18;
					break;
				case 11:
					iVar0[0] = 19;
					break;
				case 10:
					iVar0[0] = 18;
					break;
			}
			break;
		case 40:
			switch (iParam0)
			{
				case 1:
					iVar0[0] = 20;
					iVar0[1] = 3;
					break;
				case 5:
				case 6:
				case 7:
					iVar0[0] = 20;
					iVar0[1] = 3;
					break;
				case 12:
					iVar0[0] = 20;
					iVar0[1] = 3;
					break;
				case 9:
					iVar0[0] = 43;
					iVar0[1] = 23;
					iVar0[2] = 20;
					iVar0[3] = 3;
					break;
				case 4:
					iVar0[0] = 20;
					iVar0[1] = 3;
					break;
				case 11:
					iVar0[0] = 20;
					iVar0[1] = 3;
					iVar0[2] = 26;
					break;
				case 0:
					iVar0[0] = 23;
					iVar0[1] = 20;
					iVar0[2] = 3;
					iVar0[3] = 26;
					break;
				case 2:
					iVar0[0] = 23;
					iVar0[1] = 20;
					iVar0[2] = 3;
					iVar0[3] = 26;
					break;
				case 3:
					iVar0[0] = 20;
					iVar0[1] = 3;
					break;
				case 10:
					iVar0[0] = 20;
					iVar0[1] = 3;
					break;
			}
			break;
	}
	if (bParam1)
	{
		iVar5 = 0;
		while (iVar5 < iVar0)
		{
			if (&iVar0[iVar5] != iParam2 && !func_246(&(iVar0[iVar5])))
			{
				return &(iVar0[iVar5]);
			}
			iVar5++;
		}
	}
	else if (bParam4)
	{
		iVar5 = 0;
		while (iVar5 < iVar0)
		{
			if (&iVar0[iVar5] != iParam2 && !func_248(func_247(&(iVar0[iVar5]))))
			{
				return &(iVar0[iVar5]);
			}
			iVar5++;
		}
	}
	else if (&iVar0[0] != iParam2)
	{
		return &(iVar0[0]);
	}
	else
	{
		return &(iVar0[1]);
	}
	return 0;
}

bool func_166(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 35);
}

bool func_167(int iParam0)
{
	var uVar0;

	uVar0 = func_168(iParam0, 256);
	return uVar0;
}

bool func_168(int iParam0, int iParam1)
{
	if (!func_249(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_15614[iParam0] && iParam1) != 0;
}

bool func_169(int iParam0, int iParam1)
{
	if (!func_166(iParam0))
	{
		return false;
	}
	return ((Global_1914319->f_3[iParam0 /*446*/])->f_7 && iParam1) != 0;
}

int func_170(int iParam0)
{
	if (!func_249(iParam0))
	{
		return -1;
	}
	if (iParam0 == 34 && func_23() == 128)
	{
		return 128;
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 120:
		case 121:
			return 78;
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 106:
		case 107:
		case 108:
			return 38;
		case 18:
		case 19:
		case 20:
		case 21:
		case 105:
			return 69;
		case 22:
		case 118:
			return 3;
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 109:
		case 110:
		case 111:
			return 5;
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 112:
		case 113:
			return 105;
		case 23:
		case 24:
			return 23;
		case 35:
			return 101;
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 114:
		case 115:
			return 26;
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 102:
		case 103:
		case 104:
			return 76;
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 116:
		case 117:
			return 92;
		case 4:
			return 13;
		case 128:
		case 129:
		case 130:
		case 131:
			return 79;
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
			return 98;
		case 5:
			return 14;
		case 137:
		case 138:
		case 139:
		case 140:
			return 71;
		case 141:
		case 142:
		case 143:
		case 144:
			return 4;
		case 34:
			return 90;
		case 145:
		case 146:
		case 147:
		case 148:
			return 9;
		case 67:
			return 113;
		case 87:
		case 88:
		case 89:
			return 28;
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
			return 115;
		case 95:
		case 96:
		case 97:
			return 120;
		case 98:
			return 123;
		case 99:
		case 100:
		case 123:
			return 117;
		case 119:
			return 65;
		case 122:
			return 82;
		case 124:
			return 110;
		case 125:
			return 127;
		case 56:
			return 71;
		case 57:
			return 98;
		case 58:
			return 9;
		case 59:
			return 79;
		default:
			break;
	}
	return -1;
}

int func_171(int iParam0, var uParam1)
{
	if (!func_166(iParam0))
	{
		return 0;
	}
	if (func_133() != -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST((Global_1051260->f_48[iParam0 /*78*/])->f_19))
		{
			*uParam1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((Global_1051260->f_48[iParam0 /*78*/])->f_19);
		}
		else
		{
			return 0;
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST((Global_1914319->f_3[iParam0 /*446*/])->f_23))
	{
		*uParam1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((Global_1914319->f_3[iParam0 /*446*/])->f_23);
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_172(int iParam0)
{
	if (!func_249(iParam0))
	{
		return 0;
	}
	return func_250(&(Global_1914319->f_18594[iParam0]), 1);
}

int func_173(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_251(uParam2, 1, iVar0);
	}
	if (!Global_1935630->f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			uParam2->f_12 = fParam5;
		}
		else
		{
			uParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!uParam2->f_1 & 128 != 0)
		{
			if (func_252(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_253(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_254(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_253(iParam0, uParam2, *uParam3);
					return 1;
				}
				else if (func_255(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_253(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_256(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_253(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_26 && func_139(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_253(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_257(uParam2, 1065353216))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_258(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_253(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_259(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_253(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_260(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_253(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			else if (func_260(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_253(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_261(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_253(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || uParam2->f_12 < 20f)
			{
				if (func_262(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_253(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_263(uParam2, 4000))
				{
					if ((func_264(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_265(uParam2, iParam0)) && func_266(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_253(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_264(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_265(uParam2, iParam0)) && func_266(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_253(iParam0, uParam2, *uParam3);
					return 1;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_267(iParam0, Global_1935630->f_41))
							{
								func_268();
								*uParam3 = 2;
								func_253(iParam0, uParam2, *uParam3);
								return 1;
							}
						}
					}
				}
			}
			else if (Global_1935630->f_40 == 0)
			{
				if (Global_1935630->f_41 != 0)
				{
					if (*uParam2 & 131072 == 0)
					{
						if (func_267(iParam0, Global_1935630->f_41))
						{
							func_268();
							*uParam3 = 2;
							func_253(iParam0, uParam2, *uParam3);
							return 1;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_269(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_270() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_268();
						*uParam3 = 2;
						func_253(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_271())
					{
						if (func_267(iParam0, Global_1935630->f_42))
						{
							func_268();
							*uParam3 = 2;
							func_253(iParam0, uParam2, *uParam3);
							return 1;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_272(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_253(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_273(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_253(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_274(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_253(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_275(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_253(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_276(uParam2, 4000))
				{
					if (func_277(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_253(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_278(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_253(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_279(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_253(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
	}
	return 0;
}

int func_174(int iParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (iParam0 == 19)
	{
		return 1;
	}
	if (iParam0 == 9)
	{
		return 1;
	}
	if (func_133() == 0)
	{
		return func_280((Global_1051260->f_48[iParam0 /*78*/])->f_18, (Global_1051260->f_48[iParam0 /*78*/])->f_30, 1, 0);
	}
	if (!VOLUME::_0x92A78D0BEDB332A3((Global_1914319->f_3[iParam0 /*446*/])->f_25))
	{
		return 0;
	}
	if (iParam0 != 11)
	{
		if (!func_154((Global_1914319->f_3[iParam0 /*446*/])->f_21))
		{
			return 0;
		}
		if (!func_281((Global_1914319->f_3[iParam0 /*446*/])->f_21, 0))
		{
			return 0;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST((Global_1914319->f_3[iParam0 /*446*/])->f_23))
	{
		(Global_1914319->f_3[iParam0 /*446*/])->f_23 = func_282((Global_1914319->f_3[iParam0 /*446*/])->f_21);
		iVar0 = func_155((Global_1914319->f_3[iParam0 /*446*/])->f_21);
		if (!MISC::_0xBDC6E364C9C78178(iVar0))
		{
			return 0;
		}
		if (!_NAMESPACE48::_0x4AFC7288C77238B3(iVar0))
		{
			return 0;
		}
		if (!VOLUME::_0xF256A75210C5C0EB((Global_1914319->f_3[iParam0 /*446*/])->f_25, func_63((Global_1914319->f_3[iParam0 /*446*/])->f_21)))
		{
			return 0;
		}
		return 1;
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((Global_1914319->f_3[iParam0 /*446*/])->f_23);
	if (func_75(iParam0))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		if (LAW::_0x856CE8FDE2416602(iVar1))
		{
			return 0;
		}
	}
	vVar2 = { ENTITY::GET_ENTITY_COORDS((Global_1914319->f_3[iParam0 /*446*/])->f_23, true, false) };
	if (!VOLUME::_0xF256A75210C5C0EB((Global_1914319->f_3[iParam0 /*446*/])->f_25, vVar2))
	{
		return 0;
	}
	return 1;
}

bool func_175(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 9);
}

int func_176(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			if (func_53(40, 9) == 10)
			{
				return 1;
			}
			break;
		case 20:
			if (func_53(40, 8) == 11)
			{
				return 1;
			}
			break;
		case 23:
			if (func_53(40, 7) == 13)
			{
				return 1;
			}
			break;
		case 26:
			if (func_53(40, 6) == 14)
			{
				return 1;
			}
			break;
		case 5:
			if (func_53(40, 5) == 15)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_177(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 != 0)
	{
		iVar0 = func_190(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_132(iParam0, iVar1);
		if (iVar2 == -1)
		{
			return 0;
		}
		return &(Global_17503.f_2205[iVar2 /*2*/]);
	}
	return 0;
}

int func_178(int iParam0, int iParam1)
{
	if (iParam1 == 11)
	{
		return 101;
	}
	else if (iParam1 == 32)
	{
		return 126;
	}
	else if (iParam1 == 34)
	{
		return 127;
	}
	switch (iParam0)
	{
		case 79:
			switch (iParam1)
			{
				case 0:
					return 128;
				case 6:
					return 130;
				case 27:
					return 131;
				case 26:
					return 129;
				case 19:
					return 59;
				default:
					break;
			}
			break;
		case 38:
			switch (iParam1)
			{
				case 15:
					return 6;
				case 33:
					return 11;
				case 29:
					return 106;
				case 30:
					return 107;
				case 3:
					return 7;
				case 8:
					return 9;
				case 10:
					return 10;
				case 9:
					return 13;
				case 2:
					return 14;
				case 1:
					return 15;
				case 31:
					return 108;
				case 22:
					return 16;
				case 7:
					return 17;
				case 21:
					return 12;
				default:
					break;
			}
			break;
		case 98:
			switch (iParam1)
			{
				case 0:
					return 132;
				case 6:
					return 134;
				case 27:
					return 135;
				case 26:
					return 133;
				case 19:
					return 57;
				default:
					break;
			}
			break;
		case 69:
			switch (iParam1)
			{
				case 4:
					return 18;
				case 3:
					return 19;
				case 2:
					return 20;
				case 1:
					return 21;
				case 31:
					return 105;
				default:
					break;
			}
			break;
		case 71:
			switch (iParam1)
			{
				case 0:
					return 137;
				case 6:
					return 139;
				case 27:
					return 140;
				case 26:
					return 138;
				case 19:
					return 56;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 141;
				case 6:
					return 143;
				case 27:
					return 144;
				case 26:
					return 142;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 17:
					return 22;
				case 31:
					return 118;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 15:
					return 36;
				case 8:
					return 37;
				case 33:
					return 52;
				case 29:
					return 109;
				case 10:
					return 38;
				case 30:
					return 110;
				case 0:
					return 39;
				case 4:
					return 41;
				case 3:
					return 42;
				case 6:
					return 43;
				case 9:
					return 44;
				case 2:
					return 45;
				case 1:
					return 46;
				case 31:
					return 111;
				case 22:
					return 51;
				case 7:
					return 47;
				case 12:
					return 48;
				case 13:
					return 49;
				case 14:
					return 50;
				case 18:
					return 55;
				case 21:
					return 54;
				default:
					break;
			}
			break;
		case 105:
			switch (iParam1)
			{
				case 15:
					return 25;
				case 33:
					return 33;
				case 29:
					return 112;
				case 10:
					return 26;
				case 4:
					return 27;
				case 3:
					return 28;
				case 6:
					return 29;
				case 2:
					return 30;
				case 31:
					return 113;
				case 22:
					return 32;
				case 1:
					return 31;
				default:
					break;
			}
			break;
		case 101:
			switch (iParam1)
			{
				case 9:
					return 35;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 18:
					return 4;
				default:
					break;
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 2:
					return 23;
				case 1:
					return 24;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 145;
				case 26:
					return 146;
				case 6:
					return 147;
				case 27:
					return 148;
				case 19:
					return 58;
				default:
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 29:
					return 114;
				case 33:
					return 66;
				case 10:
					return 60;
				case 3:
					return 61;
				case 20:
					return 62;
				case 9:
					return 63;
				case 31:
					return 115;
				case 22:
					return 64;
				case 2:
					return 65;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 18:
					return 5;
				default:
					break;
			}
			break;
		case 76:
			switch (iParam1)
			{
				case 15:
					return 68;
				case 8:
					return 69;
				case 33:
					return 70;
				case 29:
					return 102;
				case 10:
					return 72;
				case 30:
					return 103;
				case 0:
					return 73;
				case 3:
					return 74;
				case 6:
					return 75;
				case 9:
					return 76;
				case 2:
					return 77;
				case 31:
					return 104;
				case 1:
					return 78;
				case 22:
					return 80;
				case 20:
					return 79;
				default:
					break;
			}
			break;
		case 92:
			switch (iParam1)
			{
				case 30:
					return 116;
				case 4:
					return 82;
				case 2:
					return 86;
				case 1:
					return 85;
				case 31:
					return 117;
				case 9:
					return 84;
				default:
					break;
			}
			break;
		case 78:
			switch (iParam1)
			{
				case 29:
					return 120;
				case 6:
					return 0;
				case 2:
					return 2;
				case 31:
					return 121;
				case 22:
					return 1;
				case 1:
					return 3;
				default:
					break;
			}
			break;
		case 90:
		case 128:
			switch (iParam1)
			{
				case 18:
					return 34;
				default:
					break;
			}
			break;
		case 28:
			switch (iParam1)
			{
				case 2:
					return 89;
				case 1:
					return 88;
				case 3:
					return 87;
				default:
					break;
			}
			break;
		case 65:
			switch (iParam1)
			{
				case 31:
					return 119;
				default:
					break;
			}
			break;
		case 82:
			switch (iParam1)
			{
				case 31:
					return 122;
				default:
					break;
			}
			break;
		case 110:
			switch (iParam1)
			{
				case 31:
					return 124;
				default:
					break;
			}
			break;
		case 115:
			switch (iParam1)
			{
				case 33:
					return 93;
				case 3:
					return 90;
				case 6:
					return 91;
				case 9:
					return 94;
				case 10:
					return 92;
				default:
					break;
			}
			break;
		case 120:
			switch (iParam1)
			{
				case 3:
					return 95;
				case 2:
					return 96;
				default:
					break;
			}
			break;
		case 123:
			switch (iParam1)
			{
				case 4:
					return 98;
				default:
					break;
			}
			break;
		case 117:
			switch (iParam1)
			{
				case 31:
					return 123;
				case 2:
					return 99;
				case 1:
					return 100;
				default:
					break;
			}
			break;
		case 113:
			switch (iParam1)
			{
				case 18:
					return 67;
				default:
					break;
			}
			break;
		case 127:
			switch (iParam1)
			{
				case 4:
					return 125;
				default:
					break;
			}
			break;
	}
	return -1;
}

int func_179(int iParam0)
{
	int iVar0;

	if (!func_249(iParam0))
	{
		return 0;
	}
	iVar0 = func_283(iParam0);
	if ((((((((((iVar0 == 2 && func_284(28)) || (iVar0 == 18 && iParam0 != 55)) || iVar0 == 1) || iVar0 == 11) || iParam0 == 69) || iVar0 == 33) || iVar0 == 20) || iVar0 == 19) || iVar0 == 9) || func_167(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_180(int iParam0)
{
	if (iParam0 == 15)
	{
		return 65539;
	}
	return 7;
}

int func_181(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = func_227(func_104());
	if (func_250(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (func_250(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return 1;
		}
	}
	if (func_250(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return 1;
		}
	}
	if (func_250(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_250(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return 1;
		}
	}
	if (func_250(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return 1;
		}
	}
	if (func_250(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (func_250(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return 1;
		}
	}
	if (func_250(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (func_250(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return 1;
		}
	}
	if (func_250(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_250(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return 1;
		}
	}
	if (func_250(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (func_250(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return 1;
		}
	}
	if (func_250(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_250(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return 1;
		}
	}
	if (func_250(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return 1;
		}
	}
	return 0;
}

bool func_182()
{
	if (Global_1392135->f_3 != -1)
	{
		return true;
	}
	return Global_1392135->f_3 != -1;
}

bool func_183(int iParam0)
{
	return iParam0 > -1;
}

bool func_184(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_183(iParam0))
		{
			return false;
		}
	}
	func_285(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0]), iVar1);
}

int func_185(int iParam0)
{
	if (!func_183(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		(*Global_1360165)[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

int func_186(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return 1;
	}
	if (func_286(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_286(iVar0, 2))
	{
		if (PED::_0x3AA24CCC0D451379(iParam0))
		{
			return 0;
		}
	}
	if (func_286(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_286(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_286(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_286(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return 0;
		}
	}
	if (func_286(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_286(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_187(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_183(iParam0))
	{
		return 0;
	}
	if (func_287(iParam0, 32, 1))
	{
		return 0;
	}
	if (!func_287(iParam0, 2, 1))
	{
		return 0;
	}
	if (!func_287(iParam0, 4, 1))
	{
		return 0;
	}
	if (func_184(iParam0, 33, 1))
	{
		return 0;
	}
	if (func_288(iParam0))
	{
		return 0;
	}
	if (func_289(iParam0))
	{
		if (!bParam2)
		{
			return 0;
		}
	}
	if (!bParam1)
	{
		if (Global_1357549->f_1497 == iParam0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_188(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

int func_189(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_143(iParam0, iParam1);
	if (iVar0 != -1)
	{
		return (Global_17503.f_1003[iVar0 /*6*/])->f_3;
	}
	return 0;
}

int func_190(int iParam0)
{
	int iVar0;
	var uVar1;

	iVar0 = 0;
	uVar1 = iParam0;
	while (iParam0 > 1)
	{
		iParam0 = BUILTIN::SHIFT_RIGHT(iParam0, 1);
		iVar0++;
	}
	return iVar0;
}

bool func_191(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_192(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("weapon_unarmed"));
}

int func_193(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return 0;
	}
	return 1;
}

int func_194(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_223(iParam0, iParam1);
	iVar0 = 0;
	while (iVar0 < Global_17503.f_1003)
	{
		if (&Global_17503.f_1003[iVar0 /*6*/] == iVar1 || &Global_17503.f_1003[iVar0 /*6*/] == -1)
		{
			Global_17503.f_1003[iVar0 /*6*/] = iVar1;
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_195(int iParam0)
{
	int iVar0;

	iVar0 = func_291(func_290(iParam0), 1);
	if (iVar0 != 39)
	{
		return (Global_1946804->f_1497.f_1[iVar0 /*3*/])->f_1;
	}
	return 0;
}

int func_196(var uParam0)
{
	if (func_197(81053684, uParam0))
	{
		return 1;
	}
	if (func_197(-525676072, uParam0))
	{
		return 1;
	}
	return 0;
}

int func_197(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_291(func_290(iParam0), 1);
	if (iVar1 >= 39)
	{
		return 0;
	}
	if (&Global_1946804->f_1497.f_1[iVar1 /*3*/] != 0 && &Global_1946804->f_1497.f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1 /*3*/];
		if (func_292(iVar0) == iParam0)
		{
			*uParam1 = iVar0;
			return 1;
		}
	}
	*uParam1 = 0;
	return 0;
}

int func_198(int iParam0)
{
	return (Global_17503.f_42[iParam0 /*8*/])->f_5;
}

int func_199(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
	}
	return 0;
}

int func_200(int iParam0)
{
	if (func_112(iParam0))
	{
		return VEHICLE::_0xC29996A337BDD099(((*Global_1425371)[iParam0 /*373*/])->f_1);
	}
	return 0;
}

int func_201(int iParam0, int iParam1)
{
	int iVar0;

	switch (iParam1)
	{
		case 3:
			iVar0 = func_39(iParam0, 0);
			iVar0 = (iVar0 + func_39(iParam0, 2));
			iVar0 = (iVar0 + func_39(iParam0, 11));
			return iVar0;
		case 0:
			iVar0 = func_39(iParam0, 1);
			iVar0 = (iVar0 + func_39(iParam0, 7));
			iVar0 = (iVar0 + func_39(iParam0, 6));
			iVar0 = (iVar0 + func_39(iParam0, 12));
			return iVar0;
		case 2:
			iVar0 = func_39(iParam0, 3);
			iVar0 = (iVar0 + func_39(iParam0, 10));
			return iVar0;
		case 1:
			iVar0 = func_39(iParam0, 4);
			iVar0 = (iVar0 + func_39(iParam0, 9));
			return iVar0;
		case 4:
			return func_39(iParam0, 8);
		case 5:
			iVar0 = func_39(iParam0, 13);
			iVar0 = (iVar0 + func_39(iParam0, 14));
			iVar0 = (iVar0 + func_39(iParam0, 15));
			iVar0 = (iVar0 + func_39(iParam0, 16));
			return iVar0;
		default:
			break;
	}
	return 0;
}

int func_202(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 10;
		case 2:
			return 22;
		case 3:
			return 45;
		case 4:
			return 51;
		case 5:
			return 68;
		case 6:
			return 69;
		case 7:
			return 72;
		case 8:
			return 95;
		case 9:
			return 96;
		case 10:
			return 104;
		case 11:
			return 106;
		case 12:
			return 110;
		case 13:
			return 128;
		case 14:
			return 140;
		case 15:
			return 147;
		case 16:
			return 168;
		case 17:
			return 187;
		case 18:
			return 199;
		case 19:
			return 206;
		case 20:
			return 207;
		case 21:
			return 224;
		case 22:
			return 227;
		case 23:
			return 228;
		case 24:
			return 245;
		case 27:
			return 259;
		case 28:
			return 270;
		case 29:
			return 275;
		case 30:
			return 283;
		case 31:
			return 321;
		case 32:
			return 341;
		case 33:
			return 351;
		case 34:
			return 364;
		case 35:
			return 375;
		case 36:
			return 377;
		case 37:
			return 389;
		case 38:
			return 409;
		case 39:
			return 410;
		case 40:
			return 411;
		case 41:
			return 423;
		case 42:
			return 426;
		case 43:
			return 427;
		case 44:
			return 454;
		case 45:
			return 463;
		case 46:
			return 478;
		case 47:
			return 480;
		case 48:
			return 482;
		case 49:
			return 491;
		case 50:
			return 498;
		case 51:
			return 534;
		case 53:
			return 539;
		case 54:
			return 542;
		case 55:
			return 548;
		case 56:
			return 550;
		case 57:
			return 562;
		case 58:
			return 576;
		case 59:
			return 584;
		case 60:
			return 587;
		case 61:
			return 598;
		case 62:
			return 600;
		case 63:
			return 617;
		case 64:
			return 623;
		case 65:
			return 630;
		case 66:
			return 640;
		case 67:
			return 652;
		case 68:
			return 657;
		case 69:
			return 662;
		case 70:
			return 667;
		case 71:
			return 673;
		case 72:
			return 681;
		case 73:
			return 690;
		case 74:
			return 694;
		case 75:
			return 695;
		case 76:
			return 696;
		case 77:
			return 697;
		case 78:
			return 700;
		case 79:
			return 702;
		case 80:
			return 708;
		case 81:
			return 711;
		case 82:
			return 726;
		case 83:
			return 735;
		case 84:
			return 737;
		case 85:
			return 739;
		case 86:
			return 750;
		case 87:
			return 752;
		case 88:
			return 761;
		case 89:
			return 763;
		case 90:
			return 764;
		case 91:
			return 766;
		case 92:
			return 768;
		case 93:
			return 771;
		case 94:
			return 772;
		case 95:
			return 781;
		case 96:
			return 782;
		case 97:
			return 789;
		case 98:
			return 795;
		case 99:
			return 799;
		case 100:
			return 801;
		case 101:
			return 802;
		case 102:
			return 804;
		case 103:
			return 807;
		case 104:
			return 810;
		case 105:
			return 813;
		case 106:
			return 815;
		case 107:
			return 819;
		case 108:
			return 820;
		case 109:
			return 823;
		case 110:
			return 826;
		case 111:
			return 827;
		case 112:
			return 831;
		case 113:
			return 834;
		case 114:
			return 837;
		case 115:
			return 853;
		case 116:
			return 856;
		case 117:
			return 863;
		case 118:
			return 865;
		case 119:
			return 875;
		default:
			break;
	}
	return -1;
}

int func_203(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_12105[iParam0 /*7*/]);
	}
	if (iParam0 < 0 || iParam0 >= 20001)
	{
		return 0;
	}
	return &(Global_1058888->f_498[iParam0 /*2*/]);
}

int func_204(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

int func_205(int iParam0)
{
	if (!func_130(iParam0))
	{
		return -1;
	}
	return func_222(iParam0);
}

int func_206(int iParam0)
{
	if (iParam0 <= -1 || iParam0 > 54)
	{
		return 0;
	}
	return 1;
}

int func_207()
{
	return 1;
	if (Global_1572887->f_12 == 0)
	{
		return 1;
	}
	return Global_40.f_1;
}

bool func_208(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return false;
	}
	return (Global_1147325->f_1 && iParam0) != 0;
}

int func_209()
{
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(178511838) > 0)
	{
		return 1;
	}
	return 0;
}

int func_210(bool bParam0, var uParam1, var uParam2)
{
	if (Global_1935630->f_18)
	{
		if ((uParam2 || Global_1935630->f_19 > 0) || Global_1935630->f_17 > 0)
		{
			return 1;
		}
	}
	else if (uParam1 && !Global_1935630->f_15 == 1370593166)
	{
		return 0;
	}
	if (Global_1935630->f_20 > 0 || (uParam2 && Global_1935630->f_20 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1935630->f_13)
		{
			if (uParam2 || Global_1935630->f_21 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_211(int iParam0)
{
	switch (iParam0)
	{
		case 76:
			return 1;
		case 26:
			return 2;
		case 105:
			return 3;
		case 5:
			return 2;
		case 38:
			return 3;
		case 115:
			return 2;
		default:
			break;
	}
	return 0;
}

int func_212(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 76:
			if (iParam1 == 0)
			{
				return 14;
			}
			break;
		case 26:
			if (iParam1 == 0)
			{
				return 11;
			}
			else if (iParam1 == 1)
			{
				return 153;
			}
			break;
		case 105:
			if (iParam1 == 0)
			{
				return 13;
			}
			else if (iParam1 == 1)
			{
				return 154;
			}
			else if (iParam1 == 2)
			{
				return 15;
			}
			break;
		case 5:
			if (iParam1 == 0)
			{
				return 12;
			}
			else if (iParam1 == 1)
			{
				return 16;
			}
			break;
		case 38:
			if (iParam1 == 0)
			{
				return 18;
			}
			else if (iParam1 == 1)
			{
				return 155;
			}
			else if (iParam1 == 2)
			{
				return 17;
			}
			break;
		case 115:
			if (iParam1 == 0)
			{
				return 19;
			}
			else if (iParam1 == 1)
			{
				return 20;
			}
			break;
	}
	return -1;
}

int func_213(int iParam0)
{
	if (func_48())
	{
		if (func_129(((*Global_1347702)[iParam0 /*49*/])->f_12, 2097152))
		{
			return 0;
		}
	}
	else if (func_129(((*Global_1347702)[iParam0 /*49*/])->f_12, 256))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 15:
			if (!func_45(20))
			{
				return 0;
			}
			else if (!func_293())
			{
				return 0;
			}
			break;
		case 16:
			if (func_294(((*Global_1347702)[16 /*49*/])->f_15) == 1)
			{
				return 0;
			}
			break;
		case 153:
			if (!func_295())
			{
				return 0;
			}
			break;
		case 155:
			if (!func_295())
			{
				return 0;
			}
			break;
		case 154:
			if (!func_295())
			{
				return 0;
			}
			break;
		case -1:
			return 0;
	}
	return 1;
}

int func_214(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar3 = iParam0;
	iVar4 = iParam1;
	if (Global_1572887->f_12 == -1)
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 100;
				iParam3 = MISC::GET_HASH_KEY(&(((*Global_1835011)[iParam0 /*74*/])->f_8));
				break;
			case 2:
				iVar1 = 101;
				iVar2 = 170;
				break;
			case 3:
				iVar1 = 171;
				iVar2 = 190;
				break;
			case 4:
				iVar1 = 191;
				iVar2 = 230;
				break;
			case 5:
				iVar1 = 231;
				iVar2 = 260;
				break;
			case 6:
				iVar1 = 261;
				iVar2 = 290;
				break;
			case 7:
				iVar1 = 291;
				iVar2 = 370;
				break;
			case 8:
				iVar1 = 371;
				iVar2 = 570;
				iParam3 = MISC::GET_HASH_KEY(&(((*Global_1347702)[iParam0 /*49*/])->f_3));
				break;
			case 9:
				iVar1 = 571;
				iVar2 = 650;
				break;
			case 11:
				iVar1 = 651;
				iVar2 = 750;
				break;
			case 10:
				return -1;
			case 12:
				return -1;
			default:
				return -1;
		}
	}
	else
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 200;
				break;
			case 2:
				iVar1 = 201;
				iVar2 = 15700;
				break;
			case 4:
				iVar1 = 15701;
				iVar2 = 16200;
				break;
			case 12:
				iVar1 = 16201;
				iVar2 = 19200;
				break;
			case 10:
				iVar1 = 19201;
				iVar2 = 20000;
				break;
			case 8:
				return -1;
			case 7:
				return -1;
			case 6:
				return -1;
			default:
				return -1;
		}
	}
	if (iVar2 >= func_296())
	{
		iVar2 = func_296();
	}
	iVar5 = func_297(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_203(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_203(iVar6) == 0)
			{
				return func_298(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
		iVar1 = 751;
		iVar2 = 770;
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_203(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_203(iVar6) == 0)
			{
				return func_298(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (&Global_1058888->f_498[iVar0 /*2*/] == iVar5)
			{
				return iVar0;
			}
			iVar0++;
		}
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (&Global_1058888->f_498[iVar0 /*2*/] == 0)
			{
				return func_298(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

int func_215(int iParam0)
{
	if (!func_130(iParam0))
	{
		return -15;
	}
	return func_299(iParam0);
}

void func_216(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = func_225(*iParam0);
	iVar1 = func_224(*iParam0);
	iVar2 = func_226(*iParam0);
	iVar3 = func_227(*iParam0);
	iVar4 = func_228(*iParam0);
	iVar5 = func_229(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 - iParam1);
	while (iVar5 < 0)
	{
		iParam2++;
		iVar5 += 60;
	}
	iVar4 = (iVar4 - iParam2);
	while (iVar4 < 0)
	{
		iParam3++;
		iVar4 += 60;
	}
	iVar3 = (iVar3 - iParam3);
	while (iVar3 < 0)
	{
		iParam4++;
		iVar3 += 24;
	}
	iVar2 = (iVar2 - iParam4);
	while (iVar2 <= 0)
	{
		iParam5++;
		iVar6 = (iVar1 - 1);
		if (iVar6 < 0)
		{
			iParam6++;
			iVar1 += 12;
		}
		iVar7 = func_230(iVar6, iVar0);
		iVar2 = (iVar2 + iVar7);
	}
	iVar1 = (iVar1 - iParam5);
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 = (iVar0 - iParam6);
	func_300(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_217(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_225(*iParam0);
	iVar1 = func_224(*iParam0);
	iVar2 = func_226(*iParam0);
	iVar3 = func_227(*iParam0);
	iVar4 = func_228(*iParam0);
	iVar5 = func_229(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_230(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_230(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	if (!bParam7)
	{
		iVar0 = (iVar0 + iParam6);
	}
	func_300(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_218(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = -15;
	iVar1 = 0;
	if (iParam0 == 105)
	{
		iVar2 = func_301(iParam0);
		if (!func_281(iVar2, 0))
		{
			iVar0 = func_302(iVar2);
			if (iVar0 != -15)
			{
				func_217(&iVar0, 0, 0, 0, 7, 0, 0, 0);
				*uParam1 = iVar0;
				iVar1 = 1;
			}
		}
		else
		{
			iVar0 = func_302(iVar2);
			if (iVar0 != -15)
			{
				func_217(&iVar0, 0, 0, 0, 7, 0, 0, 0);
				*uParam1 = iVar0;
				iVar1 = 1;
			}
		}
	}
	iVar3 = func_303(iParam0);
	if (!func_281(iVar3, 0))
	{
		iVar0 = func_302(iVar3);
		if (iVar0 != -15)
		{
			func_217(&iVar0, 0, 0, 0, 7, 0, 0, 0);
			*uParam1 = iVar0;
		}
	}
	else
	{
		iVar0 = func_302(iVar3);
		if (iVar0 != -15)
		{
			func_217(&iVar0, 0, 0, 0, 7, 0, 0, 0);
			if (func_219(iVar0, *uParam1, 1))
			{
				*uParam1 = iVar0;
				iVar1 = 1;
			}
		}
	}
	return iVar1;
}

bool func_219(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_304(iParam1) || !func_304(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

int func_220(int iParam0)
{
	int iVar0;

	iVar0 = Global_40.f_11182.f_1;
	if (iVar0 == -15)
	{
		return 0;
	}
	func_217(&iVar0, 0, 0, 0, 5, 0, 0, 0);
	*iParam0 = iVar0;
	return 1;
}

bool func_221(int iParam0, bool bParam1)
{
	return func_219(func_104(), iParam0, bParam1);
}

int func_222(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_305(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

int func_223(int iParam0, int iParam1)
{
	if (!func_24(iParam0))
	{
		return -1;
	}
	return (iParam0 + (120 * iParam1));
}

int func_224(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_225(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_306(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_226(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_227(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_228(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_229(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_230(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
		default:
			break;
	}
	return 30;
}

float func_231(float fParam0, float fParam1, float fParam2)
{
	float fVar0;

	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(BUILTIN::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_232(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = func_307(iParam0, 1);
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
	return 1;
}

int func_233(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_150(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_151(iParam0);
	if (iVar0 == -427144552 && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_0x5C2EA6C44F515F34(iParam0);
	}
	else if (iVar0 == 307971639 && WEAPON::_0x1F7977C9101F807F(iParam0))
	{
		return iParam0;
	}
	if (func_308(iParam0, 1399091007))
	{
		func_309(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_234(char* sParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	*uParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_238(bParam4), sParam0, iParam3, uParam2);
	if (*uParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_235(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 < 0)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		return 0;
	}
	if (!INVENTORY::_0x82FA24C3D3FCD9B7(iParam2, iParam1, uParam0))
	{
		return 0;
	}
	return 1;
}

int func_236(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!INVENTORY::_0x42A2F33A1942E865(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_237(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_310(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_312(&Var0, func_311(0));
	}
	if (!func_313(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_236(iVar14);
	return uVar15;
}

int func_238(bool bParam0)
{
	if (func_133() == -1)
	{
		if (!bParam0 && INVENTORY::_0x7C7E4AB748EA3B07())
		{
			return 5;
		}
		return 1;
	}
	if (!bParam0 && INVENTORY::_0x13D234A2A3F66E63(PLAYER::PLAYER_PED_ID()) == 3)
	{
		return 3;
	}
	return 2;
}

int func_239(vector3 vParam0)
{
	int iVar0;

	iVar0 = func_314(vParam0, 0f, 0f, 0, 2);
	return func_314(vParam0, ((*Global_1894052)[iVar0 /*3*/])->f_1, ((*Global_1894052)[iVar0 /*3*/])->f_2, Global_1894052[iVar0 /*3*/], 4);
}

int func_240(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<4> Var4;
	bool bVar18;

	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = func_315(uParam1, 128);
	if (func_234("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_235(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_192(Var4.f_4))
			{
			}
			else if (!WEAPON::_0x705BE297EEBDB95D(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if (!bVar18 || WEAPON::_0xF29A186ED428B552(Global_35, Var4.f_4))
			{
				if (((WEAPON::_0xD955FEE4B87AFA07(Var4.f_4) && (!WEAPON::_0xC75386174ECE95D5(Var4.f_4) || func_315(uParam1, 32))) && (!WEAPON::_0xDDC64F5E31EEDAB6(Var4.f_4) || !func_315(uParam1, 8192))) && (!WEAPON::_0xC212F1D05A8232BB(Var4.f_4) || !func_315(uParam1, 16384)))
				{
					if (iVar0 == 0 || WEAPON::_0xA2091482ED42EF85(Global_35, &Var4) > WEAPON::_0xA2091482ED42EF85(Global_35, uParam0))
					{
						iVar0 = Var4.f_4;
						*uParam0 = { Var4 };
					}
				}
			}
			iVar3++;
		}
		func_236(iVar1);
	}
	if (func_192(iVar0))
	{
	}
	return iVar0;
}

bool func_241(var uParam0)
{
	return func_316(*uParam0, 1);
}

bool func_242(var uParam0)
{
	return func_316(*uParam0, 2);
}

int func_243()
{
	switch (func_133())
	{
		case -1:
			return Global_40.f_4283;
	}
	return -1;
}

Vector3 func_244()
{
	if (func_45(70))
	{
		return -1634.252f, -1358.577f, 83.9077f;
	}
	if (func_45(73))
	{
		return -1665.419f, -1346.258f, 84.11175f;
	}
	return -1641.1f, -1359.979f, 83.4932f;
}

int func_245(int iParam0)
{
	return func_52(119, iParam0);
}

int func_246(int iParam0)
{
	if (!func_317(iParam0))
	{
		return 0;
	}
	return func_318(iParam0, 4, 1);
}

int func_247(int iParam0)
{
	if (!func_317(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 2:
			return -1080874779;
		case 3:
			return -755485480;
		case 6:
			return 747460826;
		case 7:
			return 1627068364;
		case 13:
			return -1067476102;
		case 15:
			return -1080874779;
		case 18:
			return -801397594;
		case 19:
			return 730856618;
		case 20:
			return -486559882;
		case 23:
			return -1976480343;
		case 26:
			return 1895068170;
		case 29:
			return -1067476102;
		case 34:
			return 1566032147;
		case 38:
			return 2036955137;
		case 40:
			return 1566032147;
		case 43:
			return -755485480;
	}
	return 0;
}

int func_248(int iParam0)
{
	int iVar0;
	struct<37> Var1;
	int iVar48;

	iVar0 = ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COSTS_COUNT(iParam0);
	Var1.f_4 = 15;
	Var1.f_36 = 10;
	iVar48 = 0;
	while (iVar48 < iVar0)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COST(iParam0, iVar48, &Var1))
		{
			if (Var1.f_2 == 1644203656 && !func_319(iParam0, Var1, 1))
			{
				return 1;
			}
		}
		iVar48++;
	}
	return 0;
}

bool func_249(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

bool func_250(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_251(var uParam0, bool bParam1, int iParam2)
{
	func_320(iParam2);
	if (Global_1572887->f_12 == -1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			return;
		}
		if (Global_1935630->f_12)
		{
			return;
		}
	}
	else
	{
		if (!Global_1225638->f_11)
		{
			return;
		}
		if (Global_1225638->f_12)
		{
			return;
		}
	}
	if (bParam1)
	{
		uParam0->f_10 = 0;
	}
	uParam0->f_5 = iParam2;
	if (Global_1572887->f_12 == -1)
	{
		uParam0->f_13 = Global_1935630->f_44;
	}
	else
	{
		uParam0->f_13 = func_321(0);
	}
	switch (uParam0->f_6)
	{
		case 0:
			if (*uParam0 & 16 != 0)
			{
				if (!*uParam0 & 33554432 != 0)
				{
					if (uParam0->f_13 == joaat("weapon_thrown_dynamite"))
					{
						if (PED::IS_PED_PLANTING_BOMB(Global_35))
						{
							func_322(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_323(1))
						{
							func_322(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_323(1) || *uParam0 & 8192 != 0))
				{
					func_324(uParam0, 33554432);
				}
			}
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
	if (!uParam0->f_1 & 1024 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
		{
			if (func_325(uParam0))
			{
				uParam0->f_15 = func_270();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_270() - uParam0->f_15) > 500)
			{
				if (!PED::IS_PED_ON_MOUNT(uParam0->f_14))
				{
					uParam0->f_14 = 0;
					uParam0->f_15 = 0;
				}
			}
		}
	}
	uParam0->f_6++;
	if (uParam0->f_6 >= 4)
	{
		uParam0->f_6 = 0;
		uParam0->f_7++;
		if (uParam0->f_7 > 4)
		{
			uParam0->f_7 = 0;
		}
	}
	func_326(uParam0);
}

int func_252(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!EVENT::_0x1D1B448D719415AB(iParam0))
	{
		return 0;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(iParam0, 0, 0);
	if (iVar0 == 0)
	{
		return 0;
	}
	switch (iVar0)
	{
		case -196899787:
		case 178452260:
		case 869302489:
		case 1589923363:
			iVar1 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar0, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar1))
			{
				return 0;
			}
			iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
			if (!PED::IS_PED_HUMAN(iVar2))
			{
				return 0;
			}
			if (DECORATOR::DECOR_EXIST_ON(iVar2, "bIgnoreDamageChecking"))
			{
				return 0;
			}
			if (iVar2 == Global_1935630->f_33)
			{
				return 0;
			}
			if (iVar2 == Global_1935630->f_32)
			{
				return 0;
			}
			if (!func_327(iParam0, uParam1, iVar2))
			{
				return 0;
			}
			if (func_328(iParam0, iVar2) <= func_329(uParam1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_253(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_330(iParam2, 1, 1, 1, 0))
	{
		func_322(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_331(uParam1, 1);
	func_332();
}

int func_254(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_333(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_334(uParam1);
			if (func_335(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = func_336(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_331(uParam1, 1);
						return 1;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_331(uParam1, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_255(int iParam0, int iParam1, var uParam2)
{
	float fVar0;
	float fVar1;

	if (iParam1 == 0)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	fVar0 = 85f;
	if (func_337(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_334(uParam2);
		if (func_335(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > func_336(uParam2)
				{
					func_331(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_256(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	if (!PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar0))
	{
		return 0;
	}
	if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, 0, 0))
	{
		if (iVar2 == iVar0)
		{
			return 0;
		}
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		return 0;
	}
	if (Global_1935630->f_40 != 0)
	{
		if (PED::_0xB676EFDA03DADA52(Global_1935630->f_40, 1) == iParam0)
		{
			return 0;
		}
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (func_327(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_336(uParam1)
		{
			fVar3 = func_334(uParam1);
			if (uParam1->f_12 < fVar3)
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar1, 17))
				{
					if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, fVar3, -1f, -1f) && PED::_0x06087579E7AA85A9(iParam0, iVar1, -1f, fVar3, -1f, -1f))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_257(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_270();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return 1;
	}
	return 0;
}

int func_258(var uParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_338(uParam2);
			if (!WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) || Global_1935630->f_46 == joaat("weapon_unarmed"))
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
			else if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && WEAPON::_0xEA522F991E120D45(Global_1935630->f_46))
			{
				PED::_0xD355E2F1BB41087E(iParam1, 5f);
			}
			else
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
		}
		if ((!WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) || Global_1935630->f_46 == joaat("weapon_unarmed")) || (WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && WEAPON::_0x5809DBCA0A37C82B(Global_1935630->f_46)))
		{
			fVar2 = 3f;
			iVar1 = 3000;
		}
		else
		{
			fVar2 = 1f;
			iVar1 = 1000;
		}
		if (PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), iParam1, iVar1) && PED::_0x285D36C5C72B0569(uParam0) <= fVar2)
		{
			if (func_266(uParam2, iParam1))
			{
				func_331(uParam2, 1);
				return 1;
			}
		}
	}
	return 0;
}

int func_259(var uParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_12 < IntToFloat(func_339(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && !WEAPON::_0x5809DBCA0A37C82B(Global_1935630->f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_266(uParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_331(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_260(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_340(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(217247011, vVar0, uParam2->f_22))
				{
					func_331(uParam2, 1);
					return 1;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(956330317, vVar0, uParam2->f_27))
				{
					func_331(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-966930978, vVar0, uParam2->f_22))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("weapon_thrown_dynamite"), uParam2->f_26, &vVar4, 0, 0);
					if (func_341(iParam1, vVar0, vVar4))
					{
						func_331(uParam2, 1);
						return 1;
					}
				}
				break;
		}
	}
	else
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(217247011, vVar0, uParam2->f_22))
				{
					func_331(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-966930978, vVar0, uParam2->f_22))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("weapon_thrown_dynamite"), uParam2->f_26, &vVar7, 0, 0);
					if (func_341(iParam1, vVar0, vVar7))
					{
						func_331(uParam2, 1);
						return 1;
					}
				}
				break;
		}
	}
	return 0;
}

int func_261(int iParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	vector3 vVar2[2];
	vector3 vVar9;
	bool bVar12;
	bool bVar13;

	vVar9 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_327(iParam0, uParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_342(&(Global_1935630->f_34[iVar0]));
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_343(&(Global_1935630->f_34[iVar0])))
			{
				if (fVar1 < 35f)
				{
					if ((DECORATOR::DECOR_EXIST_ON(&(Global_1935630->f_34[iVar0]), "HorseTeamA") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA")) || (DECORATOR::DECOR_EXIST_ON(&(Global_1935630->f_34[iVar0]), "HorseTeamB") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB")))
					{
						*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
						*(vVar2[1 /*3*/]) = { vVar9 };
						uParam1->f_10 = iParam0;
						return 1;
					}
				}
			}
			if (func_344(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_345(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_346(uParam1, iParam0, fVar1, iVar0))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_262(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar5;
	vector3 vVar8;

	if (!EVENT::_0x1D1B448D719415AB(*iParam0))
	{
		return 0;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(*iParam0, 0, 0);
	switch (iVar0)
	{
		case -1695849405:
		case 2044016570:
			iVar1 = EVENT::_0x822A001BCEA5BD81(*iParam0, iVar0, 0, 0);
			iVar2 = EVENT::_0x38497F139981C5C9(*iParam0, iVar0, 0, 0);
			vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar1, false, false) };
			vVar8 = { ENTITY::GET_ENTITY_COORDS(iVar2, false, false) };
			EVENT::_0x1A5C5D350068A673(*iParam0, 0);
			return 1;
	}
	return 0;
}

int func_263(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_270();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

int func_264(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!bParam3)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iParam0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iParam0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, 1, 1))
			{
				return 1;
			}
			iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar1, 1, 1))
				{
					return 1;
				}
			}
			if (PED::IS_PED_ON_MOUNT(iVar0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(iVar0)))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PED::GET_MOUNT(iVar0), 1, 1))
					{
						return 1;
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
					{
						return 1;
					}
				}
			}
		}
	}
	else if (!bParam2)
	{
		if (func_347(iVar0, &iVar2))
		{
			if ((PED::IS_PED_RAGDOLL(iParam0) || PED::_0x947E43F544B6AB34(iParam0, PLAYER::PLAYER_ID(), 10, 1000)) || (!bParam4 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar2, iParam0)))
			{
				return 1;
			}
		}
	}
	if (!bParam2)
	{
		if (PED::_0x29FCE825613FEFCA(iParam0, 400))
		{
			return 1;
		}
	}
	if (func_348(iVar0, iParam0))
	{
		return 1;
	}
	if (PED::_0xD0B7AEB56229D317(PLAYER::PLAYER_PED_ID()) == iParam0)
	{
		if (PED::_0x0E99E3BF11BB6367(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_BEING_JACKED(iParam0))
		{
			if (PED::GET_PEDS_JACKER(iParam0) == iVar0)
			{
				return 1;
			}
		}
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(iVar0, 8, 0))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, true) || PED::IS_PED_BEING_STEALTH_KILLED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_265(var uParam0, int iParam1)
{
	int iVar0;

	if (!DECORATOR::DECOR_EXIST_ON(iParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (DECORATOR::DECOR_SET_INT(iParam1, "iDamageFrame", uParam0->f_5))
		{
		}
	}
	else if (uParam0->f_5 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

int func_266(var uParam0, int iParam1)
{
	if (func_349(uParam0))
	{
		return 1;
	}
	if (PED::_0x29FCE825613FEFCA(iParam1, 400))
	{
		return 1;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iParam1, true))
	{
		return 0;
	}
	if ((PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 8, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 9, true)) || PED::IS_PED_BEING_STEALTH_KILLED(iParam1))
	{
		return 0;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 16, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 10, true))
	{
		return 0;
	}
	if (PED::_0xB65A4DAB460A19BD(Global_35) != 0)
	{
		return 1;
	}
	if (!PED::IS_PED_RAGDOLL(iParam1))
	{
		return 1;
	}
	return 0;
}

int func_267(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return 1;
		}
		if (func_350(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_268()
{
}

int func_269(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
	if (iVar0 != 0 && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iVar0)))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
		if (func_351(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_270();
			return 1;
		}
		else if (VEHICLE::_0xA19447D83294E29F(iVar0, &iVar5, &iVar4))
		{
			if (iVar5 <= 0)
			{
				return 0;
			}
			else if (iVar4 == iVar5)
			{
				iVar6 = 0;
				while (iVar6 < iVar4)
				{
					iVar7 = VEHICLE::_0xA8BA0BAE0173457B(iVar0, iVar6);
					if (ENTITY::DOES_ENTITY_EXIST(iVar7))
					{
						if (func_78(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_9 = func_270();
								return 1;
							}
						}
					}
					iVar6++;
				}
			}
		}
	}
	return 0;
}

int func_270()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

int func_271()
{
	if (Global_1935630->f_42 == 0)
	{
		return 0;
	}
	if (Global_1935630->f_42 == Global_1935630->f_40)
	{
		return 0;
	}
	if (Global_1935630->f_43 <= 0)
	{
		return 0;
	}
	if ((func_270() - Global_1935630->f_43) >= 10000)
	{
		return 0;
	}
	return 1;
}

int func_272(var uParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
	{
		return 0;
	}
	if (!PED::IS_PED_HUMAN(iParam1))
	{
		return 0;
	}
	fVar0 = func_329(uParam0);
	if (uParam0->f_12 > func_352(uParam0) && uParam0->f_12 > fVar0)
	{
		return 0;
	}
	iVar2 = func_353(iParam1);
	iVar1 = func_354(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, Global_35, 1, 0) == 1)) || ((PED::_0x06087579E7AA85A9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, uParam0->f_14, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, uParam0->f_14, 1, 0) == 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_273(int iParam0, int iParam1, var uParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (uParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return func_355(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

int func_274(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (*uParam1 & 67108864 != 0)
	{
		return 1;
	}
	if (Global_1935630->f_24)
	{
		return 1;
	}
	if (*uParam1 & 33554432 != 0)
	{
		if (func_356(iParam0, uParam1, 1))
		{
			return 1;
		}
		if ((PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17)) && PED::_0x7F9B9791D4CB71F6(iParam0, Global_35, 1, 0) == 1)
		{
			return 1;
		}
	}
	iVar0 = PED::GET_JACK_TARGET(Global_35);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, true))
	{
		if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return 1;
		}
	}
	if (!EVENT::_0x1D1B448D719415AB(iParam0))
	{
		return 0;
	}
	iVar1 = EVENT::_0x796EECFF0C6D39BE(iParam0, 0, 0);
	if (iVar1 == 0)
	{
		return 0;
	}
	switch (iVar1)
	{
		case -2027383723:
		case -870494873:
		case 73464052:
		case 1201762715:
			iVar2 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (iVar4 != Global_35)
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			if (ENTITY::_0x88AD6CC10D8D35B2(iVar5))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			return 1;
		case -1601932249:
			iVar2 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (PED::_0x06087579E7AA85A9(iParam0, iVar4, -1f, -1f, -1f, -1f) && PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar4, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
				{
					if (!func_357(uParam1, iParam0))
					{
						if (func_78(iVar4, Global_36, 1) < 7f)
						{
							return 1;
						}
					}
				}
			}
			break;
	}
	return 0;
}

int func_275(int iParam0, var uParam1)
{
	if (!func_56(0))
	{
		return 0;
	}
	if (PED::IS_PED_FACING_PED(iParam0, Global_35, 90f))
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
		{
			return 1;
		}
	}
	return 0;
}

int func_276(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_270();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_277(int iParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_278(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_270();
	}
	else if (func_270() - uParam1->f_4) > func_358(uParam1)
	{
		return func_359(iParam0, uParam1, 0, -1082130432);
	}
	return 0;
}

int func_279(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = PED::GET_PED_SOURCE_OF_DEATH(iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam1, "bIgnoreDamageChecking"))
	{
		return 0;
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (Global_35 == iVar1 || Global_1935630->f_40 == iVar1)
	{
		return 1;
	}
	return 0;
}

bool func_280(int iParam0, int iParam1, bool bParam2, int iParam3)
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

bool func_281(int iParam0, int iParam1)
{
	if (func_133() != -1)
	{
		return false;
	}
	if (!func_154(iParam0))
	{
		return false;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(func_155(iParam0)))
	{
		return false;
	}
	if (iParam1 && !ENTITY::DOES_ENTITY_EXIST(func_360(iParam0)))
	{
		return false;
	}
	return !_NAMESPACE48::_0xEB98B38CA60742D7(func_155(iParam0));
}

int func_282(int iParam0)
{
	if (!func_154(iParam0))
	{
		return 0;
	}
	if (!func_361(iParam0, 2))
	{
		return 0;
	}
	if (func_363(func_362(iParam0)))
	{
		return func_360(iParam0);
	}
	return PED::_0xE76687023D8C8505(func_364(iParam0), 0);
}

int func_283(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 < 153))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 126:
			return 32;
		case 22:
			return 17;
		case 4:
		case 5:
		case 34:
		case 55:
		case 67:
			return 18;
		case 56:
		case 57:
		case 58:
		case 59:
			return 19;
		case 102:
		case 106:
		case 109:
		case 112:
		case 114:
		case 120:
			return 29;
		case 39:
		case 73:
		case 128:
		case 132:
		case 137:
		case 141:
		case 145:
			return 0;
		case 7:
		case 19:
		case 28:
		case 42:
		case 61:
		case 74:
		case 87:
		case 90:
		case 95:
		case 129:
		case 133:
		case 138:
		case 142:
		case 146:
			return 3;
		case 0:
		case 8:
		case 29:
		case 43:
		case 75:
		case 91:
		case 130:
		case 134:
		case 139:
		case 143:
		case 147:
			return 6;
		case 17:
		case 47:
			return 7;
		case 18:
		case 27:
		case 41:
		case 82:
		case 98:
		case 125:
			return 4;
		case 10:
		case 26:
		case 38:
		case 60:
		case 72:
		case 92:
			return 10;
		case 1:
		case 16:
		case 32:
		case 51:
		case 64:
		case 80:
			return 22;
		case 2:
		case 14:
		case 20:
		case 23:
		case 30:
		case 45:
		case 65:
		case 77:
		case 86:
		case 89:
		case 96:
		case 99:
			return 2;
		case 3:
		case 15:
		case 21:
		case 24:
		case 31:
		case 46:
		case 78:
		case 85:
		case 88:
		case 100:
			return 1;
		case 9:
		case 37:
		case 69:
			return 8;
		case 13:
		case 35:
		case 44:
		case 63:
		case 76:
		case 84:
		case 94:
			return 9;
		case 103:
		case 107:
		case 110:
		case 116:
			return 30;
		case 104:
		case 105:
		case 108:
		case 111:
		case 113:
		case 115:
		case 117:
		case 118:
		case 119:
		case 121:
		case 122:
		case 123:
		case 124:
			return 31;
		case 136:
			return 5;
		case 6:
		case 25:
		case 36:
		case 68:
			return 15;
		case 11:
		case 33:
		case 52:
		case 53:
		case 66:
		case 70:
		case 71:
		case 81:
		case 83:
		case 93:
		case 97:
			return 33;
		case 48:
			return 12;
		case 49:
			return 13;
		case 50:
			return 14;
		case 62:
		case 79:
			return 20;
		case 101:
			return 11;
		case 149:
			return 23;
		case 150:
			return 24;
		case 151:
			return 25;
		case 12:
		case 54:
			return 21;
		case 127:
			return 34;
		case 131:
		case 135:
		case 140:
		case 144:
		case 148:
			return 27;
		case 152:
			return 24;
		default:
			break;
	}
	return -1;
}

int func_284(int iParam0)
{
	if (!func_365(iParam0))
	{
		return 0;
	}
	return func_366(iParam0);
}

int func_285(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
	return 1;
}

bool func_286(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_287(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_183(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0 /*60*/] && iParam1) != 0;
}

bool func_288(int iParam0)
{
	return func_287(iParam0, 16, 1);
}

int func_289(int iParam0)
{
	if ((Global_40.f_4942[iParam0 /*60*/])->f_59 != 0)
	{
		return 1;
	}
	return 0;
}

int func_290(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_367(iVar0);
}

int func_291(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1944638739:
			return 36;
		case -1889597427:
			return 0;
		case -1884748965:
			return 32;
		case -1586649372:
			return 33;
		case -1506259487:
			return 5;
		case -1505978566:
			return 22;
		case -1489346253:
			return 38;
		case -1364808185:
			return 19;
		case -1292426046:
			return 8;
		case -1197751823:
			return 20;
		case -1176744536:
			return 24;
		case -1130865351:
			return 31;
		case -1130352927:
			return 1;
		case -893163968:
			return 17;
		case -735900586:
			return 28;
		case -676503695:
			return 6;
		case -450913544:
			return 18;
		case -426430150:
			return 29;
		case -358215195:
			return 39;
		case -338487716:
			return 11;
		case -207860920:
			return 26;
		case 99217379:
			return 27;
		case 304805134:
			return 21;
		case 383349088:
			return 7;
		case 389988485:
			return 2;
		case 673166414:
			return 25;
		case 788010710:
			return 34;
		case 1108822547:
			return 10;
		case 1145151482:
			return 23;
		case 1250092473:
			return 16;
		case 1367443060:
			return 4;
		case 1422688607:
			return 9;
		case 1600962399:
			return 13;
		case 1672288269:
			return 15;
		case 1742327865:
			return 12;
		case 1780904876:
			return 3;
		case 1788623170:
			return 30;
		case 1849504272:
			return 14;
		case 1900541263:
			return 37;
		case 1958421083:
			return 35;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

int func_292(int iParam0)
{
	struct<2> Var0;

	if (!func_150(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_293()
{
	var uVar0;
	int iVar1;

	iVar1 = func_214(func_368(65536), 0, 3, func_369(65536));
	if (func_130(iVar1))
	{
		uVar0 = func_294(iVar1);
		if (!func_286(uVar0, 4))
		{
			return 0;
		}
	}
	return 1;
}

int func_294(int iParam0)
{
	if (!func_130(iParam0))
	{
		return -1;
	}
	return func_370(iParam0);
}

bool func_295()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(99890643);
}

int func_296()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

var func_297(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || BUILTIN::SHIFT_LEFT(iParam0 & 1023, 5)) || BUILTIN::SHIFT_LEFT(iParam1 & 16383, 15));
}

int func_298(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	int iVar1;

	if (!func_371(iParam2))
	{
		return -1;
	}
	if (iParam0 < 0 || iParam0 > 511)
	{
		return -1;
	}
	if (iParam1 < 0 || iParam1 > 255)
	{
		return -1;
	}
	if (iParam3 < 0 || iParam3 > func_296())
	{
		return -1;
	}
	uVar0 = func_297(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_372(iVar1, 0);
	func_373(iVar1, 0);
	func_374(iVar1, 0);
	func_375(iVar1, 0);
	func_376(iVar1, uVar0);
	if (iParam4 != 0)
	{
		func_377(iVar1, iParam4);
	}
	return iVar1;
}

int func_299(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_6;
	}
	return -15;
}

void func_300(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_378(uParam0, iParam6);
	func_379(uParam0, iParam5);
	func_380(uParam0, iParam4);
	func_381(uParam0, iParam3);
	func_382(uParam0, iParam2);
	func_383(uParam0, iParam1);
}

int func_301(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 76:
			iVar0 = 3;
			break;
		case 78:
			iVar0 = 382;
			break;
		case 105:
			iVar0 = 72;
			break;
		case 38:
			iVar0 = 509;
			break;
		case 26:
			iVar0 = 472;
			break;
		case 115:
			iVar0 = 348;
			break;
		case 5:
			iVar0 = 256;
			break;
	}
	return iVar0;
}

int func_302(int iParam0)
{
	if (func_133() != -1)
	{
		return func_104();
	}
	if (!func_154(iParam0))
	{
		return func_104();
	}
	return (Global_24886[iParam0 /*2*/])->f_1;
}

int func_303(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 78:
			iVar0 = 382;
			break;
		case 5:
			iVar0 = 256;
			break;
		case 105:
			iVar0 = 70;
			break;
		case 26:
			iVar0 = 472;
			break;
		case 76:
			iVar0 = 3;
			break;
		case 38:
			iVar0 = 509;
			break;
		case 115:
			iVar0 = 348;
			break;
		default:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_304(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_229(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_228(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_227(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_225(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return 0;
	}
	iVar4 = func_224(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_226(iParam0);
	if (iVar5 < 1 || iVar5 > func_230(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_305(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_1058888->f_40501 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar1 = (Global_1058888->f_40501 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if (&Global_1058888->f_40501.f_1[iVar2 /*2*/] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if (&Global_1058888->f_40501.f_1[iVar2 /*2*/] < iParam0)
		{
			iVar0 = iVar2 + 1;
		}
		else
		{
			return iVar2;
		}
	}
	return -1;
}

int func_306(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_307(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1993529370:
			return 14;
		case -1910231185:
			return 27;
		case -1779466334:
			return 30;
		case -1751068532:
			return 19;
		case -1600776215:
			return 0;
		case -1403291038:
			return 13;
		case -1350098362:
			return 28;
		case -1132827806:
			return 18;
		case -1066004925:
			return 36;
		case -586199837:
			return 23;
		case -529686691:
			return 20;
		case -505280232:
			return 29;
		case -423064657:
			return 9;
		case -415041951:
			return 3;
		case -316764041:
			return 15;
		case -156236308:
			return 1;
		case -115118166:
			return 8;
		case -27924880:
			return 4;
		case 0:
			return 38;
		case 508286680:
			return 5;
		case 557524588:
			return 11;
		case 623901469:
			return 16;
		case 651189962:
			return 31;
		case 830459706:
			return 25;
		case 1274330613:
			return 22;
		case 1302444626:
			return 34;
		case 1398684735:
			return 26;
		case 1556254948:
			return 2;
		case 1570236479:
			return 6;
		case 1590600971:
			return 10;
		case 1598344177:
			return 21;
		case 1601295776:
			return 33;
		case 1618820662:
			return 32;
		case 1754500170:
			return 35;
		case 1763394652:
			return 17;
		case 1792646445:
			return 12;
		case 1831828781:
			return 24;
		case 1843135693:
			return 7;
		case 1869671285:
			return 37;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

int func_308(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(iParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

void func_309(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case 1234009870:
			*uParam1 = 1802325493;
			*uParam2 = 1681219929; /* GXTEntry: "Revolver Cartridges - Regular" */
			break;
		case -1202134084:
			*uParam1 = -864693164;
			*uParam2 = 1681219929; /* GXTEntry: "Revolver Cartridges - Regular" */
			break;
		case 1297050066:
			*uParam1 = -603289736;
			*uParam2 = 1232099469; /* GXTEntry: "Revolver Cartridges - Express" */
			break;
		case -1780177928:
			*uParam1 = -1803237008;
			*uParam2 = -2084181920; /* GXTEntry: "Revolver Cartridges - High Velocity" */
			break;
		case -1467836497:
			*uParam1 = -1175521284;
			*uParam2 = joaat("ammo_pistol");
			break;
		case 1723805622:
			*uParam1 = -1559549888;
			*uParam2 = joaat("ammo_pistol");
			break;
		case -153287664:
			*uParam1 = -1650796693;
			*uParam2 = 836939099; /* GXTEntry: "Pistol Cartridges - Express" */
			break;
		case 1845082736:
			*uParam1 = -1521597660;
			*uParam2 = -1411815376; /* GXTEntry: "Pistol Cartridges - High Velocity" */
			break;
		case 406755377:
			*uParam1 = -1288829256;
			*uParam2 = joaat("ammo_rifle");
			break;
		case 1469029564:
			*uParam1 = 1393841762;
			*uParam2 = joaat("ammo_rifle");
			break;
		case 45760211:
			*uParam1 = -851229814;
			*uParam2 = 1654725195; /* GXTEntry: "Rifle Cartridges - Express" */
			break;
		case -276295943:
			*uParam1 = 914704115;
			*uParam2 = 1858824185; /* GXTEntry: "Rifle Cartridges - High Velocity" */
			break;
		case -2029793397:
			*uParam1 = -219896679;
			*uParam2 = -1330115686; /* GXTEntry: "Repeater Cartridges - Regular" */
			break;
		case 2120467495:
			*uParam1 = 516838334;
			*uParam2 = -1330115686; /* GXTEntry: "Repeater Cartridges - Regular" */
			break;
		case -2075613923:
			*uParam1 = -385817936;
			*uParam2 = -578347576; /* GXTEntry: "Repeater Cartridges - Express" */
			break;
		case 122656217:
			*uParam1 = 1192843172;
			*uParam2 = 231465488; /* GXTEntry: "Repeater Cartridges - High Velocity" */
			break;
		case 2107187484:
			*uParam1 = 954871696;
			*uParam2 = joaat("ammo_shotgun");
			break;
		case -791844268:
			*uParam1 = -1217273132;
			*uParam2 = joaat("ammo_shotgun");
			break;
		case 305770744:
			*uParam1 = -2087227528;
			*uParam2 = 314966081; /* GXTEntry: "Shotgun - Slug" */
			break;
		case 550900979:
			*uParam1 = -618066518;
			*uParam2 = 2113196069;
			break;
	}
}

struct<14> func_310(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<14> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_13 = -1;
	if (iParam0 != 0)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1591664384)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0 && iParam3 != -1591664384)
	{
		Var0.f_3 = iParam3;
	}
	if (iParam4 != 0)
	{
		Var0.f_4 = iParam4;
	}
	if (iParam5 != 0)
	{
		Var0.f_5 = iParam5;
	}
	return Var0;
}

struct<4> func_311(bool bParam0)
{
	int iVar0;

	iVar0 = func_238(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224214))
		{
			*Global_1224214 = { func_385(923904168, func_384(bParam0), -740156546, bParam0) };
		}
		return *Global_1224214;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224222))
		{
			*Global_1224222 = { func_385(923904168, func_384(bParam0), -740156546, 0) };
		}
		return *Global_1224222;
	}
	return func_385(923904168, func_384(bParam0), -740156546, 0);
}

void func_312(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_313(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	*uParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_238(bParam3), uParam0, uParam2);
	if (*uParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_314(struct<2> Param0, var uParam2, float fParam3, float fParam4, int iParam5, int iParam6)
{
	if (Param0 < fParam3)
	{
		if (Param0.f_1 < fParam4)
		{
			return (iParam5 + iParam6);
		}
		else
		{
			return iParam5;
		}
	}
	if (Param0.f_1 < fParam4)
	{
		return (iParam5 + iParam6) + 1;
	}
	return iParam5 + 1;
}

bool func_315(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_316(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_317(int iParam0)
{
	return !iParam0 <= 0;
}

bool func_318(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_317(iParam0))
		{
			return false;
		}
	}
	if (Global_1572887->f_12 != -1)
	{
		return (Global_36637[iParam0] && iParam1) != 0;
	}
	return (Global_40.f_9274[iParam0] && iParam1) != 0;
}

int func_319(int iParam0, int iParam1, int iParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	if ((iParam2 && func_133() == 0) && !UNLOCK::_UNLOCK_IS_VISIBLE(iParam0))
	{
		return 0;
	}
	if (!func_386(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
	{
		return 0;
	}
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		iVar13 = &uVar0[iVar12];
		if (iVar13 == 0)
		{
		}
		else if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar13))
		{
			return 1;
		}
		iVar12++;
	}
	return 0;
}

void func_320(int iParam0)
{
	int iVar0;
	var uVar1;

	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_387();
	if (Global_1935630->f_27)
	{
		Global_1935630->f_28 = MISC::GET_GAME_TIMER();
	}
	if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_44))
	{
		if (PED::IS_PED_SHOOTING(Global_35))
		{
			if (WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar1))
			{
			}
			else
			{
				uVar1 = Global_1935630->f_44;
			}
			Global_1935630->f_46 = uVar1;
		}
	}
	switch (iVar0)
	{
		case 0:
			func_388(&(Global_1935630->f_34), &(Global_1935630->f_39));
			Global_1935630->f_38 = iParam0;
			break;
		case 1:
			Global_1935630->f_30 = PLAYER::_0x72AD59F7B7FB6E24(PLAYER::PLAYER_ID(), 4000);
			if (!Global_1935630->f_30)
			{
				if (Global_1935630->f_44 == joaat("weapon_lasso"))
				{
					Global_1935630->f_30 = PED::_0xB65A4DAB460A19BD(Global_35) != 0;
				}
			}
			break;
		case 2:
			switch (Global_1935630->f_46)
			{
				case joaat("weapon_lasso"):
					Global_1935630->f_25 = 0;
					break;
				default:
					if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && WEAPON::_0x5809DBCA0A37C82B(Global_1935630->f_46))
					{
						Global_1935630->f_25 = PED::_0x285D36C5C72B0569(Global_35) <= 3f;
					}
					else
					{
						Global_1935630->f_25 = PED::_0x285D36C5C72B0569(Global_35) <= 1f;
					}
					if (Global_1935630->f_25)
					{
						Global_1935630->f_29 = MISC::GET_FRAME_COUNT();
					}
					break;
			}
			break;
		default:
			Global_1935630->f_38 = iParam0 + 1;
			break;
	}
	Global_22 |= 4;
}

var func_321(int iParam0)
{
	return &(Global_1109400->f_275[iParam0 /*3*/]);
}

void func_322(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_323(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_389(bParam0, &uVar0, &uVar1))
	{
		return 1;
	}
	return 0;
}

void func_324(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_325(var uParam0)
{
	int iVar0;

	iVar0 = Global_1935630->f_40;
	if (func_133() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_390(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_390(uParam0);
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_354(iVar0) == -1)
	{
		return 0;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iVar0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(iVar0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
	{
		return 0;
	}
	uParam0->f_14 = iVar0;
	return 1;
}

void func_326(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_391(uParam0);
	}
}

int func_327(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_HUMAN(iParam2))
	{
		iVar1 = func_354(iParam2);
	}
	else
	{
		iVar1 = func_353(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_354(iParam0);
	}
	else
	{
		iVar0 = func_353(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return 1;
		}
	}
	if (func_250(*uParam1, 8388608))
	{
		return 1;
	}
	iVar2 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0);
	iVar3 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam2);
	switch (iVar2)
	{
		case -1976316465:
		case -1505548114:
		case -350651841:
		case -50399569:
		case 106566339:
		case 707888648:
		case 841021282:
			switch (iVar3)
			{
				case -1976316465:
				case -1505548114:
				case -350651841:
				case 841021282:
					return 1;
			}
			break;
	}
	if (iVar2 == iVar3)
	{
		return 1;
	}
	return 0;
}

float func_328(int iParam0, int iParam1)
{
	return func_350(iParam0, iParam1, 1, 1);
}

float func_329(var uParam0)
{
	return uParam0->f_26;
}

int func_330(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam0)
	{
		case 8:
			return iParam2;
		case 4:
		case 16:
			return iParam1;
		case 32:
		case 64:
		case 128:
			return iParam3;
		case 1:
		case 2:
		case 2048:
			return 1;
		case 8192:
			return iParam4;
		default:
			break;
	}
	return 0;
}

void func_331(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_322(uParam0, 134217728);
	}
	else
	{
		func_324(uParam0, 134217728);
	}
}

void func_332()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

int func_333(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return 0;
	}
	if (Global_1935630->f_44 == joaat("weapon_lasso") && Global_1935630->f_27)
	{
	}
	else if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, 0, 0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar2) && iParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2))
		{
			return 0;
		}
	}
	if (Global_1935630->f_40 != 0)
	{
		if (PED::_0xB676EFDA03DADA52(Global_1935630->f_40, 1) == iParam0)
		{
			return 0;
		}
	}
	if (bParam3)
	{
		if (((WEAPON::_0xCB690F680A3EA971(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, iParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_350(iVar0, iParam0, 1, 1) <= 4f)
		{
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, iParam5) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0))
	{
		if ((bParam1 && WEAPON::_0xCB690F680A3EA971(iVar0, 4)) || (bParam2 && WEAPON::_0xCB690F680A3EA971(iVar0, 2)))
		{
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_0x6AD66548840472E5(func_392(iVar0, 0)))
		{
			if (func_393(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_334(var uParam0)
{
	return uParam0->f_17;
}

int func_335(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_12 > fParam3)
	{
		return 0;
	}
	fVar0 = -1f;
	if (!func_250(*uParam0, 4194304))
	{
		fVar0 = fParam3;
	}
	if (PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, fParam3, -1f, fVar0))
	{
		return 1;
	}
	if (*uParam0 & 32768 != 0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17))
		{
			return 1;
		}
	}
	return 0;
}

int func_336(var uParam0)
{
	return uParam0->f_18;
}

int func_337(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return 0;
	}
	if (bParam3)
	{
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, 0) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0))
	{
		if ((bParam1 && WEAPON::_0xCB690F680A3EA971(iVar0, 4)) || (bParam2 && WEAPON::_0xCB690F680A3EA971(iVar0, 2)))
		{
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_0x6AD66548840472E5(func_392(iVar0, 0)))
		{
			if (func_394(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_338(var uParam0)
{
	return uParam0->f_23;
}

int func_339(var uParam0)
{
	return uParam0->f_21;
}

int func_340(var uParam0)
{
	int iVar0;

	switch (uParam0->f_7)
	{
		case 0:
			switch (uParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 2:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 1:
			switch (uParam0->f_6)
			{
				case 3:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
		case 2:
			switch (uParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 1:
					iVar0 = 2;
					break;
			}
			break;
		case 3:
			switch (uParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 4:
			switch (uParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
	}
	if (*uParam0 & 16777216 != 0)
	{
		if (iVar0 == 2)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_341(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_395(iParam0, vParam4, 0.5f))
	{
		if (ENTITY::_0x0C9DBF48C6BA6E4C(iParam0, vParam4, 17))
		{
			return 1;
		}
	}
	if (BUILTIN::VDIST(vParam1, vParam4) < 5f)
	{
		return 1;
	}
	return 0;
}

int func_342(int iParam0)
{
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, false))
	{
		if (Global_1935630->f_44 == joaat("weapon_unarmed"))
		{
			return 1;
		}
		if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_46))
		{
			if (WEAPON::_0x959383DCD42040DA(Global_1935630->f_46) || WEAPON::_0xC4DEC3CA8C365A5D(Global_1935630->f_46))
			{
				return 1;
			}
		}
	}
	if (func_396(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_343(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (PED::_0x772A1969F649E902(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_344(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_397(iParam1))
		{
			return 0;
		}
	}
	fVar0 = 5f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return 1;
	}
	return 0;
}

int func_345(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_397(iParam1))
		{
			return 0;
		}
	}
	fVar0 = 10f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return 1;
	}
	return 0;
}

int func_346(var uParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40f;
	if (func_397(iParam1))
	{
		return 0;
	}
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x2BA9D7BF629F920C(iParam1);
	}
	if (fParam2 < fVar0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, &(Global_1935630->f_34[iParam3]), 17))
		{
			if (PED::_0x06087579E7AA85A9(iParam1, &(Global_1935630->f_34[iParam3]), -1f, -1f, -1f, -1f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_347(int iParam0, var uParam1)
{
	if (!TASK::_0xEFC4303DDC6E60D3(iParam0))
	{
		return 0;
	}
	*uParam1 = TASK::_0xED1F514AF4732258(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return 0;
	}
	if (PED::IS_PED_DEAD_OR_DYING(*uParam1, true))
	{
		return 0;
	}
	if (!PED::_0x2D64376CF437363E(*uParam1))
	{
		return 0;
	}
	return 1;
}

int func_348(int iParam0, int iParam1)
{
	if (PED::_0xB65A4DAB460A19BD(iParam0) == iParam1)
	{
		return 1;
	}
	if (func_398(iParam0, 1, 0, 0) != joaat("weapon_lasso"))
	{
		return 0;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(iParam0, 16, 0))
	{
		if (PED::GET_MELEE_TARGET_FOR_PED(iParam0) == iParam1)
		{
			return 1;
		}
	}
	return 0;
}

bool func_349(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

float func_350(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) && iParam3)
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) && iParam3)
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false), bParam2);
}

int func_351(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_78(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

float func_352(var uParam0)
{
	return uParam0->f_24;
}

int func_353(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, true))
	{
		return -1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseOwnerTeamA"))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseOwnerTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_354(int iParam0)
{
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(iParam0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
	{
		return -1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseTeamA") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseTeamA"))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseTeamB") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_355(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	float fVar2;

	if (Global_1935630->f_40 != 0)
	{
		bVar0 = true;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), 1, 1))
		{
			return 1;
		}
	}
	if (bVar0)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, Global_1935630->f_40, 1, 1))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (PED::_0x947E43F544B6AB34(iParam0, PLAYER::GET_PLAYER_INDEX(), 10, 400))
		{
			if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
		if (PED::_0x947E43F544B6AB34(iParam0, PLAYER::GET_PLAYER_INDEX(), 11, 400))
		{
			if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
		if (bParam3)
		{
			if (func_347(Global_35, &iVar1))
			{
				if (fParam4 < 4f)
				{
					if (PED::IS_PED_RAGDOLL(iParam0) || (!bParam2 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar1, iParam0)))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (PED::_0x29FCE825613FEFCA(iParam0, 400))
		{
			return 1;
		}
	}
	if (fParam4 <= 0f)
	{
		fVar2 = func_350(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
	}
	else
	{
		fVar2 = fParam4;
	}
	if (fVar2 < 1f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0))
		{
			if (!bParam2)
			{
				return 1;
			}
			else if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
	}
	if (bVar0)
	{
		if (func_350(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_1935630->f_40, iParam0))
			{
				if (!bParam2)
				{
					return 1;
				}
				else if (PED::IS_PED_RAGDOLL(iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_356(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_389(1, &iVar0, &iVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iVar0 != iParam0)
		{
			if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
				{
					if (!bParam2 || !func_357(uParam1, iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (iVar1 != iParam0)
		{
			if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
			{
				if (!bParam2 || !func_357(uParam1, iVar1))
				{
					if (func_78(iVar1, Global_36, 1) < 5f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_357(var uParam0, int iParam1)
{
	int iVar0;

	if (DECORATOR::DECOR_EXIST_ON(iParam1, "bIsCriminal") && DECORATOR::DECOR_GET_BOOL(iParam1, "bIsCriminal"))
	{
		return 1;
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam1, 4, false))
	{
		return 1;
	}
	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam1);
	switch (iVar0)
	{
		case -1996978098:
		case -1448293989:
		case -350226955:
		case 266218800:
		case 555364152:
		case 1078461828:
		case 1222652248:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_358(var uParam0)
{
	return uParam0->f_20;
}

int func_359(int iParam0, var uParam1, bool bParam2, float fParam3)
{
	if (!bParam2)
	{
		if (uParam1->f_4 == 0)
		{
			return 0;
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = uParam1->f_12;
	}
	if (PED::IS_PED_FACING_PED(iParam0, Global_35, 90f))
	{
		if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return 1;
		}
	}
	else if (fParam3 < 1.5f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, Global_35))
		{
			return 1;
		}
	}
	return 0;
}

int func_360(int iParam0)
{
	int iVar0;

	iVar0 = func_155(iParam0);
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

bool func_361(int iParam0, int iParam1)
{
	if (func_133() != -1)
	{
		return false;
	}
	if (!func_154(iParam0))
	{
		return false;
	}
	return (Global_24886[iParam0 /*2*/] && iParam1) != 0;
}

int func_362(int iParam0)
{
	if (!func_154(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/];
}

bool func_363(int iParam0)
{
	return iParam0 != 0;
}

int func_364(int iParam0)
{
	if (!func_154(iParam0))
	{
		return 0;
	}
	return _NAMESPACE48::_0xA00DF706C60173D1(Global_1895087[iParam0 /*3*/]);
}

int func_365(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_366(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_40.f_7857[iVar1]), iVar2);
}

int func_367(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if ((Global_1946804->f_57[iVar0 /*11*/])->f_8 == iParam0)
		{
			return func_399(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_368(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 25;
		case 4:
			return 105;
		case 8:
			return 78;
		case 16:
			return 51;
		case 32:
			return 41;
		case 64:
			return 108;
		case 128:
			return 44;
		case 256:
			return 53;
		case 512:
			return 84;
		case 1024:
			return 22;
		case 2048:
			return 73;
		case 4096:
			return 103;
		case 8192:
			return 18;
		case 16384:
			return 46;
		case 32768:
			return 0;
		case 65536:
			return 106;
		case 131072:
			return 47;
		case 262144:
			return 101;
		default:
			break;
	}
	return -1;
}

int func_369(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 657250500;
		case 4:
			return -520696743;
		case 8:
			return -295901403;
		case 16:
			return -1445837674;
		case 32:
			return -75278298;
		case 64:
			return -675249331;
		case 128:
			return -1822243680;
		case 256:
			return -1307199059;
		case 512:
			return -17701163;
		case 1024:
			return -172170798;
		case 2048:
			return 1836682179;
		case 4096:
			return -67934460;
		case 8192:
			return 410776537;
		case 16384:
			return -240986174;
		case 32768:
			return 1505721140;
		case 65536:
			return 2023114891;
		case 131072:
			return -30217677;
		case 262144:
			return 653209800;
		default:
			break;
	}
	return 0;
}

int func_370(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_3;
	}
	return 0;
}

bool func_371(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_372(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_12105[iParam0 /*7*/])->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_400(iParam0);
	}
	else
	{
		func_401(iParam0, iParam1);
	}
	func_402();
}

void func_373(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_2 = iParam1;
}

void func_374(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_3 = iParam1;
}

void func_375(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_4 = iParam1;
}

void func_376(int iParam0, var uParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12105[iParam0 /*7*/] = uParam1;
		return;
	}
	Global_1058888->f_498[iParam0 /*2*/] = uParam1;
}

void func_377(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_12105[iParam0 /*7*/])->f_5 = iParam1;
		return;
	}
	(Global_1058888->f_498[iParam0 /*2*/])->f_1 = iParam1;
}

void func_378(var uParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT((1898 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT((iParam1 - 1898), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_379(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 62914560);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_380(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_224(*uParam0);
	iVar1 = func_225(*uParam0);
	if (iParam1 < 1 || iParam1 > func_230(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4063232);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_381(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 126976);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_382(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4032);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_383(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 63);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

struct<4> func_384(bool bParam0)
{
	return func_385(1328661203, func_403(), -1591664384, bParam0);
}

struct<4> func_385(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_150(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_238(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_386(int iParam0, int iParam1, var uParam2, var uParam3)
{
	struct<37> Var0;
	int iVar47;

	*uParam3 = 0;
	if (*uParam2 < 10)
	{
		return 0;
	}
	if (!func_150(iParam0, 0))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(iParam0, iParam1, &Var0))
	{
		return 0;
	}
	*uParam3 = Var0.f_35;
	iVar47 = 0;
	while (iVar47 < Var0.f_35)
	{
		(*uParam2)[iVar47] = &Var0.f_36[iVar47];
		iVar47++;
	}
	return 1;
}

int func_387()
{
	if (func_404())
	{
		return 0;
	}
	if (Global_1572887->f_12 == -1)
	{
		if (Global_1935630->f_44 == joaat("weapon_lasso"))
		{
			return PAD::IS_CONTROL_PRESSED(0, 130948705);
		}
		return PED::GET_PED_RESET_FLAG(Global_35, 311);
	}
	else
	{
		return &(Global_1955569->f_992[2]);
	}
	return 0;
}

void func_388(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = PLAYER::PLAYER_ID();
	if (!PLAYER::_0x72AD59F7B7FB6E24(iVar2, 200))
	{
		*uParam1 = 0;
		return;
	}
	if (PLAYER::_0x1A6E84F13C952094(iVar2, 200, uParam0))
	{
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0[iVar1]))
			{
			}
			else if (!PED::IS_PED_HUMAN(uParam0[iVar1]) && !(DECORATOR::DECOR_EXIST_ON(uParam0[iVar1], "HorseTeamA") || DECORATOR::DECOR_EXIST_ON(uParam0[iVar1], "HorseTeamB")))
			{
			}
			else if (DECORATOR::DECOR_EXIST_ON(uParam0[iVar1], "bIgnoreDamageChecking"))
			{
			}
			else
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	*uParam1 = iVar0;
}

int func_389(bool bParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1935630->f_32))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1935630->f_32))
		{
			*uParam1 = Global_1935630->f_32;
			iVar0 = 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1935630->f_33))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1935630->f_33))
		{
			if (PED::_0x3AA24CCC0D451379(Global_1935630->f_33) || ENTITY::IS_ENTITY_DEAD(Global_1935630->f_33))
			{
				*uParam2 = Global_1935630->f_33;
				iVar0 = 1;
			}
		}
	}
	if (Global_1935630->f_30 && !PED::IS_PED_INJURED(Global_35))
	{
		iVar1 = PED::_0xB65A4DAB460A19BD(Global_35);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (!bParam0 || PED::IS_PED_HUMAN(iVar1))
			{
				*uParam1 = iVar1;
				iVar0 = 1;
			}
		}
	}
	return iVar0;
}

int func_390(var uParam0)
{
	int iVar0;
	int iVar1;

	if (iVar0 == 0)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(0, -171675621))
		{
			if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar1, 0, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						if (PED::_0x772A1969F649E902(ENTITY::GET_ENTITY_MODEL(iVar1)))
						{
							iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
							return iVar0;
						}
					}
				}
			}
		}
	}
	if (uParam0->f_6 == 3)
	{
		if (iVar0 == 0)
		{
			if (!Global_1935630->f_12)
			{
				iVar0 = PED::_0x4B19F171450E0D4F(Global_35);
			}
		}
		if (iVar0 == 0)
		{
			iVar0 = PED::_0xB65A4DAB460A19BD(Global_35);
		}
		if (iVar0 != 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!PED::_0x772A1969F649E902(ENTITY::GET_ENTITY_MODEL(iVar0)))
				{
					iVar0 = 0;
				}
			}
		}
	}
	return iVar0;
}

void func_391(var uParam0)
{
	int iVar0;

	if (Global_1935630->f_38 == 0)
	{
		func_324(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(Global_1935630->f_34[iVar0])))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(&(Global_1935630->f_34[iVar0])))
				{
					func_322(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}

var func_392(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

int func_393(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_394(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_394(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	bVar2 = HUD::GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(vParam0, &fVar0, &fVar1);
	if (bVar2 == 0)
	{
		if (((fVar0 > fParam3 && fVar0 < fParam4) && fVar1 > fParam5) && fVar1 < fParam6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_395(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

int func_396(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (iParam3 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (WEAPON::_0x9E2D5D6BC97A5F1E(iParam0, joaat("weapon_unarmed"), iParam1))
		{
			return 1;
		}
		else if (!bParam2)
		{
			if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_44))
			{
				if (WEAPON::_0x959383DCD42040DA(Global_1935630->f_44) || Global_1935630->f_44 == joaat("weapon_melee_knife"))
				{
					if (WEAPON::_0x9E2D5D6BC97A5F1E(iParam0, Global_1935630->f_44, iParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_397(int iParam0)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(iParam0))
	{
		return 0;
	}
	iVar0 = TASK::_0x2D0571BB55879DA2(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if ((((((((iVar0 == -1689755873 || iVar0 == 1690225020) || iVar0 == 1774730608) || iVar0 == 309374745) || iVar0 == -363194080) || iVar0 == 640190094) || iVar0 == -1085971095) || iVar0 == 49488831) || iVar0 == 343112864)
	{
		return 1;
	}
	if (iVar0 == -2016812721 || iVar0 == 1097070152)
	{
		iVar0 = PED::_0xC22AA08A8ADB87D4(iParam0);
		if (iVar0 == 970972795)
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_398(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = joaat("weapon_unarmed");
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || !PED::IS_PED_HUMAN(iParam0))
	{
		return iVar0;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam1, iParam2, bParam3))
	{
		return iVar0;
	}
	return iVar0;
}

int func_399(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1889597427;
		case 1:
			return -1130352927;
		case 2:
			return 389988485;
		case 3:
			return 1780904876;
		case 4:
			return 1367443060;
		case 5:
			return -1506259487;
		case 6:
			return -676503695;
		case 7:
			return 383349088;
		case 8:
			return -1292426046;
		case 9:
			return 1422688607;
		case 10:
			return 1108822547;
		case 11:
			return -338487716;
		case 12:
			return 1742327865;
		case 13:
			return 1600962399;
		case 14:
			return 1849504272;
		case 15:
			return 1672288269;
		case 16:
			return 1250092473;
		case 17:
			return -893163968;
		case 18:
			return -450913544;
		case 19:
			return -1364808185;
		case 20:
			return -1197751823;
		case 21:
			return 304805134;
		case 22:
			return -1505978566;
		case 23:
			return 1145151482;
		case 24:
			return -1176744536;
		case 25:
			return 673166414;
		case 26:
			return -207860920;
		case 27:
			return 99217379;
		case 28:
			return -735900586;
		case 29:
			return -426430150;
		case 30:
			return 1788623170;
		case 31:
			return -1130865351;
		case 32:
			return -1884748965;
		case 33:
			return -1586649372;
		case 34:
			return 788010710;
		case 35:
			return 1958421083;
		case 36:
			return -1944638739;
		case 37:
			return 1900541263;
		case 38:
			return -1489346253;
		case 39:
			return -358215195;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

int func_400(int iParam0)
{
	int iVar0;

	iVar0 = func_305(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_405(iVar0);
}

int func_401(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	if (Global_1058888->f_40501 >= 32)
	{
		return -1;
	}
	Var0 = -1;
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	if (Global_1058888->f_40501 == 0)
	{
		*(Global_1058888->f_40501.f_1[Global_1058888->f_40501 /*2*/]) = { Var0 };
		Global_1058888->f_40501++;
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < Global_1058888->f_40501)
	{
		if (iParam0 == &Global_1058888->f_40501.f_1[iVar2 /*2*/])
		{
			*(Global_1058888->f_40501.f_1[iVar2 /*2*/]) = { Var0 };
			return iVar2;
		}
		else if (iParam0 > &Global_1058888->f_40501.f_1[iVar2 /*2*/])
		{
			iVar2++;
		}
		else if (iParam0 < &Global_1058888->f_40501.f_1[iVar2 /*2*/])
		{
			func_406(iVar2);
			*(Global_1058888->f_40501.f_1[iVar2 /*2*/]) = { Var0 };
			return iVar2;
		}
	}
	if (Global_1058888->f_40501 < 31)
	{
		iVar2 = Global_1058888->f_40501;
		*(Global_1058888->f_40501.f_1[iVar2 /*2*/]) = { Var0 };
		Global_1058888->f_40501++;
		if (Global_1058888->f_40501 > 32)
		{
			Global_1058888->f_40501 = 32;
		}
		return iVar2;
	}
	return -1;
}

void func_402()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

struct<4> func_403()
{
	struct<4> Var0;

	return Var0;
}

int func_404()
{
	switch (Global_1935630->f_44)
	{
		case joaat("weapon_melee_lantern"):
		case joaat("weapon_kit_binoculars"):
		case joaat("weapon_melee_lantern_electric"):
		case joaat("weapon_melee_davy_lantern"):
			return 1;
		default:
			break;
	}
	return 0;
}

int func_405(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = iParam0;
	while (iVar0 < Global_1058888->f_40501)
	{
		if (iVar0 + 1 < 32)
		{
			*(Global_1058888->f_40501.f_1[iVar0 /*2*/]) = { *(Global_1058888->f_40501.f_1[iVar0 + 1 /*2*/]) };
		}
		iVar0++;
	}
	Var1 = -1;
	if (Global_1058888->f_40501 < 32)
	{
		*(Global_1058888->f_40501.f_1[Global_1058888->f_40501 /*2*/]) = { Var1 };
	}
	Global_1058888->f_40501 = (Global_1058888->f_40501 - 1);
	if (Global_1058888->f_40501 < 0)
	{
		Global_1058888->f_40501 = 0;
	}
	return 1;
}

int func_406(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = (Global_1058888->f_40501 - 1);
	Var1 = -1;
	while (iVar0 >= iParam0)
	{
		if (iVar0 + 1 < 32)
		{
			*(Global_1058888->f_40501.f_1[iVar0 + 1 /*2*/]) = { *(Global_1058888->f_40501.f_1[iVar0 /*2*/]) };
		}
		iVar0 = (iVar0 - 1);
	}
	*(Global_1058888->f_40501.f_1[iParam0 /*2*/]) = { Var1 };
	Global_1058888->f_40501++;
	if (Global_1058888->f_40501 > 32)
	{
		Global_1058888->f_40501 = 32;
	}
	return 1;
}

