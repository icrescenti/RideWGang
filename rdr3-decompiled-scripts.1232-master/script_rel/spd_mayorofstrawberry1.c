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
	struct<652> Local_14 = { 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 1040187392, 1040187392, -1, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 4, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 3, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 3, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 3, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 3, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	struct<4> Var0;
	vector3 vVar4;
	var uVar8;
	var uVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		func_1(&Local_14);
	}
	while (true)
	{
		BUILTIN::WAIT(0);
		if ((func_2(18, Local_14.f_226, 1, 1) && Local_14 > 18) && !Local_14.f_647)
		{
			if (Local_14.f_1 == 0)
			{
				func_4(&Local_14, &(Local_14.f_250), 0, func_3(), &(Local_14.f_3), &(Local_14.f_4), 0, 1, 1, 0, 0);
			}
			else if (Local_14.f_1 != 2)
			{
				if (Local_14.f_1 == 3)
				{
					func_4(&Local_14, &(Local_14.f_250), 2, func_5(), &(Local_14.f_3), &(Local_14.f_4), 0, 1, 1, "s_BASE", "s_base_end");
				}
			}
			else
			{
				func_4(&Local_14, &(Local_14.f_250), 1, func_6(), &(Local_14.f_3), &(Local_14.f_4), 0, 1, 1, "s_IG2_PDMOS_Base", "s_IG2_PDMOS_Base_End");
			}
		}
		func_7(18, 0, &(Local_14.f_226), &(Local_14.f_150), &(Local_14.f_648), 0, 1097859072, 0);
		if (Local_14.f_643)
		{
			PED::SET_PED_RESET_FLAG(Local_14.f_226, 49, true);
		}
		PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Local_14.f_226, 0, 1);
		func_8(Local_14.f_226, Local_14.f_234);
		if (!func_9(Global_35, 0))
		{
			func_1(&Local_14);
		}
		else if (func_10() != 26)
		{
			if (!func_11(&(Local_14.f_132)))
			{
				func_12(&(Local_14.f_132), 0);
			}
			else if (func_13(&(Local_14.f_132)) > 10f)
			{
				func_14(&(Local_14.f_132));
				func_1(&Local_14);
			}
		}
		else if ((PED::IS_PED_USING_ANY_SCENARIO(Global_35) && TASK::_0x2D0571BB55879DA2(Global_35) == -1054012177) && CAM::IS_SCREEN_FADED_OUT())
		{
			func_14(&(Local_14.f_132));
			func_1(&Local_14);
		}
		else if (func_16(18, func_15(18), &(Local_14.f_259), Local_14.f_226))
		{
			Local_14.f_651 = 1;
			if (func_17(&(Local_14.f_259)))
			{
				func_1(&Local_14);
			}
		}
		if ((Local_14 == 11 || Local_14 == 6) || Local_14 == 17)
		{
			if (Local_14.f_651)
			{
				if (func_18(&(Local_14.f_259)))
				{
					if (!func_17(&(Local_14.f_259)))
					{
						if (Local_14 != 11)
						{
							if (Local_14 == 6)
							{
								if (func_19(&(Local_14.f_225), 3))
								{
									func_20(&Local_14, 20);
									func_21(&(Local_14.f_253), 134217728);
								}
							}
							else if (Local_14 == 17)
							{
								func_20(&Local_14, 58);
							}
						}
						else
						{
							func_20(&Local_14, 13);
						}
					}
				}
			}
		}
		func_22(&Local_14);
		func_23(&Local_14);
		func_24(&Local_14);
		func_25(&Local_14);
		if ((((Local_14 >= 5 && Local_14 < 60) && Local_14 != 57) && Local_14 != 58) && Local_14 != 18)
		{
			func_26(&Local_14, &(Local_14.f_141));
			func_27(&Local_14);
			func_28(&Local_14);
			func_29(&Local_14);
		}
		func_30(&Local_14);
		func_31(Local_14.f_226, &(Local_14.f_253), 8192, 18, 0);
		if (((Local_14.f_1 == 0 || Local_14.f_1 == 2) && VOLUME::_0x92A78D0BEDB332A3(Local_14.f_239)) && func_32(Global_35, Local_14.f_239, 1, 0))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 782960533, false);
			PAD::DISABLE_CONTROL_ACTION(0, -762150781, false);
		}
		switch (Local_14)
		{
			case 0:
				func_33(&(Local_14.f_253));
				if (func_34(Local_14.f_253, 16))
				{
					Local_14.f_1 = 0;
					func_20(&Local_14, 3);
				}
				else if (func_34(Local_14.f_253, 8))
				{
					Local_14.f_1 = 2;
					func_20(&Local_14, 8);
				}
				else if (func_34(Local_14.f_253, 32))
				{
					Local_14.f_1 = 3;
					func_20(&Local_14, 14);
				}
				break;
			case 3:
				Local_14.f_257 = 2;
				Local_14.f_248 = (8 - 1);
				Local_14.f_249 = (2 - 1);
				HUD::_0xF66090013DE648D5("SPMS");
				HUD::_0xF66090013DE648D5("SPMAYAU");
				STREAMING::REQUEST_MODEL(func_35(0), false);
				STREAMING::REQUEST_MODEL(func_35(1), false);
				STREAMING::REQUEST_MODEL(func_35(2), false);
				STREAMING::REQUEST_MODEL(func_35(3), false);
				STREAMING::REQUEST_MODEL(func_35(4), false);
				STREAMING::REQUEST_MODEL(func_35(5), false);
				func_36(&Local_14);
				func_37(Local_14.f_232, "SP_MayorOfStrawberry1_Block", 1, 0, 0, 0, -1082130432);
				POPULATION::_0xB56D41A694E42E86(Local_14.f_235, 0, 0, 0, -1, -1, 0);
				POPULATION::_0x18262CAFEBB5FBE1(Local_14.f_235, 0, 0, 0, -1, -1, 0);
				Local_14.f_644 = func_38(Local_14.f_239, 0, 0, 0);
				Local_14.f_280 = "NICHOLAS_TIMMINS";
				Local_14.f_159 = func_40(18, 0, 9, func_39(18));
				if (!func_41(Local_14.f_159))
				{
				}
				Local_14.f_254 = func_42(Local_14.f_159);
				Local_14.f_258 = func_43(func_40(18, 0, 9, func_39(18)));
				if (func_34(Local_14.f_254, 128))
				{
					func_44(&(Local_14.f_254), 128);
				}
				if (func_45())
				{
					func_46(&(Local_14.f_5), Global_35, "JOHN", 0);
				}
				else
				{
					func_46(&(Local_14.f_5), Global_35, "ARTHUR", 0);
				}
				func_47(&(Local_14.f_259));
				func_48(&(Local_14.f_103));
				func_49(&(Local_14.f_103), 1);
				func_50(&(Local_14.f_103), 0);
				func_51(&(Local_14.f_103), 0);
				func_52(&(Local_14.f_103), 1);
				func_53(&(Local_14.f_103), 1);
				func_54(&(Local_14.f_103), 0);
				func_55(&(Local_14.f_103), 1);
				func_56(&(Local_14.f_103), 1);
				func_57(&(Local_14.f_103), 1);
				Local_14.f_640 = 8;
				if (func_41(Local_14.f_159))
				{
					func_20(&Local_14, 4);
				}
				break;
			case 8:
				Local_14.f_257 = 4;
				Local_14.f_248 = (5 - 1);
				Local_14.f_249 = (2 - 1);
				HUD::_0xF66090013DE648D5("SPMS");
				HUD::_0xF66090013DE648D5("SPMAYAU");
				STREAMING::REQUEST_MODEL(func_35(0), false);
				STREAMING::REQUEST_MODEL(func_35(2), false);
				STREAMING::REQUEST_MODEL(func_35(3), false);
				STREAMING::REQUEST_MODEL(func_35(6), false);
				func_58(&Local_14);
				func_37(Local_14.f_232, "SP_MayorOfStrawberry2_Block", 1, 0, 0, 0, -1082130432);
				POPULATION::_0xB56D41A694E42E86(Local_14.f_235, 0, 0, 0, -1, -1, 0);
				POPULATION::_0x18262CAFEBB5FBE1(Local_14.f_235, 0, 0, 0, -1, -1, 0);
				PATHFIND::_0xB03944057FD735BA(Local_14.f_238, 6, 0);
				Local_14.f_644 = func_38(Local_14.f_239, 0, 0, 0);
				Local_14.f_645 = PED::_0x4C39C95AE5DB1329(Local_14.f_240, 0, 15);
				Local_14.f_280 = "NICHOLAS_TIMMINS";
				Local_14.f_159 = func_40(18, 1, 9, 0);
				if (!func_41(Local_14.f_159))
				{
				}
				Local_14.f_254 = func_42(Local_14.f_159);
				Local_14.f_258 = func_43(func_40(18, 0, 9, func_39(18)));
				if (func_34(Local_14.f_254, 128))
				{
					func_44(&(Local_14.f_254), 128);
				}
				if (func_45())
				{
					func_46(&(Local_14.f_5), Global_35, "JOHN", 0);
				}
				else
				{
					func_46(&(Local_14.f_5), Global_35, "ARTHUR", 0);
				}
				func_47(&(Local_14.f_259));
				func_48(&(Local_14.f_103));
				func_49(&(Local_14.f_103), 1);
				func_50(&(Local_14.f_103), 0);
				func_51(&(Local_14.f_103), 0);
				func_52(&(Local_14.f_103), 1);
				func_53(&(Local_14.f_103), 1);
				func_54(&(Local_14.f_103), 0);
				func_55(&(Local_14.f_103), 1);
				func_56(&(Local_14.f_103), 1);
				func_57(&(Local_14.f_103), 1);
				Local_14.f_640 = 3;
				ENTITY::CREATE_MODEL_HIDE(-1817.047f, -371.4747f, 163.116f, 1f, joaat("p_cs_newspaper_03x"), false);
				if (func_41(Local_14.f_159))
				{
					func_20(&Local_14, 9);
				}
				break;
			case 14:
				Local_14.f_257 = 4;
				Local_14.f_248 = (6 - 1);
				HUD::_0xF66090013DE648D5("SPMS");
				HUD::_0xF66090013DE648D5("SPMAYAU");
				STREAMING::REQUEST_MODEL(func_35(0), false);
				STREAMING::REQUEST_MODEL(func_35(2), false);
				STREAMING::REQUEST_MODEL(func_35(3), false);
				func_59(&Local_14);
				if (!func_34(Local_14.f_253, 268435456))
				{
					iVar11 = func_60(884);
					if (_NAMESPACE48::_0x800DF3FC913355F3(iVar11))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(func_61(884)) || (!ENTITY::IS_ENTITY_ON_SCREEN(func_61(884)) && func_62(Global_35, func_61(884), 1, 1) > 100f))
						{
							func_63(884);
							_NAMESPACE48::_0xFCC6DB8DBE709BC8(iVar11);
							func_21(&(Local_14.f_253), 268435456);
						}
					}
				}
				func_37(Local_14.f_232, "SP_MayorOfStrawberry5_Block", 1, 0, 0, 0, -1082130432);
				POPULATION::_0xB56D41A694E42E86(Local_14.f_235, 0, 0, 0, -1, -1, 0);
				POPULATION::_0x18262CAFEBB5FBE1(Local_14.f_235, 0, 0, 0, -1, -1, 0);
				PED::_0x7C00CFC48A782DC0(Local_14.f_235, Local_14.f_226, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
				Local_14.f_644 = func_38(Local_14.f_239, 0, 0, 0);
				Local_14.f_280 = "NICHOLAS_TIMMINS";
				Local_14.f_159 = func_40(18, 2, 9, 0);
				if (!func_41(Local_14.f_159))
				{
				}
				if (func_45())
				{
					func_46(&(Local_14.f_5), Global_35, "JOHN", 0);
				}
				else
				{
					func_46(&(Local_14.f_5), Global_35, "ARTHUR", 0);
				}
				Local_14.f_254 = func_42(Local_14.f_159);
				Local_14.f_258 = func_43(func_40(18, 0, 9, func_39(18)));
				if (func_34(Local_14.f_254, 128))
				{
					func_44(&(Local_14.f_254), 128);
				}
				func_47(&(Local_14.f_259));
				func_48(&(Local_14.f_103));
				func_49(&(Local_14.f_103), 1);
				func_50(&(Local_14.f_103), 0);
				func_51(&(Local_14.f_103), 0);
				func_52(&(Local_14.f_103), 1);
				func_53(&(Local_14.f_103), 1);
				func_54(&(Local_14.f_103), 0);
				func_55(&(Local_14.f_103), 1);
				func_56(&(Local_14.f_103), 1);
				func_57(&(Local_14.f_103), 1);
				func_64(&(Local_14.f_103), 0);
				Local_14.f_640 = 11;
				if (func_41(Local_14.f_159))
				{
					func_20(&Local_14, 15);
				}
				break;
			case 4:
				PED::_0xED9582B3DA8F02B4(5);
				if ((((((((HUD::_0xD0976CC34002DB57("SPMS") && HUD::_0xD0976CC34002DB57("SPMAYAU")) && STREAMING::HAS_MODEL_LOADED(func_35(0))) && STREAMING::HAS_MODEL_LOADED(func_35(1))) && STREAMING::HAS_MODEL_LOADED(func_35(2))) && STREAMING::HAS_MODEL_LOADED(func_35(3))) && STREAMING::HAS_MODEL_LOADED(func_35(4))) && STREAMING::HAS_MODEL_LOADED(func_35(5))) && PED::_0x5C16855277819BBF() == 5)
				{
					func_20(&Local_14, 5);
				}
				break;
			case 9:
				PED::_0xED9582B3DA8F02B4(5);
				if ((((((((HUD::_0xD0976CC34002DB57("SPMS") && HUD::_0xD0976CC34002DB57("SPMAYAU")) && STREAMING::HAS_MODEL_LOADED(func_35(0))) && STREAMING::HAS_MODEL_LOADED(func_35(2))) && STREAMING::HAS_MODEL_LOADED(func_35(3))) && STREAMING::HAS_MODEL_LOADED(func_35(6))) && PED::_0x5C16855277819BBF() == 5) && func_65(&Local_14, 0)) && func_19(&(Local_14.f_225), 3))
				{
					func_20(&Local_14, 10);
				}
				break;
			case 15:
				PED::_0xED9582B3DA8F02B4(5);
				if (((((HUD::_0xD0976CC34002DB57("SPMS") && HUD::_0xD0976CC34002DB57("SPMAYAU")) && STREAMING::HAS_MODEL_LOADED(func_35(0))) && STREAMING::HAS_MODEL_LOADED(func_35(2))) && STREAMING::HAS_MODEL_LOADED(func_35(3))) && PED::_0x5C16855277819BBF() == 5)
				{
					func_20(&Local_14, 16);
				}
				break;
			case 5:
				Var0 = { func_66(0) };
				vVar4 = { func_66(1) };
				if ((((func_67(&(Local_14.f_226), 483, Var0, 1, 1320127128) && func_68(&(Local_14.f_229), func_35(4), vVar4)) && func_68(&(Local_14.f_230), func_35(5), vVar4)) && func_69(&(Local_14.f_646), &(Local_14.f_228), func_35(1), vVar4, 9)) && func_70(&Local_14))
				{
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_14.f_226, "special_ped_group", 0f);
					func_71(Local_14.f_226, 18);
					PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), Local_14.f_226, "SPECIAL_PED_LIGHTWEIGHT_1_1", 0f, 0f, 0f, 0, "MayorBubble");
					uVar9 = func_72(&Local_14, &iVar10);
					func_73(&(Local_14.f_226), &(Local_14.f_255), 161068336, 20f, -1082130432);
					func_75(Local_14.f_303[0 /*17*/], "INTERACT_GREET", func_74(), -163964935, 0, 0, 0, 1, 0);
					func_75(Local_14.f_303[1 /*17*/], "INTERACT_INSULT", uVar9, 648122183, 0, 0, 0, 1, iVar10);
					func_76(Local_14.f_303[0 /*17*/], 10);
					func_76(Local_14.f_303[1 /*17*/], 10);
					iVar12 = 0;
					while (iVar12 < Local_14.f_257)
					{
						func_75((Local_14.f_338[iVar12 /*75*/])->f_21[0 /*17*/], "INTERACT_GREET", func_74(), -163964935, 0, 0, 0, 1, 0);
						func_75((Local_14.f_338[iVar12 /*75*/])->f_21[1 /*17*/], "INTERACT_INSULT", uVar9, 648122183, 0, 0, 0, 1, iVar10);
						func_77((Local_14.f_338[iVar12 /*75*/])->f_21[0 /*17*/], 0, 0);
						func_77((Local_14.f_338[iVar12 /*75*/])->f_21[1 /*17*/], 0, 0);
						iVar12++;
					}
					if (!func_34(Local_14.f_253, 16777216))
					{
						Local_14.f_639 = func_78(3, 0, 0);
						func_79(Local_14.f_281[0 /*21*/], 0);
						func_21(&(Local_14.f_253), 16777216);
					}
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_14.f_226, true);
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_14.f_226, false);
					PED::SET_PED_CONFIG_FLAG(Local_14.f_226, 448, true);
					func_46(&(Local_14.f_5), Local_14.f_226, Local_14.f_280, 0);
					ENTITY::_0x203BEFFDBE12E96A(Local_14.f_226, Var0, Var0.f_3, 1, 0, 1);
					ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(Local_14.f_226, true, 15f);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_14.f_226, 17, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_14.f_226, 5, false);
					if (func_45())
					{
						func_80(Local_14.f_226, 1689938120);
					}
					AUDIO::STOP_PED_SPEAKING(Local_14.f_226, true);
					PED::_0x7C00CFC48A782DC0(Local_14.f_237, Local_14.f_226, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
					PED::_0x7C00CFC48A782DC0(Local_14.f_234, Local_14.f_226, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
					PED::_0x7C00CFC48A782DC0(Local_14.f_242, Local_14.f_226, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
					func_20(&Local_14, 32);
				}
				break;
			case 10:
				Var0 = { func_66(2) };
				vVar4 = { func_66(2) };
				if ((func_67(&(Local_14.f_226), 483, Var0, 1, 1320127128) && func_68(&(Local_14.f_231), func_35(6), vVar4)) && func_70(&Local_14))
				{
					func_81(&Local_14);
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_14.f_226, "special_ped_group", 0f);
					func_71(Local_14.f_226, 18);
					PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), Local_14.f_226, "SPECIAL_PED_LIGHTWEIGHT_1_1", 0f, 0f, 0f, 0, "MayorBubble");
					uVar9 = func_72(&Local_14, &iVar10);
					func_73(&(Local_14.f_226), &(Local_14.f_255), 161068336, 20f, -1082130432);
					func_75(Local_14.f_303[0 /*17*/], "INTERACT_GREET", func_74(), -163964935, 0, 0, 0, 1, 0);
					func_75(Local_14.f_303[1 /*17*/], "INTERACT_INSULT", uVar9, 648122183, 0, 0, 0, 1, iVar10);
					func_76(Local_14.f_303[0 /*17*/], 10);
					func_76(Local_14.f_303[1 /*17*/], 10);
					iVar13 = 0;
					while (iVar13 < Local_14.f_257)
					{
						func_75((Local_14.f_338[iVar13 /*75*/])->f_21[0 /*17*/], "INTERACT_GREET", func_74(), -163964935, 0, 0, 0, 1, 0);
						func_75((Local_14.f_338[iVar13 /*75*/])->f_21[1 /*17*/], "INTERACT_INSULT", uVar9, 648122183, 0, 0, 0, 1, iVar10);
						func_77((Local_14.f_338[iVar13 /*75*/])->f_21[0 /*17*/], 0, 0);
						func_77((Local_14.f_338[iVar13 /*75*/])->f_21[1 /*17*/], 0, 0);
						iVar13++;
					}
					if (!func_34(Local_14.f_253, 16777216))
					{
						Local_14.f_639 = func_78(3, 0, 0);
						func_79(Local_14.f_281[0 /*21*/], 0);
						func_21(&(Local_14.f_253), 16777216);
					}
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_14.f_226, true);
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_14.f_226, false);
					PED::SET_PED_CONFIG_FLAG(Local_14.f_226, 448, true);
					func_46(&(Local_14.f_5), Local_14.f_226, Local_14.f_280, 0);
					func_46(&(Local_14.f_5), Global_35, "ARTHUR", 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_14.f_226, 17, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_14.f_226, 5, false);
					AUDIO::STOP_PED_SPEAKING(Local_14.f_226, true);
					if (func_45())
					{
						func_80(Local_14.f_226, 1689938120);
					}
					ENTITY::_0x203BEFFDBE12E96A(Local_14.f_226, Var0, Var0.f_3, 1, 0, 1);
					PED::_0x7C00CFC48A782DC0(Local_14.f_237, Local_14.f_226, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
					PED::_0x7C00CFC48A782DC0(Local_14.f_234, Local_14.f_226, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
					PED::_0x7C00CFC48A782DC0(Local_14.f_242, Local_14.f_226, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
					func_20(&Local_14, 42);
				}
				break;
			case 16:
				Var0 = { func_66(3) };
				if (func_67(&(Local_14.f_226), 483, Var0, 1, 1320127128) && func_70(&Local_14))
				{
					func_81(&Local_14);
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_14.f_226, "special_ped_group", 0f);
					func_71(Local_14.f_226, 18);
					PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), Local_14.f_226, "SPECIAL_PED_LIGHTWEIGHT_1_1", 0f, 0f, 0f, 0, "MayorBubble");
					uVar9 = func_72(&Local_14, &iVar10);
					func_73(&(Local_14.f_226), &(Local_14.f_255), 161068336, 20f, -1082130432);
					func_75(Local_14.f_303[0 /*17*/], "INTERACT_GREET", func_74(), -163964935, 0, 0, 0, 1, 0);
					func_75(Local_14.f_303[1 /*17*/], "INTERACT_INSULT", uVar9, 648122183, 0, 0, 0, 1, iVar10);
					func_76(Local_14.f_303[0 /*17*/], 10);
					func_76(Local_14.f_303[1 /*17*/], 10);
					iVar14 = 0;
					while (iVar14 < Local_14.f_257)
					{
						func_75((Local_14.f_338[iVar14 /*75*/])->f_21[0 /*17*/], "INTERACT_GREET", func_74(), -163964935, 0, 0, 0, 1, 0);
						func_75((Local_14.f_338[iVar14 /*75*/])->f_21[1 /*17*/], "INTERACT_INSULT", uVar9, 648122183, 0, 0, 0, 1, iVar10);
						func_77((Local_14.f_338[iVar14 /*75*/])->f_21[0 /*17*/], 0, 0);
						func_77((Local_14.f_338[iVar14 /*75*/])->f_21[1 /*17*/], 0, 0);
						iVar14++;
					}
					if (!func_34(Local_14.f_253, 16777216))
					{
						Local_14.f_639 = func_78(3, 0, 0);
						func_79(Local_14.f_281[0 /*21*/], 0);
						func_21(&(Local_14.f_253), 16777216);
					}
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_14.f_226, true);
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_14.f_226, false);
					PED::SET_PED_CONFIG_FLAG(Local_14.f_226, 448, true);
					PED::SET_PED_CONFIG_FLAG(Local_14.f_226, 153, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_14.f_226, 17, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_14.f_226, 5, false);
					func_46(&(Local_14.f_5), Local_14.f_226, Local_14.f_280, 0);
					AUDIO::STOP_PED_SPEAKING(Local_14.f_226, true);
					PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, PLAYER::_0x0139637A3BFF8B6D(Local_14.f_226, &uVar8));
					if (func_45())
					{
						func_80(Local_14.f_226, 1689938120);
					}
					ENTITY::_0x203BEFFDBE12E96A(Local_14.f_226, Var0, Var0.f_3, 1, 0, 1);
					PED::_0x7C00CFC48A782DC0(Local_14.f_237, Local_14.f_226, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
					PED::_0x7C00CFC48A782DC0(Local_14.f_234, Local_14.f_226, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
					PED::_0x7C00CFC48A782DC0(Local_14.f_242, Local_14.f_226, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
					func_20(&Local_14, 50);
				}
				break;
			case 6:
				if (func_34(Local_14.f_253, 1))
				{
					func_20(&Local_14, 60);
				}
				else if (func_34(Local_14.f_253, 2) && !func_34(Local_14.f_253, 4))
				{
					func_82(180);
					func_83(&Local_14);
				}
				else if (!func_11(&(Local_14.f_153)))
				{
					func_12(&(Local_14.f_153), 0);
				}
				else if (func_13(&(Local_14.f_153)) > func_84(&Local_14) || !func_34(Local_14.f_253, 524288))
				{
					if (func_62(Global_35, Local_14.f_226, 1, 1) <= 35f)
					{
						if (func_85(&Local_14))
						{
							func_14(&(Local_14.f_153));
							func_21(&(Local_14.f_253), 524288);
						}
					}
				}
				break;
			case 11:
				if (func_34(Local_14.f_253, 1))
				{
					func_20(&Local_14, 63);
				}
				else if (func_34(Local_14.f_253, 2) && !func_34(Local_14.f_253, 4))
				{
					func_82(180);
					func_86(&Local_14);
				}
				else if (!func_11(&(Local_14.f_153)))
				{
					func_12(&(Local_14.f_153), 0);
				}
				else if (func_13(&(Local_14.f_153)) > func_84(&Local_14) || !func_34(Local_14.f_253, 524288))
				{
					if (func_62(Global_35, Local_14.f_226, 1, 1) <= 35f)
					{
						if (func_87(&Local_14))
						{
							func_14(&(Local_14.f_153));
							func_21(&(Local_14.f_253), 524288);
						}
					}
				}
				break;
			case 17:
				if (func_34(Local_14.f_253, 1))
				{
					func_20(&Local_14, 66);
				}
				else if (func_34(Local_14.f_253, 2) && !func_34(Local_14.f_253, 4))
				{
					func_20(&Local_14, 18);
				}
				else if (!func_11(&(Local_14.f_153)))
				{
					func_12(&(Local_14.f_153), 0);
				}
				else if (func_13(&(Local_14.f_153)) > func_84(&Local_14) || !func_34(Local_14.f_253, 524288))
				{
					if (func_62(Global_35, Local_14.f_226, 1, 1) <= 35f)
					{
						if (func_88(&Local_14))
						{
							func_14(&(Local_14.f_153));
							func_21(&(Local_14.f_253), 524288);
						}
					}
				}
				break;
			case 7:
				if (func_34(Local_14.f_253, 1))
				{
					func_20(&Local_14, 60);
				}
				else if (func_34(Local_14.f_253, 4))
				{
					if (func_89(&(Local_14.f_250)))
					{
						if (func_4(&Local_14, &(Local_14.f_250), 0, func_3(), &(Local_14.f_3), &(Local_14.f_4), 0, 1, 1, 0, 0))
						{
							func_20(&Local_14, 32);
						}
					}
				}
				else
				{
					func_82(180);
					func_83(&Local_14);
				}
				break;
			case 12:
				if (func_34(Local_14.f_253, 1))
				{
					func_20(&Local_14, 63);
				}
				else if (func_34(Local_14.f_253, 4))
				{
					if (func_4(&Local_14, &(Local_14.f_250), 1, func_6(), &(Local_14.f_3), &(Local_14.f_4), 0, 1, 1, "s_IG2_PDMOS_Base", "s_IG2_PDMOS_Base_End"))
					{
						func_20(&Local_14, 42);
					}
				}
				else
				{
					func_82(180);
					func_86(&Local_14);
				}
				break;
			case 13:
				PED::SET_PED_RESET_FLAG(Local_14.f_226, 202, true);
				PED::_0x3BBDD6143FF16F98(Local_14.f_226, Local_14.f_231, "p_cs_newspaper_03x_PH_R_HAND", "WORLD_HUMAN_NEWSPAPER_PUTDOWN", 0, 1);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_14.f_250, "internal_loop", true, false);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_14.f_250, "internal_loop_end", true, false);
				func_21(&(Local_14.f_253), 65536);
				if (VOLUME::_0x92A78D0BEDB332A3(Local_14.f_238))
				{
					PATHFIND::_0x5A4E1A41E3A02AD0(Local_14.f_238, 6, 0);
					VOLUME::_0x43F867EF5C463A53(Local_14.f_238);
				}
				if (ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_14.f_250, 0))
				{
					TASK::CLEAR_PED_TASKS(Local_14.f_226, 1, 0);
				}
				else if (func_90(&Local_14, &(Local_14.f_224), 0))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(Local_14.f_226, func_91(0), 1f, 1f, 3f, false, true, 0))
					{
						PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "MayorBubble");
						func_92(&(Local_14.f_135));
						func_20(&Local_14, 57);
					}
				}
				break;
			case 18:
				if (((!ENTITY::IS_ENTITY_DEAD(Local_14.f_226) && ANIMSCENE::_0x25557E324489393C(Local_14.f_252)) && ANIMSCENE::_0x477122B8D05E7968(Local_14.f_252, 1, 0)) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
				{
					if (!func_34(Local_14.f_253, 32768))
					{
						Local_14.f_647 = 1;
						func_93(1, 1, 0);
						func_94(Global_35, Local_14.f_226, &(Local_14.f_160), 0f, 0f, 0f, 0, 0, 1, 1069547520, -1082130432, 1073069561, 1056964608, 1092616192, -1, 1, 0, 0, 0, 1);
						func_95(Local_14.f_226, Global_35, &(Local_14.f_160), 10f, 0, 0, 2f, -1f, 1, 8, 0f, 0f, 2f, 2f, 0.3f, 1.5f, 0, 0.5f, -1, 1, -1082130432, -1082130432, 1);
						func_96(&(Local_14.f_198));
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_252, "CS_NicholasTimmins", Local_14.f_226, 0);
						if (!func_45())
						{
							ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_14.f_252, "b_PlayerArthur", true, false);
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_252, "ARTHUR", Global_35, 0);
						}
						else
						{
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_14.f_252, "JOHN", Global_35, 0);
						}
						ANIMSCENE::RESET_ANIM_SCENE(Local_14.f_250, 0);
						ANIMSCENE::START_ANIM_SCENE(Local_14.f_252);
						PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "MayorBubble");
						func_21(&(Local_14.f_253), 65536);
						func_21(&(Local_14.f_253), 32768);
						func_21(&(Local_14.f_253), 262144);
					}
					if (VOLUME::_0x92A78D0BEDB332A3(Local_14.f_242))
					{
						VOLUME::_0x43F867EF5C463A53(Local_14.f_242);
					}
					func_97(&(Local_14.f_198), Local_14.f_226);
					func_98(Local_14.f_226, Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
					if (ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_14.f_252, 0))
					{
						func_44(&(Local_14.f_253), 32768);
						func_82(180);
						func_20(&Local_14, 58);
					}
				}
				else if ((!ENTITY::IS_ENTITY_DEAD(Local_14.f_226) && !ANIMSCENE::_0x477122B8D05E7968(Local_14.f_252, 1, 0)) && !ANIMSCENE::_0x59606519FF9D3EC2(Local_14.f_252, 1))
				{
					if (!ANIMSCENE::_0x25557E324489393C(Local_14.f_252))
					{
						Local_14.f_252 = ANIMSCENE::_CREATE_ANIM_SCENE(func_99(), 0, 0, false, true);
					}
					if (ANIMSCENE::_0x25557E324489393C(Local_14.f_252))
					{
						ANIMSCENE::LOAD_ANIM_SCENE(Local_14.f_252);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_226))
				{
					if (func_9(Local_14.f_226, 0))
					{
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_14.f_226, 1.5f);
					}
				}
				break;
			case 19:
				if (func_4(&Local_14, &(Local_14.f_250), 0, func_100(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, 0, 0))
				{
					func_20(&Local_14, 32);
				}
				break;
			case 33:
				break;
			case 34:
				break;
			case 22:
				if (func_4(&Local_14, &(Local_14.f_250), 0, func_101(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, 0, 0))
				{
					PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, PLAYER::_0x0139637A3BFF8B6D(Local_14.f_226, &uVar8));
					Local_14.f_256++;
					func_20(&Local_14, 32);
				}
				break;
			case 23:
				if (func_4(&Local_14, &(Local_14.f_250), 0, func_102(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, 0, 0))
				{
					PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, PLAYER::_0x0139637A3BFF8B6D(Local_14.f_226, &uVar8));
					Local_14.f_256++;
					func_20(&Local_14, 32);
				}
				break;
			case 24:
				if (func_4(&Local_14, &(Local_14.f_250), 0, func_103(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, 0, 0))
				{
					Local_14.f_256++;
					func_20(&Local_14, 32);
				}
				break;
			case 25:
				if (func_4(&Local_14, &(Local_14.f_250), 0, func_104(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, 0, 0))
				{
					Local_14.f_256 = (1 + Local_14.f_256);
					func_20(&Local_14, 32);
				}
				break;
			case 26:
				if (func_4(&Local_14, &(Local_14.f_250), 0, func_105(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, 0, 0))
				{
					Local_14.f_256++;
					func_20(&Local_14, 32);
				}
				break;
			case 27:
				if (func_4(&Local_14, &(Local_14.f_250), 0, func_106(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, 0, 0))
				{
					Local_14.f_256++;
					func_20(&Local_14, 32);
				}
				break;
			case 28:
				if (func_4(&Local_14, &(Local_14.f_250), 0, func_107(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, 0, 0))
				{
					Local_14.f_256++;
					func_20(&Local_14, 32);
				}
				break;
			case 29:
				if (func_4(&Local_14, &(Local_14.f_250), 0, func_108(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, 0, 0))
				{
					Local_14.f_256 = (1 + Local_14.f_256);
					func_20(&Local_14, 32);
				}
				break;
			case 30:
				if (func_4(&Local_14, &(Local_14.f_250), 0, func_109(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, 0, 0))
				{
					Local_14.f_256++;
					func_20(&Local_14, 32);
				}
				break;
			case 31:
				if (func_4(&Local_14, &(Local_14.f_250), 0, func_110(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, 0, 0))
				{
					Local_14.f_256++;
					func_20(&Local_14, 32);
				}
				break;
			case 32:
				if (func_34(Local_14.f_253, 2) && !func_34(Local_14.f_253, 4))
				{
					if (func_4(&Local_14, &(Local_14.f_251), 3, func_111(), &(Local_14.f_3), &(Local_14.f_4), 0, 1, 0, 0, 0))
					{
						func_20(&Local_14, 7);
					}
				}
				else if (func_4(&Local_14, &(Local_14.f_250), 0, func_3(), &(Local_14.f_3), &(Local_14.f_4), 0, 1, 1, 0, 0))
				{
					func_20(&Local_14, 6);
				}
				break;
			case 20:
				PED::SET_PED_RESET_FLAG(Local_14.f_226, 202, true);
				PED::_0x3BBDD6143FF16F98(Local_14.f_226, Local_14.f_229, "p_cigar01x_PH_R_HAND", "WORLD_HUMAN_SMOKE_CIGAR", 0, 1);
				if (!ANIMSCENE::_0xD8254CB2C586412B(Local_14.f_250, 0))
				{
					func_4(&Local_14, &(Local_14.f_250), 0, func_112(), &(Local_14.f_3), &(Local_14.f_4), 1, 1, 0, 0, 0);
				}
				if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_14.f_250, "CS_NicholasTimmins"))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_14.f_250, "CS_NicholasTimmins", Local_14.f_226);
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_14.f_250, "p_cigar02x", Local_14.f_229);
					if (func_34(Local_14.f_253, 134217728))
					{
						func_90(&Local_14, &(Local_14.f_225), -1);
					}
					else
					{
						func_113(&Local_14, 1);
					}
					func_20(&Local_14, 59);
				}
				break;
			case 21:
				if (!ANIMSCENE::_0xD8254CB2C586412B(Local_14.f_250, 0))
				{
					func_4(&Local_14, &(Local_14.f_250), 0, func_114(), &(Local_14.f_3), &(Local_14.f_4), 1, 1, 0, 0, 0);
				}
				else if (!ENTITY::IS_ENTITY_DEAD(Local_14.f_226))
				{
				}
				break;
			case 35:
				if (func_4(&Local_14, &(Local_14.f_250), 1, func_115(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, "s_IG2_PDMOS_Base", "s_IG2_PDMOS_Base_End"))
				{
					PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, PLAYER::_0x0139637A3BFF8B6D(Local_14.f_226, &uVar8));
					Local_14.f_256 = (1 + Local_14.f_256);
					func_20(&Local_14, 42);
				}
				break;
			case 36:
				if (func_4(&Local_14, &(Local_14.f_250), 1, func_116(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, "s_IG2_PDMOS_Base", "s_IG2_PDMOS_Base_End"))
				{
					Local_14.f_256 = (1 + Local_14.f_256);
					func_20(&Local_14, 42);
				}
				break;
			case 37:
				if (func_4(&Local_14, &(Local_14.f_250), 1, func_117(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, "s_IG2_PDMOS_Base", "s_IG2_PDMOS_Base_End"))
				{
					Local_14.f_256 = (1 + Local_14.f_256);
					func_20(&Local_14, 42);
				}
				break;
			case 38:
				if (func_4(&Local_14, &(Local_14.f_250), 1, func_118(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, "s_IG2_PDMOS_Base", "s_IG2_PDMOS_Base_End"))
				{
					Local_14.f_256 = (1 + Local_14.f_256);
					func_20(&Local_14, 42);
				}
				break;
			case 39:
				if (func_4(&Local_14, &(Local_14.f_250), 1, func_119(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, "s_IG2_PDMOS_Base", "s_IG2_PDMOS_Base_End"))
				{
					Local_14.f_256++;
					func_20(&Local_14, 42);
				}
				break;
			case 40:
				if (func_4(&Local_14, &(Local_14.f_250), 1, func_120(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, "s_IG3_PDMOS_Base", "s_IG3_PDMOS_Base_End"))
				{
					Local_14.f_256 = (1 + Local_14.f_256);
					func_20(&Local_14, 42);
				}
				break;
			case 41:
				if (func_4(&Local_14, &(Local_14.f_250), 1, func_121(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, "s_IG3_PDMOS_Base", "s_IG3_PDMOS_Base_End"))
				{
					Local_14.f_256++;
					func_20(&Local_14, 42);
				}
				break;
			case 42:
				if (func_34(Local_14.f_253, 2) && !func_34(Local_14.f_253, 4))
				{
					if (func_4(&Local_14, &(Local_14.f_251), 4, func_122(), &(Local_14.f_3), &(Local_14.f_4), 0, 1, 0, 0, 0))
					{
						func_20(&Local_14, 12);
					}
				}
				else if (func_4(&Local_14, &(Local_14.f_250), 1, func_6(), &(Local_14.f_3), &(Local_14.f_4), 0, 1, 1, "s_IG2_PDMOS_Base", "s_IG2_PDMOS_Base_End"))
				{
					func_20(&Local_14, 11);
				}
				break;
			case 43:
				if (func_4(&Local_14, &(Local_14.f_250), 2, func_123(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, "s_BASE", "s_base_end"))
				{
					PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, PLAYER::_0x0139637A3BFF8B6D(Local_14.f_226, &uVar8));
					Local_14.f_256++;
					func_20(&Local_14, 50);
				}
				break;
			case 44:
				if (func_4(&Local_14, &(Local_14.f_250), 2, func_124(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, "s_BASE", "s_base_end"))
				{
					Local_14.f_256++;
					func_20(&Local_14, 50);
				}
				break;
			case 45:
				if (func_4(&Local_14, &(Local_14.f_250), 2, func_125(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, "s_BASE", "s_base_end"))
				{
					Local_14.f_256++;
					func_20(&Local_14, 50);
				}
				break;
			case 46:
				if (func_4(&Local_14, &(Local_14.f_250), 2, func_126(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, "s_BASE", "s_base_end"))
				{
					Local_14.f_256 = (1 + Local_14.f_256);
					func_20(&Local_14, 50);
				}
				break;
			case 47:
				if (func_4(&Local_14, &(Local_14.f_250), 2, func_127(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, "s_BASE", "s_base_end"))
				{
					Local_14.f_256 = (1 + Local_14.f_256);
					func_20(&Local_14, 50);
				}
				break;
			case 48:
				if (func_4(&Local_14, &(Local_14.f_250), 2, func_128(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, "s_BASE", "s_base_end"))
				{
					Local_14.f_256++;
					func_20(&Local_14, 50);
				}
				break;
			case 49:
				if (func_4(&Local_14, &(Local_14.f_250), 2, func_129(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 1, "s_IG5_Base", "s_IG5_Base_End"))
				{
					Local_14.f_256 = (1 + Local_14.f_256);
					func_20(&Local_14, 50);
				}
				break;
			case 50:
				if (func_34(Local_14.f_253, 2) && !func_34(Local_14.f_253, 4))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_14.f_226))
					{
						func_20(&Local_14, 18);
					}
				}
				else if (func_4(&Local_14, &(Local_14.f_250), 2, func_5(), &(Local_14.f_3), &(Local_14.f_4), 0, 1, 1, "s_BASE", "s_base_end"))
				{
					func_20(&Local_14, 17);
				}
				break;
			case 51:
				func_130(&(Local_14.f_239), &(Local_14.f_649), &(Local_14.f_650));
				func_131(1);
				if (func_132(Local_14.f_226, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_14.f_226, 0.25f, 2f, 0f), 1036831949, 20000) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
				{
					if (func_4(&Local_14, &(Local_14.f_251), 3, func_133(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 0, 0, 0))
					{
						PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "MayorBubble");
						if (!func_34(Local_14.f_253, 4))
						{
							func_21(&(Local_14.f_253), 4);
						}
						func_134(Local_14.f_303[0 /*17*/], 0);
						func_134(Local_14.f_303[1 /*17*/], 0);
						func_77(Local_14.f_303[0 /*17*/], 0, 0);
						func_77(Local_14.f_303[1 /*17*/], 0, 0);
						Local_14.f_639 = func_78(3, 0, 0);
						func_79(Local_14.f_281[0 /*21*/], 0);
						func_131(0);
						func_20(&Local_14, 53);
					}
				}
				break;
			case 52:
				func_130(&(Local_14.f_239), &(Local_14.f_649), &(Local_14.f_650));
				func_131(1);
				if (func_132(Local_14.f_226, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_14.f_226, 0.25f, 2f, 0f), 1036831949, 20000) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
				{
					if (func_4(&Local_14, &(Local_14.f_251), 3, func_135(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 0, 0, 0))
					{
						PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "MayorBubble");
						if (!func_34(Local_14.f_253, 4))
						{
							func_21(&(Local_14.f_253), 4);
						}
						func_134(Local_14.f_303[0 /*17*/], 0);
						func_134(Local_14.f_303[1 /*17*/], 0);
						func_77(Local_14.f_303[0 /*17*/], 0, 0);
						func_77(Local_14.f_303[1 /*17*/], 0, 0);
						Local_14.f_639 = func_78(3, 0, 0);
						func_79(Local_14.f_281[0 /*21*/], 0);
						func_131(0);
						func_20(&Local_14, 53);
					}
				}
				break;
			case 53:
				if (func_136(Local_14.f_303[0 /*17*/], 0))
				{
					func_134(Local_14.f_303[0 /*17*/], 0);
					func_134(Local_14.f_303[1 /*17*/], 0);
					func_77(Local_14.f_303[0 /*17*/], 1, 0);
					func_77(Local_14.f_303[1 /*17*/], 1, 0);
				}
				if (func_34(Local_14.f_253, 4))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_14.f_251, "p_chaireagle01x", Local_14.f_228);
					if (func_4(&Local_14, &(Local_14.f_250), 0, func_3(), &(Local_14.f_3), &(Local_14.f_4), 0, 1, 0, 0, 0))
					{
						func_20(&Local_14, 6);
					}
				}
				else if (func_4(&Local_14, &(Local_14.f_251), 3, func_111(), &(Local_14.f_3), &(Local_14.f_4), 0, 1, 0, 0, 0))
				{
					func_20(&Local_14, 7);
				}
				break;
			case 54:
				PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "MayorBubble");
				if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
				{
					if (func_4(&Local_14, &(Local_14.f_251), 4, func_137(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 0, 0, 0))
					{
						if (!func_34(Local_14.f_253, 4))
						{
							func_21(&(Local_14.f_253), 4);
						}
						func_20(&Local_14, 56);
					}
				}
				break;
			case 55:
				PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "MayorBubble");
				if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
				{
					if (func_4(&Local_14, &(Local_14.f_251), 4, func_138(), &(Local_14.f_3), &(Local_14.f_4), 1, 0, 0, 0, 0))
					{
						if (!func_34(Local_14.f_253, 4))
						{
							func_21(&(Local_14.f_253), 4);
						}
						func_20(&Local_14, 56);
					}
				}
				break;
			case 56:
				if (func_34(Local_14.f_253, 4))
				{
					if (func_4(&Local_14, &(Local_14.f_250), 1, func_6(), &(Local_14.f_3), &(Local_14.f_4), 0, 1, 0, "s_IG2_PDMOS_Base", "s_IG2_PDMOS_Base_End"))
					{
						func_20(&Local_14, 11);
					}
				}
				else if (func_4(&Local_14, &(Local_14.f_251), 4, func_122(), &(Local_14.f_3), &(Local_14.f_4), 0, 1, 0, 0, 0))
				{
					func_20(&Local_14, 12);
				}
				break;
			case 57:
				if (!PED::_0x9C54041BB66BCF9E(Local_14.f_226, Local_14.f_224))
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(Local_14.f_226, func_91(3), 1f, 1f, 3f, false, true, 0))
					{
						if (!func_139(Local_14.f_226, 713668775))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_14.f_226, func_91(3), 1f, -1, 0.25f, false, 40000f);
						}
					}
					else if (func_140(&(Local_14.f_135)) > 3f)
					{
						if (func_90(&Local_14, &(Local_14.f_225), -1))
						{
							func_44(&(Local_14.f_253), 1024);
							func_20(&Local_14, 62);
						}
					}
				}
				break;
			case 58:
				if (func_62(Local_14.f_226, Global_35, 1, 1) > 10f)
				{
					if (!ANIMSCENE::_0x34A0671BE613D3D0(Local_14.f_252) && !ANIMSCENE::_0xD70C7A30412F8FA0(Local_14.f_252))
					{
						ANIMSCENE::ABORT_ANIM_SCENE(Local_14.f_252, false);
					}
				}
				if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_14.f_252, 0) || ANIMSCENE::_0xD8254CB2C586412B(Local_14.f_252, 0))
				{
					ANIMSCENE::RESET_ANIM_SCENE(Local_14.f_252, 0);
					if (!func_34(Local_14.f_253, 4))
					{
						func_21(&(Local_14.f_253), 4);
					}
					if (func_34(Local_14.f_253, 262144))
					{
						func_141(Global_35);
						func_142(Local_14.f_226, 1);
						func_143(Global_35, 1);
						func_44(&(Local_14.f_253), 262144);
					}
					PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, PLAYER::_0x0139637A3BFF8B6D(Local_14.f_226, &uVar8));
					if (func_113(&Local_14, 2))
					{
						func_44(&(Local_14.f_253), 1024);
						func_20(&Local_14, 65);
					}
				}
				else
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_226))
					{
						if (func_9(Local_14.f_226, 0))
						{
							PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_14.f_226, 1.5f);
						}
					}
					func_98(Local_14.f_226, Global_35, 1, 1, 1, 1, 1, 1, 0, 1, 1);
				}
				break;
			case 63:
				Local_14.f_643 = 0;
				PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "MayorBubble");
				if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_231))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(Local_14.f_231))
					{
						func_144(Local_14.f_231, 1, 1);
						PHYSICS::ACTIVATE_PHYSICS(Local_14.f_231);
					}
				}
				if (!func_34(Local_14.f_254, 128))
				{
					if (func_145(Local_14.f_226, "PANIC_HELP", -1021994891, 0, Local_14.f_280, 0))
					{
						func_21(&(Local_14.f_254), 128);
					}
				}
				if (VOLUME::_0x92A78D0BEDB332A3(Local_14.f_238))
				{
					PATHFIND::_0x5A4E1A41E3A02AD0(Local_14.f_238, 6, 0);
					VOLUME::_0x43F867EF5C463A53(Local_14.f_238);
				}
				if (!PED::IS_PED_FLEEING(Local_14.f_226))
				{
					func_146(Local_14.f_226, 1, 1);
					func_147(Local_14.f_226);
					TASK::_TASK_SMART_FLEE_STYLE_PED(Local_14.f_226, Global_35, 3, 256, -1082130432, -1, 0);
					PED::SET_PED_CONFIG_FLAG(Local_14.f_226, 153, false);
					func_148(Local_14.f_242);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_14.f_226, false);
					AUDIO::STOP_PED_SPEAKING(Local_14.f_226, false);
					PED::SET_PED_KEEP_TASK(Local_14.f_226, true);
				}
				break;
			case 62:
				break;
			case 64:
				break;
			case 60:
				Local_14.f_643 = 0;
				PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "MayorBubble");
				PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "MayorConvo");
				if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_229))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(Local_14.f_229))
					{
						func_144(Local_14.f_229, 1, 1);
						PHYSICS::ACTIVATE_PHYSICS(Local_14.f_229);
					}
				}
				if (!func_34(Local_14.f_254, 128))
				{
					if (func_145(Local_14.f_226, "PANIC_HELP", -1021994891, 0, Local_14.f_280, 0))
					{
						func_21(&(Local_14.f_254), 128);
					}
				}
				if (func_34(Local_14.f_253, 4194304))
				{
					if ((ANIMSCENE::_0x25557E324489393C(Local_14.f_250) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Local_14.f_226, -1)) && (ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_14.f_250, 0) || (ANIMSCENE::_0x25557E324489393C(Local_14.f_251) && ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_14.f_251, 0))))
					{
						func_4(&Local_14, &(Local_14.f_250), 0, func_114(), &(Local_14.f_3), &(Local_14.f_4), 0, 0, 0, 0, 0);
						if ((ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_14.f_250, 0) && ANIMSCENE::_0x25557E324489393C(Local_14.f_251)) && ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_14.f_251, 0))
						{
							ANIMSCENE::RESET_ANIM_SCENE(Local_14.f_251, 0);
						}
					}
					else if (ANIMSCENE::_0xD8254CB2C586412B(Local_14.f_250, 0) || !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Local_14.f_226, -1))
					{
						func_149(&Local_14);
						func_44(&(Local_14.f_253), 4194304);
					}
				}
				else if (!PED::IS_PED_FLEEING(Local_14.f_226))
				{
					func_146(Local_14.f_226, 1, 1);
					func_147(Local_14.f_226);
					TASK::_TASK_SMART_FLEE_STYLE_PED(Local_14.f_226, Global_35, 3, 256, -1082130432, -1, 0);
					PED::SET_PED_CONFIG_FLAG(Local_14.f_226, 153, false);
					func_148(Local_14.f_242);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_14.f_226, false);
					AUDIO::STOP_PED_SPEAKING(Local_14.f_226, false);
					PED::SET_PED_KEEP_TASK(Local_14.f_226, true);
				}
				break;
			case 2:
				break;
			case 59:
				PED::SET_PED_RESET_FLAG(Local_14.f_226, 202, true);
				if (func_34(Local_14.f_253, 134217728))
				{
					func_90(&Local_14, &(Local_14.f_225), -1);
				}
				else
				{
					func_113(&Local_14, 1);
				}
				if (!func_34(Local_14.f_253, 65536))
				{
					if (func_62(Local_14.f_226, &(Local_14.f_214[0]), 1, 1) > 4f)
					{
						func_21(&(Local_14.f_253), 65536);
					}
				}
				break;
			case 61:
				break;
			case 66:
				Local_14.f_643 = 0;
				PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "MayorBubble");
				if (!func_34(Local_14.f_254, 128))
				{
					if (func_145(Local_14.f_226, "PANIC_HELP", -1021994891, 0, Local_14.f_280, 0))
					{
						func_21(&(Local_14.f_254), 128);
					}
				}
				if (!PED::IS_PED_FLEEING(Local_14.f_226))
				{
					func_146(Local_14.f_226, 1, 1);
					func_147(Local_14.f_226);
					TASK::_TASK_SMART_FLEE_STYLE_PED(Local_14.f_226, Global_35, 3, 256, -1082130432, -1, 0);
					PED::SET_PED_CONFIG_FLAG(Local_14.f_226, 153, false);
					func_148(Local_14.f_242);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_14.f_226, false);
					AUDIO::STOP_PED_SPEAKING(Local_14.f_226, false);
					PED::SET_PED_KEEP_TASK(Local_14.f_226, true);
				}
				break;
			case 65:
				break;
			case 67:
				break;
			default:
				break;
		}
		if (func_41(Local_14.f_159))
		{
			switch (Local_14)
			{
				case 62:
					if (!PED::_0x5102307CE88798EB(Local_14.f_226))
					{
						PED::REQUEST_PED_VISIBILITY_TRACKING(Local_14.f_226);
					}
					if (func_62(Global_35, Local_14.f_226, 1, 1) > 50f && !PED::IS_TRACKED_PED_VISIBLE(Local_14.f_226))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_226))
						{
							AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_14.f_226, 0f);
							PED::DELETE_PED(&(Local_14.f_226));
						}
						func_1(&Local_14);
					}
					break;
				case 59:
				case 65:
					if (!PED::_0x5102307CE88798EB(Local_14.f_226))
					{
						PED::REQUEST_PED_VISIBILITY_TRACKING(Local_14.f_226);
					}
					if (func_62(Global_35, Local_14.f_226, 1, 1) > 100f && !PED::IS_TRACKED_PED_VISIBLE(Local_14.f_226))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_226))
						{
							AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_14.f_226, 0f);
							PED::DELETE_PED(&(Local_14.f_226));
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
	int iVar0;

	func_150(&(uParam0->f_259));
	func_151(18);
	if (func_34(uParam0->f_253, 262144))
	{
		func_142(uParam0->f_226, 1);
		func_143(Global_35, 1);
	}
	if (func_41(uParam0->f_159))
	{
		func_152(uParam0->f_159, uParam0->f_254);
		func_153(func_40(18, 0, 9, func_39(18)), uParam0->f_258);
	}
	func_154(&(uParam0->f_226), &(uParam0->f_255), 161068336, 20f, 1);
	AUDIO::STOP_PED_SPEAKING(uParam0->f_226, false);
	PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), 0);
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_226))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_226, false);
		func_146(uParam0->f_226, 1, 1);
		func_147(uParam0->f_226);
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(uParam0->f_226, 0f);
		PED::_0x39A2FC5AF55A52B1(uParam0->f_226, -1);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_226));
	}
	if (func_155(483, 0))
	{
		func_156(483, 0, 1, 0, 0);
	}
	if (func_34(uParam0->f_253, 268435456))
	{
		iVar0 = func_60(884);
		if (_NAMESPACE48::_0x800DF3FC913355F3(iVar0))
		{
			_NAMESPACE48::_0x4F81EAD1DE8FA19B(iVar0);
		}
	}
	func_157(&(uParam0->f_646));
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_229))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(uParam0->f_229))
		{
			func_144(uParam0->f_229, 1, 1);
			PHYSICS::ACTIVATE_PHYSICS(uParam0->f_229);
		}
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_229));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_230))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(uParam0->f_230))
		{
			func_144(uParam0->f_230, 1, 1);
			PHYSICS::ACTIVATE_PHYSICS(uParam0->f_230);
		}
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_230));
	}
	ENTITY::REMOVE_MODEL_HIDE(-1817.047f, -371.4747f, 163.116f, 1f, joaat("p_cs_newspaper_03x"), 0);
	if (TASK::_0x841475AC96E794D1(uParam0->f_224))
	{
		TASK::_0x81948DFE4F5A0283(uParam0->f_224);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_231))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(uParam0->f_231))
		{
			func_144(uParam0->f_231, 1, 1);
			PHYSICS::ACTIVATE_PHYSICS(uParam0->f_231);
		}
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_231));
	}
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_237))
	{
		VOLUME::_0x43F867EF5C463A53(uParam0->f_237);
	}
	if (PED::_0x91A5F9CBEBB9D936(uParam0->f_645))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_645, false);
	}
	func_158(uParam0);
	if (VOLUME::_0x92A78D0BEDB332A3(((*(*Global_1396257)[18 /*638*/])[0 /*48*/])->f_47))
	{
		VOLUME::_0x43F867EF5C463A53(((*(*Global_1396257)[18 /*638*/])[0 /*48*/])->f_47);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(((*(*Global_1396257)[18 /*638*/])[1 /*48*/])->f_47))
	{
		VOLUME::_0x43F867EF5C463A53(((*(*Global_1396257)[18 /*638*/])[1 /*48*/])->f_47);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(((*(*Global_1396257)[18 /*638*/])[2 /*48*/])->f_47))
	{
		VOLUME::_0x43F867EF5C463A53(((*(*Global_1396257)[18 /*638*/])[2 /*48*/])->f_47);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(((*(*Global_1396257)[18 /*638*/])[3 /*48*/])->f_47))
	{
		VOLUME::_0x43F867EF5C463A53(((*(*Global_1396257)[18 /*638*/])[3 /*48*/])->f_47);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(((*(*Global_1396257)[18 /*638*/])[4 /*48*/])->f_47))
	{
		VOLUME::_0x43F867EF5C463A53(((*(*Global_1396257)[18 /*638*/])[4 /*48*/])->f_47);
	}
	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_649))
	{
		ITEMSET::DESTROY_ITEMSET(uParam0->f_649);
	}
	func_131(0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_2(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		if (func_159())
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
		if (func_160(0) == 7 || func_161())
		{
			return 1;
		}
	}
	if (func_162(&(((*Global_1396257)[iParam0 /*638*/])->f_626), 1024))
	{
		return 1;
	}
	return 0;
}

char* func_3()
{
	return "pbl_Base_Reset";
}

int func_4(int iParam0, var uParam1, int iParam2, char* sParam3, var uParam4, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, char* sParam10)
{
	if (!func_163(uParam1, iParam2, uParam5))
	{
		return 0;
	}
	if (!func_164(uParam1, uParam4, iParam2, iParam0))
	{
		return 0;
	}
	if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(*uParam1, 0) && !bParam8)
	{
		ANIMSCENE::START_ANIM_SCENE(*uParam1);
	}
	if (bParam8 && !ANIMSCENE::_0xCBFC7725DE6CE2E0(*uParam1, 0))
	{
		if ((!ANIMSCENE::_0x23E33CB9F4A3F547(*uParam1, sParam3) && !ANIMSCENE::_0x0DF57F86FE71DBE5(*uParam1, sParam3)) && !ANIMSCENE::_0x1F0E401031E20146(*uParam1, sParam3))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(*uParam1, sParam3);
		}
		if (ANIMSCENE::_0x23E33CB9F4A3F547(*uParam1, sParam3))
		{
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*uParam1, sParam3, true);
			ANIMSCENE::START_ANIM_SCENE(*uParam1);
		}
	}
	if (ANIMSCENE::_0xCBFC7725DE6CE2E0(*uParam1, 0))
	{
		if ((!ANIMSCENE::_0x23E33CB9F4A3F547(*uParam1, sParam3) && !ANIMSCENE::_0x0DF57F86FE71DBE5(*uParam1, sParam3)) && !ANIMSCENE::_0x1F0E401031E20146(*uParam1, sParam3))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(*uParam1, sParam3);
		}
		if (!ANIMSCENE::_0x1F0E401031E20146(*uParam1, sParam3) && ANIMSCENE::_0x23E33CB9F4A3F547(*uParam1, sParam3))
		{
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*uParam1, sParam3, true);
			BUILTIN::WAIT(0);
			return 0;
		}
		else if (ANIMSCENE::_0x1F0E401031E20146(*uParam1, sParam3))
		{
			if (iParam0->f_244 != -1)
			{
				if (iParam0->f_244 == *uParam1)
				{
					ANIMSCENE::_0xAE6ADA8FE7E84ACC(iParam0->f_244, iParam0->f_243);
				}
				else if (ANIMSCENE::_0x25557E324489393C(iParam0->f_244) && ANIMSCENE::_0x477122B8D05E7968(iParam0->f_244, 1, 0))
				{
					ANIMSCENE::RESET_ANIM_SCENE(iParam0->f_244, func_165(iParam0->f_245));
				}
			}
			if (ANIMSCENE::_0x8D81E7824B7753F7(*uParam1, "s_Base_End", 1))
			{
				iParam0->f_244 = *uParam1;
				iParam0->f_243 = sParam3;
				iParam0->f_245 = iParam2;
				return 1;
			}
			else if (ANIMSCENE::_0x8D81E7824B7753F7(*uParam1, "s_base_end", 1))
			{
				iParam0->f_244 = *uParam1;
				iParam0->f_243 = sParam3;
				iParam0->f_245 = iParam2;
				return 1;
			}
			else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10) && ANIMSCENE::_0x8D81E7824B7753F7(*uParam1, sParam10, 1))
			{
				iParam0->f_244 = *uParam1;
				iParam0->f_243 = sParam3;
				iParam0->f_245 = iParam2;
				return 1;
			}
			else if (ANIMSCENE::_0xD8254CB2C586412B(*uParam1, 0))
			{
				iParam0->f_244 = *uParam1;
				iParam0->f_243 = sParam3;
				iParam0->f_245 = iParam2;
				return 1;
			}
			else if ((iParam0->f_641 && func_34(iParam0->f_253, 16384)) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0->f_226))
			{
				iParam0->f_641 = 0;
				iParam0->f_244 = *uParam1;
				iParam0->f_243 = sParam3;
				iParam0->f_245 = iParam2;
				return 1;
			}
		}
	}
	return 0;
}

char* func_5()
{
	return "pbl_base_reset";
}

char* func_6()
{
	return "pbl_IG2_base_reset";
}

int func_7(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, float fParam5, float fParam6, bool bParam7)
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
			(Global_40.f_11623[iParam0 /*8*/])->f_2 = func_166();
			*uParam4 = 1;
			return 1;
		}
	}
	if (fParam5 == 0f)
	{
		if (!func_167(Global_35, *uParam2, fParam6, 1))
		{
			return 0;
		}
	}
	else if (fParam5 > fParam6)
	{
		return 0;
	}
	if (!func_11(uParam3))
	{
		func_168(uParam3, 0f);
	}
	else if (func_13(uParam3) >= 2f)
	{
		if (!func_169((Global_40.f_11623[iParam0 /*8*/])->f_2))
		{
			func_170(iParam0);
			*uParam4 = 1;
			func_14(uParam3);
			return 1;
		}
		else
		{
			func_170(iParam0);
			*uParam4 = 1;
			func_14(uParam3);
			return 1;
		}
	}
	return 0;
}

void func_8(int iParam0, int iParam1)
{
	if (func_171(iParam0))
	{
		if (func_172(Global_35, iParam1, 0, 1))
		{
			LAW::_0x785177E4D57D7389(PLAYER::PLAYER_ID(), 1714017012, 0, 0, -1);
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
	if (func_34(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_34(iVar0, 2))
	{
		if (PED::_0x3AA24CCC0D451379(iParam0))
		{
			return 0;
		}
	}
	if (func_34(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_34(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_34(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_34(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return 0;
		}
	}
	if (func_34(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_34(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_10()
{
	return Global_1894899->f_2;
}

bool func_11(var uParam0)
{
	return func_173(*uParam0, 1);
}

void func_12(var uParam0, int iParam1)
{
	if (iParam1 || !func_11(uParam0))
	{
		func_92(uParam0);
	}
}

float func_13(var uParam0)
{
	if (!func_11(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_174(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_175() - uParam0->f_1);
}

void func_14(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_15(int iParam0)
{
	return &(Global_40.f_11623[iParam0 /*8*/]);
}

int func_16(int iParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	if ((MISC::GET_FRAME_COUNT() % 10) == 0)
	{
		if (uParam2->f_1)
		{
			if (((func_160(0) == 1 || func_160(0) == 2) || func_160(0) == 8) || func_176(&Global_1935630, 2048))
			{
				func_21(uParam2, 2);
			}
		}
		if (uParam2->f_2)
		{
			if (func_160(0) == 11)
			{
				func_21(uParam2, 4);
			}
		}
		if (uParam2->f_4)
		{
			if (func_160(0) == 6)
			{
				func_21(uParam2, 8);
			}
		}
		if (uParam2->f_5)
		{
			if (Global_1394141->f_1328)
			{
				func_21(uParam2, 16);
			}
		}
	}
	if ((MISC::GET_FRAME_COUNT() % 30) == 0)
	{
		if (uParam2->f_6)
		{
			if (!(func_177(((*(*Global_1396257)[iParam0 /*638*/])[iParam1 /*48*/])->f_19) == 0 && func_177(((*(*Global_1396257)[iParam0 /*638*/])[iParam1 /*48*/])->f_20) == 23))
			{
				iVar0 = func_166();
				iVar1 = ((*(*Global_1396257)[iParam0 /*638*/])[iParam1 /*48*/])->f_19;
				iVar2 = ((*(*Global_1396257)[iParam0 /*638*/])[iParam1 /*48*/])->f_20;
				if (func_177(iVar2) > func_177(iVar1))
				{
					if (func_177(iVar0) > func_177(iVar2) + 1 || func_177(iVar0) < func_177(iVar1))
					{
						func_21(uParam2, 32);
					}
				}
				else if (func_177(iVar0) > func_177(iVar2) + 1 && func_177(iVar0) < func_177(iVar1))
				{
					func_21(uParam2, 32);
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
					if (((func_178(&(((*(*Global_1396257)[iParam0 /*638*/])[iParam1 /*48*/])->f_5[0])) || func_178(&(((*(*Global_1396257)[iParam0 /*638*/])[iParam1 /*48*/])->f_5[1]))) || func_179(&(((*(*Global_1396257)[iParam0 /*638*/])[iParam1 /*48*/])->f_5[0]))) || func_179(&(((*(*Global_1396257)[iParam0 /*638*/])[iParam1 /*48*/])->f_5[1])))
					{
						bVar3 = true;
					}
				}
				if (!bVar3)
				{
					if (!func_180(((*(*Global_1396257)[iParam0 /*638*/])[iParam1 /*48*/])->f_40))
					{
						func_21(uParam2, 64);
					}
				}
			}
		}
		if (uParam2->f_8)
		{
			if (MISC::GET_GAME_TIMER() > uParam2->f_17)
			{
				if (func_181(&uParam3, &(uParam2->f_18), uParam2->f_11, uParam2->f_12) || func_182(&uParam3, &(uParam2->f_20), &(uParam2->f_19), uParam2->f_11, uParam2->f_12, 2048))
				{
					if (!func_11(&(uParam2->f_13)))
					{
						func_168(&(uParam2->f_13), 0f);
					}
					else if (func_183(&(uParam2->f_13)) >= uParam2->f_16)
					{
						func_14(&(uParam2->f_13));
						func_21(uParam2, 512);
					}
					uParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
				else
				{
					if (func_11(&(uParam2->f_13)))
					{
						func_14(&(uParam2->f_13));
					}
					uParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
			}
		}
		if (uParam2->f_9)
		{
			if (func_184())
			{
				func_21(uParam2, 1024);
			}
		}
		if (uParam2->f_10)
		{
			if (func_185())
			{
				func_21(uParam2, 2048);
			}
		}
		if (func_176(&Global_1935630, 16384) || Global_1430231->f_4)
		{
			func_21(uParam2, 128);
		}
		if (func_162(&(((*Global_1396257)[iParam0 /*638*/])->f_626), 2048))
		{
			func_21(uParam2, 256);
		}
	}
	if ((((((((((func_34(*uParam2, 2) || func_34(*uParam2, 4)) || func_34(*uParam2, 8)) || func_34(*uParam2, 16)) || func_34(*uParam2, 32)) || func_34(*uParam2, 64)) || func_34(*uParam2, 128)) || func_34(*uParam2, 256)) || func_34(*uParam2, 512)) || func_34(*uParam2, 1024)) || func_34(*uParam2, 2048))
	{
		return 1;
	}
	return 0;
}

int func_17(var uParam0)
{
	if (((((func_34(*uParam0, 2) || func_34(*uParam0, 4)) || func_34(*uParam0, 16)) || func_34(*uParam0, 128)) || func_34(*uParam0, 1024)) || func_34(*uParam0, 2048))
	{
		return 1;
	}
	return 0;
}

int func_18(var uParam0)
{
	if ((((func_34(*uParam0, 32) || func_34(*uParam0, 64)) || func_34(*uParam0, 512)) || func_34(*uParam0, 256)) || func_34(*uParam0, 8))
	{
		return 1;
	}
	return 0;
}

int func_19(var uParam0, int iParam1)
{
	vector3 vVar0;
	int iVar3;

	vVar0 = { func_91(iParam1) };
	iVar3 = func_186(iParam1);
	*uParam0 = TASK::_0xF533D68FF970D190(vVar0, iVar3, 1f, 0, 0);
	if (TASK::_0x841475AC96E794D1(*uParam0))
	{
		return 1;
	}
	return 0;
}

void func_20(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

void func_21(var uParam0, int iParam1)
{
	func_187(uParam0, iParam1);
}

void func_22(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_226))
	{
		if (!func_9(iParam0->f_226, 0))
		{
			if (!func_34(iParam0->f_253, 33554432))
			{
				func_20(iParam0, func_188(iParam0));
				func_21(&(iParam0->f_253), 33554432);
			}
		}
		else if ((*iParam0 > 5 && *iParam0 < func_188(iParam0)) && (func_189(iParam0->f_226, 0, &(iParam0->f_103), &(iParam0->f_131), 0, 0) || func_34(iParam0->f_253, 8388608)))
		{
			func_170(18);
			PED::SET_PED_CONFIG_FLAG(iParam0->f_226, 448, false);
			PED::SET_PED_CONFIG_FLAG(iParam0->f_226, 153, false);
			AUDIO::STOP_PED_SPEAKING(iParam0->f_226, false);
			AUDIO::_0x36559148B78853B3(1, 0, 0);
			func_21(&(iParam0->f_253), 8388608);
			if (iParam0->f_1 == 0)
			{
				func_21(&(iParam0->f_253), 4194304);
				func_20(iParam0, 60);
			}
			else if (iParam0->f_1 == 2)
			{
				func_20(iParam0, 63);
				func_149(iParam0);
			}
			else if (iParam0->f_1 == 3)
			{
				func_20(iParam0, 66);
				func_149(iParam0);
			}
		}
	}
}

void func_23(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iParam0->f_257)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(iParam0->f_214[iVar0])))
		{
			if (!PED::IS_PED_FLEEING(&(iParam0->f_214[iVar0])))
			{
				if (iParam0->f_643)
				{
					PED::SET_PED_RESET_FLAG(&(iParam0->f_214[iVar0]), 49, true);
				}
				if (func_189(&(iParam0->f_214[iVar0]), 0, &(iParam0->f_103), &(iParam0->f_131), 0, 0) || func_34(iParam0->f_253, 8388608))
				{
					if (!func_11(&(iParam0->f_147)) || func_140(&(iParam0->f_147)) > 0.4f)
					{
						if (iParam0->f_1 == 0)
						{
							PED::_0xEEED8FAFEC331A70(&(iParam0->f_214[iVar0]), ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 1);
						}
						else
						{
							PED::_0xF1C03A5352243A30(&(iParam0->f_214[iVar0]));
						}
						func_79(iParam0->f_338[iVar0 /*75*/], 0);
						func_190(iParam0->f_338[iVar0 /*75*/]);
						PED::SET_PED_CONFIG_FLAG(&(iParam0->f_214[iVar0]), 315, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(&(iParam0->f_214[iVar0]), 17, true);
						TASK::_TASK_SMART_FLEE_STYLE_PED(&(iParam0->f_214[iVar0]), Global_35, 3, 1, -1082130432, -1, 0);
						PED::SET_PED_KEEP_TASK(&(iParam0->f_214[iVar0]), true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(iParam0->f_214[iVar0]), false);
						func_92(&(iParam0->f_147));
						func_21(&(iParam0->f_253), 8388608);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_24(int iParam0)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar1 = 0;
	iVar0 = iParam0->f_1;
	switch (iVar0)
	{
		case 0:
			if (((*iParam0 == 6 && func_34(iParam0->f_253, 524288)) || ((*iParam0 != 6 && !AUDIO::_0x54B187F111D9C6F8(iParam0->f_226, 0)) && !ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_226, -1546655685))) && !func_34(iParam0->f_253, 2))
			{
				iVar1 = 1;
			}
			break;
		case 1:
			if (((*iParam0 == 6 && func_34(iParam0->f_253, 524288)) && !func_34(iParam0->f_253, 2)) && !func_191())
			{
				iVar1 = 1;
			}
			break;
		case 2:
			if ((*iParam0 == 11 && func_34(iParam0->f_253, 524288)) && !func_34(iParam0->f_253, 2))
			{
				iVar1 = 1;
			}
			break;
		case 3:
			if ((*iParam0 == 17 && func_34(iParam0->f_253, 524288)) && !func_34(iParam0->f_253, 2))
			{
				iVar1 = 1;
			}
			break;
	}
	sVar2 = 0;
	if ((VOLUME::_0x92A78D0BEDB332A3(iParam0->f_234) && VOLUME::_0x92A78D0BEDB332A3(iParam0->f_233)) && !ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam0->f_234, true, 0))
		{
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam0->f_233, true, 0) && iVar1)
			{
				if (!func_192(iParam0->f_303[0 /*17*/], 1, 0))
				{
					func_77(iParam0->f_303[0 /*17*/], 1, 0);
					func_77(iParam0->f_303[1 /*17*/], 1, 0);
				}
				if (func_34(iParam0->f_253, 16777216))
				{
					iParam0->f_639 = func_78(2, 0, 0);
					func_79(iParam0->f_281[0 /*21*/], 0);
					func_44(&(iParam0->f_253), 16777216);
				}
			}
			else
			{
				if (func_192(iParam0->f_303[0 /*17*/], 1, 0))
				{
					func_77(iParam0->f_303[0 /*17*/], 0, 0);
					func_77(iParam0->f_303[1 /*17*/], 0, 0);
				}
				if (!func_34(iParam0->f_253, 16777216))
				{
					iParam0->f_639 = func_78(3, 0, 0);
					func_79(iParam0->f_281[0 /*21*/], 0);
					func_21(&(iParam0->f_253), 16777216);
				}
			}
		}
		else if (func_192(iParam0->f_303[0 /*17*/], 1, 0))
		{
			func_77(iParam0->f_303[0 /*17*/], 0, 0);
			func_77(iParam0->f_303[1 /*17*/], 0, 0);
			if (!func_34(iParam0->f_253, 16777216))
			{
				iParam0->f_639 = func_78(3, 0, 0);
				func_79(iParam0->f_281[0 /*21*/], 0);
				func_21(&(iParam0->f_253), 16777216);
			}
		}
		iVar3 = -1;
		iVar4 = 0;
		iVar3 = func_193(&(iParam0->f_226), iParam0->f_281[0 /*21*/], 15f, &(iParam0->f_303), &iVar4, 0f, 2, 0, sVar2, iParam0->f_639, 0, 0, 2, 1, -1082130432, 0);
		if (!func_34(iParam0->f_253, 2))
		{
			switch (iVar3)
			{
				case 0:
				case 1:
					if (iVar3 == 1)
					{
						iParam0->f_258++;
					}
					func_77(iParam0->f_303[0 /*17*/], 0, 0);
					func_77(iParam0->f_303[1 /*17*/], 0, 0);
					if (!func_34(iParam0->f_253, 16777216))
					{
						iParam0->f_639 = func_78(3, 0, 0);
						func_79(iParam0->f_281[0 /*21*/], 0);
						func_21(&(iParam0->f_253), 16777216);
					}
					func_194(18, &(iParam0->f_226), &(iParam0->f_253), 2048);
					func_21(&(iParam0->f_253), 2);
					func_196(18, func_195(iParam0));
					iParam0->f_641 = 1;
					if (iVar0 == 0)
					{
						func_134(iParam0->f_303[0 /*17*/], 1);
						func_134(iParam0->f_303[1 /*17*/], 1);
						func_82(180);
						func_83(iParam0);
					}
					break;
			}
		}
		iVar5 = 0;
		while (iVar5 < iParam0->f_257)
		{
			func_197(iParam0->f_214[iVar5], iParam0->f_338[iVar5 /*75*/], 15f, &((iParam0->f_338[iVar5 /*75*/])->f_21), 0f, 2, 0, "", func_78(3, 0, 0), 0, 0, 2, -1082130432);
			iVar5++;
		}
	}
}

void func_25(int iParam0)
{
	int iVar0;
	bool bVar1;

	if ((((func_34(iParam0->f_253, 65536) && !func_34(iParam0->f_253, 131072)) && *iParam0 != 60) && *iParam0 != 63) && *iParam0 != 66)
	{
		bVar1 = true;
		iVar0 = 0;
		while (iVar0 < iParam0->f_257)
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(iParam0->f_214[iVar0])))
			{
				bVar1 = false;
				if (!func_11(&(iParam0->f_144)) || func_140(&(iParam0->f_144)) > 0.4f)
				{
					if (PED::IS_PED_USING_ANY_SCENARIO(&(iParam0->f_214[iVar0])))
					{
						TASK::CLEAR_PED_TASKS(&(iParam0->f_214[iVar0]), 1, 0);
					}
					func_79(iParam0->f_338[iVar0 /*75*/], 0);
					func_190(iParam0->f_338[iVar0 /*75*/]);
					PED::SET_PED_CONFIG_FLAG(&(iParam0->f_214[iVar0]), 315, false);
					func_141(&(iParam0->f_214[iVar0]));
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(iParam0->f_214[iVar0]), false);
					PED::_0x39A2FC5AF55A52B1(&(iParam0->f_214[iVar0]), -1);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0->f_214[iVar0]);
					func_92(&(iParam0->f_144));
				}
			}
			iVar0++;
		}
		if (bVar1)
		{
			func_21(&(iParam0->f_253), 131072);
		}
	}
}

void func_26(int iParam0, var uParam1)
{
	if (func_34(iParam0->f_253, 128) || func_34(iParam0->f_253, 4))
	{
		return;
	}
	if (AUDIO::_0xA2CAC9DEF0195E6F(0))
	{
		return;
	}
	if (!func_11(uParam1))
	{
		func_168(uParam1, 0f);
		func_198(iParam0);
	}
}

void func_27(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = iParam0->f_1;
	if (iVar1 == 2)
	{
		iVar2 = 0;
		iVar3 = 3;
	}
	else if (iVar1 == 3)
	{
		iVar2 = 2;
		iVar3 = 3;
	}
	if (*iParam0 == func_188(iParam0))
	{
		iParam0->f_2 = 3;
	}
	switch (iParam0->f_2)
	{
		case 0:
		case 1:
			switch (iVar1)
			{
				case 0:
				case 2:
				case 3:
					iVar0 = 0;
					while (iVar0 < iParam0->f_257)
					{
						func_171(&(iParam0->f_214[iVar0]));
						iVar0++;
					}
					break;
			}
			break;
	}
	switch (iParam0->f_2)
	{
		case 0:
			if (func_199(iParam0))
			{
				iParam0->f_2 = 1;
			}
			break;
		case 1:
			switch (iVar1)
			{
				case 0:
					iVar0 = 0;
					while (iVar0 < iParam0->f_257)
					{
						TASK::TASK_LOOK_AT_ENTITY(&(iParam0->f_214[iVar0]), iParam0->f_226, -1, 2108, 51, 1);
						if (!func_139(&(iParam0->f_214[iVar0]), -76381094))
						{
							iParam0->f_2 = 0;
						}
						iVar0++;
					}
					break;
				case 2:
				case 3:
					iVar0 = 0;
					while (iVar0 < iParam0->f_257)
					{
						if (func_9(&(iParam0->f_214[iVar0]), 0))
						{
							TASK::TASK_LOOK_AT_ENTITY(&(iParam0->f_214[iVar0]), iParam0->f_226, -1, 2108, 51, 1);
							if (!func_139(&(iParam0->f_214[iVar0]), 993674639))
							{
								iParam0->f_2 = 0;
							}
							if (func_62(Global_35, iParam0->f_226, 1, 1) <= 14f)
							{
								if (!func_11(&(iParam0->f_144)))
								{
									func_92(&(iParam0->f_144));
								}
								if (!func_34(iParam0->f_253, 67108864))
								{
									if (func_140(&(iParam0->f_144)) > 2f)
									{
										func_92(&(iParam0->f_144));
										iParam0->f_2 = 2;
									}
								}
								else if (func_140(&(iParam0->f_144)) > 30f)
								{
									func_92(&(iParam0->f_144));
									iParam0->f_2 = 2;
								}
							}
							else
							{
								func_92(&(iParam0->f_144));
							}
						}
						iVar0++;
					}
					break;
			}
			break;
		case 2:
			switch (iVar1)
			{
				case 2:
				case 3:
					if (!func_34(iParam0->f_253, 67108864))
					{
						iVar0 = iVar2;
					}
					else
					{
						iVar0 = iVar3;
					}
					if (func_9(&(iParam0->f_214[iVar0]), 0))
					{
						if (PED::IS_PED_USING_ANY_SCENARIO(&(iParam0->f_214[iVar0])))
						{
							TASK::CLEAR_PED_TASKS(&(iParam0->f_214[iVar0]), 1, 0);
							func_92(&(iParam0->f_144));
						}
						else if (func_140(&(iParam0->f_144)) > 4f)
						{
							func_79(iParam0->f_338[iVar0 /*75*/], 0);
							func_190(iParam0->f_338[iVar0 /*75*/]);
							PED::SET_PED_CONFIG_FLAG(&(iParam0->f_214[iVar0]), 315, false);
							PED::_0x39A2FC5AF55A52B1(&(iParam0->f_214[iVar0]), -1);
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0->f_214[iVar0]);
							func_92(&(iParam0->f_144));
							iParam0->f_2 = 1;
							func_21(&(iParam0->f_253), 67108864);
						}
						func_141(&(iParam0->f_214[iVar0]));
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(iParam0->f_214[iVar0]), false);
					}
					break;
			}
			break;
		case 3:
			if (func_200(iParam0))
			{
				func_201(iParam0);
			}
			break;
	}
}

void func_28(int iParam0)
{
	int iVar0;
	int iVar1;

	switch (iParam0->f_1)
	{
		case 2:
			if (func_9(iParam0->f_226, 0))
			{
				if ((ANIMSCENE::_0x25557E324489393C(iParam0->f_251) && ANIMSCENE::_0xCBFC7725DE6CE2E0(iParam0->f_251, 0)) && ANIMSCENE::_0x1F0E401031E20146(iParam0->f_251, func_137()))
				{
					if (!func_34(iParam0->f_253, 2097152))
					{
						TASK::TASK_LOOK_AT_ENTITY(iParam0->f_226, Global_35, -1, 2108, 51, 1);
						func_21(&(iParam0->f_253), 2097152);
					}
				}
				else
				{
					if (func_34(iParam0->f_253, 2097152))
					{
						func_141(iParam0->f_226);
						func_44(&(iParam0->f_253), 2097152);
					}
					if (ANIMSCENE::_0x25557E324489393C(iParam0->f_250) && ANIMSCENE::_0xCBFC7725DE6CE2E0(iParam0->f_250, 0))
					{
						if (!func_11(&(iParam0->f_156)))
						{
							func_92(&(iParam0->f_156));
						}
						else if (func_140(&(iParam0->f_156)) > 6f)
						{
							iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iParam0->f_257);
							if (func_9(&(iParam0->f_214[iVar0]), 0))
							{
								TASK::TASK_LOOK_AT_ENTITY(iParam0->f_226, &(iParam0->f_214[iVar0]), -1, 2108, 51, 1);
								func_92(&(iParam0->f_156));
							}
						}
					}
				}
			}
			break;
		case 0:
			if (func_9(iParam0->f_226, 0) && func_9(&(iParam0->f_214[1]), 0))
			{
				if (ANIMSCENE::_0x25557E324489393C(iParam0->f_251) && ANIMSCENE::_0xCBFC7725DE6CE2E0(iParam0->f_251, 0))
				{
					if (ANIMSCENE::_0x1F0E401031E20146(iParam0->f_251, func_133()))
					{
						if (!func_34(iParam0->f_253, 2097152))
						{
							TASK::TASK_LOOK_AT_ENTITY(iParam0->f_226, Global_35, -1, 2108, 51, 1);
							func_21(&(iParam0->f_253), 2097152);
						}
					}
					else
					{
						if (func_34(iParam0->f_253, 2097152))
						{
							func_141(iParam0->f_226);
							func_44(&(iParam0->f_253), 2097152);
						}
						TASK::TASK_LOOK_AT_ENTITY(iParam0->f_226, &(iParam0->f_214[1]), -1, 2108, 51, 1);
					}
				}
				else
				{
					func_141(iParam0->f_226);
				}
				if (ANIMSCENE::_0x25557E324489393C(iParam0->f_250) && !func_202(iParam0))
				{
					func_141(iParam0->f_226);
				}
			}
			break;
		case 3:
			if (func_9(iParam0->f_226, 0))
			{
				if (ANIMSCENE::_0x25557E324489393C(iParam0->f_250) && ANIMSCENE::_0xCBFC7725DE6CE2E0(iParam0->f_250, 0))
				{
					if (!func_11(&(iParam0->f_156)))
					{
						func_92(&(iParam0->f_156));
					}
					else if (func_140(&(iParam0->f_156)) > 6f)
					{
						iVar1 = func_203(0, iParam0->f_257, 3);
						if (func_9(&(iParam0->f_214[iVar1]), 0))
						{
							TASK::TASK_LOOK_AT_ENTITY(iParam0->f_226, &(iParam0->f_214[iVar1]), -1, 2108, 51, 1);
							func_92(&(iParam0->f_156));
						}
					}
				}
			}
			break;
	}
}

void func_29(int iParam0)
{
	if (*iParam0 != 51 && *iParam0 != 52)
	{
		func_204(iParam0);
		return;
	}
	if (func_34(iParam0->f_253, 4))
	{
		func_204(iParam0);
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0->f_226) || ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		func_204(iParam0);
		return;
	}
	if (func_167(Global_35, iParam0->f_226, 15f, 1))
	{
		if (!func_34(iParam0->f_253, 1048576))
		{
			PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "MayorBubble");
			PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), iParam0->f_226, "SPECIAL_PED_GENERIC_INTERACT_FOCUS", 0f, 0f, 0f, 0, "MayorConvo");
			func_21(&(iParam0->f_253), 1048576);
		}
	}
	else
	{
		func_204(iParam0);
	}
}

void func_30(int iParam0)
{
	if (func_34(iParam0->f_253, 4096))
	{
		return;
	}
	if (*iParam0 >= 22 && *iParam0 <= 49)
	{
		if (iParam0->f_256 < 2)
		{
			if (func_205(&(iParam0->f_226), 249295937))
			{
				func_21(&(iParam0->f_253), 4096);
			}
		}
	}
}

void func_31(int iParam0, var uParam1, int iParam2, int iParam3, float fParam4)
{
	char* sVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0) || Global_1935630->f_12)
	{
		return;
	}
	sVar0 = func_206(iParam3);
	if (fParam4 == 0f)
	{
		if (func_167(iParam0, Global_35, 15f, 1))
		{
			if (!func_207(*uParam1, iParam2))
			{
				if (AUDIO::_0x6339C1EA3979B5F7(sVar0, "special_ped_scenes"))
				{
					func_187(uParam1, iParam2);
				}
			}
		}
		else if (func_207(*uParam1, iParam2))
		{
			AUDIO::_0x9428447DED71FC7E("special_ped_scenes");
			func_208(uParam1, iParam2);
		}
	}
	else if (fParam4 <= 15f)
	{
		if (!func_207(*uParam1, iParam2))
		{
			if (AUDIO::_0x6339C1EA3979B5F7(sVar0, "special_ped_scenes"))
			{
				func_187(uParam1, iParam2);
			}
		}
	}
	else if (func_207(*uParam1, iParam2))
	{
		AUDIO::_0x9428447DED71FC7E("special_ped_scenes");
		func_208(uParam1, iParam2);
	}
}

bool func_32(int iParam0, int iParam1, bool bParam2, int iParam3)
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

void func_33(var uParam0)
{
	if (func_34(*uParam0, 64))
	{
		return;
	}
	if (func_15(18) == 0)
	{
		if (!func_34(*uParam0, 8))
		{
			func_21(uParam0, 8);
			func_21(uParam0, 64);
		}
	}
	else if (func_15(18) == 1)
	{
		if (!func_34(*uParam0, 16))
		{
			func_21(uParam0, 16);
			func_21(uParam0, 64);
		}
	}
	else if (func_15(18) == 2)
	{
		if (!func_34(*uParam0, 32))
		{
			func_21(uParam0, 32);
			func_21(uParam0, 64);
		}
	}
}

bool func_34(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_35(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("cs_nicholastimmins");
			break;
		case 1:
			iVar0 = -1345208079;
			break;
		case 2:
			iVar0 = joaat("a_f_m_strtownfolk_01");
			break;
		case 3:
			iVar0 = joaat("a_m_m_strtownfolk_01");
			break;
		case 4:
			iVar0 = joaat("p_cigar02x");
			break;
		case 5:
			iVar0 = joaat("p_matchstick01x");
			break;
		case 6:
			iVar0 = -1812624322;
			break;
	}
	return iVar0;
}

void func_36(var uParam0)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_232))
	{
		uParam0->f_232 = VOLUME::_0x10157BC3247FF3BA(-1807.259f, -373.538f, 160.545f, 0f, 0f, -40.7371f, 40f, 40f, 40f, "RandomEventBlock");
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_233))
	{
		uParam0->f_233 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1808.178f, -372.9722f, 162.925f, 0f, 0f, 0f, 2.4f, 3.25f, 3f, "BarTrigger");
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_234))
	{
		uParam0->f_234 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1780.52f, -386.1113f, 164.7127f, 0f, 0f, 0f, 15f, 15f, 10f, "Interaction");
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_235))
	{
		uParam0->f_235 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1807.915f, -374.0633f, 163.2964f, 0f, 0f, 0f, 2f, 2f, 3f, "BarStayAway");
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_236))
	{
		uParam0->f_236 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1805.002f, -370.4279f, 162.451f, 0f, 0f, 0f, 5f, 5f, 3f, "LookIKVol");
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_237))
	{
		uParam0->f_237 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1807.915f, -374.0633f, 163.2964f, 0f, 0f, 0f, 3f, 3f, 6f, "Focus");
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_239))
	{
		uParam0->f_239 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1808.159f, -370.5105f, 162.2462f, 0f, 0f, 0f, 2.370875f, 9.299027f, 3.438804f, "ScenarioBlock");
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_235))
	{
		uParam0->f_235 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1807.915f, -374.0633f, 163.2964f, 0f, 0f, 0f, 2f, 2f, 3f, "BarStayAway");
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_242))
	{
		uParam0->f_242 = VOLUME::_0x0EB78C2B156635B1(665633627, -1808.158f, -374.1018f, 163.1033f, 0f, 0f, 0f, 1.85f, 1.85f, 3f);
		VOLUME::_0x5B23DFF8E0948BB2(uParam0->f_242, 0);
		VOLUME::_0xBE551C2CC421185D(uParam0->f_242, 1);
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
	uVar6 = func_209(vVar0, vVar3.x, sParam1, bParam2, iParam3, iParam4, bParam5, fParam6);
	return uVar6;
}

int func_38(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return iVar0;
	}
	func_210(iParam0, bParam2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam3, 0, 0, -1, -1, 0);
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam3, 0, 0, -1, -1, 2);
	iVar0 = PED::_0x4C39C95AE5DB1329(iParam0, bParam2, 15);
	return iVar0;
}

int func_39(int iParam0)
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

int func_40(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_211())
	{
		iVar2 = func_211();
	}
	iVar5 = func_212(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_213(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_213(iVar6) == 0)
			{
				return func_214(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_213(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_213(iVar6) == 0)
			{
				return func_214(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_214(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

bool func_41(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_42(int iParam0)
{
	if (!func_41(iParam0))
	{
		return -1;
	}
	return func_215(iParam0);
}

int func_43(int iParam0)
{
	if (!func_41(iParam0))
	{
		return -1;
	}
	return func_216(iParam0);
}

void func_44(var uParam0, int iParam1)
{
	func_208(uParam0, iParam1);
}

int func_45()
{
	if (func_217() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == 11966224)
	{
		return 1;
	}
	return 0;
}

void func_46(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_218(uParam0, iParam1, sParam2))
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

void func_47(var uParam0)
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

void func_48(var uParam0)
{
	func_49(uParam0, 0);
	func_54(uParam0, 0);
	func_219(uParam0, 1);
	func_220(uParam0, 1);
	func_221(uParam0, 0);
	func_222(uParam0, 1);
	func_223(uParam0, 1, 1, 1);
}

void func_49(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_224(&(uParam0->f_1), 16384);
	}
	else
	{
		func_225(&(uParam0->f_1), 16384);
	}
}

void func_50(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_224(&(uParam0->f_1), 131072);
	}
	else
	{
		func_225(&(uParam0->f_1), 131072);
	}
}

void func_51(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_225(uParam0, 4);
	}
	else
	{
		func_224(uParam0, 4);
	}
}

void func_52(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_224(&(uParam0->f_1), 8);
	}
	else
	{
		func_225(&(uParam0->f_1), 8);
	}
}

void func_53(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_224(&(uParam0->f_1), 2);
	}
	else
	{
		func_225(&(uParam0->f_1), 2);
	}
}

void func_54(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_224(&(uParam0->f_1), 2048);
	}
	else
	{
		func_225(&(uParam0->f_1), 2048);
	}
}

void func_55(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_224(&(uParam0->f_1), 16);
	}
	else
	{
		func_225(&(uParam0->f_1), 16);
	}
}

void func_56(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_224(&(uParam0->f_1), 1);
	}
	else
	{
		func_225(&(uParam0->f_1), 1);
	}
}

void func_57(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_224(&(uParam0->f_1), 4);
	}
	else
	{
		func_225(&(uParam0->f_1), 4);
	}
}

void func_58(var uParam0)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_232))
	{
		uParam0->f_232 = VOLUME::_0x10157BC3247FF3BA(-1807.259f, -373.538f, 160.545f, 0f, 0f, -40.7371f, 40f, 40f, 40f, "RandomEventBlock");
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_233))
	{
		uParam0->f_233 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1803.973f, -372.7202f, 162.9169f, 0f, 0f, 0f, 2.5f, 3.5f, 3f, "BarTrigger");
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_234))
	{
		uParam0->f_234 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1780.52f, -386.1113f, 164.7127f, 0f, 0f, 0f, 15f, 15f, 10f, "Interaction");
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_235))
	{
		uParam0->f_235 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1812.402f, -366.9263f, 163.2964f, 0f, 0f, 0f, 2f, 2f, 3f, "BarStayAway");
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_236))
	{
		uParam0->f_236 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1804.474f, -373.0866f, 163.7856f, 0f, 0f, 170f, 5f, 7f, 9f, "LookIKVolume");
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_237))
	{
		uParam0->f_237 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1807.915f, -374.0633f, 163.2964f, 0f, 0f, 0f, 3f, 3f, 6f, "Focus");
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_239))
	{
		uParam0->f_239 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1807.266f, -370.5105f, 161.9648f, 0f, 0f, 0f, 5.4f, 9.3f, 3.8f, "ScenarioBlock");
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_235))
	{
		uParam0->f_235 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1807.915f, -374.0633f, 163.2964f, 0f, 0f, 0f, 2f, 2f, 3f, "BarStayAway");
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_240))
	{
		uParam0->f_240 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1817.343f, -371.0179f, 163.4183f, 0f, 0f, 0f, 1.5f, 1.5f, 3f, "EndScenarioBlock");
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_238))
	{
		uParam0->f_238 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("BridgeBlock");
		VOLUME::_0x39816F6F94F385AD(uParam0->f_238, -1812.224f, -389.8523f, 161.4299f, 0f, 0f, -33f, 6f, 52f, 5f);
		VOLUME::_0x39816F6F94F385AD(uParam0->f_238, -1779.902f, -384.4528f, 159.3328f, 0f, 0f, 47f, 10f, 50f, 10f);
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_242))
	{
		uParam0->f_242 = VOLUME::_0x0EB78C2B156635B1(665633627, -1808.158f, -374.1018f, 163.1033f, 0f, 0f, 0f, 1.85f, 1.85f, 3f);
		VOLUME::_0x5B23DFF8E0948BB2(uParam0->f_242, 0);
		VOLUME::_0xBE551C2CC421185D(uParam0->f_242, 1);
	}
}

void func_59(var uParam0)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_232))
	{
		uParam0->f_232 = VOLUME::_0x10157BC3247FF3BA(-1781.978f, -387.436f, 158.14f, 0f, 0f, 0f, 40f, 40f, 40f, "RandomEventBlock");
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_233))
	{
		uParam0->f_233 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1780.52f, -386.1113f, 164.7127f, 0f, 0f, 0f, 5f, 5f, 10f, "BarTrigger");
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_234))
	{
		uParam0->f_234 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1780.52f, -386.1113f, 164.7127f, 0f, 0f, 0f, 15f, 15f, 10f, "Interaction");
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_235))
	{
		uParam0->f_235 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1781.117f, -386.2386f, 158.8012f, 0f, 0f, 49.00006f, 2.280238f, 2.759403f, 5f, "BarStayAway");
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_236))
	{
		uParam0->f_236 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1779.163f, -383.5739f, 161.6929f, 0f, 0f, 140f, 8f, 4f, 7f, "LookIKVolume");
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_237))
	{
		uParam0->f_237 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1807.915f, -374.0633f, 163.2964f, 0f, 0f, 0f, 3f, 3f, 6f, "Focus");
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_239))
	{
		uParam0->f_239 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1781.01f, -387.628f, 158.5448f, 0f, 0f, 53f, 4f, 4f, 7f, "ScenarioBlock");
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_235))
	{
		uParam0->f_235 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1807.915f, -374.0633f, 163.2964f, 0f, 0f, 0f, 2f, 2f, 3f, "BarStayAway");
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_242))
	{
		uParam0->f_242 = VOLUME::_0x0EB78C2B156635B1(665633627, -1808.158f, -374.1018f, 163.1033f, 0f, 0f, 0f, 1.85f, 1.85f, 3f);
		VOLUME::_0x5B23DFF8E0948BB2(uParam0->f_242, 0);
		VOLUME::_0xBE551C2CC421185D(uParam0->f_242, 1);
	}
}

int func_60(int iParam0)
{
	if (!func_226(iParam0))
	{
		return 0;
	}
	return ((*Global_1895087)[iParam0 /*3*/])->f_1;
}

int func_61(int iParam0)
{
	if (!func_226(iParam0))
	{
		return 0;
	}
	if (!func_227(iParam0, 2))
	{
		return 0;
	}
	if (func_229(func_228(iParam0)))
	{
		return func_230(iParam0);
	}
	return PED::_0xE76687023D8C8505(func_231(iParam0), 0);
}

float func_62(int iParam0, int iParam1, bool bParam2, int iParam3)
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

int func_63(int iParam0)
{
	int iVar0;

	if (!func_226(iParam0))
	{
		return 0;
	}
	if (!func_229(func_228(iParam0)))
	{
		return 1;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(func_60(iParam0)))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(_NAMESPACE48::_0x31C70A716CAE1FEE(func_60(iParam0))))
		{
			return 1;
		}
	}
	iVar0 = _NAMESPACE48::_0x31C70A716CAE1FEE(func_60(iParam0));
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
		}
	}
	_NAMESPACE48::_0x7B204F88F6C3D287(func_60(iParam0));
	return 1;
}

void func_64(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_225(uParam0, 524288);
	}
	else
	{
		func_224(uParam0, 524288);
	}
}

int func_65(int iParam0, int iParam1)
{
	vector3 vVar0;
	float fVar3;
	int iVar4;

	vVar0 = { func_91(iParam1) };
	fVar3 = func_232(iParam1);
	iVar4 = func_233(iParam1);
	iParam0->f_224 = TASK::CREATE_SCENARIO_POINT(iVar4, vVar0, fVar3, 0f, 0f, 0);
	if (TASK::_0x841475AC96E794D1(iParam0->f_224))
	{
		return 1;
	}
	return 0;
}

struct<4> func_66(int iParam0)
{
	struct<4> Var0;

	switch (iParam0)
	{
		case 0:
			Var0 = { -1807.855f, -373.9421f, 161.8663f };
			Var0.f_3 = 193.945f;
			break;
		case 1:
			Var0 = { -1807.839f, -374.7922f, 161.8436f };
			Var0.f_3 = 180f;
			break;
		case 2:
			Var0 = { -1807.327f, -372.7494f, 161.8703f };
			Var0.f_3 = -80.87f;
			break;
		case 3:
			Var0 = { -1781.684f, -387.2436f, 159.247f };
			Var0.f_3 = -44.78f;
			break;
	}
	return Var0;
}

int func_67(var uParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6)
{
	if (func_60(iParam1) == 0)
	{
		return 0;
	}
	if (!func_9(*uParam0, 0))
	{
		*uParam0 = func_234(iParam1, 1, 0, 0, 1, 1);
	}
	else
	{
		if (iParam6 != 1320127128)
		{
			func_80(*uParam0, iParam6);
		}
		if (bParam5)
		{
			_NAMESPACE48::_0x59C7AD6FEA2AC449(func_60(iParam1), vParam2);
		}
		return 1;
	}
	return 0;
}

int func_68(var uParam0, int iParam1, vector3 vParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		*uParam0 = OBJECT::CREATE_OBJECT(iParam1, vParam2, true, true, false, false, true);
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	return 1;
}

int func_69(var uParam0, var uParam1, int iParam2, vector3 vParam3, int iParam6)
{
	if (!ENTITY::_0x1FF441D7954F8709(*uParam0))
	{
		*uParam0 = ENTITY::_0x6F3068258A499E52(iParam2, vParam3, iParam6);
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		*uParam1 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(*uParam0));
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return 0;
	}
	return 1;
}

int func_70(var uParam0)
{
	int iVar0;
	bool bVar1;

	bVar1 = true;
	iVar0 = 0;
	while (iVar0 < uParam0->f_257)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_214[iVar0])))
		{
			bVar1 = false;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	bVar1 = true;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_257)
	{
		if (!func_239(uParam0->f_214[iVar0], func_35(func_235(uParam0, iVar0)), func_236(uParam0, iVar0), func_237(uParam0, iVar0), func_238(uParam0, iVar0), 0, 1))
		{
			bVar1 = false;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

void func_71(int iParam0, int iParam1)
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

char* func_72(var uParam0, int iParam1)
{
	if (func_240())
	{
		switch (uParam0->f_258)
		{
			case 0:
				*iParam1 = 1;
				return "INSULT_MAYOR_CONV_PART1";
			case 1:
				*iParam1 = 2;
				return "INSULT_MAYOR_CONV_PART1";
			case 2:
				*iParam1 = 2;
				return "INSULT_MALE_CONV_PART1";
			case 3:
				*iParam1 = 19;
				return "INSULT_MALE_CONV_PART1";
		}
	}
	else
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
		{
			case 0:
				*iParam1 = 16;
				return "INSULT_MALE_CONV_PART1";
			case 1:
				*iParam1 = 2;
				return "INSULT_MALE_CONV_PART1";
			case 2:
				*iParam1 = 6;
				return "INSULT_MALE_CONV_PART1";
			case 3:
				*iParam1 = 18;
				return "INSULT_MALE_CONV_PART1";
			case 4:
				*iParam1 = 19;
				return "INSULT_MALE_CONV_PART1";
		}
	}
	*iParam1 = 2;
	return "INSULT_MALE_CONV_PART1";
}

void func_73(var uParam0, var uParam1, int iParam2, float fParam3, float fParam4)
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

char* func_74()
{
	return "GREET_GENERAL";
}

void func_75(int* iParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = sParam1;
	iParam0->f_7 = iParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = uParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (func_241(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				func_242(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_243(iParam0->f_6, iParam0->f_5, 0);
			}
			func_244(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		func_245(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

void func_76(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_77(int* iParam0, int iParam1, bool bParam2)
{
	if (iParam1 && !func_246(iParam0, 13))
	{
		func_76(iParam0, 0);
	}
	else
	{
		func_247(iParam0, 0);
	}
	if (func_241(iParam0->f_6))
	{
		if (bParam2)
		{
			func_248(&(iParam0->f_6), 0, 1);
		}
	}
}

int func_78(int iParam0, int iParam1, int iParam2)
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

void func_79(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_14(&(uParam0->f_18));
}

void func_80(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_249(iParam0, iParam1))
		{
			if (func_250(iParam0, iParam1))
			{
				if (func_251(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_252(iParam0);
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

void func_81(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_257)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_214[iVar0])))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(uParam0->f_214[iVar0]), true);
		}
		iVar0++;
	}
}

void func_82(int iParam0)
{
	func_253();
	func_254(-1, 0, 0, 0, 0);
	func_255(iParam0, 0, 1);
}

void func_83(int iParam0)
{
	int iVar0;

	iVar0 = func_203(0, (2 - 1), iParam0->f_249);
	iParam0->f_249 = iVar0;
	switch (iVar0)
	{
		case 0:
			func_20(iParam0, 51);
			break;
		case 1:
			func_20(iParam0, 52);
			break;
		case 2:
			func_20(iParam0, 53);
			break;
		default:
			break;
	}
}

float func_84(var uParam0)
{
	if (func_34(uParam0->f_253, 2))
	{
		return 3f;
	}
	if (func_62(Global_35, uParam0->f_226, 1, 1) <= 14f)
	{
		return 5f;
	}
	return 13f;
}

int func_85(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
	if (iVar0 != 0)
	{
		if (INTERIOR::_0x3039BE60B3749716(iVar0) != 978821587)
		{
			return 0;
		}
	}
	switch (iParam0->f_640)
	{
		case 8:
			if (func_62(Global_35, iParam0->f_226, 1, 1) <= 14f)
			{
				if (!func_34(iParam0->f_254, 256))
				{
					func_20(iParam0, 22);
					iParam0->f_640 = 9;
					func_21(&(iParam0->f_254), 256);
					return 1;
				}
			}
			break;
		case 9:
			if (func_62(Global_35, iParam0->f_226, 1, 1) <= 14f)
			{
				if (!func_34(iParam0->f_254, 512))
				{
					func_20(iParam0, 23);
					iParam0->f_640 = 10;
					func_21(&(iParam0->f_254), 512);
					return 1;
				}
			}
			break;
		case 10:
			if (func_62(Global_35, iParam0->f_226, 1, 1) <= 14f)
			{
				if (!func_34(iParam0->f_254, 1024))
				{
					func_20(iParam0, 24);
					iParam0->f_640 = 16;
					func_21(&(iParam0->f_254), 1024);
					return 1;
				}
			}
			break;
	}
	iVar1 = func_203(3, 8, iParam0->f_248);
	iParam0->f_248 = iVar1;
	if (iParam0->f_640 == 16)
	{
		func_196(18, func_195(iParam0));
		func_20(iParam0, 20);
		return 1;
	}
	switch (iVar1)
	{
		case 3:
			if (!func_34(iParam0->f_254, 2048))
			{
				func_20(iParam0, 25);
				func_21(&(iParam0->f_254), 2048);
				return 1;
			}
			break;
		case 4:
			if (!func_34(iParam0->f_254, 4096))
			{
				func_20(iParam0, 26);
				func_21(&(iParam0->f_254), 4096);
				return 1;
			}
			break;
		case 5:
			if (!func_34(iParam0->f_254, 32768))
			{
				func_20(iParam0, 29);
				func_21(&(iParam0->f_254), 32768);
				return 1;
			}
			break;
		case 6:
			if (!func_34(iParam0->f_254, 65536))
			{
				func_20(iParam0, 30);
				func_21(&(iParam0->f_254), 65536);
				return 1;
			}
			break;
		case 7:
			if (!func_34(iParam0->f_254, 131072))
			{
				func_20(iParam0, 31);
				func_21(&(iParam0->f_254), 131072);
				return 1;
			}
			break;
		case 8:
			func_20(iParam0, 32);
			break;
		default:
			break;
	}
	return 0;
}

void func_86(int iParam0)
{
	int iVar0;

	iVar0 = func_203(0, 2, iParam0->f_249);
	iParam0->f_249 = iVar0;
	switch (iVar0)
	{
		case 0:
			func_20(iParam0, 54);
			break;
		case 1:
			func_20(iParam0, 55);
			break;
		case 2:
			func_20(iParam0, 56);
			break;
		default:
			break;
	}
}

int func_87(int iParam0)
{
	int iVar0;

	iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
	if (iVar0 != 0)
	{
		if (INTERIOR::_0x3039BE60B3749716(iVar0) != 978821587)
		{
			return 0;
		}
	}
	switch (iParam0->f_640)
	{
		case 0:
			if (func_62(Global_35, iParam0->f_226, 1, 1) >= 14f)
			{
				if (!func_34(iParam0->f_254, 1))
				{
					func_20(iParam0, 37);
					func_21(&(iParam0->f_254), 1);
					return 1;
				}
				func_256(iParam0, 1);
			}
			else
			{
				func_256(iParam0, 3);
			}
			return 0;
		case 1:
			if (func_62(Global_35, iParam0->f_226, 1, 1) >= 14f)
			{
				if (!func_34(iParam0->f_254, 2))
				{
					func_20(iParam0, 38);
					func_21(&(iParam0->f_254), 2);
					return 1;
				}
				func_256(iParam0, 2);
			}
			else
			{
				func_256(iParam0, 3);
			}
			return 0;
		case 2:
			if (func_62(Global_35, iParam0->f_226, 1, 1) >= 14f)
			{
				if (!func_34(iParam0->f_254, 4))
				{
					func_20(iParam0, 41);
					func_21(&(iParam0->f_254), 4);
					return 1;
				}
				func_256(iParam0, 3);
			}
			else
			{
				func_256(iParam0, 3);
			}
			return 0;
		case 3:
			if (func_62(Global_35, iParam0->f_226, 1, 1) <= 14f)
			{
				if (!func_34(iParam0->f_254, 8))
				{
					func_20(iParam0, 36);
					func_21(&(iParam0->f_254), 8);
					return 1;
				}
				else
				{
					func_256(iParam0, 4);
				}
			}
			else
			{
				func_256(iParam0, 0);
			}
			return 0;
		case 4:
			if (func_62(Global_35, iParam0->f_226, 1, 1) <= 14f)
			{
				if (!func_34(iParam0->f_254, 16))
				{
					func_20(iParam0, 40);
					func_21(&(iParam0->f_254), 16);
					return 1;
				}
				else
				{
					func_256(iParam0, 5);
				}
			}
			else
			{
				func_256(iParam0, 0);
			}
			return 0;
		case 5:
			if (func_62(Global_35, iParam0->f_226, 1, 1) <= 14f)
			{
				if (!func_34(iParam0->f_254, 32))
				{
					func_20(iParam0, 39);
					func_21(&(iParam0->f_254), 32);
					return 1;
				}
				else
				{
					func_256(iParam0, 6);
				}
			}
			else
			{
				func_256(iParam0, 0);
			}
			return 0;
		case 6:
			if (func_62(Global_35, iParam0->f_226, 1, 1) <= 14f)
			{
				if (!func_34(iParam0->f_254, 64))
				{
					func_20(iParam0, 35);
					func_21(&(iParam0->f_254), 64);
					return 1;
				}
				else
				{
					func_256(iParam0, 16);
				}
			}
			else
			{
				func_256(iParam0, 0);
			}
			return 0;
		case 16:
			func_196(18, func_195(iParam0));
			func_20(iParam0, 13);
			return 1;
	}
	return 0;
}

int func_88(int iParam0)
{
	int iVar0;

	iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
	if (iVar0 != 0)
	{
		if (INTERIOR::_0x3039BE60B3749716(iVar0) != 978821587)
		{
			return 0;
		}
	}
	switch (iParam0->f_640)
	{
		case 11:
			if (func_62(Global_35, iParam0->f_226, 1, 1) <= 14f)
			{
				if (!func_34(iParam0->f_254, 262144))
				{
					func_20(iParam0, 43);
					iParam0->f_640 = 12;
					func_21(&(iParam0->f_254), 262144);
					return 1;
				}
			}
			break;
		case 12:
			if (func_62(Global_35, iParam0->f_226, 1, 1) <= 14f)
			{
				if (!func_34(iParam0->f_254, 524288))
				{
					func_20(iParam0, 45);
					iParam0->f_640 = 13;
					func_21(&(iParam0->f_254), 524288);
					return 1;
				}
			}
			break;
		case 13:
			if (func_62(Global_35, iParam0->f_226, 1, 1) <= 14f)
			{
				if (!func_34(iParam0->f_254, 1048576))
				{
					func_20(iParam0, 44);
					iParam0->f_640 = 14;
					func_21(&(iParam0->f_254), 1048576);
					return 1;
				}
			}
			break;
		case 14:
			if (func_62(Global_35, iParam0->f_226, 1, 1) <= 14f)
			{
				if (!func_34(iParam0->f_254, 2097152))
				{
					func_20(iParam0, 46);
					iParam0->f_640 = 15;
					func_21(&(iParam0->f_254), 2097152);
					return 1;
				}
			}
			break;
		case 15:
			if (func_62(Global_35, iParam0->f_226, 1, 1) <= 14f)
			{
				if (!func_34(iParam0->f_254, 4194304))
				{
					func_20(iParam0, 47);
					iParam0->f_640 = 16;
					func_21(&(iParam0->f_254), 4194304);
					return 1;
				}
			}
			break;
	}
	if (iParam0->f_640 == 16)
	{
		func_196(18, func_195(iParam0));
		func_257(iParam0);
		func_20(iParam0, 62);
		return 1;
	}
	if (!func_34(iParam0->f_254, 8388608))
	{
		func_20(iParam0, 49);
		func_21(&(iParam0->f_254), 8388608);
		return 1;
	}
	return 0;
}

int func_89(var uParam0)
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

int func_90(var uParam0, var uParam1, int iParam2)
{
	if (!func_9(uParam0->f_226, 0))
	{
		return 0;
	}
	if (PED::_0x9C54041BB66BCF9E(uParam0->f_226, *uParam1))
	{
		return 1;
	}
	if (!func_139(uParam0->f_226, -76381094))
	{
		if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_242))
		{
			VOLUME::_0x43F867EF5C463A53(uParam0->f_242);
		}
		TASK::_TASK_USE_SCENARIO_POINT(uParam0->f_226, *uParam1, 0, iParam2, 1, 0, 0, 0, -1082130432, 0);
		func_141(uParam0->f_226);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_226, 448, false);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_226, 153, false);
		AUDIO::STOP_PED_SPEAKING(uParam0->f_226, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_226, false);
		PED::SET_PED_KEEP_TASK(uParam0->f_226, true);
	}
	return 0;
}

Vector3 func_91(int iParam0)
{
	vector3 vVar0;

	switch (iParam0)
	{
		case 0:
			vVar0 = { -1817.09f, -370.825f, 162.296f };
			break;
		case 1:
			vVar0 = { -1796.195f, -432.0646f, 154.8438f };
			break;
		case 2:
			vVar0 = { -1830.637f, -411.2434f, 161.4105f };
			break;
		case 3:
			vVar0 = { -1820.684f, -374.7641f, 165.4969f };
			break;
	}
	return vVar0;
}

void func_92(var uParam0)
{
	func_168(uParam0, 0f);
}

void func_93(int iParam0, int iParam1, int iParam2)
{
	AUDIO::_0x36559148B78853B3(iParam0, iParam1, iParam2);
}

void func_94(int iParam0, int iParam1, var uParam2, vector3 vParam3, char* sParam6, int iParam7, int iParam8, float fParam9, float fParam10, float fParam11, float fParam12, int iParam13, int iParam14, bool bParam15, int iParam16, int iParam17, int iParam18, bool bParam19)
{
	struct<10> Var0;
	struct<10> Var11;

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
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
	{
		if (iParam7 == 0)
		{
			iParam7 = 14;
		}
		Var0 = 2;
		Var0.f_4 = sParam6;
		Var0.f_5 = iParam7;
		Var0.f_7 = iParam16;
		Var0.f_9 = iParam17;
		TASK::TASK_LEAD_AND_CONVERSE(iParam0, iParam1, &Var0, iParam8, fParam9, fParam10, fParam11, iParam13, fParam12);
	}
	else if (!func_258(vParam3, 0f, 0f, 0f))
	{
		Var11 = 0;
		Var11.f_1 = { vParam3 };
		Var11.f_7 = iParam16;
		Var11.f_9 = iParam17;
		Var11.f_8 = iParam18;
		TASK::TASK_LEAD_AND_CONVERSE(iParam0, iParam1, &Var11, iParam8, fParam9, fParam10, fParam11, iParam13, fParam12);
	}
	if (bParam15)
	{
		PED::_0x7DE9692C6F64CFE8(iParam0, false, 0, 0);
	}
	if (bParam19)
	{
		func_259(iParam0, iParam1, iParam14);
	}
}

void func_95(int iParam0, int iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, float fParam7, bool bParam8, int iParam9, float fParam10, float fParam11, int iParam12, int iParam13, float fParam14, float fParam15, int iParam16, float fParam17, int iParam18, bool bParam19, int iParam20, int iParam21, bool bParam22)
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
		func_259(iParam0, iParam1, iParam18);
	}
}

void func_96(char* sParam0)
{
	StringCopy(sParam0, "walk_and_talk", 64);
	StringCopy(&(sParam0->f_8), "WALK_AND_TALK_REQUEST", 64);
	CAM::_0x6A4D224FC7643941(sParam0);
}

void func_97(char* sParam0, var uParam1)
{
	var uVar0[1];

	if (CAM::_0xDD0B7C5AE58F721D(sParam0) && !CAM::_0x927B810E43E99932(sParam0))
	{
		CAM::_0xB8B207C34285E978(sParam0);
		uVar0[0] = uParam1;
		CAM::_0xFEB8646818294C75(sParam0, &uVar0);
	}
}

void func_98(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
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
		func_260(bParam4, bParam5, bParam6, bParam7, bParam3, bParam9, bParam10);
		if (bParam2)
		{
			PED::SET_PED_RESET_FLAG(iParam0, 188, true);
		}
	}
}

char* func_99()
{
	return "script@specialped@pdmos_nicholas_trimmins@ig@ig_9_mainstreetwalkntalk";
}

char* func_100()
{
	return "pbl_Enter01";
}

char* func_101()
{
	return "pbl_P1_Loop01";
}

char* func_102()
{
	return "pbl_P2_Loop01";
}

char* func_103()
{
	return "pbl_P3_Loop01";
}

char* func_104()
{
	return "pbl_P4_Loop01";
}

char* func_105()
{
	return "pbl_P4_Loop02";
}

char* func_106()
{
	return "pbl_P4_Loop03";
}

char* func_107()
{
	return "pbl_P4_Loop04";
}

char* func_108()
{
	return "pbl_P4_Loop05";
}

char* func_109()
{
	return "pbl_P4_Loop06";
}

char* func_110()
{
	return "pbl_P4_Loop07";
}

char* func_111()
{
	return "pbl_Base_Reset";
}

char* func_112()
{
	return "pbl_Exit01";
}

int func_113(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (!func_9(uParam0->f_226, 0))
	{
		return 0;
	}
	iVar0 = iParam1;
	iVar1 = func_233(iVar0);
	if (iVar0 != -1)
	{
		if (PED::_0x34D6AC1157C8226C(uParam0->f_226, iVar1))
		{
			return 1;
		}
	}
	else if (PED::IS_PED_USING_ANY_SCENARIO(uParam0->f_226))
	{
		return 1;
	}
	if (!func_139(uParam0->f_226, 1647992574))
	{
		if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_242))
		{
			VOLUME::_0x43F867EF5C463A53(uParam0->f_242);
		}
		vVar2 = { func_91(iVar0) };
		TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(uParam0->f_226, vVar2, 5f, -1, 0, 0, 1, 0);
		func_141(uParam0->f_226);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_226, 448, false);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_226, 153, false);
		AUDIO::STOP_PED_SPEAKING(uParam0->f_226, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_226, false);
		PED::SET_PED_KEEP_TASK(uParam0->f_226, true);
	}
	return 0;
}

char* func_114()
{
	return "pbl_Exit02";
}

char* func_115()
{
	return "pbl_P1_Loop01";
}

char* func_116()
{
	return "pbl_P2_Loop01";
}

char* func_117()
{
	return "pbl_P2_Loop02";
}

char* func_118()
{
	return "pbl_P2_Loop03";
}

char* func_119()
{
	return "pbl_P2_Loop04";
}

char* func_120()
{
	return "pbl_T04_Loop01";
}

char* func_121()
{
	return "pbl_T05_Loop01";
}

char* func_122()
{
	return "pbl_base_reset";
}

char* func_123()
{
	return "pbl_P1_Loop01";
}

char* func_124()
{
	return "pbl_P2_loop01";
}

char* func_125()
{
	return "pbl_P3_loop01";
}

char* func_126()
{
	return "pbl_P4_loop01";
}

char* func_127()
{
	return "pbl_Part01";
}

char* func_128()
{
	return "pbl_Part02";
}

char* func_129()
{
	return "pbl_IG5_Loop01";
}

void func_130(var uParam0, var uParam1, var uParam2)
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

void func_131(bool bParam0)
{
	int iVar0;

	iVar0 = func_261();
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

int func_132(int iParam0, vector3 vParam1, float fParam4, int iParam5)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(Global_35) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	PAD::DISABLE_ALL_CONTROL_ACTIONS(1);
	PAD::ENABLE_CONTROL_ACTION(0, 648122183, true);
	PAD::ENABLE_CONTROL_ACTION(0, -163964935, true);
	PAD::ENABLE_CONTROL_ACTION(0, -668070958, true);
	PAD::ENABLE_CONTROL_ACTION(0, 1250966545, true);
	HUD::_0xC9CAEAEEC1256E54(724769646);
	func_262();
	func_263();
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), false, 0, false, false);
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), false, 1, false, false);
	TASK::TASK_SWAP_WEAPON(Global_35, 0, 1, 0, 0);
	if (!func_139(Global_35, 242628503))
	{
		if (func_62(Global_35, iParam0, 1, 1) < func_264(iParam0, vParam1, 1))
		{
			if (PED::IS_PED_FACING_PED(Global_35, iParam0, 20f))
			{
				return 1;
			}
			else
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iParam0, 0, -1082130432, -1082130432, -1082130432);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar0);
				PED::SET_PED_KEEP_TASK(Global_35, true);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			}
		}
	}
	if (!func_265(Global_35, vParam1, (ENTITY::GET_ENTITY_HEADING(iParam0) - 180f), fParam4, 45f, 1))
	{
		if (!func_139(Global_35, 242628503))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_GO_STRAIGHT_TO_COORD(0, vParam1, 1f, iParam5, (ENTITY::GET_ENTITY_HEADING(iParam0) - 180f), fParam4, 0);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iParam0, 0, -1082130432, -1082130432, -1082130432);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar0);
			PED::SET_PED_KEEP_TASK(Global_35, true);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

char* func_133()
{
	return "pbl_Loop01";
}

void func_134(int* iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_246(iParam0, 4))
		{
			func_248(&(iParam0->f_6), 1, 1);
			func_76(iParam0, 4);
		}
	}
	else if (func_246(iParam0, 4))
	{
		func_247(iParam0, 4);
		func_76(iParam0, 14);
	}
}

char* func_135()
{
	return "pbl_Loop01";
}

int func_136(int* iParam0, bool bParam1)
{
	if (!bParam1 || func_241(iParam0->f_6))
	{
		return func_246(iParam0, 4);
	}
	return 0;
}

char* func_137()
{
	return "pbl_Loop01";
}

char* func_138()
{
	return "pbl_Loop01";
}

int func_139(int iParam0, int iParam1)
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

float func_140(var uParam0)
{
	if (!func_11(uParam0))
	{
		return 0f;
	}
	if (func_174(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_175() - uParam0->f_1);
}

void func_141(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		TASK::TASK_CLEAR_LOOK_AT(iParam0);
	}
}

void func_142(int iParam0, bool bParam1)
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

void func_143(int iParam0, bool bParam1)
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

void func_144(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			ENTITY::DETACH_ENTITY(iParam0, bParam1, bParam2);
		}
	}
}

bool func_145(var uParam0, char* sParam1, int iParam2, int iParam3, var uParam4, int iParam5)
{
	struct<7> Var0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_3 = iParam2;
	Var0.f_6 = iParam5;
	Var0.f_1 = uParam4;
	Var0.f_4 = iParam3;
	return func_266(uParam0, &Var0);
}

void func_146(int iParam0, bool bParam1, bool bParam2)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 301, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 178, bParam2);
	PED::SET_PED_CONFIG_FLAG(iParam0, 330, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
}

void func_147(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iParam0, 7, 0, 1);
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iParam0, 3, 2, 1);
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iParam0, 4, 2, 1);
}

void func_148(int iParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		VOLUME::_0x43F867EF5C463A53(iParam0);
	}
}

void func_149(int iParam0)
{
	if (ANIMSCENE::_0x25557E324489393C(iParam0->f_250) && ANIMSCENE::_0xCBFC7725DE6CE2E0(iParam0->f_250, 0))
	{
		ANIMSCENE::RESET_ANIM_SCENE(iParam0->f_250, 0);
	}
	if (ANIMSCENE::_0x25557E324489393C(iParam0->f_251) && ANIMSCENE::_0xCBFC7725DE6CE2E0(iParam0->f_251, 0))
	{
		ANIMSCENE::RESET_ANIM_SCENE(iParam0->f_251, 0);
	}
	if (ANIMSCENE::_0x25557E324489393C(iParam0->f_252) && ANIMSCENE::_0xCBFC7725DE6CE2E0(iParam0->f_252, 0))
	{
		ANIMSCENE::RESET_ANIM_SCENE(iParam0->f_252, 0);
	}
}

void func_150(var uParam0)
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
	if (func_11(&(uParam0->f_13)))
	{
		func_14(&(uParam0->f_13));
	}
}

void func_151(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
	}
	if (((*Global_1396257)[iParam0 /*638*/])->f_631)
	{
		func_267(0, -1);
	}
	func_268();
	((*Global_1396257)[iParam0 /*638*/])->f_631 = 0;
	Global_1415398->f_2 = (Global_1415398->f_2 - 1);
	Global_1935183->f_28 = 0;
}

void func_152(int iParam0, var uParam1)
{
	if (!func_41(iParam0))
	{
		return;
	}
	func_269(iParam0, uParam1);
}

void func_153(int iParam0, int iParam1)
{
	if (!func_41(iParam0))
	{
		return;
	}
	func_270(iParam0, iParam1);
}

void func_154(var uParam0, var uParam1, int iParam2, float fParam3, bool bParam4)
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

int func_155(int iParam0, int iParam1)
{
	if (func_217() != -1)
	{
		return 0;
	}
	if (!func_226(iParam0))
	{
		return 0;
	}
	if (!func_271(iParam0) && iParam1)
	{
		return 0;
	}
	return func_227(iParam0, 1);
}

void func_156(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_226(iParam0))
	{
		return;
	}
	if (!func_227(iParam0, 1))
	{
		return;
	}
	if (!func_227(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_271(iParam0)) && func_272(iParam0))
	{
		return;
	}
	func_273(iParam0, 1);
	func_274(iParam0);
	if (func_229(func_228(iParam0)))
	{
		iVar0 = func_60(iParam0);
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
		func_273(iParam0, 16);
	}
	if (func_227(iParam0, 128) && !bParam3)
	{
		func_275(iParam0, 0);
	}
}

int func_157(var uParam0)
{
	if (ENTITY::_0x1FF441D7954F8709(*uParam0))
	{
		ENTITY::_0xD2B9C78537ED5759(*uParam0);
		return 0;
	}
	if (ENTITY::_0x1FF441D7954F8709(*uParam0))
	{
		return 0;
	}
	return 1;
}

void func_158(var uParam0)
{
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_250))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_250);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_251))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_251);
	}
	func_201(uParam0);
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_226))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(uParam0->f_226, 0f);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_232))
	{
		func_276(uParam0->f_232);
		VOLUME::_0x43F867EF5C463A53(uParam0->f_232);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_235))
	{
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_235);
		POPULATION::_0xA1CFB35069D23C23(uParam0->f_235);
		VOLUME::_0x43F867EF5C463A53(uParam0->f_235);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_233))
	{
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_233);
		POPULATION::_0xA1CFB35069D23C23(uParam0->f_233);
		VOLUME::_0x43F867EF5C463A53(uParam0->f_233);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_236))
	{
		VOLUME::_0x43F867EF5C463A53(uParam0->f_236);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_241))
	{
		VOLUME::_0x43F867EF5C463A53(uParam0->f_241);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_239))
	{
		func_277(&(uParam0->f_644), uParam0->f_239, 0);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_240))
	{
		VOLUME::_0x43F867EF5C463A53(uParam0->f_240);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_238))
	{
		PATHFIND::_0x5A4E1A41E3A02AD0(uParam0->f_238, 6, 0);
		VOLUME::_0x43F867EF5C463A53(uParam0->f_238);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_242))
	{
		VOLUME::_0x43F867EF5C463A53(uParam0->f_242);
	}
}

int func_159()
{
	int iVar0;

	if (func_217() == -1)
	{
		if (SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(5))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (((*Global_1392915)[iVar0 /*12*/])->f_1 != -1)
				{
					if (func_278(((*Global_1392915)[iVar0 /*12*/])->f_4))
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

int func_160(int iParam0)
{
	return (Global_1898164->f_1[iParam0 /*5*/])->f_2;
}

bool func_161()
{
	return Global_1310750->f_16077 != 0;
}

bool func_162(var uParam0, int iParam1)
{
	return func_279(*uParam0, iParam1);
}

int func_163(var uParam0, int iParam1, var uParam2)
{
	switch (*uParam2)
	{
		case 0:
			if (ANIMSCENE::_0x25557E324489393C(*uParam0))
			{
				return 1;
			}
			else
			{
				*uParam2 = 1;
			}
			break;
		case 1:
			*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(func_280(iParam1), 0, func_165(iParam1), false, true);
			*uParam2 = 2;
			break;
		case 2:
			if (ANIMSCENE::_0x25557E324489393C(*uParam0))
			{
				*uParam2 = 3;
			}
			break;
		case 3:
			*uParam2 = 0;
			return 1;
	}
	return 0;
}

int func_164(var uParam0, var uParam1, int iParam2, var uParam3)
{
	switch (*uParam1)
	{
		case 0:
			if (!ANIMSCENE::_0x477122B8D05E7968(*uParam0, 1, 0) && !ANIMSCENE::_0x59606519FF9D3EC2(*uParam0, 1))
			{
				*uParam1 = 1;
			}
			else if (ANIMSCENE::_0x477122B8D05E7968(*uParam0, 1, 0))
			{
				return 1;
			}
			break;
		case 1:
			ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
			*uParam1 = 2;
			break;
		case 2:
			if (ANIMSCENE::_0x477122B8D05E7968(*uParam0, 1, 0))
			{
				*uParam1 = 3;
			}
			break;
		case 3:
			func_281(uParam0, iParam2, uParam3);
			*uParam1 = 4;
			break;
		case 4:
			*uParam1 = 0;
			return 1;
	}
	return 0;
}

char* func_165(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_3();
		case 1:
			return func_6();
		case 2:
			return func_5();
		case 3:
			return func_133();
		case 4:
			return func_137();
		case 5:
			return "";
	}
	return "";
}

var func_166()
{
	return &Global_1899515;
}

int func_167(int iParam0, int iParam1, float fParam2, bool bParam3)
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

void func_168(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_175() - fParam1);
	func_282(uParam0, 1);
	func_283(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_169(int iParam0)
{
	return iParam0 != -15;
}

void func_170(int iParam0)
{
	(Global_40.f_11623[iParam0 /*8*/])->f_5++;
	(Global_40.f_11623[iParam0 /*8*/])->f_2 = func_166();
}

int func_171(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_RESET_FLAG(iParam0, 49, true);
		return 1;
	}
	return 0;
}

bool func_172(int iParam0, int iParam1, int iParam2, int iParam3)
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

bool func_173(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_174(var uParam0)
{
	return func_173(*uParam0, 2);
}

float func_175()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_176(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_177(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_178(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_278(((*Global_1835011)[iParam0 /*74*/])->f_1);
}

int func_179(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_284(((*Global_1835011)[iParam0 /*74*/])->f_1);
}

int func_180(int iParam0)
{
	int iVar0;

	iVar0 = func_285();
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

int func_181(var uParam0, var uParam1, float fParam2, float fParam3)
{
	vector3 vVar0;
	vector3 vVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) + vVar0 * Vector(fParam2, fParam2, fParam2) };
	if (func_286(uParam1, vVar3, fParam3))
	{
		return 1;
	}
	return 0;
}

int func_182(var uParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5)
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
	if (!func_287(uParam2, &iVar1, vVar5, fParam3, fParam4))
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
		if (!func_288(iVar1, 0))
		{
			func_289(&iVar1, vVar8, 1083179008);
		}
		return 1;
	}
	return 0;
}

int func_183(var uParam0)
{
	if (!func_11(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000f));
	}
	if (func_174(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_290() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

bool func_184()
{
	return Global_1392040->f_6;
}

int func_185()
{
	if (Global_1914319->f_18941.f_17)
	{
		return 1;
	}
	return 0;
}

int func_186(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			iVar0 = -1555421003;
			break;
		case 1:
			iVar0 = -1543059912;
			break;
		case 2:
			iVar0 = -781832595;
			break;
		case 3:
			iVar0 = -1543059912;
			break;
	}
	return iVar0;
}

void func_187(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_188(int iParam0)
{
	if (iParam0->f_1 == 2)
	{
		return 63;
	}
	else if (iParam0->f_1 == 0)
	{
		return 60;
	}
	else if (iParam0->f_1 == 3)
	{
		return 66;
	}
	return -1;
}

int func_189(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_291(uParam2, 1, iVar0);
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
			if (func_292(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_293(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_294(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_293(iParam0, uParam2, *uParam3);
					return 1;
				}
				else if (func_295(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_293(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_296(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_293(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_26 && func_297(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_293(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_298(uParam2, 1065353216))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_299(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_293(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_300(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_293(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_301(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_293(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			else if (func_301(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_293(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_302(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_293(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || uParam2->f_12 < 20f)
			{
				if (func_303(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_293(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_304(uParam2, 4000))
				{
					if ((func_305(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_306(uParam2, iParam0)) && func_307(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_293(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_305(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_306(uParam2, iParam0)) && func_307(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_293(iParam0, uParam2, *uParam3);
					return 1;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_308(iParam0, Global_1935630->f_41))
							{
								func_309();
								*uParam3 = 2;
								func_293(iParam0, uParam2, *uParam3);
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
						if (func_308(iParam0, Global_1935630->f_41))
						{
							func_309();
							*uParam3 = 2;
							func_293(iParam0, uParam2, *uParam3);
							return 1;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_310(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_290() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_309();
						*uParam3 = 2;
						func_293(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_311())
					{
						if (func_308(iParam0, Global_1935630->f_42))
						{
							func_309();
							*uParam3 = 2;
							func_293(iParam0, uParam2, *uParam3);
							return 1;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_312(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_293(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_313(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_293(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_314(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_293(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_315(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_293(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_316(uParam2, 4000))
				{
					if (func_317(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_293(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_318(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_293(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_319(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_293(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
	}
	return 0;
}

void func_190(int* iParam0)
{
	func_320(iParam0, &(iParam0->f_21));
}

int func_191()
{
	if (PED::_0xA911EE21EDF69DAF(Global_35) || func_321())
	{
		return 1;
	}
	return 0;
}

int func_192(var uParam0, bool bParam1, bool bParam2)
{
	if (!bParam1 || func_241(uParam0->f_6))
	{
		if (MISC::IS_BIT_SET(*uParam0, 0))
		{
			if (!bParam2)
			{
				return 1;
			}
			if (func_322(uParam0->f_6, bParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_193(var uParam0, int* iParam1, float fParam2, var uParam3, int iParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	var uVar0;
	var uVar1;

	uVar0 = iParam9;
	func_323(&uVar0);
	if (func_279(uVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	uVar1 = func_197(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_279(uVar0, 134217728))
	{
		func_324(iParam1, uParam3, uParam0);
	}
	if (!*iParam4)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 25))
		{
			if (MISC::IS_BIT_SET(*iParam1, 24))
			{
				if (!func_325(558))
				{
					func_326(558, 0);
				}
				MISC::SET_BIT(iParam1, 24);
				MISC::SET_BIT(iParam1, 25);
			}
		}
	}
	return uVar1;
}

void func_194(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return;
	}
	if (func_207(*uParam2, iParam3))
	{
		return;
	}
	(Global_40.f_11623[iParam0 /*8*/])->f_6++;
	if ((Global_40.f_11623[iParam0 /*8*/])->f_6 == 1 && func_328(func_327(-1342635612)) < 5)
	{
		func_329(func_327(-1342635612), 1);
	}
	(Global_40.f_11623[iParam0 /*8*/])->f_3 = func_166();
	func_187(uParam2, iParam3);
	((*Global_1396257)[iParam0 /*638*/])->f_631 = 1;
}

int func_195(int iParam0)
{
	int iVar0;

	switch (iParam0->f_1)
	{
		case 2:
			iVar0 = 1;
			break;
		case 0:
			iVar0 = 2;
			break;
		case 3:
			iVar0 = 12;
			break;
	}
	return iVar0;
}

void func_196(int iParam0, int iParam1)
{
	if (&Global_40.f_11623[iParam0 /*8*/] != iParam1)
	{
		Global_40.f_11623[iParam0 /*8*/] = iParam1;
	}
}

int func_197(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		func_323(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::_0x92A78D0BEDB332A3(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar8 = func_330(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
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
			func_92(&(iParam1->f_13));
		}
		if (func_331(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_332(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_197(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_333(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317, true))
						{
							func_334(*uParam0, 1, 1);
						}
					}
					else if (func_335(iParam1, 22))
					{
						func_334(*uParam0, 0, 1);
					}
				}
				if (func_336(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_337(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_338(iParam8);
					if (func_339(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET(uParam3[iParam1->f_1 /*17*/], 20))
								{
									func_340(uParam3);
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
					func_341(iParam1, uParam3, fVar8);
					if (func_342(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						func_343(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_344(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_336(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_345(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_339(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_337(uParam0, func_336(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_338(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_343(uParam3, 0, 0, 1, 1);
					}
					func_346(iParam1, 1);
				}
				func_341(iParam1, uParam3, fVar8);
				if (func_344(uParam0, iParam1, fParam4, bVar6))
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
			func_320(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_198(var uParam0)
{
	func_44(&(uParam0->f_253), 8);
	func_44(&(uParam0->f_253), 16);
	func_44(&(uParam0->f_253), 32);
	func_44(&(uParam0->f_253), 64);
}

int func_199(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0->f_1;
	switch (iVar0)
	{
		case 0:
			iVar1 = 0;
			while (iVar1 < iParam0->f_257)
			{
				if (func_349(iParam0->f_214[iVar1], func_347(iVar1), func_348(iVar1), 20000, 1f, 360f))
				{
					iVar2++;
					iParam0->f_219[iVar1] = TASK::_0xF533D68FF970D190(func_347(iVar1), func_350(iVar1), 0.25f, 0, 0);
					TASK::_0x5AF19B6CC2115D34(&(iParam0->f_219[iVar1]), 16, 1);
					TASK::_TASK_USE_SCENARIO_POINT(&(iParam0->f_214[iVar1]), &(iParam0->f_219[iVar1]), 0, -1, 0, 1, func_350(iVar1), 0, -1082130432, 0);
				}
				else
				{
					iVar2 = 0;
				}
				iVar1++;
			}
			break;
		case 2:
			iVar1 = 0;
			while (iVar1 < iParam0->f_257)
			{
				if (func_349(iParam0->f_214[iVar1], func_351(iVar1), func_352(iVar1), 20000, 1056964608, 1092616192))
				{
					iVar2++;
					TASK::_TASK_START_SCENARIO_IN_PLACE(&(iParam0->f_214[iVar1]), func_353(iVar1), -1, 1, 0, -1082130432, 0);
				}
				else
				{
					iVar2 = 0;
				}
				iVar1++;
			}
			break;
		case 3:
			iVar1 = 0;
			while (iVar1 < iParam0->f_257)
			{
				if (func_349(iParam0->f_214[iVar1], func_354(iVar1), func_355(iVar1), 20000, 1056964608, 1092616192))
				{
					iVar2++;
					TASK::_TASK_START_SCENARIO_IN_PLACE(&(iParam0->f_214[iVar1]), func_356(iVar1), -1, 1, 0, -1082130432, 0);
				}
				else
				{
					iVar2 = 0;
				}
				iVar1++;
			}
			break;
	}
	if (iVar2 == iParam0->f_257)
	{
		return 1;
	}
	return 0;
}

int func_200(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iParam0->f_257)
	{
		if (func_9(&(iParam0->f_214[iVar0]), 0))
		{
			if (!PED::IS_PED_FLEEING(&(iParam0->f_214[iVar0])))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_201(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(iParam0->f_214[iVar0])) && !ENTITY::IS_ENTITY_DEAD(&(iParam0->f_214[iVar0])))
		{
			if (TASK::PED_HAS_USE_SCENARIO_TASK(&(iParam0->f_214[iVar0])))
			{
				TASK::CLEAR_PED_TASKS(&(iParam0->f_214[iVar0]), 1, 0);
			}
			func_141(&(iParam0->f_214[iVar0]));
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(iParam0->f_214[iVar0]), false);
			PED::_0x39A2FC5AF55A52B1(&(iParam0->f_214[iVar0]), -1);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0->f_214[iVar0]);
		}
		iVar0++;
	}
}

int func_202(var uParam0)
{
	if (func_9(uParam0->f_226, 0))
	{
		if (ANIMSCENE::_0x25557E324489393C(uParam0->f_250))
		{
			if (((((((((ANIMSCENE::_0x1F0E401031E20146(uParam0->f_250, func_100()) || ANIMSCENE::_0x1F0E401031E20146(uParam0->f_250, func_104())) || ANIMSCENE::_0x1F0E401031E20146(uParam0->f_250, func_105())) || ANIMSCENE::_0x1F0E401031E20146(uParam0->f_250, func_106())) || ANIMSCENE::_0x1F0E401031E20146(uParam0->f_250, func_107())) || ANIMSCENE::_0x1F0E401031E20146(uParam0->f_250, func_108())) || ANIMSCENE::_0x1F0E401031E20146(uParam0->f_250, func_109())) || ANIMSCENE::_0x1F0E401031E20146(uParam0->f_250, func_110())) || ANIMSCENE::_0x1F0E401031E20146(uParam0->f_250, func_112())) || ANIMSCENE::_0x1F0E401031E20146(uParam0->f_250, func_114()))
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_203(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(iParam0, iParam1);
	if (iVar0 == iParam2)
	{
		if (func_357())
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
			iVar0 = func_358(func_357(), iParam0, (iParam1 - 1));
		}
	}
	return iVar0;
}

void func_204(var uParam0)
{
	if (func_34(uParam0->f_253, 1048576))
	{
		PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "MayorConvo");
		PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), uParam0->f_226, "SPECIAL_PED_LIGHTWEIGHT_1_1", 0f, 0f, 0f, 0, "MayorBubble");
		func_44(&(uParam0->f_253), 1048576);
	}
}

int func_205(var uParam0, int iParam1)
{
	if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
	{
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::_0x0C7A2289A5C4D7C9(iParam1, *uParam0);
		return 1;
	}
	return 0;
}

char* func_206(int iParam0)
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

bool func_207(var uParam0, var uParam1)
{
	return (uParam0 && uParam1) != 0;
}

void func_208(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_209(vector3 vParam0, float fParam3, var uParam4, bool bParam5, int iParam6, int iParam7, bool bParam8, float fParam9)
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
	if (func_359(vParam0))
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
		if (func_360(vParam0))
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
	func_361(iVar0, bParam8);
	return iVar0;
}

void func_210(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	MISC::_0x2FCD528A397E5C88(iParam0, iVar0);
}

int func_211()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

var func_212(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || BUILTIN::SHIFT_LEFT(iParam0 & 1023, 5)) || BUILTIN::SHIFT_LEFT(iParam1 & 16383, 15));
}

int func_213(int iParam0)
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

int func_214(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	int iVar1;

	if (!func_362(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_211())
	{
		return -1;
	}
	uVar0 = func_212(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_363(iVar1, 0);
	func_364(iVar1, 0);
	func_269(iVar1, 0);
	func_270(iVar1, 0);
	func_365(iVar1, uVar0);
	if (iParam4 != 0)
	{
		func_366(iVar1, iParam4);
	}
	return iVar1;
}

int func_215(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_3;
	}
	return 0;
}

int func_216(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_4;
	}
	return 0;
}

int func_217()
{
	return Global_1572887->f_12;
}

bool func_218(var uParam0, int iParam1, char* sParam2)
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

void func_219(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_224(&(uParam0->f_1), 256);
	}
	else
	{
		func_225(&(uParam0->f_1), 256);
	}
}

void func_220(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_225(uParam0, 16);
	}
	else
	{
		func_224(uParam0, 67108864);
		func_224(uParam0, 16);
	}
}

void func_221(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_224(&(uParam0->f_1), 128);
	}
	else
	{
		func_225(&(uParam0->f_1), 128);
	}
}

void func_222(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_225(uParam0, 256);
	}
	else
	{
		func_224(uParam0, 256);
	}
}

void func_223(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_225(uParam0, 268435456);
	}
	else
	{
		func_224(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_225(uParam0, 1073741824);
	}
	else
	{
		func_224(uParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_225(uParam0, 536870912);
	}
	else
	{
		func_224(uParam0, 536870912);
	}
}

void func_224(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_225(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_226(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

bool func_227(int iParam0, int iParam1)
{
	if (func_217() != -1)
	{
		return false;
	}
	if (!func_226(iParam0))
	{
		return false;
	}
	return (Global_24886[iParam0 /*2*/] && iParam1) != 0;
}

int func_228(int iParam0)
{
	if (!func_226(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/];
}

bool func_229(int iParam0)
{
	return iParam0 != 0;
}

int func_230(int iParam0)
{
	int iVar0;

	iVar0 = func_60(iParam0);
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

int func_231(int iParam0)
{
	if (!func_226(iParam0))
	{
		return 0;
	}
	return _NAMESPACE48::_0xA00DF706C60173D1(Global_1895087[iParam0 /*3*/]);
}

float func_232(int iParam0)
{
	float fVar0;

	fVar0 = 0f;
	switch (iParam0)
	{
		case 0:
			fVar0 = 179.6551f;
			break;
	}
	return fVar0;
}

int func_233(int iParam0)
{
	int iVar0;

	iVar0 = -781832595;
	switch (iParam0)
	{
		case 0:
			iVar0 = -1555421003;
			break;
		case 1:
			iVar0 = -1543059912;
			break;
		case 2:
			iVar0 = -781832595;
			break;
		case 3:
			iVar0 = -1543059912;
			break;
	}
	return iVar0;
}

int func_234(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	if (!func_367(iParam0, 1))
	{
		return 0;
	}
	if (func_229(func_228(iParam0)))
	{
		iVar1 = func_60(iParam0);
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
	if ((iParam4 && !func_271(iParam0)) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 171, bParam5);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	func_368(iParam0, 1);
	func_369(iParam0);
	if (bParam3)
	{
		func_368(iParam0, 16);
	}
	if (!bParam2)
	{
	}
	return iVar0;
}

int func_235(var uParam0, int iParam1)
{
	if (*uParam0 >= 3 && *uParam0 <= 7)
	{
		return func_370(iParam1);
	}
	if (*uParam0 >= 8 && *uParam0 <= 12)
	{
		return func_371(iParam1);
	}
	if (*uParam0 >= 14 && *uParam0 <= 18)
	{
		return func_372(iParam1);
	}
	return 3;
}

Vector3 func_236(var uParam0, int iParam1)
{
	if (*uParam0 >= 3 && *uParam0 <= 7)
	{
		return func_347(iParam1);
	}
	if (*uParam0 >= 8 && *uParam0 <= 12)
	{
		return func_351(iParam1);
	}
	if (*uParam0 >= 14 && *uParam0 <= 18)
	{
		return func_354(iParam1);
	}
	return 0f, 0f, 0f;
}

float func_237(var uParam0, int iParam1)
{
	if (*uParam0 >= 3 && *uParam0 <= 7)
	{
		return func_348(iParam1);
	}
	if (*uParam0 >= 8 && *uParam0 <= 12)
	{
		return func_352(iParam1);
	}
	if (*uParam0 >= 14 && *uParam0 <= 18)
	{
		return func_355(iParam1);
	}
	return 0f;
}

int func_238(var uParam0, int iParam1)
{
	if (*uParam0 >= 3 && *uParam0 <= 7)
	{
		return func_373(iParam1);
	}
	if (*uParam0 >= 8 && *uParam0 <= 12)
	{
		return func_374(iParam1);
	}
	if (*uParam0 >= 14 && *uParam0 <= 18)
	{
		return func_375(iParam1);
	}
	return 1;
}

int func_239(var uParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, bool bParam7, bool bParam8)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		BUILTIN::WAIT(0);
		if (!bParam7)
		{
			*uParam0 = func_376(iParam1, vParam2, fParam5, 0, 1, iParam6, 1, 1, 1, 0, 0, 0, 0);
		}
		else
		{
			*uParam0 = func_376(iParam1, vParam2, fParam5, 0, 1, iParam6, 1, 1, bParam8, 1, 1, 0, 0);
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

int func_240()
{
	if (func_217() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == joaat("player_zero"))
	{
		return 1;
	}
	return 0;
}

bool func_241(int iParam0)
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

void func_242(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	int iVar0;

	if (iParam3 && !func_241(iParam0))
	{
		return;
	}
	iVar0 = func_377(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, MISC::_CREATE_VAR_STRING(2, sParam1, sParam2));
}

void func_243(int iParam0, char* sParam1, int iParam2)
{
	int iVar0;

	if (iParam2 && !func_241(iParam0))
	{
		return;
	}
	iVar0 = func_377(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, sParam1);
}

void func_244(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (iParam2 && !func_241(iParam0))
	{
		return;
	}
	iVar0 = func_377(iParam0);
	if (bParam1)
	{
		func_378(iParam0, 4);
		func_379(iVar0, 1);
		func_380(iVar0, 1);
	}
	else
	{
		func_381(iParam0, 4);
		func_380(iVar0, 0);
	}
}

void func_245(int* iParam0, char* sParam1)
{
	if (func_241(iParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		func_243(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_247(iParam0, 1);
}

bool func_246(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

void func_247(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

void func_248(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 && !func_241(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_377(*uParam0);
	if (((*Global_1945938)[iVar0 /*18*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && iParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_382(iVar0);
	*uParam0 = 0;
}

bool func_249(int iParam0, int iParam1)
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

int func_250(int iParam0, int iParam1)
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

bool func_251(int iParam0, int iParam1)
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
	if (!func_249(iParam0, iVar0))
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

void func_252(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

void func_253()
{
	if (!func_383(&Global_1327479))
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
	func_384(0);
	Global_1327479 = -1;
	Global_1310750->f_16075 = 0;
	Global_1310750->f_16076 = 0;
	Global_1310750->f_16103 = { 0f, 0f, 0f };
}

void func_254(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	if (func_385() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0 /*9*/];
		if (((func_383(iVar1) && !func_386(iVar1, iParam2)) && (!bParam3 || !func_387(iVar1))) && (!bParam4 || !func_388(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_389(iVar0);
			}
		}
		iVar0++;
	}
}

void func_255(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = MISC::GET_GAME_TIMER();
	func_390(iParam0, iParam1, bParam2);
}

void func_256(int iParam0, int iParam1)
{
	iParam0->f_640 = iParam1;
}

void func_257(int iParam0)
{
	if (func_155(483, 0))
	{
		func_156(483, 0, 1, 0, 0);
	}
	if (ANIMSCENE::_0x25557E324489393C(iParam0->f_250))
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(iParam0->f_250, "internal_loop", true, false);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(iParam0->f_250, "internal_loop_end", true, false);
	}
	if (ANIMSCENE::_0x25557E324489393C(iParam0->f_251))
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(iParam0->f_251, "internal_loop", true, false);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(iParam0->f_251, "internal_loop_end", true, false);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_226))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iParam0->f_226, 0f);
		PED::_0x39A2FC5AF55A52B1(iParam0->f_226, -1);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iParam0->f_226));
	}
	func_158(iParam0);
}

bool func_258(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_259(int iParam0, int iParam1, int iParam2)
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

void func_260(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
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
	func_391(0);
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

var func_261()
{
	return Global_1900383->f_393;
}

void func_262()
{
	CAM::_0x05AB44D906738426();
	CAM::_0x8370D34BD2E60B73();
	CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	if (Global_1935689->f_1)
	{
		func_392(0);
	}
}

void func_263()
{
	Global_1905944->f_5695 = 1;
}

float func_264(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

int func_265(int iParam0, vector3 vParam1, float fParam4, float fParam5, float fParam6, bool bParam7)
{
	float fVar0;

	fVar0 = func_393(ENTITY::GET_ENTITY_HEADING(iParam0));
	fParam4 = func_393(fParam4);
	if (ENTITY::IS_ENTITY_AT_COORD(iParam0, vParam1, fParam5, fParam5, 2f, false, bParam7, 0) && MISC::ABSF((fVar0 - fParam4)) <= fParam6)
	{
		return 1;
	}
	return 0;
}

var func_266(var uParam0, var uParam1)
{
	return AUDIO::_PLAY_AMBIENT_SPEECH1(uParam0, uParam1);
}

void func_267(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_394(&Global_0, 8);
	}
	if (!func_395() || func_217() != -1)
	{
		return;
	}
	func_394(&Global_0, 1);
}

void func_268()
{
	AUDIO::_0x9428447DED71FC7E("special_ped_scenes");
}

void func_269(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_3 = iParam1;
}

void func_270(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_4 = iParam1;
}

bool func_271(int iParam0)
{
	if (!func_226(iParam0))
	{
		return false;
	}
	return ((*Global_1895087)[iParam0 /*3*/])->f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

bool func_272(int iParam0)
{
	if (!func_226(iParam0))
	{
		return false;
	}
	return SCRIPTS::_DOES_THREAD_EXIST(((*Global_1895087)[iParam0 /*3*/])->f_2);
}

void func_273(int iParam0, int iParam1)
{
	if (func_217() != -1)
	{
		return;
	}
	if (!func_226(iParam0))
	{
		return;
	}
	Global_24886[iParam0 /*2*/] = (&Global_24886[iParam0 /*2*/] - (Global_24886[iParam0 /*2*/] && iParam1));
}

void func_274(int iParam0)
{
	int iVar0;

	if (!func_226(iParam0))
	{
		return;
	}
	iVar0 = func_230(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
	((*Global_1895087)[iParam0 /*3*/])->f_2 = 0;
}

int func_275(int iParam0, bool bParam1)
{
	if (!func_226(iParam0))
	{
		return 0;
	}
	if (!func_227(iParam0, 2))
	{
		return 0;
	}
	if (func_228(iParam0) == 0)
	{
		return 1;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(func_60(iParam0)))
	{
		return 1;
	}
	if (func_227(iParam0, 1) && !bParam1)
	{
		func_368(iParam0, 128);
		return 1;
	}
	func_273(iParam0, 129);
	func_274(iParam0);
	_NAMESPACE48::_0xFC77C5B44D5FF7C0(func_60(iParam0));
	func_396(iParam0, 0);
	return 1;
}

void func_276(int iParam0)
{
	vector3 vVar0;

	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return;
	}
	vVar0 = { VOLUME::_0xF70F00013A62F866(iParam0) };
	func_397(vVar0, 0);
}

void func_277(var uParam0, int iParam1, bool bParam2)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam1))
	{
		return;
	}
	PED::CLEAR_PED_NON_CREATION_AREA();
	POPULATION::_0xA1CFB35069D23C23(iParam1);
	POPULATION::_0x74C2B3DC0B294102(iParam1);
	if (PED::_0x91A5F9CBEBB9D936(*uParam0))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(*uParam0, bParam2);
	}
}

bool func_278(int iParam0)
{
	int iVar0;

	iVar0 = func_398(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_279(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

char* func_280(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_399();
		case 1:
			return func_400();
		case 2:
			return func_401();
		case 3:
			return func_402();
		case 4:
			return func_403();
		case 5:
			return func_99();
	}
	return "";
}

void func_281(var uParam0, int iParam1, var uParam2)
{
	ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam0, "internal_loop", false, false);
	ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam0, "internal_loop_end", false, false);
	switch (iParam1)
	{
		case 0:
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(*uParam0, func_404(), func_405(), 2);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "cs_nicholastimmins", uParam2->f_226, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "p_chaireagle01x", uParam2->f_228, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "p_cigar02x", uParam2->f_229, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "p_matchstick01x", uParam2->f_230, 0);
			break;
		case 1:
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(*uParam0, func_406(), func_407(), 2);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "cs_nicholastimmins", uParam2->f_226, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "P_CS_NEWSPAPER_02X", uParam2->f_231, 0);
			break;
		case 2:
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(*uParam0, func_408(), func_409(), 2);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "cs_nicholastimmins", uParam2->f_226, 0);
			break;
		case 3:
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(*uParam0, func_410(), func_411(), 2);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "cs_nicholastimmins", uParam2->f_226, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "p_chaireagle_01x", uParam2->f_228, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "p_cigar02x", uParam2->f_229, 0);
			if (!func_45())
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam0, "b_PlayerArthur", true, false);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "ARTHUR", Global_35, 0);
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "JOHN", Global_35, 0);
			}
			break;
		case 4:
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(*uParam0, func_412(), func_413(), 2);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "cs_nicholastimmins", uParam2->f_226, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "P_CS_NEWSPAPER_02X", uParam2->f_231, 0);
			if (!func_45())
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam0, "b_PlayerArthur", true, false);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "ARTHUR", Global_35, 0);
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "JOHN", Global_35, 0);
			}
			break;
		case 5:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "CS_NicholasTimmins", uParam2->f_226, 0);
			if (!func_45())
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam0, "b_PlayerArthur", true, false);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "ARTHUR", Global_35, 0);
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "JOHN", Global_35, 0);
			}
			break;
	}
}

void func_282(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_283(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_284(int iParam0)
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
		iVar0 = func_414(iParam0);
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

var func_285()
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

int func_286(var uParam0, vector3 vParam1, float fParam4)
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

int func_287(var uParam0, var uParam1, vector3 vParam2, float fParam5, float fParam6)
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
					if (func_415(Global_35, *uParam1, 0))
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

int func_288(int iParam0, bool bParam1)
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

void func_289(int iParam0, vector3 vParam1, float fParam4)
{
	if (!func_139(*iParam0, 518218985))
	{
		TASK::CLEAR_PED_TASKS(*iParam0, 1, 0);
		TASK::_TASK_SMART_FLEE_STYLE_COORD(*iParam0, vParam1, 6, 0, fParam4, -1, 0);
	}
}

int func_290()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

void func_291(var uParam0, bool bParam1, int iParam2)
{
	func_416(iParam2);
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
		uParam0->f_13 = func_417(0);
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
							func_225(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_418(1))
						{
							func_225(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_418(1) || *uParam0 & 8192 != 0))
				{
					func_224(uParam0, 33554432);
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
			if (func_419(uParam0))
			{
				uParam0->f_15 = func_290();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_290() - uParam0->f_15) > 500)
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
	func_420(uParam0);
}

int func_292(int iParam0, var uParam1)
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
			if (!func_421(iParam0, uParam1, iVar2))
			{
				return 0;
			}
			if (func_422(iParam0, iVar2) <= func_423(uParam1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_293(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_424(iParam2, 1, 1, 1, 0))
	{
		func_225(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_425(uParam1, 1);
	func_426();
}

int func_294(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_427(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_428(uParam1);
			if (func_429(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = func_430(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_425(uParam1, 1);
						return 1;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_425(uParam1, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_295(int iParam0, int iParam1, var uParam2)
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
	if (func_431(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_428(uParam2);
		if (func_429(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > func_430(uParam2)
				{
					func_425(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_296(int iParam0, var uParam1)
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
	if (func_421(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_430(uParam1)
		{
			fVar3 = func_428(uParam1);
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

int func_297(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_432(bParam1, iParam2, bParam3);
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

int func_298(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_290();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return 1;
	}
	return 0;
}

int func_299(var uParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_433(uParam2);
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
			if (func_307(uParam2, iParam1))
			{
				func_425(uParam2, 1);
				return 1;
			}
		}
	}
	return 0;
}

int func_300(var uParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_12 < IntToFloat(func_434(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && !WEAPON::_0x5809DBCA0A37C82B(Global_1935630->f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_307(uParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_425(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_301(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_435(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(217247011, vVar0, uParam2->f_22))
				{
					func_425(uParam2, 1);
					return 1;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(956330317, vVar0, uParam2->f_27))
				{
					func_425(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-966930978, vVar0, uParam2->f_22))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("weapon_thrown_dynamite"), uParam2->f_26, &vVar4, 0, 0);
					if (func_436(iParam1, vVar0, vVar4))
					{
						func_425(uParam2, 1);
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
					func_425(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-966930978, vVar0, uParam2->f_22))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("weapon_thrown_dynamite"), uParam2->f_26, &vVar7, 0, 0);
					if (func_436(iParam1, vVar0, vVar7))
					{
						func_425(uParam2, 1);
						return 1;
					}
				}
				break;
		}
	}
	return 0;
}

int func_302(int iParam0, var uParam1)
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
		if (!func_421(iParam0, uParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_437(&(Global_1935630->f_34[iVar0]));
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_438(&(Global_1935630->f_34[iVar0])))
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
			if (func_439(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_440(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_441(uParam1, iParam0, fVar1, iVar0))
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

int func_303(int iParam0, var uParam1)
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

int func_304(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_290();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

int func_305(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_442(iVar0, &iVar2))
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
	if (func_443(iVar0, iParam0))
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

int func_306(var uParam0, int iParam1)
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

int func_307(var uParam0, int iParam1)
{
	if (func_444(uParam0))
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

int func_308(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return 1;
		}
		if (func_62(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_309()
{
}

int func_310(var uParam0, int iParam1)
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
		if (func_445(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_290();
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
						if (func_264(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_9 = func_290();
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

int func_311()
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
	if ((func_290() - Global_1935630->f_43) >= 10000)
	{
		return 0;
	}
	return 1;
}

int func_312(var uParam0, int iParam1)
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
	fVar0 = func_423(uParam0);
	if (uParam0->f_12 > func_446(uParam0) && uParam0->f_12 > fVar0)
	{
		return 0;
	}
	iVar2 = func_447(iParam1);
	iVar1 = func_448(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, Global_35, 1, 0) == 1)) || ((PED::_0x06087579E7AA85A9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, uParam0->f_14, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, uParam0->f_14, 1, 0) == 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_313(int iParam0, int iParam1, var uParam2)
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
	return func_449(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

int func_314(int iParam0, var uParam1)
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
		if (func_450(iParam0, uParam1, 1))
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
					if (!func_451(uParam1, iParam0))
					{
						if (func_264(iVar4, Global_36, 1) < 7f)
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

int func_315(int iParam0, var uParam1)
{
	if (!func_452(0))
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

int func_316(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_290();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_317(int iParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_318(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_290();
	}
	else if (func_290() - uParam1->f_4) > func_453(uParam1)
	{
		return func_454(iParam0, uParam1, 0, -1082130432);
	}
	return 0;
}

int func_319(var uParam0, int iParam1)
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

void func_320(int* iParam0, var uParam1)
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
	func_455(iParam0, uParam1, 1);
	func_343(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY((*uParam1)[iVar0 /*17*/], &Var22, 17);
		iVar0++;
	}
}

int func_321()
{
	if (func_456(Global_35) || func_457(Global_35))
	{
		return 1;
	}
	return 0;
}

bool func_322(int iParam0, bool bParam1)
{
	if (bParam1 && !func_241(iParam0))
	{
		return false;
	}
	return !func_458(iParam0, 4);
}

void func_323(var uParam0)
{
	if (*uParam0 & 1 != 0)
	{
		*uParam0 |= 64 | 16 | 16777216;
	}
}

void func_324(int* iParam0, var uParam1, var uParam2)
{
	int iVar0;
	char* sVar1;
	var uVar2;

	iVar0 = func_459(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = ((*uParam1)[iVar0 /*17*/])->f_13;
		uVar2 = ((*uParam1)[iVar0 /*17*/])->f_15;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			func_460(Global_35, *uParam2, sVar1, "", -1082130432, uVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

bool func_325(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_217() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iVar1]), iVar2);
}

void func_326(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_461(iParam0, &iVar0, &iVar1);
	if (!func_462(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_463(iVar0, iVar1);
}

struct<2> func_327(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

int func_328(var uParam0, var uParam1)
{
	var uVar0;

	STATS::STAT_ID_GET_INT(&uParam0, &uVar0);
	return uVar0;
}

void func_329(var uParam0, var uParam1, int iParam2)
{
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

float func_330(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_331(int iParam0, var uParam1, var uParam2)
{
	if (uParam1->f_11 != 0)
	{
		if (func_464(iParam0, uParam1))
		{
			if (!func_279(uParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
				func_343(uParam2, 0, 0, 1, 0);
				func_225(&(uParam1->f_10), 1);
			}
			return 1;
		}
		else if (func_279(uParam1->f_10, 1))
		{
			func_465(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
			func_224(&(uParam1->f_10), 1);
		}
	}
	return 0;
}

int func_332(var uParam0, int* iParam1, var uParam2, float fParam3, var uParam4, char* sParam5, int iParam6, float fParam7)
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
		bVar4 = func_279(uParam4, 32);
		func_455(iParam1, uParam2, 0);
		iVar5 = func_466(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return 1;
		}
		func_343(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_279(uParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_279(uParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_279(uParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_279(uParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_279(uParam4, 8388608) || func_279(uParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_279(uParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_279(uParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_335(iParam1, 4))
		{
			iVar6 |= 1024;
			EVENT::_0xBB1E41DD3D3C6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_335(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_279(uParam4, 67108864))
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
				iParam6 = func_467(uParam0);
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
			if (func_279(uParam4, 268435456))
			{
				iVar8 = func_468(uParam2, 648122183);
				if (iVar8 > -1)
				{
					func_469(iParam1, (*uParam2)[iVar8 /*17*/]);
				}
			}
			if (func_335(iParam1, 23))
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
			if (func_279(uParam4, 2) || func_279(uParam4, 16))
			{
				func_334(*uParam0, 1, 1);
			}
			else
			{
				func_334(*uParam0, 0, 1);
			}
			return 1;
		}
	}
	return 0;
}

void func_333(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297, false);
	}
}

void func_334(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
	}
}

bool func_335(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

int func_336(var uParam0, var uParam1, int iParam2, bool bParam3)
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
		if (func_470(*uParam0, bParam3, bVar2, bVar3))
		{
			return 1;
		}
	}
	return 0;
}

void func_337(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, var uParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_471(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_279(uParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_338(var uParam0)
{
	if (func_279(uParam0, 4))
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
	if (func_279(uParam0, 16384))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -485697785, false);
	}
	if (func_279(uParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -1292666904, false);
		PAD::DISABLE_CONTROL_ACTION(0, 578288361, false);
	}
}

bool func_339(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, var uParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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

	iVar1 = func_472(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = uParam10 & 128 != false;
	bVar7 = uParam10 & 64 != false;
	bVar8 = uParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*uParam0);
	bVar11 = (((PED::_0xA911EE21EDF69DAF(Global_35) || func_473(Global_35)) || func_474(Global_35)) || func_475(Global_35));
	fVar12 = -1f;
	if (func_11(&(iParam1->f_13)))
	{
		fVar12 = func_13(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if (((*uParam4)[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = ((*uParam4)[iVar0 /*17*/])->f_8;
		}
		bVar4 = func_241(((*uParam4)[iVar0 /*17*/])->f_6);
		func_476(*uParam0, (*uParam4)[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET(uParam4[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (func_477(*uParam0, iParam1, (*uParam4)[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_478(iParam12, ((*uParam4)[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						func_343(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_479(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET(uParam4[iVar0 /*17*/], 11))
					{
						func_455(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
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
					if (func_480(iParam1, fParam6, iParam1->f_9))
					{
						func_92(&(iParam1->f_18));
						if (bVar6)
						{
							func_479(uParam4, 0, 0);
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
		func_481(iParam1, fParam2);
	}
	return bVar5;
}

void func_340(var uParam0)
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

void func_341(int* iParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_482((*uParam1)[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET(uParam1[iVar0 /*17*/], 20))
			{
				func_481(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

int func_342(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, -124244224))
		{
			if (func_483(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_484(iParam1, 0);
				func_455(iParam1, uParam2, func_335(iParam1, 6));
				return 1;
			}
		}
	}
	return 0;
}

void func_343(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_241(((*uParam0)[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET(uParam0[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_248(&(((*uParam0)[iVar0 /*17*/])->f_6), 1, 1);
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

int func_344(var uParam0, int* iParam1, float fParam2, bool bParam3)
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
			func_92(&(iParam1->f_18));
			return 0;
		}
		else if (func_11(&(iParam1->f_18)))
		{
			func_14(&(iParam1->f_18));
			return 0;
		}
	}
	if (!func_11(&(iParam1->f_18)))
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
	return func_485(&(iParam1->f_18), fParam2);
	return 1;
}

void func_345(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_476(iParam0, (*uParam2)[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_346(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

Vector3 func_347(int iParam0)
{
	vector3 vVar0;

	switch (iParam0)
	{
		case 0:
			vVar0 = { -1808.908f, -373.3501f, 162.3387f };
			break;
		case 1:
			vVar0 = { -1808.91f, -372.71f, 162.32f };
			break;
	}
	return vVar0;
}

float func_348(int iParam0)
{
	float fVar0;

	switch (iParam0)
	{
		case 0:
			fVar0 = 284.2307f;
			break;
		case 1:
			fVar0 = 92.6596f;
			break;
	}
	return fVar0;
}

int func_349(var uParam0, vector3 vParam1, float fParam4, int iParam5, float fParam6, float fParam7)
{
	int iVar0;

	if (func_9(*uParam0, 0))
	{
		if (func_139(*uParam0, -1098463898) || func_139(*uParam0, 993674639))
		{
			return 0;
		}
		if (!func_265(*uParam0, vParam1, fParam4, fParam6, fParam7, 0))
		{
			if (!func_139(*uParam0, 242628503))
			{
				TASK::CLEAR_PED_TASKS(*uParam0, 1, 0);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vParam1, 1f, iParam5, fParam6, false, 40000f);
				TASK::TASK_ACHIEVE_HEADING(0, fParam4, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar0);
				PED::SET_PED_KEEP_TASK(*uParam0, true);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_350(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			iVar0 = -1426662425;
			break;
		case 1:
			iVar0 = 201363338;
			break;
	}
	return iVar0;
}

Vector3 func_351(int iParam0)
{
	vector3 vVar0;

	switch (iParam0)
	{
		case 0:
			vVar0 = { -1805.405f, -371.9168f, 160.4901f };
			break;
		case 1:
			vVar0 = { -1805.56f, -373.7274f, 160.3914f };
			break;
		case 2:
			vVar0 = { -1805.595f, -374.8352f, 160.3612f };
			break;
		case 3:
			vVar0 = { -1805.926f, -376.052f, 160.3409f };
			break;
		case 4:
			vVar0 = { -1804.244f, -372.0793f, 160.3452f };
			break;
	}
	return vVar0;
}

float func_352(int iParam0)
{
	float fVar0;

	switch (iParam0)
	{
		case 0:
			fVar0 = 132.3116f;
			break;
		case 1:
			fVar0 = 75.5789f;
			break;
		case 2:
			fVar0 = 58.7203f;
			break;
		case 3:
			fVar0 = 54.6217f;
			break;
		case 4:
			fVar0 = 119.06f;
			break;
	}
	return fVar0;
}

int func_353(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			iVar0 = -22664287;
			break;
		case 1:
			iVar0 = 2087366558;
			break;
		case 2:
			iVar0 = 2087366558;
			break;
		case 3:
			iVar0 = 2087366558;
			break;
		case 4:
			iVar0 = -22664287;
			break;
	}
	return iVar0;
}

Vector3 func_354(int iParam0)
{
	vector3 vVar0;

	switch (iParam0)
	{
		case 0:
			vVar0 = { -1781.5f, -384.5139f, 156.9384f };
			break;
		case 1:
			vVar0 = { -1780.587f, -385.0345f, 156.7968f };
			break;
		case 2:
			vVar0 = { -1779.604f, -387.0019f, 156.7149f };
			break;
		case 3:
			vVar0 = { -1775.285f, -382.412f, 156.4505f };
			break;
	}
	return vVar0;
}

float func_355(int iParam0)
{
	float fVar0;

	switch (iParam0)
	{
		case 0:
			fVar0 = 160.8908f;
			break;
		case 1:
			fVar0 = 148.6998f;
			break;
		case 2:
			fVar0 = 100.2494f;
			break;
		case 3:
			fVar0 = 134.7941f;
			break;
	}
	return fVar0;
}

int func_356(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			iVar0 = 2087366558;
			break;
		case 1:
			iVar0 = 2087366558;
			break;
		case 2:
			iVar0 = -22664287;
			break;
		case 3:
			iVar0 = -22664287;
			break;
	}
	return iVar0;
}

int func_357()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
	{
		return 1;
	}
	return 0;
}

int func_358(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_359(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_360(vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, 16384);
}

int func_361(int iParam0, bool bParam1)
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

bool func_362(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_363(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_12105[iParam0 /*7*/])->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_486(iParam0);
	}
	else
	{
		func_487(iParam0, iParam1);
	}
	func_488();
}

void func_364(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_2 = iParam1;
}

void func_365(int iParam0, var uParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12105[iParam0 /*7*/] = uParam1;
		return;
	}
	Global_1058888->f_498[iParam0 /*2*/] = uParam1;
}

void func_366(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_12105[iParam0 /*7*/])->f_5 = iParam1;
		return;
	}
	(Global_1058888->f_498[iParam0 /*2*/])->f_1 = iParam1;
}

int func_367(int iParam0, bool bParam1)
{
	if (!func_226(iParam0))
	{
		return 0;
	}
	if ((func_227(iParam0, 1) && !func_271(iParam0)) && func_272(iParam0))
	{
		return 0;
	}
	if (!func_227(iParam0, 2))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (!func_489(iParam0, 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_368(int iParam0, int iParam1)
{
	if (func_217() != -1)
	{
		return;
	}
	if (!func_226(iParam0))
	{
		return;
	}
	Global_24886[iParam0 /*2*/] = (Global_24886[iParam0 /*2*/] || iParam1);
}

void func_369(int iParam0)
{
	if (!func_226(iParam0))
	{
		return;
	}
	((*Global_1895087)[iParam0 /*3*/])->f_2 = SCRIPTS::GET_ID_OF_THIS_THREAD();
}

int func_370(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 1:
			return 3;
	}
	return 3;
}

int func_371(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 2;
		case 2:
			return 3;
		case 3:
			return 3;
		case 4:
			return 3;
	}
	return 3;
}

int func_372(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 2;
		case 2:
			return 3;
		case 3:
			return 3;
	}
	return 3;
}

int func_373(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 1:
			return 1;
	}
	return 1;
}

int func_374(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 1;
		case 3:
			return 1;
		case 4:
			return 1;
	}
	return 1;
}

int func_375(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 1;
		case 3:
			return 1;
	}
	return 1;
}

int func_376(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_490(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

int func_377(int iParam0)
{
	return iParam0;
}

void func_378(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 - (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1));
}

void func_379(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		if (((*Global_1945938)[iParam0 /*18*/])->f_5 == 5 && !func_458(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, 0);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
		}
	}
}

void func_380(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
	}
}

void func_381(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 || iParam1);
}

void func_382(int iParam0)
{
	if (!func_491(iParam0))
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

bool func_383(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_384(int iParam0)
{
	Global_1327479->f_3 = iParam0;
}

int func_385()
{
	return Global_1310750->f_16037;
}

bool func_386(int iParam0, int iParam1)
{
	if (!func_383(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/] && iParam1) != 0;
}

int func_387(int iParam0)
{
	if (!func_383(iParam0))
	{
		return 0;
	}
	if (func_492(64) && func_493(iParam0))
	{
		return 1;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_46;
}

int func_388(int iParam0)
{
	if (!func_383(iParam0))
	{
		return 0;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_47;
}

void func_389(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_383(&(Global_1310750->f_13321[iParam0 /*9*/])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID((Global_1310750->f_13321[iParam0 /*9*/])->f_5, 523);
	((*Global_1310750)[iVar0 /*111*/])->f_48 = 0;
	func_494(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

void func_390(int iParam0, int iParam1, bool bParam2)
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

void func_391(bool bParam0)
{
	if (bParam0)
	{
		func_495(4);
	}
	func_495(2);
	MISC::SET_BIT(&(Global_1956578->f_1), 0);
}

void func_392(bool bParam0)
{
	if (bParam0)
	{
		Global_1935689 = 1;
	}
	else
	{
		Global_1935689 = 2;
	}
}

float func_393(float fParam0)
{
	float fVar0;

	fVar0 = fParam0;
	if (fParam0 < 0f)
	{
		fVar0 = (fVar0 + 360f);
	}
	else if (fParam0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	return fVar0;
}

void func_394(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_395()
{
	return 1;
	if (Global_1572887->f_12 == 0)
	{
		return 1;
	}
	return Global_40.f_1;
}

void func_396(int iParam0, int iParam1)
{
	if (!func_226(iParam0))
	{
		return;
	}
	((*Global_1895087)[iParam0 /*3*/])->f_1 = iParam1;
}

void func_397(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_359(vParam0))
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
			if (func_496(vVar2, vParam0, 2f, 1))
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

int func_398(int iParam0)
{
	if (!func_41(iParam0))
	{
		return -1;
	}
	return func_414(iParam0);
}

char* func_399()
{
	return "script@specialped@pdmos_nicholas_trimmins@ig@ig_1_sittingspeech";
}

char* func_400()
{
	return "script@specialped@pdmos_nicholas_trimmins@ig@ig_2_and_3_porchspeechwnewspaper";
}

char* func_401()
{
	return "script@specialped@pdmos_nicholas_trimmins@ig@ig_4_and_5_hotelporchandsherrifofficespeech";
}

char* func_402()
{
	return "script@specialped@pdmos_nicholas_trimmins@ig@ig_6_sittingspeech";
}

char* func_403()
{
	return "script@specialped@pdmos_nicholas_trimmins@ig@ig_7_porchspeechwnewspaper";
}

Vector3 func_404()
{
	return -1807.839f, -374.7922f, 161.8656f;
}

Vector3 func_405()
{
	return 0f, 0f, 180f;
}

Vector3 func_406()
{
	return -1807.44f, -373.83f, 161.84f;
}

Vector3 func_407()
{
	return 0f, 0f, -97.5f;
}

Vector3 func_408()
{
	return -1781.675f, -387.235f, 158.3f;
}

Vector3 func_409()
{
	return 0f, 0f, -44.787f;
}

Vector3 func_410()
{
	return func_404();
}

Vector3 func_411()
{
	return func_405();
}

Vector3 func_412()
{
	return func_406();
}

Vector3 func_413()
{
	return func_407();
}

int func_414(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_497(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

int func_415(int iParam0, int iParam1, bool bParam2)
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

void func_416(int iParam0)
{
	int iVar0;
	var uVar1;

	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_498();
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
			func_499(&(Global_1935630->f_34), &(Global_1935630->f_39));
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

var func_417(int iParam0)
{
	return &(Global_1109400->f_275[iParam0 /*3*/]);
}

int func_418(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_500(bParam0, &uVar0, &uVar1))
	{
		return 1;
	}
	return 0;
}

int func_419(var uParam0)
{
	int iVar0;

	iVar0 = Global_1935630->f_40;
	if (func_217() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_501(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_501(uParam0);
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_448(iVar0) == -1)
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

void func_420(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_502(uParam0);
	}
}

int func_421(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_448(iParam2);
	}
	else
	{
		iVar1 = func_447(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_448(iParam0);
	}
	else
	{
		iVar0 = func_447(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return 1;
		}
	}
	if (func_279(*uParam1, 8388608))
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

float func_422(int iParam0, int iParam1)
{
	return func_62(iParam0, iParam1, 1, 1);
}

float func_423(var uParam0)
{
	return uParam0->f_26;
}

int func_424(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_425(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_225(uParam0, 134217728);
	}
	else
	{
		func_224(uParam0, 134217728);
	}
}

void func_426()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

int func_427(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5)
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
		if (((WEAPON::_0xCB690F680A3EA971(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, iParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_62(iVar0, iParam0, 1, 1) <= 4f)
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
		if (WEAPON::_0x6AD66548840472E5(func_503(iVar0, 0)))
		{
			if (func_504(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_428(var uParam0)
{
	return uParam0->f_17;
}

int func_429(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_12 > fParam3)
	{
		return 0;
	}
	fVar0 = -1f;
	if (!func_279(*uParam0, 4194304))
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

int func_430(var uParam0)
{
	return uParam0->f_18;
}

int func_431(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (WEAPON::_0x6AD66548840472E5(func_503(iVar0, 0)))
		{
			if (func_505(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_432(bool bParam0, var uParam1, var uParam2)
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

var func_433(var uParam0)
{
	return uParam0->f_23;
}

int func_434(var uParam0)
{
	return uParam0->f_21;
}

int func_435(var uParam0)
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

int func_436(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_506(iParam0, vParam4, 0.5f))
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

int func_437(int iParam0)
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
	if (func_507(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_438(int iParam0)
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

int func_439(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_508(iParam1))
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

int func_440(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_508(iParam1))
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

int func_441(var uParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40f;
	if (func_508(iParam1))
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

int func_442(int iParam0, var uParam1)
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

int func_443(int iParam0, int iParam1)
{
	if (PED::_0xB65A4DAB460A19BD(iParam0) == iParam1)
	{
		return 1;
	}
	if (func_509(iParam0, 1, 0, 0) != joaat("weapon_lasso"))
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

bool func_444(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

int func_445(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_264(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

float func_446(var uParam0)
{
	return uParam0->f_24;
}

int func_447(int iParam0)
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

int func_448(int iParam0)
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

int func_449(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_442(Global_35, &iVar1))
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
		fVar2 = func_62(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
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
		if (func_62(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
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

int func_450(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_500(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_451(uParam1, iVar0))
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
				if (!bParam2 || !func_451(uParam1, iVar1))
				{
					if (func_264(iVar1, Global_36, 1) < 5f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_451(var uParam0, int iParam1)
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

int func_452(int iParam0)
{
	if (func_45())
	{
		return 0;
	}
	return func_510(((*Global_1347702)[58 /*49*/])->f_15, 1);
}

int func_453(var uParam0)
{
	return uParam0->f_20;
}

int func_454(int iParam0, var uParam1, bool bParam2, float fParam3)
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

void func_455(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_248(&(((*uParam1)[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			func_79(iParam0, 0);
		}
	}
}

int func_456(int iParam0)
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
		iVar2 = func_511(iVar9);
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

int func_457(int iParam0)
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
	iVar0 = func_261();
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

bool func_458(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1) != 0;
}

int func_459(int* iParam0)
{
	if (func_335(iParam0, 0))
	{
		if (func_512(iParam0))
		{
			func_346(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

bool func_460(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, var uParam5, bool bParam6, int iParam7, int iParam8, bool bParam9, int iParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_513(iParam0, iParam1, sParam2, sParam3, fParam4, uParam5, bParam6, iParam7, iParam8, bParam9, iParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

void func_461(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

int func_462(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return 0;
	}
	if (func_514(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_515(iParam0))
	{
		return 0;
	}
	if (func_516(iParam0))
	{
		return 0;
	}
	if ((Global_1898164->f_163 && !func_517(iParam0, 1)) || func_518(32768))
	{
		if (!func_517(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return 0;
		}
	}
	if (!func_519())
	{
		return 0;
	}
	return 1;
}

void func_463(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

int func_464(int iParam0, var uParam1)
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
		if (PED::IS_PED_IN_COMBAT(iParam0, func_520((bVar1 && !bVar0), Global_35, 0)))
		{
			return 1;
		}
	}
	return 0;
}

void func_465(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_482((*uParam0)[iVar0 /*17*/]))
		{
			func_76((*uParam0)[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_466(int iParam0, var uParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;

	if (uParam1->f_3 > -1 && uParam1->f_3 < *uParam2)
	{
		iVar0 = uParam1->f_3;
		((*uParam2)[iVar0 /*17*/])->f_8 = 6;
		func_521(iParam0, (*uParam2)[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (func_241(((*uParam2)[iVar0 /*17*/])->f_6))
		{
			func_76((*uParam2)[iVar0 /*17*/], 11);
			return ((*Global_1945938)[((*uParam2)[iVar0 /*17*/])->f_6 /*18*/])->f_3;
		}
	}
	return 0;
}

int func_467(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_522(*uParam0);
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

int func_468(var uParam0, int iParam1)
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

void func_469(int* iParam0, int* iParam1)
{
	if (!func_335(iParam0, 23))
	{
		if (iParam1->f_7 == 648122183)
		{
			func_76(iParam1, 19);
			func_484(iParam0, 23);
			func_523(iParam1, 2);
		}
	}
}

int func_470(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (func_524(16))
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
					func_525(16);
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

void func_471(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_521(iParam0, (*uParam1)[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, iParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT((*uParam1)[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_472(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

var func_473(int iParam0)
{
	return (func_526(iParam0, 4) || func_526(iParam0, 5));
}

int func_474(int iParam0)
{
	return func_526(iParam0, 7);
}

int func_475(int iParam0)
{
	return func_526(iParam0, 6);
}

void func_476(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (func_482(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			func_521(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

int func_477(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, var uParam13, float fParam14, bool bParam15, int iParam16)
{
	int iVar0;
	bool bVar1;

	iVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_527(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, uParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_322(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_244(iParam2->f_6, 0, 1);
				iVar0 = 0;
			}
		}
		else if (!bVar1)
		{
			func_244(iParam2->f_6, 1, 1);
			iVar0 = 0;
		}
		if (bParam8)
		{
			func_528(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return iVar0;
}

int func_478(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_529(iParam1, 1))
		{
			return 1;
		}
	}
	else if (func_530(iParam1, 1))
	{
		func_531(iParam1, 1);
		return 1;
	}
	return 0;
}

void func_479(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_77((*uParam0)[iVar0 /*17*/], iParam1, bParam2);
		iVar0++;
	}
}

int func_480(int* iParam0, float fParam1, var uParam2)
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

void func_481(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 1101824977, true);
		PAD::DISABLE_CONTROL_ACTION(0, 966551065, true);
		PAD::DISABLE_CONTROL_ACTION(0, 668058244, true);
		PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	}
}

int func_482(var uParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_5))
	{
		return 1;
	}
	return 0;
}

int func_483(int iParam0)
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

void func_484(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

int func_485(var uParam0, float fParam1)
{
	if (func_532(uParam0, fParam1))
	{
		func_14(uParam0);
		return 1;
	}
	return 0;
}

int func_486(int iParam0)
{
	int iVar0;

	iVar0 = func_497(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_533(iVar0);
}

int func_487(int iParam0, int iParam1)
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
			func_534(iVar2);
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

void func_488()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

bool func_489(int iParam0, int iParam1)
{
	if (func_217() != -1)
	{
		return false;
	}
	if (!func_226(iParam0))
	{
		return false;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(func_60(iParam0)))
	{
		return false;
	}
	if (iParam1 && !ENTITY::DOES_ENTITY_EXIST(func_230(iParam0)))
	{
		return false;
	}
	return !_NAMESPACE48::_0xEB98B38CA60742D7(func_60(iParam0));
}

void func_490(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_535(iParam1))
		{
			func_80(iParam0, 41788943);
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
			func_536(iParam0, 0, 1);
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
			func_537(iParam0, 0);
			bVar0 = true;
		}
		func_538(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	}
}

bool func_491(int iParam0)
{
	return func_458(iParam0, 2);
}

bool func_492(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_493(int iParam0)
{
	return func_386(iParam0, Global_1310750->f_16072 | 64);
}

void func_494(int iParam0)
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

void func_495(int iParam0)
{
	Global_1900383->f_316 = (Global_1900383->f_316 || iParam0);
}

int func_496(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

int func_497(int iParam0)
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

int func_498()
{
	if (func_539())
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

void func_499(var uParam0, var uParam1)
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

int func_500(bool bParam0, var uParam1, var uParam2)
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

int func_501(var uParam0)
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

void func_502(var uParam0)
{
	int iVar0;

	if (Global_1935630->f_38 == 0)
	{
		func_224(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(Global_1935630->f_34[iVar0])))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(&(Global_1935630->f_34[iVar0])))
				{
					func_225(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}

var func_503(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

int func_504(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_505(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_505(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_506(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

int func_507(int iParam0, int iParam1, bool bParam2, int iParam3)
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

int func_508(int iParam0)
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

int func_509(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_510(int iParam0, bool bParam1)
{
	switch (func_398(iParam0))
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

int func_511(int iParam0)
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

int func_512(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return 1;
	}
	return 0;
}

int func_513(int iParam0, int iParam1, char* sParam2, var uParam3, float fParam4, var uParam5, bool bParam6, var uParam7, var uParam8, bool bParam9, var uParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, var uParam15)
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
		if (func_540())
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
				if (func_541(iParam0, 1, 1) > fParam4)
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
			fVar1 = func_62(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || uParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_92(&uLocal_0);
			if (!bVar0 && uParam10)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_542(iParam0, iParam1, fVar1, bParam13))
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
				iVar2 = func_358(func_543(iParam0, sParam2, iParam11, iParam1, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0, uParam5, uParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

bool func_514(int iParam0, int iParam1)
{
	if (func_217() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iParam0]), iParam1);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iParam0]), iParam1);
}

int func_515(int iParam0)
{
	if (func_217() != -1)
	{
		if (func_517(iParam0, 4))
		{
			return 0;
		}
	}
	else if (func_517(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

int func_516(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_517(iParam0, 65536) && !func_517(iParam0, 32768))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if ((Global_40.f_7756[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_517(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0 /*3*/] - iVar1);
			if ((Global_40.f_7756[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && func_517(iParam0, 32768))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_517(int iParam0, int iParam1)
{
	return ((Global_1905944->f_22[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

bool func_518(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_519()
{
	return Global_1905944->f_5694;
}

int func_520(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_521(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	char* sVar0;
	int iVar1;

	if (func_241(iParam1->f_6))
	{
		if (iParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		func_248(&(iParam1->f_6), 0, 1);
	}
	if (!func_241(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_482(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_544(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824, 0, 1704213876, iParam1->f_10, 0);
			if (func_241(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_528(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_545(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						func_546(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_242(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					func_545(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					func_244(iParam1->f_6, 0, 1);
				}
				else
				{
					func_244(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

int func_522(int iParam0)
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

void func_523(int* iParam0, int iParam1)
{
	if (!func_246(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_76(iParam0, 14);
		}
	}
}

bool func_524(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_525(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_526(int iParam0, int iParam1)
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

bool func_527(int* iParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, var uParam8, float fParam9, bool bParam10, int iParam11)
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

void func_528(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (iParam3 && !func_241(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = func_377(iParam0);
	func_545(iParam0, 18, 0, 1);
	func_545(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1);
	}
	HUD::_UIPROMPT_SET_GROUP(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam4, iParam2);
}

bool func_529(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_241(iParam0))
	{
		return false;
	}
	iVar0 = func_377(iParam0);
	if (HUD::_0xCD072523791DDC1B(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

bool func_530(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_241(iParam0))
	{
		return false;
	}
	iVar0 = func_377(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_531(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_241(iParam0))
	{
		return;
	}
	iVar0 = func_377(iParam0);
	HUD::_UIPROMPT_RESTART_MODES(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

int func_532(var uParam0, float fParam1)
{
	if (!func_11(uParam0))
	{
		return 0;
	}
	if (func_13(uParam0) > fParam1)
	{
		return 1;
	}
	return 0;
}

int func_533(int iParam0)
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

int func_534(int iParam0)
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

int func_535(int iParam0)
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

void func_536(int iParam0, int iParam1, bool bParam2)
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

void func_537(int iParam0, bool bParam1)
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

void func_538(int iParam0, int iParam1)
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

int func_539()
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

bool func_540()
{
	return (Global_1894899 & 1 != 0 && func_10() != -1);
}

float func_541(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return -1f;
	}
	return func_62(Global_35, iParam0, bParam1, iParam2);
}

int func_542(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_543(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, var uParam6, var uParam7)
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
	return func_266(iParam0, &Var0);
}

int func_544(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_458(iVar0, 2))
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
				func_547(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}

void func_545(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam3 && !func_241(iParam0))
	{
		return;
	}
	iVar0 = func_377(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam1, iParam2);
}

void func_546(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4)
{
	int iVar0;

	if (iParam4 && !func_241(iParam0))
	{
		return;
	}
	iVar0 = func_377(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, MISC::_CREATE_VAR_STRING(10, sParam1, sParam2, sParam3));
}

void func_547(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, var uParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_379(iParam0, 1);
	func_380(iParam0, 1);
	func_381(iParam0, 128);
}

