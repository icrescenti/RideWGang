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
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = -1;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 1097859072;
	var uLocal_35 = 1000;
	var uLocal_36 = 1067450368;
	var uLocal_37 = 5000;
	var uLocal_38 = 42;
	var uLocal_39 = 1103626240;
	var uLocal_40 = 1077936128;
	var uLocal_41 = 1106247680;
	var uLocal_42 = 1103101952;
	var uLocal_43 = 1097859072;
	var uLocal_44 = 1103626240;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	struct<72> Local_47 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	Local_47 = vScriptParam_0.x;
	Local_47.f_1 = vScriptParam_0.y;
	Local_47.f_4 = vScriptParam_0.z;
	Local_47.f_2 = func_1(Local_47.f_4, Local_47.f_1);
	Local_47.f_7 = (Global_40.f_9829[vScriptParam_0.x /*4*/])->f_3;
	Local_47.f_71 = 0;
	if (func_2())
	{
		PED::_0xED9582B3DA8F02B4(1);
	}
	else
	{
		Local_47.f_3 = func_3(Local_47.f_2);
		Local_47.f_71 = 1;
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_4();
	}
	func_5(&(Local_47.f_67), 0);
	while (true)
	{
		iVar1 = func_6(&Local_47);
		if (func_7(&Local_47, iVar1))
		{
			func_4();
		}
		if (!Local_47.f_71)
		{
			if (PED::_0x5E420FF293EE5472())
			{
				Local_47.f_3 = func_8(Local_47.f_2, 0, 0, 0, 1, 1);
				Local_47.f_71 = 1;
			}
		}
		if (Local_47.f_71)
		{
			if (func_9(&(Local_47.f_67)) >= 1f)
			{
				if (func_10(Local_47.f_3, Local_47))
				{
					func_11(&Local_47, 2);
				}
				bVar0 = true;
				func_12(&(Local_47.f_67));
			}
			switch (iVar1)
			{
				case 0:
					WEAPON::REMOVE_ALL_PED_WEAPONS(Local_47.f_3, true, true);
					if (func_13(Local_47, 128))
					{
						if (Local_47.f_7 != 2)
						{
						}
						else
						{
							PED::_0xD710A5007C2AC539(Local_47.f_3, 98860198, 1);
						}
						func_14(Local_47.f_3, 1, 1);
					}
					if (func_15(Local_47.f_7) > 0)
					{
						PED::SET_PED_CONFIG_FLAG(Local_47.f_3, 130, true);
						func_16(Local_47, 4);
						func_17(Local_47, 8);
					}
					func_11(&Local_47, 1);
					break;
				case 1:
					func_18(&Local_47);
					PED::SET_PED_RESET_FLAG(Local_47.f_3, 184, true);
					break;
				case 2:
					if (!bVar0)
					{
						func_10(Local_47.f_3, Local_47);
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
	if (((Local_47.f_7 == 11 || Local_47.f_7 == 13) || Local_47.f_7 == 12) || Local_47.f_7 == 9)
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
	if (func_2() && Local_47.f_71)
	{
		func_20(Local_47.f_2, 0, 1, 0, 0);
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
	char cVar0[16];

	if (iLocal_14 == 0)
	{
		func_38();
	}
	func_39(iParam0);
	switch (iLocal_14)
	{
		case 1:
			iLocal_15 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
			StringCopy(&cVar0, "PleadList", 16);
			StringIntConCat(&cVar0, iLocal_15, 16);
			iParam0->f_6 = ANIMSCENE::_CREATE_ANIM_SCENE("script@proc@bountyhunting@cell_blackwater", 4, &cVar0, false, true);
			ANIMSCENE::LOAD_ANIM_SCENE(iParam0->f_6);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_6, "Bounty", iParam0->f_3, 0);
			iLocal_14 = 2;
			break;
		case 2:
			if (func_40(iParam0->f_3, 1))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(iParam0->f_6, "bSeatedLoop", true, false);
				iLocal_14 = 3;
			}
			break;
		case 3:
			if (func_13(*iParam0, 4))
			{
				if (!func_13(*iParam0, 8))
				{
					if (func_40(iParam0->f_3, 1))
					{
						func_41(iParam0);
						func_16(*iParam0, 8);
					}
				}
				else if (func_40(iParam0->f_3, 0))
				{
					func_41(iParam0);
				}
				else
				{
					func_42(iParam0);
				}
			}
			else if (!func_13(*iParam0, 1))
			{
				if (func_40(iParam0->f_3, 1))
				{
					if (func_43(iParam0, -1))
					{
						func_16(*iParam0, 1);
						iLocal_14 = 4;
					}
				}
			}
			else if (!func_40(iParam0->f_3, 1))
			{
				func_17(*iParam0, 1);
			}
			break;
		case 4:
			break;
		case 5:
			break;
	}
}

int func_19(int iParam0)
{
	if (!func_44(iParam0))
	{
		return 0;
	}
	return ((*Global_1895087)[iParam0 /*3*/])->f_1;
}

void func_20(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_44(iParam0))
	{
		return;
	}
	if (!func_45(iParam0, 1))
	{
		return;
	}
	if (!func_45(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_26(iParam0)) && func_46(iParam0))
	{
		return;
	}
	func_47(iParam0, 1);
	func_48(iParam0);
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
		func_47(iParam0, 16);
	}
	if (func_45(iParam0, 128) && !bParam3)
	{
		func_49(iParam0, 0);
	}
}

bool func_21(var uParam0)
{
	return func_50(*uParam0, 1);
}

int func_22()
{
	return Global_1894899->f_2;
}

int func_23(int iParam0, bool bParam1)
{
	if (!func_44(iParam0))
	{
		return 0;
	}
	if ((func_45(iParam0, 1) && !func_26(iParam0)) && func_46(iParam0))
	{
		return 0;
	}
	if (!func_45(iParam0, 2))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (!func_51(iParam0, 0))
		{
			return 0;
		}
	}
	return 1;
}

int func_24(int iParam0)
{
	if (!func_44(iParam0))
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
	if (!func_44(iParam0))
	{
		return false;
	}
	return ((*Global_1895087)[iParam0 /*3*/])->f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_27(int iParam0, int iParam1)
{
	if (func_52() != -1)
	{
		return;
	}
	if (!func_44(iParam0))
	{
		return;
	}
	Global_24886[iParam0 /*2*/] = (Global_24886[iParam0 /*2*/] || iParam1);
}

void func_28(int iParam0)
{
	if (!func_44(iParam0))
	{
		return;
	}
	((*Global_1895087)[iParam0 /*3*/])->f_2 = SCRIPTS::GET_ID_OF_THIS_THREAD();
}

bool func_29(var uParam0)
{
	return func_50(*uParam0, 2);
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
	func_53(iParam0, 0, 0);
	if (func_54(iParam0))
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
	if (ENTITY::DOES_ENTITY_EXIST(func_55(iParam0, 0)))
	{
		return ENTITY::GET_ENTITY_COORDS(func_55(iParam0, 0), false, false);
	}
	return 0f, 0f, 0f;
}

void func_34(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_30() - fParam1);
	func_56(uParam0, 1);
	func_57(uParam0, 2);
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

void func_38()
{
	iLocal_46 = VOLUME::_CREATE_VOLUME_AGGREGATE();
	VOLUME::_0x39816F6F94F385AD(iLocal_46, -763.0246f, -1269.283f, 43.6176f, 0f, 0f, 0f, 12.03637f, 8.528987f, 5.107259f);
	VOLUME::_0x39816F6F94F385AD(iLocal_46, -764.7173f, -1263.493f, 43.76242f, 0f, 0f, 0f, 7.664316f, 3.774002f, 5.107259f);
	func_58(&uLocal_17);
	iLocal_14 = 1;
}

void func_39(var uParam0)
{
	if (ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_6, 0))
	{
		if (!ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_6, "SitToCower") && !ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_6, "SitToCower"))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_6, "SitToCower");
		}
		if (!ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_6, "StandToCower") && !ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_6, "StandToCower"))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_6, "StandToCower");
		}
		if (!ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_6, "flinch1") && !ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_6, "flinch1"))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_6, "flinch1");
		}
		if (!ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_6, "flinch2") && !ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_6, "flinch2"))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_6, "flinch2");
		}
	}
	if (VOLUME::_0xF256A75210C5C0EB(iLocal_46, Global_36) && PED::IS_PED_SHOOTING(Global_35))
	{
		func_59(uParam0);
		iLocal_16 = 1;
	}
	else if (func_60(uParam0->f_3, 0, &uLocal_17, &uLocal_45, 0, 0))
	{
		func_59(uParam0);
		iLocal_16 = 0;
	}
}

int func_40(int iParam0, int iParam1)
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
			if (fVar0 < 4f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_41(var uParam0)
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
			if (func_61(uParam0))
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
					HUD::_0xF66090013DE648D5(func_62(uParam0->f_7, 1));
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
			if (HUD::_0xD0976CC34002DB57(func_62(uParam0->f_7, 1)))
			{
				vVar0 = { func_63(uParam0->f_7, uParam0->f_65, 0) };
				func_64(Global_1396116, uParam0->f_3, func_62(uParam0->f_7, 0), 0);
				if (func_65())
				{
					func_64(Global_1396116, Global_35, "JOHN", 0);
				}
				else
				{
					func_64(Global_1396116, Global_35, "ARTHUR", 0);
				}
				if (func_66(uParam0->f_7, uParam0->f_65))
				{
					func_67(uParam0);
					uParam0->f_8 = 2;
				}
				else if (MISC::ARE_STRINGS_EQUAL(func_68(vVar0), ""))
				{
					uParam0->f_8 = 2;
				}
				else if (func_69(Global_1396116, vVar0, 0, -1, 0, 0))
				{
					func_67(uParam0);
					uParam0->f_8 = 2;
				}
			}
			break;
		case 2:
			if (!func_70(1))
			{
				func_71(uParam0->f_30[0 /*17*/], "INTERACT_GREET", " ", -163964935, 0, 0, 0, 1, 0);
				func_71(uParam0->f_30[1 /*17*/], "INTERACT_INSULT", " ", 648122183, 0, 0, 0, 1, 0);
				uParam0->f_66 = -1;
				uParam0->f_8 = 3;
			}
			break;
		case 3:
			if (uParam0->f_66 == -1)
			{
				uParam0->f_66 = func_72(&(uParam0->f_3), &(uParam0->f_9), 7f, &(uParam0->f_30), 0, 1, 1, 0, 2520, 0, 0, 2, -1082130432);
				if (uParam0->f_66 == 0)
				{
					func_73(uParam0->f_30[0 /*17*/], 0, 0);
					func_73(uParam0->f_30[1 /*17*/], 0, 0);
					func_72(&(uParam0->f_3), &(uParam0->f_9), 7f, &(uParam0->f_30), 0, 1, 1, 0, 2520, 0, 0, 2, -1082130432);
					func_67(uParam0);
				}
				else if (uParam0->f_66 == 1)
				{
					func_73(uParam0->f_30[0 /*17*/], 0, 0);
					func_73(uParam0->f_30[1 /*17*/], 0, 0);
					func_72(&(uParam0->f_3), &(uParam0->f_9), 7f, &(uParam0->f_30), 0, 1, 1, 0, 2520, 0, 0, 2, -1082130432);
					func_67(uParam0);
				}
			}
			if (uParam0->f_66 == 0)
			{
				if (func_69(Global_1396116, func_63(uParam0->f_7, uParam0->f_65, 1), 0, -1, 0, 0))
				{
					uParam0->f_8 = 4;
				}
			}
			else if (uParam0->f_66 == 1)
			{
				if (func_69(Global_1396116, func_63(uParam0->f_7, uParam0->f_65, 2), 0, -1, 0, 0))
				{
					uParam0->f_8 = 4;
				}
			}
			break;
		case 4:
			if (!func_70(1))
			{
				if (uParam0->f_66 == 0)
				{
					vVar3 = { func_63(uParam0->f_7, uParam0->f_65, 3) };
					if (MISC::ARE_STRINGS_EQUAL(func_68(vVar3), ""))
					{
						if (func_74(uParam0))
						{
							uParam0->f_8 = 7;
						}
						else
						{
							uParam0->f_8 = 8;
						}
						func_75(&(uParam0->f_3));
						func_76(&(uParam0->f_30), 0, 0, 1, 0);
						uParam0->f_8 = 8;
					}
					else if (func_69(Global_1396116, vVar3, 0, -1, 0, 0))
					{
						uParam0->f_8 = 5;
					}
				}
				else if (uParam0->f_66 == 1)
				{
					vVar6 = { func_63(uParam0->f_7, uParam0->f_65, 5) };
					if (MISC::ARE_STRINGS_EQUAL(func_68(vVar6), ""))
					{
						if (func_74(uParam0))
						{
							uParam0->f_8 = 7;
						}
						else
						{
							uParam0->f_8 = 8;
						}
						func_75(&(uParam0->f_3));
						func_76(&(uParam0->f_30), 0, 0, 1, 0);
						uParam0->f_8 = 8;
					}
					else if (func_69(Global_1396116, vVar6, 0, -1, 0, 0))
					{
						uParam0->f_8 = 5;
					}
				}
			}
			break;
		case 5:
			if (!func_70(1))
			{
				if (uParam0->f_66 == 0)
				{
					vVar9 = { func_63(uParam0->f_7, uParam0->f_65, 4) };
					if (MISC::ARE_STRINGS_EQUAL(func_68(vVar9), ""))
					{
						if (func_74(uParam0))
						{
							uParam0->f_8 = 7;
						}
						else
						{
							uParam0->f_8 = 8;
						}
						func_75(&(uParam0->f_3));
						func_76(&(uParam0->f_30), 0, 0, 1, 0);
					}
					else if (func_69(Global_1396116, vVar9, 0, -1, 0, 0))
					{
						uParam0->f_8 = 6;
					}
				}
				else if (uParam0->f_66 == 1)
				{
					vVar12 = { func_63(uParam0->f_7, uParam0->f_65, 6) };
					if (MISC::ARE_STRINGS_EQUAL(func_68(vVar12), ""))
					{
						if (func_74(uParam0))
						{
							uParam0->f_8 = 7;
						}
						else
						{
							uParam0->f_8 = 8;
						}
						func_75(&(uParam0->f_3));
						func_76(&(uParam0->f_30), 0, 0, 1, 0);
					}
					else if (func_69(Global_1396116, vVar12, 0, -1, 0, 0))
					{
						uParam0->f_8 = 6;
					}
				}
			}
			break;
		case 6:
			if (!func_70(1))
			{
				if (func_74(uParam0))
				{
					uParam0->f_8 = 7;
				}
				else
				{
					uParam0->f_8 = 8;
				}
				func_75(&(uParam0->f_3));
				func_76(&(uParam0->f_30), 0, 0, 1, 0);
			}
			break;
		case 7:
			if (func_77(uParam0))
			{
				vVar15 = { func_63(uParam0->f_7, uParam0->f_65, 7) };
				if (func_69(Global_1396116, vVar15, 0, -1, 0, 0))
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

void func_42(var uParam0)
{
	if (uParam0->f_8 == 3)
	{
		func_75(&(uParam0->f_3));
		func_76(&(uParam0->f_30), 0, 0, 1, 0);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 448, false);
		AUDIO::STOP_PED_SPEAKING(Global_35, false);
	}
}

int func_43(var uParam0, int iParam1)
{
	if (func_70(1))
	{
		return 0;
	}
	switch (uParam0->f_7)
	{
		case 1:
			func_78(uParam0->f_3, "NPE_PRIS_GREET", -1454469014, 0, 1, 0, 0, 1);
			return 1;
	}
	return 0;
}

bool func_44(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

bool func_45(int iParam0, int iParam1)
{
	if (func_52() != -1)
	{
		return false;
	}
	if (!func_44(iParam0))
	{
		return false;
	}
	return (Global_24886[iParam0 /*2*/] && iParam1) != 0;
}

bool func_46(int iParam0)
{
	if (!func_44(iParam0))
	{
		return false;
	}
	return SCRIPTS::_DOES_THREAD_EXIST(((*Global_1895087)[iParam0 /*3*/])->f_2);
}

void func_47(int iParam0, int iParam1)
{
	if (func_52() != -1)
	{
		return;
	}
	if (!func_44(iParam0))
	{
		return;
	}
	Global_24886[iParam0 /*2*/] = (&Global_24886[iParam0 /*2*/] - (Global_24886[iParam0 /*2*/] && iParam1));
}

void func_48(int iParam0)
{
	int iVar0;

	if (!func_44(iParam0))
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

int func_49(int iParam0, bool bParam1)
{
	if (!func_44(iParam0))
	{
		return 0;
	}
	if (!func_45(iParam0, 2))
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
	if (func_45(iParam0, 1) && !bParam1)
	{
		func_27(iParam0, 128);
		return 1;
	}
	func_47(iParam0, 129);
	func_48(iParam0);
	_NAMESPACE48::_0xFC77C5B44D5FF7C0(func_19(iParam0));
	func_79(iParam0, 0);
	return 1;
}

bool func_50(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_51(int iParam0, int iParam1)
{
	if (func_52() != -1)
	{
		return false;
	}
	if (!func_44(iParam0))
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

int func_52()
{
	return Global_1572887->f_12;
}

int func_53(int iParam0, int iParam1, bool bParam2)
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

int func_54(int iParam0)
{
	if (func_80(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return 0;
}

int func_55(int iParam0, int iParam1)
{
	int iVar0;

	func_53(iParam0, 0, 0);
	if (func_54(iParam0))
	{
		iVar0 = ENTITY::_0xF7424890E4A094C0(iParam0, iParam1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return iVar0;
		}
	}
	return 0;
}

void func_56(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_57(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_58(var uParam0)
{
	func_81(uParam0, 0);
	func_82(uParam0, 0);
	func_83(uParam0, 1);
	func_84(uParam0, 1);
	func_85(uParam0, 0);
	func_86(uParam0, 1);
	func_87(uParam0, 1, 1, 1);
}

void func_59(var uParam0)
{
	switch (iLocal_14)
	{
		case 1:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_6, "SitToCower") && !ANIMSCENE::_0x1F0E401031E20146(uParam0->f_6, "SitToCower"))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_6, "SitToCower", true);
				iLocal_14 = 5;
			}
			break;
		case 2:
		case 3:
		case 4:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_6, "StandToCower") && !ANIMSCENE::_0x1F0E401031E20146(uParam0->f_6, "StandToCower"))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_6, "StandToCower", true);
				iLocal_14 = 5;
			}
			break;
		case 5:
			if (iLocal_16 && ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_6, "Cower", 1))
			{
				if (func_88() == 1)
				{
					if (!ANIMSCENE::_0x1F0E401031E20146(uParam0->f_6, "flinch1"))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_6, "flinch1", true);
						iLocal_16 = 0;
						iLocal_14 = 5;
					}
				}
				else if (!ANIMSCENE::_0x1F0E401031E20146(uParam0->f_6, "flinch2"))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_6, "flinch2", true);
					iLocal_16 = 0;
					iLocal_14 = 5;
				}
			}
			break;
	}
}

int func_60(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_89(uParam2, 1, iVar0);
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
			if (func_90(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_91(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_92(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_91(iParam0, uParam2, *uParam3);
					return 1;
				}
				else if (func_93(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_91(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_94(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_91(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_26 && func_95(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_91(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_96(uParam2, 1065353216))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_97(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_91(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_98(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_91(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_99(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_91(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			else if (func_99(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_91(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_100(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_91(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || uParam2->f_12 < 20f)
			{
				if (func_101(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_91(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_102(uParam2, 4000))
				{
					if ((func_103(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_104(uParam2, iParam0)) && func_105(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_91(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_103(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_104(uParam2, iParam0)) && func_105(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_91(iParam0, uParam2, *uParam3);
					return 1;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_106(iParam0, Global_1935630->f_41))
							{
								func_107();
								*uParam3 = 2;
								func_91(iParam0, uParam2, *uParam3);
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
						if (func_106(iParam0, Global_1935630->f_41))
						{
							func_107();
							*uParam3 = 2;
							func_91(iParam0, uParam2, *uParam3);
							return 1;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_108(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_109() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_107();
						*uParam3 = 2;
						func_91(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_110())
					{
						if (func_106(iParam0, Global_1935630->f_42))
						{
							func_107();
							*uParam3 = 2;
							func_91(iParam0, uParam2, *uParam3);
							return 1;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_111(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_91(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_112(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_91(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_113(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_91(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_114(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_91(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_115(uParam2, 4000))
				{
					if (func_116(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_91(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_117(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_91(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_118(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_91(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
	}
	return 0;
}

int func_61(var uParam0)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(uParam0->f_3);
		iVar1 = func_119(iVar0);
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

char* func_62(int iParam0, int iParam1)
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

Vector3 func_63(int iParam0, int iParam1, int iParam2)
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
						sVar0 = func_120("RBT05_CELL1POSJ", "RBT05_CELL1POSA");
						break;
					case 2:
						sVar0 = func_120("RBT05_CELL1NEGJ", "RBT05_CELL1NEGA");
						break;
					case 3:
						sVar0 = func_120("RBT05_CELL1BPSJ", "RBT05_CELL1BPSA");
						break;
					case 5:
						sVar0 = func_120("RBT05_CELL1BNGJ", "RBT05_CELL1NEGA");
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
						sVar0 = func_120("RBT05_CELL2POSJ", "RBT05_CELL2POSA");
						break;
					case 2:
						sVar0 = func_120("RBT05_CELL2NEGJ", "RBT05_CELL2NEGA");
						break;
					case 3:
						sVar0 = func_120("RBT05_CELL2BPSJ", "RBT05_CELL2BPSA");
						break;
					case 5:
						sVar0 = func_120("RBT05_CELL2BNGJ", "RBT05_CELL2BNGA");
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
						sVar0 = func_120("RBT05_CELL3POSJ", "RBT05_CELL3POSA");
						break;
					case 2:
						sVar0 = func_120("RBT05_CELL3NEGJ", "RBT05_CELL3NEGA");
						break;
					case 3:
						sVar0 = func_120("RBT05_CELL3BPSJ", "RBT05_CELL3BPSA");
						break;
					case 5:
						sVar0 = func_120("RBT05_CELL3BNGJ", "RBT05_CELL3BNGA");
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
						sVar0 = func_120("RBDULCELL1POSJ", "RBDULCELL1POSA");
						break;
					case 2:
						sVar0 = func_120("RBDULCELL1NEGJ", "RBDULCELL1NEGA");
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
						sVar0 = func_120("RBDULCELL2POSJ", "RBDULCELL2POSA");
						break;
					case 2:
						sVar0 = func_120("RBDULCELL2NEGJ", "RBDULCELL2NEGA");
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
						sVar0 = func_120("RBDULCELL3POSJ", "RBDULCELL3POSA");
						break;
					case 2:
						sVar0 = func_120("RBDULCELL3NEGJ", "RBDULCELL3NEGA");
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
			if (func_121(13, 8))
			{
				if (iParam1 == 0)
				{
					switch (iParam2)
					{
						case 0:
							sVar0 = "BRA_CELL1_FK";
							break;
						case 1:
							sVar0 = func_120("BRA_CELL1P_FK_J", "BRA_CELL1P_FK_A");
							break;
						case 2:
							sVar0 = func_120("BRA_CELL1N_FK_J", "BRA_CELL1N_FK_A");
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
							sVar0 = func_120("BRA_CELL2P_FK_J", "BRA_CELL2P_FK_A");
							break;
						case 2:
							sVar0 = func_120("BRA_CELL2N_FK_J", "BRA_CELL2N_FK_A");
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
						sVar0 = func_120("BRA_CELL1P_FA_J", "BRA_CELL1P_FA_A");
						break;
					case 2:
						sVar0 = func_120("BRA_CELL1N_FA_J", "BRA_CELL1N_FA_A");
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
						sVar0 = func_120("BRA_CELL2P_FA_J", "BRA_CELL2P_FA_A");
						break;
					case 2:
						sVar0 = func_120("BRA_CELL2N_FA_J", "BRA_CELL2N_FA_A");
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
						sVar0 = func_120("RBT12CELL1POSJ", "RBT12CELL1POSA");
						break;
					case 2:
						sVar0 = func_120("RBT12CELL1NEGJ", "RBT12CELL1NEGA");
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
						sVar0 = func_120("RBT12CELL2POSJ", "RBT12CELL2POSA");
						break;
					case 2:
						sVar0 = func_120("RBT12CELL2NEGJ", "RBT12CELL2NEGA");
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
						sVar0 = func_120("RBT12CELL3POSJ", "RBT12CELL3POSA");
						break;
					case 2:
						sVar0 = func_120("RBT12CELL3NEGJ", "RBT12CELL3NEGA");
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
						sVar0 = func_120("RBT14_CELL1POSJ", "RBT14_CELL1POSA");
						break;
					case 2:
						sVar0 = func_120("RBT14_CELL1NEGJ", "RBT14_CELL1NEGA");
						break;
					case 3:
						sVar0 = func_120("RBT14_C1POSJRSP", "RBT14_C1POSARSP");
						break;
					case 5:
						sVar0 = func_120("RBT14_C1NEGJRSP", "RBT14_C1NEGARSP");
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
						sVar0 = func_120("RBT14_CELL2POSJ", "RBT14_CELL2POSA");
						break;
					case 2:
						sVar0 = func_120("RBT14_CELL2NEGJ", "RBT14_CELL2NEGA");
						break;
					case 3:
						sVar0 = func_120("RBT14_C2POSJRSP", "RBT14_C2POSARSP");
						break;
					case 5:
						sVar0 = func_120("RBT14_C2NEGJRSP", "RBT14_C2NEGARSP");
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
						sVar0 = func_120("RBT14_CELL3POSJ", "RBT14_CELL3POSA");
						break;
					case 2:
						sVar0 = func_120("RBT14_CELL3NEGJ", "RBT14_CELL3NEGA");
						break;
					case 3:
						sVar0 = func_120("RBT14_C3POSJRSP", "RBT14_C3POSARSP");
						break;
					case 5:
						sVar0 = func_120("RBT14_C3NEGJRSP", "RBT14_C3NEGARSP");
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
						sVar0 = func_120("RBCON_CELL1POSJ", "RBCON_CELL1POSA");
						break;
					case 2:
						sVar0 = func_120("RBCON_CELL1NEGJ", "RBCON_CELL1NEGA");
						break;
					case 3:
						sVar0 = func_120("RBCONCELL1POSRJ", "RBCON_CELL1POSR");
						break;
					case 5:
						sVar0 = func_120("RBCONCELL1NEGRJ", "RBCON_CELL1NEGR");
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
						sVar0 = func_120("RBCON_CELL2POSJ", "RBCON_CELL2POSA");
						break;
					case 2:
						sVar0 = func_120("RBCON_CELL2NEGJ", "RBCON_CELL2NEGA");
						break;
					case 3:
						sVar0 = func_120("RBCONCELL2POSRJ", "RBCON_CELL2POSR");
						break;
					case 5:
						sVar0 = func_120("RBCONCELL2NEGRJ", "RBCON_CELL2NEGR");
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
						sVar0 = func_120("RBCON_CELL3POSJ", "RBCON_CELL3POSA");
						break;
					case 2:
						sVar0 = func_120("RBCON_CELL3NEGJ", "RBCON_CELL3NEGA");
						break;
					case 3:
						sVar0 = func_120("RBCONCELL3POSRJ", "RBCON_CELL3POSR");
						break;
					case 5:
						sVar0 = func_120("RBCONCELL3NEGRJ", "RBCON_CELL3NEGR");
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

void func_64(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_122(uParam0, iParam1, sParam2))
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

int func_65()
{
	if (func_52() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == 11966224)
	{
		return 1;
	}
	return 0;
}

int func_66(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 9:
			return 1;
	}
	return 0;
}

void func_67(var uParam0)
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

char* func_68(var uParam0, var uParam1, var uParam2)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

bool func_69(var uParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_123(vParam1, uParam0);
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

bool func_70(int iParam0)
{
	return AUDIO::_0xFE5C6177064BD390(iParam0);
}

void func_71(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
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
		if (func_124(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				func_125(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_126(iParam0->f_6, iParam0->f_5, 0);
			}
			func_127(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		func_128(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

int func_72(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		func_129(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::_0x92A78D0BEDB332A3(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar8 = func_130(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
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
		if (func_131(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_132(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_72(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_75(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317, true))
						{
							func_133(*uParam0, 1, 1);
						}
					}
					else if (func_134(iParam1, 22))
					{
						func_133(*uParam0, 0, 1);
					}
				}
				if (func_135(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_136(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_137(iParam8);
					if (func_138(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET(uParam3[iParam1->f_1 /*17*/], 20))
								{
									func_139(uParam3);
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
					func_140(iParam1, uParam3, fVar8);
					if (func_141(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						func_76(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_142(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_135(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_143(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_138(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_136(uParam0, func_135(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_137(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_76(uParam3, 0, 0, 1, 1);
					}
					func_144(iParam1, 1);
				}
				func_140(iParam1, uParam3, fVar8);
				if (func_142(uParam0, iParam1, fParam4, bVar6))
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
			func_145(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_73(int* iParam0, int iParam1, bool bParam2)
{
	if (iParam1 && !func_146(iParam0, 13))
	{
		func_147(iParam0, 0);
	}
	else
	{
		func_148(iParam0, 0);
	}
	if (func_124(iParam0->f_6))
	{
		if (bParam2)
		{
			func_149(&(iParam0->f_6), 0, 1);
		}
	}
}

int func_74(var uParam0)
{
	if ((uParam0->f_7 == 4 || uParam0->f_7 == 13) || uParam0->f_7 == 11)
	{
		return 1;
	}
	return 0;
}

void func_75(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297, false);
	}
}

void func_76(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_124(((*uParam0)[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET(uParam0[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_149(&(((*uParam0)[iVar0 /*17*/])->f_6), 1, 1);
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

int func_77(var uParam0)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_70))
	{
		func_150(uParam0->f_4, &(uParam0->f_70));
	}
	else if (!func_151(Global_35, uParam0->f_70, 1, 0))
	{
		return 1;
	}
	return 0;
}

var func_78(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	return func_152(uParam0, &Var0);
}

void func_79(int iParam0, int iParam1)
{
	if (!func_44(iParam0))
	{
		return;
	}
	((*Global_1895087)[iParam0 /*3*/])->f_1 = iParam1;
}

bool func_80(int iParam0)
{
	return iParam0 != 0;
}

void func_81(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_37(&(uParam0->f_1), 16384);
	}
	else
	{
		func_36(&(uParam0->f_1), 16384);
	}
}

void func_82(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_37(&(uParam0->f_1), 2048);
	}
	else
	{
		func_36(&(uParam0->f_1), 2048);
	}
}

void func_83(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_37(&(uParam0->f_1), 256);
	}
	else
	{
		func_36(&(uParam0->f_1), 256);
	}
}

void func_84(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_36(uParam0, 16);
	}
	else
	{
		func_37(uParam0, 67108864);
		func_37(uParam0, 16);
	}
}

void func_85(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_37(&(uParam0->f_1), 128);
	}
	else
	{
		func_36(&(uParam0->f_1), 128);
	}
}

void func_86(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_36(uParam0, 256);
	}
	else
	{
		func_37(uParam0, 256);
	}
}

void func_87(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_36(uParam0, 268435456);
	}
	else
	{
		func_37(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_36(uParam0, 1073741824);
	}
	else
	{
		func_37(uParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_36(uParam0, 536870912);
	}
	else
	{
		func_37(uParam0, 536870912);
	}
}

int func_88()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
	{
		return 1;
	}
	return 0;
}

void func_89(var uParam0, bool bParam1, int iParam2)
{
	func_153(iParam2);
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
		uParam0->f_13 = func_154(0);
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
							func_36(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_155(1))
						{
							func_36(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_155(1) || *uParam0 & 8192 != 0))
				{
					func_37(uParam0, 33554432);
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
			if (func_156(uParam0))
			{
				uParam0->f_15 = func_109();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_109() - uParam0->f_15) > 500)
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
	func_157(uParam0);
}

int func_90(int iParam0, var uParam1)
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
			if (!func_158(iParam0, uParam1, iVar2))
			{
				return 0;
			}
			if (func_159(iParam0, iVar2) <= func_160(uParam1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_91(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_161(iParam2, 1, 1, 1, 0))
	{
		func_36(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_162(uParam1, 1);
	func_163();
}

int func_92(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_164(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_165(uParam1);
			if (func_166(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = func_167(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_162(uParam1, 1);
						return 1;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_162(uParam1, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_93(int iParam0, int iParam1, var uParam2)
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
	if (func_168(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_165(uParam2);
		if (func_166(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > func_167(uParam2)
				{
					func_162(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_94(int iParam0, var uParam1)
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
	if (func_158(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_167(uParam1)
		{
			fVar3 = func_165(uParam1);
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

int func_95(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_169(bParam1, iParam2, bParam3);
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

int func_96(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_109();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return 1;
	}
	return 0;
}

int func_97(var uParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_170(uParam2);
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
			if (func_105(uParam2, iParam1))
			{
				func_162(uParam2, 1);
				return 1;
			}
		}
	}
	return 0;
}

int func_98(var uParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_12 < IntToFloat(func_171(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && !WEAPON::_0x5809DBCA0A37C82B(Global_1935630->f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_105(uParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_162(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_99(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_172(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(217247011, vVar0, uParam2->f_22))
				{
					func_162(uParam2, 1);
					return 1;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(956330317, vVar0, uParam2->f_27))
				{
					func_162(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-966930978, vVar0, uParam2->f_22))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("weapon_thrown_dynamite"), uParam2->f_26, &vVar4, 0, 0);
					if (func_173(iParam1, vVar0, vVar4))
					{
						func_162(uParam2, 1);
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
					func_162(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-966930978, vVar0, uParam2->f_22))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("weapon_thrown_dynamite"), uParam2->f_26, &vVar7, 0, 0);
					if (func_173(iParam1, vVar0, vVar7))
					{
						func_162(uParam2, 1);
						return 1;
					}
				}
				break;
		}
	}
	return 0;
}

int func_100(int iParam0, var uParam1)
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
		if (!func_158(iParam0, uParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_174(&(Global_1935630->f_34[iVar0]));
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_175(&(Global_1935630->f_34[iVar0])))
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
			if (func_176(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_177(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_178(uParam1, iParam0, fVar1, iVar0))
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

int func_101(int iParam0, var uParam1)
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

int func_102(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_109();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

int func_103(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_179(iVar0, &iVar2))
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
	if (func_180(iVar0, iParam0))
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

int func_104(var uParam0, int iParam1)
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

int func_105(var uParam0, int iParam1)
{
	if (func_181(uParam0))
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

int func_106(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return 1;
		}
		if (func_182(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_107()
{
}

int func_108(var uParam0, int iParam1)
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
		if (func_183(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_109();
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
						if (func_184(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_9 = func_109();
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

int func_109()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

int func_110()
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
	if ((func_109() - Global_1935630->f_43) >= 10000)
	{
		return 0;
	}
	return 1;
}

int func_111(var uParam0, int iParam1)
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
	fVar0 = func_160(uParam0);
	if (uParam0->f_12 > func_185(uParam0) && uParam0->f_12 > fVar0)
	{
		return 0;
	}
	iVar2 = func_186(iParam1);
	iVar1 = func_187(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, Global_35, 1, 0) == 1)) || ((PED::_0x06087579E7AA85A9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, uParam0->f_14, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, uParam0->f_14, 1, 0) == 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_112(int iParam0, int iParam1, var uParam2)
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
	return func_188(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

int func_113(int iParam0, var uParam1)
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
		if (func_189(iParam0, uParam1, 1))
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
					if (!func_190(uParam1, iParam0))
					{
						if (func_184(iVar4, Global_36, 1) < 7f)
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

int func_114(int iParam0, var uParam1)
{
	if (!func_191(0))
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

int func_115(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_109();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_116(int iParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_117(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_109();
	}
	else if (func_109() - uParam1->f_4) > func_192(uParam1)
	{
		return func_193(iParam0, uParam1, 0, -1082130432);
	}
	return 0;
}

int func_118(var uParam0, int iParam1)
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

int func_119(int iParam0)
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

char* func_120(char* sParam0, char* sParam1)
{
	if (func_65())
	{
		return sParam0;
	}
	return sParam1;
}

int func_121(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = func_194(((*Global_1347702)[iParam0 /*49*/])->f_15);
	if (func_195(uVar0, iParam1))
	{
		return 1;
	}
	return 0;
}

bool func_122(var uParam0, int iParam1, char* sParam2)
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

void func_123(var uParam0, var uParam1, var uParam2, var uParam3)
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

bool func_124(int iParam0)
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

void func_125(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	int iVar0;

	if (iParam3 && !func_124(iParam0))
	{
		return;
	}
	iVar0 = func_196(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, MISC::_CREATE_VAR_STRING(2, sParam1, sParam2));
}

void func_126(int iParam0, char* sParam1, int iParam2)
{
	int iVar0;

	if (iParam2 && !func_124(iParam0))
	{
		return;
	}
	iVar0 = func_196(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, sParam1);
}

void func_127(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (iParam2 && !func_124(iParam0))
	{
		return;
	}
	iVar0 = func_196(iParam0);
	if (bParam1)
	{
		func_197(iParam0, 4);
		func_198(iVar0, 1);
		func_199(iVar0, 1);
	}
	else
	{
		func_200(iParam0, 4);
		func_199(iVar0, 0);
	}
}

void func_128(int* iParam0, char* sParam1)
{
	if (func_124(iParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		func_126(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_148(iParam0, 1);
}

void func_129(var uParam0)
{
	if (*uParam0 & 1 != 0)
	{
		*uParam0 |= 64 | 16 | 16777216;
	}
}

float func_130(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_131(int iParam0, var uParam1, var uParam2)
{
	if (uParam1->f_11 != 0)
	{
		if (func_201(iParam0, uParam1))
		{
			if (!func_35(uParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
				func_76(uParam2, 0, 0, 1, 0);
				func_36(&(uParam1->f_10), 1);
			}
			return 1;
		}
		else if (func_35(uParam1->f_10, 1))
		{
			func_202(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
			func_37(&(uParam1->f_10), 1);
		}
	}
	return 0;
}

int func_132(var uParam0, int* iParam1, var uParam2, float fParam3, var uParam4, char* sParam5, int iParam6, float fParam7)
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
		func_203(iParam1, uParam2, 0);
		iVar5 = func_204(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return 1;
		}
		func_76(uParam2, 0, 0, 1, 0);
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
		if (func_134(iParam1, 4))
		{
			iVar6 |= 1024;
			EVENT::_0xBB1E41DD3D3C6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_134(iParam1, 26))
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
				iParam6 = func_205(uParam0);
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
				iVar8 = func_206(uParam2, 648122183);
				if (iVar8 > -1)
				{
					func_207(iParam1, (*uParam2)[iVar8 /*17*/]);
				}
			}
			if (func_134(iParam1, 23))
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
				func_133(*uParam0, 1, 1);
			}
			else
			{
				func_133(*uParam0, 0, 1);
			}
			return 1;
		}
	}
	return 0;
}

void func_133(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
	}
}

bool func_134(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

int func_135(var uParam0, var uParam1, int iParam2, bool bParam3)
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
		if (func_208(*uParam0, bParam3, bVar2, bVar3))
		{
			return 1;
		}
	}
	return 0;
}

void func_136(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, var uParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_209(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_35(uParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_137(var uParam0)
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

bool func_138(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, var uParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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

	iVar1 = func_210(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = uParam10 & 128 != false;
	bVar7 = uParam10 & 64 != false;
	bVar8 = uParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*uParam0);
	bVar11 = (((PED::_0xA911EE21EDF69DAF(Global_35) || func_211(Global_35)) || func_212(Global_35)) || func_213(Global_35));
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
		bVar4 = func_124(((*uParam4)[iVar0 /*17*/])->f_6);
		func_214(*uParam0, (*uParam4)[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET(uParam4[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (func_215(*uParam0, iParam1, (*uParam4)[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_216(iParam12, ((*uParam4)[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						func_76(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_217(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET(uParam4[iVar0 /*17*/], 11))
					{
						func_203(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
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
					if (func_218(iParam1, fParam6, iParam1->f_9))
					{
						func_12(&(iParam1->f_18));
						if (bVar6)
						{
							func_217(uParam4, 0, 0);
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
		func_219(iParam1, fParam2);
	}
	return bVar5;
}

void func_139(var uParam0)
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

void func_140(int* iParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_220((*uParam1)[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET(uParam1[iVar0 /*17*/], 20))
			{
				func_219(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

int func_141(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, -124244224))
		{
			if (func_221(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_222(iParam1, 0);
				func_203(iParam1, uParam2, func_134(iParam1, 6));
				return 1;
			}
		}
	}
	return 0;
}

int func_142(var uParam0, int* iParam1, float fParam2, bool bParam3)
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
			func_223(&(iParam1->f_18));
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
	return func_224(&(iParam1->f_18), fParam2);
	return 1;
}

void func_143(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_214(iParam0, (*uParam2)[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_144(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

void func_145(int* iParam0, var uParam1)
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
	func_203(iParam0, uParam1, 1);
	func_76(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY((*uParam1)[iVar0 /*17*/], &Var22, 17);
		iVar0++;
	}
}

bool func_146(var uParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*uParam0, iParam1);
}

void func_147(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_148(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

void func_149(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 && !func_124(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_196(*uParam0);
	if (((*Global_1945938)[iVar0 /*18*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && iParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_225(iVar0);
	*uParam0 = 0;
}

void func_150(int iParam0, var uParam1)
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
			break;
		case 78:
			*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2903.745f, 1311.18f, 45.13168f, 0f, 0f, -19.81251f, 1.647195f, 1.766237f, 2.464334f, "Near Cell");
			break;
		default:
			break;
	}
}

bool func_151(int iParam0, int iParam1, bool bParam2, int iParam3)
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

var func_152(var uParam0, var uParam1)
{
	return AUDIO::_PLAY_AMBIENT_SPEECH1(uParam0, uParam1);
}

void func_153(int iParam0)
{
	int iVar0;
	var uVar1;

	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_226();
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
			func_227(&(Global_1935630->f_34), &(Global_1935630->f_39));
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

var func_154(int iParam0)
{
	return &(Global_1109400->f_275[iParam0 /*3*/]);
}

int func_155(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_228(bParam0, &uVar0, &uVar1))
	{
		return 1;
	}
	return 0;
}

int func_156(var uParam0)
{
	int iVar0;

	iVar0 = Global_1935630->f_40;
	if (func_52() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_229(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_229(uParam0);
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_187(iVar0) == -1)
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

void func_157(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_230(uParam0);
	}
}

int func_158(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_187(iParam2);
	}
	else
	{
		iVar1 = func_186(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_187(iParam0);
	}
	else
	{
		iVar0 = func_186(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return 1;
		}
	}
	if (func_35(*uParam1, 8388608))
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

float func_159(int iParam0, int iParam1)
{
	return func_182(iParam0, iParam1, 1, 1);
}

float func_160(var uParam0)
{
	return uParam0->f_26;
}

int func_161(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_162(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_36(uParam0, 134217728);
	}
	else
	{
		func_37(uParam0, 134217728);
	}
}

void func_163()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

int func_164(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5)
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
		if (((WEAPON::_0xCB690F680A3EA971(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, iParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_182(iVar0, iParam0, 1, 1) <= 4f)
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
		if (WEAPON::_0x6AD66548840472E5(func_231(iVar0, 0)))
		{
			if (func_232(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_165(var uParam0)
{
	return uParam0->f_17;
}

int func_166(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_12 > fParam3)
	{
		return 0;
	}
	fVar0 = -1f;
	if (!func_35(*uParam0, 4194304))
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

int func_167(var uParam0)
{
	return uParam0->f_18;
}

int func_168(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (WEAPON::_0x6AD66548840472E5(func_231(iVar0, 0)))
		{
			if (func_233(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_169(bool bParam0, var uParam1, var uParam2)
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

var func_170(var uParam0)
{
	return uParam0->f_23;
}

int func_171(var uParam0)
{
	return uParam0->f_21;
}

int func_172(var uParam0)
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

int func_173(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_234(iParam0, vParam4, 0.5f))
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

int func_174(int iParam0)
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
	if (func_235(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_175(int iParam0)
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

int func_176(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_236(iParam1))
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

int func_177(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_236(iParam1))
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

int func_178(var uParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40f;
	if (func_236(iParam1))
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

int func_179(int iParam0, var uParam1)
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

int func_180(int iParam0, int iParam1)
{
	if (PED::_0xB65A4DAB460A19BD(iParam0) == iParam1)
	{
		return 1;
	}
	if (func_237(iParam0, 1, 0, 0) != joaat("weapon_lasso"))
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

bool func_181(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

float func_182(int iParam0, int iParam1, bool bParam2, int iParam3)
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

int func_183(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_184(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

float func_184(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

float func_185(var uParam0)
{
	return uParam0->f_24;
}

int func_186(int iParam0)
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

int func_187(int iParam0)
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

int func_188(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_179(Global_35, &iVar1))
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
		fVar2 = func_182(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
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
		if (func_182(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
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

int func_189(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_228(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_190(uParam1, iVar0))
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
				if (!bParam2 || !func_190(uParam1, iVar1))
				{
					if (func_184(iVar1, Global_36, 1) < 5f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_190(var uParam0, int iParam1)
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

int func_191(int iParam0)
{
	if (func_65())
	{
		return 0;
	}
	return func_238(((*Global_1347702)[58 /*49*/])->f_15, 1);
}

int func_192(var uParam0)
{
	return uParam0->f_20;
}

int func_193(int iParam0, var uParam1, bool bParam2, float fParam3)
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

int func_194(int iParam0)
{
	if (!func_239(iParam0))
	{
		return -1;
	}
	return func_240(iParam0);
}

bool func_195(var uParam0, var uParam1)
{
	return (uParam0 && uParam1) != 0;
}

int func_196(int iParam0)
{
	return iParam0;
}

void func_197(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 - (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1));
}

void func_198(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		if (((*Global_1945938)[iParam0 /*18*/])->f_5 == 5 && !func_241(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, 0);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
		}
	}
}

void func_199(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
	}
}

void func_200(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 || iParam1);
}

int func_201(int iParam0, var uParam1)
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
		if (PED::IS_PED_IN_COMBAT(iParam0, func_242((bVar1 && !bVar0), Global_35, 0)))
		{
			return 1;
		}
	}
	return 0;
}

void func_202(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_220((*uParam0)[iVar0 /*17*/]))
		{
			func_147((*uParam0)[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

void func_203(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_149(&(((*uParam1)[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			func_243(iParam0, 0);
		}
	}
}

int func_204(int iParam0, var uParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;

	if (uParam1->f_3 > -1 && uParam1->f_3 < *uParam2)
	{
		iVar0 = uParam1->f_3;
		((*uParam2)[iVar0 /*17*/])->f_8 = 6;
		func_244(iParam0, (*uParam2)[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (func_124(((*uParam2)[iVar0 /*17*/])->f_6))
		{
			func_147((*uParam2)[iVar0 /*17*/], 11);
			return ((*Global_1945938)[((*uParam2)[iVar0 /*17*/])->f_6 /*18*/])->f_3;
		}
	}
	return 0;
}

int func_205(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_245(*uParam0);
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

int func_206(var uParam0, int iParam1)
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

void func_207(int* iParam0, int* iParam1)
{
	if (!func_134(iParam0, 23))
	{
		if (iParam1->f_7 == 648122183)
		{
			func_147(iParam1, 19);
			func_222(iParam0, 23);
			func_246(iParam1, 2);
		}
	}
}

int func_208(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (func_247(16))
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
					func_248(16);
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

void func_209(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_244(iParam0, (*uParam1)[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, iParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT((*uParam1)[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_210(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

var func_211(int iParam0)
{
	return (func_249(iParam0, 4) || func_249(iParam0, 5));
}

int func_212(int iParam0)
{
	return func_249(iParam0, 7);
}

int func_213(int iParam0)
{
	return func_249(iParam0, 6);
}

void func_214(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (func_220(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			func_244(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

int func_215(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, var uParam13, float fParam14, bool bParam15, int iParam16)
{
	int iVar0;
	bool bVar1;

	iVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_250(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, uParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_251(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_127(iParam2->f_6, 0, 1);
				iVar0 = 0;
			}
		}
		else if (!bVar1)
		{
			func_127(iParam2->f_6, 1, 1);
			iVar0 = 0;
		}
		if (bParam8)
		{
			func_252(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return iVar0;
}

int func_216(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_253(iParam1, 1))
		{
			return 1;
		}
	}
	else if (func_254(iParam1, 1))
	{
		func_255(iParam1, 1);
		return 1;
	}
	return 0;
}

void func_217(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_73((*uParam0)[iVar0 /*17*/], iParam1, bParam2);
		iVar0++;
	}
}

int func_218(int* iParam0, float fParam1, var uParam2)
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

void func_219(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 1101824977, true);
		PAD::DISABLE_CONTROL_ACTION(0, 966551065, true);
		PAD::DISABLE_CONTROL_ACTION(0, 668058244, true);
		PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	}
}

int func_220(var uParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_5))
	{
		return 1;
	}
	return 0;
}

int func_221(int iParam0)
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

void func_222(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_223(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_224(var uParam0, float fParam1)
{
	if (func_256(uParam0, fParam1))
	{
		func_223(uParam0);
		return 1;
	}
	return 0;
}

void func_225(int iParam0)
{
	if (!func_257(iParam0))
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

int func_226()
{
	if (func_258())
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

void func_227(var uParam0, var uParam1)
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

int func_228(bool bParam0, var uParam1, var uParam2)
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

int func_229(var uParam0)
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

void func_230(var uParam0)
{
	int iVar0;

	if (Global_1935630->f_38 == 0)
	{
		func_37(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(Global_1935630->f_34[iVar0])))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(&(Global_1935630->f_34[iVar0])))
				{
					func_36(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}

var func_231(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

int func_232(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_233(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_233(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_234(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

int func_235(int iParam0, int iParam1, bool bParam2, int iParam3)
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

int func_236(int iParam0)
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

int func_237(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_238(int iParam0, bool bParam1)
{
	switch (func_259(iParam0))
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

bool func_239(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_240(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_3;
	}
	return 0;
}

bool func_241(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1) != 0;
}

int func_242(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_243(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_223(&(uParam0->f_18));
}

void func_244(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	char* sVar0;
	int iVar1;

	if (func_124(iParam1->f_6))
	{
		if (iParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		func_149(&(iParam1->f_6), 0, 1);
	}
	if (!func_124(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_220(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_260(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824, 0, 1704213876, iParam1->f_10, 0);
			if (func_124(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_252(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_261(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						func_262(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_125(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					func_261(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					func_127(iParam1->f_6, 0, 1);
				}
				else
				{
					func_127(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

int func_245(int iParam0)
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

void func_246(int* iParam0, int iParam1)
{
	if (!func_146(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_147(iParam0, 14);
		}
	}
}

bool func_247(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_248(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_249(int iParam0, int iParam1)
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

bool func_250(int* iParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, var uParam8, float fParam9, bool bParam10, int iParam11)
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

bool func_251(int iParam0, int iParam1)
{
	if (iParam1 && !func_124(iParam0))
	{
		return false;
	}
	return !func_241(iParam0, 4);
}

void func_252(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (iParam3 && !func_124(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = func_196(iParam0);
	func_261(iParam0, 18, 0, 1);
	func_261(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1);
	}
	HUD::_UIPROMPT_SET_GROUP(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam4, iParam2);
}

bool func_253(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_124(iParam0))
	{
		return false;
	}
	iVar0 = func_196(iParam0);
	if (HUD::_0xCD072523791DDC1B(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

bool func_254(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_124(iParam0))
	{
		return false;
	}
	iVar0 = func_196(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_255(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_124(iParam0))
	{
		return;
	}
	iVar0 = func_196(iParam0);
	HUD::_UIPROMPT_RESTART_MODES(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

int func_256(var uParam0, float fParam1)
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

bool func_257(int iParam0)
{
	return func_241(iParam0, 2);
}

int func_258()
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

int func_259(int iParam0)
{
	if (!func_239(iParam0))
	{
		return -1;
	}
	return func_263(iParam0);
}

int func_260(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_241(iVar0, 2))
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
				func_264(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}

void func_261(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam3 && !func_124(iParam0))
	{
		return;
	}
	iVar0 = func_196(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam1, iParam2);
}

void func_262(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4)
{
	int iVar0;

	if (iParam4 && !func_124(iParam0))
	{
		return;
	}
	iVar0 = func_196(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, MISC::_CREATE_VAR_STRING(10, sParam1, sParam2, sParam3));
}

int func_263(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_265(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

void func_264(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, var uParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_198(iParam0, 1);
	func_199(iParam0, 1);
	func_200(iParam0, 128);
}

int func_265(int iParam0)
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

