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
	char* sLocal_14 = NULL;
	char* sLocal_15 = NULL;
	char* sLocal_16 = NULL;
	char* sLocal_17 = NULL;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = -1;
	var uLocal_26 = 0;
	char* sLocal_27 = NULL;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	struct<108> Local_32 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	bool bLocal_147 = false;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	bool bLocal_150 = false;
	bool bLocal_151 = false;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	bool bLocal_158 = false;
	bool bLocal_159 = false;
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
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	bool bVar6;
	bool bVar7;
	int iVar8;
	bool bVar9;
	float fVar10;
	var uVar11;
	float fVar12;
	bool bVar13;
	bool bVar14;
	char* sVar15;
	float fVar16;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	sLocal_14 = "mech_skin@BUCK_BUTCHER";
	sLocal_15 = "PBL_BASE";
	sLocal_16 = "PBL_DUMP";
	sLocal_17 = "PBL_DROP_IN";
	sLocal_27 = "beat_gang_camp_reminder";
	iLocal_28 = 23;
	iLocal_145 = 1;
	iLocal_146 = -1;
	iLocal_153 = -1;
	iLocal_154 = -1;
	iLocal_155 = -1;
	iLocal_156 = 61;
	iLocal_157 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1(0);
	}
	iVar0 = uScriptParam_0;
	iVar1 = Global_40.f_9.f_11;
	bVar6 = true;
	func_2(&Local_32, iVar0);
	func_3(&(Local_32.f_39));
	func_4();
	Local_32.f_93 = MISC::GET_GAME_TIMER();
	while (true)
	{
		Global_35 = PLAYER::PLAYER_PED_ID();
		bLocal_151 = CAM::_0xD1BA66940E94C547();
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
		if (!PED::IS_PED_INJURED(Global_35) && !iLocal_152)
		{
			ENTITY::FREEZE_ENTITY_POSITION(Global_35, true);
		}
		if (func_5(&iVar8))
		{
			func_1(iVar8);
		}
		func_6(&Local_32);
		func_7();
		PAD::DISABLE_CONTROL_ACTION(0, 2139949496, false);
		PAD::DISABLE_CONTROL_ACTION(0, 613911080, false);
		func_8(0);
		PED::SET_PED_RESET_FLAG(Global_35, 187, true);
		fVar2 = PAD::GET_CONTROL_NORMAL(0, 1301263553);
		fVar3 = PAD::GET_CONTROL_NORMAL(0, -39308912);
		bVar9 = func_9(fVar2, fVar3);
		if (iLocal_145)
		{
			CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
		}
		if (iLocal_29 < 8)
		{
			MISC::_0xA3A8926951471C82();
		}
		if ((iLocal_29 < 10 || bVar6) || bLocal_151)
		{
			HUD::_0xC9CAEAEEC1256E54(-58462683);
		}
		PAD::DISABLE_CONTROL_ACTION(0, -209515122, false);
		if (iLocal_29 < 10 || bLocal_151)
		{
			func_10();
			PED::SET_PED_RESET_FLAG(Global_35, 129, true);
			PED::SET_PED_RESET_FLAG(Global_35, 103, true);
		}
		if (!PED::IS_PED_INJURED(Local_32.f_98) && !TASK::IS_PED_IN_WRITHE(Local_32.f_98))
		{
			PED::_0x06D26A96CA1BCA75(Local_32.f_98, 3, 0f, 0);
			if (iLocal_29 >= 8)
			{
				if (!Local_32.f_38 && !Local_32.f_59)
				{
					if (!func_11(Local_32.f_98, -982327190))
					{
						TASK::TASK_STAND_STILL(Local_32.f_98, -1);
					}
				}
			}
		}
		EVENT::REMOVE_ALL_SHOCKING_EVENTS(false);
		switch (iLocal_29)
		{
			case 0:
				func_12(&Local_32, iVar0, iVar1);
				func_13(iVar0, iVar1);
				if (!Global_1310720->f_27)
				{
					STREAMING::_0x387AD749E3B69B70(Local_32.f_39.f_1, func_14(Local_32.f_39.f_4), 500f, 1);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_32.f_76)))
				{
					TASK::REQUEST_WAYPOINT_RECORDING(&(Local_32.f_76));
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_32.f_84)))
				{
					TASK::REQUEST_WAYPOINT_RECORDING(&(Local_32.f_84));
				}
				if (WATER::_GET_WORLD_WATER_TYPE() != 1)
				{
					if (func_15(Local_32.f_30) == 8)
					{
						WATER::_SET_WORLD_WATER_TYPE(1);
					}
				}
				else if (func_15(Local_32.f_30) == 8)
				{
				}
				else
				{
					WATER::_SET_WORLD_WATER_TYPE(0);
				}
				ENTITY::SET_ENTITY_COORDS(Global_35, Local_32.f_30, false, false, true, true);
				func_16();
				if (func_17())
				{
					func_18(&(Local_32.f_39));
				}
				if (Global_1310720->f_17 >= 0)
				{
					CLOCK::SET_CLOCK_TIME(Global_1310720->f_17, 0, 0);
					Global_1310720->f_17 = -1;
				}
				CLOCK::PAUSE_CLOCK(false, 0);
				if (!func_19() && !func_20(&Global_1935630, 131072))
				{
					func_21(Local_32.f_30, 500f, 0);
					func_22(Local_32.f_30, 500f, 0, 0, 0, 0, 0);
				}
				PED::_0x4759CC730F947C81();
				VEHICLE::_0x1FF00DB43026B12F();
				Local_32.f_98 = 0;
				Local_32.f_99 = 0;
				Local_32.f_100 = { 0f, 0f, 0f };
				Local_32.f_103 = 0f;
				Local_32.f_104 = { 0f, 0f, 0f };
				Local_32.f_107 = 0f;
				func_23(0, &(Local_32.f_100), &(Local_32.f_103));
				func_23(1, &(Local_32.f_104), &(Local_32.f_107));
				if (!Global_1935630->f_12)
				{
					ENTITY::SET_ENTITY_VISIBLE(Global_35, false);
				}
				Global_40.f_9.f_11 = -1;
				iLocal_141 = VOLUME::_CREATE_VOLUME_CYLINDER(Local_32.f_30, 0f, 0f, 0f, 1f, 1f, 20f);
				func_21(Local_32.f_30, 5f, 0);
				GRAPHICS::REMOVE_DECALS_IN_RANGE(Local_32.f_30, 5f);
				POPULATION::_0xB56D41A694E42E86(iLocal_141, 8192, 0, 0, -1, -1, 0);
				POPULATION::_0x18262CAFEBB5FBE1(iLocal_141, 8192, 0, 0, -1, -1, 0);
				iLocal_142 = VOLUME::_CREATE_VOLUME_CYLINDER(Local_32.f_30, 0f, 0f, 0f, 1f, 1f, 20f);
				iLocal_143 = PED::_0x4C39C95AE5DB1329(iLocal_142, 0, 7);
				Local_32.f_93 = MISC::GET_GAME_TIMER();
				iLocal_29 = 1;
				break;
			case 1:
				if (func_24())
				{
					if (!Global_1310720->f_27)
					{
						STREAMING::_0x5A8B01199C3E79C3();
					}
					Local_32.f_30.f_2 = (Local_32.f_30.f_2 - 1f);
					PED::_0x704C908E9C405136(Global_35);
					if (func_25())
					{
						func_26(17, 1108822547, 2, 0, 0);
					}
					iLocal_140 = VOLUME::_CREATE_VOLUME_AGGREGATE();
					VOLUME::_0xBCE668AAF83608BE(iLocal_140, Local_32.f_30, 0f, 0f, 0f, 15f, 15f, 20f);
					VOLUME::_0xBCE668AAF83608BE(iLocal_140, Local_32.f_34, 0f, 0f, 0f, 15f, 15f, 20f);
					POPULATION::_0x2161278C6322F740(4576, 0, 0, -1, -1, 0);
					if (!Global_1310720->f_28 && !func_20(&Global_1935630, 131072))
					{
						PED::_0x9851DE7AEC10B4E1(Local_32.f_30, 5000f, 1, 0);
					}
					POPULATION::_0xB56D41A694E42E86(iLocal_140, 2232831, 0, 0, -1, -1, 0);
					POPULATION::_0x18262CAFEBB5FBE1(iLocal_140, 2232831, 0, 0, -1, -1, 0);
					iLocal_153 = GRAPHICS::_0xFA50F79257745E74(Local_32.f_30, 3.5f, 1, iLocal_156, 0);
					iLocal_154 = GRAPHICS::_0xFA50F79257745E74(Local_32.f_34, 3.5f, 1, iLocal_156, 0);
					iLocal_155 = GRAPHICS::_0xFA50F79257745E74(Local_32.f_30, 0.5f, 2, 2, 0);
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_32.f_76)))
					{
						func_27(Global_35, &(Local_32.f_76), 1, 1061360239, 1053609165, 0, 0, 1);
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_32.f_84)) && !PED::IS_PED_INJURED(Local_32.f_98))
					{
						func_27(Local_32.f_98, &(Local_32.f_84), 1, 1061360239, 1053609165, 0, 0, 1);
					}
					func_28(1, 0, 0);
					if (!func_19())
					{
						if (bLocal_147)
						{
							iLocal_146 = AUDIO::_0x0556C784FA056628("CLOUD_BED", "DEATH_FAIL_RESPAWN_SOUNDS");
							AUDIO::PLAY_STREAM_FRONTEND(iLocal_146);
						}
						if (!func_20(&Global_1935630, 131072))
						{
							AUDIO::TRIGGER_MUSIC_EVENT("RESPAWN_CLOUDS_START");
							iLocal_148 = 1;
						}
					}
					GRAPHICS::_0x9D1B0B5066205692();
					if (!func_29())
					{
						iLocal_29 = 3;
					}
					else
					{
						func_30();
						iLocal_29 = 2;
					}
				}
				break;
			case 2:
				if (func_31())
				{
					iLocal_29 = 3;
				}
				break;
			case 3:
				func_32();
				CAM::DO_SCREEN_FADE_OUT(0);
				Local_32.f_93 = MISC::GET_GAME_TIMER();
				iLocal_29 = 4;
				break;
			case 4:
				if (DLC::GET_IS_LOADING_SCREEN_ACTIVE())
				{
					SCRIPTS::SHUTDOWN_LOADING_SCREEN();
				}
				else
				{
					MISC::_0xA565FAC215CBC77D();
					Global_1310720->f_8 = 1;
					func_33(1024);
					if (func_34(&uVar11))
					{
						func_35();
					}
					func_36(1);
					func_37();
					if (func_38(iVar0) == -1)
					{
					}
					else
					{
						func_39();
					}
					func_40(&(Global_1347343->f_11), 524288);
					if (ANIMSCENE::_0x25557E324489393C(iLocal_30) && ANIMSCENE::_0x477122B8D05E7968(iLocal_30, 1, 0))
					{
						AUDIO::_0xAC84686C06184B0D("Clouds", "DEATH_FAIL_RESPAWN_SCENES");
						ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_30, Local_32.f_27, 0f, 0f, 0f, 2);
						LAW::_0xE9AC8466ABE484BB(1, 0);
						ANIMSCENE::START_ANIM_SCENE(iLocal_30);
						iLocal_29 = 5;
					}
					else
					{
						Local_32.f_93 = MISC::GET_GAME_TIMER();
						ENTITY::SET_ENTITY_VISIBLE(Global_35, true);
						if (Local_32.f_59)
						{
							func_41();
						}
						iLocal_29 = 6;
					}
				}
				break;
			case 5:
				fVar12 = ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_30);
				if (fVar12 >= 1f)
				{
					if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
					{
						CAM::DO_SCREEN_FADE_IN(1000);
					}
					if (!iLocal_149 && (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN()))
					{
						func_42();
						iLocal_149 = 1;
					}
				}
				if (fVar12 >= (ANIMSCENE::_0x49F1D143ADE32656(iLocal_30) * 0.99f))
				{
					if (Local_32.f_59)
					{
						func_41();
					}
					Local_32.f_93 = MISC::GET_GAME_TIMER();
					if (iLocal_146 != -1)
					{
						AUDIO::STOP_STREAM(iLocal_146);
						iLocal_146 = -1;
					}
					iLocal_29 = 6;
				}
				break;
			case 6:
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				if (ANIMSCENE::_0x25557E324489393C(iLocal_30))
				{
					ANIMSCENE::SET_ANIM_SCENE_PAUSED(iLocal_30, 1);
				}
				AUDIO::_0xAC84686C06184B0D("Respawn", "DEATH_FAIL_RESPAWN_SCENES");
				func_43(&Local_32, 0);
				if (func_45(func_44()))
				{
					MISC::_0x59174F1AFE095B5A(433385945, true, false, false, 0f, true);
				}
				MISC::_0xD74ACDF7DB8114AF(1);
				GRAPHICS::_0x503941F65DBA24EC(1);
				if (!Local_32.f_59)
				{
					func_46();
					func_47();
				}
				if (!PED::IS_PED_INJURED(Local_32.f_98))
				{
					PED::SET_PED_RESET_FLAG(Local_32.f_98, 105, true);
				}
				if (Local_32.f_53)
				{
					TASK::TASK_PLAY_ANIM(Global_35, func_48(&Local_32, 1), "RESPAWN_LOOP", 1000f, -4f, -1, 1 | Local_32.f_67, 0, 0, 4 | Local_32.f_69, 0, 0, 0);
					func_49(&Local_32, 1);
				}
				else if (Local_32.f_54)
				{
					TASK::TASK_PLAY_ANIM(Global_35, func_48(&Local_32, 0), "RESPAWN_ACTION", 4f, -2f, -1, Local_32.f_68, 0, 0, 4 | Local_32.f_69, 0, 0, 0);
					func_49(&Local_32, 0);
					Local_32.f_54 = 0;
				}
				else if (Local_32.f_55)
				{
					TASK::TASK_PLAY_ANIM(Global_35, func_48(&Local_32, 0), "RESPAWN_ACTION", 1000f, -4f, -1, 67108880, 0, 0, 4 | Local_32.f_69, 0, 0, 0);
					Local_32.f_55 = 0;
				}
				else if (Local_32.f_59)
				{
					TASK::TASK_PLAY_ANIM(Global_35, func_48(&Local_32, 1), func_50(&Local_32, 1), 1000f, -4f, -1, 2, 0, 0, 268435460, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(Local_32.f_98, func_48(&Local_32, 1), func_50(&Local_32, 0), 1000f, -4f, -1, 6, 0, 0, 268435456, 0, 0, 0);
					PED::_0x2208438012482A1A(Local_32.f_98, false, false);
				}
				PED::_0x2208438012482A1A(Global_35, true, true);
				ENTITY::FREEZE_ENTITY_POSITION(Global_35, false);
				iLocal_152 = 1;
				Local_32.f_93 = MISC::GET_GAME_TIMER();
				iLocal_29 = 7;
				break;
			case 7:
				Local_32.f_93 = MISC::GET_GAME_TIMER();
				if (!func_51(0))
				{
					func_18(&(Local_32.f_39));
					func_52(&(Local_32.f_39));
				}
				if (ANIMSCENE::_0x25557E324489393C(iLocal_30))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_30);
					ENTITY::SET_ENTITY_VISIBLE(Global_35, true);
					LAW::_0xE9AC8466ABE484BB(0, 0);
				}
				if (iLocal_148)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("RESPAWN_CLOUDS_STOP");
					iLocal_148 = 0;
				}
				func_53(1);
				AUDIO::PLAY_SOUND_FRONTEND("EXIT", "DEATH_FAIL_RESPAWN_SOUNDS", true, 0);
				if (Global_1310720->f_12)
				{
					func_54(110, 0);
					func_54(111, 0);
					func_56(func_55(), 15000, 1000);
				}
				if ((Global_1310720->f_14 && func_57(274) < 3) && !func_58(59))
				{
					func_54(274, 1);
				}
				Local_32.f_93 = MISC::GET_GAME_TIMER();
				iLocal_29 = 8;
				break;
			case 8:
				if (!iLocal_144)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
					ENTITY::FREEZE_ENTITY_POSITION(Global_35, false);
					iLocal_152 = 1;
					ENTITY::SET_ENTITY_COLLISION(Global_35, true, false);
					ENTITY::FREEZE_ENTITY_POSITION(Local_32.f_98, true);
					if (!PED::IS_PED_INJURED(Local_32.f_98))
					{
						ENTITY::SET_ENTITY_COLLISION(Local_32.f_98, true, false);
					}
					func_59(Global_1935630, 4096);
					Global_1310720->f_6 = 0;
					if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
					{
						CAM::DO_SCREEN_FADE_IN(0);
					}
					if (func_60())
					{
						func_61(1, 10);
					}
					iLocal_144 = 1;
				}
				if (!PED::IS_PED_INJURED(Local_32.f_98))
				{
					PED::SET_PED_RESET_FLAG(Local_32.f_98, 105, true);
				}
				bVar13 = func_51(1);
				if (bVar13)
				{
					func_62();
					bVar6 = false;
					iLocal_29 = 10;
				}
				else if (Local_32.f_56)
				{
					bVar6 = false;
					fVar4 = PAD::GET_CONTROL_NORMAL(0, -1450761377);
					fVar5 = PAD::GET_CONTROL_NORMAL(0, -771458680);
					if ((fVar4 != 0f || fVar5 != 0f) && !bVar7)
					{
						func_52(&(Local_32.f_39));
						bVar7 = true;
					}
					if (bVar9)
					{
						Local_32.f_56 = 0;
						Local_32.f_53 = 0;
					}
					if (Local_32.f_59)
					{
						if (Local_32.f_25 < 0 || Local_32.f_25 >= Local_32.f_52)
						{
							Local_32.f_25 = MISC::GET_RANDOM_INT_IN_RANGE(0, Local_32.f_52);
						}
						if (func_63(&Local_32))
						{
							if (Local_32.f_26 < MISC::GET_GAME_TIMER())
							{
								Local_32.f_26 = (MISC::GET_GAME_TIMER() + 45000/*func_343*/);
								Local_32.f_25 = (1 + Local_32.f_25);
								if (Local_32.f_25 >= Local_32.f_52)
								{
									Local_32.f_25 = 0;
								}
							}
							else
							{
								Local_32.f_25 = 0;
							}
							TASK::TASK_PLAY_ANIM(Global_35, func_48(&Local_32, 1), func_64(&Local_32, 1, Local_32.f_25), 2f, -4f, -1, 2, 0, 0, 268435460, 0, 0, 0);
							TASK::TASK_PLAY_ANIM(Local_32.f_98, func_48(&Local_32, 1), func_64(&Local_32, 0, Local_32.f_25), 2f, -4f, -1, 2, 0, 0, 268435456, 0, 0, 0);
						}
					}
					else
					{
						if (MISC::IS_STRING_NULL_OR_EMPTY(&(Local_32.f_70)))
						{
							Local_32.f_70 = { func_65(&Local_32) };
						}
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, func_48(&Local_32, 1), "RESPAWN_LOOP", 1))
						{
							if (ENTITY::_0x627520389E288A73(Global_35, func_48(&Local_32, 1), "RESPAWN_LOOP") > 0.99f)
							{
								Local_32.f_70 = { func_65(&Local_32) };
								TASK::TASK_PLAY_ANIM(Global_35, Local_32.f_13, &(Local_32.f_70), 4f, -4f, -1, 2, 0, 0, 4 | Local_32.f_69, 0, 0, 0);
							}
						}
						else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, Local_32.f_13, &(Local_32.f_70), 1))
						{
							if (ENTITY::_0x627520389E288A73(Global_35, Local_32.f_13, &(Local_32.f_70)) > 0.99f)
							{
								TASK::TASK_PLAY_ANIM(Global_35, func_48(&Local_32, 1), "RESPAWN_LOOP", 4f, -4f, -1, 2, 0, 0, 4 | Local_32.f_69, 0, 0, 0);
							}
						}
						else
						{
							TASK::TASK_PLAY_ANIM(Global_35, func_48(&Local_32, 1), "RESPAWN_LOOP", 4f, -4f, -1, 2, 0, 0, 4 | Local_32.f_69, 0, 0, 0);
						}
					}
				}
				else if (Local_32.f_53)
				{
					if (500 + Local_32.f_93) < MISC::GET_GAME_TIMER()
					{
						Local_32.f_53 = 0;
					}
				}
				else if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), 1260366052))
				{
				}
				else
				{
					if (Local_32.f_54)
					{
						TASK::TASK_PLAY_ANIM(Global_35, func_48(&Local_32, 0), "RESPAWN_ACTION", 4f, -1.5f, -1, Local_32.f_68, 0, 0, 4 | Local_32.f_69, 0, 0, 0);
						func_49(&Local_32, 0);
					}
					if (Local_32.f_55)
					{
						TASK::TASK_PLAY_ANIM(Global_35, func_48(&Local_32, 0), "RESPAWN_ACTION", 4f, -4f, -1, 67108880, 0, 0, 4 | Local_32.f_69, 0, 0, 0);
					}
					if (Local_32.f_59)
					{
						TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
						TASK::CLEAR_PED_TASKS(Local_32.f_98, 1, 0);
					}
					func_52(&(Local_32.f_39));
					Local_32.f_93 = MISC::GET_GAME_TIMER();
					iLocal_29 = 9;
				}
				break;
			case 9:
				fVar16 = 1f;
				if (!Local_32.f_59)
				{
					if (PAD::IS_CONTROL_PRESSED(0, -1879280170))
					{
						fVar16 = 1.25f;
					}
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, func_48(&Local_32, 0), "RESPAWN_ACTION", 1))
				{
					sVar15 = "RESPAWN_ACTION";
				}
				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, func_48(&Local_32, 1), "RESPAWN_LOOP", 1))
				{
					sVar15 = "RESPAWN_LOOP";
					bVar14 = true;
				}
				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, func_48(&Local_32, 1), func_66(&Local_32, 1), 1))
				{
					sVar15 = func_66(&Local_32, 1);
					bVar14 = true;
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar15))
				{
					fVar10 = ENTITY::_0x627520389E288A73(Global_35, func_48(&Local_32, bVar14), sVar15);
					ENTITY::_0xEAA885BA3CEA4E4A(Global_35, func_48(&Local_32, bVar14), sVar15, fVar16);
					if (4000 + Local_32.f_93) < MISC::GET_GAME_TIMER()
					{
						fVar10 = 1f;
					}
				}
				else if (2000 + Local_32.f_93) < MISC::GET_GAME_TIMER()
				{
					fVar10 = 1f;
				}
				if (!Local_32.f_95)
				{
					Local_32.f_95 = ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), 1675443122);
					if (Local_32.f_96 && Local_32.f_95)
					{
						func_67(&(Local_32.f_39), 1);
					}
				}
				if (Local_32.f_59)
				{
				}
				else if (Local_32.f_60 && !Local_32.f_95)
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
				}
				if (func_68(bVar9, fVar10))
				{
					if (Local_32.f_54)
					{
						TASK::TASK_STAND_STILL(Global_35, 1);
					}
					iLocal_145 = 0;
					Local_32.f_93 = MISC::GET_GAME_TIMER();
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
					iLocal_29 = 10;
				}
				break;
			case 10:
				if (!Local_32.f_96)
				{
					func_69(&(Local_32.f_39));
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, func_48(&Local_32, 0), "RESPAWN_ACTION", 1))
				{
					fVar10 = ENTITY::_0x627520389E288A73(Global_35, func_48(&Local_32, 0), "RESPAWN_ACTION");
				}
				else
				{
					fVar10 = 1f;
				}
				if ((MISC::GET_GAME_TIMER() < (750 + Local_32.f_93) && Local_32.f_54) && !Local_32.f_59)
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 0.15f);
				}
				else if ((fVar10 < 1f && ENTITY::DOES_ENTITY_EXIST(&(Local_32.f_64[0]))) && !bLocal_151)
				{
				}
				else if (bVar9 || !bVar6)
				{
					if (bLocal_150)
					{
						TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
					}
					if (func_70() == 8)
					{
						func_71(22, 0, 1);
					}
					else
					{
						func_71(45, 0, 1);
					}
					func_1(1);
				}
				break;
			default:
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1(1);
}

void func_1(int iParam0)
{
	int iVar0;

	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
	PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
	ENTITY::SET_ENTITY_VISIBLE(Global_35, true);
	func_72(Global_35, ENTITY::GET_ENTITY_MODEL(Global_35));
	TELEMETRY::_TELEMETRY_PLAYER_SPAWNED(Global_35);
	LAW::_0x2001687F9562FD9D(1);
	PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
	PED::SET_PED_CONFIG_FLAG(Global_35, 360, false);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	func_73();
	if (Global_1310720->f_29 != -1)
	{
		func_74(Global_1310720->f_29);
	}
	func_75();
	Global_1347477->f_6 = 0;
	func_76(8192);
	Global_1894899->f_8 = 0;
	func_67(&(Local_32.f_39), 0);
	if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && iParam0)
	{
		CAM::DO_SCREEN_FADE_IN(500);
	}
	if (STREAMING::_0xCF45DF50C7775F2A())
	{
		STREAMING::_0x5A8B01199C3E79C3();
	}
	if (iLocal_148)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("RESPAWN_CLOUDS_STOP");
	}
	AUDIO::_0x9428447DED71FC7E("DEATH_FAIL_RESPAWN_SCENES");
	if (!PED::IS_PED_INJURED(Local_32.f_98))
	{
		ENTITY::FREEZE_ENTITY_POSITION(Local_32.f_98, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_32.f_98, false);
		POPULATION::_0xF74E134F40192884(Local_32.f_98, 0);
	}
	if (!PED::IS_PED_INJURED(Global_35))
	{
		ENTITY::FREEZE_ENTITY_POSITION(Global_35, false);
	}
	if (iLocal_153 != -1)
	{
		GRAPHICS::_0x9CF1836C03FB67A2(&iLocal_153, 1);
	}
	if (iLocal_154 != -1)
	{
		GRAPHICS::_0x9CF1836C03FB67A2(&iLocal_154, 1);
	}
	if (iLocal_155 != -1)
	{
		GRAPHICS::_0x9CF1836C03FB67A2(&iLocal_155, 1);
	}
	iVar0 = 0;
	while (iVar0 < Local_32.f_64)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(Local_32.f_64[iVar0])))
		{
			OBJECT::DELETE_OBJECT(Local_32.f_64[iVar0]);
		}
		if (&Local_32.f_61[iVar0] == joaat("p_cigarette_cs02x"))
		{
			func_77(-885810591, 1);
		}
		iVar0++;
	}
	if (VOLUME::_0x92A78D0BEDB332A3(iLocal_140))
	{
		POPULATION::_0x74C2B3DC0B294102(iLocal_140);
		POPULATION::_0xA1CFB35069D23C23(iLocal_140);
		VOLUME::_0x43F867EF5C463A53(iLocal_140);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(iLocal_141))
	{
		POPULATION::_0x74C2B3DC0B294102(iLocal_141);
		POPULATION::_0xA1CFB35069D23C23(iLocal_141);
		VOLUME::_0x43F867EF5C463A53(iLocal_141);
	}
	if (PED::_0x91A5F9CBEBB9D936(iLocal_143))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_143, false);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(iLocal_142))
	{
		VOLUME::_0x43F867EF5C463A53(iLocal_142);
	}
	VOLUME::_0xAC355980681A7F89(4);
	if (!func_20(&Global_1935630, 131072))
	{
		func_78(0, -1);
	}
	func_79(1);
	func_59(Global_1935630, 131072);
	func_80(4096);
	func_79(512);
	MISC::_0xD74ACDF7DB8114AF(0);
	GRAPHICS::_0x503941F65DBA24EC(0);
	func_81();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_2(var uParam0, int iParam1)
{
	struct<5> Var0;

	if (!func_82(15, uParam0))
	{
		return;
	}
	uParam0->f_5 = *uParam0;
	uParam0->f_27 = { func_83(iParam1) };
	uParam0->f_5.f_2 = -566397848;
	uParam0->f_5.f_3 = iParam1;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_5.f_1), &(uParam0->f_5)))
	{
	}
	if (DATAFILE::_DATAFILE_GET_NUM_CHILDREN(uParam0->f_5, uParam0->f_5.f_1) == 0)
	{
		uParam0->f_5 = { Var0 };
		func_2(uParam0, iParam1 + 1);
	}
}

void func_3(var uParam0)
{
	*uParam0 = CAM::CREATE_CAMERA(26379945, false);
	uParam0->f_7 = 70f;
	uParam0->f_9 = -180f;
	uParam0->f_10 = 180f;
	uParam0->f_11 = -85f;
	uParam0->f_12 = 85f;
}

void func_4()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	func_84(Global_1935630, 4096);
	func_85();
	if (Global_1310720->f_7)
	{
		func_86(0);
	}
	if (!func_87(512))
	{
		func_88();
		func_89(1);
		func_90(-1, 0, 0, 0, 0);
	}
	else
	{
		func_90(-1, 0, 0, 1, 0);
	}
	PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
	LAW::_0xBCC6DC59E32A2BDC(PLAYER::PLAYER_ID());
	func_91();
	func_36(1);
	func_37();
	_NAMESPACE48::_0xB173599D61FAEB31();
	if (!PED::IS_PED_INJURED(Global_35))
	{
		PED::_0xE3144B932DFDFF65(Global_35, 0f, -1, 1, 1);
		PED::CLEAR_PED_ENV_DIRT(Global_35);
		PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Global_35, 10, "ALL");
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_35, 3);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_35, 0);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_35, 5);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_35, 7);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_35, 8);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_35, 9);
		iVar0 = ITEMSET::CREATE_ITEMSET(true);
		PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_35, iVar0);
		if (ITEMSET::IS_ITEMSET_VALID(iVar0))
		{
			iVar3 = ITEMSET::GET_ITEMSET_SIZE(iVar0);
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				iVar1 = MISC::_0xEE04C0AFD4EFAF0E(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar0));
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					ENTITY::_0x0D0DB2B6AF19A987(&iVar1);
				}
				iVar2++;
			}
			ITEMSET::DESTROY_ITEMSET(iVar0);
		}
		if (!func_20(&Global_1935630, 131072))
		{
			func_92();
		}
	}
	ATTRIBUTE::_0xD962F8579D702DB5();
	_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
	if (CAM::IS_CINEMATIC_CAM_RENDERING())
	{
		CAM::SET_CINEMATIC_MODE_ACTIVE(false);
	}
	Global_1347477->f_6 = 1;
	func_93(8192);
	func_94();
	func_95(0, 0);
	func_96(-70f);
	func_97(0, 0);
	func_98(iVar4, iVar5);
	func_99(1);
	func_100(0);
}

int func_5(var uParam0)
{
	*uParam0 = 0;
	if (PED::IS_PED_INJURED(Global_35))
	{
		return 1;
	}
	if (func_101() != func_102())
	{
		return 1;
	}
	if (func_103(Global_43889))
	{
		return 1;
	}
	if (STREAMING::_0x99F92061EFE908BA())
	{
		return 1;
	}
	if (func_104(128))
	{
		return 1;
	}
	return 0;
}

void func_6(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < uParam0->f_64)
	{
		if (iVar1 == 0)
		{
			iVar0 = 7966;
		}
		else
		{
			iVar0 = 64847;
		}
		if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_64[iVar1])))
		{
			if (!uParam0->f_97)
			{
				if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(&(uParam0->f_64[iVar1]), Global_35))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(&(uParam0->f_64[iVar1]), Global_35, PED::GET_PED_BONE_INDEX(Global_35, iVar0), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0, 0);
				}
				else if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -30609785))
				{
					ENTITY::DETACH_ENTITY(&(uParam0->f_64[iVar1]), true, true);
					uParam0->f_97 = 1;
				}
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -1898385492))
			{
				OBJECT::DELETE_OBJECT(uParam0->f_64[iVar1]);
			}
		}
		iVar1++;
	}
}

void func_7()
{
	if (Global_1310720->f_7 && !bLocal_159)
	{
		if (iLocal_157 < 0)
		{
			iLocal_157 = MISC::GET_GAME_TIMER();
		}
		if (func_105(Global_1935630->f_3))
		{
			if (iLocal_157 + 5000 < MISC::GET_GAME_TIMER())
			{
				func_32();
				AUDIO::PLAY_SOUND_FRONTEND("TITLE_SCREEN_EXIT_OFF_MISSION", "DEATH_FAIL_RESPAWN_SOUNDS", true, 0);
				bLocal_158 = true;
			}
			else if (!CAM::IS_SCREEN_FADED_IN() && _NAMESPACE76::_0x07954320D77F6A3D(Global_1935630->f_3) >= 3)
			{
				CAM::DO_SCREEN_FADE_IN(0);
			}
		}
		if (bLocal_158)
		{
			if (!_NAMESPACE76::_0xC5C395C60B542A3C(1) || iLocal_157 + 5000 + 650 < MISC::GET_GAME_TIMER())
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				bLocal_159 = true;
			}
		}
	}
	else
	{
		bLocal_159 = true;
	}
}

void func_8(bool bParam0)
{
	if (bParam0)
	{
		func_93(4);
	}
	func_93(2);
	MISC::SET_BIT(&(Global_1956578->f_1), 0);
}

int func_9(float fParam0, float fParam1)
{
	if ((((((((((((((((TASK::IS_PED_WALKING(Global_35) || TASK::IS_PED_RUNNING(Global_35)) || TASK::IS_PED_SPRINTING(Global_35)) || PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID())) || MISC::ABSF(fParam0) > 0.2f) || MISC::ABSF(fParam1) > 0.2f) || PAD::IS_CONTROL_JUST_PRESSED(0, 1367437629)) || PAD::IS_CONTROL_JUST_PRESSED(0, -1404316431)) || PAD::IS_CONTROL_JUST_PRESSED(0, -1304887797)) || PAD::IS_CONTROL_JUST_PRESSED(0, 130948705)) || PAD::IS_CONTROL_JUST_PRESSED(0, 42190210)) || PAD::IS_CONTROL_JUST_PRESSED(0, -1292666904)) || PAD::GET_CONTROL_NORMAL(0, 130948705) > 0f) || PAD::IS_CONTROL_JUST_PRESSED(0, 255439828)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, -209515122)) || PAD::IS_CONTROL_JUST_PRESSED(0, 1287709438)) || PAD::IS_CONTROL_JUST_PRESSED(0, -209515122))
	{
		return 1;
	}
	if (Local_32.f_59 && PAD::IS_CONTROL_JUST_PRESSED(0, -874806616))
	{
		bLocal_150 = true;
		return 1;
	}
	if (!PED::IS_PED_INJURED(Local_32.f_98))
	{
		if (PED::_0xB8E2D655E1D5BD39(Local_32.f_98))
		{
			return 1;
		}
	}
	return 0;
}

void func_10()
{
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(10);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(11);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(9);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(8);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(7);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(6);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(5);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(4);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(3);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(2);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(1);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(0);
}

int func_11(int iParam0, int iParam1)
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

int func_12(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<8> Var1;
	int iVar9;
	int iVar10;
	bool bVar11;
	bool bVar12;
	struct<5> Var13;
	int iVar18;

	uParam0->f_5.f_2 = 0;
	iVar0 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(uParam0->f_5, uParam0->f_5.f_1);
	if (iVar0 < 0 || iParam2 >= iVar0)
	{
		return 0;
	}
	uParam0->f_5.f_3 = iParam2;
	uParam0->f_5.f_2 = 599260570;
	DATAFILE::_DATAFILE_GET_STRING(&Var1, &(uParam0->f_5));
	uParam0->f_14 = func_106(Var1);
	uParam0->f_5.f_3 = iParam2;
	uParam0->f_5.f_2 = 1368867264;
	DATAFILE::_DATAFILE_GET_HASH(&iVar10, &(uParam0->f_5));
	if (func_107(iVar10))
	{
		iVar10 = -185966659;
	}
	uParam0->f_11 = func_108(iVar10);
	uParam0->f_15 = func_109(iVar10);
	uParam0->f_2 = -1222062814;
	uParam0->f_3 = iVar10;
	Var13 = { *uParam0 };
	if (Global_40.f_9.f_12)
	{
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var13.f_1), &Var13))
		{
			iVar18 = iVar10;
			Var13.f_2 = -2000223992;
			DATAFILE::_DATAFILE_GET_HASH(&iVar10, &Var13);
			if (iVar10 != 0)
			{
				uParam0->f_11 = func_108(iVar10);
				uParam0->f_15 = func_109(iVar10);
				uParam0->f_2 = -1222062814;
				uParam0->f_3 = iVar10;
			}
			else
			{
				iVar10 = iVar18;
			}
		}
	}
	iVar9 = iVar10;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0))
	{
		uParam0->f_5.f_2 = -1726340653;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar10, &(uParam0->f_5)))
		{
			uParam0->f_12 = func_108(iVar10);
		}
		else
		{
			uParam0->f_12 = uParam0->f_11;
		}
		uParam0->f_2 = 824674748;
		DATAFILE::_DATAFILE_GET_BOOL(&(uParam0->f_53), uParam0);
		uParam0->f_2 = -1565562604;
		DATAFILE::_DATAFILE_GET_BOOL(&(uParam0->f_54), uParam0);
		uParam0->f_2 = -233815074;
		DATAFILE::_DATAFILE_GET_BOOL(&(uParam0->f_55), uParam0);
		uParam0->f_2 = -477049661;
		DATAFILE::_DATAFILE_GET_BOOL(&bVar11, uParam0);
		if (bVar11)
		{
			uParam0->f_67 |= 67108880;
		}
		uParam0->f_2 = -899679477;
		DATAFILE::_DATAFILE_GET_BOOL(&bVar12, uParam0);
		if (bVar12)
		{
			uParam0->f_67 |= 49152;
			uParam0->f_68 |= 49152;
		}
		uParam0->f_2 = -62070419;
		DATAFILE::_DATAFILE_GET_BOOL(&bVar12, uParam0);
		if (bVar12)
		{
			uParam0->f_69 |= 1;
		}
		uParam0->f_2 = -1625090004;
		DATAFILE::_DATAFILE_GET_BOOL(&(uParam0->f_57), uParam0);
		uParam0->f_2 = 76128139;
		DATAFILE::_DATAFILE_GET_BOOL(&(uParam0->f_58), uParam0);
		uParam0->f_2 = -1148228754;
		DATAFILE::_DATAFILE_GET_BOOL(&(uParam0->f_59), uParam0);
		uParam0->f_2 = 2055089342;
		DATAFILE::_DATAFILE_GET_BOOL(&(uParam0->f_60), uParam0);
		uParam0->f_2 = 660059998;
		DATAFILE::_DATAFILE_GET_BOOL(&(uParam0->f_56), uParam0);
		if (!uParam0->f_59)
		{
			if (uParam0->f_56)
			{
				uParam0->f_2 = 1514205951;
				DATAFILE::_DATAFILE_GET_HASH(&iVar10, uParam0);
				uParam0->f_13 = func_108(iVar10);
				uParam0->f_2 = 1597176581;
				DATAFILE::_DATAFILE_GET_INT(&(uParam0->f_52), uParam0);
			}
		}
		else
		{
			func_110(uParam0, iVar9);
		}
		func_111(uParam0, iParam1, MISC::GET_HASH_KEY(uParam0->f_14));
		uParam0->f_2 = -1854764018;
		DATAFILE::_DATAFILE_GET_HASH(&iVar10, uParam0);
		if (iVar10 != 0)
		{
			uParam0->f_61[0] = iVar10;
		}
		uParam0->f_2 = -391550498;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar10, uParam0))
		{
			uParam0->f_61[1] = iVar10;
		}
		if (uParam0->f_56)
		{
		}
	}
	return 1;
}

void func_13(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	var uVar5;

	iVar3 = Global_40.f_9.f_16;
	while (iVar3 > iVar0 && !bVar4)
	{
		if (&Global_40.f_9.f_16[iVar0] < 0)
		{
			iVar1 = iVar0;
			bVar4 = true;
		}
		iVar0++;
	}
	uVar5 = (BUILTIN::SHIFT_LEFT(iParam1, 11) || iParam0);
	Global_40.f_9.f_16[iVar1] = uVar5;
	iVar2 = iVar1 + 1;
	iVar2 = func_112(iVar2 >= iVar3, 0, iVar2);
	Global_40.f_9.f_16[iVar2] = -1;
}

Vector3 func_14(vector3 vParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;

	fVar0 = BUILTIN::SIN(vParam0.z);
	fVar1 = BUILTIN::COS(vParam0.z);
	fVar2 = BUILTIN::SIN(vParam0.x);
	fVar3 = BUILTIN::COS(vParam0.x);
	return func_113((-fVar3 * fVar0), (fVar3 * fVar1), fVar2);
}

int func_15(vector3 vParam0)
{
	return func_114(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

void func_16()
{
	func_115();
}

bool func_17()
{
	return Global_1310720->f_9;
}

int func_18(var uParam0)
{
	if ((!func_116(uParam0->f_1) && !func_116(uParam0->f_4)) && uParam0->f_7 != 0f)
	{
		CAM::SET_CAM_COORD(*uParam0, uParam0->f_1);
		CAM::SET_CAM_ROT(*uParam0, uParam0->f_4, 2);
		CAM::SET_CAM_FOV(*uParam0, uParam0->f_7);
		CAM::SET_CAM_ACTIVE(*uParam0, true);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		return 1;
	}
	return 0;
}

bool func_19()
{
	return Global_1310720->f_10;
}

bool func_20(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_21(vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 16384;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

void func_22(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 8;
	if (bParam4)
	{
		iVar0 |= 72;
	}
	if (bParam5)
	{
		iVar0 |= 131072;
	}
	if (bParam6)
	{
		iVar0 |= 24;
	}
	if (bParam7)
	{
		iVar0 |= 40;
	}
	if (bParam8)
	{
		iVar0 |= 524288;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

int func_23(int iParam0, var uParam1, var uParam2)
{
	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	*uParam1 = { (Global_40.f_1095.f_1[iParam0 /*436*/])->f_427 };
	*uParam2 = (Global_40.f_1095.f_1[iParam0 /*436*/])->f_430;
	return 1;
}

int func_24()
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	bool bVar5;

	bVar3 = false;
	if (!func_118(&Local_32))
	{
		bVar3 = true;
	}
	bVar5 = true;
	iVar4 = 0;
	while (iVar4 < Local_32.f_64)
	{
		if (&Local_32.f_61[iVar4] != 0)
		{
			STREAMING::REQUEST_MODEL(&(Local_32.f_61[iVar4]), false);
			if (STREAMING::HAS_MODEL_LOADED(&(Local_32.f_61[iVar4])))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(&(Local_32.f_64[iVar4])))
				{
					Local_32.f_64[iVar4] = OBJECT::CREATE_OBJECT(&(Local_32.f_61[iVar4]), Global_36, true, true, false, false, true);
				}
			}
			else
			{
				bVar5 = false;
			}
		}
		iVar4++;
	}
	if (!bVar5)
	{
		bVar3 = true;
	}
	if (!bVar3)
	{
		if (Local_32.f_93 + 30000 < MISC::GET_GAME_TIMER())
		{
			return 1;
		}
	}
	if (!func_119())
	{
		bVar3 = true;
	}
	if ((!func_17() && !iLocal_31) && !func_20(&Global_1935630, 131072))
	{
		bLocal_147 = AUDIO::LOAD_STREAM("CLOUD_BED", "DEATH_FAIL_RESPAWN_SOUNDS");
		if (!ANIMSCENE::_0x25557E324489393C(iLocal_30))
		{
			Local_32.f_16 = func_120(CLOCK::GET_CLOCK_HOURS());
			iLocal_30 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_32.f_16, 0, 0, false, true);
			if (iLocal_30 == -1)
			{
				iLocal_31 = 1;
				return 0;
			}
			ANIMSCENE::LOAD_ANIM_SCENE(iLocal_30);
		}
		if (!ANIMSCENE::_0x477122B8D05E7968(iLocal_30, 1, 0))
		{
			bVar3 = true;
		}
		if (!bLocal_147)
		{
			bVar3 = true;
		}
	}
	if (bVar3)
	{
		return 0;
	}
	if (STREAMING::_0xCF45DF50C7775F2A() && !Global_1310720->f_27)
	{
		if (!STREAMING::_0x0909F71B5C070797())
		{
			return 0;
		}
	}
	if (!PED::_0x0EE3F0D7FECCC54F() || !VEHICLE::_0x2701D01D5E18FC31())
	{
		return 0;
	}
	if (!PED::_0xA0BC8FAED8CFEB3C(Global_35))
	{
		return 0;
	}
	vVar0 = { Local_32.f_30 };
	if (!func_121(&vVar0, 50, 10, 0))
	{
		return 0;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_32.f_76)))
	{
		if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&(Local_32.f_76)))
		{
			return 0;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_32.f_84)))
	{
		if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&(Local_32.f_84)))
		{
			return 0;
		}
	}
	if (!bLocal_159)
	{
		return 0;
	}
	if (!func_122())
	{
		return 0;
	}
	if (func_29())
	{
		if (DLC::GET_IS_LOADING_SCREEN_ACTIVE())
		{
			SCRIPTS::SHUTDOWN_LOADING_SCREEN();
			return 0;
		}
	}
	if (!func_123(256))
	{
		return 1;
	}
	return 1;
}

bool func_25()
{
	var uVar0;

	if (func_124())
	{
		if (!func_58(4))
		{
			return true;
		}
	}
	return (PED::_0xFB4891BD7578CDC1(Global_35, -1725579161) || func_125(-2061583405, &uVar0));
}

void func_26(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;

	if (bParam4)
	{
		func_126(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_127(Var0);
}

int func_27(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;

	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam1))
	{
		return 0;
	}
	if (!TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sParam1, &iVar0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (iVar0 > 256)
	{
		return 0;
	}
	if (ENTITY::_0x29BA9F78321E5A6C(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, 0, 0, 0, iParam6, 0, iParam7))
	{
		return 1;
	}
	return 0;
}

int func_28(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if (!func_128(iVar1, iParam0, iParam1, iParam2))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

int func_29()
{
	if (!MISC::IS_ORBIS_VERSION())
	{
		return 0;
	}
	if (!func_20(&Global_1935630, 131072))
	{
		return 0;
	}
	if (!NETWORK::_0xDA4B1A479C414FB2())
	{
		return 0;
	}
	return 1;
}

void func_30()
{
	struct<8> Var0;

	func_32();
	CAM::DO_SCREEN_FADE_OUT(0);
	Var0.f_2 = 4;
	Var0 = "";
	Var0.f_1 = "";
	Var0.f_3 = 2117985430;
	Var0.f_7 = 1539841963;
	Global_1935630->f_3 = func_129(&Var0, "PSPLUS_OFFER_TITLE", "PSPLUS_OFFER", 0, 1);
	NETWORK::_0xFC6FCF4C03F1BBF6();
}

int func_31()
{
	vector3 vVar0;

	if (!MISC::IS_ORBIS_VERSION())
	{
		return 1;
	}
	if ((!CAM::IS_SCREEN_FADING_IN() && !CAM::IS_SCREEN_FADED_IN()) && func_130(Global_1935630->f_3))
	{
		CAM::DO_SCREEN_FADE_IN(0);
	}
	HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(0);
	if (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(-1933804684))
	{
		if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(-1933804684, &vVar0))
		{
			switch (vVar0.x)
			{
				case -1203660660:
					if (vVar0.y == Global_1935630->f_3)
					{
						switch (vVar0.z)
						{
							case 2074623703:
								NETWORK::_0x83FE8D7229593017();
								return 1;
							case 1400745903:
								return 1;
						}
					}
					break;
			}
		}
		UIEVENTS::_EVENT_MANAGER_POP_EVENT(-1933804684);
	}
	return 0;
}

void func_32()
{
	if (Global_1935630->f_3 != 0)
	{
		_NAMESPACE76::_0x00A15B94CBA4F76F(Global_1935630->f_3);
		Global_1935630->f_3 = 0;
	}
}

void func_33(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 || iParam0);
}

int func_34(var uParam0)
{
	if (-1829635046 == func_131(81053684))
	{
		if (func_132(uParam0))
		{
			return 1;
		}
	}
	else if (func_125(-525676072, uParam0))
	{
		if (func_132(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_35()
{
	int iVar0;

	if (!func_133())
	{
		return 0;
	}
	if (!func_132(&iVar0))
	{
		return 0;
	}
	if (!func_134(iVar0))
	{
		return 0;
	}
	return func_135(iVar0, 0);
}

void func_36(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < Global_1879534->f_7300)
	{
		if (!MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iVar1 /*4*/]), 2))
		{
			if (MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iVar1 /*4*/]), 1))
			{
				switch (&Global_1879534->f_1911[(Global_1879534->f_7301.f_2[iVar1 /*4*/])->f_1 /*3*/])
				{
					case -2093459088:
						iVar0 = (Global_1879534->f_1911[(Global_1879534->f_7301.f_2[iVar1 /*4*/])->f_1 /*3*/])->f_2;
						if (func_136(iVar0))
						{
							if (func_137(iVar0))
							{
								func_138(iVar0, bParam0);
							}
						}
						break;
				}
			}
		}
		iVar1++;
	}
}

void func_37()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Global_40.f_1094 - 1))
	{
		if (func_139(&(Global_40.f_450[iVar0])))
		{
			if (((*Global_1347702)[&Global_40.f_450[iVar0] /*49*/])->f_14 & 2 != 0)
			{
				func_140(&(Global_40.f_450[iVar0]), 1, 0);
			}
		}
		iVar0++;
	}
}

int func_38(int iParam0)
{
	struct<4> Var0;
	int iVar5;
	var uVar6;

	if (!func_82(15, &Var0))
	{
		return -1;
	}
	Var0.f_3 = iParam0;
	Var0.f_2 = -125049320;
	if (DATAFILE::_DATAFILE_GET_HASH(&iVar5, &Var0))
	{
		uVar6 = func_141(iVar5);
		return uVar6;
	}
	return -1;
}

void func_39()
{
	struct<16> Var0;

	Var0.f_15 = 531055934;
	Var0 = PLAYER::PLAYER_PED_ID();
	Var0.f_12 = 46;
	Var0.f_4 = 531055934;
	Var0.f_8 = 0;
	MISC::_0x88BC5F4AEF77FC4E(&Var0, 17);
}

void func_40(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_41()
{
	func_46();
	func_47();
	func_142(Global_35, Local_32.f_98, 0, -1, 1);
}

void func_42()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;

	iVar0 = func_143();
	iVar1 = func_144(iVar0);
	fVar2 = func_145(iVar0 < 0, 0f, (BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(8)));
	fVar3 = func_145(iVar0 > 0, 0f, (BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(8)));
	GRAPHICS::_0xF972F0AB16DC5260("RespawnSkyWithHonor", 1, fVar2);
	GRAPHICS::_0xF972F0AB16DC5260("RespawnSkyWithHonor", 3, fVar3);
}

void func_43(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (uParam0->f_58)
	{
		iVar0 = 0;
	}
	else if (uParam0->f_57)
	{
		iVar0 = 1;
		WEAPON::_0xFCCC886EDE3C63EC(Global_35, 0, 1);
	}
	else
	{
		iVar1 = func_146(ENTITY::GET_ENTITY_COORDS(Global_35, false, false), 1);
		if (!PED::IS_PED_INJURED(uParam0->f_98))
		{
			if (uParam0->f_59)
			{
				func_147(0);
			}
			else if (func_148(iVar1) == 4 && func_149() == iVar1)
			{
				func_147(0);
			}
			else if (func_148(iVar1) == 1)
			{
				iVar2 = ((*Global_1888801)[iVar1 /*35*/])->f_4;
				if (func_150(Global_35, iVar2, 0, 0))
				{
					func_147(0);
				}
			}
		}
		WEAPON::_0xFCCC886EDE3C63EC(Global_35, 2, 1);
		return;
	}
	if (!PED::IS_PED_INJURED(uParam0->f_98))
	{
		iVar3 = func_151(Global_35, 0, 7, 0);
		if (func_152(iVar3))
		{
			WEAPON::_0xE9BD19F8121ADE3E(Global_35, iVar3);
		}
	}
	WEAPON::_0x94A3C1B804D291EC(Global_35, 1, 0, 1, 1);
	iVar3 = func_151(Global_35, 0, 0, 0);
	if ((!func_152(iVar3) || !WEAPON::_0x0556E9D2ECF39D01(iVar3)) || WEAPON::_0xC4DEC3CA8C365A5D(iVar3))
	{
		iVar3 = func_151(Global_35, 0, 1, 0);
	}
	if ((!func_152(iVar3) || !WEAPON::_0x0556E9D2ECF39D01(iVar3)) || WEAPON::_0xC4DEC3CA8C365A5D(iVar3))
	{
		iVar3 = func_151(Global_35, 0, 9, 0);
	}
	if ((!func_152(iVar3) || !WEAPON::_0x0556E9D2ECF39D01(iVar3)) || WEAPON::_0xC4DEC3CA8C365A5D(iVar3))
	{
		iVar3 = func_151(Global_35, 0, 10, 0);
	}
	if (func_152(iVar3))
	{
		if (WEAPON::_0x0556E9D2ECF39D01(iVar3))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar3, true, iVar0, false, false);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, iVar0, false, false);
		}
	}
}

int func_44()
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

int func_45(int iParam0)
{
	switch (iParam0)
	{
		case -1721991356:
		case -1233681761:
		case -416908843:
		case 212278652:
		case 839715153:
		case 1420204096:
		case 1974067816:
		case 2082228755:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_46()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if ((!PED::IS_PED_INJURED(Local_32.f_98) && !TASK::IS_PED_IN_WRITHE(Local_32.f_98)) && !func_116(Local_32.f_34))
	{
		func_21(Local_32.f_34, 10f, 0);
		ENTITY::SET_ENTITY_COORDS(Local_32.f_98, Local_32.f_34, true, false, true, true);
		ENTITY::SET_ENTITY_HEADING(Local_32.f_98, Local_32.f_37);
		ENTITY::_0x9587913B9E772D29(Local_32.f_98, 1);
		PED::_0x06D26A96CA1BCA75(Local_32.f_98, 3, 0f, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_32.f_98, true);
		POPULATION::_0xF74E134F40192884(Local_32.f_98, 2);
		iVar0 = func_153(Local_32.f_98);
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (func_154(iVar0, iVar1) < 15)
			{
				func_155(iVar0, iVar1, 15);
			}
			iVar1++;
		}
		if (!Local_32.f_59)
		{
			if (Local_32.f_38)
			{
				if (TASK::_0x6EEAD6AF637DA752(Local_32.f_34, -1805387726, 1f, 0))
				{
					iVar2 = TASK::_0xF533D68FF970D190(Local_32.f_34, -1805387726, 1f, 0, 0);
					TASK::_TASK_USE_SCENARIO_POINT(Local_32.f_98, iVar2, 0, 0, 1, 1, 0, 0, -1082130432, 0);
				}
			}
		}
	}
}

void func_47()
{
	var uVar0;

	ENTITY::SET_ENTITY_COLLISION(Global_35, true, false);
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(Local_32.f_30 + Vector(1.5f, 0f, 0f), &uVar0, 0))
	{
		Local_32.f_30.f_2 = uVar0;
	}
	ENTITY::SET_ENTITY_COORDS(Global_35, Local_32.f_30, false, true, true, true);
	ENTITY::SET_ENTITY_HEADING(Global_35, Local_32.f_33);
}

var func_48(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		return uParam0->f_12;
	}
	return uParam0->f_11;
}

void func_49(var uParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < uParam0->f_64)
	{
		sVar0 = "";
		if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_64[iVar1])))
		{
			if ((&uParam0->f_61[iVar1] == joaat("p_journal01x") || &uParam0->f_61[iVar1] == 1375255536) || &uParam0->f_61[iVar1] == -1451757867)
			{
				if (bParam1)
				{
					sVar0 = "respawn_loop_journal";
				}
				else
				{
					sVar0 = "respawn_action_journal";
				}
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			ENTITY::PLAY_ENTITY_ANIM(&(uParam0->f_64[iVar1]), sVar0, func_48(uParam0, bParam1), 1000f, bParam1, false, false, 0f, 0);
		}
		iVar1++;
	}
}

var func_50(var uParam0, bool bParam1)
{
	char cVar0[64];

	if (bParam1)
	{
		StringCopy(&cVar0, "arthur_", 64);
	}
	else
	{
		StringCopy(&cVar0, "horse_", 64);
	}
	StringConCat(&cVar0, uParam0->f_17, 64);
	return func_156(cVar0);
}

int func_51(int iParam0)
{
	if (!bLocal_151)
	{
		return 0;
	}
	if (Global_1310720->f_25)
	{
		return 1;
	}
	if (Global_1310720->f_26 && iParam0)
	{
		if (PAD::IS_DISABLED_CONTROL_PRESSED(0, 2139949496))
		{
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			return 1;
		}
	}
	return 0;
}

int func_52(var uParam0)
{
	if (CAM::IS_CAM_RENDERING(*uParam0))
	{
		CAM::_0x027CAB2C3AF27010();
		CAM::SET_CAM_ACTIVE(*uParam0, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		return 1;
	}
	return 0;
}

void func_53(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;

	if (!func_157(0, 0, 1) || iParam0)
	{
		iVar0 = func_143();
		iVar1 = func_144(iVar0);
		fVar2 = (1f - (MISC::ABSF(BUILTIN::TO_FLOAT(iVar1)) / BUILTIN::TO_FLOAT(8)));
		fVar3 = func_145(iVar0 < 0, 0f, (BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(8)));
		fVar4 = func_145(iVar0 > 0, 0f, (BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(8)));
		GRAPHICS::ANIMPOSTFX_PLAY("RespawnWithHonor");
		GRAPHICS::_0xF972F0AB16DC5260("RespawnWithHonor", 1, fVar3);
		GRAPHICS::_0xF972F0AB16DC5260("RespawnWithHonor", 2, fVar2);
		GRAPHICS::_0xF972F0AB16DC5260("RespawnWithHonor", 3, fVar4);
	}
	else
	{
		GRAPHICS::ANIMPOSTFX_PLAY("RespawnMissionCheckpoint");
	}
}

void func_54(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_158(iParam0, &iVar0, &iVar1);
	if (!func_159(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_160(iVar0, iVar1);
}

float func_55()
{
	if (Global_1310720->f_13 && Global_1310720->f_15 < 2)
	{
		Global_1310720->f_15 = 2;
	}
	switch (Global_1310720->f_15)
	{
		case 1:
			return 0.05f;
		case 2:
			return 0.07f;
		case 3:
			return 0.1f;
		case 4:
			return 0.13f;
		case 5:
			return 0.15f;
		default:
			break;
	}
	return 0.2f;
}

void func_56(float fParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = MONEY::_MONEY_GET_CASH_BALANCE();
	if (iVar0 < iParam2)
	{
		return;
	}
	iVar1 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar0) * fParam0));
	if (iVar1 > iParam1)
	{
		iVar1 = iParam1;
	}
	if (iVar1 > 0)
	{
		func_161(iVar1);
		func_162(iVar1, 0, 0);
	}
}

int func_57(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_158(iParam0, &iVar0, &iVar1);
	if (!func_163(iParam0, 65536) && !func_163(iParam0, 32768))
	{
		if (func_164(iVar0, iVar1))
		{
			return 1;
		}
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < Global_40.f_7756)
	{
		if ((Global_40.f_7756[iVar2 /*3*/])->f_2 == iParam0)
		{
			return (Global_40.f_7756[iVar2 /*3*/])->f_1;
		}
		iVar2++;
	}
	return 0;
}

bool func_58(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_165(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
	}
	return (UNLOCK::_UNLOCK_IS_UNLOCKED(((*Global_1835011)[iParam0 /*74*/])->f_2) && !UNLOCK::_UNLOCK_IS_VISIBLE(((*Global_1835011)[iParam0 /*74*/])->f_2));
}

void func_59(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_60()
{
	return Global_1894899 & 2 != 0;
}

void func_61(int iParam0, int iParam1)
{
	var uVar0;

	if (iParam0 == -1)
	{
		return;
	}
	uVar0 = func_166();
	func_167(&uVar0, 0, iParam1, 0, 0, 0, 0, 0);
	(Global_1327590->f_19622[iParam0 /*14*/])->f_9 = uVar0;
}

void func_62()
{
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, 0, 1);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_32.f_98, 0, 1);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
	Local_32.f_93 = 0;
}

int func_63(var uParam0)
{
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, func_48(uParam0, 1), func_64(uParam0, 1, uParam0->f_25), 1))
	{
		if (ENTITY::_0x627520389E288A73(Global_35, func_48(uParam0, 1), func_64(uParam0, 1, uParam0->f_25)) > 0.95f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -1120007597))
		{
			return 1;
		}
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, func_48(uParam0, 1), func_50(uParam0, 1), 1))
	{
		if (ENTITY::_0x627520389E288A73(Global_35, func_48(uParam0, 1), func_50(uParam0, 1)) > 0.95f)
		{
			return 1;
		}
	}
	return 0;
}

var func_64(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];

	if (bParam1)
	{
		StringCopy(&cVar0, "arthur_", 64);
	}
	else
	{
		StringCopy(&cVar0, "horse_", 64);
	}
	StringConCat(&cVar0, &(uParam0->f_19[iParam2]), 64);
	return func_156(cVar0);
}

Vector3 func_65(var uParam0)
{
	vector3 vVar0[24];

	StringCopy(&cVar0, "RESPAWN_IDLE_", 24);
	StringIntConCat(&cVar0, MISC::GET_RANDOM_INT_IN_RANGE(1, uParam0->f_52 + 1), 24);
	return cVar0;
}

char* func_66(var uParam0, bool bParam1)
{
	char cVar0[64];

	if (bParam1)
	{
		StringCopy(&cVar0, "arthur_", 64);
	}
	else
	{
		StringCopy(&cVar0, "horse_", 64);
	}
	StringConCat(&cVar0, uParam0->f_18, 64);
	return func_156(cVar0);
}

void func_67(var uParam0, bool bParam1)
{
	if (CAM::IS_CAM_RENDERING(*uParam0))
	{
		CAM::SET_CAM_ACTIVE(*uParam0, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	}
	CAM::_0x3C486E334520579D();
	if (bParam1)
	{
		CAM::_0x06557F6D96C86881();
	}
}

bool func_68(bool bParam0, float fParam1)
{
	if (bLocal_151)
	{
		if (Local_32.f_54)
		{
			if (!Local_32.f_95 && fParam1 < 0.985f)
			{
				return false;
			}
		}
		return bParam0;
	}
	if (fParam1 > 0.985f || Local_32.f_59)
	{
		return true;
	}
	return (Local_32.f_95 && bParam0);
}

void func_69(var uParam0)
{
	CAM::_0x0961B089947BA6D0(uParam0->f_8);
	CAM::_CLAMP_GAMEPLAY_CAM_YAW(uParam0->f_9, uParam0->f_10);
	CAM::_CLAMP_GAMEPLAY_CAM_PITCH(uParam0->f_11, uParam0->f_12);
}

int func_70()
{
	return Global_1897952->f_41;
}

void func_71(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = iParam0 * 1000;
	if ((iVar0 + MISC::GET_GAME_TIMER()) > Global_1327479->f_4)
	{
		func_168(iParam0, iParam1, bParam2);
	}
	else
	{
		iVar0 = (iVar0 / 2);
		if ((iVar0 + MISC::GET_GAME_TIMER()) > Global_1327479->f_5)
		{
			Global_1327479->f_5 = (MISC::GET_GAME_TIMER() + iVar0);
		}
	}
}

void func_72(var uParam0, int iParam1)
{
	var uVar0;

	uVar0 = func_169(iParam1);
	PED::_0xB285AD0EC870B2DF(uParam0, uVar0);
	func_170();
}

void func_73()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_146(Global_36, 1);
	iVar1 = func_70();
	iVar2 = func_171();
	if (func_172(iVar0) && 32 != iVar0)
	{
		iVar3 = ((*Global_1888801)[iVar0 /*35*/])->f_4;
		if (VOLUME::_0x92A78D0BEDB332A3(iVar3) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iVar3, false, 0))
		{
			func_174(iVar0, iVar1, iVar2, func_173(0), -1, 1);
		}
		else
		{
			func_174(-1, iVar1, iVar2, func_173(0), -1, 1);
		}
	}
	else
	{
		func_174(iVar0, iVar1, iVar2, func_173(0), -1, 1);
	}
}

void func_74(int iParam0)
{
	Global_40.f_9422[iParam0 /*7*/] = func_175();
}

void func_75()
{
	func_59(Global_1935630, 4096);
	func_176();
	func_97(0, 0);
	func_177();
	func_178(0f, 0f, 0f);
	Global_40.f_9.f_15 = -1;
	func_179(0);
	Global_1310720->f_1 = { 0f, 0f, 0f };
	Global_40.f_9.f_10 = -1;
	Global_40.f_9.f_12 = 0;
	Global_40.f_9.f_13 = 0f;
	Global_1310720->f_4 = 0;
	Global_1310720->f_6 = 0;
	Global_1310720->f_7 = 0;
	Global_1310720->f_8 = 1;
	Global_1310720->f_13 = 0;
	Global_1310720->f_14 = 0;
	Global_1310720->f_12 = 0;
	Global_1310720->f_27 = 0;
	Global_1310720->f_28 = 0;
	Global_1310720->f_29 = -1;
	Global_1935630->f_4 = 0;
	Global_1897952->f_40 = 0;
	Global_1310720->f_24 = joaat("weapon_unarmed");
	Global_1310720->f_22 = -1;
	func_180(0);
	func_181(0);
	MAP::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	func_182(1);
	func_183(0);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DEATH_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("DEATH_SCENE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DYING_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("DYING_SCENE");
	}
}

void func_76(int iParam0)
{
	Global_1900383->f_316 = (Global_1900383->f_316 - (Global_1900383->f_316 && iParam0));
}

void func_77(int iParam0, bool bParam1)
{
	struct<2> Var0;
	struct<6> Var22;
	int iVar29;
	float fVar30;
	var uVar31;
	var uVar32;
	float fVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	bool bVar37;
	var uVar38;
	var uVar39;
	bool bVar40;
	bool bVar41;
	int iVar42;

	Var0.f_1 = 20;
	if ((func_184(iParam0, 1573112293) || func_184(iParam0, 672467738)) || func_184(iParam0, -550842268))
	{
		bVar37 = true;
	}
	if (func_185(iParam0) == 2085633299)
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
				fVar30 = func_186(0, Var22.f_2);
				func_97(Var22.f_2, 1);
				func_187(0, 7000);
				bVar41 = true;
			}
			else if (-1104847406 == Var22.f_1)
			{
				uVar31 = func_186(2, Var22.f_2);
				func_188(Var22.f_2);
				func_187(2, 7000);
				bVar40 = true;
			}
			else if (381158954 == Var22.f_1)
			{
				uVar32 = func_186(1, Var22.f_2);
				func_189(Var22.f_2);
				func_187(1, 7000);
			}
			else if (-416929031 == Var22.f_1)
			{
				fVar33 = func_190(Var22.f_2, Var22.f_5);
				if (func_191(&uVar38, &uVar39, fVar33))
				{
					func_192(fVar33, 1, bVar37, bParam1);
					func_187(0, 7000);
				}
				bVar41 = true;
			}
			else if (1857353317 == Var22.f_1)
			{
				fVar34 = func_190(Var22.f_2, Var22.f_5);
				if (func_191(&uVar38, &uVar39, fVar34))
				{
					func_193(fVar34, 1, bVar37, bParam1);
					func_187(2, 7000);
				}
				bVar40 = true;
			}
			else if (1681823811 == Var22.f_1)
			{
				fVar35 = func_190(Var22.f_2, Var22.f_5);
				if (func_191(&uVar38, &uVar39, fVar35))
				{
					func_194(fVar35, 1, bVar37, bParam1);
					func_187(1, 7000);
				}
			}
			else if (2062242710 == Var22.f_1)
			{
				fVar36 = func_195(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_196(19, fVar36);
				bVar41 = true;
			}
			else if (-826379728 == Var22.f_1)
			{
				fVar36 = func_195(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_196(20, fVar36);
				bVar40 = true;
			}
			else if (-1191740624 == Var22.f_1)
			{
				fVar36 = func_195(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_196(18, fVar36);
			}
			else if (1869697234 == Var22.f_1)
			{
				fVar36 = func_195(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_196(0, fVar36);
				bVar41 = true;
			}
			else if (1342237631 == Var22.f_1)
			{
				fVar36 = func_195(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_196(2, fVar36);
				bVar40 = true;
			}
			else if (-1240225157 == Var22.f_1)
			{
				fVar36 = func_195(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_196(1, fVar36);
			}
			else if (-816334026 == Var22.f_1)
			{
				func_197(BUILTIN::TO_FLOAT(Var22.f_2), 1);
			}
			iVar29++;
		}
		if (bVar41)
		{
			if (fVar33 > 0f || fVar30 > 0f)
			{
				iVar42 = 1;
			}
		}
		if (iVar42 || func_184(iParam0, -537818634))
		{
			func_199(func_198(-704089207), 1);
		}
		if (func_184(iParam0, -1457797660))
		{
			func_199(func_198(-1909697259), 1);
		}
		if (bVar40)
		{
			func_199(func_198(704570463), 1);
		}
		PLAYER::_0x0E1DB1F8F5B561DC(fVar30, uVar32, uVar31, BUILTIN::ROUND((fVar33 / 2f)), BUILTIN::ROUND((fVar35 / 2f)), BUILTIN::ROUND((fVar34 / 2f)));
	}
}

void func_78(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_200(&Global_0, 8);
	}
	if (!func_124() || func_201() != -1)
	{
		return;
	}
	func_200(&Global_0, 1);
}

void func_79(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 - (Global_1310750->f_16035 && iParam0));
}

void func_80(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 - (Global_1572864->f_3 && iParam0));
}

void func_81()
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	WEAPON::_0xAA5A52204E077883(Global_35, 529538990);
	WEAPON::_0xAA5A52204E077883(Global_35, -596647170);
	WEAPON::_0xAA5A52204E077883(Global_35, -1548100798);
	WEAPON::_0xAA5A52204E077883(Global_35, -159383285);
	WEAPON::_0xAA5A52204E077883(Global_35, -1233969318);
	WEAPON::_0xAA5A52204E077883(Global_35, -1860710511);
	WEAPON::_0xAA5A52204E077883(Global_35, 1507636870);
	WEAPON::_0xAA5A52204E077883(Global_35, 1828724907);
	WEAPON::_0xAA5A52204E077883(Global_35, 1270940175);
	WEAPON::_0xAA5A52204E077883(Global_35, -1857826511);
}

int func_82(int iParam0, var uParam1)
{
	if (!func_202(iParam0))
	{
		return 0;
	}
	*uParam1 = Global_1914270[iParam0];
	if (*uParam1 == 0)
	{
		return 0;
	}
	return 1;
}

Vector3 func_83(var uParam0)
{
	struct<4> Var0;
	vector3 vVar5;

	if (!func_82(15, &Var0))
	{
		return 0f, 0f, 0f;
	}
	Var0.f_3 = uParam0;
	Var0.f_2 = -786414325;
	DATAFILE::_DATAFILE_GET_FLOAT(&vVar5, &Var0);
	Var0.f_2 = -1756016266;
	DATAFILE::_DATAFILE_GET_FLOAT(&(vVar5.f_1), &Var0);
	Var0.f_2 = -1264284652;
	DATAFILE::_DATAFILE_GET_FLOAT(&(vVar5.f_2), &Var0);
	return vVar5;
}

void func_84(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_85()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 955)
	{
		if (func_203(iVar0, 2097152))
		{
			func_204(iVar0);
		}
		iVar0++;
	}
}

void func_86(bool bParam0)
{
	if (func_201() != -1)
	{
		return;
	}
	if (bParam0 && ATTRIBUTE::_0x200373A8DF081F22(Global_35, 0))
	{
		return;
	}
	if (Global_40.f_11095.f_43 == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		func_54(89, 1);
		ATTRIBUTE::_0xFB6E111908502871(5);
	}
	else
	{
		func_54(90, 1);
		ATTRIBUTE::_0x3FC4C027FD0936F4(5);
	}
	func_205(1, bParam0, 1);
	func_206();
	Global_40.f_11095.f_43 = bParam0;
}

bool func_87(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

void func_88()
{
	if (!func_207(&Global_1327479))
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
	func_208(0);
	Global_1327479 = -1;
	Global_1310750->f_16075 = 0;
	Global_1310750->f_16076 = 0;
	Global_1310750->f_16103 = { 0f, 0f, 0f };
}

void func_89(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 || iParam0);
}

void func_90(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	if (func_209() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0 /*9*/];
		if (((func_207(iVar1) && !func_210(iVar1, iParam2)) && (!bParam3 || !func_211(iVar1))) && (!bParam4 || !func_212(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_213(iVar0);
			}
		}
		iVar0++;
	}
}

void func_91()
{
	int iVar0;

	VOLUME::_0x748C5F51A18CB8F0(0);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_214(iVar0))
		{
			func_215(iVar0);
		}
		iVar0++;
	}
	VOLUME::_0x748C5F51A18CB8F0(1);
}

void func_92()
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_PED_ID();
	ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 0);
	ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 1);
	ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 2);
	ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 19);
	ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 18);
	ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 20);
}

void func_93(int iParam0)
{
	Global_1900383->f_316 = (Global_1900383->f_316 || iParam0);
}

void func_94()
{
	ATTRIBUTE::_0xC6258F41D86676E0(Global_35, func_216(0), func_218(BUILTIN::ROUND(func_217(0))));
	ATTRIBUTE::_0xC6258F41D86676E0(Global_35, func_216(2), func_218(BUILTIN::ROUND(func_217(2))));
	ATTRIBUTE::_0xC6258F41D86676E0(Global_35, func_216(1), func_218(BUILTIN::ROUND(func_217(1))));
}

void func_95(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar2 = 0;
	while (iVar2 < 29)
	{
		iVar4 = iVar2;
		if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar3, false, iVar4, true))
		{
			if (func_152(iVar3) && WEAPON::_0x705BE297EEBDB95D(iVar3))
			{
				if (bParam0)
				{
					if (WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, iVar3) < WEAPON::_0xD3750CCC00635FC2(iVar3) * 4)
					{
						WEAPON::_0x106A811C6D3035F3(Global_35, WEAPON::_0x5C2EA6C44F515F34(iVar3), (WEAPON::_0xD3750CCC00635FC2(iVar3) * 4 - WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(Global_35, iVar3))), 752097756);
					}
				}
				iVar0 = WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, iVar3);
				if (iVar0 > WEAPON::_0xD3750CCC00635FC2(iVar3))
				{
					iVar1 = WEAPON::_0xD3750CCC00635FC2(iVar3);
				}
				else
				{
					iVar1 = iVar0;
				}
				if (iVar1 > 0)
				{
					WEAPON::SET_AMMO_IN_CLIP(Global_35, iVar3, iVar1);
				}
				iVar1 = 0;
				iVar0 = 0;
			}
		}
		iVar2++;
	}
	if (iParam1 && PLAYER::_0x21091B4BEB6376EE(PLAYER::GET_PLAYER_INDEX()) == 0)
	{
		func_188(1);
	}
}

void func_96(float fParam0)
{
	if (func_217(1) < fParam0)
	{
		func_219(1, fParam0, 0);
	}
	if (func_217(2) < fParam0)
	{
		func_219(2, fParam0, 0);
	}
	if (func_217(0) < fParam0)
	{
		func_219(0, fParam0, 0);
	}
}

void func_97(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = (50 * iParam0);
	iVar1 = (iVar0 + ENTITY::GET_ENTITY_HEALTH(Global_35));
	if (iParam1 && iVar0 < 0)
	{
		ENTITY::_0x835F131E7DC8F97A(Global_35, BUILTIN::TO_FLOAT(iVar0), 0, 0);
	}
	else if (iParam0 <= 0 || iVar1 > ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, 0))
	{
		ENTITY::_SET_ENTITY_HEALTH(Global_35, ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, 0), 0);
	}
	else
	{
		ENTITY::_SET_ENTITY_HEALTH(Global_35, iVar1, 0);
	}
}

void func_98(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::CLEAR_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_99(int iParam0)
{
	func_220(1);
}

void func_100(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (iParam0 == 0 && Global_43890 == 1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (&Global_40.f_11922[iVar0] == 0)
		{
			Jump @96; //curOff = 52
		}
		else
		{
			func_221(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_222(1);
	}
}

int func_101()
{
	return &Global_1572864;
}

int func_102()
{
	return Global_1572864->f_1;
}

bool func_103(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_104(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_105(int iParam0)
{
	return iParam0 != 0;
}

char* func_106(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_107(var uParam0)
{
	return 0;
}

char* func_108(int iParam0)
{
	switch (iParam0)
	{
		case -185966659:
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@CRACK_NECK@A";
		case 66846176:
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@CRACK_NECK@B";
		case -19403560:
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@LONGARM_LHAND@CRACK_NECK@A";
		case 2104060417:
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@LONGARM_LHAND@CRACK_NECK@B";
		case 1463702522:
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@CLOSE_JOURNAL@A";
		case 2027951929:
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@CLOSE_JOURNAL@B";
		case 1518222163:
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@NEAR_WATER@UNARMED@CROUCH_STREAM_WASH@A";
		case 1800396022:
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@NEAR_WATER@UNARMED@CROUCH_STREAM_WASH@B";
		case 1976496628:
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@NEAR_WATER@UNARMED@CROUCH_STREAM_WASH@C";
		case -1004503052:
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@NEAR_WATER@UNARMED@CROUCH_STREAM_DRINK@A";
		case -1596974809:
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@NEAR_WATER@LONGARM_LHAND@CROUCH_STREAM_DRINK@A";
		case -2107723768:
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@STAND_LEAN_BACK_FLASK@A";
		case 1340451534:
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@LONGARM_LHAND@STAND_LEAN_BACK_FLASK@A";
		case -1913079219:
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@SITTING_JOURNAL_WRITING@FRONT";
		case 2128873684:
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@SITTING_JOURNAL_WRITING@LEFT";
		case -1010401158:
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@SITTING_JOURNAL_WRITING@RIGHT";
		case -214559992:
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@SITTING_JOURNAL_WRITING@A";
		case 686325356:
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@SITTING_JOURNAL_WRITING@B";
		case 381540887:
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@SITTING_JOURNAL_WRITING@C";
		case 316780682:
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@LONGARM_LHAND@SITTING_JOURNAL_WRITING";
		case 1239390025:
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@LONGARM_LHAND@SITTING_JOURNAL_WRITING@FRONT";
		case 125605334:
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@LONGARM_LHAND@SITTING_JOURNAL_WRITING@LEFT";
		case 1584041378:
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@LONGARM_LHAND@SITTING_JOURNAL_WRITING@RIGHT";
		case 37281077:
			return "SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@LONGARM_LHAND@STAND_BOOT_CLEAN@A";
		case -749620600:
			return "SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@UNARMED@STAND_BOOT_CLEAN@A";
		case -1095573285:
			return "SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@UNARMED@STAND_ADJUST_BELT@A";
		case -1276064937:
			return "SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@UNARMED@STAND_ADJUST_BELT@B";
		case -871171169:
			return "SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@UNARMED@STAND_ADJUST_BELT@C";
		case -397482133:
			return "SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@LONGARM_LHAND@STAND_ADJUST_BELT@A";
		case 2066418953:
			return "SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@LONGARM_LHAND@STAND_ADJUST_BELT@B";
		case 800383740:
			return "SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@LONGARM_RHAND@STAND_ADJUST_BELT@A";
		case -2116985826:
			return "SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@UNARMED@CROUCH_SMOKE_END@A";
		case 1409100774:
			return "SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@LONGARM_LHAND@CROUCH_SMOKE_END@A";
		case 630345489:
			return "SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@LONGARM_LHAND@CROUCH_SMOKE_END@B";
		case -827855128:
			return "SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@FLIES@UNARMED@SWAT_FLIES@A";
		case -110869404:
			return "SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@FLIES@UNARMED@SWAT_FLIES@B";
		case -415916025:
			return "SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@FLIES@UNARMED@SWAT_FLIES@C";
		case -1794259911:
			return "SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@FLIES@LONGARM_LHAND@SWAT_FLIES@A";
		case 1221012397:
			return "SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@FLIES@LONGARM_LHAND@SWAT_FLIES@B";
		case -173282665:
			return "SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@HOT@HAT_LHAND@WIPE_BROW@A";
		case -1325104331:
			return "SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@HOT@HAT_RHAND@WIPE_BROW@A";
		case -2047169334:
			return "SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@HOT@HAT_RHAND@WIPE_BROW@B";
		case -2105832335:
			return "SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@HOT@LONGARM_LHAND@WIPE_BROW@A";
		case -935782421:
			return "SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@HOT@LONGARM_LHAND@WIPE_BROW@B";
		case -591725357:
			return "SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@SPIT@A";
		case -1475243135:
			return "SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@SPIT@B";
		case -2077602893:
			return "SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@SPIT@C";
		case 1482557486:
			return "SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@SPITLONGARM_LHAND@A";
		case 1788193949:
			return "SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@SPITLONGARM_LHAND@B";
		case 1960558889:
			return "SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@SPITLONGARM_LHAND@C";
		case 26263816:
			return "SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@UNARMED@CROUCH_ADMIRE_VIEW@A";
		case -94704183:
			return "SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@LONGARM_RHAND@CROUCH_ADMIRE_VIEW@A";
		case 1172786108:
			return "SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@LONGARM_2HAND@CROUCH_ADMIRE_VIEW@A";
		case -1229243347:
			return "SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@UNARMED_HAT@SIT_WAKE_UP@A";
		case -1105470035:
			return "SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@UNARMED@LEAN_LEFT_ARMS_CROSSED@A";
		case -1208381631:
			return "SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@LONGARM_LHAND@LEAN_LEFT_ARMS_CROSSED@A";
		case 1382564242:
			return "SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@UNARMED@SIT_LEAN_FORWARDS@A";
		case -474529375:
			return "SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@LONGARM_LHAND@SIT_LEAN_FORWARDS@A";
		case -852899302:
			return "SCRIPT_RESPAWN@HORSE@MOUNTED_UNARMED";
		case 1220957019:
			return "SADDLE_LEAN_FWD_PETWHISPERS_LT";
		case -1912252244:
			return "SADDLE_LEAN_FWD_PETWHISPERS_RT";
		case 1223167950:
			return "SADDLE_LEAN_FWD_FLYSWAT1";
		case 485153712:
			return "SADDLE_LEAN_FWD_SPITWIPE_LT";
		case -1470624315:
			return "SADDLE_LEAN_FWD_LOOKING_IDLE";
		case 556503696:
			return "SADDLE_LEAN_FWD_EXIT_ADJUST";
		case -1981043288:
			return "SADDLE_LEAN_FWD_EXIT_LEG_STRETCH";
		case -799926407:
			return "SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@UNARMED@CROUCH_ADMIRE_VIEW@A@IDLES";
		case -1723466391:
			return "SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@LONGARM_RHAND@CROUCH_ADMIRE_VIEW@A@IDLES";
		case -993418620:
			return "SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@LONGARM_2HAND@CROUCH_ADMIRE_VIEW@A@IDLES";
		case 1966012548:
			return "SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@UNARMED_HAT@SIT_WAKE_UP@A@IDLES";
		case 1296743560:
			return "SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@UNARMED@LEAN_LEFT_ARMS_CROSSED@A@IDLES";
		case 1435234110:
			return "SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@LONGARM_LHAND@LEAN_LEFT_ARMS_CROSSED@A@IDLES";
		case 1435719824:
			return "SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@UNARMED@SIT_LEAN_FORWARDS@A@IDLES";
		case -1074572474:
			return "SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@LONGARM_LHAND@SIT_LEAN_FORWARDS@A@IDLES";
		default:
			break;
	}
	return "";
}

char* func_109(int iParam0)
{
	switch (iParam0)
	{
		case -185966659:
			return "UNARMED@CRACK_NECK@A";
		case 66846176:
			return "UNARMED@CRACK_NECK@B";
		case -19403560:
			return "LHAND@CRACK_NECK@A";
		case 2104060417:
			return "LHAND@CRACK_NECK@B";
		case 1463702522:
			return "UNARMED@CLOSE_JOURNAL@A";
		case 2027951929:
			return "UNARMED@CLOSE_JOURNAL@B";
		case 1518222163:
			return "UNARMED@CROUCH_STREAM_WASH@A";
		case 1800396022:
			return "UNARMED@CROUCH_STREAM_WASH@B";
		case 1976496628:
			return "UNARMED@CROUCH_STREAM_WASH@C";
		case -1596974809:
			return "LHAND@CROUCH_STREAM_DRINK@A";
		case -1004503052:
			return "UNARMED@CROUCH_STREAM_DRINK@A";
		case -2107723768:
			return "UNARMED@STAND_LEAN_BACK_FLASK@A";
		case 1340451534:
			return "LHAND@STAND_LEAN_BACK_FLASK@A";
		case -1913079219:
			return "UNARMED@SITTING_JOURNAL_WRITING@FRONT";
		case 2128873684:
			return "UNARMED@SITTING_JOURNAL_WRITING@LEFT";
		case -1010401158:
			return "UNARMED@SITTING_JOURNAL_WRITING@RIGHT";
		case -214559992:
			return "UNARMED@SITTING_JOURNAL_WRITING@A";
		case 686325356:
			return "UNARMED@SITTING_JOURNAL_WRITING@B";
		case 381540887:
			return "UNARMED@SITTING_JOURNAL_WRITING@C";
		case 316780682:
			return "LHAND@SITTING_JOURNAL_WRITING";
		case 1239390025:
			return "LHAND@SITTING_JOURNAL_WRITING@FRONT";
		case 125605334:
			return "LHAND@SITTING_JOURNAL_WRITING@LEFT";
		case 1584041378:
			return "LHAND@SITTING_JOURNAL_WRITING@RIGHT";
		case 37281077:
			return "LHAND@STAND_BOOT_CLEAN@A";
		case -749620600:
			return "UNARMED@STAND_BOOT_CLEAN@A";
		case -1095573285:
			return "UNARMED@STAND_ADJUST_BELT@A";
		case -1276064937:
			return "UNARMED@STAND_ADJUST_BELT@B";
		case -871171169:
			return "UNARMED@STAND_ADJUST_BELT@C";
		case -397482133:
			return "LHAND@STAND_ADJUST_BELT@A";
		case 2066418953:
			return "LHAND@STAND_ADJUST_BELT@B";
		case 800383740:
			return "RHAND@STAND_ADJUST_BELT@A";
		case -2116985826:
			return "UNARMED@CROUCH_SMOKE_END@A";
		case 1409100774:
			return "LHAND@CROUCH_SMOKE_END@A";
		case 630345489:
			return "LHAND@CROUCH_SMOKE_END@B";
		case -827855128:
			return "UNARMED@SWAT_FLIES@A";
		case -110869404:
			return "UNARMED@SWAT_FLIES@B";
		case -415916025:
			return "UNARMED@SWAT_FLIES@C";
		case -1794259911:
			return "LHAND@SWAT_FLIES@A";
		case 1221012397:
			return "LHAND@SWAT_FLIES@B";
		case -173282665:
			return "LHAND@WIPE_BROW@A";
		case -1325104331:
			return "RHAND@WIPE_BROW@A";
		case -2047169334:
			return "RHAND@WIPE_BROW@B";
		case -2105832335:
			return "LHAND@WIPE_BROW@A";
		case -935782421:
			return "LHAND@WIPE_BROW@B";
		case -591725357:
			return "UNARMED@SPIT@A";
		case -1475243135:
			return "UNARMED@SPIT@B";
		case -2077602893:
			return "UNARMED@SPIT@C";
		case 1482557486:
			return "LHAND@SPIT@A";
		case 1788193949:
			return "LHAND@SPIT@B";
		case 1960558889:
			return "LHAND@SPIT@C";
		case -852899302:
			return "HORSE@MOUNTED_UNARMED";
		case 26263816:
			return "UNARMED@CROUCH_ADMIRE_VIEW@A";
		case -94704183:
			return "LONGARM_RHAND@CROUCH_ADMIRE_VIEW@A";
		case 1172786108:
			return "LONGARM_2HAND@CROUCH_ADMIRE_VIEW@A";
		case -1229243347:
			return "UNARMED_HAT@SIT_WAKE_UP@A";
		case -1105470035:
			return "UNARMED@LEAN_LEFT_ARMS_CROSSED@A";
		case -1208381631:
			return "LHAND@LEAN_LEFT_ARMS_CROSSED@A";
		case 1382564242:
			return "UNARMED@SIT_LEAN_FORWARDS@A";
		case -474529375:
			return "LONGARM_LHAND@SIT_LEAN_FORWARDS@A";
		case -799926407:
			return "UNARMED@CROUCH_ADMIRE_VIEW@A@IDLES";
		case -1723466391:
			return "RHAND@CROUCH_ADMIRE_VIEW@A@IDLES";
		case -993418620:
			return "2HAND@CROUCH_ADMIRE_VIEW@A@IDLES";
		case 1966012548:
			return "UNARMED_HAT@SIT_WAKE_UP@A@IDLES";
		case 1296743560:
			return "UNARMED@LEAN_LEFT_ARMS_CROSSED@A@IDLES";
		case 1435234110:
			return "LHAND@LEAN_LEFT_ARMS_CROSSED@A@IDLES";
		case 1435719824:
			return "UNARMED@SIT_LEAN_FORWARDS@A@IDLES";
		case -1074572474:
			return "LHAND@SIT_LEAN_FORWARDS@A@IDLES";
		default:
			break;
	}
	return "";
}

void func_110(var uParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;
	struct<5> Var6;
	int iVar11;

	func_82(15, &Var1);
	Var1.f_2 = -1374679209;
	Var1.f_3 = iParam1;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var1.f_1), &Var1))
	{
		Var1.f_2 = 805008619;
		Var1.f_3 = MISC::GET_RANDOM_INT_IN_RANGE(0, DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var1, Var1.f_1));
		DATAFILE::_DATAFILE_GET_HASH(&iVar0, &Var1);
		uParam0->f_17 = func_108(iVar0);
	}
	Var1 = { Var6 };
	func_82(15, &Var1);
	Var1.f_2 = 669343399;
	Var1.f_3 = iParam1;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var1.f_1), &Var1))
	{
		Var1.f_2 = 1312010450;
		Var1.f_3 = MISC::GET_RANDOM_INT_IN_RANGE(0, DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var1, Var1.f_1));
		DATAFILE::_DATAFILE_GET_HASH(&iVar0, &Var1);
		uParam0->f_18 = func_108(iVar0);
	}
	Var1 = { Var6 };
	func_82(15, &Var1);
	Var1.f_2 = 908023140;
	Var1.f_3 = iParam1;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var1.f_1), &Var1))
	{
		while (iVar11 < DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var1, Var1.f_1))
		{
			Var1.f_2 = -1100654060;
			Var1.f_3 = iVar11;
			DATAFILE::_DATAFILE_GET_HASH(&iVar0, &Var1);
			uParam0->f_19[iVar11] = func_108(iVar0);
			iVar11++;
		}
		uParam0->f_52 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var1, Var1.f_1);
		uParam0->f_25 = (uParam0->f_52 - 1);
	}
}

void func_111(var uParam0, var uParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;

	func_82(15, &Var0);
	Var0.f_2 = -1571721931;
	Var0.f_3 = uParam1;
	Var0.f_4 = iParam2;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = -495185473;
		DATAFILE::_DATAFILE_GET_VECTOR(&(uParam0->f_30), &Var0);
		Var0.f_2 = -1276360309;
		DATAFILE::_DATAFILE_GET_FLOAT(&(uParam0->f_33), &Var0);
		Var0.f_2 = 1081618208;
		DATAFILE::_DATAFILE_GET_VECTOR(&(uParam0->f_39.f_1), &Var0);
		Var0.f_2 = -1993680615;
		DATAFILE::_DATAFILE_GET_VECTOR(&(uParam0->f_39.f_4), &Var0);
		Var0.f_2 = 151706215;
		DATAFILE::_DATAFILE_GET_FLOAT(&(uParam0->f_39.f_7), &Var0);
		Var0.f_2 = 1075437165;
		DATAFILE::_DATAFILE_GET_VECTOR(&(uParam0->f_34), &Var0);
		Var0.f_2 = 482880665;
		DATAFILE::_DATAFILE_GET_FLOAT(&(uParam0->f_37), &Var0);
		Var0.f_2 = 1818584824;
		DATAFILE::_DATAFILE_GET_BOOL(&(uParam0->f_38), &Var0);
		Var0.f_2 = -2069884107;
		DATAFILE::_DATAFILE_GET_HASH(&iVar5, &Var0);
		if (iVar5 == 2120712167 || iVar5 == 0)
		{
			uParam0->f_73 = 0;
		}
		else
		{
			uParam0->f_73 = iVar5;
		}
		Var0.f_2 = 2009151738;
		DATAFILE::_DATAFILE_GET_INT(&(uParam0->f_74), &Var0);
		Var0.f_2 = -1565059035;
		DATAFILE::_DATAFILE_GET_INT(&(uParam0->f_75), &Var0);
		Var0.f_2 = 1786497406;
		DATAFILE::_DATAFILE_GET_BOOL(&(uParam0->f_96), &Var0);
		Var0.f_2 = -182204340;
		DATAFILE::_DATAFILE_GET_STRING(&(uParam0->f_76), &Var0);
		Var0.f_2 = -2016118713;
		DATAFILE::_DATAFILE_GET_STRING(&(uParam0->f_84), &Var0);
	}
}

int func_112(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

Vector3 func_113(vector3 vParam0)
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

int func_114(int iParam0)
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

void func_115()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1393237->f_11)
	{
		func_223(iVar0);
		iVar0++;
	}
}

int func_116(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_117(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_118(var uParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(func_48(uParam0, 0)))
	{
		STREAMING::REQUEST_ANIM_DICT(func_48(uParam0, 0));
		if (!STREAMING::HAS_ANIM_DICT_LOADED(func_48(uParam0, 0)))
		{
			return 0;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(func_48(uParam0, 1)))
	{
		STREAMING::REQUEST_ANIM_DICT(func_48(uParam0, 1));
		if (!STREAMING::HAS_ANIM_DICT_LOADED(func_48(uParam0, 1)))
		{
			return 0;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_13))
	{
		STREAMING::REQUEST_ANIM_DICT(uParam0->f_13);
		if (!STREAMING::HAS_ANIM_DICT_LOADED(uParam0->f_13))
		{
			return 0;
		}
	}
	return 1;
}

int func_119()
{
	bool bVar0;
	var uVar1;
	bool bVar2;
	vector3 vVar3;
	var uVar6;
	vector3 vVar7;
	var uVar10;
	vector3 vVar11;
	int iVar14;
	int iVar15;
	struct<11> Var16;
	bool bVar27;
	vector3 vVar28;
	var uVar31;
	vector3 vVar32;
	var uVar35;
	vector3 vVar36;
	int iVar39;
	float fVar40;
	int iVar41;
	vector3 vVar42;
	vector3 vVar45;
	var uVar48;
	vector3 vVar49;
	int iVar52;
	struct<11> Var53;

	if (func_116(Local_32.f_34))
	{
		return 1;
	}
	if (!func_224(&bVar0, &uVar1))
	{
		if (func_225())
		{
			bVar0 = true;
		}
		else
		{
			return 1;
		}
	}
	bVar2 = false;
	if (ENTITY::DOES_ENTITY_EXIST(Local_32.f_98))
	{
		bVar2 = true;
	}
	if (!bVar2 && bVar0)
	{
		vVar3 = { Local_32.f_34 };
		uVar6 = Local_32.f_37;
		if (func_226(0))
		{
			vVar7 = { Local_32.f_100 };
			uVar10 = Local_32.f_103;
			if (!func_116(vVar7))
			{
				vVar3 = { vVar7 };
				uVar6 = uVar10;
			}
		}
		vVar11 = { vVar3 };
		if (!func_121(&vVar11, 50, 10, 0))
		{
		}
		if ((vVar11.z - 0.5f) < vVar3.z && (vVar11.z + 6f) > vVar3.z)
		{
			vVar3 = { vVar11 };
		}
		iVar14 = 0;
		if (func_227() == 0)
		{
			iVar14 = 1;
		}
		Var16.f_10 = 7;
		Var16.f_10 = 0;
		Var16 = 1;
		Var16.f_2 = 1;
		Var16.f_4 = iVar14;
		Var16.f_5 = 1;
		Var16.f_6 = { vVar3 };
		Var16.f_9 = uVar6;
		Local_32.f_98 = func_228(&iVar15, &Var16);
		if (iVar15 == 2 && ENTITY::DOES_ENTITY_EXIST(Local_32.f_98))
		{
			bVar2 = true;
		}
		else if (iVar15 == 1)
		{
			bVar2 = true;
		}
	}
	else
	{
		bVar2 = true;
	}
	bVar27 = false;
	if (ENTITY::DOES_ENTITY_EXIST(Local_32.f_99))
	{
		bVar27 = true;
	}
	if (!bVar27 && uVar1)
	{
		vVar28 = { Local_32.f_34 };
		uVar31 = Local_32.f_37;
		if (bVar0)
		{
			vVar32 = { Local_32.f_104 };
			uVar35 = Local_32.f_107;
			if (!func_116(vVar32))
			{
				vVar28 = { vVar32 };
				uVar31 = uVar35;
				iVar39 = 0;
				while (iVar39 < 9)
				{
					iVar41 = -1;
					if (iVar39 == func_229())
					{
						iVar41 = func_230();
					}
					if (iVar41 != -1 && func_231(iVar39, iVar41))
					{
						vVar36 = { func_232(iVar39) };
						if (!func_116(vVar36))
						{
							fVar40 = BUILTIN::VDIST2(vVar36, vVar28);
							if (fVar40 <= 100f)
							{
								vVar28 = { func_233(iVar39, -1) };
								uVar31 = func_234(iVar39);
							}
						}
					}
					iVar39++;
				}
			}
			else
			{
				vVar42 = { -2f, -2f, 0f };
				vVar28 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar28, 0f, vVar42) };
			}
		}
		if (func_226(1))
		{
			func_23(1, &vVar45, &uVar48);
			if (!func_116(vVar45))
			{
				vVar28 = { vVar45 };
				uVar31 = uVar31;
			}
		}
		vVar49 = { vVar28 };
		if (!func_121(&vVar49, 50, 10, 0))
		{
		}
		if ((vVar49.z - 0.5f) < vVar28.z && (vVar49.z + 6f) > vVar28.z)
		{
			vVar28 = { vVar49 };
		}
		Var53.f_10 = 7;
		Var53.f_10 = 1;
		Var53 = 1;
		Var53.f_2 = 1;
		Var53.f_5 = 1;
		Var53.f_6 = { vVar28 };
		Var53.f_9 = uVar31;
		Local_32.f_99 = func_228(&iVar52, &Var53);
		if (!bVar0)
		{
			Local_32.f_98 = Local_32.f_99;
		}
		if (iVar52 == 2 && ENTITY::DOES_ENTITY_EXIST(Local_32.f_99))
		{
			bVar27 = true;
		}
		else if (iVar52 == 1)
		{
		}
	}
	else
	{
		bVar27 = true;
	}
	if (bVar2 && bVar27)
	{
		return 1;
	}
	return 0;
}

var func_120(int iParam0)
{
	int iVar0;
	char cVar1[64];

	iVar0 = func_44();
	StringCopy(&cVar1, "script@respawn@sky@SkyTL_", 64);
	if (iParam0 >= 23 || iParam0 < 1)
	{
		StringConCat(&cVar1, "0000", 64);
	}
	else if (iParam0 >= 20)
	{
		StringConCat(&cVar1, "2100", 64);
	}
	else if (iParam0 >= 17)
	{
		StringConCat(&cVar1, "1800", 64);
	}
	else if (iParam0 >= 14)
	{
		StringConCat(&cVar1, "1500", 64);
	}
	else if (iParam0 >= 11)
	{
		StringConCat(&cVar1, "1200", 64);
	}
	else if (iParam0 >= 8)
	{
		StringConCat(&cVar1, "0900", 64);
	}
	else if (iParam0 >= 5)
	{
		StringConCat(&cVar1, "0600", 64);
	}
	else
	{
		StringConCat(&cVar1, "0300", 64);
	}
	switch (iVar0)
	{
		case -173507739:
		case 821931868:
		case 1500834021:
		case 1632247697:
		case 1679686673:
			StringConCat(&cVar1, "_01Clear", 64);
			break;
		case -1721991356:
		case -1233681761:
		case -1148613331:
		case -702816767:
		case -416908843:
		case -273223690:
		case 212278652:
		case 603685163:
			StringConCat(&cVar1, "_03Clouds", 64);
			break;
		case -1317052143:
		case 433385945:
		case 669657108:
		case 725623432:
		case 839715153:
		case 1420204096:
		case 1974067816:
		case 2082228755:
		case 2137137442:
			StringConCat(&cVar1, "_04Storm", 64);
			break;
		default:
			break;
	}
	return func_235(cVar1);
}

int func_121(var uParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_236(*uParam0, 0f, 0f, 0f))
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

int func_122()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < &Global_1898330)
	{
		if (!func_103(Global_1898330[iVar1]))
		{
		}
		else
		{
			func_237(iVar1, 0);
			if (func_103(Global_1898330[iVar1]))
			{
				switch (func_238(Global_1898330[iVar1]))
				{
					case 1:
						if (func_239(iVar1, 16) && !func_239(iVar1, 4))
						{
							iVar0 = 0;
						}
						break;
				}
			}
		}
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < Global_40.f_450)
	{
		if (func_139(&(Global_40.f_450[iVar2])))
		{
			if (SCRIPTS::IS_THREAD_ACTIVE(((*Global_1347702)[&Global_40.f_450[iVar2] /*49*/])->f_42, false))
			{
				if (!func_240(((*Global_1347702)[&Global_40.f_450[iVar2] /*49*/])->f_13, 64))
				{
					iVar0 = 0;
				}
			}
		}
		iVar2++;
	}
	return iVar0;
}

bool func_123(int iParam0)
{
	return (Global_21 && iParam0) != 0;
}

int func_124()
{
	return 1;
	if (Global_1572887->f_12 == 0)
	{
		return 1;
	}
	return Global_40.f_1;
}

int func_125(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_242(func_241(iParam0), 1);
	if (iVar1 >= 39)
	{
		return 0;
	}
	if (&Global_1946804->f_1497.f_1[iVar1 /*3*/] != 0 && &Global_1946804->f_1497.f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1 /*3*/];
		if (func_243(iVar0) == iParam0)
		{
			*uParam1 = iVar0;
			return 1;
		}
	}
	*uParam1 = 0;
	return 0;
}

void func_126(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_127(struct<4> Param0)
{
	int iVar0;
	int iVar1;

	switch (Param0)
	{
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
		case 21:
		case 22:
		case 26:
			if (Global_1946804->f_850 >= 25)
			{
				return;
			}
			if (func_244(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1946804->f_850)
				{
					iVar1 = ((Global_1946804->f_855 + iVar0) % 25);
					if ((&Global_1946804->f_668[iVar1 /*4*/] == Param0 && (Global_1946804->f_668[iVar1 /*4*/])->f_1 == Param0.f_1) && (Global_1946804->f_668[iVar1 /*4*/])->f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_245(Param0);
			*(Global_1946804->f_668[Global_1946804->f_856 /*4*/]) = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_126(8);
			break;
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946804->f_851 >= 25)
			{
				return;
			}
			if (func_244(Param0))
			{
				return;
			}
			func_245(Param0);
			*(Global_1946804->f_567[Global_1946804->f_851 /*4*/]) = { Param0 };
			Global_1946804->f_851++;
			func_126(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_246(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

int func_128(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;

	if (func_247(iParam0, 1, 0))
	{
		if (func_248(iParam0))
		{
			iVar0 = func_249(iParam0, 0);
			if (_NAMESPACE48::_0x800DF3FC913355F3(iVar0))
			{
				if (!_NAMESPACE48::_0xA8120EBEAF290C7A(iVar0))
				{
					return 0;
				}
				if (uParam3 && !PED::_0xA0BC8FAED8CFEB3C(func_250(iParam0)))
				{
					return 0;
				}
				if ((uParam1 || !func_251(func_250(iParam0), 1116471296, -1082130432, -1082130432, -1082130432)) || CAM::IS_SCREEN_FADED_OUT())
				{
					_NAMESPACE48::_0xD4B614179BCD0654(iVar0);
					func_252(iParam0, 0);
					if (uParam2 && func_253(((*Global_1360165)[iParam0 /*1157*/])->f_63))
					{
						func_254(iParam0, 65, 0);
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

var func_129(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4)
{
	vector3 vVar0;
	var uVar3;

	vVar0.x = iParam3;
	vVar0.f_1 = sParam1;
	vVar0.f_2 = sParam2;
	uVar3 = _NAMESPACE76::_0x9F2CC2439A04E7BA(uParam0, &vVar0, iParam4);
	return uVar3;
}

bool func_130(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _NAMESPACE71::_0x59FA676177DBE4C9(iParam0) == 4;
}

int func_131(int iParam0)
{
	int iVar0;

	iVar0 = func_242(func_241(iParam0), 1);
	if (iVar0 != 39)
	{
		return (Global_1946804->f_1497.f_1[iVar0 /*3*/])->f_1;
	}
	return 0;
}

int func_132(int iParam0)
{
	if (func_125(81053684, iParam0))
	{
		return 1;
	}
	if (func_125(-525676072, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_133()
{
	return Global_1946804->f_2792;
}

int func_134(int iParam0)
{
	if (func_255())
	{
		return 0;
	}
	if (!func_256(iParam0, 0))
	{
		return 0;
	}
	if (!func_257(iParam0, 1, 0))
	{
		HUD::_0xBFFF81E12A745A5F();
		return 0;
	}
	return 1;
}

int func_135(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;

	bVar3 = func_258(iParam0);
	if (func_184(iParam0, -1303648999))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_34(&iVar2))
		{
			if (bVar1)
			{
				iVar0 = func_259();
			}
			else
			{
				iVar0 = func_260();
			}
		}
		else if (func_261(iParam1, 1))
		{
			iVar0 = 0;
		}
		else if (bVar1)
		{
			iVar0 = func_262();
		}
		else
		{
			iVar0 = func_263();
		}
	}
	else if (func_132(&iVar2))
	{
		if (func_184(iVar2, -1303648999))
		{
			iVar0 = func_259();
		}
		else
		{
			iVar0 = func_260();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_262();
	}
	else
	{
		iVar0 = func_263();
	}
	if (iVar0 != 0)
	{
		Global_1946804->f_2791 = MISC::GET_GAME_TIMER();
		TASK::_TASK_ITEM_INTERACTION(Global_35, iParam0, iVar0, 1, iParam1, -1082130432);
		return 1;
	}
	return 0;
}

bool func_136(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

bool func_137(int iParam0)
{
	return ((*Global_1835011)[iParam0 /*74*/])->f_63 & 64512 != 0;
}

void func_138(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_136(iParam0))
	{
		return;
	}
	if (func_264((*Global_1835011)[iParam0 /*74*/], 8192))
	{
		iVar0 = 1;
	}
	((*Global_1835011)[iParam0 /*74*/])->f_63 = 0;
	if (!bParam1 && iVar0)
	{
		((*Global_1835011)[iParam0 /*74*/])->f_63 |= 2;
		((*Global_1835011)[iParam0 /*74*/])->f_63 |= 8192;
	}
}

bool func_139(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

void func_140(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;

	if (!func_139(iParam0))
	{
		return;
	}
	bVar0 = true;
	if (!bParam1)
	{
		bVar0 = MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37);
	}
	func_265(&(((*Global_1347702)[iParam0 /*49*/])->f_14));
	func_266(&(((*Global_1347702)[iParam0 /*49*/])->f_12), 16384);
	func_267(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 4096);
	if (bVar0)
	{
		if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1048576 != 0 && ((*Global_1347702)[iParam0 /*49*/])->f_13 & 2048 == 0)
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			MAP::REMOVE_BLIP(&(((*Global_1347702)[iParam0 /*49*/])->f_37));
			if (iParam2 == 1)
			{
				func_269(iParam0, func_268(iParam0), 0, 0);
			}
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_18 > -1f)
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			MAP::REMOVE_BLIP(&(((*Global_1347702)[iParam0 /*49*/])->f_37));
			if (iParam2 == 1)
			{
				func_269(iParam0, func_270(iParam0), 0, 0);
			}
		}
		else
		{
			MAP::_0xB059D7BD3D78C16F(((*Global_1347702)[iParam0 /*49*/])->f_37, 724623647);
		}
	}
}

int func_141(int iParam0)
{
	switch (iParam0)
	{
		case -2045110373:
			return 5;
		case 2092390181:
			return 6;
		case 695356898:
			return 0;
		case 2093317438:
			return 2;
		case -145951480:
			return 4;
		case -432333475:
			return 1;
		case -1327067584:
			return 3;
		case -1192044061:
			return 7;
		case 1206762561:
			return 8;
		default:
			break;
	}
	return -1;
}

int func_142(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	if (PED::GET_MOUNT(iParam0) != iParam1)
	{
		PED::_SET_PED_ON_MOUNT(iParam0, iParam1, iParam3, bParam4);
		PED::SET_PED_CAN_BE_TARGETTED(iParam1, bParam2);
	}
	return 1;
}

int func_143()
{
	int iVar0;

	iVar0 = func_271();
	if (iVar0 <= -320)
	{
		return -320;
	}
	if (iVar0 <= -280)
	{
		return -280;
	}
	if (iVar0 <= -240)
	{
		return -240;
	}
	if (iVar0 <= -200)
	{
		return -200;
	}
	if (iVar0 <= -160)
	{
		return -160;
	}
	if (iVar0 <= -120)
	{
		return -120;
	}
	if (iVar0 <= -80)
	{
		return -80;
	}
	if (iVar0 <= -40)
	{
		return -40;
	}
	if (iVar0 >= 320)
	{
		return 320;
	}
	if (iVar0 >= 280)
	{
		return 280;
	}
	if (iVar0 >= 240)
	{
		return 240;
	}
	if (iVar0 >= 200)
	{
		return 200;
	}
	if (iVar0 >= 160)
	{
		return 160;
	}
	if (iVar0 >= 120)
	{
		return 120;
	}
	if (iVar0 >= 80)
	{
		return 80;
	}
	if (iVar0 >= 40)
	{
		return 40;
	}
	return 0;
}

int func_144(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case -40:
		case 40:
			return 1;
		case -80:
		case 80:
			return 2;
		case -120:
		case 120:
			return 3;
		case -160:
		case 160:
			return 4;
		case -200:
		case 200:
			return 5;
		case -240:
		case 240:
			return 6;
		case -280:
		case 280:
			return 7;
		case -320:
		case 320:
			return 8;
	}
	return 0;
}

float func_145(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_146(vector3 vParam0, bool bParam3)
{
	int iVar0;

	iVar0 = func_272();
	if (func_273(iVar0))
	{
		if (VOLUME::_0xF256A75210C5C0EB(((*Global_1888801)[iVar0 /*35*/])->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_274(vParam0, bParam3);
}

void func_147(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (Global_43890)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = func_275(Global_35, iVar0, 0, 1);
		if (WEAPON::IS_WEAPON_VALID(iVar1))
		{
			if (WEAPON::_0x0556E9D2ECF39D01(iVar1) || func_276(iVar1))
			{
				if (!bParam0 || (iVar0 != 7 && iVar0 != 9))
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_35, iVar1);
				}
			}
		}
		iVar0++;
	}
}

int func_148(int iParam0)
{
	if (!func_273(iParam0))
	{
		return 0;
	}
	return ((*Global_1888801)[iParam0 /*35*/])->f_20;
}

int func_149()
{
	return Global_40.f_4283.f_1;
}

bool func_150(int iParam0, int iParam1, bool bParam2, int iParam3)
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

int func_151(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

bool func_152(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("weapon_unarmed"));
}

int func_153(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iParam0 == Global_1900383[iVar0 /*45*/])
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_154(int iParam0, int iParam1)
{
	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return &((Global_40.f_1095.f_1[iParam0 /*436*/])->f_398[iParam1 /*4*/]);
}

void func_155(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iParam2 = func_277(iParam2, 0, 100);
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_398[iParam1 /*4*/] = iParam2;
	iVar0 = func_278(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
	}
	func_279(iVar0, iParam1, func_154(iParam0, iParam1));
	func_280(iVar0, iParam1);
}

char* func_156(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

int func_157(int iParam0, bool bParam1, int iParam2)
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
		if (func_281())
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
		iVar0 = func_282(&(Global_1898164->f_1[0 /*5*/]));
		if (func_139(iVar0) && func_283(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_103(&(Global_1898164->f_1[0 /*5*/])))
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

void func_158(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

int func_159(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return 0;
	}
	if (func_164(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_284(iParam0))
	{
		return 0;
	}
	if (func_285(iParam0))
	{
		return 0;
	}
	if ((Global_1898164->f_163 && !func_163(iParam0, 1)) || func_104(32768))
	{
		if (!func_163(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return 0;
		}
	}
	if (!func_286())
	{
		return 0;
	}
	return 1;
}

void func_160(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_161(int iParam0)
{
	struct<2> Var0;

	if (iParam0 <= 0)
	{
		return;
	}
	if (func_287(1) < iParam0)
	{
		iParam0 = func_287(1);
	}
	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	Var0 = { func_198(1644987397) };
	STATS::_0xBD861AE8A5181ED7(&Var0, iParam0);
}

void func_162(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_288(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

bool func_163(int iParam0, int iParam1)
{
	return ((Global_1905944->f_22[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

bool func_164(int iParam0, int iParam1)
{
	if (func_201() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iParam0]), iParam1);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iParam0]), iParam1);
}

int func_165(int iParam0, bool bParam1)
{
	switch (func_289(iParam0))
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

var func_166()
{
	return &Global_1899515;
}

void func_167(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_290(*uParam0);
	iVar1 = func_291(*uParam0);
	iVar2 = func_292(*uParam0);
	iVar3 = func_293(*uParam0);
	iVar4 = func_294(*uParam0);
	iVar5 = func_295(*uParam0);
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
	iVar6 = func_296(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_296(iVar1, iVar0);
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
	func_297(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_168(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = MISC::GET_GAME_TIMER();
	func_298(iParam0, iParam1, bParam2);
}

int func_169(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return -508547493;
		case 11966224:
			return -676452144;
		default:
			break;
	}
	return 0;
}

void func_170()
{
	if (func_169(ENTITY::GET_ENTITY_MODEL(Global_35)) == -676452144)
	{
		PED::_0x2B4CE170DE09F346(Global_35, 531055934);
		PED::_0x2B4CE170DE09F346(Global_35, -676452144);
		PED::_0x1E017404784AA6A3(Global_35, 1862763509);
		PED::_0x1E017404784AA6A3(Global_35, 455003611);
		PED::_0x1E017404784AA6A3(Global_35, 487851963);
	}
}

int func_171()
{
	return ZONE::_GET_WATER_MAP_ZONE_AT_COORDS(Global_36);
}

bool func_172(int iParam0)
{
	if (!func_273(iParam0))
	{
		return false;
	}
	return ((((*Global_1888801)[iParam0 /*35*/])->f_20 == 1 || ((*Global_1888801)[iParam0 /*35*/])->f_20 == 2) && !func_299(iParam0));
}

int func_173(int iParam0)
{
	if (iParam0 == 0)
	{
		return (func_300() && func_301());
	}
	else if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 3)
	{
		return func_302(iParam0, 1);
	}
	return 0;
}

void func_174(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	var uVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	char* sVar6;
	float fVar7;
	char* sVar8;
	char* sVar9;
	char* sVar10;

	if (!func_303())
	{
		return;
	}
	sVar1 = func_304(iParam0, iParam1, iParam2, iParam4, iParam5, bParam3, &uVar0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		if (bParam3)
		{
			return;
		}
		sVar1 = "DISTRICT_GRIZZLIES";
	}
	if (!func_214(iParam4))
	{
		if (func_273(iParam0))
		{
			iParam4 = func_306(func_305(iParam0));
		}
		else
		{
			iParam4 = func_306(iParam1);
		}
	}
	if (func_214(iParam4))
	{
		iVar3 = func_307(iParam4);
	}
	if (uVar0 && bParam3)
	{
		sVar2 = func_309(func_308(iParam2));
	}
	else if ((func_310(iParam1, 2) || func_311(iParam4, 2)) && !Global_1894899->f_9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_MALE(PLAYER::PLAYER_PED_ID()))
			{
				sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_FULL_D_OR_A_M");
			}
			else
			{
				sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_FULL_D_OR_A_F");
			}
		}
		Global_1894899->f_9 = 1;
	}
	else if ((func_273(iParam0) && func_312(iParam0, 16777216)) && !Global_1894899->f_9)
	{
		sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_RESTRICTED_AREA");
		Global_1894899->f_9 = 1;
	}
	else if (iVar3 >= 1 && !Global_1894899->f_9)
	{
		sVar2 = MISC::_CREATE_VAR_STRING(2, "REGION_BOUNTY", iVar3);
		Global_1894899->f_9 = 1;
	}
	else
	{
		iVar4 = func_293(func_175());
		iVar5 = func_294(func_175());
		if (iVar5 < 10)
		{
			StringConCat(&sVar6, "0", 8);
		}
		StringIntConCat(&sVar6, iVar5, 8);
		fVar7 = MISC::_GET_TEMPERATURE_AT_COORDS(Global_36);
		if (!MISC::_SHOULD_USE_24_HOUR_CLOCK())
		{
			sVar9 = "AM";
			if (iVar4 >= 12)
			{
				sVar9 = "PM";
				if (iVar4 > 12)
				{
					iVar4 = (iVar4 - 12);
				}
			}
			else if (iVar4 == 0)
			{
				iVar4 = 12;
			}
			sVar8 = "TIME_AND_TEMP_C";
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				fVar7 = func_313(fVar7);
				sVar8 = "TIME_AND_TEMP_F";
			}
			IntToString(&sVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::_CREATE_VAR_STRING(674, sVar8, iVar4, func_314(&sVar6, 109029619), sVar9, func_314(&sVar10, 109029619));
		}
		else
		{
			sVar8 = "TIME_AND_TEMP_C_24";
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				fVar7 = func_313(fVar7);
				sVar8 = "TIME_AND_TEMP_F_24";
			}
			IntToString(&sVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::_CREATE_VAR_STRING(162, sVar8, iVar4, func_314(&sVar6, 109029619), func_314(&sVar10, 109029619));
		}
		Global_1894899->f_9 = 0;
	}
	Global_1934266->f_148 = func_315(sVar1, sVar2, 4000, 0, 0, 0, 0, 1);
}

int func_175()
{
	return &Global_1899515;
}

void func_176()
{
	int iVar0;
	bool bVar1;
	struct<12> Var2;
	int iVar19;
	struct<11> Var20;
	int iVar37;

	iVar0 = func_316();
	bVar1 = (!func_20(&Global_1935630, 4194304) || Global_1935630->f_17 > 0);
	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		if (bVar1)
		{
			Global_1935630->f_13 = (LAW::_0x69E181772886F48B(iVar0) || LAW::_0xF0FBFB9AB15F7734(iVar0, 0, 0));
			Global_1935630->f_15 = LAW::_0x148E7AC8141C9E64(iVar0);
			Global_1935630->f_14 = LAW::_0x9945A3E2528A02E8(iVar0);
			Global_1935630->f_16 = LAW::_0xF46108C50A22B029();
			Global_1935630->f_17 = LAW::_0xDD5FD601481F648B(iVar0);
			Global_1935630->f_26 = LAW::_0x9D5C9A5A3321B128(iVar0);
			Global_1935630->f_21 = LAW::_0xDAEFDFDB2AEECE37(LAW::_GET_HUD_PLAYER_CRIME_TYPE(iVar0), 0);
			Global_1935630->f_18 = LAW::_0xAD401C63158ACBAA(iVar0);
			if (Global_1935630->f_18)
			{
				LAW::_0x9C5BD8C562565CE6(&Var2);
				Global_1935630->f_19 = Var2.f_10;
				Global_1935630->f_23 = Var2.f_11 == 6;
			}
			Global_1935630->f_20 = -1;
			iVar19 = 0;
			while (iVar19 < 24)
			{
				if (LAW::_0x532C5FDDB986EE5C(iVar0, iVar19, &Var20))
				{
					if (Var20.f_10)
					{
						iVar37 = LAW::_0xDAEFDFDB2AEECE37(Var20, 0);
						if (iVar37 > Global_1935630->f_20)
						{
							Global_1935630->f_20 = iVar37;
						}
					}
				}
				iVar19++;
			}
		}
		else
		{
			func_317();
		}
	}
	if (Global_1935630->f_40 != 0)
	{
		Global_1935630->f_41 = Global_1935630->f_40;
	}
	Global_1935630->f_22 = PLAYER::IS_PLAYER_BEING_ARRESTED(iVar0, true);
	Global_1935630->f_12 = ENTITY::IS_ENTITY_DEAD(Global_35);
	if (!Global_1935630->f_12)
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &(Global_1935630->f_44), false, 0, false);
		Global_1935630->f_40 = PED::GET_MOUNT(Global_35);
		if (Global_1572887->f_12 == -1 && Global_1935630 & 262144 != 0)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 174, true);
		}
		if (Global_1572887->f_12 != -1)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 154, true);
		}
		else if (Global_1935630 & 65536 != 0)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 154, true);
		}
		if (Global_1572887->f_12 == -1)
		{
			if (!func_318(9))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 135, true);
			}
			if (!func_318(14))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 144, true);
			}
			if (!func_318(36))
			{
				HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(9);
			}
			if (CAM::_0x139EFB0A71DD9011())
			{
				PAD::DISABLE_CONTROL_ACTION(0, -1404316431, false);
				PAD::DISABLE_CONTROL_ACTION(0, 1287709438, false);
				PAD::DISABLE_CONTROL_ACTION(0, 1934388793, false);
				PAD::DISABLE_CONTROL_ACTION(0, -209515122, false);
				PAD::DISABLE_CONTROL_ACTION(0, -824104112, false);
				PAD::DISABLE_CONTROL_ACTION(0, 516589524, false);
				PAD::DISABLE_CONTROL_ACTION(0, 1390807691, false);
				PAD::DISABLE_CONTROL_ACTION(0, 1663574939, false);
				HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
			}
			else if ((CAM::IS_SCREEN_FADED_OUT() && func_319()) && !func_157(0, 0, 1))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			if (PAD::IS_CONTROL_PRESSED(0, 255439828))
			{
				PAD::DISABLE_CONTROL_ACTION(0, 130948705, false);
				PAD::DISABLE_CONTROL_ACTION(0, 42190210, false);
				PAD::DISABLE_CONTROL_ACTION(0, 1623727326, false);
				PAD::DISABLE_CONTROL_ACTION(0, -922478227, false);
				PAD::DISABLE_CONTROL_ACTION(0, 1751579194, false);
				PAD::DISABLE_CONTROL_ACTION(0, -2023713047, false);
			}
			if (WEAPON::_0x6AD66548840472E5(Global_1935630->f_44) && CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
			{
				PAD::DISABLE_CONTROL_ACTION(0, 255439828, false);
			}
		}
	}
	else
	{
		if (func_201() == -1 && CAM::_0x139EFB0A71DD9011())
		{
			HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
		}
		Global_1935630->f_44 = 0;
		Global_1935630->f_40 = 0;
	}
}

void func_177()
{
	if (func_201() != -1)
	{
		return;
	}
	func_320();
}

void func_178(vector3 vParam0)
{
	Global_40.f_9.f_7 = { vParam0 };
}

void func_179(int iParam0)
{
	Global_1572864->f_21 = iParam0;
	Global_1310720->f_4 = MISC::GET_GAME_TIMER();
}

void func_180(int iParam0)
{
	Global_1310720->f_9 = iParam0;
}

void func_181(int iParam0)
{
	Global_1310720->f_10 = iParam0;
}

void func_182(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_59(Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_84(Global_1935630, 4194304);
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

int func_183(bool bParam0)
{
	if (!bParam0 && func_321(373691918))
	{
		LAW::_0xE9AC8466ABE484BB(0, 0);
		LAW::_0xC61EDEBF16CD9668(752193127, true, 0);
		return 0;
	}
	LAW::_0xE9AC8466ABE484BB(bParam0, 0);
	return 1;
}

int func_184(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
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

int func_185(int iParam0)
{
	vector3 vVar0;

	if (!func_256(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

float func_186(int iParam0, int iParam1)
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

void func_187(int iParam0, int iParam1)
{
	Global_1347477->f_9[iParam0 /*2*/] = (MISC::GET_GAME_TIMER() + iParam1);
}

void func_188(int iParam0)
{
	PLAYER::_0x51345AE20F22C261(PLAYER::PLAYER_ID(), BUILTIN::TO_FLOAT(iParam0 * 14), 0, 0, 0);
}

void func_189(int iParam0)
{
	int iVar0;

	if (func_201() != -1)
	{
		return;
	}
	if (iParam0 == -1)
	{
		PED::_0x675680D089BFA21F(Global_35, 100f);
	}
	else
	{
		iVar0 = 8;
		PED::_0xC3D4B754C0E86B9E(Global_35, BUILTIN::TO_FLOAT((iParam0 * iVar0)));
	}
}

float func_190(int iParam0, float fParam1)
{
	return func_322(BUILTIN::TO_FLOAT(iParam0), fParam1);
}

int func_191(var uParam0, var uParam1, float fParam2)
{
	if (func_201() != -1)
	{
		return 1;
	}
	if (!func_323(0))
	{
		return 1;
	}
	if (fParam2 <= 0f)
	{
		return 1;
	}
	if (*uParam0)
	{
		return !*uParam1;
	}
	*uParam0 = 1;
	if (!Global_1347477->f_191.f_3)
	{
		func_324(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
		Global_1347477->f_191.f_3 = 1;
	}
	if (Global_1347477->f_191 < MISC::GET_GAME_TIMER())
	{
		Global_1347477->f_191.f_1 = 0;
	}
	Global_1347477->f_191.f_1++;
	if (Global_1347477->f_191.f_1 > 3)
	{
		if (Global_1347477->f_191.f_2 < MISC::GET_GAME_TIMER())
		{
			func_54(0, 1);
			Global_1347477->f_191.f_2 = (MISC::GET_GAME_TIMER() + 480000);
		}
		func_324(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
		*uParam1 = 1;
		return 0;
	}
	Global_1347477->f_191 = (MISC::GET_GAME_TIMER() + 480000);
	*uParam1 = 0;
	return 1;
}

void func_192(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;

	if (func_201() == 0)
	{
		func_325(0, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_217(0);
	if (bParam1)
	{
		func_326(fVar0);
	}
	if (fVar0 >= (100f - 1f))
	{
		func_327();
	}
	if (bParam2)
	{
		fParam0 = func_328(0, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_219(0, func_329(fParam0, -100f, 100f), bParam1);
}

void func_193(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;

	if (func_201() == 0)
	{
		func_325(2, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_217(2);
	if (bParam1)
	{
		func_326(fVar0);
	}
	if (bParam2)
	{
		fParam0 = func_328(2, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_219(2, func_329(fParam0, -100f, 100f), bParam1);
}

void func_194(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;

	if (func_201() == 0)
	{
		func_325(1, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_217(1);
	if (bParam1)
	{
		func_326(fVar0);
	}
	if (bParam2)
	{
		fParam0 = func_328(1, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_219(1, func_329(fParam0, -100f, 100f), bParam1);
}

float func_195(float fParam0, int iParam1)
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

void func_196(int iParam0, float fParam1)
{
	int iVar0;
	char* sVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (fParam1 == -1f)
	{
		if (func_330(iParam0))
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
		return;
	}
	fParam1 = (fParam1 * (1f + Global_40.f_11095.f_70));
	switch (iParam0)
	{
		case 0:
			sVar1 = func_331(iParam0);
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar1))
			{
				GRAPHICS::ANIMPOSTFX_PLAY(sVar1);
			}
			func_332(-1);
			func_86(0);
			ATTRIBUTE::_0xF6A7C08DF2E28B28(iVar0, iParam0, fParam1, 1);
			Global_40.f_11095.f_4[0 /*2*/] = fParam1;
			break;
		case 1:
			sVar1 = func_331(iParam0);
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar1))
			{
				GRAPHICS::ANIMPOSTFX_PLAY(sVar1);
			}
			func_333(-1);
			ATTRIBUTE::_0xF6A7C08DF2E28B28(iVar0, iParam0, fParam1, 1);
			Global_40.f_11095.f_4[1 /*2*/] = fParam1;
			break;
		case 2:
			sVar1 = func_331(iParam0);
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar1))
			{
				GRAPHICS::ANIMPOSTFX_PLAY(sVar1);
			}
			func_334(-1);
			ATTRIBUTE::_0xF6A7C08DF2E28B28(iVar0, iParam0, fParam1, 1);
			Global_40.f_11095.f_4[2 /*2*/] = fParam1;
			break;
		case 19:
			func_335(0, 1, 1);
			ATTRIBUTE::_0xF6A7C08DF2E28B28(iVar0, iParam0, fParam1, 1);
			(Global_40.f_11095.f_4[0 /*2*/])->f_1 = fParam1;
			break;
		case 18:
			func_335(1, 1, 1);
			ATTRIBUTE::_0xF6A7C08DF2E28B28(iVar0, iParam0, fParam1, 1);
			(Global_40.f_11095.f_4[1 /*2*/])->f_1 = fParam1;
			break;
		case 20:
			func_335(2, 1, 1);
			ATTRIBUTE::_0xF6A7C08DF2E28B28(iVar0, iParam0, fParam1, 1);
			(Global_40.f_11095.f_4[2 /*2*/])->f_1 = fParam1;
			break;
		default:
			break;
	}
}

void func_197(float fParam0, bool bParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;

	fVar0 = func_336(13);
	if (fParam0 > 10f)
	{
		fParam0 = 10f;
	}
	if (!func_318(17))
	{
		return;
	}
	if (func_337())
	{
		iVar1 = func_338(fVar0);
		fVar0 = (fVar0 + fParam0);
		iVar2 = func_338(fVar0);
		if (iVar1 != iVar2)
		{
			Global_1347477->f_195 = func_175();
			func_167(&(Global_1347477->f_195), 0, 0, 1, 0, 0, 0, 0);
		}
		func_339(&fVar3, &fVar4);
		func_340(13, func_329(fVar0, fVar3, fVar4));
	}
	if (bParam1)
	{
		Global_40.f_11095.f_66++;
		if (5 == Global_40.f_11095.f_66)
		{
			func_54(94, 0);
		}
	}
}

struct<2> func_198(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

void func_199(var uParam0, var uParam1, int iParam2)
{
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

void func_200(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_201()
{
	return Global_1572887->f_12;
}

bool func_202(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

bool func_203(int iParam0, int iParam1)
{
	if (func_201() != -1)
	{
		return false;
	}
	if (!func_341(iParam0))
	{
		return false;
	}
	return (Global_24886[iParam0 /*2*/] && iParam1) != 0;
}

int func_204(int iParam0)
{
	if (!func_341(iParam0))
	{
		return 0;
	}
	if (_NAMESPACE48::_0x800DF3FC913355F3(func_342(iParam0)))
	{
		_NAMESPACE48::_0x49A8C2CD97815215(func_342(iParam0));
		if (!ENTITY::DOES_ENTITY_EXIST(_NAMESPACE48::_0x0CADC3A977997472(func_342(iParam0), 0)))
		{
			return 0;
		}
	}
	return 1;
}

void func_205(int iParam0, bool bParam1, int iParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_6, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_5, iParam2);
}

void func_206()
{
	func_343();
	func_344();
	func_345();
}

bool func_207(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_208(int iParam0)
{
	Global_1327479->f_3 = iParam0;
}

int func_209()
{
	return Global_1310750->f_16037;
}

bool func_210(int iParam0, int iParam1)
{
	if (!func_207(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/] && iParam1) != 0;
}

int func_211(int iParam0)
{
	if (!func_207(iParam0))
	{
		return 0;
	}
	if (func_87(64) && func_346(iParam0))
	{
		return 1;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_46;
}

int func_212(int iParam0)
{
	if (!func_207(iParam0))
	{
		return 0;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_47;
}

void func_213(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_207(&(Global_1310750->f_13321[iParam0 /*9*/])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID((Global_1310750->f_13321[iParam0 /*9*/])->f_5, 523);
	((*Global_1310750)[iVar0 /*111*/])->f_48 = 0;
	func_347(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

bool func_214(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

void func_215(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (func_273(iVar0))
		{
			if (func_349(func_348(iVar0, 1, 1)) == iParam0)
			{
				func_350(iVar0, 0);
			}
		}
		iVar0++;
	}
}

int func_216(int iParam0)
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

float func_217(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

int func_218(int iParam0)
{
	float fVar0;

	fVar0 = (BUILTIN::TO_FLOAT(iParam0 + 100) / 200f);
	return BUILTIN::CEIL((100f * fVar0));
}

void func_219(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;

	if (func_201() != -1)
	{
		return;
	}
	if (!func_318(15))
	{
		return;
	}
	Global_40.f_11095[iParam0] = fParam1;
	iVar0 = func_218(BUILTIN::CEIL(&(Global_40.f_11095[iParam0])));
	ATTRIBUTE::_0xC6258F41D86676E0(Global_35, func_216(iParam0), iVar0);
	func_352(func_351(iParam0), (100f * (BUILTIN::TO_FLOAT(iVar0) / 100f)), 0);
	if (((fParam1 <= func_353(15) && iParam0 == 1) && PED::IS_PED_ON_FOOT(Global_35)) && !PED::IS_PED_SWIMMING(Global_35))
	{
		func_54(84, 1);
	}
	if (fParam1 <= -99.999f)
	{
		func_54(func_354(iParam0), 1);
	}
	sVar1 = func_355(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		PED::_0x437C08DB4FEBE2BD(Global_35, sVar1, BUILTIN::TO_FLOAT(iVar0), -1);
	}
}

void func_220(int iParam0)
{
	_NAMESPACE71::_0xDD1232B332CBB9E7(1, iParam0, 0);
}

void func_221(int iParam0, int iParam1)
{
	HUD::_JOURNAL_WRITE_ENTRY(iParam0);
	if (iParam1 == 1)
	{
		func_222(1);
	}
}

void func_222(bool bParam0)
{
	if (bParam0)
	{
		func_356(&(Global_40.f_12018.f_42), 1);
	}
	else
	{
		func_357(&(Global_40.f_12018.f_42), 1);
	}
}

void func_223(int iParam0)
{
	int iVar0;

	if (iParam0 < 0)
	{
		return;
	}
	if (!func_116((Global_1393237->f_11[iParam0 /*30*/])->f_3))
	{
		func_358((Global_1393237->f_11[iParam0 /*30*/])->f_3, 0);
		PED::_0x9851DE7AEC10B4E1((Global_1393237->f_11[iParam0 /*30*/])->f_3, 20f, 1, 0);
	}
	Global_1393237->f_11[iParam0 /*30*/] = -15;
	(Global_1393237->f_11[iParam0 /*30*/])->f_2 = -1;
	(Global_1393237->f_11[iParam0 /*30*/])->f_3 = { 0f, 0f, 0f };
	(Global_1393237->f_11[iParam0 /*30*/])->f_6 = { 0f, 0f, 0f };
	(Global_1393237->f_11[iParam0 /*30*/])->f_9 = 0f;
	if (func_359(iParam0, 8388608))
	{
		(Global_1393237->f_11[iParam0 /*30*/])->f_10 = 8388608;
	}
	else
	{
		(Global_1393237->f_11[iParam0 /*30*/])->f_10 = 0;
		if (Global_1393237->f_11[iParam0 /*30*/])->f_17 != func_360()
		{
		}
		(Global_1393237->f_11[iParam0 /*30*/])->f_17 = func_360();
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
	func_361(iParam0, 1);
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
		func_358((Global_1393237->f_11[iParam0 /*30*/])->f_3, 1);
	}
}

int func_224(var uParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	*uParam0 = 0;
	*uParam1 = 0;
	bVar0 = func_124();
	bVar1 = false;
	if (bVar0 && !func_58(4))
	{
		bVar1 = true;
	}
	if ((bVar0 && func_58(37)) && !func_58(43))
	{
		*uParam0 = 0;
		*uParam1 = 0;
		return 0;
	}
	bVar2 = false;
	if ((bVar0 && func_58(43)) && !func_58(44))
	{
		bVar2 = true;
	}
	if (bVar1)
	{
		*uParam0 = 1;
		return 1;
	}
	if (!bVar1 && !bVar2)
	{
		if (func_362(0) == 1)
		{
			*uParam0 = 1;
		}
		if (func_362(1) == 1)
		{
			*uParam1 = 1;
		}
	}
	if (*uParam0 || *uParam1)
	{
		return 1;
	}
	return 0;
}

int func_225()
{
	return 1;
}

int func_226(int iParam0)
{
	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_420;
}

int func_227()
{
	return Global_40.f_1095.f_3054.f_1;
}

int func_228(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<2> Var8;
	struct<6> Var10;
	int iVar16;
	int iVar17;

	uParam1->f_10 = func_117(uParam1->f_10);
	if (uParam1->f_10 == -1)
	{
		*uParam0 = 1;
		return 0;
	}
	if (uParam1->f_10 >= 7)
	{
		*uParam0 = 1;
		return 0;
	}
	if (*uParam1)
	{
		if (func_116(uParam1->f_6))
		{
		}
	}
	bVar0 = func_124();
	if (*uParam1)
	{
		if (bVar0 && !func_165(((*Global_1835011)[4 /*74*/])->f_1, 1))
		{
			if (func_363(5))
			{
				func_364(5);
				func_365(5);
				func_366(0);
				func_367(0);
			}
		}
	}
	if (func_15(Global_36) == 8)
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_165(((*Global_1835011)[37 /*74*/])->f_1, 1)) && !func_165(((*Global_1835011)[43 /*74*/])->f_1, 1))
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_165(((*Global_1835011)[43 /*74*/])->f_1, 1)) && !func_165(((*Global_1835011)[44 /*74*/])->f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*uParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_278(iVar1);
	bVar3 = false;
	bVar4 = false;
	iVar5 = 0;
	if (func_368(iVar1))
	{
		bVar3 = true;
		if (func_369(iVar1))
		{
			bVar4 = true;
		}
		if (func_370(iVar1))
		{
			iVar5 = 1;
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (iVar5 && !uParam1->f_5)
			{
				func_371(uParam1->f_10);
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar4)
			{
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_3)
	{
		if (uParam1->f_10 == 0)
		{
			if (!func_363(0) && func_363(1))
			{
				func_372(1, 0);
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_373())
			{
				func_374();
			}
			func_366(0);
			func_367(0);
			func_375(uParam1->f_6);
		}
	}
	if (!func_368(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_376(uParam1->f_10) == 0 || func_377(uParam1->f_10) == 0) || func_362(uParam1->f_10) == 0)
			{
				func_378(uParam1->f_10);
			}
			func_379(uParam1->f_10);
			func_380(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*uParam0 = 0;
			return 0;
		}
		*uParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_278(iVar1);
	bVar3 = false;
	bVar4 = false;
	iVar5 = 0;
	if (func_368(iVar1))
	{
		bVar3 = true;
		if (func_369(iVar1))
		{
			bVar4 = true;
		}
		if (func_370(iVar1))
		{
			iVar5 = 1;
		}
	}
	if (uParam1->f_2)
	{
		if (bVar3)
		{
			if (ENTITY::_0x083D497D57B7400F(iVar2))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iVar2, false);
			}
			if (!func_116(uParam1->f_6))
			{
				ENTITY::SET_ENTITY_COORDS(iVar2, uParam1->f_6, false, true, true, true);
				ENTITY::SET_ENTITY_HEADING(iVar2, uParam1->f_9);
				ENTITY::_0x9587913B9E772D29(iVar2, 0);
			}
		}
	}
	if (func_381(uParam1->f_10))
	{
		*uParam0 = 0;
		return 0;
	}
	if (bVar3)
	{
		if (bVar4)
		{
			if (*uParam1)
			{
				*uParam0 = 0;
				return 0;
			}
			*uParam0 = 1;
			return 0;
		}
	}
	if (bVar3)
	{
		if (iVar5 && !uParam1->f_5)
		{
			if (*uParam1)
			{
				*uParam0 = 0;
				return 0;
			}
			*uParam0 = 1;
			return 0;
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (!PED::_0xA0BC8FAED8CFEB3C(iVar2))
			{
				*uParam0 = 0;
				return 0;
			}
			iVar6 = PLAYER::PLAYER_ID();
			iVar7 = PLAYER::_0xB48050D326E9A2F3(iVar6);
			if (ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
				if (iVar7 != iVar2)
				{
					PLAYER::_0xD2CB0FB0FDCB473D(iVar6, 0);
				}
			}
			Var8 = { func_382(uParam1->f_10) };
			Var10 = { func_383() };
			func_384(iVar2, &Var8, &Var10, 0);
			PLAYER::_0xD2CB0FB0FDCB473D(iVar6, iVar2);
			PED::SET_PED_CONFIG_FLAG(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*uParam0 = 2;
		return iVar2;
	}
	if (!func_385(uParam1->f_10))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, true, true);
		func_386(uParam1->f_10);
		if (uParam1->f_2 && !func_116(uParam1->f_6))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar2, false);
			PHYSICS::_0x0348469DAA17576C(iVar2);
			ENTITY::SET_ENTITY_COORDS(iVar2, uParam1->f_6, false, true, true, true);
			ENTITY::SET_ENTITY_HEADING(iVar2, uParam1->f_9);
			ENTITY::_0x9587913B9E772D29(iVar2, 0);
		}
		*uParam0 = 2;
		return iVar2;
	}
	func_387(uParam1->f_10);
	if (func_385(uParam1->f_10))
	{
		iVar16 = func_388(uParam1->f_10);
		iVar17 = SCRIPTS::GET_ID_OF_THIS_THREAD();
		if (iVar16 != iVar17)
		{
			*uParam0 = 1;
			return 0;
		}
	}
	*uParam0 = 2;
	return iVar2;
}

int func_229()
{
	return Global_40.f_4283;
}

int func_230()
{
	return Global_40.f_4283.f_4;
}

int func_231(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 5:
		case 6:
		case 7:
			if (iParam1 == 1)
			{
				return 1;
			}
			break;
		case 8:
			return func_58(73);
	}
	return 0;
}

Vector3 func_232(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -107.0047f, -32.0697f, 94.9574f;
		case 2:
			return 703.7057f, -1228.871f, 44.2991f;
		case 3:
			return 1849.943f, -1837.089f, 42.2036f;
		case 5:
			return 2278.213f, -751.9426f, 41.0419f;
		case 6:
			return 2370.389f, 1340.97f, 105.1306f;
		case 7:
			return -2591.632f, 466.4086f, 145.2065f;
		case 8:
			if (!func_389())
			{
				return -1665.274f, -1330.899f, 82.9343f;
			}
			else
			{
				return -1643.673f, -1375.62f, 82.9683f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_233(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case -1:
					return -106.1076f, -31.1365f, 94.9429f;
				case 0:
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(-106.1076f, -31.1365f, 94.9429f, func_234(iParam0), 0.75f, 0f, 0f);
				case 1:
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(-106.1076f, -31.1365f, 94.9429f, func_234(iParam0), -0.75f, 0f, 0f);
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case -1:
					return 702.1609f, -1228.529f, 44.1236f;
				case 0:
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(702.1609f, -1228.529f, 44.1236f, func_234(iParam0), 0.75f, 0f, 0f);
				case 1:
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(702.1609f, -1228.529f, 44.1236f, func_234(iParam0), -0.75f, 0f, 0f);
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case -1:
					return 1850.179f, -1838.022f, 42.1198f;
				case 0:
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(1850.179f, -1838.022f, 42.1198f, func_234(iParam0), 0.75f, 0f, 0f);
				case 1:
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(1850.179f, -1838.022f, 42.1198f, func_234(iParam0), -0.75f, 0f, 0f);
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case -1:
					return 2279.944f, -751.8282f, 40.9738f;
				case 0:
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(2279.944f, -751.8282f, 40.9738f, func_234(iParam0), 0.75f, 0f, 0f);
				case 1:
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(2279.944f, -751.8282f, 40.9738f, func_234(iParam0), -0.75f, 0f, 0f);
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case -1:
					return 2371.779f, 1341.602f, 105.1376f;
				case 0:
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(2371.779f, 1341.602f, 105.1376f, func_234(iParam0), 0.75f, 0f, 0f);
				case 1:
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(2371.779f, 1341.602f, 105.1376f, func_234(iParam0), -0.75f, 0f, 0f);
				default:
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case -1:
					return -2590.321f, 464.9799f, 145.1713f;
				case 0:
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(-2590.321f, 464.9799f, 145.1713f, func_234(iParam0), 0.75f, 0f, 0f);
				case 1:
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(-2590.321f, 464.9799f, 145.1713f, func_234(iParam0), -0.75f, 0f, 0f);
				default:
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case -1:
					if (!func_389())
					{
						return -1665.684f, -1332.361f, 82.8786f;
					}
					else
					{
						return -1644.99f, -1376.751f, 82.9679f;
					}
					break;
				case 0:
					if (!func_389())
					{
						return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(-1665.684f, -1332.361f, 82.8786f, func_234(iParam0), 0.75f, 0f, 0f);
					}
					else
					{
						return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(-1644.99f, -1376.751f, 82.9679f, func_234(iParam0), 0.75f, 0f, 0f);
					}
					break;
				case 1:
					if (!func_389())
					{
						return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(-1665.684f, -1332.361f, 82.8786f, func_234(iParam0), -0.75f, 0f, 0f);
					}
					else
					{
						return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(-1644.99f, -1376.751f, 82.9679f, func_234(iParam0), -0.75f, 0f, 0f);
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_234(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 164.6267f;
		case 2:
			return 253.0561f;
		case 3:
			return 46.2992f;
		case 5:
			return 70.2681f;
		case 6:
			return 109.4813f;
		case 7:
			return 81.6192f;
		case 8:
			if (!func_389())
			{
				return 21.0508f;
			}
			else
			{
				return 329.6172f;
			}
			break;
	}
	return 0f;
}

char* func_235(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

bool func_236(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_237(int iParam0, int iParam1)
{
	if (((*Global_1898346)[iParam0 /*6*/])->f_2 == 0 || iParam1)
	{
		((*Global_1898346)[iParam0 /*6*/])->f_2 = func_390(Global_1898330[iParam0]);
		func_391(((*Global_1898346)[iParam0 /*6*/])->f_2, &(((*Global_1898346)[iParam0 /*6*/])->f_4), &(((*Global_1898346)[iParam0 /*6*/])->f_5), &(((*Global_1898346)[iParam0 /*6*/])->f_3));
	}
}

int func_238(int iParam0)
{
	if (!func_103(iParam0))
	{
		return 0;
	}
	return func_392(func_390(iParam0));
}

bool func_239(int iParam0, int iParam1)
{
	return (func_393(iParam0) && (((*Global_1898346)[iParam0 /*6*/])->f_1 && iParam1) != 0);
}

bool func_240(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_241(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_394(iVar0);
}

int func_242(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1944638739:
			return 36;
		case -1889597427:
			return 0;
		case -1884748965:
			return 32;
		case -1586649372:
			return 33;
		case -1506259487:
			return 5;
		case -1505978566:
			return 22;
		case -1489346253:
			return 38;
		case -1364808185:
			return 19;
		case -1292426046:
			return 8;
		case -1197751823:
			return 20;
		case -1176744536:
			return 24;
		case -1130865351:
			return 31;
		case -1130352927:
			return 1;
		case -893163968:
			return 17;
		case -735900586:
			return 28;
		case -676503695:
			return 6;
		case -450913544:
			return 18;
		case -426430150:
			return 29;
		case -358215195:
			return 39;
		case -338487716:
			return 11;
		case -207860920:
			return 26;
		case 99217379:
			return 27;
		case 304805134:
			return 21;
		case 383349088:
			return 7;
		case 389988485:
			return 2;
		case 673166414:
			return 25;
		case 788010710:
			return 34;
		case 1108822547:
			return 10;
		case 1145151482:
			return 23;
		case 1250092473:
			return 16;
		case 1367443060:
			return 4;
		case 1422688607:
			return 9;
		case 1600962399:
			return 13;
		case 1672288269:
			return 15;
		case 1742327865:
			return 12;
		case 1780904876:
			return 3;
		case 1788623170:
			return 30;
		case 1849504272:
			return 14;
		case 1900541263:
			return 37;
		case 1958421083:
			return 35;
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

int func_243(int iParam0)
{
	struct<2> Var0;

	if (!func_256(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_244(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_245(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

void func_246(var uParam0, var uParam1, var uParam2)
{
	struct<4> Var0;

	Var0.f_1 = uParam2;
	Var0 = uParam0;
	Var0.f_2 = uParam1;
	func_395(Var0);
}

int func_247(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_396(iParam0))
	{
		return 0;
	}
	if (func_397(iParam0, 32, 1))
	{
		return 0;
	}
	if (!func_397(iParam0, 2, 1))
	{
		return 0;
	}
	if (!func_397(iParam0, 4, 1))
	{
		return 0;
	}
	if (func_398(iParam0, 33, 1))
	{
		return 0;
	}
	if (func_399(iParam0))
	{
		return 0;
	}
	if (func_400(iParam0))
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

int func_248(int iParam0)
{
	if (func_401(iParam0))
	{
		if (func_402(Global_1360165[iParam0 /*1157*/], 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_249(int iParam0, bool bParam1)
{
	if (!func_401(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_NAMESPACE48::_0x800DF3FC913355F3(((*Global_1360165)[iParam0 /*1157*/])->f_1))
		{
			func_403(iParam0);
		}
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_1;
}

int func_250(int iParam0)
{
	if (!func_396(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		(*Global_1360165)[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

int func_251(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	float fVar0;

	if (fParam3 > 0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = func_404(iParam0, Global_36, 1);
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

void func_252(int iParam0, int iParam1)
{
	int iVar0;

	if (_NAMESPACE48::_0xA8120EBEAF290C7A(func_249(iParam0, 0)))
	{
		iVar0 = _NAMESPACE48::_0x69786495C92A3044(func_249(iParam0, 0));
		if (iVar0 != ((*Global_1360165)[iParam0 /*1157*/])->f_47 || iParam1)
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_47 = iVar0;
			StringCopy(&(((*Global_1360165)[iParam0 /*1157*/])->f_48), _NAMESPACE48::_0x9C7F95946E304778(func_249(iParam0, 0), ((*Global_1360165)[iParam0 /*1157*/])->f_47), 64);
			((*Global_1360165)[iParam0 /*1157*/])->f_56 = 1;
		}
	}
}

int func_253(int iParam0)
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

void func_254(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_396(iParam0))
		{
			return;
		}
	}
	func_405(iParam1, &iVar0, &iVar1);
	MISC::SET_BIT(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0], iVar1);
}

int func_255()
{
	if (Global_1946804->f_2793)
	{
		return 1;
	}
	if (MISC::ABSI((MISC::GET_GAME_TIMER() - Global_1946804->f_2791)) < 1250)
	{
		return 1;
	}
	if (func_406())
	{
		return 1;
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_35))
	{
		return 1;
	}
	return 0;
}

bool func_256(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

bool func_257(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_256(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_185(iParam0);
	if (iVar0 == -427144552)
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (iVar0 == 307971639)
	{
		if (!func_407(iParam0, 1))
		{
			return false;
		}
	}
	return func_408(iParam0, 0, bParam2) >= iParam1;
}

int func_258(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (func_132(&iVar0))
	{
		if (iParam0 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_259()
{
	int iVar0;

	iVar0 = 1549701178;
	switch (func_409())
	{
		case 0:
			iVar0 = 1549701178;
			break;
		case 3:
			iVar0 = 949387044;
			break;
		case 1:
			iVar0 = -22529868;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_260()
{
	int iVar0;

	iVar0 = 614608656;
	switch (func_409())
	{
		case 0:
			iVar0 = 614608656;
			break;
		case 3:
			iVar0 = -1290316291;
			break;
		case 1:
			iVar0 = 1918034163;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

bool func_261(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_262()
{
	int iVar0;

	iVar0 = -1832677570;
	switch (func_409())
	{
		case 0:
			iVar0 = -1832677570;
			break;
		case 3:
			iVar0 = -362314920;
			break;
		case 1:
			iVar0 = -1336137422;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_263()
{
	int iVar0;

	iVar0 = 1623252156;
	switch (func_409())
	{
		case 0:
			iVar0 = 1623252156;
			break;
		case 3:
			iVar0 = -1469902924;
			break;
		case 1:
			iVar0 = 170763280;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

bool func_264(var uParam0, int iParam1)
{
	return (uParam0->f_63 && iParam1) != 0;
}

void func_265(var uParam0)
{
	*uParam0 = 0;
}

void func_266(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_267(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

Vector3 func_268(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 1794.04f, -1314.792f, 43.0923f;
		case 26:
			return -235.2066f, 763.6583f, 117.085f;
		case 30:
			return 1288.87f, -1397.85f, 77.93f;
		case 32:
			return 1234.24f, -1425.58f, 71.18f;
		case 33:
			return 905.92f, -421.19f, 88.23f;
		case 36:
			return -2476.07f, 832.13f, 141.25f;
		case 38:
			return -329.32f, -366.6f, 87f;
		case 39:
			return 97.4f, -212.47f, 111.6f;
		case 43:
			return 2586.494f, -1009.154f, 43.24f;
		case 41:
			return 337.3075f, -684.5404f, 41.8362f;
		case 49:
			return -2178.646f, -245.6886f, 191.1569f;
		case 51:
			return -1709.38f, -335.07f, 176.95f;
		case 53:
			return 2480.1f, -1377.69f, 45.32f;
		case 56:
			return 2011.776f, -504.0132f, 40.983f;
		case 57:
			return 1383.38f, -1336.83f, 77.59f;
		case 65:
			return -2095.11f, 656.32f, 119.87f;
		case 69:
			return 2943.93f, 1377.15f, 43.22f;
		case 70:
			return 2945.42f, 1342.78f, 43.92f;
		case 77:
			return 2793.35f, -1174.5f, 46.89f;
		case 78:
			return 2734.359f, -1207.682f, 48.6752f;
		case 80:
			return 2740.808f, -1312.805f, 46.648f;
		case 81:
			return 2503.755f, -1164.531f, 48.1928f;
		case 84:
			return -73.18f, -392.3f, 70.84f;
		case 88:
			return 2480.53f, -399.62f, 41.42f;
		case 89:
			return 1576.261f, -251.85f, 79.21f;
		case 91:
			return 1496.348f, -1083.286f, 54.1105f;
		case 92:
			return 1407.31f, 316.83f, 88.9555f;
		case 94:
			return 1414.4f, 248.2f, 88.85f;
		case 101:
			return -1378.656f, -735.3399f, 90.8243f;
		case 102:
			return -1666.59f, 610.82f, 124.03f;
		case 103:
			return 1356.44f, 533.95f, 86.12f;
		case 104:
			return 2407f, -585.32f, 40.66f;
		case 105:
			return -219.25f, 212.93f, 94.15f;
		case 116:
			return 211.99f, 512.98f, 126.54f;
		case 117:
			return -329.2f, 797.9f, 116.89f;
		case 118:
			return -300.3652f, 814.9069f, 117.4111f;
		case 119:
			return -1043.989f, 434.5095f, 53.6802f;
		case 121:
			return 2520.88f, 421.94f, 65.91f;
		case 127:
			return 2834.68f, -1048.04f, 42.86f;
		case 133:
			return 2688.427f, -1121.766f, 49.6782f;
		case 135:
			return -576.08f, 524.9f, 97.86f;
		case 136:
			return 1248.01f, -1280.07f, 75.17f;
		case 143:
			return 2954.45f, 523.05f, 44.47f;
		case 144:
			return 2304.697f, -0.13289f, 45.70486f;
		case 151:
			return 556.271f, 172.08f, 133.3435f;
		case 152:
			return 556.271f, 172.08f, 133.3435f;
		case 146:
			return -585.6761f, -347.216f, 81.28532f;
		default:
			break;
	}
	return ((*Global_1347702)[iParam0 /*49*/])->f_24;
}

void func_269(int iParam0, vector3 vParam1, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3[24];
	char* sVar6;

	if (!func_139(iParam0))
	{
		return;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 256 != 0 && func_157(0, 0, 1))
	{
		return;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 16 != 0)
	{
		return;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_36 == 0)
	{
		return;
	}
	if (func_104(32768))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
	{
		return;
	}
	((*Global_1347702)[iParam0 /*49*/])->f_38 = func_410(iParam0);
	if (!bParam5 && func_411(iParam0))
	{
		((*Global_1347702)[iParam0 /*49*/])->f_37 = MAP::_0x45F13B7E0A15C880(((*Global_1347702)[iParam0 /*49*/])->f_38, func_268(iParam0), ((*Global_1347702)[iParam0 /*49*/])->f_18);
		if (!MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
		{
			return;
		}
		MAP::SET_BLIP_SPRITE(((*Global_1347702)[iParam0 /*49*/])->f_37, ((*Global_1347702)[iParam0 /*49*/])->f_36, true);
	}
	else
	{
		((*Global_1347702)[iParam0 /*49*/])->f_37 = MAP::_0x554D9D53F696D002(((*Global_1347702)[iParam0 /*49*/])->f_38, vParam1);
		if (!MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
		{
			return;
		}
		MAP::SET_BLIP_SPRITE(((*Global_1347702)[iParam0 /*49*/])->f_37, ((*Global_1347702)[iParam0 /*49*/])->f_36, true);
	}
	if (iParam0 == 61)
	{
		func_412(8);
	}
	else if (iParam0 == 62)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(((*Global_1347702)[iParam0 /*49*/])->f_37, "BLIP_THOMAS_DOWNES");
	}
	else if (iParam0 == 95)
	{
		MAP::_0x662D364ABF16DE2F(((*Global_1347702)[iParam0 /*49*/])->f_37, 838722941);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(((*Global_1347702)[iParam0 /*49*/])->f_37, "BLIP_RHMRB");
	}
	else if (iParam0 == 42)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(((*Global_1347702)[iParam0 /*49*/])->f_37, "BLIP_RCFSH");
	}
	else if (iParam0 == 40)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(((*Global_1347702)[iParam0 /*49*/])->f_37, "BLIP_RCDIN");
	}
	else if (iParam0 == 50)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(((*Global_1347702)[iParam0 /*49*/])->f_37, "BLIP_RCRKF");
	}
	else if ((((iParam0 == 44 || iParam0 == 45) || iParam0 == 46) || iParam0 == 47) || iParam0 == 48)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(((*Global_1347702)[iParam0 /*49*/])->f_37, "BLIP_RCEXO");
	}
	func_413(iParam0);
	MAP::SET_BLIP_FLASH_TIMER(((*Global_1347702)[iParam0 /*49*/])->f_37, 64, iParam0);
	if (func_201() == -1)
	{
		func_414(iParam0);
		iVar0 = func_415(Global_40.f_4283);
		if (func_273(iVar0) && func_416(((*Global_1888801)[iVar0 /*35*/])->f_13))
		{
			iVar1 = 1;
			bVar2 = func_417(iVar0);
		}
		if (func_418(iParam0, iVar1, iVar0))
		{
			func_419(((*Global_1347702)[iParam0 /*49*/])->f_15, bVar2, iVar1, iVar0);
		}
	}
	if (bParam4)
	{
		if (HUD::_0x66F35DD9D2B58579() || CAM::IS_SCREEN_FADED_OUT())
		{
			return;
		}
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 1 == 0)
	{
		func_420(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 1);
		if (((!func_411(iParam0) || func_283(((*Global_1347702)[iParam0 /*49*/])->f_12, 1)) || func_283(((*Global_1347702)[iParam0 /*49*/])->f_12, 512)) || func_240(((*Global_1347702)[iParam0 /*49*/])->f_13, 2048))
		{
			MAP::_0x662D364ABF16DE2F(((*Global_1347702)[iParam0 /*49*/])->f_37, 580546400);
		}
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 32768 == 0)
	{
		if ((((*Global_1347702)[iParam0 /*49*/])->f_36 == -1822497728 && ((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 == 0) && ((*Global_1347702)[iParam0 /*49*/])->f_12 & 2 != 0)
		{
			MAP::_0x662D364ABF16DE2F(((*Global_1347702)[iParam0 /*49*/])->f_37, -211388321);
		}
		else
		{
			func_420(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 32768);
		}
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 8 != 0 && Global_40.f_490.f_402[iParam0] & 2 == 0)
	{
		if (func_421(iParam0))
		{
			if (iParam0 == 97)
			{
				func_54(185, 0);
			}
			else
			{
				func_54(186, 1);
			}
		}
		else
		{
			MemCopy(&cVar3, {((*Global_1347702)[iParam0 /*49*/])->f_3}, 3);
			StringConCat(&cVar3, "_FIRST", 24);
			sVar6 = ((*Global_1347702)[iParam0 /*49*/])->f_37;
			((*Global_1347702)[iParam0 /*49*/])->f_40 = func_422(MISC::_CREATE_VAR_STRING(2, &cVar3, sVar6), 10000, 0, 0, 0, 1);
		}
		func_423(iParam0, 2);
	}
}

Vector3 func_270(int iParam0)
{
	vector3 vVar0;

	if (!func_139(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { 0f, 0f, 0f };
	if (func_424(iParam0, &vVar0))
	{
		((*Global_1347702)[iParam0 /*49*/])->f_24 = { vVar0 };
	}
	return ((*Global_1347702)[iParam0 /*49*/])->f_24;
}

var func_271()
{
	return Global_40.f_11095.f_35;
}

var func_272()
{
	return Global_1894899->f_2;
}

bool func_273(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_274(vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	iVar0 = func_425(vParam0);
	iVar1 = -1;
	if (Global_1894882[iVar0] > 0)
	{
		iVar2 = (Global_1894882[iVar0] - 1);
		bVar3 = false;
		while (iVar2 >= 0 && !bVar3)
		{
			iVar4 = (*Global_1894065)[iVar0 /*51*/][iVar2];
			if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1888801)[iVar4 /*35*/])->f_3))
			{
				if (VOLUME::_0xF256A75210C5C0EB(((*Global_1888801)[iVar4 /*35*/])->f_3, vParam0))
				{
					switch (((*Global_1888801)[iVar4 /*35*/])->f_20)
					{
						case 5:
							if (!bParam3)
							{
								iVar1 = iVar4;
								bVar3 = true;
							}
							break;
						default:
							iVar1 = iVar4;
							bVar3 = true;
							break;
					}
				}
			}
			iVar2 = (iVar2 - 1);
		}
	}
	if (iVar1 != -1)
	{
	}
	return iVar1;
}

int func_275(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

bool func_276(int iParam0)
{
	return WEAPON::_0xC4DEC3CA8C365A5D(iParam0);
}

int func_277(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_278(int iParam0)
{
	iParam0 = func_117(iParam0);
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

void func_279(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	iParam2 = func_277(iParam2, 0, 100);
	if (func_426(iParam1, &iVar0))
	{
		ATTRIBUTE::_0xC6258F41D86676E0(iParam0, iVar0, iParam2);
	}
}

void func_280(int iParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	if (!func_426(iParam1, &iVar0))
	{
		return;
	}
	sVar1 = func_427(iParam1);
	sVar2 = func_428(iParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		iVar3 = ATTRIBUTE::_GET_ATTRIBUTE_CORE_VALUE(iParam0, iVar0);
		PED::_0x437C08DB4FEBE2BD(iParam0, sVar1, BUILTIN::TO_FLOAT(iVar3), -1);
		if (iVar3 <= 20)
		{
			PED::_0xCB9401F918CB0F75(iParam0, sVar2, 1, -1);
		}
		else
		{
			PED::_0xA6F67BEC53379A32(iParam0, sVar2);
		}
	}
}

int func_281()
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

int func_282(int iParam0)
{
	if (!func_103(iParam0))
	{
		return -1;
	}
	return func_429(func_390(iParam0));
}

bool func_283(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_284(int iParam0)
{
	if (func_201() != -1)
	{
		if (func_163(iParam0, 4))
		{
			return 0;
		}
	}
	else if (func_163(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

int func_285(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_163(iParam0, 65536) && !func_163(iParam0, 32768))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if ((Global_40.f_7756[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_163(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0 /*3*/] - iVar1);
			if ((Global_40.f_7756[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && func_163(iParam0, 32768))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_286()
{
	return Global_1905944->f_5694;
}

int func_287(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

var func_288(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
	func_430(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_289(int iParam0)
{
	if (!func_103(iParam0))
	{
		return -1;
	}
	return func_431(iParam0);
}

var func_290(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_112(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_291(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_292(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_293(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_294(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_295(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_296(int iParam0, int iParam1)
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

void func_297(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_432(uParam0, iParam6);
	func_433(uParam0, iParam5);
	func_434(uParam0, iParam4);
	func_435(uParam0, iParam3);
	func_436(uParam0, iParam2);
	func_437(uParam0, iParam1);
}

void func_298(int iParam0, int iParam1, bool bParam2)
{
	if (Global_1327479->f_9)
	{
		return;
	}
	Global_1327479->f_4 = (Global_1327479->f_4 + iParam0 * 1000);
	if (bParam2)
	{
		Global_1310750->f_16106 = { Global_36 };
	}
	if (iParam1 == 0)
	{
		if (iParam0 > 0)
		{
			Global_1327479->f_5 = (MISC::GET_GAME_TIMER() + ((Global_1327479->f_4 - MISC::GET_GAME_TIMER()) / 2));
		}
		else
		{
			Global_1327479->f_5 = (Global_1327479->f_5 + iParam0 * 500);
		}
	}
	else
	{
		Global_1327479->f_5 = (MISC::GET_GAME_TIMER() + iParam1 * 1000);
	}
}

int func_299(int iParam0)
{
	if ((iParam0 == 22 || iParam0 == 37) && !func_438())
	{
		return 1;
	}
	if (iParam0 == 61)
	{
		return 1;
	}
	return 0;
}

bool func_300()
{
	return Global_1935630->f_44 == joaat("weapon_fishingrod");
}

int func_301()
{
	if (SCRIPTS::IS_THREAD_ACTIVE(&Global_1900073, false))
	{
		return 1;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-506425016) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_302(int iParam0, int iParam1)
{
	return func_261(&(Global_1900073->f_2[iParam0]), iParam1);
}

int func_303()
{
	if (Global_16)
	{
		return 0;
	}
	if (!func_439())
	{
		return 0;
	}
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1934266->f_78.f_55))
	{
		return 0;
	}
	if (func_157(-1 ^ 9, 0, 1))
	{
		return 0;
	}
	return 1;
}

char* func_304(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5, var uParam6)
{
	char* sVar0;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1894899->f_162)))
	{
		sVar0 = func_156(Global_1894899->f_162);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && uParam4)
	{
		sVar0 = func_441(func_440(Global_36));
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		if (!func_442(iParam0) || func_318(45))
		{
			switch (iParam0)
			{
				case 2:
					sVar0 = "LANDMARK_MERKINS_WALLER";
					break;
				case 3:
					sVar0 = "SETTLEMENT_LAGRAS";
					break;
				case 4:
					sVar0 = "HIDEOUT_LAKAY";
					break;
				case 1:
					sVar0 = "LANDMARK_MACOMBS_END";
					break;
				case 6:
					sVar0 = "LANDMARK_HAGEN_ORCHARDS";
					break;
				case 5:
					sVar0 = "TOWN_SAINTDENIS";
					break;
				case 8:
					sVar0 = "SETTLEMENT_GRAND_KORRIGAN";
					break;
				case 9:
					sVar0 = "HIDEOUT_SHADY_BELLE";
					break;
				case 10:
					sVar0 = "LANDMARK_SILTWATER_STRAND";
					break;
				case 11:
					sVar0 = "SETTLEMENT_APPLESEED_TIMBER_CO";
					break;
				case 12:
					sVar0 = "LANDMARK_BERYLS_DREAM";
					break;
				case 15:
					sVar0 = "SETTLEMENT_FORT_RIGGS_HOLDING_CAMP";
					break;
				case 16:
					sVar0 = "HIDEOUT_HANGING_DOG_RANCH";
					break;
				case 17:
					sVar0 = "HOMESTEAD_LONE_MULE_STEAD";
					break;
				case 19:
					sVar0 = "LANDMARK_MONTOS_REST";
					break;
				case 20:
					sVar0 = "LANDMARK_OWANJILA_DAM";
					break;
				case 21:
					sVar0 = "HOMESTEAD_PAINTED_SKY";
					break;
				case 22:
					sVar0 = "SETTLEMENT_PRONGHORN_RANCH";
					break;
				case 23:
					sVar0 = "LANDMARK_RIGGS_STATION";
					break;
				case 25:
					sVar0 = "HOMESTEAD_SHEPHERDS_RISE";
					break;
				case 26:
					sVar0 = "TOWN_STRAWBERRY";
					break;
				case 27:
					sVar0 = "LANDMARK_VALLEY_VIEW";
					break;
				case 28:
					sVar0 = "LANDMARK_WALLACE_STATION";
					break;
				case 29:
					sVar0 = "HOMESTEAD_WATSONS_CABIN";
					break;
				case 30:
					sVar0 = "LANDMARK_CANEBREAK_MANOR";
					break;
				case 31:
					sVar0 = "LANDMARK_COPPERHEAD_LANDING";
					break;
				case 32:
					sVar0 = "SETTLEMENT_SISIKA_PENITENTIARY";
					break;
				case 120:
					sVar0 = "TOWN_ARMADILLO";
					break;
				case 121:
					sVar0 = "SETTLEMENT_COOTS_CHAPEL";
					break;
				case 124:
					sVar0 = "SETTLEMENT_RIDGEWOOD_FARM";
					break;
				case 123:
					sVar0 = "LANDMARK_RILEYS_CHARGE";
					break;
				case 125:
					sVar0 = "HIDEOUT_TWIN_ROCKS";
					break;
				case 33:
					sVar0 = "LANDMARK_BACCHUS_BRIDGE";
					break;
				case 34:
					sVar0 = "HOMESTEAD_FIRWOOD_RISE";
					break;
				case 35:
					sVar0 = "SETTLEMENT_FORT_WALLACE";
					break;
				case 36:
					sVar0 = "HIDEOUT_SIX_POINT_CABIN";
					break;
				case 114:
					sVar0 = "HIDEOUT_GAPTOOTH_BREACH";
					break;
				case 116:
					sVar0 = "SETTLEMENT_RATHSKELLER_FORK";
					break;
				case 115:
					sVar0 = "TOWN_TUMBLEWEED";
					break;
				case 37:
					sVar0 = "SETTLEMENT_BEECHERS_HOPE";
					break;
				case 38:
					sVar0 = "TOWN_BLACKWATER";
					break;
				case 39:
					sVar0 = "LANDMARK_QUAKERS_COVE";
					break;
				case 40:
					sVar0 = "HOMESTEAD_ADLER_RANCH";
					break;
				case 50:
					sVar0 = "LANDMARK_CALUMET_RAVINE";
					break;
				case 42:
					sVar0 = "HOMESTEAD_CHEZ_PORTER";
					break;
				case 43:
					sVar0 = "HIDEOUT_COLTER";
					break;
				case 41:
					sVar0 = "LANDMARK_WINDOW_ROCK";
					break;
				case 45:
					sVar0 = "LANDMARK_MILLESANI_CLAIM";
					break;
				case 48:
					sVar0 = "LANDMARK_TEMPEST_RIM";
					break;
				case 54:
					sVar0 = "LANDMARK_THE_LOFT";
					break;
				case 56:
					sVar0 = "SETTLEMENT_WAPITI";
					break;
				case 49:
					sVar0 = "LANDMARK_EWING_BASIN";
					break;
				case 57:
					sVar0 = "SETTLEMENT_AGUASDULCES";
					break;
				case 59:
					sVar0 = "LANDMARK_CINCO_TORRES";
					break;
				case 60:
					sVar0 = "LANDMARK_LA_CAPILLA";
					break;
				case 61:
					sVar0 = "TOWN_MANICATO";
					break;
				case 126:
					sVar0 = "TOWN_MACFARLANES_RANCH";
					break;
				case 127:
					sVar0 = "SETTLEMENT_THIEVES_LANDING";
					break;
				case 62:
					sVar0 = "LANDMARK_OLD_GREENBANK_MILL";
					break;
				case 64:
					sVar0 = "HOMESTEAD_CARMODY_DELL";
					break;
				case 65:
					sVar0 = "SETTLEMENT_CORNWALL_KEROSENE_TAR";
					break;
				case 66:
					sVar0 = "HOMESTEAD_GUTHRIE_FARM";
					break;
				case 67:
					sVar0 = "LANDMARK_CUMBERLAND_FALLS";
					break;
				case 68:
					sVar0 = "HOMESTEAD_DOWNES_RANCH";
					break;
				case 69:
					sVar0 = "SETTLEMENT_EMERALD_RANCH";
					break;
				case 70:
					sVar0 = "LANDMARK_GRANGERS_HOGGERY";
					break;
				case 72:
					sVar0 = "HOMESTEAD_LARNED_SOD";
					break;
				case 74:
					sVar0 = "LANDMARK_LUCKYS_CABIN";
					break;
				case 75:
					sVar0 = "LANDMARK_FLATNECK_STATION";
					break;
				case 76:
					sVar0 = "TOWN_VALENTINE";
					break;
				case 77:
					sVar0 = "HOMESTEAD_ABERDEEN_PIG_FARM";
					break;
				case 78:
					sVar0 = "TOWN_ANNESBURG";
					break;
				case 79:
					sVar0 = "HIDEOUT_BEAVER_HOLLOW";
					break;
				case 82:
					sVar0 = "SETTLEMENT_BUTCHER_CREEK";
					break;
				case 80:
					sVar0 = "LANDMARK_BLACK_BALSAM_RISE";
					break;
				case 81:
					sVar0 = "LANDMARK_BRANDYWINE_DROP";
					break;
				case 83:
					sVar0 = "HOMESTEAD_DOVERHILL";
					break;
				case 86:
					sVar0 = "HOMESTEAD_MACLEANS_HOUSE";
					break;
				case 87:
					sVar0 = "LANDMARK_MOSSY_FLATS";
					break;
				case 88:
					sVar0 = "LANDMARK_ROANOKE_VALLEY";
					break;
				case 89:
					sVar0 = "HOMESTEAD_WILLARDS_REST";
					break;
				case 92:
					sVar0 = "TOWN_VANHORN";
					break;
				case 117:
					sVar0 = "SETTLEMENT_BENEDICT_POINT";
					break;
				case 118:
					sVar0 = "HIDEOUT_FORT_MERCER";
					break;
				case 119:
					sVar0 = "SETTLEMENT_PLAINVIEW";
					break;
				case 93:
					sVar0 = "SETTLEMENT_BRAITHWAITE_MANOR";
					break;
				case 94:
					sVar0 = "LANDMARK_BOLGER_GLADE";
					break;
				case 95:
					sVar0 = "SETTLEMENT_CALIGA_HALL";
					break;
				case 96:
					sVar0 = "HOMESTEAD_CATFISH_JACKSONS";
					break;
				case 98:
					sVar0 = "HIDEOUT_CLEMENS_POINT";
					break;
				case 99:
					sVar0 = "HOMESTEAD_COMPSONS_STEAD";
					break;
				case 100:
					sVar0 = "HOMESTEAD_HILL_HAVEN_RANCH";
					break;
				case 102:
					sVar0 = "HOMESTEAD_LONNIES_SHACK";
					break;
				case 104:
					sVar0 = "LANDMARK_RADLEYS_PASTURE";
					break;
				case 105:
					sVar0 = "TOWN_RHODES";
					break;
				case 108:
					sVar0 = "LANDMARK_BEAR_CLAW";
					break;
				case 110:
					sVar0 = "SETTLEMENT_MANZANITA_POST";
					break;
				case 111:
					sVar0 = "LANDMARK_PACIFIC_UNION_RAILROAD";
					break;
				case 112:
					sVar0 = "LANDMARK_TANNERS_REACH";
					break;
				case 128:
					sVar0 = "SETTLEMENT_CENTRAL_UNION_RAILROAD_CAMP";
					break;
			}
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) || uParam5)
	{
		switch (iParam2)
		{
			case -49694339:
				sVar0 = "WATER_ARROYO_DE_LA_VIBORA";
				*uParam6 = 1;
				break;
			case -196675805:
				sVar0 = "WATER_AURORA_BASIN";
				*uParam6 = 1;
				break;
			case -1168459546:
				sVar0 = "WATER_BAHIA_DE_LA_PAZ";
				*uParam6 = 1;
				break;
			case 795414694:
				sVar0 = "WATER_BARROW_LAGOON";
				*uParam6 = 1;
				break;
			case -557290573:
				sVar0 = "DISTRICT_BAYOU_NWA";
				*uParam6 = 1;
				break;
			case -1073312073:
				sVar0 = "WATER_CAIRN_LAKE";
				*uParam6 = 1;
				break;
			case -804804953:
				sVar0 = "WATER_CATTAIL_POND";
				*uParam6 = 1;
				break;
			case 370072007:
				sVar0 = "WATER_DAKOTA_RIVER";
				*uParam6 = 1;
				break;
			case 1245451421:
				sVar0 = "WATER_DEADBOOT_CREEK";
				*uParam6 = 1;
				break;
			case -105598602:
				sVar0 = "WATER_ELYSIAN_POOL";
				*uParam6 = 1;
				break;
			case -1356490953:
				sVar0 = "WATER_FLAT_IRON_LAKE";
				*uParam6 = 1;
				break;
			case -1276586360:
				sVar0 = "WATER_HAWKS_EYE_CREEK";
				*uParam6 = 1;
				break;
			case 1755369577:
				sVar0 = "LANDMARK_HEARTLAND_OVERFLOW";
				*uParam6 = 1;
				break;
			case 1175365009:
				sVar0 = "WATER_COTORRA_SPRINGS";
				*uParam6 = 1;
				break;
			case -1369817450:
				sVar0 = "WATER_LAKE_DON_JULIO";
				*uParam6 = 1;
				break;
			case 592454541:
				sVar0 = "WATER_LAKE_ISABELLA";
				*uParam6 = 1;
				break;
			case -2040708515:
				sVar0 = "WATER_LANNAHECHEE_RIVER";
				*uParam6 = 1;
				break;
			case -1410384421:
				sVar0 = "WATER_LITTLE_CREEK_RIVER";
				*uParam6 = 1;
				break;
			case -1308233316:
				sVar0 = "WATER_LOWER_MONTANA_RIVER";
				*uParam6 = 1;
				break;
			case 301094150:
				sVar0 = "WATER_MATTOCK_POND";
				*uParam6 = 1;
				break;
			case -811730579:
				sVar0 = "WATER_MOONSTONE_POND";
				*uParam6 = 1;
				break;
			case -1817904483:
				sVar0 = "WATER_OCREAGHS_RUN";
				*uParam6 = 1;
				break;
			case -1300497193:
				sVar0 = "WATER_OWANJILA";
				*uParam6 = 1;
				break;
			case 2005774838:
				sVar0 = "WATER_RINGNECK_CREEK";
				*uParam6 = 1;
				break;
			case -247856387:
				sVar0 = "WATER_SEA_OF_CORONADO";
				*uParam6 = 1;
				break;
			case -823661292:
				sVar0 = "WATER_SOUTHFIELD_FLATS";
				*uParam6 = 1;
				break;
			case -218679770:
				sVar0 = "WATER_SPIDER_GORGE";
				*uParam6 = 1;
				break;
			case -1287619521:
				sVar0 = "WATER_STILLWATER_CREEK";
				*uParam6 = 1;
				break;
			case -1781130443:
				sVar0 = "WATER_UPPER_MONTANA_RIVER";
				*uParam6 = 1;
				break;
			case -261541730:
				sVar0 = "WATER_WHINYARD_STRAIT";
				*uParam6 = 1;
				break;
			case -1229593481:
				if (iParam1 == 10)
				{
					sVar0 = "WATER_KAMASSA_RIVER";
				}
				else if (iParam1 == 2)
				{
					sVar0 = "WATER_KAMASSA_RIVER_BLUEWATER_MARSH";
				}
				else
				{
					sVar0 = "WATER_KAMASSA_RIVER_BAYOU_NWA";
				}
				*uParam6 = 1;
				break;
			case -1504425495:
				if (iParam1 == 4 || iParam1 == 12)
				{
					sVar0 = "WATER_SAN_LUIS_RIVER_WEST_ELIZABETH";
				}
				else
				{
					sVar0 = "WATER_SAN_LUIS_RIVER_NEW_AUSTIN";
				}
				*uParam6 = 1;
				break;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		switch (iParam1)
		{
			case 0:
				sVar0 = "DISTRICT_BAYOU_NWA";
				break;
			case 1:
				sVar0 = "DISTRICT_BIG_VALLEY";
				break;
			case 2:
				sVar0 = "DISTRICT_BLUEWATER_MARSH";
				break;
			case 3:
				sVar0 = "DISTRICT_CUMBERLAND_FOREST";
				break;
			case 4:
				sVar0 = "DISTRICT_GREAT_PLAINS";
				break;
			case 6:
				sVar0 = "DISTRICT_GRIZZLIES";
				break;
			case 7:
				sVar0 = "DISTRICT_GRIZZLIES";
				break;
			case 8:
				sVar0 = "DISTRICT_GUARMA";
				break;
			case 9:
				sVar0 = "DISTRICT_HEARTLANDS";
				break;
			case 10:
				sVar0 = "DISTRICT_ROANOAKE_RIDGE";
				break;
			case 11:
				sVar0 = "DISTRICT_SCARLETT_MEADOWS";
				break;
			case 12:
				sVar0 = "DISTRICT_TALL_TREES";
				break;
			case 13:
				sVar0 = "DISTRICT_GAPTOOTH_RIDGE";
				break;
			case 14:
				sVar0 = "DISTRICT_RIO_BRAVO";
				break;
			case 15:
				sVar0 = "DISTRICT_CHOLLA_SPRINGS";
				break;
			case 16:
				sVar0 = "DISTRICT_HENNIGANS_STEAD";
				break;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		switch (iParam3)
		{
			case 0:
				sVar0 = "STATE_AMBARINO";
				break;
			case 2:
				sVar0 = "STATE_LEMOYNE";
				break;
			case 3:
				sVar0 = "STATE_WEST_ELIZABETH";
				break;
			case 4:
				sVar0 = "STATE_NEW_AUSTIN";
				break;
			case 1:
				sVar0 = "STATE_NEW_HANOVER";
				break;
			case 5:
				sVar0 = "STATE_GUARMA";
				break;
		}
	}
	return sVar0;
}

int func_305(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	else if (iParam0 <= 10)
	{
		return 0;
	}
	else if (iParam0 <= 29)
	{
		return 1;
	}
	else if (iParam0 <= 32)
	{
		return 2;
	}
	else if (iParam0 <= 36)
	{
		return 3;
	}
	else if (iParam0 <= 39)
	{
		return 4;
	}
	else if (iParam0 <= 49)
	{
		return 7;
	}
	else if (iParam0 <= 56)
	{
		return 6;
	}
	else if (iParam0 <= 61)
	{
		return 8;
	}
	else if (iParam0 <= 76)
	{
		return 9;
	}
	else if (iParam0 <= 92)
	{
		return 10;
	}
	else if (iParam0 <= 106)
	{
		return 11;
	}
	else if (iParam0 <= 113)
	{
		return 12;
	}
	else if (iParam0 <= 116)
	{
		return 13;
	}
	else if (iParam0 <= 119)
	{
		return 14;
	}
	else if (iParam0 <= 125)
	{
		return 15;
	}
	else if (iParam0 <= 127)
	{
		return 16;
	}
	return -1;
}

int func_306(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 2:
			return 2;
		case 11:
			return 2;
		case 9:
			return 1;
		case 10:
			return 1;
		case 3:
			return 1;
		case 4:
			return 3;
		case 12:
			return 3;
		case 1:
			return 3;
		case 5:
			return 0;
		case 6:
			return 0;
		case 7:
			return 0;
		case 8:
			return 5;
		case 13:
			return 4;
		case 14:
			return 4;
		case 15:
			return 4;
		case 16:
			return 4;
		default:
			break;
	}
	return -1;
}

int func_307(int iParam0)
{
	if (!func_214(iParam0))
	{
		return -1;
	}
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_40.f_358[iParam0 /*12*/]);
	}
	return &(Global_1058888->f_42266[iParam0 /*12*/]);
}

int func_308(int iParam0)
{
	switch (iParam0)
	{
		case -196675805:
			return 0;
		case 795414694:
			return 0;
		case -557290573:
			return 2;
		case 650214731:
			return 1;
		case -1073312073:
			return 0;
		case 231313522:
			return 0;
		case -804804953:
			return 0;
		case 370072007:
			return 1;
		case 1245451421:
			return 1;
		case 469159176:
			return 1;
		case -105598602:
			return 0;
		case -1356490953:
			return 0;
		case -1276586360:
			return 1;
		case 1755369577:
			return 0;
		case 1175365009:
			return 0;
		case -1229593481:
			return 1;
		case -1369817450:
			return 0;
		case 592454541:
			return 0;
		case -2040708515:
			return 1;
		case -1410384421:
			return 1;
		case -1308233316:
			return 1;
		case 301094150:
			return 0;
		case -811730579:
			return 0;
		case -1817904483:
			return 0;
		case -1300497193:
			return 0;
		case 2005774838:
			return 1;
		case -1504425495:
			return 1;
		case -247856387:
			return 1;
		case -823661292:
			return 0;
		case -218679770:
			return 1;
		case -1287619521:
			return 1;
		case -1781130443:
			return 1;
		case -261541730:
			return 1;
		default:
			break;
	}
	return -1;
}

char* func_309(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "WATER_TYPE_LAKE";
		case 1:
			return "WATER_TYPE_RIVER";
		case 2:
			return "WATER_TYPE_SWAMP";
		default:
			break;
	}
	return "";
}

bool func_310(int iParam0, int iParam1)
{
	if (!func_443(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return (Global_40.f_431[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_42339[iParam0] && iParam1) != 0;
}

bool func_311(int iParam0, int iParam1)
{
	if (!func_214(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return ((Global_40.f_358[iParam0 /*12*/])->f_5 && iParam1) != 0;
	}
	return ((Global_1058888->f_42266[iParam0 /*12*/])->f_5 && iParam1) != 0;
}

bool func_312(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23117[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0 /*11*/] && iParam1) != 0;
}

float func_313(float fParam0)
{
	return ((fParam0 * 1.8f) + 32f);
}

char* func_314(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_444(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

var func_315(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<4> Var0;
	vector3 vVar13;
	var uVar16;

	Var0 = -2;
	Var0 = iParam2;
	Var0.f_1 = iParam3;
	Var0.f_2 = iParam4;
	Var0.f_3 = iParam5;
	vVar13.f_1 = sParam0;
	vVar13.f_2 = sParam1;
	uVar16 = _NAMESPACE71::_0xD05590C1AB38F068(&Var0, &vVar13, iParam6, iParam7);
	return uVar16;
}

int func_316()
{
	if (Global_1572887->f_12 != -1)
	{
		Global_35 = Global_1225638->f_8;
		Global_36 = { Global_1225638->f_16 };
		return Global_1225638->f_10;
	}
	Global_35 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	Global_36 = { ENTITY::GET_ENTITY_COORDS(Global_35, false, false) };
	return PLAYER::PLAYER_ID();
}

void func_317()
{
	Global_1935630->f_13 = 0;
	Global_1935630->f_14 = 0;
	Global_1935630->f_26 = 0;
	Global_1935630->f_15 = 0;
	Global_1935630->f_16 = 0;
	Global_1935630->f_17 = 0;
	Global_1935630->f_18 = 0;
	Global_1935630->f_19 = -1;
	Global_1935630->f_20 = -1;
	Global_1935630->f_21 = -1;
	Global_1935630->f_23 = 0;
}

int func_318(int iParam0)
{
	if (!func_445(iParam0))
	{
		return 0;
	}
	return func_446(iParam0);
}

int func_319()
{
	if (func_201() != -1)
	{
		return 0;
	}
	if (!func_124())
	{
		return 0;
	}
	if (!func_165(((*Global_1835011)[1 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_165(((*Global_1835011)[2 /*74*/])->f_1, 1) && func_165(((*Global_1347702)[120 /*49*/])->f_15, 1)) && !func_165(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_165(((*Global_1835011)[37 /*74*/])->f_1, 1) && !func_165(((*Global_1835011)[39 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_165(((*Global_1835011)[57 /*74*/])->f_1, 1) && !func_165(((*Global_1835011)[60 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_165(((*Global_1835011)[26 /*74*/])->f_1, 1) && !func_165(((*Global_1347702)[67 /*49*/])->f_15, 1))
	{
		return 1;
	}
	if ((func_165(((*Global_1835011)[62 /*74*/])->f_1, 1) && func_165(((*Global_1835011)[63 /*74*/])->f_1, 1)) && !func_165(((*Global_1835011)[64 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_165(((*Global_1835011)[75 /*74*/])->f_1, 1) && !func_165(((*Global_1347702)[1 /*49*/])->f_15, 1))
	{
		return 1;
	}
	if (func_165(((*Global_1835011)[76 /*74*/])->f_1, 1) && !func_165(((*Global_1835011)[77 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_165(((*Global_1835011)[40 /*74*/])->f_1, 1) && func_165(((*Global_1835011)[41 /*74*/])->f_1, 1)) && !func_165(((*Global_1835011)[44 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_165(((*Global_1835011)[62 /*74*/])->f_1, 1) && func_165(((*Global_1835011)[63 /*74*/])->f_1, 1)) && !func_165(((*Global_1835011)[64 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_165(((*Global_1835011)[65 /*74*/])->f_1, 1) && func_165(((*Global_1835011)[66 /*74*/])->f_1, 1)) && !func_165(((*Global_1835011)[67 /*74*/])->f_1, 1))
	{
		return 1;
	}
	return 0;
}

void func_320()
{
	PLAYER::_0x95EE1DEE1DCD9070(PLAYER::PLAYER_ID(), 1);
	if (func_318(47))
	{
		PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::PLAYER_ID(), 1);
	}
	else
	{
		PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::PLAYER_ID(), 0);
	}
}

bool func_321(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_447(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return MISC::IS_BIT_SET(&(Global_40.f_283[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_1058888->f_40567[iVar1]), iVar2);
}

float func_322(float fParam0, float fParam1)
{
	if (fParam1 != 0f)
	{
		return ((fParam1 / 100f) * 200f);
	}
	return ((fParam0 / 8f) * 200f);
}

int func_323(int iParam0)
{
	if (func_438())
	{
		return 0;
	}
	return func_165(((*Global_1347702)[58 /*49*/])->f_15, 1);
}

var func_324(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	return func_448(uParam0, &Var0);
}

void func_325(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		fParam1 = func_328(iParam0, fParam1, 1);
	}
	func_450(iParam0, (func_449(iParam0, 2) + fParam1), bParam2, bParam3, 1, 2);
}

void func_326(float fParam0)
{
	if (fParam0 >= (100f - 1f))
	{
		AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
	}
	else
	{
		AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);
	}
}

void func_327()
{
	Global_40.f_11095.f_11[14] = 100f;
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, 14, 100);
	Global_40.f_11095.f_42 = 60;
}

float func_328(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_175();
	func_451(&iVar0, 0, 0, 0, 1, 0, 0);
	iVar1 = func_452(iParam0, 2);
	if (func_454(iVar0, func_453(iParam0, 2), 1))
	{
		func_455(iParam0, 0, 2);
		iVar1 = 0;
	}
	if (iVar1 >= 2)
	{
		func_54(88, bParam2);
		return 0f;
	}
	func_456(iParam0, func_175(), 2);
	func_455(iParam0, iVar1 + 1, 2);
	return fParam1;
}

float func_329(float fParam0, float fParam1, float fParam2)
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

int func_330(int iParam0)
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

char* func_331(int iParam0)
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

void func_332(int iParam0)
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
	iVar1 = func_457(2);
	func_458(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_333(int iParam0)
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
	iVar1 = func_459(2);
	func_460(BUILTIN::TO_FLOAT((iParam0 * iVar1)));
}

void func_334(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_ID();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = PLAYER::_0x57D9991DC1334151(iVar0);
	}
	iVar1 = func_461(2);
	func_462(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_335(int iParam0, bool bParam1, bool bParam2)
{
	func_450(iParam0, 100f, bParam1, bParam2, 1, 2);
}

float func_336(int iParam0)
{
	return &(Global_40.f_11095.f_11[iParam0]);
}

int func_337()
{
	if (func_201() != -1)
	{
		return 0;
	}
	if (Global_1347477->f_200)
	{
		return 0;
	}
	if (Global_1347477->f_195 == -15)
	{
		return 1;
	}
	return func_463(Global_1347477->f_195, 0);
}

int func_338(float fParam0)
{
	return BUILTIN::ROUND(((fParam0 / 100f) * BUILTIN::TO_FLOAT(10)));
}

void func_339(var uParam0, var uParam1)
{
	if (!func_124())
	{
		*uParam0 = -100f;
		*uParam1 = 100f;
		return;
	}
	*uParam0 = Global_40.f_11095.f_40;
	*uParam1 = Global_40.f_11095.f_41;
}

void func_340(int iParam0, float fParam1)
{
	int iVar0;
	bool bVar1;
	char* sVar2;

	Global_40.f_11095.f_11[iParam0] = fParam1;
	if (iParam0 == 12)
	{
		bVar1 = fParam1 != 0f;
		sVar2 = func_464(fParam1 < 0f, "rpg_cold", "rpg_hot");
		func_465(1, bVar1, 1, sVar2);
		func_466(!bVar1, fParam1 < 0f, bVar1);
		iVar0 = func_218(BUILTIN::CEIL(&(Global_40.f_11095.f_11[iParam0])));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0);
		func_206();
	}
	else if (iParam0 == 10)
	{
		iVar0 = func_218(BUILTIN::CEIL(&(Global_40.f_11095.f_11[iParam0])));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0);
	}
	else if (iParam0 == 16)
	{
		iVar0 = func_218(BUILTIN::CEIL(&(Global_40.f_11095.f_11[iParam0])));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0 * 100);
	}
	else if (iParam0 == 13)
	{
	}
}

bool func_341(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

int func_342(int iParam0)
{
	if (!func_341(iParam0))
	{
		return 0;
	}
	return ((*Global_1895087)[iParam0 /*3*/])->f_1;
}

float func_343()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;

	if (func_467())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_217(2);
	}
	if (Global_1347477->f_119)
	{
		return func_217(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_468();
	fVar2 = func_469();
	fVar3 = func_470();
	fVar4 = func_471();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_472()));
	fVar7 = (func_217(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_473(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_474(3, fVar9, fVar9 > 100f);
	return func_329(fVar7, -100f, 100f);
}

float func_344()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;

	if (func_467())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_217(1);
	}
	if (Global_1347477->f_119)
	{
		return func_217(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_468();
	fVar2 = func_469();
	fVar3 = func_470();
	fVar4 = func_471();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_472()));
	fVar7 = (func_217(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_473(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_474(2, fVar9, fVar9 > 100f);
	return func_329(fVar7, -100f, 100f);
}

float func_345()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;

	if (func_467())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_217(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_475())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_476())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_217(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_468();
	fVar2 = func_469();
	fVar3 = func_470();
	fVar4 = func_471();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_472()));
	fVar7 = (func_217(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_473(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_474(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && PLAYER::_0x0317C947D062854E(PLAYER::PLAYER_ID()) < 1f)
	{
		return func_217(0);
	}
	return func_329(fVar7, -100f, 100f);
}

bool func_346(int iParam0)
{
	return func_210(iParam0, Global_1310750->f_16072 | 64);
}

void func_347(int iParam0)
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

int func_348(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	switch (iParam0)
	{
		case 76:
			if (func_477(iParam0))
			{
				return 305496830;
			}
			else
			{
				return -1482428221;
			}
			break;
		case 105:
			if (func_477(iParam0))
			{
				return -1323821455;
			}
			else
			{
				return -1994249944;
			}
			break;
		case 5:
			return 1559741032;
		case 61:
			return 60667583;
		case 78:
			return 1758133584;
		case 26:
			return -577559008;
		case 38:
			if (!bParam1 || func_201() != -1)
			{
				return 1624541293;
			}
			if (func_318(45))
			{
				return 1624541293;
			}
			else
			{
				return 1716860278;
			}
			break;
		case 92:
			return 1637569166;
		case 65:
			return -867798278;
		case 69:
			return 1543937523;
		case 93:
			return 1030875135;
		case 95:
			return -201437056;
		case 57:
			return 794246846;
		case 3:
			return -968357677;
		case 32:
			return 728480338;
		case 82:
			return 725489698;
		case 35:
			return 183652754;
		case 56:
			return 2056744450;
		case 126:
			return 963280223;
		case 120:
			return -256309418;
		case 124:
			return 1666986024;
		case 115:
			return 251328732;
		case 127:
			if (!bParam1 || func_201() != -1)
			{
				return 1024208566;
			}
			if (func_318(45))
			{
				return 1024208566;
			}
			else
			{
				return 1640255731;
			}
			break;
		case 22:
			if (!bParam1 || func_201() != -1)
			{
				return 965626876;
			}
			if (func_165(((*Global_1835011)[59 /*74*/])->f_1, 1))
			{
				return 965626876;
			}
			else
			{
				return 1039226266;
			}
			break;
		case 37:
			if (!bParam1 || func_201() != -1)
			{
				return -497792649;
			}
			if (func_165(((*Global_1347702)[9 /*49*/])->f_15, 1))
			{
				return -497792649;
			}
			else if (func_318(45))
			{
				return -1738342532;
			}
			else
			{
				return -1308265478;
			}
			break;
		case 4:
		case 9:
		case 43:
		case 58:
		case 71:
		case 79:
		case 98:
			if (iParam0 == func_149())
			{
				return 2126166785;
			}
			break;
		case 110:
			if (!bParam1 || func_201() != -1)
			{
				return -1990305778;
			}
			if (func_318(45))
			{
				return -1990305778;
			}
			else
			{
				return -1679988168;
			}
			break;
	}
	if (bParam2)
	{
		iVar0 = func_478(iParam0);
		if (iVar0 != -1)
		{
			return func_479(iVar0, bParam1);
		}
	}
	return 0;
}

int func_349(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2126166785:
			return -1;
		case -2119728378:
		case -1482428221:
		case -1391142299:
		case -867798278:
		case 183652754:
		case 305496830:
		case 725489698:
		case 1178102426:
		case 1543937523:
		case 1637569166:
		case 1758133584:
		case 2056744450:
			return 1;
		case -2137625828:
		case -1994249944:
		case -1323821455:
		case -968357677:
		case -201437056:
		case 493546894:
		case 728480338:
		case 1030875135:
		case 1559741032:
		case 1608357655:
			return 2;
		case -1147969487:
			return 0;
		case 60667583:
		case 537788226:
		case 794246846:
			return 5;
		case -1990305778:
		case -1738342532:
		case -1679988168:
		case -1308265478:
		case -650528936:
		case -577559008:
		case -497792649:
		case 139139039:
		case 965626876:
		case 1039226266:
		case 1624541293:
		case 1716860278:
			return 3;
		case -1618764825:
		case -877373104:
		case -256309418:
		case 251328732:
		case 963280223:
		case 1024208566:
		case 1640255731:
		case 1666986024:
			return 4;
	}
	return -1;
}

void func_350(int iParam0, bool bParam1)
{
	bool bVar0;

	if (!func_273(iParam0))
	{
		return;
	}
	bVar0 = func_312(iParam0, 67108864);
	if (bParam1)
	{
		if (((!bVar0 && func_148(iParam0) == 1) && iParam0 != 120) && iParam0 != 92)
		{
			func_480(iParam0, func_175());
			func_481(iParam0, 67108864);
		}
	}
	else if (bVar0)
	{
		func_482(iParam0, 67108864);
		func_480(iParam0, -15);
	}
	func_483(iParam0);
}

int func_351(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 3;
		default:
			break;
	}
	return 0;
}

void func_352(int iParam0, float fParam1, int iParam2)
{
	char* sVar0;

	sVar0 = func_484(iParam0, 0, 0, 0);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_12[0]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_16[0]), iParam2);
}

float func_353(int iParam0)
{
	float fVar0;

	fVar0 = (BUILTIN::TO_FLOAT(iParam0) / 100f);
	return ((fVar0 * 200f) - 100f);
}

int func_354(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 87;
		case 1:
			return 85;
		case 2:
			return 86;
		default:
			break;
	}
	return -1;
}

char* func_355(int iParam0)
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

void func_356(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_357(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_358(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_116(vParam0))
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
			if (func_485(vVar2, vParam0, 2f, 1))
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

int func_359(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return 0;
	}
	return func_486((Global_1393237->f_11[iParam0 /*30*/])->f_10, iParam1);
}

int func_360()
{
	return 0;
}

void func_361(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < 6)
	{
		(Global_1393237->f_11[iParam0 /*30*/])->f_24 = iParam1;
	}
}

int func_362(int iParam0)
{
	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_14;
}

int func_363(int iParam0)
{
	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (func_362(iParam0) == 0)
	{
		return 0;
	}
	return 1;
}

void func_364(int iParam0)
{
	int iVar0;
	int iVar1;

	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_368(iParam0))
	{
		return;
	}
	iVar0 = func_278(iParam0);
	func_487(iParam0);
	if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
	if (PED::_0xAA9F048DCF69B6DC(iVar1))
	{
		if (!func_488(iVar1))
		{
			PED::SET_PED_MODEL_IS_SUPPRESSED(iVar1, false);
		}
	}
	PED::DELETE_PED(&iVar0);
	func_489(iParam0, 0);
	func_490(iParam0);
}

void func_365(int iParam0)
{
	struct<2> Var0;
	int iVar2;
	int iVar3;

	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	StringCopy(Global_40.f_1095.f_1[iParam0 /*436*/], "", 64);
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_8 = 0;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_9 = 0;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_10 = 0;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_11 = 0;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_12 = -1;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_13 = -15;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_14 = 0;
	func_491(&Var0);
	func_492(iParam0, Var0);
	func_493(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_15));
	func_494(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_298));
	func_495(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_356));
	func_496(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_497(iVar2, (Global_40.f_1095.f_1[iParam0 /*436*/])->f_398[iVar2 /*4*/]);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_498(iVar3, (Global_40.f_1095.f_1[iParam0 /*436*/])->f_407[iVar3 /*4*/]);
		iVar3++;
	}
	func_499(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_420));
	func_500(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_422));
	func_501(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_425));
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_427 = { 0f, 0f, 0f };
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_430 = 0f;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_431 = -1;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_432 = -1;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_433 = 0;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_434 = 0;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_435 = 0;
	(*Global_1900383)[iParam0 /*45*/] = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_1 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_2 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_3 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_19 = { 0f, 0f, 0f };
	((*Global_1900383)[iParam0 /*45*/])->f_22 = 0f;
	((*Global_1900383)[iParam0 /*45*/])->f_23 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_24 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_25 = 0;
	if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
	{
		MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_26));
	}
	((*Global_1900383)[iParam0 /*45*/])->f_26 = 0;
	if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_27))
	{
		MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_27));
	}
	((*Global_1900383)[iParam0 /*45*/])->f_27 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_28 = { 0f, 0f, 0f };
	((*Global_1900383)[iParam0 /*45*/])->f_31 = { 0f, 0f, 0f };
	((*Global_1900383)[iParam0 /*45*/])->f_34 = 0f;
	((*Global_1900383)[iParam0 /*45*/])->f_35 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_36 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_37 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_38 = { 0f, 0f, 0f };
	((*Global_1900383)[iParam0 /*45*/])->f_41 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_42 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_43 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_44 = -1;
}

void func_366(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_367(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

int func_368(int iParam0)
{
	iParam0 = func_117(iParam0);
	if (iParam0 <= -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383[iParam0 /*45*/]))
	{
		return 1;
	}
	return 0;
}

int func_369(int iParam0)
{
	int iVar0;

	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_368(iParam0))
	{
		return 0;
	}
	iVar0 = func_278(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_370(int iParam0)
{
	int iVar0;

	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_368(iParam0))
	{
		return 0;
	}
	iVar0 = func_278(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return 1;
	}
	return 0;
}

void func_371(int iParam0)
{
	int iVar0;

	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_368(iParam0))
	{
		return;
	}
	iVar0 = func_278(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	ENTITY::_SET_ENTITY_HEALTH(iVar0, 0, 0);
}

void func_372(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	var uVar4;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
	}
	func_502(iParam0);
	func_502(iParam0);
	func_503(iParam0, iParam1);
	func_504(iParam0, iParam1);
	func_505(iParam0, iParam1);
	iVar1 = func_278(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_506(iVar1);
		}
		if (iParam0 == 0)
		{
			PLAYER::_0x8FBF9EDB378CCB8C(iVar0, iVar1);
		}
		else if (iParam0 == 1)
		{
			uVar2 = PLAYER::_0x227B06324234FB09(iVar0, iVar1);
		}
		else
		{
			if (PLAYER::_0x46FA0AE18F4C7FA9(iVar0) == iVar1)
			{
				PLAYER::_0x8FBF9EDB378CCB8C(iVar0, 0);
			}
			if (PLAYER::_0xD3F7445CEA2E5035(iVar0) == iVar1)
			{
				PLAYER::_0x227B06324234FB09(iVar0, 0);
			}
		}
	}
	iVar3 = func_278(iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_506(iVar3);
		}
		if (iParam1 == 0)
		{
			PLAYER::_0x8FBF9EDB378CCB8C(iVar0, iVar3);
		}
		else if (iParam1 == 1)
		{
			uVar4 = PLAYER::_0x227B06324234FB09(iVar0, iVar3);
		}
		else
		{
			if (PLAYER::_0x46FA0AE18F4C7FA9(iVar0) == iVar3)
			{
				PLAYER::_0x8FBF9EDB378CCB8C(iVar0, 0);
			}
			if (PLAYER::_0xD3F7445CEA2E5035(iVar0) == iVar3)
			{
				PLAYER::_0x227B06324234FB09(iVar0, 0);
			}
		}
	}
	func_507();
}

int func_373()
{
	int iVar0;

	iVar0 = func_508();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 1;
	}
	return 0;
}

void func_374()
{
	int iVar0;

	iVar0 = func_508();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	OBJECT::DELETE_OBJECT(&iVar0);
	func_509(0);
}

void func_375(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

int func_376(int iParam0)
{
	iParam0 = func_117(iParam0);
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

int func_377(int iParam0)
{
	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_8;
}

void func_378(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;

	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_510(&uVar0, &uVar1, &uVar2);
	func_511(iParam0, uVar0);
	func_512(iParam0, uVar1);
	func_513(iParam0, uVar2);
	func_514(iParam0, 1);
	func_515(iParam0, 1);
}

void func_379(int iParam0)
{
	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_516(iParam0, 1);
}

void func_380(int iParam0, vector3 vParam1, var uParam4)
{
	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1900383)[iParam0 /*45*/])->f_19 = { vParam1 };
	((*Global_1900383)[iParam0 /*45*/])->f_22 = uParam4;
}

int func_381(int iParam0)
{
	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return func_517(iParam0, 1);
}

struct<2> func_382(int iParam0)
{
	struct<2> Var0;
	var uVar2;
	var uVar3;

	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!func_518(iParam0, &uVar2))
	{
	}
	if (!func_519(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<6> func_383()
{
	struct<6> Var0;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;

	if (func_520(-997150586, &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_520(-1189569496, &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_520(325139909, &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_520(1310070322, &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_520(986998820, &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_520(-415648720, &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

void func_384(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
	{
		return;
	}
	func_521(iParam0);
	func_522(iParam0, uParam1);
	func_523(iParam0);
	func_524(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_525(iParam0, iParam3, 0);
	}
	PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 1);
}

int func_385(int iParam0)
{
	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return ((*Global_1900383)[iParam0 /*45*/])->f_2;
}

void func_386(int iParam0)
{
	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1900383)[iParam0 /*45*/])->f_2 = 1;
	((*Global_1900383)[iParam0 /*45*/])->f_3 = SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_387(int iParam0)
{
	int iVar0;

	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_388(iParam0);
	if (!SCRIPTS::_DOES_THREAD_EXIST(iVar0))
	{
		func_490(iParam0);
	}
	else if (!SCRIPTS::IS_THREAD_ACTIVE(iVar0, false))
	{
		func_490(iParam0);
	}
}

int func_388(int iParam0)
{
	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return ((*Global_1900383)[iParam0 /*45*/])->f_3;
}

bool func_389()
{
	return func_58(70);
}

int func_390(int iParam0)
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

void func_391(int iParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam3 = func_392(iParam0);
	*uParam1 = func_429(iParam0);
	*uParam2 = func_526(iParam0);
}

int func_392(int iParam0)
{
	return iParam0 & 31;
}

int func_393(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return 0;
	}
	return 1;
}

int func_394(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if ((Global_1946804->f_57[iVar0 /*11*/])->f_8 == iParam0)
		{
			return func_527(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

void func_395(struct<4> Param0)
{
	int iVar0;
	int iVar1;

	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_244(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1 /*4*/] == Param0 && (Global_1946804->f_769[iVar1 /*4*/])->f_2 == Param0.f_2) && (Global_1946804->f_769[iVar1 /*4*/])->f_3 == Param0.f_3) && (Global_1946804->f_769[iVar1 /*4*/])->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1 /*4*/] == 34 && func_244(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_245(Param0);
	*(Global_1946804->f_769[Global_1946804->f_854 /*4*/]) = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_126(8);
}

bool func_396(int iParam0)
{
	return iParam0 > -1;
}

bool func_397(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_396(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0 /*60*/] && iParam1) != 0;
}

bool func_398(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_396(iParam0))
		{
			return false;
		}
	}
	func_405(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0]), iVar1);
}

bool func_399(int iParam0)
{
	return func_397(iParam0, 16, 1);
}

int func_400(int iParam0)
{
	if ((Global_40.f_4942[iParam0 /*60*/])->f_59 != 0)
	{
		return 1;
	}
	return 0;
}

int func_401(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return 0;
	}
	return 1;
}

int func_402(int iParam0, int iParam1)
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
	if (func_261(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_261(iVar0, 2))
	{
		if (PED::_0x3AA24CCC0D451379(iParam0))
		{
			return 0;
		}
	}
	if (func_261(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_261(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_261(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_261(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return 0;
		}
	}
	if (func_261(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_261(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

void func_403(int iParam0)
{
	int iVar0;

	if (!func_396(iParam0))
	{
		return;
	}
	if (!MISC::_0x716F17F8A0419F95(((*Global_1360165)[iParam0 /*1157*/])->f_1))
	{
		iVar0 = func_528(iParam0);
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

float func_404(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

int func_405(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
	return 1;
}

bool func_406()
{
	int iVar0;

	iVar0 = &Global_1946804->f_529[9];
	iVar0 = (&Global_1946804->f_529[4] + iVar0);
	iVar0 = (&Global_1946804->f_529[10] + iVar0);
	iVar0 = (&Global_1946804->f_529[1] + iVar0);
	iVar0 = (&Global_1946804->f_529[2] + iVar0);
	iVar0 = (&Global_1946804->f_529[6] + iVar0);
	iVar0 = (&Global_1946804->f_529[29] + iVar0);
	iVar0 = (&Global_1946804->f_529[26] + iVar0);
	iVar0 = (&Global_1946804->f_529[18] + iVar0);
	iVar0 = (&Global_1946804->f_529[19] + iVar0);
	return iVar0 > 0;
}

int func_407(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_256(iParam0, 0))
	{
		return 0;
	}
	if (Global_1935630->f_12)
	{
		return 0;
	}
	iVar0 = func_529(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_530("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_531(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_152(Var4.f_4))
			{
			}
			else if (WEAPON::_0x5C2EA6C44F515F34(Var4.f_4) == iVar0)
			{
				func_532(iVar1);
				return 1;
			}
			iVar3++;
		}
		func_532(iVar1);
	}
	return 0;
}

int func_408(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_256(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_185(iParam0);
	if (iVar0 == 307971639 || (iParam1 && iVar0 == -427144552))
	{
		iVar1 = func_529(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_533(iParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_534(bParam2), iParam0, 0);
	return iVar2;
}

int func_409()
{
	int iVar0;
	int iVar1;

	if (PED::_0xA911EE21EDF69DAF(Global_35))
	{
		return 1;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false))
	{
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, true, 1, false))
	{
	}
	if (iVar1 == joaat("weapon_unarmed"))
	{
		if (iVar0 == joaat("weapon_unarmed"))
		{
			return 1;
		}
		else if ((((WEAPON::IS_WEAPON_VALID(iVar0) && WEAPON::_0x0556E9D2ECF39D01(iVar0)) && !func_276(iVar0)) && !PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true)) && !(PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && !CAM::_0xA24C1D341C6E0D53(1, 0, 0)))
		{
			return 3;
		}
		else if (iVar0 == joaat("weapon_kit_binoculars"))
		{
			return 1;
		}
		else if ((WEAPON::IS_WEAPON_VALID(iVar0) && func_276(iVar0)) || iVar0 == joaat("weapon_lasso"))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (iVar0 == joaat("weapon_unarmed"))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_410(int iParam0)
{
	int iVar0;

	iVar0 = -1337945352;
	if (!func_139(iParam0))
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

int func_411(int iParam0)
{
	if (func_201() != -1)
	{
		return 0;
	}
	if (!func_139(iParam0))
	{
		return 0;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1048576 != 0 && ((*Global_1347702)[iParam0 /*49*/])->f_13 & 2048 != 0)
	{
		return 0;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_18 > -1f)
	{
		return 1;
	}
	return 0;
}

void func_412(int iParam0)
{
	switch (func_201())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 || iParam0);
			break;
	}
}

void func_413(int iParam0)
{
	if (!func_411(iParam0))
	{
		if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 16 != 0)
		{
			if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0)
			{
				if (MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
				{
					MAP::_0x662D364ABF16DE2F(((*Global_1347702)[iParam0 /*49*/])->f_37, -1446646876);
				}
				func_420(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 32);
			}
		}
		else
		{
			if (MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
			{
				MAP::_0xB059D7BD3D78C16F(((*Global_1347702)[iParam0 /*49*/])->f_37, -1446646876);
			}
			func_267(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 32);
		}
	}
}

void func_414(int iParam0)
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

int func_415(int iParam0)
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

int func_416(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_36307)
	{
		return MAP::DOES_BLIP_EXIST(&(Global_36307[iParam0]));
	}
	return 0;
}

bool func_417(int iParam0)
{
	if (!func_535(Global_40.f_4283))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			return true;
		}
		if (func_536(iParam0))
		{
			if (BUILTIN::VDIST(Global_36, func_537(iParam0)) < BUILTIN::VDIST(Global_36, ((*Global_1888801)[iParam0 /*35*/])->f_15))
			{
				return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_537(iParam0), false) <= func_538();
			}
		}
		return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, ((*Global_1888801)[iParam0 /*35*/])->f_15, false) <= func_538();
	}
	return func_60();
}

int func_418(int iParam0, int iParam1, int iParam2)
{
	if ((iParam1 && MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37)) && ((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0)
	{
		return ((*Global_1347702)[iParam0 /*49*/])->f_27 == iParam2;
	}
	return 0;
}

void func_419(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_103(iParam0))
	{
		return;
	}
	switch (func_238(iParam0))
	{
		case 1:
			iVar0 = func_282(iParam0);
			if (func_539(iVar0, bParam1, iParam2, iParam3) && Global_1357549->f_1709 > 1)
			{
				if ((func_540(iVar0, -1) && !((*Global_1835011)[iVar0 /*74*/])->f_70) && ((*Global_1835011)[iVar0 /*74*/])->f_63 & 2 == 0)
				{
					iVar2 = 1986697381;
				}
				else
				{
					iVar2 = -592708248;
				}
			}
			else if ((func_540(iVar0, -1) && !((*Global_1835011)[iVar0 /*74*/])->f_70) && ((*Global_1835011)[iVar0 /*74*/])->f_63 & 2 == 0)
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
				if (!func_541(iVar0))
				{
					MAP::_0x662D364ABF16DE2F(((*Global_1835011)[iVar0 /*74*/])->f_27, -1986290853);
				}
				if (func_264((*Global_1835011)[iVar0 /*74*/], 2))
				{
					MAP::_0x662D364ABF16DE2F(((*Global_1835011)[iVar0 /*74*/])->f_27, 724623647);
				}
				((*Global_1835011)[iVar0 /*74*/])->f_28 = iVar2;
			}
			break;
		case 8:
			iVar1 = func_282(iParam0);
			if (func_542(iVar1, bParam1, iParam2, iParam3) && Global_1357549->f_1709 > 1)
			{
				switch (func_410(iVar1))
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
				iVar2 = func_410(iVar1);
			}
			if (((*Global_1347702)[iVar1 /*49*/])->f_38 != iVar2)
			{
				MAP::_0xBD62D98799A3DAF0(((*Global_1347702)[iVar1 /*49*/])->f_37, iVar2);
				func_414(iVar1);
				((*Global_1347702)[iVar1 /*49*/])->f_38 = iVar2;
			}
			break;
	}
}

void func_420(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_421(int iParam0)
{
	if ((iParam0 == 97 || iParam0 == 99) || iParam0 == 6)
	{
		return 1;
	}
	return 0;
}

var func_422(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar15;

	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = _NAMESPACE71::_0x049D5C615BD38BAD(&Var0, &Var13, iParam5);
	return uVar15;
}

void func_423(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (Global_40.f_490.f_402[iParam0] || iParam1);
}

int func_424(int iParam0, var uParam1)
{
	if (iParam0 == 90)
	{
		if (func_543(((*Global_1347702)[iParam0 /*49*/])->f_15) != 0)
		{
			((*Global_1347702)[iParam0 /*49*/])->f_18 = 80f;
			*uParam1 = { 1015.113f, 159.7295f, 103.0175f };
			return 1;
		}
	}
	else if (iParam0 == 96)
	{
		if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 65536 != 0)
		{
			*uParam1 = { -1646.77f, -1362.89f, 83.4f };
			return 1;
		}
		else
		{
			*uParam1 = { -1629.71f, -1338.377f, 82.0174f };
			return 1;
		}
	}
	return 0;
}

int func_425(vector3 vParam0)
{
	int iVar0;

	iVar0 = func_544(vParam0, 0f, 0f, 0, 2);
	return func_544(vParam0, ((*Global_1894052)[iVar0 /*3*/])->f_1, ((*Global_1894052)[iVar0 /*3*/])->f_2, Global_1894052[iVar0 /*3*/], 4);
}

int func_426(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 0;
			break;
		case 1:
			*uParam1 = 1;
			break;
		default:
			return 0;
	}
	return 1;
}

char* func_427(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0 = "HealthCoreValue";
			break;
		case 1:
			sVar0 = "StaminaCoreValue";
			break;
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

char* func_428(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0 = "isLowHealthCoreActive";
			break;
		case 1:
			sVar0 = "isLowStaminaCoreActive";
			break;
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

int func_429(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

void func_430(char* sParam0, char* sParam1, int iParam2)
{
	_NAMESPACE84::_0x74BCCEB233AD95B2(-466562563, MISC::GET_HASH_KEY(sParam0));
	_NAMESPACE84::_0x74BCCEB233AD95B2(1885309238, MISC::GET_HASH_KEY(sParam1));
	_NAMESPACE84::_0x74BCCEB233AD95B2(-826961056, iParam2);
}

int func_431(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_545(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

void func_432(var uParam0, int iParam1)
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

void func_433(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 62914560);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_434(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_291(*uParam0);
	iVar1 = func_290(*uParam0);
	if (iParam1 < 1 || iParam1 > func_296(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4063232);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_435(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 126976);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_436(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4032);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_437(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 63);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

int func_438()
{
	if (func_201() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == 11966224)
	{
		return 1;
	}
	return 0;
}

int func_439()
{
	if (func_201() != 0)
	{
		return 1;
	}
	return 1;
}

int func_440(vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 51)
	{
		if (func_546(vParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

char* func_441(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LANDMARK_MOUNT_HAGEN";
		case 1:
			return "LANDMARK_SCRATCHING_POST";
		case 2:
			return "LANDMARK_JORGES_GAP";
		case 3:
			return "LANDMARK_MERCER_STATION";
		case 4:
			return "LANDMARK_ODDFELLOWS_REST";
		case 5:
			return "LANDMARK_RATTLESNAKE_HOLLOW";
		case 6:
			return "LANDMARK_SILENT_STEAD";
		case 7:
			return "LANDMARK_THE_HANGING_ROCK";
		case 8:
			return "LANDMARK_THE_OLD_BACCHUS_PLACE";
		case 9:
			return "LANDMARK_TWO_CROWS";
		case 10:
			return "LANDMARK_REPENTANCE";
		case 11:
			return "LANDMARK_BENEDICT_PASS";
		case 12:
			return "WATER_MANTECA_FALLS";
		case 13:
			return "SETTLEMENT_LIMPANY";
		case 14:
			return "WATER_MOUNT_SHANN";
		case 15:
			return "LANDMARK_THREE_SISTERS";
		case 16:
			return "HIDEOUT_PIKES_BASIN";
		case 17:
			return "SETTLEMENT_EL_NIDO";
		case 18:
			return "LANDMARK_BRITTLEBUSH_TRAWL";
		case 19:
			return "LANDMARK_ERIS_FIELD";
		case 20:
			return "LANDMARK_GRANITE_PASS";
		case 21:
			return "LANDMARK_VENTERS_PLACE";
		case 22:
			return "LANDMARK_PLEASANCE_HOUSE";
		case 23:
			return "HOMESTEAD_CHADWICK_FARM";
		case 24:
			return "LANDMARK_BLACK_BONE_FOREST";
		case 25:
			return "LANDMARK_CITADEL_ROCK";
		case 26:
			return "LANDMARK_CUEVA_SECA";
		case 27:
			return "LANDMARK_DEWBERRY_CREEK";
		case 28:
			return "LANDMARK_DIABLO_RIDGE";
		case 29:
			return "LANDMARK_DONNER_FALLS";
		case 31:
			return "HIDEOUT_SOLOMONS_FOLLY";
		case 32:
			return "LANDMARK_FORT_BRENNAND";
		case 33:
			return "LANDMARK_CALIBANS_SEAT";
		case 34:
			return "HIDEOUT_HORSESHOE_OVERLOOK";
		case 35:
			return "LANDMARK_MESCALERO";
		case 36:
			return "LANDMARK_RIO_DEL_LOBO_HOUSE";
		case 37:
			return "LANDMARK_RIO_DEL_LOBO_ROCK";
		case 38:
			return "LANDMARK_BROKEN_TREE";
		case 39:
			return "LANDMARK_BARDS_CROSSING";
		case 40:
			return "LANDMARK_FACE_ROCK";
		case 50:
			return "LANDMARK_NEKOTI_ROCK";
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
			return "";
	}
	return "";
}

int func_442(int iParam0)
{
	switch (iParam0)
	{
		case 22:
		case 25:
		case 63:
			return 1;
	}
	return 0;
}

bool func_443(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

char* func_444(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_445(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_446(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_40.f_7857[iVar1]), iVar2);
}

int func_447(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2106445152:
			return 292;
		case -2106214197:
			return 104;
		case -2101264851:
			return 195;
		case -2073072369:
			return 59;
		case -2069570138:
			return 25;
		case -2066272360:
			return 357;
		case -2058120606:
			return 197;
		case -2038424081:
			return 49;
		case -2034257789:
			return 92;
		case -2022369555:
			return 265;
		case -2021582629:
			return 112;
		case -2020023971:
			return 278;
		case -1957523409:
			return 208;
		case -1952856164:
			return 165;
		case -1949204933:
			return 276;
		case -1925798111:
			return 41;
		case -1861414976:
			return 353;
		case -1852605133:
			return 10;
		case -1847672446:
			return 376;
		case -1840704908:
			return 289;
		case -1838712533:
			return 26;
		case -1838352012:
			return 57;
		case -1835851517:
			return 56;
		case -1831552326:
			return 123;
		case -1825294305:
			return 266;
		case -1824738758:
			return 277;
		case -1818850842:
			return 253;
		case -1799960545:
			return 257;
		case -1764522338:
			return 372;
		case -1763509974:
			return 141;
		case -1741667789:
			return 64;
		case -1738165526:
			return 3;
		case -1718674470:
			return 23;
		case -1717960576:
			return 61;
		case -1711895055:
			return 13;
		case -1706438978:
			return 233;
		case -1700452710:
			return 53;
		case -1674179981:
			return 55;
		case -1666278201:
			return 33;
		case -1612662716:
			return 201;
		case -1610966108:
			return 322;
		case -1582926490:
			return 146;
		case -1579419919:
			return 147;
		case -1558439474:
			return 301;
		case -1556423728:
			return 218;
		case -1532284567:
			return 116;
		case -1530132748:
			return 311;
		case -1524512402:
			return 209;
		case -1523910291:
			return 155;
		case -1455998786:
			return 338;
		case -1447311849:
			return 215;
		case -1436021162:
			return 172;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case -1419919497:
			return 22;
		case -1414537028:
			return 73;
		case -1405998267:
			return 105;
		case -1344601768:
			return 314;
		case -1340339190:
			return 331;
		case -1329135070:
			return 140;
		case -1318987693:
			return 222;
		case -1311865656:
			return 37;
		case -1296807958:
			return 320;
		case -1283202000:
			return 321;
		case -1282804314:
			return 270;
		case -1278074582:
			return 171;
		case -1271608261:
			return 98;
		case -1257057567:
			return 21;
		case -1241340344:
			return 300;
		case -1236261996:
			return 235;
		case -1232809834:
			return 113;
		case -1230112817:
			return 170;
		case -1223121209:
			return 126;
		case -1215445344:
			return 131;
		case -1209597203:
			return 333;
		case -1206122982:
			return 156;
		case -1187950766:
			return 45;
		case -1179948750:
			return 136;
		case -1170496998:
			return 46;
		case -1164215952:
			return 234;
		case -1151084372:
			return 124;
		case -1145519186:
			return 100;
		case -1124061431:
			return 242;
		case -1123615607:
			return 29;
		case -1080627546:
			return 378;
		case -1077783786:
			return 194;
		case -1063147448:
			return 151;
		case -1062490780:
			return 79;
		case -1060078174:
			return 239;
		case -1056767524:
			return 176;
		case -1053549743:
			return 58;
		case -1029225159:
			return 106;
		case -1014145132:
			return 288;
		case -978957786:
			return 251;
		case -959357075:
			return 36;
		case -950054349:
			return 152;
		case -939420910:
			return 44;
		case -939114198:
			return 221;
		case -919512195:
			return 40;
		case -911126844:
			return 336;
		case -897750037:
			return 334;
		case -895073533:
			return 356;
		case -879507474:
			return 236;
		case -868076593:
			return 84;
		case -857964358:
			return 83;
		case -853383233:
			return 65;
		case -851626677:
			return 339;
		case -828139293:
			return 260;
		case -811637947:
			return 245;
		case -796902762:
			return 88;
		case -792853067:
			return 254;
		case -789397228:
			return 262;
		case -785605431:
			return 250;
		case -781631220:
			return 345;
		case -764163380:
			return 228;
		case -748969569:
			return 78;
		case -741351766:
			return 60;
		case -736853952:
			return 366;
		case -734416508:
			return 340;
		case -699277634:
			return 4;
		case -693828600:
			return 323;
		case -683458244:
			return 80;
		case -666014935:
			return 157;
		case -664512648:
			return 67;
		case -664252410:
			return 191;
		case -644722288:
			return 261;
		case -640663440:
			return 214;
		case -639037538:
			return 185;
		case -628542779:
			return 71;
		case -622554983:
			return 370;
		case -618620429:
			return 187;
		case -545450213:
			return 377;
		case -538889627:
			return 175;
		case -538880323:
			return 174;
		case -534215902:
			return 130;
		case -524787708:
			return 352;
		case -524145696:
			return 117;
		case -523522517:
			return 364;
		case -515561750:
			return 238;
		case -503955743:
			return 249;
		case -502473159:
			return 343;
		case -502324015:
			return 8;
		case -491981251:
			return 186;
		case -468693731:
			return 111;
		case -464836488:
			return 268;
		case -460024530:
			return 316;
		case -434590080:
			return 225;
		case -404698347:
			return 205;
		case -397760715:
			return 143;
		case -389056691:
			return 272;
		case -360036154:
			return 368;
		case -356975260:
			return 103;
		case -355531636:
			return 337;
		case -351362068:
			return 220;
		case -350863510:
			return 162;
		case -349064220:
			return 362;
		case -334729750:
			return 69;
		case -333135263:
			return 361;
		case -330120947:
			return 360;
		case -306246697:
			return 375;
		case -299522880:
			return 213;
		case -270094635:
			return 267;
		case -261141318:
			return 30;
		case -259123672:
			return 244;
		case -254562075:
			return 132;
		case -238080464:
			return 121;
		case -233743613:
			return 273;
		case -223469678:
			return 204;
		case -220282381:
			return 139;
		case -191424539:
			return 149;
		case -182889087:
			return 177;
		case -154581735:
			return 309;
		case -150493654:
			return 97;
		case -144653976:
			return 219;
		case -129643890:
			return 11;
		case -108780030:
			return 317;
		case -108307814:
			return 28;
		case -99303535:
			return 167;
		case -86199844:
			return 145;
		case -80522843:
			return 154;
		case -76237062:
			return 373;
		case -75024673:
			return 258;
		case -63926460:
			return 89;
		case -61411516:
			return 325;
		case -35658630:
			return 24;
		case -25901845:
			return 290;
		case -9438024:
			return 129;
		case -1:
			return 0;
		case 0:
			return 1;
		case 2639906:
			return 153;
		case 8924991:
			return 297;
		case 26054262:
			return 248;
		case 26245360:
			return 237;
		case 38162571:
			return 74;
		case 52706132:
			return 243;
		case 54073871:
			return 76;
		case 74872959:
			return 348;
		case 93964309:
			return 358;
		case 94263042:
			return 291;
		case 106479759:
			return 101;
		case 141950038:
			return 114;
		case 153152452:
			return 86;
		case 168171957:
			return 183;
		case 171107021:
			return 381;
		case 171499483:
			return 283;
		case 187862543:
			return 16;
		case 192515737:
			return 14;
		case 198200492:
			return 241;
		case 210001842:
			return 62;
		case 224551212:
			return 142;
		case 227918160:
			return 182;
		case 229371495:
			return 344;
		case 235928616:
			return 286;
		case 249726958:
			return 164;
		case 269047710:
			return 54;
		case 273461605:
			return 81;
		case 280705402:
			return 95;
		case 282809459:
			return 119;
		case 299694527:
			return 275;
		case 300221584:
			return 138;
		case 302205488:
			return 216;
		case 311708813:
			return 198;
		case 320943355:
			return 133;
		case 330026330:
			return 66;
		case 345808947:
			return 287;
		case 356365161:
			return 47;
		case 371850993:
			return 281;
		case 373691918:
			return 188;
		case 374115931:
			return 90;
		case 405586984:
			return 34;
		case 407136781:
			return 173;
		case 409602249:
			return 293;
		case 417081698:
			return 17;
		case 417525590:
			return 303;
		case 420709909:
			return 42;
		case 426191476:
			return 15;
		case 434558613:
			return 199;
		case 439465264:
			return 108;
		case 440043364:
			return 31;
		case 442317566:
			return 302;
		case 449774763:
			return 227;
		case 459290420:
			return 52;
		case 469053995:
			return 231;
		case 473295046:
			return 2;
		case 476714362:
			return 232;
		case 478884033:
			return 148;
		case 479419429:
			return 305;
		case 509781469:
			return 350;
		case 514932331:
			return 246;
		case 522677506:
			return 279;
		case 526003171:
			return 355;
		case 527226204:
			return 159;
		case 544152906:
			return 115;
		case 559573222:
			return 252;
		case 582380806:
			return 326;
		case 588987611:
			return 179;
		case 618699440:
			return 77;
		case 630808005:
			return 128;
		case 651395116:
			return 294;
		case 657241756:
			return 189;
		case 664571177:
			return 312;
		case 665676602:
			return 296;
		case 682839815:
			return 327;
		case 689024866:
			return 134;
		case 689930684:
			return 207;
		case 704802028:
			return 178;
		case 723021499:
			return 264;
		case 747514327:
			return 354;
		case 753127042:
			return 48;
		case 757752139:
			return 109;
		case 784360470:
			return 330;
		case 791041526:
			return 18;
		case 817925178:
			return 240;
		case 868326136:
			return 285;
		case 885203519:
			return 379;
		case 885378256:
			return 351;
		case 929582877:
			return 335;
		case 931649776:
			return 224;
		case 932909855:
			return 298;
		case 945612176:
			return 247;
		case 965986934:
			return 19;
		case 976539083:
			return 310;
		case 1010885152:
			return 7;
		case 1015669983:
			return 122;
		case 1050128548:
			return 284;
		case 1064154891:
			return 110;
		case 1067254646:
			return 319;
		case 1074873669:
			return 144;
		case 1140218954:
			return 27;
		case 1151197909:
			return 256;
		case 1159471771:
			return 329;
		case 1160698568:
			return 135;
		case 1164928979:
			return 158;
		case 1166612791:
			return 347;
		case 1167397384:
			return 307;
		case 1177464213:
			return 38;
		case 1186594126:
			return 230;
		case 1193080109:
			return 184;
		case 1203043430:
			return 274;
		case 1205826474:
			return 85;
		case 1207048789:
			return 169;
		case 1213993593:
			return 160;
		case 1216784232:
			return 269;
		case 1221801385:
			return 374;
		case 1238086793:
			return 313;
		case 1250636944:
			return 259;
		case 1302228510:
			return 315;
		case 1306158345:
			return 202;
		case 1321892118:
			return 324;
		case 1350371763:
			return 20;
		case 1350391819:
			return 75;
		case 1352699670:
			return 271;
		case 1358491857:
			return 263;
		case 1360745816:
			return 82;
		case 1376646519:
			return 223;
		case 1399676951:
			return 210;
		case 1410198831:
			return 217;
		case 1433244935:
			return 166;
		case 1441416901:
			return 211;
		case 1446719356:
			return 380;
		case 1453909576:
			return 125;
		case 1466547629:
			return 120;
		case 1478132521:
			return 367;
		case 1485195808:
			return 50;
		case 1485494263:
			return 102;
		case 1488286867:
			return 295;
		case 1488453464:
			return 212;
		case 1497516462:
			return 5;
		case 1500064347:
			return 72;
		case 1509509592:
			return 35;
		case 1512816328:
			return 168;
		case 1517904467:
			return 206;
		case 1522511407:
			return 280;
		case 1549124796:
			return 342;
		case 1557082963:
			return 163;
		case 1582370975:
			return 359;
		case 1583012985:
			return 304;
		case 1591451572:
			return 365;
		case 1607768502:
			return 9;
		case 1609506757:
			return 107;
		case 1626481264:
			return 118;
		case 1643531967:
			return 127;
		case 1649996811:
			return 181;
		case 1660024373:
			return 150;
		case 1665756137:
			return 93;
		case 1672143046:
			return 383;
		case 1691618738:
			return 68;
		case 1698972798:
			return 318;
		case 1703398561:
			return 332;
		case 1703426636:
			return 43;
		case 1708045337:
			return 346;
		case 1713221411:
			return 137;
		case 1743048395:
			return 226;
		case 1744443559:
			return 349;
		case 1766284049:
			return 94;
		case 1776302352:
			return 363;
		case 1804403874:
			return 382;
		case 1822001510:
			return 200;
		case 1846061697:
			return 99;
		case 1850082804:
			return 196;
		case 1867912207:
			return 70;
		case 1884271742:
			return 51;
		case 1926308480:
			return 96;
		case 1932172605:
			return 328;
		case 1944170089:
			return 161;
		case 1947931439:
			return 229;
		case 1952610440:
			return 203;
		case 1954026328:
			return 371;
		case 1982676972:
			return 91;
		case 2008888900:
			return 180;
		case 2016141805:
			return 6;
		case 2019386373:
			return 190;
		case 2024121624:
			return 193;
		case 2024383613:
			return 369;
		case 2024769126:
			return 308;
		case 2037589949:
			return 63;
		case 2051822093:
			return 299;
		case 2077022393:
			return 306;
		case 2080210939:
			return 282;
		case 2091701359:
			return 39;
		case 2109952320:
			return 192;
		case 2113625508:
			return 341;
		case 2127577956:
			return 255;
		case 2136753624:
			return 87;
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

var func_448(var uParam0, var uParam1)
{
	return AUDIO::_PLAY_AMBIENT_SPEECH1(uParam0, uParam1);
}

float func_449(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_547();
	}
	switch (iParam1)
	{
		case 0:
			return &(Global_1955569->f_753.f_5[iParam0 /*3*/]);
		case 1:
			return &(Global_1955569->f_866.f_2.f_5[iParam0 /*3*/]);
		default:
			break;
	}
	return -1f;
}

int func_450(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (iParam5 == 2)
	{
		iParam5 = func_547();
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
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
		func_548(iParam0, 7000, iParam5);
	}
	if (fParam1 > 100f)
	{
		fParam1 = 100f;
	}
	else if (fParam1 < 0f)
	{
		fParam1 = 0f;
	}
	func_549(iVar0, iParam0, fParam1);
	func_550(iParam0, fParam1, bParam4, iParam5);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		ATTRIBUTE::_0xC6258F41D86676E0(iVar0, func_216(iParam0), BUILTIN::CEIL(fParam1));
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_451(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = func_290(*iParam0);
	iVar1 = func_291(*iParam0);
	iVar2 = func_292(*iParam0);
	iVar3 = func_293(*iParam0);
	iVar4 = func_294(*iParam0);
	iVar5 = func_295(*iParam0);
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
		iVar7 = func_296(iVar6, iVar0);
		iVar2 = (iVar2 + iVar7);
	}
	iVar1 = (iVar1 - iParam5);
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 = (iVar0 - iParam6);
	func_297(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_452(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_547();
	}
	switch (iParam1)
	{
		case 0:
			return (Global_1955569->f_753.f_5[iParam0 /*3*/])->f_2;
		case 1:
			return (Global_1955569->f_866.f_2.f_5[iParam0 /*3*/])->f_2;
		default:
			break;
	}
	return -1;
}

int func_453(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_547();
	}
	switch (iParam1)
	{
		case 0:
			return (Global_1955569->f_753.f_5[iParam0 /*3*/])->f_1;
		case 1:
			return (Global_1955569->f_866.f_2.f_5[iParam0 /*3*/])->f_1;
		default:
			break;
	}
	return -15;
}

bool func_454(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_551(iParam1) || !func_551(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_455(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_547();
	}
	switch (iParam2)
	{
		case 0:
			(Global_1955569->f_753.f_5[iParam0 /*3*/])->f_2 = iParam1;
			break;
		case 1:
			(Global_1955569->f_866.f_2.f_5[iParam0 /*3*/])->f_2 = iParam1;
			break;
		default:
			break;
	}
}

void func_456(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_547();
	}
	switch (iParam2)
	{
		case 0:
			(Global_1955569->f_753.f_5[iParam0 /*3*/])->f_1 = iParam1;
			break;
		case 1:
			(Global_1955569->f_866.f_2.f_5[iParam0 /*3*/])->f_1 = iParam1;
			break;
		default:
			break;
	}
}

int func_457(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_547();
	}
	switch (iParam0)
	{
		case 0:
			return Global_1955569->f_850;
		case 1:
			return Global_1955569->f_866.f_115;
		default:
			break;
	}
	return -1;
}

void func_458(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = PLAYER::PLAYER_PED_ID();
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

int func_459(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_547();
	}
	switch (iParam0)
	{
		case 0:
			return Global_1955569->f_850.f_2;
		case 1:
			return Global_1955569->f_866.f_115.f_2;
		default:
			break;
	}
	return -1;
}

void func_460(float fParam0)
{
	int iVar0;

	if (fParam0 == 0f)
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	PED::_0xC3D4B754C0E86B9E(iVar0, fParam0);
}

int func_461(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_547();
	}
	switch (iParam0)
	{
		case 0:
			return Global_1955569->f_850.f_1;
		case 1:
			return Global_1955569->f_866.f_115.f_1;
		default:
			break;
	}
	return -1;
}

void func_462(float fParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	if (PLAYER::_0xB16223CB7DA965F0(iVar0) && fParam0 > 0f)
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
		PLAYER::_0x51345AE20F22C261(iVar0, fParam0, 0, 0, 0);
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

bool func_463(int iParam0, bool bParam1)
{
	return func_454(func_175(), iParam0, bParam1);
}

char* func_464(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

void func_465(int iParam0, bool bParam1, int iParam2, char* sParam3)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_8, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_7, iParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_9, sParam3);
}

void func_466(bool bParam0, bool bParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_484(0, 1, bParam0, bParam1);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_12[1]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_16[1]), bParam2);
	if (bParam0)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[1]), 0);
	}
	else if (bParam1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_20[1]), "rpg_cold");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_24[1]), "pausemenu_player");
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[1]), 1);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_20[1]), "rpg_hot");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_24[1]), "pausemenu_player");
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[1]), 1);
	}
}

int func_467()
{
	if (Global_1572887->f_12 != -1)
	{
		return 0;
	}
	return Global_1347477->f_203;
}

float func_468()
{
	float fVar0;
	int iVar1;

	fVar0 = func_336(13);
	iVar1 = func_338(fVar0);
	if (iVar1 == 0)
	{
		return 0.15f;
	}
	if (iVar1 == 10 || iVar1 == -10)
	{
		return -0.25f;
	}
	return 0f;
}

float func_469()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_470()
{
	if (func_552())
	{
		if (DLC::_0xA16B4FBA7887D7BA())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_471()
{
	if (Global_40.f_39 == 11966224)
	{
		return 0f;
	}
	if (Global_40.f_11095.f_67 >= 9)
	{
		return -0.2f;
	}
	if (Global_40.f_11095.f_67 >= 7)
	{
		return -0.05f;
	}
	return 0f;
}

float func_472()
{
	return Global_1955565->f_3;
}

void func_473(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;

	sVar0 = func_484(iParam0, 1, 0, 0);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_12[1]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_16[1]), iParam2);
}

void func_474(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_484(iParam0, 2, 0, 0);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_12[2]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_16[2]), bParam2);
	if (fParam1 > 100f)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_20[2]), "RPG_ARROW_DOWN");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_24[2]), "pausemenu_player_update");
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_28[2]), 859817522);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_32[2]), 1);
	}
	else if (fParam1 < 100f)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_20[2]), "RPG_ARROW_UP");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_24[2]), "pausemenu_player_update");
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_28[2]), 1105014447);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_32[2]), 1);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_32[2]), 0);
	}
}

bool func_475()
{
	return func_336(12) <= -99f;
}

bool func_476()
{
	return func_336(12) >= 99f;
}

int func_477(int iParam0)
{
	if (!func_273(iParam0))
	{
		return 0;
	}
	return func_312(iParam0, 33554432);
}

int func_478(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	else if (iParam0 <= 10)
	{
		return 0;
	}
	else if (iParam0 <= 29)
	{
		return 1;
	}
	else if (iParam0 <= 32)
	{
		return 2;
	}
	else if (iParam0 <= 36)
	{
		return 3;
	}
	else if (iParam0 <= 39)
	{
		return 4;
	}
	else if (iParam0 <= 49)
	{
		return 7;
	}
	else if (iParam0 <= 56)
	{
		return 6;
	}
	else if (iParam0 <= 61)
	{
		return 8;
	}
	else if (iParam0 <= 76)
	{
		return 9;
	}
	else if (iParam0 <= 92)
	{
		return 10;
	}
	else if (iParam0 <= 106)
	{
		return 11;
	}
	else if (iParam0 <= 113)
	{
		return 12;
	}
	else if (iParam0 <= 115)
	{
		return 13;
	}
	else if (iParam0 <= 119)
	{
		return 14;
	}
	else if (iParam0 <= 125)
	{
		return 15;
	}
	else if (iParam0 <= 127)
	{
		return 16;
	}
	return -1;
}

int func_479(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return -2137625828;
		case 1:
			return 1039226266;
		case 2:
			return 493546894;
		case 3:
			return -2119728378;
		case 4:
			if (!bParam1 || func_201() != -1)
			{
				return -1308265478;
			}
			if (func_318(45))
			{
				return -1308265478;
			}
			else
			{
				return -1738342532;
			}
			break;
		case 5:
			return -1147969487;
		case 6:
			return -1147969487;
		case 7:
			return -1147969487;
		case 8:
			return 537788226;
		case 9:
			return -1391142299;
		case 10:
			return 1178102426;
		case 11:
			return 1608357655;
		case 12:
			if (!bParam1 || func_201() != -1)
			{
				return -650528936;
			}
			if (func_318(45))
			{
				return -650528936;
			}
			else
			{
				return 139139039;
			}
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			if (!bParam1 || func_201() != -1)
			{
				return -877373104;
			}
			if (func_318(45))
			{
				return -877373104;
			}
			else
			{
				return -1618764825;
			}
			break;
	}
	return 0;
}

void func_480(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_23117[iParam0 /*11*/])->f_2 = iParam1;
		return;
	}
	(Global_1058888->f_40615[iParam0 /*11*/])->f_2 = iParam1;
}

void func_481(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23117[iParam0 /*11*/] = (Global_23117[iParam0 /*11*/] || iParam1);
	}
	else
	{
		Global_1058888->f_40615[iParam0 /*11*/] = (Global_1058888->f_40615[iParam0 /*11*/] || iParam1);
	}
}

void func_482(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23117[iParam0 /*11*/] = (&Global_23117[iParam0 /*11*/] - (Global_23117[iParam0 /*11*/] && iParam1));
		return;
	}
	Global_1058888->f_40615[iParam0 /*11*/] = (&Global_1058888->f_40615[iParam0 /*11*/] - (Global_1058888->f_40615[iParam0 /*11*/] && iParam1));
}

void func_483(int iParam0)
{
	if (!func_273(iParam0))
	{
		return;
	}
	if (func_553(iParam0))
	{
		func_554(iParam0);
	}
	else
	{
		func_555(iParam0);
	}
}

char* func_484(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					if (bParam2)
					{
						return "PMPLAYER_CONDITION_TEMPERATURE_FAIR";
					}
					else
					{
						return func_464(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_464(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
			}
			break;
		case 1:
		case 2:
		case 3:
			switch (iParam1)
			{
				case 0:
					return "PMPLAYER_CORE_PC_VALUE";
				case 1:
					return "PMPLAYER_TIME_VALUE_MINUTES";
				case 2:
					return "PMPLAYER_CORE_PC_VALUE";
				default:
					break;
			}
			break;
	}
	return "";
}

int func_485(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

bool func_486(var uParam0, var uParam1)
{
	return (uParam0 && uParam1) != 0;
}

void func_487(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;

	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_278(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_556(iVar6);
		if (!PED::_0x608BC6A6AACD5036(&Var2, iVar0, iVar1, 0))
		{
		}
		else
		{
			iVar7 = Var2.f_3;
			if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
			}
			else if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar7) && !ENTITY::_0x88AD6CC10D8D35B2(iVar7))
			{
			}
			else
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar7))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar7, true, true);
				}
				ENTITY::_0x0D0DB2B6AF19A987(&iVar7);
			}
		}
		iVar6++;
	}
}

int func_488(int iParam0)
{
	if (!func_557(iParam0))
	{
		return 0;
	}
	if (!func_558())
	{
		return 1;
	}
	return 0;
}

void func_489(int iParam0, int iParam1)
{
	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0 /*45*/] = iParam1;
}

void func_490(int iParam0)
{
	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1900383)[iParam0 /*45*/])->f_2 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_3 = 0;
}

void func_491(var uParam0)
{
	*uParam0 = -377364164; /* GXTEntry: "Natural" */
	uParam0->f_1 = 357708345; /* GXTEntry: "Natural" */
}

void func_492(int iParam0, struct<2> Param1)
{
	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_559(iParam0, Param1))
	{
	}
	if (!func_560(iParam0, Param1.f_1))
	{
	}
}

void func_493(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_561((*uParam0)[iVar0 /*94*/]);
		iVar0++;
	}
}

void func_494(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 57)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_495(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		(*uParam0)[iVar0 /*5*/] = 0;
		((*uParam0)[iVar0 /*5*/])->f_1 = 0;
		((*uParam0)[iVar0 /*5*/])->f_2 = 0;
		((*uParam0)[iVar0 /*5*/])->f_3 = 0;
		((*uParam0)[iVar0 /*5*/])->f_4 = 0;
		iVar0++;
	}
}

void func_496(var uParam0)
{
	int iVar0;

	uParam0->f_1 = 0f;
	*uParam0 = 0;
	iVar0 = 0;
	while (iVar0 < 23)
	{
		if (iVar0 == -1)
		{
		}
		else
		{
			uParam0->f_2[iVar0] = 0f;
		}
		iVar0++;
	}
}

void func_497(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 100;
	*uParam1 = iVar0;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
}

void func_498(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	if (iParam0 == 2)
	{
		iVar0 = 50;
	}
	*uParam1 = iVar0;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
}

void func_499(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1f;
}

void func_500(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -15;
}

void func_501(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
}

void func_502(int iParam0)
{
	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_26));
	}
	((*Global_1900383)[iParam0 /*45*/])->f_25 = 0;
}

void func_503(int iParam0, int iParam1)
{
	MISC::_COPY_MEMORY(&(Global_1900383->f_508), Global_40.f_1095.f_1[iParam1 /*436*/], 436);
	MISC::_COPY_MEMORY(Global_40.f_1095.f_1[iParam1 /*436*/], Global_40.f_1095.f_1[iParam0 /*436*/], 436);
	MISC::_COPY_MEMORY(Global_40.f_1095.f_1[iParam0 /*436*/], &(Global_1900383->f_508), 436);
}

void func_504(int iParam0, int iParam1)
{
	MISC::_COPY_MEMORY(&(Global_1900383->f_463), (*Global_1900383)[iParam1 /*45*/], 45);
	MISC::_COPY_MEMORY((*Global_1900383)[iParam1 /*45*/], (*Global_1900383)[iParam0 /*45*/], 45);
	MISC::_COPY_MEMORY((*Global_1900383)[iParam0 /*45*/], &(Global_1900383->f_463), 45);
}

int func_505(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<4> Var29;
	bool bVar58;
	int iVar59;

	Var0.f_9 = -1591664384;
	Var29.f_9 = -1591664384;
	if (!func_562(iParam0, &Var0))
	{
		return 0;
	}
	bVar58 = false;
	if (!func_562(iParam1, &Var29))
	{
		bVar58 = true;
	}
	if (bVar58)
	{
		iVar59 = func_563(iParam1);
		if (iVar59 == 0)
		{
			return 0;
		}
		if (!func_564(Var0, Var0.f_5, iVar59, 0, 0))
		{
			return 0;
		}
	}
	else if (!func_565(Var0, Var29, 0, 0))
	{
		return 0;
	}
	return 1;
}

void func_506(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (func_566(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, false, true);
	}
	PED::_0xBCC76708E5677E1D(iParam0, 0);
	PED::_0x931B241409216C1F(Global_35, iParam0, 0);
	PED::_0xB8B6430EAD2D2437(iParam0, 130495496);
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar2 = PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iVar1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, iVar2);
	ENTITY::SET_ENTITY_INVINCIBLE(iParam0, false);
	POPULATION::_0xF74E134F40192884(iParam0, 1);
	PED::_0xFD6943B6DF77E449(iParam0, false);
	PLAYER::_0xDF93973251FB2CA5(iVar0, 1);
	PED::REQUEST_PED_VISIBILITY_TRACKING(iParam0);
	FLOCK::_0xAEB97D84CDF3C00B(iParam0, 0);
	if (func_567(iParam0))
	{
		uVar3 = func_153(iParam0);
		if (func_568(uVar3))
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 324, true);
		}
	}
	PED::SET_PED_CONFIG_FLAG(iParam0, 211, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 208, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 209, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 400, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 136, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 312, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 113, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 301, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 277, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 319, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 6, true);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 25, false);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 24, false);
}

void func_507()
{
	if (func_368(0))
	{
		func_569(0);
	}
	if (func_368(1))
	{
		func_569(1);
	}
	if (func_368(5))
	{
		func_569(5);
	}
	if (func_368(6))
	{
		func_502(6);
	}
}

var func_508()
{
	return Global_1900383->f_393;
}

void func_509(int iParam0)
{
	Global_1900383->f_393 = iParam0;
}

int func_510(var uParam0, int iParam1, var uParam2)
{
	bool bVar0;

	*uParam0 = 0;
	*iParam1 = 0;
	*uParam2 = 0;
	if (func_124())
	{
		if (func_570())
		{
			bVar0 = false;
			if (!func_165(((*Global_1835011)[15 /*74*/])->f_1, 1) && !func_318(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*uParam0 = func_571();
				*iParam1 = func_572();
				*uParam2 = func_573();
				return 1;
			}
			else
			{
				*uParam0 = func_574();
				*iParam1 = func_575();
				*uParam2 = func_576();
				return 1;
			}
		}
		else if (func_438())
		{
			if (!func_165(((*Global_1835011)[60 /*74*/])->f_1, 1))
			{
				*uParam0 = func_577();
				*iParam1 = func_578();
				*uParam2 = func_579();
				return 1;
			}
			else
			{
				*uParam0 = func_580();
				*iParam1 = func_581();
				*uParam2 = func_582();
				return 1;
			}
		}
	}
	else if (func_570())
	{
		*uParam0 = func_583();
		*iParam1 = func_584();
		*uParam2 = func_585();
		return 1;
	}
	else if (func_438())
	{
		*uParam0 = func_586();
		*iParam1 = func_587();
		*uParam2 = func_588();
		return 1;
	}
	return 0;
}

void func_511(int iParam0, var uParam1)
{
	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_8 = uParam1;
}

void func_512(int iParam0, var uParam1)
{
	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_9 = uParam1;
}

void func_513(int iParam0, var uParam1)
{
	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_10 = uParam1;
}

void func_514(int iParam0, int iParam1)
{
	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_14 = iParam1;
}

void func_515(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_376(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		func_510(&uVar1, &iVar0, &uVar2);
	}
	iVar3 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	if (iParam1 > iVar3)
	{
		return;
	}
	fVar4 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iParam1));
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_372 = iParam1;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_372.f_1 = fVar4;
	func_589(iParam1);
	iVar5 = func_278(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar5) || PED::IS_PED_INJURED(iVar5))
	{
		return;
	}
	iVar6 = BUILTIN::FLOOR((Global_40.f_1095.f_1[iParam0 /*436*/])->f_372.f_1);
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(iVar5, 7, iVar6);
	iVar7 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iVar5, 7);
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_372 = iVar7;
	PED::_0xA69899995997A63B(iVar5, iVar7);
}

void func_516(int iParam0, int iParam1)
{
	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1900383)[iParam0 /*45*/])->f_24 = (((*Global_1900383)[iParam0 /*45*/])->f_24 || iParam1);
}

bool func_517(int iParam0, int iParam1)
{
	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return (((*Global_1900383)[iParam0 /*45*/])->f_24 && iParam1) != 0;
}

int func_518(int iParam0, var uParam1)
{
	struct<4> Var0;

	Var0.f_9 = -1591664384;
	if (!func_562(iParam0, &Var0))
	{
		return 0;
	}
	*uParam1 = func_590(Var0, 1415981582, 0);
	if (!func_256(*uParam1, 0))
	{
		return 0;
	}
	return 1;
}

int func_519(int iParam0, var uParam1)
{
	struct<4> Var0;

	Var0.f_9 = -1591664384;
	if (!func_562(iParam0, &Var0))
	{
		return 0;
	}
	*uParam1 = func_590(Var0, -2119169513, 0);
	if (!func_256(*uParam1, 0))
	{
		return 0;
	}
	return 1;
}

int func_520(int iParam0, var uParam1)
{
	struct<4> Var0;

	if (!func_591(856287005, iParam0))
	{
		return 0;
	}
	Var0 = { func_592() };
	*uParam1 = func_590(Var0, iParam0, 0);
	if (!func_256(*uParam1, 0))
	{
		return 0;
	}
	return 1;
}

void func_521(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	PED::_0xDF631E4BCE1B1FC4(iParam0, -1442703445, 0, false);
	PED::_0xDF631E4BCE1B1FC4(iParam0, -1505972720, 0, false);
}

void func_522(int iParam0, var uParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	func_593(iParam0, *uParam1);
	func_593(iParam0, uParam1->f_1);
}

void func_523(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	PED::_0xDF631E4BCE1B1FC4(iParam0, 399422490, 0, false);
	PED::_0xDF631E4BCE1B1FC4(iParam0, -1163401704, 0, false);
	PED::_0xDF631E4BCE1B1FC4(iParam0, 88372018, 0, false);
	PED::_0xDF631E4BCE1B1FC4(iParam0, -630346294, 0, false);
	PED::_0xDF631E4BCE1B1FC4(iParam0, -273475295, 0, false);
	PED::_0xDF631E4BCE1B1FC4(iParam0, -2142954459, 0, false);
}

void func_524(int iParam0, var uParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	func_593(iParam0, *uParam1);
	func_593(iParam0, uParam1->f_1);
	func_593(iParam0, uParam1->f_2);
	func_593(iParam0, uParam1->f_3);
	func_593(iParam0, uParam1->f_4);
	func_593(iParam0, uParam1->f_5);
}

int func_525(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (!PED::_DOES_METAPED_OUTFIT_EXIST_FOR_PED_MODEL(iParam1, iVar0))
	{
		return 0;
	}
	PED::_0x1902C4CFCC5BE57C(iParam0, iParam1);
	if (bParam2)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 1, 1, 1, 1, 0);
	}
	return 1;
}

int func_526(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 15) & 16383;
}

int func_527(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1889597427;
		case 1:
			return -1130352927;
		case 2:
			return 389988485;
		case 3:
			return 1780904876;
		case 4:
			return 1367443060;
		case 5:
			return -1506259487;
		case 6:
			return -676503695;
		case 7:
			return 383349088;
		case 8:
			return -1292426046;
		case 9:
			return 1422688607;
		case 10:
			return 1108822547;
		case 11:
			return -338487716;
		case 12:
			return 1742327865;
		case 13:
			return 1600962399;
		case 14:
			return 1849504272;
		case 15:
			return 1672288269;
		case 16:
			return 1250092473;
		case 17:
			return -893163968;
		case 18:
			return -450913544;
		case 19:
			return -1364808185;
		case 20:
			return -1197751823;
		case 21:
			return 304805134;
		case 22:
			return -1505978566;
		case 23:
			return 1145151482;
		case 24:
			return -1176744536;
		case 25:
			return 673166414;
		case 26:
			return -207860920;
		case 27:
			return 99217379;
		case 28:
			return -735900586;
		case 29:
			return -426430150;
		case 30:
			return 1788623170;
		case 31:
			return -1130865351;
		case 32:
			return -1884748965;
		case 33:
			return -1586649372;
		case 34:
			return 788010710;
		case 35:
			return 1958421083;
		case 36:
			return -1944638739;
		case 37:
			return 1900541263;
		case 38:
			return -1489346253;
		case 39:
			return -358215195;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

int func_528(int iParam0)
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

int func_529(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_256(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_185(iParam0);
	if (iVar0 == -427144552 && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_0x5C2EA6C44F515F34(iParam0);
	}
	else if (iVar0 == 307971639 && WEAPON::_0x1F7977C9101F807F(iParam0))
	{
		return iParam0;
	}
	if (func_184(iParam0, 1399091007))
	{
		func_594(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_530(char* sParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	*uParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_534(bParam4), sParam0, iParam3, uParam2);
	if (*uParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_531(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 < 0)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		return 0;
	}
	if (!INVENTORY::_0x82FA24C3D3FCD9B7(iParam2, iParam1, uParam0))
	{
		return 0;
	}
	return 1;
}

int func_532(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!INVENTORY::_0x42A2F33A1942E865(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_533(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_595(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_597(&Var0, func_596(0));
	}
	if (!func_598(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_532(iVar14);
	return uVar15;
}

int func_534(bool bParam0)
{
	if (func_201() == -1)
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

int func_535(int iParam0)
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

int func_536(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return 1;
	}
	return 0;
}

Vector3 func_537(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return -2578.509f, 389.3037f, 148.3825f;
	}
	return ((*Global_1888801)[iParam0 /*35*/])->f_15;
}

float func_538()
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

int func_539(int iParam0, bool bParam1, var uParam2, int iParam3)
{
	if (!bParam1 && func_599(iParam0, uParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

int func_540(int iParam0, int iParam1)
{
	if (iParam1 != -1)
	{
		return 0;
	}
	if (func_600(iParam0))
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

bool func_541(int iParam0)
{
	return func_601(iParam0);
}

int func_542(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (!bParam1 && func_418(iParam0, iParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

int func_543(int iParam0)
{
	if (!func_103(iParam0))
	{
		return -1;
	}
	return func_602(iParam0);
}

int func_544(struct<2> Param0, var uParam2, float fParam3, float fParam4, int iParam5, int iParam6)
{
	if (Param0 < fParam3)
	{
		if (Param0.f_1 < fParam4)
		{
			return (iParam5 + iParam6);
		}
		else
		{
			return iParam5;
		}
	}
	if (Param0.f_1 < fParam4)
	{
		return (iParam5 + iParam6) + 1;
	}
	return iParam5 + 1;
}

int func_545(int iParam0)
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

int func_546(vector3 vParam0, int iParam3)
{
	vector3 vVar0;
	struct<2> Var3;
	float fVar6;

	func_603(iParam3, &vVar0, &Var3, &fVar6);
	if (func_604(vParam0, vVar0, Var3, Var3.f_1, fVar6))
	{
		return 1;
	}
	return 0;
}

int func_547()
{
	if (func_605())
	{
		return 1;
	}
	return 0;
}

void func_548(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_547();
	}
	switch (iParam2)
	{
		case 0:
			Global_1955569->f_753.f_15[iParam0 /*3*/] = iParam1;
			break;
		case 1:
			Global_1955569->f_866.f_2.f_15[iParam0 /*3*/] = iParam1;
			break;
		default:
			break;
	}
}

void func_549(int iParam0, int iParam1, float fParam2)
{
	char* sVar0;

	sVar0 = func_355(iParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		PED::_0x437C08DB4FEBE2BD(iParam0, func_606(iParam1), fParam2, -1);
	}
}

void func_550(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (iParam3 == 2)
	{
		iParam3 = func_547();
	}
	iVar0 = MISC::GET_GAME_TIMER();
	func_607(iParam0, fParam1, iParam3);
	if (bParam2)
	{
		func_608(iParam0, iVar0, iParam3);
	}
}

int func_551(int iParam0)
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
	iVar0 = func_295(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_294(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_293(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_290(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return 0;
	}
	iVar4 = func_291(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_292(iParam0);
	if (iVar5 < 1 || iVar5 > func_296(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

bool func_552()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797);
}

int func_553(int iParam0)
{
	if (!func_273(iParam0))
	{
		return 0;
	}
	return func_312(iParam0, 67108864);
}

void func_554(int iParam0)
{
	char cVar0[64];
	char* sVar8;

	StringCopy(&cVar0, func_609(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_156(cVar0);
	MAP::_0x563FCB6620523917(MISC::GET_HASH_KEY(sVar8), -1482012664);
}

void func_555(int iParam0)
{
	char cVar0[64];
	char* sVar8;
	int iVar9;

	StringCopy(&cVar0, func_609(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_156(cVar0);
	iVar9 = MISC::GET_HASH_KEY(sVar8);
	if (MAP::_0xE38450DBCBC70E3D(iVar9, -1305340593) || MAP::_0xE38450DBCBC70E3D(iVar9, -1482012664))
	{
		MAP::_0x6786D7AFAC3162B3(iVar9);
	}
}

int func_556(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4;
		case 1:
			return 5;
		case 2:
			return 6;
	}
	return 0;
}

int func_557(int iParam0)
{
	switch (iParam0)
	{
		case -1523757120:
		case -1516219602:
		case -1063137731:
		case 604357666:
		case 705691988:
		case 1048964673:
		case 1576849913:
			return 1;
	}
	return 0;
}

bool func_558()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(99890643);
}

int func_559(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<4> Var29;

	Var0.f_9 = -1591664384;
	if (!func_562(iParam0, &Var0))
	{
		return 0;
	}
	Var29 = { func_610(iParam1, Var0, 1415981582, 0) };
	return func_611(Var29, 1);
}

int func_560(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<4> Var29;

	Var0.f_9 = -1591664384;
	if (!func_562(iParam0, &Var0))
	{
		return 0;
	}
	Var29 = { func_610(iParam1, Var0, -2119169513, 0) };
	return func_611(Var29, 1);
}

void func_561(var uParam0)
{
	int iVar0;

	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = -1;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		uParam0->f_10[iVar0 /*8*/] = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_1 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_2 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_3 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_4 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_5 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_6 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_7 = 0;
		iVar0++;
	}
	uParam0->f_91 = 0;
	uParam0->f_92 = 0;
	uParam0->f_93 = 0;
}

int func_562(int iParam0, var uParam1)
{
	int iVar0;
	struct<10> Var1;
	struct<4> Var15;

	if (!func_612(iParam0))
	{
		return 0;
	}
	iVar0 = func_563(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1.f_9 = -1591664384;
	Var15 = { func_613(0) };
	if (!func_614(Var15, iVar0, &Var1, 0, 0))
	{
		return 0;
	}
	if (!func_615(&Var1, uParam1))
	{
		return 0;
	}
	return 1;
}

int func_563(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 7:
			return 1782082944;
		case 1:
			return -832337898;
		case 2:
			return 1271463052;
		case 3:
			return 1983140194;
		case 4:
			return 677262775;
	}
	return 0;
}

int func_564(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10)
{
	struct<12> Var0;
	struct<4> Var14;

	if (!func_616(bParam10))
	{
		return func_617(Param0, Param4, iParam8, 1, bParam9, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0) || !INVENTORY::_0xB881CA836CC4B6D4(&Param4))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_618(Param0, &Var0, 0, 0))
	{
		return 0;
	}
	if (func_619(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return 1;
	}
	if (!INVENTORY::_0x780C5B9AE2819807(Var0.f_4, iParam8))
	{
		return 0;
	}
	if (!INVENTORY::_0xDCCAA7C3BFD88862(func_534(0), &Param0, &Param4, iParam8, Var0.f_11, &Var14))
	{
		return 0;
	}
	if (bParam9)
	{
		if (!func_611(Var14, 1))
		{
		}
	}
	return 1;
}

int func_565(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9)
{
	struct<11> Var0;
	struct<11> Var14;
	int iVar28;

	if (!func_616(bParam9))
	{
		return func_620(Param0, Param4, iParam8, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0) || !INVENTORY::_0xB881CA836CC4B6D4(&Param4))
	{
		return 0;
	}
	if (func_619(&Param0, &Param4))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_618(Param0, &Var0, bParam9, 1) || !func_618(Param4, &Var14, bParam9, 1))
	{
		return 0;
	}
	if (func_619(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return 0;
	}
	if (!INVENTORY::_0x780C5B9AE2819807(Var0.f_4, Var14.f_9) || !INVENTORY::_0x780C5B9AE2819807(Var14.f_4, Var0.f_9))
	{
		return 0;
	}
	iVar28 = func_534(0);
	if (!INVENTORY::_0xF2753D691BCDA314(iVar28, &Param0, &Param4))
	{
		return 0;
	}
	if (!INVENTORY::_0x734311E2852760D0(iVar28, &Param0, (Var14.f_10 || iParam8)))
	{
	}
	if (!INVENTORY::_0x734311E2852760D0(iVar28, &Param4, (Var0.f_10 || iParam8)))
	{
	}
	return 1;
}

int func_566(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (func_621(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		return 1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseCompanion"))
	{
		return 1;
	}
	return 0;
}

int func_567(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = func_153(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	return 1;
}

int func_568(var uParam0)
{
	int iVar0;

	iVar0 = uParam0;
	if (iVar0 >= 0 && iVar0 < 5)
	{
		return 1;
	}
	return 0;
}

void func_569(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	int iVar11;
	vector3 vVar12;
	float fVar15;
	bool bVar16;
	int iVar17;
	int iVar18;
	float fVar19;
	int iVar20;
	int iVar21;
	int iVar22;

	if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
	{
		return;
	}
	iVar0 = func_278(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	bVar1 = false;
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		bVar1 = true;
	}
	if (!PED::_0xA0BC8FAED8CFEB3C(iVar0))
	{
		return;
	}
	if (func_517(iParam0, 64))
	{
		func_502(iParam0);
		return;
	}
	bVar2 = false;
	if (!MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26) && !MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_27))
	{
		if (!MAP::GET_BLIP_FROM_ENTITY(iVar0) == 0)
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		return;
	}
	bVar3 = func_318(42);
	if (bVar1)
	{
		if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
		{
			MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_26));
		}
		if (iVar0 == PLAYER::_0xB48050D326E9A2F3(PLAYER::PLAYER_ID()) && bVar3)
		{
			if (!MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_27))
			{
				((*Global_1900383)[iParam0 /*45*/])->f_27 = MAP::_0x23F74C2FDA6E7C61(-515518185, iVar0);
				MAP::SET_BLIP_SPRITE(((*Global_1900383)[iParam0 /*45*/])->f_27, -1327110633, true);
				func_622(&(((*Global_1900383)[iParam0 /*45*/])->f_27));
			}
		}
		else if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_27))
		{
			MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_27));
		}
		return;
	}
	else if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_27))
	{
		MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_27));
	}
	bVar4 = false;
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (Global_1935630->f_40 == iVar0)
		{
			bVar4 = true;
		}
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26) && bVar4)
	{
		func_502(iParam0);
	}
	if (bVar4)
	{
		return;
	}
	if ((Global_40.f_1095.f_1[iParam0 /*436*/])->f_14 == 2)
	{
		return;
	}
	bVar6 = false;
	if (iParam0 == 0)
	{
		iVar5 = -1925605092;
	}
	else if (iParam0 == 1)
	{
		iVar5 = -1230993421;
		bVar6 = true;
	}
	else
	{
		return;
	}
	if (bVar6)
	{
		bVar7 = false;
		if (func_623(1) < 1)
		{
			bVar7 = true;
		}
		if (bVar7)
		{
			if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
			{
				MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_26));
			}
			return;
		}
	}
	if (!MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
	{
		((*Global_1900383)[iParam0 /*45*/])->f_26 = MAP::_0x23F74C2FDA6E7C61(iVar5, iVar0);
		((*Global_1900383)[iParam0 /*45*/])->f_25 = 0;
		func_624(&(((*Global_1900383)[iParam0 /*45*/])->f_26), bVar6);
	}
	if (!MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_517(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = TASK::IS_PED_IN_WRITHE(iVar0);
	bVar10 = false;
	iVar11 = func_625(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar11))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar11))
		{
			if (PED::GET_MOUNT(iVar11) == iVar0)
			{
				bVar10 = true;
			}
		}
	}
	vVar12 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	fVar15 = func_626(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_627(iParam0))
	{
		bVar16 = true;
	}
	iVar17 = 0;
	iVar18 = 0;
	if (bVar8)
	{
		if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 3)
		{
			iVar17 = -401963276;
			((*Global_1900383)[iParam0 /*45*/])->f_25 = 3;
		}
	}
	else if (bVar9)
	{
		fVar19 = PED::_0xEBE89623EB861271(iVar0, 1);
		if (bVar16)
		{
			if (fVar19 < 0.25f)
			{
				if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 9)
				{
					iVar17 = 430539302;
					iVar18 = 1313031610;
					((*Global_1900383)[iParam0 /*45*/])->f_25 = 9;
				}
			}
			else if (fVar19 < 0.5f)
			{
				if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 10)
				{
					iVar17 = -995247980;
					iVar18 = 1313031610;
					((*Global_1900383)[iParam0 /*45*/])->f_25 = 10;
				}
			}
			else if (fVar19 < 0.75f)
			{
				if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 11)
				{
					iVar17 = -25056193;
					iVar18 = 1313031610;
					((*Global_1900383)[iParam0 /*45*/])->f_25 = 11;
				}
			}
			else if (fVar19 <= 1f)
			{
				if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 12)
				{
					iVar17 = -264630352;
					iVar18 = 1313031610;
					((*Global_1900383)[iParam0 /*45*/])->f_25 = 12;
				}
			}
		}
		else if (fVar19 < 0.25f)
		{
			if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 5)
			{
				iVar17 = 430539302;
				iVar18 = -1012863186;
				((*Global_1900383)[iParam0 /*45*/])->f_25 = 5;
			}
		}
		else if (fVar19 < 0.5f)
		{
			if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 6)
			{
				iVar17 = -995247980;
				iVar18 = -1012863186;
				((*Global_1900383)[iParam0 /*45*/])->f_25 = 6;
			}
		}
		else if (fVar19 < 0.75f)
		{
			if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 7)
			{
				iVar17 = -25056193;
				iVar18 = -1012863186;
				((*Global_1900383)[iParam0 /*45*/])->f_25 = 7;
			}
		}
		else if (fVar19 <= 1f)
		{
			if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 8)
			{
				iVar17 = -264630352;
				iVar18 = -1012863186;
				((*Global_1900383)[iParam0 /*45*/])->f_25 = 8;
			}
		}
	}
	else if (bVar10)
	{
		if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 4)
		{
			iVar17 = -1380599892;
			((*Global_1900383)[iParam0 /*45*/])->f_25 = 4;
		}
	}
	else if (bVar16)
	{
		if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 2)
		{
			iVar17 = 1313031610;
			((*Global_1900383)[iParam0 /*45*/])->f_25 = 2;
		}
	}
	else if (!bVar16)
	{
		if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 1)
		{
			iVar17 = -1012863186;
			((*Global_1900383)[iParam0 /*45*/])->f_25 = 1;
		}
	}
	if (iVar17 != 0)
	{
		func_628(((*Global_1900383)[iParam0 /*45*/])->f_26);
		func_629(((*Global_1900383)[iParam0 /*45*/])->f_26);
		MAP::_0x662D364ABF16DE2F(((*Global_1900383)[iParam0 /*45*/])->f_26, iVar17);
		if (iVar17 == -401963276)
		{
			MAP::_0x662D364ABF16DE2F(((*Global_1900383)[iParam0 /*45*/])->f_26, 231194138);
		}
	}
	if (iVar18 != 0)
	{
		MAP::_0x662D364ABF16DE2F(((*Global_1900383)[iParam0 /*45*/])->f_26, iVar18);
	}
	if ((PLAYER::_0xB48050D326E9A2F3(PLAYER::PLAYER_ID()) == iVar0 && bVar3) && !bVar9)
	{
		MAP::_0x662D364ABF16DE2F(((*Global_1900383)[iParam0 /*45*/])->f_26, 673950256);
	}
	else
	{
		MAP::_0xB059D7BD3D78C16F(((*Global_1900383)[iParam0 /*45*/])->f_26, 673950256);
	}
	if (func_630(iVar0) && !bVar9)
	{
		if (iVar5 == -1925605092)
		{
			iVar20 = 561559387;
		}
		else if (iVar5 == -1230993421)
		{
			iVar20 = -201249929;
		}
		MAP::_0x662D364ABF16DE2F(((*Global_1900383)[iParam0 /*45*/])->f_26, iVar20);
	}
	else
	{
		MAP::_0xB059D7BD3D78C16F(((*Global_1900383)[iParam0 /*45*/])->f_26, 561559387);
		MAP::_0xB059D7BD3D78C16F(((*Global_1900383)[iParam0 /*45*/])->f_26, -201249929);
	}
	iVar21 = func_623(iParam0);
	iVar22 = 0;
	if (iParam0 == 0)
	{
		switch (iVar21)
		{
			case 0:
				iVar22 = -217389439;
				break;
			case 1:
				iVar22 = 13992470;
				break;
			case 2:
				iVar22 = 396341162;
				break;
			case 3:
				iVar22 = 623069873;
				break;
			case 4:
				iVar22 = -637422489;
				break;
		}
	}
	else if (iParam0 == 1)
	{
		switch (iVar21)
		{
			case 0:
				iVar22 = 937553910;
				break;
			case 1:
				iVar22 = 489732756;
				break;
			case 2:
				iVar22 = 195204984;
				break;
			case 3:
				iVar22 = -103418913;
				break;
			case 4:
				iVar22 = -815685893;
				break;
		}
	}
	if (iVar22 == 0)
	{
		MAP::_0x44813684F72B563C(iVar0, ((*Global_1900383)[iParam0 /*45*/])->f_26);
	}
	else
	{
		MAP::_0x97F6F158CC5B5CA2(iVar0, ((*Global_1900383)[iParam0 /*45*/])->f_26);
		MAP::_0x7563CBCA99253D1A(iVar0, iVar22);
	}
}

int func_570()
{
	if (func_201() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == joaat("player_zero"))
	{
		return 1;
	}
	return 0;
}

int func_571()
{
	return 1342496140;
}

int func_572()
{
	return 446670976;
}

int func_573()
{
	return 1;
}

int func_574()
{
	return -868094182;
}

int func_575()
{
	return 1074477367;
}

int func_576()
{
	return 1;
}

int func_577()
{
	return -997197050;
}

int func_578()
{
	return -2063289686;
}

int func_579()
{
	return 2;
}

int func_580()
{
	return -868094182;
}

int func_581()
{
	return 1074477367;
}

int func_582()
{
	return 1;
}

int func_583()
{
	return 1235275977;
}

int func_584()
{
	return 2030804811;
}

int func_585()
{
	return 1;
}

int func_586()
{
	return 1974379573;
}

int func_587()
{
	return 2024948086;
}

int func_588()
{
	return 1;
}

void func_589(int iParam0)
{
	if (func_631() < iParam0)
	{
		func_632(iParam0);
	}
}

int func_590(struct<4> Param0, int iParam4, bool bParam5)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_633(Param0, iParam4, &Var0, bParam5))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_591(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar4;
	int iVar5;
	int iVar6;

	if (iParam0 != 0)
	{
		iVar5 = func_243(iParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_634(iParam0);
			iVar0 = 0;
			while (iVar0 < iVar6)
			{
				if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar5, iVar0, &uVar1))
				{
					iVar4 = uVar1;
					if (iVar4 == iParam1)
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

struct<4> func_592()
{
	struct<4> Var0;

	Var0 = { func_613(0) };
	return func_610(856287005, Var0, -218846335, 0);
}

void func_593(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (iParam1 == -377364164 || iParam1 == 357708345)
	{
		return;
	}
	iVar0 = iParam1;
	PED::_SET_PED_COMPONENT_ENABLED(iParam0, iVar0, false, false, false);
}

void func_594(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case 1234009870:
			*uParam1 = 1802325493;
			*uParam2 = 1681219929; /* GXTEntry: "Revolver Cartridges - Regular" */
			break;
		case -1202134084:
			*uParam1 = -864693164;
			*uParam2 = 1681219929; /* GXTEntry: "Revolver Cartridges - Regular" */
			break;
		case 1297050066:
			*uParam1 = -603289736;
			*uParam2 = 1232099469; /* GXTEntry: "Revolver Cartridges - Express" */
			break;
		case -1780177928:
			*uParam1 = -1803237008;
			*uParam2 = -2084181920; /* GXTEntry: "Revolver Cartridges - High Velocity" */
			break;
		case -1467836497:
			*uParam1 = -1175521284;
			*uParam2 = joaat("ammo_pistol");
			break;
		case 1723805622:
			*uParam1 = -1559549888;
			*uParam2 = joaat("ammo_pistol");
			break;
		case -153287664:
			*uParam1 = -1650796693;
			*uParam2 = 836939099; /* GXTEntry: "Pistol Cartridges - Express" */
			break;
		case 1845082736:
			*uParam1 = -1521597660;
			*uParam2 = -1411815376; /* GXTEntry: "Pistol Cartridges - High Velocity" */
			break;
		case 406755377:
			*uParam1 = -1288829256;
			*uParam2 = joaat("ammo_rifle");
			break;
		case 1469029564:
			*uParam1 = 1393841762;
			*uParam2 = joaat("ammo_rifle");
			break;
		case 45760211:
			*uParam1 = -851229814;
			*uParam2 = 1654725195; /* GXTEntry: "Rifle Cartridges - Express" */
			break;
		case -276295943:
			*uParam1 = 914704115;
			*uParam2 = 1858824185; /* GXTEntry: "Rifle Cartridges - High Velocity" */
			break;
		case -2029793397:
			*uParam1 = -219896679;
			*uParam2 = -1330115686; /* GXTEntry: "Repeater Cartridges - Regular" */
			break;
		case 2120467495:
			*uParam1 = 516838334;
			*uParam2 = -1330115686; /* GXTEntry: "Repeater Cartridges - Regular" */
			break;
		case -2075613923:
			*uParam1 = -385817936;
			*uParam2 = -578347576; /* GXTEntry: "Repeater Cartridges - Express" */
			break;
		case 122656217:
			*uParam1 = 1192843172;
			*uParam2 = 231465488; /* GXTEntry: "Repeater Cartridges - High Velocity" */
			break;
		case 2107187484:
			*uParam1 = 954871696;
			*uParam2 = joaat("ammo_shotgun");
			break;
		case -791844268:
			*uParam1 = -1217273132;
			*uParam2 = joaat("ammo_shotgun");
			break;
		case 305770744:
			*uParam1 = -2087227528;
			*uParam2 = 314966081; /* GXTEntry: "Shotgun - Slug" */
			break;
		case 550900979:
			*uParam1 = -618066518;
			*uParam2 = 2113196069;
			break;
	}
}

struct<14> func_595(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<14> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_13 = -1;
	if (iParam0 != 0)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1591664384)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0 && iParam3 != -1591664384)
	{
		Var0.f_3 = iParam3;
	}
	if (iParam4 != 0)
	{
		Var0.f_4 = iParam4;
	}
	if (iParam5 != 0)
	{
		Var0.f_5 = iParam5;
	}
	return Var0;
}

struct<4> func_596(bool bParam0)
{
	int iVar0;

	iVar0 = func_534(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224214))
		{
			*Global_1224214 = { func_610(923904168, func_613(bParam0), -740156546, bParam0) };
		}
		return *Global_1224214;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224222))
		{
			*Global_1224222 = { func_610(923904168, func_613(bParam0), -740156546, 0) };
		}
		return *Global_1224222;
	}
	return func_610(923904168, func_613(bParam0), -740156546, 0);
}

void func_597(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_598(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	*uParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_534(bParam3), uParam0, uParam2);
	if (*uParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_599(int iParam0, var uParam1, int iParam2)
{
	if (iParam0 == 18)
	{
		return 0;
	}
	if (iParam0 == 71)
	{
		return 0;
	}
	if ((uParam1 && MAP::DOES_BLIP_EXIST(((*Global_1835011)[iParam0 /*74*/])->f_27)) && ((*Global_1835011)[iParam0 /*74*/])->f_21 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_600(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_635((*Global_1835011)[iParam0 /*74*/]);
	}
	return 0;
}

int func_601(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 36:
			return 1;
	}
	return 0;
}

int func_602(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_3;
	}
	return 0;
}

void func_603(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -1616.769f, 1260.714f, 205.33f };
			*uParam2 = { 150f, 150f, 184f };
			*uParam3 = 0f;
			break;
		case 1:
			*uParam1 = { -5837.918f, -3738.832f, -20.6f };
			*uParam2 = { 40f, 35f, 70f };
			*uParam3 = 45f;
			break;
		case 2:
			*uParam1 = { -4160.689f, -2836.915f, -13.674f };
			*uParam2 = { 43f, 197f, 70f };
			*uParam3 = 38f;
			break;
		case 3:
			*uParam1 = { -4359.861f, -3083.375f, -13.674f };
			*uParam2 = { 30f, 30f, 70f };
			*uParam3 = 0f;
			break;
		case 4:
			*uParam1 = { -4446.777f, -2689.265f, -13.674f };
			*uParam2 = { 30f, 30f, 70f };
			*uParam3 = 0f;
			break;
		case 5:
			*uParam1 = { -4415.84f, -2199.774f, 22.356f };
			*uParam2 = { 13f, 21f, 47f };
			*uParam3 = 34f;
			break;
		case 6:
			*uParam1 = { -5554.764f, -2395.945f, 7.172f };
			*uParam2 = { 21f, 21f, 47f };
			*uParam3 = 0f;
			break;
		case 7:
			*uParam1 = { -3447.267f, -2257.723f, 7.172f };
			*uParam2 = { 40f, 23f, 47f };
			*uParam3 = 0f;
			break;
		case 8:
			*uParam1 = { -1425.852f, -2676.848f, 73.224f };
			*uParam2 = { 40f, 25f, 47f };
			*uParam3 = 26f;
			break;
		case 9:
			*uParam1 = { -3829.438f, -3009.26f, -13.674f };
			*uParam2 = { 39f, 54f, 70f };
			*uParam3 = -46f;
			break;
		case 10:
			*uParam1 = { -4696.308f, -3302.809f, -13.674f };
			*uParam2 = { 104f, 57f, 70f };
			*uParam3 = 0f;
			break;
		case 11:
			*uParam1 = { -5064.707f, -3139.862f, -13.674f };
			*uParam2 = { 23f, 26f, 70f };
			*uParam3 = 43f;
			break;
		case 12:
			*uParam1 = { -1631.875f, -2856.089f, -1.645f };
			*uParam2 = { 149f, 65f, 154f };
			*uParam3 = 39f;
			break;
		case 13:
			*uParam1 = { -347.889f, -131.72f, -1.645f };
			*uParam2 = { 52f, 40f, 154f };
			*uParam3 = 0f;
			break;
		case 14:
			*uParam1 = { -2126.5f, 88.317f, 139.179f };
			*uParam2 = { 334f, 171f, 277f };
			*uParam3 = -45f;
			break;
		case 15:
			*uParam1 = { 1574.061f, 1121.954f, 201.6f };
			*uParam2 = { 147f, 194f, 201f };
			*uParam3 = 0f;
			break;
		case 16:
			*uParam1 = { -2741.641f, -2375.761f, 31.492f };
			*uParam2 = { 86f, 61f, 50f };
			*uParam3 = 11f;
			break;
		case 17:
			*uParam1 = { 1773.323f, -5976.334f, 71.662f };
			*uParam2 = { 34f, 34f, 100f };
			*uParam3 = -124f;
			break;
		case 18:
			*uParam1 = { -2022.258f, -3039.913f, 25f };
			*uParam2 = { 25f, 25f, 45f };
			*uParam3 = 0f;
			break;
		case 19:
			*uParam1 = { 1394.172f, -647.735f, 72.455f };
			*uParam2 = { 19f, 18f, 100f };
			*uParam3 = 40f;
			break;
		case 20:
			*uParam1 = { -242.336f, 1624.373f, 212.894f };
			*uParam2 = { 98f, 52f, 120f };
			*uParam3 = 51f;
			break;
		case 21:
			*uParam1 = { -3543.512f, -3032.038f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
		case 22:
			*uParam1 = { -4348.655f, -2427.582f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
		case 23:
			*uParam1 = { -391.586f, 922.337f, 137.604f };
			*uParam2 = { 31f, 30f, 40f };
			*uParam3 = 0f;
			break;
		case 24:
			*uParam1 = { -2656.999f, 153.667f, 189.043f };
			*uParam2 = { 177f, 126f, 102f };
			*uParam3 = 52f;
			break;
		case 25:
			*uParam1 = { 156.109f, 425.799f, 120f };
			*uParam2 = { 249f, 112f, 120f };
			*uParam3 = -36f;
			break;
		case 26:
			*uParam1 = { -5868.5f, -2752.441f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
		case 27:
			*uParam1 = { 898.505f, -335.252f, 48.403f };
			*uParam2 = { 56f, 152f, 70f };
			*uParam3 = -36f;
			break;
		case 28:
			*uParam1 = { -889.947f, -171.356f, 90.537f };
			*uParam2 = { 180f, 95f, 100f };
			*uParam3 = 29f;
			break;
		case 29:
			*uParam1 = { 571.454f, 1968.615f, 122.93f };
			*uParam2 = { 32f, 49f, 140f };
			*uParam3 = 0f;
			break;
		case 30:
			*uParam1 = { -2769.681f, -3210.99f, 25f };
			*uParam2 = { 25f, 25f, 45f };
			*uParam3 = 0f;
			break;
		case 31:
			*uParam1 = { -5409.034f, -3657.266f, -14.496f };
			*uParam2 = { 36f, 30f, 30f };
			*uParam3 = -24f;
			break;
		case 32:
			*uParam1 = { 2453.293f, 290.68f, 69.615f };
			*uParam2 = { 35f, 42f, 19f };
			*uParam3 = -4f;
			break;
		case 33:
			*uParam1 = { -643.042f, 278.359f, 95.5f };
			*uParam2 = { 70f, 67f, 65f };
			*uParam3 = -109f;
			break;
		case 34:
			*uParam1 = { -118.339f, -24.853f, 96.907f };
			*uParam2 = { 84f, 69f, 37f };
			*uParam3 = 0f;
			break;
		case 35:
			*uParam1 = { -2863.456f, -2723.259f, 93.195f };
			*uParam2 = { 196f, 157f, 85f };
			*uParam3 = -18f;
			break;
		case 36:
			*uParam1 = { -3484.814f, -3466.383f, -0.849f };
			*uParam2 = { 12f, 12f, 70f };
			*uParam3 = 0f;
			break;
		case 37:
			*uParam1 = { -3620.875f, -3575.926f, -0.849f };
			*uParam2 = { 126f, 86f, 70f };
			*uParam3 = -6f;
			break;
		case 38:
			*uParam1 = { -1382.32f, -1400.969f, 56.092f };
			*uParam2 = { 22f, 32f, 86f };
			*uParam3 = 0f;
			break;
		case 39:
			*uParam1 = { -713.105f, -538.091f, 59.42f };
			*uParam2 = { 160f, 22f, 100f };
			*uParam3 = 26f;
			break;
		case 40:
			*uParam1 = { 1083.588f, -693.478f, 48.403f };
			*uParam2 = { 45f, 46f, 70f };
			*uParam3 = 0f;
			break;
		case 41:
			*uParam1 = { -956.489f, 2175.227f, 307.401f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 42:
			*uParam1 = { 1457.354f, -1576.261f, 95.401f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 43:
			*uParam1 = { 348.488f, -669.098f, 95f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 44:
			*uParam1 = { 2008.052f, 617.155f, 95f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 45:
			*uParam1 = { 2099.835f, -283.012f, 42f };
			*uParam2 = { 21f, 29f, 49f };
			*uParam3 = 52f;
			break;
		case 46:
			*uParam1 = { -1759.31f, -224.369f, 168f };
			*uParam2 = { 21f, 29f, 116f };
			*uParam3 = 56f;
			break;
		case 47:
			*uParam1 = { 2142.39f, -1284.068f, 85f };
			*uParam2 = { 40f, 71f, 116f };
			*uParam3 = 70f;
			break;
		case 48:
			*uParam1 = { 2309.119f, -343.031f, 85f };
			*uParam2 = { 15f, 15f, 116f };
			*uParam3 = 0f;
			break;
		case 49:
			*uParam1 = { -1815.147f, -2405.116f, 71f };
			*uParam2 = { 25f, 25f, 50f };
			*uParam3 = 0f;
			break;
		case 50:
			*uParam1 = { -2269.232f, -1145.787f, 214f };
			*uParam2 = { 37f, 33f, 68f };
			*uParam3 = 0f;
			break;
	}
}

bool func_604(vector3 vParam0, vector3 vParam3, float fParam6, float fParam7, float fParam8)
{
	vector3 vVar0;
	struct<2> Var3;
	float fVar6;

	vVar0 = { vParam0 - vParam3 };
	Var3 = ((vVar0.x * BUILTIN::COS(fParam8)) + (vVar0.y * BUILTIN::SIN(fParam8)));
	Var3.f_1 = ((vVar0.x * BUILTIN::SIN(fParam8)) - (vVar0.y * BUILTIN::COS(fParam8)));
	fVar6 = (((Var3 * Var3) / (fParam6 * fParam6)) + ((Var3.f_1 * Var3.f_1) / (fParam7 * fParam7)));
	return fVar6 <= 1f;
}

bool func_605()
{
	return Global_1955569->f_866;
}

char* func_606(int iParam0)
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

void func_607(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_547();
	}
	switch (iParam2)
	{
		case 0:
			Global_1955569->f_753.f_5[iParam0 /*3*/] = uParam1;
			break;
		case 1:
			Global_1955569->f_866.f_2.f_5[iParam0 /*3*/] = uParam1;
			break;
		default:
			break;
	}
}

void func_608(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_547();
	}
	switch (iParam2)
	{
		case 0:
			(Global_1955569->f_753.f_15[iParam0 /*3*/])->f_2 = iParam1;
			break;
		case 1:
			(Global_1955569->f_866.f_2.f_15[iParam0 /*3*/])->f_2 = iParam1;
			break;
		default:
			break;
	}
}

char* func_609(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return "REGION_INVALID";
		case 0:
			return "REGION_BAY_CRAWDADWILLIES";
		case 1:
			return "REGION_BAY_MACOMBS_END";
		case 2:
			return "REGION_BAY_MERKINSWALLER";
		case 3:
			return "REGION_BAY_LAGRAS";
		case 4:
			return "REGION_BAY_LAKAY";
		case 5:
			return "REGION_BAY_SAINT_DENIS";
		case 6:
			return "REGION_BAY_ORANGE_PLANTATION";
		case 7:
			return "REGION_BAY_SERIAL_KILLER";
		case 8:
			return "REGION_BAY_SERENDIPITY";
		case 9:
			return "REGION_BAY_SHADYBELLE";
		case 10:
			return "REGION_BAY_SILTWATERSTRAND";
		case 11:
			return "REGION_BGV_APPLESEEDTIMBER";
		case 12:
			return "REGION_BGV_BERYLS_DREAM";
		case 13:
			return "REGION_BGV_BLACKBONEFOREST_TRAPPER";
		case 14:
			return "REGION_BGV_DAKOTARIVER_TRAPPER";
		case 15:
			return "REGION_BGV_FORTRIGGS";
		case 16:
			return "REGION_BGV_HANGINGDOG";
		case 17:
			return "REGION_BGV_LONEMULESTEAD";
		case 18:
			return "REGION_BGV_MISSING_HUSBAND";
		case 19:
			return "REGION_BGV_MONTO_REST";
		case 20:
			return "REGION_BGV_OWANJILA_DAM";
		case 21:
			return "REGION_BGV_PAINTEDSKY";
		case 22:
			return "REGION_BGV_PRONGHORN";
		case 23:
			return "REGION_BGV_RIGGS_STATION";
		case 24:
			return "REGION_BGV_SHACK";
		case 25:
			return "REGION_BGV_SHEPHERDS_RISE";
		case 26:
			return "REGION_BGV_STRAWBERRY";
		case 27:
			return "REGION_BGV_VALLEY_VIEW";
		case 28:
			return "REGION_BGV_WALLACE_STATION";
		case 29:
			return "REGION_BGV_WATSONSCABIN";
		case 30:
			return "REGION_BLU_CANEBREAK_MANOR";
		case 31:
			return "REGION_BLU_COPPERHEAD";
		case 32:
			return "REGION_BLU_SISIKA";
		case 33:
			return "REGION_CML_BACCHUSBRIDGE";
		case 34:
			return "REGION_CML_DINO_LADY";
		case 35:
			return "REGION_CML_OLDFORTWALLACE";
		case 36:
			return "REGION_CML_SIXPOINTCABIN";
		case 37:
			return "REGION_GRT_BEECHERS";
		case 38:
			return "REGION_GRT_BLACKWATER";
		case 39:
			return "REGION_GRT_QUAKERS_COVE";
		case 40:
			return "REGION_GRZ_ADLERRANCH";
		case 41:
			return "REGION_GRZ_DEAD_RIVAL";
		case 50:
			return "REGION_GRZ_CALUMETRAVINE";
		case 51:
			return "REGION_GRE_CIVIL_WAR_BRIDE";
		case 42:
			return "REGION_GRZ_CHEZPORTER";
		case 52:
			return "REGION_GRZ_COHUTTA";
		case 43:
			return "REGION_GRZ_COLTER";
		case 44:
			return "REGION_GRZ_FROZEN_EXPLORER";
		case 53:
			return "REGION_GRZ_GUNFIGHT";
		case 45:
			return "REGION_GRZ_MILLESANI_CLAIM";
		case 46:
			return "REGION_GRZ_MOUNTAIN_MAN";
		case 47:
			return "REGION_GRZ_STARVING_CHILDREN";
		case 48:
			return "REGION_GRZ_TEMPEST_RIM";
		case 54:
			return "REGION_GRZ_THELOFT";
		case 55:
			return "REGION_GRE_VETERAN";
		case 56:
			return "REGION_GRZ_WAPITI";
		case 49:
			return "REGION_GRZ_WINTERMINING_TOWN";
		case 57:
			return "REGION_GUA_AGUASDULCES";
		case 58:
			return "REGION_GUA_CAMP";
		case 59:
			return "REGION_GUA_CINCOTORRES";
		case 60:
			return "REGION_GUA_LACAPILLA";
		case 61:
			return "REGION_GUA_MANICATO";
		case 62:
			return "REGION_HRT_ABANDONED_MILL";
		case 64:
			return "REGION_HRT_CARMODYDELL";
		case 65:
			return "REGION_HRT_CORNWALLKEROSENE";
		case 66:
			return "REGION_HRT_CROP_FARM";
		case 67:
			return "REGION_HRT_CUMBERLANDFALLS";
		case 68:
			return "REGION_HRT_DOWNSRANCH";
		case 69:
			return "REGION_HRT_EMERALDRANCH";
		case 70:
			return "REGION_HRT_GRANGERS_HOGGERY";
		case 71:
			return "REGION_HRT_HORSESHOEOVERLOOK";
		case 72:
			return "REGION_HRT_LARNEDSOD";
		case 73:
			return "REGION_HRT_LOONY_CULT";
		case 74:
			return "REGION_HRT_LUCKYSCABIN";
		case 75:
			return "REGION_HRT_SWANSONS_STATION";
		case 76:
			return "REGION_HRT_VALENTINE";
		case 77:
			return "REGION_ROA_ABERDEENPIGFARM";
		case 78:
			return "REGION_ROA_ANNESBURG";
		case 79:
			return "REGION_ROA_BEAVERHOLLOW";
		case 63:
			return "REGION_ROA_BEECHERS_C";
		case 80:
			return "REGION_ROA_BLACK_BALSAM_RISE";
		case 81:
			return "REGION_ROA_BRANDYWINE_DROP";
		case 82:
			return "REGION_ROA_BUTCHERCREEK";
		case 83:
			return "REGION_ROA_DOVERHILL";
		case 84:
			return "REGION_ROA_HAPPY_FAMILY";
		case 85:
			return "REGION_ROA_ISOLATIONIST";
		case 86:
			return "REGION_ROA_MACLEANSHOUSE";
		case 87:
			return "REGION_ROA_MOSSY_FLATS";
		case 88:
			return "REGION_ROA_ROANOKE_VALLEY";
		case 89:
			return "REGION_ROA_ROCKYSEVEN";
		case 90:
			return "REGION_ROA_TRAPPER";
		case 91:
			return "REGION_ROA_VANHORNMANSION";
		case 92:
			return "REGION_ROA_VANHORNPOST";
		case 93:
			return "REGION_SCM_BRAITHWAITEMANOR";
		case 94:
			return "REGION_SCM_BULGERGLADE";
		case 95:
			return "REGION_SCM_CALIGAHALL";
		case 96:
			return "REGION_SCM_CATFISHJACKSONS";
		case 97:
			return "REGION_SCM_CLEMENSCOVE";
		case 98:
			return "REGION_SCM_CLEMENSPOINT";
		case 99:
			return "REGION_SCM_COMPSONS_STEAD";
		case 100:
			return "REGION_SCM_DAIRY_FARM";
		case 101:
			return "REGION_SCM_HORSE_SHOP";
		case 102:
			return "REGION_SCM_LONNIESSHACK";
		case 103:
			return "REGION_SCM_LOVE_TRIANGLE";
		case 104:
			return "REGION_SCM_RADLEYS_PASTURE";
		case 105:
			return "REGION_SCM_RHODES";
		case 106:
			return "REGION_SCM_SLAVE_PEN";
		case 107:
			return "REGION_TAL_AURORA_BASIN";
		case 108:
			return "REGION_TAL_DEAD_SETTLER";
		case 109:
			return "REGION_TAL_COCHINAY";
		case 110:
			return "REGION_TAL_MANZANITAPOST";
		case 111:
			return "REGION_TAL_PACIFICUNIONRR";
		case 112:
			return "REGION_TAL_TANNERSREACH";
		case 113:
			return "REGION_TAL_TRAPPER";
		case 126:
			return "REGION_HEN_MACFARLANES_RANCH";
		case 127:
			return "REGION_HEN_THIEVES_LANDING";
		case 120:
			return "REGION_CHO_ARMADILLO";
		case 121:
			return "REGION_CHO_COOTS_CHAPEL";
		case 122:
			return "REGION_CHO_DON_JULIO_HOUSE";
		case 124:
			return "REGION_CHO_RIDGEWOOD_FARM";
		case 123:
			return "REGION_CHO_RILEYS_CHARGE";
		case 125:
			return "REGION_CHO_TWIN_ROCKS";
		case 114:
			return "REGION_GAP_GAPTOOTH_BREACH";
		case 115:
			return "REGION_GAP_TUMBLEWEED";
		case 116:
			return "REGION_GAP_RATHSKELLER_FORK";
		case 129:
			return "REGION_GAP_SOLOMONS_FOLLY";
		case 117:
			return "REGION_RIO_BENEDICT_POINT";
		case 118:
			return "REGION_RIO_FORT_MERCER";
		case 119:
			return "REGION_RIO_PLAIN_VIEW";
		case 128:
			return "REGION_CENTRALUNIONRR";
		default:
			break;
	}
	return "REGION_INVALID";
	return "REGION_INVALID";
}

struct<4> func_610(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_256(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_534(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_611(struct<4> Param0, int iParam4)
{
	struct<11> Var0;

	if (!func_616(0))
	{
		return func_636(Param0, iParam4, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_618(Param0, &Var0, 0, 0))
	{
		return 0;
	}
	if (Var0.f_10 == iParam4)
	{
		return 1;
	}
	if (!INVENTORY::_0x734311E2852760D0(func_534(0), &Param0, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_612(int iParam0)
{
	int iVar0;
	struct<4> Var1;

	iVar0 = func_563(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_613(0) };
	if (func_637(&Var1, iVar0, 0) > 0)
	{
		return 1;
	}
	return 0;
}

struct<4> func_613(bool bParam0)
{
	return func_610(1328661203, func_638(), -1591664384, bParam0);
}

int func_614(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	int iVar0;

	iVar0 = func_534(bParam7);
	if (INVENTORY::_0x033EE4B89F3AC545(iVar0, &uParam0, iParam4) <= iParam6)
	{
		return 0;
	}
	if (!INVENTORY::_0xBE012571B25F5ACA(iVar0, &uParam0, iParam4, iParam6, uParam5))
	{
		return 0;
	}
	return 1;
}

int func_615(var uParam0, var uParam1)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_534(0), uParam0, uParam1, 29, 1))
	{
		return 0;
	}
	return 1;
}

int func_616(bool bParam0)
{
	if (func_201() == -1)
	{
		return 1;
	}
	return INVENTORY::_0x0FBBFFC891A97C81(func_534(bParam0));
}

int func_617(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, var uParam10, bool bParam11)
{
	struct<12> Var0;
	int iVar14;
	int iVar15;
	struct<16> Var16;
	int iVar32;

	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0) || !INVENTORY::_0xB881CA836CC4B6D4(&Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	if (!func_618(Param0, &Var0, 1, 0))
	{
		return -1;
	}
	if (func_619(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return -1;
	}
	if (!INVENTORY::_0x780C5B9AE2819807(Var0.f_4, iParam8))
	{
		return -1;
	}
	iVar14 = func_639(Var0.f_4, Param4, iParam8, 0);
	iVar15 = INVENTORY::_0xE80E50BEE276A54A(Var0.f_4, iParam8);
	if (iVar15 >= 0)
	{
		if (iVar14 >= iVar15)
		{
			return -1;
		}
		else if ((iVar14 + Var0.f_11) > iVar15)
		{
			if (bParam11)
			{
				return -1;
			}
			Var0.f_11 = (iVar15 - iVar14);
		}
	}
	Var16 = { func_640(&Var0) };
	Var16.f_4 = { Param4 };
	Var16.f_11 = iParam8;
	Var16.f_10 = uParam10;
	iVar32 = func_641(1168099063, &Var16, bParam9);
	if (iVar32 == -1)
	{
		return -1;
	}
	return iVar32;
}

int func_618(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(func_534(bParam5), &uParam0, uParam4, !bParam6))
	{
		return 0;
	}
	return 1;
}

int func_619(var uParam0, var uParam1)
{
	if (((*uParam0 == *uParam1 && uParam0->f_1 == uParam1->f_1) && uParam0->f_2 == uParam1->f_2) && uParam0->f_3 == uParam1->f_3)
	{
		return 1;
	}
	return 0;
}

int func_620(struct<4> Param0, struct<4> Param4, var uParam8, bool bParam9)
{
	struct<11> Var0;
	struct<11> Var14;
	struct<16> Var28;
	struct<16> Var44;
	int iVar60;

	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0) || !INVENTORY::_0xB881CA836CC4B6D4(&Param4))
	{
		return -1;
	}
	if (func_619(&Param0, &Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_618(Param0, &Var0, 1, 0) || !func_618(Param4, &Var14, 1, 0))
	{
		return -1;
	}
	if (func_619(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return -1;
	}
	if (!INVENTORY::_0x780C5B9AE2819807(Var0.f_4, Var14.f_9) || !INVENTORY::_0x780C5B9AE2819807(Var14.f_4, Var0.f_9))
	{
		return -1;
	}
	Var28 = { func_640(&Var0) };
	Var28.f_4 = { Var14.f_5 };
	Var28.f_11 = Var14.f_9;
	Var28.f_10 = (Var14.f_10 || uParam8);
	Var44 = { func_640(&Var14) };
	Var44.f_4 = { Var0.f_5 };
	Var44.f_11 = Var0.f_9;
	Var44.f_10 = (Var0.f_10 || uParam8);
	iVar60 = -1;
	if (bParam9)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar60, 712853601, 1168099063))
		{
			if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar60, &Var28, 16) && NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar60, &Var44, 16))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar60))
				{
					func_642(iVar60, 1);
				}
				else
				{
					NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar60);
					return -1;
				}
			}
			else
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar60);
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	else
	{
		iVar60 = func_641(1168099063, &Var28, 0);
		iVar60 = func_641(1168099063, &Var44, 0);
	}
	return iVar60;
}

int func_621(int iParam0)
{
	switch (iParam0)
	{
		case joaat("a_c_horse_gang_bill"):
		case joaat("a_c_horse_gang_sean"):
		case joaat("a_c_horse_gang_john"):
		case -1486704931:
		case joaat("a_c_horse_gang_dutch"):
		case -1356425746:
		case joaat("a_c_horse_gang_javier"):
		case joaat("a_c_horse_gang_sadie"):
		case joaat("a_c_horse_gang_lenny"):
		case joaat("a_c_horse_gang_micah"):
		case joaat("a_c_horse_gang_hosea"):
		case -575759638:
		case joaat("a_c_horse_gang_charles"):
		case 291878635:
		case joaat("a_c_horse_gang_trelawney"):
		case 1139858530:
		case 1760888205:
		case 1800725969:
			return 1;
	}
	return 0;
}

void func_622(var uParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_0x9CB1A1623062F402(*uParam0, func_644(func_643(255), 109029619));
	}
	else if (func_570())
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_438();
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_623(int iParam0)
{
	iParam0 = func_117(iParam0);
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

void func_624(var uParam0, bool bParam1)
{
	char* sVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_0x9CB1A1623062F402(*uParam0, func_644(func_643(255), 109029619));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_570())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_438())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (MISC::COMPARE_STRINGS(sVar0, "", false, -1) != 0)
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, sVar0);
		}
	}
}

int func_625(int iParam0)
{
	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return ((*Global_1900383)[iParam0 /*45*/])->f_37;
}

float func_626(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

float func_627(int iParam0)
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

	iParam0 = func_117(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_376(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return -1f;
	}
	iVar1 = func_623(iParam0);
	iVar2 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	fVar3 = TASK::_0xEB67D4E056C85A81(iVar1);
	fVar4 = TASK::_0x78D8C1D4EB80C588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_623(iParam0) + 1;
	fVar6 = func_645(iParam0);
	fVar7 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar1));
	fVar8 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	uVar12 = func_646(fVar3, fVar4, fVar11);
	return uVar12;
}

void func_628(int iParam0)
{
	MAP::_0xB059D7BD3D78C16F(iParam0, -401963276);
	MAP::_0xB059D7BD3D78C16F(iParam0, 231194138);
	MAP::_0xB059D7BD3D78C16F(iParam0, -1012863186);
	MAP::_0xB059D7BD3D78C16F(iParam0, -272772079);
	MAP::_0xB059D7BD3D78C16F(iParam0, 1313031610);
	MAP::_0xB059D7BD3D78C16F(iParam0, -1814032670);
	MAP::_0xB059D7BD3D78C16F(iParam0, -1380599892);
	MAP::_0xB059D7BD3D78C16F(iParam0, 430539302);
	MAP::_0xB059D7BD3D78C16F(iParam0, -995247980);
	MAP::_0xB059D7BD3D78C16F(iParam0, -25056193);
	MAP::_0xB059D7BD3D78C16F(iParam0, -264630352);
}

void func_629(int iParam0)
{
	MAP::_0xB059D7BD3D78C16F(iParam0, 673950256);
	MAP::_0xB059D7BD3D78C16F(iParam0, 561559387);
	MAP::_0xB059D7BD3D78C16F(iParam0, -201249929);
}

int func_630(int iParam0)
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

int func_631()
{
	return Global_40.f_1095.f_3135;
}

void func_632(int iParam0)
{
	Global_40.f_1095.f_3135 = iParam0;
}

int func_633(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6)
{
	struct<4> Var0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x22E590F108289A9D(func_534(bParam6), &uParam0, iParam4, &Var0))
	{
		return 0;
	}
	if (!func_618(Var0, uParam5, bParam6, 0))
	{
		return 0;
	}
	return 1;
}

int func_634(int iParam0)
{
	int iVar0;

	if (!func_256(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_243(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_COUNT(iVar0);
}

int func_635(var uParam0)
{
	if (func_647(&(uParam0->f_29), 62))
	{
		switch (func_648())
		{
			case 1:
				if (!func_647(&(uParam0->f_29), 6))
				{
					return 0;
				}
				break;
			case 2:
				if (!func_647(&(uParam0->f_29), 8))
				{
					return 0;
				}
				break;
			case 4:
				if (!func_647(&(uParam0->f_29), 16))
				{
					return 0;
				}
				break;
			case 8:
				if (!func_647(&(uParam0->f_29), 32))
				{
					if (func_647(&(uParam0->f_29), 2))
					{
						if (func_293(func_175()) < 5)
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

int func_636(struct<4> Param0, int iParam4, bool bParam5)
{
	int iVar0;
	struct<11> Var1;
	int iVar15;
	struct<28> Var16;
	struct<17> Var44;
	struct<16> Var61;

	iVar0 = -1;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_618(Param0, &Var1, 1, 0))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam4)
	{
		return iVar0;
	}
	iVar15 = func_185(Var1.f_4);
	if (iVar15 == -1784221369)
	{
		Var16 = { func_649(Param0, 1) };
		Var16.f_10 = iParam4;
		iVar0 = func_650(-1230526146, &Var16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -1037537535)
	{
		Var44 = { func_651(Param0, 1) };
		Var44.f_10 = iParam4;
		iVar0 = func_652(-1230526146, &Var44, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var61 = { func_640(&Var1) };
		Var61.f_10 = iParam4;
		iVar0 = func_641(-1230526146, &Var61, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

int func_637(var uParam0, int iParam1, bool bParam2)
{
	return INVENTORY::_0x033EE4B89F3AC545(func_534(bParam2), uParam0, iParam1);
}

struct<4> func_638()
{
	struct<4> Var0;

	return Var0;
}

int func_639(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;

	if (!func_256(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_610(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_534(bParam6), &Var0, 0);
	return uVar4;
}

struct<16> func_640(var uParam0)
{
	struct<16> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { *uParam0 };
	Var0.f_4 = { uParam0->f_5 };
	Var0.f_8 = uParam0->f_4;
	Var0.f_9 = uParam0->f_11;
	Var0.f_11 = uParam0->f_9;
	Var0.f_10 = uParam0->f_10;
	return Var0;
}

int func_641(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 712853601, iParam0))
		{
			if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 16))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_642(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_642(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 16))
	{
		func_642(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_642(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1224226)
	{
		if (&Global_1224226->f_1[iVar0 /*9*/] == iParam0)
		{
			if ((Global_1224226->f_1[iVar0 /*9*/])->f_1 == iParam1)
			{
			}
			else
			{
				(Global_1224226->f_1[iVar0 /*9*/])->f_1 = iParam1;
			}
			return;
		}
		iVar0++;
	}
	func_653(iParam0, iParam1);
}

char* func_643(int iParam0)
{
	char* sVar0;

	if (iParam0 == 255)
	{
		if (func_654(37, iParam0))
		{
			return HUD::_0xD8402B858F4DDD88(&(Global_1109400->f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1109400->f_12)));
		}
		else
		{
			return PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID());
		}
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return "";
	}
	sVar0 = "";
	if (!&Global_1225638->f_21[iParam0])
	{
		return sVar0;
	}
	if (func_654(37, iParam0))
	{
		return HUD::_0xD8402B858F4DDD88(&(((*Global_1108178)[iParam0 /*37*/])->f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(((*Global_1108178)[iParam0 /*37*/])->f_12)));
	}
	return PLAYER::GET_PLAYER_NAME(&(Global_1225638->f_120[iParam0]));
}

char* func_644(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return MISC::_CREATE_VAR_STRING(10, "PLAYER_STRING", sParam0);
	}
	return func_444(MISC::_CREATE_VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

float func_645(int iParam0)
{
	iParam0 = func_117(iParam0);
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

float func_646(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

int func_647(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 == 0)
	{
		return 1;
	}
	return 0;
}

int func_648()
{
	return &Global_1899516;
}

struct<28> func_649(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	struct<28> Var0;
	struct<29> Var28;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return Var0;
	}
	Var28.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_534(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_640(&Var28) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_650(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 712853601, iParam0))
		{
			if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 28))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_642(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_642(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 28))
	{
		func_642(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<17> func_651(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	struct<17> Var0;
	struct<15> Var17;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return Var0;
	}
	Var17.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_534(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_640(&Var17) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_652(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 712853601, iParam0))
		{
			if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 17))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_642(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_642(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 17))
	{
		func_642(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_653(int iParam0, int iParam1)
{
	int iVar0;
	struct<9> Var1;

	if (iParam0 == -1)
	{
		return;
	}
	if (&Global_1224226 < 20)
	{
		Global_1224226 = &Global_1224226 + 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*(Global_1224226->f_1[iVar0 /*9*/]) = { *(Global_1224226->f_1[iVar0 + 1 /*9*/]) };
			iVar0++;
		}
	}
	Var1 = -1;
	Var1 = iParam0;
	Var1.f_1 = iParam1;
	*(Global_1224226->f_1[(&Global_1224226 - 1) /*9*/]) = { Var1 };
}

int func_654(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_655(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_656())
	{
		return func_655(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1225638->f_21[iParam1])
	{
		return func_655(&(((*Global_1108178)[iParam1 /*37*/])->f_4), iVar0, 5);
	}
	return 0;
}

bool func_655(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_656()
{
	return Global_1109400->f_244;
}

