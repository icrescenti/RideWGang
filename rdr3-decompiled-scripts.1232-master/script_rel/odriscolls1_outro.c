#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	vector3 vLocal_7 = { 0f, 0f, 0f };
	int iLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	int iLocal_14 = 0;
	struct<4> Local_15 = { 0, 0, 0, 0 } ;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
#endregion

void __EntryFunction__()
{
	vLocal_7 = { -1318.148f, 2436.259f, 309.3206f };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		func_1(&Local_15);
	}
	func_2(&Local_15, &uScriptParam_0);
	while (!func_3(&Local_15))
	{
		func_4(&Local_15);
		switch (func_5(Local_15))
		{
			case 0:
				if (func_6(&Local_15))
				{
					func_7(&Local_15, 1);
				}
				break;
			case 1:
				if (func_8(&Local_15))
				{
					func_7(&Local_15, 2);
				}
				break;
			case 2:
				if (func_9(&Local_15))
				{
					func_7(&Local_15, 3);
				}
				break;
			case 3:
				func_1(&Local_15);
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1(&Local_15);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_10();
	func_11(uParam0);
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = iVar0;
		if (func_12(iVar1) && func_13(iVar1))
		{
			iVar2 = Global_1360165[iVar0 /*1157*/];
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (func_14(iVar1))
				{
					func_15(iVar1, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
				}
			}
		}
		iVar0++;
	}
	if (func_16(uParam0, 4))
	{
		MISC::CLEAR_BIT(&(Global_1956578->f_1), 5);
		func_17(uParam0, 4);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_2(var uParam0, var uParam1)
{
	uParam0->f_1 = uParam1->f_1;
	if (ANIMSCENE::_0x25557E324489393C(*uParam1))
	{
		uParam0->f_2 = *uParam1;
		ANIMSCENE::TAKE_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_2);
		func_18(uParam0, 1);
	}
	if (uParam1->f_3)
	{
		func_18(uParam0, 2);
	}
	func_19(uParam0);
	SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME());
	return 1;
}

int func_3(var uParam0)
{
	if (func_20(&Global_1935630, 16384))
	{
		return 1;
	}
	if (!func_16(uParam0, 8))
	{
		if (func_20(&Global_1935630, 32768))
		{
			return 1;
		}
	}
	return 0;
}

void func_4(var uParam0)
{
	if (!func_16(uParam0, 4))
	{
		if ((ANIMSCENE::_0x25557E324489393C(uParam0->f_2) && ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_2, 0)) && !CAM::IS_GAMEPLAY_CAM_RENDERING())
		{
			MISC::SET_BIT(&(Global_1956578->f_1), 5);
			func_18(uParam0, 4);
		}
	}
	else if ((!ANIMSCENE::_0x25557E324489393C(uParam0->f_2) || !ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_2, 0)) || CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		MISC::CLEAR_BIT(&(Global_1956578->f_1), 5);
		func_17(uParam0, 4);
	}
}

int func_5(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return uParam0;
}

bool func_6(var uParam0)
{
	if (!ANIMSCENE::_0x477122B8D05E7968(iLocal_10, 1, 0))
	{
		return false;
	}
	if (!ANIMSCENE::_0x477122B8D05E7968(uParam0->f_2, 1, 0))
	{
		return false;
	}
	ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_2, "Intro");
	return ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_2, "Intro");
}

void func_7(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_8(var uParam0)
{
	if ((!func_16(uParam0, 2) && SCRIPTS::_DOES_THREAD_EXIST(uParam0->f_1)) && SCRIPTS::IS_THREAD_ACTIVE(uParam0->f_1, false))
	{
		return 0;
	}
	return func_21(uParam0);
}

int func_9(var uParam0)
{
	int iVar0;

	iVar0 = 1;
	if (!func_22())
	{
		iVar0 = 0;
	}
	if (!func_23(uParam0))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_10()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_12(iVar0) && func_14(iVar0))
		{
			func_24(iVar0, 56, 1);
		}
		iVar0++;
	}
	func_25(&(Global_1359489->f_40), 1);
}

int func_11(var uParam0)
{
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_2))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_2);
	}
	func_26(Global_1935630, 1048576);
	if (INTERIOR::IS_VALID_INTERIOR(iLocal_4) && iLocal_5)
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_4);
	}
	func_27(0);
	return 1;
}

int func_12(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return 0;
	}
	return 1;
}

bool func_13(int iParam0)
{
	return func_28(iParam0, 16, 1);
}

bool func_14(int iParam0)
{
	if (!func_12(iParam0))
	{
		return false;
	}
	if (!func_13(iParam0))
	{
		return false;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_15(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	if (!func_12(iParam0))
	{
		return;
	}
	if (func_13(iParam0))
	{
		if (((*Global_1360165)[iParam0 /*1157*/])->f_129 != 0 && ((*Global_1360165)[iParam0 /*1157*/])->f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_24(iParam0, 56, 1);
		func_25(&(Global_1359489->f_40), 1);
	}
	func_29(iParam0, 0);
	func_30(iParam0, 4, 0);
	func_31(iParam0);
	func_32(iParam0);
	func_33(iParam0, 37, 1);
	bVar0 = func_34(Global_1360165[iParam0 /*1157*/], 0);
	iVar1 = func_35(iParam0, 0);
	bVar2 = _NAMESPACE48::_0x800DF3FC913355F3(iVar1);
	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, false);
	}
	if (func_36(iParam0, 64, 1))
	{
		func_33(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_33(iParam0, 33, 1);
		func_33(iParam0, 34, 1);
		func_37(iParam0, 1056964608, -1, 1061158912);
		func_38(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_24(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_24(iParam0, 35, 1);
			if (bParam8)
			{
				func_24(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_39(iParam0, 0);
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
		func_33(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
		}
		func_24(iParam0, 33, 1);
		func_38(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_133 = fParam4;
			func_25(&(((*Global_1360165)[iParam0 /*1157*/])->f_130), 1);
		}
		else
		{
			func_40(&(((*Global_1360165)[iParam0 /*1157*/])->f_130));
		}
		if (bParam9)
		{
			func_24(iParam0, 34, 1);
		}
	}
	if (iParam1 || bParam2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		{
			func_41(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], false);
	}
	if (func_36(iParam0, 45, 1))
	{
		func_33(iParam0, 45, 1);
	}
	func_42(iParam0, 16, 1);
	func_33(iParam0, 44, 1);
	((*Global_1360165)[iParam0 /*1157*/])->f_129 = 0;
	(Global_40.f_4942[iParam0 /*60*/])->f_4 = 0;
	if (bParam5)
	{
		if (func_34(func_43(iParam0), 0))
		{
			func_44(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

bool func_16(var uParam0, int iParam1)
{
	return (uParam0->f_3 && iParam1) != 0;
}

void func_17(var uParam0, int iParam1)
{
	uParam0->f_3 = (uParam0->f_3 - (uParam0->f_3 && iParam1));
}

void func_18(var uParam0, int iParam1)
{
	uParam0->f_3 = (uParam0->f_3 || iParam1);
}

void func_19(var uParam0)
{
	func_45(Global_1935630, 1048576);
	iLocal_10 = ANIMSCENE::_CREATE_ANIM_SCENE("script@titles@title_gen_fewdayslater_onblack", 2, 0, false, true);
	ANIMSCENE::LOAD_ANIM_SCENE(iLocal_10);
	uParam0->f_2 = ANIMSCENE::_CREATE_ANIM_SCENE("script@timelapse@wnt4camp_intro", 2, "Intro", false, true);
	ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_2);
}

bool func_20(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_21(var uParam0)
{
	if (!func_46(&uLocal_11))
	{
		func_25(&uLocal_11, 0);
		AUDIO::_0x6339C1EA3979B5F7("FADE_TO_BLACK", "DEATH_FAIL_RESPAWN_SCENES");
		func_27(1);
	}
	else if (func_47(&uLocal_11) >= 1f)
	{
		GRAPHICS::DRAW_RECT(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, false, true);
		CAM::DO_SCREEN_FADE_IN(0);
		ENTITY::SET_ENTITY_COORDS(Global_35, vLocal_7, false, false, true, true);
		ANIMSCENE::START_ANIM_SCENE(iLocal_10);
		MISC::SET_BIT(&(Global_1956578->f_1), 5);
		AUDIO::_0x9428447DED71FC7E("DEATH_FAIL_RESPAWN_SCENES");
		AUDIO::_0x6339C1EA3979B5F7("Pass_Time", "Chapter_Screen_Scenes");
		HUD::_0x4CC5F2FC1332577F(-1679307491);
		STREAMING::PREFETCH_SRL("script@story@WNT4@PRE_INT");
		STREAMING::_0xEF1A8A484118735E();
		return 1;
	}
	return 0;
}

int func_22()
{
	int iVar0;

	iVar0 = 1;
	return iVar0;
}

int func_23(var uParam0)
{
	HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
	iLocal_4 = INTERIOR::GET_INTERIOR_AT_COORDS(vLocal_7);
	if (INTERIOR::IS_VALID_INTERIOR(iLocal_4))
	{
		if (!iLocal_5)
		{
			INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_4);
			iLocal_5 = 1;
		}
	}
	if (!iLocal_3)
	{
		func_48(3, 0, 0);
		PAD::DISABLE_CONTROL_ACTION(0, -668070958, false);
		PAD::DISABLE_CONTROL_ACTION(0, 1250966545, false);
		if (!iLocal_6 && func_49(1, 0, 0))
		{
			iLocal_6 = 1;
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-470125497, true);
		}
		if (STREAMING::IS_SRL_LOADED())
		{
		}
		if (((((func_50(((*Global_1835011)[3 /*74*/])->f_1) && func_52(func_51(((*Global_1835011)[3 /*74*/])->f_1), 4)) && !ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_2, 0)) && ((ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_10) >= ANIMSCENE::_0x49F1D143ADE32656(iLocal_10) || ANIMSCENE::_0xCDC5512A407CF08D(iLocal_10)) || ANIMSCENE::_0xF94692EB9DC15D74(iLocal_10, 0))) && iLocal_6) && STREAMING::IS_SRL_LOADED())
		{
			HUD::_0x4CC5F2FC1332577F(-1679307491);
			ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_10);
			AUDIO::_0x9428447DED71FC7E("Chapter_Screen_Scenes");
			MISC::CLEAR_BIT(&(Global_1956578->f_1), 5);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_2, "ARTHUR", Global_35, 0);
			ANIMSCENE::START_ANIM_SCENE(uParam0->f_2);
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_2, "Intro", true);
			iLocal_3 = 1;
			STREAMING::BEGIN_SRL();
			STREAMING::SET_SRL_TIME(0f);
		}
	}
	else
	{
		switch (iLocal_14)
		{
			case 0:
				if (ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_2, 0) && ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_2, "Shot1", 1))
				{
					MISC::_0x59174F1AFE095B5A(1632247697, true, true, false, 0f, false);
					CLOCK::SET_CLOCK_TIME(9, 0, 0);
					GRAPHICS::SET_TIMECYCLE_MODIFIER("winter4_introCMEmod");
					iLocal_14++;
				}
				break;
			case 1:
				if (ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_2, 0) && ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_2, "SHOT2", 1))
				{
					MISC::_0x59174F1AFE095B5A(1632247697, true, true, false, 0f, false);
					CLOCK::SET_CLOCK_TIME(9, 0, 0);
					GRAPHICS::SET_TIMECYCLE_MODIFIER("winter4_introCMEmod");
					iLocal_14++;
				}
				break;
			case 2:
				if (ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_2, 0) && ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_2, "SHOT3", 1))
				{
					MISC::_0x3373779BAF7CAF48("snowclearing", "snowclearing_mud1");
					MISC::_0x59174F1AFE095B5A(1679686673, true, true, false, 0f, false);
					CLOCK::SET_CLOCK_TIME(7, 0, 0);
					GRAPHICS::SET_TIMECYCLE_MODIFIER("winter4_introCMEmod");
					iLocal_14++;
				}
				break;
		}
		STREAMING::SET_SRL_TIME((ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_2) * 1000f));
		if ((ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_2) >= ANIMSCENE::_0x49F1D143ADE32656(uParam0->f_2) || ANIMSCENE::_0xCDC5512A407CF08D(uParam0->f_2)) || ANIMSCENE::_0x73616E64696C132E(uParam0->f_2, 1))
		{
			if (func_20(&Global_1935630, 1048576))
			{
				func_26(Global_1935630, 1048576);
				STREAMING::END_SRL();
			}
			if (func_53())
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_24(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_54(iParam0))
		{
			return;
		}
	}
	func_55(iParam1, &iVar0, &iVar1);
	MISC::SET_BIT(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0], iVar1);
}

void func_25(var uParam0, int iParam1)
{
	if (iParam1 || !func_46(uParam0))
	{
		func_56(uParam0);
	}
}

void func_26(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_27(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_12(iVar0))
		{
			iVar1 = func_57(iVar0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				AUDIO::STOP_PED_SPEAKING(iVar1, bParam0);
			}
		}
		iVar0++;
	}
}

bool func_28(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_54(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0 /*60*/] && iParam1) != 0;
}

void func_29(int iParam0, bool bParam1)
{
	if (!func_54(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_58(&(((*Global_1360165)[iParam0 /*1157*/])->f_12), 1))
		{
			func_30(iParam0, 1, 0);
		}
	}
	func_30(iParam0, 16, bParam1);
}

void func_30(int iParam0, int iParam1, bool bParam2)
{
	if (!func_54(iParam0))
	{
		return;
	}
	func_59(&(((*Global_1360165)[iParam0 /*1157*/])->f_13), iParam1, bParam2);
}

void func_31(int iParam0)
{
	func_30(iParam0, 8, 0);
}

void func_32(int iParam0)
{
	func_24(iParam0, 36, 1);
}

void func_33(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_54(iParam0))
		{
			return;
		}
	}
	func_55(iParam1, &iVar0, &iVar1);
	MISC::CLEAR_BIT(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0], iVar1);
}

int func_34(int iParam0, int iParam1)
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
	if (func_60(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_60(iVar0, 2))
	{
		if (PED::_0x3AA24CCC0D451379(iParam0))
		{
			return 0;
		}
	}
	if (func_60(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_60(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_60(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_60(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return 0;
		}
	}
	if (func_60(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_60(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_35(int iParam0, bool bParam1)
{
	if (!func_12(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_NAMESPACE48::_0x800DF3FC913355F3(((*Global_1360165)[iParam0 /*1157*/])->f_1))
		{
			func_61(iParam0);
		}
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_1;
}

bool func_36(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_54(iParam0))
		{
			return false;
		}
	}
	func_55(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0]), iVar1);
}

void func_37(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (func_12(iParam0))
	{
		iVar1 = func_57(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			iVar0 = PED::GET_PED_MAX_HEALTH(iVar1);
			PED::SET_PED_CONFIG_FLAG(iVar1, 179, true);
			func_62(iParam0);
		}
	}
	if (func_36(iParam0, 5, 1))
	{
		PED::SET_PED_CONFIG_FLAG(func_57(iParam0), 137, true);
	}
}

void func_38(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_54(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_33(iParam0, 50, 1);
		func_33(iParam0, 48, 1);
		func_33(iParam0, 49, 1);
		func_33(iParam0, 51, 1);
		func_33(iParam0, 52, 1);
		func_33(iParam0, 54, 1);
		func_33(iParam0, 55, 1);
	}
	else
	{
		func_24(iParam0, 50, 1);
		func_24(iParam0, 48, 1);
		func_24(iParam0, 49, 1);
		func_24(iParam0, 51, 1);
		if (bParam3)
		{
			func_24(iParam0, 54, 1);
		}
		else
		{
			func_33(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_24(iParam0, 52, 1);
			if (bParam3)
			{
				func_24(iParam0, 55, 1);
			}
		}
		else
		{
			func_33(iParam0, 52, 1);
			if (!bParam3)
			{
				func_33(iParam0, 55, 1);
			}
		}
	}
}

void func_39(int iParam0, bool bParam1)
{
	if (!func_54(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(func_57(iParam0), 204, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(func_57(iParam0), 204, false);
	}
}

void func_40(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_41(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	var uVar0;
	int iVar1;

	if (!func_12(iParam0))
	{
		return;
	}
	if (func_13(iParam0))
	{
		if (!func_14(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_36(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	uVar0 = func_35(iParam0, 0);
	if (!MISC::_0x716F17F8A0419F95(uVar0))
	{
		return;
	}
	iVar1 = func_57(iParam0);
	if (((ENTITY::DOES_ENTITY_EXIST(iVar1) && func_63(iParam0) < 10000f) && !bParam3) && !CAM::IS_SCREEN_FADED_OUT())
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
		func_24(iParam0, 2, 1);
	}
	else
	{
		func_64(iParam0);
		func_24(iParam0, 1, 1);
	}
}

void func_42(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_12(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (&Global_40.f_4942[iParam0 /*60*/] - (Global_40.f_4942[iParam0 /*60*/] && iParam1));
}

int func_43(int iParam0)
{
	if (!func_12(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(((*Global_1360165)[iParam0 /*1157*/])->f_70))
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_70 = 0;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_70;
}

void func_44(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (!func_54(iParam1))
	{
		return;
	}
	iVar0 = func_43(iParam1);
	if (func_65(iParam1))
	{
		if (!func_66(iParam1))
		{
			return;
		}
	}
	func_33(iParam1, 39, 1);
	func_67(iParam1, 64, 0);
	((*Global_1360165)[iParam1 /*1157*/])->f_70.f_11 = 0;
	func_67(iParam1, 8, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!bParam2)
		{
			func_67(iParam1, 512, 1);
			PED::SET_PED_KEEP_TASK(iVar0, true);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			func_24(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_68(iParam1, 0, 1, 1, 1);
		}
	}
}

void func_45(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_46(var uParam0)
{
	return func_69(*uParam0, 1);
}

float func_47(var uParam0)
{
	if (!func_46(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_70(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_71() - uParam0->f_1);
}

int func_48(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!func_72(iParam0))
	{
		return 1;
	}
	if (func_73(32768))
	{
		return 1;
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(((*Global_1835011)[iParam0 /*74*/])->f_16, false))
	{
		return 1;
	}
	iVar0 = func_51(func_74(iParam0));
	if (((*Global_1835011)[iParam0 /*74*/])->f_71)
	{
		return 1;
	}
	if (!func_50(func_74(iParam0)))
	{
		func_75(iParam0, 0, 0, -1);
	}
	if (func_76(iVar0))
	{
		if (!((*Global_1835011)[iParam0 /*74*/])->f_71)
		{
			if (bParam1)
			{
				func_77(iVar0, 256);
			}
			if (bParam2)
			{
				func_77(iVar0, 512);
			}
			((*Global_1835011)[iParam0 /*74*/])->f_71 = 1;
			return 1;
		}
	}
	return 0;
}

int func_49(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if (!func_78(iVar1, iParam0, iParam1, iParam2))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

int func_50(int iParam0)
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
		iVar0 = func_79(iParam0);
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

int func_51(int iParam0)
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

bool func_52(int iParam0, int iParam1)
{
	return (func_76(iParam0) && (((*Global_1898346)[iParam0 /*6*/])->f_1 && iParam1) != 0);
}

bool func_53()
{
	return (ANIMSCENE::_0x25557E324489393C(Global_43799) && ANIMSCENE::_0xCBFC7725DE6CE2E0(Global_43799, 0));
}

bool func_54(int iParam0)
{
	return iParam0 > -1;
}

int func_55(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
	return 1;
}

void func_56(var uParam0)
{
	func_80(uParam0, 0f);
}

int func_57(int iParam0)
{
	if (!func_54(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		(*Global_1360165)[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

bool func_58(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_59(var uParam0, var uParam1, bool bParam2)
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

bool func_60(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_61(int iParam0)
{
	int iVar0;

	if (!func_54(iParam0))
	{
		return;
	}
	if (!MISC::_0x716F17F8A0419F95(((*Global_1360165)[iParam0 /*1157*/])->f_1))
	{
		iVar0 = func_81(iParam0);
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

void func_62(int iParam0)
{
	if (func_12(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_57(iParam0)))
		{
			func_82(iParam0, 67108864, 1);
			func_33(iParam0, 19, 1);
		}
	}
}

float func_63(int iParam0)
{
	if (!func_54(iParam0))
	{
		return 0f;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_134;
}

void func_64(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = func_57(iParam0);
	iVar1 = func_35(iParam0, 0);
	func_83(iParam0, iVar0);
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

int func_65(int iParam0)
{
	if (!func_54(iParam0))
	{
		return 0;
	}
	if (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 == 0 || ((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 == ((*Global_1360165)[iParam0 /*1157*/])->f_128)
	{
		return 0;
	}
	return 1;
}

bool func_66(int iParam0)
{
	if (!func_54(iParam0))
	{
		return false;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_67(int iParam0, int iParam1, bool bParam2)
{
	if (!func_54(iParam0))
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

int func_68(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_54(iParam0))
	{
		return 0;
	}
	iVar0 = func_43(iParam0);
	if (func_34(iVar0, 0))
	{
		if (func_34(PED::_0xB676EFDA03DADA52(iVar0, 0), 0) && !bParam4)
		{
			return 0;
		}
		if ((iParam1 || !func_65(iParam0)) || func_66(iParam0))
		{
			if (iParam2 || !(ENTITY::IS_ENTITY_ON_SCREEN(iVar0) && func_84(PLAYER::PLAYER_PED_ID(), iVar0, 1) < 10000f))
			{
				iVar1 = func_85(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
					}
					func_86(iParam0);
					_NAMESPACE48::_0x7B204F88F6C3D287(func_87(iParam0, 0));
					_NAMESPACE48::_0xFCC6DB8DBE709BC8(func_87(iParam0, 0));
					func_88(iParam0);
				}
			}
			else
			{
				if (func_28(iParam0, 32768, 1))
				{
					iVar2 = func_87(iParam0, 0);
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
		if (func_34(((*Global_1360165)[iParam0 /*1157*/])->f_124, 0))
		{
			if (func_28(iParam0, 32768, 1))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(((*Global_1360165)[iParam0 /*1157*/])->f_124))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(((*Global_1360165)[iParam0 /*1157*/])->f_124, true, true);
				}
				func_86(iParam0);
				_NAMESPACE48::_0x7B204F88F6C3D287(func_87(iParam0, 0));
				_NAMESPACE48::_0xFCC6DB8DBE709BC8(func_87(iParam0, 0));
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(((*Global_1360165)[iParam0 /*1157*/])->f_124, true, true);
				func_86(iParam0);
				PED::DELETE_PED(&(((*Global_1360165)[iParam0 /*1157*/])->f_124));
			}
		}
	}
	((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 = 0;
	func_89(iParam0, 0);
	return 1;
}

bool func_69(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_70(var uParam0)
{
	return func_69(*uParam0, 2);
}

float func_71()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_72(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

bool func_73(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

int func_74(int iParam0)
{
	if (!func_72(iParam0))
	{
		return 0;
	}
	return ((*Global_1835011)[iParam0 /*74*/])->f_1;
}

int func_75(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (!func_90(iParam0))
	{
		return 0;
	}
	if ((func_91(((*Global_1347702)[59 /*49*/])->f_15, 1) && !func_91(((*Global_1347702)[61 /*49*/])->f_15, 1)) && Global_40.f_9052.f_21 & 2 == 0)
	{
		return 0;
	}
	if (func_92(PLAYER::PLAYER_ID(), 1, 0))
	{
		if ((!MAP::DOES_BLIP_EXIST(((*Global_1835011)[iParam0 /*74*/])->f_27) && !func_93(iParam0)) && !Global_43890)
		{
			func_95(iParam0, BUILTIN::VDIST2(func_94(iParam0), Global_36), -1, 1, 1);
			func_96((*Global_1835011)[iParam0 /*74*/], 2);
		}
		return 0;
	}
	if (bParam2)
	{
		if (!func_98(func_97(iParam0), func_74(iParam0), 0, ((*Global_1835011)[iParam0 /*74*/])->f_21, iParam3))
		{
			return 0;
		}
		if (func_99(1) > 1)
		{
			if (((*Global_1835011)[iParam0 /*74*/])->f_73 <= 0)
			{
				((*Global_1835011)[iParam0 /*74*/])->f_73 = MISC::GET_GAME_TIMER();
			}
			if ((MISC::GET_GAME_TIMER() - ((*Global_1835011)[iParam0 /*74*/])->f_73) < 60000)
			{
				if (func_100(iParam0, 0, 1))
				{
					return 0;
				}
				if ((iParam0 == 15 && Global_1357549->f_1494 & 32768 != 0) && func_102(Global_35, func_101(iParam0), 50f, 1, 1))
				{
					if (!GRAPHICS::_0xF2FDDCC8C6BAE1B3(((*Global_1835011)[iParam0 /*74*/])->f_72))
					{
						((*Global_1835011)[iParam0 /*74*/])->f_72 = GRAPHICS::CREATE_TRACKED_POINT();
						GRAPHICS::SET_TRACKED_POINT_INFO(((*Global_1835011)[iParam0 /*74*/])->f_72, func_101(iParam0), 5f);
					}
					if (CAM::IS_SCREEN_FADED_IN() && (GRAPHICS::IS_TRACKED_POINT_VISIBLE(((*Global_1835011)[iParam0 /*74*/])->f_72) || CAM::IS_SPHERE_VISIBLE(func_101(iParam0), 2.5f)))
					{
						return 0;
					}
				}
			}
		}
	}
	iVar0 = func_103(((*Global_1835011)[iParam0 /*74*/])->f_1);
	if (!func_76(iVar0))
	{
		return 0;
	}
	else if (((*Global_1835011)[iParam0 /*74*/])->f_73 != 0)
	{
		((*Global_1835011)[iParam0 /*74*/])->f_73 = 0;
		func_104(iParam0);
		if (GRAPHICS::_0xF2FDDCC8C6BAE1B3(((*Global_1835011)[iParam0 /*74*/])->f_72))
		{
			GRAPHICS::DESTROY_TRACKED_POINT(((*Global_1835011)[iParam0 /*74*/])->f_72);
		}
	}
	if (bParam1)
	{
		func_105(((*Global_1835011)[iParam0 /*74*/])->f_1);
	}
	else if (!&Global_1879534)
	{
		func_106(4);
	}
	return 1;
}

int func_76(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return 0;
	}
	return 1;
}

void func_77(int iParam0, int iParam1)
{
	if (!func_76(iParam0))
	{
		return;
	}
	((*Global_1898346)[iParam0 /*6*/])->f_1 = (((*Global_1898346)[iParam0 /*6*/])->f_1 || iParam1);
}

int func_78(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;

	if (func_107(iParam0, 1, 0))
	{
		if (func_108(iParam0))
		{
			iVar0 = func_35(iParam0, 0);
			if (_NAMESPACE48::_0x800DF3FC913355F3(iVar0))
			{
				if (!_NAMESPACE48::_0xA8120EBEAF290C7A(iVar0))
				{
					return 0;
				}
				if (uParam3 && !PED::_0xA0BC8FAED8CFEB3C(func_57(iParam0)))
				{
					return 0;
				}
				if ((uParam1 || !func_109(func_57(iParam0), 1116471296, -1082130432, -1082130432, -1082130432)) || CAM::IS_SCREEN_FADED_OUT())
				{
					_NAMESPACE48::_0xD4B614179BCD0654(iVar0);
					func_110(iParam0, 0);
					if (uParam2 && func_111(((*Global_1360165)[iParam0 /*1157*/])->f_63))
					{
						func_24(iParam0, 65, 0);
					}
				}
				else
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_79(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_112(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

void func_80(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_71() - fParam1);
	func_113(uParam0, 1);
	func_114(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_81(int iParam0)
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

void func_82(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_12(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (Global_40.f_4942[iParam0 /*60*/] || iParam1);
}

void func_83(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		func_115(iParam1);
	}
}

float func_84(int iParam0, int iParam1, bool bParam2)
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
	return func_116(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
}

int func_85(int iParam0, bool bParam1)
{
	if (!func_54(iParam0))
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
		((*Global_1360165)[iParam0 /*1157*/])->f_127 = func_117(iParam0);
		return ((*Global_1360165)[iParam0 /*1157*/])->f_127;
	}
	return 0;
}

void func_86(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_43(iParam0);
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

int func_87(int iParam0, int iParam1)
{
	if (!func_54(iParam0))
	{
		return 0;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(((*Global_1360165)[iParam0 /*1157*/])->f_126) && iParam1)
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_126 = func_118(iParam0);
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_126;
}

void func_88(int iParam0)
{
	int iVar0;

	if (!func_54(iParam0))
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

void func_89(int iParam0, int iParam1)
{
	if (!func_54(iParam0))
	{
		return;
	}
	((*Global_1360165)[iParam0 /*1157*/])->f_70.f_12 = iParam1;
}

int func_90(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_119(((*Global_1835011)[iParam0 /*74*/])->f_1);
}

int func_91(int iParam0, bool bParam1)
{
	switch (func_120(iParam0))
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

int func_92(int iParam0, bool bParam1, int iParam2)
{
	if (func_121(iParam0, bParam1, iParam2, 1))
	{
		return 1;
	}
	return 0;
}

bool func_93(int iParam0)
{
	return func_122(iParam0);
}

Vector3 func_94(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return 880.67f, 1267.78f, 233.66f;
		default:
			break;
	}
	return ((*Global_1835011)[iParam0 /*74*/])->f_18;
}

int func_95(int iParam0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	char cVar7[16];

	if (func_73(32768))
	{
		return 0;
	}
	iVar0 = func_123();
	if ((iParam4 && func_124(&(((*Global_1835011)[iParam0 /*74*/])->f_29), 512)) && !func_124(&(((*Global_1835011)[iParam0 /*74*/])->f_29), 1024))
	{
		if (func_125())
		{
			return 0;
		}
	}
	if (((*Global_1835011)[iParam0 /*74*/])->f_71)
	{
		return 0;
	}
	if (!func_126(iParam0))
	{
		return 0;
	}
	if (iVar0 == -1)
	{
		if (iParam0 == 19)
		{
			if ((func_91(((*Global_1835011)[20 /*74*/])->f_1, 1) && Global_1879514->f_1 == ((*Global_1835011)[20 /*74*/])->f_1) && (MISC::GET_GAME_TIMER() - func_127()) <= 2000)
			{
				return 0;
			}
		}
		else if (iParam0 == 20)
		{
			if ((func_91(((*Global_1835011)[19 /*74*/])->f_1, 1) && Global_1879514->f_1 == ((*Global_1835011)[19 /*74*/])->f_1) && (MISC::GET_GAME_TIMER() - func_127()) <= 2000)
			{
				return 0;
			}
		}
		else if (iParam0 == 14)
		{
			if (!func_91(((*Global_1347702)[62 /*49*/])->f_15, 1))
			{
				return 0;
			}
		}
	}
	if (!MAP::DOES_BLIP_EXIST(((*Global_1835011)[iParam0 /*74*/])->f_27))
	{
		bVar3 = ((*Global_1835011)[iParam0 /*74*/])->f_70;
		if (func_128(iParam0, iVar0) && !bVar3)
		{
			if (iParam3 || func_129((*Global_1835011)[iParam0 /*74*/], 2))
			{
				if (func_130(iParam0))
				{
					((*Global_1835011)[iParam0 /*74*/])->f_27 = MAP::_0x554D9D53F696D002(1673015813, func_131(iParam0));
					iVar2 = 1;
				}
				else
				{
					((*Global_1835011)[iParam0 /*74*/])->f_27 = MAP::_0x554D9D53F696D002(1673015813, func_132(iParam0));
				}
			}
			else if (func_130(iParam0))
			{
				((*Global_1835011)[iParam0 /*74*/])->f_27 = MAP::_0xEC174ADBCB611ECC(1673015813, func_131(iParam0), func_133(iParam0), func_134(iParam0));
				iVar2 = 1;
			}
			else
			{
				((*Global_1835011)[iParam0 /*74*/])->f_27 = MAP::_0x45F13B7E0A15C880(1673015813, func_135(iParam0), func_136(iParam0));
			}
		}
		else if (bVar3)
		{
			if (!func_130(iParam0))
			{
				((*Global_1835011)[iParam0 /*74*/])->f_27 = MAP::_0x554D9D53F696D002(1673015813, func_94(iParam0));
			}
			else
			{
				((*Global_1835011)[iParam0 /*74*/])->f_27 = MAP::_0x554D9D53F696D002(1673015813, func_131(iParam0));
				iVar2 = 1;
			}
		}
		else if (func_93(iParam0))
		{
			if (iParam0 == 7)
			{
				((*Global_1835011)[iParam0 /*74*/])->f_27 = MAP::_0x554D9D53F696D002(-1337945352, func_132(iParam0));
			}
			else
			{
				((*Global_1835011)[iParam0 /*74*/])->f_27 = MAP::_0x554D9D53F696D002(1673015813, func_132(iParam0));
			}
		}
		else
		{
			((*Global_1835011)[iParam0 /*74*/])->f_27 = MAP::_0x554D9D53F696D002(1673015813, func_132(iParam0));
		}
		((*Global_1835011)[iParam0 /*74*/])->f_28 = 1673015813;
		bVar1 = true;
		if (iParam2 != -1)
		{
			if (iVar2 || func_130(iParam0))
			{
				func_77(iParam2, 4194304);
			}
			else
			{
				func_137(iParam2, 4194304);
			}
		}
		MAP::SET_BLIP_FLASH_TIMER(((*Global_1835011)[iParam0 /*74*/])->f_27, 63, iParam0);
	}
	if (!MAP::DOES_BLIP_EXIST(((*Global_1835011)[iParam0 /*74*/])->f_27))
	{
		return 0;
	}
	if (bVar1)
	{
		MAP::SET_BLIP_SPRITE(((*Global_1835011)[iParam0 /*74*/])->f_27, ((*Global_1835011)[iParam0 /*74*/])->f_26, true);
		if (iVar0 != -1)
		{
			MAP::_0x9CB1A1623062F402(((*Global_1835011)[iParam0 /*74*/])->f_27, &(((*Global_1835011)[iParam0 /*74*/])->f_39));
		}
		if (!func_124(&(((*Global_1835011)[iParam0 /*74*/])->f_29), 1024) && !func_93(iParam0))
		{
			MAP::_0x662D364ABF16DE2F(((*Global_1835011)[iParam0 /*74*/])->f_27, 580546400);
			func_138(&(((*Global_1835011)[iParam0 /*74*/])->f_29), 1024);
		}
	}
	if (iVar0 != -1)
	{
		return 1;
	}
	if (!func_93(iParam0))
	{
		MAP::_0x662D364ABF16DE2F(((*Global_1835011)[iParam0 /*74*/])->f_27, -1986290853);
	}
	if (iParam3 || func_129((*Global_1835011)[iParam0 /*74*/], 2))
	{
		MAP::_0x662D364ABF16DE2F(((*Global_1835011)[iParam0 /*74*/])->f_27, 724623647);
	}
	else
	{
		MAP::_0xB059D7BD3D78C16F(((*Global_1835011)[iParam0 /*74*/])->f_27, 724623647);
	}
	iVar4 = func_139(Global_40.f_4283);
	if (func_140(iVar4) && func_141(((*Global_1888801)[iVar4 /*35*/])->f_13))
	{
		iVar5 = 1;
		bVar6 = func_142(iVar4);
	}
	if (func_143(iParam0, iVar5, iVar4))
	{
		func_144(((*Global_1835011)[iParam0 /*74*/])->f_1, bVar6, iVar5, iVar4);
	}
	if (iParam0 == 7 && !func_145(579))
	{
		func_146(579, ((*Global_1835011)[iParam0 /*74*/])->f_27, 0);
	}
	if (iParam0 == 2)
	{
		return 1;
	}
	if (((((((func_124(&(((*Global_1835011)[iParam0 /*74*/])->f_29), 4096) && !func_124(&(((*Global_1835011)[iParam0 /*74*/])->f_29), 8192)) && IntToFloat(func_127()) >= 10f) && !Global_1935630->f_12) && !Global_16) && !func_147(Global_35, -2016812721)) && !PED::_0x34D6AC1157C8226C(Global_35, -1054012177)) && !PED::_0x34D6AC1157C8226C(Global_35, 1097070152))
	{
		if (!func_128(iParam0, iVar0) || (fParam1 >= (func_148(iParam0) * func_148(iParam0)) && !((*Global_1835011)[iParam0 /*74*/])->f_70))
		{
			MemCopy(&cVar7, {((*Global_1835011)[iParam0 /*74*/])->f_8}, 2);
			StringConCat(&cVar7, "_FIRST", 16);
			func_149(&cVar7, 10000, 0, 0, 0, 1);
			func_138(&(((*Global_1835011)[iParam0 /*74*/])->f_29), 8192);
		}
	}
	return 1;
}

void func_96(var uParam0, int iParam1)
{
	uParam0->f_63 = (uParam0->f_63 || iParam1);
}

int func_97(int iParam0)
{
	if (!func_72(iParam0))
	{
		return 0;
	}
	return ((*Global_1835011)[iParam0 /*74*/])->f_30;
}

int func_98(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (func_123() != -1)
	{
		return 1;
	}
	if (iParam2 == 0 && func_150(0, 1, 1))
	{
		return 0;
	}
	if (&Global_1879534)
	{
		return 0;
	}
	if (func_151(uParam0, iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_152(iVar0, &uParam0))
		{
			(Global_40.f_4942[iVar0 /*60*/])->f_59 = iParam1;
			if (iParam3 == iParam4)
			{
				func_82(iVar0, 512, 1);
			}
			else
			{
				func_42(iVar0, 512, 1);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_99(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar3 = 0;
	while (iVar3 < Global_1879534->f_7300)
	{
		if (!MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iVar3 /*4*/]), 2))
		{
			if (MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iVar3 /*4*/]), 1))
			{
				switch (&Global_1879534->f_1911[(Global_1879534->f_7301.f_2[iVar3 /*4*/])->f_1 /*3*/])
				{
					case 987244216:
						iVar1 = (Global_1879534->f_1911[(Global_1879534->f_7301.f_2[iVar3 /*4*/])->f_1 /*3*/])->f_2;
						if (func_153(((*Global_1347702)[iVar1 /*49*/])->f_12, 1))
						{
							iVar0++;
						}
						break;
				}
			}
		}
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < Global_1879534->f_7300)
	{
		if (!MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iVar3 /*4*/]), 2))
		{
			if (MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iVar3 /*4*/]), 1))
			{
				switch (&Global_1879534->f_1911[(Global_1879534->f_7301.f_2[iVar3 /*4*/])->f_1 /*3*/])
				{
					case -2093459088:
						if (!bParam0)
						{
							iVar0++;
						}
						else
						{
							iVar2 = (Global_1879534->f_1911[(Global_1879534->f_7301.f_2[iVar3 /*4*/])->f_1 /*3*/])->f_2;
							if (func_72(iVar2) && !func_122(iVar2))
							{
								iVar0++;
							}
						}
						break;
				}
			}
		}
		iVar3++;
	}
	return iVar0;
}

int func_100(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	int iVar1;
	int iVar2;

	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	uVar0 = func_97(iParam0);
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if (func_152(iVar1, &uVar0))
		{
			iVar2 = func_57(func_154(iParam0));
			if (ENTITY::IS_ENTITY_DEAD(iVar2))
			{
			}
			else
			{
				if (iParam1 && func_36(iVar1, 67, 1))
				{
					return 1;
				}
				if (iParam2 && func_36(iVar1, 47, 1))
				{
					return 1;
				}
				if (!PED::_0x5102307CE88798EB(iVar2))
				{
					PED::REQUEST_PED_VISIBILITY_TRACKING(iVar2);
				}
				if (PED::IS_TRACKED_PED_VISIBLE(iVar2))
				{
					return 1;
				}
			}
		}
		iVar1++;
	}
	return 0;
}

Vector3 func_101(int iParam0)
{
	return func_132(iParam0);
}

int func_102(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (bParam6)
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
		{
			return 1;
		}
	}
	else if (func_116(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return 1;
	}
	return 0;
}

int func_103(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<6> Var3;

	if (&Global_1898329 == 15)
	{
		return -1;
	}
	if (!func_119(iParam0))
	{
		return -1;
	}
	if (func_123() != -1)
	{
		iVar2 = func_51(iParam0);
		if (iVar2 >= 0)
		{
			func_155(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar1 = &Global_1898329;
			(*Global_1898330)[iVar1] = iParam0;
			*((*Global_1898346)[iVar1 /*6*/]) = { Var3 };
			func_156(iVar1, 1);
			func_155(iParam0, 1);
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
		iVar2 = func_51(iParam0);
		if (iVar2 >= 0)
		{
			func_155(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < &Global_1898330)
			{
				if (!func_157(Global_1898330[iVar0]))
				{
					(*Global_1898330)[iVar0] = iParam0;
					*((*Global_1898346)[iVar0 /*6*/]) = { Var3 };
					func_156(iVar0, 1);
					func_155(iParam0, 1);
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

void func_104(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;

	uVar0 = func_97(iParam0);
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if (func_152(iVar1, &uVar0))
		{
			iVar2 = func_57(func_154(iParam0));
			if (ENTITY::IS_ENTITY_DEAD(iVar2))
			{
			}
			else if (PED::_0x5102307CE88798EB(iVar2))
			{
				PED::_0x3088634CF8C819CF(iVar2);
			}
		}
		iVar1++;
	}
}

void func_105(int iParam0)
{
	func_158(iParam0);
}

void func_106(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

int func_107(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_54(iParam0))
	{
		return 0;
	}
	if (func_28(iParam0, 32, 1))
	{
		return 0;
	}
	if (!func_28(iParam0, 2, 1))
	{
		return 0;
	}
	if (!func_28(iParam0, 4, 1))
	{
		return 0;
	}
	if (func_36(iParam0, 33, 1))
	{
		return 0;
	}
	if (func_13(iParam0))
	{
		return 0;
	}
	if (func_159(iParam0))
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

int func_108(int iParam0)
{
	if (func_12(iParam0))
	{
		if (func_34(Global_1360165[iParam0 /*1157*/], 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_109(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	float fVar0;

	if (fParam3 > 0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = func_160(iParam0, Global_36, 1);
	}
	if (fParam2 > 0f)
	{
		if (fVar0 < fParam2)
		{
			return 1;
		}
	}
	if (fVar0 < fParam1)
	{
		if (PED::_0x5102307CE88798EB(iParam0))
		{
			if (fParam4 > 0f)
			{
				if (PED::_0x164CECC59E70DF86(iParam0, fParam4))
				{
					return 1;
				}
			}
			else if (PED::IS_TRACKED_PED_VISIBLE(iParam0))
			{
				return 1;
			}
		}
		else if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0))
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_110(int iParam0, int iParam1)
{
	int iVar0;

	if (_NAMESPACE48::_0xA8120EBEAF290C7A(func_35(iParam0, 0)))
	{
		iVar0 = _NAMESPACE48::_0x69786495C92A3044(func_35(iParam0, 0));
		if (iVar0 != ((*Global_1360165)[iParam0 /*1157*/])->f_47 || iParam1)
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_47 = iVar0;
			StringCopy(&(((*Global_1360165)[iParam0 /*1157*/])->f_48), _NAMESPACE48::_0x9C7F95946E304778(func_35(iParam0, 0), ((*Global_1360165)[iParam0 /*1157*/])->f_47), 64);
			((*Global_1360165)[iParam0 /*1157*/])->f_56 = 1;
		}
	}
}

int func_111(int iParam0)
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

int func_112(int iParam0)
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

void func_113(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_114(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_115(int iParam0)
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

float func_116(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

int func_117(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (!func_54(iParam0))
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
	if (!func_54(iParam0))
	{
		if (iVar0 != 0)
		{
			(Global_1357549->f_1675[iVar1 /*5*/])->f_1 = iParam0;
			((*Global_1360165)[iParam0 /*1157*/])->f_126 = (Global_1357549->f_1675[iVar1 /*5*/])->f_4;
		}
	}
	return iVar0;
}

int func_118(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_54(iParam0))
	{
		return 0;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(((*Global_1360165)[iParam0 /*1157*/])->f_126))
	{
		iVar0 = func_85(iParam0, 1);
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

bool func_119(int iParam0)
{
	return func_120(iParam0) == 0;
}

int func_120(int iParam0)
{
	if (!func_157(iParam0))
	{
		return -1;
	}
	return func_79(iParam0);
}

int func_121(int iParam0, bool bParam1, var uParam2, int iParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_161(bParam1, uParam2, iParam3);
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
	else if (uParam2 && !LAW::_0x148E7AC8141C9E64(iParam0) == 1370593166)
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

int func_122(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 36:
			return 1;
	}
	return 0;
}

int func_123()
{
	return Global_1572887->f_12;
}

int func_124(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_125()
{
	int iVar0;

	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && _NAMESPACE71::_0x59FA676177DBE4C9(iVar0) == 4);
}

int func_126(int iParam0)
{
	if (func_123() == 0)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 18:
			return func_91(((*Global_1347702)[21 /*49*/])->f_15, 1);
		case 44:
			return func_91(((*Global_1347702)[83 /*49*/])->f_15, 1);
	}
	return 1;
}

int func_127()
{
	return &Global_1898438;
}

int func_128(int iParam0, int iParam1)
{
	if (iParam1 != -1)
	{
		return 0;
	}
	if (func_130(iParam0))
	{
		switch (iParam0)
		{
			case 14:
			case 34:
				return 0;
		}
	}
	switch (iParam0)
	{
		case 5:
		case 8:
		case 10:
		case 12:
		case 13:
		case 14:
		case 18:
		case 21:
		case 27:
		case 28:
		case 29:
		case 34:
		case 40:
		case 41:
		case 44:
		case 46:
		case 48:
		case 51:
		case 54:
		case 55:
		case 63:
			return 1;
	}
	return 0;
}

bool func_129(var uParam0, int iParam1)
{
	return (uParam0->f_63 && iParam1) != 0;
}

int func_130(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_162((*Global_1835011)[iParam0 /*74*/]);
	}
	return 0;
}

Vector3 func_131(int iParam0)
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

Vector3 func_132(int iParam0)
{
	if (func_130(iParam0))
	{
		return func_131(iParam0);
	}
	return ((*Global_1835011)[iParam0 /*74*/])->f_18;
}

Vector3 func_133(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return 7.5f, 8f, 5f;
		default:
			break;
	}
	return 5f, 5f, 5f;
}

int func_134(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return 19;
		default:
			break;
	}
	return 0;
}

Vector3 func_135(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return -1541.14f, -305.74f, ((*Global_1835011)[iParam0 /*74*/])->f_18.f_2;
		case 39:
			return 4432.49f, -3404.77f, ((*Global_1835011)[iParam0 /*74*/])->f_18.f_2;
		case 8:
			return 891.27f, 1279.39f, 234.14f;
		case 27:
			return 2604.742f, -1212.295f, 52.3389f;
		case 29:
			return 2715.245f, -1356.552f, ((*Global_1835011)[iParam0 /*74*/])->f_18.f_2;
		case 41:
			return 1332.632f, -7248.313f, 55.5522f;
	}
	return ((*Global_1835011)[iParam0 /*74*/])->f_18;
}

float func_136(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return 45f;
		case 8:
			return 54f;
		case 27:
			return 35f;
		case 41:
			return 50f;
		case 54:
			return 17.5f;
		default:
			break;
	}
	return 25f;
}

void func_137(int iParam0, int iParam1)
{
	if (!func_76(iParam0))
	{
		return;
	}
	((*Global_1898346)[iParam0 /*6*/])->f_1 = (((*Global_1898346)[iParam0 /*6*/])->f_1 - (((*Global_1898346)[iParam0 /*6*/])->f_1 && iParam1));
}

void func_138(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_139(int iParam0)
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

bool func_140(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_141(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_36307)
	{
		return MAP::DOES_BLIP_EXIST(&(Global_36307[iParam0]));
	}
	return 0;
}

bool func_142(int iParam0)
{
	if (!func_163(Global_40.f_4283))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			return true;
		}
		if (func_164(iParam0))
		{
			if (BUILTIN::VDIST(Global_36, func_165(iParam0)) < BUILTIN::VDIST(Global_36, ((*Global_1888801)[iParam0 /*35*/])->f_15))
			{
				return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_165(iParam0), false) <= func_166();
			}
		}
		return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, ((*Global_1888801)[iParam0 /*35*/])->f_15, false) <= func_166();
	}
	return func_167();
}

int func_143(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 18)
	{
		return 0;
	}
	if (iParam0 == 71)
	{
		return 0;
	}
	if ((iParam1 && MAP::DOES_BLIP_EXIST(((*Global_1835011)[iParam0 /*74*/])->f_27)) && ((*Global_1835011)[iParam0 /*74*/])->f_21 == iParam2)
	{
		return 1;
	}
	return 0;
}

void func_144(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_157(iParam0))
	{
		return;
	}
	switch (func_168(iParam0))
	{
		case 1:
			iVar0 = func_169(iParam0);
			if (func_170(iVar0, bParam1, iParam2, iParam3) && Global_1357549->f_1709 > 1)
			{
				if ((func_128(iVar0, -1) && !((*Global_1835011)[iVar0 /*74*/])->f_70) && ((*Global_1835011)[iVar0 /*74*/])->f_63 & 2 == 0)
				{
					iVar2 = 1986697381;
				}
				else
				{
					iVar2 = -592708248;
				}
			}
			else if ((func_128(iVar0, -1) && !((*Global_1835011)[iVar0 /*74*/])->f_70) && ((*Global_1835011)[iVar0 /*74*/])->f_63 & 2 == 0)
			{
				iVar2 = -1559907306;
			}
			else
			{
				iVar2 = 1673015813;
			}
			if (((*Global_1835011)[iVar0 /*74*/])->f_28 != iVar2)
			{
				MAP::_0xBD62D98799A3DAF0(((*Global_1835011)[iVar0 /*74*/])->f_27, iVar2);
				if (!func_93(iVar0))
				{
					MAP::_0x662D364ABF16DE2F(((*Global_1835011)[iVar0 /*74*/])->f_27, -1986290853);
				}
				if (func_129((*Global_1835011)[iVar0 /*74*/], 2))
				{
					MAP::_0x662D364ABF16DE2F(((*Global_1835011)[iVar0 /*74*/])->f_27, 724623647);
				}
				((*Global_1835011)[iVar0 /*74*/])->f_28 = iVar2;
			}
			break;
		case 8:
			iVar1 = func_169(iParam0);
			if (func_171(iVar1, bParam1, iParam2, iParam3) && Global_1357549->f_1709 > 1)
			{
				switch (func_172(iVar1))
				{
					case -1337945352:
						iVar2 = 588610391;
						break;
					case 2103462781:
						iVar2 = -1032930804;
						break;
					case -1485222547:
						iVar2 = 13700166;
						break;
					case 1673015813:
						iVar2 = -592708248;
						break;
					default:
						iVar2 = 588610391;
						break;
				}
			}
			else
			{
				iVar2 = func_172(iVar1);
			}
			if (((*Global_1347702)[iVar1 /*49*/])->f_38 != iVar2)
			{
				MAP::_0xBD62D98799A3DAF0(((*Global_1347702)[iVar1 /*49*/])->f_37, iVar2);
				func_173(iVar1);
				((*Global_1347702)[iVar1 /*49*/])->f_38 = iVar2;
			}
			break;
	}
}

bool func_145(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_123() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iVar1]), iVar2);
}

void func_146(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_174(iParam0, &iVar0, &iVar1);
	if (!func_175(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_176(iParam0, 1024))
	{
		return;
	}
	func_177(iVar0, iVar1);
	(Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/] = uParam1;
	((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 3;
}

bool func_147(int iParam0, int iParam1)
{
	return PED::_0x34D6AC1157C8226C(iParam0, iParam1);
}

float func_148(int iParam0)
{
	return (func_136(iParam0) / 2f);
}

var func_149(char[4] cParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar15;

	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = cParam0;
	uVar15 = _NAMESPACE71::_0x049D5C615BD38BAD(&Var0, &Var13, iParam5);
	return uVar15;
}

int func_150(int iParam0, bool bParam1, int iParam2)
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
		if (func_178())
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
		iVar0 = func_169(&(Global_1898164->f_1[0 /*5*/]));
		if (func_179(iVar0) && func_153(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_157(&(Global_1898164->f_1[0 /*5*/])))
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

int func_151(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_152(iVar0, &uParam0))
		{
			if ((Global_40.f_4942[iVar0 /*60*/])->f_59 != 0 && (Global_40.f_4942[iVar0 /*60*/])->f_59 != iParam1)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_152(int iParam0, var uParam1)
{
	var uVar0;

	if (!func_12(iParam0))
	{
		return false;
	}
	uVar0 = func_180(iParam0);
	return (*uParam1 && uVar0) != 0;
}

bool func_153(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_154(int iParam0)
{
	if (!func_72(iParam0))
	{
		return 1;
	}
	switch (iParam0)
	{
		case 14:
			return 1;
		case 1:
		case 5:
		case 13:
			return 2;
		case 2:
		case 24:
		case 43:
		case 55:
			return 3;
		case 6:
			return 4;
		case 11:
		case 12:
		case 21:
		case 54:
			return 6;
		case 0:
		case 3:
		case 16:
		case 17:
		case 26:
		case 27:
		case 29:
		case 30:
		case 31:
		case 33:
		case 37:
		case 40:
		case 47:
		case 50:
		case 51:
		case 57:
		case 58:
			return 0;
		case 22:
		case 49:
		case 52:
		case 75:
			return 7;
		case 20:
			return 8;
		case 4:
		case 15:
		case 18:
			return 5;
		case 60:
		case 77:
			return 13;
		case 65:
			return 14;
		case 34:
			return 23;
		case 19:
		case 23:
		case 38:
		case 39:
		case 41:
		case 42:
		case 48:
		case 53:
		case 66:
		case 67:
		case 76:
			return -1;
		case 10:
			return 21;
		case 32:
		case 44:
		case 45:
		case 46:
		case 59:
		case 69:
			return 11;
		case 35:
			return 19;
		case 25:
			return 8;
		case 70:
			return 4;
		case 71:
			return 13;
		default:
			return 1;
	}
	return -1;
}

void func_155(int iParam0, bool bParam1)
{
	if (!func_157(iParam0))
	{
		return;
	}
	if (!func_119(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_181(iParam0) == 0)
		{
		}
		else if (!STATS::_0x01F4D242765C6B24(func_181(iParam0)))
		{
			STATS::_0xCA41E86545413B5B(func_168(iParam0), func_169(iParam0), func_182(iParam0), func_181(iParam0), Global_36);
		}
	}
	func_183(iParam0, 1);
	bParam1 = bParam1;
}

void func_156(int iParam0, int iParam1)
{
	if (((*Global_1898346)[iParam0 /*6*/])->f_2 == 0 || iParam1)
	{
		((*Global_1898346)[iParam0 /*6*/])->f_2 = func_184(Global_1898330[iParam0]);
		func_185(((*Global_1898346)[iParam0 /*6*/])->f_2, &(((*Global_1898346)[iParam0 /*6*/])->f_4), &(((*Global_1898346)[iParam0 /*6*/])->f_5), &(((*Global_1898346)[iParam0 /*6*/])->f_3));
	}
}

bool func_157(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

void func_158(int iParam0)
{
	if (!func_157(iParam0))
	{
		return;
	}
	if (!func_50(iParam0))
	{
		return;
	}
	func_183(iParam0, 2);
}

int func_159(int iParam0)
{
	if ((Global_40.f_4942[iParam0 /*60*/])->f_59 != 0)
	{
		return 1;
	}
	return 0;
}

float func_160(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

int func_161(bool bParam0, var uParam1, var uParam2)
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

int func_162(var uParam0)
{
	if (func_124(&(uParam0->f_29), 62))
	{
		switch (func_186())
		{
			case 1:
				if (!func_124(&(uParam0->f_29), 6))
				{
					return 0;
				}
				break;
			case 2:
				if (!func_124(&(uParam0->f_29), 8))
				{
					return 0;
				}
				break;
			case 4:
				if (!func_124(&(uParam0->f_29), 16))
				{
					return 0;
				}
				break;
			case 8:
				if (!func_124(&(uParam0->f_29), 32))
				{
					if (func_124(&(uParam0->f_29), 2))
					{
						if (func_188(func_187()) < 5)
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

int func_163(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 6:
		case 7:
		case 8:
			return 0;
	}
	return 1;
}

int func_164(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return 1;
	}
	return 0;
}

Vector3 func_165(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return -2578.509f, 389.3037f, 148.3825f;
	}
	return ((*Global_1888801)[iParam0 /*35*/])->f_15;
}

float func_166()
{
	switch (Global_40.f_4283)
	{
		case 2:
		case 6:
		case 7:
		case 8:
			return 70f;
	}
	return 25f;
}

bool func_167()
{
	return Global_1894899 & 2 != 0;
}

int func_168(int iParam0)
{
	if (!func_157(iParam0))
	{
		return 0;
	}
	return func_189(func_184(iParam0));
}

int func_169(int iParam0)
{
	if (!func_157(iParam0))
	{
		return -1;
	}
	return func_190(func_184(iParam0));
}

int func_170(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (!bParam1 && func_143(iParam0, iParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

int func_171(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (!bParam1 && func_191(iParam0, iParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

int func_172(int iParam0)
{
	int iVar0;

	iVar0 = -1337945352;
	if (!func_179(iParam0))
	{
		return iVar0;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0)
	{
		iVar0 = 1673015813;
	}
	else if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 512 != 0)
	{
		if (Global_40.f_1093 == Global_1347702[iParam0 /*49*/])
		{
			iVar0 = 2103462781;
		}
		else
		{
			iVar0 = -1337945352;
		}
	}
	else if (Global_40.f_1093 == Global_1347702[iParam0 /*49*/])
	{
		iVar0 = 2103462781;
	}
	else
	{
		iVar0 = -1337945352;
	}
	return iVar0;
}

void func_173(int iParam0)
{
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0)
	{
		MAP::_0x662D364ABF16DE2F(((*Global_1347702)[iParam0 /*49*/])->f_37, -1986290853);
		switch (iParam0)
		{
			case 140:
			case 142:
				MAP::_0x662D364ABF16DE2F(((*Global_1347702)[iParam0 /*49*/])->f_37, 495758964);
				break;
		}
	}
}

void func_174(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

int func_175(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return 0;
	}
	if (func_192(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_193(iParam0))
	{
		return 0;
	}
	if (func_194(iParam0))
	{
		return 0;
	}
	if ((Global_1898164->f_163 && !func_176(iParam0, 1)) || func_73(32768))
	{
		if (!func_176(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return 0;
		}
	}
	if (!func_195())
	{
		return 0;
	}
	return 1;
}

bool func_176(int iParam0, int iParam1)
{
	return ((Global_1905944->f_22[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

void func_177(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

int func_178()
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

bool func_179(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

int func_180(int iParam0)
{
	return BUILTIN::SHIFT_LEFT(1, iParam0);
}

int func_181(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_5;
	}
	return (Global_1058888->f_498[iParam0 /*2*/])->f_1;
}

int func_182(int iParam0)
{
	if (!func_157(iParam0))
	{
		return -1;
	}
	return func_196(func_184(iParam0));
}

void func_183(int iParam0, int iParam1)
{
	if (!func_157(iParam0))
	{
		return;
	}
	func_197(iParam0, iParam1);
}

int func_184(int iParam0)
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

void func_185(int iParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam3 = func_189(iParam0);
	*uParam1 = func_190(iParam0);
	*uParam2 = func_196(iParam0);
}

int func_186()
{
	return &Global_1899516;
}

int func_187()
{
	return &Global_1899515;
}

int func_188(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_189(var uParam0)
{
	return uParam0 & 31;
}

int func_190(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

int func_191(int iParam0, var uParam1, int iParam2)
{
	if ((uParam1 && MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37)) && ((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0)
	{
		return ((*Global_1347702)[iParam0 /*49*/])->f_27 == iParam2;
	}
	return 0;
}

bool func_192(int iParam0, int iParam1)
{
	if (func_123() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iParam0]), iParam1);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iParam0]), iParam1);
}

int func_193(int iParam0)
{
	if (func_123() != -1)
	{
		if (func_176(iParam0, 4))
		{
			return 0;
		}
	}
	else if (func_176(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

int func_194(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_176(iParam0, 65536) && !func_176(iParam0, 32768))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if ((Global_40.f_7756[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_176(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0 /*3*/] - iVar1);
			if ((Global_40.f_7756[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && func_176(iParam0, 32768))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_195()
{
	return Global_1905944->f_5694;
}

int func_196(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 15) & 16383;
}

void func_197(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_12105[iParam0 /*7*/])->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_198(iParam0);
	}
	else
	{
		func_199(iParam0, iParam1);
	}
	func_200();
}

int func_198(int iParam0)
{
	int iVar0;

	iVar0 = func_112(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_201(iVar0);
}

int func_199(int iParam0, int iParam1)
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
			func_202(iVar2);
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

void func_200()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

int func_201(int iParam0)
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

int func_202(int iParam0)
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

