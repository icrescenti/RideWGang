#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	var uLocal_5[2] = { 0, 0 };
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	struct<4> Local_18 = { 0, 0, 0, 0 } ;
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
		func_1(&Local_18);
	}
	func_2(&Local_18, &uScriptParam_0);
	while (!func_3(&Local_18))
	{
		func_4(&Local_18);
		switch (func_5(Local_18))
		{
			case 0:
				if (func_6(&Local_18))
				{
					func_7(&Local_18, 1);
				}
				break;
			case 1:
				if (func_8(&Local_18))
				{
					func_7(&Local_18, 2);
				}
				break;
			case 2:
				if (func_9(&Local_18))
				{
					func_7(&Local_18, 3);
				}
				break;
			case 3:
				func_1(&Local_18);
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1(&Local_18);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	func_10();
	func_11(uParam0);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_12(&(uLocal_5[iVar0])))
		{
			func_13(&(uLocal_5[iVar0]), 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 27)
	{
		iVar2 = iVar1;
		if (func_14(iVar2) && func_12(iVar2))
		{
			iVar3 = Global_1360165[iVar1 /*1157*/];
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (func_15(iVar2))
				{
					func_13(iVar2, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
				}
			}
		}
		iVar1++;
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
	bool bVar0;

	bVar0 = true;
	CAM::_0x05AB44D906738426();
	switch (iLocal_4)
	{
		case 0:
			if (func_16(uParam0, 1))
			{
				iLocal_8 = uParam0->f_2;
			}
			else if (!ANIMSCENE::_0x25557E324489393C(iLocal_8))
			{
				iLocal_8 = ANIMSCENE::_CREATE_ANIM_SCENE("script@story@NTS3@leadout@ext@leadout", 0, 0, false, true);
				bVar0 = false;
			}
			else if (!ANIMSCENE::_0x477122B8D05E7968(iLocal_8, 1, 0))
			{
				if (!ANIMSCENE::_0x59606519FF9D3EC2(iLocal_8, 1))
				{
					ANIMSCENE::LOAD_ANIM_SCENE(iLocal_8);
				}
				bVar0 = false;
			}
			if (!ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_8, "pbl_Cough_A"))
			{
				if (!ANIMSCENE::_0x0DF57F86FE71DBE5(iLocal_8, "pbl_Cough_A"))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_8, "pbl_Cough_A");
				}
				bVar0 = false;
			}
			if (!ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_8, "pbl_Cough_B"))
			{
				if (!ANIMSCENE::_0x0DF57F86FE71DBE5(iLocal_8, "pbl_Cough_B"))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_8, "pbl_Cough_B");
				}
				bVar0 = false;
			}
			if (!ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_8, "pbl_Labored_Breath"))
			{
				if (!ANIMSCENE::_0x0DF57F86FE71DBE5(iLocal_8, "pbl_Labored_Breath"))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_8, "pbl_Labored_Breath");
				}
				bVar0 = false;
			}
			if (!ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_8, "pbl_Wipe_Face"))
			{
				if (!ANIMSCENE::_0x0DF57F86FE71DBE5(iLocal_8, "pbl_Wipe_Face"))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_8, "pbl_Wipe_Face");
				}
				bVar0 = false;
			}
			if (bVar0)
			{
				iLocal_4 = 1;
			}
			break;
		case 1:
			if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
			{
			}
			if (bVar0)
			{
				iLocal_4 = 2;
			}
			break;
		case 2:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_8, "arthur", Global_35, 0);
			if (bVar0)
			{
				iLocal_4 = 3;
			}
			break;
		case 3:
			return 1;
	}
	return 0;
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
	int iVar1;

	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (!func_22(iVar1))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	if (!func_23())
	{
		iVar0 = 0;
	}
	if (!func_24(uParam0))
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
		if (func_14(iVar0) && func_15(iVar0))
		{
			func_25(iVar0, 56, 1);
		}
		iVar0++;
	}
	func_26(&(Global_1359489->f_40), 1);
}

void func_11(var uParam0)
{
	if (ANIMSCENE::_0x25557E324489393C(iLocal_8))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_8);
	}
}

bool func_12(int iParam0)
{
	return func_27(iParam0, 16, 1);
}

void func_13(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	if (!func_14(iParam0))
	{
		return;
	}
	if (func_12(iParam0))
	{
		if (((*Global_1360165)[iParam0 /*1157*/])->f_129 != 0 && ((*Global_1360165)[iParam0 /*1157*/])->f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_25(iParam0, 56, 1);
		func_26(&(Global_1359489->f_40), 1);
	}
	func_28(iParam0, 0);
	func_29(iParam0, 4, 0);
	func_30(iParam0);
	func_31(iParam0);
	func_32(iParam0, 37, 1);
	bVar0 = func_33(Global_1360165[iParam0 /*1157*/], 0);
	iVar1 = func_34(iParam0, 0);
	bVar2 = _NAMESPACE48::_0x800DF3FC913355F3(iVar1);
	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, false);
	}
	if (func_35(iParam0, 64, 1))
	{
		func_32(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_32(iParam0, 33, 1);
		func_32(iParam0, 34, 1);
		func_36(iParam0, 1056964608, -1, 1061158912);
		func_37(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_25(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_25(iParam0, 35, 1);
			if (bParam8)
			{
				func_25(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_38(iParam0, 0);
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
		func_32(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
		}
		func_25(iParam0, 33, 1);
		func_37(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_133 = fParam4;
			func_26(&(((*Global_1360165)[iParam0 /*1157*/])->f_130), 1);
		}
		else
		{
			func_39(&(((*Global_1360165)[iParam0 /*1157*/])->f_130));
		}
		if (bParam9)
		{
			func_25(iParam0, 34, 1);
		}
	}
	if (iParam1 || bParam2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		{
			func_40(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], false);
	}
	if (func_35(iParam0, 45, 1))
	{
		func_32(iParam0, 45, 1);
	}
	func_41(iParam0, 16, 1);
	func_32(iParam0, 44, 1);
	((*Global_1360165)[iParam0 /*1157*/])->f_129 = 0;
	(Global_40.f_4942[iParam0 /*60*/])->f_4 = 0;
	if (bParam5)
	{
		if (func_33(func_42(iParam0), 0))
		{
			func_43(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

int func_14(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return 0;
	}
	return 1;
}

bool func_15(int iParam0)
{
	if (!func_14(iParam0))
	{
		return false;
	}
	if (!func_12(iParam0))
	{
		return false;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
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
}

bool func_20(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_21(var uParam0)
{
	CAM::_0x05AB44D906738426();
	func_44(&uLocal_12);
	return 1;
}

int func_22(int iParam0)
{
	return 1;
}

int func_23()
{
	int iVar0;

	iVar0 = 1;
	return iVar0;
}

int func_24(var uParam0)
{
	if (iLocal_3 == 0 || iLocal_3 == 1)
	{
		CAM::_0x05AB44D906738426();
	}
	func_45(1);
	switch (iLocal_3)
	{
		case 0:
			if (ANIMSCENE::_0xCBFC7725DE6CE2E0(iLocal_8, 0))
			{
				func_44(&uLocal_15);
				iLocal_3 = 1;
			}
			break;
		case 1:
			if (func_46())
			{
				iLocal_3 = 2;
			}
			break;
		case 2:
			if (ANIMSCENE::_0xD8254CB2C586412B(iLocal_8, 0))
			{
				iLocal_3 = 3;
			}
			break;
		case 3:
			return 1;
	}
	return 0;
}

void func_25(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_47(iParam0))
		{
			return;
		}
	}
	func_48(iParam1, &iVar0, &iVar1);
	MISC::SET_BIT(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0], iVar1);
}

void func_26(var uParam0, int iParam1)
{
	if (iParam1 || !func_49(uParam0))
	{
		func_44(uParam0);
	}
}

bool func_27(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_47(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0 /*60*/] && iParam1) != 0;
}

void func_28(int iParam0, bool bParam1)
{
	if (!func_47(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_50(&(((*Global_1360165)[iParam0 /*1157*/])->f_12), 1))
		{
			func_29(iParam0, 1, 0);
		}
	}
	func_29(iParam0, 16, bParam1);
}

void func_29(int iParam0, int iParam1, bool bParam2)
{
	if (!func_47(iParam0))
	{
		return;
	}
	func_51(&(((*Global_1360165)[iParam0 /*1157*/])->f_13), iParam1, bParam2);
}

void func_30(int iParam0)
{
	func_29(iParam0, 8, 0);
}

void func_31(int iParam0)
{
	func_25(iParam0, 36, 1);
}

void func_32(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_47(iParam0))
		{
			return;
		}
	}
	func_48(iParam1, &iVar0, &iVar1);
	MISC::CLEAR_BIT(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0], iVar1);
}

int func_33(int iParam0, int iParam1)
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
	if (func_52(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_52(iVar0, 2))
	{
		if (PED::_0x3AA24CCC0D451379(iParam0))
		{
			return 0;
		}
	}
	if (func_52(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_52(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_52(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_52(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return 0;
		}
	}
	if (func_52(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_52(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_34(int iParam0, bool bParam1)
{
	if (!func_14(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_NAMESPACE48::_0x800DF3FC913355F3(((*Global_1360165)[iParam0 /*1157*/])->f_1))
		{
			func_53(iParam0);
		}
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_1;
}

bool func_35(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_47(iParam0))
		{
			return false;
		}
	}
	func_48(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0]), iVar1);
}

void func_36(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (func_14(iParam0))
	{
		iVar1 = func_54(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			iVar0 = PED::GET_PED_MAX_HEALTH(iVar1);
			PED::SET_PED_CONFIG_FLAG(iVar1, 179, true);
			func_55(iParam0);
		}
	}
	if (func_35(iParam0, 5, 1))
	{
		PED::SET_PED_CONFIG_FLAG(func_54(iParam0), 137, true);
	}
}

void func_37(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_47(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_32(iParam0, 50, 1);
		func_32(iParam0, 48, 1);
		func_32(iParam0, 49, 1);
		func_32(iParam0, 51, 1);
		func_32(iParam0, 52, 1);
		func_32(iParam0, 54, 1);
		func_32(iParam0, 55, 1);
	}
	else
	{
		func_25(iParam0, 50, 1);
		func_25(iParam0, 48, 1);
		func_25(iParam0, 49, 1);
		func_25(iParam0, 51, 1);
		if (bParam3)
		{
			func_25(iParam0, 54, 1);
		}
		else
		{
			func_32(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_25(iParam0, 52, 1);
			if (bParam3)
			{
				func_25(iParam0, 55, 1);
			}
		}
		else
		{
			func_32(iParam0, 52, 1);
			if (!bParam3)
			{
				func_32(iParam0, 55, 1);
			}
		}
	}
}

void func_38(int iParam0, bool bParam1)
{
	if (!func_47(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(func_54(iParam0), 204, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(func_54(iParam0), 204, false);
	}
}

void func_39(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_40(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	var uVar0;
	int iVar1;

	if (!func_14(iParam0))
	{
		return;
	}
	if (func_12(iParam0))
	{
		if (!func_15(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_35(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	uVar0 = func_34(iParam0, 0);
	if (!MISC::_0x716F17F8A0419F95(uVar0))
	{
		return;
	}
	iVar1 = func_54(iParam0);
	if (((ENTITY::DOES_ENTITY_EXIST(iVar1) && func_56(iParam0) < 10000f) && !bParam3) && !CAM::IS_SCREEN_FADED_OUT())
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
		func_25(iParam0, 2, 1);
	}
	else
	{
		func_57(iParam0);
		func_25(iParam0, 1, 1);
	}
}

void func_41(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_14(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (&Global_40.f_4942[iParam0 /*60*/] - (Global_40.f_4942[iParam0 /*60*/] && iParam1));
}

int func_42(int iParam0)
{
	if (!func_14(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(((*Global_1360165)[iParam0 /*1157*/])->f_70))
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_70 = 0;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_70;
}

void func_43(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (!func_47(iParam1))
	{
		return;
	}
	iVar0 = func_42(iParam1);
	if (func_58(iParam1))
	{
		if (!func_59(iParam1))
		{
			return;
		}
	}
	func_32(iParam1, 39, 1);
	func_60(iParam1, 64, 0);
	((*Global_1360165)[iParam1 /*1157*/])->f_70.f_11 = 0;
	func_60(iParam1, 8, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!bParam2)
		{
			func_60(iParam1, 512, 1);
			PED::SET_PED_KEEP_TASK(iVar0, true);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			func_25(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_61(iParam1, 0, 1, 1, 1);
		}
	}
}

void func_44(var uParam0)
{
	func_62(uParam0, 0f);
}

void func_45(bool bParam0)
{
	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	if (bParam0)
	{
		PAD::ENABLE_CONTROL_ACTION(0, -1450761377, true);
		PAD::ENABLE_CONTROL_ACTION(0, -771458680, true);
	}
	else
	{
		PAD::DISABLE_ALL_CONTROL_ACTIONS(1);
	}
	func_63();
	PAD::ENABLE_CONTROL_ACTION(0, -668070958, true);
	PAD::ENABLE_CONTROL_ACTION(0, 1250966545, true);
	PAD::ENABLE_CONTROL_ACTION(0, -1461455769, true);
	PAD::ENABLE_CONTROL_ACTION(0, -39308912, true);
}

int func_46()
{
	int iVar0;
	float fVar1;

	if (!iLocal_11)
	{
		if (func_64(&uLocal_15) > 3000)
		{
			iLocal_11 = 1;
		}
	}
	if (func_65())
	{
		if (!func_49(&uLocal_12))
		{
			func_44(&uLocal_12);
		}
	}
	if (func_64(&uLocal_12) > 3000 && !iLocal_10)
	{
		iVar0 = iLocal_9 + 1;
		if (iVar0 > 3)
		{
			iVar0 = 0;
		}
		if (func_67(func_66(iVar0), 0))
		{
			iLocal_9++;
			if (iLocal_9 > 3)
			{
				iLocal_9 = 0;
			}
			func_39(&uLocal_12);
		}
	}
	if (iLocal_11 == 1)
	{
		fVar1 = PAD::GET_CONTROL_NORMAL(0, -39308912);
		if (((fVar1 >= 0.5f || fVar1 <= -0.5f) || PAD::IS_CONTROL_JUST_PRESSED(0, -1879280170)) || iLocal_10)
		{
			if (!iLocal_10)
			{
				iLocal_10 = 1;
			}
			if (func_67("pbl_Exit", 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_47(int iParam0)
{
	return iParam0 > -1;
}

int func_48(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
	return 1;
}

bool func_49(var uParam0)
{
	return func_68(*uParam0, 1);
}

bool func_50(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_51(var uParam0, var uParam1, bool bParam2)
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

bool func_52(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_53(int iParam0)
{
	int iVar0;

	if (!func_47(iParam0))
	{
		return;
	}
	if (!MISC::_0x716F17F8A0419F95(((*Global_1360165)[iParam0 /*1157*/])->f_1))
	{
		iVar0 = func_69(iParam0);
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

int func_54(int iParam0)
{
	if (!func_47(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		(*Global_1360165)[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

void func_55(int iParam0)
{
	if (func_14(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_54(iParam0)))
		{
			func_70(iParam0, 67108864, 1);
			func_32(iParam0, 19, 1);
		}
	}
}

float func_56(int iParam0)
{
	if (!func_47(iParam0))
	{
		return 0f;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_134;
}

void func_57(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = func_54(iParam0);
	iVar1 = func_34(iParam0, 0);
	func_71(iParam0, iVar0);
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

int func_58(int iParam0)
{
	if (!func_47(iParam0))
	{
		return 0;
	}
	if (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 == 0 || ((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 == ((*Global_1360165)[iParam0 /*1157*/])->f_128)
	{
		return 0;
	}
	return 1;
}

bool func_59(int iParam0)
{
	if (!func_47(iParam0))
	{
		return false;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_60(int iParam0, int iParam1, bool bParam2)
{
	if (!func_47(iParam0))
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

int func_61(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_47(iParam0))
	{
		return 0;
	}
	iVar0 = func_42(iParam0);
	if (func_33(iVar0, 0))
	{
		if (func_33(PED::_0xB676EFDA03DADA52(iVar0, 0), 0) && !bParam4)
		{
			return 0;
		}
		if ((iParam1 || !func_58(iParam0)) || func_59(iParam0))
		{
			if (iParam2 || !(ENTITY::IS_ENTITY_ON_SCREEN(iVar0) && func_72(PLAYER::PLAYER_PED_ID(), iVar0, 1) < 10000f))
			{
				iVar1 = func_73(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
					}
					func_74(iParam0);
					_NAMESPACE48::_0x7B204F88F6C3D287(func_75(iParam0, 0));
					_NAMESPACE48::_0xFCC6DB8DBE709BC8(func_75(iParam0, 0));
					func_76(iParam0);
				}
			}
			else
			{
				if (func_27(iParam0, 32768, 1))
				{
					iVar2 = func_75(iParam0, 0);
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
		if (func_33(((*Global_1360165)[iParam0 /*1157*/])->f_124, 0))
		{
			if (func_27(iParam0, 32768, 1))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(((*Global_1360165)[iParam0 /*1157*/])->f_124))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(((*Global_1360165)[iParam0 /*1157*/])->f_124, true, true);
				}
				func_74(iParam0);
				_NAMESPACE48::_0x7B204F88F6C3D287(func_75(iParam0, 0));
				_NAMESPACE48::_0xFCC6DB8DBE709BC8(func_75(iParam0, 0));
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(((*Global_1360165)[iParam0 /*1157*/])->f_124, true, true);
				func_74(iParam0);
				PED::DELETE_PED(&(((*Global_1360165)[iParam0 /*1157*/])->f_124));
			}
		}
	}
	((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 = 0;
	func_77(iParam0, 0);
	return 1;
}

void func_62(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_78() - fParam1);
	func_79(uParam0, 1);
	func_80(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_63()
{
	PAD::DISABLE_CONTROL_ACTION(0, 1287709438, false);
	func_81(0);
	Global_1935689->f_6 = 1;
}

int func_64(var uParam0)
{
	if (!func_49(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000f));
	}
	if (func_82(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_83() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

int func_65()
{
	if (!ANIMSCENE::_0x25557E324489393C(iLocal_8))
	{
		return 0;
	}
	if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(iLocal_8, 0))
	{
		return 0;
	}
	if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_8, "Idle", 1))
	{
		return 1;
	}
	return 0;
}

char* func_66(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pbl_Cough_A";
		case 1:
			return "pbl_Cough_B";
		case 2:
			return "pbl_Labored_Breath";
		case 3:
			return "pbl_Wipe_Face";
	}
	return "pbl_Cough_A";
}

int func_67(char* sParam0, int iParam1)
{
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_8, sParam0))
	{
		if (!ANIMSCENE::_0x0DF57F86FE71DBE5(iLocal_8, sParam0))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_8, sParam0);
		}
	}
	else if (func_84() || iParam1)
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_8, sParam0, true);
		if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(iLocal_8, 0))
		{
			ANIMSCENE::START_ANIM_SCENE(iLocal_8);
		}
		return 1;
	}
	return 0;
}

bool func_68(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_69(int iParam0)
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

void func_70(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_14(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (Global_40.f_4942[iParam0 /*60*/] || iParam1);
}

void func_71(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		func_85(iParam1);
	}
}

float func_72(int iParam0, int iParam1, bool bParam2)
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
	return func_86(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
}

int func_73(int iParam0, bool bParam1)
{
	if (!func_47(iParam0))
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
		((*Global_1360165)[iParam0 /*1157*/])->f_127 = func_87(iParam0);
		return ((*Global_1360165)[iParam0 /*1157*/])->f_127;
	}
	return 0;
}

void func_74(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_42(iParam0);
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

int func_75(int iParam0, int iParam1)
{
	if (!func_47(iParam0))
	{
		return 0;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(((*Global_1360165)[iParam0 /*1157*/])->f_126) && iParam1)
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_126 = func_88(iParam0);
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_126;
}

void func_76(int iParam0)
{
	int iVar0;

	if (!func_47(iParam0))
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

void func_77(int iParam0, int iParam1)
{
	if (!func_47(iParam0))
	{
		return;
	}
	((*Global_1360165)[iParam0 /*1157*/])->f_70.f_12 = iParam1;
}

float func_78()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_79(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_80(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_81(bool bParam0)
{
	if (bParam0)
	{
		Global_1935689 = 1;
	}
	else
	{
		Global_1935689 = 2;
	}
}

bool func_82(var uParam0)
{
	return func_68(*uParam0, 2);
}

int func_83()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

int func_84()
{
	if (!ANIMSCENE::_0x25557E324489393C(iLocal_8))
	{
		return 1;
	}
	if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(iLocal_8, 0))
	{
		return 1;
	}
	if (ANIMSCENE::_0x3FBC3F51BF12DFBF(iLocal_8) >= 0.98f)
	{
		return 1;
	}
	return 0;
}

void func_85(int iParam0)
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

float func_86(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

int func_87(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (!func_47(iParam0))
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
	if (!func_47(iParam0))
	{
		if (iVar0 != 0)
		{
			(Global_1357549->f_1675[iVar1 /*5*/])->f_1 = iParam0;
			((*Global_1360165)[iParam0 /*1157*/])->f_126 = (Global_1357549->f_1675[iVar1 /*5*/])->f_4;
		}
	}
	return iVar0;
}

int func_88(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_47(iParam0))
	{
		return 0;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(((*Global_1360165)[iParam0 /*1157*/])->f_126))
	{
		iVar0 = func_73(iParam0, 1);
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

