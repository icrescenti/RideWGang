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
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	float fLocal_20 = 0f;
	float fLocal_21 = 0f;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion

void __EntryFunction__()
{
	iLocal_13 = 1;
	fLocal_20 = 1f;
	fLocal_21 = 1f;
	iLocal_15 = vScriptParam_0.x;
	uLocal_16 = vScriptParam_0.y;
	iLocal_17 = vScriptParam_0.z;
	func_1();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_2();
	}
	while (!SCRIPTS::_0x9E4EF615E307FBBE() && func_3())
	{
		func_4();
		func_5();
		func_6();
		BUILTIN::WAIT(0);
	}
	func_2();
}

void func_1()
{
}

void func_2()
{
	func_7();
	SCRIPTS::_0xE7282390542F570D(iLocal_15);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_8();
	}
	else
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

int func_3()
{
	if (iLocal_14 != 0)
	{
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(iLocal_14) == 0)
		{
			return iLocal_13;
		}
		else
		{
			return 1;
		}
	}
	return iLocal_13;
}

void func_4()
{
}

void func_5()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(2))
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(2, iVar0))
		{
			case -45008988:
				func_9(iVar0);
				break;
			case -456923784:
				func_10(iVar0);
				break;
			case -843555838:
				func_11(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_6()
{
	if (PED::IS_PED_INJURED(Global_35) || !PED::IS_PED_USING_ANY_SCENARIO(Global_35))
	{
		iLocal_13 = 0;
		return;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1898385492))
	{
		func_12(0, 12.5f, 0, 0, 0);
		func_13(10f, 1);
		switch (iLocal_17)
		{
			case -1200128754:
			case 1154717469:
				func_14(-241345764 /* GXTEntry: "Almonds" */);
				break;
			case 1637554487:
				func_14(-1735850413 /* GXTEntry: "Pickled Egg" */);
				break;
		}
		if (func_15(1))
		{
			func_16(-0.1f, 0);
		}
	}
}

void func_7()
{
}

void func_8()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_9(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, 1);
		func_17(&iVar0);
	}
}

void func_10(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, 1);
		func_18(&iVar0);
	}
}

void func_11(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, 1);
		func_19(&iVar0);
	}
}

void func_12(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (fParam1 == 0f)
	{
		return;
	}
	if (bParam4)
	{
		fParam1 = func_20(iParam0, fParam1, 1);
	}
	func_22(iParam0, (func_21(iParam0, 2) + fParam1), bParam2, bParam3, 1, 2);
}

void func_13(float fParam0, bool bParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;

	fVar0 = func_23(13, 2);
	if (fParam0 > 10f)
	{
		fParam0 = 10f;
	}
	if (func_24())
	{
		iVar1 = func_25(fVar0);
		fVar0 = (fVar0 + fParam0);
		iVar2 = func_25(fVar0);
		if (iVar1 != iVar2)
		{
			Global_1954462->f_1331.f_107 = func_26();
			func_27(&(Global_1954462->f_1331.f_107), 0, 0, 1, 0, 0, 0, 0);
		}
		func_29(13, func_28(fVar0, 0f, 100f), 2);
	}
	if (bParam1)
	{
		Global_17173.f_54.f_2438.f_41++;
		if (5 == Global_17173.f_54.f_2438.f_41)
		{
			func_30(109, 0);
		}
	}
}

void func_14(int iParam0)
{
	struct<2> Var0;
	struct<6> Var22;
	int iVar29;
	var uVar30;
	var uVar31;
	var uVar32;
	float fVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	bool bVar37;
	bool bVar38;
	int iVar39;

	Var0.f_1 = 20;
	if ((func_31(iParam0, 1573112293) || func_31(iParam0, 672467738)) || func_31(iParam0, -550842268))
	{
		bVar37 = true;
	}
	if (func_32(iParam0) == 2085633299)
	{
		ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iParam0, &Var0);
		ATTRIBUTE::_0xD962F8579D702DB5();
		iVar29 = 0;
		while (iVar29 < Var0)
		{
			if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(&(Var0.f_1[iVar29]), &Var22))
			{
			}
			else if (-943921969 == Var22.f_1)
			{
				uVar30 = func_33(0, Var22.f_2);
				func_34(Var22.f_2);
				iVar39 = 1;
			}
			else if (-1104847406 == Var22.f_1)
			{
				uVar31 = func_33(2, Var22.f_2);
				func_35(Var22.f_2, 0);
				bVar38 = true;
			}
			else if (381158954 == Var22.f_1)
			{
				uVar32 = func_33(1, Var22.f_2);
				func_36(Var22.f_2);
			}
			else if (-416929031 == Var22.f_1)
			{
				fVar33 = func_37(BUILTIN::TO_FLOAT(Var22.f_2), Var22.f_5);
				func_12(0, fVar33, 1, 1, bVar37);
				iVar39 = 1;
			}
			else if (1857353317 == Var22.f_1)
			{
				fVar34 = func_37(BUILTIN::TO_FLOAT(Var22.f_2), Var22.f_5);
				func_12(2, fVar34, 1, 1, bVar37);
				bVar38 = true;
			}
			else if (1681823811 == Var22.f_1)
			{
				fVar35 = func_37(BUILTIN::TO_FLOAT(Var22.f_2), Var22.f_5);
				func_12(1, fVar35, 1, 1, bVar37);
			}
			else if (2062242710 == Var22.f_1)
			{
				fVar36 = func_38(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_39(19, fVar36, 1, 1);
				iVar39 = 1;
			}
			else if (-826379728 == Var22.f_1)
			{
				fVar36 = func_38(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_39(20, fVar36, 1, 1);
				bVar38 = true;
			}
			else if (-1191740624 == Var22.f_1)
			{
				fVar36 = func_38(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_39(18, fVar36, 1, 1);
			}
			else if (1869697234 == Var22.f_1)
			{
				fVar36 = func_38(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_39(0, fVar36, 1, 1);
				iVar39 = 1;
			}
			else if (1342237631 == Var22.f_1)
			{
				fVar36 = func_38(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_39(2, fVar36, 1, 1);
				bVar38 = true;
			}
			else if (-1240225157 == Var22.f_1)
			{
				fVar36 = func_38(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_39(1, fVar36, 1, 1);
			}
			else if (-816334026 == Var22.f_1)
			{
				func_13(BUILTIN::TO_FLOAT(Var22.f_2), 1);
			}
			iVar29++;
		}
		if (iVar39 || func_31(iParam0, -537818634))
		{
			func_41(func_40(-704089207), 1);
		}
		if (func_31(iParam0, -1457797660))
		{
			func_41(func_40(-1909697259), 1);
		}
		if (bVar38)
		{
			func_41(func_40(704570463), 1);
		}
		if (iParam0 == -241345764 || iParam0 == -1735850413)
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(-1823988672, 1517929953, 1);
		}
		PLAYER::_0x0E1DB1F8F5B561DC(uVar30, uVar32, uVar31, BUILTIN::ROUND((fVar33 / 2f)), BUILTIN::ROUND((fVar35 / 2f)), BUILTIN::ROUND((fVar34 / 2f)));
	}
}

bool func_15(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 2);
}

void func_16(float fParam0, bool bParam1)
{
	func_42((Global_1938998->f_9 + fParam0), bParam1);
}

void func_17(int iParam0)
{
}

void func_18(int iParam0)
{
}

void func_19(int iParam0)
{
}

float func_20(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_26();
	func_43(&iVar0, 0, 0, 0, 1, 0, 0);
	iVar1 = func_44(iParam0, 2);
	if (func_46(iVar0, func_45(iParam0, 2), 1))
	{
		func_47(iParam0, 0, 2);
		iVar1 = 0;
	}
	if (iVar1 >= 2)
	{
		func_30(103, bParam2);
		return 0f;
	}
	func_48(iParam0, func_26(), 2);
	func_47(iParam0, iVar1 + 1, 2);
	return fParam1;
}

float func_21(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_49(2);
	}
	switch (iParam1)
	{
		case 0:
			return &(Global_1954462->f_1331.f_6[iParam0 /*3*/]);
		case 1:
			return &(Global_1954462->f_1465.f_2.f_6[iParam0 /*3*/]);
		default:
			break;
	}
	return -1f;
}

int func_22(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (iParam5 == 2)
	{
		iParam5 = func_49(2);
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (func_50(iVar0, iParam0, fParam1))
	{
		if (bParam2)
		{
			if (fParam1 >= 100f)
			{
				AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
			}
			else
			{
				AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);
			}
		}
		if (bParam3)
		{
			func_51(iParam0, 7000, iParam5);
		}
		func_52(iVar0, iParam0, fParam1);
		func_53(iParam0, fParam1, bParam4, iParam5);
	}
	return 1;
}

float func_23(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_49(1);
	}
	switch (iParam1)
	{
		case 0:
			return &(Global_1954462->f_1331.f_26[iParam0]);
		case 1:
			return &(Global_1954462->f_1465.f_2.f_26[iParam0]);
		default:
			break;
	}
	return -1f;
}

int func_24()
{
	if (Global_1954462->f_1331.f_107 == -15)
	{
		return 1;
	}
	return func_54(Global_1954462->f_1331.f_107, 0);
}

int func_25(float fParam0)
{
	float fVar0;

	fVar0 = fParam0;
	fVar0 = ((2f * fVar0) - 100f);
	return BUILTIN::ROUND(((fVar0 / 100f) * BUILTIN::TO_FLOAT(10)));
}

int func_26()
{
	return &Global_1902688;
}

void func_27(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_55(*uParam0);
	iVar1 = func_56(*uParam0);
	iVar2 = func_57(*uParam0);
	iVar3 = func_58(*uParam0);
	iVar4 = func_59(*uParam0);
	iVar5 = func_60(*uParam0);
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
	iVar6 = func_61(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_61(iVar1, iVar0);
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
	func_62(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

float func_28(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_29(int iParam0, float fParam1, int iParam2)
{
	if (!func_63(iParam0))
	{
		return 0;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_49(2);
	}
	func_64(iParam0, fParam1, iParam2);
	if (!ENTITY::IS_ENTITY_DEAD(Global_1273882->f_8))
	{
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_1273882->f_8, iParam0, BUILTIN::FLOOR(fParam1));
	}
	return 1;
}

void func_30(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_65(iParam0, &iVar0, &iVar1);
	if (!func_66(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_67(iVar0, iVar1);
}

int func_31(int iParam0, int iParam1)
{
	if (!func_68(iParam0, 0))
	{
		return func_70(func_69(iParam0), iParam1);
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

int func_32(int iParam0)
{
	vector3 vVar0;

	if (!func_68(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

float func_33(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;

	if (iParam1 == -1)
	{
		fVar3 = (fVar2 - fVar1);
		return (fVar3 / 2f);
	}
	switch (iParam0)
	{
		case 0:
			fVar1 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(Global_35));
			fVar2 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, 0));
			iVar0 = 50;
			break;
		case 1:
			fVar1 = PED::_0x775A1CA7893AA8B5(Global_35);
			fVar2 = PED::_0xCB42AFE2B613EE55(Global_35);
			iVar0 = 8;
			break;
		case 2:
			fVar1 = PLAYER::_0xA81D24AE0AF99A5E(PLAYER::GET_PLAYER_INDEX());
			fVar2 = PLAYER::_0x592F58BC4D2A2CF3(PLAYER::GET_PLAYER_INDEX(), 0);
			iVar0 = 14;
			break;
	}
	fVar4 = (IntToFloat((iVar0 * iParam1)) + fVar1);
	if (fVar4 > fVar2)
	{
		fVar3 = (fVar2 - fVar1);
	}
	else
	{
		fVar3 = (fVar4 - fVar1);
	}
	return (fVar3 / 2f);
}

void func_34(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = PED::_0x16F2C8C084AB2092(iVar0);
	}
	iVar1 = func_71(2);
	func_72(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_35(int iParam0, bool bParam1)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = 10;
	}
	iVar0 = func_73(2);
	func_74(BUILTIN::TO_FLOAT((iParam0 * iVar0)), 0, bParam1);
}

void func_36(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = PED::_0xFC3B580C4380B5B7(iVar0);
	}
	iVar1 = func_75(2);
	func_76(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

float func_37(float fParam0, float fParam1)
{
	if (fParam1 != 0f)
	{
		return ((fParam1 / 100f) * 100f);
	}
	return ((fParam0 / 8f) * 100f);
}

float func_38(float fParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return (fParam0 * 0.033f);
		case 1:
			return (fParam0 * 2f);
		case 2:
			return (fParam0 * 120f);
		case 3:
			return (fParam0 * 2880f);
		default:
			break;
	}
	return fParam0;
}

int func_39(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	return func_77(iParam0, fParam1, bParam2, iParam3);
}

struct<2> func_40(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

void func_41(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

void func_42(float fParam0, bool bParam1)
{
	if (PED::IS_PED_ON_MOUNT(Global_35) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		if (fParam0 >= func_78())
		{
			Global_1938998->f_9 = (func_78() - 0.01f);
			return;
		}
	}
	if (fParam0 < 0f)
	{
		Global_1938998->f_9 = 0f;
		PED::_0x06D26A96CA1BCA75(Global_35, 10, Global_1938998->f_9, 0);
	}
	else if (fParam0 >= 1f && Global_1938998->f_14)
	{
		Global_1938998->f_9 = 0.99f;
	}
	else if (fParam0 > 1f)
	{
		Global_1938998->f_9 = 1f;
	}
	else
	{
		Global_1938998->f_9 = fParam0;
	}
	if (bParam1)
	{
		Global_1938998->f_12 = 1;
	}
}

void func_43(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = func_55(*iParam0);
	iVar1 = func_56(*iParam0);
	iVar2 = func_57(*iParam0);
	iVar3 = func_58(*iParam0);
	iVar4 = func_59(*iParam0);
	iVar5 = func_60(*iParam0);
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
		iVar7 = func_61(iVar6, iVar0);
		iVar2 = (iVar2 + iVar7);
	}
	iVar1 = (iVar1 - iParam5);
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 = (iVar0 - iParam6);
	func_62(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_44(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_49(2);
	}
	switch (iParam1)
	{
		case 0:
			return (Global_1954462->f_1331.f_6[iParam0 /*3*/])->f_2;
		case 1:
			return (Global_1954462->f_1465.f_2.f_6[iParam0 /*3*/])->f_2;
		default:
			break;
	}
	return -1;
}

int func_45(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_49(2);
	}
	switch (iParam1)
	{
		case 0:
			return (Global_1954462->f_1331.f_6[iParam0 /*3*/])->f_1;
		case 1:
			return (Global_1954462->f_1465.f_2.f_6[iParam0 /*3*/])->f_1;
		default:
			break;
	}
	return -15;
}

bool func_46(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_79(iParam1) || !func_79(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_47(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_49(2);
	}
	switch (iParam2)
	{
		case 0:
			(Global_1954462->f_1331.f_6[iParam0 /*3*/])->f_2 = iParam1;
			break;
		case 1:
			(Global_1954462->f_1465.f_2.f_6[iParam0 /*3*/])->f_2 = iParam1;
			break;
		default:
			break;
	}
}

void func_48(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_49(2);
	}
	switch (iParam2)
	{
		case 0:
			(Global_1954462->f_1331.f_6[iParam0 /*3*/])->f_1 = iParam1;
			break;
		case 1:
			(Global_1954462->f_1465.f_2.f_6[iParam0 /*3*/])->f_1 = iParam1;
			break;
		default:
			break;
	}
}

int func_49(int iParam0)
{
	return func_81(func_80(iParam0));
}

int func_50(int iParam0, int iParam1, float fParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (fParam2 > 100f)
	{
		fParam2 = 100f;
	}
	else if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	ATTRIBUTE::_0xC6258F41D86676E0(iParam0, func_82(iParam1), BUILTIN::CEIL(fParam2));
	return 1;
}

void func_51(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_49(2);
	}
	if (iParam1 > 0)
	{
		iParam1 = (iParam1 + MISC::GET_GAME_TIMER());
	}
	switch (iParam2)
	{
		case 0:
			Global_1954462->f_1331.f_16[iParam0 /*3*/] = iParam1;
			break;
		case 1:
			Global_1954462->f_1465.f_2.f_16[iParam0 /*3*/] = iParam1;
			break;
		default:
			break;
	}
}

void func_52(int iParam0, int iParam1, float fParam2)
{
	char* sVar0;

	sVar0 = func_83(iParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		PED::_0x437C08DB4FEBE2BD(iParam0, func_84(iParam1), fParam2, -1);
	}
}

void func_53(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	var uVar0;

	if (iParam3 == 2)
	{
		iParam3 = func_49(2);
	}
	uVar0 = Global_1273882->f_21;
	func_85(iParam0, fParam1, iParam3);
	if (bParam2)
	{
		func_86(iParam0, uVar0, iParam3);
	}
}

bool func_54(int iParam0, bool bParam1)
{
	return func_46(func_26(), iParam0, bParam1);
}

int func_55(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_87(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_56(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_57(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_58(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_59(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_60(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_61(int iParam0, int iParam1)
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

void func_62(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_88(iParam0, iParam6);
	func_89(iParam0, iParam5);
	func_90(iParam0, iParam4);
	func_91(iParam0, iParam3);
	func_92(iParam0, iParam2);
	func_93(iParam0, iParam1);
}

int func_63(int iParam0)
{
	if (func_94(iParam0))
	{
		return 1;
	}
	else if (func_95(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_64(int iParam0, float fParam1, int iParam2)
{
	if (fParam1 <= 0f)
	{
		return;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_49(1);
	}
	switch (iParam2)
	{
		case 0:
			Global_1954462->f_1331.f_26[iParam0] = fParam1;
			break;
		case 1:
			Global_1954462->f_1465.f_2.f_26[iParam0] = fParam1;
			break;
		default:
			break;
	}
}

void func_65(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

int func_66(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 30)
	{
		return 0;
	}
	if (func_96(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_97(iParam0))
	{
		return 0;
	}
	if (func_98(iParam0))
	{
		return 0;
	}
	if ((Global_1900718->f_67 && !func_99(iParam0, 1)) || func_100(32768))
	{
		if (!func_99(iParam0, 262144) || !Global_1904612->f_8189)
		{
			return 0;
		}
	}
	if (!func_101())
	{
		return 0;
	}
	return 1;
}

void func_67(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904612[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1904612)[iParam0] = uVar0;
}

int func_68(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_69(int iParam0)
{
	return iParam0;
}

int func_70(int iParam0, int iParam1)
{
	if (!func_102(iParam0, 2))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_0x99C6EA66DFE73757(iParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

int func_71(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_49(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1954462->f_1446;
		case 1:
			return Global_1954462->f_1465.f_136;
		default:
			break;
	}
	return -1;
}

void func_72(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1273882->f_8;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	ENTITY::_0x835F131E7DC8F97A(iParam1, fParam0, 0, 0);
}

int func_73(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_49(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1954462->f_1446.f_1;
		case 1:
			return Global_1954462->f_1465.f_136.f_1;
		default:
			break;
	}
	return -1;
}

void func_74(float fParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = PLAYER::PLAYER_ID();
	if (fParam0 > 0f && func_103(iVar0))
	{
		return;
	}
	iVar1 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	if ((PLAYER::_0xB16223CB7DA965F0(iVar0) && fParam0 > 0f) && !bParam2)
	{
		return;
	}
	if (fParam0 == 0f)
	{
		return;
	}
	fVar2 = PLAYER::_0xAB3773E7AA1E9DCC(iVar0);
	if (fParam0 < 0f && bParam1 == 1)
	{
		bParam1 = false;
	}
	if (!bParam1)
	{
		PLAYER::_0x5A498FCA232F71E1(iVar0, 1f);
	}
	if (fParam0 > 0f)
	{
		PLAYER::_0x51345AE20F22C261(iVar0, fParam0, 0, 0, 1);
	}
	else
	{
		PLAYER::_0x200114E99552462B(iVar0, fParam0, 0);
	}
	if (!bParam1)
	{
		PLAYER::_0x5A498FCA232F71E1(iVar0, fVar2);
	}
}

int func_75(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_49(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1954462->f_1446.f_2;
		case 1:
			return Global_1954462->f_1465.f_136.f_2;
		default:
			break;
	}
	return -1;
}

void func_76(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1273882->f_8;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	PED::_0xC3D4B754C0E86B9E(iParam1, fParam0);
}

int func_77(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	char* sVar0;
	int iVar1;

	iVar1 = PLAYER::PLAYER_PED_ID();
	if (fParam1 == -1f)
	{
		if (func_94(iParam0))
		{
			fParam1 = 30f;
		}
		else
		{
			fParam1 = 30f;
		}
	}
	else if (fParam1 <= 0f)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (bParam2)
			{
				sVar0 = func_104(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_34(-1);
			ATTRIBUTE::_0xF6A7C08DF2E28B28(iVar1, iParam0, fParam1, iParam3);
			Global_17173.f_54.f_2438.f_34[0 /*2*/] = fParam1;
			break;
		case 1:
			if (bParam2)
			{
				sVar0 = func_104(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_105(1775828486);
			func_36(-1);
			ATTRIBUTE::_0xF6A7C08DF2E28B28(iVar1, iParam0, fParam1, iParam3);
			Global_17173.f_54.f_2438.f_34[1 /*2*/] = fParam1;
			break;
		case 2:
			if (bParam2)
			{
				sVar0 = func_104(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_35(-1, 0);
			ATTRIBUTE::_0xF6A7C08DF2E28B28(iVar1, iParam0, fParam1, iParam3);
			Global_17173.f_54.f_2438.f_34[2 /*2*/] = fParam1;
			break;
		case 19:
			func_105(350943398);
			func_106(0, 1, 1);
			ATTRIBUTE::_0xF6A7C08DF2E28B28(iVar1, iParam0, fParam1, iParam3);
			(Global_17173.f_54.f_2438.f_34[0 /*2*/])->f_1 = fParam1;
			break;
		case 18:
			func_106(1, 1, 1);
			ATTRIBUTE::_0xF6A7C08DF2E28B28(iVar1, iParam0, fParam1, iParam3);
			(Global_17173.f_54.f_2438.f_34[1 /*2*/])->f_1 = fParam1;
			break;
		case 20:
			func_106(2, 1, 1);
			ATTRIBUTE::_0xF6A7C08DF2E28B28(iVar1, iParam0, fParam1, iParam3);
			(Global_17173.f_54.f_2438.f_34[2 /*2*/])->f_1 = fParam1;
			break;
		default:
			return 0;
	}
	return 1;
}

float func_78()
{
	return 0.75f;
}

int func_79(int iParam0)
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
	iVar0 = func_60(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_59(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_58(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_55(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return 0;
	}
	iVar4 = func_56(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_57(iParam0);
	if (iVar5 < 1 || iVar5 > func_61(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

bool func_80(int iParam0)
{
	return func_107(&(Global_1954462->f_1465), iParam0, 1);
}

int func_81(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_82(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 0;
		case 2:
			return 2;
		default:
			break;
	}
	return 0;
}

char* func_83(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HealthCoreValue";
		case 1:
			return "StaminaCoreValue";
		case 2:
			return "DeadEyeCoreValue";
		default:
			break;
	}
	return "";
}

char* func_84(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "isLowHealthCoreActive";
		case 1:
			return "isLowStaminaCoreActive";
		case 2:
			return "isLowDeadEyeCoreActive";
		default:
			break;
	}
	return "";
}

void func_85(int iParam0, float fParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_49(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1954462->f_1331.f_6[iParam0 /*3*/] = fParam1;
			break;
		case 1:
			Global_1954462->f_1465.f_2.f_6[iParam0 /*3*/] = fParam1;
			break;
		default:
			break;
	}
}

void func_86(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_49(2);
	}
	switch (iParam2)
	{
		case 0:
			(Global_1954462->f_1331.f_16[iParam0 /*3*/])->f_2 = uParam1;
			break;
		case 1:
			(Global_1954462->f_1465.f_2.f_16[iParam0 /*3*/])->f_2 = uParam1;
			break;
		default:
			break;
	}
}

int func_87(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_88(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT((1898 - iParam1), 26));
		*iParam0 |= -2147483648;
	}
	else
	{
		*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT((iParam1 - 1898), 26));
		*iParam0 = (*iParam0 - *iParam0 & -2147483648);
	}
}

void func_89(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_90(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_56(*iParam0);
	iVar1 = func_55(*iParam0);
	if (iParam1 < 1 || iParam1 > func_61(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_91(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_92(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_93(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

int func_94(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 1;
		case 2:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_95(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return 1;
		case 13:
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_96(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(&(Global_17173.f_2563[iParam0]), iParam1);
}

int func_97(int iParam0)
{
	if (func_99(iParam0, 4))
	{
		return 0;
	}
	return 1;
}

int func_98(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if ((Global_1904612->f_31[iParam0 /*9*/])->f_2 & 98304 == 0)
	{
		return 0;
	}
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar0 = 0;
	while (iVar0 < Global_40.f_3327)
	{
		if ((Global_40.f_3327[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if ((Global_1904612->f_31[iParam0 /*9*/])->f_2 & 131072 != 0)
			{
				iVar3 = 2;
			}
			if ((Global_1904612->f_31[iParam0 /*9*/])->f_2 & 524288 != 0)
			{
				iVar3 = 5;
			}
			iVar2 = (&Global_40.f_3327[iVar0 /*3*/] - iVar1);
			if ((Global_40.f_3327[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && (Global_1904612->f_31[iParam0 /*9*/])->f_2 & 32768 != 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_99(int iParam0, int iParam1)
{
	return ((Global_1904612->f_31[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

bool func_100(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

int func_101()
{
	if (!func_108())
	{
		return 0;
	}
	return Global_1904612->f_8187;
}

int func_102(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(iParam0, iParam1);
}

bool func_103(int iParam0)
{
	float fVar0;

	fVar0 = (func_109(iParam0) - PLAYER::_0xDF66A37936D5F3D9(iParam0));
	return fVar0 <= 1f;
}

char* func_104(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PlayerOverpower";
		case 1:
			return "PlayerOverpower";
		case 2:
			return "PlayerOverpower";
		default:
			break;
	}
	return "";
}

void func_105(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<2> Var6[20];

	iVar1 = Global_1138889->f_41657.f_1.f_42;
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar0 = &Global_1138889->f_41657.f_1[iVar2 /*2*/];
		iVar3 = func_110(iVar0, 1);
		if (&Global_1138889->f_30603.f_847[iVar3 /*12*/] == iParam0)
		{
			func_111(iVar0);
			Global_1138889->f_41657.f_1.f_42 = (Global_1138889->f_41657.f_1.f_42 - 1);
		}
		else
		{
			*(Var6[iVar4 /*2*/]) = { *(Global_1138889->f_41657.f_1[iVar2 /*2*/]) };
			iVar4++;
		}
		iVar2++;
	}
	iVar5 = 0;
	while (iVar5 < iVar4)
	{
		*(Global_1138889->f_41657.f_1[iVar5 /*2*/]) = { *(Var6[iVar5 /*2*/]) };
		iVar5++;
	}
}

void func_106(int iParam0, bool bParam1, bool bParam2)
{
	func_22(iParam0, 100f, bParam1, bParam2, 1, 2);
}

bool func_107(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_108()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return 1;
	}
	return 0;
}

float func_109(int iParam0)
{
	return (PLAYER::_0x592F58BC4D2A2CF3(iParam0, 0) - IntToFloat(func_112(2)));
}

int func_110(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2101912686:
			return 13;
		case -2006026692:
			return 166;
		case -1993903481:
			return 124;
		case -1970041458:
			return 142;
		case -1935700575:
			return 136;
		case -1927422497:
			return 127;
		case -1920464018:
			return 58;
		case -1919393558:
			return 27;
		case -1857550353:
			return 163;
		case -1855662261:
			return 55;
		case -1840995238:
			return 15;
		case -1835722213:
			return 88;
		case -1790318144:
			return 106;
		case -1786033368:
			return 62;
		case -1767968552:
			return 86;
		case -1767662471:
			return 32;
		case -1729980669:
			return 108;
		case -1729554078:
			return 49;
		case -1727526861:
			return 109;
		case -1722264360:
			return 18;
		case -1719665775:
			return 37;
		case -1716981503:
			return 107;
		case -1697567574:
			return 72;
		case -1631930150:
			return 161;
		case -1629969648:
			return 164;
		case -1605880447:
			return 120;
		case -1575244501:
			return 61;
		case -1551628748:
			return 74;
		case -1543433893:
			return 70;
		case -1539337723:
			return 121;
		case -1525401254:
			return 64;
		case -1525233154:
			return 47;
		case -1491472827:
			return 94;
		case -1486927560:
			return 112;
		case -1480068681:
			return 50;
		case -1478178768:
			return 148;
		case -1465202595:
			return 104;
		case -1459368569:
			return 116;
		case -1431848307:
			return 76;
		case -1418298797:
			return 155;
		case -1378468884:
			return 60;
		case -1291022662:
			return 117;
		case -1288042557:
			return 19;
		case -1248720641:
			return 7;
		case -1229834518:
			return 89;
		case -1223791123:
			return 79;
		case -1209874968:
			return 45;
		case -1197630873:
			return 153;
		case -1181880939:
			return 80;
		case -1170784825:
			return 38;
		case -1125028284:
			return 137;
		case -1123356036:
			return 147;
		case -1100659165:
			return 6;
		case -1089821002:
			return 85;
		case -1084890102:
			return 162;
		case -1080696981:
			return 92;
		case -1010031245:
			return 39;
		case -992423055:
			return 157;
		case -979738281:
			return 77;
		case -931294997:
			return 111;
		case -920221586:
			return 110;
		case -900877140:
			return 30;
		case -885737328:
			return 114;
		case -885646667:
			return 67;
		case -837774766:
			return 78;
		case -799500009:
			return 145;
		case -751329575:
			return 139;
		case -711254121:
			return 132;
		case -660114191:
			return 31;
		case -649929946:
			return 53;
		case -636552746:
			return 123;
		case -587737142:
			return 71;
		case -546870456:
			return 159;
		case -521477124:
			return 82;
		case -481051896:
			return 135;
		case -425216802:
			return 17;
		case -415437740:
			return 103;
		case -415250715:
			return 144;
		case -392183396:
			return 90;
		case -343572565:
			return 21;
		case -286632741:
			return 8;
		case -267135864:
			return 138;
		case -233204301:
			return 105;
		case -203268054:
			return 143;
		case -161625840:
			return 167;
		case -126580932:
			return 0;
		case -117284255:
			return 122;
		case -60432888:
			return 44;
		case -56802666:
			return 102;
		case -47513954:
			return 99;
		case -35033037:
			return 133;
		case -33431232:
			return 12;
		case -29822088:
			return 40;
		case 0:
			return 1;
		case 1213703:
			return 154;
		case 54499763:
			return 98;
		case 111084081:
			return 56;
		case 114587291:
			return 29;
		case 149216078:
			return 57;
		case 168336706:
			return 149;
		case 173401469:
			return 100;
		case 180714777:
			return 81;
		case 268103762:
			return 97;
		case 282858309:
			return 171;
		case 320758674:
			return 158;
		case 352539363:
			return 169;
		case 398279342:
			return 34;
		case 408582472:
			return 5;
		case 420477860:
			return 25;
		case 509781427:
			return 93;
		case 550487527:
			return 35;
		case 576694808:
			return 165;
		case 638586808:
			return 118;
		case 659100749:
			return 59;
		case 666050502:
			return 65;
		case 698214003:
			return 2;
		case 713106899:
			return 36;
		case 780689752:
			return 3;
		case 791791441:
			return 125;
		case 797908556:
			return 42;
		case 798283666:
			return 141;
		case 807983049:
			return 150;
		case 839199173:
			return 91;
		case 846387993:
			return 14;
		case 852774198:
			return 113;
		case 878491929:
			return 33;
		case 887717126:
			return 66;
		case 926420921:
			return 51;
		case 946848176:
			return 68;
		case 952755846:
			return 24;
		case 955999834:
			return 134;
		case 956867472:
			return 9;
		case 1036630721:
			return 10;
		case 1037792287:
			return 140;
		case 1052684812:
			return 87;
		case 1075856357:
			return 95;
		case 1078589127:
			return 46;
		case 1095779900:
			return 22;
		case 1110815339:
			return 152;
		case 1138017610:
			return 11;
		case 1156950836:
			return 83;
		case 1195903441:
			return 52;
		case 1278022357:
			return 48;
		case 1323028278:
			return 41;
		case 1374979106:
			return 28;
		case 1405624312:
			return 146;
		case 1444077748:
			return 23;
		case 1498983922:
			return 84;
		case 1554410187:
			return 73;
		case 1585362808:
			return 16;
		case 1614000521:
			return 170;
		case 1636352616:
			return 151;
		case 1662680949:
			return 168;
		case 1698995037:
			return 4;
		case 1769731136:
			return 115;
		case 1801131110:
			return 75;
		case 1806354060:
			return 96;
		case 1811663962:
			return 131;
		case 1828803907:
			return 20;
		case 1829805500:
			return 54;
		case 1830494920:
			return 101;
		case 1838787462:
			return 129;
		case 1899963938:
			return 63;
		case 1900141702:
			return 156;
		case 1903067887:
			return 126;
		case 1907663129:
			return 43;
		case 2040423027:
			return 128;
		case 2050123975:
			return 130;
		case 2096770678:
			return 119;
		case 2110112797:
			return 69;
		case 2119170919:
			return 160;
		case 2132307595:
			return 26;
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

int func_111(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_113(iParam0))
	{
		return 0;
	}
	iVar0 = func_110(iParam0, 1);
	if (!func_114(&(Global_1138889->f_30603.f_847[iVar0 /*12*/])))
	{
		return 1;
	}
	iVar3 = func_115(&(Global_1138889->f_30603.f_847[iVar0 /*12*/]), 1);
	iVar4 = 0;
	while (iVar4 < (Global_1138889->f_30603[iVar3 /*6*/])->f_5)
	{
		iVar1 = Global_1138889->f_30603[iVar3 /*6*/][iVar4];
		switch (func_116(iParam0, iVar1))
		{
			case 0:
				func_117(iVar1, iParam0, iVar4);
				break;
			case 1:
				iVar5 = 0;
				while (iVar5 < Global_1138889->f_30603.f_10924)
				{
					if (&Global_1138889->f_30603.f_8871[iVar5 /*3*/] != iVar1 || (Global_1138889->f_30603.f_8871[iVar5 /*3*/])->f_1 != iParam0)
					{
					}
					else
					{
						func_117(iVar1, iParam0, iVar4);
						func_118(Global_1138889->f_30603.f_8871[iVar5 /*3*/]);
						Global_1138889->f_30603.f_10924 = (Global_1138889->f_30603.f_10924 - 1);
						*(Global_1138889->f_30603.f_8871[iVar5 /*3*/]) = { *(Global_1138889->f_30603.f_8871[Global_1138889->f_30603.f_10924 /*3*/]) };
						func_118(Global_1138889->f_30603.f_8871[Global_1138889->f_30603.f_10924 /*3*/]);
					}
					else
					{
						iVar5++;
					}
				}
				break;
			case 2:
				Jump @554; //curOff = 357
				iVar2 = func_119(iVar1, 1);
				func_120(iVar2, -1);
				if ((Global_1138889->f_30603.f_2900[iVar2 /*31*/])->f_29 <= 0)
				{
					func_121(iVar2, 0);
					iVar6 = 0;
					while (iVar6 < Global_1138889->f_30603.f_8870)
					{
						if (&Global_1138889->f_30603.f_8683[iVar6] != iVar1)
						{
						}
						else
						{
							Global_1138889->f_30603.f_8683[iVar6] = -1;
							Global_1138889->f_30603.f_8870 = (Global_1138889->f_30603.f_8870 - 1);
							Global_1138889->f_30603.f_8683[iVar6] = &Global_1138889->f_30603.f_8683[Global_1138889->f_30603.f_8870];
							Global_1138889->f_30603.f_8683[Global_1138889->f_30603.f_8870] = -1;
						}
						else
						{
							iVar6++;
						}
					}
				}
				iVar4++;
			}
			Global_1138889->f_30603.f_847[iVar0 /*12*/] = -1;
			func_122(Global_1138889->f_30603.f_847[iVar0 /*12*/]);
			return 1;
		}

int func_112(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_71(2) * 2;
		case 1:
			return func_75(2) * 2;
		case 2:
			return func_73(2) * 2;
		default:
			break;
	}
	return -1;
}

int func_113(int iParam0)
{
	int iVar0;

	iVar0 = func_110(iParam0, 1);
	if (iVar0 < 2 || iVar0 >= 171)
	{
		return 0;
	}
	return 1;
}

int func_114(int iParam0)
{
	int iVar0;

	iVar0 = func_115(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 141)
	{
		return 0;
	}
	return 1;
}

int func_115(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2137819446:
			return 100;
		case -2131931188:
			return 127;
		case -2130179962:
			return 63;
		case -2059502051:
			return 65;
		case -2056449621:
			return 93;
		case -1973221270:
			return 64;
		case -1969715419:
			return 35;
		case -1968787770:
			return 6;
		case -1957895818:
			return 56;
		case -1952291530:
			return 130;
		case -1950424573:
			return 54;
		case -1910888845:
			return 110;
		case -1883405573:
			return 78;
		case -1844803100:
			return 80;
		case -1831687141:
			return 62;
		case -1810408560:
			return 73;
		case -1805785047:
			return 41;
		case -1759910473:
			return 25;
		case -1756646040:
			return 92;
		case -1741565123:
			return 47;
		case -1609480552:
			return 61;
		case -1596526341:
			return 3;
		case -1573606823:
			return 49;
		case -1510695159:
			return 138;
		case -1504620904:
			return 107;
		case -1462866101:
			return 111;
		case -1405836475:
			return 55;
		case -1360021450:
			return 9;
		case -1356583879:
			return 128;
		case -1242362177:
			return 46;
		case -1235458416:
			return 74;
		case -1234968784:
			return 69;
		case -1234548949:
			return 7;
		case -1143906885:
			return 122;
		case -1140308479:
			return 134;
		case -1105699593:
			return 141;
		case -1008191715:
			return 1;
		case -985141745:
			return 79;
		case -974857798:
			return 131;
		case -914097888:
			return 123;
		case -900341092:
			return 133;
		case -859661758:
			return 60;
		case -810885450:
			return 40;
		case -750368411:
			return 48;
		case -691826426:
			return 77;
		case -608746625:
			return 17;
		case -567710817:
			return 2;
		case -565327488:
			return 72;
		case -559775780:
			return 117;
		case -549372097:
			return 59;
		case -455491084:
			return 85;
		case -447950391:
			return 94;
		case -418060375:
			return 4;
		case -391691334:
			return 68;
		case -375368707:
			return 58;
		case -357713093:
			return 119;
		case -336340230:
			return 115;
		case -309456186:
			return 10;
		case -300915357:
			return 136;
		case -252777454:
			return 126;
		case -190717545:
			return 30;
		case -179898515:
			return 118;
		case -179343615:
			return 140;
		case -132268497:
			return 132;
		case -120658935:
			return 67;
		case -97080319:
			return 43;
		case -93340399:
			return 106;
		case -2338369:
			return 39;
		case -1:
			return 0;
		case 18275459:
			return 8;
		case 47725914:
			return 11;
		case 151887407:
			return 18;
		case 153569762:
			return 44;
		case 163503896:
			return 101;
		case 183566846:
			return 15;
		case 193887912:
			return 113;
		case 225804550:
			return 124;
		case 267361268:
			return 86;
		case 272084311:
			return 71;
		case 312483235:
			return 29;
		case 349431355:
			return 105;
		case 350943398:
			return 102;
		case 383280474:
			return 12;
		case 467901857:
			return 51;
		case 508502713:
			return 125;
		case 548902645:
			return 109;
		case 591249118:
			return 28;
		case 611341556:
			return 16;
		case 618168626:
			return 26;
		case 620773281:
			return 98;
		case 668358831:
			return 139;
		case 677513315:
			return 45;
		case 713112284:
			return 50;
		case 722162219:
			return 88;
		case 730253571:
			return 36;
		case 731266401:
			return 90;
		case 785001351:
			return 135;
		case 793035862:
			return 81;
		case 802887669:
			return 114;
		case 828060856:
			return 38;
		case 837742789:
			return 70;
		case 900184247:
			return 21;
		case 924932702:
			return 14;
		case 969398724:
			return 89;
		case 1014273190:
			return 96;
		case 1033330939:
			return 82;
		case 1034286944:
			return 87;
		case 1123546272:
			return 104;
		case 1138545953:
			return 20;
		case 1157170123:
			return 75;
		case 1159895828:
			return 31;
		case 1296512587:
			return 97;
		case 1377989036:
			return 19;
		case 1423325819:
			return 32;
		case 1476796894:
			return 24;
		case 1486559056:
			return 120;
		case 1493749872:
			return 112;
		case 1500545235:
			return 129;
		case 1507470319:
			return 83;
		case 1543468593:
			return 137;
		case 1568867811:
			return 57;
		case 1625043854:
			return 22;
		case 1667258255:
			return 33;
		case 1695199279:
			return 121;
		case 1699722938:
			return 13;
		case 1746978940:
			return 84;
		case 1764814366:
			return 95;
		case 1767031434:
			return 116;
		case 1775828486:
			return 103;
		case 1830439946:
			return 23;
		case 1851839077:
			return 99;
		case 1860260195:
			return 66;
		case 1885285188:
			return 52;
		case 1905466026:
			return 27;
		case 1925734249:
			return 76;
		case 1938325642:
			return 5;
		case 2079700825:
			return 42;
		case 2081475118:
			return 37;
		case 2093509505:
			return 34;
		case 2100718034:
			return 108;
		case 2117355246:
			return 53;
		case 2146493981:
			return 91;
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

int func_116(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_123(iParam0);
	iVar1 = &Global_1273882;
	iVar2 = func_119(iParam1, 1);
	switch ((Global_1138889->f_30603.f_2900[iVar2 /*31*/])->f_1)
	{
		case -1912291748:
			if (iVar1 == iVar0)
			{
				return 0;
			}
			else
			{
				return 2;
			}
			break;
		case joaat("duration"):
		case -594821844:
		case 348502922:
		case 1002704651:
		case 1270499458:
			return 1;
		default:
			if (iVar1 == iVar0)
			{
				return 1;
			}
			break;
	}
	return 2;
}

int func_117(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	vector3 vVar1;

	if (!func_113(iParam1))
	{
		return 0;
	}
	if (!func_124(iParam0))
	{
		return 0;
	}
	iVar0 = func_119(iParam0, 1);
	func_125(iParam0, iParam1, iParam2);
	if (func_126(*(Global_1138889->f_30603.f_2900[iVar0 /*31*/])) && func_127(iParam0, (Global_1138889->f_30603.f_2900[iVar0 /*31*/])->f_4))
	{
		vVar1 = { func_128((Global_1138889->f_30603.f_2900[iVar0 /*31*/])->f_4) };
		if (func_129(vVar1))
		{
			if (func_130(vVar1.x, vVar1.y, vVar1.z))
			{
				func_131((Global_1138889->f_30603.f_2900[iVar0 /*31*/])->f_4, vVar1.x, vVar1.y, vVar1.z);
			}
			else
			{
				func_132((Global_1138889->f_30603.f_2900[iVar0 /*31*/])->f_4);
			}
		}
		else
		{
			func_132((Global_1138889->f_30603.f_2900[iVar0 /*31*/])->f_4);
		}
	}
	return 1;
}

void func_118(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = -1;
}

int func_119(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2139291255:
			return 145;
		case -2133203822:
			return 108;
		case -2119961771:
			return 90;
		case -2117138640:
			return 79;
		case -2115524796:
			return 60;
		case -2108980762:
			return 137;
		case -2088744988:
			return 91;
		case -2056483403:
			return 75;
		case -2008161946:
			return 26;
		case -2006179687:
			return 170;
		case -1961023994:
			return 92;
		case -1958950493:
			return 183;
		case -1954641284:
			return 28;
		case -1946267644:
			return 130;
		case -1925826694:
			return 49;
		case -1920322236:
			return 22;
		case -1886192107:
			return 55;
		case -1854279248:
			return 6;
		case -1853627206:
			return 134;
		case -1851126253:
			return 29;
		case -1847886830:
			return 16;
		case -1841577353:
			return 112;
		case -1840959475:
			return 106;
		case -1808210911:
			return 30;
		case -1803458707:
			return 8;
		case -1761885354:
			return 111;
		case -1749044999:
			return 96;
		case -1698597704:
			return 45;
		case -1631537135:
			return 63;
		case -1599892133:
			return 38;
		case -1514337705:
			return 177;
		case -1498884346:
			return 151;
		case -1448841146:
			return 50;
		case -1445919747:
			return 117;
		case -1441068914:
			return 39;
		case -1426414385:
			return 172;
		case -1421504146:
			return 109;
		case -1419242781:
			return 33;
		case -1394912816:
			return 186;
		case -1378028573:
			return 27;
		case -1370534631:
			return 110;
		case -1327315394:
			return 1;
		case -1311380047:
			return 46;
		case -1299791944:
			return 2;
		case -1280685390:
			return 132;
		case -1268916163:
			return 119;
		case -1256990268:
			return 76;
		case -1139172958:
			return 61;
		case -1112015628:
			return 163;
		case -1094465110:
			return 47;
		case -1038422902:
			return 74;
		case -1011126213:
			return 31;
		case -964953325:
			return 123;
		case -955252868:
			return 124;
		case -932897324:
			return 11;
		case -931584677:
			return 103;
		case -925634234:
			return 21;
		case -750441842:
			return 174;
		case -649515024:
			return 142;
		case -624920400:
			return 81;
		case -612675573:
			return 148;
		case -572117096:
			return 182;
		case -562496675:
			return 57;
		case -562150430:
			return 171;
		case -560965516:
			return 48;
		case -554207528:
			return 59;
		case -539762089:
			return 97;
		case -529396121:
			return 175;
		case -454200664:
			return 104;
		case -440727241:
			return 19;
		case -423133485:
			return 133;
		case -403292810:
			return 113;
		case -398496662:
			return 23;
		case -343145237:
			return 155;
		case -342633876:
			return 5;
		case -334674962:
			return 13;
		case -332283977:
			return 66;
		case -306011710:
			return 4;
		case -280832639:
			return 51;
		case -276166656:
			return 162;
		case -269291543:
			return 68;
		case -206787059:
			return 35;
		case -164741307:
			return 105;
		case -158245263:
			return 41;
		case -147416760:
			return 150;
		case -97000889:
			return 86;
		case -91604267:
			return 159;
		case -1:
			return 0;
		case 25589062:
			return 56;
		case 39330853:
			return 125;
		case 78014060:
			return 9;
		case 81243326:
			return 69;
		case 141777963:
			return 15;
		case 183131704:
			return 167;
		case 200623432:
			return 64;
		case 221495846:
			return 165;
		case 224471061:
			return 98;
		case 233412256:
			return 77;
		case 279713143:
			return 161;
		case 285724035:
			return 54;
		case 302482713:
			return 136;
		case 347710188:
			return 89;
		case 350341162:
			return 127;
		case 447464746:
			return 129;
		case 570385280:
			return 185;
		case 593083875:
			return 80;
		case 639606025:
			return 70;
		case 654960265:
			return 95;
		case 668064801:
			return 184;
		case 671416267:
			return 107;
		case 673708797:
			return 139;
		case 694721787:
			return 20;
		case 702532569:
			return 82;
		case 720207812:
			return 168;
		case 724367341:
			return 65;
		case 726043209:
			return 58;
		case 728769635:
			return 83;
		case 756791452:
			return 149;
		case 763061271:
			return 18;
		case 775646007:
			return 102;
		case 783509408:
			return 160;
		case 794883372:
			return 176;
		case 805902559:
			return 84;
		case 817456409:
			return 100;
		case 835146902:
			return 181;
		case 841152146:
			return 93;
		case 886162534:
			return 131;
		case 937140932:
			return 173;
		case 997052462:
			return 152;
		case 1034295275:
			return 17;
		case 1040501041:
			return 122;
		case 1093424641:
			return 115;
		case 1139016431:
			return 34;
		case 1144080006:
			return 32;
		case 1171151366:
			return 43;
		case 1175961229:
			return 138;
		case 1193587137:
			return 166;
		case 1201719505:
			return 42;
		case 1203687692:
			return 10;
		case 1208331227:
			return 12;
		case 1211076549:
			return 73;
		case 1265311313:
			return 36;
		case 1268462011:
			return 37;
		case 1294394742:
			return 179;
		case 1295163466:
			return 114;
		case 1300622865:
			return 99;
		case 1312155508:
			return 144;
		case 1324420970:
			return 25;
		case 1328995848:
			return 88;
		case 1336349861:
			return 143;
		case 1336429519:
			return 140;
		case 1390582854:
			return 94;
		case 1413720692:
			return 158;
		case 1433853218:
			return 85;
		case 1452940977:
			return 87;
		case 1480202237:
			return 178;
		case 1482822775:
			return 146;
		case 1514854451:
			return 180;
		case 1522457772:
			return 147;
		case 1523275824:
			return 62;
		case 1524301922:
			return 78;
		case 1557116130:
			return 126;
		case 1557362410:
			return 116;
		case 1578015076:
			return 72;
		case 1578708778:
			return 67;
		case 1596748830:
			return 101;
		case 1608803012:
			return 128;
		case 1644017723:
			return 153;
		case 1687654048:
			return 71;
		case 1704907062:
			return 169;
		case 1726722300:
			return 135;
		case 1744707601:
			return 3;
		case 1746613639:
			return 121;
		case 1767173923:
			return 141;
		case 1798083308:
			return 24;
		case 1813411238:
			return 157;
		case 1835150954:
			return 40;
		case 1903955831:
			return 7;
		case 1913593527:
			return 53;
		case 1930815945:
			return 118;
		case 1938151130:
			return 44;
		case 1976949991:
			return 156;
		case 2028487040:
			return 52;
		case 2051020894:
			return 164;
		case 2081856931:
			return 120;
		case 2113464199:
			return 154;
		case 2126590447:
			return 14;
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

void func_120(int iParam0, int iParam1)
{
	(Global_1138889->f_30603.f_2900[iParam0 /*31*/])->f_29 = ((Global_1138889->f_30603.f_2900[iParam0 /*31*/])->f_29 + iParam1);
}

void func_121(int iParam0, int iParam1)
{
	(Global_1138889->f_30603.f_2900[iParam0 /*31*/])->f_29 = iParam1;
}

void func_122(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_1[iVar0 /*2*/] = 0;
		(uParam0->f_1[iVar0 /*2*/])->f_1 = 0;
		iVar0++;
	}
}

int func_123(int iParam0)
{
	if (func_133(iParam0))
	{
		return (func_134(iParam0) % 32);
	}
	return &Global_1273882;
}

int func_124(int iParam0)
{
	int iVar0;

	iVar0 = func_119(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 186)
	{
		return 0;
	}
	return 1;
}

int func_125(int iParam0, int iParam1, int iParam2)
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

	iVar0 = func_110(iParam1, 1);
	iVar1 = func_119(iParam0, 1);
	iVar2 = func_115(&(Global_1138889->f_30603.f_847[iVar0 /*12*/]), 1);
	if (Global_1138889->f_30603[iVar2 /*6*/][iParam2] != iParam0)
	{
		return 0;
	}
	if (!&(Global_1138889->f_30603.f_847[iVar0 /*12*/])->f_1[iParam2 /*2*/])
	{
		return 1;
	}
	(Global_1138889->f_30603.f_847[iVar0 /*12*/])->f_1[iParam2 /*2*/] = 0;
	iVar4 = 0;
	while (iVar4 < (Global_1138889->f_30603.f_2900[iVar1 /*31*/])->f_16)
	{
		iVar3 = &(Global_1138889->f_30603.f_2900[iVar1 /*31*/])->f_6[iVar4 /*3*/];
		iVar5 = func_135(iVar3, 1);
		if (!func_136(iVar3))
		{
		}
		else
		{
			(Global_1138889->f_2001[iVar5 /*192*/])->f_1[iVar1] = (&(Global_1138889->f_2001[iVar5 /*192*/])->f_1[iVar1] - 1);
			(Global_1138889->f_2001[iVar5 /*192*/])->f_188 = ((Global_1138889->f_2001[iVar5 /*192*/])->f_188 - func_137((Global_1138889->f_30603.f_2900[iVar1 /*31*/])->f_6[iVar4 /*3*/]));
			func_138(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < (Global_1138889->f_30603.f_2900[iVar1 /*31*/])->f_28)
	{
		iVar6 = &(Global_1138889->f_30603.f_2900[iVar1 /*31*/])->f_17[iVar7 /*2*/];
		if (!func_139(iVar6))
		{
		}
		else
		{
			iVar8 = func_140(iVar6, 1);
			(*Global_1138889->f_18706[iVar8 /*195*/])[iVar1] = (Global_1138889->f_18706[iVar8 /*195*/][iVar1] - 1);
			if (Global_1138889->f_18706[iVar8 /*195*/][iVar1] <= 0)
			{
				MISC::_0xB909149F2BB5F6DA(&((Global_1138889->f_18706[iVar8 /*195*/])->f_187), iVar1);
			}
			if (!MISC::_0x80E9C316EF84DD81(&((Global_1138889->f_18706[iVar8 /*195*/])->f_187)))
			{
				(Global_1138889->f_18706[iVar8 /*195*/])->f_194 = 0;
				func_141(iVar6);
			}
		}
		iVar7++;
	}
	return 1;
}

bool func_126(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
{
	return Param0.f_4 != 0;
}

bool func_127(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_124(iParam0))
	{
		return false;
	}
	if (!func_142(iParam1))
	{
		return false;
	}
	iVar0 = func_143(iParam1, 1);
	return &Global_1138889->f_30603.f_8667[iVar0 /*3*/] == iParam0;
}

Vector3 func_128(int iParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = func_144(iParam0);
	if (iVar0 == -1)
	{
		vVar1 = -1;
		vVar1.f_2 = -1;
		return vVar1;
	}
	return *(Global_1138889->f_30603.f_8871[iVar0 /*3*/]);
}

int func_129(vector3 vParam0)
{
	if (!func_124(vParam0.x))
	{
		return 0;
	}
	if (!func_113(vParam0.y))
	{
		return 0;
	}
	if (!func_145(vParam0.z))
	{
		return 0;
	}
	return 1;
}

int func_130(int iParam0, int iParam1, int iParam2)
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

	iVar0 = func_110(iParam1, 1);
	iVar1 = func_119(iParam0, 1);
	iVar2 = func_115(&(Global_1138889->f_30603.f_847[iVar0 /*12*/]), 1);
	if (Global_1138889->f_30603[iVar2 /*6*/][iParam2] != iParam0)
	{
		return 0;
	}
	((Global_1138889->f_30603.f_847[iVar0 /*12*/])->f_1[iParam2 /*2*/])->f_1 = Global_1273882->f_21;
	if (&(Global_1138889->f_30603.f_847[iVar0 /*12*/])->f_1[iParam2 /*2*/])
	{
		return 1;
	}
	(Global_1138889->f_30603.f_847[iVar0 /*12*/])->f_1[iParam2 /*2*/] = 1;
	iVar4 = 0;
	while (iVar4 < (Global_1138889->f_30603.f_2900[iVar1 /*31*/])->f_16)
	{
		iVar3 = &(Global_1138889->f_30603.f_2900[iVar1 /*31*/])->f_6[iVar4 /*3*/];
		iVar5 = func_135(iVar3, 1);
		if (!func_136(iVar3))
		{
		}
		else
		{
			(Global_1138889->f_2001[iVar5 /*192*/])->f_1[iVar1] = &(Global_1138889->f_2001[iVar5 /*192*/])->f_1[iVar1] + 1;
			(Global_1138889->f_2001[iVar5 /*192*/])->f_188 = ((Global_1138889->f_2001[iVar5 /*192*/])->f_188 + func_137((Global_1138889->f_30603.f_2900[iVar1 /*31*/])->f_6[iVar4 /*3*/]));
			func_146(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < (Global_1138889->f_30603.f_2900[iVar1 /*31*/])->f_28)
	{
		iVar6 = &(Global_1138889->f_30603.f_2900[iVar1 /*31*/])->f_17[iVar7 /*2*/];
		if (!func_139(iVar6))
		{
		}
		else if (!func_147((Global_1138889->f_30603.f_2900[iVar1 /*31*/])->f_17[iVar7 /*2*/]))
		{
		}
		else
		{
			iVar8 = func_140(iVar6, 1);
			(*Global_1138889->f_18706[iVar8 /*195*/])[iVar1] = Global_1138889->f_18706[iVar8 /*195*/][iVar1] + 1;
			MISC::_0xE84AAC1B22A73E99(&((Global_1138889->f_18706[iVar8 /*195*/])->f_187), iVar1);
			if (!(Global_1138889->f_18706[iVar8 /*195*/])->f_194)
			{
				(Global_1138889->f_18706[iVar8 /*195*/])->f_194 = 1;
				func_148(iVar6);
			}
		}
		iVar7++;
	}
	func_149((Global_1138889->f_30603.f_2900[iVar1 /*31*/])->f_2);
	return 1;
}

void func_131(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_142(iParam0))
	{
		return;
	}
	iVar0 = func_143(iParam0, 1);
	if (!func_124(iParam1))
	{
		return;
	}
	if (!func_113(iParam2))
	{
		return;
	}
	if (!func_145(iParam3))
	{
		return;
	}
	Global_1138889->f_30603.f_8667[iVar0 /*3*/] = iParam1;
	(Global_1138889->f_30603.f_8667[iVar0 /*3*/])->f_1 = iParam2;
	(Global_1138889->f_30603.f_8667[iVar0 /*3*/])->f_2 = iParam3;
}

void func_132(int iParam0)
{
	int iVar0;

	if (!func_142(iParam0))
	{
		return;
	}
	iVar0 = func_143(iParam0, 1);
	Global_1138889->f_30603.f_8667[iVar0 /*3*/] = -1;
	(Global_1138889->f_30603.f_8667[iVar0 /*3*/])->f_1 = 0;
	(Global_1138889->f_30603.f_8667[iVar0 /*3*/])->f_2 = -1;
}

int func_133(int iParam0)
{
	int iVar0;

	iVar0 = func_110(iParam0, 1);
	if (iVar0 >= 2 && iVar0 <= 129)
	{
		return 1;
	}
	return 0;
}

int func_134(int iParam0)
{
	int iVar0;

	iVar0 = func_110(iParam0, 1);
	if (func_133(iParam0))
	{
		return (iVar0 - 2);
	}
	else if (func_150(iParam0))
	{
		return (iVar0 - 130);
	}
	else if (func_151(iParam0))
	{
		return (iVar0 - 161);
	}
	else if (func_152(iParam0))
	{
		return (iVar0 - 162);
	}
	else if (func_153(iParam0))
	{
		return (iVar0 - 170);
	}
	else if (func_154(iParam0))
	{
		return (iVar0 - 150);
	}
	return -1;
}

int func_135(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1988557796:
			return 49;
		case -1936069272:
			return 47;
		case -1926692092:
			return 42;
		case -1846416021:
			return 58;
		case -1721745367:
			return 2;
		case -1701192079:
			return 41;
		case -1659620438:
			return 50;
		case -1607530002:
			return 61;
		case -1589052195:
			return 37;
		case -1575020444:
			return 86;
		case -1572802418:
			return 67;
		case -1514969696:
			return 74;
		case -1397050499:
			return 53;
		case -1349331938:
			return 43;
		case -1345921497:
			return 29;
		case -1309904053:
			return 22;
		case -1290490489:
			return 7;
		case -1202225775:
			return 56;
		case -1080116020:
			return 23;
		case -1079033682:
			return 46;
		case -1059185085:
			return 25;
		case -1003690472:
			return 51;
		case -851757466:
			return 64;
		case -744806636:
			return 52;
		case -516489227:
			return 11;
		case -514416345:
			return 63;
		case -484540420:
			return 36;
		case -483049716:
			return 71;
		case -400566333:
			return 14;
		case -391623459:
			return 69;
		case -374018223:
			return 59;
		case -349428415:
			return 39;
		case -231535884:
			return 15;
		case -201802680:
			return 1;
		case -85606741:
			return 62;
		case -77989269:
			return 76;
		case -1:
			return 0;
		case 66478954:
			return 85;
		case 146438590:
			return 83;
		case 198507096:
			return 68;
		case 222365748:
			return 78;
		case 295732030:
			return 40;
		case 340029732:
			return 66;
		case 374652900:
			return 82;
		case 410940916:
			return 84;
		case 515706097:
			return 5;
		case 527883710:
			return 44;
		case 549685826:
			return 60;
		case 641300611:
			return 81;
		case 696211072:
			return 30;
		case 778435476:
			return 19;
		case 808428606:
			return 4;
		case 854463919:
			return 79;
		case 857703729:
			return 48;
		case 874892169:
			return 87;
		case 886907851:
			return 16;
		case 995847993:
			return 65;
		case 1061744811:
			return 6;
		case 1149992366:
			return 27;
		case 1221256507:
			return 8;
		case 1247001946:
			return 72;
		case 1275912274:
			return 45;
		case 1333289277:
			return 20;
		case 1341193408:
			return 10;
		case 1447875596:
			return 75;
		case 1495919075:
			return 70;
		case 1509485650:
			return 17;
		case 1546732394:
			return 34;
		case 1572090083:
			return 55;
		case 1608132015:
			return 38;
		case 1664203120:
			return 32;
		case 1679987408:
			return 54;
		case 1728485678:
			return 28;
		case 1742416595:
			return 3;
		case 1766148221:
			return 73;
		case 1768495249:
			return 21;
		case 1900095956:
			return 18;
		case 1946296046:
			return 12;
		case 1968069853:
			return 24;
		case 1997267529:
			return 31;
		case 2000631014:
			return 77;
		case 2019620375:
			return 57;
		case 2037894795:
			return 9;
		case 2048982041:
			return 33;
		case 2063781084:
			return 13;
		case 2082272090:
			return 35;
		case 2089824257:
			return 26;
		case 2128780735:
			return 80;
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

int func_136(int iParam0)
{
	int iVar0;

	iVar0 = func_135(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 87)
	{
		return 0;
	}
	return 1;
}

float func_137(var uParam0)
{
	var uVar0;

	if (uParam0->f_2 != 0)
	{
		uVar0 = func_155(794259616, uParam0->f_2, uParam0->f_1, "");
		return uVar0;
	}
	return uParam0->f_1;
}

void func_138(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_136(iParam0))
	{
		return;
	}
	iVar0 = func_135(iParam0, 1);
	if (!func_156(&(Global_1138889->f_2001[iVar0 /*192*/])))
	{
		return;
	}
	(*(*Global_1138889)[&Global_1138889->f_2001[iVar0 /*192*/] /*94*/])[iVar0] = ((*Global_1138889)[&Global_1138889->f_2001[iVar0 /*192*/] /*94*/][iVar0] - 1);
	if ((*Global_1138889)[&Global_1138889->f_2001[iVar0 /*192*/] /*94*/][iVar0] > 0)
	{
		return;
	}
	(*(*Global_1138889)[&Global_1138889->f_2001[iVar0 /*192*/] /*94*/])[iVar0] = 0;
	(Global_1138889->f_2001[iVar0 /*192*/])->f_191 = 0;
	if (!func_157((Global_1138889->f_2001[iVar0 /*192*/])->f_190))
	{
		return;
	}
	iVar1 = func_158((Global_1138889->f_2001[iVar0 /*192*/])->f_190, 1);
	((*Global_1138889)[&Global_1138889->f_2001[iVar0 /*192*/] /*94*/])->f_88[iVar1] = (&((*Global_1138889)[&Global_1138889->f_2001[iVar0 /*192*/] /*94*/])->f_88[iVar1] - 1);
	if (&((*Global_1138889)[&Global_1138889->f_2001[iVar0 /*192*/] /*94*/])->f_88[iVar1] > 0)
	{
		return;
	}
	iVar2 = 0;
	while (iVar2 < (Global_1138889->f_41529[iVar1 /*25*/])->f_23)
	{
		if (Global_1138889->f_41529[iVar1 /*25*/][iVar2] != &Global_1138889->f_2001[iVar0 /*192*/])
		{
		}
		else
		{
			(*Global_1138889->f_41529[iVar1 /*25*/])[iVar2] = -1;
			(Global_1138889->f_41529[iVar1 /*25*/])->f_23 = ((Global_1138889->f_41529[iVar1 /*25*/])->f_23 - 1);
			(*Global_1138889->f_41529[iVar1 /*25*/])[iVar2] = Global_1138889->f_41529[iVar1 /*25*/][(Global_1138889->f_41529[iVar1 /*25*/])->f_23];
			(*Global_1138889->f_41529[iVar1 /*25*/])[(Global_1138889->f_41529[iVar1 /*25*/])->f_23] = -1;
		}
		else
		{
			iVar2++;
		}
	}
}

int func_139(int iParam0)
{
	int iVar0;

	iVar0 = func_140(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 61)
	{
		return 0;
	}
	return 1;
}

int func_140(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2116044775:
			return 49;
		case -2103256604:
			return 12;
		case -2073453362:
			return 11;
		case -2041025962:
			return 60;
		case -1930487908:
			return 2;
		case -1913155192:
			return 41;
		case -1771755729:
			return 28;
		case -1751121159:
			return 50;
		case -1730553768:
			return 3;
		case -1655894020:
			return 25;
		case -1604680733:
			return 10;
		case -1511575465:
			return 34;
		case -1328991329:
			return 5;
		case -1136429013:
			return 45;
		case -1115905480:
			return 31;
		case -1026481003:
			return 6;
		case -966751997:
			return 13;
		case -824728332:
			return 33;
		case -718742742:
			return 55;
		case -698163919:
			return 32;
		case -662966589:
			return 1;
		case -549693655:
			return 14;
		case -488644714:
			return 4;
		case -430422799:
			return 36;
		case -350459285:
			return 61;
		case -268774736:
			return 40;
		case -220644763:
			return 26;
		case -199042163:
			return 56;
		case -191252842:
			return 22;
		case -166765081:
			return 51;
		case -106166013:
			return 19;
		case -1:
			return 0;
		case 50982971:
			return 17;
		case 125946764:
			return 20;
		case 367160929:
			return 57;
		case 482459685:
			return 24;
		case 492808644:
			return 18;
		case 539654946:
			return 23;
		case 656937467:
			return 39;
		case 692490127:
			return 15;
		case 718630298:
			return 52;
		case 785261183:
			return 48;
		case 793826854:
			return 21;
		case 892655276:
			return 46;
		case 907911269:
			return 27;
		case 955977457:
			return 43;
		case 966561884:
			return 7;
		case 988751276:
			return 30;
		case 1159158432:
			return 58;
		case 1204983685:
			return 37;
		case 1242495215:
			return 9;
		case 1254069395:
			return 59;
		case 1341326366:
			return 54;
		case 1348456703:
			return 35;
		case 1442295985:
			return 38;
		case 1527078018:
			return 42;
		case 1565429580:
			return 53;
		case 1696309427:
			return 44;
		case 1870637439:
			return 16;
		case 2067881273:
			return 8;
		case 2093700568:
			return 47;
		case 2113555978:
			return 29;
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

void func_141(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar1 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case -1730553768:
		case -488644714:
			func_159();
			break;
		case -2103256604:
			func_160();
			break;
		case 692490127:
			PED::_0x66B1CB778D911F49(iVar0, 0f);
			break;
		case 50982971:
			PED::_0xA5950E16B8F31052(iVar0, 0, 0);
			GRAPHICS::_0xC5CB91D65852ED7E(func_161(iParam0));
			break;
		case 1870637439:
			GRAPHICS::_0xC5CB91D65852ED7E(func_161(iParam0));
			break;
		case 492808644:
			GRAPHICS::_0xC5CB91D65852ED7E(func_161(iParam0));
			break;
		case 125946764:
			ATTRIBUTE::_0x3FC4C027FD0936F4(5);
			func_30(105, 1);
			break;
		case -106166013:
			GRAPHICS::_0xC5CB91D65852ED7E(func_161(iParam0));
			break;
		case 1204983685:
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 0);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 19);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 1);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 18);
			break;
		case 1442295985:
			NETWORK::_0x442B4347B6EC36E8(iVar0, 0, true);
			break;
		case 656937467:
			ATTRIBUTE::_0x3FC4C027FD0936F4(15);
			break;
		case -430422799:
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 0);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 19);
			break;
		case 539654946:
			PLAYER::_0x5F8E0303C229C84B(iVar1, "");
			break;
		case -1655894020:
		case 482459685:
		case 907911269:
			func_163(func_162(iParam0));
			break;
		case -1771755729:
		case -220644763:
			PLAYER::_0x768E81AE285A4B67(iVar1, 0);
			PLAYER::_0xE910932F4B30BE23(iVar1);
			PLAYER::_0x0E9057A9DA78D0F8(iVar1, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 0);
			break;
		case 2113555978:
			GRAPHICS::_0xAF4D239B8903FCBE();
			PLAYER::_0x768E81AE285A4B67(iVar1, 0);
			PLAYER::_0xE910932F4B30BE23(iVar1);
			PLAYER::_0x0E9057A9DA78D0F8(iVar1, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 0);
			break;
		case 785261183:
			PLAYER::_0xCE285A4413B00B7F(iVar1, 1);
			break;
		case 793826854:
			func_164();
			break;
		case -166765081:
		case 718630298:
		case 1341326366:
		case 1565429580:
			func_156(17);
			break;
		case -824728332:
			func_156(16);
			break;
	}
}

int func_142(int iParam0)
{
	int iVar0;

	iVar0 = func_143(iParam0, 1);
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return 0;
	}
	return 1;
}

int func_143(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1290685708:
			return 1;
		case -1038992817:
			return 5;
		case -950874556:
			return 4;
		case -290151400:
			return 3;
		case 0:
			return 0;
		case 1938826026:
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

int func_144(int iParam0)
{
	int iVar0;
	struct<31> Var1;
	struct<31> Var32;
	int iVar63;
	int iVar64;
	int iVar65;

	iVar0 = func_165(iParam0);
	Var1.f_3 = 1065353216;
	Var1.f_5 = -1;
	Var1.f_6 = 3;
	Var1.f_6.f_1 = -1;
	Var1.f_6.f_1.f_3 = -1;
	Var1.f_6.f_1.f_3.f_3 = -1;
	Var1.f_17 = 5;
	Var32.f_3 = 1065353216;
	Var32.f_5 = -1;
	Var32.f_6 = 3;
	Var32.f_6.f_1 = -1;
	Var32.f_6.f_1.f_3 = -1;
	Var32.f_6.f_1.f_3.f_3 = -1;
	Var32.f_17 = 5;
	iVar63 = -1;
	iVar65 = 0;
	while (iVar65 < Global_1138889->f_30603.f_10924)
	{
		iVar64 = func_119(&(Global_1138889->f_30603.f_8871[iVar65 /*3*/]), 1);
		if ((Global_1138889->f_30603.f_2900[iVar64 /*31*/])->f_4 != iParam0)
		{
		}
		else if (&Global_1138889->f_30603.f_8871[iVar65 /*3*/] == iVar0)
		{
		}
		else if (!func_166(&(Global_1138889->f_30603.f_8871[iVar65 /*3*/]), (Global_1138889->f_30603.f_8871[iVar65 /*3*/])->f_1))
		{
		}
		else
		{
			Var1 = { func_167(&(Global_1138889->f_30603.f_8871[iVar65 /*3*/])) };
			if (Var1.f_5 > Var32.f_5)
			{
				Var32 = { Var1 };
				iVar63 = iVar65;
			}
		}
		iVar65++;
	}
	return iVar63;
}

int func_145(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 4)
	{
		return 0;
	}
	return 1;
}

void func_146(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_136(iParam0))
	{
		return;
	}
	iVar0 = func_135(iParam0, 1);
	if (!func_156(&(Global_1138889->f_2001[iVar0 /*192*/])))
	{
		return;
	}
	(*(*Global_1138889)[&Global_1138889->f_2001[iVar0 /*192*/] /*94*/])[iVar0] = (*Global_1138889)[&Global_1138889->f_2001[iVar0 /*192*/] /*94*/][iVar0] + 1;
	(Global_1138889->f_2001[iVar0 /*192*/])->f_191 = 1;
	if (!func_157((Global_1138889->f_2001[iVar0 /*192*/])->f_190))
	{
		return;
	}
	iVar1 = func_158((Global_1138889->f_2001[iVar0 /*192*/])->f_190, 1);
	((*Global_1138889)[&Global_1138889->f_2001[iVar0 /*192*/] /*94*/])->f_88[iVar1] = &((*Global_1138889)[&Global_1138889->f_2001[iVar0 /*192*/] /*94*/])->f_88[iVar1] + 1;
	iVar2 = 0;
	while (iVar2 < (Global_1138889->f_41529[iVar1 /*25*/])->f_23)
	{
		if (Global_1138889->f_41529[iVar1 /*25*/][iVar2] == &Global_1138889->f_2001[iVar0 /*192*/])
		{
			return;
		}
		iVar2++;
	}
	(*Global_1138889->f_41529[iVar1 /*25*/])[(Global_1138889->f_41529[iVar1 /*25*/])->f_23] = &Global_1138889->f_2001[iVar0 /*192*/];
	(Global_1138889->f_41529[iVar1 /*25*/])->f_23++;
}

int func_147(var uParam0)
{
	var uVar0;

	if (uParam0->f_1 != 0)
	{
		uVar0 = func_168(794259616, uParam0->f_1, 1, "");
		return uVar0;
	}
	return 1;
}

void func_148(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar1 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case -1730553768:
		case -488644714:
			func_159();
			break;
		case -2103256604:
			func_160();
			break;
		case 692490127:
			PED::_0xFFD54D9FE71B966A(iVar0, 2, 14411, 0f, 0f, 0f, 0f, 0f, -1f, 1f);
			break;
		case 50982971:
			PED::_0xA5950E16B8F31052(iVar0, 1, 0);
			GRAPHICS::ANIMPOSTFX_PLAY(func_161(iParam0));
			break;
		case 1870637439:
			GRAPHICS::ANIMPOSTFX_PLAY(func_161(iParam0));
			break;
		case 492808644:
			GRAPHICS::ANIMPOSTFX_PLAY(func_161(iParam0));
			break;
		case 125946764:
			ATTRIBUTE::_0xFB6E111908502871(5);
			func_30(104, 1);
			break;
		case -106166013:
			GRAPHICS::ANIMPOSTFX_PLAY(func_161(iParam0));
			break;
		case 1204983685:
			break;
		case 656937467:
			ATTRIBUTE::_0xFB6E111908502871(15);
			break;
		case 539654946:
			PLAYER::_0x5F8E0303C229C84B(iVar1, "focusfire");
			break;
		case 482459685:
			iVar2 = func_162(iParam0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_169(iParam0, 0));
			func_170(iVar2, 0, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_169(iParam0, 1));
			func_170(iVar2, 1, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_169(iParam0, 2));
			func_170(iVar2, 2, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_169(iParam0, 3));
			func_170(iVar2, 2, 1, iVar3, 0);
			break;
		case -1655894020:
			iVar2 = func_162(iParam0);
			func_170(iVar2, 3, 1, -1, 1);
			break;
		case 907911269:
			iVar2 = func_162(iParam0);
			func_170(iVar2, 4, 1, -1, 0);
			break;
		case -220644763:
			PLAYER::_0x768E81AE285A4B67(iVar1, 1014693585);
			PLAYER::_0x2B12B6FC8B8772AB(iVar1, 8);
			PLAYER::_0x131E294EF60160DF(iVar1, 0f, 0f, 0f, 1f, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 1);
			break;
		case -1771755729:
			PLAYER::_0x768E81AE285A4B67(iVar1, 1936842089);
			PLAYER::_0x2B12B6FC8B8772AB(iVar1, 8);
			PLAYER::_0x131E294EF60160DF(iVar1, 0f, 0f, 0f, 1f, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 1);
			break;
		case 2113555978:
			GRAPHICS::_0x249CD6B7285536F2(0f, 2f, 2f);
			PLAYER::_0x768E81AE285A4B67(iVar1, 1979474018);
			PLAYER::_0x2B12B6FC8B8772AB(iVar1, 25);
			PLAYER::_0x263D69767F76059C(iVar1, 2);
			break;
		case 785261183:
			PLAYER::_0xCE285A4413B00B7F(iVar1, 0);
			break;
		case 793826854:
			func_171();
			break;
		case -166765081:
		case 718630298:
		case 1341326366:
		case 1565429580:
			func_156(17);
			break;
		case -824728332:
			func_156(16);
			break;
	}
}

void func_149(int iParam0)
{
	char* sVar0;
	char* sVar1;

	if (iParam0 == 0)
	{
		return;
	}
	sVar0 = func_172(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return;
	}
	sVar1 = func_173(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		return;
	}
	AUDIO::_0x6FB1DA3CA9DA7D90(sVar0, Global_1273882->f_8, sVar1, 0, 0, 0);
}

int func_150(int iParam0)
{
	int iVar0;

	iVar0 = func_110(iParam0, 1);
	if (iVar0 >= 130 && iVar0 <= 149)
	{
		return 1;
	}
	return 0;
}

int func_151(int iParam0)
{
	int iVar0;

	iVar0 = func_110(iParam0, 1);
	if (iVar0 >= 130 && iVar0 <= 149)
	{
		return 1;
	}
	return 0;
}

int func_152(int iParam0)
{
	int iVar0;

	iVar0 = func_110(iParam0, 1);
	if (iVar0 >= 162 && iVar0 <= 169)
	{
		return 1;
	}
	return 0;
}

int func_153(int iParam0)
{
	int iVar0;

	iVar0 = func_110(iParam0, 1);
	if (iVar0 >= 170 && iVar0 <= 170)
	{
		return 1;
	}
	return 0;
}

int func_154(int iParam0)
{
	int iVar0;

	iVar0 = func_110(iParam0, 1);
	if (iVar0 >= 150 && iVar0 <= 160)
	{
		return 1;
	}
	return 0;
}

float func_155(int iParam0, int iParam1, float fParam2, char* sParam3)
{
	struct<11> Var0;
	float fVar22;

	if (func_174(iParam0, iParam1, &Var0))
	{
		fVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_FLOAT(iParam0, iParam1, Var0.f_10.f_1);
	}
	else
	{
		fVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_FLOAT(iParam0, iParam1, fParam2);
	}
	return fVar22;
}

int func_156(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 21)
	{
		return 0;
	}
	if (iParam0 == 0)
	{
		return 1;
	}
	if (MISC::_0x8F4F050054005C27(&(Global_1138889->f_1998), iParam0))
	{
		return 1;
	}
	if (Global_1138889->f_1997 >= 21)
	{
		return 0;
	}
	Global_1138889->f_1975[Global_1138889->f_1997] = iParam0;
	Global_1138889->f_1997++;
	return 1;
}

int func_157(int iParam0)
{
	int iVar0;

	iVar0 = func_158(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 5)
	{
		return 0;
	}
	return 1;
}

int func_158(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1745889187:
			return 3;
		case -1016837116:
			return 5;
		case 0:
			return 0;
		case 370243254:
			return 4;
		case 1213888609:
			return 2;
		case 1416591065:
			return 1;
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

void func_159()
{
	bool bVar0;
	bool bVar1;

	if ((Global_1138889->f_18706[3 /*195*/])->f_194)
	{
		bVar0 = true;
	}
	PED::SET_PED_CONFIG_FLAG(Global_1273882->f_8, 550, bVar0);
	if ((Global_1138889->f_18706[4 /*195*/])->f_194)
	{
		bVar1 = true;
	}
	PED::SET_PED_CONFIG_FLAG(Global_1273882->f_8, 556, bVar1);
}

void func_160()
{
	bool bVar0;

	bVar0 = false;
	if ((Global_1138889->f_18706[12 /*195*/])->f_194)
	{
		bVar0 = true;
	}
	PED::SET_PED_CONFIG_FLAG(Global_1273882->f_8, 263, bVar0);
}

char* func_161(int iParam0)
{
	switch (iParam0)
	{
		case 1870637439:
			return "MP_ArrowDrain";
		case 492808644:
			return "MP_ArrowDisorient";
		case 50982971:
			return "MP_ArrowTracking";
		case -106166013:
			return "MP_MoonshineToxic";
		default:
			break;
	}
	return "";
}

int func_162(int iParam0)
{
	switch (iParam0)
	{
		case 482459685:
			return -843895567;
		case -1655894020:
			return -1655894020;
		case 907911269:
			return 907911269;
		default:
			break;
	}
	return 0;
}

void func_163(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (((*Global_1180613)[iVar0 /*8*/])->f_5 == iParam0)
		{
			((*Global_1180613)[iVar0 /*8*/])->f_7 = 1;
			((*Global_1180613)[iVar0 /*8*/])->f_5 = 0;
		}
		iVar0++;
	}
}

void func_164()
{
	PED::SET_PED_CONFIG_FLAG(Global_1273882->f_8, 305, false);
	PED::_0x801917E7D7BCE418(Global_1273882->f_8);
}

int func_165(int iParam0)
{
	int iVar0;

	if (!func_142(iParam0))
	{
		return -1;
	}
	iVar0 = func_143(iParam0, 1);
	return &(Global_1138889->f_30603.f_8667[iVar0 /*3*/]);
}

int func_166(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<31> Var4;

	if (!func_124(iParam0))
	{
		return 0;
	}
	iVar0 = func_119(iParam0, 1);
	iVar2 = (Global_1138889->f_30603.f_2900[iVar0 /*31*/])->f_4;
	if (func_126(*(Global_1138889->f_30603.f_2900[iVar0 /*31*/])))
	{
		iVar3 = &Global_1138889->f_30603.f_8667[func_143(iVar2, 1) /*3*/];
		Var4 = { func_167(iVar3) };
		if (iVar3 != iParam0 && (Global_1138889->f_30603.f_2900[iVar0 /*31*/])->f_5 <= Var4.f_5)
		{
			return 0;
		}
	}
	switch (&Global_1138889->f_30603.f_2900[iVar0 /*31*/])
	{
		case -1606735498:
		case -1455211650:
		case -1324410551:
		case -1276912520:
		case -1028878953:
		case -992973338:
		case -971275364:
		case -932644421:
		case -590004554:
		case -528257357:
		case -193993646:
		case -166662497:
		case -23641105:
		case 37083370:
		case 52193493:
		case 180258367:
		case 429965152:
		case 461381338:
		case 522523138:
		case 589907865:
		case 979390476:
		case 1028557598:
		case 1154303630:
		case 1254162401:
		case 1269394302:
		case 1305415806:
		case 1461424861:
		case 1691008805:
		case 1759133423:
		case 1810352391:
		case 1915097582:
		case 1921800945:
		case 2046842849:
		case 2116793692:
			return 1;
		case 1245579893:
			if (!func_175() && !func_176())
			{
				return 0;
			}
			return 1;
		case -2010146101:
			if (!func_175())
			{
				return 0;
			}
			return 1;
		case -2139108927:
			iVar1 = func_123(iParam1);
			if (iVar1 == &Global_1273882)
			{
				return 0;
			}
			return 1;
		case -2129621195:
			iVar1 = func_123(iParam1);
			if (iVar1 == &Global_1273882)
			{
				return 0;
			}
			if (!_NAMESPACE26::_0x424B17A7DC5C90BC(&(Global_1273882->f_154[&Global_1273882])))
			{
				return 0;
			}
			if (!_NAMESPACE26::_0x81FB74C83C2ED69F(&(Global_1273882->f_154[iVar1])))
			{
				return 0;
			}
			return 1;
		case 190804938:
			iVar1 = func_123(iParam1);
			if (!NETWORK::_0x255A5EF65EDA9167(&(Global_1273882->f_154[iVar1])))
			{
				return 0;
			}
			if (iVar1 != &Global_1273882 && !func_177(&(Global_1273882->f_154[iVar1])))
			{
				return 0;
			}
			if (!func_178(512, iVar1))
			{
				return 0;
			}
			return 1;
		case -1503245593:
			if (!&Global_1954462->f_1616[8])
			{
				return 0;
			}
			iVar1 = func_123(iParam1);
			if (!NETWORK::_0x255A5EF65EDA9167(&(Global_1273882->f_154[iVar1])))
			{
				return 0;
			}
			if (PED::_0x0C31C51168E80365(Global_1273882->f_8) != PLAYER::GET_PLAYER_PED(&(Global_1273882->f_154[iVar1])))
			{
				return 0;
			}
			return 1;
		default:
			break;
	}
	return 0;
}

struct<31> func_167(int iParam0)
{
	int iVar0;

	iVar0 = func_119(iParam0, 1);
	return *(Global_1138889->f_30603.f_2900[iVar0 /*31*/]);
}

bool func_168(int iParam0, int iParam1, bool bParam2, char* sParam3)
{
	struct<11> Var0;
	bool bVar22;

	if (func_174(iParam0, iParam1, &Var0))
	{
		bVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_BOOL(iParam0, iParam1, Var0.f_10.f_2);
	}
	else
	{
		bVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_BOOL(iParam0, iParam1, bParam2);
	}
	return bVar22;
}

char* func_169(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 482459685:
			switch (iParam1)
			{
				case 0:
					return "PH_HEAD";
				case 1:
					return "CP_CHEST";
				case 2:
					return "CP_R_UpperArm";
				case 3:
					return "CP_L_UpperArm";
				default:
					break;
			}
			break;
	}
	return "";
}

void func_170(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Global_1180613[iVar0 /*8*/]) && !((*Global_1180613)[iVar0 /*8*/])->f_6)
		{
			((*Global_1180613)[iVar0 /*8*/])->f_5 = iParam0;
			((*Global_1180613)[iVar0 /*8*/])->f_1 = iParam1;
			((*Global_1180613)[iVar0 /*8*/])->f_2 = iParam2;
			((*Global_1180613)[iVar0 /*8*/])->f_3 = iParam3;
			((*Global_1180613)[iVar0 /*8*/])->f_4 = iParam4;
			((*Global_1180613)[iVar0 /*8*/])->f_6 = 1;
			return;
		}
		iVar0++;
	}
}

void func_171()
{
	PED::SET_PED_CONFIG_FLAG(Global_1273882->f_8, 305, true);
	PED::_0x05CE6AF4DF071D23(Global_1273882->f_8, 0.7f);
}

char* func_172(int iParam0)
{
	switch (iParam0)
	{
		case -1822335806:
			return "Head_Shot_Ricco";
		default:
			break;
	}
	return "";
}

char* func_173(int iParam0)
{
	switch (iParam0)
	{
		case -1822335806:
			return "RDRO_Ability_Cards_SFX_Sounds";
		default:
			break;
	}
	return "";
}

int func_174(int iParam0, int iParam1, var uParam2)
{
	struct<5> Var0;
	int iVar7;

	Var0 = -178401592;
	Var0.f_1 = iParam0;
	Var0.f_2 = joaat("name");
	Var0.f_3 = 1;
	Var0.f_4 = iParam1;
	DATAFILE::_0x91DED5DD64BB2691(&Var0);
	if (DATAFILE::_0x44B3A36933AC009C(&iVar7, &Var0, joaat("name")))
	{
		*uParam2 = iParam0;
		uParam2->f_9 = iParam1;
		StringCopy(&(uParam2->f_1), "", 64);
		StringIntConCat(&(uParam2->f_1), iVar7, 64);
		DATAFILE::_0x44B3A36933AC009C(&iVar7, &Var0, joaat("type"));
		uParam2->f_10.f_3 = func_179(iVar7);
		uParam2->f_14.f_3 = uParam2->f_10.f_3;
		uParam2->f_18.f_3 = uParam2->f_10.f_3;
		switch (uParam2->f_10.f_3)
		{
			case 0:
				if (!DATAFILE::_0x52FC26D2D2FC2987(&(uParam2->f_10), &Var0, joaat("default")))
				{
				}
				break;
			case 1:
				if (!DATAFILE::_0xB2B42607F7867576(&(uParam2->f_10.f_1), &Var0, joaat("default")))
				{
				}
				break;
			case 2:
				if (!DATAFILE::_0xA63CD20F19B961AB(&(uParam2->f_10.f_2), &Var0, joaat("default")))
				{
				}
				break;
		}
		switch (uParam2->f_14.f_3)
		{
			case 0:
				DATAFILE::_0x52FC26D2D2FC2987(&(uParam2->f_14), &Var0, joaat("min"));
				break;
			case 1:
				DATAFILE::_0xB2B42607F7867576(&(uParam2->f_14.f_1), &Var0, joaat("min"));
				break;
			case 2:
				DATAFILE::_0xA63CD20F19B961AB(&(uParam2->f_14.f_2), &Var0, joaat("min"));
				break;
		}
		switch (uParam2->f_18.f_3)
		{
			case 0:
				DATAFILE::_0x52FC26D2D2FC2987(&(uParam2->f_18), &Var0, joaat("max"));
				break;
			case 1:
				DATAFILE::_0xB2B42607F7867576(&(uParam2->f_18.f_1), &Var0, joaat("max"));
				break;
			case 2:
				DATAFILE::_0xA63CD20F19B961AB(&(uParam2->f_18.f_2), &Var0, joaat("max"));
				break;
		}
		switch (uParam2->f_10.f_3)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
		}
		switch (uParam2->f_14.f_3)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
		}
		switch (uParam2->f_18.f_3)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
		}
		return 1;
	}
	return 0;
}

bool func_175()
{
	return Global_1572887->f_6;
}

int func_176()
{
	if (!&Global_1048577)
	{
		return 0;
	}
	if (!func_181(func_180(0)))
	{
		return 0;
	}
	if (&Global_3145858 != -504335712)
	{
		return 0;
	}
	if (func_182(Global_524288->f_39792))
	{
		return 1;
	}
	return 0;
}

bool func_177(int iParam0)
{
	if (func_183(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1273882->f_10, iParam0) != 1)
		{
			func_184(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1273882->f_10, iParam0) == 1;
}

bool func_178(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1099293->f_3 && iParam0) != 0;
	}
	return (((*Global_1097609)[iParam1 /*51*/])->f_3 && iParam0) != 0;
}

int func_179(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case joaat("int"):
			iVar0 = 0;
			break;
		case joaat("float"):
			iVar0 = 1;
			break;
		case joaat("bool"):
			iVar0 = 2;
			break;
	}
	return iVar0;
}

struct<2> func_180(int iParam0)
{
	return *(Global_1900718->f_1[iParam0 /*2*/]);
}

int func_181(struct<2> Param0)
{
	if (!func_185(Param0))
	{
		return 0;
	}
	if (Param0.f_1 < 0)
	{
		return 0;
	}
	if (Param0.f_1 >= func_186(Param0))
	{
		return 0;
	}
	return 1;
}

bool func_182(int iParam0)
{
	return ((iParam0 == -1759663922 || iParam0 == -318976023) || iParam0 == 772881414);
}

int func_183(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070355->f_26832), iParam0))
	{
		return 1;
	}
	return 0;
}

void func_184(int iParam0)
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
	if (!&Global_1273882->f_22[iVar0])
	{
		func_187(iParam0);
		return;
	}
	if (&Global_1070355->f_19683.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_188(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1070355->f_19683.f_1[iVar0 /*8*/] = 1;
}

int func_185(int iParam0)
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

int func_186(int iParam0)
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

void func_187(int iParam0)
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
	func_188(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1070355->f_19683.f_1[iVar0 /*8*/] = 0;
}

void func_188(int iParam0)
{
	if ((Global_1070355->f_19683.f_1[iParam0 /*8*/])->f_1 != 0)
	{
		(Global_1070355->f_19683.f_1[iParam0 /*8*/])->f_2 = 0;
		(Global_1070355->f_19683.f_1[iParam0 /*8*/])->f_1 = 0;
	}
}

