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
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	struct<16> Local_23 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	bool bLocal_41 = false;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	struct<4> Local_47 = { 0, 0, 0, 0 } ;
	int iLocal_51 = 0;
	var uLocal_52 = 20;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_118 = 20000;
	iLocal_121 = vScriptParam_0.x;
	iLocal_119 = vScriptParam_0.z;
	func_1();
	func_2();
	iLocal_120 = MISC::GET_GAME_TIMER();
	iVar0 = 0;
	while (func_3())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_120)
		{
			iLocal_120 = 0;
			func_4(iLocal_121, &iLocal_119);
			switch (iLocal_119)
			{
				case 0:
					iLocal_119 = 1;
					break;
				case 1:
					func_5(iLocal_121);
					if (func_7(func_6(iLocal_121)))
					{
						func_8(func_6(iLocal_121), 4);
					}
					LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), func_9(iLocal_121));
					iVar1 = func_10(iLocal_121);
					if (iVar1 != -1)
					{
						Global_1935183->f_6[iVar1] = 1;
					}
					Global_1897950 = -1;
					iLocal_122 = (MISC::GET_GAME_TIMER() + iLocal_118);
					iLocal_119 = 2;
					break;
				case 2:
					if (func_11() || iLocal_122 < MISC::GET_GAME_TIMER())
					{
						func_12(iLocal_121);
						iLocal_122 = (MISC::GET_GAME_TIMER() + iLocal_118);
						iLocal_119 = 3;
					}
					break;
				case 3:
					if (func_13(iLocal_121) || iLocal_122 < MISC::GET_GAME_TIMER())
					{
						func_14(iLocal_121);
						iLocal_122 = (MISC::GET_GAME_TIMER() + iLocal_118);
						iLocal_119 = 4;
					}
					break;
				case 4:
					if (func_15(iLocal_121) || iLocal_122 < MISC::GET_GAME_TIMER())
					{
						func_16(iLocal_121);
						iLocal_122 = (iLocal_118 + MISC::GET_GAME_TIMER());
						iLocal_119 = 6;
					}
					break;
				case 6:
					if (func_7(func_6(iLocal_121)))
					{
						if (func_17(func_6(iLocal_121), 4) && !iLocal_122 < MISC::GET_GAME_TIMER())
						{
						}
						else
						{
							if (func_18(iLocal_121) || iLocal_122 < MISC::GET_GAME_TIMER())
							{
								func_19(iLocal_121, 4);
								iLocal_122 = (iLocal_118 + MISC::GET_GAME_TIMER());
								iLocal_119 = 7;
							}
							Jump @788; //curOff = 456
							if (iLocal_122 < MISC::GET_GAME_TIMER() || (func_20() != 0 || Global_1051260->f_3790))
							{
								func_21(iLocal_121);
								func_22();
								if (!func_23(2057, 0))
								{
									func_24();
								}
								func_25();
								func_26();
								func_27(iLocal_121);
								func_28(iLocal_121);
								func_29();
								func_30();
								iLocal_119 = 8;
							}
							Jump @788; //curOff = 555
							func_31(iLocal_121);
							func_32();
							iLocal_119 = 9;
							Jump @788; //curOff = 572
							func_33(Global_1898004);
							func_34(iLocal_121, Global_1898004);
							iLocal_119 = 10;
							Jump @788; //curOff = 597
							func_35(iLocal_121);
							if (func_20() != -1)
							{
							}
							else
							{
								HUD::_0x8BC7C1F929D07BF3(1833957607);
							}
							func_19(iLocal_121, 8);
							if (func_36(32))
							{
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									CAM::DO_SCREEN_FADE_IN(500);
								}
								func_37(32);
							}
							iLocal_119 = 11;
							Jump @788; //curOff = 667
							if (func_38(iLocal_121))
							{
								iLocal_120 = (1000 + MISC::GET_GAME_TIMER());
							}
							func_39(Global_1898004, iLocal_121);
							func_40(iLocal_121);
							func_19(iLocal_121, 8);
							if (func_41())
							{
								PED::_0xBA0980B5C0A11924(0f);
							}
							PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(((*Global_1888801)[iLocal_121 /*35*/])->f_10);
							if (((*Global_1888801)[iLocal_121 /*35*/])->f_11 > 0f)
							{
								PED::_0xA77FA7BE9312F8C0(((*Global_1888801)[iLocal_121 /*35*/])->f_11);
							}
							Jump @788; //curOff = 769
							func_42(iVar0);
							iVar0++;
						}
						if (((*Global_1888801)[iLocal_121 /*35*/])->f_12 == 0)
						{
						}
						else
						{
							PED::_0x95423627A9CA598E(((*Global_1888801)[iLocal_121 /*35*/])->f_12);
						}
						BUILTIN::WAIT(0);
						iVar0 = 0;
						while (!func_42(iVar0))
						{
							iVar0++;
							BUILTIN::WAIT(0);
						}
						SCRIPTS::TERMINATE_THIS_THREAD();
					}
			}
		}
	}

void func_1()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
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
		while (!func_42(iVar0))
		{
			iVar0++;
			BUILTIN::WAIT(0);
		}
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

void func_2()
{
}

int func_3()
{
	return 1;
}

void func_4(int iParam0, var uParam1)
{
	if (!func_36(16))
	{
		return;
	}
	if (Global_1894899->f_7 == 0)
	{
		func_37(16);
		return;
	}
	if (!func_43(iParam0))
	{
		Global_1894899->f_7 = 0;
		func_37(16);
		return;
	}
	if (func_44(8))
	{
		if (*uParam1 == 11)
		{
			*uParam1 = 7;
			return;
		}
		else if (*uParam1 != 7)
		{
			func_45(8);
			*uParam1 = 11;
			return;
		}
	}
	if (func_44(2))
	{
		if (*uParam1 == 11)
		{
			*uParam1 = 3;
			return;
		}
		else if (*uParam1 != 3)
		{
			func_45(2);
			*uParam1 = 11;
			return;
		}
	}
	if (func_44(16))
	{
		if (*uParam1 == 11)
		{
			*uParam1 = 8;
			return;
		}
		else if (*uParam1 != 8)
		{
			func_45(16);
			*uParam1 = 11;
			return;
		}
	}
	if (func_44(4))
	{
		if (*uParam1 == 11)
		{
			*uParam1 = 6;
			return;
		}
		else if (*uParam1 != 6)
		{
			func_45(4);
			*uParam1 = 11;
			return;
		}
	}
	if (func_44(1))
	{
		if (*uParam1 == 11)
		{
			*uParam1 = 2;
			return;
		}
		else if (*uParam1 != 2)
		{
			func_45(1);
			*uParam1 = 11;
			return;
		}
	}
}

void func_5(int iParam0)
{
}

int func_6(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	else if (iParam0 <= 10)
	{
		return 0;
	}
	else if (iParam0 <= 29)
	{
		return 1;
	}
	else if (iParam0 <= 32)
	{
		return 2;
	}
	else if (iParam0 <= 36)
	{
		return 3;
	}
	else if (iParam0 <= 39)
	{
		return 4;
	}
	else if (iParam0 <= 49)
	{
		return 7;
	}
	else if (iParam0 <= 56)
	{
		return 6;
	}
	else if (iParam0 <= 61)
	{
		return 8;
	}
	else if (iParam0 <= 76)
	{
		return 9;
	}
	else if (iParam0 <= 92)
	{
		return 10;
	}
	else if (iParam0 <= 106)
	{
		return 11;
	}
	else if (iParam0 <= 113)
	{
		return 12;
	}
	else if (iParam0 <= 116)
	{
		return 13;
	}
	else if (iParam0 <= 119)
	{
		return 14;
	}
	else if (iParam0 <= 125)
	{
		return 15;
	}
	else if (iParam0 <= 127)
	{
		return 16;
	}
	return -1;
}

bool func_7(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

void func_8(int iParam0, int iParam1)
{
	(*Global_1897952)[iParam0 /*2*/] = (Global_1897952[iParam0 /*2*/] || iParam1);
}

int func_9(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 38:
			iVar0 = -34953917;
			break;
		case 82:
			iVar0 = -1182515549;
			break;
		case 69:
			iVar0 = -180439396;
			break;
		case 61:
			iVar0 = -380981263;
			break;
		case 110:
			iVar0 = 960614592;
			break;
		case 5:
			iVar0 = -896916581;
			break;
		case 35:
			iVar0 = 503372696;
			break;
		case 105:
			iVar0 = 1004478670;
			break;
		case 26:
			iVar0 = -1545648199;
			break;
		case 76:
			iVar0 = -379634634;
			break;
		case 92:
			iVar0 = 288297518;
			break;
		case 56:
			iVar0 = 1812404612;
			break;
		case 78:
			iVar0 = 1827444358;
			break;
		default:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_10(int iParam0)
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

int func_11()
{
	iLocal_14 = ((*Global_1888801)[56 /*35*/])->f_4;
	VOLUME::_0xB469CFD9E065EB99(iLocal_14, 14);
	if (func_46())
	{
		bLocal_41 = true;
	}
	if (bLocal_41)
	{
		func_47(&iLocal_16, 442.5149f, 2226.488f, 246.2888f, 0f, 0f, 14.49999f, 37f, 44f, 30f, 3, 665633627, 0, 0);
		func_47(&iLocal_17, 459.0011f, 2219.182f, 242.6092f, 0f, 0f, 14.49999f, 51f, 60f, 30f, 4, 665633627, 0, 0);
		func_47(&iLocal_18, 469.3768f, 2216.321f, 246.2888f, 0f, 0f, 14.49999f, 64f, 72f, 30f, 5, 665633627, 0, 0);
		iLocal_15 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(446.3674f, 2219.606f, 246.2888f, 0f, 0f, 14.5f, 40f, 53f, 30f, "Wapiti - m_volNoHorseWhistle");
		POPULATION::_0x74C2B3DC0B294102(iLocal_14);
		POPULATION::_0xA1CFB35069D23C23(iLocal_14);
	}
	else
	{
		POPULATION::_0xB56D41A694E42E86(iLocal_14, 12519, 18432, 0, -1, -1, 2);
		POPULATION::_0x18262CAFEBB5FBE1(iLocal_14, 12775, 18432, 0, -1, -1, 0);
		POPULATION::_0x2161278C6322F740(12775, 18432, 0, -1, -1, iLocal_14);
		func_48(iLocal_14, 0);
	}
	return 1;
}

void func_12(int iParam0)
{
	iParam0 = iParam0;
}

int func_13(int iParam0)
{
	iParam0 = iParam0;
	return 1;
}

void func_14(int iParam0)
{
	if (func_20() == -1)
	{
		if (bLocal_41)
		{
			func_19(iParam0, 16);
		}
		else
		{
			func_49(iParam0, 16);
		}
	}
	if (!func_50())
	{
		PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 4, 0, 1);
		PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 7, 0, 1);
	}
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

bool func_17(int iParam0, int iParam1)
{
	return (Global_1897952[iParam0 /*2*/] && iParam1) != 0;
}

int func_18(int iParam0)
{
	return func_51(iParam0, -1, -1, 0);
}

void func_19(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23117[iParam0 /*11*/] = (Global_23117[iParam0 /*11*/] || iParam1);
	}
	else
	{
		Global_1058888->f_40615[iParam0 /*11*/] = (Global_1058888->f_40615[iParam0 /*11*/] || iParam1);
	}
}

int func_20()
{
	return Global_1572887->f_12;
}

void func_21(int iParam0)
{
	iParam0 = iParam0;
}

void func_22()
{
}

int func_23(int iParam0, bool bParam1)
{
	if (func_52(iParam0))
	{
		return 1;
	}
	if (!bParam1)
	{
		if (func_53(5000))
		{
			return 1;
		}
	}
	switch (func_54(0))
	{
		case 0:
			return 0;
		case 1:
			if (iParam0 & 1 != 0)
			{
				return 1;
			}
			break;
		case 4:
			if (iParam0 & 2 != 0)
			{
				return 1;
			}
			break;
		case 6:
			if (iParam0 & 4 != 0)
			{
				return 1;
			}
			break;
		case 2:
			if (iParam0 & 16 != 0)
			{
				return 1;
			}
			break;
		case 5:
			if (iParam0 & 32 != 0)
			{
				return 1;
			}
			break;
		case 9:
			if (iParam0 & 64 != 0)
			{
				return 1;
			}
			break;
		case 8:
			if (iParam0 & 8 != 0)
			{
				return 1;
			}
			break;
		case 10:
			if (iParam0 & 512 != 0)
			{
				return 1;
			}
			break;
		case 3:
			if (iParam0 & 128 != 0)
			{
				return 1;
			}
			break;
		case 11:
			if (iParam0 & 256 != 0)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_24()
{
}

void func_25()
{
}

void func_26()
{
}

void func_27(int iParam0)
{
	iParam0 = iParam0;
}

void func_28(int iParam0)
{
	iParam0 = iParam0;
}

void func_29()
{
}

void func_30()
{
}

void func_31(int iParam0)
{
	func_55(0.775f, 0.2f, 0.025f, 0f);
}

void func_32()
{
	if (!Global_1894899->f_186)
	{
		VEHICLE::_0xF5FFB08976911B50(Global_1894899->f_182, Global_1894899->f_183, Global_1894899->f_184, Global_1894899->f_185);
	}
}

void func_33(var uParam0)
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

void func_34(int iParam0, var uParam1)
{
	iParam0 = iParam0;
	func_56(uParam1, iLocal_14, 1);
}

void func_35(int iParam0)
{
	if (!func_57(iParam0))
	{
		return;
	}
	func_58();
}

bool func_36(int iParam0)
{
	return (Global_1894899 && iParam0) != 0;
}

void func_37(int iParam0)
{
	Global_1894899 = (&Global_1894899 - (Global_1894899 && iParam0));
}

int func_38(int iParam0)
{
	int iVar0;

	if (func_20() == -1)
	{
		if (bLocal_41)
		{
			func_59();
			if (!iLocal_42)
			{
				Local_47 = ITEMSET::CREATE_ITEMSET(true);
				func_60(&iLocal_51);
				iLocal_42 = 1;
			}
			else
			{
				func_61(&iLocal_51);
			}
			func_62(iParam0, iLocal_14, &uLocal_43);
			if (!func_63(0, 0, 1))
			{
				func_64();
				if (func_65(iLocal_15, Global_36))
				{
					func_66(0);
				}
				if (!iLocal_19)
				{
					iLocal_21 = func_68(func_67());
					iLocal_22 = iLocal_21 + 42;
					MISC::_0xFDF38E2B711BF78E(&Local_23, 17);
					iLocal_19 = 1;
				}
				if ((iLocal_19 && !iLocal_40) && func_68(func_67()) > iLocal_21 + 10)
				{
					iLocal_40 = 1;
				}
				if (func_68(func_67()) > iLocal_22 && !iLocal_20)
				{
					PLAYER::_0xCB61A63AA53D7D22(PLAYER::GET_PLAYER_INDEX(), 1);
					iLocal_20 = 1;
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(Global_35))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 154, true);
				iVar0 = PED::GET_MOUNT(Global_35);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					PED::SET_PED_RESET_FLAG(iVar0, 154, true);
				}
			}
		}
	}
	return 0;
}

void func_39(var uParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	if ((BUILTIN::VDIST(Global_36, 0f, 0f, 0f) <= 5f || func_69(&Global_1935630, 16384)) || func_69(&Global_1935630, 8388608))
	{
		return;
	}
	if (func_70(uParam0, 1))
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
	bVar2 = func_71();
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
							if ((!func_72((*uParam0)[iVar3 /*3*/], 1) && func_73(iParam1)) && !func_74(iParam1, 16))
							{
								func_76(iParam1, func_75(), -1, 0, -1, 0);
								func_77((*uParam0)[iVar3 /*3*/], 1);
							}
							func_78(iParam1, 0);
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
	if (func_20() == -1)
	{
		if (func_79() != bVar0)
		{
			iVar4 = 0;
			if (bVar0)
			{
				iVar4 = 2;
			}
			else
			{
				iVar4 = 1;
			}
			func_80();
			func_81(Global_1310750->f_16071, 0, iVar4, 0, 0);
		}
	}
	func_82(bVar0);
	if (func_20() == -1)
	{
		func_84((iParam1 == func_83() && bVar0));
	}
}

int func_40(int iParam0)
{
	iParam0 = iParam0;
	return 1;
}

int func_41()
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

int func_42(int iParam0)
{
	if (iParam0 == 0)
	{
		func_86();
		LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), 0);
		func_19(iLocal_121, 2048);
		if (func_7(func_75()))
		{
			func_8(func_75(), 8);
		}
		func_49(iLocal_121, 4);
		func_49(iLocal_121, 8);
		func_82(0);
		if (func_20() == -1)
		{
			func_84(0);
		}
		func_87(iLocal_121);
		func_32();
		return 0;
	}
	else
	{
		func_88(iLocal_121);
		func_89(iLocal_121);
		func_90(iLocal_121);
		if (!func_91(iLocal_121, 0))
		{
			return 0;
		}
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
	return 1;
}

int func_43(int iParam0)
{
	if (!func_57(iParam0))
	{
		return 0;
	}
	return func_92(iParam0, 8);
}

bool func_44(int iParam0)
{
	return (Global_1894899->f_7 && iParam0) != 0;
}

void func_45(int iParam0)
{
	Global_1894899->f_7 = (Global_1894899->f_7 - (Global_1894899->f_7 && iParam0));
}

int func_46()
{
	if (func_20() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == joaat("player_zero"))
	{
		return 1;
	}
	return 0;
}

void func_47(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, int iParam10, int iParam11, int iParam12, bool bParam13)
{
	float fVar0[4];
	int iVar5;
	int iVar6;

	if (VOLUME::_0x92A78D0BEDB332A3(*iParam0))
	{
		return;
	}
	iVar5 = 0;
	iVar6 = 0;
	switch (iParam10)
	{
		case 0:
			fVar0[0] = 1f;
			fVar0[1] = 1f;
			fVar0[2] = 0f;
			fVar0[3] = 0f;
			iVar5 = 1;
			break;
		case 1:
			fVar0[0] = 1f;
			fVar0[1] = 1f;
			fVar0[2] = 0f;
			fVar0[3] = 0f;
			iVar5 = 1;
			break;
		case 2:
			fVar0[0] = 1f;
			fVar0[1] = 1f;
			fVar0[2] = 1f;
			fVar0[3] = 1f;
			iVar5 = 1;
			break;
		case 3:
			fVar0[0] = 0.35f;
			fVar0[1] = 0f;
			fVar0[2] = 0f;
			fVar0[3] = 0f;
			iVar6 = 1;
			break;
		case 4:
			fVar0[0] = 0.45f;
			fVar0[1] = 0.2f;
			fVar0[2] = 0f;
			fVar0[3] = 0f;
			iVar6 = 1;
			break;
		case 5:
			fVar0[0] = 1f;
			fVar0[1] = 1f;
			fVar0[2] = 0f;
			fVar0[3] = 0f;
			iVar6 = 1;
			break;
		case 6:
			fVar0[0] = 1f;
			fVar0[1] = 1f;
			fVar0[2] = 1f;
			fVar0[3] = 1f;
			iVar6 = 1;
			break;
	}
	*iParam0 = VOLUME::_0xBBE768E3AE76E07C(iParam11, vParam1, vParam4, vParam7, iVar5, iVar6, &fVar0, iParam12, bParam13);
}

void func_48(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	MISC::_0x2FCD528A397E5C88(iParam0, iVar0);
}

void func_49(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23117[iParam0 /*11*/] = (&Global_23117[iParam0 /*11*/] - (Global_23117[iParam0 /*11*/] && iParam1));
		return;
	}
	Global_1058888->f_40615[iParam0 /*11*/] = (&Global_1058888->f_40615[iParam0 /*11*/] - (Global_1058888->f_40615[iParam0 /*11*/] && iParam1));
}

int func_50()
{
	if (func_20() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == 11966224)
	{
		return 1;
	}
	return 0;
}

int func_51(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_20() != -1)
	{
		return 1;
	}
	if (!func_57(iParam0))
	{
		return 1;
	}
	if (func_92(iParam0, 16))
	{
		return 1;
	}
	if (func_93(iParam0) && !func_94(iParam0))
	{
	}
	if (func_95(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (func_96(iParam1))
		{
			iVar0 = iParam1;
		}
		if (func_96(iParam2))
		{
			iVar1 = iParam2;
		}
		if (&Global_1897950 < iVar0 || &Global_1897950 > iVar1)
		{
			Global_1897950 = iVar0;
		}
		while (true)
		{
			if ((!func_93(iParam0) || func_94(iParam0)) || func_97(&Global_1897950))
			{
				func_98(&Global_1897950, 0);
			}
			Global_1897950 = &Global_1897950 + 1;
			iVar2++;
			if (&Global_1897950 > iVar1)
			{
				Global_1897950 = -1;
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

bool func_52(var uParam0)
{
	return (Global_1935630 && uParam0) != 0;
}

bool func_53(int iParam0)
{
	return (MISC::GET_GAME_TIMER() - iParam0) < &Global_1898438;
}

int func_54(int iParam0)
{
	return (Global_1898164->f_1[iParam0 /*5*/])->f_2;
}

void func_55(float fParam0, float fParam1, float fParam2, float fParam3)
{
	Global_1894899->f_182 = fParam0;
	Global_1894899->f_183 = fParam1;
	Global_1894899->f_184 = fParam2;
	Global_1894899->f_185 = fParam3;
}

void func_56(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_61 >= 20)
	{
		return;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam1))
	{
		return;
	}
	if (!func_99(iParam2))
	{
		return;
	}
	(*uParam0)[uParam0->f_61 /*3*/] = iParam1;
	((*uParam0)[uParam0->f_61 /*3*/])->f_1 = iParam2;
	((*uParam0)[uParam0->f_61 /*3*/])->f_2 = 0;
	uParam0->f_61++;
}

bool func_57(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

void func_58()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (func_100(iVar0))
		{
			(*Global_1898130)[iVar0] = -1;
		}
		iVar0++;
	}
}

void func_59()
{
	int iVar0;
	int iVar1;

	if ((MISC::GET_FRAME_COUNT() % 10) != 0)
	{
		return;
	}
	iVar0 = 706;
	while (iVar0 <= 708)
	{
		iVar1 = func_101(iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (!PED::GET_PED_CONFIG_FLAG(iVar1, 441, false))
			{
				PED::SET_PED_CONFIG_FLAG(iVar1, 441, true);
				PED::SET_PED_CONFIG_FLAG(iVar1, 1, true);
				PED::SET_PED_CONFIG_FLAG(iVar1, 54, true);
				PED::SET_PED_CONFIG_FLAG(iVar1, 121, true);
				PED::SET_PED_CONFIG_FLAG(iVar1, 302, true);
				PED::SET_PED_CONFIG_FLAG(iVar1, 136, true);
				PED::SET_PED_CONFIG_FLAG(iVar1, 419, true);
			}
		}
		iVar0++;
	}
}

void func_60(int* iParam0)
{
	struct<2> Var0;

	Var0.f_1 = 20;
	MISC::_COPY_MEMORY(iParam0, &Var0, 65);
	func_105(iParam0, 0, 13349/*func_102*/, 13357/*func_103*/, 13515/*func_104*/);
	func_105(iParam0, 2, 13648/*func_106*/, 13667/*func_107*/, 13349/*func_102*/);
	func_108(iParam0, 0);
}

void func_61(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (iParam0->f_62 != -1 && iParam0->f_64 == -1)
	{
		Call_Loc((iParam0->f_1[iParam0->f_62 /*3*/])->f_1);
		iParam0->f_64 = StackVal;
	}
	while (iParam0->f_64 != -1)
	{
		if (iParam0->f_62 != -1)
		{
			Call_Loc((iParam0->f_1[iParam0->f_62 /*3*/])->f_2);
		}
		iParam0->f_62 = iParam0->f_64;
		Call_Loc(&iParam0->f_1[iParam0->f_62 /*3*/]);
		Call_Loc((iParam0->f_1[iParam0->f_62 /*3*/])->f_1);
		iParam0->f_64 = StackVal;
		iVar0++;
		if (iVar0 > 10)
		{
		}
	else
	{
		}
	}
}

void func_62(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;

	if ((func_109() || func_69(&Global_1935630, 2048)) || CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (iParam0 == 105 || iParam0 == 95)
	{
		if (!func_110())
		{
			func_111(iParam1, uParam2);
			return;
		}
		if (!func_112(iParam0))
		{
			func_111(iParam1, uParam2);
			return;
		}
		iVar0 = func_114(iParam0, func_113(17));
		bVar1 = func_115(2048);
		bVar2 = func_115(1024);
		if (!uParam2->f_3)
		{
			PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 7, 0, 1);
			PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 20, 0, 1);
			PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 19, 0, 1);
			PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 10, 0, 1);
			PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 4, 0, 1);
			uParam2->f_3 = 1;
		}
	}
	else
	{
		iVar0 = 175;
		bVar1 = false;
		bVar2 = false;
	}
	func_116(iParam1, bVar1, bVar2);
	iVar3 = ZONE::_GET_MAP_ZONE_AT_COORDS(Global_36, 1);
	if (func_117(iVar3) == iParam0)
	{
		if (func_118() || func_119())
		{
			*uParam2 = 1;
		}
		else if (*uParam2)
		{
			func_120(iVar0, 1);
			*uParam2 = 0;
		}
		if (!uParam2->f_1)
		{
			if (uParam2->f_2 < 3)
			{
				func_120(iVar0, 1);
				uParam2->f_2++;
			}
			uParam2->f_1 = 1;
		}
		if (uParam2->f_1 && (((PAD::IS_CONTROL_PRESSED(0, -1304887797) || PAD::IS_DISABLED_CONTROL_PRESSED(0, -1304887797)) || PAD::IS_CONTROL_JUST_PRESSED(0, -1304887797)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, -1304887797)))
		{
			if (uParam2->f_2 < 3)
			{
				func_120(iVar0, 1);
				uParam2->f_2++;
			}
		}
		PLAYER::_0x8674D138391FFB1B(PLAYER::PLAYER_ID(), 1);
		PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 49, 1);
		PED::SET_PED_RESET_FLAG(Global_35, 49, true);
		PAD::DISABLE_CONTROL_ACTION(0, -562475458, false);
		PAD::DISABLE_CONTROL_ACTION(0, 2028806450, false);
		PAD::DISABLE_CONTROL_ACTION(0, 371916472, false);
		PAD::DISABLE_CONTROL_ACTION(0, 1632043089, false);
		PAD::DISABLE_CONTROL_ACTION(0, 1623727326, false);
		PAD::DISABLE_CONTROL_ACTION(0, -922478227, false);
		PAD::DISABLE_CONTROL_ACTION(0, 440314811, false);
		PAD::DISABLE_CONTROL_ACTION(0, -1616532217, false);
		PED::SET_PED_RESET_FLAG(Global_35, 185, true);
		if (!bVar1)
		{
			HUD::_0xC9CAEAEEC1256E54(1833957607);
			func_121();
			if (Global_1935630->f_44 != joaat("weapon_kit_binoculars"))
			{
				PAD::DISABLE_CONTROL_ACTION(0, -1304887797, false);
				PAD::DISABLE_CONTROL_ACTION(0, -128997553, false);
				PAD::DISABLE_CONTROL_ACTION(0, 130948705, false);
				PAD::DISABLE_CONTROL_ACTION(0, 42190210, false);
			}
		}
		if (!PED::IS_PED_IN_MELEE_COMBAT(Global_35) && !bVar2)
		{
			PAD::DISABLE_CONTROL_ACTION(0, -1292666904, false);
			PAD::DISABLE_CONTROL_ACTION(0, 578288361, false);
		}
	}
	else
	{
		func_122();
		uParam2->f_1 = 0;
	}
}

int func_63(int iParam0, bool bParam1, int iParam2)
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
		if (func_123())
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
		iVar0 = func_124(&(Global_1898164->f_1[0 /*5*/]));
		if (func_125(iVar0) && func_126(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_127(&(Global_1898164->f_1[0 /*5*/])))
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

void func_64()
{
	int iVar0;
	int iVar1;

	if (func_128(Global_35, iLocal_14, 1, 0))
	{
		if (func_129(iLocal_116, 32))
		{
			if (func_130(Global_35, -208384378))
			{
				return;
			}
			else
			{
				ENTITY::_0x18FF3110CF47115D(iLocal_117, 0, 0);
				ENTITY::_0x18FF3110CF47115D(iLocal_117, 2, 0);
				ENTITY::_0x18FF3110CF47115D(iLocal_117, 3, 0);
				iLocal_117 = 0;
				func_131(&iLocal_116, 32);
			}
		}
		if (!func_129(iLocal_116, 1) && PED::_0xA911EE21EDF69DAF(Global_35))
		{
			iVar0 = PED::_0xD806CD2A4F2C2996(Global_35);
			if (ENTITY::IS_ENTITY_A_PED(iVar0) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)))
			{
				TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
				iLocal_117 = iVar0;
				TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, iLocal_117, 0f, 0f, 0f, 1073741824, 1);
				func_132(&iLocal_116, 32);
				return;
			}
			func_132(&iLocal_116, 1);
		}
		else
		{
			func_132(&iLocal_116, 1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(PED::_0xB65A4DAB460A19BD(Global_35)))
		{
			PED::SET_PED_RESET_FLAG(Global_35, 295, true);
		}
		if (!func_129(iLocal_116, 2))
		{
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				iVar1 = PED::GET_MOUNT(Global_35);
				if (func_128(iVar1, iLocal_14, 1, 0))
				{
					iVar0 = PED::_0xD806CD2A4F2C2996(iVar1);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::IS_ENTITY_A_PED(iVar0)) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)))
					{
						PED::_0xED00D72F81CF7278(iVar0, 0, 0);
						ENTITY::_0x18FF3110CF47115D(iVar0, 0, 0);
						ENTITY::_0x18FF3110CF47115D(iVar0, 2, 0);
						ENTITY::_0x18FF3110CF47115D(iVar0, 3, 0);
					}
					func_132(&iLocal_116, 2);
				}
				else
				{
					func_131(&iLocal_116, 2);
				}
			}
		}
		if (!func_129(iLocal_116, 4))
		{
			if (TASK::_0xEFC4303DDC6E60D3(Global_35))
			{
				iVar1 = TASK::_0xED1F514AF4732258(Global_35);
				if (func_128(iVar1, iLocal_14, 1, 0))
				{
					iVar0 = PED::_0xD806CD2A4F2C2996(iVar1);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::IS_ENTITY_A_PED(iVar0)) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)))
					{
						PED::_0xED00D72F81CF7278(iVar0, 0, 0);
						ENTITY::_0x18FF3110CF47115D(iVar0, 0, 0);
						ENTITY::_0x18FF3110CF47115D(iVar0, 2, 0);
						ENTITY::_0x18FF3110CF47115D(iVar0, 3, 0);
					}
					func_132(&iLocal_116, 4);
				}
				else
				{
					func_131(&iLocal_116, 4);
				}
			}
		}
		if (!func_129(iLocal_116, 4))
		{
			iVar1 = func_133(0);
			if (!func_134(iVar1, 0))
			{
				return;
			}
			if (func_128(iVar1, iLocal_14, 1, 0))
			{
				iVar0 = PED::_0xD806CD2A4F2C2996(iVar1);
				if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::IS_ENTITY_A_PED(iVar0)) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)))
				{
					PED::_0xED00D72F81CF7278(iVar0, 0, 0);
					ENTITY::_0x18FF3110CF47115D(iVar0, 0, 0);
					ENTITY::_0x18FF3110CF47115D(iVar0, 2, 0);
					ENTITY::_0x18FF3110CF47115D(iVar0, 3, 0);
				}
				func_132(&iLocal_116, 4);
			}
			else
			{
				func_131(&iLocal_116, 4);
			}
		}
		if (!func_129(iLocal_116, 16))
		{
			iVar1 = func_133(1);
			if (!func_134(iVar1, 0))
			{
				return;
			}
			if (func_128(iVar1, iLocal_14, 1, 0))
			{
				iVar0 = PED::_0xD806CD2A4F2C2996(iVar1);
				if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::IS_ENTITY_A_PED(iVar0)) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)))
				{
					PED::_0xED00D72F81CF7278(iVar0, 0, 0);
					ENTITY::_0x18FF3110CF47115D(iVar0, 0, 0);
					ENTITY::_0x18FF3110CF47115D(iVar0, 2, 0);
					ENTITY::_0x18FF3110CF47115D(iVar0, 3, 0);
				}
				func_132(&iLocal_116, 16);
			}
			else
			{
				func_131(&iLocal_116, 16);
			}
		}
		ENTITY::_0xC3ABCFBC7D74AFA5(Global_35, 0, 1);
	}
	else
	{
		func_131(&iLocal_116, 1);
		func_131(&iLocal_116, 2);
		func_131(&iLocal_116, 4);
		func_131(&iLocal_116, 4);
		func_131(&iLocal_116, 16);
	}
}

bool func_65(int iParam0, vector3 vParam1)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return false;
	}
	return VOLUME::_0xF256A75210C5C0EB(iParam0, vParam1);
}

void func_66(bool bParam0)
{
	if (bParam0)
	{
		func_135(4);
	}
	func_135(2);
	MISC::SET_BIT(&(Global_1956578->f_1), 0);
}

int func_67()
{
	return &Global_1899515;
}

int func_68(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

bool func_69(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_70(var uParam0, int iParam1)
{
	return (uParam0->f_62 && iParam1) != 0;
}

bool func_71()
{
	return func_69(&Global_1935630, 4096);
}

bool func_72(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_73(int iParam0)
{
	if (!func_57(iParam0))
	{
		return false;
	}
	return ((((*Global_1888801)[iParam0 /*35*/])->f_20 == 1 || ((*Global_1888801)[iParam0 /*35*/])->f_20 == 2) && !func_136(iParam0));
}

bool func_74(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 150)
	{
		return false;
	}
	return (((*Global_1888801)[iParam0 /*35*/])->f_21 && iParam1) != 0;
}

int func_75()
{
	return Global_1897952->f_41;
}

void func_76(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	var uVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	char* sVar6;
	float fVar7;
	char* sVar8;
	char* sVar9;
	char* sVar10;

	if (!func_137())
	{
		return;
	}
	sVar1 = func_138(iParam0, iParam1, iParam2, iParam4, iParam5, bParam3, &uVar0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		if (bParam3)
		{
			return;
		}
		sVar1 = "DISTRICT_GRIZZLIES";
	}
	if (!func_139(iParam4))
	{
		if (func_57(iParam0))
		{
			iParam4 = func_140(func_6(iParam0));
		}
		else
		{
			iParam4 = func_140(iParam1);
		}
	}
	if (func_139(iParam4))
	{
		iVar3 = func_141(iParam4);
	}
	if (uVar0 && bParam3)
	{
		sVar2 = func_143(func_142(iParam2));
	}
	else if ((func_144(iParam1, 2) || func_145(iParam4, 2)) && !Global_1894899->f_9)
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
		Global_1894899->f_9 = 1;
	}
	else if ((func_57(iParam0) && func_92(iParam0, 16777216)) && !Global_1894899->f_9)
	{
		sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_RESTRICTED_AREA");
		Global_1894899->f_9 = 1;
	}
	else if (iVar3 >= 1 && !Global_1894899->f_9)
	{
		sVar2 = MISC::_CREATE_VAR_STRING(2, "REGION_BOUNTY", iVar3);
		Global_1894899->f_9 = 1;
	}
	else
	{
		iVar4 = func_146(func_67());
		iVar5 = func_68(func_67());
		if (iVar5 < 10)
		{
			StringConCat(&sVar6, "0", 8);
		}
		StringIntConCat(&sVar6, iVar5, 8);
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
				fVar7 = func_147(fVar7);
				sVar8 = "TIME_AND_TEMP_F";
			}
			IntToString(&sVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::_CREATE_VAR_STRING(674, sVar8, iVar4, func_148(&sVar6, 109029619), sVar9, func_148(&sVar10, 109029619));
		}
		else
		{
			sVar8 = "TIME_AND_TEMP_C_24";
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				fVar7 = func_147(fVar7);
				sVar8 = "TIME_AND_TEMP_F_24";
			}
			IntToString(&sVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::_CREATE_VAR_STRING(162, sVar8, iVar4, func_148(&sVar6, 109029619), func_148(&sVar10, 109029619));
		}
		Global_1894899->f_9 = 0;
	}
	Global_1934266->f_148 = func_149(sVar1, sVar2, 4000, 0, 0, 0, 0, 1);
}

void func_77(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_78(int iParam0, bool bParam1)
{
	if (Global_1572887->f_10 && func_20() == 0)
	{
		return;
	}
	if (func_150(128))
	{
		return;
	}
	if (!func_151(iParam0))
	{
		return;
	}
	if (func_92(iParam0, 32))
	{
		return;
	}
	func_19(iParam0, 32);
	func_152(Global_1935630, 8192);
	func_154(func_153(-1532769513, -36357794), 1);
	switch (func_6(iParam0))
	{
		case 0:
		case 2:
		case 11:
			func_154(func_153(-1532769513, 213519508), 1);
			break;
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			func_154(func_153(-1532769513, 242571679), 1);
			break;
		case 3:
		case 10:
			func_154(func_153(-1532769513, 1349449307), 1);
			break;
		case 4:
		case 9:
			func_154(func_153(-1532769513, 1140362070), 1);
			break;
		case 8:
			func_154(func_153(-1532769513, -172330899), 1);
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			func_154(func_153(-1532769513, -910218296), 1);
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
		case 29:
			MAP::_0xD8C7162AB2E2AF45(-1813267128);
			break;
		case 30:
			MAP::_0xD8C7162AB2E2AF45(-1941572412);
			break;
		case 31:
			MAP::_0xD8C7162AB2E2AF45(1006072805);
			break;
		case 121:
			MAP::_0xD8C7162AB2E2AF45(929640770);
			break;
		case 122:
			MAP::_0xD8C7162AB2E2AF45(1603579970);
			break;
		case 124:
			MAP::_0xD8C7162AB2E2AF45(-1332669948);
			break;
		case 123:
			MAP::_0xD8C7162AB2E2AF45(-1807212021);
			break;
		case 34:
			MAP::_0xD8C7162AB2E2AF45(-1347759053);
			break;
		case 36:
			MAP::_0xD8C7162AB2E2AF45(-918096609);
			break;
		case 114:
			MAP::_0xD8C7162AB2E2AF45(1728445882);
			break;
		case 37:
			MAP::_0xD8C7162AB2E2AF45(-507075109);
			break;
		case 40:
			MAP::_0xD8C7162AB2E2AF45(462373845);
			break;
		case 42:
			MAP::_0xD8C7162AB2E2AF45(-1727895786);
			break;
		case 43:
			MAP::_0xD8C7162AB2E2AF45(1826504111);
			break;
		case 44:
			MAP::_0xD8C7162AB2E2AF45(1714554710);
			break;
		case 45:
			MAP::_0xD8C7162AB2E2AF45(-91026072);
			break;
		case 54:
			MAP::_0xD8C7162AB2E2AF45(893855320);
			break;
		case 55:
			MAP::_0xD8C7162AB2E2AF45(326709244);
			break;
		case 49:
			MAP::_0xD8C7162AB2E2AF45(653799702);
			break;
		case 62:
			MAP::_0xD8C7162AB2E2AF45(415864829);
			break;
		case 64:
			MAP::_0xD8C7162AB2E2AF45(-1836330842);
			break;
		case 65:
			MAP::_0xD8C7162AB2E2AF45(648073069);
			break;
		case 66:
			MAP::_0xD8C7162AB2E2AF45(770074951);
			break;
		case 68:
			MAP::_0xD8C7162AB2E2AF45(-1276637644);
			break;
		case 71:
			MAP::_0xD8C7162AB2E2AF45(-431488293);
			break;
		case 72:
			MAP::_0xD8C7162AB2E2AF45(-1101810198);
			break;
		case 74:
			MAP::_0xD8C7162AB2E2AF45(-1344767066);
			break;
		case 77:
			MAP::_0xD8C7162AB2E2AF45(1472232821);
			break;
		case 79:
			MAP::_0xD8C7162AB2E2AF45(-1368676121);
			break;
		case 63:
			MAP::_0xD8C7162AB2E2AF45(-33677540);
			break;
		case 80:
			MAP::_0xD8C7162AB2E2AF45(1602161184);
			MAP::_0xD8C7162AB2E2AF45(-443207523);
			MAP::_0xD8C7162AB2E2AF45(-683043834);
			break;
		case 82:
			MAP::_0xD8C7162AB2E2AF45(147256338);
			MAP::_0xD8C7162AB2E2AF45(-134804027);
			MAP::_0xD8C7162AB2E2AF45(2027689141);
			break;
		case 83:
			MAP::_0xD8C7162AB2E2AF45(-161135375);
			break;
		case 85:
			MAP::_0xD8C7162AB2E2AF45(1625008147);
			break;
		case 86:
			MAP::_0xD8C7162AB2E2AF45(121074776);
			break;
		case 87:
			MAP::_0xD8C7162AB2E2AF45(1876184276);
			break;
		case 89:
			MAP::_0xD8C7162AB2E2AF45(458479023);
			break;
		case 91:
			MAP::_0xD8C7162AB2E2AF45(85299473);
			break;
		case 96:
			MAP::_0xD8C7162AB2E2AF45(-1150244084);
			break;
		case 98:
			MAP::_0xD8C7162AB2E2AF45(759314201);
			break;
		case 99:
			MAP::_0xD8C7162AB2E2AF45(2063457042);
			break;
		case 100:
			MAP::_0xD8C7162AB2E2AF45(1877776161);
			break;
		case 102:
			MAP::_0xD8C7162AB2E2AF45(2143316225);
			break;
		case 104:
			MAP::_0xD8C7162AB2E2AF45(-1623232489);
			MAP::_0xD8C7162AB2E2AF45(-1393093729);
			break;
		case 106:
			MAP::_0xD8C7162AB2E2AF45(1354284392);
			break;
		case 107:
			MAP::_0xD8C7162AB2E2AF45(-1430883057);
			break;
		case 109:
			MAP::_0xD8C7162AB2E2AF45(820139809);
			break;
		case 112:
			MAP::_0xD8C7162AB2E2AF45(1561007383);
			MAP::_0xD8C7162AB2E2AF45(-960425936);
			break;
	}
	if (bParam1)
	{
		func_19(iParam0, 64);
	}
}

bool func_79()
{
	return (Global_1894899 & 1 != 0 && func_155() != -1);
}

void func_80()
{
	if (!func_156(&Global_1327479))
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
	func_157(0);
	Global_1327479 = -1;
	Global_1310750->f_16075 = 0;
	Global_1310750->f_16076 = 0;
	Global_1310750->f_16103 = { 0f, 0f, 0f };
}

void func_81(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	if (func_158() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0 /*9*/];
		if (((func_156(iVar1) && !func_159(iVar1, iParam2)) && (!bParam3 || !func_160(iVar1))) && (!bParam4 || !func_161(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_162(iVar0);
			}
		}
		iVar0++;
	}
}

void func_82(bool bParam0)
{
	bool bVar0;

	bVar0 = Global_1894899 & 1 != false;
	if (bVar0 == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		Global_1894899 |= 1;
		STATS::_0xDA26263C07CCE9C2(1);
	}
	else
	{
		Global_1894899 = (&Global_1894899 - Global_1894899 & 1);
		STATS::_0xDA26263C07CCE9C2(0);
	}
}

int func_83()
{
	return Global_40.f_4283.f_1;
}

void func_84(bool bParam0)
{
	if (bParam0)
	{
		Global_1894899 |= 2;
	}
	else
	{
		Global_1894899 = (&Global_1894899 - Global_1894899 & 2);
	}
}

int func_85(int iParam0)
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

void func_86()
{
}

void func_87(int iParam0)
{
	func_55(0.775f, 0.2f, 0.025f, 0f);
	if (iLocal_40)
	{
		Local_23.f_12 = 46;
		Local_23.f_13 = 14;
		Local_23 = Global_35;
		Local_23.f_15 = 1812404612;
		MISC::_0x88BC5F4AEF77FC4E(&Local_23, 17);
	}
	func_111(iLocal_14, &uLocal_43);
	if (!func_50())
	{
		PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 4, 0, 0);
		PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 7, 0, 0);
	}
	func_163(iLocal_16);
	func_163(iLocal_17);
	func_163(iLocal_18);
	ITEMSET::DESTROY_ITEMSET(Local_47);
	iParam0 = iParam0;
}

void func_88(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if ((Global_1935369->f_5[iVar0 /*11*/])->f_5 == iParam0)
		{
			func_164(iVar0);
		}
		iVar0++;
	}
}

void func_89(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if ((Global_1914319->f_3[iVar0 /*446*/])->f_9 == iParam0)
		{
			func_165(iVar0);
		}
		iVar0++;
	}
}

void func_90(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_166(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_167(&((Global_1392240->f_1[iVar0 /*18*/])->f_6[iVar1]));
		(Global_1392240->f_1[iVar0 /*18*/])->f_6[iVar1] = 0;
		iVar1++;
	}
}

int func_91(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_20() != -1)
	{
		return 1;
	}
	if (!func_57(iParam0))
	{
		return 1;
	}
	if (func_95(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (Global_1897950->f_1 < iVar0 || Global_1897950->f_1 > iVar1)
		{
			Global_1897950->f_1 = iVar0;
		}
		while (true)
		{
			if (!func_168(Global_1897950->f_1, 16))
			{
				func_169(Global_1897950->f_1, 0);
			}
			Global_1897950->f_1++;
			iVar2++;
			if (Global_1897950->f_1 > iVar1)
			{
				Global_1897950->f_1 = -1;
				return 1;
			}
			if (iVar2 >= 20 && !bParam1)
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_92(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23117[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0 /*11*/] && iParam1) != 0;
}

int func_93(int iParam0)
{
	if (!func_57(iParam0))
	{
		return 0;
	}
	return func_92(iParam0, 33554432);
}

int func_94(int iParam0)
{
	if (!func_57(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 32:
			return 1;
		case 35:
			return 1;
		case 65:
			return 1;
		case 95:
			return 1;
	}
	return 0;
}

int func_95(int iParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	bool bVar0;

	bVar0 = func_20() != -1;
	switch (iParam0)
	{
		case 76:
			*uParam1 = 0;
			if (bParam3)
			{
				*uParam2 = 47;
			}
			else
			{
				*uParam2 = 63;
			}
			if (bVar0)
			{
				*uParam2 = 5;
			}
			break;
		case 105:
			*uParam1 = 69;
			if (bParam3)
			{
				*uParam2 = 127;
			}
			else
			{
				*uParam2 = 136;
			}
			if (bVar0)
			{
				*uParam2 = 72;
			}
			break;
		case 5:
			*uParam1 = 137;
			*uParam2 = 324;
			if (bVar0)
			{
				*uParam2 = 142;
			}
			break;
		case 61:
			*uParam1 = 380;
			*uParam2 = 381;
			if (bVar0)
			{
				*uParam2 = 380;
			}
			break;
		case 78:
			*uParam1 = 382;
			*uParam2 = 431;
			if (bVar0)
			{
				*uParam2 = 384;
			}
			break;
		case 92:
			*uParam1 = 443;
			*uParam2 = 471;
			if (bVar0)
			{
				*uParam2 = 443;
			}
			break;
		case 26:
			*uParam1 = 472;
			if (bParam3)
			{
				*uParam2 = 500;
			}
			else
			{
				*uParam2 = 502;
			}
			if (bVar0)
			{
				*uParam2 = 472;
			}
			break;
		case 38:
			*uParam1 = 508;
			*uParam2 = 553;
			if (bVar0)
			{
				*uParam2 = 509;
			}
			break;
		case 68:
			*uParam1 = 554;
			*uParam2 = 565;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 65:
			*uParam1 = 566;
			*uParam2 = 588;
			if (bVar0)
			{
				*uParam2 = 566;
			}
			break;
		case 69:
			*uParam1 = 589;
			if (bParam3)
			{
				*uParam2 = 598;
			}
			else
			{
				*uParam2 = 612;
			}
			if (bVar0)
			{
				*uParam2 = 590;
			}
			break;
		case 75:
			*uParam1 = 503;
			*uParam2 = 506;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 93:
			*uParam1 = 613;
			*uParam2 = 625;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 95:
			*uParam1 = 626;
			*uParam2 = 641;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 97:
			*uParam1 = 642;
			*uParam2 = 643;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 3:
			*uParam1 = 644;
			*uParam2 = 656;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 6:
			*uParam1 = 657;
			*uParam2 = 658;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 32:
			*uParam1 = 325;
			*uParam2 = 344;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 82:
			*uParam1 = 659;
			if (bParam3)
			{
				*uParam2 = 673;
			}
			else
			{
				*uParam2 = 690;
			}
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 35:
			*uParam1 = 691;
			*uParam2 = 700;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 56:
			*uParam1 = 701;
			*uParam2 = 708;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 22:
			if (bParam4)
			{
				*uParam1 = 715;
			}
			else
			{
				*uParam1 = 715;
			}
			*uParam2 = 723;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 110:
			*uParam1 = 724;
			*uParam2 = 730;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 64:
			*uParam1 = 736;
			*uParam2 = 740;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 66:
			*uParam1 = 745;
			*uParam2 = 750;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 70:
			*uParam1 = 751;
			*uParam2 = 754;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 77:
			*uParam1 = 731;
			*uParam2 = 732;
			break;
		case 96:
			*uParam1 = 741;
			*uParam2 = 743;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 29:
			*uParam1 = 744;
			*uParam2 = 744;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 100:
			*uParam1 = 755;
			*uParam2 = 763;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 102:
			*uParam1 = 764;
			*uParam2 = 767;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 72:
			*uParam1 = 733;
			*uParam2 = 735;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 124:
			*uParam1 = 791;
			*uParam2 = 793;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 86:
			*uParam1 = 768;
			*uParam2 = 772;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 126:
			*uParam1 = 773;
			*uParam2 = 779;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 120:
			*uParam1 = 432;
			*uParam2 = 442;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 115:
			*uParam1 = 345;
			*uParam2 = 375;
			if (bVar0)
			{
				*uParam2 = 375;
			}
			break;
		case 125:
			*uParam1 = 376;
			*uParam2 = 379;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 116:
			*uParam1 = 783;
			*uParam2 = 790;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 21:
			*uParam1 = 780;
			*uParam2 = 782;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 42:
			*uParam1 = 794;
			*uParam2 = 798;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 89:
			*uParam1 = 799;
			*uParam2 = 800;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 23:
			*uParam1 = 801;
			*uParam2 = 801;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 28:
			*uParam1 = 802;
			*uParam2 = 803;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 101:
			*uParam1 = 804;
			*uParam2 = 806;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 117:
			*uParam1 = 507;
			*uParam2 = 507;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 11:
			*uParam1 = 807;
			*uParam2 = 833;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 128:
			*uParam1 = 834;
			*uParam2 = 857;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		default:
			*uParam1 = -1;
			*uParam2 = -1;
			break;
	}
	if (*uParam1 == -1 || *uParam2 == -1)
	{
		return 0;
	}
	return 1;
}

bool func_96(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

int func_97(int iParam0)
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

int func_98(int iParam0, bool bParam1)
{
	if (!func_96(iParam0))
	{
		return 0;
	}
	if (!func_168(iParam0, 2))
	{
		return 0;
	}
	if (func_168(iParam0, 32) && !bParam1)
	{
		func_171(iParam0, _NAMESPACE48::_0x4F76E3676583D951(func_170(iParam0)));
		if (func_20() == -1)
		{
			if (func_168(iParam0, 2048))
			{
				_NAMESPACE48::_0x49A8C2CD97815215(func_172(iParam0));
				func_173(iParam0, 2048);
			}
			_NAMESPACE48::_0xFCC6DB8DBE709BC8(func_172(iParam0));
		}
		return 0;
	}
	if (!func_174(iParam0) && func_20() == -1)
	{
		return 0;
	}
	if (_NAMESPACE48::_0x800DF3FC913355F3(func_172(iParam0)))
	{
		func_173(iParam0, 128);
		return 1;
	}
	func_171(iParam0, _NAMESPACE48::_0x4F76E3676583D951(func_170(iParam0)));
	_NAMESPACE48::_0x4F81EAD1DE8FA19B(func_172(iParam0));
	if (func_168(iParam0, 2048))
	{
		_NAMESPACE48::_0x49A8C2CD97815215(func_172(iParam0));
		func_173(iParam0, 2048);
	}
	return 1;
}

bool func_99(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 12);
}

bool func_100(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 16);
}

int func_101(int iParam0)
{
	int iVar0;

	iVar0 = func_172(iParam0);
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

void func_102()
{
}

int func_103()
{
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return -1;
	}
	if (PED::_0x5407B7288D0478B7(Global_35, 516) == 0)
	{
		return -1;
	}
	if (PED::_0x336B3D200AB007CB(Global_35, Global_36, 100f, 512) == 0)
	{
		return -1;
	}
	if (func_63(0, 0, 1))
	{
		return -1;
	}
	if (!Local_47.f_2)
	{
		if (LAW::_0x9D5C9A5A3321B128(PLAYER::PLAYER_ID()))
		{
			func_175("WAP_LAW_WARN", 10000, 0, 0, 0, 1);
		}
		else
		{
			func_175("WAP_COMBAT_WARN", 10000, 0, 0, 0, 1);
		}
		Local_47.f_2 = 1;
	}
	if (func_128(Global_35, iLocal_14, 1, 0))
	{
		return 2;
	}
	return -1;
}

void func_104()
{
	if (LAW::_0x9D5C9A5A3321B128(PLAYER::PLAYER_ID()))
	{
		func_176(2, 158959085, 0, "CAMP_LAW_HON", 0, 0, 1065353216, 0);
	}
	else
	{
		func_176(2, 158959085, 0, "CAMP_COMBAT_HON", 0, 0, 1065353216, 0);
	}
}

void func_105(int* iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 >= 20)
	{
		return;
	}
	iParam0->f_1[iVar0 /*3*/] = iParam2;
	(iParam0->f_1[iVar0 /*3*/])->f_1 = iParam3;
	(iParam0->f_1[iVar0 /*3*/])->f_2 = iParam4;
}

void func_106()
{
	Local_47.f_1 = MISC::GET_GAME_TIMER() + 300;
}

int func_107()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;
	int iVar20;
	int iVar21;

	func_177();
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return 0;
	}
	if (func_63(0, 0, 1))
	{
		return 0;
	}
	iVar0 = func_178(Local_47);
	if (MISC::GET_GAME_TIMER() < Local_47.f_1)
	{
		return -1;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iVar2 = MISC::_0x3FFB15534067DCD4(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, Local_47));
		if (ENTITY::IS_ENTITY_DEAD(iVar2))
		{
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_35, iVar2, 1, 1))
		{
			ENTITY::_SET_ENTITY_HEALTH(Global_35, 0, iVar2);
			return -1;
		}
		iVar1++;
	}
	if (!Local_47.f_3)
	{
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			iVar20 = MISC::_0x3FFB15534067DCD4(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, Local_47));
			if (ENTITY::IS_ENTITY_DEAD(iVar20))
			{
			}
			else
			{
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 6))
				{
					case 0:
						iVar21 = 21030;
						break;
					case 1:
						iVar21 = 14284;
						break;
					case 2:
						iVar21 = 65478;
						break;
					case 3:
						iVar21 = 6884;
						break;
					case 4:
						iVar21 = 56200;
						break;
					case 5:
						iVar21 = 0;
						break;
				}
				Var3.f_14 = 1;
				Var3.f_6 = 0;
				Var3.f_4 = 1500;
				Var3.f_5 = 0;
				Var3.f_7 = 1;
				Var3.f_10 = 1;
				Var3.f_11 = 1f;
				Var3.f_1 = { PED::GET_PED_BONE_COORDS(Global_35, iVar21, 0f, 0f, 0f) };
				Var3.f_15 = 1;
				WEAPON::_0x5230D3F6EE56CFE6(iVar20, 0);
				TASK::TASK_SHOOT_WITH_WEAPON(iVar20, &Var3);
				Local_47.f_3 = 1;
			}
			iVar1++;
		}
	}
	return -1;
}

void func_108(int* iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 >= 20)
	{
		return;
	}
	*iParam0 = iVar0;
	func_179(iParam0);
}

int func_109()
{
	if (func_20() == -1)
	{
		if (func_71() || func_180())
		{
			return 1;
		}
	}
	else if (func_181(1, 255))
	{
		return 1;
	}
	return 0;
}

int func_110()
{
	if (Global_1894899->f_187)
	{
		return 1;
	}
	if (func_113(16) && !func_113(21))
	{
		return 1;
	}
	return 0;
}

void func_111(int iParam0, var uParam1)
{
	if (VOLUME::_0x666C2F53ABEFC952(iParam0) != 623901053)
	{
		VOLUME::_0xFD010A2154B40676(iParam0, 623901053);
	}
	if (uParam1->f_3)
	{
		PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 7, 0, 0);
		PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 20, 0, 0);
		PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 19, 0, 0);
		PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 10, 0, 0);
		PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 4, 0, 0);
		uParam1->f_3 = 0;
	}
}

int func_112(int iParam0)
{
	if (!func_63(0, 0, 1))
	{
		return 1;
	}
	if ((((((func_182(18) || func_182(20)) || func_182(21)) || func_182(17)) || func_183(3)) || func_184(134)) || func_184(5))
	{
		return 0;
	}
	if (iParam0 == 95)
	{
		if (func_182(20))
		{
			return 0;
		}
	}
	return 1;
}

bool func_113(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_185(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
	}
	return (UNLOCK::_UNLOCK_IS_UNLOCKED(((*Global_1835011)[iParam0 /*74*/])->f_2) && !UNLOCK::_UNLOCK_IS_VISIBLE(((*Global_1835011)[iParam0 /*74*/])->f_2));
}

int func_114(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 105:
			if (bParam1)
			{
				return 147;
			}
			return 146;
		case 95:
			if (bParam1)
			{
				return 149;
			}
			return 148;
	}
	return -1;
}

bool func_115(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

int func_116(int iParam0, int iParam1, int iParam2)
{
	if (!func_134(Global_35, 0))
	{
		return 0;
	}
	if (iParam1 || iParam2)
	{
		if (VOLUME::_0x666C2F53ABEFC952(iParam0) == 1030835986)
		{
			VOLUME::_0xFD010A2154B40676(iParam0, 623901053);
		}
		return 0;
	}
	else if (VOLUME::_0xF256A75210C5C0EB(iParam0, Global_36))
	{
		switch (Global_1935630->f_44)
		{
			case joaat("weapon_unarmed"):
			case joaat("weapon_kit_camera"):
			case 191707516:
				if (VOLUME::_0x666C2F53ABEFC952(iParam0) != 1030835986)
				{
					VOLUME::_0xFD010A2154B40676(iParam0, 1030835986);
				}
				break;
			case joaat("weapon_fishingrod"):
			case joaat("weapon_melee_lantern"):
			case joaat("weapon_kit_binoculars"):
			case joaat("weapon_melee_lantern_electric"):
			case 1030402560:
			case joaat("weapon_melee_davy_lantern"):
			case 1549070292:
				if (VOLUME::_0x666C2F53ABEFC952(iParam0) == 1030835986)
				{
					VOLUME::_0xFD010A2154B40676(iParam0, 623901053);
				}
				break;
			default:
				if (VOLUME::_0x666C2F53ABEFC952(iParam0) != 1030835986)
				{
					VOLUME::_0xFD010A2154B40676(iParam0, 1030835986);
				}
				break;
		}
		HUD::_0xC9CAEAEEC1256E54(1833957607);
	}
	return 1;
}

int func_117(int iParam0)
{
	switch (iParam0)
	{
		case 7359335:
			return 78;
		case -744494798:
			return 120;
		case -1708386982:
			return 37;
		case 1053078005:
			return 38;
		case 1778899666:
			return 93;
		case -1947415645:
			return 82;
		case 1862420670:
			return 95;
		case -1851305682:
			return 65;
		case -473051294:
			return 69;
		case 406627834:
			return 3;
		case 1463094051:
			return 110;
		case 2046780049:
			return 105;
		case -765540529:
			return 5;
		case 2147354003:
			return 32;
		case 427683330:
			return 26;
		case -1524959147:
			return 115;
		case 459833523:
			return 76;
		case 2126321341:
			return 92;
		case -872622034:
			return 35;
		case 1663398575:
			return 56;
		case -1207133769:
		case 201158410:
		case 1654810713:
			return 57;
		case 1299204683:
			return 61;
	}
	return -1;
}

var func_118()
{
	return Global_1935496->f_10;
}

var func_119()
{
	return Global_1935496->f_11;
}

void func_120(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_186(iParam0, &iVar0, &iVar1);
	if (!func_187(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_188(iVar0, iVar1);
}

void func_121()
{
	switch (Global_1935630->f_44)
	{
		case joaat("weapon_unarmed"):
		case joaat("weapon_fishingrod"):
		case joaat("weapon_kit_camera"):
		case joaat("weapon_melee_lantern"):
		case joaat("weapon_kit_binoculars"):
		case 191707516:
		case joaat("weapon_melee_lantern_electric"):
		case 1030402560:
		case joaat("weapon_melee_davy_lantern"):
		case 1549070292:
			break;
		default:
			WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 1, 0);
			break;
	}
	if (func_189(Global_35, 1))
	{
		WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 1, 0);
	}
}

void func_122()
{
	func_190(175);
	func_190(147);
	func_190(146);
	func_190(149);
	func_190(148);
}

int func_123()
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

int func_124(int iParam0)
{
	if (!func_127(iParam0))
	{
		return -1;
	}
	return func_192(func_191(iParam0));
}

bool func_125(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_126(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_127(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
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

bool func_129(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_130(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam1 == 2104565373 && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iParam0))
			{
				return 1;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1) == 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_131(int iParam0, int iParam1)
{
	func_193(iParam0, iParam1);
}

void func_132(int iParam0, int iParam1)
{
	func_194(iParam0, iParam1);
}

int func_133(int iParam0)
{
	iParam0 = func_195(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0 /*45*/];
}

int func_134(int iParam0, int iParam1)
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
	if (func_129(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_129(iVar0, 2))
	{
		if (PED::_0x3AA24CCC0D451379(iParam0))
		{
			return 0;
		}
	}
	if (func_129(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_129(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_129(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_129(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return 0;
		}
	}
	if (func_129(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_129(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

void func_135(int iParam0)
{
	Global_1900383->f_316 = (Global_1900383->f_316 || iParam0);
}

int func_136(int iParam0)
{
	if ((iParam0 == 22 || iParam0 == 37) && !func_50())
	{
		return 1;
	}
	if (iParam0 == 61)
	{
		return 1;
	}
	return 0;
}

int func_137()
{
	if (Global_16)
	{
		return 0;
	}
	if (!func_196())
	{
		return 0;
	}
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1934266->f_78.f_55))
	{
		return 0;
	}
	if (func_63(-1 ^ 9, 0, 1))
	{
		return 0;
	}
	return 1;
}

char* func_138(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5, var uParam6)
{
	char* sVar0;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1894899->f_162)))
	{
		sVar0 = func_197(Global_1894899->f_162);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && uParam4)
	{
		sVar0 = func_199(func_198(Global_36));
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		if (!func_200(iParam0) || func_201(45))
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
				case 29:
					sVar0 = "HOMESTEAD_WATSONS_CABIN";
					break;
				case 30:
					sVar0 = "LANDMARK_CANEBREAK_MANOR";
					break;
				case 31:
					sVar0 = "LANDMARK_COPPERHEAD_LANDING";
					break;
				case 32:
					sVar0 = "SETTLEMENT_SISIKA_PENITENTIARY";
					break;
				case 120:
					sVar0 = "TOWN_ARMADILLO";
					break;
				case 121:
					sVar0 = "SETTLEMENT_COOTS_CHAPEL";
					break;
				case 124:
					sVar0 = "SETTLEMENT_RIDGEWOOD_FARM";
					break;
				case 123:
					sVar0 = "LANDMARK_RILEYS_CHARGE";
					break;
				case 125:
					sVar0 = "HIDEOUT_TWIN_ROCKS";
					break;
				case 33:
					sVar0 = "LANDMARK_BACCHUS_BRIDGE";
					break;
				case 34:
					sVar0 = "HOMESTEAD_FIRWOOD_RISE";
					break;
				case 35:
					sVar0 = "SETTLEMENT_FORT_WALLACE";
					break;
				case 36:
					sVar0 = "HIDEOUT_SIX_POINT_CABIN";
					break;
				case 114:
					sVar0 = "HIDEOUT_GAPTOOTH_BREACH";
					break;
				case 116:
					sVar0 = "SETTLEMENT_RATHSKELLER_FORK";
					break;
				case 115:
					sVar0 = "TOWN_TUMBLEWEED";
					break;
				case 37:
					sVar0 = "SETTLEMENT_BEECHERS_HOPE";
					break;
				case 38:
					sVar0 = "TOWN_BLACKWATER";
					break;
				case 39:
					sVar0 = "LANDMARK_QUAKERS_COVE";
					break;
				case 40:
					sVar0 = "HOMESTEAD_ADLER_RANCH";
					break;
				case 50:
					sVar0 = "LANDMARK_CALUMET_RAVINE";
					break;
				case 42:
					sVar0 = "HOMESTEAD_CHEZ_PORTER";
					break;
				case 43:
					sVar0 = "HIDEOUT_COLTER";
					break;
				case 41:
					sVar0 = "LANDMARK_WINDOW_ROCK";
					break;
				case 45:
					sVar0 = "LANDMARK_MILLESANI_CLAIM";
					break;
				case 48:
					sVar0 = "LANDMARK_TEMPEST_RIM";
					break;
				case 54:
					sVar0 = "LANDMARK_THE_LOFT";
					break;
				case 56:
					sVar0 = "SETTLEMENT_WAPITI";
					break;
				case 49:
					sVar0 = "LANDMARK_EWING_BASIN";
					break;
				case 57:
					sVar0 = "SETTLEMENT_AGUASDULCES";
					break;
				case 59:
					sVar0 = "LANDMARK_CINCO_TORRES";
					break;
				case 60:
					sVar0 = "LANDMARK_LA_CAPILLA";
					break;
				case 61:
					sVar0 = "TOWN_MANICATO";
					break;
				case 126:
					sVar0 = "TOWN_MACFARLANES_RANCH";
					break;
				case 127:
					sVar0 = "SETTLEMENT_THIEVES_LANDING";
					break;
				case 62:
					sVar0 = "LANDMARK_OLD_GREENBANK_MILL";
					break;
				case 64:
					sVar0 = "HOMESTEAD_CARMODY_DELL";
					break;
				case 65:
					sVar0 = "SETTLEMENT_CORNWALL_KEROSENE_TAR";
					break;
				case 66:
					sVar0 = "HOMESTEAD_GUTHRIE_FARM";
					break;
				case 67:
					sVar0 = "LANDMARK_CUMBERLAND_FALLS";
					break;
				case 68:
					sVar0 = "HOMESTEAD_DOWNES_RANCH";
					break;
				case 69:
					sVar0 = "SETTLEMENT_EMERALD_RANCH";
					break;
				case 70:
					sVar0 = "LANDMARK_GRANGERS_HOGGERY";
					break;
				case 72:
					sVar0 = "HOMESTEAD_LARNED_SOD";
					break;
				case 74:
					sVar0 = "LANDMARK_LUCKYS_CABIN";
					break;
				case 75:
					sVar0 = "LANDMARK_FLATNECK_STATION";
					break;
				case 76:
					sVar0 = "TOWN_VALENTINE";
					break;
				case 77:
					sVar0 = "HOMESTEAD_ABERDEEN_PIG_FARM";
					break;
				case 78:
					sVar0 = "TOWN_ANNESBURG";
					break;
				case 79:
					sVar0 = "HIDEOUT_BEAVER_HOLLOW";
					break;
				case 82:
					sVar0 = "SETTLEMENT_BUTCHER_CREEK";
					break;
				case 80:
					sVar0 = "LANDMARK_BLACK_BALSAM_RISE";
					break;
				case 81:
					sVar0 = "LANDMARK_BRANDYWINE_DROP";
					break;
				case 83:
					sVar0 = "HOMESTEAD_DOVERHILL";
					break;
				case 86:
					sVar0 = "HOMESTEAD_MACLEANS_HOUSE";
					break;
				case 87:
					sVar0 = "LANDMARK_MOSSY_FLATS";
					break;
				case 88:
					sVar0 = "LANDMARK_ROANOKE_VALLEY";
					break;
				case 89:
					sVar0 = "HOMESTEAD_WILLARDS_REST";
					break;
				case 92:
					sVar0 = "TOWN_VANHORN";
					break;
				case 117:
					sVar0 = "SETTLEMENT_BENEDICT_POINT";
					break;
				case 118:
					sVar0 = "HIDEOUT_FORT_MERCER";
					break;
				case 119:
					sVar0 = "SETTLEMENT_PLAINVIEW";
					break;
				case 93:
					sVar0 = "SETTLEMENT_BRAITHWAITE_MANOR";
					break;
				case 94:
					sVar0 = "LANDMARK_BOLGER_GLADE";
					break;
				case 95:
					sVar0 = "SETTLEMENT_CALIGA_HALL";
					break;
				case 96:
					sVar0 = "HOMESTEAD_CATFISH_JACKSONS";
					break;
				case 98:
					sVar0 = "HIDEOUT_CLEMENS_POINT";
					break;
				case 99:
					sVar0 = "HOMESTEAD_COMPSONS_STEAD";
					break;
				case 100:
					sVar0 = "HOMESTEAD_HILL_HAVEN_RANCH";
					break;
				case 102:
					sVar0 = "HOMESTEAD_LONNIES_SHACK";
					break;
				case 104:
					sVar0 = "LANDMARK_RADLEYS_PASTURE";
					break;
				case 105:
					sVar0 = "TOWN_RHODES";
					break;
				case 108:
					sVar0 = "LANDMARK_BEAR_CLAW";
					break;
				case 110:
					sVar0 = "SETTLEMENT_MANZANITA_POST";
					break;
				case 111:
					sVar0 = "LANDMARK_PACIFIC_UNION_RAILROAD";
					break;
				case 112:
					sVar0 = "LANDMARK_TANNERS_REACH";
					break;
				case 128:
					sVar0 = "SETTLEMENT_CENTRAL_UNION_RAILROAD_CAMP";
					break;
			}
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) || uParam5)
	{
		switch (iParam2)
		{
			case -49694339:
				sVar0 = "WATER_ARROYO_DE_LA_VIBORA";
				*uParam6 = 1;
				break;
			case -196675805:
				sVar0 = "WATER_AURORA_BASIN";
				*uParam6 = 1;
				break;
			case -1168459546:
				sVar0 = "WATER_BAHIA_DE_LA_PAZ";
				*uParam6 = 1;
				break;
			case 795414694:
				sVar0 = "WATER_BARROW_LAGOON";
				*uParam6 = 1;
				break;
			case -557290573:
				sVar0 = "DISTRICT_BAYOU_NWA";
				*uParam6 = 1;
				break;
			case -1073312073:
				sVar0 = "WATER_CAIRN_LAKE";
				*uParam6 = 1;
				break;
			case -804804953:
				sVar0 = "WATER_CATTAIL_POND";
				*uParam6 = 1;
				break;
			case 370072007:
				sVar0 = "WATER_DAKOTA_RIVER";
				*uParam6 = 1;
				break;
			case 1245451421:
				sVar0 = "WATER_DEADBOOT_CREEK";
				*uParam6 = 1;
				break;
			case -105598602:
				sVar0 = "WATER_ELYSIAN_POOL";
				*uParam6 = 1;
				break;
			case -1356490953:
				sVar0 = "WATER_FLAT_IRON_LAKE";
				*uParam6 = 1;
				break;
			case -1276586360:
				sVar0 = "WATER_HAWKS_EYE_CREEK";
				*uParam6 = 1;
				break;
			case 1755369577:
				sVar0 = "LANDMARK_HEARTLAND_OVERFLOW";
				*uParam6 = 1;
				break;
			case 1175365009:
				sVar0 = "WATER_COTORRA_SPRINGS";
				*uParam6 = 1;
				break;
			case -1369817450:
				sVar0 = "WATER_LAKE_DON_JULIO";
				*uParam6 = 1;
				break;
			case 592454541:
				sVar0 = "WATER_LAKE_ISABELLA";
				*uParam6 = 1;
				break;
			case -2040708515:
				sVar0 = "WATER_LANNAHECHEE_RIVER";
				*uParam6 = 1;
				break;
			case -1410384421:
				sVar0 = "WATER_LITTLE_CREEK_RIVER";
				*uParam6 = 1;
				break;
			case -1308233316:
				sVar0 = "WATER_LOWER_MONTANA_RIVER";
				*uParam6 = 1;
				break;
			case 301094150:
				sVar0 = "WATER_MATTOCK_POND";
				*uParam6 = 1;
				break;
			case -811730579:
				sVar0 = "WATER_MOONSTONE_POND";
				*uParam6 = 1;
				break;
			case -1817904483:
				sVar0 = "WATER_OCREAGHS_RUN";
				*uParam6 = 1;
				break;
			case -1300497193:
				sVar0 = "WATER_OWANJILA";
				*uParam6 = 1;
				break;
			case 2005774838:
				sVar0 = "WATER_RINGNECK_CREEK";
				*uParam6 = 1;
				break;
			case -247856387:
				sVar0 = "WATER_SEA_OF_CORONADO";
				*uParam6 = 1;
				break;
			case -823661292:
				sVar0 = "WATER_SOUTHFIELD_FLATS";
				*uParam6 = 1;
				break;
			case -218679770:
				sVar0 = "WATER_SPIDER_GORGE";
				*uParam6 = 1;
				break;
			case -1287619521:
				sVar0 = "WATER_STILLWATER_CREEK";
				*uParam6 = 1;
				break;
			case -1781130443:
				sVar0 = "WATER_UPPER_MONTANA_RIVER";
				*uParam6 = 1;
				break;
			case -261541730:
				sVar0 = "WATER_WHINYARD_STRAIT";
				*uParam6 = 1;
				break;
			case -1229593481:
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
			case -1504425495:
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

bool func_139(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

int func_140(int iParam0)
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

int func_141(int iParam0)
{
	if (!func_139(iParam0))
	{
		return -1;
	}
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_40.f_358[iParam0 /*12*/]);
	}
	return &(Global_1058888->f_42266[iParam0 /*12*/]);
}

int func_142(int iParam0)
{
	switch (iParam0)
	{
		case -196675805:
			return 0;
		case 795414694:
			return 0;
		case -557290573:
			return 2;
		case 650214731:
			return 1;
		case -1073312073:
			return 0;
		case 231313522:
			return 0;
		case -804804953:
			return 0;
		case 370072007:
			return 1;
		case 1245451421:
			return 1;
		case 469159176:
			return 1;
		case -105598602:
			return 0;
		case -1356490953:
			return 0;
		case -1276586360:
			return 1;
		case 1755369577:
			return 0;
		case 1175365009:
			return 0;
		case -1229593481:
			return 1;
		case -1369817450:
			return 0;
		case 592454541:
			return 0;
		case -2040708515:
			return 1;
		case -1410384421:
			return 1;
		case -1308233316:
			return 1;
		case 301094150:
			return 0;
		case -811730579:
			return 0;
		case -1817904483:
			return 0;
		case -1300497193:
			return 0;
		case 2005774838:
			return 1;
		case -1504425495:
			return 1;
		case -247856387:
			return 1;
		case -823661292:
			return 0;
		case -218679770:
			return 1;
		case -1287619521:
			return 1;
		case -1781130443:
			return 1;
		case -261541730:
			return 1;
		default:
			break;
	}
	return -1;
}

char* func_143(int iParam0)
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

bool func_144(int iParam0, int iParam1)
{
	if (!func_7(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return (Global_40.f_431[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_42339[iParam0] && iParam1) != 0;
}

bool func_145(int iParam0, int iParam1)
{
	if (!func_139(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return ((Global_40.f_358[iParam0 /*12*/])->f_5 && iParam1) != 0;
	}
	return ((Global_1058888->f_42266[iParam0 /*12*/])->f_5 && iParam1) != 0;
}

int func_146(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

float func_147(float fParam0)
{
	return ((fParam0 * 1.8f) + 32f);
}

char* func_148(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_202(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

var func_149(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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

bool func_150(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

int func_151(int iParam0)
{
	int iVar0;

	if (func_200(iParam0))
	{
		if (!func_201(45))
		{
			return 0;
		}
	}
	iVar0 = func_6(iParam0);
	if (func_203())
	{
		if (!func_185(((*Global_1835011)[3 /*74*/])->f_1, 1))
		{
			return (iVar0 == 7 || iVar0 == 6);
		}
	}
	return 1;
}

void func_152(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

struct<2> func_153(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_154(var uParam0, var uParam1, int iParam2)
{
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

int func_155()
{
	return Global_1894899->f_2;
}

bool func_156(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_157(int iParam0)
{
	Global_1327479->f_3 = iParam0;
}

int func_158()
{
	return Global_1310750->f_16037;
}

bool func_159(int iParam0, int iParam1)
{
	if (!func_156(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/] && iParam1) != 0;
}

int func_160(int iParam0)
{
	if (!func_156(iParam0))
	{
		return 0;
	}
	if (func_115(64) && func_204(iParam0))
	{
		return 1;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_46;
}

int func_161(int iParam0)
{
	if (!func_156(iParam0))
	{
		return 0;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_47;
}

void func_162(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_156(&(Global_1310750->f_13321[iParam0 /*9*/])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID((Global_1310750->f_13321[iParam0 /*9*/])->f_5, 523);
	((*Global_1310750)[iVar0 /*111*/])->f_48 = 0;
	func_205(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

void func_163(int iParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		VOLUME::_0x43F867EF5C463A53(iParam0);
	}
}

void func_164(int iParam0)
{
	func_206((Global_1935369->f_5[iParam0 /*11*/])->f_6, 1);
	func_207((Global_1935369->f_5[iParam0 /*11*/])->f_6, 0);
	if (VOLUME::_0xF6A8A652A6B186CD((Global_1935369->f_5[iParam0 /*11*/])->f_8))
	{
		VOLUME::_0xFDFECC6EE4491E11((Global_1935369->f_5[iParam0 /*11*/])->f_8);
		(Global_1935369->f_5[iParam0 /*11*/])->f_8 = 0;
	}
	func_208(iParam0, 8192);
	func_208(iParam0, 16384);
	func_208(iParam0, 32768);
	func_208(iParam0, 131072);
	func_208(iParam0, 16777216);
	func_208(iParam0, 524288);
	func_208(iParam0, 1048576);
	(Global_1935369->f_5[iParam0 /*11*/])->f_10 = 0;
	(Global_1935369->f_5[&Global_1935369 /*11*/])->f_9 = 0;
	Global_1935369->f_5[iParam0 /*11*/] = 0;
	(Global_1935369->f_5[iParam0 /*11*/])->f_1 = { 0f, 0f, 0f };
	(Global_1935369->f_5[iParam0 /*11*/])->f_4 = 0;
	(Global_1935369->f_5[iParam0 /*11*/])->f_5 = -1;
	(Global_1935369->f_5[iParam0 /*11*/])->f_6 = -1;
	(Global_1935369->f_5[iParam0 /*11*/])->f_7 = 0;
}

void func_165(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_96((Global_1914319->f_3[iParam0 /*446*/])->f_21) && func_209((Global_1914319->f_3[iParam0 /*446*/])->f_21))
	{
		func_210((Global_1914319->f_3[iParam0 /*446*/])->f_21, 0, 1, 0, 0);
	}
	(Global_1914319->f_3[iParam0 /*446*/])->f_11 = { 0f, 0f, 0f };
	(Global_1914319->f_3[iParam0 /*446*/])->f_21 = -1;
	(Global_1914319->f_3[iParam0 /*446*/])->f_22 = -1;
	(Global_1914319->f_3[iParam0 /*446*/])->f_17 = 0;
	(Global_1914319->f_3[iParam0 /*446*/])->f_1 = 0;
	if (PED::_0x91A5F9CBEBB9D936((Global_1914319->f_3[iParam0 /*446*/])->f_34))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA((Global_1914319->f_3[iParam0 /*446*/])->f_34, false);
	}
	func_211((Global_1914319->f_3[iParam0 /*446*/])->f_10, 0);
	func_212(iParam0, 536870912);
	iVar1 = func_213(iParam0);
	if (iVar1 >= 15)
	{
		(Global_1914319->f_3[iParam0 /*446*/])->f_408 = 0;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			func_167(&((Global_1914319->f_3[iParam0 /*446*/])->f_317[iVar0 /*6*/]));
			(Global_1914319->f_3[iParam0 /*446*/])->f_317[iVar0 /*6*/] = 0;
			((Global_1914319->f_3[iParam0 /*446*/])->f_317[iVar0 /*6*/])->f_1 = { 0f, 0f, 0f };
			((Global_1914319->f_3[iParam0 /*446*/])->f_317[iVar0 /*6*/])->f_4 = 0f;
			((Global_1914319->f_3[iParam0 /*446*/])->f_317[iVar0 /*6*/])->f_5 = 0;
			iVar0++;
		}
		(Global_1914319->f_3[iParam0 /*446*/])->f_408 = 0;
	}
	if ((Global_1914319->f_3[iParam0 /*446*/])->f_440 != 0)
	{
		_NAMESPACE71::_0x2F901291EF177B02((Global_1914319->f_3[iParam0 /*446*/])->f_440, 0);
	}
	(Global_1914319->f_3[iParam0 /*446*/])->f_23 = 0;
	func_214(iParam0);
	(Global_1914319->f_3[iParam0 /*446*/])->f_10 = -1;
	(Global_1914319->f_3[iParam0 /*446*/])->f_9 = -1;
	func_215(iParam0, 0);
}

int func_166(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((Global_1392240->f_1[iVar0 /*18*/])->f_4 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_167(int iParam0)
{
	if (func_216(iParam0) && func_217())
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iParam0);
	}
}

bool func_168(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_96(iParam0))
	{
		return false;
	}
	return (Global_24886[iParam0 /*2*/] && iParam1) != 0;
}

int func_169(int iParam0, bool bParam1)
{
	if (!func_96(iParam0))
	{
		return 0;
	}
	if (!func_168(iParam0, 2))
	{
		return 0;
	}
	if (func_170(iParam0) == 0)
	{
		return 1;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(func_172(iParam0)))
	{
		return 1;
	}
	if (func_168(iParam0, 1) && !bParam1)
	{
		func_218(iParam0, 128);
		return 1;
	}
	func_173(iParam0, 129);
	func_219(iParam0);
	_NAMESPACE48::_0xFC77C5B44D5FF7C0(func_172(iParam0));
	func_171(iParam0, 0);
	return 1;
}

int func_170(int iParam0)
{
	if (!func_96(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/];
}

void func_171(int iParam0, int iParam1)
{
	if (!func_96(iParam0))
	{
		return;
	}
	((*Global_1895087)[iParam0 /*3*/])->f_1 = iParam1;
}

int func_172(int iParam0)
{
	if (!func_96(iParam0))
	{
		return 0;
	}
	return ((*Global_1895087)[iParam0 /*3*/])->f_1;
}

void func_173(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return;
	}
	if (!func_96(iParam0))
	{
		return;
	}
	Global_24886[iParam0 /*2*/] = (&Global_24886[iParam0 /*2*/] - (Global_24886[iParam0 /*2*/] && iParam1));
}

int func_174(int iParam0)
{
	if (!func_96(iParam0))
	{
		return 0;
	}
	if (!func_168(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

var func_175(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar15;

	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = _NAMESPACE71::_0x049D5C615BD38BAD(&Var0, &Var13, iParam5);
	return uVar15;
}

void func_176(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_20() != -1)
	{
		return;
	}
	if ((Global_36615 && func_220(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_221(iParam0);
	iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_222(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, iParam7);
	}
	else
	{
		iVar1 = -1;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (iVar1 < 0)
			{
				if (&Global_1347477->f_155[iVar2 /*6*/] == 0)
				{
					iVar1 = iVar2;
				}
			}
			iVar2++;
		}
		if (iVar1 >= 0)
		{
			func_223(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_222(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

void func_177()
{
	Global_1905944->f_5695 = 1;
}

int func_178(int iParam0)
{
	vector3 vVar0;
	int iVar3;

	ITEMSET::_0x20A4BF0E09BEE146(iParam0);
	vVar0 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
	PED::_0x7BE607DAFF382FD2(Global_35, iParam0, 512);
	PED::_0x3ACCE14DFA6BA8C2(Global_35, 4, vVar0, 100f, iParam0);
	PED::_0x3ACCE14DFA6BA8C2(Global_35, 6, vVar0, 100f, iParam0);
	PED::_0x3ACCE14DFA6BA8C2(Global_35, 5, vVar0, 100f, iParam0);
	iVar3 = ITEMSET::GET_ITEMSET_SIZE(iParam0);
	return iVar3;
}

void func_179(var uParam0)
{
	uParam0->f_62 = -1;
	uParam0->f_64 = *uParam0;
}

int func_180()
{
	if ((!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || PED::IS_PED_DEAD_OR_DYING(Global_35, true)) || _NAMESPACE76::_0xC5C395C60B542A3C(1))
	{
		return 1;
	}
	return 0;
}

int func_181(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_224(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_225())
	{
		return func_224(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1225638->f_21[iParam1])
	{
		return func_224(&(((*Global_1108178)[iParam1 /*37*/])->f_4), iVar0, 5);
	}
	return 0;
}

int func_182(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_226(((*Global_1835011)[iParam0 /*74*/])->f_1);
}

int func_183(int iParam0)
{
	if (!func_227(iParam0))
	{
		return 0;
	}
	return func_226(((*Global_1392626)[iParam0 /*32*/])->f_3);
}

int func_184(int iParam0)
{
	if (func_20() != -1)
	{
		return 0;
	}
	if (!func_125(iParam0))
	{
		return 0;
	}
	return func_226(((*Global_1347702)[iParam0 /*49*/])->f_15);
}

int func_185(int iParam0, bool bParam1)
{
	switch (func_228(iParam0))
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

void func_186(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

int func_187(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return 0;
	}
	if (func_229(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_230(iParam0))
	{
		return 0;
	}
	if (func_231(iParam0))
	{
		return 0;
	}
	if ((Global_1898164->f_163 && !func_232(iParam0, 1)) || func_150(32768))
	{
		if (!func_232(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return 0;
		}
	}
	if (!func_233())
	{
		return 0;
	}
	return 1;
}

void func_188(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_189(int iParam0, int iParam1)
{
	int iVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true, iParam1, false);
	return func_234(iVar0);
}

void func_190(int iParam0)
{
	int iVar0;
	int iVar1;

	func_186(iParam0, &iVar0, &iVar1);
	func_235(iVar0, iVar1);
}

int func_191(int iParam0)
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

int func_192(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

void func_193(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_194(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_195(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_196()
{
	if (func_20() != 0)
	{
		return 1;
	}
	return 1;
}

char* func_197(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_198(vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 51)
	{
		if (func_236(vParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

char* func_199(int iParam0)
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

int func_200(int iParam0)
{
	switch (iParam0)
	{
		case 22:
		case 25:
		case 63:
			return 1;
	}
	return 0;
}

int func_201(int iParam0)
{
	if (!func_237(iParam0))
	{
		return 0;
	}
	return func_238(iParam0);
}

char* func_202(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_203()
{
	return 1;
	if (Global_1572887->f_12 == 0)
	{
		return 1;
	}
	return Global_40.f_1;
}

bool func_204(int iParam0)
{
	return func_159(iParam0, Global_1310750->f_16072 | 64);
}

void func_205(int iParam0)
{
	int iVar0;

	if (&Global_1310750->f_13321[iParam0 /*9*/] != -1)
	{
		((*Global_1310750)[&Global_1310750->f_13321[iParam0 /*9*/] /*111*/])->f_48 = 0;
	}
	Global_1310750->f_13321[iParam0 /*9*/] = -1;
	(Global_1310750->f_13321[iParam0 /*9*/])->f_1 = -1;
	(Global_1310750->f_13321[iParam0 /*9*/])->f_2 = { 0f, 0f, 0f };
	(Global_1310750->f_13321[iParam0 /*9*/])->f_5 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		(Global_1310750->f_13321[iParam0 /*9*/])->f_6[iVar0] = -1881652455;
		iVar0++;
	}
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
	func_239(&((Global_1935369->f_5[iParam0 /*11*/])->f_7), iParam1);
}

bool func_209(int iParam0)
{
	if (!func_96(iParam0))
	{
		return false;
	}
	return ((*Global_1895087)[iParam0 /*3*/])->f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_210(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_96(iParam0))
	{
		return;
	}
	if (!func_168(iParam0, 1))
	{
		return;
	}
	if (!func_168(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_209(iParam0)) && func_240(iParam0))
	{
		return;
	}
	func_173(iParam0, 1);
	func_219(iParam0);
	if (func_241(func_170(iParam0)))
	{
		iVar0 = func_172(iParam0);
		if (!_NAMESPACE48::_0x800DF3FC913355F3(iVar0))
		{
			return;
		}
		_NAMESPACE48::_0xBB68908CD11AEBDC(iVar0);
		_NAMESPACE48::_0xB65E7F733956CF25(iVar0);
		if (iParam2 && !_NAMESPACE48::_0xEB98B38CA60742D7(iVar0))
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
		func_173(iParam0, 16);
	}
	if (func_168(iParam0, 128) && !bParam3)
	{
		func_169(iParam0, 0);
	}
}

void func_211(int iParam0, bool bParam1)
{
	if (!func_242(iParam0))
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
	(Global_1914319->f_3[iParam0 /*446*/])->f_7 = ((Global_1914319->f_3[iParam0 /*446*/])->f_7 - ((Global_1914319->f_3[iParam0 /*446*/])->f_7 && iParam1));
}

var func_213(int iParam0)
{
	return (Global_1914319->f_3[iParam0 /*446*/])->f_408;
}

void func_214(int iParam0)
{
	(Global_1914319->f_3[iParam0 /*446*/])->f_7 = 0;
}

void func_215(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_247(iParam0))
	{
		return;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	if (bParam1)
	{
		MISC::SET_BIT(Global_1914319->f_15924[iVar1], iVar2);
	}
	else
	{
		MISC::CLEAR_BIT(Global_1914319->f_15924[iVar1], iVar2);
	}
}

int func_216(int iParam0)
{
	if (func_248(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return 0;
}

int func_217()
{
	return 1;
}

void func_218(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return;
	}
	if (!func_96(iParam0))
	{
		return;
	}
	Global_24886[iParam0 /*2*/] = (Global_24886[iParam0 /*2*/] || iParam1);
}

void func_219(int iParam0)
{
	int iVar0;

	if (!func_96(iParam0))
	{
		return;
	}
	iVar0 = func_101(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
	((*Global_1895087)[iParam0 /*3*/])->f_2 = 0;
}

int func_220(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 2139774588:
			return 1;
		case 1142025875:
			return 2;
		case 1587891565:
			return 4;
		case 1877013492:
			return 32;
		case -643014279:
			return 64;
		case -597116214:
			return 128;
		case 551416228:
			return 256;
		case 1022576842:
			return 512;
		case 953325896:
			return 1024;
		case 508358508:
			return 2048;
		case -735200598:
			return 4096;
		case -856432278:
			return 8192;
		case -2010847721:
			return 16384;
		case 446961221:
			return 32768;
		case -1972216640:
			return 65536;
		case 530833824:
			return 131072;
		case 1682361219:
			return 262144;
		case 158959085:
			return 524288;
		case 1919819559:
			return 1048576;
		case 1461411082:
			return 2097152;
		case -549508280:
			return 4194304;
		default:
			break;
	}
	return 0;
}

int func_221(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return -2;
		case 2:
			return -5;
		case 3:
			return -10;
		case 4:
			return -20;
		case 5:
			return -40;
		case 6:
			return -160;
		case 7:
			return -320;
		case 8:
			return -480;
		case 18:
			return -640;
		case 9:
			return 0;
		case 10:
			return 1;
		case 11:
			return 2;
		case 12:
			return 5;
		case 13:
			return 10;
		case 14:
			return 20;
		case 15:
			return 40;
		case 16:
			return 160;
		case 17:
			return 640;
		default:
			break;
	}
	return 0;
}

void func_222(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	char* sVar7;
	struct<2> Var8;

	iVar0 = func_249();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_250(iParam0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam5))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_override"))
			{
				iParam0 = (DECORATOR::DECOR_GET_INT(iParam5, "honor_override") * -1);
				DECORATOR::DECOR_REMOVE(iParam5, "honor_override");
			}
			else if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_bank"))
			{
				iParam0 = (iParam0 - DECORATOR::DECOR_GET_INT(iParam5, "honor_bank"));
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", 0);
			}
		}
	}
	iVar2 = 240;
	iVar3 = -240;
	fVar4 = 1f;
	if (func_201(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_50())
		{
			if (((iParam2 >= 0 && iParam2 <= 4) || (iParam2 >= 10 && iParam2 <= 14)) && iParam3 != 446961221)
			{
				fVar4 = 1.5f;
			}
		}
	}
	if (iParam0 > 0)
	{
		iVar5 = BUILTIN::CEIL((IntToFloat(iParam0) * fVar4));
	}
	else
	{
		iVar5 = BUILTIN::FLOOR((IntToFloat(iParam0) * fVar4));
	}
	Global_40.f_11095.f_35 = (Global_40.f_11095.f_35 + iVar5);
	Global_40.f_11095.f_35 = func_251(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_249();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || iParam7)
	{
		iVar6 = func_252(iVar1);
		func_254(func_253(), 0, 4000);
		func_255(Global_40.f_11095.f_35);
		if ((iVar6 > Global_40.f_11095.f_36 && iVar1 > 0) || (iVar6 > Global_40.f_11095.f_37 && iVar1 < 0))
		{
			if (iVar1 < 0)
			{
				Global_40.f_11095.f_37 = iVar6;
			}
			else
			{
				Global_40.f_11095.f_36 = iVar6;
			}
		}
		func_256(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_154(func_257(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(iParam5))
			{
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_221(14))
				{
					sVar7 = "Honor_Increase_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelGood");
				}
				else
				{
					sVar7 = "Honor_Increase_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = func_258(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_259(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_259(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_154(func_257(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_221(4))
				{
					sVar7 = "Honor_Decrease_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelBad");
				}
				else
				{
					sVar7 = "Honor_Decrease_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = func_258(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_259(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_259(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_257(-1990689970) };
	STATS::STAT_ID_SET_INT(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_0xE6B763C7F4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_260(10, 1);
	}
}

void func_223(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0 /*6*/] = iParam1;
	(Global_1347477->f_155[iParam0 /*6*/])->f_2 = iParam2;
	(Global_1347477->f_155[iParam0 /*6*/])->f_3 = iParam3;
	(Global_1347477->f_155[iParam0 /*6*/])->f_4 = iParam4;
	(Global_1347477->f_155[iParam0 /*6*/])->f_5 = bParam5;
	(Global_1347477->f_155[iParam0 /*6*/])->f_1 = MISC::GET_GAME_TIMER() + 500;
}

bool func_224(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_225()
{
	return Global_1109400->f_244;
}

bool func_226(int iParam0)
{
	int iVar0;

	iVar0 = func_228(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_227(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 9);
}

int func_228(int iParam0)
{
	if (!func_127(iParam0))
	{
		return -1;
	}
	return func_261(iParam0);
}

bool func_229(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iParam0]), iParam1);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iParam0]), iParam1);
}

int func_230(int iParam0)
{
	if (func_20() != -1)
	{
		if (func_232(iParam0, 4))
		{
			return 0;
		}
	}
	else if (func_232(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

int func_231(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_232(iParam0, 65536) && !func_232(iParam0, 32768))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if ((Global_40.f_7756[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_232(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0 /*3*/] - iVar1);
			if ((Global_40.f_7756[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && func_232(iParam0, 32768))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_232(int iParam0, int iParam1)
{
	return ((Global_1905944->f_22[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

bool func_233()
{
	return Global_1905944->f_5694;
}

bool func_234(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("weapon_unarmed"));
}

void func_235(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::CLEAR_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

int func_236(vector3 vParam0, int iParam3)
{
	vector3 vVar0;
	struct<2> Var3;
	float fVar6;

	func_262(iParam3, &vVar0, &Var3, &fVar6);
	if (func_263(vParam0, vVar0, Var3, Var3.f_1, fVar6))
	{
		return 1;
	}
	return 0;
}

int func_237(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_238(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_239(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

bool func_240(int iParam0)
{
	if (!func_96(iParam0))
	{
		return false;
	}
	return SCRIPTS::_DOES_THREAD_EXIST(((*Global_1895087)[iParam0 /*3*/])->f_2);
}

bool func_241(int iParam0)
{
	return iParam0 != 0;
}

bool func_242(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

bool func_243(int iParam0, int iParam1)
{
	if (!func_242(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_15614[iParam0] && iParam1) != 0;
}

void func_244(int iParam0, int iParam1)
{
	if (!func_242(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (Global_1914319->f_15614[iParam0] || iParam1);
}

void func_245(int iParam0, int iParam1)
{
	if (!func_242(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (&Global_1914319->f_15614[iParam0] - (Global_1914319->f_15614[iParam0] && iParam1));
}

void func_246(int iParam0)
{
	func_265(func_264(iParam0));
}

bool func_247(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 35);
}

bool func_248(int iParam0)
{
	return iParam0 != 0;
}

int func_249()
{
	int iVar0;

	iVar0 = func_266();
	if (iVar0 <= -320)
	{
		return -320;
	}
	if (iVar0 <= -280)
	{
		return -280;
	}
	if (iVar0 <= -240)
	{
		return -240;
	}
	if (iVar0 <= -200)
	{
		return -200;
	}
	if (iVar0 <= -160)
	{
		return -160;
	}
	if (iVar0 <= -120)
	{
		return -120;
	}
	if (iVar0 <= -80)
	{
		return -80;
	}
	if (iVar0 <= -40)
	{
		return -40;
	}
	if (iVar0 >= 320)
	{
		return 320;
	}
	if (iVar0 >= 280)
	{
		return 280;
	}
	if (iVar0 >= 240)
	{
		return 240;
	}
	if (iVar0 >= 200)
	{
		return 200;
	}
	if (iVar0 >= 160)
	{
		return 160;
	}
	if (iVar0 >= 120)
	{
		return 120;
	}
	if (iVar0 >= 80)
	{
		return 80;
	}
	if (iVar0 >= 40)
	{
		return 40;
	}
	return 0;
}

int func_250(int iParam0)
{
	float fVar0;
	float fVar1;

	if (func_20() != -1)
	{
		return iParam0;
	}
	if (Global_1347477->f_2 + 120000) < MISC::GET_GAME_TIMER()
	{
		Global_1347477->f_3 = 1;
		Global_1347477->f_2 = MISC::GET_GAME_TIMER();
		return iParam0;
	}
	fVar0 = 1f;
	Global_1347477->f_2 = MISC::GET_GAME_TIMER();
	Global_1347477->f_3++;
	if (Global_1347477->f_3 >= 10)
	{
		fVar0 = 2f;
	}
	else if (Global_1347477->f_3 >= 3)
	{
		fVar0 = 1.5f;
	}
	fVar1 = (BUILTIN::TO_FLOAT(iParam0) * fVar0);
	fVar1 = func_267(MISC::ABSF(fVar1) < 1f, func_267(fVar1 < 0f, -1f, 1f), fVar1);
	return BUILTIN::CEIL(fVar1);
}

int func_251(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_252(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case -40:
		case 40:
			return 1;
		case -80:
		case 80:
			return 2;
		case -120:
		case 120:
			return 3;
		case -160:
		case 160:
			return 4;
		case -200:
		case 200:
			return 5;
		case -240:
		case 240:
			return 6;
		case -280:
		case 280:
			return 7;
		case -320:
		case 320:
			return 8;
	}
	return 0;
}

int func_253()
{
	if (Global_40.f_11095.f_35 <= -320)
	{
		return 1;
	}
	else if (Global_40.f_11095.f_35 <= -280)
	{
		return 2;
	}
	else if (Global_40.f_11095.f_35 <= -240)
	{
		return 3;
	}
	else if (Global_40.f_11095.f_35 <= -200)
	{
		return 4;
	}
	else if (Global_40.f_11095.f_35 <= -160)
	{
		return 5;
	}
	else if (Global_40.f_11095.f_35 <= -120)
	{
		return 6;
	}
	else if (Global_40.f_11095.f_35 <= -80)
	{
		return 7;
	}
	else if (Global_40.f_11095.f_35 < 0)
	{
		return 8;
	}
	else if (Global_40.f_11095.f_35 <= 40)
	{
		return 9;
	}
	else if (Global_40.f_11095.f_35 >= 320)
	{
		return 16;
	}
	else if (Global_40.f_11095.f_35 >= 280)
	{
		return 15;
	}
	else if (Global_40.f_11095.f_35 >= 240)
	{
		return 14;
	}
	else if (Global_40.f_11095.f_35 >= 200)
	{
		return 13;
	}
	else if (Global_40.f_11095.f_35 >= 160)
	{
		return 12;
	}
	else if (Global_40.f_11095.f_35 >= 120)
	{
		return 11;
	}
	else if (Global_40.f_11095.f_35 >= 80)
	{
		return 10;
	}
	return 9;
}

void func_254(int iParam0, bool bParam1, int iParam2)
{
	func_268((MISC::GET_GAME_TIMER() + iParam2), !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1955569->f_1.f_2.f_1, iParam0);
	func_269(iParam0);
}

void func_255(int iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_16[2]), 0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[2]), 1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_20[2]), func_270(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_24[2]), "pausemenu_player");
}

void func_256(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	bVar3 = false;
	if (func_271(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_272(iVar5, &iVar2, &iVar0))
			{
				if (!func_273(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_274(iVar2);
					if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar1))
					{
						if (bParam0)
						{
							UNLOCK::_UNLOCK_SET_UNLOCKED(iVar1, false);
						}
					else
					{
						}
						else
						{
							if (func_275(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_249() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_249() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_276();
							}
							if (bVar3)
							{
								UNLOCK::_UNLOCK_SET_UNLOCKED(iVar1, true);
								bVar3 = false;
							}
						}
						iVar5++;
					}
				}
			}
		}
	}

struct<2> func_257(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

char* func_258(int iParam0)
{
	switch (iParam0)
	{
		case 2139774588:
			return "HONOR_EVENT_LOOT_INNOCENT";
		case 1142025875:
			return "HONOR_EVENT_AMBIENT_KILL";
		case 1587891565:
			return "HONOR_EVENT_AMBIENT_KO";
		case 1877013492:
			return "HONOR_EVENT_SCARE";
		case -643014279:
			return "HONOR_EVENT_KILL_VERMIN";
		case -597116214:
			return "HONOR_EVENT_KILL_FARM_ANIMAL";
		case 551416228:
			return "HONOR_EVENT_KILL_HORSE";
		case 1022576842:
			return "HONOR_EVENT_STEAL_HORSE";
		case 953325896:
			return "HONOR_EVENT_STEAL_DONKEY";
		case 508358508:
			return "HONOR_EVENT_STEAL_MULE";
		case -856432278:
			return "HONOR_EVENT_STEAL_WAGON";
		case -735200598:
			return "HONOR_EVENT_TRAMPLED_INNOCENT";
		case -2010847721:
			return "HONOR_EVENT_ABANDON_ANIMALS";
		case 446961221:
			return "HONOR_EVENT_ANIMAL_BLEEDOUT";
		case -1972216640:
			return "HONOR_EVENT_ANTAGONIZE";
		case 530833824:
			return "HONOR_EVENT_THEFT";
		case 1682361219:
			return "HONOR_EVENT_INTERVENED";
		case 158959085:
			return "HONOR_EVENT_WANTED_IN_CAMP";
		case 1919819559:
			return "HONOR_EVENT_DONATED_GAME";
		case 1461411082:
			return "HONOR_EVENT_ITEM_REQUEST";
		case -549508280:
			return "HONOR_EVENT_LONG_ABSENCE";
		case -1787248475:
			return "HONOR_EVENT_CRUEL_DEATH";
		case 932872355:
			return "HONOR_EVENT_JUSTICE_SERVED";
		case -1091304842:
			return "HONOR_EVENT_CHEAT";
		default:
			break;
	}
	return "";
}

var func_259(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
{
	struct<4> Var0;
	struct<7> Var13;
	var uVar20;

	Var0 = -2;
	Var0.f_1 = sParam5;
	Var0.f_2 = sParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = _NAMESPACE71::_0xB249EBCB30DD88E0(&Var0, &Var13, iParam8);
	func_277(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_260(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_278(iParam0))
	{
		return 0;
	}
	if (!func_203())
	{
		return 0;
	}
	if (!func_279(iParam0, &iVar0, &iVar1))
	{
		return 0;
	}
	if (iVar0 == -816321659 && Global_1572887->f_12 != -1)
	{
		return 0;
	}
	STATS::CHAL_ADD_GOAL_PROGRESS_INT(iVar0, iVar1, iParam1);
	return 1;
}

int func_261(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_280(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

void func_262(int iParam0, var uParam1, var uParam2, var uParam3)
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

bool func_263(vector3 vParam0, vector3 vParam3, float fParam6, float fParam7, float fParam8)
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

int func_264(int iParam0)
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

void func_265(var uParam0)
{
	Global_1914319->f_15923 = uParam0;
}

var func_266()
{
	return Global_40.f_11095.f_35;
}

float func_267(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_268(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_281(bParam1);
	}
}

void func_269(int iParam0)
{
	_NAMESPACE84::_0x74BCCEB233AD95B2(-156028329, iParam0);
}

char* func_270(int iParam0)
{
	if (iParam0 <= -320)
	{
		return "HONOR_BAD_8";
	}
	else if (iParam0 <= -280)
	{
		return "HONOR_BAD_7";
	}
	else if (iParam0 <= -240)
	{
		return "HONOR_BAD_6";
	}
	else if (iParam0 <= -200)
	{
		return "HONOR_BAD_5";
	}
	else if (iParam0 <= -160)
	{
		return "HONOR_BAD_4";
	}
	else if (iParam0 <= -120)
	{
		return "HONOR_BAD_3";
	}
	else if (iParam0 <= -80)
	{
		return "HONOR_BAD_2";
	}
	else if (iParam0 < 0)
	{
		return "HONOR_BAD_1";
	}
	else if (iParam0 <= 40)
	{
		return "HONOR_GOOD_1";
	}
	else if (iParam0 >= 320)
	{
		return "HONOR_GOOD_8";
	}
	else if (iParam0 >= 280)
	{
		return "HONOR_GOOD_7";
	}
	else if (iParam0 >= 240)
	{
		return "HONOR_GOOD_6";
	}
	else if (iParam0 >= 200)
	{
		return "HONOR_GOOD_5";
	}
	else if (iParam0 >= 160)
	{
		return "HONOR_GOOD_4";
	}
	else if (iParam0 >= 120)
	{
		return "HONOR_GOOD_3";
	}
	else if (iParam0 >= 80)
	{
		return "HONOR_GOOD_2";
	}
	return "HONOR_GOOD_1";
}

int func_271(var uParam0)
{
	vector3 vVar0;

	if (!func_282(23, &vVar0))
	{
		return 0;
	}
	vVar0.f_2 = 1781729525;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(vVar0.f_1), &vVar0))
	{
		vVar0.f_2 = -2103982008;
		*uParam0 = DATAFILE::_DATAFILE_GET_NUM_NODES(&vVar0);
		return 1;
	}
	return 0;
}

int func_272(int iParam0, var uParam1, var uParam2)
{
	struct<4> Var0;
	var uVar5;

	if (!func_282(23, &Var0))
	{
		return 0;
	}
	Var0.f_2 = 1781729525;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = -57097983;
		Var0.f_3 = iParam0;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			Var0.f_2 = 2027336698;
			DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
			*uParam1 = uVar5;
			Var0.f_2 = 316053773;
			DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
			*uParam2 = uVar5;
			return 1;
		}
	}
	return 0;
}

bool func_273(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_274(int iParam0)
{
	return iParam0;
}

int func_275(int iParam0)
{
	vector3 vVar0;

	if (!func_273(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_276()
{
	int iVar0;

	iVar0 = func_249();
	switch (iVar0)
	{
		case 120:
		case 160:
		case 200:
			return -608161198;
		case 240:
		case 280:
		case 320:
			return -2132502231;
		default:
			break;
	}
	return -1130204298;
}

void func_277(char* sParam0, char* sParam1, int iParam2)
{
	_NAMESPACE84::_0x74BCCEB233AD95B2(-466562563, MISC::GET_HASH_KEY(sParam0));
	_NAMESPACE84::_0x74BCCEB233AD95B2(1885309238, MISC::GET_HASH_KEY(sParam1));
	_NAMESPACE84::_0x74BCCEB233AD95B2(-826961056, iParam2);
}

int func_278(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return 0;
	}
	return 1;
}

int func_279(int iParam0, var uParam1, var uParam2)
{
	if (!func_278(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			*uParam1 = -816321659;
			*uParam2 = -987026056;
			break;
		case 1:
			*uParam1 = -816321659;
			*uParam2 = -1822602787;
			break;
		case 2:
			*uParam1 = -816321659;
			*uParam2 = -1602329569;
			break;
		case 3:
			*uParam1 = -816321659;
			*uParam2 = 1881899898;
			break;
		case 4:
			*uParam1 = -816321659;
			*uParam2 = -1906196506;
			break;
		case 5:
			*uParam1 = -816321659;
			*uParam2 = -674995867;
			break;
		case 6:
			*uParam1 = -816321659;
			*uParam2 = -734156617;
			break;
		case 7:
			*uParam1 = -816321659;
			*uParam2 = 261758426;
			break;
		case 8:
			*uParam1 = -816321659;
			*uParam2 = 1545586131;
			break;
		case 9:
			*uParam1 = -816321659;
			*uParam2 = -489125522;
			break;
		case 10:
			*uParam1 = -816321659;
			*uParam2 = 1190367681;
			break;
		case 11:
			*uParam1 = -816321659;
			*uParam2 = -1179367301;
			break;
		case 12:
			*uParam1 = -816321659;
			*uParam2 = 1154513253;
			break;
		case 13:
			*uParam1 = -816321659;
			*uParam2 = -1825640214;
			break;
		case 14:
			*uParam1 = -816321659;
			*uParam2 = 1209829059;
			break;
		case 15:
			*uParam1 = -816321659;
			*uParam2 = -1713230487;
			break;
		case 16:
			*uParam1 = -816321659;
			*uParam2 = 2092309893;
			break;
		default:
			return 0;
	}
	return 1;
}

int func_280(int iParam0)
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

void func_281(bool bParam0)
{
	func_283(bParam0);
	Global_1955569->f_1.f_1 = bParam0;
	if (bParam0 == 1)
	{
		HUD::_0x4CC5F2FC1332577F(121713391);
	}
	else
	{
		HUD::_0x8BC7C1F929D07BF3(121713391);
	}
}

int func_282(int iParam0, var uParam1)
{
	if (!func_284(iParam0))
	{
		return 0;
	}
	*uParam1 = Global_1914270[iParam0];
	if (*uParam1 == 0)
	{
		return 0;
	}
	return 1;
}

void func_283(bool bParam0)
{
	_NAMESPACE84::_0xB6FD96420C0126A1(-1056478928, bParam0);
}

bool func_284(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}
