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
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	bool bLocal_17 = false;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	char cLocal_27[32] = "";
	char cLocal_31[32] = "";
	char* sLocal_35 = NULL;
	char* sLocal_36 = NULL;
	char* sLocal_37 = NULL;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	struct<113> Local_47 = { 1, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1056964608, 1132462080, 1108082688, 1084227584, 1152319488, 1, 0, 1, 0, 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1056964608, 1056964608, 1056964608, 1056964608, 0, 0, 0, 0, 1061997773, 1091567616, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_160 = 0;
	float fLocal_161 = 0f;
	bool bLocal_162 = false;
	int iLocal_163 = 0;
	vector3 vLocal_164 = { 0f, 0f, 0f };
	vector3 vLocal_167 = { 0f, 0f, 0f };
	vector3 vLocal_170 = { 0f, 0f, 0f };
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	float fLocal_175 = 0f;
	float fLocal_176 = 0f;
	vector3 vLocal_177 = { 0f, 0f, 0f };
	vector3 vLocal_180 = { 0f, 0f, 0f };
	int iLocal_183 = 0;
	int iLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	char* sLocal_193[8] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	int iLocal_205 = 0;
	int iLocal_206[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_214 = 0;
	int iLocal_215 = 0;
	int iLocal_216 = 0;
	float fLocal_217 = 0f;
	float fLocal_218 = 0f;
	int iLocal_219 = 0;
	int iLocal_220 = 0;
	int iLocal_221 = 0;
	int iLocal_222 = 0;
	int iLocal_223 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	StringCopy(&cLocal_27, "", 32);
	StringCopy(&cLocal_31, "", 32);
	sLocal_35 = "CameraViewfinder";
	sLocal_36 = "CameraTakePicture";
	sLocal_37 = "CameraTransitionBlink";
	iLocal_46 = 1;
	fLocal_176 = 0f;
	fLocal_218 = 0.5f;
	iLocal_220 = 4;
	iLocal_221 = -1534086282;
	iLocal_223 = -193491261;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(515))
	{
		func_1(&Local_47, 0);
		func_2();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	while (iLocal_46)
	{
		if (iLocal_13 == 1)
		{
			func_3();
		}
		if (func_4(&(Local_47.f_1[2]), 1))
		{
			if (MISC::IS_BIT_SET(&Global_1357510, 5))
			{
				func_5(&(Local_47.f_1[2]), 0, 1);
			}
			else
			{
				func_5(&(Local_47.f_1[2]), 1, 1);
			}
		}
		if (func_4(&(Local_47.f_1[8]), 1))
		{
			if (iLocal_216)
			{
				func_5(&(Local_47.f_1[8]), 0, 1);
			}
			else
			{
				func_5(&(Local_47.f_1[8]), 1, 1);
			}
		}
		func_6(2);
		func_6(4);
		func_6(8);
		func_6(16);
		func_6(32);
		func_6(128);
		func_6(256);
		func_6(512);
		func_6(1024);
		func_6(2048);
		func_6(4096);
		func_6(16384);
		func_6(1);
		PAD::DISABLE_CONTROL_ACTION(0, -128997553, false);
		PAD::DISABLE_CONTROL_ACTION(0, -711536720, false);
		if (iLocal_46)
		{
			if (func_7(&Local_47))
			{
				iLocal_46 = 1;
			}
			else
			{
				iLocal_46 = 0;
			}
		}
		func_8(Local_47);
		func_9(&Local_47);
		func_10(&(Local_47.f_90), &(Local_47.f_91), &(Local_47.f_94), &(Local_47.f_95), 1301263553, -39308912, -1450761377, -771458680, 2);
		if (func_11(&(Local_47.f_1[2]), 1) || func_11(&(Local_47.f_1[7]), 1))
		{
			iLocal_38 = 1;
			if (func_12(&Local_47) == 3)
			{
				func_13(&Local_47, 15);
			}
			else if (func_12(&Local_47) != 6)
			{
			}
			else
			{
				func_14();
				if (AUDIO::_0x4AD019591E94C064("Collapse_Camera", Global_35, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::_0x6FB1DA3CA9DA7D90("Collapse_Camera", Global_35, "CAMERA_SOUNDSET", 0, 0, 0);
				}
				iLocal_191 = MISC::GET_GAME_TIMER();
				iLocal_192 = 1;
				func_15();
				Global_1357507 = 0;
				func_13(&Local_47, 4);
			}
		}
		func_16(&Local_47);
		iVar0 = func_12(&Local_47);
		if (func_17())
		{
		}
		switch (iVar0)
		{
			case 0:
				if (func_18())
				{
					iLocal_13 = 0;
					uLocal_21 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "playerCamera");
					uLocal_22 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uLocal_21, "cameraRollCapacityLabel", "Disabled");
					func_19();
					func_13(&Local_47, 1);
				}
				else
				{
					if (func_20(&Local_47))
					{
						GRAPHICS::_0xA42EDF1E88734A7E();
						iLocal_13 = 1;
						func_21(&Local_47);
					}
					func_13(&Local_47, 1);
				}
				break;
			case 1:
				if (func_20(&Local_47))
				{
					func_21(&Local_47);
				}
				func_22();
				iLocal_10 = MISC::GET_GAME_TIMER();
				func_13(&Local_47, 2);
				break;
			case 2:
				if (func_20(&Local_47))
				{
					func_21(&Local_47);
				}
				if (func_23())
				{
					if (func_24(iLocal_10, 0))
					{
						func_13(&Local_47, 12);
						HUD::_0x4CC5F2FC1332577F(959420967);
						MISC::SET_GAME_PAUSED(true);
					}
				}
				else if (func_24(iLocal_10, 0) && func_25(Global_35, 1, 0, 0) == joaat("weapon_kit_camera"))
				{
					func_13(&Local_47, 3);
				}
				break;
			case 4:
				func_9(&Local_47);
				PAD::_0x2804658EB7D8A50B(5, 499451365);
				if (iLocal_192)
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_191) > 500)
					{
						HUD::_0x8BC7C1F929D07BF3(959420967);
						CAM::SET_CAM_ACTIVE(Local_47.f_32, false);
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
						CAM::DETACH_CAM(Local_47.f_32);
						CAM::DESTROY_CAM(Local_47.f_32, false);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1065353216);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						func_13(&Local_47, 3);
						func_26();
						iLocal_192 = 0;
						func_27();
					}
				}
				break;
			case 3:
				PAD::_0x2804658EB7D8A50B(5, 499451365);
				HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-857683846, "CAM_CONG_C", 1, 0, 0, 0);
				if ((MISC::GET_GAME_TIMER() - iLocal_184) > 100)
				{
					func_28();
					iLocal_184 = MISC::GET_GAME_TIMER();
				}
				if (func_20(&Local_47))
				{
					func_29(&Local_47);
					func_30(3);
					func_31(1);
					func_21(&Local_47);
				}
				PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::GET_PLAYER_INDEX(), 0, 0, -1, 0);
				if (iLocal_38 == 1 && &Global_1357508 == 0)
				{
					if (PAD::IS_CONTROL_RELEASED(0, 2003789289))
					{
						iLocal_38 = 0;
					}
					else
					{
						iLocal_38 = 1;
					}
				}
				if (&Global_1357508 == 1)
				{
					iLocal_38 = 0;
				}
				if (iLocal_183 && iLocal_38 == 0)
				{
					func_5(&(Local_47.f_1[0]), 1, 1);
					if (func_32(&(Local_47.f_1[0]), 1) || &Global_1357508 == 1)
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID(), 1, 0);
						PAD::DISABLE_CONTROL_ACTION(0, 1301263553, false);
						PAD::DISABLE_CONTROL_ACTION(0, -39308912, false);
						if (&Global_1357508 != 1)
						{
						}
						else
						{
							Global_1357508 = 0;
						}
						Global_1357507 = 1;
						func_15();
						HUD::_0x4CC5F2FC1332577F(959420967);
						func_33();
						iLocal_160 = MISC::GET_GAME_TIMER();
						func_13(&Local_47, 5);
					}
				}
				else
				{
					func_5(&(Local_47.f_1[0]), 0, 1);
				}
				if ((MISC::GET_GAME_TIMER() - iLocal_163) > 600)
				{
					func_34();
					iLocal_163 = MISC::GET_GAME_TIMER();
				}
				if (bLocal_162)
				{
					func_5(&(Local_47.f_1[1]), 1, 1);
					if (func_32(&(Local_47.f_1[1]), 1))
					{
						if (func_35(Global_35, 0))
						{
						}
						else
						{
							iLocal_188 = 0;
							iLocal_190 = 0;
							func_15();
							func_13(&Local_47, 8);
							if (!func_36(&uLocal_185))
							{
								func_37(&uLocal_185, 1);
							}
							if (AUDIO::_0x4AD019591E94C064("Place_Tripod", Global_35, "CAMERA_SOUNDSET", -2))
							{
								AUDIO::_0x6FB1DA3CA9DA7D90("Place_Tripod", Global_35, "CAMERA_SOUNDSET", 0, 0, 0);
							}
						}
					}
				}
				else
				{
					func_5(&(Local_47.f_1[1]), 0, 1);
				}
				break;
			case 5:
				if (func_20(&Local_47))
				{
					func_21(&Local_47);
				}
				if (func_38() && (MISC::GET_GAME_TIMER() - iLocal_160) > 500)
				{
					func_39();
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID(), 1, 0);
					Local_47.f_68 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
					Local_47.f_71 = { ENTITY::GET_ENTITY_ROTATION(Global_35, 2) };
					Local_47.f_83 = { Local_47.f_71, Local_47.f_71.f_1, Local_47.f_71.f_2 };
					Local_47.f_77 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_47.f_68, Local_47.f_71.f_2, 0f, 0.3f, 0.5f) };
					Local_47.f_110 = 0;
					Local_47.f_83 = { 0f, 0f, 0f };
					Local_47.f_82 = 0f;
					Local_47.f_81 = 0f;
					Local_47.f_32 = CAM::CREATE_CAM_WITH_PARAMS("KIT_CAMERA", Local_47.f_77, Local_47.f_83, 65f, false, 2);
					CAM::ATTACH_CAM_TO_PED_BONE(Local_47.f_32, Global_35, 21030, 0f, 0.2f, 0f, true);
					CAM::SET_CAM_NEAR_CLIP(Local_47.f_32, 0.25f);
					Local_47.f_33 = 5f;
					Local_47.f_33.f_1 = 2f;
					Local_47.f_33.f_2 = 128f;
					Local_47.f_33.f_3 = 25f;
					Local_47.f_33.f_4 = 25f;
					Local_47.f_33.f_5 = 60f;
					Local_47.f_33.f_6 = 1;
					Local_47.f_33.f_7 = 0;
					Local_47.f_33.f_8 = 1;
					Local_47.f_33.f_9 = 1;
					CAM::_0xE4B7945EF4F1BFB2(Local_47.f_32, &(Local_47.f_33));
					CAM::_0x9F97E85EC142255E(Local_47.f_32, Local_47.f_110);
					CAM::_0x42ED56B02E05D109(Local_47.f_32, false);
					CAM::SET_CAM_ACTIVE(Local_47.f_32, true);
					CAM::RENDER_SCRIPT_CAMS(true, true, 0, false, false, 0);
					if (AUDIO::_0x4AD019591E94C064("Expand_Camera", Global_35, "CAMERA_SOUNDSET", -2))
					{
						AUDIO::_0x6FB1DA3CA9DA7D90("Expand_Camera", Global_35, "CAMERA_SOUNDSET", 0, 0, 0);
					}
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					func_34();
					iLocal_163 = MISC::GET_GAME_TIMER();
					func_27();
					func_13(&Local_47, 6);
				}
				break;
			case 6:
				CAM::_0x3C8F74E8FE751614();
				PAD::_0x2804658EB7D8A50B(4, 1499787188);
				if (iLocal_39 == 0)
				{
					if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()))
					{
						Global_1357509 = 1;
						iLocal_39 = 1;
					}
				}
				if (MISC::IS_BIT_SET(&Global_1357510, 6))
				{
				}
				else
				{
					HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-857683846, "CAM_CONG_HC", 1, 0, 0, 0);
				}
				if (func_20(&Local_47))
				{
					func_30(6);
					func_21(&Local_47);
				}
				func_40(&Local_47);
				if (iLocal_42 == 0)
				{
					if (func_41(&(Local_47.f_1[6])) && !func_42(&Local_47, 32))
					{
						func_29(&Local_47);
						if (AUDIO::_0x4AD019591E94C064("Take_Photo", Global_35, "CAMERA_SOUNDSET", -2))
						{
							AUDIO::_0x6FB1DA3CA9DA7D90("Take_Photo", Global_35, "CAMERA_SOUNDSET", 0, 0, 0);
						}
						func_43(1);
						func_44(&Local_47, 32);
					}
					if (!func_42(&Local_47, 32))
					{
						if (func_41(&(Local_47.f_1[5])))
						{
							func_45();
						}
					}
				}
				break;
			case 11:
				if (func_20(&Local_47))
				{
					Local_47.f_1[6] = func_46("CAM_TAKE_PHOTO", 129547951, Global_35, 1, 0, 0, 0, 0, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
					func_31(1);
					func_47("CAM_SNAP", 0, 0, 1);
					func_21(&Local_47);
				}
				if (func_48())
				{
					if (!func_42(&Local_47, 16))
					{
						func_13(&Local_47, 3);
					}
					else
					{
						func_13(&Local_47, 16);
					}
				}
				else
				{
					func_49(&Local_47);
				}
				break;
			case 10:
				func_50(&Local_47);
				PAD::_0x2804658EB7D8A50B(5, 499451365);
				iLocal_38 = 1;
				if (iLocal_189 == 0)
				{
					if (func_51(&uLocal_185) > 500)
					{
						if (CAM::DOES_CAM_EXIST(Local_47.f_32))
						{
							CAM::SET_CAM_ACTIVE(Local_47.f_32, false);
							CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
							CAM::DESTROY_CAM(Local_47.f_32, false);
						}
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID(), 0, 1);
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_kit_camera"), true, 0, false, false);
						WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(Global_35, true, true, true, false);
						ENTITY::SET_ENTITY_HEADING(Global_35, fLocal_217);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1065353216);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						func_26();
						iLocal_189 = 1;
					}
				}
				if (func_51(&uLocal_185) > 1000)
				{
					HUD::_0x8BC7C1F929D07BF3(959420967);
					func_27();
					func_52(&uLocal_185);
					func_14();
					func_13(&Local_47, 3);
				}
				break;
			case 8:
				func_50(&Local_47);
				if (iLocal_188 == 0)
				{
					if (func_51(&uLocal_185) > 500)
					{
						WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(Global_35, false, false, true, false);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID(), 0, 1);
						ENTITY::_0x203BEFFDBE12E96A(Global_35, vLocal_164, fLocal_175, 1, 0, 1);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID(), 0, 1);
						func_39();
						iLocal_216 = 0;
						iLocal_188 = 1;
					}
				}
				if (iLocal_188 != 1)
				{
				}
				else if (iLocal_190 == 0)
				{
					if (func_51(&uLocal_185) > 300)
					{
						iLocal_190 = 1;
						func_53(&Local_47);
					}
				}
				else if (func_51(&uLocal_185) > 1000)
				{
					func_52(&uLocal_185);
					func_54(&Local_47);
					func_27();
					func_13(&Local_47, 9);
				}
				break;
			case 9:
				func_50(&Local_47);
				CAM::_0x3C8F74E8FE751614();
				PAD::_0x2804658EB7D8A50B(4, 1499787188);
				HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-857683846, "CAM_CONG_HSP", 1, 0, 0, 0);
				if (func_20(&Local_47))
				{
					func_21(&Local_47);
				}
				func_54(&Local_47);
				if (func_32(&(Local_47.f_1[6]), 1) && !func_42(&Local_47, 32))
				{
					func_29(&Local_47);
					if (AUDIO::_0x4AD019591E94C064("Take_Photo", Global_35, "CAMERA_SOUNDSET", -2))
					{
						AUDIO::_0x6FB1DA3CA9DA7D90("Take_Photo", Global_35, "CAMERA_SOUNDSET", 0, 0, 0);
					}
					func_43(1);
					func_44(&Local_47, 32);
				}
				else if (func_32(&(Local_47.f_1[1]), 1))
				{
					func_13(&Local_47, 8);
				}
				if (!func_42(&Local_47, 32))
				{
					if (func_41(&(Local_47.f_1[5])))
					{
						func_45();
					}
				}
				break;
			case 7:
				break;
			case 15:
				if (func_20(&Local_47))
				{
					func_21(&Local_47);
				}
				func_29(&Local_47);
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), false, 0, false, false);
				TASK::TASK_SWAP_WEAPON(Global_35, 1, 0, 0, 0);
				func_13(&Local_47, 16);
				break;
			case 16:
				if (func_20(&Local_47))
				{
					func_21(&Local_47);
				}
				func_2();
				func_1(&Local_47, 1);
				if (PED::_0xD5FE956C70FF370B(Global_35))
				{
				}
				else
				{
					TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
				}
				SCRIPTS::TERMINATE_THIS_THREAD();
				break;
		}
		BUILTIN::WAIT(0);
		if (func_55())
		{
			if (func_56(&uLocal_202) > 1f)
			{
				func_57();
			}
		}
		if (iVar0 != 12)
		{
		}
		else
		{
			PAD::_0x2804658EB7D8A50B(4, 1499787188);
			HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-857683846, "CAM_CONG_PM", 1, 0, 0, 0);
			if (func_11(&(Local_47.f_1[7]), 1))
			{
				func_13(&Local_47, 15);
			}
			if (func_20(&Local_47))
			{
				func_29(&Local_47);
				func_30(12);
				func_31(1);
				func_21(&Local_47);
			}
			if (func_41(&(Local_47.f_1[6])) && !func_42(&Local_47, 32))
			{
				MISC::SET_GAME_PAUSED(false);
				func_29(&Local_47);
				if (AUDIO::_0x4AD019591E94C064("Take_Photo", Global_35, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::_0x6FB1DA3CA9DA7D90("Take_Photo", Global_35, "CAMERA_SOUNDSET", 0, 0, 0);
				}
				func_43(1);
				func_44(&Local_47, 32);
				iLocal_9 = 1;
			}
			if (!func_42(&Local_47, 32))
			{
				if (iLocal_9)
				{
					MISC::SET_GAME_PAUSED(true);
					iLocal_9 = 0;
				}
				if (func_41(&(Local_47.f_1[5])))
				{
					func_45();
				}
			}
		}
	}
	func_2();
	func_1(&Local_47, 1);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0, int iParam1)
{
	if (func_58())
	{
		Global_1357504 = uParam0->f_89;
		HUD::_0x8BC7C1F929D07BF3(-1404924319);
	}
	Global_1357503 = 0;
	func_59(0);
	GRAPHICS::_0xF5793BB386E1FF9C(0);
	ANIMSCENE::_0xCDCD7B2D49AEE73A(0);
	if (CAM::DOES_CAM_EXIST(uParam0->f_32))
	{
		CAM::DESTROY_CAM(uParam0->f_32, false);
	}
	SCRIPTS::SET_NO_LOADING_SCREEN(false);
	HUD::_0x8BC7C1F929D07BF3(959420967);
	Global_1357507 = 0;
	Global_1357508 = 0;
	AUDIO::_0x531A78D6BF27014B("CAMERA_SOUNDSET");
	if (!func_58())
	{
		PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Global_35);
	}
	STREAMING::REMOVE_CLIP_SET(func_60());
	STREAMING::REMOVE_ANIM_DICT(func_61());
	GRAPHICS::_0xF1142E5D64B47802(false, false);
	GRAPHICS::_0x614682E715ADBAAC();
	GRAPHICS::_0xD45547D8396F002A();
	func_29(uParam0);
	func_31(1);
	MAP::DISPLAY_RADAR(true);
	HUD::_0xAA03F130A637D923("CAMERA");
}

void func_2()
{
	if (iLocal_11 == 1)
	{
		_NAMESPACE76::_0x00A15B94CBA4F76F(iLocal_41);
	}
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uLocal_21);
	UISTATEMACHINE::_UISTATEMACHINE_DESTROY(1459179713);
	UISTATEMACHINE::_UIFLOWBLOCK_RELEASE(&iLocal_222);
	iLocal_222 = 0;
	func_26();
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_37))
	{
		GRAPHICS::ANIMPOSTFX_STOP(sLocal_37);
	}
	GRAPHICS::_0x37D7BDBA89F13959("CameraViewfinder");
	GRAPHICS::_0x37D7BDBA89F13959("CameraTransitionBlink");
	func_14();
	func_43(0);
}

void func_3()
{
	Local_47.f_106 = GRAPHICS::_0xB28894CD7408BD0C();
	if (Local_47.f_106 == 1)
	{
	}
	if (Local_47.f_106 == 0)
	{
		iLocal_12 = 0;
		iLocal_14 = GRAPHICS::_0x78C56B8A7B1D000C();
		iLocal_15 = GRAPHICS::_0x8E587FCD30E05592();
		uLocal_21 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "playerCamera");
		uLocal_22 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uLocal_21, "cameraRollCapacityLabel", "i_CurrentNumberOfLocalPhotos");
		uLocal_23 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uLocal_21, "photoModeLabel0", " ");
		uLocal_24 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uLocal_21, "photoModeLabel1", " ");
		uLocal_25 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uLocal_21, "photoModeLabel2", " ");
		uLocal_26 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uLocal_21, "photoModeLabel3", " ");
		func_62();
		iLocal_13 = 0;
		bLocal_17 = true;
		iLocal_18 = MISC::GET_GAME_TIMER();
	}
	else if (Local_47.f_106 == 2)
	{
		iLocal_12 = 1;
		uLocal_21 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "playerCamera");
		uLocal_22 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uLocal_21, "cameraRollCapacityLabel", "failed/failed");
		func_19();
		iLocal_13 = 0;
		bLocal_17 = false;
	}
}

bool func_4(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_63(iParam0))
	{
		return false;
	}
	iVar0 = func_64(iParam0);
	return HUD::_UIPROMPT_IS_ACTIVE(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_5(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (iParam2 && !func_63(iParam0))
	{
		return;
	}
	iVar0 = func_64(iParam0);
	if (bParam1)
	{
		func_65(iParam0, 4);
		func_66(iVar0, 1);
		func_67(iVar0, 1);
	}
	else
	{
		func_68(iParam0, 4);
		func_67(iVar0, 0);
	}
}

void func_6(int iParam0)
{
	Global_1935496->f_29 = (Global_1935496->f_29 || iParam0);
}

int func_7(var uParam0)
{
	if (&Global_1357509 == 1)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
		Global_1357509 = 0;
		return 0;
	}
	if (!func_58())
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(Global_35) > 0.33f)
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
				return 0;
			}
			if (PED::_0x7FC84E85D98F063D(Global_35))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
				return 0;
			}
		}
	}
	if (!func_58())
	{
		if (func_69())
		{
			if (func_70(19) || func_71(Global_1914319->f_16855.f_1))
			{
			}
			else
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
				return 0;
			}
		}
	}
	if (!func_58())
	{
		if (FIRE::IS_ENTITY_ON_FIRE(Global_35))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
			return 0;
		}
	}
	if (!func_72(Global_35, 0))
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
		return 0;
	}
	if ((!ENTITY::DOES_ENTITY_EXIST(Global_35) || PED::IS_PED_INJURED(Global_35)) || ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
		return 0;
	}
	if (!func_58())
	{
		if (!func_73(joaat("weapon_kit_camera"), 1, 0))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
			return 0;
		}
		if (func_12(uParam0) == 8)
		{
		}
		if ((func_12(uParam0) != 8 && func_12(uParam0) != 9) && func_12(uParam0) != 10)
		{
			if (func_25(Global_35, 1, 0, 1) != joaat("weapon_kit_camera"))
			{
				if (func_74(uParam0) == 0)
				{
					return 0;
				}
			}
		}
	}
	if (func_75())
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
		return 0;
	}
	if (!func_58())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, true) && !ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(Global_35, true)))
		{
			func_76("CAM_VEH", 10000, 0, 0, 0, 1);
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
			return 0;
		}
	}
	return 1;
}

void func_8(struct<108> Param0, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112)
{
	int iVar0;

	PED::SET_PED_RESET_FLAG(Global_35, 129, true);
	PED::SET_PED_RESET_FLAG(Global_35, 173, true);
	if (Param0.f_107 == 9)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 1301263553, false);
		PAD::DISABLE_CONTROL_ACTION(0, -39308912, false);
		PAD::DISABLE_CONTROL_ACTION(0, 308778731, false);
		PAD::DISABLE_CONTROL_ACTION(0, 1002303471, false);
		PAD::DISABLE_CONTROL_ACTION(0, -236813012, false);
		PAD::DISABLE_CONTROL_ACTION(0, -1971208180, false);
	}
	PAD::DISABLE_CONTROL_ACTION(2, -1304887797, false);
	PAD::DISABLE_CONTROL_ACTION(2, 130948705, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1632043089, false);
	PAD::DISABLE_CONTROL_ACTION(2, 1623727326, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1292666904, false);
	PAD::DISABLE_CONTROL_ACTION(0, 278816850, false);
	if (!Param0.f_107 == 3)
	{
		PAD::DISABLE_CONTROL_ACTION(0, -1404316431, false);
	}
	PAD::DISABLE_CONTROL_ACTION(0, -796643617, false);
	PAD::DISABLE_CONTROL_ACTION(0, -141724873, false);
	PAD::DISABLE_CONTROL_ACTION(0, -562475458, false);
	PAD::DISABLE_CONTROL_ACTION(0, 648122183, false);
	PAD::DISABLE_CONTROL_ACTION(0, -163964935, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1879280170, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1520437207, false);
	PAD::DISABLE_CONTROL_ACTION(0, -640622144, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1664638556, false);
	if (func_77(Global_35))
	{
		iVar0 = PED::GET_MOUNT(Global_35);
		if (!PED::IS_PED_INJURED(iVar0))
		{
			PED::SET_PED_RESET_FLAG(iVar0, 53, true);
			PED::SET_PED_RESET_FLAG(iVar0, 153, true);
			PED::_0x06D26A96CA1BCA75(iVar0, 3, 0f, 0);
		}
	}
}

void func_9(var uParam0)
{
	PAD::DISABLE_CONTROL_ACTION(0, -128997553, false);
	PAD::SET_INPUT_EXCLUSIVE(0, 1360019509);
	if ((((func_12(uParam0) == 8 || func_12(uParam0) == 9) || func_12(uParam0) == 10) || func_12(uParam0) == 5) || func_12(uParam0) == 6)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 1301263553, false);
		PAD::DISABLE_CONTROL_ACTION(0, -39308912, false);
	}
	if (!uParam0->f_107 == 3)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 255439828, false);
		func_78(0);
		PAD::DISABLE_CONTROL_ACTION(0, -813019446, false);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 1287709438, false);
	PAD::DISABLE_CONTROL_ACTION(0, -209515122, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1101824977, false);
	PAD::DISABLE_CONTROL_ACTION(0, -432665970, false);
	PAD::DISABLE_CONTROL_ACTION(0, -349518703, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1098542161, false);
	PAD::DISABLE_CONTROL_ACTION(0, -711536720, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1292666904, false);
	PAD::DISABLE_CONTROL_ACTION(0, 278816850, false);
	PAD::DISABLE_CONTROL_ACTION(0, -822242784, false);
	PAD::DISABLE_CONTROL_ACTION(0, 130948705, false);
	PAD::DISABLE_CONTROL_ACTION(0, -640622144, false);
	if (CAM::DOES_CAM_EXIST(uParam0->f_31) && CAM::IS_CAM_ACTIVE(uParam0->f_31))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -1450761377, false);
		PAD::DISABLE_CONTROL_ACTION(0, -2105631000, false);
	}
	if (&Global_1357503 == 0)
	{
		PAD::DISABLE_CONTROL_ACTION(0, -1722177808, false);
	}
	PAD::DISABLE_CONTROL_ACTION(0, -824104112, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1663574939, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2128655846, false);
	PAD::DISABLE_CONTROL_ACTION(0, 516589524, false);
}

void func_10(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	if (PAD::_IS_INPUT_DISABLED(iParam8))
	{
		*uParam0 = BUILTIN::FLOOR(PAD::GET_CONTROL_NORMAL(iParam8, iParam4));
		*uParam1 = BUILTIN::FLOOR(PAD::GET_CONTROL_NORMAL(iParam8, iParam5));
		*uParam2 = BUILTIN::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(iParam8, iParam6) * 250f));
		*uParam3 = BUILTIN::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(iParam8, iParam7) * 250f));
	}
	else
	{
		*uParam0 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam4) * 127f));
		*uParam1 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam5) * 127f));
		*uParam2 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam6) * 127f));
		*uParam3 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam7) * 127f));
	}
}

bool func_11(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_63(iParam0))
	{
		return false;
	}
	iVar0 = func_64(iParam0);
	return HUD::_UIPROMPT_IS_JUST_PRESSED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

int func_12(var uParam0)
{
	return uParam0->f_107;
}

void func_13(var uParam0, int iParam1)
{
	uParam0->f_107 = iParam1;
	func_79(uParam0);
}

void func_14()
{
	AUDIO::_0x0F2A2175734926D8("Zoom_In", "CAMERA_SOUNDSET");
	AUDIO::_0x0F2A2175734926D8("Zoom_Out", "CAMERA_SOUNDSET");
}

void func_15()
{
	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_37))
	{
		GRAPHICS::ANIMPOSTFX_PLAY(sLocal_37);
	}
}

void func_16(var uParam0)
{
	struct<8> Var0;
	char cVar19[32];
	int iVar23;
	int iVar24;
	char cVar25[16];
	char cVar27[16];
	int iVar29;

	if (func_4(&(uParam0->f_1[6]), 1))
	{
		if (uParam0->f_108 == 0 && iLocal_13 == 0)
		{
			func_5(&(uParam0->f_1[6]), 1, 1);
			if (bLocal_17)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_18) > 2500)
				{
					iLocal_14 = GRAPHICS::_0x78C56B8A7B1D000C();
					func_62();
					iLocal_18 = MISC::GET_GAME_TIMER();
				}
			}
		}
		else
		{
			func_5(&(uParam0->f_1[6]), 0, 1);
		}
	}
	switch (uParam0->f_108)
	{
		case 1:
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 217814591))
			{
				_NAMESPACE76::_0x00A15B94CBA4F76F(iLocal_41);
				iLocal_12 = 1;
				func_80(uParam0, 2);
				iLocal_11 = 0;
			}
			break;
		case 0:
			if (func_42(uParam0, 32))
			{
				func_29(uParam0);
				if (func_18() || iLocal_12)
				{
					func_80(uParam0, 2);
				}
				else if (iLocal_14 == iLocal_15)
				{
					if (iLocal_41 == 0)
					{
						Var0.f_2 = 4;
						Var0.f_2 = 0;
						Var0.f_7 = MISC::GET_HASH_KEY("IB_BACK");
						Var0.f_7.f_3 = 0;
						iLocal_41 = func_81(&Var0, "ERROR_GAL_FULH", "ERROR_GAL_FULT", 0, 0, 1);
						func_80(uParam0, 1);
						iLocal_11 = 1;
					}
					else
					{
						iLocal_12 = 1;
						func_80(uParam0, 2);
					}
				}
				else
				{
					func_80(uParam0, 2);
				}
			}
			if (func_42(uParam0, 128))
			{
				GRAPHICS::_0x614682E715ADBAAC();
				GRAPHICS::_0x494A9874F17A7D50(1);
				func_80(uParam0, 7);
			}
			break;
		case 2:
			Local_47.f_112 = 0;
			func_43(0);
			func_80(uParam0, 3);
			iLocal_45 = MISC::GET_GAME_TIMER();
			break;
		case 3:
			if ((MISC::GET_GAME_TIMER() - iLocal_45) > 0)
			{
				iLocal_45 = MISC::GET_GAME_TIMER();
				if (!func_23())
				{
					func_82();
				}
				if (func_18() || iLocal_12)
				{
					func_80(uParam0, 4);
				}
				else
				{
					GRAPHICS::_0xD45547D8396F002A();
					GRAPHICS::BEGIN_TAKE_HIGH_QUALITY_PHOTO();
					iLocal_14++;
					func_62();
					SCRIPTS::SET_NO_LOADING_SCREEN(true);
					func_80(uParam0, 5);
				}
			}
			break;
		case 5:
			uParam0->f_106 = GRAPHICS::GET_STATUS_OF_TAKE_HIGH_QUALITY_PHOTO();
			if (uParam0->f_106 == 1)
			{
			}
			if (uParam0->f_106 == 0)
			{
				if (func_12(uParam0) == 8 || func_12(uParam0) == 9)
				{
					GRAPHICS::_0x2705D18C11B61046(1);
				}
				else
				{
					GRAPHICS::_0x2705D18C11B61046(0);
				}
				StringCopy(&cVar19, "", 32);
				iVar23 = func_83();
				if (func_84(iVar23))
				{
					MemCopy(&cVar19, {func_85(iVar23)}, 4);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar19))
				{
					iVar24 = func_86();
					StringCopy(&cVar19, func_87(iVar24), 32);
				}
				GRAPHICS::_0xD1031B83AC093BC7(&cVar19);
				StringCopy(&cVar25, "", 16);
				StringCopy(&cVar27, "", 16);
				iVar29 = func_88();
				if (func_89(iVar29))
				{
					StringCopy(&cVar25, func_90(iVar29), 16);
					StringCopy(&cVar27, func_91(iVar29), 16);
				}
				GRAPHICS::_0x9937FACBBF267244(&cVar25);
				GRAPHICS::_0x8952E857696B8A79(&cVar27);
				GRAPHICS::SAVE_HIGH_QUALITY_PHOTO(0);
				iLocal_16 = 0;
				func_80(uParam0, 6);
			}
			else if (uParam0->f_106 == 2)
			{
				func_80(uParam0, 4);
			}
			break;
		case 6:
			if (iLocal_16 == 0)
			{
				SCRIPTS::SET_NO_LOADING_SCREEN(false);
				func_39();
				func_30(func_12(uParam0));
				func_5(&(uParam0->f_1[6]), 0, 1);
				func_92(600, 0);
				iLocal_16 = 1;
			}
			uParam0->f_106 = GRAPHICS::GET_STATUS_OF_SAVE_HIGH_QUALITY_PHOTO();
			if (uParam0->f_106 == 0)
			{
				Local_47.f_112 = 1;
				func_93(uParam0, 32);
				func_80(uParam0, 0);
				if (AUDIO::_0x4AD019591E94C064("Wind_On_Film", Global_35, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::_0x6FB1DA3CA9DA7D90("Wind_On_Film", Global_35, "CAMERA_SOUNDSET", 0, 0, 0);
				}
			}
			else if (uParam0->f_106 == 2)
			{
				Local_47.f_112 = 1;
				func_93(uParam0, 32);
				func_80(uParam0, 0);
			}
			break;
		case 4:
			if ((MISC::GET_GAME_TIMER() - iLocal_45) > 300)
			{
				SCRIPTS::SET_NO_LOADING_SCREEN(false);
				func_93(uParam0, 32);
				func_80(uParam0, 0);
				func_39();
				func_30(func_12(uParam0));
				if (AUDIO::_0x4AD019591E94C064("Wind_On_Film", Global_35, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::_0x6FB1DA3CA9DA7D90("Wind_On_Film", Global_35, "CAMERA_SOUNDSET", 0, 0, 0);
				}
				func_92(600, 0);
			}
			break;
		case 7:
			uParam0->f_106 = GRAPHICS::_0x13430D3D5A45F14B(1);
			if (uParam0->f_106 == 0)
			{
				GRAPHICS::_0xF1142E5D64B47802(true, false);
				func_44(uParam0, 256);
				func_93(uParam0, 128);
				func_80(uParam0, 0);
			}
			else if (uParam0->f_106 == 2)
			{
				func_93(uParam0, 128);
				func_80(uParam0, 0);
			}
			break;
	}
}

int func_17()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "camera_takingPic"))
		{
			return DECORATOR::DECOR_GET_BOOL(PLAYER::PLAYER_PED_ID(), "camera_takingPic");
		}
	}
	return 0;
}

bool func_18()
{
	return &Global_1357506;
}

void func_19()
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_23, " ");
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_24, " ");
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_25, " ");
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_26, " ");
	StringCopy(&cLocal_27, "-", 32);
	StringConCat(&cLocal_27, " / ", 32);
	StringCopy(&cLocal_31, "-", 32);
	StringConCat(&cLocal_27, &cLocal_31, 32);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_22, &cLocal_27);
}

bool func_20(var uParam0)
{
	return *uParam0;
}

void func_21(var uParam0)
{
	*uParam0 = 0;
}

void func_22()
{
	if (func_58())
	{
		HUD::_0xF66090013DE648D5("CAMERA");
	}
	else
	{
		HUD::_0xF66090013DE648D5("CAMERA");
		STREAMING::REQUEST_ANIM_DICT(func_61());
		STREAMING::REQUEST_CLIP_SET(func_60());
		GRAPHICS::_0x5199405EABFBD7F0("CameraViewfinder");
		GRAPHICS::_0x5199405EABFBD7F0("CameraTransitionBlink");
	}
}

int func_23()
{
	return 0;
}

int func_24(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 1;
	if (func_58())
	{
		if (!HUD::_0xD0976CC34002DB57("CAMERA"))
		{
			if ((MISC::_GET_SYSTEM_TIME() - iParam1) > 5000)
			{
				MISC::SET_BIT(Global_1357505, 8);
				iVar0 = 1;
			}
			else
			{
				iVar0 = 0;
			}
		}
		if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0) == 0)
		{
			if ((MISC::_GET_SYSTEM_TIME() - iParam1) > 5000)
			{
				MISC::SET_BIT(Global_1357505, 8);
				iVar0 = 1;
			}
			else
			{
				iVar0 = 0;
			}
		}
	}
	else
	{
		if (GRAPHICS::_0xBF2DD155B2ADCD0A("CameraViewfinder"))
		{
			iVar0 = 0;
		}
		if (GRAPHICS::_0xBF2DD155B2ADCD0A("CameraTransitionBlink"))
		{
			iVar0 = 0;
		}
		if (!HUD::_0xD0976CC34002DB57("CAMERA"))
		{
			iVar0 = 0;
		}
		if (!STREAMING::HAS_CLIP_SET_LOADED(func_60()))
		{
			iVar0 = 0;
		}
		if (!STREAMING::HAS_ANIM_DICT_LOADED(func_61()))
		{
			iVar0 = 0;
		}
		if (!AUDIO::_0xD9130842D7226045("CAMERA_SOUNDSET", 0))
		{
			if ((MISC::GET_GAME_TIMER() - iParam0) > 7000)
			{
				iVar0 = 1;
			}
			else
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

int func_25(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

void func_26()
{
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_35))
	{
		GRAPHICS::ANIMPOSTFX_STOP(sLocal_35);
	}
}

void func_27()
{
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_37))
	{
		GRAPHICS::_0xC5CB91D65852ED7E(sLocal_37);
	}
}

void func_28()
{
	float fVar0;
	vector3 vVar1;

	vLocal_167 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
	fVar0 = ENTITY::GET_ENTITY_HEADING(Global_35);
	vVar1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_167, fVar0, 0f, 2f, -0.2f) };
	if (PED::_0xD5FE956C70FF370B(Global_35))
	{
		iLocal_183 = 0;
		return;
	}
	if (ENTITY::_0x0C9DBF48C6BA6E4C(Global_35, vVar1.x, vVar1.y, vVar1.z, 3167))
	{
		iLocal_183 = 1;
	}
	else
	{
		iLocal_183 = 0;
	}
}

void func_29(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 29)
	{
		if (func_63(&(uParam0->f_1[iVar0])))
		{
			func_94(uParam0->f_1[iVar0], 1, 1);
		}
		iVar0++;
	}
}

void func_30(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			func_95(6, 1);
			func_95(7, 1);
			func_95(3, 0);
			func_95(8, 0);
			func_95(9, 0);
			func_95(4, 0);
			func_95(5, 0);
			func_95(0, 0);
			func_95(1, 0);
			func_95(2, 0);
			break;
		case 3:
			func_95(6, 0);
			func_95(3, 0);
			func_95(8, 0);
			func_95(9, 0);
			func_95(7, 0);
			func_95(4, 0);
			func_95(5, 0);
			func_95(0, 1);
			func_95(1, 1);
			func_95(2, 1);
			break;
		case 6:
			func_95(0, 0);
			func_95(8, 0);
			func_95(9, 0);
			func_95(1, 0);
			func_95(2, 0);
			func_95(5, 1);
			func_95(3, 1);
			func_95(4, 1);
			func_95(6, 1);
			func_95(7, 1);
			break;
		case 8:
			func_95(0, 0);
			func_95(1, 0);
			func_95(2, 0);
			func_95(5, 1);
			func_95(8, 1);
			func_95(9, 1);
			func_95(3, 1);
			func_95(4, 1);
			func_95(6, 1);
			func_95(7, 1);
			break;
		case 9:
			func_95(0, 0);
			func_95(1, 0);
			func_95(2, 0);
			func_95(5, 1);
			func_95(8, 1);
			func_95(9, 1);
			func_95(3, 1);
			func_95(4, 1);
			func_95(6, 1);
			func_95(7, 1);
			break;
		case 10:
			func_95(2, 0);
			func_95(0, 0);
			func_95(3, 0);
			func_95(1, 0);
			func_95(5, 0);
			func_95(8, 0);
			func_95(9, 0);
			func_95(7, 0);
			func_95(6, 0);
			func_95(9, 0);
			func_95(4, 0);
			break;
		case 7:
			func_95(2, 0);
			func_95(0, 0);
			func_95(6, 0);
			func_95(4, 0);
			func_95(5, 0);
			func_95(1, 0);
			func_95(8, 0);
			func_95(9, 0);
			func_95(7, 0);
			break;
	}
}

void func_31(int iParam0)
{
	_NAMESPACE71::_0xDD1232B332CBB9E7(1, iParam0, 0);
}

bool func_32(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_63(iParam0))
	{
		return false;
	}
	iVar0 = func_64(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_33()
{
	if (iLocal_220 == 0)
	{
		iLocal_220 = 1;
	}
}

void func_34()
{
	float fVar0;
	vector3 vVar1;
	float fVar4;
	var uVar5;
	float fVar6;

	vLocal_167 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
	fVar0 = ENTITY::GET_ENTITY_HEADING(Global_35);
	vVar1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_167, fVar0, 0f, 4f, 0f) };
	MISC::GET_GROUND_Z_FOR_3D_COORD(vVar1.x, vVar1.y, (vVar1.z + 50f), &fVar4, 0);
	MISC::GET_GROUND_Z_FOR_3D_COORD(vLocal_167, &uVar5, 0);
	if ((vLocal_167.z - fVar4) > 3f)
	{
		bLocal_162 = false;
		return;
	}
	if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
	{
		bLocal_162 = false;
		return;
	}
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		bLocal_162 = false;
		return;
	}
	if (PED::_0x50F124E6EF188B22(Global_35))
	{
		bLocal_162 = false;
		return;
	}
	if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(vLocal_167, 2f) > 0)
	{
		bLocal_162 = false;
		return;
	}
	if ((fVar4 - vLocal_167.z) > 1f)
	{
		bLocal_162 = false;
		return;
	}
	if (ENTITY::IS_ENTITY_IN_WATER(Global_35))
	{
		bLocal_162 = false;
		return;
	}
	if (func_35(Global_35, 0))
	{
		bLocal_162 = false;
		return;
	}
	if (PED::_0xD5FE956C70FF370B(Global_35))
	{
		bLocal_162 = false;
		return;
	}
	if (WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(vVar1, 0, &(vVar1.f_2)) == 1)
	{
		bLocal_162 = false;
		return;
	}
	if (PATHFIND::IS_POINT_ON_ROAD(vVar1.x, vVar1.y, fVar4, 0))
	{
		bLocal_162 = false;
		return;
	}
	fVar6 = 1f;
	if (ENTITY::_0x0C9DBF48C6BA6E4C(Global_35, vVar1.x, vVar1.y, (fVar4 + fVar6), 3167))
	{
		bLocal_162 = true;
	}
	else
	{
		bLocal_162 = false;
	}
	if (bLocal_162)
	{
		vLocal_164 = { vLocal_167.x, vLocal_167.y, (vLocal_167.z - 1f) };
		fLocal_175 = fVar0;
		vLocal_170 = { vVar1.x, vVar1.y, (fVar4 + fVar6) };
	}
}

int func_35(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_IN_COMBAT(iParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

bool func_36(var uParam0)
{
	return func_96(*uParam0, 1);
}

void func_37(var uParam0, int iParam1)
{
	if (iParam1 || !func_36(uParam0))
	{
		func_97(uParam0);
	}
}

int func_38()
{
	switch (iLocal_220)
	{
		case 0:
			if (iLocal_221 == iLocal_223)
			{
			}
			break;
		case 1:
			iLocal_222 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(iLocal_221);
			iLocal_220 = 2;
			break;
		case 2:
			if (UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(iLocal_222))
			{
				UISTATEMACHINE::_UIFLOWBLOCK_ENTER(iLocal_222, iLocal_223);
				UISTATEMACHINE::_UISTATEMACHINE_CREATE(1459179713, iLocal_222);
				iLocal_220 = 3;
			}
			break;
		case 3:
			return 1;
		case 4:
			return 1;
	}
	return 0;
}

void func_39()
{
	if (func_23())
	{
	}
	else if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_35))
	{
		GRAPHICS::ANIMPOSTFX_PLAY(sLocal_35);
	}
}

void func_40(var uParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	vector3 vVar15;

	if (uParam0->f_90 > 0 && IntToFloat(uParam0->f_90) > 89f)
	{
		uParam0->f_90 = BUILTIN::ROUND(89f);
	}
	else if (uParam0->f_90 < 0 && IntToFloat(uParam0->f_90) < -89f)
	{
		uParam0->f_90 = BUILTIN::ROUND(-89f);
	}
	if (uParam0->f_91 > 0 && IntToFloat(uParam0->f_91) > 89f)
	{
		uParam0->f_91 = BUILTIN::ROUND(89f);
	}
	else if (uParam0->f_91 < 0 && IntToFloat(uParam0->f_91) < -89f)
	{
		uParam0->f_91 = BUILTIN::ROUND(-89f);
	}
	if (uParam0->f_90 != uParam0->f_92)
	{
		uParam0->f_92 = uParam0->f_90;
		fVar0 = ((BUILTIN::TO_FLOAT(uParam0->f_90) - -89f) / (89f - -89f));
		uParam0->f_98 = fVar0;
	}
	else
	{
		uParam0->f_102 = 0f;
	}
	if (uParam0->f_91 != uParam0->f_93)
	{
		uParam0->f_93 = uParam0->f_91;
		fVar1 = ((BUILTIN::TO_FLOAT(uParam0->f_91) - -89f) / (89f - -89f));
		uParam0->f_99 = fVar1;
	}
	else
	{
		uParam0->f_103 = 0f;
	}
	vVar6 = { ENTITY::GET_ENTITY_ROTATION(Global_35, 2) };
	fVar4 = 50f;
	if ((func_98(((*Global_1347702)[85 /*49*/])->f_15) || func_98(((*Global_1347702)[86 /*49*/])->f_15)) || func_98(((*Global_1347702)[87 /*49*/])->f_15))
	{
		fVar5 = -50f;
	}
	else
	{
		fVar5 = -25f;
	}
	if ((func_98(((*Global_1347702)[85 /*49*/])->f_15) || func_98(((*Global_1347702)[86 /*49*/])->f_15)) || func_98(((*Global_1347702)[87 /*49*/])->f_15))
	{
		fVar2 = 38f;
		fVar3 = -40f;
	}
	else
	{
		fVar2 = 68f;
		fVar3 = -85f;
	}
	fVar12 = uParam0->f_81;
	fVar13 = uParam0->f_82;
	fVar11 = -1f;
	if (uParam0->f_94 <= 0)
	{
		fVar11 = 1f;
		uParam0->f_94 = MISC::ABSI(uParam0->f_94);
	}
	fVar9 = ((BUILTIN::TO_FLOAT(uParam0->f_94) - 0f) / (89f - 0f));
	fVar12 = (fVar12 + (fVar9 * fVar11));
	if (fVar12 >= fVar2)
	{
		fVar12 = fVar2;
	}
	else if (fVar12 < fVar3)
	{
		fVar12 = fVar3;
	}
	uParam0->f_81 = fVar12;
	fVar11 = -1f;
	if (uParam0->f_95 <= 0)
	{
		fVar11 = 1f;
		uParam0->f_95 = MISC::ABSI(uParam0->f_95);
	}
	fVar10 = ((BUILTIN::TO_FLOAT(uParam0->f_95) - 0f) / (89f - 0f));
	fVar13 = (fVar13 + (fVar10 * fVar11));
	if (fVar13 >= fVar4)
	{
		fVar13 = fVar4;
	}
	else if (fVar13 < fVar5)
	{
		fVar13 = fVar5;
	}
	uParam0->f_82 = fVar13;
	uParam0->f_83 = { Vector(vVar6.z, 0f, 0f) + Vector(uParam0->f_81, 0f, uParam0->f_82) };
	func_99(uParam0);
	func_100(uParam0);
	CAM::SET_CAM_PARAMS(uParam0->f_32, uParam0->f_77, uParam0->f_83, 50f, 0, 1, 1, 2, 0, 0);
	if ((func_98(((*Global_1347702)[85 /*49*/])->f_15) || func_98(((*Global_1347702)[86 /*49*/])->f_15)) || func_98(((*Global_1347702)[87 /*49*/])->f_15))
	{
	}
	else if ((MISC::GET_GAME_TIMER() - iLocal_184) > 100)
	{
		if (iLocal_40 == 0)
		{
			fVar14 = ENTITY::GET_ENTITY_HEADING(Global_35);
			vVar15 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_167, fVar14, 0f, 0.25f, 0f) };
			if (!ENTITY::_0x0C9DBF48C6BA6E4C(Global_35, vVar15.x, vVar15.y, vVar15.z, 3167))
			{
				Global_1357509 = 1;
				iLocal_40 = 1;
			}
		}
		iLocal_184 = MISC::GET_GAME_TIMER();
	}
}

bool func_41(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_64(iParam0);
	iVar1 = ((*Global_1945938)[iVar0 /*18*/])->f_4;
	return (func_32(iParam0, 1) && PAD::IS_CONTROL_JUST_PRESSED(2, iVar1));
}

bool func_42(var uParam0, int iParam1)
{
	return (uParam0->f_109 && iParam1) != 0;
}

void func_43(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (iParam0 == 1)
		{
			DECORATOR::DECOR_SET_BOOL(PLAYER::PLAYER_PED_ID(), "camera_takingPic", true);
		}
		else if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "camera_takingPic"))
		{
			DECORATOR::DECOR_REMOVE(PLAYER::PLAYER_PED_ID(), "camera_takingPic");
		}
	}
}

void func_44(var uParam0, int iParam1)
{
	uParam0->f_109 = (uParam0->f_109 || iParam1);
}

void func_45()
{
	UIAPPS::_LAUNCH_APP_WITH_ENTRY("social_club_feed", "launch_to_photos");
}

int func_46(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_101(iVar0, 2))
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
				func_102(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}

var func_47(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	return func_76(sParam0, -1, iParam1, iParam2, 0, iParam3);
}

int func_48()
{
	if (!PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
	{
	}
	return 0;
}

int func_49(var uParam0)
{
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 129547951) && !func_42(uParam0, 32))
	{
		AUDIO::_0x6FB1DA3CA9DA7D90("CLICK", Global_35, "CAMERA_SOUNDSET", 0, 0, 0);
		func_43(1);
		func_44(uParam0, 32);
	}
	return 1;
}

void func_50(var uParam0)
{
	vLocal_167 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_167, vLocal_164, true) > 3f)
	{
		ENTITY::_0x203BEFFDBE12E96A(Global_35, vLocal_164, fLocal_175, 1, 0, 1);
		ENTITY::_SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
}

int func_51(var uParam0)
{
	if (!func_36(uParam0))
	{
		return 0;
	}
	if (func_103(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_104() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

void func_52(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_53(var uParam0)
{
	if (func_20(uParam0))
	{
		func_30(8);
		func_21(uParam0);
	}
	func_105(uParam0);
	func_106();
	func_107();
	uParam0->f_88 = 0;
	iLocal_214 = 0;
	iLocal_173 = 1;
	iLocal_174 = 0;
	HUD::_0x4CC5F2FC1332577F(959420967);
}

void func_54(var uParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;

	func_108(uParam0);
	if (PAD::_0x6CD79468A1E595C6(0))
	{
		vLocal_177 = { vLocal_180 };
		fLocal_176 = 0f;
		fLocal_218 = 0f;
	}
	if (PAD::_IS_INPUT_DISABLED(0))
	{
		fVar1 = (PAD::GET_CONTROL_UNBOUND_NORMAL(0, -1450761377) * 4.5f);
		fVar2 = (PAD::GET_CONTROL_UNBOUND_NORMAL(0, -771458680) * 4.5f);
		fVar0 = func_109(vLocal_180.z, (vLocal_177.z - fVar1));
		if (fVar0 > 30f)
		{
			vLocal_177.f_2 = (vLocal_180.z - 30f);
		}
		else if (fVar0 < -30f)
		{
			vLocal_177.f_2 = (vLocal_180.z - -30f);
		}
		else
		{
			vLocal_177.f_2 = (vLocal_177.z - fVar1);
		}
		fVar0 = func_109(vLocal_180.x, (vLocal_177.x - fVar2));
		if (fVar0 > 30f)
		{
			vLocal_177.x = (vLocal_180.x - 30f);
		}
		else if (fVar0 < -30f)
		{
			vLocal_177.x = (vLocal_180.x - -30f);
		}
		else
		{
			vLocal_177.x = (vLocal_177.x - fVar2);
		}
	}
	else
	{
		if (uParam0->f_94 > 16)
		{
			if ((fLocal_176 - 0.07f) > -10f)
			{
				if (uParam0->f_94 > 100)
				{
					vLocal_177.f_2 = (vLocal_177.z - 0.6f);
					fLocal_176 = (fLocal_176 - (0.07f * 3f));
				}
				else
				{
					vLocal_177.f_2 = (vLocal_177.z - 0.2f);
					fLocal_176 = (fLocal_176 - 0.07f);
				}
			}
		}
		if (uParam0->f_94 < -16)
		{
			if ((fLocal_176 + 0.07f) < 10f)
			{
				if (uParam0->f_94 < -100)
				{
					vLocal_177.f_2 = (vLocal_177.z + 0.6f);
					fLocal_176 = (fLocal_176 + (0.07f * 3f));
				}
				else
				{
					vLocal_177.f_2 = (vLocal_177.z + 0.2f);
					fLocal_176 = (fLocal_176 + 0.07f);
				}
			}
		}
		if (uParam0->f_95 > 16)
		{
			if (PAD::IS_LOOK_INVERTED())
			{
			}
			if ((fLocal_218 - 0.07f) > -10f)
			{
				if (uParam0->f_95 > 100)
				{
					vLocal_177.x = (vLocal_177.x - 0.6f);
					fLocal_218 = (fLocal_218 - (0.07f * 3f));
				}
				else
				{
					vLocal_177.x = (vLocal_177.x - 0.2f);
					fLocal_218 = (fLocal_218 - 0.07f);
				}
			}
		}
		if (uParam0->f_95 < -16)
		{
			if (PAD::IS_LOOK_INVERTED())
			{
			}
			if ((fLocal_218 + 0.07f) < 10f)
			{
				if (uParam0->f_95 < -100)
				{
					vLocal_177.x = (vLocal_177.x + 0.6f);
					fLocal_218 = (fLocal_218 + (0.07f * 3f));
				}
				else
				{
					vLocal_177.x = (vLocal_177.x + 0.2f);
					fLocal_218 = (fLocal_218 + 0.07f);
				}
			}
		}
	}
	if (iLocal_173)
	{
		if (ENTITY::_0x0C9DBF48C6BA6E4C(Global_35, vLocal_170, 3167))
		{
			iLocal_174 = 0;
		}
		else
		{
			iLocal_174 = 1;
		}
		iLocal_173 = 0;
	}
	if ((func_32(&(uParam0->f_1[7]), 1) || func_35(Global_35, 0)) || iLocal_174)
	{
		if (func_35(Global_35, 0))
		{
		}
		else if (func_110(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
		}
		if (AUDIO::_0x4AD019591E94C064("Remove_Tripod", Global_35, "CAMERA_SOUNDSET", -2))
		{
			AUDIO::_0x6FB1DA3CA9DA7D90("Remove_Tripod", Global_35, "CAMERA_SOUNDSET", 0, 0, 0);
		}
		iLocal_189 = 0;
		func_29(uParam0);
		func_13(uParam0, 10);
		func_15();
		PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Global_35);
		PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(Global_35, "portrait_normal", func_61());
		if (!func_36(&uLocal_185))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), false, 0, false, false);
			func_37(&uLocal_185, 1);
		}
	}
	if (func_111(&(uParam0->f_1[9]), 0, 1))
	{
		if (iLocal_205 == 0)
		{
			uParam0->f_87++;
			if (uParam0->f_87 == 8)
			{
				uParam0->f_87 = 0;
			}
			PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Global_35);
			PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(Global_35, &(sLocal_193[uParam0->f_87]), func_61());
		}
	}
	if (func_111(&(uParam0->f_1[9]), 1, 1))
	{
		if (iLocal_205 == 0)
		{
			uParam0->f_87 = (uParam0->f_87 - 1);
			if (uParam0->f_87 < 0)
			{
				uParam0->f_87 = 7;
			}
			PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Global_35);
			PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(Global_35, &(sLocal_193[uParam0->f_87]), func_61());
		}
	}
	uParam0->f_43 = { func_112(PLAYER::GET_PLAYER_INDEX()) + ENTITY::GET_ENTITY_FORWARD_VECTOR(Global_35) * Vector(2f, 2f, 2f) + Vector(1f, 0f, 0f) };
	_NAMESPACE29::_0x66F9EB44342BB4C5(Global_35, &(uParam0->f_43));
	if (iLocal_216 == 0)
	{
		if (func_111(&(uParam0->f_1[8]), 1, 1))
		{
			iLocal_216 = 1;
			uParam0->f_88++;
			if (uParam0->f_88 == 7)
			{
				uParam0->f_88 = 0;
			}
			func_113();
		}
	}
	if (iLocal_216 == 0)
	{
		if (func_111(&(uParam0->f_1[8]), 0, 1))
		{
			iLocal_216 = 1;
			uParam0->f_88 = (uParam0->f_88 - 1);
			if (uParam0->f_88 < 0)
			{
				uParam0->f_88 = 6;
			}
			func_113();
		}
	}
	if (iLocal_216)
	{
		switch (iLocal_214)
		{
			case 0:
				break;
			case 1:
				if ((MISC::GET_GAME_TIMER() - iLocal_215) > 200)
				{
					iLocal_214 = 2;
				}
				break;
			case 2:
				func_114(uParam0);
				iLocal_214 = 3;
				iLocal_215 = MISC::GET_GAME_TIMER();
				break;
			case 3:
				if ((MISC::GET_GAME_TIMER() - iLocal_215) > 500)
				{
					iLocal_214 = 4;
					iLocal_215 = MISC::GET_GAME_TIMER();
					func_27();
				}
				break;
			case 4:
				if ((MISC::GET_GAME_TIMER() - iLocal_215) > 700)
				{
					iLocal_214 = 0;
					iLocal_216 = 0;
				}
				break;
			default:
				break;
		}
	}
	func_100(uParam0);
	CAM::SET_CAM_PARAMS(uParam0->f_32, uParam0->f_77, vLocal_177, 50f, 0, 1, 1, 2, 0, 0);
}

int func_55()
{
	return iLocal_205;
}

float func_56(var uParam0)
{
	if (!func_36(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_103(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_115() - uParam0->f_1);
}

void func_57()
{
	func_52(&uLocal_202);
	iLocal_205 = 0;
}

bool func_58()
{
	return &Global_1357503;
}

void func_59(bool bParam0)
{
	if (bParam0)
	{
		ANIMSCENE::_0x37C1257849DEF24A(1);
		HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
		GRAPHICS::_0xEC3D8C228FE553D7(0);
	}
	else
	{
		ANIMSCENE::_0x37C1257849DEF24A(0);
		ANIMSCENE::_0x41AFA5F228B0B6B0();
		GRAPHICS::_0xEC3D8C228FE553D7(1);
	}
}

char* func_60()
{
	return "facials@gen_male@portrait";
}

char* func_61()
{
	return "FACE_HUMAN@GEN_MALE@PORTRAIT";
}

void func_62()
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_23, " ");
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_24, " ");
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_25, " ");
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_26, " ");
	StringCopy(&cLocal_27, "", 32);
	MISC::_INT_TO_STRING(iLocal_14, "%i", &cLocal_27);
	StringConCat(&cLocal_27, " / ", 32);
	StringCopy(&cLocal_31, "", 32);
	MISC::_INT_TO_STRING(iLocal_15, "%i", &cLocal_31);
	StringConCat(&cLocal_27, &cLocal_31, 32);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_22, &cLocal_27);
}

bool func_63(int iParam0)
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

int func_64(int iParam0)
{
	return iParam0;
}

void func_65(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 - (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1));
}

void func_66(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		if (((*Global_1945938)[iParam0 /*18*/])->f_5 == 5 && !func_101(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, 0);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
		}
	}
}

void func_67(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
	}
}

void func_68(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 || iParam1);
}

bool func_69()
{
	return (Global_1914319->f_17369 || Global_1914319->f_18996.f_1);
}

int func_70(int iParam0)
{
	if (func_69())
	{
		if (Global_1914319->f_16855 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_71(int iParam0)
{
	int iVar0;

	if (!func_116(iParam0))
	{
		return 0;
	}
	if (iParam0 == 41 || iParam0 == 82)
	{
		return 0;
	}
	iVar0 = func_117(iParam0);
	if ((((((((((iVar0 == 10 || iVar0 == 4) || iVar0 == 17) || iVar0 == 31) || iVar0 == 18) || iVar0 == 19) || iVar0 == 22) || iVar0 == 12) || iVar0 == 13) || iVar0 == 14) || iVar0 == 32)
	{
		return 1;
	}
	return 0;
}

int func_72(int iParam0, int iParam1)
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
	if (func_118(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_118(iVar0, 2))
	{
		if (PED::_0x3AA24CCC0D451379(iParam0))
		{
			return 0;
		}
	}
	if (func_118(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_118(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_118(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_118(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return 0;
		}
	}
	if (func_118(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_118(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

bool func_73(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_119(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_120(iParam0);
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
		if (!func_121(iParam0, 1))
		{
			return false;
		}
	}
	return func_122(iParam0, 0, bParam2) >= iParam1;
}

int func_74(var uParam0)
{
	return uParam0->f_108;
}

bool func_75()
{
	return Global_1935689->f_1;
}

var func_76(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_77(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

void func_78(bool bParam0)
{
	if (bParam0)
	{
		func_123(4);
	}
	func_123(2);
	MISC::SET_BIT(&(Global_1956578->f_1), 0);
}

void func_79(var uParam0)
{
	*uParam0 = 1;
}

void func_80(var uParam0, int iParam1)
{
	uParam0->f_108 = iParam1;
}

int func_81(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	var uVar4;

	Var0 = iParam4;
	Var0.f_1 = iParam3;
	Var0.f_2 = sParam1;
	Var0.f_3 = sParam2;
	uVar4 = _NAMESPACE76::_0x339E16B41780FC35(uParam0, &Var0, iParam5);
	return uVar4;
}

void func_82()
{
	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_36))
	{
		GRAPHICS::ANIMPOSTFX_PLAY(sLocal_36);
	}
}

var func_83()
{
	return Global_1894899->f_2;
}

bool func_84(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

var func_85(int iParam0)
{
	char[] cVar0[8];

	if (!func_84(iParam0))
	{
		StringCopy(&cVar0, "UNK", 8);
		return cVar0;
	}
	return ((*Global_1888801)[iParam0 /*35*/])->f_22;
}

int func_86()
{
	return ZONE::_GET_WATER_MAP_ZONE_AT_COORDS(Global_36);
}

char* func_87(int iParam0)
{
	switch (iParam0)
	{
		case -196675805:
			return "WATER_AURORA_BASIN";
		case 795414694:
			return "WATER_BARROW_LAGOON";
		case -557290573:
			return "WATER_BAYOU_NWA";
		case 650214731:
			return "WATER_BEARTOOTH_BECK";
		case -1073312073:
			return "WATER_CAIRN_LAKE";
		case 231313522:
			return "WATER_CALUMET_RAVINE";
		case -804804953:
			return "WATER_CATTAIL_POND";
		case 370072007:
			return "WATER_DAKOTA_RIVER";
		case 1245451421:
			return "WATER_DEADBOOT_CREEK";
		case 469159176:
			return "WATER_DEWBERRY_CREEK";
		case -105598602:
			return "WATER_ELYSIAN_POOL";
		case -1356490953:
			return "WATER_FLAT_IRON";
		case -1276586360:
			return "WATER_HAWKS_EYE_CREEK";
		case 1755369577:
			return "WATER_HEARTLANDS_OVERFLOW";
		case 1175365009:
			return "WATER_HOT_SPRINGS";
		case -1229593481:
			return "WATER_KAMASSA_RIVER";
		case -1369817450:
			return "WATER_LAKE_DON_JULIO";
		case 592454541:
			return "WATER_LAKE_ISABELLA";
		case -2040708515:
			return "WATER_LANNACHECHEE_RIVER";
		case -1410384421:
			return "WATER_LITTLE_CREEK_RIVER";
		case -1308233316:
			return "WATER_LOWER_MONTANA_RIVER";
		case 301094150:
			return "WATER_MATTLOCK_POND";
		case -811730579:
			return "WATER_MOONSTONE_POND";
		case -1817904483:
			return "WATER_OCREAGHS_RUN";
		case -1300497193:
			return "WATER_OWANJILA";
		case 2005774838:
			return "WATER_RINGNECK_CREEK";
		case -1504425495:
			return "WATER_SAN_LUIS_RIVER";
		case -247856387:
			return "WATER_SEA_OF_CORONADO";
		case -823661292:
			return "WATER_SOUTHFIELD_FLATS";
		case -218679770:
			return "WATER_SPIDER_GORGE";
		case -1287619521:
			return "WATER_STILLWATER_CREEK";
		case -1781130443:
			return "WATER_UPPER_MONTANA_RIVER";
		case -261541730:
			return "WATER_WHINYARD_STRAIT";
		default:
			break;
	}
	return "";
}

var func_88()
{
	return Global_1897952->f_41;
}

bool func_89(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

char* func_90(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BAY";
		case 1:
			return "BGV";
		case 2:
			return "BLU";
		case 3:
			return "CML";
		case 4:
			return "GRT";
		case 5:
			return "GRZ";
		case 6:
			return "GRE";
		case 7:
			return "GRW";
		case 8:
			return "GUA";
		case 9:
			return "HRT";
		case 10:
			return "ROA";
		case 11:
			return "SCM";
		case 12:
			return "TAL";
		case 15:
			return "CHO";
		case 13:
			return "GAP";
		case 16:
			return "HEN";
		case 14:
			return "RIO";
		default:
			break;
	}
	return "No District Label!";
}

char* func_91(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LEMOYNE";
		case 1:
			return "WEST_ELIZ";
		case 2:
			return "LEMOYNE";
		case 3:
			return "NEW_HANOV";
		case 4:
			return "WEST_ELIZ";
		case 5:
			return "AMBARINO";
		case 6:
			return "AMBARINO";
		case 7:
			return "AMBARINO";
		case 8:
			return "GUARMA";
		case 9:
			return "NEW_HANOV";
		case 10:
			return "NEW_HANOV";
		case 11:
			return "LEMOYNE";
		case 12:
			return "WEST_ELIZ";
		case 13:
			return "NEW_AUST";
		case 14:
			return "NEW_AUST";
		case 15:
			return "NEW_AUST";
		case 16:
			return "NEW_AUST";
		default:
			break;
	}
	return "No State Label!";
}

void func_92(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_124(iParam0, &iVar0, &iVar1);
	if (!func_125(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_126(iVar0, iVar1);
}

void func_93(var uParam0, int iParam1)
{
	uParam0->f_109 = (uParam0->f_109 - (uParam0->f_109 && iParam1));
}

void func_94(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 && !func_63(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_64(*uParam0);
	if (((*Global_1945938)[iVar0 /*18*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && iParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_127(iVar0);
	*uParam0 = 0;
}

void func_95(int iParam0, bool bParam1)
{
	char* sVar0;

	if (bParam1)
	{
		if (!func_63(&(Local_47.f_1[iParam0])))
		{
			if (iParam0 == 9)
			{
				Local_47.f_1[iParam0] = func_129(func_128(iParam0), 129385309, -811138093, 0);
			}
			else if (iParam0 == 8)
			{
				Local_47.f_1[iParam0] = func_129(func_128(iParam0), -1923356207, -133104843, 0);
			}
			else if (iParam0 == 3)
			{
				if (Local_47.f_110 == 0)
				{
					sVar0 = "CAM_FOCUS_LOCKE";
				}
				else
				{
					sVar0 = "CAM_FOCUS_LOCKD";
				}
				Local_47.f_1[iParam0] = func_131(sVar0, func_130(iParam0), 2, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
			}
			else
			{
				Local_47.f_1[iParam0] = func_131(func_128(iParam0), func_130(iParam0), 2, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
			}
			if (iParam0 == 4)
			{
				func_132(&(Local_47.f_1[iParam0]), 11, 1, 1);
			}
			func_133(&(Local_47.f_1[iParam0]), -857683846, 0, 1);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[&Local_47.f_1[iParam0] /*18*/])->f_3, 1);
		}
	}
	else if (func_63(&(Local_47.f_1[iParam0])))
	{
		func_94(Local_47.f_1[iParam0], 1, 1);
	}
}

bool func_96(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_97(var uParam0)
{
	func_134(uParam0, 0f);
}

bool func_98(int iParam0)
{
	int iVar0;

	iVar0 = func_135(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_99(var uParam0)
{
	fLocal_161 = PAD::GET_CONTROL_NORMAL(0, 1206668322);
	if (fLocal_161 < -0.2f)
	{
		if (uParam0->f_33.f_3 < 60f)
		{
			if (PAD::_IS_INPUT_DISABLED(0))
			{
				uParam0->f_33.f_3 = (uParam0->f_33.f_3 + (0.6f * 4f));
			}
			else
			{
				uParam0->f_33.f_3 = (uParam0->f_33.f_3 + 0.6f);
			}
			CAM::_0xE4B7945EF4F1BFB2(uParam0->f_32, &(uParam0->f_33));
			if (!iLocal_19)
			{
				if (AUDIO::_0x4AD019591E94C064("Zoom_In", Global_35, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::_0x6FB1DA3CA9DA7D90("Zoom_In", Global_35, "CAMERA_SOUNDSET", 0, 0, 0);
				}
				iLocal_19 = 1;
			}
		}
		else if (iLocal_19)
		{
			AUDIO::_0x0F2A2175734926D8("Zoom_In", "CAMERA_SOUNDSET");
			iLocal_19 = 0;
		}
	}
	else if (iLocal_19)
	{
		AUDIO::_0x0F2A2175734926D8("Zoom_In", "CAMERA_SOUNDSET");
		iLocal_19 = 0;
	}
	if (fLocal_161 > 0.2f)
	{
		if (uParam0->f_33.f_3 > 25f)
		{
			if (PAD::_IS_INPUT_DISABLED(0))
			{
				uParam0->f_33.f_3 = (uParam0->f_33.f_3 - (0.6f * 4f));
			}
			else
			{
				uParam0->f_33.f_3 = (uParam0->f_33.f_3 - 0.6f);
			}
			CAM::_0xE4B7945EF4F1BFB2(uParam0->f_32, &(uParam0->f_33));
			if (!iLocal_20)
			{
				if (AUDIO::_0x4AD019591E94C064("Zoom_Out", Global_35, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::_0x6FB1DA3CA9DA7D90("Zoom_Out", Global_35, "CAMERA_SOUNDSET", 0, 0, 0);
				}
				iLocal_20 = 1;
			}
		}
		else if (iLocal_20)
		{
			AUDIO::_0x0F2A2175734926D8("Zoom_Out", "CAMERA_SOUNDSET");
			iLocal_20 = 0;
		}
	}
	else if (iLocal_20)
	{
		AUDIO::_0x0F2A2175734926D8("Zoom_Out", "CAMERA_SOUNDSET");
		iLocal_20 = 0;
	}
}

void func_100(var uParam0)
{
	int iVar0;
	int iVar1;

	if (iLocal_42 == 0)
	{
		if (func_41(&(uParam0->f_1[3])))
		{
			if (AUDIO::_0x4AD019591E94C064("DOF_Change", Global_35, "CAMERA_SOUNDSET", -2))
			{
				AUDIO::_0x6FB1DA3CA9DA7D90("DOF_Change", Global_35, "CAMERA_SOUNDSET", 0, 0, 0);
			}
			iLocal_43 = MISC::GET_GAME_TIMER();
			iLocal_42 = 1;
			iLocal_44 = 0;
		}
	}
	else if ((MISC::GET_GAME_TIMER() - iLocal_43) > 300 && iLocal_44 == 0)
	{
		if (uParam0->f_110 == 0)
		{
			uParam0->f_110 = 1;
			iVar0 = func_64(&(Local_47.f_1[3]));
			HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, "CAM_FOCUS_LOCKD");
		}
		else
		{
			uParam0->f_110 = 0;
			iVar1 = func_64(&(Local_47.f_1[3]));
			HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar1 /*18*/])->f_3, "CAM_FOCUS_LOCKE");
		}
		CAM::_0x9F97E85EC142255E(uParam0->f_32, uParam0->f_110);
		iLocal_44 = 1;
	}
	else
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_43) > 500)
		{
		}
		if ((MISC::GET_GAME_TIMER() - iLocal_43) > 850)
		{
			iLocal_42 = 0;
			iLocal_44 = 0;
		}
	}
}

bool func_101(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1) != 0;
}

void func_102(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_66(iParam0, 1);
	func_67(iParam0, 1);
	func_68(iParam0, 128);
}

bool func_103(var uParam0)
{
	return func_96(*uParam0, 2);
}

int func_104()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

void func_105(var uParam0)
{
	float fVar0;

	if (CAM::DOES_CAM_EXIST(uParam0->f_32))
	{
		CAM::SET_CAM_ACTIVE(uParam0->f_32, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(uParam0->f_32, false);
	}
	fLocal_217 = ENTITY::GET_ENTITY_HEADING(Global_35);
	uParam0->f_68 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
	uParam0->f_71 = { ENTITY::GET_ENTITY_ROTATION(Global_35, 2) };
	uParam0->f_83 = { uParam0->f_71, uParam0->f_71.f_1, (uParam0->f_71.f_2 - 180f) };
	uParam0->f_77 = { vLocal_170 };
	uParam0->f_110 = 0;
	fLocal_176 = 0f;
	fLocal_218 = 0.5f;
	vLocal_177 = { uParam0->f_83 };
	vLocal_177.x = (vLocal_177.x + 1f);
	vLocal_180 = { vLocal_177 };
	uParam0->f_43.f_3 = PLAYER::GET_PLAYER_INDEX();
	uParam0->f_43.f_4 = 21030;
	if (!CAM::DOES_CAM_EXIST(uParam0->f_32))
	{
		fVar0 = 50f;
		uParam0->f_32 = CAM::CREATE_CAM_WITH_PARAMS("KIT_CAMERA", uParam0->f_77, uParam0->f_83, fVar0, true, 2);
	}
	uParam0->f_33 = 25f;
	uParam0->f_33.f_1 = 2f;
	uParam0->f_33.f_2 = 128f;
	uParam0->f_33.f_3 = 30f;
	uParam0->f_33.f_4 = 30f;
	uParam0->f_33.f_5 = 90f;
	uParam0->f_33.f_6 = 1;
	uParam0->f_33.f_7 = 0;
	uParam0->f_33.f_8 = 1;
	uParam0->f_33.f_9 = 1;
	CAM::_0xE4B7945EF4F1BFB2(uParam0->f_32, &(uParam0->f_33));
	CAM::_0x9F97E85EC142255E(uParam0->f_32, uParam0->f_110);
	CAM::_0x42ED56B02E05D109(uParam0->f_32, false);
	CAM::SET_CAM_ACTIVE(uParam0->f_32, true);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
}

void func_106()
{
	sLocal_193[0] = "portrait_normal";
	sLocal_193[1] = "portrait_happy";
	sLocal_193[2] = "portrait_pensive";
	sLocal_193[3] = "portrait_pensive_2";
	sLocal_193[4] = "portrait_relaxed";
	sLocal_193[5] = "portrait_angry";
	sLocal_193[6] = "portrait_angry_2";
	sLocal_193[7] = "portrait_annoyed";
}

void func_107()
{
	iLocal_206[0] = 0;
	iLocal_206[1] = 1;
	iLocal_206[2] = 2;
	iLocal_206[3] = 3;
	iLocal_206[4] = 4;
	iLocal_206[5] = 5;
	iLocal_206[6] = 6;
}

void func_108(var uParam0)
{
	fLocal_161 = PAD::GET_CONTROL_NORMAL(0, 1206668322);
	if (fLocal_161 < -0.2f)
	{
		if (uParam0->f_33.f_3 < 90f)
		{
			if (PAD::_IS_INPUT_DISABLED(0))
			{
				uParam0->f_33.f_3 = (uParam0->f_33.f_3 + (0.9f * 4f));
			}
			else
			{
				uParam0->f_33.f_3 = (uParam0->f_33.f_3 + 0.9f);
			}
			CAM::_0xE4B7945EF4F1BFB2(uParam0->f_32, &(uParam0->f_33));
			if (!iLocal_19)
			{
				if (AUDIO::_0x4AD019591E94C064("Zoom_In", Global_35, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::_0x6FB1DA3CA9DA7D90("Zoom_In", Global_35, "CAMERA_SOUNDSET", 0, 0, 0);
				}
				iLocal_19 = 1;
			}
		}
		else if (iLocal_19)
		{
			AUDIO::_0x0F2A2175734926D8("Zoom_In", "CAMERA_SOUNDSET");
			iLocal_19 = 0;
		}
	}
	else if (iLocal_19)
	{
		AUDIO::_0x0F2A2175734926D8("Zoom_In", "CAMERA_SOUNDSET");
		iLocal_19 = 0;
	}
	if (fLocal_161 > 0.2f)
	{
		if (uParam0->f_33.f_3 > 30f)
		{
			if (PAD::_IS_INPUT_DISABLED(0))
			{
				uParam0->f_33.f_3 = (uParam0->f_33.f_3 - (0.9f * 4f));
			}
			else
			{
				uParam0->f_33.f_3 = (uParam0->f_33.f_3 - 0.9f);
			}
			CAM::_0xE4B7945EF4F1BFB2(uParam0->f_32, &(uParam0->f_33));
			if (!iLocal_20)
			{
				if (AUDIO::_0x4AD019591E94C064("Zoom_Out", Global_35, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::_0x6FB1DA3CA9DA7D90("Zoom_Out", Global_35, "CAMERA_SOUNDSET", 0, 0, 0);
				}
				iLocal_20 = 1;
			}
		}
		else if (iLocal_20)
		{
			AUDIO::_0x0F2A2175734926D8("Zoom_Out", "CAMERA_SOUNDSET");
			iLocal_20 = 0;
		}
	}
	else if (iLocal_20)
	{
		AUDIO::_0x0F2A2175734926D8("Zoom_Out", "CAMERA_SOUNDSET");
		iLocal_20 = 0;
	}
}

float func_109(float fParam0, float fParam1)
{
	float fVar0;

	fVar0 = ((fParam0 - fParam1) + 180f);
	fVar0 = (fVar0 / 360f);
	fVar0 = (((fVar0 - IntToFloat(BUILTIN::FLOOR(fVar0))) * 360f) - 180f);
	return fVar0;
}

int func_110(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_136(bParam1, iParam2, iParam3);
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

bool func_111(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam2 && !func_63(iParam0))
	{
		return false;
	}
	iVar0 = func_64(iParam0);
	return HUD::_UIPROMPT_HAS_STANDARD_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam1);
}

Vector3 func_112(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

void func_113()
{
	iLocal_216 = 1;
	iLocal_215 = MISC::GET_GAME_TIMER();
	iLocal_214 = 1;
	func_15();
}

void func_114(var uParam0)
{
	func_137(uParam0);
	switch (&iLocal_206[uParam0->f_88])
	{
		case 0:
			func_138(Global_35);
			break;
		case 1:
			func_139(830847823, "WORLD_HUMAN_STARE_STOIC_MALE_A");
			break;
		case 2:
			func_139(1904532698, "WORLD_HUMAN_STERNGUY");
			break;
		case 3:
			func_139(-22664287, "WORLD_HUMAN_SMOKE_MALE_C");
			break;
		case 4:
			func_139(1998449450, "WORLD_PLAYER_CAMP_FIRE_SQUAT_MALE_A");
			break;
		case 5:
			ENTITY::SET_ENTITY_HEADING(Global_35, (fLocal_217 + 180f));
			break;
		case 6:
			func_139(-1241981548, "WORLD_PLAYER_DYNAMIC_KNEEL_MALE_A");
			break;
	}
}

float func_115()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_116(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

int func_117(int iParam0)
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

bool func_118(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_119(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_120(int iParam0)
{
	vector3 vVar0;

	if (!func_119(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_121(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_119(iParam0, 0))
	{
		return 0;
	}
	if (Global_1935630->f_12)
	{
		return 0;
	}
	iVar0 = func_140(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_141("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_142(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_143(Var4.f_4))
			{
			}
			else if (WEAPON::_0x5C2EA6C44F515F34(Var4.f_4) == iVar0)
			{
				func_144(iVar1);
				return 1;
			}
			iVar3++;
		}
		func_144(iVar1);
	}
	return 0;
}

int func_122(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_119(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_120(iParam0);
	if (iVar0 == 307971639 || (iParam1 && iVar0 == -427144552))
	{
		iVar1 = func_140(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_145(iParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_146(bParam2), iParam0, 0);
	return iVar2;
}

void func_123(int iParam0)
{
	Global_1900383->f_316 = (Global_1900383->f_316 || iParam0);
}

void func_124(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

int func_125(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return 0;
	}
	if (func_147(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_148(iParam0))
	{
		return 0;
	}
	if (func_149(iParam0))
	{
		return 0;
	}
	if ((Global_1898164->f_163 && !func_150(iParam0, 1)) || func_151(32768))
	{
		if (!func_150(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return 0;
		}
	}
	if (!func_152())
	{
		return 0;
	}
	return 1;
}

void func_126(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_127(int iParam0)
{
	if (!func_153(iParam0))
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

char* func_128(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "CAM_PUT_AWAY";
		case 0:
			return "CAM_HANDHELD";
		case 3:
			return "CAM_FOCUS_LOCK";
		case 1:
			return "CAM_SELFIE";
		case 8:
			return "CAM_POSES";
		case 9:
			return "CAM_EXPRESSIONS";
		case 7:
			return "CAM_BACK";
		case 4:
			return "CAM_ZOOM";
		case 5:
			return "CAM_GALLERY";
		default:
			break;
	}
	if (iParam0 == 6)
	{
		if (func_23())
		{
			return "CAM_SAVE_PHOTO";
		}
		else
		{
			return "CAM_TAKE_PHOTO";
		}
	}
	return "INVALID_USE_CONTEXT";
}

int func_129(char* sParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_101(iVar0, 2))
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
		func_102(iVar1, iParam1, sParam0, 0, 3, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam3, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 0, iParam2, 1704213876, 0);
		return iVar1;
	}
	return 0;
}

int func_130(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 1606906090;
		case 7:
			return -1531087707;
		case 0:
			return 2003789289;
		case 3:
			return 805566940;
		case 1:
			return -1403444502;
		case 4:
			return 1206668322;
		case 8:
			return 129385309;
		case 9:
			return -1923356207;
		case 6:
			return 1157240002;
		case 5:
			return -399281322;
		default:
			break;
	}
	return 0;
}

int func_131(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
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
		if (func_101(iVar0, 2))
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
		func_102(iVar1, iParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 1065353216, 0, 0, 0, iParam10, bParam11);
		return iVar1;
	}
	return 0;
}

void func_132(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam3 && !func_63(iParam0))
	{
		return;
	}
	iVar0 = func_64(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam1, iParam2);
}

void func_133(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam3 && !func_63(iParam0))
	{
		return;
	}
	iVar0 = func_64(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_GROUP(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam1, iParam2);
}

void func_134(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_115() - fParam1);
	func_154(uParam0, 1);
	func_155(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_135(int iParam0)
{
	if (!func_156(iParam0))
	{
		return -1;
	}
	return func_157(iParam0);
}

int func_136(bool bParam0, var uParam1, var uParam2)
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

void func_137(var uParam0)
{
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), false, 0, false, false);
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), false, 1, false, false);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID(), 0, 1);
	ENTITY::SET_ENTITY_HEADING(Global_35, fLocal_217);
}

void func_138(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0, 0, 1);
		PED::FORCE_PED_MOTION_STATE(iParam0, -1871534317, true, 0, false);
		TASK::CLEAR_PED_TASKS(iParam0, 1, 0);
		TASK::TASK_STAND_STILL(iParam0, -1);
		PED::SET_PED_STEALTH_MOVEMENT(iParam0, false, 0, 0);
	}
}

void func_139(int iParam0, int iParam1)
{
	iLocal_219 = TASK::CREATE_SCENARIO_POINT(iParam0, vLocal_164, fLocal_217, 0f, 0f, 1);
	TASK::_0x5AF19B6CC2115D34(iLocal_219, 25, 1);
	TASK::_0x5AF19B6CC2115D34(iLocal_219, 23, 1);
	TASK::_TASK_USE_SCENARIO_POINT(Global_35, iLocal_219, iParam1, -1, 0, 1, 0, 0, 0f, 0);
}

int func_140(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_119(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_120(iParam0);
	if (iVar0 == -427144552 && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_0x5C2EA6C44F515F34(iParam0);
	}
	else if (iVar0 == 307971639 && WEAPON::_0x1F7977C9101F807F(iParam0))
	{
		return iParam0;
	}
	if (func_158(iParam0, 1399091007))
	{
		func_159(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_141(char* sParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	*uParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_146(bParam4), sParam0, iParam3, uParam2);
	if (*uParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_142(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_143(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("weapon_unarmed"));
}

int func_144(int iParam0)
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

int func_145(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_160(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_162(&Var0, func_161(0));
	}
	if (!func_163(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_144(iVar14);
	return uVar15;
}

int func_146(bool bParam0)
{
	if (func_164() == -1)
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

bool func_147(int iParam0, int iParam1)
{
	if (func_164() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iParam0]), iParam1);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iParam0]), iParam1);
}

int func_148(int iParam0)
{
	if (func_164() != -1)
	{
		if (func_150(iParam0, 4))
		{
			return 0;
		}
	}
	else if (func_150(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

int func_149(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_150(iParam0, 65536) && !func_150(iParam0, 32768))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if ((Global_40.f_7756[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_150(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0 /*3*/] - iVar1);
			if ((Global_40.f_7756[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && func_150(iParam0, 32768))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_150(int iParam0, int iParam1)
{
	return ((Global_1905944->f_22[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

bool func_151(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_152()
{
	return Global_1905944->f_5694;
}

bool func_153(int iParam0)
{
	return func_101(iParam0, 2);
}

void func_154(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_155(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_156(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_157(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_165(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

int func_158(int iParam0, int iParam1)
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

void func_159(int iParam0, var uParam1, var uParam2)
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

struct<14> func_160(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

struct<4> func_161(bool bParam0)
{
	int iVar0;

	iVar0 = func_146(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224214))
		{
			*Global_1224214 = { func_167(923904168, func_166(bParam0), -740156546, bParam0) };
		}
		return *Global_1224214;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224222))
		{
			*Global_1224222 = { func_167(923904168, func_166(bParam0), -740156546, 0) };
		}
		return *Global_1224222;
	}
	return func_167(923904168, func_166(bParam0), -740156546, 0);
}

void func_162(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_163(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	*uParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_146(bParam3), uParam0, uParam2);
	if (*uParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_164()
{
	return Global_1572887->f_12;
}

int func_165(int iParam0)
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

struct<4> func_166(bool bParam0)
{
	return func_167(1328661203, func_168(), -1591664384, bParam0);
}

struct<4> func_167(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_119(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_146(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

struct<4> func_168()
{
	struct<4> Var0;

	return Var0;
}

