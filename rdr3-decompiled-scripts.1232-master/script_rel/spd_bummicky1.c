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
	struct<374> Local_14 = { 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1579174863, 0, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 1040187392, 1040187392, -1, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1119092736, 1092616192, 1085276160, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	int iVar6;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		func_1(&Local_14);
	}
	while (true)
	{
		BUILTIN::WAIT(0);
		func_2(&Local_14);
		func_3(19, 0, Local_14.f_218[0], &(Local_14.f_142), &(Local_14.f_240), Local_14.f_239, 1097859072, 0);
		func_4(&Local_14, 0);
		func_5(&Local_14);
		func_6(&(Local_14.f_218[0]), Local_14.f_230);
		if (Local_14 >= 6 && Local_14 < 67)
		{
			func_7(&Local_14);
			func_8(&Local_14);
		}
		if (ENTITY::DOES_ENTITY_EXIST(&(Local_14.f_218[0])))
		{
			if (!func_9(&(Local_14.f_218[0]), 0))
			{
				func_1(&Local_14);
			}
			else if (Local_14 > 2 && Local_14 < 67)
			{
				if (Local_14.f_239 > 50f)
				{
					Local_14.f_242 = func_10(&(Local_14.f_101), &(Local_14.f_129), Local_14.f_218[0], &(Local_14.f_243), 1101004800);
				}
				else
				{
					Local_14.f_242 = func_11(&(Local_14.f_218[0]), 0, &(Local_14.f_101), &(Local_14.f_129), 0, Local_14.f_239);
				}
				if (Local_14.f_242)
				{
					if (Local_14 <= 24)
					{
						func_12(&(Local_14.f_253), 4096);
					}
					if (VOLUME::_0x92A78D0BEDB332A3(Local_14.f_224))
					{
						func_13(Local_14.f_224);
						VOLUME::_0x43F867EF5C463A53(Local_14.f_224);
					}
					if (VOLUME::_0x92A78D0BEDB332A3(Local_14.f_231))
					{
						VOLUME::_0x43F867EF5C463A53(Local_14.f_231);
					}
					if (!func_14(Local_14.f_253, 131072))
					{
						func_12(&(Local_14.f_253), 131072);
					}
					func_15(&(Local_14.f_296), &(Local_14.f_317));
					func_16(&(Local_14.f_218[0]), 1, 1);
					PED::SET_PED_CONFIG_FLAG(&(Local_14.f_218[0]), 130, false);
					func_17(&(Local_14.f_218[0]));
					func_18(&(Local_14.f_136));
					func_19(&Local_14, 0, 0, 0, 0, 0, 0);
					func_19(&Local_14, 1, 1, 0, 0, 0, 0);
					func_20(&Local_14, 67);
				}
			}
		}
		if ((Local_14 >= 2 && Local_14 <= 36) || Local_14 >= 56)
		{
			func_21(&Local_14);
		}
		else if (Local_14 >= 37 && Local_14 <= 44)
		{
			func_22(&Local_14);
		}
		else if (Local_14 == 58 || Local_14 == 51)
		{
			func_23(&Local_14);
		}
		if (Local_14 >= 28 && Local_14 < 56)
		{
			func_24();
		}
		func_25(&Local_14);
		func_26(&Local_14);
		func_27(&Local_14);
		func_28(&(Local_14.f_218[0]), &(Local_14.f_253), 262144, 19, Local_14.f_239);
		func_29(&Local_14, Local_14.f_246, "b_AnimatePlayer", 0);
		func_30(&Local_14, &(Local_14.f_247));
		iVar6 = func_30(&Local_14, &(Local_14.f_247));
		func_29(&Local_14, Local_14.f_247, "b_AnimatePlayer", iVar6);
		if (Local_14 > 2 && func_9(&(Local_14.f_218[0]), 0))
		{
			if ((PED::IS_PED_ON_MOUNT(Global_35) && Local_14.f_239 <= 4f) || Local_14 >= 57)
			{
				PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(&(Local_14.f_218[0]), 262144);
			}
			else if (Local_14 < 57)
			{
				PED::SET_RAGDOLL_BLOCKING_FLAGS(&(Local_14.f_218[0]), 262144);
			}
		}
		switch (Local_14)
		{
			case 0:
				if (!ANIMSCENE::_0x25557E324489393C(Local_14.f_245))
				{
					Local_14.f_245 = ANIMSCENE::_CREATE_ANIM_SCENE(func_31(), 0, func_32(), false, true);
				}
				if (!ANIMSCENE::_0x25557E324489393C(Local_14.f_246))
				{
					Local_14.f_246 = ANIMSCENE::_CREATE_ANIM_SCENE(func_33(), 8224, func_34(), false, true);
				}
				if (!ANIMSCENE::_0x25557E324489393C(Local_14.f_247))
				{
					Local_14.f_247 = ANIMSCENE::_CREATE_ANIM_SCENE(func_33(), 0, func_35(), false, true);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_14.f_247, "b_AnimatePlayer", true, false);
				}
				Local_14.f_237 = "MICKEY";
				if (!func_14(Local_14.f_253, 32768))
				{
					if (((*Global_1396257)[19 /*638*/])->f_633 == 0)
					{
						func_12(&(Local_14.f_253), 32768);
					}
					else
					{
						func_12(&(Local_14.f_253), 1);
						func_12(&(Local_14.f_253), 32768);
					}
				}
				if ((ANIMSCENE::_0x25557E324489393C(Local_14.f_245) && ANIMSCENE::_0x25557E324489393C(Local_14.f_246)) && func_14(Local_14.f_253, 32768))
				{
					ANIMSCENE::LOAD_ANIM_SCENE(Local_14.f_245);
					ANIMSCENE::LOAD_ANIM_SCENE(Local_14.f_246);
					ANIMSCENE::LOAD_ANIM_SCENE(Local_14.f_247);
					HUD::_0xF66090013DE648D5("SPBM");
					HUD::_0xF66090013DE648D5("SPCWVAU");
					STREAMING::REQUEST_MODEL(Local_14.f_155, false);
					func_36(&Local_14);
					func_37(Local_14.f_224, "SP_BumMickey1_Block", 1, 0, 0, 0, -1082130432);
					POPULATION::_0xB56D41A694E42E86(Local_14.f_227, 2500607, 0, 0, -1, -1, 10);
					POPULATION::_0x18262CAFEBB5FBE1(Local_14.f_227, 0, 0, 0, -1, -1, 0);
					Local_14.f_154 = func_39(19, 0, 9, func_38(19));
					if (!func_40(Local_14.f_154))
					{
					}
					Local_14.f_244 = func_41(Local_14.f_154);
					Local_14.f_255 = func_42(Local_14.f_154);
					func_43(&(Local_14.f_195));
					func_44(&(Local_14.f_101));
					func_45(&(Local_14.f_101), 1);
					func_46(&(Local_14.f_101), 1);
					func_47(&(Local_14.f_101), 1);
					func_48(&(Local_14.f_101), 1);
					func_49(&(Local_14.f_101), 1);
					func_50(&(Local_14.f_101), 1);
					func_51(&(Local_14.f_101), 0);
					func_52(&(Local_14.f_101), 1);
					func_53(&(Local_14.f_101), 0);
					func_54(&(Local_14.f_101), 1);
					func_55(&(Local_14.f_101), 1);
					func_56(&(Local_14.f_101), 1);
					func_57(&(Local_14.f_101), 0);
					func_58(&(Local_14.f_101), 0);
					func_59(&(Local_14.f_101), 0);
					func_60(&(Local_14.f_101), 0);
					func_61(&(Local_14.f_101), 1);
					if (func_40(Local_14.f_154))
					{
						func_20(&Local_14, 1);
					}
				}
				break;
			case 1:
				PED::_0xED9582B3DA8F02B4(1);
				if ((((((ANIMSCENE::_0x477122B8D05E7968(Local_14.f_245, 1, 0) && ANIMSCENE::_0x477122B8D05E7968(Local_14.f_246, 1, 0)) && ANIMSCENE::_0x477122B8D05E7968(Local_14.f_247, 1, 0)) && HUD::_0xD0976CC34002DB57("SPBM")) && HUD::_0xD0976CC34002DB57("SPCWVAU")) && STREAMING::HAS_MODEL_LOADED(Local_14.f_155)) && PED::_0x5C16855277819BBF() == 1)
				{
					func_20(&Local_14, 2);
				}
				break;
			case 2:
				if (func_14(Local_14.f_253, 1))
				{
					vVar2 = { func_62(1) };
				}
				else
				{
					vVar2 = { func_62(0) };
				}
				if (func_63(Local_14.f_218[0], Local_14.f_155, vVar2, vVar2.f_3, 1, 0, 0))
				{
					if (func_9(&(Local_14.f_218[0]), 0))
					{
						func_64(&(Local_14.f_218[0]), 19);
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(&(Local_14.f_218[0]), "special_ped_group", 0f);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(Local_14.f_218[0]), true);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(&(Local_14.f_218[0]), -1976316465);
						TASK::_0x7C015D8BCEC72CF4(&(Local_14.f_218[0]), 1);
						TASK::_0x8BB283A7888AD1AD(&(Local_14.f_218[0]), 1, 1f);
						TASK::_0x42CFD8FD8CC8DC69(&(Local_14.f_218[0]), 1);
						TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(&(Local_14.f_218[0]), false);
						TASK::_0x88E32DB8C1A4AA4B(&(Local_14.f_218[0]), 20f);
						PED::SET_PED_COMBAT_ABILITY(&(Local_14.f_218[0]), 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(&(Local_14.f_218[0]), 17, true);
						PED::SET_PED_CONFIG_FLAG(&(Local_14.f_218[0]), 130, true);
						PED::SET_PED_CONFIG_FLAG(&(Local_14.f_218[0]), 448, true);
						PED::SET_PED_CONFIG_FLAG(&(Local_14.f_218[0]), 344, true);
						PED::SET_PED_CONFIG_FLAG(&(Local_14.f_218[0]), 174, false);
						PED::SET_PED_CONFIG_FLAG(&(Local_14.f_218[0]), 153, true);
						PED::_0xAE6004120C18DF97(&(Local_14.f_218[0]), 0, 0);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(&(Local_14.f_218[0]), 262144);
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(&(Local_14.f_218[0]), 1.5f);
						func_65(&(Local_14.f_3), &(Local_14.f_218[0]), Local_14.f_237, 0);
						ENTITY::_0x9587913B9E772D29(&(Local_14.f_218[0]), 0);
						if (VOLUME::_0x92A78D0BEDB332A3(Local_14.f_226))
						{
							PED::_0x7C00CFC48A782DC0(Local_14.f_226, &(Local_14.f_218[0]), 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
						}
						if (VOLUME::_0x92A78D0BEDB332A3(Local_14.f_227))
						{
							PED::_0x7C00CFC48A782DC0(Local_14.f_227, &(Local_14.f_218[0]), 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
						}
						if (VOLUME::_0x92A78D0BEDB332A3(Local_14.f_228))
						{
							PED::_0x7C00CFC48A782DC0(Local_14.f_228, &(Local_14.f_218[0]), 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
						}
						if (VOLUME::_0x92A78D0BEDB332A3(Local_14.f_229))
						{
							PED::_0x7C00CFC48A782DC0(Local_14.f_229, &(Local_14.f_218[0]), 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
						}
						if (VOLUME::_0x92A78D0BEDB332A3(Local_14.f_230))
						{
							PED::_0x7C00CFC48A782DC0(Local_14.f_230, &(Local_14.f_218[0]), 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
						}
						if (VOLUME::_0x92A78D0BEDB332A3(Local_14.f_231))
						{
							PED::_0x7C00CFC48A782DC0(Local_14.f_231, &(Local_14.f_218[0]), 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
						}
						func_66(Local_14.f_227, 0, 0, 0);
						func_67(&(Local_14.f_232), vVar2, 5f, 5f, 5f);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_245, "cs_mickey", &(Local_14.f_218[0]), 0);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_246, "MICKEY", &(Local_14.f_218[0]), 0);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_246, "ARTHUR", Global_35, 0);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_247, "MICKEY", &(Local_14.f_218[0]), 0);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_247, "ARTHUR", Global_35, 0);
						if (func_14(Local_14.f_253, 1))
						{
							ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_14.f_245, func_68(), func_69(), 2);
						}
						else
						{
							ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_14.f_245, func_70(), func_71(), 2);
						}
						ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_14.f_246, func_72(), func_73(), 2);
						if (!func_74(&(Local_14.f_235)))
						{
							Local_14.f_235 = GRAPHICS::_0xFA50F79257745E74(vVar2, 1.5f, 4, -1, 0);
						}
						if (Local_14.f_244 < 0)
						{
							Local_14.f_244 = 0;
						}
						if (func_75())
						{
							func_65(&(Local_14.f_3), Global_35, "JOHN", 0);
						}
						else
						{
							func_65(&(Local_14.f_3), Global_35, "ARTHUR", 0);
						}
						func_20(&Local_14, 21);
					}
				}
				break;
			case 6:
				if (VOLUME::_0x92A78D0BEDB332A3(Local_14.f_228) && !ENTITY::IS_ENTITY_DEAD(Global_35))
				{
					if ((((ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_228, true, 0) && !func_14(Local_14.f_253, 16384)) && ENTITY::GET_ENTITY_SPEED(Global_35) <= 5.5f) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(&(Local_14.f_218[0]))) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(&(Local_14.f_218[0]), Global_35, 17))
					{
						func_20(&Local_14, func_76());
					}
					else if (ANIMSCENE::_0x25557E324489393C(Local_14.f_245))
					{
						if (ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_14.f_245, 0) && ENTITY::HAS_ANIM_EVENT_FIRED(&(Local_14.f_218[0]), -1527527524))
						{
							func_77(&Local_14, &(Local_14.f_244), 0);
							func_78(&(Local_14.f_133));
						}
					}
				}
				break;
			case 21:
				if (!func_79(&(Local_14.f_195)))
				{
					if (func_14(Local_14.f_253, 16777216))
					{
						func_80(&Local_14, &(Local_14.f_245), func_32(), 1, 0, 1, 1, 1);
					}
					else if ((VOLUME::_0x92A78D0BEDB332A3(Local_14.f_228) && !ENTITY::IS_ENTITY_DEAD(Global_35)) && !ENTITY::IS_ENTITY_DEAD(&(Local_14.f_218[0])))
					{
						if ((((ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_228, true, 0) && !func_14(Local_14.f_253, 16384)) && ENTITY::GET_ENTITY_SPEED(Global_35) <= 5.5f) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(&(Local_14.f_218[0]))) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(&(Local_14.f_218[0]), Global_35, 17))
						{
							func_20(&Local_14, func_76());
						}
						else if (func_80(&Local_14, &(Local_14.f_245), func_32(), 1, 0, 1, 1, 1))
						{
							func_20(&Local_14, 6);
						}
					}
				}
				break;
			case 28:
				func_81(Local_14.f_317[0 /*17*/], 0, 0);
				func_81(Local_14.f_317[1 /*17*/], 0, 0);
				if (!func_14(Local_14.f_253, 32))
				{
					func_12(&(Local_14.f_253), 32);
				}
				if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
				{
					TASK::TASK_LOOK_AT_ENTITY(&(Local_14.f_218[0]), Global_35, -1, 0, 51, 0);
					if (func_80(&Local_14, &(Local_14.f_245), func_82(), 1, 0, 0, 1, 1))
					{
						if (!func_83(&(Local_14.f_218[0]), 1682639051))
						{
							func_84(&(Local_14.f_218[0]), Global_35, &(Local_14.f_156), 10f, 0, 0, 2f, -1f, 1, 8, 0f, 0f, 2f, 2f, 0.3f, 1.5f, 0, 0.5f, -1, 1, -1082130432, -1082130432, 1);
							func_85(&(Local_14.f_353));
							func_12(&(Local_14.f_253), 536870912);
						}
						else
						{
							func_20(&Local_14, 35);
						}
					}
				}
				break;
			case 29:
				func_81(Local_14.f_317[0 /*17*/], 0, 0);
				func_81(Local_14.f_317[1 /*17*/], 0, 0);
				if (!func_14(Local_14.f_253, 32))
				{
					func_12(&(Local_14.f_253), 32);
				}
				if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
				{
					TASK::TASK_LOOK_AT_ENTITY(&(Local_14.f_218[0]), Global_35, -1, 0, 51, 0);
					if (func_80(&Local_14, &(Local_14.f_245), func_86(), 1, 0, 0, 1, 1))
					{
						if (!func_83(&(Local_14.f_218[0]), 1682639051))
						{
							func_84(&(Local_14.f_218[0]), Global_35, &(Local_14.f_156), 10f, 0, 0, 2f, -1f, 1, 8, 0f, 0f, 2f, 2f, 0.3f, 1.5f, 0, 0.5f, -1, 1, -1082130432, -1082130432, 1);
							func_85(&(Local_14.f_353));
							func_12(&(Local_14.f_253), 536870912);
						}
						else
						{
							func_20(&Local_14, 35);
						}
					}
				}
				break;
			case 30:
				func_81(Local_14.f_317[0 /*17*/], 0, 0);
				func_81(Local_14.f_317[1 /*17*/], 0, 0);
				if (!func_14(Local_14.f_253, 32))
				{
					func_12(&(Local_14.f_253), 32);
				}
				if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
				{
					TASK::TASK_LOOK_AT_ENTITY(&(Local_14.f_218[0]), Global_35, -1, 0, 51, 0);
					if (func_80(&Local_14, &(Local_14.f_245), func_87(), 1, 0, 0, 1, 1))
					{
						if (!func_83(&(Local_14.f_218[0]), 1682639051))
						{
							func_84(&(Local_14.f_218[0]), Global_35, &(Local_14.f_156), 10f, 0, 0, 2f, -1f, 1, 8, 0f, 0f, 2f, 2f, 0.3f, 1.5f, 0, 0.5f, -1, 1, -1082130432, -1082130432, 1);
							func_85(&(Local_14.f_353));
							func_12(&(Local_14.f_253), 536870912);
						}
						else
						{
							func_20(&Local_14, 35);
						}
					}
				}
				break;
			case 22:
				if (func_80(&Local_14, &(Local_14.f_245), func_88(), 1, 0, 1, 1, 1))
				{
					func_20(&Local_14, 21);
				}
				break;
			case 23:
				if (func_80(&Local_14, &(Local_14.f_245), func_89(), 1, 0, 1, 1, 1))
				{
					func_20(&Local_14, 21);
				}
				break;
			case 24:
				if (func_80(&Local_14, &(Local_14.f_245), func_90(), 1, 0, 1, 1, 1))
				{
					func_20(&Local_14, 21);
				}
				break;
			case 20:
				if (func_80(&Local_14, &(Local_14.f_245), func_91(), 1, 0, 1, 1, 1))
				{
					func_20(&Local_14, 21);
				}
				break;
			case 7:
				if (func_80(&Local_14, &(Local_14.f_245), func_92(), 1, 0, 1, 1, 1))
				{
					func_20(&Local_14, 21);
				}
				break;
			case 8:
				if (func_80(&Local_14, &(Local_14.f_245), func_93(), 1, 0, 1, 1, 1))
				{
					func_20(&Local_14, 21);
				}
				break;
			case 9:
				if (func_80(&Local_14, &(Local_14.f_245), func_94(), 1, 0, 1, 1, 1))
				{
					func_20(&Local_14, 21);
				}
				break;
			case 10:
				if (func_80(&Local_14, &(Local_14.f_245), func_95(), 1, 0, 1, 1, 1))
				{
					func_20(&Local_14, 21);
				}
				break;
			case 11:
				if (func_80(&Local_14, &(Local_14.f_245), func_96(), 1, 0, 1, 1, 1))
				{
					func_20(&Local_14, 21);
				}
				break;
			case 12:
				if (func_80(&Local_14, &(Local_14.f_245), func_97(), 1, 0, 1, 1, 1))
				{
					func_20(&Local_14, 21);
				}
				break;
			case 13:
				if (func_80(&Local_14, &(Local_14.f_245), func_98(), 1, 0, 1, 1, 1))
				{
					func_20(&Local_14, 21);
				}
				break;
			case 14:
				if (func_80(&Local_14, &(Local_14.f_245), func_99(), 1, 0, 1, 1, 1))
				{
					func_20(&Local_14, 21);
				}
				break;
			case 15:
				if (func_80(&Local_14, &(Local_14.f_245), func_100(), 1, 0, 1, 1, 1))
				{
					func_20(&Local_14, 21);
				}
				break;
			case 16:
				if (func_80(&Local_14, &(Local_14.f_245), func_101(), 1, 0, 1, 1, 1))
				{
					func_20(&Local_14, 21);
				}
				break;
			case 17:
				if (func_80(&Local_14, &(Local_14.f_245), func_102(), 1, 0, 1, 1, 1))
				{
					func_20(&Local_14, 21);
				}
				break;
			case 18:
				if (func_80(&Local_14, &(Local_14.f_245), func_103(), 1, 0, 1, 1, 1))
				{
					func_20(&Local_14, 21);
				}
				break;
			case 19:
				if (func_80(&Local_14, &(Local_14.f_245), func_104(), 1, 0, 1, 1, 1))
				{
					func_20(&Local_14, 21);
				}
				break;
			case 5:
				break;
			case 36:
				if (func_105(&Local_14))
				{
					func_20(&Local_14, 57);
				}
				if (((VOLUME::_0x92A78D0BEDB332A3(Local_14.f_229) && VOLUME::_0x92A78D0BEDB332A3(Local_14.f_226)) && !ENTITY::IS_ENTITY_DEAD(Global_35)) && !ENTITY::IS_ENTITY_DEAD(&(Local_14.f_218[0])))
				{
					if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_229, true, 0))
					{
						if (!func_83(&(Local_14.f_218[0]), 1682639051))
						{
							func_84(&(Local_14.f_218[0]), Global_35, &(Local_14.f_156), 10f, 0, 0, 2f, -1f, 1, 8, 0f, 0f, 2f, 2f, 0.3f, 1.5f, 0, 0.5f, -1, 1, -1082130432, -1082130432, 1);
							func_12(&(Local_14.f_253), 536870912);
						}
						func_106(&(Local_14.f_218[0]), Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(&(Local_14.f_218[0]), 1.5f);
						if (func_80(&Local_14, &(Local_14.f_246), func_34(), 1, 0, 0, 1, 1))
						{
							func_19(&Local_14, 0, 2, 1, 1, 0, 0);
							func_19(&Local_14, 1, 3, 1, 1, 0, 0);
							func_108(&Local_14, func_107(2, 0, 0), 1);
							func_20(&Local_14, 37);
						}
					}
				}
				break;
			case 35:
				if (func_105(&Local_14))
				{
					func_20(&Local_14, 57);
				}
				if ((VOLUME::_0x92A78D0BEDB332A3(Local_14.f_229) && !ENTITY::IS_ENTITY_DEAD(Global_35)) && !ENTITY::IS_ENTITY_DEAD(&(Local_14.f_218[0])))
				{
					if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_229, true, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(&(Local_14.f_218[0])))
					{
						func_20(&Local_14, 36);
					}
					else if (func_80(&Local_14, &(Local_14.f_245), func_109(), 0, 1, 1, 1, 1))
					{
						func_20(&Local_14, 36);
					}
				}
				break;
			case 37:
				if (func_105(&Local_14))
				{
					ANIMSCENE::RESET_ANIM_SCENE(Local_14.f_245, 0);
					if (!func_14(Local_14.f_253, 134217728))
					{
						if (func_14(Local_14.f_253, 536870912) && !func_14(Local_14.f_253, 1073741824))
						{
							func_110(&(Local_14.f_218[0]), 1);
							func_111(Global_35, 1);
							func_112(&(Local_14.f_353));
							func_12(&(Local_14.f_253), 1073741824);
						}
						func_20(&Local_14, 57);
					}
				}
				func_106(&(Local_14.f_218[0]), Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(&(Local_14.f_218[0]), 1.5f);
				if (func_80(&Local_14, &(Local_14.f_246), func_34(), 1, 0, 0, 0, 0))
				{
					if (VOLUME::_0x92A78D0BEDB332A3(Local_14.f_229))
					{
						if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_229, true, 0) && func_14(Local_14.f_254, 4))
						{
							func_20(&Local_14, 41);
						}
					}
				}
				break;
			case 31:
				if (func_80(&Local_14, &(Local_14.f_245), func_113(), 1, 0, 0, 1, 1))
				{
					func_20(&Local_14, 35);
				}
				break;
			case 32:
				if (func_80(&Local_14, &(Local_14.f_245), func_114(), 1, 0, 0, 1, 1))
				{
					func_20(&Local_14, 35);
				}
				break;
			case 33:
				if (func_80(&Local_14, &(Local_14.f_245), func_115(), 0, 1, 0, 1, 1))
				{
					func_20(&Local_14, 35);
				}
				break;
			case 34:
				if (func_80(&Local_14, &(Local_14.f_245), func_116(), 1, 0, 0, 1, 1))
				{
					func_20(&Local_14, 35);
				}
				break;
			case 41:
				if (func_105(&Local_14))
				{
					ANIMSCENE::RESET_ANIM_SCENE(Local_14.f_245, 0);
					if (!func_14(Local_14.f_253, 134217728))
					{
						if (func_14(Local_14.f_253, 536870912) && !func_14(Local_14.f_253, 1073741824))
						{
							func_110(&(Local_14.f_218[0]), 1);
							func_111(Global_35, 1);
							func_112(&(Local_14.f_353));
							func_12(&(Local_14.f_253), 1073741824);
						}
						func_20(&Local_14, 57);
					}
				}
				iVar1 = func_117(&Local_14);
				func_106(&(Local_14.f_218[0]), Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(&(Local_14.f_218[0]), 1.5f);
				func_118(&(Local_14.f_233), 1);
				switch (iVar1)
				{
					case 1:
						func_80(&Local_14, &(Local_14.f_246), func_119(), 1, 0, 0, 1, 1);
						func_20(&Local_14, 42);
						break;
					case 2:
						func_80(&Local_14, &(Local_14.f_246), func_120(), 0, 0, 0, 1, 1);
						Global_40.f_11954 = 2;
						func_20(&Local_14, 40);
						break;
					case 8:
						func_80(&Local_14, &(Local_14.f_246), func_120(), 0, 0, 0, 1, 1);
						Global_40.f_11954 = 2;
						if (func_14(Local_14.f_253, 536870912) && !func_14(Local_14.f_253, 1073741824))
						{
							func_110(&(Local_14.f_218[0]), 1);
							func_111(Global_35, 1);
							func_112(&(Local_14.f_353));
							func_12(&(Local_14.f_253), 1073741824);
						}
						func_20(&Local_14, 57);
						break;
				}
				break;
			case 42:
				if (func_105(&Local_14))
				{
					if (func_14(Local_14.f_253, 536870912) && !func_14(Local_14.f_253, 1073741824))
					{
						func_110(&(Local_14.f_218[0]), 1);
						func_111(Global_35, 1);
						func_112(&(Local_14.f_353));
						func_12(&(Local_14.f_253), 1073741824);
					}
					func_20(&Local_14, 57);
				}
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(&(Local_14.f_218[0]), 1.5f);
				func_121(&Local_14, Local_14.f_246, func_119(), 0.101f);
				if (func_80(&Local_14, &(Local_14.f_246), func_119(), 1, 0, 0, 1, 1))
				{
					func_19(&Local_14, 0, 4, 1, 1, 0, 0);
					func_19(&Local_14, 1, 5, 1, 1, 0, 0);
					func_12(&(Local_14.f_253), 268435456);
					func_108(&Local_14, func_107(2, 0, 0), 1);
					func_20(&Local_14, 51);
				}
				break;
			case 38:
				iVar1 = func_117(&Local_14);
				switch (iVar1)
				{
					case 1:
						ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_14.f_246, func_72(), func_73(), 2);
						func_20(&Local_14, 39);
						break;
					case 2:
						func_20(&Local_14, 40);
						break;
					case 8:
						if (func_14(Local_14.f_253, 536870912) && !func_14(Local_14.f_253, 1073741824))
						{
							func_110(&(Local_14.f_218[0]), 1);
							func_111(Global_35, 1);
							func_112(&(Local_14.f_353));
							func_12(&(Local_14.f_253), 1073741824);
						}
						func_20(&Local_14, 57);
						break;
				}
				break;
			case 39:
				func_80(&Local_14, &(Local_14.f_246), func_122(), 1, 0, 1, 1, 1);
				if (ANIMSCENE::_0xD8254CB2C586412B(Local_14.f_246, 0))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
					ANIMSCENE::RESET_ANIM_SCENE(Local_14.f_246, func_123());
					func_20(&Local_14, 51);
				}
				break;
			case 40:
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(&(Local_14.f_218[0]), 1.5f);
				if (func_80(&Local_14, &(Local_14.f_246), func_120(), 1, 0, 0, 1, 1) || ANIMSCENE::_0xD8254CB2C586412B(Local_14.f_246, 0))
				{
					func_20(&Local_14, 57);
				}
				break;
			case 51:
				if (func_14(Local_14.f_254, 4))
				{
					if (func_105(&Local_14))
					{
						if (!func_14(Local_14.f_253, 134217728))
						{
							if (func_14(Local_14.f_253, 536870912) && !func_14(Local_14.f_253, 1073741824))
							{
								func_110(&(Local_14.f_218[0]), 1);
								func_111(Global_35, 1);
								func_112(&(Local_14.f_353));
								func_12(&(Local_14.f_253), 1073741824);
							}
							func_20(&Local_14, 57);
						}
					}
				}
				if (!func_83(&(Local_14.f_218[0]), 1682639051))
				{
					func_84(&(Local_14.f_218[0]), Global_35, &(Local_14.f_156), 10f, 0, 0, 2f, -1f, 1, 8, 0f, 0f, 2f, 2f, 0.3f, 1.5f, 0, 0.5f, -1, 1, -1082130432, -1082130432, 1);
					func_12(&(Local_14.f_253), 536870912);
				}
				if (func_14(Local_14.f_254, 32))
				{
					PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(&(Local_14.f_218[0]), 1, 1);
					func_106(&(Local_14.f_218[0]), Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(&(Local_14.f_218[0]), 1.5f);
					func_124(Global_35, &(Local_14.f_218[0]), 0, 1, 1, 0, 1, 1, 0, 1, 1);
					Global_40.f_11954 = 0;
					func_20(&Local_14, 60);
				}
				else if (func_14(Local_14.f_254, 16))
				{
					if (!func_14(Local_14.f_253, 2048))
					{
						PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
						PAD::ENABLE_CONTROL_ACTION(0, -668070958, true);
						PAD::ENABLE_CONTROL_ACTION(0, 1250966545, true);
						if (VOLUME::_0x92A78D0BEDB332A3(Local_14.f_230))
						{
							func_125(&(Local_14.f_230), &(Local_14.f_217), &(Local_14.f_241));
						}
						func_126(1);
						if (func_127(&Global_35, Local_14.f_218[0], &iVar0, Local_14.f_239))
						{
							Global_40.f_11954 = 1;
							func_12(&(Local_14.f_253), 2048);
							TASK::CLEAR_PED_TASKS(&(Local_14.f_218[0]), 1, 0);
							ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_14.f_247, func_72(), func_73(), 2);
							func_126(0);
						}
					}
					if (func_14(Local_14.f_253, 2048))
					{
						PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
						PAD::ENABLE_CONTROL_ACTION(0, -668070958, true);
						PAD::ENABLE_CONTROL_ACTION(0, 1250966545, true);
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(&(Local_14.f_218[0]), 1.5f);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_247, "MICKEY", &(Local_14.f_218[0]), 0);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_247, "ARTHUR", Global_35, 0);
						ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_14.f_247, func_72(), func_73(), 2);
						func_20(&Local_14, 56);
					}
				}
				break;
			case 56:
				if (func_105(&Local_14))
				{
					func_20(&Local_14, 57);
				}
				func_106(&(Local_14.f_218[0]), Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
				if (func_14(Local_14.f_254, 32))
				{
					if (func_80(&Local_14, &(Local_14.f_247), func_123(), 1, 0, 0, 1, 1) || ANIMSCENE::_0xD8254CB2C586412B(Local_14.f_247, 0))
					{
						if (func_14(Local_14.f_253, 536870912) && !func_14(Local_14.f_253, 1073741824))
						{
							func_110(&(Local_14.f_218[0]), 1);
							func_111(Global_35, 1);
							func_112(&(Local_14.f_353));
							func_12(&(Local_14.f_253), 1073741824);
						}
						func_20(&Local_14, 57);
					}
				}
				else if (func_14(Local_14.f_254, 16))
				{
					func_121(&Local_14, Local_14.f_247, func_35(), 0.315f);
					if (ANIMSCENE::_0x3FBC3F51BF12DFBF(Local_14.f_247) >= 0.315f)
					{
						if (HUD::_0x66F35DD9D2B58579())
						{
							MAP::DISPLAY_RADAR(true);
						}
						PED::SET_PED_CONFIG_FLAG(&(Local_14.f_218[0]), 174, false);
						if (!func_14(Local_14.f_254, 256))
						{
							func_19(&Local_14, 0, 0, 0, 0, 0, 0);
							func_19(&Local_14, 1, 1, 0, 0, 0, 0);
							if (!func_83(&(Local_14.f_218[0]), 1682639051))
							{
								func_84(&(Local_14.f_218[0]), Global_35, &(Local_14.f_156), -1082130432, 0, 0, -1082130432, -1082130432, 1, 8, 0, 0, 1069547520, 1073741824, 1050253722, 1067030938, 0, 0, -1, 1, -1082130432, -1082130432, 1);
								func_12(&(Local_14.f_253), 536870912);
							}
							func_12(&(Local_14.f_254), 256);
						}
					}
					else
					{
						if (!func_14(Local_14.f_254, 512))
						{
							if (ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_14.f_247, 0))
							{
								func_128(&Local_14, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 1.5f);
								func_12(&(Local_14.f_254), 512);
							}
						}
						if (!CAM::_0xA24C1D341C6E0D53(1, 0, 0))
						{
							CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
						}
						func_129();
						PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
						PAD::ENABLE_CONTROL_ACTION(0, -668070958, true);
						PAD::ENABLE_CONTROL_ACTION(0, 1250966545, true);
					}
					if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_14.f_247, 0))
					{
						PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
						PAD::ENABLE_CONTROL_ACTION(0, -668070958, true);
						PAD::ENABLE_CONTROL_ACTION(0, 1250966545, true);
					}
					if (func_80(&Local_14, &(Local_14.f_247), func_35(), 1, 0, 0, 1, 1) || ANIMSCENE::_0xD8254CB2C586412B(Local_14.f_247, 0))
					{
						if (func_14(Local_14.f_253, 536870912) && !func_14(Local_14.f_253, 1073741824))
						{
							func_110(&(Local_14.f_218[0]), 1);
							func_111(Global_35, 1);
							func_112(&(Local_14.f_353));
							func_12(&(Local_14.f_253), 1073741824);
						}
						func_20(&Local_14, 57);
					}
				}
				break;
			case 58:
				if (func_105(&Local_14))
				{
					ANIMSCENE::RESET_ANIM_SCENE(Local_14.f_245, 0);
					if (!func_14(Local_14.f_254, 32))
					{
						func_12(&(Local_14.f_254), 32);
					}
					if (!func_14(Local_14.f_254, 64))
					{
						func_12(&(Local_14.f_254), 64);
					}
					if (func_14(Local_14.f_253, 536870912) && !func_14(Local_14.f_253, 1073741824))
					{
						func_110(&(Local_14.f_218[0]), 1);
						func_111(Global_35, 1);
						func_112(&(Local_14.f_353));
						func_12(&(Local_14.f_253), 1073741824);
					}
					func_20(&Local_14, 57);
				}
				iVar1 = func_130(&Local_14);
				switch (iVar1)
				{
					case 16:
						if (func_127(&Global_35, Local_14.f_218[0], &iVar0, 0))
						{
							ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_14.f_247, func_72(), func_73(), 2);
							Global_40.f_11954 = 1;
							func_20(&Local_14, 59);
						}
						break;
					case 32:
						ANIMSCENE::RESET_ANIM_SCENE(Local_14.f_245, 0);
						if (func_131(&(Local_14.f_246)))
						{
							ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_14.f_246, func_72(), func_73(), 2);
							func_20(&Local_14, 60);
						}
						break;
					case 128:
						ANIMSCENE::RESET_ANIM_SCENE(Local_14.f_245, 0);
						if (func_131(&(Local_14.f_246)))
						{
							ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_14.f_246, func_72(), func_73(), 2);
							func_20(&Local_14, 60);
						}
						break;
				}
				break;
			case 59:
				if (ANIMSCENE::_0x3FBC3F51BF12DFBF(Local_14.f_247) >= 0.3f)
				{
					if (!func_83(&(Local_14.f_218[0]), 1682639051))
					{
						func_84(&(Local_14.f_218[0]), Global_35, &(Local_14.f_156), -1082130432, 0, 0, -1082130432, -1082130432, 1, 8, 0, 0, 1069547520, 1073741824, 1050253722, 1067030938, 0, 0, -1, 1, -1082130432, -1082130432, 1);
						func_12(&(Local_14.f_253), 536870912);
					}
				}
				if ((func_80(&Local_14, &(Local_14.f_247), func_35(), 0, 0, 0, 1, 1) || ANIMSCENE::_0xD8254CB2C586412B(Local_14.f_247, 0)) || ANIMSCENE::_0x3FBC3F51BF12DFBF(Local_14.f_247) > 0.98f)
				{
					ANIMSCENE::RESET_ANIM_SCENE(Local_14.f_245, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
					if (func_14(Local_14.f_253, 536870912) && !func_14(Local_14.f_253, 1073741824))
					{
						func_110(&(Local_14.f_218[0]), 1);
						func_111(Global_35, 1);
						func_112(&(Local_14.f_353));
						func_12(&(Local_14.f_253), 1073741824);
					}
					func_20(&Local_14, 57);
				}
				else
				{
					func_132(Local_14.f_218[0], &(Local_14.f_256), -180122789, 25f, 60f);
				}
				break;
			case 60:
				if (func_80(&Local_14, &(Local_14.f_246), func_123(), 1, 0, 0, 1, 1) || ANIMSCENE::_0xD8254CB2C586412B(Local_14.f_246, 0))
				{
					if (func_14(Local_14.f_253, 536870912) && !func_14(Local_14.f_253, 1073741824))
					{
						func_110(&(Local_14.f_218[0]), 1);
						func_111(Global_35, 1);
						func_112(&(Local_14.f_353));
						func_12(&(Local_14.f_253), 1073741824);
					}
					func_20(&Local_14, 57);
				}
				break;
			case 57:
				if (!func_14(Local_14.f_253, 128))
				{
					func_133(Local_14.f_218[0], &(Local_14.f_256), -180122789, 25f, 0);
					if (!func_14(Local_14.f_253, 16384))
					{
						func_134(19, 1);
						(Global_40.f_11623[19 /*8*/])->f_3 = func_135();
						func_12(&(Local_14.f_253), 16384);
					}
				}
				if (!Local_14.f_373)
				{
					if (func_14(Local_14.f_253, 536870912) && !func_14(Local_14.f_253, 1073741824))
					{
						func_110(&(Local_14.f_218[0]), 1);
						func_111(Global_35, 1);
						func_112(&(Local_14.f_353));
						func_12(&(Local_14.f_253), 1073741824);
						Local_14.f_373 = 1;
					}
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(Local_14.f_218[0]), false);
				PED::SET_PED_CONFIG_FLAG(&(Local_14.f_218[0]), 448, false);
				PED::SET_PED_CONFIG_FLAG(&(Local_14.f_218[0]), 153, false);
				if (func_136(&Local_14, Local_14.f_218[0], 0))
				{
					func_12(&(Local_14.f_253), 256);
					func_20(&Local_14, 69);
				}
				if (ANIMSCENE::_0x25557E324489393C(Local_14.f_245) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(&(Local_14.f_218[0])))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(Local_14.f_245);
				}
				if (ANIMSCENE::_0x25557E324489393C(Local_14.f_246) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(&(Local_14.f_218[0])))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(Local_14.f_246);
				}
				if (ANIMSCENE::_0x25557E324489393C(Local_14.f_247) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(&(Local_14.f_218[0])))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(Local_14.f_247);
				}
				break;
			case 65:
				func_20(&Local_14, 57);
				break;
			case 66:
				break;
			case 67:
				if (func_137(&(Local_14.f_136)) > 0.6f)
				{
					if (func_14(Local_14.f_253, 4096))
					{
						if (ANIMSCENE::_0x25557E324489393C(Local_14.f_245) && ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_14.f_245, 0))
						{
							func_80(&Local_14, &(Local_14.f_245), func_138(), 0, 0, 0, 1, 0);
						}
						else
						{
							func_139(&(Local_14.f_253), 4096);
						}
					}
					else
					{
						if (!func_14(Local_14.f_253, 524288))
						{
							if (ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_14.f_246, 0))
							{
								ANIMSCENE::RESET_ANIM_SCENE(Local_14.f_246, 0);
							}
							if (ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_14.f_247, 0))
							{
								ANIMSCENE::RESET_ANIM_SCENE(Local_14.f_247, 0);
							}
							if (func_140(&(Local_14.f_218[0]), "PANIC_HELP", -1021994891, 0, Local_14.f_237, 0))
							{
								func_12(&(Local_14.f_253), 524288);
							}
						}
						if (!PED::IS_PED_FLEEING(&(Local_14.f_218[0])))
						{
							if (func_14(Local_14.f_253, 536870912) && !func_14(Local_14.f_253, 1073741824))
							{
								func_110(&(Local_14.f_218[0]), 1);
								func_111(Global_35, 1);
								func_112(&(Local_14.f_353));
								func_12(&(Local_14.f_253), 1073741824);
							}
							AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(&(Local_14.f_218[0]), 0f);
							PED::SET_PED_COMBAT_ATTRIBUTES(&(Local_14.f_218[0]), 17, true);
							TASK::_TASK_SMART_FLEE_STYLE_PED(&(Local_14.f_218[0]), Global_35, 3, 1, 6000f, -1, 0);
							PED::SET_PED_KEEP_TASK(&(Local_14.f_218[0]), true);
							PED::SET_PED_CONFIG_FLAG(&(Local_14.f_218[0]), 448, false);
							PED::SET_PED_CONFIG_FLAG(&(Local_14.f_218[0]), 153, false);
						}
					}
				}
				if (Local_14.f_239 >= 200f)
				{
					if (!PED::_0x5102307CE88798EB(&(Local_14.f_218[0])))
					{
						PED::REQUEST_PED_VISIBILITY_TRACKING(&(Local_14.f_218[0]));
					}
					if (!PED::IS_TRACKED_PED_VISIBLE(&(Local_14.f_218[0])))
					{
						if (ENTITY::DOES_ENTITY_EXIST(&(Local_14.f_218[0])))
						{
							if (func_14(Local_14.f_253, 536870912) && !func_14(Local_14.f_253, 1073741824))
							{
								func_110(&(Local_14.f_218[0]), 1);
								func_111(Global_35, 1);
								func_112(&(Local_14.f_353));
								func_12(&(Local_14.f_253), 1073741824);
							}
							AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(&(Local_14.f_218[0]), 0f);
							PED::DELETE_PED(Local_14.f_218[0]);
						}
						func_1(&Local_14);
					}
				}
				break;
			case 69:
				break;
			case 68:
				if (Local_14.f_239 <= 6f && func_14(Local_14.f_253, 131072))
				{
					TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(&(Local_14.f_218[0]), 2f);
				}
				else
				{
					TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(&(Local_14.f_218[0]), 1f);
				}
				break;
			default:
				break;
		}
		if (func_40(Local_14.f_154))
		{
			switch (Local_14)
			{
				case 57:
				case 69:
					if (!PED::_0x5102307CE88798EB(&(Local_14.f_218[0])))
					{
						PED::REQUEST_PED_VISIBILITY_TRACKING(&(Local_14.f_218[0]));
					}
					if (Local_14.f_239 > 100f && !PED::IS_TRACKED_PED_VISIBLE(&(Local_14.f_218[0])))
					{
						if (ENTITY::DOES_ENTITY_EXIST(&(Local_14.f_218[0])))
						{
							if (func_14(Local_14.f_253, 536870912) && !func_14(Local_14.f_253, 1073741824))
							{
								func_110(&(Local_14.f_218[0]), 1);
								func_111(Global_35, 1);
								func_112(&(Local_14.f_353));
								func_12(&(Local_14.f_253), 1073741824);
							}
							AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(&(Local_14.f_218[0]), 0f);
							PED::DELETE_PED(Local_14.f_218[0]);
						}
						func_1(&Local_14);
					}
					break;
			}
		}
	}
}

void func_1(var uParam0)
{
	func_141(&(uParam0->f_195));
	func_142(19);
	if (func_14(uParam0->f_253, 536870912) && !func_14(uParam0->f_253, 1073741824))
	{
		func_112(&(uParam0->f_353));
		func_111(Global_35, 1);
		if (func_9(&(uParam0->f_218[0]), 0))
		{
			func_110(&(uParam0->f_218[0]), 1);
		}
		func_12(&(uParam0->f_253), 1073741824);
	}
	func_118(&(uParam0->f_233), 1);
	func_19(uParam0, 0, 0, 0, 0, 0, 0);
	func_19(uParam0, 1, 1, 0, 0, 0, 0);
	func_143(&(uParam0->f_232));
	if (func_40(func_39(19, 0, 9, func_38(19))))
	{
		func_144(func_39(19, 0, 9, func_38(19)), uParam0->f_244);
		func_145(func_39(19, 0, 9, func_38(19)), uParam0->f_255);
	}
	if (func_9(&(uParam0->f_218[0]), 0))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(uParam0->f_218[0]), false);
		func_16(&(uParam0->f_218[0]), 1, 1);
		PED::SET_PED_CONFIG_FLAG(&(uParam0->f_218[0]), 130, false);
		func_17(&(uParam0->f_218[0]));
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(&(uParam0->f_218[0]), 0f);
		PED::_0x39A2FC5AF55A52B1(&(uParam0->f_218[0]), -1);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0->f_218[0]);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_245))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_245);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_246))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_246);
	}
	if (func_74(&(uParam0->f_235)))
	{
		GRAPHICS::_0x9CF1836C03FB67A2(&(uParam0->f_235), 0);
	}
	func_146(uParam0);
	if (VOLUME::_0x92A78D0BEDB332A3(((*(*Global_1396257)[19 /*638*/])[0 /*48*/])->f_47))
	{
		VOLUME::_0x43F867EF5C463A53(((*(*Global_1396257)[19 /*638*/])[0 /*48*/])->f_47);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(((*(*Global_1396257)[19 /*638*/])[1 /*48*/])->f_47))
	{
		VOLUME::_0x43F867EF5C463A53(((*(*Global_1396257)[19 /*638*/])[1 /*48*/])->f_47);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(((*(*Global_1396257)[19 /*638*/])[2 /*48*/])->f_47))
	{
		VOLUME::_0x43F867EF5C463A53(((*(*Global_1396257)[19 /*638*/])[2 /*48*/])->f_47);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(((*(*Global_1396257)[19 /*638*/])[3 /*48*/])->f_47))
	{
		VOLUME::_0x43F867EF5C463A53(((*(*Global_1396257)[19 /*638*/])[3 /*48*/])->f_47);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(((*(*Global_1396257)[19 /*638*/])[4 /*48*/])->f_47))
	{
		VOLUME::_0x43F867EF5C463A53(((*(*Global_1396257)[19 /*638*/])[4 /*48*/])->f_47);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(((*(*Global_1396257)[19 /*638*/])[5 /*48*/])->f_47))
	{
		VOLUME::_0x43F867EF5C463A53(((*(*Global_1396257)[19 /*638*/])[5 /*48*/])->f_47);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(((*(*Global_1396257)[19 /*638*/])[6 /*48*/])->f_47))
	{
		VOLUME::_0x43F867EF5C463A53(((*(*Global_1396257)[19 /*638*/])[6 /*48*/])->f_47);
	}
	if (HUD::_0xD0976CC34002DB57("SPBM"))
	{
		HUD::_0xAA03F130A637D923("SPBM");
	}
	if (HUD::_0xD0976CC34002DB57("SPCWVAU"))
	{
		HUD::_0xAA03F130A637D923("SPCWVAU");
	}
	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_217))
	{
		ITEMSET::DESTROY_ITEMSET(uParam0->f_217);
	}
	func_126(0);
	if (!func_147(uParam0->f_233, 1, 1))
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

void func_2(var uParam0)
{
	if ((func_148(19, &(uParam0->f_218[0]), 1, 1) && (*uParam0 > 2 && *uParam0 < 67)) || (INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) != 0 && (*uParam0 > 2 && *uParam0 < 67)))
	{
		if (*uParam0 > 30)
		{
			if (!func_14(uParam0->f_253, 256))
			{
				if (*uParam0 != 57)
				{
					func_19(uParam0, 0, 0, 0, 0, 0, 0);
					func_19(uParam0, 1, 1, 0, 0, 0, 0);
					func_20(uParam0, 57);
					if (!func_14(uParam0->f_253, 65536))
					{
						func_12(&(uParam0->f_253), 128);
					}
				}
			}
		}
		else if (*uParam0 < 30)
		{
			if (!func_14(uParam0->f_253, 16777216))
			{
				func_12(&(uParam0->f_253), 16777216);
				func_20(uParam0, 21);
			}
		}
	}
	else if (func_14(uParam0->f_253, 16777216))
	{
		func_139(&(uParam0->f_253), 16777216);
	}
}

int func_3(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, float fParam5, float fParam6, bool bParam7)
{
	if (*uParam4)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(*uParam2) || Global_1935630->f_12)
	{
		return 0;
	}
	if (bParam7)
	{
		if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam2))
		{
			(Global_40.f_11623[iParam0 /*8*/])->f_5++;
			(Global_40.f_11623[iParam0 /*8*/])->f_2 = func_135();
			*uParam4 = 1;
			return 1;
		}
	}
	if (fParam5 == 0f)
	{
		if (!func_149(Global_35, *uParam2, fParam6, 1))
		{
			return 0;
		}
	}
	else if (fParam5 > fParam6)
	{
		return 0;
	}
	if (!func_150(uParam3))
	{
		func_151(uParam3, 0f);
	}
	else if (func_152(uParam3) >= 2f)
	{
		if (!func_153((Global_40.f_11623[iParam0 /*8*/])->f_2))
		{
			func_154(iParam0);
			*uParam4 = 1;
			func_78(uParam3);
			return 1;
		}
		else
		{
			func_154(iParam0);
			*uParam4 = 1;
			func_78(uParam3);
			return 1;
		}
	}
	return 0;
}

void func_4(var uParam0, int iParam1)
{
	if ((MISC::GET_FRAME_COUNT() % 30) == 0)
	{
		if (func_155(19, iParam1, &(uParam0->f_195), &(uParam0->f_218[0])))
		{
			uParam0->f_372 = 1;
			if (func_156(&(uParam0->f_195)))
			{
				func_1(uParam0);
			}
		}
		if (*uParam0 == 21)
		{
			if (uParam0->f_372)
			{
				if (func_79(&(uParam0->f_195)))
				{
					if (!func_156(&(uParam0->f_195)))
					{
						if (ANIMSCENE::_0x25557E324489393C(uParam0->f_245) && ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_245, 0))
						{
							func_80(uParam0, &(uParam0->f_245), func_138(), 0, 0, 0, 1, 0);
						}
						else
						{
							func_12(&(uParam0->f_253), 128);
							func_20(uParam0, 57);
						}
					}
				}
			}
		}
		if (!func_9(Global_35, 0))
		{
			func_1(uParam0);
		}
		else if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, func_157(76), true, 0))
		{
			if (!func_150(&(uParam0->f_130)))
			{
				func_158(&(uParam0->f_130), 0);
			}
			else if (func_152(&(uParam0->f_130)) > 10f)
			{
				func_78(&(uParam0->f_130));
				func_1(uParam0);
			}
		}
	}
}

void func_5(var uParam0)
{
	if (!func_150(&(uParam0->f_148)))
	{
		func_151(&(uParam0->f_148), 0f);
	}
	else if (func_159(&(uParam0->f_148)) >= 1000)
	{
		uParam0->f_239 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(&(uParam0->f_218[0]), true, false), func_160(PLAYER::GET_PLAYER_INDEX()), false);
		func_78(&(uParam0->f_148));
	}
}

void func_6(int iParam0, int iParam1)
{
	if (func_161(iParam0))
	{
		if (func_162(Global_35, iParam1, 0, 1))
		{
			LAW::_0x785177E4D57D7389(PLAYER::PLAYER_ID(), 1714017012, 0, 0, -1);
		}
	}
}

void func_7(int iParam0)
{
	bool bVar0;

	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		bVar0 = true;
	}
	if (*iParam0 == 57)
	{
		bVar0 = true;
	}
	if (func_9(&(iParam0->f_218[0]), 0))
	{
		if (func_162(Global_35, iParam0->f_226, 0, 1))
		{
			if (!func_14(iParam0->f_253, 33554432))
			{
				TASK::TASK_LOOK_AT_ENTITY(Global_35, &(iParam0->f_218[0]), -1, 2108, 51, 0);
				func_12(&(iParam0->f_253), 33554432);
			}
		}
		else
		{
			bVar0 = true;
		}
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (func_14(iParam0->f_253, 33554432))
		{
			func_163(Global_35);
			func_139(&(iParam0->f_253), 33554432);
		}
	}
}

void func_8(int iParam0)
{
	if (*iParam0 >= 6 && *iParam0 <= 30)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(&(iParam0->f_218[0])))
	{
		if (func_9(&(iParam0->f_218[0]), 0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(&(iParam0->f_218[0]), 1.5f);
		}
	}
}

int func_9(int iParam0, int iParam1)
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
	if (func_14(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_14(iVar0, 2))
	{
		if (PED::_0x3AA24CCC0D451379(iParam0))
		{
			return 0;
		}
	}
	if (func_14(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_14(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_14(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_14(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return 0;
		}
	}
	if (func_14(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_14(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_10(var uParam0, var uParam1, var uParam2, var uParam3, float fParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam2))
	{
		return 0;
	}
	if (PED::IS_PED_DEAD_OR_DYING(*uParam2, true))
	{
		*uParam1 = 1;
		return 1;
	}
	if (Global_1935630->f_39 > 0 || PED::_0x285D36C5C72B0569(Global_35) <= 1f)
	{
		if (func_11(*uParam2, 0, uParam0, uParam1, 0, 0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (*uParam3 < 0 || *uParam3 > 4)
	{
		*uParam3 = 0;
	}
	switch (*uParam3)
	{
		case 0:
			*uParam3++;
			if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(*uParam2) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(*uParam2)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(*uParam2))
			{
				*uParam1 = 2;
				return 1;
			}
			break;
		case 1:
			*uParam3++;
			if (PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), *uParam2, 1000))
			{
				*uParam1 = 4;
				return 1;
			}
			break;
		case 2:
			*uParam3++;
			if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(217247011, ENTITY::GET_ENTITY_COORDS(*uParam2, false, true), fParam4))
			{
				*uParam1 = 16;
				return 1;
			}
			break;
		case 3:
			*uParam3++;
			if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(956330317, ENTITY::GET_ENTITY_COORDS(*uParam2, false, true), fParam4))
			{
				*uParam1 = 16;
				return 1;
			}
			break;
		case 4:
			*uParam3 = 0;
			if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-966930978, ENTITY::GET_ENTITY_COORDS(*uParam2, false, true), fParam4))
			{
				*uParam1 = 16;
				return 1;
			}
			break;
	}
	return 0;
}

int func_11(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_164(uParam2, 1, iVar0);
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
			if (func_165(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_166(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_167(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_166(iParam0, uParam2, *uParam3);
					return 1;
				}
				else if (func_168(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_166(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_169(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_166(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_26 && func_170(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_166(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_171(uParam2, 1065353216))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_172(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_166(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_173(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_166(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_174(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_166(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			else if (func_174(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_166(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_175(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_166(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || uParam2->f_12 < 20f)
			{
				if (func_176(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_166(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_177(uParam2, 4000))
				{
					if ((func_178(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_179(uParam2, iParam0)) && func_180(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_166(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_178(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_179(uParam2, iParam0)) && func_180(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_166(iParam0, uParam2, *uParam3);
					return 1;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_181(iParam0, Global_1935630->f_41))
							{
								func_182();
								*uParam3 = 2;
								func_166(iParam0, uParam2, *uParam3);
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
						if (func_181(iParam0, Global_1935630->f_41))
						{
							func_182();
							*uParam3 = 2;
							func_166(iParam0, uParam2, *uParam3);
							return 1;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_183(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_184() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_182();
						*uParam3 = 2;
						func_166(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_185())
					{
						if (func_181(iParam0, Global_1935630->f_42))
						{
							func_182();
							*uParam3 = 2;
							func_166(iParam0, uParam2, *uParam3);
							return 1;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_186(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_166(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_187(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_166(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_188(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_166(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_189(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_166(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_190(uParam2, 4000))
				{
					if (func_191(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_166(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_192(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_166(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_193(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_166(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
	}
	return 0;
}

void func_12(var uParam0, int iParam1)
{
	func_194(uParam0, iParam1);
}

void func_13(int iParam0)
{
	vector3 vVar0;

	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return;
	}
	vVar0 = { VOLUME::_0xF70F00013A62F866(iParam0) };
	func_195(vVar0, 0);
}

bool func_14(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_15(int* iParam0, var uParam1)
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
	func_196(iParam0, uParam1, 1);
	func_197(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY((*uParam1)[iVar0 /*17*/], &Var22, 17);
		iVar0++;
	}
}

void func_16(int iParam0, bool bParam1, bool bParam2)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 301, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 178, bParam2);
	PED::SET_PED_CONFIG_FLAG(iParam0, 330, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
}

void func_17(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iParam0, 7, 0, 1);
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iParam0, 3, 2, 1);
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iParam0, 4, 2, 1);
}

void func_18(var uParam0)
{
	func_151(uParam0, 0f);
}

void func_19(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	struct<2> Var0;
	float fVar2;

	Var0 = { func_198(iParam2) };
	(uParam0->f_317[iParam1 /*17*/])->f_13 = "";
	func_199(uParam0->f_317[iParam1 /*17*/], Var0);
	func_81(uParam0->f_317[iParam1 /*17*/], iParam3, 0);
	func_200(uParam0->f_317[iParam1 /*17*/], bParam6);
	if (bParam4)
	{
		func_151(&(uParam0->f_145), 0f);
	}
	else if (bParam5)
	{
		fVar2 = func_137(&(uParam0->f_145));
		fVar2 = (fVar2 - 5f);
		if (fVar2 <= 0f)
		{
			fVar2 = 0f;
		}
		func_151(&(uParam0->f_145), fVar2);
	}
}

void func_20(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 30:
			WEAPON::_0xFCCC886EDE3C63EC(Global_35, 2, 0);
			break;
		case 57:
			func_81(uParam0->f_317[0 /*17*/], 0, 0);
			func_81(uParam0->f_317[1 /*17*/], 0, 0);
			if (!func_14(uParam0->f_253, 32))
			{
				func_12(&(uParam0->f_253), 32);
			}
			func_163(&(uParam0->f_218[0]));
			func_163(Global_35);
			break;
		case 67:
			func_163(&(uParam0->f_218[0]));
			func_163(Global_35);
			func_154(19);
			PED::SET_PED_CONFIG_FLAG(&(uParam0->f_218[0]), 448, false);
			PED::SET_PED_CONFIG_FLAG(&(uParam0->f_218[0]), 153, false);
			break;
	}
	*uParam0 = iParam1;
}

void func_21(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (ENTITY::IS_ENTITY_DEAD(&(iParam0->f_218[0])))
	{
		return;
	}
	if (!func_14(iParam0->f_253, 2))
	{
		func_201(iParam0);
		func_12(&(iParam0->f_253), 2);
	}
	if (iParam0->f_239 > 20f)
	{
		return;
	}
	iVar1 = func_202(iParam0->f_218[0], &(iParam0->f_296), 15f, &(iParam0->f_317), &iVar0, 0f, 2, 0, 0, iParam0->f_352, 0, 0, 2, 1, iParam0->f_239, 0);
	if (func_14(iParam0->f_253, 32))
	{
		return;
	}
	if (func_14(iParam0->f_253, 16777216))
	{
		if (func_203(iParam0->f_317[0 /*17*/], 1, 0))
		{
			func_81(iParam0->f_317[0 /*17*/], 0, 0);
		}
		if (func_203(iParam0->f_317[1 /*17*/], 1, 0))
		{
			func_81(iParam0->f_317[1 /*17*/], 0, 0);
		}
		return;
	}
	if (iParam0->f_239 < 15f)
	{
		if (!func_14(iParam0->f_253, 1048576))
		{
			func_81(iParam0->f_317[0 /*17*/], 1, 0);
			func_81(iParam0->f_317[1 /*17*/], 1, 0);
			func_12(&(iParam0->f_253), 1048576);
		}
	}
	else if (func_14(iParam0->f_253, 1048576))
	{
		func_81(iParam0->f_317[0 /*17*/], 0, 0);
		func_81(iParam0->f_317[1 /*17*/], 0, 0);
		func_139(&(iParam0->f_253), 1048576);
	}
	switch (iVar1)
	{
		case 0:
			func_78(&(iParam0->f_145));
			func_12(&(iParam0->f_253), 32);
			func_20(iParam0, func_76());
			func_81(iParam0->f_317[0 /*17*/], 0, 0);
			func_81(iParam0->f_317[1 /*17*/], 0, 0);
			break;
		case 1:
			iParam0->f_255++;
			func_78(&(iParam0->f_145));
			func_12(&(iParam0->f_253), 32);
			func_20(iParam0, func_76());
			func_81(iParam0->f_317[0 /*17*/], 0, 0);
			func_81(iParam0->f_317[1 /*17*/], 0, 0);
			break;
	}
}

void func_22(int iParam0)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(&(iParam0->f_218[0])))
	{
		return;
	}
	iVar0 = func_204(iParam0->f_218[0], &(iParam0->f_296), 15f, &(iParam0->f_317), 0f, 2, 0, "", iParam0->f_352, 0, 0, 2, -1082130432);
	if (func_14(iParam0->f_254, 4))
	{
		return;
	}
	if (func_14(iParam0->f_253, 134217728))
	{
		iVar0 = 1;
	}
	switch (iVar0)
	{
		case 0:
			if (!func_14(iParam0->f_254, 1))
			{
				func_205();
				func_78(&(iParam0->f_145));
				func_19(iParam0, 0, 2, 0, 0, 0, 0);
				func_19(iParam0, 1, 3, 0, 0, 0, 0);
				func_206(19, iParam0->f_218[0], &(iParam0->f_253), 65536);
				func_108(iParam0, func_107(3, 0, 0), 1);
				func_12(&(iParam0->f_254), 4);
				func_12(&(iParam0->f_254), 1);
			}
			break;
		case 1:
			if (!func_14(iParam0->f_254, 2))
			{
				func_205();
				func_78(&(iParam0->f_145));
				func_19(iParam0, 0, 0, 0, 0, 0, 0);
				func_19(iParam0, 1, 1, 0, 0, 0, 0);
				func_206(19, iParam0->f_218[0], &(iParam0->f_253), 65536);
				func_108(iParam0, func_107(3, 0, 0), 1);
				func_12(&(iParam0->f_254), 4);
				func_12(&(iParam0->f_254), 2);
			}
			break;
	}
}

void func_23(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	vector3 vVar5;
	float fVar8;
	float fVar9;

	if (ENTITY::IS_ENTITY_DEAD(&(iParam0->f_218[0])))
	{
		return;
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
	fVar4 = vVar1.z;
	vVar5 = { ENTITY::GET_ENTITY_COORDS(&(iParam0->f_218[0]), true, false) };
	fVar8 = vVar5.z;
	if (fVar4 >= fVar8)
	{
		fVar9 = (fVar4 - fVar8);
	}
	else
	{
		fVar9 = (fVar8 - fVar4);
	}
	if ((fVar9 >= 0.5f || !func_207(iParam0)) || func_208())
	{
		if (func_14(iParam0->f_253, 268435456))
		{
			func_19(iParam0, 0, 4, 0, 0, 0, 0);
			func_139(&(iParam0->f_253), 268435456);
		}
	}
	else if (!func_14(iParam0->f_253, 268435456))
	{
		func_19(iParam0, 0, 4, 1, 0, 1, 0);
		func_12(&(iParam0->f_253), 268435456);
	}
	iVar0 = func_204(iParam0->f_218[0], &(iParam0->f_296), 15f, &(iParam0->f_317), 0f, 2, 0, "", iParam0->f_352, 0, 0, 2, -1082130432);
	if (func_14(iParam0->f_254, 64))
	{
		return;
	}
	if (func_14(iParam0->f_253, 134217728))
	{
		iVar0 = 1;
	}
	switch (iVar0)
	{
		case 0:
			if (!func_14(iParam0->f_254, 16))
			{
				func_139(&(iParam0->f_253), 67108864);
				func_78(&(iParam0->f_145));
				func_19(iParam0, 0, 4, 0, 0, 0, 0);
				func_19(iParam0, 1, 5, 0, 0, 0, 0);
				func_206(19, iParam0->f_218[0], &(iParam0->f_253), 65536);
				func_108(iParam0, func_107(3, 0, 0), 1);
				func_12(&(iParam0->f_254), 64);
				func_12(&(iParam0->f_254), 16);
			}
			break;
		case 1:
			if (!func_14(iParam0->f_254, 32))
			{
				func_78(&(iParam0->f_145));
				func_19(iParam0, 0, 0, 0, 0, 0, 0);
				func_19(iParam0, 1, 1, 0, 0, 0, 0);
				func_206(19, iParam0->f_218[0], &(iParam0->f_253), 65536);
				func_108(iParam0, func_107(3, 0, 0), 1);
				func_12(&(iParam0->f_254), 64);
				func_12(&(iParam0->f_254), 32);
			}
			break;
	}
}

void func_24()
{
	PAD::DISABLE_CONTROL_ACTION(0, 130948705, false);
	PAD::DISABLE_CONTROL_ACTION(0, -128997553, false);
	PAD::DISABLE_CONTROL_ACTION(0, -432665970, false);
	PAD::DISABLE_CONTROL_ACTION(0, -349518703, false);
}

void func_25(int iParam0)
{
	if (*iParam0 >= 7 && *iParam0 <= 24)
	{
		if (AUDIO::_0x54B187F111D9C6F8(&(iParam0->f_218[0]), 1))
		{
			func_132(iParam0->f_218[0], &(iParam0->f_256), 161068336, 10f, 5f);
		}
	}
}

void func_26(int iParam0)
{
	if (*iParam0 >= 6 && *iParam0 <= 30)
	{
		return;
	}
	if (func_83(&(iParam0->f_218[0]), 1682639051))
	{
		func_106(&(iParam0->f_218[0]), Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
		func_209(&(iParam0->f_353), &(iParam0->f_218[0]));
		func_124(Global_35, &(iParam0->f_218[0]), 1, 1, 1, 0, 1, 1, 0, 1, 1);
	}
}

void func_27(int iParam0)
{
	if (func_14(iParam0->f_253, 64) && iParam0->f_257 >= 3)
	{
		return;
	}
	if (*iParam0 >= 7 && *iParam0 <= 51)
	{
		if (func_210(iParam0->f_218[0], &(iParam0->f_261), &(iParam0->f_151), &(iParam0->f_257), 3, 0, 7000, iParam0->f_239))
		{
			func_12(&(iParam0->f_253), 64);
		}
	}
}

void func_28(int iParam0, var uParam1, int iParam2, int iParam3, float fParam4)
{
	char* sVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0) || Global_1935630->f_12)
	{
		return;
	}
	sVar0 = func_211(iParam3);
	if (fParam4 == 0f)
	{
		if (func_149(iParam0, Global_35, 15f, 1))
		{
			if (!func_212(*uParam1, iParam2))
			{
				if (AUDIO::_0x6339C1EA3979B5F7(sVar0, "special_ped_scenes"))
				{
					func_194(uParam1, iParam2);
				}
			}
		}
		else if (func_212(*uParam1, iParam2))
		{
			AUDIO::_0x9428447DED71FC7E("special_ped_scenes");
			func_213(uParam1, iParam2);
		}
	}
	else if (fParam4 <= 15f)
	{
		if (!func_212(*uParam1, iParam2))
		{
			if (AUDIO::_0x6339C1EA3979B5F7(sVar0, "special_ped_scenes"))
			{
				func_194(uParam1, iParam2);
			}
		}
	}
	else if (func_212(*uParam1, iParam2))
	{
		AUDIO::_0x9428447DED71FC7E("special_ped_scenes");
		func_213(uParam1, iParam2);
	}
}

void func_29(var uParam0, int iParam1, char* sParam2, int iParam3)
{
	if (*uParam0 >= 6 && *uParam0 <= 30)
	{
		return;
	}
	if (ANIMSCENE::_0x25557E324489393C(iParam1) && ANIMSCENE::_0xCBFC7725DE6CE2E0(iParam1, 0))
	{
		if (((TASK::IS_PED_WALKING(Global_35) || TASK::IS_PED_STILL(Global_35)) || PED::IS_PED_STOPPED(Global_35)) || iParam3)
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(iParam1, sParam2, true, false);
		}
		else
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(iParam1, sParam2, false, false);
		}
	}
}

int func_30(var uParam0, var uParam1)
{
	if (*uParam0 >= 6 && *uParam0 <= 30)
	{
		return 0;
	}
	if (ANIMSCENE::_0x25557E324489393C(*uParam1) && ANIMSCENE::_0xCBFC7725DE6CE2E0(*uParam1, 0))
	{
		if (ANIMSCENE::_0x3FBC3F51BF12DFBF(*uParam1) <= 0.315f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

char* func_31()
{
	return "script@specialped@pdcwv_bum_civil_war_veteran@ig@ig_1@ig_1_begging";
}

char* func_32()
{
	return "pbl_base_reset";
}

char* func_33()
{
	return "script@specialped@pdcwv_bum_civil_war_veteran@ig@ig_2@action";
}

char* func_34()
{
	return "PL_FriendAsk";
}

char* func_35()
{
	return "PL_HugResPos";
}

void func_36(var uParam0)
{
	if (func_14(uParam0->f_253, 1))
	{
		if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_224))
		{
			uParam0->f_224 = VOLUME::_0x10157BC3247FF3BA(-192.4921f, 625.2659f, 115.287f, 0f, 0f, 0f, 45f, 45f, 45f, "RandomEventBlock");
		}
		if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_225))
		{
			uParam0->f_225 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-192.4921f, 625.2659f, 115.287f, 0f, 0f, 0f, 45f, 45f, 30f, "Abandon");
		}
		if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_226))
		{
			uParam0->f_226 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-192.9274f, 625.6259f, 113.5786f, 0f, -1E-06f, 145.05f, 7.5f, 7.5f, 10f, "Trigger");
		}
		if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_227))
		{
			uParam0->f_227 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-192.9274f, 625.6259f, 113.5786f, 1E-06f, 0f, 145.05f, 3f, 3f, 4f, "StayAway");
		}
		if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_228))
		{
			uParam0->f_228 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-192.9274f, 625.6259f, 113.5786f, 0f, 0f, 0f, 6f, 10f, 10f, "Spotted");
		}
		if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_229))
		{
			uParam0->f_229 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-192.9274f, 625.6259f, 113.5786f, 0f, -1E-06f, 145.05f, 15f, 15f, 10f, "Near");
		}
		if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_230))
		{
			uParam0->f_230 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-192.9274f, 625.6259f, 113.5786f, 1E-06f, 0f, 145.05f, 3f, 3f, 6f, "Focus");
		}
		if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_231))
		{
			uParam0->f_231 = VOLUME::_0x0EB78C2B156635B1(665633627, -192.9274f, 625.6259f, 113.5786f, 0f, 0f, 0f, 1.85f, 1.85f, 3f);
			VOLUME::_0x5B23DFF8E0948BB2(uParam0->f_231, 0);
			VOLUME::_0xBE551C2CC421185D(uParam0->f_231, 1);
		}
	}
	else
	{
		if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_224))
		{
			uParam0->f_224 = VOLUME::_0x10157BC3247FF3BA(-256.365f, 753.5781f, 116.0851f, 0f, 0f, 0f, 45f, 45f, 45f, "RandomEventBlock");
		}
		if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_225))
		{
			uParam0->f_225 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-256.365f, 753.5781f, 116.0851f, 0f, 0f, 0f, 45f, 45f, 30f, "Abandon");
		}
		if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_226))
		{
			uParam0->f_226 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-256.365f, 753.5781f, 116.0851f, 0f, 0f, 0f, 7.5f, 7.5f, 10f, "Trigger");
		}
		if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_227))
		{
			uParam0->f_227 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-256.365f, 753.5781f, 116.0851f, 0f, 0f, 0f, 3f, 3f, 4f, "StayAway");
		}
		if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_228))
		{
			uParam0->f_228 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-256.365f, 753.5781f, 116.0851f, 0f, 0f, 0f, 7f, 13f, 10f, "Spotted");
		}
		if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_229))
		{
			uParam0->f_229 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-256.365f, 753.5781f, 116.0851f, 0f, 0f, 0f, 13.5f, 13.5f, 10f, "Near");
		}
		if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_230))
		{
			uParam0->f_230 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-256.365f, 753.5781f, 116.0851f, 1E-06f, 0f, 145.05f, 3f, 3f, 6f, "Focus");
		}
		if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_231))
		{
			uParam0->f_231 = VOLUME::_0x0EB78C2B156635B1(665633627, -256.365f, 753.5781f, 116.0851f, 0f, 0f, 0f, 1.85f, 1.85f, 3f);
			VOLUME::_0x5B23DFF8E0948BB2(uParam0->f_231, 0);
			VOLUME::_0xBE551C2CC421185D(uParam0->f_231, 1);
		}
	}
}

int func_37(int iParam0, char* sParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, float fParam6)
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;

	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return 0;
	}
	vVar0 = { VOLUME::_0xF70F00013A62F866(iParam0) };
	vVar3 = { VOLUME::_0x3E2A25B2416DD67E(iParam0) };
	uVar6 = func_214(vVar0, vVar3.x, sParam1, bParam2, iParam3, iParam4, bParam5, fParam6);
	return uVar6;
}

int func_38(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1472102294;
		case 0:
			return 1005861726;
		case 2:
			return -26239347;
		case 3:
			return 813446076;
		case 4:
			return -862094048;
		case 6:
			return -161610929;
		case 7:
			return 419383665;
		case 5:
			return 1809158435;
		case 8:
			return 698747486;
		case 9:
			return 399829678;
		case 10:
			return -1767525506;
		case 11:
			return 1533318556;
		case 12:
			return 846763582;
		case 13:
			return 974338564;
		case 14:
			return 860809165;
		case 15:
			return -1682386507;
		case 16:
			return 420952075;
		case 17:
			return 1340251064;
		case 18:
			return -1417023286;
		case 19:
			return 237608522;
		case 20:
			return 1487910336;
		case 21:
			return 129290505;
		case 22:
			return 1231488843;
		case 23:
			return -499580940;
		case 24:
			return 1953535365;
		case 25:
			return -315419568;
		case 26:
			return -1708806962;
		case 27:
			return 1405526353;
		case 28:
			return -1903564707;
		case 29:
			return -1132839335;
		default:
			break;
	}
	return 0;
}

int func_39(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar3 = iParam0;
	iVar4 = iParam1;
	if (Global_1572887->f_12 == -1)
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 100;
				iParam3 = MISC::GET_HASH_KEY(&(((*Global_1835011)[iParam0 /*74*/])->f_8));
				break;
			case 2:
				iVar1 = 101;
				iVar2 = 170;
				break;
			case 3:
				iVar1 = 171;
				iVar2 = 190;
				break;
			case 4:
				iVar1 = 191;
				iVar2 = 230;
				break;
			case 5:
				iVar1 = 231;
				iVar2 = 260;
				break;
			case 6:
				iVar1 = 261;
				iVar2 = 290;
				break;
			case 7:
				iVar1 = 291;
				iVar2 = 370;
				break;
			case 8:
				iVar1 = 371;
				iVar2 = 570;
				iParam3 = MISC::GET_HASH_KEY(&(((*Global_1347702)[iParam0 /*49*/])->f_3));
				break;
			case 9:
				iVar1 = 571;
				iVar2 = 650;
				break;
			case 11:
				iVar1 = 651;
				iVar2 = 750;
				break;
			case 10:
				return -1;
			case 12:
				return -1;
			default:
				return -1;
		}
	}
	else
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 200;
				break;
			case 2:
				iVar1 = 201;
				iVar2 = 15700;
				break;
			case 4:
				iVar1 = 15701;
				iVar2 = 16200;
				break;
			case 12:
				iVar1 = 16201;
				iVar2 = 19200;
				break;
			case 10:
				iVar1 = 19201;
				iVar2 = 20000;
				break;
			case 8:
				return -1;
			case 7:
				return -1;
			case 6:
				return -1;
			default:
				return -1;
		}
	}
	if (iVar2 >= func_215())
	{
		iVar2 = func_215();
	}
	iVar5 = func_216(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_217(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_217(iVar6) == 0)
			{
				return func_218(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
		iVar1 = 751;
		iVar2 = 770;
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_217(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_217(iVar6) == 0)
			{
				return func_218(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (&Global_1058888->f_498[iVar0 /*2*/] == iVar5)
			{
				return iVar0;
			}
			iVar0++;
		}
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (&Global_1058888->f_498[iVar0 /*2*/] == 0)
			{
				return func_218(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

bool func_40(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_41(int iParam0)
{
	if (!func_40(iParam0))
	{
		return -1;
	}
	return func_219(iParam0);
}

int func_42(int iParam0)
{
	if (!func_40(iParam0))
	{
		return -1;
	}
	return func_220(iParam0);
}

void func_43(var uParam0)
{
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	uParam0->f_4 = 1;
	uParam0->f_5 = 1;
	uParam0->f_6 = 1;
	uParam0->f_7 = 1;
	uParam0->f_8 = 0;
	uParam0->f_9 = 1;
	uParam0->f_10 = 1;
	uParam0->f_11 = 1.75f;
	uParam0->f_12 = 2.25f;
	uParam0->f_16 = 45000;
}

void func_44(var uParam0)
{
	func_49(uParam0, 0);
	func_48(uParam0, 0);
	func_45(uParam0, 1);
	func_61(uParam0, 1);
	func_221(uParam0, 0);
	func_56(uParam0, 1);
	func_222(uParam0, 1, 1, 1);
}

void func_45(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_223(&(uParam0->f_1), 256);
	}
	else
	{
		func_224(&(uParam0->f_1), 256);
	}
}

void func_46(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_223(&(uParam0->f_1), 4);
	}
	else
	{
		func_224(&(uParam0->f_1), 4);
	}
}

void func_47(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_223(&(uParam0->f_1), 2);
	}
	else
	{
		func_224(&(uParam0->f_1), 2);
	}
}

void func_48(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_223(&(uParam0->f_1), 2048);
	}
	else
	{
		func_224(&(uParam0->f_1), 2048);
	}
}

void func_49(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_223(&(uParam0->f_1), 16384);
	}
	else
	{
		func_224(&(uParam0->f_1), 16384);
	}
}

void func_50(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_223(&(uParam0->f_1), 1);
	}
	else
	{
		func_224(&(uParam0->f_1), 1);
	}
}

void func_51(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_223(&(uParam0->f_1), 131072);
	}
	else
	{
		func_224(&(uParam0->f_1), 131072);
	}
}

void func_52(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_224(uParam0, 128);
	}
	else
	{
		func_223(uParam0, 128);
	}
}

void func_53(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_224(uParam0, 4);
	}
	else
	{
		func_223(uParam0, 4);
	}
}

void func_54(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_223(&(uParam0->f_1), 8);
	}
	else
	{
		func_224(&(uParam0->f_1), 8);
	}
}

void func_55(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_224(uParam0, 32);
	}
	else
	{
		func_223(uParam0, 32);
	}
}

void func_56(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_224(uParam0, 256);
	}
	else
	{
		func_223(uParam0, 256);
	}
}

void func_57(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_224(uParam0, 524288);
	}
	else
	{
		func_223(uParam0, 524288);
	}
}

void func_58(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_224(uParam0, 2);
	}
	else
	{
		func_223(uParam0, 2);
	}
}

void func_59(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_223(&(uParam0->f_1), 1024);
	}
	else
	{
		func_224(&(uParam0->f_1), 1024);
	}
}

void func_60(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_223(&(uParam0->f_1), 16);
	}
	else
	{
		func_224(&(uParam0->f_1), 16);
	}
}

void func_61(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_224(uParam0, 16);
	}
	else
	{
		func_223(uParam0, 67108864);
		func_223(uParam0, 16);
	}
}

struct<4> func_62(int iParam0)
{
	struct<4> Var0;

	switch (iParam0)
	{
		case 0:
			Var0 = { -256.365f, 753.5781f, 116.0851f };
			Var0.f_3 = 317.5058f;
			break;
		case 1:
			Var0 = { -193.3643f, 625.0235f, 113.5786f };
			Var0.f_3 = -32.08f;
			break;
		case 2:
			Var0 = { -331.8132f, 793.5106f, 115.6329f };
			Var0.f_3 = 231.2512f;
			break;
		case 3:
			Var0 = { -192.2564f, 628.0485f, 112.3348f };
			Var0.f_3 = 231.2512f;
			break;
		case 4:
			Var0 = { -256.365f, 753.5781f, 116.0851f };
			Var0.f_3 = 10.42f;
			break;
		case 5:
			Var0 = { -193.3643f, 625.0235f, 113.5786f };
			Var0.f_3 = -32.08f;
			break;
		case 6:
			Var0 = { -348.8683f, 781.1053f, 114.8526f };
			Var0.f_3 = 317.7707f;
			break;
		case 7:
			Var0 = { -219.8844f, 627.0385f, 112.3019f };
			Var0.f_3 = 268.6542f;
			break;
	}
	return Var0;
}

int func_63(var uParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, bool bParam7, bool bParam8)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		BUILTIN::WAIT(0);
		if (!bParam7)
		{
			*uParam0 = func_225(iParam1, vParam2, fParam5, 0, 1, iParam6, 1, 1, 1, 0, 0, 0, 0);
		}
		else
		{
			*uParam0 = func_225(iParam1, vParam2, fParam5, 0, 1, iParam6, 1, 1, bParam8, 1, 1, 0, 0);
		}
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	if (PED::_0xA0BC8FAED8CFEB3C(*uParam0))
	{
		return 1;
	}
	return 0;
}

void func_64(int iParam0, int iParam1)
{
	if (!(iParam1 > -1 && iParam1 <= 29))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	DECORATOR::DECOR_SET_BOOL(iParam0, "bIsSpecialPed", true);
	DECORATOR::DECOR_SET_INT(iParam0, "iSpecialPedID", iParam1);
	((*Global_1396257)[iParam1 /*638*/])->f_636 = iParam0;
}

void func_65(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_226(uParam0, iParam1, sParam2))
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

int func_66(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return iVar0;
	}
	func_227(iParam0, bParam2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam3, 0, 0, -1, -1, 0);
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam3, 0, 0, -1, -1, 2);
	iVar0 = PED::_0x4C39C95AE5DB1329(iParam0, bParam2, 15);
	return iVar0;
}

int func_67(var uParam0, vector3 vParam1, vector3 vParam4)
{
	if (PED::_0x91A5F9CBEBB9D936(*uParam0))
	{
		return 1;
	}
	*uParam0 = func_228(vParam1, vParam4);
	return 0;
}

Vector3 func_68()
{
	return -199.16f, 632.02f, 114.52f;
}

Vector3 func_69()
{
	return 0f, 0f, -42.5f;
}

Vector3 func_70()
{
	return -258.85f, 745f, 118.08f;
}

Vector3 func_71()
{
	return 0f, 0f, 90f;
}

Vector3 func_72()
{
	vector3 vVar0;

	vVar0 = { func_160(PLAYER::GET_PLAYER_INDEX()) };
	vVar0.f_2 = (vVar0.z - 1f);
	return vVar0;
}

Vector3 func_73()
{
	vector3 vVar0;
	float fVar3;

	vVar0 = { 0f, 0f, 0f };
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		fVar3 = ENTITY::GET_ENTITY_HEADING(Global_35);
		vVar0.f_2 = fVar3;
	}
	return vVar0;
}

bool func_74(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

int func_75()
{
	if (func_229() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == 11966224)
	{
		return 1;
	}
	return 0;
}

int func_76()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	if (iVar0 == 0)
	{
		return 28;
	}
	else
	{
		return 30;
	}
	return 30;
}

void func_77(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		iVar0 = func_230(0, (14 - 1), uParam0->f_244);
		uParam0->f_244 = iVar0;
	}
	else
	{
		iVar0 = *uParam1;
	}
	if (func_231(uParam0))
	{
		iVar1 = func_232(&(uParam0->f_218[0]), &(uParam0->f_220[0]), 1060437492);
		if (!func_14(uParam0->f_253, 4))
		{
			if (iVar1 == 3)
			{
				func_20(uParam0, 23);
				func_12(&(uParam0->f_253), 4);
				return;
			}
		}
		if (!func_14(uParam0->f_253, 8))
		{
			if (iVar1 == 2)
			{
				func_20(uParam0, 24);
				func_12(&(uParam0->f_253), 8);
				return;
			}
		}
		if (!func_14(uParam0->f_253, 16))
		{
			if (iVar1 == 0)
			{
				func_20(uParam0, 22);
				func_12(&(uParam0->f_253), 16);
				return;
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			*uParam1++;
			func_20(uParam0, 7);
			break;
		case 1:
			*uParam1++;
			func_20(uParam0, 8);
			break;
		case 2:
			*uParam1++;
			func_20(uParam0, 9);
			break;
		case 3:
			*uParam1++;
			func_20(uParam0, 10);
			break;
		case 4:
			*uParam1++;
			func_20(uParam0, 11);
			break;
		case 5:
			*uParam1++;
			func_20(uParam0, 12);
			break;
		case 6:
			*uParam1++;
			func_20(uParam0, 13);
			break;
		case 7:
			*uParam1++;
			func_20(uParam0, 14);
			break;
		case 8:
			*uParam1++;
			func_20(uParam0, 15);
			break;
		case 9:
			*uParam1++;
			func_20(uParam0, 16);
			break;
		case 10:
			*uParam1++;
			func_20(uParam0, 17);
			break;
		case 11:
			*uParam1++;
			func_20(uParam0, 18);
			break;
		case 12:
			*uParam1++;
			func_20(uParam0, 19);
			break;
		case 13:
			*uParam1 = 0;
			func_20(uParam0, 20);
			break;
		case 14:
			func_20(uParam0, 21);
			break;
		default:
			break;
	}
}

void func_78(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_79(var uParam0)
{
	if ((((func_14(*uParam0, 32) || func_14(*uParam0, 64)) || func_14(*uParam0, 512)) || func_14(*uParam0, 256)) || func_14(*uParam0, 8))
	{
		return 1;
	}
	return 0;
}

int func_80(var uParam0, var uParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	char* sVar0;
	char* sVar1;
	bool bVar2;
	bool bVar3;

	if (*uParam1 != uParam0->f_259 || !MISC::ARE_STRINGS_EQUAL(sParam2, uParam0->f_260))
	{
		func_139(&(uParam0->f_253), 2097152);
		func_139(&(uParam0->f_253), 4194304);
		func_139(&(uParam0->f_253), 8388608);
	}
	uParam0->f_259 = *uParam1;
	uParam0->f_260 = sParam2;
	if (bParam5)
	{
		sVar0 = "s_base";
		sVar1 = "s_base_end";
	}
	else
	{
		sVar0 = "s_base_stand";
		sVar1 = "s_base_end_stand";
	}
	uParam0->f_258++;
	if (uParam0->f_258 >= 3)
	{
		uParam0->f_258 = 0;
	}
	if (!func_14(uParam0->f_253, 2097152))
	{
		if (ANIMSCENE::_0xCBFC7725DE6CE2E0(*uParam1, 0))
		{
			func_12(&(uParam0->f_253), 2097152);
		}
		else if (ANIMSCENE::_0x477122B8D05E7968(*uParam1, 1, 0))
		{
			ANIMSCENE::START_ANIM_SCENE(*uParam1);
		}
	}
	else
	{
		bVar2 = false;
		bVar3 = false;
		if (!func_14(uParam0->f_253, 4194304))
		{
			if (ANIMSCENE::_0x23E33CB9F4A3F547(*uParam1, sParam2))
			{
				func_12(&(uParam0->f_253), 4194304);
				bVar2 = true;
			}
		}
		else
		{
			bVar2 = true;
		}
		if (!func_14(uParam0->f_253, 8388608))
		{
			if (ANIMSCENE::_0x1F0E401031E20146(*uParam1, sParam2))
			{
				func_12(&(uParam0->f_253), 8388608);
				bVar3 = true;
			}
		}
		else
		{
			bVar3 = true;
		}
		if (!bVar2 && !bVar3)
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(*uParam1, sParam2);
		}
		if (bParam7)
		{
			if (!func_233(uParam0->f_218[0], 50f, uParam0->f_239))
			{
				return 0;
			}
		}
		if (!bVar3 && bVar2)
		{
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*uParam1, sParam2, true);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam1, "internal_loop", bParam3, false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam1, "internal_loop_end", bParam4, false);
			return 0;
		}
		else if (bVar3)
		{
			if ((uParam0->f_258 == 0 && !bParam4) && ANIMSCENE::_0x8D81E7824B7753F7(*uParam1, sVar1, 1))
			{
				if (func_234(uParam1, uParam0->f_236))
				{
					uParam0->f_236 = sParam2;
					return 1;
				}
			}
			else if ((uParam0->f_258 == 1 && bParam4) && ANIMSCENE::_0x8D81E7824B7753F7(*uParam1, sVar0, 1))
			{
				if (func_234(uParam1, uParam0->f_236))
				{
					uParam0->f_236 = sParam2;
					return 1;
				}
			}
			else if ((bParam3 && uParam0->f_258 == 2) && ANIMSCENE::_0x8D81E7824B7753F7(*uParam1, "S_WaitLoop", 1))
			{
				if (func_234(uParam1, uParam0->f_236))
				{
					uParam0->f_236 = sParam2;
					return 1;
				}
			}
			else if (bParam4 && ENTITY::HAS_ANIM_EVENT_FIRED(&(uParam0->f_218[0]), -1527527524))
			{
				if (func_234(uParam1, uParam0->f_236))
				{
					uParam0->f_236 = sParam2;
					return 1;
				}
			}
			else if (!bParam6)
			{
				if (func_234(uParam1, uParam0->f_236))
				{
					uParam0->f_236 = sParam2;
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_81(int* iParam0, int iParam1, bool bParam2)
{
	if (iParam1 && !func_235(iParam0, 13))
	{
		func_236(iParam0, 0);
	}
	else
	{
		func_237(iParam0, 0);
	}
	if (func_238(iParam0->f_6))
	{
		if (bParam2)
		{
			func_239(&(iParam0->f_6), 0, 1);
		}
	}
}

char* func_82()
{
	return "pbl_sitting_p3_to_stand_buck";
}

int func_83(int iParam0, int iParam1)
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

void func_84(int iParam0, int iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, float fParam7, bool bParam8, int iParam9, float fParam10, float fParam11, int iParam12, int iParam13, float fParam14, float fParam15, int iParam16, float fParam17, int iParam18, bool bParam19, int iParam20, int iParam21, bool bParam22)
{
	struct<7> Var0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam2->f_1))
	{
		TASK::TASK_SCRIPTED_ANIMATION(iParam0, uParam2);
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		PLAYER::_0x2BEED53B912537D0(PLAYER::PLAYER_ID(), iParam1, -1f);
		Var0.f_1 = 1050253722;
		Var0.f_2 = 1067030938;
		Var0.f_5 = -1082130432;
		Var0.f_6 = -1082130432;
		Var0.f_3 = iParam16;
		Var0.f_1 = fParam14;
		Var0.f_2 = fParam15;
		Var0.f_4 = fParam17;
		Var0.f_5 = iParam20;
		Var0.f_6 = iParam21;
		if (bParam8)
		{
			Var0 = 0;
		}
		else
		{
			Var0 = 1;
		}
		PLAYER::_0xCA59808E51FD67C4(PLAYER::PLAYER_ID(), &Var0);
	}
	else
	{
		TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(iParam0, iParam1, iParam4, iParam5, iParam6, fParam7, iParam9, fParam10, fParam11, iParam12, iParam13);
	}
	if (bParam19)
	{
		PED::_0x7DE9692C6F64CFE8(iParam0, false, 0, 0);
	}
	if (bParam22)
	{
		func_240(iParam0, iParam1, iParam18);
	}
}

void func_85(char* sParam0)
{
	StringCopy(sParam0, "walk_and_talk", 64);
	StringCopy(&(sParam0->f_8), "WALK_AND_TALK_REQUEST", 64);
	CAM::_0x6A4D224FC7643941(sParam0);
}

char* func_86()
{
	return "pbl_sitting_p3_to_stand_hey";
}

char* func_87()
{
	return "pbl_sitting_p3_to_stand";
}

char* func_88()
{
	return "pbl_sitting_p1_beg_ft";
}

char* func_89()
{
	return "pbl_sitting_p1_beg_lt";
}

char* func_90()
{
	return "pbl_sitting_p1_beg_rt";
}

char* func_91()
{
	return "pbl_sitting_p1_beg_qk";
}

char* func_92()
{
	return "pbl_sitting_p1_cmon";
}

char* func_93()
{
	return "pbl_sitting_p1_drink";
}

char* func_94()
{
	return "pbl_sitting_p1_fella";
}

char* func_95()
{
	return "pbl_sitting_p1_loop01_cough";
}

char* func_96()
{
	return "pbl_sitting_p1_gotta";
}

char* func_97()
{
	return "pbl_sitting_p1_hungry";
}

char* func_98()
{
	return "pbl_sitting_p1_few";
}

char* func_99()
{
	return "pbl_sitting_p2_in_army";
}

char* func_100()
{
	return "pbl_sitting_p1_loop03_stump";
}

char* func_101()
{
	return "pbl_sitting_p1_someone";
}

char* func_102()
{
	return "pbl_sitting_p2_bad";
}

char* func_103()
{
	return "pbl_sitting_p2_drink";
}

char* func_104()
{
	return "pbl_sitting_p1_loop02_scratch";
}

int func_105(var uParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(&(uParam0->f_218[0])))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return 0;
	}
	if (func_241(&(uParam0->f_145)))
	{
		if (!func_14(uParam0->f_253, 134217728))
		{
			func_12(&(uParam0->f_253), 134217728);
		}
		return 1;
	}
	if (uParam0->f_239 >= 16f)
	{
		return 1;
	}
	return 0;
}

void func_106(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
	}
	if (bParam8)
	{
		PED::SET_PED_RESET_FLAG(iParam0, 229, true);
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		if (bParam3 && PED::_0xD5FE956C70FF370B(iParam0))
		{
			PED::_0x7DE9692C6F64CFE8(iParam0, false, 0, 0);
		}
		func_242(bParam4, bParam5, bParam6, bParam7, bParam3, bParam9, bParam10);
		if (bParam2)
		{
			PED::SET_PED_RESET_FLAG(iParam0, 188, true);
		}
	}
}

int func_107(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	switch (iParam0)
	{
		case 1:
			iVar0 = 64;
			break;
		case 3:
			iVar0 = 192;
			break;
		case 2:
			iVar0 = 208;
			break;
		case 4:
			iVar0 = 212;
			break;
		case 5:
			iVar0 = 77;
			break;
		case 7:
			iVar0 = 76;
			break;
		case 6:
			iVar0 = 96;
			break;
		default:
			iVar0 = 1;
			break;
	}
	iVar0 |= 16777216;
	if (iParam1 != 0)
	{
		iVar0 = (iVar0 || iParam1);
	}
	if (iParam2 != 0)
	{
		iVar0 = (iVar0 - (iVar0 && iParam2));
	}
	return iVar0;
}

void func_108(var uParam0, var uParam1, bool bParam2)
{
	uParam0->f_352 = uParam1;
	if (bParam2)
	{
		func_243(&(uParam0->f_296), 0);
	}
}

char* func_109()
{
	return "pbl_base_reset_stand";
}

void func_110(int iParam0, bool bParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	PED::_0xAAC0EE3B4999ABB5(iParam0, 0);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		if (PLAYER::_0xD1F6B912785BFD35(PLAYER::PLAYER_ID()))
		{
			PLAYER::_0x908D4B72854C8F62(PLAYER::PLAYER_ID());
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 43, false);
		PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "WalkAndTalk");
	}
	PED::_0x9E66708B2B41F14A(iParam0, -1);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		PLAYER::_0xC4873B053054C04B(PLAYER::PLAYER_ID(), 0, 1050253722, 1067030938, 0, 0, -1082130432, -1082130432);
	}
	else
	{
		PED::_0x15F4732C357B1D6D(iParam0, PLAYER::PLAYER_ID(), 6);
	}
	if (bParam1)
	{
		TASK::CLEAR_PED_SECONDARY_TASK(iParam0);
	}
}

void func_111(int iParam0, bool bParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	PED::_0xAAC0EE3B4999ABB5(iParam0, 0);
	PED::_0x9E66708B2B41F14A(iParam0, -1);
	if (bParam1)
	{
		TASK::CLEAR_PED_SECONDARY_TASK(iParam0);
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 43, false);
	}
	else
	{
		PED::_0x15F4732C357B1D6D(iParam0, PLAYER::PLAYER_ID(), 6);
	}
}

void func_112(char* sParam0)
{
	if (CAM::_0x927B810E43E99932(sParam0))
	{
		CAM::_0x0A5A4F1979ABB40E(sParam0);
	}
	CAM::_0x798BE43C9393632B(sParam0);
}

char* func_113()
{
	return "pbl_standing_p3_dont";
}

char* func_114()
{
	return "pbl_standing_p3_im";
}

char* func_115()
{
	return "pbl_standing_p4_hey";
}

char* func_116()
{
	return "pbl_standing_p4_just";
}

int func_117(var uParam0)
{
	if ((ENTITY::IS_ENTITY_DEAD(Global_35) || ENTITY::IS_ENTITY_DEAD(&(uParam0->f_218[0]))) || !VOLUME::_0x92A78D0BEDB332A3(uParam0->f_226))
	{
		return 1024;
	}
	if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_226, true, 0))
	{
		if (func_14(uParam0->f_254, 1))
		{
			return 1;
		}
		else if (func_14(uParam0->f_254, 2))
		{
			return 2;
		}
	}
	else if (!func_14(uParam0->f_254, 8))
	{
		func_12(&(uParam0->f_254), 8);
		return 8;
	}
	return 1024;
}

void func_118(var uParam0, bool bParam1)
{
	if (*uParam0 > -1 && *uParam0 < 4)
	{
		if ((*Global_1955500)[*uParam0 /*16*/])->f_3 == SCRIPTS::GET_ID_OF_THIS_THREAD()
		{
			if (func_244(1, 1) == *uParam0)
			{
				func_245(-1, 1, 1);
			}
			if (bParam1)
			{
				func_246(((*Global_1955500)[*uParam0 /*16*/])->f_1);
			}
			(*Global_1955500)[*uParam0 /*16*/] = 0;
			((*Global_1955500)[*uParam0 /*16*/])->f_2 = 0;
			((*Global_1955500)[*uParam0 /*16*/])->f_3 = 0;
			*uParam0 = -1;
		}
	}
}

char* func_119()
{
	return "PL_FriendResPos";
}

char* func_120()
{
	return "PL_FriendResNeg";
}

void func_121(var uParam0, int iParam1, char* sParam2, float fParam3)
{
	if (!func_14(uParam0->f_253, 67108864))
	{
		if (((ANIMSCENE::_0x25557E324489393C(iParam1) && ANIMSCENE::_0xCBFC7725DE6CE2E0(iParam1, 0)) && ANIMSCENE::_0x1F0E401031E20146(iParam1, sParam2)) && ANIMSCENE::_0x3FBC3F51BF12DFBF(iParam1) > fParam3)
		{
			func_247(12, 0, 0, "", &(uParam0->f_218[0]), 0, 1065353216, 0);
			func_12(&(uParam0->f_253), 67108864);
		}
	}
}

char* func_122()
{
	return "pbl_stand_p1_ask_buck";
}

char* func_123()
{
	return "PL_HugResNeg";
}

void func_124(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
	}
	if (bParam8)
	{
		PED::SET_PED_RESET_FLAG(iParam0, 229, true);
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		if (bParam3 && PED::_0xD5FE956C70FF370B(iParam0))
		{
			PED::_0x7DE9692C6F64CFE8(iParam0, false, 0, 0);
		}
		func_242(bParam4, bParam5, bParam6, bParam7, bParam3, bParam9, bParam10);
		if (bParam2)
		{
			PED::SET_PED_RESET_FLAG(iParam0, 188, true);
		}
	}
}

void func_125(var uParam0, var uParam1, var uParam2)
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

	if (!VOLUME::_0x92A78D0BEDB332A3(*uParam0))
	{
		return;
	}
	if (!ITEMSET::IS_ITEMSET_VALID(*uParam1))
	{
		*uParam1 = ITEMSET::CREATE_ITEMSET(true);
		*uParam2 = 0;
	}
	if (!*uParam2)
	{
		iVar0 = ITEMSET::CREATE_ITEMSET(true);
		iVar3 = ENTITY::_0x886171A12F400B89(*uParam0, iVar0, 1);
		if (iVar3 > 0)
		{
			iVar4 = 0;
			while (iVar4 < iVar3)
			{
				iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar0);
				iVar2 = MISC::_0x3FFB15534067DCD4(iVar1);
				if (ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					ITEMSET::ADD_TO_ITEMSET(iVar1, *uParam1);
				}
				iVar4++;
			}
		}
		ITEMSET::DESTROY_ITEMSET(iVar0);
		*uParam2 = 1;
	}
	if (*uParam2)
	{
		iVar7 = ITEMSET::GET_ITEMSET_SIZE(*uParam1);
		if (iVar7 > 0)
		{
			iVar8 = 0;
			while (iVar8 < iVar7)
			{
				iVar5 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar8, *uParam1);
				iVar6 = MISC::_0x3FFB15534067DCD4(iVar5);
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Global_35, iVar6, true);
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iVar6, Global_35, true);
				iVar8++;
			}
		}
	}
}

void func_126(bool bParam0)
{
	int iVar0;

	iVar0 = func_248();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (bParam0)
		{
			PATHFIND::_0x6DAD6630AE4A74CB(iVar0, 1);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Global_35, iVar0, true);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iVar0, Global_35, true);
		}
		else
		{
			PATHFIND::_0x6DAD6630AE4A74CB(iVar0, 0);
		}
	}
}

int func_127(var uParam0, var uParam1, int* iParam2, float fParam3)
{
	int iVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_DEAD(*uParam0) || ENTITY::IS_ENTITY_DEAD(*uParam1))
	{
		return 0;
	}
	PED::SET_PED_CONFIG_FLAG(*uParam1, 174, true);
	if (!func_249(*uParam1, *uParam0, 0.9f))
	{
		if (!func_83(*uParam1, -875674219))
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(*uParam1, *uParam0, 0, -1082130432, -1082130432, -1082130432);
		}
	}
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), false, 0, false, false);
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), false, 1, false, false);
	TASK::TASK_SWAP_WEAPON(Global_35, 0, 1, 0, 0);
	if (fParam3 == 0f)
	{
		fParam3 = func_250(*uParam0, *uParam1, 1, 1);
	}
	else if (fParam3 > 1.5f)
	{
		if (!func_83(*uParam0, 242628503))
		{
			TASK::OPEN_SEQUENCE_TASK(iParam2);
			if (func_251(*uParam0) || PED::IS_PED_ON_MOUNT(*uParam0))
			{
				TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
			}
			else if (PED::IS_PED_IN_ANY_VEHICLE(*uParam0, true))
			{
				if (func_232(*uParam0, *uParam1, 1f) == 3)
				{
					iVar0 = 131072;
				}
				else
				{
					iVar0 = 262144;
				}
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, iVar0);
			}
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*uParam1, 0f, 1f, 0f), 1f, 20000, 0.25f, false, 40000f);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, *uParam1, 0, -1082130432, -1082130432, -1082130432);
			TASK::CLOSE_SEQUENCE_TASK(*iParam2);
			TASK::TASK_PERFORM_SEQUENCE(*uParam0, *iParam2);
			TASK::CLEAR_SEQUENCE_TASK(iParam2);
			PED::SET_PED_KEEP_TASK(*uParam0, true);
		}
	}
	else if (func_251(*uParam0) || PED::IS_PED_ON_MOUNT(*uParam0))
	{
		if (!func_83(*uParam0, 501393341))
		{
			TASK::TASK_DISMOUNT_ANIMAL(*uParam0, 0, 0, 0, 0, 0);
		}
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(*uParam0, true))
	{
		if (!func_83(*uParam0, -828834893))
		{
			if (func_232(*uParam0, *uParam1, 1f) == 3)
			{
				iVar1 = 131072;
			}
			else
			{
				iVar1 = 262144;
			}
			TASK::TASK_LEAVE_ANY_VEHICLE(*uParam0, 0, iVar1);
		}
	}
	else if (!func_249(*uParam0, *uParam1, 0.9f))
	{
		if (!func_83(*uParam0, -875674219))
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(*uParam0, *uParam1, 0, -1082130432, -1082130432, -1082130432);
		}
	}
	if (((func_249(*uParam1, *uParam0, 0.9f) && func_249(*uParam0, *uParam1, 0.9f)) && !PED::IS_PED_ON_MOUNT(*uParam0)) && fParam3 < 1.5f)
	{
		return 1;
	}
	return 0;
}

void func_128(var uParam0, vector3 vParam1, float fParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	int iVar7;
	int iVar8;

	iVar0 = 0;
	iVar2 = ITEMSET::CREATE_ITEMSET(false);
	iVar8 = ENTITY::_0x59B57C4B06531E1E(vParam1, fParam4, iVar2, 1);
	iVar7 = 0;
	while (iVar7 < iVar8)
	{
		iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar7, iVar2);
		iVar0 = MISC::_0x3FFB15534067DCD4(iVar1);
		if (iVar0 != Global_35 && iVar0 != &uParam0->f_218[0])
		{
			if (func_252(iVar0))
			{
				iVar3 = 0;
				while (iVar3 <= 5)
				{
					if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), iVar3, &vVar4, 1, 1077936128, 0))
					{
						if (func_253(iVar0, vVar4, 1) > fParam4)
						{
							ENTITY::SET_ENTITY_COORDS(iVar0, vVar4, true, false, true, true);
						}
						else
						{
							iVar3++;
						}
						iVar7++;
						ITEMSET::_0x20A4BF0E09BEE146(iVar2);
						ITEMSET::CLEAN_ITEMSET(iVar2);
						ITEMSET::DESTROY_ITEMSET(iVar2);
					}
				}
			}
		}
	}

void func_129()
{
	Global_1905944->f_5695 = 1;
}

int func_130(var uParam0)
{
	if ((ENTITY::IS_ENTITY_DEAD(Global_35) || ENTITY::IS_ENTITY_DEAD(&(uParam0->f_218[0]))) || !VOLUME::_0x92A78D0BEDB332A3(uParam0->f_226))
	{
		return 1024;
	}
	if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_226, true, 0))
	{
		if (func_14(uParam0->f_254, 16))
		{
			return 16;
		}
		else if (func_14(uParam0->f_254, 32))
		{
			return 32;
		}
	}
	else if (!func_14(uParam0->f_254, 128))
	{
		func_12(&(uParam0->f_254), 128);
		return 128;
	}
	return 1024;
}

int func_131(var uParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	bVar0 = ANIMSCENE::_0x477122B8D05E7968(*uParam0, 1, 0);
	bVar1 = ANIMSCENE::_0xCBFC7725DE6CE2E0(*uParam0, 0);
	if (bVar0 || bVar1)
	{
		return 1;
	}
	bVar3 = ANIMSCENE::_0x25557E324489393C(*uParam0);
	bVar2 = ANIMSCENE::_0x59606519FF9D3EC2(*uParam0, 1);
	if ((bVar3 && !bVar0) && !bVar2)
	{
		ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
		return 0;
	}
	if (bVar2)
	{
	}
	if (!bVar3)
	{
	}
	return 0;
}

void func_132(var uParam0, var uParam1, int iParam2, float fParam3, float fParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return;
	}
	if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(iParam2, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), fParam3))
	{
		return;
	}
	*uParam1 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(iParam2, *uParam0, fParam4, fParam3, fParam3, -1f, -1f, 180f, 0, 0, -1, -1);
}

void func_133(var uParam0, var uParam1, int iParam2, float fParam3, bool bParam4)
{
	if (bParam4)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			return;
		}
		if (!EVENT::IS_SHOCKING_EVENT_IN_SPHERE(iParam2, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), fParam3))
		{
			return;
		}
	}
	EVENT::REMOVE_SHOCKING_EVENT(*uParam1);
}

void func_134(int iParam0, int iParam1)
{
	if (&Global_40.f_11623[iParam0 /*8*/] != iParam1)
	{
		Global_40.f_11623[iParam0 /*8*/] = iParam1;
	}
}

var func_135()
{
	return &Global_1899515;
}

int func_136(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	vector3 vVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return 0;
	}
	if (PED::IS_PED_USING_ANY_SCENARIO(*uParam1))
	{
		return 1;
	}
	if (AUDIO::_0xA2CAC9DEF0195E6F(1))
	{
		AUDIO::_0x36559148B78853B3(1, 1, 0);
	}
	if (!func_83(*uParam1, 242628503))
	{
		func_19(uParam0, 0, 0, 0, 0, 0, 0);
		func_19(uParam0, 1, 1, 0, 0, 0, 0);
		if (iParam2 == 0)
		{
			if (((func_254(26, 0) || func_254(27, 0)) || SCRIPTS::IS_THREAD_ACTIVE(((*Global_1347702)[26 /*49*/])->f_42, false)) || SCRIPTS::IS_THREAD_ACTIVE(((*Global_1347702)[27 /*49*/])->f_42, false))
			{
				iParam2 = 1;
			}
		}
		vVar1 = { func_255(iParam2) };
		TASK::_0x42CFD8FD8CC8DC69(*uParam1, func_256(iParam2));
		if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_231))
		{
			VOLUME::_0x43F867EF5C463A53(uParam0->f_231);
		}
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar1, 1f, -1, 6f, 6291460, 40000f);
		TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, vVar1, 5f, -1, 0, 0, 1, 0);
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		TASK::TASK_PERFORM_SEQUENCE(*uParam1, iVar0);
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		PED::SET_PED_KEEP_TASK(*uParam1, true);
	}
	return 0;
}

float func_137(var uParam0)
{
	if (!func_150(uParam0))
	{
		return 0f;
	}
	if (func_257(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_258() - uParam0->f_1);
}

char* func_138()
{
	return "pbl_sitting_p1_exit02";
}

void func_139(var uParam0, int iParam1)
{
	func_213(uParam0, iParam1);
}

bool func_140(var uParam0, char* sParam1, int iParam2, int iParam3, var uParam4, int iParam5)
{
	struct<7> Var0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_3 = iParam2;
	Var0.f_6 = iParam5;
	Var0.f_1 = uParam4;
	Var0.f_4 = iParam3;
	return func_259(uParam0, &Var0);
}

void func_141(var uParam0)
{
	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_18))
	{
		ITEMSET::DESTROY_ITEMSET(uParam0->f_18);
	}
	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_19))
	{
		ITEMSET::DESTROY_ITEMSET(uParam0->f_19);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_20))
	{
		VOLUME::_0x43F867EF5C463A53(uParam0->f_20);
	}
	if (func_150(&(uParam0->f_13)))
	{
		func_78(&(uParam0->f_13));
	}
}

void func_142(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
	}
	if (((*Global_1396257)[iParam0 /*638*/])->f_631)
	{
		func_260(0, -1);
	}
	func_261();
	((*Global_1396257)[iParam0 /*638*/])->f_631 = 0;
	Global_1415398->f_2 = (Global_1415398->f_2 - 1);
	Global_1935183->f_28 = 0;
}

void func_143(var uParam0)
{
	if (!PED::_0x91A5F9CBEBB9D936(*uParam0))
	{
		return;
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(*uParam0, false);
}

void func_144(int iParam0, int iParam1)
{
	if (!func_40(iParam0))
	{
		return;
	}
	func_262(iParam0, iParam1);
}

void func_145(int iParam0, int iParam1)
{
	if (!func_40(iParam0))
	{
		return;
	}
	func_263(iParam0, iParam1);
}

void func_146(var uParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_224))
	{
		func_13(uParam0->f_224);
		VOLUME::_0x43F867EF5C463A53(uParam0->f_224);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_227))
	{
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_227);
		POPULATION::_0xA1CFB35069D23C23(uParam0->f_227);
		VOLUME::_0x43F867EF5C463A53(uParam0->f_227);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_226))
	{
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_226);
		POPULATION::_0xA1CFB35069D23C23(uParam0->f_226);
		VOLUME::_0x43F867EF5C463A53(uParam0->f_226);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_228))
	{
		VOLUME::_0x43F867EF5C463A53(uParam0->f_228);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_229))
	{
		VOLUME::_0x43F867EF5C463A53(uParam0->f_229);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_225))
	{
		VOLUME::_0x43F867EF5C463A53(uParam0->f_225);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_230))
	{
		VOLUME::_0x43F867EF5C463A53(uParam0->f_230);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_231))
	{
		VOLUME::_0x43F867EF5C463A53(uParam0->f_231);
	}
}

int func_147(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 > -1 && iParam0 < 4)
	{
		if (!bParam1 || VOLUME::_0x92A78D0BEDB332A3(((*Global_1955500)[iParam0 /*16*/])->f_1))
		{
			if (!bParam2 || ENTITY::DOES_ENTITY_EXIST(((*Global_1955500)[iParam0 /*16*/])->f_2))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_148(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		if (func_264())
		{
			return 1;
		}
	}
	if (!PED::IS_PED_INJURED(iParam1))
	{
		if (BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam1, true, false)) < 18f || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam1))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		if (func_265(0) == 7 || func_266())
		{
			return 1;
		}
	}
	if (func_267(&(((*Global_1396257)[iParam0 /*638*/])->f_626), 1024))
	{
		return 1;
	}
	return 0;
}

int func_149(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_150(var uParam0)
{
	return func_268(*uParam0, 1);
}

void func_151(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_258() - fParam1);
	func_269(uParam0, 1);
	func_270(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_152(var uParam0)
{
	if (!func_150(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_257(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_258() - uParam0->f_1);
}

bool func_153(int iParam0)
{
	return iParam0 != -15;
}

void func_154(int iParam0)
{
	(Global_40.f_11623[iParam0 /*8*/])->f_5++;
	(Global_40.f_11623[iParam0 /*8*/])->f_2 = func_135();
}

int func_155(int iParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	if ((MISC::GET_FRAME_COUNT() % 10) == 0)
	{
		if (uParam2->f_1)
		{
			if (((func_265(0) == 1 || func_265(0) == 2) || func_265(0) == 8) || func_271(&Global_1935630, 2048))
			{
				func_12(uParam2, 2);
			}
		}
		if (uParam2->f_2)
		{
			if (func_265(0) == 11)
			{
				func_12(uParam2, 4);
			}
		}
		if (uParam2->f_4)
		{
			if (func_265(0) == 6)
			{
				func_12(uParam2, 8);
			}
		}
		if (uParam2->f_5)
		{
			if (Global_1394141->f_1328)
			{
				func_12(uParam2, 16);
			}
		}
	}
	if ((MISC::GET_FRAME_COUNT() % 30) == 0)
	{
		if (uParam2->f_6)
		{
			if (!(func_272(((*(*Global_1396257)[iParam0 /*638*/])[iParam1 /*48*/])->f_19) == 0 && func_272(((*(*Global_1396257)[iParam0 /*638*/])[iParam1 /*48*/])->f_20) == 23))
			{
				iVar0 = func_135();
				iVar1 = ((*(*Global_1396257)[iParam0 /*638*/])[iParam1 /*48*/])->f_19;
				iVar2 = ((*(*Global_1396257)[iParam0 /*638*/])[iParam1 /*48*/])->f_20;
				if (func_272(iVar2) > func_272(iVar1))
				{
					if (func_272(iVar0) > func_272(iVar2) + 1 || func_272(iVar0) < func_272(iVar1))
					{
						func_12(uParam2, 32);
					}
				}
				else if (func_272(iVar0) > func_272(iVar2) + 1 && func_272(iVar0) < func_272(iVar1))
				{
					func_12(uParam2, 32);
				}
			}
		}
		if (uParam2->f_7)
		{
			bVar3 = false;
			if (((*(*Global_1396257)[iParam0 /*638*/])[iParam1 /*48*/])->f_40 != 4)
			{
				if (&((*(*Global_1396257)[iParam0 /*638*/])[iParam1 /*48*/])->f_5[0] != -1 || &((*(*Global_1396257)[iParam0 /*638*/])[iParam1 /*48*/])->f_5[1] != -1)
				{
					if (((func_273(&(((*(*Global_1396257)[iParam0 /*638*/])[iParam1 /*48*/])->f_5[0])) || func_273(&(((*(*Global_1396257)[iParam0 /*638*/])[iParam1 /*48*/])->f_5[1]))) || func_274(&(((*(*Global_1396257)[iParam0 /*638*/])[iParam1 /*48*/])->f_5[0]))) || func_274(&(((*(*Global_1396257)[iParam0 /*638*/])[iParam1 /*48*/])->f_5[1])))
					{
						bVar3 = true;
					}
				}
				if (!bVar3)
				{
					if (!func_275(((*(*Global_1396257)[iParam0 /*638*/])[iParam1 /*48*/])->f_40))
					{
						func_12(uParam2, 64);
					}
				}
			}
		}
		if (uParam2->f_8)
		{
			if (MISC::GET_GAME_TIMER() > uParam2->f_17)
			{
				if (func_276(&uParam3, &(uParam2->f_18), uParam2->f_11, uParam2->f_12) || func_277(&uParam3, &(uParam2->f_20), &(uParam2->f_19), uParam2->f_11, uParam2->f_12, 2048))
				{
					if (!func_150(&(uParam2->f_13)))
					{
						func_151(&(uParam2->f_13), 0f);
					}
					else if (func_159(&(uParam2->f_13)) >= uParam2->f_16)
					{
						func_78(&(uParam2->f_13));
						func_12(uParam2, 512);
					}
					uParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
				else
				{
					if (func_150(&(uParam2->f_13)))
					{
						func_78(&(uParam2->f_13));
					}
					uParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
			}
		}
		if (uParam2->f_9)
		{
			if (func_278())
			{
				func_12(uParam2, 1024);
			}
		}
		if (uParam2->f_10)
		{
			if (func_279())
			{
				func_12(uParam2, 2048);
			}
		}
		if (func_271(&Global_1935630, 16384) || Global_1430231->f_4)
		{
			func_12(uParam2, 128);
		}
		if (func_267(&(((*Global_1396257)[iParam0 /*638*/])->f_626), 2048))
		{
			func_12(uParam2, 256);
		}
	}
	if ((((((((((func_14(*uParam2, 2) || func_14(*uParam2, 4)) || func_14(*uParam2, 8)) || func_14(*uParam2, 16)) || func_14(*uParam2, 32)) || func_14(*uParam2, 64)) || func_14(*uParam2, 128)) || func_14(*uParam2, 256)) || func_14(*uParam2, 512)) || func_14(*uParam2, 1024)) || func_14(*uParam2, 2048))
	{
		return 1;
	}
	return 0;
}

int func_156(var uParam0)
{
	if (((((func_14(*uParam0, 2) || func_14(*uParam0, 4)) || func_14(*uParam0, 16)) || func_14(*uParam0, 128)) || func_14(*uParam0, 1024)) || func_14(*uParam0, 2048))
	{
		return 1;
	}
	return 0;
}

int func_157(int iParam0)
{
	if (!func_280(iParam0))
	{
		return 0;
	}
	return ((*Global_1888801)[iParam0 /*35*/])->f_3;
}

void func_158(var uParam0, int iParam1)
{
	if (iParam1 || !func_150(uParam0))
	{
		func_18(uParam0);
	}
}

int func_159(var uParam0)
{
	if (!func_150(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000f));
	}
	if (func_257(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_184() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

Vector3 func_160(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

int func_161(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_RESET_FLAG(iParam0, 49, true);
		return 1;
	}
	return 0;
}

bool func_162(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam3 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam1))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iParam1, true, 0);
}

void func_163(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		TASK::TASK_CLEAR_LOOK_AT(iParam0);
	}
}

void func_164(var uParam0, bool bParam1, int iParam2)
{
	func_281(iParam2);
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
		uParam0->f_13 = func_282(0);
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
							func_224(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_283(1))
						{
							func_224(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_283(1) || *uParam0 & 8192 != 0))
				{
					func_223(uParam0, 33554432);
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
			if (func_284(uParam0))
			{
				uParam0->f_15 = func_184();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_184() - uParam0->f_15) > 500)
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
	func_285(uParam0);
}

int func_165(int iParam0, var uParam1)
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
			if (!func_286(iParam0, uParam1, iVar2))
			{
				return 0;
			}
			if (func_287(iParam0, iVar2) <= func_288(uParam1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_166(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_289(iParam2, 1, 1, 1, 0))
	{
		func_224(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_290(uParam1, 1);
	func_291();
}

int func_167(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_292(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_293(uParam1);
			if (func_294(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = func_295(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_290(uParam1, 1);
						return 1;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_290(uParam1, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_168(int iParam0, int iParam1, var uParam2)
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
	if (func_296(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_293(uParam2);
		if (func_294(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > func_295(uParam2)
				{
					func_290(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_169(int iParam0, var uParam1)
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
	if (func_286(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_295(uParam1)
		{
			fVar3 = func_293(uParam1);
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

int func_170(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_297(bParam1, iParam2, bParam3);
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

int func_171(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_184();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return 1;
	}
	return 0;
}

int func_172(var uParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_298(uParam2);
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
			if (func_180(uParam2, iParam1))
			{
				func_290(uParam2, 1);
				return 1;
			}
		}
	}
	return 0;
}

int func_173(var uParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_12 < IntToFloat(func_299(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && !WEAPON::_0x5809DBCA0A37C82B(Global_1935630->f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_180(uParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_290(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_174(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_300(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(217247011, vVar0, uParam2->f_22))
				{
					func_290(uParam2, 1);
					return 1;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(956330317, vVar0, uParam2->f_27))
				{
					func_290(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-966930978, vVar0, uParam2->f_22))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("weapon_thrown_dynamite"), uParam2->f_26, &vVar4, 0, 0);
					if (func_301(iParam1, vVar0, vVar4))
					{
						func_290(uParam2, 1);
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
					func_290(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-966930978, vVar0, uParam2->f_22))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("weapon_thrown_dynamite"), uParam2->f_26, &vVar7, 0, 0);
					if (func_301(iParam1, vVar0, vVar7))
					{
						func_290(uParam2, 1);
						return 1;
					}
				}
				break;
		}
	}
	return 0;
}

int func_175(int iParam0, var uParam1)
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
		if (!func_286(iParam0, uParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_302(&(Global_1935630->f_34[iVar0]));
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_252(&(Global_1935630->f_34[iVar0])))
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
			if (func_303(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_304(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_305(uParam1, iParam0, fVar1, iVar0))
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

int func_176(int iParam0, var uParam1)
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

int func_177(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_184();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

int func_178(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_306(iVar0, &iVar2))
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
	if (func_307(iVar0, iParam0))
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

int func_179(var uParam0, int iParam1)
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

int func_180(var uParam0, int iParam1)
{
	if (func_308(uParam0))
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

int func_181(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return 1;
		}
		if (func_250(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_182()
{
}

int func_183(var uParam0, int iParam1)
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
		if (func_309(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_184();
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
						if (func_253(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_9 = func_184();
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

int func_184()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

int func_185()
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
	if ((func_184() - Global_1935630->f_43) >= 10000)
	{
		return 0;
	}
	return 1;
}

int func_186(var uParam0, int iParam1)
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
	fVar0 = func_288(uParam0);
	if (uParam0->f_12 > func_310(uParam0) && uParam0->f_12 > fVar0)
	{
		return 0;
	}
	iVar2 = func_311(iParam1);
	iVar1 = func_312(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, Global_35, 1, 0) == 1)) || ((PED::_0x06087579E7AA85A9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, uParam0->f_14, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, uParam0->f_14, 1, 0) == 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_187(int iParam0, int iParam1, var uParam2)
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
	return func_313(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

int func_188(int iParam0, var uParam1)
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
		if (func_314(iParam0, uParam1, 1))
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
					if (!func_315(uParam1, iParam0))
					{
						if (func_253(iVar4, Global_36, 1) < 7f)
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

int func_189(int iParam0, var uParam1)
{
	if (!func_316(0))
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

int func_190(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_184();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_191(int iParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_192(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_184();
	}
	else if (func_184() - uParam1->f_4) > func_317(uParam1)
	{
		return func_318(iParam0, uParam1, 0, -1082130432);
	}
	return 0;
}

int func_193(var uParam0, int iParam1)
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

void func_194(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_195(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_319(vParam0))
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
			if (func_320(vVar2, vParam0, 2f, 1))
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

void func_196(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_239(&(((*uParam1)[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			func_243(iParam0, 0);
		}
	}
}

void func_197(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_238(((*uParam0)[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET(uParam0[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_239(&(((*uParam0)[iVar0 /*17*/])->f_6), 1, 1);
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

struct<2> func_198(int iParam0)
{
	struct<2> Var0;

	switch (iParam0)
	{
		case 0:
			Var0 = "INTERACT_GREET";
			Var0.f_1 = -163964935;
			break;
		case 1:
			Var0 = "INTERACT_INSULT";
			Var0.f_1 = 648122183;
			break;
		case 2:
			Var0 = "GREET_POS";
			Var0.f_1 = -163964935;
			break;
		case 3:
			Var0 = "GREET_NEG";
			Var0.f_1 = 648122183;
			break;
		case 4:
			Var0 = "GREET_POS";
			Var0.f_1 = -163964935;
			break;
		case 5:
			Var0 = "GREET_NEG";
			Var0.f_1 = 648122183;
			break;
		case 6:
			Var0 = "BM1_UC_NAME";
			Var0.f_1 = -163964935;
			break;
		case 7:
			Var0 = "BM1_UC_NONAME";
			Var0.f_1 = 648122183;
			break;
		case 8:
			Var0 = "BM1_UC_GIVE";
			Var0.f_1 = -163964935;
			break;
		case 9:
			Var0 = "GREET_NEG";
			Var0.f_1 = 648122183;
			break;
		case 11:
			Var0 = "BM1_UC_CZY";
			Var0.f_1 = -163964935;
			break;
		case 10:
			Var0 = "BM1_UC_NOCZY";
			Var0.f_1 = 648122183;
			break;
		case 12:
			Var0 = "BM1_UC_SURE";
			Var0.f_1 = -163964935;
			break;
		case 13:
			Var0 = "BM1_UC_NO";
			Var0.f_1 = 648122183;
			break;
		case 14:
			Var0 = "BM1_UC_NO";
			Var0.f_1 = -163964935;
			break;
		case 15:
			Var0 = "GREET_POS";
			Var0.f_1 = -163964935;
			break;
		case 16:
			Var0 = "GREET_NEG";
			Var0.f_1 = 648122183;
			break;
	}
	return Var0;
}

void func_199(int* iParam0, char* sParam1)
{
	if (func_238(iParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		func_321(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_237(iParam0, 1);
}

void func_200(int* iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_235(iParam0, 4))
		{
			func_239(&(iParam0->f_6), 1, 1);
			func_236(iParam0, 4);
		}
	}
	else if (func_235(iParam0, 4))
	{
		func_237(iParam0, 4);
		func_236(iParam0, 14);
	}
}

void func_201(var uParam0)
{
	struct<2> Var0;
	var uVar2;
	int iVar3;

	Var0 = { func_198(0) };
	func_323(uParam0->f_317[0 /*17*/], Var0, func_322(), Var0.f_1, 0, 0, 0, 1, 0);
	Var0 = { func_198(1) };
	uVar2 = func_324(uParam0, &iVar3);
	func_323(uParam0->f_317[1 /*17*/], Var0, uVar2, Var0.f_1, 0, 0, 0, 1, iVar3);
	func_325(&(uParam0->f_218[0]), &(uParam0->f_317), 15f, 2, 0, 0, 0, 0, 0);
	func_108(uParam0, func_107(3, 0, 0), 1);
	func_81(uParam0->f_317[0 /*17*/], 0, 0);
	func_81(uParam0->f_317[1 /*17*/], 0, 0);
}

var func_202(var uParam0, int* iParam1, float fParam2, var uParam3, int iParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	var uVar0;
	var uVar1;

	uVar0 = iParam9;
	func_326(&uVar0);
	if (func_327(uVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	uVar1 = func_204(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_327(uVar0, 134217728))
	{
		func_328(iParam1, uParam3, uParam0);
	}
	if (!*iParam4)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 25))
		{
			if (MISC::IS_BIT_SET(*iParam1, 24))
			{
				if (!func_329(558))
				{
					func_330(558, 0);
				}
				MISC::SET_BIT(iParam1, 24);
				MISC::SET_BIT(iParam1, 25);
			}
		}
	}
	return uVar1;
}

int func_203(var uParam0, bool bParam1, bool bParam2)
{
	if (!bParam1 || func_238(uParam0->f_6))
	{
		if (MISC::IS_BIT_SET(*uParam0, 0))
		{
			if (!bParam2)
			{
				return 1;
			}
			if (func_331(uParam0->f_6, bParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_204(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		func_326(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::_0x92A78D0BEDB332A3(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar8 = func_332(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
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
			func_18(&(iParam1->f_13));
		}
		if (func_333(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_334(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_204(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_335(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317, true))
						{
							func_336(*uParam0, 1, 1);
						}
					}
					else if (func_337(iParam1, 22))
					{
						func_336(*uParam0, 0, 1);
					}
				}
				if (func_338(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_339(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_340(iParam8);
					if (func_341(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET(uParam3[iParam1->f_1 /*17*/], 20))
								{
									func_342(uParam3);
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
					func_343(iParam1, uParam3, fVar8);
					if (func_344(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						func_197(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_345(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_338(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_346(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_341(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_339(uParam0, func_338(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_340(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_197(uParam3, 0, 0, 1, 1);
					}
					func_347(iParam1, 1);
				}
				func_343(iParam1, uParam3, fVar8);
				if (func_345(uParam0, iParam1, fParam4, bVar6))
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
			func_15(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_205()
{
	func_348();
	func_349(-1, 0, 0, 0, 0);
	func_350(60, 0, 1);
}

void func_206(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return;
	}
	if (func_212(*uParam2, iParam3))
	{
		return;
	}
	(Global_40.f_11623[iParam0 /*8*/])->f_6++;
	if ((Global_40.f_11623[iParam0 /*8*/])->f_6 == 1 && func_352(func_351(-1342635612)) < 5)
	{
		func_353(func_351(-1342635612), 1);
	}
	(Global_40.f_11623[iParam0 /*8*/])->f_3 = func_135();
	func_194(uParam2, iParam3);
	((*Global_1396257)[iParam0 /*638*/])->f_631 = 1;
}

int func_207(var uParam0)
{
	int iVar0;
	vector3 vVar1[2];
	int iVar8;
	int iVar9;
	vector3 vVar10;
	vector3 vVar13;

	vVar10 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
	vVar13 = { ENTITY::GET_ENTITY_COORDS(&(uParam0->f_218[0]), true, false) };
	if (!uParam0->f_370)
	{
		uParam0->f_369 = SHAPETEST::START_SHAPE_TEST_CAPSULE(vVar10, vVar13, 1f, 3167, Global_35, 4);
		uParam0->f_370 = 1;
		iVar9 = uParam0->f_371;
	}
	else if (SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_369, &iVar0, vVar1[0 /*3*/], vVar1[1 /*3*/], &iVar8) == 2)
	{
		if (iVar0 == 0)
		{
			iVar9 = 1;
		}
		else if (iVar8 == func_354(&(uParam0->f_218[0])))
		{
			iVar9 = 1;
		}
		else
		{
			iVar9 = 0;
		}
		uParam0->f_371 = iVar9;
		uParam0->f_370 = 0;
	}
	return iVar9;
}

int func_208()
{
	if (PED::_0xA911EE21EDF69DAF(Global_35) || func_355())
	{
		return 1;
	}
	return 0;
}

void func_209(char* sParam0, var uParam1)
{
	var uVar0[1];

	if (CAM::_0xDD0B7C5AE58F721D(sParam0) && !CAM::_0x927B810E43E99932(sParam0))
	{
		CAM::_0xB8B207C34285E978(sParam0);
		uVar0[0] = uParam1;
		CAM::_0xFEB8646818294C75(sParam0, &uVar0);
	}
}

int func_210(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7)
{
	if (*uParam3 >= iParam4)
	{
		return 0;
	}
	if (*uParam1)
	{
		if (!func_150(uParam2))
		{
			func_151(uParam2, 0f);
			return 0;
		}
		else if (func_159(uParam2) > iParam6)
		{
			func_78(uParam2);
			*uParam3++;
			*uParam1 = 0;
			return 0;
		}
		else
		{
			return 0;
		}
	}
	if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
	{
		if (fParam7 == 0f)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(*uParam0) || !ENTITY::DOES_ENTITY_EXIST(Global_35))
			{
				return 0;
			}
			fParam7 = func_250(*uParam0, Global_35, 1, 1);
		}
		if (iParam5 == 0)
		{
			if (fParam7 >= 0f && fParam7 < 10f)
			{
				iParam5 = 249295937;
			}
			else if (fParam7 >= 10f && fParam7 < 20f)
			{
				iParam5 = 1715123483;
			}
			else if (fParam7 >= 20f && fParam7 < 30f)
			{
				iParam5 = 1891783641;
			}
			else if (fParam7 >= 30f && fParam7 < 50f)
			{
				iParam5 = 2001176446;
			}
			else
			{
				iParam5 = 1515458263;
			}
		}
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::_0x0C7A2289A5C4D7C9(iParam5, *uParam0);
		*uParam1 = 1;
		return 1;
	}
	return 0;
}

char* func_211(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "agnes_dowd";
		case 1:
			return "anders_helgerson";
		case 2:
			return "armadillo_town_crier";
		case 3:
			return "bland_preacher";
		case 4:
			return "blind_man_cassidy";
		case 6:
			return "chelonian_master";
		case 7:
			return "civil_war_commando";
		case 5:
			return "crackpot_robot";
		case 8:
			return "dorothea_wicklow";
		case 9:
			return "endless_strainer";
		case 10:
			return "early_eugenics_proponent";
		case 11:
			return "gavins_friend";
		case 12:
			return "giant";
		case 13:
			return "grizzeld_jon";
		case 14:
			return "joe_butler";
		case 15:
			return "john_the_baptising_madman";
		case 16:
			return "lillian_powell";
		case 17:
			return "mad_scientist";
		case 18:
			return "mayor_of_strawberry";
		case 19:
			return "bum_civil_war_vet";
		case 20:
			return "philosopher_in_cave";
		case 21:
			return "poor_joe";
		case 22:
			return "sheriff_of_tumbleweed";
		case 23:
			return "soothsayer";
		case 25:
			return "swamp_weirdo_sonny";
		case 24:
			return "sun_worshipper";
		case 26:
			return "thomas_downe";
		case 27:
			return "timothy_donahue";
		case 28:
			return "tiny_hermit_in_cabin";
		case 29:
			return "vampire";
		default:
			break;
	}
	return "speci";
}

bool func_212(var uParam0, var uParam1)
{
	return (uParam0 && uParam1) != 0;
}

void func_213(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_214(vector3 vParam0, float fParam3, var uParam4, bool bParam5, int iParam6, int iParam7, bool bParam8, float fParam9)
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
	if (func_319(vParam0))
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
		if (func_356(vParam0))
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
	func_357(iVar0, bParam8);
	return iVar0;
}

int func_215()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

var func_216(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || BUILTIN::SHIFT_LEFT(iParam0 & 1023, 5)) || BUILTIN::SHIFT_LEFT(iParam1 & 16383, 15));
}

int func_217(int iParam0)
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

int func_218(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	int iVar1;

	if (!func_358(iParam2))
	{
		return -1;
	}
	if (iParam0 < 0 || iParam0 > 511)
	{
		return -1;
	}
	if (iParam1 < 0 || iParam1 > 255)
	{
		return -1;
	}
	if (iParam3 < 0 || iParam3 > func_215())
	{
		return -1;
	}
	uVar0 = func_216(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_359(iVar1, 0);
	func_360(iVar1, 0);
	func_262(iVar1, 0);
	func_263(iVar1, 0);
	func_361(iVar1, uVar0);
	if (iParam4 != 0)
	{
		func_362(iVar1, iParam4);
	}
	return iVar1;
}

int func_219(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_3;
	}
	return 0;
}

int func_220(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_4;
	}
	return 0;
}

void func_221(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_223(&(uParam0->f_1), 128);
	}
	else
	{
		func_224(&(uParam0->f_1), 128);
	}
}

void func_222(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_224(uParam0, 268435456);
	}
	else
	{
		func_223(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_224(uParam0, 1073741824);
	}
	else
	{
		func_223(uParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_224(uParam0, 536870912);
	}
	else
	{
		func_223(uParam0, 536870912);
	}
}

void func_223(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_224(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_225(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_363(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_226(var uParam0, int iParam1, char* sParam2)
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

void func_227(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	MISC::_0x2FCD528A397E5C88(iParam0, iVar0);
}

int func_228(vector3 vParam0, vector3 vParam3)
{
	return PED::ADD_SCENARIO_BLOCKING_AREA((vParam0.x - vParam3.x), (vParam0.y - vParam3.y), (vParam0.z - vParam3.z), (vParam0.x + vParam3.x), (vParam0.y + vParam3.y), (vParam0.z + vParam3.z), false, 15);
}

int func_229()
{
	return Global_1572887->f_12;
}

int func_230(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(iParam0, iParam1);
	if (iVar0 == iParam2)
	{
		if (func_364())
		{
			iVar0 = (iVar0 - 1);
		}
		else
		{
			iVar0++;
		}
		if (iVar0 < iParam0)
		{
			iVar0 = iParam0;
		}
		else if (iVar0 >= iParam1)
		{
			iVar0 = (iParam1 - 1);
		}
		if (iVar0 == iParam0 && iParam0 == iParam2)
		{
			iVar0++;
		}
		else if (iVar0 == (iParam1 - 1) && (iParam1 - 1) == iParam2)
		{
			iVar0 = (iVar0 - 1);
		}
		if (iVar0 < iParam0 || iVar0 >= iParam1)
		{
			iVar0 = func_365(func_364(), iParam0, (iParam1 - 1));
		}
	}
	return iVar0;
}

int func_231(var uParam0)
{
	if ((!func_14(uParam0->f_253, 4) || !func_14(uParam0->f_253, 8)) || !func_14(uParam0->f_253, 16))
	{
		if (func_366(&(uParam0->f_220), &(uParam0->f_218), 3, ENTITY::GET_ENTITY_COORDS(&(uParam0->f_218[0]), true, false), 5f, 0, 1, 1, -1, 1, 0, -1082130432, 0, 1) >= 1)
		{
			return 1;
		}
	}
	return 0;
}

int func_232(int iParam0, int iParam1, float fParam2)
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return func_367(iParam0, vVar0, fParam2);
}

int func_233(var uParam0, float fParam1, float fParam2)
{
	if (Global_1935630->f_12)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return 0;
	}
	if (fParam1 == 0f)
	{
		if (fParam2 == 0f)
		{
			if (func_149(Global_35, *uParam0, 25f, 1))
			{
				return 1;
			}
		}
		else if (fParam2 <= 25f)
		{
			return 1;
		}
	}
	else if (fParam2 == 0f)
	{
		if (func_149(Global_35, *uParam0, fParam1, 1))
		{
			return 1;
		}
	}
	else if (fParam2 <= fParam1)
	{
		return 1;
	}
	return 0;
}

int func_234(var uParam0, char* sParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 1;
	}
	bVar0 = ANIMSCENE::_0x1F0E401031E20146(*uParam0, sParam1);
	if (bVar0)
	{
		return 1;
	}
	bVar1 = ANIMSCENE::_0xA9016536015DE29D(*uParam0, sParam1);
	if (!bVar1)
	{
		return 1;
	}
	bVar2 = ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, sParam1);
	if (!bVar2)
	{
		return 1;
	}
	bVar3 = ANIMSCENE::_0x0DF57F86FE71DBE5(*uParam0, sParam1);
	if (bVar2 || bVar3)
	{
		ANIMSCENE::_0xAE6ADA8FE7E84ACC(*uParam0, sParam1);
	}
	return 0;
}

bool func_235(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

void func_236(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_237(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

bool func_238(int iParam0)
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

void func_239(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 && !func_238(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_368(*uParam0);
	if (((*Global_1945938)[iVar0 /*18*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && iParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_369(iVar0);
	*uParam0 = 0;
}

void func_240(int iParam0, int iParam1, int iParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (iParam2 == -1)
	{
		if (!PED::IS_PED_A_PLAYER(iParam1))
		{
			iParam2 = 0;
		}
		else
		{
			iParam2 = 1;
		}
	}
	PED::_0xAAC0EE3B4999ABB5(iParam0, iParam1);
	PED::_0xF634E2892220EF34(iParam0, iParam2);
}

int func_241(var uParam0)
{
	if (!func_150(uParam0))
	{
		return 0;
	}
	if (func_152(uParam0) >= 20f)
	{
		func_78(uParam0);
		return 1;
	}
	return 0;
}

void func_242(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam5)
	{
		PAD::DISABLE_CONTROL_ACTION(0, -640622144, false);
	}
	PAD::DISABLE_CONTROL_ACTION(0, -562475458, false);
	PAD::DISABLE_CONTROL_ACTION(0, -128997553, false);
	PAD::DISABLE_CONTROL_ACTION(0, 130948705, false);
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 1632043089, false);
		PAD::DISABLE_CONTROL_ACTION(0, 1623727326, false);
		PAD::DISABLE_CONTROL_ACTION(0, -922478227, false);
	}
	if (bParam0)
	{
		PAD::DISABLE_CONTROL_ACTION(0, -1404316431, false);
		PAD::DISABLE_CONTROL_ACTION(0, 1287709438, false);
		PAD::DISABLE_CONTROL_ACTION(0, -1304887797, false);
	}
	if (bParam3)
	{
		PAD::DISABLE_CONTROL_ACTION(0, -1292666904, false);
		PAD::DISABLE_CONTROL_ACTION(0, 578288361, false);
		if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 440314811, false);
			PAD::DISABLE_CONTROL_ACTION(0, 2028806450, false);
			PAD::DISABLE_CONTROL_ACTION(0, 371916472, false);
		}
	}
	if (bParam4)
	{
		PAD::DISABLE_CONTROL_ACTION(0, -620139643, false);
	}
	func_370(0);
	if (bParam1)
	{
		PAD::DISABLE_CONTROL_ACTION(0, -822242784, false);
	}
	if (!PED::IS_PED_INJURED(Global_35))
	{
		if (bParam2)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 129, true);
			PED::SET_PED_RESET_FLAG(Global_35, 189, true);
		}
		if (bParam6)
		{
			if (!PED::GET_PED_CONFIG_FLAG(Global_35, 43, true))
			{
				PED::SET_PED_CONFIG_FLAG(Global_35, 43, true);
			}
		}
	}
}

void func_243(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_78(&(uParam0->f_18));
}

int func_244(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_371();
	if (iParam1 && ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return -1;
	}
	return &Global_1955499;
}

void func_245(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_371();
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		iVar1 = 0;
		iVar2 = iParam0;
		if (iParam0 == -1)
		{
			iVar2 = func_244(iParam1, iParam2);
			if (iVar2 != -1)
			{
				iVar1 = ((*Global_1955500)[iVar2 /*16*/])->f_2;
				if (func_372(iVar2, 512))
				{
					PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), 0);
				}
			}
		}
		TASK::TASK_CLEAR_LOOK_AT(iVar0);
		PED::_0xAAC0EE3B4999ABB5(iVar0, 0);
		PAD::ENABLE_CONTROL_ACTION(0, -128997553, true);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iVar1))
			{
				iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
				if (!ENTITY::IS_ENTITY_DEAD(iVar3))
				{
					TASK::TASK_CLEAR_LOOK_AT(iVar3);
				}
			}
		}
		Global_1955499 = -1;
	}
}

void func_246(int iParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		VOLUME::_0x43F867EF5C463A53(iParam0);
	}
}

void func_247(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_229() != -1)
	{
		return;
	}
	if ((Global_36615 && func_373(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_374(iParam0);
	iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_375(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, iParam7);
	}
	else
	{
		iVar1 = -1;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (iVar1 < 0)
			{
				if (&Global_1347477->f_155[iVar2 /*6*/] == 0)
				{
					iVar1 = iVar2;
				}
			}
			iVar2++;
		}
		if (iVar1 >= 0)
		{
			func_376(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_375(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

var func_248()
{
	return Global_1900383->f_393;
}

bool func_249(int iParam0, int iParam1, float fParam2)
{
	return func_377(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, false, false), fParam2);
}

float func_250(int iParam0, int iParam1, bool bParam2, int iParam3)
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

int func_251(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iParam0, true);
	}
	return 0;
}

int func_252(int iParam0)
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

float func_253(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

int func_254(int iParam0, bool bParam1)
{
	int iVar0;

	if (func_229() != -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_40.f_1094 - 1))
	{
		if (&Global_40.f_450[iVar0] == iParam0)
		{
			if (!bParam1 || ((*Global_1347702)[iVar0 /*49*/])->f_13 & 16384 == 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_255(int iParam0)
{
	vector3 vVar0;

	switch (iParam0)
	{
		case 0:
			vVar0 = { -240.5095f, 769.4438f, 117.085f };
			break;
		case 1:
			vVar0 = { -303.7218f, 762.0843f, 118.1718f };
			break;
	}
	return vVar0;
}

int func_256(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_257(var uParam0)
{
	return func_268(*uParam0, 2);
}

float func_258()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

var func_259(var uParam0, var uParam1)
{
	return AUDIO::_PLAY_AMBIENT_SPEECH1(uParam0, uParam1);
}

void func_260(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_378(&Global_0, 8);
	}
	if (!func_379() || func_229() != -1)
	{
		return;
	}
	func_378(&Global_0, 1);
}

void func_261()
{
	AUDIO::_0x9428447DED71FC7E("special_ped_scenes");
}

void func_262(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_3 = iParam1;
}

void func_263(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_4 = iParam1;
}

int func_264()
{
	int iVar0;

	if (func_229() == -1)
	{
		if (SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(5))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (((*Global_1392915)[iVar0 /*12*/])->f_1 != -1)
				{
					if (func_380(((*Global_1392915)[iVar0 /*12*/])->f_4))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		return 0;
	}
	return 0;
}

int func_265(int iParam0)
{
	return (Global_1898164->f_1[iParam0 /*5*/])->f_2;
}

bool func_266()
{
	return Global_1310750->f_16077 != 0;
}

bool func_267(var uParam0, int iParam1)
{
	return func_327(*uParam0, iParam1);
}

bool func_268(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_269(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_270(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_271(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_272(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_273(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_380(((*Global_1835011)[iParam0 /*74*/])->f_1);
}

int func_274(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_381(((*Global_1835011)[iParam0 /*74*/])->f_1);
}

int func_275(int iParam0)
{
	int iVar0;

	iVar0 = func_382();
	switch (iParam0)
	{
		case 0:
			switch (iVar0)
			{
				case -173507739:
				case 1632247697:
					return 1;
				default:
					return 0;
			}
			break;
		case 1:
			switch (iVar0)
			{
				case -1148613331:
				case -173507739:
				case 433385945:
				case 821931868:
				case 1632247697:
					return 1;
				default:
					return 0;
			}
			break;
		case 2:
			switch (iVar0)
			{
				case -1721991356:
				case -1148613331:
				case -702816767:
				case -173507739:
				case 433385945:
				case 603685163:
				case 821931868:
				case 1500834021:
				case 1632247697:
				case 1679686673:
					return 1;
				default:
					return 0;
			}
			break;
		case 3:
			switch (iVar0)
			{
				case -1721991356:
				case -1233681761:
				case -1148613331:
				case -702816767:
				case -416908843:
				case -273223690:
				case -173507739:
				case 212278652:
				case 433385945:
				case 821931868:
				case 1420204096:
				case 1500834021:
				case 1632247697:
				case 1679686673:
					return 1;
				default:
					return 0;
			}
			break;
		case 4:
			return 1;
		case 5:
			switch (iVar0)
			{
				case -702816767:
				case 1500834021:
					return 1;
			}
			break;
	}
	return 0;
}

int func_276(var uParam0, var uParam1, float fParam2, float fParam3)
{
	vector3 vVar0;
	vector3 vVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) + vVar0 * Vector(fParam2, fParam2, fParam2) };
	if (func_383(uParam1, vVar3, fParam3))
	{
		return 1;
	}
	return 0;
}

int func_277(var uParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5)
{
	float fVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (VOLUME::_0x92A78D0BEDB332A3(*uParam1))
		{
			POPULATION::_0x74C2B3DC0B294102(*uParam1);
			POPULATION::_0xA1CFB35069D23C23(*uParam1);
			VOLUME::_0x43F867EF5C463A53(*uParam1);
		}
		return 0;
	}
	vVar2 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0) };
	vVar5 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) + vVar2 * Vector(fParam3, fParam3, fParam3) };
	if (!func_384(uParam2, &iVar1, vVar5, fParam3, fParam4))
	{
		if (VOLUME::_0x92A78D0BEDB332A3(*uParam1))
		{
			POPULATION::_0x74C2B3DC0B294102(*uParam1);
			POPULATION::_0xA1CFB35069D23C23(*uParam1);
			VOLUME::_0x43F867EF5C463A53(*uParam1);
		}
		return 0;
	}
	else
	{
		if (!VOLUME::_0x92A78D0BEDB332A3(*uParam1))
		{
			fVar0 = (fParam4 + 1f);
			*uParam1 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar5, 0f, 0f, 0f, fVar0, fVar0, fVar0, "SPDClearWagonsMount");
			POPULATION::_0xB56D41A694E42E86(*uParam1, iParam5 | 2228255, 0, 0, -1, -1, 10);
			POPULATION::_0x18262CAFEBB5FBE1(*uParam1, iParam5, 0, 0, -1, -1, 0);
		}
		vVar8 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) };
		if (!func_385(iVar1, 0))
		{
			func_386(&iVar1, vVar8, 1083179008);
		}
		return 1;
	}
	return 0;
}

bool func_278()
{
	return Global_1392040->f_6;
}

int func_279()
{
	if (Global_1914319->f_18941.f_17)
	{
		return 1;
	}
	return 0;
}

bool func_280(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

void func_281(int iParam0)
{
	int iVar0;
	var uVar1;

	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_387();
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
			func_388(&(Global_1935630->f_34), &(Global_1935630->f_39));
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

var func_282(int iParam0)
{
	return &(Global_1109400->f_275[iParam0 /*3*/]);
}

int func_283(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_389(bParam0, &uVar0, &uVar1))
	{
		return 1;
	}
	return 0;
}

int func_284(var uParam0)
{
	int iVar0;

	iVar0 = Global_1935630->f_40;
	if (func_229() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_390(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_390(uParam0);
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_312(iVar0) == -1)
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

void func_285(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_391(uParam0);
	}
}

int func_286(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_312(iParam2);
	}
	else
	{
		iVar1 = func_311(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_312(iParam0);
	}
	else
	{
		iVar0 = func_311(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return 1;
		}
	}
	if (func_327(*uParam1, 8388608))
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

float func_287(int iParam0, int iParam1)
{
	return func_250(iParam0, iParam1, 1, 1);
}

float func_288(var uParam0)
{
	return uParam0->f_26;
}

int func_289(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_290(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_224(uParam0, 134217728);
	}
	else
	{
		func_223(uParam0, 134217728);
	}
}

void func_291()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

int func_292(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5)
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
		if (((WEAPON::_0xCB690F680A3EA971(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, iParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_250(iVar0, iParam0, 1, 1) <= 4f)
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
		if (WEAPON::_0x6AD66548840472E5(func_392(iVar0, 0)))
		{
			if (func_393(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_293(var uParam0)
{
	return uParam0->f_17;
}

int func_294(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_12 > fParam3)
	{
		return 0;
	}
	fVar0 = -1f;
	if (!func_327(*uParam0, 4194304))
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

int func_295(var uParam0)
{
	return uParam0->f_18;
}

int func_296(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (WEAPON::_0x6AD66548840472E5(func_392(iVar0, 0)))
		{
			if (func_394(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_297(bool bParam0, var uParam1, var uParam2)
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

var func_298(var uParam0)
{
	return uParam0->f_23;
}

int func_299(var uParam0)
{
	return uParam0->f_21;
}

int func_300(var uParam0)
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

int func_301(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_377(iParam0, vParam4, 0.5f))
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

int func_302(int iParam0)
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
	if (func_395(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_303(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_396(iParam1))
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

int func_304(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_396(iParam1))
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

int func_305(var uParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40f;
	if (func_396(iParam1))
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

int func_306(int iParam0, var uParam1)
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

int func_307(int iParam0, int iParam1)
{
	if (PED::_0xB65A4DAB460A19BD(iParam0) == iParam1)
	{
		return 1;
	}
	if (func_397(iParam0, 1, 0, 0) != joaat("weapon_lasso"))
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

bool func_308(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

int func_309(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_253(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

float func_310(var uParam0)
{
	return uParam0->f_24;
}

int func_311(int iParam0)
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

int func_312(int iParam0)
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

int func_313(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_306(Global_35, &iVar1))
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
		fVar2 = func_250(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
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
		if (func_250(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
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

int func_314(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_389(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_315(uParam1, iVar0))
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
				if (!bParam2 || !func_315(uParam1, iVar1))
				{
					if (func_253(iVar1, Global_36, 1) < 5f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_315(var uParam0, int iParam1)
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

int func_316(int iParam0)
{
	if (func_75())
	{
		return 0;
	}
	return func_398(((*Global_1347702)[58 /*49*/])->f_15, 1);
}

int func_317(var uParam0)
{
	return uParam0->f_20;
}

int func_318(int iParam0, var uParam1, bool bParam2, float fParam3)
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

int func_319(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_320(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_321(int iParam0, char* sParam1, int iParam2)
{
	int iVar0;

	if (iParam2 && !func_238(iParam0))
	{
		return;
	}
	iVar0 = func_368(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, sParam1);
}

char* func_322()
{
	return "GREET_MALE";
}

void func_323(int* iParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = uParam1;
	iParam0->f_7 = uParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = uParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (func_238(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				func_399(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_321(iParam0->f_6, iParam0->f_5, 0);
			}
			func_400(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		func_199(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

char* func_324(var uParam0, var uParam1)
{
	if (func_401())
	{
		switch (uParam0->f_255)
		{
			case 0:
				*uParam1 = 1;
				return "INSULT_MICKEY_CONV_PART1";
			case 1:
				*uParam1 = 2;
				return "INSULT_MICKEY_CONV_PART1";
			case 2:
				*uParam1 = 2;
				return "INSULT_MICKEY_CONV_PART3";
			case 4:
				*uParam1 = 4;
				return "INSULT_TIMID_MALE_CONV_PART1";
			case 5:
				*uParam1 = 2;
				return "INSULT_TIMID_MALE_CONV_PART2";
			case 6:
				*uParam1 = 16;
				return "INSULT_MALE_CONV_PART1";
			case 7:
				*uParam1 = 4;
				return "INSULT_TIMID_MALE_CONV_PART2";
			default:
				*uParam1 = 1;
				return "INSULT_MICKEY_CONV_PART1";
		}
	}
	else
	{
		*uParam1 = 2;
		return "INSULT_MALE_CONV_PART1";
	}
	*uParam1 = 2;
	return "INSULT_MALE_CONV_PART1";
}

void func_325(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_402(iParam0, (*uParam1)[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, iParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT((*uParam1)[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

void func_326(var uParam0)
{
	if (*uParam0 & 1 != 0)
	{
		*uParam0 |= 64 | 16 | 16777216;
	}
}

bool func_327(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_328(int* iParam0, var uParam1, var uParam2)
{
	int iVar0;
	char* sVar1;
	var uVar2;

	iVar0 = func_403(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = ((*uParam1)[iVar0 /*17*/])->f_13;
		uVar2 = ((*uParam1)[iVar0 /*17*/])->f_15;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			func_404(Global_35, *uParam2, sVar1, "", -1082130432, uVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

bool func_329(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_229() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iVar1]), iVar2);
}

void func_330(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_405(iParam0, &iVar0, &iVar1);
	if (!func_406(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_407(iVar0, iVar1);
}

bool func_331(int iParam0, bool bParam1)
{
	if (bParam1 && !func_238(iParam0))
	{
		return false;
	}
	return !func_408(iParam0, 4);
}

float func_332(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_333(int iParam0, var uParam1, var uParam2)
{
	if (uParam1->f_11 != 0)
	{
		if (func_409(iParam0, uParam1))
		{
			if (!func_327(uParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
				func_197(uParam2, 0, 0, 1, 0);
				func_224(&(uParam1->f_10), 1);
			}
			return 1;
		}
		else if (func_327(uParam1->f_10, 1))
		{
			func_410(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
			func_223(&(uParam1->f_10), 1);
		}
	}
	return 0;
}

int func_334(var uParam0, int* iParam1, var uParam2, float fParam3, var uParam4, char* sParam5, int iParam6, float fParam7)
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
		bVar4 = func_327(uParam4, 32);
		func_196(iParam1, uParam2, 0);
		iVar5 = func_411(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return 1;
		}
		func_197(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_327(uParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_327(uParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_327(uParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_327(uParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_327(uParam4, 8388608) || func_327(uParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_327(uParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_327(uParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_337(iParam1, 4))
		{
			iVar6 |= 1024;
			EVENT::_0xBB1E41DD3D3C6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_337(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_327(uParam4, 67108864))
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
				iParam6 = func_412(uParam0);
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
			if (func_327(uParam4, 268435456))
			{
				iVar8 = func_413(uParam2, 648122183);
				if (iVar8 > -1)
				{
					func_414(iParam1, (*uParam2)[iVar8 /*17*/]);
				}
			}
			if (func_337(iParam1, 23))
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
			if (func_327(uParam4, 2) || func_327(uParam4, 16))
			{
				func_336(*uParam0, 1, 1);
			}
			else
			{
				func_336(*uParam0, 0, 1);
			}
			return 1;
		}
	}
	return 0;
}

void func_335(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297, false);
	}
}

void func_336(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
	}
}

bool func_337(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

int func_338(var uParam0, var uParam1, int iParam2, bool bParam3)
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
		if (func_415(*uParam0, bParam3, bVar2, bVar3))
		{
			return 1;
		}
	}
	return 0;
}

void func_339(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, var uParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_325(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_327(uParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_340(var uParam0)
{
	if (func_327(uParam0, 4))
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
	if (func_327(uParam0, 16384))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -485697785, false);
	}
	if (func_327(uParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -1292666904, false);
		PAD::DISABLE_CONTROL_ACTION(0, 578288361, false);
	}
}

bool func_341(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, var uParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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

	iVar1 = func_416(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = uParam10 & 128 != false;
	bVar7 = uParam10 & 64 != false;
	bVar8 = uParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*uParam0);
	bVar11 = (((PED::_0xA911EE21EDF69DAF(Global_35) || func_417(Global_35)) || func_418(Global_35)) || func_419(Global_35));
	fVar12 = -1f;
	if (func_150(&(iParam1->f_13)))
	{
		fVar12 = func_152(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if (((*uParam4)[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = ((*uParam4)[iVar0 /*17*/])->f_8;
		}
		bVar4 = func_238(((*uParam4)[iVar0 /*17*/])->f_6);
		func_420(*uParam0, (*uParam4)[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET(uParam4[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (func_421(*uParam0, iParam1, (*uParam4)[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_422(iParam12, ((*uParam4)[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						func_197(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_423(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET(uParam4[iVar0 /*17*/], 11))
					{
						func_196(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
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
					if (func_424(iParam1, fParam6, iParam1->f_9))
					{
						func_18(&(iParam1->f_18));
						if (bVar6)
						{
							func_423(uParam4, 0, 0);
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
		func_425(iParam1, fParam2);
	}
	return bVar5;
}

void func_342(var uParam0)
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

void func_343(int* iParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_426((*uParam1)[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET(uParam1[iVar0 /*17*/], 20))
			{
				func_425(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

int func_344(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, -124244224))
		{
			if (func_427(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_428(iParam1, 0);
				func_196(iParam1, uParam2, func_337(iParam1, 6));
				return 1;
			}
		}
	}
	return 0;
}

int func_345(var uParam0, int* iParam1, float fParam2, bool bParam3)
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
			func_18(&(iParam1->f_18));
			return 0;
		}
		else if (func_150(&(iParam1->f_18)))
		{
			func_78(&(iParam1->f_18));
			return 0;
		}
	}
	if (!func_150(&(iParam1->f_18)))
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
	return func_429(&(iParam1->f_18), fParam2);
	return 1;
}

void func_346(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_420(iParam0, (*uParam2)[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_347(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

void func_348()
{
	if (!func_430(&Global_1327479))
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
	func_431(0);
	Global_1327479 = -1;
	Global_1310750->f_16075 = 0;
	Global_1310750->f_16076 = 0;
	Global_1310750->f_16103 = { 0f, 0f, 0f };
}

void func_349(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	if (func_432() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0 /*9*/];
		if (((func_430(iVar1) && !func_433(iVar1, iParam2)) && (!bParam3 || !func_434(iVar1))) && (!bParam4 || !func_435(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_436(iVar0);
			}
		}
		iVar0++;
	}
}

void func_350(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = iParam0 * 1000;
	if ((iVar0 + MISC::GET_GAME_TIMER()) > Global_1327479->f_4)
	{
		func_437(iParam0, iParam1, bParam2);
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

struct<2> func_351(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

int func_352(var uParam0, var uParam1)
{
	var uVar0;

	STATS::STAT_ID_GET_INT(&uParam0, &uVar0);
	return uVar0;
}

void func_353(var uParam0, var uParam1, int iParam2)
{
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

int func_354(var uParam0)
{
	return uParam0;
}

int func_355()
{
	if (func_438(Global_35) || func_439(Global_35))
	{
		return 1;
	}
	return 0;
}

bool func_356(vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, 16384);
}

int func_357(int iParam0, bool bParam1)
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

bool func_358(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_359(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_12105[iParam0 /*7*/])->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_440(iParam0);
	}
	else
	{
		func_441(iParam0, iParam1);
	}
	func_442();
}

void func_360(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_2 = iParam1;
}

void func_361(int iParam0, var uParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12105[iParam0 /*7*/] = uParam1;
		return;
	}
	Global_1058888->f_498[iParam0 /*2*/] = uParam1;
}

void func_362(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_12105[iParam0 /*7*/])->f_5 = iParam1;
		return;
	}
	(Global_1058888->f_498[iParam0 /*2*/])->f_1 = iParam1;
}

void func_363(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_443(iParam1))
		{
			func_444(iParam0, 41788943);
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
			func_445(iParam0, 0, 1);
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
			func_446(iParam0, 0);
			bVar0 = true;
		}
		func_447(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	}
}

int func_364()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
	{
		return 1;
	}
	return 0;
}

int func_365(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_366(var uParam0, var uParam1, int iParam2, vector3 vParam3, float fParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, int iParam11, bool bParam12, float fParam13, bool bParam14, bool bParam15)
{
	int iVar0;
	var uVar1;

	if (fParam13 <= 0f)
	{
		iVar0 = VOLUME::_0xB3FB80A32BAE3065(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam6);
	}
	else
	{
		iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam13);
	}
	uVar1 = func_448(uParam0, uParam1, iParam2, iVar0, bParam7, bParam8, bParam9, iParam10, iParam11, bParam12, bParam14, bParam15);
	func_246(iVar0);
	return uVar1;
}

int func_367(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
		vVar3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	}
	vVar6 = { vParam1 - vVar0 };
	fVar9 = func_449(vVar3, vVar6);
	if (MISC::ABSF(fVar9) > fParam4)
	{
		if (fVar9 > 0f)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (func_450(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

int func_368(int iParam0)
{
	return iParam0;
}

void func_369(int iParam0)
{
	if (!func_451(iParam0))
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

void func_370(bool bParam0)
{
	if (bParam0)
	{
		func_452(4);
	}
	func_452(2);
	MISC::SET_BIT(&(Global_1956578->f_1), 0);
}

int func_371()
{
	switch (func_229())
	{
		case 0:
			return PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
		default:
			break;
	}
	return Global_35;
}

int func_372(int iParam0, int iParam1)
{
	if (func_147(iParam0, 1, 1))
	{
		return func_14(Global_1955500[iParam0 /*16*/], iParam1);
	}
	return 0;
}

int func_373(int iParam0)
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

int func_374(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return -2;
		case 2:
			return -5;
		case 3:
			return -10;
		case 4:
			return -20;
		case 5:
			return -40;
		case 6:
			return -160;
		case 7:
			return -320;
		case 8:
			return -480;
		case 18:
			return -640;
		case 9:
			return 0;
		case 10:
			return 1;
		case 11:
			return 2;
		case 12:
			return 5;
		case 13:
			return 10;
		case 14:
			return 20;
		case 15:
			return 40;
		case 16:
			return 160;
		case 17:
			return 640;
		default:
			break;
	}
	return 0;
}

void func_375(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	char* sVar7;
	struct<2> Var8;

	iVar0 = func_453();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_454(iParam0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam5))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_override"))
			{
				iParam0 = (DECORATOR::DECOR_GET_INT(iParam5, "honor_override") * -1);
				DECORATOR::DECOR_REMOVE(iParam5, "honor_override");
			}
			else if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_bank"))
			{
				iParam0 = (iParam0 - DECORATOR::DECOR_GET_INT(iParam5, "honor_bank"));
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", 0);
			}
		}
	}
	iVar2 = 240;
	iVar3 = -240;
	fVar4 = 1f;
	if (func_455(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_75())
		{
			if (((iParam2 >= 0 && iParam2 <= 4) || (iParam2 >= 10 && iParam2 <= 14)) && iParam3 != 446961221)
			{
				fVar4 = 1.5f;
			}
		}
	}
	if (iParam0 > 0)
	{
		iVar5 = BUILTIN::CEIL((IntToFloat(iParam0) * fVar4));
	}
	else
	{
		iVar5 = BUILTIN::FLOOR((IntToFloat(iParam0) * fVar4));
	}
	Global_40.f_11095.f_35 = (Global_40.f_11095.f_35 + iVar5);
	Global_40.f_11095.f_35 = func_456(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_453();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || iParam7)
	{
		iVar6 = func_457(iVar1);
		func_459(func_458(), 0, 4000);
		func_460(Global_40.f_11095.f_35);
		if ((iVar6 > Global_40.f_11095.f_36 && iVar1 > 0) || (iVar6 > Global_40.f_11095.f_37 && iVar1 < 0))
		{
			if (iVar1 < 0)
			{
				Global_40.f_11095.f_37 = iVar6;
			}
			else
			{
				Global_40.f_11095.f_36 = iVar6;
			}
		}
		func_461(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_353(func_351(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(iParam5))
			{
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_374(14))
				{
					sVar7 = "Honor_Increase_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelGood");
				}
				else
				{
					sVar7 = "Honor_Increase_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = func_462(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_463(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_463(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_353(func_351(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_374(4))
				{
					sVar7 = "Honor_Decrease_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelBad");
				}
				else
				{
					sVar7 = "Honor_Decrease_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = func_462(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_463(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_463(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_351(-1990689970) };
	STATS::STAT_ID_SET_INT(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_0xE6B763C7F4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_464(10, 1);
	}
}

void func_376(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0 /*6*/] = iParam1;
	(Global_1347477->f_155[iParam0 /*6*/])->f_2 = iParam2;
	(Global_1347477->f_155[iParam0 /*6*/])->f_3 = iParam3;
	(Global_1347477->f_155[iParam0 /*6*/])->f_4 = iParam4;
	(Global_1347477->f_155[iParam0 /*6*/])->f_5 = bParam5;
	(Global_1347477->f_155[iParam0 /*6*/])->f_1 = MISC::GET_GAME_TIMER() + 500;
}

bool func_377(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

void func_378(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_379()
{
	return 1;
	if (Global_1572887->f_12 == 0)
	{
		return 1;
	}
	return Global_40.f_1;
}

bool func_380(int iParam0)
{
	int iVar0;

	iVar0 = func_465(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_381(int iParam0)
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
		iVar0 = func_466(iParam0);
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

var func_382()
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

int func_383(var uParam0, vector3 vParam1, float fParam4)
{
	if (!ITEMSET::IS_ITEMSET_VALID(*uParam0))
	{
		*uParam0 = ITEMSET::CREATE_ITEMSET(true);
	}
	if (ENTITY::_0x59B57C4B06531E1E(vParam1, fParam4, *uParam0, 2) > 0)
	{
		ITEMSET::_0x20A4BF0E09BEE146(*uParam0);
		return 1;
	}
	ITEMSET::_0x20A4BF0E09BEE146(*uParam0);
	return 0;
}

int func_384(var uParam0, var uParam1, vector3 vParam2, float fParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ITEMSET::IS_ITEMSET_VALID(*uParam0))
	{
		*uParam0 = ITEMSET::CREATE_ITEMSET(true);
	}
	iVar2 = ENTITY::_0x59B57C4B06531E1E(vParam2, fParam6, *uParam0, 1);
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		iVar0 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, *uParam0);
		*uParam1 = iVar0;
		if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(*uParam1))
			{
				if (PED::_0x772A1969F649E902(ENTITY::GET_ENTITY_MODEL(*uParam1)))
				{
					if (func_467(Global_35, *uParam1, 0))
					{
					}
					else
					{
						ITEMSET::_0x20A4BF0E09BEE146(*uParam0);
						return 1;
					}
				}
			}
		}
		iVar1++;
	}
	ITEMSET::_0x20A4BF0E09BEE146(*uParam0);
	return 0;
}

int func_385(int iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (bParam1)
		{
			return PED::IS_PED_DEAD_OR_DYING(iParam0, true);
		}
		else
		{
			return ENTITY::IS_ENTITY_DEAD(iParam0);
		}
	}
	return 1;
}

void func_386(int iParam0, vector3 vParam1, float fParam4)
{
	if (!func_83(*iParam0, 518218985))
	{
		TASK::CLEAR_PED_TASKS(*iParam0, 1, 0);
		TASK::_TASK_SMART_FLEE_STYLE_COORD(*iParam0, vParam1, 6, 0, fParam4, -1, 0);
	}
}

int func_387()
{
	if (func_468())
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

void func_388(var uParam0, var uParam1)
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

int func_389(bool bParam0, var uParam1, var uParam2)
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

int func_390(var uParam0)
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

void func_391(var uParam0)
{
	int iVar0;

	if (Global_1935630->f_38 == 0)
	{
		func_223(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(Global_1935630->f_34[iVar0])))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(&(Global_1935630->f_34[iVar0])))
				{
					func_224(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}

var func_392(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

int func_393(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_394(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_394(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

int func_395(int iParam0, int iParam1, bool bParam2, int iParam3)
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

int func_396(int iParam0)
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

int func_397(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_398(int iParam0, bool bParam1)
{
	switch (func_465(iParam0))
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

void func_399(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	int iVar0;

	if (iParam3 && !func_238(iParam0))
	{
		return;
	}
	iVar0 = func_368(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, MISC::_CREATE_VAR_STRING(2, sParam1, sParam2));
}

void func_400(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (iParam2 && !func_238(iParam0))
	{
		return;
	}
	iVar0 = func_368(iParam0);
	if (bParam1)
	{
		func_469(iParam0, 4);
		func_470(iVar0, 1);
		func_471(iVar0, 1);
	}
	else
	{
		func_472(iParam0, 4);
		func_471(iVar0, 0);
	}
}

int func_401()
{
	if (func_229() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == joaat("player_zero"))
	{
		return 1;
	}
	return 0;
}

void func_402(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	char* sVar0;
	int iVar1;

	if (func_238(iParam1->f_6))
	{
		if (iParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		func_239(&(iParam1->f_6), 0, 1);
	}
	if (!func_238(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_426(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_473(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824, 0, 1704213876, iParam1->f_10, 0);
			if (func_238(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_474(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_475(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						func_476(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_399(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					func_475(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					func_400(iParam1->f_6, 0, 1);
				}
				else
				{
					func_400(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

int func_403(int* iParam0)
{
	if (func_337(iParam0, 0))
	{
		if (func_477(iParam0))
		{
			func_347(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

bool func_404(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, var uParam5, bool bParam6, int iParam7, int iParam8, bool bParam9, int iParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_478(iParam0, iParam1, sParam2, sParam3, fParam4, uParam5, bParam6, iParam7, iParam8, bParam9, iParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

void func_405(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

int func_406(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return 0;
	}
	if (func_479(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_480(iParam0))
	{
		return 0;
	}
	if (func_481(iParam0))
	{
		return 0;
	}
	if ((Global_1898164->f_163 && !func_482(iParam0, 1)) || func_483(32768))
	{
		if (!func_482(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return 0;
		}
	}
	if (!func_484())
	{
		return 0;
	}
	return 1;
}

void func_407(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_408(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1) != 0;
}

int func_409(int iParam0, var uParam1)
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
		if (PED::IS_PED_IN_COMBAT(iParam0, func_485((bVar1 && !bVar0), Global_35, 0)))
		{
			return 1;
		}
	}
	return 0;
}

void func_410(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_426((*uParam0)[iVar0 /*17*/]))
		{
			func_236((*uParam0)[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_411(int iParam0, var uParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;

	if (uParam1->f_3 > -1 && uParam1->f_3 < *uParam2)
	{
		iVar0 = uParam1->f_3;
		((*uParam2)[iVar0 /*17*/])->f_8 = 6;
		func_402(iParam0, (*uParam2)[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (func_238(((*uParam2)[iVar0 /*17*/])->f_6))
		{
			func_236((*uParam2)[iVar0 /*17*/], 11);
			return ((*Global_1945938)[((*uParam2)[iVar0 /*17*/])->f_6 /*18*/])->f_3;
		}
	}
	return 0;
}

int func_412(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_486(*uParam0);
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

int func_413(var uParam0, int iParam1)
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

void func_414(int* iParam0, int* iParam1)
{
	if (!func_337(iParam0, 23))
	{
		if (iParam1->f_7 == 648122183)
		{
			func_236(iParam1, 19);
			func_428(iParam0, 23);
			func_487(iParam1, 2);
		}
	}
}

int func_415(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (func_488(16))
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
					func_489(16);
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

int func_416(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

var func_417(int iParam0)
{
	return (func_490(iParam0, 4) || func_490(iParam0, 5));
}

int func_418(int iParam0)
{
	return func_490(iParam0, 7);
}

int func_419(int iParam0)
{
	return func_490(iParam0, 6);
}

void func_420(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (func_426(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			func_402(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

int func_421(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, var uParam13, float fParam14, bool bParam15, int iParam16)
{
	int iVar0;
	bool bVar1;

	iVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_491(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, uParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_331(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_400(iParam2->f_6, 0, 1);
				iVar0 = 0;
			}
		}
		else if (!bVar1)
		{
			func_400(iParam2->f_6, 1, 1);
			iVar0 = 0;
		}
		if (bParam8)
		{
			func_474(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return iVar0;
}

int func_422(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_492(iParam1, 1))
		{
			return 1;
		}
	}
	else if (func_493(iParam1, 1))
	{
		func_494(iParam1, 1);
		return 1;
	}
	return 0;
}

void func_423(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_81((*uParam0)[iVar0 /*17*/], iParam1, bParam2);
		iVar0++;
	}
}

int func_424(int* iParam0, float fParam1, var uParam2)
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

void func_425(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 1101824977, true);
		PAD::DISABLE_CONTROL_ACTION(0, 966551065, true);
		PAD::DISABLE_CONTROL_ACTION(0, 668058244, true);
		PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	}
}

int func_426(var uParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_5))
	{
		return 1;
	}
	return 0;
}

int func_427(int iParam0)
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

void func_428(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

int func_429(var uParam0, float fParam1)
{
	if (func_495(uParam0, fParam1))
	{
		func_78(uParam0);
		return 1;
	}
	return 0;
}

bool func_430(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_431(int iParam0)
{
	Global_1327479->f_3 = iParam0;
}

int func_432()
{
	return Global_1310750->f_16037;
}

bool func_433(int iParam0, int iParam1)
{
	if (!func_430(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/] && iParam1) != 0;
}

int func_434(int iParam0)
{
	if (!func_430(iParam0))
	{
		return 0;
	}
	if (func_496(64) && func_497(iParam0))
	{
		return 1;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_46;
}

int func_435(int iParam0)
{
	if (!func_430(iParam0))
	{
		return 0;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_47;
}

void func_436(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_430(&(Global_1310750->f_13321[iParam0 /*9*/])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID((Global_1310750->f_13321[iParam0 /*9*/])->f_5, 523);
	((*Global_1310750)[iVar0 /*111*/])->f_48 = 0;
	func_498(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

void func_437(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = MISC::GET_GAME_TIMER();
	func_499(iParam0, iParam1, bParam2);
}

int func_438(int iParam0)
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
		iVar2 = func_500(iVar9);
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

int func_439(int iParam0)
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
	iVar0 = func_248();
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

int func_440(int iParam0)
{
	int iVar0;

	iVar0 = func_501(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_502(iVar0);
}

int func_441(int iParam0, int iParam1)
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
			func_503(iVar2);
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

void func_442()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

int func_443(int iParam0)
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

void func_444(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_504(iParam0, iParam1))
		{
			if (func_505(iParam0, iParam1))
			{
				if (func_506(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_507(iParam0);
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

void func_445(int iParam0, int iParam1, bool bParam2)
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

void func_446(int iParam0, bool bParam1)
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

void func_447(int iParam0, int iParam1)
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

int func_448(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, var uParam8, bool bParam9, bool bParam10, bool bParam11)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar6 = ENTITY::_0x886171A12F400B89(iParam3, iVar0, 1);
	if (iVar6 > 0)
	{
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, iVar0);
			iVar2 = iVar1;
			if ((ENTITY::DOES_ENTITY_EXIST(iVar2) && iVar4 < *uParam0) && iVar4 < iParam2)
			{
				if (func_508(iVar2, bParam4, bParam6, uParam8, bParam9, bParam10) && !DECORATOR::DECOR_EXIST_ON(iVar2, "bIgnoreThisPed"))
				{
					if (!func_509(iVar2, uParam1))
					{
						bVar3 = false;
						if (iParam7 != -1)
						{
							iVar7 = 0;
							iVar7 = 0;
							while (iVar7 < POPULATION::GET_NUM_MODELS_IN_POPULATION_SET(iParam7))
							{
								if (PED::IS_PED_MODEL(iVar2, POPULATION::GET_PED_MODEL_NAME_IN_POPULATION_SET(iParam7, iVar7)))
								{
									bVar3 = true;
								}
								else
								{
									iVar7++;
								}
							}
						}
						else
						{
							bVar3 = true;
						}
						if (bVar3)
						{
							if (!bParam11)
							{
								if (!ENTITY::IS_ENTITY_DEAD(iVar2))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, bParam5);
								}
							}
							(*uParam0)[iVar4] = iVar2;
							iVar4++;
						}
					}
				}
			}
			iVar5++;
		}
	}
	if (iVar4 >= (iParam2 - 1) && iVar6 >= iParam2)
	{
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return iVar4;
}

float func_449(vector3 vParam0, vector3 vParam3)
{
	float fVar0;

	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		vParam0.x = (vParam0.x / fVar0);
		vParam0.f_1 = (vParam0.y / fVar0);
	}
	fVar0 = BUILTIN::VMAG(vParam3);
	if (fVar0 != 0f)
	{
		vParam3.x = (vParam3.x / fVar0);
		vParam3.f_1 = (vParam3.y / fVar0);
	}
	return ((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y));
}

bool func_450(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

bool func_451(int iParam0)
{
	return func_408(iParam0, 2);
}

void func_452(int iParam0)
{
	Global_1900383->f_316 = (Global_1900383->f_316 || iParam0);
}

int func_453()
{
	int iVar0;

	iVar0 = func_510();
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

int func_454(int iParam0)
{
	float fVar0;
	float fVar1;

	if (func_229() != -1)
	{
		return iParam0;
	}
	if (Global_1347477->f_2 + 120000) < MISC::GET_GAME_TIMER()
	{
		Global_1347477->f_3 = 1;
		Global_1347477->f_2 = MISC::GET_GAME_TIMER();
		return iParam0;
	}
	fVar0 = 1f;
	Global_1347477->f_2 = MISC::GET_GAME_TIMER();
	Global_1347477->f_3++;
	if (Global_1347477->f_3 >= 10)
	{
		fVar0 = 2f;
	}
	else if (Global_1347477->f_3 >= 3)
	{
		fVar0 = 1.5f;
	}
	fVar1 = (BUILTIN::TO_FLOAT(iParam0) * fVar0);
	fVar1 = func_332(MISC::ABSF(fVar1) < 1f, func_332(fVar1 < 0f, -1f, 1f), fVar1);
	return BUILTIN::CEIL(fVar1);
}

int func_455(int iParam0)
{
	if (!func_511(iParam0))
	{
		return 0;
	}
	return func_512(iParam0);
}

int func_456(int iParam0, int iParam1, int iParam2)
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

int func_457(int iParam0)
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

int func_458()
{
	if (Global_40.f_11095.f_35 <= -320)
	{
		return 1;
	}
	else if (Global_40.f_11095.f_35 <= -280)
	{
		return 2;
	}
	else if (Global_40.f_11095.f_35 <= -240)
	{
		return 3;
	}
	else if (Global_40.f_11095.f_35 <= -200)
	{
		return 4;
	}
	else if (Global_40.f_11095.f_35 <= -160)
	{
		return 5;
	}
	else if (Global_40.f_11095.f_35 <= -120)
	{
		return 6;
	}
	else if (Global_40.f_11095.f_35 <= -80)
	{
		return 7;
	}
	else if (Global_40.f_11095.f_35 < 0)
	{
		return 8;
	}
	else if (Global_40.f_11095.f_35 <= 40)
	{
		return 9;
	}
	else if (Global_40.f_11095.f_35 >= 320)
	{
		return 16;
	}
	else if (Global_40.f_11095.f_35 >= 280)
	{
		return 15;
	}
	else if (Global_40.f_11095.f_35 >= 240)
	{
		return 14;
	}
	else if (Global_40.f_11095.f_35 >= 200)
	{
		return 13;
	}
	else if (Global_40.f_11095.f_35 >= 160)
	{
		return 12;
	}
	else if (Global_40.f_11095.f_35 >= 120)
	{
		return 11;
	}
	else if (Global_40.f_11095.f_35 >= 80)
	{
		return 10;
	}
	return 9;
}

void func_459(int iParam0, bool bParam1, int iParam2)
{
	func_513((MISC::GET_GAME_TIMER() + iParam2), !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1955569->f_1.f_2.f_1, iParam0);
	func_514(iParam0);
}

void func_460(int iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_16[2]), 0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[2]), 1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_20[2]), func_515(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_24[2]), "pausemenu_player");
}

void func_461(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	bVar3 = false;
	if (func_516(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_517(iVar5, &iVar2, &iVar0))
			{
				if (!func_518(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_519(iVar2);
					if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar1))
					{
						if (bParam0)
						{
							UNLOCK::_UNLOCK_SET_UNLOCKED(iVar1, false);
						}
					else
					{
						}
						else
						{
							if (func_520(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_453() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_453() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_521();
							}
							if (bVar3)
							{
								UNLOCK::_UNLOCK_SET_UNLOCKED(iVar1, true);
								bVar3 = false;
							}
						}
						iVar5++;
					}
				}
			}
		}
	}

char* func_462(int iParam0)
{
	switch (iParam0)
	{
		case 2139774588:
			return "HONOR_EVENT_LOOT_INNOCENT";
		case 1142025875:
			return "HONOR_EVENT_AMBIENT_KILL";
		case 1587891565:
			return "HONOR_EVENT_AMBIENT_KO";
		case 1877013492:
			return "HONOR_EVENT_SCARE";
		case -643014279:
			return "HONOR_EVENT_KILL_VERMIN";
		case -597116214:
			return "HONOR_EVENT_KILL_FARM_ANIMAL";
		case 551416228:
			return "HONOR_EVENT_KILL_HORSE";
		case 1022576842:
			return "HONOR_EVENT_STEAL_HORSE";
		case 953325896:
			return "HONOR_EVENT_STEAL_DONKEY";
		case 508358508:
			return "HONOR_EVENT_STEAL_MULE";
		case -856432278:
			return "HONOR_EVENT_STEAL_WAGON";
		case -735200598:
			return "HONOR_EVENT_TRAMPLED_INNOCENT";
		case -2010847721:
			return "HONOR_EVENT_ABANDON_ANIMALS";
		case 446961221:
			return "HONOR_EVENT_ANIMAL_BLEEDOUT";
		case -1972216640:
			return "HONOR_EVENT_ANTAGONIZE";
		case 530833824:
			return "HONOR_EVENT_THEFT";
		case 1682361219:
			return "HONOR_EVENT_INTERVENED";
		case 158959085:
			return "HONOR_EVENT_WANTED_IN_CAMP";
		case 1919819559:
			return "HONOR_EVENT_DONATED_GAME";
		case 1461411082:
			return "HONOR_EVENT_ITEM_REQUEST";
		case -549508280:
			return "HONOR_EVENT_LONG_ABSENCE";
		case -1787248475:
			return "HONOR_EVENT_CRUEL_DEATH";
		case 932872355:
			return "HONOR_EVENT_JUSTICE_SERVED";
		case -1091304842:
			return "HONOR_EVENT_CHEAT";
		default:
			break;
	}
	return "";
}

var func_463(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
{
	struct<4> Var0;
	struct<7> Var13;
	var uVar20;

	Var0 = -2;
	Var0.f_1 = sParam5;
	Var0.f_2 = sParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = _NAMESPACE71::_0xB249EBCB30DD88E0(&Var0, &Var13, iParam8);
	func_522(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_464(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_523(iParam0))
	{
		return 0;
	}
	if (!func_379())
	{
		return 0;
	}
	if (!func_524(iParam0, &iVar0, &iVar1))
	{
		return 0;
	}
	if (iVar0 == -816321659 && Global_1572887->f_12 != -1)
	{
		return 0;
	}
	STATS::CHAL_ADD_GOAL_PROGRESS_INT(iVar0, iVar1, iParam1);
	return 1;
}

int func_465(int iParam0)
{
	if (!func_40(iParam0))
	{
		return -1;
	}
	return func_466(iParam0);
}

int func_466(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_501(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

int func_467(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (bParam2)
			{
				return (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iParam0, true) && PED::GET_MOUNT(iParam0) == iParam1);
			}
			else
			{
				return (PED::IS_PED_ON_MOUNT(iParam0) && PED::GET_MOUNT(iParam0) == iParam1);
			}
		}
	}
	return 0;
}

int func_468()
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

void func_469(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 - (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1));
}

void func_470(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		if (((*Global_1945938)[iParam0 /*18*/])->f_5 == 5 && !func_408(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, 0);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
		}
	}
}

void func_471(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
	}
}

void func_472(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 || iParam1);
}

int func_473(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_408(iVar0, 2))
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
				func_525(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}

void func_474(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (iParam3 && !func_238(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = func_368(iParam0);
	func_475(iParam0, 18, 0, 1);
	func_475(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1);
	}
	HUD::_UIPROMPT_SET_GROUP(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam4, iParam2);
}

void func_475(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam3 && !func_238(iParam0))
	{
		return;
	}
	iVar0 = func_368(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam1, iParam2);
}

void func_476(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4)
{
	int iVar0;

	if (iParam4 && !func_238(iParam0))
	{
		return;
	}
	iVar0 = func_368(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, MISC::_CREATE_VAR_STRING(10, sParam1, sParam2, sParam3));
}

int func_477(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return 1;
	}
	return 0;
}

int func_478(int iParam0, int iParam1, char* sParam2, var uParam3, float fParam4, var uParam5, bool bParam6, var uParam7, var uParam8, bool bParam9, var uParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, var uParam15)
{
	bool bVar0;
	float fVar1;
	int iVar2;
	struct<8> Var3;

	uParam5 = uParam5;
	iParam1 = iParam1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return -1;
	}
	if (bParam6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iParam0, iParam1, 17))
			{
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	if (fParam4 == -1f)
	{
		if (func_526())
		{
			fParam4 = 50f;
		}
		else
		{
			fParam4 = 75f;
		}
	}
	if (bParam9)
	{
		if (iParam0 != Global_35 && iParam1 != Global_35)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				if (func_527(iParam0, 1, 1) > fParam4)
				{
					return -1;
				}
			}
		}
	}
	bVar0 = (iParam0 == iParam1 || iParam1 == 0);
	if ((!ENTITY::IS_ENTITY_DEAD(iParam0) || iParam11 == 1718175949) || bParam9 == 0)
	{
		if (!bVar0)
		{
			fVar1 = func_250(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || uParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_18(&uLocal_0);
			if (!bVar0 && uParam10)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_528(iParam0, iParam1, fVar1, bParam13))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam1, iParam0, 7500, 48, 31, 0);
				}
			}
			if (bParam12)
			{
				Var3.f_5 = 1;
				Var3.f_6 = 1;
				Var3 = sParam2;
				Var3.f_3 = iParam11;
				Var3.f_4 = iParam1;
				Var3.f_5 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
				Var3.f_6 = uParam15;
				Var3.f_2 = uParam5;
				if (bParam14)
				{
					MISC::SET_BIT(&(Var3.f_7), 3);
					MISC::SET_BIT(&(Var3.f_7), 2);
				}
				iVar2 = AUDIO::_0x72E4D1C4639BC465(iParam0, &Var3);
				if (iVar2 >= 0)
				{
					AUDIO::_0xB18FEC133C7C6C69(iVar2);
				}
			}
			else
			{
				iVar2 = func_365(func_529(iParam0, sParam2, iParam11, iParam1, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0, uParam5, uParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

bool func_479(int iParam0, int iParam1)
{
	if (func_229() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iParam0]), iParam1);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iParam0]), iParam1);
}

int func_480(int iParam0)
{
	if (func_229() != -1)
	{
		if (func_482(iParam0, 4))
		{
			return 0;
		}
	}
	else if (func_482(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

int func_481(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_482(iParam0, 65536) && !func_482(iParam0, 32768))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if ((Global_40.f_7756[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_482(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0 /*3*/] - iVar1);
			if ((Global_40.f_7756[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && func_482(iParam0, 32768))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_482(int iParam0, int iParam1)
{
	return ((Global_1905944->f_22[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

bool func_483(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_484()
{
	return Global_1905944->f_5694;
}

int func_485(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

int func_486(int iParam0)
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

void func_487(int* iParam0, int iParam1)
{
	if (!func_235(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_236(iParam0, 14);
		}
	}
}

bool func_488(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_489(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_490(int iParam0, int iParam1)
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

bool func_491(int* iParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, var uParam8, float fParam9, bool bParam10, int iParam11)
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

bool func_492(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_238(iParam0))
	{
		return false;
	}
	iVar0 = func_368(iParam0);
	if (HUD::_0xCD072523791DDC1B(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

bool func_493(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_238(iParam0))
	{
		return false;
	}
	iVar0 = func_368(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_494(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_238(iParam0))
	{
		return;
	}
	iVar0 = func_368(iParam0);
	HUD::_UIPROMPT_RESTART_MODES(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

int func_495(var uParam0, float fParam1)
{
	if (!func_150(uParam0))
	{
		return 0;
	}
	if (func_152(uParam0) > fParam1)
	{
		return 1;
	}
	return 0;
}

bool func_496(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_497(int iParam0)
{
	return func_433(iParam0, Global_1310750->f_16072 | 64);
}

void func_498(int iParam0)
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

void func_499(int iParam0, int iParam1, bool bParam2)
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

int func_500(int iParam0)
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

int func_501(int iParam0)
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

int func_502(int iParam0)
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

int func_503(int iParam0)
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

bool func_504(int iParam0, int iParam1)
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

int func_505(int iParam0, int iParam1)
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

bool func_506(int iParam0, int iParam1)
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
	if (!func_504(iParam0, iVar0))
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

void func_507(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

int func_508(int iParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4, bool bParam5)
{
	if (uParam3 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (!bParam5 && !PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			return 0;
		}
	}
	if (uParam3 && func_530(iParam0))
	{
		return 0;
	}
	if (bParam4)
	{
		if (PED::IS_PED_ON_MOUNT(iParam0))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		if (func_531(iParam0, 0) != -1)
		{
			return 0;
		}
	}
	return 1;
}

int func_509(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (iParam0 == uParam1[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_510()
{
	return Global_40.f_11095.f_35;
}

int func_511(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_512(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_513(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_532(bParam1);
	}
}

void func_514(int iParam0)
{
	_NAMESPACE84::_0x74BCCEB233AD95B2(-156028329, iParam0);
}

char* func_515(int iParam0)
{
	if (iParam0 <= -320)
	{
		return "HONOR_BAD_8";
	}
	else if (iParam0 <= -280)
	{
		return "HONOR_BAD_7";
	}
	else if (iParam0 <= -240)
	{
		return "HONOR_BAD_6";
	}
	else if (iParam0 <= -200)
	{
		return "HONOR_BAD_5";
	}
	else if (iParam0 <= -160)
	{
		return "HONOR_BAD_4";
	}
	else if (iParam0 <= -120)
	{
		return "HONOR_BAD_3";
	}
	else if (iParam0 <= -80)
	{
		return "HONOR_BAD_2";
	}
	else if (iParam0 < 0)
	{
		return "HONOR_BAD_1";
	}
	else if (iParam0 <= 40)
	{
		return "HONOR_GOOD_1";
	}
	else if (iParam0 >= 320)
	{
		return "HONOR_GOOD_8";
	}
	else if (iParam0 >= 280)
	{
		return "HONOR_GOOD_7";
	}
	else if (iParam0 >= 240)
	{
		return "HONOR_GOOD_6";
	}
	else if (iParam0 >= 200)
	{
		return "HONOR_GOOD_5";
	}
	else if (iParam0 >= 160)
	{
		return "HONOR_GOOD_4";
	}
	else if (iParam0 >= 120)
	{
		return "HONOR_GOOD_3";
	}
	else if (iParam0 >= 80)
	{
		return "HONOR_GOOD_2";
	}
	return "HONOR_GOOD_1";
}

int func_516(var uParam0)
{
	vector3 vVar0;

	if (!func_533(23, &vVar0))
	{
		return 0;
	}
	vVar0.f_2 = 1781729525;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(vVar0.f_1), &vVar0))
	{
		vVar0.f_2 = -2103982008;
		*uParam0 = DATAFILE::_DATAFILE_GET_NUM_NODES(&vVar0);
		return 1;
	}
	return 0;
}

int func_517(int iParam0, var uParam1, var uParam2)
{
	struct<4> Var0;
	var uVar5;

	if (!func_533(23, &Var0))
	{
		return 0;
	}
	Var0.f_2 = 1781729525;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = -57097983;
		Var0.f_3 = iParam0;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			Var0.f_2 = 2027336698;
			DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
			*uParam1 = uVar5;
			Var0.f_2 = 316053773;
			DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
			*uParam2 = uVar5;
			return 1;
		}
	}
	return 0;
}

bool func_518(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_519(int iParam0)
{
	return iParam0;
}

int func_520(int iParam0)
{
	vector3 vVar0;

	if (!func_518(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_521()
{
	int iVar0;

	iVar0 = func_453();
	switch (iVar0)
	{
		case 120:
		case 160:
		case 200:
			return -608161198;
		case 240:
		case 280:
		case 320:
			return -2132502231;
		default:
			break;
	}
	return -1130204298;
}

void func_522(char* sParam0, char* sParam1, int iParam2)
{
	_NAMESPACE84::_0x74BCCEB233AD95B2(-466562563, MISC::GET_HASH_KEY(sParam0));
	_NAMESPACE84::_0x74BCCEB233AD95B2(1885309238, MISC::GET_HASH_KEY(sParam1));
	_NAMESPACE84::_0x74BCCEB233AD95B2(-826961056, iParam2);
}

int func_523(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return 0;
	}
	return 1;
}

int func_524(int iParam0, var uParam1, var uParam2)
{
	if (!func_523(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			*uParam1 = -816321659;
			*uParam2 = -987026056;
			break;
		case 1:
			*uParam1 = -816321659;
			*uParam2 = -1822602787;
			break;
		case 2:
			*uParam1 = -816321659;
			*uParam2 = -1602329569;
			break;
		case 3:
			*uParam1 = -816321659;
			*uParam2 = 1881899898;
			break;
		case 4:
			*uParam1 = -816321659;
			*uParam2 = -1906196506;
			break;
		case 5:
			*uParam1 = -816321659;
			*uParam2 = -674995867;
			break;
		case 6:
			*uParam1 = -816321659;
			*uParam2 = -734156617;
			break;
		case 7:
			*uParam1 = -816321659;
			*uParam2 = 261758426;
			break;
		case 8:
			*uParam1 = -816321659;
			*uParam2 = 1545586131;
			break;
		case 9:
			*uParam1 = -816321659;
			*uParam2 = -489125522;
			break;
		case 10:
			*uParam1 = -816321659;
			*uParam2 = 1190367681;
			break;
		case 11:
			*uParam1 = -816321659;
			*uParam2 = -1179367301;
			break;
		case 12:
			*uParam1 = -816321659;
			*uParam2 = 1154513253;
			break;
		case 13:
			*uParam1 = -816321659;
			*uParam2 = -1825640214;
			break;
		case 14:
			*uParam1 = -816321659;
			*uParam2 = 1209829059;
			break;
		case 15:
			*uParam1 = -816321659;
			*uParam2 = -1713230487;
			break;
		case 16:
			*uParam1 = -816321659;
			*uParam2 = 2092309893;
			break;
		default:
			return 0;
	}
	return 1;
}

void func_525(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, var uParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_470(iParam0, 1);
	func_471(iParam0, 1);
	func_472(iParam0, 128);
}

bool func_526()
{
	return (Global_1894899 & 1 != 0 && func_534() != -1);
}

float func_527(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return -1f;
	}
	return func_250(Global_35, iParam0, bParam1, iParam2);
}

int func_528(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!bParam3)
	{
		return 0;
	}
	if (fParam2 > 25f)
	{
		return 0;
	}
	if (iParam1 == Global_35)
	{
		if (PED::IS_PED_IN_COMBAT(Global_35, 0))
		{
			return 0;
		}
	}
	return 1;
}

bool func_529(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, var uParam6, var uParam7)
{
	struct<7> Var0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = uParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = bParam4;
	Var0.f_6 = uParam7;
	return func_259(iParam0, &Var0);
}

int func_530(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_GROUP_MEMBER(iParam0, func_535(), 1))
	{
		return 1;
	}
	return 0;
}

int func_531(int iParam0, bool bParam1)
{
	return func_536(iParam0, Global_1894899->f_2, bParam1);
}

void func_532(bool bParam0)
{
	func_537(bParam0);
	Global_1955569->f_1.f_1 = bParam0;
	if (bParam0 == 1)
	{
		HUD::_0x4CC5F2FC1332577F(121713391);
	}
	else
	{
		HUD::_0x8BC7C1F929D07BF3(121713391);
	}
}

int func_533(int iParam0, var uParam1)
{
	if (!func_538(iParam0))
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

int func_534()
{
	return Global_1894899->f_2;
}

int func_535()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

int func_536(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	int iVar1;

	if (iParam1 == -1)
	{
		return -1;
	}
	if (!func_539(iParam1, &uVar0, &iVar1, 0, 0))
	{
		return -1;
	}
	return func_540(iParam0, uVar0, iVar1, bParam2);
}

void func_537(bool bParam0)
{
	_NAMESPACE84::_0xB6FD96420C0126A1(-1056478928, bParam0);
}

bool func_538(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_539(int iParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	bool bVar0;

	bVar0 = func_229() != -1;
	switch (iParam0)
	{
		case 76:
			*uParam1 = 0;
			if (bParam3)
			{
				*uParam2 = 47;
			}
			else
			{
				*uParam2 = 63;
			}
			if (bVar0)
			{
				*uParam2 = 5;
			}
			break;
		case 105:
			*uParam1 = 69;
			if (bParam3)
			{
				*uParam2 = 127;
			}
			else
			{
				*uParam2 = 136;
			}
			if (bVar0)
			{
				*uParam2 = 72;
			}
			break;
		case 5:
			*uParam1 = 137;
			*uParam2 = 324;
			if (bVar0)
			{
				*uParam2 = 142;
			}
			break;
		case 61:
			*uParam1 = 380;
			*uParam2 = 381;
			if (bVar0)
			{
				*uParam2 = 380;
			}
			break;
		case 78:
			*uParam1 = 382;
			*uParam2 = 431;
			if (bVar0)
			{
				*uParam2 = 384;
			}
			break;
		case 92:
			*uParam1 = 443;
			*uParam2 = 471;
			if (bVar0)
			{
				*uParam2 = 443;
			}
			break;
		case 26:
			*uParam1 = 472;
			if (bParam3)
			{
				*uParam2 = 500;
			}
			else
			{
				*uParam2 = 502;
			}
			if (bVar0)
			{
				*uParam2 = 472;
			}
			break;
		case 38:
			*uParam1 = 508;
			*uParam2 = 553;
			if (bVar0)
			{
				*uParam2 = 509;
			}
			break;
		case 68:
			*uParam1 = 554;
			*uParam2 = 565;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 65:
			*uParam1 = 566;
			*uParam2 = 588;
			if (bVar0)
			{
				*uParam2 = 566;
			}
			break;
		case 69:
			*uParam1 = 589;
			if (bParam3)
			{
				*uParam2 = 598;
			}
			else
			{
				*uParam2 = 612;
			}
			if (bVar0)
			{
				*uParam2 = 590;
			}
			break;
		case 75:
			*uParam1 = 503;
			*uParam2 = 506;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 93:
			*uParam1 = 613;
			*uParam2 = 625;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 95:
			*uParam1 = 626;
			*uParam2 = 641;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 97:
			*uParam1 = 642;
			*uParam2 = 643;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 3:
			*uParam1 = 644;
			*uParam2 = 656;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 6:
			*uParam1 = 657;
			*uParam2 = 658;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 32:
			*uParam1 = 325;
			*uParam2 = 344;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 82:
			*uParam1 = 659;
			if (bParam3)
			{
				*uParam2 = 673;
			}
			else
			{
				*uParam2 = 690;
			}
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 35:
			*uParam1 = 691;
			*uParam2 = 700;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 56:
			*uParam1 = 701;
			*uParam2 = 708;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 22:
			if (bParam4)
			{
				*uParam1 = 715;
			}
			else
			{
				*uParam1 = 715;
			}
			*uParam2 = 723;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 110:
			*uParam1 = 724;
			*uParam2 = 730;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 64:
			*uParam1 = 736;
			*uParam2 = 740;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 66:
			*uParam1 = 745;
			*uParam2 = 750;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 70:
			*uParam1 = 751;
			*uParam2 = 754;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 77:
			*uParam1 = 731;
			*uParam2 = 732;
			break;
		case 96:
			*uParam1 = 741;
			*uParam2 = 743;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 29:
			*uParam1 = 744;
			*uParam2 = 744;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 100:
			*uParam1 = 755;
			*uParam2 = 763;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 102:
			*uParam1 = 764;
			*uParam2 = 767;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 72:
			*uParam1 = 733;
			*uParam2 = 735;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 124:
			*uParam1 = 791;
			*uParam2 = 793;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 86:
			*uParam1 = 768;
			*uParam2 = 772;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 126:
			*uParam1 = 773;
			*uParam2 = 779;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 120:
			*uParam1 = 432;
			*uParam2 = 442;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 115:
			*uParam1 = 345;
			*uParam2 = 375;
			if (bVar0)
			{
				*uParam2 = 375;
			}
			break;
		case 125:
			*uParam1 = 376;
			*uParam2 = 379;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 116:
			*uParam1 = 783;
			*uParam2 = 790;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 21:
			*uParam1 = 780;
			*uParam2 = 782;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 42:
			*uParam1 = 794;
			*uParam2 = 798;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 89:
			*uParam1 = 799;
			*uParam2 = 800;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 23:
			*uParam1 = 801;
			*uParam2 = 801;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 28:
			*uParam1 = 802;
			*uParam2 = 803;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 101:
			*uParam1 = 804;
			*uParam2 = 806;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 117:
			*uParam1 = 507;
			*uParam2 = 507;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 11:
			*uParam1 = 807;
			*uParam2 = 833;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 128:
			*uParam1 = 834;
			*uParam2 = 857;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		default:
			*uParam1 = -1;
			*uParam2 = -1;
			break;
	}
	if (*uParam1 == -1 || *uParam2 == -1)
	{
		return 0;
	}
	return 1;
}

int func_540(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (ENTITY::IS_ENTITY_DEAD(iParam0) && !bParam3)
	{
		return -1;
	}
	iVar0 = _NAMESPACE48::_0x32A1E3B83D501096(iParam0);
	if (!_NAMESPACE48::_0x800DF3FC913355F3(iVar0))
	{
		return -1;
	}
	iVar1 = uParam1;
	iVar1 = uParam1;
	while (iVar1 <= iParam2)
	{
		iVar2 = iVar1;
		if (func_541(iVar2) != 0 && _NAMESPACE48::_0x800DF3FC913355F3(func_542(iVar2)))
		{
			if (func_542(iVar2) == iVar0)
			{
				return iVar2;
			}
		}
		iVar1++;
	}
	return -1;
}

int func_541(int iParam0)
{
	if (!func_543(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/];
}

int func_542(int iParam0)
{
	if (!func_543(iParam0))
	{
		return 0;
	}
	return ((*Global_1895087)[iParam0 /*3*/])->f_1;
}

bool func_543(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

