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
	var uLocal_15 = 1;
	var uLocal_16 = 0;
	var uLocal_17 = 2;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = -1;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 1097859072;
	var uLocal_40 = 1000;
	var uLocal_41 = 1067450368;
	var uLocal_42 = 5000;
	var uLocal_43 = 42;
	var uLocal_44 = 1103626240;
	var uLocal_45 = 1077936128;
	var uLocal_46 = 1106247680;
	var uLocal_47 = 1103101952;
	var uLocal_48 = 1097859072;
	var uLocal_49 = 1103626240;
	var uLocal_50 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = -1;
	var uScriptParam_2 = -1;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = -1;
	var uScriptParam_8 = -1;
	var uScriptParam_9 = 0;
#endregion

void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1(&uLocal_14);
	}
	while (true)
	{
		if (func_2(&uLocal_14, &uScriptParam_0))
		{
			func_1(&uLocal_14);
		}
		BUILTIN::WAIT(0);
	}
	func_1(&uLocal_14);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_3(&(uParam0->f_3[iVar0]));
		iVar0++;
	}
	func_3(uParam0->f_6);
	if (PED::_0x91A5F9CBEBB9D936(uParam0->f_7))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_7, false);
	}
	if (!func_4(Global_1900325->f_3))
	{
		func_5(&(Global_1900325->f_25), 1, 1, 1);
		iVar1 = func_6(Global_1900325->f_2);
		func_5(&iVar1, 1, 0, 1);
		if (PED::_0x62DE46F061CAA468() > 0)
		{
			PED::_0x7D4E70A67A651C71(uParam0->f_1);
		}
		func_7();
		func_8(0);
		func_9(0);
	}
	STREAMING::REMOVE_ANIM_DICT(func_10(1, 0));
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_2(var uParam0, var uParam1)
{
	int iVar0;

	if (func_11(uParam0))
	{
		return 1;
	}
	switch (*uParam0)
	{
		case 0:
			if (func_12(uParam0, uParam1))
			{
				func_13(&uLocal_14, 1);
			}
			break;
		case 1:
			STREAMING::REQUEST_ANIM_DICT(func_10(1, 0));
			if (!STREAMING::HAS_ANIM_DICT_LOADED(func_10(1, 0)))
			{
				return 0;
			}
			else if (!func_14())
			{
				return 0;
			}
			else if (!PED::_0x5E420FF293EE5472())
			{
				return 0;
			}
			else
			{
				func_13(uParam0, 2);
				func_15(func_10(1, 0));
			}
			break;
		case 2:
			if (func_16(uParam0) && func_17(uParam0))
			{
				func_18(0);
				func_13(uParam0, 3);
			}
			break;
		case 3:
			if (ENTITY::IS_ENTITY_DEAD(Global_1900325->f_25) || func_19(uParam0))
			{
				func_20(Global_1900325->f_2, 0);
				func_13(uParam0, 4);
			}
			else if (!func_21(Global_1900325->f_2))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_1900325->f_25) && PED::_0x34D6AC1157C8226C(Global_1900325->f_25, -1103796964))
				{
					func_22(Global_1900325->f_2);
				}
			}
			break;
		case 4:
			if (!ENTITY::IS_ENTITY_DEAD(Global_1900325->f_25))
			{
				PED::_0xAAB050DA48B57978(Global_1900325->f_25, "Flee_Panic_With_Glances", Global_35, -1, 4);
				PED::_0xEEED8FAFEC331A70(Global_1900325->f_25, Global_36, 3);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_1900325->f_25, false);
				ANIMSCENE::_0x99B2A2E3655DEAF1(Global_1900325->f_25, "ClosestScenario");
				TASK::TASK_SMART_FLEE_PED(Global_1900325->f_25, Global_35, 100000f, 100000, 0, 3f, 0);
				PED::SET_PED_KEEP_TASK(Global_1900325->f_25, true);
			}
			func_8(0);
			Global_1900325->f_24 = 0;
			func_20(Global_1900325->f_2, 0);
			if (func_23(Global_1900325->f_2, &iVar0))
			{
				func_24(iVar0);
			}
			func_18(1);
			func_25(&Global_1900325, 256);
			func_25(&Global_1900325, 128);
			Global_1900325->f_25 = 0;
			func_13(uParam0, 5);
			break;
		case 5:
			break;
	}
	return 0;
}

void func_3(int iParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		VOLUME::_0x43F867EF5C463A53(iParam0);
	}
}

bool func_4(int iParam0)
{
	int iVar0;

	iVar0 = func_26(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_5(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (ENTITY::_0xA7E51B53309EAC97(*iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (!PED::IS_PED_INJURED(*iParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, 0);
		if (!bParam3)
		{
			TASK::CLEAR_PED_SECONDARY_TASK(*iParam0);
		}
		PED::SET_PED_KEEP_TASK(*iParam0, bParam1);
		if (bParam2)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
		}
	}
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
}

int func_6(int iParam0)
{
	int iVar0;

	if (func_27() != -1)
	{
		return 0;
	}
	iVar0 = func_28(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	return (Global_1392915->f_121[iVar0 /*20*/])->f_6;
}

void func_7()
{
	STREAMING::_0x4EDDD9E9CA5AF985(-1103796964);
}

void func_8(int iParam0)
{
	if (Global_1900325->f_23 != iParam0)
	{
		Global_1900325->f_23 = iParam0;
	}
}

void func_9(int iParam0)
{
	int iVar0;

	iVar0 = func_29(iParam0);
	if (Global_1900325->f_24 != iVar0)
	{
		Global_1900325->f_24 = iVar0;
	}
}

char* func_10(int iParam0, int iParam1)
{
	if (iParam0 == 1)
	{
		return "mini_games@fivefingerfillet_launch";
	}
	else if (iParam1 == 1)
	{
		return "mini_games@fivefingerfillet_female";
	}
	return "mini_games@fivefingerfillet";
}

int func_11(var uParam0)
{
	float fVar0;

	if (func_27() != -1)
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return 1;
	}
	if (*uParam0 > 0)
	{
		if (func_4(Global_1900325->f_3))
		{
			return 1;
		}
		if (!func_30(&Global_1900325))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_1900325->f_25))
			{
				TASK::CLEAR_PED_TASKS(Global_1900325->f_25, 1, 0);
			}
			return 1;
		}
		if (func_31(Global_1900325->f_4, 4194304))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_1900325->f_25))
			{
				TASK::CLEAR_PED_TASKS(Global_1900325->f_25, 1, 0);
			}
			return 1;
		}
		if (Global_1935630->f_12 == 0)
		{
			fVar0 = func_32(&Global_1900325);
			if (BUILTIN::VDIST2(Global_36, Global_1900325->f_5) > (fVar0 * fVar0))
			{
				return 1;
			}
		}
	}
	if (func_33())
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_1900325->f_25))
		{
			TASK::CLEAR_PED_TASKS(Global_1900325->f_25, 1, 0);
		}
		return 1;
	}
	return 0;
}

int func_12(var uParam0, var uParam1)
{
	if (uParam1->f_7 == -1)
	{
		return 0;
	}
	Global_1900325->f_37 = 0;
	func_34(uParam1->f_1, *uParam1, uParam1->f_2, uParam1->f_8, uParam1->f_7);
	func_35(uParam1->f_3, uParam1->f_6);
	PED::_0xED9582B3DA8F02B4(uParam0->f_1);
	func_22(Global_1900325->f_2);
	func_36(&(uParam0->f_8), 1, 1, 1);
	func_37(&(uParam0->f_8));
	func_38(&(uParam0->f_8), 1);
	func_39(&(uParam0->f_8), 1);
	func_40(&(uParam0->f_8), 1);
	func_41(&(uParam0->f_8), 1);
	func_42(&(uParam0->f_8), 5f);
	func_43(&(uParam0->f_8), 5);
	func_44(&(uParam0->f_8), 0);
	func_45(&(uParam0->f_8), 0);
	func_46(&(uParam0->f_8), 0);
	func_47(&(uParam0->f_8), 0);
	func_48(&(uParam0->f_8), 0);
	func_49(&(uParam0->f_8), 0);
	func_50(&(uParam0->f_8), 0);
	func_51(&(uParam0->f_8), 0);
	func_52(&(uParam0->f_8), 0);
	func_53(&(uParam0->f_8), 0);
	func_54(&(uParam0->f_8), 0);
	func_55(&(uParam0->f_8), 0);
	func_56(&(uParam0->f_8), 0);
	func_57(&(uParam0->f_8), 0);
	func_58(&(uParam0->f_8), 0);
	func_59(&(uParam0->f_8), 0);
	if (ENTITY::IS_ENTITY_DEAD(Global_1900325->f_25))
	{
		func_60(&Global_1900325, Global_1900325->f_5, Global_1900325->f_8, 1056964608, 0.12f);
	}
	else
	{
		func_61(&Global_1900325, Global_1900325->f_5, 1073741824, 1);
	}
	Global_1900325->f_19 = { 0f, 0f, 0.5f };
	return 1;
}

void func_13(var uParam0, int iParam1)
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
	}
}

int func_14()
{
	STREAMING::_0x19A6BE7D9C6884D3(-1103796964, 9, 0, 0);
	if (!STREAMING::_0x9427C94D2E4094A4(-1103796964, 0))
	{
		return 0;
	}
	return 1;
}

void func_15(char* sParam0)
{
	vector3 vVar0;
	int iVar3;

	Global_1900325->f_16[0] = (Global_1900325->f_8 - 90f);
	Global_1900325->f_16[1] = (Global_1900325->f_8 + 90f);
	vVar0 = { Global_1900325->f_5 };
	vVar0.f_2 = (vVar0.z - 0.8f);
	iVar3 = 0;
	while (iVar3 < 2)
	{
		*(Global_1900325->f_9[iVar3 /*3*/]) = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(sParam0, "idle_01", vVar0, 0f, 0f, &(Global_1900325->f_16[iVar3]), 0f, 2) };
		(Global_1900325->f_9[iVar3 /*3*/])->f_2 = vVar0.z;
		iVar3++;
	}
	if (Global_1900325->f_1 == 1)
	{
		Global_1900325->f_34 = 1;
	}
	else
	{
		Global_1900325->f_34 = 0;
	}
	Global_1900325->f_37 = 1;
}

bool func_16(var uParam0)
{
	float fVar0;
	int iVar1;

	fVar0 = (0.25f * 2f);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (!VOLUME::_0x92A78D0BEDB332A3(&(uParam0->f_3[iVar1])))
		{
			func_62(uParam0->f_3[iVar1], *(Global_1900325->f_9[iVar1 /*3*/]), 0f, 0f, 0f, fVar0, fVar0, 2.5f);
		}
		iVar1++;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_6))
	{
		func_63(&(uParam0->f_6), Global_1900325->f_5, 0f, 0f, Global_1900325->f_8, 4.5f, 4.5f, 2.5f);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_6) && !PED::_0x91A5F9CBEBB9D936(uParam0->f_7))
	{
		uParam0->f_7 = PED::_0x4C39C95AE5DB1329(uParam0->f_6, func_27() == 0, 15);
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_1900325->f_25) && !func_64())
	{
		func_65(uParam0->f_6, 0);
	}
	return (((VOLUME::_0x92A78D0BEDB332A3(&(uParam0->f_3[0])) && VOLUME::_0x92A78D0BEDB332A3(&(uParam0->f_3[1]))) && VOLUME::_0x92A78D0BEDB332A3(uParam0->f_6)) && PED::_0x91A5F9CBEBB9D936(uParam0->f_7));
}

int func_17(var uParam0)
{
	vector3 vVar0;
	int iVar3;

	if (ENTITY::IS_ENTITY_DEAD(Global_1900325->f_25) && func_64())
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_1900325->f_25))
	{
		STREAMING::REQUEST_MODEL(joaat("a_m_m_fivefingerfilletplayers_01"), false);
		if (!STREAMING::HAS_MODEL_LOADED(joaat("a_m_m_fivefingerfilletplayers_01")))
		{
			return 0;
		}
		func_65(uParam0->f_6, 0);
		vVar0 = { *(Global_1900325->f_9[Global_1900325->f_34 /*3*/]) };
		vVar0 = { vVar0 + Global_1900325->f_19 };
		Global_1900325->f_25 = func_66(joaat("a_m_m_fivefingerfilletplayers_01"), vVar0, &(Global_1900325->f_16[Global_1900325->f_34]), 1, 1, 1, 0, 0, 0, 0, 1, 0, 0);
		iVar3 = func_67(&Global_1900325, Global_1900325->f_4, Global_1900325->f_23);
		PED::_0x1902C4CFCC5BE57C(Global_1900325->f_25, iVar3);
		PED::_0xCC8CA3E88256E58F(Global_1900325->f_25, 0, 1, 1, 1, 0);
		func_68(Global_1900325->f_25, Global_1900325->f_24);
		PED::_0x6569F31A01B4C097(Global_1900325->f_25, 0, 1);
		PED::_0x6569F31A01B4C097(Global_1900325->f_25, 1, 1);
		WEAPON::REMOVE_ALL_PED_WEAPONS(Global_1900325->f_25, true, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_m_fivefingerfilletplayers_01"));
		func_9(0);
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_1900325->f_25))
	{
		return 0;
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_1900325->f_25, false);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1900325->f_25, -225988669);
	PED::SET_PED_CONFIG_FLAG(Global_1900325->f_25, 130, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(Global_1900325->f_25, 17, true);
	StringCopy(&(Global_1900325->f_26), func_69(Global_1900325->f_23), 64);
	AUDIO::SET_AMBIENT_VOICE_NAME(Global_1900325->f_25, &(Global_1900325->f_26));
	func_20(Global_1900325->f_2, Global_1900325->f_25);
	uParam0->f_2 = 1;
	if (func_70(&Global_1900325, 16))
	{
		func_25(&Global_1900325, 16);
	}
	func_71(Global_1900325->f_25);
	return 1;
}

void func_18(int iParam0)
{
	if (Global_1900325->f_35 != iParam0)
	{
		Global_1900325->f_35 = iParam0;
	}
}

int func_19(var uParam0)
{
	var uVar0;

	if (uParam0->f_2 == 1 && func_72(Global_1900325->f_25, 0, &(uParam0->f_8), &(uParam0->f_36), 0, 0))
	{
		return 1;
	}
	if (Global_1935630->f_17 > 0)
	{
		return 1;
	}
	if (PED::IS_PED_IN_COMBAT(Global_35, 0))
	{
		return 1;
	}
	if (PED::_0x0E99E3BF11BB6367(Global_35) || PED::_0x3BDFCF25B58B0415(Global_35))
	{
		return 1;
	}
	uVar0 = func_73(Global_1900325->f_25);
	if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::GET_PLAYER_INDEX(), &uVar0, 1, 1) && PAD::IS_CONTROL_JUST_PRESSED(0, 648122183))
	{
		return 1;
	}
	if (uParam0->f_2 == 1)
	{
		if (TASK::_0x0C3CB2E600C8977D(Global_1900325->f_25, 1) || !PED::_0x34D6AC1157C8226C(Global_1900325->f_25, -1103796964))
		{
			return 1;
		}
	}
	return 0;
}

void func_20(int iParam0, int iParam1)
{
	int iVar0;

	if (func_27() != -1)
	{
		return;
	}
	iVar0 = func_28(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	(Global_1392915->f_121[iVar0 /*20*/])->f_6 = iParam1;
}

int func_21(int iParam0)
{
	int iVar0;

	if (func_27() != -1)
	{
		return 1;
	}
	if (!func_23(iParam0, &iVar0))
	{
		return 0;
	}
	if (((*Global_1392915)[iVar0 /*12*/])->f_1 == 3 && Global_1900325->f_24 == 0)
	{
		(Global_1392915->f_121[iVar0 /*20*/])->f_15 = 1;
	}
	return (Global_1392915->f_121[iVar0 /*20*/])->f_15;
}

void func_22(int iParam0)
{
	int iVar0;

	if (func_27() != -1)
	{
		return;
	}
	if (!func_23(iParam0, &iVar0))
	{
		return;
	}
	if ((Global_1392915->f_121[iVar0 /*20*/])->f_15 == 0)
	{
		(Global_1392915->f_121[iVar0 /*20*/])->f_15 = 1;
	}
}

bool func_23(int iParam0, var uParam1)
{
	*uParam1 = -1;
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return false;
	}
	*uParam1 = &Global_1899528->f_11[iParam0];
	return *uParam1 != -1;
}

int func_24(int iParam0)
{
	if (func_74((Global_1392915->f_121[iParam0 /*20*/])->f_3))
	{
		HUD::_0x8BC7C1F929D07BF3(-1744263063);
		func_75(&((Global_1392915->f_121[iParam0 /*20*/])->f_3), 1, 0);
		(Global_1392915->f_121[iParam0 /*20*/])->f_3 = 0;
		return 1;
	}
	(Global_1392915->f_121[iParam0 /*20*/])->f_3 = 0;
	return 0;
}

void func_25(int iParam0, int iParam1)
{
	if (func_70(iParam0, iParam1))
	{
	}
	Global_1899528->f_3[iParam0] = (&Global_1899528->f_3[iParam0] - (Global_1899528->f_3[iParam0] && iParam1));
}

int func_26(int iParam0)
{
	if (!func_76(iParam0))
	{
		return -1;
	}
	return func_77(iParam0);
}

int func_27()
{
	return Global_1572887->f_12;
}

int func_28(int iParam0)
{
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return -1;
	}
	return &(Global_1899528->f_11[iParam0]);
}

int func_29(int iParam0)
{
	int iVar0;

	if (iParam0 < 0 || iParam0 > 3)
	{
		iParam0 = 0;
	}
	if (Global_1900325->f_4 == 76)
	{
		if (iParam0 == 0)
		{
			iVar0 = 50;
		}
		else if (iParam0 == 1)
		{
			iVar0 = 100;
		}
		else if (iParam0 == 2)
		{
			iVar0 = 200;
		}
		else
		{
			iVar0 = 400;
		}
	}
	else if (Global_1900325->f_4 == 26)
	{
		if (iParam0 == 0)
		{
			iVar0 = 75;
		}
		else if (iParam0 == 1)
		{
			iVar0 = 150;
		}
		else if (iParam0 == 2)
		{
			iVar0 = 300;
		}
		else
		{
			iVar0 = 600;
		}
	}
	else if (Global_1900325->f_4 == 92)
	{
		if (iParam0 == 0)
		{
			iVar0 = 100;
		}
		else if (iParam0 == 1)
		{
			iVar0 = 200;
		}
		else if (iParam0 == 2)
		{
			iVar0 = 400;
		}
		else
		{
			iVar0 = 800;
		}
	}
	else if (iParam0 == 0)
	{
		iVar0 = 10;
	}
	else if (iParam0 == 1)
	{
		iVar0 = 20;
	}
	else if (iParam0 == 2)
	{
		iVar0 = 40;
	}
	else
	{
		iVar0 = 80;
	}
	return iVar0;
}

int func_30(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < &Global_1898330)
	{
		if (func_78(Global_1898330[iVar0]) == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_31(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23117[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0 /*11*/] && iParam1) != 0;
}

float func_32(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 70f;
		case 2:
			return 45f;
		case 0:
			return 40f;
		case 3:
			return 90f;
		case 5:
			return 90f;
		case 4:
			return 50f;
		case 6:
			return 90f;
		default:
			break;
	}
	return 70f;
}

bool func_33()
{
	return Global_1898164->f_163;
}

void func_34(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	Global_1900325 = uParam0;
	Global_1900325->f_1 = uParam1;
	Global_1900325->f_2 = uParam2;
	Global_1900325->f_3 = uParam3;
	Global_1900325->f_4 = uParam4;
}

void func_35(vector3 vParam0, var uParam3)
{
	vector3 vVar0;
	var uVar3;
	var uVar4;
	bool bVar5;
	float fVar6;

	Global_1900325->f_5 = { vParam0 };
	Global_1900325->f_8 = uParam3;
	vVar0 = { Global_1900325->f_5 };
	vVar0.f_2 = (vVar0.z + 0.1f);
	bVar5 = MISC::_0xBBE5B63EFFB08E68(vVar0, 17, &(vVar0.f_2), &uVar3, &uVar4);
	if (bVar5 == 1)
	{
		fVar6 = (Global_1900325->f_5.f_2 - vVar0.z);
		if (fVar6 > 0.1f || fVar6 < -0.1f)
		{
		}
		else
		{
			Global_1900325->f_5.f_2 = vVar0.z;
		}
	}
}

void func_36(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_79(uParam0, 268435456);
	}
	else
	{
		func_80(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_79(uParam0, 1073741824);
	}
	else
	{
		func_80(uParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_79(uParam0, 536870912);
	}
	else
	{
		func_80(uParam0, 536870912);
	}
}

void func_37(var uParam0)
{
	func_82(uParam0, (func_81(uParam0) - 6f));
	func_83(uParam0, 1);
}

void func_38(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_80(&(uParam0->f_1), 4);
	}
	else
	{
		func_79(&(uParam0->f_1), 4);
	}
}

void func_39(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_80(&(uParam0->f_1), 2);
	}
	else
	{
		func_79(&(uParam0->f_1), 2);
	}
}

void func_40(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_80(&(uParam0->f_1), 8);
	}
	else
	{
		func_79(&(uParam0->f_1), 8);
	}
}

void func_41(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_80(&(uParam0->f_1), 16);
	}
	else
	{
		func_79(&(uParam0->f_1), 16);
	}
}

void func_42(var uParam0, float fParam1)
{
	uParam0->f_23 = fParam1;
}

void func_43(var uParam0, int iParam1)
{
	uParam0->f_21 = iParam1;
}

void func_44(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_80(&(uParam0->f_1), 256);
	}
	else
	{
		func_79(&(uParam0->f_1), 256);
	}
}

void func_45(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_80(&(uParam0->f_1), 2048);
	}
	else
	{
		func_79(&(uParam0->f_1), 2048);
	}
}

void func_46(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_80(&(uParam0->f_1), 1024);
	}
	else
	{
		func_79(&(uParam0->f_1), 1024);
	}
}

void func_47(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_80(&(uParam0->f_1), 16384);
	}
	else
	{
		func_79(&(uParam0->f_1), 16384);
	}
}

void func_48(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_80(&(uParam0->f_1), 524288);
	}
	else
	{
		func_79(&(uParam0->f_1), 524288);
	}
}

void func_49(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_80(&(uParam0->f_1), 1);
	}
	else
	{
		func_79(&(uParam0->f_1), 1);
	}
}

void func_50(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_80(&(uParam0->f_1), 128);
	}
	else
	{
		func_79(&(uParam0->f_1), 128);
	}
}

void func_51(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_80(&(uParam0->f_1), 131072);
	}
	else
	{
		func_79(&(uParam0->f_1), 131072);
	}
}

void func_52(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_79(uParam0, 4);
	}
	else
	{
		func_80(uParam0, 4);
	}
}

void func_53(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_79(uParam0, 1048576);
	}
	else
	{
		func_80(uParam0, 1048576);
	}
}

void func_54(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_79(uParam0, 262144);
	}
	else
	{
		func_80(uParam0, 262144);
	}
}

void func_55(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_79(uParam0, 8);
	}
	else
	{
		func_80(uParam0, 8);
	}
}

void func_56(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_79(uParam0, 32);
	}
	else
	{
		func_80(uParam0, 32);
	}
}

void func_57(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_79(uParam0, 16);
	}
	else
	{
		func_80(uParam0, 67108864);
		func_80(uParam0, 16);
	}
}

void func_58(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_79(uParam0, 64);
	}
	else
	{
		func_80(uParam0, 64);
	}
}

void func_59(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_79(uParam0, 1024);
	}
	else
	{
		func_80(uParam0, 1024);
	}
}

void func_60(int iParam0, vector3 vParam1, float fParam4, float fParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar6;
	var uVar7;

	iVar1 = func_84(iParam0);
	if (!func_85(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar2 = func_86(iParam0, vParam1, fParam4, iVar0, fParam5);
		if (!ENTITY::IS_ENTITY_DEAD(iVar2) && ENTITY::IS_ENTITY_UPRIGHT(iVar2, 90f))
		{
			vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar2, true, false) };
			uVar7 = vVar3.z;
			if (func_87(iParam0, vParam1, fParam4, iVar0, &vVar3, &fVar6, 0))
			{
				vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar3, fVar6, 0f, fParam6, 0f) };
				vVar3.f_2 = uVar7;
				fVar6 = ENTITY::GET_ENTITY_HEADING(iVar2);
				ENTITY::_0x203BEFFDBE12E96A(iVar2, vVar3, fVar6, 1, 0, 1);
				ENTITY::FREEZE_ENTITY_POSITION(iVar2, true);
			}
		}
		iVar0++;
	}
}

void func_61(int iParam0, vector3 vParam1, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar4 = 0;
	func_88(&iVar0, vParam1, 0f, 0f, 0f, iParam4, iParam4, iParam4);
	if (!VOLUME::_0x92A78D0BEDB332A3(iVar0))
	{
		return;
	}
	iVar5 = ITEMSET::CREATE_ITEMSET(true);
	if (ITEMSET::IS_ITEMSET_VALID(iVar5))
	{
		iVar2 = ENTITY::_0x886171A12F400B89(iVar0, iVar5, 3);
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			iVar1 = MISC::_0x18013392501CE5DC(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, iVar5));
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (func_89(iParam0, ENTITY::GET_ENTITY_MODEL(iVar1)))
				{
					if (!ENTITY::IS_ENTITY_ATTACHED(iVar1))
					{
						if ((func_27() != -1 && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1)) || func_27() == -1)
						{
							iVar4++;
							if (iParam5 == 1 && ENTITY::IS_ENTITY_UPRIGHT(iVar1, 90f))
							{
								ENTITY::FREEZE_ENTITY_POSITION(iVar1, true);
								ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar1, false);
							}
							else
							{
								ENTITY::FREEZE_ENTITY_POSITION(iVar1, false);
								ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar1, true);
							}
						}
					}
				}
			}
			iVar3++;
		}
		ITEMSET::_0x20A4BF0E09BEE146(iVar5);
		ITEMSET::DESTROY_ITEMSET(iVar5);
	}
	if (iVar4 > 0)
	{
	}
	func_3(iVar0);
}

void func_62(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(*uParam0))
	{
		*uParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, func_90());
	}
}

void func_63(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(*uParam0))
	{
		*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, func_90());
	}
}

int func_64()
{
	float fVar0;
	float fVar1;
	float fVar2;

	if (!CAM::IS_SCREEN_FADED_IN() || func_70(&Global_1900325, 16))
	{
		return 0;
	}
	fVar0 = BUILTIN::VDIST(Global_1900325->f_5, Global_36);
	fVar1 = func_91(&Global_1900325);
	fVar2 = (fVar1 - 10f);
	if (fVar0 < 10f || (fVar0 < fVar2 && CAM::IS_SPHERE_VISIBLE(Global_1900325->f_5, 1f)))
	{
		return 1;
	}
	return 0;
}

void func_65(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	MISC::_0x2FCD528A397E5C88(iParam0, iVar0);
}

int func_66(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_92(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

int func_67(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 1)
	{
		if (iParam2 == -1)
		{
			iParam2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
		}
		switch (iParam1)
		{
			case 69:
				switch (iParam2)
				{
					case 0:
						return -1043092861;
					case 1:
						return -855293722;
					case 2:
						return 1321911407;
					case 3:
						return 1633413521;
					case 4:
						return -216756988;
					case 5:
						return 368759504;
					default:
						break;
				}
				return -1043092861;
			case 5:
				switch (iParam2)
				{
					case 0:
						return 68127406;
					case 1:
						return 912158539;
					case 2:
						return 629329300;
					case 3:
						return 1371088384;
					case 4:
						return 1263868216;
					case 5:
						return 2106064285;
					default:
						break;
				}
				return 68127406;
			case 38:
				switch (iParam2)
				{
					case 0:
						return 316456870;
					case 1:
						return -661468397;
					case 2:
						return -431954321;
					case 3:
						return -1139797490;
					case 4:
						return -875384429;
					case 5:
						return 436555239;
					default:
						break;
				}
				return 316456870;
		}
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == -1)
		{
			iParam2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
		}
		switch (iParam1)
		{
			case 76:
				switch (iParam2)
				{
					case 0:
						return -435547108;
					case 1:
						return -128698192;
					case 2:
						return 226255616;
					case 3:
						return -478015708;
					default:
						break;
				}
				return -435547108;
			case 26:
				switch (iParam2)
				{
					case 0:
						return 1752053992;
					case 1:
						return 2013845533;
					case 2:
						return -1950122094;
					case 3:
						return 496214832;
					default:
						break;
				}
				return 1752053992;
			case 92:
				switch (iParam2)
				{
					case 0:
						return 1194574257;
					case 1:
						return 2093821155;
					case 2:
						return -1582008655;
					case 3:
						return -1887776194;
					default:
						break;
				}
				return 1194574257;
		}
	}
	else if (iParam0 == 2 || iParam0 == 0)
	{
		if (iParam2 == -1)
		{
			iParam2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 12);
		}
		switch (iParam1)
		{
			case 5:
				switch (iParam2)
				{
					case 0:
						return 68127406;
					case 1:
						return 912158539;
					case 2:
						return 629329300;
					case 3:
						return 1371088384;
					case 4:
						return 1263868216;
					case 5:
						return 2106064285;
					case 6:
						return 1754977219;
					case 7:
						return -1726696266;
					case 8:
						return -1978394955;
					case 9:
						return -820633060;
					case 10:
						return -44073298;
					case 11:
						return -342303967;
					default:
						break;
				}
				return 68127406;
			case 38:
				switch (iParam2)
				{
					case 0:
						return 316456870;
					case 1:
						return -661468397;
					case 2:
						return -431954321;
					case 3:
						return -1139797490;
					case 4:
						return -875384429;
					case 5:
						return 436555239;
					case 6:
						return 666823002;
					case 7:
						return 4921971;
					case 8:
						return 251738079;
					case 9:
						return 478204342;
					case 10:
						return 777155929;
					case 11:
						return 1841389;
					default:
						break;
				}
				return 316456870;
			case 115:
				switch (iParam2)
				{
					case 0:
						return 2098938291;
					case 1:
						return 1839440580;
					case 2:
						return 680401050;
					case 3:
						return -1892751910;
					case 4:
						return 1174655877;
					case 5:
						return 979024947;
					case 6:
						return -240866616;
					case 7:
						return 1469806260;
					case 8:
						return 317713758;
					case 9:
						return 1934601404;
					case 10:
						return 487194674;
					case 11:
						return -1833636986;
					default:
						break;
				}
				return 2098938291;
			case 76:
				switch (iParam2)
				{
					case 0:
						return -435547108;
					case 1:
						return -128698192;
					case 2:
						return 226255616;
					case 3:
						return -478015708;
					case 4:
						return -194891548;
					case 5:
						return 112776593;
					case 6:
						return 411040031;
					case 7:
						return -1387257155;
					case 8:
						return -1087322498;
					case 9:
						return 2089668521;
					case 10:
						return 1791437852;
					case 11:
						return 1426194578;
					default:
						break;
				}
				return -435547108;
			case 92:
				switch (iParam2)
				{
					case 0:
						return 1194574257;
					case 1:
						return 2093821155;
					case 2:
						return -1582008655;
					case 3:
						return -1887776194;
					case 4:
						return -967360518;
					case 5:
						return -1276208343;
					case 6:
						return -506398995;
					case 7:
						return -815574510;
					case 8:
						return 104710086;
					case 9:
						return -1562249180;
					case 10:
						return -1812506033;
					case 11:
						return -1431009331;
					default:
						break;
				}
				return 1194574257;
			case 105:
				switch (iParam2)
				{
					case 0:
						return -1449777556;
					case 1:
						return 1700437490;
					case 2:
						return -2029723322;
					case 3:
						return 1088279801;
					case 4:
						return 1949514659;
					case 5:
						return 772091720;
					case 6:
						return 1338340040;
					case 7:
						return -321409750;
					case 8:
						return -1233239944;
					case 9:
						return 1051251111;
					case 10:
						return -262949646;
					case 11:
						return -726499920;
					default:
						break;
				}
				return -1449777556;
			case 75:
				switch (iParam2)
				{
					case 0:
						return -1600439903;
					case 1:
						return 1508387900;
					case 2:
						return 1147797824;
					case 3:
						return 1947066503;
					case 4:
						return 1716995354;
					case 5:
						return 401713232;
					case 6:
						return 163056605;
					case 7:
						return 1032745865;
					case 8:
						return 793499396;
					case 9:
						return 883482182;
					case 10:
						return 1123711721;
					case 11:
						return -903083698;
					default:
						break;
				}
				return -1600439903;
		}
	}
	return 0;
}

bool func_68(int iParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar0 = func_93(iParam0);
		return func_94(iParam0, 2084597891, iParam1, iVar0);
	}
	return DECORATOR::DECOR_SET_INT(iParam0, "loot_money", iParam1);
}

char* func_69(int iParam0)
{
	var uVar0;
	int iVar2;

	switch (Global_1900325->f_4)
	{
		case 76:
			switch (iParam0)
			{
				case 0:
					return "0842_S_M_M_UniButchers_01_WHITE_01";
				case 1:
					return "0843_S_M_M_UniButchers_01_WHITE_02";
				case 2:
					return "0913_A_M_M_Civ_Poor_White_AGGRESSIVE_13";
				case 3:
					return "1062_G_M_M_UniCriminals_01_WHITE_09";
				default:
					break;
			}
			break;
		case 26:
			switch (iParam0)
			{
				case 0:
					return "1062_G_M_M_UniCriminals_01_WHITE_09";
				case 1:
					return "0842_S_M_M_UniButchers_01_WHITE_01";
				case 2:
					return "0843_S_M_M_UniButchers_01_WHITE_02";
				case 3:
					return "0913_A_M_M_Civ_Poor_White_AGGRESSIVE_13";
				default:
					break;
			}
			break;
		case 92:
			switch (iParam0)
			{
				case 0:
					return "0913_A_M_M_Civ_Poor_White_AGGRESSIVE_13";
				case 1:
					return "1062_G_M_M_UniCriminals_01_WHITE_09";
				case 2:
					return "0842_S_M_M_UniButchers_01_WHITE_01";
				case 3:
					return "0843_S_M_M_UniButchers_01_WHITE_02";
				default:
					break;
			}
			break;
	}
	uVar0 = 1;
	func_95(Global_1900325->f_25, &Global_1900325, &uVar0, 0, &iVar2);
	return func_96(iVar2);
}

bool func_70(int iParam0, int iParam1)
{
	return (Global_1899528->f_3[iParam0] && iParam1) != 0;
}

void func_71(int iParam0)
{
	vector3 vVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::_0x34D6AC1157C8226C(iParam0, -1103796964))
	{
		return;
	}
	vVar0 = { *(Global_1900325->f_9[Global_1900325->f_34 /*3*/]) };
	vVar0 = { vVar0 + Global_1900325->f_19 };
	TASK::CLEAR_PED_TASKS(iParam0, 1, 0);
	TASK::TASK_START_SCENARIO_AT_POSITION(iParam0, -1103796964, vVar0, &(Global_1900325->f_16[Global_1900325->f_34]), -1, 0, 1, 0, 0f, 0);
	PED::SET_PED_KEEP_TASK(iParam0, true);
	PED::_0x2208438012482A1A(iParam0, false, false);
}

int func_72(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_97(uParam2, 1, iVar0);
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
			if (func_98(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_99(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_100(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_99(iParam0, uParam2, *uParam3);
					return 1;
				}
				else if (func_101(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_99(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_102(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_99(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_26 && func_103(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_99(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_104(uParam2, 1065353216))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_105(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_99(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_106(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_99(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_107(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_99(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			else if (func_107(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_99(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_108(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_99(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || uParam2->f_12 < 20f)
			{
				if (func_109(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_99(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_110(uParam2, 4000))
				{
					if ((func_111(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_112(uParam2, iParam0)) && func_113(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_99(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_111(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_112(uParam2, iParam0)) && func_113(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_99(iParam0, uParam2, *uParam3);
					return 1;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_114(iParam0, Global_1935630->f_41))
							{
								func_115();
								*uParam3 = 2;
								func_99(iParam0, uParam2, *uParam3);
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
						if (func_114(iParam0, Global_1935630->f_41))
						{
							func_115();
							*uParam3 = 2;
							func_99(iParam0, uParam2, *uParam3);
							return 1;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_116(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_117() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_115();
						*uParam3 = 2;
						func_99(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_118())
					{
						if (func_114(iParam0, Global_1935630->f_42))
						{
							func_115();
							*uParam3 = 2;
							func_99(iParam0, uParam2, *uParam3);
							return 1;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_119(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_99(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_120(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_99(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_121(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_99(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_122(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_99(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_123(uParam2, 4000))
				{
					if (func_124(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_99(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_125(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_99(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_126(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_99(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
	}
	return 0;
}

var func_73(var uParam0)
{
	return uParam0;
}

bool func_74(int iParam0)
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

void func_75(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 && !func_74(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_127(*uParam0);
	if (((*Global_1945938)[iVar0 /*18*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && iParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_128(iVar0);
	*uParam0 = 0;
}

bool func_76(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_77(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_129(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

int func_78(int iParam0)
{
	if (func_130(iParam0) != 4)
	{
		return -1;
	}
	return func_131(iParam0);
}

void func_79(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_80(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

float func_81(var uParam0)
{
	return uParam0->f_24;
}

void func_82(var uParam0, float fParam1)
{
	uParam0->f_25 = fParam1;
}

void func_83(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_79(uParam0, 1);
	}
	else
	{
		func_80(uParam0, 1);
	}
}

int func_84(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 4;
		case 2:
			return 6;
		case 0:
			return 5;
		case 3:
			return 2;
		default:
			break;
	}
	return 1;
}

int func_85(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_86(int iParam0, vector3 vParam1, float fParam4, int iParam5, float fParam6)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;

	if (!func_132(iParam0, vParam1, fParam4, iParam5, &vVar0, 1))
	{
		return 0;
	}
	fVar6 = (fParam6 * 2f);
	iVar8 = 0;
	fVar10 = -1f;
	iVar3 = ITEMSET::CREATE_ITEMSET(true);
	if (ITEMSET::IS_ITEMSET_VALID(iVar3))
	{
		func_62(&iVar9, vVar0, 0f, 0f, 0f, fVar6, fVar6, 1.2f);
		iVar5 = ENTITY::_0x886171A12F400B89(iVar9, iVar3, 3);
		iVar4 = 0;
		while (iVar4 < iVar5)
		{
			iVar7 = MISC::_0x18013392501CE5DC(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar3));
			if (ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
				if (func_89(iParam0, ENTITY::GET_ENTITY_MODEL(iVar7)))
				{
					fVar11 = func_133(vVar0, ENTITY::GET_ENTITY_COORDS(iVar7, true, false));
					if (fVar10 == -1f || fVar11 < fVar10)
					{
						iVar8 = iVar7;
						fVar10 = fVar11;
					}
				}
			}
			iVar4++;
		}
		func_3(iVar9);
		ITEMSET::DESTROY_ITEMSET(iVar3);
	}
	return iVar8;
}

int func_87(int iParam0, vector3 vParam1, float fParam4, int iParam5, var uParam6, var uParam7, int iParam8)
{
	vector3 vVar0;
	float fVar3;
	var uVar4;

	if (!func_134(iParam0))
	{
		return 0;
	}
	if (!func_135(iParam0, iParam5, &vVar0))
	{
		return 0;
	}
	*uParam6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, fParam4, vVar0) };
	if (iParam8 == 1)
	{
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam6 + Vector(0.1f, 0f, 0f), &uVar4, 0))
		{
			uParam6->f_2 = uVar4;
		}
	}
	if (!func_136(iParam0, iParam5, &fVar3))
	{
		return 0;
	}
	*uParam7 = (fParam4 + fVar3);
	if (*uParam7 > 360f)
	{
		*uParam7 = (*uParam7 - 360f);
	}
	if (*uParam7 < -360f)
	{
		*uParam7 = (*uParam7 + 360f);
	}
	return 1;
}

void func_88(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(*uParam0))
	{
		*uParam0 = VOLUME::_0x10157BC3247FF3BA(vParam1, vParam4, vParam7, func_90());
	}
}

int func_89(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case joaat("p_windsorchair03x"):
					return 1;
				case joaat("p_windsorchair01x"):
				case 1609095284:
					return 1;
				case joaat("p_chair24x"):
				case joaat("p_chair22x"):
					return 1;
				default:
					break;
			}
			break;
		case 2:
			if (iParam1 == joaat("p_chair13x"))
			{
				return 1;
			}
			if (iParam1 == joaat("p_chair05x"))
			{
				return 1;
			}
			if (iParam1 == joaat("p_chair06x"))
			{
				return 1;
			}
			if (iParam1 == joaat("p_windsorchair03x"))
			{
				return 1;
			}
			if (iParam1 == -1763848034)
			{
				return 1;
			}
			if (iParam1 == 2096698905)
			{
				return 1;
			}
			if (iParam1 == joaat("p_chair11x"))
			{
				return 1;
			}
			if (iParam1 == 1999055955)
			{
				return 1;
			}
			break;
		case 1:
			if (iParam1 == joaat("p_chair02x"))
			{
				return 1;
			}
			if (iParam1 == joaat("p_stool02x"))
			{
				return 1;
			}
			if (iParam1 == joaat("p_stool03x"))
			{
				return 1;
			}
			if (iParam1 == joaat("p_stoolwinter01x"))
			{
				return 1;
			}
			if (iParam1 == joaat("p_stoolfolding01x"))
			{
				return 1;
			}
			if (iParam1 == joaat("p_chair_barrel04b"))
			{
				return 1;
			}
			if (iParam1 == joaat("p_chairfolding02x"))
			{
				return 1;
			}
			break;
		case 3:
			if (iParam1 == joaat("p_chair06x"))
			{
				return 1;
			}
			if (iParam1 == -1618805595)
			{
				return 1;
			}
			if (iParam1 == joaat("p_chair_crate02x"))
			{
				return 1;
			}
			if (iParam1 == joaat("p_stoolfolding01x"))
			{
				return 1;
			}
			if (iParam1 == joaat("p_chairfolding02x"))
			{
				return 1;
			}
			break;
		default:
			return 1;
	}
	return 0;
}

char* func_90()
{
	return "unnamed";
}

float func_91(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 40f;
		case 2:
			return 35f;
		case 0:
			return 30f;
		case 3:
			return 60f;
		case 5:
			return 60f;
		case 4:
			return 60f;
		case 6:
			return 60f;
		default:
			break;
	}
	return 40f;
}

void func_92(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar0 = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iParam1));
	if (!bParam7)
	{
		if (func_137(iParam1))
		{
			func_138(iParam0, 41788943);
		}
		else if (bParam5)
		{
			PED::_0x283978A15512B2FE(iParam0, 1);
			bVar0 = true;
		}
	}
	if (PED::IS_PED_HUMAN(iParam0))
	{
		if (bParam6)
		{
			WEAPON::_0x899A04AFCC725D04(iParam0, WEAPON::_0xD42514C182121C23(iParam1));
		}
		if (PED::IS_PED_MALE(iParam0) && !bParam3)
		{
			func_139(iParam0, 0, 1);
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 502, true);
	}
	else if (PED::_0x772A1969F649E902(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (!bParam5)
		{
			PED::_SET_PED_OUTFIT_PRESET(iParam0, 0, 0);
			bVar0 = true;
		}
		if (bParam4)
		{
			func_140(iParam0, 0);
			bVar0 = true;
		}
		func_141(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	}
}

int func_93(int iParam0)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			if (PED::IS_PED_HUMAN(iVar0))
			{
				if (PED::IS_PED_MALE(iVar0))
				{
					return 536905469;
				}
				else
				{
					return -352521166;
				}
			}
		}
	}
	return 205298116;
}

var func_94(int iParam0, int iParam1, var uParam2, int iParam3)
{
	struct<13> Var0;
	int iVar23;

	Var0.f_1 = 10;
	Var0.f_12 = 10;
	Var0 = 1;
	Var0.f_1[0] = iParam1;
	Var0.f_12[0] = uParam2;
	iVar23 = 13;
	return ENTITY::_0xA88E215CEB0435C0(iParam0, &Var0, iParam3, iVar23, 2, 0);
}

int func_95(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4)
{
	var uVar0;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;

	uVar0 = 3;
	iVar4 = 0;
	func_142(ENTITY::GET_ENTITY_MODEL(iParam0), iParam1, &uVar0, &iVar4);
	if (iVar4 == 0)
	{
		return 0;
	}
	iVar5 = iParam3;
	iVar7 = 0;
	while (iVar7 < iParam3)
	{
		iVar6 = uParam2[iVar7];
		if (!func_143(&uVar0, iVar6))
		{
			iVar5 = (iVar5 - 1);
		}
		else
		{
			iVar8 = 0;
			while (iVar8 < iVar7)
			{
				if (uParam2[iVar8] == iVar6)
				{
					iVar5 = (iVar5 - 1);
				}
				else
				{
					iVar8++;
				}
			}
		}
		iVar7++;
	}
	if (iVar4 > iVar5)
	{
		iVar10 = 0;
		iVar9 = (iVar4 - iVar5);
	}
	else
	{
		iVar10 = -1;
		iVar9 = 0;
		iVar7 = 0;
		while (iVar7 < iParam3)
		{
			iVar6 = uParam2[iVar7];
			if (func_143(&uVar0, iVar6))
			{
				iVar11 = 0;
				iVar8 = 0;
				while (iVar8 < iParam3)
				{
					if (uParam2[iVar8] == iVar6)
					{
						iVar11++;
					}
					iVar8++;
				}
				if (iVar10 == -1 || iVar10 > iVar11)
				{
					iVar10 = iVar11;
					iVar9 = 1;
				}
				else if (iVar10 == iVar11)
				{
					iVar9++;
				}
			}
			iVar7++;
		}
	}
	if (iVar9 == 0)
	{
		return 0;
	}
	iVar12 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar9);
	iVar13 = 0;
	iVar6 = 0;
	while (iVar6 < 92)
	{
		if (func_143(&uVar0, iVar6))
		{
			iVar11 = 0;
			iVar7 = 0;
			while (iVar7 < iParam3)
			{
				if (uParam2[iVar7] == iVar6)
				{
					iVar11++;
				}
				iVar7++;
			}
			if (iVar11 == iVar10)
			{
				if (iVar13 == iVar12)
				{
					*uParam4 = iVar6;
					return 1;
				}
				iVar13++;
			}
		}
		iVar6++;
	}
	return 0;
}

char* func_96(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "0880_A_M_M_Civ_Poor_Asian_AVOID_04";
		case 1:
			return "0944_A_M_M_Foreman_White_AVOID_04";
		case 2:
			return "0945_A_M_M_Foreman_White_AVOID_05";
		case 3:
			return "0952_A_M_M_Guard_White_AGGRESSIVE_07";
		case 4:
			return "0953_A_M_M_Guard_White_AGGRESSIVE_08";
		case 5:
			return "0954_A_M_M_Guard_White_AGGRESSIVE_09";
		case 6:
			return "0955_A_M_M_Guard_White_AGGRESSIVE_10";
		case 7:
			return "0956_A_M_M_Rancher_White_01";
		case 8:
			return "0957_A_M_M_Rancher_White_02";
		case 9:
			return "0958_A_M_M_Rancher_White_03";
		case 10:
			return "0959_A_M_M_Rancher_White_04";
		case 11:
			return "0960_A_M_M_Rancher_White_05";
		case 12:
			return "0961_A_M_M_Rancher_White_06";
		case 13:
			return "0962_A_M_M_Rancher_White_07";
		case 14:
			return "0966_A_M_M_RoughTravellers_Black_04";
		case 15:
			return "0985_S_M_M_AmbientLawRural_White_08";
		case 16:
			return "0994_S_M_M_DispatchLawRural_White_09";
		case 17:
			return "0882_A_M_M_Civ_Poor_Black_AGGRESSIVE_02";
		case 18:
			return "0989_S_M_M_DispatchLawRural_White_04";
		case 19:
			return "0847_A_F_M_Civ_Black_AVOID_02";
		case 20:
			return "0850_A_F_M_Civ_Hispanic_AVOID_03";
		case 21:
			return "0854_A_F_M_Civ_Poor_Black_AVOID_04";
		case 22:
			return "0858_A_F_M_Civ_Poor_Black_TIMID_04";
		case 23:
			return "0861_A_F_M_Civ_Poor_White_AGGRESSIVE_03";
		case 24:
			return "0868_A_F_M_Civ_Poor_White_AVOID_06";
		case 25:
			return "0876_A_F_M_Civ_White_TIMID_05";
		case 26:
			return "0702_A_M_M_RhdUpperClass_01_WHITE_02";
		case 27:
			return "0785_A_F_M_MiddleSDTownfolk_01_WHITE_01";
		case 28:
			return "0805_A_M_M_SDDockForeman_01_WHITE_01";
		case 29:
			return "0813_G_M_M_UniBraithwaites_01_WHITE_02";
		case 30:
			return "1004_S_M_M_AmbientBlWPolice_White_03";
		case 31:
			return "1011_S_M_M_DispatchPolice_White_07";
		case 32:
			return "0561_A_F_M_Prostitute_Black_05";
		case 33:
			return "0566_A_F_M_Prostitute_White_05";
		case 34:
			return "0792_A_M_M_MiddleSDTownfolk_02_BLACK_01";
		case 35:
			return "0808_S_M_M_Army_01_WHITE_03";
		case 36:
			return "0811_S_M_Y_Army_01_WHITE_03";
		case 37:
			return "0835_S_M_M_GenConductor_01_WHITE_01";
		case 38:
			return "0836_S_M_M_GenConductor_01_WHITE_02";
		case 39:
			return "0844_S_M_M_UniButchers_01_WHITE_03";
		case 40:
			return "0782_A_F_M_LowerSDTownfolk_01_WHITE_01";
		case 41:
			return "0803_A_M_O_SDUpperClass_01_WHITE_02";
		case 42:
			return "1015_A_F_M_MiddleSDTownfolk_04_WHITE_01";
		case 43:
			return "0842_S_M_M_UniButchers_01_WHITE_01";
		case 44:
			return "0843_S_M_M_UniButchers_01_WHITE_02";
		case 45:
			return "0817_A_M_M_VhtThug_01_WHITE_01";
		case 46:
			return "0818_A_M_M_VhtThug_01_WHITE_02";
		case 47:
			return "0819_A_M_M_VhtThug_01_WHITE_03";
		case 48:
			return "0429_A_M_M_StrTownfolk_01_WHITE_01";
		case 49:
			return "0594_A_M_M_Civ_Poor_White_AVOID_14";
		case 50:
			return "0595_A_M_M_Civ_White_AVOID_11";
		case 51:
			return "0644_A_M_M_Civ_Poor_White_AGGRESSIVE_19";
		case 52:
			return "0650_A_M_M_Civ_Poor_White_AGGRESSIVE_20";
		case 53:
			return "0657_A_M_M_Civ_Poor_White_AGGRESSIVE_18";
		case 54:
			return "0913_A_M_M_Civ_Poor_White_AGGRESSIVE_13";
		case 55:
			return "0130_G_M_M_UniCriminals_01_WHITE_01";
		case 56:
			return "0131_G_M_M_UniCriminals_01_WHITE_02";
		case 57:
			return "0132_G_M_M_UniCriminals_01_BLACK_01";
		case 58:
			return "0133_G_M_M_UniCriminals_01_BLACK_02";
		case 59:
			return "0134_G_M_M_UniCriminals_01_HISPANIC_01";
		case 60:
			return "0278_A_F_M_NbxWhore_01_BLACK_01";
		case 61:
			return "0894_A_M_M_Civ_Poor_Black_AVOID_09";
		case 62:
			return "0915_A_M_M_Civ_Poor_White_AGGRESSIVE_15";
		case 63:
			return "1052_G_M_M_UniGrays_01_WHITE_03";
		case 64:
			return "1053_G_M_M_UniGrays_01_WHITE_04";
		case 65:
			return "1056_G_M_M_UniCriminals_01_WHITE_03";
		case 66:
			return "1058_G_M_M_UniCriminals_01_WHITE_05";
		case 67:
			return "1059_G_M_M_UniCriminals_01_WHITE_06";
		case 68:
			return "1060_G_M_M_UniCriminals_01_WHITE_07";
		case 69:
			return "1061_G_M_M_UniCriminals_01_WHITE_08";
		case 70:
			return "1062_G_M_M_UniCriminals_01_WHITE_09";
		case 71:
			return "1063_G_M_M_UniCriminals_01_WHITE_10";
		case 72:
			return "1064_G_M_M_UniCriminals_01_BLACK_03";
		case 73:
			return "1065_G_M_M_UniCriminals_01_BLACK_04";
		case 74:
			return "1086_U_M_M_TumButcher_01";
		case 75:
			return "1093_A_M_M_TumTownfolk_01_WHITE_01";
		case 76:
			return "1094_A_M_M_TumTownfolk_02_BLACK_01";
		case 77:
			return "1097_A_F_M_TumTownfolk_01_WHITE_01";
		case 78:
			return "1098_A_F_M_TumTownfolk_02_BLACK_01";
		case 79:
			return "0135_G_M_M_UniCriminals_01_HISPANIC_02";
		case 80:
			return "0400_U_M_M_RhdGenStoreOwner_01";
		case 81:
			return "0401_U_M_M_RhdGunsmith_01";
		case 82:
			return "0477_U_M_M_ValDoctor_01";
		case 83:
			return "0478_U_M_M_ValGenStoreOwner_01";
		case 84:
			return "0479_U_M_M_ValGunsmith_01";
		case 85:
			return "1085_U_M_M_TumGunsmith_01";
		case 86:
			return "0083_U_M_O_BlWGeneralStoreOwner_01";
		case 87:
			return "0832_S_M_M_TrainStationWorker_01_WHITE_01";
		case 88:
			return "CS_ValAuctionBoss_01";
		case 89:
			return "AS_TOWNDEALER";
		case 90:
			return "JS_TOWNDEALER";
		case 91:
			return "FH_TOWNDEALER";
		case 92:
			return "MAX";
		default:
			break;
	}
	return "unknown";
}

void func_97(var uParam0, bool bParam1, int iParam2)
{
	func_144(iParam2);
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
		uParam0->f_13 = func_145(0);
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
							func_79(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_146(1))
						{
							func_79(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_146(1) || *uParam0 & 8192 != 0))
				{
					func_80(uParam0, 33554432);
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
			if (func_147(uParam0))
			{
				uParam0->f_15 = func_117();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_117() - uParam0->f_15) > 500)
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
	func_148(uParam0);
}

int func_98(int iParam0, var uParam1)
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
			if (!func_149(iParam0, uParam1, iVar2))
			{
				return 0;
			}
			if (func_150(iParam0, iVar2) <= func_151(uParam1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_99(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_152(iParam2, 1, 1, 1, 0))
	{
		func_79(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_153(uParam1, 1);
	func_154();
}

int func_100(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_155(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_156(uParam1);
			if (func_157(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = func_158(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_153(uParam1, 1);
						return 1;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_153(uParam1, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_101(int iParam0, int iParam1, var uParam2)
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
	if (func_159(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_156(uParam2);
		if (func_157(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > func_158(uParam2)
				{
					func_153(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_102(int iParam0, var uParam1)
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
	if (func_149(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_158(uParam1)
		{
			fVar3 = func_156(uParam1);
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

int func_103(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_160(bParam1, iParam2, bParam3);
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

int func_104(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_117();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return 1;
	}
	return 0;
}

int func_105(var uParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_161(uParam2);
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
			if (func_113(uParam2, iParam1))
			{
				func_153(uParam2, 1);
				return 1;
			}
		}
	}
	return 0;
}

int func_106(var uParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_12 < IntToFloat(func_162(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && !WEAPON::_0x5809DBCA0A37C82B(Global_1935630->f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_113(uParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_153(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_107(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_163(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(217247011, vVar0, uParam2->f_22))
				{
					func_153(uParam2, 1);
					return 1;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(956330317, vVar0, uParam2->f_27))
				{
					func_153(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-966930978, vVar0, uParam2->f_22))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("weapon_thrown_dynamite"), uParam2->f_26, &vVar4, 0, 0);
					if (func_164(iParam1, vVar0, vVar4))
					{
						func_153(uParam2, 1);
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
					func_153(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-966930978, vVar0, uParam2->f_22))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("weapon_thrown_dynamite"), uParam2->f_26, &vVar7, 0, 0);
					if (func_164(iParam1, vVar0, vVar7))
					{
						func_153(uParam2, 1);
						return 1;
					}
				}
				break;
		}
	}
	return 0;
}

int func_108(int iParam0, var uParam1)
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
		if (!func_149(iParam0, uParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_165(&(Global_1935630->f_34[iVar0]));
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_166(&(Global_1935630->f_34[iVar0])))
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
			if (func_167(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_168(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_169(uParam1, iParam0, fVar1, iVar0))
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

int func_109(int iParam0, var uParam1)
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

int func_110(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_117();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

int func_111(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_170(iVar0, &iVar2))
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
	if (func_171(iVar0, iParam0))
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

int func_112(var uParam0, int iParam1)
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

int func_113(var uParam0, int iParam1)
{
	if (func_172(uParam0))
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

int func_114(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return 1;
		}
		if (func_173(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_115()
{
}

int func_116(var uParam0, int iParam1)
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
		if (func_174(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_117();
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
						if (func_175(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_9 = func_117();
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

int func_117()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

int func_118()
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
	if ((func_117() - Global_1935630->f_43) >= 10000)
	{
		return 0;
	}
	return 1;
}

int func_119(var uParam0, int iParam1)
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
	fVar0 = func_151(uParam0);
	if (uParam0->f_12 > func_81(uParam0) && uParam0->f_12 > fVar0)
	{
		return 0;
	}
	iVar2 = func_176(iParam1);
	iVar1 = func_177(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, Global_35, 1, 0) == 1)) || ((PED::_0x06087579E7AA85A9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, uParam0->f_14, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, uParam0->f_14, 1, 0) == 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_120(int iParam0, int iParam1, var uParam2)
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
	return func_178(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

int func_121(int iParam0, var uParam1)
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
		if (func_179(iParam0, uParam1, 1))
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
					if (!func_180(uParam1, iParam0))
					{
						if (func_175(iVar4, Global_36, 1) < 7f)
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

int func_122(int iParam0, var uParam1)
{
	if (!func_181(0))
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

int func_123(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_117();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_124(int iParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_125(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_117();
	}
	else if (func_117() - uParam1->f_4) > func_182(uParam1)
	{
		return func_183(iParam0, uParam1, 0, -1082130432);
	}
	return 0;
}

int func_126(var uParam0, int iParam1)
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

var func_127(var uParam0)
{
	return uParam0;
}

void func_128(int iParam0)
{
	if (!func_184(iParam0))
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

int func_129(int iParam0)
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

int func_130(int iParam0)
{
	if (!func_76(iParam0))
	{
		return 0;
	}
	return func_186(func_185(iParam0));
}

int func_131(int iParam0)
{
	if (!func_76(iParam0))
	{
		return -1;
	}
	return func_187(func_185(iParam0));
}

int func_132(int iParam0, vector3 vParam1, float fParam4, int iParam5, var uParam6, int iParam7)
{
	vector3 vVar0;
	var uVar3;

	if (!func_134(iParam0))
	{
		return 0;
	}
	if (!func_135(iParam0, iParam5, &vVar0))
	{
		return 0;
	}
	*uParam6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, fParam4, vVar0) };
	if (iParam7 == 1)
	{
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam6 + Vector(0.1f, 0f, 0f), &uVar3, 0))
		{
			uParam6->f_2 = uVar3;
		}
	}
	return 1;
}

float func_133(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

bool func_134(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

int func_135(int iParam0, int iParam1, var uParam2)
{
	float fVar0;

	switch (iParam0)
	{
		case 2:
			if (iParam1 < 0 || iParam1 >= 6)
			{
				return 0;
			}
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 0.008654f, 1.171513f, 0.4999996f };
					return 1;
				case 1:
					*uParam2 = { 1.018887f, 0.5782621f, 0.4999996f };
					return 1;
				case 2:
					*uParam2 = { 1.010233f, -0.5932513f, 0.4999996f };
					return 1;
				case 3:
					*uParam2 = { -0.008654f, -1.171513f, 0.4999996f };
					return 1;
				case 4:
					*uParam2 = { -1.018887f, -0.5782621f, 0.4999996f };
					return 1;
				case 5:
					*uParam2 = { -1.010233f, 0.5932513f, 0.4999996f };
					return 1;
				default:
					break;
			}
			return 1;
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { Vector(50f, -7.9116f, 112.5219f) / Vector(100f, 100f, 100f) };
					return 1;
				case 1:
					*uParam2 = { Vector(50f, -73.55062f, 45.94575f) / Vector(100f, 100f, 100f) };
					return 1;
				case 2:
					*uParam2 = { Vector(50f, -72.85871f, -47.61618f) / Vector(100f, 100f, 100f) };
					return 1;
				case 3:
					*uParam2 = { Vector(50f, -6.31211f, -113.1842f) / Vector(100f, 100f, 100f) };
					return 1;
				case 4:
					*uParam2 = { Vector(50f, 82.1513f, 0.8654f) / Vector(100f, 100f, 100f) };
					return 1;
				default:
					break;
			}
			return 0;
		case 1:
			fVar0 = 0.98f;
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 0f, 0.66f, fVar0 };
					return 1;
				case 1:
					*uParam2 = { 0f, -0.66f, fVar0 };
					return 1;
				case 2:
					*uParam2 = { 0.66f, 0f, fVar0 };
					return 1;
				case 3:
					*uParam2 = { -0.66f, 0f, fVar0 };
					return 1;
				default:
					break;
			}
			return 0;
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1f, 0f, 0f };
					return 1;
				case 1:
					*uParam2 = { 1f, 0f, 0f };
					return 1;
				default:
					break;
			}
			return 1;
		default:
			break;
	}
	return 1;
}

int func_136(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 2:
			if (iParam1 < 0 || iParam1 >= 6)
			{
				return 0;
			}
			switch (iParam1)
			{
				case 0:
					*uParam2 = 180f;
					return 1;
				case 1:
					*uParam2 = 120f;
					return 1;
				case 2:
					*uParam2 = 60f;
					return 1;
				case 3:
					*uParam2 = 0f;
					return 1;
				case 4:
					*uParam2 = -60f;
					return 1;
				case 5:
					*uParam2 = -120f;
					return 1;
				default:
					break;
			}
			return 1;
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = (-112.4086f + 180f);
					return 1;
				case 1:
					*uParam2 = (-157.4087f + 180f);
					return 1;
				case 2:
					*uParam2 = (157.5913f + 180f);
					return 1;
				case 3:
					*uParam2 = (112.5913f + 180f);
					return 1;
				case 4:
					*uParam2 = 180f;
					return 1;
				default:
					break;
			}
			return 0;
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 180f;
					return 1;
				case 1:
					*uParam2 = 0f;
					return 1;
				case 2:
					*uParam2 = 90f;
					return 1;
				case 3:
					*uParam2 = 270f;
					return 1;
				default:
					break;
			}
			return 0;
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 90f;
					return 1;
				case 1:
					*uParam2 = 270f;
					return 1;
				default:
					break;
			}
			return 0;
		default:
			break;
	}
	return 1;
}

int func_137(int iParam0)
{
	switch (iParam0)
	{
		case joaat("cs_sistercalderon"):
		case joaat("cs_strsheriff_01"):
		case joaat("cs_mud2bigguy"):
		case joaat("cs_rainsfall"):
		case joaat("cs_penelopebraithwaite"):
		case joaat("cs_swampweirdosonny"):
		case joaat("cs_unidusterjail_01"):
		case joaat("cs_iangray"):
		case joaat("cs_tinyhermit"):
		case joaat("cs_timothydonahue"):
		case joaat("cs_princessisabeau"):
		case joaat("cs_leviticuscornwall"):
		case joaat("cs_didsbury"):
		case joaat("cs_featherstonchambers"):
		case joaat("cs_featsofstrength"):
		case joaat("cs_bandpianist"):
		case joaat("cs_escapeartistassistant"):
		case joaat("cs_garethbraithwaite"):
		case joaat("cs_creoleguy"):
		case joaat("cs_leighgray"):
		case joaat("cs_strawberryoutlaw_02"):
		case joaat("cs_gloria"):
		case joaat("cs_warvet"):
		case joaat("cs_jockgray"):
		case joaat("cs_davidgeddes"):
		case joaat("cs_guidomartelli"):
		case joaat("cs_duncangeddes"):
		case joaat("cs_dusterinformant_01"):
		case joaat("cs_pinkertongoon"):
		case joaat("cs_mickey"):
		case joaat("cs_twinbrother_02"):
		case joaat("cs_hestonjameson"):
		case joaat("cs_strdeputy_01"):
		case joaat("cs_abe"):
		case joaat("cs_oddfellowspinhead"):
		case joaat("cs_swampfreak"):
		case joaat("cs_mradler"):
		case joaat("cs_aberdeenpigfarmer"):
		case joaat("cs_hobartcrawley"):
		case joaat("cs_formyartbigwoman"):
		case joaat("cs_norrisforsythe"):
		case joaat("cs_jules"):
		case joaat("cs_tomdickens"):
		case joaat("cs_geraldbraithwaite"):
		case joaat("cs_paytah"):
		case joaat("cs_cancan_03"):
		case joaat("cs_grizzledjon"):
		case joaat("cs_wrobel"):
		case joaat("cs_meredith"):
		case joaat("cs_creepyoldlady"):
		case joaat("cs_nbxreceptionist_01"):
		case joaat("cs_nbxpolicechiefformal"):
		case joaat("cs_cornwalltrainconductor"):
		case joaat("cs_rhodeputy_01"):
		case joaat("cs_drmalcolmmacintosh"):
		case joaat("cs_leon"):
		case joaat("cs_sheriffowens"):
		case joaat("cs_sddoctor_01"):
		case joaat("cs_scottgray"):
		case joaat("cs_cancan_01"):
		case joaat("cs_creolecaptain"):
		case joaat("cs_brontesbutler"):
		case joaat("cs_janson"):
		case joaat("cs_forgivenwife_01"):
		case joaat("cs_tigerhandler"):
		case joaat("cs_frenchartist"):
		case joaat("cs_genstorymale"):
		case joaat("cs_clay"):
		case joaat("cs_strdeputy_02"):
		case joaat("cs_famousgunslinger_03"):
		case joaat("cs_bivcoachdriver"):
		case joaat("cs_braithwaitebutler"):
		case joaat("cs_cleet"):
		case joaat("cs_joe"):
		case joaat("cs_slavecatcher"):
		case joaat("cs_braithwaitemaid"):
		case joaat("cs_twingroupie_02"):
		case joaat("cs_mrsgeddes"):
		case joaat("cs_samaritan"):
		case joaat("cs_exconfedinformant"):
		case joaat("cs_frenchman_01"):
		case joaat("cs_bandsinger"):
		case joaat("cs_baptiste"):
		case joaat("cs_angusgeddes"):
		case joaat("cs_mysteriousstranger"):
		case joaat("cs_famousgunslinger_01"):
		case joaat("cs_bartholomewbraithwaite"):
		case joaat("cs_mixedracekid"):
		case joaat("cs_beatenupcaptain"):
		case joaat("cs_edgarross"):
		case joaat("cs_twingroupie_01"):
		case joaat("cs_mrsweathers"):
		case joaat("cs_jamie"):
		case joaat("cs_karensjohn_01"):
		case joaat("cs_thomasdown"):
		case joaat("cs_obediahhinton"):
		case joaat("cs_agnesdowd"):
		case joaat("cs_cavehermit"):
		case joaat("cs_brynntildon"):
		case joaat("cs_germanson"):
		case joaat("cs_brendacrawley"):
		case joaat("cs_colfavours"):
		case joaat("cs_rhodeskidnapvictim"):
		case joaat("cs_exconfedsleader_01"):
		case joaat("cs_cancan_04"):
		case joaat("cs_towncrier"):
		case joaat("cs_famousgunslinger_04"):
		case joaat("cs_dalemaroney"):
		case joaat("cs_angryhusband"):
		case joaat("cs_lillianpowell"):
		case joaat("cs_andershelgerson"):
		case joaat("cs_poorjoe"):
		case joaat("cs_braithwaiteservant"):
		case joaat("cs_brotherdorkins"):
		case joaat("cs_albertmason"):
		case joaat("cs_famousgunslinger_05"):
		case joaat("cs_balloonoperator"):
		case joaat("cs_albertcakeesquire"):
		case joaat("cs_mrsfellows"):
		case joaat("cs_cancanman_01"):
		case joaat("cs_poisonwellshaman"):
		case joaat("cs_cancan_02"):
		case joaat("cs_meredithsmother"):
		case joaat("cs_angel"):
		case joaat("cs_archerfordham"):
		case joaat("cs_disguisedduster_01"):
		case joaat("cs_chelonianmaster"):
		case joaat("cs_twinbrother_01"):
		case joaat("cs_germandaughter"):
		case joaat("cs_lemiuxassistant"):
		case joaat("cs_creoledoctor"):
		case joaat("cs_crackpotrobot"):
		case joaat("cs_bandbassist"):
		case joaat("cs_genstoryfemale"):
		case joaat("cs_marylinton"):
		case joaat("cs_valprayingman"):
		case joaat("cs_johnthebaptisingmadman"):
		case joaat("cs_mrs_calhoun"):
		case joaat("cs_theodorelevin"):
		case joaat("cs_nicholastimmins"):
		case joaat("cs_disguisedduster_03"):
		case joaat("cs_dinoboneslady"):
		case joaat("cs_beaugray"):
		case joaat("cs_strawberryoutlaw_01"):
		case joaat("cs_crackpotinventor"):
		case joaat("cs_hercule"):
		case joaat("cs_gavin"):
		case joaat("cs_levisimon"):
		case joaat("cs_londonderryson"):
		case joaat("cs_captainmonroe"):
		case joaat("cs_famousgunslinger_02"):
		case joaat("cs_mrslondonderry"):
		case joaat("cs_soothsayer"):
		case joaat("cs_tavishgray"):
		case joaat("cs_joebutler"):
		case joaat("cs_banddrummer"):
		case joaat("cs_lillymillet"):
		case joaat("cs_ansel_atherton"):
		case joaat("cs_rhodeputy_02"):
		case joaat("cs_edmundlowry"):
		case joaat("cs_disguisedduster_02"):
		case joaat("cs_magnifico"):
		case joaat("cs_artappraiser"):
		case joaat("cs_forgivenhusband_01"):
		case joaat("cs_reverendfortheringham"):
		case joaat("cs_daveycallender"):
		case joaat("cs_desmond"):
		case joaat("cs_adamgray"):
		case joaat("cs_jimcalloway"):
		case joaat("cs_sdsaloondrunk_01"):
		case joaat("cs_nbxdrunk"):
		case joaat("cs_germanmother"):
		case joaat("cs_ringmaster"):
		case joaat("cs_lucanapoli"):
		case joaat("cs_rhodesassistant"):
		case joaat("cs_aberdeensister"):
		case joaat("cs_nbxexecuted"):
		case joaat("cs_famousgunslinger_06"):
		case joaat("cs_johnweathers"):
		case joaat("cs_professorbell"):
		case joaat("cs_rhodessaloonbouncer"):
			return 1;
		default:
			break;
	}
	return 0;
}

void func_138(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_188(iParam0, iParam1))
		{
			if (func_189(iParam0, iParam1))
			{
				if (func_190(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_191(iParam0);
				}
			}
			else
			{
				PED::_0x1902C4CFCC5BE57C(iParam0, iParam1);
				PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
			}
			PED::_0xE3144B932DFDFF65(iParam0, 0f, -1, 1, 1);
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 10, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 3);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 0);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 5);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 7);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 8);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 9);
		}
	}
}

void func_139(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	PED::_0xD710A5007C2AC539(iParam0, -1725579161, 1);
	if (bParam2)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	}
}

void func_140(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	PED::_0x1902C4CFCC5BE57C(iParam0, 1268180497);
	if (bParam1)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	}
}

void func_141(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		PED::_0x5653AB26C82938CF(iParam0, 41611, 0f);
	}
	else
	{
		PED::_0x5653AB26C82938CF(iParam0, 41611, 1f);
	}
}

int func_142(int iParam0, int iParam1, var uParam2, int iParam3)
{
	if (*uParam2 < ((92 + 31) / 32))
	{
		return 0;
	}
	*iParam3 = 0;
	if (iParam1 == 3)
	{
		switch (iParam0)
		{
			case joaat("a_m_m_fivefingerfilletplayers_01"):
				func_192(uParam2, 43);
				*iParam3++;
				func_192(uParam2, 44);
				*iParam3++;
				func_192(uParam2, 54);
				*iParam3++;
				func_192(uParam2, 70);
				*iParam3++;
				break;
			default:
				func_192(uParam2, 43);
				*iParam3++;
				func_192(uParam2, 44);
				*iParam3++;
				func_192(uParam2, 54);
				*iParam3++;
				func_192(uParam2, 70);
				*iParam3++;
				return 0;
		}
	}
	else
	{
		switch (iParam0)
		{
			case joaat("a_m_m_cardgameplayers_01"):
				func_192(uParam2, 1);
				*iParam3++;
				func_192(uParam2, 2);
				*iParam3++;
				func_192(uParam2, 3);
				*iParam3++;
				func_192(uParam2, 4);
				*iParam3++;
				func_192(uParam2, 5);
				*iParam3++;
				func_192(uParam2, 6);
				*iParam3++;
				func_192(uParam2, 7);
				*iParam3++;
				func_192(uParam2, 8);
				*iParam3++;
				func_192(uParam2, 9);
				*iParam3++;
				func_192(uParam2, 10);
				*iParam3++;
				func_192(uParam2, 11);
				*iParam3++;
				func_192(uParam2, 12);
				*iParam3++;
				func_192(uParam2, 13);
				*iParam3++;
				func_192(uParam2, 14);
				*iParam3++;
				func_192(uParam2, 15);
				*iParam3++;
				func_192(uParam2, 16);
				*iParam3++;
				func_192(uParam2, 17);
				*iParam3++;
				func_192(uParam2, 18);
				*iParam3++;
				func_192(uParam2, 29);
				*iParam3++;
				func_192(uParam2, 30);
				*iParam3++;
				func_192(uParam2, 31);
				*iParam3++;
				func_192(uParam2, 35);
				*iParam3++;
				func_192(uParam2, 36);
				*iParam3++;
				func_192(uParam2, 37);
				*iParam3++;
				func_192(uParam2, 38);
				*iParam3++;
				func_192(uParam2, 39);
				*iParam3++;
				func_192(uParam2, 45);
				*iParam3++;
				func_192(uParam2, 46);
				*iParam3++;
				func_192(uParam2, 47);
				*iParam3++;
				func_192(uParam2, 48);
				*iParam3++;
				func_192(uParam2, 49);
				*iParam3++;
				func_192(uParam2, 50);
				*iParam3++;
				func_192(uParam2, 51);
				*iParam3++;
				func_192(uParam2, 52);
				*iParam3++;
				func_192(uParam2, 53);
				*iParam3++;
				func_192(uParam2, 55);
				*iParam3++;
				func_192(uParam2, 56);
				*iParam3++;
				func_192(uParam2, 58);
				*iParam3++;
				func_192(uParam2, 61);
				*iParam3++;
				func_192(uParam2, 63);
				*iParam3++;
				func_192(uParam2, 64);
				*iParam3++;
				func_192(uParam2, 65);
				*iParam3++;
				func_192(uParam2, 66);
				*iParam3++;
				func_192(uParam2, 67);
				*iParam3++;
				func_192(uParam2, 68);
				*iParam3++;
				func_192(uParam2, 71);
				*iParam3++;
				func_192(uParam2, 73);
				*iParam3++;
				func_192(uParam2, 75);
				*iParam3++;
				func_192(uParam2, 76);
				*iParam3++;
				func_192(uParam2, 82);
				*iParam3++;
				func_192(uParam2, 84);
				*iParam3++;
				func_192(uParam2, 26);
				*iParam3++;
				func_192(uParam2, 28);
				*iParam3++;
				func_192(uParam2, 41);
				*iParam3++;
				break;
			case joaat("a_m_m_valtownfolk_01"):
			case joaat("a_m_m_valtownfolk_02"):
			case joaat("s_m_m_valcowpoke_01"):
				func_192(uParam2, 1);
				*iParam3++;
				func_192(uParam2, 2);
				*iParam3++;
				func_192(uParam2, 3);
				*iParam3++;
				func_192(uParam2, 4);
				*iParam3++;
				func_192(uParam2, 5);
				*iParam3++;
				func_192(uParam2, 6);
				*iParam3++;
				func_192(uParam2, 7);
				*iParam3++;
				func_192(uParam2, 8);
				*iParam3++;
				func_192(uParam2, 9);
				*iParam3++;
				func_192(uParam2, 10);
				*iParam3++;
				func_192(uParam2, 11);
				*iParam3++;
				func_192(uParam2, 12);
				*iParam3++;
				func_192(uParam2, 13);
				*iParam3++;
				func_192(uParam2, 14);
				*iParam3++;
				func_192(uParam2, 15);
				*iParam3++;
				func_192(uParam2, 16);
				*iParam3++;
				func_192(uParam2, 17);
				*iParam3++;
				func_192(uParam2, 18);
				*iParam3++;
				func_192(uParam2, 29);
				*iParam3++;
				func_192(uParam2, 30);
				*iParam3++;
				func_192(uParam2, 31);
				*iParam3++;
				func_192(uParam2, 35);
				*iParam3++;
				func_192(uParam2, 36);
				*iParam3++;
				func_192(uParam2, 37);
				*iParam3++;
				func_192(uParam2, 38);
				*iParam3++;
				func_192(uParam2, 39);
				*iParam3++;
				func_192(uParam2, 45);
				*iParam3++;
				func_192(uParam2, 46);
				*iParam3++;
				func_192(uParam2, 47);
				*iParam3++;
				func_192(uParam2, 48);
				*iParam3++;
				func_192(uParam2, 49);
				*iParam3++;
				func_192(uParam2, 50);
				*iParam3++;
				func_192(uParam2, 51);
				*iParam3++;
				func_192(uParam2, 52);
				*iParam3++;
				func_192(uParam2, 53);
				*iParam3++;
				func_192(uParam2, 55);
				*iParam3++;
				func_192(uParam2, 56);
				*iParam3++;
				func_192(uParam2, 58);
				*iParam3++;
				func_192(uParam2, 61);
				*iParam3++;
				func_192(uParam2, 63);
				*iParam3++;
				func_192(uParam2, 64);
				*iParam3++;
				func_192(uParam2, 65);
				*iParam3++;
				func_192(uParam2, 66);
				*iParam3++;
				func_192(uParam2, 67);
				*iParam3++;
				func_192(uParam2, 68);
				*iParam3++;
				func_192(uParam2, 71);
				*iParam3++;
				func_192(uParam2, 73);
				*iParam3++;
				func_192(uParam2, 75);
				*iParam3++;
				func_192(uParam2, 76);
				*iParam3++;
				func_192(uParam2, 82);
				*iParam3++;
				func_192(uParam2, 84);
				*iParam3++;
				break;
			case joaat("u_m_m_valgunsmith_01"):
				func_192(uParam2, 84);
				*iParam3++;
				break;
			case joaat("u_m_m_valdoctor_01"):
				func_192(uParam2, 82);
				*iParam3++;
				break;
			case joaat("a_m_m_blwupperclass_01"):
				func_192(uParam2, 2);
				*iParam3++;
				func_192(uParam2, 12);
				*iParam3++;
				func_192(uParam2, 16);
				*iParam3++;
				func_192(uParam2, 18);
				*iParam3++;
				func_192(uParam2, 26);
				*iParam3++;
				func_192(uParam2, 30);
				*iParam3++;
				func_192(uParam2, 37);
				*iParam3++;
				func_192(uParam2, 39);
				*iParam3++;
				func_192(uParam2, 49);
				*iParam3++;
				func_192(uParam2, 50);
				*iParam3++;
				func_192(uParam2, 75);
				*iParam3++;
				func_192(uParam2, 76);
				*iParam3++;
				break;
			case joaat("a_m_o_blwupperclass_01"):
				func_192(uParam2, 2);
				*iParam3++;
				func_192(uParam2, 12);
				*iParam3++;
				func_192(uParam2, 16);
				*iParam3++;
				func_192(uParam2, 18);
				*iParam3++;
				func_192(uParam2, 26);
				*iParam3++;
				func_192(uParam2, 39);
				*iParam3++;
				func_192(uParam2, 50);
				*iParam3++;
				func_192(uParam2, 75);
				*iParam3++;
				func_192(uParam2, 76);
				*iParam3++;
				break;
			case joaat("u_m_o_blwgeneralstoreowner_01"):
				func_192(uParam2, 86);
				*iParam3++;
				break;
			case joaat("a_m_m_blwforeman_01"):
				func_192(uParam2, 1);
				*iParam3++;
				func_192(uParam2, 2);
				*iParam3++;
				func_192(uParam2, 7);
				*iParam3++;
				func_192(uParam2, 8);
				*iParam3++;
				func_192(uParam2, 9);
				*iParam3++;
				func_192(uParam2, 10);
				*iParam3++;
				func_192(uParam2, 11);
				*iParam3++;
				func_192(uParam2, 12);
				*iParam3++;
				func_192(uParam2, 13);
				*iParam3++;
				func_192(uParam2, 14);
				*iParam3++;
				func_192(uParam2, 15);
				*iParam3++;
				func_192(uParam2, 16);
				*iParam3++;
				func_192(uParam2, 17);
				*iParam3++;
				func_192(uParam2, 18);
				*iParam3++;
				func_192(uParam2, 26);
				*iParam3++;
				func_192(uParam2, 30);
				*iParam3++;
				func_192(uParam2, 31);
				*iParam3++;
				func_192(uParam2, 37);
				*iParam3++;
				func_192(uParam2, 38);
				*iParam3++;
				func_192(uParam2, 39);
				*iParam3++;
				func_192(uParam2, 48);
				*iParam3++;
				func_192(uParam2, 49);
				*iParam3++;
				func_192(uParam2, 50);
				*iParam3++;
				func_192(uParam2, 61);
				*iParam3++;
				func_192(uParam2, 75);
				*iParam3++;
				func_192(uParam2, 76);
				*iParam3++;
				break;
			case joaat("a_m_o_sdupperclass_01"):
				func_192(uParam2, 2);
				*iParam3++;
				func_192(uParam2, 26);
				*iParam3++;
				func_192(uParam2, 28);
				*iParam3++;
				func_192(uParam2, 37);
				*iParam3++;
				func_192(uParam2, 41);
				*iParam3++;
				func_192(uParam2, 50);
				*iParam3++;
				break;
			case joaat("a_m_m_rhdupperclass_01"):
				func_192(uParam2, 2);
				*iParam3++;
				func_192(uParam2, 12);
				*iParam3++;
				func_192(uParam2, 16);
				*iParam3++;
				func_192(uParam2, 18);
				*iParam3++;
				func_192(uParam2, 26);
				*iParam3++;
				func_192(uParam2, 28);
				*iParam3++;
				func_192(uParam2, 29);
				*iParam3++;
				func_192(uParam2, 30);
				*iParam3++;
				func_192(uParam2, 31);
				*iParam3++;
				func_192(uParam2, 37);
				*iParam3++;
				func_192(uParam2, 39);
				*iParam3++;
				func_192(uParam2, 49);
				*iParam3++;
				func_192(uParam2, 50);
				*iParam3++;
				func_192(uParam2, 75);
				*iParam3++;
				break;
			case joaat("a_m_m_rhdforeman_01"):
				func_192(uParam2, 1);
				*iParam3++;
				func_192(uParam2, 2);
				*iParam3++;
				func_192(uParam2, 26);
				*iParam3++;
				func_192(uParam2, 28);
				*iParam3++;
				func_192(uParam2, 29);
				*iParam3++;
				func_192(uParam2, 30);
				*iParam3++;
				func_192(uParam2, 31);
				*iParam3++;
				func_192(uParam2, 37);
				*iParam3++;
				func_192(uParam2, 38);
				*iParam3++;
				func_192(uParam2, 39);
				*iParam3++;
				func_192(uParam2, 49);
				*iParam3++;
				func_192(uParam2, 50);
				*iParam3++;
				func_192(uParam2, 51);
				*iParam3++;
				func_192(uParam2, 52);
				*iParam3++;
				func_192(uParam2, 53);
				*iParam3++;
				func_192(uParam2, 63);
				*iParam3++;
				func_192(uParam2, 64);
				*iParam3++;
				break;
			case joaat("u_m_m_rhdgenstoreowner_01"):
				func_192(uParam2, 80);
				*iParam3++;
				break;
			case joaat("a_m_m_vhtthug_01"):
			case joaat("a_m_m_vhttownfolk_01"):
				func_192(uParam2, 3);
				*iParam3++;
				func_192(uParam2, 4);
				*iParam3++;
				func_192(uParam2, 5);
				*iParam3++;
				func_192(uParam2, 6);
				*iParam3++;
				func_192(uParam2, 14);
				*iParam3++;
				func_192(uParam2, 15);
				*iParam3++;
				func_192(uParam2, 16);
				*iParam3++;
				func_192(uParam2, 17);
				*iParam3++;
				func_192(uParam2, 18);
				*iParam3++;
				func_192(uParam2, 29);
				*iParam3++;
				func_192(uParam2, 30);
				*iParam3++;
				func_192(uParam2, 31);
				*iParam3++;
				func_192(uParam2, 35);
				*iParam3++;
				func_192(uParam2, 36);
				*iParam3++;
				func_192(uParam2, 37);
				*iParam3++;
				func_192(uParam2, 38);
				*iParam3++;
				func_192(uParam2, 45);
				*iParam3++;
				func_192(uParam2, 46);
				*iParam3++;
				func_192(uParam2, 47);
				*iParam3++;
				func_192(uParam2, 48);
				*iParam3++;
				func_192(uParam2, 49);
				*iParam3++;
				func_192(uParam2, 50);
				*iParam3++;
				func_192(uParam2, 51);
				*iParam3++;
				func_192(uParam2, 52);
				*iParam3++;
				func_192(uParam2, 53);
				*iParam3++;
				func_192(uParam2, 55);
				*iParam3++;
				func_192(uParam2, 56);
				*iParam3++;
				func_192(uParam2, 58);
				*iParam3++;
				func_192(uParam2, 61);
				*iParam3++;
				func_192(uParam2, 62);
				*iParam3++;
				func_192(uParam2, 63);
				*iParam3++;
				func_192(uParam2, 64);
				*iParam3++;
				func_192(uParam2, 65);
				*iParam3++;
				func_192(uParam2, 66);
				*iParam3++;
				func_192(uParam2, 67);
				*iParam3++;
				func_192(uParam2, 68);
				*iParam3++;
				func_192(uParam2, 71);
				*iParam3++;
				func_192(uParam2, 73);
				*iParam3++;
				func_192(uParam2, 79);
				*iParam3++;
				break;
			case joaat("a_m_m_blwlaborer_01"):
			case joaat("a_m_m_blwlaborer_02"):
				func_192(uParam2, 1);
				*iParam3++;
				func_192(uParam2, 2);
				*iParam3++;
				func_192(uParam2, 3);
				*iParam3++;
				func_192(uParam2, 4);
				*iParam3++;
				func_192(uParam2, 5);
				*iParam3++;
				func_192(uParam2, 6);
				*iParam3++;
				func_192(uParam2, 7);
				*iParam3++;
				func_192(uParam2, 8);
				*iParam3++;
				func_192(uParam2, 9);
				*iParam3++;
				func_192(uParam2, 10);
				*iParam3++;
				func_192(uParam2, 11);
				*iParam3++;
				func_192(uParam2, 12);
				*iParam3++;
				func_192(uParam2, 13);
				*iParam3++;
				func_192(uParam2, 14);
				*iParam3++;
				func_192(uParam2, 15);
				*iParam3++;
				func_192(uParam2, 16);
				*iParam3++;
				func_192(uParam2, 17);
				*iParam3++;
				func_192(uParam2, 18);
				*iParam3++;
				func_192(uParam2, 30);
				*iParam3++;
				func_192(uParam2, 31);
				*iParam3++;
				func_192(uParam2, 35);
				*iParam3++;
				func_192(uParam2, 36);
				*iParam3++;
				func_192(uParam2, 37);
				*iParam3++;
				func_192(uParam2, 38);
				*iParam3++;
				func_192(uParam2, 39);
				*iParam3++;
				func_192(uParam2, 45);
				*iParam3++;
				func_192(uParam2, 46);
				*iParam3++;
				func_192(uParam2, 47);
				*iParam3++;
				func_192(uParam2, 48);
				*iParam3++;
				func_192(uParam2, 49);
				*iParam3++;
				func_192(uParam2, 50);
				*iParam3++;
				func_192(uParam2, 51);
				*iParam3++;
				func_192(uParam2, 52);
				*iParam3++;
				func_192(uParam2, 53);
				*iParam3++;
				func_192(uParam2, 61);
				*iParam3++;
				func_192(uParam2, 75);
				*iParam3++;
				func_192(uParam2, 76);
				*iParam3++;
				break;
			case joaat("a_m_m_middlesdtownfolk_03"):
			case joaat("a_m_m_middlesdtownfolk_02"):
			case joaat("a_m_m_middlesdtownfolk_01"):
				func_192(uParam2, 1);
				*iParam3++;
				func_192(uParam2, 2);
				*iParam3++;
				func_192(uParam2, 26);
				*iParam3++;
				func_192(uParam2, 28);
				*iParam3++;
				func_192(uParam2, 29);
				*iParam3++;
				func_192(uParam2, 30);
				*iParam3++;
				func_192(uParam2, 31);
				*iParam3++;
				func_192(uParam2, 34);
				*iParam3++;
				func_192(uParam2, 37);
				*iParam3++;
				func_192(uParam2, 38);
				*iParam3++;
				func_192(uParam2, 39);
				*iParam3++;
				func_192(uParam2, 41);
				*iParam3++;
				func_192(uParam2, 49);
				*iParam3++;
				func_192(uParam2, 50);
				*iParam3++;
				func_192(uParam2, 51);
				*iParam3++;
				func_192(uParam2, 52);
				*iParam3++;
				func_192(uParam2, 53);
				*iParam3++;
				break;
			case joaat("a_m_m_emrfarmhand_01"):
				func_192(uParam2, 1);
				*iParam3++;
				func_192(uParam2, 2);
				*iParam3++;
				func_192(uParam2, 3);
				*iParam3++;
				func_192(uParam2, 4);
				*iParam3++;
				func_192(uParam2, 5);
				*iParam3++;
				func_192(uParam2, 6);
				*iParam3++;
				func_192(uParam2, 7);
				*iParam3++;
				func_192(uParam2, 8);
				*iParam3++;
				func_192(uParam2, 9);
				*iParam3++;
				func_192(uParam2, 10);
				*iParam3++;
				func_192(uParam2, 11);
				*iParam3++;
				func_192(uParam2, 12);
				*iParam3++;
				func_192(uParam2, 13);
				*iParam3++;
				func_192(uParam2, 14);
				*iParam3++;
				func_192(uParam2, 15);
				*iParam3++;
				func_192(uParam2, 16);
				*iParam3++;
				func_192(uParam2, 17);
				*iParam3++;
				func_192(uParam2, 18);
				*iParam3++;
				func_192(uParam2, 29);
				*iParam3++;
				func_192(uParam2, 30);
				*iParam3++;
				func_192(uParam2, 31);
				*iParam3++;
				func_192(uParam2, 35);
				*iParam3++;
				func_192(uParam2, 36);
				*iParam3++;
				func_192(uParam2, 37);
				*iParam3++;
				func_192(uParam2, 38);
				*iParam3++;
				func_192(uParam2, 45);
				*iParam3++;
				func_192(uParam2, 46);
				*iParam3++;
				func_192(uParam2, 47);
				*iParam3++;
				func_192(uParam2, 48);
				*iParam3++;
				func_192(uParam2, 49);
				*iParam3++;
				func_192(uParam2, 50);
				*iParam3++;
				func_192(uParam2, 51);
				*iParam3++;
				func_192(uParam2, 52);
				*iParam3++;
				func_192(uParam2, 53);
				*iParam3++;
				func_192(uParam2, 55);
				*iParam3++;
				func_192(uParam2, 56);
				*iParam3++;
				func_192(uParam2, 58);
				*iParam3++;
				func_192(uParam2, 61);
				*iParam3++;
				func_192(uParam2, 65);
				*iParam3++;
				func_192(uParam2, 66);
				*iParam3++;
				func_192(uParam2, 67);
				*iParam3++;
				func_192(uParam2, 68);
				*iParam3++;
				func_192(uParam2, 71);
				*iParam3++;
				func_192(uParam2, 73);
				*iParam3++;
				func_192(uParam2, 75);
				*iParam3++;
				func_192(uParam2, 76);
				*iParam3++;
				break;
			case joaat("a_m_m_tumtownfolk_01"):
			case joaat("a_m_m_tumtownfolk_02"):
				func_192(uParam2, 45);
				*iParam3++;
				func_192(uParam2, 46);
				*iParam3++;
				func_192(uParam2, 47);
				*iParam3++;
				func_192(uParam2, 48);
				*iParam3++;
				func_192(uParam2, 49);
				*iParam3++;
				func_192(uParam2, 50);
				*iParam3++;
				func_192(uParam2, 51);
				*iParam3++;
				func_192(uParam2, 52);
				*iParam3++;
				func_192(uParam2, 53);
				*iParam3++;
				func_192(uParam2, 55);
				*iParam3++;
				func_192(uParam2, 56);
				*iParam3++;
				func_192(uParam2, 58);
				*iParam3++;
				func_192(uParam2, 61);
				*iParam3++;
				func_192(uParam2, 63);
				*iParam3++;
				func_192(uParam2, 64);
				*iParam3++;
				func_192(uParam2, 65);
				*iParam3++;
				func_192(uParam2, 66);
				*iParam3++;
				func_192(uParam2, 67);
				*iParam3++;
				func_192(uParam2, 68);
				*iParam3++;
				func_192(uParam2, 71);
				*iParam3++;
				func_192(uParam2, 73);
				*iParam3++;
				func_192(uParam2, 74);
				*iParam3++;
				func_192(uParam2, 75);
				*iParam3++;
				func_192(uParam2, 76);
				*iParam3++;
				break;
			case joaat("s_m_m_blwdealer_01"):
			case joaat("s_m_m_rhddealer_01"):
				func_192(uParam2, 87);
				*iParam3++;
				func_192(uParam2, 89);
				*iParam3++;
				func_192(uParam2, 90);
				*iParam3++;
				func_192(uParam2, 91);
				*iParam3++;
				break;
			case joaat("s_m_m_vhtdealer_01"):
				func_192(uParam2, 62);
				*iParam3++;
				func_192(uParam2, 79);
				*iParam3++;
				break;
			default:
				func_192(uParam2, 1);
				*iParam3++;
				func_192(uParam2, 2);
				*iParam3++;
				func_192(uParam2, 3);
				*iParam3++;
				func_192(uParam2, 4);
				*iParam3++;
				func_192(uParam2, 5);
				*iParam3++;
				func_192(uParam2, 6);
				*iParam3++;
				return 0;
		}
	}
	return 1;
}

bool func_143(var uParam0, int iParam1)
{
	return MISC::_0x8F4F050054005C27(uParam0, iParam1);
}

void func_144(int iParam0)
{
	int iVar0;
	var uVar1;

	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_193();
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
			func_194(&(Global_1935630->f_34), &(Global_1935630->f_39));
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

var func_145(int iParam0)
{
	return &(Global_1109400->f_275[iParam0 /*3*/]);
}

int func_146(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_195(bParam0, &uVar0, &uVar1))
	{
		return 1;
	}
	return 0;
}

int func_147(var uParam0)
{
	int iVar0;

	iVar0 = Global_1935630->f_40;
	if (func_27() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_196(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_196(uParam0);
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_177(iVar0) == -1)
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

void func_148(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_197(uParam0);
	}
}

int func_149(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_177(iParam2);
	}
	else
	{
		iVar1 = func_176(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_177(iParam0);
	}
	else
	{
		iVar0 = func_176(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return 1;
		}
	}
	if (func_198(*uParam1, 8388608))
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

float func_150(int iParam0, int iParam1)
{
	return func_173(iParam0, iParam1, 1, 1);
}

float func_151(var uParam0)
{
	return uParam0->f_26;
}

int func_152(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_153(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_79(uParam0, 134217728);
	}
	else
	{
		func_80(uParam0, 134217728);
	}
}

void func_154()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

int func_155(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5)
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
		if (((WEAPON::_0xCB690F680A3EA971(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, iParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_173(iVar0, iParam0, 1, 1) <= 4f)
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
		if (WEAPON::_0x6AD66548840472E5(func_199(iVar0, 0)))
		{
			if (func_200(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_156(var uParam0)
{
	return uParam0->f_17;
}

int func_157(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_12 > fParam3)
	{
		return 0;
	}
	fVar0 = -1f;
	if (!func_198(*uParam0, 4194304))
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

int func_158(var uParam0)
{
	return uParam0->f_18;
}

int func_159(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (WEAPON::_0x6AD66548840472E5(func_199(iVar0, 0)))
		{
			if (func_201(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_160(bool bParam0, var uParam1, var uParam2)
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

var func_161(var uParam0)
{
	return uParam0->f_23;
}

int func_162(var uParam0)
{
	return uParam0->f_21;
}

int func_163(var uParam0)
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

int func_164(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_202(iParam0, vParam4, 0.5f))
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

int func_165(int iParam0)
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
	if (func_203(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_166(int iParam0)
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

int func_167(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_204(iParam1))
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

int func_168(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_204(iParam1))
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

int func_169(var uParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40f;
	if (func_204(iParam1))
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

int func_170(int iParam0, var uParam1)
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

int func_171(int iParam0, int iParam1)
{
	if (PED::_0xB65A4DAB460A19BD(iParam0) == iParam1)
	{
		return 1;
	}
	if (func_205(iParam0, 1, 0, 0) != joaat("weapon_lasso"))
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

bool func_172(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

float func_173(int iParam0, int iParam1, bool bParam2, int iParam3)
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

int func_174(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_175(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

float func_175(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

int func_176(int iParam0)
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

int func_177(int iParam0)
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

int func_178(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_170(Global_35, &iVar1))
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
		fVar2 = func_173(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
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
		if (func_173(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
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

int func_179(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_195(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_180(uParam1, iVar0))
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
				if (!bParam2 || !func_180(uParam1, iVar1))
				{
					if (func_175(iVar1, Global_36, 1) < 5f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_180(var uParam0, int iParam1)
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

int func_181(int iParam0)
{
	if (func_206())
	{
		return 0;
	}
	return func_207(((*Global_1347702)[58 /*49*/])->f_15, 1);
}

int func_182(var uParam0)
{
	return uParam0->f_20;
}

int func_183(int iParam0, var uParam1, bool bParam2, float fParam3)
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

bool func_184(int iParam0)
{
	return func_208(iParam0, 2);
}

int func_185(int iParam0)
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

int func_186(var uParam0)
{
	return uParam0 & 31;
}

int func_187(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

bool func_188(int iParam0, int iParam1)
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

int func_189(int iParam0, int iParam1)
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

bool func_190(int iParam0, int iParam1)
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
	if (!func_188(iParam0, iVar0))
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

void func_191(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

void func_192(var uParam0, int iParam1)
{
	MISC::_0xE84AAC1B22A73E99(uParam0, iParam1);
}

int func_193()
{
	if (func_209())
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

void func_194(var uParam0, var uParam1)
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

int func_195(bool bParam0, var uParam1, var uParam2)
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

int func_196(var uParam0)
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

void func_197(var uParam0)
{
	int iVar0;

	if (Global_1935630->f_38 == 0)
	{
		func_80(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(Global_1935630->f_34[iVar0])))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(&(Global_1935630->f_34[iVar0])))
				{
					func_79(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}

bool func_198(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

var func_199(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

int func_200(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_201(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_201(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_202(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

int func_203(int iParam0, int iParam1, bool bParam2, int iParam3)
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

int func_204(int iParam0)
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

int func_205(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_206()
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

int func_207(int iParam0, bool bParam1)
{
	switch (func_26(iParam0))
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

bool func_208(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1) != 0;
}

int func_209()
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

