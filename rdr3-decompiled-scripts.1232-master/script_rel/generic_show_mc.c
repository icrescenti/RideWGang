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
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	struct<1030> Local_22 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0 } ;
	var uLocal_1052 = 0;
	var uLocal_1053 = 3;
	var uLocal_1054 = 0;
	var uLocal_1055 = 0;
	var uLocal_1056 = 0;
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
	bool bVar1;
	bool bVar2;
	struct<10> Var3;
	int iVar14;
	int iVar15;
	bool bVar16;
	float fVar17;
	bool bVar18;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	bVar0 = false;
	bVar1 = false;
	bVar2 = false;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1(&Local_22, 1);
		func_2(&(Global_40.f_9028.f_12), 4);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630->f_12)
	{
		func_1(&Local_22, 1);
		func_2(&(Global_40.f_9028.f_12), 4);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	if (func_3(144))
	{
		func_4(&(Global_40.f_9028.f_12), 1);
	}
	if (func_5(Global_1394141->f_1326, -2147483648))
	{
		func_2(&(Global_1394141->f_1326), -2147483648);
	}
	Local_22.f_125 = vScriptParam_0.y;
	if (!Global_1935630->f_12)
	{
		if (func_6(Global_35, (Global_1394141->f_7[Local_22.f_125 /*31*/])->f_4, 1, 0))
		{
			if (func_8(func_7(Global_35, 0, 0, 0)))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
			}
			if (func_8(func_7(Global_35, 0, 1, 0)))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 1, false, false);
			}
		}
	}
	PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), joaat("weapon_unarmed"), 0);
	while (true)
	{
		bVar0 = func_6(Global_35, (Global_1394141->f_7[Local_22.f_125 /*31*/])->f_4, 1, 0);
		bVar1 = func_6(Global_35, &(Local_22.f_119[4]), 1, 0);
		bVar2 = func_5(Global_1394141->f_1326, 8192);
		if (bVar0 || bVar1)
		{
			PAD::DISABLE_CONTROL_ACTION(0, -349518703, false);
			PAD::DISABLE_CONTROL_ACTION(0, -1098542161, false);
		}
		if (bVar1)
		{
			func_9();
		}
		else
		{
			func_10((Global_1394141->f_7[&Global_1394141 /*31*/])->f_30);
		}
		func_11(bVar0);
		Local_22.f_112 = func_12(Global_35, (Global_1394141->f_7[Local_22.f_125 /*31*/])->f_1, 1);
		if ((func_13(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1) && Local_22 != 9) && Local_22 != 10)
		{
			func_4(&(Local_22.f_13), 128);
			func_14(&Local_22, 9);
		}
		if (func_15(&Local_22, bVar0))
		{
			if (Local_22 != 9 && Local_22 != 10)
			{
				func_4(&(Local_22.f_13), 128);
				func_14(&Local_22, 9);
			}
		}
		if (Local_22 < 9)
		{
			if (Local_22.f_112 > 75f && !bVar2)
			{
				func_4(&(Local_22.f_13), -2147483648);
				func_14(&Local_22, 9);
			}
			if (func_5(Global_1394141->f_1326, -2147483648))
			{
				func_4(&(Local_22.f_13), -2147483648);
				func_14(&Local_22, 9);
			}
		}
		func_16(&Local_22, bVar0);
		func_17(&Local_22);
		if (!bVar0)
		{
			if ((func_18(Local_22.f_125) && !bVar2) && Local_22 < 9)
			{
				func_4(&(Local_22.f_13), -2147483648);
				func_14(&Local_22, 9);
			}
			if (func_19(1) || Global_1415398->f_1)
			{
				if (!func_20(&(Local_22.f_135)))
				{
					func_21(&(Local_22.f_135));
				}
				else if (func_22(&(Local_22.f_135)) > 10f)
				{
					if (Global_1415398->f_1)
					{
						Global_1415398->f_1 = 0;
					}
					if (func_19(1))
					{
						func_23(1);
					}
					if (func_5(Local_22.f_13, 4194304))
					{
						func_24();
						POPULATION::_0xBC90BDF4E5228EA1();
						func_25();
						func_2(&(Local_22.f_13), 4194304);
					}
					func_26(0);
					func_27(&(Local_22.f_135));
				}
			}
		}
		else
		{
			if (!func_19(1))
			{
				func_28(1);
				func_29(-1, 0, 0, 0, 0);
				func_30();
			}
			if (!func_5(Local_22.f_13, 4194304))
			{
				func_31();
				POPULATION::_0xC6DCC2A3A8825C85(1);
				func_32(80);
				func_4(&(Local_22.f_13), 4194304);
			}
			if (!Global_1415398->f_1)
			{
				Global_1415398->f_1 = 1;
			}
			if (func_20(&(Local_22.f_135)))
			{
				func_27(&(Local_22.f_135));
			}
		}
		func_33(&(Local_22.f_178), (Global_1394141->f_7[&Global_1394141 /*31*/])->f_30);
		func_34(&(Local_22.f_178), (Global_1394141->f_7[&Global_1394141 /*31*/])->f_30);
		func_35(&Local_22);
		func_36(&Local_22);
		switch (Local_22)
		{
			case 0:
				PED::_0xF008E0BA1FE1D644(1);
				Local_22.f_12 = vScriptParam_0.z;
				func_2(&(Global_1394141->f_1326), 4096);
				func_37(&Local_22);
				func_38(&(Local_22.f_178));
				func_4(&(Global_1394141->f_1325), 512);
				func_4(&(Global_1394141->f_1325), 131072);
				Global_1394141->f_1331 = 0;
				Global_1394141->f_1324 = 0;
				if (func_39())
				{
					func_40(&(Local_22.f_14), Global_35, "JOHN", 0);
				}
				else
				{
					func_40(&(Local_22.f_14), Global_35, "ARTHUR", 0);
				}
				func_14(&Local_22, 1);
				break;
			case 1:
				if (!PED::_0x5E420FF293EE5472())
				{
					return;
				}
				if (((((func_41() && func_42()) && func_43()) && func_44()) && func_45()) && func_46(&Local_22))
				{
					func_14(&Local_22, 2);
				}
				break;
			case 2:
				if (func_47(&Local_22))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_22.f_128, "CURTAIN", Local_22.f_127, 0);
					ANIMSCENE::START_ANIM_SCENE(Local_22.f_128);
					iVar15 = 1;
					while (iVar15 <= (5 - 1))
					{
						iVar14 = iVar15;
						if (!VOLUME::_0x92A78D0BEDB332A3(&(Local_22.f_119[iVar14])))
						{
							Var3 = { func_48(iVar14) };
							Local_22.f_119[iVar14] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var3.f_10, Var3, Var3.f_3, Var3.f_6, Var3.f_9);
						}
						iVar15++;
					}
					func_49(&(Local_22.f_984), 0);
					func_14(&Local_22, 3);
				}
				break;
			case 3:
				if (func_50(&(Local_22.f_984), 0))
				{
					func_14(&Local_22, 4);
				}
				break;
			case 4:
				if (func_51(&(Local_22.f_423), 0, Local_22.f_125))
				{
					func_14(&Local_22, 5);
				}
				break;
			case 5:
				if (func_52(&(Local_22.f_423), &(Local_22.f_984), 0))
				{
					if (func_53(&(Local_22.f_423), 0))
					{
						func_14(&Local_22, 6);
					}
				}
				break;
			case 6:
				VOLUME::_0xFD010A2154B40676((Global_1394141->f_7[Local_22.f_125 /*31*/])->f_4, 1030835986);
				func_4(&(Global_1394141->f_1326), 4096);
				BUILTIN::SETTIMERA(0);
				func_14(&Local_22, 7);
				break;
			case 7:
				bVar16 = false;
				if (BUILTIN::TIMERA() > 30000)
				{
					bVar16 = true;
					Global_1394141->f_1330 = 1;
				}
				if (bVar0 || bVar1)
				{
					if ((ANIMSCENE::_0x25557E324489393C(&(Local_22.f_984.f_12[1 /*2*/])) && ANIMSCENE::_0x477122B8D05E7968(&(Local_22.f_984.f_12[1 /*2*/]), 1, 0)) && !ANIMSCENE::_0xCBFC7725DE6CE2E0(&(Local_22.f_984.f_12[1 /*2*/]), 0))
					{
						ANIMSCENE::START_ANIM_SCENE(&(Local_22.f_984.f_12[1 /*2*/]));
					}
					if (!func_20(&(Local_22.f_132)))
					{
						func_21(&(Local_22.f_132));
					}
					else
					{
						fVar17 = func_22(&(Local_22.f_132));
						if (fVar17 > 10f)
						{
							bVar16 = true;
						}
						if (fVar17 > 5f && !Global_1394141->f_1330)
						{
							Global_1394141->f_1330 = 1;
						}
					}
				}
				if (ANIMSCENE::_0xCBFC7725DE6CE2E0(&(Local_22.f_984.f_12[1 /*2*/]), 0))
				{
					func_54(&(Local_22.f_984), &(Local_22.f_423), 0);
				}
				if (bVar16)
				{
					func_4(&(Global_1394141->f_1325), 2);
					func_4(&(Global_1394141->f_1325), 4096);
					func_55(&Local_22);
					func_56();
					func_27(&(Local_22.f_132));
					func_14(&Local_22, 8);
				}
				break;
			case 8:
				func_54(&(Local_22.f_984), &(Local_22.f_423), 0);
				func_57(&Local_22);
				if (func_58(&Local_22))
				{
					if (ANIMSCENE::_0x25557E324489393C(Local_22.f_118) && ANIMSCENE::_0xD8254CB2C586412B(Local_22.f_118, 0))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(Local_22.f_118);
						func_4(&(Global_1394141->f_1325), 4);
						func_4(&(Global_1394141->f_1325), 8192);
						Local_22.f_984.f_19 = 1;
						Global_1394141->f_1329 = 1;
						Global_1394141->f_1332 = 48;
						func_14(&Local_22, 9);
					}
				}
				break;
			case 9:
				bVar18 = func_5(Local_22.f_13, -2147483648);
				func_59(&Local_22);
				func_54(&(Local_22.f_984), &(Local_22.f_423), 0);
				func_60(&Local_22);
				func_61(&Local_22);
				if (func_1(&Local_22, bVar18) && !func_62(Local_22.f_125))
				{
					func_63();
					func_14(&Local_22, 10);
				}
				break;
			case 10:
				func_2(&(Global_1394141->f_1326), 8192);
				func_2(&(Global_1394141->f_1326), 4096);
				func_2(&(Global_40.f_9028.f_12), 4);
				Global_1394141->f_1328 = 0;
				SCRIPTS::TERMINATE_THIS_THREAD();
				break;
		}
		BUILTIN::WAIT(0);
	}
}

int func_1(var uParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	bVar0 = func_6(Global_35, (Global_1394141->f_7[uParam0->f_125 /*31*/])->f_4, 1, 0);
	bVar1 = func_6(Global_35, &(Local_22.f_119[4]), 1, 0);
	if (func_20(&(uParam0->f_9)))
	{
		func_27(&(uParam0->f_9));
	}
	Global_1394141->f_1328 = 0;
	Global_1394141->f_1330 = 0;
	if (CAM::DOES_CAM_EXIST(uParam0->f_141))
	{
		if (CAM::IS_CAM_RENDERING(uParam0->f_141))
		{
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			CAM::SET_CAM_ACTIVE(uParam0->f_141, false);
		}
		CAM::DESTROY_CAM(uParam0->f_141, false);
	}
	INVENTORY::_0xD5D72F1624F3BA7C(func_64(0));
	func_26(0);
	if (func_5(Local_22.f_13, 67108864))
	{
		iVar2 = INTERIOR::GET_INTERIOR_AT_COORDS(func_65(0));
		if (INTERIOR::IS_VALID_INTERIOR(iVar2))
		{
			INTERIOR::UNPIN_INTERIOR(iVar2);
		}
		func_2(&(Local_22.f_13), 67108864);
	}
	if (func_5(Local_22.f_13, 4194304))
	{
		func_24();
		POPULATION::_0xBC90BDF4E5228EA1();
		func_25();
		func_2(&(Local_22.f_13), 4194304);
	}
	if (Global_1415398->f_1)
	{
		Global_1415398->f_1 = 0;
	}
	if (func_19(1))
	{
		func_23(1);
	}
	if (bParam1)
	{
		if (func_66(uParam0))
		{
			func_67(&(uParam0->f_423), (Global_1394141->f_7[uParam0->f_125 /*31*/])->f_4);
			if (func_19(1))
			{
				func_23(1);
			}
			if (Global_1415398->f_1)
			{
				Global_1415398->f_1 = 0;
			}
			if (VOLUME::_0x92A78D0BEDB332A3((Global_1394141->f_7[uParam0->f_125 /*31*/])->f_4) && VOLUME::_0x666C2F53ABEFC952((Global_1394141->f_7[uParam0->f_125 /*31*/])->f_4) != 623901053)
			{
				VOLUME::_0xFD010A2154B40676((Global_1394141->f_7[uParam0->f_125 /*31*/])->f_4, 623901053);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_126))
			{
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(uParam0->f_126, -1f);
				PED::DELETE_PED(&(uParam0->f_126));
			}
			if (ANIMSCENE::_0x25557E324489393C(uParam0->f_128))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_128);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_127))
			{
				OBJECT::DELETE_OBJECT(&(uParam0->f_127));
			}
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
			}
			func_68(&(uParam0->f_984), (Global_1394141->f_7[&Global_1394141 /*31*/])->f_30);
			func_69((Global_1394141->f_7[&Global_1394141 /*31*/])->f_30);
			func_70(&(uParam0->f_178));
			func_71();
			Global_1394141->f_1321 = 0;
			Global_1394141->f_1322 = 0;
			Global_1394141->f_1323 = 0;
			if (!func_5(Global_1394141->f_1326, -2147483648))
			{
				Global_1394141->f_1327 = 0;
			}
			func_72(uParam0);
			return 1;
		}
	}
	else
	{
		if (func_5(uParam0->f_13, 128) && !func_5(uParam0->f_13, 32))
		{
			func_67(&(uParam0->f_423), (Global_1394141->f_7[uParam0->f_125 /*31*/])->f_4);
			func_4(&(uParam0->f_13), 32);
		}
		if (!bVar0)
		{
			if (func_19(1))
			{
				func_23(1);
			}
			if (Global_1415398->f_1)
			{
				Global_1415398->f_1 = 0;
			}
		}
		if ((!bVar0 && !bVar1) && Local_22.f_112 > 17f)
		{
			if (func_66(uParam0) && !func_73(Global_36))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_126))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(uParam0->f_126, -1f);
					PED::DELETE_PED(&(uParam0->f_126));
				}
				if (ANIMSCENE::_0x25557E324489393C(uParam0->f_128))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_128);
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_127))
				{
					OBJECT::DELETE_OBJECT(&(uParam0->f_127));
				}
				if (VOLUME::_0x92A78D0BEDB332A3((Global_1394141->f_7[uParam0->f_125 /*31*/])->f_4) && VOLUME::_0x666C2F53ABEFC952((Global_1394141->f_7[uParam0->f_125 /*31*/])->f_4) != 623901053)
				{
					VOLUME::_0xFD010A2154B40676((Global_1394141->f_7[uParam0->f_125 /*31*/])->f_4, 623901053);
				}
				func_70(&(uParam0->f_178));
				func_68(&(uParam0->f_984), (Global_1394141->f_7[&Global_1394141 /*31*/])->f_30);
				func_69((Global_1394141->f_7[&Global_1394141 /*31*/])->f_30);
				func_71();
				func_67(&(uParam0->f_423), (Global_1394141->f_7[uParam0->f_125 /*31*/])->f_4);
				Global_1394141->f_1321 = 0;
				Global_1394141->f_1322 = 0;
				Global_1394141->f_1323 = 0;
				if (!func_5(Global_1394141->f_1326, -2147483648))
				{
					Global_1394141->f_1327 = 0;
				}
				func_72(uParam0);
				return 1;
			}
		}
	}
	return 0;
}

void func_2(var uParam0, int iParam1)
{
	func_74(uParam0, iParam1);
}

int func_3(int iParam0)
{
	if (func_75() != -1)
	{
		return 0;
	}
	if (!func_76(iParam0))
	{
		return 0;
	}
	return func_77(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
}

void func_4(var uParam0, int iParam1)
{
	func_78(uParam0, iParam1);
}

bool func_5(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_6(int iParam0, int iParam1, bool bParam2, int iParam3)
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

int func_7(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

bool func_8(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("weapon_unarmed"));
}

void func_9()
{
	bool bVar0;
	var uVar1;

	PED::SET_PED_RESET_FLAG(Global_35, 264, true);
	switch (iLocal_21)
	{
		case 0:
			bVar0 = false;
			if (func_79(Global_35) || func_80(Global_35))
			{
				iLocal_18 = 1;
				iLocal_20 = func_81();
				TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, iLocal_20, func_82(PLAYER::GET_PLAYER_INDEX()), 1f, 8);
				func_83(2);
				func_84(-1);
				func_85(func_82(PLAYER::GET_PLAYER_INDEX()));
				uVar1 = func_86();
				func_87(uVar1);
				bVar0 = true;
			}
			else if (PED::_0xA911EE21EDF69DAF(Global_35))
			{
				iLocal_17 = 1;
				iLocal_19 = PED::_0xD806CD2A4F2C2996(Global_35);
				TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, iLocal_19, func_82(PLAYER::GET_PLAYER_INDEX()), 1f, 8);
				bVar0 = true;
			}
			if (bVar0)
			{
				func_88(&iLocal_21, 1);
			}
			break;
		case 1:
			func_88(&iLocal_21, 2);
			break;
		case 2:
			if ((!PED::_0xA911EE21EDF69DAF(Global_35) && !func_79(Global_35)) && !func_80(Global_35))
			{
				func_88(&iLocal_21, 3);
			}
			break;
		case 3:
			func_88(&iLocal_21, 0);
			break;
	}
}

void func_10(int iParam0)
{
	vector3 vVar0;
	var uVar3;

	if (iLocal_17)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_19))
		{
			if (func_89(Global_35, iLocal_19, 1, 1) > 7f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_19))
			{
				vVar0 = { func_90(iParam0) };
				vVar0.f_2 = (vVar0.z - 1f);
				ENTITY::SET_ENTITY_COORDS(iLocal_19, vVar0, true, false, true, true);
				iLocal_17 = 0;
			}
		}
		else
		{
			iLocal_17 = 0;
		}
	}
	else if (iLocal_18)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_20))
		{
			if (func_89(Global_35, iLocal_20, 1, 1) > 7f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_20))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_20, func_90(iParam0), true, false, true, true);
				func_83(2);
				func_84(-1);
				func_85(func_90(iParam0));
				uVar3 = func_86();
				func_87(uVar3);
				iLocal_18 = 0;
			}
		}
		else
		{
			iLocal_18 = 0;
		}
	}
}

void func_11(bool bParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;

	bVar0 = true;
	bVar1 = true;
	bVar2 = true;
	bVar3 = true;
	bVar4 = true;
	bVar5 = false;
	if (func_5(Global_1394141->f_1326, 1))
	{
		bVar3 = false;
		bVar1 = false;
		bVar4 = false;
	}
	if (func_5(Global_1394141->f_1326, 2))
	{
		bVar0 = false;
	}
	if (func_5(Global_1394141->f_1326, 4))
	{
		bVar2 = false;
		bVar0 = false;
		bVar1 = false;
	}
	if (func_5(Global_1394141->f_1326, 64))
	{
		bVar2 = false;
	}
	if (func_5(Global_1394141->f_1326, 512))
	{
		bVar5 = true;
	}
	func_91(0);
	if (bParam0)
	{
		if (INVENTORY::_0x3D10D7179D7034AF(func_64(0), joaat("weapon_unarmed"), 0))
		{
			INVENTORY::_0x6A564540FAC12211(func_64(0), joaat("weapon_unarmed"));
		}
		if (!bVar0)
		{
			if (!func_5(Global_1394141->f_1326, 8))
			{
				if (VOLUME::_0x92A78D0BEDB332A3((Global_1394141->f_7[&Global_1394141 /*31*/])->f_4) && VOLUME::_0x666C2F53ABEFC952((Global_1394141->f_7[&Global_1394141 /*31*/])->f_4) != 623901053)
				{
					VOLUME::_0xFD010A2154B40676((Global_1394141->f_7[&Global_1394141 /*31*/])->f_4, 623901053);
					if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iLocal_16, true, 2, false))
					{
						if ((iLocal_16 != joaat("weapon_unarmed") && iLocal_16 != 1549070292) && iLocal_16 != 1030402560)
						{
							if (INVENTORY::_0x3D10D7179D7034AF(func_64(0), iLocal_16, 0))
							{
								INVENTORY::_0x6A564540FAC12211(func_64(0), iLocal_16);
								func_92(iLocal_16);
							}
						}
						if (VOLUME::_0x666C2F53ABEFC952((Global_1394141->f_7[&Global_1394141 /*31*/])->f_4) != 623901053)
						{
							VOLUME::_0xFD010A2154B40676((Global_1394141->f_7[&Global_1394141 /*31*/])->f_4, 623901053);
						}
						func_4(&(Global_1394141->f_1326), 8);
					}
				}
			}
		}
		else if (func_5(Global_1394141->f_1326, 8))
		{
			if (VOLUME::_0x92A78D0BEDB332A3((Global_1394141->f_7[&Global_1394141 /*31*/])->f_4) && bVar3)
			{
				VOLUME::_0xFD010A2154B40676((Global_1394141->f_7[&Global_1394141 /*31*/])->f_4, 1030835986);
				func_2(&(Global_1394141->f_1326), 8);
			}
		}
		else
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iLocal_16, true, 0, false))
			{
				iVar6 = TASK::GET_SCRIPT_TASK_STATUS(Global_35, 716706914, 1);
				iVar7 = TASK::GET_SCRIPT_TASK_STATUS(Global_35, 713668775, 1);
				if ((((((iLocal_16 != joaat("weapon_unarmed") && iLocal_16 != 1549070292) && iLocal_16 != 1030402560) && iVar6 != 1) && iVar6 != 0) && iVar7 != 1) && iVar7 != 0)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), false, 0, false, false);
					TASK::TASK_SWAP_WEAPON(Global_35, 1, 0, 0, 0);
					if (PED::IS_PED_USING_ACTION_MODE(Global_35))
					{
						PED::SET_PED_USING_ACTION_MODE(Global_35, false, -1, 0);
					}
				}
			}
			func_93(&iLocal_16, 1);
		}
		if (bVar3)
		{
			PAD::DISABLE_CONTROL_ACTION(0, -128997553, false);
		}
		if (bVar1)
		{
			PAD::DISABLE_CONTROL_ACTION(0, -1292666904, false);
		}
		if (bVar0)
		{
			PAD::DISABLE_CONTROL_ACTION(0, 130948705, false);
			PAD::DISABLE_CONTROL_ACTION(0, 42190210, false);
			PAD::DISABLE_CONTROL_ACTION(0, -197984200, false);
			PAD::DISABLE_CONTROL_ACTION(0, -238861894, false);
		}
		if (bVar2)
		{
			PAD::DISABLE_CONTROL_ACTION(0, -640622144, false);
		}
		CAM::_0x632BE8D84846FA56();
		CAM::_0x3C8F74E8FE751614();
		CAM::_0x8910C24B7E0046EC();
		PAD::DISABLE_CONTROL_ACTION(0, -824104112, false);
		PAD::DISABLE_CONTROL_ACTION(0, 516589524, false);
		PAD::DISABLE_CONTROL_ACTION(0, 1390807691, false);
		PAD::DISABLE_CONTROL_ACTION(0, 1663574939, false);
		PAD::DISABLE_CONTROL_ACTION(0, 1287709438, false);
		PAD::DISABLE_CONTROL_ACTION(0, -562475458, false);
		if (!PED::GET_PED_CONFIG_FLAG(Global_35, 489, false))
		{
			PED::SET_PED_CONFIG_FLAG(Global_35, 489, true);
		}
		if (bVar4)
		{
			if (bVar5)
			{
				HUD::_0xC9CAEAEEC1256E54(-1679307491);
			}
			else
			{
				HUD::_0xC9CAEAEEC1256E54(1664736751);
			}
			PAD::DISABLE_CONTROL_ACTION(0, -1404316431, false);
		}
		else
		{
			if (bVar5)
			{
				HUD::_0xC9CAEAEEC1256E54(-1679307491);
			}
			if (!func_5(Global_1394141->f_1326, 8))
			{
				if (VOLUME::_0x92A78D0BEDB332A3((Global_1394141->f_7[&Global_1394141 /*31*/])->f_4) && VOLUME::_0x666C2F53ABEFC952((Global_1394141->f_7[&Global_1394141 /*31*/])->f_4) != 623901053)
				{
					if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iLocal_16, true, 2, false))
					{
						if ((iLocal_16 != joaat("weapon_unarmed") && iLocal_16 != 1549070292) && iLocal_16 != 1030402560)
						{
							if (INVENTORY::_0x3D10D7179D7034AF(func_64(0), iLocal_16, 0))
							{
								INVENTORY::_0x6A564540FAC12211(func_64(0), iLocal_16);
								func_92(iLocal_16);
							}
						}
						if (VOLUME::_0x666C2F53ABEFC952((Global_1394141->f_7[&Global_1394141 /*31*/])->f_4) != 623901053)
						{
							VOLUME::_0xFD010A2154B40676((Global_1394141->f_7[&Global_1394141 /*31*/])->f_4, 623901053);
						}
						func_4(&(Global_1394141->f_1326), 8);
					}
				}
			}
		}
		func_94();
	}
	else
	{
		func_95();
		func_93(&iLocal_16, 1);
		if (PED::GET_PED_CONFIG_FLAG(Global_35, 489, false))
		{
			PED::SET_PED_CONFIG_FLAG(Global_35, 489, false);
		}
	}
}

float func_12(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

int func_13(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_96(bParam1, iParam2, iParam3);
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

void func_14(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_15(var uParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;

	if (PED::IS_PED_IN_COMBAT(Global_35, 0))
	{
		bVar0 = false;
		bVar1 = false;
		switch (uParam0->f_984)
		{
			case 9:
			case 11:
			case 15:
				bVar0 = true;
				break;
		}
		if (bVar0)
		{
			if (!bParam1)
			{
				bVar1 = true;
			}
			switch (uParam0->f_984)
			{
				case 9:
					if (ANIMSCENE::_0x25557E324489393C(Global_1394141->f_1335) && ANIMSCENE::_0xCBFC7725DE6CE2E0(Global_1394141->f_1335, 0))
					{
						if (ANIMSCENE::_0x1F0E401031E20146(Global_1394141->f_1335, "PL_A_Performance"))
						{
							bVar1 = true;
						}
					}
					break;
				case 15:
					if (ANIMSCENE::_0x25557E324489393C(Global_1394141->f_1335) && ANIMSCENE::_0xCBFC7725DE6CE2E0(Global_1394141->f_1335, 0))
					{
						if (ANIMSCENE::_0x1F0E401031E20146(Global_1394141->f_1335, "pbl_FightIntro"))
						{
							bVar1 = true;
						}
					}
					break;
				case 11:
					if (ANIMSCENE::_0x25557E324489393C(Global_1394141->f_1335) && ANIMSCENE::_0xCBFC7725DE6CE2E0(Global_1394141->f_1335, 0))
					{
						if (ANIMSCENE::_0x1F0E401031E20146(Global_1394141->f_1335, "PL_A_Performance") || ANIMSCENE::_0x1F0E401031E20146(Global_1394141->f_1335, "PL_B_Trying_To_Escape"))
						{
							bVar1 = true;
						}
					}
					break;
			}
		}
		else
		{
			bVar1 = true;
		}
		if (bVar1)
		{
			return 1;
		}
	}
	return 0;
}

void func_16(var uParam0, bool bParam1)
{
	if (!func_5(uParam0->f_13, 131072))
	{
		if (bParam1)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("show_crowd_sfx_start");
			func_4(&(uParam0->f_13), 131072);
		}
	}
	else if (!bParam1)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("show_crowd_sfx_stop");
		func_2(&(uParam0->f_13), 131072);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_118))
	{
		if (bParam1)
		{
			if (!ANIMSCENE::GET_ANIM_SCENE_BOOL(uParam0->f_118, "b_ShowCrowd"))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_118, "b_ShowCrowd", true, false);
			}
		}
		else if (ANIMSCENE::GET_ANIM_SCENE_BOOL(uParam0->f_118, "b_ShowCrowd"))
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_118, "b_ShowCrowd", false, false);
		}
	}
}

void func_17(var uParam0)
{
	switch (uParam0->f_8)
	{
		case 0:
			if ((*uParam0 >= 6 && *uParam0 <= 8) && !func_97())
			{
				func_98(&(uParam0->f_8), 1);
			}
			if ((func_6(Global_35, (Global_1394141->f_7[uParam0->f_1030 /*31*/])->f_4, 1, 0) && !func_97()) && *uParam0 >= 6)
			{
				func_98(&(uParam0->f_8), 1);
			}
			break;
		case 1:
			if (func_99(uParam0->f_125))
			{
				func_98(&(uParam0->f_8), 2);
			}
			break;
		case 2:
			if (func_97() && !func_6(Global_35, (Global_1394141->f_7[uParam0->f_1030 /*31*/])->f_4, 1, 0))
			{
				func_98(&(uParam0->f_8), 3);
			}
			if (((*uParam0 == 9 && !func_6(Global_35, (Global_1394141->f_7[uParam0->f_125 /*31*/])->f_4, 1, 0)) && !func_6(Global_35, &(uParam0->f_119[4]), 1, 0)) && uParam0->f_112 > 17f)
			{
				func_98(&(uParam0->f_8), 3);
			}
			break;
		case 3:
			if (func_100(uParam0->f_125))
			{
				func_98(&(uParam0->f_8), 0);
			}
			break;
	}
}

int func_18(int iParam0)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if ((MISC::GET_FRAME_COUNT() % 15) == 0)
	{
		func_101(&(Global_40.f_9028.f_6[(Global_1394141->f_7[iParam0 /*31*/])->f_30]), &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
		if (((iVar2 >= 11 || iVar3 >= 1) || iVar4 >= 1) || iVar5 >= 1)
		{
			return 1;
		}
	}
	return 0;
}

bool func_19(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_20(var uParam0)
{
	return func_102(*uParam0, 1);
}

void func_21(var uParam0)
{
	func_103(uParam0, 0f);
}

float func_22(var uParam0)
{
	if (!func_20(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_104(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_105() - uParam0->f_1);
}

void func_23(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 - (Global_1310750->f_16035 && iParam0));
}

void func_24()
{
}

void func_25()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (&Global_1934765->f_275[iVar0 /*2*/] == SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			Global_1934765->f_286 = (Global_1934765->f_286 + (Global_1934765->f_275[iVar0 /*2*/])->f_1);
			Global_1934765->f_275[iVar0 /*2*/] = 0;
			(Global_1934765->f_275[iVar0 /*2*/])->f_1 = 0;
			func_106();
			return;
		}
		iVar0++;
	}
}

void func_26(bool bParam0)
{
	if (bParam0)
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("shows_player_callout_scene"))
		{
			AUDIO::START_AUDIO_SCENE("shows_player_callout_scene");
		}
	}
	else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("shows_player_callout_scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("shows_player_callout_scene");
	}
}

void func_27(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_28(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 || iParam0);
}

void func_29(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	if (func_107() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0 /*9*/];
		if (((func_108(iVar1) && !func_109(iVar1, iParam2)) && (!bParam3 || !func_110(iVar1))) && (!bParam4 || !func_111(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_112(iVar0);
			}
		}
		iVar0++;
	}
}

void func_30()
{
	if (!func_108(&Global_1327479))
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
	func_113(0);
	Global_1327479 = -1;
	Global_1310750->f_16075 = 0;
	Global_1310750->f_16076 = 0;
	Global_1310750->f_16103 = { 0f, 0f, 0f };
}

void func_31()
{
}

void func_32(int iParam0)
{
	int iVar0;

	if (iParam0 > 150)
	{
		iParam0 = 150;
	}
	if (iParam0 > (Global_1934765->f_286 - 150))
	{
	}
	if (func_114(&iVar0))
	{
		if ((Global_1934765->f_275[iVar0 /*2*/])->f_1 != iParam0)
		{
			Global_1934765->f_286 = (Global_1934765->f_286 + (Global_1934765->f_275[iVar0 /*2*/])->f_1);
			(Global_1934765->f_275[iVar0 /*2*/])->f_1 = iParam0;
			Global_1934765->f_286 = (Global_1934765->f_286 - iParam0);
			STREAMING::_0x2F9AC754FE179D58(func_115());
		}
		return;
	}
	iVar0 = func_116();
	if (iVar0 == -1)
	{
		return;
	}
	(Global_1934765->f_275[iVar0 /*2*/])->f_1 = iParam0;
	Global_1934765->f_275[iVar0 /*2*/] = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1934765->f_286 = (Global_1934765->f_286 - iParam0);
	STREAMING::_0x2F9AC754FE179D58(func_115());
}

int func_33(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (iParam1 == -1 || !func_5(Global_1394141->f_1325, -2147483648))
	{
		return 1;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	if (!func_5(Global_1394141->f_1325, 1))
	{
		iVar1 = func_117(iParam1);
		iVar0 = 0;
		while (iVar0 <= (iVar1 - 1))
		{
			iVar3 = iVar0;
			if (func_120((*uParam0)[iVar0 /*5*/], func_118(iParam1), func_119(iParam1, iVar3), 1065353216))
			{
				iVar2++;
			}
			iVar0++;
		}
		if (iVar2 >= iVar1)
		{
			func_4(&(Global_1394141->f_1325), 1);
		}
	}
	iVar2 = 0;
	if (!func_5(Global_1394141->f_1325, 8))
	{
		iVar1 = func_121(iParam1);
		iVar0 = 0;
		while (iVar0 <= (iVar1 - 1))
		{
			iVar4 = iVar0;
			if (func_120(uParam0->f_31[iVar0 /*5*/], func_122(iParam1), func_123(iParam1, iVar4), 1065353216))
			{
				iVar2++;
			}
			iVar0++;
		}
		if (iVar2 >= iVar1)
		{
			func_4(&(Global_1394141->f_1325), 8);
		}
	}
	iVar2 = 0;
	if (!func_5(Global_1394141->f_1325, 2048))
	{
		iVar1 = func_124(iParam1);
		iVar0 = 0;
		while (iVar0 <= (iVar1 - 1))
		{
			iVar5 = iVar0;
			if (func_120(uParam0->f_107[iVar0 /*5*/], func_125(iParam1), func_126(iParam1, iVar5), 1065353216))
			{
				iVar2++;
			}
			iVar0++;
		}
		if (iVar2 >= iVar1)
		{
			func_4(&(Global_1394141->f_1325), 2048);
		}
	}
	switch (iParam1)
	{
		case 0:
			if (!func_5(Global_1394141->f_1325, 64) && func_120(uParam0->f_118[0 /*5*/], func_127(iParam1, 0), func_128(iParam1, 0), 1065353216))
			{
				func_4(&(Global_1394141->f_1325), 64);
			}
			if ((!func_5(Global_1394141->f_1325, 16384) && func_120(uParam0->f_118[1 /*5*/], func_127(iParam1, 1), func_128(iParam1, 1), 1065353216)) && func_120(uParam0->f_118[2 /*5*/], func_127(iParam1, 2), func_128(iParam1, 2), 1065353216))
			{
				func_4(&(Global_1394141->f_1325), 16384);
			}
			break;
		case 1:
		case 2:
			iVar2 = 0;
			if (!func_5(Global_1394141->f_1325, 2097152))
			{
				iVar1 = func_129(iParam1);
				iVar0 = 0;
				while (iVar0 <= (iVar1 - 1))
				{
					iVar6 = iVar0;
					if (func_120(uParam0->f_118[iVar0 /*5*/], func_127(iParam1, 0), func_128(iParam1, iVar6), 1065353216))
					{
						iVar2++;
					}
					iVar0++;
				}
				if (iVar2 >= iVar1)
				{
					func_4(&(Global_1394141->f_1325), 2097152);
				}
			}
			break;
	}
	return 1;
}

void func_34(var uParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;

	if (func_5(Global_1394141->f_1325, 1))
	{
		if (func_5(Global_1394141->f_1325, 2) && func_133(uParam0, func_130(uParam0), &(uParam0->f_229), func_131(uParam0), func_132(uParam0)))
		{
			func_2(&(Global_1394141->f_1325), 2);
		}
		if (func_5(Global_1394141->f_1325, 4) && func_135(uParam0, func_134(uParam0), &(uParam0->f_229), func_131(uParam0), func_132(uParam0)))
		{
			func_2(&(Global_1394141->f_1325), 4);
		}
	}
	if (func_5(Global_1394141->f_1325, 8))
	{
		if (func_5(Global_1394141->f_1325, 16) && func_133(&(uParam0->f_31), func_136(uParam0), &(uParam0->f_232), func_137(uParam0), func_132(uParam0)))
		{
			func_2(&(Global_1394141->f_1325), 16);
		}
		if (func_5(Global_1394141->f_1325, 32) && func_135(&(uParam0->f_31), func_138(uParam0), &(uParam0->f_232), func_137(uParam0), func_132(uParam0)))
		{
			func_2(&(Global_1394141->f_1325), 32);
		}
	}
	if (func_5(Global_1394141->f_1325, 2048))
	{
		if (func_5(Global_1394141->f_1325, 4096) && func_133(&(uParam0->f_107), func_139(uParam0), &(uParam0->f_235), func_140(uParam0), func_132(uParam0)))
		{
			func_2(&(Global_1394141->f_1325), 4096);
		}
		if (func_5(Global_1394141->f_1325, 8192) && func_135(&(uParam0->f_107), func_141(uParam0), &(uParam0->f_235), func_140(uParam0), func_132(uParam0)))
		{
			func_2(&(Global_1394141->f_1325), 8192);
		}
	}
	if (iParam1 == 0)
	{
		if (func_5(Global_1394141->f_1325, 64))
		{
			if (func_5(Global_1394141->f_1325, 128) && func_144(uParam0->f_118[0 /*5*/], func_142(uParam0), &(uParam0->f_238), func_143(uParam0), func_132(uParam0)))
			{
				func_2(&(Global_1394141->f_1325), 128);
			}
			if (func_5(Global_1394141->f_1325, 256) && func_146(uParam0->f_118[0 /*5*/], func_145(uParam0), &(uParam0->f_238), func_143(uParam0), func_132(uParam0)))
			{
				func_2(&(Global_1394141->f_1325), 256);
			}
			if (func_5(Global_1394141->f_1325, 512) && func_144(uParam0->f_118[0 /*5*/], func_142(uParam0), &(uParam0->f_238), 0.5f, func_132(uParam0)))
			{
				func_2(&(Global_1394141->f_1325), 512);
			}
			if (func_5(Global_1394141->f_1325, 1024) && func_146(uParam0->f_118[0 /*5*/], func_145(uParam0), &(uParam0->f_238), 0.5f, func_132(uParam0)))
			{
				func_2(&(Global_1394141->f_1325), 1024);
			}
		}
		if (func_5(Global_1394141->f_1325, 16384))
		{
			if (func_5(Global_1394141->f_1325, 32768) && func_149(1, 2, &(uParam0->f_118), func_147(uParam0), &(uParam0->f_241), func_148(uParam0), func_132(uParam0)))
			{
				func_2(&(Global_1394141->f_1325), 32768);
			}
			if (func_5(Global_1394141->f_1325, 65536) && func_151(1, 2, &(uParam0->f_118), func_150(uParam0), &(uParam0->f_241), func_148(uParam0), func_132(uParam0)))
			{
				func_2(&(Global_1394141->f_1325), 65536);
			}
			if (func_5(Global_1394141->f_1325, 131072) && func_149(1, 2, &(uParam0->f_118), func_147(uParam0), &(uParam0->f_241), 0.5f, func_132(uParam0)))
			{
				func_2(&(Global_1394141->f_1325), 131072);
			}
			if (func_5(Global_1394141->f_1325, 262144) && func_151(1, 2, &(uParam0->f_118), func_150(uParam0), &(uParam0->f_241), 0.5f, func_132(uParam0)))
			{
				func_2(&(Global_1394141->f_1325), 262144);
			}
		}
		if (func_5(Global_1394141->f_1325, 524288))
		{
			bVar0 = true;
			if (!func_133(&(uParam0->f_31), func_136(uParam0), &(uParam0->f_232), 0.1f, func_132(uParam0)))
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				func_2(&(Global_1394141->f_1325), 524288);
			}
		}
		if (func_5(Global_1394141->f_1325, 1048576))
		{
			bVar1 = true;
			if (!func_135(&(uParam0->f_31), func_138(uParam0), &(uParam0->f_232), 0.1f, func_132(uParam0)))
			{
				bVar1 = false;
			}
			if (bVar1)
			{
				func_2(&(Global_1394141->f_1325), 1048576);
			}
		}
	}
	if (iParam1 == 1 || iParam1 == 2)
	{
		if (func_5(Global_1394141->f_1325, 2097152))
		{
			if (func_5(Global_1394141->f_1325, 4194304) && func_133(&(uParam0->f_118), func_152(uParam0), &(uParam0->f_238), func_153(uParam0), func_132(uParam0)))
			{
				func_2(&(Global_1394141->f_1325), 4194304);
			}
			if (func_5(Global_1394141->f_1325, 8388608) && func_135(&(uParam0->f_118), func_154(uParam0), &(uParam0->f_238), func_153(uParam0), func_132(uParam0)))
			{
				func_2(&(Global_1394141->f_1325), 8388608);
			}
		}
	}
}

void func_35(var uParam0)
{
	switch (uParam0->f_5)
	{
		case 0:
			if (func_5(uParam0->f_13, 32768))
			{
				func_155(&(uParam0->f_5), 1);
				return;
			}
			if (func_5(uParam0->f_13, 65536))
			{
				func_155(&(uParam0->f_5), 2);
				return;
			}
			if (func_5(uParam0->f_13, 512) && !func_5(uParam0->f_13, 2048))
			{
				func_155(&(uParam0->f_5), 3);
				return;
			}
			if (func_5(uParam0->f_13, 1024) && !func_5(uParam0->f_13, 4096))
			{
				func_155(&(uParam0->f_5), 4);
				return;
			}
			break;
		case 1:
			if (ANIMSCENE::_0x25557E324489393C(&(uParam0->f_113[2])))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(&(uParam0->f_113[2]));
			}
			uParam0->f_113[2] = 0;
			func_156(uParam0);
			func_2(&(uParam0->f_13), 32768);
			func_155(&(uParam0->f_5), 0);
			break;
		case 2:
			if (ANIMSCENE::_0x25557E324489393C(&(uParam0->f_113[3])))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(&(uParam0->f_113[3]));
			}
			uParam0->f_113[3] = 0;
			func_157(uParam0);
			func_2(&(uParam0->f_13), 65536);
			func_155(&(uParam0->f_5), 0);
			break;
		case 3:
			if (!func_161(uParam0->f_113[2], &(uParam0->f_13), func_159(func_158(uParam0), 2), func_160(func_158(uParam0)), 1))
			{
				return;
			}
			func_4(&(uParam0->f_13), 2048);
			func_155(&(uParam0->f_5), 0);
			break;
		case 4:
			if (Global_1394141->f_1324)
			{
				if (!func_161(uParam0->f_113[3], &(uParam0->f_13), func_159(func_158(uParam0), 3), func_162(func_158(uParam0), 0), 1))
				{
					return;
				}
			}
			else if (!func_161(uParam0->f_113[3], &(uParam0->f_13), func_159(func_158(uParam0), 3), func_162(func_158(uParam0), 1), 1))
			{
				return;
			}
			func_4(&(uParam0->f_13), 4096);
			func_155(&(uParam0->f_5), 0);
			break;
	}
}

void func_36(var uParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	bVar0 = PED::_0x34D6AC1157C8226C(Global_35, -447259824);
	bVar1 = func_6(Global_35, &(uParam0->f_119[2]), 1, 0);
	bVar2 = func_6(Global_35, &(uParam0->f_119[3]), 1, 0);
	if (Global_36.f_2 > 51f)
	{
		bVar2 = true;
	}
	if (func_163(36))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (bVar1)
		{
			if (!func_5(uParam0->f_13, 8388608) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_126))
			{
				if (CAM::_0xDD0B7C5AE58F721D(&(uParam0->f_146)) && !CAM::_0x927B810E43E99932(&(uParam0->f_146)))
				{
					CAM::_0xB8B207C34285E978(&(uParam0->f_146));
					func_4(&(uParam0->f_13), 8388608);
				}
			}
		}
		if (bVar2)
		{
			if (!func_5(uParam0->f_13, 8388608) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_126))
			{
				if (CAM::_0xDD0B7C5AE58F721D(&(uParam0->f_162)) && !CAM::_0x927B810E43E99932(&(uParam0->f_162)))
				{
					CAM::_0xB8B207C34285E978(&(uParam0->f_162));
					func_4(&(uParam0->f_13), 8388608);
				}
			}
		}
	}
	else
	{
		if (CAM::_0x927B810E43E99932(&(uParam0->f_146)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_146));
			func_2(&(uParam0->f_13), 8388608);
		}
		if (CAM::_0x927B810E43E99932(&(uParam0->f_162)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_162));
			func_2(&(uParam0->f_13), 8388608);
		}
	}
}

void func_37(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	if ((!func_5(Global_40.f_9028.f_12, 2) && func_5(Global_40.f_9028.f_12, 1)) && !func_163(36))
	{
		iVar0 = 1;
		func_164(&(uParam0->f_1018), 20, 0);
		func_4(&(Global_1394141->f_1326), 16);
		func_4(&(Global_40.f_9028.f_12), 2);
	}
	if (func_165(0, 0, 1) && func_163(36))
	{
		uParam0->f_12 = 2;
		uParam0->f_984.f_20 = 1;
	}
	if (func_5(Global_40.f_9028.f_12, 4) && !func_5(Global_40.f_9028.f_12, 8))
	{
		uParam0->f_12 = 2;
		uParam0->f_984.f_20 = 1;
	}
	switch (uParam0->f_12)
	{
		case 0:
			func_166(&(uParam0->f_1018), (3 + iVar0));
			func_164(&(uParam0->f_1018), 9, (0 + iVar0));
			func_164(&(uParam0->f_1018), 12, (1 + iVar0));
			func_164(&(uParam0->f_1018), 7, (2 + iVar0));
			uParam0->f_1029 = Global_1394141->f_1327;
			break;
		case 1:
			func_166(&(uParam0->f_1018), (3 + iVar0));
			func_164(&(uParam0->f_1018), 5, (0 + iVar0));
			func_164(&(uParam0->f_1018), 16, (1 + iVar0));
			func_164(&(uParam0->f_1018), 18, (2 + iVar0));
			uParam0->f_1029 = Global_1394141->f_1327;
			break;
		case 2:
			func_166(&(uParam0->f_1018), (3 + iVar0));
			func_164(&(uParam0->f_1018), 8, (0 + iVar0));
			func_164(&(uParam0->f_1018), 14, (1 + iVar0));
			func_164(&(uParam0->f_1018), 6, (2 + iVar0));
			uParam0->f_1029 = Global_1394141->f_1327;
			break;
		case 3:
			func_166(&(uParam0->f_1018), (3 + iVar0));
			func_164(&(uParam0->f_1018), 17, (0 + iVar0));
			func_164(&(uParam0->f_1018), 10, (1 + iVar0));
			func_164(&(uParam0->f_1018), 15, (2 + iVar0));
			uParam0->f_1029 = Global_1394141->f_1327;
			break;
		case 4:
			func_166(&(uParam0->f_1018), (3 + iVar0));
			func_164(&(uParam0->f_1018), 13, (0 + iVar0));
			func_164(&(uParam0->f_1018), 19, (1 + iVar0));
			func_164(&(uParam0->f_1018), 11, (2 + iVar0));
			uParam0->f_1029 = Global_1394141->f_1327;
			break;
	}
}

void func_38(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		((*uParam0)[iVar0 /*5*/])->f_2 = 1f;
		((*uParam0)[iVar0 /*5*/])->f_3 = 0f;
		((*uParam0)[iVar0 /*5*/])->f_4 = 1f;
		((*uParam0)[iVar0 /*5*/])->f_1 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		(uParam0->f_31[iVar0 /*5*/])->f_2 = 1f;
		(uParam0->f_31[iVar0 /*5*/])->f_3 = 0f;
		(uParam0->f_31[iVar0 /*5*/])->f_4 = 1f;
		(uParam0->f_31[iVar0 /*5*/])->f_1 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		(uParam0->f_107[iVar0 /*5*/])->f_2 = 1f;
		(uParam0->f_107[iVar0 /*5*/])->f_3 = 0f;
		(uParam0->f_107[iVar0 /*5*/])->f_4 = 1f;
		(uParam0->f_107[iVar0 /*5*/])->f_1 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 21)
	{
		(uParam0->f_118[iVar0 /*5*/])->f_2 = 1f;
		(uParam0->f_118[iVar0 /*5*/])->f_3 = 0f;
		(uParam0->f_118[iVar0 /*5*/])->f_4 = 1f;
		(uParam0->f_118[iVar0 /*5*/])->f_1 = 0;
		iVar0++;
	}
	func_4(&(Global_1394141->f_1325), -2147483648);
}

int func_39()
{
	if (func_75() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == 11966224)
	{
		return 1;
	}
	return 0;
}

void func_40(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_167(uParam0, iParam1, sParam2))
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

int func_41()
{
	int iVar0;

	iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(func_65(0));
	if (!func_5(Local_22.f_13, 67108864))
	{
		if (INTERIOR::IS_VALID_INTERIOR(iVar0))
		{
			INTERIOR::PIN_INTERIOR_IN_MEMORY(iVar0);
			func_4(&(Local_22.f_13), 67108864);
		}
	}
	else if (INTERIOR::IS_INTERIOR_READY(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_42()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		iVar1 = func_168(iVar0);
		STREAMING::REQUEST_MODEL(iVar1, false);
		if (!STREAMING::HAS_MODEL_LOADED(iVar1))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_43()
{
	if (!func_161(&(Local_22.f_128), &(Local_22.f_13), func_169(), func_170(0), 1))
	{
		return 0;
	}
	if (!func_172(Local_22.f_128, func_171(1), func_169()))
	{
		return 0;
	}
	if (!func_172(Local_22.f_128, func_171(2), func_169()))
	{
		return 0;
	}
	return 1;
}

int func_44()
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(func_173()))
	{
		if (HUD::_0x2C729F2B94CEA911(func_173()))
		{
			HUD::_0xF66090013DE648D5(func_173());
		}
		if (!HUD::_0xD0976CC34002DB57(func_173()))
		{
			return 0;
		}
	}
	return 1;
}

int func_45()
{
	if (!func_161(Local_22.f_113[0], &(Local_22.f_13), func_174(Local_22.f_12, 0), func_175(Local_22.f_12), 1))
	{
		return 0;
	}
	return 1;
}

int func_46(var uParam0)
{
	StringCopy(&(uParam0->f_146), "camera_treatments", 64);
	StringCopy(&(uParam0->f_146.f_8), "THEATRE_CUSTOM_TREATMENT_REQUEST", 64);
	StringCopy(&(uParam0->f_162), "camera_treatments", 64);
	StringCopy(&(uParam0->f_162.f_8), "THEATRE_RIGHT_SIDE_CUSTOM_TREATMENT_REQUEST", 64);
	CAM::_0x6A4D224FC7643941("camera_treatments");
	return 1;
}

int func_47(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_126))
	{
		uParam0->f_126 = func_178(func_168(0), func_176(1), func_177(1), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_126))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_127))
	{
		uParam0->f_127 = OBJECT::CREATE_OBJECT(func_168(1), func_176(0), true, true, false, false, true);
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_127))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_126))
	{
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uParam0->f_126, "Default_Show_Performers_Group", -1f);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_126, true);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_126, 448, true);
		AUDIO::STOP_PED_SPEAKING(uParam0->f_126, true);
		PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_126, false);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_126, -1538724068);
		PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(uParam0->f_126, 0, 1);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_126, 169, true);
	}
	return 1;
}

struct<11> func_48(int iParam0)
{
	struct<11> Var0;

	switch (iParam0)
	{
		case 0:
			Var0 = { 2546.392f, -1311.06f, 49.80124f };
			Var0.f_3 = { 0f, 0f, -0.428209f };
			Var0.f_6 = { 17.93956f, 6.905415f, 3.337901f };
			Var0.f_9 = "SHOW_MC_ON_STAGE";
			Var0.f_10 = -1612834106;
			break;
		case 1:
			Var0 = { 2546.448f, -1301.489f, 51.592f };
			Var0.f_3 = { 0f, 0f, 0.496f };
			Var0.f_6 = { 18.193f, 22.845f, 8.938f };
			Var0.f_9 = "SHOW_MC_VOLUME_FOCUS_CAM";
			Var0.f_10 = -1612834106;
			break;
		case 2:
			Var0 = { 2549.975f, -1299.587f, 48.85019f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var0.f_6 = { 5.433204f, 11.15138f, 4.404195f };
			Var0.f_9 = "SHOW_MC_LEFT_SEATS";
			Var0.f_10 = -1612834106;
			break;
		case 3:
			Var0 = { 2542.911f, -1299.587f, 48.85019f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var0.f_6 = { 5.433204f, 11.15138f, 4.404195f };
			Var0.f_9 = "SHOW_MC_RIGHT_SEATS";
			Var0.f_10 = -1612834106;
			break;
		case 4:
			Var0 = { 2546.598f, -1288.292f, 51.77531f };
			Var0.f_3 = { 0f, 0f, 1.8f };
			Var0.f_6 = { 9.553825f, 4.673606f, 7.770726f };
			Var0.f_9 = "SHOW_MC_FRONT_BUFFER";
			Var0.f_10 = -1612834106;
			break;
	}
	return Var0;
}

void func_49(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	switch (iParam1)
	{
		case 0:
			PED::_0xF008E0BA1FE1D644(56);
			iVar0 = 0;
			while (iVar0 <= (12 - 1))
			{
				iVar1 = iVar0;
				if (func_179(iVar1, *uParam0))
				{
					STREAMING::REQUEST_ANIM_DICT(func_180(iVar1));
				}
				iVar0++;
			}
			uParam0->f_17 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
			break;
		case 1:
			PED::_0xF008E0BA1FE1D644(22);
			STREAMING::REQUEST_ANIM_DICT(func_180(0));
			break;
		case 2:
			PED::_0xF008E0BA1FE1D644(22);
			STREAMING::REQUEST_ANIM_DICT(func_180(0));
			break;
		case 3:
			PED::_0xF008E0BA1FE1D644(10);
			STREAMING::REQUEST_ANIM_DICT(func_180(0));
			break;
		case 4:
			PED::_0xF008E0BA1FE1D644(23);
			STREAMING::REQUEST_ANIM_DICT(func_180(0));
			break;
	}
}

int func_50(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (!PED::_0x5E420FF293EE5472())
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			bVar2 = true;
			iVar0 = 0;
			while (iVar0 <= (12 - 1))
			{
				iVar1 = iVar0;
				if (func_179(iVar1, *uParam0) && !STREAMING::HAS_ANIM_DICT_LOADED(func_180(iVar1)))
				{
					bVar2 = false;
				}
				iVar0++;
			}
			if (!bVar2)
			{
				return 0;
			}
			if (!func_182(uParam0->f_12[1 /*2*/], func_181(1, uParam0->f_17), 0))
			{
				return 0;
			}
			if (!func_182(uParam0->f_12[0 /*2*/], func_181(0, uParam0->f_17), 0))
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_51(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_183(iParam1);
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= (iVar0 - 1))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0[iVar2 /*10*/]))
		{
			iVar3 = POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(func_184(iParam1), func_185(iParam1, iVar2), -156825994, 0, 1, func_186(iParam1, iVar2));
			bVar1 = false;
			if (func_5(Global_1394141->f_1326, 16))
			{
				if (iVar2 == 4)
				{
					iVar3 = 1110781448;
					bVar1 = true;
				}
			}
			else if (iParam2 == 0)
			{
				if (iVar2 == 5)
				{
					iVar3 = 339709868;
					bVar1 = true;
				}
				else if (iVar2 == 31)
				{
					iVar3 = -141596905;
					bVar1 = true;
				}
			}
			if (bVar1)
			{
				STREAMING::REQUEST_MODEL(iVar3, false);
			}
			if (bVar1 && !STREAMING::HAS_MODEL_LOADED(iVar3))
			{
				return 0;
			}
			if (STREAMING::IS_MODEL_VALID(iVar3))
			{
				(*uParam0)[iVar2 /*10*/] = func_178(iVar3, func_186(iParam1, iVar2), func_187(iParam1, iVar2), 1, 1, func_188(iParam1, iVar2), 1, 1, 1, 0, 0, 0, 0);
			}
			return 0;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0[iVar2 /*10*/]))
		{
			return 0;
		}
		iVar2++;
	}
	return 1;
}

int func_52(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (!func_189(uParam1, iParam2))
	{
		return 0;
	}
	iVar0 = func_183(iParam2);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= (iVar0 - 1))
	{
		if ((func_190(iVar1, uParam1->f_17) && iParam2 == 0) && !uParam1->f_20)
		{
			((*uParam0)[iVar1 /*10*/])->f_1 = 6;
			((*uParam0)[iVar1 /*10*/])->f_2 = iVar1;
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(uParam1->f_12[1 /*2*/]), func_191(1, iVar1, uParam1->f_17), uParam0[iVar1 /*10*/], 0);
		}
		else if (func_192(iParam2))
		{
			((*uParam0)[iVar1 /*10*/])->f_1 = 1;
			((*uParam0)[iVar1 /*10*/])->f_2 = iVar1;
			func_193((*uParam0)[iVar1 /*10*/], iParam2);
		}
		else
		{
			((*uParam0)[iVar1 /*10*/])->f_1 = 1;
			((*uParam0)[iVar1 /*10*/])->f_2 = iVar1;
			func_194((*uParam0)[iVar1 /*10*/], iParam2);
		}
		iVar1++;
	}
	return 1;
}

int func_53(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_183(iParam1);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= (iVar0 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0[iVar1 /*10*/]))
		{
			PED::SET_PED_CONFIG_FLAG(uParam0[iVar1 /*10*/], 301, true);
			PED::SET_PED_CONFIG_FLAG(uParam0[iVar1 /*10*/], 448, true);
			AUDIO::STOP_PED_SPEAKING(uParam0[iVar1 /*10*/], true);
			PED::SET_PED_CAN_BE_TARGETTED(uParam0[iVar1 /*10*/], false);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0[iVar1 /*10*/], -1538724068);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0[iVar1 /*10*/], true);
			func_195(uParam0[iVar1 /*10*/], 0);
		}
		iVar1++;
	}
	return 1;
}

void func_54(var uParam0, var uParam1, int iParam2)
{
	if (func_5(uParam0->f_18, 1) && !func_5(uParam0->f_18, 2))
	{
		STREAMING::_0x19A6BE7D9C6884D3(-1426662425, 15, 0, 0);
		func_4(&(uParam0->f_18), 2);
	}
	if (func_5(uParam0->f_18, 2) && !func_5(uParam0->f_18, 4))
	{
		if (STREAMING::_0x9427C94D2E4094A4(-1426662425, 0))
		{
			func_4(&(uParam0->f_18), 4);
		}
	}
	if (func_5(uParam0->f_18, 8) && !func_5(uParam0->f_18, 16))
	{
		TASK::REQUEST_WAYPOINT_RECORDING(func_196(iParam2));
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(func_196(iParam2)))
		{
			func_4(&(uParam0->f_18), 16);
		}
	}
	func_197(uParam0, uParam1, iParam2);
	switch (Global_1394141->f_1332)
	{
		case 0:
			break;
		default:
			if (Global_1394141->f_1332 != Global_1394141->f_1333)
			{
				func_199(uParam0, uParam1, iParam2, func_198(*uParam0, uParam0->f_1, Global_1394141->f_1332));
				Global_1394141->f_1333 = Global_1394141->f_1332;
			}
			break;
	}
}

void func_55(var uParam0)
{
	switch (uParam0->f_125)
	{
		case 0:
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1971419888);
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -84935522);
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -990515711);
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1197974168);
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1327359026);
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1327359026);
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1327359026);
			break;
		case 1:
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -742665265);
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -742665265);
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -742665265);
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -742665265);
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -742665265);
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1938155306);
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -2040461796);
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -84935522);
			break;
		case 4:
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1197974168);
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1327359026);
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1327359026);
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1327359026);
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -990515711);
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -742665265);
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -742665265);
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -742665265);
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -742665265);
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -742665265);
			break;
		case 2:
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1938155306);
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1971419888);
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -84935522);
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -2040461796);
			break;
		case 3:
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -990515711);
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1938155306);
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1971419888);
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -84935522);
			break;
	}
	if (func_5(Global_40.f_9028.f_12, 1))
	{
		PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -480463506);
		PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 240200131);
		PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1901360117);
	}
}

void func_56()
{
	Global_40.f_9028.f_14++;
	Global_40.f_9028.f_13++;
}

void func_57(var uParam0)
{
	bool bVar0;

	bVar0 = false;
	if (func_6(Global_35, &(uParam0->f_119[1]), 1, 0))
	{
		bVar0 = true;
	}
	if (func_5(Global_1394141->f_1326, 1024) && uParam0->f_7 < 6)
	{
		func_200(&(uParam0->f_7), 6);
	}
	switch (uParam0->f_7)
	{
		case 0:
			if (*uParam0 != 8)
			{
				return;
			}
			if (!bVar0)
			{
				return;
			}
			if (bVar0)
			{
				if (!CAM::DOES_CAM_EXIST(uParam0->f_141))
				{
					uParam0->f_141 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, func_201(0), func_202(0), CAM::GET_FINAL_RENDERED_CAM_FOV(), false, 2);
				}
				func_200(&(uParam0->f_7), 1);
			}
			break;
		case 1:
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
			}
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0, -416594956))
			{
				if (!func_20(&(uParam0->f_142)))
				{
					func_21(&(uParam0->f_142));
					return;
				}
				else if (func_203(&(uParam0->f_142)) < 800)
				{
					return;
				}
			}
			else
			{
				if (func_20(&(uParam0->f_142)))
				{
					func_27(&(uParam0->f_142));
				}
				if (func_204(&(uParam0->f_1031[2])))
				{
					func_205(uParam0->f_1031[2], 1, 1);
				}
				return;
			}
			if (!func_204(&(uParam0->f_1031[2])))
			{
				uParam0->f_1031[2] = func_206("INTERACT_LOOK", -416594956, 6, 570, 570, 10, 1073741824, 0, 1065353216, 0, 1, 1704213876, 0);
			}
			else if (func_207(&(uParam0->f_1031[2]), 1))
			{
				if (CAM::DOES_CAM_EXIST(uParam0->f_141))
				{
					if (!CAM::IS_CAM_RENDERING(uParam0->f_141))
					{
						CAM::SET_CAM_ACTIVE(uParam0->f_141, true);
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						func_205(uParam0->f_1031[2], 1, 1);
						func_4(&(Global_1394141->f_1326), 512);
						func_200(&(uParam0->f_7), 2);
					}
				}
			}
			break;
		case 2:
			if (!PAD::IS_DISABLED_CONTROL_PRESSED(0, -416594956))
			{
				func_200(&(uParam0->f_7), 3);
			}
			break;
		case 3:
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, 0, 0);
			}
			PAD::DISABLE_CONTROL_ACTION(0, 2139949496, false);
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0, -416594956))
			{
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				func_2(&(Global_1394141->f_1326), 512);
				func_27(&(uParam0->f_142));
				func_200(&(uParam0->f_7), 4);
			}
			if (PAD::IS_CONTROL_JUST_PRESSED(2, -1496944061))
			{
				uParam0->f_145++;
				if (uParam0->f_145 > 2)
				{
					uParam0->f_145 = 0;
				}
				CAM::SET_CAM_COORD(uParam0->f_141, func_201(uParam0->f_145));
				CAM::SET_CAM_ROT(uParam0->f_141, func_202(uParam0->f_145), 2);
			}
			if (*uParam0 == 9 || !bVar0)
			{
				func_200(&(uParam0->f_7), 6);
			}
			break;
		case 4:
			PAD::DISABLE_CONTROL_ACTION(0, 2139949496, false);
			if (!PAD::IS_DISABLED_CONTROL_PRESSED(0, -416594956))
			{
				func_200(&(uParam0->f_7), 1);
			}
			break;
		case 6:
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
			}
			if (!bVar0)
			{
				if (CAM::DOES_CAM_EXIST(uParam0->f_141) && CAM::IS_CAM_RENDERING(uParam0->f_141))
				{
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					CAM::SET_CAM_ACTIVE(uParam0->f_141, false);
				}
				if (func_204(&(uParam0->f_1031[2])))
				{
					func_205(uParam0->f_1031[2], 1, 1);
				}
				func_200(&(uParam0->f_7), 8);
			}
			else if (CAM::DOES_CAM_EXIST(uParam0->f_141))
			{
				if (CAM::IS_CAM_RENDERING(uParam0->f_141))
				{
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					CAM::SET_CAM_ACTIVE(uParam0->f_141, false);
				}
				else
				{
					CAM::DESTROY_CAM(uParam0->f_141, false);
					if (func_204(&(uParam0->f_1031[2])))
					{
						func_205(uParam0->f_1031[2], 1, 1);
					}
					func_200(&(uParam0->f_7), 8);
				}
			}
			func_2(&(Global_1394141->f_1326), 512);
			break;
		case 8:
			if (!func_5(Global_1394141->f_1326, 1024))
			{
				func_200(&(uParam0->f_7), 0);
			}
			break;
	}
}

int func_58(var uParam0)
{
	bool bVar0;

	bVar0 = func_6(Global_35, (Global_1394141->f_7[uParam0->f_125 /*31*/])->f_4, 1, 0);
	func_208(uParam0);
	func_60(uParam0);
	func_209(uParam0);
	if ((bVar0 && ENTITY::DOES_ENTITY_EXIST(Local_22.f_126)) && !ENTITY::IS_ENTITY_DEAD(Local_22.f_126))
	{
		switch (uParam0->f_4)
		{
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 8:
			case 9:
			case 10:
			case 11:
				PED::SET_PED_RESET_FLAG(uParam0->f_126, 261, true);
				break;
		}
	}
	switch (uParam0->f_4)
	{
		case 0:
			if (!func_20(&(Local_22.f_132)))
			{
				func_21(&(Local_22.f_132));
				func_4(&(uParam0->f_13), 33554432);
			}
			if ((ANIMSCENE::_0x25557E324489393C(&(uParam0->f_984.f_12[1 /*2*/])) && ANIMSCENE::_0xD8254CB2C586412B(&(uParam0->f_984.f_12[1 /*2*/]), 0)) || (func_20(&(Local_22.f_132)) && func_22(&(Local_22.f_132)) > 15f))
			{
				func_4(&(uParam0->f_13), 512);
				func_71();
				func_210(&(uParam0->f_4), 1);
			}
			break;
		case 1:
			uParam0->f_118 = &uParam0->f_113[0];
			Global_1394141->f_1335 = uParam0->f_118;
			uParam0->f_984 = &uParam0->f_1018.f_1[uParam0->f_1029];
			if (uParam0->f_1029 + 1 < uParam0->f_1018)
			{
				uParam0->f_984.f_1 = &uParam0->f_1018.f_1[uParam0->f_1029 + 1];
			}
			else
			{
				uParam0->f_984.f_1 = -1;
			}
			uParam0->f_1030 = &uParam0->f_1018.f_1[uParam0->f_1029];
			func_211(uParam0->f_118, uParam0->f_126, uParam0->f_127);
			func_2(&(Global_1394141->f_1326), 4096);
			func_4(&(uParam0->f_13), 64);
			func_210(&(uParam0->f_4), 2);
			break;
		case 2:
			func_212(&(uParam0->f_126));
			if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_118, 0))
			{
				return 0;
			}
			else
			{
				if (func_5(uParam0->f_13, 33554432) && ANIMSCENE::_0x3FBC3F51BF12DFBF(uParam0->f_118) > 0.1f)
				{
					func_2(&(uParam0->f_13), 33554432);
				}
				if (ANIMSCENE::_0x3FBC3F51BF12DFBF(uParam0->f_118) > 0.5f)
				{
					func_210(&(uParam0->f_4), 3);
				}
			}
			break;
		case 3:
			func_213(uParam0->f_1030);
			func_212(&(uParam0->f_126));
			if (ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_118, func_214()) || ANIMSCENE::_0xD8254CB2C586412B(uParam0->f_118, 0))
			{
				uParam0->f_118 = &uParam0->f_113[2];
				Global_1394141->f_1335 = uParam0->f_118;
				func_211(uParam0->f_118, uParam0->f_126, uParam0->f_127);
				func_215(uParam0, 65536);
				func_210(&(uParam0->f_4), 4);
			}
			break;
		case 4:
			func_212(&(uParam0->f_126));
			if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_118, 0))
			{
				return 0;
			}
			else
			{
				if (ANIMSCENE::_0x25557E324489393C(&(uParam0->f_113[0])) && ANIMSCENE::_0x477122B8D05E7968(&(uParam0->f_113[0]), 1, 0))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(&(uParam0->f_113[0]));
				}
				if (!func_5(uParam0->f_13, 33554432) && ANIMSCENE::_0x3FBC3F51BF12DFBF(uParam0->f_118) > 0.9f)
				{
					func_4(&(uParam0->f_13), 33554432);
				}
				if (ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_118, func_214()) || ANIMSCENE::_0xD8254CB2C586412B(uParam0->f_118, 0))
				{
					ENTITY::_0x203BEFFDBE12E96A(uParam0->f_126, func_176(4), func_177(4), 1, 0, 1);
					func_210(&(uParam0->f_4), 5);
				}
			}
			break;
		case 5:
			if (func_216(uParam0))
			{
				if (ANIMSCENE::_0x25557E324489393C(&(uParam0->f_984.f_12[0 /*2*/])))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(&(uParam0->f_984.f_12[0 /*2*/]));
				}
				if (ANIMSCENE::_0x25557E324489393C(&(uParam0->f_984.f_12[1 /*2*/])))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(&(uParam0->f_984.f_12[1 /*2*/]));
				}
				func_215(uParam0, 32768);
				func_2(&(uParam0->f_13), 64);
				func_210(&(uParam0->f_4), 6);
			}
			break;
		case 6:
			if (Global_1394141->f_1322)
			{
				func_4(&(uParam0->f_13), 256);
				if (!func_20(&(Local_22.f_129)))
				{
					func_21(&(Local_22.f_129));
				}
				func_27(&(Local_22.f_132));
				func_210(&(uParam0->f_4), 7);
			}
			break;
		case 7:
			if ((ANIMSCENE::_0x25557E324489393C(&(uParam0->f_113[2])) && ANIMSCENE::_0x477122B8D05E7968(&(uParam0->f_113[2]), 1, 0)) && ANIMSCENE::_0xD8254CB2C586412B(&(uParam0->f_113[2]), 0))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(&(uParam0->f_113[2]));
			}
			if ((!func_5(uParam0->f_13, 524288) && Local_22.f_1029 >= 0) && func_22(&(Local_22.f_129)) > 30f)
			{
				if (func_163(36) || func_5(Global_40.f_9028.f_12, 4))
				{
					func_2(&(Global_40.f_9028.f_12), 4);
					func_4(&(Global_40.f_9028.f_12), 8);
				}
				else
				{
					Global_40.f_9028[(Global_1394141->f_7[&Global_1394141 /*31*/])->f_30] = &Global_40.f_9028[(Global_1394141->f_7[&Global_1394141 /*31*/])->f_30] + 1;
				}
				if (func_5(Global_1394141->f_1326, 8192))
				{
					func_2(&(Global_1394141->f_1326), 8192);
				}
				func_4(&(uParam0->f_13), 524288);
			}
			if (!Global_1394141->f_1323)
			{
				return 0;
			}
			if (!func_217(uParam0))
			{
				return 0;
			}
			if (!func_20(&(Local_22.f_132)))
			{
				func_21(&(Local_22.f_132));
				return 0;
			}
			else if (func_22(&(Local_22.f_132)) < 7f)
			{
				return 0;
			}
			func_2(&(Global_1394141->f_1326), 4);
			func_2(&(Global_1394141->f_1326), 2);
			func_2(&(Global_1394141->f_1326), 1);
			func_27(&(Local_22.f_132));
			if (uParam0->f_125 == 15 && Global_1394141->f_1324)
			{
				Local_22.f_1029++;
				Global_1394141->f_1323 = 0;
				Global_1394141->f_1321 = 0;
				Global_1394141->f_1322 = 0;
				Global_1394141->f_1324 = 0;
				func_210(&(uParam0->f_4), 12);
			}
			else
			{
				func_215(uParam0, 1024);
				func_4(&(uParam0->f_13), 64);
				func_210(&(uParam0->f_4), 8);
			}
			break;
		case 8:
			func_212(&(uParam0->f_126));
			if (ANIMSCENE::_0x25557E324489393C(&(uParam0->f_113[3])) && ANIMSCENE::_0x477122B8D05E7968(&(uParam0->f_113[3]), 1, 0))
			{
				Local_22.f_1029++;
				Global_1394141->f_1323 = 0;
				Global_1394141->f_1321 = 0;
				Global_1394141->f_1322 = 0;
				Global_1394141->f_1324 = 0;
				uParam0->f_118 = &uParam0->f_113[3];
				Global_1394141->f_1335 = uParam0->f_118;
				func_211(uParam0->f_118, uParam0->f_126, uParam0->f_127);
				if (Local_22.f_1029 < Local_22.f_1018)
				{
					func_4(&(uParam0->f_13), 512);
				}
				func_210(&(uParam0->f_4), 9);
			}
			break;
		case 9:
			func_212(&(uParam0->f_126));
			if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_118, 0))
			{
				return 0;
			}
			else
			{
				if (Local_22.f_1029 >= Local_22.f_1018)
				{
					func_218();
				}
				if (func_5(uParam0->f_13, 33554432) && ANIMSCENE::_0x3FBC3F51BF12DFBF(uParam0->f_118) > 0.1f)
				{
					func_2(&(uParam0->f_13), 33554432);
				}
				if (ANIMSCENE::_0x3FBC3F51BF12DFBF(uParam0->f_118) > 0.98f)
				{
					if (Local_22.f_1029 >= Local_22.f_1018)
					{
						func_71();
						uParam0->f_984.f_11 = 0;
						func_210(&(uParam0->f_4), 10);
					}
					else
					{
						func_71();
						uParam0->f_984 = &uParam0->f_1018.f_1[uParam0->f_1029];
						uParam0->f_1030 = &uParam0->f_1018.f_1[uParam0->f_1029];
						uParam0->f_984.f_11 = 0;
						func_210(&(uParam0->f_4), 3);
					}
				}
			}
			break;
		case 10:
			func_212(&(uParam0->f_126));
			if (ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_118, func_214()) || ANIMSCENE::_0xD8254CB2C586412B(uParam0->f_118, 0))
			{
				uParam0->f_118 = &uParam0->f_113[1];
				Global_1394141->f_1335 = uParam0->f_118;
				func_211(uParam0->f_118, uParam0->f_126, uParam0->f_127);
				func_210(&(uParam0->f_4), 11);
			}
			break;
		case 11:
			func_212(&(uParam0->f_126));
			if (ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_118, func_214()))
			{
				ENTITY::_0x203BEFFDBE12E96A(uParam0->f_126, func_176(4), func_177(4), 1, 0, 1);
			}
			if ((ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_118, 0) && ANIMSCENE::_0x25557E324489393C(&(uParam0->f_113[3]))) && ANIMSCENE::_0x477122B8D05E7968(&(uParam0->f_113[3]), 1, 0))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(&(uParam0->f_113[3]));
			}
			if (!func_5(uParam0->f_13, 33554432) && ANIMSCENE::_0x3FBC3F51BF12DFBF(uParam0->f_118) > 0.9f)
			{
				func_4(&(uParam0->f_13), 33554432);
			}
			if (ANIMSCENE::_0xD8254CB2C586412B(uParam0->f_118, 0))
			{
				if (uParam0->f_12 == 4)
				{
					func_4(&(Global_40.f_9028.f_12), 16);
				}
				func_4(&(Global_1394141->f_1325), 32);
				func_4(&(Global_1394141->f_1325), 4);
				func_4(&(Global_1394141->f_1325), 128);
				func_4(&(Global_1394141->f_1325), 32768);
				Global_1394141->f_1335 = 0;
				func_210(&(uParam0->f_4), 12);
			}
			break;
		case 12:
			return 1;
	}
	return 0;
}

void func_59(var uParam0)
{
	if (CAM::DOES_CAM_EXIST(uParam0->f_141))
	{
		if (CAM::IS_CAM_RENDERING(uParam0->f_141))
		{
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			CAM::SET_CAM_ACTIVE(uParam0->f_141, false);
		}
		CAM::DESTROY_CAM(uParam0->f_141, false);
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
	}
	func_2(&(Global_1394141->f_1326), 512);
	if (func_204(&(uParam0->f_1031[2])))
	{
		func_205(uParam0->f_1031[2], 1, 1);
	}
}

void func_60(var uParam0)
{
	switch (uParam0->f_3)
	{
		case 0:
			if (!func_172(uParam0->f_128, func_171(1), func_169()))
			{
				return;
			}
			func_219(&(uParam0->f_3), 1);
			break;
		case 1:
			if (func_5(uParam0->f_13, 256))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_128, func_220(), uParam0->f_127, 0);
				func_221(uParam0->f_128, func_171(1), func_169());
				func_219(&(uParam0->f_3), 2);
			}
			break;
		case 2:
			if (ANIMSCENE::_0x1F0E401031E20146(uParam0->f_128, func_171(1)))
			{
				func_222(uParam0->f_128, func_171(2), func_169());
				func_2(&(uParam0->f_13), 256);
				func_219(&(uParam0->f_3), 3);
			}
			break;
		case 3:
			if (!func_172(uParam0->f_128, func_171(2), func_169()))
			{
				return;
			}
			func_219(&(uParam0->f_3), 4);
			break;
		case 4:
			if (Global_1394141->f_1321)
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_128, func_220(), uParam0->f_127, 0);
				func_221(uParam0->f_128, func_171(2), func_169());
				func_219(&(uParam0->f_3), 5);
			}
			break;
		case 5:
			if (ANIMSCENE::_0x1F0E401031E20146(uParam0->f_128, func_171(2)))
			{
				func_222(uParam0->f_128, func_171(1), func_169());
				func_219(&(uParam0->f_3), 0);
			}
			break;
		case 6:
			if (!func_172(uParam0->f_128, func_171(4), func_169()))
			{
				return;
			}
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_128, func_220(), uParam0->f_127, 0);
			func_221(uParam0->f_128, func_171(4), func_169());
			func_219(&(uParam0->f_3), 7);
			break;
		case 7:
			break;
	}
}

void func_61(var uParam0)
{
	struct<10> Var0;

	if (!func_5(Global_40.f_9028.f_12, 16))
	{
		return;
	}
	switch (uParam0->f_6)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_126))
			{
				PED::DELETE_PED(&(uParam0->f_126));
			}
			if (!func_20(&(uParam0->f_138)))
			{
				func_21(&(uParam0->f_138));
			}
			else if (func_22(&(uParam0->f_138)) > 3f)
			{
				uParam0->f_3 = 6;
				if (!VOLUME::_0x92A78D0BEDB332A3(&(uParam0->f_119[0])))
				{
					Var0 = { func_48(0) };
					uParam0->f_119[0] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0.f_10, Var0, Var0.f_3, Var0.f_6, Var0.f_9);
				}
				if (!TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-1770598824))
				{
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1770598824, true);
				}
				func_4(&(Global_1394141->f_1326), 64);
				func_223(&(uParam0->f_6), 1);
			}
			break;
		case 1:
			if (func_6(Global_35, &(uParam0->f_119[0]), 1, 0))
			{
				if (!func_5(uParam0->f_13, 1048576))
				{
					if (AUDIO::LOAD_STREAM(func_224(0), func_225()))
					{
						AUDIO::PLAY_STREAM_FROM_POSITION(func_226(0), AUDIO::_0x0556C784FA056628(func_224(0), func_225()));
						func_4(&(uParam0->f_13), 1048576);
					}
				}
				if (!func_5(uParam0->f_13, 2097152) && TASK::_0xD04241BBF6D03A5E(Global_35) != 0)
				{
					if (AUDIO::LOAD_STREAM(func_224(1), func_225()))
					{
						AUDIO::PLAY_STREAM_FROM_POSITION(func_226(1), AUDIO::_0x0556C784FA056628(func_224(1), func_225()));
						func_4(&(uParam0->f_13), 2097152);
						Global_1394141->f_1332 = 49;
						func_223(&(uParam0->f_6), 2);
					}
				}
			}
			break;
		case 2:
			break;
	}
}

int func_62(int iParam0)
{
	int iVar0;
	int iVar1;

	if (&(Global_1394141->f_7[iParam0 /*31*/])->f_7[0] == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &(Global_1394141->f_7[iParam0 /*31*/])->f_7[iVar0];
		if (iVar1 != 0)
		{
			if (func_227(iVar1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_63()
{
	PED::SET_PED_CONFIG_FLAG(Global_35, 489, false);
	INVENTORY::_0xD5D72F1624F3BA7C(func_64(0));
	func_2(&(Global_1394141->f_1326), 1);
	func_2(&(Global_1394141->f_1326), 2);
	func_2(&(Global_1394141->f_1326), 4);
	func_2(&(Global_1394141->f_1326), 64);
	func_2(&(Global_1394141->f_1326), 512);
}

int func_64(bool bParam0)
{
	if (func_75() == -1)
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

Vector3 func_65(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -779.4891f, -1362.618f, 45.14579f;
		case 1:
		case 2:
			return 2696.776f, -1353.734f, 48.56572f;
		case 0:
			return 2546.481f, -1299.015f, 48.74436f;
		case 3:
			return -348.3176f, 698.5706f, 117.706f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_66(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (uParam0->f_1018 - 1))
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(&(uParam0->f_1018.f_6[iVar0]), false) && !SCRIPTS::_0x30BED53646C86D11(&(uParam0->f_1018.f_6[iVar0])))
		{
			SCRIPTS::_0x7DE4643157AD646C(&(uParam0->f_1018.f_6[iVar0]));
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_67(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = *uParam0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= (iVar0 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0[iVar1 /*10*/]))
		{
			if (!func_6(uParam0[iVar1 /*10*/], iParam1, 1, 0))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED((*uParam0)[iVar1 /*10*/]);
			}
			else
			{
				PED::DELETE_PED((*uParam0)[iVar1 /*10*/]);
			}
		}
		iVar1++;
	}
}

void func_68(var uParam0, int iParam1)
{
	int iVar0;

	if (func_228(iParam1) != -1)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= func_228(iParam1))
		{
			if (VOLUME::_0x92A78D0BEDB332A3(&(uParam0->f_22[iVar0])))
			{
				VOLUME::_0x43F867EF5C463A53(&(uParam0->f_22[iVar0]));
			}
			iVar0++;
		}
	}
}

void func_69(int iParam0)
{
	if (func_229(iParam0))
	{
		TASK::REMOVE_WAYPOINT_RECORDING(func_196(iParam0));
	}
}

void func_70(var uParam0)
{
	func_230(uParam0);
	func_230(&(uParam0->f_31));
	func_230(&(uParam0->f_107));
	func_230(&(uParam0->f_118));
	Global_1394141->f_1325 = 0;
}

void func_71()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = INTERIOR::GET_INTERIOR_AT_COORDS(2546.453f, -1303.998f, 46.793f);
	iVar1 = 0;
	while (iVar1 <= (41 - 1))
	{
		iVar0 = iVar1;
		if (func_231(iVar0) == 0)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(func_232(iVar0)))
			{
				if (INTERIOR::IS_VALID_INTERIOR(iVar2))
				{
					if (INTERIOR::IS_INTERIOR_READY(iVar2))
					{
						if (INTERIOR::_0xD56FF170710FC826(iVar2, func_232(iVar0)))
						{
							INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar2, func_232(iVar0), 1);
						}
					}
				}
			}
		}
		iVar1++;
	}
}

void func_72(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		iVar1 = iVar0;
		if (VOLUME::_0x92A78D0BEDB332A3(&(uParam0->f_119[iVar1])))
		{
			VOLUME::_0x43F867EF5C463A53(&(uParam0->f_119[iVar1]));
		}
		iVar0++;
	}
}

int func_73(vector3 vParam0)
{
	int iVar0;

	if (!INTERIOR::_ARE_COORDS_COLLIDING_WITH_EXTERIOR(vParam0))
	{
		iVar0 = INTERIOR::GET_INTERIOR_FROM_COLLISION(vParam0);
		if (INTERIOR::IS_VALID_INTERIOR(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_74(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_75()
{
	return Global_1572887->f_12;
}

bool func_76(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

int func_77(int iParam0, bool bParam1)
{
	switch (func_233(iParam0))
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

void func_78(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_79(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar7;
	int iVar8;
	int iVar9;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(false);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar0))
	{
		return 0;
	}
	ITEMSET::_0x20A4BF0E09BEE146(iVar0);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iParam0, iVar0);
	iVar1 = ITEMSET::GET_ITEMSET_SIZE(iVar0);
	if (iVar1 == 0)
	{
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	iVar9 = 0;
	while (iVar9 < 4)
	{
		iVar2 = func_234(iVar9);
		if (!PED::_0x608BC6A6AACD5036(&Var3, iParam0, iVar2, 0))
		{
		}
		else
		{
			iVar7 = Var3.f_3;
			if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
			}
			else
			{
				if (ENTITY::IS_ENTITY_DEAD(iVar7))
				{
				}
				iVar8 = ENTITY::_0x0FD25587BB306C86(iVar7);
				if (iVar8 == -1992418870 || iVar8 == 822715387)
				{
					return 1;
				}
			}
		}
		iVar9++;
	}
	return 0;
}

int func_80(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = func_81();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(false);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar1))
	{
		return 0;
	}
	ITEMSET::_0x20A4BF0E09BEE146(iVar1);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iParam0, iVar1);
	bVar2 = false;
	iVar3 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	if (iVar3 > 0)
	{
		if (ITEMSET::IS_IN_ITEMSET(iVar0, iVar1))
		{
			bVar2 = true;
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar1);
	if (bVar2)
	{
		return 1;
	}
	return 0;
}

var func_81()
{
	return Global_1900383->f_393;
}

Vector3 func_82(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

void func_83(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

void func_84(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_85(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

int func_86()
{
	return &Global_1899515;
}

void func_87(var uParam0)
{
	Global_40.f_1095.f_3054.f_2 = uParam0;
}

void func_88(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

float func_89(int iParam0, int iParam1, bool bParam2, int iParam3)
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

Vector3 func_90(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return -356.7324f, 707.2336f, 116.8609f;
		case 0:
			return 2530.901f, -1280.573f, 49.19497f;
		case 1:
		case 2:
			return 2688.514f, -1367.675f, 46.9404f;
		case 4:
			return -794.3981f, -1359.429f, 43.75871f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_91(bool bParam0)
{
	if (bParam0)
	{
		func_235(4);
	}
	func_235(2);
	MISC::SET_BIT(&(Global_1956578->f_1), 0);
}

void func_92(int iParam0)
{
	if (!iLocal_15)
	{
		WEAPON::_0xD63B4BA3A02A99E0(Global_35, iParam0);
		iLocal_15 = 1;
	}
}

void func_93(int iParam0, bool bParam1)
{
	if (iLocal_15)
	{
		WEAPON::_0x404514D231DB27A0(Global_35, *iParam0);
		iLocal_15 = 0;
		if (bParam1)
		{
			*iParam0 = 0;
		}
	}
}

void func_94()
{
	if (!iLocal_14)
	{
		INVENTORY::_0xE3A46370F70F3607(func_64(0), 0);
		iLocal_14 = 1;
	}
}

void func_95()
{
	if (iLocal_14)
	{
		INVENTORY::_0xD5D72F1624F3BA7C(func_64(0));
		iLocal_14 = 0;
	}
}

int func_96(bool bParam0, var uParam1, var uParam2)
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

int func_97()
{
	int iVar0;

	iVar0 = PED::_0xD806CD2A4F2C2996(Global_35);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::GET_ENTITY_TYPE(iVar0) == 1)
	{
		return 1;
	}
	return 0;
}

void func_98(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_99(int iParam0)
{
	int iVar0;
	int iVar1;

	if (&(Global_1394141->f_7[iParam0 /*31*/])->f_7[0] == 0)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &(Global_1394141->f_7[iParam0 /*31*/])->f_7[iVar0];
		if (iVar1 != 0)
		{
			if (!func_227(iVar1))
			{
				func_236(iVar1, 0, 0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_100(int iParam0)
{
	int iVar0;
	int iVar1;

	if (&(Global_1394141->f_7[iParam0 /*31*/])->f_7[0] == 0)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &(Global_1394141->f_7[iParam0 /*31*/])->f_7[iVar0];
		if (iVar1 != 0)
		{
			if (!func_237(iVar1) && !func_238(iVar1))
			{
				func_239(iVar1, 1, 0, 0, 0, 0, 0, 0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_101(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_240(func_86(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

bool func_102(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_103(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_105() - fParam1);
	func_241(uParam0, 1);
	func_242(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_104(var uParam0)
{
	return func_102(*uParam0, 2);
}

float func_105()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_106()
{
	if (Global_1934765->f_286 > 300)
	{
		Global_1934765->f_286 = 300;
	}
	STREAMING::_0x2F9AC754FE179D58(func_115());
}

int func_107()
{
	return Global_1310750->f_16037;
}

bool func_108(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

bool func_109(int iParam0, int iParam1)
{
	if (!func_108(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/] && iParam1) != 0;
}

int func_110(int iParam0)
{
	if (!func_108(iParam0))
	{
		return 0;
	}
	if (func_19(64) && func_243(iParam0))
	{
		return 1;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_46;
}

int func_111(int iParam0)
{
	if (!func_108(iParam0))
	{
		return 0;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_47;
}

void func_112(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_108(&(Global_1310750->f_13321[iParam0 /*9*/])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID((Global_1310750->f_13321[iParam0 /*9*/])->f_5, 523);
	((*Global_1310750)[iVar0 /*111*/])->f_48 = 0;
	func_244(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

void func_113(int iParam0)
{
	Global_1327479->f_3 = iParam0;
}

int func_114(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(&(Global_1934765->f_275[iVar0 /*2*/]), false) && &Global_1934765->f_275[iVar0 /*2*/] == SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			*uParam0 = iVar0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

float func_115()
{
	return (func_245(150f, BUILTIN::TO_FLOAT(Global_1934765->f_286)) / BUILTIN::TO_FLOAT(300));
}

int func_116()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!SCRIPTS::IS_THREAD_ACTIVE(&(Global_1934765->f_275[iVar0 /*2*/]), false))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_117(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		case 1:
			return 2;
		case 2:
			return 2;
		case 3:
			return 0;
		case 4:
			return 4;
	}
	return 0;
}

int func_118(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -842374052;
		case 1:
			return 2085190894;
		case 2:
			return 2085190894;
		case 3:
			return 0;
		case 4:
			return -1701282116;
	}
	return 0;
}

Vector3 func_119(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2553.688f, -1306.052f, 49.97987f;
				case 1:
					return 2539.203f, -1306.098f, 49.9794f;
				case 2:
					return 2539.188f, -1291.61f, 49.97276f;
				case 3:
					return 2543.014f, -1290.244f, 49.95035f;
				case 4:
					return 2549.863f, -1290.254f, 50.00306f;
				case 5:
					return 2553.694f, -1291.636f, 49.96515f;
				default:
					break;
			}
			break;
		case 1:
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2698.354f, -1347.851f, 48.38391f;
				case 1:
					return 2702.992f, -1353.339f, 48.37968f;
				default:
					break;
			}
			break;
		case 3:
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return -777.252f, -1367.02f, 44.965f;
				case 1:
					return -780.828f, -1366.866f, 45.282f;
				case 2:
					return -777.252f, -1358.225f, 44.965f;
				case 3:
					return -780.85f, -1358.394f, 45.282f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_120(var uParam0, int iParam1, vector3 vParam2, int iParam5)
{
	if (uParam0->f_1 == 0)
	{
		uParam0->f_1 = ENTITY::_0x6F3068258A499E52(iParam1, vParam2, 7);
	}
	else if (ENTITY::_0x1FF441D7954F8709(uParam0->f_1))
	{
		*uParam0 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(uParam0->f_1));
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	uParam0->f_2 = 1f;
	return 1;
}

int func_121(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15;
		case 1:
			return 13;
		case 2:
			return 10;
		case 3:
			return 0;
		case 4:
			return 0;
	}
	return 0;
}

int func_122(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1681397868;
		case 1:
			return 1663958773;
		case 2:
			return 1663958773;
		case 3:
			return 0;
		case 4:
			return 0;
	}
	return 0;
}

Vector3 func_123(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2550.559f, -1306.926f, 48.30644f;
				case 1:
					return 2549.975f, -1306.784f, 48.30579f;
				case 2:
					return 2549.373f, -1306.661f, 48.27742f;
				case 3:
					return 2548.778f, -1306.565f, 48.3292f;
				case 4:
					return 2548.191f, -1306.501f, 48.33652f;
				case 5:
					return 2547.599f, -1306.461f, 48.33248f;
				case 6:
					return 2547.012f, -1306.439f, 48.3321f;
				case 7:
					return 2546.379f, -1306.432f, 48.32198f;
				case 8:
					return 2545.83f, -1306.439f, 48.32955f;
				case 9:
					return 2545.216f, -1306.474f, 48.32186f;
				case 10:
					return 2544.61f, -1306.53f, 48.32782f;
				case 11:
					return 2544.018f, -1306.617f, 48.31695f;
				case 12:
					return 2543.43f, -1306.736f, 48.32981f;
				case 13:
					return 2542.867f, -1306.884f, 48.33492f;
				case 14:
					return 2542.276f, -1307.063f, 48.32477f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 2700.432f, -1348.183f, 47.87681f;
				case 1:
					return 2700.377f, -1348.514f, 47.85976f;
				case 2:
					return 2700.37f, -1348.888f, 47.8551f;
				case 3:
					return 2700.434f, -1349.257f, 47.86578f;
				case 4:
					return 2700.558f, -1349.631f, 47.84948f;
				case 5:
					return 2701.542f, -1350.802f, 47.85961f;
				case 6:
					return 2701.878f, -1350.986f, 47.88033f;
				case 7:
					return 2702.219f, -1351.111f, 47.86714f;
				case 8:
					return 2702.572f, -1351.179f, 47.87275f;
				case 9:
					return 2702.962f, -1351.181f, 47.87634f;
				case 10:
					return 2701.173f, -1350.579f, 47.846f;
				case 11:
					return 2700.92f, -1350.285f, 47.846f;
				case 12:
					return 2700.691f, -1349.987f, 47.846f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2700.432f, -1348.183f, 47.87681f;
				case 1:
					return 2700.377f, -1348.514f, 47.85976f;
				case 2:
					return 2700.37f, -1348.888f, 47.8551f;
				case 3:
					return 2700.434f, -1349.257f, 47.86578f;
				case 4:
					return 2700.558f, -1349.631f, 47.84948f;
				case 5:
					return 2701.542f, -1350.802f, 47.85961f;
				case 6:
					return 2701.878f, -1350.986f, 47.88033f;
				case 7:
					return 2702.219f, -1351.111f, 47.86714f;
				case 8:
					return 2702.572f, -1351.179f, 47.87275f;
				case 9:
					return 2702.962f, -1351.181f, 47.87634f;
				default:
					break;
			}
			break;
		case 3:
			break;
		case 4:
			break;
	}
	return 0f, 0f, 0f;
}

int func_124(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 1:
			return 2;
		case 2:
			return 2;
		case 3:
			return 0;
		case 4:
			return 2;
	}
	return 0;
}

int func_125(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1292279125;
		case 1:
			return -280988606;
		case 2:
			return -280988606;
		case 3:
			return 0;
		case 4:
			return 1292279125;
	}
	return 0;
}

Vector3 func_126(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2548.641f, -1292.548f, 53.95758f;
				case 1:
					return 2544.289f, -1292.548f, 53.96331f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 2691.054f, -1352.816f, 52.59f;
				case 1:
					return 2696.695f, -1359.527f, 52.59f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2688.867f, -1354.651f, 53.697f;
				case 1:
					return 2694.49f, -1361.375f, 53.697f;
				default:
					break;
			}
			break;
		case 3:
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return -783.34f, -1367.153f, 45.388f;
				case 1:
					return -783.939f, -1360.04f, 45.325f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_127(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -584148549;
				case 1:
					return 134813799;
				case 2:
					return 134813799;
				default:
					break;
			}
			break;
		case 1:
		case 2:
			return -7413278;
		case 3:
			break;
		case 4:
			break;
	}
	return 0;
}

Vector3 func_128(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2546.694f, -1306.438f, 48.21665f;
				case 1:
					return 2551.421f, -1308.492f, 48.21665f;
				case 2:
					return 2541.836f, -1308.431f, 48.21665f;
				default:
					break;
			}
			break;
		case 1:
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2697.828f, -1347.849f, 48.061f;
				case 1:
					return 2697.828f, -1347.854f, 48.89f;
				case 2:
					return 2697.827f, -1347.856f, 49.633f;
				case 3:
					return 2697.825f, -1347.853f, 50.458f;
				case 4:
					return 2697.889f, -1347.932f, 51.201f;
				case 5:
					return 2698.051f, -1348.127f, 52.013f;
				case 6:
					return 2698.298f, -1348.42f, 52.674f;
				case 7:
					return 2698.682f, -1348.865f, 53.307f;
				case 8:
					return 2699.068f, -1349.323f, 53.747f;
				case 9:
					return 2699.578f, -1349.924f, 54.096f;
				case 10:
					return 2700.049f, -1350.493f, 54.234f;
				case 11:
					return 2700.6f, -1351.151f, 54.236f;
				case 12:
					return 2701.085f, -1351.721f, 54.095f;
				case 13:
					return 2701.579f, -1352.32f, 53.744f;
				case 14:
					return 2701.959f, -1352.784f, 53.318f;
				case 15:
					return 2702.34f, -1353.231f, 52.683f;
				case 16:
					return 2702.584f, -1353.52f, 52.034f;
				case 17:
					return 2702.747f, -1353.716f, 51.212f;
				case 18:
					return 2702.814f, -1353.797f, 50.457f;
				case 19:
					return 2702.818f, -1353.797f, 49.618f;
				case 20:
					return 2702.819f, -1353.797f, 48.896f;
				case 21:
					return 2702.817f, -1353.803f, 48.036f;
				default:
					break;
			}
			break;
		case 3:
			break;
		case 4:
			break;
	}
	return 0f, 0f, 0f;
}

int func_129(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 22;
		case 2:
			return 22;
		case 3:
			return 0;
		case 4:
			return 0;
	}
	return 0;
}

float func_130(var uParam0)
{
	float fVar0;

	fVar0 = 0f;
	return fVar0;
}

float func_131(var uParam0)
{
	float fVar0;

	fVar0 = 5f;
	return fVar0;
}

int func_132(var uParam0)
{
	int iVar0;

	iVar0 = 10;
	return iVar0;
}

int func_133(var uParam0, float fParam1, var uParam2, float fParam3, int iParam4)
{
	int iVar0;
	float fVar1;

	if (!func_20(uParam2))
	{
		func_21(uParam2);
	}
	fVar1 = func_22(uParam2);
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		func_246((*uParam0)[iVar0 /*5*/], fParam1, fVar1, fParam3, iParam4);
		iVar0++;
	}
	if (fVar1 >= fParam3)
	{
		func_27(uParam2);
		return 1;
	}
	return 0;
}

float func_134(var uParam0)
{
	float fVar0;

	fVar0 = 1f;
	return fVar0;
}

int func_135(var uParam0, float fParam1, var uParam2, float fParam3, int iParam4)
{
	int iVar0;
	float fVar1;

	if (!func_20(uParam2))
	{
		func_21(uParam2);
	}
	fVar1 = func_22(uParam2);
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		func_247((*uParam0)[iVar0 /*5*/], fParam1, fVar1, fParam3, iParam4);
		iVar0++;
	}
	if (fVar1 >= fParam3)
	{
		func_27(uParam2);
		return 1;
	}
	return 0;
}

float func_136(var uParam0)
{
	float fVar0;

	fVar0 = 0f;
	return fVar0;
}

float func_137(var uParam0)
{
	float fVar0;

	fVar0 = 5f;
	return fVar0;
}

float func_138(var uParam0)
{
	float fVar0;

	fVar0 = 1f;
	return fVar0;
}

float func_139(var uParam0)
{
	float fVar0;

	fVar0 = 0f;
	return fVar0;
}

float func_140(var uParam0)
{
	float fVar0;

	fVar0 = 5f;
	return fVar0;
}

float func_141(var uParam0)
{
	float fVar0;

	fVar0 = 1f;
	return fVar0;
}

float func_142(var uParam0)
{
	float fVar0;

	fVar0 = 0f;
	return fVar0;
}

float func_143(var uParam0)
{
	float fVar0;

	fVar0 = 3f;
	return fVar0;
}

int func_144(var uParam0, float fParam1, var uParam2, float fParam3, int iParam4)
{
	float fVar0;

	if (!func_20(uParam2))
	{
		func_21(uParam2);
	}
	fVar0 = func_22(uParam2);
	func_246(uParam0, fParam1, fVar0, fParam3, iParam4);
	if (fVar0 >= fParam3)
	{
		func_27(uParam2);
		return 1;
	}
	return 0;
}

float func_145(var uParam0)
{
	float fVar0;

	fVar0 = 1f;
	return fVar0;
}

int func_146(var uParam0, float fParam1, var uParam2, float fParam3, int iParam4)
{
	float fVar0;

	if (!func_20(uParam2))
	{
		func_21(uParam2);
	}
	fVar0 = func_22(uParam2);
	func_247(uParam0, fParam1, fVar0, fParam3, iParam4);
	if (fVar0 >= fParam3)
	{
		func_27(uParam2);
		return 1;
	}
	return 0;
}

float func_147(var uParam0)
{
	float fVar0;

	fVar0 = 0f;
	return fVar0;
}

float func_148(var uParam0)
{
	float fVar0;

	fVar0 = 3f;
	return fVar0;
}

int func_149(int iParam0, int iParam1, var uParam2, float fParam3, var uParam4, float fParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;

	iVar0 = iParam0;
	iVar1 = iParam1;
	if (iVar0 > iVar1)
	{
		return 1;
	}
	if (!func_20(uParam4))
	{
		func_21(uParam4);
	}
	fVar2 = func_22(uParam4);
	iVar3 = iVar0;
	while (iVar3 <= iVar1)
	{
		func_246((*uParam2)[iVar3 /*5*/], fParam3, fVar2, fParam5, iParam6);
		iVar3++;
	}
	if (fVar2 >= fParam5)
	{
		func_27(uParam4);
		return 1;
	}
	return 0;
}

float func_150(var uParam0)
{
	float fVar0;

	fVar0 = 1f;
	return fVar0;
}

int func_151(int iParam0, int iParam1, var uParam2, float fParam3, var uParam4, float fParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;

	iVar0 = iParam0;
	iVar1 = iParam1;
	if (iVar0 > iVar1)
	{
		return 1;
	}
	if (!func_20(uParam4))
	{
		func_21(uParam4);
	}
	fVar2 = func_22(uParam4);
	iVar3 = iVar0;
	while (iVar3 <= iVar1)
	{
		func_247((*uParam2)[iVar3 /*5*/], fParam3, fVar2, fParam5, iParam6);
		iVar3++;
	}
	if (fVar2 >= fParam5)
	{
		func_27(uParam4);
		return 1;
	}
	return 0;
}

float func_152(var uParam0)
{
	float fVar0;

	fVar0 = 0.3f;
	return fVar0;
}

float func_153(var uParam0)
{
	float fVar0;

	fVar0 = 5f;
	return fVar0;
}

float func_154(var uParam0)
{
	float fVar0;

	fVar0 = 1f;
	return fVar0;
}

void func_155(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_156(var uParam0)
{
	func_2(&(uParam0->f_13), 512);
	func_2(&(uParam0->f_13), 2048);
}

void func_157(var uParam0)
{
	func_2(&(uParam0->f_13), 1024);
	func_2(&(uParam0->f_13), 4096);
}

int func_158(var uParam0)
{
	return &(uParam0->f_1018.f_1[uParam0->f_1029]);
}

char* func_159(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 8:
			switch (iParam1)
			{
				case 2:
					return "script@shows@band_play@shw_bgb2@intro";
				case 3:
					return "script@shows@band_play@shw_bgb2@outro";
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 2:
					return "script@shows@band_play@shw_bgb1@intro";
				case 3:
					return "script@shows@band_play@shw_bgb1@outro";
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 2:
					return "script@shows@bulletcatcher@shw_bulc@intro";
				case 3:
					return "script@shows@bulletcatcher@shw_bulc@outro";
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 2:
					return "script@shows@cancan_dance@p1_intro";
				case 3:
					return "script@shows@cancan_dance@p1_outro";
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 2:
					return "script@shows@cancan_dance@p2_intro";
				case 3:
					return "script@shows@cancan_dance@p2_outro";
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 2:
					return "script@shows@escape_artist@shw_esca@intro";
				case 3:
					return "script@shows@escape_artist@shw_esca@outro";
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 2:
					return "script@shows@escape_noose@shw_escn@intro";
				case 3:
					return "script@shows@escape_noose@shw_escn@outro";
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 2:
					return "script@shows@fire_breather@shw_firb@intro";
				case 3:
					return "script@shows@fire_breather@shw_firb@outro";
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 2:
					return "script@shows@fire_performer@shw_frd1@intro";
				case 3:
					return "script@shows@fire_performer@shw_frd1@outro";
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 2:
					return "script@shows@fire_dancer@shw_frd2@intro";
				case 3:
					return "script@shows@fire_dancer@shw_frd2@outro";
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 2:
					return "script@shows@flex_fight@shw_flxf@intro";
				case 3:
					return "script@shows@flex_fight@shw_flxf@outro";
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 2:
					return "script@shows@snake_dancer@act1_p1@shw_snd1@intro";
				case 3:
					return "script@shows@snake_dancer@act1_p1@shw_snd1@outro";
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 2:
					return "script@shows@snake_dancer@act2_p1@shw_snd2@intro";
				case 3:
					return "script@shows@snake_dancer@act2_p1@shw_snd2@outro";
			}
			break;
		case 18:
			switch (iParam1)
			{
				case 2:
					return "script@shows@feats_of_strength@shw_strw@intro";
				case 3:
					return "script@shows@feats_of_strength@shw_strw@outro";
			}
			break;
		case 19:
			switch (iParam1)
			{
				case 2:
					return "script@shows@sword_dancer@shw_swrd@intro";
				case 3:
					return "script@shows@sword_dancer@shw_swrd@outro";
			}
			break;
		case 20:
			switch (iParam1)
			{
				case 2:
					return "script@shows@odd_fellows@shw_oddf_int@intro";
				case 3:
					return "script@shows@odd_fellows@shw_oddf_out@outro";
			}
			break;
	}
	return "";
}

char* func_160(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return "PL_INTRO";
		case 7:
			return "PL_INTRO";
		case 9:
			return "PL_INTRO";
		case 5:
			return "PL_INTRO";
		case 6:
			return "PL_INTRO";
		case 10:
			return "PL_INTRO";
		case 11:
			return "PL_INTRO";
		case 12:
			return "PL_INTRO";
		case 13:
			return "PL_INTRO";
		case 14:
			return "PL_INTRO";
		case 15:
			return "PL_INTRO";
		case 16:
			return "PL_INTRO";
		case 17:
			return "PL_INTRO";
		case 18:
			return "PL_INTRO";
		case 19:
			return "PL_INTRO";
		case 20:
			return "PL_INTRO";
	}
	return "";
}

int func_161(var uParam0, var uParam1, char* sParam2, char* sParam3, bool bParam4)
{
	if (ANIMSCENE::_0x25557E324489393C(*uParam0) && ANIMSCENE::_0x477122B8D05E7968(*uParam0, 1, 0))
	{
		func_2(uParam1, 1);
		return 1;
	}
	if (!func_5(*uParam1, 1) && !ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		if (bParam4)
		{
			*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam2, 0, sParam3, false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
		func_4(uParam1, 1);
	}
	return 0;
}

char* func_162(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 8:
			if (bParam1)
			{
				return "PL_OUTRO_POS";
			}
			else
			{
				return "PL_OUTRO_NEG";
			}
			break;
		case 7:
			if (bParam1)
			{
				return "PL_OUTRO_POS";
			}
			else
			{
				return "PL_OUTRO_NEG";
			}
			break;
		case 9:
			if (bParam1)
			{
				return "PL_OUTRO_POS";
			}
			else
			{
				return "PL_OUTRO_NEG";
			}
			break;
		case 5:
			if (bParam1)
			{
				return "PL_OUTRO_POS";
			}
			else
			{
				return "PL_OUTRO_NEG";
			}
			break;
		case 6:
			if (bParam1)
			{
				return "PL_OUTRO_POS";
			}
			else
			{
				return "PL_OUTRO_NEG";
			}
			break;
		case 10:
			if (bParam1)
			{
				return "PL_OUTRO_POS";
			}
			else
			{
				return "PL_OUTRO_NEG";
			}
			break;
		case 11:
			if (bParam1)
			{
				return "PL_OUTRO_POS";
			}
			else
			{
				return "PL_OUTRO_NEG";
			}
			break;
		case 12:
			if (bParam1)
			{
				return "PL_OUTRO_POS";
			}
			else
			{
				return "PL_OUTRO_NEG";
			}
			break;
		case 13:
			if (bParam1)
			{
				return "PL_OUTRO_POS";
			}
			else
			{
				return "PL_OUTRO_NEG";
			}
			break;
		case 14:
			if (bParam1)
			{
				return "PL_OUTRO_POS";
			}
			else
			{
				return "PL_OUTRO_NEG";
			}
			break;
		case 15:
			if (bParam1)
			{
				return "PL_INTRO";
			}
			else
			{
				return "PL_INTRO";
			}
			break;
		case 16:
			if (bParam1)
			{
				return "PL_OUTRO_POS";
			}
			else
			{
				return "PL_OUTRO_NEG";
			}
			break;
		case 17:
			if (bParam1)
			{
				return "PL_OUTRO_POS";
			}
			else
			{
				return "PL_OUTRO_NEG";
			}
			break;
		case 18:
			if (bParam1)
			{
				return "PL_OUTRO_POS";
			}
			else
			{
				return "PL_OUTRO_NEG";
			}
			break;
		case 19:
			if (bParam1)
			{
				return "PL_OUTRO_POS";
			}
			else
			{
				return "PL_OUTRO_NEG";
			}
			break;
		case 20:
			if (bParam1)
			{
				return "PL_OUTRO_POS";
			}
			else
			{
				return "PL_OUTRO_NEG";
			}
			break;
	}
	return "";
}

int func_163(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_248(((*Global_1835011)[iParam0 /*74*/])->f_1);
}

void func_164(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1[iParam2] = iParam1;
}

int func_165(int iParam0, bool bParam1, int iParam2)
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
		if (func_249())
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
		iVar0 = func_250(&(Global_1898164->f_1[0 /*5*/]));
		if (func_76(iVar0) && func_251(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_252(&(Global_1898164->f_1[0 /*5*/])))
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

void func_166(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_167(var uParam0, int iParam1, char* sParam2)
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

int func_168(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("cs_cabaretmc");
		case 1:
			return -262339715;
		default:
			break;
	}
	return 0;
}

char* func_169()
{
	return "script@shows@curtains@curtains";
}

char* func_170(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PBL_IDLE_CLOSED";
		case 1:
			return "PBL_OPEN_SLOW";
		case 2:
			return "PBL_CLOSE_SLOW";
		case 3:
			return "PBL_IDLE_OPEN";
		default:
			break;
	}
	return "FAIL";
}

char* func_171(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PBL_IDLE_CLOSED";
		case 1:
			return "PBL_OPEN_SLOW";
		case 2:
			return "PBL_CLOSE_SLOW";
		case 3:
			return "PBL_IDLE_OPEN";
		case 4:
			return "pl_OPEN_SLOW_HALF";
		default:
			break;
	}
	return "FAIL";
}

int func_172(int iParam0, char* sParam1, char[4] cParam2)
{
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, sParam1) || !ANIMSCENE::_0x0DF57F86FE71DBE5(iParam0, sParam1))
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0, sParam1);
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, sParam1))
	{
		return 0;
	}
	return 1;
}

char* func_173()
{
	return "SHRCTAU";
}

char* func_174(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return "script@shows@set_1@intro";
				case 1:
					return "script@shows@set_1@outro";
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return "script@shows@set_2@intro";
				case 1:
					return "script@shows@set_2@outro";
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return "script@shows@set_3@intro";
				case 1:
					return "script@shows@set_3@outro";
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return "script@shows@set_4@intro";
				case 1:
					return "script@shows@set_4@outro";
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return "script@shows@set_5@intro";
				case 1:
					return "script@shows@set_5@outro";
			}
			break;
	}
	return "";
}

char* func_175(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PL_INTRO";
		case 1:
			return "PL_INTRO";
		case 2:
			return "PL_INTRO";
		case 3:
			return "PL_INTRO";
		case 4:
			return "PL_INTRO";
	}
	return "";
}

Vector3 func_176(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2546.522f, -1306.835f, 48.2666f;
		case 1:
			return 2538.551f, -1313.008f, 48.21665f;
		case 2:
			return 2546.186f, -1309.756f, 48.21665f;
		case 3:
			return 2546.202f, -1295.387f, 48.2419f;
		case 4:
			return 2538.551f, -1313.008f, 48.21665f;
		case 5:
			return 2546.278f, -1301.387f, 49.2503f;
		case 6:
			return 1.2492f, 0f, -179.3095f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_177(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0f;
		case 1:
			return -88.38f;
		case 2:
			return 355.6767f;
		case 3:
			return 0f;
		case 4:
			return -88.38f;
		case 5:
			return 0f;
		case 6:
			return 0f;
		default:
			break;
	}
	return 0f;
}

int func_178(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_253(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

int func_179(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 6:
		case 7:
		case 8:
			return 1;
		case 4:
			switch (iParam1)
			{
				case 11:
				case 13:
				case 19:
					return 0;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 6:
				case 8:
				case 10:
				case 14:
				case 15:
				case 17:
					return 0;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 7:
				case 8:
				case 9:
				case 11:
				case 12:
				case 13:
				case 14:
				case 16:
				case 18:
				case 19:
					return 0;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 10:
				case 11:
				case 13:
				case 14:
				case 15:
				case 16:
				case 17:
				case 18:
				case 19:
					return 0;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 10:
				case 11:
				case 13:
				case 14:
				case 15:
				case 16:
				case 17:
				case 18:
				case 19:
					return 0;
			}
			break;
	}
	return 1;
}

char* func_180(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script_shows@show_audience@ig1_reaction_loops@t03_enthralled_waiting";
		case 1:
			return "script_shows@show_audience@ig2_reaction_oneshot";
		case 2:
			return "script_shows@show_audience@ig1_reaction_loops@t02_regular_rowdy";
		case 3:
			return "script_shows@show_audience@ig1_reaction_loops@t04_musical";
		case 4:
			return "script_shows@show_audience@ig1_reaction_loops@t05_dancing";
		case 5:
			return "script_shows@show_audience@ig1_reaction_loops@t06_comedic_displeased";
		case 6:
			return "script_shows@show_audience@ig1_reaction_loops@t07_suspense_applause";
		case 7:
			return "script_shows@show_audience@ig1_reaction_loops@t08_applause_horrified";
		case 8:
			return "script_shows@show_audience@ig1_reaction_loops@t09_blocked";
		case 9:
			return "script_shows@escapeartist@escapeartist_react";
		case 10:
			return "script_shows@show_audience@ig5_hatfire_react@t01_hatfire_right";
		case 11:
			return "script_shows@show_audience@ig5_hatfire_react@t05_hatfire_front";
		default:
			break;
	}
	return "script_shows@show_audience@ig1_reaction_loops@t03_enthralled_waiting";
}

char* func_181(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			return func_254(iParam1);
		case 0:
			return func_255(iParam1);
	}
	return "FAIL -- SHOW_CROWD_GET_ANIM_SCENE_VERSION";
}

int func_182(var uParam0, char* sParam1, char* sParam2)
{
	if (ANIMSCENE::_0x25557E324489393C(*uParam0) && ANIMSCENE::_0x477122B8D05E7968(*uParam0, 1, 0))
	{
		uParam0->f_1 = 1;
		return 1;
	}
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam1, 0, sParam2, false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
	}
	return 0;
}

int func_183(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 56;
		case 1:
		case 2:
			return 22;
		case 3:
			return 10;
		case 4:
			return 23;
	}
	return 0;
}

int func_184(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -7009108;
		case 1:
			return -7009108;
		case 3:
			return 99634802;
		case 4:
			return 10098011;
	}
	return -7009108;
}

int func_185(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
					return 2;
				case 8:
				case 9:
				case 10:
				case 11:
				case 12:
					return 2;
				case 17:
					return 1;
				case 18:
					return 1;
				case 20:
					return 2;
				case 31:
					return 2;
				case 32:
					return 2;
				case 39:
					return 2;
				case 53:
				case 54:
				case 55:
					return 2;
				default:
					break;
			}
			break;
		case 3:
			break;
	}
	return 0;
}

Vector3 func_186(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2541.954f, -1303.652f, 47.51162f;
				case 1:
					return 2542.625f, -1303.628f, 47.50835f;
				case 2:
					return 2543.253f, -1303.504f, 47.51194f;
				case 3:
					return 2543.914f, -1303.447f, 47.50978f;
				case 4:
					return 2544.554f, -1303.35f, 47.51124f;
				case 5:
					return 2545.212f, -1303.286f, 47.48675f;
				case 6:
					return 2540.851f, -1302.391f, 47.83032f;
				case 7:
					return 2541.405f, -1302.162f, 47.83151f;
				case 8:
					return 2542.039f, -1301.995f, 47.83165f;
				case 9:
					return 2542.659f, -1301.895f, 47.83114f;
				case 10:
					return 2543.281f, -1301.785f, 47.83141f;
				case 11:
					return 2543.887f, -1301.719f, 47.8308f;
				case 12:
					return 2544.536f, -1301.635f, 47.831f;
				case 13:
					return 2545.165f, -1301.591f, 47.81311f;
				case 14:
					return 2540.816f, -1300.638f, 48.12306f;
				case 15:
					return 2541.43f, -1300.473f, 48.12244f;
				case 16:
					return 2542.034f, -1300.312f, 48.12096f;
				case 17:
					return 2542.644f, -1300.153f, 48.12228f;
				case 18:
					return 2543.269f, -1300.039f, 48.12248f;
				case 19:
					return 2543.896f, -1299.926f, 48.12423f;
				case 20:
					return 2545.169f, -1299.818f, 48.10023f;
				case 21:
					return 2540.844f, -1298.88f, 48.39516f;
				case 22:
					return 2541.442f, -1298.742f, 48.39409f;
				case 23:
					return 2542.07f, -1298.587f, 48.39284f;
				case 24:
					return 2543.302f, -1298.275f, 48.39411f;
				case 25:
					return 2543.898f, -1298.179f, 48.39465f;
				case 26:
					return 2544.536f, -1298.092f, 48.39633f;
				case 27:
					return 2550.958f, -1303.615f, 47.48922f;
				case 28:
					return 2550.302f, -1303.543f, 47.48922f;
				case 29:
					return 2549.651f, -1303.483f, 47.48394f;
				case 30:
					return 2549.005f, -1303.43f, 47.48394f;
				case 31:
					return 2548.356f, -1303.367f, 47.48394f;
				case 32:
					return 2547.713f, -1303.341f, 47.48394f;
				case 33:
					return 2552.097f, -1302.355f, 47.80622f;
				case 34:
					return 2551.509f, -1302.193f, 47.80622f;
				case 35:
					return 2550.899f, -1302.034f, 47.80622f;
				case 36:
					return 2550.298f, -1301.884f, 47.80622f;
				case 37:
					return 2549.661f, -1301.76f, 47.80622f;
				case 38:
					return 2549.037f, -1301.683f, 47.80622f;
				case 39:
					return 2548.413f, -1301.624f, 47.80622f;
				case 40:
					return 2552.122f, -1300.556f, 48.09521f;
				case 41:
					return 2551.499f, -1300.414f, 48.09521f;
				case 42:
					return 2550.871f, -1300.243f, 48.09521f;
				case 43:
					return 2550.255f, -1300.129f, 48.09521f;
				case 44:
					return 2549.635f, -1300.029f, 48.09521f;
				case 45:
					return 2549.016f, -1299.949f, 48.09521f;
				case 46:
					return 2552.115f, -1298.813f, 48.36841f;
				case 47:
					return 2551.499f, -1298.658f, 48.36841f;
				case 48:
					return 2550.254f, -1298.388f, 48.36841f;
				case 49:
					return 2549.629f, -1298.312f, 48.36841f;
				case 50:
					return 2549.001f, -1298.207f, 48.36841f;
				case 51:
					return 2548.368f, -1298.123f, 48.36841f;
				case 52:
					return 2547.733f, -1298.041f, 48.36841f;
				case 53:
					return 2553.102f, -1299.667f, 49.214f;
				case 54:
					return 2553.129f, -1302.399f, 49.214f;
				case 55:
					return 2539.789f, -1302.37f, 49.214f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -349.1009f, 693.7693f, 116.8875f;
				case 1:
					return -348.4168f, 693.9259f, 116.8925f;
				case 2:
					return -345.9169f, 694.5858f, 116.8741f;
				case 3:
					return -344.2555f, 695.0604f, 116.876f;
				case 4:
					return -349.5025f, 695.6313f, 117.0018f;
				case 5:
					return -345.2958f, 696.7811f, 117.0189f;
				case 6:
					return -350.5786f, 697.272f, 117.1134f;
				case 7:
					return -346.918f, 698.2223f, 117.1139f;
				case 8:
					return -345.2069f, 698.744f, 117.1184f;
				case 9:
					return -350.4303f, 699.0625f, 117.1308f;
				default:
					break;
			}
			break;
		case 1:
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2701.17f, -1354.493f, 47.77215f;
				case 1:
					return 2700.708f, -1354.073f, 47.77014f;
				case 2:
					return 2700.242f, -1353.635f, 47.76572f;
				case 3:
					return 2699.766f, -1353.23f, 47.74422f;
				case 4:
					return 2697.559f, -1350.386f, 47.76871f;
				case 5:
					return 2697.222f, -1349.843f, 47.76798f;
				case 6:
					return 2696.885f, -1349.309f, 47.76988f;
				case 7:
					return 2699.731f, -1355.699f, 47.94025f;
				case 8:
					return 2699.25f, -1355.287f, 47.93497f;
				case 9:
					return 2698.764f, -1354.877f, 47.93819f;
				case 10:
					return 2695.774f, -1351.042f, 47.93525f;
				case 11:
					return 2695.439f, -1350.499f, 47.93626f;
				case 12:
					return 2698.316f, -1356.914f, 48.10247f;
				case 13:
					return 2697.834f, -1356.48f, 48.09552f;
				case 14:
					return 2694.688f, -1352.778f, 48.10484f;
				case 15:
					return 2694.39f, -1352.196f, 48.09603f;
				case 16:
					return 2694.055f, -1351.671f, 48.0974f;
				case 17:
					return 2696.514f, -1357.575f, 48.25399f;
				case 18:
					return 2696.022f, -1357.168f, 48.25772f;
				case 19:
					return 2695.554f, -1356.731f, 48.23498f;
				case 20:
					return 2693.692f, -1354.44f, 48.26648f;
				case 21:
					return 2693.319f, -1353.92f, 48.26515f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return -776.0957f, -1365.928f, 43.26698f;
				case 1:
					return -776.1156f, -1365.257f, 43.26892f;
				case 2:
					return -776.1213f, -1364.023f, 43.26947f;
				case 3:
					return -776.0749f, -1361.318f, 43.29291f;
				case 4:
					return -776.0781f, -1360.655f, 43.26656f;
				case 5:
					return -776.107f, -1359.996f, 43.26938f;
				case 6:
					return -777.7452f, -1365.929f, 43.43242f;
				case 7:
					return -778.02f, -1365.272f, 43.45926f;
				case 8:
					return -777.9575f, -1361.315f, 43.4812f;
				case 9:
					return -777.9938f, -1360.662f, 43.45993f;
				case 10:
					return -777.9775f, -1360f, 43.45834f;
				case 11:
					return -779.8451f, -1365.909f, 43.6443f;
				case 12:
					return -779.8615f, -1365.263f, 43.64589f;
				case 13:
					return -779.8595f, -1364.639f, 43.64569f;
				case 14:
					return -779.835f, -1361.3f, 43.67118f;
				case 15:
					return -779.8181f, -1360.642f, 43.64128f;
				case 16:
					return -781.7369f, -1365.253f, 43.83224f;
				case 17:
					return -781.7541f, -1364.628f, 43.83392f;
				case 18:
					return -781.7646f, -1364f, 43.83494f;
				case 19:
					return -781.7217f, -1360.638f, 43.83135f;
				case 20:
					return -781.7209f, -1359.973f, 43.83129f;
				case 21:
					return -781.7397f, -1359.346f, 43.83311f;
				case 22:
					return -781.7122f, -1358.722f, 43.83042f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_187(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 189.76f;
				case 1:
					return 194.54f;
				case 2:
					return 185.02f;
				case 3:
					return 185.67f;
				case 4:
					return 186.48f;
				case 5:
					return 189.64f;
				case 6:
					return 194.87f;
				case 7:
					return 197.45f;
				case 8:
					return 192.94f;
				case 9:
					return 190.4f;
				case 10:
					return 187.74f;
				case 11:
					return 188.21f;
				case 12:
					return 191.46f;
				case 13:
					return 187.8f;
				case 14:
					return 197.77f;
				case 15:
					return 197.28f;
				case 16:
					return 195.7f;
				case 17:
					return 194.38f;
				case 18:
					return 189.91f;
				case 19:
					return 187.19f;
				case 20:
					return 183.35f;
				case 21:
					return 195.68f;
				case 22:
					return 195.08f;
				case 23:
					return 197.6f;
				case 24:
					return 192.22f;
				case 25:
					return 187.31f;
				case 26:
					return 186.63f;
				case 27:
					return 174.21f;
				case 28:
					return 175.4f;
				case 29:
					return 177.33f;
				case 30:
					return 177.62f;
				case 31:
					return 175.4f;
				case 32:
					return 176.59f;
				case 33:
					return 165.32f;
				case 34:
					return 170.16f;
				case 35:
					return 170.37f;
				case 36:
					return 174.13f;
				case 37:
					return 175.59f;
				case 38:
					return 173.64f;
				case 39:
					return 178.62f;
				case 40:
					return 169.96f;
				case 41:
					return 171.41f;
				case 42:
					return 170.19f;
				case 43:
					return 171.15f;
				case 44:
					return 174.93f;
				case 45:
					return 177.61f;
				case 46:
					return 169.6f;
				case 47:
					return 171.53f;
				case 48:
					return 172.77f;
				case 49:
					return 174.2f;
				case 50:
					return 175.33f;
				case 51:
					return 175.1f;
				case 52:
					return 176.09f;
				case 53:
					return 152.8307f;
				case 54:
					return 152.8307f;
				case 55:
					return 190.6648f;
				default:
					break;
			}
			Jump @1597; //curOff = 1113
			switch (iParam1)
			{
				case 0:
					return -164f;
				case 1:
					return -164f;
				case 2:
					return -164f;
				case 3:
					return -164f;
				case 4:
					return -164f;
				case 5:
					return -164f;
				case 6:
					return -164f;
				case 7:
					return -164f;
				case 8:
					return -164f;
				case 9:
					return -164f;
				default:
					break;
			}
			Jump @1597; //curOff = 1264
			switch (iParam1)
			{
				case 0:
					return -37.72f;
				case 1:
					return -39.69f;
				case 2:
					return -39.97f;
				case 3:
					return -39.02f;
				case 4:
					return -52.61f;
				case 5:
					return -55.28f;
				case 6:
					return -56.79f;
				case 7:
					return -39.3f;
				case 8:
					return -38.34f;
				case 9:
					return -39.92f;
				case 10:
					return -57.96f;
				case 11:
					return -56.65f;
				case 12:
					return -38.24f;
				case 13:
					return -39.76f;
				case 14:
					return -56.13f;
				case 15:
					return -58.55f;
				case 16:
					return -54.07f;
				case 17:
					return -40.84f;
				case 18:
					return -40.21f;
				case 19:
					return -44.17f;
				case 20:
					return -52.32f;
				case 21:
					return -54.76f;
				default:
					break;
			}
			Jump @1597; //curOff = 1583
			return -88.69f;
			return -175.57f;
		}

int func_188(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
					return 1;
				case 8:
				case 9:
				case 10:
				case 11:
				case 12:
					return 1;
				case 17:
					return 2;
				case 18:
					return 2;
				case 20:
				case 31:
					return 1;
				case 32:
					return 1;
				case 39:
					return 1;
				case 53:
				case 54:
				case 55:
					return 1;
				default:
					break;
			}
			break;
		case 3:
			break;
	}
	return 0;
}

int func_189(var uParam0, int iParam1)
{
	int iVar0;
	struct<11> Var1;

	if (func_228(iParam1) != -1)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= func_228(iParam1))
		{
			if (!VOLUME::_0x92A78D0BEDB332A3(&(uParam0->f_22[iVar0])))
			{
				Var1 = { func_256(iParam1, iVar0) };
				uParam0->f_22[iVar0] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var1.f_9, Var1, Var1.f_3, Var1.f_6, Var1.f_10);
			}
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= func_228(iParam1))
		{
			if (VOLUME::_0x92A78D0BEDB332A3(&(uParam0->f_22[iVar0])))
			{
				PED::_0x4C39C95AE5DB1329(&(uParam0->f_22[iVar0]), 0, 2);
			}
			iVar0++;
		}
		return 1;
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_190(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
				case 2:
				case 3:
				case 4:
				case 5:
					return 1;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
				case 1:
				case 10:
				case 11:
				case 12:
					return 1;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 3:
				case 4:
				case 8:
				case 9:
				case 10:
					return 1;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 9:
				case 10:
				case 11:
					return 1;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 9:
				case 10:
				case 11:
				case 17:
				case 18:
				case 20:
					return 1;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 17:
				case 18:
				case 20:
					return 1;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 9:
				case 10:
				case 11:
				case 17:
				case 18:
				case 20:
					return 1;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 9:
				case 10:
				case 11:
				case 17:
				case 18:
				case 20:
					return 1;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 9:
				case 10:
				case 11:
				case 17:
				case 18:
				case 20:
					return 1;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 9:
				case 10:
				case 11:
				case 17:
				case 18:
				case 20:
					return 1;
				default:
					break;
			}
			break;
	}
	return 0;
}

char* func_191(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam2)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							return "Male2";
						case 2:
							return "Male5";
						case 3:
							return "Male1";
						case 4:
							return "Male3";
						case 5:
							return "Male0";
						default:
							break;
					}
					break;
				case 1:
					switch (iParam1)
					{
						case 0:
							return "Male2";
						case 1:
							return "Male5";
						case 10:
							return "Male1";
						case 11:
							return "Male3";
						case 12:
							return "Male0";
						default:
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 3:
							return "Male2";
						case 4:
							return "Male5";
						case 8:
							return "Male3";
						case 9:
							return "Male0";
						case 10:
							return "Male1";
						default:
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 9:
							return "Female1";
						case 10:
							return "Male1";
						case 11:
							return "Male2";
						default:
							break;
					}
					break;
				case 4:
					switch (iParam1)
					{
						case 9:
							return "Female1";
						case 10:
							return "Male1";
						case 11:
							return "Male2";
						case 17:
							return "Male3";
						case 18:
							return "Female";
						case 20:
							return "Male0";
						default:
							break;
					}
					break;
				case 5:
					switch (iParam1)
					{
						case 17:
							return "Female1";
						case 18:
							return "Female";
						case 20:
							return "Male0";
						default:
							break;
					}
					break;
				case 6:
					switch (iParam1)
					{
						case 9:
							return "Male2";
						case 10:
							return "Male3";
						case 11:
							return "Male1";
						case 17:
							return "Female1";
						case 18:
							return "Female";
						case 20:
							return "Male0";
						default:
							break;
					}
					break;
				case 7:
					switch (iParam1)
					{
						case 9:
							return "Male1";
						case 10:
							return "Male2";
						case 11:
							return "Male3";
						case 17:
							return "Female1";
						case 18:
							return "Female";
						case 20:
							return "Male0";
						default:
							break;
					}
					break;
				case 8:
					switch (iParam1)
					{
						case 9:
							return "Male1";
						case 10:
							return "Male2";
						case 11:
							return "Male3";
						case 17:
							return "Female1";
						case 18:
							return "Female";
						case 20:
							return "Male0";
						default:
							break;
					}
					break;
				case 9:
					switch (iParam1)
					{
						case 9:
							return "Male0";
						case 10:
							return "Male2";
						case 11:
							return "Male1";
						case 17:
							return "Female1";
						case 18:
							return "Female";
						case 20:
							return "Male3";
						default:
							break;
					}
					break;
			}
			break;
		case 0:
			switch (iParam2)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							return "Male2";
						case 2:
							return "Male5";
						case 3:
							return "Male1";
						case 4:
							return "Male3";
						case 5:
							return "Male0";
						default:
							break;
					}
					break;
				case 1:
					switch (iParam1)
					{
						case 0:
							return "Male2";
						case 1:
							return "Male5";
						case 10:
							return "Male1";
						case 11:
							return "Male3";
						case 12:
							return "Male0";
						default:
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 3:
							return "Male2";
						case 4:
							return "Male5";
						case 8:
							return "Male3";
						case 9:
							return "Male0";
						case 10:
							return "Male1";
						default:
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 9:
							return "Female1";
						case 10:
							return "Male1";
						case 11:
							return "Male2";
						default:
							break;
					}
					break;
				case 4:
					switch (iParam1)
					{
						case 9:
							return "Female1";
						case 10:
							return "Male1";
						case 11:
							return "Male2";
						case 17:
							return "Male3";
						case 18:
							return "Female";
						case 20:
							return "Male0";
						default:
							break;
					}
					break;
				case 5:
					switch (iParam1)
					{
						case 17:
							return "Female1";
						case 18:
							return "Female";
						case 20:
							return "Male0";
						default:
							break;
					}
					break;
				case 6:
					switch (iParam1)
					{
						case 9:
							return "Male2";
						case 10:
							return "Male3";
						case 11:
							return "Male1";
						case 17:
							return "Female1";
						case 18:
							return "Female";
						case 20:
							return "Male0";
						default:
							break;
					}
					break;
				case 7:
					switch (iParam1)
					{
						case 9:
							return "Male1";
						case 10:
							return "Male2";
						case 11:
							return "Male3";
						case 17:
							return "Female1";
						case 18:
							return "Female";
						case 20:
							return "Male0";
						default:
							break;
					}
					break;
				case 8:
					switch (iParam1)
					{
						case 9:
							return "Male1";
						case 10:
							return "Male2";
						case 11:
							return "Male3";
						case 17:
							return "Female1";
						case 18:
							return "Female";
						case 20:
							return "Male0";
						default:
							break;
					}
					break;
				case 9:
					switch (iParam1)
					{
						case 9:
							return "Male0";
						case 10:
							return "Male2";
						case 11:
							return "Male1";
						case 17:
							return "Female1";
						case 18:
							return "Female";
						case 20:
							return "Male3";
						default:
							break;
					}
					break;
			}
			break;
	}
	return "FAIL -- SHOW_CROWD_GET_ANIM_SCENE_HANDLE";
}

int func_192(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 3:
			return 1;
		case 1:
		case 2:
			return 1;
		case 4:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_193(var uParam0, int iParam1)
{
	if (!PED::IS_PED_USING_ANY_SCENARIO(*uParam0))
	{
		TASK::TASK_START_SCENARIO_AT_POSITION(*uParam0, -1426662425, func_186(iParam1, uParam0->f_2), func_187(iParam1, uParam0->f_2), -1, 0, 1, 0, 0.25f, 0);
	}
}

void func_194(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	vector3 vVar5;
	int iVar8;

	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		iVar0 = 2;
		if (PED::IS_PED_MALE(*uParam0))
		{
			iVar0 = 1;
		}
		vVar1 = { func_186(iParam1, uParam0->f_2) };
		fVar4 = func_187(iParam1, uParam0->f_2);
		vVar5 = { 0f, 0f, fVar4 };
		iVar8 = func_257(iParam1, uParam0->f_2);
		uParam0->f_5 = 1;
		uParam0->f_6 = -1;
		uParam0->f_7 = func_258(uParam0->f_5);
		uParam0->f_8 = func_259(uParam0->f_5, iVar0, iVar8);
		if (iVar8 == 0)
		{
			TASK::TASK_PLAY_ANIM_ADVANCED(*uParam0, uParam0->f_7, uParam0->f_8, vVar1, vVar5, 1000f, -1000f, -1, 49153, func_260(), 2, 1, 0);
		}
		else
		{
			TASK::TASK_PLAY_ANIM_ADVANCED(*uParam0, uParam0->f_7, uParam0->f_8, vVar1, vVar5, 1000f, -1000f, -1, 49153, func_260(), 2, 0, 0);
		}
	}
}

void func_195(int iParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "honor_block"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "honor_block");
		}
		iVar0 = (iVar0 || func_261(iParam1));
		DECORATOR::DECOR_SET_INT(iParam0, "honor_block", iVar0);
	}
}

char* func_196(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "shows_sd_vaudeville";
		case 1:
		case 2:
			return "shows_sd_magic";
		case 3:
			return "shows_val_magic";
		case 4:
			return "shows_bla_movie";
		default:
			break;
	}
	return "shows_sd_vaudeville";
}

void func_197(var uParam0, var uParam1, int iParam2)
{
	var uVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	bool bVar7;

	uVar0 = func_13(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1);
	iVar1 = func_183(iParam2);
	fVar2 = 0f;
	if (func_20(&(uParam0->f_8)))
	{
		fVar2 = func_22(&(uParam0->f_8));
	}
	iVar5 = 0;
	while (iVar5 <= (iVar1 - 1))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1[iVar5 /*10*/]) || ENTITY::IS_ENTITY_DEAD(uParam1[iVar5 /*10*/]))
		{
		}
		else
		{
			PED::SET_PED_RESET_FLAG(uParam1[iVar5 /*10*/], 153, true);
			if (Global_1394141->f_1334)
			{
				if (func_262(*uParam0, iVar5) && ((*uParam1)[iVar5 /*10*/])->f_1 != 5)
				{
					((*uParam1)[iVar5 /*10*/])->f_1 = 5;
				}
			}
			else if (func_262(*uParam0, iVar5) && ((*uParam1)[iVar5 /*10*/])->f_1 == 5)
			{
				func_263(&(uParam0->f_11), 0);
				((*uParam1)[iVar5 /*10*/])->f_1 = 3;
			}
			if (uParam0->f_19 && func_264(iParam2))
			{
				if (!func_20(&(uParam0->f_8)))
				{
					func_4(&(uParam0->f_18), 1);
					func_4(&(uParam0->f_18), 8);
					func_21(&(uParam0->f_8));
				}
				else if (((*uParam1)[iVar5 /*10*/])->f_1 < 7)
				{
					if (func_265(iParam2, iVar5) >= 0f && fVar2 > func_265(iParam2, iVar5))
					{
						((*uParam1)[iVar5 /*10*/])->f_1 = 7;
					}
				}
			}
			if ((!uParam0->f_19 && !func_262(*uParam0, iVar5)) && ((*uParam1)[iVar5 /*10*/])->f_1 != 5)
			{
				if (((*uParam1)[iVar5 /*10*/])->f_9)
				{
					fVar6 = func_89(Global_35, uParam1[iVar5 /*10*/], 1, 1);
					if (fVar6 > 2f || !func_266((*uParam1)[iVar5 /*10*/]))
					{
						((*uParam1)[iVar5 /*10*/])->f_9 = 0;
						uParam0->f_21 = 0;
						((*uParam1)[iVar5 /*10*/])->f_5 = 2;
						func_267((*uParam1)[iVar5 /*10*/], iParam2);
					}
				}
				else if (!uParam0->f_21 && ((*uParam1)[iVar5 /*10*/])->f_1 != 6)
				{
					fVar6 = func_89(Global_35, uParam1[iVar5 /*10*/], 1, 1);
					if (fVar6 < 1.5f && func_266((*uParam1)[iVar5 /*10*/]))
					{
						((*uParam1)[iVar5 /*10*/])->f_5 = func_268(iVar5);
						func_267((*uParam1)[iVar5 /*10*/], iParam2);
						((*uParam1)[iVar5 /*10*/])->f_9 = 1;
						uParam0->f_21 = 1;
					}
				}
			}
			switch (((*uParam1)[iVar5 /*10*/])->f_1)
			{
				case 0:
					break;
				case 1:
					if (func_269(iParam2, iVar5))
					{
						func_271((*uParam1)[iVar5 /*10*/], func_270(iParam2), 500);
					}
					break;
				case 3:
					func_272((*uParam1)[iVar5 /*10*/], iParam2);
					((*uParam1)[iVar5 /*10*/])->f_1 = 4;
					break;
				case 4:
					bVar7 = false;
					if (((*uParam1)[iVar5 /*10*/])->f_6 == -1)
					{
						func_267((*uParam1)[iVar5 /*10*/], iParam2);
						((*uParam1)[iVar5 /*10*/])->f_1 = 1;
						return;
					}
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam1[iVar5 /*10*/], ((*uParam1)[iVar5 /*10*/])->f_7, ((*uParam1)[iVar5 /*10*/])->f_8, 1))
					{
						if (ENTITY::_0x627520389E288A73(uParam1[iVar5 /*10*/], ((*uParam1)[iVar5 /*10*/])->f_7, ((*uParam1)[iVar5 /*10*/])->f_8) > 0.97f)
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						func_267((*uParam1)[iVar5 /*10*/], iParam2);
						((*uParam1)[iVar5 /*10*/])->f_1 = 1;
					}
					break;
				case 5:
					if (!uParam0->f_19)
					{
						func_273(uParam0, (*uParam1)[iVar5 /*10*/]);
					}
					break;
				case 6:
					if (ANIMSCENE::_0x25557E324489393C(&(uParam0->f_12[1 /*2*/])))
					{
						if (!ENTITY::IS_ENTITY_DEAD(uParam1[iVar5 /*10*/]))
						{
							PED::SET_PED_RESET_FLAG(uParam1[iVar5 /*10*/], 261, true);
						}
						if (ANIMSCENE::_0x005E6F28DD7ED58D(&(uParam0->f_12[1 /*2*/]), func_191(1, iVar5, uParam0->f_17)) || ANIMSCENE::_0xD8254CB2C586412B(&(uParam0->f_12[1 /*2*/]), 0))
						{
							func_194((*uParam1)[iVar5 /*10*/], iParam2);
							((*uParam1)[iVar5 /*10*/])->f_1 = 1;
						}
						if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uParam1[iVar5 /*10*/], &(uParam0->f_12[1 /*2*/])))
						{
							func_194((*uParam1)[iVar5 /*10*/], iParam2);
							((*uParam1)[iVar5 /*10*/])->f_1 = 1;
						}
					}
					break;
				case 2:
					TASK::TASK_START_SCENARIO_AT_POSITION(uParam1[iVar5 /*10*/], -1426662425, func_186(iParam2, iVar5), func_187(iParam2, iVar5), -1, 0, 1, 0, 0.25f, 0);
					((*uParam1)[iVar5 /*10*/])->f_1 = 1;
					break;
				case 7:
					if (!func_5(uParam0->f_18, 4))
					{
						return;
					}
					if (func_257(iParam2, iVar5) == 0 && !func_192(iParam2))
					{
						TASK::TASK_START_SCENARIO_AT_POSITION(uParam1[iVar5 /*10*/], -1426662425, func_186(iParam2, iVar5), func_187(iParam2, iVar5), -1, 0, 1, 0, 0.25f, 0);
						PED::_0x2208438012482A1A(uParam1[iVar5 /*10*/], false, false);
						((*uParam1)[iVar5 /*10*/])->f_1 = 8;
					}
					else
					{
						((*uParam1)[iVar5 /*10*/])->f_1 = 9;
					}
					break;
				case 8:
					if (ENTITY::DOES_ENTITY_EXIST(uParam1[iVar5 /*10*/]) && !ENTITY::IS_ENTITY_DEAD(uParam1[iVar5 /*10*/]))
					{
						if (TASK::IS_PED_ACTIVE_IN_SCENARIO(uParam1[iVar5 /*10*/], 0))
						{
							PED::_0x463803429297117C(uParam1[iVar5 /*10*/], 2546.344f, -1307.994f, 48.42698f, 0, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam1[iVar5 /*10*/], true);
							((*uParam1)[iVar5 /*10*/])->f_1 = 9;
						}
						else if (fVar2 > (func_265(iParam2, iVar5) + 2f))
						{
							((*uParam1)[iVar5 /*10*/])->f_1 = 9;
						}
					}
					break;
				case 9:
					if (func_229(iParam2))
					{
						if (func_5(uParam0->f_18, 16))
						{
							TASK::TASK_FOLLOW_WAYPOINT_RECORDING(uParam1[iVar5 /*10*/], func_196(iParam2), 0, 10, -1, 0, 0, -1);
							((*uParam1)[iVar5 /*10*/])->f_1 = 10;
						}
					}
					else
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uParam1[iVar5 /*10*/], func_274(iParam2), 1f, -1, 0.25f, 5373953, 40000f);
						PED::_0x2208438012482A1A(uParam1[iVar5 /*10*/], false, false);
						((*uParam1)[iVar5 /*10*/])->f_1 = 10;
					}
					break;
				case 10:
					if ((uVar0 || PED::IS_PED_SHOOTING(Global_35)) || func_5(uParam0->f_18, 32))
					{
						func_4(&(uParam0->f_18), 32);
						((*uParam1)[iVar5 /*10*/])->f_1 = 12;
						return;
					}
					if (func_229(iParam2))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(uParam1[iVar5 /*10*/], 658540077, 1) == 1)
						{
							((*uParam1)[iVar5 /*10*/])->f_1 = 11;
						}
						else if (fVar2 > (func_265(iParam2, iVar5) + 3f))
						{
							((*uParam1)[iVar5 /*10*/])->f_1 = 9;
						}
					}
					else if (!func_73(ENTITY::GET_ENTITY_COORDS(uParam1[iVar5 /*10*/], true, false)))
					{
						PED::SET_PED_CONFIG_FLAG(uParam1[iVar5 /*10*/], 301, false);
						PED::SET_PED_CAN_BE_TARGETTED(uParam1[iVar5 /*10*/], true);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam1[iVar5 /*10*/], 623901053);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam1[iVar5 /*10*/], false);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED((*uParam1)[iVar5 /*10*/]);
						((*uParam1)[iVar5 /*10*/])->f_1 = 14;
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(uParam1[iVar5 /*10*/], 713668775, 1) != 1 && fVar2 > (func_265(iParam2, iVar5) + 3f))
					{
						((*uParam1)[iVar5 /*10*/])->f_1 = 9;
					}
					break;
				case 11:
					if ((uVar0 || PED::IS_PED_SHOOTING(Global_35)) || func_5(uParam0->f_18, 32))
					{
						func_4(&(uParam0->f_18), 32);
						((*uParam1)[iVar5 /*10*/])->f_1 = 12;
						return;
					}
					TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(func_196(iParam2), &iVar3);
					TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(func_196(iParam2), ENTITY::GET_ENTITY_COORDS(uParam1[iVar5 /*10*/], true, false), &iVar4);
					if (TASK::GET_SCRIPT_TASK_STATUS(uParam1[iVar5 /*10*/], 658540077, 1) != 1 || iVar4 >= (iVar3 - 2))
					{
						PED::SET_PED_CONFIG_FLAG(uParam1[iVar5 /*10*/], 301, false);
						PED::SET_PED_CAN_BE_TARGETTED(uParam1[iVar5 /*10*/], true);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam1[iVar5 /*10*/], 623901053);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam1[iVar5 /*10*/], false);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED((*uParam1)[iVar5 /*10*/]);
						((*uParam1)[iVar5 /*10*/])->f_1 = 14;
					}
					break;
				case 12:
					PED::SET_PED_CONFIG_FLAG(uParam1[iVar5 /*10*/], 301, false);
					PED::SET_PED_CAN_BE_TARGETTED(uParam1[iVar5 /*10*/], true);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam1[iVar5 /*10*/], 623901053);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam1[iVar5 /*10*/], false);
					TASK::_TASK_SMART_FLEE_STYLE_PED(uParam1[iVar5 /*10*/], Global_35, 3, 0, -1082130432, -1, 0);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED((*uParam1)[iVar5 /*10*/]);
					((*uParam1)[iVar5 /*10*/])->f_1 = 14;
					break;
				case 13:
					if (TASK::GET_SCRIPT_TASK_STATUS(uParam1[iVar5 /*10*/], 713668775, 1) != 1 && !TASK::IS_PED_ACTIVE_IN_SCENARIO(uParam1[iVar5 /*10*/], 0))
					{
						PED::DELETE_PED((*uParam1)[iVar5 /*10*/]);
						((*uParam1)[iVar5 /*10*/])->f_1 = 14;
					}
					else
					{
						((*uParam1)[iVar5 /*10*/])->f_1 = 8;
					}
					break;
				case 14:
					break;
			}
		}
		iVar5++;
	}
}

struct<21> func_198(int iParam0, int iParam1, int iParam2)
{
	struct<21> Var0;

	Var0 = 4;
	Var0.f_5 = 4;
	Var0.f_10 = 4;
	Var0.f_15 = 4;
	Var0[0] = -1;
	Var0[1] = -1;
	Var0[2] = -1;
	Var0[3] = -1;
	Var0.f_5[0] = 0;
	Var0.f_5[1] = 0;
	Var0.f_5[2] = 0;
	Var0.f_5[3] = 0;
	Var0.f_10[0] = -1;
	Var0.f_10[1] = -1;
	Var0.f_10[2] = -1;
	Var0.f_10[3] = -1;
	Var0.f_15[0] = 0;
	Var0.f_15[1] = 0;
	Var0.f_15[2] = 0;
	Var0.f_15[3] = 0;
	Var0.f_20 = "";
	if (iParam2 == 49)
	{
		Var0.f_10[0] = 35;
	}
	if (iParam2 == 48)
	{
		Var0.f_10[0] = 2;
		Var0.f_15[0] = 100;
	}
	switch (iParam0)
	{
		case 9:
			switch (iParam2)
			{
				case 1:
					Var0[0] = 16;
					Var0.f_5[0] = 100;
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_15[0] = 75;
					Var0.f_15[1] = 25;
					Var0.f_20 = "mc_set1_int_mc_appears";
					break;
				case 2:
					Var0[0] = 16;
					Var0.f_5[0] = 50;
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_15[0] = 90;
					Var0.f_15[1] = 10;
					Var0.f_20 = "mc_set1_int_name_applause";
					break;
				case 3:
					Var0.f_20 = "mc_set1_int_ticket_price_applause";
					break;
				case 4:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 80;
					Var0.f_15[1] = 20;
					break;
				case 5:
					Var0.f_10[0] = 0;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 80;
					Var0.f_20 = "mc_bulc_int_act_discovery";
					break;
				case 6:
					Var0[0] = 24;
					Var0.f_5[0] = 75;
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_15[0] = 75;
					Var0.f_15[1] = 25;
					break;
				case 7:
					Var0.f_10[0] = 11;
					Var0.f_15[0] = 100;
					Var0.f_20 = "mc_bulc_int_name_applause";
					break;
				case 8:
					Var0[0] = 21;
					Var0.f_5[0] = 30;
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 10;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 40;
					Var0.f_15[2] = 30;
					Var0.f_20 = "mc_outro_pos_finishes";
					break;
				case 9:
					Var0.f_10[0] = 10;
					Var0.f_15[0] = 100;
					break;
				case 10:
					Var0.f_10[0] = 6;
					Var0.f_10[1] = 10;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 40;
					Var0.f_20 = "mc_outro_neg_applause";
					break;
				case 11:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					Var0.f_20 = "mc_outro_neg_finishes";
					break;
				case 12:
					Var0.f_10[0] = 10;
					Var0.f_15[0] = 100;
					Var0.f_20 = "mc_outro_neg_finishes";
					break;
				case 13:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 3;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 10;
					Var0.f_20 = "bullet_catch_initial_banter";
					break;
				case 14:
					Var0.f_20 = "bullet_catch_horrible_disease";
					break;
				case 15:
					Var0[0] = 22;
					Var0.f_5[0] = 75;
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 3;
					Var0.f_15[0] = 80;
					Var0.f_15[1] = 20;
					Var0.f_20 = "bullet_catch_gun_reveal";
					break;
				case 16:
					Var0[0] = 20;
					Var0.f_5[0] = 40;
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 3;
					Var0.f_15[0] = 80;
					Var0.f_15[1] = 20;
					Var0.f_20 = "bullet_catch_bedding_my_wife";
					break;
				case 17:
					Var0[0] = 24;
					Var0.f_5[0] = 50;
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 8;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 10;
					Var0.f_15[2] = 40;
					Var0.f_20 = "bullet_catch_i_joke";
					break;
				case 18:
					Var0[0] = 23;
					Var0.f_5[0] = 50;
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_15[0] = 75;
					Var0.f_15[1] = 25;
					Var0.f_20 = "bullet_catch_in_my_teeth";
					break;
				case 19:
					break;
				case 20:
					Var0.f_10[0] = 9;
					Var0.f_15[0] = 100;
					break;
				case 21:
					Var0[0] = 19;
					Var0.f_5[0] = 100;
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
				case 22:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 80;
					Var0.f_15[1] = 20;
					Var0.f_20 = "bullet_catch_as_if_it_were_nothing";
					break;
				case 23:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_15[0] = 75;
					Var0.f_15[1] = 25;
					break;
				case 24:
					Var0.f_10[0] = 0;
					Var0.f_15[0] = 100;
					break;
				case 25:
					Var0[0] = 20;
					Var0.f_5[0] = 30;
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					Var0.f_20 = "bullet_catch_lets_do_that_again";
					break;
				case 26:
					Var0.f_10[0] = 11;
					Var0.f_15[0] = 100;
					break;
				case 27:
					Var0.f_10[0] = 0;
					Var0.f_10[1] = 3;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 28:
					Var0[0] = 19;
					Var0[1] = 24;
					Var0.f_5[0] = 60;
					Var0.f_5[1] = 40;
					Var0.f_10[0] = 6;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 40;
					break;
				case 29:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 3;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 30:
					Var0[0] = 16;
					Var0.f_5[0] = 100;
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 8;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					Var0.f_20 = "bullet_catch_player_volunteers";
					break;
				case 31:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 9;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					Var0.f_20 = "bullet_catch_take_aim";
					break;
				case 32:
					Var0.f_20 = "bullet_catch_waiting_for_shot";
					break;
				case 33:
					Var0[0] = 21;
					Var0.f_5[0] = 100;
					Var0.f_10[0] = 13;
					Var0.f_15[0] = 100;
					Var0.f_20 = "bullet_catch_g_alt_player_shot";
					break;
				case 34:
					Var0[0] = 17;
					Var0[1] = 23;
					Var0.f_5[0] = 50;
					Var0.f_5[1] = 50;
					Var0.f_10[0] = 12;
					Var0.f_15[0] = 100;
					Var0.f_20 = "bullet_catch_g_alt_player_shot_reveal";
					break;
				case 35:
					Var0[0] = 21;
					Var0.f_5[0] = 100;
					Var0.f_10[0] = 13;
					Var0.f_15[0] = 100;
					Var0.f_20 = "bullet_catch_g_alt_player_shot_stomach";
					break;
				case 36:
					Var0.f_10[0] = 13;
					Var0.f_10[1] = 6;
					Var0.f_10[2] = 3;
					Var0.f_10[3] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 40;
					Var0.f_15[2] = 10;
					Var0.f_15[3] = 20;
					Var0.f_20 = "bullet_catch_supposed_to_shoot_head";
					break;
				case 37:
					Var0.f_10[0] = 6;
					Var0.f_10[1] = 10;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 30;
					Var0.f_20 = "bullet_catch_absolute_pillock";
					break;
				case 38:
					Var0[0] = 16;
					Var0.f_5[0] = 50;
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 8;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 80;
					Var0.f_20 = "bullet_catch_npc_volunteers";
					break;
				case 39:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 9;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					Var0.f_20 = "bullet_catch_npc_aims";
					break;
				case 40:
					Var0[0] = 21;
					Var0.f_5[0] = 100;
					Var0.f_10[0] = 13;
					Var0.f_15[0] = 100;
					Var0.f_20 = "bullet_catch_npc_shoots";
					break;
				case 41:
					Var0[0] = 17;
					Var0[1] = 23;
					Var0.f_5[0] = 50;
					Var0.f_5[1] = 50;
					Var0.f_10[0] = 12;
					Var0.f_15[0] = 100;
					Var0.f_20 = "bullet_catch_npc_shot_reveal";
					break;
				case 42:
					Var0[0] = 16;
					Var0.f_5[0] = 50;
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 8;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					Var0.f_20 = "bullet_catch_npc_volunteers";
					break;
				case 43:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 9;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					Var0.f_20 = "bullet_catch_npc_aims";
					break;
				case 44:
					Var0[0] = 21;
					Var0.f_5[0] = 100;
					Var0.f_10[0] = 13;
					Var0.f_15[0] = 100;
					Var0.f_20 = "bullet_catch_npc_shoots";
					break;
				case 45:
					Var0[0] = 17;
					Var0[1] = 23;
					Var0.f_5[0] = 50;
					Var0.f_5[1] = 50;
					Var0.f_10[0] = 12;
					Var0.f_15[0] = 100;
					Var0.f_20 = "bullet_catch_npc_shot_reveal";
					break;
			}
			break;
		case 12:
			switch (iParam2)
			{
				case 1:
					Var0.f_10[0] = 1;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 20;
					break;
				case 2:
					Var0.f_10[0] = 3;
					Var0.f_10[1] = 6;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 40;
					break;
				case 3:
					Var0[0] = 25;
					Var0[1] = 24;
					Var0.f_5[0] = 30;
					Var0.f_5[1] = 30;
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
				case 4:
					Var0.f_10[0] = 12;
					Var0.f_10[1] = 10;
					Var0.f_15[0] = 60;
					Var0.f_15[1] = 40;
					break;
				case 5:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 6:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 6;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 30;
					break;
				case 13:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 8;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 40;
					Var0.f_15[2] = 30;
					break;
				case 14:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 60;
					break;
				case 15:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 8;
					Var0.f_10[3] = 4;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 30;
					Var0.f_15[3] = 40;
					break;
				case 16:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 40;
					break;
				case 17:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 8;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 40;
					Var0.f_15[2] = 30;
					break;
				case 18:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 80;
					Var0.f_15[1] = 20;
					break;
				case 19:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 8;
					Var0.f_10[3] = 4;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 30;
					Var0.f_15[3] = 40;
					break;
				case 20:
					Var0.f_10[0] = 10;
					Var0.f_15[0] = 70;
					break;
				case 21:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 8;
					Var0.f_10[3] = 4;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 30;
					Var0.f_15[3] = 40;
					break;
				case 22:
					Var0[0] = 23;
					Var0[1] = 20;
					Var0[2] = 16;
					Var0[3] = 19;
					Var0.f_5[0] = 30;
					Var0.f_5[1] = 20;
					Var0.f_5[2] = 20;
					Var0.f_5[3] = 30;
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 4;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 23:
					Var0[0] = 25;
					Var0[1] = 23;
					Var0[2] = 16;
					Var0.f_5[0] = 30;
					Var0.f_5[1] = 20;
					Var0.f_5[2] = 50;
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 10;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 40;
					break;
				case 24:
					Var0[0] = 23;
					Var0[1] = 22;
					Var0[2] = 16;
					Var0[3] = 25;
					Var0.f_5[0] = 30;
					Var0.f_5[1] = 30;
					Var0.f_5[1] = 10;
					Var0.f_5[1] = 30;
					Var0.f_10[0] = 12;
					Var0.f_15[0] = 100;
					break;
				case 25:
					Var0[0] = 17;
					Var0.f_5[0] = 10;
					Var0.f_10[0] = 12;
					Var0.f_15[0] = 100;
					break;
				case 26:
					Var0[0] = 31;
					Var0.f_5[0] = 100;
					Var0.f_10[0] = 13;
					Var0.f_15[0] = 100;
					break;
			}
			break;
		case 7:
			switch (iParam2)
			{
				case 1:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 2:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 8;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 30;
					break;
				case 3:
					Var0.f_10[0] = 6;
					Var0.f_10[1] = 10;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 30;
					break;
				case 4:
					Var0.f_10[0] = 12;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 10;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 70;
					Var0.f_15[2] = 20;
					break;
				case 5:
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
				case 13:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 8;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 30;
					break;
				case 14:
					Var0[0] = 24;
					Var0.f_5[0] = 20;
					Var0.f_10[0] = 4;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 30;
					break;
				case 15:
					Var0.f_10[0] = 4;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 8;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 30;
					break;
				case 16:
					Var0[0] = 24;
					Var0[1] = 16;
					Var0.f_5[0] = 50;
					Var0.f_5[1] = 10;
					Var0.f_10[0] = 4;
					Var0.f_10[1] = 11;
					Var0.f_15[0] = 80;
					Var0.f_15[1] = 20;
					break;
				case 17:
					Var0.f_10[0] = 12;
					Var0.f_10[1] = 11;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 18:
					Var0[0] = 17;
					Var0.f_5[0] = 30;
					Var0.f_10[0] = 12;
					Var0.f_15[0] = 100;
					break;
			}
			break;
		case 5:
			switch (iParam2)
			{
				case 1:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 2:
					Var0.f_10[0] = 1;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 10;
					Var0.f_15[3] = 20;
					break;
				case 3:
					Var0[0] = 24;
					Var0.f_5[0] = 40;
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
				case 4:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_10[2] = 3;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 40;
					Var0.f_15[2] = 20;
					break;
				case 5:
					Var0.f_10[0] = 1;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 20;
					break;
				case 6:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_10[2] = 12;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 40;
					break;
				case 7:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 0;
					Var0.f_15[0] = 60;
					Var0.f_15[1] = 10;
					Var0.f_15[2] = 30;
					break;
				case 13:
					Var0.f_10[0] = 5;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 4;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 40;
					break;
				case 14:
					Var0[0] = 25;
					Var0.f_5[0] = 20;
					Var0.f_10[0] = 5;
					Var0.f_10[1] = 4;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 15:
					Var0.f_10[0] = 12;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 90;
					break;
				case 16:
					Var0.f_10[0] = 5;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 4;
					Var0.f_10[3] = 11;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 50;
					Var0.f_15[3] = 10;
					break;
				case 17:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_10[2] = 12;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 50;
					break;
				case 18:
					Var0[0] = 17;
					Var0.f_5[0] = 5;
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 12;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 19:
					Var0[0] = 17;
					Var0.f_5[0] = 60;
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 12;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
			}
			break;
		case 16:
			switch (iParam2)
			{
				case 1:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 10;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 40;
					break;
				case 2:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 0;
					Var0.f_15[0] = 60;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 20;
					break;
				case 3:
					Var0[0] = 24;
					Var0.f_5[0] = 30;
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
				case 4:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 0;
					Var0.f_15[0] = 60;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 20;
					break;
				case 13:
					Var0.f_10[0] = 4;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 8;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 20;
					break;
				case 14:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 50;
					break;
				case 15:
					Var0.f_10[0] = 4;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 8;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 20;
					break;
				case 16:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 50;
					break;
				case 17:
					Var0.f_10[0] = 4;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 8;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 20;
					break;
				case 18:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 12;
					Var0.f_10[3] = 2;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 40;
					break;
				case 19:
					Var0.f_10[0] = 4;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 8;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 20;
					break;
				case 20:
					Var0.f_10[0] = 9;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 21:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 12;
					Var0.f_10[3] = 2;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 40;
					break;
				case 22:
					Var0.f_10[0] = 12;
					Var0.f_15[0] = 60;
					break;
				case 23:
					Var0[0] = 21;
					Var0[1] = 20;
					Var0[2] = 19;
					Var0.f_5[0] = 25;
					Var0.f_5[1] = 25;
					Var0.f_5[2] = 25;
					Var0.f_10[0] = 3;
					Var0.f_15[0] = 100;
					break;
			}
			break;
		case 18:
			switch (iParam2)
			{
				case 1:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 2:
					Var0.f_10[0] = 6;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 40;
					break;
				case 6:
					Var0.f_10[0] = 0;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 10;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					break;
				case 3:
					Var0.f_10[0] = 4;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 40;
					break;
				case 4:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 30;
					break;
				case 5:
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
				case 13:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					break;
				case 14:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 15:
					Var0.f_10[0] = 0;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					break;
				case 16:
					Var0[0] = 16;
					Var0.f_5[0] = 30;
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
				case 17:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_10[2] = 12;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 40;
					Var0.f_15[2] = 10;
					break;
				case 18:
					Var0.f_10[0] = 0;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					break;
				case 19:
					Var0[0] = 16;
					Var0.f_5[0] = 30;
					Var0.f_10[0] = 3;
					Var0.f_15[0] = 100;
					break;
				case 20:
					Var0.f_10[0] = 6;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 21:
					Var0.f_10[0] = 9;
					Var0.f_10[1] = 8;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 20;
					break;
				case 22:
					Var0.f_10[0] = 9;
					Var0.f_10[1] = 8;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 20;
					break;
				case 23:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 30;
					break;
				case 24:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 12;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 60;
					break;
				case 25:
					Var0[0] = 21;
					Var0[1] = 20;
					Var0[2] = 19;
					Var0.f_5[0] = 30;
					Var0.f_5[1] = 30;
					Var0.f_5[2] = 40;
					Var0.f_10[0] = 3;
					Var0.f_15[0] = 100;
					break;
			}
			break;
		case 17:
			switch (iParam2)
			{
				case 1:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 2:
					Var0.f_10[0] = 4;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 8;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 20;
					break;
				case 3:
					Var0[0] = 24;
					Var0.f_5[0] = 30;
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
				case 4:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 40;
					Var0.f_15[2] = 20;
					break;
				case 5:
					break;
				case 6:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 7:
					Var0.f_10[0] = 4;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 8;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 70;
					Var0.f_15[2] = 10;
					break;
				case 13:
					Var0.f_10[0] = 3;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 8;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 20;
					break;
				case 14:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 30;
					break;
				case 15:
					Var0.f_10[0] = 3;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 8;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 20;
					break;
				case 16:
					Var0.f_10[0] = 10;
					Var0.f_15[0] = 80;
					break;
				case 17:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 8;
					Var0.f_10[2] = 0;
					Var0.f_15[0] = 80;
					Var0.f_15[1] = 10;
					Var0.f_15[2] = 10;
					break;
				case 18:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 12;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					break;
				case 19:
					Var0.f_10[0] = 4;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 8;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 10;
					Var0.f_15[3] = 10;
					break;
				case 20:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 9;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 40;
					break;
				case 21:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 15;
					Var0.f_15[1] = 85;
					break;
				case 22:
					Var0[0] = 23;
					Var0[1] = 22;
					Var0.f_5[0] = 30;
					Var0.f_5[1] = 30;
					Var0.f_10[0] = 12;
					Var0.f_10[1] = 11;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 70;
					break;
				case 23:
					Var0[0] = 21;
					Var0[1] = 20;
					Var0[2] = 19;
					Var0.f_5[0] = 30;
					Var0.f_5[1] = 30;
					Var0.f_5[2] = 40;
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
			}
			break;
		case 10:
			switch (iParam2)
			{
				case 1:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 4;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					break;
				case 2:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 70;
					break;
				case 3:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 4;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 70;
					Var0.f_15[2] = 20;
					break;
				case 4:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_15[0] = 60;
					Var0.f_15[1] = 40;
					break;
				case 5:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_15[0] = 80;
					Var0.f_15[1] = 20;
					break;
				case 13:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 0;
					Var0.f_10[3] = 3;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 20;
					break;
				case 14:
					Var0[0] = 23;
					Var0.f_5[0] = 15;
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
				case 15:
					Var0[0] = 23;
					Var0.f_5[0] = 15;
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 3;
					Var0.f_15[0] = 60;
					Var0.f_15[1] = 40;
					break;
				case 16:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 0;
					Var0.f_10[3] = 3;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 60;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 10;
					break;
				case 17:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 0;
					Var0.f_15[0] = 60;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 20;
					break;
				case 18:
					Var0[0] = 21;
					Var0[1] = 20;
					Var0[2] = 19;
					Var0.f_5[0] = 15;
					Var0.f_5[1] = 15;
					Var0.f_5[2] = 15;
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
				case 19:
					Var0[0] = 26;
					Var0.f_5[0] = 100;
					Var0.f_10[0] = 12;
					Var0.f_10[1] = 11;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 20:
					Var0[0] = 17;
					Var0.f_5[0] = 30;
					Var0.f_10[0] = 11;
					Var0.f_15[0] = 100;
					break;
			}
			break;
		case 15:
			switch (iParam2)
			{
				case 1:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 40;
					break;
				case 2:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 80;
					break;
				case 3:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_15[0] = 70;
					Var0.f_15[1] = 30;
					break;
				case 4:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 4;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 10;
					Var0.f_15[2] = 40;
					break;
				case 5:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_15[0] = 70;
					Var0.f_15[1] = 30;
					break;
				case 13:
					Var0.f_10[0] = 12;
					Var0.f_10[1] = 5;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 10;
					Var0.f_15[2] = 60;
					break;
				case 14:
					Var0.f_10[0] = 3;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 5;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 60;
					Var0.f_15[2] = 10;
					break;
				case 15:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 70;
					break;
				case 16:
					Var0.f_10[0] = 3;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 5;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 40;
					Var0.f_15[2] = 10;
					Var0.f_15[3] = 20;
					break;
				case 17:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 12;
					Var0.f_10[2] = 5;
					Var0.f_15[0] = 60;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 20;
					break;
				case 18:
					Var0.f_10[0] = 3;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 5;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 40;
					Var0.f_15[2] = 10;
					Var0.f_15[3] = 20;
					break;
				case 19:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 80;
					break;
				case 20:
					Var0[0] = 25;
					Var0[1] = 24;
					Var0.f_5[0] = 20;
					Var0.f_5[1] = 20;
					Var0.f_10[0] = 0;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 21:
					Var0[0] = 24;
					Var0[1] = 25;
					Var0.f_5[0] = 40;
					Var0.f_5[1] = 10;
					Var0.f_10[0] = 3;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 22:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 12;
					Var0.f_15[0] = 60;
					Var0.f_15[1] = 40;
					break;
				case 23:
					Var0[0] = 23;
					Var0.f_5[0] = 40;
					Var0.f_10[0] = 6;
					Var0.f_15[0] = 100;
					break;
				case 24:
					Var0[0] = 24;
					Var0[1] = 25;
					Var0.f_5[0] = 30;
					Var0.f_5[1] = 10;
					Var0.f_10[0] = 3;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 25:
					Var0[0] = 23;
					Var0[1] = 24;
					Var0.f_5[0] = 30;
					Var0.f_5[1] = 30;
					Var0.f_10[0] = 6;
					Var0.f_15[0] = 100;
					break;
				case 26:
					Var0[0] = 23;
					Var0.f_5[0] = 20;
					Var0.f_10[0] = 6;
					Var0.f_15[0] = 100;
					break;
				case 27:
					Var0.f_10[0] = 12;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 80;
					break;
				case 28:
					Var0[0] = 17;
					Var0.f_5[0] = 30;
					Var0.f_10[0] = 12;
					Var0.f_10[1] = 11;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 29:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 5;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 15;
					Var0.f_15[2] = 15;
					Var0.f_15[3] = 20;
					break;
			}
			break;
		case 11:
			switch (iParam2)
			{
				case 1:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 12;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 40;
					Var0.f_15[2] = 20;
					break;
				case 2:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_10[2] = 10;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 25;
					Var0.f_15[2] = 25;
					break;
				case 3:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 60;
					break;
				case 4:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 10;
					Var0.f_15[2] = 70;
					break;
				case 5:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 0;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 25;
					Var0.f_15[2] = 25;
					break;
				case 6:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 12;
					Var0.f_10[2] = 10;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 40;
					break;
				case 13:
					Var0.f_10[0] = 0;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 70;
					break;
				case 14:
					break;
				case 15:
					Var0[0] = 19;
					Var0.f_5[0] = 10;
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
				case 16:
					Var0[0] = 24;
					Var0.f_5[0] = 15;
					Var0.f_10[0] = 0;
					Var0.f_15[0] = 100;
					break;
				case 17:
					Var0.f_10[0] = 12;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 60;
					Var0.f_15[1] = 40;
					break;
				case 18:
					Var0.f_10[0] = 0;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_10[3] = 8;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 20;
					break;
				case 19:
					Var0.f_10[0] = 0;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 8;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 40;
					Var0.f_15[2] = 30;
					break;
				case 20:
					Var0[0] = 20;
					Var0.f_5[0] = 20;
					Var0.f_10[0] = 0;
					Var0.f_15[0] = 100;
					break;
				case 21:
					Var0.f_10[0] = 0;
					Var0.f_10[1] = 8;
					Var0.f_10[2] = 9;
					Var0.f_10[3] = 2;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 30;
					Var0.f_15[3] = 30;
					break;
				case 22:
					Var0[0] = 21;
					Var0[1] = 20;
					Var0[2] = 19;
					Var0.f_5[0] = 30;
					Var0.f_5[1] = 30;
					Var0.f_5[2] = 10;
					Var0.f_10[0] = 13;
					Var0.f_15[0] = 100;
					break;
				case 23:
					Var0[0] = 21;
					Var0[1] = 20;
					Var0[2] = 23;
					Var0[3] = 22;
					Var0.f_5[0] = 25;
					Var0.f_5[1] = 25;
					Var0.f_5[2] = 25;
					Var0.f_5[3] = 25;
					Var0.f_10[0] = 13;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 2;
					Var0.f_10[3] = 6;
					Var0.f_15[0] = 25;
					Var0.f_15[1] = 25;
					Var0.f_15[2] = 25;
					Var0.f_15[3] = 25;
					break;
				case 24:
					Var0.f_10[0] = 13;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 2;
					Var0.f_10[3] = 6;
					Var0.f_15[0] = 25;
					Var0.f_15[1] = 25;
					Var0.f_15[2] = 25;
					Var0.f_15[3] = 25;
					break;
			}
			break;
		case 13:
			switch (iParam2)
			{
				case 1:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_15[0] = 70;
					Var0.f_15[1] = 30;
					break;
				case 2:
					Var0.f_10[0] = 1;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 10;
					Var0.f_15[3] = 20;
					break;
				case 3:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_15[0] = 80;
					Var0.f_15[1] = 20;
					break;
				case 4:
					Var0.f_10[0] = 1;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 10;
					Var0.f_15[3] = 20;
					break;
				case 5:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_15[0] = 80;
					Var0.f_15[1] = 20;
					break;
				case 6:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 0;
					Var0.f_15[0] = 80;
					Var0.f_15[1] = 10;
					Var0.f_15[2] = 10;
					break;
				case 13:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 10;
					Var0.f_15[3] = 20;
					break;
				case 14:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 20;
					break;
				case 15:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 10;
					Var0.f_15[3] = 20;
					break;
				case 16:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 17:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 10;
					Var0.f_15[3] = 20;
					break;
				case 18:
					Var0[0] = 16;
					Var0.f_5[0] = 30;
					Var0.f_10[0] = 11;
					Var0.f_15[0] = 100;
					break;
				case 19:
					Var0[0] = 23;
					Var0[1] = 22;
					Var0.f_5[0] = 20;
					Var0.f_5[1] = 20;
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
				case 20:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 80;
					break;
				case 21:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_10[3] = 0;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 10;
					Var0.f_15[3] = 20;
					break;
				case 22:
					Var0[0] = 23;
					Var0[1] = 22;
					Var0[2] = 19;
					Var0.f_5[0] = 20;
					Var0.f_5[1] = 20;
					Var0.f_5[2] = 20;
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
				case 23:
					Var0.f_10[0] = 12;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 10;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 20;
					break;
			}
			break;
		case 14:
			switch (iParam2)
			{
				case 1:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 2:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 4;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 70;
					Var0.f_15[2] = 20;
					break;
				case 3:
					Var0[0] = 24;
					Var0.f_5[0] = 30;
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
				case 13:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 4;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					break;
				case 14:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 70;
					Var0.f_15[1] = 30;
					break;
				case 15:
					Var0.f_10[0] = 12;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 70;
					Var0.f_15[1] = 30;
					break;
				case 16:
					Var0.f_10[0] = 8;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 4;
					Var0.f_10[3] = 10;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 20;
					break;
				case 17:
					Var0.f_10[0] = 3;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 4;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 50;
					Var0.f_15[2] = 20;
					break;
				case 18:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 12;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 40;
					break;
				case 19:
					Var0.f_10[0] = 3;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 4;
					Var0.f_10[3] = 10;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 20;
					break;
				case 20:
					Var0.f_10[0] = 3;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 4;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 30;
					break;
				case 21:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 60;
					break;
				case 22:
					Var0.f_10[0] = 3;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 4;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 30;
					break;
				case 23:
					Var0.f_10[0] = 11;
					Var0.f_15[0] = 30;
					break;
				case 24:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 12;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
			}
			break;
		case 19:
			switch (iParam2)
			{
				case 1:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 70;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 10;
					break;
				case 2:
					Var0.f_10[0] = 1;
					Var0.f_10[1] = 3;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 13:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 4;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 30;
					break;
				case 14:
					Var0[0] = 16;
					Var0[1] = 25;
					Var0.f_5[0] = 30;
					Var0.f_5[1] = 10;
					Var0.f_10[0] = 4;
					Var0.f_15[0] = 100;
					break;
				case 15:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 4;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 30;
					break;
				case 16:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 30;
					break;
				case 17:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 70;
					break;
				case 18:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 4;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 30;
					break;
				case 19:
					Var0[0] = 25;
					Var0.f_5[0] = 20;
					Var0.f_10[0] = 3;
					Var0.f_15[0] = 100;
					break;
				case 20:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 50;
					break;
				case 21:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
			}
			break;
		case 8:
			switch (iParam2)
			{
				case 1:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 2:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 8;
					Var0.f_15[0] = 60;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 10;
					break;
				case 3:
					Var0[0] = 16;
					Var0.f_5[0] = 20;
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
				case 4:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_10[2] = 12;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 40;
					Var0.f_15[2] = 20;
					break;
				case 5:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 8;
					Var0.f_10[3] = 3;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 10;
					Var0.f_15[3] = 10;
					break;
				case 13:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_10[2] = 8;
					Var0.f_10[3] = 3;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 10;
					Var0.f_15[3] = 10;
					break;
				case 14:
					Var0.f_10[0] = 4;
					Var0.f_15[0] = 50;
					break;
				case 15:
					Var0[0] = 16;
					Var0[1] = 17;
					Var0.f_5[0] = 80;
					Var0.f_5[1] = 20;
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 12;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
			}
			break;
		case 6:
			switch (iParam2)
			{
				case 1:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 2:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_15[0] = 80;
					Var0.f_15[1] = 20;
					break;
				case 3:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_15[0] = 80;
					Var0.f_15[1] = 20;
					break;
				case 13:
					Var0.f_10[0] = 4;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 20;
					break;
				case 14:
					Var0.f_10[0] = 5;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 70;
					break;
				case 15:
					Var0.f_10[0] = 12;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 10;
					Var0.f_15[1] = 90;
					break;
				case 16:
					Var0[0] = 25;
					Var0.f_5[0] = 30;
					Var0.f_10[0] = 3;
					Var0.f_15[0] = 100;
					break;
				case 17:
					Var0.f_10[0] = 4;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_10[3] = 5;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 10;
					break;
				case 18:
					Var0.f_10[0] = 4;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_10[3] = 5;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 10;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 30;
					break;
				case 19:
					Var0[0] = 25;
					Var0.f_5[0] = 30;
					Var0.f_10[0] = 2;
					Var0.f_15[0] = 100;
					break;
				case 20:
					Var0.f_10[0] = 4;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_10[3] = 5;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 10;
					Var0.f_15[2] = 40;
					Var0.f_15[3] = 10;
					break;
				case 21:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 12;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
				case 22:
					Var0.f_10[0] = 4;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 10;
					Var0.f_10[3] = 5;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 10;
					break;
				case 23:
					Var0[0] = 17;
					Var0.f_5[0] = 100;
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 50;
					break;
			}
			break;
		case 20:
			switch (iParam2)
			{
				case 1:
					switch (iParam1)
					{
						case 9:
							Var0[0] = 16;
							Var0.f_5[0] = 100;
							Var0.f_10[0] = 2;
							Var0.f_10[1] = 3;
							Var0.f_15[0] = 75;
							Var0.f_15[1] = 25;
							Var0.f_20 = "mc_set1_int_mc_appears";
							break;
						case 5:
							Var0.f_10[0] = 11;
							Var0.f_10[1] = 10;
							Var0.f_15[0] = 50;
							Var0.f_15[1] = 50;
							break;
						case 8:
							Var0.f_10[0] = 11;
							Var0.f_10[1] = 10;
							Var0.f_15[0] = 50;
							Var0.f_15[1] = 50;
							break;
						case 17:
							Var0.f_10[0] = 11;
							Var0.f_10[1] = 10;
							Var0.f_15[0] = 50;
							Var0.f_15[1] = 50;
							break;
						case 13:
							Var0.f_10[0] = 10;
							Var0.f_10[1] = 11;
							Var0.f_15[0] = 80;
							Var0.f_15[1] = 20;
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 9:
							Var0[0] = 16;
							Var0.f_5[0] = 50;
							Var0.f_10[0] = 2;
							Var0.f_10[1] = 3;
							Var0.f_15[0] = 90;
							Var0.f_15[1] = 10;
							Var0.f_20 = "mc_set1_int_name_applause";
							break;
						case 5:
							Var0.f_10[0] = 1;
							Var0.f_10[1] = 2;
							Var0.f_10[2] = 3;
							Var0.f_10[3] = 0;
							Var0.f_15[0] = 10;
							Var0.f_15[1] = 50;
							Var0.f_15[2] = 20;
							Var0.f_15[3] = 20;
							break;
						case 8:
							Var0.f_10[0] = 2;
							Var0.f_10[1] = 0;
							Var0.f_10[2] = 8;
							Var0.f_15[0] = 60;
							Var0.f_15[1] = 30;
							Var0.f_15[2] = 10;
							break;
						case 17:
							Var0.f_10[0] = 4;
							Var0.f_10[1] = 2;
							Var0.f_10[2] = 8;
							Var0.f_10[3] = 0;
							Var0.f_15[0] = 10;
							Var0.f_15[1] = 50;
							Var0.f_15[2] = 20;
							Var0.f_15[3] = 20;
							break;
						case 13:
							Var0.f_10[0] = 1;
							Var0.f_10[1] = 2;
							Var0.f_10[2] = 3;
							Var0.f_10[3] = 0;
							Var0.f_15[0] = 20;
							Var0.f_15[1] = 50;
							Var0.f_15[2] = 10;
							Var0.f_15[3] = 20;
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 9:
							Var0.f_20 = "mc_set1_int_ticket_price_applause";
							break;
						case 5:
							Var0[0] = 24;
							Var0.f_5[0] = 40;
							Var0.f_10[0] = 2;
							Var0.f_15[0] = 100;
							break;
						case 8:
							Var0[0] = 16;
							Var0.f_5[0] = 20;
							Var0.f_10[0] = 2;
							Var0.f_15[0] = 100;
							break;
						case 17:
							Var0[0] = 24;
							Var0.f_5[0] = 30;
							Var0.f_10[0] = 2;
							Var0.f_15[0] = 100;
							break;
						case 13:
							Var0.f_10[0] = 10;
							Var0.f_10[1] = 11;
							Var0.f_15[0] = 80;
							Var0.f_15[1] = 20;
							break;
					}
					break;
				case 4:
					switch (iParam1)
					{
						case 9:
							Var0.f_10[0] = 11;
							Var0.f_10[1] = 2;
							Var0.f_15[0] = 80;
							Var0.f_15[1] = 20;
							break;
						case 5:
							Var0.f_10[0] = 11;
							Var0.f_10[1] = 10;
							Var0.f_10[2] = 3;
							Var0.f_15[0] = 40;
							Var0.f_15[1] = 40;
							Var0.f_15[2] = 20;
							break;
						case 8:
							break;
						case 17:
							Var0.f_10[0] = 11;
							Var0.f_10[1] = 10;
							Var0.f_15[0] = 40;
							Var0.f_15[1] = 60;
							break;
						case 13:
							break;
					}
					break;
				case 5:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 0;
					Var0.f_15[0] = 80;
					Var0.f_15[1] = 20;
					break;
				case 6:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_15[0] = 70;
					Var0.f_15[1] = 30;
					break;
				case 7:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 4;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 40;
					break;
				case 8:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 70;
					break;
				case 13:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 12;
					Var0.f_10[2] = 6;
					Var0.f_10[3] = 3;
					Var0.f_15[0] = 40;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 10;
					Var0.f_15[3] = 30;
					break;
				case 14:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 0;
					Var0.f_15[0] = 60;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 20;
					break;
				case 15:
					Var0.f_10[0] = 10;
					Var0.f_10[1] = 11;
					Var0.f_15[0] = 60;
					Var0.f_15[1] = 40;
					break;
				case 16:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 0;
					Var0.f_15[0] = 60;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 20;
					break;
				case 17:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 12;
					Var0.f_15[0] = 80;
					Var0.f_15[1] = 20;
					break;
				case 18:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 0;
					Var0.f_10[3] = 8;
					Var0.f_15[0] = 50;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 20;
					Var0.f_15[3] = 10;
					break;
				case 19:
					Var0[0] = 21;
					Var0[1] = 20;
					Var0[2] = 24;
					Var0.f_5[0] = 20;
					Var0.f_5[1] = 20;
					Var0.f_5[2] = 20;
					Var0.f_10[0] = 13;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 40;
					break;
				case 20:
					Var0[0] = 21;
					Var0[1] = 20;
					Var0[2] = 24;
					Var0.f_5[0] = 20;
					Var0.f_5[1] = 20;
					Var0.f_5[2] = 20;
					Var0.f_10[0] = 13;
					Var0.f_10[1] = 2;
					Var0.f_10[2] = 3;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 40;
					break;
				case 21:
					Var0[0] = 20;
					Var0[1] = 19;
					Var0[2] = 23;
					Var0[3] = 22;
					Var0.f_5[0] = 20;
					Var0.f_5[1] = 20;
					Var0.f_5[2] = 20;
					Var0.f_5[3] = 20;
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 0;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 40;
					Var0.f_15[2] = 30;
					break;
				case 22:
					Var0.f_10[0] = 12;
					Var0.f_10[1] = 2;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 80;
					break;
				case 23:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 0;
					Var0.f_15[0] = 60;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 20;
					break;
				case 24:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 70;
					break;
				case 25:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 12;
					Var0.f_15[0] = 70;
					Var0.f_15[1] = 30;
					break;
				case 26:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 0;
					Var0.f_15[0] = 60;
					Var0.f_15[1] = 20;
					Var0.f_15[2] = 20;
					break;
				case 27:
					Var0[0] = 24;
					Var0[1] = 23;
					Var0[2] = 22;
					Var0.f_5[0] = 30;
					Var0.f_5[1] = 30;
					Var0.f_5[2] = 40;
					Var0.f_10[0] = 6;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 2;
					Var0.f_15[0] = 20;
					Var0.f_15[1] = 40;
					Var0.f_15[2] = 40;
					break;
				case 28:
					Var0.f_10[0] = 2;
					Var0.f_10[1] = 3;
					Var0.f_10[2] = 4;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 30;
					Var0.f_15[2] = 40;
					break;
				case 29:
					Var0.f_10[0] = 11;
					Var0.f_10[1] = 10;
					Var0.f_10[2] = 12;
					Var0.f_15[0] = 30;
					Var0.f_15[1] = 60;
					Var0.f_15[2] = 10;
					break;
			}
			break;
	}
	return Var0;
}

void func_199(var uParam0, var uParam1, int iParam2, struct<16> Param3, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = func_183(iParam2);
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 0;
	iVar6 = Param3.f_10;
	iVar7 = Param3;
	iVar2 = 0;
	while (iVar2 <= (iVar6 - 1))
	{
		iVar4 = (&Param3.f_15[iVar2] + iVar4);
		iVar2++;
	}
	func_21(&(uParam0->f_2));
	func_21(&(uParam0->f_5));
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Param3.f_20))
	{
		AUDIO::TRIGGER_MUSIC_EVENT(Param3.f_20);
	}
	if (&Param3[0] == -1 && &Param3.f_10[0] == -1)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= (iVar0 - 1))
	{
		if (((*uParam1)[iVar1 /*10*/])->f_1 == 6)
		{
		}
		else if (&Param3.f_10[0] == 35)
		{
			((*uParam1)[iVar1 /*10*/])->f_1 = 13;
		}
		else
		{
			if (&Param3[0] != -1)
			{
				iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
				iVar5 = 0;
				iVar2 = 0;
				while (iVar2 <= (iVar7 - 1))
				{
					iVar5 = (&Param3.f_5[iVar2] + iVar5);
					if (iVar3 <= iVar5)
					{
						((*uParam1)[iVar1 /*10*/])->f_3 = MISC::GET_RANDOM_INT_IN_RANGE(100, 700);
						((*uParam1)[iVar1 /*10*/])->f_6 = &Param3[iVar2];
						Jump @290; //curOff = 266
					}
					else
					{
						((*uParam1)[iVar1 /*10*/])->f_6 = -1;
					}
					iVar2++;
				}
			}
			else
			{
				((*uParam1)[iVar1 /*10*/])->f_6 = -1;
			}
			if (&Param3.f_10[0] != -1)
			{
				iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
				iVar5 = 0;
				iVar2 = 0;
				while (iVar2 <= (iVar6 - 1))
				{
					iVar5 = (&Param3.f_15[iVar2] + iVar5);
					if (iVar3 <= iVar5)
					{
						((*uParam1)[iVar1 /*10*/])->f_5 = &Param3.f_10[iVar2];
						Jump @397; //curOff = 373
					}
					else
					{
						((*uParam1)[iVar1 /*10*/])->f_5 = -1;
					}
					iVar2++;
				}
			}
			else
			{
				((*uParam1)[iVar1 /*10*/])->f_5 = -1;
			}
			((*uParam1)[iVar1 /*10*/])->f_1 = 3;
		}
		iVar1++;
	}
}

void func_200(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

Vector3 func_201(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2546.278f, -1301.387f, 49.2503f;
		case 1:
			return 2546.242f, -1298.337f, 51.3709f;
		case 2:
			return 2546.77f, -1304.337f, 48.7382f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_202(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1.2492f, 0f, -179.3095f;
		case 1:
			return -7.8585f, 0f, -179.3892f;
		case 2:
			return 9.5547f, 0f, 178.3628f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_203(var uParam0)
{
	if (!func_20(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000f));
	}
	if (func_104(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_275() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

bool func_204(int iParam0)
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

void func_205(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 && !func_204(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_276(*uParam0);
	if (((*Global_1945938)[iVar0 /*18*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && iParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_277(iVar0);
	*uParam0 = 0;
}

int func_206(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
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
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_278(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_279(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

bool func_207(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_204(iParam0))
	{
		return false;
	}
	iVar0 = func_276(iParam0);
	if (HUD::_0xCD072523791DDC1B(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_208(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3;
	vector3 vVar6;

	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_126))
	{
		return;
	}
	if (!func_5(uParam0->f_13, 262144) && func_280(uParam0))
	{
		PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -2045108990);
		func_4(&(uParam0->f_13), 262144);
	}
	PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(uParam0->f_126, 0, 1);
	if (func_5(Global_1394141->f_1326, 512))
	{
		if (func_5(uParam0->f_13, 64))
		{
			PED::SET_PED_CONFIG_FLAG(uParam0->f_126, 301, true);
			func_2(&(uParam0->f_13), 64);
		}
	}
	else if (!func_5(uParam0->f_13, 64))
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_126, 301, false);
		func_4(&(uParam0->f_13), 64);
	}
	if (Global_1394141->f_1322 || func_5(uParam0->f_13, 33554432))
	{
		if (!PED::GET_PED_CONFIG_FLAG(uParam0->f_126, 301, true))
		{
			PED::SET_PED_CONFIG_FLAG(uParam0->f_126, 301, true);
		}
	}
	else if (PED::GET_PED_CONFIG_FLAG(uParam0->f_126, 301, true))
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_126, 301, false);
	}
	switch (uParam0->f_2)
	{
		case 0:
			if (ENTITY::IS_ENTITY_DEAD(uParam0->f_126))
			{
				return;
			}
			MISC::_0x870708A6E147A9AD(uParam0->f_126, "", 20f, 0, 4, 0, 0, 0, 0, -1);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_126, 297, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_126, 315, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_126, 130, true);
			PLAYER::_0x3A8611BD7BDE84F7(PLAYER::GET_PLAYER_INDEX(), 17f);
			Global_1394141->f_1334 = 0;
			func_281();
			if (func_5(uParam0->f_13, 64))
			{
				func_282(&(uParam0->f_2), 1);
			}
			else
			{
				func_282(&(uParam0->f_2), 2);
			}
			break;
		case 1:
			func_283(&(uParam0->f_9), 5f, 0);
			func_282(&(uParam0->f_2), 3);
			break;
		case 2:
			if (func_204(&(uParam0->f_1031[0])))
			{
				func_205(uParam0->f_1031[0], 1, 1);
			}
			if (func_204(&(uParam0->f_1031[1])))
			{
				func_205(uParam0->f_1031[1], 1, 1);
			}
			if (func_5(uParam0->f_13, 64) && !func_5(Global_1394141->f_1326, 16384))
			{
				func_282(&(uParam0->f_2), 1);
			}
			break;
		case 3:
			if (!func_5(uParam0->f_13, 64) || func_5(Global_1394141->f_1326, 16384))
			{
				func_282(&(uParam0->f_2), 2);
				return;
			}
			iVar1 = func_284(uParam0->f_126);
			if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::GET_PLAYER_INDEX(), &iVar0, 0, 0) && iVar0 == iVar1)
			{
				if (Global_36.f_2 > 51f)
				{
					ENTITY::_0xAF7F3099B9FEB535(iVar1, 0f, 0f, -2f);
				}
				else
				{
					ENTITY::_0xAF7F3099B9FEB535(iVar1, 0f, 0f, 0f);
				}
				if (!func_20(&(uParam0->f_9)))
				{
					func_21(&(uParam0->f_9));
				}
				else if (!func_204(&(uParam0->f_1031[0])) || !func_204(&(uParam0->f_1031[1])))
				{
					uParam0->f_1031[0] = func_285("SHOW_POS_RESPONSE", -163964935, Global_35, 1, 0, 0, 0, 0, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
					HUD::_UIPROMPT_SET_GROUP(((*Global_1945938)[func_276(&(uParam0->f_1031[0])) /*18*/])->f_3, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(uParam0->f_126), 0);
					uParam0->f_1031[1] = func_285("SHOW_NEG_RESPONSE", 648122183, Global_35, 1, 0, 0, 0, 0, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
					HUD::_UIPROMPT_SET_GROUP(((*Global_1945938)[func_276(&(uParam0->f_1031[1])) /*18*/])->f_3, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(uParam0->f_126), 0);
				}
				else if (func_203(&(uParam0->f_9)) > 8500)
				{
					bVar2 = false;
					if (!func_286(&(uParam0->f_1031[0]), 0))
					{
						func_287(&(uParam0->f_1031[0]), 1, 1);
					}
					if (!func_286(&(uParam0->f_1031[1]), 0))
					{
						func_287(&(uParam0->f_1031[1]), 1, 1);
					}
					if (func_288(&(uParam0->f_1031[0]), 1))
					{
						bVar2 = true;
						func_282(&(uParam0->f_2), 4);
					}
					if (func_288(&(uParam0->f_1031[1]), 1))
					{
						bVar2 = true;
						func_282(&(uParam0->f_2), 5);
					}
					if (bVar2)
					{
						func_287(&(uParam0->f_1031[0]), 0, 1);
						func_287(&(uParam0->f_1031[1]), 0, 1);
						func_21(&(uParam0->f_9));
					}
				}
				else
				{
					if (func_286(&(uParam0->f_1031[0]), 0))
					{
						func_287(&(uParam0->f_1031[0]), 0, 1);
					}
					if (func_286(&(uParam0->f_1031[1]), 0))
					{
						func_287(&(uParam0->f_1031[1]), 0, 1);
					}
				}
			}
			else
			{
				if (func_204(&(uParam0->f_1031[0])))
				{
					func_205(uParam0->f_1031[0], 1, 1);
				}
				if (func_204(&(uParam0->f_1031[1])))
				{
					func_205(uParam0->f_1031[1], 1, 1);
				}
			}
			break;
		case 4:
			vVar3 = { func_290(func_289()) };
			if (func_291(&(uParam0->f_14), vVar3, 1, -1, 0, 0))
			{
				func_282(&(uParam0->f_2), 1);
			}
			break;
		case 5:
			vVar6 = { func_290(func_292()) };
			if (func_291(&(uParam0->f_14), vVar6, 1, -1, 0, 0))
			{
				func_282(&(uParam0->f_2), 1);
			}
			break;
		case 6:
			break;
	}
}

void func_209(var uParam0)
{
	bool bVar0;

	bVar0 = false;
	if (uParam0->f_4 >= 2 && uParam0->f_4 <= 4)
	{
		bVar0 = true;
	}
	if (uParam0->f_4 >= 8 && uParam0->f_4 <= 11)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		switch (uParam0->f_984)
		{
			case 9:
				func_293(uParam0);
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 1965240012))
				{
					Global_1394141->f_1332 = 5;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 914796948))
				{
					Global_1394141->f_1332 = 6;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -2016029647))
				{
					Global_1394141->f_1332 = 7;
				}
				if (ANIMSCENE::_0x25557E324489393C(uParam0->f_118))
				{
					if (ANIMSCENE::_0x1F0E401031E20146(uParam0->f_118, "PL_OUTRO_NEG"))
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 9812678))
						{
							Global_1394141->f_1332 = 10;
						}
						if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 1441097060))
						{
							Global_1394141->f_1332 = 11;
						}
						if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 102680024))
						{
							Global_1394141->f_1332 = 12;
						}
					}
					else if (ANIMSCENE::_0x1F0E401031E20146(uParam0->f_118, "PL_OUTRO_POS"))
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 9812678))
						{
							Global_1394141->f_1332 = 8;
						}
						if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 1441097060))
						{
							Global_1394141->f_1332 = 9;
						}
					}
				}
				break;
			case 12:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -1898689755))
				{
					Global_1394141->f_1332 = 1;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 607876597))
				{
					Global_1394141->f_1332 = 2;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -243756944))
				{
					Global_1394141->f_1332 = 3;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 45626095))
				{
					Global_1394141->f_1332 = 4;
				}
				if (ANIMSCENE::_0x25557E324489393C(uParam0->f_118))
				{
					if (ANIMSCENE::_0x1F0E401031E20146(uParam0->f_118, "PL_OUTRO_POS"))
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 256044616))
						{
							Global_1394141->f_1332 = 5;
						}
					}
					else if (ANIMSCENE::_0x1F0E401031E20146(uParam0->f_118, "PL_OUTRO_NEG"))
					{
						if (!func_5(uParam0->f_13, 16777216))
						{
							Global_1394141->f_1332 = 6;
							func_4(&(uParam0->f_13), 16777216);
						}
					}
				}
				break;
			case 7:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -354261736))
				{
					Global_1394141->f_1332 = 1;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -1610789398))
				{
					Global_1394141->f_1332 = 2;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -1371346315))
				{
					Global_1394141->f_1332 = 3;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 1511914274))
				{
					Global_1394141->f_1332 = 4;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -328228921))
				{
					Global_1394141->f_1332 = 5;
				}
				break;
			case 5:
				func_294(uParam0);
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -1050877829))
				{
					Global_1394141->f_1332 = 5;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -671085119))
				{
					Global_1394141->f_1332 = 6;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -1203214149))
				{
					Global_1394141->f_1332 = 7;
				}
				break;
			case 16:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -701171441))
				{
					Global_1394141->f_1332 = 1;
				}
				if (!Global_1394141->f_1324)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -1696950789))
					{
						Global_1394141->f_1332 = 2;
					}
					if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -2061800835))
					{
						Global_1394141->f_1332 = 3;
					}
				}
				else if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -1696950789))
				{
					Global_1394141->f_1332 = 4;
				}
				break;
			case 18:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 399563686))
				{
					Global_1394141->f_1332 = 1;
				}
				if (ANIMSCENE::_0x25557E324489393C(uParam0->f_118))
				{
					if (ANIMSCENE::_0x1F0E401031E20146(uParam0->f_118, "PL_OUTRO_NEG"))
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -1289759123))
						{
							Global_1394141->f_1332 = 2;
						}
					}
					else if (ANIMSCENE::_0x1F0E401031E20146(uParam0->f_118, "PL_OUTRO_POS"))
					{
						if (ANIMSCENE::_0x3FBC3F51BF12DFBF(uParam0->f_118) < 0.5f)
						{
							if (!func_5(uParam0->f_13, 16777216))
							{
								Global_1394141->f_1332 = 6;
								func_4(&(uParam0->f_13), 16777216);
							}
						}
					}
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -1347013244))
				{
					Global_1394141->f_1332 = 3;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -1116417791))
				{
					Global_1394141->f_1332 = 4;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -1283474165))
				{
					Global_1394141->f_1332 = 5;
				}
				break;
			case 8:
				func_295(uParam0);
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 339574134))
				{
					Global_1394141->f_1332 = 4;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 2002413044))
				{
					Global_1394141->f_1332 = 5;
				}
				break;
			case 14:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 2039367936))
				{
					Global_1394141->f_1332 = 1;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 659966729))
				{
					Global_1394141->f_1332 = 2;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 511687004))
				{
					Global_1394141->f_1332 = 3;
				}
				break;
			case 6:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 2033997287))
				{
					Global_1394141->f_1332 = 1;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -190474029))
				{
					Global_1394141->f_1332 = 2;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 1389314580))
				{
					Global_1394141->f_1332 = 3;
				}
				break;
			case 17:
				func_296(uParam0);
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -1314916643))
				{
					Global_1394141->f_1332 = 5;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -1679176847))
				{
					Global_1394141->f_1332 = 6;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 222841341))
				{
					Global_1394141->f_1332 = 7;
				}
				break;
			case 10:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 1680071222))
				{
					Global_1394141->f_1332 = 1;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 1915680332))
				{
					Global_1394141->f_1332 = 2;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -2140695879))
				{
					Global_1394141->f_1332 = 3;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -1916949147))
				{
					Global_1394141->f_1332 = 4;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -1825287773))
				{
					Global_1394141->f_1332 = 5;
				}
				break;
			case 15:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 258163243))
				{
					Global_1394141->f_1332 = 1;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 1433430811))
				{
					Global_1394141->f_1332 = 2;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 701100200))
				{
					Global_1394141->f_1332 = 3;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -73657267))
				{
					Global_1394141->f_1332 = 4;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -2140267017))
				{
					Global_1394141->f_1332 = 5;
				}
				break;
			case 13:
				func_297(uParam0);
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 425046891))
				{
					Global_1394141->f_1332 = 4;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 866445321))
				{
					Global_1394141->f_1332 = 5;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 1663249175))
				{
					Global_1394141->f_1332 = 6;
				}
				break;
			case 19:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 275246134))
				{
					Global_1394141->f_1332 = 1;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -254082133))
				{
					Global_1394141->f_1332 = 2;
				}
				break;
			case 11:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 1017851950))
				{
					Global_1394141->f_1332 = 1;
				}
				if (ANIMSCENE::_0x25557E324489393C(uParam0->f_118))
				{
					if (ANIMSCENE::_0x1F0E401031E20146(uParam0->f_118, "PL_OUTRO_NEG"))
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -1005071104))
						{
							Global_1394141->f_1332 = 3;
						}
					}
					else if (ANIMSCENE::_0x1F0E401031E20146(uParam0->f_118, "PL_OUTRO_POS"))
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -1005071104))
						{
							Global_1394141->f_1332 = 2;
						}
					}
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 1554422650))
				{
					Global_1394141->f_1332 = 4;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 1867956442))
				{
					Global_1394141->f_1332 = 5;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -1580882497))
				{
					Global_1394141->f_1332 = 6;
				}
				break;
			case 20:
				switch (&uParam0->f_1018.f_1[1])
				{
					case 9:
						func_293(uParam0);
						break;
					case 5:
						func_294(uParam0);
						break;
					case 8:
						func_295(uParam0);
						break;
					case 17:
						func_296(uParam0);
						break;
					case 14:
						func_297(uParam0);
						break;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -1753281299))
				{
					Global_1394141->f_1332 = 5;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 261848356))
				{
					Global_1394141->f_1332 = 6;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -1954518104))
				{
					Global_1394141->f_1332 = 7;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 817083916))
				{
					Global_1394141->f_1332 = 8;
				}
				break;
		}
	}
}

void func_210(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_211(int iParam0, int iParam1, int iParam2)
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, func_214(), iParam1, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, func_220(), iParam2, 0);
	ANIMSCENE::START_ANIM_SCENE(iParam0);
}

void func_212(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0) || ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(Global_35) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) - Global_36 };
	vVar3 = { func_298(vVar3) };
	fVar6 = func_299(vVar3, vVar0);
	if (fVar6 >= 0.2f)
	{
		func_300(uParam0);
	}
}

int func_213(int iParam0)
{
	int iVar0;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(func_232(iParam0)))
	{
		iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(2546.453f, -1303.998f, 46.793f);
		if (INTERIOR::IS_VALID_INTERIOR(iVar0))
		{
			if (INTERIOR::IS_INTERIOR_READY(iVar0))
			{
				if (INTERIOR::_0xD56FF170710FC826(iVar0, func_232(iParam0)))
				{
					INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar0, func_232(iParam0), 0);
				}
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

char* func_214()
{
	return "MC";
}

void func_215(var uParam0, int iParam1)
{
	func_4(&(uParam0->f_13), iParam1);
}

int func_216(var uParam0)
{
	char* sVar0;
	struct<2> Var1;

	if (uParam0->f_1029 != 0)
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(&(uParam0->f_1018.f_6[(uParam0->f_1029 - 1)]), false))
		{
			return 0;
		}
	}
	sVar0 = func_301(&(uParam0->f_1018.f_1[uParam0->f_1029]));
	SCRIPTS::REQUEST_SCRIPT(sVar0);
	if (!SCRIPTS::HAS_SCRIPT_LOADED(sVar0))
	{
		return 0;
	}
	Var1.f_1 = &uParam0->f_1018.f_1[uParam0->f_1029];
	Var1 = 1;
	uParam0->f_1018.f_6[uParam0->f_1029] = BUILTIN::START_NEW_SCRIPT_WITH_ARGS(sVar0, &Var1, 10, 2051);
	return 1;
}

int func_217(var uParam0)
{
	bool bVar0;

	bVar0 = func_5(Global_1394141->f_1326, 2048);
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_128))
	{
		if (ANIMSCENE::_0x1F0E401031E20146(uParam0->f_128, func_171(2)) && ANIMSCENE::_0x3FBC3F51BF12DFBF(uParam0->f_128) > 0.413f)
		{
			if (!bVar0)
			{
				func_4(&(Global_1394141->f_1326), 2048);
			}
			return 1;
		}
		if (ANIMSCENE::_0x1F0E401031E20146(uParam0->f_128, func_171(0)))
		{
			if (!bVar0)
			{
				func_4(&(Global_1394141->f_1326), 2048);
			}
			return 1;
		}
	}
	if (bVar0)
	{
		func_2(&(Global_1394141->f_1326), 2048);
	}
	return 0;
}

int func_218()
{
	if (!func_161(Local_22.f_113[1], &(Local_22.f_13), func_174(Local_22.f_12, 1), func_302(Local_22.f_12), 1))
	{
		return 0;
	}
	return 1;
}

void func_219(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

char* func_220()
{
	return "CURTAIN";
}

void func_221(int iParam0, char* sParam1, char[4] cParam2)
{
	if (!ANIMSCENE::_0x25557E324489393C(iParam0))
	{
		return;
	}
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0, sParam1, true);
}

void func_222(int iParam0, char* sParam1, char[4] cParam2)
{
	if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, sParam1))
	{
		ANIMSCENE::_0xAE6ADA8FE7E84ACC(iParam0, sParam1);
	}
}

void func_223(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

char* func_224(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "EASTER_EGG_LEADUP_MUSIC";
		case 1:
			return "EASTER_EGG_TADA_MUSIC";
		default:
			break;
	}
	return "EASTER_EGG_LEADUP_MUSIC";
}

char* func_225()
{
	return "3235391231_intro";
}

Vector3 func_226(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2546.551f, -1310.422f, 51.21665f;
		case 1:
			return 2546.551f, -1310.422f, 51.21665f;
		default:
			break;
	}
	return 2546.551f, -1310.422f, 51.21665f;
}

int func_227(int iParam0)
{
	func_303(iParam0, 0, 0);
	if (func_304(iParam0))
	{
		return OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) == 0;
	}
	return 0;
}

int func_228(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -1;
		case 1:
			return -1;
		case 2:
			return -1;
		case 0:
			return 7;
		case 3:
			return -1;
		default:
			break;
	}
	return -1;
}

int func_229(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 3:
			return 1;
		case 1:
		case 2:
			return 1;
		case 4:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_230(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (((*uParam0)[iVar0 /*5*/])->f_1 != 0 && ENTITY::_0x1FF441D7954F8709(((*uParam0)[iVar0 /*5*/])->f_1))
		{
			ENTITY::_0xD2B9C78537ED5759(((*uParam0)[iVar0 /*5*/])->f_1);
		}
		iVar0++;
	}
}

int func_231(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
			return 0;
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
			return 1;
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
			return 2;
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
			return 3;
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
			return 4;
	}
	return -1;
}

char* func_232(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 6:
			return "new_theater_cancan";
		case 9:
			return "new_theater_magician";
		case 12:
		case 13:
		case 14:
			return "new_theater_fireperformer";
		case 16:
		case 17:
		case 19:
			return "new_theater_snakedancer";
		case 15:
		case 18:
			return "new_theater_strongwoman";
		case 20:
			return "new_theater_theOddFellows";
	}
	return "";
}

int func_233(int iParam0)
{
	if (!func_252(iParam0))
	{
		return -1;
	}
	return func_305(iParam0);
}

int func_234(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 3;
	}
	return 0;
}

void func_235(int iParam0)
{
	Global_1900383->f_316 = (Global_1900383->f_316 || iParam0);
}

void func_236(int iParam0, int iParam1, int iParam2)
{
	func_303(iParam0, 0, 0);
	if (func_304(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != iParam1 || iParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, iParam1);
		}
	}
}

int func_237(int iParam0)
{
	func_303(iParam0, 0, 0);
	if (func_304(iParam0))
	{
		return (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) == 2 || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) == 1);
	}
	return 0;
}

bool func_238(int iParam0)
{
	return func_306(iParam0, 23);
}

void func_239(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_303(iParam0, 0, 0);
	if (func_304(iParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, iParam2, iParam6);
		if (fParam5 > 0f)
		{
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_307(iParam0, iParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_308(iParam0, 1);
			}
			else
			{
				func_309(iParam0, 1);
			}
		}
		else
		{
			func_310(iParam0, 1);
		}
		if (bParam7)
		{
			OBJECT::_0x276AAF0F1C7F2494(iParam0, 1);
		}
	}
	else if (func_311())
	{
	}
	else if (NETWORK::NETWORK_IS_IN_SESSION())
	{
	}
}

void func_240(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (func_312(iParam0, iParam1, 1))
	{
		iVar0 = func_313(iParam1);
		iVar1 = func_314(iParam0);
		iVar2 = (func_314(iParam0) - func_314(iParam1));
		iVar3 = (func_313(iParam0) - func_313(iParam1));
		iVar4 = (func_315(iParam0) - func_315(iParam1));
		iVar5 = (func_316(iParam0) - func_316(iParam1));
		iVar6 = (func_317(iParam0) - func_317(iParam1));
		iVar7 = (func_318(iParam0) - func_318(iParam1));
	}
	else
	{
		iVar0 = func_313(iParam0);
		iVar1 = func_314(iParam1);
		iVar2 = (func_314(iParam1) - func_314(iParam0));
		iVar3 = (func_313(iParam1) - func_313(iParam0));
		iVar4 = (func_315(iParam1) - func_315(iParam0));
		iVar5 = (func_316(iParam1) - func_316(iParam0));
		iVar6 = (func_317(iParam1) - func_317(iParam0));
		iVar7 = (func_318(iParam1) - func_318(iParam0));
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
		iVar4 = (iVar4 + func_319(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = BUILTIN::ROUND(func_320(BUILTIN::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

void func_241(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_242(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_243(int iParam0)
{
	return func_109(iParam0, Global_1310750->f_16072 | 64);
}

void func_244(int iParam0)
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

float func_245(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

void func_246(var uParam0, float fParam1, float fParam2, float fParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;

	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (uParam0->f_2 > fParam1 && uParam0->f_2 > uParam0->f_3)
		{
			fVar1 = (fParam3 - fParam2);
			fVar0 = (fVar1 / fParam3);
			uParam0->f_2 = func_321(fParam1, uParam0->f_4, fVar0);
			if (uParam0->f_2 < fParam1)
			{
				uParam0->f_2 = fParam1;
			}
		}
		fVar2 = BUILTIN::POW(uParam0->f_2, BUILTIN::TO_FLOAT(iParam4));
		OBJECT::_0xF49574E2332A8F06(*uParam0, fVar2);
	}
}

void func_247(var uParam0, float fParam1, float fParam2, float fParam3, int iParam4)
{
	float fVar0;
	float fVar1;

	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (uParam0->f_2 < fParam1 && uParam0->f_2 < uParam0->f_4)
		{
			fVar0 = (fParam2 / fParam3);
			uParam0->f_2 = func_321(uParam0->f_3, fParam1, fVar0);
			if (uParam0->f_2 > fParam1)
			{
				uParam0->f_2 = fParam1;
			}
			fVar1 = BUILTIN::POW(uParam0->f_2, BUILTIN::TO_FLOAT(iParam4));
			OBJECT::_0xF49574E2332A8F06(*uParam0, fVar1);
		}
	}
}

bool func_248(int iParam0)
{
	int iVar0;

	iVar0 = func_233(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_249()
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

int func_250(int iParam0)
{
	if (!func_252(iParam0))
	{
		return -1;
	}
	return func_323(func_322(iParam0));
}

bool func_251(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_252(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

void func_253(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_324(iParam1))
		{
			func_325(iParam0, 41788943);
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
			func_326(iParam0, 0, 1);
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
			func_327(iParam0, 0);
			bVar0 = true;
		}
		func_328(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	}
}

char* func_254(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@shows@show_audience@ig7_enters@custom_enter_01";
		case 1:
			return "script@shows@show_audience@ig7_enters@custom_enter_02";
		case 2:
			return "script@shows@show_audience@ig7_enters@custom_enter_03";
		case 3:
			return "script@shows@show_audience@ig7_enters@custom_enter_04";
		case 4:
			return "script@shows@show_audience@ig7_enters@custom_enter_05";
		case 5:
			return "script@shows@show_audience@ig7_enters@custom_enter_06";
		case 6:
			return "script@shows@show_audience@ig7_enters@custom_enter_07";
		case 7:
			return "script@shows@show_audience@ig7_enters@custom_enter_08";
		case 8:
			return "script@shows@show_audience@ig7_enters@custom_enter_09";
		case 9:
			return "script@shows@show_audience@ig7_enters@custom_enter_10";
		default:
			break;
	}
	return "FAIL -- SHOW_CROWD_GET_ANIM_SCENE_ENTER";
}

char* func_255(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@shows@show_audience@ig7_enters@custom_enter_idle_01";
		case 1:
			return "script@shows@show_audience@ig7_enters@custom_enter_idle_02";
		case 2:
			return "script@shows@show_audience@ig7_enters@custom_enter_idle_03";
		case 3:
			return "script@shows@show_audience@ig7_enters@custom_enter_idle_04";
		case 4:
			return "script@shows@show_audience@ig7_enters@custom_enter_idle_05";
		case 5:
			return "script@shows@show_audience@ig7_enters@custom_enter_idle_06";
		case 6:
			return "script@shows@show_audience@ig7_enters@custom_enter_idle_07";
		case 7:
			return "script@shows@show_audience@ig7_enters@custom_enter_idle_08";
		case 8:
			return "script@shows@show_audience@ig7_enters@custom_enter_idle_09";
		case 9:
			return "script@shows@show_audience@ig7_enters@custom_enter_idle_10";
		default:
			break;
	}
	return "FAIL -- SHOW_CROWD_GET_ANIM_SCENE_IDLE";
}

struct<11> func_256(int iParam0, int iParam1)
{
	struct<11> Var0;

	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					Var0 = { 2543.514f, -1303.811f, 47.16364f };
					Var0.f_3 = { 0f, 0f, 9.568836f };
					Var0.f_6 = { 4.336886f, 2f, 2.155625f };
					Var0.f_10 = "SHOW_BLOCKING_ROW1_LEFT";
					Var0.f_9 = -1612834106;
					Jump @604; //curOff = 146
					Var0 = { 2549.294f, -1303.83f, 47.04182f };
					Var0.f_3 = { 0f, 0f, -9.89514f };
					Var0.f_6 = { 4.260345f, 2f, 2f };
					Var0.f_10 = "SHOW_BLOCKING_ROW1_RIGHT";
					Var0.f_9 = -1612834106;
					Jump @604; //curOff = 211
					Var0 = { 2543.097f, -1302.039f, 47.34119f };
					Var0.f_3 = { 0f, 0f, 8.842982f };
					Var0.f_6 = { 5.463117f, 2f, 2f };
					Var0.f_10 = "SHOW_BLOCKING_ROW2_LEFT";
					Var0.f_9 = -1612834106;
					Jump @604; //curOff = 276
					Var0 = { 2550.183f, -1302.069f, 47.34119f };
					Var0.f_3 = { 0f, 0f, -10.03278f };
					Var0.f_6 = { 4.277905f, 2f, 2f };
					Var0.f_10 = "SHOW_BLOCKING_ROW2_RIGHT";
					Var0.f_9 = -1612834106;
					Jump @604; //curOff = 341
					Var0 = { 2542.933f, -1300.3f, 47.63106f };
					Var0.f_3 = { 0f, 0f, 9.537826f };
					Var0.f_6 = { 5.29451f, 2f, 2f };
					Var0.f_10 = "SHOW_BLOCKING_ROW3_LEFT";
					Var0.f_9 = -1612834106;
					Jump @604; //curOff = 406
					Var0 = { 2550.596f, -1300.471f, 47.63106f };
					Var0.f_3 = { 0f, 0f, -9.448911f };
					Var0.f_6 = { 3.957135f, 2f, 2f };
					Var0.f_10 = "SHOW_BLOCKING_ROW3_RIGHT";
					Var0.f_9 = -1612834106;
					Jump @604; //curOff = 471
					Var0 = { 2542.582f, -1298.776f, 47.90404f };
					Var0.f_3 = { 0f, 0f, 9.277945f };
					Var0.f_6 = { 4.706136f, 2f, 2f };
					Var0.f_10 = "SHOW_BLOCKING_ROW4_LEFT";
					Var0.f_9 = -1612834106;
					Jump @604; //curOff = 536
					Var0 = { 2549.868f, -1298.625f, 47.904f };
					Var0.f_3 = { 0f, 0f, -9.896723f };
					Var0.f_6 = { 5.116724f, 2f, 2f };
					Var0.f_10 = "SHOW_BLOCKING_ROW4_RIGHT";
					Var0.f_9 = -1612834106;
					return Var0;
				}

int func_257(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 53:
				case 54:
					return 2;
				case 55:
				case 56:
					return 1;
				default:
					break;
			}
			return 0;
		case 1:
		case 2:
		case 3:
		case 4:
			return 0;
	}
	return 0;
}

char* func_258(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_180(0);
		case 1:
			return func_180(0);
		case 2:
			return func_180(2);
		case 3:
			return func_180(2);
		case 4:
			return func_180(3);
		case 5:
			return func_180(4);
		case 6:
			return func_180(5);
		case 7:
			return func_180(5);
		case 8:
			return func_180(6);
		case 9:
			return func_180(6);
		case 10:
			return func_180(6);
		case 11:
			return func_180(6);
		case 12:
			return func_180(7);
		case 13:
			return func_180(7);
		case 14:
			return func_180(8);
		case 15:
			return func_180(8);
		case 16:
			return func_180(1);
		case 17:
			return func_180(1);
		case 18:
			return func_180(1);
		case 19:
			return func_180(1);
		case 20:
			return func_180(1);
		case 21:
			return func_180(1);
		case 22:
			return func_180(1);
		case 23:
			return func_180(1);
		case 24:
			return func_180(1);
		case 25:
			return func_180(1);
		case 26:
			return func_180(9);
		case 27:
			return func_180(9);
		case 28:
			return func_180(9);
		case 29:
			return func_180(9);
		case 30:
			return func_180(9);
		case 31:
			return func_180(10);
		case 32:
			return func_180(10);
		case 33:
			return func_180(10);
		case 34:
			return func_180(11);
		default:
			break;
	}
	return "FAIL";
}

char* func_259(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_330(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
						case 1:
							return func_331(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
						case 2:
							return func_332(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_333(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_334(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
						case 1:
							return func_335(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
						case 2:
							return func_336(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_337(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_338(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
						case 1:
							return func_339(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
						case 2:
							return func_340(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_341(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_342(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
						case 1:
							return func_343(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
						case 2:
							return func_344(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_345(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_346(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
						case 1:
							return func_347(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
						case 2:
							return func_348(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_349(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_350(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
						case 1:
							return func_351(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
						case 2:
							return func_352(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_353(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_354(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
						case 1:
							return func_355(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
						case 2:
							return func_356(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_357(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_358(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
						case 1:
							return func_359(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
						case 2:
							return func_360(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_361(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_362(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
						case 1:
							return func_363(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
						case 2:
							return func_364(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_365(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_366(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
						case 1:
							return func_367(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
						case 2:
							return func_368(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_369(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_370(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
						case 1:
							return func_371(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
						case 2:
							return func_372(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_373(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_374(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
						case 1:
							return func_375(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
						case 2:
							return func_376(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_377(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_378(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
						case 1:
							return func_379(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
						case 2:
							return func_380(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_381(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_382(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
						case 1:
							return func_383(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
						case 2:
							return func_384(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_385(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_386(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
						case 1:
							return func_387(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
						case 2:
							return func_388(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_389(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_390(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
						case 1:
							return func_391(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
						case 2:
							return func_392(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_393(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 18:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_394(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
						case 1:
							return func_395(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
						case 2:
							return func_396(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_397(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 20:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_398(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
						case 1:
							return func_399(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
						case 2:
							return func_400(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_401(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 21:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_402(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
						case 1:
							return func_403(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
						case 2:
							return func_404(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_405(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 19:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_406(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
						case 1:
							return func_407(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
						case 2:
							return func_408(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_409(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 22:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_410(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
						case 1:
							return func_387(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(16, iParam1, iParam2)));
						case 2:
							return func_388(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(16, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_411(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_412(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
						case 1:
							return func_413(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
						case 2:
							return func_414(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_415(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 24:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_416(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
						case 1:
							return func_417(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
						case 2:
							return func_418(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_419(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 25:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_420(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
						case 1:
							return func_421(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
						case 2:
							return func_422(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return func_423(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
			}
			break;
		case 26:
			break;
		case 27:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_424(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
						case 1:
							return func_425(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
						case 2:
							return func_426(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					return func_427(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
			}
			break;
		case 28:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_428(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
						case 1:
							return func_425(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
						case 2:
							return func_426(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					return func_429(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
			}
			break;
		case 29:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_430(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
						case 1:
							return func_425(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
						case 2:
							return func_426(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					return func_431(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
			}
			break;
		case 30:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_432(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
						case 1:
							return func_425(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
						case 2:
							return func_426(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					return func_433(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
			}
			break;
		case 31:
			break;
		case 32:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_434(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					return func_435(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
			}
			break;
		case 33:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_436(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					return func_437(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
			}
			break;
		case 34:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_438(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					return func_439(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_440(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
						case 1:
							return func_441(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
						case 2:
							return func_442(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					return func_443(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return func_444(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
						case 1:
							return func_441(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
						case 2:
							return func_442(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
					}
					break;
				case 2:
					return func_445(MISC::GET_RANDOM_INT_IN_RANGE(0, func_329(iParam0, iParam1, iParam2)));
			}
			break;
	}
	return "FAIL";
}

float func_260()
{
	return MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 0.25f);
}

int func_261(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 2139774588:
			return 1;
		case 1142025875:
			return 2;
		case 1587891565:
			return 4;
		case 1877013492:
			return 32;
		case -643014279:
			return 64;
		case -597116214:
			return 128;
		case 551416228:
			return 256;
		case 1022576842:
			return 512;
		case 953325896:
			return 1024;
		case 508358508:
			return 2048;
		case -735200598:
			return 4096;
		case -856432278:
			return 8192;
		case -2010847721:
			return 16384;
		case 446961221:
			return 32768;
		case -1972216640:
			return 65536;
		case 530833824:
			return 131072;
		case 1682361219:
			return 262144;
		case 158959085:
			return 524288;
		case 1919819559:
			return 1048576;
		case 1461411082:
			return 2097152;
		case -549508280:
			return 4194304;
		default:
			break;
	}
	return 0;
}

int func_262(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 9:
			switch (iParam1)
			{
				case 5:
					return 1;
				default:
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 31:
					return 1;
				default:
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 39:
					return 1;
				default:
					break;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 32:
					return 1;
				default:
					break;
			}
			break;
		case 20:
			switch (iParam1)
			{
				case 4:
					return 1;
				default:
					break;
			}
			break;
	}
	return 0;
}

void func_263(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_264(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 1;
		case 4:
			return 1;
		case 0:
			if (func_248(((*Global_1835011)[36 /*74*/])->f_1))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		case 1:
		case 2:
			return 1;
	}
	return 0;
}

float func_265(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -1f;
				case 1:
					return -1f;
				case 2:
					return 140f;
				case 3:
					return 137f;
				case 4:
					return 13f;
				case 5:
					return 4f;
				case 6:
					return -1f;
				case 7:
					return -1f;
				case 8:
					return -1f;
				case 9:
					return 134f;
				case 10:
					return 90f;
				case 11:
					return 52.5f;
				case 12:
					return 34.5f;
				case 13:
					return 7f;
				case 14:
					return -1f;
				case 15:
					return -1f;
				case 16:
					return -1f;
				case 17:
					return 149f;
				case 18:
					return 105f;
				case 19:
					return 75f;
				case 20:
					return 57f;
				case 21:
					return -1f;
				case 22:
					return -1f;
				case 23:
					return -1f;
				case 24:
					return 125f;
				case 25:
					return 109f;
				case 26:
					return 84f;
				case 27:
					return -1f;
				case 28:
					return -1f;
				case 29:
					return -1f;
				case 30:
					return 70.5f;
				case 31:
					return 47.5f;
				case 32:
					return 8.5f;
				case 33:
					return -1f;
				case 34:
					return -1f;
				case 35:
					return -1f;
				case 36:
					return 130f;
				case 37:
					return 114f;
				case 38:
					return 94f;
				case 39:
					return 0f;
				case 40:
					return -1f;
				case 41:
					return -1f;
				case 42:
					return -1f;
				case 43:
					return 145f;
				case 44:
					return 40f;
				case 45:
					return 27f;
				case 46:
					return -1f;
				case 47:
					return -1f;
				case 48:
					return -1f;
				case 49:
					return 120f;
				case 50:
					return 100f;
				case 51:
					return 81f;
				case 52:
					return 62f;
				case 53:
					return 0.5f;
				case 54:
					return 1.5f;
				case 55:
					return 1f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 44f;
				case 1:
					return 17f;
				case 2:
					return 23f;
				case 3:
					return 56f;
				case 4:
					return 60f;
				case 5:
					return 0f;
				case 6:
					return 10f;
				case 7:
					return 30f;
				case 8:
					return 37f;
				case 9:
					return 52f;
				default:
					break;
			}
			break;
		case 1:
		case 2:
			switch (iParam1)
			{
				case 0:
					return 60f;
				case 1:
					return 46f;
				case 2:
					return 24f;
				case 3:
					return 8f;
				case 4:
					return 12f;
				case 5:
					return 31f;
				case 6:
					return 44f;
				case 7:
					return 40f;
				case 8:
					return 21f;
				case 9:
					return 0f;
				case 10:
					return 4f;
				case 11:
					return 54f;
				case 12:
					return 58f;
				case 13:
					return 36f;
				case 14:
					return 17f;
				case 15:
					return 28f;
				case 16:
					return 70f;
				case 17:
					return 65f;
				case 18:
					return 50f;
				case 19:
					return 33f;
				case 20:
					return 1.5f;
				case 21:
					return 62f;
				default:
					break;
			}
			return 75f;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 60f;
				case 1:
					return 46f;
				case 2:
					return 24f;
				case 3:
					return 8f;
				case 4:
					return 12f;
				case 5:
					return 31f;
				case 6:
					return 44f;
				case 7:
					return 40f;
				case 8:
					return 21f;
				case 9:
					return 0f;
				case 10:
					return 4f;
				case 11:
					return 54f;
				case 12:
					return 58f;
				case 13:
					return 36f;
				case 14:
					return 17f;
				case 15:
					return 28f;
				case 16:
					return 70f;
				case 17:
					return 65f;
				case 18:
					return 50f;
				case 19:
					return 33f;
				case 20:
					return 1.5f;
				case 21:
					return 62f;
				case 22:
					return 72f;
				default:
					break;
			}
			return 75f;
	}
	return 20f;
}

int func_266(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) };
	vVar3 = { Global_36 - vVar0 };
	vVar6 = { Vector(49.51665f, -1308.839f, 2546.548f) - vVar0 };
	vVar3 = { func_298(vVar3) };
	vVar6 = { func_298(vVar6) };
	if (func_299(vVar6, vVar3) > 0.95f)
	{
		return 1;
	}
	return 0;
}

void func_267(int* iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	vector3 vVar5;
	int iVar8;

	if ((ENTITY::DOES_ENTITY_EXIST(*iParam0) && !iParam0->f_9) && iParam0->f_5 != -1)
	{
		iVar0 = 2;
		if (PED::IS_PED_MALE(*iParam0))
		{
			iVar0 = 1;
		}
		vVar1 = { func_186(iParam1, iParam0->f_2) };
		fVar4 = func_187(iParam1, iParam0->f_2);
		vVar5 = { 0f, 0f, fVar4 };
		iVar8 = func_257(iParam1, iParam0->f_2);
		iParam0->f_6 = -1;
		iParam0->f_7 = func_258(iParam0->f_5);
		iParam0->f_8 = func_259(iParam0->f_5, iVar0, iVar8);
		if (iVar8 == 0)
		{
			TASK::TASK_PLAY_ANIM_ADVANCED(*iParam0, iParam0->f_7, iParam0->f_8, vVar1, vVar5, 0.75f, -0.75f, -1, 49153, func_260(), 2, 1, 0);
		}
		else
		{
			TASK::TASK_PLAY_ANIM_ADVANCED(*iParam0, iParam0->f_7, iParam0->f_8, vVar1, vVar5, 0.75f, -0.75f, -1, 49153, func_260(), 2, 0, 0);
		}
	}
	if (!iParam0->f_9)
	{
		iParam0->f_5 = -1;
		iParam0->f_6 = -1;
	}
}

int func_268(int iParam0)
{
	if (iParam0 <= 26)
	{
		return 15;
	}
	else if (iParam0 >= 27 && iParam0 <= 52)
	{
		return 14;
	}
	else if (iParam0 >= 53 && iParam0 <= 55)
	{
		return 2;
	}
	return 2;
}

int func_269(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 0;
				case 3:
					return 0;
				case 4:
					return 0;
				case 5:
					return 0;
				case 6:
					return 0;
				case 7:
					return 0;
				case 8:
					return 0;
				case 9:
					return 0;
				case 10:
					return 0;
				case 11:
					return 0;
				case 12:
					return 0;
				case 13:
					return 0;
				case 14:
					return 0;
				case 15:
					return 0;
				case 16:
					return 0;
				case 17:
					return 0;
				case 18:
					return 0;
				case 19:
					return 0;
				case 20:
					return 0;
				case 21:
					return 0;
				case 22:
					return 0;
				case 23:
					return 0;
				case 24:
					return 0;
				case 25:
					return 0;
				case 26:
					return 0;
				case 27:
					return 0;
				case 28:
					return 0;
				case 29:
					return 0;
				case 30:
					return 0;
				case 31:
					return 0;
				case 32:
					return 0;
				case 33:
					return 0;
				case 34:
					return 0;
				case 35:
					return 0;
				case 36:
					return 0;
				case 37:
					return 0;
				case 38:
					return 0;
				case 39:
					return 0;
				case 40:
					return 0;
				case 41:
					return 0;
				case 42:
					return 0;
				case 43:
					return 0;
				case 44:
					return 0;
				case 45:
					return 0;
				case 46:
					return 0;
				case 47:
					return 0;
				case 48:
					return 0;
				case 49:
					return 0;
				case 50:
					return 0;
				case 51:
					return 0;
				case 52:
					return 0;
				case 53:
					return 0;
				case 54:
					return 0;
				case 55:
					return 0;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
				case 9:
					return 1;
				default:
					break;
			}
			break;
		case 1:
		case 2:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
					return 1;
				case 9:
					return 0;
				case 10:
				case 11:
					return 1;
				case 12:
				case 13:
				case 14:
				case 15:
				case 16:
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
					return 0;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
				case 9:
				case 10:
					return 1;
				case 11:
				case 12:
				case 13:
				case 14:
				case 15:
				case 16:
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return 0;
				default:
					break;
			}
			break;
	}
	return 0;
}

Vector3 func_270(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0f, 0f, 0f;
		case 3:
			return -346.8185f, 692.4758f, 118.2631f;
		case 1:
		case 2:
			return 2700.367f, -1349.699f, 49.78757f;
		case 4:
			return -772.6649f, -1362.613f, 45.39102f;
	}
	return 0f, 0f, 0f;
}

void func_271(var uParam0, vector3 vParam1, int iParam4)
{
	struct<14> Var0;

	Var0.f_4 = -1;
	Var0.f_8 = 2;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	Var0.f_13 = 1;
	Var0.f_14 = 2;
	Var0.f_15 = 2;
	Var0.f_16 = 3;
	Var0.f_19 = 3;
	Var0.f_20 = 1;
	Var0.f_21 = 3;
	Var0.f_22 = 3;
	Var0 = { vParam1 };
	Var0.f_3 = 0;
	Var0.f_8 = 4;
	Var0.f_13 = 3;
	Var0.f_7 = iParam4;
	_NAMESPACE29::_0x66F9EB44342BB4C5(*uParam0, &Var0);
}

void func_272(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	vector3 vVar5;
	int iVar8;
	var uVar9;
	var uVar10;

	if ((ENTITY::DOES_ENTITY_EXIST(*uParam0) && uParam0->f_6 != -1) && !uParam0->f_9)
	{
		iVar0 = 2;
		if (PED::IS_PED_MALE(*uParam0))
		{
			iVar0 = 1;
		}
		vVar1 = { func_186(iParam1, uParam0->f_2) };
		fVar4 = func_187(iParam1, uParam0->f_2);
		vVar5 = { 0f, 0f, fVar4 };
		iVar8 = func_257(iParam1, uParam0->f_2);
		if (uParam0->f_6 == 26)
		{
			uVar9 = func_446(uParam0->f_2);
			uParam0->f_6 = uVar9;
			uParam0->f_7 = func_258(uParam0->f_6);
			uParam0->f_8 = func_259(uParam0->f_6, iVar0, iVar8);
		}
		else if (uParam0->f_6 == 31)
		{
			uVar10 = func_447(uParam0->f_2);
			uParam0->f_6 = uVar10;
			uParam0->f_7 = func_258(uParam0->f_6);
			uParam0->f_8 = func_259(uParam0->f_6, iVar0, iVar8);
		}
		else
		{
			uParam0->f_7 = func_258(uParam0->f_6);
			uParam0->f_8 = func_259(uParam0->f_6, iVar0, iVar8);
		}
		if (iVar8 == 0)
		{
			TASK::TASK_PLAY_ANIM_ADVANCED(*uParam0, uParam0->f_7, uParam0->f_8, vVar1, vVar5, 0.75f, -0.75f, -1, 49154, 0f, 2, 1, 0);
		}
		else
		{
			TASK::TASK_PLAY_ANIM_ADVANCED(*uParam0, uParam0->f_7, uParam0->f_8, vVar1, vVar5, 0.75f, -0.75f, -1, 49154, 0f, 2, 0, 0);
		}
	}
}

void func_273(var uParam0, int* iParam1)
{
	float fVar0;
	bool bVar1;

	fVar0 = 0f;
	bVar1 = false;
	if (ANIMSCENE::_0x25557E324489393C(Global_1394141->f_1335))
	{
		fVar0 = ANIMSCENE::_0x3FBC3F51BF12DFBF(Global_1394141->f_1335);
		bVar1 = true;
	}
	switch (*uParam0)
	{
		case 9:
			if (bVar1)
			{
				switch (uParam0->f_11)
				{
					case 0:
						if (ANIMSCENE::_0x1F0E401031E20146(Global_1394141->f_1335, "PL_A_Performance") && fVar0 > 0.82f)
						{
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(Global_1394141->f_1335, "Crowd_Member", *iParam1, 0);
							func_263(&(uParam0->f_11), 1);
						}
						break;
					case 1:
						if (ANIMSCENE::_0x1F0E401031E20146(Global_1394141->f_1335, "PL_A_Performance") && fVar0 > 0.9f)
						{
							func_267(iParam1, 0);
							func_263(&(uParam0->f_11), 2);
						}
						break;
					case 2:
						if (ANIMSCENE::_0x1F0E401031E20146(Global_1394141->f_1335, "PL_D_LOOP_2_Challenge_Crowd") && fVar0 > 0.95f)
						{
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(Global_1394141->f_1335, "Crowd_Member", *iParam1, 0);
							func_263(&(uParam0->f_11), 3);
						}
						break;
					case 3:
						break;
				}
			}
			break;
		case 12:
			if (bVar1)
			{
				switch (uParam0->f_11)
				{
					case 0:
						if (ANIMSCENE::_0x1F0E401031E20146(Global_1394141->f_1335, "Pl_BreathLoop"))
						{
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(Global_1394141->f_1335, "male", *iParam1, 0);
							func_263(&(uParam0->f_11), 1);
						}
						break;
					case 1:
						if (ANIMSCENE::_0x1F0E401031E20146(Global_1394141->f_1335, "Pl_BreathFail") && ANIMSCENE::_0x005E6F28DD7ED58D(Global_1394141->f_1335, "male"))
						{
							PED::FORCE_PED_MOTION_STATE(*iParam1, -668482597, false, 0, false);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam1, 2504.978f, -1245.074f, 48.2112f, 1f, -1, 0.25f, false, 40000f);
							func_263(&(uParam0->f_11), 2);
						}
						break;
					case 2:
						if (func_448(*iParam1, 713668775))
						{
							PED::SET_PED_KEEP_TASK(*iParam1, true);
							func_449(*iParam1);
							*iParam1 = 0;
							Global_1394141->f_1334 = 0;
							func_263(&(uParam0->f_11), 3);
						}
						break;
					case 3:
						break;
				}
			}
			break;
		case 10:
			if (bVar1)
			{
				switch (uParam0->f_11)
				{
					case 0:
						if (ANIMSCENE::GET_ANIM_SCENE_BOOL(Global_1394141->f_1335, "BoolLoop"))
						{
							PED::DELETE_PED(iParam1);
							*iParam1 = 0;
							Global_1394141->f_1334 = 0;
							func_263(&(uParam0->f_11), 1);
						}
						break;
					case 1:
						break;
				}
			}
			break;
		case 15:
			if (bVar1)
			{
				switch (uParam0->f_11)
				{
					case 0:
						if (ANIMSCENE::_0x1F0E401031E20146(Global_1394141->f_1335, "pbl_CrowdChallenge_P2") && ANIMSCENE::_0x005E6F28DD7ED58D(Global_1394141->f_1335, "CrowdMember"))
						{
							PED::DELETE_PED(iParam1);
							*iParam1 = 0;
							func_263(&(uParam0->f_11), 1);
						}
						break;
					case 1:
						Global_1394141->f_1334 = 0;
						break;
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
			{
				PED::DELETE_PED(iParam1);
				*iParam1 = 0;
				Global_1394141->f_1334 = 0;
			}
			break;
		case 20:
			if (bVar1)
			{
				switch (uParam0->f_11)
				{
					case 0:
						if (((ANIMSCENE::_0x25557E324489393C(Global_1394141->f_1335) && ANIMSCENE::_0xCBFC7725DE6CE2E0(Global_1394141->f_1335, 0)) && ANIMSCENE::_0x1F0E401031E20146(Global_1394141->f_1335, "pl_Performance")) && ANIMSCENE::_0x8D81E7824B7753F7(Global_1394141->f_1335, "s_Performance_P2", 1))
						{
							func_263(&(uParam0->f_11), 1);
						}
						break;
					case 1:
						if (func_5(Global_1394141->f_1326, 2048) && ANIMSCENE::_0x3FBC3F51BF12DFBF(Global_1394141->f_1335) > 0.96f)
						{
							ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Global_1394141->f_1335, "CS_GENSTORYMALE", *iParam1);
							ENTITY::SET_ENTITY_COORDS(*iParam1, 2538.857f, -1312.293f, 48.21665f, true, false, true, true);
							PED::DELETE_PED(iParam1);
							*iParam1 = 0;
							Global_1394141->f_1334 = 0;
							func_263(&(uParam0->f_11), 2);
						}
						break;
					case 2:
						break;
				}
			}
			else
			{
				iParam1->f_5 = 2;
				func_267(iParam1, 0);
				Global_1394141->f_1334 = 0;
			}
			break;
	}
}

Vector3 func_274(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return -307.226f, 789.081f, 116.7509f;
		case 4:
			return -836.5425f, -1317.775f, 42.55259f;
		case 1:
		case 2:
			return 2631.464f, -1288.41f, 51.26936f;
		case 0:
			return 2546.444f, -1287.778f, 48.21795f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_275()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

int func_276(int iParam0)
{
	return iParam0;
}

void func_277(int iParam0)
{
	if (!func_450(iParam0))
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

bool func_278(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1) != 0;
}

void func_279(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_451(iParam0, 1);
	func_452(iParam0, 1);
	func_453(iParam0, 128);
}

int func_280(var uParam0)
{
	float fVar0;

	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_118))
	{
		fVar0 = ANIMSCENE::_0x3FBC3F51BF12DFBF(uParam0->f_118);
	}
	switch (uParam0->f_125)
	{
		case 0:
			if (fVar0 > 0.23f)
			{
				return 1;
			}
			break;
		case 1:
			if (fVar0 > 0.2f)
			{
				return 1;
			}
			break;
		case 4:
			if (fVar0 > 0.15f)
			{
				return 1;
			}
			break;
		case 2:
			if (fVar0 > 0.19f)
			{
				return 1;
			}
			break;
		case 3:
			if (fVar0 > 0.33f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_281()
{
	func_2(&(Global_1394141->f_1326), 1);
	func_2(&(Global_1394141->f_1326), 2);
	func_2(&(Global_1394141->f_1326), 4);
	func_2(&(Global_1394141->f_1326), 64);
	func_2(&(Global_1394141->f_1326), 512);
}

void func_282(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_283(var uParam0, float fParam1, int iParam2)
{
	if (iParam2 || !func_20(uParam0))
	{
		func_103(uParam0, fParam1);
	}
}

var func_284(var uParam0)
{
	return uParam0;
}

int func_285(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_278(iVar0, 2))
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
				func_279(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}

bool func_286(int iParam0, int iParam1)
{
	if (iParam1 && !func_204(iParam0))
	{
		return false;
	}
	return !func_278(iParam0, 4);
}

void func_287(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (iParam2 && !func_204(iParam0))
	{
		return;
	}
	iVar0 = func_276(iParam0);
	if (bParam1)
	{
		func_454(iParam0, 4);
		func_451(iVar0, 1);
		func_452(iVar0, 1);
	}
	else
	{
		func_453(iParam0, 4);
		func_452(iVar0, 0);
	}
}

bool func_288(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_204(iParam0))
	{
		return false;
	}
	iVar0 = func_276(iParam0);
	return HUD::_UIPROMPT_IS_JUST_PRESSED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

char* func_289()
{
	if (func_39())
	{
		return "SHRCT_GENCHEERJ";
	}
	return "SHRCT_GENCHEERA";
}

Vector3 func_290(char* sParam0)
{
	vector3 vVar0[24];

	StringCopy(&cVar0, sParam0, 24);
	return cVar0;
}

bool func_291(var uParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_455(vParam1, uParam0);
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

char* func_292()
{
	if (func_39())
	{
		return "SHRCT_GENBOOJ";
	}
	return "SHRCT_GENBOOA";
}

void func_293(var uParam0)
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 2141021393))
	{
		Global_1394141->f_1332 = 1;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 1784625749))
	{
		Global_1394141->f_1332 = 2;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -1128440048))
	{
		Global_1394141->f_1332 = 3;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -1037833763))
	{
		Global_1394141->f_1332 = 4;
	}
}

void func_294(var uParam0)
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -2066013608))
	{
		Global_1394141->f_1332 = 1;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -1600759346))
	{
		Global_1394141->f_1332 = 2;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -1302332063))
	{
		Global_1394141->f_1332 = 3;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 2113246357))
	{
		Global_1394141->f_1332 = 4;
	}
}

void func_295(var uParam0)
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 281318749))
	{
		Global_1394141->f_1332 = 1;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -425803506))
	{
		Global_1394141->f_1332 = 2;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -117283371))
	{
		Global_1394141->f_1332 = 3;
	}
}

void func_296(var uParam0)
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 1730660823))
	{
		Global_1394141->f_1332 = 1;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 882468027))
	{
		Global_1394141->f_1332 = 2;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 139955256))
	{
		Global_1394141->f_1332 = 3;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -800285661))
	{
		Global_1394141->f_1332 = 4;
	}
}

void func_297(var uParam0)
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 708995863))
	{
		Global_1394141->f_1332 = 1;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, -124778573))
	{
		Global_1394141->f_1332 = 2;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_126, 182266957))
	{
		Global_1394141->f_1332 = 3;
	}
}

Vector3 func_298(vector3 vParam0)
{
	float fVar0;
	float fVar1;

	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.f_1 = 0f;
		vParam0.f_2 = 0f;
	}
	return vParam0;
}

float func_299(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

void func_300(var uParam0)
{
	struct<23> Var0;

	Var0.f_4 = -1;
	Var0.f_8 = 2;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	Var0.f_13 = 1;
	Var0.f_14 = 2;
	Var0.f_15 = 2;
	Var0.f_16 = 3;
	Var0.f_19 = 3;
	Var0.f_20 = 1;
	Var0.f_21 = 3;
	Var0.f_22 = 3;
	Var0 = { 0f, 0f, 0f };
	Var0.f_3 = *uParam0;
	Var0.f_4 = 21030;
	Var0.f_8 = 4;
	Var0.f_19 = 3;
	Var0.f_20 = 2;
	Var0.f_21 = 3;
	Var0.f_22 = 3;
	Var0.f_13 = 3;
	Var0.f_7 = 500;
	_NAMESPACE29::_0x66F9EB44342BB4C5(Global_35, &Var0);
}

char* func_301(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return "show_nbx_cancan";
		case 9:
			return "show_nbx_bulletCatch";
		case 6:
			return "show_nbx_cancan_02";
		case 11:
			return "show_nbx_escapeNoose";
		case 10:
			return "show_nbx_escapeArtist";
		case 12:
			return "show_nbx_fireBreath_01";
		case 13:
			return "show_nbx_fireDance_01";
		case 14:
			return "show_nbx_fireDance_02";
		case 15:
			return "show_nbx_flexFight";
		case 16:
			return "show_nbx_snakeDance_01";
		case 17:
			return "show_nbx_snakeDance_02";
		case 18:
			return "show_nbx_strongWoman";
		case 19:
			return "show_nbx_swordDance_01";
		case 8:
			return "show_nbx_bigband_02";
		case 7:
			return "show_nbx_bigband";
		case 20:
			return "show_nbx_oddFellows";
		case 36:
			return "show_movie_magic_lantern";
		case 37:
			return "show_movie_magic_lantern";
		case 38:
			return "show_movie_magic_lantern";
		case 21:
			return "show_movie_magic_lantern";
		case 22:
			return "show_movie_magic_lantern";
		case 23:
			return "show_movie_magic_lantern";
		case 24:
			return "show_movie_magic_lantern";
		case 25:
			return "show_movie_magic_lantern";
		case 26:
			return "show_movie_magic_lantern";
		case 27:
			return "show_movie_magic_lantern";
		case 28:
			return "show_movie_magic_lantern";
		case 31:
			return "show_movie_magic_lantern";
		case 32:
			return "show_movie_magic_lantern";
		case 33:
			return "show_movie_magic_lantern";
		case 34:
			return "show_movie_magic_lantern";
		case 35:
			return "show_movie_magic_lantern";
		case 0:
			return "generic_show_mc";
		default:
			break;
	}
	return "";
}

char* func_302(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PL_OUTRO";
		case 1:
			return "PL_OUTRO";
		case 2:
			return "PL_OUTRO";
		case 3:
			return "PL_OUTRO";
		case 4:
			return "PL_OUTRO";
	}
	return "";
}

int func_303(int iParam0, int iParam1, bool bParam2)
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

int func_304(int iParam0)
{
	if (func_456(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return 0;
}

int func_305(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_457(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

int func_306(int iParam0, int iParam1)
{
	int iVar0;

	if (func_75() == 0)
	{
		return 0;
	}
	func_303(iParam0, 0, 0);
	if (func_304(iParam0))
	{
		iVar0 = ENTITY::_0xF7424890E4A094C0(iParam0, 0);
		if (iVar0 != 0)
		{
			return OBJECT::_0x0943113E02322164(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar0), iParam1);
		}
	}
	return 0;
}

void func_307(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_304(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || iParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, iParam1, iParam3);
	}
}

void func_308(int iParam0, int iParam1)
{
	if (func_304(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 2 || iParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 2);
		}
	}
}

void func_309(int iParam0, int iParam1)
{
	if (func_304(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || iParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
	}
}

void func_310(int iParam0, int iParam1)
{
	if (func_304(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 0 || iParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 0);
		}
	}
}

int func_311()
{
	return 1;
}

bool func_312(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_458(iParam1) || !func_458(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

int func_313(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_314(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_459(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_315(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_316(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_317(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_318(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_319(int iParam0, int iParam1)
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

float func_320(float fParam0, float fParam1, float fParam2)
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

float func_321(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

int func_322(int iParam0)
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

int func_323(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

int func_324(int iParam0)
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

void func_325(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_460(iParam0, iParam1))
		{
			if (func_461(iParam0, iParam1))
			{
				if (func_462(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_463(iParam0);
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

void func_326(int iParam0, int iParam1, bool bParam2)
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

void func_327(int iParam0, bool bParam1)
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

void func_328(int iParam0, int iParam1)
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

int func_329(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 8;
						case 1:
							return 2;
						case 2:
							return 2;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
						default:
							break;
					}
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 6;
						case 1:
							return 2;
						case 2:
							return 2;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
						default:
							break;
					}
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 8;
						case 1:
							return 2;
						case 2:
							return 2;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
						default:
							break;
					}
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 6;
						case 1:
							return 2;
						case 2:
							return 2;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
						default:
							break;
					}
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 6;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
						default:
							break;
					}
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 6;
						case 1:
							return 2;
						case 2:
							return 2;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
						default:
							break;
					}
					break;
			}
			break;
		case 18:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 6;
						case 1:
							return 2;
						case 2:
							return 2;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
						default:
							break;
					}
					break;
			}
			break;
		case 19:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 20:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 21:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 22:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 24:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 6;
						case 1:
							return 2;
						case 2:
							return 2;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
						default:
							break;
					}
					break;
			}
			break;
		case 25:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 6;
						case 1:
							return 2;
						case 2:
							return 2;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
						default:
							break;
					}
					break;
			}
			break;
		case 26:
			return 0;
		case 27:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 28:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 1;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 29:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 30:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						case 1:
							return 1;
						case 2:
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 32:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 6;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 33:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 6;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 2;
						default:
							break;
					}
					break;
			}
			break;
		case 34:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 12;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
						default:
							break;
					}
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 6;
						case 1:
							return 2;
						case 2:
							return 2;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
						default:
							break;
					}
					break;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return 6;
						case 1:
							return 2;
						case 2:
							return 2;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return 4;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0;
}

var func_330(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_464(4);
		case 1:
			return func_464(5);
		case 2:
			return func_464(6);
		case 3:
			return func_464(7);
		default:
			break;
	}
	return func_464(4);
}

var func_331(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_464(14);
		default:
			break;
	}
	return func_464(14);
}

var func_332(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_464(16);
		default:
			break;
	}
	return func_464(16);
}

var func_333(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_464(0);
		case 1:
			return func_464(1);
		default:
			break;
	}
	return func_464(0);
}

var func_334(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_464(8);
		case 1:
			return func_464(9);
		case 2:
			return func_464(10);
		case 3:
			return func_464(11);
		default:
			break;
	}
	return func_464(8);
}

var func_335(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_464(15);
		default:
			break;
	}
	return func_464(15);
}

var func_336(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_464(17);
		default:
			break;
	}
	return func_464(17);
}

var func_337(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_464(2);
		case 1:
			return func_464(3);
		default:
			break;
	}
	return func_464(2);
}

var func_338(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_465(8);
		case 1:
			return func_465(9);
		case 2:
			return func_465(12);
		case 3:
			return func_465(13);
		case 4:
			return func_465(14);
		case 5:
			return func_465(15);
		case 6:
			return func_465(18);
		case 7:
			return func_465(19);
		default:
			break;
	}
	return func_465(8);
}

var func_339(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_465(26);
		case 1:
			return func_465(27);
		default:
			break;
	}
	return func_465(26);
}

var func_340(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_465(30);
		case 1:
			return func_465(31);
		default:
			break;
	}
	return func_465(30);
}

var func_341(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_465(0);
		case 1:
			return func_465(1);
		case 2:
			return func_465(4);
		case 3:
			return func_465(5);
		default:
			break;
	}
	return func_465(0);
}

var func_342(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_465(10);
		case 1:
			return func_465(11);
		case 2:
			return func_465(16);
		case 3:
			return func_465(17);
		case 4:
			return func_465(20);
		case 5:
			return func_465(21);
		default:
			break;
	}
	return func_465(10);
}

var func_343(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_465(28);
		case 1:
			return func_465(29);
		default:
			break;
	}
	return func_465(28);
}

var func_344(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_465(32);
		case 1:
			return func_465(33);
		default:
			break;
	}
	return func_465(32);
}

var func_345(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_465(2);
		case 1:
			return func_465(3);
		case 2:
			return func_465(6);
		case 3:
			return func_465(7);
		default:
			break;
	}
	return func_465(2);
}

var func_346(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_466(2);
		case 1:
			return func_466(3);
		case 2:
			return func_466(4);
		case 3:
			return func_466(5);
		default:
			break;
	}
	return func_466(2);
}

var func_347(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_466(7);
		default:
			break;
	}
	return func_466(7);
}

var func_348(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_466(8);
		default:
			break;
	}
	return func_466(8);
}

var func_349(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_466(0);
		case 1:
			return func_466(1);
		default:
			break;
	}
	return func_466(0);
}

var func_350(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_467(4);
		case 1:
			return func_467(5);
		case 2:
			return func_467(6);
		case 3:
			return func_467(7);
		case 4:
			return func_467(8);
		case 5:
			return func_467(9);
		case 6:
			return func_467(10);
		case 7:
			return func_467(11);
		default:
			break;
	}
	return func_467(4);
}

var func_351(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_467(14);
		case 1:
			return func_467(15);
		default:
			break;
	}
	return func_467(14);
}

var func_352(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_467(16);
		case 1:
			return func_467(17);
		default:
			break;
	}
	return func_467(16);
}

var func_353(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_467(0);
		case 1:
			return func_467(1);
		case 2:
			return func_467(2);
		case 3:
			return func_467(3);
		default:
			break;
	}
	return func_467(0);
}

var func_354(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_468(8);
		case 1:
			return func_468(9);
		case 2:
			return func_468(12);
		case 3:
			return func_468(13);
		case 4:
			return func_468(16);
		case 5:
			return func_468(17);
		default:
			break;
	}
	return func_468(8);
}

var func_355(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_468(24);
		case 1:
			return func_468(25);
		default:
			break;
	}
	return func_468(24);
}

var func_356(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_468(28);
		case 1:
			return func_468(29);
		default:
			break;
	}
	return func_468(28);
}

var func_357(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_468(0);
		case 1:
			return func_468(1);
		case 2:
			return func_468(4);
		case 3:
			return func_468(5);
		default:
			break;
	}
	return func_468(0);
}

var func_358(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_468(10);
		case 1:
			return func_468(11);
		case 2:
			return func_468(14);
		case 3:
			return func_468(15);
		case 4:
			return func_468(18);
		case 5:
			return func_468(19);
		default:
			break;
	}
	return func_468(10);
}

var func_359(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_468(26);
		case 1:
			return func_468(27);
		default:
			break;
	}
	return func_468(26);
}

var func_360(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_468(30);
		case 1:
			return func_468(31);
		default:
			break;
	}
	return func_468(30);
}

var func_361(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_468(2);
		case 1:
			return func_468(3);
		case 2:
			return func_468(6);
		case 3:
			return func_468(7);
		default:
			break;
	}
	return func_468(2);
}

var func_362(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_469(11);
		case 1:
			return func_469(15);
		case 2:
			return func_469(19);
		default:
			break;
	}
	return func_469(11);
}

var func_363(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_469(27);
		default:
			break;
	}
	return func_469(27);
}

var func_364(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_469(31);
		default:
			break;
	}
	return func_469(31);
}

var func_365(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_469(3);
		case 1:
			return func_469(7);
		default:
			break;
	}
	return func_469(3);
}

var func_366(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_469(10);
		case 1:
			return func_469(14);
		case 2:
			return func_469(18);
		default:
			break;
	}
	return func_469(10);
}

var func_367(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_469(26);
		default:
			break;
	}
	return func_469(26);
}

var func_368(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_469(30);
		default:
			break;
	}
	return func_469(30);
}

var func_369(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_469(2);
		case 1:
			return func_469(6);
		default:
			break;
	}
	return func_469(2);
}

var func_370(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_469(9);
		case 1:
			return func_469(13);
		case 2:
			return func_469(17);
		default:
			break;
	}
	return func_469(9);
}

var func_371(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_469(25);
		default:
			break;
	}
	return func_469(25);
}

var func_372(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_469(29);
		default:
			break;
	}
	return func_469(29);
}

var func_373(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_469(1);
		case 1:
			return func_469(5);
		default:
			break;
	}
	return func_469(0);
}

var func_374(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_469(8);
		case 1:
			return func_469(12);
		case 2:
			return func_469(16);
		default:
			break;
	}
	return func_469(8);
}

var func_375(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_469(24);
		default:
			break;
	}
	return func_469(24);
}

var func_376(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_469(28);
		default:
			break;
	}
	return func_469(28);
}

var func_377(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_469(0);
		case 1:
			return func_469(4);
		default:
			break;
	}
	return func_469(0);
}

var func_378(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_470(4);
		case 1:
			return func_470(6);
		case 2:
			return func_470(8);
		default:
			break;
	}
	return func_470(4);
}

var func_379(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_470(12);
		default:
			break;
	}
	return func_470(12);
}

var func_380(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_470(14);
		default:
			break;
	}
	return func_470(14);
}

var func_381(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_470(0);
		case 1:
			return func_470(2);
		default:
			break;
	}
	return func_470(0);
}

var func_382(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_470(5);
		case 1:
			return func_470(7);
		case 2:
			return func_470(9);
		default:
			break;
	}
	return func_470(5);
}

var func_383(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_470(13);
		default:
			break;
	}
	return func_470(13);
}

var func_384(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_470(15);
		default:
			break;
	}
	return func_470(15);
}

var func_385(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_470(1);
		case 1:
			return func_470(3);
		default:
			break;
	}
	return func_470(1);
}

var func_386(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_471(56);
		case 1:
			return func_471(70);
		case 2:
			return func_471(84);
		default:
			break;
	}
	return func_471(56);
}

var func_387(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_471(0);
		default:
			break;
	}
	return func_471(0);
}

var func_388(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_471(14);
		default:
			break;
	}
	return func_471(14);
}

var func_389(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_471(28);
		case 1:
			return func_471(42);
		default:
			break;
	}
	return func_471(42);
}

var func_390(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_471(57);
		case 1:
			return func_471(58);
		case 2:
			return func_471(71);
		case 3:
			return func_471(72);
		case 4:
			return func_471(85);
		case 5:
			return func_471(86);
		default:
			break;
	}
	return func_471(57);
}

var func_391(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_471(1);
		case 1:
			return func_471(2);
		default:
			break;
	}
	return func_471(1);
}

var func_392(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_471(15);
		case 1:
			return func_471(16);
		default:
			break;
	}
	return func_471(15);
}

var func_393(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_471(29);
		case 1:
			return func_471(30);
		case 2:
			return func_471(43);
		case 3:
			return func_471(44);
		default:
			break;
	}
	return func_471(43);
}

var func_394(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_471(59);
		case 1:
			return func_471(60);
		case 2:
			return func_471(73);
		case 3:
			return func_471(74);
		case 4:
			return func_471(87);
		case 5:
			return func_471(88);
		default:
			break;
	}
	return func_471(59);
}

var func_395(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_471(3);
		case 1:
			return func_471(4);
		default:
			break;
	}
	return func_471(3);
}

var func_396(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_471(17);
		case 1:
			return func_471(18);
		default:
			break;
	}
	return func_471(17);
}

var func_397(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_471(31);
		case 1:
			return func_471(32);
		case 2:
			return func_471(45);
		case 3:
			return func_471(46);
		default:
			break;
	}
	return func_471(42);
}

var func_398(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_471(63);
		case 1:
			return func_471(77);
		case 2:
			return func_471(91);
		default:
			break;
	}
	return func_471(63);
}

var func_399(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_471(7);
		default:
			break;
	}
	return func_471(7);
}

var func_400(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_471(21);
		default:
			break;
	}
	return func_471(21);
}

var func_401(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_471(35);
		case 1:
			return func_471(49);
		default:
			break;
	}
	return func_471(35);
}

var func_402(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_471(62);
		case 1:
			return func_471(76);
		case 2:
			return func_471(90);
		default:
			break;
	}
	return func_471(62);
}

var func_403(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_471(6);
		default:
			break;
	}
	return func_471(6);
}

var func_404(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_471(20);
		default:
			break;
	}
	return func_471(20);
}

var func_405(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_471(34);
		case 1:
			return func_471(48);
		default:
			break;
	}
	return func_471(34);
}

var func_406(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_471(61);
		case 1:
			return func_471(75);
		case 2:
			return func_471(89);
		default:
			break;
	}
	return func_471(61);
}

var func_407(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_471(5);
		default:
			break;
	}
	return func_471(5);
}

var func_408(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_471(19);
		default:
			break;
	}
	return func_471(19);
}

var func_409(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_471(33);
		case 1:
			return func_471(47);
		default:
			break;
	}
	return func_471(33);
}

var func_410(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_471(65);
		case 1:
			return func_471(79);
		case 2:
			return func_471(93);
		default:
			break;
	}
	return func_471(65);
}

var func_411(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_471(37);
		case 1:
			return func_471(51);
		default:
			break;
	}
	return func_471(37);
}

var func_412(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_471(64);
		case 1:
			return func_471(78);
		case 2:
			return func_471(92);
		default:
			break;
	}
	return func_471(64);
}

var func_413(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_471(8);
		default:
			break;
	}
	return func_471(8);
}

var func_414(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_471(22);
		default:
			break;
	}
	return func_471(22);
}

var func_415(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_471(36);
		case 1:
			return func_471(50);
		default:
			break;
	}
	return func_471(36);
}

var func_416(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_471(66);
		case 1:
			return func_471(67);
		case 2:
			return func_471(80);
		case 3:
			return func_471(81);
		case 4:
			return func_471(94);
		case 5:
			return func_471(95);
		default:
			break;
	}
	return func_471(66);
}

var func_417(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_471(10);
		case 1:
			return func_471(11);
		default:
			break;
	}
	return func_471(10);
}

var func_418(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_471(24);
		case 1:
			return func_471(25);
		default:
			break;
	}
	return func_471(24);
}

var func_419(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_471(38);
		case 1:
			return func_471(39);
		case 2:
			return func_471(52);
		case 3:
			return func_471(53);
		default:
			break;
	}
	return func_471(38);
}

var func_420(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_471(68);
		case 1:
			return func_471(69);
		case 2:
			return func_471(82);
		case 3:
			return func_471(83);
		case 4:
			return func_471(96);
		case 5:
			return func_471(97);
		default:
			break;
	}
	return func_471(68);
}

var func_421(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_471(12);
		case 1:
			return func_471(13);
		default:
			break;
	}
	return func_471(12);
}

var func_422(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_471(26);
		case 1:
			return func_471(27);
		default:
			break;
	}
	return func_471(26);
}

var func_423(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_471(40);
		case 1:
			return func_471(41);
		case 2:
			return func_471(54);
		case 3:
			return func_471(55);
		default:
			break;
	}
	return func_471(40);
}

var func_424(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_471(109);
		case 1:
			return func_471(110);
		case 2:
			return func_471(111);
		default:
			break;
	}
	return func_471(109);
}

var func_425(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_471(98);
		default:
			break;
	}
	return func_471(98);
}

var func_426(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_471(99);
		default:
			break;
	}
	return func_471(99);
}

var func_427(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_471(102);
		case 1:
			return func_471(103);
		default:
			break;
	}
	return func_471(102);
}

var func_428(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_471(108);
		default:
			break;
	}
	return func_471(108);
}

var func_429(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_471(100);
		case 1:
			return func_471(101);
		default:
			break;
	}
	return func_471(100);
}

var func_430(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_471(112);
		case 1:
			return func_471(113);
		case 2:
			return func_471(114);
		default:
			break;
	}
	return func_471(112);
}

var func_431(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_471(104);
		case 1:
			return func_471(105);
		default:
			break;
	}
	return func_471(104);
}

var func_432(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_471(115);
		case 1:
			return func_471(116);
		case 2:
			return func_471(117);
		default:
			break;
	}
	return func_471(115);
}

var func_433(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_471(106);
		case 1:
			return func_471(107);
		default:
			break;
	}
	return func_471(106);
}

var func_434(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_471(122);
		case 1:
			return func_471(124);
		case 2:
			return func_471(126);
		case 3:
			return func_471(128);
		case 4:
			return func_471(130);
		case 5:
			return func_471(132);
		default:
			break;
	}
	return func_471(122);
}

var func_435(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_471(118);
		case 1:
			return func_471(120);
		default:
			break;
	}
	return func_471(118);
}

var func_436(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_471(123);
		case 1:
			return func_471(125);
		case 2:
			return func_471(127);
		case 3:
			return func_471(129);
		case 4:
			return func_471(131);
		case 5:
			return func_471(133);
		default:
			break;
	}
	return func_471(123);
}

var func_437(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_471(119);
		case 1:
			return func_471(121);
		default:
			break;
	}
	return func_471(119);
}

var func_438(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_471(138);
		case 1:
			return func_471(139);
		case 2:
			return func_471(140);
		case 3:
			return func_471(141);
		case 4:
			return func_471(142);
		case 5:
			return func_471(143);
		case 6:
			return func_471(144);
		case 7:
			return func_471(145);
		case 8:
			return func_471(146);
		case 9:
			return func_471(147);
		case 10:
			return func_471(148);
		case 11:
			return func_471(149);
		default:
			break;
	}
	return func_471(138);
}

var func_439(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_471(134);
		case 1:
			return func_471(135);
		case 2:
			return func_471(136);
		case 3:
			return func_471(137);
		default:
			break;
	}
	return func_471(134);
}

var func_440(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_472(6);
		case 1:
			return func_472(7);
		case 2:
			return func_472(9);
		case 3:
			return func_472(10);
		case 4:
			return func_472(12);
		case 5:
			return func_472(13);
		default:
			break;
	}
	return func_472(6);
}

var func_441(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_472(16);
		case 1:
			return func_472(19);
		default:
			break;
	}
	return func_472(16);
}

var func_442(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_472(17);
		case 1:
			return func_472(20);
		default:
			break;
	}
	return func_472(17);
}

var func_443(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_472(0);
		case 1:
			return func_472(1);
		case 2:
			return func_472(3);
		case 3:
			return func_472(4);
		default:
			break;
	}
	return func_472(0);
}

var func_444(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_472(6);
		case 1:
			return func_472(8);
		case 2:
			return func_472(9);
		case 3:
			return func_472(11);
		case 4:
			return func_472(12);
		case 5:
			return func_472(14);
		default:
			break;
	}
	return func_472(6);
}

var func_445(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_472(0);
		case 1:
			return func_472(2);
		case 2:
			return func_472(3);
		case 3:
			return func_472(5);
		default:
			break;
	}
	return func_472(0);
}

int func_446(int iParam0)
{
	if (iParam0 <= 26)
	{
		return 30;
	}
	else if (iParam0 >= 27 && iParam0 <= 32)
	{
		return 27;
	}
	else if (iParam0 >= 33 && iParam0 <= 38)
	{
		return 29;
	}
	else if (iParam0 >= 39 && iParam0 <= 56)
	{
		return 28;
	}
	return 23;
}

int func_447(int iParam0)
{
	if (iParam0 <= 26)
	{
		return 34;
	}
	else if (iParam0 >= 27 && iParam0 <= 32)
	{
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) >= 50)
		{
			return 32;
		}
		else
		{
			return 33;
		}
	}
	else if (iParam0 >= 33 && iParam0 <= 54)
	{
		return 34;
	}
	return 19;
}

int func_448(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam1 == 2104565373 && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iParam0))
			{
				return 1;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1) == 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_449(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		PED::SET_PED_CAN_BE_TARGETTED(iParam0, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, 623901053);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
	}
}

bool func_450(int iParam0)
{
	return func_278(iParam0, 2);
}

void func_451(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		if (((*Global_1945938)[iParam0 /*18*/])->f_5 == 5 && !func_278(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, 0);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
		}
	}
}

void func_452(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
	}
}

void func_453(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 || iParam1);
}

void func_454(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 - (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1));
}

void func_455(var uParam0, var uParam1, var uParam2, var uParam3)
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

bool func_456(int iParam0)
{
	return iParam0 != 0;
}

int func_457(int iParam0)
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

int func_458(int iParam0)
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
	iVar0 = func_318(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_317(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_316(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_314(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return 0;
	}
	iVar4 = func_313(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_315(iParam0);
	if (iVar5 < 1 || iVar5 > func_319(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_459(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_460(int iParam0, int iParam1)
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

int func_461(int iParam0, int iParam1)
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

bool func_462(int iParam0, int iParam1)
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
	if (!func_460(iParam0, iVar0))
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

void func_463(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

char* func_464(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "seated_loop_female0_enthralled_b";
		case 1:
			return "seated_loop_female1_enthralled_b";
		case 2:
			return "seated_loop_female0_waiting_a";
		case 3:
			return "seated_loop_female1_waiting_a";
		case 4:
			return "seated_loop_male1_enthralled_b";
		case 5:
			return "seated_loop_male2_enthralled_b";
		case 6:
			return "seated_loop_male3_enthralled_b";
		case 7:
			return "seated_loop_male4_enthralled_b";
		case 8:
			return "seated_loop_male1_waiting_a";
		case 9:
			return "seated_loop_male2_waiting_a";
		case 10:
			return "seated_loop_male3_waiting_a";
		case 11:
			return "seated_loop_male4_waiting_a";
		case 12:
			return "railing_loop_male0_enthralled_b";
		case 13:
			return "railing_loop_male0_waiting_a";
		case 14:
			return "railingl_male0_enthralled_b";
		case 15:
			return "railingl_male0_waiting_a";
		case 16:
			return "railingr_male5_enthralled_b";
		case 17:
			return "railingr_male5_waiting_a";
		default:
			break;
	}
	return "seated_loop_male1_waiting_a";
}

char* func_465(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "seated_loop_female0_regular_a";
		case 1:
			return "seated_loop_female0_regular_b";
		case 2:
			return "seated_loop_female0_rowdy_b";
		case 3:
			return "seated_loop_female0_rowdy_c";
		case 4:
			return "seated_loop_female1_regular_a";
		case 5:
			return "seated_loop_female1_regular_b";
		case 6:
			return "seated_loop_female1_rowdy_b";
		case 7:
			return "seated_loop_female1_rowdy_c";
		case 8:
			return "seated_loop_male1_regular_a";
		case 9:
			return "seated_loop_male1_regular_b";
		case 10:
			return "seated_loop_male1_rowdy_b";
		case 11:
			return "seated_loop_male1_rowdy_c";
		case 12:
			return "seated_loop_male2_regular_a";
		case 13:
			return "seated_loop_male2_regular_b";
		case 14:
			return "seated_loop_male3_regular_a";
		case 15:
			return "seated_loop_male3_regular_b";
		case 16:
			return "seated_loop_male3_rowdy_b";
		case 17:
			return "seated_loop_male3_rowdy_c";
		case 18:
			return "seated_loop_male4_regular_a";
		case 19:
			return "seated_loop_male4_regular_b";
		case 20:
			return "seated_loop_male4_rowdy_b";
		case 21:
			return "seated_loop_male4_rowdy_c";
		case 22:
			return "railing_loop_male0_regular_a";
		case 23:
			return "railing_loop_male0_regular_b";
		case 24:
			return "railing_loop_male0_rowdy_b";
		case 25:
			return "railing_loop_male0_rowdy_c";
		case 26:
			return "railingl_male0_regular_a";
		case 27:
			return "railingl_male0_regular_b";
		case 28:
			return "railingl_male0_rowdy_b";
		case 29:
			return "railingl_male0_rowdy_c";
		case 30:
			return "railingr_male5_regular_a";
		case 31:
			return "railingr_male5_regular_b";
		case 32:
			return "railingr_male5_rowdy_b";
		case 33:
			return "railingr_male5_rowdy_c";
		default:
			break;
	}
	return "seated_loop_male1_regular_a";
}

char* func_466(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "seated_loop_female0_musical_b";
		case 1:
			return "seated_loop_female1_musical_b";
		case 2:
			return "seated_loop_mail0_musical_b";
		case 3:
			return "seated_loop_male2_musical_b";
		case 4:
			return "seated_loop_male3_musical_b";
		case 5:
			return "seated_loop_male4_musical_b";
		case 6:
			return "railing_loop_male1_musical_b";
		case 7:
			return "railingl_male1_musical_b";
		case 8:
			return "railingr_male5_musical_b";
		default:
			break;
	}
	return "seated_loop_mail0_musical_b";
}

char* func_467(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "seated_loop_female0_dancing_b";
		case 1:
			return "seated_loop_female0_dancing_c";
		case 2:
			return "seated_loop_female1_dancing_b";
		case 3:
			return "seated_loop_female1_dancing_c";
		case 4:
			return "seated_loop_male0_dancing_b";
		case 5:
			return "seated_loop_male0_dancing_c";
		case 6:
			return "seated_loop_male2_dancing_b";
		case 7:
			return "seated_loop_male2_dancing_c";
		case 8:
			return "seated_loop_male3_dancing_b";
		case 9:
			return "seated_loop_male3_dancing_c";
		case 10:
			return "seated_loop_male4_dancing_b";
		case 11:
			return "seated_loop_male4_dancing_c";
		case 12:
			return "railing_loop_male1_dancing_b";
		case 13:
			return "railing_loop_male1_dancing_c";
		case 14:
			return "railingl_male1_dancing_b";
		case 15:
			return "railingl_male1_dancing_c";
		case 16:
			return "railingr_male5_dancing_b";
		case 17:
			return "railingr_male5_dancing_c";
		default:
			break;
	}
	return "seated_loop_male0_dancing_b";
}

char* func_468(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "seated_loop_female0_comedic_b";
		case 1:
			return "seated_loop_female0_comedic_c";
		case 2:
			return "seated_loop_female0_displeased_b";
		case 3:
			return "seated_loop_female0_displeased_c";
		case 4:
			return "seated_loop_female1_comedic_b";
		case 5:
			return "seated_loop_female1_comedic_c";
		case 6:
			return "seated_loop_female1_displeased_b";
		case 7:
			return "seated_loop_female1_displeased_c";
		case 8:
			return "seated_loop_male0_comedic_b";
		case 9:
			return "seated_loop_male0_comedic_c";
		case 10:
			return "seated_loop_male0_displeased_b";
		case 11:
			return "seated_loop_male0_displeased_c";
		case 12:
			return "seated_loop_male2_comedic_b";
		case 13:
			return "seated_loop_male2_comedic_c";
		case 14:
			return "seated_loop_male2_displeased_b";
		case 15:
			return "seated_loop_male2_displeased_c";
		case 16:
			return "seated_loop_male3_comedic_b";
		case 17:
			return "seated_loop_male3_comedic_c";
		case 18:
			return "seated_loop_male3_displeased_b";
		case 19:
			return "seated_loop_male3_displeased_c";
		case 20:
			return "railing_loop_male1_comedic_b";
		case 21:
			return "railing_loop_male1_comedic_c";
		case 22:
			return "railing_loop_male1_displeased_b";
		case 23:
			return "railing_loop_male1_displeased_c";
		case 24:
			return "railingl_male1_comedic_b";
		case 25:
			return "railingl_male1_comedic_c";
		case 26:
			return "railingl_male1_displeased_b";
		case 27:
			return "railingl_male1_displeased_c";
		case 28:
			return "railingr_male4_comedic_b";
		case 29:
			return "railingr_male4_comedic_c";
		case 30:
			return "railingr_male4_displeased_b";
		case 31:
			return "railingr_male4_displeased_c";
		default:
			break;
	}
	return "seated_loop_male0_comedic_b";
}

char* func_469(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "seated_loop_female0_applause_med_b";
		case 1:
			return "seated_loop_female0_applause_small_a";
		case 2:
			return "seated_loop_female0_suspense_neg_b";
		case 3:
			return "seated_loop_female0_suspense_pos_b";
		case 4:
			return "seated_loop_female1_applause_med_b";
		case 5:
			return "seated_loop_female1_applause_small_a";
		case 6:
			return "seated_loop_female1_suspense_neg_b";
		case 7:
			return "seated_loop_female1_suspense_pos_b";
		case 8:
			return "seated_loop_male0_applause_med_b";
		case 9:
			return "seated_loop_male0_applause_small_a";
		case 10:
			return "seated_loop_male0_suspense_neg_b";
		case 11:
			return "seated_loop_male0_suspense_pos_b";
		case 12:
			return "seated_loop_male2_applause_med_b";
		case 13:
			return "seated_loop_male2_applause_small_a";
		case 14:
			return "seated_loop_male2_suspense_neg_b";
		case 15:
			return "seated_loop_male2_suspense_pos_b";
		case 16:
			return "seated_loop_male3_applause_med_b";
		case 17:
			return "seated_loop_male3_applause_small_a";
		case 18:
			return "seated_loop_male3_suspense_neg_b";
		case 19:
			return "seated_loop_male3_suspense_pos_b";
		case 20:
			return "railing_loop_male1_applause_med_b";
		case 21:
			return "railing_loop_male1_applause_small_a";
		case 22:
			return "railing_loop_male1_suspense_neg_b";
		case 23:
			return "railing_loop_male1_suspense_pos_b";
		case 24:
			return "railingl_male1_applause_med_b";
		case 25:
			return "railingl_male1_applause_small_a";
		case 26:
			return "railingl_male1_suspense_neg_b";
		case 27:
			return "railingl_male1_suspense_pos_b";
		case 28:
			return "railingr_male4_applause_med_b";
		case 29:
			return "railingr_male4_applause_small_a";
		case 30:
			return "railingr_male4_suspense_neg_b";
		case 31:
			return "railingr_male4_suspense_pos_b";
		default:
			break;
	}
	return "seated_loop_male0_applause_med_b";
}

char* func_470(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "seated_loop_female0_applause_big_c";
		case 1:
			return "seated_loop_female0_horrified_c";
		case 2:
			return "seated_loop_female2_applause_big_c";
		case 3:
			return "seated_loop_female2_horrified_c";
		case 4:
			return "seated_loop_male0_applause_big_c";
		case 5:
			return "seated_loop_male0_horrified_c";
		case 6:
			return "seated_loop_male2_applause_big_c";
		case 7:
			return "seated_loop_male2_horrified_c";
		case 8:
			return "seated_loop_male3_applause_big_c";
		case 9:
			return "seated_loop_male3_horrified_c";
		case 10:
			return "railing_loop_male1_applause_big_c";
		case 11:
			return "railing_loop_male1_horrified_c";
		case 12:
			return "railingl_male1_applause_big_c";
		case 13:
			return "railingl_male1_horrified_c";
		case 14:
			return "railingr_male4_applause_big_c";
		case 15:
			return "railingr_male4_horrified_c";
		default:
			break;
	}
	return "seated_loop_male0_applause_big_c";
}

char* func_471(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "railingl_male0_applause_quick";
		case 1:
			return "railingl_male0_applause_standing_01";
		case 2:
			return "railingl_male0_applause_standing_02";
		case 3:
			return "railingl_male0_boo_high";
		case 4:
			return "railingl_male0_boo_low";
		case 5:
			return "railingl_male0_horrified_amused";
		case 6:
			return "railingl_male0_horrified_high";
		case 7:
			return "railingl_male0_horrified_low";
		case 8:
			return "railingl_male0_impressed_high";
		case 9:
			return "railingl_male0_impressed_low";
		case 10:
			return "railingl_male0_laugh";
		case 11:
			return "railingl_male0_laugh_02";
		case 12:
			return "railingl_male0_raunchy";
		case 13:
			return "railingl_male0_raunchy_02";
		case 14:
			return "railingr_male4_applause_quick";
		case 15:
			return "railingr_male4_applause_standing_01";
		case 16:
			return "railingr_male4_applause_standing_02";
		case 17:
			return "railingr_male4_boo_high";
		case 18:
			return "railingr_male4_boo_low";
		case 19:
			return "railingr_male4_horrified_amused";
		case 20:
			return "railingr_male4_horrified_high";
		case 21:
			return "railingr_male4_horrified_low";
		case 22:
			return "railingr_male4_impressed_high";
		case 23:
			return "railingr_male4_impressed_low";
		case 24:
			return "railingr_male4_laugh";
		case 25:
			return "railingr_male4_laugh_02";
		case 26:
			return "railingr_male4_raunchy";
		case 27:
			return "railingr_male4_raunchy_02";
		case 28:
			return "seated_loop_female0_applause_quick";
		case 29:
			return "seated_loop_female0_applause_standing_01";
		case 30:
			return "seated_loop_female0_applause_standing_02";
		case 31:
			return "seated_loop_female0_boo_high";
		case 32:
			return "seated_loop_female0_boo_low";
		case 33:
			return "seated_loop_female0_horrified_amused";
		case 34:
			return "seated_loop_female0_horrified_high";
		case 35:
			return "seated_loop_female0_horrified_low";
		case 36:
			return "seated_loop_female0_impressed_high";
		case 37:
			return "seated_loop_female0_impressed_low";
		case 38:
			return "seated_loop_female0_laugh";
		case 39:
			return "seated_loop_female0_laugh_02";
		case 40:
			return "seated_loop_female0_raunchy";
		case 41:
			return "seated_loop_female0_raunchy_02";
		case 42:
			return "seated_loop_female1_applause_quick";
		case 43:
			return "seated_loop_female1_applause_standing_01";
		case 44:
			return "seated_loop_female1_applause_standing_02";
		case 45:
			return "seated_loop_female1_boo_high";
		case 46:
			return "seated_loop_female1_boo_low";
		case 47:
			return "seated_loop_female1_horrified_amused";
		case 48:
			return "seated_loop_female1_horrified_high";
		case 49:
			return "seated_loop_female1_horrified_low";
		case 50:
			return "seated_loop_female1_impressed_high";
		case 51:
			return "seated_loop_female1_impressed_low";
		case 52:
			return "seated_loop_female1_laugh";
		case 53:
			return "seated_loop_female1_laugh_02";
		case 54:
			return "seated_loop_female1_raunchy";
		case 55:
			return "seated_loop_female1_raunchy_02";
		case 56:
			return "seated_loop_male1_applause_quick";
		case 57:
			return "seated_loop_male1_applause_standing_01";
		case 58:
			return "seated_loop_male1_applause_standing_02";
		case 59:
			return "seated_loop_male1_boo_high";
		case 60:
			return "seated_loop_male1_boo_low";
		case 61:
			return "seated_loop_male1_horrified_amused";
		case 62:
			return "seated_loop_male1_horrified_high";
		case 63:
			return "seated_loop_male1_horrified_low";
		case 64:
			return "seated_loop_male1_impressed_high";
		case 65:
			return "seated_loop_male1_impressed_low";
		case 66:
			return "seated_loop_male1_laugh";
		case 67:
			return "seated_loop_male1_laugh_02";
		case 68:
			return "seated_loop_male1_raunchy";
		case 69:
			return "seated_loop_male1_raunchy_02";
		case 70:
			return "seated_loop_male2_applause_quick";
		case 71:
			return "seated_loop_male2_applause_standing_01";
		case 72:
			return "seated_loop_male2_applause_standing_02";
		case 73:
			return "seated_loop_male2_boo_high";
		case 74:
			return "seated_loop_male2_boo_low";
		case 75:
			return "seated_loop_male2_horrified_amused";
		case 76:
			return "seated_loop_male2_horrified_high";
		case 77:
			return "seated_loop_male2_horrified_low";
		case 78:
			return "seated_loop_male2_impressed_high";
		case 79:
			return "seated_loop_male2_impressed_low";
		case 80:
			return "seated_loop_male2_laugh";
		case 81:
			return "seated_loop_male2_laugh_02";
		case 82:
			return "seated_loop_male2_raunchy";
		case 83:
			return "seated_loop_male2_raunchy_02";
		case 84:
			return "seated_loop_male3_applause_quick";
		case 85:
			return "seated_loop_male3_applause_standing_01";
		case 86:
			return "seated_loop_male3_applause_standing_02";
		case 87:
			return "seated_loop_male3_boo_high";
		case 88:
			return "seated_loop_male3_boo_low";
		case 89:
			return "seated_loop_male3_horrified_amused";
		case 90:
			return "seated_loop_male3_horrified_high";
		case 91:
			return "seated_loop_male3_horrified_low";
		case 92:
			return "seated_loop_male3_impressed_high";
		case 93:
			return "seated_loop_male3_impressed_low";
		case 94:
			return "seated_loop_male3_laugh";
		case 95:
			return "seated_loop_male3_laugh_02";
		case 96:
			return "seated_loop_male3_raunchy";
		case 97:
			return "seated_loop_male3_raunchy_02";
		case 98:
			return "railsl_oneshot_male_escapeartistreact_a_male4";
		case 99:
			return "railsr_oneshot_male_escapeartistreact_a_male4";
		case 100:
			return "seated_oneshot_female_escapeartistreact_backward_a_female0";
		case 101:
			return "seated_oneshot_female_escapeartistreact_backward_b_female0";
		case 102:
			return "seated_oneshot_female_escapeartistreact_forward_a_female0";
		case 103:
			return "seated_oneshot_female_escapeartistreact_forward_b_female0";
		case 104:
			return "seated_oneshot_female_escapeartistreact_left_a_female0";
		case 105:
			return "seated_oneshot_female_escapeartistreact_left_b_female0";
		case 106:
			return "seated_oneshot_female_escapeartistreact_right_a_female0";
		case 107:
			return "seated_oneshot_female_escapeartistreact_right_b_female0";
		case 108:
			return "seated_oneshot_male_escapeartistreact_backward_a_male4";
		case 109:
			return "seated_oneshot_male_escapeartistreact_forward_a_male4";
		case 110:
			return "seated_oneshot_male_escapeartistreact_forward_b_male4";
		case 111:
			return "seated_oneshot_male_escapeartistreact_forward_c_male4";
		case 112:
			return "seated_oneshot_male_escapeartistreact_left_a_male4";
		case 113:
			return "seated_oneshot_male_escapeartistreact_left_b_male4";
		case 114:
			return "seated_oneshot_male_escapeartistreact_left_c_male4";
		case 115:
			return "seated_oneshot_male_escapeartistreact_right_a_male4";
		case 116:
			return "seated_oneshot_male_escapeartistreact_right_b_male4";
		case 117:
			return "seated_oneshot_male_escapeartistreact_right_c_male4";
		case 118:
			return "seated_oneshot_female0_hatfire_close_rt_a";
		case 119:
			return "seated_oneshot_female0_hatfire_concerned_rt_a";
		case 120:
			return "seated_oneshot_female1_hatfire_close_rt_a";
		case 121:
			return "seated_oneshot_female1_hatfire_concerned_rt_a";
		case 122:
			return "seated_oneshot_male0_hatfire_close_rt_a";
		case 123:
			return "seated_oneshot_male0_hatfire_concerned_rt_a";
		case 124:
			return "seated_oneshot_male1_hatfire_close_rt_a";
		case 125:
			return "seated_oneshot_male1_hatfire_concerned_rt_a";
		case 126:
			return "seated_oneshot_male2_hatfire_close_rt_a";
		case 127:
			return "seated_oneshot_male2_hatfire_concerned_rt_a";
		case 128:
			return "seated_oneshot_male3_hatfire_close_rt_a";
		case 129:
			return "seated_oneshot_male3_hatfire_concerned_rt_a";
		case 130:
			return "seated_oneshot_male4_hatfire_close_rt_a";
		case 131:
			return "seated_oneshot_male4_hatfire_concerned_rt_a";
		case 132:
			return "seated_oneshot_male5_hatfire_close_rt_a";
		case 133:
			return "seated_oneshot_male5_hatfire_concerned_rt_a";
		case 134:
			return "seated_oneshot_female0_hatfire_laugh_ft_a";
		case 135:
			return "seated_oneshot_female0_hatfire_laugh_ft_b";
		case 136:
			return "seated_oneshot_female1_hatfire_laugh_ft_a";
		case 137:
			return "seated_oneshot_female1_hatfire_laugh_ft_b";
		case 138:
			return "seated_oneshot_male0_hatfire_laugh_ft_a";
		case 139:
			return "seated_oneshot_male0_hatfire_laugh_ft_b";
		case 140:
			return "seated_oneshot_male1_hatfire_laugh_ft_a";
		case 141:
			return "seated_oneshot_male1_hatfire_laugh_ft_b";
		case 142:
			return "seated_oneshot_male2_hatfire_laugh_ft_a";
		case 143:
			return "seated_oneshot_male2_hatfire_laugh_ft_b";
		case 144:
			return "seated_oneshot_male3_hatfire_laugh_ft_a";
		case 145:
			return "seated_oneshot_male3_hatfire_laugh_ft_b";
		case 146:
			return "seated_oneshot_male4_hatfire_laugh_ft_a";
		case 147:
			return "seated_oneshot_male4_hatfire_laugh_ft_b";
		case 148:
			return "seated_oneshot_male5_hatfire_laugh_ft_a";
		case 149:
			return "seated_oneshot_male5_hatfire_laugh_ft_b";
		default:
			break;
	}
	return "seated_loop_male1_applause_quick";
}

char* func_472(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "seated_loop_female0_blocked_a";
		case 1:
			return "seated_loop_female0_blocked_left_a";
		case 2:
			return "seated_loop_female0_blocked_right_a";
		case 3:
			return "seated_loop_female1_blocked_a";
		case 4:
			return "seated_loop_female1_blocked_left_a";
		case 5:
			return "seated_loop_female1_blocked_right_a";
		case 6:
			return "seated_loop_male0_blocked_a";
		case 7:
			return "seated_loop_male0_blocked_left_a";
		case 8:
			return "seated_loop_male0_blocked_right_a";
		case 9:
			return "seated_loop_male2_blocked_a";
		case 10:
			return "seated_loop_male2_blocked_left_a";
		case 11:
			return "seated_loop_male2_blocked_right_a";
		case 12:
			return "seated_loop_male3_blocked_a";
		case 13:
			return "seated_loop_male3_blocked_left_a";
		case 14:
			return "seated_loop_male3_blocked_right_a";
		case 15:
			return "railingl_male1_blocked_a";
		case 16:
			return "railingl_male1_blocked_left_a";
		case 17:
			return "railingl_male1_blocked_right_a";
		case 18:
			return "railingr_male4_blocked_a";
		case 19:
			return "railingr_male4_blocked_left_a";
		case 20:
			return "railingr_male4_blocked_right_a";
		default:
			break;
	}
	return "seated_loop_male0_blocked_a";
}

