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
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	struct<63> Local_26 = { 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	vector3 vLocal_93 = { 0f, 0f, 0f };
	var uLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	bool bLocal_100 = false;
	bool bLocal_101 = false;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	if (iScriptParam_0 != -1)
	{
	}
	else
	{
		func_1();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	Global_1430221->f_4 = 1;
	iLocal_92 = iScriptParam_0;
	func_5(&Local_26, 0, 537/*func_2*/, 752/*func_3*/, 1028/*func_4*/);
	func_5(&Local_26, 1, 1115/*func_6*/, 1187/*func_7*/, 1401/*func_8*/);
	func_5(&Local_26, 2, 1413/*func_9*/, 1498/*func_10*/, 1710/*func_11*/);
	func_5(&Local_26, 3, 1722/*func_12*/, 1734/*func_13*/, 1862/*func_14*/);
	func_5(&Local_26, 4, 1874/*func_15*/, 1892/*func_16*/, 1991/*func_17*/);
	func_5(&Local_26, 5, 2003/*func_18*/, 2057/*func_19*/, 2238/*func_20*/);
	func_5(&Local_26, 6, 2258/*func_21*/, 2422/*func_22*/, 3352/*func_23*/);
	func_5(&Local_26, 7, 3450/*func_24*/, 3502/*func_25*/, 3566/*func_26*/);
	func_5(&Local_26, 8, 3574/*func_27*/, 3582/*func_28*/, 3600/*func_29*/);
	func_30(&Local_26, 0);
	while (!func_31(1))
	{
		BUILTIN::WAIT(0);
		func_32();
		func_33(&Local_26);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_1()
{
	var uVar0;

	Global_1430221->f_4 = 0;
	func_34(1);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_97) && !ENTITY::IS_ENTITY_DEAD(iLocal_97))
	{
		uVar0 = VEHICLE::_0x45853F4E17D847D5(iLocal_97);
		if (VEHICLE::_0xC29996A337BDD099(uVar0))
		{
			VEHICLE::_0x38E7DD70A242D5CB(uVar0, 1);
		}
	}
	func_36(func_35());
	func_36(func_37());
	if (iLocal_99 != -1)
	{
		func_38(iLocal_99);
		func_39(iLocal_99, 1024);
	}
	if (func_41(1870112085, func_40(0), 1084182731, 1) >= 1)
	{
		func_42(1870112085, 1, -142743235, 0, 0);
	}
	if (iLocal_106)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(0);
		}
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
		STREAMING::CLEAR_FOCUS();
		if (STREAMING::_0xCF45DF50C7775F2A())
		{
			STREAMING::_0x5A8B01199C3E79C3();
		}
		CAM::SET_CINEMATIC_MODE_ACTIVE(false);
		if (bLocal_100)
		{
			TASK::CLEAR_PED_TASKS(func_43(1), 1, 0);
			ENTITY::SET_ENTITY_INVINCIBLE(func_43(1), false);
		}
		if (bLocal_101)
		{
			TASK::CLEAR_PED_TASKS(func_43(7), 1, 0);
			ENTITY::SET_ENTITY_INVINCIBLE(func_43(7), false);
		}
	}
	if (ANIMSCENE::_0x25557E324489393C(iLocal_105))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_105);
	}
	func_44(1);
	return 1;
}

void func_2()
{
	func_45();
	func_46(-1, 0, 0, 0, 0);
	LAW::_0xE94B5E938619712E();
	func_34(0);
	func_47(&(Global_1392581->f_3), 8);
	CAM::DO_SCREEN_FADE_OUT(2000);
	iLocal_102 = 0;
	iLocal_91 = func_48();
	iLocal_99 = func_49(iLocal_92);
	iLocal_106 = 1;
	if (func_51(Global_35, func_43(7), func_50(7), 1) && !TASK::IS_PED_IN_WRITHE(func_43(7)))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(func_43(7), true);
		bLocal_101 = true;
	}
	if (func_51(Global_35, func_43(1), func_50(1), 1) && !TASK::IS_PED_IN_WRITHE(func_43(1)))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(func_43(1), true);
		bLocal_100 = true;
	}
	func_52(iLocal_91, 0, &vLocal_93, &uLocal_96);
	if (!STREAMING::_0xCF45DF50C7775F2A())
	{
		STREAMING::_0x513F8AA5BF2F17CF(vLocal_93, 40f, 0);
	}
	func_53(func_37());
	iLocal_103 = MISC::GET_GAME_TIMER();
}

int func_3()
{
	int iVar0;

	LAW::_0xE94B5E938619712E();
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		return -1;
	}
	if (!iLocal_102)
	{
		func_54(iLocal_99);
		func_55(iLocal_99, 1024);
		func_39(iLocal_99, 2);
		func_39(iLocal_99, 65536);
		func_39(iLocal_99, 4096);
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (iVar0 != iLocal_99)
			{
				VEHICLE::_0xF8F7DA13CFBD4532(((*Global_1425371)[iVar0 /*373*/])->f_1, 1);
				func_55(iVar0, 2);
				VEHICLE::_0x0D5FDF0D36FA10CD(((*Global_1425371)[iVar0 /*373*/])->f_1);
			}
			iVar0++;
		}
		VEHICLE::DELETE_ALL_TRAINS();
		func_57(func_56(PLAYER::PLAYER_ID()), 250f, 1, 0, 0, 0, 0);
		iLocal_102 = 1;
	}
	if (!VEHICLE::_0xC29996A337BDD099(((*Global_1425371)[iLocal_99 /*373*/])->f_1))
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_103) > 20000)
		{
			return 8;
		}
		return -1;
	}
	if (Global_1310750->f_16037 != 0)
	{
		func_45();
		func_46(-1, 0, 0, 0, 0);
		return -1;
	}
	if (!STREAMING::_0x0909F71B5C070797())
	{
		return -1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::_0x6E585A616ABB8401(((*Global_1425371)[iLocal_99 /*373*/])->f_1)))
	{
		return -1;
	}
	return 1;
}

void func_4()
{
	LAW::_0xE94B5E938619712E();
	STREAMING::_0x5A8B01199C3E79C3();
	STREAMING::CLEAR_FOCUS();
}

void func_5(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 >= 20)
	{
		return;
	}
	uParam0->f_1[iVar0 /*3*/] = iParam2;
	(uParam0->f_1[iVar0 /*3*/])->f_1 = iParam3;
	(uParam0->f_1[iVar0 /*3*/])->f_2 = iParam4;
}

void func_6()
{
	LAW::_0xE94B5E938619712E();
	if (VEHICLE::_0xC29996A337BDD099(((*Global_1425371)[iLocal_99 /*373*/])->f_1))
	{
		VEHICLE::_0x718EB706B6E998A0(((*Global_1425371)[iLocal_99 /*373*/])->f_1);
		VEHICLE::_0xD0BA1853D76683C8(((*Global_1425371)[iLocal_99 /*373*/])->f_1, vLocal_93, uLocal_96);
	}
	iLocal_103 = MISC::GET_GAME_TIMER();
}

int func_7()
{
	LAW::_0xE94B5E938619712E();
	if (!ENTITY::DOES_ENTITY_EXIST(VEHICLE::_0x6E585A616ABB8401(((*Global_1425371)[iLocal_99 /*373*/])->f_1)))
	{
		VEHICLE::_0x718EB706B6E998A0(((*Global_1425371)[iLocal_99 /*373*/])->f_1);
		VEHICLE::_0xD0BA1853D76683C8(((*Global_1425371)[iLocal_99 /*373*/])->f_1, vLocal_93, uLocal_96);
		if ((MISC::GET_GAME_TIMER() - iLocal_103) > 20000)
		{
			return 8;
		}
		return -1;
	}
	else
	{
		iLocal_97 = VEHICLE::_0x6E585A616ABB8401(((*Global_1425371)[iLocal_99 /*373*/])->f_1);
		VEHICLE::_0xA7966807953A18EE(((*Global_1425371)[iLocal_99 /*373*/])->f_1, 0f);
		VEHICLE::_0x15206E88FF7617DF(((*Global_1425371)[iLocal_99 /*373*/])->f_1, 0f);
		if (VEHICLE::_0xC29996A337BDD099(((*Global_1425371)[iLocal_99 /*373*/])->f_1))
		{
			VEHICLE::_0x718EB706B6E998A0(((*Global_1425371)[iLocal_99 /*373*/])->f_1);
			VEHICLE::_0xD0BA1853D76683C8(((*Global_1425371)[iLocal_99 /*373*/])->f_1, vLocal_93, uLocal_96);
		}
	}
	if (!VEHICLE::_0xBD3C4A2ED509205E(iLocal_97))
	{
		return -1;
	}
	return 2;
}

void func_8()
{
	LAW::_0xE94B5E938619712E();
}

void func_9()
{
	LAW::_0xE94B5E938619712E();
	iLocal_103 = MISC::GET_GAME_TIMER();
	if (func_41(1870112085, func_40(0), 1084182731, 1) >= 1)
	{
		func_42(1870112085, 1, -142743235, 0, 0);
	}
	iLocal_98 = VEHICLE::GET_TRAIN_CARRIAGE(iLocal_97, 4);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_98))
	{
		ENTITY::_0x6C31B06E91518269(iLocal_98, 1);
	}
}

int func_10()
{
	vector3 vVar0;
	int iVar3;

	LAW::_0xE94B5E938619712E();
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_98) || ENTITY::IS_ENTITY_DEAD(iLocal_98))
	{
		iLocal_98 = VEHICLE::GET_TRAIN_CARRIAGE(iLocal_97, 4);
		return -1;
	}
	else
	{
		if (!ENTITY::_0xC2E71D7E0A7B4C89(iLocal_98))
		{
			ENTITY::_0x6C31B06E91518269(iLocal_98, 1);
			return -1;
		}
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_98, true, false) };
		if (!TASK::DOES_SCENARIO_EXIST_IN_AREA(vVar0, 5f, 0, Global_35, 0))
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_103) > 20000)
			{
				return 8;
			}
			else
			{
				iVar3 = (MISC::GET_GAME_TIMER() - iLocal_103);
				return -1;
			}
		}
		if (!func_58(Global_35, -1518311320))
		{
			TASK::TASK_USE_NEAREST_TRAIN_SCENARIO_TO_COORD_WARP(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_98, true, false), 5f);
		}
	}
	if (func_58(Global_35, -1518311320))
	{
		func_59(func_56(PLAYER::PLAYER_ID()), 2f, 0);
		CAM::SET_CINEMATIC_MODE_ACTIVE(true);
		iLocal_103 = MISC::GET_GAME_TIMER();
		return 3;
	}
	return -1;
}

void func_11()
{
	LAW::_0xE94B5E938619712E();
}

void func_12()
{
	LAW::_0xE94B5E938619712E();
}

int func_13()
{
	if (!CAM::IS_CINEMATIC_CAM_RENDERING())
	{
		iLocal_103 = MISC::GET_GAME_TIMER();
	}
	LAW::_0xE94B5E938619712E();
	if ((MISC::GET_GAME_TIMER() - iLocal_103) > 3500)
	{
		VEHICLE::SET_VEHICLE_HANDBRAKE(iLocal_97, false);
		VEHICLE::_0xA72B1BF3857B94D7(iLocal_97, 1);
		VEHICLE::_0xDD100CE1EBBF37E3(iLocal_97, 0);
		VEHICLE::_0x4182C037AA1F0091(iLocal_97, 0);
		VEHICLE::_0xA7966807953A18EE(((*Global_1425371)[iLocal_99 /*373*/])->f_1, 8f);
		VEHICLE::_0x15206E88FF7617DF(((*Global_1425371)[iLocal_99 /*373*/])->f_1, 8f);
		VEHICLE::_0x34BCF6209B9668A7(((*Global_1425371)[iLocal_99 /*373*/])->f_1, 1);
		return 4;
	}
	return -1;
}

void func_14()
{
	LAW::_0xE94B5E938619712E();
}

void func_15()
{
	LAW::_0xE94B5E938619712E();
	iLocal_103 = MISC::GET_GAME_TIMER();
}

int func_16()
{
	LAW::_0xE94B5E938619712E();
	if ((MISC::GET_GAME_TIMER() - iLocal_103) > 6000)
	{
		if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(3000);
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			return 5;
		}
		return -1;
	}
	if ((CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN()) && CAM::IS_CINEMATIC_CAM_RENDERING())
	{
		CAM::DO_SCREEN_FADE_IN(1000);
	}
	return -1;
}

void func_17()
{
	LAW::_0xE94B5E938619712E();
}

void func_18()
{
	LAW::_0xE94B5E938619712E();
	if (!ANIMSCENE::_0x25557E324489393C(iLocal_105))
	{
		iLocal_105 = ANIMSCENE::_CREATE_ANIM_SCENE(func_60(-1), 0, 0, false, true);
	}
	if (!ANIMSCENE::_0x59606519FF9D3EC2(iLocal_105, 1))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(iLocal_105);
	}
}

int func_19()
{
	LAW::_0xE94B5E938619712E();
	if ((((ANIMSCENE::_0x25557E324489393C(iLocal_105) && !ANIMSCENE::_0xCBFC7725DE6CE2E0(iLocal_105, 0)) && CAM::IS_SCREEN_FADED_OUT()) && !CAM::IS_SCREEN_FADING_IN()) && ANIMSCENE::_0x477122B8D05E7968(iLocal_105, 1, 0))
	{
		ANIMSCENE::START_ANIM_SCENE(iLocal_105);
		func_52(iLocal_92, 1, &vLocal_93, &uLocal_96);
	}
	if (ANIMSCENE::_0x25557E324489393C(iLocal_105))
	{
		if (ANIMSCENE::_0xCBFC7725DE6CE2E0(iLocal_105, 0) && CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(500);
			func_53(func_35());
			func_57(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 40f, 1, 0, 0, 0, 0);
		}
		if (ANIMSCENE::_0xCDC5512A407CF08D(iLocal_105) || ANIMSCENE::_0xD8254CB2C586412B(iLocal_105, 0))
		{
			CAM::DO_SCREEN_FADE_OUT(0);
			return 6;
		}
	}
	return -1;
}

void func_20()
{
	func_36(func_35());
	LAW::_0xE94B5E938619712E();
}

void func_21()
{
	int iVar0;
	int iVar1;

	LAW::_0xE94B5E938619712E();
	STREAMING::REQUEST_COLLISION_AT_COORD(vLocal_93);
	if (VEHICLE::_0xC29996A337BDD099(((*Global_1425371)[iLocal_99 /*373*/])->f_1))
	{
		VEHICLE::_0xD0BA1853D76683C8(((*Global_1425371)[iLocal_99 /*373*/])->f_1, vLocal_93, uLocal_96);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_98))
	{
		ENTITY::_0x6C31B06E91518269(iLocal_98, 1);
	}
	VEHICLE::_0x4182C037AA1F0091(iLocal_97, 1);
	VEHICLE::_0xA7966807953A18EE(((*Global_1425371)[iLocal_99 /*373*/])->f_1, 0f);
	VEHICLE::_0x15206E88FF7617DF(((*Global_1425371)[iLocal_99 /*373*/])->f_1, 0f);
	iLocal_103 = MISC::GET_GAME_TIMER();
	iVar0 = func_61(iLocal_91, iLocal_92);
	func_62(iVar0, 0, 0, 0, 1);
	iVar1 = func_63(iLocal_91, 1);
	func_64(1, iVar1, -695085701, 1, iVar0);
}

int func_22()
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	var uVar7;
	vector3 vVar8;
	float fVar11;
	vector3 vVar12;
	float fVar15;
	int iVar16;

	LAW::_0xE94B5E938619712E();
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (STREAMING::_0xCF45DF50C7775F2A())
		{
			if (!STREAMING::_0x0909F71B5C070797())
			{
				return -1;
			}
		}
		else if (func_65(Global_35, vLocal_93, 1) < 1000f)
		{
			vVar0 = { vLocal_93 };
			fVar6 = func_66(iLocal_97, vLocal_93, &vVar3);
			if (!func_67(vVar3))
			{
				vVar0 = { vVar3 };
			}
			STREAMING::_0x513F8AA5BF2F17CF(vVar0, fVar6, 1);
			iLocal_103 = MISC::GET_GAME_TIMER();
			return -1;
		}
		else
		{
			if (VEHICLE::_0xC29996A337BDD099(((*Global_1425371)[iLocal_99 /*373*/])->f_1))
			{
				VEHICLE::_0xD0BA1853D76683C8(((*Global_1425371)[iLocal_99 /*373*/])->f_1, vLocal_93, uLocal_96);
				VEHICLE::_0xA7966807953A18EE(((*Global_1425371)[iLocal_99 /*373*/])->f_1, 0f);
				VEHICLE::_0x15206E88FF7617DF(((*Global_1425371)[iLocal_99 /*373*/])->f_1, 0f);
			}
			if (!func_58(Global_35, -1518311320))
			{
				ENTITY::SET_ENTITY_COORDS(Global_35, vLocal_93, true, false, true, true);
			}
			return -1;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_98))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_97))
			{
				iLocal_97 = VEHICLE::_0x6E585A616ABB8401(((*Global_1425371)[iLocal_99 /*373*/])->f_1);
				VEHICLE::_0x718EB706B6E998A0(((*Global_1425371)[iLocal_99 /*373*/])->f_1);
				VEHICLE::_0xD0BA1853D76683C8(((*Global_1425371)[iLocal_99 /*373*/])->f_1, vLocal_93, uLocal_96);
				return -1;
			}
			else
			{
				iLocal_98 = VEHICLE::GET_TRAIN_CARRIAGE(iLocal_97, 4);
				VEHICLE::_0xA7966807953A18EE(((*Global_1425371)[iLocal_99 /*373*/])->f_1, 0f);
				VEHICLE::_0x15206E88FF7617DF(((*Global_1425371)[iLocal_99 /*373*/])->f_1, 0f);
				return -1;
			}
		}
		else if (!ENTITY::_0xC2E71D7E0A7B4C89(iLocal_98))
		{
			ENTITY::_0x6C31B06E91518269(iLocal_98, 1);
			return -1;
		}
	}
	if ((MISC::GET_GAME_TIMER() - iLocal_103) < 500)
	{
		return -1;
	}
	if (!func_58(Global_35, -1518311320))
	{
		if (TASK::DOES_SCENARIO_EXIST_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_98, true, false), 5f, 0, Global_35, 0))
		{
			TASK::TASK_USE_NEAREST_TRAIN_SCENARIO_TO_COORD_WARP(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_98, true, false), 5f);
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			return -1;
		}
	}
	if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
	{
		func_59(func_56(PLAYER::PLAYER_ID()), 2f, 0);
		VEHICLE::_0x4182C037AA1F0091(iLocal_97, 1);
		VEHICLE::_0xA7966807953A18EE(((*Global_1425371)[iLocal_99 /*373*/])->f_1, 8f);
		VEHICLE::_0x15206E88FF7617DF(((*Global_1425371)[iLocal_99 /*373*/])->f_1, 8f);
		uVar7 = VEHICLE::_0x45853F4E17D847D5(iLocal_97);
		VEHICLE::_0x34BCF6209B9668A7(uVar7, 1);
		VEHICLE::_0x38E7DD70A242D5CB(uVar7, 0);
		CAM::DO_SCREEN_FADE_IN(3000);
		if (bLocal_100)
		{
			func_68(iLocal_92, &vVar8, &fVar11, 1);
			func_69(func_43(1), vVar8, fVar11, 32, 1073741824);
			TASK::TASK_STAND_STILL(func_43(1), -1);
		}
		if (bLocal_101)
		{
			func_68(iLocal_92, &vVar12, &fVar15, 0);
			func_69(func_43(7), vVar12, fVar15, 32, 1073741824);
			TASK::TASK_STAND_STILL(func_43(7), -1);
		}
		STREAMING::_0x5A8B01199C3E79C3();
		STREAMING::CLEAR_FOCUS();
		iLocal_104 = MISC::GET_GAME_TIMER();
		return -1;
	}
	else if (CAM::IS_SCREEN_FADED_IN())
	{
		if (!PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID()) || !ENTITY::DOES_ENTITY_EXIST(iLocal_97))
		{
			if (STREAMING::_0xCF45DF50C7775F2A())
			{
				STREAMING::_0x5A8B01199C3E79C3();
			}
			return 7;
		}
	}
	if (bLocal_100)
	{
		PED::SET_PED_MOVE_RATE_OVERRIDE(func_43(1), 0f);
		if (!func_58(func_43(1), -982327190))
		{
			TASK::TASK_STAND_STILL(func_43(1), -1);
		}
	}
	if (bLocal_101)
	{
		PED::SET_PED_MOVE_RATE_OVERRIDE(func_43(7), 0f);
		if (!func_58(func_43(7), -982327190))
		{
			TASK::TASK_STAND_STILL(func_43(7), -1);
		}
	}
	iVar16 = (MISC::GET_GAME_TIMER() - iLocal_104);
	if (iVar16 < 40000 && !VEHICLE::_0xE887BD31D97793F6(iLocal_97))
	{
		return -1;
	}
	if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
	{
		CAM::DO_SCREEN_FADE_IN(3000);
		STREAMING::CLEAR_FOCUS();
		if (STREAMING::_0xCF45DF50C7775F2A())
		{
			STREAMING::_0x5A8B01199C3E79C3();
		}
	}
	VEHICLE::_0xA7966807953A18EE(((*Global_1425371)[iLocal_99 /*373*/])->f_1, 0f);
	VEHICLE::_0x15206E88FF7617DF(((*Global_1425371)[iLocal_99 /*373*/])->f_1, 0f);
	return 7;
}

void func_23()
{
	if (bLocal_100)
	{
		TASK::CLEAR_PED_TASKS(func_43(1), 1, 0);
		ENTITY::SET_ENTITY_INVINCIBLE(func_43(1), false);
	}
	if (bLocal_101)
	{
		TASK::CLEAR_PED_TASKS(func_43(7), 1, 0);
		ENTITY::SET_ENTITY_INVINCIBLE(func_43(7), false);
	}
	LAW::_0xE94B5E938619712E();
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	CAM::SET_CINEMATIC_MODE_ACTIVE(false);
	TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
}

void func_24()
{
	iLocal_106 = 0;
	LAW::_0xE94B5E938619712E();
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
	func_70(&(Global_1392581->f_3), 8);
	iLocal_103 = MISC::GET_GAME_TIMER();
	func_36(func_37());
}

int func_25()
{
	LAW::_0xE94B5E938619712E();
	if (((MISC::GET_GAME_TIMER() - iLocal_103) > 30000 || !PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID())) || PED::_0x5407B7288D0478B7(PLAYER::PLAYER_PED_ID(), 0) > 0)
	{
		return 8;
	}
	return -1;
}

void func_26()
{
}

void func_27()
{
}

int func_28()
{
	func_1();
	SCRIPTS::TERMINATE_THIS_THREAD();
	return -1;
}

void func_29()
{
}

void func_30(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 >= 20)
	{
		return;
	}
	*uParam0 = iVar0;
	func_71(uParam0);
}

int func_31(bool bParam0)
{
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
	return 0;
}

void func_32()
{
	if (Local_26.f_62 != 7 && Local_26.f_62 != 8)
	{
		if (Local_26.f_62 != -1)
		{
			VEHICLE::SET_DISABLE_RANDOM_TRAINS_THIS_FRAME(true);
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			if (Local_26.f_62 != 0 && Local_26.f_62 != 1)
			{
				CAM::_0x702B75DC9D3EDE56(true);
			}
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			HUD::_0x5651516D947ABC53();
		}
		PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	}
}

void func_33(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	if (uParam0->f_62 != -1 && uParam0->f_64 == -1)
	{
		Call_Loc((uParam0->f_1[uParam0->f_62 /*3*/])->f_1);
		uParam0->f_64 = StackVal;
	}
	while (uParam0->f_64 != -1)
	{
		if (uParam0->f_62 != -1)
		{
			Call_Loc((uParam0->f_1[uParam0->f_62 /*3*/])->f_2);
		}
		uParam0->f_62 = uParam0->f_64;
		Call_Loc(&uParam0->f_1[uParam0->f_62 /*3*/]);
		Call_Loc((uParam0->f_1[uParam0->f_62 /*3*/])->f_1);
		uParam0->f_64 = StackVal;
		iVar0++;
		if (iVar0 > 10)
		{
		}
	else
	{
		}
	}
}

void func_34(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_72(Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_73(Global_1935630, 4194304);
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

char* func_35()
{
	return "FastTravel_Train_Ticket_Clouds_Sequence_Scene";
}

void func_36(char* sParam0)
{
	AUDIO::STOP_AUDIO_SCENE(sParam0);
}

char* func_37()
{
	return "FastTravel_Train_Ticket_Sequence_Scene";
}

void func_38(int iParam0)
{
	func_39(iParam0, 16);
}

void func_39(int iParam0, int iParam1)
{
	if (!func_74(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0 /*5*/] = (&Global_40.f_11029[iParam0 /*5*/] - (Global_40.f_11029[iParam0 /*5*/] && iParam1));
}

struct<4> func_40(bool bParam0)
{
	return func_76(1328661203, func_75(), -1591664384, bParam0);
}

int func_41(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;

	if (!func_77(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_76(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_78(bParam6), &Var0, 0);
	return uVar4;
}

int func_42(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_77(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_79(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_80(iParam0, iParam1, iParam2, iParam3, bParam4);
	}
	Var5 = { func_76(iParam0, Var0, Var0.f_4, bParam4) };
	return func_81(iParam0, &Var5, &Var0, iParam1, iParam2, iParam3, bParam4);
}

int func_43(int iParam0)
{
	iParam0 = func_82(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0 /*45*/];
}

void func_44(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (bParam0)
	{
		VEHICLE::_0x2A7413168F6CD5A8();
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			func_55(iVar0, 4096);
			if (VEHICLE::_0xC29996A337BDD099(((*Global_1425371)[iVar0 /*373*/])->f_1))
			{
				VEHICLE::_0xF8F7DA13CFBD4532(((*Global_1425371)[iVar0 /*373*/])->f_1, 0);
			}
			iVar0++;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			if (VEHICLE::_0xC29996A337BDD099(((*Global_1425371)[iVar1 /*373*/])->f_1))
			{
				VEHICLE::_0xF8F7DA13CFBD4532(((*Global_1425371)[iVar1 /*373*/])->f_1, 1);
			}
			iVar1++;
		}
		VEHICLE::_0x4C05B42A8D937796();
		VEHICLE::_0x16B86A49E072AA85();
	}
	if (func_83() == -1)
	{
		Global_1430221->f_1 = !bParam0;
	}
}

void func_45()
{
	if (!func_84(&Global_1327479))
	{
		return;
	}
	if (SCRIPTS::DOES_SCRIPT_EXIST(&(((*Global_1310750)[&Global_1327479 /*111*/])->f_40)))
	{
		if (SCRIPTS::HAS_SCRIPT_LOADED(&(((*Global_1310750)[&Global_1327479 /*111*/])->f_40)))
		{
			SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(((*Global_1310750)[&Global_1327479 /*111*/])->f_40));
		}
	}
	func_85(0);
	Global_1327479 = -1;
	Global_1310750->f_16075 = 0;
	Global_1310750->f_16076 = 0;
	Global_1310750->f_16103 = { 0f, 0f, 0f };
}

void func_46(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	if (func_86() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0 /*9*/];
		if (((func_84(iVar1) && !func_87(iVar1, iParam2)) && (!bParam3 || !func_88(iVar1))) && (!bParam4 || !func_89(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_90(iVar0);
			}
		}
		iVar0++;
	}
}

void func_47(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

var func_48()
{
	return Global_1894899->f_2;
}

int func_49(int iParam0)
{
	switch (iParam0)
	{
		case 23:
		case 28:
		case 75:
		case 105:
			return 0;
		case 5:
		case 69:
		case 76:
		case 78:
			return 1;
	}
	return 0;
}

float func_50(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	var uVar12;

	iParam0 = func_82(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_91(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return -1f;
	}
	iVar1 = func_92(iParam0);
	iVar2 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	fVar3 = TASK::_0xEB67D4E056C85A81(iVar1);
	fVar4 = TASK::_0x78D8C1D4EB80C588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_92(iParam0) + 1;
	fVar6 = func_93(iParam0);
	fVar7 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar1));
	fVar8 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	uVar12 = func_94(fVar3, fVar4, fVar11);
	return uVar12;
}

int func_51(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return 1;
	}
	return 0;
}

void func_52(int iParam0, bool bParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 5:
			if (bParam1)
			{
				*uParam2 = { 2643.1f, -1482.2f, 45.5f };
				*uParam3 = 0;
			}
			else
			{
				*uParam2 = { 2643.1f, -1482.2f, 45.5f };
				*uParam3 = 0;
			}
			break;
		case 23:
			if (bParam1)
			{
				*uParam2 = { -1143f, -545.4f, 86.6f };
				*uParam3 = 0;
			}
			else
			{
				*uParam2 = { -1067.019f, -604.0603f, 78.0298f };
				*uParam3 = 0;
			}
			break;
		case 28:
			if (bParam1)
			{
				*uParam2 = { -1280f, 477.1f, 93.7f };
				*uParam3 = 0;
			}
			else
			{
				*uParam2 = { -1333.328f, 374.2152f, 94.938f };
				*uParam3 = 0;
			}
			break;
		case 69:
			if (bParam1)
			{
				*uParam2 = { 1529.7f, 477.9f, 90.2f };
				*uParam3 = 1;
			}
			else
			{
				*uParam2 = { 1529.595f, 405.6096f, 89.3616f };
				*uParam3 = 1;
			}
			break;
		case 76:
			if (bParam1)
			{
				*uParam2 = { -190.6f, 589.1f, 113.2f };
				*uParam3 = 0;
			}
			else
			{
				*uParam2 = { -136.938f, 659.54f, 112.672f };
				*uParam3 = 0;
			}
			break;
		case 78:
			if (bParam1)
			{
				*uParam2 = { 2884.136f, 1211.772f, 44.32313f };
				*uParam3 = 0;
			}
			else
			{
				*uParam2 = { 2978.219f, 1344.3f, 42.941f };
				*uParam3 = 0;
			}
			break;
		case 105:
			if (bParam1)
			{
				*uParam2 = { 1196.2f, -1281.2f, 76.6f };
				*uParam3 = 0;
			}
			else
			{
				*uParam2 = { 1307.31f, -1382.5f, 75.3375f };
				*uParam3 = 0;
			}
			break;
	}
}

void func_53(char* sParam0)
{
	AUDIO::START_AUDIO_SCENE(sParam0);
}

int func_54(int iParam0)
{
	if (!func_74(iParam0))
	{
		return 0;
	}
	if (!VEHICLE::_0xC29996A337BDD099(((*Global_1425371)[iParam0 /*373*/])->f_1))
	{
		return 0;
	}
	func_55(iParam0, 16);
	return VEHICLE::_0x6E585A616ABB8401(((*Global_1425371)[iParam0 /*373*/])->f_1);
}

void func_55(int iParam0, int iParam1)
{
	if (!func_74(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0 /*5*/] = (Global_40.f_11029[iParam0 /*5*/] || iParam1);
}

Vector3 func_56(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

void func_57(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 3490746;
	if (bParam4)
	{
		iVar0 |= 1;
	}
	if (bParam5)
	{
		iVar0 |= 72;
	}
	if (bParam6)
	{
		iVar0 |= 6;
	}
	if (bParam7)
	{
		iVar0 |= 524288;
	}
	if (bParam8)
	{
		iVar0 |= 131072;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

int func_58(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	return 0;
}

void func_59(vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 16384;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

var func_60(int iParam0)
{
	char* sVar0;
	char* sVar1;
	var uVar2;

	sVar0 = "script@respawn@sky@SkyTL_";
	sVar1 = func_98(func_97(func_95(iParam0), func_96(), 1, 63));
	uVar2 = func_98(func_97(sVar0, sVar1, 1, 63));
	return uVar2;
}

int func_61(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 23:
			switch (iParam1)
			{
				case 105:
					return 390;
				case 5:
					return 750;
				case 78:
					return 1050;
				case 28:
					return 420;
				case 76:
					return 460;
				case 69:
					return 630;
				default:
					break;
			}
			break;
		case 105:
			switch (iParam1)
			{
				case 23:
					return 390;
				case 5:
					return 480;
				case 78:
					return 840;
				case 28:
					return 750;
				case 76:
					return 790;
				case 69:
					return 590;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 23:
					return 750;
				case 105:
					return 480;
				case 78:
					return 510;
				case 28:
					return 1250;
				case 76:
					return 1000;
				case 69:
					return 320;
				default:
					break;
			}
			break;
		case 78:
			switch (iParam1)
			{
				case 23:
					return 1050;
				case 105:
					return 840;
				case 5:
					return 510;
				case 28:
					return 880;
				case 76:
					return 670;
				case 69:
					return 440;
				default:
					break;
			}
			break;
		case 28:
			switch (iParam1)
			{
				case 23:
					return 420;
				case 105:
					return 750;
				case 5:
					return 1250;
				case 78:
					return 880;
				case 76:
					return 360;
				case 69:
					return 920;
				default:
					break;
			}
			break;
		case 76:
			switch (iParam1)
			{
				case 23:
					return 460;
				case 105:
					return 790;
				case 5:
					return 1000;
				case 78:
					return 670;
				case 28:
					return 360;
				case 69:
					return 220;
				default:
					break;
			}
			break;
		case 69:
			switch (iParam1)
			{
				case 23:
					return 630;
				case 105:
					return 590;
				case 5:
					return 320;
				case 78:
					return 440;
				case 28:
					return 920;
				case 76:
					return 220;
				default:
					break;
			}
			break;
	}
	return 0;
}

void func_62(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_99(iParam0);
	if (bParam3)
	{
		func_100(iParam0, sParam1, iParam2);
	}
}

int func_63(int iParam0, int iParam1)
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

void func_64(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_101(iParam1, iParam2);
	func_102(iParam1, iParam4);
	func_103(iParam1, iParam4);
	TELEMETRY::_0x2A374E6F0075EE81(func_104(iParam0), func_105(iParam1), iParam2, iParam3, iParam4);
}

float func_65(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

float func_66(int iParam0, vector3 vParam1, var uParam4)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	float fVar5;

	fVar5 = 40f;
	if (!func_67(vParam1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			iVar3 = VEHICLE::_0x1180A2974D251B7B(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0));
			iVar4 = VEHICLE::_0xAF787E081AC4A8EE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0));
			if (iVar3 >= 0)
			{
				vVar0 = { VEHICLE::_0xBA958F68031DDBFC(iVar4, iVar3) };
				if (!func_67(vVar0))
				{
					*uParam4 = { func_106(vParam1, vVar0) };
					fVar5 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vParam1, true);
				}
			}
		}
	}
	if (fVar5 > 100f)
	{
		fVar5 = 100f;
	}
	return fVar5;
}

int func_67(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_68(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 5:
			if (!bParam3)
			{
				*uParam1 = { 2755.556f, -1418.491f, 45.2074f };
			}
			else
			{
				*uParam1 = { 2756.556f, -1418.491f, 45.2074f };
			}
			*uParam2 = 145f;
			break;
		case 23:
			if (!bParam3)
			{
				*uParam1 = { -1101.923f, -574.2673f, 81.27955f };
			}
			else
			{
				*uParam1 = { -1102.923f, -574.2673f, 81.27955f };
			}
			*uParam2 = 0.85f;
			break;
		case 28:
			if (!bParam3)
			{
				*uParam1 = { -1314.075f, 387.0378f, 94.41888f };
			}
			else
			{
				*uParam1 = { -1315.075f, 387.0378f, 94.41888f };
			}
			*uParam2 = 72.5f;
			break;
		case 69:
			*uParam1 = { 1521.333f, 419.062f, 88.96367f };
			if (!bParam3)
			{
				*uParam1 = { 1521.333f, 419.062f, 88.96367f };
			}
			else
			{
				*uParam1 = { 1522.333f, 419.062f, 88.96367f };
			}
			*uParam2 = 4f;
			break;
		case 76:
			if (!bParam3)
			{
				*uParam1 = { -168.7946f, 646.7418f, 112.5389f };
			}
			else
			{
				*uParam1 = { -169.7946f, 646.7418f, 112.5389f };
			}
			*uParam2 = -122f;
			break;
		case 78:
			if (!bParam3)
			{
				*uParam1 = { 2920.64f, 1273.347f, 43.50124f };
			}
			else
			{
				*uParam1 = { 2921.64f, 1273.347f, 43.50124f };
			}
			*uParam2 = 2f;
			break;
		case 105:
			if (!bParam3)
			{
				*uParam1 = { 1256.509f, -1317.039f, 75.2567f };
			}
			else
			{
				*uParam1 = { 1257.509f, -1317.039f, 75.2567f };
			}
			*uParam2 = 2f;
			break;
	}
}

void func_69(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == func_107(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (func_108(iParam0))
	{
		if (func_109(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			PHYSICS::_0x0348469DAA17576C(iParam0);
		}
	}
	if (func_110(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_69(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_69(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_110(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 0, 1);
		}
	}
	if (func_110(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			ENTITY::_0x203BEFFDBE12E96A(iParam0, vParam1, fParam4, 1, func_110(iParam5, 32), 1);
		}
		else
		{
			ENTITY::_0x203BEFFDBE12E96A(iParam0, vParam1, fParam4, 1, func_110(iParam5, 32), 1);
			ENTITY::_0x9587913B9E772D29(iParam0, 0);
		}
	}
	else if (func_110(iParam5, 129))
	{
		if (func_110(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0, vParam1, func_110(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
	}
	else
	{
		ENTITY::_0x203BEFFDBE12E96A(iParam0, vParam1, fParam4, 1, func_110(iParam5, 32), 1);
	}
	if (bVar4)
	{
		if (!func_110(iParam5, 16))
		{
			PED::_0x7DE9692C6F64CFE8(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3, 0, 0);
		}
		if (func_108(iParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PHYSICS::_0x0348469DAA17576C(iVar6);
			if (!func_110(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, 1, 0);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PACKAGE_INDEX(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 1);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0) == Global_35 && !func_110(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
}

void func_70(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_71(var uParam0)
{
	uParam0->f_62 = -1;
	uParam0->f_64 = *uParam0;
}

void func_72(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_73(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_74(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return 0;
	}
	return 1;
}

struct<4> func_75()
{
	struct<4> Var0;

	return Var0;
}

struct<4> func_76(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_77(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_78(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_77(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_78(bool bParam0)
{
	if (func_83() == -1)
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

struct<5> func_79(int iParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;

	Var0 = { func_40(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_111(iParam0))
	{
		case -1037537535:
			if (!INVENTORY::_0x780C5B9AE2819807(iParam0, 1034665895))
			{
				Var0 = { func_76(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_112(bParam1) };
			if (iParam2 && func_113(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_114(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_114(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_115(iParam0, &Var5, 1728382685))
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
			Var0 = { func_116(bParam1) };
			switch (func_117(iParam0))
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
			if (func_118(iParam0, -1823706425))
			{
				Var0 = { func_76(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, -1838434463);
			}
			else if (func_118(iParam0, -1483207246))
			{
				Var0 = { func_76(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_119(Var0, &Var27, bParam1, 0))
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

int func_80(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	int iVar0;

	if (func_120(iParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	if (!func_121(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!INVENTORY::_0xB4158C8C9A3B5DCE(func_78(bParam4), iParam0, iParam1, uParam2))
	{
		return 0;
	}
	return 1;
}

int func_81(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (func_120(iParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_119(*uParam1, &Var0, bParam6, 0))
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
	if (!func_121(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_78(bParam6), uParam1, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_82(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_83()
{
	return Global_1572887->f_12;
}

bool func_84(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_85(int iParam0)
{
	Global_1327479->f_3 = iParam0;
}

int func_86()
{
	return Global_1310750->f_16037;
}

bool func_87(int iParam0, int iParam1)
{
	if (!func_84(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/] && iParam1) != 0;
}

int func_88(int iParam0)
{
	if (!func_84(iParam0))
	{
		return 0;
	}
	if (func_122(64) && func_123(iParam0))
	{
		return 1;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_46;
}

int func_89(int iParam0)
{
	if (!func_84(iParam0))
	{
		return 0;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_47;
}

void func_90(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_84(&(Global_1310750->f_13321[iParam0 /*9*/])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID((Global_1310750->f_13321[iParam0 /*9*/])->f_5, 523);
	((*Global_1310750)[iVar0 /*111*/])->f_48 = 0;
	func_124(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

int func_91(int iParam0)
{
	iParam0 = func_82(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_9;
}

int func_92(int iParam0)
{
	iParam0 = func_82(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_372;
}

float func_93(int iParam0)
{
	iParam0 = func_82(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_372.f_1;
}

float func_94(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

char* func_95(int iParam0)
{
	if (func_125(524288))
	{
		return "0600_";
	}
	if (iParam0 == -1)
	{
		if (func_126(23, 2))
		{
			return "0000_";
		}
		else if (func_126(2, 5))
		{
			return "0300_";
		}
		else if (func_126(5, 8))
		{
			return "0600_";
		}
		else if (func_126(8, 11))
		{
			return "0900_";
		}
		else if (func_126(11, 14))
		{
			return "1200_";
		}
		else if (func_126(14, 17))
		{
			return "1500_";
		}
		else if (func_126(17, 20))
		{
			return "1800_";
		}
		else if (func_126(20, 23))
		{
			return "2100_";
		}
		else
		{
			return "1200_";
		}
	}
	switch (iParam0)
	{
		case 0:
			if (func_127())
			{
				return "2100_";
			}
			else
			{
				return "0000_";
			}
			break;
		case 6:
			if (func_127())
			{
				return "0300_";
			}
			else
			{
				return "0600_";
			}
			break;
		case 12:
			if (func_127())
			{
				return "0900_";
			}
			else
			{
				return "1200_";
			}
			break;
		case 18:
			if (func_127())
			{
				return "1500_";
			}
			else
			{
				return "1800_";
			}
			break;
	}
	return "1200_";
}

char* func_96()
{
	int iVar0;

	iVar0 = func_128();
	if (func_125(524288))
	{
		return "01Clear";
	}
	switch (iVar0)
	{
		case -1317052143:
		case 433385945:
		case 669657108:
		case 725623432:
		case 839715153:
		case 1420204096:
		case 1974067816:
		case 2082228755:
		case 2137137442:
			return "04Storm";
		case -1721991356:
		case -1233681761:
		case -1148613331:
		case -702816767:
		case -416908843:
		case -273223690:
		case 212278652:
		case 603685163:
			return "03Clouds";
		case -173507739:
		case 821931868:
		case 1500834021:
		case 1632247697:
		case 1679686673:
			return "01Clear";
		default:
			break;
	}
	return "01Clear";
	return "01Clear";
}

struct<8> func_97(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	char cVar2[64];
	char cVar10[64];
	struct<8> Var18;

	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0);
	iVar1 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);
	if (iVar0 >= iParam3)
	{
		StringCopy(&cVar2, HUD::_0x806862E5D266CF38(sParam0, (iVar0 - iParam3), iVar0), 64);
	}
	else
	{
		StringCopy(&cVar2, sParam0, 64);
	}
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar2);
	if (iVar1 >= iParam3)
	{
		StringCopy(&cVar10, HUD::_0x806862E5D266CF38(sParam1, (iVar1 - iParam3), iVar1), 64);
	}
	else
	{
		StringCopy(&cVar10, sParam1, 64);
	}
	iVar1 = HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar10);
	if (bParam2)
	{
		if ((iVar0 + iVar1) >= iParam3)
		{
			StringCopy(&cVar10, HUD::_0x806862E5D266CF38(&cVar10, iVar0, iVar1), 64);
		}
	}
	else if ((iVar0 + iVar1) >= iParam3)
	{
		StringCopy(&cVar2, HUD::_0x806862E5D266CF38(&cVar2, iVar1, iVar0), 64);
	}
	Var18 = { cVar2 };
	StringConCat(&Var18, &cVar10, 64);
	return Var18;
}

char* func_98(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

void func_99(int iParam0)
{
	struct<2> Var0;

	if (iParam0 <= 0)
	{
		return;
	}
	if (func_129(1) < iParam0)
	{
		iParam0 = func_129(1);
	}
	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	Var0 = { func_130(1644987397) };
	STATS::_0xBD861AE8A5181ED7(&Var0, iParam0);
}

void func_100(int iParam0, char* sParam1, var uParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_131(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

int func_101(int iParam0, int iParam1)
{
	int iVar0;

	if (func_83() == 0)
	{
		return 1;
	}
	if (!func_77(iParam1, 0))
	{
		return 0;
	}
	iVar0 = func_132(iParam0);
	if (iVar0 >= 25 || iVar0 <= -1)
	{
		return 0;
	}
	Global_20709[iVar0 /*45*/] = iParam1;
	return 1;
}

int func_102(int iParam0, int iParam1)
{
	int iVar0;

	if (func_83() == 0)
	{
		return 1;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_132(iParam0);
	if (iVar0 >= 25 || iVar0 <= -1)
	{
		return 0;
	}
	func_133(func_130(19354810), iParam1);
	(Global_20709[iVar0 /*45*/])->f_43 = ((Global_20709[iVar0 /*45*/])->f_43 + iParam1);
	return 1;
}

int func_103(int iParam0, int iParam1)
{
	int iVar0;

	if (func_83() == 0)
	{
		return 1;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_132(iParam0);
	if (iVar0 >= 25 || iVar0 <= -1)
	{
		return 0;
	}
	(Global_20709[iVar0 /*45*/])->f_44 = ((Global_20709[iVar0 /*45*/])->f_44 + iParam1);
	return 1;
}

int func_104(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1391860027;
		case 3:
			return -2049683567;
		case 4:
			return -1639750081;
		case 6:
			return -543306319;
		case 7:
			return 93160283;
		case 8:
			return -1838611891;
		case 1:
			return 1619762084;
		case 2:
			return -2104053099;
		case 9:
			return -1431073983;
		case 10:
			return 887432345;
		case 11:
			return -238320361;
		case 26:
			return -1433937760;
		case 27:
			return -681691620;
		case 28:
			return -706234936;
		case 29:
			return -282099500;
		case 30:
			return 1450105278;
		case 31:
			return -732027686;
		case 5:
			return 379756162;
		case 15:
			return 2128397741;
		case 17:
			return -924263120;
		case 33:
			return 1915478031;
		case 12:
			return -1775364220;
		case 13:
			return -1504845897;
		case 14:
			return -1227686818;
		case 18:
			return 1442571063;
		case 19:
			return -997221403;
		case 22:
			return 285759500;
		case 20:
			return 1489861748;
		case 32:
			return -2132712788;
		case 34:
			return 1427539511;
		case 23:
			return -967055532;
		case 24:
			return 662159626;
		case 25:
			return 1743191502;
		case 21:
			return -830712656;
		default:
			break;
	}
	return 0;
}

int func_105(int iParam0)
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

Vector3 func_106(vector3 vParam0, vector3 vParam3)
{
	vector3 vVar0;

	vVar0.x = ((vParam0.x + vParam3.x) * 0.5f);
	vVar0.f_1 = ((vParam0.y + vParam3.y) * 0.5f);
	vVar0.f_2 = ((vParam0.z + vParam3.z) * 0.5f);
	return vVar0;
}

int func_107(var uParam0)
{
	return uParam0;
}

bool func_108(int iParam0)
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

int func_109(int iParam0)
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

bool func_110(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_111(int iParam0)
{
	vector3 vVar0;

	if (!func_77(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_112(bool bParam0)
{
	int iVar0;

	iVar0 = func_78(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224214))
		{
			*Global_1224214 = { func_76(923904168, func_40(bParam0), -740156546, bParam0) };
		}
		return *Global_1224214;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224222))
		{
			*Global_1224222 = { func_76(923904168, func_40(bParam0), -740156546, 0) };
		}
		return *Global_1224222;
	}
	return func_76(923904168, func_40(bParam0), -740156546, 0);
}

int func_113(int iParam0, bool bParam1)
{
	if (func_117(iParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
	{
		if (bParam1)
		{
			return func_134(-1185145312, 0) > 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_114(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_41(iParam0, *uParam1, iParam2, bParam3) > 0;
}

int func_115(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_135(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_116(bool bParam0)
{
	int iVar0;

	iVar0 = func_78(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224218))
		{
			*Global_1224218 = { func_76(271701509, func_40(bParam0), 12999093, 0) };
		}
		return *Global_1224218;
	}
	return func_76(271701509, func_40(bParam0), 12999093, 0);
}

int func_117(int iParam0)
{
	struct<2> Var0;

	if (!func_77(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_118(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_117(iParam0);
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

int func_119(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(func_78(bParam5), &uParam0, uParam4, !bParam6))
	{
		return 0;
	}
	return 1;
}

int func_120(var uParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_121(bool bParam0)
{
	if (func_83() == -1)
	{
		return 1;
	}
	return INVENTORY::_0x0FBBFFC891A97C81(func_78(bParam0));
}

bool func_122(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_123(int iParam0)
{
	return func_87(iParam0, Global_1310750->f_16072 | 64);
}

void func_124(int iParam0)
{
	int iVar0;

	if (&Global_1310750->f_13321[iParam0 /*9*/] != -1)
	{
		((*Global_1310750)[&Global_1310750->f_13321[iParam0 /*9*/] /*111*/])->f_48 = 0;
	}
	Global_1310750->f_13321[iParam0 /*9*/] = -1;
	(Global_1310750->f_13321[iParam0 /*9*/])->f_1 = -1;
	(Global_1310750->f_13321[iParam0 /*9*/])->f_2 = { 0f, 0f, 0f };
	(Global_1310750->f_13321[iParam0 /*9*/])->f_5 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		(Global_1310750->f_13321[iParam0 /*9*/])->f_6[iVar0] = -1881652455;
		iVar0++;
	}
}

bool func_125(int iParam0)
{
	return (Global_1392040 && iParam0) != 0;
}

bool func_126(int iParam0, int iParam1)
{
	return func_136(CLOCK::GET_CLOCK_HOURS(), iParam0, iParam1);
}

int func_127()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
	{
		return 1;
	}
	return 0;
}

var func_128()
{
	var uVar0;
	var uVar1;
	float fVar2;
	var uVar3;

	MISC::_GET_WEATHER_TYPE_TRANSITION(&uVar0, &uVar1, &fVar2);
	if (fVar2 < 0.75f)
	{
		uVar3 = uVar0;
	}
	else
	{
		uVar3 = uVar1;
	}
	return uVar3;
}

int func_129(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

struct<2> func_130(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

var func_131(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<4> Var0;
	struct<7> Var13;
	var uVar20;

	Var0 = -2;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = _NAMESPACE71::_0xB249EBCB30DD88E0(&Var0, &Var13, iParam8);
	func_137(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_132(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 < 153))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 126:
			return 32;
		case 22:
			return 17;
		case 4:
		case 5:
		case 34:
		case 55:
		case 67:
			return 18;
		case 56:
		case 57:
		case 58:
		case 59:
			return 19;
		case 102:
		case 106:
		case 109:
		case 112:
		case 114:
		case 120:
			return 29;
		case 39:
		case 73:
		case 128:
		case 132:
		case 137:
		case 141:
		case 145:
			return 0;
		case 7:
		case 19:
		case 28:
		case 42:
		case 61:
		case 74:
		case 87:
		case 90:
		case 95:
		case 129:
		case 133:
		case 138:
		case 142:
		case 146:
			return 3;
		case 0:
		case 8:
		case 29:
		case 43:
		case 75:
		case 91:
		case 130:
		case 134:
		case 139:
		case 143:
		case 147:
			return 6;
		case 17:
		case 47:
			return 7;
		case 18:
		case 27:
		case 41:
		case 82:
		case 98:
		case 125:
			return 4;
		case 10:
		case 26:
		case 38:
		case 60:
		case 72:
		case 92:
			return 10;
		case 1:
		case 16:
		case 32:
		case 51:
		case 64:
		case 80:
			return 22;
		case 2:
		case 14:
		case 20:
		case 23:
		case 30:
		case 45:
		case 65:
		case 77:
		case 86:
		case 89:
		case 96:
		case 99:
			return 2;
		case 3:
		case 15:
		case 21:
		case 24:
		case 31:
		case 46:
		case 78:
		case 85:
		case 88:
		case 100:
			return 1;
		case 9:
		case 37:
		case 69:
			return 8;
		case 13:
		case 35:
		case 44:
		case 63:
		case 76:
		case 84:
		case 94:
			return 9;
		case 103:
		case 107:
		case 110:
		case 116:
			return 30;
		case 104:
		case 105:
		case 108:
		case 111:
		case 113:
		case 115:
		case 117:
		case 118:
		case 119:
		case 121:
		case 122:
		case 123:
		case 124:
			return 31;
		case 136:
			return 5;
		case 6:
		case 25:
		case 36:
		case 68:
			return 15;
		case 11:
		case 33:
		case 52:
		case 53:
		case 66:
		case 70:
		case 71:
		case 81:
		case 83:
		case 93:
		case 97:
			return 33;
		case 48:
			return 12;
		case 49:
			return 13;
		case 50:
			return 14;
		case 62:
		case 79:
			return 20;
		case 101:
			return 11;
		case 149:
			return 23;
		case 150:
			return 24;
		case 151:
			return 25;
		case 12:
		case 54:
			return 21;
		case 127:
			return 34;
		case 131:
		case 135:
		case 140:
		case 144:
		case 148:
			return 27;
		case 152:
			return 24;
		default:
			break;
	}
	return -1;
}

void func_133(var uParam0, var uParam1, int iParam2)
{
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

int func_134(int iParam0, bool bParam1)
{
	if (func_138(iParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_78(bParam1), iParam0, 0);
}

int func_135(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_78(0);
	*uParam1 = { func_76(iParam0, func_112(0), iParam3, 0) };
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

int func_136(int iParam0, int iParam1, int iParam2)
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

void func_137(char* sParam0, char* sParam1, int iParam2)
{
	_NAMESPACE84::_0x74BCCEB233AD95B2(-466562563, MISC::GET_HASH_KEY(sParam0));
	_NAMESPACE84::_0x74BCCEB233AD95B2(1885309238, MISC::GET_HASH_KEY(sParam1));
	_NAMESPACE84::_0x74BCCEB233AD95B2(-826961056, iParam2);
}

bool func_138(int iParam0)
{
	return WEAPON::_0x1F7977C9101F807F(iParam0);
}

