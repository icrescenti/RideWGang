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
	char* sLocal_14 = NULL;
	char* sLocal_15 = NULL;
	char* sLocal_16 = NULL;
	char* sLocal_17 = NULL;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	bool bVar1;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	sLocal_14 = "mech_skin@BUCK_BUTCHER";
	sLocal_15 = "PBL_BASE";
	sLocal_16 = "PBL_DUMP";
	sLocal_17 = "PBL_DROP_IN";
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
		NETWORK::_0xFD4272A137703449();
	}
	MISC::_GAME_TRANSITION_MANAGER_INIT(496295564);
	func_1(-1);
	func_2();
	func_3();
	func_4(1);
	func_5(1);
	func_6(0);
	func_7(0);
	if (NETWORK::_0xFC4165C9165C166F() && !func_8())
	{
		NETWORK::_0x5B9C6AC118FD4774();
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(-1551675328, true);
	bVar0 = true;
	while (bVar0)
	{
		func_9();
		if (REPLAY::_IS_INTERIOR_RENDERING_DISABLED())
		{
			PLAYER::FORCE_CLEANUP(512);
			func_10();
			bVar0 = false;
		}
		if (func_11())
		{
			PLAYER::FORCE_CLEANUP(2);
			CAM::DO_SCREEN_FADE_OUT(0);
			func_12(0);
			bVar0 = false;
		}
		if (func_13() == 2)
		{
		}
		else
		{
			bVar0 = false;
		}
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			bVar0 = false;
			bVar1 = true;
		}
		if (bVar0)
		{
			if (func_14())
			{
				PAD::DISABLE_CONTROL_ACTION(2, -668070958, false);
				PAD::DISABLE_CONTROL_ACTION(2, 1250966545, false);
			}
			func_15();
		}
		else if (!bVar1 || Global_0.f_14)
		{
			if (func_16() && func_17())
			{
			}
		}
		BUILTIN::WAIT(0);
	}
	if (bVar1 && !Global_0.f_14)
	{
		func_18();
	}
	while (func_19(&Global_0, 2))
	{
		func_9();
		func_17();
		BUILTIN::WAIT(0);
	}
	func_20();
	while (!func_21())
	{
		func_9();
		BUILTIN::WAIT(0);
	}
	if (func_13() == 3 && !REPLAY::_IS_INTERIOR_RENDERING_DISABLED())
	{
		MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false), 5000f, 2442122);
	}
	func_2();
	func_22();
	MISC::_0x1096603B519C905F("");
	func_23();
	MISC::_GAME_TRANSITION_MANAGER_SHUTDOWN();
	UILOG::_0xDA0A30153FCC0FFD();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(int iParam0)
{
	Global_1572887->f_12 = iParam0;
}

void func_2()
{
	struct<19> Var0;

	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
		{
			return;
		}
	}
	if (NETWORK::_0x8FB7C254CFCBF78E(&(Global_1572887->f_252)))
	{
		NETWORK::_0xE72E5C1289BD1F40(&(Global_1572887->f_252));
	}
	Var0.f_5 = 2;
	Var0.f_12 = -1;
	Var0.f_17 = -1;
	Global_1572887->f_252 = { Var0 };
}

void func_3()
{
	func_24();
	func_25(-1);
	func_26(0);
	Global_1572887->f_164.f_61 = 0;
	if (Global_1572887->f_164.f_83 == 2)
	{
		Global_1572887->f_164.f_83 = 0;
	}
}

void func_4(int iParam0)
{
	Global_1572887->f_164.f_64 = iParam0;
}

void func_5(int iParam0)
{
	NETWORK::_0x704F92B3AF20D857(iParam0);
}

void func_6(bool bParam0)
{
	int iVar0;

	if (Global_1898077->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_27() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077->f_2 == 4 && Global_1898077->f_12 != Global_1898077->f_13) && !bParam0)
	{
		Global_1898077->f_1 = Global_1898077->f_2;
		Global_1898077->f_12 = Global_1898077->f_13;
		func_28(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_29();
		Global_1898077->f_9 = func_30(Global_1894899->f_2);
		func_31(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

void func_7(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (iParam0 == 0 && Global_43890 == 1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (&Global_40.f_11922[iVar0] == 0)
		{
			Jump @96; //curOff = 52
		}
		else
		{
			func_32(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_33(1);
	}
}

bool func_8()
{
	return Global_1572887->f_164 > 0;
}

void func_9()
{
	int iVar0;
	struct<2> Var1;
	struct<2> Var3;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0))
		{
			case 1355399116:
				break;
			case -1373301352:
				break;
			case 163683216:
				func_34();
				break;
			case 239947537:
				break;
			case -1688530399:
				break;
			case -1832939826:
				Var1 = { Var3 };
				if (SCRIPTS::GET_EVENT_DATA(1, iVar0, &Var1, 2))
				{
					switch (Var1)
					{
						case 0:
							func_34();
							break;
						case 1:
							func_34();
							break;
					}
				}
				break;
			case 1976253964:
				break;
		}
		iVar0++;
	}
}

void func_10()
{
	func_35(4);
	func_36(-417606870, 0);
	func_37(4);
}

int func_11()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0))
		{
			case 239947537:
				return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_12(int iParam0)
{
	if (iParam0 != 0)
	{
		func_38(iParam0, -1);
	}
	func_35(4);
	func_37(1);
}

int func_13()
{
	return &Global_1572864;
}

int func_14()
{
	if (func_39(32))
	{
		return 1;
	}
	if (_NAMESPACE76::_0xC5C395C60B542A3C(1))
	{
		return 1;
	}
	return 0;
}

void func_15()
{
	int iVar0;

	if (iLocal_18 > 0)
	{
		func_40();
	}
	if (!func_41(2))
	{
		func_42();
	}
	switch (iLocal_18)
	{
		case 0:
			if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("main")) <= 0)
			{
				MISC::SET_FADE_IN_AFTER_LOAD(false);
				MISC::SET_FADE_IN_AFTER_DEATH_ARREST(false);
				if (func_39(32))
				{
					if (func_39(8))
					{
						iVar0 = 1;
					}
					else if (func_39(16))
					{
						func_43(0);
						iVar0 = 0;
						func_44(&(Global_1347343->f_11), 512);
					}
					MISC::_COPY_MEMORY(&Global_40, (*Global_2621440)[iVar0 /*12065*/], 12065);
					MISC::_COPY_MEMORY(&Global_12105, (*Global_2645571)[iVar0 /*5398*/], 5398);
					MISC::_COPY_MEMORY(&Global_17503, (*Global_2656368)[iVar0 /*3206*/], 3206);
					MISC::_COPY_MEMORY(&Global_20709, (*Global_2662781)[iVar0 /*2408*/], 2408);
					MISC::_COPY_MEMORY(&Global_23117, (*Global_2667598)[iVar0 /*1769*/], 1769);
					MISC::_COPY_MEMORY(&Global_24886, (*Global_2671137)[iVar0 /*1909*/], 1909);
					MISC::_COPY_MEMORY(&Global_26795, (*Global_2674956)[iVar0 /*777*/], 777);
					MISC::_COPY_MEMORY(&Global_27572, (*Global_2676511)[iVar0 /*4501*/], 4501);
					MISC::_COPY_MEMORY(&Global_32073, (*Global_2685514)[iVar0 /*4234*/], 4234);
					if (iVar0 == 1)
					{
						if (MISC::_0x7CF96F1250EF3221(iVar0))
						{
							MISC::_0x6C7B68D3CE60E8DE(iVar0);
						}
						else if (MISC::_0x7CF96F1250EF3221(0))
						{
							MISC::_0x6C7B68D3CE60E8DE(0);
							func_45();
							iVar0 = 0;
						}
						if (func_39(32768))
						{
							SCRIPTS::_0x7D654266025E921B(-1967303071);
						}
					}
					else
					{
						if (MISC::_0x7CF96F1250EF3221(iVar0))
						{
							if (func_39(32768) && func_46(Global_1879514->f_1))
							{
								MISC::_0x627B68D9CE6EE8DE(iVar0);
							}
							else
							{
								MISC::_0x6C7B68D3CE60E8DE(iVar0);
							}
							func_45();
						}
						else if (MISC::_0x7CF96F1250EF3221(1))
						{
							MISC::_0x6C7B68D3CE60E8DE(1);
							iVar0 = 1;
						}
						if (func_39(32768))
						{
							func_47(32768);
							func_48();
							func_49();
							SCRIPTS::_0x50B72A754EE64A71(-1967303071);
							HUD::_0x8BC7C1F929D07BF3(-1679307491);
							func_50(PLAYER::PLAYER_PED_ID());
							MISC::CLEAR_WEATHER_TYPE_PERSIST();
							func_52(func_51(Global_1879514->f_1));
							MISC::SET_RANDOM_WEATHER_TYPE(true, true);
							AUDIO::TRIGGER_MUSIC_EVENT("STOP_MUSIC_8S");
						}
						else if (!func_39(2))
						{
							MISC::CLEAR_WEATHER_TYPE_PERSIST();
							MISC::SET_RANDOM_WEATHER_TYPE(true, true);
						}
					}
					func_53(iVar0);
					func_47(24);
				}
				else if (func_54())
				{
					func_55();
					func_56(1);
				}
				func_57();
				if ((!func_39(32) && func_58()) && !Global_40)
				{
					CLOCK::SET_CLOCK_DATE(1, 0, 1898);
				}
				func_59();
				func_22();
				func_60(1);
				func_61(1);
				func_62();
				func_63();
				func_64();
				MAP::_0x632AA10BF7EA53D3(1, 0);
				MISC::_0x1096603B519C905F("");
				func_23();
				GRAPHICS::_0xA21AF60C9F99CCC5();
				func_65(1);
			}
			break;
		case 1:
			if (func_66("main", 1024, Global_23[0]))
			{
				func_67();
				func_65(2);
			}
			break;
		case 2:
			func_68();
			func_65(3);
			break;
		case 3:
			if (Global_43888)
			{
				Global_43888 = 0;
				PLAYER::FORCE_CLEANUP(2);
				func_65(4);
			}
			break;
		case 4:
			func_20();
			func_65(5);
			break;
		case 5:
			if (func_21())
			{
				if (func_39(4096))
				{
					func_69(4);
				}
				func_65(0);
			}
			break;
	}
}

int func_16()
{
	if (Global_1572887->f_12 == -1)
	{
		if (!func_58())
		{
			return 0;
		}
		else if (!func_70(0))
		{
			return 0;
		}
		else if (func_71())
		{
			return 0;
		}
	}
	if (!Global_21 & 64 != 0)
	{
		return 0;
	}
	if (func_39(32898))
	{
		return 0;
	}
	if (func_46(Global_1572864->f_8))
	{
		return 0;
	}
	if (Global_1572864->f_21 != 0)
	{
		return 0;
	}
	if (func_19(&Global_0, 32))
	{
		if (func_19(&Global_0, 2))
		{
			return 1;
		}
		if (func_19(&Global_0, 64))
		{
			return 1;
		}
	}
	if (func_72(0, 1, 1))
	{
		return 0;
	}
	if (func_73(PLAYER::PLAYER_ID(), 1, 0, 0))
	{
		return 0;
	}
	if (DLC::GET_IS_LOADING_SCREEN_ACTIVE())
	{
		return 0;
	}
	if (MISC::_0x1B065A2BF7953815(0) == 1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (_NAMESPACE76::_0xC5C395C60B542A3C(1))
	{
		return 0;
	}
	if (func_13() != 2 && func_13() != 3)
	{
		return 0;
	}
	if (func_74())
	{
		return 0;
	}
	return 1;
}

int func_17()
{
	if (!func_19(&Global_0, 2))
	{
		if (Global_1572887->f_10)
		{
			func_75(&Global_0, 1);
			return 0;
		}
		if (!func_58())
		{
			func_75(&Global_0, 1);
			return 0;
		}
		if (func_46(func_76(0)))
		{
			return 0;
		}
		if (&Global_1879534)
		{
			return 0;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630->f_12)
		{
			return 0;
		}
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (func_77(&Global_1935630, 2048) || func_39(38))
		{
			return 0;
		}
		if (MISC::_0x1B065A2BF7953815(0) == 1)
		{
			return 0;
		}
		if (_NAMESPACE59::_0x3CF46F55C6585590())
		{
			return 0;
		}
		if (Global_1935630->f_2 != Global_40.f_39 || (!Global_1935630->f_12 && ENTITY::GET_ENTITY_MODEL(Global_35) != Global_40.f_39))
		{
			return 0;
		}
		if (Global_40.f_7729 != &Global_1905941)
		{
			return 0;
		}
		if (func_19(&Global_0, 16))
		{
			func_75(&Global_0, 16);
			return 0;
		}
		if (Global_1914319->f_18941.f_17)
		{
			return 0;
		}
		if (STREAMING::_0x99F92061EFE908BA())
		{
			return 0;
		}
		func_78(0);
	}
	if (_NAMESPACE59::_0x3CF46F55C6585590())
	{
		return 0;
	}
	if (MISC::_0x1B065A2BF7953815(0) == 1)
	{
		return 0;
	}
	func_79(0, 0);
	Global_0.f_6 = MISC::GET_GAME_TIMER();
	Global_0.f_3 = { Global_36 };
	Global_0.f_14 = 0;
	func_80(&Global_0, 4);
	func_75(&Global_0, 2);
	func_75(&Global_0, 32);
	func_75(&Global_0, 64);
	return 1;
}

void func_18()
{
	Global_0.f_6 = MISC::GET_GAME_TIMER();
	Global_0.f_3 = { Global_36 };
	func_81(&Global_0);
}

bool func_19(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

void func_20()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(&(Global_23[iVar0]), false) && !SCRIPTS::_0x30BED53646C86D11(&(Global_23[iVar0])))
		{
			SCRIPTS::_0x7DE4643157AD646C(&(Global_23[iVar0]));
		}
		iVar0++;
	}
}

int func_21()
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(&(Global_23[iVar1]), false))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

void func_22()
{
	int iVar0;

	func_82(512);
	iVar0 = 0;
	while (iVar0 < 25)
	{
		func_83(iVar0);
		iVar0++;
	}
	DATAFILE::_0x3168BA5D6DECE323();
}

void func_23()
{
	UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
}

void func_24()
{
	Global_1572887->f_164.f_60 = MISC::GET_GAME_TIMER();
}

void func_25(int iParam0)
{
	Global_1572887->f_164.f_1 = iParam0;
}

void func_26(int iParam0)
{
	Global_1572887->f_164 = iParam0;
}

int func_27()
{
	return Global_1572887->f_12;
}

void func_28(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &Var0, 2, 2);
}

int func_29()
{
	float fVar0;

	fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
	if (fVar0 < 0.01f)
	{
		return 19;
	}
	if (fVar0 < 0.16f)
	{
		return 15;
	}
	if (fVar0 < 0.31f)
	{
		return 17;
	}
	if (fVar0 < 0.46f)
	{
		return 16;
	}
	if (fVar0 < 0.61f)
	{
		return 18;
	}
	return 0;
}

int func_30(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 112;
		case 2:
			return 113;
		case 3:
			return 2;
		case 4:
			return 3;
		case 5:
			return 4;
		case 6:
			return 5;
		case 8:
			return 7;
		case 9:
			return 8;
		case 10:
			return 9;
		case 11:
			return 10;
		case 12:
			return 11;
		case 15:
			return 12;
		case 16:
			return 13;
		case 17:
			return 15;
		case 19:
			return 17;
		case 20:
			return 18;
		case 21:
			return 19;
		case 22:
			return 20;
		case 23:
			return 21;
		case 25:
			return 23;
		case 26:
			return 25;
		case 27:
			return 26;
		case 28:
			return 62;
		case 29:
			return 27;
		case 49:
			return 28;
		case 30:
			return 29;
		case 31:
			return 30;
		case 32:
			return 31;
		case 120:
			return 32;
		case 124:
			return 33;
		case 125:
			return 34;
		case 33:
			return 35;
		case 83:
			return 40;
		case 35:
			return 42;
		case 36:
			return 43;
		case 89:
			return 44;
		case 115:
			return 46;
		case 37:
			return 47;
		case 38:
			return 48;
		case 39:
			return 49;
		case 40:
			return 50;
		case 50:
			return 51;
		case 42:
			return 52;
		case 52:
			return 53;
		case 43:
			return 54;
		case 45:
			return 57;
		case 48:
			return 61;
		case 56:
			return 63;
		case 57:
			return 64;
		case 58:
			return 65;
		case 59:
			return 66;
		case 60:
			return 67;
		case 61:
			return 68;
		case 126:
			return 69;
		case 127:
			return 70;
		case 62:
			return 71;
		case 77:
			return 72;
		case 64:
			return 73;
		case 65:
			return 74;
		case 67:
			return 76;
		case 68:
			return 78;
		case 69:
			return 79;
		case 70:
			return 80;
		case 71:
			return 81;
		case 72:
			return 82;
		case 75:
			return 84;
		case 76:
			return 85;
		case 117:
			return 86;
		case 78:
			return 87;
		case 79:
			return 88;
		case 80:
			return 90;
		case 81:
			return 91;
		case 82:
			return 92;
		case 87:
			return 96;
		case 88:
			return 97;
		case 91:
			return 98;
		case 92:
			return 99;
		case 93:
			return 100;
		case 94:
			return 101;
		case 95:
			return 102;
		case 96:
			return 103;
		case 97:
			return 104;
		case 98:
			return 105;
		case 99:
			return 106;
		case 100:
			return 107;
		case 104:
			return 114;
		case 105:
			return 115;
		case 107:
			return 118;
		case 109:
			return 119;
		case 110:
			return 120;
		case 111:
			return 121;
		case 112:
			return 122;
		case 128:
			return 123;
		default:
			break;
	}
	return 0;
}

void func_31(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;

	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

void func_32(int iParam0, int iParam1)
{
	HUD::_JOURNAL_WRITE_ENTRY(iParam0);
	if (iParam1 == 1)
	{
		func_33(1);
	}
}

void func_33(bool bParam0)
{
	if (bParam0)
	{
		func_84(&(Global_40.f_12018.f_42), 1);
	}
	else
	{
		func_85(&(Global_40.f_12018.f_42), 1);
	}
}

void func_34()
{
	Global_1898077 = 1;
}

void func_35(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 || iParam0);
}

void func_36(int iParam0, int iParam1)
{
	Global_1572887->f_282 = iParam0;
	Global_1572887->f_282.f_1 = iParam1;
	func_86(28);
}

void func_37(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = 1;
	}
	Global_1572864->f_1 = iParam0;
}

void func_38(int iParam0, int iParam1)
{
	Global_1572864->f_16 = iParam0;
	Global_1572864->f_17 = iParam1;
}

bool func_39(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

void func_40()
{
	int iVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar5;
	var uVar8;
	int iVar9;

	iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX());
	switch (iLocal_19)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				Global_35 = iVar0;
			}
			func_87(1);
			if (func_88())
			{
				vVar2 = { func_89(&fVar1) };
				if (!ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					ENTITY::SET_ENTITY_COORDS(iVar0, vVar2, true, false, true, true);
					ENTITY::SET_ENTITY_HEADING(iVar0, fVar1);
					ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
				}
				else
				{
					return;
				}
				STREAMING::_0x513F8AA5BF2F17CF(vVar2, 75f, 1);
				iLocal_20 = 0;
				func_69(1);
			}
			else
			{
				func_69(3);
			}
			break;
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				Global_35 = iVar0;
			}
			if (STREAMING::_0xCF45DF50C7775F2A() || iLocal_20 >= 100)
			{
				iLocal_20 = 0;
				func_69(2);
			}
			else
			{
				iLocal_20++;
			}
			break;
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				Global_35 = iVar0;
			}
			if (STREAMING::_0x0909F71B5C070797() || iLocal_20 >= 100)
			{
				STREAMING::_0x5A8B01199C3E79C3();
				func_69(3);
			}
			else
			{
				iLocal_20++;
			}
			break;
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				Global_35 = iVar0;
			}
			else
			{
				return;
			}
			if ((func_58() && Global_40) && Global_40.f_39 != 0)
			{
				if (func_90(Global_40.f_39))
				{
					func_69(4);
				}
			}
			else if (ENTITY::GET_ENTITY_MODEL(Global_35) == joaat("player_zero") || func_90(joaat("player_zero")))
			{
				func_69(4);
			}
			break;
		case 4:
			if (ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				return;
			}
			Global_35 = iVar0;
			func_91();
			if (!func_92())
			{
				if (func_93())
				{
					func_94();
				}
			}
			if (func_88())
			{
				func_43(4096);
				func_69(5);
			}
			else if (func_41(256))
			{
				func_95();
				func_96();
				Global_1894899->f_8 = 1;
				if (func_97(func_41(32768)))
				{
					func_99(func_98(), &vVar5, &uVar8);
					if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_35, false, false), vVar5) > 5f)
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), vVar5, false, false, true, true);
					}
					if (func_100(func_98()))
					{
						func_101(1, func_98());
						func_43(4096);
						func_69(5);
					}
				}
				else
				{
					iVar9 = func_102(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false), 1);
					if (func_100(iVar9))
					{
						func_101(0, iVar9);
						func_43(4096);
						func_69(5);
					}
				}
			}
			break;
		case 5:
			if (!Global_40 && !func_41(4))
			{
				func_103();
			}
			break;
	}
}

bool func_41(int iParam0)
{
	return (Global_21 && iParam0) != 0;
}

int func_42()
{
	if (Global_1572887->f_12 != -1)
	{
		Global_35 = Global_1225638->f_8;
		Global_36 = { Global_1225638->f_16 };
		return Global_1225638->f_10;
	}
	Global_35 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	Global_36 = { ENTITY::GET_ENTITY_COORDS(Global_35, false, false) };
	return PLAYER::PLAYER_ID();
}

void func_43(int iParam0)
{
	Global_21 = (Global_21 || iParam0);
}

void func_44(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_45()
{
	int iVar0;

	VOLUME::_0x748C5F51A18CB8F0(0);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_104(iVar0))
		{
			func_105(iVar0);
		}
		iVar0++;
	}
	VOLUME::_0x748C5F51A18CB8F0(1);
}

bool func_46(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

void func_47(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 - (Global_1572864->f_3 && iParam0));
}

void func_48()
{
	func_106();
	func_107();
	func_108();
	func_109();
}

void func_49()
{
	Global_1327590->f_9 = -1;
	Global_1327590->f_10.f_11 = 0;
	StringCopy(&(Global_1327590->f_10.f_1), "", 64);
}

void func_50(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	func_110(iParam0);
	PED::CLEAR_PED_WETNESS(iParam0);
	PED::_0xA7A806677F8DE138(iParam0);
	PED::_0xA064BBABB064446F(iParam0);
	PED::CLEAR_PED_ENV_DIRT(iParam0);
	PED::_0x9184788BFF1EDAD7(iParam0, 0f);
	PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 10, "ALL");
	iVar0 = 0;
	while (iVar0 < 10)
	{
		PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, iVar0, "ALL");
		iVar0++;
	}
}

var func_51(int iParam0)
{
	char[] cVar0[8];

	if (!func_46(iParam0))
	{
		return cVar0;
	}
	switch (func_111(iParam0))
	{
		case 1:
			cVar0 = ((*Global_1835011)[func_112(iParam0) /*74*/])->f_8;
			break;
		case 8:
			cVar0 = ((*Global_1347702)[func_113(iParam0) /*49*/])->f_3;
			break;
		case 11:
			if (iParam0 == func_114(0, 10, 11, 2116153146))
			{
				StringCopy(&cVar0, "CABR01", 8);
			}
			break;
	}
	return cVar0;
}

void func_52(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!Global_1879514->f_11)
	{
		iVar0 = func_115();
		iVar1 = MISC::GET_HASH_KEY(&uParam0);
		if (MISSIONDATA::_0x57E798B54C45EE1A(iVar1) != 5 && iVar0 == 5)
		{
			if (func_111(Global_1879514->f_1) == 1)
			{
				func_116(5, 1);
			}
			else if (func_111(Global_1879514->f_1) == 8 && (func_117(((*Global_1347702)[func_113(Global_1879514->f_1) /*49*/])->f_12, 1) || func_117(((*Global_1347702)[func_113(Global_1879514->f_1) /*49*/])->f_12, 33554432)))
			{
				func_116(5, 1);
			}
		}
		MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&uParam0), iVar0);
	}
	else
	{
		MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&uParam0), 3);
	}
}

void func_53(int iParam0)
{
	func_118(((*Global_2621440)[iParam0 /*12065*/])->f_9.f_14);
	LAW::_0x093A9D1F72DF0D19(PLAYER::PLAYER_ID(), 0);
	LAW::_0x062B4A4A3396351D(PLAYER::GET_PLAYER_INDEX());
	_NAMESPACE84::_0xCCB4635A071FB62D();
	if (Global_40.f_9.f_20 > 0)
	{
		LAW::_0x0E3BDEED21BEB945(PLAYER::GET_PLAYER_INDEX(), Global_40.f_9.f_20);
	}
}

int func_54()
{
	if (func_39(8192))
	{
		return 1;
	}
	return 0;
}

void func_55()
{
	func_119();
	func_120();
	func_121();
	func_122();
	func_123();
	func_124();
	func_125();
	func_126();
	func_127();
}

void func_56(int iParam0)
{
	if (Global_1572887->f_12 == 0)
	{
		return;
	}
	Global_40.f_1 = iParam0;
	TELEMETRY::_0x9BEE018A63FFFAD9(iParam0);
}

void func_57()
{
	func_128(&(Global_40.f_40));
}

int func_58()
{
	return 1;
	if (Global_1572887->f_12 == 0)
	{
		return 1;
	}
	return Global_40.f_1;
}

void func_59()
{
	Global_21 = 0;
}

void func_60(bool bParam0)
{
	func_22();
	if (bParam0)
	{
		func_130(3, 488600546, 18008/*func_129*/);
		func_130(5, -36678014, 18114/*func_131*/);
		func_130(6, -1662293291, 18344/*func_132*/);
		func_130(7, 1515062182, 19016/*func_133*/);
		func_130(9, -201199740, 19390/*func_134*/);
		func_130(10, -1408350261, 19687/*func_135*/);
		func_130(11, -1226891409, 19770/*func_136*/);
		func_130(13, 2146271685, 19987/*func_137*/);
		func_130(12, -141518706, 20430/*func_138*/);
		func_130(15, -798635963, 20661/*func_139*/);
		func_130(16, -1516564258, 21708/*func_140*/);
		func_130(17, -1642019012, 21914/*func_141*/);
		func_130(18, -893403924, 22384/*func_142*/);
		func_130(19, -1393214753, 22488/*func_143*/);
		func_130(20, -898400110, 23566/*func_144*/);
		func_130(21, -1132418307, 25072/*func_145*/);
		func_130(22, -1336593721, 25237/*func_146*/);
		func_130(23, 1308589725, 25594/*func_147*/);
	}
	func_43(512);
}

void func_61(int iParam0)
{
	bool bVar0;
	var uVar1[150];
	var uVar152[150];
	var uVar303[150];
	int iVar454;

	bVar0 = func_27() == -1;
	func_82(65536);
	if (bVar0)
	{
		func_148();
	}
	if (func_149())
	{
		return;
	}
	func_150();
	func_151();
	func_152();
	VOLUME::_0x748C5F51A18CB8F0(0);
	func_153(&uVar1, &(Global_1894899->f_172), " ");
	func_153(&uVar152, &(Global_1894899->f_173), " - Town");
	func_153(&uVar303, &(Global_1894899->f_174), " - Wanted");
	VOLUME::_0x748C5F51A18CB8F0(1);
	func_154(1);
	if (func_27() == -1)
	{
		func_155(&(Global_1894899->f_170));
		func_156();
		func_157(&(Global_1894899->f_171));
		func_158();
	}
	func_159();
	VOLUME::_0x748C5F51A18CB8F0(0);
	Global_1894899->f_176 = 0;
	Global_1894899->f_177 = 0;
	Global_1894899->f_178 = 0;
	Global_1894899->f_179 = 0;
	Global_1894899->f_180 = 0;
	Global_1894899->f_181 = 0;
	iVar454 = 0;
	while (iVar454 < 130)
	{
		func_160(&(Global_1894899->f_170), iVar454, &(uVar1[iVar454]), &(uVar152[iVar454]), &(uVar303[iVar454]));
		func_161(&(Global_1894899->f_171), iVar454);
		iVar454++;
	}
	func_162();
	VOLUME::_0x748C5F51A18CB8F0(1);
	func_163(&(Global_1894899->f_170));
	func_164(&(Global_1894899->f_171));
	func_165();
	func_166();
	func_43(65536);
}

void func_62()
{
	func_167(8);
}

void func_63()
{
	func_167(256);
}

void func_64()
{
	func_168();
	func_169(0);
	func_169(-538880323);
	func_169(1497516462);
	func_169(405586984);
	func_169(356365161);
	func_169(1177464213);
	func_169(-1674179981);
	func_169(1376646519);
	func_169(1822001510);
	func_169(1306158345);
	func_169(-1414537028);
	func_169(-1666278201);
	func_169(-150493654);
	func_169(-1524512402);
	func_169(198200492);
	func_169(-1164215952);
	func_169(-1236261996);
	func_169(817925178);
	func_169(1151197909);
	func_169(-1556423728);
	func_169(-144653976);
	func_169(-351362068);
	func_169(-939114198);
	func_169(-1318987693);
	func_169(-853383233);
	func_169(-1824738758);
	func_169(-2020023971);
	func_169(1216784232);
	func_169(2019386373);
	func_169(-1831552326);
	func_169(-1151084372);
	func_169(-644722288);
	func_169(-1717960576);
	func_169(-545450213);
	func_169(-919512195);
	func_169(1954026328);
	func_169(-524145696);
	func_169(-1764522338);
	func_169(-333135263);
	func_169(1766284049);
	func_169(-1825294305);
	func_169(1500064347);
	func_169(-789397228);
	func_169(-978957786);
	func_169(945612176);
	func_169(1522511407);
	func_169(704802028);
	func_169(-75024673);
	func_169(1250636944);
	func_169(522677506);
	func_170(1691618738);
	func_170(657241756);
	func_171();
	func_170(1582370975);
	func_170(-330120947);
}

void func_65(int iParam0)
{
	iLocal_18 = iParam0;
}

int func_66(char* sParam0, int iParam1, var uParam2)
{
	if (!SCRIPTS::DOES_SCRIPT_EXIST(sParam0))
	{
		return 0;
	}
	SCRIPTS::REQUEST_SCRIPT(sParam0);
	if (!SCRIPTS::HAS_SCRIPT_LOADED(sParam0))
	{
		return 0;
	}
	*uParam2 = BUILTIN::START_NEW_SCRIPT(sParam0, iParam1);
	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(sParam0);
	return 1;
}

void func_67()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;

	SCRIPTS::REQUEST_SCRIPT("long_update");
	SCRIPTS::REQUEST_SCRIPT("medium_update");
	SCRIPTS::REQUEST_SCRIPT("short_update");
	SCRIPTS::REQUEST_SCRIPT("flow_controller");
	SCRIPTS::REQUEST_SCRIPT("player_horse");
	bVar0 = false;
	bVar1 = false;
	bVar2 = false;
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	while (!bVar0)
	{
		if (!bVar1)
		{
			if (SCRIPTS::HAS_SCRIPT_LOADED("long_update"))
			{
				Global_23[1] = BUILTIN::START_NEW_SCRIPT("long_update", 1300);
				bVar1 = true;
			}
			else
			{
				SCRIPTS::REQUEST_SCRIPT("long_update");
			}
		}
		if (!bVar2)
		{
			if (SCRIPTS::HAS_SCRIPT_LOADED("medium_update"))
			{
				Global_23[2] = BUILTIN::START_NEW_SCRIPT("medium_update", 1300);
				bVar2 = true;
			}
			else
			{
				SCRIPTS::REQUEST_SCRIPT("medium_update");
			}
		}
		if (!bVar3)
		{
			if (SCRIPTS::HAS_SCRIPT_LOADED("short_update"))
			{
				Global_23[3] = BUILTIN::START_NEW_SCRIPT("short_update", 1300);
				bVar3 = true;
			}
			else
			{
				SCRIPTS::REQUEST_SCRIPT("short_update");
			}
		}
		if (!bVar4)
		{
			if (SCRIPTS::HAS_SCRIPT_LOADED("flow_controller"))
			{
				Global_23[4] = BUILTIN::START_NEW_SCRIPT("flow_controller", 1024);
				bVar4 = true;
			}
			else
			{
				SCRIPTS::REQUEST_SCRIPT("flow_controller");
			}
		}
		if (!bVar5)
		{
			if (SCRIPTS::HAS_SCRIPT_LOADED("player_horse"))
			{
				Global_23[5] = BUILTIN::START_NEW_SCRIPT("player_horse", 1024);
				bVar5 = true;
			}
			else
			{
				SCRIPTS::REQUEST_SCRIPT("player_horse");
			}
		}
		if (Global_1572887->f_12 == -1)
		{
			if ((((bVar1 && bVar2) && bVar3) && bVar4) && bVar5)
			{
				bVar0 = true;
			}
		}
		else if ((((bVar1 && bVar2) && bVar3) && bVar4) && bVar5)
		{
			bVar0 = true;
		}
		BUILTIN::WAIT(0);
	}
	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("long_update");
	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("medium_update");
	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("short_update");
	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("flow_controller");
	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("player_horse");
}

void func_68()
{
	BRAIN::_0xA32B0B05EFF75730();
	Global_43888 = 0;
}

void func_69(int iParam0)
{
	iLocal_19 = iParam0;
}

bool func_70(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_172(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
	}
	return (UNLOCK::_UNLOCK_IS_UNLOCKED(((*Global_1835011)[iParam0 /*74*/])->f_2) && !UNLOCK::_UNLOCK_IS_VISIBLE(((*Global_1835011)[iParam0 /*74*/])->f_2));
}

bool func_71()
{
	return Global_1425247->f_53;
}

int func_72(int iParam0, bool bParam1, int iParam2)
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
		if (func_173())
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
		iVar0 = func_113(&(Global_1898164->f_1[0 /*5*/]));
		if (func_174(iVar0) && func_117(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_46(&(Global_1898164->f_1[0 /*5*/])))
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

int func_73(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_175(bParam1, iParam2, iParam3);
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
		if ((iParam3 || Var0.f_10 > 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(iParam0) > 0)
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
			if (Var18.f_10 && (iParam3 || LAW::_0xDAEFDFDB2AEECE37(Var18, Var18.f_7) > 0))
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
			if (iParam3 || LAW::_0xE083BEDA81709891(iParam0) > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_74()
{
	return (func_77(&Global_1935630, 4096) || SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(1637780761) > 0);
}

void func_75(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 - (uParam0->f_2 && iParam1));
}

int func_76(int iParam0)
{
	return &(Global_1898164->f_1[iParam0 /*5*/]);
}

bool func_77(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_78(bool bParam0)
{
	if (!func_19(&Global_0, 2))
	{
		func_176(0, 0);
		_NAMESPACE59::_0x62C9EB51656D68CE(-189896212);
		func_80(&Global_0, 2);
		if (bParam0)
		{
			func_80(&Global_0, 32);
		}
		func_75(&Global_0, 1);
	}
}

void func_79(int iParam0, bool bParam1)
{
	if (func_27() != -1)
	{
		return;
	}
	if (iParam0 == 0 && func_39(32768))
	{
		return;
	}
	if (!func_39(32768))
	{
		func_176(1, bParam1);
	}
	MISC::_0x279B0696DA4657EB(iParam0);
	MISC::_COPY_MEMORY((*Global_2621440)[iParam0 /*12065*/], &Global_40, 12065);
	MISC::_COPY_MEMORY((*Global_2645571)[iParam0 /*5398*/], &Global_12105, 5398);
	MISC::_COPY_MEMORY((*Global_2656368)[iParam0 /*3206*/], &Global_17503, 3206);
	MISC::_COPY_MEMORY((*Global_2662781)[iParam0 /*2408*/], &Global_20709, 2408);
	MISC::_COPY_MEMORY((*Global_2667598)[iParam0 /*1769*/], &Global_23117, 1769);
	MISC::_COPY_MEMORY((*Global_2671137)[iParam0 /*1909*/], &Global_24886, 1909);
	MISC::_COPY_MEMORY((*Global_2674956)[iParam0 /*777*/], &Global_26795, 777);
	MISC::_COPY_MEMORY((*Global_2676511)[iParam0 /*4501*/], &Global_27572, 4501);
	MISC::_COPY_MEMORY((*Global_2685514)[iParam0 /*4234*/], &Global_32073, 4234);
	if (func_39(32768))
	{
		((*Global_2621440)[iParam0 /*12065*/])->f_9.f_14 = func_177();
	}
}

void func_80(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_81(var uParam0)
{
	uParam0->f_2 = 0;
}

void func_82(int iParam0)
{
	Global_21 = (Global_21 - (Global_21 && iParam0));
}

void func_83(int iParam0)
{
	if (!func_178(iParam0))
	{
		return;
	}
	if (Global_1914270[iParam0] != 0)
	{
		DATAFILE::_DATAFILE_UNLOAD(Global_1914270[iParam0]);
		(*Global_1914270)[iParam0] = 0;
	}
}

void func_84(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_85(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_86(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = Global_1572887->f_282.f_1;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 15)
	{
		if (MISC::IS_BIT_SET(iVar0, iVar1))
		{
		}
		iVar1++;
	}
	if (Global_1572887->f_282.f_2 != -1)
	{
	}
	if (Global_1572887->f_282.f_3 != -1)
	{
	}
	if (Global_1572887->f_282.f_4 != -1)
	{
	}
	if (Global_1572887->f_282.f_5 != -1)
	{
	}
	if (Global_1572887->f_282.f_6 != -1)
	{
	}
	if (Global_1572887->f_282.f_8 != 0)
	{
	}
}

void func_87(bool bParam0)
{
	Global_1934765->f_20 = 0;
	Global_1934765 = 0;
	Global_1934765->f_287 = 0;
	while (!func_179(1, bParam0))
	{
	}
	func_180();
	Global_1934765 = 0;
}

int func_88()
{
	if (func_39(128) && !func_39(4096))
	{
		return 1;
	}
	if (NETWORK::_0x02E97CE283648CD9(func_181(joaat("benchmark"))))
	{
		return 1;
	}
	if (func_39(32))
	{
		return 0;
	}
	if (Global_40)
	{
		return 0;
	}
	return 1;
}

Vector3 func_89(var uParam0)
{
	vector3 vVar0;

	if (!func_182(Global_40.f_9.f_7, 0f, 0f, 0f, 1056964608, 1))
	{
		*uParam0 = Global_40.f_9.f_13;
		return Global_40.f_9.f_7;
	}
	if (func_58())
	{
		if (func_39(2))
		{
			*uParam0 = func_183();
			return func_184();
		}
		else
		{
			return Global_40.f_9.f_7;
		}
	}
	else if (func_39(32))
	{
		*uParam0 = Global_40.f_9.f_13;
		return Global_40.f_9.f_7;
	}
	return vVar0;
}

int func_90(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX())))
	{
		if (PED::IS_PED_ON_MOUNT(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX())))
		{
			PED::_REMOVE_PED_FROM_MOUNT(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), true, false);
			return 0;
		}
	}
	STREAMING::REQUEST_MODEL(iParam0, false);
	if (!STREAMING::HAS_MODEL_LOADED(iParam0))
	{
		return 0;
	}
	PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), iParam0, 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0);
	Global_35 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	func_185(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), iParam0);
	func_186(iParam0, -1);
	Global_40.f_39 = iParam0;
	Global_1935630->f_2 = iParam0;
	func_187(2, 0, 2, 0, 0);
	return 1;
}

void func_91()
{
	vector3 vVar0;
	int iVar3;
	int iVar4;

	vVar0.f_1 = -15;
	iVar3 = 0;
	while (iVar3 < 15)
	{
		vVar0 = { *(Global_40.f_4237[iVar3 /*3*/]) };
		if (func_188(vVar0.x))
		{
			iVar4 = vVar0.y;
			if (iVar4 != -15 && func_189(iVar4))
			{
				func_190(vVar0.x);
			}
			else if (vVar0.z)
			{
			}
			else if (func_191(vVar0.x))
			{
			}
		}
		iVar3++;
	}
}

bool func_92()
{
	return Global_1900383->f_443;
}

int func_93()
{
	if (func_27() != -1)
	{
		return 0;
	}
	if (!func_58())
	{
		return 0;
	}
	if (!func_172(((*Global_1835011)[1 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_172(((*Global_1835011)[2 /*74*/])->f_1, 1) && func_172(((*Global_1347702)[120 /*49*/])->f_15, 1)) && !func_172(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_172(((*Global_1835011)[37 /*74*/])->f_1, 1) && !func_172(((*Global_1835011)[39 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_172(((*Global_1835011)[57 /*74*/])->f_1, 1) && !func_172(((*Global_1835011)[60 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_172(((*Global_1835011)[26 /*74*/])->f_1, 1) && !func_172(((*Global_1347702)[67 /*49*/])->f_15, 1))
	{
		return 1;
	}
	if ((func_172(((*Global_1835011)[62 /*74*/])->f_1, 1) && func_172(((*Global_1835011)[63 /*74*/])->f_1, 1)) && !func_172(((*Global_1835011)[64 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_172(((*Global_1835011)[75 /*74*/])->f_1, 1) && !func_172(((*Global_1347702)[1 /*49*/])->f_15, 1))
	{
		return 1;
	}
	if (func_172(((*Global_1835011)[76 /*74*/])->f_1, 1) && !func_172(((*Global_1835011)[77 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_172(((*Global_1835011)[40 /*74*/])->f_1, 1) && func_172(((*Global_1835011)[41 /*74*/])->f_1, 1)) && !func_172(((*Global_1835011)[44 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_172(((*Global_1835011)[62 /*74*/])->f_1, 1) && func_172(((*Global_1835011)[63 /*74*/])->f_1, 1)) && !func_172(((*Global_1835011)[64 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_172(((*Global_1835011)[65 /*74*/])->f_1, 1) && func_172(((*Global_1835011)[66 /*74*/])->f_1, 1)) && !func_172(((*Global_1835011)[67 /*74*/])->f_1, 1))
	{
		return 1;
	}
	return 0;
}

void func_94()
{
	Global_1900383->f_443 = 1;
}

void func_95()
{
	bool bVar0;
	int iVar1;

	if (func_149())
	{
		return;
	}
	func_192(8);
	func_193(Global_1897952->f_35);
	func_194(Global_1897952->f_35);
	Global_1897952->f_35++;
	if (Global_1897952->f_35 >= 17)
	{
		Global_1897952->f_35 = 0;
		bVar0 = true;
	}
	if (Global_1897952->f_36 != -1)
	{
		if (Global_1897952->f_36 != func_195())
		{
			func_196(Global_1897952->f_36);
		}
		return;
	}
	if (bVar0)
	{
		iVar1 = func_197(Global_36);
		if (iVar1 < 0 || iVar1 >= 17)
		{
			return;
		}
		if (func_195() != iVar1)
		{
			Global_1897952->f_37 = 1;
			if (func_196(iVar1))
			{
				return;
			}
		}
		if ((!Global_1897952->f_37 && !SCRIPTS::IS_THREAD_ACTIVE(Global_1897952->f_42, false)) && func_195() != -1)
		{
			func_196(func_195());
		}
		Global_1897952->f_37 = 0;
	}
}

void func_96()
{
	if (func_27() == -1)
	{
		if (func_198())
		{
			func_199();
		}
	}
	if (Global_1894899 & 64 != 0)
	{
		func_200();
		func_201(0);
	}
	func_202();
	func_203();
	func_204();
}

int func_97(bool bParam0)
{
	if (!Global_40)
	{
		return 0;
	}
	if (!func_58())
	{
		return 0;
	}
	if (func_205())
	{
		return 0;
	}
	if (func_39(2))
	{
		return 0;
	}
	if (bParam0)
	{
		return 0;
	}
	if (!func_206())
	{
		return 0;
	}
	if (func_93())
	{
		return 0;
	}
	if (_NAMESPACE76::_0xC5C395C60B542A3C(1))
	{
		return 0;
	}
	if (Global_1572864->f_21 != 0)
	{
		return 0;
	}
	if (Global_40.f_9 == 6 || Global_40.f_9 == 3)
	{
		return 0;
	}
	return 1;
}

int func_98()
{
	return Global_40.f_4283.f_1;
}

void func_99(int iParam0, var uParam1, var uParam2)
{
	vector3 vVar0;

	if (!func_207(iParam0))
	{
		*uParam1 = { Global_36 };
		if (!Global_1935630->f_12)
		{
			*uParam2 = ENTITY::GET_ENTITY_HEADING(Global_35);
		}
		return;
	}
	switch (iParam0)
	{
		case 40:
			*uParam1 = { -600.8126f, 2679.079f, 323.538f };
			*uParam2 = 279.6308f;
			return;
		case 56:
			*uParam1 = { 486f, 2215.8f, 246.9f };
			*uParam2 = 84.159f;
			return;
		case 78:
			*uParam1 = { 2928.327f, 1356.631f, 43.5035f };
			*uParam2 = 261.1208f;
			return;
		case 82:
			*uParam1 = { 2560.459f, 777.5193f, 82.2433f };
			*uParam2 = 291.2065f;
			return;
		case 38:
			*uParam1 = { -800.244f, -1269.308f, 42.5502f };
			*uParam2 = 174.6141f;
			return;
		case 37:
			*uParam1 = { -1692.456f, -1425.278f, 88.5471f };
			*uParam2 = 44.6246f;
			return;
		case 95:
			*uParam1 = { 1698.547f, -1393.736f, 44.893f };
			*uParam2 = 289.3106f;
			return;
		case 105:
			*uParam1 = { 1274.799f, -1279.981f, 74.8681f };
			*uParam2 = 245.3242f;
			return;
		case 93:
			*uParam1 = { 1015.804f, -1316.683f, 55.1469f };
			*uParam2 = 181.2442f;
			return;
		case 5:
			*uParam1 = { 2557.408f, -1202.299f, 53.0907f };
			*uParam2 = 261.1247f;
			return;
		case 8:
			*uParam1 = { 3289.2f, -1275.795f, 44.6127f };
			*uParam2 = 163f;
			return;
		case 35:
			*uParam1 = { 353.8f, 1473f, 179.7f };
			*uParam2 = 46.6903f;
			return;
		case 92:
			*uParam1 = { 2983.202f, 441.7647f, 51.6148f };
			*uParam2 = 27.5833f;
			return;
		case 76:
			*uParam1 = { -250.1652f, 789.0698f, 118.9147f };
			*uParam2 = 88.1256f;
			return;
		case 65:
			*uParam1 = { 482.1f, 660.2f, 117.4f };
			*uParam2 = 144.2493f;
			return;
		case 68:
			*uParam1 = { -805.894f, 305.9081f, 94.4141f };
			*uParam2 = 28.5394f;
			return;
		case 69:
			*uParam1 = { 1429.8f, 319.9f, 88.6f };
			*uParam2 = 280.9084f;
			return;
		case 75:
			*uParam1 = { -365.4675f, -333.9249f, 87.8648f };
			*uParam2 = 239.3198f;
			return;
		case 26:
			*uParam1 = { -1780.331f, -426.5923f, 154.897f };
			*uParam2 = 74.77f;
			return;
		case 22:
			*uParam1 = { -2557.081f, 491.937f, 142.7487f };
			*uParam2 = 177.5235f;
			return;
		case 110:
			*uParam1 = { -1966.645f, -1574.229f, 115.4183f };
			*uParam2 = 177.3636f;
			return;
		case 32:
			*uParam1 = { 3343.871f, -629.7566f, 43.894f };
			*uParam2 = 197.4755f;
			return;
		case 57:
			*uParam1 = { 1471f, -7120f, 77f };
			*uParam2 = 331.1575f;
			return;
		case 120:
			*uParam1 = { -3716.447f, -2622.405f, -14.9813f };
			*uParam2 = 312.5245f;
			return;
		case 115:
			*uParam1 = { -5607f, -3059.301f, 1.8f };
			*uParam2 = -44.3f;
			return;
		case 117:
			*uParam1 = { -5239.2f, -3472.7f, -21.7f };
			*uParam2 = 90f;
			return;
		case 43:
			*uParam1 = { -1320.65f, 2424.004f, 307.8811f };
			*uParam2 = 69.8643f;
			return;
		case 71:
			*uParam1 = { -118.6397f, -32.2501f, 94.7409f };
			*uParam2 = 91.0078f;
			return;
		case 58:
			*uParam1 = { 1418.897f, -7329.16f, 80.562f };
			*uParam2 = 26.5179f;
			return;
		case 98:
			*uParam1 = { 689.6768f, -1222.049f, 43.7435f };
			*uParam2 = 167.6425f;
			return;
		case 6:
			*uParam1 = { 2048.825f, -852.7946f, 41.6127f };
			*uParam2 = 89.9021f;
			return;
		case 18:
			*uParam1 = { -1715.61f, -84.36f, 181.88f };
			*uParam2 = 0f;
			return;
		case 19:
			*uParam1 = { -1515.809f, -477.6617f, 142.8707f };
			*uParam2 = 108.7463f;
			return;
		case 23:
			*uParam1 = { -1066.092f, -584.9856f, 80.8338f };
			*uParam2 = 170.7164f;
			return;
		case 24:
			*uParam1 = { -2455.33f, 831.4f, 140.4909f };
			*uParam2 = 30.7991f;
			return;
		case 27:
			*uParam1 = { -1929.773f, 291.1429f, 166.0626f };
			*uParam2 = 1.2131f;
			return;
		case 49:
			*uParam1 = { -1838.605f, 1312.883f, 220.5665f };
			*uParam2 = 54.1507f;
			return;
		case 30:
			*uParam1 = { 2488.379f, -438.0566f, 40.7284f };
			*uParam2 = 3.9426f;
			return;
		case 31:
			*uParam1 = { 2863.12f, -218.5451f, 41.4376f };
			*uParam2 = 26.5179f;
			return;
		case 122:
			*uParam1 = { -3404.329f, -3293.104f, -6.8233f };
			*uParam2 = 227.0484f;
			return;
		case 33:
			*uParam1 = { 584.8f, 1683f, 187.7f };
			*uParam2 = 26.5179f;
			return;
		case 34:
			*uParam1 = { 223.3f, 996.3f, 189.7f };
			*uParam2 = 218.9453f;
			return;
		case 83:
			*uParam1 = { 2520.18f, 2266.464f, 177.2689f };
			*uParam2 = 170f;
			return;
		case 55:
			*uParam1 = { 1691.5f, 1508f, 146.6f };
			*uParam2 = 297.128f;
			return;
		case 116:
			*uParam1 = { -5213.7f, -2140.6f, 11.8f };
			*uParam2 = 286.744f;
			return;
		case 39:
			*uParam1 = { -1212.897f, -1940.406f, 41.5543f };
			*uParam2 = 271.54f;
			return;
		case 50:
			*uParam1 = { 688.6671f, 2229.267f, 221.7181f };
			*uParam2 = 28.1904f;
			return;
		case 52:
			*uParam1 = { 537.9389f, 3004.24f, 485.7947f };
			*uParam2 = 91.2925f;
			return;
		case 54:
			*uParam1 = { 1942.625f, 1965.863f, 261.5498f };
			*uParam2 = 151.5668f;
			return;
		case 45:
			*uParam1 = { -1396.671f, 1149.936f, 223.108f };
			*uParam2 = 24.5906f;
			return;
		case 46:
			*uParam1 = { -1968.04f, 2158.48f, 328.57f };
			*uParam2 = 0f;
			return;
		case 48:
			*uParam1 = { 718.4495f, 3508.114f, 587.7103f };
			*uParam2 = 249.96f;
			return;
		case 59:
			*uParam1 = { 971.3845f, -6763.39f, 42.8703f };
			*uParam2 = 346.4123f;
			return;
		case 60:
			*uParam1 = { 1178.995f, -7233.543f, 78.9764f };
			*uParam2 = 153.8034f;
			return;
		case 28:
			*uParam1 = { -1304.624f, 406.447f, 95.5907f };
			*uParam2 = 255.3416f;
			return;
		case 62:
			*uParam1 = { 724.3393f, -443.4879f, 78.9597f };
			*uParam2 = 236.3249f;
			return;
		case 66:
			*uParam1 = { 1122f, 482.2f, 94.7f };
			*uParam2 = 42.3615f;
			return;
		case 70:
			*uParam1 = { -76.048f, -401.04f, 70.225f };
			*uParam2 = 316.8146f;
			return;
		case 74:
			*uParam1 = { -600.4578f, 523.9606f, 96.2824f };
			*uParam2 = 79.6536f;
			return;
		case 80:
			*uParam1 = { 2852.53f, 1666.46f, 128.67f };
			*uParam2 = 135.3297f;
			return;
		case 81:
			*uParam1 = { 2641.525f, 2223.522f, 158.1051f };
			*uParam2 = 312.4187f;
			return;
		case 87:
			*uParam1 = { 2313.349f, 353.842f, 65.0149f };
			*uParam2 = 0f;
			return;
		case 119:
			*uParam1 = { -4690.065f, -3731.79f, 11.9774f };
			*uParam2 = 197.302f;
			return;
		case 94:
			*uParam1 = { 1455.848f, -1812.212f, 54.8037f };
			*uParam2 = 304.2492f;
			return;
		case 97:
			*uParam1 = { 677.98f, -821.6f, 48.3f };
			*uParam2 = 0f;
			return;
		case 99:
			*uParam1 = { 1263.5f, -385.8f, 98.6f };
			*uParam2 = 241.3119f;
			return;
		case 100:
			*uParam1 = { 1371.805f, -858.002f, 68.513f };
			*uParam2 = 35.9944f;
			return;
		case 101:
			*uParam1 = { 1185.041f, -212.0238f, 101.1f };
			*uParam2 = 114.1645f;
			return;
		case 1:
			*uParam1 = { 1888f, -745.2f, 41.8f };
			*uParam2 = 155.9022f;
			return;
		case 2:
			*uParam1 = { 1945.44f, -688.74f, 50.83f };
			*uParam2 = 127.4476f;
			return;
		case 104:
			*uParam1 = { 1117.25f, -1315.29f, 64.328f };
			*uParam2 = 0f;
			return;
		case 106:
			*uParam1 = { 1379.382f, -2087.341f, 51.5847f };
			*uParam2 = 255.7824f;
			return;
		case 107:
			*uParam1 = { -2574.174f, -1366.599f, 149.3313f };
			*uParam2 = 175.5364f;
			return;
		case 111:
			*uParam1 = { -1669.9f, -2097.6f, 45.0918f };
			*uParam2 = 0f;
			return;
		case 112:
			*uParam1 = { -2371.444f, -1604.031f, 152.6511f };
			*uParam2 = 10.8752f;
			return;
		case 79:
			*uParam1 = { 2376.457f, 1287.451f, 110.0213f };
			*uParam2 = 14.4916f;
			return;
		case 109:
			if (NETWORK::NETWORK_IS_IN_SESSION())
			{
				*uParam1 = { -2354.916f, -808.9133f, 157.759f };
				*uParam2 = 100.556f;
			}
			else
			{
				*uParam1 = { -2408.241f, -939.9655f, 160.1905f };
				*uParam2 = 157.281f;
			}
			return;
		case 16:
			*uParam1 = { -2145.34f, 599.7288f, 117.0818f };
			*uParam2 = 24.052f;
			return;
		case 4:
			*uParam1 = { 2331.1f, -739.5853f, 41.62f };
			*uParam2 = 121f;
			return;
		case 9:
			*uParam1 = { 1825.357f, -1813.989f, 47.0702f };
			*uParam2 = 218.5782f;
			return;
		case 36:
			*uParam1 = { -32.4394f, 1129.326f, 167.0201f };
			*uParam2 = 353f;
			return;
		case 127:
			*uParam1 = { -1484.448f, -2344.049f, 42.0182f };
			*uParam2 = 295.5278f;
			return;
		case 125:
			*uParam1 = { -3970.96f, -2227.629f, -7.9601f };
			*uParam2 = 4.8f;
			return;
		case 118:
			*uParam1 = { -4107.593f, -3315.498f, 36.3123f };
			*uParam2 = 148.2941f;
			return;
		case 129:
			*uParam1 = { -5300.958f, -3608.817f, -14.6678f };
			*uParam2 = 71.7035f;
			return;
		case 114:
			*uParam1 = { -6028.044f, -3379.058f, -14.9946f };
			*uParam2 = 5.5075f;
			return;
		case 77:
			*uParam1 = { 1797.451f, -96.17f, 55.2f };
			*uParam2 = 64.7894f;
			return;
		case 96:
			*uParam1 = { 1350.713f, -2253.611f, 50.6595f };
			*uParam2 = 132.3174f;
			return;
		case 29:
			*uParam1 = { -1792.309f, 628.2485f, 128.1326f };
			*uParam2 = 39.9216f;
			return;
		case 126:
			*uParam1 = { -2534.852f, -2474.868f, 62.043f };
			*uParam2 = 300.0005f;
			return;
		case 42:
			*uParam1 = { -404.0206f, 1711.73f, 214.8277f };
			*uParam2 = 24.0467f;
			return;
		case 64:
			*uParam1 = { 787.7f, 851.3f, 118.5f };
			*uParam2 = 71.0275f;
			return;
		case 72:
			*uParam1 = { 895.032f, 255.553f, 119.95f };
			*uParam2 = 0f;
			return;
		case 89:
			*uParam1 = { 2962.063f, 2204.987f, 165.3194f };
			*uParam2 = 230.7887f;
			return;
		case 91:
			*uParam1 = { 2819.17f, 301.7715f, 48.8212f };
			*uParam2 = 191.6095f;
			return;
		case 86:
			*uParam1 = { 2244.984f, -140.6945f, 46.6572f };
			*uParam2 = 110.0301f;
			return;
		case 51:
			*uParam1 = { 1988.3f, 1187.8f, 171f };
			*uParam2 = 0f;
			return;
		case 53:
			*uParam1 = { 1599.169f, 2198.761f, 321.9284f };
			*uParam2 = 117.4739f;
			return;
		case 73:
			*uParam1 = { 1472.249f, 802.5236f, 99.2177f };
			*uParam2 = 41.9282f;
			return;
		case 84:
			*uParam1 = { 1902.7f, 294.6f, 75.7f };
			*uParam2 = 34.0605f;
			return;
		case 25:
			*uParam1 = { -1570.748f, 247.7129f, 111.5785f };
			*uParam2 = 304.563f;
			return;
		default:
			break;
	}
	if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1888801)[iParam0 /*35*/])->f_3))
	{
		*uParam1 = { VOLUME::_0xF70F00013A62F866(((*Global_1888801)[iParam0 /*35*/])->f_3) };
		vVar0 = { VOLUME::_0x18675BC914891122(((*Global_1888801)[iParam0 /*35*/])->f_3) };
		*uParam2 = vVar0.z;
	}
}

int func_100(int iParam0)
{
	if (func_205())
	{
		return 1;
	}
	if (!func_207(iParam0))
	{
		return 1;
	}
	if (func_208(iParam0) == 4)
	{
		if (iParam0 != func_98())
		{
			return 1;
		}
	}
	else if (MISC::IS_STRING_NULL_OR_EMPTY(&(((*Global_1888801)[iParam0 /*35*/])->f_23)))
	{
		return 1;
	}
	if (func_209(iParam0))
	{
		return 1;
	}
	else
	{
		if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1888801)[iParam0 /*35*/])->f_3))
		{
			if (VOLUME::_0xF256A75210C5C0EB(((*Global_1888801)[iParam0 /*35*/])->f_3, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false)))
			{
			}
		}
		if (func_210(iParam0, 2))
		{
		}
		if (func_210(iParam0, 1))
		{
		}
		if (SCRIPTS::IS_THREAD_ACTIVE(((*Global_1888801)[iParam0 /*35*/])->f_9, false))
		{
		}
	}
	return 0;
}

void func_101(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	vector3 vVar2;
	int iVar5;
	struct<55> Var6;
	struct<10> Var75;
	struct<16> Var85;
	struct<16> Var101;

	if (func_93())
	{
		return;
	}
	if (iParam0 || Global_40.f_9 == 3)
	{
		if ((Global_40.f_9 == 1 || Global_40.f_9 == 2) || Global_40.f_9 == 0)
		{
			vVar2 = { func_212(func_211(iParam1), &uVar0, &uVar1) };
			if (!func_213(vVar2))
			{
				func_214(vVar2);
				Global_40.f_9.f_15 = iParam1;
				func_215(vVar2, uVar1, uVar0, 0);
				func_216();
				func_217(6);
				func_35(4096);
				func_43(16384);
				func_82(8192);
				func_218(Global_1935630, 131072);
			}
			else
			{
				iVar5 = func_219(iParam1);
				if (func_220(iVar5))
				{
					if (VOLUME::_0x92A78D0BEDB332A3((Global_1395601->f_5[iVar5 /*28*/])->f_23))
					{
						func_82(8192);
						func_43(131072);
						if (!SCRIPTS::IS_THREAD_ACTIVE((Global_1395601->f_5[iVar5 /*28*/])->f_24, false))
						{
							func_221(iVar5, 524288);
							SCRIPTS::REQUEST_SCRIPT("property_use_core");
							while (!SCRIPTS::HAS_SCRIPT_LOADED("property_use_core"))
							{
								BUILTIN::WAIT(0);
							}
							func_218(Global_1935630, 16384);
							Var6.f_5 = 8;
							Var6.f_14 = -1;
							Var6.f_22 = -1082130432;
							Var6.f_23 = -1;
							Var6.f_34 = 6;
							Var6.f_54.f_4 = 1;
							Var6.f_54.f_5 = 1;
							Var6.f_2 = (Global_1395601->f_5[iVar5 /*28*/])->f_23;
							Var6.f_15 = 1;
							(Global_1395601->f_5[iVar5 /*28*/])->f_24 = BUILTIN::START_NEW_SCRIPT_WITH_ARGS("property_use_core", &Var6, 69, 6096);
							SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("property_use_core");
							func_218(Global_1935630, 131072);
						}
					}
				}
			}
		}
		else if (Global_40.f_9 == 3)
		{
			func_82(8192);
			if (!func_222("player_camp"))
			{
				Var75 = 536871424;
				Var85 = { Var75 };
				StringCopy(&(Var85.f_10), "player_camp", 32);
				Var85.f_14 = 6096;
				Var85.f_15 = 1;
				func_223(Var85, 0);
				func_218(Global_1935630, 131072);
			}
		}
		else if (Global_40.f_9 == 4)
		{
			if (func_197(Global_40.f_9.f_7) != 8)
			{
				func_82(8192);
				if (!func_222("ambient_load"))
				{
					StringCopy(&(Var101.f_10), "ambient_load", 32);
					Var101.f_14 = 1024;
					Var101.f_15 = 0;
					func_223(Var101, 0);
					func_218(Global_1935630, 131072);
				}
			}
			else
			{
				func_35(4096);
			}
		}
		if (func_72(0, 0, 1))
		{
			func_82(8192);
			MISC::_0xA565FAC215CBC77D();
			SCRIPTS::SHUTDOWN_LOADING_SCREEN();
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
		}
	}
	else
	{
		func_35(4096);
		if (Global_40)
		{
			func_218(Global_1935630, 131072);
		}
	}
	if (func_77(&Global_1935630, 131072))
	{
		func_118(Global_40.f_9.f_14);
	}
	if (((((((Global_40 && func_58()) && func_206()) || func_39(4096)) && !func_41(16384)) && !func_41(32768)) && !func_41(131072)) && Global_40.f_9 != 3)
	{
		func_224(1);
		func_216();
		func_217(6);
		func_35(4096);
	}
}

int func_102(vector3 vParam0, bool bParam3)
{
	int iVar0;

	iVar0 = func_225();
	if (func_207(iVar0))
	{
		if (VOLUME::_0xF256A75210C5C0EB(((*Global_1888801)[iVar0 /*35*/])->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_226(vParam0, bParam3);
}

void func_103()
{
	int iVar0;

	if (Global_1934603->f_161 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(((*Global_1934603)[iVar0 /*16*/])->f_10)))
			{
				func_227(iVar0);
			}
			iVar0++;
		}
	}
}

bool func_104(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

void func_105(int iParam0)
{
	int iVar0;
	int iVar1;

	VOLUME::_0x748C5F51A18CB8F0(0);
	if (!func_104(iParam0))
	{
		return;
	}
	func_228(iParam0, 0);
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (func_207(iVar0))
		{
			if (func_230(func_229(iVar0, 1, 1)) == iParam0)
			{
				func_231(iVar0, 0);
				func_232(iVar0, 0, 350);
			}
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 17)
	{
		if (func_233(iVar1))
		{
			if (func_234(iVar1) == iParam0)
			{
				func_235(iVar1, 0);
			}
		}
		iVar1++;
	}
	VOLUME::_0x748C5F51A18CB8F0(1);
}

void func_106()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_236(iVar0))
		{
			iVar1 = func_237(iVar0);
			if (func_238(iVar1))
			{
				if (STREAMING::_IS_IMAP_ACTIVE(iVar1))
				{
					STREAMING::_REMOVE_IMAP(iVar1);
				}
			}
			iVar2 = 0;
			while (iVar2 <= 2)
			{
				if (func_239(iVar0, iVar2))
				{
					iVar1 = func_240(iVar0, iVar2);
					func_241(iVar1, 0);
					if (func_238(iVar1))
					{
						if (STREAMING::_IS_IMAP_ACTIVE(iVar1))
						{
							STREAMING::_REMOVE_IMAP(iVar1);
						}
					}
				}
				iVar2++;
			}
			iVar5 = 0;
			while (iVar5 < 27)
			{
				iVar3 = func_242(iVar0, iVar5, 0);
				iVar4 = func_242(iVar0, iVar5, 1);
				if (func_238(iVar3))
				{
					if (STREAMING::_IS_IMAP_ACTIVE(iVar3))
					{
						STREAMING::_REMOVE_IMAP(iVar3);
					}
				}
				if (func_238(iVar4))
				{
					if (STREAMING::_IS_IMAP_ACTIVE(iVar4))
					{
						STREAMING::_REMOVE_IMAP(iVar4);
					}
				}
				iVar5++;
			}
		}
		iVar6 = -1;
		func_243(-1, 0, 0);
		func_244(-1, &iVar6, 0, 0, 0);
		iVar0++;
	}
}

void func_107()
{
	int iVar0;
	struct<8> Var1;
	int iVar9;

	if (PATHFIND::_0x5AC0944C156E5F44("dewclm_nav_camp_00"))
	{
		PATHFIND::_0x527B97C203BB8606("dewclm_nav_camp_00");
	}
	if (PATHFIND::_0x5AC0944C156E5F44("shb_nav_camp_00"))
	{
		PATHFIND::_0x527B97C203BB8606("shb_nav_camp_00");
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_236(iVar0))
		{
			iVar9 = 0;
			while (iVar9 <= 2)
			{
				if (func_239(iVar0, iVar9))
				{
					Var1 = { func_245(iVar0, iVar9) };
					if (PATHFIND::_0x5AC0944C156E5F44(&Var1))
					{
						PATHFIND::_0x527B97C203BB8606(&Var1);
					}
				}
				iVar9++;
			}
		}
		iVar0++;
	}
}

void func_108()
{
	int iVar0[3];
	int iVar4;

	iVar0[0] = 67198036;
	iVar0[1] = -1656481590;
	iVar0[2] = -1670262487;
	iVar4 = 0;
	while (iVar4 < 3)
	{
		if (STREAMING::_IS_IMAP_ACTIVE(&(iVar0[iVar4])))
		{
			STREAMING::_REMOVE_IMAP(&(iVar0[iVar4]));
		}
		iVar4++;
	}
}

void func_109()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_247(iVar0, func_246(iVar0), 0, 0);
		iVar0++;
	}
}

void func_110(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	PED::CLEAR_PED_BLOOD_DAMAGE(iParam0);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		PED::_0x7F5D88333EE8A86F(iParam0, iVar0);
		iVar0++;
	}
}

int func_111(int iParam0)
{
	if (!func_46(iParam0))
	{
		return 0;
	}
	return func_249(func_248(iParam0));
}

int func_112(int iParam0)
{
	if (func_111(iParam0) == 1)
	{
		return func_113(iParam0);
	}
	return -1;
}

int func_113(int iParam0)
{
	if (!func_46(iParam0))
	{
		return -1;
	}
	return func_250(func_248(iParam0));
}

int func_114(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_251())
	{
		iVar2 = func_251();
	}
	iVar5 = func_252(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_248(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_248(iVar6) == 0)
			{
				return func_253(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_248(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_248(iVar6) == 0)
			{
				return func_253(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_253(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

int func_115()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_254(Global_1879514->f_1);
	if (Global_1425247->f_53)
	{
		return 0;
	}
	if (func_255(iVar0))
	{
		if (Global_1879514->f_18)
		{
			return Global_1879514->f_19;
		}
		iVar1 = STATS::CHAL_MISSION_GET_NUM_GOALS(iVar0);
		iVar2 = STATS::CHAL_MISSION_GET_NUM_GOALS_COMPLETE(iVar0);
		if (iVar1 > 0)
		{
			iVar3 = ((100 * iVar2) / iVar1);
			if (iVar3 >= 100)
			{
				return 5;
			}
			else if (iVar3 >= 50)
			{
				return 4;
			}
			else
			{
				return 3;
			}
		}
	}
	return 3;
}

int func_116(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_256(iParam0))
	{
		return 0;
	}
	if (!func_58())
	{
		return 0;
	}
	if (!func_257(iParam0, &iVar0, &iVar1))
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

bool func_117(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_118(int iParam0)
{
	CLOCK::SET_CLOCK_TIME(func_258(iParam0), func_259(iParam0), func_260(iParam0));
	CLOCK::SET_CLOCK_DATE(func_261(iParam0), func_262(iParam0), func_263(iParam0));
}

void func_119()
{
	MISC::_COPY_MEMORY(&Global_40, Global_2693983, 12065);
}

void func_120()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 771)
	{
		(Global_12105[iVar0 /*7*/])->f_2 = 0;
		(Global_12105[iVar0 /*7*/])->f_3 = 0;
		(Global_12105[iVar0 /*7*/])->f_4 = 0;
		(Global_12105[iVar0 /*7*/])->f_6 = -15;
		iVar0++;
	}
}

void func_121()
{
	MISC::_COPY_MEMORY(&Global_17503, Global_2711446, 3206);
}

void func_122()
{
	MISC::_COPY_MEMORY(&Global_20709, Global_2714652, 2408);
}

void func_123()
{
	MISC::_COPY_MEMORY(&Global_23117, Global_2717060, 1769);
}

void func_124()
{
	MISC::_COPY_MEMORY(&Global_24886, Global_2718829, 1909);
}

void func_125()
{
	MISC::_COPY_MEMORY(&Global_26795, Global_2720738, 777);
}

void func_126()
{
	MISC::_COPY_MEMORY(&Global_27572, Global_2721515, 4501);
}

void func_127()
{
	MISC::_COPY_MEMORY(&Global_32073, Global_2726016, 4234);
}

void func_128(var uParam0)
{
	if (func_27() == -1)
	{
		if (!Global_40)
		{
			return;
		}
		if (!func_58())
		{
			return;
		}
	}
	else if (func_27() == 0)
	{
		return;
	}
	MISC::_COPY_MEMORY(&(Global_1879534->f_7301), uParam0, 243);
}

void func_129()
{
	var uVar0;

	if (!func_264(3, &uVar0))
	{
		return;
	}
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -2017996124, "cashtags/cashtag(name=%x):value");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1732391141, "cashtags/modifierTags/modifierTag(name=%x):value");
}

void func_130(int iParam0, int iParam1, int iParam2)
{
	if (!func_178(iParam0))
	{
		return;
	}
	(*Global_1914270)[iParam0] = DATAFILE::_0xCA56DD6AB7A39F64(iParam1);
	if (Global_1914270[iParam0] == 0)
	{
		return;
	}
	Call_Loc(iParam2);
}

void func_131()
{
	var uVar0;

	if (!func_264(5, &uVar0))
	{
		return;
	}
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 192444604, "postOffice/trackedParcels/parcel(name=%x)/parcelItem");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 833374898, "postOffice/trackedParcels/parcel(name=%x)/parcelItem(%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1392893044, ":itemID");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1214284824, ":itemCnt");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -122991295, "postOffice/trackedParcels/parcel(name=%x)/positiveRepItem(%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1902296053, "postOffice/trackedParcels/parcel(name=%x)/negativeRepItem(%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 396654621, "postOffice/trackedParcels/parcel(name=%x)/positiveRepItem");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1450050975, "postOffice/trackedParcels/parcel(name=%x)/negativeRepItem");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 724542304, "postOffice/trackedParcels/parcel(name=%x)/flags:isCardSet");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1842227093, "postOffice/trackedParcels/parcel(name=%x)/flags:isLegendaryFish");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1203822305, "postOffice/trackedParcels/parcel(name=%x)/collectibleID:collectibleID");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 51132409, "postOffice/trackedParcels/parcel(name=%x)/bit0:CardSet");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1601599279, "postOffice/trackedParcels/parcel(name=%x)/parcelDesc:desc");
}

void func_132()
{
	var uVar0;

	if (!func_264(6, &uVar0))
	{
		return;
	}
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 465794448, func_265(465794448));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -815325344, func_265(-815325344));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -764679122, func_265(-764679122));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1893576372, func_265(-1893576372));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 549615901, func_265(549615901));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 656138654, func_265(656138654));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1661050588, func_265(-1661050588));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -860974647, func_265(-860974647));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 53142323, func_265(53142323));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1970263451, func_265(-1970263451));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -101978662, func_265(-101978662));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 521381610, "region(id=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 2073822671, ":shop");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 701084451, "shelfObj");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -412700030, "shelfObj(%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 2042406626, "shelfObj(inventoryItem=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -2123036120, ":entitySet");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1712903544, ":cabinetSet");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1792709277, ":worldIPL");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 932018906, ":inventoryItem");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1247398698, ":inventoryItemOverride");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 2067444527, ":OpenOnly");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 2125553816, ":EnforcePickup");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1037227702, ":TargetPosition");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -788806526, "dressingObj");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 791653025, "dressingObj(%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1218877676, "dressingObj(id=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -205647334, ":inventoryItemUnlock");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1986163665, func_265(1986163665));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1976824961, func_265(1976824961));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -199231160, func_265(-199231160));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -908395502, func_265(-908395502));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 421691991, func_265(421691991));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1400723349, func_265(-1400723349));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -562246383, func_265(-562246383));
}

void func_133()
{
	var uVar0;

	if (!func_264(7, &uVar0))
	{
		return;
	}
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1655936658, "campingLocationLists/campingLocationList(district=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1058386141, "campingLocation");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -738381918, "campingLocation(%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 170329912, ":type");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1808799200, ":name");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 519988399, "campPos");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -518277907, ":x");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1363423190, ":y");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 861329762, ":z");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1425398587, ":heading");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1381741405, "campingReqs");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1310625191, ":reqCampMap");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1212650007, "camData");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1692540711, ":camDict");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 506092813, ":shotName");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1800728046, ":camName");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 353205560, ":camHeading");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -175720391, "todData");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1980941829, ":time");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1359035379, ":weather");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1067565689, ":horsePos");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -596203594, ":horseHeading");
}

void func_134()
{
	var uVar0;

	if (!func_264(9, Global_1415419))
	{
		return;
	}
	uVar0 = &Global_1415419;
	if (!DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 217083545, "ambientVignettes/authoredLocations"))
	{
	}
	if (!DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1275853848, "ambientVignette(%i)"))
	{
	}
	if (!DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -596571389, "ambientVignette(id=%x)"))
	{
	}
	if (!DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 165653806, "ambientVignettes/authoredLocations/ambientVignette(id=%x)"))
	{
	}
	if (!DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -713081767, ":id"))
	{
	}
	if (!DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -971201246, "ambientVignettes/authoredLocations/ambientVignette(id=%x)/district(id=%x)"))
	{
	}
	if (!DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 2135093769, "ambientVignettes/authoredLocations/ambientVignette(%i)/district(id=%x)"))
	{
	}
	if (!DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -641542860, "district(id=%x)"))
	{
	}
	if (!DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 121239534, "district(%i)"))
	{
	}
	if (!DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1696282352, "authoredLocation(%i)"))
	{
	}
	if (!DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1983241935, ":rotation"))
	{
	}
	if (!DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1119853910, ":position"))
	{
	}
	if (!DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -143463129, ":variation"))
	{
	}
	if (!DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1341709093, ":seenDelayHours"))
	{
	}
}

void func_135()
{
	var uVar0;

	if (!func_264(10, &(Global_1415419->f_1)))
	{
		return;
	}
	uVar0 = Global_1415419->f_1;
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 0, "ambientVignettes/ambientVignette(id=%x)/tunings(id=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1, ":triggerDist");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 2, ":triggerTime");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 3, ":triggerClose");
}

void func_136()
{
	if (!func_264(11, &(Global_1327590->f_19720)))
	{
		return;
	}
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1327590->f_19720, 1604180342, "vignetteData/vignettes/vignette(name=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1327590->f_19720, -657975000, ":scriptFile");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1327590->f_19720, 1085469397, ":TODStart");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1327590->f_19720, -1535977529, ":TODEnd");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1327590->f_19720, -1060281697, ":size");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1327590->f_19720, -1800491381, ":weight");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1327590->f_19720, 35230954, "tag:name");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1327590->f_19720, -1556005224, "companion(%i):hash");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1327590->f_19720, 1185638752, "required_listeners:num");
}

void func_137()
{
	var uVar0;

	if (!func_264(13, &uVar0))
	{
		return;
	}
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 0, "itemset/item(id=%x)/components/component:category");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1, "itemset/item(id=%x)/components/component:id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 2, "itemset/item(id=%x)/components/component/texture(type=%x):id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 3, "itemset/item(id=%x)/components/component/palette:id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 4, "itemset/item(id=%x)/components/component/tint1:val");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 5, "itemset/item(id=%x)/components/component/tint2:val");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 6, "itemset/item(id=%x)/components/component/tint3:val");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1170159957, func_266(1170159957));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -956415585, func_266(-956415585));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1063445323, func_266(1063445323));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1574188157, func_266(-1574188157));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1752779714, func_266(-1752779714));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1004470061, func_266(1004470061));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1218801571, func_266(-1218801571));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1580989022, func_266(-1580989022));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -641661298, func_266(-641661298));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1179965762, func_266(-1179965762));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -2059916790, func_266(-2059916790));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1574347650, func_266(-1574347650));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 503961584, func_266(503961584));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -612355112, func_266(-612355112));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 71109396, func_266(71109396));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1918885948, func_266(-1918885948));
}

void func_138()
{
	var uVar0;

	if (!func_264(12, &uVar0))
	{
		return;
	}
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -608279732, "train_routes/junctions/track(name=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -870751591, "Item(%i)/junction:position");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -853103500, "Item(%i)/junction:name");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1956866776, "train_routes/train(name=%x)/junction(name=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1817584937, ":switch");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1830263756, "train_routes/train_stations/train(name=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 530786772, "Item(%i)/station:track");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1642930494, "Item(%i)/station:position");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -959168135, "Item(%i)/station:direction");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1804008182, "Item(%i)/station:isStation");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1008236233, "train_routes/train_stations/train(name=%x)/Item(%i)/times");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1882285204, "time(%i)/departure:hour");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 674301239, "time(%i)/departure:minute");
}

void func_139()
{
	var uVar0;

	if (!func_264(15, &uVar0))
	{
		return;
	}
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 723128514, "respawnLocationData/locationList");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 185256713, "respawnLocationData/locationList/Item(%i)/name:locationName");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1748960728, "respawnLocationData/locationList/Item(%i)/name:establisher");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -125049320, "respawnLocationData/locationList/Item(%i)/name:caravan");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 303248275, "respawnLocationData/locationList/Item(%i)/name:isShop");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -786414325, "respawnLocationData/locationList/Item(%i)/playerPos:x");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1756016266, "respawnLocationData/locationList/Item(%i)/playerPos:y");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1264284652, "respawnLocationData/locationList/Item(%i)/playerPos:z");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -566397848, "respawnLocationData/locationList/Item(%i)/animations");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 599260570, "animation(%i):ID");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1368867264, "animation(%i):dictionary");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -544081353, "respawnLocationData/respawnAnimList");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1783498894, "respawnLocationData/respawnAnimList/anim(%i):name");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1222062814, "respawnLocationData/respawnAnimList/anim(name=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 824674748, "flags:useLooping");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1565562604, "flags:useAction");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -233815074, "flags:useSecondaryUpper");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -477049661, "flags:loopAsSecondary");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -899679477, "flags:disablePhysics");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -62070419, "flags:disableLegIK");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1689379704, "flags:usesHat");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 660059998, "flags:useIdles");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1854764018, "flags:prop");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -391550498, "flags:prop2");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1625090004, "flags:rifleLH");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 76128139, "flags:rifleRH");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1148228754, "flags:useHorse");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 939842437, "flags:needInventory");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 2055089342, "flags:walkTillBreakout");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1514205951, "idle:dict");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1597176581, "idle:count");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1726340653, "animOverride:loopingDic");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -2000223992, "alternateAnimation:dictionary");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1571721931, "respawnLocationData/locationList/Item(%i)/animations/animation(ID=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1999103282, "respawnLocationData/locationList/Item(%i)/animations/animation(%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1148748386, "respawnLocationData/locationList/Item(%i)/animations");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1737068032, "respawnLocationData/locationList/Item(%i)/animations/animation(%i):ID");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -495185473, "playerPos:vector");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1276360309, "playerHeading:float");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1081618208, "camPosition:vector");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1993680615, "camRotation:vector");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 151706215, "camFov:float");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1075437165, "horsePos:vector");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 482880665, "horsePos:heading");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1818584824, "horsePos:hitched");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 2009151738, "time:min");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1565059035, "time:max");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1786497406, "quickCamExit:value");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -2069884107, "time:weather");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 383290544, "shop:name");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -182204340, "tracks:waypointRecording");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -2016118713, "tracks:waypointHorse");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1563492982, "flow:before");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1975530226, "flow:after");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 108838230, "flow:beforeRCM");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 181294442, "flow:afterRCM");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1374679209, "respawnLocationData/respawnAnimList/anim(name=%x)/startAnimations");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 805008619, "startAnim(%i):name");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 908023140, "respawnLocationData/respawnAnimList/anim(name=%x)/idleAnimations");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1100654060, "idleAnim(%i):name");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 669343399, "respawnLocationData/respawnAnimList/anim(name=%x)/exitAnimations");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1312010450, "exitAnim(%i):name");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1814582423, "respawnLocationData/regionEstablishers/regionEstablisher(district=%x):establisher");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1318367208, "respawnLocationData/regionEstablishers/regionEstablisher(region=%x):establisher");
}

void func_140()
{
	if (!func_264(16, &(Global_1935183->f_30)))
	{
		return;
	}
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1935183->f_30, 0, "root/town(id=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1935183->f_30, 1, "townStateTag(id=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1935183->f_30, 2, "scenarioGroups");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1935183->f_30, 3, "scenarioGroup(%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1935183->f_30, 4, ":id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1935183->f_30, 5, ":enable");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1935183->f_30, 6, "iplGroups");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1935183->f_30, 7, "iplGroup(%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1935183->f_30, 8, ":id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1935183->f_30, 9, ":enable");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1935183->f_30, 10, "schedules/perschar(id=%x):schedule");
}

void func_141()
{
	var uVar0;

	if (!func_264(17, &uVar0))
	{
		return;
	}
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 0, "collectibles/name(id=%x):modelName0");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1, "collectibles/name(id=%x):modelName1");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 2, "collectibles/name(id=%x):modelName2");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 3, "collectibles/name(id=%x):modelName3");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 4, "collectibles/name(id=%x):modelName4");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 5, "collectibles/name(id=%x):inventoryItem0");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 6, "collectibles/name(id=%x):inventoryItem1");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 7, "collectibles/name(id=%x):inventoryItem2");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 8, "collectibles/name(id=%x):inventoryItem3");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 9, "collectibles/name(id=%x):inventoryItem4");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 10, "collectibles/name(id=%x):inventoryItem5");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 11, "collectibles/name(id=%x):text0");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 12, "collectibles/name(id=%x):text1");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 13, "collectibles/name(id=%x):text2");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 14, "collectibles/name(id=%x):text3");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 15, "collectibles/name(id=%x):int0");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 16, "collectibles/name(id=%x):int1");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 17, "collectibles/name(id=%x):int2");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 18, "collectibles/name(id=%x):int3");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 19, "collectibles/name(id=%x):int4");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 20, "collectibles/name(id=%x):int5");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 21, "collectibles/name(id=%x):scenarioType");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 22, "collectibles/name(id=%x):trackedparcels");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 23, "collectibles/name(id=%x):cashTag");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 24, "collectibles/name(id=%x):lootableDef");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 25, "collectibles/name(id=%x):bit0");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 26, "collectibles/name(id=%x):bool0");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 27, "collectibles/name(id=%x):vector0");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 28, "collectibles/name(id=%x):vector1");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 29, "collectibles/name(id=%x):vector2");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 30, "collectibles/name(id=%x):vector3");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 31, "collectibles/name(id=%x):heading0");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 32, "collectibles/name(id=%x):heading1");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 33, "collectibles/name(id=%x):heading2");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 34, "collectibles/name(id=%x):heading3");
}

void func_142()
{
	if (func_27() == -1)
	{
		if (!func_264(18, &(Global_1935689->f_10225)))
		{
			return;
		}
	}
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1935689->f_10225, 0, "satchel_elements/name(id=%x):texture0");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1935689->f_10225, 1, "satchel_elements/name(id=%x):texturedictionary0");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1935689->f_10225, 2, "satchel_elements/name(id=%x):name0");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1935689->f_10225, 3, "satchel_elements/name(id=%x):description0");
}

void func_143()
{
	if (!func_264(19, &(Global_1357549->f_576)))
	{
		return;
	}
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549->f_576, 29309381, "camps/camp(id=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549->f_576, 1032438694, "tag(id=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549->f_576, 367288306, ":priority");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549->f_576, -1875502208, "camps/tagData/tag(id=%x):priority");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549->f_576, 1250625855, "camps/tagData/tag(id=%x):persistence");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549->f_576, 70005598, "camps/tagData/tag(id=%x):category");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549->f_576, 2065727156, "camps/tagData/tag(id=%x):camp");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549->f_576, -416772466, "camps/tagData/tag(id=%x):duration");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549->f_576, 38091777, "events");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549->f_576, -2121542775, "event(%i):type");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549->f_576, 1703567845, "event(%i):tagID");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549->f_576, 1635537271, "event(%i):persistence");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549->f_576, -881673417, "event(%i):priority");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549->f_576, -1520535178, "event(%i):duration");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549->f_576, 131366045, "schedules");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549->f_576, -1811142696, "greets");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549->f_576, -1717836031, "moods");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549->f_576, 1770089518, "activities");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549->f_576, -1671282280, "scouts");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549->f_576, -23319581, "miniExchanges");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549->f_576, 1390301875, "vignetteInfo");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549->f_576, -1715662773, "category(%i):name");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549->f_576, -99632347, "category(%i):slots");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549->f_576, 290349293, "category(%i):weight");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549->f_576, 1192477482, "category(%i):visitMax");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549->f_576, 550828398, "category(%i):totalMax");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549->f_576, -176494405, "category(%i):delayMin");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549->f_576, 1087786295, "category(%i):delayMax");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549->f_576, 1066925324, "category(%i):delayInc");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549->f_576, 730646859, "vignettes");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549->f_576, 161473965, "vignette(%i):name");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549->f_576, -407988477, "vignette(%i):effect");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549->f_576, -1756408348, "moods/mood(id=%x):moodID");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549->f_576, -1648808149, "moods/mood(id=%x):duration");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549->f_576, 1461397771, "moods/mood(%i):moodID");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549->f_576, 151697783, "moods/mood(%i):id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549->f_576, 824852062, "moods/mood(%i):duration");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549->f_576, -1949665568, "moods/mood(%i):player");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549->f_576, -1378669256, "moods/mood(%i):remove");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549->f_576, -913813077, "greets/greet(%i):greetRule");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549->f_576, 1526752584, "greets/greet(%i):id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549->f_576, -1740164857, "greets/greet(%i):duration");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549->f_576, 1289919464, "greets/greet(%i):remove");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549->f_576, 132295407, "greets/greet(%i):tempdisable");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549->f_576, -606763260, "greets/greet(%i):immediate");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549->f_576, 1007407053, "greets/greet(%i):player");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549->f_576, -1309341906, "activities/activity(%i):id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549->f_576, -1682013963, "miniExchanges/miniExchange(%i):id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549->f_576, 132559829, "miniExchanges/miniExchange(%i):enabled");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1357549->f_576, -1651099034, "schedules/schedule(id=%x):scheduleID");
}

void func_144()
{
	if (!func_264(20, &(Global_1359489->f_21)))
	{
		return;
	}
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, 429892159, "activities/camp(id=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, -904684498, "activities");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, 149448507, "activity(%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, 1699652051, "activity(id=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, 13127246, "activity(instanceID=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, -1688140176, ":enabled");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, 191541852, ":id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, -286179123, ":instanceID");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, -12317914, ":location");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, 482834189, ":heading");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, -620745170, ":customActivityUpdate");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, 1946033125, ":scriptToLaunch");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, 1371217890, ":stackSize");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, -2015824487, "participants");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, 287603469, "participants/participant(%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, 919971448, "participants/participant(%i):id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, -2137406745, ":minCampLevel");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, 429172948, "timeblocks");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, -1857445163, "timeblock(%i):start");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, 1738420189, "timeblock(%i):end");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, -431208529, ":shouldLaunchScriptEarly");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, -547065739, ":launchScript");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, 693772275, ":prerequisiteActivity");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, 950875968, ":autoAddParticipants");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, 1023837085, ":requireAllParticipants");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, -350109401, ":hostShouldLead");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, -1153145259, ":useSimpleVolume");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, -768200779, ":activityVolRadius");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, -972717455, "activity(instanceID=%x):ipl");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, -1140954353, "activity(instanceID=%x):speechRuleset");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, 1749910275, ":horseStartLocation");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, -240512847, ":horseStartHeading");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, -1498558552, ":hostWaitLocation");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, -950402515, ":hostWaitHeading");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, 1156974471, ":invitePos");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, -102247125, ":launchSceneType");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, 879932920, "assets/anims:looseAnimScene");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, -665861927, "assets/dialogue:beatDialogue");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, 2090390096, "assets/anims:playbackListAnimScene");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, 886360362, "assets/scenarios:scenarioCallovers");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, 1524147455, "assets/scenarios/scenario(type=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, -320556862, "assets/scenarios/scenario(type=%x):position");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, 1394784022, "assets/scenarios/scenario(type=%x):heading");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, -808176988, "assets/scenarios/scenario(type=%x):id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, -2112723510, "assets/dialogue");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, 35939498, "assets/dialogue:id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, 738913608, "assets/music:musicFileName");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, 1202064540, "activity(instanceID=%x)/assets/anims/anim(type=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, 1449499638, "activity(instanceID=%x)/assets/anims/anim(type=%x):hostPedHandle");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, -561019962, "activity(instanceID=%x)/assets/anims/anim(type=%x):playerPedHandle");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, 954609930, "assets/anims/anim(type=%x):hostPedHandle");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, 1080121180, "assets/anims/anim(type=%x):playerPedHandle");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, -1643627018, "activity(instanceID=%x)/assets/anims/anim(type=%x):id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, 899481067, "assets/anims/anim(type=%x):idle");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, 366733363, "assets/anims/anim(type=%x):invite");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, 61184076, "assets/anims/anim(type=%x):callover");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, 1746427169, "assets/anims/anim(type=%x):calloverLeft");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, -1746252387, "assets/anims/anim(type=%x):calloverRight");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, 708078506, "assets/anims:dontanimatePlayer");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, 770042177, "assets/anims:playerUpperbodyOnly");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, -1903557952, "assets/anims:registerPlayerForLeadin");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, 2072518271, "activities/activity(instanceID=%x)/assets/dialogue/line(type=%x):id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, 1445554035, "assets/cutscenes/scene(type=%x):hostPedHandle");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, 443199092, "participants/participant(id=%x):pedHandle");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, -2047775528, "activity(instanceID=%x)/assets/cutscenes/scene(type=%x):id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, -1102408038, "activity(instanceID=%x)/assets/cutscenes/scene(type=%x):position");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, -1750702392, "activity(instanceID=%x)/assets/cutscenes/scene(type=%x):heading");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, 909172229, "activity(instanceID=%x)/assets/props");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, 809005032, "prop(%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, -2077191478, ":id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, 2029403190, ":isVehicle");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, 1932515175, ":position");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, 1283690869, ":rotation");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_21, -145970252, ":propHandle");
}

void func_145()
{
	if (!func_264(21, &(Global_1359489->f_361.f_195)))
	{
		return;
	}
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_361.f_195, 0, "Items");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_361.f_195, 2, "Item(%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_361.f_195, 6, ":itemRequest");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_361.f_195, 7, ":inventoryItem");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_361.f_195, 3, ":region");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_361.f_195, 8, ":position");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1359489->f_361.f_195, 9, ":rotation");
}

void func_146()
{
	var uVar0;

	if (!func_264(22, &uVar0))
	{
		return;
	}
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1023752283, func_267(-1023752283));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1076906043, func_267(-1076906043));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -153135980, func_267(-153135980));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 12851681, func_267(12851681));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1386325051, func_267(1386325051));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 43722464, func_267(43722464));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -581476215, func_267(-581476215));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1906982261, func_267(-1906982261));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1035806543, func_267(-1035806543));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1579284209, func_267(1579284209));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1172613177, func_267(-1172613177));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 495869290, func_267(495869290));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1382561665, func_267(-1382561665));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 684071069, func_267(684071069));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1357371535, func_267(1357371535));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -1221865546, func_267(-1221865546));
}

void func_147()
{
	var uVar0;

	if (!func_264(23, &uVar0))
	{
		return;
	}
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 1781729525, func_268(1781729525));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -2103982008, func_268(-2103982008));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, -57097983, func_268(-57097983));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 2027336698, func_268(2027336698));
	DATAFILE::_DATAFILE_REGISTER_QUERY(uVar0, 316053773, func_268(316053773));
}

void func_148()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < &Global_1911670)
	{
		iVar1 = Global_1911670[iVar0];
		if (VOLUME::_0xF6A8A652A6B186CD(iVar1))
		{
			VOLUME::_0xFDFECC6EE4491E11(iVar1);
			(*Global_1911670)[iVar0] = 0;
		}
		iVar0++;
	}
}

int func_149()
{
	return 0;
}

void func_150()
{
	func_269(1416977006, 1);
	func_269(1731133409, 1);
	func_269(-227771192, 1);
	func_269(-522528347, 1);
	func_269(1446885586, 1);
	func_269(1208032345, 1);
}

void func_151()
{
	int iVar0;

	VOLUME::_0x748C5F51A18CB8F0(0);
	func_270(1);
	iVar0 = 0;
	while (iVar0 < 150)
	{
		func_271(iVar0);
		iVar0++;
	}
	VOLUME::_0x748C5F51A18CB8F0(1);
}

void func_152()
{
	if (func_27() == -1)
	{
		Global_1894899->f_172 = DATAFILE::_0xD97D8D905F1562F2(-2002867003);
		Global_1894899->f_173 = DATAFILE::_0xD97D8D905F1562F2(-858572145);
		Global_1894899->f_174 = DATAFILE::_0xD97D8D905F1562F2(1814852958);
		while ((!DATAFILE::_0x603AC35FD4602C76(Global_1894899->f_172) || !DATAFILE::_0x603AC35FD4602C76(Global_1894899->f_173)) || !DATAFILE::_0x603AC35FD4602C76(Global_1894899->f_174))
		{
			BUILTIN::WAIT(0);
		}
		func_272();
		func_273();
		func_274();
	}
}

void func_153(var uParam0, var uParam1, char* sParam2)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	vector3 vVar7;
	vector3 vVar10;
	vector3 vVar13;
	var uVar16;
	int iVar24;
	bool bVar25;
	int iVar26;
	char cVar27[64];

	iVar0 = MISC::GET_FRAME_COUNT();
	Var2 = *uParam1;
	Var2.f_2 = -244250050;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var2.f_1), &Var2))
	{
	}
	Var2.f_2 = 0;
	while (DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var2, Var2.f_1) > iVar26)
	{
		bVar25 = false;
		Var2.f_3 = iVar26;
		Var2.f_2 = -734680005;
		DATAFILE::_DATAFILE_GET_STRING(&uVar16, &Var2);
		iVar1 = func_275(MISC::GET_HASH_KEY(&uVar16));
		if (iVar1 == -1)
		{
			Var2.f_2 = -1285134888;
			DATAFILE::_DATAFILE_GET_STRING(&uVar16, &Var2);
			iVar1 = func_275(MISC::GET_HASH_KEY(&uVar16));
			bVar25 = true;
			if (iVar1 == -1)
			{
			}
		}
		if (iVar1 != -1)
		{
			Var2.f_2 = -177723663;
			DATAFILE::_DATAFILE_GET_FLOAT(&vVar7, &Var2);
			Var2.f_2 = -968243019;
			DATAFILE::_DATAFILE_GET_FLOAT(&(vVar7.f_1), &Var2);
			Var2.f_2 = -646025442;
			DATAFILE::_DATAFILE_GET_FLOAT(&(vVar7.f_2), &Var2);
			Var2.f_2 = 1397255209;
			DATAFILE::_DATAFILE_GET_FLOAT(&vVar10, &Var2);
			Var2.f_2 = 503447965;
			DATAFILE::_DATAFILE_GET_FLOAT(&(vVar10.f_1), &Var2);
			Var2.f_2 = 800892178;
			DATAFILE::_DATAFILE_GET_FLOAT(&(vVar10.f_2), &Var2);
			Var2.f_2 = 1348766134;
			DATAFILE::_DATAFILE_GET_FLOAT(&vVar13, &Var2);
			Var2.f_2 = 1572185176;
			DATAFILE::_DATAFILE_GET_FLOAT(&(vVar13.f_1), &Var2);
			Var2.f_2 = -1543393037;
			DATAFILE::_DATAFILE_GET_FLOAT(&(vVar13.f_2), &Var2);
			Var2.f_2 = 1958238202;
			DATAFILE::_DATAFILE_GET_STRING(&uVar16, &Var2);
			iVar24 = MISC::GET_HASH_KEY(&uVar16);
			StringCopy(&cVar27, func_276(iVar1), 64);
			StringConCat(&cVar27, sParam2, 64);
			if (!bVar25)
			{
				switch (iVar24)
				{
					case 665633627:
						(*uParam0)[iVar1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar7, vVar10, vVar13, &cVar27);
						break;
					case -1612834106:
						(*uParam0)[iVar1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar7, vVar10, vVar13, &cVar27);
						break;
				}
			}
			else
			{
				if (!VOLUME::_0x92A78D0BEDB332A3(uParam0[iVar1]))
				{
					(*uParam0)[iVar1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME(&cVar27);
				}
				switch (iVar24)
				{
					case 665633627:
						VOLUME::_0xBCE668AAF83608BE(uParam0[iVar1], vVar7, vVar10, vVar13);
						break;
					case -1612834106:
						VOLUME::_0x39816F6F94F385AD(uParam0[iVar1], vVar7, vVar10, vVar13);
						break;
				}
			}
		}
		iVar26++;
	}
}

void func_154(bool bParam0)
{
	struct<4> Var0;
	var uVar5;
	int iVar13;
	var uVar14;
	var uVar15;
	int iVar23;

	if (bParam0)
	{
		if (func_27() == -1)
		{
			Global_1894899->f_175 = DATAFILE::_0xD97D8D905F1562F2(90230079);
			while (!DATAFILE::_0x603AC35FD4602C76(Global_1894899->f_175))
			{
				BUILTIN::WAIT(0);
			}
			func_277();
		}
	}
	else
	{
		Global_1894899->f_175 = DATAFILE::_0xCA56DD6AB7A39F64(90230079);
		func_277();
	}
	Var0 = Global_1894899->f_175;
	Var0.f_2 = -258890676;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
	}
	Var0.f_2 = 0;
	while (DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1) > iVar23)
	{
		Var0.f_3 = iVar23;
		Var0.f_2 = 1489686829;
		DATAFILE::_DATAFILE_GET_STRING(&uVar5, &Var0);
		iVar13 = func_275(MISC::GET_HASH_KEY(&uVar5));
		if (func_207(iVar13))
		{
			Var0.f_2 = 596301644;
			DATAFILE::_DATAFILE_GET_FLOAT(&uVar14, &Var0);
			((*Global_1888801)[iVar13 /*35*/])->f_10 = uVar14;
			Var0.f_2 = 325957282;
			DATAFILE::_DATAFILE_GET_FLOAT(&uVar14, &Var0);
			((*Global_1888801)[iVar13 /*35*/])->f_11 = uVar14;
			Var0.f_2 = 426139466;
			DATAFILE::_DATAFILE_GET_STRING(&uVar15, &Var0);
			((*Global_1888801)[iVar13 /*35*/])->f_12 = MISC::GET_HASH_KEY(&uVar15);
		}
		iVar23++;
	}
	DATAFILE::_DATAFILE_UNLOAD(Global_1894899->f_175);
}

void func_155(var uParam0)
{
	*uParam0 = DATAFILE::_0xD97D8D905F1562F2(792987418);
	while (!DATAFILE::_0x603AC35FD4602C76(*uParam0))
	{
		BUILTIN::WAIT(0);
	}
}

void func_156()
{
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899->f_170, 1276999770, "regions/region(id=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899->f_170, 1459980739, ":script");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899->f_170, -158797272, ":prefix");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899->f_170, -1484939920, ":type");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899->f_170, 2028394285, ":mpType");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899->f_170, 670069251, ":richPresence");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899->f_170, 1422201736, ":lockSessioning");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899->f_170, 865021745, ":guama");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899->f_170, 2078335853, ":mpGhosttown");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899->f_170, -2025494336, ":mpTypeOverride");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899->f_170, 899379634, ":noGPS");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899->f_170, 414670492, ":hideName");
}

void func_157(var uParam0)
{
	*uParam0 = DATAFILE::_0xD97D8D905F1562F2(-1412413887);
	while (!DATAFILE::_0x603AC35FD4602C76(*uParam0))
	{
		BUILTIN::WAIT(0);
	}
}

void func_158()
{
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899->f_171, 1252559615, "regions/region(name=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899->f_171, 1711029673, "bCanBeRestricted:value");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899->f_171, 1758612600, "bUseStoredBountyForWanted:value");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899->f_171, 115903213, "iBountyForWanted:value");
}

void func_159()
{
	DATAFILE::_DATAFILE_UNLOAD(Global_1894899->f_172);
	DATAFILE::_DATAFILE_UNLOAD(Global_1894899->f_173);
	DATAFILE::_DATAFILE_UNLOAD(Global_1894899->f_174);
}

void func_160(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	struct<20> Var0;

	if (iParam1 > 150)
	{
		return;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam2))
	{
	}
	if (!func_278(uParam0, iParam1, &Var0))
	{
		return;
	}
	((*Global_1888801)[iParam1 /*35*/])->f_3 = iParam2;
	((*Global_1888801)[iParam1 /*35*/])->f_4 = uParam3;
	((*Global_1888801)[iParam1 /*35*/])->f_5 = uParam4;
	((*Global_1888801)[iParam1 /*35*/])->f_6 = { VOLUME::_0xF70F00013A62F866(iParam2) };
	MemCopy(&(((*Global_1888801)[iParam1 /*35*/])->f_23), {Var0}, 3);
	MemCopy(&(((*Global_1888801)[iParam1 /*35*/])->f_22), {Var0.f_8}, 1);
	((*Global_1888801)[iParam1 /*35*/])->f_30 = MISC::GET_HASH_KEY(&(((*Global_1888801)[iParam1 /*35*/])->f_22));
	((*Global_1888801)[iParam1 /*35*/])->f_20 = Var0.f_16;
	((*Global_1888801)[iParam1 /*35*/])->f_9 = 0;
	((*Global_1888801)[iParam1 /*35*/])->f_1 = 0;
	((*Global_1888801)[iParam1 /*35*/])->f_15 = { func_279(iParam1) };
	func_280(iParam1, 15);
	func_281(iParam1, Var0.f_18);
	if (func_282(iParam1, 64))
	{
		if (VOLUME::_0x92A78D0BEDB332A3(iParam2))
		{
			PATHFIND::_0xF2A2177AC848B3A8(iParam2, 0, 1);
		}
	}
	if (func_27() != -1)
	{
		if (func_282(iParam1, 32))
		{
			if (Var0.f_19 != 0)
			{
				((*Global_1888801)[iParam1 /*35*/])->f_20 = Var0.f_19;
			}
		}
	}
	switch (Var0.f_16)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 9:
			break;
		default:
			break;
	}
	if (func_27() == -1)
	{
		switch (func_283(iParam1))
		{
			case 0:
			case 2:
			case 11:
				Global_1894899->f_176++;
				break;
			case 1:
			case 5:
			case 6:
			case 7:
			case 12:
				Global_1894899->f_178++;
				break;
			case 3:
			case 10:
				Global_1894899->f_177++;
				break;
			case 4:
			case 9:
				Global_1894899->f_179++;
				break;
			case 8:
				Global_1894899->f_180++;
				break;
			case 13:
			case 14:
			case 15:
			case 16:
				Global_1894899->f_181++;
				break;
		}
	}
}

void func_161(var uParam0, int iParam1)
{
	bool bVar0;

	if (iParam1 > 150)
	{
		return;
	}
	if (!func_284(uParam0, iParam1, &bVar0))
	{
		return;
	}
	((*Global_1888801)[iParam1 /*35*/])->f_31 = bVar0;
}

void func_162()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (func_207(iVar0))
		{
			if (func_285(iVar0) && func_286(iVar0))
			{
				func_232(iVar0, 1, 350);
			}
			else
			{
				func_232(iVar0, 0, 350);
			}
		}
		iVar0++;
	}
}

void func_163(var uParam0)
{
	DATAFILE::_DATAFILE_UNLOAD(*uParam0);
}

void func_164(var uParam0)
{
	DATAFILE::_DATAFILE_UNLOAD(*uParam0);
}

void func_165()
{
	int iVar0;

	Global_1894899->f_161 = 0;
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (func_287(iVar0) && VOLUME::_0x92A78D0BEDB332A3(((*Global_1888801)[iVar0 /*35*/])->f_3))
		{
			Global_1894899->f_10[Global_1894899->f_161] = iVar0;
			Global_1894899->f_161++;
		}
		iVar0++;
	}
}

void func_166()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10[16];
	int iVar27[4];

	iVar7 = 0;
	iVar8 = 0;
	iVar9 = 0;
	func_288();
	iVar8 = 0;
	while (iVar8 < 16)
	{
		iVar9 = 0;
		while (iVar9 < 50)
		{
			(*(*Global_1894065)[iVar8 /*51*/])[iVar9] = -1;
			iVar9++;
		}
		(*Global_1894882)[iVar8] = 0;
		iVar8++;
	}
	VOLUME::_0x748C5F51A18CB8F0(0);
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1888801)[iVar0 /*35*/])->f_3))
		{
			VOLUME::_0x5737199AF2DC609F(((*Global_1888801)[iVar0 /*35*/])->f_3, &vVar1, &vVar4);
			iVar8 = 0;
			while (iVar8 < 16)
			{
				iVar10[iVar8] = 1;
				iVar8++;
			}
			iVar7 = 0;
			while (iVar7 < 4)
			{
				iVar27[iVar7] = 1;
				iVar7++;
			}
			func_289(vVar1, vVar4, 0f, 0f, &iVar27, 0, 2);
			iVar7 = 0;
			while (iVar7 < 4)
			{
				if (&iVar27[iVar7])
				{
					func_289(vVar1, vVar4, ((*Global_1894052)[iVar7 /*3*/])->f_1, ((*Global_1894052)[iVar7 /*3*/])->f_2, &iVar10, Global_1894052[iVar7 /*3*/], 4);
				}
				else
				{
					func_290(&iVar10, Global_1894052[iVar7 /*3*/], 4);
				}
				iVar7++;
			}
			iVar8 = 0;
			while (iVar8 < 16)
			{
				if (&iVar10[iVar8])
				{
					if (Global_1894882[iVar8] >= 50)
					{
					}
					(*(*Global_1894065)[iVar8 /*51*/])[Global_1894882[iVar8]] = iVar0;
					(*Global_1894882)[iVar8] = Global_1894882[iVar8] + 1;
				}
				iVar8++;
			}
		}
		iVar0++;
	}
	VOLUME::_0x748C5F51A18CB8F0(1);
	iVar8 = 0;
	while (iVar8 < 16)
	{
		iVar9 = 0;
		while (iVar9 < Global_1894882[iVar8])
		{
			iVar9++;
		}
		iVar8++;
	}
}

void func_167(int iParam0)
{
	Global_1894899 = (&Global_1894899 - (Global_1894899 && iParam0));
}

void func_168()
{
	struct<202> Var0;

	Var0 = 100;
	Var0.f_1 = -1;
	Var0.f_1.f_1 = 1;
	Var0.f_1.f_2 = -1;
	Var0.f_1.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 1;
	Global_1934765->f_69 = { Var0 };
}

void func_169(int iParam0)
{
	func_291(iParam0, 1);
}

void func_170(int iParam0)
{
	func_291(iParam0, 0);
}

void func_171()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		func_292(iVar0);
		iVar0++;
	}
}

int func_172(int iParam0, bool bParam1)
{
	switch (func_293(iParam0))
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

int func_173()
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

bool func_174(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

int func_175(bool bParam0, var uParam1, var uParam2)
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

void func_176(bool bParam0, bool bParam1)
{
	vector3 vVar0;
	var uVar3;
	var uVar4;

	if (func_27() == -1)
	{
		func_294();
	}
	else
	{
		return;
	}
	func_295();
	Global_40.f_9.f_14 = func_177();
	Global_40.f_9.f_20 = LAW::_0x54310AAB97B92816(PLAYER::GET_PLAYER_INDEX());
	Global_40.f_11999 = _NAMESPACE59::_0xB00CE33465B5406D(1, "startup");
	if (bParam0 && !bParam1)
	{
		if (func_296())
		{
			func_214(Global_1310720->f_1);
		}
		else if (func_98() == func_102(Global_36, 1) && func_297() != 2)
		{
			func_214(Global_40.f_6);
			Global_40.f_9 = 1;
		}
		else
		{
			func_214(Global_36);
		}
		func_298(Global_36, &vVar0, &uVar4);
		if (!func_296())
		{
			if (func_299(vVar0, Global_36) < func_299(Global_40.f_9.f_7, Global_36))
			{
				func_214(vVar0);
				Global_40.f_9 = uVar4;
			}
			else
			{
				Global_40.f_9 = 0;
			}
		}
		Global_40.f_9.f_15 = func_102(Global_40.f_9.f_7, 1);
	}
	else if (!bParam0)
	{
		func_298(Global_36, &(Global_40.f_9.f_7), &(Global_40.f_9));
		MISC::OVERRIDE_SAVE_HOUSE(true, Global_40.f_9.f_7, 0f, true, &vVar0, &uVar3);
	}
	if (!bParam1)
	{
		func_218(Global_1935630, 8192);
	}
	func_300();
}

int func_177()
{
	return &Global_1899515;
}

bool func_178(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_179(bool bParam0, bool bParam1)
{
	var uVar0;
	struct<8> Var1;

	if (!bParam0)
	{
		if (STREAMING::_0xCF45DF50C7775F2A())
		{
			return 0;
		}
		if (func_301())
		{
			return 0;
		}
		if (!Global_1934765->f_274 && !func_39(32768))
		{
			if ((Global_1879534->f_1 || Global_1879534) // PointerArith)
			{
				return 0;
			}
		}
	}
	switch (&Global_1934765)
	{
		case 0:
			func_302(666617953);
			func_302(1733948592);
			func_302(1700234797);
			func_302(1305074360);
			func_302(-436566493);
			func_302(-1995815064);
			func_302(-483649675);
			func_302(212587871);
			func_302(2029194243);
			func_302(1190076410);
			func_302(350100475);
			func_302(2033090463);
			func_302(-688011628);
			func_302(-787042507);
			func_302(1688216398);
			func_302(669655585);
			func_302(-895099271);
			func_302(556610581);
			func_302(-786679704);
			if (func_303())
			{
				func_302(-693659956);
				func_302(642296010);
				func_302(-400238535);
				func_302(1416512144);
			}
			func_302(-991895362);
			func_302(-846479900);
			func_302(-866774384);
			if (!Global_1934765->f_288)
			{
				func_304(229);
			}
			PATHFIND::_0x6C3F12ECEB6D2E2A(-1176.011f, -32.44423f, 38f, -1186.829f, -18.19722f, 45f, 6, 1);
			PATHFIND::_0x6C3F12ECEB6D2E2A(-1177.246f, -19.60884f, 38f, -1170.786f, -12.71267f, 42f, 6, 1);
			PATHFIND::_0x6C3F12ECEB6D2E2A(-1174.544f, -4.74933f, 38f, -1163.424f, -13.43965f, 42f, 6, 1);
			func_305();
			func_306();
			func_307();
			return 0;
		case 1:
			func_308();
			func_307();
			return 0;
		case 2:
			func_309();
			func_307();
			return 0;
		case 3:
			break;
	}
	if (!func_310(514932331))
	{
		func_302(1892122519);
	}
	if (func_310(-1414537028))
	{
		if (!func_311(Global_1934765->f_20, 1))
		{
			func_312(5, 1);
			func_312(7, 1);
			func_312(6, 1);
			func_312(1, 1);
			func_84(&(Global_1934765->f_20), 1);
		}
	}
	else if (func_311(Global_1934765->f_20, 1))
	{
		func_312(5, 2);
		func_312(1, 2);
		func_85(&(Global_1934765->f_20), 1);
	}
	if (func_310(269047710))
	{
		func_313(382484708);
		func_302(-910880980);
	}
	else
	{
		func_313(-910880980);
		func_302(382484708);
	}
	if (func_310(-748969569))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("TAX_NOTICE", true);
	}
	else
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("TAX_NOTICE", false);
	}
	if (func_310(618699440))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("TAX_MARITAL", true);
	}
	else
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("TAX_MARITAL", false);
	}
	if (func_310(-1062490780))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("RARE_ORCHIDS_APPLESEED", true);
	}
	else
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("RARE_ORCHIDS_APPLESEED", false);
	}
	if (func_310(-683458244))
	{
		func_314(203);
		func_304(204);
	}
	else
	{
		func_314(204);
		func_304(203);
	}
	func_315(273461605, 79, 2, 4096);
	func_315(-868076593, 9, 32, 4096);
	func_315(1205826474, 36, 64, 4096);
	if (func_310(373691918))
	{
		if (WATER::_GET_WORLD_WATER_TYPE() != 1)
		{
			WATER::_SET_WORLD_WATER_TYPE(1);
		}
		if (!Global_43890)
		{
			STREAMING::_SET_GUARMA_WORLDHORIZON_ACTIVE(true);
			MAP::_0xA657EC9DBC6CC900(1935063277);
		}
		MAP::SET_MINIMAP_HIDE_FOW(true);
		MAP::_SET_FOW_UPDATE_ENABLED(false, 0);
		Global_43890 = 1;
	}
	else
	{
		if (func_310(657241756))
		{
			if (WATER::_GET_WORLD_WATER_TYPE() != 1)
			{
				WATER::_SET_WORLD_WATER_TYPE(1);
			}
		}
		else if (WATER::_GET_WORLD_WATER_TYPE() != 0)
		{
			WATER::_SET_WORLD_WATER_TYPE(0);
		}
		if (Global_43890)
		{
			STREAMING::_SET_GUARMA_WORLDHORIZON_ACTIVE(false);
			MAP::_0xA657EC9DBC6CC900(-1868977180);
		}
		MAP::SET_MINIMAP_HIDE_FOW(false);
		if (!func_39(128))
		{
			MAP::_SET_FOW_UPDATE_ENABLED(true, 0);
		}
		Global_43890 = 0;
	}
	if (func_310(-2058120606))
	{
		if (func_27() == -1)
		{
		}
	}
	else if (func_27() == -1)
	{
	}
	if (func_310(311708813))
	{
		func_302(-1786365097);
		func_304(178);
	}
	else
	{
		func_313(-1786365097);
		func_314(178);
	}
	if (!func_310(1399676951))
	{
		func_313(1934919499);
		func_313(993595204);
		func_313(-515396642);
		func_313(1291083725);
		func_313(2137790641);
		if (func_310(-1524512402))
		{
			func_302(2137790641);
			func_304(193);
		}
		else
		{
			uVar0 = func_317(func_316(11));
			if (func_318(uVar0, 1))
			{
				func_302(2137790641);
				func_304(193);
			}
			else
			{
				func_314(193);
				if (func_318(uVar0, 2))
				{
					func_302(1291083725);
				}
				else if (func_318(uVar0, 4))
				{
					func_302(993595204);
				}
			}
		}
	}
	if (func_310(1497516462))
	{
		if (func_27() == -1)
		{
			func_280(68, 16);
			func_319(557, 32);
			func_319(563, 32);
			func_319(560, 32);
			func_319(561, 32);
			func_319(562, 32);
			func_320(565, 32);
			func_321(565, 0);
			func_320(564, 32);
			func_321(564, 0);
			func_320(554, 32);
			func_321(554, 0);
			func_320(555, 32);
			func_321(555, 0);
			func_320(556, 32);
			func_321(556, 0);
		}
		func_314(199);
		func_304(198);
	}
	else if (func_310(2016141805))
	{
		if (func_27() == -1)
		{
			func_280(68, 16);
			func_319(557, 32);
			func_319(563, 32);
			func_320(560, 32);
			func_321(560, 0);
			func_320(561, 32);
			func_321(561, 0);
			func_320(562, 32);
			func_321(562, 0);
			func_320(554, 32);
			func_321(554, 0);
			func_320(555, 32);
			func_321(555, 0);
			func_320(556, 32);
			func_321(556, 0);
			func_320(565, 32);
			func_321(565, 0);
			func_320(564, 32);
			func_321(564, 0);
		}
		func_314(199);
		func_314(198);
	}
	else if (func_310(1010885152))
	{
		if (func_27() == -1)
		{
			func_322(68, 16);
			func_321(554, 0);
			func_321(555, 0);
			func_321(556, 0);
			func_321(557, 0);
			func_321(563, 0);
			func_321(560, 0);
			func_321(561, 0);
			func_321(562, 0);
			func_321(565, 0);
			func_321(564, 0);
		}
		func_314(199);
		func_304(198);
	}
	else if (func_310(-502324015))
	{
		if (func_27() == -1)
		{
			func_280(68, 16);
			func_320(554, 32);
			func_320(555, 32);
			func_320(556, 32);
			func_320(557, 32);
			func_320(563, 32);
			func_321(554, 0);
			func_321(555, 0);
			func_321(556, 0);
			func_321(557, 0);
			func_321(563, 0);
			func_319(565, 32);
			func_319(564, 32);
			func_319(560, 32);
			func_319(561, 32);
			func_319(562, 32);
		}
		func_314(198);
		func_304(199);
	}
	if (func_310(440043364))
	{
		func_313(376665102);
	}
	else
	{
		func_302(376665102);
	}
	if (func_310(-1425209566))
	{
		if (func_27() == -1)
		{
			func_319(800, 32);
		}
	}
	else if (func_27() == -1)
	{
		func_320(800, 32);
		func_321(800, 0);
	}
	func_323();
	if (func_310(0))
	{
		func_302(1149195254);
		func_302(2016081133);
		func_302(363257921);
		func_302(58066174);
		func_302(-1521525254);
		func_302(-761186147);
		func_302(-1872939092);
		func_302(-964156415);
		func_324(0);
		TASK::SET_SCENARIO_GROUP_ENABLED("BRA_MANOR_UNTIL_BRAITHWAITES_3", true);
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-842138123, false);
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1230241088, true);
		AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_braithwaite_manor_burnt", false, true);
		func_325(-434746250, 1);
		if (func_310(-699277634))
		{
			func_302(-2137633069);
			func_304(121);
			func_304(123);
			func_304(125);
			if (func_27() == -1)
			{
				func_322(93, 16);
				func_326(93);
			}
			if (!PED::_0x91A5F9CBEBB9D936(Global_1934765->f_1) && !bParam1)
			{
				Global_1934765->f_1 = PED::ADD_SCENARIO_BLOCKING_AREA(989.8797f, -1787.977f, 44.5697f, 1034.25f, -1752.225f, 59.7424f, false, 15);
			}
		}
		else
		{
			func_302(1944013855);
			func_304(120);
			func_304(122);
			func_304(124);
			func_280(93, 16);
			if (PED::_0x91A5F9CBEBB9D936(Global_1934765->f_1))
			{
				PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1934765->f_1, false);
				Global_1934765->f_1 = 0;
			}
		}
	}
	else if (func_310(473295046))
	{
		func_302(-1643869063);
		func_302(-1108618313);
		func_302(-787678727);
		func_324(0);
		TASK::SET_SCENARIO_GROUP_ENABLED("BRA_MANOR_UNTIL_BRAITHWAITES_3", false);
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-842138123, true);
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1230241088, true);
		AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_braithwaite_manor_burnt", true, true);
		func_325(-434746250, 1);
		if (func_310(-699277634))
		{
			func_327("bra_man_burned_bra3");
		}
		else
		{
			func_327("bra_man_burned");
		}
		func_280(93, 16);
		if (func_27() == -1)
		{
			func_319(621, 32);
			func_319(622, 32);
			func_319(623, 32);
			func_319(624, 32);
			func_320(909, 32);
			func_321(909, 0);
			func_320(910, 32);
			func_321(910, 0);
			func_320(911, 32);
			func_321(911, 0);
			func_320(912, 32);
			func_321(912, 0);
			func_320(913, 32);
			func_321(913, 0);
			func_320(914, 32);
			func_321(914, 0);
			func_320(617, 32);
			func_321(617, 0);
			func_320(618, 32);
			func_321(618, 0);
			func_320(619, 32);
			func_321(619, 0);
			func_320(620, 32);
			func_321(620, 0);
			func_320(915, 32);
			func_321(915, 0);
			func_320(916, 32);
			func_321(916, 0);
			func_320(917, 32);
			func_321(917, 0);
			func_320(625, 32);
			func_321(625, 0);
		}
		if (PED::_0x91A5F9CBEBB9D936(Global_1934765->f_1))
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1934765->f_1, false);
			Global_1934765->f_1 = 0;
		}
	}
	else if (func_310(-1738165526))
	{
		func_302(-1643869063);
		func_302(622597018);
		func_302(1649275138);
		func_324(1);
		func_327("bra_man_endsum");
		TASK::SET_SCENARIO_GROUP_ENABLED("BRA_MANOR_UNTIL_BRAITHWAITES_3", false);
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-842138123, true);
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1230241088, false);
		AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_braithwaite_manor_burnt", true, true);
		func_269(-434746250, 1);
		func_322(93, 16);
		if (!PED::_0x91A5F9CBEBB9D936(Global_1934765->f_1) && !bParam1)
		{
			Global_1934765->f_1 = PED::ADD_SCENARIO_BLOCKING_AREA(989.8797f, -1787.977f, 44.5697f, 1034.25f, -1752.225f, 59.7424f, false, 15);
		}
	}
	if (!func_310(-270094635))
	{
		func_302(1355914142);
		if (!VOLUME::_0x92A78D0BEDB332A3(Global_1934765->f_16))
		{
			Global_1934765->f_16 = VOLUME::_CREATE_VOLUME_CYLINDER(2846.517f, -1300.918f, 45.457f, 0f, 0f, -42f, 4.584f, 3.041f, 10.079f);
			PATHFIND::_0x19C7567D2F2287D6(Global_1934765->f_16, 7);
		}
	}
	else
	{
		func_313(1355914142);
		if (VOLUME::_0x92A78D0BEDB332A3(Global_1934765->f_16))
		{
			PATHFIND::_0x2C87C3E1C7B96EE2(Global_1934765->f_16);
			VOLUME::_0x43F867EF5C463A53(Global_1934765->f_16);
		}
	}
	if (func_310(-1666278201))
	{
		func_313(706203603);
		func_302(937192284);
	}
	else
	{
		func_313(937192284);
		func_302(706203603);
	}
	if (func_310(405586984))
	{
		func_313(-1052023588);
		func_313(-745087561);
		func_328("old_nav_wall_hole");
		func_328("old_nav_nts3_start");
		func_328("old_nav_nts3_end");
		func_302(944314155);
		func_327("old_nav_wall_fill");
	}
	else if (func_310(1509509592))
	{
		func_313(-1052023588);
		func_328("old_nav_wall_fill");
		func_328("old_nav_wall_hole");
		func_328("old_nav_nts3_end");
		func_302(944314155);
		func_302(-745087561);
		func_327("old_nav_nts3_start");
	}
	else if (func_310(-959357075))
	{
		func_313(944314155);
		func_328("old_nav_wall_fill");
		func_328("old_nav_nts3_start");
		func_328("old_nav_wall_hole");
		func_302(-1052023588);
		func_302(-745087561);
		func_327("old_nav_nts3_end");
	}
	else if (func_310(-1311865656))
	{
		func_313(944314155);
		func_313(-745087561);
		func_328("old_nav_wall_fill");
		func_328("old_nav_nts3_start");
		func_328("old_nav_nts3_end");
		func_302(-1052023588);
		func_327("old_nav_wall_hole");
	}
	if (func_310(2091701359))
	{
		func_302(-1081335485);
	}
	else
	{
		func_313(-1081335485);
	}
	if (func_310(1376646519))
	{
		func_313(-920505696);
		func_313(281772765);
		func_313(-516683274);
		func_314(135);
		func_314(136);
		func_314(137);
		func_314(138);
		func_328("nav_std_bank_start");
		func_328("nav_std_bank_shootout");
		func_328("nav_std_bank_dest");
		func_304(134);
		func_302(1017355491);
		func_302(-1004522372);
	}
	else if (func_310(931649776))
	{
		func_313(-920505696);
		func_313(-516683274);
		func_314(135);
		func_314(136);
		func_314(137);
		func_314(138);
		func_328("nav_std_bank_shootout");
		func_328("nav_std_bank_dest");
		func_302(-1004522372);
		func_304(134);
		func_302(1017355491);
		func_302(281772765);
		func_327("nav_std_bank_start");
	}
	else if (func_310(-434590080))
	{
		func_313(-920505696);
		func_313(-516683274);
		func_314(134);
		func_314(137);
		func_328("nav_std_bank_start");
		func_328("nav_std_bank_dest");
		func_302(-1004522372);
		func_304(135);
		func_304(136);
		func_304(138);
		func_302(1017355491);
		func_302(281772765);
		func_327("nav_std_bank_shootout");
	}
	else if (func_310(1743048395))
	{
		func_313(1017355491);
		func_313(281772765);
		func_313(-1004522372);
		func_314(134);
		func_314(135);
		func_304(137);
		func_304(138);
		func_328("nav_std_bank_start");
		func_328("nav_std_bank_shootout");
		func_302(-516683274);
		func_302(-920505696);
		func_327("nav_std_bank_dest");
	}
	else if (func_310(449774763))
	{
		func_313(1017355491);
		func_313(-516683274);
		func_313(281772765);
		func_314(134);
		func_314(135);
		func_314(136);
		func_314(138);
		func_302(-1004522372);
		func_304(137);
	}
	if (func_310(-764163380))
	{
		func_314(140);
		func_304(139);
	}
	else
	{
		func_314(139);
		func_304(140);
	}
	if (func_310(-349064220))
	{
		func_302(140744122);
		func_302(-1795618779);
		func_327("hso_post_caravan");
	}
	else
	{
		func_313(140744122);
		func_313(-1795618779);
		func_328("hso_post_caravan");
	}
	if (func_310(1776302352))
	{
		func_302(1691578074);
		func_302(-1936937394);
		func_327("dewclm_post_caravan");
	}
	else
	{
		func_313(1691578074);
		func_313(-1936937394);
		func_328("dewclm_post_caravan");
	}
	if (func_310(-523522517))
	{
		func_302(-1130111983);
		func_302(-1015786727);
	}
	else
	{
		func_313(-1130111983);
		func_313(-1015786727);
	}
	if (func_310(1591451572))
	{
		func_302(560821199);
	}
	else
	{
		func_313(560821199);
	}
	if (func_310(1177464213))
	{
		func_313(-313831898);
		func_313(634920011);
		func_302(1694736240);
		func_302(2035758463);
	}
	else
	{
		func_313(1694736240);
		func_313(2035758463);
		func_302(-313831898);
		func_302(634920011);
	}
	func_329();
	func_330();
	if (func_310(459290420))
	{
		func_302(474287981);
		func_302(-338553155);
		func_302(-1636879249);
		func_302(205214733);
		func_313(-1019727725);
		func_304(186);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", true);
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", true);
		func_331(-1170496998);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", false);
		if (func_58())
		{
			GRAPHICS::_SET_SNOW_COVERAGE_TYPE(0);
		}
	}
	else if (func_310(1884271742))
	{
		func_302(867231253);
		func_302(-323126593);
		func_302(-1316886711);
		func_302(205214733);
		func_313(-1019727725);
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", false);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", false);
		GRAPHICS::_SET_SNOW_COVERAGE_TYPE(0);
	}
	else if (func_310(-2038424081))
	{
		func_302(867231253);
		func_302(-1670453688);
		func_302(-323126593);
		func_302(-1316886711);
		func_302(205214733);
		func_327("col_nav_wint_end");
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", false);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", false);
		if (func_58())
		{
			GRAPHICS::_SET_SNOW_COVERAGE_TYPE(1);
		}
	}
	else if (func_310(753127042))
	{
		func_302(1248111234);
		func_302(-1670453688);
		func_302(-323126593);
		func_302(-1316886711);
		func_302(205214733);
		func_327("col_nav_wint2_post");
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", false);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", false);
		if (func_58())
		{
			GRAPHICS::_SET_SNOW_COVERAGE_TYPE(1);
		}
	}
	else if (func_310(-1187950766))
	{
		func_302(474287981);
		func_302(-1670453688);
		func_302(-1636879249);
		func_302(-338553155);
		func_304(186);
		func_327("col_nav_wint1_cabin_duringfire");
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", false);
		if (func_58())
		{
			GRAPHICS::_SET_SNOW_COVERAGE_TYPE(1);
		}
	}
	else if (func_310(356365161))
	{
		func_302(474287981);
		func_302(-1670453688);
		func_302(-338553155);
		func_302(-1636879249);
		func_327("col_nav_wint1_cabin_prefire");
		func_304(186);
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", false);
		if (func_58())
		{
			GRAPHICS::_SET_SNOW_COVERAGE_TYPE(1);
		}
	}
	else if (func_310(-939420910))
	{
		func_302(-1451954802);
		func_302(474287981);
		func_302(-717025835);
		func_302(-338553155);
		func_302(-1636879249);
		func_304(186);
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", true);
		func_331(-1170496998);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", false);
		if (func_58())
		{
			GRAPHICS::_SET_SNOW_COVERAGE_TYPE(1);
		}
	}
	if (func_310(-1170496998))
	{
		func_302(-1306375743);
		func_302(-743781837);
		func_302(2114706334);
		if (!VOLUME::_0x92A78D0BEDB332A3(Global_1934765->f_15))
		{
			Global_1934765->f_15 = VOLUME::_CREATE_VOLUME_CYLINDER(-1353.573f, 2424.476f, 306.385f, 0f, 0f, 0f, 0.4f, 0.4f, 1f);
			PATHFIND::_0x19C7567D2F2287D6(Global_1934765->f_15, 7);
		}
		func_304(149);
		func_304(150);
		func_304(151);
		func_304(152);
	}
	else
	{
		func_313(-1306375743);
		func_313(-743781837);
		func_313(2114706334);
		if (VOLUME::_0x92A78D0BEDB332A3(Global_1934765->f_15))
		{
			PATHFIND::_0x2C87C3E1C7B96EE2(Global_1934765->f_15);
			VOLUME::_0x43F867EF5C463A53(Global_1934765->f_15);
		}
		func_314(149);
		func_314(150);
		func_314(151);
		func_314(152);
	}
	func_332();
	if (func_310(2080210939))
	{
		func_302(-1055748784);
	}
	else
	{
		func_313(-1055748784);
	}
	if (func_310(1485195808))
	{
		func_304(147);
		func_314(148);
	}
	else
	{
		func_314(147);
		func_304(148);
	}
	if (func_310(-1532284567))
	{
		if (TASK::DOES_SCENARIO_GROUP_EXIST("BVH_GANG_hideout"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("BVH_GANG_hideout", true);
		}
	}
	else if (TASK::DOES_SCENARIO_GROUP_EXIST("BVH_GANG_hideout"))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("BVH_GANG_hideout", false);
	}
	if (func_310(2127577956))
	{
		func_302(-1070054959);
		func_313(-2014929982);
	}
	else
	{
		func_302(-2014929982);
		func_313(-1070054959);
	}
	if (func_310(-524145696))
	{
		func_302(809554858);
		func_302(1810083187);
		func_313(159921796);
		func_313(-1739900853);
		func_302(2113454609);
		func_302(-520163372);
		func_313(-90228526);
		func_314(17);
		func_314(2);
		func_314(4);
		func_304(1);
		func_304(5);
		func_333(931206119, 1, 0, 0, 0, 0, 0, 0);
		func_333(1783003505, 1, 0, 0, 0, 0, 0, 0);
		func_302(-646014955);
		func_328("shb_nav_camp_running");
		func_328("shb_nav_camp_teardown");
		func_313(1265596420);
		func_328("shb_nav_camp_01");
		func_327("shb_nav_camp_00");
		if (TASK::DOES_SCENARIO_GROUP_EXIST("SHB_HIDEOUT_CONFEDERATES"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("SHB_HIDEOUT_CONFEDERATES", true);
		}
		if (TASK::DOES_SCENARIO_GROUP_EXIST("HIDEOUT_SHADYBELLE_NOT_IN_COMBAT"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("HIDEOUT_SHADYBELLE_NOT_IN_COMBAT", false);
		}
	}
	else
	{
		func_328("shb_nav_camp_00");
		func_328("shb_nav_camp_01");
		func_313(809554858);
		func_313(1265596420);
		func_313(1810083187);
		func_333(931206119, 0, 0, 0, 1, 0, 0, 0);
		func_333(1783003505, 0, 0, 0, 1, 0, 0, 0);
		func_313(-646014955);
		if (func_310(282809459))
		{
			func_314(5);
			func_314(17);
			func_314(1);
			func_314(2);
			func_304(4);
			func_313(-520163372);
			func_302(-90228526);
			func_302(159921796);
			func_313(-1739900853);
			func_313(2113454609);
		}
		else if (func_310(1626481264))
		{
			func_314(5);
			func_314(4);
			func_314(1);
			func_314(2);
			func_304(17);
			func_313(-520163372);
			func_302(-90228526);
			func_302(159921796);
			func_302(-1739900853);
			func_313(2113454609);
		}
		else
		{
			func_313(-90228526);
			func_313(159921796);
			func_313(-1739900853);
			func_302(2113454609);
		}
		func_314(1);
		if (TASK::DOES_SCENARIO_GROUP_EXIST("SHB_HIDEOUT_CONFEDERATES"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("SHB_HIDEOUT_CONFEDERATES", false);
		}
		if (TASK::DOES_SCENARIO_GROUP_EXIST("HIDEOUT_SHADYBELLE_NOT_IN_COMBAT"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("HIDEOUT_SHADYBELLE_NOT_IN_COMBAT", false);
		}
	}
	if (func_310(-63926460))
	{
		func_313(1929440211);
		func_313(2126897368);
		func_302(-833857740);
		func_302(-825836321);
		if (func_310(1665756137))
		{
			func_302(-1718055184);
			func_328("han_nav_endless_summer");
			func_327("han_nav_endless_summer_marston4");
		}
		else
		{
			func_313(-1718055184);
			func_328("han_nav_endless_summer_marston4");
			func_327("han_nav_endless_summer");
		}
	}
	else
	{
		func_313(-833857740);
		func_313(-825836321);
		func_313(-1718055184);
		func_328("han_nav_endless_summer");
		func_328("han_nav_endless_summer_marston4");
		func_302(1929440211);
	}
	if (func_310(374115931))
	{
		func_304(164);
		func_327("bvh_nav_endless_summer");
	}
	else
	{
		func_314(164);
		func_328("bvh_nav_endless_summer");
	}
	if (func_310(1982676972))
	{
		func_304(20);
	}
	else
	{
		func_314(20);
	}
	if (func_310(-2034257789))
	{
		STREAMING::_REQUEST_IMAP(1817635528);
		func_314(22);
		func_314(24);
		func_304(21);
		func_304(23);
	}
	else
	{
		STREAMING::_REMOVE_IMAP(1817635528);
		func_314(21);
		func_314(23);
		func_304(22);
		func_304(24);
	}
	if (func_310(-1014145132))
	{
		func_304(200);
	}
	else
	{
		func_314(200);
	}
	if (func_310(-1840704908))
	{
		func_304(201);
	}
	else
	{
		func_314(201);
	}
	if (func_27() == -1)
	{
		if (func_310(-1053549743))
		{
			func_334(65536, 1);
		}
		else
		{
			func_334(65536, 0);
		}
	}
	func_335();
	if (func_310(-2073072369))
	{
		func_302(1343484786);
		func_302(1989074279);
		func_327("sad3_nav_rhodes_shootout_00");
	}
	else if (func_310(-1674179981))
	{
		if (func_310(-1053549743))
		{
			func_302(1871051363);
			func_302(-2144587490);
			func_302(1033721560);
			func_327("rho_nav_grave_norm_gry3_on");
		}
		else
		{
			func_302(1343484786);
			func_302(-1671953459);
			func_302(1871051363);
			func_302(-2144587490);
			func_327("rho_nav_grave_norm_gry3_off");
		}
	}
	else if (func_310(-1835851517))
	{
		if (func_310(-1053549743))
		{
			func_302(-2144587490);
			func_302(1033721560);
			func_327("rho_nav_grave_dug_gry3_on");
		}
		else
		{
			func_302(1343484786);
			func_302(-1671953459);
			func_302(-2144587490);
			func_327("rho_nav_grave_dug_gry3_off");
		}
	}
	else if (func_310(-1838352012))
	{
		if (func_310(-1053549743))
		{
			func_302(146746575);
			func_302(1033721560);
			func_327("rho_nav_grave_norm_gry3_on");
		}
		else
		{
			func_302(1343484786);
			func_302(-1671953459);
			func_302(146746575);
			func_327("rho_nav_grave_norm_gry3_off");
		}
	}
	if (func_310(-644722288))
	{
		func_313(1882605165);
		func_302(869642051);
	}
	else
	{
		func_313(869642051);
		func_302(1882605165);
	}
	if (func_310(1691618738))
	{
		func_313(-184821200);
		func_302(-490818122);
		func_302(1412515639);
		func_302(-1377139506);
	}
	else
	{
		func_302(-184821200);
		func_313(-490818122);
		func_313(1412515639);
		func_313(-1377139506);
	}
	if (func_310(-741351766))
	{
		func_314(130);
		func_304(131);
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765->f_12) && !bParam1)
		{
			Global_1934765->f_12 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(1351.383f, -1380.619f, 84.314f, 1.5f, 3f, 1.5f, 347f, false, 7);
		}
	}
	else
	{
		func_314(131);
		func_304(130);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765->f_12))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765->f_12));
		}
	}
	if (func_310(-1717960576))
	{
		func_314(133);
		func_304(132);
	}
	else if (func_310(210001842))
	{
		func_314(132);
		func_304(133);
	}
	if (func_310(-1164215952))
	{
		func_313(1603294144);
		func_302(349486662);
		func_314(144);
		func_304(143);
	}
	else
	{
		func_313(349486662);
		func_302(1603294144);
		func_314(143);
		func_304(144);
	}
	if (func_310(-1236261996))
	{
		func_313(897455211);
		func_313(774477221);
		func_302(1136898294);
		func_302(1097534152);
		func_314(146);
		func_304(145);
	}
	else
	{
		func_313(1136898294);
		func_313(1097534152);
		func_302(897455211);
		func_302(774477221);
		func_314(145);
		func_304(146);
	}
	if (func_310(-1799960545))
	{
		func_314(170);
		func_304(169);
	}
	else
	{
		func_314(169);
		func_304(170);
	}
	if (func_310(-628542779))
	{
		func_304(180);
	}
	else
	{
		func_314(180);
	}
	if (func_310(1500064347))
	{
		func_302(724436573);
		func_313(-1475403379);
	}
	else
	{
		func_302(-1475403379);
		func_313(724436573);
	}
	if (func_310(-1741667789))
	{
		func_314(179);
	}
	else
	{
		func_304(179);
	}
	if (func_310(-853383233))
	{
		if (func_27() == -1)
		{
			if (!func_336(70, 32))
			{
				func_320(70, 32);
				func_337(70);
			}
		}
	}
	else if (func_27() == -1)
	{
		if (func_336(70, 32))
		{
			func_319(70, 32);
			func_338(70);
		}
	}
	if (func_310(-334729750))
	{
		func_302(1138093977);
		func_327("wat_nav_grave");
	}
	else
	{
		func_313(1138093977);
		func_328("wat_nav_grave");
	}
	if (func_310(1926308480))
	{
		func_313(1849913721);
		func_302(573576705);
	}
	else if (func_310(280705402))
	{
		func_302(1849913721);
		func_313(573576705);
	}
	else if (func_310(1766284049))
	{
		func_313(1849913721);
		func_313(573576705);
	}
	if (func_310(-150493654))
	{
		func_313(-848315456);
		func_313(105426297);
		func_313(2095421392);
		func_313(-1614141377);
		func_313(45121961);
		func_313(-7594117);
		func_313(1388161943);
		func_302(-642132908);
		PATHFIND::_0xAFE2AE66F6251C66(-1177.246f, -19.60884f, 38f, -1170.786f, -12.71267f, 42f, 6, 1);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(&(Global_1934765->f_5[0])))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(Global_1934765->f_5[0]);
		}
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(&(Global_1934765->f_5[0])) && !bParam1)
		{
			Global_1934765->f_5[0] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1182.66f, -30.405f, 44.453f, 1f, 1f, 6f, 0f, false, 7);
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(&(Global_1934765->f_5[1])))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(Global_1934765->f_5[1]);
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(&(Global_1934765->f_5[2])))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(Global_1934765->f_5[2]);
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(&(Global_1934765->f_5[3])))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(Global_1934765->f_5[3]);
		}
		func_328("utp2_nav_tree_fallen");
	}
	else if (func_310(-1271608261))
	{
		func_313(-642132908);
		func_313(105426297);
		func_313(-1614141377);
		func_313(45121961);
		func_313(-7594117);
		func_313(1388161943);
		func_302(2095421392);
		func_302(-848315456);
		PATHFIND::_0xAFE2AE66F6251C66(-1176.011f, -32.44423f, 38f, -1186.829f, -18.19722f, 45f, 6, 1);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(&(Global_1934765->f_5[0])))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(Global_1934765->f_5[0]);
		}
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(&(Global_1934765->f_5[0])) && !bParam1)
		{
			Global_1934765->f_5[0] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1179.545f, -25.3265f, 42.664f, 1f, 13f, 1f, 15f, false, 7);
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(&(Global_1934765->f_5[1])))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(Global_1934765->f_5[1]);
		}
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(&(Global_1934765->f_5[1])) && !bParam1)
		{
			Global_1934765->f_5[1] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1161.862f, -27.8574f, 40.3872f, 1f, 1f, 9f, -7.41f, false, 7);
		}
		func_328("utp2_nav_tree_fallen");
	}
	else if (func_310(1846061697))
	{
		func_313(-642132908);
		func_313(2095421392);
		func_313(105426297);
		func_313(-7594117);
		func_302(45121961);
		func_302(-1614141377);
		func_302(-848315456);
		func_302(1388161943);
		PATHFIND::_0xAFE2AE66F6251C66(-1176.011f, -32.44423f, 38f, -1186.829f, -18.19722f, 45f, 6, 1);
		PATHFIND::_0xAFE2AE66F6251C66(-1174.544f, -4.74933f, 38f, -1163.424f, -13.43965f, 42f, 6, 1);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(&(Global_1934765->f_5[0])))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(Global_1934765->f_5[0]);
		}
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(&(Global_1934765->f_5[0])) && !bParam1)
		{
			Global_1934765->f_5[0] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1179.545f, -25.3265f, 41.664f, 1f, 13f, 3f, 15f, false, 7);
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(&(Global_1934765->f_5[1])))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(Global_1934765->f_5[1]);
		}
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(&(Global_1934765->f_5[1])) && !bParam1)
		{
			Global_1934765->f_5[1] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1161.862f, -27.8574f, 40.3872f, 1f, 1f, 9f, -7.41f, false, 7);
		}
		func_327("utp2_nav_tree_fallen");
	}
	else if (func_310(-1145519186))
	{
		func_313(-642132908);
		func_313(-848315456);
		func_313(-1614141377);
		func_313(45121961);
		func_313(2095421392);
		func_313(-7594117);
		func_313(1388161943);
		func_302(105426297);
		PATHFIND::_0xAFE2AE66F6251C66(-1177.246f, -19.60884f, 38f, -1170.786f, -12.71267f, 42f, 6, 1);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(&(Global_1934765->f_5[0])))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(Global_1934765->f_5[0]);
		}
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(&(Global_1934765->f_5[0])) && !bParam1)
		{
			Global_1934765->f_5[0] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1182.66f, -30.405f, 44.453f, 1f, 1f, 6f, 0f, false, 7);
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(&(Global_1934765->f_5[1])))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(Global_1934765->f_5[1]);
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(&(Global_1934765->f_5[2])))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(Global_1934765->f_5[2]);
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(&(Global_1934765->f_5[3])))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(Global_1934765->f_5[3]);
		}
		func_328("utp2_nav_tree_fallen");
	}
	if (!func_339(51))
	{
		if (func_310(1485494263))
		{
			func_313(1672215059);
			func_313(-1177027698);
			func_313(23211744);
			func_313(604668055);
			func_313(1324480450);
			func_302(1708195603);
			func_327("nts2_fallen_tree_ridge");
		}
		else
		{
			func_313(23211744);
			func_313(604668055);
			func_313(1708195603);
			func_302(1324480450);
			func_302(1672215059);
			func_302(-1177027698);
			func_328("nts2_fallen_tree_ridge");
		}
	}
	if (func_27() == -1)
	{
		if (func_310(-811637947))
		{
			if (func_336(497, 32))
			{
				func_319(497, 32);
				func_338(497);
			}
			if (func_336(498, 32))
			{
				func_319(498, 32);
				func_338(498);
			}
		}
		else
		{
			if (!func_336(497, 32))
			{
				func_320(497, 32);
				func_337(497);
			}
			if (!func_336(498, 32))
			{
				func_320(498, 32);
				func_337(498);
			}
		}
	}
	if (func_310(106479759))
	{
		func_313(-1403908542);
		func_313(1598834669);
		func_313(1299817544);
		func_313(1204787444);
		func_313(66523468);
		func_313(2040259178);
		func_313(1947806010);
		func_328("str_nav_construction_stage_0");
		func_328("str_nav_construction_stage_1");
		func_328("str_nav_construction_stage_2");
		func_328("str_nav_construction_stage_3");
		func_302(1924458218);
		func_327("utp1_bridge_cover");
	}
	else
	{
		func_313(1924458218);
		func_328("utp1_bridge_cover");
		if (func_310(198200492))
		{
			func_313(1299817544);
			func_313(1204787444);
			func_313(66523468);
			func_313(2040259178);
			func_313(1947806010);
			func_328("str_nav_construction_stage_1");
			func_328("str_nav_construction_stage_2");
			func_328("str_nav_construction_stage_3");
			func_302(-1403908542);
			func_302(1598834669);
			func_327("str_nav_construction_stage_0");
			if (func_27() == -1)
			{
				_NAMESPACE48::_0x187D65F3AEC5D679(-1066735787, "Strawberry/Str_Wood_Chop_Wife");
			}
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_INACTIVE", true);
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_ACTIVE", false);
		}
		else if (func_310(-1124061431))
		{
			func_313(-1403908542);
			func_313(1598834669);
			func_313(1204787444);
			func_313(66523468);
			func_313(2040259178);
			func_313(1947806010);
			func_328("str_nav_construction_stage_0");
			func_328("str_nav_construction_stage_2");
			func_328("str_nav_construction_stage_3");
			func_302(1299817544);
			func_327("str_nav_construction_stage_1");
			if (func_27() == -1)
			{
				_NAMESPACE48::_0x187D65F3AEC5D679(-1066735787, "Strawberry/Construction_House_Active/Str_Wood_Chop_Wife");
			}
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_INACTIVE", false);
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_ACTIVE", true);
		}
		else if (func_310(52706132))
		{
			func_313(-1403908542);
			func_313(1598834669);
			func_313(1299817544);
			func_313(66523468);
			func_313(2040259178);
			func_313(1947806010);
			func_328("str_nav_construction_stage_0");
			func_328("str_nav_construction_stage_1");
			func_328("str_nav_construction_stage_3");
			func_302(1204787444);
			func_327("str_nav_construction_stage_2");
			if (func_27() == -1)
			{
				_NAMESPACE48::_0x187D65F3AEC5D679(-1066735787, "Strawberry/Construction_House_Active/Str_Wood_Chop_Wife");
			}
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_INACTIVE", false);
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_ACTIVE", true);
		}
		else if (func_310(-259123672))
		{
			func_313(-1403908542);
			func_313(1598834669);
			func_313(1299817544);
			func_313(1204787444);
			func_328("str_nav_construction_stage_0");
			func_328("str_nav_construction_stage_1");
			func_328("str_nav_construction_stage_2");
			func_302(66523468);
			func_302(2040259178);
			func_302(1947806010);
			func_327("str_nav_construction_stage_3");
			if (func_27() == -1)
			{
				_NAMESPACE48::_0x187D65F3AEC5D679(-1066735787, "Strawberry/Construction_House_Active/Str_Wood_Chop_Wife");
			}
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_INACTIVE", false);
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_ACTIVE", true);
		}
	}
	if (func_310(-356975260))
	{
		func_313(73781828);
		func_302(-391567710);
	}
	else
	{
		func_313(-391567710);
		func_302(73781828);
	}
	if (func_310(-2106214197))
	{
	}
	else if (func_310(-1029225159))
	{
	}
	if (func_310(757752139))
	{
		func_314(168);
	}
	else
	{
		func_304(168);
	}
	if (func_310(1609506757))
	{
		func_302(-205116461);
		func_302(-1490034522);
		func_313(-1473336090);
		func_313(-1013403664);
		if (!Global_1934765->f_289)
		{
			Global_1934765->f_401 = -1;
			Global_1934765->f_289 = 1;
		}
		func_314(158);
		if (!func_339(47))
		{
			func_304(159);
		}
		else
		{
			func_314(159);
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765->f_14))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765->f_14));
		}
		if (func_310(439465264))
		{
			func_304(155);
			func_314(154);
			func_304(157);
			func_314(156);
		}
		else
		{
			func_304(156);
			func_340(156);
			func_304(154);
			func_314(155);
			func_314(157);
		}
	}
	else
	{
		func_302(-1473336090);
		func_302(-1013403664);
		func_313(-205116461);
		func_313(-1490034522);
		Global_1934765->f_289 = 0;
		func_314(154);
		func_314(155);
		func_314(157);
		func_314(156);
		func_314(159);
		func_304(158);
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765->f_14) && !bParam1)
		{
			Global_1934765->f_14 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(2698.198f, -1187.154f, 51.26f, 3.878f, 0.326f, 3.352f, func_341(-179f), false, 7);
		}
	}
	if (func_310(-2021582629) && func_342())
	{
		func_313(432272547);
		func_302(204868257);
		func_327("nav_sdn_fundraiser");
	}
	else
	{
		func_313(204868257);
		func_302(432272547);
		func_328("nav_sdn_fundraiser");
	}
	if (func_310(-1232809834))
	{
		func_313(206289712);
		func_302(-1225383143);
	}
	else
	{
		func_313(-1225383143);
		func_302(206289712);
	}
	if (func_310(141950038))
	{
		func_313(-473077489);
		func_302(619024057);
		func_302(-836433697);
		func_325(586229709, 1);
	}
	else
	{
		func_313(-836433697);
		func_313(619024057);
		func_302(-473077489);
		func_269(586229709, 1);
	}
	if (func_310(544152906))
	{
		func_313(1821956151);
		func_302(-704461521);
	}
	else
	{
		func_313(-704461521);
		func_302(1821956151);
	}
	if (func_310(26054262))
	{
		func_304(166);
	}
	else
	{
		func_314(166);
	}
	if (func_310(-503955743))
	{
		func_304(167);
	}
	else
	{
		func_314(167);
	}
	if (func_310(945612176))
	{
		func_304(161);
		func_304(163);
		func_314(160);
		func_314(162);
	}
	else
	{
		func_304(160);
		func_304(162);
		func_314(161);
		func_314(163);
	}
	if (func_310(-1706438978))
	{
		func_304(142);
		func_314(141);
	}
	else
	{
		func_314(141);
		func_314(142);
	}
	if (func_310(94263042))
	{
		func_302(-1499162505);
		func_302(1916362667);
		if (func_310(-2106445152))
		{
			func_313(-1832103801);
			func_314(230);
			func_328("fin2_micah_hideout");
			func_327("fin2_micah_hideout_abandon");
		}
		else
		{
			func_302(-1832103801);
			func_304(230);
			func_328("fin2_micah_hideout_abandon");
			func_327("fin2_micah_hideout");
		}
	}
	else
	{
		func_313(-1499162505);
		func_313(1916362667);
		func_313(-1832103801);
		func_314(230);
		func_328("fin2_micah_hideout");
		func_328("fin2_micah_hideout_abandon");
	}
	if (func_310(-25901845))
	{
		func_313(-468702164);
		func_314(192);
		func_302(-1436188587);
		func_304(191);
	}
	else
	{
		func_313(-1436188587);
		func_314(191);
		func_302(-468702164);
		func_304(192);
	}
	if (func_310(-75024673))
	{
		func_302(1573766063);
	}
	else
	{
		func_313(1573766063);
	}
	if (func_310(1250636944))
	{
		func_302(-892659042);
	}
	else
	{
		func_313(-892659042);
	}
	if (func_310(-1831552326))
	{
		func_304(194);
		func_314(195);
	}
	else
	{
		func_304(195);
		func_314(194);
	}
	if (func_310(-1151084372))
	{
		func_304(196);
	}
	else
	{
		func_314(196);
	}
	if (func_310(1064154891))
	{
		func_304(19);
		func_314(18);
	}
	else
	{
		func_304(18);
		func_314(19);
	}
	if (func_310(1822001510))
	{
	}
	else if (func_310(-1612662716))
	{
	}
	if (func_310(689930684))
	{
		func_304(176);
	}
	else
	{
		func_314(176);
	}
	if (func_310(-1957523409))
	{
		func_304(177);
	}
	else
	{
		func_314(177);
	}
	if (func_310(1306158345))
	{
		func_313(943998860);
		func_313(1949854427);
		func_313(580700069);
		func_313(1347068672);
		func_328("HKK_Trashed_Wagons");
		func_328("HKK_Part_Fixed");
		func_328("HKK_Camp_Only");
		func_343(1949854427);
	}
	else if (func_310(1952610440))
	{
		func_313(943998860);
		func_302(1949854427);
		func_302(580700069);
		func_302(1347068672);
		func_328("HKK_Part_Fixed");
		func_328("HKK_Camp_Only");
		func_327("HKK_Trashed_Wagons");
		func_344(1949854427);
	}
	else if (func_310(-223469678))
	{
		func_302(943998860);
		func_302(1949854427);
		func_313(580700069);
		func_313(1347068672);
		func_328("HKK_Trashed_Wagons");
		func_328("HKK_Camp_Only");
		func_327("HKK_Part_Fixed");
		func_344(1949854427);
	}
	else if (func_310(-404698347))
	{
		func_302(943998860);
		func_313(1949854427);
		func_313(580700069);
		func_313(1347068672);
		func_328("HKK_Trashed_Wagons");
		func_328("HKK_Part_Fixed");
		func_327("HKK_Camp_Only");
		func_344(1949854427);
	}
	else if (func_310(1517904467))
	{
		func_313(943998860);
		func_313(1949854427);
		func_313(580700069);
		func_313(1347068672);
		func_328("HKK_Trashed_Wagons");
		func_328("HKK_Part_Fixed");
		func_328("HKK_Camp_Only");
		func_343(1949854427);
	}
	if (func_310(-1405998267))
	{
		func_302(2015532863);
	}
	else
	{
		func_313(2015532863);
	}
	if (func_310(-468693731))
	{
		func_313(-800942395);
		func_302(-741366935);
	}
	else
	{
		func_313(-741366935);
		func_302(-800942395);
	}
	if (func_310(-238080464))
	{
		func_302(-1579403437);
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765->f_10) && !bParam1)
		{
			Global_1934765->f_10 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-304.439f, 783.08f, 117.11f, 1.909f, 4.17f, 3f, 9.6f, false, 7);
		}
	}
	else
	{
		func_313(-1579403437);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765->f_10))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765->f_10));
		}
	}
	if (func_310(1607768502))
	{
		func_302(808576710);
		func_313(-775951892);
		func_313(1547403545);
		func_313(1431947993);
		func_313(137316925);
		func_313(-660075384);
	}
	else if (func_310(-1852605133))
	{
		func_302(1547403545);
		func_313(-775951892);
		func_313(808576710);
		func_313(1431947993);
		func_313(137316925);
		func_313(-660075384);
	}
	else if (func_310(-129643890))
	{
		func_302(-660075384);
		func_313(-775951892);
		func_313(1547403545);
		func_313(808576710);
		func_313(1431947993);
		func_313(137316925);
	}
	else if (func_310(-1433686245))
	{
		func_302(137316925);
		func_313(-775951892);
		func_313(1547403545);
		func_313(808576710);
		func_313(1431947993);
		func_313(-660075384);
	}
	else
	{
		func_302(-775951892);
		func_313(1547403545);
		func_313(808576710);
		func_313(1431947993);
		func_313(137316925);
		func_313(-660075384);
	}
	if (func_310(192515737))
	{
		func_302(1104143966);
		func_313(-2142987163);
		func_313(1027093524);
		func_313(1879779330);
		func_313(-1617847332);
		func_313(317070801);
	}
	else if (func_310(426191476))
	{
		func_302(-2142987163);
		func_313(1104143966);
		func_313(1027093524);
		func_313(1879779330);
		func_313(-1617847332);
		func_313(317070801);
	}
	else if (func_310(187862543))
	{
		func_302(1027093524);
		func_313(1104143966);
		func_313(-2142987163);
		func_313(1879779330);
		func_313(-1617847332);
		func_313(317070801);
	}
	else if (func_310(417081698))
	{
		func_302(1879779330);
		func_313(1104143966);
		func_313(-2142987163);
		func_313(1027093524);
		func_313(-1617847332);
		func_313(317070801);
	}
	else if (func_310(791041526))
	{
		func_302(-1617847332);
		func_313(1104143966);
		func_313(-2142987163);
		func_313(1027093524);
		func_313(1879779330);
		func_313(317070801);
	}
	else
	{
		func_302(317070801);
		func_313(1104143966);
		func_313(-2142987163);
		func_313(1027093524);
		func_313(1879779330);
		func_313(-1617847332);
	}
	if (func_345(45))
	{
		if (func_310(-1838712533))
		{
			func_302(-771786794);
			func_313(-1267247536);
			func_313(-468635897);
			func_313(535384482);
			func_313(1088045886);
			func_313(-1678761663);
			func_313(1724413302);
			func_313(-626641013);
		}
		else if (func_310(1140218954))
		{
			func_302(-1267247536);
			func_313(-468635897);
			func_313(-771786794);
			func_313(535384482);
			func_313(1088045886);
			func_313(-1678761663);
			func_313(1724413302);
			func_313(-626641013);
		}
		else
		{
			func_302(-468635897);
			func_313(-771786794);
			func_313(-1267247536);
			func_313(535384482);
			func_313(1088045886);
			func_313(-1678761663);
			func_313(1724413302);
			func_313(-626641013);
		}
	}
	else if (func_310(-1257057567))
	{
		func_302(1088045886);
		func_313(-1678761663);
		func_313(1724413302);
		func_313(-626641013);
		func_313(535384482);
		func_313(-771786794);
		func_313(-1267247536);
		func_313(-468635897);
	}
	else if (func_310(-1419919497))
	{
		func_302(-1678761663);
		func_313(1724413302);
		func_313(-626641013);
		func_313(535384482);
		func_313(1088045886);
		func_313(-771786794);
		func_313(-1267247536);
		func_313(-468635897);
	}
	else if (func_310(-1718674470))
	{
		func_302(1724413302);
		func_313(-626641013);
		func_313(535384482);
		func_313(1088045886);
		func_313(-1678761663);
		func_313(-771786794);
		func_313(-1267247536);
		func_313(-468635897);
	}
	else if (func_310(-35658630))
	{
		func_302(-626641013);
		func_313(535384482);
		func_313(1088045886);
		func_313(-1678761663);
		func_313(1724413302);
		func_313(-771786794);
		func_313(-1267247536);
		func_313(-468635897);
	}
	else
	{
		func_302(535384482);
		func_313(1088045886);
		func_313(-1678761663);
		func_313(1724413302);
		func_313(-626641013);
		func_313(-771786794);
		func_313(-1267247536);
		func_313(-468635897);
	}
	if (func_310(-108307814))
	{
		func_313(-205505701);
		func_302(-51262018);
	}
	else
	{
		func_313(-51262018);
		func_302(-205505701);
	}
	if (func_310(-1123615607))
	{
		func_313(874022542);
		func_313(-2105071972);
		func_302(552030279);
		func_327("disco_nav_alchemist_house_burnt");
	}
	else
	{
		func_313(552030279);
		func_328("disco_nav_alchemist_house_burnt");
		func_302(874022542);
		func_302(-2105071972);
	}
	if (func_310(-261141318))
	{
		func_302(-531198053);
	}
	else
	{
		func_313(-531198053);
	}
	func_302(-791673850);
	func_302(-395621323);
	func_302(-1799943886);
	func_302(-1436313374);
	func_302(1473078398);
	func_313(-2116659774);
	func_302(-953275122);
	func_302(-893624314);
	func_302(1193359531);
	func_302(1145227353);
	func_302(1915867459);
	func_302(98482444);
	func_302(26932594);
	func_302(-1930879809);
	func_302(46370274);
	func_302(-1279036865);
	func_302(781058494);
	func_302(1467466015);
	func_302(-363626454);
	func_302(-1314125880);
	func_302(1763246099);
	func_302(-593457329);
	func_302(274045919);
	func_302(-1047394327);
	func_302(-1535282356);
	func_302(-1816233372);
	func_302(-551038153);
	func_302(-1022426685);
	func_302(-262759679);
	func_302(976641588);
	func_302(1601053042);
	func_313(453346329);
	func_302(-1233192626);
	func_313(-620856989);
	func_302(1262164851);
	func_302(-755250900);
	func_328("disco_nav_circus_wagon_off");
	func_302(658964321);
	if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765->f_13) && !bParam1)
	{
		Global_1934765->f_13 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(2813.128f, 991.613f, 54.6f, 9.375f, 3.243f, 7.954f, 30.906f, false, 7);
	}
	func_304(202);
	func_304(231);
	if (func_310(1015669983))
	{
		func_313(317070801);
		func_302(-763477089);
	}
	else
	{
		func_313(-763477089);
		func_302(317070801);
	}
	if (func_310(1867912207))
	{
		func_314(175);
		func_304(174);
	}
	else
	{
		func_314(174);
		func_304(175);
	}
	if (func_310(-534215902))
	{
		func_314(197);
	}
	else
	{
		func_304(197);
	}
	if (func_310(-9438024))
	{
		func_314(173);
		func_304(171);
		func_304(172);
	}
	else
	{
		func_304(173);
		func_314(171);
		func_314(172);
	}
	if (func_310(-1223121209))
	{
		func_313(1886602884);
		func_313(-1640200357);
		func_302(-1280884206);
	}
	else if (func_310(630808005))
	{
		func_313(-1280884206);
		func_302(1886602884);
		func_302(-1640200357);
	}
	else
	{
		func_313(-1280884206);
		func_313(-1640200357);
		func_302(1886602884);
	}
	if (func_310(1453909576))
	{
		func_313(-2127665186);
		func_313(-451832572);
		func_313(-689352221);
		func_313(1854980771);
		func_313(325677491);
		func_313(-391187090);
		func_313(1513363974);
		func_313(-1349539327);
		func_313(1963724330);
		func_302(-1902184438);
		func_302(1236921921);
		func_302(740012805);
	}
	else if (func_310(1643531967))
	{
		func_313(-1902184438);
		func_313(-689352221);
		func_313(1236921921);
		func_313(-391187090);
		func_313(740012805);
		func_313(1963724330);
		func_302(-2127665186);
		func_302(-451832572);
		func_302(1854980771);
		func_302(325677491);
		func_302(1513363974);
		func_302(-1349539327);
	}
	else
	{
		func_313(-1902184438);
		func_313(-451832572);
		func_313(1236921921);
		func_313(325677491);
		func_313(740012805);
		func_313(-1349539327);
		func_302(-2127665186);
		func_302(-689352221);
		func_302(1854980771);
		func_302(-391187090);
		func_302(1513363974);
		func_302(1963724330);
	}
	if (func_310(1164928979))
	{
		func_313(-1366431554);
		func_302(-960136064);
	}
	else
	{
		func_313(-960136064);
		func_302(-1366431554);
	}
	if (func_310(527226204))
	{
		func_313(-2122914678);
		func_302(-518004776);
	}
	else
	{
		func_313(-518004776);
		func_302(-2122914678);
	}
	if (func_310(1944170089))
	{
		func_302(1210820782);
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765->f_3) && !bParam1)
		{
			Global_1934765->f_3 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(665.03f, -1252.61f, 42.82f, 0.55f, 0.55f, 1f, 0f, false, 7);
		}
	}
	else
	{
		func_313(1210820782);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765->f_3))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765->f_3));
		}
	}
	if (func_310(1213993593))
	{
		func_302(-520400509);
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765->f_4) && !bParam1)
		{
			Global_1934765->f_4 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-112.01f, -36.73f, 95.65f, 0.5f, 0.5f, 0.75f, 0f, false, 7);
		}
	}
	else
	{
		func_313(-520400509);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765->f_4))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765->f_4));
		}
	}
	if (func_310(1216784232))
	{
		func_302(-1813544782);
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765->f_11) && !bParam1)
		{
			Global_1934765->f_11 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1593.796f, -181.753f, 138.934f, 6.212f, 2.801f, 5.068f, 220.2273f, false, 7);
		}
	}
	else
	{
		func_313(-1813544782);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765->f_11))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765->f_11));
		}
	}
	if (func_310(1410198831))
	{
		func_302(-1132206051);
		func_344(-1132206051);
	}
	else
	{
		func_313(-1132206051);
		func_343(-1132206051);
	}
	if (func_310(-538889627))
	{
		if (func_346(536870912) == 0)
		{
			func_347(536870912);
			MAP::_0x1392105DA88BBFFB(-1696121865, -2550f, 400f, 0, 0);
		}
		func_313(1221694281);
		func_313(-1552951782);
		func_313(-1142569437);
		func_313(474113610);
		func_313(-297340751);
		func_313(1802934313);
		func_313(2108112010);
		func_313(1208537422);
		func_313(361734047);
		func_313(446554495);
		func_313(-118700196);
		func_313(-735136865);
		func_313(636278554);
		func_328("pro_empty_nav");
		func_328("pro_fence_fixed_nav");
		func_328("pro_burned_nav");
		func_302(1423681694);
		func_302(775893260);
		func_302(-602816690);
		func_302(1271713904);
		func_302(1031662866);
		func_302(-1041976064);
		func_302(1983816160);
		func_302(-436084091);
		func_302(-868830916);
		func_302(-285245562);
		func_302(-262959893);
		func_302(1049886174);
		func_302(-1042390616);
		func_302(2038589758);
		func_327("pro_fence_broken_nav");
		if (func_27() == -1)
		{
			func_280(22, 16);
			func_348(22);
		}
		if (PED::_0x91A5F9CBEBB9D936(Global_1934765->f_2))
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1934765->f_2, false);
			Global_1934765->f_2 = 0;
		}
	}
	else if (func_310(-1056767524))
	{
		if (func_346(536870912) == 0)
		{
			func_347(536870912);
			MAP::_0x1392105DA88BBFFB(-1696121865, -2550f, 400f, 0, 0);
		}
		func_313(-436084091);
		func_313(-1552951782);
		func_313(-1142569437);
		func_313(474113610);
		func_313(-297340751);
		func_313(1802934313);
		func_313(2108112010);
		func_313(1208537422);
		func_313(361734047);
		func_313(446554495);
		func_313(-118700196);
		func_313(-735136865);
		func_313(636278554);
		func_328("pro_empty_nav");
		func_328("pro_fence_broken_nav");
		func_328("pro_burned_nav");
		func_302(1423681694);
		func_302(775893260);
		func_302(-329355129);
		func_302(2117211184);
		func_302(-602816690);
		func_302(1271713904);
		func_302(1031662866);
		func_302(-1041976064);
		func_302(1983816160);
		func_302(1221694281);
		func_302(-868830916);
		func_302(-285245562);
		func_302(-262959893);
		func_302(1049886174);
		func_302(-1042390616);
		func_302(2038589758);
		func_327("pro_fence_fixed_nav");
		if (func_27() == -1)
		{
			func_280(22, 16);
			func_348(22);
		}
		if (PED::_0x91A5F9CBEBB9D936(Global_1934765->f_2))
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1934765->f_2, false);
			Global_1934765->f_2 = 0;
		}
	}
	else if (func_310(-182889087))
	{
		if (func_346(536870912) == 0)
		{
			func_347(536870912);
			MAP::_0x1392105DA88BBFFB(-1696121865, -2550f, 400f, 0, 0);
		}
		func_313(-436084091);
		func_313(-1552951782);
		func_313(-1142569437);
		func_313(474113610);
		func_313(-297340751);
		func_313(1802934313);
		func_313(2108112010);
		func_313(1208537422);
		func_313(361734047);
		func_313(446554495);
		func_313(-1042390616);
		func_328("pro_empty_nav");
		func_328("pro_fence_broken_nav");
		func_328("pro_fence_fixed_nav");
		func_302(1423681694);
		func_302(-602816690);
		func_302(1271713904);
		func_302(1031662866);
		func_302(-1041976064);
		func_302(1983816160);
		func_302(1221694281);
		func_302(-868830916);
		func_302(-285245562);
		func_302(-262959893);
		func_302(1049886174);
		func_302(-118700196);
		func_302(-735136865);
		func_302(636278554);
		func_302(2038589758);
		func_327("pro_burned_nav");
		if (func_27() == -1)
		{
			func_280(22, 16);
			func_348(22);
		}
		if (PED::_0x91A5F9CBEBB9D936(Global_1934765->f_2))
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1934765->f_2, false);
			Global_1934765->f_2 = 0;
		}
	}
	else
	{
		if (func_346(536870912))
		{
			func_349(536870912);
			MAP::_0xE057FEA9A22EB3EE(-1696121865);
		}
		func_313(1423681694);
		func_313(-602816690);
		func_313(1271713904);
		func_313(1031662866);
		func_313(-1041976064);
		func_313(1983816160);
		func_313(1221694281);
		func_313(-436084091);
		func_313(-285245562);
		func_313(-262959893);
		func_313(1049886174);
		func_313(-1042390616);
		func_313(-118700196);
		func_313(-735136865);
		func_313(636278554);
		func_313(2038589758);
		func_313(775893260);
		func_328("pro_fence_broken_nav");
		func_328("pro_fence_fixed_nav");
		func_328("pro_burned_nav");
		func_302(-1552951782);
		func_302(-1142569437);
		func_302(474113610);
		func_302(-297340751);
		func_302(-868830916);
		func_302(1802934313);
		func_302(2108112010);
		func_302(1208537422);
		func_302(361734047);
		func_302(446554495);
		func_327("pro_empty_nav");
		if (func_27() == -1)
		{
			func_322(22, 16);
			func_350(22);
		}
		if (!PED::_0x91A5F9CBEBB9D936(Global_1934765->f_2) && !bParam1)
		{
			if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1888801)[22 /*35*/])->f_3))
			{
				Global_1934765->f_2 = PED::_0x4C39C95AE5DB1329(((*Global_1888801)[22 /*35*/])->f_4, 0, 15);
			}
		}
	}
	if (func_310(2019386373))
	{
		func_313(-217646849);
		func_313(-694809996);
		func_313(-2053475031);
		func_302(-279703229);
		func_302(-623091266);
	}
	else if (func_310(-664252410))
	{
		func_313(-279703229);
		func_313(-2053475031);
		func_302(-217646849);
		func_302(-694809996);
		func_302(-623091266);
	}
	else if (func_310(2109952320))
	{
		func_313(-279703229);
		func_313(-217646849);
		func_313(-623091266);
		func_302(-694809996);
		func_302(-2053475031);
	}
	if (func_310(2024121624))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("GUA_GUARD_CHAINS", false);
	}
	else
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("GUA_GUARD_CHAINS", true);
	}
	if (func_310(-1077783786))
	{
		func_313(-961488528);
		func_302(-1569624057);
	}
	else
	{
		func_313(-1569624057);
		func_302(-961488528);
	}
	if (func_310(-299522880))
	{
		func_302(131323483);
		func_313(-134556459);
	}
	else
	{
		func_313(131323483);
		func_302(-134556459);
	}
	if (func_345(45))
	{
		func_313(1638937672);
		func_313(661576070);
		func_313(795060201);
		func_313(1003623269);
		func_313(-395621323);
		func_313(-924329535);
		func_302(739805687);
		func_302(-243627670);
		func_302(-198004806);
		func_327("nav_wapiti_es");
	}
	else
	{
		func_313(739805687);
		func_313(-243627670);
		func_313(-198004806);
		func_328("nav_wapiti_es");
		func_302(1003623269);
		func_302(-924329535);
		func_302(-395621323);
		if (func_310(-389056691))
		{
			func_313(661576070);
			func_302(1638937672);
			func_302(795060201);
		}
		else
		{
			func_313(795060201);
			func_302(1638937672);
			func_302(661576070);
		}
	}
	if (func_310(-1824738758))
	{
		func_302(1489268640);
	}
	else
	{
		func_313(1489268640);
	}
	func_351();
	if (func_310(1221801385))
	{
		if (!Global_1934765->f_297)
		{
			MAP::_0x1392105DA88BBFFB(-1318786989, 2300f, -330f, 0, 0);
			Global_1934765->f_297 = 1;
		}
	}
	else if (Global_1934765->f_297)
	{
		MAP::_0xE057FEA9A22EB3EE(-1318786989);
		Global_1934765->f_297 = 0;
	}
	if (func_310(-306246697))
	{
		if (!Global_1934765->f_298)
		{
			MAP::_0x1392105DA88BBFFB(-1749581410, 3012.5f, 507.5f, 0, 0);
			Global_1934765->f_298 = 1;
		}
	}
	else if (Global_1934765->f_298)
	{
		MAP::_0xE057FEA9A22EB3EE(-1749581410);
		Global_1934765->f_298 = 0;
	}
	if (func_310(-1847672446))
	{
		if (!Global_1934765->f_299)
		{
			MAP::_0x1392105DA88BBFFB(1467785875, 2700f, -1600f, 0, 0);
			Global_1934765->f_299 = 1;
		}
	}
	else if (Global_1934765->f_299)
	{
		MAP::_0xE057FEA9A22EB3EE(1467785875);
		Global_1934765->f_299 = 0;
	}
	if (!func_310(-789397228))
	{
		func_302(-614421509);
		func_302(604920544);
		func_302(1382135686);
		if (func_310(-2022369555))
		{
			func_302(-1716205818);
			func_313(-276259505);
		}
		else
		{
			func_302(-276259505);
			func_313(-1716205818);
		}
		if (!Global_1934765->f_295 && func_352(5))
		{
			MAP::_0x1392105DA88BBFFB(1807082723, 3290f, -1310f, 0, 0);
			Global_1934765->f_295 = 1;
			MAP::_0xD8C7162AB2E2AF45(1944800674);
		}
	}
	else
	{
		func_313(-614421509);
		func_313(604920544);
		func_313(1382135686);
		func_313(-276259505);
		func_313(-1716205818);
		if (Global_1934765->f_295)
		{
			MAP::_0xE057FEA9A22EB3EE(1807082723);
			Global_1934765->f_295 = 0;
			MAP::_0xDA98246C7A3C2189(1944800674);
		}
	}
	if (func_310(1358491857))
	{
		func_302(1056170594);
		func_302(-873881483);
		func_302(146172383);
		if (func_310(723021499))
		{
			func_302(881979872);
			func_313(1157695860);
		}
		else
		{
			func_302(1157695860);
			func_313(881979872);
		}
		if (!Global_1934765->f_294 && func_352(5))
		{
			MAP::_0x1392105DA88BBFFB(1157868460, 2870f, -1400f, 0, 0);
			Global_1934765->f_294 = 1;
			MAP::_0xD8C7162AB2E2AF45(-296815465);
		}
	}
	else
	{
		func_313(1056170594);
		func_313(-873881483);
		func_313(881979872);
		func_313(1157695860);
		func_313(146172383);
		if (Global_1934765->f_294)
		{
			MAP::_0xE057FEA9A22EB3EE(1157868460);
			Global_1934765->f_294 = 0;
			MAP::_0xDA98246C7A3C2189(-296815465);
		}
	}
	func_353();
	StringCopy(&Var1, "nav_sdn_docks_", 64);
	if (func_310(1358491857))
	{
		StringConCat(&Var1, "korrigan_", 64);
	}
	if (func_310(-1825294305))
	{
		StringConCat(&Var1, "antenor_", 64);
		func_302(-445068262);
		func_302(-1688366042);
		if (TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-2024308038))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-2024308038, false);
		}
	}
	else
	{
		func_313(-445068262);
		func_313(-1688366042);
		if (!TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-2024308038))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-2024308038, true);
		}
	}
	if (func_310(522677506))
	{
		func_302(1048677741);
		func_302(-2035101386);
		func_302(1284188544);
		func_302(1520435387);
		func_302(876228895);
		StringConCat(&Var1, "trains_", 64);
	}
	else
	{
		func_313(1048677741);
		func_313(-2035101386);
		func_313(1284188544);
		func_313(1520435387);
		func_313(876228895);
	}
	if (!func_345(45))
	{
		func_313(-274080837);
		func_313(-1036688493);
		func_313(-1512794226);
		func_313(913995529);
		func_302(481139295);
		func_302(165972019);
		func_302(1679182807);
		func_302(-1986089134);
		StringConCat(&Var1, "pre_es", 64);
	}
	else
	{
		func_313(481139295);
		func_313(165972019);
		func_313(1679182807);
		func_313(-1986089134);
		func_302(-274080837);
		func_302(-1036688493);
		func_302(-1512794226);
		func_302(913995529);
		StringConCat(&Var1, "es", 64);
	}
	func_327(&Var1);
	if (func_310(171499483))
	{
		func_313(-890900091);
		func_302(-1758697759);
	}
	else
	{
		func_313(-1758697759);
		func_302(-890900091);
	}
	if (func_310(235928616))
	{
		func_313(-750963311);
		func_313(1926336063);
		func_313(-800534102);
		func_328("nav_crn1_barn");
		func_302(-886310806);
		func_327("nav_crn1_barn_burnt");
	}
	else
	{
		func_313(-886310806);
		func_328("nav_crn1_barn_burnt");
		func_302(-750963311);
		func_302(1926336063);
		func_302(-800534102);
		func_327("nav_crn1_barn");
	}
	if (func_310(345808947))
	{
		func_314(190);
		func_304(189);
	}
	else
	{
		func_314(189);
		func_304(190);
	}
	if (func_310(1167397384))
	{
		func_313(1736386364);
	}
	else
	{
		func_302(1736386364);
	}
	if (func_310(2024769126))
	{
		func_313(516817794);
	}
	else
	{
		func_302(516817794);
	}
	if (func_310(-154581735))
	{
		func_313(-262371610);
	}
	else
	{
		func_302(-262371610);
	}
	if (func_310(-1530132748))
	{
		func_313(-389510791);
	}
	else
	{
		func_302(-389510791);
	}
	if (func_310(976539083))
	{
		func_313(71064384);
	}
	else
	{
		func_302(71064384);
	}
	func_302(579127040);
	func_302(-2011620387);
	if (func_310(409602249))
	{
		func_302(677191274);
	}
	else
	{
		func_313(677191274);
	}
	if (func_310(651395116))
	{
		func_302(1989203268);
	}
	else
	{
		func_313(1989203268);
	}
	if (func_310(1488286867))
	{
		func_302(516308968);
	}
	else
	{
		func_313(516308968);
	}
	if (func_310(665676602))
	{
		func_302(1308321372);
	}
	else
	{
		func_313(1308321372);
	}
	if (func_310(8924991))
	{
		func_302(-449454773);
	}
	else
	{
		func_313(-449454773);
	}
	if (func_310(932909855))
	{
		func_302(-1754541271);
		func_302(-1363999915);
		func_302(-1116430120);
	}
	else
	{
		func_313(-1754541271);
		func_313(-1363999915);
		func_313(-1116430120);
	}
	if (func_310(2051822093))
	{
		func_302(-163883900);
	}
	else
	{
		func_313(-163883900);
	}
	if (func_310(-1241340344))
	{
		func_302(-1010679388);
	}
	else
	{
		func_313(-1010679388);
	}
	if (func_310(-1558439474))
	{
		func_302(1033367448);
	}
	else
	{
		func_313(1033367448);
	}
	if (func_310(2077022393))
	{
		func_313(391022529);
		func_313(-1560636071);
		func_313(1870870569);
		func_313(-904833761);
		func_313(1713084298);
		func_313(928528900);
		func_302(-2118853492);
		func_302(-597126658);
	}
	else
	{
		func_313(-2118853492);
		func_313(-597126658);
		if (func_310(1583012985))
		{
			func_313(391022529);
			func_313(-1560636071);
			func_302(1713084298);
		}
		else
		{
			func_313(1713084298);
			func_302(391022529);
			func_302(-1560636071);
		}
		if (func_310(479419429))
		{
			func_313(1870870569);
			func_313(-904833761);
			func_302(928528900);
		}
		else
		{
			func_313(928528900);
			func_302(1870870569);
			func_302(-904833761);
		}
	}
	if (func_310(-1556423728))
	{
		func_302(-1023331176);
	}
	else
	{
		func_313(-1023331176);
	}
	if (func_310(-144653976))
	{
		func_302(-1809571159);
	}
	else
	{
		func_313(-1809571159);
	}
	if (func_310(-351362068))
	{
		func_302(-2071756699);
	}
	else
	{
		func_313(-2071756699);
	}
	if (func_310(-939114198))
	{
		func_302(-1625703283);
	}
	else
	{
		func_313(-1625703283);
	}
	if (func_310(-1318987693))
	{
		func_302(-1696865897);
	}
	else
	{
		func_313(-1696865897);
	}
	if (func_310(-545450213))
	{
		func_313(-1950049852);
		func_302(-724913398);
	}
	else
	{
		func_313(-724913398);
		func_302(-1950049852);
	}
	func_328("railroad_stageMP");
	if (func_310(-2101264851))
	{
		func_302(1858796535);
		func_302(945532872);
		func_302(-2043326480);
		func_302(992791293);
		func_302(-1815023148);
		func_302(731209239);
		func_302(1531008020);
		func_302(-952533419);
		func_302(582879672);
		func_302(1750312025);
		func_302(-759698431);
		func_302(59954835);
		func_302(-1461922204);
		func_302(2079207010);
		func_302(-1360840312);
		func_302(-816857367);
	}
	else
	{
		func_313(1858796535);
		func_313(945532872);
		func_313(-2043326480);
		func_313(992791293);
		func_313(-1815023148);
		func_313(731209239);
		func_313(1531008020);
		func_313(-952533419);
		func_313(582879672);
		func_313(1750312025);
		func_313(-759698431);
		func_313(59954835);
		func_313(-1461922204);
		func_313(2079207010);
		func_313(-1360840312);
		func_313(-816857367);
	}
	if (func_310(434558613))
	{
		func_302(-715865581);
		func_313(-1387511711);
		func_313(1901132483);
		func_313(-2082345587);
		TASK::SET_SCENARIO_GROUP_ENABLED("TAN_BIRDS", true);
		func_328("rmllr_cabin_normal");
		func_327("rmllr_cabin_burnt");
	}
	else
	{
		func_302(-1387511711);
		func_302(1901132483);
		func_313(-2082345587);
		func_313(-715865581);
		TASK::SET_SCENARIO_GROUP_ENABLED("TAN_BIRDS", false);
		func_328("rmllr_cabin_burnt");
		func_327("rmllr_cabin_normal");
	}
	if (func_310(1186594126))
	{
		func_302(-1382351182);
	}
	else
	{
		func_313(-1382351182);
	}
	if (func_310(469053995))
	{
		func_302(1263244828);
	}
	else
	{
		func_313(1263244828);
	}
	if (func_310(476714362))
	{
		func_302(-1773409329);
	}
	else
	{
		func_313(-1773409329);
	}
	if (func_310(1947931439))
	{
		func_302(1628286919);
		func_313(1082980257);
		func_313(-1725465949);
	}
	else
	{
		func_302(1082980257);
		func_302(-1725465949);
		func_313(1628286919);
	}
	if (func_310(-879507474))
	{
		func_313(1928252407);
		func_302(-98843293);
	}
	else
	{
		func_313(-98843293);
		func_302(1928252407);
	}
	if (func_310(1050128548))
	{
		func_302(-1453850836);
	}
	else
	{
		func_313(-1453850836);
	}
	if (func_310(868326136))
	{
		func_302(2006850489);
	}
	else
	{
		func_313(2006850489);
	}
	if (func_310(-515561750))
	{
		func_313(-892659042);
		func_313(30201771);
		func_302(517553365);
		func_327("mud4_saloon_fight");
	}
	else if (func_310(26245360))
	{
		func_328("mud4_saloon_fight");
		func_313(30201771);
		func_302(-2083943324);
		func_302(517553365);
		func_327("mud4_saloon_fight_start");
	}
	else
	{
		func_328("mud4_saloon_fight_start");
		func_328("mud4_saloon_fight");
		func_313(517553365);
		func_313(-2083943324);
		func_302(30201771);
	}
	if (func_310(-1060078174))
	{
		if (func_345(45))
		{
			func_313(882236853);
			func_328("MS_MARY1_CAMP");
			func_302(-833696851);
			func_327("MS_CHELONIAN_CAMP");
		}
		else
		{
			func_313(-833696851);
			func_328("MS_CHELONIAN_CAMP");
			func_302(882236853);
			func_327("MS_MARY1_CAMP");
		}
		func_354(&(Global_1934765->f_17), 928.2264f, 1345.357f, 194.5221f, 4.5f);
		func_354(&(Global_1934765->f_18), 922.5641f, 1346.623f, 194.7151f, 3f);
		func_354(&(Global_1934765->f_19), 920.8331f, 1340.152f, 194.182f, 3.5f);
	}
	else
	{
		func_313(882236853);
		func_313(-833696851);
		func_355(&(Global_1934765->f_17), 1);
		func_355(&(Global_1934765->f_18), 1);
		func_355(&(Global_1934765->f_19), 1);
	}
	if (func_310(817925178))
	{
		func_302(-1417469821);
	}
	else
	{
		func_313(-1417469821);
	}
	if (func_310(-785605431))
	{
	}
	else
	{
		func_313(146172383);
	}
	if (func_310(1557082963))
	{
		func_313(-879315604);
		func_313(765343099);
		func_302(-909306169);
	}
	else if (func_310(-350863510))
	{
		func_313(-879315604);
		func_313(-909306169);
		func_302(765343099);
	}
	else
	{
		func_313(765343099);
		func_313(-909306169);
		func_302(-879315604);
	}
	if (func_310(-1952856164))
	{
		func_313(-890900091);
		func_313(-1758697759);
		func_302(591001924);
	}
	else if (func_310(249726958))
	{
		func_313(-890900091);
		func_313(591001924);
		func_302(-1758697759);
	}
	else
	{
		func_313(-1758697759);
		func_313(591001924);
		func_302(-890900091);
	}
	if (func_310(-99303535))
	{
		func_313(-2092712551);
		func_302(-1307469679);
	}
	else if (func_310(1433244935))
	{
		func_313(-1307469679);
		func_302(-2092712551);
	}
	else
	{
		func_313(-2092712551);
		func_313(-1307469679);
	}
	func_356(1512816328, 1590446437);
	func_356(1207048789, -1789074439);
	func_356(-1230112817, 499096137);
	func_356(-1278074582, 1466088082);
	func_356(-1436021162, -1852056457);
	func_356(407136781, 556704039);
	if (func_310(-978957786))
	{
		func_302(1111220101);
		func_302(1372565859);
		func_302(1644962309);
		if (!Global_1934765->f_296 && func_352(127))
		{
			MAP::_0x1392105DA88BBFFB(-361257171, -1350f, -2300f, 0, 0);
			Global_1934765->f_296 = 1;
		}
	}
	else
	{
		func_313(1111220101);
		func_313(1372565859);
		func_313(1644962309);
		if (Global_1934765->f_296)
		{
			MAP::_0xE057FEA9A22EB3EE(-361257171);
			Global_1934765->f_296 = 0;
		}
	}
	if (func_310(559573222))
	{
		func_313(1137646647);
		func_302(-898081380);
	}
	else
	{
		func_313(-898081380);
		func_302(1137646647);
	}
	if (func_310(-1818850842))
	{
		func_313(1584946069);
	}
	else
	{
		func_302(1584946069);
	}
	if (func_310(-792853067))
	{
		func_313(-1828030290);
		func_302(827269092);
	}
	else
	{
		func_302(-1828030290);
		func_313(827269092);
	}
	if (func_310(1151197909))
	{
		func_304(165);
	}
	else
	{
		func_314(165);
	}
	if (func_310(-828139293))
	{
		func_313(1364392658);
		func_302(-794503195);
		func_327("nts3_no_bridge");
		if (!Global_1934765->f_293)
		{
			MAP::_0x1392105DA88BBFFB(742204852, 512f, 1756f, 0, 0);
			Global_1934765->f_293 = 1;
		}
	}
	else
	{
		func_313(-794503195);
		func_302(1364392658);
		func_328("nts3_no_bridge");
		if (Global_1934765->f_293)
		{
			MAP::_0xE057FEA9A22EB3EE(742204852);
			Global_1934765->f_293 = 0;
		}
	}
	if (func_310(-464836488))
	{
		func_313(-1192199739);
		func_302(-65072454);
	}
	else
	{
		func_313(-65072454);
		func_302(-1192199739);
	}
	if (func_310(-233743613))
	{
		func_302(1692451176);
	}
	else
	{
		func_313(1692451176);
	}
	if (func_310(1203043430))
	{
		func_302(-102951407);
	}
	else
	{
		func_313(-102951407);
	}
	if (func_310(299694527))
	{
		func_302(1833824812);
	}
	else
	{
		func_313(1833824812);
	}
	if (func_357() == 2)
	{
		if (func_310(-1949204933))
		{
			func_313(1734859244);
			func_302(719147410);
		}
		else
		{
			func_302(1734859244);
			func_313(719147410);
		}
	}
	if (!func_339(4))
	{
		if (func_357() == 1 && func_297() == 1)
		{
			if (func_310(442317566))
			{
				func_313(1948051928);
				func_302(1453569688);
			}
			else
			{
				func_302(1948051928);
				func_313(1453569688);
			}
		}
		else
		{
			func_313(1453569688);
			func_313(1948051928);
		}
	}
	if (func_310(-736853952))
	{
		func_302(-1123141803);
		func_344(-1123141803);
		PATHFIND::_0x4BDEBEA5702B97A9(-1363.724f, -839.4881f, 65.44287f, 20f, 0, 1);
	}
	else
	{
		func_313(-1123141803);
		func_343(-1123141803);
		PATHFIND::_0x4BDEBEA5702B97A9(-1363.724f, -839.4881f, 65.44287f, 20f, 1, 1);
	}
	if (func_310(1478132521))
	{
		func_313(1759143160);
		func_302(398639187);
		func_328("reservation_abandoned");
		func_327("nav_sean1_camp");
	}
	else
	{
		func_313(398639187);
		func_302(1759143160);
	}
	if (func_310(-360036154))
	{
		func_313(1136457806);
		func_302(1255880931);
	}
	else
	{
		func_302(1136457806);
		func_313(1255880931);
	}
	if (func_310(2024383613))
	{
		func_313(-753844687);
		func_302(-1045062790);
		func_327("ntv1_cohutta");
	}
	else
	{
		func_302(-753844687);
		func_313(-1045062790);
		func_328("ntv1_cohutta");
	}
	if (func_310(-622554983))
	{
		func_302(746475990);
		func_327("ntv1_armycamp");
		if (!Global_1934765->f_287)
		{
			func_358(798.2925f, 1509.681f, 203.7047f, 21f, "native1_camp", 1, 0, 0, 0, -1082130432);
			Global_1934765->f_287 = 1;
		}
	}
	else
	{
		func_313(746475990);
		func_328("ntv1_armycamp");
		if (Global_1934765->f_287)
		{
			func_359(798.2925f, 1509.681f, 203.7047f, 0);
			Global_1934765->f_287 = 0;
		}
	}
	if (func_310(1954026328))
	{
		func_302(-1835067413);
		func_313(-1392150519);
		func_304(226);
	}
	else
	{
		func_302(-1392150519);
		func_313(-1835067413);
		func_314(226);
	}
	if (func_310(-330120947))
	{
		func_302(1953646620);
	}
	else
	{
		func_313(1953646620);
	}
	if (func_310(-1764522338))
	{
		func_313(1578454569);
		func_302(-276524767);
	}
	else
	{
		func_302(1578454569);
		func_313(-276524767);
	}
	if (func_310(-76237062))
	{
		func_302(-1085363933);
		func_302(-537740003);
		func_327("trn1_nav_ann_shootout_00");
	}
	else
	{
		func_313(-1085363933);
		func_313(-537740003);
		func_328("trn1_nav_ann_shootout_00");
	}
	if (func_310(-333135263))
	{
		func_302(728046625);
	}
	else
	{
		func_313(728046625);
	}
	if (func_310(885203519))
	{
		func_304(228);
	}
	else
	{
		func_314(228);
	}
	if (func_310(-1080627546))
	{
		func_304(227);
	}
	else
	{
		func_314(227);
	}
	if (func_310(1522511407))
	{
		func_302(-929277449);
		func_302(-723094901);
		func_302(-801609437);
	}
	else
	{
		func_313(-929277449);
		func_313(-723094901);
		func_313(-801609437);
	}
	if (func_310(1446719356))
	{
		func_302(-502582154);
	}
	else
	{
		func_313(-502582154);
	}
	if (func_310(171107021))
	{
		func_302(1624069429);
	}
	else
	{
		func_313(1624069429);
	}
	return 1;
}

void func_180()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 13)
	{
		if (Global_1572887->f_12 == -1)
		{
			Global_1934765->f_39[iVar0] = &Global_40.f_283[iVar0];
		}
		else
		{
			Global_1934765->f_39[iVar0] = &Global_1058888->f_40567[iVar0];
		}
		iVar0++;
	}
}

char* func_181(int iParam0)
{
	char* sVar0;

	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "";
			break;
		case -88424047:
			sVar0 = "new_game";
			break;
		case 1651967528:
			sVar0 = "shift_f";
			break;
		case -84928653:
			sVar0 = "demo";
			break;
		case 1306134188:
			sVar0 = "intro_not_done";
			break;
		case -1357178860:
			sVar0 = "private";
			break;
		case 133180145:
			sVar0 = "friendly";
			break;
		case 655115506:
			sVar0 = "hardcore";
			break;
		case 1737952409:
			sVar0 = "near_posse";
			break;
		case 2137301164:
			sVar0 = "random_posse";
			break;
		case -110687166:
			sVar0 = "open_posse";
			break;
		case -2030542394:
			sVar0 = "follow_invite";
			break;
		case -11301188:
			sVar0 = "random_region";
			break;
		case -1312679892:
			sVar0 = "last_region";
			break;
		case 1433203589:
			sVar0 = "spawn_location";
			break;
		case -61119924:
			sVar0 = "last_location";
			break;
		case 2134863183:
			sVar0 = "camp";
			break;
		case -159568751:
			sVar0 = "handheld";
			break;
		case joaat("benchmark"):
			sVar0 = "benchmark";
			break;
	}
	return sVar0;
}

int func_182(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

var func_183()
{
	if (func_360(Global_1347343->f_11, 512))
	{
		return ((*Global_2621440)[0 /*12065*/])->f_9.f_13;
	}
	return ((*Global_2621440)[1 /*12065*/])->f_9.f_13;
}

Vector3 func_184()
{
	if (func_360(Global_1347343->f_11, 512))
	{
		return ((*Global_2621440)[0 /*12065*/])->f_9.f_7;
	}
	return ((*Global_2621440)[1 /*12065*/])->f_9.f_7;
}

void func_185(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = func_361(iParam1);
	PED::_0xB285AD0EC870B2DF(iParam0, uVar0);
	func_362();
}

void func_186(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	if (iParam1 == 999)
	{
		iVar0 = func_27();
	}
	if (iVar0 == -1)
	{
		switch (iParam0)
		{
			case joaat("player_zero"):
				func_363(-2125499975);
				break;
			case 11966224:
				func_363(1160113249);
				break;
			default:
				break;
		}
		return;
	}
	if (iParam0 == joaat("mp_male"))
	{
		func_363(2026485318);
	}
	else if (iParam0 == -1481695040)
	{
		func_363(24043185);
	}
}

void func_187(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;

	if (bParam4)
	{
		func_364(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_365(Var0);
}

bool func_188(int iParam0)
{
	return iParam0 != 0;
}

bool func_189(int iParam0)
{
	return &Global_1899515 > iParam0;
}

void func_190(int iParam0)
{
	int iVar0;

	if (!func_188(iParam0))
	{
		return;
	}
	iVar0 = -1;
	if (func_366(iParam0, &iVar0))
	{
		func_367(iVar0);
	}
}

int func_191(int iParam0)
{
	int iVar0;

	if (func_368(iParam0))
	{
		return 0;
	}
	if (!func_369(Global_35, 0))
	{
		return 0;
	}
	iVar0 = -1;
	if (!func_366(iParam0, &iVar0))
	{
		return 0;
	}
	if (func_370(iParam0))
	{
	}
	if (PED::_0x1E017404784AA6A3(Global_35, iParam0))
	{
		func_371(iParam0, 1);
		return 1;
	}
	return 0;
}

void func_192(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

void func_193(int iParam0)
{
	int iVar0;

	if (func_372(iParam0, 1) || func_372(iParam0, 2))
	{
		iVar0 = func_373(iParam0);
		if (VOLUME::_0x92A78D0BEDB332A3(iVar0))
		{
			if (func_372(iParam0, 1))
			{
				func_374(iVar0, 0);
				func_375(iVar0, 0);
				func_376(iParam0, 1);
			}
			if (func_372(iParam0, 2))
			{
				POPULATION::_0xA1CFB35069D23C23(iVar0);
				POPULATION::_0x74C2B3DC0B294102(iVar0);
				VOLUME::_0x43F867EF5C463A53(iVar0);
				func_376(iParam0, 2);
			}
		}
	}
}

void func_194(int iParam0)
{
	if (func_372(iParam0, 4))
	{
		func_377(iParam0);
		func_376(iParam0, 4);
	}
	if (func_372(iParam0, 8))
	{
		func_378(iParam0);
		func_376(iParam0, 8);
	}
}

int func_195()
{
	return Global_1897952->f_41;
}

int func_196(int iParam0)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	sVar0 = func_379(iParam0);
	SCRIPTS::REQUEST_SCRIPT(sVar0);
	if (SCRIPTS::HAS_SCRIPT_LOADED(sVar0))
	{
		if (func_27() == -1)
		{
			if (SCRIPTS::IS_THREAD_ACTIVE(Global_1897952->f_42, false))
			{
				PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1897952->f_42, 523);
				return 1;
			}
			if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(sVar0)) > 0)
			{
				func_380(sVar0, 523);
				return 1;
			}
		}
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1897952->f_43)) && NETWORK::NETWORK_IS_SCRIPT_ACTIVE(&(Global_1897952->f_43), Global_1897952->f_51, true, 0))
		{
			SCRIPTS::_0x7DE4643157AD646C(Global_1897952->f_42);
			SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(sVar0);
			return 0;
		}
		Global_1897952->f_42 = BUILTIN::START_NEW_SCRIPT(sVar0, 1024);
		StringCopy(&(Global_1897952->f_43), sVar0, 64);
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(sVar0);
		bVar1 = func_381(iParam0);
		LAW::_0x5E6F375CA101C108(PLAYER::PLAYER_ID(), (bVar1 || func_382(func_234(iParam0))));
		if (func_234(iParam0) != func_234(func_195()) || bVar1)
		{
			func_383(func_195(), 0);
			iVar2 = func_102(Global_36, 1);
			if (!func_287(iVar2))
			{
				if (!func_77(&Global_1935630, 16384) && !func_384())
				{
					if (func_385(func_234(iParam0)) >= PLAYER::GET_WANTED_LEVEL_THRESHOLD(1))
					{
						func_386(-1, -1, -1, 0, func_234(iParam0), 0);
					}
					else if (bVar1)
					{
						func_386(-1, iParam0, -1, 0, -1, 0);
					}
				}
			}
			if (!func_73(PLAYER::PLAYER_ID(), 1, 0, 1))
			{
				func_387(iParam0);
			}
			else
			{
				func_383(iParam0, 1);
			}
		}
		if (func_195() != -1)
		{
			func_388(func_195());
			func_377(func_195());
		}
		func_389(iParam0);
		if (func_390(iParam0))
		{
			PLAYER::_0x14E57F88BA0A07FC(func_391(iParam0));
		}
		func_392(iParam0);
		func_393(iParam0);
		iVar3 = -1000;
		if (func_207(func_225()))
		{
			iVar3 = ((*Global_1888801)[func_225() /*35*/])->f_1;
		}
		if (iVar3 < (MISC::GET_GAME_TIMER() - 1000))
		{
			iVar4 = func_102(Global_36, 1);
			if (func_229(iVar4, 1, 0) == 0)
			{
				func_395(func_394(iParam0, 1), func_234(iParam0));
			}
			func_396(0.775f, 0.2f, 0.025f, 0f);
			func_378(iParam0);
		}
		if (8 == iParam0 != func_310(373691918))
		{
			func_397(373691918, 8 == iParam0, 0);
		}
		return 1;
	}
	return 0;
}

int func_197(vector3 vParam0)
{
	return func_398(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

int func_198()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;

	fVar2 = 4f;
	fVar3 = 3f;
	if ((Global_1357549->f_1641 >= 6 && Global_1357549->f_1641 != 10) || (Global_1357549->f_1641 == 10 && func_399(&(Global_1357549->f_1642)) < ((fVar2 + fVar3) + 6.75f)))
	{
		CAM::_0x71D71E08A7ED5BD7(1);
	}
	switch (Global_1357549->f_1641)
	{
		case 2:
		case 4:
		case 5:
		case 6:
			PED::SET_PED_RESET_FLAG(Global_35, 129, true);
			break;
	}
	switch (Global_1357549->f_1641)
	{
		case 0:
			if (func_400() == 0 || func_401())
			{
				return 0;
			}
			iVar0 = 0;
			while (iVar0 < 27)
			{
				if (func_369(func_402(iVar0), 0))
				{
					iVar1 = PED::_0x89816B58C3466262(func_402(iVar0));
					if (iVar1 == 3)
					{
						Global_1357549->f_1645 = func_403(iVar0);
						PED::SET_PED_CONFIG_FLAG(func_402(iVar0), 343, true);
						if ((Global_1357549->f_1645 != -1 && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)) && !AUDIO::IS_ANY_SPEECH_PLAYING(func_402(iVar0)))
						{
							func_404(func_402(Global_1357549->f_1645), "KNOCKOUT_WARNING", 334581534, Global_35, 1, 0, 0, 1);
							Global_1357549->f_1646 = 1;
							Global_1357549->f_1647 = 1;
							Global_1357549->f_1641 = 1;
						}
					}
					else if (iVar1 == 1)
					{
						Global_1357549->f_1645 = func_403(iVar0);
						if ((Global_1357549->f_1645 != -1 && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)) && !AUDIO::IS_ANY_SPEECH_PLAYING(func_402(iVar0)))
						{
							if (Global_1357549->f_1646 == 1 || ENTITY::_0x9A100F1CF4546629(func_402(iVar0)))
							{
								if (ENTITY::_0x9A100F1CF4546629(func_402(iVar0)))
								{
									func_404(func_402(Global_1357549->f_1645), "LEAVE_DOG_ALONE", -69597692, Global_35, 1, 0, 0, 1);
									PED::_0xA7DC9266ED6A4E51(func_402(iVar0));
								}
								else
								{
									Global_1357549->f_1646 = 0;
									if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
									{
										func_404(func_402(Global_1357549->f_1645), "GENERIC_MOCK", -69597692, Global_35, 1, 0, 0, 1);
									}
									else
									{
										func_405(iVar0);
									}
								}
							}
						}
					}
					else if (iVar1 == 2)
					{
						Global_1357549->f_1645 = func_403(iVar0);
						if (((Global_1357549->f_1645 != -1 && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)) && !AUDIO::IS_ANY_SPEECH_PLAYING(func_402(iVar0))) && !AUDIO::IS_ANY_SPEECH_PLAYING(func_402(Global_1357549->f_1645)))
						{
							if (Global_1357549->f_1647 == 1)
							{
								Global_1357549->f_1647 = 0;
								if (func_406(iVar0))
								{
									func_404(func_402(Global_1357549->f_1645), "DISPUTE_INTERVENE_CAMP_MALE", 334581534, Global_35, 1, 0, 0, 1);
								}
								else
								{
									func_404(func_402(Global_1357549->f_1645), "DISPUTE_INTERVENE_CAMP_FEMALE", 334581534, Global_35, 1, 0, 0, 1);
								}
							}
						}
					}
				}
				iVar0++;
			}
			break;
		case 1:
			func_407(Global_1357549->f_1635, &(Global_1357549->f_1637), &(Global_1357549->f_1640));
			if ((func_400() == 0 || func_401()) || func_213(Global_1357549->f_1637))
			{
				func_408();
				Global_1357549->f_1641 = 0;
				return 0;
			}
			iVar0 = 0;
			while (iVar0 < 27)
			{
				if (func_369(func_402(iVar0), 0))
				{
					iVar1 = PED::_0x89816B58C3466262(func_402(iVar0));
					if (iVar1 == 4)
					{
						if (func_213(Global_1357549->f_1637) == 0)
						{
							if (PED::IS_PED_ON_MOUNT(Global_35) == 0)
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) == 0 && PED::IS_PED_IN_MELEE_COMBAT(Global_35) == 0)
								{
									Global_1357549->f_1645 = func_409(iVar0, 1);
									if (func_410(Global_1357549->f_1645) && !AUDIO::IS_ANY_SPEECH_PLAYING(func_402(Global_1357549->f_1645)))
									{
										if (ANIMSCENE::_0x25557E324489393C(Global_1357549->f_1636))
										{
											ANIMSCENE::_DELETE_ANIM_SCENE(Global_1357549->f_1636);
										}
										func_408();
										Global_1357549->f_1636 = ANIMSCENE::_CREATE_ANIM_SCENE(func_411(), 0, func_412(Global_1357549->f_1635), false, true);
										Global_1357549->f_1641 = 3;
									}
									else
									{
										func_408();
										Global_1357549->f_1641 = 0;
									}
								}
							}
							else
							{
								PAD::DISABLE_CONTROL_ACTION(2, 648122183, false);
							}
						}
					}
				}
				iVar0++;
			}
			break;
		case 3:
			ANIMSCENE::LOAD_ANIM_SCENE(Global_1357549->f_1636);
			ANIMSCENE::_0xDF7B5144E25CD3FE(Global_1357549->f_1636, func_412(Global_1357549->f_1635));
			Global_1357549->f_1641 = 2;
			break;
		case 2:
			if (func_413(Global_1357549->f_1645))
			{
				if (ANIMSCENE::_0x25557E324489393C(Global_1357549->f_1636))
				{
					if (ANIMSCENE::_0x477122B8D05E7968(Global_1357549->f_1636, 1, 0))
					{
						if (ANIMSCENE::_0x23E33CB9F4A3F547(Global_1357549->f_1636, func_412(Global_1357549->f_1635)))
						{
							TASK::CLEAR_PED_TASKS(func_402(Global_1357549->f_1645), 1, 0);
							func_414();
							func_415(0, 0, 0);
							Global_1357549->f_1641 = 4;
						}
					}
				}
			}
			else
			{
				func_416(Global_1357549->f_1645, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
			}
			break;
		case 4:
			if (ANIMSCENE::_0xCBFC7725DE6CE2E0(Global_1357549->f_1636, 0))
			{
				if (func_369(Global_35, 0))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0, 0);
				}
				func_417();
				STREAMING::_0x19A6BE7D9C6884D3(-1689755873, 15, 0, 0);
				ENTITY::SET_ENTITY_VISIBLE(func_402(Global_1357549->f_1645), true);
				WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(func_402(Global_1357549->f_1645), false, false, true, false);
				func_404(func_402(Global_1357549->f_1645), func_418(), 272211449, Global_35, 1, 0, 0, 1);
				Global_1357549->f_1641 = 5;
			}
			else
			{
				func_419();
				ANIMSCENE::START_ANIM_SCENE(Global_1357549->f_1636);
			}
			break;
		case 5:
			if (ANIMSCENE::_0x3FBC3F51BF12DFBF(Global_1357549->f_1636) > 0.15f)
			{
				if (AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
				{
					AUDIO::STOP_CURRENT_PLAYING_SPEECH(Global_35, 0);
				}
			}
			if (ANIMSCENE::_0x3FBC3F51BF12DFBF(Global_1357549->f_1636) > 0.92f || (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(Global_35) && ANIMSCENE::_0x3FBC3F51BF12DFBF(Global_1357549->f_1636) > 0.37f))
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				ANIMSCENE::ABORT_ANIM_SCENE(Global_1357549->f_1636, false);
				func_420(&(Global_1357549->f_1642), 0);
				WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(func_402(Global_1357549->f_1645), true, false, true, false);
				func_421(1005520287, 1017034651, -1212621019, 6, 1, 1, 0);
				Global_1357549->f_1641 = 6;
			}
			break;
		case 6:
			if (func_399(&(Global_1357549->f_1642)) > fVar2)
			{
				ENTITY::SET_ENTITY_COORDS(Global_35, Global_1357549->f_1637, true, false, true, true);
				ENTITY::SET_ENTITY_HEADING(Global_35, Global_1357549->f_1640);
				ANIMSCENE::_0xAE6ADA8FE7E84ACC(Global_1357549->f_1636, func_412(Global_1357549->f_1635));
				ANIMSCENE::RESET_ANIM_SCENE(Global_1357549->f_1636, 0);
				ANIMSCENE::_DELETE_ANIM_SCENE(Global_1357549->f_1636);
				CLOCK::ADD_TO_CLOCK_TIME(4, 0, 0);
				Global_1357549->f_1641 = 8;
				func_422(Global_1357549->f_1645, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
				func_423();
				func_424(fVar3);
				return 1;
			}
			break;
		case 8:
			if (STREAMING::_0x9427C94D2E4094A4(-1689755873, 0))
			{
				if (PED::IS_PED_USING_ANY_SCENARIO(Global_35))
				{
					if (func_399(&(Global_1357549->f_1642)) > (fVar2 + 2.5f))
					{
						Global_1357549->f_1641 = 7;
					}
				}
			}
			break;
		case 7:
			Global_1357549->f_1635++;
			if (Global_1357549->f_1635 >= 4)
			{
				Global_1357549->f_1635 = 0;
			}
			PED::_0xC494C76A34266E82(Global_35, 3);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(250);
			}
			func_425();
			Global_1357549->f_1641 = 9;
			break;
		case 9:
			func_426();
			if (func_399(&(Global_1357549->f_1642)) > (fVar2 + fVar3))
			{
				Global_1357549->f_1641 = 10;
			}
			break;
		case 10:
			if (PED::IS_PED_USING_ANY_SCENARIO(Global_35) == 0)
			{
				if (func_369(Global_35, 0))
				{
					if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
					}
				}
				func_427(&(Global_1357549->f_1642));
				STREAMING::_0x4EDDD9E9CA5AF985(-1689755873);
				func_428(2, -1972216640, 0, 0, 0, 0, 1065353216, 0);
				Global_1357549->f_1641 = 0;
			}
			break;
	}
	return 0;
}

void func_199()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1327590->f_19547)
	{
		if (&Global_1327590->f_19547[iVar0 /*5*/] != -1)
		{
			func_429(iVar0);
		}
		iVar0++;
	}
}

void func_200()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_36307)
	{
		if (func_430(iVar0) != 0)
		{
			if (!MAP::DOES_BLIP_EXIST(&(Global_36307[iVar0])))
			{
				func_431(iVar0);
			}
		}
		iVar0++;
	}
}

void func_201(bool bParam0)
{
	if (bParam0)
	{
		Global_1894899 |= 64;
	}
	else
	{
		Global_1894899 = (&Global_1894899 - Global_1894899 & 64);
	}
}

int func_202()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;

	if (Global_1572887->f_8)
	{
		return 1;
	}
	if ((Global_36 == 0f && Global_36.f_1 == 0f) && Global_36.f_2 == 0f)
	{
		return 1;
	}
	if (Global_1894899 & 264 != 0)
	{
		return 1;
	}
	if (Global_1572887->f_12 == -1 && func_41(64))
	{
		iVar0 = 1;
	}
	else if (Global_1572887->f_12 == 0)
	{
		iVar0 = 1;
	}
	bVar1 = false;
	if (func_207(Global_1894899->f_2))
	{
		bVar2 = VOLUME::_0x92A78D0BEDB332A3(((*Global_1888801)[Global_1894899->f_2 /*35*/])->f_3);
		bVar3 = true;
		if (bVar2)
		{
			bVar1 = VOLUME::_0xF256A75210C5C0EB(((*Global_1888801)[Global_1894899->f_2 /*35*/])->f_3, Global_36);
		}
	}
	bVar4 = PED::IS_PED_INJURED(Global_35);
	bVar5 = func_72(0, 1, 1);
	if (iVar0 && !bVar4)
	{
		if (func_207(Global_1894899->f_2))
		{
			func_432(Global_1894899->f_2, Global_1894899->f_2, bVar5);
			if (Global_1894899->f_5 != Global_1894899->f_2)
			{
				func_432(Global_1894899->f_5, Global_1894899->f_2, bVar5);
			}
		}
		else
		{
			func_432(Global_1894899->f_5, Global_1894899->f_2, bVar5);
		}
	}
	Global_1894899->f_5++;
	if (Global_1894899->f_5 >= 130)
	{
		Global_1894899->f_5 = 0;
	}
	if (bVar3)
	{
		func_433(Global_1894899->f_2, bVar1, bVar2);
	}
	else
	{
		iVar6 = 0;
		iVar7 = (130 - 1);
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			iVar8 = func_102(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false), 1);
			if (func_207(iVar8))
			{
				iVar6 = iVar8;
				iVar7 = iVar8;
			}
		}
		else if (func_434(8))
		{
			if (func_233(Global_1897952->f_41))
			{
				if ((Global_1897952->f_41 == 5 || Global_1897952->f_41 == 6) || Global_1897952->f_41 == 7)
				{
					iVar6 = func_435(7);
					iVar7 = func_436(6);
				}
				else
				{
					iVar6 = func_435(Global_1897952->f_41);
					iVar7 = func_436(Global_1897952->f_41);
				}
			}
		}
		if (Global_1894899->f_4 < iVar6 || Global_1894899->f_4 > iVar7)
		{
			bVar10 = func_437(&bVar9);
			if (!bVar10)
			{
				Global_1894899->f_4 = iVar6;
			}
		}
		func_433(Global_1894899->f_4, bVar1, VOLUME::_0x92A78D0BEDB332A3(((*Global_1888801)[Global_1894899->f_4 /*35*/])->f_3));
		if (bVar9)
		{
			Global_1894899->f_4 = iVar6;
		}
		else if (!bVar10)
		{
			Global_1894899->f_4++;
		}
	}
	return 1;
}

void func_203()
{
	if (Global_1894899->f_9)
	{
		if (!func_438(Global_1934266->f_148))
		{
			func_439();
		}
	}
	switch (HUD::_0x7EC0D68233E391AC(6))
	{
		case 1:
			if (!func_438(Global_1934266->f_148))
			{
				func_439();
			}
			break;
		case 2:
			if (func_438(Global_1934266->f_148))
			{
				_NAMESPACE71::_0x2F901291EF177B02(Global_1934266->f_148, 0);
			}
			break;
	}
}

void func_204()
{
	int iVar0;

	if (func_440(Global_36, Global_1894899->f_6))
	{
		iVar0 = func_441(Global_1894899->f_6);
		if (iVar0 != 0)
		{
			if (!MAP::_0x3F81EA4275D39D6F(iVar0))
			{
				if (func_345(45) || !func_442(Global_1894899->f_6))
				{
					MAP::_0xD8C7162AB2E2AF45(iVar0);
				}
			}
		}
		Global_1894899->f_3 = Global_1894899->f_6;
	}
	else if (Global_1894899->f_3 != -1 && !func_440(Global_36, Global_1894899->f_3))
	{
		Global_1894899->f_3 = -1;
	}
	Global_1894899->f_6++;
	if (Global_1894899->f_6 >= 51)
	{
		Global_1894899->f_6 = 0;
	}
}

int func_205()
{
	return 0;
}

int func_206()
{
	if (func_70(43) && !func_70(44))
	{
		return 0;
	}
	if (func_70(67) && func_357() != 8)
	{
		return 0;
	}
	return 1;
}

bool func_207(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_208(int iParam0)
{
	if (!func_207(iParam0))
	{
		return 0;
	}
	return ((*Global_1888801)[iParam0 /*35*/])->f_20;
}

int func_209(int iParam0)
{
	if (!func_207(iParam0))
	{
		return 0;
	}
	return func_210(iParam0, 8);
}

bool func_210(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23117[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0 /*11*/] && iParam1) != 0;
}

int func_211(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 4:
			return 5;
		case 79:
			return 6;
		case 43:
			return 0;
		case 98:
			return 2;
		case 58:
			return 4;
		case 71:
			return 1;
		case 9:
			return 3;
		case 22:
			return 7;
		case 37:
			return 8;
		default:
			break;
	}
	return -1;
}

Vector3 func_212(int iParam0, var uParam1, var uParam2)
{
	vector3 vVar0;

	vVar0 = { func_443(Global_36, uParam1, uParam2, 1, 0, 0, 0, 0, 0, 0, iParam0, 10f) };
	return vVar0;
}

int func_213(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_214(vector3 vParam0)
{
	Global_40.f_9.f_7 = { vParam0 };
}

void func_215(vector3 vParam0, var uParam3, var uParam4, int iParam5)
{
	Global_1310720->f_1 = { vParam0 };
	Global_40.f_9.f_10 = uParam4;
	Global_40.f_9.f_11 = uParam3;
	Global_40.f_9.f_12 = iParam5;
}

void func_216()
{
	struct<10> Var0;
	struct<16> Var10;

	Global_1310720->f_8 = 0;
	Global_1935630->f_4 = 1;
	Var10 = { Var0 };
	StringCopy(&(Var10.f_10), "respawn_persistence", 32);
	Var10.f_14 = 1024;
	Var10.f_15 = 0;
	func_223(Var10, 0);
}

void func_217(int iParam0)
{
	Global_1572864->f_21 = iParam0;
	Global_1310720->f_4 = MISC::GET_GAME_TIMER();
}

void func_218(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_219(int iParam0)
{
	int iVar0;

	if (!func_207(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (&Global_1395601->f_5[iVar0 /*28*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_220(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

void func_221(int iParam0, int iParam1)
{
	if (!func_220(iParam0))
	{
		return;
	}
	Global_40.f_9384[iParam0 /*2*/] = (Global_40.f_9384[iParam0 /*2*/] || iParam1);
}

int func_222(char* sParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(((*Global_1934603)[iVar0 /*16*/])->f_10), sParam0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_223(struct<16> Param0, int iParam16)
{
	int iVar0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1934603->f_161 >= 10)
	{
		return;
	}
	if (!func_444(iParam16, 2))
	{
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(Param0.f_10))) > 0 || func_222(&(Param0.f_10)))
		{
			return;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(((*Global_1934603)[iVar0 /*16*/])->f_10)))
		{
			*((*Global_1934603)[iVar0 /*16*/]) = { Param0 };
			Global_1934603->f_161++;
			func_445(iParam16);
			return;
		}
		iVar0++;
	}
}

void func_224(int iParam0)
{
	Global_1310720->f_9 = iParam0;
}

int func_225()
{
	return Global_1894899->f_2;
}

int func_226(vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	iVar0 = func_446(vParam0);
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

void func_227(int iParam0)
{
	bool bVar0;

	if (iParam0 < 0 || iParam0 >= 10)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(((*Global_1934603)[iParam0 /*16*/])->f_10)))
	{
		return;
	}
	bVar0 = false;
	if (((*Global_1934603)[iParam0 /*16*/])->f_15 == 1)
	{
		bVar0 = func_447(&(((*Global_1934603)[iParam0 /*16*/])->f_10), *((*Global_1934603)[iParam0 /*16*/]), ((*Global_1934603)[iParam0 /*16*/])->f_14);
	}
	else
	{
		bVar0 = func_448(&(((*Global_1934603)[iParam0 /*16*/])->f_10), ((*Global_1934603)[iParam0 /*16*/])->f_14);
	}
	if (bVar0)
	{
		func_449(iParam0);
	}
}

void func_228(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_104(iParam0))
	{
		return;
	}
	if (func_450(iParam0, 2) && !bParam1)
	{
		return;
	}
	if (bParam1)
	{
		func_451(iParam0, 1);
	}
	else
	{
		func_452(iParam0, 1);
	}
	func_453(iParam0, bParam1);
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (func_234(iVar0) == iParam0)
		{
			func_235(iVar0, 0);
		}
		iVar0++;
	}
}

int func_229(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	switch (iParam0)
	{
		case 76:
			if (func_285(iParam0))
			{
				return 305496830;
			}
			else
			{
				return -1482428221;
			}
			break;
		case 105:
			if (func_285(iParam0))
			{
				return -1323821455;
			}
			else
			{
				return -1994249944;
			}
			break;
		case 5:
			return 1559741032;
		case 61:
			return 60667583;
		case 78:
			return 1758133584;
		case 26:
			return -577559008;
		case 38:
			if (!bParam1 || func_27() != -1)
			{
				return 1624541293;
			}
			if (func_345(45))
			{
				return 1624541293;
			}
			else
			{
				return 1716860278;
			}
			break;
		case 92:
			return 1637569166;
		case 65:
			return -867798278;
		case 69:
			return 1543937523;
		case 93:
			return 1030875135;
		case 95:
			return -201437056;
		case 57:
			return 794246846;
		case 3:
			return -968357677;
		case 32:
			return 728480338;
		case 82:
			return 725489698;
		case 35:
			return 183652754;
		case 56:
			return 2056744450;
		case 126:
			return 963280223;
		case 120:
			return -256309418;
		case 124:
			return 1666986024;
		case 115:
			return 251328732;
		case 127:
			if (!bParam1 || func_27() != -1)
			{
				return 1024208566;
			}
			if (func_345(45))
			{
				return 1024208566;
			}
			else
			{
				return 1640255731;
			}
			break;
		case 22:
			if (!bParam1 || func_27() != -1)
			{
				return 965626876;
			}
			if (func_172(((*Global_1835011)[59 /*74*/])->f_1, 1))
			{
				return 965626876;
			}
			else
			{
				return 1039226266;
			}
			break;
		case 37:
			if (!bParam1 || func_27() != -1)
			{
				return -497792649;
			}
			if (func_172(((*Global_1347702)[9 /*49*/])->f_15, 1))
			{
				return -497792649;
			}
			else if (func_345(45))
			{
				return -1738342532;
			}
			else
			{
				return -1308265478;
			}
			break;
		case 4:
		case 9:
		case 43:
		case 58:
		case 71:
		case 79:
		case 98:
			if (iParam0 == func_98())
			{
				return 2126166785;
			}
			break;
		case 110:
			if (!bParam1 || func_27() != -1)
			{
				return -1990305778;
			}
			if (func_345(45))
			{
				return -1990305778;
			}
			else
			{
				return -1679988168;
			}
			break;
	}
	if (bParam2)
	{
		iVar0 = func_454(iParam0);
		if (iVar0 != -1)
		{
			return func_394(iVar0, bParam1);
		}
	}
	return 0;
}

int func_230(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2126166785:
			return -1;
		case -2119728378:
		case -1482428221:
		case -1391142299:
		case -867798278:
		case 183652754:
		case 305496830:
		case 725489698:
		case 1178102426:
		case 1543937523:
		case 1637569166:
		case 1758133584:
		case 2056744450:
			return 1;
		case -2137625828:
		case -1994249944:
		case -1323821455:
		case -968357677:
		case -201437056:
		case 493546894:
		case 728480338:
		case 1030875135:
		case 1559741032:
		case 1608357655:
			return 2;
		case -1147969487:
			return 0;
		case 60667583:
		case 537788226:
		case 794246846:
			return 5;
		case -1990305778:
		case -1738342532:
		case -1679988168:
		case -1308265478:
		case -650528936:
		case -577559008:
		case -497792649:
		case 139139039:
		case 965626876:
		case 1039226266:
		case 1624541293:
		case 1716860278:
			return 3;
		case -1618764825:
		case -877373104:
		case -256309418:
		case 251328732:
		case 963280223:
		case 1024208566:
		case 1640255731:
		case 1666986024:
			return 4;
	}
	return -1;
}

void func_231(int iParam0, bool bParam1)
{
	bool bVar0;

	if (!func_207(iParam0))
	{
		return;
	}
	bVar0 = func_210(iParam0, 67108864);
	if (bParam1)
	{
		if (((!bVar0 && func_208(iParam0) == 1) && iParam0 != 120) && iParam0 != 92)
		{
			func_455(iParam0, func_177());
			func_322(iParam0, 67108864);
		}
	}
	else if (bVar0)
	{
		func_280(iParam0, 67108864);
		func_455(iParam0, -15);
	}
	func_456(iParam0);
}

void func_232(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if (!func_207(iParam0))
	{
		return;
	}
	if (func_457(iParam0) && !bParam1)
	{
		return;
	}
	if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1888801)[iParam0 /*35*/])->f_5))
	{
		iVar0 = ((*Global_1888801)[iParam0 /*35*/])->f_5;
	}
	else
	{
		iVar0 = func_458(iParam0);
	}
	bVar1 = func_210(iParam0, 33554432);
	if (bParam1)
	{
		iVar2 = func_459(iParam0);
		if (iParam2 > iVar2 || !func_461(func_460(iParam0)))
		{
			func_462(iParam0, func_177());
			func_463(iParam0, iParam2);
		}
		if (!bVar1)
		{
			func_322(iParam0, 33554432);
			if (VOLUME::_0x92A78D0BEDB332A3(iVar0))
			{
				if (iParam0 == 38)
				{
					iVar3 = 0;
				}
				else
				{
					iVar3 = 1;
				}
				PATHFIND::_0xF2A2177AC848B3A8(iVar0, 0, iVar3);
			}
		}
	}
	else if (bVar1)
	{
		func_280(iParam0, 33554432);
		func_462(iParam0, -15);
		if (VOLUME::_0x92A78D0BEDB332A3(iVar0))
		{
			PATHFIND::_0xF2A2177AC848B3A8(iVar0, 1, 1);
		}
	}
	func_464(iParam0);
}

bool func_233(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

int func_234(int iParam0)
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

void func_235(int iParam0, bool bParam1)
{
	if (!func_233(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_465(iParam0, 1);
	}
	else
	{
		if (func_381(iParam0))
		{
			return;
		}
		func_466(iParam0, 1);
	}
	func_467(iParam0, bParam1);
}

int func_236(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			return 1;
	}
	return 0;
}

int func_237(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return -1395712024;
		case 1:
			return -1611076340;
		case 2:
			return 2108368013;
		case 6:
			return -1162254606;
		case 3:
			return -412827149;
		default:
			break;
	}
	return func_468();
}

bool func_238(int iParam0)
{
	return iParam0 != 0;
}

int func_239(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 7:
		case 8:
			return 0;
		case 3:
		case 5:
			switch (iParam1)
			{
				case 0:
					return 0;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 0;
			}
			break;
	}
	return 1;
}

int func_240(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			switch (iParam1)
			{
				case 0:
					return func_468();
				case 1:
					return -1232260252;
				case 2:
					return 1404611977;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 2022451711;
				case 1:
					return 970924250;
				case 2:
					return -1177590512;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1402472902;
				case 1:
					return 1802272784;
				case 2:
					return -1458944281;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return func_468();
				case 1:
					return -1869016398;
				case 2:
					if (func_469(268435456))
					{
						if (STREAMING::_IS_IMAP_ACTIVE(806681228))
						{
							STREAMING::_REMOVE_IMAP(806681228);
						}
						return 1311984381;
					}
					else
					{
						if (STREAMING::_IS_IMAP_ACTIVE(1311984381))
						{
							STREAMING::_REMOVE_IMAP(1311984381);
						}
						return 806681228;
					}
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return func_468();
				case 1:
					return 414622870;
				case 2:
					return 557551306;
				default:
					break;
			}
			break;
	}
	return func_468();
}

void func_241(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = -1;
	switch (iParam0)
	{
		case -1999825729:
			iVar0 = -1999825729;
			break;
		case 414622870:
			iVar0 = 414622870;
			break;
		case 1802272784:
			iVar0 = 1802272784;
			break;
		case 970924250:
			iVar0 = 446964392;
			break;
	}
	if (iVar0 != -1)
	{
		if (bParam1)
		{
			if (GRAPHICS::_0xDE9BAD3292AA6D5E(iVar0) == 0)
			{
				GRAPHICS::_0xDFEA23EC90113657(iVar0);
			}
		}
		else if (GRAPHICS::_0xDE9BAD3292AA6D5E(iVar0))
		{
			GRAPHICS::_0xDD0BC0EDCB2162F6(iVar0);
		}
	}
}

int func_242(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 1:
			return func_470(iParam1, bParam2);
		case 2:
			return func_471(iParam1, bParam2);
		case 6:
			return func_472(iParam1, bParam2);
	}
	return func_468();
}

void func_243(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam1 || iParam0 == 1)
	{
		func_473(iParam0, 0);
	}
	if (!bParam1 || iParam0 == 2)
	{
		func_474(iParam0, 0);
	}
	if (!bParam1 || iParam0 == 3)
	{
		func_475(iParam0, 0);
	}
	if (!bParam1 || iParam0 == 6)
	{
		func_476(iParam0, 0);
	}
	if (bParam2)
	{
		Global_1357549->f_575++;
		if (Global_1357549->f_575 >= 18)
		{
			Global_1357549->f_575 = 0;
		}
	}
}

void func_244(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	var uVar0;
	float fVar1;

	uVar0 = func_477(16);
	fVar1 = func_478();
	if (!bParam4 || iParam0 == 1)
	{
		func_479(iParam0, iParam1, iParam2);
		func_480(iParam0, fVar1, iParam2);
	}
	if (!bParam4 || iParam0 == 2)
	{
		func_481(iParam0, iParam1, iParam2, bParam3);
		func_482(iParam0, fVar1, iParam2, bParam3);
	}
	if (!bParam4 || iParam0 == 3)
	{
		func_483(iParam0, iParam1, iParam2);
		func_484(iParam0, fVar1, iParam2);
	}
	func_485(iParam0, Global_40.f_4283.f_314);
	func_486(iParam0, uVar0);
}

struct<8> func_245(int iParam0, int iParam1)
{
	char cVar0[64];

	StringCopy(&cVar0, func_487(iParam0), 64);
	StringConCat(&cVar0, "_nav_camp_", 64);
	StringConCat(&cVar0, func_488(iParam1), 64);
	return cVar0;
}

int func_246(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 5:
			return 4;
		case 6:
			return 79;
		case 0:
			return 43;
		case 2:
			return 98;
		case 4:
			return 58;
		case 1:
			return 71;
		case 3:
			return 9;
		case 7:
			return 22;
		case 8:
			return 37;
		default:
			break;
	}
	if (iParam0 != -1)
	{
	}
	return -1;
}

void func_247(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	if (func_236(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 27)
		{
			iVar1 = 0;
			while (iVar1 < 6)
			{
				func_489(iParam1, iVar0, iVar1, bParam2, bParam3);
				iVar1++;
			}
			iVar0++;
		}
	}
}

int func_248(int iParam0)
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

int func_249(int iParam0)
{
	return iParam0 & 31;
}

int func_250(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

int func_251()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

var func_252(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || BUILTIN::SHIFT_LEFT(iParam0 & 1023, 5)) || BUILTIN::SHIFT_LEFT(iParam1 & 16383, 15));
}

int func_253(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	int iVar1;

	if (!func_490(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_251())
	{
		return -1;
	}
	uVar0 = func_252(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_491(iVar1, 0);
	func_492(iVar1, 0);
	func_493(iVar1, 0);
	func_494(iVar1, 0);
	func_495(iVar1, uVar0);
	if (iParam4 != 0)
	{
		func_496(iVar1, iParam4);
	}
	return iVar1;
}

int func_254(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;

	if (!func_46(iParam0))
	{
		return 0;
	}
	uVar0 = func_51(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&uVar0))
	{
		return 0;
	}
	iVar1 = MISC::GET_HASH_KEY(&uVar0);
	iVar2 = iVar1;
	return iVar2;
}

bool func_255(var uParam0)
{
	return STATS::_0x4DAC398297981B87(uParam0);
}

int func_256(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return 0;
	}
	return 1;
}

int func_257(int iParam0, var uParam1, var uParam2)
{
	if (!func_256(iParam0))
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

int func_258(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_259(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_260(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_261(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_262(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_263(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_497(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_264(int iParam0, var uParam1)
{
	if (!func_178(iParam0))
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

char* func_265(int iParam0)
{
	switch (iParam0)
	{
		case 465794448:
			return "shopInventories/shelfType(id=%x)";
		case -815325344:
			return "shopInventories/shopSellableItems(shopType=%x)";
		case -764679122:
			return "invItem";
		case -1893576372:
			return "invItem(%i)";
		case 549615901:
			return "invItem(itemID=%x)";
		case 656138654:
			return "requirement";
		case -1661050588:
			return "requirement(%i)";
		case 53142323:
			return "invItem(itemID=%x)/variations";
		case -1970263451:
			return "item(%i)";
		case -101978662:
			return "variations(%i)";
		case 1986163665:
			return ":type";
		case 1976824961:
			return ":reqName";
		case -199231160:
			return ":state";
		case -908395502:
			return ":itemID";
		case 421691991:
			return ":itemCnt";
		case -1400723349:
			return ":itemStackSize";
		case -562246383:
			return "item(%i):itemID";
		default:
			break;
	}
	return "";
}

char* func_266(int iParam0)
{
	switch (iParam0)
	{
		case 1170159957:
			return "itemset";
		case -956415585:
			return "itemset/item(%i)";
		case 1063445323:
			return "itemset/item(id=%x)";
		case -1574188157:
			return "components";
		case -1752779714:
			return "component(%i)";
		case 1004470061:
			return "components/component(%i)";
		case -1218801571:
			return "texture(%i)";
		case -1864618971:
			return "category_sets";
		case 122953168:
			return "categories(%i)";
		case -225486300:
			return "type(%i)";
		case 902278251:
			return "METAPED_CLOTHING_LOGIC/CLOTHING_ITEM(id=%x)";
		case 72319938:
			return "METAPED_CLOTHING_LOGIC/CLOTHING_ITEM(%i)";
		case -950930560:
			return "METAPED_CLOTHING_LOGIC/HIDE_ACTIONS/HIDE_ACTION(id=%x)";
		case -1384491765:
			return "METAPED_CLOTHING_LOGIC/MOD_INFO/MOD(id=%x)";
		case -1995898785:
			return "METAPED_CLOTHING_LOGIC/CLOTHING_REQUIREMENTS/REQUIREMENTS(id=%x)";
		case 1814477267:
			return "METAPED_CLOTHING_LOGIC/CLOTHING_REQUIREMENTS/REQUIREMENTS(%i)";
		case 435382182:
			return "METAPED_CLOTHING_LOGIC/PERSIST_DEFAULTS/PERSIST_ITEMS(id=%x)";
		case 293643052:
			return "METAPED_CLOTHING_LOGIC/PERSIST_DEFAULTS/PERSIST_COMPONENT_ITEMS(id=%x)";
		case 371382169:
			return "METAPED_CLOTHING_LOGIC/CLOTHING_TEMPLATE(id=%x)";
		case -1062209954:
			return "CLOTHING_TAGS/CLOTHING_TAG(%i)";
		case 757000479:
			return "CLOTHING_TAGS/CLOTHING_TAG(tag=%x)";
		case 580624393:
			return "CLOTHING_TAGS/CLOTHING_TAG(%i)/ITEM(%i)";
		case -616834454:
			return "CLOTHING_TAG(%i)";
		case 2124169410:
			return "ITEM(%i)";
		case -1167877887:
			return "ITEM(id=%x)";
		case -850610138:
			return "MOD_LIST";
		case 670821262:
			return "MOD_LIST/ITEM(mod=%x)";
		case -1330667583:
			return "PREREQ(%i)";
		case -684355284:
			return "VARIATION(%i)";
		case -1418665930:
			return "GLOBAL_REQUIREMENTS";
		case -1507835846:
			return "PREREQ(id=%x)";
		case -901251340:
			return "METAPED_CLOTHING_LOGIC/CLOTHING_LISTS/ITEM_LIST(id=%x)";
		case 1786184768:
			return "NET_CLOTHING_OUTFITS/OUTFIT_SET(id=%x)";
		case 181728933:
			return "NET_CLOTHING_OUTFITS/OUTFIT_SET(%i)";
		case -929624153:
			return "METAPED_CLOTHING_PLAYER_OUTFITS/OUTFIT_TINTS(id=%x)/TINT_SET(id=%x)";
		case -575241652:
			return "TINT_SET(id=%x)";
		case -1636119814:
			return "GENDER(id=%x)";
		case -1990973241:
			return "TINT(%i)";
		case 570854305:
			return "OUTFIT(%i)";
		case -441020063:
			return "METAPED_CLOTHING_LOGIC/MOD_ACTIONS/MOD_ACTION(id=%x)";
		case -621257950:
			return "ITEM_TYPE(%i)";
		case -180564037:
			return "MOD_ITEM(%i)";
		case 791623761:
			return "MOD_ITEM(conflicting_mod=%x)";
		case 1921232557:
			return "METAPED_CLOTHING_PLAYER_OUTFITS/METAPED_OUTFIT(id=%x)";
		case -785467695:
			return "METAPED_CLOTHING_PLAYER_OUTFITS/METAPED_OUTFIT(%i)";
		case 1645903593:
			return "METAPED_CLOTHING_PLAYER_OUTFITS/METAPED_OUTFIT(id=%x)/ITEM(%i)";
		case -780950631:
			return "METAPED_CLOTHING_PLAYER_OUTFITS/METAPED_OUTFIT_GROUP(id=%x)";
		case -1516336530:
			return "METAPED_CLOTHING_PLAYER_OUTFITS/METAPED_MULTI_ITEM(id=%x)";
		case 1397673214:
			return "METAPED_CLOTHING_PLAYER_OUTFITS/METAPED_MULTI_ASSET(id=%x)";
		case -1894594100:
			return "METAPED_CLOTHING_PLAYER_OUTFITS/METAPED_COMPONENT_OUTFIT(id=%x)";
		case -1509637852:
			return "MOD_ACTION(%i)";
		case -1873083679:
			return "MOD_ACTION(id=%x)";
		case 18833337:
			return "ASSET_TINTS/ITEM(%i)";
		case 683611174:
			return "ASSET_TINTS/ITEM(tag=%x)";
		case 1495456772:
			return "ITEM(type=%x)";
		case -662697758:
			return "ITEM_TYPE(type=%x)/MOD_ITEM(switch_to_mod=%x)";
		case 532664358:
			return "METAPED_CLOTHING_LOGIC/PRIORITY_LISTS/PRIORITY_LIST(id=%x)";
		case 206913325:
			return "METAPED_CLOTHING_LOGIC/CLOTHING_ITEM_GROUP(id=%x)";
		case -575695046:
			return "METAPED_CLOTHING_LOGIC/TAG_INFO/ITEM(id=%x)";
		case -902846119:
			return "METAPED_CLOTHING_LOGIC/TYPE_INFO/ITEM(id=%x)";
		case 1069236071:
			return "METAPED_CLOTHING_LOGIC/PED_EXPRESSION_INFO";
		case 294713880:
			return "METAPED_CLOTHING_LOGIC/META_COMPONENT_INFO";
		case 1895156137:
			return "INFO_FLAGS/ITEM(%i)";
		case -1580989022:
			return "CLOTHING_ITEM(id=%x)/CLOTHING_TAGS/CLOTHING_TAG/ITEM(id=%x):length";
		case -1119978610:
			return "META_TAG(%i)";
		case -641661298:
			return ":id";
		case -1179965762:
			return ":category";
		case -2059916790:
			return ":type";
		case 75574092:
			return ":label";
		case -1574347650:
			return ":name";
		case 503961584:
			return ":description";
		case -1761676834:
			return ":base";
		case -612355112:
			return ":tag";
		case 1650660506:
			return ":is_list";
		case 1422969767:
			return ":element";
		case -50676598:
			return ":conflicting_mod";
		case -274378420:
			return ":switch_to_mod";
		case -922450292:
			return ":debug_name";
		case -20900817:
			return ":weather_rating";
		case 1533929150:
			return ":modifiable";
		case 607361843:
			return ":palette_hash";
		case -914904147:
			return ":tint0";
		case -2114544496:
			return ":tint1";
		case -1925926132:
			return ":tint2";
		case 478480241:
			return ":action";
		case 1147691011:
			return ":mod";
		case -2108295561:
			return ":gender_type";
		case -2143122356:
			return ":group_id";
		case 595361980:
			return ":item_id";
		case -1872363127:
			return ":requirement";
		case -346222474:
			return ":player_type";
		case 1702953056:
			return ":male";
		case 1724971146:
			return ":female";
		case -2091945982:
			return ":model_male";
		case -1930670456:
			return ":model_female";
		case 139135334:
			return ":chin_length";
		case -377475286:
			return ":chops_length";
		case -1032429045:
			return ":stache_length";
		case -1310250464:
			return ":pdata_file";
		case 1140322086:
			return ":template";
		case 1257828006:
			return ":layer_type";
		case -1837131440:
			return ":drawable";
		case 416492924:
			return ":albedo";
		case -1391664603:
			return ":normal";
		case -589329400:
			return ":material";
		case 1983683828:
			return ":tex_alpha";
		case -1610948558:
			return ":blend_type";
		case -1316510272:
			return ":roughness";
		case 389725116:
			return ":sheet_grid_index";
		case -1840536550:
			return ":mod_texture";
		case -1991054358:
			return ":mod_channel";
		case -1933358492:
			return ":mod_alpha";
		case -1675772613:
			return ":base_layer";
		case -465134547:
			return ":partial";
		case 798674206:
			return ":none_item";
		case -850484704:
			return ":slot_id";
		case -616287568:
			return "ITEM(length=%x):id";
		case -649824246:
			return "ITEM(%i):override";
		case 1273576207:
			return "ITEM(%i):mod";
		case 668292726:
			return "ITEM(%i):tag";
		case 476944399:
			return "ITEM(%i):id";
		case 1246928384:
			return "ITEM(%i):element";
		case -2102005109:
			return "ITEM(%i):hide_mod";
		case 1893749034:
			return "ITEM(%i):type";
		case -1750442909:
			return "CLOTHING_TAGS/CLOTHING_TAG(%i):base";
		case -2122922976:
			return "CLOTHING_TAGS/CLOTHING_TAG(%i):tag";
		case 1047718714:
			return "CLOTHING_TAGS/CLOTHING_TAG(%i)/ITEM(%i):id";
		case 71109396:
			return "itemset/item(id=%x):requirement";
		case -1918885948:
			return "itemset/item(id=%x):type";
		case 834216597:
			return "METAPED_CLOTHING_LOGIC/MOD_INFO/MOD(id=%x):requirement";
		case 436847552:
			return "METAPED_CLOTHING_LOGIC/MOD_INFO/MOD(id=%x):group_id";
		case 635931682:
			return "METAPED_CLOTHING_LOGIC/CLOTHING_ITEM(id=%x):template";
		case 1465270576:
			return "METAPED_CLOTHING_LOGIC/CLOTHING_ITEM(id=%x):requirement";
		case 523185636:
			return "METAPED_CLOTHING_LOGIC/CLOTHING_ITEM(%i):type";
		case 288969396:
			return "METAPED_CLOTHING_LOGIC/CLOTHING_ITEM(id=%x):player_type";
		case -138791404:
			return "METAPED_CLOTHING_PLAYER_OUTFITS/METAPED_MULTI_ITEM(id=%x):player_type";
		case 1959938229:
			return "METAPED_CLOTHING_PLAYER_OUTFITS/METAPED_OUTFIT(id=%x):player_type";
		case 353841523:
			return "INFO_FLAGS/ITEM(%i):id";
		case 730116258:
			return "ITEM_TYPE(type=%x)/MOD_ITEM(conflicting_mod=%x):switch_to_mod";
		case -1991559626:
			return "META_TAG(%i):id";
		default:
			break;
	}
	return "invalid NET_CLOTHING_XML_REGISTERED_QUERIES";
}

char* func_267(int iParam0)
{
	switch (iParam0)
	{
		case -1023752283:
			return "shopProvisions/provision(inventoryItem=%x)";
		case -1076906043:
			return ":inventoryItem";
		case -153135980:
			return ":districtBAY";
		case 12851681:
			return ":districtBGV";
		case 1386325051:
			return ":districtBLU";
		case 43722464:
			return ":districtCML";
		case -581476215:
			return ":districtGRT";
		case -1906982261:
			return ":districtGRZ";
		case -1035806543:
			return ":districtHRT";
		case 1579284209:
			return ":districtROA";
		case -1172613177:
			return ":districtSCM";
		case 495869290:
			return ":districtTAL";
		case -1382561665:
			return ":districtHEN";
		case 684071069:
			return ":districtCHO";
		case 1357371535:
			return ":districtRIO";
		case -1221865546:
			return ":districtGAP";
		default:
			break;
	}
	return "";
}

char* func_268(int iParam0)
{
	switch (iParam0)
	{
		case 1781729525:
			return "honorItems";
		case -2103982008:
			return "item";
		case -57097983:
			return "item(%i)";
		case 2027336698:
			return ":inventoryItem";
		case 316053773:
			return ":unlockThreshold";
		default:
			break;
	}
	return "";
}

void func_269(int iParam0, int iParam1)
{
	func_333(iParam0, 1, 0, 0, 0, 0, 0, 0);
}

void func_270(bool bParam0)
{
	func_498(bParam0);
	func_499(bParam0);
	func_500(bParam0);
	func_501(bParam0);
	func_502(bParam0);
	func_503(bParam0);
	func_504(bParam0);
	func_505(bParam0);
}

void func_271(int iParam0)
{
	if (!func_207(iParam0))
	{
		return;
	}
	(*Global_1888801)[iParam0 /*35*/] = -1;
	((*Global_1888801)[iParam0 /*35*/])->f_1 = 0;
	((*Global_1888801)[iParam0 /*35*/])->f_2 = 0;
	if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1888801)[iParam0 /*35*/])->f_3))
	{
		DECORATOR::_DECOR_REMOVE_ALL(((*Global_1888801)[iParam0 /*35*/])->f_3);
		VOLUME::_0x43F867EF5C463A53(((*Global_1888801)[iParam0 /*35*/])->f_3);
	}
	((*Global_1888801)[iParam0 /*35*/])->f_3 = 0;
	if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1888801)[iParam0 /*35*/])->f_4))
	{
		DECORATOR::_DECOR_REMOVE_ALL(((*Global_1888801)[iParam0 /*35*/])->f_4);
		VOLUME::_0x43F867EF5C463A53(((*Global_1888801)[iParam0 /*35*/])->f_4);
	}
	((*Global_1888801)[iParam0 /*35*/])->f_4 = 0;
	if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1888801)[iParam0 /*35*/])->f_5))
	{
		DECORATOR::_DECOR_REMOVE_ALL(((*Global_1888801)[iParam0 /*35*/])->f_5);
		VOLUME::_0x43F867EF5C463A53(((*Global_1888801)[iParam0 /*35*/])->f_5);
	}
	((*Global_1888801)[iParam0 /*35*/])->f_5 = 0;
	((*Global_1888801)[iParam0 /*35*/])->f_9 = 0;
	((*Global_1888801)[iParam0 /*35*/])->f_10 = 1f;
	((*Global_1888801)[iParam0 /*35*/])->f_11 = -1f;
	((*Global_1888801)[iParam0 /*35*/])->f_13 = -1;
	((*Global_1888801)[iParam0 /*35*/])->f_14 = 0;
	((*Global_1888801)[iParam0 /*35*/])->f_15 = { 0f, 0f, 0f };
	((*Global_1888801)[iParam0 /*35*/])->f_20 = 0;
	StringCopy(&(((*Global_1888801)[iParam0 /*35*/])->f_22), "", 8);
	StringCopy(&(((*Global_1888801)[iParam0 /*35*/])->f_23), "", 24);
	StringCopy(&(((*Global_1888801)[iParam0 /*35*/])->f_26), "", 32);
	((*Global_1888801)[iParam0 /*35*/])->f_31 = 0;
	((*Global_1888801)[iParam0 /*35*/])->f_31.f_1 = 0;
	((*Global_1888801)[iParam0 /*35*/])->f_31.f_2 = 0;
	((*Global_1888801)[iParam0 /*35*/])->f_31.f_3 = 0;
}

void func_272()
{
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899->f_172, -244250050, "CVolumeEditor__VolumeDataArray/volumes");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899->f_172, -734680005, "Item(%i)/name:text");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899->f_172, -1285134888, "Item(%i)/parent:text");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899->f_172, -177723663, "Item(%i)/position:x");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899->f_172, -968243019, "Item(%i)/position:y");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899->f_172, -646025442, "Item(%i)/position:z");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899->f_172, 1397255209, "Item(%i)/orientation:x");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899->f_172, 503447965, "Item(%i)/orientation:y");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899->f_172, 800892178, "Item(%i)/orientation:z");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899->f_172, 1348766134, "Item(%i)/scale:x");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899->f_172, 1572185176, "Item(%i)/scale:y");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899->f_172, -1543393037, "Item(%i)/scale:z");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899->f_172, 1958238202, "Item(%i)/type:text");
}

void func_273()
{
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899->f_173, -244250050, "CVolumeEditor__VolumeDataArray/volumes");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899->f_173, -734680005, "Item(%i)/name:text");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899->f_173, -1285134888, "Item(%i)/parent:text");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899->f_173, -177723663, "Item(%i)/position:x");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899->f_173, -968243019, "Item(%i)/position:y");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899->f_173, -646025442, "Item(%i)/position:z");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899->f_173, 1397255209, "Item(%i)/orientation:x");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899->f_173, 503447965, "Item(%i)/orientation:y");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899->f_173, 800892178, "Item(%i)/orientation:z");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899->f_173, 1348766134, "Item(%i)/scale:x");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899->f_173, 1572185176, "Item(%i)/scale:y");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899->f_173, -1543393037, "Item(%i)/scale:z");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899->f_173, 1958238202, "Item(%i)/type:text");
}

void func_274()
{
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899->f_174, -244250050, "CVolumeEditor__VolumeDataArray/volumes");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899->f_174, -734680005, "Item(%i)/name:text");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899->f_174, -1285134888, "Item(%i)/parent:text");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899->f_174, -177723663, "Item(%i)/position:x");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899->f_174, -968243019, "Item(%i)/position:y");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899->f_174, -646025442, "Item(%i)/position:z");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899->f_174, 1397255209, "Item(%i)/orientation:x");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899->f_174, 503447965, "Item(%i)/orientation:y");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899->f_174, 800892178, "Item(%i)/orientation:z");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899->f_174, 1348766134, "Item(%i)/scale:x");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899->f_174, 1572185176, "Item(%i)/scale:y");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899->f_174, -1543393037, "Item(%i)/scale:z");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899->f_174, 1958238202, "Item(%i)/type:text");
}

int func_275(int iParam0)
{
	switch (iParam0)
	{
		case -2085163631:
			return 0;
		case -4613767:
			return 0;
		case 1567162363:
			return 1;
		case 456471693:
			return 2;
		case -1772963474:
			return 3;
		case 1881496386:
			return 4;
		case 711768994:
			return 5;
		case -440834066:
			return 6;
		case -1363847832:
			return 7;
		case 967769300:
			return 8;
		case -1436873944:
			return 9;
		case -1585669139:
			return 10;
		case 16791368:
			return 11;
		case 1452922822:
			return 12;
		case 549538301:
			return 13;
		case 974698954:
			return 14;
		case 445881012:
			return 15;
		case -2043891857:
			return 16;
		case 419656993:
			return 17;
		case -1732457315:
			return 18;
		case 1794318026:
			return 19;
		case 2035159966:
			return 20;
		case 770832805:
			return 21;
		case -1109814766:
			return 22;
		case -1080317735:
			return 23;
		case -1075550363:
			return 24;
		case 2138576151:
			return 25;
		case 1180954297:
			return 26;
		case 783603394:
			return 27;
		case -170458336:
			return 29;
		case 1285083821:
			return 30;
		case -1840907462:
			return 31;
		case 756710130:
			return 32;
		case 388370024:
			return 33;
		case 1092296123:
			return 34;
		case 467491346:
			return 35;
		case -1391584612:
			return 36;
		case -152111346:
			return 37;
		case 1447551317:
			return 38;
		case 153136092:
			return 39;
		case 1304405732:
			return 40;
		case 1074984055:
			return 41;
		case 1087476368:
			return 50;
		case -1768057340:
			return 51;
		case 1218874593:
			return 42;
		case -1438443836:
			return 52;
		case -2036340415:
			return 43;
		case 803939643:
			return 44;
		case -632496195:
			return 53;
		case -965943619:
			return 45;
		case 283532073:
			return 46;
		case -69067491:
			return 47;
		case -1864895118:
			return 48;
		case -1929806571:
			return 54;
		case 1162337247:
			return 28;
		case -698525417:
			return 55;
		case -1149739894:
			return 56;
		case 380507325:
			return 49;
		case 407796241:
			return 57;
		case -152267914:
			return 58;
		case -1675443320:
			return 59;
		case 1940341639:
			return 60;
		case 1846596114:
			return 61;
		case 907708501:
			return 62;
		case 1825644981:
			return 64;
		case 2065937607:
			return 65;
		case -211317417:
			return 66;
		case 1801307910:
			return 67;
		case -4118897:
			return 68;
		case 1853610692:
			return 69;
		case -1574644415:
			return 70;
		case 2133055515:
			return 71;
		case -1413401932:
			return 72;
		case 801090761:
			return 73;
		case 2131218644:
			return 74;
		case 1708823660:
			return 75;
		case 7976942:
			return 76;
		case 2111120505:
			return 77;
		case 176893118:
			return 78;
		case 602306665:
			return 63;
		case 1179148161:
			return 79;
		case 547412068:
			return 80;
		case -1539748801:
			return 81;
		case -1605119912:
			return 82;
		case -884464063:
			return 83;
		case -1420970720:
			return 84;
		case 1017024547:
			return 85;
		case -1204497306:
			return 86;
		case -1621069480:
			return 87;
		case -458604261:
			return 88;
		case -923391614:
			return 89;
		case -689247089:
			return 90;
		case 44049568:
			return 91;
		case 1350259552:
			return 92;
		case -61661574:
			return 93;
		case -725338054:
			return 94;
		case -770123507:
			return 95;
		case 1322486734:
			return 96;
		case -460939553:
			return 97;
		case -1451863552:
			return 98;
		case 713715980:
			return 101;
		case -31204969:
			return 102;
		case -1720064790:
			return 103;
		case 173833068:
			return 99;
		case -1681004136:
			return 100;
		case -532172775:
			return 104;
		case -739067737:
			return 105;
		case -1203133835:
			return 106;
		case -1947411598:
			return 107;
		case -1049753365:
			return 108;
		case -1298718762:
			return 109;
		case -595083064:
			return 110;
		case 884833917:
			return 111;
		case 2141950651:
			return 112;
		case -1437650729:
			return 113;
		case 672925454:
			return 126;
		case 846062774:
			return 127;
		case 1369756178:
			return 120;
		case -736172423:
			return 121;
		case 1597070291:
			return 122;
		case -159501564:
			return 124;
		case -1438809608:
			return 123;
		case -102682392:
			return 125;
		case -81068979:
			return 114;
		case 227618407:
			return 115;
		case 2106043438:
			return 116;
		case -1868356491:
			return 129;
		case -1380256064:
			return 117;
		case -2118469183:
			return 118;
		case -558997834:
			return 119;
		case 658339366:
			return 128;
		default:
			break;
	}
	return -1;
}

char* func_276(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return "REGION_INVALID";
		case 0:
			return "REGION_BAY_CRAWDADWILLIES";
		case 1:
			return "REGION_BAY_MACOMBS_END";
		case 2:
			return "REGION_BAY_MERKINSWALLER";
		case 3:
			return "REGION_BAY_LAGRAS";
		case 4:
			return "REGION_BAY_LAKAY";
		case 5:
			return "REGION_BAY_SAINT_DENIS";
		case 6:
			return "REGION_BAY_ORANGE_PLANTATION";
		case 7:
			return "REGION_BAY_SERIAL_KILLER";
		case 8:
			return "REGION_BAY_SERENDIPITY";
		case 9:
			return "REGION_BAY_SHADYBELLE";
		case 10:
			return "REGION_BAY_SILTWATERSTRAND";
		case 11:
			return "REGION_BGV_APPLESEEDTIMBER";
		case 12:
			return "REGION_BGV_BERYLS_DREAM";
		case 13:
			return "REGION_BGV_BLACKBONEFOREST_TRAPPER";
		case 14:
			return "REGION_BGV_DAKOTARIVER_TRAPPER";
		case 15:
			return "REGION_BGV_FORTRIGGS";
		case 16:
			return "REGION_BGV_HANGINGDOG";
		case 17:
			return "REGION_BGV_LONEMULESTEAD";
		case 18:
			return "REGION_BGV_MISSING_HUSBAND";
		case 19:
			return "REGION_BGV_MONTO_REST";
		case 20:
			return "REGION_BGV_OWANJILA_DAM";
		case 21:
			return "REGION_BGV_PAINTEDSKY";
		case 22:
			return "REGION_BGV_PRONGHORN";
		case 23:
			return "REGION_BGV_RIGGS_STATION";
		case 24:
			return "REGION_BGV_SHACK";
		case 25:
			return "REGION_BGV_SHEPHERDS_RISE";
		case 26:
			return "REGION_BGV_STRAWBERRY";
		case 27:
			return "REGION_BGV_VALLEY_VIEW";
		case 28:
			return "REGION_BGV_WALLACE_STATION";
		case 29:
			return "REGION_BGV_WATSONSCABIN";
		case 30:
			return "REGION_BLU_CANEBREAK_MANOR";
		case 31:
			return "REGION_BLU_COPPERHEAD";
		case 32:
			return "REGION_BLU_SISIKA";
		case 33:
			return "REGION_CML_BACCHUSBRIDGE";
		case 34:
			return "REGION_CML_DINO_LADY";
		case 35:
			return "REGION_CML_OLDFORTWALLACE";
		case 36:
			return "REGION_CML_SIXPOINTCABIN";
		case 37:
			return "REGION_GRT_BEECHERS";
		case 38:
			return "REGION_GRT_BLACKWATER";
		case 39:
			return "REGION_GRT_QUAKERS_COVE";
		case 40:
			return "REGION_GRZ_ADLERRANCH";
		case 41:
			return "REGION_GRZ_DEAD_RIVAL";
		case 50:
			return "REGION_GRZ_CALUMETRAVINE";
		case 51:
			return "REGION_GRE_CIVIL_WAR_BRIDE";
		case 42:
			return "REGION_GRZ_CHEZPORTER";
		case 52:
			return "REGION_GRZ_COHUTTA";
		case 43:
			return "REGION_GRZ_COLTER";
		case 44:
			return "REGION_GRZ_FROZEN_EXPLORER";
		case 53:
			return "REGION_GRZ_GUNFIGHT";
		case 45:
			return "REGION_GRZ_MILLESANI_CLAIM";
		case 46:
			return "REGION_GRZ_MOUNTAIN_MAN";
		case 47:
			return "REGION_GRZ_STARVING_CHILDREN";
		case 48:
			return "REGION_GRZ_TEMPEST_RIM";
		case 54:
			return "REGION_GRZ_THELOFT";
		case 55:
			return "REGION_GRE_VETERAN";
		case 56:
			return "REGION_GRZ_WAPITI";
		case 49:
			return "REGION_GRZ_WINTERMINING_TOWN";
		case 57:
			return "REGION_GUA_AGUASDULCES";
		case 58:
			return "REGION_GUA_CAMP";
		case 59:
			return "REGION_GUA_CINCOTORRES";
		case 60:
			return "REGION_GUA_LACAPILLA";
		case 61:
			return "REGION_GUA_MANICATO";
		case 62:
			return "REGION_HRT_ABANDONED_MILL";
		case 64:
			return "REGION_HRT_CARMODYDELL";
		case 65:
			return "REGION_HRT_CORNWALLKEROSENE";
		case 66:
			return "REGION_HRT_CROP_FARM";
		case 67:
			return "REGION_HRT_CUMBERLANDFALLS";
		case 68:
			return "REGION_HRT_DOWNSRANCH";
		case 69:
			return "REGION_HRT_EMERALDRANCH";
		case 70:
			return "REGION_HRT_GRANGERS_HOGGERY";
		case 71:
			return "REGION_HRT_HORSESHOEOVERLOOK";
		case 72:
			return "REGION_HRT_LARNEDSOD";
		case 73:
			return "REGION_HRT_LOONY_CULT";
		case 74:
			return "REGION_HRT_LUCKYSCABIN";
		case 75:
			return "REGION_HRT_SWANSONS_STATION";
		case 76:
			return "REGION_HRT_VALENTINE";
		case 77:
			return "REGION_ROA_ABERDEENPIGFARM";
		case 78:
			return "REGION_ROA_ANNESBURG";
		case 79:
			return "REGION_ROA_BEAVERHOLLOW";
		case 63:
			return "REGION_ROA_BEECHERS_C";
		case 80:
			return "REGION_ROA_BLACK_BALSAM_RISE";
		case 81:
			return "REGION_ROA_BRANDYWINE_DROP";
		case 82:
			return "REGION_ROA_BUTCHERCREEK";
		case 83:
			return "REGION_ROA_DOVERHILL";
		case 84:
			return "REGION_ROA_HAPPY_FAMILY";
		case 85:
			return "REGION_ROA_ISOLATIONIST";
		case 86:
			return "REGION_ROA_MACLEANSHOUSE";
		case 87:
			return "REGION_ROA_MOSSY_FLATS";
		case 88:
			return "REGION_ROA_ROANOKE_VALLEY";
		case 89:
			return "REGION_ROA_ROCKYSEVEN";
		case 90:
			return "REGION_ROA_TRAPPER";
		case 91:
			return "REGION_ROA_VANHORNMANSION";
		case 92:
			return "REGION_ROA_VANHORNPOST";
		case 93:
			return "REGION_SCM_BRAITHWAITEMANOR";
		case 94:
			return "REGION_SCM_BULGERGLADE";
		case 95:
			return "REGION_SCM_CALIGAHALL";
		case 96:
			return "REGION_SCM_CATFISHJACKSONS";
		case 97:
			return "REGION_SCM_CLEMENSCOVE";
		case 98:
			return "REGION_SCM_CLEMENSPOINT";
		case 99:
			return "REGION_SCM_COMPSONS_STEAD";
		case 100:
			return "REGION_SCM_DAIRY_FARM";
		case 101:
			return "REGION_SCM_HORSE_SHOP";
		case 102:
			return "REGION_SCM_LONNIESSHACK";
		case 103:
			return "REGION_SCM_LOVE_TRIANGLE";
		case 104:
			return "REGION_SCM_RADLEYS_PASTURE";
		case 105:
			return "REGION_SCM_RHODES";
		case 106:
			return "REGION_SCM_SLAVE_PEN";
		case 107:
			return "REGION_TAL_AURORA_BASIN";
		case 108:
			return "REGION_TAL_DEAD_SETTLER";
		case 109:
			return "REGION_TAL_COCHINAY";
		case 110:
			return "REGION_TAL_MANZANITAPOST";
		case 111:
			return "REGION_TAL_PACIFICUNIONRR";
		case 112:
			return "REGION_TAL_TANNERSREACH";
		case 113:
			return "REGION_TAL_TRAPPER";
		case 126:
			return "REGION_HEN_MACFARLANES_RANCH";
		case 127:
			return "REGION_HEN_THIEVES_LANDING";
		case 120:
			return "REGION_CHO_ARMADILLO";
		case 121:
			return "REGION_CHO_COOTS_CHAPEL";
		case 122:
			return "REGION_CHO_DON_JULIO_HOUSE";
		case 124:
			return "REGION_CHO_RIDGEWOOD_FARM";
		case 123:
			return "REGION_CHO_RILEYS_CHARGE";
		case 125:
			return "REGION_CHO_TWIN_ROCKS";
		case 114:
			return "REGION_GAP_GAPTOOTH_BREACH";
		case 115:
			return "REGION_GAP_TUMBLEWEED";
		case 116:
			return "REGION_GAP_RATHSKELLER_FORK";
		case 129:
			return "REGION_GAP_SOLOMONS_FOLLY";
		case 117:
			return "REGION_RIO_BENEDICT_POINT";
		case 118:
			return "REGION_RIO_FORT_MERCER";
		case 119:
			return "REGION_RIO_PLAIN_VIEW";
		case 128:
			return "REGION_CENTRALUNIONRR";
		default:
			break;
	}
	return "REGION_INVALID";
	return "REGION_INVALID";
}

void func_277()
{
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899->f_175, -258890676, "Regions");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899->f_175, 1489686829, "Region(%i)/name:text");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899->f_175, 596301644, "Region(%i)/fPedRangeMult:value");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899->f_175, 325957282, "Region(%i)/fScenarioRangeMult:value");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1894899->f_175, 426139466, "Region(%i)/iScenarioPedDesinty:text");
}

int func_278(var uParam0, int iParam1, char[4] cParam2)
{
	struct<4> Var0;
	int iVar5;

	Var0 = *uParam0;
	Var0.f_2 = 1276999770;
	Var0.f_3 = func_506(iParam1);
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 1459980739;
		DATAFILE::_DATAFILE_GET_STRING(cParam2, &Var0);
		Var0.f_2 = -158797272;
		DATAFILE::_DATAFILE_GET_STRING(&(cParam2->f_8), &Var0);
		Var0.f_2 = -1484939920;
		DATAFILE::_DATAFILE_GET_HASH(&iVar5, &Var0);
		cParam2->f_16 = func_507(iVar5);
		Var0.f_2 = 670069251;
		DATAFILE::_DATAFILE_GET_INT(&(cParam2->f_17), &Var0);
		cParam2->f_18 = 0;
		Var0.f_2 = 1422201736;
		if (DATAFILE::_DATAFILE_GET_INT(&iVar5, &Var0))
		{
			if (iVar5 == 1)
			{
				cParam2->f_18 |= 8;
			}
		}
		Var0.f_2 = 865021745;
		if (DATAFILE::_DATAFILE_GET_INT(&iVar5, &Var0))
		{
			if (iVar5 == 1)
			{
				cParam2->f_18 |= 1;
			}
		}
		Var0.f_2 = 2078335853;
		if (DATAFILE::_DATAFILE_GET_INT(&iVar5, &Var0))
		{
			if (iVar5 == 1)
			{
				cParam2->f_18 |= 4;
			}
		}
		Var0.f_2 = 899379634;
		if (DATAFILE::_DATAFILE_GET_INT(&iVar5, &Var0))
		{
			if (iVar5 == 1)
			{
				cParam2->f_18 |= 64;
			}
		}
		Var0.f_2 = 414670492;
		if (DATAFILE::_DATAFILE_GET_INT(&iVar5, &Var0))
		{
			if (iVar5 == 1)
			{
				cParam2->f_18 |= 16;
			}
		}
		Var0.f_2 = -2025494336;
		if (DATAFILE::_DATAFILE_GET_INT(&iVar5, &Var0))
		{
			if (iVar5 == 1)
			{
				cParam2->f_18 |= 32;
				Var0.f_2 = 2028394285;
				DATAFILE::_DATAFILE_GET_HASH(&iVar5, &Var0);
				cParam2->f_19 = func_507(iVar5);
			}
			else
			{
				cParam2->f_19 = 0;
			}
		}
		else
		{
			cParam2->f_19 = 0;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

Vector3 func_279(int iParam0)
{
	if (!func_207(iParam0))
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 9:
			return 1904.414f, -1861.146f, 46.3769f;
		case 11:
			return -1409.312f, -216.6785f, 104.2144f;
		case 109:
			return -2419.6f, -997f, 166.8f;
		case 79:
			return 2342.779f, 1359.049f, 106.3936f;
		case 43:
			return -1356.339f, 2443.121f, 308.1876f;
		case 98:
			return 654.1462f, -1245.725f, 43.7026f;
		case 71:
			return -125.85f, -39.599f, 96.0908f;
		case 4:
			return 2222.172f, -772.852f, 42.662f;
		case 22:
			return -2593.808f, 457.4836f, 146.9974f;
		case 37:
			return -1640.158f, -1361.486f, 84.5064f;
		case 125:
			return -3962.021f, -2137.957f, -5.9562f;
		case 127:
			return -1406.7f, -2308.9f, 42.5f;
		case 58:
			return 1422.625f, -7332.473f, 80.5977f;
		default:
			break;
	}
	return func_508(iParam0, 0);
}

void func_280(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23117[iParam0 /*11*/] = (&Global_23117[iParam0 /*11*/] - (Global_23117[iParam0 /*11*/] && iParam1));
		return;
	}
	Global_1058888->f_40615[iParam0 /*11*/] = (&Global_1058888->f_40615[iParam0 /*11*/] - (Global_1058888->f_40615[iParam0 /*11*/] && iParam1));
}

void func_281(int iParam0, var uParam1)
{
	if (!func_207(iParam0))
	{
		return;
	}
	((*Global_1888801)[iParam0 /*35*/])->f_21 = (((*Global_1888801)[iParam0 /*35*/])->f_21 || uParam1);
}

bool func_282(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 150)
	{
		return false;
	}
	return (((*Global_1888801)[iParam0 /*35*/])->f_21 && iParam1) != 0;
}

int func_283(int iParam0)
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

int func_284(var uParam0, int iParam1, bool bParam2)
{
	struct<4> Var0;

	Var0 = *uParam0;
	Var0.f_2 = 1252559615;
	Var0.f_3 = func_506(iParam1);
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 1711029673;
		DATAFILE::_DATAFILE_GET_BOOL(bParam2, &Var0);
		Var0.f_2 = 1758612600;
		DATAFILE::_DATAFILE_GET_BOOL(&(bParam2->f_1), &Var0);
		Var0.f_2 = 115903213;
		DATAFILE::_DATAFILE_GET_INT(&(bParam2->f_2), &Var0);
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_285(int iParam0)
{
	if (!func_207(iParam0))
	{
		return 0;
	}
	return func_210(iParam0, 33554432);
}

int func_286(int iParam0)
{
	if (!func_207(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 26:
		case 32:
		case 35:
		case 38:
		case 57:
		case 61:
		case 76:
		case 78:
		case 93:
		case 95:
		case 105:
		case 115:
			return 1;
	}
	return 0;
}

bool func_287(int iParam0)
{
	if (!func_207(iParam0))
	{
		return false;
	}
	return ((((*Global_1888801)[iParam0 /*35*/])->f_20 == 1 || ((*Global_1888801)[iParam0 /*35*/])->f_20 == 2) && !func_509(iParam0));
}

void func_288()
{
	(*Global_1894052)[0 /*3*/] = 0;
	((*Global_1894052)[0 /*3*/])->f_1 = -1500f;
	((*Global_1894052)[0 /*3*/])->f_2 = 1500f;
	(*Global_1894052)[1 /*3*/] = 2;
	((*Global_1894052)[1 /*3*/])->f_1 = 1500f;
	((*Global_1894052)[1 /*3*/])->f_2 = 1500f;
	(*Global_1894052)[2 /*3*/] = 8;
	((*Global_1894052)[2 /*3*/])->f_1 = -1500f;
	((*Global_1894052)[2 /*3*/])->f_2 = -1500f;
	(*Global_1894052)[3 /*3*/] = 10;
	((*Global_1894052)[3 /*3*/])->f_1 = 1500f;
	((*Global_1894052)[3 /*3*/])->f_2 = -1500f;
}

void func_289(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam9 + 1;
	iVar1 = (iParam9 + iParam10);
	iVar2 = iVar1 + 1;
	if (Param0 > fParam6)
	{
		(*iParam8)[iParam9] = 0;
		(*iParam8)[iVar1] = 0;
	}
	if (Param3 < fParam6)
	{
		(*iParam8)[iVar0] = 0;
		(*iParam8)[iVar2] = 0;
	}
	if (Param0.f_1 > fParam7)
	{
		(*iParam8)[iVar1] = 0;
		(*iParam8)[iVar2] = 0;
	}
	if (Param3.f_1 < fParam7)
	{
		(*iParam8)[iParam9] = 0;
		(*iParam8)[iVar0] = 0;
	}
	if (((iParam8[iParam9] == 0 && iParam8[iVar1] == 0) && iParam8[iVar0] == 0) && iParam8[iVar2] == 0)
	{
	}
}

void func_290(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam1 + 1;
	iVar1 = (iParam1 + iParam2);
	iVar2 = iVar1 + 1;
	(*iParam0)[iParam1] = 0;
	(*iParam0)[iVar0] = 0;
	(*iParam0)[iVar1] = 0;
	(*iParam0)[iVar2] = 0;
}

void func_291(var uParam0, bool bParam1)
{
	if (Global_1934765->f_69.f_201 >= 100)
	{
		return;
	}
	Global_1934765->f_69[Global_1934765->f_69.f_201 /*2*/] = uParam0;
	(Global_1934765->f_69[Global_1934765->f_69.f_201 /*2*/])->f_1 = bParam1;
	Global_1934765->f_69.f_201++;
	if (bParam1)
	{
	}
}

void func_292(int iParam0)
{
	func_510(iParam0, -1);
	func_511(iParam0, -15);
}

int func_293(int iParam0)
{
	if (!func_46(iParam0))
	{
		return -1;
	}
	return func_512(iParam0);
}

void func_294()
{
	if (func_27() != -1)
	{
		return;
	}
	if (!func_58())
	{
		return;
	}
	func_513(&(Global_40.f_40));
}

void func_295()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_40.f_11029)
	{
		if (VEHICLE::_0xC29996A337BDD099(((*Global_1425371)[iVar0 /*373*/])->f_1))
		{
			(Global_40.f_11029[iVar0 /*5*/])->f_1 = { VEHICLE::_0x1E8A921112891651(((*Global_1425371)[iVar0 /*373*/])->f_1) };
			(Global_40.f_11029[iVar0 /*5*/])->f_4 = VEHICLE::_0x67995318F5FAA496(((*Global_1425371)[iVar0 /*373*/])->f_1);
		}
		iVar0++;
	}
}

bool func_296()
{
	return !func_213(Global_1310720->f_1);
}

int func_297()
{
	return Global_40.f_4283.f_4;
}

void func_298(vector3 vParam0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;

	fVar0 = 1E+07f;
	fVar1 = 1E+07f;
	if (func_206())
	{
		fVar0 = func_514(vParam0, Global_40.f_6);
	}
	if (func_515(33554432))
	{
		if (!func_182(Global_40.f_2, 0f, 0f, 0f, 1056964608, 1))
		{
			fVar1 = func_514(vParam0, Global_40.f_2);
		}
	}
	if (fVar1 > 150f && fVar0 > 150f)
	{
		*uParam3 = { Global_36 };
		*uParam4 = 6;
		return;
	}
	if (fVar0 < fVar1)
	{
		*uParam3 = { Global_40.f_6 };
		*uParam4 = 1;
	}
	else
	{
		*uParam3 = { Global_40.f_2 };
		*uParam4 = 3;
	}
}

float func_299(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

void func_300()
{
	float fVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	struct<2> Var6;
	float fVar8;
	int iVar9[50];
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;

	if (!func_77(&Global_1935630, 8192))
	{
		return;
	}
	if (func_39(32768))
	{
		return;
	}
	func_516(Global_1935630, 8192);
	fVar0 = 0f;
	fVar0 = (fVar0 + (0.9259259f * BUILTIN::TO_FLOAT(func_517(909007663, 1325140787))));
	fVar0 = (fVar0 + (0.2525252f * BUILTIN::TO_FLOAT(func_517(909007663, 2101241783))));
	fVar0 = (fVar0 + (0.2923976f * BUILTIN::TO_FLOAT(func_517(909007663, -1296936294))));
	fVar0 = (fVar0 + (0.462963f * BUILTIN::TO_FLOAT(func_517(909007663, -798388728))));
	fVar0 = (fVar0 + (0.9259259f * BUILTIN::TO_FLOAT(func_517(909007663, -1787586531))));
	fVar0 = (fVar0 + (0.308642f * BUILTIN::TO_FLOAT(func_517(909007663, -1002834519))));
	fVar0 = (fVar0 + (5.555555f * BUILTIN::TO_FLOAT(func_517(909007663, -50600144))));
	fVar0 = (fVar0 + (0.6944444f * BUILTIN::TO_FLOAT(func_517(909007663, -348503123))));
	fVar0 = (fVar0 + (0.3703704f * BUILTIN::TO_FLOAT(func_517(909007663, -528798161))));
	fVar0 = (fVar0 + (0.5f * func_518(10f, BUILTIN::TO_FLOAT(func_517(909007663, 551192206)))));
	fVar0 = (fVar0 + (0.6f * func_518(5f, BUILTIN::TO_FLOAT(func_517(909007663, -406093146)))));
	fVar0 = (fVar0 + (0.2f * func_518(25f, BUILTIN::TO_FLOAT(func_519(-1029789297)))));
	fVar0 = (fVar0 + (2f * func_518(1f, BUILTIN::TO_FLOAT(func_519(-843295694)))));
	fVar0 = (fVar0 + (0.3333333f * func_518(6f, BUILTIN::TO_FLOAT(func_519(64058978)))));
	fVar0 = (fVar0 + (3f * func_518(1f, BUILTIN::TO_FLOAT(func_519(795577402)))));
	iVar1 = func_520();
	fVar0 = (fVar0 + (0.1111111f * func_518(9f, BUILTIN::TO_FLOAT(iVar1))));
	fVar2 = (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, 1665658745)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 1665658745)));
	fVar2 = func_521(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, -263938772)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, -263938772))));
	fVar2 = func_521(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, 228647253)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 228647253))));
	fVar2 = func_521(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, 1695604435)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 1695604435))));
	fVar2 = func_521(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, -379038926)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, -379038926))));
	fVar2 = func_521(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, 1597499323)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 1597499323))));
	fVar2 = func_521(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, -278663717)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, -278663717))));
	fVar2 = func_521(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, 586249988)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 586249988))));
	fVar2 = func_521(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, -419800938)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, -419800938))));
	fVar2 = func_521(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, -1362069171)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, -1362069171))));
	fVar2 = func_521(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, -740350755)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, -740350755))));
	fVar2 = func_521(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, 1511070393)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 1511070393))));
	fVar0 = (fVar0 + func_518(1f, fVar2));
	fVar0 = (fVar0 + (0.05f * func_518(BUILTIN::TO_FLOAT(20), BUILTIN::TO_FLOAT(func_522()))));
	if (func_523(40))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_523(42))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_523(48))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_523(50))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_523(52))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	fVar2 = (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(1765845133, 499813453)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(1765845133, 499813453)));
	fVar2 = func_521(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(1765845133, 666607663)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(1765845133, 666607663))));
	fVar2 = func_521(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(1765845133, -220219788)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(1765845133, -220219788))));
	fVar2 = func_521(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(1765845133, 218622660)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(1765845133, 218622660))));
	fVar2 = func_521(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(1765845133, 390004462)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(1765845133, 390004462))));
	fVar2 = func_521(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(1765845133, 6410548)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(1765845133, 6410548))));
	fVar0 = (fVar0 + (1f * func_518(1f, fVar2)));
	fVar0 = (fVar0 + (0.2f * func_518(5f, BUILTIN::TO_FLOAT(func_519(1933084904)))));
	fVar0 = (fVar0 + (0.2f * func_518(5f, BUILTIN::TO_FLOAT(func_517(-1756227506, -734935893)))));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_524(COMPENDIUM::_0x729D52F61A5A9E22(1979337996), 50)) / BUILTIN::TO_FLOAT(50)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_524(COMPENDIUM::_0x729D52F61A5A9E22(-2125891426), 10)) / BUILTIN::TO_FLOAT(10)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_524(COMPENDIUM::_0x729D52F61A5A9E22(1630085303), 10)) / BUILTIN::TO_FLOAT(10)));
	fVar0 = (fVar0 + COMPENDIUM::_0x725D52F21A5E9E22(-1658238931));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_524(COMPENDIUM::_0x729D52F61A5A9E22(1807539419), 20)) / BUILTIN::TO_FLOAT(20)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_524(COMPENDIUM::_0x729D52F61A5A9E22(717108105), 10)) / BUILTIN::TO_FLOAT(10)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_524(COMPENDIUM::_0x729D52F61A5A9E22(-2143405780), 48)) / BUILTIN::TO_FLOAT(48)));
	func_525(&iVar3, &iVar4);
	fVar0 = (fVar0 + (2f * func_518((BUILTIN::TO_FLOAT(iVar3) / BUILTIN::TO_FLOAT(iVar4)), 1f)));
	fVar0 = (fVar0 + (2f * func_518(1f, BUILTIN::TO_FLOAT(func_526(-2116919750)))));
	fVar5 = BUILTIN::TO_FLOAT(func_527());
	fVar0 = (fVar0 + ((3f * fVar5) / BUILTIN::TO_FLOAT(9)));
	fVar0 = (fVar0 + ((1f / 4f) * func_518(1f, BUILTIN::TO_FLOAT(func_517(1511238709, -747096482)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_518(1f, BUILTIN::TO_FLOAT(func_517(1511238709, 549911940)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_518(1f, BUILTIN::TO_FLOAT(func_517(1511238709, -760820978)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_518(1f, BUILTIN::TO_FLOAT(func_517(1511238709, -1672018311)))));
	fVar0 = (fVar0 + (0.2f * func_518(5f, BUILTIN::TO_FLOAT(func_519(-1342635612)))));
	fVar0 = (fVar0 + (0.5f * func_518(1f, BUILTIN::TO_FLOAT(func_519(-2061916883)))));
	fVar0 = (fVar0 + (0.5f * func_518(1f, BUILTIN::TO_FLOAT(func_519(281346304)))));
	fVar0 = (fVar0 + (0.5f * func_518(1f, BUILTIN::TO_FLOAT(func_519(-299021541)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_518(1f, BUILTIN::TO_FLOAT(func_517(-1276738576, 307971639)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_518(1f, BUILTIN::TO_FLOAT(func_517(-1276738576, -1555359431)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_518(1f, BUILTIN::TO_FLOAT(func_517(-1276738576, 644069854)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_518(1f, BUILTIN::TO_FLOAT(func_517(-1276738576, -97115714)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_518(1f, BUILTIN::TO_FLOAT(func_517(-1276738576, -2143405780)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_518(1f, BUILTIN::TO_FLOAT(func_517(-1276738576, 1455184052)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_518(1f, BUILTIN::TO_FLOAT(func_517(978382515, joaat("coach"))))));
	fVar0 = (fVar0 + ((1f / 4f) * func_518(1f, BUILTIN::TO_FLOAT(func_517(978382515, 574993838)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_518(1f, BUILTIN::TO_FLOAT(func_517(978382515, -605765767)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_518(1f, BUILTIN::TO_FLOAT(func_517(978382515, 1015970717)))));
	Var6 = { func_528(joaat("total_progress_made")) };
	fVar8 = func_529(Var6);
	STATS::_0xE141F6B40B1E3683(&Var6, fVar0);
	if (fVar0 > fVar8)
	{
	}
	if (func_46(&Global_1898437))
	{
		iVar60 = 0;
		iVar61 = 0;
		while (iVar61 < &Global_1898329)
		{
			if (!func_46(Global_1898330[iVar61]))
			{
			}
			else
			{
				iVar62 = func_512(Global_1898330[iVar61]);
				if (iVar62 == 3 || iVar62 == 4)
				{
				}
				else if (iVar62 != 1 && iVar62 != 2)
				{
					func_530(Global_1898330[iVar61]);
				}
				else
				{
					func_531(iVar61, 0);
					if (func_111(Global_1898330[iVar61]) == 1)
					{
						iVar9[iVar60] = func_532(Global_1898330[iVar61]);
						iVar60++;
						if (iVar60 >= 50)
						{
						}
						else
						{
							iVar61++;
						}
						if (iVar60 < 50)
						{
							iVar63 = 0;
							while (iVar63 < Global_40.f_450)
							{
								if (&Global_40.f_450[iVar63] > -1 && &Global_40.f_450[iVar63] < 200)
								{
									iVar9[iVar60] = func_532(((*Global_1347702)[&Global_40.f_450[iVar63] /*49*/])->f_15);
									iVar60++;
									if (iVar60 >= 50)
									{
									}
									else
									{
										iVar63++;
									}
									if (fVar0 > fVar8)
									{
										TELEMETRY::_0x51EC204A6E5B5A1A(func_532(&Global_1898437), &iVar9);
									}
								}
							}
						}
					}
				}
			}
		}
	}

int func_301()
{
	if (func_533(-524145696))
	{
		if (func_534(809554858))
		{
			return 1;
		}
		func_535(-524145696);
	}
	if (func_533(-1223121209))
	{
		if (func_534(-451832572))
		{
			return 1;
		}
		func_535(-1223121209);
	}
	if (func_533(-1053549743))
	{
		if (func_534(1033721560) || func_536(func_458(105), Global_36))
		{
			return 1;
		}
		func_535(-1053549743);
	}
	if (func_533(1649996811))
	{
		if (func_534(197447134))
		{
			return 1;
		}
		func_535(1649996811);
	}
	if (func_533(1478132521))
	{
		if (func_537(398639187, 1120403456))
		{
			return 1;
		}
		func_535(1478132521);
	}
	return 0;
}

void func_302(int iParam0)
{
	if (!STREAMING::_IS_IMAP_ACTIVE(iParam0))
	{
		STREAMING::_REQUEST_IMAP(iParam0);
	}
}

bool func_303()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(99890643);
}

void func_304(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::SET_BIT(Global_1934765->f_21[iVar1], iVar2);
}

void func_305()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;

	if (!func_345(45))
	{
		if (Global_1934765->f_290)
		{
			MAP::_0xE057FEA9A22EB3EE(1253225952);
			MAP::_0xE057FEA9A22EB3EE(1483100487);
			MAP::_0xE057FEA9A22EB3EE(-1323466060);
			MAP::_0xE057FEA9A22EB3EE(346317463);
			Global_1934765->f_290 = 0;
		}
		if (Global_1934765->f_292)
		{
			MAP::_0xE057FEA9A22EB3EE(346317463);
			Global_1934765->f_292 = 0;
		}
		if (!Global_1934765->f_291 && func_352(38))
		{
			MAP::_0x1392105DA88BBFFB(577490767, -811f, -1212.5f, 0, 0);
			Global_1934765->f_291 = 1;
		}
		func_313(-37875204);
		func_313(258104717);
		func_313(-76700394);
		func_313(1614255891);
		func_313(1861460906);
		func_313(1044079550);
		func_328("nav_shack_BA");
		func_302(-1079295176);
		func_302(894787561);
		func_313(-1276109918);
		func_313(-1386423483);
		func_313(-1405375965);
		func_313(1277540472);
		func_313(-1331593143);
		func_313(1133172356);
		func_313(-559257162);
		func_328("nav_shack_BB");
		func_302(979670262);
		func_302(418666411);
		func_302(651621232);
		func_313(-574996782);
		func_313(1169511062);
		func_313(-1266106154);
		func_313(-1377975054);
		func_313(897624424);
		func_313(-2111718052);
		func_328("nav_shack_BC");
		func_302(-165202905);
		func_302(-1327148782);
		func_302(-1965378386);
		func_313(175578406);
		func_313(-686953321);
		func_313(-1737485501);
		func_313(-739754595);
		func_313(942470447);
		func_313(-1859413313);
		func_313(489834626);
		func_302(-1667265438);
		func_302(54029413);
		func_302(-1070234238);
		func_302(-931280709);
		func_302(-1170563128);
		func_302(1394163483);
		func_328("nav_std_train_station_es");
		func_313(-5339556);
		func_313(1258244391);
		func_313(1343343014);
		func_313(-2082201137);
		func_313(1641449717);
		func_313(739412171);
		func_313(-501793326);
		func_313(466168676);
		func_313(1479152994);
		func_328("nav_blackwater_endless_summer");
		func_302(1173561253);
		func_302(1470738186);
		func_302(-1632348233);
		func_313(903666582);
		func_302(1081087978);
		func_328("nav_val_es");
		func_328("nav_val_es_saloon_lockdown");
		func_328("nav_val_es_full_lockdown");
		func_313(-1509154451);
		func_302(1517736440);
		func_302(-693132475);
		func_328("nav_annesburg_es");
		func_313(158063004);
		func_328("nav_coots_graves");
		func_313(-1112373128);
		func_313(-891994084);
		func_313(-84516711);
		func_313(-657241692);
		func_302(1596089211);
		func_302(-2133417899);
		func_302(1274804496);
		func_302(1597665303);
		func_302(116162819);
		func_328("nav_cornwall_es");
		AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Cornwall_K_and_T_Endless_Summer", false, true);
		AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Cornwall_K_and_T_Normal", true, true);
		AUDIO::SET_STATIC_EMITTER_ENABLED("SE_Cornwall_Kerosene_And_Tar_Ambient_Emitter", true);
		iVar0 = func_538(2087609309);
		if (!GRAPHICS::_0x113857D66A9CABE6(iVar0))
		{
			GRAPHICS::_0xBFCB17895BB99E4E(iVar0, true);
		}
		func_313(-1380983970);
		func_313(-1912028958);
		func_302(563944718);
		func_328("nav_bridge_to_old_world");
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(1883691509))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1883691509, true);
		}
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(-1647292773))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1647292773, true);
		}
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(-824533183))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-824533183, true);
		}
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(-619084588))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-619084588, true);
		}
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(672230639))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(672230639, true);
		}
		if (func_27() == -1)
		{
			if (func_539(56, &iVar2, &iVar3, 0, 0))
			{
				iVar1 = 0;
				while (iVar1 < (iVar3 - iVar2) + 1)
				{
					func_319((iVar2 + iVar1), 32);
					iVar1++;
				}
			}
			if (func_539(65, &iVar2, &iVar3, 0, 0))
			{
				iVar1 = 0;
				while (iVar1 < (iVar3 - iVar2) + 1)
				{
					func_319((iVar2 + iVar1), 32);
					iVar1++;
				}
			}
			if (!func_72(0, 0, 1))
			{
				func_319(944, 32);
				func_319(940, 32);
			}
			func_540(41788943);
			iVar4 = 0;
			while (iVar4 < 13)
			{
				func_542(iVar4, func_541(iVar4));
				iVar4++;
			}
		}
	}
	else
	{
		if (!Global_1934765->f_290)
		{
			MAP::_0x1392105DA88BBFFB(1253225952, -1550f, 250f, 0, 0);
			MAP::_0x1392105DA88BBFFB(1483100487, 1440f, -1580f, 0, 0);
			MAP::_0x1392105DA88BBFFB(-1323466060, 1770f, 480f, 0, 0);
			Global_1934765->f_290 = 1;
		}
		if (!Global_1934765->f_292)
		{
			MAP::_0x1392105DA88BBFFB(346317463, -811f, -1212.5f, 0, 0);
			Global_1934765->f_292 = 1;
		}
		if (Global_1934765->f_291)
		{
			MAP::_0xE057FEA9A22EB3EE(577490767);
			Global_1934765->f_291 = 0;
		}
		func_302(-37875204);
		func_302(258104717);
		func_302(-76700394);
		func_302(1614255891);
		func_302(1861460906);
		func_302(1044079550);
		func_327("nav_shack_BA");
		func_313(-1079295176);
		func_313(894787561);
		func_302(-1276109918);
		func_302(-1386423483);
		func_302(-1405375965);
		func_302(1277540472);
		func_302(-1331593143);
		func_302(1133172356);
		func_302(-559257162);
		func_327("nav_shack_BB");
		func_313(979670262);
		func_313(418666411);
		func_313(651621232);
		func_302(-574996782);
		func_302(1169511062);
		func_302(-1266106154);
		func_302(-1377975054);
		func_302(-2111718052);
		func_302(897624424);
		func_327("nav_shack_BC");
		func_313(-165202905);
		func_313(-1327148782);
		func_313(-1965378386);
		func_313(-1667265438);
		func_313(54029413);
		func_313(-1070234238);
		func_313(-931280709);
		func_313(-1170563128);
		func_313(1394163483);
		func_302(175578406);
		func_302(489834626);
		func_302(-686953321);
		func_302(-1737485501);
		func_302(-739754595);
		func_302(942470447);
		func_302(-1859413313);
		func_327("nav_std_train_station_es");
		func_313(1173561253);
		func_313(1470738186);
		func_313(-1632348233);
		func_302(-5339556);
		func_302(1258244391);
		func_302(1343343014);
		func_302(-2082201137);
		func_302(1641449717);
		func_302(739412171);
		func_302(-501793326);
		func_302(466168676);
		func_302(1479152994);
		func_327("nav_blackwater_endless_summer");
		func_313(1081087978);
		func_302(903666582);
		if (func_310(-1215445344))
		{
			func_328("nav_val_saloon_lockdown");
			func_328("nav_val_full_lockdown");
			func_328("nav_val_es_saloon_lockdown");
			func_328("nav_val_es");
			func_327("nav_val_es_full_lockdown");
		}
		else if (func_310(-1763509974))
		{
			func_328("nav_val_saloon_lockdown");
			func_328("nav_val_full_lockdown");
			func_328("nav_val_es_full_lockdown");
			func_328("nav_val_es");
			func_327("nav_val_es_saloon_lockdown");
		}
		else
		{
			func_328("nav_val_saloon_lockdown");
			func_328("nav_val_full_lockdown");
			func_328("nav_val_es_saloon_lockdown");
			func_328("nav_val_es_full_lockdown");
			func_327("nav_val_es");
		}
		func_313(1517736440);
		func_313(-693132475);
		func_302(-1509154451);
		func_327("nav_annesburg_es");
		func_302(158063004);
		func_327("nav_coots_graves");
		func_313(1596089211);
		func_313(-2133417899);
		func_313(1274804496);
		func_313(1597665303);
		func_313(116162819);
		func_302(-1112373128);
		func_302(-891994084);
		func_302(-84516711);
		func_302(-657241692);
		func_327("nav_cornwall_es");
		AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Cornwall_K_and_T_Endless_Summer", true, true);
		AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Cornwall_K_and_T_Normal", false, true);
		AUDIO::SET_STATIC_EMITTER_ENABLED("SE_Cornwall_Kerosene_And_Tar_Ambient_Emitter", false);
		iVar5 = func_538(2087609309);
		if (GRAPHICS::_0x113857D66A9CABE6(iVar5))
		{
			GRAPHICS::_0xBFCB17895BB99E4E(iVar5, false);
		}
		func_302(-1380983970);
		func_313(563944718);
		func_302(-1912028958);
		func_327("nav_bridge_to_old_world");
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(1883691509))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1883691509, false);
		}
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(-1647292773))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1647292773, false);
		}
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(-824533183))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-824533183, false);
		}
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(-619084588))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-619084588, false);
		}
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(672230639))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(672230639, false);
		}
		if (func_27() == -1)
		{
			if (func_539(56, &iVar7, &iVar8, 0, 0))
			{
				iVar6 = 0;
				while (iVar6 < (iVar8 - iVar7) + 1)
				{
					func_320((iVar7 + iVar6), 32);
					iVar6++;
				}
			}
			if (func_539(65, &iVar7, &iVar8, 0, 0))
			{
				iVar6 = 0;
				while (iVar6 < (iVar8 - iVar7) + 1)
				{
					func_320((iVar7 + iVar6), 32);
					iVar6++;
				}
			}
			func_320(944, 32);
			func_320(940, 32);
			func_540(1689938120);
			iVar9 = 0;
			while (iVar9 < 13)
			{
				func_542(iVar9, func_543(iVar9));
				iVar9++;
			}
		}
	}
}

void func_306()
{
	if (func_523(38))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("CIG_CARDS_LOCKED", true);
	}
	else
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("CIG_CARDS_LOCKED", false);
	}
	if (func_544())
	{
		func_545(56);
	}
	else
	{
		func_546(56);
	}
	if (func_345(44))
	{
		func_545(105);
		func_545(95);
	}
	else
	{
		func_546(105);
		func_546(95);
	}
	if (func_285(105))
	{
		func_547(func_506(105));
	}
	else if (func_548(105))
	{
		func_549(105);
	}
	if (func_285(95))
	{
		func_547(func_506(95));
	}
	else if (func_548(95))
	{
		func_549(95);
	}
	func_313(481636996);
	func_304(212);
	func_304(211);
	func_304(213);
	func_304(214);
	func_304(215);
	func_304(216);
	func_304(217);
	func_304(218);
	func_304(219);
	func_304(220);
	func_304(221);
	func_304(222);
	func_304(223);
	func_304(224);
	func_304(225);
	func_302(1454866069);
	func_302(-383442850);
	func_302(531960211);
	func_302(1020450527);
	func_302(-2041779893);
	func_302(1123990218);
	func_302(1557698400);
	func_302(2116024182);
	func_302(-1141831946);
	func_302(-1111286486);
	func_302(-1017701936);
	func_302(107317036);
	func_302(1193229750);
	func_302(1492183352);
	func_302(2123010634);
	func_302(-1664053323);
	func_302(-1375030991);
	func_302(-313992757);
	func_304(205);
	func_304(206);
	func_304(207);
	func_304(208);
	func_304(209);
	func_304(210);
	func_302(-1176501741);
	if (!func_339(44))
	{
		func_304(26);
	}
	else
	{
		func_314(26);
	}
	func_269(1121239638, 1);
	func_269(-1677757270, 1);
	func_269(906662604, 1);
	func_269(-310410837, 1);
	func_314(185);
	func_304(184);
	func_302(642301973);
	func_313(1260721433);
	func_550();
}

void func_307()
{
	Global_1934765 = &Global_1934765 + 1;
}

void func_308()
{
	int iVar0;

	func_551();
	if (func_27() == 0)
	{
		func_302(-1253110600);
		func_302(-1402083909);
	}
	iVar0 = -1;
	if (func_310(704802028))
	{
		func_302(-1012618146);
		func_302(-722030448);
		func_327("nav_mesh_beech_shack");
		func_302(-1253110600);
		func_302(-1402083909);
		func_302(1970695826);
		func_302(-382865315);
		func_302(-904669171);
		func_302(774601424);
		func_302(-584332967);
		func_302(-1615103170);
		func_302(1256771838);
		func_302(-1765152778);
		func_302(-2072231077);
		func_302(19217583);
	}
	else if (func_310(588987611))
	{
		func_302(-1012618146);
		func_302(-722030448);
		func_302(1757739778);
		func_327("nav_mesh_beech_shack_with_fire");
		func_302(578474998);
		func_302(-1253110600);
		func_302(-1402083909);
		func_302(1970695826);
		func_302(-382865315);
	}
	else if (func_310(2008888900))
	{
		func_302(-1012618146);
		func_302(1757739778);
		func_327("nav_mesh_beech_shack_with_fire");
		func_302(197447134);
		func_302(578474998);
		func_302(-1253110600);
		func_302(-1402083909);
		func_302(1970695826);
		func_302(-382865315);
		func_313(-722030448);
	}
	else if (func_310(1649996811))
	{
		func_302(197447134);
		func_327("nav_mesh_beech_camp_with_rubble");
		func_302(578474998);
		func_302(-1253110600);
		func_302(-1402083909);
		func_302(1970695826);
		func_302(-382865315);
		func_302(2111816145);
	}
	else if (func_310(227918160))
	{
		func_302(197447134);
		func_302(-1253110600);
		func_302(-1402083909);
		func_302(1970695826);
		func_302(-382865315);
		func_302(578474998);
		func_327("nav_mesh_beech_camp_with_supplies");
	}
	else if (func_310(168171957))
	{
		func_302(197447134);
		func_302(-1667461262);
		func_302(-974480336);
		func_302(411742897);
		func_302(1344772301);
		func_302(1467774743);
		func_302(43335376);
		func_327("nav_mesh_beech_house_finished");
		func_302(-284612948);
		func_302(-1325016116);
		func_302(578474998);
		func_304(111);
		func_304(116);
		func_304(100);
		func_304(101);
	}
	else if (func_310(1193080109))
	{
		func_302(-1667461262);
		func_302(411742897);
		func_302(1344772301);
		func_302(1467774743);
		func_302(-956131204);
		func_302(578474998);
		func_302(43335376);
		func_302(1353861354);
		func_302(1205945639);
		func_327("nav_mesh_beech_barn_finished");
		func_302(-284612948);
		func_302(431365499);
		func_302(276582710);
		func_302(1191890045);
		func_302(1864768904);
		func_302(-692583342);
		func_302(-918785150);
		func_304(116);
		func_304(100);
		func_304(102);
		func_304(103);
		if (func_70(75) && !func_552(119))
		{
			func_304(118);
		}
		else
		{
			func_314(118);
		}
		func_304(104);
		func_304(105);
		func_304(111);
		if (func_552(108))
		{
			func_314(107);
		}
		else
		{
			func_304(107);
		}
	}
	else if (func_310(-639037538))
	{
		func_302(-1667461262);
		func_302(411742897);
		func_302(1467774743);
		func_302(-956131204);
		func_302(1353861354);
		func_327("nav_mesh_beech_house_decor");
		func_302(578474998);
		func_302(1236917971);
		func_302(43335376);
		func_302(-284612948);
		func_302(-2090209059);
		func_302(1977031606);
		func_302(1929454697);
		func_302(938290967);
		func_302(1532009326);
		func_302(1344772301);
		func_302(-918785150);
		func_302(-692583342);
		func_302(-803019223);
		func_344(-803019223);
		func_302(-1860722801);
		func_302(637627640);
		func_302(349494711);
		func_304(117);
		func_304(116);
		func_304(100);
		func_304(109);
		func_304(102);
		func_304(110);
		func_304(106);
		if (!func_552(119))
		{
			func_304(118);
		}
		else
		{
			func_314(118);
		}
		func_304(111);
	}
	else if (func_310(-491981251))
	{
		func_302(-1667461262);
		func_302(411742897);
		func_302(1467774743);
		func_302(-956131204);
		func_302(1353861354);
		func_327("nav_mesh_beech_house_decor");
		func_302(578474998);
		func_302(1236917971);
		func_302(43335376);
		func_302(-284612948);
		func_302(-2090209059);
		func_302(1977031606);
		func_302(1929454697);
		func_302(938290967);
		func_302(1532009326);
		func_302(1344772301);
		func_302(-918785150);
		func_302(-692583342);
		func_302(-803019223);
		func_344(-803019223);
		func_302(-1860722801);
		func_302(637627640);
		func_302(349494711);
		func_304(117);
		func_304(116);
		func_304(100);
		func_304(109);
		func_304(102);
		func_304(110);
		if (func_552(108))
		{
			func_314(107);
		}
		else
		{
			func_304(107);
		}
		if (!func_552(119))
		{
			func_304(118);
		}
		else
		{
			func_314(118);
		}
		func_304(111);
	}
	else if (func_310(-618620429))
	{
		func_302(-1667461262);
		func_302(411742897);
		func_302(1467774743);
		func_302(-956131204);
		func_302(1353861354);
		func_327("nav_mesh_beech_house_completed");
		func_302(578474998);
		func_302(1236917971);
		func_302(43335376);
		func_302(-284612948);
		func_302(349494711);
		func_302(1965249616);
		func_302(-2021605623);
		func_302(1649902358);
		func_302(1169279648);
		func_302(1532009326);
		func_302(1344772301);
		func_302(-918785150);
		func_302(-692583342);
		func_302(-803019223);
		func_344(-803019223);
		func_302(-1860722801);
		func_302(637627640);
		func_302(-218940381);
		if (!func_552(119))
		{
			func_304(118);
		}
		else
		{
			func_314(118);
		}
		func_304(117);
		func_304(116);
		func_304(100);
		func_304(109);
		func_304(102);
		func_304(112);
		func_304(113);
		func_304(111);
		func_304(113);
		if (func_552(115))
		{
			func_314(114);
		}
		else
		{
			func_304(114);
		}
	}
	if (Global_1934765->f_300 != iVar0)
	{
		if (Global_1934765->f_300 != -1)
		{
			MAP::_0xE057FEA9A22EB3EE(-749646899);
		}
		MAP::_0x1392105DA88BBFFB(-749646899, -1640f, -1370f, 0, iVar0);
		Global_1934765->f_300 = iVar0;
	}
}

void func_309()
{
	vector3 vVar0;
	vector3 vVar10;

	if (func_310(-1215445344))
	{
		func_313(-661560211);
		func_302(-1989899190);
		func_302(-784156210);
		if (func_345(45))
		{
			func_328("nav_val_saloon_lockdown");
			func_328("nav_val_full_lockdown");
			func_328("nav_val_es_saloon_lockdown");
			func_328("nav_val_es");
			func_327("nav_val_es_full_lockdown");
		}
		else
		{
			func_328("nav_val_saloon_lockdown");
			func_328("nav_val_es_saloon_lockdown");
			func_328("nav_val_es_full_lockdown");
			func_328("nav_val_es");
			func_327("nav_val_full_lockdown");
		}
	}
	else
	{
		func_313(-1989899190);
		func_313(-784156210);
		func_302(-661560211);
		if (func_345(45))
		{
			func_328("nav_val_saloon_lockdown");
			func_328("nav_val_full_lockdown");
			func_328("nav_val_es_saloon_lockdown");
			func_328("nav_val_es_full_lockdown");
			func_327("nav_val_es");
		}
		else
		{
			func_328("nav_val_saloon_lockdown");
			func_328("nav_val_es_saloon_lockdown");
			func_328("nav_val_es_full_lockdown");
			func_328("nav_val_es");
			func_328("nav_val_full_lockdown");
		}
	}
	if (func_310(-254562075))
	{
		func_313(-1049500949);
		func_302(-981203673);
		func_302(-2009766528);
	}
	else
	{
		func_313(-981203673);
		func_313(-2009766528);
		func_302(-1049500949);
	}
	if (func_310(320943355))
	{
		func_313(135886022);
		func_302(1228600352);
		func_302(406334892);
	}
	else
	{
		func_313(1228600352);
		func_313(406334892);
		func_302(135886022);
	}
	if (func_310(689024866))
	{
		func_313(-1933617196);
		func_302(951314072);
		func_302(-1905652203);
	}
	else
	{
		func_313(951314072);
		func_313(-1905652203);
		func_302(-1933617196);
	}
	if (func_310(1160698568))
	{
		func_313(-1588793465);
		func_302(-780819048);
		func_302(1519091923);
		func_333(1879307167, 1, 0, 0, 0, 0, 0, 0);
		func_333(540459374, 1, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		func_313(-780819048);
		func_313(1519091923);
		func_302(-1588793465);
		func_333(1879307167, 0, 0, 0, 1, 0, 0, 0);
		func_333(540459374, 0, 0, 0, 1, 0, 0, 0);
	}
	if (func_310(-1179948750))
	{
		func_313(1325716092);
		func_302(-1301569116);
		func_302(-554932707);
	}
	else
	{
		func_313(-1301569116);
		func_313(-554932707);
		func_302(1325716092);
	}
	if (func_310(1713221411))
	{
		func_313(924412185);
		func_302(-52140817);
		func_302(-156313117);
	}
	else
	{
		func_313(-52140817);
		func_313(-156313117);
		func_302(924412185);
	}
	if (func_310(300221584))
	{
		func_313(-1781246069);
		func_302(282485265);
		func_302(-1744253204);
	}
	else
	{
		func_313(282485265);
		func_313(-1744253204);
		func_302(-1781246069);
	}
	if (func_310(-220282381))
	{
		func_313(-1892595931);
		func_302(56708243);
	}
	else
	{
		func_313(56708243);
		func_302(-1892595931);
	}
	if (func_310(-1329135070))
	{
		func_313(-1158072415);
		func_302(199047531);
		func_302(192173299);
		func_553(32, 1);
	}
	else
	{
		func_313(199047531);
		func_313(192173299);
		func_302(-1158072415);
		if ((!func_554(9, 0) && !func_555(5)) && !func_556(5))
		{
			vVar0 = -1;
			vVar0.f_1 = -1;
			vVar0.f_2 = -1;
			func_557(32, &vVar0, 1);
			func_558(&vVar0, 1, 1);
		}
	}
	if (func_310(-1763509974))
	{
		func_302(-776975047);
		func_302(1385025009);
		if (!func_310(-1215445344))
		{
			if (func_345(45))
			{
				func_328("nav_val_saloon_lockdown");
				func_328("nav_val_full_lockdown");
				func_328("nav_val_es");
				func_328("nav_val_es_full_lockdown");
				func_327("nav_val_es_saloon_lockdown");
			}
			else
			{
				func_328("nav_val_saloon_lockdown");
				func_328("nav_val_es_saloon_lockdown");
				func_328("nav_val_full_lockdown");
				func_328("nav_val_es_full_lockdown");
				func_328("nav_val_es");
				func_327("nav_val_saloon_lockdown");
			}
		}
		func_333(-908482159, 1, 0, 0, 0, 0, 0, 0);
		func_333(-1147728628, 1, 0, 0, 0, 0, 0, 0);
		func_333(968874193, 1, 0, 0, 0, 0, 0, 0);
		func_333(1154795503, 1, 0, 0, 0, 0, 0, 0);
		func_333(583884620, 1, 0, 0, 0, 0, 0, 0);
		func_333(261929195, 1, 0, 0, 0, 0, 0, 0);
		OBJECT::_0x7F458B543006C8FE(-908482159, 28);
		OBJECT::_0x7F458B543006C8FE(-1147728628, 28);
		OBJECT::_0x7F458B543006C8FE(968874193, 28);
		OBJECT::_0x7F458B543006C8FE(1154795503, 28);
		OBJECT::_0x7F458B543006C8FE(583884620, 28);
		OBJECT::_0x7F458B543006C8FE(261929195, 28);
	}
	else
	{
		func_313(-776975047);
		func_313(1385025009);
		func_333(-908482159, 0, 0, 0, 1, 0, 0, 0);
		func_333(-1147728628, 0, 0, 0, 1, 0, 0, 0);
		func_333(968874193, 0, 0, 0, 1, 0, 0, 0);
		func_333(1154795503, 0, 0, 0, 1, 0, 0, 0);
		func_333(583884620, 0, 0, 0, 1, 0, 0, 0);
		func_333(261929195, 0, 0, 0, 1, 0, 0, 0);
		OBJECT::_0x0C0A373D181BF900(-908482159);
		OBJECT::_0x0C0A373D181BF900(-1147728628);
		OBJECT::_0x0C0A373D181BF900(968874193);
		OBJECT::_0x0C0A373D181BF900(1154795503);
		OBJECT::_0x0C0A373D181BF900(583884620);
		OBJECT::_0x0C0A373D181BF900(261929195);
		if (func_345(45))
		{
			func_328("nav_val_saloon_lockdown");
			func_328("nav_val_full_lockdown");
			func_328("nav_val_es_saloon_lockdown");
			func_328("nav_val_es_full_lockdown");
			func_327("nav_val_es");
		}
		else
		{
			func_328("nav_val_saloon_lockdown");
			func_328("nav_val_es_saloon_lockdown");
			func_328("nav_val_es_full_lockdown");
			func_328("nav_val_es");
			func_328("nav_val_full_lockdown");
		}
	}
	if (func_27() == -1)
	{
		if (func_310(-1206122982))
		{
			func_320(450, 32);
			func_320(451, 32);
			func_320(452, 32);
			func_320(453, 32);
			func_320(466, 32);
			func_320(467, 32);
			func_320(471, 32);
			func_320(464, 32);
		}
		else
		{
			func_319(450, 32);
			func_319(451, 32);
			func_319(452, 32);
			func_319(453, 32);
			func_319(466, 32);
			func_319(467, 32);
			func_319(471, 32);
			func_319(464, 32);
		}
		if (func_310(-666014935))
		{
			func_333(-1069042457, 1, 0, 0, 0, 0, 0, 0);
			func_333(244699522, 1, 0, 0, 0, 0, 0, 0);
			func_333(-590254598, 1, 0, 0, 0, 0, 0, 0);
			func_333(-1425307025, 1, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			func_333(-1069042457, 0, 0, 0, 1, 0, 0, 0);
			func_333(244699522, 0, 0, 0, 1, 0, 0, 0);
			func_333(-590254598, 0, 0, 0, 1, 0, 0, 0);
			func_333(-1425307025, 0, 0, 0, 1, 0, 0, 0);
		}
		if (func_310(1074873669))
		{
			func_320(433, 32);
		}
		else
		{
			func_319(433, 32);
		}
		if (func_310(-1579419919))
		{
			func_333(551601484, 1, 0, 0, 0, 0, 0, 0);
			func_333(-1842720100, 1, 0, 0, 0, 0, 0, 0);
			func_333(-983069384, 1, 0, 0, 0, 0, 0, 0);
			func_333(-768760124, 1, 0, 0, 0, 0, 0, 0);
			func_333(-1974086289, 1, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			func_333(551601484, 0, 0, 0, 1, 0, 0, 0);
			func_333(-1842720100, 0, 0, 0, 1, 0, 0, 0);
			func_333(-983069384, 0, 0, 0, 1, 0, 0, 0);
			func_333(-768760124, 0, 0, 0, 1, 0, 0, 0);
			func_333(-1974086289, 0, 0, 0, 1, 0, 0, 0);
		}
		if (func_310(478884033))
		{
			func_320(83, 32);
			func_320(84, 32);
			func_320(85, 32);
			func_320(86, 32);
			func_320(87, 32);
			func_320(79, 32);
		}
		else
		{
			func_319(83, 32);
			func_319(84, 32);
			func_319(85, 32);
			func_319(86, 32);
			func_319(87, 32);
			func_319(79, 32);
		}
		if (func_310(-191424539))
		{
			func_333(-1247339802, 1, 0, 0, 0, 0, 0, 0);
			func_333(2046695029, 1, 0, 0, 0, 0, 0, 0);
			func_333(834296435, 1, 0, 0, 0, 0, 0, 0);
			func_333(1124531468, 1, 0, 0, 0, 0, 0, 0);
			func_333(-902483455, 1, 0, 0, 0, 0, 0, 0);
			func_333(-566797819, 1, 0, 0, 0, 0, 0, 0);
			func_333(1469250492, 1, 0, 0, 0, 0, 0, 0);
			func_333(678501753, 1, 0, 0, 0, 0, 0, 0);
			func_333(-1079073283, 1, 0, 0, 0, 0, 0, 0);
			func_333(-860602360, 1, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			func_333(-1247339802, 0, 0, 0, 1, 0, 0, 0);
			func_333(2046695029, 0, 0, 0, 1, 0, 0, 0);
			func_333(834296435, 0, 0, 0, 1, 0, 0, 0);
			func_333(1124531468, 0, 0, 0, 1, 0, 0, 0);
			func_333(-902483455, 0, 0, 0, 1, 0, 0, 0);
			func_333(-566797819, 0, 0, 0, 1, 0, 0, 0);
			func_333(1469250492, 0, 0, 0, 1, 0, 0, 0);
			func_333(678501753, 0, 0, 0, 1, 0, 0, 0);
			func_333(-1079073283, 0, 0, 0, 1, 0, 0, 0);
			func_333(-860602360, 0, 0, 0, 1, 0, 0, 0);
		}
		if (func_310(-397760715))
		{
			func_333(1098854605, 1, 0, 0, 0, 0, 0, 0);
			func_333(1013933832, 1, 0, 0, 0, 0, 0, 0);
			func_553(19, 1);
		}
		else
		{
			func_333(1098854605, 0, 0, 0, 1, 0, 0, 0);
			func_333(1013933832, 0, 0, 0, 1, 0, 0, 0);
			if ((!func_554(9, 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(2082765849) <= 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(203152483) <= 0)
			{
				vVar10 = -1;
				vVar10.f_1 = -1;
				vVar10.f_2 = -1;
				func_557(19, &vVar10, 1);
				func_558(&vVar10, 1, 1);
			}
		}
		if (func_310(2639906))
		{
			func_333(-1334037078, 1, 0, 0, 0, 0, 0, 0);
			func_333(-1641377529, 1, 0, 0, 0, 0, 0, 0);
			func_333(-74215266, 1, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			func_333(-1334037078, 0, 0, 0, 1, 0, 0, 0);
			func_333(-1641377529, 0, 0, 0, 1, 0, 0, 0);
			func_333(-74215266, 0, 0, 0, 1, 0, 0, 0);
		}
		if (func_310(1660024373))
		{
			func_320(320, 32);
			func_320(317, 32);
			func_320(318, 32);
			func_320(319, 32);
			func_320(250, 32);
		}
		else
		{
			func_319(320, 32);
			func_319(317, 32);
			func_319(318, 32);
			func_319(319, 32);
			func_319(250, 32);
		}
		if (func_310(-1063147448))
		{
			func_333(-399528504, 1, 0, 0, 0, 0, 0, 0);
			func_333(804086151, 1, 0, 0, 0, 0, 0, 0);
			func_333(-923901632, 1, 0, 0, 0, 0, 0, 0);
			func_333(-438789356, 1, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			func_333(-399528504, 0, 0, 0, 1, 0, 0, 0);
			func_333(804086151, 0, 0, 0, 1, 0, 0, 0);
			func_333(-923901632, 0, 0, 0, 1, 0, 0, 0);
			func_333(-438789356, 0, 0, 0, 1, 0, 0, 0);
		}
		if (func_310(-80522843))
		{
			func_320(354, 32);
			func_320(367, 32);
			func_320(368, 32);
			func_320(369, 32);
			func_320(370, 32);
			func_320(371, 32);
			func_320(886, 32);
		}
		else
		{
			func_319(354, 32);
			func_319(367, 32);
			func_319(368, 32);
			func_319(86, 32);
			func_319(370, 32);
			func_319(371, 32);
			func_319(886, 32);
		}
		if (func_310(-1523910291))
		{
			func_333(2094297354, 1, 0, 0, 0, 0, 0, 0);
			func_333(1892085175, 1, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			func_333(2094297354, 0, 0, 0, 1, 0, 0, 0);
			func_333(1892085175, 0, 0, 0, 1, 0, 0, 0);
		}
	}
}

bool func_310(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_559(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return MISC::IS_BIT_SET(&(Global_40.f_283[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_1058888->f_40567[iVar1]), iVar2);
}

bool func_311(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_312(int iParam0, int iParam1)
{
	(*Global_1897952)[iParam0 /*2*/] = (Global_1897952[iParam0 /*2*/] || iParam1);
}

void func_313(int iParam0)
{
	if (STREAMING::_IS_IMAP_ACTIVE(iParam0))
	{
		STREAMING::_REMOVE_IMAP(iParam0);
	}
}

void func_314(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::CLEAR_BIT(Global_1934765->f_21[iVar1], iVar2);
}

void func_315(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (func_310(iParam0))
	{
		if (func_311(Global_1934765->f_20, iParam2))
		{
			iVar0 = func_458(iParam1);
			if (VOLUME::_0x92A78D0BEDB332A3(iVar0))
			{
				POPULATION::_0xA1CFB35069D23C23(iVar0);
				POPULATION::_0x74C2B3DC0B294102(iVar0);
				func_85(&(Global_1934765->f_20), iParam2);
			}
		}
	}
	else if (!func_311(Global_1934765->f_20, iParam2))
	{
		iVar1 = func_458(iParam1);
		if (VOLUME::_0x92A78D0BEDB332A3(iVar1))
		{
			POPULATION::_0x18262CAFEBB5FBE1(iVar1, iParam3, 0, 0, -1, -1, 0);
			POPULATION::_0xB56D41A694E42E86(iVar1, iParam3, 0, 0, -1, -1, 0);
			func_84(&(Global_1934765->f_20), iParam2);
		}
	}
}

int func_316(int iParam0)
{
	if (!func_560(iParam0))
	{
		return 0;
	}
	return ((*Global_1835011)[iParam0 /*74*/])->f_1;
}

int func_317(int iParam0)
{
	if (!func_46(iParam0))
	{
		return -1;
	}
	return func_561(iParam0);
}

bool func_318(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_319(int iParam0, int iParam1)
{
	if (func_27() != -1)
	{
		return;
	}
	if (!func_562(iParam0))
	{
		return;
	}
	Global_24886[iParam0 /*2*/] = (&Global_24886[iParam0 /*2*/] - (Global_24886[iParam0 /*2*/] && iParam1));
}

void func_320(int iParam0, int iParam1)
{
	if (func_27() != -1)
	{
		return;
	}
	if (!func_562(iParam0))
	{
		return;
	}
	Global_24886[iParam0 /*2*/] = (Global_24886[iParam0 /*2*/] || iParam1);
}

int func_321(int iParam0, bool bParam1)
{
	if (!func_562(iParam0))
	{
		return 0;
	}
	if (!func_336(iParam0, 2))
	{
		return 0;
	}
	if (func_563(iParam0) == 0)
	{
		return 1;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(func_564(iParam0)))
	{
		return 1;
	}
	if (func_336(iParam0, 1) && !bParam1)
	{
		func_320(iParam0, 128);
		return 1;
	}
	func_319(iParam0, 129);
	func_565(iParam0);
	_NAMESPACE48::_0xFC77C5B44D5FF7C0(func_564(iParam0));
	func_566(iParam0, 0);
	return 1;
}

void func_322(int iParam0, int iParam1)
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

void func_323()
{
	if (!func_310(0))
	{
		func_313(1149195254);
		func_313(2016081133);
		func_313(363257921);
		func_313(58066174);
		func_313(-1521525254);
		func_313(-761186147);
		func_313(-1872939092);
		func_313(-964156415);
	}
	else
	{
		func_313(-1643869063);
	}
	if (!func_310(473295046))
	{
		func_313(-1108618313);
		func_313(-787678727);
	}
	if (!func_310(-1738165526))
	{
		func_313(622597018);
		func_313(1649275138);
	}
	func_313(-2137633069);
	func_313(1944013855);
	func_313(-437251660);
	func_314(124);
	func_314(125);
	func_314(187);
	func_314(188);
	func_314(123);
	func_314(122);
	func_314(121);
	func_314(120);
	func_328("bra_man_burned");
	func_328("bra_man_burned_bra3");
	func_328("bra_man_endsum");
}

void func_324(bool bParam0)
{
	func_567(-1452136643, bParam0);
	func_567(-744260705, bParam0);
	func_567(1424293412, bParam0);
	func_567(1060557512, bParam0);
	func_567(-362403544, bParam0);
	func_567(-592147003, bParam0);
	func_567(2056145270, bParam0);
	func_567(748826019, bParam0);
	func_567(366542865, bParam0);
	func_567(-1508467572, bParam0);
	func_567(-1220264217, bParam0);
	func_567(-990258606, bParam0);
	func_567(-1508467572, bParam0);
	func_567(-1220264217, bParam0);
	func_567(-990258606, bParam0);
	func_567(-665583358, bParam0);
	func_567(-282972514, bParam0);
	func_567(-64632667, bParam0);
	func_567(314111435, bParam0);
	func_567(24859476, bParam0);
	func_567(340621560, bParam0);
	func_567(1266707689, bParam0);
	func_567(434145706, bParam0);
	func_567(654746614, bParam0);
	func_567(1965736001, bParam0);
	func_567(1650694835, bParam0);
	func_567(1891284833, bParam0);
	func_567(1576931820, bParam0);
	func_567(1812999696, bParam0);
	func_567(-1184151355, bParam0);
	func_567(-946313953, bParam0);
	func_567(-889100155, bParam0);
	func_567(-1296418825, bParam0);
	func_567(352816221, !bParam0);
	func_567(1128622296, !bParam0);
	func_567(979982112, !bParam0);
	func_567(1756640181, !bParam0);
	func_567(1557076971, !bParam0);
	func_567(1913538153, !bParam0);
	func_567(-1603329230, !bParam0);
	func_567(-1892843345, !bParam0);
	func_567(241205019, !bParam0);
}

void func_325(int iParam0, int iParam1)
{
	func_333(iParam0, 0, 0, 0, 1, 0, 0, 0);
}

int func_326(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_207(iParam0))
	{
		return 0;
	}
	if (!func_539(iParam0, &iVar1, &iVar2, 0, 0))
	{
		return 0;
	}
	iVar3 = 1;
	iVar0 = 0;
	while (iVar0 < (iVar2 - iVar1) + 1)
	{
		if (!func_337((iVar1 + iVar0)))
		{
			iVar3 = 0;
		}
		iVar0++;
	}
	return iVar3;
}

void func_327(char* sParam0)
{
	if (!PATHFIND::_0x5AC0944C156E5F44(sParam0))
	{
		PATHFIND::_0x7C334FF4D9215912(sParam0);
	}
}

void func_328(char* sParam0)
{
	if (PATHFIND::_0x5AC0944C156E5F44(sParam0))
	{
		PATHFIND::_0x527B97C203BB8606(sParam0);
	}
}

void func_329()
{
	if (func_310(-919512195))
	{
		func_313(419559004);
		func_313(1786931635);
		func_313(557212279);
		func_313(1426715569);
		func_313(2097480406);
		func_328("cal_nav_tabacco_burnt");
		func_328("cal_nav_tabacco_burning");
		func_328("cal_nav_tabacco_mission");
		func_302(702350293);
		func_302(-677977650);
		func_302(26815048);
		func_302(-1229109520);
		func_327("cal_nav_tabacco_clean");
	}
	else if (func_310(-1925798111))
	{
		func_313(419559004);
		func_313(1786931635);
		func_313(557212279);
		func_328("cal_nav_tabacco_burnt");
		func_328("cal_nav_tabacco_burning");
		func_328("cal_nav_tabacco_clean");
		func_302(702350293);
		func_302(-677977650);
		func_302(26815048);
		func_302(-1229109520);
		func_302(1426715569);
		func_302(2097480406);
		func_327("cal_nav_tabacco_mission");
	}
	else if (func_310(420709909))
	{
		func_313(419559004);
		func_313(26815048);
		func_313(-1229109520);
		func_328("cal_nav_tabacco_burnt");
		func_328("cal_nav_tabacco_clean");
		func_328("cal_nav_tabacco_mission");
		func_302(702350293);
		func_302(-677977650);
		func_302(1786931635);
		func_302(557212279);
		func_302(1426715569);
		func_302(2097480406);
		func_327("cal_nav_tabacco_burning");
	}
	else if (func_310(1703426636))
	{
		func_313(702350293);
		func_313(-677977650);
		func_313(26815048);
		func_313(-1229109520);
		func_313(1426715569);
		func_313(2097480406);
		func_328("cal_nav_tabacco_clean");
		func_328("cal_nav_tabacco_mission");
		func_328("cal_nav_tabacco_burning");
		func_302(419559004);
		func_302(1786931635);
		func_302(557212279);
		func_327("cal_nav_tabacco_burnt");
	}
}

void func_330()
{
	func_313(-717025835);
	func_313(1248111234);
	if (!func_310(1884271742) && !func_310(-2038424081))
	{
		func_313(-1316886711);
		func_313(867231253);
	}
	if (!func_310(356365161))
	{
		func_313(474287981);
		func_313(-1670453688);
	}
	func_313(2039534767);
	func_313(-1451954802);
	func_313(-323126593);
	func_313(1590561203);
	func_313(205214733);
	if (!func_310(-1187950766) && !func_310(356365161))
	{
		func_313(-338553155);
		func_313(-1106668087);
		func_313(-1636879249);
	}
	func_314(186);
	if (!func_310(356365161))
	{
		func_328("col_nav_wint1_cabin_prefire");
	}
	func_328("col_nav_wint1_cabin_duringfire");
	func_328("col_nav_wint2_post");
	func_328("col_nav_wint_end");
}

void func_331(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_559(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		MISC::CLEAR_BIT(Global_40.f_283[iVar1], iVar2);
	}
	else
	{
		iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (iVar3 == 255)
		{
			Global_1058888->f_40567.f_46 = 1;
			MISC::CLEAR_BIT(Global_1058888->f_40567.f_14[iVar1], iVar2);
		}
		else
		{
			MISC::CLEAR_BIT(((*Global_1055058)[iVar3 /*116*/])->f_72[iVar1], iVar2);
		}
	}
	Global_1934765 = 0;
}

void func_332()
{
	if (func_310(371850993))
	{
		func_302(263152228);
		func_302(1936009597);
	}
	else
	{
		func_313(263152228);
		func_313(1936009597);
	}
}

void func_333(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_568(iParam0, 0, 0);
	if (func_569(iParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, iParam2, iParam6);
		if (fParam5 > 0f)
		{
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_570(iParam0, iParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_571(iParam0, 1);
			}
			else
			{
				func_572(iParam0, 1);
			}
		}
		else
		{
			func_573(iParam0, 1);
		}
		if (bParam7)
		{
			OBJECT::_0x276AAF0F1C7F2494(iParam0, 1);
		}
	}
	else if (func_574())
	{
	}
	else if (NETWORK::NETWORK_IS_IN_SESSION())
	{
	}
}

void func_334(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_1310750->f_16074 = (Global_1310750->f_16074 || iParam0);
	}
	else
	{
		Global_1310750->f_16074 = (Global_1310750->f_16074 - (Global_1310750->f_16074 && iParam0));
	}
}

void func_335()
{
	if (!func_310(-1053549743))
	{
		func_313(1033721560);
	}
	func_313(1343484786);
	func_313(1871051363);
	func_313(146746575);
	func_313(-2144587490);
	func_313(1989074279);
	func_313(-1671953459);
	func_328("rho_nav_grave_norm_gry3_off");
	func_328("rho_nav_grave_norm_gry3_on");
	func_328("rho_nav_grave_dug_gry3_off");
	func_328("rho_nav_grave_dug_gry3_on");
	func_328("rho_nav_grave_open_gry3_off");
	func_328("rho_nav_grave_open_gry3_on");
	func_328("sad3_nav_rhodes_shootout_00");
}

bool func_336(int iParam0, int iParam1)
{
	if (func_27() != -1)
	{
		return false;
	}
	if (!func_562(iParam0))
	{
		return false;
	}
	return (Global_24886[iParam0 /*2*/] && iParam1) != 0;
}

int func_337(int iParam0)
{
	int iVar0;

	if (!func_562(iParam0))
	{
		return 0;
	}
	if (!func_575(func_563(iParam0)))
	{
		return 1;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(func_564(iParam0)))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(_NAMESPACE48::_0x31C70A716CAE1FEE(func_564(iParam0))))
		{
			return 1;
		}
	}
	iVar0 = _NAMESPACE48::_0x31C70A716CAE1FEE(func_564(iParam0));
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
		}
	}
	_NAMESPACE48::_0x7B204F88F6C3D287(func_564(iParam0));
	return 1;
}

int func_338(int iParam0)
{
	if (!func_562(iParam0))
	{
		return 0;
	}
	if (!func_575(func_563(iParam0)))
	{
		return 1;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(func_564(iParam0)))
	{
		return 0;
	}
	_NAMESPACE48::_0x4F81EAD1DE8FA19B(func_564(iParam0));
	return 1;
}

int func_339(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_576(((*Global_1835011)[iParam0 /*74*/])->f_1);
}

void func_340(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::CLEAR_BIT(Global_1934765->f_30[iVar1], iVar2);
}

float func_341(float fParam0)
{
	return (fParam0 * 0.01745329f);
}

int func_342()
{
	if (func_27() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == 11966224)
	{
		return 1;
	}
	return 0;
}

void func_343(int iParam0)
{
	if (GRAPHICS::_0xDE9BAD3292AA6D5E(iParam0))
	{
		GRAPHICS::_0xDD0BC0EDCB2162F6(iParam0);
	}
}

void func_344(int iParam0)
{
	if (!GRAPHICS::_0xDE9BAD3292AA6D5E(iParam0))
	{
		GRAPHICS::_0xDFEA23EC90113657(iParam0);
	}
}

int func_345(int iParam0)
{
	if (!func_577(iParam0))
	{
		return 0;
	}
	return func_578(iParam0);
}

int func_346(int iParam0)
{
	switch (func_27())
	{
		case -1:
			return (Global_1357549->f_1495 && iParam0) != 0;
	}
	return 0;
}

void func_347(int iParam0)
{
	switch (func_27())
	{
		case -1:
			Global_1357549->f_1495 = (Global_1357549->f_1495 || iParam0);
			break;
	}
}

int func_348(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_207(iParam0))
	{
		return 0;
	}
	if (!func_539(iParam0, &iVar1, &iVar2, 0, 0))
	{
		return 0;
	}
	iVar3 = 1;
	iVar0 = 0;
	while (iVar0 < (iVar2 - iVar1) + 1)
	{
		if (!func_338((iVar1 + iVar0)))
		{
			iVar3 = 0;
		}
		iVar0++;
	}
	return iVar3;
}

void func_349(int iParam0)
{
	switch (func_27())
	{
		case -1:
			Global_1357549->f_1495 = (Global_1357549->f_1495 - (Global_1357549->f_1495 && iParam0));
			break;
	}
}

int func_350(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_207(iParam0))
	{
		return 0;
	}
	if (!func_539(iParam0, &iVar1, &iVar2, 0, 0))
	{
		return 0;
	}
	iVar3 = 1;
	iVar0 = 0;
	while (iVar0 < (iVar2 - iVar1) + 1)
	{
		if (!func_321((iVar1 + iVar0), 0))
		{
			iVar3 = 0;
		}
		iVar0++;
	}
	return iVar3;
}

void func_351()
{
	if (func_310(-2020023971))
	{
		func_313(758684739);
		func_313(-661825463);
		func_302(518127510);
		func_314(182);
		func_304(181);
	}
	else
	{
		func_313(518127510);
		func_302(758684739);
		func_302(-661825463);
		func_314(181);
		func_304(182);
	}
}

bool func_352(int iParam0)
{
	if (!(iParam0 >= 0 && iParam0 <= 150))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return Global_23117[iParam0 /*11*/] & 32 != 0;
	}
	return Global_1058888->f_40615[iParam0 /*11*/] & 32 != 0;
}

void func_353()
{
	func_328("nav_sdn_docks_pre_es");
	func_328("nav_sdn_docks_korrigan_pre_es");
	func_328("nav_sdn_docks_antenor_pre_es");
	func_328("nav_sdn_docks_trains_pre_es");
	func_328("nav_sdn_docks_korrigan_antenor_pre_es");
	func_328("nav_sdn_docks_antenor_trains_pre_es");
	func_328("nav_sdn_docks_korrigan_trains_pre_es");
	func_328("nav_sdn_docks_korrigan_antenor_trains_pre_es");
	func_328("nav_sdn_docks_es");
	func_328("nav_sdn_docks_korrigan_es");
	func_328("nav_sdn_docks_antenor_es");
	func_328("nav_sdn_docks_trains_es");
	func_328("nav_sdn_docks_korrigan_antenor_es");
	func_328("nav_sdn_docks_antenor_trains_es");
	func_328("nav_sdn_docks_korrigan_trains_es");
	func_328("nav_sdn_docks_korrigan_antenor_trains_es");
}

void func_354(var uParam0, vector3 vParam1, float fParam4)
{
	if (*uParam0 == -1)
	{
		*uParam0 = GRAPHICS::_0xFA50F79257745E74(vParam1, fParam4, 1, -1, 0);
	}
}

void func_355(int iParam0, int iParam1)
{
	if (*iParam0 != -1)
	{
		GRAPHICS::_0x9CF1836C03FB67A2(iParam0, iParam1);
		*iParam0 = -1;
	}
}

void func_356(int iParam0, int iParam1)
{
	if (func_310(iParam0))
	{
		func_302(iParam1);
	}
	else
	{
		func_313(iParam1);
	}
}

int func_357()
{
	return Global_40.f_4283;
}

int func_358(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, int iParam7, bool bParam8, float fParam9)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (!bParam8 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_213(vParam0))
	{
		return 0;
	}
	iVar1 = 0;
	if (!bParam5)
	{
		iVar1 |= 2;
	}
	iVar1 |= 1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam6))
	{
		if (func_579(vParam0))
		{
			return 0;
		}
		iVar0 = VOLUME::_0x00BBF7CEAE8C666A(vParam0, fParam3, iVar1, 0);
	}
	else
	{
		vVar2 = { ENTITY::GET_ENTITY_COORDS(iParam6, false, false) };
		iVar0 = VOLUME::_0xF383E96C4904DF0C(iParam6, fParam3, iVar1, 0);
	}
	if (iParam7 != 0)
	{
		VOLUME::_0xB440F4E35393FC39(iVar0, iParam7);
	}
	if (fParam9 >= 0f)
	{
		VOLUME::_0xD460135C98940274(iVar0, fParam9);
	}
	func_580(iVar0, bParam8);
	return iVar0;
}

void func_359(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_213(vParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1911670)
	{
		iVar1 = Global_1911670[iVar0];
		if (VOLUME::_0xF6A8A652A6B186CD(iVar1))
		{
			vVar2 = { VOLUME::_0xC4019CF9AE8E931A(iVar1) };
			if (func_182(vVar2, vParam0, 2f, 1))
			{
				if (iParam3 == 0 || VOLUME::_0x769BB7626B8CDB06(vVar2, 2f, 0, iParam3, 16384))
				{
					VOLUME::_0xFDFECC6EE4491E11(iVar1);
					(*Global_1911670)[iVar0] = 0;
				}
			}
		}
		iVar0++;
	}
}

bool func_360(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_361(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return -508547493;
		case 11966224:
			return -676452144;
		default:
			break;
	}
	return 0;
}

void func_362()
{
	if (func_361(ENTITY::GET_ENTITY_MODEL(Global_35)) == -676452144)
	{
		PED::_0x2B4CE170DE09F346(Global_35, 531055934);
		PED::_0x2B4CE170DE09F346(Global_35, -676452144);
		PED::_0x1E017404784AA6A3(Global_35, 1862763509);
		PED::_0x1E017404784AA6A3(Global_35, 455003611);
		PED::_0x1E017404784AA6A3(Global_35, 487851963);
	}
}

void func_363(int iParam0)
{
	Global_1946804->f_1 = iParam0;
}

void func_364(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_365(struct<4> Param0)
{
	int iVar0;
	int iVar1;

	switch (Param0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
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
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 26:
			if (Global_1946804->f_850 >= 25)
			{
				return;
			}
			if (func_581(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1946804->f_850)
				{
					iVar1 = ((Global_1946804->f_855 + iVar0) % 25);
					if ((&Global_1946804->f_668[iVar1 /*4*/] == Param0 && (Global_1946804->f_668[iVar1 /*4*/])->f_1 == Param0.f_1) && (Global_1946804->f_668[iVar1 /*4*/])->f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_582(Param0);
			*(Global_1946804->f_668[Global_1946804->f_856 /*4*/]) = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_364(8);
			break;
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946804->f_851 >= 25)
			{
				return;
			}
			if (func_581(Param0))
			{
				return;
			}
			func_582(Param0);
			*(Global_1946804->f_567[Global_1946804->f_851 /*4*/]) = { Param0 };
			Global_1946804->f_851++;
			func_364(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_583(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

int func_366(int iParam0, int iParam1)
{
	*iParam1 = 0;
	while (*iParam1 < 15)
	{
		if (&Global_40.f_4237[*iParam1 /*3*/] == iParam0)
		{
			return 1;
		}
		*iParam1++;
	}
	*iParam1 = -1;
	return 0;
}

void func_367(int iParam0)
{
	int iVar0;

	func_584(Global_40.f_4237[iParam0 /*3*/]);
	if (func_188(&(Global_40.f_4237[iParam0 /*3*/])))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (iVar0 < iParam0)
		{
		}
		else if (iVar0 < 14 && func_188(&(Global_40.f_4237[iVar0 + 1 /*3*/])))
		{
			Global_40.f_4237[iVar0 /*3*/] = &Global_40.f_4237[iVar0 + 1 /*3*/];
			(Global_40.f_4237[iVar0 /*3*/])->f_1 = (Global_40.f_4237[iVar0 + 1 /*3*/])->f_1;
			(Global_40.f_4237[iVar0 /*3*/])->f_2 = (Global_40.f_4237[iVar0 + 1 /*3*/])->f_2;
			func_586(iVar0, func_585(iVar0 + 1));
			func_587(Global_40.f_4237[iVar0 + 1 /*3*/]);
			func_586(iVar0 + 1, 0);
		}
		iVar0++;
	}
}

int func_368(int iParam0)
{
	int iVar0;

	if (!func_366(iParam0, &iVar0))
	{
		return 0;
	}
	return (Global_40.f_4237[iVar0 /*3*/])->f_2;
}

int func_369(int iParam0, int iParam1)
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
	if (func_318(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_318(iVar0, 2))
	{
		if (PED::_0x3AA24CCC0D451379(iParam0))
		{
			return 0;
		}
	}
	if (func_318(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_318(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_318(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_318(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return 0;
		}
	}
	if (func_318(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_318(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_370(int iParam0)
{
	int iVar0;

	iVar0 = -1;
	if (func_366(iParam0, &iVar0))
	{
		return func_585(iVar0);
	}
	return 0;
}

void func_371(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = -1;
	if (func_366(iParam0, &iVar0))
	{
		func_586(iVar0, bParam1);
	}
}

bool func_372(int iParam0, int iParam1)
{
	return (Global_1897952[iParam0 /*2*/] && iParam1) != 0;
}

int func_373(int iParam0)
{
	int iVar0;

	if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1897952)[iParam0 /*2*/])->f_1))
	{
		return ((*Global_1897952)[iParam0 /*2*/])->f_1;
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_BAYOU_NWA");
			VOLUME::_0x39816F6F94F385AD(iVar0, 2037.5f, -2050f, 150f, 0f, 0f, 18f, 575f, 750f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2485f, -1497.5f, 150f, 0f, 0f, 20f, 725f, 1050f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2060f, -1812.5f, 150f, 0f, 0f, 20f, 315f, 750f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1975f, -1452.5f, 150f, 0f, 0f, -43f, 200f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2022.5f, -1277.5f, 150f, 0f, 0f, -7f, 100f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2022.5f, -925f, 150f, 0f, 0f, 20f, 865f, 365f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2200f, -2440f, 150f, 0f, 0f, 0f, 500f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1762.5f, -737.5f, 150f, 0f, 0f, 20f, 500f, 175f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2020.944f, -580.694f, 150f, 0f, 0f, -111f, 400f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2116.078f, -612.5f, 150f, 0f, 0f, -1f, 240f, 540f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2197.5f, -693.982f, 150f, 0f, 0f, -111f, 200f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2527.5f, -785f, 150f, 0f, 0f, -80f, 400f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3550f, -1455f, 150f, 0f, 0f, 0f, 1800f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2687.5f, -757.5f, 150f, 0f, 0f, -80f, 400f, 75f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2826.796f, -755f, 150f, 0f, 0f, 0f, 282.646f, 400f, 700f);
			break;
		case 1:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_BIG_VALLEY");
			VOLUME::_0x39816F6F94F385AD(iVar0, -1605f, -382.5f, 150f, 0f, 0f, 25f, 1100f, 1200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2035f, -810f, 150f, 0f, 0f, -65f, 400f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1887.5f, -1050f, 150f, 0f, 0f, -45f, 210f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2210f, -625f, 150f, 0f, 0f, -65f, 200f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2827.5f, -82.5f, 150f, 0f, 0f, 167f, 1500f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -930f, -730f, 150f, 0f, 0f, 0f, 600f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -825f, -780f, 150f, 0f, 0f, -45f, 300f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -632.5f, -902.5f, 150f, 0f, 0f, -20f, 300f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -820f, -170f, 150f, 0f, 0f, 37.5f, 500f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -835f, -525f, 150f, 0f, 0f, 41f, 200f, 400f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -532.5f, -32.5f, 150f, 0f, 0f, -27f, 150f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -605f, 50f, 150f, 0f, 0f, -75f, 200f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -540f, 50f, 150f, 0f, 0f, -140f, 150f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1127.5f, -90f, 150f, 0f, 0f, -32.5f, 200f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1500f, 392.5f, 150f, 0f, 0f, 160f, 700f, 400f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1477.5f, 552.5f, 150f, 0f, 0f, 143f, 800f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1656.969f, 378.098f, 150f, 0f, 0f, 122f, 795f, 1083f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2617.969f, 452.097f, 150f, 0f, 0f, 167f, 1763f, 1500f, 700f);
			break;
		case 2:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_BLUEGILL_MARSH");
			VOLUME::_0x39816F6F94F385AD(iVar0, 3585f, -280f, 150f, 0f, 0f, 0f, 1800f, 550f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3085f, -337.5f, 150f, 0f, 0f, -80.5f, 300f, 1500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2440f, -465f, 150f, 0f, 0f, -1f, 400f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2322.5f, -537.5f, 150f, 0f, 0f, -111f, 100f, 150f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3100f, 125f, 150f, 0f, 0f, 41f, 1700f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3670f, 80f, 150f, 0f, 0f, 41f, 1400f, 475f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2332.651f, -365.338f, 150f, 0f, 0f, 86f, 150f, 140f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2124.824f, -347.118f, 150f, 0f, 0f, 86f, 140f, 291f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3726.431f, -755f, 150f, 0f, 0f, 0f, 1518.809f, 400f, 700f);
			break;
		case 3:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_CUMBERLAND_FOREST");
			VOLUME::_0x39816F6F94F385AD(iVar0, 190.4736f, 1214.829f, 200f, 0f, 0f, 59f, 488.2586f, 443.9291f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 695f, 1075f, 200f, 0f, 0f, 35f, 250f, 250f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -11.22244f, 1259.539f, 200f, 0f, 0f, 0f, 135f, 340.8336f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 667.5f, 1675f, 200f, 0f, 0f, 15f, 150f, 325f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 627.5f, 1255f, 200f, 0f, 0f, 9.999999f, 400f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 507.5f, 1532.5f, 200f, 0f, 0f, -45f, 300f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 72.5f, 1297.5f, 200f, 0f, 0f, 50f, 400f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 615f, 1750f, 200f, 0f, 0f, -93f, 200f, 150f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 510f, 1025f, 200f, 0f, 0f, 1f, 300f, 250f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 330.2712f, 1028.66f, 200f, 0f, 0f, 82f, 300f, 100f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 224.7084f, 1010.634f, 200f, 0f, 0f, 58.85596f, 175f, 267.2676f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 153.0846f, 1314.722f, 200f, 0f, 0f, -23f, 400f, 409.2231f, 800f);
			break;
		case 4:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GREAT_PLAINS");
			VOLUME::_0x39816F6F94F385AD(iVar0, -1285f, -1725f, 150f, 0f, 0f, 20f, 500f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1360f, -1540f, 150f, 0f, 0f, 30f, 500f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1492.5f, -1262.5f, 150f, 0f, 0f, 15f, 500f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1410f, -1147.5f, 150f, 0f, 0f, 25f, 700f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -865f, -1125f, 150f, 0f, 0f, -20f, 700f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -865f, -1725f, 150f, 0f, 0f, 0f, 800f, 1200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1300f, -1917.5f, 150f, 0f, 0f, -42f, 250f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1180f, -2122.5f, 150f, 0f, 0f, 20f, 300f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -955f, -1065f, 150f, 0f, 0f, -45f, 250f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1052.5f, -990f, 150f, 0f, 0f, 1.25f, 200f, 200f, 700f);
			break;
		case 7:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GRIZZLIES_WEST");
			VOLUME::_0x39816F6F94F385AD(iVar0, -100f, 1557.5f, 200f, 0f, 0f, 50f, 225f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -162.5f, 1660f, 200f, 0f, 0f, 0f, 135f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -162.5f, 1952.5f, 200f, 0f, 0f, 9f, 300f, 800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -752.5f, 2135f, 200f, 0f, 0f, 0f, 1050f, 1975f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2139.972f, 1966.829f, 200f, 0f, 0f, 165f, 1814.271f, 1288f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1295f, 1090f, 200f, 0f, 0f, 122f, 1200f, 300f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1080f, 1132.5f, 200f, 0f, 0f, 105f, 1200f, 375f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -895f, 1150f, 200f, 0f, 0f, 45f, 800f, 800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -845f, 720f, 200f, 0f, 0f, 0f, 200f, 300f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1015f, 560f, 200f, 0f, 0f, 143f, 75f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1940f, 3145f, 200f, 0f, 0f, 0f, 1400f, 2000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -757.5f, 3625f, 200f, 0f, 0f, 0f, 975f, 1050f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -187.5f, 3210f, 200f, 0f, 0f, -6f, 400f, 1800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2315.88f, 1498.498f, 150f, 0f, 0f, 167f, 1655f, 587f, 700f);
			break;
		case 6:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GRIZZLIES_EAST");
			VOLUME::_0x39816F6F94F385AD(iVar0, 190f, 1630f, 200f, 0f, 0f, -23f, 225f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 715f, 3145f, 200f, 0f, 0f, 0f, 1200f, 2000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1210f, 1212.5f, 200f, 0f, 0f, -14f, 585f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1510f, 1445f, 200f, 0f, 0f, 16f, 450f, 1000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1935f, 1040f, 200f, 0f, 0f, 12f, 200f, 100f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1810f, 1030f, 200f, 0f, 0f, -14f, 100f, 100f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1495f, 1425f, 200f, 0f, 0f, -9f, 1200f, 650f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1050f, 1430f, 200f, 0f, 0f, 10f, 500f, 700f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2037.5f, 1630f, 200f, 0f, 0f, 118f, 200f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1400f, 2500f, 200f, 0f, 0f, -47f, 2000f, 800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1810f, 2707.5f, 200f, 0f, 0f, -19f, 1500f, 900f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2175f, 3557.5f, 200f, 0f, 0f, -39f, 2000f, 1500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1040f, 2120f, 200f, 0f, 0f, 15f, 800f, 1000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 410f, 2112.5f, 200f, 0f, 0f, -93f, 500f, 600f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 307.5f, 1722.5f, 200f, 0f, 0f, -45f, 250f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 472.5f, 1880f, 200f, 0f, 0f, -93f, 200f, 150f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 135f, 2000f, 200f, 0f, 0f, 9f, 300f, 800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 217.5f, 3245f, 200f, 0f, 0f, -6f, 400f, 1800f, 800f);
			break;
		case 5:
			if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1897952)[6 /*2*/])->f_1) && VOLUME::_0x92A78D0BEDB332A3(((*Global_1897952)[7 /*2*/])->f_1))
			{
				iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GRIZZLIES");
				VOLUME::_0x6E0D3C3F828DA773(iVar0, ((*Global_1897952)[6 /*2*/])->f_1);
				VOLUME::_0x6E0D3C3F828DA773(iVar0, ((*Global_1897952)[7 /*2*/])->f_1);
			}
			else
			{
				return 0;
			}
			break;
		case 8:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GUARMA");
			VOLUME::_0xBCE668AAF83608BE(iVar0, 2410.933f, -7578.265f, 50f, 0f, 0f, 0f, 2000f, 2000f, 890f);
			VOLUME::_0xBCE668AAF83608BE(iVar0, 2388.016f, -4563.885f, 50f, 0f, 0f, 0f, 815f, 500f, 800f);
			break;
		case 9:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_HEARTLAND");
			VOLUME::_0x39816F6F94F385AD(iVar0, -357.5f, -120f, 200f, 0f, 0f, -27f, 150f, 350f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -385f, 180f, 200f, 0f, 0f, -140f, 150f, 350f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -600f, 280f, 200f, 0f, 0f, -75f, 150f, 350f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 165f, 165f, 200f, 0f, 0f, 0f, 1100f, 1000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -465f, -340f, 200f, 0f, 0f, 37.5f, 500f, 275f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -37.5f, -525f, 200f, 0f, 0f, 0f, 1125f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 670f, -315f, 200f, 0f, 0f, -42f, 365f, 817f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 860f, 487.5f, 200f, 0f, 0f, 35f, 650f, 900f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 512.5f, 800f, 200f, 0f, 0f, 1f, 300f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1230f, 695f, 200f, 0f, 0f, -14f, 875f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1560f, 835f, 200f, 0f, 0f, 16f, 450f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1727.5f, 702.5f, 200f, 0f, 0f, -14f, 100f, 575f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 964.14f, 59.521f, 200f, 0f, 0f, -71.00001f, 415f, 725f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1485f, 322.5f, 200f, 0f, 0f, -84f, 650f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1630f, 100f, 200f, 0f, 0f, -111f, 435f, 375f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1752.5f, 302.5f, 200f, 0f, 0f, -47f, 275f, 100f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 103.6867f, 807.6879f, 200f, 0f, 0f, 58.7951f, 295.0871f, 709.0376f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 302.139f, 780.344f, 200f, 0f, 0f, 82f, 200f, 157.492f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -847.5f, 240f, 200f, 0f, 0f, 33f, 797f, 225f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -975f, 280f, 200f, 0f, 0f, 142f, 329f, 450f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -245.4394f, 1000f, 200f, 0f, 0f, 0f, 333.3127f, 300f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -760f, 440f, 200f, 0f, 0f, 105f, 300f, 250f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -520f, 507.5f, 200f, 0f, 0f, 0f, 450f, 450f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -495f, 822.5f, 200f, 0f, 0f, 45f, 500f, 225f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -140f, 705f, 200f, 0f, 0f, 59f, 250f, 650f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -327.5f, 1080f, 200f, 0f, 0f, 45f, 100f, 100f, 800f);
			break;
		case 10:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_ROANOKE_RIDGE");
			VOLUME::_0x39816F6F94F385AD(iVar0, 1838.526f, 72.693f, 200f, 0f, 0f, -111f, 525f, 311f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2827.5f, 1215f, 200f, 0f, 0f, -9f, 1500f, 650f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1920f, 655f, 200f, 0f, 0f, -14f, 300f, 575f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2181.992f, -132.078f, 200f, 0f, 0f, 86f, 315f, 322f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2130f, 825f, 200f, 0f, 0f, 12f, 500f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2345f, 1795f, 200f, 0f, 0f, 118f, 200f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2775f, 725f, 200f, 0f, 0f, 41f, 2000f, 985f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2565f, 1537.5f, 200f, 0f, 0f, -47f, 1000f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3025f, 1632.5f, 200f, 0f, 0f, -19f, 1500f, 1000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3730f, 2300f, 200f, 0f, 0f, -39f, 2000f, 1500f, 800f);
			break;
		case 11:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_SCARLETT_MEADOWS");
			VOLUME::_0x39816F6F94F385AD(iVar0, 1025f, -642.5f, 150f, 0f, 0f, -42f, 600f, 800f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1335f, -407.5f, 150f, 0f, 0f, -71f, 717f, 325f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1585f, -330f, 150f, 0f, 0f, -111f, 400f, 625f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1250f, -1702.5f, 150f, 0f, 0f, 0f, 594f, 2000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 612.5f, -1337.5f, 150f, 0f, 0f, 0f, 850f, 1200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 677.5f, -2270f, 150f, 0f, 0f, 45f, 1000f, 700f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1408.3f, -1687.9f, 150f, 0f, 0f, 5f, 450f, 1300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1600f, -545f, 100f, 0f, 0f, 20f, 325f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1807.467f, -1544.09f, 150f, 0f, 0f, -72f, 309f, 562f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1705.656f, -1257.077f, 150f, 0f, 0f, 20f, 400f, 50f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1946.824f, -1264.023f, 150f, 0f, 0f, 21f, 100f, 176f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1735.228f, -1334.945f, 150f, 0f, 0f, 20f, 295f, 150f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1902.5f, -432.5f, 150f, 0f, 0f, -111f, 365f, 75f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1827.5f, -580f, 150f, 0f, 0f, 20f, 75f, 75f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1571.834f, -1097.489f, 150f, 0f, 0f, 20f, 85f, 371f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1661.989f, -1972.796f, 150f, 0f, 0f, 18f, 85f, 371f, 700f);
			break;
		case 12:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_TALL_TREES");
			VOLUME::_0x39816F6F94F385AD(iVar0, -1762.5f, -2030f, 150f, 0f, 0f, 16f, 275f, 400f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1445f, -1987.5f, 150f, 0f, 0f, -42f, 125f, 50f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1600f, -1882.5f, 150f, 0f, 0f, 20f, 200f, 335f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1927.5f, -1750f, 150f, 0f, 0f, 30f, 690f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2052.5f, -1517.5f, 150f, 0f, 0f, 15f, 715f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2162.5f, -1237.5f, 150f, 0f, 0f, -45f, 500f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2272.5f, -1057.5f, 150f, 0f, 0f, -65f, 519f, 530f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2865f, -1112.5f, 150f, 0f, 0f, 167f, 1250f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1972.5f, -2022.5f, 150f, 0f, 0f, 44f, 300f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1875f, -2087.5f, 150f, 0f, 0f, 70f, 300f, 180f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2140f, -1950f, 150f, 0f, 0f, 70f, 200f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2210f, -1890f, 150f, 0f, 0f, 24f, 200f, 175f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1397.5f, -2027.5f, 150f, 0f, 0f, 20f, 45f, 25f, 700f);
			break;
		case 15:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_CHOLLA_SPRINGS");
			VOLUME::_0x39816F6F94F385AD(iVar0, -3305f, -3380f, 150f, 0f, 0f, 123f, 300f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3335f, -3582.5f, 150f, 0f, 0f, 170f, 225f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3200f, -3515f, 150f, 0f, 0f, -154f, 235f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3515f, -3190f, 150f, 0f, 0f, 139f, 450f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3930f, -2912.5f, 150f, 0f, 0f, 154f, 700f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4537.5f, -2665f, 150f, 0f, 0f, -178f, 1000f, 800f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4967.5f, -2390f, 150f, 0f, 0f, -148f, 300f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4617.5f, -2080f, 150f, 0f, 0f, 175f, 1000f, 700f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3747.5f, -2030f, 150f, 0f, 0f, 99f, 700f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3282.5f, -3050f, 150f, 0f, 0f, 107f, 750f, 400f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3370f, -2690f, 150f, 0f, 0f, 124f, 100f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3355f, -2345f, 150f, 0f, 0f, 69f, 200f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3657.5f, -2610f, 150f, 0f, 0f, 98f, 500f, 850f, 700f);
			Jump @9445; //curOff = 7859
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GAPTOOTH_RIDGE");
			VOLUME::_0x39816F6F94F385AD(iVar0, -5420f, -3447.5f, 150f, 0f, 0f, 175f, 300f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5837.5f, -3530f, 150f, 0f, 0f, -32f, 1000f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -6142.5f, -3665f, 150f, 0f, 0f, -8f, 800f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5747.5f, -2905f, 150f, 0f, 0f, 136.5f, 1300f, 750f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5407.5f, -2487.5f, 150f, 0f, 0f, -148f, 550f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5232.5f, -2825f, 150f, 0f, 0f, -178f, 400f, 530f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5667.5f, -2040f, 150f, 0f, 0f, 175f, 1100f, 800f, 700f);
			Jump @9445; //curOff = 8173
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_HENNIGAS_STEAD");
			VOLUME::_0x39816F6F94F385AD(iVar0, -2510f, -2542.5f, 150f, 0f, 0f, 44f, 1200f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1632.5f, -2480f, 150f, 0f, 0f, 16f, 275f, 535f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1990f, -2525f, 150f, 0f, 0f, 70f, 600f, 850f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1452.5f, -2342.5f, 150f, 0f, 0f, 16f, 150f, 625f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1480f, -2177.5f, 150f, 0f, 0f, 20f, 165f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1487.5f, -2087.5f, 150f, 0f, 0f, -42f, 60f, 150f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1350f, -2330f, 150f, 0f, 0f, 20f, 165f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1562.5f, -2652.5f, 150f, 0f, 0f, 28f, 500f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2445f, -2795f, 150f, 0f, 0f, 107f, 750f, 1350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2675f, -2177.5f, 150f, 0f, 0f, 70f, 600f, 900f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2947.5f, -2465f, 150f, 0f, 0f, 98f, 150f, 600f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3097.5f, -1977.5f, 150f, 0f, 0f, 99f, 800f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2467.5f, -3145f, 150f, 0f, 0f, 123f, 150f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2577.5f, -3182.5f, 150f, 0f, 0f, 85f, 150f, 150f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2985f, -2502.5f, 150f, 0f, 0f, 124f, 150f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2942.5f, -2457.5f, 150f, 0f, 0f, 69f, 175f, 600f, 700f);
			Jump @9445; //curOff = 8874
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_RIO_BRAVO");
			VOLUME::_0x39816F6F94F385AD(iVar0, -3540f, -3635f, 150f, 0f, 0f, 123f, 125f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3880f, -3687.5f, 150f, 0f, 0f, 105f, 225f, 625f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4495f, -3610f, 150f, 0f, 0f, 96f, 600f, 625f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4922.5f, -3742.5f, 150f, 0f, 0f, 131f, 500f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5135f, -3900f, 150f, 0f, 0f, 22f, 200f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5205f, -3887.5f, 150f, 0f, 0f, -16f, 300f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5350f, -3835f, 150f, 0f, 0f, -32f, 150f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5125f, -3500f, 150f, 0f, 0f, 175f, 300f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4975f, -3360f, 150f, 0f, 0f, 137f, 450f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4645f, -3220f, 150f, 0f, 0f, -178f, 735f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4205f, -3420f, 150f, 0f, 0f, 154f, 450f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3795f, -3510f, 150f, 0f, 0f, 139f, 450f, 275f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3992.5f, -3567.5f, 150f, 0f, 0f, 0f, 200f, 200f, 700f);
			((*Global_1897952)[iParam0 /*2*/])->f_1 = iVar0;
			return iVar0;
		}

void func_374(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	MISC::_0x2FCD528A397E5C88(iParam0, iVar0);
}

void func_375(int iParam0, bool bParam1)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, 231, 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, 231, 16384, 0, -1, -1, 0);
	if (bParam1)
	{
		POPULATION::_0x2161278C6322F740(231, 16384, 0, -1, -1, iParam0);
	}
}

void func_376(int iParam0, int iParam1)
{
	(*Global_1897952)[iParam0 /*2*/] = (Global_1897952[iParam0 /*2*/] - (Global_1897952[iParam0 /*2*/] && iParam1));
}

void func_377(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_588(iParam0, &iVar1, &iVar2))
	{
		iVar0 = 0;
		while (iVar0 < (iVar2 - iVar1) + 1)
		{
			func_321((iVar1 + iVar0), 1);
			iVar0++;
		}
	}
}

void func_378(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_27() != -1)
	{
		return;
	}
	if (func_588(iParam0, &iVar1, &iVar2))
	{
		iVar0 = 0;
		while (iVar0 < (iVar2 - iVar1) + 1)
		{
			func_589((iVar1 + iVar0), 0);
			iVar0++;
		}
	}
}

char* func_379(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BayouNwa_population";
		case 1:
			return "BigValley_population";
		case 2:
			return "BluegillMarsh_population";
		case 3:
			return "CumberlandForest_population";
		case 4:
			return "GreatPlains_population";
		case 5:
			return "Grizzlies_population";
		case 6:
			return "GrizzliesEast_population";
		case 7:
			return "GrizzliesWest_population";
		case 8:
			return "Guama_population";
		case 9:
			return "Heartland_population";
		case 10:
			return "RoanokeRidge_population";
		case 11:
			return "ScarlettMeadows_population";
		case 12:
			return "TallTrees_population";
		case 15:
			return "ChollaSprings_population";
		case 13:
			return "GaptoothRidge_population";
		case 16:
			return "HennigansStead_population";
		case 14:
			return "RioBravo_population";
		default:
			break;
	}
	return "No District script?";
}

void func_380(char* sParam0, int iParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	func_590(MISC::GET_HASH_KEY(sParam0), iParam1);
}

int func_381(int iParam0)
{
	if (!func_233(iParam0))
	{
		return 0;
	}
	return func_591(iParam0, 2);
}

int func_382(int iParam0)
{
	if (!func_104(iParam0))
	{
		return 0;
	}
	return func_450(iParam0, 2);
}

void func_383(int iParam0, int iParam1)
{
	if (!func_233(iParam0))
	{
		return;
	}
	func_592(func_234(iParam0), iParam1);
}

bool func_384()
{
	return func_77(&Global_1935630, 4096);
}

int func_385(int iParam0)
{
	if (!func_104(iParam0))
	{
		return -1;
	}
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_40.f_358[iParam0 /*12*/]);
	}
	return &(Global_1058888->f_42266[iParam0 /*12*/]);
}

void func_386(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
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

	if (!func_593())
	{
		return;
	}
	sVar1 = func_594(iParam0, iParam1, iParam2, iParam4, iParam5, bParam3, &uVar0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		if (bParam3)
		{
			return;
		}
		sVar1 = "DISTRICT_GRIZZLIES";
	}
	if (!func_104(iParam4))
	{
		if (func_207(iParam0))
		{
			iParam4 = func_234(func_283(iParam0));
		}
		else
		{
			iParam4 = func_234(iParam1);
		}
	}
	if (func_104(iParam4))
	{
		iVar3 = func_385(iParam4);
	}
	if (uVar0 && bParam3)
	{
		sVar2 = func_596(func_595(iParam2));
	}
	else if ((func_591(iParam1, 2) || func_450(iParam4, 2)) && !Global_1894899->f_9)
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
	else if ((func_207(iParam0) && func_210(iParam0, 16777216)) && !Global_1894899->f_9)
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
		iVar4 = func_258(func_177());
		iVar5 = func_259(func_177());
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
				fVar7 = func_597(fVar7);
				sVar8 = "TIME_AND_TEMP_F";
			}
			IntToString(&sVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::_CREATE_VAR_STRING(674, sVar8, iVar4, func_598(&sVar6, 109029619), sVar9, func_598(&sVar10, 109029619));
		}
		else
		{
			sVar8 = "TIME_AND_TEMP_C_24";
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				fVar7 = func_597(fVar7);
				sVar8 = "TIME_AND_TEMP_F_24";
			}
			IntToString(&sVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::_CREATE_VAR_STRING(162, sVar8, iVar4, func_598(&sVar6, 109029619), func_598(&sVar10, 109029619));
		}
		Global_1894899->f_9 = 0;
	}
	Global_1934266->f_148 = func_599(sVar1, sVar2, 4000, 0, 0, 0, 0, 1);
}

void func_387(int iParam0)
{
	int iVar0;

	if (!func_233(iParam0))
	{
		return;
	}
	iVar0 = func_234(iParam0);
	func_600(iVar0);
	func_601(iVar0, func_385(iVar0));
}

void func_388(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_602(iParam0, &iVar1, &iVar2))
	{
		iVar0 = 0;
		while (iVar0 < (iVar2 - iVar1) + 1)
		{
			func_321((iVar1 + iVar0), 1);
			iVar0++;
		}
	}
}

void func_389(int iParam0)
{
	Global_1897952->f_41 = iParam0;
}

int func_390(int iParam0)
{
	if (!func_58())
	{
		return 1;
	}
	if (!func_70(3))
	{
		return 7 == iParam0;
	}
	return 1;
}

int func_391(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2025841068;
		case 1:
			return 822658194;
		case 2:
			return 1308232528;
		case 3:
			return 1835499550;
		case 4:
			return 476637847;
		case 6:
			return -120156735;
		case 7:
			return 1645618177;
		case 8:
			return -512529193;
		case 9:
			return 131399519;
		case 10:
			return 178647645;
		case 11:
			return -864275692;
		case 12:
			return 1684533001;
		case 13:
			return -2066240242;
		case 14:
			return -2145992129;
		case 15:
			return -108848014;
		case 16:
			return 892930832;
		default:
			break;
	}
	return -1;
}

void func_392(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_27() != -1)
	{
		return;
	}
	if (func_602(iParam0, &iVar1, &iVar2))
	{
		iVar0 = 0;
		while (iVar0 < (iVar2 - iVar1) + 1)
		{
			if (func_603((iVar1 + iVar0)))
			{
				func_589((iVar1 + iVar0), 0);
			}
			iVar0++;
		}
	}
}

void func_393(int iParam0)
{
	if (!func_233(iParam0))
	{
		return;
	}
	func_604();
	switch (iParam0)
	{
		case 0:
			func_605(5, -411244401);
			func_605(10, -530650579);
			func_605(11, -411244401);
			func_605(12, -79992523);
			func_605(13, -1608748833);
			func_605(7, -1243003160);
			break;
		case 1:
			func_605(5, -431794078);
			func_605(10, -530650579);
			func_605(11, 2024364203);
			func_605(12, 1131021608);
			func_605(13, -2064541187);
			func_605(7, -604466256);
			break;
		case 2:
			func_605(5, -715307145);
			func_605(10, 1784992423);
			func_605(11, -411244401);
			func_605(12, 1784992423);
			func_605(13, -1608748833);
			func_605(7, 486487548);
			break;
		case 3:
			func_605(5, -2064541187);
			func_605(10, -530650579);
			func_605(11, 2024364203);
			func_605(12, 1131021608);
			func_605(13, -2064541187);
			func_605(7, 506825778);
			break;
		case 4:
			func_605(5, -530650579);
			func_605(10, -530650579);
			func_605(11, 2024364203);
			func_605(12, -1897088481);
			func_605(13, -2064541187);
			func_605(7, -604466256);
			func_605(8, 239028334);
			break;
		case 5:
		case 6:
		case 7:
			func_605(5, -530650579);
			func_605(10, -1608748833);
			func_605(11, 1455354960);
			func_605(12, -530650579);
			func_605(13, -1608748833);
			func_605(7, 188176855);
			break;
		case 8:
			func_605(5, -79992523);
			func_605(10, -79992523);
			func_605(11, 796850253);
			func_605(12, -838827775);
			func_605(13, -79992523);
			func_605(7, -1063650279);
			break;
		case 9:
			func_605(5, -530650579);
			func_605(10, -530650579);
			func_605(11, 1455354960);
			func_605(12, -79992523);
			func_605(13, -2064541187);
			func_605(7, -604466256);
			func_605(8, 239028334);
			break;
		case 10:
			func_605(5, -2064541187);
			func_605(10, -530650579);
			func_605(11, 1455354960);
			func_605(12, 1131021608);
			func_605(13, -2064541187);
			func_605(7, -604466256);
			break;
		case 11:
			func_605(5, -530650579);
			func_605(10, -1074047115);
			func_605(11, -1608748833);
			func_605(12, -1897088481);
			func_605(13, -1608748833);
			func_605(7, 662736559);
			break;
		case 12:
			func_605(5, -530650579);
			func_605(10, -1608748833);
			func_605(11, -1504621559);
			func_605(12, 1131021608);
			func_605(13, -2064541187);
			func_605(7, 486487548);
			break;
	}
}

int func_394(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return -2137625828;
		case 1:
			return 1039226266;
		case 2:
			return 493546894;
		case 3:
			return -2119728378;
		case 4:
			if (!bParam1 || func_27() != -1)
			{
				return -1308265478;
			}
			if (func_345(45))
			{
				return -1308265478;
			}
			else
			{
				return -1738342532;
			}
			break;
		case 5:
			return -1147969487;
		case 6:
			return -1147969487;
		case 7:
			return -1147969487;
		case 8:
			return 537788226;
		case 9:
			return -1391142299;
		case 10:
			return 1178102426;
		case 11:
			return 1608357655;
		case 12:
			if (!bParam1 || func_27() != -1)
			{
				return -650528936;
			}
			if (func_345(45))
			{
				return -650528936;
			}
			else
			{
				return 139139039;
			}
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			if (!bParam1 || func_27() != -1)
			{
				return -877373104;
			}
			if (func_345(45))
			{
				return -877373104;
			}
			else
			{
				return -1618764825;
			}
			break;
	}
	return 0;
}

void func_395(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		iParam0 = func_394(func_197(Global_36), 1);
	}
	if (func_606(iParam0, iParam1))
	{
	}
}

void func_396(float fParam0, float fParam1, float fParam2, float fParam3)
{
	Global_1894899->f_182 = fParam0;
	Global_1894899->f_183 = fParam1;
	Global_1894899->f_184 = fParam2;
	Global_1894899->f_185 = fParam3;
}

void func_397(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_607(1497516462);
			func_331(2016141805);
			func_331(1010885152);
			func_331(-502324015);
			break;
		case 2016141805:
			func_331(1497516462);
			func_607(2016141805);
			func_331(1010885152);
			func_331(-502324015);
			break;
		case 1010885152:
			func_331(1497516462);
			func_331(2016141805);
			func_607(1010885152);
			func_331(-502324015);
			break;
		case -502324015:
			func_331(1497516462);
			func_331(2016141805);
			func_331(1010885152);
			func_607(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_331(-538889627);
			func_331(-538880323);
			func_331(-1056767524);
			func_607(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_608();
			func_607(iParam0);
			break;
		case -639037538:
		case -618620429:
		case -491981251:
		case 168171957:
		case 227918160:
		case 588987611:
		case 704802028:
		case 1193080109:
		case 1649996811:
		case 2008888900:
			func_609();
			func_607(iParam0);
			break;
		case 2019386373:
			func_331(-664252410);
			func_331(2109952320);
			func_607(2019386373);
			break;
		case -664252410:
			func_331(2019386373);
			func_331(2109952320);
			func_607(-664252410);
			break;
		case 2109952320:
			func_331(2019386373);
			func_331(-664252410);
			func_607(2109952320);
			break;
		case -1674179981:
			func_331(-1835851517);
			func_331(-1838352012);
			func_607(-1674179981);
			break;
		case -1835851517:
			func_331(-1674179981);
			func_331(-1838352012);
			func_607(-1835851517);
			break;
		case -1838352012:
			func_331(-1674179981);
			func_331(-1835851517);
			func_607(-1838352012);
			break;
		case -1717960576:
			func_331(210001842);
			func_607(-1717960576);
			break;
		case 210001842:
			func_331(-1717960576);
			func_607(210001842);
			break;
		case -150493654:
			func_331(-1271608261);
			func_331(1846061697);
			func_331(-1145519186);
			func_607(-150493654);
			break;
		case -1271608261:
			func_331(-150493654);
			func_331(1846061697);
			func_331(-1145519186);
			func_607(-1271608261);
			break;
		case 1846061697:
			func_331(-150493654);
			func_331(-1271608261);
			func_331(-1145519186);
			func_607(1846061697);
			break;
		case -1145519186:
			func_331(-150493654);
			func_331(-1271608261);
			func_331(1846061697);
			func_607(-1145519186);
			break;
		case 1766284049:
			func_331(280705402);
			func_331(1926308480);
			func_607(1766284049);
			break;
		case 280705402:
			func_331(1766284049);
			func_331(1926308480);
			func_607(280705402);
			break;
		case 1926308480:
			func_331(1766284049);
			func_331(280705402);
			func_607(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_331(439465264);
				func_607(1609506757);
			}
			else
			{
				func_331(1609506757);
				func_331(439465264);
			}
			break;
		case 439465264:
			if (func_310(1609506757))
			{
				if (bParam1)
				{
					func_607(439465264);
				}
				else
				{
					func_331(439465264);
				}
			}
			break;
		case 1822001510:
			func_331(-1612662716);
			func_607(1822001510);
			break;
		case -1612662716:
			func_331(1822001510);
			func_607(-1612662716);
			break;
		case 1306158345:
			func_331(1952610440);
			func_331(-223469678);
			func_331(-404698347);
			func_331(1517904467);
			func_607(1306158345);
			break;
		case 1952610440:
			func_331(1306158345);
			func_331(-223469678);
			func_331(-404698347);
			func_331(1517904467);
			func_607(1952610440);
			break;
		case -223469678:
			func_331(1306158345);
			func_331(1952610440);
			func_331(-404698347);
			func_331(1517904467);
			func_607(-223469678);
			break;
		case -404698347:
			func_331(1306158345);
			func_331(1952610440);
			func_331(-223469678);
			func_331(1517904467);
			func_607(-404698347);
			break;
		case 1517904467:
			func_331(1306158345);
			func_331(1952610440);
			func_331(-223469678);
			func_331(-404698347);
			func_607(1517904467);
			break;
		case 1376646519:
			func_331(931649776);
			func_331(-434590080);
			func_331(1743048395);
			func_331(449774763);
			func_607(1376646519);
			break;
		case 931649776:
			func_331(1376646519);
			func_331(-434590080);
			func_331(1743048395);
			func_331(449774763);
			func_607(931649776);
			break;
		case -434590080:
			func_331(1376646519);
			func_331(931649776);
			func_331(1743048395);
			func_331(449774763);
			func_607(-434590080);
			break;
		case 1743048395:
			func_331(1376646519);
			func_331(931649776);
			func_331(-434590080);
			func_331(449774763);
			func_607(1743048395);
			break;
		case 449774763:
			func_331(1376646519);
			func_331(931649776);
			func_331(-434590080);
			func_331(1743048395);
			func_607(449774763);
			break;
		case -1414537028:
			func_331(38162571);
			func_331(1350391819);
			func_331(54073871);
			func_607(-1414537028);
			break;
		case 38162571:
			func_331(-1414537028);
			func_331(1350391819);
			func_331(54073871);
			func_607(38162571);
			break;
		case 1350391819:
			func_331(-1414537028);
			func_331(38162571);
			func_331(54073871);
			func_607(1350391819);
			break;
		case 54073871:
			func_331(-1414537028);
			func_331(38162571);
			func_331(1350391819);
			func_607(54073871);
			break;
		case 198200492:
			func_607(198200492);
			func_331(-1124061431);
			func_331(52706132);
			func_331(-259123672);
			break;
		case -1124061431:
			func_331(198200492);
			func_607(-1124061431);
			func_331(52706132);
			func_331(-259123672);
			break;
		case 52706132:
			func_331(198200492);
			func_331(-1124061431);
			func_607(52706132);
			func_331(-259123672);
			break;
		case -259123672:
			func_331(198200492);
			func_331(-1124061431);
			func_331(52706132);
			func_607(-259123672);
			break;
		case -919512195:
			func_607(-919512195);
			func_331(-1925798111);
			func_331(420709909);
			func_331(1703426636);
			break;
		case -1925798111:
			func_607(-1925798111);
			func_331(-919512195);
			func_331(420709909);
			func_331(1703426636);
			break;
		case 420709909:
			func_607(420709909);
			func_331(-919512195);
			func_331(-1925798111);
			func_331(1703426636);
			break;
		case 1703426636:
			func_607(1703426636);
			func_331(-919512195);
			func_331(-1925798111);
			func_331(420709909);
			break;
		case -1223121209:
			func_607(-1223121209);
			func_331(630808005);
			break;
		case 630808005:
			func_607(630808005);
			func_331(-1223121209);
			break;
		case 1453909576:
			func_607(1453909576);
			func_331(1643531967);
			break;
		case 1643531967:
			func_607(1643531967);
			func_331(1453909576);
			break;
		case 0:
			func_607(0);
			func_331(473295046);
			func_331(-1738165526);
			break;
		case 473295046:
			func_607(473295046);
			func_331(0);
			func_331(-1738165526);
			break;
		case -1738165526:
			func_607(-1738165526);
			func_331(0);
			func_331(473295046);
			break;
		case 932909855:
			func_607(932909855);
			func_331(2051822093);
			break;
		case 2051822093:
			func_607(2051822093);
			func_331(932909855);
			break;
		case 405586984:
			func_607(405586984);
			func_331(1509509592);
			func_331(-959357075);
			func_331(-1311865656);
			break;
		case 1509509592:
			func_607(1509509592);
			func_331(405586984);
			func_331(-959357075);
			func_331(-1311865656);
			break;
		case -959357075:
			func_607(-959357075);
			func_331(1509509592);
			func_331(405586984);
			func_331(-1311865656);
			break;
		case -1311865656:
			func_607(-1311865656);
			func_331(1509509592);
			func_331(-959357075);
			func_331(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_607(-524145696);
			}
			else
			{
				func_331(-524145696);
			}
			func_331(1626481264);
			func_331(282809459);
			break;
		case 282809459:
			func_607(282809459);
			func_331(1626481264);
			func_331(-524145696);
			break;
		case 1626481264:
			func_607(1626481264);
			func_331(-524145696);
			func_331(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_607(885203519);
			}
			else
			{
				func_331(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_607(-1080627546);
			}
			else
			{
				func_331(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_310(iParam0))
				{
					func_607(iParam0);
				}
			}
			else if (func_310(iParam0))
			{
				func_331(iParam0);
			}
			break;
	}
}

int func_398(int iParam0)
{
	switch (iParam0)
	{
		case 2025841068:
			return 0;
		case 822658194:
			return 1;
		case 1308232528:
			return 2;
		case 1835499550:
			return 3;
		case 476637847:
			return 4;
		case -120156735:
			return 6;
		case 1645618177:
			return 7;
		case -512529193:
			return 8;
		case 131399519:
			return 9;
		case 178647645:
			return 10;
		case -864275692:
			return 11;
		case 1684533001:
			return 12;
		case -2066240242:
			return 13;
		case -2145992129:
			return 14;
		case -108848014:
			return 15;
		case 892930832:
			return 16;
		default:
			break;
	}
	return -1;
}

float func_399(var uParam0)
{
	if (!func_610(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_611(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_612() - uParam0->f_1);
}

bool func_400()
{
	return Global_1894899 & 2 != 0;
}

var func_401()
{
	return Global_1898164->f_163;
}

int func_402(int iParam0)
{
	if (!func_613(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		(*Global_1360165)[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

int func_403(int iParam0)
{
	int iVar0;
	int iVar1[15];
	int iVar17;
	int iVar18;
	int iVar19;

	func_614(iParam0);
	iVar0 = -1;
	switch (iParam0)
	{
		case 6:
		case 24:
		case 25:
			iVar1[0] = -1;
			iVar1[1] = -1;
			iVar1[2] = -1;
			iVar1[3] = -1;
			iVar1[4] = -1;
			iVar1[5] = -1;
			iVar1[6] = -1;
			iVar1[7] = -1;
			iVar1[8] = -1;
			iVar1[9] = -1;
			iVar1[10] = -1;
			iVar1[11] = -1;
			iVar1[12] = -1;
			iVar1[13] = -1;
			iVar1[14] = -1;
			break;
		case 10:
			iVar1[0] = 7;
			iVar1[1] = 1;
			iVar1[2] = 8;
			iVar1[3] = 9;
			iVar1[4] = 20;
			iVar1[5] = -1;
			iVar1[6] = -1;
			iVar1[7] = -1;
			iVar1[8] = -1;
			iVar1[9] = -1;
			iVar1[10] = -1;
			iVar1[11] = -1;
			iVar1[12] = -1;
			iVar1[13] = -1;
			iVar1[14] = -1;
			break;
		case 15:
		case 16:
		case 20:
		case 22:
			iVar1[0] = 3;
			iVar1[1] = 2;
			iVar1[2] = 8;
			iVar1[3] = 9;
			iVar1[4] = 7;
			iVar1[5] = 20;
			iVar1[6] = 15;
			iVar1[7] = 5;
			iVar1[8] = 13;
			iVar1[9] = 19;
			iVar1[10] = 18;
			iVar1[11] = 20;
			iVar1[12] = 22;
			iVar1[13] = 4;
			iVar1[14] = 11;
			break;
		case 14:
			iVar1[0] = 1;
			iVar1[1] = 7;
			iVar1[2] = 3;
			iVar1[3] = 21;
			iVar1[4] = 16;
			iVar1[5] = 20;
			iVar1[6] = 15;
			iVar1[7] = 5;
			iVar1[8] = 0;
			iVar1[9] = 19;
			iVar1[10] = 18;
			iVar1[11] = 20;
			iVar1[12] = 22;
			iVar1[13] = 4;
			iVar1[14] = 11;
			break;
		default:
			iVar1[0] = 7;
			iVar1[1] = 3;
			iVar1[2] = 1;
			iVar1[3] = 9;
			iVar1[4] = 2;
			iVar1[5] = 8;
			iVar1[6] = 0;
			iVar1[7] = 15;
			iVar1[8] = 13;
			iVar1[9] = 19;
			iVar1[10] = 18;
			iVar1[11] = 20;
			iVar1[12] = 22;
			iVar1[13] = 4;
			iVar1[14] = 5;
			break;
	}
	iVar19 = 0;
	while (iVar19 < 15)
	{
		if (&iVar1[iVar19] != -1)
		{
			if (func_615(&(iVar1[iVar19]), 1, 1) && func_616(&(iVar1[iVar19]), 0) == 0)
			{
				iVar18 = INTERIOR::GET_INTERIOR_FROM_ENTITY(func_402(&(iVar1[iVar19])));
				iVar17 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
				if (iVar17 == iVar18)
				{
					if (iParam0 != &iVar1[iVar19])
					{
						if (iVar0 == -1)
						{
							if (func_617(Global_35, func_402(&(iVar1[iVar19])), 1, 1) < 35f)
							{
								iVar0 = &iVar1[iVar19];
							}
						}
						else if (&iVar1[iVar19] != -1)
						{
							if (func_617(Global_35, func_402(iVar0), 1, 1) > func_617(Global_35, func_402(&(iVar1[iVar19])), 1, 1))
							{
								iVar0 = &iVar1[iVar19];
							}
						}
					}
				}
			}
		}
		iVar19++;
	}
	if (iVar0 == -1)
	{
		if ((MISC::GET_FRAME_COUNT() % 300) == 0)
		{
		}
	}
	return iVar0;
}

var func_404(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<7> Var0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_618(iParam0, &Var0);
}

void func_405(int iParam0)
{
	int iVar0;
	int iVar1;

	if (iParam0 == 6)
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_369(func_402(iVar0), 0))
		{
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(func_402(iVar0)))
			{
				if (iVar1 == -1)
				{
					iVar1 = iVar0;
				}
				else if (func_617(func_402(iVar0), Global_35, 1, 1) > func_617(func_402(iVar1), Global_35, 1, 1))
				{
					iVar1 = iVar0;
				}
			}
		}
		iVar0++;
	}
	if (iVar1 != -1)
	{
		func_404(func_402(iVar1), "GENERIC_SYMPATHIZE_ON_DISPUTE", -1454469014, 0, 1, 0, 0, 1);
	}
}

int func_406(int iParam0)
{
	if ((((((iParam0 == 11 || iParam0 == 13) || iParam0 == 15) || iParam0 == 16) || iParam0 == 19) || iParam0 == 20) || iParam0 == 22)
	{
		return 0;
	}
	return 1;
}

void func_407(int iParam0, var uParam1, var uParam2)
{
	switch (func_357())
	{
		case 2:
			switch (iParam0)
			{
				case 0:
					*uParam1 = { 681.5647f, -1167.61f, 44.9204f };
					*uParam2 = 197.2448f;
					break;
				case 1:
					*uParam1 = { 810.8986f, -969.9656f, 53.016f };
					*uParam2 = 134.2209f;
					break;
				case 2:
					*uParam1 = { 864.3746f, -943.9187f, 56.2085f };
					*uParam2 = 150.086f;
					break;
				case 3:
					*uParam1 = { 933.3844f, -911.3843f, 59.72f };
					*uParam2 = 135.8932f;
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					*uParam1 = { -67.4627f, 7.3844f, 92.8657f };
					*uParam2 = 131.3534f;
					break;
				case 1:
					*uParam1 = { -116.7554f, 188.6082f, 93.8397f };
					*uParam2 = 140.8986f;
					break;
				case 2:
					*uParam1 = { -87.3227f, 244.034f, 101.5532f };
					*uParam2 = 177.536f;
					break;
				case 3:
					*uParam1 = { -68.581f, 371.115f, 112.856f };
					*uParam2 = 206.1627f;
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					*uParam1 = { 1786.846f, -1789.869f, 48.3654f };
					*uParam2 = 243.2151f;
					break;
				case 1:
					*uParam1 = { 1579.342f, -1728.154f, 53.9348f };
					*uParam2 = 246.6603f;
					break;
				case 2:
					*uParam1 = { 1453.837f, -1691.054f, 65.0555f };
					*uParam2 = 234.7165f;
					break;
				case 3:
					*uParam1 = { 1287f, -1603.052f, 64.1451f };
					*uParam2 = 273.4906f;
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					*uParam1 = { 2374.944f, 1312.075f, 107.3511f };
					*uParam2 = 35.4268f;
					break;
				case 1:
					*uParam1 = { 2394.57f, 1225.873f, 100.4456f };
					*uParam2 = 329.851f;
					break;
				case 2:
					*uParam1 = { 2406.418f, 1114.158f, 95.6929f };
					*uParam2 = 21.6707f;
					break;
				case 3:
					*uParam1 = { 2391.831f, 1001.5f, 87.3075f };
					*uParam2 = 346.1555f;
					break;
			}
			break;
		default:
			*uParam1 = { 0f, 0f, 0f };
			break;
	}
}

void func_408()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_369(func_402(iVar0), 0))
		{
			PED::_0xA7DC9266ED6A4E51(func_402(iVar0));
		}
		iVar0++;
	}
}

int func_409(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1[9];
	int iVar11;
	int iVar12;
	int iVar13;
	vector3 vVar14;

	iVar0 = -1;
	switch (iParam0)
	{
		case 6:
		case 12:
		case 24:
		case 25:
			iVar1[0] = -1;
			iVar1[1] = -1;
			iVar1[2] = -1;
			iVar1[3] = -1;
			iVar1[4] = -1;
			iVar1[5] = -1;
			iVar1[6] = -1;
			iVar1[7] = -1;
			iVar1[8] = -1;
			break;
		case 10:
			iVar1[0] = 7;
			iVar1[1] = 1;
			iVar1[2] = 8;
			iVar1[3] = 9;
			iVar1[4] = -1;
			iVar1[5] = -1;
			iVar1[6] = -1;
			iVar1[7] = -1;
			iVar1[8] = -1;
			break;
		case 15:
		case 16:
		case 20:
		case 22:
			iVar1[0] = 3;
			iVar1[1] = 2;
			iVar1[2] = 8;
			iVar1[3] = 9;
			iVar1[4] = 7;
			iVar1[5] = -1;
			iVar1[6] = -1;
			iVar1[7] = -1;
			iVar1[8] = -1;
			break;
		case 13:
		case 14:
			iVar1[0] = 1;
			iVar1[1] = 7;
			iVar1[2] = 3;
			iVar1[3] = -1;
			iVar1[4] = -1;
			iVar1[5] = -1;
			iVar1[6] = -1;
			iVar1[7] = -1;
			iVar1[8] = -1;
			break;
		case 3:
			iVar1[0] = 2;
			iVar1[1] = 9;
			iVar1[2] = 1;
			iVar1[3] = 8;
			iVar1[4] = -1;
			iVar1[5] = -1;
			iVar1[6] = -1;
			iVar1[7] = -1;
			iVar1[8] = -1;
			break;
		default:
			iVar1[0] = 7;
			iVar1[1] = 3;
			iVar1[2] = 1;
			iVar1[3] = 9;
			iVar1[4] = 2;
			iVar1[5] = 8;
			iVar1[6] = -1;
			iVar1[7] = -1;
			iVar1[8] = -1;
			break;
	}
	iVar13 = 0;
	while (iVar13 < 9)
	{
		if (&iVar1[iVar13] != -1)
		{
			if (func_615(&(iVar1[iVar13]), 1, 1) && func_616(&(iVar1[iVar13]), 0) == 0)
			{
				vVar14 = { ENTITY::GET_ENTITY_COORDS(func_402(&(iVar1[iVar13])), true, false) };
				if (CAM::IS_SPHERE_VISIBLE(vVar14, 1.25f) == 0 || iParam1 == 0)
				{
					iVar12 = INTERIOR::GET_INTERIOR_FROM_ENTITY(func_402(&(iVar1[iVar13])));
					iVar11 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
					if (iVar11 == iVar12)
					{
						if (iParam0 != &iVar1[iVar13])
						{
							if (iVar0 == -1)
							{
								if (func_617(Global_35, func_402(&(iVar1[iVar13])), 1, 1) < 25f || iParam1)
								{
									iVar0 = &iVar1[iVar13];
								}
							}
							else if (&iVar1[iVar13] != -1)
							{
								if (func_617(Global_35, func_402(iVar0), 1, 1) > func_617(Global_35, func_402(&(iVar1[iVar13])), 1, 1))
								{
									iVar0 = &iVar1[iVar13];
								}
							}
						}
					}
				}
			}
		}
		iVar13++;
	}
	if (iVar0 == -1)
	{
		if ((MISC::GET_FRAME_COUNT() % 300) == 0)
		{
		}
	}
	return iVar0;
}

int func_410(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return 0;
	}
	return 1;
}

char* func_411()
{
	return "script@common@cnv_camp@grief@knockout@knockout";
}

char* func_412(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pbl_griefing_ko_back_leadin";
		case 1:
			return "pbl_griefing_ko_back_noleadin";
		case 2:
			return "pbl_griefing_ko_front";
		case 3:
			return "pbl_griefing_ko_back_noleadin";
		default:
			break;
	}
	return "pbl_griefing_ko_back_leadin";
}

bool func_413(int iParam0)
{
	return func_619(iParam0, 16, 1);
}

void func_414()
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
	vVar0.f_2 = (vVar0.z + 0.5f);
	MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &(vVar0.f_2), 0);
	vVar3 = { 0f, 0f, 0f };
	iVar6 = func_402(Global_1357549->f_1645);
	vVar7 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), ENTITY::GET_ENTITY_HEADING(Global_35), 0f, -1.5f, 0f) };
	ENTITY::SET_ENTITY_VISIBLE(iVar6, false);
	MISC::GET_GROUND_Z_FOR_3D_COORD(vVar7, &(vVar7.f_2), 0);
	ENTITY::SET_ENTITY_COORDS(iVar6, vVar7, true, false, true, true);
	if (func_369(Global_35, 0))
	{
		vVar3.f_2 = ENTITY::GET_ENTITY_HEADING(Global_35);
	}
	vVar7.f_2 = (vVar7.z + 0.25f);
	if (func_620(iVar6, &(Global_1357549->f_1663[0]), 1, 0) || func_620(Global_35, &(Global_1357549->f_1663[0]), 1, 0))
	{
		vVar3.f_2 = (vVar3.z + 90f);
		if (func_357() == 2)
		{
			vVar0 = { 659.2351f, -1251.625f, 42.6868f };
		}
		else if (func_357() == 1)
		{
			vVar0 = { -123.8883f, -31.9883f, 94.8056f };
		}
		else if (func_357() == 6)
		{
			vVar0 = { 2357.898f, 1372.787f, 105.298f };
		}
	}
	if (func_620(iVar6, &(Global_1357549->f_1663[1]), 1, 0) || func_620(Global_35, &(Global_1357549->f_1663[1]), 1, 0))
	{
		vVar3.f_2 = (vVar3.z + 90f);
		if (func_357() == 2)
		{
			vVar0 = { 659.2351f, -1251.625f, 42.6868f };
		}
		else if (func_357() == 1)
		{
			vVar0 = { -123.8883f, -31.9883f, 94.8056f };
		}
		else if (func_357() == 6)
		{
			vVar0 = { 2346.387f, 1352.174f, 105.0121f };
		}
	}
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Global_1357549->f_1636, vVar0, vVar3, 2);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Global_1357549->f_1636, "player_one", Global_35, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Global_1357549->f_1636, "CS_GENSTORYMALE", iVar6, 0);
}

void func_415(int iParam0, int iParam1, int iParam2)
{
	AUDIO::_0x36559148B78853B3(iParam0, iParam1, iParam2);
}

int func_416(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	int iVar5;

	if (!func_410(iParam0))
	{
		return 0;
	}
	vVar0.x = iParam3;
	vVar0.f_1 = iParam4;
	vVar0.f_2 = iParam5;
	if (((Global_1572864->f_13 || Global_1572864->f_14) || Global_1572864->f_8 != 0) || Global_1391438->f_5 & 8 != 0)
	{
		bVar3 = true;
	}
	switch (((*Global_1360165)[iParam0 /*1157*/])->f_11)
	{
		case 0:
			if (func_621(iParam0, 2, 1))
			{
				func_622(iParam0, 2, 1);
			}
			if (func_619(iParam0, 16, 1))
			{
				if ((*Global_1360165)[iParam0 /*1157*/])->f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD()
				{
					if (bParam14)
					{
						func_623(iParam0, 29, 1);
						return 0;
					}
					if (SCRIPTS::IS_THREAD_ACTIVE(((*Global_1360165)[iParam0 /*1157*/])->f_129, false))
					{
					}
					else
					{
						func_422(iParam0, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (func_369(Global_1360165[iParam0 /*1157*/], 0))
				{
					return Global_1360165[iParam0 /*1157*/];
				}
			}
			if (func_369(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_1360165[iParam0 /*1157*/]))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(Global_1360165[iParam0 /*1157*/]))
				{
					if (bParam1)
					{
						func_624(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				func_623(iParam0, 44, 1);
				((*Global_1360165)[iParam0 /*1157*/])->f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				func_625(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_623(iParam0, 44, 1);
				((*Global_1360165)[iParam0 /*1157*/])->f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				func_625(iParam0, 1);
			}
			else
			{
				return 0;
			}
		case 1:
			if (bVar3)
			{
				if (iParam13 == 0)
				{
					iParam13 = (Global_40.f_4942[iParam0 /*60*/])->f_4;
				}
			}
			if (!func_621(iParam0, 44, 0))
			{
				func_623(iParam0, 44, 0);
			}
			if (func_626(iParam0, vVar0, iParam13, 0, 1, bParam17, bParam20, -1, 1, 0))
			{
				func_625(iParam0, 2);
			}
			break;
		case 2:
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 171, true);
			if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1360165[iParam0 /*1157*/]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
			}
			func_622(iParam0, 18, 1);
			ENTITY::SET_ENTITY_VISIBLE(Global_1360165[iParam0 /*1157*/], true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], 1030835986);
			POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/], 0);
			_NAMESPACE48::_0x6759BEE6762E140B(((*Global_1360165)[iParam0 /*1157*/])->f_1);
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 130, false);
			func_627(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				func_628(iParam0, 0, 0, 1);
			}
			func_622(iParam0, 33, 1);
			func_622(iParam0, 34, 1);
			func_622(iParam0, 29, 1);
			if (!func_213(vVar0) && iParam7)
			{
				func_625(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				func_625(iParam0, 4);
			}
			else
			{
				func_625(iParam0, 5);
			}
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(Global_1360165[iParam0 /*1157*/]) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_1360165[iParam0 /*1157*/], -1))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Global_1360165[iParam0 /*1157*/]))
				{
					if (PED::IS_PED_ON_MOUNT(Global_1360165[iParam0 /*1157*/]) && bParam10)
					{
					}
					else if (PED::IS_PED_USING_ANY_SCENARIO(Global_1360165[iParam0 /*1157*/]))
					{
						func_624(iParam0, 1, "Teleporting a stolen companion using a scenario.");
					}
					else
					{
						ENTITY::DETACH_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
					}
				}
				iVar4 = 2;
				if (bParam10)
				{
					iVar4 |= 4;
				}
				func_629(Global_1360165[iParam0 /*1157*/], vVar0, fParam6, 2, 1073741824);
			}
			else if (bParam16)
			{
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_1360165[iParam0 /*1157*/], 0) && !TASK::_0x0C3CB2E600C8977D(Global_1360165[iParam0 /*1157*/], 1))
				{
					TASK::CLEAR_PED_TASKS(Global_1360165[iParam0 /*1157*/], 1, 0);
				}
				return 0;
			}
			if (iParam13 != 0)
			{
				func_625(iParam0, 4);
			}
			else
			{
				func_625(iParam0, 5);
			}
			break;
		case 4:
			if (iParam13 != 0 || bVar3)
			{
				if (bVar3)
				{
					if (iParam13 == 0)
					{
						iParam13 = (Global_40.f_4942[iParam0 /*60*/])->f_4;
					}
				}
				if (func_630(iParam0, iParam13))
				{
					if (PED::_0xA0BC8FAED8CFEB3C(Global_1360165[iParam0 /*1157*/]))
					{
						func_631(iParam0, iParam13, 0);
						func_632(iParam0, Global_1360165[iParam0 /*1157*/], iParam13, 1);
						if (func_621(iParam0, 25, 0))
						{
							func_622(iParam0, 25, 0);
						}
						func_623(iParam0, 66, 0);
						func_625(iParam0, 5);
						((*Global_1360165)[iParam0 /*1157*/])->f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_625(iParam0, 5);
				}
				func_623(iParam0, 28, 1);
			}
			else
			{
				func_625(iParam0, 5);
			}
			break;
		case 5:
			if (PED::_0xA0BC8FAED8CFEB3C(Global_1360165[iParam0 /*1157*/]))
			{
				func_625(iParam0, 6);
			}
			break;
		case 6:
			if (func_369(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (bParam24)
				{
					PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], true);
				}
				if (bParam18)
				{
					if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_1360165[iParam0 /*1157*/], -1))
					{
						iVar5 = 0;
						while (iVar5 < 10)
						{
							PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_1360165[iParam0 /*1157*/], iVar5);
							PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Global_1360165[iParam0 /*1157*/], iVar5, "ALL");
							iVar5++;
						}
						PED::_0xE3144B932DFDFF65(Global_1360165[iParam0 /*1157*/], 0f, -1, 1, 1);
						PED::_0xD049920CD29F6CC8(Global_1360165[iParam0 /*1157*/], 0f, -1, 1, 1);
					}
				}
				if (bParam19)
				{
					func_633(iParam0);
				}
				if (bParam21)
				{
					TASK::CLEAR_PED_SECONDARY_TASK(Global_1360165[iParam0 /*1157*/]);
					func_634(Global_1360165[iParam0 /*1157*/], 1);
				}
			}
			func_625(iParam0, 7);
		case 7:
			func_627(iParam0, bParam9, bParam15, 0);
			func_635(iParam0, 4, bParam11);
			func_636(iParam0);
			if (bParam20)
			{
				if (func_637(Global_1360165[iParam0 /*1157*/]))
				{
				}
			}
			func_638(iParam0, Global_1360165[iParam0 /*1157*/]);
			if (!bParam23 && !PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true))
			{
				PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true);
			}
			(Global_40.f_4942[iParam0 /*60*/])->f_4 = (Global_40.f_4942[iParam0 /*60*/])->f_3;
			func_625(iParam0, 0);
			func_639(iParam0, 16, 1);
			func_622(iParam0, 44, 1);
			((*Global_1360165)[iParam0 /*1157*/])->f_1156 = 0;
			((*Global_1360165)[iParam0 /*1157*/])->f_129 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			return Global_1360165[iParam0 /*1157*/];
	}
	return 0;
}

void func_417()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_369(func_402(iVar0), 0))
		{
			if (PED::GET_PED_CONFIG_FLAG(func_402(iVar0), 343, true))
			{
				PED::SET_PED_CONFIG_FLAG(func_402(iVar0), 343, false);
			}
		}
		iVar0++;
	}
}

char* func_418()
{
	return "CUT_THAT_OUT";
}

void func_419()
{
	int iVar0;

	if (func_369(Global_35, 0))
	{
		TASK::CLEAR_PED_SECONDARY_TASK(Global_35);
		if (PED::_0xA911EE21EDF69DAF(Global_35))
		{
			iVar0 = PED::_0xD806CD2A4F2C2996(Global_35);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				PED::_0xED00D72F81CF7278(iVar0, 0, 0);
				PED::SET_PED_TO_RAGDOLL(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0), 10000, 10000, 0, false, false, false);
			}
		}
	}
}

void func_420(var uParam0, int iParam1)
{
	if (iParam1 || !func_610(uParam0))
	{
		func_640(uParam0);
	}
}

int func_421(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;

	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar2 = func_641(iParam0);
	uVar3 = func_642(iParam0);
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0 /*5*/] == 176656832)
		{
			Global_40.f_4283.f_6[iVar0 /*5*/] = iParam0;
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_2 = iParam1;
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_3 = uVar3;
			if (iParam3 > 0)
			{
				iVar1 = func_177();
				func_643(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_1 = iVar1;
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_4 = iVar2;
			func_644(iParam0, 1);
			if (func_645(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if ((Global_40.f_4283.f_6[iVar4 /*5*/])->f_4 == iVar2 && &Global_40.f_4283.f_6[iVar4 /*5*/] != iParam0)
					{
						func_646(Global_40.f_4283.f_6[iVar4 /*5*/], 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_647(1, iParam0);
				}
				else
				{
					func_648(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_422(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	if (!func_410(iParam0))
	{
		return;
	}
	if (func_413(iParam0))
	{
		if (((*Global_1360165)[iParam0 /*1157*/])->f_129 != 0 && ((*Global_1360165)[iParam0 /*1157*/])->f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_623(iParam0, 56, 1);
		func_420(&(Global_1359489->f_40), 1);
	}
	func_649(iParam0, 0);
	func_635(iParam0, 4, 0);
	func_650(iParam0);
	func_636(iParam0);
	func_622(iParam0, 37, 1);
	bVar0 = func_369(Global_1360165[iParam0 /*1157*/], 0);
	iVar1 = func_651(iParam0, 0);
	bVar2 = _NAMESPACE48::_0x800DF3FC913355F3(iVar1);
	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, false);
	}
	if (func_621(iParam0, 64, 1))
	{
		func_622(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_622(iParam0, 33, 1);
		func_622(iParam0, 34, 1);
		func_652(iParam0, 1056964608, -1, 1061158912);
		func_627(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_623(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_623(iParam0, 35, 1);
			if (bParam8)
			{
				func_623(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_653(iParam0, 0);
			if (PED::IS_PED_IN_GROUP(Global_1360165[iParam0 /*1157*/]))
			{
				PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
			}
			POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/], 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], 1030835986);
		}
		if (bVar2)
		{
			_NAMESPACE48::_0xBB68908CD11AEBDC(iVar1);
		}
		func_622(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
		}
		func_623(iParam0, 33, 1);
		func_627(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_133 = fParam4;
			func_420(&(((*Global_1360165)[iParam0 /*1157*/])->f_130), 1);
		}
		else
		{
			func_427(&(((*Global_1360165)[iParam0 /*1157*/])->f_130));
		}
		if (bParam9)
		{
			func_623(iParam0, 34, 1);
		}
	}
	if (iParam1 || bParam2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		{
			func_654(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], false);
	}
	if (func_621(iParam0, 45, 1))
	{
		func_622(iParam0, 45, 1);
	}
	func_655(iParam0, 16, 1);
	func_622(iParam0, 44, 1);
	((*Global_1360165)[iParam0 /*1157*/])->f_129 = 0;
	(Global_40.f_4942[iParam0 /*60*/])->f_4 = 0;
	if (bParam5)
	{
		if (func_369(func_656(iParam0), 0))
		{
			func_657(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

void func_423()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_369(func_402(iVar0), 0))
		{
			if (func_615(iVar0, 1, 1))
			{
				_NAMESPACE48::_0xD4B614179BCD0654(func_651(iVar0, 0));
			}
		}
		iVar0++;
	}
}

void func_424(float fParam0)
{
	int iVar0;

	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::_TASK_START_SCENARIO_IN_PLACE(0, -1689755873, 750, 0, 0, -1082130432, 0);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, BUILTIN::FLOOR(fParam0) * 1000, 0f, true, false);
	if (func_369(Global_35, 0))
	{
		TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar0);
	}
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	func_426();
}

void func_425()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = PLAYER::GET_PLAYER_INDEX();
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_658(iVar0, 1, 0))
		{
			if (func_659(iVar0))
			{
				iVar2 = func_660(iVar0);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					PED::_0x97B06669AC569003(iVar2, iVar1);
				}
			}
		}
		iVar0++;
	}
}

void func_426()
{
	vector3 vVar0;
	int iVar3;

	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1065353216);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-15f, 1f);
	if (func_369(Global_35, 0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
	}
	vVar0.f_2 = (vVar0.z - 2f);
	iVar3 = CAM::GET_RENDERING_CAM();
	if (CAM::DOES_CAM_EXIST(iVar3))
	{
		CAM::POINT_CAM_AT_COORD(iVar3, vVar0);
		CAM::SHAKE_CAM(iVar3, "HAND_SHAKE", 1f);
	}
}

void func_427(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_428(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_27() != -1)
	{
		return;
	}
	if ((Global_36615 && func_661(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_662(iParam0);
	iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_663(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, iParam7);
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
			func_664(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_663(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

void func_429(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_1327590->f_19547)
	{
		(Global_1327590->f_19547[iParam0 /*5*/])->f_4 = 1;
	}
}

int func_430(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_40.f_7862[iParam0 /*4*/])->f_1;
	}
	return (Global_42605[iParam0 /*4*/])->f_1;
}

void func_431(int iParam0)
{
	vector3 vVar0;

	vVar0 = { func_666(func_665(iParam0)) };
	Global_36307[iParam0] = MAP::_0x554D9D53F696D002(func_667(func_430(iParam0)), vVar0);
	MAP::SET_BLIP_SPRITE(&(Global_36307[iParam0]), func_668(func_430(iParam0)), true);
	MAP::SET_BLIP_FLASH_TIMER(&(Global_36307[iParam0]), func_430(iParam0), iParam0);
}

void func_432(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;

	iVar0 = ((*Global_1888801)[iParam0 /*35*/])->f_20;
	bVar1 = func_210(iParam0, 32);
	if (iVar0 == 8)
	{
		return;
	}
	if ((!bVar1 && iVar0 != 3) && iVar0 != 4)
	{
		return;
	}
	bVar2 = false;
	if (Global_1572887->f_12 == -1 && iParam0 == func_98())
	{
		if (((((((iParam0 != 58 || func_669()) && !func_555(4)) && !func_670(67)) && !func_339(67)) && !(func_70(43) && !func_70(44))) && !(func_70(59) && !func_70(60))) && !func_672(func_671(iParam0), 8192))
		{
			bVar2 = true;
			iVar3 = 52;
			if (func_70(70))
			{
				iVar3 = 46;
			}
			else
			{
				iVar3 = 52;
			}
		}
	}
	else
	{
		switch (((*Global_1888801)[iParam0 /*35*/])->f_20)
		{
			case 3:
				bVar2 = false;
				break;
			case 4:
				if (((*Global_1888801)[iParam0 /*35*/])->f_13 != -1)
				{
					func_673(iParam0, ((*Global_1888801)[iParam0 /*35*/])->f_14, ((*Global_1888801)[iParam0 /*35*/])->f_15, 1);
					((*Global_1888801)[iParam0 /*35*/])->f_13 = -1;
				}
				break;
			case 6:
				break;
		}
	}
	if (bVar2)
	{
	}
	if (bVar2 && !bParam2)
	{
		if (((*Global_1888801)[iParam0 /*35*/])->f_13 == -1)
		{
			((*Global_1888801)[iParam0 /*35*/])->f_14 = iVar3;
			((*Global_1888801)[iParam0 /*35*/])->f_13 = func_674(iParam0, iVar3, ((*Global_1888801)[iParam0 /*35*/])->f_15, -1);
			func_675(iParam0, iVar3, ((*Global_1888801)[iParam0 /*35*/])->f_15, &(((*Global_1888801)[iParam0 /*35*/])->f_22));
			if (iParam0 == 9)
			{
				if (MAP::DOES_BLIP_EXIST(&(Global_36307[((*Global_1888801)[iParam0 /*35*/])->f_13])))
				{
					MAP::SET_BLIP_COORDS(&(Global_36307[((*Global_1888801)[iParam0 /*35*/])->f_13]), ((*Global_1888801)[iParam0 /*35*/])->f_15);
					MAP::_0x662D364ABF16DE2F(&(Global_36307[((*Global_1888801)[iParam0 /*35*/])->f_13]), 1046501997);
				}
			}
			if (Global_1572887->f_12 == -1)
			{
				if (iVar3 == 52 && Global_1357549->f_1708)
				{
					func_676(((*Global_1888801)[iParam0 /*35*/])->f_13, 1720107185);
				}
			}
		}
		else if (((*Global_1888801)[iParam0 /*35*/])->f_14 != iVar3 || ((*Global_1888801)[iParam0 /*35*/])->f_18)
		{
			func_673(iParam0, ((*Global_1888801)[iParam0 /*35*/])->f_14, ((*Global_1888801)[iParam0 /*35*/])->f_15, 1);
			((*Global_1888801)[iParam0 /*35*/])->f_13 = -1;
			func_280(iParam0, 1024);
			((*Global_1888801)[iParam0 /*35*/])->f_18 = 0;
		}
	}
	else if (((*Global_1888801)[iParam0 /*35*/])->f_13 != -1)
	{
		func_673(iParam0, ((*Global_1888801)[iParam0 /*35*/])->f_14, ((*Global_1888801)[iParam0 /*35*/])->f_15, 1);
		((*Global_1888801)[iParam0 /*35*/])->f_13 = -1;
		func_280(iParam0, 1024);
	}
	if (func_210(iParam0, 64))
	{
		func_280(iParam0, 64);
		func_677(iParam0);
	}
	if (bVar4)
	{
		if (!func_210(iParam0, 1024))
		{
			if (func_678(iParam0, iVar3, -1726569132))
			{
				func_322(iParam0, 1024);
			}
		}
	}
	else if (func_210(iParam0, 1024))
	{
		if (func_679(iParam0, iVar3, -1726569132))
		{
			func_280(iParam0, 1024);
		}
	}
}

void func_433(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		if (func_210(iParam0, 2))
		{
			func_680(iParam0, Global_36);
		}
		else if (func_210(iParam0, 1))
		{
			func_681(iParam0, 0);
		}
		else
		{
			func_682(iParam0, Global_36, bParam1);
		}
	}
}

bool func_434(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

int func_435(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 11;
		case 2:
			return 30;
		case 3:
			return 33;
		case 4:
			return 37;
		case 7:
			return 40;
		case 6:
			return 50;
		case 8:
			return 57;
		case 9:
			return 62;
		case 10:
			return 77;
		case 11:
			return 93;
		case 12:
			return 107;
		case 13:
			return 114;
		case 14:
			return 117;
		case 15:
			return 120;
		case 16:
			return 126;
		default:
			break;
	}
	return -1;
}

int func_436(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
		case 1:
			return 29;
		case 2:
			return 32;
		case 3:
			return 36;
		case 4:
			return 39;
		case 7:
			return 49;
		case 6:
			return 56;
		case 8:
			return 61;
		case 9:
			return 76;
		case 10:
			return 92;
		case 11:
			return 106;
		case 12:
			return 113;
		case 13:
			return 116;
		case 14:
			return 119;
		case 15:
			return 125;
		case 16:
			return 127;
		default:
			break;
	}
	return -1;
}

int func_437(var uParam0)
{
	switch (Global_1897952->f_41)
	{
		case 11:
			if (Global_1894899->f_4 != 9)
			{
				Global_1894899->f_4 = 9;
			}
			else
			{
				Global_1894899->f_4 = 77;
				*uParam0 = 1;
			}
			return 1;
		case 2:
			if (Global_1894899->f_4 != 3)
			{
				Global_1894899->f_4 = 3;
			}
			*uParam0 = 1;
			return 1;
		case 0:
			if (Global_1894899->f_4 != 95)
			{
				Global_1894899->f_4 = 95;
			}
			*uParam0 = 1;
			return 1;
		case 9:
		case 10:
			if (Global_1894899->f_4 != 128)
			{
				Global_1894899->f_4 = 128;
			}
			*uParam0 = 1;
			return 1;
		case 13:
			if (Global_1894899->f_4 != 117)
			{
				Global_1894899->f_4 = 117;
			}
			else
			{
				Global_1894899->f_4 = 129;
				*uParam0 = 1;
			}
			return 1;
	}
	return 0;
}

bool func_438(int iParam0)
{
	int iVar0;

	iVar0 = 6;
	if (func_683(iParam0))
	{
		iVar0 = _NAMESPACE71::_0x59FA676177DBE4C9(iParam0);
	}
	return iVar0 != 6;
}

void func_439()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_102(Global_36, 1);
	iVar1 = func_195();
	iVar2 = func_684();
	if (func_287(iVar0) && 32 != iVar0)
	{
		iVar3 = ((*Global_1888801)[iVar0 /*35*/])->f_4;
		if (VOLUME::_0x92A78D0BEDB332A3(iVar3) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iVar3, false, 0))
		{
			func_386(iVar0, iVar1, iVar2, func_685(0), -1, 1);
		}
		else
		{
			func_386(-1, iVar1, iVar2, func_685(0), -1, 1);
		}
	}
	else
	{
		func_386(iVar0, iVar1, iVar2, func_685(0), -1, 1);
	}
}

int func_440(vector3 vParam0, int iParam3)
{
	vector3 vVar0;
	struct<2> Var3;
	float fVar6;

	func_686(iParam3, &vVar0, &Var3, &fVar6);
	if (func_687(vParam0, vVar0, Var3, Var3.f_1, fVar6))
	{
		return 1;
	}
	return 0;
}

int func_441(int iParam0)
{
	switch (iParam0)
	{
		case 16:
			return 1474106589;
		case 31:
			return 1979340260;
		case 24:
			return -656861063;
		case 38:
			return 2073023198;
		case 18:
			return 1735191955;
		case 23:
			return 215480587;
		case 44:
			return 545498183;
		case 26:
			return 428613469;
		case 40:
			return 532401286;
		case 30:
			return 1740117339;
		case 4:
			return -1116738159;
		case 22:
			return -1730421200;
		case 5:
			return -1394664008;
		case 10:
			return -325788416;
		case 36:
			return -792566558;
		case 1:
			return -2089448537;
		case 6:
			return 82527577;
		case 7:
			return 1515744307;
		case 41:
			return -2110824426;
		case 43:
			return 1268001912;
		case 42:
			return 205568929;
		case 21:
			return -1173041902;
		case 45:
			return 2133877879;
		case 46:
			return -1408667066;
		case 47:
			return 1374995365;
		case 48:
			return 1837393665;
		case 49:
			return -1585921053;
		case 50:
			return -876779166;
		default:
			break;
	}
	return 0;
}

int func_442(int iParam0)
{
	switch (iParam0)
	{
		case 42:
			return 1;
		default:
			break;
	}
	return 0;
}

Vector3 func_443(vector3 vParam0, var uParam3, var uParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, float fParam10, int iParam11, int iParam12, float fParam13)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	vector3 vVar7;
	int iVar10;
	bool bVar11;
	bool bVar12;
	var uVar13;
	bool bVar14;
	struct<5> Var15;
	struct<5> Var20;
	int iVar25;
	int iVar26;

	fVar2 = 9999999f;
	func_688(&bVar12, &uVar13);
	bVar14 = false;
	if (bVar12)
	{
		if (func_689() == 0 && !func_690(0))
		{
			bVar14 = true;
		}
	}
	if (!func_264(15, &Var15))
	{
		return 0f, 0f, 0f;
	}
	VOLUME::_0x748C5F51A18CB8F0(0);
	Var20 = { Var15 };
	if (bParam7)
	{
		iVar10 = func_691();
		if (VOLUME::_0x92A78D0BEDB332A3(iVar10))
		{
		}
	}
	if (!func_287(Global_1310720->f_21))
	{
		fParam10 = iParam11;
	}
	Var15.f_2 = 723128514;
	DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&iVar25, &Var15);
	while (DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var15, iVar25) > iVar0)
	{
		iVar1 = 0;
		Var20.f_2 = -1148748386;
		Var20.f_3 = iVar0;
		DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&iVar26, &Var20);
		while (DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var20, iVar26) > iVar1)
		{
			vVar7 = { func_692(iVar0, iVar1) };
			bVar11 = func_693(iVar0, iVar1);
			fVar3 = BUILTIN::VDIST(vParam0, vVar7);
			if (((((fVar3 < fVar2 && fVar3 > fParam10) && !func_213(vVar7)) && func_694(iVar0, iParam8, iParam12)) && !func_695(iVar0)) || bVar11)
			{
				if (func_696(vVar7, iVar0, iVar1, bParam5, bParam6, bVar14, iVar10, bParam9, fParam13))
				{
					vVar4 = { vVar7 };
					fVar2 = BUILTIN::VDIST(vParam0, vVar7);
					*uParam3 = iVar0;
					*uParam4 = iVar1;
					if (bVar11)
					{
					}
					else
					{
						iVar1++;
					}
					iVar0++;
					VOLUME::_0x748C5F51A18CB8F0(1);
					return vVar4;
				}
			}
		}
	}

bool func_444(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_445(var uParam0)
{
	if (func_444(uParam0, 1))
	{
		func_697(1);
	}
}

int func_446(vector3 vParam0)
{
	int iVar0;

	iVar0 = func_698(vParam0, 0f, 0f, 0, 2);
	return func_698(vParam0, ((*Global_1894052)[iVar0 /*3*/])->f_1, ((*Global_1894052)[iVar0 /*3*/])->f_2, Global_1894052[iVar0 /*3*/], 4);
}

int func_447(char* sParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11)
{
	if (!SCRIPTS::DOES_SCRIPT_EXIST(sParam0))
	{
		return 0;
	}
	SCRIPTS::REQUEST_SCRIPT(sParam0);
	if (!SCRIPTS::HAS_SCRIPT_LOADED(sParam0))
	{
		return 0;
	}
	BUILTIN::START_NEW_SCRIPT_WITH_ARGS(sParam0, &uParam1, 10, iParam11);
	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(sParam0);
	return 1;
}

int func_448(char* sParam0, int iParam1)
{
	if (!SCRIPTS::DOES_SCRIPT_EXIST(sParam0))
	{
		return 0;
	}
	SCRIPTS::REQUEST_SCRIPT(sParam0);
	if (!SCRIPTS::HAS_SCRIPT_LOADED(sParam0))
	{
		return 0;
	}
	BUILTIN::START_NEW_SCRIPT(sParam0, iParam1);
	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(sParam0);
	return 1;
}

void func_449(int iParam0)
{
	struct<16> Var0;

	if (iParam0 < 0 || iParam0 >= 10)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(((*Global_1934603)[iParam0 /*16*/])->f_10)))
	{
		return;
	}
	*((*Global_1934603)[iParam0 /*16*/]) = { Var0 };
	Global_1934603->f_161 = (Global_1934603->f_161 - 1);
	if (Global_1934603->f_161 < 0)
	{
		Global_1934603->f_161 = 0;
	}
}

bool func_450(int iParam0, int iParam1)
{
	if (!func_104(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return ((Global_40.f_358[iParam0 /*12*/])->f_5 && iParam1) != 0;
	}
	return ((Global_1058888->f_42266[iParam0 /*12*/])->f_5 && iParam1) != 0;
}

void func_451(int iParam0, int iParam1)
{
	if (!func_104(iParam0))
	{
		return;
	}
	if (!func_450(iParam0, iParam1))
	{
	}
	if (Global_1572887->f_12 == -1)
	{
		(Global_40.f_358[iParam0 /*12*/])->f_5 = ((Global_40.f_358[iParam0 /*12*/])->f_5 || iParam1);
		return;
	}
	(Global_1058888->f_42266[iParam0 /*12*/])->f_5 = ((Global_1058888->f_42266[iParam0 /*12*/])->f_5 || iParam1);
}

void func_452(int iParam0, int iParam1)
{
	if (!func_104(iParam0))
	{
		return;
	}
	if (Global_1572887->f_12 == -1)
	{
		(Global_40.f_358[iParam0 /*12*/])->f_5 = ((Global_40.f_358[iParam0 /*12*/])->f_5 - ((Global_40.f_358[iParam0 /*12*/])->f_5 && iParam1));
		return;
	}
	(Global_1058888->f_42266[iParam0 /*12*/])->f_5 = ((Global_1058888->f_42266[iParam0 /*12*/])->f_5 - ((Global_1058888->f_42266[iParam0 /*12*/])->f_5 && iParam1));
}

void func_453(int iParam0, bool bParam1)
{
	if (!func_104(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_547(func_699(iParam0));
	}
	else
	{
		func_700(func_699(iParam0));
	}
}

int func_454(int iParam0)
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
	else if (iParam0 <= 115)
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

void func_455(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_23117[iParam0 /*11*/])->f_2 = iParam1;
		return;
	}
	(Global_1058888->f_40615[iParam0 /*11*/])->f_2 = iParam1;
}

void func_456(int iParam0)
{
	if (!func_207(iParam0))
	{
		return;
	}
	if (func_548(iParam0))
	{
		func_549(iParam0);
	}
	else
	{
		func_701(iParam0);
	}
}

int func_457(int iParam0)
{
	if (!func_207(iParam0))
	{
		return 0;
	}
	return func_210(iParam0, 16777216);
}

int func_458(int iParam0)
{
	if (!func_207(iParam0))
	{
		return 0;
	}
	return ((*Global_1888801)[iParam0 /*35*/])->f_3;
}

int func_459(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_207(iParam0))
	{
		return 0;
	}
	iVar0 = func_702(iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	iVar1 = func_703(func_460(iParam0));
	iVar2 = (iVar0 - iVar1);
	if (iVar2 < 0)
	{
		iVar2 = 0;
	}
	return iVar2;
}

int func_460(int iParam0)
{
	if (!func_207(iParam0))
	{
		return -15;
	}
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23117[iParam0 /*11*/])->f_1;
	}
	return (Global_1058888->f_40615[iParam0 /*11*/])->f_1;
}

int func_461(int iParam0)
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
	iVar0 = func_260(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_259(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_258(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_263(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return 0;
	}
	iVar4 = func_262(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_261(iParam0);
	if (iVar5 < 1 || iVar5 > func_704(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_462(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_23117[iParam0 /*11*/])->f_1 = iParam1;
		return;
	}
	(Global_1058888->f_40615[iParam0 /*11*/])->f_1 = iParam1;
}

void func_463(int iParam0, int iParam1)
{
	if (!func_207(iParam0))
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	(Global_23117[iParam0 /*11*/])->f_3 = iParam1;
}

void func_464(int iParam0)
{
	if (!func_207(iParam0))
	{
		return;
	}
	if (func_285(iParam0) && func_286(iParam0))
	{
		func_547(func_506(iParam0));
	}
	else
	{
		func_700(func_506(iParam0));
	}
}

void func_465(int iParam0, int iParam1)
{
	if (!func_233(iParam0))
	{
		return;
	}
	if (!func_591(iParam0, iParam1))
	{
	}
	if (Global_1572887->f_12 == -1)
	{
		Global_40.f_431[iParam0] = (Global_40.f_431[iParam0] || iParam1);
		return;
	}
	Global_1058888->f_42339[iParam0] = (Global_1058888->f_42339[iParam0] || iParam1);
}

void func_466(int iParam0, int iParam1)
{
	if (!func_233(iParam0))
	{
		return;
	}
	if (Global_1572887->f_12 == -1)
	{
		Global_40.f_431[iParam0] = (&Global_40.f_431[iParam0] - (Global_40.f_431[iParam0] && iParam1));
		return;
	}
	Global_1058888->f_42339[iParam0] = (&Global_1058888->f_42339[iParam0] - (Global_1058888->f_42339[iParam0] && iParam1));
}

void func_467(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_233(iParam0))
	{
		return;
	}
	if (iParam0 == 8)
	{
		return;
	}
	iVar0 = func_705(iParam0);
	if (bParam1)
	{
		func_547(iVar0);
	}
	else
	{
		func_700(iVar0);
	}
}

int func_468()
{
	return 0;
}

int func_469(int iParam0)
{
	switch (func_27())
	{
		case -1:
			return (Global_1357549->f_1494 && iParam0) != 0;
	}
	return 0;
}

int func_470(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1[3];
	int iVar5[3];
	int iVar9[3];
	int iVar13[3];
	int iVar17;

	uVar0 = func_468();
	iVar1[0] = -1687561002;
	iVar1[1] = 1957225320;
	iVar1[2] = -860696938;
	iVar5[0] = -1971474291;
	iVar5[1] = -1425946870;
	iVar5[2] = -1114426126;
	iVar9[0] = -316909020;
	iVar9[1] = -1962893335;
	iVar9[2] = 1351589798;
	iVar13[0] = 300868838;
	iVar13[1] = -1788578071;
	iVar13[2] = 1157066259;
	if (((func_706() || func_576(((*Global_1347702)[59 /*49*/])->f_15)) || func_576(((*Global_1347702)[0 /*49*/])->f_15)) || func_707(64))
	{
		iVar13[0] = -316909020;
		iVar13[1] = -1962893335;
		iVar13[2] = 1351589798;
		if (iParam0 == 0)
		{
			if (STREAMING::_IS_IMAP_ACTIVE(300868838))
			{
				STREAMING::_REMOVE_IMAP(300868838);
			}
			if (STREAMING::_IS_IMAP_ACTIVE(-1788578071))
			{
				STREAMING::_REMOVE_IMAP(-1788578071);
			}
			if (STREAMING::_IS_IMAP_ACTIVE(1157066259))
			{
				STREAMING::_REMOVE_IMAP(1157066259);
			}
		}
		if (func_708(((*Global_1835011)[9 /*74*/])->f_1) == 0 && func_576(((*Global_1835011)[9 /*74*/])->f_1) == 0)
		{
			if (iParam0 == 0)
			{
				if (STREAMING::_IS_IMAP_ACTIVE(1475953931))
				{
					STREAMING::_REMOVE_IMAP(1475953931);
				}
				if (STREAMING::_IS_IMAP_ACTIVE(1475953931))
				{
					STREAMING::_REMOVE_IMAP(1475953931);
				}
				if (STREAMING::_IS_IMAP_ACTIVE(1475953931))
				{
					STREAMING::_REMOVE_IMAP(1475953931);
				}
			}
		}
	}
	if (((((func_708(((*Global_1835011)[9 /*74*/])->f_1) || func_576(((*Global_1835011)[9 /*74*/])->f_1)) || func_709()) || func_297() == 2) || func_576(((*Global_1347702)[66 /*49*/])->f_15)) || ((func_576(((*Global_1835011)[10 /*74*/])->f_1) && func_70(11)) && func_707(64) == 0))
	{
		iVar9[0] = 1475953931;
		iVar9[1] = 1475953931;
		iVar9[2] = 1475953931;
		iVar13[0] = 1475953931;
		iVar13[1] = 1475953931;
		iVar13[2] = 1475953931;
	}
	else
	{
		iVar9[0] = -316909020;
		iVar9[1] = -1962893335;
		iVar9[2] = 1351589798;
	}
	if (func_710() || func_576(((*Global_1835011)[4 /*74*/])->f_1))
	{
		iVar5[0] = &iVar1[0];
		iVar5[1] = &iVar1[1];
		iVar5[2] = &iVar1[2];
	}
	if (func_711(1) && iParam0 == 1)
	{
		iVar1[0] = -1971474291;
		iVar1[1] = -1425946870;
		iVar1[2] = -1114426126;
		iVar5[0] = -1687561002;
		iVar5[1] = 1957225320;
		iVar5[2] = -860696938;
		iVar17 = 0;
		while (iVar17 < 3)
		{
			if (STREAMING::_IS_IMAP_ACTIVE(&(iVar1[iVar17])))
			{
				STREAMING::_REMOVE_IMAP(&(iVar1[iVar17]));
			}
			if (STREAMING::_IS_IMAP_ACTIVE(&(iVar5[iVar17])))
			{
				STREAMING::_REMOVE_IMAP(&(iVar5[iVar17]));
			}
			iVar17++;
		}
		return func_712();
	}
	switch (iParam0)
	{
		case 1:
			uVar0 = func_713(&iVar1, &iVar5, bParam1);
			break;
		case 0:
			uVar0 = func_713(&iVar9, &iVar13, bParam1);
			break;
	}
	return uVar0;
}

var func_471(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1[3];
	int iVar5[3];
	int iVar9[3];
	int iVar13[3];

	uVar0 = func_468();
	iVar1[0] = 1209017192;
	iVar1[1] = -2143243848;
	iVar1[2] = 510052409;
	iVar5[0] = -644575724;
	iVar5[1] = 291770965;
	iVar5[2] = 1700661865;
	iVar9[0] = 1070723367;
	iVar9[1] = 1070723367;
	iVar9[2] = 1070723367;
	if ((((((func_708(((*Global_1835011)[22 /*74*/])->f_1) || func_576(((*Global_1835011)[22 /*74*/])->f_1)) || func_708(((*Global_1835011)[26 /*74*/])->f_1)) || func_576(((*Global_1835011)[26 /*74*/])->f_1)) || ((func_576(((*Global_1835011)[20 /*74*/])->f_1) || func_70(20)) && func_70(22) == 0)) || (((func_576(((*Global_1835011)[19 /*74*/])->f_1) || (func_113(&Global_1898437) == 19 && func_714())) || func_70(19)) && func_70(22) == 0)) && func_707(64) == 0)
	{
		if (iParam0 == 0)
		{
			if (STREAMING::_IS_IMAP_ACTIVE(-109425099))
			{
				STREAMING::_REMOVE_IMAP(-109425099);
			}
		}
		iVar13[0] = 1261237250;
		iVar13[1] = 1261237250;
		iVar13[2] = 1261237250;
		iVar9[0] = 1261237250;
		iVar9[1] = 1261237250;
		iVar9[2] = 1261237250;
	}
	else
	{
		if (iParam0 == 0)
		{
			if (STREAMING::_IS_IMAP_ACTIVE(1261237250))
			{
				STREAMING::_REMOVE_IMAP(1261237250);
			}
		}
		iVar13[0] = -109425099;
		iVar13[1] = -109425099;
		iVar13[2] = -109425099;
	}
	if ((((func_708(((*Global_1835011)[23 /*74*/])->f_1) || func_576(((*Global_1835011)[23 /*74*/])->f_1)) || (((func_70(22) && func_70(23) == 0) && func_70(24)) && (func_339(20) || func_70(20)))) || (((func_70(22) && func_70(23) == 0) && func_70(20)) && (func_339(24) || func_70(24)))) || func_707(64))
	{
		if (iParam0 == 0)
		{
			if (STREAMING::_IS_IMAP_ACTIVE(1070723367))
			{
				STREAMING::_REMOVE_IMAP(1070723367);
			}
		}
		iVar9[0] = -109425099;
		iVar9[1] = -109425099;
		iVar9[2] = -109425099;
	}
	if (func_710())
	{
		iVar5[0] = &iVar1[0];
		iVar5[1] = &iVar1[1];
		iVar5[2] = &iVar1[2];
	}
	switch (iParam0)
	{
		case 1:
			uVar0 = func_713(&iVar1, &iVar5, bParam1);
			break;
		case 0:
			uVar0 = func_713(&iVar13, &iVar9, bParam1);
			break;
	}
	return uVar0;
}

var func_472(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1[3];
	int iVar5[3];
	int iVar9[3];
	int iVar13[3];

	uVar0 = func_468();
	iVar1[0] = 531106429;
	iVar1[1] = 531106429;
	iVar1[2] = 531106429;
	iVar5[0] = 1069611813;
	iVar5[1] = 1069611813;
	iVar5[2] = 1069611813;
	iVar9[0] = 1102643191;
	iVar9[1] = 1102643191;
	iVar9[2] = 1102643191;
	iVar13[0] = 44502487;
	iVar13[1] = 44502487;
	iVar13[2] = 44502487;
	if ((((((func_708(((*Global_1835011)[57 /*74*/])->f_1) || func_576(((*Global_1835011)[57 /*74*/])->f_1)) || func_708(((*Global_1835011)[59 /*74*/])->f_1)) || func_576(((*Global_1835011)[59 /*74*/])->f_1)) || func_708(((*Global_1835011)[58 /*74*/])->f_1)) || func_576(((*Global_1835011)[58 /*74*/])->f_1)) || func_715())
	{
		iVar13[0] = 1102643191;
		iVar13[1] = 1102643191;
		iVar13[2] = 1102643191;
		if (iParam0 == 0)
		{
			if (STREAMING::_IS_IMAP_ACTIVE(44502487))
			{
				STREAMING::_REMOVE_IMAP(44502487);
			}
		}
	}
	if (func_710())
	{
		iVar5[0] = &iVar1[0];
		iVar5[1] = &iVar1[1];
		iVar5[2] = &iVar1[2];
	}
	switch (iParam0)
	{
		case 1:
			uVar0 = func_713(&iVar1, &iVar5, bParam1);
			break;
		case 0:
			uVar0 = func_713(&iVar9, &iVar13, bParam1);
			break;
	}
	return uVar0;
}

void func_473(int iParam0, int iParam1)
{
	int iVar0[18];
	int iVar19[18];
	int iVar38[18];
	int iVar57;
	var uVar58;
	bool bVar59;

	iVar0[0] = -224845272; /* GXTEntry: "Campfire Log Seat Cover" */
	iVar19[0] = -268335331;
	iVar38[0] = func_712();
	iVar0[1] = -147867326; /* GXTEntry: "Cougar Pelt Covered Chest" */
	iVar19[1] = 1546110128;
	iVar38[1] = -855912354;
	iVar0[2] = -1262979941; /* GXTEntry: "Ox Hide Rug" */
	iVar19[2] = 324486076;
	iVar38[2] = func_712();
	iVar0[3] = -2119627968; /* GXTEntry: "Boar Skin Table Cover" */
	iVar19[3] = -2052582076;
	iVar38[3] = -402976431;
	iVar0[4] = -837651311; /* GXTEntry: "Big Horn Ram Skull" */
	iVar19[4] = 1029525997;
	iVar38[4] = func_712();
	iVar0[5] = -2089261255; /* GXTEntry: "Alligator Skull" */
	iVar19[5] = -1472352094;
	iVar38[5] = func_712();
	iVar0[6] = -1145367359; /* GXTEntry: "Pronghorn Leather Table Tops" */
	iVar19[6] = -745860880;
	iVar38[6] = func_712();
	iVar0[7] = -1145367359; /* GXTEntry: "Pronghorn Leather Table Tops" */
	iVar19[7] = 1219276914;
	iVar38[7] = func_712();
	iVar0[8] = -1608451354; /* GXTEntry: "Boar Skin Rug" */
	iVar19[8] = -2104773585;
	iVar38[8] = func_712();
	iVar0[9] = 2137149309;
	iVar19[9] = -302735166;
	iVar38[9] = func_712();
	iVar0[10] = -1329287819; /* GXTEntry: "Pronghorn Skull" */
	iVar19[10] = -2077690059;
	iVar38[10] = func_712();
	iVar0[11] = -848232571; /* GXTEntry: "Elk Antlers" */
	iVar19[11] = 1548546221;
	iVar38[11] = func_712();
	iVar0[12] = -804860583; /* GXTEntry: "Scout Fire Ground Cover" */
	iVar19[12] = 2101101756;
	iVar38[12] = func_712();
	iVar0[13] = -7810518; /* GXTEntry: "Hanging Bones" */
	iVar19[13] = 1560807181;
	iVar38[13] = func_712();
	iVar0[14] = 1510372288; /* GXTEntry: "Moose Antlers" */
	iVar19[14] = 106249677;
	iVar38[14] = func_712();
	iVar0[15] = 858182906; /* GXTEntry: "Campfire Seat Cover" */
	iVar19[15] = -723982773;
	iVar38[15] = func_712();
	iVar0[16] = 708084994; /* GXTEntry: "Snake Skin Banjo Head" */
	iVar19[16] = 327932996;
	iVar38[16] = func_712();
	iVar0[17] = 765991018; /* GXTEntry: "Wolf Skull" */
	iVar19[17] = -15722296;
	iVar38[17] = func_712();
	bVar59 = false;
	if (iParam0 == 1)
	{
		iVar57 = func_716(&(iVar0[Global_1357549->f_575]), 3);
		uVar58 = func_717(&(iVar0[Global_1357549->f_575]));
		bVar59 = (iVar57 > 0 || uVar58);
		if (bVar59 || iParam1)
		{
			if (func_238(&(iVar19[Global_1357549->f_575])))
			{
				if (!STREAMING::_IS_IMAP_ACTIVE(&(iVar19[Global_1357549->f_575])))
				{
					func_241(&(iVar19[Global_1357549->f_575]), 1);
					func_718(&(iVar19[Global_1357549->f_575]));
				}
				if (func_238(&(iVar38[Global_1357549->f_575])))
				{
					if (STREAMING::_IS_IMAP_ACTIVE(&(iVar38[Global_1357549->f_575])))
					{
						STREAMING::_REMOVE_IMAP(&(iVar38[Global_1357549->f_575]));
					}
				}
			}
		}
		else
		{
			if (func_238(&(iVar19[Global_1357549->f_575])))
			{
				if (STREAMING::_IS_IMAP_ACTIVE(&(iVar19[Global_1357549->f_575])))
				{
					func_241(&(iVar19[Global_1357549->f_575]), 0);
					STREAMING::_REMOVE_IMAP(&(iVar19[Global_1357549->f_575]));
				}
			}
			if (func_238(&(iVar38[Global_1357549->f_575])))
			{
				if (STREAMING::_IS_IMAP_ACTIVE(&(iVar38[Global_1357549->f_575])) == 0)
				{
					STREAMING::_REQUEST_IMAP(&(iVar38[Global_1357549->f_575]));
				}
			}
		}
	}
	if (iParam0 != 1 || func_297() == 2)
	{
		if (func_238(&(iVar38[Global_1357549->f_575])))
		{
			if (STREAMING::_IS_IMAP_ACTIVE(&(iVar38[Global_1357549->f_575])))
			{
				STREAMING::_REMOVE_IMAP(&(iVar38[Global_1357549->f_575]));
			}
		}
		if (func_238(&(iVar19[Global_1357549->f_575])))
		{
			if (STREAMING::_IS_IMAP_ACTIVE(&(iVar19[Global_1357549->f_575])))
			{
				func_241(&(iVar19[Global_1357549->f_575]), 0);
				STREAMING::_REMOVE_IMAP(&(iVar19[Global_1357549->f_575]));
			}
		}
	}
}

void func_474(int iParam0, int iParam1)
{
	int iVar0[18];
	int iVar19[18];
	int iVar38[18];

	iVar0[0] = 2137149309;
	iVar19[0] = -1999825729;
	iVar38[0] = func_712();
	iVar0[1] = -147867326; /* GXTEntry: "Cougar Pelt Covered Chest" */
	iVar19[1] = -1774140220;
	iVar38[1] = -262271608;
	iVar0[2] = -1262979941; /* GXTEntry: "Ox Hide Rug" */
	iVar19[2] = 1601820048;
	iVar38[2] = func_712();
	iVar0[3] = -2119627968; /* GXTEntry: "Boar Skin Table Cover" */
	iVar19[3] = 2025485344;
	iVar38[3] = 901520480;
	iVar0[4] = -837651311; /* GXTEntry: "Big Horn Ram Skull" */
	iVar19[4] = -1999465365;
	iVar38[4] = func_712();
	iVar0[5] = -2089261255; /* GXTEntry: "Alligator Skull" */
	iVar19[5] = 853723410;
	iVar38[5] = func_712();
	iVar0[6] = -1145367359; /* GXTEntry: "Pronghorn Leather Table Tops" */
	iVar19[6] = 1169958167;
	iVar38[6] = func_712();
	iVar0[7] = -1145367359; /* GXTEntry: "Pronghorn Leather Table Tops" */
	iVar19[7] = -792944828;
	iVar38[7] = func_712();
	iVar0[8] = -1608451354; /* GXTEntry: "Boar Skin Rug" */
	iVar19[8] = -2001921071;
	iVar38[8] = func_712();
	iVar0[9] = -7810518; /* GXTEntry: "Hanging Bones" */
	iVar19[9] = 157361403;
	iVar38[9] = func_712();
	iVar0[10] = -1329287819; /* GXTEntry: "Pronghorn Skull" */
	iVar19[10] = -492479795;
	iVar38[10] = func_712();
	iVar0[11] = -848232571; /* GXTEntry: "Elk Antlers" */
	iVar19[11] = -1284301817;
	iVar38[11] = func_712();
	iVar0[12] = -804860583; /* GXTEntry: "Scout Fire Ground Cover" */
	iVar19[12] = -1045282549;
	iVar38[12] = func_712();
	iVar0[13] = 1510372288; /* GXTEntry: "Moose Antlers" */
	iVar19[13] = -989202374;
	iVar38[13] = func_712();
	iVar0[14] = -224845272; /* GXTEntry: "Campfire Log Seat Cover" */
	iVar19[14] = 1538837441;
	iVar38[14] = func_712();
	iVar0[15] = 858182906; /* GXTEntry: "Campfire Seat Cover" */
	iVar19[15] = 530288130;
	iVar38[15] = func_712();
	iVar0[16] = 708084994; /* GXTEntry: "Snake Skin Banjo Head" */
	iVar19[16] = -1887167048;
	iVar38[16] = func_712();
	iVar0[17] = 765991018; /* GXTEntry: "Wolf Skull" */
	iVar19[17] = -347518940;
	iVar38[17] = func_712();
	if (iParam0 == 2)
	{
		if ((func_716(&(iVar0[Global_1357549->f_575]), 3) > 0 || func_717(&(iVar0[Global_1357549->f_575]))) || iParam1)
		{
			if (func_238(&(iVar19[Global_1357549->f_575])))
			{
				if (!STREAMING::_IS_IMAP_ACTIVE(&(iVar19[Global_1357549->f_575])))
				{
					func_241(&(iVar19[Global_1357549->f_575]), 1);
					func_718(&(iVar19[Global_1357549->f_575]));
				}
			}
			if (func_238(&(iVar38[Global_1357549->f_575])))
			{
				if (STREAMING::_IS_IMAP_ACTIVE(&(iVar38[Global_1357549->f_575])))
				{
					STREAMING::_REMOVE_IMAP(&(iVar38[Global_1357549->f_575]));
				}
			}
		}
		else
		{
			if (func_238(&(iVar19[Global_1357549->f_575])))
			{
				if (STREAMING::_IS_IMAP_ACTIVE(&(iVar19[Global_1357549->f_575])))
				{
					func_241(&(iVar19[Global_1357549->f_575]), 0);
					STREAMING::_REMOVE_IMAP(&(iVar19[Global_1357549->f_575]));
				}
			}
			if (func_238(&(iVar38[Global_1357549->f_575])))
			{
				if (STREAMING::_IS_IMAP_ACTIVE(&(iVar38[Global_1357549->f_575])) == 0)
				{
					STREAMING::_REQUEST_IMAP(&(iVar38[Global_1357549->f_575]));
				}
			}
		}
	}
	if (iParam0 != 2 || func_297() != 1)
	{
		if (func_238(&(iVar38[Global_1357549->f_575])))
		{
			if (STREAMING::_IS_IMAP_ACTIVE(&(iVar38[Global_1357549->f_575])))
			{
				STREAMING::_REMOVE_IMAP(&(iVar38[Global_1357549->f_575]));
			}
		}
		if (func_238(&(iVar19[Global_1357549->f_575])))
		{
			if (STREAMING::_IS_IMAP_ACTIVE(&(iVar19[Global_1357549->f_575])))
			{
				func_241(&(iVar19[Global_1357549->f_575]), 0);
				STREAMING::_REMOVE_IMAP(&(iVar19[Global_1357549->f_575]));
			}
		}
	}
}

void func_475(int iParam0, int iParam1)
{
	int iVar0[18];
	int iVar19[18];
	int iVar38[6];
	int iVar45[6];
	int iVar52;
	int iVar53;
	var uVar54;
	bool bVar55;

	iVar0[0] = 2137149309;
	iVar19[0] = -134624703;
	iVar0[1] = -147867326; /* GXTEntry: "Cougar Pelt Covered Chest" */
	iVar19[1] = func_468();
	iVar0[2] = -1262979941; /* GXTEntry: "Ox Hide Rug" */
	iVar19[2] = func_468();
	iVar0[3] = -2119627968; /* GXTEntry: "Boar Skin Table Cover" */
	iVar19[3] = func_468();
	iVar0[4] = -837651311; /* GXTEntry: "Big Horn Ram Skull" */
	iVar19[4] = func_468();
	iVar0[5] = -2089261255; /* GXTEntry: "Alligator Skull" */
	iVar19[5] = func_468();
	iVar0[6] = -1145367359; /* GXTEntry: "Pronghorn Leather Table Tops" */
	iVar19[6] = -1535722316;
	iVar0[7] = -1145367359; /* GXTEntry: "Pronghorn Leather Table Tops" */
	iVar19[7] = 1547994518;
	iVar0[8] = -1608451354; /* GXTEntry: "Boar Skin Rug" */
	iVar19[8] = func_468();
	iVar0[9] = -1329287819; /* GXTEntry: "Pronghorn Skull" */
	iVar19[9] = -910918420;
	iVar0[10] = -848232571; /* GXTEntry: "Elk Antlers" */
	iVar19[10] = 495480888;
	iVar0[11] = -804860583; /* GXTEntry: "Scout Fire Ground Cover" */
	iVar19[11] = 2004706822;
	iVar0[12] = 1510372288; /* GXTEntry: "Moose Antlers" */
	iVar19[12] = 884576413;
	iVar0[13] = -7810518; /* GXTEntry: "Hanging Bones" */
	iVar19[13] = 778703691;
	iVar0[14] = -224845272; /* GXTEntry: "Campfire Log Seat Cover" */
	iVar19[14] = -421730990;
	iVar0[15] = 858182906; /* GXTEntry: "Campfire Seat Cover" */
	iVar19[15] = 514406510;
	iVar0[16] = 765991018; /* GXTEntry: "Wolf Skull" */
	iVar19[16] = -327708229;
	iVar0[17] = 708084994; /* GXTEntry: "Snake Skin Banjo Head" */
	iVar19[17] = 1048845581;
	if (iParam0 == 3 && ((func_719(&(iVar0[Global_1357549->f_575]), 1, 0) || func_717(&(iVar0[Global_1357549->f_575]))) || iParam1))
	{
		if (func_238(&(iVar19[Global_1357549->f_575])))
		{
			if (!STREAMING::_IS_IMAP_ACTIVE(&(iVar19[Global_1357549->f_575])))
			{
				func_241(&(iVar19[Global_1357549->f_575]), 1);
				func_718(&(iVar19[Global_1357549->f_575]));
			}
		}
	}
	else if (func_238(&(iVar19[Global_1357549->f_575])))
	{
		if (STREAMING::_IS_IMAP_ACTIVE(&(iVar19[Global_1357549->f_575])))
		{
			func_241(&(iVar19[Global_1357549->f_575]), 0);
			STREAMING::_REMOVE_IMAP(&(iVar19[Global_1357549->f_575]));
		}
	}
	iVar38[0] = -1608451354; /* GXTEntry: "Boar Skin Rug" */
	iVar45[0] = 11;
	iVar38[1] = -147867326; /* GXTEntry: "Cougar Pelt Covered Chest" */
	iVar45[1] = 12;
	iVar38[2] = -1262979941; /* GXTEntry: "Ox Hide Rug" */
	iVar45[2] = 13;
	iVar38[3] = -837651311; /* GXTEntry: "Big Horn Ram Skull" */
	iVar45[3] = 14;
	iVar38[4] = -2119627968; /* GXTEntry: "Boar Skin Table Cover" */
	iVar45[4] = 16;
	iVar38[5] = -2089261255; /* GXTEntry: "Alligator Skull" */
	iVar45[5] = 15;
	bVar55 = false;
	iVar52 = 0;
	while (iVar52 < 6)
	{
		if (iParam0 == 3)
		{
			iVar53 = func_716(&(iVar38[iVar52]), 3);
			uVar54 = func_717(&(iVar38[iVar52]));
			bVar55 = (iVar53 > 0 || uVar54);
		}
		if (bVar55 || iParam1)
		{
			if (func_552(&(iVar45[iVar52])) == 0)
			{
				func_304(&(iVar45[iVar52]));
			}
		}
		else if (func_552(&(iVar45[iVar52])))
		{
			func_314(&(iVar45[iVar52]));
		}
		iVar52++;
	}
}

void func_476(int iParam0, int iParam1)
{
	int iVar0[18];
	int iVar19[18];
	int iVar38[18];
	int iVar57;
	var uVar58;
	bool bVar59;

	iVar0[0] = 2137149309;
	iVar19[0] = 1104800593;
	iVar38[0] = func_712();
	iVar0[1] = -1145367359; /* GXTEntry: "Pronghorn Leather Table Tops" */
	iVar19[1] = 968084866;
	iVar38[1] = func_712();
	iVar0[2] = -1145367359; /* GXTEntry: "Pronghorn Leather Table Tops" */
	iVar19[2] = -696422730;
	iVar38[2] = func_712();
	iVar0[3] = -1329287819; /* GXTEntry: "Pronghorn Skull" */
	iVar19[3] = 1423158124;
	iVar38[3] = func_712();
	iVar0[4] = -1608451354; /* GXTEntry: "Boar Skin Rug" */
	iVar19[4] = -1063259251;
	iVar38[4] = func_712();
	iVar0[5] = -147867326; /* GXTEntry: "Cougar Pelt Covered Chest" */
	iVar19[5] = -317096325;
	iVar38[5] = 1025787994;
	iVar0[6] = -1262979941; /* GXTEntry: "Ox Hide Rug" */
	iVar19[6] = -1255331540;
	iVar38[6] = func_712();
	iVar0[7] = -2119627968; /* GXTEntry: "Boar Skin Table Cover" */
	iVar19[7] = -1063926197;
	iVar38[7] = 629519239;
	iVar0[8] = -837651311; /* GXTEntry: "Big Horn Ram Skull" */
	iVar19[8] = 360408116;
	iVar38[8] = func_712();
	iVar0[9] = -2089261255; /* GXTEntry: "Alligator Skull" */
	iVar19[9] = -408234235;
	iVar38[9] = func_712();
	iVar0[10] = -848232571; /* GXTEntry: "Elk Antlers" */
	iVar19[10] = -1016007592;
	iVar38[10] = func_712();
	iVar0[11] = -804860583; /* GXTEntry: "Scout Fire Ground Cover" */
	iVar19[11] = -763678874;
	iVar38[11] = func_712();
	iVar0[12] = 1510372288; /* GXTEntry: "Moose Antlers" */
	iVar19[12] = -1361342903;
	iVar38[12] = func_712();
	iVar0[13] = -7810518; /* GXTEntry: "Hanging Bones" */
	iVar19[13] = -483001024;
	iVar38[13] = func_712();
	iVar0[14] = -224845272; /* GXTEntry: "Campfire Log Seat Cover" */
	iVar19[14] = 255767990;
	iVar38[14] = func_712();
	iVar0[15] = 858182906; /* GXTEntry: "Campfire Seat Cover" */
	iVar19[15] = -2048221620;
	iVar38[15] = func_712();
	iVar0[16] = 765991018; /* GXTEntry: "Wolf Skull" */
	iVar19[16] = 339295570;
	iVar38[16] = func_712();
	iVar0[17] = 708084994; /* GXTEntry: "Snake Skin Banjo Head" */
	iVar19[17] = 668976634;
	iVar38[17] = func_712();
	bVar59 = false;
	if (iParam0 == 6)
	{
		iVar57 = func_716(&(iVar0[Global_1357549->f_575]), 3);
		uVar58 = func_717(&(iVar0[Global_1357549->f_575]));
		bVar59 = (iVar57 > 0 || uVar58);
		if (bVar59 || iParam1)
		{
			if (func_238(&(iVar19[Global_1357549->f_575])))
			{
				if (!STREAMING::_IS_IMAP_ACTIVE(&(iVar19[Global_1357549->f_575])))
				{
					func_241(&(iVar19[Global_1357549->f_575]), 1);
					func_718(&(iVar19[Global_1357549->f_575]));
				}
			}
			if (func_238(&(iVar38[Global_1357549->f_575])))
			{
				if (STREAMING::_IS_IMAP_ACTIVE(&(iVar38[Global_1357549->f_575])))
				{
					STREAMING::_REMOVE_IMAP(&(iVar38[Global_1357549->f_575]));
				}
			}
		}
		else
		{
			if (func_238(&(iVar19[Global_1357549->f_575])))
			{
				if (STREAMING::_IS_IMAP_ACTIVE(&(iVar19[Global_1357549->f_575])))
				{
					func_241(&(iVar19[Global_1357549->f_575]), 0);
					STREAMING::_REMOVE_IMAP(&(iVar19[Global_1357549->f_575]));
				}
			}
			if (func_238(&(iVar38[Global_1357549->f_575])))
			{
				if (STREAMING::_IS_IMAP_ACTIVE(&(iVar38[Global_1357549->f_575])) == 0)
				{
					STREAMING::_REQUEST_IMAP(&(iVar38[Global_1357549->f_575]));
				}
			}
		}
	}
	if (iParam0 != 6 || func_297() != 1)
	{
		if (func_238(&(iVar38[Global_1357549->f_575])))
		{
			if (STREAMING::_IS_IMAP_ACTIVE(&(iVar38[Global_1357549->f_575])))
			{
				STREAMING::_REMOVE_IMAP(&(iVar38[Global_1357549->f_575]));
			}
		}
		if (func_238(&(iVar19[Global_1357549->f_575])))
		{
			if (STREAMING::_IS_IMAP_ACTIVE(&(iVar19[Global_1357549->f_575])))
			{
				func_241(&(iVar19[Global_1357549->f_575]), 0);
				STREAMING::_REMOVE_IMAP(&(iVar19[Global_1357549->f_575]));
			}
		}
	}
}

int func_477(int iParam0)
{
	int iVar0;

	iVar0 = 1;
	if (iParam0 == 16)
	{
		iVar0 = Global_40.f_4283.f_312;
	}
	else
	{
		iVar0 = func_720(iParam0, 0);
	}
	return iVar0;
}

var func_478()
{
	return Global_1357549->f_1900;
}

void func_479(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar86;
	int iVar87;

	Var0 = 17;
	Var0.f_1 = 4;
	Var0.f_1.f_5 = 4;
	Var0.f_1.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	(*Var0[15 /*5*/])[0] = func_712();
	(*Var0[15 /*5*/])[1] = func_712();
	(*Var0[15 /*5*/])[2] = 1079303588;
	(*Var0[15 /*5*/])[3] = 1079303588;
	(*Var0[10 /*5*/])[0] = -937893311;
	(*Var0[10 /*5*/])[1] = -937893311;
	(*Var0[10 /*5*/])[2] = -937893311;
	(*Var0[10 /*5*/])[3] = 394987827;
	(*Var0[11 /*5*/])[0] = func_712();
	(*Var0[11 /*5*/])[1] = func_712();
	(*Var0[11 /*5*/])[2] = func_712();
	(*Var0[11 /*5*/])[3] = func_712();
	(*Var0[12 /*5*/])[0] = func_712();
	(*Var0[12 /*5*/])[1] = func_712();
	(*Var0[12 /*5*/])[2] = func_712();
	(*Var0[12 /*5*/])[3] = func_712();
	(*Var0[13 /*5*/])[0] = func_712();
	(*Var0[13 /*5*/])[1] = func_712();
	(*Var0[13 /*5*/])[2] = func_712();
	(*Var0[13 /*5*/])[3] = func_712();
	(*Var0[9 /*5*/])[0] = -1365193577;
	(*Var0[9 /*5*/])[1] = -1166561064;
	(*Var0[9 /*5*/])[2] = -1166561064;
	(*Var0[9 /*5*/])[3] = -1166561064;
	(*Var0[8 /*5*/])[0] = -1620486708;
	(*Var0[8 /*5*/])[1] = -1620486708;
	(*Var0[8 /*5*/])[2] = -1620486708;
	(*Var0[8 /*5*/])[3] = 163126540;
	(*Var0[7 /*5*/])[0] = 1808508475;
	(*Var0[7 /*5*/])[1] = 1808508475;
	(*Var0[7 /*5*/])[2] = 1808508475;
	(*Var0[7 /*5*/])[3] = 2015311123;
	(*Var0[6 /*5*/])[0] = -1576393943;
	(*Var0[6 /*5*/])[1] = -1576393943;
	(*Var0[6 /*5*/])[2] = -1576393943;
	(*Var0[6 /*5*/])[3] = -1920340119;
	(*Var0[5 /*5*/])[0] = -1563072795;
	(*Var0[5 /*5*/])[1] = -1563072795;
	(*Var0[5 /*5*/])[2] = 607574432;
	(*Var0[5 /*5*/])[3] = 607574432;
	(*Var0[4 /*5*/])[0] = -1987982797;
	(*Var0[4 /*5*/])[1] = -1987982797;
	(*Var0[4 /*5*/])[2] = -1987982797;
	(*Var0[4 /*5*/])[3] = -1933895237;
	(*Var0[3 /*5*/])[0] = -182995231;
	(*Var0[3 /*5*/])[1] = -182995231;
	(*Var0[3 /*5*/])[2] = 1267297807;
	(*Var0[3 /*5*/])[3] = 1267297807;
	(*Var0[0 /*5*/])[0] = func_712();
	(*Var0[0 /*5*/])[1] = -1150137955;
	(*Var0[0 /*5*/])[2] = -1150137955;
	(*Var0[0 /*5*/])[3] = -1150137955;
	(*Var0[1 /*5*/])[0] = func_712();
	(*Var0[1 /*5*/])[1] = func_712();
	(*Var0[1 /*5*/])[2] = func_712();
	(*Var0[1 /*5*/])[3] = func_712();
	(*Var0[2 /*5*/])[0] = func_712();
	(*Var0[2 /*5*/])[1] = func_712();
	(*Var0[2 /*5*/])[2] = func_712();
	(*Var0[2 /*5*/])[3] = func_712();
	iVar87 = 0;
	while (iVar87 < 17)
	{
		iVar86 = 0;
		while (iVar86 < 4)
		{
			if (Var0[iVar87 /*5*/][iVar86] != func_712())
			{
				if ((iVar86 + 1 == func_720(iVar87, 1) && iParam0 == 1) && iParam2)
				{
					if (!STREAMING::_IS_IMAP_ACTIVE(Var0[iVar87 /*5*/][iVar86]))
					{
						STREAMING::_REQUEST_IMAP(Var0[iVar87 /*5*/][iVar86]);
						func_721(Var0[iVar87 /*5*/][iVar86], 1, iParam1);
					}
				}
				else if ((Var0[iVar87 /*5*/][(func_720(iVar87, 1) - 1)] != Var0[iVar87 /*5*/][iVar86] || iParam0 != 1) || iParam2 == 0)
				{
					if (STREAMING::_IS_IMAP_ACTIVE(Var0[iVar87 /*5*/][iVar86]))
					{
						STREAMING::_REMOVE_IMAP(Var0[iVar87 /*5*/][iVar86]);
						func_721(Var0[iVar87 /*5*/][iVar86], 0, iParam1);
					}
				}
			}
			iVar86++;
		}
		iVar87++;
	}
}

void func_480(int iParam0, float fParam1, int iParam2)
{
	int iVar0;
	struct<16> Var1;
	int iVar50;
	int iVar51;
	int iVar52;

	if (fParam1 < 30f)
	{
		iVar0 = 0;
	}
	else if (fParam1 < 75f)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 2;
	}
	Var1 = 3;
	Var1.f_1 = 3;
	Var1.f_1.f_1 = 4;
	Var1.f_1.f_1.f_5 = 4;
	Var1.f_1.f_1.f_5.f_5 = 4;
	Var1.f_1.f_16 = 3;
	Var1.f_1.f_16.f_1 = 4;
	Var1.f_1.f_16.f_1.f_5 = 4;
	Var1.f_1.f_16.f_1.f_5.f_5 = 4;
	Var1.f_1.f_16.f_16 = 3;
	Var1.f_1.f_16.f_16.f_1 = 4;
	Var1.f_1.f_16.f_16.f_1.f_5 = 4;
	Var1.f_1.f_16.f_16.f_1.f_5.f_5 = 4;
	(*(*Var1[0 /*16*/])[0 /*5*/])[0] = func_712();
	(*(*Var1[1 /*16*/])[0 /*5*/])[0] = func_712();
	(*(*Var1[2 /*16*/])[0 /*5*/])[0] = func_712();
	(*(*Var1[0 /*16*/])[0 /*5*/])[1] = -710911638;
	(*(*Var1[1 /*16*/])[0 /*5*/])[1] = -710911638;
	(*(*Var1[2 /*16*/])[0 /*5*/])[1] = -710911638;
	(*(*Var1[0 /*16*/])[0 /*5*/])[2] = -942555699;
	(*(*Var1[1 /*16*/])[0 /*5*/])[2] = -942555699;
	(*(*Var1[2 /*16*/])[0 /*5*/])[2] = -942555699;
	(*(*Var1[0 /*16*/])[0 /*5*/])[3] = -760097927;
	(*(*Var1[1 /*16*/])[0 /*5*/])[3] = -760097927;
	(*(*Var1[2 /*16*/])[0 /*5*/])[3] = -760097927;
	(*(*Var1[0 /*16*/])[1 /*5*/])[0] = func_712();
	(*(*Var1[1 /*16*/])[1 /*5*/])[0] = func_712();
	(*(*Var1[2 /*16*/])[1 /*5*/])[0] = func_712();
	(*(*Var1[0 /*16*/])[1 /*5*/])[1] = 2047954825;
	(*(*Var1[1 /*16*/])[1 /*5*/])[1] = 2047954825;
	(*(*Var1[2 /*16*/])[1 /*5*/])[1] = 2047954825;
	(*(*Var1[0 /*16*/])[1 /*5*/])[2] = -2085723453;
	(*(*Var1[1 /*16*/])[1 /*5*/])[2] = -2085723453;
	(*(*Var1[2 /*16*/])[1 /*5*/])[2] = -2085723453;
	(*(*Var1[0 /*16*/])[1 /*5*/])[3] = 1434945142;
	(*(*Var1[1 /*16*/])[1 /*5*/])[3] = 1434945142;
	(*(*Var1[2 /*16*/])[1 /*5*/])[3] = 1434945142;
	(*(*Var1[0 /*16*/])[2 /*5*/])[0] = 1924209179;
	(*(*Var1[1 /*16*/])[2 /*5*/])[0] = 1924209179;
	(*(*Var1[2 /*16*/])[2 /*5*/])[0] = 1924209179;
	(*(*Var1[0 /*16*/])[2 /*5*/])[1] = -2084193212;
	(*(*Var1[1 /*16*/])[2 /*5*/])[1] = -2084193212;
	(*(*Var1[2 /*16*/])[2 /*5*/])[1] = -2084193212;
	(*(*Var1[0 /*16*/])[2 /*5*/])[2] = -838184752;
	(*(*Var1[1 /*16*/])[2 /*5*/])[2] = -838184752;
	(*(*Var1[2 /*16*/])[2 /*5*/])[2] = -838184752;
	(*(*Var1[0 /*16*/])[2 /*5*/])[3] = -1433138716;
	(*(*Var1[1 /*16*/])[2 /*5*/])[3] = -1433138716;
	(*(*Var1[2 /*16*/])[2 /*5*/])[3] = -1433138716;
	iVar52 = 0;
	while (iVar52 < 3)
	{
		iVar51 = 0;
		while (iVar51 < 3)
		{
			iVar50 = 0;
			while (iVar50 < 4)
			{
				if (*Var1[iVar52 /*16*/])[iVar51 /*5*/][iVar50] != func_712()
				{
					if (((iVar52 == iVar0 && iVar50 + 1 == func_722(iVar51)) && iParam0 == 1) && iParam2)
					{
						if (!STREAMING::_IS_IMAP_ACTIVE((*Var1[iVar52 /*16*/])[iVar51 /*5*/][iVar50]))
						{
							STREAMING::_REQUEST_IMAP((*Var1[iVar52 /*16*/])[iVar51 /*5*/][iVar50]);
						}
					}
					else if (((*Var1[iVar0 /*16*/])[iVar51 /*5*/][(func_722(iVar51) - 1)] != (*Var1[iVar52 /*16*/])[iVar51 /*5*/][iVar50] || iParam0 != 1) || iParam2 == 0)
					{
						if (STREAMING::_IS_IMAP_ACTIVE((*Var1[iVar52 /*16*/])[iVar51 /*5*/][iVar50]))
						{
							STREAMING::_REMOVE_IMAP((*Var1[iVar52 /*16*/])[iVar51 /*5*/][iVar50]);
						}
					}
				}
				iVar50++;
			}
			iVar51++;
		}
		iVar52++;
	}
}

void func_481(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<5> Var0;
	int iVar86;
	int iVar87;

	Var0 = 17;
	Var0.f_1 = 4;
	Var0.f_1.f_5 = 4;
	Var0.f_1.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	(*Var0[15 /*5*/])[0] = func_712();
	(*Var0[15 /*5*/])[1] = func_712();
	(*Var0[15 /*5*/])[2] = -1147256587;
	(*Var0[15 /*5*/])[3] = -1147256587;
	(*Var0[10 /*5*/])[0] = -1247551347;
	(*Var0[10 /*5*/])[1] = -1247551347;
	(*Var0[10 /*5*/])[2] = -1247551347;
	(*Var0[10 /*5*/])[3] = -1010466481;
	(*Var0[11 /*5*/])[0] = func_712();
	(*Var0[11 /*5*/])[1] = func_712();
	(*Var0[11 /*5*/])[2] = func_712();
	(*Var0[11 /*5*/])[3] = func_712();
	(*Var0[12 /*5*/])[0] = func_712();
	(*Var0[12 /*5*/])[1] = func_712();
	(*Var0[12 /*5*/])[2] = func_712();
	(*Var0[12 /*5*/])[3] = func_712();
	(*Var0[13 /*5*/])[0] = func_712();
	(*Var0[13 /*5*/])[1] = func_712();
	(*Var0[13 /*5*/])[2] = func_712();
	(*Var0[13 /*5*/])[3] = func_712();
	(*Var0[9 /*5*/])[0] = -160392273;
	(*Var0[9 /*5*/])[1] = 1049842342;
	(*Var0[9 /*5*/])[2] = 1049842342;
	(*Var0[9 /*5*/])[3] = 1049842342;
	(*Var0[8 /*5*/])[0] = 1674800958;
	(*Var0[8 /*5*/])[1] = 1674800958;
	(*Var0[8 /*5*/])[2] = 1674800958;
	(*Var0[8 /*5*/])[3] = 2728487;
	(*Var0[7 /*5*/])[0] = 1636281938;
	(*Var0[7 /*5*/])[1] = 1636281938;
	(*Var0[7 /*5*/])[2] = 1636281938;
	(*Var0[7 /*5*/])[3] = 1084869405;
	(*Var0[6 /*5*/])[0] = -1451784475;
	(*Var0[6 /*5*/])[1] = -1451784475;
	(*Var0[6 /*5*/])[2] = -1451784475;
	(*Var0[6 /*5*/])[3] = 1128417383;
	(*Var0[5 /*5*/])[0] = -2016771661;
	(*Var0[5 /*5*/])[1] = -2016771661;
	(*Var0[5 /*5*/])[2] = 202127432;
	(*Var0[5 /*5*/])[3] = 202127432;
	(*Var0[4 /*5*/])[0] = -546137515;
	(*Var0[4 /*5*/])[1] = -546137515;
	(*Var0[4 /*5*/])[2] = -546137515;
	(*Var0[4 /*5*/])[3] = 1679038623;
	if (bParam3)
	{
		func_723(1);
	}
	else
	{
		func_723(0);
	}
	(*Var0[3 /*5*/])[0] = 1742990618;
	(*Var0[3 /*5*/])[1] = 1742990618;
	(*Var0[3 /*5*/])[2] = -751959361;
	(*Var0[3 /*5*/])[3] = -751959361;
	(*Var0[0 /*5*/])[0] = func_712();
	(*Var0[0 /*5*/])[1] = func_712();
	(*Var0[0 /*5*/])[2] = -2000080725;
	(*Var0[0 /*5*/])[3] = -2000080725;
	(*Var0[1 /*5*/])[0] = 2123887232;
	(*Var0[1 /*5*/])[1] = 2123887232;
	(*Var0[1 /*5*/])[2] = 2123887232;
	(*Var0[1 /*5*/])[3] = 2123887232;
	(*Var0[2 /*5*/])[0] = 102652153;
	(*Var0[2 /*5*/])[1] = 102652153;
	(*Var0[2 /*5*/])[2] = 102652153;
	(*Var0[2 /*5*/])[3] = 102652153;
	iVar87 = 0;
	while (iVar87 < 17)
	{
		iVar86 = 0;
		while (iVar86 < 4)
		{
			if (Var0[iVar87 /*5*/][iVar86] != func_712())
			{
				if ((iVar86 + 1 == func_720(iVar87, 1) && iParam0 == 2) && iParam2)
				{
					if (!STREAMING::_IS_IMAP_ACTIVE(Var0[iVar87 /*5*/][iVar86]))
					{
						STREAMING::_REQUEST_IMAP(Var0[iVar87 /*5*/][iVar86]);
						func_721(Var0[iVar87 /*5*/][iVar86], 1, iParam1);
					}
				}
				else if ((Var0[iVar87 /*5*/][(func_720(iVar87, 1) - 1)] != Var0[iVar87 /*5*/][iVar86] || iParam0 != 2) || iParam2 == 0)
				{
					if (STREAMING::_IS_IMAP_ACTIVE(Var0[iVar87 /*5*/][iVar86]))
					{
						STREAMING::_REMOVE_IMAP(Var0[iVar87 /*5*/][iVar86]);
						func_721(Var0[iVar87 /*5*/][iVar86], 0, iParam1);
					}
				}
			}
			iVar86++;
		}
		iVar87++;
	}
}

void func_482(int iParam0, float fParam1, int iParam2, bool bParam3)
{
	int iVar0;
	struct<16> Var1;
	int iVar50;
	int iVar51;
	int iVar52;

	if (fParam1 < 30f)
	{
		iVar0 = 0;
	}
	else if (fParam1 < 75f)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 2;
	}
	Var1 = 3;
	Var1.f_1 = 3;
	Var1.f_1.f_1 = 4;
	Var1.f_1.f_1.f_5 = 4;
	Var1.f_1.f_1.f_5.f_5 = 4;
	Var1.f_1.f_16 = 3;
	Var1.f_1.f_16.f_1 = 4;
	Var1.f_1.f_16.f_1.f_5 = 4;
	Var1.f_1.f_16.f_1.f_5.f_5 = 4;
	Var1.f_1.f_16.f_16 = 3;
	Var1.f_1.f_16.f_16.f_1 = 4;
	Var1.f_1.f_16.f_16.f_1.f_5 = 4;
	Var1.f_1.f_16.f_16.f_1.f_5.f_5 = 4;
	(*(*Var1[0 /*16*/])[0 /*5*/])[0] = func_712();
	(*(*Var1[1 /*16*/])[0 /*5*/])[0] = func_712();
	(*(*Var1[2 /*16*/])[0 /*5*/])[0] = func_712();
	(*(*Var1[0 /*16*/])[0 /*5*/])[1] = 626928579;
	(*(*Var1[1 /*16*/])[0 /*5*/])[1] = 626928579;
	(*(*Var1[2 /*16*/])[0 /*5*/])[1] = 626928579;
	(*(*Var1[0 /*16*/])[0 /*5*/])[2] = 313722477;
	(*(*Var1[1 /*16*/])[0 /*5*/])[2] = 313722477;
	(*(*Var1[2 /*16*/])[0 /*5*/])[2] = 313722477;
	(*(*Var1[0 /*16*/])[0 /*5*/])[3] = 976082270;
	(*(*Var1[1 /*16*/])[0 /*5*/])[3] = 976082270;
	(*(*Var1[2 /*16*/])[0 /*5*/])[3] = 976082270;
	if (bParam3)
	{
		(*(*Var1[0 /*16*/])[1 /*5*/])[0] = func_712();
		(*(*Var1[1 /*16*/])[1 /*5*/])[0] = func_712();
		(*(*Var1[2 /*16*/])[1 /*5*/])[0] = func_712();
		(*(*Var1[0 /*16*/])[1 /*5*/])[1] = -1370620659;
		(*(*Var1[1 /*16*/])[1 /*5*/])[1] = -1370620659;
		(*(*Var1[2 /*16*/])[1 /*5*/])[1] = -1370620659;
		(*(*Var1[0 /*16*/])[1 /*5*/])[2] = -624219879;
		(*(*Var1[1 /*16*/])[1 /*5*/])[2] = -624219879;
		(*(*Var1[2 /*16*/])[1 /*5*/])[2] = -624219879;
		(*(*Var1[0 /*16*/])[1 /*5*/])[3] = 715730031;
		(*(*Var1[1 /*16*/])[1 /*5*/])[3] = 715730031;
		(*(*Var1[2 /*16*/])[1 /*5*/])[3] = 715730031;
		func_724(1);
	}
	else
	{
		(*(*Var1[0 /*16*/])[1 /*5*/])[0] = func_712();
		(*(*Var1[1 /*16*/])[1 /*5*/])[0] = func_712();
		(*(*Var1[2 /*16*/])[1 /*5*/])[0] = func_712();
		(*(*Var1[0 /*16*/])[1 /*5*/])[1] = 5585502;
		(*(*Var1[1 /*16*/])[1 /*5*/])[1] = 5585502;
		(*(*Var1[2 /*16*/])[1 /*5*/])[1] = 5585502;
		(*(*Var1[0 /*16*/])[1 /*5*/])[2] = -1362716862;
		(*(*Var1[1 /*16*/])[1 /*5*/])[2] = -1362716862;
		(*(*Var1[2 /*16*/])[1 /*5*/])[2] = -1362716862;
		(*(*Var1[0 /*16*/])[1 /*5*/])[3] = 482931525;
		(*(*Var1[1 /*16*/])[1 /*5*/])[3] = 482931525;
		(*(*Var1[2 /*16*/])[1 /*5*/])[3] = 482931525;
		func_724(0);
	}
	(*(*Var1[0 /*16*/])[2 /*5*/])[0] = -462274808;
	(*(*Var1[1 /*16*/])[2 /*5*/])[0] = -462274808;
	(*(*Var1[2 /*16*/])[2 /*5*/])[0] = -462274808;
	(*(*Var1[0 /*16*/])[2 /*5*/])[1] = -1906732332;
	(*(*Var1[1 /*16*/])[2 /*5*/])[1] = -1906732332;
	(*(*Var1[2 /*16*/])[2 /*5*/])[1] = -1906732332;
	(*(*Var1[0 /*16*/])[2 /*5*/])[2] = -526829;
	(*(*Var1[1 /*16*/])[2 /*5*/])[2] = -526829;
	(*(*Var1[2 /*16*/])[2 /*5*/])[2] = -526829;
	(*(*Var1[0 /*16*/])[2 /*5*/])[3] = -1754422016;
	(*(*Var1[1 /*16*/])[2 /*5*/])[3] = -1754422016;
	(*(*Var1[2 /*16*/])[2 /*5*/])[3] = -1754422016;
	iVar52 = 0;
	while (iVar52 < 3)
	{
		iVar51 = 0;
		while (iVar51 < 3)
		{
			iVar50 = 0;
			while (iVar50 < 4)
			{
				if (*Var1[iVar52 /*16*/])[iVar51 /*5*/][iVar50] != func_712()
				{
					if (((iVar52 == iVar0 && iVar50 + 1 == func_722(iVar51)) && iParam0 == 2) && iParam2)
					{
						if (!STREAMING::_IS_IMAP_ACTIVE((*Var1[iVar52 /*16*/])[iVar51 /*5*/][iVar50]))
						{
							STREAMING::_REQUEST_IMAP((*Var1[iVar52 /*16*/])[iVar51 /*5*/][iVar50]);
						}
					}
					else if (((*Var1[iVar0 /*16*/])[iVar51 /*5*/][(func_722(iVar51) - 1)] != (*Var1[iVar52 /*16*/])[iVar51 /*5*/][iVar50] || iParam0 != 2) || iParam2 == 0)
					{
						if (STREAMING::_IS_IMAP_ACTIVE((*Var1[iVar52 /*16*/])[iVar51 /*5*/][iVar50]))
						{
							STREAMING::_REMOVE_IMAP((*Var1[iVar52 /*16*/])[iVar51 /*5*/][iVar50]);
						}
					}
				}
				iVar50++;
			}
			iVar51++;
		}
		iVar52++;
	}
}

void func_483(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar86;
	int iVar87;

	Var0 = 17;
	Var0.f_1 = 4;
	Var0.f_1.f_5 = 4;
	Var0.f_1.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	(*Var0[10 /*5*/])[0] = 2036492390;
	(*Var0[10 /*5*/])[1] = 2036492390;
	(*Var0[10 /*5*/])[2] = 2036492390;
	(*Var0[10 /*5*/])[3] = 1865439665;
	(*Var0[11 /*5*/])[0] = func_712();
	(*Var0[11 /*5*/])[1] = func_712();
	(*Var0[11 /*5*/])[2] = func_712();
	(*Var0[11 /*5*/])[3] = func_712();
	(*Var0[12 /*5*/])[0] = func_712();
	(*Var0[12 /*5*/])[1] = func_712();
	(*Var0[12 /*5*/])[2] = func_712();
	(*Var0[12 /*5*/])[3] = func_712();
	(*Var0[13 /*5*/])[0] = func_712();
	(*Var0[13 /*5*/])[1] = func_712();
	(*Var0[13 /*5*/])[2] = func_712();
	(*Var0[13 /*5*/])[3] = func_712();
	(*Var0[9 /*5*/])[0] = func_712();
	(*Var0[9 /*5*/])[1] = func_712();
	(*Var0[9 /*5*/])[2] = func_712();
	(*Var0[9 /*5*/])[3] = func_712();
	(*Var0[8 /*5*/])[0] = func_712();
	(*Var0[8 /*5*/])[1] = func_712();
	(*Var0[8 /*5*/])[2] = func_712();
	(*Var0[8 /*5*/])[3] = func_712();
	(*Var0[7 /*5*/])[0] = -621187540;
	(*Var0[7 /*5*/])[1] = -621187540;
	(*Var0[7 /*5*/])[2] = -621187540;
	(*Var0[7 /*5*/])[3] = 1079213989;
	(*Var0[6 /*5*/])[0] = -882188392;
	(*Var0[6 /*5*/])[1] = -882188392;
	(*Var0[6 /*5*/])[2] = -882188392;
	(*Var0[6 /*5*/])[3] = 964593693;
	(*Var0[5 /*5*/])[0] = func_712();
	(*Var0[5 /*5*/])[1] = func_712();
	(*Var0[5 /*5*/])[2] = func_712();
	(*Var0[5 /*5*/])[3] = func_712();
	(*Var0[4 /*5*/])[0] = -997495998;
	(*Var0[4 /*5*/])[1] = -997495998;
	(*Var0[4 /*5*/])[2] = -997495998;
	(*Var0[4 /*5*/])[3] = -2147051362;
	(*Var0[3 /*5*/])[0] = -1115840558;
	(*Var0[3 /*5*/])[1] = -1115840558;
	(*Var0[3 /*5*/])[2] = 1674493966;
	(*Var0[3 /*5*/])[3] = 1674493966;
	(*Var0[0 /*5*/])[0] = func_712();
	(*Var0[0 /*5*/])[1] = -1618574684;
	(*Var0[0 /*5*/])[2] = -1618574684;
	(*Var0[0 /*5*/])[3] = -1618574684;
	(*Var0[1 /*5*/])[0] = func_712();
	(*Var0[1 /*5*/])[1] = func_712();
	(*Var0[1 /*5*/])[2] = func_712();
	(*Var0[1 /*5*/])[3] = func_712();
	(*Var0[2 /*5*/])[0] = func_712();
	(*Var0[2 /*5*/])[1] = func_712();
	(*Var0[2 /*5*/])[2] = func_712();
	(*Var0[2 /*5*/])[3] = func_712();
	iVar87 = 0;
	while (iVar87 < 17)
	{
		iVar86 = 0;
		while (iVar86 < 4)
		{
			if (Var0[iVar87 /*5*/][iVar86] != func_712())
			{
				if ((iVar86 + 1 == func_720(iVar87, 1) && iParam0 == 3) && iParam2)
				{
					if (!STREAMING::_IS_IMAP_ACTIVE(Var0[iVar87 /*5*/][iVar86]))
					{
						STREAMING::_REQUEST_IMAP(Var0[iVar87 /*5*/][iVar86]);
						func_721(Var0[iVar87 /*5*/][iVar86], 1, iParam1);
					}
				}
				else if ((Var0[iVar87 /*5*/][(func_720(iVar87, 1) - 1)] != Var0[iVar87 /*5*/][iVar86] || iParam0 != 3) || iParam2 == 0)
				{
					if (STREAMING::_IS_IMAP_ACTIVE(Var0[iVar87 /*5*/][iVar86]))
					{
						STREAMING::_REMOVE_IMAP(Var0[iVar87 /*5*/][iVar86]);
						func_721(Var0[iVar87 /*5*/][iVar86], 0, iParam1);
					}
				}
			}
			iVar86++;
		}
		iVar87++;
	}
}

void func_484(int iParam0, float fParam1, int iParam2)
{
	int iVar0;
	struct<16> Var1;
	int iVar50;
	int iVar51;
	int iVar52;
	char* sVar53[4];
	int iVar58;

	if (fParam1 < 30f)
	{
		iVar0 = 0;
	}
	else if (fParam1 < 75f)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 2;
	}
	Var1 = 3;
	Var1.f_1 = 3;
	Var1.f_1.f_1 = 4;
	Var1.f_1.f_1.f_5 = 4;
	Var1.f_1.f_1.f_5.f_5 = 4;
	Var1.f_1.f_16 = 3;
	Var1.f_1.f_16.f_1 = 4;
	Var1.f_1.f_16.f_1.f_5 = 4;
	Var1.f_1.f_16.f_1.f_5.f_5 = 4;
	Var1.f_1.f_16.f_16 = 3;
	Var1.f_1.f_16.f_16.f_1 = 4;
	Var1.f_1.f_16.f_16.f_1.f_5 = 4;
	Var1.f_1.f_16.f_16.f_1.f_5.f_5 = 4;
	(*(*Var1[0 /*16*/])[0 /*5*/])[0] = func_712();
	(*(*Var1[1 /*16*/])[0 /*5*/])[0] = func_712();
	(*(*Var1[2 /*16*/])[0 /*5*/])[0] = func_712();
	(*(*Var1[0 /*16*/])[0 /*5*/])[1] = func_712();
	(*(*Var1[1 /*16*/])[0 /*5*/])[1] = func_712();
	(*(*Var1[2 /*16*/])[0 /*5*/])[1] = func_712();
	(*(*Var1[0 /*16*/])[0 /*5*/])[2] = func_712();
	(*(*Var1[1 /*16*/])[0 /*5*/])[2] = func_712();
	(*(*Var1[2 /*16*/])[0 /*5*/])[2] = func_712();
	(*(*Var1[0 /*16*/])[0 /*5*/])[3] = func_712();
	(*(*Var1[1 /*16*/])[0 /*5*/])[3] = func_712();
	(*(*Var1[2 /*16*/])[0 /*5*/])[3] = func_712();
	(*(*Var1[0 /*16*/])[1 /*5*/])[0] = func_712();
	(*(*Var1[1 /*16*/])[1 /*5*/])[0] = func_712();
	(*(*Var1[2 /*16*/])[1 /*5*/])[0] = func_712();
	(*(*Var1[0 /*16*/])[1 /*5*/])[1] = 1155877447;
	(*(*Var1[1 /*16*/])[1 /*5*/])[1] = 1155877447;
	(*(*Var1[2 /*16*/])[1 /*5*/])[1] = 1155877447;
	(*(*Var1[0 /*16*/])[1 /*5*/])[2] = 928165666;
	(*(*Var1[1 /*16*/])[1 /*5*/])[2] = 928165666;
	(*(*Var1[2 /*16*/])[1 /*5*/])[2] = 928165666;
	(*(*Var1[0 /*16*/])[1 /*5*/])[3] = 2048341166;
	(*(*Var1[1 /*16*/])[1 /*5*/])[3] = 2048341166;
	(*(*Var1[2 /*16*/])[1 /*5*/])[3] = 2048341166;
	(*(*Var1[0 /*16*/])[2 /*5*/])[0] = -414377604;
	(*(*Var1[1 /*16*/])[2 /*5*/])[0] = -414377604;
	(*(*Var1[2 /*16*/])[2 /*5*/])[0] = -414377604;
	(*(*Var1[0 /*16*/])[2 /*5*/])[1] = -109593135;
	(*(*Var1[1 /*16*/])[2 /*5*/])[1] = -109593135;
	(*(*Var1[2 /*16*/])[2 /*5*/])[1] = -109593135;
	(*(*Var1[0 /*16*/])[2 /*5*/])[2] = 990134505;
	(*(*Var1[1 /*16*/])[2 /*5*/])[2] = 990134505;
	(*(*Var1[2 /*16*/])[2 /*5*/])[2] = 990134505;
	(*(*Var1[0 /*16*/])[2 /*5*/])[3] = 1279910772;
	(*(*Var1[1 /*16*/])[2 /*5*/])[3] = 1279910772;
	(*(*Var1[2 /*16*/])[2 /*5*/])[3] = 1279910772;
	iVar52 = 0;
	while (iVar52 < 3)
	{
		iVar51 = 0;
		while (iVar51 < 3)
		{
			iVar50 = 0;
			while (iVar50 < 4)
			{
				if (*Var1[iVar52 /*16*/])[iVar51 /*5*/][iVar50] != func_712()
				{
					if (((iVar52 == iVar0 && iVar50 + 1 == func_722(iVar51)) && iParam0 == 3) && iParam2)
					{
						if (!STREAMING::_IS_IMAP_ACTIVE((*Var1[iVar52 /*16*/])[iVar51 /*5*/][iVar50]))
						{
							STREAMING::_REQUEST_IMAP((*Var1[iVar52 /*16*/])[iVar51 /*5*/][iVar50]);
						}
					}
					else if (((*Var1[iVar0 /*16*/])[iVar51 /*5*/][(func_722(iVar51) - 1)] != (*Var1[iVar52 /*16*/])[iVar51 /*5*/][iVar50] || iParam0 != 3) || iParam2 == 0)
					{
						if (STREAMING::_IS_IMAP_ACTIVE((*Var1[iVar52 /*16*/])[iVar51 /*5*/][iVar50]))
						{
							STREAMING::_REMOVE_IMAP((*Var1[iVar52 /*16*/])[iVar51 /*5*/][iVar50]);
						}
					}
				}
				iVar50++;
			}
			iVar51++;
		}
		iVar52++;
	}
	sVar53[0] = "";
	sVar53[1] = "shb_p_ammo01";
	sVar53[2] = "shb_p_ammo02";
	sVar53[3] = "shb_p_ammo03";
	iVar58 = INTERIOR::GET_INTERIOR_AT_COORDS(1906.472f, -1862.567f, 46.362f);
	iVar50 = 0;
	while (iVar50 < 4)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(sVar53[iVar50])) == 0)
		{
			if (((iVar50 + 1 == func_722(0) && iParam0 == 3) && iParam2) && Global_1357549->f_1495 & 8 != 0 == 0)
			{
				if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar58, &(sVar53[iVar50])) == 0)
				{
					INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar58, &(sVar53[iVar50]), 0);
				}
			}
			else if (((iParam0 != 3 || iVar50 + 1 != func_722(0)) || iParam2 == 0) || Global_1357549->f_1495 & 8 != 0)
			{
				if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar58, &(sVar53[iVar50])))
				{
					INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar58, &(sVar53[iVar50]), 1);
				}
			}
		}
		iVar50++;
	}
}

void func_485(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar6;
	int iVar7;
	float fVar8;

	fVar8 = 25f;
	switch (iParam0)
	{
		case 2:
			iVar0 = joaat("pirogue");
			iVar1 = 4;
			vVar3 = { 623.54f, -1251.056f, 40.2502f };
			fVar6 = 137.4389f;
			iVar2 = 8194;
			break;
		case 3:
			iVar0 = joaat("pirogue");
			iVar1 = 4;
			vVar3 = { 1908.325f, -1816.88f, 40.456f };
			fVar6 = 251.3719f;
			iVar2 = 8194;
			break;
		default:
			iVar0 = 0;
			iVar1 = 100;
			vVar3 = { 0f, 0f, 0f };
			fVar6 = 0f;
			iVar2 = 0;
			break;
	}
	iVar7 = VEHICLE::GET_CLOSEST_VEHICLE(vVar3, fVar8, iVar0, iVar2);
	if (ENTITY::DOES_ENTITY_EXIST(iVar7))
	{
		Global_1357549->f_1674 = iVar7;
		ENTITY::SET_ENTITY_COORDS(iVar7, vVar3, true, false, true, true);
		ENTITY::SET_ENTITY_HEADING(iVar7, fVar6);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1357549->f_1674, true, true);
	}
	if (iParam1 >= iVar1 && iVar0 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1357549->f_1674) == 0 && ENTITY::DOES_ENTITY_EXIST(iVar7) == 0)
		{
			STREAMING::REQUEST_MODEL(iVar0, false);
			if (STREAMING::HAS_MODEL_LOADED(iVar0))
			{
				Global_1357549->f_1674 = VEHICLE::CREATE_VEHICLE(iVar0, vVar3, fVar6, true, true, false, false);
			}
		}
		else
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		}
	}
	else
	{
		func_725();
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1357549->f_1674))
	{
		if (iParam0 == 3 || iParam0 == 2)
		{
			VEHICLE::SET_BOAT_ANCHOR(Global_1357549->f_1674, true);
			VEHICLE::_0x6B53F4B811E583D2(Global_1357549->f_1674, 1);
		}
		if (ENTITY::GET_ENTITY_MODEL(Global_1357549->f_1674) != iVar0)
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_1357549->f_1674));
		}
	}
}

void func_486(int iParam0, var uParam1)
{
	func_726(iParam0);
}

char* func_487(int iParam0)
{
	if (iParam0 == 2)
	{
		return "dewclm";
	}
	if (iParam0 == 4)
	{
		return "gua";
	}
	return func_727(&(((*Global_1888801)[func_246(iParam0) /*35*/])->f_22));
}

char* func_488(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "setup";
		case 1:
			return "running";
		case 2:
			if (func_469(268435456))
			{
				if (PATHFIND::_0x5AC0944C156E5F44("bvh_nav_camp_teardown"))
				{
					PATHFIND::_0x527B97C203BB8606("bvh_nav_camp_teardown");
				}
				return "finale1";
			}
			else
			{
				if (PATHFIND::_0x5AC0944C156E5F44("bvh_nav_camp_finale1"))
				{
					PATHFIND::_0x527B97C203BB8606("bvh_nav_camp_finale1");
				}
				return "teardown";
			}
			break;
	}
	return "";
}

void func_489(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	char cVar0[64];
	struct<8> Var8;

	MemCopy(&cVar0, {((*Global_1888801)[iParam0 /*35*/])->f_22}, 8);
	StringConCat(&cVar0, "_", 64);
	StringConCat(&cVar0, func_728(iParam1), 64);
	StringConCat(&cVar0, "_", 64);
	StringConCat(&cVar0, func_729(iParam2), 64);
	Var8 = { cVar0 };
	StringConCat(&Var8, "_setup", 64);
	if (TASK::DOES_SCENARIO_GROUP_EXIST(&Var8))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED(&Var8, bParam4);
	}
	else if (bParam4)
	{
		bParam3 = true;
	}
	if (TASK::DOES_SCENARIO_GROUP_EXIST(&cVar0))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED(&cVar0, bParam3);
	}
}

bool func_490(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_491(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_12105[iParam0 /*7*/])->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_730(iParam0);
	}
	else
	{
		func_731(iParam0, iParam1);
	}
	func_732();
}

void func_492(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_2 = iParam1;
}

void func_493(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_3 = iParam1;
}

void func_494(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_4 = iParam1;
}

void func_495(int iParam0, var uParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12105[iParam0 /*7*/] = uParam1;
		return;
	}
	Global_1058888->f_498[iParam0 /*2*/] = uParam1;
}

void func_496(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_12105[iParam0 /*7*/])->f_5 = iParam1;
		return;
	}
	(Global_1058888->f_498[iParam0 /*2*/])->f_1 = iParam1;
}

int func_497(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_498(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 153)
	{
		if ((Global_1914319->f_15936[iVar0 /*6*/])->f_5)
		{
			(Global_1914319->f_15936[iVar0 /*6*/])->f_5 = 0;
		}
		func_733(Global_1914319->f_15936[iVar0 /*6*/], bParam0);
		iVar0++;
	}
}

void func_499(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_733(Global_1934051->f_23[iVar0], bParam0);
		iVar0++;
	}
}

void func_500(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 33)
	{
		func_733(Global_1899778->f_34[iVar0], bParam0);
		(*Global_1899778)[iVar0] = 0;
		iVar0++;
	}
}

void func_501(bool bParam0)
{
	func_733(Global_1956612, bParam0);
}

void func_502(bool bParam0)
{
	func_733(&(Global_1415412->f_3), bParam0);
}

void func_503(bool bParam0)
{
	if (func_734(Global_1934051->f_33))
	{
		func_735(Global_1934051->f_33, 7148155);
	}
	func_733(&(Global_1934051->f_33), bParam0);
}

void func_504(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		iVar1 = func_737(func_736(iVar0));
		if (iVar1 != 0)
		{
			func_735(Global_1934051[iVar0 /*2*/], iVar1);
		}
		if (((*Global_1934051)[iVar0 /*2*/])->f_1)
		{
			((*Global_1934051)[iVar0 /*2*/])->f_1 = 0;
		}
		func_733((*Global_1934051)[iVar0 /*2*/], bParam0);
		iVar0++;
	}
}

void func_505(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_36307)
	{
		func_738(iVar0, -1);
		func_739(iVar0, 0);
		func_740(iVar0, 0);
		if (MAP::DOES_BLIP_EXIST(&(Global_36307[iVar0])))
		{
			if (bParam0)
			{
				MAP::SET_RADAR_ZOOM(&(Global_36307[iVar0]));
			}
			MAP::REMOVE_BLIP(Global_36307[iVar0]);
		}
		iVar0++;
	}
}

int func_506(int iParam0)
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
		case 29:
			return -170458336;
		case 30:
			return 1285083821;
		case 31:
			return -1840907462;
		case 32:
			return 756710130;
		case 33:
			return 388370024;
		case 34:
			return 1092296123;
		case 35:
			return 467491346;
		case 36:
			return -1391584612;
		case 37:
			return -152111346;
		case 38:
			return 1447551317;
		case 39:
			return 153136092;
		case 40:
			return 1304405732;
		case 41:
			return 1074984055;
		case 50:
			return 1087476368;
		case 51:
			return -1768057340;
		case 42:
			return 1218874593;
		case 52:
			return -1438443836;
		case 43:
			return -2036340415;
		case 44:
			return 803939643;
		case 53:
			return -632496195;
		case 45:
			return -965943619;
		case 46:
			return 283532073;
		case 47:
			return -69067491;
		case 48:
			return -1864895118;
		case 54:
			return -1929806571;
		case 55:
			return -698525417;
		case 56:
			return -1149739894;
		case 49:
			return 380507325;
		case 57:
			return 407796241;
		case 58:
			return -152267914;
		case 59:
			return -1675443320;
		case 60:
			return 1940341639;
		case 61:
			return 1846596114;
		case 62:
			return 907708501;
		case 64:
			return 1825644981;
		case 65:
			return 2065937607;
		case 66:
			return -211317417;
		case 67:
			return 1801307910;
		case 68:
			return -4118897;
		case 69:
			return 1853610692;
		case 70:
			return -1574644415;
		case 71:
			return 2133055515;
		case 72:
			return -1413401932;
		case 73:
			return 801090761;
		case 74:
			return 2131218644;
		case 75:
			return 1708823660;
		case 76:
			return 7976942;
		case 77:
			return 2111120505;
		case 78:
			return 176893118;
		case 79:
			return 1179148161;
		case 63:
			return 602306665;
		case 80:
			return 547412068;
		case 81:
			return -1539748801;
		case 82:
			return -1605119912;
		case 83:
			return -884464063;
		case 84:
			return -1420970720;
		case 85:
			return 1017024547;
		case 86:
			return -1204497306;
		case 87:
			return -1621069480;
		case 88:
			return -458604261;
		case 89:
			return -923391614;
		case 90:
			return -689247089;
		case 91:
			return 44049568;
		case 92:
			return 1350259552;
		case 93:
			return -61661574;
		case 94:
			return -725338054;
		case 95:
			return -770123507;
		case 96:
			return 1322486734;
		case 97:
			return -460939553;
		case 98:
			return -1451863552;
		case 99:
			return 173833068;
		case 100:
			return -1681004136;
		case 101:
			return 713715980;
		case 102:
			return -31204969;
		case 103:
			return -1720064790;
		case 104:
			return -532172775;
		case 105:
			return -739067737;
		case 106:
			return -1203133835;
		case 107:
			return -1947411598;
		case 109:
			return -1298718762;
		case 110:
			return -595083064;
		case 111:
			return 884833917;
		case 112:
			return 2141950651;
		case 108:
			return -1049753365;
		case 113:
			return -1437650729;
		case 126:
			return 672925454;
		case 127:
			return 846062774;
		case 120:
			return 1369756178;
		case 121:
			return -736172423;
		case 122:
			return 1597070291;
		case 124:
			return -159501564;
		case 123:
			return -1438809608;
		case 125:
			return -102682392;
		case 114:
			return -81068979;
		case 115:
			return 227618407;
		case 116:
			return 2106043438;
		case 129:
			return -1868356491;
		case 117:
			return -1380256064;
		case 118:
			return -2118469183;
		case 119:
			return -558997834;
		case 128:
			return 658339366;
		default:
			break;
	}
	return 0;
}

int func_507(int iParam0)
{
	switch (iParam0)
	{
		case -209881503:
			return 0;
		case -838679573:
			return 1;
		case -1051370648:
			return 2;
		case -772521944:
			return 3;
		case 409697667:
			return 4;
		case -1416788599:
			return 5;
		case 1039465541:
			return 6;
		case -901470223:
			return 7;
		case -614884275:
			return 8;
		case -538310789:
			return 9;
		default:
			break;
	}
	return 0;
}

Vector3 func_508(int iParam0, bool bParam1)
{
	vector3 vVar0;
	var uVar3;

	vVar0 = { 0f, 0f, 0f };
	if (!func_207(iParam0))
	{
		return vVar0;
	}
	if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1888801)[iParam0 /*35*/])->f_3))
	{
		vVar0 = { VOLUME::_0xF70F00013A62F866(((*Global_1888801)[iParam0 /*35*/])->f_3) };
		if (bParam1)
		{
			if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar3, 0))
			{
				vVar0.f_2 = uVar3;
			}
		}
	}
	return vVar0;
}

int func_509(int iParam0)
{
	if ((iParam0 == 22 || iParam0 == 37) && !func_342())
	{
		return 1;
	}
	if (iParam0 == 61)
	{
		return 1;
	}
	return 0;
}

void func_510(int iParam0, int iParam1)
{
	Global_40.f_297[iParam0] = iParam1;
}

void func_511(int iParam0, int iParam1)
{
	Global_40.f_297[iParam0 + 30] = iParam1;
}

int func_512(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_741(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

void func_513(int* iParam0)
{
	MISC::_COPY_MEMORY(iParam0, &(Global_1879534->f_7301), 243);
}

float func_514(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

bool func_515(int iParam0)
{
	return (Global_1392040 && iParam0) != 0;
}

void func_516(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

var func_517(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var1;

	Var1 = { func_742(iParam0, iParam1) };
	STATS::STAT_ID_GET_INT(&Var1, &uVar0);
	return uVar0;
}

float func_518(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

var func_519(int iParam0)
{
	var uVar0;
	struct<2> Var1;

	Var1 = { func_528(iParam0) };
	STATS::STAT_ID_GET_INT(&Var1, &uVar0);
	return uVar0;
}

int func_520()
{
	int iVar0;

	if (func_318(Global_40.f_8863.f_154, 1))
	{
		iVar0++;
	}
	if (func_318(Global_40.f_8863.f_154, 2))
	{
		iVar0++;
	}
	if (func_318(Global_40.f_8863.f_154, 4))
	{
		iVar0++;
	}
	if (func_318(Global_40.f_8863.f_154, 8))
	{
		iVar0++;
	}
	if (func_318(Global_40.f_8863.f_154, 16))
	{
		iVar0++;
	}
	if (func_318(Global_40.f_8863.f_154, 32))
	{
		iVar0++;
	}
	if (func_318(Global_40.f_8863.f_154, 64))
	{
		iVar0++;
	}
	if (func_318(Global_40.f_8863.f_154, 128))
	{
		iVar0++;
	}
	if (func_318(Global_40.f_8863.f_154, 256))
	{
		iVar0++;
	}
	return iVar0;
}

float func_521(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

int func_522()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 <= (20 - 1))
	{
		iVar2 = func_743(iVar0);
		if (func_318(func_744(), iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_523(int iParam0)
{
	if (func_27() != -1)
	{
		return 0;
	}
	if (!func_174(iParam0))
	{
		return 0;
	}
	return func_172(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
}

int func_524(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_525(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	ENTITY::IS_ENTITY_DEAD(Global_35);
	*uParam0 = ATTRIBUTE::GET_ATTRIBUTE_RANK(Global_35, 0);
	*uParam0 = (*uParam0 + ATTRIBUTE::GET_ATTRIBUTE_RANK(Global_35, 1));
	*uParam0 = (*uParam0 + ATTRIBUTE::GET_ATTRIBUTE_RANK(Global_35, 2));
	*uParam1 = ATTRIBUTE::GET_MAX_ATTRIBUTE_RANK(Global_35, 0);
	*uParam1 = (*uParam1 + ATTRIBUTE::GET_MAX_ATTRIBUTE_RANK(Global_35, 1));
	*uParam1 = (*uParam1 + ATTRIBUTE::GET_MAX_ATTRIBUTE_RANK(Global_35, 2));
	*uParam1 += 6;
	iVar0 = func_745(-1845241476, 0, 0);
	iVar1 = func_745(1654063339, 0, 0);
	iVar2 = func_745(1623931083, 0, 0);
	*uParam0 = (*uParam0 + ((iVar0 + iVar1) + iVar2));
}

var func_526(int iParam0)
{
	var uVar0;
	struct<2> Var1;

	Var1 = { func_746(iParam0) };
	STATS::STAT_ID_GET_INT(&Var1, &uVar0);
	return uVar0;
}

int func_527()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar2 = func_747(iVar0);
		if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(iVar2) >= STATS::CHAL_GET_MAX_RANKS(iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

struct<2> func_528(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

var func_529(var uParam0, var uParam1)
{
	var uVar0;

	STATS::STAT_ID_GET_FLOAT(&uParam0, &uVar0);
	return uVar0;
}

void func_530(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<6> Var2;

	if (&Global_1898329 <= 0)
	{
		return;
	}
	if (!func_46(iParam0))
	{
		return;
	}
	if (func_708(iParam0))
	{
		func_748(iParam0, 0, 2);
	}
	iVar0 = func_749(iParam0);
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = iVar0;
	if (&Global_1898329 > 1)
	{
		(*Global_1898330)[iVar1] = Global_1898330[(&Global_1898329 - 1)];
		*((*Global_1898346)[iVar1 /*6*/]) = { *((*Global_1898346)[(&Global_1898329 - 1) /*6*/]) };
		(*Global_1898330)[(&Global_1898329 - 1)] = -1;
		*((*Global_1898346)[(&Global_1898329 - 1) /*6*/]) = { Var2 };
	}
	else
	{
		(*Global_1898330)[iVar1] = -1;
		*((*Global_1898346)[iVar1 /*6*/]) = { Var2 };
	}
	Global_1898329 = (&Global_1898329 - 1);
	if (&Global_1898329 < 0)
	{
		Global_1898329 = 0;
	}
}

void func_531(int iParam0, int iParam1)
{
	if (((*Global_1898346)[iParam0 /*6*/])->f_2 == 0 || iParam1)
	{
		((*Global_1898346)[iParam0 /*6*/])->f_2 = func_248(Global_1898330[iParam0]);
		func_750(((*Global_1898346)[iParam0 /*6*/])->f_2, &(((*Global_1898346)[iParam0 /*6*/])->f_4), &(((*Global_1898346)[iParam0 /*6*/])->f_5), &(((*Global_1898346)[iParam0 /*6*/])->f_3));
	}
}

int func_532(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_5;
	}
	return (Global_1058888->f_498[iParam0 /*2*/])->f_1;
}

bool func_533(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_559(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return MISC::IS_BIT_SET(&(Global_1934765->f_53[iVar1]), iVar2);
	}
	iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (iVar3 == 255)
	{
		return MISC::IS_BIT_SET(&(Global_1934765->f_53[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(((*Global_1055058)[iVar3 /*116*/])->f_72.f_28[iVar1]), iVar2);
}

bool func_534(int iParam0)
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return false;
	}
	return STREAMING::_0x73B40D97D7BAAD77(iParam0, Global_36);
}

void func_535(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_559(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		MISC::CLEAR_BIT(Global_1934765->f_53[iVar1], iVar2);
	}
	else
	{
		iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (iVar3 == 255)
		{
			Global_1058888->f_40567.f_46 = 1;
			MISC::CLEAR_BIT(Global_1058888->f_40567.f_28[iVar1], iVar2);
		}
		else
		{
			MISC::CLEAR_BIT(((*Global_1055058)[iVar3 /*116*/])->f_72.f_28[iVar1], iVar2);
		}
	}
}

bool func_536(int iParam0, vector3 vParam1)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return false;
	}
	return VOLUME::_0xF256A75210C5C0EB(iParam0, vParam1);
}

int func_537(int iParam0, float fParam1)
{
	vector3 vVar0;
	var uVar3;

	if (!STREAMING::_IS_IMAP_ACTIVE(iParam0))
	{
		return 0;
	}
	if (!STREAMING::_0x9C77964B0E07B633(iParam0, &vVar0, &uVar3))
	{
		return 0;
	}
	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), vVar0) <= fParam1)
	{
		return 1;
	}
	return 0;
}

int func_538(int iParam0)
{
	return iParam0;
}

int func_539(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;

	bVar0 = func_27() != -1;
	switch (iParam0)
	{
		case 76:
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
		case 105:
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
			*iParam2 = 324;
			if (bVar0)
			{
				*iParam2 = 142;
			}
			break;
		case 61:
			*iParam1 = 380;
			*iParam2 = 381;
			if (bVar0)
			{
				*iParam2 = 380;
			}
			break;
		case 78:
			*iParam1 = 382;
			*iParam2 = 431;
			if (bVar0)
			{
				*iParam2 = 384;
			}
			break;
		case 92:
			*iParam1 = 443;
			*iParam2 = 471;
			if (bVar0)
			{
				*iParam2 = 443;
			}
			break;
		case 26:
			*iParam1 = 472;
			if (bParam3)
			{
				*iParam2 = 500;
			}
			else
			{
				*iParam2 = 502;
			}
			if (bVar0)
			{
				*iParam2 = 472;
			}
			break;
		case 38:
			*iParam1 = 508;
			*iParam2 = 553;
			if (bVar0)
			{
				*iParam2 = 509;
			}
			break;
		case 68:
			*iParam1 = 554;
			*iParam2 = 565;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 65:
			*iParam1 = 566;
			*iParam2 = 588;
			if (bVar0)
			{
				*iParam2 = 566;
			}
			break;
		case 69:
			*iParam1 = 589;
			if (bParam3)
			{
				*iParam2 = 598;
			}
			else
			{
				*iParam2 = 612;
			}
			if (bVar0)
			{
				*iParam2 = 590;
			}
			break;
		case 75:
			*iParam1 = 503;
			*iParam2 = 506;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 93:
			*iParam1 = 613;
			*iParam2 = 625;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 95:
			*iParam1 = 626;
			*iParam2 = 641;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 97:
			*iParam1 = 642;
			*iParam2 = 643;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 3:
			*iParam1 = 644;
			*iParam2 = 656;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 6:
			*iParam1 = 657;
			*iParam2 = 658;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 32:
			*iParam1 = 325;
			*iParam2 = 344;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 82:
			*iParam1 = 659;
			if (bParam3)
			{
				*iParam2 = 673;
			}
			else
			{
				*iParam2 = 690;
			}
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 35:
			*iParam1 = 691;
			*iParam2 = 700;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 56:
			*iParam1 = 701;
			*iParam2 = 708;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 22:
			if (bParam4)
			{
				*iParam1 = 715;
			}
			else
			{
				*iParam1 = 715;
			}
			*iParam2 = 723;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 110:
			*iParam1 = 724;
			*iParam2 = 730;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 64:
			*iParam1 = 736;
			*iParam2 = 740;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 66:
			*iParam1 = 745;
			*iParam2 = 750;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 70:
			*iParam1 = 751;
			*iParam2 = 754;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 77:
			*iParam1 = 731;
			*iParam2 = 732;
			break;
		case 96:
			*iParam1 = 741;
			*iParam2 = 743;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 29:
			*iParam1 = 744;
			*iParam2 = 744;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 100:
			*iParam1 = 755;
			*iParam2 = 763;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 102:
			*iParam1 = 764;
			*iParam2 = 767;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 72:
			*iParam1 = 733;
			*iParam2 = 735;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 124:
			*iParam1 = 791;
			*iParam2 = 793;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 86:
			*iParam1 = 768;
			*iParam2 = 772;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 126:
			*iParam1 = 773;
			*iParam2 = 779;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 120:
			*iParam1 = 432;
			*iParam2 = 442;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 115:
			*iParam1 = 345;
			*iParam2 = 375;
			if (bVar0)
			{
				*iParam2 = 375;
			}
			break;
		case 125:
			*iParam1 = 376;
			*iParam2 = 379;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 116:
			*iParam1 = 783;
			*iParam2 = 790;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 21:
			*iParam1 = 780;
			*iParam2 = 782;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 42:
			*iParam1 = 794;
			*iParam2 = 798;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 89:
			*iParam1 = 799;
			*iParam2 = 800;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 23:
			*iParam1 = 801;
			*iParam2 = 801;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 28:
			*iParam1 = 802;
			*iParam2 = 803;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 101:
			*iParam1 = 804;
			*iParam2 = 806;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 117:
			*iParam1 = 507;
			*iParam2 = 507;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 11:
			*iParam1 = 807;
			*iParam2 = 833;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 128:
			*iParam1 = 834;
			*iParam2 = 857;
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

void func_540(int iParam0)
{
	if (func_27() != -1)
	{
		return;
	}
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(852936895, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(-2043636604, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(-1543778692, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(-1472222264, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(-736367663, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(19124873, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(-53891762, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(1479005205, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(928225741, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(-1945348028, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(-1086821801, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(212415041, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(-16935190, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(-16946315, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(584808788, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(1443812975, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(1908738551, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(-35439674, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(-1792832235, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(1317192638, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(1787522659, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(-1701317228, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(-934649940, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(785713260, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(-2099882877, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(1659593009, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(156473432, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(1198640232, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(2141998185, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(2001815635, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(1943609607, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(1330931991, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(135431031, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(1016865322, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(-1456173883, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(344419080, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(1057927283, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(1711355775, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(49689699, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(260410249, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(-1720522403, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(-1128080855, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(-1496211826, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(-359518005, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(2016269890, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(1690461416, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(41051113, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(-849398716, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(1677108849, iParam0);
}

int func_541(int iParam0)
{
	bool bVar0;

	bVar0 = func_345(45);
	switch (iParam0)
	{
		case 0:
			if (bVar0)
			{
				return -512973841;
			}
			else
			{
				return 470037909;
			}
			break;
		case 1:
			return -904280534;
		case 3:
			return -1438750434;
		case 6:
			return -41414424;
		case 7:
			return 214708080;
		case 5:
			if (bVar0)
			{
				return -241284918;
			}
			else
			{
				return 218350989;
			}
			break;
		case 8:
			return -1083616881;
		case 9:
			return -1643549114;
		case 10:
			return -1865722934;
		case 11:
			return 1936859429;
		case 12:
			return -272646696;
		case 2:
		case 4:
			if (bVar0)
			{
				return -634462673;
			}
			else
			{
				return 1824681511;
			}
			break;
	}
	return 0;
}

void func_542(int iParam0, int iParam1)
{
	if (!func_751(iParam0))
	{
		return;
	}
	if (((*Global_1425371)[iParam0 /*373*/])->f_8 != iParam1)
	{
		((*Global_1425371)[iParam0 /*373*/])->f_8 = iParam1;
		func_752(iParam0, 32);
	}
}

int func_543(int iParam0)
{
	switch (iParam0)
	{
		case 8:
		case 9:
		case 10:
		case 12:
			return -1360990987;
		case 11:
			return 162953686;
		default:
			break;
	}
	return func_541(iParam0);
}

int func_544()
{
	if (func_27() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == joaat("player_zero"))
	{
		return 1;
	}
	return 0;
}

void func_545(int iParam0)
{
	MAP::_0x563FCB6620523917(func_506(iParam0), -514130076);
}

void func_546(int iParam0)
{
	if (MAP::_0xE38450DBCBC70E3D(func_506(iParam0), -514130076))
	{
		MAP::_0x6786D7AFAC3162B3(func_506(iParam0));
	}
}

void func_547(int iParam0)
{
	int iVar0;

	if (func_275(iParam0) == 57)
	{
		MAP::_0x563FCB6620523917(-1145496915, -1482012664);
		MAP::_0x563FCB6620523917(-1043953850, -1482012664);
		MAP::_0x563FCB6620523917(-1783502982, -1482012664);
	}
	else
	{
		iVar0 = -1482012664;
		if (((func_753(iParam0) == 4 || func_753(iParam0) == 12) || func_234(func_753(iParam0)) == 4) || (func_591(func_753(iParam0), 8) && ((func_753(iParam0) == 2 || func_753(iParam0) == 0) || func_753(iParam0) == 10)))
		{
			iVar0 = -1305340593;
		}
		MAP::_0x563FCB6620523917(iParam0, iVar0);
	}
}

int func_548(int iParam0)
{
	if (!func_207(iParam0))
	{
		return 0;
	}
	return func_210(iParam0, 67108864);
}

void func_549(int iParam0)
{
	char cVar0[64];
	char* sVar8;

	StringCopy(&cVar0, func_276(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_754(cVar0);
	MAP::_0x563FCB6620523917(MISC::GET_HASH_KEY(sVar8), -1482012664);
}

void func_550()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (func_310(664571177))
	{
		func_337(941);
		func_337(943);
		func_337(944);
		func_337(942);
		func_320(941, 32);
		func_321(941, 0);
		func_320(943, 32);
		func_321(943, 0);
		func_320(944, 32);
		func_321(944, 0);
		func_320(942, 32);
		func_321(942, 0);
	}
	else if (!func_72(0, 0, 1))
	{
		func_319(941, 32);
		func_319(943, 32);
		func_319(944, 32);
		func_338(941);
		func_338(943);
		func_338(944);
	}
	if (func_70(52))
	{
		if (func_539(56, &iVar1, &iVar2, 0, 0))
		{
			iVar0 = 0;
			while (iVar0 < (iVar2 - iVar1) + 1)
			{
				func_320((iVar1 + iVar0), 32);
				func_337((iVar1 + iVar0));
				iVar0++;
			}
		}
	}
	else if (func_539(56, &iVar4, &iVar5, 0, 0))
	{
		iVar3 = 0;
		while (iVar3 < (iVar5 - iVar4) + 1)
		{
			func_319((iVar4 + iVar3), 32);
			func_338((iVar4 + iVar3));
			iVar3++;
		}
	}
	if (func_310(1850082804))
	{
		if (func_310(-538889627))
		{
			if (!func_336(709, 32))
			{
				func_320(709, 32);
				func_337(709);
			}
		}
	}
	else if (func_336(709, 32))
	{
		func_319(709, 32);
		if (func_310(-538889627))
		{
			func_338(709);
		}
	}
	if (func_310(-664512648))
	{
		if (!func_336(111, 32))
		{
			func_320(111, 32);
			func_337(111);
		}
		if (!func_336(112, 32))
		{
			func_320(112, 32);
			func_337(112);
		}
		if (!func_336(113, 32))
		{
			func_320(113, 32);
			func_337(113);
		}
		if (!func_336(114, 32))
		{
			func_320(114, 32);
			func_337(114);
		}
	}
	else
	{
		if (func_336(111, 32))
		{
			func_319(111, 32);
			func_338(111);
		}
		if (func_336(112, 32))
		{
			func_320(112, 32);
			func_338(112);
		}
		if (func_336(113, 32))
		{
			func_320(113, 32);
			func_338(113);
		}
		if (func_336(114, 32))
		{
			func_320(114, 32);
			func_338(114);
		}
	}
}

void func_551()
{
	if (((!func_310(168171957) && !func_310(1193080109)) && !func_310(-491981251)) && !func_310(-639037538))
	{
		func_314(100);
	}
	if (!func_310(168171957))
	{
		func_314(101);
	}
	if (((!func_310(1193080109) && !func_310(-491981251)) && !func_310(-639037538)) && !func_310(-618620429))
	{
		func_314(102);
	}
	if (!func_310(1193080109))
	{
		func_314(103);
	}
	if (!func_310(1193080109))
	{
		func_314(104);
	}
	if (!func_310(1193080109))
	{
		func_314(105);
	}
	if (!func_310(1193080109) && !func_310(-491981251))
	{
		func_314(107);
	}
	if (!func_310(-639037538))
	{
		func_314(106);
	}
	if ((!func_310(-491981251) && !func_310(-618620429)) && !func_310(-639037538))
	{
		func_314(109);
	}
	if (!func_310(-491981251) && !func_310(-639037538))
	{
		func_314(110);
	}
	if (((!func_310(168171957) && !func_310(1193080109)) && !func_310(-491981251)) && !func_310(-639037538))
	{
		func_314(111);
	}
	if (!func_310(-618620429))
	{
		func_314(112);
	}
	if (!func_310(-618620429))
	{
		func_314(113);
	}
	if (!func_310(-618620429))
	{
		func_314(114);
	}
	if (((!func_310(168171957) && !func_310(1193080109)) && !func_310(-491981251)) && !func_310(-639037538))
	{
		func_314(116);
	}
	if ((!func_310(-491981251) && !func_310(-618620429)) && !func_310(-639037538))
	{
		func_314(117);
	}
	if (((!func_310(-491981251) && !func_310(-618620429)) && !func_310(1193080109)) && !func_310(-639037538))
	{
		func_314(118);
	}
	if ((!func_310(704802028) && !func_310(588987611)) && !func_310(2008888900))
	{
		func_313(-722030448);
	}
	if (((!func_310(-491981251) && !func_310(-618620429)) && !func_310(-639037538)) && !func_310(1193080109))
	{
		func_313(-956131204);
		func_313(1353861354);
	}
	if (((((((!func_310(588987611) && !func_310(1649996811)) && !func_310(227918160)) && !func_310(168171957)) && !func_310(1193080109)) && !func_310(-491981251)) && !func_310(-639037538)) && !func_310(2008888900))
	{
		func_313(578474998);
	}
	if ((((!func_310(168171957) && !func_310(1193080109)) && !func_310(-491981251)) && !func_310(-639037538)) && !func_310(-618620429))
	{
		func_313(-1667461262);
	}
	if ((((!func_310(168171957) && !func_310(1193080109)) && !func_310(-491981251)) && !func_310(-639037538)) && !func_310(-618620429))
	{
		func_313(411742897);
		func_313(1467774743);
		func_313(1344772301);
		func_313(43335376);
		func_313(-284612948);
	}
	if (((!func_310(1193080109) && !func_310(-491981251)) && !func_310(-639037538)) && !func_310(-618620429))
	{
		func_313(-692583342);
	}
	if (((!func_310(1193080109) && !func_310(-491981251)) && !func_310(-639037538)) && !func_310(-618620429))
	{
		func_313(-918785150);
	}
	if (((!func_310(-491981251) && !func_310(-618620429)) && !func_310(-491981251)) && !func_310(-639037538))
	{
		func_313(1236917971);
	}
	if ((!func_310(-491981251) && !func_310(-639037538)) && !func_310(-618620429))
	{
		func_313(1532009326);
		func_313(-803019223);
		GRAPHICS::_0xDD0BC0EDCB2162F6(-803019223);
		func_313(-1860722801);
		func_313(637627640);
	}
	if (!func_310(-618620429))
	{
		func_313(1965249616);
		func_313(-2021605623);
		func_313(1649902358);
		func_313(1169279648);
		func_313(-218940381);
	}
	if (!func_310(704802028))
	{
		func_313(-904669171);
		func_313(774601424);
		func_313(-584332967);
		func_313(-1615103170);
		func_313(1256771838);
		func_313(-1765152778);
		func_313(-2072231077);
		func_313(19217583);
	}
	if ((!func_310(-491981251) && !func_310(-639037538)) && !func_310(-618620429))
	{
		func_313(349494711);
	}
	if (!func_310(1193080109))
	{
		func_313(1205945639);
	}
	func_313(1532774697);
	if (!func_310(1193080109))
	{
		func_313(431365499);
		func_313(276582710);
		func_313(1191890045);
		func_313(1864768904);
	}
	if (!func_310(-491981251) && !func_310(-639037538))
	{
		func_313(-2090209059);
		func_313(1977031606);
		func_313(1929454697);
		func_313(938290967);
	}
	func_313(-2000794023);
	func_313(-531137142);
	if (!func_310(588987611) && !func_310(2008888900))
	{
		func_313(1757739778);
	}
	func_313(5422464);
	if (!func_310(704802028) && !func_310(588987611))
	{
		func_313(-1012618146);
	}
	if (!func_310(1649996811) && !func_310(2008888900))
	{
		func_313(2111816145);
	}
	if (!func_310(227918160) && !func_310(168171957))
	{
		func_313(197447134);
	}
	if (!func_310(168171957))
	{
		func_313(-974480336);
	}
	func_313(33260939);
	func_313(-270212770);
	func_313(862349416);
	func_313(2006257967);
	func_313(-2008632686);
	if (func_27() == -1)
	{
		if ((((!func_310(704802028) && !func_310(588987611)) && !func_310(1649996811)) && !func_310(227918160)) && !func_310(2008888900))
		{
			func_313(-1253110600);
			func_313(-1402083909);
			func_313(1970695826);
			func_313(-382865315);
		}
	}
	if (!func_310(168171957))
	{
		func_313(-1325016116);
	}
	func_328("nav_mesh_beech_shack");
	func_328("nav_mesh_beech_shack_with_fire");
	func_328("nav_mesh_beech_camp_with_rubble");
	func_328("nav_mesh_beech_house_finished");
	func_328("nav_mesh_beech_barn_finished");
	func_328("nav_mesh_beech_gazebo_finished");
	func_328("nav_mesh_beech_house_decor");
	func_328("nav_mesh_beech_camp_with_supplies");
}

bool func_552(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_1934765->f_21[iVar1]), iVar2);
}

int func_553(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_755(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	func_756(iParam0, 1);
	func_757(iVar0);
	if (bParam1)
	{
		func_758(Global_1899778, iVar0);
	}
	func_759(iVar0);
	return 1;
}

int func_554(int iParam0, bool bParam1)
{
	if (func_760(iParam0))
	{
		return 1;
	}
	if (!bParam1)
	{
		if (func_761(5000))
		{
			return 1;
		}
	}
	switch (func_762(0))
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

int func_555(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_708(((*Global_1835011)[iParam0 /*74*/])->f_1);
}

int func_556(int iParam0)
{
	int iVar0;

	if (!func_560(iParam0))
	{
		return 0;
	}
	iVar0 = func_749(func_316(iParam0));
	if (!func_763(iVar0))
	{
		return 0;
	}
	return func_764(iVar0, 4);
}

int func_557(int iParam0, var uParam1, int iParam2)
{
	*uParam1 = iParam0;
	switch (iParam0)
	{
		case 0:
			uParam1->f_1 = 0;
			uParam1->f_2 = 38;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { -813.2971f, -1324.285f, 46.89f };
			uParam1->f_8 = 0.29f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 1:
			uParam1->f_1 = 0;
			uParam1->f_2 = 105;
			uParam1->f_3 = 0;
			uParam1->f_4 = 400f;
			uParam1->f_5 = { 1339.562f, -1372.173f, 83.2967f };
			uParam1->f_8 = 80f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 2:
			uParam1->f_1 = 0;
			uParam1->f_2 = 92;
			uParam1->f_3 = 0;
			uParam1->f_4 = 300f;
			uParam1->f_5 = { 2938.582f, 520.6577f, 44.3412f };
			uParam1->f_8 = 126.9f;
			uParam1->f_9 = 2f;
			return 1;
		case 3:
			uParam1->f_1 = 5;
			uParam1->f_2 = 37;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			if (Global_1899848->f_3 < 0 || Global_1899848->f_3 >= 6)
			{
				Global_1899848->f_3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
			}
			if (Global_1899848->f_3 == 0 || Global_1899848->f_3 == 1)
			{
				uParam1->f_5 = { -1604f, -1419.09f, 80.92f };
			}
			else if (Global_1899848->f_3 == 2 || Global_1899848->f_3 == 3)
			{
				uParam1->f_5 = { -1604f, -1419.09f, 80.92f };
			}
			else
			{
				uParam1->f_5 = { -1603.35f, -1409f, 80.92f };
			}
			uParam1->f_8 = 0f;
			uParam1->f_9 = 1f;
			return 1;
		case 4:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 5;
				uParam1->f_2 = 71;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { -63.25864f, -404.9262f, 69.9287f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 1f;
				return 1;
			}
			return 0;
		case 5:
			uParam1->f_1 = 5;
			uParam1->f_2 = 22;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -2552.997f, 397.415f, 147.1629f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 1f;
			return 1;
		case 6:
			uParam1->f_1 = 1;
			uParam1->f_2 = 38;
			uParam1->f_3 = 0;
			uParam1->f_4 = 200f;
			uParam1->f_5 = { -936.9756f, -1390.084f, 49.5777f };
			uParam1->f_8 = -174.39f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 7:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = -1;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { 0f, 0f, 0f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 8:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = 98;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { 665.5017f, -1243.862f, 43.1442f };
				uParam1->f_8 = 134.74f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 9:
			uParam1->f_1 = 1;
			uParam1->f_2 = 69;
			uParam1->f_3 = 0;
			uParam1->f_4 = 100f;
			uParam1->f_5 = { 1522.005f, 431.2095f, 89.679f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 10:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = 71;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { -118.0872f, -27.6725f, 94.805f };
				uParam1->f_8 = -103.99f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 11:
			uParam1->f_1 = 1;
			uParam1->f_2 = 5;
			uParam1->f_3 = 0;
			uParam1->f_4 = 150f;
			uParam1->f_5 = { 2515.659f, -1245.743f, 49.5757f };
			uParam1->f_8 = -45f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 12:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = 9;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { 1881.669f, -1874.046f, 41.7769f };
				uParam1->f_8 = 77.47f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 13:
			uParam1->f_1 = 6;
			uParam1->f_2 = 22;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -2594.942f, 410.063f, 148.7582f };
			uParam1->f_8 = 88.6423f;
			uParam1->f_9 = 2f;
			return 1;
		case 14:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = -1;
				uParam1->f_3 = 0;
				uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325->f_24);
				uParam1->f_5 = { 0f, 0f, 0f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 15:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = 98;
				uParam1->f_3 = 0;
				uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325->f_24);
				uParam1->f_5 = { 665.5322f, -1243.902f, 43.94809f };
				uParam1->f_8 = 225.55f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 16:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = 71;
				uParam1->f_3 = 0;
				uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325->f_24);
				uParam1->f_5 = { -118.119f, -27.6134f, 95.57291f };
				uParam1->f_8 = 166.84f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 17:
			uParam1->f_1 = 3;
			uParam1->f_2 = 26;
			uParam1->f_3 = 0;
			uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325->f_24);
			uParam1->f_5 = { -1826.215f, -433.9676f, 159.7386f };
			uParam1->f_8 = 157.4f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 18:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = 9;
				uParam1->f_3 = 0;
				uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325->f_24);
				uParam1->f_5 = { 1881.669f, -1874.046f, 42.58081f };
				uParam1->f_8 = 167.47f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 19:
			uParam1->f_1 = 3;
			uParam1->f_2 = 76;
			uParam1->f_3 = 0;
			uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325->f_24);
			uParam1->f_5 = { -243.7256f, 771.2707f, 117.8849f };
			uParam1->f_8 = -69.92f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 20:
			uParam1->f_1 = 3;
			uParam1->f_2 = 92;
			uParam1->f_3 = 0;
			uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325->f_24);
			uParam1->f_5 = { 2946.444f, 500.1154f, 45.53999f };
			uParam1->f_8 = -84.13f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 21:
			uParam1->f_1 = 4;
			uParam1->f_2 = 37;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -1603.485f, -1414.838f, 81.1f };
			uParam1->f_8 = -14.4f;
			uParam1->f_9 = 1.5f;
			return 1;
		case 22:
			uParam1->f_1 = 4;
			uParam1->f_2 = 22;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -2514.944f, 432.25f, 147f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 1.5f;
			return 1;
		case 23:
			uParam1->f_1 = 2;
			uParam1->f_2 = 38;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { -813.2148f, -1316.547f, 42.6787f };
			uParam1->f_8 = 60f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 24:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 2;
				uParam1->f_2 = -1;
				uParam1->f_3 = 0;
				uParam1->f_4 = 100f;
				uParam1->f_5 = { 0f, 0f, 0f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 25:
			return 0;
		case 26:
			uParam1->f_1 = 2;
			uParam1->f_2 = 71;
			uParam1->f_3 = 0;
			uParam1->f_4 = 100f;
			uParam1->f_5 = { -138.7686f, -27.4923f, 95.0878f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 27:
			uParam1->f_1 = 2;
			uParam1->f_2 = 5;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { 2630.74f, -1226.25f, 52.3794f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 28:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 2;
				uParam1->f_2 = 8;
				uParam1->f_3 = 0;
				uParam1->f_4 = 1000f;
				uParam1->f_5 = { 3288.448f, -1318.004f, 41.7734f };
				uParam1->f_8 = 60f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 29:
			return 0;
		case 30:
			uParam1->f_1 = 2;
			uParam1->f_2 = 75;
			uParam1->f_3 = 0;
			uParam1->f_4 = 250f;
			uParam1->f_5 = { -327.6681f, -357.796f, 87.055f };
			uParam1->f_8 = -63f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 31:
			uParam1->f_1 = 2;
			uParam1->f_2 = 115;
			uParam1->f_3 = 0;
			uParam1->f_4 = 200f;
			uParam1->f_5 = { -5510.395f, -2913.764f, 0.6353f };
			uParam1->f_8 = 90f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 32:
			uParam1->f_1 = 2;
			uParam1->f_2 = 76;
			uParam1->f_3 = 0;
			uParam1->f_4 = 250f;
			uParam1->f_5 = { -304.5352f, 801.1352f, 117.9785f };
			uParam1->f_8 = 135f;
			uParam1->f_9 = 2.5f;
			return 1;
		default:
			break;
	}
	return 0;
}

int func_558(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if (func_27() != -1)
	{
		return -1;
	}
	if (Global_1899528->f_211)
	{
		return -1;
	}
	iVar2 = -1;
	if (uParam0->f_2 == -1)
	{
		return -1;
	}
	if (uParam0->f_2 != func_225())
	{
		return -1;
	}
	if (!func_765(uParam0->f_1))
	{
		return -1;
	}
	if (func_285(uParam0->f_2))
	{
		return -1;
	}
	iVar2 = func_755(*uParam0);
	if (iVar2 == -1)
	{
		if (!func_766(&iVar2))
		{
			return -1;
		}
	}
	func_767(*uParam0, iVar2);
	bVar1 = func_768(uParam0->f_1, 131072);
	func_769(uParam0->f_1);
	iVar3 = func_770(uParam0->f_1, *uParam0);
	(*Global_1392915)[iVar2 /*12*/] = *uParam0;
	((*Global_1392915)[iVar2 /*12*/])->f_1 = uParam0->f_1;
	((*Global_1392915)[iVar2 /*12*/])->f_2 = uParam0->f_2;
	((*Global_1392915)[iVar2 /*12*/])->f_3 = uParam0->f_3;
	((*Global_1392915)[iVar2 /*12*/])->f_4 = iVar3;
	((*Global_1392915)[iVar2 /*12*/])->f_5 = uParam0->f_9;
	((*Global_1392915)[iVar2 /*12*/])->f_6 = { uParam0->f_5 };
	((*Global_1392915)[iVar2 /*12*/])->f_9 = uParam0->f_8;
	((*Global_1392915)[iVar2 /*12*/])->f_10 = BUILTIN::FLOOR(uParam0->f_4);
	((*Global_1392915)[iVar2 /*12*/])->f_11 = iVar2;
	Global_1392915->f_121[iVar2 /*20*/] = 0;
	(Global_1392915->f_121[iVar2 /*20*/])->f_2 = bParam1;
	(Global_1392915->f_121[iVar2 /*20*/])->f_17 = iParam2;
	(Global_1392915->f_121[iVar2 /*20*/])->f_1 = 0;
	(Global_1392915->f_121[iVar2 /*20*/])->f_6 = 0;
	(Global_1392915->f_121[iVar2 /*20*/])->f_12 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_5);
	(Global_1392915->f_121[iVar2 /*20*/])->f_16 = 0;
	if ((Global_1392915->f_121[iVar2 /*20*/])->f_12 != 0)
	{
		(Global_1392915->f_121[iVar2 /*20*/])->f_9 = { INTERIOR::_0x2C9746D0CA15BE1C((Global_1392915->f_121[iVar2 /*20*/])->f_12) };
	}
	else
	{
		(Global_1392915->f_121[iVar2 /*20*/])->f_9 = { 0f, 0f, 0f };
	}
	if (bParam1)
	{
		func_771(uParam0->f_1, 65536);
		if ((uParam0->f_1 == 1 || uParam0->f_1 == 2) || uParam0->f_1 == 0)
		{
			func_771(uParam0->f_1, 2097152);
		}
	}
	if (bVar1)
	{
		func_771(uParam0->f_1, 131072);
	}
	if (func_772(iVar3) || (!func_708(iVar3) && func_76(0) != iVar3))
	{
		iVar0 = func_749(iVar3);
		if (iVar0 == -1)
		{
			func_773(iVar3);
		}
	}
	return iVar2;
}

int func_559(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2106445152:
			return 292;
		case -2106214197:
			return 104;
		case -2101264851:
			return 195;
		case -2073072369:
			return 59;
		case -2069570138:
			return 25;
		case -2066272360:
			return 357;
		case -2058120606:
			return 197;
		case -2038424081:
			return 49;
		case -2034257789:
			return 92;
		case -2022369555:
			return 265;
		case -2021582629:
			return 112;
		case -2020023971:
			return 278;
		case -1957523409:
			return 208;
		case -1952856164:
			return 165;
		case -1949204933:
			return 276;
		case -1925798111:
			return 41;
		case -1861414976:
			return 353;
		case -1852605133:
			return 10;
		case -1847672446:
			return 376;
		case -1840704908:
			return 289;
		case -1838712533:
			return 26;
		case -1838352012:
			return 57;
		case -1835851517:
			return 56;
		case -1831552326:
			return 123;
		case -1825294305:
			return 266;
		case -1824738758:
			return 277;
		case -1818850842:
			return 253;
		case -1799960545:
			return 257;
		case -1764522338:
			return 372;
		case -1763509974:
			return 141;
		case -1741667789:
			return 64;
		case -1738165526:
			return 3;
		case -1718674470:
			return 23;
		case -1717960576:
			return 61;
		case -1711895055:
			return 13;
		case -1706438978:
			return 233;
		case -1700452710:
			return 53;
		case -1674179981:
			return 55;
		case -1666278201:
			return 33;
		case -1612662716:
			return 201;
		case -1610966108:
			return 322;
		case -1582926490:
			return 146;
		case -1579419919:
			return 147;
		case -1558439474:
			return 301;
		case -1556423728:
			return 218;
		case -1532284567:
			return 116;
		case -1530132748:
			return 311;
		case -1524512402:
			return 209;
		case -1523910291:
			return 155;
		case -1455998786:
			return 338;
		case -1447311849:
			return 215;
		case -1436021162:
			return 172;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case -1419919497:
			return 22;
		case -1414537028:
			return 73;
		case -1405998267:
			return 105;
		case -1344601768:
			return 314;
		case -1340339190:
			return 331;
		case -1329135070:
			return 140;
		case -1318987693:
			return 222;
		case -1311865656:
			return 37;
		case -1296807958:
			return 320;
		case -1283202000:
			return 321;
		case -1282804314:
			return 270;
		case -1278074582:
			return 171;
		case -1271608261:
			return 98;
		case -1257057567:
			return 21;
		case -1241340344:
			return 300;
		case -1236261996:
			return 235;
		case -1232809834:
			return 113;
		case -1230112817:
			return 170;
		case -1223121209:
			return 126;
		case -1215445344:
			return 131;
		case -1209597203:
			return 333;
		case -1206122982:
			return 156;
		case -1187950766:
			return 45;
		case -1179948750:
			return 136;
		case -1170496998:
			return 46;
		case -1164215952:
			return 234;
		case -1151084372:
			return 124;
		case -1145519186:
			return 100;
		case -1124061431:
			return 242;
		case -1123615607:
			return 29;
		case -1080627546:
			return 378;
		case -1077783786:
			return 194;
		case -1063147448:
			return 151;
		case -1062490780:
			return 79;
		case -1060078174:
			return 239;
		case -1056767524:
			return 176;
		case -1053549743:
			return 58;
		case -1029225159:
			return 106;
		case -1014145132:
			return 288;
		case -978957786:
			return 251;
		case -959357075:
			return 36;
		case -950054349:
			return 152;
		case -939420910:
			return 44;
		case -939114198:
			return 221;
		case -919512195:
			return 40;
		case -911126844:
			return 336;
		case -897750037:
			return 334;
		case -895073533:
			return 356;
		case -879507474:
			return 236;
		case -868076593:
			return 84;
		case -857964358:
			return 83;
		case -853383233:
			return 65;
		case -851626677:
			return 339;
		case -828139293:
			return 260;
		case -811637947:
			return 245;
		case -796902762:
			return 88;
		case -792853067:
			return 254;
		case -789397228:
			return 262;
		case -785605431:
			return 250;
		case -781631220:
			return 345;
		case -764163380:
			return 228;
		case -748969569:
			return 78;
		case -741351766:
			return 60;
		case -736853952:
			return 366;
		case -734416508:
			return 340;
		case -699277634:
			return 4;
		case -693828600:
			return 323;
		case -683458244:
			return 80;
		case -666014935:
			return 157;
		case -664512648:
			return 67;
		case -664252410:
			return 191;
		case -644722288:
			return 261;
		case -640663440:
			return 214;
		case -639037538:
			return 185;
		case -628542779:
			return 71;
		case -622554983:
			return 370;
		case -618620429:
			return 187;
		case -545450213:
			return 377;
		case -538889627:
			return 175;
		case -538880323:
			return 174;
		case -534215902:
			return 130;
		case -524787708:
			return 352;
		case -524145696:
			return 117;
		case -523522517:
			return 364;
		case -515561750:
			return 238;
		case -503955743:
			return 249;
		case -502473159:
			return 343;
		case -502324015:
			return 8;
		case -491981251:
			return 186;
		case -468693731:
			return 111;
		case -464836488:
			return 268;
		case -460024530:
			return 316;
		case -434590080:
			return 225;
		case -404698347:
			return 205;
		case -397760715:
			return 143;
		case -389056691:
			return 272;
		case -360036154:
			return 368;
		case -356975260:
			return 103;
		case -355531636:
			return 337;
		case -351362068:
			return 220;
		case -350863510:
			return 162;
		case -349064220:
			return 362;
		case -334729750:
			return 69;
		case -333135263:
			return 361;
		case -330120947:
			return 360;
		case -306246697:
			return 375;
		case -299522880:
			return 213;
		case -270094635:
			return 267;
		case -261141318:
			return 30;
		case -259123672:
			return 244;
		case -254562075:
			return 132;
		case -238080464:
			return 121;
		case -233743613:
			return 273;
		case -223469678:
			return 204;
		case -220282381:
			return 139;
		case -191424539:
			return 149;
		case -182889087:
			return 177;
		case -154581735:
			return 309;
		case -150493654:
			return 97;
		case -144653976:
			return 219;
		case -129643890:
			return 11;
		case -108780030:
			return 317;
		case -108307814:
			return 28;
		case -99303535:
			return 167;
		case -86199844:
			return 145;
		case -80522843:
			return 154;
		case -76237062:
			return 373;
		case -75024673:
			return 258;
		case -63926460:
			return 89;
		case -61411516:
			return 325;
		case -35658630:
			return 24;
		case -25901845:
			return 290;
		case -9438024:
			return 129;
		case -1:
			return 0;
		case 0:
			return 1;
		case 2639906:
			return 153;
		case 8924991:
			return 297;
		case 26054262:
			return 248;
		case 26245360:
			return 237;
		case 38162571:
			return 74;
		case 52706132:
			return 243;
		case 54073871:
			return 76;
		case 74872959:
			return 348;
		case 93964309:
			return 358;
		case 94263042:
			return 291;
		case 106479759:
			return 101;
		case 141950038:
			return 114;
		case 153152452:
			return 86;
		case 168171957:
			return 183;
		case 171107021:
			return 381;
		case 171499483:
			return 283;
		case 187862543:
			return 16;
		case 192515737:
			return 14;
		case 198200492:
			return 241;
		case 210001842:
			return 62;
		case 224551212:
			return 142;
		case 227918160:
			return 182;
		case 229371495:
			return 344;
		case 235928616:
			return 286;
		case 249726958:
			return 164;
		case 269047710:
			return 54;
		case 273461605:
			return 81;
		case 280705402:
			return 95;
		case 282809459:
			return 119;
		case 299694527:
			return 275;
		case 300221584:
			return 138;
		case 302205488:
			return 216;
		case 311708813:
			return 198;
		case 320943355:
			return 133;
		case 330026330:
			return 66;
		case 345808947:
			return 287;
		case 356365161:
			return 47;
		case 371850993:
			return 281;
		case 373691918:
			return 188;
		case 374115931:
			return 90;
		case 405586984:
			return 34;
		case 407136781:
			return 173;
		case 409602249:
			return 293;
		case 417081698:
			return 17;
		case 417525590:
			return 303;
		case 420709909:
			return 42;
		case 426191476:
			return 15;
		case 434558613:
			return 199;
		case 439465264:
			return 108;
		case 440043364:
			return 31;
		case 442317566:
			return 302;
		case 449774763:
			return 227;
		case 459290420:
			return 52;
		case 469053995:
			return 231;
		case 473295046:
			return 2;
		case 476714362:
			return 232;
		case 478884033:
			return 148;
		case 479419429:
			return 305;
		case 509781469:
			return 350;
		case 514932331:
			return 246;
		case 522677506:
			return 279;
		case 526003171:
			return 355;
		case 527226204:
			return 159;
		case 544152906:
			return 115;
		case 559573222:
			return 252;
		case 582380806:
			return 326;
		case 588987611:
			return 179;
		case 618699440:
			return 77;
		case 630808005:
			return 128;
		case 651395116:
			return 294;
		case 657241756:
			return 189;
		case 664571177:
			return 312;
		case 665676602:
			return 296;
		case 682839815:
			return 327;
		case 689024866:
			return 134;
		case 689930684:
			return 207;
		case 704802028:
			return 178;
		case 723021499:
			return 264;
		case 747514327:
			return 354;
		case 753127042:
			return 48;
		case 757752139:
			return 109;
		case 784360470:
			return 330;
		case 791041526:
			return 18;
		case 817925178:
			return 240;
		case 868326136:
			return 285;
		case 885203519:
			return 379;
		case 885378256:
			return 351;
		case 929582877:
			return 335;
		case 931649776:
			return 224;
		case 932909855:
			return 298;
		case 945612176:
			return 247;
		case 965986934:
			return 19;
		case 976539083:
			return 310;
		case 1010885152:
			return 7;
		case 1015669983:
			return 122;
		case 1050128548:
			return 284;
		case 1064154891:
			return 110;
		case 1067254646:
			return 319;
		case 1074873669:
			return 144;
		case 1140218954:
			return 27;
		case 1151197909:
			return 256;
		case 1159471771:
			return 329;
		case 1160698568:
			return 135;
		case 1164928979:
			return 158;
		case 1166612791:
			return 347;
		case 1167397384:
			return 307;
		case 1177464213:
			return 38;
		case 1186594126:
			return 230;
		case 1193080109:
			return 184;
		case 1203043430:
			return 274;
		case 1205826474:
			return 85;
		case 1207048789:
			return 169;
		case 1213993593:
			return 160;
		case 1216784232:
			return 269;
		case 1221801385:
			return 374;
		case 1238086793:
			return 313;
		case 1250636944:
			return 259;
		case 1302228510:
			return 315;
		case 1306158345:
			return 202;
		case 1321892118:
			return 324;
		case 1350371763:
			return 20;
		case 1350391819:
			return 75;
		case 1352699670:
			return 271;
		case 1358491857:
			return 263;
		case 1360745816:
			return 82;
		case 1376646519:
			return 223;
		case 1399676951:
			return 210;
		case 1410198831:
			return 217;
		case 1433244935:
			return 166;
		case 1441416901:
			return 211;
		case 1446719356:
			return 380;
		case 1453909576:
			return 125;
		case 1466547629:
			return 120;
		case 1478132521:
			return 367;
		case 1485195808:
			return 50;
		case 1485494263:
			return 102;
		case 1488286867:
			return 295;
		case 1488453464:
			return 212;
		case 1497516462:
			return 5;
		case 1500064347:
			return 72;
		case 1509509592:
			return 35;
		case 1512816328:
			return 168;
		case 1517904467:
			return 206;
		case 1522511407:
			return 280;
		case 1549124796:
			return 342;
		case 1557082963:
			return 163;
		case 1582370975:
			return 359;
		case 1583012985:
			return 304;
		case 1591451572:
			return 365;
		case 1607768502:
			return 9;
		case 1609506757:
			return 107;
		case 1626481264:
			return 118;
		case 1643531967:
			return 127;
		case 1649996811:
			return 181;
		case 1660024373:
			return 150;
		case 1665756137:
			return 93;
		case 1672143046:
			return 383;
		case 1691618738:
			return 68;
		case 1698972798:
			return 318;
		case 1703398561:
			return 332;
		case 1703426636:
			return 43;
		case 1708045337:
			return 346;
		case 1713221411:
			return 137;
		case 1743048395:
			return 226;
		case 1744443559:
			return 349;
		case 1766284049:
			return 94;
		case 1776302352:
			return 363;
		case 1804403874:
			return 382;
		case 1822001510:
			return 200;
		case 1846061697:
			return 99;
		case 1850082804:
			return 196;
		case 1867912207:
			return 70;
		case 1884271742:
			return 51;
		case 1926308480:
			return 96;
		case 1932172605:
			return 328;
		case 1944170089:
			return 161;
		case 1947931439:
			return 229;
		case 1952610440:
			return 203;
		case 1954026328:
			return 371;
		case 1982676972:
			return 91;
		case 2008888900:
			return 180;
		case 2016141805:
			return 6;
		case 2019386373:
			return 190;
		case 2024121624:
			return 193;
		case 2024383613:
			return 369;
		case 2024769126:
			return 308;
		case 2037589949:
			return 63;
		case 2051822093:
			return 299;
		case 2077022393:
			return 306;
		case 2080210939:
			return 282;
		case 2091701359:
			return 39;
		case 2109952320:
			return 192;
		case 2113625508:
			return 341;
		case 2127577956:
			return 255;
		case 2136753624:
			return 87;
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

bool func_560(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

int func_561(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_3;
	}
	return 0;
}

bool func_562(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

int func_563(int iParam0)
{
	if (!func_562(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/];
}

int func_564(int iParam0)
{
	if (!func_562(iParam0))
	{
		return 0;
	}
	return ((*Global_1895087)[iParam0 /*3*/])->f_1;
}

void func_565(int iParam0)
{
	int iVar0;

	if (!func_562(iParam0))
	{
		return;
	}
	iVar0 = func_774(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
	((*Global_1895087)[iParam0 /*3*/])->f_2 = 0;
}

void func_566(int iParam0, int iParam1)
{
	if (!func_562(iParam0))
	{
		return;
	}
	((*Global_1895087)[iParam0 /*3*/])->f_1 = iParam1;
}

void func_567(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_302(iParam0);
	}
	else
	{
		func_313(iParam0);
	}
}

int func_568(int iParam0, int iParam1, bool bParam2)
{
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0))
	{
		if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::_DOES_THREAD_EXIST(&(Global_1051081->f_15[0]))) && iParam1)
		{
			OBJECT::_0xD99229FE93B46286(iParam0, 1, 1, 0, &(Global_1051081->f_15[0]), 0, 0);
		}
		else
		{
			OBJECT::_0xD99229FE93B46286(iParam0, 1, 0, 0, 0, 0, 0);
		}
	}
	else if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::_DOES_THREAD_EXIST(&(Global_1051081->f_15[0]))) && iParam1)
	{
		if (!OBJECT::_0xB5DED7B65C604FDF(iParam0))
		{
			OBJECT::_0xD99229FE93B46286(iParam0, 1, 1, 0, &(Global_1051081->f_15[0]), 0, 0);
		}
	}
	if (bParam2)
	{
		OBJECT::_0x1F1FABFE9B2A1254(iParam0, 1);
	}
	return iParam0;
}

int func_569(int iParam0)
{
	if (func_775(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return 0;
}

void func_570(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_569(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || iParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, iParam1, iParam3);
	}
}

void func_571(int iParam0, int iParam1)
{
	if (func_569(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 2 || iParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 2);
		}
	}
}

void func_572(int iParam0, int iParam1)
{
	if (func_569(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || iParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
	}
}

void func_573(int iParam0, int iParam1)
{
	if (func_569(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 0 || iParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 0);
		}
	}
}

int func_574()
{
	return 1;
}

bool func_575(int iParam0)
{
	return iParam0 != 0;
}

bool func_576(int iParam0)
{
	int iVar0;

	iVar0 = func_293(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_577(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_578(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_40.f_7857[iVar1]), iVar2);
}

bool func_579(vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, 16384);
}

int func_580(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (!bParam1 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (!VOLUME::_0xF6A8A652A6B186CD(iParam0))
	{
	}
	iVar1 = 0;
	while (iVar1 < &Global_1911670)
	{
		iVar0 = Global_1911670[iVar1];
		if (!VOLUME::_0xF6A8A652A6B186CD(iVar0) || iVar0 == iParam0)
		{
			(*Global_1911670)[iVar1] = iParam0;
			return 1;
		}
		iVar1++;
	}
	return 0;
}

bool func_581(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_582(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

void func_583(var uParam0, var uParam1, var uParam2)
{
	struct<4> Var0;

	Var0.f_1 = uParam2;
	Var0 = uParam0;
	Var0.f_2 = uParam1;
	func_776(Var0);
}

void func_584(var uParam0)
{
	if ((func_369(Global_35, 0) && func_370(*uParam0)) && PED::_0x7C8AA850617651D9(Global_35, *uParam0))
	{
		func_777(*uParam0);
	}
	if ((!func_369(Global_35, 0) || !func_370(*uParam0)) || !PED::_0x7C8AA850617651D9(Global_35, *uParam0))
	{
		func_587(uParam0);
	}
}

bool func_585(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return false;
	}
	return MISC::IS_BIT_SET(&Global_1347701, iParam0);
}

void func_586(int iParam0, bool bParam1)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return;
	}
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(&Global_1347701, iParam0))
		{
			MISC::SET_BIT(Global_1347701, iParam0);
		}
	}
	else if (MISC::IS_BIT_SET(&Global_1347701, iParam0))
	{
		MISC::CLEAR_BIT(Global_1347701, iParam0);
	}
}

void func_587(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
	uParam0->f_2 = 0;
}

int func_588(int iParam0, var uParam1, var uParam2)
{
	bool bVar0;

	bVar0 = func_27() != -1;
	if (bVar0)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 4:
			*uParam1 = 877;
			*uParam2 = 878;
			break;
		case 5:
		case 6:
		case 7:
			*uParam1 = 861;
			*uParam2 = 865;
			break;
		case 9:
			*uParam1 = 866;
			*uParam2 = 867;
			break;
		case 1:
			*uParam1 = 879;
			*uParam2 = 882;
			break;
		case 15:
			*uParam1 = 888;
			*uParam2 = 888;
			break;
		case 10:
			*uParam1 = 902;
			*uParam2 = 903;
			break;
		case 11:
			*uParam1 = 907;
			*uParam2 = 907;
			break;
		case 12:
			*uParam1 = 924;
			*uParam2 = 926;
			break;
		case 0:
			*uParam1 = 927;
			*uParam2 = 927;
			break;
		case 14:
			*uParam1 = 901;
			*uParam2 = 901;
			break;
		case 13:
			*uParam1 = 875;
			*uParam2 = 876;
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

int func_589(int iParam0, bool bParam1)
{
	if (!func_562(iParam0))
	{
		return 0;
	}
	if (!func_336(iParam0, 2))
	{
		return 0;
	}
	if (func_336(iParam0, 32) && !bParam1)
	{
		func_566(iParam0, _NAMESPACE48::_0x4F76E3676583D951(func_563(iParam0)));
		if (func_27() == -1)
		{
			if (func_336(iParam0, 2048))
			{
				_NAMESPACE48::_0x49A8C2CD97815215(func_564(iParam0));
				func_319(iParam0, 2048);
			}
			_NAMESPACE48::_0xFCC6DB8DBE709BC8(func_564(iParam0));
		}
		return 0;
	}
	if (!func_778(iParam0) && func_27() == -1)
	{
		return 0;
	}
	if (_NAMESPACE48::_0x800DF3FC913355F3(func_564(iParam0)))
	{
		func_319(iParam0, 128);
		return 1;
	}
	func_566(iParam0, _NAMESPACE48::_0x4F76E3676583D951(func_563(iParam0)));
	_NAMESPACE48::_0x4F81EAD1DE8FA19B(func_564(iParam0));
	if (func_336(iParam0, 2048))
	{
		_NAMESPACE48::_0x49A8C2CD97815215(func_564(iParam0));
		func_319(iParam0, 2048);
	}
	return 1;
}

void func_590(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return;
	}
	if (!SCRIPTS::DOES_SCRIPT_WITH_NAME_HASH_EXIST(iParam0))
	{
		return;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(iParam0) != 0)
	{
		SCRIPTS::SCRIPT_THREAD_ITERATOR_RESET();
		iVar0 = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
		while (iVar0 != 0)
		{
			if (iParam0 == SCRIPTS::_GET_HASH_OF_THREAD(iVar0))
			{
				if (SCRIPTS::IS_THREAD_ACTIVE(iVar0, false))
				{
					PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(iVar0, iParam1);
				}
			}
			iVar0 = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
		}
	}
}

bool func_591(int iParam0, int iParam1)
{
	if (!func_233(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return (Global_40.f_431[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_42339[iParam0] && iParam1) != 0;
}

void func_592(int iParam0, var uParam1)
{
	if (!func_104(iParam0))
	{
		return;
	}
	Global_1934266->f_27[iParam0] = uParam1;
}

int func_593()
{
	if (Global_16)
	{
		return 0;
	}
	if (!func_779())
	{
		return 0;
	}
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1934266->f_78.f_55))
	{
		return 0;
	}
	if (func_72(-1 ^ 9, 0, 1))
	{
		return 0;
	}
	return 1;
}

char* func_594(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5, var uParam6)
{
	char* sVar0;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1894899->f_162)))
	{
		sVar0 = func_754(Global_1894899->f_162);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && uParam4)
	{
		sVar0 = func_781(func_780(Global_36));
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		if (!func_782(iParam0) || func_345(45))
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

int func_595(int iParam0)
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

char* func_596(int iParam0)
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

float func_597(float fParam0)
{
	return ((fParam0 * 1.8f) + 32f);
}

char* func_598(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_783(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

var func_599(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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

void func_600(int iParam0)
{
	if (!func_104(iParam0))
	{
		return;
	}
	Global_1934266->f_4 = iParam0;
}

void func_601(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_104(iParam0))
	{
		return;
	}
	iVar0 = func_784();
	if (iParam1 > iVar0)
	{
		iParam1 = iVar0;
	}
	PLAYER::_0xEA6DE0CD15AECBE2(iVar0);
	if (iParam0 == func_785())
	{
		LAW::_0x093A9D1F72DF0D19(PLAYER::PLAYER_ID(), iParam1);
	}
	if (Global_1572887->f_12 == -1)
	{
		if (&Global_40.f_358[iParam0 /*12*/] != iParam1)
		{
			func_786(iParam0, iParam1);
			func_787(iParam0);
		}
		Global_40.f_358[iParam0 /*12*/] = iParam1;
		if (!func_450(iParam0, 4))
		{
			if (&Global_40.f_358[iParam0 /*12*/] >= PLAYER::GET_WANTED_LEVEL_THRESHOLD(1))
			{
				func_788(iParam0, 1);
			}
		}
		else if (&Global_40.f_358[iParam0 /*12*/] == 0)
		{
			func_788(iParam0, 0);
		}
		return;
	}
	Global_1058888->f_42266[iParam0 /*12*/] = iParam1;
}

int func_602(int iParam0, var uParam1, var uParam2)
{
	bool bVar0;

	bVar0 = func_27() != -1;
	if (bVar0)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 9:
			*uParam1 = 868;
			*uParam2 = 874;
			break;
		case 16:
			*uParam1 = 893;
			*uParam2 = 900;
			break;
		case 1:
			*uParam1 = 883;
			*uParam2 = 885;
			break;
		case 3:
			*uParam1 = 858;
			*uParam2 = 860;
			break;
		case 15:
			*uParam1 = 889;
			*uParam2 = 892;
			break;
		case 13:
			*uParam1 = 886;
			*uParam2 = 887;
			break;
		case 10:
			*uParam1 = 904;
			*uParam2 = 906;
			break;
		case 11:
			*uParam1 = 908;
			*uParam2 = 923;
			break;
		case 0:
			*uParam1 = 928;
			*uParam2 = 931;
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

int func_603(int iParam0)
{
	switch (iParam0)
	{
		case 709:
		case 710:
		case 711:
		case 713:
			if (((SCRIPTS::_DOES_THREAD_EXIST(((*Global_1835011)[64 /*74*/])->f_7) || SCRIPTS::_DOES_THREAD_EXIST(((*Global_1835011)[67 /*74*/])->f_7)) || SCRIPTS::_DOES_THREAD_EXIST(((*Global_1835011)[65 /*74*/])->f_7)) || SCRIPTS::_DOES_THREAD_EXIST(((*Global_1835011)[66 /*74*/])->f_7))
			{
				return 1;
			}
			return 0;
		default:
			break;
	}
	return 1;
}

void func_604()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (func_789(iVar0))
		{
			(*Global_1898147)[iVar0] = -1;
		}
		iVar0++;
	}
}

void func_605(int iParam0, int iParam1)
{
	if (!func_789(iParam0))
	{
		return;
	}
	if (!func_790(iParam1))
	{
		return;
	}
	(*Global_1898147)[iParam0] = iParam1;
}

int func_606(int iParam0, int iParam1)
{
	int iVar0;

	if (Global_1934266->f_26 != iParam0)
	{
		Global_1934266->f_26 = iParam0;
		iVar0 = iParam1;
		if (!func_104(iParam1))
		{
			iVar0 = func_230(iParam0);
		}
		if (!func_104(iVar0))
		{
			iVar0 = func_234(func_197(Global_36));
		}
		if (!func_104(iVar0))
		{
			return 0;
		}
		LAW::_0x4752F68EB7F2D280(PLAYER::PLAYER_ID(), Global_1934266->f_26, func_699(iVar0));
		return 1;
	}
	return 0;
}

void func_607(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_559(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		MISC::SET_BIT(Global_40.f_283[iVar1], iVar2);
	}
	else
	{
		iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (iVar3 == 255)
		{
			Global_1058888->f_40567.f_46 = 1;
			MISC::SET_BIT(Global_1058888->f_40567.f_14[iVar1], iVar2);
		}
		else
		{
			MISC::SET_BIT(((*Global_1055058)[iVar3 /*116*/])->f_72[iVar1], iVar2);
		}
		MISC::SET_BIT(Global_1058888->f_40567[iVar1], iVar2);
	}
	Global_1934765 = 0;
}

void func_608()
{
	func_331(-939420910);
	func_331(-1187950766);
	func_331(356365161);
	func_331(753127042);
	func_331(-2038424081);
	func_331(1884271742);
	func_331(459290420);
}

void func_609()
{
	func_331(704802028);
	func_331(588987611);
	func_331(2008888900);
	func_331(1649996811);
	func_331(227918160);
	func_331(168171957);
	func_331(1193080109);
	func_331(-491981251);
	func_331(-639037538);
	func_331(-618620429);
}

bool func_610(var uParam0)
{
	return func_791(*uParam0, 1);
}

bool func_611(var uParam0)
{
	return func_791(*uParam0, 2);
}

float func_612()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_613(int iParam0)
{
	return iParam0 > -1;
}

void func_614(int iParam0)
{
	if (iParam0 == 14)
	{
		if (PED::_0xA454D234E45BB6E5(func_402(14), PLAYER::GET_PLAYER_INDEX()))
		{
			Global_1357549->f_1648 = 1;
		}
	}
	if (AUDIO::IS_ANY_SPEECH_PLAYING(func_402(13)) == 0)
	{
		if (Global_1357549->f_1648 && !PED::_0xA454D234E45BB6E5(func_402(14), PLAYER::GET_PLAYER_INDEX()))
		{
			Global_1357549->f_1648 = 0;
			if (func_617(func_402(14), func_402(13), 1, 1) < 20f)
			{
				func_404(func_402(13), "DISPUTE_INTERVENE_CAMP_MALE", 334581534, Global_35, 1, 0, 0, 1);
			}
		}
	}
}

int func_615(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_613(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		return func_621(iParam0, 26, 1);
	}
	if (bParam2)
	{
		if (!func_369(func_402(iParam0), 0))
		{
			return 0;
		}
	}
	if (!func_658(iParam0, 1, 0))
	{
		return 0;
	}
	if (func_621(iParam0, 44, 1))
	{
		return 0;
	}
	return 1;
}

bool func_616(int iParam0, bool bParam1)
{
	if (!func_613(iParam0))
	{
		return false;
	}
	if (!bParam1)
	{
		if (func_413(iParam0) || func_621(iParam0, 44, 1))
		{
			return false;
		}
	}
	return MISC::ARE_STRINGS_EQUAL(&(((*Global_1360165)[iParam0 /*1157*/])->f_48), "Sleep");
}

float func_617(int iParam0, int iParam1, bool bParam2, int iParam3)
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

var func_618(var uParam0, var uParam1)
{
	return AUDIO::_PLAY_AMBIENT_SPEECH1(uParam0, uParam1);
}

bool func_619(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_613(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0 /*60*/] && iParam1) != 0;
}

bool func_620(int iParam0, int iParam1, bool bParam2, int iParam3)
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

bool func_621(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_613(iParam0))
		{
			return false;
		}
	}
	func_792(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0]), iVar1);
}

void func_622(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_613(iParam0))
		{
			return;
		}
	}
	func_792(iParam1, &iVar0, &iVar1);
	MISC::CLEAR_BIT(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0], iVar1);
}

void func_623(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_613(iParam0))
		{
			return;
		}
	}
	func_792(iParam1, &iVar0, &iVar1);
	MISC::SET_BIT(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0], iVar1);
}

void func_624(int iParam0, bool bParam1, char* sParam2)
{
	int iVar0;

	iVar0 = func_402(iParam0);
	if (!func_410(iParam0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	PED::_0xF1C03A5352243A30(iVar0);
	if (bParam1)
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0, 0, 1);
	}
	else
	{
		TASK::CLEAR_PED_TASKS(iVar0, 1, 0);
	}
}

void func_625(int iParam0, int iParam1)
{
	if (!func_613(iParam0))
	{
		return;
	}
	((*Global_1360165)[iParam0 /*1157*/])->f_11 = iParam1;
}

int func_626(int iParam0, vector3 vParam1, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	if (!func_613(iParam0))
	{
		return 0;
	}
	switch (((*Global_1360165)[iParam0 /*1157*/])->f_3)
	{
		case 0:
			if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(89040947))
			{
				SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(89040947);
			}
			((*Global_1360165)[iParam0 /*1157*/])->f_3 = 1;
		case 1:
			if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(89040947))
			{
				return 0;
			}
			if (Global_1359489->f_9 != -1)
			{
				return 0;
			}
			Global_1359489->f_9 = iParam0;
			if (iParam4 == 0)
			{
				if (iParam9 != -1)
				{
					iParam4 = func_793(iParam0, iParam9, bParam7, 1);
				}
				else if ((((*Global_1360165)[iParam0 /*1157*/])->f_4.f_2 != 0 && ((*Global_1360165)[iParam0 /*1157*/])->f_4.f_2 == (Global_40.f_4942[iParam0 /*60*/])->f_59) && (func_708(((*Global_1360165)[iParam0 /*1157*/])->f_4.f_2) || func_576(((*Global_1360165)[iParam0 /*1157*/])->f_4.f_2)))
				{
					iParam4 = ((*Global_1360165)[iParam0 /*1157*/])->f_4.f_1;
				}
				else
				{
					iParam4 = func_793(iParam0, Global_40.f_4283, bParam7, 1);
				}
				if (((*Global_1360165)[iParam0 /*1157*/])->f_63 != iParam4 && func_794(((*Global_1360165)[iParam0 /*1157*/])->f_63))
				{
					if (!func_616(iParam0, 0))
					{
						func_623(iParam0, 25, 0);
					}
				}
			}
			((*Global_1360165)[iParam0 /*1157*/])->f_4 = { func_795(iParam0, iParam4, vParam1, bParam5, bParam6, bParam8, (Global_40.f_4942[iParam0 /*60*/])->f_59, bParam11) };
			if (!bParam6)
			{
				func_622(iParam0, 44, 1);
			}
			((*Global_1360165)[iParam0 /*1157*/])->f_3 = 2;
		case 2:
			if (!func_369(func_402(iParam0), 0))
			{
				return 0;
			}
			if (bParam5 && iParam10)
			{
				if (!func_369(func_656(iParam0), 0))
				{
					return 0;
				}
			}
			((*Global_1360165)[iParam0 /*1157*/])->f_3 = 3;
		case 3:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_627(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_613(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_622(iParam0, 50, 1);
		func_622(iParam0, 48, 1);
		func_622(iParam0, 49, 1);
		func_622(iParam0, 51, 1);
		func_622(iParam0, 52, 1);
		func_622(iParam0, 54, 1);
		func_622(iParam0, 55, 1);
	}
	else
	{
		func_623(iParam0, 50, 1);
		func_623(iParam0, 48, 1);
		func_623(iParam0, 49, 1);
		func_623(iParam0, 51, 1);
		if (bParam3)
		{
			func_623(iParam0, 54, 1);
		}
		else
		{
			func_622(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_623(iParam0, 52, 1);
			if (bParam3)
			{
				func_623(iParam0, 55, 1);
			}
		}
		else
		{
			func_622(iParam0, 52, 1);
			if (!bParam3)
			{
				func_622(iParam0, 55, 1);
			}
		}
	}
}

void func_628(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_410(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_796(iParam0, bParam3);
	}
	else
	{
		func_797(iParam0, bParam3);
	}
	if (bParam2)
	{
		func_798(iParam0, bParam3);
	}
	else
	{
		func_799(iParam0, bParam3);
	}
}

void func_629(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	int iVar6;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar4 = ENTITY::IS_ENTITY_A_PED(iParam0);
	if (bVar4)
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		bVar3 = PED::_0xD5FE956C70FF370B(iVar1);
		if (PED::IS_PED_RAGDOLL(iVar1))
		{
			PED::_0x221F4D9912B7FE86(iVar1, 1);
		}
	}
	if (iParam0 == func_800(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (func_801(iParam0))
	{
		if (func_802(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			PHYSICS::_0x0348469DAA17576C(iParam0);
		}
	}
	if (func_318(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_629(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_629(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_318(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 0, 1);
		}
	}
	if (func_318(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			ENTITY::_0x203BEFFDBE12E96A(iParam0, vParam1, fParam4, 1, func_318(iParam5, 32), 1);
		}
		else
		{
			ENTITY::_0x203BEFFDBE12E96A(iParam0, vParam1, fParam4, 1, func_318(iParam5, 32), 1);
			ENTITY::_0x9587913B9E772D29(iParam0, 0);
		}
	}
	else if (func_318(iParam5, 129))
	{
		if (func_318(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0, vParam1, func_318(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
	}
	else
	{
		ENTITY::_0x203BEFFDBE12E96A(iParam0, vParam1, fParam4, 1, func_318(iParam5, 32), 1);
	}
	if (bVar4)
	{
		if (!func_318(iParam5, 16))
		{
			PED::_0x7DE9692C6F64CFE8(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3, 0, 0);
		}
		if (func_801(iParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PHYSICS::_0x0348469DAA17576C(iVar6);
			if (!func_318(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, 1, 0);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PACKAGE_INDEX(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 1);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0) == Global_35 && !func_318(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
}

int func_630(int iParam0, int iParam1)
{
	var uVar0;

	if (!func_410(iParam0))
	{
		return 0;
	}
	if (iParam1 == 296923297 || iParam1 == 1237718549)
	{
		return 1;
	}
	uVar0 = func_803(iParam0, iParam1);
	return uVar0;
}

void func_631(int iParam0, int iParam1, bool bParam2)
{
	if (!func_410(iParam0))
	{
		return;
	}
	if (!func_630(iParam0, iParam1))
	{
		return;
	}
	(Global_40.f_4942[iParam0 /*60*/])->f_3 = iParam1;
	if (bParam2)
	{
		func_623(iParam0, 25, 1);
	}
}

void func_632(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (func_804(iParam2))
		{
			iVar0 = func_805(iParam2, -1);
			if (func_806(iParam1, iVar0))
			{
				if (func_807(iParam1, iVar0))
				{
					if (func_808(iParam1, iVar0))
					{
						PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam1, "metaped_outfit_request"), iParam1, true, false);
						func_809(iParam1);
					}
				}
				else
				{
					PED::_0x1902C4CFCC5BE57C(iParam1, iVar0);
				}
			}
		}
		func_810(iParam0, iParam1, 0);
		PED::_0xCC8CA3E88256E58F(iParam1, 0, 1, 1, 1, 0);
		PED::_0xE3144B932DFDFF65(iParam1, 0f, -1, 1, 1);
		PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam1, 10, "ALL");
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 3);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 0);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 5);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 7);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 8);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 9);
		if (bParam3)
		{
			func_623(iParam0, 66, 0);
		}
	}
}

void func_633(int iParam0)
{
	func_811(iParam0);
	func_812(iParam0, 0);
}

void func_634(int iParam0, int iParam1)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("weapon_unarmed"), true, 0, false, false);
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("weapon_unarmed"), true, 1, false, false);
		if (PED::IS_PED_A_PLAYER(iParam0) && iParam1 == 1)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::PLAYER_ID(), joaat("weapon_unarmed"), 0);
			}
		}
	}
}

void func_635(int iParam0, int iParam1, bool bParam2)
{
	if (!func_613(iParam0))
	{
		return;
	}
	func_813(&(((*Global_1360165)[iParam0 /*1157*/])->f_13), iParam1, bParam2);
}

void func_636(int iParam0)
{
	func_623(iParam0, 36, 1);
}

int func_637(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar1, true, iVar0, true);
		if (!WEAPON::IS_WEAPON_VALID(iVar1))
		{
		}
		else if (!WEAPON::_0x0556E9D2ECF39D01(iVar1))
		{
		}
		else
		{
			iVar2 = 1;
			WEAPON::_0xE9BD19F8121ADE3E(iParam0, iVar1);
		}
		iVar0++;
	}
	return iVar2;
}

void func_638(int iParam0, int iParam1)
{
	if (!func_613(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 11:
			if ((Global_40.f_4942[iParam0 /*60*/])->f_3 == -1341683964)
			{
				func_814(iParam1, joaat("weapon_revolver_cattleman_sadie"), 0, 0, 2, 1, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
				func_814(iParam1, joaat("weapon_revolver_cattleman_sadie_dualwield"), 0, 0, 3, 1, 1, 1056964608, 1065353216, -1, 0, 1, 0, 0);
			}
			break;
	}
}

void func_639(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_410(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (Global_40.f_4942[iParam0 /*60*/] || iParam1);
}

void func_640(var uParam0)
{
	func_815(uParam0, 0f);
}

int func_641(int iParam0)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 0;
	if (func_816(Var0, 70005598, &iVar6, 0))
	{
		iVar5 = func_817(iVar6);
	}
	return iVar5;
}

int func_642(int iParam0)
{
	struct<5> Var0;
	int iVar5;

	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 1;
	if (func_818(Var0, -1875502208, &iVar5, 0))
	{
	}
	return iVar5;
}

void func_643(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_263(*iParam0);
	iVar1 = func_262(*iParam0);
	iVar2 = func_261(*iParam0);
	iVar3 = func_258(*iParam0);
	iVar4 = func_259(*iParam0);
	iVar5 = func_260(*iParam0);
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
	iVar6 = func_704(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_704(iVar1, iVar0);
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
	func_819(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_644(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_820(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		MISC::SET_BIT(Global_1357549->f_1848[iVar0], iVar1);
	}
	else
	{
		MISC::CLEAR_BIT(Global_1357549->f_1848[iVar0], iVar1);
	}
}

int func_645(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 1;
		case 3:
			return 1;
		case 4:
			return 1;
		case 5:
			return 0;
		case 7:
			return 0;
		case 9:
			return 1;
		case 10:
			return 0;
		case 11:
			return 1;
		case 8:
			return 1;
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
			return 0;
		default:
			break;
	}
	return 0;
}

void func_646(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_644(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_647(2, *uParam0);
		}
		else
		{
			func_648(2, *uParam0);
		}
	}
	func_821(uParam0);
}

void func_647(int iParam0, int iParam1)
{
	if (Global_1357549->f_1483 >= 25)
	{
		Global_1357549->f_1483 = 0;
	}
	Global_1357549->f_1407[Global_1357549->f_1483 /*3*/] = iParam0;
	(Global_1357549->f_1407[Global_1357549->f_1483 /*3*/])->f_1 = iParam1;
	(Global_1357549->f_1407[Global_1357549->f_1483 /*3*/])->f_2 = 0;
	Global_1357549->f_1483++;
}

void func_648(int iParam0, int iParam1)
{
	if (Global_1357549->f_1406 >= 50)
	{
		return;
	}
	if (&Global_1357549->f_1252[Global_1357549->f_1406 /*3*/] != 0)
	{
		return;
	}
	Global_1357549->f_1252[Global_1357549->f_1406 /*3*/] = iParam0;
	(Global_1357549->f_1252[Global_1357549->f_1406 /*3*/])->f_1 = iParam1;
	(Global_1357549->f_1252[Global_1357549->f_1406 /*3*/])->f_2 = 0;
	Global_1357549->f_1403++;
	Global_1357549->f_1406++;
}

void func_649(int iParam0, bool bParam1)
{
	if (!func_613(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_822(&(((*Global_1360165)[iParam0 /*1157*/])->f_12), 1))
		{
			func_635(iParam0, 1, 0);
		}
	}
	func_635(iParam0, 16, bParam1);
}

void func_650(int iParam0)
{
	func_635(iParam0, 8, 0);
}

int func_651(int iParam0, bool bParam1)
{
	if (!func_410(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_NAMESPACE48::_0x800DF3FC913355F3(((*Global_1360165)[iParam0 /*1157*/])->f_1))
		{
			func_823(iParam0);
		}
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_1;
}

void func_652(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (func_410(iParam0))
	{
		iVar1 = func_402(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			iVar0 = PED::GET_PED_MAX_HEALTH(iVar1);
			PED::SET_PED_CONFIG_FLAG(iVar1, 179, true);
			func_824(iParam0);
		}
	}
	if (func_621(iParam0, 5, 1))
	{
		PED::SET_PED_CONFIG_FLAG(func_402(iParam0), 137, true);
	}
}

void func_653(int iParam0, bool bParam1)
{
	if (!func_613(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(func_402(iParam0), 204, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(func_402(iParam0), 204, false);
	}
}

void func_654(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	var uVar0;
	int iVar1;

	if (!func_410(iParam0))
	{
		return;
	}
	if (func_413(iParam0))
	{
		if (!func_825(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_621(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	uVar0 = func_651(iParam0, 0);
	if (!MISC::_0x716F17F8A0419F95(uVar0))
	{
		return;
	}
	iVar1 = func_402(iParam0);
	if (((ENTITY::DOES_ENTITY_EXIST(iVar1) && func_826(iParam0) < 10000f) && !bParam3) && !CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::IS_ENTITY_ATTACHED(iVar1))
	{
		if (((TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar1, 1) || TASK::_0x0C3CB2E600C8977D(iVar1, 1)) || PED::IS_PED_ON_MOUNT(iVar1)) || PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
		{
			PED::_0xF1C03A5352243A30(iVar1);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar1, 1, 1);
		}
		ENTITY::DETACH_ENTITY(iVar1, true, true);
	}
	if (bParam4)
	{
		func_623(iParam0, 2, 1);
	}
	else
	{
		func_827(iParam0);
		func_623(iParam0, 1, 1);
	}
}

void func_655(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_410(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (&Global_40.f_4942[iParam0 /*60*/] - (Global_40.f_4942[iParam0 /*60*/] && iParam1));
}

int func_656(int iParam0)
{
	if (!func_410(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(((*Global_1360165)[iParam0 /*1157*/])->f_70))
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_70 = 0;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_70;
}

void func_657(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (!func_613(iParam1))
	{
		return;
	}
	iVar0 = func_656(iParam1);
	if (func_828(iParam1))
	{
		if (!func_829(iParam1))
		{
			return;
		}
	}
	func_622(iParam1, 39, 1);
	func_830(iParam1, 64, 0);
	((*Global_1360165)[iParam1 /*1157*/])->f_70.f_11 = 0;
	func_830(iParam1, 8, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!bParam2)
		{
			func_830(iParam1, 512, 1);
			PED::SET_PED_KEEP_TASK(iVar0, true);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			func_623(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_831(iParam1, 0, 1, 1, 1);
		}
	}
}

int func_658(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_613(iParam0))
	{
		return 0;
	}
	if (func_619(iParam0, 32, 1))
	{
		return 0;
	}
	if (!func_619(iParam0, 2, 1))
	{
		return 0;
	}
	if (!func_619(iParam0, 4, 1))
	{
		return 0;
	}
	if (func_621(iParam0, 33, 1))
	{
		return 0;
	}
	if (func_413(iParam0))
	{
		return 0;
	}
	if (func_832(iParam0))
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

int func_659(int iParam0)
{
	if (func_410(iParam0))
	{
		if (func_369(Global_1360165[iParam0 /*1157*/], 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_660(int iParam0)
{
	if (func_410(iParam0))
	{
		return Global_1360165[iParam0 /*1157*/];
	}
	return 0;
}

int func_661(int iParam0)
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

int func_662(int iParam0)
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

void func_663(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
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

	iVar0 = func_833();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_834(iParam0);
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
	if (func_345(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_342())
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
	Global_40.f_11095.f_35 = func_835(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_833();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || iParam7)
	{
		iVar6 = func_836(iVar1);
		func_838(func_837(), 0, 4000);
		func_839(Global_40.f_11095.f_35);
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
		func_840(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_841(func_528(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(iParam5))
			{
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_662(14))
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
					sParam4 = func_842(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_843(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_843(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_841(func_528(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_662(4))
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
					sParam4 = func_842(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_843(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_843(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_528(-1990689970) };
	STATS::STAT_ID_SET_INT(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_0xE6B763C7F4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_116(10, 1);
	}
}

void func_664(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0 /*6*/] = iParam1;
	(Global_1347477->f_155[iParam0 /*6*/])->f_2 = iParam2;
	(Global_1347477->f_155[iParam0 /*6*/])->f_3 = iParam3;
	(Global_1347477->f_155[iParam0 /*6*/])->f_4 = iParam4;
	(Global_1347477->f_155[iParam0 /*6*/])->f_5 = bParam5;
	(Global_1347477->f_155[iParam0 /*6*/])->f_1 = MISC::GET_GAME_TIMER() + 500;
}

int func_665(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_40.f_7862[iParam0 /*4*/])->f_2;
	}
	return (Global_42605[iParam0 /*4*/])->f_2;
}

Vector3 func_666(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;

	iVar3 = iParam0 & 32767;
	iVar4 = BUILTIN::SHIFT_RIGHT(iParam0, 15) & 32767;
	vVar0.x = BUILTIN::TO_FLOAT(iVar3);
	vVar0.f_1 = BUILTIN::TO_FLOAT(iVar4);
	if (iParam0 & 1073741824 == 0)
	{
		vVar0.x = (vVar0.x * -1f);
	}
	if (iParam0 & -2147483648 == 0)
	{
		vVar0.f_1 = (vVar0.y * -1f);
	}
	return vVar0;
}

int func_667(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return -678244495;
		case 1:
			return -678244495;
		case 2:
			return -678244495;
		case 4:
			return -678244495;
		case 5:
			return -678244495;
		case 6:
			return -678244495;
		case 7:
			return -678244495;
		case 8:
			return -678244495;
		case 9:
			return -678244495;
		case 10:
			return -678244495;
		case 11:
			return -678244495;
		case 12:
			return -678244495;
		case 14:
			return -936216634;
		case 13:
			return -936216634;
		case 15:
			return -936216634;
		case 16:
			return -936216634;
		case 17:
			return -936216634;
		case 18:
			return -936216634;
		case 19:
			return -936216634;
		case 20:
			return 168093330;
		case 21:
			return 168093330;
		case 22:
			return 168093330;
		case 23:
			return 168093330;
		case 24:
			return 168093330;
		case 25:
			return 168093330;
		case 26:
			return 168093330;
		case 28:
			return 168093330;
		case 29:
			return 168093330;
		case 33:
			return 168093330;
		case 34:
			return 168093330;
		case 30:
			return 168093330;
		case 32:
			return 168093330;
		case 31:
			return 168093330;
		case 41:
			return 168093330;
		case 42:
			return 168093330;
		case 35:
			return 168093330;
		case 36:
			return 168093330;
		case 37:
			return 168093330;
		case 38:
			return 168093330;
		case 39:
			return 168093330;
		case 27:
			return 168093330;
		case 45:
			return 168093330;
		case 40:
			return 168093330;
		case 43:
			return 168093330;
		case 44:
			return 168093330;
		case 46:
			return -972966383;
		case 47:
			return -972966383;
		case 48:
			return -972966383;
		case 49:
			return -678244495;
		case 50:
			return -678244495;
		case 51:
			return -678244495;
		case 52:
			return 1560611276;
		case 53:
			return -494978356;
		case 54:
			return -494978356;
		case 55:
			return -494978356;
		case 56:
			return -494978356;
		case 57:
			return -507182222;
		case 58:
			return -1337945352;
		case 59:
			return -678244495;
		case 60:
			return -678244495;
		case 61:
			return -678244495;
		case 62:
			return -383696203;
		default:
			break;
	}
	return 0;
}

int func_668(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 1243830185;
		case 1:
			return 595820042;
		case 2:
			return -1650465405;
		case 4:
			return 1974815632;
		case 5:
			return 1078668923;
		case 6:
			return 552659337;
		case 7:
			return -1179229323;
		case 8:
			return -1581061148;
		case 9:
			return -48718882;
		case 10:
			return -379108622;
		case 11:
			return 1015604260;
		case 12:
			return 126262516;
		case 14:
			return -997121570;
		case 13:
			return 423351566;
		case 16:
			return -1636832113;
		case 17:
			return 1012165077;
		case 18:
			return -250506368;
		case 19:
			return 2033397166;
		case 20:
			return 1475879922;
		case 21:
			return 531267562;
		case 22:
			return 249721687;
		case 23:
			return -145868367;
		case 24:
			return -1989306548;
		case 25:
			return -1739686743;
		case 26:
			return 1195729388;
		case 28:
			return -758970771;
		case 29:
			return 1542275196;
		case 33:
			return 1861010125;
		case 34:
			return 1475382911;
		case 30:
			return 103490298;
		case 31:
			return -2090472724;
		case 32:
			return -1665418949;
		case 35:
			return -852241114;
		case 36:
			return -1406874050;
		case 37:
			return 1938782895;
		case 38:
			return -1456209806;
		case 39:
			return 469827317;
		case 27:
			return 1879260108;
		case 40:
			return 587827268;
		case 41:
			return 819673798;
		case 42:
			return 819673798;
		case 43:
			return -211556852;
		case 44:
			return 1364029453;
		case 45:
			return -73168905;
		case 46:
			return 1586273744;
		case 47:
			return -1498696713;
		case 48:
			return 1586273744;
		case 49:
			return 503049244;
		case 50:
			return 305594522;
		case 51:
			return -417940443;
		case 52:
			return -1606321000;
		case 53:
			return 1904459580;
		case 54:
			return -1989725258;
		case 55:
			return -487631996;
		case 56:
			return -1944395098;
		case 57:
			return -428972082;
		case 58:
			return 1586273744;
		case 59:
			return -1575595762;
		case 60:
			return -417940443;
		case 61:
			return -417940443;
		case 62:
			return -1258576797;
		default:
			break;
	}
	return 0;
}

int func_669()
{
	if (!func_70(39))
	{
		return 0;
	}
	if (func_70(43))
	{
		return 0;
	}
	return 1;
}

int func_670(int iParam0)
{
	if (func_27() != -1)
	{
		return 0;
	}
	if (!func_174(iParam0))
	{
		return 0;
	}
	return func_576(((*Global_1347702)[iParam0 /*49*/])->f_15);
}

int func_671(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return 7;
		case 79:
			return 0;
		case 43:
			return 1;
		case 98:
			return 2;
		case 58:
			return 3;
		case 71:
			return 4;
		case 4:
			return 5;
		case 76:
			return 8;
		case 9:
			return 6;
		case 5:
			return 9;
		case 38:
			return 10;
		case 105:
			return 11;
		case 92:
			return 12;
		case 78:
			return 13;
		case 26:
			return 14;
		case 37:
			return 15;
		case 115:
			return 16;
		default:
			break;
	}
	return -1;
}

bool func_672(int iParam0, int iParam1)
{
	if (!func_220(iParam0))
	{
		return false;
	}
	return (Global_40.f_9384[iParam0 /*2*/] && iParam1) != 0;
}

void func_673(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, bool bParam5)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_36307)
	{
		if (func_844(iVar0) == iParam0 && func_430(iVar0) == iParam1)
		{
			func_738(iVar0, -1);
			func_739(iVar0, 0);
			func_740(iVar0, 0);
			if (MAP::DOES_BLIP_EXIST(&(Global_36307[iVar0])))
			{
				if (bParam5)
				{
					MAP::SET_RADAR_ZOOM(&(Global_36307[iVar0]));
				}
				MAP::REMOVE_BLIP(Global_36307[iVar0]);
			}
			return;
		}
		iVar0++;
	}
}

int func_674(int iParam0, int iParam1, vector3 vParam2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 == 0)
	{
		return -1;
	}
	if (func_213(vParam2))
	{
		return -1;
	}
	iVar1 = -1;
	iVar2 = func_845(vParam2);
	iVar0 = 0;
	while (iVar0 < Global_36307)
	{
		if (func_430(iVar0) == 0 && iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		else if ((func_430(iVar0) == iParam1 && func_844(iVar0) == iParam0) && iVar2 == func_665(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	if (iVar1 > -1 && iVar1 < 250)
	{
		func_738(iVar1, iParam0);
		func_739(iVar1, iParam1);
		func_740(iVar1, iVar2);
		func_846(iVar1, iParam5);
		func_431(iVar1);
		MAP::SET_BLIP_FLASH_TIMER(&(Global_36307[iVar1]), iParam1, 0);
		return iVar1;
	}
	return -1;
}

void func_675(int iParam0, int iParam1, vector3 vParam2, char* sParam5)
{
	int iVar0;
	int iVar1;

	iVar0 = func_845(vParam2);
	iVar1 = 0;
	while (iVar1 < Global_36307)
	{
		if ((func_844(iVar1) == iParam0 && func_430(iVar1) == iParam1) && func_665(iVar1) == iVar0)
		{
			if (MAP::DOES_BLIP_EXIST(&(Global_36307[iVar1])))
			{
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(&(Global_36307[iVar1]), sParam5);
			}
			return;
		}
		iVar1++;
	}
}

void func_676(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < Global_36307)
	{
		if (MAP::DOES_BLIP_EXIST(&(Global_36307[iParam0])))
		{
			MAP::_0xBD62D98799A3DAF0(&(Global_36307[iParam0]), iParam1);
		}
	}
}

void func_677(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_36307)
	{
		if (func_844(iVar0) == iParam0)
		{
			if (MAP::DOES_BLIP_EXIST(&(Global_36307[iVar0])))
			{
				MAP::_0x662D364ABF16DE2F(&(Global_36307[iVar0]), 580546400);
			}
			return;
		}
		iVar0++;
	}
}

int func_678(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_36307)
	{
		if (func_844(iVar0) == iParam0 && func_430(iVar0) == iParam1)
		{
			if (MAP::DOES_BLIP_EXIST(&(Global_36307[iVar0])))
			{
				return MAP::_0x662D364ABF16DE2F(&(Global_36307[iVar0]), iParam2);
			}
			return 0;
		}
		iVar0++;
	}
	return 0;
}

int func_679(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_36307)
	{
		if (func_844(iVar0) == iParam0 && func_430(iVar0) == iParam1)
		{
			if (MAP::DOES_BLIP_EXIST(&(Global_36307[iVar0])))
			{
				return MAP::_0xB059D7BD3D78C16F(&(Global_36307[iVar0]), iParam2);
			}
			return 0;
		}
		iVar0++;
	}
	return 0;
}

void func_680(int iParam0, vector3 vParam1)
{
	if (func_847(iParam0))
	{
		((*Global_1888801)[iParam0 /*35*/])->f_1 = MISC::GET_GAME_TIMER();
		return;
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(((*Global_1888801)[iParam0 /*35*/])->f_9, false) || MISC::IS_STRING_NULL_OR_EMPTY(&(((*Global_1888801)[iParam0 /*35*/])->f_26)))
	{
		if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1888801)[iParam0 /*35*/])->f_3))
		{
			if (VOLUME::_0xF256A75210C5C0EB(((*Global_1888801)[iParam0 /*35*/])->f_3, vParam1))
			{
				((*Global_1888801)[iParam0 /*35*/])->f_1 = MISC::GET_GAME_TIMER();
				func_848(iParam0);
				return;
			}
		}
		if ((*Global_1888801)[iParam0 /*35*/])->f_1 + 2500 > MISC::GET_GAME_TIMER()
		{
			return;
		}
	}
	if (((*Global_1888801)[iParam0 /*35*/])->f_9 != 0)
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(((*Global_1888801)[iParam0 /*35*/])->f_9, false))
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(((*Global_1888801)[iParam0 /*35*/])->f_9, 523);
				((*Global_1888801)[iParam0 /*35*/])->f_9 = 0;
			}
			else if (!SCRIPTS::_0x30BED53646C86D11(((*Global_1888801)[iParam0 /*35*/])->f_9))
			{
				SCRIPTS::_0x7DE4643157AD646C(((*Global_1888801)[iParam0 /*35*/])->f_9);
			}
		}
		if (!SCRIPTS::_DOES_THREAD_EXIST(((*Global_1888801)[iParam0 /*35*/])->f_9))
		{
			((*Global_1888801)[iParam0 /*35*/])->f_9 = 0;
		}
		else
		{
			return;
		}
	}
	func_280(iParam0, 8);
	switch (((*Global_1888801)[iParam0 /*35*/])->f_20)
	{
		case 1:
		case 2:
			if (func_27() == -1)
			{
				if (Global_1327479->f_6 != iParam0)
				{
					func_849(-30, 0, 1);
					Global_1327479->f_6 = iParam0;
				}
			}
			break;
		case 3:
			break;
		case 7:
			break;
		case 4:
			break;
	}
	func_280(iParam0, 11);
	if ((Global_23117[iParam0 /*11*/])->f_10 < 10)
	{
		(Global_23117[iParam0 /*11*/])->f_10 = 0;
	}
	func_850(func_229(iParam0, 1, 1));
	if (iParam0 == Global_1894899->f_2)
	{
		func_848(-1);
		func_851();
	}
}

void func_681(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	bool bVar7;
	int iVar8;

	if (!func_207(iParam0))
	{
		return;
	}
	bVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(&(((*Global_1888801)[iParam0 /*35*/])->f_26)) != false;
	bVar1 = false;
	if (bVar0)
	{
		if (!SCRIPTS::HAS_SCRIPT_LOADED(&(((*Global_1888801)[iParam0 /*35*/])->f_26)))
		{
			SCRIPTS::REQUEST_SCRIPT(&(((*Global_1888801)[iParam0 /*35*/])->f_26));
			return;
		}
	}
	iVar2 = ((*Global_1888801)[iParam0 /*35*/])->f_20;
	bVar7 = iParam0 == func_98();
	if (((bVar0 && bVar7) && Global_1879534) // PointerArith)
	{
		bVar0 = false;
	}
	switch (iVar2)
	{
		case 3:
			if (func_852(iParam0, 1))
			{
				bVar1 = true;
			}
		default:
			break;
	}
	if (bVar0)
	{
		vVar3.x = iParam0;
		iVar8 = 1024;
		if (MISC::GET_HASH_KEY(&(((*Global_1888801)[iParam0 /*35*/])->f_26)) != -135832742)
		{
			if (iVar2 == 8)
			{
				iVar8 = 512;
			}
			else if (bVar7)
			{
				iVar8 = 5000;
			}
			else if (iVar2 == 3)
			{
				iVar8 = 2049;
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar8 = 5500;
		}
		if (((*Global_1888801)[iParam0 /*35*/])->f_9 != 0)
		{
			if (SCRIPTS::IS_THREAD_ACTIVE(((*Global_1888801)[iParam0 /*35*/])->f_9, false))
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(((*Global_1888801)[iParam0 /*35*/])->f_9, 523);
				}
				else
				{
					SCRIPTS::_0x7DE4643157AD646C(((*Global_1888801)[iParam0 /*35*/])->f_9);
				}
			}
			if (!SCRIPTS::_DOES_THREAD_EXIST(((*Global_1888801)[iParam0 /*35*/])->f_9))
			{
				((*Global_1888801)[iParam0 /*35*/])->f_9 = 0;
			}
			else
			{
				return;
			}
		}
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(((*Global_1888801)[iParam0 /*35*/])->f_26))) > 0)
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				PLAYER::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME(&(((*Global_1888801)[iParam0 /*35*/])->f_26), 523);
			}
			else
			{
				SCRIPTS::_0x7423F7835770F619(MISC::GET_HASH_KEY(&(((*Global_1888801)[iParam0 /*35*/])->f_26)));
			}
			return;
		}
		vVar3.f_2 = iParam1;
		((*Global_1888801)[iParam0 /*35*/])->f_9 = BUILTIN::START_NEW_SCRIPT_WITH_ARGS(&(((*Global_1888801)[iParam0 /*35*/])->f_26), &vVar3, 4, iVar8);
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(((*Global_1888801)[iParam0 /*35*/])->f_26));
	}
	func_322(iParam0, 1);
	func_322(iParam0, 2);
	func_853(bVar1);
}

void func_682(int iParam0, vector3 vParam1, bool bParam4)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	if (Global_1572887->f_12 == -1)
	{
		if (!PLAYER::IS_PLAYER_PLAYING(iVar0))
		{
			return;
		}
		if (func_77(&Global_1935630, 4096))
		{
			if (!func_854())
			{
				return;
			}
		}
	}
	if (!func_847(iParam0))
	{
		if (!VOLUME::_0xF256A75210C5C0EB(((*Global_1888801)[iParam0 /*35*/])->f_3, vParam1))
		{
			if (Global_1894899->f_2 == iParam0)
			{
				func_848(-1);
			}
			return;
		}
		if (func_207(Global_1894899->f_2))
		{
			if (SCRIPTS::_DOES_THREAD_EXIST(((*Global_1888801)[Global_1894899->f_2 /*35*/])->f_9))
			{
				if (bParam4)
				{
					func_322(Global_1894899->f_2, 2);
				}
				return;
			}
		}
	}
	MemCopy(&(((*Global_1888801)[iParam0 /*35*/])->f_26), {func_855(iParam0)}, 4);
	if (HUD::GET_LENGTH_OF_LITERAL_STRING(&(((*Global_1888801)[iParam0 /*35*/])->f_26)) != 0)
	{
		SCRIPTS::REQUEST_SCRIPT(&(((*Global_1888801)[iParam0 /*35*/])->f_26));
	}
	else
	{
		func_322(iParam0, 2);
	}
	func_322(iParam0, 1);
	if (((*Global_1888801)[iParam0 /*35*/])->f_20 != 8)
	{
		func_856(iParam0, 0);
	}
	PLAYER::_0xFA7DAAE3959E6C7B(iVar0, func_857());
	if ((((*Global_1888801)[iParam0 /*35*/])->f_20 == 1 || ((*Global_1888801)[iParam0 /*35*/])->f_20 == 2) && !CAM::IS_SCREEN_FADED_OUT())
	{
		EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(-591924351, Global_35, -1f, -1f, -1f, -1082130432, -1082130432, 1127481344, 0, 0, -1, -1);
	}
	func_848(iParam0);
	func_858(iParam0);
	func_395(func_229(iParam0, 1, 1), -1);
}

bool func_683(int iParam0)
{
	return iParam0 != 0;
}

int func_684()
{
	return ZONE::_GET_WATER_MAP_ZONE_AT_COORDS(Global_36);
}

int func_685(int iParam0)
{
	if (iParam0 == 0)
	{
		return (func_859() && func_860());
	}
	else if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 3)
	{
		return func_861(iParam0, 1);
	}
	return 0;
}

void func_686(int iParam0, var uParam1, var uParam2, var uParam3)
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

bool func_687(vector3 vParam0, vector3 vParam3, float fParam6, float fParam7, float fParam8)
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

int func_688(var uParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	*uParam0 = 0;
	*uParam1 = 0;
	bVar0 = func_58();
	bVar1 = false;
	if (bVar0 && !func_70(4))
	{
		bVar1 = true;
	}
	if ((bVar0 && func_70(37)) && !func_70(43))
	{
		*uParam0 = 0;
		*uParam1 = 0;
		return 0;
	}
	bVar2 = false;
	if ((bVar0 && func_70(43)) && !func_70(44))
	{
		bVar2 = true;
	}
	if (bVar1)
	{
		*uParam0 = 1;
		return 1;
	}
	if (!bVar1 && !bVar2)
	{
		if (func_862(0) == 1)
		{
			*uParam0 = 1;
		}
		if (func_862(1) == 1)
		{
			*uParam1 = 1;
		}
	}
	if (*uParam0 || *uParam1)
	{
		return 1;
	}
	return 0;
}

int func_689()
{
	return Global_40.f_1095.f_3054;
}

int func_690(int iParam0)
{
	iParam0 = func_863(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_420;
}

int func_691()
{
	if (func_58())
	{
		if (!func_70(3))
		{
			return func_458(43);
		}
		if (func_70(38) && !func_70(43))
		{
			return func_373(8);
		}
	}
	return 0;
}

Vector3 func_692(int iParam0, int iParam1)
{
	struct<5> Var0;
	vector3 vVar5;

	func_264(15, &Var0);
	Var0.f_2 = -1999103282;
	Var0.f_3 = iParam0;
	Var0.f_4 = iParam1;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = -495185473;
		DATAFILE::_DATAFILE_GET_VECTOR(&vVar5, &Var0);
	}
	return vVar5;
}

int func_693(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;
	int iVar6;

	if (LAW::_0x54310AAB97B92816(PLAYER::PLAYER_ID()) <= 0)
	{
		return 0;
	}
	if (Global_1310720->f_21 == -1)
	{
		return 0;
	}
	if (Global_1310720->f_23 >= 3)
	{
		return 0;
	}
	iVar0 = func_864(Global_1310720->f_21, 2);
	if (iVar0 == -1)
	{
		return 0;
	}
	func_264(15, &Var1);
	Var1.f_2 = -1999103282;
	Var1.f_3 = iParam0;
	Var1.f_4 = iParam1;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var1.f_1), &Var1))
	{
		Var1.f_2 = 383290544;
		DATAFILE::_DATAFILE_GET_HASH(&iVar6, &Var1);
		if (func_865(iVar0) == iVar6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_694(int iParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_866(iParam0);
	if (func_310(373691918) && Global_1310720->f_12)
	{
		return iVar0 == 4;
	}
	if (iParam2 != -1)
	{
		return iVar0 == iParam2;
	}
	return (uParam1 || iVar0 == -1);
}

int func_695(int iParam0)
{
	struct<4> Var0;
	var uVar5;

	if (!func_264(15, &Var0))
	{
		return 0;
	}
	Var0.f_3 = iParam0;
	Var0.f_2 = 303248275;
	if (DATAFILE::_DATAFILE_GET_BOOL(&uVar5, &Var0))
	{
	}
	return uVar5;
}

int func_696(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, float fParam10)
{
	int iVar0;
	int iVar1;

	if (bParam5)
	{
		if (func_867(iParam3, iParam4))
		{
			return 0;
		}
	}
	if (!bParam7 || func_868(5))
	{
		if (func_869(iParam3, iParam4))
		{
			return 0;
		}
	}
	iVar0 = func_197(vParam0);
	if (bParam6)
	{
		iVar1 = func_102(vParam0, 1);
		if (func_285(iVar1) || func_870(iVar0, 1))
		{
			return 0;
		}
	}
	if (!func_871(iParam3, iParam4))
	{
		return 0;
	}
	if (!func_872())
	{
		if (func_873(iParam3, iParam4))
		{
			return 0;
		}
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam8))
	{
		if (!func_874(iVar0))
		{
			return 0;
		}
		if (Global_1310720->f_23 >= 3)
		{
			if (Global_1310720->f_21 != -1)
			{
				if (Global_1310720->f_21 == func_102(vParam0, 0))
				{
					return 0;
				}
			}
		}
	}
	if (!func_875(iParam3, iParam4))
	{
		return 0;
	}
	if (func_876(0) == 3)
	{
		if (((vParam0.x > -1480f && vParam0.x < -1475f) && vParam0.y > -359f) && vParam0.y < -354f)
		{
			return 0;
		}
	}
	if (!func_877(65536, 2))
	{
		if (((vParam0.x > 1673f && vParam0.x < 1676f) && vParam0.y > -1888f) && vParam0.y < -1885f)
		{
			return 0;
		}
	}
	if (func_58())
	{
		if (VOLUME::_0x92A78D0BEDB332A3(iParam8))
		{
			if (!VOLUME::_0xF256A75210C5C0EB(iParam8, vParam0))
			{
				return 0;
			}
		}
		if (func_878(vParam0, fParam10) || func_879(vParam0, fParam10))
		{
			return 0;
		}
	}
	else if (bParam9)
	{
		if (vParam0.x < -450f && vParam0.y < -600f)
		{
			return 0;
		}
	}
	return 1;
}

void func_697(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (iParam0 == 1)
		{
			DECORATOR::DECOR_SET_BOOL(PLAYER::PLAYER_PED_ID(), "Inspecting_Item", true);
		}
		else if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Inspecting_Item"))
		{
			DECORATOR::DECOR_REMOVE(PLAYER::PLAYER_PED_ID(), "Inspecting_Item");
		}
	}
}

int func_698(struct<2> Param0, var uParam2, float fParam3, float fParam4, int iParam5, int iParam6)
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

int func_699(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return -1806461473;
		case 3:
			return -694461623;
		case 1:
			return 1093870742;
		case 0:
			return 999150106;
		case 4:
			return 1098225713;
		case 5:
			return -1828192959;
		default:
			break;
	}
	return 0;
}

void func_700(int iParam0)
{
	if (func_275(iParam0) == 57)
	{
		MAP::_0x6786D7AFAC3162B3(-1145496915);
		MAP::_0x6786D7AFAC3162B3(-1043953850);
		MAP::_0x6786D7AFAC3162B3(-1783502982);
	}
	else if (MAP::_0xE38450DBCBC70E3D(iParam0, -1305340593) || MAP::_0xE38450DBCBC70E3D(iParam0, -1482012664))
	{
		MAP::_0x6786D7AFAC3162B3(iParam0);
	}
}

void func_701(int iParam0)
{
	char cVar0[64];
	char* sVar8;
	int iVar9;

	StringCopy(&cVar0, func_276(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_754(cVar0);
	iVar9 = MISC::GET_HASH_KEY(sVar8);
	if (MAP::_0xE38450DBCBC70E3D(iVar9, -1305340593) || MAP::_0xE38450DBCBC70E3D(iVar9, -1482012664))
	{
		MAP::_0x6786D7AFAC3162B3(iVar9);
	}
}

int func_702(int iParam0)
{
	if (!func_207(iParam0))
	{
		return 0;
	}
	if (func_457(iParam0))
	{
		return -1;
	}
	return (Global_23117[iParam0 /*11*/])->f_3;
}

int func_703(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	int iVar7;

	if (!func_461(iParam0))
	{
		return 0;
	}
	func_880(iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	fVar6 = ((((((BUILTIN::TO_FLOAT(iVar0) / 60f) + BUILTIN::TO_FLOAT(iVar1)) + (BUILTIN::TO_FLOAT(iVar2) * 60f)) + ((BUILTIN::TO_FLOAT(iVar3) * 24f) * 60f)) + (((BUILTIN::TO_FLOAT(iVar4) * 30.4375f) * 24f) * 60f)) + (((BUILTIN::TO_FLOAT(iVar5) * 365.25f) * 24f) * 60f));
	iVar7 = BUILTIN::ROUND(fVar6);
	return iVar7;
}

int func_704(int iParam0, int iParam1)
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

int func_705(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 675537701;
		case 1:
			return -1915988145;
		case 2:
			return 38535626;
		case 3:
			return 1904167574;
		case 4:
			return 244711249;
		case 5:
			return -1859792564;
		case 6:
			return -1808688941;
		case 7:
			return -736296038;
		case 8:
			return -909439131;
		case 9:
			return 1917744724;
		case 10:
			return 821748379;
		case 11:
			return 196685551;
		case 12:
			return 1983548039;
		case 15:
			return -1716084250;
		case 13:
			return 985737465;
		case 16:
			return 869827975;
		case 14:
			return -735550853;
		default:
			break;
	}
	return 1776960747;
}

int func_706()
{
	if (SCRIPTS::IS_THREAD_ACTIVE(((*Global_1347702)[59 /*49*/])->f_42, false) && !func_881(((*Global_1347702)[59 /*49*/])->f_13, 4))
	{
		return 1;
	}
	return 0;
}

int func_707(int iParam0)
{
	switch (func_27())
	{
		case -1:
			return (Global_40.f_4283.f_3 && iParam0) != 0;
	}
	return 0;
}

int func_708(int iParam0)
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
		iVar0 = func_512(iParam0);
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

int func_709()
{
	if (SCRIPTS::IS_THREAD_ACTIVE(((*Global_1347702)[66 /*49*/])->f_42, false) && !func_881(((*Global_1347702)[66 /*49*/])->f_13, 4))
	{
		return 1;
	}
	return 0;
}

int func_710()
{
	if (VOLUME::_0x92A78D0BEDB332A3(&(Global_1357549->f_1663[1])))
	{
		if (func_620(Global_35, &(Global_1357549->f_1663[1]), 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_711(int iParam0)
{
	if (Global_1327590->f_10 == 14)
	{
		return 1;
	}
	return 0;
}

int func_712()
{
	return 0;
}

int func_713(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	fVar3 = func_478();
	if (fVar3 < 30f)
	{
		iVar1 = 0;
	}
	else if (fVar3 < 75f)
	{
		iVar1 = 1;
	}
	else
	{
		iVar1 = 2;
	}
	if (bParam2)
	{
		iVar0 = iParam1[iVar1];
	}
	else
	{
		iVar0 = iParam0[iVar1];
	}
	if (STREAMING::_IS_IMAP_ACTIVE(iVar0) == 0)
	{
		STREAMING::_REQUEST_IMAP(iVar0);
	}
	else
	{
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (iVar0 != iParam1[iVar2])
			{
				if (STREAMING::_IS_IMAP_ACTIVE(iParam1[iVar2]))
				{
					STREAMING::_REMOVE_IMAP(iParam1[iVar2]);
				}
			}
			if (iVar0 != iParam0[iVar2])
			{
				if (STREAMING::_IS_IMAP_ACTIVE(iParam0[iVar2]))
				{
					STREAMING::_REMOVE_IMAP(iParam0[iVar2]);
				}
			}
			func_882(iVar0);
			iVar2++;
		}
	}
	return iVar0;
}

int func_714()
{
	int iVar0;

	if (func_46(&Global_1898437) && func_111(&Global_1898437) == 1)
	{
		iVar0 = func_113(&Global_1898437);
		if ((func_560(iVar0) && SCRIPTS::DOES_SCRIPT_EXIST(&(((*Global_1835011)[iVar0 /*74*/])->f_22))) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(((*Global_1835011)[iVar0 /*74*/])->f_22))) > 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_715()
{
	int iVar0;

	if (func_357() == 6)
	{
		return 0;
	}
	if (func_576(((*Global_1347702)[68 /*49*/])->f_15))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_40.f_1094 - 1))
	{
		if (&Global_40.f_450[iVar0] == 68)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_716(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	var uVar9;

	if (!func_883(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_884(0) };
	Var0.f_4 = func_885(iParam1);
	Var5 = { func_886(iParam0, Var0, Var0.f_4, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var5))
	{
		return 0;
	}
	uVar9 = INVENTORY::_0xC97E0D2302382211(func_887(0), &Var5, 0);
	return uVar9;
}

bool func_717(int iParam0)
{
	return (Global_1357549->f_1885 == iParam0 && !func_888(&(Global_1357549->f_1901)));
}

void func_718(int iParam0)
{
	STREAMING::_REQUEST_IMAP(iParam0);
}

bool func_719(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_883(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_889(iParam0);
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
		if (!func_890(iParam0, 1))
		{
			return false;
		}
	}
	return func_745(iParam0, 0, bParam2) >= iParam1;
}

int func_720(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 5:
				return Global_40.f_4283.f_320;
			default:
				break;
		}
	}
	switch (iParam0)
	{
		case 0:
			return Global_40.f_4283.f_313;
		case 1:
			return Global_40.f_4283.f_316;
		case 2:
			return Global_40.f_4283.f_317;
		case 12:
			return Global_40.f_4283.f_315;
		case 13:
			return Global_40.f_4283.f_314;
		case 14:
			return Global_40.f_4283.f_322;
		case 3:
			return Global_40.f_4283.f_318;
		case 4:
			return Global_40.f_4283.f_319;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 15:
			return Global_40.f_4283.f_321;
		default:
			break;
	}
	return 1;
}

void func_721(int iParam0, bool bParam1, int iParam2)
{
	switch (iParam0)
	{
		case -2000080725:
			if (bParam1)
			{
				*iParam2 = GRAPHICS::_0xFA50F79257745E74(701.0167f, -1247.185f, 43.9899f, 3f, 2, -1, 0);
			}
			else
			{
				GRAPHICS::_0x9CF1836C03FB67A2(iParam2, 0);
			}
			break;
	}
	switch (iParam0)
	{
		case -1563072795:
		case 607574432:
		case 825179479:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(-125.9479f, -39.4579f, 94.6035f, 4f);
			break;
		case -2016771661:
		case 202127432:
		case 2072112547:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(653.7093f, -1244.043f, 42.6971f, 4f);
			break;
		case -782359587:
		case 2728487:
		case 1674800958:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(660.9469f, -1255.986f, 42.7088f, 4f);
			break;
		case -1642249622:
		case 1084869405:
		case 1636281938:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(674.1929f, -1266.091f, 42.984f, 4f);
			break;
		case -1451784475:
		case 1028224932:
		case 1128417383:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(673.2328f, -1239.627f, 43.1471f, 4f);
			break;
		case -1123811713:
		case -546137515:
		case 1679038623:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(658.2036f, -1233.099f, 43.2507f, 4f);
			break;
		case -1279618207:
		case -751959361:
		case 1742990618:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(678.267f, -1251.873f, 43.0153f, 4f);
			break;
		case -1620486708:
		case -223906810:
		case 163126540:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(-118.3392f, -35.8852f, 94.7422f, 4f);
			break;
		case -379409079:
		case 1808508475:
		case 2015311123:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(-111.4885f, -39.7478f, 94.8525f, 4f);
			break;
		case -1920340119:
		case -1576393943:
		case -413795019:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(-123.9274f, -22.8559f, 95.0845f, 4f);
			break;
		case -1987982797:
		case -1933895237:
		case -104137172:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(-147.6751f, -24.5264f, 95.2101f, 4f);
			break;
		case -1426249148:
		case -182995231:
		case 1267297807:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(-142.3644f, -21.2133f, 95.0883f, 4f);
			break;
		case -638481378:
		case -621187540:
		case 1079213989:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(1880.102f, -1880.512f, 41.9323f, 4f);
			break;
		case -882188392:
		case 773757120:
		case 964593693:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(1870.625f, -1872.112f, 41.8191f, 4f);
			break;
		case -2147051362:
		case -997495998:
		case 266022415:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(1887.52f, -1880.757f, 41.9442f, 4f);
			break;
		case -1910456812:
		case -1115840558:
		case 1674493966:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(1877.485f, -1861f, 41.8078f, 4f);
			break;
	}
}

int func_722(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_40.f_4283.f_320;
		case 1:
			return Global_40.f_4283.f_318;
		case 2:
			return Global_40.f_4283.f_319;
	}
	return 1;
}

void func_723(bool bParam0)
{
	int iVar0;
	int iVar1[4];
	int iVar6;
	int iVar7;

	iVar0 = (func_720(3, 0) - 1);
	iVar1[0] = -916538063;
	iVar1[1] = -916538063;
	iVar1[2] = 110400393;
	iVar1[3] = 110400393;
	iVar6 = &iVar1[iVar0];
	if (bParam0)
	{
		if (STREAMING::_IS_IMAP_ACTIVE(iVar6) == 0)
		{
			STREAMING::_REQUEST_IMAP(iVar6);
		}
		iVar7 = 0;
		while (iVar7 < 4)
		{
			if (STREAMING::_IS_IMAP_ACTIVE(&(iVar1[iVar7])))
			{
				if (&iVar1[iVar7] != iVar6)
				{
					STREAMING::_REMOVE_IMAP(&(iVar1[iVar7]));
				}
			}
			iVar7++;
		}
	}
	else
	{
		iVar7 = 0;
		while (iVar7 < 4)
		{
			if (STREAMING::_IS_IMAP_ACTIVE(&(iVar1[iVar7])))
			{
				STREAMING::_REMOVE_IMAP(&(iVar1[iVar7]));
			}
			iVar7++;
		}
	}
}

void func_724(bool bParam0)
{
	int iVar0[3];
	int iVar4;

	if (bParam0)
	{
		iVar0[0] = -1370620659;
		iVar0[1] = -624219879;
		iVar0[2] = 715730031;
	}
	else
	{
		iVar0[0] = 5585502;
		iVar0[1] = -1362716862;
		iVar0[2] = 482931525;
	}
	iVar4 = 0;
	while (iVar4 < 3)
	{
		if (STREAMING::_IS_IMAP_ACTIVE(&(iVar0[iVar4])))
		{
			if (&iVar0[iVar4] != func_712())
			{
				STREAMING::_REMOVE_IMAP(&(iVar0[iVar4]));
			}
		}
		iVar4++;
	}
}

void func_725()
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_1357549->f_1674))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1357549->f_1674))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1357549->f_1674, true, false);
		}
		if (ENTITY::IS_ENTITY_DEAD(Global_1357549->f_1674) == 0)
		{
			VEHICLE::DELETE_VEHICLE(&(Global_1357549->f_1674));
		}
	}
}

void func_726(var uParam0)
{
}

var func_727(var uParam0)
{
	return uParam0;
}

char* func_728(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "DUTCH";
		case 3:
			return "BILL";
		case 1:
			return "JOHN";
		case 2:
			return "JAVIER";
		case 4:
			return "UNCLE";
		case 5:
			return "HOSEA";
		case 6:
			return "MICAH";
		case 7:
			return "CHARLES";
		case 8:
			return "SEAN";
		case 9:
			return "LENNY";
		case 13:
			return "ABIGAIL";
		case 10:
			return "KIERAN";
		case 14:
			return "JACK";
		case 15:
			return "MARYBETH";
		case 16:
			return "MOLLY";
		case 17:
			return "PEARSON";
		case 18:
			return "STRAUSS";
		case 19:
			return "GRIMSHAW";
		case 20:
			return "KAREN";
		case 21:
			return "SWANSON";
		case 22:
			return "TILLY";
		case 23:
			return "TRELAWNY";
		case 11:
			return "SADIE";
		case 24:
			return "CLEET";
		case 25:
			return "JOE";
		case 26:
			return "EAGLEFLIES";
		case 12:
			return "DOG";
		default:
			break;
	}
	return "Companion unknown";
}

char* func_729(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Morning";
		case 1:
			return "Day";
		case 2:
			return "LongDay";
		case 3:
			return "Afternoon";
		case 4:
			return "Evening";
		case 5:
			return "Night";
		default:
			break;
	}
	return "";
}

int func_730(int iParam0)
{
	int iVar0;

	iVar0 = func_741(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_891(iVar0);
}

int func_731(int iParam0, int iParam1)
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
			func_892(iVar2);
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

void func_732()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

void func_733(var uParam0, bool bParam1)
{
	if (*uParam0 != -1)
	{
		func_738(*uParam0, -1);
		func_739(*uParam0, 0);
		func_740(*uParam0, 0);
		if (MAP::DOES_BLIP_EXIST(&(Global_36307[*uParam0])))
		{
			if (bParam1)
			{
				MAP::SET_RADAR_ZOOM(&(Global_36307[*uParam0]));
			}
			MAP::REMOVE_BLIP(Global_36307[*uParam0]);
		}
	}
	*uParam0 = -1;
}

int func_734(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_36307)
	{
		return MAP::DOES_BLIP_EXIST(&(Global_36307[iParam0]));
	}
	return 0;
}

void func_735(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < Global_36307)
	{
		if (MAP::DOES_BLIP_EXIST(&(Global_36307[iParam0])))
		{
			MAP::_0xB059D7BD3D78C16F(&(Global_36307[iParam0]), iParam1);
		}
	}
}

int func_736(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 5;
		case 2:
			return 26;
		case 3:
			return 38;
		case 4:
			return 69;
		case 5:
			return 76;
		case 6:
			return 78;
		case 7:
			return 92;
		case 8:
			return 105;
		case 9:
			return 115;
		case 10:
			return 120;
		default:
			break;
	}
	return -1;
}

int func_737(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 1341870286;
		case 5:
			return -1706412559;
		case 26:
			return 279909480;
		case 38:
			return -412614304;
		case 69:
			return -653335484;
		case 76:
			return 1777802794;
		case 78:
			return 1088576970;
		case 92:
			return 412321676;
		case 105:
			return 1787788681;
		case 115:
			return 1635466279;
		case 120:
			return -410502938;
		case 4:
		case 9:
		case 22:
		case 37:
		case 43:
		case 58:
		case 71:
		case 79:
		case 98:
			return 7148155;
		default:
			break;
	}
	return 0;
}

void func_738(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/] = iParam1;
		return;
	}
	Global_42605[iParam0 /*4*/] = iParam1;
	return;
}

void func_739(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_40.f_7862[iParam0 /*4*/])->f_1 = iParam1;
		return;
	}
	(Global_42605[iParam0 /*4*/])->f_1 = iParam1;
	return;
}

void func_740(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_40.f_7862[iParam0 /*4*/])->f_2 = iParam1;
		return;
	}
	(Global_42605[iParam0 /*4*/])->f_2 = iParam1;
	return;
}

int func_741(int iParam0)
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

struct<2> func_742(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

int func_743(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 1:
			return 4;
		case 2:
			return 8;
		case 3:
			return 16;
		case 4:
			return 32;
		case 5:
			return 64;
		case 6:
			return 128;
		case 7:
			return 256;
		case 8:
			return 512;
		case 9:
			return 1024;
		case 10:
			return 2048;
		case 11:
			return 4096;
		case 12:
			return 8192;
		case 13:
			return 16384;
		case 14:
			return 32768;
		case 15:
			return 65536;
		case 16:
			return 131072;
		case 17:
			return 262144;
		case 18:
			return 524288;
		case 19:
			return 1048576;
		default:
			break;
	}
	return 1;
}

int func_744()
{
	return Global_40.f_8863.f_148;
}

int func_745(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_883(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_889(iParam0);
	if (iVar0 == 307971639 || (iParam1 && iVar0 == -427144552))
	{
		iVar1 = func_893(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_894(iParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_887(bParam2), iParam0, 0);
	return iVar2;
}

struct<2> func_746(var uParam0)
{
	struct<2> Var0;

	Var0.f_1 = uParam0;
	return Var0;
}

int func_747(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -707360575;
		case 1:
			return -1278339625;
		case 2:
			return 1880205078;
		case 3:
			return -1201174711;
		case 4:
			return 151582343;
		case 5:
			return 1231074654;
		case 6:
			return -642492359;
		case 7:
			return 1673898385;
		case 8:
			return 5171247;
		default:
			break;
	}
	return 0;
}

void func_748(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!func_46(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_576(iParam0) && !func_708(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_532(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_576(iParam0))
	{
		iParam2 = -1;
	}
	if (func_512(iParam0) == 3 || (func_512(iParam0) == 1 && STATS::_0x01F4D242765C6B24(func_532(iParam0))))
	{
		func_895(func_111(iParam0), func_532(iParam0), iParam2);
		if ((!func_46(Global_1572864->f_8) && !func_72(0, 1, 0)) && !func_77(&Global_1935630, 32768))
		{
			iVar0 = func_896(iParam0);
			if (iVar0 != -1)
			{
				func_6(0);
			}
			else if (func_111(iParam0) == 8)
			{
				iVar0 = func_897();
				if (iVar0 != -1)
				{
					func_6(0);
				}
			}
		}
	}
	func_898(iParam0, 0);
	if (func_76(0) == iParam0)
	{
		func_899(1);
		func_900(0);
		func_901(1);
	}
	func_902(iParam0, 1);
	func_903(iParam0);
}

int func_749(int iParam0)
{
	int iVar0;

	if (&Global_1898329 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (&Global_1898329 - 1))
	{
		if (Global_1898330[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_750(int iParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam3 = func_249(iParam0);
	*uParam1 = func_250(iParam0);
	*uParam2 = func_904(iParam0);
}

int func_751(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return 0;
	}
	return 1;
}

void func_752(int iParam0, int iParam1)
{
	if (!func_751(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0 /*5*/] = (Global_40.f_11029[iParam0 /*5*/] || iParam1);
}

int func_753(int iParam0)
{
	switch (iParam0)
	{
		case 675537701:
			return 0;
		case -1915988145:
			return 1;
		case 38535626:
			return 2;
		case 1904167574:
			return 3;
		case 244711249:
			return 4;
		case -1859792564:
			return 5;
		case -1808688941:
			return 6;
		case -736296038:
			return 7;
		case -909439131:
			return 8;
		case 1917744724:
			return 9;
		case 821748379:
			return 10;
		case 196685551:
			return 11;
		case 1983548039:
			return 12;
		case 985737465:
			return 13;
		case -735550853:
			return 14;
		case -1716084250:
			return 15;
		case 869827975:
			return 16;
		default:
			break;
	}
	return -1;
}

char* func_754(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

int func_755(int iParam0)
{
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return -1;
	}
	return &(Global_1899528->f_11[iParam0]);
}

int func_756(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_755(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	iVar1 = func_905(iVar0);
	if (iVar1 == -1)
	{
		return 0;
	}
	if (func_906(iParam0))
	{
		return 1;
	}
	func_907(iParam0);
	if (VOLUME::_0x92A78D0BEDB332A3((Global_1392915->f_121[iVar0 /*20*/])->f_7))
	{
		VOLUME::_0x43F867EF5C463A53((Global_1392915->f_121[iVar0 /*20*/])->f_7);
	}
	if (VOLUME::_0x92A78D0BEDB332A3((Global_1392915->f_121[iVar0 /*20*/])->f_8))
	{
		VOLUME::_0x43F867EF5C463A53((Global_1392915->f_121[iVar0 /*20*/])->f_8);
	}
	(Global_1392915->f_121[iVar0 /*20*/])->f_1 = 0;
	func_908(iVar0);
	iVar2 = func_749(((*Global_1392915)[iVar0 /*12*/])->f_4);
	if (iVar2 != -1)
	{
		if (iParam1 == 1)
		{
			func_530(((*Global_1392915)[iVar0 /*12*/])->f_4);
		}
		if (MAP::DOES_BLIP_EXIST(Global_1898346[iVar2 /*6*/]))
		{
			MAP::REMOVE_BLIP((*Global_1898346)[iVar2 /*6*/]);
		}
		func_909(iVar2, 0);
		return 1;
	}
	return 0;
}

void func_757(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = Global_1392915[iParam0 /*12*/];
	if (func_910(iParam0))
	{
		return;
	}
	if (func_46(((*Global_1392915)[iParam0 /*12*/])->f_4))
	{
		func_748(((*Global_1392915)[iParam0 /*12*/])->f_4, 1, 2);
	}
	((*Global_1392915)[iParam0 /*12*/])->f_1 = -1;
	func_767(iVar0, -1);
}

void func_758(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = Global_1392915[iParam1 /*12*/];
	if (!func_911(iVar0))
	{
		return;
	}
	if (func_734(&(uParam0->f_34[iVar0])))
	{
		func_733(uParam0->f_34[iVar0], 1);
		uParam0->f_34[iVar0] = -1;
		(*uParam0)[iVar0] = 0;
	}
}

void func_759(int iParam0)
{
	func_912((*Global_1392915)[iParam0 /*12*/]);
	func_913(Global_1392915->f_121[iParam0 /*20*/]);
}

bool func_760(var uParam0)
{
	return (Global_1935630 && uParam0) != 0;
}

bool func_761(int iParam0)
{
	return (MISC::GET_GAME_TIMER() - iParam0) < &Global_1898438;
}

int func_762(int iParam0)
{
	return (Global_1898164->f_1[iParam0 /*5*/])->f_2;
}

int func_763(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return 0;
	}
	return 1;
}

bool func_764(int iParam0, int iParam1)
{
	return (func_763(iParam0) && (((*Global_1898346)[iParam0 /*6*/])->f_1 && iParam1) != 0);
}

bool func_765(int iParam0)
{
	if (!func_914(iParam0))
	{
		return false;
	}
	return (!func_58() || MISC::IS_BIT_SET(Global_40.f_7854, iParam0));
}

int func_766(int iParam0)
{
	int iVar0;

	*iParam0 = -1;
	iVar0 = 0;
	while (iVar0 < &Global_1392915)
	{
		if (func_910(iVar0))
		{
			*iParam0 = iVar0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_767(int iParam0, int iParam1)
{
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return;
	}
	Global_1899528->f_11[iParam0] = iParam1;
}

bool func_768(int iParam0, int iParam1)
{
	return (Global_1899528->f_3[iParam0] && iParam1) != 0;
}

void func_769(int iParam0)
{
	Global_1899528->f_3[iParam0] = 0;
}

int func_770(int iParam0, int iParam1)
{
	return func_114(iParam0, iParam1, 4, MISC::GET_HASH_KEY(func_915(iParam1)));
}

void func_771(int iParam0, int iParam1)
{
	if (!func_768(iParam0, iParam1))
	{
	}
	Global_1899528->f_3[iParam0] = (Global_1899528->f_3[iParam0] || iParam1);
}

bool func_772(int iParam0)
{
	return func_293(iParam0) == 0;
}

int func_773(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<6> Var3;

	if (&Global_1898329 == 15)
	{
		return -1;
	}
	if (!func_772(iParam0))
	{
		return -1;
	}
	if (func_27() != -1)
	{
		iVar2 = func_749(iParam0);
		if (iVar2 >= 0)
		{
			func_916(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar1 = &Global_1898329;
			(*Global_1898330)[iVar1] = iParam0;
			*((*Global_1898346)[iVar1 /*6*/]) = { Var3 };
			func_531(iVar1, 1);
			func_916(iParam0, 1);
			Global_1898329 = &Global_1898329 + 1;
			if (&Global_1898329 > 15)
			{
				Global_1898329 = 15;
			}
			return iVar1;
		}
	}
	else
	{
		iVar2 = func_749(iParam0);
		if (iVar2 >= 0)
		{
			func_916(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < &Global_1898330)
			{
				if (!func_46(Global_1898330[iVar0]))
				{
					(*Global_1898330)[iVar0] = iParam0;
					*((*Global_1898346)[iVar0 /*6*/]) = { Var3 };
					func_531(iVar0, 1);
					func_916(iParam0, 1);
					Global_1898329 = &Global_1898329 + 1;
					if (&Global_1898329 > 15)
					{
						Global_1898329 = 15;
					}
					return iVar0;
				}
				iVar0++;
			}
		}
	}
	return -1;
}

int func_774(int iParam0)
{
	int iVar0;

	iVar0 = func_564(iParam0);
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

bool func_775(int iParam0)
{
	return iParam0 != 0;
}

void func_776(struct<4> Param0)
{
	int iVar0;
	int iVar1;

	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_581(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1 /*4*/] == Param0 && (Global_1946804->f_769[iVar1 /*4*/])->f_2 == Param0.f_2) && (Global_1946804->f_769[iVar1 /*4*/])->f_3 == Param0.f_3) && (Global_1946804->f_769[iVar1 /*4*/])->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1 /*4*/] == 34 && func_581(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_582(Param0);
	*(Global_1946804->f_769[Global_1946804->f_854 /*4*/]) = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_364(8);
}

void func_777(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		PED::_0x2B4CE170DE09F346(Global_35, iParam0);
	}
	func_371(iParam0, 0);
}

int func_778(int iParam0)
{
	if (!func_562(iParam0))
	{
		return 0;
	}
	if (!func_336(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

int func_779()
{
	if (func_27() != 0)
	{
		return 1;
	}
	return 1;
}

int func_780(vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 51)
	{
		if (func_440(vParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

char* func_781(int iParam0)
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

int func_782(int iParam0)
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

char* func_783(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_784()
{
	int iVar0;

	if (func_27() == 0)
	{
		return -1;
	}
	iVar0 = func_897();
	if (iVar0 == -1)
	{
		return 150000;
	}
	if (iVar0 <= 1)
	{
		return 30000;
	}
	if (iVar0 == 2 && !func_70(24))
	{
		return 50000;
	}
	return 150000;
}

int func_785()
{
	return Global_1934266->f_4;
}

void func_786(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			_NAMESPACE84::_0x74BCCEB233AD95B2(-1743273232, iParam1);
			break;
		case 1:
			_NAMESPACE84::_0x74BCCEB233AD95B2(-948016518, iParam1);
			break;
		case 2:
			_NAMESPACE84::_0x74BCCEB233AD95B2(580522491, iParam1);
			break;
		case 3:
			_NAMESPACE84::_0x74BCCEB233AD95B2(1176390239, iParam1);
			break;
		case 4:
			_NAMESPACE84::_0x74BCCEB233AD95B2(1791198853, iParam1);
			break;
		default:
			break;
	}
}

void func_787(int iParam0)
{
	int iVar0;

	iVar0 = func_917(iParam0);
	switch (iParam0)
	{
		case 0:
			_NAMESPACE84::_0x74BCCEB233AD95B2(-1047841819, iVar0);
			break;
		case 1:
			_NAMESPACE84::_0x74BCCEB233AD95B2(-1349566727, iVar0);
			break;
		case 2:
			_NAMESPACE84::_0x74BCCEB233AD95B2(613491521, iVar0);
			break;
		case 3:
			_NAMESPACE84::_0x74BCCEB233AD95B2(1452147132, iVar0);
			break;
		case 4:
			_NAMESPACE84::_0x74BCCEB233AD95B2(-885198919, iVar0);
			break;
		default:
			break;
	}
}

void func_788(int iParam0, bool bParam1)
{
	if (!func_104(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_451(iParam0, 4);
	}
	else
	{
		func_452(iParam0, 4);
	}
	func_918(iParam0, bParam1);
}

bool func_789(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 16);
}

bool func_790(int iParam0)
{
	return iParam0 != 0;
}

bool func_791(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_792(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
	return 1;
}

int func_793(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1[5];
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;

	if (!func_613(iParam0))
	{
		return 0;
	}
	iVar0 = CLOCK::GET_CLOCK_HOURS() + 1;
	if (iVar0 == 25)
	{
		iVar0 = 0;
	}
	iVar7 = 0;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 1:
					if (func_172(((*Global_1835011)[4 /*74*/])->f_1, 1))
					{
						iVar1[0] = -695701225;
					}
					else
					{
						iVar1[0] = 404503428;
					}
					break;
				default:
					iVar1[0] = 178615350;
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar1[3] = 1818898449;
					iVar7 = 4;
					break;
				case 1:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = 1818898449;
					iVar7 = 3;
					break;
				case 3:
					if (func_919(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar1[2] = -1862464078;
						iVar7 = 3;
					}
					if (!bParam2)
					{
						iVar1[0] = -268604689;
					}
					break;
				case 4:
					iVar1[0] = -268604689;
					break;
				case 5:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 6:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar1[3] = 1818898449;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = -268604689;
					iVar1[0] = -1632589543;
					iVar1[1] = 1818898449;
					iVar7 = 3;
					break;
				case 8:
					iVar1[0] = -268604689;
					break;
				case 9:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 10:
					if (func_172(((*Global_1347702)[63 /*49*/])->f_15, 1) || func_576(((*Global_1347702)[63 /*49*/])->f_15))
					{
						iVar1[0] = -268604689;
					}
					else
					{
						iVar1[0] = -310473775;
					}
					break;
				case 11:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 13:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 14:
					iVar1[0] = -268604689;
					break;
				case 15:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 16:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 17:
					if (func_919(iVar0, 9, 12))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar1[2] = -1862464078;
						iVar7 = 3;
					}
					else
					{
						iVar1[0] = -268604689;
					}
					break;
				case 18:
					if (!func_172(((*Global_1835011)[14 /*74*/])->f_1, 1))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar7 = 2;
					}
					else if (func_619(18, 134217728, 1))
					{
						iVar1[0] = 961676983;
					}
					else
					{
						iVar1[0] = -1587546924;
					}
					break;
				case 19:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -23947011;
					iVar7 = 3;
					break;
				default:
					iVar1[0] = -268604689;
					break;
			}
			break;
		case 2:
		case 3:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 1:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 3:
					if (func_919(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -922193456;
						iVar1[1] = -2040275819;
						iVar1[2] = -1114682645;
						iVar1[3] = -1414977761;
						iVar7 = 4;
					}
					if (!bParam2)
					{
						iVar1[0] = -922193456;
					}
					break;
				case 4:
					iVar1[0] = -922193456;
					break;
				case 5:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 6:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 8:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 9:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar1[4] = 1744281750;
					iVar7 = 5;
					break;
				case 10:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 11:
					if (func_172(((*Global_1347702)[134 /*49*/])->f_15, 1) || func_576(((*Global_1347702)[134 /*49*/])->f_15))
					{
						iVar1[0] = -2040275819;
						iVar1[1] = 1205492208;
						iVar7 = 2;
					}
					else
					{
						iVar1[0] = -922193456;
					}
					break;
				case 13:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 14:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 15:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 16:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 17:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 18:
					iVar1[0] = -922193456;
					break;
				case 19:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -922193456;
					iVar1[1] = 1744281750;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 1744281750;
					iVar7 = 3;
					break;
				case 26:
					iVar1[0] = -268604689;
					break;
				default:
					iVar1[0] = -922193456;
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 2:
					if (func_172(((*Global_1835011)[38 /*74*/])->f_1, 1))
					{
						iVar1[0] = -1559986688;
					}
					else
					{
						iVar1[0] = -1874208704;
					}
					break;
				default:
					iVar1[0] = 1593315648;
					break;
			}
			break;
		case 5:
		case 6:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 1:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 3:
					if (func_919(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -922193456;
						iVar1[1] = -2040275819;
						iVar1[2] = -1114682645;
						iVar1[3] = -1414977761;
						iVar7 = 4;
					}
					if (!bParam2)
					{
						iVar1[0] = -922193456;
					}
					break;
				case 4:
					iVar1[0] = -922193456;
					break;
				case 6:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = 1295334688;
					iVar7 = 1;
					break;
				case 11:
					iVar1[0] = -2051275045;
					break;
				case 13:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 14:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 15:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 16:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 17:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 18:
					iVar1[0] = -922193456;
					break;
				case 19:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -922193456;
					iVar1[1] = 1744281750;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 1744281750;
					iVar7 = 3;
					break;
				case 26:
					iVar1[0] = -268604689;
					break;
				default:
					iVar1[0] = -922193456;
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 13:
					iVar1[0] = -1341683964;
					iVar1[1] = 876797088;
					iVar7 = 2;
					break;
				case 14:
					iVar1[0] = -426171916;
					iVar1[1] = 1484386316;
					iVar1[2] = 1254970547;
					iVar7 = 3;
					break;
				case 4:
					if (func_920(747937920, 1) && !func_172(((*Global_1347702)[1 /*49*/])->f_15, 1))
					{
						iVar1[0] = -1155031950;
					}
					else
					{
						iVar1[0] = -1341683964;
					}
					break;
				default:
					iVar1[0] = -1341683964;
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 13:
					iVar1[0] = -1341683964;
					iVar1[1] = 876797088;
					iVar1[2] = 1484386316;
					iVar7 = 3;
					break;
				case 14:
					iVar1[0] = -1092189504;
					iVar1[1] = 80515440;
					iVar7 = 2;
					break;
				case 4:
					iVar1[0] = -1341683964;
					iVar1[1] = 867156718;
					iVar7 = 2;
					break;
				case 7:
					iVar1[0] = -1341683964;
					iVar1[1] = 1484386316;
					iVar7 = 2;
					break;
				default:
					iVar1[0] = -1341683964;
					break;
			}
			break;
	}
	if (iParam3 && ENTITY::DOES_ENTITY_EXIST(func_402(iParam0)))
	{
		iVar10 = 0;
		while (iVar10 < iVar7)
		{
			if (&iVar1[iVar10] == (Global_40.f_4942[iParam0 /*60*/])->f_3)
			{
				bVar9 = true;
				iVar8 = (Global_40.f_4942[iParam0 /*60*/])->f_3;
			}
			iVar10++;
		}
	}
	if (!bVar9)
	{
		iVar11 = 0;
		if (iVar7 > 0 && bParam2)
		{
			iVar11 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar7);
		}
		iVar8 = &iVar1[iVar11];
	}
	if (!func_630(iParam0, iVar8))
	{
		iVar8 = (Global_40.f_4942[iParam0 /*60*/])->f_3;
	}
	return iVar8;
}

int func_794(int iParam0)
{
	switch (iParam0)
	{
		case -1205468859:
		case -946772361:
		case -445211559:
		case 1744281750:
			return 1;
		default:
			break;
	}
	return 0;
}

struct<7> func_795(int iParam0, int iParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, var uParam8, bool bParam9)
{
	struct<7> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_3 = { vParam2 };
	Var0.f_2 = uParam8;
	Var0.f_6 = 0;
	if (bParam5)
	{
		MISC::SET_BIT(&(Var0.f_6), 0);
	}
	if (bParam6)
	{
		MISC::SET_BIT(&(Var0.f_6), 1);
	}
	if (bParam7)
	{
		MISC::SET_BIT(&(Var0.f_6), 2);
	}
	if (bParam9)
	{
		MISC::SET_BIT(&(Var0.f_6), 3);
	}
	return Var0;
}

void func_796(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_613(iParam0))
	{
		return;
	}
	iVar0 = func_402(iParam0);
	func_921(iVar0);
	func_623(iParam0, 60, 1);
	if (bParam1)
	{
		func_922(iParam0);
	}
}

void func_797(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_613(iParam0))
	{
		return;
	}
	iVar0 = func_402(iParam0);
	func_923(iVar0);
	func_622(iParam0, 60, 1);
	if (bParam1)
	{
		func_924(iParam0);
	}
}

void func_798(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_613(iParam0))
	{
		return;
	}
	iVar0 = func_402(iParam0);
	func_925(iVar0);
	if (iParam0 == 14)
	{
		func_926(iVar0);
	}
	func_623(iParam0, 61, 1);
	if (bParam1)
	{
		func_927(iParam0);
	}
}

void func_799(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_613(iParam0))
	{
		return;
	}
	iVar0 = func_402(iParam0);
	func_928(iVar0);
	func_622(iParam0, 61, 1);
	if (bParam1)
	{
		func_929(iParam0);
	}
}

int func_800(var uParam0)
{
	return uParam0;
}

bool func_801(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return PED::_0x772A1969F649E902(iVar0);
}

int func_802(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (PED::_0x34D6AC1157C8226C(iParam0, -1805387726))
	{
		return 1;
	}
	return 0;
}

bool func_803(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_613(iParam0))
	{
		return false;
	}
	func_930(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(((*Global_1360165)[iParam0 /*1157*/])->f_65[iVar0]), iVar1);
}

int func_804(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

int func_805(int iParam0, int iParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case 178615350:
			return 331645018;
		case 2094043703:
			return -1395382793;
		case -695701225:
			return -1090160065;
		case 404503428:
			return -1704514526;
		case -1268239471:
			return -1832874334;
		case -1874208704:
			return 1680324116;
		case 1593315648:
			return 989578874;
		case -1559986688:
			return 174754238;
		case 1071744295:
			return -2065784734;
		case 977450639:
			return 2111449038;
		case 1901494236:
			return 1245083301;
		case 713940276:
			return -1949892659;
		case 1744281750:
			return -663077666;
		case 283037683:
			return 1996046145;
		case -2051275045:
			return -306710010;
		case 1495063555:
			return -339275545;
		case 1046468203:
			return 393090546;
		case 1018353621:
			return 114272443;
		case -433615745:
			return 643643053;
		case 777603945:
			return -328334844;
		case -1668922931:
			return -1915831038;
		case -1341683964:
			return 1689938120;
		case 928493661:
			return 861275228;
		case 431390894:
			return -20643141;
		case -301101630:
			return -1187204983;
		case -1155031950:
			return 1883650185;
		case -1248623443:
			return -1437962122;
		case 350498312:
			return 1959714099;
		case -481967001:
			return 1833893952;
		case 513932985:
			return 505715365;
		case -193269670:
			return -1774801049;
		case -1684458716:
			return 1976273473;
		case -973332710:
			return -2045878709;
		case 1658153743:
			return -2072429185;
		case 1842975347:
			return 491764525;
		case -1678882891:
			return -1638703055;
		case -268604689:
			return -1496612359;
		case 1818898449:
			return 30596609;
		case -922193456:
			switch (iParam1)
			{
				case 24:
				case 25:
					return 41788943;
				default:
					break;
			}
			return -99272505;
		case 1205492208:
			return 1598276604;
		case 1199580439:
			return -1443192745;
		case -310473775:
			return -877585857;
		case -1632589543:
			return 1052055818;
		case -1862464078:
			return 1895628185;
		case 296923297:
			iVar0 = func_931(296923297, iParam1);
			return func_932(iVar0);
		case -2040275819:
			return 464906090;
		case -1114682645:
			return 744097966;
		case -1414977761:
			return 1059434053;
		case 1237718549:
			iVar0 = func_931(1237718549, iParam1);
			return func_932(iVar0);
		case -23947011:
			return -456769142;
		case 1295334688:
			return 869636257;
		case 1200878026:
			return 1560123389;
		case -1692022104:
			return -1851470579;
		case 707545953:
			return 890352471;
		case -1532979576:
			return 1391951221;
		case -1642335258:
			return -1491647079;
		case 876797088:
			return 1309207681;
		case -1587546924:
			return -1303789247;
		case 961676983:
			return -1527307534;
		case 1300659195:
			return -309158751;
		case -571427255:
			return -251280159;
		case 837028314:
			return -20984612;
		case -1394723994:
			return -1857650992;
		case -1335291723:
			return -1120526485;
		case -445211559:
			return -757536090;
		case -946772361:
			return 646599895;
		case 1950972546:
			return -1699183538;
		case -1092189504:
			return 389057251;
		case 80515440:
			return -2137653778;
		case 6418928:
			return -211106360;
		case -1648322231:
			return 1074183062;
		case -1065026089:
			return 1087308308;
		case 2062813606:
			return 1709174532;
		case 876535472:
			return -1916145078;
		case -1205468859:
			return -757536090;
		case 1484386316:
			return -800489594;
		case 1254970547:
			return -211106360;
		case 867156718:
			return 241911854;
		case -426171916:
			return 41788943;
	}
	return 41788943;
}

bool func_806(int iParam0, int iParam1)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	bVar0 = PED::_DOES_METAPED_OUTFIT_EXIST_FOR_PED_MODEL(iParam1, ENTITY::GET_ENTITY_MODEL(iParam0));
	if (bVar0)
	{
	}
	return bVar0;
}

int func_807(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return 0;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request_name");
	if (iVar0 == iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_808(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return false;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request_name");
	if (!func_806(iParam0, iVar0))
	{
		return true;
	}
	if (iVar0 != iParam1)
	{
		return false;
	}
	iVar1 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request");
	return PED::_0x610438375E5D1801(iVar1);
}

void func_809(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

void func_810(int iParam0, int iParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) || ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (PED::_0xFB4891BD7578CDC1(iParam1, 1933068772))
	{
		PED::_0xD710A5007C2AC539(iParam1, 1933068772, 1);
	}
	if (PED::_0xFB4891BD7578CDC1(iParam1, 494009478))
	{
		PED::_0xD710A5007C2AC539(iParam1, 494009478, 1);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 1 > 0 && func_806(iParam1, 860729266))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 860729266);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 4096 > 0 && func_806(iParam1, 879715242))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 879715242);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 128 > 0 && func_806(iParam1, 1606325429))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1606325429);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 256 > 0 && func_806(iParam1, 1743550585))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1743550585);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 512 > 0 && func_806(iParam1, 1064646155))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1064646155);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 1024 > 0 && func_806(iParam1, -536694793))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -536694793);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 2048 > 0 && func_806(iParam1, -1304053509))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -1304053509);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & -2147483648 > 0 && func_806(iParam1, 718939204))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 718939204);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 65536 > 0 && func_806(iParam1, -972364774))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -972364774);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 16384 > 0 && func_806(iParam1, -1100875244))
	{
		if (PED::_0xFB4891BD7578CDC1(iParam1, -134124598))
		{
			PED::_0xD710A5007C2AC539(iParam1, -134124598, 1);
		}
		if (PED::_0xFB4891BD7578CDC1(iParam1, 2071466316))
		{
			PED::_0xD710A5007C2AC539(iParam1, 2071466316, 1);
		}
		PED::_0x1902C4CFCC5BE57C(iParam1, -1100875244);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 262144 > 0 && func_806(iParam1, 1153596794))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1153596794);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 524288 > 0 && func_806(iParam1, 1016389820))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1016389820);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 1048576 > 0 && func_806(iParam1, -726966617))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -726966617);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 2097152 > 0 && func_806(iParam1, 1365901568))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1365901568);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 32768 > 0 && func_806(iParam1, -1658942149))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -1658942149);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 131072 > 0 && func_806(iParam1, -1980913856))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -1980913856);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 4194304 > 0 && func_806(iParam1, 491764525))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 491764525);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 8388608 > 0 && func_806(iParam1, -76015264))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -76015264);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 16777216 > 0 && func_806(iParam1, 622113465))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 622113465);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 33554432 > 0 && func_806(iParam1, 781533162))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 781533162);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 67108864 > 0 && func_806(iParam1, -271415321))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -271415321);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 134217728 > 0 && func_806(iParam1, -1683207356))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -1683207356);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 268435456 > 0 && func_806(iParam1, -254794762))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -254794762);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 536870912 > 0 && func_806(iParam1, 609066278))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 609066278);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 1073741824 > 0 && func_806(iParam1, -1712783565))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -1712783565);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 8192 > 0 && func_806(iParam1, 1544915253))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1544915253);
	}
	if (bParam2)
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_57 = 1;
	}
}

void func_811(int iParam0)
{
	func_933(iParam0, 1);
	func_933(iParam0, 128);
	func_933(iParam0, 256);
	func_933(iParam0, 512);
	func_933(iParam0, 1024);
	func_933(iParam0, 2048);
	func_933(iParam0, 4096);
	func_933(iParam0, 65536);
	func_933(iParam0, 16384);
	func_933(iParam0, 262144);
	func_933(iParam0, 524288);
	func_933(iParam0, 1048576);
	func_933(iParam0, 2097152);
	func_933(iParam0, 32768);
	func_933(iParam0, 131072);
	func_933(iParam0, 134217728);
	func_933(iParam0, 1073741824);
}

void func_812(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		return;
	}
	if (!bParam1)
	{
		if (DECORATOR::DECOR_EXIST_ON(Global_1360165[iParam0 /*1157*/], "wearing_bandana"))
		{
			DECORATOR::DECOR_REMOVE(Global_1360165[iParam0 /*1157*/], "wearing_bandana");
		}
	}
	else if (!DECORATOR::DECOR_EXIST_ON(Global_1360165[iParam0 /*1157*/], "wearing_bandana"))
	{
		DECORATOR::DECOR_SET_BOOL(Global_1360165[iParam0 /*1157*/], "wearing_bandana", true);
	}
}

void func_813(var uParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
		*uParam0 = (*uParam0 || uParam1);
	}
	else
	{
		*uParam0 = (*uParam0 - (*uParam0 && uParam1));
	}
}

bool func_814(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char cVar5[128];
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	float fVar25;

	if (!bParam12 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	switch (iParam1)
	{
		case -1212426201:
		case -1101297303:
		case -594562071:
		case 416676503:
		case 860033945:
		case 970310034:
			bVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(bVar0))
			{
				bVar0 = joaat("weapon_unarmed");
			}
			break;
		default:
			if (!WEAPON::IS_WEAPON_VALID(iParam1))
			{
				return iParam1;
			}
			bVar0 = iParam1;
			if ((WEAPON::_0x705BE297EEBDB95D(bVar0) || WEAPON::_0x959383DCD42040DA(bVar0)) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == 1030835986)
			{
				StringCopy(&cVar5, WEAPON::_0x89CF5FF3D363311E(bVar0), 128);
				iVar2 = WEAPON::_0xD42514C182121C23(ENTITY::GET_ENTITY_MODEL(iParam0));
				if (!Global_43890 && MISC::_DOES_STRING_EXIST_IN_STRING(&cVar5, "_DUALWIELD"))
				{
					StringCopy(&cVar5, HUD::_0x806862E5D266CF38(&cVar5, 0, (HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar5) - HUD::GET_LENGTH_OF_LITERAL_STRING("_DUALWIELD"))), 128);
					iVar3 = MISC::GET_HASH_KEY(&cVar5);
					if (func_934(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
					{
						bVar21 = true;
					}
				}
				if (!bVar21)
				{
					iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(bVar0);
					if (iVar1 != 0 && iVar2 != 0)
					{
						iVar4 = WEAPON::_0x9EEFD670F10656D7(iVar2, iVar1);
						if (!Global_43890)
						{
							if (func_934(iVar4) && iVar4 != bVar0)
							{
								bVar0 = iVar4;
							}
						}
						else if (iVar4 == bVar0)
						{
						}
					}
				}
			}
			break;
	}
	if (func_27() == -1 && !func_935(bVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, bVar0, 0, 0) && iParam0 != Global_35)
		{
			bVar22 = true;
		}
		else if (((iVar4 == bVar0 && !Global_43890) && iParam0 != Global_35) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == 1030835986)
		{
			bVar22 = true;
		}
		else
		{
			bVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(bVar0))
			{
				bVar0 = joaat("weapon_unarmed");
			}
		}
	}
	if (bVar0 == joaat("weapon_unarmed") && iParam1 == joaat("weapon_unarmed"))
	{
		return bVar0;
	}
	else if (bVar0 == joaat("weapon_unarmed"))
	{
		switch (iParam1)
		{
			case -1101297303:
			case 416676503:
				bVar0 = joaat("weapon_revolver_cattleman");
				break;
			case -1212426201:
			case -594562071:
			case 860033945:
			case 970310034:
				if (func_935(joaat("weapon_repeater_carbine")))
				{
					bVar0 = joaat("weapon_repeater_carbine");
				}
				else
				{
					bVar0 = joaat("weapon_revolver_cattleman");
				}
				break;
			default:
				bVar0 = joaat("weapon_revolver_cattleman");
				break;
		}
	}
	else if (bVar0 == joaat("weapon_melee_lantern") && iParam0 == Global_35)
	{
		bVar0 = joaat("weapon_melee_davy_lantern");
	}
	if (iParam9 < 0)
	{
		if (iParam0 != Global_35 && func_934(bVar0))
		{
			WEAPON::GET_MAX_AMMO(iParam0, &iParam9, bVar0);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else if ((!WEAPON::_0x959383DCD42040DA(bVar0) && bVar0 != joaat("weapon_unarmed")) && !WEAPON::_0x79407D33328286C6(bVar0))
		{
			iVar23 = WEAPON::GET_PED_AMMO_BY_TYPE(iParam0, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(iParam0, bVar0));
			iVar24 = WEAPON::_0xD3750CCC00635FC2(bVar0) * 3;
			iParam9 = (iVar24 - iVar23);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else
		{
			iParam9 = 0;
		}
	}
	if (iParam6 && bParam2)
	{
		bParam5 = false;
	}
	if (iParam0 == Global_35)
	{
		func_936(bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_937(iParam0, &bVar0, &fVar25);
		bVar0 = WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_938(bVar0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, bParam3, bVar0);
		}
	}
	else if (bParam10)
	{
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), bVar0, iParam4);
	}
	return bVar0;
}

void func_815(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_612() - fParam1);
	func_939(uParam0, 1);
	func_940(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_816(vector3 vParam0, var uParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
{
	var uVar0;

	vParam0.f_2 = iParam5;
	uVar0 = *uParam6;
	if (DATAFILE::_DATAFILE_GET_HASH(&uVar0, &vParam0))
	{
		*uParam6 = uVar0;
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_817(int iParam0)
{
	switch (iParam0)
	{
		case 1928985868:
			return 7;
		case 1784174017:
			return 8;
		case 1763160914:
			return 10;
		case 2051438686:
			return 11;
		case 1155669136:
			return 1;
		case 1871598:
			return 9;
		case -1379218218:
			return 6;
		case 1059981727:
			return 2;
		case -1216736853:
			return 4;
		case 1191674135:
			return 3;
		case -112322057:
			return 12;
		case -823778732:
			return 25;
		case 1338623152:
			return 16;
		case 1401247110:
			return 20;
		case 1007627076:
			return 13;
		case 864606355:
			return 31;
		case 1338525796:
			return 18;
		case -2076625074:
			return 26;
		case -288774278:
			return 15;
		case 1934998953:
			return 14;
		case -1148482643:
			return 32;
		case 603776282:
			return 22;
		case 1339344423:
			return 27;
		case 1562395675:
			return 19;
		case 1316832864:
			return 28;
		case -1619448191:
			return 29;
		case -520130198:
			return 24;
		case 1418253584:
			return 30;
		case -348149883:
			return 33;
		case 814591385:
			return 34;
		case 981348373:
			return 17;
		case -1100417366:
			return 35;
		case 1438856241:
			return 23;
		case -1989143022:
			return 21;
		default:
			break;
	}
	return 0;
}

int func_818(vector3 vParam0, var uParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_INT(iParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

void func_819(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_941(uParam0, iParam6);
	func_942(uParam0, iParam5);
	func_943(uParam0, iParam4);
	func_944(uParam0, iParam3);
	func_945(uParam0, iParam2);
	func_946(uParam0, iParam1);
}

int func_820(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = func_947(iParam0, 1);
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
	return 1;
}

void func_821(var uParam0)
{
	*uParam0 = 176656832;
	uParam0->f_1 = -15;
	uParam0->f_2 = 1017034651;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

bool func_822(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_823(int iParam0)
{
	int iVar0;

	if (!func_613(iParam0))
	{
		return;
	}
	if (!MISC::_0x716F17F8A0419F95(((*Global_1360165)[iParam0 /*1157*/])->f_1))
	{
		iVar0 = func_948(iParam0);
		if (iVar0 != 0)
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_1 = _NAMESPACE48::_0x4F76E3676583D951(iVar0);
			_NAMESPACE48::_0xFCC6DB8DBE709BC8(((*Global_1360165)[iParam0 /*1157*/])->f_1);
		}
		else
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_1 = 0;
		}
	}
}

void func_824(int iParam0)
{
	if (func_410(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_402(iParam0)))
		{
			func_639(iParam0, 67108864, 1);
			func_622(iParam0, 19, 1);
		}
	}
}

bool func_825(int iParam0)
{
	if (!func_410(iParam0))
	{
		return false;
	}
	if (!func_413(iParam0))
	{
		return false;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

float func_826(int iParam0)
{
	if (!func_613(iParam0))
	{
		return 0f;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_134;
}

void func_827(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = func_402(iParam0);
	iVar1 = func_651(iParam0, 0);
	func_949(iParam0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
		{
			PED::_0xF008E0BA1FE1D644(1);
			bVar2 = true;
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
		}
		_NAMESPACE48::_0x7B204F88F6C3D287(iVar1);
		if (bVar2)
		{
			PED::_0x7D4E70A67A651C71(1);
		}
	}
	_NAMESPACE48::_0xFCC6DB8DBE709BC8(iVar1);
}

int func_828(int iParam0)
{
	if (!func_613(iParam0))
	{
		return 0;
	}
	if (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 == 0 || ((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 == ((*Global_1360165)[iParam0 /*1157*/])->f_128)
	{
		return 0;
	}
	return 1;
}

bool func_829(int iParam0)
{
	if (!func_613(iParam0))
	{
		return false;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_830(int iParam0, int iParam1, bool bParam2)
{
	if (!func_613(iParam0))
	{
		return;
	}
	if (bParam2)
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 = (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 || iParam1);
	}
	else
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 = (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 - (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 && iParam1));
	}
}

int func_831(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_613(iParam0))
	{
		return 0;
	}
	iVar0 = func_656(iParam0);
	if (func_369(iVar0, 0))
	{
		if (func_369(PED::_0xB676EFDA03DADA52(iVar0, 0), 0) && !bParam4)
		{
			return 0;
		}
		if ((iParam1 || !func_828(iParam0)) || func_829(iParam0))
		{
			if (iParam2 || !(ENTITY::IS_ENTITY_ON_SCREEN(iVar0) && func_950(PLAYER::PLAYER_PED_ID(), iVar0, 1) < 10000f))
			{
				iVar1 = func_951(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
					}
					func_952(iParam0);
					_NAMESPACE48::_0x7B204F88F6C3D287(func_953(iParam0, 0));
					_NAMESPACE48::_0xFCC6DB8DBE709BC8(func_953(iParam0, 0));
					func_954(iParam0);
				}
			}
			else
			{
				if (func_619(iParam0, 32768, 1))
				{
					iVar2 = func_953(iParam0, 0);
					_NAMESPACE48::_0xB65E7F733956CF25(iVar2);
					_NAMESPACE48::_0xFCC6DB8DBE709BC8(iVar2);
				}
				else
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			}
		}
		else
		{
			return 0;
		}
	}
	else if (bParam3)
	{
		if (func_369(((*Global_1360165)[iParam0 /*1157*/])->f_124, 0))
		{
			if (func_619(iParam0, 32768, 1))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(((*Global_1360165)[iParam0 /*1157*/])->f_124))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(((*Global_1360165)[iParam0 /*1157*/])->f_124, true, true);
				}
				func_952(iParam0);
				_NAMESPACE48::_0x7B204F88F6C3D287(func_953(iParam0, 0));
				_NAMESPACE48::_0xFCC6DB8DBE709BC8(func_953(iParam0, 0));
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(((*Global_1360165)[iParam0 /*1157*/])->f_124, true, true);
				func_952(iParam0);
				PED::DELETE_PED(&(((*Global_1360165)[iParam0 /*1157*/])->f_124));
			}
		}
	}
	((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 = 0;
	func_955(iParam0, 0);
	return 1;
}

int func_832(int iParam0)
{
	if ((Global_40.f_4942[iParam0 /*60*/])->f_59 != 0)
	{
		return 1;
	}
	return 0;
}

int func_833()
{
	int iVar0;

	iVar0 = func_956();
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

int func_834(int iParam0)
{
	float fVar0;
	float fVar1;

	if (func_27() != -1)
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
	fVar1 = func_957(MISC::ABSF(fVar1) < 1f, func_957(fVar1 < 0f, -1f, 1f), fVar1);
	return BUILTIN::CEIL(fVar1);
}

int func_835(int iParam0, int iParam1, int iParam2)
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

int func_836(int iParam0)
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

int func_837()
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

void func_838(int iParam0, bool bParam1, int iParam2)
{
	func_958((MISC::GET_GAME_TIMER() + iParam2), !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1955569->f_1.f_2.f_1, iParam0);
	func_959(iParam0);
}

void func_839(int iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_16[2]), 0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[2]), 1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_20[2]), func_960(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_24[2]), "pausemenu_player");
}

void func_840(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	bVar3 = false;
	if (func_961(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_962(iVar5, &iVar2, &iVar0))
			{
				if (!func_883(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_963(iVar2);
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
							if (func_889(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_833() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_833() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_964();
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

void func_841(var uParam0, var uParam1, int iParam2)
{
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

char* func_842(int iParam0)
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

var func_843(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_965(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_844(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_40.f_7862[iParam0 /*4*/]);
	}
	return &(Global_42605[iParam0 /*4*/]);
}

int func_845(struct<2> Param0, var uParam2)
{
	int iVar0;

	iVar0 = (BUILTIN::ROUND(MISC::ABSF(Param0)) & 32767 || BUILTIN::SHIFT_LEFT(BUILTIN::ROUND(MISC::ABSF(Param0.f_1)) & 32767, 15));
	if (Param0 > 0f)
	{
		iVar0 |= 1073741824;
	}
	if (Param0.f_1 > 0f)
	{
		iVar0 |= -2147483648;
	}
	return iVar0;
}

void func_846(int iParam0, var uParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_40.f_7862[iParam0 /*4*/])->f_3 = uParam1;
		return;
	}
	(Global_42605[iParam0 /*4*/])->f_3 = uParam1;
	return;
}

int func_847(int iParam0)
{
	if (!func_207(iParam0))
	{
		return 0;
	}
	if (Global_1894899->f_8)
	{
		return 0;
	}
	return ((*Global_1888801)[iParam0 /*35*/])->f_19;
}

void func_848(int iParam0)
{
	if (iParam0 != -1 && Global_1894899->f_2 != iParam0)
	{
		TELEMETRY::_0xCD6F8A0335D821F9(func_506(iParam0));
	}
	Global_1894899->f_2 = iParam0;
}

void func_849(int iParam0, int iParam1, bool bParam2)
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

void func_850(int iParam0)
{
	int iVar0;

	if ((((Global_1934266->f_26 == iParam0 || iParam0 == 0) || (iParam0 == 305496830 && Global_1934266->f_26 == -1482428221)) || (iParam0 == -1323821455 && Global_1934266->f_26 == -1994249944)) || Global_1934266->f_26 == 0)
	{
		iVar0 = func_195();
		func_395(func_394(iVar0, 1), -1);
	}
}

void func_851()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (func_789(iVar0))
		{
			(*Global_1898130)[iVar0] = -1;
		}
		iVar0++;
	}
}

int func_852(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (func_966(iParam0))
	{
		return 0;
	}
	if (func_27() == -1)
	{
		if (func_72(6206, 1, 1))
		{
			iVar0 = func_76(0);
			iVar1 = func_111(iVar0);
			return 0;
		}
		if (bParam1)
		{
			if (func_98() == iParam0)
			{
				return 0;
			}
			switch (iParam0)
			{
				case 36:
					if (!func_523(63))
					{
						return 0;
					}
					if (func_70(76) || func_342())
					{
						return 0;
					}
					break;
				case 125:
					if (!func_967())
					{
						return 0;
					}
					break;
				case 129:
					if (!func_303())
					{
						return 0;
					}
					if (func_968(19, 0))
					{
						return 0;
					}
					break;
				case 114:
					if (!func_303())
					{
						return 0;
					}
					if (func_968(20, 0))
					{
						return 0;
					}
					break;
				case 9:
					break;
			}
		}
	}
	else if (func_27() == 0)
	{
		return 0;
	}
	else
	{
		return 0;
	}
	if (func_210(iParam0, 256))
	{
		return 0;
	}
	if (bParam1)
	{
		iVar2 = func_969(iParam0);
		if (!func_46(iVar2))
		{
			return 0;
		}
		iVar3 = func_970(iVar2);
		if (func_971(iVar3))
		{
			func_643(&iVar3, 0, 0, 0, 5, 0, 0, 0);
			if (!func_972(iVar3, 1))
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_853(bool bParam0)
{
	if (bParam0)
	{
		Global_1894899 |= 4;
	}
	else
	{
		Global_1894899 = (&Global_1894899 - Global_1894899 & 4);
	}
}

int func_854()
{
	if ((((func_973() == 10 || func_973() == 11) || func_973() == 12) || func_973() == 13) || func_973() == 14)
	{
		return 1;
	}
	return 0;
}

struct<8> func_855(int iParam0)
{
	char cVar0[64];

	MemCopy(&cVar0, {((*Global_1888801)[iParam0 /*35*/])->f_23}, 8);
	if (func_27() == -1)
	{
		if (iParam0 == func_98())
		{
			StringCopy(&cVar0, func_974(func_357()), 64);
			return cVar0;
		}
	}
	switch (((*Global_1888801)[iParam0 /*35*/])->f_20)
	{
		case 3:
			if (func_27() == -1)
			{
				StringCopy(&cVar0, "hideout_", 64);
				StringConCat(&cVar0, &(((*Global_1888801)[iParam0 /*35*/])->f_23), 64);
				if (func_345(45))
				{
					if (iParam0 == 16)
					{
						StringConCat(&cVar0, "_es", 64);
					}
					if (func_975(iParam0))
					{
						MemCopy(&cVar0, {((*Global_1888801)[iParam0 /*35*/])->f_23}, 8);
					}
				}
			}
			else
			{
				StringCopy(&cVar0, "", 64);
			}
			break;
		case 8:
			if (NETWORK::NETWORK_IS_IN_SESSION())
			{
				StringCopy(&cVar0, "", 64);
			}
			else
			{
				StringCopy(&cVar0, "event_area_", 64);
				StringConCat(&cVar0, &(((*Global_1888801)[iParam0 /*35*/])->f_23), 64);
			}
			break;
		case 5:
		case 9:
			MemCopy(&cVar0, {((*Global_1888801)[iParam0 /*35*/])->f_23}, 8);
			break;
		case 4:
			if (func_27() != -1)
			{
				StringCopy(&cVar0, "generic_ghosttown", 64);
			}
			else if (func_975(iParam0) && func_345(45))
			{
				MemCopy(&cVar0, {((*Global_1888801)[iParam0 /*35*/])->f_23}, 8);
			}
			else
			{
				StringCopy(&cVar0, "generic_ghosttown", 64);
			}
			break;
		case 6:
			StringCopy(&cVar0, "generic_ghosttown", 64);
			break;
		case 7:
			MemCopy(&cVar0, {((*Global_1888801)[iParam0 /*35*/])->f_23}, 8);
			break;
	}
	return cVar0;
}

void func_856(int iParam0, bool bParam1)
{
	if (Global_1572887->f_10 && func_27() == 0)
	{
		return;
	}
	if (func_39(128))
	{
		return;
	}
	if (!func_976(iParam0))
	{
		return;
	}
	if (func_210(iParam0, 32))
	{
		return;
	}
	func_322(iParam0, 32);
	func_218(Global_1935630, 8192);
	func_841(func_742(-1532769513, -36357794), 1);
	switch (func_283(iParam0))
	{
		case 0:
		case 2:
		case 11:
			func_841(func_742(-1532769513, 213519508), 1);
			break;
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			func_841(func_742(-1532769513, 242571679), 1);
			break;
		case 3:
		case 10:
			func_841(func_742(-1532769513, 1349449307), 1);
			break;
		case 4:
		case 9:
			func_841(func_742(-1532769513, 1140362070), 1);
			break;
		case 8:
			func_841(func_742(-1532769513, -172330899), 1);
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			func_841(func_742(-1532769513, -910218296), 1);
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
		func_322(iParam0, 64);
	}
}

int func_857()
{
	if (func_27() != -1)
	{
		return 0;
	}
	return func_519(661720433);
}

void func_858(int iParam0)
{
	if (func_977(iParam0))
	{
		if (!func_978(iParam0) && !func_73(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			if (!func_979(285))
			{
				func_980(285, 0);
			}
			func_981(iParam0, 1);
		}
		if (Global_1934266->f_69 != 0.75f && !func_73(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			Global_1934266->f_69 = 0.75f;
			LAW::_0xFEC85339AACA2A35(PLAYER::PLAYER_ID(), Global_1934266->f_69);
		}
	}
	else if (Global_1934266->f_69 != 1f)
	{
		Global_1934266->f_69 = 1f;
		LAW::_0xFEC85339AACA2A35(PLAYER::PLAYER_ID(), Global_1934266->f_69);
	}
}

bool func_859()
{
	return Global_1935630->f_44 == joaat("weapon_fishingrod");
}

int func_860()
{
	if (SCRIPTS::IS_THREAD_ACTIVE(&Global_1900073, false))
	{
		return 1;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-506425016) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_861(int iParam0, int iParam1)
{
	return func_318(&(Global_1900073->f_2[iParam0]), iParam1);
}

int func_862(int iParam0)
{
	iParam0 = func_863(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_14;
}

int func_863(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_864(int iParam0, int iParam1)
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

int func_865(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return 443958153;
		case 8:
			return 1035357148;
		case 9:
			return -990591911;
		case 17:
			return 1434435999;
		case 13:
			return 914613127;
		case 14:
			return 277114628;
		case 15:
			return -441298053;
		case 108:
			return 1671261677;
		case 12:
			return -2008988392;
		case 16:
			return -1779570775;
		case 106:
			return 1866591384;
		case 107:
			return -810797676;
		case 6:
			return 1591504033;
		case 10:
			return -1481022983;
		case 11:
			return -200160067;
		case 19:
			return 213861089;
		case 20:
			return 187124199;
		case 21:
			return -1639286351;
		case 18:
			return 1244472740;
		case 105:
			return -1711647719;
		case 22:
			return -184950877;
		case 118:
			return 354888782;
		case 39:
			return -922179383;
		case 42:
			return 877339314;
		case 41:
			return 327042733;
		case 43:
			return -1159824322;
		case 36:
			return 187784199;
		case 37:
			return 156869848;
		case 38:
			return 959980967;
		case 40:
			return 268171375;
		case 44:
			return -605457855;
		case 45:
			return -967272484;
		case 46:
			return 253446434;
		case 47:
			return -24930371;
		case 55:
			return -491616406;
		case 111:
			return 806137889;
		case 48:
			return 683812333;
		case 49:
			return 1055138492;
		case 50:
			return -1673339528;
		case 53:
			return 1428271505;
		case 54:
			return -2132681852;
		case 51:
			return 641024601;
		case 109:
			return 1479356600;
		case 110:
			return -1608228131;
		case 52:
			return 1700741106;
		case 23:
			return -768596287;
		case 24:
			return -1789795772;
		case 28:
			return 986912071;
		case 27:
			return 312948291;
		case 29:
			return 770563571;
		case 30:
			return 288839560;
		case 26:
			return 399352507;
		case 31:
			return -1241147617;
		case 113:
			return 399096998;
		case 32:
			return -483073269;
		case 112:
			return 1576805996;
		case 25:
			return -1427623397;
		case 33:
			return 305555540;
		case 60:
			return 2080716288;
		case 61:
			return 922959422;
		case 62:
			return 1948709075;
		case 63:
			return 599204508;
		case 65:
			return -362796541;
		case 115:
			return -1178912317;
		case 64:
			return -1575046645;
		case 114:
			return -176953214;
		case 66:
			return -1992095599;
		case 73:
			return 646741747;
		case 74:
			return -773037432;
		case 75:
			return 1444751354;
		case 69:
			return 709943351;
		case 77:
			return 731746260;
		case 76:
			return 405856312;
		case 72:
			return -1749578899;
		case 78:
			return 1581089825;
		case 104:
			return -883880335;
		case 71:
			return 1124822890;
		case 81:
			return 1618521465;
		case 80:
			return -1675300716;
		case 79:
			return -442258411;
		case 102:
			return 1665083003;
		case 103:
			return 810431028;
		case 68:
			return 1161446575;
		case 70:
			return -406930559;
		case 35:
			return 1523596125;
		case 86:
			return -372049939;
		case 85:
			return 226213668;
		case 82:
			return 1437804895;
		case 117:
			return 430529746;
		case 84:
			return -1254552445;
		case 83:
			return 1526480524;
		case 116:
			return 644508980;
		case 1:
			return 1628277480;
		case 120:
			return -1985767496;
		case 0:
			return 1117878254;
		case 2:
			return 622553269;
		case 3:
			return -1934358691;
		case 121:
			return 962619556;
		case 89:
			return 94750187;
		case 87:
			return 545745902;
		case 88:
			return 1875117241;
		case 101:
			return -1861588330;
		case 126:
			return -1079912632;
		case 127:
			return -1624899219;
		case 124:
			return 646944986;
		case 149:
			return 1712034773;
		case 150:
			return 1084233913;
		case 151:
			return -1628307596;
		case 152:
			return 1244193358;
		case 128:
			return -268420964;
		case 129:
			return -283845926;
		case 130:
			return 76731659;
		case 131:
			return 2141489518;
		case 59:
			return 1529797091;
		case 132:
			return 1120323763;
		case 133:
			return -1951530479;
		case 134:
			return 2034257465;
		case 135:
			return 278587369;
		case 57:
			return 1388932648;
		case 137:
			return 1467401843;
		case 138:
			return -1049737591;
		case 139:
			return 1175719437;
		case 140:
			return 2115547696;
		case 56:
			return 878376253;
		case 141:
			return -508879537;
		case 142:
			return -654369397;
		case 143:
			return 1573058547;
		case 144:
			return 1753151614;
		case 145:
			return -2113647360;
		case 146:
			return 1337275619;
		case 147:
			return -237650722;
		case 148:
			return 283754781;
		case 58:
			return -2076086367;
		case 136:
			return -487054121;
		case 119:
			return 551011289;
		case 122:
			return -647250101;
		case 95:
			return -1769964380;
		case 97:
			return -1464928880;
		case 96:
			return 1315212395;
		case 90:
			return -1495157302;
		case 93:
			return -2140031237;
		case 91:
			return -1829807698;
		case 92:
			return 186603357;
		case 94:
			return -1575817877;
		case 98:
			return 1087483310;
		case 125:
			return -552506176;
		case 123:
			return -614248279;
		case 99:
			return 441769767;
		case 100:
			return 1318049946;
		case 4:
			return 548657065;
		case 5:
			return 243086140;
		case 34:
			return -305029900;
		case 67:
			return 1008537949;
		default:
			break;
	}
	return 0;
}

int func_866(var uParam0)
{
	struct<4> Var0;
	int iVar5;
	var uVar6;

	if (!func_264(15, &Var0))
	{
		return -1;
	}
	Var0.f_3 = uParam0;
	Var0.f_2 = -125049320;
	if (DATAFILE::_DATAFILE_GET_HASH(&iVar5, &Var0))
	{
		uVar6 = func_982(iVar5);
		return uVar6;
	}
	return -1;
}

int func_867(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = (BUILTIN::SHIFT_LEFT(iParam1, 11) || uParam0);
	iVar0 = 0;
	while (iVar0 < Global_40.f_9.f_16)
	{
		if (&Global_40.f_9.f_16[iVar0] == iVar1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_868(int iParam0)
{
	iParam0 = func_863(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (func_983(iParam0) == 0)
	{
		return 0;
	}
	return 1;
}

bool func_869(var uParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;
	var uVar6;
	struct<4> Var7;

	func_264(15, &Var0);
	Var0.f_2 = -566397848;
	Var0.f_3 = uParam0;
	DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0);
	Var0.f_3 = iParam1;
	Var0.f_2 = 1368867264;
	DATAFILE::_DATAFILE_GET_HASH(&uVar6, &Var0);
	func_264(15, &Var7);
	Var7.f_2 = -1222062814;
	Var7.f_3 = uVar6;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var7.f_1), &Var7))
	{
		Var7.f_2 = -1148228754;
		DATAFILE::_DATAFILE_GET_BOOL(&uVar5, &Var7);
	}
	return uVar5;
}

int func_870(int iParam0, bool bParam1)
{
	if (!func_233(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_591(iParam0, 8))
		{
			return 0;
		}
	}
	if (func_591(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_871(var uParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;
	var uVar6;
	int iVar7;
	struct<4> Var8;

	func_264(15, &Var0);
	Var0.f_2 = -566397848;
	Var0.f_3 = uParam0;
	DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0);
	Var0.f_3 = iParam1;
	Var0.f_2 = 1368867264;
	DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
	func_264(15, &Var8);
	Var8.f_2 = -1222062814;
	Var8.f_3 = uVar5;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var8.f_1), &Var8))
	{
		Var8.f_2 = 939842437;
		if (DATAFILE::_DATAFILE_GET_HASH(&uVar6, &Var8))
		{
			iVar7 = uVar6;
			return func_719(iVar7, 1, 0);
		}
	}
	return 1;
}

bool func_872()
{
	var uVar0;

	if (func_58())
	{
		if (!func_70(4))
		{
			return true;
		}
	}
	return (PED::_0xFB4891BD7578CDC1(Global_35, -1725579161) || func_984(-2061583405, &uVar0));
}

int func_873(var uParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;
	var uVar6;
	struct<4> Var7;

	func_264(15, &Var0);
	Var0.f_2 = -566397848;
	Var0.f_3 = uParam0;
	DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0);
	Var0.f_3 = iParam1;
	Var0.f_2 = 1368867264;
	DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
	func_264(15, &Var7);
	Var7.f_2 = -1222062814;
	Var7.f_3 = uVar5;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var7.f_1), &Var7))
	{
		Var7.f_2 = 1689379704;
		if (DATAFILE::_DATAFILE_GET_BOOL(&uVar6, &Var7))
		{
			return uVar6;
		}
	}
	return 0;
}

bool func_874(int iParam0)
{
	if (!func_233(Global_1310720->f_22))
	{
		return true;
	}
	if (func_870(Global_1310720->f_22, 1))
	{
		return true;
	}
	if ((0 == iParam0 && 2 == Global_1310720->f_22) || (2 == iParam0 && 0 == Global_1310720->f_22))
	{
		return true;
	}
	return Global_1310720->f_22 == iParam0;
}

int func_875(var uParam0, int iParam1)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	int iVar7;

	func_264(15, &Var0);
	Var0.f_2 = -1999103282;
	Var0.f_3 = uParam0;
	Var0.f_4 = iParam1;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 1563492982;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar5, &Var0))
		{
			iVar6 = func_985(iVar5);
			if (func_70(iVar6))
			{
				return 0;
			}
		}
		Var0.f_2 = 1975530226;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar5, &Var0))
		{
			iVar6 = func_985(iVar5);
			if (!func_70(iVar6))
			{
				return 0;
			}
		}
		Var0.f_2 = 108838230;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar5, &Var0))
		{
			iVar7 = func_986(iVar5);
			if (func_523(iVar7))
			{
				return 0;
			}
		}
		Var0.f_2 = 181294442;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar5, &Var0))
		{
			iVar7 = func_986(iVar5);
			if (!func_523(iVar7))
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_876(int iParam0)
{
	if (!func_987(iParam0))
	{
		return -1;
	}
	return &(Global_40.f_9096[iParam0 /*12*/]);
}

bool func_877(int iParam0, int iParam1)
{
	return (Global_40.f_9571[iParam1 /*10*/] && iParam0) != 0;
}

int func_878(vector3 vParam0, float fParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < &Global_1898329)
	{
		if (!func_46(Global_1898330[iVar0]))
		{
		}
		else
		{
			switch (((*Global_1898346)[iVar0 /*6*/])->f_3)
			{
				case 1:
					iVar1 = ((*Global_1898346)[iVar0 /*6*/])->f_4;
					if (BUILTIN::VDIST(func_988(iVar1), vParam0) < func_957(func_989(iVar1) == 0f, fParam3, func_989(iVar1)))
					{
						return 1;
					}
					break;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_879(vector3 vParam0, float fParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 201)
	{
		if (func_968(iVar0, 0))
		{
			if (BUILTIN::VDIST(func_990(iVar0), vParam0) < fParam3)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_880(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_991(func_177(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

bool func_881(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_882(int iParam0)
{
	switch (iParam0)
	{
		case 1261237250:
			if (STREAMING::_IS_IMAP_ACTIVE(-109425099))
			{
				STREAMING::_REMOVE_IMAP(-109425099);
			}
			if (STREAMING::_IS_IMAP_ACTIVE(1070723367))
			{
				STREAMING::_REMOVE_IMAP(1070723367);
			}
			break;
		case -109425099:
		case 1070723367:
			if (STREAMING::_IS_IMAP_ACTIVE(1261237250))
			{
				STREAMING::_REMOVE_IMAP(1261237250);
			}
			break;
		case 1475953931:
			if (STREAMING::_IS_IMAP_ACTIVE(-316909020))
			{
				STREAMING::_REMOVE_IMAP(-316909020);
			}
			if (STREAMING::_IS_IMAP_ACTIVE(-1962893335))
			{
				STREAMING::_REMOVE_IMAP(-1962893335);
			}
			if (STREAMING::_IS_IMAP_ACTIVE(1351589798))
			{
				STREAMING::_REMOVE_IMAP(1351589798);
			}
			if (STREAMING::_IS_IMAP_ACTIVE(300868838))
			{
				STREAMING::_REMOVE_IMAP(300868838);
			}
			if (STREAMING::_IS_IMAP_ACTIVE(-1788578071))
			{
				STREAMING::_REMOVE_IMAP(-1788578071);
			}
			if (STREAMING::_IS_IMAP_ACTIVE(1157066259))
			{
				STREAMING::_REMOVE_IMAP(1157066259);
			}
			break;
		case -1962893335:
		case -1788578071:
		case -316909020:
		case 300868838:
		case 1157066259:
		case 1351589798:
			if (STREAMING::_IS_IMAP_ACTIVE(1475953931))
			{
				STREAMING::_REMOVE_IMAP(1475953931);
			}
			break;
	}
}

bool func_883(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

struct<4> func_884(bool bParam0)
{
	return func_886(1328661203, func_992(), -1591664384, bParam0);
}

int func_885(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1084182731;
		case 1:
			return -1360128126;
		case 2:
			return 1426626782;
		case 3:
			return 1227915917;
		default:
			break;
	}
	return 1084182731;
}

struct<4> func_886(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_883(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_887(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_887(bool bParam0)
{
	if (func_27() == -1)
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

bool func_888(var uParam0)
{
	return func_791(*uParam0, 1);
}

int func_889(int iParam0)
{
	vector3 vVar0;

	if (!func_883(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_890(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_883(iParam0, 0))
	{
		return 0;
	}
	if (Global_1935630->f_12)
	{
		return 0;
	}
	iVar0 = func_893(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_993("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_994(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_934(Var4.f_4))
			{
			}
			else if (WEAPON::_0x5C2EA6C44F515F34(Var4.f_4) == iVar0)
			{
				func_995(iVar1);
				return 1;
			}
			iVar3++;
		}
		func_995(iVar1);
	}
	return 0;
}

int func_891(int iParam0)
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

int func_892(int iParam0)
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

int func_893(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_883(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_889(iParam0);
	if (iVar0 == -427144552 && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_0x5C2EA6C44F515F34(iParam0);
	}
	else if (iVar0 == 307971639 && WEAPON::_0x1F7977C9101F807F(iParam0))
	{
		return iParam0;
	}
	if (func_996(iParam0, 1399091007))
	{
		func_997(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_894(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	int iVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_998(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_1000(&Var0, func_999(0));
	}
	if (!func_1001(&Var0, &iVar14, &iVar15, 0))
	{
		return 0;
	}
	func_995(iVar14);
	return iVar15;
}

void func_895(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_27() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

int func_896(int iParam0)
{
	int iVar0;
	int iVar1;

	switch (func_111(iParam0))
	{
		case 1:
			iVar0 = func_113(iParam0);
			return func_1002(iVar0);
		case 8:
			iVar1 = func_113(iParam0);
			if (func_117(((*Global_1347702)[iVar1 /*49*/])->f_12, 1))
			{
				return func_1003(iVar1);
			}
			break;
	}
	return -1;
}

int func_897()
{
	if (!func_172(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return 0;
	}
	else if (!func_172(((*Global_1347702)[66 /*49*/])->f_15, 1))
	{
		return 1;
	}
	else if (!func_172(((*Global_1347702)[67 /*49*/])->f_15, 1))
	{
		return 2;
	}
	else if (!func_172(((*Global_1835011)[38 /*74*/])->f_1, 1))
	{
		return 3;
	}
	else if (!func_172(((*Global_1347702)[68 /*49*/])->f_15, 1))
	{
		return 4;
	}
	else if (!func_172(((*Global_1835011)[59 /*74*/])->f_1, 1))
	{
		return 5;
	}
	else if (!func_172(((*Global_1835011)[67 /*74*/])->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_898(int iParam0, int iParam1)
{
	if (!func_46(iParam0))
	{
		return;
	}
	func_491(iParam0, iParam1);
}

void func_899(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_516(Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_218(Global_1935630, 4194304);
	}
	MISC::ENABLE_DISPATCH_SERVICE(15, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(6, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(1, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(16, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(2, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(3, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(4, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(5, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(7, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(9, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(10, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(11, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(12, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(13, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(14, bParam0);
}

int func_900(bool bParam0)
{
	if (!bParam0 && func_310(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(752193127, bParam0, 0);
	return 1;
}

void func_901(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

void func_902(int iParam0, bool bParam1)
{
	if (func_27() != -1)
	{
		return;
	}
	if (func_76(0) != iParam0)
	{
		return;
	}
	if (func_1004(iParam0))
	{
		if (bParam1)
		{
			func_1005(-525676072);
		}
		else
		{
			func_1006(-525676072);
		}
	}
}

int func_903(int iParam0)
{
	return func_1008(func_1007(iParam0));
}

int func_904(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 15) & 16383;
}

var func_905(int iParam0)
{
	return ((*Global_1392915)[iParam0 /*12*/])->f_1;
}

int func_906(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_755(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	iVar1 = func_905(iVar0);
	if (iVar1 == -1)
	{
		return 0;
	}
	return (Global_1392915->f_121[iVar0 /*20*/])->f_19;
}

void func_907(int iParam0)
{
	int iVar0;

	if (func_27() != -1)
	{
		return;
	}
	if (!func_1009(iParam0, &iVar0))
	{
		return;
	}
	if ((Global_1392915->f_121[iVar0 /*20*/])->f_15 == 1)
	{
	}
	(Global_1392915->f_121[iVar0 /*20*/])->f_15 = 0;
}

int func_908(int iParam0)
{
	if (func_1010((Global_1392915->f_121[iParam0 /*20*/])->f_3))
	{
		HUD::_0x8BC7C1F929D07BF3(-1744263063);
		func_1011(&((Global_1392915->f_121[iParam0 /*20*/])->f_3), 1, 0);
		(Global_1392915->f_121[iParam0 /*20*/])->f_3 = 0;
		return 1;
	}
	(Global_1392915->f_121[iParam0 /*20*/])->f_3 = 0;
	return 0;
}

void func_909(int iParam0, int iParam1)
{
	if (!func_763(iParam0))
	{
		return;
	}
	((*Global_1898346)[iParam0 /*6*/])->f_1 = (((*Global_1898346)[iParam0 /*6*/])->f_1 || iParam1);
}

bool func_910(int iParam0)
{
	return ((*Global_1392915)[iParam0 /*12*/])->f_1 == -1;
}

int func_911(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 32)
	{
		return 0;
	}
	return 1;
}

void func_912(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	uParam0->f_3 = 0;
	uParam0->f_4 = -1;
	uParam0->f_6 = { 0f, 0f, 0f };
	uParam0->f_9 = 0f;
	uParam0->f_10 = 0;
	uParam0->f_5 = 0f;
	uParam0->f_11 = -1;
}

void func_913(var uParam0)
{
	if (func_1010(uParam0->f_3))
	{
		func_1011(&(uParam0->f_3), 1, 0);
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_12 = 0;
	uParam0->f_9 = { 0f, 0f, 0f };
	uParam0->f_6 = 0;
	uParam0->f_15 = 0;
	uParam0->f_16 = 0;
}

bool func_914(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

char* func_915(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MINIGAME_SP_BLACKJACK_BLACKWATER";
		case 1:
			return "MINIGAME_SP_BLACKJACK_RHODES";
		case 2:
			return "MINIGAME_SP_BLACKJACK_VANHORN";
		case 3:
			return "MINIGAME_SP_CLEANSTALLS_BEECHERS_HOPE";
		case 4:
			return "MINIGAME_SP_CLEANSTALLS_HORSESHOE_OVERLOOK";
		case 5:
			return "MINIGAME_SP_CLEANSTALLS_PRONGHORN_RANCH";
		case 6:
			return "MINIGAME_SP_DOMINOES_BLACKWATER";
		case 7:
			return "MINIGAME_SP_DOMINOES_CAMP";
		case 8:
			return "MINIGAME_SP_DOMINOES_CLEMENS_POINT";
		case 9:
			return "MINIGAME_SP_DOMINOES_EMERALD_RANCH";
		case 10:
			return "MINIGAME_SP_DOMINOES_HORSESHOE_OVERLOOK";
		case 11:
			return "MINIGAME_SP_DOMINOES_SAINT_DENIS";
		case 12:
			return "MINIGAME_SP_DOMINOES_SHADY_BELLE";
		case 14:
			return "MINIGAME_SP_FILLET_CAMP";
		case 15:
			return "MINIGAME_SP_FILLET_CLEMENS_POINT";
		case 16:
			return "MINIGAME_SP_FILLET_HORSESHOE_OVERLOOK";
		case 17:
			return "MINIGAME_SP_FILLET_STRAWBERRY";
		case 18:
			return "MINIGAME_SP_FILLET_SHADY_BELLE";
		case 19:
			return "MINIGAME_SP_FILLET_VALENTINE";
		case 20:
			return "MINIGAME_SP_FILLET_VAN_HORN";
		case 13:
			return "MINIGAME_SP_FENCEBUILDING_PRONGHORN_RANCH";
		case 21:
			return "MINIGAME_SP_MILKCOW_BEECHERS_HOPE";
		case 22:
			return "MINIGAME_SP_MILKCOW_PRONGHORN_RANCH";
		case 23:
			return "MINIGAME_SP_POKER_BLACKWATER";
		case 24:
			return "MINIGAME_SP_POKER_CAMP";
		case 25:
			return "MINIGAME_SP_POKER_CLEMENS_POINT";
		case 26:
			return "MINIGAME_SP_POKER_HORSESHOE_OVERLOOK";
		case 27:
			return "MINIGAME_SP_POKER_SAINT_DENIS";
		case 28:
			return "MINIGAME_SP_POKER_SERENDIPITY_IND3";
		case 29:
			return "MINIGAME_SP_POKER_SHADY_BELLE";
		case 30:
			return "MINIGAME_SP_POKER_SWANSONS_STATION";
		case 31:
			return "MINIGAME_SP_POKER_TUMBLEWEED";
		case 32:
			return "MINIGAME_SP_POKER_VALENTINE";
		default:
			break;
	}
	return "";
}

void func_916(int iParam0, bool bParam1)
{
	if (!func_46(iParam0))
	{
		return;
	}
	if (!func_772(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_532(iParam0) == 0)
		{
		}
		else if (!STATS::_0x01F4D242765C6B24(func_532(iParam0)))
		{
			STATS::_0xCA41E86545413B5B(func_111(iParam0), func_113(iParam0), func_1012(iParam0), func_532(iParam0), Global_36);
		}
	}
	func_898(iParam0, 1);
	bParam1 = bParam1;
}

int func_917(int iParam0)
{
	if (!func_104(iParam0))
	{
		return 0;
	}
	if ((Global_40.f_358[iParam0 /*12*/])->f_5 & 2 != 0)
	{
		return 5;
	}
	if (&Global_40.f_358[iParam0 /*12*/] > 0 && PLAYER::GET_WANTED_LEVEL_THRESHOLD(5) > 0)
	{
		return func_1013(&(Global_40.f_358[iParam0 /*12*/]));
	}
	return 0;
}

void func_918(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		MAP::_0x563FCB6620523917(func_1014(iParam0), -1482012664);
	}
	else if (MAP::_0xE38450DBCBC70E3D(func_1014(iParam0), -1305340593) || MAP::_0xE38450DBCBC70E3D(func_1014(iParam0), -1482012664))
	{
		MAP::_0x6786D7AFAC3162B3(func_1014(iParam0));
	}
}

int func_919(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return 0;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return 0;
	}
	if (iParam1 == iParam2)
	{
		return 1;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	if (!bVar0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	return 0;
}

int func_920(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		return func_1015(iParam0);
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_921(int iParam0)
{
	if (func_1016(iParam0, 0))
	{
		return;
	}
	ENTITY::SET_ENTITY_INVINCIBLE(iParam0, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 179, true);
	ENTITY::SET_ENTITY_PROOFS(iParam0, 127, false);
	if (FIRE::IS_ENTITY_ON_FIRE(iParam0))
	{
		FIRE::STOP_ENTITY_FIRE(iParam0, 0);
		ENTITY::_SET_ENTITY_HEALTH(iParam0, ENTITY::GET_ENTITY_MAX_HEALTH(iParam0, 0), 0);
	}
}

void func_922(int iParam0)
{
	int iVar0;

	if (!func_613(iParam0))
	{
		return;
	}
	if (func_951(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_656(iParam0);
	func_921(iVar0);
	func_830(iParam0, 8192, 1);
}

void func_923(int iParam0)
{
	if (func_1016(iParam0, 0))
	{
		return;
	}
	ENTITY::SET_ENTITY_INVINCIBLE(iParam0, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 179, false);
	ENTITY::SET_ENTITY_PROOFS(iParam0, 0, false);
}

void func_924(int iParam0)
{
	int iVar0;

	if (!func_613(iParam0))
	{
		return;
	}
	if (func_951(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_656(iParam0);
	func_923(iVar0);
	func_830(iParam0, 8192, 0);
}

void func_925(int iParam0)
{
	if (func_1016(iParam0, 0))
	{
		return;
	}
	PED::SET_PED_CAN_RAGDOLL(iParam0, true);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iParam0, 1048575);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 8229);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iParam0, false);
}

void func_926(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (func_413(14))
	{
		return;
	}
	if (Global_40.f_4283 != 7 && Global_40.f_4283 != 8)
	{
		return;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(&(Global_1357549->f_3[4])))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_IN_VOLUME(iParam0, &(Global_1357549->f_3[4]), true, 0))
	{
		return;
	}
	PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 909522);
}

void func_927(int iParam0)
{
	int iVar0;

	if (!func_613(iParam0))
	{
		return;
	}
	if (func_951(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_656(iParam0);
	func_925(iVar0);
	func_830(iParam0, 16384, 1);
}

void func_928(int iParam0)
{
	if (func_1016(iParam0, 0))
	{
		return;
	}
	PED::SET_PED_CAN_RAGDOLL(iParam0, true);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iParam0, 1048575);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 1);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iParam0, true);
}

void func_929(int iParam0)
{
	int iVar0;

	if (!func_613(iParam0))
	{
		return;
	}
	if (func_951(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_656(iParam0);
	func_928(iVar0);
	func_830(iParam0, 16384, 0);
}

int func_930(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = func_1017(iParam0, 1);
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
	return 1;
}

int func_931(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	switch (iParam0)
	{
		case 296923297:
			iVar2 = -268604689;
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			switch (iVar0)
			{
				case 0:
					iVar1 = -268604689;
					break;
				case 1:
					iVar1 = -1632589543;
					break;
				case 2:
					iVar1 = -1862464078;
					break;
			}
			break;
		case 1237718549:
			iVar2 = -922193456;
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
			switch (iVar0)
			{
				case 0:
					iVar1 = -922193456;
					break;
				case 1:
					iVar1 = -2040275819;
					break;
				case 2:
					iVar1 = -1114682645;
					break;
				case 3:
					iVar1 = -1414977761;
					break;
			}
			break;
	}
	if (iParam1 != -1)
	{
		if (func_630(iParam1, iVar1))
		{
			iVar2 = iVar1;
		}
	}
	return iVar2;
}

int func_932(int iParam0)
{
	switch (iParam0)
	{
		case -268604689:
			return -1496612359;
		case -1632589543:
			return 1052055818;
		case -1862464078:
			return 1895628185;
		case -922193456:
			return -99272505;
		case -2040275819:
			return 464906090;
		case -1114682645:
			return 744097966;
		case -1414977761:
			return 1059434053;
		default:
			break;
	}
	return 41788943;
}

void func_933(int iParam0, int iParam1)
{
	(Global_40.f_4942[iParam0 /*60*/])->f_5 = ((Global_40.f_4942[iParam0 /*60*/])->f_5 - ((Global_40.f_4942[iParam0 /*60*/])->f_5 && iParam1));
}

bool func_934(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("weapon_unarmed"));
}

int func_935(int iParam0)
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

int func_936(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> Var0;
	int iVar5;
	struct<10> Var6;
	int iVar28;
	struct<4> Var29;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	if (WEAPON::_0x959383DCD42040DA(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
	{
		Var0 = { func_1018(iParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_1019((375 + iVar28), 1);
			if (func_1020(iParam0, &Var0, iVar5, 0))
			{
				if (func_1021(iParam0, &Var6, iVar5))
				{
					Var29 = { func_886(iParam0, Var0, iVar5, 0) };
					func_1022(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_1023(0))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
					{
						return 0;
					}
					func_1024(WEAPON::_0x5C2EA6C44F515F34(iParam0), iParam1, iParam6);
					func_1025(iParam0, iParam1);
					return 1;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
				{
					return 0;
				}
				if (iParam1 > 0)
				{
				}
				WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return 1;
			}
		}
	}

void func_937(int iParam0, int iParam1, float fParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = true;
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (((((((*iParam1 == joaat("weapon_revolver_cattleman_mexican") || *iParam1 == joaat("weapon_revolver_cattleman_pig")) || *iParam1 == joaat("weapon_revolver_doubleaction_exotic")) || *iParam1 == joaat("weapon_revolver_schofield_calloway")) || *iParam1 == joaat("weapon_revolver_schofield_golden")) || *iParam1 == joaat("weapon_pistol_mauser_drunk")) || *iParam1 == joaat("weapon_shotgun_doublebarrel_exotic")) || *iParam1 == joaat("weapon_sniperrifle_rollingblock_exotic"))
	{
		*fParam2 = 0f;
		return;
	}
	switch (iVar1)
	{
		case joaat("g_m_m_uniduster_03"):
		case joaat("u_m_m_unidusterhenchman_03"):
		case joaat("g_m_m_uniduster_04"):
		case joaat("u_m_m_unidusterhenchman_02"):
		case joaat("g_m_m_uniduster_02"):
		case joaat("u_m_m_fatduster_01"):
		case joaat("u_m_m_unidusterhenchman_01"):
		case joaat("g_m_m_uniduster_01"):
		case joaat("cs_disguisedduster_01"):
		case joaat("g_f_m_uniduster_01"):
		case joaat("u_m_m_unidusterleader_01"):
		case joaat("cs_disguisedduster_03"):
		case joaat("g_m_m_uniduster_05"):
		case joaat("cs_disguisedduster_02"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		case joaat("g_m_y_uniexconfeds_02"):
		case joaat("g_m_y_uniexconfeds_01"):
		case joaat("g_m_o_uniexconfeds_01"):
		case joaat("cs_exconfedsleader_01"):
		case joaat("u_m_m_uniexconfedsbounty_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.375f);
			break;
		case joaat("g_m_m_uniinbred_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.7f, 0.875f);
			break;
		case joaat("u_m_m_bht_skinnersearch"):
		case joaat("g_m_m_unimountainmen_01"):
		case joaat("u_m_m_bht_skinnerbrother"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.4f, 0.6f);
			break;
		case joaat("g_m_m_uniranchers_01"):
		case joaat("cs_laramie"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.25f);
			break;
		case joaat("u_m_m_bht_banditoshack"):
		case joaat("u_m_m_bht_banditomine"):
		case joaat("g_m_m_unibanditos_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		case joaat("u_m_m_nbxbrontegoon_01"):
		case joaat("u_m_m_nbxbrontesecform_01"):
		case joaat("u_m_m_nbxbronteasc_01"):
		case joaat("g_m_m_unibrontegoons_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.125f);
			break;
		default:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.4f);
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == 1030835986)
			{
				bVar0 = false;
			}
			break;
	}
	if (bVar0)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 361, true);
	}
}

bool func_938(bool bParam0)
{
	return WEAPON::_0x1F7977C9101F807F(WEAPON::_0x5C2EA6C44F515F34(bParam0));
}

void func_939(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_940(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_941(var uParam0, int iParam1)
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

void func_942(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 62914560);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_943(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_262(*uParam0);
	iVar1 = func_263(*uParam0);
	if (iParam1 < 1 || iParam1 > func_704(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4063232);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_944(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 126976);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_945(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4032);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_946(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 63);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

int func_947(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2147332013:
			return 129;
		case -2137730706:
			return 13;
		case -2129915369:
			return 383;
		case -2122981486:
			return 179;
		case -2104294676:
			return 83;
		case -2098336883:
			return 145;
		case -2093351659:
			return 297;
		case -2093199573:
			return 185;
		case -2082302444:
			return 259;
		case -2075517304:
			return 393;
		case -2071373019:
			return 440;
		case -2063047758:
			return 190;
		case -2047114234:
			return 351;
		case -2041153728:
			return 277;
		case -2038346064:
			return 244;
		case -2033572567:
			return 92;
		case -2030965067:
			return 380;
		case -2023813568:
			return 125;
		case -2006082799:
			return 56;
		case -1994410205:
			return 499;
		case -1988547710:
			return 457;
		case -1981702243:
			return 96;
		case -1971110347:
			return 435;
		case -1955429862:
			return 387;
		case -1949364492:
			return 285;
		case -1943655584:
			return 460;
		case -1935893216:
			return 124;
		case -1934704933:
			return 423;
		case -1922834065:
			return 320;
		case -1917134080:
			return 309;
		case -1916588959:
			return 29;
		case -1897704131:
			return 225;
		case -1888506091:
			return 142;
		case -1885734028:
			return 110;
		case -1868521635:
			return 396;
		case -1866112883:
			return 257;
		case -1856459307:
			return 219;
		case -1837343824:
			return 496;
		case -1832590852:
			return 326;
		case -1827461037:
			return 233;
		case -1827211287:
			return 197;
		case -1827011525:
			return 98;
		case -1825730216:
			return 18;
		case -1818590041:
			return 246;
		case -1812183035:
			return 97;
		case -1805142260:
			return 273;
		case -1804466187:
			return 77;
		case -1802212639:
			return 10;
		case -1790474454:
			return 331;
		case -1771575988:
			return 16;
		case -1757085331:
			return 454;
		case -1738185394:
			return 411;
		case -1728071186:
			return 108;
		case -1719149624:
			return 131;
		case -1689239424:
			return 312;
		case -1675752723:
			return 249;
		case -1671819791:
			return 196;
		case -1667151809:
			return 139;
		case -1664107227:
			return 405;
		case -1648173738:
			return 22;
		case -1646431667:
			return 415;
		case -1633236438:
			return 426;
		case -1596446207:
			return 252;
		case -1584659518:
			return 210;
		case -1582252733:
			return 409;
		case -1565979762:
			return 507;
		case -1564254711:
			return 158;
		case -1557862414:
			return 88;
		case -1557856056:
			return 112;
		case -1548165899:
			return 422;
		case -1538781541:
			return 483;
		case -1526278254:
			return 338;
		case -1520159291:
			return 17;
		case -1512720465:
			return 413;
		case -1501120273:
			return 57;
		case -1486701482:
			return 437;
		case -1483924019:
			return 27;
		case -1482329777:
			return 369;
		case -1479860879:
			return 482;
		case -1466029365:
			return 223;
		case -1461741225:
			return 280;
		case -1426009748:
			return 119;
		case -1425653701:
			return 199;
		case -1417145007:
			return 472;
		case -1409307734:
			return 289;
		case -1408927269:
			return 21;
		case -1405475146:
			return 329;
		case -1396074730:
			return 427;
		case -1393633441:
			return 377;
		case -1383535454:
			return 135;
		case -1381943684:
			return 470;
		case -1377327596:
			return 205;
		case -1370062029:
			return 148;
		case -1355784201:
			return 311;
		case -1340559426:
			return 373;
		case -1333840726:
			return 236;
		case -1318290630:
			return 254;
		case -1316284753:
			return 114;
		case -1302664729:
			return 294;
		case -1299405763:
			return 206;
		case -1276847784:
			return 229;
		case -1238376790:
			return 445;
		case -1235200494:
			return 165;
		case -1233518925:
			return 318;
		case -1220678266:
			return 120;
		case -1211711936:
			return 26;
		case -1205318041:
			return 23;
		case -1202860612:
			return 327;
		case -1198456774:
			return 442;
		case -1190705999:
			return 9;
		case -1179993139:
			return 284;
		case -1171086122:
			return 41;
		case -1164176475:
			return 138;
		case -1152282847:
			return 33;
		case -1143028112:
			return 25;
		case -1117048125:
			return 238;
		case -1088604829:
			return 247;
		case -1077843421:
			return 324;
		case -1061998329:
			return 164;
		case -1061765120:
			return 169;
		case -1048889581:
			return 391;
		case -1045864225:
			return 510;
		case -1036305792:
			return 58;
		case -1032742879:
			return 61;
		case -1025265051:
			return 485;
		case -978287173:
			return 12;
		case -954047483:
			return 395;
		case -948342953:
			return 359;
		case -935212592:
			return 486;
		case -925475803:
			return 484;
		case -916887991:
			return 76;
		case -908082222:
			return 187;
		case -895048976:
			return 374;
		case -890266811:
			return 172;
		case -872824399:
			return 170;
		case -860304527:
			return 186;
		case -850999370:
			return 2;
		case -833577856:
			return 86;
		case -830432609:
			return 492;
		case -825056768:
			return 149;
		case -820146008:
			return 52;
		case -820014425:
			return 439;
		case -818926670:
			return 200;
		case -813365276:
			return 243;
		case -811804990:
			return 293;
		case -807742826:
			return 3;
		case -807680461:
			return 68;
		case -807112425:
			return 180;
		case -803062666:
			return 65;
		case -779264865:
			return 106;
		case -757336127:
			return 372;
		case -742985447:
			return 302;
		case -736212459:
			return 275;
		case -715535005:
			return 362;
		case -713369135:
			return 461;
		case -710247698:
			return 251;
		case -697342513:
			return 242;
		case -695655810:
			return 443;
		case -694047360:
			return 375;
		case -693094356:
			return 89;
		case -692943180:
			return 341;
		case -681593414:
			return 175;
		case -671103079:
			return 504;
		case -670201310:
			return 313;
		case -666548248:
			return 345;
		case -650501093:
			return 509;
		case -646454939:
			return 94;
		case -637873918:
			return 404;
		case -636774257:
			return 146;
		case -625309660:
			return 343;
		case -625171987:
			return 234;
		case -620369863:
			return 403;
		case -619139736:
			return 104;
		case -604891653:
			return 237;
		case -597010176:
			return 487;
		case -582523927:
			return 424;
		case -574426587:
			return 261;
		case -561040434:
			return 400;
		case -558867971:
			return 266;
		case -554271718:
			return 232;
		case -550689301:
			return 283;
		case -544885621:
			return 310;
		case -544096309:
			return 337;
		case -534913305:
			return 174;
		case -532430534:
			return 444;
		case -527348304:
			return 253;
		case -515663690:
			return 330;
		case -505205920:
			return 39;
		case -453449739:
			return 182;
		case -449489613:
			return 140;
		case -445710060:
			return 469;
		case -435161770:
			return 150;
		case -426458298:
			return 59;
		case -423162607:
			return 133;
		case -413943699:
			return 141;
		case -404697685:
			return 308;
		case -402973141:
			return 418;
		case -399703928:
			return 155;
		case -384358266:
			return 295;
		case -381477663:
			return 37;
		case -365550600:
			return 30;
		case -332258016:
			return 382;
		case -331451824:
			return 303;
		case -330340613:
			return 489;
		case -328226663:
			return 323;
		case -324786054:
			return 288;
		case -319093529:
			return 260;
		case -317452243:
			return 128;
		case -314300362:
			return 473;
		case -308211771:
			return 194;
		case -303175962:
			return 431;
		case -302690754:
			return 67;
		case -302574837:
			return 24;
		case -290258665:
			return 317;
		case -286479684:
			return 269;
		case -285172118:
			return 505;
		case -270246276:
			return 490;
		case -266920872:
			return 357;
		case -259827569:
			return 425;
		case -258855820:
			return 464;
		case -248683070:
			return 429;
		case -231638975:
			return 34;
		case -222982511:
			return 204;
		case -221923309:
			return 406;
		case -221398783:
			return 354;
		case -219249641:
			return 474;
		case -218211995:
			return 344;
		case -207368052:
			return 361;
		case -172442174:
			return 385;
		case -170673728:
			return 156;
		case -165538585:
			return 127;
		case -164763388:
			return 376;
		case -164125056:
			return 438;
		case -162152912:
			return 441;
		case -144509608:
			return 113;
		case -134086241:
			return 222;
		case -125979788:
			return 95;
		case -123719783:
			return 151;
		case -121904458:
			return 208;
		case -120359954:
			return 316;
		case -117389654:
			return 93;
		case -115054321:
			return 325;
		case -110297889:
			return 290;
		case -98209688:
			return 55;
		case -94582539:
			return 239;
		case -72799657:
			return 287;
		case -66788599:
			return 19;
		case -58963831:
			return 105;
		case -58291054:
			return 201;
		case -56411631:
			return 342;
		case -54575589:
			return 353;
		case -21372580:
			return 46;
		case -18183703:
			return 466;
		case -8269375:
			return 137;
		case 13460468:
			return 350;
		case 15906262:
			return 321;
		case 16938930:
			return 81;
		case 61425283:
			return 51;
		case 65871884:
			return 54;
		case 70047950:
			return 188;
		case 72162222:
			return 43;
		case 72854145:
			return 1;
		case 85572330:
			return 147;
		case 94814634:
			return 228;
		case 95619635:
			return 408;
		case 98434060:
			return 458;
		case 108841201:
			return 358;
		case 121222228:
			return 476;
		case 121466883:
			return 498;
		case 122725574:
			return 477;
		case 124507607:
			return 480;
		case 127002552:
			return 455;
		case 132239274:
			return 494;
		case 132287504:
			return 184;
		case 137433874:
			return 227;
		case 139790602:
			return 60;
		case 171363131:
			return 47;
		case 176656832:
			return 0;
		case 180573150:
			return 279;
		case 187832713:
			return 282;
		case 195634974:
			return 433;
		case 200640922:
			return 35;
		case 207369059:
			return 64;
		case 209896562:
			return 304;
		case 217189690:
			return 241;
		case 220165734:
			return 134;
		case 228261307:
			return 74;
		case 229393477:
			return 270;
		case 278608719:
			return 399;
		case 281905065:
			return 419;
		case 289706151:
			return 364;
		case 290238735:
			return 250;
		case 291150162:
			return 103;
		case 299577191:
			return 90;
		case 315283201:
			return 240;
		case 315850182:
			return 193;
		case 319124397:
			return 506;
		case 340819214:
			return 84;
		case 388356689:
			return 101;
		case 397857304:
			return 335;
		case 400034151:
			return 71;
		case 403634348:
			return 291;
		case 404260466:
			return 73;
		case 408875702:
			return 80;
		case 411591903:
			return 132;
		case 437096661:
			return 446;
		case 443165194:
			return 332;
		case 446631778:
			return 436;
		case 448165982:
			return 220;
		case 474959407:
			return 255;
		case 477580579:
			return 493;
		case 487107418:
			return 370;
		case 490619049:
			return 163;
		case 500323776:
			return 40;
		case 501194998:
			return 471;
		case 512067206:
			return 452;
		case 525567468:
			return 160;
		case 531203229:
			return 245;
		case 532176461:
			return 203;
		case 533929296:
			return 346;
		case 534386033:
			return 488;
		case 534766068:
			return 349;
		case 542655528:
			return 360;
		case 545240164:
			return 398;
		case 553023190:
			return 78;
		case 561912024:
			return 420;
		case 569547151:
			return 389;
		case 579829077:
			return 178;
		case 597768834:
			return 315;
		case 627421591:
			return 268;
		case 634843927:
			return 66;
		case 643583911:
			return 401;
		case 652625673:
			return 501;
		case 654830082:
			return 371;
		case 676394410:
			return 8;
		case 678897243:
			return 211;
		case 679257961:
			return 126;
		case 685466172:
			return 217;
		case 692218123:
			return 467;
		case 693884302:
			return 177;
		case 703663141:
			return 328;
		case 705436149:
			return 365;
		case 709886296:
			return 414;
		case 720937389:
			return 115;
		case 727456822:
			return 153;
		case 730196087:
			return 157;
		case 737744809:
			return 50;
		case 747937920:
			return 481;
		case 753501669:
			return 367;
		case 761196368:
			return 218;
		case 766757422:
			return 296;
		case 772151702:
			return 28;
		case 779383250:
			return 336;
		case 787526397:
			return 202;
		case 794696385:
			return 14;
		case 812866778:
			return 355;
		case 833697503:
			return 298;
		case 837366581:
			return 118;
		case 847641699:
			return 192;
		case 852724290:
			return 136;
		case 853563984:
			return 49;
		case 856952521:
			return 42;
		case 866755445:
			return 4;
		case 870594813:
			return 173;
		case 881844660:
			return 11;
		case 920901415:
			return 412;
		case 921753284:
			return 272;
		case 951007010:
			return 407;
		case 951777606:
			return 212;
		case 953460136:
			return 159;
		case 960236560:
			return 70;
		case 1004978630:
			return 333;
		case 1005520287:
			return 38;
		case 1019519723:
			return 256;
		case 1025198797:
			return 171;
		case 1046168872:
			return 456;
		case 1057391314:
			return 356;
		case 1059753202:
			return 198;
		case 1061621862:
			return 299;
		case 1073595144:
			return 417;
		case 1080053708:
			return 189;
		case 1086705486:
			return 265;
		case 1092859156:
			return 116;
		case 1098143971:
			return 305;
		case 1130474589:
			return 264;
		case 1132574871:
			return 402;
		case 1134064472:
			return 271;
		case 1138578991:
			return 286;
		case 1141344854:
			return 378;
		case 1150653348:
			return 392;
		case 1156064998:
			return 366;
		case 1157034909:
			return 451;
		case 1165920102:
			return 292;
		case 1166284695:
			return 363;
		case 1176031365:
			return 224;
		case 1176450045:
			return 87;
		case 1185998732:
			return 410;
		case 1188734721:
			return 214;
		case 1219566057:
			return 166;
		case 1234351222:
			return 463;
		case 1249990864:
			return 428;
		case 1264235360:
			return 450;
		case 1267596926:
			return 7;
		case 1267957796:
			return 32;
		case 1292421672:
			return 215;
		case 1296800590:
			return 107;
		case 1297331434:
			return 130;
		case 1300783988:
			return 45;
		case 1305416676:
			return 495;
		case 1314347520:
			return 122;
		case 1328264128:
			return 258;
		case 1330480767:
			return 102;
		case 1335382896:
			return 248;
		case 1338855384:
			return 152;
		case 1344816618:
			return 314;
		case 1344986053:
			return 168;
		case 1349313303:
			return 6;
		case 1354948947:
			return 300;
		case 1357649685:
			return 267;
		case 1358951864:
			return 368;
		case 1360004037:
			return 322;
		case 1365311568:
			return 85;
		case 1366067161:
			return 91;
		case 1402899606:
			return 195;
		case 1406459015:
			return 53;
		case 1410684624:
			return 181;
		case 1415827953:
			return 432;
		case 1425403638:
			return 479;
		case 1427678219:
			return 230;
		case 1437607594:
			return 306;
		case 1438982821:
			return 111;
		case 1441230304:
			return 502;
		case 1447433250:
			return 352;
		case 1448617333:
			return 99;
		case 1454698172:
			return 421;
		case 1456958671:
			return 397;
		case 1467569385:
			return 69;
		case 1469701481:
			return 394;
		case 1508162848:
			return 434;
		case 1522535287:
			return 48;
		case 1524405765:
			return 79;
		case 1534808110:
			return 301;
		case 1549419655:
			return 216;
		case 1566844391:
			return 63;
		case 1571380021:
			return 75;
		case 1578693170:
			return 144;
		case 1593516439:
			return 462;
		case 1618734891:
			return 339;
		case 1621135203:
			return 44;
		case 1623482561:
			return 503;
		case 1636680094:
			return 478;
		case 1647502903:
			return 20;
		case 1665139197:
			return 278;
		case 1674863702:
			return 281;
		case 1675028401:
			return 109;
		case 1685749736:
			return 334;
		case 1688887348:
			return 209;
		case 1699962800:
			return 263;
		case 1701503387:
			return 207;
		case 1707661169:
			return 167;
		case 1723031480:
			return 161;
		case 1731971171:
			return 262;
		case 1750892420:
			return 183;
		case 1756182884:
			return 162;
		case 1759111208:
			return 72;
		case 1769573516:
			return 468;
		case 1773135364:
			return 231;
		case 1777191912:
			return 340;
		case 1783253542:
			return 384;
		case 1784248599:
			return 143;
		case 1786449168:
			return 31;
		case 1791780428:
			return 117;
		case 1792418811:
			return 100;
		case 1796786552:
			return 379;
		case 1817180056:
			return 390;
		case 1819621703:
			return 276;
		case 1824331150:
			return 449;
		case 1852529797:
			return 307;
		case 1863892775:
			return 274;
		case 1874987418:
			return 191;
		case 1888528254:
			return 447;
		case 1889392998:
			return 508;
		case 1890596065:
			return 235;
		case 1899640864:
			return 388;
		case 1909655985:
			return 430;
		case 1914552023:
			return 176;
		case 1927460276:
			return 448;
		case 1935952956:
			return 475;
		case 1937922313:
			return 459;
		case 1945593927:
			return 62;
		case 1955664182:
			return 226;
		case 1964695690:
			return 491;
		case 1971155641:
			return 453;
		case 1974689262:
			return 500;
		case 1978339427:
			return 154;
		case 2011168490:
			return 123;
		case 2011368334:
			return 221;
		case 2016323151:
			return 36;
		case 2030928096:
			return 381;
		case 2033246305:
			return 82;
		case 2045192987:
			return 319;
		case 2045388447:
			return 121;
		case 2050878222:
			return 497;
		case 2057380366:
			return 348;
		case 2071287828:
			return 347;
		case 2080199877:
			return 213;
		case 2082303678:
			return 5;
		case 2091083291:
			return 15;
		case 2137967386:
			return 386;
		case 2143106360:
			return 416;
		case 2143139308:
			return 465;
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

int func_948(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -177936449;
		case 0:
			return -1758735922;
		case 6:
			return -680519380;
		case 3:
			return 263744889;
		case 7:
			return 351057032;
		case 4:
			return 1172283326;
		case 2:
			return -1046310682;
		case 5:
			return 652984488;
		case 8:
			return 1389665576;
		case 9:
			return -1066280913;
		case 13:
			return 1975793632;
		case 14:
			return -1887627202;
		case 15:
			return 1851096281;
		case 16:
			return 47402526;
		case 17:
			return 1762683397;
		case 18:
			return -1154551809;
		case 19:
			return -333682158;
		case 20:
			return 1465089966;
		case 21:
			return 511213393;
		case 22:
			return -1214580355;
		case 23:
			return -1397900723;
		case 10:
			return 541398842;
		case 24:
			return -1960060437;
		case 25:
			return 1634371177;
		case 26:
			return -1308114737;
		case 11:
			return 683250525;
		case 12:
			return -814958461;
	}
	return 0;
}

void func_949(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		func_1026(iParam1);
	}
}

float func_950(int iParam0, int iParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0f;
	}
	if (bParam2)
	{
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
	}
	return func_299(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
}

int func_951(int iParam0, bool bParam1)
{
	if (!func_613(iParam0))
	{
		return 0;
	}
	if (((*Global_1360165)[iParam0 /*1157*/])->f_127 != 0)
	{
		return ((*Global_1360165)[iParam0 /*1157*/])->f_127;
	}
	switch (iParam0)
	{
		case 3:
			return -698095578;
		case 7:
			return 230221572;
		case 0:
			return 47961446;
		case 5:
			return 1268955201;
		case 2:
			return 2103924091;
		case 1:
			return 1554677062;
		case 9:
			return 984702223;
		case 6:
			return -1825091419;
		case 11:
			return 948152617;
		case 8:
			return 795059774;
		case 23:
			return -1880884094;
		case 20:
			return 849012978;
		case 4:
			return 404801781;
		case 10:
			return -1094022447;
		case 26:
			return -1484815615;
		case 12:
		case 14:
			return 0;
		default:
			break;
	}
	if (bParam1)
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_127 = func_1027(iParam0);
		return ((*Global_1360165)[iParam0 /*1157*/])->f_127;
	}
	return 0;
}

void func_952(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_656(iParam0);
	if (!PED::_0xA911EE21EDF69DAF(iVar0))
	{
		return;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iVar0, iVar1);
	iVar2 = 0;
	while (iVar2 < ITEMSET::GET_ITEMSET_SIZE(iVar1))
	{
		iVar3 = MISC::_0xEE04C0AFD4EFAF0E(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar1));
		if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
		{
		}
		else
		{
			if (!ENTITY::_0x88AD6CC10D8D35B2(iVar3))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar3, true, true);
			}
			ENTITY::_0x0D0DB2B6AF19A987(&iVar3);
		}
		iVar2++;
	}
}

int func_953(int iParam0, int iParam1)
{
	if (!func_613(iParam0))
	{
		return 0;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(((*Global_1360165)[iParam0 /*1157*/])->f_126) && iParam1)
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_126 = func_1028(iParam0);
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_126;
}

void func_954(int iParam0)
{
	int iVar0;

	if (!func_613(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if ((Global_1357549->f_1675[iVar0 /*5*/])->f_1 == iParam0)
		{
			(Global_1357549->f_1675[iVar0 /*5*/])->f_1 = -1;
			((*Global_1360165)[iParam0 /*1157*/])->f_127 = 0;
		}
		iVar0++;
	}
}

void func_955(int iParam0, int iParam1)
{
	if (!func_613(iParam0))
	{
		return;
	}
	((*Global_1360165)[iParam0 /*1157*/])->f_70.f_12 = iParam1;
}

var func_956()
{
	return Global_40.f_11095.f_35;
}

float func_957(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_958(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_1029(bParam1);
	}
}

void func_959(int iParam0)
{
	_NAMESPACE84::_0x74BCCEB233AD95B2(-156028329, iParam0);
}

char* func_960(int iParam0)
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

int func_961(var uParam0)
{
	vector3 vVar0;

	if (!func_264(23, &vVar0))
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

int func_962(int iParam0, var uParam1, var uParam2)
{
	struct<4> Var0;
	var uVar5;

	if (!func_264(23, &Var0))
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

int func_963(int iParam0)
{
	return iParam0;
}

int func_964()
{
	int iVar0;

	iVar0 = func_833();
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

void func_965(char* sParam0, char* sParam1, int iParam2)
{
	_NAMESPACE84::_0x74BCCEB233AD95B2(-466562563, MISC::GET_HASH_KEY(sParam0));
	_NAMESPACE84::_0x74BCCEB233AD95B2(1885309238, MISC::GET_HASH_KEY(sParam1));
	_NAMESPACE84::_0x74BCCEB233AD95B2(-826961056, iParam2);
}

bool func_966(int iParam0)
{
	int iVar0;

	iVar0 = func_1030(iParam0);
	if (iVar0 >= 6 || iVar0 < 0)
	{
		return false;
	}
	return (Global_40.f_9571[iVar0 /*10*/])->f_1 == 5;
}

bool func_967()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797);
}

int func_968(int iParam0, bool bParam1)
{
	int iVar0;

	if (func_27() != -1)
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

var func_969(int iParam0)
{
	if (!func_1031(iParam0))
	{
	}
	return Global_1888801[iParam0 /*35*/];
}

int func_970(int iParam0)
{
	if (!func_46(iParam0))
	{
		return -15;
	}
	return func_1032(iParam0);
}

bool func_971(int iParam0)
{
	return iParam0 != -15;
}

bool func_972(int iParam0, bool bParam1)
{
	return func_1033(func_177(), iParam0, bParam1);
}

int func_973()
{
	return Global_1572864->f_21;
}

char* func_974(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return "camp_Lakay";
		case 6:
			return "camp_BeaverHollow";
		case 0:
			return "camp_Colter";
		case 2:
			return "camp_ClemensPoint";
		case 1:
			return "camp_HorseshoeOverlook";
		case 4:
			return "camp_Guarma";
		case 3:
			return "camp_ShadyBelle";
		case 7:
			return "camp_PronghornRanch";
		case 8:
			return "camp_BeechersHope";
		default:
			break;
	}
	return "";
}

int func_975(int iParam0)
{
	switch (iParam0)
	{
		case 43:
		case 71:
		case 98:
			return 1;
		case 9:
		case 79:
			if (func_852(iParam0, 1))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_976(int iParam0)
{
	int iVar0;

	if (func_782(iParam0))
	{
		if (!func_345(45))
		{
			return 0;
		}
	}
	iVar0 = func_283(iParam0);
	if (func_58())
	{
		if (!func_172(((*Global_1835011)[3 /*74*/])->f_1, 1))
		{
			return (iVar0 == 7 || iVar0 == 6);
		}
	}
	return 1;
}

int func_977(int iParam0)
{
	struct<5> Var0;

	if (!func_207(iParam0))
	{
		return 0;
	}
	Var0 = -1;
	Var0.f_4 = -15;
	func_1034(iParam0, &Var0);
	return func_1035(&Var0);
}

int func_978(int iParam0)
{
	struct<5> Var0;

	if (!func_207(iParam0))
	{
		return 0;
	}
	Var0 = -1;
	Var0.f_4 = -15;
	func_1034(iParam0, &Var0);
	return func_1036(&Var0);
}

bool func_979(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_27() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iVar1]), iVar2);
}

void func_980(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_1037(iParam0, &iVar0, &iVar1);
	if (!func_1038(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_1039(iVar0, iVar1);
}

void func_981(int iParam0, bool bParam1)
{
	struct<5> Var0;

	if (!func_207(iParam0))
	{
		return;
	}
	Var0 = -1;
	Var0.f_4 = -15;
	func_1034(iParam0, &Var0);
	func_1040(&Var0, bParam1);
	func_1041(iParam0, &Var0);
}

int func_982(int iParam0)
{
	switch (iParam0)
	{
		case -2045110373:
			return 5;
		case 2092390181:
			return 6;
		case 695356898:
			return 0;
		case 2093317438:
			return 2;
		case -145951480:
			return 4;
		case -432333475:
			return 1;
		case -1327067584:
			return 3;
		case -1192044061:
			return 7;
		case 1206762561:
			return 8;
		default:
			break;
	}
	return -1;
}

int func_983(int iParam0)
{
	iParam0 = func_863(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_11;
}

int func_984(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_1043(func_1042(iParam0), 1);
	if (iVar1 >= 39)
	{
		return 0;
	}
	if (&Global_1946804->f_1497.f_1[iVar1 /*3*/] != 0 && &Global_1946804->f_1497.f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1 /*3*/];
		if (func_1044(iVar0) == iParam0)
		{
			*uParam1 = iVar0;
			return 1;
		}
	}
	*uParam1 = 0;
	return 0;
}

int func_985(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < &Global_1835011)
	{
		if (MISC::GET_HASH_KEY(&(((*Global_1835011)[iVar0 /*74*/])->f_8)) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_986(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (MISC::GET_HASH_KEY(&(((*Global_1347702)[iVar0 /*49*/])->f_3)) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_987(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return 0;
	}
	return 1;
}

Vector3 func_988(int iParam0)
{
	return func_1045(iParam0);
}

float func_989(int iParam0)
{
	switch (iParam0)
	{
		case 17:
			return 50f;
	}
	return 0f;
}

Vector3 func_990(int iParam0)
{
	vector3 vVar0;

	if (!func_174(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { 0f, 0f, 0f };
	if (func_1046(iParam0, &vVar0))
	{
		((*Global_1347702)[iParam0 /*49*/])->f_24 = { vVar0 };
	}
	return ((*Global_1347702)[iParam0 /*49*/])->f_24;
}

void func_991(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (func_1033(iParam0, iParam1, 1))
	{
		iVar0 = func_262(iParam1);
		iVar1 = func_263(iParam0);
		iVar2 = (func_263(iParam0) - func_263(iParam1));
		iVar3 = (func_262(iParam0) - func_262(iParam1));
		iVar4 = (func_261(iParam0) - func_261(iParam1));
		iVar5 = (func_258(iParam0) - func_258(iParam1));
		iVar6 = (func_259(iParam0) - func_259(iParam1));
		iVar7 = (func_260(iParam0) - func_260(iParam1));
	}
	else
	{
		iVar0 = func_262(iParam0);
		iVar1 = func_263(iParam1);
		iVar2 = (func_263(iParam1) - func_263(iParam0));
		iVar3 = (func_262(iParam1) - func_262(iParam0));
		iVar4 = (func_261(iParam1) - func_261(iParam0));
		iVar5 = (func_258(iParam1) - func_258(iParam0));
		iVar6 = (func_259(iParam1) - func_259(iParam0));
		iVar7 = (func_260(iParam1) - func_260(iParam0));
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
		iVar4 = (iVar4 + func_704(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = BUILTIN::ROUND(func_1047(BUILTIN::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

struct<4> func_992()
{
	struct<4> Var0;

	return Var0;
}

int func_993(char* sParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	*uParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_887(bParam4), sParam0, iParam3, uParam2);
	if (*uParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_994(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_995(int iParam0)
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

int func_996(int iParam0, int iParam1)
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

void func_997(int iParam0, var uParam1, var uParam2)
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

struct<14> func_998(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

struct<4> func_999(bool bParam0)
{
	int iVar0;

	iVar0 = func_887(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224214))
		{
			*Global_1224214 = { func_886(923904168, func_884(bParam0), -740156546, bParam0) };
		}
		return *Global_1224214;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224222))
		{
			*Global_1224222 = { func_886(923904168, func_884(bParam0), -740156546, 0) };
		}
		return *Global_1224222;
	}
	return func_886(923904168, func_884(bParam0), -740156546, 0);
}

void func_1000(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_1001(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	*uParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_887(bParam3), uParam0, iParam2);
	if (*uParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_1002(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 0;
		case 5:
		case 6:
		case 9:
		case 10:
		case 11:
		case 13:
		case 14:
		case 15:
		case 25:
			return 1;
		case 12:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 26:
		case 53:
			return 2;
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 37:
			return 3;
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			return 4;
		case 44:
		case 45:
		case 46:
		case 47:
		case 49:
		case 50:
		case 51:
		case 52:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			return 5;
		case 59:
			return 6;
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
			return 7;
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
			return 8;
	}
	return -1;
}

int func_1003(int iParam0)
{
	switch (iParam0)
	{
		case 120:
			return 0;
		case 0:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 66:
		case 94:
		case 97:
		case 98:
		case 112:
		case 113:
		case 114:
			return 1;
		case 3:
		case 4:
		case 5:
		case 37:
		case 67:
		case 76:
		case 134:
			return 2;
		case 115:
		case 116:
			return 3;
		case 58:
		case 64:
		case 68:
		case 82:
		case 83:
			return 5;
		case 1:
		case 2:
		case 8:
		case 9:
		case 10:
		case 96:
			return 8;
	}
	return -1;
}

int func_1004(int iParam0)
{
	if (!func_46(iParam0))
	{
		return 0;
	}
	switch (func_111(iParam0))
	{
		case 1:
			switch (func_113(iParam0))
			{
				case 9:
				case 18:
				case 23:
				case 24:
				case 26:
				case 33:
				case 34:
				case 37:
				case 38:
				case 39:
				case 40:
				case 41:
				case 42:
				case 43:
				case 47:
				case 59:
				case 66:
					return 1;
			}
			break;
		case 8:
			switch (func_113(iParam0))
			{
				case 2:
				case 58:
				case 62:
				case 96:
					return 1;
			}
			break;
	}
	return 0;
}

void func_1005(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_887(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_1044(iVar1) == iParam0)
		{
			INVENTORY::_0x6A564540FAC12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_1049(func_1048(iParam0), 6);
}

void func_1006(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_887(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_1044(iVar1) == iParam0)
		{
			INVENTORY::_0x766315A564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_1050(func_1048(iParam0), 6);
}

int func_1007(int iParam0)
{
	int iVar0;

	if (iParam0 == 0 || iParam0 == -1)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (&Global_1898164->f_1[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1008(int iParam0)
{
	struct<5> Var0;

	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_1898164->f_162 == 0)
	{
		return 0;
	}
	if (Global_1898164->f_162 == 1)
	{
		Global_1898164->f_162 = 0;
		*(Global_1898164->f_1[0 /*5*/]) = { Var0 };
		return 1;
	}
	*(Global_1898164->f_1[iParam0 /*5*/]) = { Var0 };
	Global_1898164->f_162 = (Global_1898164->f_162 - 1);
	func_1051(iParam0, Global_1898164->f_162);
	return 1;
}

bool func_1009(int iParam0, var uParam1)
{
	*uParam1 = -1;
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return false;
	}
	*uParam1 = &Global_1899528->f_11[iParam0];
	return *uParam1 != -1;
}

bool func_1010(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 48)
	{
		return false;
	}
	if (((*Global_1945938)[iParam0 /*18*/])->f_1 & 2 == 0)
	{
		return false;
	}
	return HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3);
}

void func_1011(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 && !func_1010(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_1052(*uParam0);
	if (((*Global_1945938)[iVar0 /*18*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && iParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_1053(iVar0);
	*uParam0 = 0;
}

int func_1012(int iParam0)
{
	if (!func_46(iParam0))
	{
		return -1;
	}
	return func_904(func_248(iParam0));
}

int func_1013(int iParam0)
{
	int iVar0;

	iVar0 = 5;
	while (iVar0 >= 1)
	{
		if (iParam0 >= PLAYER::GET_WANTED_LEVEL_THRESHOLD(iVar0))
		{
			return iVar0;
		}
		iVar0 = (iVar0 + -1);
	}
	return 0;
}

int func_1014(int iParam0)
{
	char cVar0[64];
	char* sVar8;

	StringCopy(&cVar0, func_1054(iParam0), 64);
	sVar8 = func_754(cVar0);
	return MISC::GET_HASH_KEY(sVar8);
}

bool func_1015(int iParam0)
{
	int iVar0;
	int iVar1;

	func_820(iParam0, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(Global_1357549->f_1866[iVar0]), iVar1);
}

int func_1016(int iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (bParam1)
		{
			return PED::IS_PED_DEAD_OR_DYING(iParam0, true);
		}
		else
		{
			return ENTITY::IS_ENTITY_DEAD(iParam0);
		}
	}
	return 1;
}

int func_1017(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2051275045:
			return 14;
		case -2040275819:
			return 46;
		case -1874208704:
			return 5;
		case -1862464078:
			return 44;
		case -1692022104:
			return 63;
		case -1684458716:
			return 31;
		case -1678882891:
			return 36;
		case -1668922931:
			return 20;
		case -1648322231:
			return 72;
		case -1642335258:
			return 66;
		case -1632589543:
			return 43;
		case -1587546924:
			return 54;
		case -1559986688:
			return 7;
		case -1532979576:
			return 65;
		case -1414977761:
			return 48;
		case -1394723994:
			return 59;
		case -1341683964:
			return 21;
		case -1335291723:
			return 60;
		case -1268239471:
			return 68;
		case -1256711921:
			return 35;
		case -1248623443:
			return 26;
		case -1205468859:
			return 76;
		case -1155031950:
			return 25;
		case -1114682645:
			return 47;
		case -1092189504:
			return 69;
		case -1065026089:
			return 73;
		case -973332710:
			return 32;
		case -946772361:
			return 62;
		case -922193456:
			return 39;
		case -695701225:
			return 3;
		case -571427255:
			return 57;
		case -481967001:
			return 28;
		case -445211559:
			return 61;
		case -433615745:
			return 18;
		case -426171916:
			return 80;
		case -310473775:
			return 42;
		case -301101630:
			return 24;
		case -268604689:
			return 37;
		case -193269670:
			return 30;
		case -23947011:
			return 50;
		case 0:
			return 0;
		case 6418928:
			return 71;
		case 80515440:
			return 70;
		case 178615350:
			return 1;
		case 283037683:
			return 13;
		case 296923297:
			return 45;
		case 350498312:
			return 27;
		case 404503428:
			return 4;
		case 431390894:
			return 23;
		case 513932985:
			return 29;
		case 707545953:
			return 64;
		case 713940276:
			return 11;
		case 777603945:
			return 19;
		case 837028314:
			return 58;
		case 867156718:
			return 79;
		case 876535472:
			return 75;
		case 876797088:
			return 53;
		case 928493661:
			return 22;
		case 961676983:
			return 55;
		case 977450639:
			return 9;
		case 1018353621:
			return 17;
		case 1046468203:
			return 16;
		case 1071744295:
			return 8;
		case 1199580439:
			return 41;
		case 1200878026:
			return 52;
		case 1205492208:
			return 40;
		case 1237718549:
			return 49;
		case 1254970547:
			return 78;
		case 1295334688:
			return 51;
		case 1300659195:
			return 56;
		case 1484386316:
			return 77;
		case 1495063555:
			return 15;
		case 1593315648:
			return 6;
		case 1658153743:
			return 33;
		case 1744281750:
			return 12;
		case 1818898449:
			return 38;
		case 1842975347:
			return 34;
		case 1901494236:
			return 10;
		case 1950972546:
			return 67;
		case 2062813606:
			return 74;
		case 2094043703:
			return 2;
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

struct<5> func_1018(int iParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;

	Var0 = { func_884(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_889(iParam0))
	{
		case -1037537535:
			if (!INVENTORY::_0x780C5B9AE2819807(iParam0, 1034665895))
			{
				Var0 = { func_886(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_999(bParam1) };
			if (iParam2 && func_1055(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_1020(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_1020(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_1021(iParam0, &Var5, 1728382685))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
			}
			else
			{
				Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
			}
			break;
		case -1784221369:
			Var0.f_4 = 1782082944;
			break;
		case -1650247667:
			Var0.f_4 = -813824107;
			Var0 = { func_1056(bParam1) };
			switch (func_1044(iParam0))
			{
				case 664784405:
					Var0.f_4 = -1150938404;
					break;
				case 2020212423:
					Var0.f_4 = -1756997214;
					break;
				case 874188557:
					Var0.f_4 = -241855024;
					break;
				case -2101244071:
					Var0.f_4 = -268116367;
					break;
			}
			break;
		case -2130996531:
			if (func_1057(iParam0, -1823706425))
			{
				Var0 = { func_886(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, -1838434463);
			}
			else if (func_1057(iParam0, -1483207246))
			{
				Var0 = { func_886(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
		default:
			if (INVENTORY::_0x780C5B9AE2819807(iParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -833319691))
			{
				Var27.f_9 = -1591664384;
				if (!func_1058(Var0, &Var27, bParam1, 0))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var27.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 1328661203);
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

int func_1019(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1782082944;
		case 1:
			return 1704602624;
		case 2:
			return 1214181762;
		case 3:
			return -430578371;
		case 4:
			return -730381952;
		case 5:
			return -253503777;
		case 6:
			return 1352275534;
		case 7:
			return 1666399168;
		case 8:
			return -1911121386;
		case 9:
			return 1756656691;
		case 10:
			return -1774867076;
		case 11:
			return -421952220;
		case 12:
			return -1087003323;
		case 13:
			return 1231618917;
		case 14:
			return -1183777174;
		case 15:
			return -841767082;
		case 16:
			return 1043717005;
		case 17:
			return 142663787;
		case 18:
			return 1718143051;
		case 19:
			return -6605744;
		case 20:
			return 953047564;
		case 21:
			return 769706682;
		case 22:
			return 1635590003;
		case 23:
			return -2047978619;
		case 24:
			return -586319254;
		case 25:
			return 249896112;
		case 26:
			return -1060513333;
		case 27:
			return 1317351007;
		case 28:
			return -500478573;
		case 29:
			return -806573802;
		case 30:
			return -1109949204;
		case 31:
			return -740156546;
		case 32:
			return -684532710;
		case 33:
			return 1158805436;
		case 34:
			return -559473670;
		case 35:
			return -797147251;
		case 36:
			return -382216265;
		case 37:
			return 1419177114;
		case 38:
			return 1704297235;
		case 39:
			return -1139016418;
		case 40:
			return 897705377;
		case 41:
			return 17961769;
		case 42:
			return 205582207;
		case 43:
			return 900740963;
		case 44:
			return -1369589344;
		case 45:
			return -1695823795;
		case 46:
			return -41453074;
		case 47:
			return 539767227;
		case 48:
			return 1210490314;
		case 49:
			return -399684751;
		case 50:
			return 2138893455;
		case 51:
			return -1617010487;
		case 52:
			return -832377028;
		case 53:
			return -428040245;
		case 54:
			return 1279288897;
		case 55:
			return -594897905;
		case 56:
			return -1360459240;
		case 57:
			return 1838428396;
		case 58:
			return -1467846997;
		case 59:
			return -490610263;
		case 60:
			return -1885413079;
		case 61:
			return 708884155;
		case 62:
			return -134459952;
		case 63:
			return -1912136700;
		case 64:
			return -1268031552;
		case 65:
			return 1177953227;
		case 66:
			return 2130805296;
		case 67:
			return 38093490;
		case 68:
			return -269153218;
		case 69:
			return -1995068011;
		case 70:
			return -164284834;
		case 71:
			return 1446463345;
		case 72:
			return 1501315823;
		case 73:
			return -750379482;
		case 74:
			return -929560937;
		case 75:
			return 608323241;
		case 76:
			return 1030796013;
		case 77:
			return 1915057434;
		case 78:
			return -1582276476;
		case 79:
			return 692059311;
		case 80:
			return 2062839241;
		case 81:
			return -1884531872;
		case 82:
			return -866434534;
		case 83:
			return -1252192421;
		case 84:
			return 1243288963;
		case 85:
			return -1953772189;
		case 86:
			return 754411745;
		case 87:
			return 545309006;
		case 88:
			return -1089810811;
		case 89:
			return 1957869400;
		case 90:
			return -241412332;
		case 91:
			return -1548010959;
		case 92:
			return 550150488;
		case 93:
			return 946565453;
		case 94:
			return 434443248;
		case 95:
			return -1709914938;
		case 96:
			return 366686112;
		case 97:
			return -1370063350;
		case 98:
			return 2126829550;
		case 99:
			return 226552910;
		case 100:
			return 721193431;
		case 101:
			return -315672460;
		case 102:
			return 623544501;
		case 103:
			return 259556714;
		case 104:
			return -2125361825;
		case 105:
			return 1078230356;
		case 106:
			return 1885364811;
		case 107:
			return 1630382737;
		case 108:
			return 1738245512;
		case 109:
			return 1540262216;
		case 110:
			return 1016871472;
		case 111:
			return 13829069;
		case 112:
			return 737051352;
		case 113:
			return 1734614610;
		case 114:
			return -208715295;
		case 115:
			return 1435062936;
		case 116:
			return 1483055553;
		case 117:
			return 380335002;
		case 118:
			return -1079385677;
		case 119:
			return 676610411;
		case 120:
			return 2145419552;
		case 121:
			return 657238733;
		case 122:
			return 1850579281;
		case 123:
			return -1923957384;
		case 124:
			return -1142828108;
		case 125:
			return -1400618531;
		case 126:
			return -1433857135;
		case 127:
			return 209987206;
		case 128:
			return 1686943047;
		case 129:
			return -59178517;
		case 130:
			return 2134884601;
		case 131:
			return 651707517;
		case 132:
			return -633788535;
		case 133:
			return 116394463;
		case 134:
			return -1196973875;
		case 135:
			return 801752086;
		case 136:
			return 184475332;
		case 137:
			return -1880922659;
		case 138:
			return -898138634;
		case 139:
			return -2107418444;
		case 140:
			return -679970099;
		case 141:
			return -1531392549;
		case 142:
			return 1612483376;
		case 143:
			return 463930900;
		case 144:
			return -632148238;
		case 145:
			return 55303249;
		case 146:
			return 2108322089;
		case 147:
			return -1358896714;
		case 148:
			return 74475632;
		case 149:
			return -28710953;
		case 150:
			return -1791599168;
		case 151:
			return 1605938169;
		case 152:
			return 1255242276;
		case 153:
			return 636467727;
		case 154:
			return -1567688525;
		case 155:
			return -77886679;
		case 156:
			return -1057900679;
		case 157:
			return -1960888134;
		case 158:
			return -1719717295;
		case 159:
			return -1779244911;
		case 160:
			return -670540863;
		case 161:
			return 223362311;
		case 162:
			return 1150824567;
		case 163:
			return 974471191;
		case 164:
			return 1989683968;
		case 165:
			return 254804477;
		case 166:
			return 192057609;
		case 167:
			return 1553957817;
		case 168:
			return 2099829015;
		case 169:
			return -840300007;
		case 170:
			return -1948423372;
		case 171:
			return 981083654;
		case 172:
			return 1283289876;
		case 173:
			return -606884489;
		case 174:
			return -100418572;
		case 175:
			return 663645231;
		case 176:
			return 1442217033;
		case 177:
			return 1410986244;
		case 178:
			return 847409839;
		case 179:
			return 923926911;
		case 180:
			return 109995826;
		case 181:
			return -747412737;
		case 182:
			return 1114341727;
		case 183:
			return -539456939;
		case 184:
			return 45887121;
		case 185:
			return 913271624;
		case 186:
			return -1652812715;
		case 187:
			return -1791365775;
		case 188:
			return -979299941;
		case 189:
			return 713062001;
		case 190:
			return -575045963;
		case 191:
			return 1852965262;
		case 192:
			return -1398836354;
		case 193:
			return -1829885298;
		case 194:
			return -1773850357;
		case 195:
			return -564258009;
		case 196:
			return 2016532685;
		case 197:
			return -1070563798;
		case 198:
			return -1619221343;
		case 199:
			return -345571691;
		case 200:
			return 544288390;
		case 201:
			return 159578294;
		case 202:
			return -76852849;
		case 203:
			return 1110295244;
		case 204:
			return 2104563477;
		case 205:
			return 1947827651;
		case 206:
			return -933072766;
		case 207:
			return 2104388648;
		case 208:
			return -1677140601;
		case 209:
			return -2133097881;
		case 210:
			return -826678792;
		case 211:
			return -513522325;
		case 212:
			return 1970588249;
		case 213:
			return -2080032591;
		case 214:
			return 1758847745;
		case 215:
			return 895010282;
		case 216:
			return 1786352060;
		case 217:
			return -833319691;
		case 218:
			return 1591329969;
		case 219:
			return 2123222014;
		case 220:
			return -1578397674;
		case 221:
			return 1473261684;
		case 222:
			return -241855024;
		case 223:
			return 12999093;
		case 224:
			return -6796437;
		case 225:
			return -268116367;
		case 226:
			return -636470867;
		case 227:
			return 1737668280;
		case 228:
			return 892807236;
		case 229:
			return -733247890;
		case 230:
			return 24047176;
		case 231:
			return -1561999014;
		case 232:
			return -2052774042;
		case 233:
			return -997150586;
		case 234:
			return -1189569496;
		case 235:
			return 46488141;
		case 236:
			return 1046566686;
		case 237:
			return 325139909;
		case 238:
			return -1585141069;
		case 239:
			return 802754820;
		case 240:
			return 1415981582;
		case 241:
			return -1886147520;
		case 242:
			return 654877947;
		case 243:
			return -415648720;
		case 244:
			return 1221327846;
		case 245:
			return 923162715;
		case 246:
			return 625423581;
		case 247:
			return 326668608;
		case 248:
			return 669530755;
		case 249:
			return 429759982;
		case 250:
			return -2111934838;
		case 251:
			return 1886178087;
		case 252:
			return 1587783573;
		case 253:
			return -279722001;
		case 254:
			return 1310070322;
		case 255:
			return 724026534;
		case 256:
			return 137387616;
		case 257:
			return -653439684;
		case 258:
			return 1376835592;
		case 259:
			return -1824203570;
		case 260:
			return -1654197998;
		case 261:
			return 798987653;
		case 262:
			return 976923323;
		case 263:
			return 1167442289;
		case 264:
			return 986998820;
		case 265:
			return -2119169513;
		case 266:
			return -2015960939;
		case 267:
			return -1287636759;
		case 268:
			return -706917073;
		case 269:
			return -2166805;
		case 270:
			return -1391602433;
		case 271:
			return 1782075221;
		case 272:
			return 1282544585;
		case 273:
			return 1732594027;
		case 274:
			return -1058817012;
		case 275:
			return 1090546265;
		case 276:
			return -1783120823;
		case 277:
			return -1535745896;
		case 278:
			return -2086922122;
		case 279:
			return -1675198649;
		case 280:
			return 1189497682;
		case 281:
			return -1565675519;
		case 282:
			return -268973591;
		case 283:
			return 1039159916;
		case 284:
			return 1111816631;
		case 285:
			return 405591388;
		case 286:
			return 897456793;
		case 287:
			return 104187473;
		case 288:
			return 773808542;
		case 289:
			return -1120669954;
		case 290:
			return -1389278274;
		case 291:
			return 552979403;
		case 292:
			return -1571578784;
		case 293:
			return -708312114;
		case 294:
			return 688823508;
		case 295:
			return -1622147240;
		case 296:
			return 830292162;
		case 297:
			return 226276782;
		case 298:
			return -678416628;
		case 299:
			return -1098528034;
		case 300:
			return 316207340;
		case 301:
			return -1909200748;
		case 302:
			return -939652363;
		case 303:
			return -1990194462;
		case 304:
			return -375447933;
		case 305:
			return 537014919;
		case 306:
			return 1784584921;
		case 307:
			return 1084182731;
		case 308:
			return -1045471300;
		case 309:
			return 1617414719;
		case 310:
			return -787761753;
		case 311:
			return -490616606;
		case 312:
			return 1491346514;
		case 313:
			return -1311702610;
		case 314:
			return -904250715;
		case 315:
			return 1034665895;
		case 316:
			return -101524555;
		case 317:
			return 1419152594;
		case 318:
			return -451359317;
		case 319:
			return -1915385310;
		case 320:
			return 1315162488;
		case 321:
			return -361152079;
		case 322:
			return -2041626192;
		case 323:
			return -2077812539;
		case 324:
			return -1371514637;
		case 325:
			return 1730017037;
		case 326:
			return 892816668;
		case 327:
			return -1994943603;
		case 328:
			return 603133554;
		case 329:
			return -30160144;
		case 330:
			return -1248299493;
		case 331:
			return 727393558;
		case 332:
			return 755611221;
		case 333:
			return -170255458;
		case 334:
			return 1011151573;
		case 335:
			return 1122339631;
		case 336:
			return 454815308;
		case 337:
			return 990701735;
		case 338:
			return -246340825;
		case 339:
			return -1410671073;
		case 340:
			return 1547608292;
		case 341:
			return -714132970;
		case 342:
			return 732290690;
		case 343:
			return 971340545;
		case 344:
			return -234132662;
		case 345:
			return -2143057988;
		case 346:
			return -993947465;
		case 347:
			return -486552269;
		case 348:
			return -1156317860;
		case 349:
			return 1229625803;
		case 350:
			return -388596167;
		case 351:
			return -1204639465;
		case 352:
			return -1384685096;
		case 353:
			return -2026728113;
		case 354:
			return -1228057307;
		case 355:
			return 1835126290;
		case 356:
			return 1890833594;
		case 357:
			return -751549960;
		case 358:
			return -1682270750;
		case 359:
			return -1839865333;
		case 360:
			return -1990383629;
		case 361:
			return 1712094016;
		case 362:
			return 1532953697;
		case 363:
			return 1620318083;
		case 364:
			return -307230331;
		case 365:
			return -1034549620;
		case 366:
			return -1293064293;
		case 367:
			return -1540142553;
		case 368:
			return -1769886012;
		case 369:
			return -1983081126;
		case 370:
			return -1106117124;
		case 371:
			return -1873108338;
		case 372:
			return -2097543219;
		case 373:
			return 155413195;
		case 374:
			return -1162387149;
		case 375:
			return 1728382685;
		case 376:
			return -649335959;
		case 377:
			return -1876502240;
		case 378:
			return -2107032155;
		case 379:
			return 619103418;
		case 380:
			return 1355448197;
		case 381:
			return 1681762005;
		case 382:
			return 1026887814;
		case 383:
			return 354352628;
		case 384:
			return 1519366642;
		case 385:
			return -82757515;
		case 386:
			return 386306655;
		case 387:
			return 1243962119;
		case 388:
			return 756214903;
		case 389:
			return -718417579;
		case 390:
			return -1445516411;
		case 391:
			return -672392892;
		case 392:
			return 1465341584;
		case 393:
			return -427758369;
		case 394:
			return -735647142;
		case 395:
			return 1535838048;
		case 396:
			return -602272282;
		case 397:
			return 2051264661;
		case 398:
			return 487172188;
		case 399:
			return 282270687;
		case 400:
			return 1607708943;
		case 401:
			return 1686264939;
		case 402:
			return 314786149;
		case 403:
			return 1402841185;
		case 404:
			return 1099170772;
		case 405:
			return 2125676786;
		case 406:
			return -363896735;
		case 407:
			return -468790222;
		case 408:
			return -1779133048;
		case 409:
			return 1732537631;
		case 410:
			return 1755095401;
		case 411:
			return 835771095;
		case 412:
			return 1963317232;
		case 413:
			return 259627919;
		case 414:
			return 1299075397;
		case 415:
			return -1509094230;
		case 416:
			return 61132362;
		case 417:
			return 1549741908;
		case 418:
			return 288484254;
		case 419:
			return -1877032947;
		case 420:
			return -1395676456;
		case 421:
			return 1136146715;
		case 422:
			return 468034421;
		case 423:
			return 1079459546;
		case 424:
			return -140369351;
		case 425:
			return 1822341990;
		case 426:
			return 1219701681;
		case 427:
			return 1601295268;
		case 428:
			return -1692460667;
		case 429:
			return 1471419228;
		case 430:
			return 907446160;
		case 431:
			return -1126482585;
		case 432:
			return 1911050315;
		case 433:
			return -1343525599;
		case 434:
			return 1261891225;
		case 435:
			return 763162704;
		case 436:
			return 1335861197;
		case 437:
			return 526744654;
		case 438:
			return -1177461517;
		case 439:
			return -241638635;
		case 440:
			return 1024262875;
		case 441:
			return 853355463;
		case 442:
			return -337288221;
		case 443:
			return 361381308;
		case 444:
			return -1264898804;
		case 445:
			return -585289073;
		case 446:
			return 1423542233;
		case 447:
			return -948489286;
		case 448:
			return 2063859257;
		case 449:
			return -1652627327;
		case 450:
			return -1959697839;
		case 451:
			return -1532267859;
		case 452:
			return -1410062763;
		case 453:
			return -901428716;
		case 454:
			return -1628873469;
		case 455:
			return 144855571;
		case 456:
			return -617589883;
		case 457:
			return -1306457086;
		case 458:
			return 1713542477;
		case 459:
			return -305542365;
		case 460:
			return 1985390213;
		case 461:
			return -2145069367;
		case 462:
			return -1674390752;
		case 463:
			return -2117214398;
		case 464:
			return 1880805647;
		case 465:
			return -62390436;
		case 466:
			return 1815288415;
		case 467:
			return 196214097;
		case 468:
			return -201958220;
		case 469:
			return 1400281261;
		case 470:
			return 1601515402;
		case 471:
			return -940704970;
		case 472:
			return -548371721;
		case 473:
			return -1022384613;
		case 474:
			return -357406394;
		case 475:
			return 1077068189;
		case 476:
			return -782241404;
		case 477:
			return 1669853467;
		case 478:
			return 1592019450;
		case 479:
			return 635273153;
		case 480:
			return -1559225678;
		case 481:
			return -266425508;
		case 482:
			return 1117400455;
		case 483:
			return 454332195;
		case 484:
			return -1328061889;
		case 485:
			return 561650932;
		case 486:
			return 256105670;
		case 487:
			return 1976779618;
		case 488:
			return -269095126;
		case 489:
			return 2145617267;
		case 490:
			return 1150213537;
		case 491:
			return 1598825281;
		case 492:
			return -712527121;
		case 493:
			return 1308553072;
		case 494:
			return 852866398;
		case 495:
			return -1794417972;
		case 496:
			return 293062146;
		case 497:
			return 95360094;
		case 498:
			return 807631773;
		case 499:
			return 1603958275;
		case 500:
			return 860052020;
		case 501:
			return -1885979781;
		case 502:
			return 746147970;
		case 503:
			return 666663006;
		case 504:
			return -2096186453;
		case 505:
			return 859409444;
		case 506:
			return -671427187;
		case 507:
			return 100192478;
		case 508:
			return 307812616;
		case 509:
			return 1670843243;
		case 510:
			return 899615863;
		case 511:
			return -298901850;
		case 512:
			return 1379186917;
		case 513:
			return -817206030;
		case 514:
			return -1150323212;
		case 515:
			return -247466821;
		case 516:
			return 427124242;
		case 517:
			return 855418120;
		case 518:
			return -777015093;
		case 519:
			return -722462870;
		case 520:
			return -937454324;
		case 521:
			return -339438116;
		case 522:
			return 2135639035;
		case 523:
			return 1254273765;
		case 524:
			return -792172668;
		case 525:
			return 1905987493;
		case 526:
			return 495693044;
		case 527:
			return -1693422950;
		case 528:
			return -205873076;
		case 529:
			return -2143114654;
		case 530:
			return -1420574021;
		case 531:
			return -1959250381;
			return -1088328663;
			return 513602003;
			return 359221401;
			return 1005272;
			return 1583044470;
			return 348853959;
			return 1045621973;
			return 1084576580;
			return 1651573695;
			return 1463321587;
			return -997505963;
			return -1649851713;
			return -386012962;
			return 1386101789;
			return 1227915917;
			return -218846335;
			return -352578118;
			return 1426626782;
			return -714081520;
			return 74547781;
			return 1271463052;
			return 1983140194;
			return 677262775;
			return -832337898;
			return -319249747;
			return -16955722;
			return -1360128126;
			return -1535425646;
			return -1063641743;
			return -1041133401;
			return 1380479304;
			return 600890828;
			return 733333190;
			return 1843035435;
			return -304127320;
			return 122470371;
			return 0;
			return -1591664384;
			return -673000374;
			return -1150938404;
			return -1756997214;
			return -813824107;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
		}

bool func_1020(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_1059(iParam0, *uParam1, iParam2, bParam3) > 0;
}

int func_1021(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_1060(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

int func_1022(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (func_1061(iParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_1058(*uParam1, &Var0, bParam6, 0))
	{
		return 0;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!func_1023(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_887(bParam6), uParam1, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_1023(bool bParam0)
{
	if (func_27() == -1)
	{
		return 1;
	}
	return INVENTORY::_0x0FBBFFC891A97C81(func_887(bParam0));
}

int func_1024(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_1062(iParam0))
	{
		return 0;
	}
	if (!func_1023(0))
	{
		return 0;
	}
	WEAPON::_0x106A811C6D3035F3(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_1025(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::_0xD3750CCC00635FC2(iParam0))
	{
		iVar1 = func_524(WEAPON::_0xD3750CCC00635FC2(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

void func_1026(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request");
	if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(iVar0))
	{
		PED::_RELEASE_METAPED_OUTFIT_REQUEST(iVar0);
	}
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

int func_1027(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (!func_613(iParam0))
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if ((Global_1357549->f_1675[iVar1 /*5*/])->f_1 == iParam0)
			{
				((*Global_1360165)[iParam0 /*1157*/])->f_126 = (Global_1357549->f_1675[iVar1 /*5*/])->f_4;
				return &(Global_1357549->f_1675[iVar1 /*5*/]);
			}
			iVar1++;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (&Global_1357549->f_1675[iVar1 /*5*/] != 0 && (Global_1357549->f_1675[iVar1 /*5*/])->f_1 == -1)
		{
			iVar0 = &Global_1357549->f_1675[iVar1 /*5*/];
			Jump @165; //curOff = 150
		}
		iVar1++;
	}
	if (!func_613(iParam0))
	{
		if (iVar0 != 0)
		{
			(Global_1357549->f_1675[iVar1 /*5*/])->f_1 = iParam0;
			((*Global_1360165)[iParam0 /*1157*/])->f_126 = (Global_1357549->f_1675[iVar1 /*5*/])->f_4;
		}
	}
	return iVar0;
}

int func_1028(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_613(iParam0))
	{
		return 0;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(((*Global_1360165)[iParam0 /*1157*/])->f_126))
	{
		iVar0 = func_951(iParam0, 1);
		iVar1 = _NAMESPACE48::_0xA00DF706C60173D1(iVar0);
		if ((Global_40.f_4942[iParam0 /*60*/])->f_7 != 0 && iVar1 != (Global_40.f_4942[iParam0 /*60*/])->f_7)
		{
			_NAMESPACE48::_0x8BC555034A5A5E8C(iVar0, (Global_40.f_4942[iParam0 /*60*/])->f_7);
		}
		((*Global_1360165)[iParam0 /*1157*/])->f_126 = _NAMESPACE48::_0x4F76E3676583D951(iVar0);
		_NAMESPACE48::_0xFCC6DB8DBE709BC8(((*Global_1360165)[iParam0 /*1157*/])->f_126);
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_126;
}

void func_1029(bool bParam0)
{
	func_1063(bParam0);
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

int func_1030(int iParam0)
{
	switch (iParam0)
	{
		case 36:
			return 0;
		case 16:
			if (!func_342() && !func_70(59))
			{
				return 0;
			}
			else
			{
				return 4;
			}
			break;
		case 9:
			return 2;
		case 79:
			return 1;
		case 109:
			return 3;
		case 125:
			return 5;
		case 127:
			return 5;
		case 118:
			return 5;
		case 129:
			return 5;
		case 114:
			return 5;
	}
	return -1;
}

int func_1031(int iParam0)
{
	switch (iParam0)
	{
		case 9:
		case 16:
		case 36:
		case 79:
		case 114:
		case 118:
		case 125:
		case 127:
		case 129:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1032(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_6;
	}
	return -15;
}

bool func_1033(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_461(iParam1) || !func_461(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_1034(int iParam0, var uParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		*uParam1 = (Global_23117[iParam0 /*11*/])->f_4;
		uParam1->f_1 = (Global_23117[iParam0 /*11*/])->f_4.f_1;
		uParam1->f_2 = (Global_23117[iParam0 /*11*/])->f_4.f_2;
		uParam1->f_3 = (Global_23117[iParam0 /*11*/])->f_4.f_3;
		uParam1->f_4 = (Global_23117[iParam0 /*11*/])->f_4.f_4;
		uParam1->f_5 = (Global_23117[iParam0 /*11*/])->f_4.f_5;
		return;
	}
	*uParam1 = (Global_1058888->f_40615[iParam0 /*11*/])->f_4;
	uParam1->f_1 = (Global_1058888->f_40615[iParam0 /*11*/])->f_4.f_1;
	uParam1->f_2 = (Global_1058888->f_40615[iParam0 /*11*/])->f_4.f_2;
	uParam1->f_3 = (Global_1058888->f_40615[iParam0 /*11*/])->f_4.f_3;
	uParam1->f_4 = (Global_1058888->f_40615[iParam0 /*11*/])->f_4.f_4;
	uParam1->f_5 = (Global_1058888->f_40615[iParam0 /*11*/])->f_4.f_5;
}

int func_1035(var uParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	var uVar7;

	if (uParam0->f_4 == -15)
	{
		return 0;
	}
	if (*uParam0 != Global_40.f_7729)
	{
		bVar0 = true;
	}
	if (func_1064(1, &iVar3))
	{
		if (uParam0->f_1 == iVar3)
		{
			bVar4 = true;
		}
	}
	else if (uParam0->f_1 == 0)
	{
		bVar4 = true;
	}
	if (func_1064(1, &iVar3))
	{
		if (uParam0->f_2 == iVar3)
		{
			bVar5 = true;
		}
	}
	else if (uParam0->f_2 == 0)
	{
		bVar5 = true;
	}
	if (func_1064(1, &iVar3))
	{
		if (uParam0->f_3 == iVar3)
		{
			bVar6 = true;
		}
	}
	else if (uParam0->f_3 == 0)
	{
		bVar6 = true;
	}
	if ((!bVar4 && !bVar5) && !bVar6)
	{
		iVar1 = 1;
	}
	if (func_311(uParam0->f_5, 1) != func_1065(&uVar7))
	{
		bVar2 = true;
	}
	if (bVar2)
	{
		if (bVar0)
		{
			return 1;
		}
	}
	if (bVar0 && iVar1)
	{
		return 1;
	}
	return 0;
}

bool func_1036(var uParam0)
{
	return func_311(uParam0->f_5, 2);
}

void func_1037(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

int func_1038(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return 0;
	}
	if (func_1066(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_1067(iParam0))
	{
		return 0;
	}
	if (func_1068(iParam0))
	{
		return 0;
	}
	if ((Global_1898164->f_163 && !func_1069(iParam0, 1)) || func_39(32768))
	{
		if (!func_1069(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return 0;
		}
	}
	if (!func_1070())
	{
		return 0;
	}
	return 1;
}

void func_1039(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_1040(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_84(&(uParam0->f_5), 2);
	}
	else
	{
		func_85(&(uParam0->f_5), 2);
	}
}

void func_1041(int iParam0, var uParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_23117[iParam0 /*11*/])->f_4 = *uParam1;
		(Global_23117[iParam0 /*11*/])->f_4.f_1 = uParam1->f_1;
		(Global_23117[iParam0 /*11*/])->f_4.f_2 = uParam1->f_2;
		(Global_23117[iParam0 /*11*/])->f_4.f_3 = uParam1->f_3;
		(Global_23117[iParam0 /*11*/])->f_4.f_4 = uParam1->f_4;
		(Global_23117[iParam0 /*11*/])->f_4.f_5 = uParam1->f_5;
		return;
	}
	(Global_1058888->f_40615[iParam0 /*11*/])->f_4 = *uParam1;
	(Global_1058888->f_40615[iParam0 /*11*/])->f_4.f_1 = uParam1->f_1;
	(Global_1058888->f_40615[iParam0 /*11*/])->f_4.f_2 = uParam1->f_2;
	(Global_1058888->f_40615[iParam0 /*11*/])->f_4.f_3 = uParam1->f_3;
	(Global_1058888->f_40615[iParam0 /*11*/])->f_4.f_4 = uParam1->f_4;
	(Global_1058888->f_40615[iParam0 /*11*/])->f_4.f_5 = uParam1->f_5;
}

int func_1042(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_1071(iVar0);
}

int func_1043(int iParam0, int iParam1)
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

int func_1044(int iParam0)
{
	struct<2> Var0;

	if (!func_883(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

Vector3 func_1045(int iParam0)
{
	if (func_1072(iParam0))
	{
		return func_1073(iParam0);
	}
	return ((*Global_1835011)[iParam0 /*74*/])->f_18;
}

int func_1046(int iParam0, var uParam1)
{
	if (iParam0 == 90)
	{
		if (func_317(((*Global_1347702)[iParam0 /*49*/])->f_15) != 0)
		{
			((*Global_1347702)[iParam0 /*49*/])->f_18 = 80f;
			*uParam1 = { 1015.113f, 159.7295f, 103.0175f };
			return 1;
		}
	}
	else if (iParam0 == 96)
	{
		if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 65536 != 0)
		{
			*uParam1 = { -1646.77f, -1362.89f, 83.4f };
			return 1;
		}
		else
		{
			*uParam1 = { -1629.71f, -1338.377f, 82.0174f };
			return 1;
		}
	}
	return 0;
}

float func_1047(float fParam0, float fParam1, float fParam2)
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

int func_1048(int iParam0)
{
	switch (iParam0)
	{
		case -2061583405:
			return 2;
		case -1719060085:
			return 16;
		case -999503751:
			return 1;
		case -525676072:
			return 4;
		case 81053684:
			return 8;
		case -413129408:
			return 32;
		default:
			break;
	}
	return 0;
}

void func_1049(var uParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 - (Global_1946804->f_2657.f_26.f_6 && uParam0));
}

void func_1050(var uParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 || uParam0);
}

void func_1051(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == iParam1)
	{
		return;
	}
	if (iParam1 < iParam0)
	{
		iVar0 = iParam0;
		while (iVar0 > iParam1)
		{
			func_1074((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1074(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_46(&(Global_1898164->f_1[0 /*5*/])))
	{
		func_898(&(Global_1898164->f_1[0 /*5*/]), 3);
	}
}

var func_1052(var uParam0)
{
	return uParam0;
}

void func_1053(int iParam0)
{
	if (!func_1075(iParam0))
	{
		return;
	}
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_DELETE(((*Global_1945938)[iParam0 /*18*/])->f_3);
	}
	((*Global_1945938)[iParam0 /*18*/])->f_4 = 0;
	(*Global_1945938)[iParam0 /*18*/] = 1;
	((*Global_1945938)[iParam0 /*18*/])->f_16 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_1 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_6 = { 0f, 0f, 0f };
	((*Global_1945938)[iParam0 /*18*/])->f_12 = { 0f, 0f, 0f };
	((*Global_1945938)[iParam0 /*18*/])->f_9 = 0f;
	((*Global_1945938)[iParam0 /*18*/])->f_10 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_11 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_2 = 1;
	((*Global_1945938)[iParam0 /*18*/])->f_15 = -1f;
}

char* func_1054(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LBS_AMBARINO_BOUNTY";
		case 1:
			return "LBS_NEW_HANOVER_BOUNTY";
		case 2:
			return "LBS_LEMOYNE_BOUNTY";
		case 3:
			return "LBS_W_ELIZABETH_BOUNTY";
		case 4:
			return "LBS_NEW_AUSTIN_BOUNTY";
		case 5:
			return "LBS_GUARMA_BOUNTY";
		default:
			break;
	}
	return "LBS_INVALID_BOUNTY";
}

int func_1055(int iParam0, bool bParam1)
{
	if (func_1044(iParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
	{
		if (bParam1)
		{
			return func_1076(-1185145312, 0) > 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

struct<4> func_1056(bool bParam0)
{
	int iVar0;

	iVar0 = func_887(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224218))
		{
			*Global_1224218 = { func_886(271701509, func_884(bParam0), 12999093, 0) };
		}
		return *Global_1224218;
	}
	return func_886(271701509, func_884(bParam0), 12999093, 0);
}

int func_1057(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_1044(iParam0);
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &iVar0))
		{
			if (ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iParam1, iVar0))
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

int func_1058(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(func_887(bParam5), &uParam0, uParam4, !bParam6))
	{
		return 0;
	}
	return 1;
}

int func_1059(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;

	if (!func_883(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_886(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_887(bParam6), &Var0, 0);
	return uVar4;
}

int func_1060(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_887(0);
	*uParam1 = { func_886(iParam0, func_999(0), iParam3, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, uParam1, uParam2, 22, 1))
	{
		return 0;
	}
	return 1;
}

int func_1061(var uParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_1062(int iParam0)
{
	return WEAPON::_0x1F7977C9101F807F(iParam0);
}

void func_1063(bool bParam0)
{
	_NAMESPACE84::_0xB6FD96420C0126A1(-1056478928, bParam0);
}

int func_1064(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_1077(iParam0, &iVar0))
	{
		return 0;
	}
	*iParam1 = &Global_1946804->f_1497.f_1[func_1043(iVar0, 1) /*3*/];
	return 1;
}

int func_1065(var uParam0)
{
	if (-1829635046 == func_1078(81053684))
	{
		if (func_1079(uParam0))
		{
			return 1;
		}
	}
	else if (func_984(-525676072, uParam0))
	{
		if (func_1079(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_1066(int iParam0, int iParam1)
{
	if (func_27() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iParam0]), iParam1);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iParam0]), iParam1);
}

int func_1067(int iParam0)
{
	if (func_27() != -1)
	{
		if (func_1069(iParam0, 4))
		{
			return 0;
		}
	}
	else if (func_1069(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

int func_1068(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_1069(iParam0, 65536) && !func_1069(iParam0, 32768))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if ((Global_40.f_7756[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_1069(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0 /*3*/] - iVar1);
			if ((Global_40.f_7756[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && func_1069(iParam0, 32768))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_1069(int iParam0, int iParam1)
{
	return ((Global_1905944->f_22[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

bool func_1070()
{
	return Global_1905944->f_5694;
}

int func_1071(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if ((Global_1946804->f_57[iVar0 /*11*/])->f_8 == iParam0)
		{
			return func_1080(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_1072(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_1081((*Global_1835011)[iParam0 /*74*/]);
	}
	return 0;
}

Vector3 func_1073(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return -240.576f, 769.614f, 117.085f;
		case 34:
			return 2544.982f, -1187.344f, 52.3104f;
	}
	return ((*Global_1835011)[iParam0 /*74*/])->f_18;
}

void func_1074(int iParam0, int iParam1)
{
	struct<5> Var0;

	Var0 = { *(Global_1898164->f_1[iParam0 /*5*/]) };
	*(Global_1898164->f_1[iParam0 /*5*/]) = { *(Global_1898164->f_1[iParam1 /*5*/]) };
	*(Global_1898164->f_1[iParam1 /*5*/]) = { Var0 };
}

bool func_1075(int iParam0)
{
	return func_1082(iParam0, 2);
}

int func_1076(int iParam0, bool bParam1)
{
	if (func_1062(iParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_887(bParam1), iParam0, 0);
}

int func_1077(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = -1506259487;
			break;
		case 1:
			*uParam1 = -676503695;
			break;
		case 2:
			*uParam1 = 383349088;
			break;
		default:
			return 0;
	}
	return 1;
}

int func_1078(int iParam0)
{
	int iVar0;

	iVar0 = func_1043(func_1042(iParam0), 1);
	if (iVar0 != 39)
	{
		return (Global_1946804->f_1497.f_1[iVar0 /*3*/])->f_1;
	}
	return 0;
}

int func_1079(var uParam0)
{
	if (func_984(81053684, uParam0))
	{
		return 1;
	}
	if (func_984(-525676072, uParam0))
	{
		return 1;
	}
	return 0;
}

int func_1080(int iParam0, int iParam1)
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

int func_1081(var uParam0)
{
	if (func_1083(&(uParam0->f_29), 62))
	{
		switch (func_1084())
		{
			case 1:
				if (!func_1083(&(uParam0->f_29), 6))
				{
					return 0;
				}
				break;
			case 2:
				if (!func_1083(&(uParam0->f_29), 8))
				{
					return 0;
				}
				break;
			case 4:
				if (!func_1083(&(uParam0->f_29), 16))
				{
					return 0;
				}
				break;
			case 8:
				if (!func_1083(&(uParam0->f_29), 32))
				{
					if (func_1083(&(uParam0->f_29), 2))
					{
						if (func_258(func_177()) < 5)
						{
							return 0;
						}
					}
					else
					{
						return 0;
					}
				}
				break;
		}
	}
	return 1;
}

bool func_1082(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1) != 0;
}

int func_1083(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 == 0)
	{
		return 1;
	}
	return 0;
}

int func_1084()
{
	return &Global_1899516;
}

