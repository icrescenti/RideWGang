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
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	struct<191> Local_36 = { 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 778800947, 677043675, -1893027926, -615159064, -208228129, 0, 1, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 1065353216;
	var uLocal_235 = 1119092736;
	var uLocal_236 = 1092616192;
	var uLocal_237 = 1085276160;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = -1;
	var uLocal_241 = 0;
	var uLocal_242 = -1;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = -1;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 1073741824;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 1;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 2;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 570;
	var uLocal_264 = 1065353216;
	var uLocal_265 = -1082130432;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 2;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 570;
	var uLocal_281 = 1065353216;
	var uLocal_282 = -1082130432;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 2;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 2;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		func_1(&Local_36, 1);
	}
	while (true)
	{
		BUILTIN::WAIT(0);
		func_2(&Local_36, &iLocal_35);
		func_3(&Local_36, &iLocal_35, &uLocal_14);
		if (iLocal_35 > 2 && iLocal_35 < 81)
		{
			if (func_4(4, &(Local_36.f_143[0]), 1, 1))
			{
				if (iLocal_35 == 83 || iLocal_35 == 92)
				{
					func_6(&Local_36, &(Local_36.f_165), func_5(23), 1, 0, 1f, 0, 0);
				}
				else
				{
					func_6(&Local_36, &(Local_36.f_165), func_5(16), 1, 0, 1f, 0, 0);
				}
			}
			else
			{
				func_7(4, 0, Local_36.f_143[0], &(Local_36.f_133), &(Local_36.f_185), 0f, 20f, 1);
				func_8(&Local_36, &iLocal_35);
				func_9(&Local_36, iLocal_35);
				func_10(&(Local_36.f_143[0]), &(Local_36.f_162), 4096, 4, 0);
				func_11(&Local_36);
				switch (iLocal_35)
				{
					case 0:
						func_12(&Local_36, &iLocal_35, &uLocal_14);
						break;
					case 1:
						if (func_13(&Local_36, &(Local_36.f_163)))
						{
							func_14(&iLocal_35, 2);
						}
						break;
					case 2:
						if (func_15(&Local_36))
						{
							iVar0 = func_16();
							func_14(&iLocal_35, iVar0);
						}
						break;
					case 3:
						func_17(&Local_36, &iLocal_35);
						break;
					case 48:
						if (func_18(&Local_36, &(Local_36.f_165), 0))
						{
							func_19(&Local_36, &iLocal_35);
						}
						break;
					case 6:
						if (func_6(&Local_36, &(Local_36.f_165), func_5(0), 1, 0, 1065353216, 1, 0))
						{
							Local_36.f_177++;
							func_14(&iLocal_35, 17);
						}
						break;
					case 7:
						if (func_6(&Local_36, &(Local_36.f_165), func_5(1), 1, 0, 1065353216, 1, 0))
						{
							Local_36.f_177 = (1 + Local_36.f_177);
							func_14(&iLocal_35, 17);
						}
						break;
					case 8:
						if (func_6(&Local_36, &(Local_36.f_165), func_5(2), 1, 0, 1065353216, 1, 0))
						{
							Local_36.f_177++;
							func_14(&iLocal_35, 17);
						}
						break;
					case 9:
						if (func_6(&Local_36, &(Local_36.f_165), func_5(3), 1, 0, 1065353216, 1, 0))
						{
							Local_36.f_177 = (1 + Local_36.f_177);
							func_14(&iLocal_35, 17);
						}
						break;
					case 10:
						if (func_6(&Local_36, &(Local_36.f_165), func_5(4), 1, 0, 1065353216, 1, 0))
						{
							Local_36.f_177++;
							func_14(&iLocal_35, 17);
						}
						break;
					case 11:
						if (func_6(&Local_36, &(Local_36.f_165), func_5(5), 1, 0, 1065353216, 1, 0))
						{
							Local_36.f_177++;
							func_14(&iLocal_35, 17);
						}
						break;
					case 12:
						if (func_6(&Local_36, &(Local_36.f_165), func_5(6), 1, 0, 1065353216, 1, 0))
						{
							Local_36.f_177++;
							func_14(&iLocal_35, 17);
						}
						break;
					case 14:
						if (func_6(&Local_36, &(Local_36.f_165), func_5(7), 1, 0, 1065353216, 1, 0))
						{
							Local_36.f_177++;
							func_14(&iLocal_35, 17);
						}
						break;
					case 15:
						if (func_6(&Local_36, &(Local_36.f_165), func_5(8), 1, 0, 1065353216, 1, 0))
						{
							Local_36.f_177++;
							func_14(&iLocal_35, 17);
						}
						break;
					case 16:
						if (func_6(&Local_36, &(Local_36.f_165), func_5(9), 1, 0, 1065353216, 1, 0))
						{
							Local_36.f_177++;
							func_14(&iLocal_35, 17);
						}
						break;
					case 17:
						if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_36.f_156, true, 0) && !func_20(Local_36.f_162, 2))
						{
							func_14(&iLocal_35, 50);
						}
						else if ((ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_36.f_156, true, 0) && func_20(Local_36.f_162, 2)) && func_20(Local_36.f_162, 1))
						{
							if (Local_36.f_178 < 2)
							{
								if (func_6(&Local_36, &(Local_36.f_165), func_21(Local_36.f_172), 1, 0, 1065353216, 1, 0))
								{
									func_22(&(Local_36.f_172));
									func_23(&Local_36);
								}
							}
							else if (func_6(&Local_36, &(Local_36.f_165), func_21(Local_36.f_172), 1, 0, 1065353216, 1, 0))
							{
								func_22(&(Local_36.f_172));
								func_14(&iLocal_35, 88);
							}
						}
						else if ((!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_36.f_156, true, 0) && func_20(Local_36.f_162, 2)) && func_20(Local_36.f_162, 1))
						{
							if (func_6(&Local_36, &(Local_36.f_165), func_21(Local_36.f_172), 1, 0, 1065353216, 1, 0))
							{
								func_22(&(Local_36.f_172));
								func_14(&iLocal_35, 88);
							}
						}
						else if (Local_36.f_190 >= 3)
						{
							if (func_6(&Local_36, &(Local_36.f_165), func_21(Local_36.f_172), 1, 0, 1065353216, 1, 0))
							{
								func_22(&(Local_36.f_172));
								func_14(&iLocal_35, 3);
							}
						}
						else
						{
							func_14(&iLocal_35, 3);
						}
						break;
					case 83:
						if (func_20(Local_36.f_162, 4))
						{
							func_6(&Local_36, &(Local_36.f_165), func_5(23), 0, 0, 2f, 1, 0);
							func_24();
							func_14(&iLocal_35, 89);
						}
						else
						{
							func_6(&Local_36, &(Local_36.f_165), func_5(23), 0, 0, 1065353216, 0, 0);
						}
						func_25(&Local_36);
						if (((!func_20(Local_36.f_162, 1) && func_26(&(Local_36.f_143[0]), Global_35, 15f, 1)) && !func_20(Local_36.f_162, 4)) && !func_20(Local_36.f_162, 524288))
						{
							func_24();
							if (ANIMSCENE::_0x1F0E401031E20146(Local_36.f_165, func_5(23)))
							{
								func_14(&iLocal_35, 84);
							}
						}
						else if ((func_20(Local_36.f_162, 1) && func_26(&(Local_36.f_143[0]), Global_35, 6f, 1)) && !func_20(Local_36.f_162, 4))
						{
							func_23(&Local_36);
						}
						break;
					case 85:
						if (func_6(&Local_36, &(Local_36.f_165), func_5(38), 1, 0, 1f, 0, 0))
						{
							func_24();
							func_14(&iLocal_35, 17);
						}
						break;
					case 86:
						if (func_6(&Local_36, &(Local_36.f_165), func_5(35), 1, 0, 1f, 0, 0))
						{
							func_24();
							func_14(&iLocal_35, 17);
						}
						break;
					case 87:
						if (func_6(&Local_36, &(Local_36.f_165), func_5(39), 1, 0, 1f, 0, 0))
						{
							func_24();
							func_14(&iLocal_35, 17);
						}
						break;
					case 84:
						if (func_6(&Local_36, &(Local_36.f_165), func_5(25), 1, 0, 2f, 1, 0))
						{
							if (func_20(Local_36.f_162, 4))
							{
								func_14(&iLocal_35, 88);
							}
							else
							{
								func_24();
								func_14(&iLocal_35, 17);
							}
						}
						break;
					case 89:
						func_6(&Local_36, &(Local_36.f_165), func_5(28), 0, 0, 1065353216, 1, 1);
						if (ANIMSCENE::_0x8D81E7824B7753F7(Local_36.f_165, "s_Cower_Base", 1))
						{
							func_14(&iLocal_35, 81);
						}
						break;
					case 90:
						func_6(&Local_36, &(Local_36.f_165), func_5(29), 0, 0, 1065353216, 1, 1);
						if (ANIMSCENE::_0x8D81E7824B7753F7(Local_36.f_165, "s_Cower_Base", 1))
						{
							func_14(&iLocal_35, 81);
						}
						break;
					case 88:
						if (func_20(Local_36.f_162, 4) || func_20(Local_36.f_162, 524288))
						{
							func_6(&Local_36, &(Local_36.f_165), func_5(26), 0, 0, 1f, 0, 0);
						}
						else if (func_20(Local_36.f_162, 1) && !func_20(Local_36.f_162, 8192))
						{
							func_6(&Local_36, &(Local_36.f_165), func_5(24), 0, 0, 1065353216, 1, 0);
							if (!ENTITY::_0x083D497D57B7400F(Local_36.f_148) && ANIMSCENE::_0x3FBC3F51BF12DFBF(Local_36.f_165) >= 0.12f)
							{
								ENTITY::FREEZE_ENTITY_POSITION(Local_36.f_148, true);
							}
							if (ANIMSCENE::_0x8D81E7824B7753F7(Local_36.f_165, "s_Sitting_BASE", 1) && ANIMSCENE::_0x1F0E401031E20146(Local_36.f_165, func_5(24)))
							{
								func_27(&(Local_36.f_162), 8192);
							}
						}
						else
						{
							func_6(&Local_36, &(Local_36.f_165), func_5(26), 0, 0, 1f, 1, 0);
						}
						if (ANIMSCENE::_0x8D81E7824B7753F7(Local_36.f_165, "s_Sitting_BASE", 1))
						{
							func_14(&iLocal_35, 83);
						}
						break;
					case 81:
						func_6(&Local_36, &(Local_36.f_165), func_5(30), 0, 0, 1f, 0, 0);
						if (ANIMSCENE::_0x8D81E7824B7753F7(Local_36.f_165, "s_Cower_Base", 1))
						{
							func_14(&iLocal_35, 91);
						}
						break;
					case 82:
						if (func_6(&Local_36, &(Local_36.f_165), func_5(27), 1, 0, 1065353216, 1, 0))
						{
							func_14(&iLocal_35, 83);
						}
						break;
					case 18:
						if (func_6(&Local_36, &(Local_36.f_165), func_5(10), 1, 0, 1065353216, 1, 0))
						{
							Local_36.f_177 = (1 + Local_36.f_177);
							func_14(&iLocal_35, 17);
						}
						break;
					case 19:
						if (func_6(&Local_36, &(Local_36.f_165), func_5(11), 1, 0, 1065353216, 1, 0))
						{
							Local_36.f_177++;
							func_14(&iLocal_35, 17);
						}
						break;
					case 20:
						if (func_6(&Local_36, &(Local_36.f_165), func_5(12), 1, 0, 1065353216, 1, 0))
						{
							Local_36.f_177++;
							func_14(&iLocal_35, 17);
						}
						break;
					case 21:
						if (func_6(&Local_36, &(Local_36.f_165), func_5(13), 1, 0, 1065353216, 1, 0))
						{
							Local_36.f_177++;
							func_14(&iLocal_35, 17);
						}
						break;
					case 22:
						if (func_6(&Local_36, &(Local_36.f_165), func_5(14), 1, 0, 1065353216, 1, 0))
						{
							Local_36.f_177++;
							func_14(&iLocal_35, 17);
						}
						break;
					case 23:
						if (func_6(&Local_36, &(Local_36.f_165), func_5(15), 1, 0, 1065353216, 1, 0))
						{
							Local_36.f_177++;
							func_14(&iLocal_35, 17);
						}
						break;
					case 4:
						func_28(&Local_36, &iLocal_35);
						break;
					case 49:
						if (func_20(Local_36.f_162, 2))
						{
							func_29(&(Local_36.f_130));
							func_14(&iLocal_35, 33);
						}
						if (!func_30(&(Local_36.f_130)))
						{
							func_31(&(Local_36.f_130), 0f);
						}
						else if (func_32(&(Local_36.f_130)) > 5000 && !func_20(Local_36.f_162, 2))
						{
							if (func_18(&Local_36, &(Local_36.f_169), 1))
							{
								func_29(&(Local_36.f_130));
								func_33(&Local_36, &iLocal_35);
							}
						}
						break;
					case 24:
						if (func_6(&Local_36, &(Local_36.f_169), func_34(0), 1, 0, 1065353216, 1, 0) || func_35(Local_36.f_143[0], &(Local_36.f_162), &(Local_36.f_169), 1056964608))
						{
							func_14(&iLocal_35, 4);
						}
						break;
					case 25:
						if (func_6(&Local_36, &(Local_36.f_169), func_34(1), 1, 0, 1065353216, 1, 0) || func_35(Local_36.f_143[0], &(Local_36.f_162), &(Local_36.f_169), 1056964608))
						{
							func_14(&iLocal_35, 4);
						}
						break;
					case 26:
						if (func_6(&Local_36, &(Local_36.f_169), func_34(2), 1, 0, 1065353216, 1, 0) || func_35(Local_36.f_143[0], &(Local_36.f_162), &(Local_36.f_169), 1056964608))
						{
							func_14(&iLocal_35, 4);
						}
						break;
					case 27:
						if (func_6(&Local_36, &(Local_36.f_169), func_34(3), 1, 0, 1065353216, 1, 0) || func_35(Local_36.f_143[0], &(Local_36.f_162), &(Local_36.f_169), 1056964608))
						{
							func_14(&iLocal_35, 4);
						}
						break;
					case 29:
						if (func_6(&Local_36, &(Local_36.f_169), func_34(4), 1, 0, 1065353216, 1, 0) || func_35(Local_36.f_143[0], &(Local_36.f_162), &(Local_36.f_169), 1056964608))
						{
							func_14(&iLocal_35, 4);
						}
						break;
					case 30:
						if (func_6(&Local_36, &(Local_36.f_169), func_34(5), 1, 0, 1065353216, 1, 0) || func_35(Local_36.f_143[0], &(Local_36.f_162), &(Local_36.f_169), 1056964608))
						{
							func_14(&iLocal_35, 4);
						}
						break;
					case 51:
						if (func_36(&Local_36, &(Local_36.f_169), func_34(10), &(Local_36.f_165), 1, 0, 1f, 1, func_5(16), 1))
						{
							func_14(&iLocal_35, 33);
						}
						break;
					case 33:
						if (func_20(Local_36.f_162, 2))
						{
							if (func_37(&Local_36))
							{
								if (func_6(&Local_36, &(Local_36.f_169), func_34(12), 0, 1, 1065353216, 1, 0) && func_20(Local_36.f_162, 32768))
								{
									func_38(&Local_36, 0);
									if (Local_36.f_186)
									{
										PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 256, 0);
										Local_36.f_186 = 0;
									}
									func_39(&Local_36, 1, 1);
									func_14(&iLocal_35, 35);
								}
								if (!func_20(Local_36.f_162, 32768))
								{
									if (ANIMSCENE::_0x1F0E401031E20146(Local_36.f_169, func_34(12)) && ANIMSCENE::_0x3FBC3F51BF12DFBF(Local_36.f_169) >= 0.3f)
									{
										func_40(100, 0, 0, 1, 1);
										func_27(&(Local_36.f_162), 32768);
									}
								}
							}
						}
						else if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_36.f_156, true, 0))
						{
							if (func_6(&Local_36, &(Local_36.f_169), func_34(10), 0, 1, 1f, 1, 0))
							{
								func_14(&iLocal_35, 34);
							}
						}
						else if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_36.f_156, true, 0))
						{
							if (func_6(&Local_36, &(Local_36.f_169), func_34(10), 0, 1, 1f, 1, 0))
							{
								func_14(&iLocal_35, 36);
							}
						}
						break;
					case 35:
						func_41(0);
						if (!func_42())
						{
							if (func_36(&Local_36, &(Local_36.f_171), func_43(26), &(Local_36.f_169), 1, 0, 1f, 0, func_34(9), 0))
							{
								func_14(&iLocal_35, 5);
							}
						}
						else if (!func_44(77))
						{
							if (func_36(&Local_36, &(Local_36.f_171), func_43(26), &(Local_36.f_169), 1, 0, 1f, 0, "", 0))
							{
								func_14(&iLocal_35, 69);
							}
						}
						else if (func_36(&Local_36, &(Local_36.f_171), func_43(26), &(Local_36.f_169), 1, 0, 1f, 0, "", 0))
						{
							func_14(&iLocal_35, 69);
						}
						break;
					case 34:
						if (func_36(&Local_36, &(Local_36.f_165), func_5(16), &(Local_36.f_169), 0, 1, 1f, 0, func_34(9), 1))
						{
							func_14(&iLocal_35, 17);
						}
						break;
					case 50:
						if (func_36(&Local_36, &(Local_36.f_169), func_34(9), &(Local_36.f_165), 1, 0, 1f, 1, func_5(16), 1))
						{
							func_14(&iLocal_35, 36);
						}
						break;
					case 36:
						if (func_6(&Local_36, &(Local_36.f_169), func_34(11), 1, 0, 1f, 1, 0))
						{
							func_14(&iLocal_35, 4);
						}
						break;
					case 37:
						if (func_36(&Local_36, &(Local_36.f_165), func_5(16), &(Local_36.f_169), 0, 1, 1f, 0, func_34(9), 1))
						{
							func_14(&iLocal_35, 17);
						}
						break;
					case 31:
						if (func_20(Local_36.f_162, 2))
						{
							func_14(&iLocal_35, 33);
						}
						else if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_36.f_156, true, 0))
						{
							func_14(&iLocal_35, 33);
						}
						else
						{
							func_14(&iLocal_35, 36);
						}
						break;
					case 38:
						if (func_6(&Local_36, &(Local_36.f_169), func_34(6), 1, 0, 1065353216, 1, 0) || func_35(Local_36.f_143[0], &(Local_36.f_162), &(Local_36.f_169), 1056964608))
						{
							func_14(&iLocal_35, 4);
						}
						break;
					case 40:
						if (func_6(&Local_36, &(Local_36.f_169), func_34(7), 1, 0, 1065353216, 1, 0) || func_35(Local_36.f_143[0], &(Local_36.f_162), &(Local_36.f_169), 1056964608))
						{
							func_14(&iLocal_35, 4);
						}
						break;
					case 43:
						if (func_20(Local_36.f_162, 2))
						{
							if (func_6(&Local_36, &(Local_36.f_169), func_34(10), 1, 0, 1f, 1, 0))
							{
								func_14(&iLocal_35, 45);
							}
						}
						else if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_36.f_156, true, 0))
						{
							if (func_6(&Local_36, &(Local_36.f_169), func_34(10), 1, 0, 1f, 1, 0))
							{
								func_14(&iLocal_35, 44);
							}
						}
						else if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_36.f_156, true, 0))
						{
							if (func_6(&Local_36, &(Local_36.f_169), func_34(10), 1, 0, 1f, 1, 0))
							{
								func_14(&iLocal_35, 46);
							}
						}
						break;
					case 45:
						if (!func_42())
						{
							if (func_36(&Local_36, &(Local_36.f_171), func_43(26), &(Local_36.f_169), 0, 1, 1f, 0, func_34(9), 0))
							{
								func_14(&iLocal_35, 5);
							}
						}
						else if (!func_44(77))
						{
							if (func_36(&Local_36, &(Local_36.f_171), func_45(), &(Local_36.f_165), 0, 1, 1f, 0, "", 0))
							{
								func_14(&iLocal_35, 5);
							}
						}
						else if (func_36(&Local_36, &(Local_36.f_171), func_43(26), &(Local_36.f_165), 0, 1, 1f, 0, "", 0))
						{
							func_14(&iLocal_35, 5);
						}
						break;
					case 44:
						if (func_36(&Local_36, &(Local_36.f_165), func_5(16), &(Local_36.f_169), 0, 1, 1f, 0, 0, 1))
						{
							func_14(&iLocal_35, 3);
						}
						break;
					case 46:
						if (func_6(&Local_36, &(Local_36.f_169), func_34(11), 1, 0, 1f, 1, 0))
						{
							func_14(&iLocal_35, 4);
						}
						break;
					case 47:
						if (func_36(&Local_36, &(Local_36.f_165), func_5(16), &(Local_36.f_169), 0, 1, 1f, 0, 0, 1))
						{
							func_14(&iLocal_35, 17);
						}
						break;
					case 41:
						if (func_20(Local_36.f_162, 2))
						{
							func_14(&iLocal_35, 43);
						}
						else if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_36.f_156, true, 0))
						{
							func_14(&iLocal_35, 43);
						}
						else
						{
							func_14(&iLocal_35, 46);
						}
						break;
					case 5:
						func_46(&Local_36, &iLocal_35);
						break;
					case 52:
						if (func_6(&Local_36, &(Local_36.f_171), func_43(0), 1, 0, 1065353216, 1, 0))
						{
							if (!func_20(Local_36.f_162, 1))
							{
								func_27(&(Local_36.f_162), 1);
							}
							func_27(&(Local_36.f_163), 1);
							func_14(&iLocal_35, 69);
						}
						break;
					case 53:
						if (func_6(&Local_36, &(Local_36.f_171), func_43(2), 1, 0, 1065353216, 1, 0))
						{
							if (!func_20(Local_36.f_162, 1))
							{
								func_27(&(Local_36.f_162), 1);
							}
							func_27(&(Local_36.f_163), 4);
							func_14(&iLocal_35, 69);
						}
						break;
					case 54:
						if (func_6(&Local_36, &(Local_36.f_171), func_43(3), 1, 0, 1065353216, 1, 0))
						{
							if (!func_20(Local_36.f_162, 1))
							{
								func_27(&(Local_36.f_162), 1);
							}
							func_27(&(Local_36.f_163), 8);
							func_14(&iLocal_35, 69);
						}
						break;
					case 55:
						if (func_6(&Local_36, &(Local_36.f_171), func_43(4), 1, 0, 1065353216, 1, 0))
						{
							if (!func_20(Local_36.f_162, 1))
							{
								func_27(&(Local_36.f_162), 1);
							}
							func_27(&(Local_36.f_163), 16);
							func_14(&iLocal_35, 69);
						}
						break;
					case 56:
						if (func_6(&Local_36, &(Local_36.f_171), func_43(5), 1, 0, 1065353216, 1, 0))
						{
							if (!func_20(Local_36.f_162, 1))
							{
								func_27(&(Local_36.f_162), 1);
							}
							func_27(&(Local_36.f_163), 32);
							func_14(&iLocal_35, 69);
						}
						break;
					case 57:
						if (func_48(&Local_36, 64, func_47(0)))
						{
							if (!func_20(Local_36.f_162, 1))
							{
								func_27(&(Local_36.f_162), 1);
							}
							func_27(&(Local_36.f_163), 64);
							func_14(&iLocal_35, 69);
						}
						break;
					case 58:
						if (func_48(&Local_36, 128, func_47(1)))
						{
							if (!func_20(Local_36.f_162, 1))
							{
								func_27(&(Local_36.f_162), 1);
							}
							func_27(&(Local_36.f_163), 128);
							func_14(&iLocal_35, 69);
						}
						break;
					case 59:
						if (func_48(&Local_36, 256, func_47(2)))
						{
							if (!func_20(Local_36.f_162, 1))
							{
								func_27(&(Local_36.f_162), 1);
							}
							func_27(&(Local_36.f_163), 256);
							func_14(&iLocal_35, 69);
						}
						break;
					case 60:
						if (func_48(&Local_36, 512, func_47(3)))
						{
							if (!func_20(Local_36.f_162, 1))
							{
								func_27(&(Local_36.f_162), 1);
							}
							func_27(&(Local_36.f_163), 512);
							func_14(&iLocal_35, 69);
						}
						break;
					case 61:
						if (func_48(&Local_36, 1024, func_47(4)))
						{
							if (!func_20(Local_36.f_162, 1))
							{
								func_27(&(Local_36.f_162), 1);
							}
							func_27(&(Local_36.f_163), 1024);
							func_14(&iLocal_35, 69);
						}
						break;
					case 62:
						if (func_48(&Local_36, 2048, func_47(5)))
						{
							if (!func_20(Local_36.f_162, 1))
							{
								func_27(&(Local_36.f_162), 1);
							}
							func_27(&(Local_36.f_163), 2048);
							func_14(&iLocal_35, 69);
						}
						break;
					case 63:
						if (func_48(&Local_36, 4096, func_47(6)))
						{
							if (!func_20(Local_36.f_162, 1))
							{
								func_27(&(Local_36.f_162), 1);
							}
							func_27(&(Local_36.f_163), 4096);
							func_14(&iLocal_35, 69);
						}
						break;
					case 64:
						if (func_48(&Local_36, 8192, func_47(7)))
						{
							if (!func_20(Local_36.f_162, 1))
							{
								func_27(&(Local_36.f_162), 1);
							}
							func_27(&(Local_36.f_163), 8192);
							func_14(&iLocal_35, 69);
						}
						break;
					case 65:
						if (func_48(&Local_36, 2, func_47(8)))
						{
							if (!func_20(Local_36.f_162, 1))
							{
								func_27(&(Local_36.f_162), 1);
							}
							func_27(&(Local_36.f_163), 2);
							func_14(&iLocal_35, 69);
						}
						break;
					case 74:
						if (func_48(&Local_36, 2097152, func_47(16)))
						{
							if (!func_20(Local_36.f_162, 1))
							{
								func_27(&(Local_36.f_162), 1);
							}
							func_27(&(Local_36.f_163), 2097152);
							func_14(&iLocal_35, 69);
						}
						break;
					case 66:
						if (func_48(&Local_36, 16384, func_47(9)))
						{
							if (!func_20(Local_36.f_162, 1))
							{
								func_27(&(Local_36.f_162), 1);
							}
							if (!func_49(4, 16777216))
							{
								func_50(4, 16777216, 1);
							}
							func_27(&(Local_36.f_163), 16384);
							func_14(&iLocal_35, 69);
						}
						break;
					case 67:
						if (func_48(&Local_36, 32768, func_47(10)))
						{
							if (!func_20(Local_36.f_162, 1))
							{
								func_27(&(Local_36.f_162), 1);
							}
							func_27(&(Local_36.f_163), 32768);
							func_14(&iLocal_35, 69);
						}
						break;
					case 68:
						if (func_48(&Local_36, 65536, func_47(11)))
						{
							if (!func_20(Local_36.f_162, 1))
							{
								func_27(&(Local_36.f_162), 1);
							}
							func_27(&(Local_36.f_163), 65536);
							func_14(&iLocal_35, 69);
						}
						break;
					case 69:
						if (func_6(&Local_36, &(Local_36.f_171), func_43(26), 0, 1, 1065353216, 1, 0))
						{
							func_14(&iLocal_35, 5);
						}
						break;
					case 71:
						if (func_48(&Local_36, 262144, func_47(13)))
						{
							if (!func_20(Local_36.f_162, 1))
							{
								func_27(&(Local_36.f_162), 1);
							}
							func_27(&(Local_36.f_163), 262144);
							func_14(&iLocal_35, 69);
						}
						break;
					case 72:
						if (func_48(&Local_36, 524288, func_47(14)))
						{
							if (!func_20(Local_36.f_162, 1))
							{
								func_27(&(Local_36.f_162), 1);
							}
							func_27(&(Local_36.f_163), 524288);
							func_14(&iLocal_35, 69);
						}
						break;
					case 73:
						if (func_48(&Local_36, 1048576, func_47(15)))
						{
							if (!func_20(Local_36.f_162, 1))
							{
								func_27(&(Local_36.f_162), 1);
							}
							func_27(&(Local_36.f_163), 1048576);
							func_14(&iLocal_35, 69);
						}
						break;
					case 76:
						if (func_6(&Local_36, &(Local_36.f_171), func_43(22), 1, 0, 1065353216, 1, 0))
						{
							if (!func_20(Local_36.f_162, 1))
							{
								func_27(&(Local_36.f_162), 1);
							}
							func_27(&(Local_36.f_163), 4194304);
							func_14(&iLocal_35, 69);
						}
						break;
					case 77:
						if (func_6(&Local_36, &(Local_36.f_171), func_43(23), 1, 0, 1065353216, 1, 0))
						{
							if (!func_20(Local_36.f_162, 1))
							{
								func_27(&(Local_36.f_162), 1);
							}
							func_27(&(Local_36.f_163), 8388608);
							func_14(&iLocal_35, 69);
						}
						break;
					case 78:
						if (func_6(&Local_36, &(Local_36.f_171), func_43(24), 1, 0, 1065353216, 1, 0))
						{
							if (!func_20(Local_36.f_162, 1))
							{
								func_27(&(Local_36.f_162), 1);
							}
							func_27(&(Local_36.f_163), 16777216);
							func_14(&iLocal_35, 69);
						}
						break;
					case 79:
						if (func_6(&Local_36, &(Local_36.f_171), func_43(25), 1, 0, 1065353216, 1, 0))
						{
							if (!func_20(Local_36.f_162, 1))
							{
								func_27(&(Local_36.f_162), 1);
							}
							func_27(&(Local_36.f_163), 33554432);
							func_14(&iLocal_35, 69);
						}
						break;
					case 70:
						if (func_48(&Local_36, 131072, func_47(12)))
						{
							if (!func_20(Local_36.f_162, 1))
							{
								func_27(&(Local_36.f_162), 1);
							}
							func_27(&(Local_36.f_163), 131072);
							func_14(&iLocal_35, 69);
						}
						break;
					case 91:
						if (!ENTITY::IS_ENTITY_DEAD(&(Local_36.f_143[0])) && FIRE::IS_ENTITY_ON_FIRE(&(Local_36.f_143[0])))
						{
							func_51(&(Local_36.f_143[0]), 0, 0);
						}
						func_14(&iLocal_35, 93);
						break;
					case 92:
						break;
					case 93:
						break;
					default:
						break;
				}
				func_52(&Local_36, &iLocal_35);
			}
		}
	}

void func_1(var uParam0, bool bParam1)
{
	int iVar0;

	func_53(4);
	PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "SPID_BLIND_MAN_CASSIDY");
	func_54(&(uParam0->f_224), 0, 1, 1, 0);
	func_55(&(uParam0->f_203), &(uParam0->f_224));
	func_41(0);
	func_56(uParam0);
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()) && uParam0->f_186)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
		uParam0->f_186 = 0;
	}
	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_145))
	{
		ITEMSET::DESTROY_ITEMSET(uParam0->f_145);
	}
	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_146))
	{
		ITEMSET::DESTROY_ITEMSET(uParam0->f_146);
	}
	func_57(&uLocal_14);
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_165) && ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_165, 0))
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_165, "p_cuptin01x", uParam0->f_147);
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_165, "p_wedgestick02x", uParam0->f_148);
		ENTITY::APPLY_FORCE_TO_ENTITY(uParam0->f_147, 1, 0f, 0f, 0.5f, 0f, 0f, -0.1f, 0, true, true, true, false, true);
		ENTITY::APPLY_FORCE_TO_ENTITY(uParam0->f_148, 1, 0f, 0f, 0.5f, 0f, 0f, -0.1f, 0, true, true, true, false, true);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_169) && ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_169, 0))
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_169, "p_cuptin01x", uParam0->f_147);
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_169, "p_wedgestick02x", uParam0->f_148);
		ENTITY::APPLY_FORCE_TO_ENTITY(uParam0->f_147, 1, 0f, 0f, 0.5f, 0f, 0f, -0.1f, 0, true, true, true, false, true);
		ENTITY::APPLY_FORCE_TO_ENTITY(uParam0->f_148, 1, 0f, 0f, 0.5f, 0f, 0f, -0.1f, 0, true, true, true, false, true);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_171) && ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_171, 0))
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_171, "p_cuptin01x", uParam0->f_147);
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_171, "p_wedgestick02x", uParam0->f_148);
		ENTITY::APPLY_FORCE_TO_ENTITY(uParam0->f_147, 1, 0f, 0f, 0.5f, 0f, 0f, -0.1f, 0, true, true, true, false, true);
		ENTITY::APPLY_FORCE_TO_ENTITY(uParam0->f_148, 1, 0f, 0f, 0.5f, 0f, 0f, -0.1f, 0, true, true, true, false, true);
	}
	if (func_58(uParam0->f_136) && (func_59(uParam0->f_136) || func_60(uParam0->f_136)))
	{
		func_61(uParam0->f_136, 0, 2);
	}
	if (func_62(&(uParam0->f_192)))
	{
		GRAPHICS::_0x9CF1836C03FB67A2(&(uParam0->f_192), 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_147))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_147));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_148))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_148));
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_149[iVar0])))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(uParam0->f_149[iVar0]);
		}
		iVar0++;
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_165))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_165);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_154))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_154));
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_165))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_165);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_171))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_171);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_155))
	{
		func_63(uParam0->f_155);
		VOLUME::_0x43F867EF5C463A53(uParam0->f_155);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_156))
	{
		VOLUME::_0x43F867EF5C463A53(uParam0->f_156);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_158))
	{
		VOLUME::_0x43F867EF5C463A53(uParam0->f_158);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_159))
	{
		VOLUME::_0x43F867EF5C463A53(uParam0->f_159);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_157))
	{
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_157);
		POPULATION::_0xA1CFB35069D23C23(uParam0->f_157);
		VOLUME::_0x43F867EF5C463A53(uParam0->f_157);
	}
	func_64(uParam0);
	func_65(uParam0->f_143[0], &(uParam0->f_176), -23350179, 20f, 1);
	if (!ENTITY::IS_ENTITY_DEAD(&(uParam0->f_143[0])))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(&(uParam0->f_143[0]), 0f);
	}
	if (bParam1)
	{
		if (VOLUME::_0x92A78D0BEDB332A3(((*(*Global_1396257)[4 /*638*/])[func_66(4) /*48*/])->f_47))
		{
			VOLUME::_0x43F867EF5C463A53(((*(*Global_1396257)[4 /*638*/])[func_66(4) /*48*/])->f_47);
		}
		if (!ENTITY::IS_ENTITY_DEAD(&(uParam0->f_143[0])))
		{
			PED::SET_PED_CONFIG_FLAG(&(uParam0->f_143[0]), 153, false);
			PED::DELETE_PED(uParam0->f_143[0]);
		}
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

void func_2(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	char[] cVar2[8];
	int iVar3;

	if (func_20(uParam0->f_162, 4))
	{
		func_67(uParam0);
	}
	if (*uParam1 <= 2 || *uParam1 >= 91)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_143[0])))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(&(uParam0->f_143[0])) && PED::IS_PED_RAGDOLL(&(uParam0->f_143[0])))
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()) && uParam0->f_186)
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
			uParam0->f_186 = 0;
		}
		func_51(&(uParam0->f_143[0]), 0, 0);
		(Global_40.f_11623[4 /*8*/])->f_2 = func_68();
		func_69(uParam0->f_143[0]);
		PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "SPID_BLIND_MAN_CASSIDY");
		ENTITY::DETACH_ENTITY(uParam0->f_147, true, true);
		func_39(uParam0, 1, 1);
		func_1(uParam0, 0);
		func_14(uParam1, 91);
		return;
	}
	if (!func_70(&(uParam0->f_143[0]), 0))
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()) && uParam0->f_186)
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
			uParam0->f_186 = 0;
		}
		(Global_40.f_11623[4 /*8*/])->f_2 = func_68();
		func_69(uParam0->f_143[0]);
		PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "SPID_BLIND_MAN_CASSIDY");
		ENTITY::DETACH_ENTITY(uParam0->f_147, true, true);
		func_39(uParam0, 1, 1);
		func_1(uParam0, 0);
		func_14(uParam1, 91);
		return;
	}
	if (PED::IS_PED_DEAD_OR_DYING(&(uParam0->f_143[0]), true))
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()) && uParam0->f_186)
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
			uParam0->f_186 = 0;
		}
		(Global_40.f_11623[4 /*8*/])->f_2 = func_68();
		func_69(uParam0->f_143[0]);
		PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "SPID_BLIND_MAN_CASSIDY");
		ENTITY::DETACH_ENTITY(uParam0->f_147, true, true);
		func_39(uParam0, 1, 1);
		func_1(uParam0, 0);
		func_14(uParam1, 91);
		return;
	}
	if (func_71(uParam0, uParam1))
	{
		return;
	}
	if (func_72(uParam0))
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()) && uParam0->f_186)
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
			uParam0->f_186 = 0;
		}
		func_73(4);
		if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(&(uParam0->f_143[0])))
		{
			func_74(&(uParam0->f_143[0]), 0);
		}
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(2, 4 + 1);
		iVar1 = iVar0;
		cVar2 = func_75(iVar1);
		iVar3 = func_76(iVar1);
		func_77(&(uParam0->f_143[0]), cVar2, 291934926, Global_35, 1, "CASSIDY", iVar3, 1);
		func_39(uParam0, 1, 1);
		if (!func_20(uParam0->f_162, 4))
		{
			func_27(&(uParam0->f_162), 4);
		}
	}
}

void func_3(var uParam0, var uParam1, var uParam2)
{
	if (!func_20(uParam0->f_162, 524288))
	{
		if (func_78(4, func_66(4), uParam2, &(uParam0->f_143[0])))
		{
			if (*uParam1 >= 6 && *uParam1 <= 23)
			{
				func_27(&(uParam0->f_162), 524288);
				func_14(uParam1, 88);
			}
			else if (*uParam1 >= 24 && *uParam1 <= 80)
			{
			}
		}
	}
	if (!func_70(Global_35, 0))
	{
		func_14(uParam1, 88);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(((*(*Global_1396257)[4 /*638*/])[func_66(4) /*48*/])->f_47))
	{
		if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, ((*(*Global_1396257)[4 /*638*/])[func_66(4) /*48*/])->f_47, true, 0))
		{
			func_1(uParam0, 1);
			func_14(uParam1, 93);
		}
	}
	else
	{
		func_1(uParam0, 1);
		func_14(uParam1, 93);
	}
}

int func_4(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		if (func_79())
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
		if (func_80(0) == 7 || func_81())
		{
			return 1;
		}
	}
	if (func_82(&(((*Global_1396257)[iParam0 /*638*/])->f_626), 1024))
	{
		return 1;
	}
	return 0;
}

char* func_5(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0 = "pbl_PBDMC_IG1_P1_1xHELP";
			break;
		case 1:
			sVar0 = "pbl_PBDMC_IG1_P1_3xHELP";
			break;
		case 2:
			sVar0 = "pbl_PBDMC_IG1_P1_CHARITY";
			break;
		case 3:
			sVar0 = "pbl_PBDMC_IG1_P1_PENNY";
			break;
		case 4:
			sVar0 = "pbl_PBDMC_IG1_P1_COUGH";
			break;
		case 5:
			sVar0 = "pbl_PDBMC_IG1_P1_GIVE";
			break;
		case 6:
			sVar0 = "pbl_PDBMC_IG1_P1_HELP_ME";
			break;
		case 7:
			sVar0 = "pbl_PDBMC_IG1_P1_HELP_ME_PLEASE";
			break;
		case 8:
			sVar0 = "pbl_PDBMC_IG1_P1_KINDNESS";
			break;
		case 9:
			sVar0 = "pbl_PDBMC_IG1_P1_YOUR_FORTUNE";
			break;
		case 10:
			sVar0 = "pbl_PDBMC_IG2_P1_BLIND_OLD_FOOL";
			break;
		case 11:
			sVar0 = "pbl_PDBMC_IG2_P1_I_TELL_THEE";
			break;
		case 12:
			sVar0 = "pbl_PDBMC_IG2_P1_OLD_BLIND_MAN";
			break;
		case 13:
			sVar0 = "pbl_PDBMC_IG2_P1_SEEK_REDEMPTION";
			break;
		case 14:
			sVar0 = "pbl_PDBMC_IG2_P1_SEEK_SALVATION";
			break;
		case 15:
			sVar0 = "pbl_PDBMC_IG2_P1_THEE_SHALL_SEE";
			break;
		case 16:
			sVar0 = "pbl_base_reset";
			break;
		case 23:
			sVar0 = "pbl_Sitting_BASE";
			break;
		case 24:
			sVar0 = "pbl_Count_Money";
			break;
		case 25:
			sVar0 = "pbl_Sit_to_Stand";
			break;
		case 26:
			sVar0 = "pbl_Stand_to_Sit";
			break;
		case 27:
			sVar0 = "pbl_Cower_to_Sitting";
			break;
		case 28:
			sVar0 = "pbl_Sit_to_Cower";
			break;
		case 29:
			sVar0 = "pbl_Stand_To_Cower";
			break;
		case 30:
			sVar0 = "pbl_Cower_Base";
			break;
		case 31:
			sVar0 = "pbl_BackLeft_Enter";
			break;
		case 32:
			sVar0 = "pbl_BackRight_Enter";
			break;
		case 33:
			sVar0 = "pbl_Walk_Enter_Right_Slow";
			break;
		case 34:
			sVar0 = "pbl_Walk_Enter_Right_Med";
			break;
		case 35:
			sVar0 = "pbl_Walk_Enter_Right_Fast";
			break;
		case 36:
			sVar0 = "pbl_Walk_Enter_Left_Slow";
			break;
		case 37:
			sVar0 = "pbl_Walk_Enter_Left_Med";
			break;
		case 38:
			sVar0 = "pbl_Walk_Enter_Left_Fast";
			break;
		case 39:
			sVar0 = "pbl_Back_Enter";
			break;
	}
	return sVar0;
}

int func_6(var uParam0, var uParam1, char* sParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
{
	if (ANIMSCENE::_0x25557E324489393C(*uParam1))
	{
		if (bParam7)
		{
			if (!ANIMSCENE::_0x477122B8D05E7968(*uParam1, 1, 0))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(*uParam1);
				return 0;
			}
			if ((!ANIMSCENE::_0x23E33CB9F4A3F547(*uParam1, sParam2) && !ANIMSCENE::_0x0DF57F86FE71DBE5(*uParam1, sParam2)) && !ANIMSCENE::_0x1F0E401031E20146(*uParam1, sParam2))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(*uParam1, sParam2);
				return 0;
			}
			if (ANIMSCENE::_0x23E33CB9F4A3F547(*uParam1, sParam2) && !ANIMSCENE::_0x1F0E401031E20146(*uParam1, sParam2))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*uParam1, sParam2, true);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam1, "internal_loop", bParam3, false);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam1, "internal_loop_end", bParam4, false);
				ANIMSCENE::SET_ANIM_SCENE_RATE(*uParam1, fParam5);
				return 0;
			}
		}
		else if ((!ANIMSCENE::_0xCBFC7725DE6CE2E0(*uParam1, 0) && ANIMSCENE::_0x477122B8D05E7968(*uParam1, 1, 0)) && !ANIMSCENE::_0xD8254CB2C586412B(*uParam1, 0))
		{
			ANIMSCENE::START_ANIM_SCENE(*uParam1);
		}
		else if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(*uParam1, 0) && !ANIMSCENE::_0x477122B8D05E7968(*uParam1, 1, 0))
		{
		}
		if (ANIMSCENE::_0xCBFC7725DE6CE2E0(*uParam1, 0))
		{
			if (((!bParam7 && !ANIMSCENE::_0x23E33CB9F4A3F547(*uParam1, sParam2)) && !ANIMSCENE::_0x0DF57F86FE71DBE5(*uParam1, sParam2)) && !ANIMSCENE::_0x1F0E401031E20146(*uParam1, sParam2))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(*uParam1, sParam2);
			}
			if (bParam6)
			{
				if (!func_83(uParam0->f_143[0], 50f, 0))
				{
					return 0;
				}
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uParam0->f_143[0]), -973995573))
			{
				func_84(12, 0, 0, "", &(uParam0->f_143[0]), 0, 1065353216, 0);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uParam0->f_143[0]), -1993324115))
			{
				func_77(&(uParam0->f_143[0]), "GREET_GENERAL_STRANGER", 291934926, Global_35, 1, "CASSIDY", 0, 1);
			}
			if ((!bParam7 && !ANIMSCENE::_0x1F0E401031E20146(*uParam1, sParam2)) && ANIMSCENE::_0x23E33CB9F4A3F547(*uParam1, sParam2))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*uParam1, sParam2, true);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam1, "internal_loop", bParam3, false);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam1, "internal_loop_end", bParam4, false);
				ANIMSCENE::SET_ANIM_SCENE_RATE(*uParam1, fParam5);
				return 0;
			}
			else if (ANIMSCENE::_0x1F0E401031E20146(*uParam1, sParam2))
			{
				if (ANIMSCENE::_0x8D81E7824B7753F7(*uParam1, "s_base_end", 1) && !bParam4)
				{
					if (func_85(uParam1, uParam0->f_183))
					{
						uParam0->f_183 = sParam2;
						return 1;
					}
				}
				else if (ANIMSCENE::_0x8D81E7824B7753F7(*uParam1, "s_ARMIN_base_end", 1) && !bParam4)
				{
					if (func_85(uParam1, uParam0->f_183))
					{
						uParam0->f_183 = sParam2;
						return 1;
					}
				}
				else if (ANIMSCENE::_0x8D81E7824B7753F7(*uParam1, "s_base", 1) && bParam4)
				{
					if (func_85(uParam1, uParam0->f_183))
					{
						uParam0->f_183 = sParam2;
						return 1;
					}
				}
				else if (ANIMSCENE::_0x8D81E7824B7753F7(*uParam1, "s_ARMIN_base", 1) && bParam4)
				{
					if (func_85(uParam1, uParam0->f_183))
					{
						uParam0->f_183 = sParam2;
						return 1;
					}
				}
				else if (bParam4 && ENTITY::HAS_ANIM_EVENT_FIRED(&(uParam0->f_143[0]), -1527527524))
				{
					if (func_85(uParam1, uParam0->f_183))
					{
						uParam0->f_183 = sParam2;
						return 1;
					}
				}
			}
		}
	}
	return 0;
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
			(Global_40.f_11623[iParam0 /*8*/])->f_2 = func_68();
			*uParam4 = 1;
			return 1;
		}
	}
	if (fParam5 == 0f)
	{
		if (!func_26(Global_35, *uParam2, fParam6, 1))
		{
			return 0;
		}
	}
	else if (fParam5 > fParam6)
	{
		return 0;
	}
	if (!func_30(uParam3))
	{
		func_31(uParam3, 0f);
	}
	else if (func_86(uParam3) >= 2f)
	{
		if (!func_87((Global_40.f_11623[iParam0 /*8*/])->f_2))
		{
			func_73(iParam0);
			*uParam4 = 1;
			func_29(uParam3);
			return 1;
		}
		else
		{
			func_73(iParam0);
			*uParam4 = 1;
			func_29(uParam3);
			return 1;
		}
	}
	return 0;
}

void func_8(var uParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_156))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_156, true, 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -762150781, false);
	}
	if (func_20(uParam0->f_162, 2) || func_20(uParam0->f_162, 4))
	{
		func_88(&(uParam0->f_203), 0);
		func_89(uParam0->f_224[0 /*17*/], 0, 0);
		func_89(uParam0->f_224[1 /*17*/], 0, 0);
		uParam0->f_259 = 3;
	}
	else
	{
		if (!func_20(uParam0->f_162, 128))
		{
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_156, true, 0) && !PED::IS_PED_ON_MOUNT(Global_35))
			{
				func_38(uParam0, 1);
				func_89(uParam0->f_224[0 /*17*/], 0, 0);
				func_89(uParam0->f_224[1 /*17*/], 0, 0);
				uParam0->f_259 = 3;
				func_27(&(uParam0->f_162), 128);
			}
			else if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_156, true, 0) || PED::IS_PED_ON_MOUNT(Global_35))
			{
				func_89(uParam0->f_224[0 /*17*/], 0, 0);
				func_89(uParam0->f_224[1 /*17*/], 0, 0);
				uParam0->f_259 = 3;
			}
		}
		else if ((((!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_156, true, 0) || PED::IS_PED_ON_MOUNT(Global_35)) || func_90()) || func_91(uParam0->f_143[0], &(uParam0->f_145), 1071644672, 1074790400)) || func_92(uParam0->f_143[0], &(uParam0->f_160), &(uParam0->f_146), 1.75f, 2.25f, 2502655))
		{
			if (uParam0->f_259 != 3)
			{
				func_88(&(uParam0->f_203), 0);
				func_89(uParam0->f_224[0 /*17*/], 0, 0);
				func_89(uParam0->f_224[1 /*17*/], 0, 0);
				uParam0->f_259 = 3;
			}
		}
		else if ((!ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_169, 0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(&(uParam0->f_143[0]))) || *iParam1 != 49)
		{
			if (uParam0->f_259 != 3)
			{
				func_88(&(uParam0->f_203), 0);
				func_38(uParam0, 1);
				func_89(uParam0->f_224[0 /*17*/], 0, 0);
				func_89(uParam0->f_224[1 /*17*/], 0, 0);
				uParam0->f_259 = 3;
			}
		}
		else if (uParam0->f_259 != 2)
		{
			func_88(&(uParam0->f_203), 0);
			func_38(uParam0, 1);
			func_89(uParam0->f_224[0 /*17*/], 1, 0);
			func_89(uParam0->f_224[1 /*17*/], 0, 0);
			uParam0->f_259 = 2;
		}
		if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_156, true, 0))
		{
			if (func_93(1) < 100 || PED::IS_PED_ON_MOUNT(Global_35))
			{
				if (uParam0->f_259 != 3)
				{
					func_88(&(uParam0->f_203), 0);
					func_89(uParam0->f_224[0 /*17*/], 0, 0);
					func_89(uParam0->f_224[1 /*17*/], 0, 0);
					uParam0->f_259 = 3;
				}
			}
		}
	}
	switch (func_95(uParam0->f_143[0], &(uParam0->f_203), 18f, &(uParam0->f_224), 0f, 2, 0, "", func_94(uParam0->f_259, 0, 0), 0, 0, 2, -1082130432))
	{
		case 0:
			if (!func_20(uParam0->f_162, 2))
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(100, 200);
				func_96(&(uParam0->f_143[0]), iVar0);
				func_97(4);
				func_98(4, uParam0->f_143[0], &(uParam0->f_162), 256);
				func_99();
				func_41(1);
				func_100(uParam0);
				func_102(4, func_101());
				func_27(&(uParam0->f_162), 2);
			}
			break;
	}
}

void func_9(var uParam0, int iParam1)
{
	if (func_20(uParam0->f_162, 512) && uParam0->f_190 >= 4)
	{
		return;
	}
	if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(&(uParam0->f_143[0])))
	{
		if (func_103(uParam0->f_143[0], &(uParam0->f_184), &(uParam0->f_187), &(uParam0->f_190), 4, 0, 4000, 0))
		{
			func_27(&(uParam0->f_162), 512);
			return;
		}
	}
	if (iParam1 >= 6 && iParam1 <= 16)
	{
		if (func_103(uParam0->f_143[0], &(uParam0->f_184), &(uParam0->f_187), &(uParam0->f_190), 4, 0, 4000, 0))
		{
			func_27(&(uParam0->f_162), 512);
			return;
		}
	}
	else if (iParam1 >= 18 && iParam1 <= 23)
	{
		if (func_103(uParam0->f_143[0], &(uParam0->f_184), &(uParam0->f_187), &(uParam0->f_190), 4, 0, 4000, 0))
		{
			func_27(&(uParam0->f_162), 512);
			return;
		}
	}
}

void func_10(int iParam0, var uParam1, int iParam2, int iParam3, float fParam4)
{
	char* sVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0) || Global_1935630->f_12)
	{
		return;
	}
	sVar0 = func_104(iParam3);
	if (fParam4 == 0f)
	{
		if (func_26(iParam0, Global_35, 15f, 1))
		{
			if (!func_105(*uParam1, iParam2))
			{
				if (AUDIO::_0x6339C1EA3979B5F7(sVar0, "special_ped_scenes"))
				{
					func_106(uParam1, iParam2);
				}
			}
		}
		else if (func_105(*uParam1, iParam2))
		{
			AUDIO::_0x9428447DED71FC7E("special_ped_scenes");
			func_107(uParam1, iParam2);
		}
	}
	else if (fParam4 <= 15f)
	{
		if (!func_105(*uParam1, iParam2))
		{
			if (AUDIO::_0x6339C1EA3979B5F7(sVar0, "special_ped_scenes"))
			{
				func_106(uParam1, iParam2);
			}
		}
	}
	else if (func_105(*uParam1, iParam2))
	{
		AUDIO::_0x9428447DED71FC7E("special_ped_scenes");
		func_107(uParam1, iParam2);
	}
}

void func_11(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_143[0])))
	{
		return;
	}
	PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(&(uParam0->f_143[0]), 0, 1);
}

void func_12(var uParam0, int iParam1, var uParam2)
{
	struct<4> Var0;

	PED::_0xED9582B3DA8F02B4(1);
	uParam0->f_164 = (16 - 1);
	uParam0->f_168 = 0;
	uParam0->f_170 = (26 - 1);
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_165))
	{
		uParam0->f_165 = ANIMSCENE::_CREATE_ANIM_SCENE(func_108(), 32, func_5(16), false, true);
	}
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_169))
	{
		uParam0->f_169 = ANIMSCENE::_CREATE_ANIM_SCENE(func_109(), 32, func_34(9), false, true);
	}
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_171))
	{
		uParam0->f_171 = ANIMSCENE::_CREATE_ANIM_SCENE(func_110(), 32, func_43(0), false, true);
	}
	if ((ANIMSCENE::_0x25557E324489393C(uParam0->f_165) && ANIMSCENE::_0x25557E324489393C(uParam0->f_169)) && ANIMSCENE::_0x25557E324489393C(uParam0->f_171))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_165);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_169);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_171);
		HUD::_0xF66090013DE648D5("SPBC");
		HUD::_0xF66090013DE648D5("SPBMCAU");
		HUD::_0xF66090013DE648D5("SPDEF");
		STREAMING::REQUEST_MODEL(uParam0->f_137, false);
		STREAMING::REQUEST_MODEL(uParam0->f_138, false);
		STREAMING::REQUEST_MODEL(uParam0->f_139, false);
		STREAMING::REQUEST_MODEL(uParam0->f_140, false);
		STREAMING::REQUEST_MODEL(uParam0->f_141, false);
		func_111(uParam0);
		func_112(uParam0->f_155, "SP_BlindManCassidy1_Block", 1, 0, 0, 0, -1082130432);
		POPULATION::_0xB56D41A694E42E86(uParam0->f_157, 2238463, 0, 0, -1, -1, 10);
		POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_157, 2238463, 0, 0, -1, -1, 0);
		Var0 = { func_113() };
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_165, Var0, Var0.f_3, 2);
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_169, Var0, Var0.f_3, 2);
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_171, Var0, Var0.f_3, 2);
		uParam0->f_136 = func_115(4, 0, 9, func_114(4));
		if (!func_58(uParam0->f_136))
		{
		}
		if (func_42())
		{
			func_116(uParam0, Global_35, "JOHN", 0);
		}
		else
		{
			func_116(uParam0, Global_35, "ARTHUR", 0);
		}
		func_117(uParam2);
		func_118(&(uParam0->f_98), 1);
		func_119(&(uParam0->f_98), 0);
		func_120(&(uParam0->f_98), 0);
		func_121(&(uParam0->f_98), 0);
		func_122(&(uParam0->f_98), 1);
		func_123(&(uParam0->f_98), 0);
		func_124(&(uParam0->f_98), 0);
		func_125(&(uParam0->f_98), 0);
		func_126(&(uParam0->f_98), 0);
		func_127(&(uParam0->f_98), 1);
		func_128(&(uParam0->f_98), 1);
		func_129(&(uParam0->f_98), 1);
		func_130(&(uParam0->f_98), 1);
		func_131(&(uParam0->f_98), 1);
		func_132(&(uParam0->f_98), 1);
		func_133(&(uParam0->f_98), 1);
		func_134(&(uParam0->f_98), 1);
		func_135(&(uParam0->f_98), 1);
		func_136(&(uParam0->f_98), 1);
		if (func_58(uParam0->f_136))
		{
			if (!func_137(uParam0->f_136, 1))
			{
				func_14(iParam1, 1);
			}
			else
			{
				func_14(iParam1, 92);
			}
		}
	}
}

int func_13(var uParam0, var uParam1)
{
	if ((((((((((ANIMSCENE::_0x477122B8D05E7968(uParam0->f_165, 1, 0) && ANIMSCENE::_0x477122B8D05E7968(uParam0->f_169, 1, 0)) && ANIMSCENE::_0x477122B8D05E7968(uParam0->f_171, 1, 0)) && HUD::_0xD0976CC34002DB57("SPBC")) && HUD::_0xD0976CC34002DB57("SPBMCAU")) && STREAMING::HAS_MODEL_LOADED(uParam0->f_137)) && STREAMING::HAS_MODEL_LOADED(uParam0->f_138)) && STREAMING::HAS_MODEL_LOADED(uParam0->f_139)) && STREAMING::HAS_MODEL_LOADED(uParam0->f_140)) && STREAMING::HAS_MODEL_LOADED(uParam0->f_141)) && PED::_0x5C16855277819BBF() == 1)
	{
		if (func_138(&(uParam0->f_136), uParam1))
		{
			return 1;
		}
	}
	if (!ANIMSCENE::_0x477122B8D05E7968(uParam0->f_165, 1, 0))
	{
	}
	if (!ANIMSCENE::_0x477122B8D05E7968(uParam0->f_169, 1, 0))
	{
	}
	if (!ANIMSCENE::_0x477122B8D05E7968(uParam0->f_171, 1, 0))
	{
	}
	if (!HUD::_0xD0976CC34002DB57("SPBC"))
	{
	}
	if (!HUD::_0xD0976CC34002DB57("SPBMCAU"))
	{
	}
	if (!HUD::_0xD0976CC34002DB57("SPDEF"))
	{
	}
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_137))
	{
	}
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_138))
	{
	}
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_139))
	{
	}
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_141))
	{
	}
	if (PED::_0x5C16855277819BBF() != 1)
	{
	}
	return 0;
}

void func_14(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

int func_15(var uParam0)
{
	struct<4> Var0;
	vector3 vVar4;
	vector3 vVar8;

	Var0 = { func_139(0) };
	vVar4 = { func_139(2) };
	vVar8 = { func_139(1) };
	if (((func_140(uParam0->f_143[0], uParam0->f_137, Var0, Var0.f_3, 1, 1, 1) && func_141(&(uParam0->f_147), uParam0->f_138, vVar8)) && func_141(&(uParam0->f_148), uParam0->f_139, vVar4)) && func_141(&(uParam0->f_154), uParam0->f_141, vVar8.x, vVar8.y, (vVar8.z - 1f)))
	{
		if (func_70(&(uParam0->f_143[0]), 0))
		{
			func_143(&(uParam0->f_143[0]), func_142(Var0));
			func_144(uParam0);
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(&(uParam0->f_143[0]), "special_ped_group", 0f);
			PED::ADD_RELATIONSHIP_GROUP("blind_man_cassidy", &(uParam0->f_202));
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(&(uParam0->f_143[0]), uParam0->f_202);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, uParam0->f_202, 707888648);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(uParam0->f_143[0]), true);
			PED::SET_PED_CONFIG_FLAG(&(uParam0->f_143[0]), 297, true);
			PED::SET_PED_CONFIG_FLAG(&(uParam0->f_143[0]), 130, true);
			PED::SET_PED_CONFIG_FLAG(&(uParam0->f_143[0]), 317, true);
			PED::SET_PED_CONFIG_FLAG(&(uParam0->f_143[0]), 315, true);
			PED::SET_PED_CONFIG_FLAG(&(uParam0->f_143[0]), 344, true);
			PED::SET_PED_CONFIG_FLAG(&(uParam0->f_143[0]), 26, true);
			PED::SET_PED_CONFIG_FLAG(&(uParam0->f_143[0]), 448, true);
			PED::SET_PED_CONFIG_FLAG(&(uParam0->f_143[0]), 153, true);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(&(uParam0->f_143[0]), 524369);
			WEAPON::REMOVE_ALL_PED_WEAPONS(&(uParam0->f_143[0]), true, true);
			PED::SET_PED_CONFIG_FLAG(&(uParam0->f_143[0]), 44, true);
			func_116(uParam0, &(uParam0->f_143[0]), "CASSIDY", 0);
			ENTITY::_0x203BEFFDBE12E96A(&(uParam0->f_143[0]), Var0, Var0.f_3, 1, 0, 1);
			if (func_42())
			{
				func_116(uParam0, Global_35, "JOHN", 0);
			}
			else
			{
				func_116(uParam0, Global_35, "ARTHUR", 0);
			}
			func_145(&(uParam0->f_143[0]), 1);
			PED::_0x5BCF0B79D4F5DBA3(&(uParam0->f_143[0]), 5f);
			PED::_0x2E5B5D1F1453E08E(&(uParam0->f_143[0]), 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_165, "cs_cassidy", &(uParam0->f_143[0]), 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_165, "p_cuptin01x", uParam0->f_147, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_165, "p_wedgestick02x", uParam0->f_148, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_165, "p_coin01x", &(uParam0->f_149[0]), 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_165, "p_coin01x^1", &(uParam0->f_149[1]), 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_165, "p_coin01x^2", &(uParam0->f_149[2]), 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_165, "p_coin01x^3", &(uParam0->f_149[3]), 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_165, "p_coinStack02", uParam0->f_154, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_169, "cs_cassidy", &(uParam0->f_143[0]), 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_169, "p_cuptin01x", uParam0->f_147, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_169, "p_wedgestick02x", uParam0->f_148, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_169, "p_coin01x", &(uParam0->f_149[0]), 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_169, "p_coin01x^1", &(uParam0->f_149[1]), 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_169, "p_coin01x^2", &(uParam0->f_149[2]), 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_169, "p_coin01x^3", &(uParam0->f_149[3]), 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_169, "player_zero", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_169, "p_coinStack02", uParam0->f_154, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_171, "cs_cassidy", &(uParam0->f_143[0]), 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_171, "p_cuptin01x", uParam0->f_147, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_171, "p_coin01x", &(uParam0->f_149[0]), 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_171, "p_coin01x^1", &(uParam0->f_149[1]), 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_171, "p_coin01x^2", &(uParam0->f_149[2]), 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_171, "p_coin01x^3", &(uParam0->f_149[3]), 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_171, "p_wedgestick02x", uParam0->f_148, 0);
			func_146(uParam0->f_143[0], &(uParam0->f_176), -23350179, 20f, 3600f);
			func_38(uParam0, 0);
			func_147(&(uParam0->f_143[0]), 4);
			PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), &(uParam0->f_143[0]), "SPECIAL_PED_LIGHTWEIGHT_1_0", 0f, 0f, 0f, 0, "SPID_BLIND_MAN_CASSIDY");
			PED::_0x7C00CFC48A782DC0(uParam0->f_158, &(uParam0->f_143[0]), 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
			PED::_0x4FD80C3DD84B817B(&(uParam0->f_143[0]));
			PED::_0x58F7DB5BD8FA2288(&(uParam0->f_143[0]));
			if (!func_62(&(uParam0->f_192)))
			{
				Var0 = { func_139(3) };
				uParam0->f_192 = GRAPHICS::_0xFA50F79257745E74(Var0, Var0.f_3, 1, -1, 0);
			}
			PED::_0x7C00CFC48A782DC0(uParam0->f_159, &(uParam0->f_143[0]), 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
			VOLUME::_0x5B23DFF8E0948BB2(uParam0->f_159, 0);
			VOLUME::_0xBE551C2CC421185D(uParam0->f_159, 1);
			return 1;
		}
	}
	return 0;
}

int func_16()
{
	int iVar0;

	switch (func_148())
	{
		case 3:
			iVar0 = 86;
			break;
		case 9:
			iVar0 = 86;
			break;
		case 10:
			iVar0 = 85;
			break;
		case 13:
			iVar0 = 83;
			break;
		case 4:
			iVar0 = 86;
			break;
	}
	return iVar0;
}

void func_17(var uParam0, int iParam1)
{
	if (func_20(uParam0->f_162, 4))
	{
		func_14(iParam1, 90);
	}
	else if ((ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_156, true, 0) && !func_20(uParam0->f_162, 2)) && !func_20(uParam0->f_162, 1))
	{
		func_14(iParam1, 50);
	}
	else if (func_20(uParam0->f_162, 2) && !func_20(uParam0->f_162, 1))
	{
		func_14(iParam1, 51);
	}
	else
	{
		func_14(iParam1, 48);
	}
}

int func_18(var uParam0, var uParam1, bool bParam2)
{
	if (ANIMSCENE::_0x25557E324489393C(*uParam1))
	{
		if (ANIMSCENE::_0xCBFC7725DE6CE2E0(*uParam1, 0))
		{
			if ((((ENTITY::HAS_ANIM_EVENT_FIRED(&(uParam0->f_143[0]), -1527527524) || ANIMSCENE::_0x8D81E7824B7753F7(*uParam1, "s_ARMIN_base_end", 1)) || ANIMSCENE::_0x8D81E7824B7753F7(*uParam1, "s_ARMIN_base", 1)) || ANIMSCENE::_0x8D81E7824B7753F7(*uParam1, "s_base_end", 1)) || ANIMSCENE::_0x8D81E7824B7753F7(*uParam1, "s_base", 1))
			{
				if (bParam2)
				{
					return 1;
				}
				else if (!func_30(&(uParam0->f_130)))
				{
					uParam0->f_161 = BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(1, 2));
					func_31(&(uParam0->f_130), 0f);
				}
				else if (func_86(&(uParam0->f_130)) > uParam0->f_161)
				{
					func_29(&(uParam0->f_130));
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_19(var uParam0, int iParam1)
{
	if (uParam0->f_173 == -1)
	{
		uParam0->f_173 = func_149(0, (16 - 1), uParam0->f_164);
	}
	uParam0->f_164 = uParam0->f_173;
	switch (uParam0->f_173)
	{
		case 0:
			uParam0->f_173++;
			func_14(iParam1, 6);
			break;
		case 1:
			uParam0->f_173++;
			func_14(iParam1, 7);
			break;
		case 2:
			uParam0->f_173++;
			func_14(iParam1, 8);
			break;
		case 3:
			uParam0->f_173++;
			func_14(iParam1, 9);
			break;
		case 4:
			uParam0->f_173++;
			func_14(iParam1, 10);
			break;
		case 5:
			uParam0->f_173++;
			func_14(iParam1, 11);
			break;
		case 6:
			uParam0->f_173++;
			func_14(iParam1, 12);
			break;
		case 7:
			uParam0->f_173++;
			func_14(iParam1, 14);
			break;
		case 8:
			uParam0->f_173++;
			func_14(iParam1, 15);
			break;
		case 9:
			uParam0->f_173++;
			func_14(iParam1, 16);
			break;
		case 10:
			uParam0->f_173++;
			func_14(iParam1, 18);
			break;
		case 11:
			uParam0->f_173++;
			func_14(iParam1, 19);
			break;
		case 12:
			uParam0->f_173++;
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CASSIDY"));
			func_14(iParam1, 20);
			break;
		case 13:
			uParam0->f_173++;
			func_14(iParam1, 21);
			break;
		case 14:
			uParam0->f_173++;
			func_14(iParam1, 22);
			break;
		case 15:
			uParam0->f_173 = -1;
			func_14(iParam1, 23);
			break;
		case 16:
			func_14(iParam1, 17);
			break;
		default:
			uParam0->f_173 = -1;
			break;
	}
}

bool func_20(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

char* func_21(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0 = "pbl_IDLE_A";
			break;
		case 1:
			sVar0 = "pbl_IDLE_B";
			break;
		case 2:
			sVar0 = "pbl_IDLE_C";
			break;
		case 3:
			sVar0 = "pbl_IDLE_D";
			break;
		case 4:
			sVar0 = "pbl_IDLE_E";
			break;
		case 5:
			sVar0 = "pbl_IDLE_F";
			break;
		case 6:
			sVar0 = "pbl_Idle_G";
			break;
		case 7:
			sVar0 = "pbl_Idle_H";
			break;
		case 8:
			sVar0 = "pbl_Idle_I";
			break;
		default:
			sVar0 = "pbl_IDLE_A";
			break;
	}
	return sVar0;
}

void func_22(var uParam0)
{
	*uParam0++;
	if (*uParam0 > 5)
	{
		*uParam0 = 0;
	}
}

void func_23(var uParam0)
{
	if (uParam0->f_178 >= 5)
	{
		return;
	}
	if (!func_30(&(uParam0->f_130)))
	{
		uParam0->f_161 = BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(7, 10));
		func_31(&(uParam0->f_130), 0f);
	}
	else if (func_86(&(uParam0->f_130)) > uParam0->f_161)
	{
		if (uParam0->f_178 < 3)
		{
			func_77(&(uParam0->f_143[0]), "PLAYER_STILL_HANGING", -417894478, Global_35, 0, "CASSIDY", 0, 1);
		}
		else
		{
			func_77(&(uParam0->f_143[0]), "IGNORING_YOU", -417894478, Global_35, 0, "CASSIDY", 0, 1);
		}
		func_31(&(uParam0->f_130), 0f);
		func_29(&(uParam0->f_130));
		uParam0->f_178++;
	}
}

void func_24()
{
	AUDIO::_0x36559148B78853B3(0, 1, 0);
}

void func_25(var uParam0)
{
	if (AUDIO::_0xA2CAC9DEF0195E6F(1))
	{
		return;
	}
	if (func_20(uParam0->f_162, 1))
	{
		return;
	}
	if (func_20(uParam0->f_162, 524288))
	{
		return;
	}
	if (!func_30(&(uParam0->f_130)))
	{
		uParam0->f_161 = BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(1, 2));
		func_31(&(uParam0->f_130), 0f);
		return;
	}
	else if (func_86(&(uParam0->f_130)) > uParam0->f_161 && !AUDIO::_0xA2CAC9DEF0195E6F(1))
	{
		func_152(uParam0, func_151(func_150(uParam0->f_173)), 0, -1, 0, 0);
		uParam0->f_173++;
		func_29(&(uParam0->f_130));
		return;
	}
}

int func_26(int iParam0, int iParam1, float fParam2, bool bParam3)
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

void func_27(var uParam0, int iParam1)
{
	func_106(uParam0, iParam1);
}

void func_28(var uParam0, int iParam1)
{
	if (func_20(uParam0->f_162, 4))
	{
		func_14(iParam1, 90);
	}
	else if (func_20(uParam0->f_162, 2))
	{
		func_14(iParam1, 51);
	}
	else if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_156, true, 0))
	{
		func_14(iParam1, 51);
	}
	else
	{
		func_14(iParam1, 49);
	}
}

void func_29(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_30(var uParam0)
{
	return func_153(*uParam0, 1);
}

void func_31(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_154() - fParam1);
	func_155(uParam0, 1);
	func_156(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_32(var uParam0)
{
	if (!func_30(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000f));
	}
	if (func_157(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_158() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

void func_33(var uParam0, int iParam1)
{
	switch (uParam0->f_168)
	{
		case 0:
			uParam0->f_168++;
			func_14(iParam1, 24);
			break;
		case 1:
			uParam0->f_168++;
			func_14(iParam1, 25);
			break;
		case 2:
			uParam0->f_168++;
			func_14(iParam1, 26);
			break;
		case 3:
			uParam0->f_168++;
			func_14(iParam1, 27);
			break;
		case 4:
			uParam0->f_168++;
			func_14(iParam1, 29);
			break;
		case 5:
			uParam0->f_168++;
			func_14(iParam1, 30);
			break;
		case 6:
			uParam0->f_168++;
			func_14(iParam1, 38);
			break;
		case 7:
			uParam0->f_168 = 0;
			func_14(iParam1, 40);
			break;
		case 8:
			func_14(iParam1, 31);
			break;
		default:
			break;
	}
}

char* func_34(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0 = "pbl_PDBMC_IG3_A_DOLLAR";
			break;
		case 1:
			sVar0 = "pbl_PDBMC_IG3_LEARN_ABOUT";
			break;
		case 2:
			sVar0 = "pbl_PDBMC_IG3_P1_BE_NOT_AFRAID";
			break;
		case 3:
			sVar0 = "pbl_PDBMC_IG3_P1_COME_CLOSE";
			break;
		case 4:
			sVar0 = "pbl_PDBMC_IG3_P1_WOULD_YOU";
			break;
		case 5:
			sVar0 = "pbl_PDBMC_IG3_SEE_TOMORROW";
			break;
		case 6:
			sVar0 = "pbl_PDBMC_IG4_P1_BE_NOT_AFRAID";
			break;
		case 7:
			sVar0 = "pbl_PDBMC_IG4_P1_JUST_A_SAD_OLD";
			break;
		case 8:
			sVar0 = "pbl_base_reset";
			break;
		case 9:
			sVar0 = "pbl_ARMIN_base_reset";
			break;
		case 10:
			sVar0 = "pbl_HANDOUT_TO_HANDIN";
			break;
		case 11:
			sVar0 = "pbl_HANDIN_TO_HANDOUT";
			break;
		case 12:
			sVar0 = "pbl_Give_Money";
			break;
	}
	return sVar0;
}

int func_35(var uParam0, var uParam1, var uParam2, float fParam3)
{
	if ((func_20(*uParam1, 2) && ANIMSCENE::_0x3FBC3F51BF12DFBF(*uParam2) >= fParam3) && AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
	{
		return 1;
	}
	return 0;
}

int func_36(var uParam0, var uParam1, char* sParam2, var uParam3, bool bParam4, bool bParam5, float fParam6, bool bParam7, char* sParam8, bool bParam9)
{
	struct<4> Var0;

	if (func_159(uParam1))
	{
		Var0 = { func_113() };
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(*uParam1, Var0, Var0.f_3, 2);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "cs_cassidy", &(uParam0->f_143[0]), 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "p_cuptin01x", uParam0->f_147, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "p_wedgestick02x", uParam0->f_148, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "p_coin01x", &(uParam0->f_149[0]), 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "p_coin01x^1", &(uParam0->f_149[1]), 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "p_coin01x^2", &(uParam0->f_149[2]), 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "p_coin01x^3", &(uParam0->f_149[3]), 0);
		if (bParam7)
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "player_zero", Global_35, 0);
		}
		if (bParam9)
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "p_coinStack02", uParam0->f_154, 0);
		}
		ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam1, "internal_loop", bParam4, false);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam1, "internal_loop_end", bParam5, false);
		func_6(uParam0, uParam1, sParam2, bParam4, bParam5, fParam6, 1, 0);
		if (ANIMSCENE::_0x8D81E7824B7753F7(*uParam1, "s_Cower_Base", 1) || ANIMSCENE::_0x1F0E401031E20146(*uParam1, sParam2))
		{
			ANIMSCENE::RESET_ANIM_SCENE(*uParam3, sParam8);
			return 1;
		}
	}
	return 0;
}

int func_37(var uParam0)
{
	struct<4> Var0;
	struct<4> Var4;
	int iVar16;
	int iVar17;
	float fVar18;

	if (func_20(uParam0->f_162, 4))
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()) && uParam0->f_186)
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
			uParam0->f_186 = 0;
		}
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || ENTITY::IS_ENTITY_DEAD(&(uParam0->f_143[0])))
	{
		return 0;
	}
	if (!func_20(uParam0->f_162, 16384))
	{
		func_41(1);
		iVar16 = func_160(Global_35, 0);
		iVar17 = func_160(Global_35, 1);
		if (func_161(iVar16) || func_161(iVar17))
		{
			if (func_162(Global_35, -1672495956))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, 0, 1);
				WEAPON::_0x94A3C1B804D291EC(Global_35, 1, 0, 1, 1);
				return 0;
			}
			WEAPON::_0x94A3C1B804D291EC(Global_35, 1, 0, 1, 0);
			return 0;
		}
		if (!ANIMSCENE::_0x477122B8D05E7968(uParam0->f_169, 1, 0))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_169);
		}
		if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_169, func_34(12)))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_169, func_34(12));
		}
		if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(uParam0->f_169, "player_zero", &Var4, true, func_34(12), 2))
		{
			fVar18 = ENTITY::GET_ENTITY_HEADING(Global_35);
			if (!func_163(Global_35, Var4, 0.25f, 1, 1))
			{
				if (!func_162(Global_35, -1672495956))
				{
					if (!uParam0->f_186)
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, 256, 0);
						uParam0->f_186 = 1;
					}
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD_ADVANCED(Global_35, Var4, 1f, 15000, 0.1f, 1048576, Var0, Var4.f_3.f_2);
				}
			}
			else
			{
				if (Var4.f_3.f_2 < 0f)
				{
					Var4.f_3.f_2 = (Var4.f_3.f_2 + 360f);
				}
				if (fVar18 <= (Var4.f_3.f_2 + 10f) && fVar18 >= (Var4.f_3.f_2 - 10f))
				{
					func_27(&(uParam0->f_162), 16384);
					return 1;
				}
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_38(var uParam0, bool bParam1)
{
	struct<2> Var0;
	struct<2> Var2;

	if (bParam1)
	{
		Var0 = { func_164(0) };
	}
	else
	{
		Var0 = { func_164(1) };
	}
	Var2 = { func_164(2) };
	func_165(uParam0->f_224[0 /*17*/], Var0, 100, "", Var0.f_1, 0, 0, 0, 1);
	func_166(uParam0->f_224[1 /*17*/], Var2, "", Var2.f_1, 0, 0, 0, 1, 0);
	func_167(uParam0->f_224[0 /*17*/], 1);
}

void func_39(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_154))
		{
			OBJECT::DELETE_OBJECT(&(uParam0->f_154));
		}
	}
	if (bParam2)
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (ENTITY::IS_ENTITY_VISIBLE(&(uParam0->f_149[iVar0])))
			{
				ENTITY::SET_ENTITY_VISIBLE(&(uParam0->f_149[iVar0]), false);
			}
			iVar0++;
		}
	}
}

void func_40(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_168(iParam0);
	if (bParam3)
	{
		func_169(iParam0, sParam1, iParam2);
	}
}

void func_41(bool bParam0)
{
	int iVar0;

	iVar0 = func_170();
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

int func_42()
{
	if (func_171() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == 11966224)
	{
		return 1;
	}
	return 0;
}

char* func_43(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0 = "pbl_PDBMC_IG6_P1_BAD_NEWS";
			break;
		case 2:
			sVar0 = "pbl_PDBMC_IG6_P1_I_SENSE";
			break;
		case 3:
			sVar0 = "pbl_PDBMC_IG6_P1_THANKYOU_SIR";
			break;
		case 4:
			sVar0 = "pbl_PDBMC_IG6_P1_WHO_YOU_THINK";
			break;
		case 5:
			sVar0 = "pbl_PDBMC_IG6_P1_YOUR_WHOLE_LIFE";
			break;
		case 23:
			sVar0 = "pbl_PDBCM_IG8_P1_COME_FOR_YOU";
			break;
		case 22:
			sVar0 = "pbl_PDBCM_IG8_P1_ENJOY_THE_WORLD";
			break;
		case 25:
			sVar0 = "pbl_PDBMC_IG8_P1_TWO_STRANGERS";
			break;
		case 24:
			sVar0 = "pbl_PDBMC_IG8_P1_YOU_HAVE_LEARNED";
			break;
		case 26:
			sVar0 = "pbl_base_reset";
			break;
		case 27:
			sVar0 = "pbl_PDBMC_IG6_P1_EXIT";
			break;
	}
	return sVar0;
}

bool func_44(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_137(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
	}
	return (UNLOCK::_UNLOCK_IS_UNLOCKED(((*Global_1835011)[iParam0 /*74*/])->f_2) && !UNLOCK::_UNLOCK_IS_VISIBLE(((*Global_1835011)[iParam0 /*74*/])->f_2));
}

char* func_45()
{
	return "pbl_base_reset";
}

void func_46(var uParam0, int iParam1)
{
	bool bVar0;

	if (func_20(uParam0->f_162, 4))
	{
		func_14(iParam1, 90);
	}
	else if (func_20(uParam0->f_162, 1))
	{
		func_172(uParam0);
		if (func_36(uParam0, &(uParam0->f_165), func_5(16), &(uParam0->f_171), 1, 0, 1f, 0, func_5(16), 1))
		{
			if (func_173(&(uParam0->f_136), &(uParam0->f_163)))
			{
				if (func_6(uParam0, &(uParam0->f_165), func_5(16), 1, 0, 1065353216, 1, 0))
				{
					func_14(iParam1, 17);
				}
			}
		}
	}
	else
	{
		bVar0 = func_101();
		if (func_174(uParam0, &(uParam0->f_163), bVar0))
		{
			if (bVar0)
			{
				if (func_175(uParam0))
				{
					func_176(uParam0, iParam1);
				}
			}
			else if (!func_44(77))
			{
				if (func_175(uParam0))
				{
					func_176(uParam0, iParam1);
				}
			}
			else if (func_175(uParam0))
			{
				func_176(uParam0, iParam1);
			}
		}
	}
}

char* func_47(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0 = "SPBMC_IG6_F";
			break;
		case 1:
			sVar0 = "SPBMC_IG6_G";
			break;
		case 2:
			sVar0 = "SPBMC_IG6_H";
			break;
		case 3:
			sVar0 = "SPBMC_IG6_I";
			break;
		case 4:
			sVar0 = "SPBMC_IG6_J";
			break;
		case 5:
			sVar0 = "SPBMC_IG6_K";
			break;
		case 6:
			sVar0 = "SPBMC_IG6_L";
			break;
		case 7:
			sVar0 = "SPBMC_IG6_M";
			break;
		case 8:
			sVar0 = "SPBMC_IG6_N";
			break;
		case 16:
			sVar0 = "SPBMC_IG6_O";
			break;
		case 9:
			sVar0 = "SPBMC_IG6_P";
			break;
		case 10:
			sVar0 = "SPBMC_IG6_Q";
			break;
		case 11:
			sVar0 = "SPBMC_IG6_S";
			break;
		case 12:
			sVar0 = "SPBMC_IG6_STAY";
			break;
		case 13:
			sVar0 = "SPBMC_IG7_A";
			break;
		case 14:
			sVar0 = "SPBMC_IG7_B";
			break;
		case 15:
			sVar0 = "SPBMC_IG7_C";
			break;
	}
	return sVar0;
}

int func_48(var uParam0, int iParam1, char* sParam2)
{
	vector3 vVar0;

	if (ENTITY::IS_ENTITY_DEAD(&(uParam0->f_143[0])))
	{
		return 0;
	}
	vVar0 = { func_177(sParam2) };
	if (!func_178(&vVar0) && !func_20(uParam0->f_162, 65536))
	{
		func_152(uParam0, vVar0, 0, -1, 0, 0);
	}
	if (func_179(&vVar0))
	{
		func_27(&(uParam0->f_162), 65536);
	}
	else if (func_20(uParam0->f_162, 65536))
	{
		return 1;
	}
	return 0;
}

bool func_49(int iParam0, int iParam1)
{
	return func_180((Global_40.f_11623[iParam0 /*8*/])->f_1, iParam1);
}

void func_50(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_181(&((Global_40.f_11623[iParam0 /*8*/])->f_1), iParam1);
	}
	else
	{
		func_182(&((Global_40.f_11623[iParam0 /*8*/])->f_1), iParam1);
	}
}

void func_51(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (bParam1)
		{
			AUDIO::DISABLE_PED_PAIN_AUDIO(iParam0, true);
		}
		if (bParam2)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 243, true);
		}
		if (Global_35 == iParam0)
		{
		}
		ENTITY::_SET_ENTITY_HEALTH(iParam0, 0, 0);
	}
}

void func_52(var uParam0, int iParam1)
{
	if (func_58(uParam0->f_136))
	{
		switch (*iParam1)
		{
			case 3:
			case 4:
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
			case 23:
			case 24:
			case 25:
			case 26:
			case 27:
			case 28:
			case 29:
			case 30:
			case 31:
			case 32:
			case 33:
			case 34:
			case 35:
			case 36:
			case 37:
			case 38:
			case 39:
			case 40:
			case 41:
			case 42:
			case 43:
			case 45:
			case 46:
			case 47:
			case 70:
				break;
			case 5:
			case 52:
			case 53:
			case 54:
			case 55:
			case 56:
			case 57:
			case 58:
			case 59:
			case 60:
			case 61:
			case 62:
			case 63:
			case 64:
			case 65:
			case 66:
			case 67:
			case 68:
			case 69:
			case 71:
			case 72:
			case 73:
			case 74:
			case 76:
			case 77:
			case 78:
			case 79:
			case 80:
				break;
			case 91:
				break;
			case 92:
				func_1(uParam0, 1);
				break;
			case 93:
				break;
		}
	}
}

void func_53(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
	}
	if (((*Global_1396257)[iParam0 /*638*/])->f_631)
	{
		func_183(0, -1);
	}
	func_184();
	((*Global_1396257)[iParam0 /*638*/])->f_631 = 0;
	Global_1415398->f_2 = (Global_1415398->f_2 - 1);
	Global_1935183->f_28 = 0;
}

void func_54(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_185(((*uParam0)[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET(uParam0[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_186(&(((*uParam0)[iVar0 /*17*/])->f_6), 1, 1);
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

void func_55(int* iParam0, var uParam1)
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
	func_187(iParam0, uParam1, 1);
	func_54(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY((*uParam1)[iVar0 /*17*/], &Var22, 17);
		iVar0++;
	}
}

void func_56(var uParam0)
{
	if (func_66(4) == 0)
	{
		if (((((((((((((((((func_20(uParam0->f_163, 1) && func_20(uParam0->f_163, 2)) && func_20(uParam0->f_163, 4)) && func_20(uParam0->f_163, 8)) && func_20(uParam0->f_163, 16)) && func_20(uParam0->f_163, 32)) && func_20(uParam0->f_163, 64)) && func_20(uParam0->f_163, 128)) && func_20(uParam0->f_163, 256)) && func_20(uParam0->f_163, 512)) && func_20(uParam0->f_163, 1024)) && func_20(uParam0->f_163, 2048)) && func_20(uParam0->f_163, 4096)) && func_20(uParam0->f_163, 8192)) && func_20(uParam0->f_163, 16384)) && func_20(uParam0->f_163, 32768)) && func_20(uParam0->f_163, 65536)) && func_20(uParam0->f_163, 131072))
		{
			func_188(4, 1);
		}
	}
	else if (func_66(4) == 1)
	{
		if (((((((func_20(uParam0->f_163, 262144) && func_20(uParam0->f_163, 524288)) && func_20(uParam0->f_163, 1048576)) && func_20(uParam0->f_163, 2097152)) && func_20(uParam0->f_163, 4194304)) && func_20(uParam0->f_163, 8388608)) && func_20(uParam0->f_163, 16777216)) && func_20(uParam0->f_163, 33554432))
		{
			func_188(4, 12);
		}
	}
}

void func_57(var uParam0)
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
	if (func_30(&(uParam0->f_13)))
	{
		func_29(&(uParam0->f_13));
	}
}

bool func_58(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_59(int iParam0)
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
		iVar0 = func_189(iParam0);
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

bool func_60(int iParam0)
{
	int iVar0;

	iVar0 = func_190(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_61(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!func_58(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_60(iParam0) && !func_59(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_191(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_60(iParam0))
	{
		iParam2 = -1;
	}
	if (func_189(iParam0) == 3 || (func_189(iParam0) == 1 && STATS::_0x01F4D242765C6B24(func_191(iParam0))))
	{
		func_193(func_192(iParam0), func_191(iParam0), iParam2);
		if ((!func_58(Global_1572864->f_8) && !func_194(0, 1, 0)) && !func_195(&Global_1935630, 32768))
		{
			iVar0 = func_196(iParam0);
			if (iVar0 != -1)
			{
				func_197(0);
			}
			else if (func_192(iParam0) == 8)
			{
				iVar0 = func_198();
				if (iVar0 != -1)
				{
					func_197(0);
				}
			}
		}
	}
	func_199(iParam0, 0);
	if (func_200(0) == iParam0)
	{
		func_201(1);
		func_202(0);
		func_203(1);
	}
	func_204(iParam0, 1);
	func_205(iParam0);
}

bool func_62(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

void func_63(int iParam0)
{
	vector3 vVar0;

	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return;
	}
	vVar0 = { VOLUME::_0xF70F00013A62F866(iParam0) };
	func_206(vVar0, 0);
}

void func_64(var uParam0)
{
	func_207(uParam0->f_155);
	func_207(uParam0->f_156);
	func_207(uParam0->f_157);
	func_207(uParam0->f_158);
	func_207(uParam0->f_159);
}

void func_65(var uParam0, var uParam1, int iParam2, float fParam3, bool bParam4)
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

int func_66(int iParam0)
{
	return &(Global_40.f_11623[iParam0 /*8*/]);
}

void func_67(var uParam0)
{
	char* sVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;

	iVar3 = &uParam0->f_143[0];
	iVar4 = uParam0->f_142;
	if (!func_208(&(uParam0->f_180)))
	{
		func_209(&(uParam0->f_180), 0);
	}
	if (uParam0->f_179 == 0)
	{
		uParam0->f_179 = MISC::GET_RANDOM_INT_IN_RANGE(5000, 12000);
	}
	if (func_210(&(uParam0->f_180), uParam0->f_179))
	{
		fVar5 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iVar3, true, false));
		if (fVar5 > 25f)
		{
			return;
		}
		if (fVar5 < 8f)
		{
			iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 1 + 1);
		}
		else
		{
			iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(5, 8);
		}
		iVar4 = iVar2;
		if (uParam0->f_142 == iVar4 || iVar4 == -1)
		{
			uParam0->f_179 = BUILTIN::ROUND((IntToFloat(uParam0->f_179) * 0.5f));
			return;
		}
		sVar0 = func_75(iVar4);
		uVar1 = func_76(iVar4);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iVar3))
		{
			func_77(iVar3, sVar0, 291934926, Global_35, 1, "CASSIDY", uVar1, 1);
		}
		uParam0->f_142 = iVar4;
		uParam0->f_179 = 0;
	}
}

var func_68()
{
	return &Global_1899515;
}

void func_69(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297, false);
	}
}

int func_70(int iParam0, int iParam1)
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
	if (func_20(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_20(iVar0, 2))
	{
		if (PED::_0x3AA24CCC0D451379(iParam0))
		{
			return 0;
		}
	}
	if (func_20(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_20(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_20(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_20(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return 0;
		}
	}
	if (func_20(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_20(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_71(var uParam0, var uParam1)
{
	if (func_20(uParam0->f_162, 4))
	{
		if ((((((uParam0->f_126 == 2048 || uParam0->f_126 == 4) || uParam0->f_126 == 256) || uParam0->f_126 == 16) || uParam0->f_126 == 32) || uParam0->f_126 == 2) || uParam0->f_126 == 0)
		{
			PED::_0xAE6004120C18DF97(&(uParam0->f_143[0]), 0, 0);
			if (uParam0->f_126 == 2)
			{
				ENTITY::_SET_ENTITY_HEALTH(&(uParam0->f_143[0]), 5, 0);
				PED::_0x2E5B5D1F1453E08E(&(uParam0->f_143[0]), 0);
			}
			if (*uParam1 == 83)
			{
				(Global_40.f_11623[4 /*8*/])->f_2 = func_68();
				func_69(uParam0->f_143[0]);
				PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "SPID_BLIND_MAN_CASSIDY");
				AUDIO::_0x36559148B78853B3(0, 1, 0);
				func_14(uParam1, 89);
			}
			else if (((((*uParam1 != 82 && *uParam1 != 88) && *uParam1 != 90) && *uParam1 != 84) && *uParam1 != 89) && *uParam1 != 81)
			{
				if (*uParam1 >= 52 && *uParam1 <= 80)
				{
					func_69(uParam0->f_143[0]);
					PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "SPID_BLIND_MAN_CASSIDY");
					AUDIO::_0x36559148B78853B3(0, 1, 0);
					if (func_36(uParam0, &(uParam0->f_165), func_5(29), &(uParam0->f_171), 0, 0, 1f, 0, 0, 1))
					{
						(Global_40.f_11623[4 /*8*/])->f_2 = func_68();
						func_14(uParam1, 90);
					}
				}
				else if (*uParam1 >= 24 && *uParam1 <= 51)
				{
					func_69(uParam0->f_143[0]);
					PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "SPID_BLIND_MAN_CASSIDY");
					AUDIO::_0x36559148B78853B3(0, 1, 0);
					if (func_36(uParam0, &(uParam0->f_165), func_5(29), &(uParam0->f_169), 0, 0, 1f, 0, 0, 1))
					{
						(Global_40.f_11623[4 /*8*/])->f_2 = func_68();
						func_14(uParam1, 90);
					}
				}
				else
				{
					func_69(uParam0->f_143[0]);
					PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "SPID_BLIND_MAN_CASSIDY");
					AUDIO::_0x36559148B78853B3(0, 1, 0);
					(Global_40.f_11623[4 /*8*/])->f_2 = func_68();
					if (func_36(uParam0, &(uParam0->f_165), func_5(29), &(uParam0->f_169), 0, 0, 1f, 0, 0, 1))
					{
						(Global_40.f_11623[4 /*8*/])->f_2 = func_68();
						func_14(uParam1, 90);
					}
				}
			}
			else if (*uParam1 == 88 || *uParam1 == 84)
			{
				func_69(uParam0->f_143[0]);
				PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "SPID_BLIND_MAN_CASSIDY");
				AUDIO::_0x36559148B78853B3(0, 1, 0);
				(Global_40.f_11623[4 /*8*/])->f_2 = func_68();
				func_14(uParam1, 90);
			}
		}
		else
		{
			func_69(uParam0->f_143[0]);
			PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "SPID_BLIND_MAN_CASSIDY");
			AUDIO::_0x36559148B78853B3(0, 1, 0);
			(Global_40.f_11623[4 /*8*/])->f_2 = func_68();
			func_14(uParam1, 81);
		}
		return 1;
	}
	return 0;
}

int func_72(var uParam0)
{
	vector3 vVar0;
	vector3 vVar4;

	vVar0 = { func_211(4, func_66(4), 0) };
	vVar4 = { vVar0 };
	if (PED::_0x078076AB50FB117F(&(uParam0->f_143[0]), vVar4, 50f, 1) && PED::_0xB7DBB2986B87E230(&(uParam0->f_143[0]), 1f))
	{
		return 1;
	}
	if (func_26(&(uParam0->f_143[0]), Global_35, 50f, 1))
	{
		func_127(&(uParam0->f_98), 1);
	}
	else
	{
		func_127(&(uParam0->f_98), 0);
	}
	if (func_212(&(uParam0->f_143[0]), 0, &(uParam0->f_98), &(uParam0->f_126), 0, 0))
	{
		if (func_161(Global_1935630->f_46))
		{
			if (WEAPON::_0x30E7C16B12DA8211(Global_1935630->f_46) && uParam0->f_126 == 4)
			{
				func_213(&(uParam0->f_98), &(uParam0->f_126));
				return 0;
			}
		}
		func_84(1, 0, 0, "", &(uParam0->f_143[0]), 0, 1065353216, 0);
		return 1;
	}
	return 0;
}

void func_73(int iParam0)
{
	(Global_40.f_11623[iParam0 /*8*/])->f_5++;
	(Global_40.f_11623[iParam0 /*8*/])->f_2 = func_68();
}

void func_74(int iParam0, int iParam1)
{
	AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iParam0, iParam1);
	AUDIO::STOP_CURRENT_PLAYING_SPEECH(iParam0, iParam1);
}

char* func_75(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return "GREET_PLAYER_ANGRY";
		case 3:
			return "GENERIC_CURSE_MED";
		case 5:
		case 6:
			return "GET_AWAY_FROM_ME";
		case 2:
			return "GENERIC_FRIGHTENED_HIGH";
		case 7:
			return "PANIC_HELP";
		case 4:
			return "PANIC_COMMUNICATE";
		default:
			break;
	}
	return "";
}

int func_76(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 4:
		case 5:
		case 7:
			return 1;
		case 1:
		case 6:
			return 2;
		default:
			break;
	}
	return 0;
}

var func_77(int iParam0, char* sParam1, int iParam2, var uParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	struct<7> Var0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = sParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = uParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_214(iParam0, &Var0);
}

int func_78(int iParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	if ((MISC::GET_FRAME_COUNT() % 10) == 0)
	{
		if (uParam2->f_1)
		{
			if (((func_80(0) == 1 || func_80(0) == 2) || func_80(0) == 8) || func_195(&Global_1935630, 2048))
			{
				func_27(uParam2, 2);
			}
		}
		if (uParam2->f_2)
		{
			if (func_80(0) == 11)
			{
				func_27(uParam2, 4);
			}
		}
		if (uParam2->f_4)
		{
			if (func_80(0) == 6)
			{
				func_27(uParam2, 8);
			}
		}
		if (uParam2->f_5)
		{
			if (Global_1394141->f_1328)
			{
				func_27(uParam2, 16);
			}
		}
	}
	if ((MISC::GET_FRAME_COUNT() % 30) == 0)
	{
		if (uParam2->f_6)
		{
			if (!(func_215(((*(*Global_1396257)[iParam0 /*638*/])[iParam1 /*48*/])->f_19) == 0 && func_215(((*(*Global_1396257)[iParam0 /*638*/])[iParam1 /*48*/])->f_20) == 23))
			{
				iVar0 = func_68();
				iVar1 = ((*(*Global_1396257)[iParam0 /*638*/])[iParam1 /*48*/])->f_19;
				iVar2 = ((*(*Global_1396257)[iParam0 /*638*/])[iParam1 /*48*/])->f_20;
				if (func_215(iVar2) > func_215(iVar1))
				{
					if (func_215(iVar0) > func_215(iVar2) + 1 || func_215(iVar0) < func_215(iVar1))
					{
						func_27(uParam2, 32);
					}
				}
				else if (func_215(iVar0) > func_215(iVar2) + 1 && func_215(iVar0) < func_215(iVar1))
				{
					func_27(uParam2, 32);
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
					if (((func_216(&(((*(*Global_1396257)[iParam0 /*638*/])[iParam1 /*48*/])->f_5[0])) || func_216(&(((*(*Global_1396257)[iParam0 /*638*/])[iParam1 /*48*/])->f_5[1]))) || func_217(&(((*(*Global_1396257)[iParam0 /*638*/])[iParam1 /*48*/])->f_5[0]))) || func_217(&(((*(*Global_1396257)[iParam0 /*638*/])[iParam1 /*48*/])->f_5[1])))
					{
						bVar3 = true;
					}
				}
				if (!bVar3)
				{
					if (!func_218(((*(*Global_1396257)[iParam0 /*638*/])[iParam1 /*48*/])->f_40))
					{
						func_27(uParam2, 64);
					}
				}
			}
		}
		if (uParam2->f_8)
		{
			if (MISC::GET_GAME_TIMER() > uParam2->f_17)
			{
				if (func_91(&uParam3, &(uParam2->f_18), uParam2->f_11, uParam2->f_12) || func_92(&uParam3, &(uParam2->f_20), &(uParam2->f_19), uParam2->f_11, uParam2->f_12, 2048))
				{
					if (!func_30(&(uParam2->f_13)))
					{
						func_31(&(uParam2->f_13), 0f);
					}
					else if (func_32(&(uParam2->f_13)) >= uParam2->f_16)
					{
						func_29(&(uParam2->f_13));
						func_27(uParam2, 512);
					}
					uParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
				else
				{
					if (func_30(&(uParam2->f_13)))
					{
						func_29(&(uParam2->f_13));
					}
					uParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
			}
		}
		if (uParam2->f_9)
		{
			if (func_219())
			{
				func_27(uParam2, 1024);
			}
		}
		if (uParam2->f_10)
		{
			if (func_220())
			{
				func_27(uParam2, 2048);
			}
		}
		if (func_195(&Global_1935630, 16384) || Global_1430231->f_4)
		{
			func_27(uParam2, 128);
		}
		if (func_82(&(((*Global_1396257)[iParam0 /*638*/])->f_626), 2048))
		{
			func_27(uParam2, 256);
		}
	}
	if ((((((((((func_20(*uParam2, 2) || func_20(*uParam2, 4)) || func_20(*uParam2, 8)) || func_20(*uParam2, 16)) || func_20(*uParam2, 32)) || func_20(*uParam2, 64)) || func_20(*uParam2, 128)) || func_20(*uParam2, 256)) || func_20(*uParam2, 512)) || func_20(*uParam2, 1024)) || func_20(*uParam2, 2048))
	{
		return 1;
	}
	return 0;
}

int func_79()
{
	int iVar0;

	if (func_171() == -1)
	{
		if (SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(5))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (((*Global_1392915)[iVar0 /*12*/])->f_1 != -1)
				{
					if (func_60(((*Global_1392915)[iVar0 /*12*/])->f_4))
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

int func_80(int iParam0)
{
	return (Global_1898164->f_1[iParam0 /*5*/])->f_2;
}

bool func_81()
{
	return Global_1310750->f_16077 != 0;
}

bool func_82(var uParam0, int iParam1)
{
	return func_180(*uParam0, iParam1);
}

int func_83(var uParam0, float fParam1, float fParam2)
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
			if (func_26(Global_35, *uParam0, 25f, 1))
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
		if (func_26(Global_35, *uParam0, fParam1, 1))
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

void func_84(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_171() != -1)
	{
		return;
	}
	if ((Global_36615 && func_221(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_222(iParam0);
	iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_223(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, iParam7);
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
			func_224(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_223(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_85(var uParam0, char* sParam1)
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

float func_86(var uParam0)
{
	if (!func_30(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_157(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_154() - uParam0->f_1);
}

bool func_87(int iParam0)
{
	return iParam0 != -15;
}

void func_88(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_29(&(uParam0->f_18));
}

void func_89(int* iParam0, int iParam1, bool bParam2)
{
	if (iParam1 && !func_225(iParam0, 13))
	{
		func_226(iParam0, 0);
	}
	else
	{
		func_227(iParam0, 0);
	}
	if (func_185(iParam0->f_6))
	{
		if (bParam2)
		{
			func_186(&(iParam0->f_6), 0, 1);
		}
	}
}

int func_90()
{
	if (PED::_0xA911EE21EDF69DAF(Global_35) || func_228())
	{
		return 1;
	}
	return 0;
}

int func_91(var uParam0, var uParam1, float fParam2, float fParam3)
{
	vector3 vVar0;
	vector3 vVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) + vVar0 * Vector(fParam2, fParam2, fParam2) };
	if (func_229(uParam1, vVar3, fParam3))
	{
		return 1;
	}
	return 0;
}

int func_92(var uParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5)
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
	if (!func_230(uParam2, &iVar1, vVar5, fParam3, fParam4))
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
		if (!func_231(iVar1, 0))
		{
			func_232(&iVar1, vVar8, 1083179008);
		}
		return 1;
	}
	return 0;
}

int func_93(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

int func_94(int iParam0, int iParam1, int iParam2)
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

int func_95(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, var uParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		func_233(&uParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::_0x92A78D0BEDB332A3(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = uParam8 & 32 != false;
		bVar4 = uParam8 & 524288 != false;
		bVar5 = uParam8 & 16777216 != false;
		bVar6 = uParam8 & 16777216 != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar8 = func_234(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
		if (!uParam8 & 2097152 != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 184, true);
		}
		if (uParam8 & 8388608 != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 281, true);
		}
		if (bVar5)
		{
			bVar1 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35));
		}
		if (bVar7 || (bVar5 && bVar1))
		{
			func_235(&(iParam1->f_13));
		}
		if (func_236(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_237(uParam0, iParam1, uParam3, fParam2, uParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_95(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, uParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_69(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!uParam8 & 33554432 != 0)
				{
					if (uParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317, true))
						{
							func_238(*uParam0, 1, 1);
						}
					}
					else if (func_239(iParam1, 22))
					{
						func_238(*uParam0, 0, 1);
					}
				}
				if (func_240(uParam0, uParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_241(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, uParam8, iParam9, iParam10, iParam11, bVar4);
					func_242(uParam8);
					if (func_243(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, uParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET(uParam3[iParam1->f_1 /*17*/], 20))
								{
									func_244(uParam3);
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
					func_245(iParam1, uParam3, fVar8);
					if (func_246(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						func_54(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_247(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_240(uParam0, uParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_248(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_243(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, uParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_241(uParam0, func_240(uParam0, uParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, uParam8, iParam9, iParam10, iParam11, bVar4);
					func_242(uParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_54(uParam3, 0, 0, 1, 1);
					}
					func_249(iParam1, 1);
				}
				func_245(iParam1, uParam3, fVar8);
				if (func_247(uParam0, iParam1, fParam4, bVar6))
				{
					if (uParam8 & 512 != 0)
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
	else if (!uParam8 & 1024 != 0)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 3))
		{
			func_55(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

bool func_96(int iParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar0 = func_250(iParam0);
		return func_251(iParam0, 2084597891, iParam1, iVar0);
	}
	return DECORATOR::DECOR_SET_INT(iParam0, "loot_money", iParam1);
}

void func_97(int iParam0)
{
	((*Global_1396257)[iParam0 /*638*/])->f_631 = 1;
}

void func_98(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return;
	}
	if (func_105(*uParam2, iParam3))
	{
		return;
	}
	(Global_40.f_11623[iParam0 /*8*/])->f_6++;
	if ((Global_40.f_11623[iParam0 /*8*/])->f_6 == 1 && func_253(func_252(-1342635612)) < 5)
	{
		func_254(func_252(-1342635612), 1);
	}
	(Global_40.f_11623[iParam0 /*8*/])->f_3 = func_68();
	func_106(uParam2, iParam3);
	((*Global_1396257)[iParam0 /*638*/])->f_631 = 1;
}

void func_99()
{
	func_255();
	func_256(-1, 0, 0, 0, 0);
	func_257(60, 0, 1);
}

void func_100(var uParam0)
{
	vector3 vVar0;

	if (func_20(uParam0->f_162, 131072))
	{
		return;
	}
	if (func_42())
	{
		StringCopy(&vVar0, "SPBMC_GIVE_J", 24);
	}
	else
	{
		StringCopy(&vVar0, "SPBMC_GIVE_A", 24);
	}
	if (!func_178(&vVar0))
	{
		func_152(uParam0, vVar0, 0, -1, 0, 0);
	}
	if (func_179(&vVar0))
	{
		func_27(&(uParam0->f_162), 131072);
	}
}

int func_101()
{
	if (func_171() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == joaat("player_zero"))
	{
		return 1;
	}
	return 0;
}

void func_102(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				func_258(1786474035, 0);
			}
			else
			{
				func_258(-783887552, 0);
			}
			break;
		case 4:
			if (bParam1)
			{
				func_258(1417967521, 0);
			}
			else
			{
				func_258(498763362, 0);
			}
			break;
		case 5:
			if (bParam1)
			{
				func_258(-755110140, 0);
			}
			else if (func_259(55))
			{
				func_258(-1437550882, 0);
			}
			else
			{
				func_258(-1121098923, 0);
			}
			break;
		case 12:
			if (bParam1)
			{
				func_258(2063812437, 0);
			}
			else
			{
				func_258(-2140480896, 0);
			}
			break;
		case 20:
			if (bParam1)
			{
				func_258(-1558441298, 0);
			}
			else
			{
				func_258(250250385, 0);
			}
			break;
		case 21:
			if (bParam1)
			{
				func_258(1071640065, 0);
			}
			else
			{
				func_258(1387512056, 0);
			}
			break;
		case 28:
			if (bParam1)
			{
				func_258(928184916, 0);
			}
			else
			{
				func_258(-516630543, 0);
			}
			break;
		default:
			break;
	}
}

int func_103(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7)
{
	if (*uParam3 >= iParam4)
	{
		return 0;
	}
	if (*uParam1)
	{
		if (!func_30(uParam2))
		{
			func_31(uParam2, 0f);
			return 0;
		}
		else if (func_32(uParam2) > iParam6)
		{
			func_29(uParam2);
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
			fParam7 = func_260(*uParam0, Global_35, 1, 1);
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

char* func_104(int iParam0)
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

bool func_105(var uParam0, var uParam1)
{
	return (uParam0 && uParam1) != 0;
}

void func_106(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_107(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

char* func_108()
{
	return "script@specialped@pdbmc_blindmancassidy@ig@ig_1@ig_1";
}

char* func_109()
{
	return "script@specialped@pdbmc_blindmancassidy@ig@ig_3@ig_3";
}

char* func_110()
{
	return "script@specialped@pdbmc_blindmancassidy@ig@ig_6@ig_6";
}

void func_111(var uParam0)
{
	struct<11> Var0;

	switch (func_261(4))
	{
		case 3:
			Var0 = { func_262(15) };
			func_263(&(uParam0->f_155), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_262(16) };
			func_263(&(uParam0->f_156), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_262(17) };
			func_263(&(uParam0->f_157), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_262(19) };
			func_263(&(uParam0->f_158), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_262(18) };
			if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_159))
			{
				uParam0->f_159 = VOLUME::_0x0EB78C2B156635B1(Var0, Var0.f_1, Var0.f_4, Var0.f_7);
			}
			break;
		case 9:
			Var0 = { func_262(20) };
			func_263(&(uParam0->f_155), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_262(21) };
			func_263(&(uParam0->f_156), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_262(22) };
			func_263(&(uParam0->f_157), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_262(24) };
			func_263(&(uParam0->f_158), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_262(23) };
			if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_159))
			{
				uParam0->f_159 = VOLUME::_0x0EB78C2B156635B1(Var0, Var0.f_1, Var0.f_4, Var0.f_7);
			}
			break;
		case 10:
			Var0 = { func_262(25) };
			func_263(&(uParam0->f_155), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_262(26) };
			func_263(&(uParam0->f_156), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_262(27) };
			func_263(&(uParam0->f_157), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_262(29) };
			func_263(&(uParam0->f_158), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_262(28) };
			if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_159))
			{
				uParam0->f_159 = VOLUME::_0x0EB78C2B156635B1(Var0, Var0.f_1, Var0.f_4, Var0.f_7);
			}
			break;
		case 13:
			Var0 = { func_262(30) };
			func_263(&(uParam0->f_155), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_262(31) };
			func_263(&(uParam0->f_156), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_262(32) };
			func_263(&(uParam0->f_157), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_262(34) };
			func_263(&(uParam0->f_158), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_262(33) };
			if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_159))
			{
				uParam0->f_159 = VOLUME::_0x0EB78C2B156635B1(Var0, Var0.f_1, Var0.f_4, Var0.f_7);
			}
			break;
		case 4:
			Var0 = { func_262(35) };
			func_263(&(uParam0->f_155), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_262(36) };
			func_263(&(uParam0->f_156), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_262(37) };
			func_263(&(uParam0->f_157), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_262(39) };
			func_263(&(uParam0->f_158), Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
			Var0 = { func_262(38) };
			if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_159))
			{
				uParam0->f_159 = VOLUME::_0x0EB78C2B156635B1(Var0, Var0.f_1, Var0.f_4, Var0.f_7);
			}
			break;
	}
}

int func_112(int iParam0, char* sParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, float fParam6)
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
	uVar6 = func_264(vVar0, vVar3.x, sParam1, bParam2, iParam3, iParam4, bParam5, fParam6);
	return uVar6;
}

struct<6> func_113()
{
	struct<6> Var0;
	var uVar6;

	switch (func_261(4))
	{
		case 3:
			Var0 = { 502.0502f, 1284.979f, 181.4051f };
			Var0.f_3 = { 0f, 0f, 114.5882f };
			break;
		case 9:
			Var0 = { 414.5646f, 412.7333f, 207.6299f };
			Var0.f_3 = { 0f, 0f, 352.4153f };
			break;
		case 10:
			Var0 = { 2794.157f, 1406.62f, 182.3539f };
			Var0.f_3 = { 0f, 0f, 65.0766f };
			break;
		case 13:
			Var0 = { -5342.929f, -2947.815f, 100.807f };
			Var0.f_3 = { 0f, 0f, 20.08f };
			break;
		case 4:
			Var0 = { -1208.554f, -1229.683f, 174.7918f };
			Var0.f_3 = { 0f, 0f, 19.5942f };
			break;
	}
	MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar6, 0);
	Var0.f_2 = uVar6;
	return Var0;
}

int func_114(int iParam0)
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

int func_115(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_265())
	{
		iVar2 = func_265();
	}
	iVar5 = func_266(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_267(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_267(iVar6) == 0)
			{
				return func_268(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_267(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_267(iVar6) == 0)
			{
				return func_268(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_268(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

void func_116(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_269(uParam0, iParam1, sParam2))
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

void func_117(var uParam0)
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

void func_118(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_182(&(uParam0->f_1), 16384);
	}
	else
	{
		func_181(&(uParam0->f_1), 16384);
	}
}

void func_119(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_182(&(uParam0->f_1), 131072);
	}
	else
	{
		func_181(&(uParam0->f_1), 131072);
	}
}

void func_120(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_181(uParam0, 4);
	}
	else
	{
		func_182(uParam0, 4);
	}
}

void func_121(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_182(&(uParam0->f_1), 8);
	}
	else
	{
		func_181(&(uParam0->f_1), 8);
	}
}

void func_122(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_181(uParam0, 8);
	}
	else
	{
		func_182(uParam0, 8);
	}
}

void func_123(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_181(uParam0, 32);
	}
	else
	{
		func_182(uParam0, 32);
	}
}

void func_124(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_181(uParam0, 64);
	}
	else
	{
		func_182(uParam0, 64);
	}
}

void func_125(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_181(uParam0, 16);
	}
	else
	{
		func_182(uParam0, 67108864);
		func_182(uParam0, 16);
	}
}

void func_126(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_181(uParam0, 2);
	}
	else
	{
		func_182(uParam0, 2);
	}
}

void func_127(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_182(&(uParam0->f_1), 256);
	}
	else
	{
		func_181(&(uParam0->f_1), 256);
	}
}

void func_128(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_182(&(uParam0->f_1), 4);
	}
	else
	{
		func_181(&(uParam0->f_1), 4);
	}
}

void func_129(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_182(&(uParam0->f_1), 16);
	}
	else
	{
		func_181(&(uParam0->f_1), 16);
	}
}

void func_130(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_182(&(uParam0->f_1), 2);
	}
	else
	{
		func_181(&(uParam0->f_1), 2);
	}
}

void func_131(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_182(&(uParam0->f_1), 2048);
	}
	else
	{
		func_181(&(uParam0->f_1), 2048);
	}
}

void func_132(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_182(&(uParam0->f_1), 1);
	}
	else
	{
		func_181(&(uParam0->f_1), 1);
	}
}

void func_133(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_181(uParam0, 128);
	}
	else
	{
		func_182(uParam0, 128);
	}
}

void func_134(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_181(uParam0, 524288);
	}
	else
	{
		func_182(uParam0, 524288);
	}
}

void func_135(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_181(uParam0, 256);
	}
	else
	{
		func_182(uParam0, 256);
	}
}

void func_136(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_182(&(uParam0->f_1), 524288);
	}
	else
	{
		func_181(&(uParam0->f_1), 524288);
	}
}

int func_137(int iParam0, bool bParam1)
{
	switch (func_190(iParam0))
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

int func_138(var uParam0, var uParam1)
{
	if (func_58(*uParam0))
	{
		*uParam1 = func_270(*uParam0);
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

struct<4> func_139(int iParam0)
{
	struct<4> Var0;

	switch (iParam0)
	{
		case 0:
			Var0 = { func_211(4, func_66(4), 0) };
			break;
		case 2:
			switch (func_261(4))
			{
				case 3:
					Var0 = { 500.4968f, 1286.531f, 181.3641f };
					Var0.f_3 = 0f;
					break;
				case 9:
					Var0 = { 416.2841f, 413.2481f, 107.6271f };
					Var0.f_3 = 0f;
					break;
				case 10:
					Var0 = { 2794.257f, 1404.687f, 82.29177f };
					Var0.f_3 = 0f;
					break;
				case 13:
					Var0 = { -5342.084f, -2947.499f, 0.78917f };
					Var0.f_3 = 0f;
					break;
				case 4:
					Var0 = { -1207.344f, -1228.779f, 74.56038f };
					Var0.f_3 = 0f;
					break;
			}
			break;
		case 1:
			switch (func_261(4))
			{
				case 3:
					Var0 = { 502.631f, 1287.786f, 181.3201f };
					Var0.f_3 = 0f;
					break;
				case 9:
					Var0 = { 415.6961f, 411.1015f, 107.566f };
					Var0.f_3 = 0f;
					break;
				case 10:
					Var0 = { 2792.826f, 1405.584f, 82.4797f };
					Var0.f_3 = 0f;
					break;
				case 13:
					Var0 = { -5344.361f, -2948.172f, 0.83914f };
					Var0.f_3 = 0f;
					break;
				case 4:
					Var0 = { -1209.377f, -1230.011f, 74.92408f };
					Var0.f_3 = 0f;
					break;
			}
			break;
		case 3:
			switch (func_261(4))
			{
				case 3:
					Var0 = { 502.0502f, 1284.979f, 181.4051f };
					Var0.f_3 = 1f;
					break;
				case 9:
					Var0 = { 414.5646f, 412.7333f, 107.6299f };
					Var0.f_3 = 1f;
					break;
				case 10:
					Var0 = { 2794.664f, 1407.216f, 82.32878f };
					Var0.f_3 = 1.25f;
					break;
				case 13:
					Var0 = { -5342.929f, -2947.815f, 0.80696f };
					Var0.f_3 = 1f;
					break;
				case 4:
					Var0 = { -1208.554f, -1229.683f, 74.7918f };
					Var0.f_3 = 1f;
					break;
			}
			break;
	}
	return Var0;
}

int func_140(var uParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, bool bParam7, bool bParam8)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		BUILTIN::WAIT(0);
		if (!bParam7)
		{
			*uParam0 = func_271(iParam1, vParam2, fParam5, 0, 1, iParam6, 1, 1, 1, 0, 0, 0, 0);
		}
		else
		{
			*uParam0 = func_271(iParam1, vParam2, fParam5, 0, 1, iParam6, 1, 1, bParam8, 1, 1, 0, 0);
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

int func_141(var uParam0, int iParam1, vector3 vParam2)
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

int func_142(vector3 vParam0)
{
	int iVar0;
	float fVar1;
	bool bVar2;
	bool bVar3;

	fVar1 = MISC::_GET_TEMPERATURE_AT_COORDS(vParam0);
	bVar2 = fVar1 < 10f;
	bVar3 = fVar1 > 27f;
	if (bVar2)
	{
		iVar0 = 331645018;
	}
	else if (bVar3)
	{
		iVar0 = -99272505;
	}
	else
	{
		iVar0 = -1496612359;
	}
	return iVar0;
}

void func_143(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_272(iParam0, iParam1))
		{
			if (func_273(iParam0, iParam1))
			{
				if (func_274(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_275(iParam0);
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

void func_144(var uParam0)
{
	vector3 vVar0;
	int iVar4;

	vVar0 = { func_139(1) };
	iVar4 = 0;
	while (iVar4 < 4)
	{
		func_141(uParam0->f_149[iVar4], uParam0->f_140, vVar0);
		iVar4++;
	}
}

void func_145(int iParam0, bool bParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (bParam1)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 263, !bParam1);
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 138, bParam1);
		PED::SET_PED_CONFIG_FLAG(iParam0, 488, bParam1);
	}
}

void func_146(var uParam0, var uParam1, int iParam2, float fParam3, float fParam4)
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

void func_147(int iParam0, int iParam1)
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

int func_148()
{
	return Global_1897952->f_41;
}

int func_149(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(iParam0, iParam1);
	if (iVar0 == iParam2)
	{
		if (func_276())
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
			iVar0 = func_277(func_276(), iParam0, (iParam1 - 1));
		}
	}
	return iVar0;
}

int func_150(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			iVar0 = 2;
			break;
		case 1:
			iVar0 = 3;
			break;
		case 2:
			iVar0 = 4;
			break;
		case 3:
			iVar0 = 5;
			break;
		case 4:
			iVar0 = 6;
			break;
		case 5:
			iVar0 = 7;
			break;
		case 6:
			iVar0 = 8;
			break;
		case 7:
			iVar0 = 9;
			break;
		case 8:
			iVar0 = 10;
			break;
		case 9:
			iVar0 = 11;
			break;
		case 10:
			iVar0 = 12;
			break;
		case 11:
			iVar0 = 13;
			break;
		case 12:
			iVar0 = 14;
			break;
		case 13:
			iVar0 = 15;
			break;
		case 14:
			iVar0 = 16;
			break;
		case 15:
			iVar0 = 17;
			break;
		case 16:
			iVar0 = 18;
			break;
	}
	return iVar0;
}

Vector3 func_151(int iParam0)
{
	vector3 vVar0[24];

	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "SPBMC_IMTALKING", 24);
			break;
		case 1:
			StringCopy(&cVar0, "SPBMC_STILLHERE", 24);
			break;
		case 2:
			StringCopy(&cVar0, "SPBMC_IG1_A", 24);
			break;
		case 3:
			StringCopy(&cVar0, "SPBMC_IG1_B", 24);
			break;
		case 4:
			StringCopy(&cVar0, "SPBMC_IG1_C", 24);
			break;
		case 5:
			StringCopy(&cVar0, "SPBMC_IG1_D", 24);
			break;
		case 6:
			StringCopy(&cVar0, "SPBMC_IG1_E", 24);
			break;
		case 7:
			StringCopy(&cVar0, "SPBMC_IG1_F", 24);
			break;
		case 8:
			StringCopy(&cVar0, "SPBMC_IG1_G", 24);
			break;
		case 9:
			StringCopy(&cVar0, "SPBMC_IG1_H", 24);
			break;
		case 10:
			StringCopy(&cVar0, "SPBMC_IG1_I", 24);
			break;
		case 11:
			StringCopy(&cVar0, "SPBMC_IG1_J", 24);
			break;
		case 12:
			StringCopy(&cVar0, "SPBMC_IG1_K", 24);
			break;
		case 13:
			StringCopy(&cVar0, "SPBMC_IG2_A", 24);
			break;
		case 14:
			StringCopy(&cVar0, "SPBMC_IG2_B", 24);
			break;
		case 15:
			StringCopy(&cVar0, "SPBMC_IG2_C", 24);
			break;
		case 16:
			StringCopy(&cVar0, "SPBMC_IG2_D", 24);
			break;
		case 17:
			StringCopy(&cVar0, "SPBMC_IG2_E", 24);
			break;
		case 18:
			StringCopy(&cVar0, "SPBMC_IG2_F", 24);
			break;
	}
	return cVar0;
}

bool func_152(var uParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!AUDIO::_0xD89504D9D7D5057D(&cParam1))
	{
		bVar0 = AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION(&cParam1);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_278(cParam1, uParam0);
		if (bParam6)
		{
			AUDIO::PRELOAD_SCRIPT_CONVERSATION(&cParam1, true, true, bParam7);
		}
		else
		{
			AUDIO::START_SCRIPT_CONVERSATION(&cParam1, true, true, bParam7);
		}
		if (bParam4)
		{
			AUDIO::_0x40CA665AB9D8D505(&cParam1, iParam5);
		}
	}
	return bVar0;
}

bool func_153(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_154()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_155(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_156(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_157(var uParam0)
{
	return func_153(*uParam0, 2);
}

int func_158()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

int func_159(var uParam0)
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

var func_160(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_161(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("weapon_unarmed"));
}

int func_162(int iParam0, int iParam1)
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

int func_163(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (bParam6)
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
		{
			return 1;
		}
	}
	else if (func_279(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return 1;
	}
	return 0;
}

struct<2> func_164(int iParam0)
{
	struct<2> Var0;

	switch (iParam0)
	{
		case 0:
			Var0 = "BC1_UC_GIVE";
			Var0.f_1 = -163964935;
			break;
		case 1:
			Var0 = "SPD_UC_GRT";
			Var0.f_1 = -163964935;
			break;
		case 2:
			Var0 = "SPD_UC_ANT";
			Var0.f_1 = 648122183;
			break;
	}
	return Var0;
}

void func_165(int* iParam0, var uParam1, int iParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	iParam0->f_14 = iParam2;
	func_226(iParam0, 1);
	func_166(iParam0, uParam1, sParam3, uParam4, iParam5, iParam6, iParam7, bParam8, 0);
}

void func_166(int* iParam0, var uParam1, char* sParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = uParam1;
	iParam0->f_7 = uParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = sParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (func_185(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				func_280(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_281(iParam0->f_6, iParam0->f_5, 0);
			}
			func_282(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		func_283(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

void func_167(int* iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_226(iParam0, 5);
	}
	else
	{
		func_227(iParam0, 5);
	}
}

void func_168(int iParam0)
{
	struct<2> Var0;

	if (iParam0 <= 0)
	{
		return;
	}
	if (func_93(1) < iParam0)
	{
		iParam0 = func_93(1);
	}
	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	Var0 = { func_252(1644987397) };
	STATS::_0xBD861AE8A5181ED7(&Var0, iParam0);
}

void func_169(int iParam0, char* sParam1, var uParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_284(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

var func_170()
{
	return Global_1900383->f_393;
}

int func_171()
{
	return Global_1572887->f_12;
}

void func_172(var uParam0)
{
	vector3 vVar0;

	if (func_20(uParam0->f_162, 262144))
	{
		return;
	}
	if (func_42())
	{
		StringCopy(&vVar0, "SPBMC_THANKS_J", 24);
	}
	else
	{
		StringCopy(&vVar0, "SPBMC_THANKS_A", 24);
	}
	if (!func_178(&vVar0))
	{
		func_152(uParam0, vVar0, 0, -1, 0, 0);
	}
	if (func_179(&vVar0))
	{
		func_27(&(uParam0->f_162), 262144);
	}
}

int func_173(var uParam0, var uParam1)
{
	int iVar0;

	if (func_58(*uParam0))
	{
		iVar0 = func_285(*uParam0);
		if (func_42())
		{
			iVar0++;
		}
		func_286(*uParam0, *uParam1);
		func_287(*uParam0, iVar0);
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_174(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;

	iVar1 = func_288(uParam0, bParam2);
	if (bParam2)
	{
		iVar5 = func_148();
		if (iVar5 == 10 && !func_20(*uParam1, 2))
		{
			uParam0->f_175 = 1;
			return 1;
		}
		else if (iVar1 > 4 && !func_20(*uParam1, 1))
		{
			uParam0->f_175 = 0;
			return 1;
		}
		else if (iVar1 < 10)
		{
			bVar4 = true;
		}
		iVar2 = 2;
		iVar3 = 18;
	}
	else
	{
		if (iVar1 < 3)
		{
			bVar4 = true;
		}
		iVar2 = 18;
		iVar3 = 26;
	}
	if (bVar4)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(iVar2, iVar3);
		if (!func_20(*uParam1, func_289(iVar0)))
		{
			uParam0->f_175 = iVar0;
			return 1;
		}
	}
	else
	{
		iVar0 = iVar2;
		while (iVar0 <= (iVar3 - 1))
		{
			if (!func_20(*uParam1, func_289(iVar0)))
			{
				uParam0->f_175 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_175(var uParam0)
{
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_171))
	{
		if (ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_171, 0))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uParam0->f_143[0]), -1527527524) || ANIMSCENE::_0x1F0E401031E20146(uParam0->f_171, "pbl_base_reset"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_176(var uParam0, int iParam1)
{
	switch (uParam0->f_175)
	{
		case 0:
			func_14(iParam1, 52);
			break;
		case 2:
			func_14(iParam1, 53);
			break;
		case 3:
			func_14(iParam1, 54);
			break;
		case 4:
			func_14(iParam1, 55);
			break;
		case 5:
			func_14(iParam1, 56);
			break;
		case 6:
			func_14(iParam1, 57);
			break;
		case 7:
			func_14(iParam1, 58);
			break;
		case 8:
			func_14(iParam1, 59);
			break;
		case 9:
			func_14(iParam1, 60);
			break;
		case 10:
			func_14(iParam1, 61);
			break;
		case 11:
			func_14(iParam1, 62);
			break;
		case 12:
			func_14(iParam1, 63);
			break;
		case 13:
			func_14(iParam1, 64);
			break;
		case 1:
			func_14(iParam1, 65);
			break;
		case 21:
			func_14(iParam1, 74);
			break;
		case 14:
			func_14(iParam1, 66);
			break;
		case 15:
			func_14(iParam1, 67);
			break;
		case 16:
			func_14(iParam1, 68);
			break;
		case 18:
			func_14(iParam1, 71);
			break;
		case 19:
			func_14(iParam1, 72);
			break;
		case 20:
			func_14(iParam1, 73);
			break;
		case 22:
			func_14(iParam1, 76);
			break;
		case 25:
			func_14(iParam1, 79);
			break;
		case 23:
			func_14(iParam1, 77);
			break;
		case 24:
			func_14(iParam1, 78);
			break;
		case 26:
			func_14(iParam1, 69);
			break;
		case 17:
			func_14(iParam1, 70);
			break;
		default:
			break;
	}
}

Vector3 func_177(char* sParam0)
{
	vector3 vVar0[24];

	StringCopy(&cVar0, sParam0, 24);
	return cVar0;
}

bool func_178(char* sParam0)
{
	return AUDIO::_0xD89504D9D7D5057D(sParam0);
}

int func_179(char* sParam0)
{
	if (AUDIO::_0xD89504D9D7D5057D(sParam0) && AUDIO::_0x1ECC76792F661CF5(sParam0))
	{
		return 1;
	}
	return 0;
}

bool func_180(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_181(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_182(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_183(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_290(&Global_0, 8);
	}
	if (!func_291() || func_171() != -1)
	{
		return;
	}
	func_290(&Global_0, 1);
}

void func_184()
{
	AUDIO::_0x9428447DED71FC7E("special_ped_scenes");
}

bool func_185(int iParam0)
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

void func_186(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 && !func_185(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_292(*uParam0);
	if (((*Global_1945938)[iVar0 /*18*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && iParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_293(iVar0);
	*uParam0 = 0;
}

void func_187(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_186(&(((*uParam1)[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			func_88(iParam0, 0);
		}
	}
}

void func_188(int iParam0, int iParam1)
{
	if (&Global_40.f_11623[iParam0 /*8*/] != iParam1)
	{
		Global_40.f_11623[iParam0 /*8*/] = iParam1;
	}
}

int func_189(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_294(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

int func_190(int iParam0)
{
	if (!func_58(iParam0))
	{
		return -1;
	}
	return func_189(iParam0);
}

int func_191(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_5;
	}
	return (Global_1058888->f_498[iParam0 /*2*/])->f_1;
}

int func_192(int iParam0)
{
	if (!func_58(iParam0))
	{
		return 0;
	}
	return func_295(func_267(iParam0));
}

void func_193(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_171() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

int func_194(int iParam0, bool bParam1, int iParam2)
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
		if (func_296())
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
		iVar0 = func_297(&(Global_1898164->f_1[0 /*5*/]));
		if (func_298(iVar0) && func_299(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_58(&(Global_1898164->f_1[0 /*5*/])))
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

bool func_195(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_196(int iParam0)
{
	int iVar0;
	int iVar1;

	switch (func_192(iParam0))
	{
		case 1:
			iVar0 = func_297(iParam0);
			return func_300(iVar0);
		case 8:
			iVar1 = func_297(iParam0);
			if (func_299(((*Global_1347702)[iVar1 /*49*/])->f_12, 1))
			{
				return func_301(iVar1);
			}
			break;
	}
	return -1;
}

void func_197(bool bParam0)
{
	int iVar0;

	if (Global_1898077->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_171() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077->f_2 == 4 && Global_1898077->f_12 != Global_1898077->f_13) && !bParam0)
	{
		Global_1898077->f_1 = Global_1898077->f_2;
		Global_1898077->f_12 = Global_1898077->f_13;
		func_302(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_303();
		Global_1898077->f_9 = func_304(Global_1894899->f_2);
		func_305(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

int func_198()
{
	if (!func_137(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return 0;
	}
	else if (!func_137(((*Global_1347702)[66 /*49*/])->f_15, 1))
	{
		return 1;
	}
	else if (!func_137(((*Global_1347702)[67 /*49*/])->f_15, 1))
	{
		return 2;
	}
	else if (!func_137(((*Global_1835011)[38 /*74*/])->f_1, 1))
	{
		return 3;
	}
	else if (!func_137(((*Global_1347702)[68 /*49*/])->f_15, 1))
	{
		return 4;
	}
	else if (!func_137(((*Global_1835011)[59 /*74*/])->f_1, 1))
	{
		return 5;
	}
	else if (!func_137(((*Global_1835011)[67 /*74*/])->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_199(int iParam0, int iParam1)
{
	if (!func_58(iParam0))
	{
		return;
	}
	func_306(iParam0, iParam1);
}

int func_200(int iParam0)
{
	return &(Global_1898164->f_1[iParam0 /*5*/]);
}

void func_201(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_307(Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_308(Global_1935630, 4194304);
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

int func_202(bool bParam0)
{
	if (!bParam0 && func_309(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(752193127, bParam0, 0);
	return 1;
}

void func_203(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

void func_204(int iParam0, bool bParam1)
{
	if (func_171() != -1)
	{
		return;
	}
	if (func_200(0) != iParam0)
	{
		return;
	}
	if (func_310(iParam0))
	{
		if (bParam1)
		{
			func_311(-525676072);
		}
		else
		{
			func_312(-525676072);
		}
	}
}

int func_205(int iParam0)
{
	return func_314(func_313(iParam0));
}

void func_206(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_315(vParam0))
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
			if (func_316(vVar2, vParam0, 2f, 1))
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

void func_207(int iParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		VOLUME::_0x43F867EF5C463A53(iParam0);
	}
}

bool func_208(var uParam0)
{
	return func_153(*uParam0, 1);
}

void func_209(var uParam0, int iParam1)
{
	if (iParam1 || !func_208(uParam0))
	{
		func_317(uParam0);
	}
}

int func_210(var uParam0, int iParam1)
{
	if (func_318(uParam0, iParam1))
	{
		func_319(uParam0);
		return 1;
	}
	return 0;
}

struct<4> func_211(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;

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
					switch (iParam2)
					{
						case 0:
							Var0 = { 1992.478f, -370.7957f, 40.79723f };
							Var0.f_3 = 0f;
							break;
						case 1:
							Var0 = { 2015.352f, -327.9001f, 40.61312f };
							Var0.f_3 = 0f;
							break;
						case 2:
							Var0 = { 2048.973f, -308.3546f, 40.71767f };
							Var0.f_3 = 0f;
							break;
						case 3:
							Var0 = { 1988.401f, -327.9046f, 40.52593f };
							Var0.f_3 = 0f;
							break;
						case 4:
							Var0 = { 2043.473f, -299.7293f, 40.62843f };
							Var0.f_3 = 0f;
							break;
					}
					break;
				case 5:
					Var0 = { 2008.711f, -330.3677f, 40.6611f };
					Var0.f_3 = 0f;
					break;
			}
			break;
		case 1:
			Var0 = { 2434.052f, -1224.941f, 45.8519f };
			Var0.f_3 = -118f;
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					Var0 = { -3704.056f, -2618.024f, -14.9192f };
					Var0.f_3 = 23.3026f;
					break;
				case 1:
					switch (iParam2)
					{
						case 0:
							Var0 = { -3644.674f, -2615.925f, -14.8451f };
							Var0.f_3 = 349.841f;
							break;
						case 1:
							Var0 = { -3644.674f, -2615.925f, -14.8451f };
							Var0.f_3 = 349.841f;
							break;
						case 2:
							Var0 = { -3704.056f, -2618.024f, -14.9192f };
							Var0.f_3 = 23.3026f;
							break;
						case 3:
							Var0 = { -3704.056f, -2618.024f, -14.9192f };
							Var0.f_3 = 23.3026f;
							break;
					}
					break;
			}
			break;
		case 3:
			Var0 = { -1791.806f, -422.4149f, 154.8645f };
			Var0.f_3 = 205.9765f;
			break;
		case 4:
			switch (func_261(4))
			{
				case 3:
					Var0 = { 502.0502f, 1284.979f, 181.4051f };
					Var0.f_3 = 114.5882f;
					break;
				case 9:
					Var0 = { 414.5646f, 412.7333f, 107.6299f };
					Var0.f_3 = 352.4153f;
					break;
				case 10:
					Var0 = { 2794.157f, 1406.62f, 82.3539f };
					Var0.f_3 = 65.0766f;
					break;
				case 13:
					Var0 = { -5342.929f, -2947.815f, 0.80696f };
					Var0.f_3 = 20.08f;
					break;
				case 4:
					Var0 = { -1208.554f, -1229.683f, 74.7918f };
					Var0.f_3 = 19.5942f;
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					Var0 = { 888.6843f, 1276.612f, 234.0975f };
					Var0.f_3 = 321.3007f;
					break;
				case 1:
					Var0 = { 865.601f, 1248.82f, 179.7602f };
					Var0.f_3 = 321.3007f;
					break;
			}
			break;
		case 7:
			Var0 = { 2016.26f, 623.0106f, 158.6706f };
			Var0.f_3 = -167.98f;
			break;
		case 5:
			Var0 = { -1502.098f, 2458.125f, 417.4865f };
			Var0.f_3 = 160.0872f;
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					Var0 = { 2547.377f, -1216.046f, 52.3168f };
					Var0.f_3 = 87.45f;
					break;
				case 1:
					Var0 = { 2547.377f, -1216.046f, 52.3168f };
					Var0.f_3 = 87.45f;
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
				case 1:
					Var0 = { -326.079f, 765.2856f, 121.6327f };
					Var0.f_3 = 352.3531f;
					break;
			}
			break;
		case 10:
			Var0 = { 2673.46f, -1391.259f, 47.50816f };
			Var0.f_3 = 316.45f;
			break;
		case 11:
			switch (func_320(11))
			{
				case 105:
					Var0 = { 1423.438f, -1381.801f, 80.8106f };
					Var0.f_3 = 352.6983f;
					return Var0;
				case 38:
					Var0 = { -773.2449f, -1329.082f, 42.6291f };
					Var0.f_3 = 191.3503f;
					return Var0;
				case 126:
					Var0 = { -2378.475f, -2378.621f, 61.1724f };
					Var0.f_3 = 185.2923f;
					return Var0;
				case 5:
					Var0 = { 2563.835f, -1378.423f, 45.1925f };
					Var0.f_3 = 346.5068f;
					return Var0;
			}
			switch (func_261(11))
			{
				case 12:
					Var0 = { -2338.21f, -1271.362f, 147.062f };
					Var0.f_3 = 356.6931f;
					break;
				case 11:
					Var0 = { 1295.802f, -200.3015f, 99.0642f };
					Var0.f_3 = 1.8815f;
					break;
				case 10:
					Var0 = { 2428.864f, 1015.729f, 85.6131f };
					Var0.f_3 = 304.652f;
					break;
				case 15:
					Var0 = { -3157.477f, -2981.991f, 4.6224f };
					Var0.f_3 = 86.239f;
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
					Var0 = { 1702.736f, 2168.096f, 318.9191f };
					Var0.f_3 = 180.6669f;
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					Var0 = { -312.9856f, 808.8508f, 117.9822f };
					Var0.f_3 = 197.2573f;
					break;
			}
			break;
		case 14:
			Var0 = { 1320.745f, -1291.739f, 75.14026f };
			Var0.f_3 = 68.748f;
			break;
		case 15:
			switch (func_261(15))
			{
				case 7:
				case 9:
					Var0 = { -727.395f, 686.1953f, 58.2244f };
					Var0.f_3 = 177.0399f;
					break;
				case 13:
					Var0 = { -6122.201f, -3803.751f, -35.2455f };
					Var0.f_3 = 181.815f;
					break;
				case 10:
					Var0 = { 2183.348f, 1502.819f, 83.6009f };
					Var0.f_3 = 0f;
					break;
				case 1:
					Var0 = { -1891.265f, -289.866f, 176.457f };
					Var0.f_3 = 266.9828f;
					break;
				default:
					Var0 = { -1891.265f, -289.866f, 176.457f };
					Var0.f_3 = 266.9828f;
					break;
			}
			break;
		case 16:
			Var0 = { 2636.429f, -1229.537f, 52.3795f };
			Var0.f_3 = 358.7895f;
			break;
		case 17:
			Var0 = { 2943.588f, 1336.999f, 43.22713f };
			Var0.f_3 = 76.2778f;
			break;
		case 18:
			switch (iParam1)
			{
				case 0:
					Var0 = { -1812.186f, -367.3066f, 161.8834f };
					Var0.f_3 = 167.5016f;
					break;
				case 1:
					Var0 = { -1807.89f, -371.5062f, 161.8662f };
					Var0.f_3 = 167.5016f;
					break;
				case 2:
					Var0 = { -1800.857f, -357.3966f, 162.9631f };
					Var0.f_3 = 167.5016f;
					break;
			}
			break;
		case 19:
			switch (iParam2)
			{
				case 0:
					Var0 = { -256.365f, 753.5781f, 116.0851f };
					Var0.f_3 = 284.0192f;
					break;
				case 1:
					Var0 = { -192.9274f, 625.6254f, 113.5786f };
					Var0.f_3 = 145.05f;
					break;
				default:
					Var0 = { -256.365f, 753.5781f, 116.0851f };
					Var0.f_3 = 284.0192f;
					break;
			}
			break;
		case 20:
			Var0 = { -2725.277f, 709.9713f, 173.0266f };
			Var0.f_3 = 359.6814f;
			break;
		case 21:
			Var0 = { 2706.282f, 2369.827f, 170.2336f };
			Var0.f_3 = 359.6814f;
			break;
		case 22:
			switch (iParam1)
			{
				case 0:
					Var0 = { -5511.039f, -2929.552f, -3.278f };
					Var0.f_3 = -131.907f;
					break;
				case 1:
					Var0 = { -5497.666f, -2957.426f, -1.708f };
					Var0.f_3 = 12.912f;
					break;
				case 2:
					Var0 = { -5493.435f, -2940.703f, -1.471f };
					Var0.f_3 = 124.069f;
					break;
			}
			break;
		case 23:
			switch (func_261(23))
			{
				case 0:
					Var0 = { 1784.089f, -946.648f, 40.7225f };
					Var0.f_3 = 254.7072f;
					break;
				case 2:
					Var0 = { 2445.841f, -463.2956f, 41.1018f };
					Var0.f_3 = 126.5562f;
					break;
			}
			break;
		case 24:
			switch (iParam1)
			{
				case 0:
					Var0 = { -2233.602f, -2850.517f, 62.7628f };
					Var0.f_3 = 208.7791f;
					break;
				case 1:
					Var0 = { -3198.999f, -2538.554f, 66.5911f };
					Var0.f_3 = 292.1099f;
					break;
				case 2:
					Var0 = { -2927.12f, -2860.494f, 85.7312f };
					Var0.f_3 = 123.2795f;
					break;
				case 3:
					Var0 = { -3267.86f, -3416.677f, 39.5041f };
					Var0.f_3 = 332.5893f;
					break;
				case 4:
					Var0 = { -3572.794f, -3565.222f, 33.505f };
					Var0.f_3 = 260.2986f;
					break;
				case 5:
					Var0 = { -4399.393f, -3606.746f, 48.6452f };
					Var0.f_3 = 348.5519f;
					break;
				case 6:
					Var0 = { -4988.676f, -4060.992f, 1.0884f };
					Var0.f_3 = 163.9257f;
					break;
				case 7:
					Var0 = { -5333.317f, -3534.569f, 2.0586f };
					Var0.f_3 = 306.198f;
					break;
				case 8:
					Var0 = { -5374.994f, -4053.294f, -6.2292f };
					Var0.f_3 = 170.3096f;
					break;
				case 9:
					Var0 = { -5413.131f, -2606.156f, 2.5597f };
					Var0.f_3 = 255.0981f;
					break;
				case 10:
					Var0 = { -4956.249f, -3198.202f, 26.3575f };
					Var0.f_3 = 292.8281f;
					break;
				case 11:
					Var0 = { -4594.695f, -3045.041f, 6.5776f };
					Var0.f_3 = 4.7478f;
					break;
			}
			break;
		case 25:
			Var0 = { 2368.588f, -859.9452f, 42.0223f };
			Var0.f_3 = 198.7042f;
			break;
		case 26:
			Var0 = { -345.2797f, 794.6578f, 115.1777f };
			Var0.f_3 = 28.0552f;
			break;
		case 27:
			Var0 = { 2644.443f, -1207.946f, 52.3368f };
			Var0.f_3 = 199.0776f;
			break;
		case 28:
			Var0 = { 3025.557f, 1779.699f, 83.2056f };
			Var0.f_3 = 142.8609f;
			break;
		case 29:
			Var0 = { 2778.292f, -1313.274f, 45.89664f };
			Var0.f_3 = 216.3798f;
			break;
	}
	return Var0;
}

int func_212(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_321(uParam2, 1, iVar0);
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
			if (func_322(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_323(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_324(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_323(iParam0, uParam2, *uParam3);
					return 1;
				}
				else if (func_325(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_323(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_326(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_323(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_26 && func_327(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_323(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_328(uParam2, 1065353216))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_329(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_323(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_330(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_323(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_331(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_323(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			else if (func_331(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_323(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_332(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_323(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || uParam2->f_12 < 20f)
			{
				if (func_333(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_323(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_334(uParam2, 4000))
				{
					if ((func_335(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_336(uParam2, iParam0)) && func_337(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_323(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_335(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_336(uParam2, iParam0)) && func_337(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_323(iParam0, uParam2, *uParam3);
					return 1;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_338(iParam0, Global_1935630->f_41))
							{
								func_339();
								*uParam3 = 2;
								func_323(iParam0, uParam2, *uParam3);
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
						if (func_338(iParam0, Global_1935630->f_41))
						{
							func_339();
							*uParam3 = 2;
							func_323(iParam0, uParam2, *uParam3);
							return 1;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_340(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_158() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_339();
						*uParam3 = 2;
						func_323(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_341())
					{
						if (func_338(iParam0, Global_1935630->f_42))
						{
							func_339();
							*uParam3 = 2;
							func_323(iParam0, uParam2, *uParam3);
							return 1;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_342(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_323(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_343(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_323(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_344(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_323(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_345(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_323(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_346(uParam2, 4000))
				{
					if (func_347(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_323(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_348(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_323(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_349(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_323(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
	}
	return 0;
}

void func_213(var uParam0, var uParam1)
{
	if (uParam0->f_16 != 0 || *uParam1 != 0)
	{
		Global_1935630->f_30 = 0;
		Global_1935630->f_31 = 0;
		Global_1935630->f_25 = 0;
		Global_1935630->f_39 = 0;
		uParam0->f_8 = func_158();
		PLAYER::_0xEACEBAAE0A33FB3F(PLAYER::PLAYER_ID());
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_5 = 0;
	uParam0->f_10 = 0;
	func_350(uParam0, 0);
	*uParam1 = 0;
	uParam0->f_16 = 0;
}

var func_214(var uParam0, var uParam1)
{
	return AUDIO::_PLAY_AMBIENT_SPEECH1(uParam0, uParam1);
}

int func_215(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_216(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_60(((*Global_1835011)[iParam0 /*74*/])->f_1);
}

int func_217(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_59(((*Global_1835011)[iParam0 /*74*/])->f_1);
}

int func_218(int iParam0)
{
	int iVar0;

	iVar0 = func_351();
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

bool func_219()
{
	return Global_1392040->f_6;
}

int func_220()
{
	if (Global_1914319->f_18941.f_17)
	{
		return 1;
	}
	return 0;
}

int func_221(int iParam0)
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

int func_222(int iParam0)
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

void func_223(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
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

	iVar0 = func_352();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_353(iParam0);
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
	if (func_354(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_42())
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
	Global_40.f_11095.f_35 = func_355(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_352();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || iParam7)
	{
		iVar6 = func_356(iVar1);
		func_358(func_357(), 0, 4000);
		func_359(Global_40.f_11095.f_35);
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
		func_360(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_254(func_252(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(iParam5))
			{
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_222(14))
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
					sParam4 = func_361(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_284(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_284(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_254(func_252(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_222(4))
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
					sParam4 = func_361(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_284(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_284(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_252(-1990689970) };
	STATS::STAT_ID_SET_INT(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_0xE6B763C7F4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_362(10, 1);
	}
}

void func_224(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0 /*6*/] = iParam1;
	(Global_1347477->f_155[iParam0 /*6*/])->f_2 = iParam2;
	(Global_1347477->f_155[iParam0 /*6*/])->f_3 = iParam3;
	(Global_1347477->f_155[iParam0 /*6*/])->f_4 = iParam4;
	(Global_1347477->f_155[iParam0 /*6*/])->f_5 = bParam5;
	(Global_1347477->f_155[iParam0 /*6*/])->f_1 = MISC::GET_GAME_TIMER() + 500;
}

bool func_225(var uParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*uParam0, iParam1);
}

void func_226(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_227(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

int func_228()
{
	if (func_363(Global_35) || func_364(Global_35))
	{
		return 1;
	}
	return 0;
}

int func_229(var uParam0, vector3 vParam1, float fParam4)
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

int func_230(var uParam0, var uParam1, vector3 vParam2, float fParam5, float fParam6)
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
					if (func_365(Global_35, *uParam1, 0))
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

int func_231(int iParam0, bool bParam1)
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

void func_232(int iParam0, vector3 vParam1, float fParam4)
{
	if (!func_162(*iParam0, 518218985))
	{
		TASK::CLEAR_PED_TASKS(*iParam0, 1, 0);
		TASK::_TASK_SMART_FLEE_STYLE_COORD(*iParam0, vParam1, 6, 0, fParam4, -1, 0);
	}
}

void func_233(var uParam0)
{
	if (*uParam0 & 1 != 0)
	{
		*uParam0 |= 64 | 16 | 16777216;
	}
}

float func_234(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_235(var uParam0)
{
	func_31(uParam0, 0f);
}

int func_236(int iParam0, var uParam1, var uParam2)
{
	if (uParam1->f_11 != 0)
	{
		if (func_366(iParam0, uParam1))
		{
			if (!func_180(uParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
				func_54(uParam2, 0, 0, 1, 0);
				func_181(&(uParam1->f_10), 1);
			}
			return 1;
		}
		else if (func_180(uParam1->f_10, 1))
		{
			func_367(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
			func_182(&(uParam1->f_10), 1);
		}
	}
	return 0;
}

int func_237(var uParam0, int* iParam1, var uParam2, float fParam3, var uParam4, char* sParam5, int iParam6, float fParam7)
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
		bVar4 = func_180(uParam4, 32);
		func_187(iParam1, uParam2, 0);
		iVar5 = func_368(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return 1;
		}
		func_54(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_180(uParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_180(uParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_180(uParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_180(uParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_180(uParam4, 8388608) || func_180(uParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_180(uParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_180(uParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_239(iParam1, 4))
		{
			iVar6 |= 1024;
			EVENT::_0xBB1E41DD3D3C6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_239(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_180(uParam4, 67108864))
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
				iParam6 = func_369(uParam0);
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
			if (func_180(uParam4, 268435456))
			{
				iVar8 = func_370(uParam2, 648122183);
				if (iVar8 > -1)
				{
					func_371(iParam1, (*uParam2)[iVar8 /*17*/]);
				}
			}
			if (func_239(iParam1, 23))
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
			if (func_180(uParam4, 2) || func_180(uParam4, 16))
			{
				func_238(*uParam0, 1, 1);
			}
			else
			{
				func_238(*uParam0, 0, 1);
			}
			return 1;
		}
	}
	return 0;
}

void func_238(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
	}
}

bool func_239(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

int func_240(var uParam0, var uParam1, int iParam2, bool bParam3)
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
		if (func_372(*uParam0, bParam3, bVar2, bVar3))
		{
			return 1;
		}
	}
	return 0;
}

void func_241(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, var uParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_373(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_180(uParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_242(var uParam0)
{
	if (func_180(uParam0, 4))
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
	if (func_180(uParam0, 16384))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -485697785, false);
	}
	if (func_180(uParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -1292666904, false);
		PAD::DISABLE_CONTROL_ACTION(0, 578288361, false);
	}
}

bool func_243(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, var uParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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

	iVar1 = func_93(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = uParam10 & 128 != false;
	bVar7 = uParam10 & 64 != false;
	bVar8 = uParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*uParam0);
	bVar11 = (((PED::_0xA911EE21EDF69DAF(Global_35) || func_374(Global_35)) || func_375(Global_35)) || func_376(Global_35));
	fVar12 = -1f;
	if (func_30(&(iParam1->f_13)))
	{
		fVar12 = func_86(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if (((*uParam4)[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = ((*uParam4)[iVar0 /*17*/])->f_8;
		}
		bVar4 = func_185(((*uParam4)[iVar0 /*17*/])->f_6);
		func_377(*uParam0, (*uParam4)[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET(uParam4[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (func_378(*uParam0, iParam1, (*uParam4)[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_379(iParam12, ((*uParam4)[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						func_54(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_380(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET(uParam4[iVar0 /*17*/], 11))
					{
						func_187(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
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
					if (func_381(iParam1, fParam6, iParam1->f_9))
					{
						func_235(&(iParam1->f_18));
						if (bVar6)
						{
							func_380(uParam4, 0, 0);
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
		func_382(iParam1, fParam2);
	}
	return bVar5;
}

void func_244(var uParam0)
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

void func_245(int* iParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_383((*uParam1)[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET(uParam1[iVar0 /*17*/], 20))
			{
				func_382(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

int func_246(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, -124244224))
		{
			if (func_384(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_385(iParam1, 0);
				func_187(iParam1, uParam2, func_239(iParam1, 6));
				return 1;
			}
		}
	}
	return 0;
}

int func_247(var uParam0, int* iParam1, float fParam2, bool bParam3)
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
			func_235(&(iParam1->f_18));
			return 0;
		}
		else if (func_30(&(iParam1->f_18)))
		{
			func_29(&(iParam1->f_18));
			return 0;
		}
	}
	if (!func_30(&(iParam1->f_18)))
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
	return func_386(&(iParam1->f_18), fParam2);
	return 1;
}

void func_248(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_377(iParam0, (*uParam2)[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_249(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

int func_250(int iParam0)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			if (PED::IS_PED_HUMAN(iVar0))
			{
				if (PED::IS_PED_MALE(iVar0))
				{
					return 536905469;
				}
				else
				{
					return -352521166;
				}
			}
		}
	}
	return 205298116;
}

var func_251(int iParam0, int iParam1, var uParam2, int iParam3)
{
	struct<13> Var0;
	int iVar23;

	Var0.f_1 = 10;
	Var0.f_12 = 10;
	Var0 = 1;
	Var0.f_1[0] = iParam1;
	Var0.f_12[0] = uParam2;
	iVar23 = 13;
	return ENTITY::_0xA88E215CEB0435C0(iParam0, &Var0, iParam3, iVar23, 2, 0);
}

struct<2> func_252(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

int func_253(var uParam0, var uParam1)
{
	var uVar0;

	STATS::STAT_ID_GET_INT(&uParam0, &uVar0);
	return uVar0;
}

void func_254(var uParam0, var uParam1, int iParam2)
{
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

void func_255()
{
	if (!func_387(&Global_1327479))
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
	func_388(0);
	Global_1327479 = -1;
	Global_1310750->f_16075 = 0;
	Global_1310750->f_16076 = 0;
	Global_1310750->f_16103 = { 0f, 0f, 0f };
}

void func_256(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	if (func_389() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0 /*9*/];
		if (((func_387(iVar1) && !func_390(iVar1, iParam2)) && (!bParam3 || !func_391(iVar1))) && (!bParam4 || !func_392(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_393(iVar0);
			}
		}
		iVar0++;
	}
}

void func_257(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = iParam0 * 1000;
	if ((iVar0 + MISC::GET_GAME_TIMER()) > Global_1327479->f_4)
	{
		func_394(iParam0, iParam1, bParam2);
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

void func_258(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 1)
	{
		func_395(iParam0, 0);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (&Global_40.f_11922[iVar0] == 0)
			{
				Global_40.f_11922[iVar0] = iParam0;
				return;
			}
			iVar0++;
		}
		func_396(1);
		Global_40.f_11922[0] = iParam0;
	}
}

bool func_259(int iParam0)
{
	return Global_40.f_490.f_402[iParam0] & 1 != 0;
}

float func_260(int iParam0, int iParam1, bool bParam2, int iParam3)
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

int func_261(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			switch (func_148())
			{
				case 2:
					return 2;
				case 0:
					return 0;
				case 11:
					return 11;
				case 10:
					return 10;
				default:
					break;
			}
			return -1;
		case 1:
			return 0;
		case 2:
			return 15;
		case 3:
			return 1;
		case 4:
			switch (func_148())
			{
				case 3:
					return 3;
				case 9:
					return 9;
				case 10:
					return 10;
				case 4:
					return 4;
				case 13:
					return 13;
				default:
					break;
			}
			return -1;
		case 6:
			switch (func_148())
			{
				case 3:
					return 3;
				case 6:
					return 6;
				default:
					break;
			}
			return -1;
		case 7:
			return 10;
		case 5:
			return 7;
		case 8:
			return 0;
		case 9:
			return 9;
		case 10:
			return 0;
		case 11:
			switch (func_148())
			{
				case 12:
					return 12;
				case 10:
					return 10;
				case 15:
					return 15;
				case 11:
					return 11;
				case 16:
					return 16;
				case 1:
					return 1;
				case 0:
					return 0;
				default:
					break;
			}
			return -1;
		case 12:
			return 6;
		case 13:
			return 9;
		case 14:
			return 11;
		case 15:
			switch (func_148())
			{
				case 9:
					return 9;
				case 7:
					return 7;
				case 13:
					return 13;
				case 10:
					return 10;
				case 1:
					return 1;
				default:
					break;
			}
			return -1;
		case 16:
			return 0;
		case 17:
			return 10;
		case 18:
			return 1;
		case 19:
			return 9;
		case 20:
			return 1;
		case 21:
			return 10;
		case 22:
			return 13;
		case 23:
			switch (func_148())
			{
				case 0:
					return 0;
				case 2:
					return 2;
				default:
					break;
			}
			return -1;
		case 24:
			switch (func_148())
			{
				case 15:
					return 15;
				case 13:
					return 13;
				case 14:
					return 14;
				case 16:
					return 16;
				default:
					break;
			}
			return -1;
		case 25:
			return 0;
		case 26:
			return 9;
		case 27:
			return 0;
		case 28:
			return 10;
		case 29:
			return 0;
	}
	return -1;
}

struct<11> func_262(int iParam0)
{
	struct<11> Var0;

	switch (iParam0)
	{
		case 15:
			Var0 = -432403087;
			Var0.f_1 = { 502.0502f, 1284.979f, 181.4051f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 100f, 100f, 100f };
			Var0.f_10 = "BlindCassidyRandomEventBlock";
			break;
		case 16:
			Var0 = 665633627;
			Var0.f_1 = { 495.042f, 1284.463f, 182.217f };
			Var0.f_4 = { 0f, 0f, -175.784f };
			Var0.f_7 = { 7.32f, 15.009f, 10f };
			Var0.f_10 = "BlindCassidyTrigger";
			break;
		case 17:
			Var0 = -1612834106;
			Var0.f_1 = { 502.0502f, 1284.979f, 181.4051f };
			Var0.f_4 = { 0f, 0f, -3.079914f };
			Var0.f_7 = { 3f, 3f, 10f };
			Var0.f_10 = "BlindCassidyStayAway";
			break;
		case 18:
			Var0 = 665633627;
			Var0.f_1 = { 502.0502f, 1284.979f, 181.4051f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 1.85f, 1.85f, 10f };
			Var0.f_10 = "BlindCassidyAntiHorse";
			break;
		case 19:
			Var0 = 665633627;
			Var0.f_1 = { 502.0502f, 1284.979f, 181.4051f };
			Var0.f_4 = { 0f, 0f, 40.09184f };
			Var0.f_7 = { 3f, 3f, 10f };
			Var0.f_10 = "BlindCassidyFocus";
			break;
		case 20:
			Var0 = -432403087;
			Var0.f_1 = { 414.5646f, 412.7333f, 107.6299f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 100f, 100f, 100f };
			Var0.f_10 = "BlindCassidyRandomEventBlock";
			break;
		case 21:
			Var0 = 665633627;
			Var0.f_1 = { 418.393f, 419.451f, 107.6299f };
			Var0.f_4 = { 0f, 0f, 60.32438f };
			Var0.f_7 = { 7.722f, 13.559f, 10f };
			Var0.f_10 = "BlindCassidyTrigger";
			break;
		case 22:
			Var0 = -1612834106;
			Var0.f_1 = { 414.5646f, 412.7333f, 107.6299f };
			Var0.f_4 = { 0f, 0f, 62.24287f };
			Var0.f_7 = { 3f, 3f, 10f };
			Var0.f_10 = "BlindCassidyStayAway";
			break;
		case 23:
			Var0 = 665633627;
			Var0.f_1 = { 414.5646f, 412.7333f, 107.6299f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 1.85f, 1.85f, 10f };
			Var0.f_10 = "BlindCassidyAntiHorse";
			break;
		case 24:
			Var0 = 665633627;
			Var0.f_1 = { 414.5646f, 412.7333f, 107.6299f };
			Var0.f_4 = { 0f, 0f, 115.1113f };
			Var0.f_7 = { 3f, 3f, 10f };
			Var0.f_10 = "BlindCassidyFocus";
			break;
		case 25:
			Var0 = -432403087;
			Var0.f_1 = { 2794.157f, 1406.62f, 82.3539f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 100f, 100f, 100f };
			Var0.f_10 = "BlindCassidyRandomEventBlock";
			break;
		case 26:
			Var0 = 665633627;
			Var0.f_1 = { 2787.403f, 1410f, 82.354f };
			Var0.f_4 = { 0f, 0f, 154.2904f };
			Var0.f_7 = { 7.539f, 13.615f, 10f };
			Var0.f_10 = "BlindCassidyTrigger";
			break;
		case 27:
			Var0 = -1612834106;
			Var0.f_1 = { 2794.157f, 1406.62f, 82.3539f };
			Var0.f_4 = { 0f, 0f, 155.2096f };
			Var0.f_7 = { 3f, 3f, 10f };
			Var0.f_10 = "BlindCassidyStayAway";
			break;
		case 28:
			Var0 = 665633627;
			Var0.f_1 = { 2794.157f, 1406.62f, 82.3539f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 1.85f, 1.85f, 10f };
			Var0.f_10 = "BlindCassidyAntiHorse";
			break;
		case 29:
			Var0 = 665633627;
			Var0.f_1 = { 2794.157f, 1406.62f, 82.3539f };
			Var0.f_4 = { 0f, 0f, 83.2552f };
			Var0.f_7 = { 3f, 3f, 10f };
			Var0.f_10 = "BlindCassidyFocus";
			break;
		case 30:
			Var0 = -432403087;
			Var0.f_1 = { -5342.735f, -2948.708f, 0.8175f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 100f, 100f, 100f };
			Var0.f_10 = "BlindCassidyRandomEventBlock";
			break;
		case 31:
			Var0 = 665633627;
			Var0.f_1 = { -5343.361f, -2941.974f, 0.8519f };
			Var0.f_4 = { 0f, 0f, -84.35735f };
			Var0.f_7 = { 6.745f, 15.282f, 10f };
			Var0.f_10 = "BlindCassidyTrigger";
			break;
		case 32:
			Var0 = -1612834106;
			Var0.f_1 = { -5342.604f, -2949.041f, 0.8519f };
			Var0.f_4 = { 0f, 0f, 1.309033f };
			Var0.f_7 = { 3f, 3f, 10f };
			Var0.f_10 = "BlindCassidyStayAway";
			break;
		case 33:
			Var0 = 665633627;
			Var0.f_1 = { -5342.604f, -2949.041f, 0.8519f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 1.85f, 1.85f, 10f };
			Var0.f_10 = "BlindCassidyAntiHorse";
			break;
		case 34:
			Var0 = 665633627;
			Var0.f_1 = { -5342.735f, -2948.708f, 0.8175f };
			Var0.f_4 = { 0f, 0f, 32.01331f };
			Var0.f_7 = { 3f, 3f, 10f };
			Var0.f_10 = "BlindCassidyFocus";
			break;
		case 35:
			Var0 = -432403087;
			Var0.f_1 = { -1208.554f, -1229.683f, 74.7918f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 100f, 100f, 100f };
			Var0.f_10 = "BlindCassidyRandomEventBlock";
			break;
		case 36:
			Var0 = 665633627;
			Var0.f_1 = { -1211.495f, -1221.953f, 75.375f };
			Var0.f_4 = { 0f, 0f, -69.42678f };
			Var0.f_7 = { 8.114f, 12.717f, 10f };
			Var0.f_10 = "BlindCassidyTrigger";
			break;
		case 37:
			Var0 = -1612834106;
			Var0.f_1 = { -1209.312f, -1227.312f, 75.3753f };
			Var0.f_4 = { 0f, 0f, 27.64894f };
			Var0.f_7 = { 3f, 3f, 10f };
			Var0.f_10 = "BlindCassidyStayAway";
			break;
		case 38:
			Var0 = 665633627;
			Var0.f_1 = { -1209.312f, -1227.312f, 75.3753f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 1.85f, 1.85f, 10f };
			Var0.f_10 = "BlindCassidyAntiHorse";
			break;
		case 39:
			Var0 = 665633627;
			Var0.f_1 = { -1208.554f, -1229.683f, 74.7918f };
			Var0.f_4 = { 0f, 0f, 27.64894f };
			Var0.f_7 = { 3f, 3f, 10f };
			Var0.f_10 = "BlindCassidyFocus";
			break;
	}
	return Var0;
}

void func_263(var uParam0, int iParam1, vector3 vParam2, vector3 vParam5, vector3 vParam8, char* sParam11)
{
	if (VOLUME::_0x92A78D0BEDB332A3(*uParam0))
	{
		return;
	}
	*uParam0 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(iParam1, vParam2, vParam5, vParam8, sParam11);
}

int func_264(vector3 vParam0, float fParam3, var uParam4, bool bParam5, int iParam6, int iParam7, bool bParam8, float fParam9)
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
	if (func_315(vParam0))
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
		if (func_397(vParam0))
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
	func_398(iVar0, bParam8);
	return iVar0;
}

int func_265()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

var func_266(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || BUILTIN::SHIFT_LEFT(iParam0 & 1023, 5)) || BUILTIN::SHIFT_LEFT(iParam1 & 16383, 15));
}

int func_267(int iParam0)
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

int func_268(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	int iVar1;

	if (!func_399(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_265())
	{
		return -1;
	}
	uVar0 = func_266(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_306(iVar1, 0);
	func_400(iVar1, 0);
	func_401(iVar1, 0);
	func_402(iVar1, 0);
	func_403(iVar1, uVar0);
	if (iParam4 != 0)
	{
		func_404(iVar1, iParam4);
	}
	return iVar1;
}

bool func_269(var uParam0, int iParam1, char* sParam2)
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

int func_270(int iParam0)
{
	if (!func_58(iParam0))
	{
		return -1;
	}
	return func_405(iParam0);
}

int func_271(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_406(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_272(int iParam0, int iParam1)
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

int func_273(int iParam0, int iParam1)
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

bool func_274(int iParam0, int iParam1)
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
	if (!func_272(iParam0, iVar0))
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

void func_275(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

int func_276()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
	{
		return 1;
	}
	return 0;
}

int func_277(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_278(var uParam0, var uParam1, var uParam2, var uParam3)
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

float func_279(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

void func_280(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	int iVar0;

	if (iParam3 && !func_185(iParam0))
	{
		return;
	}
	iVar0 = func_292(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, MISC::_CREATE_VAR_STRING(2, sParam1, sParam2));
}

void func_281(int iParam0, char* sParam1, int iParam2)
{
	int iVar0;

	if (iParam2 && !func_185(iParam0))
	{
		return;
	}
	iVar0 = func_292(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, sParam1);
}

void func_282(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (iParam2 && !func_185(iParam0))
	{
		return;
	}
	iVar0 = func_292(iParam0);
	if (bParam1)
	{
		func_407(iParam0, 4);
		func_408(iVar0, 1);
		func_409(iVar0, 1);
	}
	else
	{
		func_410(iParam0, 4);
		func_409(iVar0, 0);
	}
}

void func_283(int* iParam0, char* sParam1)
{
	if (func_185(iParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		func_281(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_227(iParam0, 1);
}

var func_284(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_411(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_285(int iParam0)
{
	if (!func_58(iParam0))
	{
		return -1;
	}
	return func_412(iParam0);
}

void func_286(int iParam0, int iParam1)
{
	if (!func_58(iParam0))
	{
		return;
	}
	func_401(iParam0, iParam1);
}

void func_287(int iParam0, int iParam1)
{
	if (!func_58(iParam0))
	{
		return;
	}
	func_402(iParam0, iParam1);
}

var func_288(var uParam0, bool bParam1)
{
	var uVar0;

	if (bParam1)
	{
		uVar0 = (Global_40.f_11623[4 /*8*/])->f_6;
	}
	else
	{
		uVar0 = func_285(uParam0->f_136);
	}
	return uVar0;
}

int func_289(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			iVar0 = 1;
			break;
		case 1:
			iVar0 = 2;
			break;
		case 2:
			iVar0 = 4;
			break;
		case 3:
			iVar0 = 8;
			break;
		case 4:
			iVar0 = 16;
			break;
		case 5:
			iVar0 = 32;
			break;
		case 6:
			iVar0 = 64;
			break;
		case 7:
			iVar0 = 128;
			break;
		case 8:
			iVar0 = 256;
			break;
		case 9:
			iVar0 = 512;
			break;
		case 10:
			iVar0 = 1024;
			break;
		case 11:
			iVar0 = 2048;
			break;
		case 12:
			iVar0 = 4096;
			break;
		case 13:
			iVar0 = 8192;
			break;
		case 14:
			iVar0 = 16384;
			break;
		case 15:
			iVar0 = 32768;
			break;
		case 16:
			iVar0 = 65536;
			break;
		case 17:
			iVar0 = 131072;
			break;
		case 18:
			iVar0 = 262144;
			break;
		case 19:
			iVar0 = 524288;
			break;
		case 20:
			iVar0 = 1048576;
			break;
		case 21:
			iVar0 = 2097152;
			break;
		case 22:
			iVar0 = 4194304;
			break;
		case 23:
			iVar0 = 8388608;
			break;
		case 24:
			iVar0 = 16777216;
			break;
		case 25:
			iVar0 = 33554432;
			break;
	}
	return iVar0;
}

void func_290(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_291()
{
	return 1;
	if (Global_1572887->f_12 == 0)
	{
		return 1;
	}
	return Global_40.f_1;
}

int func_292(int iParam0)
{
	return iParam0;
}

void func_293(int iParam0)
{
	if (!func_413(iParam0))
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

int func_294(int iParam0)
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

int func_295(var uParam0)
{
	return uParam0 & 31;
}

int func_296()
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

int func_297(int iParam0)
{
	if (!func_58(iParam0))
	{
		return -1;
	}
	return func_414(func_267(iParam0));
}

bool func_298(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_299(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_300(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 0;
		case 5:
		case 6:
		case 9:
		case 10:
		case 11:
		case 13:
		case 14:
		case 15:
		case 25:
			return 1;
		case 12:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 26:
		case 53:
			return 2;
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 37:
			return 3;
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			return 4;
		case 44:
		case 45:
		case 46:
		case 47:
		case 49:
		case 50:
		case 51:
		case 52:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			return 5;
		case 59:
			return 6;
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
			return 7;
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
			return 8;
	}
	return -1;
}

int func_301(int iParam0)
{
	switch (iParam0)
	{
		case 120:
			return 0;
		case 0:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 66:
		case 94:
		case 97:
		case 98:
		case 112:
		case 113:
		case 114:
			return 1;
		case 3:
		case 4:
		case 5:
		case 37:
		case 67:
		case 76:
		case 134:
			return 2;
		case 115:
		case 116:
			return 3;
		case 58:
		case 64:
		case 68:
		case 82:
		case 83:
			return 5;
		case 1:
		case 2:
		case 8:
		case 9:
		case 10:
		case 96:
			return 8;
	}
	return -1;
}

void func_302(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &Var0, 2, 2);
}

int func_303()
{
	float fVar0;

	fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
	if (fVar0 < 0.01f)
	{
		return 19;
	}
	if (fVar0 < 0.16f)
	{
		return 15;
	}
	if (fVar0 < 0.31f)
	{
		return 17;
	}
	if (fVar0 < 0.46f)
	{
		return 16;
	}
	if (fVar0 < 0.61f)
	{
		return 18;
	}
	return 0;
}

int func_304(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 112;
		case 2:
			return 113;
		case 3:
			return 2;
		case 4:
			return 3;
		case 5:
			return 4;
		case 6:
			return 5;
		case 8:
			return 7;
		case 9:
			return 8;
		case 10:
			return 9;
		case 11:
			return 10;
		case 12:
			return 11;
		case 15:
			return 12;
		case 16:
			return 13;
		case 17:
			return 15;
		case 19:
			return 17;
		case 20:
			return 18;
		case 21:
			return 19;
		case 22:
			return 20;
		case 23:
			return 21;
		case 25:
			return 23;
		case 26:
			return 25;
		case 27:
			return 26;
		case 28:
			return 62;
		case 29:
			return 27;
		case 49:
			return 28;
		case 30:
			return 29;
		case 31:
			return 30;
		case 32:
			return 31;
		case 120:
			return 32;
		case 124:
			return 33;
		case 125:
			return 34;
		case 33:
			return 35;
		case 83:
			return 40;
		case 35:
			return 42;
		case 36:
			return 43;
		case 89:
			return 44;
		case 115:
			return 46;
		case 37:
			return 47;
		case 38:
			return 48;
		case 39:
			return 49;
		case 40:
			return 50;
		case 50:
			return 51;
		case 42:
			return 52;
		case 52:
			return 53;
		case 43:
			return 54;
		case 45:
			return 57;
		case 48:
			return 61;
		case 56:
			return 63;
		case 57:
			return 64;
		case 58:
			return 65;
		case 59:
			return 66;
		case 60:
			return 67;
		case 61:
			return 68;
		case 126:
			return 69;
		case 127:
			return 70;
		case 62:
			return 71;
		case 77:
			return 72;
		case 64:
			return 73;
		case 65:
			return 74;
		case 67:
			return 76;
		case 68:
			return 78;
		case 69:
			return 79;
		case 70:
			return 80;
		case 71:
			return 81;
		case 72:
			return 82;
		case 75:
			return 84;
		case 76:
			return 85;
		case 117:
			return 86;
		case 78:
			return 87;
		case 79:
			return 88;
		case 80:
			return 90;
		case 81:
			return 91;
		case 82:
			return 92;
		case 87:
			return 96;
		case 88:
			return 97;
		case 91:
			return 98;
		case 92:
			return 99;
		case 93:
			return 100;
		case 94:
			return 101;
		case 95:
			return 102;
		case 96:
			return 103;
		case 97:
			return 104;
		case 98:
			return 105;
		case 99:
			return 106;
		case 100:
			return 107;
		case 104:
			return 114;
		case 105:
			return 115;
		case 107:
			return 118;
		case 109:
			return 119;
		case 110:
			return 120;
		case 111:
			return 121;
		case 112:
			return 122;
		case 128:
			return 123;
		default:
			break;
	}
	return 0;
}

void func_305(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;

	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

void func_306(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_12105[iParam0 /*7*/])->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_415(iParam0);
	}
	else
	{
		func_416(iParam0, iParam1);
	}
	func_417();
}

void func_307(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_308(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_309(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_418(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return MISC::IS_BIT_SET(&(Global_40.f_283[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_1058888->f_40567[iVar1]), iVar2);
}

int func_310(int iParam0)
{
	if (!func_58(iParam0))
	{
		return 0;
	}
	switch (func_192(iParam0))
	{
		case 1:
			switch (func_297(iParam0))
			{
				case 9:
				case 18:
				case 23:
				case 24:
				case 26:
				case 33:
				case 34:
				case 37:
				case 38:
				case 39:
				case 40:
				case 41:
				case 42:
				case 43:
				case 47:
				case 59:
				case 66:
					return 1;
			}
			break;
		case 8:
			switch (func_297(iParam0))
			{
				case 2:
				case 58:
				case 62:
				case 96:
					return 1;
			}
			break;
	}
	return 0;
}

void func_311(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_419(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_420(iVar1) == iParam0)
		{
			INVENTORY::_0x6A564540FAC12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_422(func_421(iParam0), 6);
}

void func_312(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_419(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_420(iVar1) == iParam0)
		{
			INVENTORY::_0x766315A564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_423(func_421(iParam0), 6);
}

int func_313(int iParam0)
{
	int iVar0;

	if (iParam0 == 0 || iParam0 == -1)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (&Global_1898164->f_1[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_314(int iParam0)
{
	struct<5> Var0;

	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_1898164->f_162 == 0)
	{
		return 0;
	}
	if (Global_1898164->f_162 == 1)
	{
		Global_1898164->f_162 = 0;
		*(Global_1898164->f_1[0 /*5*/]) = { Var0 };
		return 1;
	}
	*(Global_1898164->f_1[iParam0 /*5*/]) = { Var0 };
	Global_1898164->f_162 = (Global_1898164->f_162 - 1);
	func_424(iParam0, Global_1898164->f_162);
	return 1;
}

int func_315(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_316(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_317(var uParam0)
{
	func_425(uParam0, 0);
}

int func_318(var uParam0, int iParam1)
{
	if (!func_208(uParam0))
	{
		return 0;
	}
	if (func_426(uParam0) > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_319(var uParam0)
{
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	*uParam0 = 0;
}

int func_320(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return 5;
		case 2:
			return 120;
		case 3:
			return 26;
		case 4:
			return -1;
		case 6:
			return -1;
		case 7:
			return -1;
		case 5:
			return -1;
		case 8:
			return 5;
		case 9:
			return 76;
		case 10:
			return 5;
		case 11:
			switch (func_427())
			{
				case 105:
					return 105;
				case 38:
					return 38;
				case 126:
					return 126;
				case 5:
					return 5;
				default:
					break;
			}
			return -1;
		case 12:
			return -1;
		case 13:
			return 76;
		case 14:
			return 105;
		case 15:
			return -1;
		case 16:
			return 5;
		case 17:
			return 78;
		case 18:
			return 26;
		case 19:
			return 76;
		case 20:
			return -1;
		case 21:
			return -1;
		case 22:
			return 115;
		case 23:
			return -1;
		case 24:
			return -1;
		case 25:
			return -1;
		case 26:
			return 76;
		case 27:
			return 5;
		case 28:
			return -1;
		case 29:
			return 5;
	}
	return -1;
}

void func_321(var uParam0, bool bParam1, int iParam2)
{
	func_428(iParam2);
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
		uParam0->f_13 = func_429(0);
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
							func_181(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_430(1))
						{
							func_181(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_430(1) || *uParam0 & 8192 != 0))
				{
					func_182(uParam0, 33554432);
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
			if (func_431(uParam0))
			{
				uParam0->f_15 = func_158();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_158() - uParam0->f_15) > 500)
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
	func_432(uParam0);
}

int func_322(int iParam0, var uParam1)
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
			if (!func_433(iParam0, uParam1, iVar2))
			{
				return 0;
			}
			if (func_434(iParam0, iVar2) <= func_435(uParam1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_323(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_436(iParam2, 1, 1, 1, 0))
	{
		func_181(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_350(uParam1, 1);
	func_437();
}

int func_324(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_438(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_439(uParam1);
			if (func_440(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = func_441(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_350(uParam1, 1);
						return 1;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_350(uParam1, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_325(int iParam0, int iParam1, var uParam2)
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
	if (func_442(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_439(uParam2);
		if (func_440(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > func_441(uParam2)
				{
					func_350(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_326(int iParam0, var uParam1)
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
	if (func_433(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_441(uParam1)
		{
			fVar3 = func_439(uParam1);
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

int func_327(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_443(bParam1, iParam2, bParam3);
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

int func_328(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_158();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return 1;
	}
	return 0;
}

int func_329(var uParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_444(uParam2);
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
			if (func_337(uParam2, iParam1))
			{
				func_350(uParam2, 1);
				return 1;
			}
		}
	}
	return 0;
}

int func_330(var uParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_12 < IntToFloat(func_445(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && !WEAPON::_0x5809DBCA0A37C82B(Global_1935630->f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_337(uParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_350(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_331(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_446(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(217247011, vVar0, uParam2->f_22))
				{
					func_350(uParam2, 1);
					return 1;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(956330317, vVar0, uParam2->f_27))
				{
					func_350(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-966930978, vVar0, uParam2->f_22))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("weapon_thrown_dynamite"), uParam2->f_26, &vVar4, 0, 0);
					if (func_447(iParam1, vVar0, vVar4))
					{
						func_350(uParam2, 1);
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
					func_350(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-966930978, vVar0, uParam2->f_22))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("weapon_thrown_dynamite"), uParam2->f_26, &vVar7, 0, 0);
					if (func_447(iParam1, vVar0, vVar7))
					{
						func_350(uParam2, 1);
						return 1;
					}
				}
				break;
		}
	}
	return 0;
}

int func_332(int iParam0, var uParam1)
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
		if (!func_433(iParam0, uParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_448(&(Global_1935630->f_34[iVar0]));
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_449(&(Global_1935630->f_34[iVar0])))
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
			if (func_450(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_451(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_452(uParam1, iParam0, fVar1, iVar0))
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

int func_333(int iParam0, var uParam1)
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

int func_334(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_158();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

int func_335(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_453(iVar0, &iVar2))
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
	if (func_454(iVar0, iParam0))
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

int func_336(var uParam0, int iParam1)
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

int func_337(var uParam0, int iParam1)
{
	if (func_455(uParam0))
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

int func_338(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return 1;
		}
		if (func_260(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_339()
{
}

int func_340(var uParam0, int iParam1)
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
		if (func_456(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_158();
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
						if (func_457(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_9 = func_158();
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

int func_341()
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
	if ((func_158() - Global_1935630->f_43) >= 10000)
	{
		return 0;
	}
	return 1;
}

int func_342(var uParam0, int iParam1)
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
	fVar0 = func_435(uParam0);
	if (uParam0->f_12 > func_458(uParam0) && uParam0->f_12 > fVar0)
	{
		return 0;
	}
	iVar2 = func_459(iParam1);
	iVar1 = func_460(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, Global_35, 1, 0) == 1)) || ((PED::_0x06087579E7AA85A9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, uParam0->f_14, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, uParam0->f_14, 1, 0) == 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_343(int iParam0, int iParam1, var uParam2)
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
	return func_461(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

int func_344(int iParam0, var uParam1)
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
		if (func_462(iParam0, uParam1, 1))
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
					if (!func_463(uParam1, iParam0))
					{
						if (func_457(iVar4, Global_36, 1) < 7f)
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

int func_345(int iParam0, var uParam1)
{
	if (!func_464(0))
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

int func_346(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_158();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_347(int iParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_348(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_158();
	}
	else if (func_158() - uParam1->f_4) > func_465(uParam1)
	{
		return func_466(iParam0, uParam1, 0, -1082130432);
	}
	return 0;
}

int func_349(var uParam0, int iParam1)
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

void func_350(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_181(uParam0, 134217728);
	}
	else
	{
		func_182(uParam0, 134217728);
	}
}

var func_351()
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

int func_352()
{
	int iVar0;

	iVar0 = func_467();
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

int func_353(int iParam0)
{
	float fVar0;
	float fVar1;

	if (func_171() != -1)
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
	fVar1 = func_234(MISC::ABSF(fVar1) < 1f, func_234(fVar1 < 0f, -1f, 1f), fVar1);
	return BUILTIN::CEIL(fVar1);
}

int func_354(int iParam0)
{
	if (!func_468(iParam0))
	{
		return 0;
	}
	return func_469(iParam0);
}

int func_355(int iParam0, int iParam1, int iParam2)
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

int func_356(int iParam0)
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

int func_357()
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

void func_358(int iParam0, bool bParam1, int iParam2)
{
	func_470((MISC::GET_GAME_TIMER() + iParam2), !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1955569->f_1.f_2.f_1, iParam0);
	func_471(iParam0);
}

void func_359(int iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_16[2]), 0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[2]), 1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_20[2]), func_472(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_24[2]), "pausemenu_player");
}

void func_360(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	bVar3 = false;
	if (func_473(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_474(iVar5, &iVar2, &iVar0))
			{
				if (!func_475(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_476(iVar2);
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
							if (func_477(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_352() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_352() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_478();
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

char* func_361(int iParam0)
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

int func_362(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_479(iParam0))
	{
		return 0;
	}
	if (!func_291())
	{
		return 0;
	}
	if (!func_480(iParam0, &iVar0, &iVar1))
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

int func_363(int iParam0)
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
		iVar2 = func_481(iVar9);
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

int func_364(int iParam0)
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
	iVar0 = func_170();
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

int func_365(int iParam0, int iParam1, bool bParam2)
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

int func_366(int iParam0, var uParam1)
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
		if (PED::IS_PED_IN_COMBAT(iParam0, func_482((bVar1 && !bVar0), Global_35, 0)))
		{
			return 1;
		}
	}
	return 0;
}

void func_367(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_383((*uParam0)[iVar0 /*17*/]))
		{
			func_226((*uParam0)[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_368(int iParam0, var uParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;

	if (uParam1->f_3 > -1 && uParam1->f_3 < *uParam2)
	{
		iVar0 = uParam1->f_3;
		((*uParam2)[iVar0 /*17*/])->f_8 = 6;
		func_483(iParam0, (*uParam2)[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (func_185(((*uParam2)[iVar0 /*17*/])->f_6))
		{
			func_226((*uParam2)[iVar0 /*17*/], 11);
			return ((*Global_1945938)[((*uParam2)[iVar0 /*17*/])->f_6 /*18*/])->f_3;
		}
	}
	return 0;
}

int func_369(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_484(*uParam0);
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

int func_370(var uParam0, int iParam1)
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

void func_371(int* iParam0, int* iParam1)
{
	if (!func_239(iParam0, 23))
	{
		if (iParam1->f_7 == 648122183)
		{
			func_226(iParam1, 19);
			func_385(iParam0, 23);
			func_485(iParam1, 2);
		}
	}
}

int func_372(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (func_486(16))
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
					func_487(16);
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

void func_373(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_483(iParam0, (*uParam1)[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, iParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT((*uParam1)[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

var func_374(int iParam0)
{
	return (func_488(iParam0, 4) || func_488(iParam0, 5));
}

int func_375(int iParam0)
{
	return func_488(iParam0, 7);
}

int func_376(int iParam0)
{
	return func_488(iParam0, 6);
}

void func_377(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (func_383(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			func_483(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

int func_378(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, var uParam13, float fParam14, bool bParam15, int iParam16)
{
	int iVar0;
	bool bVar1;

	iVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_489(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, uParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_490(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_282(iParam2->f_6, 0, 1);
				iVar0 = 0;
			}
		}
		else if (!bVar1)
		{
			func_282(iParam2->f_6, 1, 1);
			iVar0 = 0;
		}
		if (bParam8)
		{
			func_491(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return iVar0;
}

int func_379(int iParam0, int iParam1)
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

void func_380(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_89((*uParam0)[iVar0 /*17*/], iParam1, bParam2);
		iVar0++;
	}
}

int func_381(int* iParam0, float fParam1, var uParam2)
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

void func_382(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 1101824977, true);
		PAD::DISABLE_CONTROL_ACTION(0, 966551065, true);
		PAD::DISABLE_CONTROL_ACTION(0, 668058244, true);
		PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	}
}

int func_383(var uParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_5))
	{
		return 1;
	}
	return 0;
}

int func_384(int iParam0)
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

void func_385(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

int func_386(var uParam0, float fParam1)
{
	if (func_495(uParam0, fParam1))
	{
		func_29(uParam0);
		return 1;
	}
	return 0;
}

bool func_387(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_388(int iParam0)
{
	Global_1327479->f_3 = iParam0;
}

int func_389()
{
	return Global_1310750->f_16037;
}

bool func_390(int iParam0, int iParam1)
{
	if (!func_387(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/] && iParam1) != 0;
}

int func_391(int iParam0)
{
	if (!func_387(iParam0))
	{
		return 0;
	}
	if (func_496(64) && func_497(iParam0))
	{
		return 1;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_46;
}

int func_392(int iParam0)
{
	if (!func_387(iParam0))
	{
		return 0;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_47;
}

void func_393(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_387(&(Global_1310750->f_13321[iParam0 /*9*/])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID((Global_1310750->f_13321[iParam0 /*9*/])->f_5, 523);
	((*Global_1310750)[iVar0 /*111*/])->f_48 = 0;
	func_498(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

void func_394(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = MISC::GET_GAME_TIMER();
	func_499(iParam0, iParam1, bParam2);
}

void func_395(int iParam0, int iParam1)
{
	HUD::_JOURNAL_WRITE_ENTRY(iParam0);
	if (iParam1 == 1)
	{
		func_500(1);
	}
}

void func_396(int iParam0)
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
			Jump @97; //curOff = 52
		}
		else
		{
			func_395(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_500(1);
	}
}

bool func_397(vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, 16384);
}

int func_398(int iParam0, bool bParam1)
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

bool func_399(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_400(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_2 = iParam1;
}

void func_401(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_3 = iParam1;
}

void func_402(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_4 = iParam1;
}

void func_403(int iParam0, var uParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12105[iParam0 /*7*/] = uParam1;
		return;
	}
	Global_1058888->f_498[iParam0 /*2*/] = uParam1;
}

void func_404(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_12105[iParam0 /*7*/])->f_5 = iParam1;
		return;
	}
	(Global_1058888->f_498[iParam0 /*2*/])->f_1 = iParam1;
}

int func_405(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_3;
	}
	return 0;
}

void func_406(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_501(iParam1))
		{
			func_143(iParam0, 41788943);
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
			func_502(iParam0, 0, 1);
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
			func_503(iParam0, 0);
			bVar0 = true;
		}
		func_504(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	}
}

void func_407(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 - (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1));
}

void func_408(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		if (((*Global_1945938)[iParam0 /*18*/])->f_5 == 5 && !func_505(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, 0);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
		}
	}
}

void func_409(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
	}
}

void func_410(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 || iParam1);
}

void func_411(char* sParam0, char* sParam1, int iParam2)
{
	_NAMESPACE84::_0x74BCCEB233AD95B2(-466562563, MISC::GET_HASH_KEY(sParam0));
	_NAMESPACE84::_0x74BCCEB233AD95B2(1885309238, MISC::GET_HASH_KEY(sParam1));
	_NAMESPACE84::_0x74BCCEB233AD95B2(-826961056, iParam2);
}

int func_412(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_4;
	}
	return 0;
}

bool func_413(int iParam0)
{
	return func_505(iParam0, 2);
}

int func_414(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

int func_415(int iParam0)
{
	int iVar0;

	iVar0 = func_294(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_506(iVar0);
}

int func_416(int iParam0, int iParam1)
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
			func_507(iVar2);
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

void func_417()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

int func_418(int iParam0, int iParam1)
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

int func_419(bool bParam0)
{
	if (func_171() == -1)
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

int func_420(int iParam0)
{
	struct<2> Var0;

	if (!func_475(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_421(int iParam0)
{
	switch (iParam0)
	{
		case -2061583405:
			return 2;
		case -1719060085:
			return 16;
		case -999503751:
			return 1;
		case -525676072:
			return 4;
		case 81053684:
			return 8;
		case -413129408:
			return 32;
		default:
			break;
	}
	return 0;
}

void func_422(var uParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 - (Global_1946804->f_2657.f_26.f_6 && uParam0));
}

void func_423(var uParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 || uParam0);
}

void func_424(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == iParam1)
	{
		return;
	}
	if (iParam1 < iParam0)
	{
		iVar0 = iParam0;
		while (iVar0 > iParam1)
		{
			func_508((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_508(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_58(&(Global_1898164->f_1[0 /*5*/])))
	{
		func_199(&(Global_1898164->f_1[0 /*5*/]), 3);
	}
}

void func_425(var uParam0, int iParam1)
{
	uParam0->f_1 = (func_158() - iParam1);
	func_155(uParam0, 1);
	func_156(uParam0, 2);
	uParam0->f_2 = 0;
}

int func_426(var uParam0)
{
	if (!func_208(uParam0))
	{
		func_209(uParam0, 0);
		return uParam0->f_1;
	}
	if (func_509(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_158() - uParam0->f_1);
}

int func_427()
{
	return Global_1894899->f_2;
}

void func_428(int iParam0)
{
	int iVar0;
	var uVar1;

	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_510();
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
			func_511(&(Global_1935630->f_34), &(Global_1935630->f_39));
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

var func_429(int iParam0)
{
	return &(Global_1109400->f_275[iParam0 /*3*/]);
}

int func_430(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_512(bParam0, &uVar0, &uVar1))
	{
		return 1;
	}
	return 0;
}

int func_431(var uParam0)
{
	int iVar0;

	iVar0 = Global_1935630->f_40;
	if (func_171() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_513(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_513(uParam0);
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_460(iVar0) == -1)
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

void func_432(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_514(uParam0);
	}
}

int func_433(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_460(iParam2);
	}
	else
	{
		iVar1 = func_459(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_460(iParam0);
	}
	else
	{
		iVar0 = func_459(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return 1;
		}
	}
	if (func_180(*uParam1, 8388608))
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

float func_434(int iParam0, int iParam1)
{
	return func_260(iParam0, iParam1, 1, 1);
}

float func_435(var uParam0)
{
	return uParam0->f_26;
}

int func_436(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_437()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

int func_438(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5)
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
		if (((WEAPON::_0xCB690F680A3EA971(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, iParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_260(iVar0, iParam0, 1, 1) <= 4f)
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
		if (WEAPON::_0x6AD66548840472E5(func_160(iVar0, 0)))
		{
			if (func_515(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_439(var uParam0)
{
	return uParam0->f_17;
}

int func_440(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_12 > fParam3)
	{
		return 0;
	}
	fVar0 = -1f;
	if (!func_180(*uParam0, 4194304))
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

int func_441(var uParam0)
{
	return uParam0->f_18;
}

int func_442(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (WEAPON::_0x6AD66548840472E5(func_160(iVar0, 0)))
		{
			if (func_516(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_443(bool bParam0, var uParam1, var uParam2)
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

var func_444(var uParam0)
{
	return uParam0->f_23;
}

int func_445(var uParam0)
{
	return uParam0->f_21;
}

int func_446(var uParam0)
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

int func_447(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_517(iParam0, vParam4, 0.5f))
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

int func_448(int iParam0)
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
	if (func_518(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_449(int iParam0)
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

int func_450(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_519(iParam1))
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

int func_451(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_519(iParam1))
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

int func_452(var uParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40f;
	if (func_519(iParam1))
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

int func_453(int iParam0, var uParam1)
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

int func_454(int iParam0, int iParam1)
{
	if (PED::_0xB65A4DAB460A19BD(iParam0) == iParam1)
	{
		return 1;
	}
	if (func_520(iParam0, 1, 0, 0) != joaat("weapon_lasso"))
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

bool func_455(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

int func_456(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_457(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

float func_457(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

float func_458(var uParam0)
{
	return uParam0->f_24;
}

int func_459(int iParam0)
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

int func_460(int iParam0)
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

int func_461(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_453(Global_35, &iVar1))
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
		fVar2 = func_260(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
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
		if (func_260(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
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

int func_462(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_512(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_463(uParam1, iVar0))
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
				if (!bParam2 || !func_463(uParam1, iVar1))
				{
					if (func_457(iVar1, Global_36, 1) < 5f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_463(var uParam0, int iParam1)
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

int func_464(int iParam0)
{
	if (func_42())
	{
		return 0;
	}
	return func_137(((*Global_1347702)[58 /*49*/])->f_15, 1);
}

int func_465(var uParam0)
{
	return uParam0->f_20;
}

int func_466(int iParam0, var uParam1, bool bParam2, float fParam3)
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

var func_467()
{
	return Global_40.f_11095.f_35;
}

int func_468(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_469(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_470(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_521(bParam1);
	}
}

void func_471(int iParam0)
{
	_NAMESPACE84::_0x74BCCEB233AD95B2(-156028329, iParam0);
}

char* func_472(int iParam0)
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

int func_473(var uParam0)
{
	vector3 vVar0;

	if (!func_522(23, &vVar0))
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

int func_474(int iParam0, var uParam1, var uParam2)
{
	struct<4> Var0;
	var uVar5;

	if (!func_522(23, &Var0))
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

bool func_475(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_476(int iParam0)
{
	return iParam0;
}

int func_477(int iParam0)
{
	vector3 vVar0;

	if (!func_475(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_478()
{
	int iVar0;

	iVar0 = func_352();
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

int func_479(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return 0;
	}
	return 1;
}

int func_480(int iParam0, var uParam1, var uParam2)
{
	if (!func_479(iParam0))
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

int func_481(int iParam0)
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

int func_482(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_483(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	char* sVar0;
	int iVar1;

	if (func_185(iParam1->f_6))
	{
		if (iParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		func_186(&(iParam1->f_6), 0, 1);
	}
	if (!func_185(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_383(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_523(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824, 0, 1704213876, iParam1->f_10, 0);
			if (func_185(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_491(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_524(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						func_525(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_280(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					func_524(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					func_282(iParam1->f_6, 0, 1);
				}
				else
				{
					func_282(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

int func_484(int iParam0)
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

void func_485(int* iParam0, int iParam1)
{
	if (!func_225(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_226(iParam0, 14);
		}
	}
}

bool func_486(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_487(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_488(int iParam0, int iParam1)
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

bool func_489(int* iParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, var uParam8, float fParam9, bool bParam10, int iParam11)
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

bool func_490(int iParam0, int iParam1)
{
	if (iParam1 && !func_185(iParam0))
	{
		return false;
	}
	return !func_505(iParam0, 4);
}

void func_491(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (iParam3 && !func_185(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = func_292(iParam0);
	func_524(iParam0, 18, 0, 1);
	func_524(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1);
	}
	HUD::_UIPROMPT_SET_GROUP(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam4, iParam2);
}

bool func_492(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_185(iParam0))
	{
		return false;
	}
	iVar0 = func_292(iParam0);
	if (HUD::_0xCD072523791DDC1B(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

bool func_493(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_185(iParam0))
	{
		return false;
	}
	iVar0 = func_292(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_494(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_185(iParam0))
	{
		return;
	}
	iVar0 = func_292(iParam0);
	HUD::_UIPROMPT_RESTART_MODES(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

int func_495(var uParam0, float fParam1)
{
	if (!func_30(uParam0))
	{
		return 0;
	}
	if (func_86(uParam0) > fParam1)
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
	return func_390(iParam0, Global_1310750->f_16072 | 64);
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

void func_500(bool bParam0)
{
	if (bParam0)
	{
		func_181(&(Global_40.f_12018.f_42), 1);
	}
	else
	{
		func_182(&(Global_40.f_12018.f_42), 1);
	}
}

int func_501(int iParam0)
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

void func_502(int iParam0, int iParam1, bool bParam2)
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

void func_503(int iParam0, bool bParam1)
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

void func_504(int iParam0, int iParam1)
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

bool func_505(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1) != 0;
}

int func_506(int iParam0)
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

int func_507(int iParam0)
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

void func_508(int iParam0, int iParam1)
{
	struct<5> Var0;

	Var0 = { *(Global_1898164->f_1[iParam0 /*5*/]) };
	*(Global_1898164->f_1[iParam0 /*5*/]) = { *(Global_1898164->f_1[iParam1 /*5*/]) };
	*(Global_1898164->f_1[iParam1 /*5*/]) = { Var0 };
}

bool func_509(var uParam0)
{
	return func_153(*uParam0, 2);
}

int func_510()
{
	if (func_526())
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

void func_511(var uParam0, var uParam1)
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

int func_512(bool bParam0, var uParam1, var uParam2)
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

int func_513(var uParam0)
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

void func_514(var uParam0)
{
	int iVar0;

	if (Global_1935630->f_38 == 0)
	{
		func_182(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(Global_1935630->f_34[iVar0])))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(&(Global_1935630->f_34[iVar0])))
				{
					func_181(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}

int func_515(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_516(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_516(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_517(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

int func_518(int iParam0, int iParam1, bool bParam2, int iParam3)
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

int func_519(int iParam0)
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

int func_520(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

void func_521(bool bParam0)
{
	func_527(bParam0);
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

int func_522(int iParam0, var uParam1)
{
	if (!func_528(iParam0))
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

int func_523(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_505(iVar0, 2))
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
				Jump @141; //curOff = 128
				if (iVar1 == 0)
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
			if (iVar1 != 0)
			{
				func_529(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}

void func_524(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam3 && !func_185(iParam0))
	{
		return;
	}
	iVar0 = func_292(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam1, iParam2);
}

void func_525(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4)
{
	int iVar0;

	if (iParam4 && !func_185(iParam0))
	{
		return;
	}
	iVar0 = func_292(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, MISC::_CREATE_VAR_STRING(10, sParam1, sParam2, sParam3));
}

int func_526()
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

void func_527(bool bParam0)
{
	_NAMESPACE84::_0xB6FD96420C0126A1(-1056478928, bParam0);
}

bool func_528(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

void func_529(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, var uParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_408(iParam0, 1);
	func_409(iParam0, 1);
	func_410(iParam0, 128);
}

