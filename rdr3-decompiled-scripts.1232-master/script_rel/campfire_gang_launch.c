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
	var uLocal_15 = 0;
	int iLocal_16 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
#endregion

void __EntryFunction__()
{
	char cVar0[64];
	struct<5> Var8;
	bool bVar13;
	bool bVar14;
	int iVar15;
	struct<10> Var16;
	struct<16> Var26;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_14 = -1;
	iLocal_16 = ScriptParam_0;
	if (func_1() == -1)
	{
	}
	else
	{
		func_2(0, 0);
	}
	if (!TASK::_0x841475AC96E794D1(ScriptParam_0.f_1))
	{
		func_2(0, 0);
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_2(0, 0);
	}
	Var8 = -1;
	Var8.f_1 = { TASK::_0xA8452DD321607029(ScriptParam_0.f_1, 1) };
	Var8.f_4 = TASK::_0xB93EA7184BAA85C3(ScriptParam_0.f_1, 1);
	while (func_3(&Var8))
	{
		BUILTIN::WAIT(0);
	}
	func_4();
	iVar15 = func_6(Var8.f_1, &bVar13, func_5() == 0);
	func_7();
	if (!func_8(Var8.f_1))
	{
		if (func_9() && bVar13)
		{
			func_2(0, 0);
		}
	}
	StringCopy(&cVar0, func_10(&Var8, &bVar14), 64);
	if (func_11(Var8.f_1))
	{
		func_2(iVar15, (!bVar13 && !bVar14));
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		func_2(iVar15, (!bVar13 && !bVar14));
	}
	if (func_8(Var8.f_1))
	{
		if (!func_12(Var8))
		{
			if (func_5() != 0)
			{
				Var8 = 0;
			}
			else
			{
				Var8 = 3;
			}
		}
		StringCopy(&cVar0, func_13(func_5()), 64);
		if (!func_14(Var8, 32768))
		{
			func_15(Var8);
			bVar13 = true;
		}
	}
	else if (func_5() == 1)
	{
		if (func_16())
		{
			func_2(iVar15, !bVar14);
		}
		if (func_17())
		{
			func_2(iVar15, 1);
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		func_2(iVar15, (!bVar13 && !bVar14));
	}
	func_18(Var8.f_1, Var8);
	Var16 = Var8;
	Var16.f_1 = ScriptParam_0.f_1;
	Var16.f_6 = { Var8.f_1 };
	Var16.f_6.f_3 = Var8.f_4;
	Var16.f_4 = !bVar13;
	Var26 = { Var16 };
	MemCopy(&(Var26.f_10), {cVar0}, 4);
	Var26.f_15 = 1;
	if (func_5() == 0)
	{
		Var26.f_14 = 1200;
	}
	else
	{
		Var26.f_14 = 1024;
	}
	func_19(Var26, 2);
	if (TASK::DOES_SCENARIO_GROUP_EXIST("PROPSET_GANG_CAMP_PLAYER_CRAFTING"))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("PROPSET_GANG_CAMP_PLAYER_CRAFTING", false);
	}
	func_2(0, 0);
}

int func_1()
{
	return Global_1572887->f_12;
}

void func_2(int iParam0, bool bParam1)
{
	int iVar0;

	SCRIPTS::_0xE7282390542F570D(iLocal_16);
	if (func_1() != -1)
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
		return;
	}
	iVar0 = func_5();
	if (iVar0 != 0)
	{
		Global_1393237->f_9 = (Global_1393237->f_9 - 1);
		if (Global_1393237->f_9 < 0)
		{
			Global_1393237->f_9 = 0;
		}
	}
	else if (iVar0 == 0)
	{
		Global_1393237->f_10 = (Global_1393237->f_10 - 1);
		if (Global_1393237->f_10 < 0)
		{
			Global_1393237->f_10 = 0;
		}
	}
	if (bParam1)
	{
		func_15(iParam0);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_3(var uParam0)
{
	if (&Global_1879534)
	{
		return 1;
	}
	return 0;
}

void func_4()
{
	if (CLOCK::GET_CLOCK_HOURS() >= 18 || CLOCK::GET_CLOCK_HOURS() <= 6)
	{
		Global_1393237->f_6 = 3;
	}
	else
	{
		Global_1393237->f_6 = 2;
	}
}

int func_5()
{
	return 0;
}

int func_6(vector3 vParam0, var uParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = -1;
	if (bParam4)
	{
		iVar2 = 3;
		iVar3 = 5;
	}
	else
	{
		iVar2 = 0;
		iVar3 = 2;
	}
	iVar1 = iVar2;
	while (iVar1 <= iVar3)
	{
		if (BUILTIN::VDIST((Global_1393237->f_11[iVar1 /*30*/])->f_3, vParam0) < 10f)
		{
			*uParam3 = 0;
			return iVar1;
		}
		if ((iVar0 == -1 && !func_20(iVar1)) && (func_21(iVar1) || (!bParam4 && func_22((Global_1393237->f_11[iVar1 /*30*/])->f_3, Global_36) > 2000f)))
		{
			*uParam3 = 1;
			iVar0 = iVar1;
		}
		iVar1++;
	}
	if (!func_14(iVar0, 32768))
	{
		func_15(iVar0);
	}
	return iVar0;
}

void func_7()
{
	int iVar0;
	int iVar1;

	if (func_1() != -1)
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < Global_1393237->f_11)
	{
		if (func_21(iVar0))
		{
			if (!func_23((Global_1393237->f_11[iVar0 /*30*/])->f_3) && !func_14(iVar0, 1))
			{
				func_24((Global_1393237->f_11[iVar0 /*30*/])->f_3, 0);
			}
		}
		else if (func_14(iVar0, 8192))
		{
			if (func_25(iVar0))
			{
				iVar1 = func_26((Global_1393237->f_11[iVar0 /*30*/])->f_3, 0);
				if (iVar1 >= 0)
				{
					if (VOLUME::_0xF6A8A652A6B186CD(Global_1911670[iVar1]))
					{
						if (VOLUME::_0xF6CE6F9C3897804E(Global_1911670[iVar1]) > 45f)
						{
							func_24((Global_1393237->f_11[iVar0 /*30*/])->f_3, 0);
							func_27((Global_1393237->f_11[iVar0 /*30*/])->f_3, 45f, "sCampfireAllDead", 0, 0, 1, 0, -1082130432);
							func_28(iVar0, 4194304, 0);
						}
					}
				}
			}
		}
		iVar0++;
	}
}

int func_8(vector3 vParam0)
{
	if (func_29(vParam0))
	{
		return 0;
	}
	if (func_30(vParam0))
	{
		return 1;
	}
	return 0;
}

int func_9()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_5();
	if (iVar0 != 0)
	{
		Global_1393237->f_9++;
		if (Global_1393237->f_9 > 1)
		{
			return 1;
		}
	}
	if (iVar0 == 0)
	{
		Global_1393237->f_10++;
		if (Global_1393237->f_10 > 1)
		{
			return 1;
		}
		iVar1 = 3;
		while (iVar1 <= 5)
		{
			if (func_20(iVar1))
			{
				iVar2++;
			}
			iVar1++;
		}
		if (iVar2 > 0)
		{
			return 1;
		}
	}
	return 0;
}

char* func_10(var uParam0, var uParam1)
{
	int iVar0;
	bool bVar1;

	iVar0 = func_5();
	*uParam0 = func_6(uParam0->f_1, &bVar1, iVar0 == 0);
	if (!func_12(*uParam0))
	{
		return "";
	}
	if (Global_1393237->f_199)
	{
		return "";
	}
	if (func_29(uParam0->f_1))
	{
		*uParam1 = 1;
		return "";
	}
	if (func_8(uParam0->f_1) || func_14(*uParam0, 524288))
	{
		return func_13(iVar0);
	}
	if (bVar1)
	{
		if (func_31(1) > 1 && iVar0 != 0)
		{
			return "";
		}
		if (!func_32(uParam0->f_1, *uParam0))
		{
			return "";
		}
		if (func_33(uParam0->f_1))
		{
			return "";
		}
		if (func_34(*uParam0, iVar0 == 0))
		{
			return "";
		}
		if (func_35(uParam0->f_1, 1, 0, 0))
		{
			return "";
		}
		if (func_36(*uParam0))
		{
			return "";
		}
		if (func_37(uParam0->f_1, *uParam0))
		{
			return "";
		}
		if (!func_38(uParam0->f_1, *uParam0, iVar0 == 0))
		{
			return "";
		}
	}
	else if (func_21(*uParam0))
	{
		func_15(*uParam0);
		*uParam0 = -1;
		return "";
	}
	else if (func_20(*uParam0))
	{
		*uParam1 = 1;
		*uParam0 = -1;
		return "";
	}
	else
	{
		iVar0 = (Global_1393237->f_11[*uParam0 /*30*/])->f_2;
	}
	return func_13(iVar0);
}

bool func_11(vector3 vParam0)
{
	int iVar0;

	if (func_23(Global_1393237->f_200))
	{
		return false;
	}
	if (func_30(vParam0))
	{
		return false;
	}
	if (iLocal_14 == -1)
	{
		iLocal_14 = func_39(vParam0);
	}
	iVar0 = func_40(iLocal_14);
	return BUILTIN::VDIST(Global_1393237->f_200, vParam0) < (func_41(func_5(), iVar0, 0) + 20f);
}

int func_12(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= Global_1393237->f_11)
	{
		return 0;
	}
	return 1;
}

char* func_13(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "campfire_gang";
		case 1:
			return "campfire_always";
		default:
			break;
	}
	return "";
}

int func_14(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return 0;
	}
	return func_42((Global_1393237->f_11[iParam0 /*30*/])->f_10, iParam1);
}

void func_15(int iParam0)
{
	int iVar0;

	if (iParam0 < 0)
	{
		return;
	}
	if (!func_23((Global_1393237->f_11[iParam0 /*30*/])->f_3))
	{
		func_24((Global_1393237->f_11[iParam0 /*30*/])->f_3, 0);
		PED::_0x9851DE7AEC10B4E1((Global_1393237->f_11[iParam0 /*30*/])->f_3, 20f, 1, 0);
	}
	Global_1393237->f_11[iParam0 /*30*/] = -15;
	(Global_1393237->f_11[iParam0 /*30*/])->f_2 = -1;
	(Global_1393237->f_11[iParam0 /*30*/])->f_3 = { 0f, 0f, 0f };
	(Global_1393237->f_11[iParam0 /*30*/])->f_6 = { 0f, 0f, 0f };
	(Global_1393237->f_11[iParam0 /*30*/])->f_9 = 0f;
	if (func_14(iParam0, 8388608))
	{
		(Global_1393237->f_11[iParam0 /*30*/])->f_10 = 8388608;
	}
	else
	{
		(Global_1393237->f_11[iParam0 /*30*/])->f_10 = 0;
		if (Global_1393237->f_11[iParam0 /*30*/])->f_17 != func_43()
		{
		}
		(Global_1393237->f_11[iParam0 /*30*/])->f_17 = func_43();
	}
	(Global_1393237->f_11[iParam0 /*30*/])->f_11 = -1;
	(Global_1393237->f_11[iParam0 /*30*/])->f_12 = 0;
	(Global_1393237->f_11[iParam0 /*30*/])->f_13 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		(Global_1393237->f_11[iParam0 /*30*/])->f_14[iVar0] = 0;
		iVar0++;
	}
	func_44(iParam0, 1);
	(Global_1393237->f_11[iParam0 /*30*/])->f_29 = 0;
	if (iParam0 > 2)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		if (MAP::DOES_BLIP_EXIST(&((Global_1393237->f_11[iParam0 /*30*/])->f_18[0])))
		{
			MAP::REMOVE_BLIP((Global_1393237->f_11[iParam0 /*30*/])->f_18[0]);
		}
		if (MAP::DOES_BLIP_EXIST(&((Global_1393237->f_11[iParam0 /*30*/])->f_18[1])))
		{
			MAP::REMOVE_BLIP((Global_1393237->f_11[iParam0 /*30*/])->f_18[1]);
		}
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
	}
	if (VOLUME::_0xF6A8A652A6B186CD((Global_1393237->f_11[iParam0 /*30*/])->f_21))
	{
		func_24((Global_1393237->f_11[iParam0 /*30*/])->f_3, 1);
	}
}

int func_16()
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
	switch (iVar3)
	{
		case -1317052143:
		case -1233681761:
		case -273223690:
		case 212278652:
		case 669657108:
		case 725623432:
		case 839715153:
		case 1420204096:
		case 1679686673:
		case 1974067816:
		case 2082228755:
		case 2137137442:
			return 1;
	}
	return 0;
}

bool func_17()
{
	return (Global_1894899 & 1 != 0 && func_45() != -1);
}

void func_18(vector3 vParam0, int iParam3)
{
	(Global_1393237->f_11[iParam3 /*30*/])->f_3 = { vParam0 };
	func_28(iParam3, 512, 0);
}

void func_19(struct<16> Param0, int iParam16)
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
	if (!func_46(iParam16, 2))
	{
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(Param0.f_10))) > 0 || func_47(&(Param0.f_10)))
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
			func_48(iParam16);
			return;
		}
		iVar0++;
	}
}

int func_20(int iParam0)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return 0;
	}
	return func_14(iParam0, 512);
}

int func_21(int iParam0)
{
	if (&Global_1393237->f_11[iParam0 /*30*/] == -15)
	{
		if (!func_14(iParam0, 512))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return func_50(func_49(iParam0));
}

float func_22(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

int func_23(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_24(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_23(vParam0))
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
			if (func_51(vVar2, vParam0, 2f, 1))
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

int func_25(int iParam0)
{
	if (func_14(iParam0, 4194304))
	{
		return 0;
	}
	if (func_14(iParam0, 1))
	{
		return 0;
	}
	if (func_23((Global_1393237->f_11[iParam0 /*30*/])->f_3))
	{
		return 0;
	}
	return 1;
}

int func_26(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_23(vParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1911670)
	{
		iVar1 = Global_1911670[iVar0];
		if (VOLUME::_0xF6A8A652A6B186CD(iVar1))
		{
			vVar2 = { VOLUME::_0xC4019CF9AE8E931A(iVar1) };
			if (func_51(vVar2, vParam0, 2f, 1))
			{
				if (iParam3 == 0 || VOLUME::_0x769BB7626B8CDB06(vVar2, 2f, 0, iParam3, 16384))
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_27(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, int iParam7, bool bParam8, float fParam9)
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
	if (func_23(vParam0))
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
		if (func_52(vParam0))
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
	func_53(iVar0, bParam8);
	return iVar0;
}

void func_28(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return;
	}
	if (bParam2)
	{
	}
	(Global_1393237->f_11[iParam0 /*30*/])->f_10 = ((Global_1393237->f_11[iParam0 /*30*/])->f_10 || iParam1);
}

int func_29(vector3 vParam0)
{
	int iVar0;

	iVar0 = func_54(vParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_14(iVar0, 1);
}

int func_30(vector3 vParam0)
{
	if (!func_23(Global_1393237->f_200))
	{
		return BUILTIN::VDIST(Global_1393237->f_200, vParam0) < 5f;
	}
	return 0;
}

int func_31(bool bParam0)
{
	int iVar0;

	iVar0 = func_55(1);
	if (bParam0)
	{
		return iVar0 + 1;
	}
	return iVar0;
}

int func_32(vector3 vParam0, var uParam3)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (iLocal_14 == -1)
	{
		iLocal_14 = func_39(vParam0);
	}
	if (func_17())
	{
		return 0;
	}
	if (func_56() && (((iLocal_14 == 1 || iLocal_14 == 12) || iLocal_14 == 3) || iLocal_14 == 9))
	{
		return 0;
	}
	if (Global_1393237->f_3 > MISC::GET_GAME_TIMER())
	{
		return 0;
	}
	if (Global_1327479->f_5 > MISC::GET_GAME_TIMER())
	{
		return 0;
	}
	if (!func_58(1, vParam0, -1, func_57(iLocal_14, 0, 0, 0)))
	{
		return 0;
	}
	if (SCRIPTS::DOES_SCRIPT_WITH_NAME_HASH_EXIST(-777113702) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-777113702) > 0)
	{
		if (!func_51(vParam0, -1165.043f, 91.94646f, 43.90535f, 10f, 0))
		{
			return 0;
		}
	}
	switch (iLocal_14)
	{
		case 11:
			if (func_51(vParam0, 1504.914f, -1469.925f, 71.38271f, 10f, 0))
			{
				return 0;
			}
			break;
		case 9:
			if (func_51(vParam0, -1712.438f, 606.3528f, 117.7065f, 10f, 0))
			{
				return 0;
			}
			break;
	}
	if (func_59(Global_40.f_9632.f_192))
	{
		func_61(func_60(), &uVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5);
		if ((iVar3 < 1 && iVar4 < 1) && iVar5 < 1)
		{
			if (func_62())
			{
				if (iVar2 >= 3 && iVar1 >= 0)
				{
					return 0;
				}
			}
			else if (iVar2 >= 3 && iVar1 >= 0)
			{
				return 0;
			}
		}
	}
	if (!func_63(func_5(), vParam0))
	{
		return 0;
	}
	if (!func_64(-1))
	{
		return 0;
	}
	else if (!func_64(func_57(iLocal_14, 0, 0, 0)))
	{
		return 0;
	}
	else if (!func_65(func_57(iLocal_14, 0, 0, 0)))
	{
		return 0;
	}
	if (func_67(vParam0, func_66(iLocal_14), 4, 1))
	{
		return 0;
	}
	if (func_67(vParam0, func_68(iLocal_14), 2, 1))
	{
		return 0;
	}
	if (func_69())
	{
		return 0;
	}
	switch (iLocal_14)
	{
		case 10:
			if (func_70())
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 12:
			if (!func_71(3))
			{
				return 1;
			}
			break;
		case 1:
		case 3:
		case 9:
			if (!func_71(0))
			{
				return 1;
			}
			break;
		case 11:
			if (!func_71(2))
			{
				return 1;
			}
	}
	return 0;
}

int func_33(vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_40.f_10991.f_4)
	{
		if (func_51(*(Global_40.f_10991.f_4[iVar0 /*3*/]), vParam0, 10f, 1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_34(int iParam0, bool bParam1)
{
	if (func_72(PLAYER::PLAYER_ID(), 0, 1, 1))
	{
		return 1;
	}
	if (func_17())
	{
		return 1;
	}
	if (func_14(iParam0, 4096) || func_14(iParam0, 131072))
	{
		return 1;
	}
	return 0;
}

int func_35(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	var uVar0[4];
	int iVar5[4];

	if (func_23(vParam0))
	{
		return 0;
	}
	uVar0[0] = iParam4;
	iVar5[0] = 16384;
	iVar5[1] = iParam5;
	if (VOLUME::_0x870E9981ED27C815(vParam0, &uVar0, &iVar5, iParam3))
	{
		return 1;
	}
	return 0;
}

int func_36(int iParam0)
{
	float fVar0;
	bool bVar1;
	float fVar2;

	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, (Global_1393237->f_11[iParam0 /*30*/])->f_3, true);
	bVar1 = func_73(iParam0, fVar0, 1);
	if (bVar1)
	{
		fVar2 = 130f;
	}
	else
	{
		fVar2 = 100f;
	}
	if (fVar0 < fVar2)
	{
		return 1;
	}
	return 0;
}

int func_37(vector3 vParam0, int iParam3)
{
	int iVar0;
	float fVar1;
	int iVar2;

	if (iLocal_14 == -1)
	{
		iLocal_14 = func_39(vParam0);
	}
	iVar2 = func_40(iLocal_14);
	iVar0 = 0;
	while (iVar0 < Global_1393237->f_11)
	{
		if (iVar0 != iParam3)
		{
			if (!func_23((Global_1393237->f_11[iVar0 /*30*/])->f_3))
			{
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, (Global_1393237->f_11[iVar0 /*30*/])->f_3, true);
				if (fVar1 < func_41(func_5(), iVar2, 0))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_38(vector3 vParam0, int iParam3, bool bParam4)
{
	if (func_30(vParam0) || func_14(iParam3, 524288))
	{
		return 1;
	}
	if (func_74(iParam3))
	{
		return 1;
	}
	if (bParam4)
	{
		if (Global_1393237->f_8 + 1 > Global_1393237->f_6)
		{
			return 0;
		}
	}
	else if (Global_1393237->f_7 + 1 > Global_1393237->f_6)
	{
		return 0;
	}
	if (func_75(50, 0, 1))
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_16())
		{
			return 0;
		}
	}
	return 1;
}

int func_39(vector3 vParam0)
{
	return func_76(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

int func_40(int iParam0)
{
	int iVar0;

	iVar0 = func_57(iParam0, func_56(), 0, 0);
	return func_77(iVar0);
}

float func_41(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return 200f;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 3:
					return 200f;
				case 0:
					return 220f;
				default:
					return 300f;
			}
			break;
	}
	return 400f;
}

bool func_42(var uParam0, var uParam1)
{
	return (uParam0 && uParam1) != 0;
}

int func_43()
{
	return 0;
}

void func_44(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < 6)
	{
		(Global_1393237->f_11[iParam0 /*30*/])->f_24 = iParam1;
	}
}

int func_45()
{
	return Global_1894899->f_2;
}

bool func_46(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_47(char* sParam0)
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

void func_48(var uParam0)
{
	if (func_46(uParam0, 1))
	{
		func_78(1);
	}
}

int func_49(int iParam0)
{
	var uVar0;

	uVar0 = &Global_1393237->f_11[iParam0 /*30*/];
	func_79(&uVar0, 0, 0, 0, 1, 0, 0, 0);
	return uVar0;
}

bool func_50(int iParam0)
{
	return &Global_1899515 > iParam0;
}

int func_51(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

bool func_52(vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, 16384);
}

int func_53(int iParam0, bool bParam1)
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

int func_54(vector3 vParam0)
{
	int iVar0;

	iVar0 = -1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_74(iVar0))
		{
			if (func_51(vParam0, (Global_1393237->f_11[iVar0 /*30*/])->f_3, 10f, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_55(bool bParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam0)
	{
		return func_80(Global_1359489->f_4);
	}
	PED::GET_GROUP_SIZE(func_81(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = PED::GET_PED_AS_GROUP_MEMBER(func_81(), iVar3);
		if (func_82(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

int func_56()
{
	if (func_1() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == 11966224)
	{
		return 1;
	}
	return 0;
}

int func_57(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	bool bVar0;

	bVar0 = (func_56() && !bParam2);
	switch (iParam0)
	{
		case 15:
		case 16:
			return 5;
		case 3:
		case 9:
			return 0;
		case 1:
			if (!bVar0 && !bParam1)
			{
				return 0;
			}
			else
			{
				return 4;
			}
			break;
		case 10:
			return 1;
		case 4:
		case 12:
			if (bVar0 || bParam1)
			{
				return 3;
			}
			break;
		case 0:
		case 11:
			return 2;
		case 5:
			if (bVar0 || bParam1)
			{
				return 3;
			}
			break;
	}
	return -1;
}

int func_58(bool bParam0, vector3 vParam1, int iParam4, int iParam5)
{
	bool bVar0;

	if (bParam0)
	{
		if (iParam4 == -1)
		{
			iParam4 = func_39(vParam1);
		}
		bVar0 = iParam4 == 10;
		if (!bVar0)
		{
			if (Global_1393237->f_1 != 0 && (MISC::GET_GAME_TIMER() - Global_1393237->f_1) < func_83(iParam5))
			{
				return 0;
			}
		}
		else if (Global_1393237->f_1 != 0 && (MISC::GET_GAME_TIMER() - Global_1393237->f_1) < 961920)
		{
			return 0;
		}
		if (Global_1393237->f_2 != 0)
		{
			if (MISC::GET_GAME_TIMER() - Global_1393237->f_2) < func_84()
			{
				return 0;
			}
		}
	}
	else
	{
		if (&Global_1393237 != 0 && (&Global_1393237 - MISC::GET_GAME_TIMER()) < func_85())
		{
			return 0;
		}
		if (Global_1393237->f_2 != 0)
		{
			if (MISC::GET_GAME_TIMER() - Global_1393237->f_2) < func_84()
			{
				return 0;
			}
		}
	}
	if (MISC::GET_GAME_TIMER() < Global_1393237->f_4)
	{
		return 0;
	}
	return 1;
}

int func_59(int iParam0)
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
	iVar0 = func_86(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_87(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_88(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_89(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return 0;
	}
	iVar4 = func_90(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_91(iParam0);
	if (iVar5 < 1 || iVar5 > func_92(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_60()
{
	return &Global_1899515;
}

void func_61(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_93(func_60(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

bool func_62()
{
	if (Global_1392135->f_3 != -1)
	{
		return true;
	}
	return Global_1392135->f_3 != -1;
}

int func_63(int iParam0, vector3 vParam1)
{
	float fVar0;
	float fVar1;

	fVar0 = vParam1.z;
	fVar1 = Global_36.f_2;
	if (fVar1 < (fVar0 - 45f))
	{
		return 0;
	}
	return 1;
}

int func_64(int iParam0)
{
	float fVar0;
	int iVar1;

	fVar0 = func_94();
	iVar1 = 1;
	if (fVar0 < IntToFloat(Global_1392135->f_4))
	{
		iVar1 = 0;
	}
	if (iParam0 != -1)
	{
		if (fVar0 < IntToFloat(&Global_1392135->f_5[iParam0]))
		{
			iVar1 = 0;
		}
	}
	return iVar1;
}

int func_65(int iParam0)
{
	if (func_95(iParam0, 0))
	{
		if (&Global_1393237->f_192[iParam0] < (func_96() / 1000))
		{
			return 1;
		}
	}
	return 0;
}

float func_66(int iParam0)
{
	switch (iParam0)
	{
		case 10:
			return 170f;
		default:
			break;
	}
	return 350f;
}

bool func_67(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	if (func_23(vParam0))
	{
		return false;
	}
	return VOLUME::_0x769BB7626B8CDB06(vParam0, fParam3, iParam5, iParam4, 16384);
}

float func_68(int iParam0)
{
	switch (iParam0)
	{
		case 10:
			return 140f;
		default:
			break;
	}
	return 220f;
}

bool func_69()
{
	return Global_1310750->f_16077 != 0;
}

int func_70()
{
	return 1;
}

bool func_71(int iParam0)
{
	if (!func_95(iParam0, 0))
	{
		return false;
	}
	return (Global_40.f_9571[iParam0 /*10*/])->f_1 == 5;
}

int func_72(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_97(bParam1, iParam2, iParam3);
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

int func_73(int iParam0, float fParam1, bool bParam2)
{
	if (fParam1 < 180f)
	{
		if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
		{
			if (CAM::IS_SPHERE_VISIBLE((Global_1393237->f_11[iParam0 /*30*/])->f_3 + Vector(1f, 0f, 0f), 3f))
			{
				return 1;
			}
			if (bParam2)
			{
				if (CAM::IS_SPHERE_VISIBLE((Global_1393237->f_11[iParam0 /*30*/])->f_3 + Vector(5.5f, 0f, 0f), 3f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_74(int iParam0)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return false;
	}
	return (Global_1393237->f_11[iParam0 /*30*/])->f_2 != -1;
}

int func_75(int iParam0, bool bParam1, int iParam2)
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
		if (func_98())
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
		iVar0 = func_99(&(Global_1898164->f_1[0 /*5*/]));
		if (func_100(iVar0) && func_101(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_102(&(Global_1898164->f_1[0 /*5*/])))
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

int func_76(int iParam0)
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

int func_77(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 0;
		case 0:
			return 2;
		case 3:
			return 1;
		case 1:
			return 3;
		default:
			break;
	}
	return -1;
}

void func_78(int iParam0)
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

void func_79(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_89(*uParam0);
	iVar1 = func_90(*uParam0);
	iVar2 = func_91(*uParam0);
	iVar3 = func_88(*uParam0);
	iVar4 = func_87(*uParam0);
	iVar5 = func_86(*uParam0);
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
	iVar6 = func_92(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_92(iVar1, iVar0);
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
	func_103(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_80(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = uParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_104(&iVar1, -2147483648);
	}
	else
	{
		iVar0 = 0;
	}
	while (iVar1 > 0)
	{
		iVar1 = (iVar1 && (iVar1 - 1));
		iVar0++;
	}
	return iVar0;
}

int func_81()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

int func_82(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (func_1() != -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = Global_1360165[iVar0 /*1157*/];
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && iParam0 == iVar1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_83(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	func_105(&iVar2, &iVar3, &iVar4);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if ((Global_1393237->f_11[iVar0 /*30*/])->f_2 == 0)
		{
			if (func_14(iVar0, iVar2) || func_14(iVar0, iVar3))
			{
				if (iVar1 < 1083240)
				{
					iVar1 = 1083240;
				}
			}
			else if (func_14(iVar0, iVar4))
			{
				if (iVar1 < 720720)
				{
					iVar1 = 720720;
				}
			}
		}
		iVar0++;
	}
	if (iVar1 <= 0)
	{
		iVar1 = 360360;
	}
	if (iParam0 != -1)
	{
		if (iParam0 == Global_1393237->f_209)
		{
			iVar1 = BUILTIN::FLOOR((2f * IntToFloat(iVar1)));
		}
	}
	return iVar1;
}

int func_84()
{
	return 240000;
}

int func_85()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	func_105(&iVar2, &iVar3, &iVar4);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if ((Global_1393237->f_11[iVar0 /*30*/])->f_2 != 0)
		{
			if (func_14(iVar0, iVar2))
			{
				iVar1 = 2885760;
			}
			else if (func_14(iVar0, iVar3))
			{
				if (iVar1 < 2882880)
				{
					iVar1 = 2882880;
				}
			}
			else if (func_14(iVar0, iVar4))
			{
				if (iVar1 < 2880000)
				{
					iVar1 = 2880000;
				}
			}
		}
		iVar0++;
	}
	if (iVar1 <= 0)
	{
		iVar1 = 1440000;
	}
	return iVar1;
}

int func_86(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_87(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_88(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_89(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_106(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_90(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_91(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_92(int iParam0, int iParam1)
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

void func_93(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (func_107(iParam0, iParam1, 1))
	{
		iVar0 = func_90(iParam1);
		iVar1 = func_89(iParam0);
		iVar2 = (func_89(iParam0) - func_89(iParam1));
		iVar3 = (func_90(iParam0) - func_90(iParam1));
		iVar4 = (func_91(iParam0) - func_91(iParam1));
		iVar5 = (func_88(iParam0) - func_88(iParam1));
		iVar6 = (func_87(iParam0) - func_87(iParam1));
		iVar7 = (func_86(iParam0) - func_86(iParam1));
	}
	else
	{
		iVar0 = func_90(iParam0);
		iVar1 = func_89(iParam1);
		iVar2 = (func_89(iParam1) - func_89(iParam0));
		iVar3 = (func_90(iParam1) - func_90(iParam0));
		iVar4 = (func_91(iParam1) - func_91(iParam0));
		iVar5 = (func_88(iParam1) - func_88(iParam0));
		iVar6 = (func_87(iParam1) - func_87(iParam0));
		iVar7 = (func_86(iParam1) - func_86(iParam0));
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
		iVar4 = (iVar4 + func_92(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = BUILTIN::ROUND(func_108(BUILTIN::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_94()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

int func_95(int iParam0, bool bParam1)
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

int func_96()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

int func_97(bool bParam0, var uParam1, var uParam2)
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

int func_98()
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

int func_99(int iParam0)
{
	if (!func_102(iParam0))
	{
		return -1;
	}
	return func_110(func_109(iParam0));
}

bool func_100(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_101(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_102(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

void func_103(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_111(uParam0, iParam6);
	func_112(uParam0, iParam5);
	func_113(uParam0, iParam4);
	func_114(uParam0, iParam3);
	func_115(uParam0, iParam2);
	func_116(uParam0, iParam1);
}

void func_104(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_105(var uParam0, var uParam1, var uParam2)
{
	*uParam0 = 9484;
	*uParam1 = 66;
	*uParam2 = 128;
}

int func_106(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_107(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_59(iParam1) || !func_59(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

float func_108(float fParam0, float fParam1, float fParam2)
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

int func_109(int iParam0)
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

int func_110(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

void func_111(var uParam0, int iParam1)
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

void func_112(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 62914560);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_113(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_90(*uParam0);
	iVar1 = func_89(*uParam0);
	if (iParam1 < 1 || iParam1 > func_92(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4063232);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_114(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 126976);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_115(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4032);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_116(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 63);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

