#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	struct<4> Local_6 = { 0, 0, 0, 0 } ;
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
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		func_1(&Local_6);
	}
	func_2(&Local_6, &uScriptParam_0);
	while (!func_3(&Local_6))
	{
		func_4(&Local_6);
		switch (func_5(Local_6))
		{
			case 0:
				if (func_6(&Local_6))
				{
					func_7(&Local_6, 1);
				}
				break;
			case 1:
				if (func_8(&Local_6))
				{
					func_7(&Local_6, 2);
				}
				break;
			case 2:
				if (func_9(&Local_6))
				{
					func_7(&Local_6, 3);
				}
				break;
			case 3:
				func_1(&Local_6);
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1(&Local_6);
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

int func_6(var uParam0)
{
	return 1;
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
	if (STREAMING::_0xCF45DF50C7775F2A())
	{
		STREAMING::_0x5A8B01199C3E79C3();
	}
	ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_2);
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
	return func_26(iParam0, 16, 1);
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
	func_27(iParam0, 0);
	func_28(iParam0, 4, 0);
	func_29(iParam0);
	func_30(iParam0);
	func_31(iParam0, 37, 1);
	bVar0 = func_32(Global_1360165[iParam0 /*1157*/], 0);
	iVar1 = func_33(iParam0, 0);
	bVar2 = _NAMESPACE48::_0x800DF3FC913355F3(iVar1);
	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, false);
	}
	if (func_34(iParam0, 64, 1))
	{
		func_31(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_31(iParam0, 33, 1);
		func_31(iParam0, 34, 1);
		func_35(iParam0, 1056964608, -1, 1061158912);
		func_36(iParam0, 1, 1, 0);
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
			func_37(iParam0, 0);
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
		func_31(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
		}
		func_24(iParam0, 33, 1);
		func_36(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_133 = fParam4;
			func_25(&(((*Global_1360165)[iParam0 /*1157*/])->f_130), 1);
		}
		else
		{
			func_38(&(((*Global_1360165)[iParam0 /*1157*/])->f_130));
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
			func_39(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], false);
	}
	if (func_34(iParam0, 45, 1))
	{
		func_31(iParam0, 45, 1);
	}
	func_40(iParam0, 16, 1);
	func_31(iParam0, 44, 1);
	((*Global_1360165)[iParam0 /*1157*/])->f_129 = 0;
	(Global_40.f_4942[iParam0 /*60*/])->f_4 = 0;
	if (bParam5)
	{
		if (func_32(func_41(iParam0), 0))
		{
			func_42(0, iParam0, bParam3, 0, bParam2);
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
	func_43(Global_1935630, 1048576);
}

bool func_20(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_21(var uParam0)
{
	STREAMING::_0x513F8AA5BF2F17CF(((*Global_1835011)[42 /*74*/])->f_18, 100f, 0);
	func_44(Global_35);
	ENTITY::SET_ENTITY_COORDS(Global_35, func_45(42), true, false, true, true);
	CLOCK::SET_CLOCK_TIME(16, 0, 0);
	MISC::_0x3373779BAF7CAF48("fog", "FOG_guama");
	MISC::_0x59174F1AFE095B5A(-702816767, true, true, false, 0f, false);
	func_46(&uLocal_3);
	HUD::_0xC9CAEAEEC1256E54(-1679307491);
	return 1;
}

int func_22()
{
	int iVar0;

	iVar0 = 1;
	return iVar0;
}

int func_23(var uParam0)
{
	int iVar0;
	int iVar1;

	func_47(&(Global_1879514->f_6), 16);
	func_48(&Global_0, 16);
	HUD::_0xC9CAEAEEC1256E54(-1679307491);
	HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	func_49();
	func_50(42, 1, 1);
	iVar0 = func_51(42);
	iVar1 = func_52(iVar0);
	if (func_53(&uLocal_3) > 3f)
	{
		if (func_54(iVar0) && func_55(iVar1, 128))
		{
			if (func_55(iVar1, 512))
			{
				func_56(iVar1, 512);
			}
			if (func_57())
			{
				CAM::DO_SCREEN_FADE_IN(1000);
				HUD::_0x4CC5F2FC1332577F(-1679307491);
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
		if (!func_58(iParam0))
		{
			return;
		}
	}
	func_59(iParam1, &iVar0, &iVar1);
	MISC::SET_BIT(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0], iVar1);
}

void func_25(var uParam0, int iParam1)
{
	if (iParam1 || !func_60(uParam0))
	{
		func_46(uParam0);
	}
}

bool func_26(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_58(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0 /*60*/] && iParam1) != 0;
}

void func_27(int iParam0, bool bParam1)
{
	if (!func_58(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_61(&(((*Global_1360165)[iParam0 /*1157*/])->f_12), 1))
		{
			func_28(iParam0, 1, 0);
		}
	}
	func_28(iParam0, 16, bParam1);
}

void func_28(int iParam0, int iParam1, bool bParam2)
{
	if (!func_58(iParam0))
	{
		return;
	}
	func_62(&(((*Global_1360165)[iParam0 /*1157*/])->f_13), iParam1, bParam2);
}

void func_29(int iParam0)
{
	func_28(iParam0, 8, 0);
}

void func_30(int iParam0)
{
	func_24(iParam0, 36, 1);
}

void func_31(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_58(iParam0))
		{
			return;
		}
	}
	func_59(iParam1, &iVar0, &iVar1);
	MISC::CLEAR_BIT(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0], iVar1);
}

int func_32(int iParam0, int iParam1)
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
	if (func_63(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_63(iVar0, 2))
	{
		if (PED::_0x3AA24CCC0D451379(iParam0))
		{
			return 0;
		}
	}
	if (func_63(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_63(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_63(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_63(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return 0;
		}
	}
	if (func_63(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_63(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_33(int iParam0, bool bParam1)
{
	if (!func_12(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_NAMESPACE48::_0x800DF3FC913355F3(((*Global_1360165)[iParam0 /*1157*/])->f_1))
		{
			func_64(iParam0);
		}
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_1;
}

bool func_34(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_58(iParam0))
		{
			return false;
		}
	}
	func_59(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0]), iVar1);
}

void func_35(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (func_12(iParam0))
	{
		iVar1 = func_65(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			iVar0 = PED::GET_PED_MAX_HEALTH(iVar1);
			PED::SET_PED_CONFIG_FLAG(iVar1, 179, true);
			func_66(iParam0);
		}
	}
	if (func_34(iParam0, 5, 1))
	{
		PED::SET_PED_CONFIG_FLAG(func_65(iParam0), 137, true);
	}
}

void func_36(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_58(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_31(iParam0, 50, 1);
		func_31(iParam0, 48, 1);
		func_31(iParam0, 49, 1);
		func_31(iParam0, 51, 1);
		func_31(iParam0, 52, 1);
		func_31(iParam0, 54, 1);
		func_31(iParam0, 55, 1);
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
			func_31(iParam0, 54, 1);
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
			func_31(iParam0, 52, 1);
			if (!bParam3)
			{
				func_31(iParam0, 55, 1);
			}
		}
	}
}

void func_37(int iParam0, bool bParam1)
{
	if (!func_58(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(func_65(iParam0), 204, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(func_65(iParam0), 204, false);
	}
}

void func_38(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_39(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
	if (func_34(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	uVar0 = func_33(iParam0, 0);
	if (!MISC::_0x716F17F8A0419F95(uVar0))
	{
		return;
	}
	iVar1 = func_65(iParam0);
	if (((ENTITY::DOES_ENTITY_EXIST(iVar1) && func_67(iParam0) < 10000f) && !bParam3) && !CAM::IS_SCREEN_FADED_OUT())
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
		func_68(iParam0);
		func_24(iParam0, 1, 1);
	}
}

void func_40(int iParam0, int iParam1, bool bParam2)
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

int func_41(int iParam0)
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

void func_42(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (!func_58(iParam1))
	{
		return;
	}
	iVar0 = func_41(iParam1);
	if (func_69(iParam1))
	{
		if (!func_70(iParam1))
		{
			return;
		}
	}
	func_31(iParam1, 39, 1);
	func_71(iParam1, 64, 0);
	((*Global_1360165)[iParam1 /*1157*/])->f_70.f_11 = 0;
	func_71(iParam1, 8, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!bParam2)
		{
			func_71(iParam1, 512, 1);
			PED::SET_PED_KEEP_TASK(iVar0, true);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			func_24(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_72(iParam1, 0, 1, 1, 1);
		}
	}
}

void func_43(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_44(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_ON_MOUNT(iParam0))
		{
			PED::_REMOVE_PED_FROM_MOUNT(iParam0, true, false);
		}
	}
}

Vector3 func_45(int iParam0)
{
	vector3 vVar0;

	if (!func_73(iParam0))
	{
		return Global_36;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		vVar0 = { func_74(PLAYER::PLAYER_ID()) };
	}
	else
	{
		switch (iParam0)
		{
			case 1:
				vVar0 = { -1337.402f, 2452.91f, 307.9791f };
				break;
			case 3:
				vVar0 = { -1338.439f, 2428.414f, 307.2766f };
				break;
			case 4:
				vVar0 = { -1322.4f, 2426f, 307.9f };
				break;
			case 5:
				vVar0 = { -308.3586f, 782.1924f, 117.7538f };
				break;
			case 6:
				vVar0 = { -97.375f, -36.5433f, 94.8554f };
				break;
			case 14:
				vVar0 = { -254.86f, 720.18f, 114.37f };
				break;
			case 24:
				vVar0 = { 702.3f, -1220.9f, 45.2f };
				break;
			case 25:
				vVar0 = { 1185.571f, -76.8852f, 94.2109f };
				break;
			case 8:
				vVar0 = { 905.082f, 1294.843f, 231.7543f };
				break;
			case 36:
				vVar0 = { 2653.425f, -1265.137f, 51.2522f };
				break;
			case 7:
				vVar0 = { -272.3134f, 786.3967f, 117.7775f };
				break;
			case 10:
				vVar0 = { -349.4977f, -366.3566f, 86.2997f };
				break;
			case 16:
				vVar0 = { 688.5411f, -1249.06f, 43.1303f };
				break;
			case 17:
				vVar0 = { 1335.68f, -1322.95f, 77.07f };
				break;
			case 19:
				vVar0 = { 1673.17f, -1396.88f, 43.57f };
				break;
			case 21:
				vVar0 = { 1297.878f, -1268.003f, 75.6016f };
				break;
			case 22:
				vVar0 = { 661.5433f, -1240.129f, 43.1674f };
				break;
			case 18:
				vVar0 = { 753.216f, -1079.868f, 56.0014f };
				break;
			case 20:
				vVar0 = { 1011.58f, -1725.89f, 47.09f };
				break;
			case 26:
				vVar0 = { 688.1236f, -1232.855f, 43.2355f };
				break;
			case 33:
				vVar0 = { 1876.616f, -1854.658f, 41.4154f };
				break;
			case 34:
				vVar0 = { 2538.548f, -1202.893f, 52.5581f };
				break;
			case 29:
				vVar0 = { 2754.522f, -1383.792f, 45.2117f };
				break;
			case 32:
				vVar0 = { 1870.408f, -1842.527f, 41.7562f };
				break;
			case 37:
				vVar0 = { 1830.609f, -1816.024f, 45.0415f };
				break;
			case 11:
				vVar0 = { -1796.448f, -368.0258f, 160.266f };
				break;
			case 12:
				vVar0 = { -1552.635f, -315.4827f, 145.8309f };
				break;
			case 27:
				vVar0 = { 2596.806f, -1212.287f, 52.2666f };
				break;
			case 28:
				vVar0 = { 2464f, -1188.746f, 46.7464f };
				break;
			case 30:
				vVar0 = { 1862.25f, -1840.176f, 41.6041f };
				break;
			case 31:
				vVar0 = { 2137.771f, -618.0017f, 40.6232f };
				break;
			case 42:
				vVar0 = { 1001.376f, -6718.156f, 58.3266f };
				break;
			case 44:
				vVar0 = { 2266.855f, -767.1865f, 41.388f };
				break;
			case 45:
				vVar0 = { 2796.889f, -1190.525f, 46.5459f };
				break;
			case 46:
				vVar0 = { 2874.222f, -244.1363f, 41.6331f };
				break;
			case 40:
				vVar0 = { 1549.179f, -7149.792f, 62.8666f };
				break;
			case 41:
				vVar0 = { 1339.214f, -7266.655f, 56.7801f };
				break;
			case 54:
				vVar0 = { 2925.663f, 1290.41f, 43.5145f };
				break;
			case 55:
				vVar0 = { 2794.379f, 510.5758f, 66.2777f };
				break;
			case 56:
				vVar0 = { 595.0852f, 1694.919f, 186.5126f };
				break;
			case 48:
				vVar0 = { 496.0803f, 2230.18f, 246.6552f };
				break;
			case 49:
				vVar0 = { 2349.25f, 1354.504f, 104.7196f };
				break;
			case 58:
				vVar0 = { 2358.58f, 1351.238f, 104.9683f };
				break;
			case 50:
				vVar0 = { 2352.493f, 1368.096f, 105.0149f };
				break;
			case 51:
				vVar0 = { 427.1917f, 1380.477f, 169.4343f };
				break;
			case 52:
				vVar0 = { 479.6426f, 2150.891f, 240.877f };
				break;
			case 60:
				vVar0 = { -1588.494f, 400.6734f, 105.4726f };
				break;
			case 65:
				vVar0 = { -2572.093f, 448.8413f, 144.8921f };
				break;
			case 66:
				vVar0 = { -2580.406f, 407.1148f, 148.1711f };
				break;
			case 62:
				vVar0 = { -2583.168f, 393.3636f, 148.3663f };
				break;
			case 63:
				vVar0 = { -2529.541f, 367.5437f, 151.1168f };
				break;
			case 74:
				vVar0 = { -831.9793f, -1309.56f, 42.63682f };
				break;
			case 75:
				vVar0 = { -1653.5f, -1379f, 84f };
				break;
			case 64:
				vVar0 = { -2557.122f, 423.5369f, 146.8822f };
				break;
			case 67:
				vVar0 = { -2573.764f, 459.4782f, 144.6351f };
				break;
			case 68:
				vVar0 = { -1643.294f, -1409.516f, 82.095f };
				break;
			case 47:
				vVar0 = { 2800.993f, -1194.401f, 46.1827f };
				break;
			case 38:
			case 39:
				vVar0 = { 2006.844f, -4500.964f, 42.2633f };
				break;
			case 13:
				vVar0 = { -867.4744f, -1086.111f, 57.0144f };
				break;
			case 23:
				vVar0 = { 675.4856f, -1241.778f, 42.9353f };
				break;
			case 2:
				vVar0 = { -1336.013f, 2435.868f, 307.5496f };
				break;
			case 43:
				vVar0 = { 1302.809f, -6838.127f, 42.2677f };
				break;
			case 9:
				vVar0 = { -118.0703f, -31.0125f, 94.7967f };
				break;
			case 57:
				vVar0 = { 2358.756f, 1347.649f, 104.9628f };
				break;
			case 53:
				vVar0 = { 723.5786f, -1248.568f, 44.0862f };
				break;
			case 69:
				vVar0 = { -299.5792f, 784.5674f, 118.1264f };
				break;
			case 70:
				vVar0 = { -1546.94f, -1443.202f, 92.8534f };
				break;
			case 76:
				vVar0 = { -1649.89f, -1374.552f, 82.9631f };
				break;
			case 77:
				vVar0 = { -1541.56f, -1458.055f, 93.6257f };
				break;
			case 35:
				vVar0 = { 1889.67f, -1875.908f, 41.8095f };
				break;
			case 72:
				vVar0 = { -786.398f, -1330.46f, 42.6404f };
				break;
			case 15:
				vVar0 = { -116.3872f, -33.3869f, 94.7574f };
				break;
			case 71:
				vVar0 = { -1650.936f, -1376.447f, 82.9628f };
				break;
			default:
				vVar0 = { func_75(iParam0) + Vector(8f, -15f, 8f) };
				break;
		}
	}
	func_76(&vVar0, 50, 10, 0);
	return vVar0;
}

void func_46(var uParam0)
{
	func_77(uParam0, 0f);
}

void func_47(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_48(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_49()
{
	Global_1905944->f_5695 = 1;
}

int func_50(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!func_73(iParam0))
	{
		return 1;
	}
	if (func_78(32768))
	{
		return 1;
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(((*Global_1835011)[iParam0 /*74*/])->f_16, false))
	{
		return 1;
	}
	iVar0 = func_52(func_51(iParam0));
	if (((*Global_1835011)[iParam0 /*74*/])->f_71)
	{
		return 1;
	}
	if (!func_54(func_51(iParam0)))
	{
		func_79(iParam0, 0, 0, -1);
	}
	if (func_80(iVar0))
	{
		if (!((*Global_1835011)[iParam0 /*74*/])->f_71)
		{
			if (bParam1)
			{
				func_81(iVar0, 256);
			}
			if (bParam2)
			{
				func_81(iVar0, 512);
			}
			((*Global_1835011)[iParam0 /*74*/])->f_71 = 1;
			return 1;
		}
	}
	return 0;
}

int func_51(int iParam0)
{
	if (!func_73(iParam0))
	{
		return 0;
	}
	return ((*Global_1835011)[iParam0 /*74*/])->f_1;
}

int func_52(int iParam0)
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

float func_53(var uParam0)
{
	if (!func_60(uParam0))
	{
		return 0f;
	}
	if (func_82(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_83() - uParam0->f_1);
}

int func_54(int iParam0)
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
		iVar0 = func_84(iParam0);
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

bool func_55(int iParam0, int iParam1)
{
	return (func_80(iParam0) && (((*Global_1898346)[iParam0 /*6*/])->f_1 && iParam1) != 0);
}

void func_56(int iParam0, int iParam1)
{
	if (!func_80(iParam0))
	{
		return;
	}
	((*Global_1898346)[iParam0 /*6*/])->f_1 = (((*Global_1898346)[iParam0 /*6*/])->f_1 - (((*Global_1898346)[iParam0 /*6*/])->f_1 && iParam1));
}

bool func_57()
{
	return (ANIMSCENE::_0x25557E324489393C(Global_43799) && ANIMSCENE::_0xCBFC7725DE6CE2E0(Global_43799, 0));
}

bool func_58(int iParam0)
{
	return iParam0 > -1;
}

int func_59(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
	return 1;
}

bool func_60(var uParam0)
{
	return func_85(*uParam0, 1);
}

bool func_61(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_62(var uParam0, var uParam1, bool bParam2)
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

bool func_63(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_64(int iParam0)
{
	int iVar0;

	if (!func_58(iParam0))
	{
		return;
	}
	if (!MISC::_0x716F17F8A0419F95(((*Global_1360165)[iParam0 /*1157*/])->f_1))
	{
		iVar0 = func_86(iParam0);
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

int func_65(int iParam0)
{
	if (!func_58(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		(*Global_1360165)[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

void func_66(int iParam0)
{
	if (func_12(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_65(iParam0)))
		{
			func_87(iParam0, 67108864, 1);
			func_31(iParam0, 19, 1);
		}
	}
}

float func_67(int iParam0)
{
	if (!func_58(iParam0))
	{
		return 0f;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_134;
}

void func_68(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = func_65(iParam0);
	iVar1 = func_33(iParam0, 0);
	func_88(iParam0, iVar0);
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

int func_69(int iParam0)
{
	if (!func_58(iParam0))
	{
		return 0;
	}
	if (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 == 0 || ((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 == ((*Global_1360165)[iParam0 /*1157*/])->f_128)
	{
		return 0;
	}
	return 1;
}

bool func_70(int iParam0)
{
	if (!func_58(iParam0))
	{
		return false;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_71(int iParam0, int iParam1, bool bParam2)
{
	if (!func_58(iParam0))
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

int func_72(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_58(iParam0))
	{
		return 0;
	}
	iVar0 = func_41(iParam0);
	if (func_32(iVar0, 0))
	{
		if (func_32(PED::_0xB676EFDA03DADA52(iVar0, 0), 0) && !bParam4)
		{
			return 0;
		}
		if ((iParam1 || !func_69(iParam0)) || func_70(iParam0))
		{
			if (iParam2 || !(ENTITY::IS_ENTITY_ON_SCREEN(iVar0) && func_89(PLAYER::PLAYER_PED_ID(), iVar0, 1) < 10000f))
			{
				iVar1 = func_90(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
					}
					func_91(iParam0);
					_NAMESPACE48::_0x7B204F88F6C3D287(func_92(iParam0, 0));
					_NAMESPACE48::_0xFCC6DB8DBE709BC8(func_92(iParam0, 0));
					func_93(iParam0);
				}
			}
			else
			{
				if (func_26(iParam0, 32768, 1))
				{
					iVar2 = func_92(iParam0, 0);
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
		if (func_32(((*Global_1360165)[iParam0 /*1157*/])->f_124, 0))
		{
			if (func_26(iParam0, 32768, 1))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(((*Global_1360165)[iParam0 /*1157*/])->f_124))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(((*Global_1360165)[iParam0 /*1157*/])->f_124, true, true);
				}
				func_91(iParam0);
				_NAMESPACE48::_0x7B204F88F6C3D287(func_92(iParam0, 0));
				_NAMESPACE48::_0xFCC6DB8DBE709BC8(func_92(iParam0, 0));
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(((*Global_1360165)[iParam0 /*1157*/])->f_124, true, true);
				func_91(iParam0);
				PED::DELETE_PED(&(((*Global_1360165)[iParam0 /*1157*/])->f_124));
			}
		}
	}
	((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 = 0;
	func_94(iParam0, 0);
	return 1;
}

bool func_73(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

Vector3 func_74(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

Vector3 func_75(int iParam0)
{
	if (func_95(iParam0))
	{
		return func_96(iParam0);
	}
	return ((*Global_1835011)[iParam0 /*74*/])->f_18;
}

int func_76(var uParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_97(*uParam0, 0f, 0f, 0f))
	{
		return 1;
	}
	iVar1 = 0;
	bVar2 = false;
	bVar3 = false;
	vVar4 = { *uParam0 };
	STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
	while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, iParam3) && !bVar2)
	{
		if (iVar1 < iParam2)
		{
			iVar1++;
			vVar4.f_2 = (vVar4.z + IntToFloat(iParam1));
			STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
		}
		else
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		iVar1 = 1;
		vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
		STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
		while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, iParam3) && !bVar3)
		{
			if (iVar1 < iParam2)
			{
				iVar1++;
				vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
				STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
			}
			else
			{
				bVar3 = true;
			}
		}
	}
	else
	{
		uParam0->f_2 = uVar0;
		return 1;
	}
	if (bVar2 && bVar3)
	{
		return 0;
	}
	uParam0->f_2 = uVar0;
	return 1;
}

void func_77(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_83() - fParam1);
	func_98(uParam0, 1);
	func_99(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_78(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

int func_79(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (!func_100(iParam0))
	{
		return 0;
	}
	if ((func_101(((*Global_1347702)[59 /*49*/])->f_15, 1) && !func_101(((*Global_1347702)[61 /*49*/])->f_15, 1)) && Global_40.f_9052.f_21 & 2 == 0)
	{
		return 0;
	}
	if (func_102(PLAYER::PLAYER_ID(), 1, 0))
	{
		if ((!MAP::DOES_BLIP_EXIST(((*Global_1835011)[iParam0 /*74*/])->f_27) && !func_103(iParam0)) && !Global_43890)
		{
			func_105(iParam0, BUILTIN::VDIST2(func_104(iParam0), Global_36), -1, 1, 1);
			func_106((*Global_1835011)[iParam0 /*74*/], 2);
		}
		return 0;
	}
	if (bParam2)
	{
		if (!func_108(func_107(iParam0), func_51(iParam0), 0, ((*Global_1835011)[iParam0 /*74*/])->f_21, iParam3))
		{
			return 0;
		}
		if (func_109(1) > 1)
		{
			if (((*Global_1835011)[iParam0 /*74*/])->f_73 <= 0)
			{
				((*Global_1835011)[iParam0 /*74*/])->f_73 = MISC::GET_GAME_TIMER();
			}
			if ((MISC::GET_GAME_TIMER() - ((*Global_1835011)[iParam0 /*74*/])->f_73) < 60000)
			{
				if (func_110(iParam0, 0, 1))
				{
					return 0;
				}
				if ((iParam0 == 15 && Global_1357549->f_1494 & 32768 != 0) && func_112(Global_35, func_111(iParam0), 50f, 1, 1))
				{
					if (!GRAPHICS::_0xF2FDDCC8C6BAE1B3(((*Global_1835011)[iParam0 /*74*/])->f_72))
					{
						((*Global_1835011)[iParam0 /*74*/])->f_72 = GRAPHICS::CREATE_TRACKED_POINT();
						GRAPHICS::SET_TRACKED_POINT_INFO(((*Global_1835011)[iParam0 /*74*/])->f_72, func_111(iParam0), 5f);
					}
					if (CAM::IS_SCREEN_FADED_IN() && (GRAPHICS::IS_TRACKED_POINT_VISIBLE(((*Global_1835011)[iParam0 /*74*/])->f_72) || CAM::IS_SPHERE_VISIBLE(func_111(iParam0), 2.5f)))
					{
						return 0;
					}
				}
			}
		}
	}
	iVar0 = func_113(((*Global_1835011)[iParam0 /*74*/])->f_1);
	if (!func_80(iVar0))
	{
		return 0;
	}
	else if (((*Global_1835011)[iParam0 /*74*/])->f_73 != 0)
	{
		((*Global_1835011)[iParam0 /*74*/])->f_73 = 0;
		func_114(iParam0);
		if (GRAPHICS::_0xF2FDDCC8C6BAE1B3(((*Global_1835011)[iParam0 /*74*/])->f_72))
		{
			GRAPHICS::DESTROY_TRACKED_POINT(((*Global_1835011)[iParam0 /*74*/])->f_72);
		}
	}
	if (bParam1)
	{
		func_115(((*Global_1835011)[iParam0 /*74*/])->f_1);
	}
	else if (!&Global_1879534)
	{
		func_116(4);
	}
	return 1;
}

int func_80(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return 0;
	}
	return 1;
}

void func_81(int iParam0, int iParam1)
{
	if (!func_80(iParam0))
	{
		return;
	}
	((*Global_1898346)[iParam0 /*6*/])->f_1 = (((*Global_1898346)[iParam0 /*6*/])->f_1 || iParam1);
}

bool func_82(var uParam0)
{
	return func_85(*uParam0, 2);
}

float func_83()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

int func_84(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_117(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

bool func_85(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_86(int iParam0)
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

void func_87(int iParam0, int iParam1, bool bParam2)
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

void func_88(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		func_118(iParam1);
	}
}

float func_89(int iParam0, int iParam1, bool bParam2)
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
	return func_119(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
}

int func_90(int iParam0, bool bParam1)
{
	if (!func_58(iParam0))
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
		((*Global_1360165)[iParam0 /*1157*/])->f_127 = func_120(iParam0);
		return ((*Global_1360165)[iParam0 /*1157*/])->f_127;
	}
	return 0;
}

void func_91(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_41(iParam0);
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

int func_92(int iParam0, int iParam1)
{
	if (!func_58(iParam0))
	{
		return 0;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(((*Global_1360165)[iParam0 /*1157*/])->f_126) && iParam1)
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_126 = func_121(iParam0);
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_126;
}

void func_93(int iParam0)
{
	int iVar0;

	if (!func_58(iParam0))
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

void func_94(int iParam0, int iParam1)
{
	if (!func_58(iParam0))
	{
		return;
	}
	((*Global_1360165)[iParam0 /*1157*/])->f_70.f_12 = iParam1;
}

int func_95(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_122((*Global_1835011)[iParam0 /*74*/]);
	}
	return 0;
}

Vector3 func_96(int iParam0)
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

bool func_97(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_98(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_99(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_100(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_123(((*Global_1835011)[iParam0 /*74*/])->f_1);
}

int func_101(int iParam0, bool bParam1)
{
	switch (func_124(iParam0))
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

int func_102(int iParam0, bool bParam1, int iParam2)
{
	if (func_125(iParam0, bParam1, iParam2, 1))
	{
		return 1;
	}
	return 0;
}

bool func_103(int iParam0)
{
	return func_126(iParam0);
}

Vector3 func_104(int iParam0)
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

int func_105(int iParam0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	char cVar7[16];

	if (func_78(32768))
	{
		return 0;
	}
	iVar0 = func_127();
	if ((iParam4 && func_128(&(((*Global_1835011)[iParam0 /*74*/])->f_29), 512)) && !func_128(&(((*Global_1835011)[iParam0 /*74*/])->f_29), 1024))
	{
		if (func_129())
		{
			return 0;
		}
	}
	if (((*Global_1835011)[iParam0 /*74*/])->f_71)
	{
		return 0;
	}
	if (!func_130(iParam0))
	{
		return 0;
	}
	if (iVar0 == -1)
	{
		if (iParam0 == 19)
		{
			if ((func_101(((*Global_1835011)[20 /*74*/])->f_1, 1) && Global_1879514->f_1 == ((*Global_1835011)[20 /*74*/])->f_1) && (MISC::GET_GAME_TIMER() - func_131()) <= 2000)
			{
				return 0;
			}
		}
		else if (iParam0 == 20)
		{
			if ((func_101(((*Global_1835011)[19 /*74*/])->f_1, 1) && Global_1879514->f_1 == ((*Global_1835011)[19 /*74*/])->f_1) && (MISC::GET_GAME_TIMER() - func_131()) <= 2000)
			{
				return 0;
			}
		}
		else if (iParam0 == 14)
		{
			if (!func_101(((*Global_1347702)[62 /*49*/])->f_15, 1))
			{
				return 0;
			}
		}
	}
	if (!MAP::DOES_BLIP_EXIST(((*Global_1835011)[iParam0 /*74*/])->f_27))
	{
		bVar3 = ((*Global_1835011)[iParam0 /*74*/])->f_70;
		if (func_132(iParam0, iVar0) && !bVar3)
		{
			if (iParam3 || func_133((*Global_1835011)[iParam0 /*74*/], 2))
			{
				if (func_95(iParam0))
				{
					((*Global_1835011)[iParam0 /*74*/])->f_27 = MAP::_0x554D9D53F696D002(1673015813, func_96(iParam0));
					iVar2 = 1;
				}
				else
				{
					((*Global_1835011)[iParam0 /*74*/])->f_27 = MAP::_0x554D9D53F696D002(1673015813, func_75(iParam0));
				}
			}
			else if (func_95(iParam0))
			{
				((*Global_1835011)[iParam0 /*74*/])->f_27 = MAP::_0xEC174ADBCB611ECC(1673015813, func_96(iParam0), func_134(iParam0), func_135(iParam0));
				iVar2 = 1;
			}
			else
			{
				((*Global_1835011)[iParam0 /*74*/])->f_27 = MAP::_0x45F13B7E0A15C880(1673015813, func_136(iParam0), func_137(iParam0));
			}
		}
		else if (bVar3)
		{
			if (!func_95(iParam0))
			{
				((*Global_1835011)[iParam0 /*74*/])->f_27 = MAP::_0x554D9D53F696D002(1673015813, func_104(iParam0));
			}
			else
			{
				((*Global_1835011)[iParam0 /*74*/])->f_27 = MAP::_0x554D9D53F696D002(1673015813, func_96(iParam0));
				iVar2 = 1;
			}
		}
		else if (func_103(iParam0))
		{
			if (iParam0 == 7)
			{
				((*Global_1835011)[iParam0 /*74*/])->f_27 = MAP::_0x554D9D53F696D002(-1337945352, func_75(iParam0));
			}
			else
			{
				((*Global_1835011)[iParam0 /*74*/])->f_27 = MAP::_0x554D9D53F696D002(1673015813, func_75(iParam0));
			}
		}
		else
		{
			((*Global_1835011)[iParam0 /*74*/])->f_27 = MAP::_0x554D9D53F696D002(1673015813, func_75(iParam0));
		}
		((*Global_1835011)[iParam0 /*74*/])->f_28 = 1673015813;
		bVar1 = true;
		if (iParam2 != -1)
		{
			if (iVar2 || func_95(iParam0))
			{
				func_81(iParam2, 4194304);
			}
			else
			{
				func_56(iParam2, 4194304);
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
		if (!func_128(&(((*Global_1835011)[iParam0 /*74*/])->f_29), 1024) && !func_103(iParam0))
		{
			MAP::_0x662D364ABF16DE2F(((*Global_1835011)[iParam0 /*74*/])->f_27, 580546400);
			func_138(&(((*Global_1835011)[iParam0 /*74*/])->f_29), 1024);
		}
	}
	if (iVar0 != -1)
	{
		return 1;
	}
	if (!func_103(iParam0))
	{
		MAP::_0x662D364ABF16DE2F(((*Global_1835011)[iParam0 /*74*/])->f_27, -1986290853);
	}
	if (iParam3 || func_133((*Global_1835011)[iParam0 /*74*/], 2))
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
	if (((((((func_128(&(((*Global_1835011)[iParam0 /*74*/])->f_29), 4096) && !func_128(&(((*Global_1835011)[iParam0 /*74*/])->f_29), 8192)) && IntToFloat(func_131()) >= 10f) && !Global_1935630->f_12) && !Global_16) && !func_147(Global_35, -2016812721)) && !PED::_0x34D6AC1157C8226C(Global_35, -1054012177)) && !PED::_0x34D6AC1157C8226C(Global_35, 1097070152))
	{
		if (!func_132(iParam0, iVar0) || (fParam1 >= (func_148(iParam0) * func_148(iParam0)) && !((*Global_1835011)[iParam0 /*74*/])->f_70))
		{
			MemCopy(&cVar7, {((*Global_1835011)[iParam0 /*74*/])->f_8}, 2);
			StringConCat(&cVar7, "_FIRST", 16);
			func_149(&cVar7, 10000, 0, 0, 0, 1);
			func_138(&(((*Global_1835011)[iParam0 /*74*/])->f_29), 8192);
		}
	}
	return 1;
}

void func_106(var uParam0, int iParam1)
{
	uParam0->f_63 = (uParam0->f_63 || iParam1);
}

int func_107(int iParam0)
{
	if (!func_73(iParam0))
	{
		return 0;
	}
	return ((*Global_1835011)[iParam0 /*74*/])->f_30;
}

int func_108(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (func_127() != -1)
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
				func_87(iVar0, 512, 1);
			}
			else
			{
				func_40(iVar0, 512, 1);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_109(bool bParam0)
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
							if (func_73(iVar2) && !func_126(iVar2))
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

int func_110(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	int iVar1;
	int iVar2;

	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	uVar0 = func_107(iParam0);
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if (func_152(iVar1, &uVar0))
		{
			iVar2 = func_65(func_154(iParam0));
			if (ENTITY::IS_ENTITY_DEAD(iVar2))
			{
			}
			else
			{
				if (iParam1 && func_34(iVar1, 67, 1))
				{
					return 1;
				}
				if (iParam2 && func_34(iVar1, 47, 1))
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

Vector3 func_111(int iParam0)
{
	return func_75(iParam0);
}

int func_112(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_119(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return 1;
	}
	return 0;
}

int func_113(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<6> Var3;

	if (&Global_1898329 == 15)
	{
		return -1;
	}
	if (!func_123(iParam0))
	{
		return -1;
	}
	if (func_127() != -1)
	{
		iVar2 = func_52(iParam0);
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
		iVar2 = func_52(iParam0);
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

void func_114(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;

	uVar0 = func_107(iParam0);
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if (func_152(iVar1, &uVar0))
		{
			iVar2 = func_65(func_154(iParam0));
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

void func_115(int iParam0)
{
	func_158(iParam0);
}

void func_116(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

int func_117(int iParam0)
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

void func_118(int iParam0)
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

float func_119(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

int func_120(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (!func_58(iParam0))
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
	if (!func_58(iParam0))
	{
		if (iVar0 != 0)
		{
			(Global_1357549->f_1675[iVar1 /*5*/])->f_1 = iParam0;
			((*Global_1360165)[iParam0 /*1157*/])->f_126 = (Global_1357549->f_1675[iVar1 /*5*/])->f_4;
		}
	}
	return iVar0;
}

int func_121(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_58(iParam0))
	{
		return 0;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(((*Global_1360165)[iParam0 /*1157*/])->f_126))
	{
		iVar0 = func_90(iParam0, 1);
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

int func_122(var uParam0)
{
	if (func_128(&(uParam0->f_29), 62))
	{
		switch (func_159())
		{
			case 1:
				if (!func_128(&(uParam0->f_29), 6))
				{
					return 0;
				}
				break;
			case 2:
				if (!func_128(&(uParam0->f_29), 8))
				{
					return 0;
				}
				break;
			case 4:
				if (!func_128(&(uParam0->f_29), 16))
				{
					return 0;
				}
				break;
			case 8:
				if (!func_128(&(uParam0->f_29), 32))
				{
					if (func_128(&(uParam0->f_29), 2))
					{
						if (func_161(func_160()) < 5)
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

bool func_123(int iParam0)
{
	return func_124(iParam0) == 0;
}

int func_124(int iParam0)
{
	if (!func_157(iParam0))
	{
		return -1;
	}
	return func_84(iParam0);
}

int func_125(int iParam0, bool bParam1, var uParam2, int iParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_162(bParam1, uParam2, iParam3);
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

int func_126(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 36:
			return 1;
	}
	return 0;
}

int func_127()
{
	return Global_1572887->f_12;
}

int func_128(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_129()
{
	int iVar0;

	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && _NAMESPACE71::_0x59FA676177DBE4C9(iVar0) == 4);
}

int func_130(int iParam0)
{
	if (func_127() == 0)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 18:
			return func_101(((*Global_1347702)[21 /*49*/])->f_15, 1);
		case 44:
			return func_101(((*Global_1347702)[83 /*49*/])->f_15, 1);
	}
	return 1;
}

int func_131()
{
	return &Global_1898438;
}

int func_132(int iParam0, int iParam1)
{
	if (iParam1 != -1)
	{
		return 0;
	}
	if (func_95(iParam0))
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

bool func_133(var uParam0, int iParam1)
{
	return (uParam0->f_63 && iParam1) != 0;
}

Vector3 func_134(int iParam0)
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

int func_135(int iParam0)
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

Vector3 func_136(int iParam0)
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

float func_137(int iParam0)
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
				if ((func_132(iVar0, -1) && !((*Global_1835011)[iVar0 /*74*/])->f_70) && ((*Global_1835011)[iVar0 /*74*/])->f_63 & 2 == 0)
				{
					iVar2 = 1986697381;
				}
				else
				{
					iVar2 = -592708248;
				}
			}
			else if ((func_132(iVar0, -1) && !((*Global_1835011)[iVar0 /*74*/])->f_70) && ((*Global_1835011)[iVar0 /*74*/])->f_63 & 2 == 0)
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
				if (!func_103(iVar0))
				{
					MAP::_0x662D364ABF16DE2F(((*Global_1835011)[iVar0 /*74*/])->f_27, -1986290853);
				}
				if (func_133((*Global_1835011)[iVar0 /*74*/], 2))
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
	if (func_127() != -1)
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
	return (func_137(iParam0) / 2f);
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
	if (!func_73(iParam0))
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
	if (!func_123(iParam0))
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
	if (!func_54(iParam0))
	{
		return;
	}
	func_183(iParam0, 2);
}

int func_159()
{
	return &Global_1899516;
}

int func_160()
{
	return &Global_1899515;
}

int func_161(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_162(bool bParam0, var uParam1, var uParam2)
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
	return func_186(func_184(iParam0));
}

int func_169(int iParam0)
{
	if (!func_157(iParam0))
	{
		return -1;
	}
	return func_187(func_184(iParam0));
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
	if (!bParam1 && func_188(iParam0, iParam2, iParam3))
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
	if (func_189(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_190(iParam0))
	{
		return 0;
	}
	if (func_191(iParam0))
	{
		return 0;
	}
	if ((Global_1898164->f_163 && !func_176(iParam0, 1)) || func_78(32768))
	{
		if (!func_176(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return 0;
		}
	}
	if (!func_192())
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
	return func_193(func_184(iParam0));
}

void func_183(int iParam0, int iParam1)
{
	if (!func_157(iParam0))
	{
		return;
	}
	func_194(iParam0, iParam1);
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
	*uParam3 = func_186(iParam0);
	*uParam1 = func_187(iParam0);
	*uParam2 = func_193(iParam0);
}

int func_186(var uParam0)
{
	return uParam0 & 31;
}

int func_187(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

int func_188(int iParam0, var uParam1, int iParam2)
{
	if ((uParam1 && MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37)) && ((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0)
	{
		return ((*Global_1347702)[iParam0 /*49*/])->f_27 == iParam2;
	}
	return 0;
}

bool func_189(int iParam0, int iParam1)
{
	if (func_127() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iParam0]), iParam1);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iParam0]), iParam1);
}

int func_190(int iParam0)
{
	if (func_127() != -1)
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

int func_191(int iParam0)
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

bool func_192()
{
	return Global_1905944->f_5694;
}

int func_193(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 15) & 16383;
}

void func_194(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_12105[iParam0 /*7*/])->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_195(iParam0);
	}
	else
	{
		func_196(iParam0, iParam1);
	}
	func_197();
}

int func_195(int iParam0)
{
	int iVar0;

	iVar0 = func_117(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_198(iVar0);
}

int func_196(int iParam0, int iParam1)
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
			func_199(iVar2);
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

void func_197()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

int func_198(int iParam0)
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

int func_199(int iParam0)
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

