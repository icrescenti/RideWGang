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
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	struct<16> Local_16 = { 0, 1224195223, 1825312110, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	bool bLocal_34 = false;
	bool bLocal_35 = false;
	bool bLocal_36 = false;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	bool bLocal_39 = false;
	var uLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	bool bLocal_44 = false;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	bool bLocal_47 = false;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	bool bLocal_52 = false;
	int iLocal_53[2] = { 0, 0 };
	int iLocal_56[1] = { 0 };
	bool bLocal_58 = false;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	char* sLocal_61 = NULL;
	int iLocal_62 = 0;
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
	int iLocal_75[4] = { 0, 0, 0, 0 };
	bool bLocal_80 = false;
	bool bLocal_81 = false;
	bool bLocal_82 = false;
	vector3 vLocal_83[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_180 = 0;
	bool bLocal_181 = false;
	bool bLocal_182 = false;
	bool bLocal_183 = false;
	var uLocal_184 = 0;
#endregion

void __EntryFunction__()
{
	char cVar0[32];

	iLocal_42 = -1;
	iLocal_43 = -1;
	iLocal_60 = -1;
	sLocal_61 = "script@mp@introflow@teamonfoot";
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_1(512);
	if (func_2(-2147483648))
	{
		bLocal_35 = true;
	}
	else if (func_2(1073741824 /* Float: 2f */))
	{
		bLocal_36 = true;
	}
	Global_1049227 = 1;
	func_3();
	func_4(&Local_16, 0, 1);
	func_5(&Local_16, 0);
	Local_16.f_2 = -956723401;
	iLocal_32 = PLAYER::PLAYER_ID();
	iLocal_33 = PLAYER::GET_PLAYER_PED(iLocal_32);
	iLocal_37 = GRAPHICS::_0x842CCC9491FFCD9B("MP_Trans_PhotoToScene");
	GRAPHICS::_0xF3E039322BFBD4D8(iLocal_37);
	iLocal_38 = GRAPHICS::_0x842CCC9491FFCD9B("MP_Trans_SceneToPhoto");
	GRAPHICS::_0xF3E039322BFBD4D8(iLocal_38);
	StringCopy(&cVar0, "MP_ADV_INTRO_OS", 32);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_3145858->f_41471)))
	{
		cVar0 = { Global_3145858->f_41471 };
	}
	AUDIO::PREPARE_MUSIC_EVENT(&cVar0);
	while (SCRIPTS::_IS_LOADING_SCREEN_ACTIVE())
	{
		BUILTIN::WAIT(0);
	}
	while (!func_6())
	{
		if (func_7())
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MAP"), true);
			if (!func_8(16))
			{
				if (func_9())
				{
					func_10();
					if (func_11())
					{
						func_12();
						func_13();
						func_14();
					}
				}
			}
			else
			{
				if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-2133234167) == 0)
				{
					func_15(0);
				}
				bLocal_44 = true;
				if (func_9())
				{
					func_10();
				}
			}
		}
		else if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-2133234167) != 0)
		{
		}
		else if (func_11() && func_9())
		{
		}
		BUILTIN::WAIT(0);
	}
	AUDIO::_0x2E399EAFBEEA74D5();
	func_16();
	func_17(1);
	Global_1049227 = 0;
	func_18();
}

void func_1(int iParam0)
{
	Global_262153 = (&Global_262153 - (Global_262153 && iParam0));
}

bool func_2(int iParam0)
{
	return (Global_262153 && iParam0) != 0;
}

void func_3()
{
	Global_1131373->f_5509.f_5 = &Global_1951131->f_1657.f_1[0 /*3*/];
	Global_1131373->f_5509.f_8 = &Global_1951131->f_1657.f_1[2 /*3*/];
	func_19();
	func_20();
	func_21();
}

void func_4(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*uParam0 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(-434015292);
	}
	else if (bParam2)
	{
		*uParam0 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(1781462046);
	}
	else
	{
		*uParam0 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(-242590942);
	}
	uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "transitionData");
}

void func_5(var uParam0, bool bParam1)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_3))
	{
		uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "transitionData");
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_11))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_11, bParam1);
	}
	else
	{
		uParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_3, "showTransitionScreen", bParam1);
	}
}

int func_6()
{
	if (func_22() == 7)
	{
		return 1;
	}
	if (func_23(1, 1))
	{
		return 1;
	}
	if (func_2(64))
	{
		return 1;
	}
	if (func_2(512))
	{
		HUD::_0x8BC7C1F929D07BF3(690901814);
		return 1;
	}
	return 0;
}

bool func_7()
{
	if (func_2(2) && !MISC::IS_BIT_SET(iLocal_46, 1))
	{
		MISC::SET_BIT(&iLocal_46, 1);
		HUD::_0x8BC7C1F929D07BF3(128623374);
	}
	return MISC::IS_BIT_SET(iLocal_46, 1);
}

bool func_8(int iParam0)
{
	return (Global_262151 && iParam0) != 0;
}

int func_9()
{
	if (!HUD::_0xD0976CC34002DB57("UIC"))
	{
		HUD::_0xF66090013DE648D5("UIC");
	}
	else
	{
		return 1;
	}
	iLocal_45++;
	if (iLocal_45 > 100)
	{
		return 1;
	}
	return 0;
}

void func_10()
{
	if (!func_2(268435456) && !MISC::IS_BIT_SET(iLocal_46, 5))
	{
		func_24(32768);
		func_25(1);
		AUDIO::_0x9B1FC259187C97C0("loading_black_white");
		SCRIPTS::_0x1E5B70E53DB661E5(func_26(), func_27(), func_28(), func_29(), func_30(), func_31());
		MISC::SET_BIT(&iLocal_46, 5);
		func_5(&Local_16, 1);
	}
}

int func_11()
{
	if (bLocal_47)
	{
		return 1;
	}
	if (!func_32(&Local_16))
	{
		return 0;
	}
	if (func_33(&uLocal_48))
	{
		if (!GRAPHICS::_0x59EA80079B86D8C7(iLocal_37) && !GRAPHICS::_0x59EA80079B86D8C7(iLocal_38))
		{
			bLocal_47 = true;
			return 1;
		}
		else if (func_34(&uLocal_48, 0, 0) > 30000)
		{
			return 1;
		}
	}
	else
	{
		func_35(&uLocal_48, 0, 0);
	}
	return 0;
}

void func_12()
{
	int iVar0;
	int iVar1;

	CAM::_0x8910C24B7E0046EC();
	if (!Global_1939057->f_19)
	{
		func_17(0);
	}
	if (!func_2(256))
	{
		iVar0 = 14;
		iVar1 = 0;
		while (iVar1 <= (iVar0 - 1))
		{
			if ((iVar1 != 1 && iVar1 != 13) && iVar1 != 4)
			{
				_NAMESPACE71::_0xDD1232B332CBB9E7(iVar1, 1, 1);
			}
			iVar1++;
		}
	}
	func_36();
	if (Global_1939221->f_1)
	{
		Global_1939221 = 2;
	}
	if (Global_1896726->f_382)
	{
		func_37(0);
	}
}

void func_13()
{
	func_38(&Local_16);
	switch (iLocal_13)
	{
		case 0:
			if (func_11())
			{
				MISC::SET_BIT(&(Global_1956121->f_1), 5);
				func_39();
				if (!func_40())
				{
					GRAPHICS::ANIMPOSTFX_STOP_ALL();
				}
				HUD::_0x4CC5F2FC1332577F(690901814);
				if (func_2(268435456))
				{
					if (!func_2(262144))
					{
						if (!func_41())
						{
							CAM::DO_SCREEN_FADE_OUT(1000);
						}
						func_42(1);
					}
				}
				else
				{
					func_44(&Local_16, func_29(), func_30(), func_43(Global_3145858->f_84));
				}
				GRAPHICS::_0xE75CDDEBF618C8FF(iLocal_37);
				func_45(1);
			}
			break;
		case 1:
			if ((!bLocal_34 && !bLocal_44) && (bLocal_36 || bLocal_35))
			{
				AUDIO::SET_AUDIO_FLAG("MusicIgnoreDeathArrest", true);
			}
			func_45(2);
			if (func_2(262144) || !func_2(268435456))
			{
				if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(750);
				}
			}
			break;
		case 2:
			if (func_2(256) || func_2(262144))
			{
				func_45(5);
			}
			else if (func_2(4))
			{
				if (!func_2(268435456))
				{
					CAM::DO_SCREEN_FADE_IN(0);
				}
				GRAPHICS::RESET_PAUSED_RENDERPHASES();
				func_45(3);
			}
			break;
		case 3:
			if ((func_2(8) && (ENTITY::IS_ENTITY_VISIBLE(iLocal_33) || bLocal_52)) && &Global_262154 != -1)
			{
				if (!MISC::IS_BIT_SET(iLocal_46, 6))
				{
					func_46();
					MISC::SET_BIT(&iLocal_46, 6);
				}
				if (func_47())
				{
					if (!func_2(4096))
					{
						NETWORK::_0x4B05B97BA46F419D(0);
						NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, true, &Global_262154, true);
					}
					func_48();
					if (MISC::IS_BIT_SET(iLocal_46, 9))
					{
						func_49(0);
					}
					func_45(4);
				}
			}
			else if (&Global_262154 == -1)
			{
			}
			else if (!ENTITY::IS_ENTITY_VISIBLE(iLocal_33))
			{
				if (!func_33(&uLocal_50))
				{
					func_35(&uLocal_50, 0, 0);
				}
				else if (func_34(&uLocal_50, 0, 0) > 60000)
				{
					bLocal_52 = true;
				}
			}
			break;
		case 4:
			if (func_2(16))
			{
				func_45(5);
			}
			else
			{
				func_50();
			}
			break;
		case 5:
			func_51(&Local_16);
			GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
			if (!func_41())
			{
				HUD::_0x8BC7C1F929D07BF3(690901814);
			}
			func_45(6);
			break;
		case 6:
			if (func_2(1024))
			{
				func_16();
			}
			break;
		case 7:
			break;
	}
}

void func_14()
{
	if (!bLocal_39)
	{
		if (GRAPHICS::_0xEEF83A759AE06A27(iLocal_38))
		{
			if (GRAPHICS::_0x9AB192A9EF980EED(iLocal_38, 2, 0, &uLocal_40))
			{
				if (AUDIO::_0xE368E8422C860BA7("flash_to_photo", "rdro_gamemode_transition_sounds", -2))
				{
					bLocal_39 = true;
					func_5(&Local_16, 1);
					AUDIO::_0x9B1FC259187C97C0("photograph");
					AUDIO::PLAY_SOUND_FRONTEND("flash_to_photo", "rdro_gamemode_transition_sounds", true, 0);
				}
			}
		}
	}
}

void func_15(bool bParam0)
{
	if (bParam0)
	{
		func_52(16);
	}
	else
	{
		func_53(16);
	}
}

void func_16()
{
	int iVar0;
	char cVar1[32];

	if (func_22() == 7)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1049161[iVar0]))
		{
			if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1049161[iVar0], false))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1049161[iVar0], true, true);
			}
			PED::DELETE_PED((*Global_1049161)[iVar0]);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_1049194[iVar0]))
		{
			if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1049194[iVar0], false))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1049194[iVar0], true, true);
			}
			PED::DELETE_PED((*Global_1049194)[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (CAM::DOES_CAM_EXIST(&(iLocal_53[iVar0])))
		{
			CAM::SET_CAM_ACTIVE(&(iLocal_53[iVar0]), false);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		(*Global_1049161)[iVar0] = func_54();
		iVar0++;
	}
	if (CAM::DOES_CAM_EXIST(&(iLocal_56[0])))
	{
		CAM::SET_CAM_ACTIVE(&(iLocal_56[0]), false);
	}
	SCRIPTS::_0x778D4733E0F2F265(1);
	if (!func_40())
	{
		Global_1070355->f_27136.f_8.f_10 = 0;
	}
	CAM::DESTROY_ALL_CAMS(false);
	if ((MISC::IS_BIT_SET(iLocal_46, 3) && iLocal_42 != -1) && (Global_3145858->f_38605[iLocal_42 /*22*/])->f_21 != -1)
	{
		CAM::_0x2412216FCC7B4E3E(Global_3145858->f_48624[(Global_3145858->f_38605[iLocal_42 /*22*/])->f_21 /*18*/]);
	}
	if (iLocal_37 != 0)
	{
		if (iLocal_13 > 0)
		{
			if (!bLocal_182)
			{
				GRAPHICS::_0x71845905BCCDE781(iLocal_37);
			}
			GRAPHICS::_0xEDA5CBECF56E1386(iLocal_37);
		}
		if (bLocal_182)
		{
			GRAPHICS::_0x71845905BCCDE781(iLocal_38);
		}
		GRAPHICS::_0x38D9D50F2085E9B3(iLocal_37);
		GRAPHICS::_0x38D9D50F2085E9B3(iLocal_38);
		iLocal_37 = 0;
	}
	if (!func_2(4096) && NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, true, 32, true);
		if (PLAYER::GET_PLAYER_INVINCIBLE(iLocal_32))
		{
			PLAYER::SET_PLAYER_INVINCIBLE(iLocal_32, false);
		}
	}
	AUDIO::SET_AUDIO_FLAG("MusicIgnoreDeathArrest", false);
	func_55();
	func_42(0);
	func_56();
	StringCopy(&cVar1, "MP_ADV_INTRO_OS", 32);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_3145858->f_41471)))
	{
		cVar1 = { Global_3145858->f_41471 };
	}
	AUDIO::CANCEL_MUSIC_EVENT(&cVar1);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_MAP"), true);
	func_57(&Local_16);
	Global_1049239 = -1;
	Global_262154 = -1;
	MISC::CLEAR_BIT(&(Global_1956121->f_1), 5);
	func_25(0);
	func_45(7);
}

void func_17(bool bParam0)
{
	if (bParam0)
	{
		Global_1949749->f_1381 = (Global_1949749->f_1381 - Global_1949749->f_1381 & 2);
	}
	else
	{
		Global_1949749->f_1381 |= 2;
	}
	func_58(bParam0);
}

void func_18()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_19()
{
	Global_1131373->f_5509.f_7 = &Global_1951131->f_1657.f_1[1 /*3*/];
}

void func_20()
{
	Global_1131373->f_5509.f_9 = &Global_1951131->f_1657.f_1[3 /*3*/];
}

void func_21()
{
	Global_1131373->f_5509.f_6 = &Global_1951131->f_1657.f_1[4 /*3*/];
}

int func_22()
{
	return iLocal_13;
}

int func_23(bool bParam0, bool bParam1)
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

void func_24(int iParam0)
{
	Global_262153 = (Global_262153 || iParam0);
}

void func_25(bool bParam0)
{
	if (!bParam0)
	{
		func_59(19);
	}
	else
	{
		func_60(19);
	}
}

int func_26()
{
	if ((Global_3145858->f_1 > -1 && Global_3145858->f_1 < Global_3145858->f_42115) && !MISC::IS_STRING_NULL_OR_EMPTY(Global_3145858->f_42116[Global_3145858->f_1 /*18*/]))
	{
		return MISC::GET_HASH_KEY(Global_3145858->f_42116[Global_3145858->f_1 /*18*/]);
	}
	if (bLocal_35)
	{
		switch (Global_524288->f_39792)
		{
			case -915869673:
				return 1122662550;
			case -360644098:
				return 506919947;
			case -1649482077:
				return 55577806;
			case -163684180:
				return -2093919847;
			case -777132493:
				return -1567074128;
			case -698288936:
				return -1277009905;
			case 909765192:
				return 1730145250;
			case 534981680:
				return -773971986;
			case 1520184724:
				return 1914027275;
			default:
				break;
		}
	}
	else if (bLocal_36)
	{
		switch (Global_2359296->f_155)
		{
			case -533426613:
				return 1088509777;
			case -1437925683:
			case 1272390114:
				return -1482087471;
			case -725256130:
				return 478789200;
			case -222655798:
				return -1863716933;
			case -559809431:
				return -679566803;
			case -1918441640:
			case 1153715636:
				return 1315254565;
			case -1581094459:
				return 1468907451;
			case -457802746:
				return -274237802;
			default:
				break;
		}
		return -240997098;
	}
	else
	{
		switch (Global_2097152->f_32)
		{
			case 1579717899:
				return -938054684;
			case 218185167:
				return -1684650239;
			case -1185533313:
				return 1744089234;
			case 1744858848:
				return 1646695636;
			default:
				break;
		}
		return -1288350710;
	}
	return -274237802;
}

int func_27()
{
	if ((Global_3145858->f_2 > -1 && Global_3145858->f_2 < Global_3145858->f_42115) && !MISC::IS_STRING_NULL_OR_EMPTY(Global_3145858->f_42116[Global_3145858->f_2 /*18*/]))
	{
		return MISC::GET_HASH_KEY(Global_3145858->f_42116[Global_3145858->f_2 /*18*/]);
	}
	if (bLocal_35)
	{
		switch (Global_524288->f_39792)
		{
			case -915869673:
				return 347053089;
			case -360644098:
				return 267476864;
			case -1649482077:
				return 263267728;
			case -163684180:
				return 1618086939;
			case -777132493:
				return -1263403805;
			case -698288936:
				return 1269272475;
			case 909765192:
				return 932383945;
			case 534981680:
				return -31655829;
			case 1520184724:
				return -2122032152;
			default:
				break;
		}
	}
	else if (bLocal_36)
	{
		switch (Global_2359296->f_155)
		{
			case -533426613:
				return 307231279;
			case -1437925683:
			case 1272390114:
				return -53621227;
			case -725256130:
				return 1597260708;
			case -222655798:
				return 1586694926;
			case -559809431:
				return -913897922;
			case -1918441640:
			case 1153715636:
				return -1544168383;
			case -1581094459:
				return 1168382952;
			case -457802746:
				return -1964987130;
			default:
				break;
		}
		return -480997254;
	}
	else
	{
		switch (Global_2097152->f_32)
		{
			case 1579717899:
				return -1177563305;
			case 1744858848:
				return 868825114;
			case 218185167:
				return 419480024;
			case -1185533313:
				return 2031571671;
			default:
				break;
		}
		return 103021030;
	}
	return -1964987130;
}

int func_28()
{
	if ((Global_3145858->f_3 > -1 && Global_3145858->f_3 < Global_3145858->f_42115) && !MISC::IS_STRING_NULL_OR_EMPTY(Global_3145858->f_42116[Global_3145858->f_3 /*18*/]))
	{
		return MISC::GET_HASH_KEY(Global_3145858->f_42116[Global_3145858->f_3 /*18*/]);
	}
	return 2;
}

char* func_29()
{
	if (bLocal_35)
	{
		return func_61(Global_524288->f_39792, &(Global_3145858->f_11));
	}
	else if (bLocal_36)
	{
		return HUD::_GET_LABEL_TEXT(func_62(Global_2359296->f_155));
	}
	else
	{
		return HUD::_GET_LABEL_TEXT(func_63(Global_2097152->f_32));
	}
	return "GAME MODE NAME HERE";
}

char* func_30()
{
	int iVar0;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_3145858->f_100)))
	{
		return func_64(&(Global_3145858->f_100));
	}
	iVar0 = Global_3145858->f_41529;
	if (iVar0 == -1)
	{
		iVar0 = func_65(Global_3145858->f_188, 1);
	}
	if (iVar0 == -1)
	{
		return "";
	}
	return func_66(iVar0);
}

char* func_31()
{
	struct<16> Var0;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_3145858->f_84)))
	{
		Var0 = { Global_3145858->f_84 };
		return func_64(&Var0);
	}
	return " ";
}

int func_32(var uParam0)
{
	if (!UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(*uParam0))
	{
		return 0;
	}
	UISTATEMACHINE::_UIFLOWBLOCK_ENTER(*uParam0, uParam0->f_1);
	if (!UISTATEMACHINE::_UISTATEMACHINE_EXISTS(*uParam0))
	{
		UISTATEMACHINE::_UISTATEMACHINE_CREATE(*uParam0, *uParam0);
	}
	return 1;
}

bool func_33(var uParam0)
{
	return uParam0->f_1;
}

int func_34(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			return NETWORK::GET_TIME_DIFFERENCE(*uParam0, NETWORK::GET_NETWORK_TIME());
		}
		else
		{
			return NETWORK::GET_TIME_DIFFERENCE(*uParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
		}
	}
	return NETWORK::GET_TIME_DIFFERENCE(*uParam0, MISC::GET_GAME_TIMER());
}

void func_35(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
	}
	else
	{
		*uParam0 = MISC::GET_GAME_TIMER();
	}
	uParam0->f_1 = 1;
}

void func_36()
{
	if (UIAPPS::_IS_APP_RUNNING(29649618) || UIAPPS::_IS_APP_ACTIVE(29649618))
	{
		UIAPPS::_CLOSE_APP_BY_HASH_IMMEDIATE(29649618);
	}
	if (UIAPPS::_IS_APP_RUNNING(joaat("abilities")) || UIAPPS::_IS_APP_ACTIVE(joaat("abilities")))
	{
		UIAPPS::_CLOSE_APP_BY_HASH_IMMEDIATE(joaat("abilities"));
	}
	if (func_67())
	{
		func_68();
	}
	if (func_69())
	{
		func_70();
	}
}

void func_37(bool bParam0)
{
	if (bParam0)
	{
		if (!Global_1896726->f_382)
		{
			Global_1896726->f_382 = bParam0;
		}
	}
	else if (Global_1896726->f_382)
	{
		Global_1896726->f_382 = bParam0;
	}
}

int func_38(var uParam0)
{
	if (!UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(*uParam0))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(uParam0->f_15, 0))
	{
		return 1;
	}
	if (!UISTATEMACHINE::_0xF7C180F57F85D0B8(*uParam0))
	{
		func_32(uParam0);
		return 0;
	}
	UISTATEMACHINE::_UISTATEMACHINE_REQUEST_TRANSITION(*uParam0, uParam0->f_2);
	MISC::SET_BIT(&(uParam0->f_15), 0);
	return 1;
}

void func_39()
{
	Global_1070355->f_27136.f_1 = 1;
	Global_1070355->f_27136.f_62.f_30 = 1;
	Global_1070355->f_27136.f_2 = SCRIPTS::GET_ID_OF_THIS_THREAD();
}

bool func_40()
{
	return Global_1070355->f_27136.f_8.f_4;
}

bool func_41()
{
	return Global_1070355->f_27136.f_8.f_10 != 0;
}

void func_42(bool bParam0)
{
	if (!bParam0)
	{
		func_59(17);
	}
	else
	{
		func_60(17);
	}
}

char* func_43(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

void func_44(var uParam0, char* sParam1, char* sParam2, char* sParam3)
{
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "largeHeader", sParam1);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "subHeader", sParam2);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "body", sParam3);
}

void func_45(int iParam0)
{
	iLocal_13 = iParam0;
}

void func_46()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (&Global_1049239 != -1)
	{
		iVar1 = (&Global_1049239 / 32);
		iVar2 = (&Global_1049239 % 32);
		iVar0 = 0;
		while (iVar0 <= Global_3145858->f_38604)
		{
			if (MISC::IS_BIT_SET(&((Global_3145858->f_38605[iVar0 /*22*/])->f_16[iVar1]), iVar2))
			{
				iLocal_42 = iVar0;
			}
			else
			{
				iVar0++;
			}
		}
		if (iLocal_42 < 0 || iLocal_42 >= 32)
		{
			iLocal_42 = 0;
		}
	}
	else
	{
		iLocal_42 = 0;
	}
	iLocal_41 = PLAYER::GET_PLAYER_TEAM(iLocal_32);
	if (&Global_1049227)
	{
		MISC::SET_BIT(&iLocal_46, 7);
		MISC::SET_BIT(&iLocal_46, 10);
	}
	if (&Global_1049228 == 0)
	{
		MISC::SET_BIT(&iLocal_46, 8);
	}
	else if (&Global_1049228 == 1)
	{
		MISC::SET_BIT(&iLocal_46, 9);
	}
	Global_1049228 = -1;
	if (iLocal_41 != -1)
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (MISC::IS_BIT_SET((Global_3145858->f_38187[iVar0 /*13*/])->f_7, iLocal_41))
			{
				iLocal_43 = iVar0;
			}
			else
			{
				iVar0++;
			}
		}
		if (iLocal_43 < 0)
		{
			iLocal_43 = 0;
		}
	}
	else if (iLocal_43 < 0)
	{
		iLocal_43 = 0;
		iVar1 = (&Global_1049239 / 32);
		iVar2 = (&Global_1049239 % 32);
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (MISC::IS_BIT_SET(&((Global_3145858->f_38187[iVar0 /*13*/])->f_8[iVar1]), iVar2))
			{
				iLocal_43 = iVar0;
			}
			else
			{
				iVar0++;
			}
		}
	}
}

int func_47()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (!func_2(8192))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_1049161[0]))
		{
			return 0;
		}
		else if (iLocal_60 == -1)
		{
			if (MISC::IS_BIT_SET(iLocal_46, 8))
			{
				sLocal_61 = "script@mp@introflow@predator";
			}
			else if (MISC::IS_BIT_SET(iLocal_46, 9))
			{
				sLocal_61 = "script@mp@introflow@teamonfoot_predator";
			}
			else if (MISC::IS_BIT_SET(iLocal_46, 7))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1049194[0]))
				{
					sLocal_61 = "script@mp@introflow@soloonhorse";
				}
				else
				{
					sLocal_61 = "script@mp@introflow@soloonfoot";
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(Global_1049194[0]))
			{
				sLocal_61 = "script@mp@introflow@teamonhorse";
			}
		}
	}
	if (iLocal_60 == -1)
	{
		iLocal_60 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_61, 130, 0, false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(iLocal_60);
	}
	if (ANIMSCENE::_0x477122B8D05E7968(iLocal_60, 1, 0))
	{
		if (MISC::IS_BIT_SET(iLocal_46, 7))
		{
			if ((!bLocal_36 && !bLocal_35) && !func_2(268435456))
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
				ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_60, "BGVariation_Int", iVar0, false);
			}
			iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_60, "CameraIndex", iVar1, false);
		}
		else
		{
			iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
			iVar3 = 0;
			while (iVar3 <= 31)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1049161[iVar3]))
				{
					iVar4++;
				}
				iVar3++;
			}
			if (iVar4 <= 4)
			{
				MISC::SET_BIT(&iLocal_46, 10);
				iVar2 = (1 + iVar5);
			}
			else if (iVar4 <= 8)
			{
				iVar2 = (11 + iVar5);
			}
			else
			{
				iVar2 = (21 + iVar5);
			}
			ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_60, "CameraIndex", iVar2, false);
		}
		return 1;
	}
	return 0;
}

void func_48()
{
}

void func_49(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_1049161[iVar0]))
		{
		}
		else if (!PED::_0xA0BC8FAED8CFEB3C(Global_1049161[iVar0]))
		{
		}
		else
		{
			PED::_0x13A210949FCBD92B(Global_1049161[iVar0], iParam0);
		}
		iVar0++;
	}
}

void func_50()
{
	char cVar0[64];
	int iVar8;
	int iVar9;
	int iVar10;
	char cVar11[32];
	bool bVar15;

	func_71();
	if (iLocal_14 < 6)
	{
		CAM::_0x05AB44D906738426();
	}
	switch (iLocal_14)
	{
		case 0:
			if (iLocal_42 == -1 || bLocal_44)
			{
				func_72();
				return;
			}
			if ((Global_3145858->f_38605[iLocal_42 /*22*/])->f_21 != -1 && (MISC::IS_STRING_NULL_OR_EMPTY(Global_3145858->f_48624[(Global_3145858->f_38605[iLocal_42 /*22*/])->f_21 /*18*/]) || MISC::IS_STRING_NULL_OR_EMPTY(&((Global_3145858->f_48624[(Global_3145858->f_38605[iLocal_42 /*22*/])->f_21 /*18*/])->f_8))))
			{
				if (func_73(*(Global_3145858->f_38605[iLocal_42 /*22*/])) || !func_74(*(Global_3145858->f_38605[iLocal_42 /*22*/])))
				{
					func_72();
				}
				else
				{
					func_75(1);
				}
			}
			else
			{
				func_75(1);
			}
			break;
		case 1:
			if (func_76())
			{
				bLocal_34 = true;
			}
			if (CAM::DOES_CAM_EXIST(&(iLocal_53[0])))
			{
				CAM::SET_CAM_ACTIVE(&(iLocal_53[0]), true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				func_75(2);
			}
			else if (func_77())
			{
				if (func_78())
				{
					if (func_79())
					{
						if (!MISC::IS_BIT_SET(iLocal_46, 3))
						{
							CAM::SET_CAM_ACTIVE(&(iLocal_53[0]), true);
							CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						}
						func_75(2);
					}
				}
			}
			break;
		case 2:
			if (func_80())
			{
				func_81(8388608);
				if (!MISC::IS_BIT_SET(iLocal_46, 3))
				{
					if (iLocal_42 != -1)
					{
						iVar8 = (Global_3145858->f_38605[iLocal_42 /*22*/])->f_15;
						iVar9 = (Global_3145858->f_38605[iLocal_42 /*22*/])->f_14;
					}
					else
					{
						iVar8 = 3750;
						iVar9 = 1;
					}
					CAM::SET_CAM_ACTIVE_WITH_INTERP(&(iLocal_53[1]), &(iLocal_53[0]), iVar8, iVar9, 1);
					func_35(&uLocal_63, 0, 0);
				}
				else
				{
					func_82(0);
					CAM::_0xBC016635D6A73B31(Global_3145858->f_48624[(Global_3145858->f_38605[iLocal_42 /*22*/])->f_21 /*18*/], &((Global_3145858->f_48624[(Global_3145858->f_38605[iLocal_42 /*22*/])->f_21 /*18*/])->f_8), 5);
					iLocal_62 = CAM::_0x465F04F68AD38197(Global_3145858->f_48624[(Global_3145858->f_38605[iLocal_42 /*22*/])->f_21 /*18*/], &((Global_3145858->f_48624[(Global_3145858->f_38605[iLocal_42 /*22*/])->f_21 /*18*/])->f_8), 5);
					func_35(&uLocal_63, 0, 0);
				}
				if (bLocal_34)
				{
					iVar10 = 0;
					while (iVar10 <= 31)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Global_1049161[iVar10]))
						{
							ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Global_1049161[iVar10], false, false);
							ENTITY::FREEZE_ENTITY_POSITION(Global_1049161[iVar10], true);
							if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1049161[iVar10], false))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1049161[iVar10], true, true);
							}
							PED::DELETE_PED((*Global_1049161)[iVar10]);
						}
						if (ENTITY::DOES_ENTITY_EXIST(Global_1049194[iVar10]))
						{
							ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Global_1049194[iVar10], false, false);
							ENTITY::FREEZE_ENTITY_POSITION(Global_1049194[iVar10], true);
							if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1049194[iVar10], false))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1049194[iVar10], true, true);
							}
							PED::DELETE_PED((*Global_1049194)[iVar10]);
						}
						iVar10++;
					}
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					func_75(3);
				}
				else
				{
					bLocal_182 = true;
					GRAPHICS::_0x71845905BCCDE781(iLocal_37);
					GRAPHICS::_0xE75CDDEBF618C8FF(iLocal_38);
					func_75(4);
				}
			}
			else if (!bLocal_81)
			{
				func_83();
				bLocal_81 = true;
			}
			else if (GRAPHICS::_0xEEF83A759AE06A27(iLocal_37) && AUDIO::_0xE368E8422C860BA7("flash_to_landscape", "rdro_gamemode_transition_sounds", -2))
			{
			}
			else if (!MISC::IS_BIT_SET(iLocal_46, 4))
			{
				if (!SCRIPTS::_IS_LOADING_SCREEN_ACTIVE())
				{
					if (MISC::IS_BIT_SET(iLocal_46, 3))
					{
						MemCopy(&cVar0, {(Global_3145858->f_48624[(Global_3145858->f_38605[iLocal_42 /*22*/])->f_21 /*18*/])->f_8}, 8);
						StringConCat(&cVar0, "_Static", 64);
						CAM::_0xBC016635D6A73B31(Global_3145858->f_48624[(Global_3145858->f_38605[iLocal_42 /*22*/])->f_21 /*18*/], &cVar0, 5);
					}
					if ((!bLocal_34 && !bLocal_44) && (bLocal_36 || bLocal_35))
					{
						StringCopy(&cVar11, "MP_ADV_INTRO_OS", 32);
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_3145858->f_41471)))
						{
							cVar11 = { Global_3145858->f_41471 };
						}
						AUDIO::TRIGGER_MUSIC_EVENT(&cVar11);
					}
					GRAPHICS::_0x9B8D5D4CB8AF58B3(iLocal_37);
					AUDIO::PLAY_SOUND_FRONTEND("flash_to_landscape", "rdro_gamemode_transition_sounds", true, 0);
					MISC::SET_BIT(&iLocal_46, 4);
				}
			}
			break;
		case 3:
			func_24(65536);
			if ((CAM::DOES_CAM_EXIST(&(iLocal_53[0])) && CAM::IS_CAM_INTERPOLATING(&(iLocal_53[0]))) || (CAM::DOES_CAM_EXIST(&(iLocal_53[1])) && CAM::IS_CAM_INTERPOLATING(&(iLocal_53[1]))))
			{
				if (IntToFloat(func_34(&uLocal_63, 0, 0)) > (IntToFloat((Global_3145858->f_38605[iLocal_42 /*22*/])->f_15) * 0.9f))
				{
					func_84();
				}
			}
			else if (MISC::IS_BIT_SET(iLocal_46, 3) && func_34(&uLocal_63, 0, 0) < iLocal_62)
			{
				if (IntToFloat(func_34(&uLocal_63, 0, 0)) > (IntToFloat(iLocal_62) * 0.9f))
				{
					func_84();
				}
			}
			else
			{
				if (!func_2(4096))
				{
					if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
					{
						NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, true, 32, true);
						if (PLAYER::GET_PLAYER_INVINCIBLE(iLocal_32))
						{
							PLAYER::SET_PLAYER_INVINCIBLE(iLocal_32, false);
						}
					}
					else
					{
						bVar15 = true;
					}
				}
				else
				{
					bVar15 = true;
				}
				if (bVar15)
				{
					if (!MISC::IS_BIT_SET(iLocal_46, 3))
					{
						CAM::SET_CAM_ACTIVE(&(iLocal_53[0]), false);
						CAM::SET_CAM_ACTIVE(&(iLocal_53[1]), false);
						CAM::SET_CAM_ACTIVE(&(iLocal_56[0]), true);
					}
					else
					{
						MemCopy(&cVar0, {(Global_3145858->f_48624[(Global_3145858->f_38605[iLocal_42 /*22*/])->f_21 /*18*/])->f_8}, 8);
						StringConCat(&cVar0, "_Static", 64);
						CAM::_0xA54D643D0773EB65(Global_3145858->f_48624[(Global_3145858->f_38605[iLocal_42 /*22*/])->f_21 /*18*/], &cVar0, 5);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1065353216);
					}
					TASK::CLEAR_PED_TASKS(iLocal_33, 1, 0);
					GRAPHICS::ANIMPOSTFX_PLAY("RespawnMissionCheckpoint");
					func_75(5);
				}
			}
			break;
		case 4:
			func_85();
			break;
		case 5:
			if (func_33(&uLocal_65))
			{
				if (func_2(128) && func_34(&uLocal_65, 0, 0) > 1500)
				{
					GRAPHICS::_0xC5CB91D65852ED7E("RespawnMissionCheckpoint");
					func_82(0);
					CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
					STREAMING::END_SRL();
					func_75(7);
				}
			}
			else
			{
				func_35(&uLocal_65, 0, 0);
			}
			break;
		case 6:
			if (bLocal_82 || func_80())
			{
				bLocal_82 = true;
				if (func_2(128))
				{
					func_82(0);
					func_75(7);
				}
			}
			break;
		case 7:
			if (!func_2(16))
			{
				func_86();
			}
			break;
	}
}

void func_51(var uParam0)
{
	var uVar0;

	if (!MISC::IS_BIT_SET(uParam0->f_15, 1))
	{
		if (UISTATEMACHINE::_UISTATEMACHINE_EXISTS(*uParam0) && UISTATEMACHINE::_0xF7C180F57F85D0B8(*uParam0))
		{
			UISTATEMACHINE::_0x6B9FE4F0BA521A19(*uParam0, 0);
			MISC::SET_BIT(&(uParam0->f_15), 1);
		}
	}
	else if (!UISTATEMACHINE::_0x11E73195E735B25B(*uParam0))
	{
		uVar0 = *uParam0;
		UISTATEMACHINE::_UISTATEMACHINE_DESTROY_AND_CLEAR(&uVar0);
		MISC::CLEAR_BIT(&(uParam0->f_15), 0);
		MISC::CLEAR_BIT(&(uParam0->f_15), 1);
	}
}

void func_52(int iParam0)
{
	Global_262151 = (Global_262151 || iParam0);
}

void func_53(int iParam0)
{
	Global_262151 = (&Global_262151 - (Global_262151 && iParam0));
}

int func_54()
{
	return -1;
}

void func_55()
{
	Global_262153 = 0;
}

void func_56()
{
	Global_1070355->f_27136.f_1 = 0;
	Global_1070355->f_27136.f_2 = 0;
}

void func_57(int iParam0)
{
	var uVar0;

	if (UISTATEMACHINE::_UISTATEMACHINE_EXISTS(*iParam0))
	{
		uVar0 = *iParam0;
		UISTATEMACHINE::_UISTATEMACHINE_DESTROY_AND_CLEAR(&uVar0);
		UISTATEMACHINE::_UIFLOWBLOCK_RELEASE(iParam0);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam0->f_3))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(iParam0->f_3);
	}
}

void func_58(bool bParam0)
{
	Global_1939057->f_19 = !bParam0;
}

int func_59(int iParam0)
{
	if (func_87(&(Global_1099293->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_60(int iParam0)
{
	if (func_88(&(Global_1099293->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

char* func_61(int iParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = "";
	switch (iParam0)
	{
		case -1759663922:
			if (MISC::_DOES_STRING_EXIST_IN_STRING(sParam1, "Mission MP - "))
			{
				return HUD::_GET_TEXT_SUBSTRING(sParam1, 13, HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1));
			}
			else
			{
				return HUD::_0xD8402B858F4DDD88(sParam1, HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1));
			}
			break;
		default:
			sVar0 = MISC::_CREATE_VAR_STRING(2, func_89(iParam0));
			if (MISC::_DOES_STRING_EXIST_IN_STRING(sVar0, "Invalid MISSION_SUB_TYPE"))
			{
				sVar0 = "LANDING_FREEROAM_TITLE";
			}
			return sVar0;
	}
	return "Invalid MISSION_SUB_TYPE";
}

char* func_62(int iParam0)
{
	switch (iParam0)
	{
		case 1816768801:
			return "GST_DEATHMATCH";
		case -533426613:
			return "GST_DEATHMATCH_TEAM";
		case -1918441640:
			return "GST_DEATHMATCH_LTS";
		case -457802746:
			return "GST_DEATHMATCH_FTB";
		case 1788958412:
			return "GST_DEATHMATCH_PITP";
		case 1153715636:
			return "GST_DEATHMATCH_LMS";
		case 424482930:
			return "GST_DEATHMATCH_MM";
		case 1272390114:
			return "GST_DEATHMATCH_WOC";
		case -1581094459:
			return "GST_DEATHMATCH_EXC";
		case 1842544025:
			return "GST_DEATHMATCH_TLG";
		case -632356431:
			return "GST_DEATHMATCH_TTLG";
		case -559809431:
			return "GST_DEATHMATCH_HT";
		case 1175500245:
			return "GST_DEATHMATCH_TFTB";
		case -1437925683:
			return "GST_DEATHMATCH_TWOC";
		case -548018579:
			return "GST_DEATHMATCH_EC";
		case 10577687:
			return "GST_DEATHMATCH_MC";
		case -222655798:
			return "GST_DEATHMATCH_GR";
		case -725256130:
			return "GST_DEATHMATCH_TGR";
		default:
			break;
	}
	return "Invalid DEATHMATCH_SUB_TYPE";
}

char* func_63(int iParam0)
{
	switch (iParam0)
	{
		case -784189810:
			return "GST_RACE_STANDA";
		case 1579717899:
			return "GST_RACE_COMBAT";
		case -63669280:
			return "GST_RACE_DUALCO";
		case 851921060:
			return "GST_RACE_ELIM";
		case 2028478397:
			return "GST_RACE_SURVIV";
		case 1457860192:
			return "GST_RACE_TIMECP";
		case -79999383:
			return "GST_RACE_GOLDRU";
		case -1957416901:
			return "GST_RACE_RUNAWT";
		case 218185167:
			return "GST_RACE_TARRAC";
		case 1744858848:
			return "GST_RACE_OPERAC";
		case -1185533313:
			return "GST_RACE_OPTARA";
		default:
			break;
	}
	return "Invalid RACE_SUB_TYPE";
}

var func_64(var uParam0)
{
	return uParam0;
}

int func_65(vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = func_90();
	if (func_91(iVar0))
	{
		if (VOLUME::_0xF256A75210C5C0EB(((*Global_1887327)[iVar0 /*36*/])->f_4, vParam0))
		{
			return iVar0;
		}
	}
	return func_92(vParam0, iParam3);
}

char* func_66(int iParam0)
{
	if (!func_91(iParam0))
	{
		return "";
	}
	switch (iParam0)
	{
		case 0:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_BAY_CDW");
		case 1:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_SCM_MCE");
		case 2:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_SCM_MKW");
		case 3:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_BAY_LAG");
		case 4:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_BAY_LAK");
		case 5:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_BAY_STD");
		case 6:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_BAY_ORP");
		case 7:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_BAY_SKS");
		case 8:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_BAY_SDP");
		case 9:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_BAY_SDB");
		case 10:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_BAY_SWS");
		case 11:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_BGV_AST");
		case 12:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_BGV_BRD");
		case 13:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_BGV_BBF");
		case 14:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_BGV_DAK");
		case 15:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_BGV_FRT");
		case 16:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_BGV_HND");
		case 17:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_BGV_LMS");
		case 18:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_BGV_MHS");
		case 19:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_BGV_MNR");
		case 20:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_BGV_OWD");
		case 21:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_BGV_PNS");
		case 22:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_BGV_PRN");
		case 23:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_BGV_RIS");
		case 24:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_BGV_SHK");
		case 25:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_BGV_SHR");
		case 26:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_BGV_STB");
		case 27:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_BGV_VV");
		case 28:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_GRZ_WS");
		case 30:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_BGV_WSC");
		case 29:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_BGV_BOJ");
		case 31:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_BLU_CBM");
		case 32:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_BLU_CPH");
		case 33:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_BLU_SIS");
		case 35:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_CML_BHB");
		case 36:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_CML_DL");
		case 37:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_CML_OFW");
		case 38:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_CML_SPC");
		case 39:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_GRT_BEC");
		case 40:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_GRT_BW");
		case 41:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_GRT_QC");
		case 42:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_GRZ_ADR");
		case 43:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_HRT_DRS");
		case 53:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_GRZ_CMR");
		case 54:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_CML_CM");
		case 44:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_GRZ_CHZ");
		case 55:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_GRZ_COH");
		case 45:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_GRZ_CLT");
		case 46:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_GRZ_FRZ");
		case 47:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_GRZ_MSC");
		case 48:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_GRZ_MM");
		case 50:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_BGV_SCS");
		case 51:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_GRZ_LC");
		case 58:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_GRZ_TL");
		case 59:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_CML_VET");
		case 60:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_GRZ_WAP");
		case 52:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_BGV_WMT");
		case 62:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_GUA_AGU");
		case 63:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_GUA_CMP");
		case 64:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_GUA_CNT");
		case 65:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_GUA_LAC");
		case 66:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_GUA_MAN");
		case 67:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_HRT_ABM");
		case 69:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_HRT_CMD");
		case 70:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_HRT_CKS");
		case 71:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_HRT_CRF");
		case 72:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_HRT_CBF");
		case 73:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_HRT_DNR");
		case 74:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_HRT_EMR");
		case 75:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_HRT_PIG");
		case 76:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_HRT_HSO");
		case 77:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_HRT_LRN");
		case 78:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_GRZ_LC");
		case 79:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_HRT_LCK");
		case 80:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_HRT_SSS");
		case 81:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_HRT_VAL");
		case 82:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_HRT_APF");
		case 83:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_ROA_ANN");
		case 84:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_ROA_BEV");
		case 68:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_ROA_SBC");
		case 85:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_ROA_BBR");
		case 86:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_ROA_BWD");
		case 87:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_ROA_BTC");
		case 88:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_CML_DVH");
		case 89:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_ROA_HFS");
		case 90:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_ROA_ISS");
		case 91:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_ROA_MCH");
		case 92:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_ROA_MSF");
		case 93:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_ROA_ROV");
		case 94:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_CML_RS");
		case 95:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_ROA_TRP");
		case 97:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_ROA_VHM");
		case 98:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_ROA_VHP");
		case 96:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_ROA_ROJ");
		case 99:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_SCM_BWM");
		case 100:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_SCM_BLG");
		case 101:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_SCM_CGH");
		case 102:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_SCM_CFJ");
		case 103:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_SCM_CMC");
		case 104:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_SCM_CMP");
		case 105:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_SCM_CSS");
		case 106:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_SCM_DRF");
		case 107:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_INV");
		case 108:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_SCM_LS");
		case 109:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_SCM_LTS");
		case 110:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_SCM_RP");
		case 111:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_SCM_RHO");
		case 112:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_SCM_SPS");
		case 113:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_TAL_AUR");
		case 114:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_CML_DS");
		case 115:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_TAL_COC");
		case 116:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_TAL_MAN");
		case 117:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_TAL_PUR");
		case 118:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_TAL_TNR");
		case 119:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_TAL_TRP");
		case 121:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_GAP_TUM");
		case 120:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_GAP_GBR");
		case 122:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_GAP_RFK");
		case 34:
		case 61:
		case 123:
		case 124:
		case 125:
		case 126:
		case 127:
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
		case 137:
			return MISC::_CREATE_VAR_STRING(2, "REG_IF_INV");
		default:
			break;
	}
	return MISC::_CREATE_VAR_STRING(2, "REG_IF_INV");
}

bool func_67()
{
	return Global_1896726->f_382;
}

void func_68()
{
	func_37(0);
}

bool func_69()
{
	return Global_1939221->f_1;
}

void func_70()
{
	Global_1939221->f_12 = 1;
}

void func_71()
{
	if (iLocal_14 > 0 && iLocal_15 < 3)
	{
	}
}

void func_72()
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	bool bVar7;

	if (!CAM::DOES_CAM_EXIST(&(iLocal_53[0])))
	{
		if (!func_73(Global_3145858->f_108) && func_74(Global_3145858->f_108))
		{
			func_93(Global_3145858->f_108, Global_3145858->f_111, Global_3145858->f_114);
		}
		else
		{
			vVar0 = { PED::GET_PED_BONE_COORDS(iLocal_33, 21030, 0f, 0.65f, 0f) };
			vVar3 = { ENTITY::GET_ENTITY_ROTATION(iLocal_33, 0) };
			func_93(vVar0, vVar3, 1110704128 /* Float: 45f */);
		}
	}
	if (func_94())
	{
		bVar6 = PED::IS_PED_ON_MOUNT(iLocal_33);
		bVar7 = PED::IS_PED_IN_ANY_VEHICLE(iLocal_33, false);
		func_95(&iLocal_33, bVar6, bVar7, 0);
		func_82(0);
		iLocal_53[0] = &iLocal_53[1];
		CAM::SET_CAM_ACTIVE(&(iLocal_53[0]), true);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		func_75(1);
	}
}

int func_73(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_74(vector3 vParam0)
{
	vector3 vVar0;
	float fVar3;

	vVar0 = { func_96(iLocal_32) };
	fVar3 = BUILTIN::VDIST2(vParam0, vVar0);
	if (fVar3 <= 10000f)
	{
		return 1;
	}
	return 0;
}

void func_75(int iParam0)
{
	iLocal_14 = iParam0;
}

int func_76()
{
	if (iLocal_43 == -1)
	{
		return 1;
	}
	if (func_73(func_97()))
	{
		return 1;
	}
	if (!func_74(func_97()))
	{
		return 1;
	}
	return 0;
}

int func_77()
{
	if (func_73(*(vLocal_83[0 /*3*/])))
	{
		func_98();
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_78()
{
	char cVar0[16];

	if (iLocal_180 < func_99())
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1049161[iLocal_180]))
		{
			if (iLocal_180 == 0)
			{
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_60, func_97(), func_100(), 0);
				if (MISC::IS_BIT_SET(iLocal_46, 7))
				{
					if (bLocal_36 || bLocal_35)
					{
						func_101(Global_1049161[0]);
					}
					else
					{
						func_102(Global_1049161[0]);
					}
				}
			}
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1049161[iLocal_180], true, true);
			if (PED::IS_PED_MALE(Global_1049161[iLocal_180]))
			{
				StringCopy(&cVar0, "Ped_M_", 16);
			}
			else
			{
				StringCopy(&cVar0, "Ped_F_", 16);
			}
			StringIntConCat(&cVar0, iLocal_180, 16);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_60, &cVar0, Global_1049161[iLocal_180], 0);
			if (PED::IS_PED_ON_MOUNT(Global_1049161[iLocal_180]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1049194[iLocal_180], true, true);
				StringCopy(&cVar0, "Horse_", 16);
				StringIntConCat(&cVar0, iLocal_180, 16);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_60, &cVar0, Global_1049194[iLocal_180], 0);
			}
			if (!MISC::IS_BIT_SET(iLocal_46, 8))
			{
				if (!MISC::IS_BIT_SET(iLocal_46, 7))
				{
					if (PED::IS_PED_ON_MOUNT(Global_1049161[iLocal_180]))
					{
						func_103(Global_1049161[iLocal_180], iLocal_180);
					}
					else
					{
						func_104(Global_1049161[iLocal_180], iLocal_180);
					}
				}
			}
			iLocal_180++;
			return 0;
		}
	}
	else if (iLocal_180 < 32)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1049161[iLocal_180]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1049161[iLocal_180], true, true);
			PED::DELETE_PED((*Global_1049161)[iLocal_180]);
			iLocal_180++;
			return 0;
		}
	}
	return 1;
}

int func_79()
{
	char cVar0[128];
	vector3 vVar16;
	vector3 vVar19;
	bool bVar22;
	bool bVar23;

	if (!func_94())
	{
		return 0;
	}
	if (((!bLocal_80 && (Global_3145858->f_38605[iLocal_42 /*22*/])->f_21 != -1) && !MISC::IS_STRING_NULL_OR_EMPTY(Global_3145858->f_48624[(Global_3145858->f_38605[iLocal_42 /*22*/])->f_21 /*18*/])) && !MISC::IS_STRING_NULL_OR_EMPTY(&((Global_3145858->f_48624[(Global_3145858->f_38605[iLocal_42 /*22*/])->f_21 /*18*/])->f_8)))
	{
		if (!CAM::_0xAA235E2F2C09E952(Global_3145858->f_48624[(Global_3145858->f_38605[iLocal_42 /*22*/])->f_21 /*18*/]))
		{
			if (!CAM::_0x595550376B7EA230(Global_3145858->f_48624[(Global_3145858->f_38605[iLocal_42 /*22*/])->f_21 /*18*/]))
			{
				CAM::_0x1B3C2D961F5FC0E1(Global_3145858->f_48624[(Global_3145858->f_38605[iLocal_42 /*22*/])->f_21 /*18*/]);
				StringCopy(&cVar0, "mp@establishers@", 128);
				StringConCat(&cVar0, &((Global_3145858->f_48624[(Global_3145858->f_38605[iLocal_42 /*22*/])->f_21 /*18*/])->f_8), 128);
				StringConCat(&cVar0, "_SRL", 128);
				STREAMING::PREFETCH_SRL(&cVar0);
			}
			if (!func_33(&uLocal_73))
			{
				func_35(&uLocal_73, 0, 0);
			}
			else if (func_34(&uLocal_73, 0, 0) > 5000)
			{
				bLocal_80 = true;
			}
			return 0;
		}
		else
		{
			MISC::SET_BIT(&iLocal_46, 3);
		}
	}
	else if (!CAM::DOES_CAM_EXIST(&(iLocal_53[0])))
	{
		if (func_73(*(Global_3145858->f_38605[iLocal_42 /*22*/])) || func_73((Global_3145858->f_38605[iLocal_42 /*22*/])->f_3))
		{
			vVar16 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
			vVar19 = { Global_3145858->f_188 };
			vVar19.f_2 = (vVar19.z + 5f);
			func_93(vVar19, vVar16, 1110704128 /* Float: 45f */);
		}
		else
		{
			iLocal_53[0] = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, *(Global_3145858->f_38605[iLocal_42 /*22*/]), (Global_3145858->f_38605[iLocal_42 /*22*/])->f_6, (Global_3145858->f_38605[iLocal_42 /*22*/])->f_12, false, 2);
			iLocal_53[1] = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, (Global_3145858->f_38605[iLocal_42 /*22*/])->f_3, (Global_3145858->f_38605[iLocal_42 /*22*/])->f_9, (Global_3145858->f_38605[iLocal_42 /*22*/])->f_13, false, 2);
		}
	}
	if (MISC::IS_BIT_SET(iLocal_46, 3))
	{
		if (!STREAMING::IS_SRL_LOADED())
		{
			return 0;
		}
		else
		{
			STREAMING::_0xD9F2FF4AF394D926();
			STREAMING::BEGIN_SRL();
		}
	}
	if (!CAM::DOES_CAM_EXIST(&(iLocal_56[0])))
	{
		bVar22 = PED::IS_PED_ON_MOUNT(iLocal_33);
		bVar23 = PED::IS_PED_IN_ANY_VEHICLE(iLocal_33, false);
		func_95(&iLocal_33, bVar22, bVar23, 0);
	}
	return 1;
}

int func_80()
{
	var uVar0;

	if (GRAPHICS::_0x9AB192A9EF980EED(iLocal_37, 2, 0, &uVar0))
	{
		func_5(&Local_16, 0);
		AUDIO::_0x9B1FC259187C97C0("landscape_shot");
		return 1;
	}
	return 0;
}

void func_81(int iParam0)
{
	if (func_105((Global_1070355->f_19683.f_1[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*8*/])->f_7, iParam0))
	{
		func_106(&((Global_1070355->f_19683.f_1[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*8*/])->f_7), iParam0);
	}
}

void func_82(bool bParam0)
{
	if (bParam0)
	{
		GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(false);
	}
	else
	{
		GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
	}
}

void func_83()
{
	func_82(0);
	SCRIPTS::_0x778D4733E0F2F265(0);
}

void func_84()
{
	if (!bLocal_181)
	{
		PED::_0xCB9401F918CB0F75(iLocal_33, "SpawnMissionIntro", true, 20);
		PED::_0x2208438012482A1A(iLocal_33, true, true);
		bLocal_181 = true;
	}
}

void func_85()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	switch (iLocal_15)
	{
		case 0:
			if ((CAM::DOES_CAM_EXIST(&(iLocal_53[0])) && CAM::IS_CAM_INTERPOLATING(&(iLocal_53[0]))) || (CAM::DOES_CAM_EXIST(&(iLocal_53[1])) && CAM::IS_CAM_INTERPOLATING(&(iLocal_53[1]))))
			{
			}
			else if (MISC::IS_BIT_SET(iLocal_46, 3))
			{
				if (func_33(&uLocal_63))
				{
					if (func_34(&uLocal_63, 0, 0) > iLocal_62)
					{
						func_35(&uLocal_67, 0, 0);
						func_107();
						func_108(1);
					}
				}
				else
				{
					func_35(&uLocal_63, 0, 0);
				}
			}
			else
			{
				func_35(&uLocal_67, 0, 0);
				func_107();
				func_108(1);
			}
			break;
		case 1:
			if (!bLocal_183)
			{
				iVar0 = 0;
				while (iVar0 <= 31)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Global_1049161[iVar0]))
					{
						ENTITY::SET_ENTITY_VISIBLE(Global_1049161[iVar0], true);
						if (ENTITY::DOES_ENTITY_EXIST(Global_1049194[iVar0]))
						{
							ENTITY::SET_ENTITY_VISIBLE(Global_1049194[iVar0], true);
						}
					}
					iVar0++;
				}
				bLocal_183 = true;
			}
			if ((CAM::DOES_CAM_EXIST(&(iLocal_53[0])) && CAM::IS_CAM_ACTIVE(&(iLocal_53[0]))) || (CAM::DOES_CAM_EXIST(&(iLocal_53[1])) && CAM::IS_CAM_ACTIVE(&(iLocal_53[1]))))
			{
				if (!MISC::IS_BIT_SET(iLocal_46, 3))
				{
					CAM::SET_CAM_ACTIVE(&(iLocal_53[0]), false);
					CAM::SET_CAM_ACTIVE(&(iLocal_53[1]), false);
				}
			}
			else if (ANIMSCENE::_0xCBFC7725DE6CE2E0(iLocal_60, 0) && ANIMSCENE::_0x3FBC3F51BF12DFBF(iLocal_60) < 0.825f)
			{
			}
			else
			{
				GRAPHICS::_0x9B8D5D4CB8AF58B3(iLocal_38);
				bVar1 = func_109(iLocal_32, 1, -1, 1);
				if (MISC::IS_BIT_SET(iLocal_46, 10))
				{
					Local_16.f_2 = 1441775019;
				}
				else
				{
					Local_16.f_2 = -1678669845;
				}
				MISC::CLEAR_BIT(&(Local_16.f_15), 0);
				if (iLocal_41 != -1 && !MISC::IS_STRING_NULL_OR_EMPTY((*Global_3145728)[iLocal_41 /*8*/]))
				{
					func_110(&Local_16, PLAYER::GET_PLAYER_NAME(iLocal_32), (*Global_3145728)[iLocal_41 /*8*/], " ", " ", " ", " ", bVar1);
				}
				else
				{
					func_110(&Local_16, PLAYER::GET_PLAYER_NAME(iLocal_32), " ", " ", " ", " ", " ", bVar1);
				}
				func_38(&Local_16);
				func_35(&uLocal_67, 0, 0);
				func_35(&uLocal_69, 0, 0);
				func_108(2);
			}
			break;
		case 2:
			func_24(65536);
			if (!func_2(16384))
			{
				iVar2 = func_34(&uLocal_69, 0, 0);
				if (iVar2 < 15000)
				{
					if (iVar2 > 6500)
					{
						if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
						{
							CAM::DO_SCREEN_FADE_OUT(650);
							func_111(0);
						}
					}
					func_35(&uLocal_67, 0, 0);
					return;
				}
			}
			iVar3 = func_34(&uLocal_67, 0, 0);
			if (iVar3 > 6500)
			{
				if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(650);
				}
			}
			if (iVar3 > 7500)
			{
				ANIMSCENE::ABORT_ANIM_SCENE(iLocal_60, false);
				iVar4 = 0;
				while (iVar4 <= 31)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Global_1049161[iVar4]))
					{
						if (iLocal_60 != -1)
						{
							ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_60, "", Global_1049161[iVar4]);
						}
						if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1049161[iVar4], false))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1049161[iVar4], true, true);
						}
						PED::DELETE_PED((*Global_1049161)[iVar4]);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Global_1049194[iVar4]))
					{
						if (iLocal_60 != -1)
						{
							ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_60, "", Global_1049194[iVar4]);
						}
						if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1049194[iVar4], false))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1049194[iVar4], true, true);
						}
						PED::DELETE_PED((*Global_1049194)[iVar4]);
					}
					iVar4++;
				}
				ANIMSCENE::RESET_ANIM_SCENE(iLocal_60, 0);
				if (!func_2(4096))
				{
					NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, true, 32, true);
				}
				if (PLAYER::GET_PLAYER_INVINCIBLE(iLocal_32))
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iLocal_32, false);
				}
				func_112();
				func_5(&Local_16, 0);
				if (bLocal_36 || bLocal_35)
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1065353216);
				}
				func_108(3);
			}
			else if (iVar3 > 5000)
			{
				func_84();
			}
			break;
		case 3:
			GRAPHICS::_0xEDA5CBECF56E1386(iLocal_38);
			if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(350);
			}
			func_82(0);
			GRAPHICS::ANIMPOSTFX_PLAY("RespawnMissionCheckpoint");
			func_24(131072);
			if (AUDIO::_0xE368E8422C860BA7("exit_photo_to_match", "rdro_gamemode_transition_sounds", -2))
			{
				AUDIO::PLAY_SOUND_FRONTEND("exit_photo_to_match", "rdro_gamemode_transition_sounds", true, 0);
				AUDIO::_0x9B1FC259187C97C0("gameplay");
			}
			func_108(4);
			break;
		case 4:
			func_75(5);
			break;
	}
}

void func_86()
{
	if (!&iLocal_75[3])
	{
		if (!func_33(&uLocal_71))
		{
			iLocal_75[3] = 1;
			func_35(&uLocal_71, 0, 0);
		}
		else if (func_34(&uLocal_71, 0, 0) > 2900)
		{
			iLocal_75[3] = 1;
		}
		else if (!&iLocal_75[2] == 1 && func_34(&uLocal_71, 0, 0) > 1800)
		{
			iLocal_75[2] = 1;
		}
		else if (!&iLocal_75[1] == 1 && func_34(&uLocal_71, 0, 0) > 900)
		{
			iLocal_75[1] = 1;
		}
	}
	else
	{
		func_24(16);
	}
}

bool func_87(var uParam0, int iParam1, int iParam2)
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

bool func_88(var uParam0, int iParam1, int iParam2)
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

char* func_89(int iParam0)
{
	switch (iParam0)
	{
		case -1759663922:
			return "UGC_MST_STRY";
		case -318976023:
			return "UGC_MST_LGNDB";
		case 772881414:
			return "UGC_MST_MNSHN";
		case 603385332:
			return "UGC_MST_DEL";
		case 534981680:
			return "UGC_MST_ESCF";
		case -915869673:
			return "UGC_MST_TTYG";
		case -360644098:
			return "UGC_MST_TTYT";
		case 1520184724:
			return "UGC_MST_AFGPO";
		case -777132493:
			return "UGC_MST_PDR";
		case -163684180:
			return "UGC_MST_SOW";
		case -1649482077:
			return "UGC_MST_UIS";
		case -698288936:
			return "UGC_MST_PROT";
		case 909765192:
			return "UGC_MST_PDH";
		case 1078150940:
			return "UGC_MST_AWIP";
		case 482206342:
			return "UGC_MST_LEG";
		default:
			break;
	}
	return "Invalid MISSION_SUB_TYPE";
}

int func_90()
{
	return Global_1893575->f_2;
}

bool func_91(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_92(vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	iVar0 = func_113(vParam0);
	iVar1 = -1;
	if (Global_1893558[iVar0] > 0)
	{
		iVar2 = (Global_1893558[iVar0] - 1);
		bVar3 = false;
		while (iVar2 >= 0 && !bVar3)
		{
			iVar4 = (*Global_1892741)[iVar0 /*51*/][iVar2];
			if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1887327)[iVar4 /*36*/])->f_4))
			{
				if (VOLUME::_0xF256A75210C5C0EB(((*Global_1887327)[iVar4 /*36*/])->f_4, vParam0))
				{
					switch (((*Global_1887327)[iVar4 /*36*/])->f_21)
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

void func_93(vector3 vParam0, vector3 vParam3, float fParam6)
{
	iLocal_53[0] = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, vParam0, vParam3, fParam6, false, 2);
	iLocal_53[1] = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, vParam0, vParam3, fParam6, false, 2);
}

int func_94()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	var uVar8;
	var uVar11;
	var uVar14;
	int iVar15;

	if (!bLocal_58)
	{
		if (iLocal_59 == 0)
		{
			iVar0 = 339;
			vVar1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_33, true, false), 0f, 1.3f, 1f, 0.1f) };
			vVar4 = { CAM::GET_GAMEPLAY_CAM_COORD() };
			iLocal_59 = SHAPETEST::START_SHAPE_TEST_CAPSULE(vVar1, vVar4, 0.25f, iVar0, iLocal_33, 4);
		}
		else
		{
			iVar15 = SHAPETEST::GET_SHAPE_TEST_RESULT(iLocal_59, &iVar7, &uVar8, &uVar11, &uVar14);
			if (iVar15 == 2)
			{
				if (iVar7 == 0)
				{
				}
				bLocal_58 = true;
			}
			else if (iVar15 == 0)
			{
				bLocal_58 = true;
			}
		}
		return 0;
	}
	return 1;
}

void func_95(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { CAM::GET_GAMEPLAY_CAM_COORD() };
	vVar3 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	iLocal_56[0] = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, vVar0, vVar3, 65f, false, 2);
	if (bParam1)
	{
	}
	if (bParam2 || !bParam3)
	{
		return;
	}
}

Vector3 func_96(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

Vector3 func_97()
{
	return *(Global_3145858->f_38187[iLocal_43 /*13*/]);
}

void func_98()
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		bVar1 = ENTITY::DOES_ENTITY_EXIST(Global_1049194[0]);
		*(vLocal_83[iVar0 /*3*/]) = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*(Global_3145858->f_38187[iLocal_43 /*13*/]), (Global_3145858->f_38187[iLocal_43 /*13*/])->f_3.f_2, func_114((Global_3145858->f_38187[iLocal_43 /*13*/])->f_6, iVar0, bVar1)) };
		iVar0++;
	}
}

int func_99()
{
	if (!MISC::IS_BIT_SET(iLocal_46, 7))
	{
		if (bLocal_36 || bLocal_35)
		{
			return 16;
		}
		else
		{
			return 4;
		}
	}
	else if (bLocal_36 || bLocal_35)
	{
		return 1;
	}
	else
	{
		return 4;
	}
	return 0;
}

Vector3 func_100()
{
	return (Global_3145858->f_38187[iLocal_43 /*13*/])->f_3;
}

void func_101(int iParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &bVar0, true, 0, true);
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &bVar1, true, 1, true);
	bVar4 = (func_115(bVar0) && func_115(bVar1));
	iVar2 = func_116(bVar0);
	if (!WEAPON::IS_WEAPON_VALID(bVar0) || bVar0 == joaat("weapon_unarmed"))
	{
		iVar3 = 0;
	}
	else if (bVar4)
	{
		iVar3 = 2;
	}
	else if (WEAPON::_0x6E4E1A82081EABED(bVar0))
	{
		WEAPON::REMOVE_WEAPON_FROM_PED(iParam0, bVar0, true, -142743235);
		iVar3 = 6;
	}
	else if (((iVar2 == -594562071 || iVar2 == joaat("group_rifle")) || iVar2 == joaat("group_sniper")) || (iVar2 == joaat("group_shotgun") && bVar0 != joaat("weapon_shotgun_sawedoff")))
	{
		iVar3 = 3;
	}
	else if (iVar2 == joaat("weapon_thrown_molotov"))
	{
		iVar3 = 7;
	}
	else if (iVar2 == 1151374672)
	{
		iVar3 = 8;
	}
	else if (WEAPON::_0x30E7C16B12DA8211(bVar0) || WEAPON::_0x959383DCD42040DA(bVar0))
	{
		iVar3 = 5;
	}
	else if (func_117(bVar0))
	{
		iVar3 = 4;
	}
	else if (WEAPON::_0xD955FEE4B87AFA07(bVar0))
	{
		iVar3 = 1;
	}
	else
	{
		iVar3 = 0;
	}
	if (PED::IS_PED_MALE(iParam0))
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_60, "isMale", true, false);
	}
	else
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_60, "isFemale", true, false);
	}
	ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_60, "weapon_Index", iVar3, false);
}

void func_102(int iParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;

	iVar3 = 0;
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &bVar0, true, 0, true);
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &bVar1, true, 1, true);
	bVar4 = (func_115(bVar0) && func_115(bVar1));
	iVar2 = func_116(bVar0);
	if (!WEAPON::IS_WEAPON_VALID(bVar0) || bVar0 == joaat("weapon_unarmed"))
	{
		iVar3 = 0;
	}
	else if (bVar4)
	{
		iVar3 = 2;
	}
	else if (((iVar2 == -594562071 || iVar2 == joaat("group_rifle")) || iVar2 == joaat("group_sniper")) || (iVar2 == joaat("group_shotgun") && bVar0 != joaat("weapon_shotgun_sawedoff")))
	{
		iVar3 = 3;
	}
	else if (iVar2 == joaat("weapon_thrown_molotov"))
	{
		iVar3 = 7;
	}
	else if (iVar2 == 1151374672)
	{
		iVar3 = 8;
	}
	else if (WEAPON::_0x6E4E1A82081EABED(bVar0))
	{
		WEAPON::REMOVE_WEAPON_FROM_PED(iParam0, bVar0, true, -142743235);
		iVar3 = 6;
	}
	else if (WEAPON::_0x30E7C16B12DA8211(bVar0))
	{
		iVar3 = 5;
	}
	else if (func_117(bVar0))
	{
		iVar3 = 4;
	}
	else if (WEAPON::_0xD955FEE4B87AFA07(bVar0))
	{
		iVar3 = 1;
	}
	else
	{
		iVar3 = 0;
	}
	ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_60, "BGPed_Enable", true, false);
	ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_60, "Weapon_Int", iVar3, false);
	iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
	ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_60, "BGPed_Variation_Int", iVar5, false);
}

void func_103(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	char cVar3[16];
	int iVar5;
	bool bVar6;

	StringCopy(&cVar3, "weapon_Index_", 16);
	StringIntConCat(&cVar3, iParam1, 16);
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &bVar0, true, 0, true);
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &bVar1, true, 1, true);
	bVar6 = (func_115(bVar0) && func_115(bVar1));
	iVar2 = func_116(bVar0);
	if (!WEAPON::IS_WEAPON_VALID(bVar0) || bVar0 == joaat("weapon_unarmed"))
	{
		iVar5 = 0;
	}
	else if (bVar6)
	{
		iVar5 = 2;
	}
	else if (((iVar2 == -594562071 || iVar2 == joaat("group_rifle")) || iVar2 == joaat("group_sniper")) || (iVar2 == joaat("group_shotgun") && bVar0 != joaat("weapon_shotgun_sawedoff")))
	{
		iVar5 = 3;
	}
	else if (func_117(bVar0))
	{
		iVar5 = 4;
	}
	else if (WEAPON::_0x6E4E1A82081EABED(bVar0))
	{
		WEAPON::REMOVE_WEAPON_FROM_PED(iParam0, bVar0, true, -142743235);
		iVar5 = 6;
	}
	else if (iVar2 == joaat("weapon_thrown_molotov"))
	{
		iVar5 = 7;
	}
	else if (iVar2 == 1151374672)
	{
		iVar5 = 8;
	}
	else if (WEAPON::_0x30E7C16B12DA8211(bVar0))
	{
		iVar5 = 5;
	}
	else if (WEAPON::_0xD955FEE4B87AFA07(bVar0))
	{
		iVar5 = 1;
	}
	else
	{
		iVar5 = 0;
	}
	ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_60, &cVar3, iVar5, false);
}

void func_104(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	char cVar3[16];
	int iVar5;
	bool bVar6;

	StringCopy(&cVar3, "weapon_Index_", 16);
	StringIntConCat(&cVar3, iParam1, 16);
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &bVar0, true, 0, true);
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &bVar1, true, 1, true);
	bVar6 = (func_115(bVar0) && func_115(bVar1));
	iVar2 = func_116(bVar0);
	if (!WEAPON::IS_WEAPON_VALID(bVar0) || bVar0 == joaat("weapon_unarmed"))
	{
		iVar5 = 0;
	}
	else if (bVar6)
	{
		iVar5 = 2;
	}
	else if (((iVar2 == -594562071 || iVar2 == joaat("group_rifle")) || iVar2 == joaat("group_sniper")) || (iVar2 == joaat("group_shotgun") && bVar0 != joaat("weapon_shotgun_sawedoff")))
	{
		iVar5 = 3;
	}
	else if (WEAPON::_0x6E4E1A82081EABED(bVar0))
	{
		WEAPON::REMOVE_WEAPON_FROM_PED(iParam0, bVar0, true, -142743235);
		iVar5 = 6;
	}
	else if (iVar2 == joaat("weapon_thrown_molotov"))
	{
		iVar5 = 7;
	}
	else if (iVar2 == 1151374672)
	{
		iVar5 = 8;
	}
	else if (WEAPON::_0x30E7C16B12DA8211(bVar0))
	{
		iVar5 = 5;
	}
	else if (func_117(bVar0))
	{
		iVar5 = 4;
	}
	else if (WEAPON::_0xD955FEE4B87AFA07(bVar0) || (iVar2 == joaat("group_shotgun") && bVar0 == joaat("weapon_shotgun_sawedoff")))
	{
		iVar5 = 1;
	}
	else
	{
		iVar5 = 0;
	}
	ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_60, &cVar3, iVar5, false);
}

bool func_105(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_106(var uParam0, int iParam1)
{
	func_118(uParam0, iParam1);
}

void func_107()
{
	if (iLocal_60 != -1)
	{
		ANIMSCENE::START_ANIM_SCENE(iLocal_60);
		AUDIO::_0x9B1FC259187C97C0("player_team_intro");
	}
}

void func_108(int iParam0)
{
	iLocal_15 = iParam0;
}

int func_109(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
	{
		if (iParam2 == -1)
		{
			return joaat("COLOR_GREYDARK");
		}
		else
		{
			return 636925055;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 636925055;
	}
	iVar2 = iParam0;
	if (func_120(func_119(0)) && func_121(func_119(0)) == 7)
	{
		bVar0 = true;
		iVar3 = 11;
		iVar4 = (iVar3 / 32);
		iVar5 = (iVar3 - iVar4 * 32);
		bVar1 = MISC::IS_BIT_SET(&(Global_3145858->f_6[iVar4]), iVar5);
	}
	if ((Global_1070355->f_19683.f_1[iVar2 /*8*/])->f_5 != 0)
	{
		return (Global_1070355->f_19683.f_1[iVar2 /*8*/])->f_5;
	}
	if (bParam3 && (Global_1070355->f_19683.f_1[iVar2 /*8*/])->f_6 != 0)
	{
		return (Global_1070355->f_19683.f_1[iVar2 /*8*/])->f_6;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		if (bVar0 && bVar1)
		{
			iVar6 = func_122(iParam0);
			if (iVar6 == -1031763995 && NETWORK::_NETWORK_IS_PLAYER_IN_SPECTATOR_MODE(iParam0))
			{
				return joaat("COLOR_WHITE");
			}
			else
			{
				return iVar6;
			}
		}
		else
		{
			return func_123(iParam0);
		}
	}
	if (iVar2 < 0 || iVar2 >= 32)
	{
		return 0;
	}
	if (func_105((Global_1070355->f_19683.f_1[iVar2 /*8*/])->f_7, 1024))
	{
		return -508184943;
	}
	iVar7 = func_124(iParam0, 1);
	if (!bVar0)
	{
		if (func_125(iParam0, bParam1))
		{
			return func_123(iParam0);
		}
		else if (func_126(iParam0, bParam1))
		{
			if (func_127(iParam0, bParam1))
			{
				return 1891514641;
			}
			else
			{
				if (iVar7 > 5)
				{
					return -437407570;
				}
				else if (iVar7 > 3)
				{
					return -437407570;
				}
				else if (iVar7 > 1)
				{
					return 1201428499;
				}
				return 63157909;
			}
		}
	}
	else if (bVar1)
	{
		return func_122(iParam0);
	}
	else if (func_125(iParam0, bParam1))
	{
		if (PLAYER::PLAYER_ID() == iParam0)
		{
			return joaat("COLOR_WHITE");
		}
		else if (func_129(func_128(func_119(0)), 1) == 395262693)
		{
			return func_123(iParam0);
		}
		else
		{
			return func_123(iParam0);
		}
	}
	else if (func_126(iParam0, bParam1))
	{
		return 1891514641;
	}
	return 830499243;
}

void func_110(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, bool bParam7)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_3))
	{
		uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "transitionData");
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_4))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_4, sParam1);
	}
	else
	{
		uParam0->f_4 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "gamerTag", sParam1);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_5))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_5, sParam2);
	}
	else
	{
		uParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "teamName", sParam2);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_12))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_12, bParam7);
	}
	else
	{
		uParam0->f_12 = DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_3, "teamNameColor", bParam7);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(&(uParam0->f_6[0])))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&(uParam0->f_6[0]), sParam3);
	}
	else
	{
		uParam0->f_6[0] = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "info0", sParam3);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(&(uParam0->f_6[1])))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&(uParam0->f_6[1]), sParam4);
	}
	else
	{
		uParam0->f_6[1] = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "info1", sParam4);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(&(uParam0->f_6[2])))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&(uParam0->f_6[2]), sParam5);
	}
	else
	{
		uParam0->f_6[2] = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "info2", sParam5);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(&(uParam0->f_6[3])))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&(uParam0->f_6[3]), sParam6);
	}
	else
	{
		uParam0->f_6[3] = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "info3", sParam6);
	}
}

void func_111(int iParam0)
{
	int iVar0;

	iVar0 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	if (SCRIPTS::_DOES_THREAD_EXIST(Global_1939057->f_102.f_1) && Global_1939057->f_102.f_1 != iVar0)
	{
		return;
	}
	Global_1939057->f_102.f_1 = iVar0;
	Global_1939057->f_102 = iParam0;
}

void func_112()
{
	Global_1939057->f_102 = -1;
	Global_1939057->f_102.f_1 = 0;
}

int func_113(vector3 vParam0)
{
	int iVar0;

	iVar0 = func_130(vParam0, 0f, 0f, 0, 2);
	return func_130(vParam0, ((*Global_1892728)[iVar0 /*3*/])->f_1, ((*Global_1892728)[iVar0 /*3*/])->f_2, Global_1892728[iVar0 /*3*/], 4);
}

Vector3 func_114(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			if (bParam2)
			{
				switch (iParam1)
				{
					case 0:
						return -0.6f, 20.4f, 0f;
					case 1:
						return 0.75f, 20.76f, 0f;
					case 2:
						return -3f, 20.6f, 0f;
					case 3:
						return 4.1f, 21.1f, 0f;
					case 4:
						return -6.1f, 21.2f, 0f;
					case 5:
						return 5.6f, 20.5f, 0f;
					case 6:
						return -7.1f, 21.2f, 0f;
					case 7:
						return 7.7f, 20.5f, 0f;
					case 8:
						return 0.3f, 23.9f, 0f;
					case 9:
						return -0.75f, 23.76f, 0f;
					case 10:
						return 3f, 23.2f, 0f;
					case 11:
						return -4.1f, 24.1f, 0f;
					case 12:
						return 6.1f, 24.25f, 0f;
					case 13:
						return -5.6f, 22.75f, 0f;
					case 14:
						return 7.1f, 24.1f, 0f;
					case 15:
						return -7.7f, 22.85f, 0f;
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return 0.3f, 17.4f, 0f;
					case 1:
						return -0.55f, 17.76f, 0f;
					case 2:
						return 1.2f, 17.6f, 0f;
					case 3:
						return -1.3f, 18.1f, 0f;
					case 4:
						return 1.8f, 17.2f, 0f;
					case 5:
						return -1.8f, 17.5f, 0f;
					case 6:
						return 2.1f, 17.2f, 0f;
					case 7:
						return -2.5f, 17.5f, 0f;
					case 8:
						return 0.3f, 19.4f, 0f;
					case 9:
						return -0.75f, 19.76f, 0f;
					case 10:
						return 1.92f, 19.6f, 0f;
					case 11:
						return -1.7f, 20.1f, 0f;
					case 12:
						return 2.8f, 20.2f, 0f;
					case 13:
						return -2.7f, 19.5f, 0f;
					case 14:
						return 3.8f, 20.2f, 0f;
					case 15:
						return -3.9f, 19.5f, 0f;
					default:
						break;
				}
			}
			break;
	}
	return 0f, 0f, 0f;
}

bool func_115(bool bParam0)
{
	return (WEAPON::IS_WEAPON_VALID(bParam0) && bParam0 != joaat("weapon_unarmed"));
}

int func_116(bool bParam0)
{
	if (WEAPON::_0xDDC64F5E31EEDAB6(bParam0))
	{
		return joaat("group_pistol");
	}
	else if (WEAPON::_0xC212F1D05A8232BB(bParam0))
	{
		return -1101297303;
	}
	else if (WEAPON::_0xDDB2578E95EF7138(bParam0))
	{
		return -594562071;
	}
	else if (WEAPON::_0x0A82317B7EBFC420(bParam0))
	{
		return joaat("group_rifle");
	}
	else if (WEAPON::_0xC75386174ECE95D5(bParam0))
	{
		return joaat("group_shotgun");
	}
	else if (WEAPON::_0x6AD66548840472E5(bParam0))
	{
		return joaat("group_sniper");
	}
	return 0;
}

bool func_117(bool bParam0)
{
	return WEAPON::_0xC4DEC3CA8C365A5D(bParam0);
}

void func_118(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

struct<2> func_119(int iParam0)
{
	return *(Global_1900718->f_1[iParam0 /*2*/]);
}

bool func_120(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_131(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_121(var uParam0, var uParam1)
{
	return uParam0;
}

int func_122(int iParam0)
{
	switch (PLAYER::GET_PLAYER_TEAM(iParam0))
	{
		case 0:
			return -275684858;
		case 1:
			return -1561147190;
		case 2:
			return -736318691;
		case 3:
			return 158864851;
		case 4:
			return 923463928;
		case 5:
			return -317694716;
		case 6:
			return 461388259;
		case 7:
			return 1811916478;
		case 8:
			return 1713937168;
		default:
			break;
	}
	return -1031763995;
}

int func_123(int iParam0)
{
	if (_NAMESPACE26::_0x901E0DC25080C8B9(iParam0) != Global_1273882->f_15 && !func_132())
	{
		return 636925055;
	}
	return -963477619;
}

int func_124(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = BUILTIN::FLOOR(func_133(iParam0, bParam1));
	if (bParam1)
	{
		iVar3 = iParam0;
		if (iVar3 < 0 || iVar3 >= 32)
		{
			iVar2 = 0;
		}
		else
		{
			iVar2 = BUILTIN::FLOOR(((*Global_1097609)[iVar3 /*51*/])->f_18);
		}
		if (iVar2 > iVar0)
		{
			iVar1 = iVar2;
		}
		else
		{
			iVar1 = iVar0;
		}
	}
	else
	{
		iVar1 = iVar0;
	}
	if (iVar1 < Global_1901929->f_672.f_31)
	{
		return 0;
	}
	if (iVar1 < Global_1901929->f_672.f_32)
	{
		return 1;
	}
	if (iVar1 < Global_1901929->f_672.f_33)
	{
		return 2;
	}
	if (iVar1 < Global_1901929->f_672.f_34)
	{
		return 3;
	}
	if (iVar1 < Global_1901929->f_672.f_35)
	{
		return 4;
	}
	if (iVar1 < Global_1901929->f_672.f_36)
	{
		return 5;
	}
	return 6;
}

int func_125(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 == 255)
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (iParam0 == Global_1273882->f_10)
	{
		return 1;
	}
	iVar0 = iParam0;
	if (!&Global_1273882->f_22[iVar0])
	{
		return 0;
	}
	if (bParam1)
	{
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070355->f_26836), iVar0) || SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070355->f_26834), iVar0))
		{
			return 0;
		}
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070355->f_26835), iVar0))
		{
			return 1;
		}
	}
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070355->f_26832), iVar0))
	{
		return 1;
	}
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070355->f_26831), iVar0) || SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070355->f_26833), iVar0))
	{
		return 0;
	}
	iVar1 = PLAYER::GET_PLAYER_TEAM(Global_1273882->f_10);
	iVar2 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if ((iVar1 != -1 && iVar2 != -1) && iVar1 == iVar2)
	{
		return 1;
	}
	else if (_NAMESPACE26::_0x81FB74C83C2ED69F(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_126(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return false;
	}
	if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return true;
	}
	if (bParam1)
	{
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070355->f_26835), iVar0))
		{
			return false;
		}
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070355->f_26836), iVar0) || SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070355->f_26834), iVar0))
		{
			return true;
		}
	}
	if (func_134(iParam0))
	{
		return true;
	}
	return !func_125(iParam0, 0);
}

int func_127(int iParam0, bool bParam1)
{
	int iVar0;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return 0;
	}
	if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (bParam1)
	{
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070355->f_26835), iVar0) || SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070355->f_26836), iVar0))
		{
			return 0;
		}
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070355->f_26834), iVar0))
		{
			return 1;
		}
	}
	if (func_135(iParam0))
	{
		return 0;
	}
	if (func_134(iParam0))
	{
		return 0;
	}
	if (func_136(iParam0))
	{
		return 1;
	}
	return func_137(iParam0);
}

int func_128(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_138(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_129(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -504335712;
		case 1:
			return 395262693;
		case 2:
			return -933924539;
		case 3:
			return 371211549;
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

int func_130(struct<2> Param0, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6)
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

int func_131(struct<2> Param0)
{
	int iVar0;

	if (!func_139(Param0))
	{
		return -1;
	}
	iVar0 = func_140(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1070355->f_17817.f_1[iVar0 /*3*/])->f_2;
}

int func_132()
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
	if (!func_139(*Global_1051163) && Global_1572887->f_7 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

float func_133(int iParam0, bool bParam1)
{
	int iVar0;

	if (!Global_1131373->f_6289)
	{
		return 0f;
	}
	if (iParam0 == &Global_1273882->f_154[&Global_1273882])
	{
		return Global_17173.f_2619;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0f;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return 0f;
	}
	if ((_NAMESPACE26::_0x149A2751AB66AC02(_NAMESPACE26::_0x901E0DC25080C8B9(iParam0)) > 1 && bParam1) && ((*Global_1097609)[iVar0 /*51*/])->f_18 >= ((*Global_1097609)[iVar0 /*51*/])->f_45)
	{
		return ((*Global_1097609)[iVar0 /*51*/])->f_18;
	}
	return ((*Global_1097609)[iVar0 /*51*/])->f_45;
}

int func_134(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070355->f_26833), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_135(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070355->f_26832), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_136(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070355->f_26831), iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_137(int iParam0)
{
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		func_141(iParam0);
		return false;
	}
	if (func_136(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1273882->f_10, iParam0) != 2)
		{
			func_142(iParam0, 5, 1, 1, 0, 0);
		}
		return true;
	}
	return (NETWORK::_0x862C5040F4888741(Global_1273882->f_10, iParam0) || NETWORK::_0xFE53B1F8D43F19BF(Global_1273882->f_10, iParam0) == 2);
}

int func_138(struct<2> Param0, int iParam2)
{
	if (!func_139(Param0))
	{
		return 0;
	}
	func_143(iParam2);
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

int func_139(struct<2> Param0)
{
	if (!func_144(Param0))
	{
		return 0;
	}
	if (Param0.f_1 < 0)
	{
		return 0;
	}
	if (Param0.f_1 >= func_145(Param0))
	{
		return 0;
	}
	return 1;
}

int func_140(struct<2> Param0)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	int iVar8;

	if (Global_1070355->f_17817 <= 0)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_138(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1070355->f_17817 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_138(*(Global_1070355->f_17817.f_1[iVar8 /*3*/]), &vVar3);
		if (vVar3.x > vVar0.x)
		{
			iVar7 = (iVar8 - 1);
		}
		else if (vVar3.x < vVar0.x)
		{
			iVar6 = iVar8 + 1;
		}
		else
		{
			return iVar8;
		}
	}
	return -1;
}

void func_141(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_16 != 0 || Global_1572887->f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (&Global_1070355->f_19683.f_1[iVar0 /*8*/] == 0)
	{
		return;
	}
	func_146(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1070355->f_19683.f_1[iVar0 /*8*/] = 0;
}

void func_142(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	bool bVar5;
	struct<8> Var6;

	if (Global_1572887->f_16 != 0 || Global_1572887->f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (func_147(iVar0, iParam1, iParam5))
	{
		iVar1 = 1;
	}
	if (&Global_1070355->f_19683.f_1[iVar0 /*8*/] != 2)
	{
		if (!&Global_1273882->f_22[iVar0])
		{
			func_141(iParam0);
			return;
		}
		NETWORK::_0x51951DE06C0D1C40(iParam0, 2);
		Global_1070355->f_19683.f_1[iVar0 /*8*/] = 2;
		iVar1 = 1;
	}
	if (iParam2 && iVar1)
	{
		iVar2 = 0;
		while (iVar2 <= 31)
		{
			iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
			if (iVar2 != &Global_1273882 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
			{
				if (_NAMESPACE26::_0x81FB74C83C2ED69F(iVar3))
				{
					if (bParam3)
					{
						SCRIPTS::_0x31010318BA9897AC(&uVar4, iVar2);
						bVar5 = true;
					}
				}
				else if (_NAMESPACE26::_0x3F59FE6F37869576(iVar3, iParam0))
				{
					if (bParam4)
					{
						SCRIPTS::_0x31010318BA9897AC(&uVar4, iVar2);
						bVar5 = true;
					}
					if (iVar2 != iVar0)
					{
						func_142(iVar3, iParam1, 0, 1, 0, 0);
					}
				}
			}
			iVar2++;
		}
		if (bVar5)
		{
			Var6.f_6 = 255;
			Var6.f_4 = 1;
			Var6.f_6 = iParam0;
			Var6.f_7 = iParam1;
			func_148(&Var6, uVar4);
		}
	}
}

void func_143(int iParam0)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = -1;
}

int func_144(int iParam0)
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

int func_145(int iParam0)
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

void func_146(int iParam0)
{
	if ((Global_1070355->f_19683.f_1[iParam0 /*8*/])->f_1 != 0)
	{
		(Global_1070355->f_19683.f_1[iParam0 /*8*/])->f_2 = 0;
		(Global_1070355->f_19683.f_1[iParam0 /*8*/])->f_1 = 0;
	}
}

int func_147(int iParam0, int iParam1, int iParam2)
{
	if ((Global_1070355->f_19683.f_1[iParam0 /*8*/])->f_1 < iParam1)
	{
		if (iParam2 != 0)
		{
			(Global_1070355->f_19683.f_1[iParam0 /*8*/])->f_2 = iParam2;
		}
		else
		{
			(Global_1070355->f_19683.f_1[iParam0 /*8*/])->f_2 = Global_1273882->f_21;
		}
		(Global_1070355->f_19683.f_1[iParam0 /*8*/])->f_1 = iParam1;
		return 1;
	}
	else if ((Global_1070355->f_19683.f_1[iParam0 /*8*/])->f_1 == iParam1)
	{
		(Global_1070355->f_19683.f_1[iParam0 /*8*/])->f_2 = Global_1273882->f_21;
		return 1;
	}
	return 0;
}

void func_148(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 179;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 8, 2, &uParam1);
	func_149(*uParam0);
}

void func_149(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
}

