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
	struct<72> Local_14 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
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
	bool bVar0;
	int iVar1;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	Local_14 = vScriptParam_0.x;
	Local_14.f_1 = vScriptParam_0.y;
	Local_14.f_4 = vScriptParam_0.z;
	Local_14.f_2 = func_1(Local_14.f_4, Local_14.f_1);
	Local_14.f_7 = (Global_40.f_9829[vScriptParam_0.x /*4*/])->f_3;
	Local_14.f_71 = 0;
	if (func_2())
	{
		PED::_0xED9582B3DA8F02B4(1);
	}
	else
	{
		Local_14.f_3 = func_3(Local_14.f_2);
		Local_14.f_71 = 1;
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_4();
	}
	func_5(&(Local_14.f_67), 0);
	while (true)
	{
		iVar1 = func_6(&Local_14);
		if (func_7(&Local_14, iVar1))
		{
			func_4();
		}
		if (!Local_14.f_71)
		{
			if (PED::_0x5E420FF293EE5472())
			{
				Local_14.f_3 = func_8(Local_14.f_2, 0, 0, 0, 1, 1);
				Local_14.f_71 = 1;
			}
		}
		if (Local_14.f_71)
		{
			if (func_9(&(Local_14.f_67)) >= 1f)
			{
				if (func_10(Local_14.f_3, Local_14))
				{
					func_11(&Local_14, 2);
				}
				bVar0 = true;
				func_12(&(Local_14.f_67));
			}
			switch (iVar1)
			{
				case 0:
					WEAPON::REMOVE_ALL_PED_WEAPONS(Local_14.f_3, true, true);
					if (func_13(Local_14, 128))
					{
						if (Local_14.f_7 != 2)
						{
						}
						else
						{
							PED::_0xD710A5007C2AC539(Local_14.f_3, 98860198, 1);
						}
						func_14(Local_14.f_3, 1, 1);
					}
					if (func_15(Local_14.f_7) > 0)
					{
						PED::SET_PED_CONFIG_FLAG(Local_14.f_3, 130, true);
						func_16(Local_14, 4);
						func_17(Local_14, 8);
					}
					func_11(&Local_14, 1);
					break;
				case 1:
					func_18(&Local_14);
					PED::SET_PED_RESET_FLAG(Local_14.f_3, 184, true);
					break;
				case 2:
					if (!bVar0)
					{
						func_10(Local_14.f_3, Local_14);
					}
					break;
				default:
					func_4();
					break;
			}
		}
		BUILTIN::WAIT(0);
	}
}

int func_1(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = -1;
	switch (iParam0)
	{
		case 76:
			switch (iParam1)
			{
				case 0:
					iVar0 = 25;
					break;
				case 1:
					iVar0 = 26;
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 0:
					iVar0 = 499;
					break;
				case 1:
					iVar0 = 500;
					break;
			}
			break;
		case 105:
			switch (iParam1)
			{
				case 0:
					iVar0 = 127;
					break;
			}
			break;
		case 78:
			switch (iParam1)
			{
				case 0:
					iVar0 = 430;
					break;
				case 1:
					iVar0 = 431;
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					iVar0 = 281;
					break;
				case 1:
					iVar0 = 282;
					break;
			}
			break;
		case 38:
			switch (iParam1)
			{
				case 0:
					iVar0 = 511;
					break;
				case 1:
					iVar0 = 512;
					break;
			}
			break;
		case 115:
			switch (iParam1)
			{
				case 0:
					iVar0 = 364;
					break;
				case 1:
					iVar0 = 363;
					break;
				case 2:
					iVar0 = 362;
					break;
				case 3:
					iVar0 = 361;
					break;
				case 4:
					iVar0 = 360;
					break;
				case 5:
					iVar0 = 359;
					break;
			}
			break;
	}
	if (iVar0 == -1)
	{
	}
	return iVar0;
}

int func_2()
{
	if (((Local_14.f_7 == 11 || Local_14.f_7 == 13) || Local_14.f_7 == 12) || Local_14.f_7 == 9)
	{
		return 1;
	}
	return 0;
}

int func_3(int iParam0)
{
	int iVar0;

	iVar0 = func_19(iParam0);
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

void func_4()
{
	if (func_2() && Local_14.f_71)
	{
		func_20(Local_14.f_2, 0, 1, 0, 0);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_5(var uParam0, int iParam1)
{
	if (iParam1 || !func_21(uParam0))
	{
		func_12(uParam0);
	}
}

var func_6(var uParam0)
{
	return uParam0->f_5;
}

int func_7(var uParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (uParam0->f_4 != func_22())
		{
			AUDIO::STOP_PED_SPEAKING(Global_35, false);
			return 1;
		}
	}
	if (uParam0->f_71 && PED::IS_PED_INJURED(uParam0->f_3))
	{
		AUDIO::STOP_PED_SPEAKING(Global_35, false);
		return 1;
	}
	return 0;
}

int func_8(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	if (!func_23(iParam0, 1))
	{
		return 0;
	}
	if (func_25(func_24(iParam0)))
	{
		iVar1 = func_19(iParam0);
		if (!_NAMESPACE48::_0x800DF3FC913355F3(iVar1))
		{
			return 0;
		}
		if (bParam1)
		{
			if (_NAMESPACE48::_0xEB98B38CA60742D7(iVar1))
			{
				_NAMESPACE48::_0x49A8C2CD97815215(iVar1);
			}
		}
		_NAMESPACE48::_0x6759BEE6762E140B(iVar1);
		iVar0 = _NAMESPACE48::_0x0CADC3A977997472(iVar1, 0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return 0;
		}
	}
	if ((iParam4 && !func_26(iParam0)) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 171, bParam5);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	func_27(iParam0, 1);
	func_28(iParam0);
	if (bParam3)
	{
		func_27(iParam0, 16);
	}
	if (!bParam2)
	{
	}
	return iVar0;
}

float func_9(var uParam0)
{
	if (!func_21(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_29(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_30() - uParam0->f_1);
}

int func_10(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = &Global_1396116->f_98[iParam1 /*2*/];
	if (func_31(iVar0))
	{
		if (!func_32(iParam0, 518218985))
		{
			TASK::TASK_SMART_FLEE_COORD(iParam0, func_33(iVar0), 100f, -1, false, 1077936128);
		}
		return 1;
	}
	return 0;
}

void func_11(int iParam0, int iParam1)
{
	if (iParam0->f_5 != iParam1)
	{
		iParam0->f_5 = iParam1;
	}
}

void func_12(var uParam0)
{
	func_34(uParam0, 0f);
}

int func_13(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= Global_40.f_9829)
	{
		return 0;
	}
	return func_35((Global_40.f_9829[iParam0 /*4*/])->f_2, iParam1);
}

void func_14(int iParam0, int iParam1, bool bParam2)
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

int func_15(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
		case 2:
			return 2;
		case 3:
			return 3;
		case 4:
			return 3;
		case 5:
			return 3;
		case 6:
			return 2;
		case 7:
			return 3;
		case 8:
			return 3;
		case 9:
			return 3;
		case 10:
			return 3;
		case 11:
			return 3;
		case 12:
			return 3;
		case 13:
			return 3;
		case 14:
			return 3;
		case 15:
			return 3;
		default:
			break;
	}
	return 0;
}

void func_16(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= Global_40.f_9829)
	{
		return;
	}
	func_36(&((Global_40.f_9829[iParam0 /*4*/])->f_2), iParam1);
}

void func_17(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= Global_40.f_9829)
	{
		return;
	}
	func_37(&((Global_40.f_9829[iParam0 /*4*/])->f_2), iParam1);
}

void func_18(int iParam0)
{
	if (func_13(*iParam0, 4))
	{
		if (!func_13(*iParam0, 8))
		{
			if (func_38(iParam0->f_3, 1))
			{
				func_39(iParam0);
				func_16(*iParam0, 8);
			}
		}
		else if (func_38(iParam0->f_3, 0))
		{
			func_39(iParam0);
		}
		else
		{
			func_40(iParam0);
		}
	}
	else if (!func_13(*iParam0, 1))
	{
		if (func_38(iParam0->f_3, 1))
		{
			if (func_41(iParam0, -1))
			{
				func_16(*iParam0, 1);
			}
		}
	}
	else if (!func_38(iParam0->f_3, 1))
	{
		func_17(*iParam0, 1);
	}
}

int func_19(int iParam0)
{
	if (!func_42(iParam0))
	{
		return 0;
	}
	return ((*Global_1895087)[iParam0 /*3*/])->f_1;
}

void func_20(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_42(iParam0))
	{
		return;
	}
	if (!func_43(iParam0, 1))
	{
		return;
	}
	if (!func_43(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_26(iParam0)) && func_44(iParam0))
	{
		return;
	}
	func_45(iParam0, 1);
	func_46(iParam0);
	if (func_25(func_24(iParam0)))
	{
		iVar0 = func_19(iParam0);
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
		func_45(iParam0, 16);
	}
	if (func_43(iParam0, 128) && !bParam3)
	{
		func_47(iParam0, 0);
	}
}

bool func_21(var uParam0)
{
	return func_48(*uParam0, 1);
}

int func_22()
{
	return Global_1894899->f_2;
}

int func_23(int iParam0, bool bParam1)
{
	if (!func_42(iParam0))
	{
		return 0;
	}
	if ((func_43(iParam0, 1) && !func_26(iParam0)) && func_44(iParam0))
	{
		return 0;
	}
	if (!func_43(iParam0, 2))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (!func_49(iParam0, 0))
		{
			return 0;
		}
	}
	return 1;
}

int func_24(int iParam0)
{
	if (!func_42(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/];
}

bool func_25(int iParam0)
{
	return iParam0 != 0;
}

bool func_26(int iParam0)
{
	if (!func_42(iParam0))
	{
		return false;
	}
	return ((*Global_1895087)[iParam0 /*3*/])->f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_27(int iParam0, int iParam1)
{
	if (func_50() != -1)
	{
		return;
	}
	if (!func_42(iParam0))
	{
		return;
	}
	Global_24886[iParam0 /*2*/] = (Global_24886[iParam0 /*2*/] || iParam1);
}

void func_28(int iParam0)
{
	if (!func_42(iParam0))
	{
		return;
	}
	((*Global_1895087)[iParam0 /*3*/])->f_2 = SCRIPTS::GET_ID_OF_THIS_THREAD();
}

bool func_29(var uParam0)
{
	return func_48(*uParam0, 2);
}

float func_30()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

int func_31(int iParam0)
{
	func_51(iParam0, 0, 0);
	if (func_52(iParam0))
	{
		return !OBJECT::IS_DOOR_CLOSED(iParam0);
	}
	return 0;
}

int func_32(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	return 0;
}

Vector3 func_33(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(func_53(iParam0, 0)))
	{
		return ENTITY::GET_ENTITY_COORDS(func_53(iParam0, 0), false, false);
	}
	return 0f, 0f, 0f;
}

void func_34(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_30() - fParam1);
	func_54(uParam0, 1);
	func_55(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_35(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_36(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_37(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_38(int iParam0, int iParam1)
{
	float fVar0;

	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0) == Global_1935630->f_5)
		{
			if (iParam1 == 0)
			{
				return 1;
			}
			fVar0 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
			if (fVar0 < 3f && Global_36.f_2 < 162f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_39(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;

	switch (uParam0->f_8)
	{
		case 0:
			if (func_56(uParam0))
			{
				if (!func_13(*uParam0, 16))
				{
					uParam0->f_65 = 0;
				}
				else if (!func_13(*uParam0, 32))
				{
					uParam0->f_65 = 1;
				}
				else if (!func_13(*uParam0, 64))
				{
					uParam0->f_65 = 2;
				}
				else
				{
					uParam0->f_8 = 8;
					return;
				}
				if (uParam0->f_65 < func_15(uParam0->f_7))
				{
					HUD::_0xF66090013DE648D5(func_57(uParam0->f_7, 1));
					PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 448, true);
					AUDIO::STOP_PED_SPEAKING(Global_35, true);
					uParam0->f_8 = 1;
				}
				else
				{
					uParam0->f_8 = 8;
				}
			}
			break;
		case 1:
			if (HUD::_0xD0976CC34002DB57(func_57(uParam0->f_7, 1)))
			{
				vVar0 = { func_58(uParam0->f_7, uParam0->f_65, 0) };
				func_59(Global_1396116, uParam0->f_3, func_57(uParam0->f_7, 0), 0);
				if (func_60())
				{
					func_59(Global_1396116, Global_35, "JOHN", 0);
				}
				else
				{
					func_59(Global_1396116, Global_35, "ARTHUR", 0);
				}
				if (func_61(uParam0->f_7, uParam0->f_65))
				{
					func_62(uParam0);
					uParam0->f_8 = 2;
				}
				else if (MISC::ARE_STRINGS_EQUAL(func_63(vVar0), ""))
				{
					uParam0->f_8 = 2;
				}
				else if (func_64(Global_1396116, vVar0, 0, -1, 0, 0))
				{
					func_62(uParam0);
					uParam0->f_8 = 2;
				}
			}
			break;
		case 2:
			if (!func_65(1))
			{
				func_66(uParam0->f_30[0 /*17*/], "INTERACT_GREET", " ", -163964935, 0, 0, 0, 1, 0);
				func_66(uParam0->f_30[1 /*17*/], "INTERACT_INSULT", " ", 648122183, 0, 0, 0, 1, 0);
				uParam0->f_66 = -1;
				uParam0->f_8 = 3;
			}
			break;
		case 3:
			if (uParam0->f_66 == -1)
			{
				uParam0->f_66 = func_67(&(uParam0->f_3), &(uParam0->f_9), 7f, &(uParam0->f_30), 0, 1, 1, 0, 2520, 0, 0, 2, -1082130432);
				if (uParam0->f_66 == 0)
				{
					func_68(uParam0->f_30[0 /*17*/], 0, 0);
					func_68(uParam0->f_30[1 /*17*/], 0, 0);
					func_67(&(uParam0->f_3), &(uParam0->f_9), 7f, &(uParam0->f_30), 0, 1, 1, 0, 2520, 0, 0, 2, -1082130432);
					func_62(uParam0);
				}
				else if (uParam0->f_66 == 1)
				{
					func_68(uParam0->f_30[0 /*17*/], 0, 0);
					func_68(uParam0->f_30[1 /*17*/], 0, 0);
					func_67(&(uParam0->f_3), &(uParam0->f_9), 7f, &(uParam0->f_30), 0, 1, 1, 0, 2520, 0, 0, 2, -1082130432);
					func_62(uParam0);
				}
			}
			if (uParam0->f_66 == 0)
			{
				if (func_64(Global_1396116, func_58(uParam0->f_7, uParam0->f_65, 1), 0, -1, 0, 0))
				{
					uParam0->f_8 = 4;
				}
			}
			else if (uParam0->f_66 == 1)
			{
				if (func_64(Global_1396116, func_58(uParam0->f_7, uParam0->f_65, 2), 0, -1, 0, 0))
				{
					uParam0->f_8 = 4;
				}
			}
			break;
		case 4:
			if (!func_65(1))
			{
				if (uParam0->f_66 == 0)
				{
					vVar3 = { func_58(uParam0->f_7, uParam0->f_65, 3) };
					if (MISC::ARE_STRINGS_EQUAL(func_63(vVar3), ""))
					{
						if (func_69(uParam0))
						{
							uParam0->f_8 = 7;
						}
						else
						{
							uParam0->f_8 = 8;
						}
						func_70(&(uParam0->f_3));
						func_71(&(uParam0->f_30), 0, 0, 1, 0);
						uParam0->f_8 = 8;
					}
					else if (func_64(Global_1396116, vVar3, 0, -1, 0, 0))
					{
						uParam0->f_8 = 5;
					}
				}
				else if (uParam0->f_66 == 1)
				{
					vVar6 = { func_58(uParam0->f_7, uParam0->f_65, 5) };
					if (MISC::ARE_STRINGS_EQUAL(func_63(vVar6), ""))
					{
						if (func_69(uParam0))
						{
							uParam0->f_8 = 7;
						}
						else
						{
							uParam0->f_8 = 8;
						}
						func_70(&(uParam0->f_3));
						func_71(&(uParam0->f_30), 0, 0, 1, 0);
						uParam0->f_8 = 8;
					}
					else if (func_64(Global_1396116, vVar6, 0, -1, 0, 0))
					{
						uParam0->f_8 = 5;
					}
				}
			}
			break;
		case 5:
			if (!func_65(1))
			{
				if (uParam0->f_66 == 0)
				{
					vVar9 = { func_58(uParam0->f_7, uParam0->f_65, 4) };
					if (MISC::ARE_STRINGS_EQUAL(func_63(vVar9), ""))
					{
						if (func_69(uParam0))
						{
							uParam0->f_8 = 7;
						}
						else
						{
							uParam0->f_8 = 8;
						}
						func_70(&(uParam0->f_3));
						func_71(&(uParam0->f_30), 0, 0, 1, 0);
					}
					else if (func_64(Global_1396116, vVar9, 0, -1, 0, 0))
					{
						uParam0->f_8 = 6;
					}
				}
				else if (uParam0->f_66 == 1)
				{
					vVar12 = { func_58(uParam0->f_7, uParam0->f_65, 6) };
					if (MISC::ARE_STRINGS_EQUAL(func_63(vVar12), ""))
					{
						if (func_69(uParam0))
						{
							uParam0->f_8 = 7;
						}
						else
						{
							uParam0->f_8 = 8;
						}
						func_70(&(uParam0->f_3));
						func_71(&(uParam0->f_30), 0, 0, 1, 0);
					}
					else if (func_64(Global_1396116, vVar12, 0, -1, 0, 0))
					{
						uParam0->f_8 = 6;
					}
				}
			}
			break;
		case 6:
			if (!func_65(1))
			{
				if (func_69(uParam0))
				{
					uParam0->f_8 = 7;
				}
				else
				{
					uParam0->f_8 = 8;
				}
				func_70(&(uParam0->f_3));
				func_71(&(uParam0->f_30), 0, 0, 1, 0);
			}
			break;
		case 7:
			if (func_72(uParam0))
			{
				vVar15 = { func_58(uParam0->f_7, uParam0->f_65, 7) };
				if (func_64(Global_1396116, vVar15, 0, -1, 0, 0))
				{
					uParam0->f_8 = 8;
				}
			}
			break;
		case 8:
			PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 448, false);
			AUDIO::STOP_PED_SPEAKING(Global_35, false);
			break;
	}
}

void func_40(var uParam0)
{
	if (uParam0->f_8 == 3)
	{
		func_70(&(uParam0->f_3));
		func_71(&(uParam0->f_30), 0, 0, 1, 0);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 448, false);
		AUDIO::STOP_PED_SPEAKING(Global_35, false);
	}
}

int func_41(var uParam0, int iParam1)
{
	if (func_65(1))
	{
		return 0;
	}
	switch (uParam0->f_7)
	{
		case 1:
			func_73(uParam0->f_3, "NPE_PRIS_GREET", -1454469014, 0, 1, 0, 0, 1);
			return 1;
	}
	return 0;
}

bool func_42(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

bool func_43(int iParam0, int iParam1)
{
	if (func_50() != -1)
	{
		return false;
	}
	if (!func_42(iParam0))
	{
		return false;
	}
	return (Global_24886[iParam0 /*2*/] && iParam1) != 0;
}

bool func_44(int iParam0)
{
	if (!func_42(iParam0))
	{
		return false;
	}
	return SCRIPTS::_DOES_THREAD_EXIST(((*Global_1895087)[iParam0 /*3*/])->f_2);
}

void func_45(int iParam0, int iParam1)
{
	if (func_50() != -1)
	{
		return;
	}
	if (!func_42(iParam0))
	{
		return;
	}
	Global_24886[iParam0 /*2*/] = (&Global_24886[iParam0 /*2*/] - (Global_24886[iParam0 /*2*/] && iParam1));
}

void func_46(int iParam0)
{
	int iVar0;

	if (!func_42(iParam0))
	{
		return;
	}
	iVar0 = func_3(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
	((*Global_1895087)[iParam0 /*3*/])->f_2 = 0;
}

int func_47(int iParam0, bool bParam1)
{
	if (!func_42(iParam0))
	{
		return 0;
	}
	if (!func_43(iParam0, 2))
	{
		return 0;
	}
	if (func_24(iParam0) == 0)
	{
		return 1;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(func_19(iParam0)))
	{
		return 1;
	}
	if (func_43(iParam0, 1) && !bParam1)
	{
		func_27(iParam0, 128);
		return 1;
	}
	func_45(iParam0, 129);
	func_46(iParam0);
	_NAMESPACE48::_0xFC77C5B44D5FF7C0(func_19(iParam0));
	func_74(iParam0, 0);
	return 1;
}

bool func_48(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_49(int iParam0, int iParam1)
{
	if (func_50() != -1)
	{
		return false;
	}
	if (!func_42(iParam0))
	{
		return false;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(func_19(iParam0)))
	{
		return false;
	}
	if (iParam1 && !ENTITY::DOES_ENTITY_EXIST(func_3(iParam0)))
	{
		return false;
	}
	return !_NAMESPACE48::_0xEB98B38CA60742D7(func_19(iParam0));
}

int func_50()
{
	return Global_1572887->f_12;
}

int func_51(int iParam0, int iParam1, bool bParam2)
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

int func_52(int iParam0)
{
	if (func_75(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return 0;
}

int func_53(int iParam0, int iParam1)
{
	int iVar0;

	func_51(iParam0, 0, 0);
	if (func_52(iParam0))
	{
		iVar0 = ENTITY::_0xF7424890E4A094C0(iParam0, iParam1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return iVar0;
		}
	}
	return 0;
}

void func_54(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_55(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_56(var uParam0)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(uParam0->f_3);
		iVar1 = func_76(iVar0);
		if (iVar1 == 1)
		{
			return 1;
		}
		else if (iVar1 != uParam0->f_7)
		{
			uParam0->f_7 = iVar1;
			return 1;
		}
		else
		{
			return 1;
		}
	}
	else
	{
		return 0;
	}
	return 0;
}

char* func_57(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			switch (iParam1)
			{
				case 0:
					return "BOU1_BOUNTY";
				case 1:
					return "BOU1AUD";
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return "RBH_TARGET5";
				case 1:
					return "BT05AUD";
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return "RBDU_TARGET";
				case 1:
					return "BDULAUD";
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return "CAVANAUGH";
				case 1:
					return "BT03AUD";
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return "RBRA_TARGET";
				case 1:
					return "BRANAUD";
				default:
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return "RBH_TARGET12";
				case 1:
					return "BT12AUD";
				default:
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return "RBH_TARGET14";
				case 1:
					return "BT14AUD";
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return "RBCO_TARGET";
				case 1:
					return "BCONAUD";
				default:
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return "RBH_TARGET15";
				case 1:
					return "BT15AUD";
				default:
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return "RBH_TARGET20";
				case 1:
					return "BT20AUD";
				default:
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return "RBH_TARGET18";
				case 1:
					return "BT18AUD";
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return "RBH_TARGET21";
				case 1:
					return "BT21AUD";
				default:
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					return "RBH_TARGET22";
				case 1:
					return "BT22AUD";
				default:
					break;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					return "RBH_TARGET23";
				case 1:
					return "BT23AUD";
				default:
					break;
			}
			break;
	}
	return "";
}

Vector3 func_58(int iParam0, int iParam1, int iParam2)
{
	char* sVar0;
	vector3 vVar1[24];

	sVar0 = "";
	switch (iParam0)
	{
		case 2:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "BOU1_PERS1CELL";
						break;
					case 1:
						sVar0 = "BOU1_PERS1POS";
						break;
					case 2:
						sVar0 = "BOU1_PERS1NEG";
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "BOU1_PERS2CELL";
						break;
					case 1:
						sVar0 = "BOU1_PERS2POS";
						break;
					case 2:
						sVar0 = "BOU1_PERS2NEG";
						break;
				}
			}
			else if (iParam1 == 2)
			{
				switch (iParam2)
				{
					case 1:
						sVar0 = "BOU1_PERS3POS";
						break;
					case 2:
						sVar0 = "BOU1_PERS3NEG";
						break;
				}
			}
			break;
		case 3:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT05_CELL1";
						break;
					case 1:
						sVar0 = func_77("RBT05_CELL1POSJ", "RBT05_CELL1POSA");
						break;
					case 2:
						sVar0 = func_77("RBT05_CELL1NEGJ", "RBT05_CELL1NEGA");
						break;
					case 3:
						sVar0 = func_77("RBT05_CELL1BPSJ", "RBT05_CELL1BPSA");
						break;
					case 5:
						sVar0 = func_77("RBT05_CELL1BNGJ", "RBT05_CELL1NEGA");
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT05_CELL2";
						break;
					case 1:
						sVar0 = func_77("RBT05_CELL2POSJ", "RBT05_CELL2POSA");
						break;
					case 2:
						sVar0 = func_77("RBT05_CELL2NEGJ", "RBT05_CELL2NEGA");
						break;
					case 3:
						sVar0 = func_77("RBT05_CELL2BPSJ", "RBT05_CELL2BPSA");
						break;
					case 5:
						sVar0 = func_77("RBT05_CELL2BNGJ", "RBT05_CELL2BNGA");
						break;
				}
			}
			else if (iParam1 == 2)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT05_CELL3";
						break;
					case 1:
						sVar0 = func_77("RBT05_CELL3POSJ", "RBT05_CELL3POSA");
						break;
					case 2:
						sVar0 = func_77("RBT05_CELL3NEGJ", "RBT05_CELL3NEGA");
						break;
					case 3:
						sVar0 = func_77("RBT05_CELL3BPSJ", "RBT05_CELL3BPSA");
						break;
					case 5:
						sVar0 = func_77("RBT05_CELL3BNGJ", "RBT05_CELL3BNGA");
						break;
				}
			}
			break;
		case 4:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "BDUL_RE_CELL";
						break;
					case 1:
						sVar0 = func_77("RBDULCELL1POSJ", "RBDULCELL1POSA");
						break;
					case 2:
						sVar0 = func_77("RBDULCELL1NEGJ", "RBDULCELL1NEGA");
						break;
					case 7:
						sVar0 = "BDUL_BYE";
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "BDUL_RE_CELL";
						break;
					case 1:
						sVar0 = func_77("RBDULCELL2POSJ", "RBDULCELL2POSA");
						break;
					case 2:
						sVar0 = func_77("RBDULCELL2NEGJ", "RBDULCELL2NEGA");
						break;
					case 7:
						sVar0 = "BDUL_BYE";
						break;
				}
			}
			else if (iParam1 == 2)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "BDUL_RE_CELL";
						break;
					case 1:
						sVar0 = func_77("RBDULCELL3POSJ", "RBDULCELL3POSA");
						break;
					case 2:
						sVar0 = func_77("RBDULCELL3NEGJ", "RBDULCELL3NEGA");
						break;
					case 7:
						sVar0 = "BDUL_BYE";
						break;
				}
			}
			break;
		case 5:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT03_CELL1";
						break;
					case 1:
						sVar0 = "RBT03_CELL1POS";
						break;
					case 2:
						sVar0 = "RBT03_CELL1NEG";
						break;
					case 3:
						sVar0 = "RBT03_CELL1POSR";
						break;
					case 5:
						sVar0 = "RBT03_CELL1NEGR";
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT03_CELL2";
						break;
					case 1:
						sVar0 = "RBT03_CELL2POS";
						break;
					case 2:
						sVar0 = "RBT03_CELL2NEG";
						break;
					case 3:
						sVar0 = "RBT03_CELL2POSR";
						break;
					case 5:
						sVar0 = "RBT03_CELL2NEGR";
						break;
				}
			}
			else if (iParam1 == 2)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT03_CELL3";
						break;
					case 1:
						sVar0 = "RBT03_CELL3POS";
						break;
					case 2:
						sVar0 = "RBT03_CELL3NEG";
						break;
					case 3:
						sVar0 = "RBT03_CELL3POSR";
						break;
					case 5:
						sVar0 = "RBT03_CELL3NEGR";
						break;
				}
			}
			break;
		case 6:
			if (func_78(13, 8))
			{
				if (iParam1 == 0)
				{
					switch (iParam2)
					{
						case 0:
							sVar0 = "BRA_CELL1_FK";
							break;
						case 1:
							sVar0 = func_77("BRA_CELL1P_FK_J", "BRA_CELL1P_FK_A");
							break;
						case 2:
							sVar0 = func_77("BRA_CELL1N_FK_J", "BRA_CELL1N_FK_A");
							break;
						case 3:
							sVar0 = "BRA_CELL1PR_FK";
							break;
						case 5:
							sVar0 = "BRA_CELL1NR_FK";
							break;
					}
				}
				else if (iParam1 == 1)
				{
					switch (iParam2)
					{
						case 0:
							sVar0 = "BRA_CELL1_FK";
							break;
						case 1:
							sVar0 = func_77("BRA_CELL2P_FK_J", "BRA_CELL2P_FK_A");
							break;
						case 2:
							sVar0 = func_77("BRA_CELL2N_FK_J", "BRA_CELL2N_FK_A");
							break;
						case 3:
							sVar0 = "BRA_CELL2PR_FK";
							break;
						case 5:
							sVar0 = "BRA_CELL2NR_FK";
							break;
					}
				}
			}
			else if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "BRA_CELL1_FA";
						break;
					case 1:
						sVar0 = func_77("BRA_CELL1P_FA_J", "BRA_CELL1P_FA_A");
						break;
					case 2:
						sVar0 = func_77("BRA_CELL1N_FA_J", "BRA_CELL1N_FA_A");
						break;
					case 3:
						sVar0 = "BRA_CELL1PR_FA";
						break;
					case 5:
						sVar0 = "BRA_CELL1NR_FA";
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "BRA_CELL1_FA";
						break;
					case 1:
						sVar0 = func_77("BRA_CELL2P_FA_J", "BRA_CELL2P_FA_A");
						break;
					case 2:
						sVar0 = func_77("BRA_CELL2N_FA_J", "BRA_CELL2N_FA_A");
						break;
					case 3:
						sVar0 = "BRA_CELL2PR_FA";
						break;
					case 5:
						sVar0 = "BRA_CELL2NR_FA";
						break;
				}
			}
			break;
		case 7:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT12PERSCELL1";
						break;
					case 1:
						sVar0 = func_77("RBT12CELL1POSJ", "RBT12CELL1POSA");
						break;
					case 2:
						sVar0 = func_77("RBT12CELL1NEGJ", "RBT12CELL1NEGA");
						break;
					case 3:
						sVar0 = "RBT12CELL1PREP";
						break;
					case 5:
						sVar0 = "RBT12CELL1PNEG";
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT12PERSCELL2";
						break;
					case 1:
						sVar0 = func_77("RBT12CELL2POSJ", "RBT12CELL2POSA");
						break;
					case 2:
						sVar0 = func_77("RBT12CELL2NEGJ", "RBT12CELL2NEGA");
						break;
					case 3:
						sVar0 = "RBT12CELL2PREP";
						break;
					case 5:
						sVar0 = "RBT12CELL2NREP";
						break;
				}
			}
			else if (iParam1 == 2)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT12PERSCELL3";
						break;
					case 1:
						sVar0 = func_77("RBT12CELL3POSJ", "RBT12CELL3POSA");
						break;
					case 2:
						sVar0 = func_77("RBT12CELL3NEGJ", "RBT12CELL3NEGA");
						break;
					case 3:
						sVar0 = "RBT12CELL3PREP";
						break;
					case 5:
						sVar0 = "RBT12CELL3NREP";
						break;
				}
			}
			break;
		case 8:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT14_TINCELL";
						break;
					case 1:
						sVar0 = func_77("RBT14_CELL1POSJ", "RBT14_CELL1POSA");
						break;
					case 2:
						sVar0 = func_77("RBT14_CELL1NEGJ", "RBT14_CELL1NEGA");
						break;
					case 3:
						sVar0 = func_77("RBT14_C1POSJRSP", "RBT14_C1POSARSP");
						break;
					case 5:
						sVar0 = func_77("RBT14_C1NEGJRSP", "RBT14_C1NEGARSP");
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT14_TINCELL";
						break;
					case 1:
						sVar0 = func_77("RBT14_CELL2POSJ", "RBT14_CELL2POSA");
						break;
					case 2:
						sVar0 = func_77("RBT14_CELL2NEGJ", "RBT14_CELL2NEGA");
						break;
					case 3:
						sVar0 = func_77("RBT14_C2POSJRSP", "RBT14_C2POSARSP");
						break;
					case 5:
						sVar0 = func_77("RBT14_C2NEGJRSP", "RBT14_C2NEGARSP");
						break;
				}
			}
			else if (iParam1 == 2)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT14_TINCELL";
						break;
					case 1:
						sVar0 = func_77("RBT14_CELL3POSJ", "RBT14_CELL3POSA");
						break;
					case 2:
						sVar0 = func_77("RBT14_CELL3NEGJ", "RBT14_CELL3NEGA");
						break;
					case 3:
						sVar0 = func_77("RBT14_C3POSJRSP", "RBT14_C3POSARSP");
						break;
					case 5:
						sVar0 = func_77("RBT14_C3NEGJRSP", "RBT14_C3NEGARSP");
						break;
				}
			}
			break;
		case 9:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "";
						break;
					case 1:
						sVar0 = func_77("RBCON_CELL1POSJ", "RBCON_CELL1POSA");
						break;
					case 2:
						sVar0 = func_77("RBCON_CELL1NEGJ", "RBCON_CELL1NEGA");
						break;
					case 3:
						sVar0 = func_77("RBCONCELL1POSRJ", "RBCON_CELL1POSR");
						break;
					case 5:
						sVar0 = func_77("RBCONCELL1NEGRJ", "RBCON_CELL1NEGR");
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "";
						break;
					case 1:
						sVar0 = func_77("RBCON_CELL2POSJ", "RBCON_CELL2POSA");
						break;
					case 2:
						sVar0 = func_77("RBCON_CELL2NEGJ", "RBCON_CELL2NEGA");
						break;
					case 3:
						sVar0 = func_77("RBCONCELL2POSRJ", "RBCON_CELL2POSR");
						break;
					case 5:
						sVar0 = func_77("RBCONCELL2NEGRJ", "RBCON_CELL2NEGR");
						break;
				}
			}
			else if (iParam1 == 2)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "";
						break;
					case 1:
						sVar0 = func_77("RBCON_CELL3POSJ", "RBCON_CELL3POSA");
						break;
					case 2:
						sVar0 = func_77("RBCON_CELL3NEGJ", "RBCON_CELL3NEGA");
						break;
					case 3:
						sVar0 = func_77("RBCONCELL3POSRJ", "RBCON_CELL3POSR");
						break;
					case 5:
						sVar0 = func_77("RBCONCELL3NEGRJ", "RBCON_CELL3NEGR");
						break;
				}
			}
			break;
		case 10:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT15_CELL1";
						break;
					case 1:
						sVar0 = "RBT15_CELL1POS";
						break;
					case 2:
						sVar0 = "RBT15_CELL1NEG";
						break;
					case 3:
						sVar0 = "RBT15_CELL1POSR";
						break;
					case 5:
						sVar0 = "RBT15_CELL1NEGR";
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT15_CELL2";
						break;
					case 1:
						sVar0 = "RBT15_CELL2POS";
						break;
					case 2:
						sVar0 = "RBT15_CELL2NEG";
						break;
					case 3:
						sVar0 = "RBT15_CELL2POSR";
						break;
					case 5:
						sVar0 = "RBT15_CELL2NEGR";
						break;
				}
			}
			else if (iParam1 == 2)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT15_CELL3";
						break;
					case 1:
						sVar0 = "RBT15_CELL3POS";
						break;
					case 2:
						sVar0 = "RBT15_CELL3NEG";
						break;
					case 3:
						sVar0 = "RBT15_CELL3POSR";
						break;
					case 5:
						sVar0 = "RBT15_CELL3NEGR";
						break;
				}
			}
			break;
		case 11:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT20CELL1";
						break;
					case 1:
						sVar0 = "RBT20CELL1POS";
						break;
					case 2:
						sVar0 = "RBT20CELL1NEG";
						break;
					case 3:
						sVar0 = "RBT20CELL1PREP";
						break;
					case 5:
						sVar0 = "RBT20CELL1PNEG";
						break;
					case 7:
						sVar0 = "RBT20CELL_LEAVE";
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT20CELL1";
						break;
					case 1:
						sVar0 = "RBT20CELL2POS";
						break;
					case 2:
						sVar0 = "RBT20CELL2NEG";
						break;
					case 3:
						sVar0 = "RBT20CELL2PREP";
						break;
					case 5:
						sVar0 = "RBT20CELL2NREP";
						break;
					case 7:
						sVar0 = "RBT20CELL_LEAVE";
						break;
				}
			}
			else if (iParam1 == 2)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT20CELL1";
						break;
					case 1:
						sVar0 = "RBT20CELL3POS";
						break;
					case 2:
						sVar0 = "RBT20CELL3NEG";
						break;
					case 3:
						sVar0 = "RBT20CELL3PREP";
						break;
					case 5:
						sVar0 = "RBT20CELL3NREP";
						break;
					case 7:
						sVar0 = "RBT20CELL_LEAVE";
						break;
				}
			}
			break;
		case 12:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT18_CELL1";
						break;
					case 1:
						sVar0 = "RBT18_CELL1POS";
						break;
					case 2:
						sVar0 = "RBT18_CELL1NEG";
						break;
					case 3:
						sVar0 = "RBT18_CELL1POSR";
						break;
					case 5:
						sVar0 = "RBT18_CELL1NEGR";
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT18_CELL2";
						break;
					case 1:
						sVar0 = "RBT18_CELL2POS";
						break;
					case 2:
						sVar0 = "RBT18_CELL2NEG";
						break;
					case 3:
						sVar0 = "RBT18_CELL2POSR";
						break;
					case 5:
						sVar0 = "RBT18_CELL2NEGR";
						break;
				}
			}
			else if (iParam1 == 2)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT18_CELL3";
						break;
					case 1:
						sVar0 = "RBT18_CELL3POS";
						break;
					case 2:
						sVar0 = "RBT18_CELL3NEG";
						break;
					case 3:
						sVar0 = "RBT18_CELL3POSR";
						break;
					case 5:
						sVar0 = "RBT18_CELL3NEGR";
						break;
				}
			}
			break;
		case 13:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT21_CELL1";
						break;
					case 1:
						sVar0 = "RBT21_CELL1POS";
						break;
					case 2:
						sVar0 = "RBT21_CELL1NEG";
						break;
					case 3:
						sVar0 = "RBT21_CELL1POSR";
						break;
					case 4:
						sVar0 = "RBT21_CELL1BPOS";
						break;
					case 5:
						sVar0 = "RBT21_CELL1NEGR";
						break;
					case 6:
						sVar0 = "RBT21_CELL1BNEG";
						break;
					case 7:
						sVar0 = "RBT21_LEAVENOW";
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT21_CELL2";
						break;
					case 1:
						sVar0 = "RBT21_CELL2POS";
						break;
					case 2:
						sVar0 = "RBT21_CELL2NEG";
						break;
					case 3:
						sVar0 = "RBT21_CELL2POSR";
						break;
					case 4:
						sVar0 = "RBT21_CELL2BPOS";
						break;
					case 5:
						sVar0 = "RBT21_CELL2NEGR";
						break;
					case 6:
						sVar0 = "RBT21_CELL2BNEG";
						break;
					case 7:
						sVar0 = "RBT21_LEAVENOW";
						break;
				}
			}
			else if (iParam1 == 2)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT21_CELL3";
						break;
					case 1:
						sVar0 = "RBT21_CELL3POS";
						break;
					case 2:
						sVar0 = "RBT21_CELL3NEG";
						break;
					case 3:
						sVar0 = "RBT21_CELL3POSR";
						break;
					case 4:
						sVar0 = "RBT21_CELL3BPOS";
						break;
					case 5:
						sVar0 = "RBT21_CELL3NEGR";
						break;
					case 6:
						sVar0 = "RBT21_CELL3BNEG";
						break;
					case 7:
						sVar0 = "RBT21_LEAVENOW";
						break;
				}
			}
			break;
		case 14:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT22_CELL1";
						break;
					case 1:
						sVar0 = "RBT22_CELL1POSJ";
						break;
					case 2:
						sVar0 = "RBT22_CELL1NEGJ";
						break;
					case 3:
						sVar0 = "RBT22_CELL1PREP";
						break;
					case 5:
						sVar0 = "RBT22_CELL1PNEG";
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT22_CELL2";
						break;
					case 1:
						sVar0 = "RBT22_CELL2POSJ";
						break;
					case 2:
						sVar0 = "RBT22_CELL2NEGJ";
						break;
					case 3:
						sVar0 = "RBT22_CELL2PREP";
						break;
					case 5:
						sVar0 = "RBT22_CELL2NREP";
						break;
				}
			}
			else if (iParam1 == 2)
			{
				switch (iParam2)
				{
					case 1:
						sVar0 = "RBT22_CELL3POSJ";
						break;
					case 2:
						sVar0 = "RBT22_CELL3NEGJ";
						break;
				}
			}
			break;
		case 15:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT23CELL1";
						break;
					case 1:
						sVar0 = "RBT23CELL1POSJ";
						break;
					case 2:
						sVar0 = "RBT23CELL1NEGJ";
						break;
					case 3:
						sVar0 = "RBT23CELL1POSR";
						break;
					case 5:
						sVar0 = "RBT23CELL1NEGR";
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT23CELL1";
						break;
					case 1:
						sVar0 = "RBT23CELL2POSJ";
						break;
					case 2:
						sVar0 = "RBT23CELL2NEGJ";
						break;
					case 3:
						sVar0 = "RBT23CELL2POSR";
						break;
					case 5:
						sVar0 = "RBT23CELL2NEGR";
						break;
				}
			}
			else if (iParam1 == 2)
			{
				switch (iParam2)
				{
					case 0:
						sVar0 = "RBT23CELL1";
						break;
					case 1:
						sVar0 = "RBT23CELL13POSJ";
						break;
					case 2:
						sVar0 = "RBT23CELL3NEGJ";
						break;
					case 3:
						sVar0 = "RBT23CELL3POSR";
						break;
					case 5:
						sVar0 = "RBT23CELL3NEGR";
						break;
					case 4:
						sVar0 = "RBT23CELL3POS2J";
						break;
				}
			}
			break;
	}
	StringCopy(&cVar1, sVar0, 24);
	return cVar1;
}

void func_59(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_79(uParam0, iParam1, sParam2))
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1)))
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam1, bParam3);
			}
		}
	}
}

int func_60()
{
	if (func_50() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == 11966224)
	{
		return 1;
	}
	return 0;
}

int func_61(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 9:
			return 1;
	}
	return 0;
}

void func_62(var uParam0)
{
	if (uParam0->f_65 == 0)
	{
		func_16(*uParam0, 16);
	}
	else if (uParam0->f_65 == 1)
	{
		func_16(*uParam0, 32);
	}
	else if (uParam0->f_65 == 2)
	{
		func_16(*uParam0, 64);
	}
}

char* func_63(var uParam0, var uParam1, var uParam2)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

bool func_64(var uParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!AUDIO::_0xD89504D9D7D5057D(&vParam1))
	{
		bVar0 = AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION(&vParam1);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_80(vParam1, uParam0);
		if (bParam6)
		{
			AUDIO::PRELOAD_SCRIPT_CONVERSATION(&vParam1, true, true, bParam7);
		}
		else
		{
			AUDIO::START_SCRIPT_CONVERSATION(&vParam1, true, true, bParam7);
		}
		if (bParam4)
		{
			AUDIO::_0x40CA665AB9D8D505(&vParam1, iParam5);
		}
	}
	return bVar0;
}

bool func_65(int iParam0)
{
	return AUDIO::_0xFE5C6177064BD390(iParam0);
}

void func_66(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = sParam1;
	iParam0->f_7 = iParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = sParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (func_81(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				func_82(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_83(iParam0->f_6, iParam0->f_5, 0);
			}
			func_84(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		func_85(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

int func_67(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	float fVar8;

	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		func_86(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::_0x92A78D0BEDB332A3(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar8 = func_87(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
		if (!iParam8 & 2097152 != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 184, true);
		}
		if (iParam8 & 8388608 != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 281, true);
		}
		if (bVar5)
		{
			bVar1 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35));
		}
		if (bVar7 || (bVar5 && bVar1))
		{
			func_12(&(iParam1->f_13));
		}
		if (func_88(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_89(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_67(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_70(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317, true))
						{
							func_90(*uParam0, 1, 1);
						}
					}
					else if (func_91(iParam1, 22))
					{
						func_90(*uParam0, 0, 1);
					}
				}
				if (func_92(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_93(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_94(iParam8);
					if (func_95(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET(uParam3[iParam1->f_1 /*17*/], 20))
								{
									func_96(uParam3);
								}
							}
							return iParam1->f_1;
						}
					}
					else if (iParam1->f_2 != 2)
					{
						if (iParam1->f_1 != -1)
						{
							iParam1->f_1 = -1;
						}
					}
				}
				else
				{
					func_97(iParam1, uParam3, fVar8);
					if (func_98(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						func_71(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_99(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_92(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_100(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_95(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_93(uParam0, func_92(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_94(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_71(uParam3, 0, 0, 1, 1);
					}
					func_101(iParam1, 1);
				}
				func_97(iParam1, uParam3, fVar8);
				if (func_99(uParam0, iParam1, fParam4, bVar6))
				{
					if (iParam8 & 512 != 0)
					{
						iParam1->f_2 = 0;
					}
					else
					{
						iParam1->f_2 = 1;
					}
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
		}
	}
	else if (!iParam8 & 1024 != 0)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 3))
		{
			func_102(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_68(int* iParam0, int iParam1, bool bParam2)
{
	if (iParam1 && !func_103(iParam0, 13))
	{
		func_104(iParam0, 0);
	}
	else
	{
		func_105(iParam0, 0);
	}
	if (func_81(iParam0->f_6))
	{
		if (bParam2)
		{
			func_106(&(iParam0->f_6), 0, 1);
		}
	}
}

int func_69(var uParam0)
{
	if ((uParam0->f_7 == 4 || uParam0->f_7 == 13) || uParam0->f_7 == 11)
	{
		return 1;
	}
	return 0;
}

void func_70(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297, false);
	}
}

void func_71(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_81(((*uParam0)[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET(uParam0[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_106(&(((*uParam0)[iVar0 /*17*/])->f_6), 1, 1);
					if (bParam2)
					{
						((*uParam0)[iVar0 /*17*/])->f_7 = 0;
						(*uParam0)[iVar0 /*17*/] = 0;
						((*uParam0)[iVar0 /*17*/])->f_5 = "";
						((*uParam0)[iVar0 /*17*/])->f_14 = 0;
						((*uParam0)[iVar0 /*17*/])->f_13 = "";
						((*uParam0)[iVar0 /*17*/])->f_15 = 0;
						((*uParam0)[iVar0 /*17*/])->f_11 = "";
						((*uParam0)[iVar0 /*17*/])->f_12 = "";
					}
				}
				iVar0++;
			}
		}
	}

int func_72(var uParam0)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_70))
	{
		func_107(uParam0->f_4, &(uParam0->f_70));
	}
	else if (!func_108(Global_35, uParam0->f_70, 1, 0))
	{
		return 1;
	}
	return 0;
}

var func_73(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	return func_109(uParam0, &Var0);
}

void func_74(int iParam0, int iParam1)
{
	if (!func_42(iParam0))
	{
		return;
	}
	((*Global_1895087)[iParam0 /*3*/])->f_1 = iParam1;
}

bool func_75(int iParam0)
{
	return iParam0 != 0;
}

int func_76(int iParam0)
{
	switch (iParam0)
	{
		case joaat("u_m_m_bht_benedictallbright"):
			return 2;
		case joaat("u_f_m_bht_wife"):
			return 3;
		case joaat("u_m_m_bht_strawberryduel"):
			return 4;
		case joaat("u_m_m_htlrancherbounty_01"):
			return 6;
		case joaat("u_m_m_bht_shackescape"):
			return 8;
		case joaat("u_m_m_uniexconfedsbounty_01"):
			return 9;
		case joaat("cs_antonyforemen"):
			return 10;
		case joaat("u_m_m_bht_skinnersearch"):
			return 11;
		case joaat("u_m_m_bht_skinnerbrother"):
			return 12;
		case joaat("u_m_m_bht_banditoshack"):
			return 14;
		case joaat("u_m_m_bht_banditomine"):
			return 15;
		case joaat("u_m_m_bht_laramiesleeping"):
			return 5;
		case joaat("u_m_m_bht_exconfedcampreturn"):
			return 7;
		case joaat("u_m_m_bht_blackwaterhunt"):
			return 13;
		default:
			break;
	}
	return 1;
}

char* func_77(char* sParam0, char* sParam1)
{
	if (func_60())
	{
		return sParam0;
	}
	return sParam1;
}

int func_78(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = func_110(((*Global_1347702)[iParam0 /*49*/])->f_15);
	if (func_111(uVar0, iParam1))
	{
		return 1;
	}
	return 0;
}

bool func_79(var uParam0, int iParam1, char* sParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < uParam0->f_97 && !bVar0)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam2, &(((*uParam0)[iVar1 /*4*/])->f_1)))
		{
			(*uParam0)[iVar1 /*4*/] = iParam1;
			bVar0 = true;
		}
		iVar1++;
	}
	if (!bVar0)
	{
		if (uParam0->f_97 < 24)
		{
			(*uParam0)[uParam0->f_97 /*4*/] = iParam1;
			StringCopy(&(((*uParam0)[uParam0->f_97 /*4*/])->f_1), sParam2, 24);
			uParam0->f_97++;
			bVar0 = true;
		}
	}
	return bVar0;
}

void func_80(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam3->f_97)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam3[iVar0 /*4*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam3[iVar0 /*4*/]))
			{
				AUDIO::ADD_PED_TO_CONVERSATION(&uParam0, uParam3[iVar0 /*4*/], &(((*uParam3)[iVar0 /*4*/])->f_1));
			}
		}
		iVar0++;
	}
}

bool func_81(int iParam0)
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

void func_82(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	int iVar0;

	if (iParam3 && !func_81(iParam0))
	{
		return;
	}
	iVar0 = func_112(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, MISC::_CREATE_VAR_STRING(2, sParam1, sParam2));
}

void func_83(int iParam0, char* sParam1, int iParam2)
{
	int iVar0;

	if (iParam2 && !func_81(iParam0))
	{
		return;
	}
	iVar0 = func_112(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, sParam1);
}

void func_84(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (iParam2 && !func_81(iParam0))
	{
		return;
	}
	iVar0 = func_112(iParam0);
	if (bParam1)
	{
		func_113(iParam0, 4);
		func_114(iVar0, 1);
		func_115(iVar0, 1);
	}
	else
	{
		func_116(iParam0, 4);
		func_115(iVar0, 0);
	}
}

void func_85(int* iParam0, char* sParam1)
{
	if (func_81(iParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		func_83(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_105(iParam0, 1);
}

void func_86(var uParam0)
{
	if (*uParam0 & 1 != 0)
	{
		*uParam0 |= 64 | 16 | 16777216;
	}
}

float func_87(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_88(int iParam0, var uParam1, var uParam2)
{
	if (uParam1->f_11 != 0)
	{
		if (func_117(iParam0, uParam1))
		{
			if (!func_35(uParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
				func_71(uParam2, 0, 0, 1, 0);
				func_36(&(uParam1->f_10), 1);
			}
			return 1;
		}
		else if (func_35(uParam1->f_10, 1))
		{
			func_118(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
			func_37(&(uParam1->f_10), 1);
		}
	}
	return 0;
}

int func_89(var uParam0, int* iParam1, var uParam2, float fParam3, var uParam4, char* sParam5, int iParam6, float fParam7)
{
	char cVar0[32];
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;

	if (fParam7 > (fParam3 + 5f))
	{
		return 0;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		bVar4 = func_35(uParam4, 32);
		func_119(iParam1, uParam2, 0);
		iVar5 = func_120(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return 1;
		}
		func_71(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_35(uParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_35(uParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_35(uParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_35(uParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_35(uParam4, 8388608) || func_35(uParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_35(uParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_35(uParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_91(iParam1, 4))
		{
			iVar6 |= 1024;
			EVENT::_0xBB1E41DD3D3C6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_91(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_35(uParam4, 67108864))
		{
			iVar6 |= 16384;
		}
		if (iParam1->f_6 < -1 || (iParam1->f_6 > -1 && iParam1->f_6 > 3))
		{
			iParam1->f_6 = -1;
		}
		if (MISC::_0x870708A6E147A9AD(*uParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, 0, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = func_121(uParam0);
			}
			if (iParam6 != 2)
			{
				bVar7 = true;
			}
			if (!bVar7)
			{
				switch (iParam6)
				{
					case 2:
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
						{
							iParam6 = MISC::GET_HASH_KEY(&cVar0);
						}
						break;
				}
				if (iParam6 != 2)
				{
					PED::_0xFCA8FB9E15FA80D3(*uParam0, iParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5) && iParam6 == 2)
				{
					PED::_0xFCA8FB9E15FA80D3(*uParam0, MISC::GET_HASH_KEY(sParam5));
				}
				else if (iParam6 != 2)
				{
					PED::_0xFCA8FB9E15FA80D3(*uParam0, iParam6);
				}
			}
			PED::SET_PED_CONFIG_FLAG(*uParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 301, false);
			if (func_35(uParam4, 268435456))
			{
				iVar8 = func_122(uParam2, 648122183);
				if (iVar8 > -1)
				{
					func_123(iParam1, (*uParam2)[iVar8 /*17*/]);
				}
			}
			if (func_91(iParam1, 23))
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 331, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, true);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, false);
			}
			if (func_35(uParam4, 2) || func_35(uParam4, 16))
			{
				func_90(*uParam0, 1, 1);
			}
			else
			{
				func_90(*uParam0, 0, 1);
			}
			return 1;
		}
	}
	return 0;
}

void func_90(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
	}
}

bool func_91(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

int func_92(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	bVar0 = (!VOLUME::_0x92A78D0BEDB332A3(iParam2) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam2, true, 0));
	bVar1 = uParam1 & 32 != false;
	bVar2 = uParam1 & 65792 != false;
	bVar3 = uParam1 & 1179648 != false;
	if (bVar0)
	{
		if (bVar1)
		{
			return 1;
		}
		if (func_124(*uParam0, bParam3, bVar2, bVar3))
		{
			return 1;
		}
	}
	return 0;
}

void func_93(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, var uParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
{
	int iVar0;

	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(*iParam2, 1))
		{
			if (bParam14)
			{
				iVar0 = 0;
				while (iVar0 < *uParam4)
				{
					MISC::SET_BIT((*uParam4)[iVar0 /*17*/], 14);
					iVar0++;
				}
			}
			func_125(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_35(uParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_94(var uParam0)
{
	if (func_35(uParam0, 4))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -128997553, true);
		PAD::DISABLE_CONTROL_ACTION(0, 130948705, true);
		PAD::DISABLE_CONTROL_ACTION(0, 42190210, true);
		PAD::DISABLE_CONTROL_ACTION(0, 1632043089, true);
		PAD::DISABLE_CONTROL_ACTION(0, 1623727326, true);
		PAD::DISABLE_CONTROL_ACTION(0, -922478227, true);
		PAD::DISABLE_CONTROL_ACTION(0, -674562833, true);
		PAD::DISABLE_CONTROL_ACTION(0, -197984200, true);
		PAD::DISABLE_CONTROL_ACTION(0, -238861894, true);
	}
	if (func_35(uParam0, 16384))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -485697785, false);
	}
	if (func_35(uParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -1292666904, false);
		PAD::DISABLE_CONTROL_ACTION(0, 578288361, false);
	}
}

bool func_95(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, var uParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	float fVar12;

	iVar1 = func_126(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = uParam10 & 128 != false;
	bVar7 = uParam10 & 64 != false;
	bVar8 = uParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*uParam0);
	bVar11 = (((PED::_0xA911EE21EDF69DAF(Global_35) || func_127(Global_35)) || func_128(Global_35)) || func_129(Global_35));
	fVar12 = -1f;
	if (func_21(&(iParam1->f_13)))
	{
		fVar12 = func_9(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if (((*uParam4)[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = ((*uParam4)[iVar0 /*17*/])->f_8;
		}
		bVar4 = func_81(((*uParam4)[iVar0 /*17*/])->f_6);
		func_130(*uParam0, (*uParam4)[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET(uParam4[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (func_131(*uParam0, iParam1, (*uParam4)[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_132(iParam12, ((*uParam4)[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						func_71(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_133(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET(uParam4[iVar0 /*17*/], 11))
					{
						func_119(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar5 = true;
					iParam1->f_9 = MISC::IS_BIT_SET(uParam4[iParam1->f_1 /*17*/], 16);
					if (!iParam1->f_9)
					{
						MISC::SET_BIT(iParam1, 0);
					}
					if (!bVar2)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(((*uParam4)[iVar0 /*17*/])->f_11))
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY(((*uParam4)[iVar0 /*17*/])->f_12))
							{
								TASK::TASK_PLAY_ANIM(Global_35, ((*uParam4)[iVar0 /*17*/])->f_11, ((*uParam4)[iVar0 /*17*/])->f_12, 4f, -4f, -1, 67108880, 0, 0, 0, 0, 0, 0);
							}
						}
					}
					if (func_134(iParam1, fParam6, iParam1->f_9))
					{
						func_12(&(iParam1->f_18));
						if (bVar6)
						{
							func_133(uParam4, 0, 0);
						}
						iParam1->f_2 = 2;
					}
					if (iParam1->f_2 != 2)
					{
						if (iParam1->f_2 != 3)
						{
							if (bVar8)
							{
								iParam1->f_2 = 0;
							}
						}
					}
					if (!bParam14)
					{
						bVar5 = true;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		func_135(iParam1, fParam2);
	}
	return bVar5;
}

void func_96(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (MISC::IS_BIT_SET(uParam0[iVar0 /*17*/], 20))
		{
			if (!MISC::IS_BIT_SET(uParam0[iVar0 /*17*/], 21))
			{
				MISC::CLEAR_BIT((*uParam0)[iVar0 /*17*/], 20);
				MISC::CLEAR_BIT((*uParam0)[iVar0 /*17*/], 21);
			}
		}
		iVar0++;
	}
}

void func_97(int* iParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_136((*uParam1)[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET(uParam1[iVar0 /*17*/], 20))
			{
				func_135(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

int func_98(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, -124244224))
		{
			if (func_137(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_138(iParam1, 0);
				func_119(iParam1, uParam2, func_91(iParam1, 6));
				return 1;
			}
		}
	}
	return 0;
}

int func_99(var uParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
		{
			return 0;
		}
		iParam1->f_9 = 0;
		MISC::SET_BIT(iParam1, 0);
		if (fParam2 > 0f)
		{
			func_12(&(iParam1->f_18));
			return 0;
		}
		else if (func_21(&(iParam1->f_18)))
		{
			func_139(&(iParam1->f_18));
			return 0;
		}
	}
	if (!func_21(&(iParam1->f_18)))
	{
		return 1;
	}
	if (fParam2 > 0f && bParam3)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
		{
			return 0;
		}
	}
	return func_140(&(iParam1->f_18), fParam2);
	return 1;
}

void func_100(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_130(iParam0, (*uParam2)[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_101(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

void func_102(int* iParam0, var uParam1)
{
	int iVar0;
	struct<17> Var1;
	struct<10> Var22;

	Var1.f_1 = -1;
	Var1.f_3 = -1;
	Var1.f_6 = -1;
	Var1.f_12 = 1073741824;
	Var1.f_16 = 1;
	Var22.f_2 = 570;
	Var22.f_3 = 1065353216;
	Var22.f_4 = -1082130432;
	Var22.f_9 = 2;
	func_119(iParam0, uParam1, 1);
	func_71(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY((*uParam1)[iVar0 /*17*/], &Var22, 17);
		iVar0++;
	}
}

bool func_103(var uParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*uParam0, iParam1);
}

void func_104(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_105(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

void func_106(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 && !func_81(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_112(*uParam0);
	if (((*Global_1945938)[iVar0 /*18*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && iParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_141(iVar0);
	*uParam0 = 0;
}

void func_107(int iParam0, var uParam1)
{
	if (VOLUME::_0x92A78D0BEDB332A3(*uParam1))
	{
		return;
	}
	switch (iParam0)
	{
		case 5:
			*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2503.332f, -1306.672f, 49.06244f, 0f, 0f, 0f, 5.38237f, 5.870902f, 2.389851f, "Near Cell");
			break;
		case 26:
			*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1813.066f, -353.3387f, 161.438f, 0f, 0f, -20.6699f, 5.9382f, 3.494741f, 2.127687f, "Near Cell");
			break;
		case 76:
			*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-273.4034f, 808.0645f, 119.503f, 0f, 0f, -78.66611f, 2.868701f, 5.577141f, 2.388725f, "Near Cell");
			break;
		case 105:
			*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1357.195f, -1302.73f, 77.57108f, 0f, 0f, -18.89946f, 3.524552f, 3.867561f, 1.788079f, "Near Cell");
			break;
		case 38:
			*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-763.9052f, -1264.156f, 43.82976f, 0f, 0f, 0f, 3.441595f, 4.293221f, 2.234505f, "Near Cell");
			break;
		case 115:
			*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-5534.542f, -2948.278f, -0.368f, 0f, 0f, 15f, 9f, 4.7f, 3f, "Near Cell");
			Jump @421; //curOff = 364
			*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2903.745f, 1311.18f, 45.13168f, 0f, 0f, -19.81251f, 1.647195f, 1.766237f, 2.464334f, "Near Cell");
		}

bool func_108(int iParam0, int iParam1, bool bParam2, int iParam3)
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

var func_109(var uParam0, var uParam1)
{
	return AUDIO::_PLAY_AMBIENT_SPEECH1(uParam0, uParam1);
}

int func_110(int iParam0)
{
	if (!func_142(iParam0))
	{
		return -1;
	}
	return func_143(iParam0);
}

bool func_111(var uParam0, var uParam1)
{
	return (uParam0 && uParam1) != 0;
}

int func_112(int iParam0)
{
	return iParam0;
}

void func_113(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 - (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1));
}

void func_114(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		if (((*Global_1945938)[iParam0 /*18*/])->f_5 == 5 && !func_144(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, 0);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
		}
	}
}

void func_115(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
	}
}

void func_116(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 || iParam1);
}

int func_117(int iParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;

	if (uParam1->f_11 & 1 != 0)
	{
		if (PED::_0x9682F850056C9ADE(iParam0))
		{
			return 1;
		}
	}
	if (uParam1->f_11 & 2 != 0)
	{
		if (PED::_0x3AA24CCC0D451379(iParam0))
		{
			return 1;
		}
	}
	bVar0 = uParam1->f_11 & 4 != false;
	bVar1 = uParam1->f_11 & 8 != false;
	if (bVar0 || bVar1)
	{
		if (PED::IS_PED_IN_COMBAT(iParam0, func_145((bVar1 && !bVar0), Global_35, 0)))
		{
			return 1;
		}
	}
	return 0;
}

void func_118(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_136((*uParam0)[iVar0 /*17*/]))
		{
			func_104((*uParam0)[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

void func_119(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_106(&(((*uParam1)[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			func_146(iParam0, 0);
		}
	}
}

int func_120(int iParam0, var uParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;

	if (uParam1->f_3 > -1 && uParam1->f_3 < *uParam2)
	{
		iVar0 = uParam1->f_3;
		((*uParam2)[iVar0 /*17*/])->f_8 = 6;
		func_147(iParam0, (*uParam2)[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (func_81(((*uParam2)[iVar0 /*17*/])->f_6))
		{
			func_104((*uParam2)[iVar0 /*17*/], 11);
			return ((*Global_1945938)[((*uParam2)[iVar0 /*17*/])->f_6 /*18*/])->f_3;
		}
	}
	return 0;
}

int func_121(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_148(*uParam0);
	iVar1 = 2;
	switch (iVar0)
	{
		case 2:
			iVar1 = 295425337; /* GXTEntry: "Lemoyne Raider" */
			break;
		case 1:
			iVar1 = 768137552; /* GXTEntry: "Murfree Brood" */
			break;
		case 0:
			iVar1 = 1415388528; /* GXTEntry: "O\'Driscoll Boy" */
			break;
		case 4:
			iVar1 = 1449436544; /* GXTEntry: "Laramie" */
			break;
		case 3:
			iVar1 = -1807204482; /* GXTEntry: "Skinner Brother" */
			break;
		case 5:
			iVar1 = -1096701282; /* GXTEntry: "Del Lobo" */
			break;
	}
	return iVar1;
}

int func_122(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (((*uParam0)[iVar0 /*17*/])->f_7 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_123(int* iParam0, int* iParam1)
{
	if (!func_91(iParam0, 23))
	{
		if (iParam1->f_7 == 648122183)
		{
			func_104(iParam1, 19);
			func_138(iParam0, 23);
			func_149(iParam1, 2);
		}
	}
}

int func_124(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (func_150(16))
	{
		return Global_1935630->f_58 == iParam0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
	{
		if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar0, bParam2, bParam3))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar0))
				{
					func_151(16);
					Global_1935630->f_58 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
					if (Global_1935630->f_58 == iParam0)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_125(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_147(iParam0, (*uParam1)[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, iParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT((*uParam1)[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_126(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

var func_127(int iParam0)
{
	return (func_152(iParam0, 4) || func_152(iParam0, 5));
}

int func_128(int iParam0)
{
	return func_152(iParam0, 7);
}

int func_129(int iParam0)
{
	return func_152(iParam0, 6);
}

void func_130(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (func_136(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			func_147(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

int func_131(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, var uParam13, float fParam14, bool bParam15, int iParam16)
{
	int iVar0;
	bool bVar1;

	iVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_153(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, uParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_154(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_84(iParam2->f_6, 0, 1);
				iVar0 = 0;
			}
		}
		else if (!bVar1)
		{
			func_84(iParam2->f_6, 1, 1);
			iVar0 = 0;
		}
		if (bParam8)
		{
			func_155(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return iVar0;
}

int func_132(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_156(iParam1, 1))
		{
			return 1;
		}
	}
	else if (func_157(iParam1, 1))
	{
		func_158(iParam1, 1);
		return 1;
	}
	return 0;
}

void func_133(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_68((*uParam0)[iVar0 /*17*/], iParam1, bParam2);
		iVar0++;
	}
}

int func_134(int* iParam0, float fParam1, var uParam2)
{
	if (iParam0->f_2 != 3)
	{
		if (uParam2 || fParam1 > 0f)
		{
			return 1;
		}
	}
	return 0;
}

void func_135(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 1101824977, true);
		PAD::DISABLE_CONTROL_ACTION(0, 966551065, true);
		PAD::DISABLE_CONTROL_ACTION(0, 668058244, true);
		PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	}
}

int func_136(var uParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_5))
	{
		return 1;
	}
	return 0;
}

int func_137(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;

	iVar1 = SCRIPTS::GET_NUMBER_OF_EVENTS(0);
	if (iVar1 > 0)
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar0))
			{
				case 1387172233:
					if (SCRIPTS::GET_EVENT_DATA(0, iVar0, &vVar3, 10))
					{
						iVar2 = vVar3.x;
						switch (iVar2)
						{
							case 9:
								if (ENTITY::IS_ENTITY_A_PED(vVar3.z))
								{
									if (iParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar3.z))
									{
										return 1;
									}
								}
								break;
						}
					}
					break;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_138(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_139(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_140(var uParam0, float fParam1)
{
	if (func_159(uParam0, fParam1))
	{
		func_139(uParam0);
		return 1;
	}
	return 0;
}

void func_141(int iParam0)
{
	if (!func_160(iParam0))
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

bool func_142(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_143(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_3;
	}
	return 0;
}

bool func_144(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1) != 0;
}

int func_145(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_146(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_139(&(uParam0->f_18));
}

void func_147(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	char* sVar0;
	int iVar1;

	if (func_81(iParam1->f_6))
	{
		if (iParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		func_106(&(iParam1->f_6), 0, 1);
	}
	if (!func_81(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_136(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_161(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824, 0, 1704213876, iParam1->f_10, 0);
			if (func_81(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_155(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_162(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						func_163(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_82(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					func_162(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					func_84(iParam1->f_6, 0, 1);
				}
				else
				{
					func_84(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

int func_148(int iParam0)
{
	int iVar0;

	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam0);
	switch (iVar0)
	{
		case -1448293989:
			return 3;
		case 555364152:
			return 2;
		case -1996978098:
			return 0;
		case 1078461828:
			return 1;
		case -1535431934:
			return 4;
		case -1663301869:
			return 5;
		default:
			break;
	}
	return -1;
}

void func_149(int* iParam0, int iParam1)
{
	if (!func_103(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_104(iParam0, 14);
		}
	}
}

bool func_150(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_151(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_152(int iParam0, int iParam1)
{
	var uVar0;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar4 = PED::_0x4642182A298187D0(iParam0, iParam1, &uVar0, 4, 1);
	if (iVar4 != 0)
	{
		return 1;
	}
	return 0;
}

bool func_153(int* iParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, var uParam8, float fParam9, bool bParam10, int iParam11)
{
	bool bVar0;
	int iVar1;

	bVar0 = (MISC::IS_BIT_SET(*iParam1, 0) && !MISC::IS_BIT_SET(*iParam1, 4));
	if (MISC::IS_BIT_SET(*iParam1, 13))
	{
		return true;
	}
	if (bParam10)
	{
		if (MISC::IS_BIT_SET(*iParam1, 20))
		{
			if (!MISC::IS_BIT_SET(*iParam0, 25))
			{
				MISC::SET_BIT(iParam0, 24);
			}
			return true;
		}
	}
	if (MISC::IS_BIT_SET(*iParam1, 9))
	{
		MISC::CLEAR_BIT(iParam1, 9);
		return true;
	}
	if (bParam6)
	{
		if (MISC::IS_BIT_SET(*iParam1, 6))
		{
			return true;
		}
	}
	else if (MISC::IS_BIT_SET(*iParam1, 5))
	{
		return true;
	}
	if (MISC::IS_BIT_SET(*iParam1, 7))
	{
		if (fParam5 > iParam1->f_4)
		{
			return true;
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 17))
	{
		if (bParam3)
		{
			if (bParam4)
			{
				return true;
			}
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 18))
	{
		if (MISC::IS_BIT_SET(*iParam1, 8))
		{
			iVar1 = 0;
			if (fParam9 > -1f)
			{
				if (fParam9 < iParam1->f_3)
				{
					iVar1 = 1;
				}
			}
			if (!bParam7)
			{
				if (uParam8 || iVar1)
				{
					return true;
				}
			}
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 2))
	{
		if (MISC::IS_BIT_SET(*iParam1, 1))
		{
			if (iParam11 < iParam1->f_14)
			{
				return true;
			}
		}
	}
	return !bVar0;
}

bool func_154(int iParam0, int iParam1)
{
	if (iParam1 && !func_81(iParam0))
	{
		return false;
	}
	return !func_144(iParam0, 4);
}

void func_155(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (iParam3 && !func_81(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = func_112(iParam0);
	func_162(iParam0, 18, 0, 1);
	func_162(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1);
	}
	HUD::_UIPROMPT_SET_GROUP(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam4, iParam2);
}

bool func_156(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_81(iParam0))
	{
		return false;
	}
	iVar0 = func_112(iParam0);
	if (HUD::_0xCD072523791DDC1B(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

bool func_157(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_81(iParam0))
	{
		return false;
	}
	iVar0 = func_112(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_158(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_81(iParam0))
	{
		return;
	}
	iVar0 = func_112(iParam0);
	HUD::_UIPROMPT_RESTART_MODES(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

int func_159(var uParam0, float fParam1)
{
	if (!func_21(uParam0))
	{
		return 0;
	}
	if (func_9(uParam0) > fParam1)
	{
		return 1;
	}
	return 0;
}

bool func_160(int iParam0)
{
	return func_144(iParam0, 2);
}

int func_161(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_0xBC0884BC590951C7(iParam1, 0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_144(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == ((*Global_1945938)[iVar0 /*18*/])->f_11 && iParam1 == ((*Global_1945938)[iVar0 /*18*/])->f_4)
				{
					if (iParam3 <= Global_1945938[iVar0 /*18*/])
					{
						return iVar0;
					}
				}
				Jump @140; //curOff = 127
				if (iVar1 == 0)
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
			if (iVar1 != 0)
			{
				func_164(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}

void func_162(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam3 && !func_81(iParam0))
	{
		return;
	}
	iVar0 = func_112(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam1, iParam2);
}

void func_163(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4)
{
	int iVar0;

	if (iParam4 && !func_81(iParam0))
	{
		return;
	}
	iVar0 = func_112(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, MISC::_CREATE_VAR_STRING(10, sParam1, sParam2, sParam3));
}

void func_164(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, var uParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	int iVar0;

	((*Global_1945938)[iParam0 /*18*/])->f_4 = iParam1;
	(*Global_1945938)[iParam0 /*18*/] = iParam4;
	((*Global_1945938)[iParam0 /*18*/])->f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	((*Global_1945938)[iParam0 /*18*/])->f_2 = iParam5;
	((*Global_1945938)[iParam0 /*18*/])->f_6 = { vParam6 };
	((*Global_1945938)[iParam0 /*18*/])->f_9 = fParam9;
	((*Global_1945938)[iParam0 /*18*/])->f_10 = iParam10;
	((*Global_1945938)[iParam0 /*18*/])->f_11 = iParam11;
	((*Global_1945938)[iParam0 /*18*/])->f_12 = { 0f, 0f, 0f };
	((*Global_1945938)[iParam0 /*18*/])->f_5 = iParam12;
	((*Global_1945938)[iParam0 /*18*/])->f_1 = 2;
	((*Global_1945938)[iParam0 /*18*/])->f_17 = -1;
	iVar0 = HUD::_UIPROMPT_REGISTER_BEGIN();
	HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam1);
	if (iParam23 != 0)
	{
		HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam23);
	}
	HUD::_UIPROMPT_SET_TEXT(iVar0, sParam2);
	if (iParam3 == 4)
	{
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, vParam6);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	else if (iParam3 == 2)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam10);
	}
	else if (iParam3 == 5)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam11);
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, 0f, 0f, 0f);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	HUD::_UIPROMPT_SET_PRIORITY(iVar0, iParam4);
	HUD::_UIPROMPT_SET_TRANSPORT_MODE(iVar0, iParam5);
	HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 18, 1);
	if (bParam22)
	{
		HUD::_0x53CE46C01A089DA1(iVar0, 1);
	}
	switch (iParam14)
	{
		case 0:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 0);
			break;
		case 2:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 1);
			break;
		case 1:
			HUD::_UIPROMPT_SET_PRESSED_TIMED_MODE(iVar0, iParam16);
			break;
		case 3:
			HUD::_UIPROMPT_SET_HOLD_INDEFINITELY_MODE(iVar0);
			break;
		case 6:
			HUD::_UIPROMPT_SET_HOLD_AUTO_FILL_MODE(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, 1);
			}
			break;
		case 7:
			HUD::_UIPROMPT_SET_MASH_MODE(iVar0, iParam17);
			break;
		case 8:
			HUD::_UIPROMPT_SET_MASH_AUTO_FILL_MODE(iVar0, iParam16, iParam17);
			break;
		case 13:
			HUD::_UIPROMPT_SET_MASH_INDEFINITELY_MODE(iVar0);
			break;
		case 15:
			HUD::_UIPROMPT_SET_TARGET_MODE(iVar0, 0.5f, 0.1f, 0);
			break;
		case 9:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 4:
		case 5:
			HUD::_UIPROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, iParam24);
			break;
		case 10:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 11:
			HUD::_UIPROMPT_SET_MASH_MANUAL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		case 12:
			HUD::_UIPROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		case 14:
			HUD::_UIPROMPT_SET_ROTATE_MODE(iVar0, iParam20, iParam21);
			HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 10, 1);
			break;
	}
	HUD::_UIPROMPT_REGISTER_END(iVar0);
	((*Global_1945938)[iParam0 /*18*/])->f_3 = iVar0;
	func_114(iParam0, 1);
	func_115(iParam0, 1);
	func_116(iParam0, 128);
}

