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
	int iLocal_16[2] = { 0, 0 };
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	float fLocal_22 = 0f;
	int iLocal_23 = 0;
	struct<2> Local_24 = { 0, 0 } ;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 5;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 5;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	struct<13> Local_40 = { 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	struct<5> Local_71 = { 0, 0, 0, 0, -1 } ;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = -1;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 2;
	var uLocal_96 = 1;
	var uLocal_97 = 1;
	var uLocal_98 = 1;
	var uLocal_99 = 0;
	var uLocal_100 = 1;
	var uLocal_101 = 2;
	var uLocal_102 = 2;
	var uLocal_103 = 3;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 3;
	var uLocal_107 = 1;
	var uLocal_108 = 3;
	var uLocal_109 = 3;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
#endregion

void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_70 = ScriptParam_0;
	Local_71.f_1 = ScriptParam_0.f_1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_1(&Local_71);
	}
	if (!TASK::_0x841475AC96E794D1(ScriptParam_0.f_1))
	{
		func_1(&Local_71);
	}
	while (func_2())
	{
		switch (iLocal_69)
		{
			case 0:
				if (func_3(&Local_71))
				{
					iLocal_69 = 1;
					if (Local_71.f_4 != -1)
					{
					}
					else
					{
						Local_71.f_4 = func_4(&Local_71);
					}
				}
				break;
			case 1:
				if (func_5(&Local_71))
				{
					func_6(&Local_71);
				}
				func_7(&Local_71);
				func_8(&Local_71);
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1(&Local_71);
}

void func_1(var uParam0)
{
	func_9(uParam0);
	SCRIPTS::_0xE7282390542F570D(iLocal_70);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_2()
{
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		return 0;
	}
	return 1;
}

int func_3(var uParam0)
{
	int iVar0;

	if (Local_71 == 0)
	{
		iVar0 = TASK::_0xA92450B5AE687AAF(uParam0->f_1);
		Local_71 = func_10(iVar0);
		return 0;
	}
	if (func_11(Local_71, 4) || Global_40.f_8863.f_156)
	{
		func_1(uParam0);
		return 0;
	}
	func_12(uParam0);
	return 1;
}

int func_4(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	iVar2 = -1;
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return -1;
	}
	if (*uParam0 == -544327665)
	{
		iVar1 = 3;
	}
	else if (*uParam0 == 1120968795)
	{
		iVar1 = 2;
	}
	else if (*uParam0 == -834293086)
	{
		iVar1 = 10;
	}
	else if (*uParam0 == 1519472817)
	{
		iVar1 = 2;
	}
	else if (*uParam0 == -1859023693)
	{
		iVar1 = 11;
	}
	else if (*uParam0 == 2000209669)
	{
		iVar1 = 12;
	}
	else if (*uParam0 == -1761578407)
	{
		iVar1 = 11;
	}
	else if (*uParam0 == -1243267511)
	{
		iVar1 = 5;
	}
	else if (*uParam0 == -1272862985)
	{
		iVar1 = 4;
	}
	else if (*uParam0 == 1535254161)
	{
		iVar1 = 4;
	}
	else if (*uParam0 == 870958936)
	{
		iVar1 = 5;
	}
	else if (*uParam0 == 513110082)
	{
		iVar1 = 3;
	}
	else if (*uParam0 == -321841939)
	{
		iVar1 = 20;
	}
	else if (*uParam0 == -890175011)
	{
		iVar1 = 5;
	}
	else if (*uParam0 == 677950956)
	{
		iVar1 = 6;
	}
	else if (*uParam0 == 503180747)
	{
		iVar1 = 2;
	}
	else
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		if (iVar2 == -1)
		{
			iVar2 = iVar0;
			fVar3 = func_14(Global_35, func_13(uParam0, iVar0), 1);
		}
		else if (fVar3 > func_14(Global_35, func_13(uParam0, iVar0), 1))
		{
			iVar2 = iVar0;
			fVar3 = func_14(Global_35, func_13(uParam0, iVar0), 1);
		}
		iVar0++;
	}
	return iVar2;
}

int func_5(var uParam0)
{
	switch (*uParam0)
	{
		case -2009137002:
		case -1960242214:
		case -1958832660:
		case -1891628345:
		case -1887999095:
		case -1787770845:
		case -1761578407:
		case -1761189332:
		case -1646022773:
		case -1636964661:
		case -1614148516:
		case -1609238411:
		case -1505275983:
		case -1300082860:
		case -1287911066:
		case -1272862985:
		case -1243267511:
		case -1109016944:
		case -1053108445:
		case -986176781:
		case -979575591:
		case -890175011:
		case -849582265:
		case -780455182:
		case -739986731:
		case -709811179:
		case -607940493:
		case -415839138:
		case -321841939:
		case -232974724:
		case -161804536:
		case -148407339:
		case 58958195:
		case 247563739:
		case 308500632:
		case 373034311:
		case 404434344:
		case 429544447:
		case 657666087:
		case 921081956:
		case 1034793488:
		case 1284679164:
		case 1519228573:
		case 1535254161:
		case 1673499939:
		case 1734766691:
		case 1982045664:
		case 1986618633:
		case 2000209669:
		case 2134589549:
			return 1;
		case 677950956:
			if (func_15())
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 1861313914:
			if (func_16(59))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_6(var uParam0)
{
	if (uParam0->f_5 > 0 && uParam0->f_5 < 7)
	{
		if (!func_17(uParam0))
		{
			func_18(uParam0);
			func_19(uParam0, 0);
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			if (!func_17(uParam0))
			{
				return;
			}
			if ((*uParam0 == -890175011 || *uParam0 == 677950956) || *uParam0 == -321841939)
			{
				if (func_20(uParam0))
				{
					func_19(uParam0, 7);
				}
			}
			func_21(uParam0);
			if (func_22(uParam0->f_6.f_2))
			{
				func_19(uParam0, 7);
				return;
			}
			func_19(uParam0, 1);
			break;
		case 1:
			if (func_14(Global_35, uParam0->f_6.f_2, 1) <= uParam0->f_6)
			{
				func_23(&(uParam0->f_6.f_5));
				if ((((func_11(*uParam0, 2) || func_11(*uParam0, 16)) || *uParam0 == -890175011) || *uParam0 == 677950956) || (*uParam0 == -1761578407 && func_20(uParam0)))
				{
					func_19(uParam0, 3);
				}
				else
				{
					func_19(uParam0, 2);
				}
			}
			break;
		case 2:
			if (!func_24(&(uParam0->f_6.f_5)))
			{
				PAD::SET_PAD_SHAKE(0, 150, 100);
				func_25(&(uParam0->f_6.f_5));
			}
			else if (func_26(&(uParam0->f_6.f_5)) > 300)
			{
				PAD::SET_PAD_SHAKE(0, 150, 100);
				func_19(uParam0, 3);
			}
			break;
		case 3:
			if (func_14(Global_35, uParam0->f_6.f_2, 1) > (uParam0->f_6 + 5f))
			{
				func_18(uParam0);
				func_19(uParam0, 1);
			}
			else if (func_27(uParam0, 0))
			{
				func_28(uParam0);
				if ((func_11(*uParam0, 2) || func_11(*uParam0, 16)) || (*uParam0 == -1761578407 && func_20(uParam0)))
				{
					func_19(uParam0, 6);
				}
				else
				{
					func_19(uParam0, 4);
				}
			}
			break;
		case 4:
			func_30(uParam0, uParam0->f_6.f_8, func_29(uParam0), 0);
			if (func_14(Global_35, uParam0->f_6.f_2, 1) > (uParam0->f_6 + 5f))
			{
				func_18(uParam0);
				func_19(uParam0, 1);
			}
			else if (func_27(uParam0, 1))
			{
				func_18(uParam0);
				func_19(uParam0, 3);
			}
			else if (func_31(uParam0))
			{
				if (!func_11(*uParam0, 16))
				{
					func_32(*uParam0, 16);
					if (func_33(uParam0->f_6.f_8))
					{
						func_34(uParam0->f_6.f_8, 0, 1);
					}
					func_35(uParam0);
					func_36(uParam0, 1);
					if (!*uParam0 == -321841939)
					{
						func_37(1, -1);
					}
				}
				else if (func_33(uParam0->f_6.f_8))
				{
					func_34(uParam0->f_6.f_8, 0, 1);
				}
				func_25(&(uParam0->f_6.f_5));
				func_19(uParam0, 5);
			}
			else if (func_38(uParam0->f_6.f_8, 1) > 0f)
			{
				if (!func_11(*uParam0, 16))
				{
					if (!func_39(uParam0->f_3, 2))
					{
						func_40(&(uParam0->f_3), 2);
						if (!*uParam0 == -1761578407 && !*uParam0 == 404434344)
						{
							func_41(uParam0);
						}
					}
					if (!*uParam0 == -1761578407 && !*uParam0 == 404434344)
					{
						CAM::SET_GAMEPLAY_COORD_HINT(uParam0->f_6.f_2, -1, 2000, 2000, 0);
						func_42(uParam0);
					}
				}
			}
			else if (func_39(uParam0->f_3, 2))
			{
				func_43(&(uParam0->f_3), 2);
				if (!*uParam0 == -1761578407 && !*uParam0 == 404434344)
				{
					if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
					{
						CAM::STOP_GAMEPLAY_HINT(false);
					}
				}
			}
			break;
		case 5:
			if (*uParam0 == -890175011 || *uParam0 == 677950956)
			{
				CAM::SET_GAMEPLAY_COORD_HINT(uParam0->f_6.f_2, -1, 2000, 2000, 0);
			}
			func_30(uParam0, uParam0->f_6.f_8, func_29(uParam0), 0);
			if (!*uParam0 == -1761578407 && !*uParam0 == 404434344)
			{
				func_42(uParam0);
			}
			if (func_14(Global_35, uParam0->f_6.f_2, 1) > (uParam0->f_6 + 5f))
			{
				func_18(uParam0);
				func_19(uParam0, 1);
			}
			else if (PAD::IS_CONTROL_PRESSED(0, -719620017))
			{
			}
			else if (func_26(&(uParam0->f_6.f_5)) >= 2000)
			{
				if (!*uParam0 == -1761578407 && !*uParam0 == 404434344)
				{
					if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
					{
						CAM::STOP_GAMEPLAY_HINT(false);
					}
				}
				if (func_39(uParam0->f_3, 2))
				{
					func_43(&(uParam0->f_3), 2);
				}
				if (!*uParam0 == -1761578407 && !*uParam0 == 404434344)
				{
					func_44(uParam0);
				}
				if ((*uParam0 == -890175011 || *uParam0 == 677950956) || *uParam0 == -321841939)
				{
					func_18(uParam0);
					func_19(uParam0, 7);
				}
				else
				{
					func_19(uParam0, 6);
				}
			}
			break;
		case 6:
			func_30(uParam0, uParam0->f_6.f_8, func_29(uParam0), 0);
			if (func_14(Global_35, uParam0->f_6.f_2, 1) > (uParam0->f_6 + 5f))
			{
				func_18(uParam0);
				func_19(uParam0, 1);
			}
			else if (func_27(uParam0, 1))
			{
				func_18(uParam0);
				func_19(uParam0, 3);
			}
			break;
		case 7:
			break;
	}
}

void func_7(var uParam0)
{
	int iVar0;

	if (!func_39(uParam0->f_3, 8))
	{
		if (func_45(*uParam0) && VOLUME::_0x92A78D0BEDB332A3(uParam0->f_2))
		{
			if (func_46(&(uParam0->f_2)))
			{
				iVar0 = 3;
				if (*uParam0 == -849582265 && Global_40.f_11953)
				{
					iVar0 = 4;
				}
				func_47(iVar0, 0, 0, 0, 0, 0, 1065353216, 0);
				func_40(&(uParam0->f_3), 8);
				if (*uParam0 == -849582265)
				{
					Global_40.f_11953 = 1;
				}
			}
		}
	}
}

void func_8(var uParam0)
{
	int iVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	if (Local_24 > 0 && Local_24 < 13)
	{
	}
	switch (Local_24)
	{
		case 0:
			if (func_39(uParam0->f_3, 1))
			{
				func_43(&(uParam0->f_3), 1);
			}
			if (((*uParam0 == -544327665 || *uParam0 == 1120968795) || *uParam0 == 1519472817) || *uParam0 == -1859023693)
			{
				if (!func_20(uParam0))
				{
					if (!func_48(Global_35, func_13(uParam0, uParam0->f_4), 40f, 1, 1))
					{
						return;
					}
				}
				else
				{
					return;
				}
			}
			else if (*uParam0 == 308500632 || *uParam0 == 221420861)
			{
				if (!func_49(uParam0))
				{
					return;
				}
			}
			else if (*uParam0 == -1761578407)
			{
				if (uParam0->f_4 == 7)
				{
					func_50(1);
				}
				if (!func_49(uParam0))
				{
					return;
				}
				if (!func_48(Global_35, func_13(uParam0, uParam0->f_4), 40f, 1, 1))
				{
					return;
				}
				if (!func_20(uParam0))
				{
					if (func_11(*uParam0, 16))
					{
						func_51(*uParam0, 16);
					}
				}
			}
			else if (*uParam0 == 404434344)
			{
				if (!func_49(uParam0))
				{
					return;
				}
			}
			else if (*uParam0 == -890175011 || *uParam0 == 677950956)
			{
				if (!func_20(uParam0))
				{
					if (func_11(*uParam0, 16))
					{
						func_51(*uParam0, 16);
					}
				}
				if (!func_49(uParam0))
				{
					return;
				}
			}
			else if (*uParam0 == -1272862985)
			{
				if (func_20(uParam0))
				{
					if (!func_11(*uParam0, 16))
					{
						func_32(*uParam0, 16);
					}
				}
				else if (func_11(*uParam0, 16))
				{
					func_51(*uParam0, 16);
				}
			}
			else if (*uParam0 == -321841939)
			{
				if (!func_20(uParam0))
				{
					if (!func_52())
					{
						if (func_11(*uParam0, 16))
						{
							func_51(*uParam0, 16);
						}
					}
				}
			}
			else if (*uParam0 == 74587361)
			{
				if (func_53(*uParam0))
				{
					if (func_16(59))
					{
						if (!func_54(-108307814))
						{
							if (!func_55(-108307814))
							{
								func_56(-108307814, 1, 0);
							}
						}
					}
					func_57(&Local_24, 13, 1);
					return;
				}
			}
			else if (*uParam0 == 1464664327 || *uParam0 == 1347913620)
			{
				if (func_53(*uParam0))
				{
					func_57(&Local_24, 13, 1);
					return;
				}
			}
			else if (*uParam0 == 2000209669)
			{
				if (uParam0->f_4 == 11)
				{
					if (func_20(uParam0))
					{
						if (!func_11(*uParam0, 16))
						{
							func_32(*uParam0, 16);
						}
						if (!func_11(*uParam0, 32))
						{
							func_32(*uParam0, 32);
						}
					}
					else
					{
						if (func_11(*uParam0, 16))
						{
							func_51(*uParam0, 16);
						}
						if (func_11(*uParam0, 32))
						{
							func_51(*uParam0, 32);
						}
					}
				}
				else if (func_58(uParam0, 1))
				{
					if (func_20(uParam0))
					{
						if (!func_11(*uParam0, 16))
						{
							func_32(*uParam0, 16);
						}
						if (!func_11(*uParam0, 32))
						{
							func_32(*uParam0, 32);
						}
					}
					else
					{
						if (func_11(*uParam0, 16))
						{
							func_51(*uParam0, 16);
						}
						if (func_11(*uParam0, 32))
						{
							func_51(*uParam0, 32);
						}
					}
				}
				else
				{
					return;
				}
			}
			else if (*uParam0 == -1308658310)
			{
				if (func_53(*uParam0))
				{
					if (!func_59(uParam0, 0))
					{
						return;
					}
					func_57(&Local_24, 13, 1);
				}
				else
				{
					if (!func_59(uParam0, 1))
					{
						return;
					}
					if (!func_49(uParam0))
					{
						return;
					}
				}
			}
			else if (func_53(*uParam0))
			{
			}
			func_60(uParam0);
			func_57(&Local_24, 1, 1);
			break;
		case 1:
			func_61(uParam0);
			func_57(&Local_24, 2, 1);
			break;
		case 2:
			if (!func_62(uParam0) || func_63())
			{
				return;
			}
			func_57(&Local_24, 3, 1);
			break;
		case 3:
			if (func_64(uParam0))
			{
				func_57(&Local_24, 10, 1);
			}
			break;
		case 10:
			if (!*uParam0 == 1535254161)
			{
				if (!func_39(uParam0->f_3, 1))
				{
					func_40(&(uParam0->f_3), 1);
					if (*uParam0 == -1614148516)
					{
						Global_40.f_8863.f_146++;
					}
				}
			}
			if (*uParam0 == 221420861)
			{
				if (!func_49(uParam0))
				{
					AUDIO::SET_AMBIENT_ZONE_STATE(func_65(uParam0), false, true);
					MISC::CLEAR_WEATHER_TYPE_PERSIST();
					func_66(uParam0);
					func_57(&Local_24, 13, 1);
				}
				if (VOLUME::_0x92A78D0BEDB332A3(iLocal_14) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_14, true, 0))
				{
					if (func_67(&(Local_24.f_1)) >= 5f)
					{
						MISC::_0x59174F1AFE095B5A(-702816767, false, true, true, 15f, false);
						fLocal_22 = 0.1f;
						GRAPHICS::USE_PARTICLE_FX_ASSET("scr_discoverables");
						iLocal_20 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_disc_whispering_trees", func_68(uParam0), 0f, 0f, 0f, 1f, false, false, false, false);
						GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_20, "density", fLocal_22, false);
						func_57(&Local_24, 11, 1);
					}
				}
				else
				{
					func_25(&(Local_24.f_1));
				}
			}
			else if (*uParam0 == 1464664327)
			{
				if ((!func_11(*uParam0, 8) && VOLUME::_0x92A78D0BEDB332A3(iLocal_14)) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_14, true, 0))
				{
					func_69(uParam0);
				}
				if (func_70(uParam0))
				{
					func_71(uParam0);
					func_66(uParam0);
					func_57(&Local_24, 13, 1);
				}
			}
			else if (*uParam0 == -1308658310)
			{
				if (func_72(uParam0))
				{
					func_66(uParam0);
					func_57(&Local_24, 13, 1);
				}
			}
			else if (*uParam0 == 2000209669)
			{
				if (uParam0->f_4 == 11)
				{
					if (!func_20(uParam0))
					{
						if (func_11(*uParam0, 16))
						{
							func_73(uParam0);
							if (((func_39(Global_40.f_8863.f_152, 2048) && func_39(Global_40.f_8863.f_152, 4096)) && func_39(Global_40.f_8863.f_152, 8192)) && func_39(Global_40.f_8863.f_152, 16384))
							{
								func_71(uParam0);
							}
							else
							{
								func_74(*uParam0);
							}
						}
					}
				}
				else if (!func_53(*uParam0))
				{
					if (!func_11(*uParam0, 32) && func_11(*uParam0, 16))
					{
						func_74(*uParam0);
					}
					if (func_75(uParam0))
					{
						if ((((func_39(Global_40.f_8863.f_152, 2048) && func_39(Global_40.f_8863.f_152, 4096)) && func_39(Global_40.f_8863.f_152, 8192)) && func_39(Global_40.f_8863.f_152, 16384)) && func_11(*uParam0, 16))
						{
							func_71(uParam0);
						}
					}
				}
			}
			else if (*uParam0 == 1347913620)
			{
				if (!func_11(*uParam0, 8))
				{
					if (VOLUME::_0x92A78D0BEDB332A3(iLocal_14) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_14, true, 0))
					{
						func_69(uParam0);
					}
				}
				if (!func_11(*uParam0, 32))
				{
					if (VOLUME::_0x92A78D0BEDB332A3(iLocal_14) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_14, true, 0))
					{
						func_74(*uParam0);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_28[0])))
				{
					if (func_48(Global_35, func_76(uParam0, 0), 15f, 1, 1))
					{
						TASK::_0xA6A76D666A281F2D(&(uLocal_28[0]), func_77(uParam0, 0));
					}
				}
				if (func_78())
				{
					if (func_79(func_77(uParam0, 0)))
					{
						func_71(uParam0);
						func_66(uParam0);
						func_57(&Local_24, 13, 1);
					}
				}
			}
			else if (*uParam0 == -834293086)
			{
				if (!func_20(uParam0))
				{
					func_73(uParam0);
					func_80(uParam0);
					func_74(*uParam0);
				}
				if (!func_53(*uParam0))
				{
					if ((func_39(Global_40.f_8863.f_153, 1) && func_39(Global_40.f_8863.f_153, 2)) && func_39(Global_40.f_8863.f_153, 4))
					{
						func_32(*uParam0, 2);
					}
				}
				if (TASK::_0x841475AC96E794D1(uParam0->f_1))
				{
					if (func_48(Global_35, TASK::_0xA8452DD321607029(uParam0->f_1, 1), 15f, 1, 1))
					{
						if (!PED::_0x4912DFE492DB98CD(Global_35, "IsWithinHornetsVolume"))
						{
							PED::_0xCB9401F918CB0F75(Global_35, "IsWithinHornetsVolume", 1, -1);
						}
					}
					else if (PED::_0x4912DFE492DB98CD(Global_35, "IsWithinHornetsVolume"))
					{
						PED::_0xCB9401F918CB0F75(Global_35, "IsWithinHornetsVolume", 0, -1);
					}
				}
			}
			else if (*uParam0 == 404434344)
			{
				if (func_81(uParam0))
				{
				}
			}
			else if (*uParam0 == -1761578407)
			{
				if ((((((((uParam0->f_4 == 0 || uParam0->f_4 == 1) || uParam0->f_4 == 2) || uParam0->f_4 == 3) || uParam0->f_4 == 4) || uParam0->f_4 == 5) || uParam0->f_4 == 6) || uParam0->f_4 == 7) || uParam0->f_4 == 8)
				{
					if (func_81(uParam0))
					{
					}
				}
			}
			else if (*uParam0 == -890175011)
			{
				if (!func_53(*uParam0))
				{
					if (!func_20(uParam0))
					{
						if (func_11(*uParam0, 16))
						{
							func_73(uParam0);
							func_80(uParam0);
							if ((((func_39(Global_40.f_8863.f_154, 2048) && func_39(Global_40.f_8863.f_154, 4096)) && func_39(Global_40.f_8863.f_154, 8192)) && func_39(Global_40.f_8863.f_154, 16384)) && func_39(Global_40.f_8863.f_154, 32768))
							{
								func_71(uParam0);
							}
						}
					}
				}
			}
			else if (*uParam0 == 677950956)
			{
				if (!func_53(*uParam0))
				{
					if (!func_20(uParam0))
					{
						if (func_11(*uParam0, 16))
						{
							func_73(uParam0);
							func_80(uParam0);
							if (((((func_39(Global_40.f_8863.f_154, 65536) && func_39(Global_40.f_8863.f_154, 131072)) && func_39(Global_40.f_8863.f_154, 262144)) && func_39(Global_40.f_8863.f_154, 524288)) && func_39(Global_40.f_8863.f_154, 1048576)) && func_39(Global_40.f_8863.f_154, 2097152))
							{
								func_71(uParam0);
							}
						}
					}
				}
			}
			else if (*uParam0 == -1272862985)
			{
				if (!func_53(*uParam0))
				{
					if (!func_20(uParam0))
					{
						if (func_11(*uParam0, 16))
						{
							func_73(uParam0);
							func_80(uParam0);
							if (((func_39(Global_40.f_8863.f_152, 262144) && func_39(Global_40.f_8863.f_152, 524288)) && func_39(Global_40.f_8863.f_152, 1048576)) && func_39(Global_40.f_8863.f_152, 2097152))
							{
								func_71(uParam0);
							}
							else
							{
								func_74(*uParam0);
							}
						}
					}
				}
			}
			else if (*uParam0 == -321841939)
			{
				func_82(uParam0);
				if (!func_53(*uParam0))
				{
					if (!func_20(uParam0))
					{
						if (func_11(*uParam0, 16))
						{
							func_83(uParam0->f_4);
							func_84(uParam0);
							if (func_52())
							{
								func_71(uParam0);
								func_57(&Local_24, 11, 1);
							}
							else
							{
								iVar0 = func_85();
								func_86(-321841939, iVar0, 20);
								func_87(MISC::_CREATE_VAR_STRING(2, "DISCO_DC_FOUND", iVar0, 20));
							}
							PLAYER::_0xE5D3EB37ABC1EB03(PLAYER::GET_PLAYER_INDEX());
						}
					}
				}
			}
			else if (*uParam0 == -1614148516)
			{
				if (func_11(*uParam0, 16))
				{
					if (!func_53(*uParam0))
					{
						func_71(uParam0);
					}
				}
				if (func_48(Global_35, func_76(uParam0, 0), 75f, 1, 1))
				{
					if (func_88(uParam0, &iLocal_19, &uLocal_28, 0, 7))
					{
						if (ENTITY::IS_ENTITY_DEAD(&(uLocal_28[0])) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(&(uLocal_28[0]), Global_35, 1, 1))
						{
							if (AUDIO::IS_STREAM_PLAYING(iLocal_21))
							{
								AUDIO::STOP_STREAM(iLocal_21);
							}
						}
					}
				}
			}
			else if (*uParam0 == -161804536)
			{
				if (func_89(uParam0))
				{
				}
				if (!func_11(*uParam0, 32) && func_11(*uParam0, 16))
				{
					func_74(*uParam0);
				}
				if (func_11(*uParam0, 16) && func_39(Global_40.f_8863.f_152, 131072))
				{
					if (!func_53(*uParam0))
					{
						func_71(uParam0);
					}
				}
			}
			else if (*uParam0 == 503180747)
			{
				if (func_90(uParam0))
				{
					func_66(uParam0);
					func_57(&Local_24, 13, 1);
				}
			}
			else if (((((((((((((((((((((((*uParam0 == -1958832660 || *uParam0 == 247563739) || *uParam0 == 1734766691) || *uParam0 == 1535254161) || *uParam0 == 58958195) || *uParam0 == 308500632) || *uParam0 == 1986618633) || *uParam0 == -986176781) || *uParam0 == -232974724) || *uParam0 == -1053108445) || *uParam0 == -979575591) || *uParam0 == -1609238411) || *uParam0 == 921081956) || *uParam0 == -148407339) || *uParam0 == -1109016944) || *uParam0 == -1646022773) || *uParam0 == -1505275983) || *uParam0 == -1761189332) || *uParam0 == -607940493) || *uParam0 == -1787770845) || *uParam0 == -1891628345) || *uParam0 == -1960242214) || *uParam0 == -1272862985) || *uParam0 == -1243267511)
			{
				if (*uParam0 == 1535254161)
				{
					func_91(uParam0);
				}
				if (*uParam0 == -1243267511)
				{
					if (VOLUME::_0x92A78D0BEDB332A3(iLocal_14) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_14, true, 0))
					{
						uParam0->f_4 = func_4(uParam0);
						uParam0->f_6.f_2 = { func_92(uParam0, uParam0->f_4) };
					}
				}
				if ((*uParam0 == -1109016944 || *uParam0 == -232974724) || *uParam0 == -1960242214)
				{
					if ((!func_11(*uParam0, 8) && VOLUME::_0x92A78D0BEDB332A3(iLocal_14)) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_14, true, 0))
					{
						func_69(uParam0);
					}
				}
				if (func_11(*uParam0, 16))
				{
					if (!func_53(*uParam0))
					{
						func_71(uParam0);
					}
				}
			}
			else if (!func_53(*uParam0))
			{
				if (VOLUME::_0x92A78D0BEDB332A3(iLocal_14) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_14, true, 0))
				{
					if (((*uParam0 == -544327665 || *uParam0 == 1120968795) || *uParam0 == 1519472817) || *uParam0 == -1859023693)
					{
						func_73(uParam0);
						func_80(uParam0);
						func_74(*uParam0);
						if (*uParam0 == -544327665)
						{
							if ((func_39(Global_40.f_8863.f_152, 1) && func_39(Global_40.f_8863.f_152, 2)) && func_39(Global_40.f_8863.f_152, 4))
							{
								func_32(*uParam0, 2);
							}
						}
						else if (*uParam0 == 1120968795)
						{
							if (func_39(Global_40.f_8863.f_153, 1024) && func_39(Global_40.f_8863.f_153, 2048))
							{
								func_32(*uParam0, 2);
							}
						}
						else if (*uParam0 == 1519472817)
						{
							if (func_39(Global_40.f_8863.f_153, 8388608) && func_39(Global_40.f_8863.f_153, 16777216))
							{
								func_32(*uParam0, 2);
							}
						}
						else if (*uParam0 == -1859023693)
						{
							if ((((((((((func_39(Global_40.f_8863.f_153, 4096) && func_39(Global_40.f_8863.f_153, 8192)) && func_39(Global_40.f_8863.f_153, 16384)) && func_39(Global_40.f_8863.f_153, 32768)) && func_39(Global_40.f_8863.f_153, 65536)) && func_39(Global_40.f_8863.f_153, 131072)) && func_39(Global_40.f_8863.f_153, 262144)) && func_39(Global_40.f_8863.f_153, 524288)) && func_39(Global_40.f_8863.f_153, 1048576)) && func_39(Global_40.f_8863.f_153, 2097152)) && func_39(Global_40.f_8863.f_153, 4194304))
							{
								func_32(*uParam0, 2);
							}
						}
					}
					else if (*uParam0 == 74587361)
					{
						if (func_16(59))
						{
							if (!func_54(-108307814))
							{
								func_93(-108307814, 0, 0, 7, 0);
							}
						}
						func_71(uParam0);
					}
					else
					{
						func_71(uParam0);
					}
					func_66(uParam0);
					func_57(&Local_24, 13, 1);
				}
			}
			else
			{
				func_57(&Local_24, 13, 1);
			}
			break;
		case 11:
			if (*uParam0 == 221420861)
			{
				if (!func_49(uParam0))
				{
					AUDIO::SET_AMBIENT_ZONE_STATE(func_65(uParam0), false, true);
					MISC::CLEAR_WEATHER_TYPE_PERSIST();
					func_66(uParam0);
					func_57(&Local_24, 13, 1);
				}
				if (!iLocal_23)
				{
					if (VOLUME::_0x92A78D0BEDB332A3(iLocal_14) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_14, true, 0))
					{
						if (fLocal_22 < 1f)
						{
							if (func_67(&(Local_24.f_1)) >= 1f)
							{
								fLocal_22 = (fLocal_22 + 0.1f);
								if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_20))
								{
									GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_20, "density", fLocal_22, false);
								}
								func_25(&(Local_24.f_1));
							}
						}
						else
						{
							iLocal_23 = 1;
							AUDIO::SET_AMBIENT_ZONE_STATE(func_65(uParam0), true, true);
							AUDIO::_0x3743CE6948194349(func_65(uParam0), func_68(uParam0), 0f);
						}
					}
				}
				else if (VOLUME::_0x92A78D0BEDB332A3(iLocal_14) && !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_14, true, 0))
				{
					if (func_67(&(Local_24.f_1)) >= 5f)
					{
						AUDIO::SET_AMBIENT_ZONE_STATE(func_65(uParam0), false, true);
						func_57(&Local_24, 12, 1);
					}
					else
					{
						func_25(&(Local_24.f_1));
					}
				}
			}
			else if (*uParam0 == -321841939)
			{
				func_82(uParam0);
				if (func_94())
				{
					func_57(&Local_24, 12, 1);
				}
				else if (func_67(&(Local_24.f_1)) > 9f)
				{
					func_57(&Local_24, 12, 1);
				}
			}
			break;
		case 12:
			if (*uParam0 == 221420861)
			{
				if (!func_49(uParam0))
				{
					AUDIO::SET_AMBIENT_ZONE_STATE(func_65(uParam0), false, true);
					MISC::CLEAR_WEATHER_TYPE_PERSIST();
					func_66(uParam0);
					func_57(&Local_24, 13, 1);
				}
				if (fLocal_22 > 0.1f)
				{
					if (func_67(&(Local_24.f_1)) >= 1f)
					{
						fLocal_22 = (fLocal_22 - 0.1f);
						if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_20))
						{
							GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_20, "density", fLocal_22, false);
						}
						func_25(&(Local_24.f_1));
					}
				}
				else
				{
					iLocal_23 = 0;
					AUDIO::SET_AMBIENT_ZONE_STATE(func_65(uParam0), false, true);
					MISC::CLEAR_WEATHER_TYPE_PERSIST();
					func_71(uParam0);
					func_66(uParam0);
					func_57(&Local_24, 13, 1);
				}
			}
			else if (*uParam0 == -321841939)
			{
				func_82(uParam0);
				if (!func_94())
				{
					iVar1 = func_85();
					func_86(-321841939, iVar1, 20);
					func_87(MISC::_CREATE_VAR_STRING(2, "DISCO_DC_FOUND", iVar1, 20));
					func_71(uParam0);
					func_37(1, -1);
					func_57(&Local_24, 13, 1);
				}
			}
			break;
		case 13:
			break;
		default:
			break;
	}
}

void func_9(var uParam0)
{
	if (TASK::_0x841475AC96E794D1(iLocal_15))
	{
		TASK::_0x81948DFE4F5A0283(iLocal_15);
	}
	if (*uParam0 == 2000209669)
	{
		func_58(uParam0, 0);
	}
	else if (*uParam0 == -834293086)
	{
		if (PED::_0x4912DFE492DB98CD(Global_35, "IsWithinHornetsVolume"))
		{
			PED::_0xCB9401F918CB0F75(Global_35, "IsWithinHornetsVolume", 0, -1);
		}
	}
	else if (*uParam0 == 221420861)
	{
		MISC::CLEAR_WEATHER_TYPE_PERSIST();
	}
	else if (*uParam0 == 1535254161)
	{
		AUDIO::SET_AMBIENT_ZONE_STATE(func_65(uParam0), false, true);
	}
	if (*uParam0 == 2000209669)
	{
	}
	else if (*uParam0 == -1614148516)
	{
		if (AUDIO::IS_STREAM_PLAYING(iLocal_21))
		{
			AUDIO::STOP_STREAM(iLocal_21);
		}
	}
	if (!iLocal_19 == 0 && ENTITY::_0x1FF441D7954F8709(iLocal_19))
	{
		ENTITY::_0xD2B9C78537ED5759(iLocal_19);
	}
	func_66(uParam0);
	func_95(&uLocal_28, 1);
	func_96(&Local_40, 1);
	func_97(uParam0);
}

int func_10(int iParam0)
{
	switch (iParam0)
	{
		case 1208255499:
			return -261997819;
		case 1329911409:
			return 870958936;
		case -285871200:
			return 677950956;
		case 457229797:
			return -35775921;
		case 1211791851:
			return -1084929085;
		case 944017471:
			return 2135153015;
		case 1665997921:
			return 1347913620;
		case -2085458327:
			return -599506500;
		case 2135478933:
			return -1568839185;
		case 2057536374:
			return 1937333853;
		case 1366101372:
			return -321841939;
		case 284604988:
			return 1034793488;
		case 615465554:
			return -2009137002;
		case 550135642:
			return -1646022773;
		case 1241103201:
			return -1787770845;
		case 1115410643:
			return -1761578407;
		case 1602500054:
			return 404434344;
		case 1247293257:
			return 503180747;
		case 2124474718:
			return 308500632;
		case 2085223846:
			return 74587361;
		case 918603353:
			return -709811179;
		case 1443601258:
			return 118535038;
		case 2015617886:
			return -1609238411;
		case 1920390250:
			return -1614148516;
		case 1292765231:
			return 173549940;
		case -238317386:
			return 1424723727;
		case 816253701:
			return -1308658310;
		case -1452428628:
			return -1761189332;
		case -796563359:
			return -1420566543;
		case 1580303291:
			return -1208846034;
		case 1828659542:
			return 1048086072;
		case 2126824673:
			return 939555152;
		case 1953753789:
			return -161804536;
		case 673669550:
			return -30872859;
		case 1801467173:
			return 1519228573;
		case 1193272637:
			return -1505275983;
		case 376902028:
			return -890175011;
		case 1290045011:
			return 733338689;
		case 402062501:
			return -986176781;
		case 1071768797:
			return -1824429070;
		case 858952896:
			return 1734766691;
		case 2006959770:
			return -920971071;
		case 385483619:
			return -979575591;
		case 656484143:
			return 464413478;
		case 313051664:
			return 657666087;
		case 795896456:
			return -715636193;
		case 1917865597:
			return -607940493;
		case 597525083:
			return 425000526;
		case 1391618133:
			return -544327665;
		case 984162035:
			return -1053108445;
		case 569502820:
			return 230001763;
		case 713309702:
			return 2000209669;
		case 1665886065:
			return -1859023693;
		case 1326945204:
			return 1861313914;
		case -31708551:
			return -2108030724;
		case 902935343:
			return 58958195;
		case 1224129984:
			return -1891628345;
		case 899090818:
			return 1464664327;
		case 1055001530:
			return -654238687;
		case 1762028978:
			return 1986618633;
		case 1962698324:
			return 918206817;
		case 655415262:
			return -2008558277;
		case 602269758:
			return -834293086;
		case 190237998:
			return 1335921989;
		case 1755633483:
			return -739986731;
		case 1823800245:
			return -148407339;
		case 501995673:
			return -1960242214;
		case 339892059:
			return 1187689415;
		case 668685328:
			return 1673499939;
		case 393469536:
			return -1177787273;
		case 899984418:
			return 1342653896;
		case 870395400:
			return -1714262909;
		case 1675065699:
			return -1283611369;
		case 433005472:
			return -415839138;
		case 430219797:
			return -763376358;
		case 2017758854:
			return 1801731633;
		case 1550351677:
			return 1490223565;
		case 1324260340:
			return -1427565340;
		case 1640554197:
			return -232974724;
		case -2145018399:
			return -1272862985;
		case 158172139:
			return -1061274876;
		case 1633229561:
			return 221420861;
		case 201911354:
			return 1535254161;
		case 16632229:
			return 683269210;
		case 1681309457:
			return 373034311;
		case -108928342:
			return 2072029413;
		case -1033847736:
			return -1427565340;
		case -262561469:
			return -499529359;
		case -1497005692:
			return -780455182;
		case -1563294374:
			return -2019711818;
		case -990094658:
			return -1636964661;
		case -147728984:
			return 1154568952;
		case -357210169:
			return 2134589549;
		case 51085445:
			return -1109016944;
		case -912234551:
			return 1124200691;
		case -1823178954:
			return -357364973;
		case -1049130960:
			return -641229542;
		case -25476944:
			return -777592153;
		case -44323190:
			return -1859413640;
		case -582384899:
			return -1686810506;
		case -1771237190:
			return 2072069278;
		case -289116185:
			return 1120968795;
		case -424836434:
			return -409986722;
		case -1987709625:
			return -1882503209;
		case -628899594:
			return 1431862613;
		case -842594626:
			return -657632;
		case -232587958:
			return -1958832660;
		case -768523571:
			return -1481450947;
		case -753681029:
			return 1982045664;
		case -1893254403:
			return -849582265;
		case -1437877958:
			return 149709049;
		case -537565063:
			return 1284679164;
		case -1736298289:
			return -1923503631;
		case -821795036:
			return -1144800837;
		case -1520281639:
			return -1887999095;
		case -826079709:
			return -1457751321;
		case -695748117:
			return 1187917501;
		case -2084592674:
			return 1091556515;
		case -1605488611:
			return 1351526287;
		case -1847100017:
			return -1300082860;
		case -1928592714:
			return 397377585;
		case -1554719581:
			return -777150535;
		case -1512709755:
			return -919236330;
		case -246112144:
			return -968854939;
		case -1386344008:
			return 1519472817;
		case -854999443:
			return 247563739;
		case -1708277338:
			return -1848895400;
		case -109126822:
			return -2060865802;
		case -1965501170:
			return -1841331114;
		case -537909116:
			return 949011950;
		case -1354885594:
			return 1505050944;
		case -1053011105:
			return -1243267511;
		case -479194009:
			return 233600584;
		case -1754824674:
			return 429544447;
		case -2014047549:
			return 1833243216;
		case -2016277239:
			return -1494823099;
		case -981693493:
			return 921081956;
		case -88450435:
			return 513110082;
		case -446987974:
			return -490142739;
		case -906256657:
			return 330993088;
		case -1532808475:
			return 435290930;
		case -1093245144:
			return -1287911066;
		case -1566714772:
			return -1240932004;
		case -1298970333:
			return -1829339703;
		default:
			break;
	}
	return 0;
}

bool func_11(int iParam0, int iParam1)
{
	if (!func_98(iParam0))
	{
		return false;
	}
	return (Global_40.f_8863[func_99(iParam0, 1)] && iParam1) != 0;
}

void func_12(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	char* sVar9;

	if (func_45(*uParam0))
	{
		if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_2))
		{
			switch (*uParam0)
			{
				case 683269210:
					vVar0 = { -5576.82f, -2583.934f, -9.541f };
					vVar3 = { 0f, 0f, 30.534f };
					vVar6 = { 13.524f, 10.157f, 15.906f };
					sVar9 = "DLAM_Attack";
					break;
				case 2072029413:
					vVar0 = { 808.518f, 2299.105f, 250.32f };
					vVar3 = { 0f, 0f, 21.51f };
					vVar6 = { 5f, 4f, 9f };
					sVar9 = "DLAT_Attack";
					break;
				case -849582265:
					vVar0 = { -2587.832f, -81.85f, 166.262f };
					vVar3 = { 0f, 0f, 9.056f };
					vVar6 = { 52.076f, 56.679f, 16.103f };
					sVar9 = "DLIB_Attack";
					break;
				case 1861313914:
					vVar0 = { 894.559f, -1969.353f, 43.7f };
					vVar3 = { 0f, 0f, 51.997f };
					vVar6 = { 4.5f, 4.5f, 6f };
					sVar9 = "DLBS_Attack";
					break;
				case -641229542:
					vVar0 = { 1750.836f, -2091.653f, 40.941f };
					vVar3 = { 0f, 0f, -30.078f };
					vVar6 = { 2.215f, 3.182f, 2.394f };
					sVar9 = "DLRC_Attack";
					break;
				case -499529359:
					vVar0 = { 2285.546f, 97.363f, 49.583f };
					vVar3 = { 0f, 0f, -30.998f };
					vVar6 = { 7.132f, 4.645f, 4.596f };
					sVar9 = "DLDCG_Attack";
					break;
				case -780455182:
					vVar0 = { -988.307f, 1692.387f, 243.864f };
					vVar3 = { 0f, 0f, 0f };
					vVar6 = { 4.673f, 3.887f, 3.06f };
					sVar9 = "DLDG_Attack";
					break;
				case 429544447:
					vVar0 = { -6314.771f, -3467f, -11.247f };
					vVar3 = { 0f, 0f, 32.675f };
					vVar6 = { 2.852f, 3.164f, 3.06f };
					sVar9 = "DLJM_Attack";
					break;
				case 230001763:
					vVar0 = { 2133.283f, 145.452f, 75.745f };
					vVar3 = { 0f, 0f, 58.303f };
					vVar6 = { 17.167f, 17.176f, 9.904f };
					sVar9 = "DLOG_Attack";
					break;
				case 921081956:
					vVar0 = { 2415.271f, -738.691f, 41f };
					vVar3 = { 0f, 0f, 89.245f };
					vVar6 = { 6.662f, 6.841f, 12.231f };
					sVar9 = "DLORC_Attack";
					break;
				case 949011950:
					vVar0 = { -2341.024f, -2180.015f, 70f };
					vVar3 = { 0f, 0f, 123.618f };
					vVar6 = { 7.322f, 10.134f, 10.231f };
					sVar9 = "DLOH_Attack";
					break;
				case -739986731:
					vVar0 = { -2905.353f, -254.294f, 186.571f };
					vVar3 = { 0f, 0f, 129.763f };
					vVar6 = { 7.64f, 7.534f, 4f };
					sVar9 = "DLPR_Attack";
					break;
				case -657632:
					vVar0 = { 2684.651f, 71.256f, 59f };
					vVar3 = { 0f, 0f, 111.493f };
					vVar6 = { 4.343f, 3.084f, 3.303f };
					sVar9 = "DLRG_Attack";
					break;
				case -1761578407:
					if (Global_36 > -1200f)
					{
						vVar0 = { -762.369f, -1910.463f, 51f };
						vVar3 = { 0f, 0f, 43.472f };
						vVar6 = { 3.896f, 3.266f, 3.303f };
						sVar9 = "DLG1_Attack";
					}
					else
					{
						vVar0 = { -1738f, -996f, 114f };
						vVar3 = { 0f, 0f, -54.795f };
						vVar6 = { 4.369f, 3.487f, 3.303f };
						sVar9 = "DLG2_Attack";
					}
					break;
				case 404434344:
					if (Global_36 > -1200f)
					{
						vVar0 = { -762.369f, -1910.463f, 51f };
						vVar3 = { 0f, 0f, 43.472f };
						vVar6 = { 3.896f, 3.266f, 3.303f };
						sVar9 = "DLG1_Attack";
					}
					else
					{
						vVar0 = { -1738f, -996f, 114f };
						vVar3 = { 0f, 0f, -54.795f };
						vVar6 = { 4.369f, 3.487f, 3.303f };
						sVar9 = "DLG2_Attack";
					}
					break;
				case -1891628345:
					vVar0 = { -2694.572f, -1500.398f, 150f };
					vVar3 = { 0f, 0f, 1.841f };
					vVar6 = { 16.663f, 12.967f, 11.141f };
					sVar9 = "DLUW_Attack";
					break;
				case -1859413640:
					vVar0 = { 2195.32f, -554.613f, 40.995f };
					vVar3 = { 0f, 0f, -74.605f };
					vVar6 = { 1.691f, 1.755f, 2.318f };
					sVar9 = "DLSW_Attack";
					break;
			}
			uParam0->f_2 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar0, vVar3, vVar6, sVar9);
		}
	}
}

Vector3 func_13(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case -544327665:
			if (iParam1 == 0)
			{
				return 500.882f, 80.003f, 139.28f;
			}
			else if (iParam1 == 1)
			{
				return 759.079f, -1133.282f, 55.059f;
			}
			else if (iParam1 == 2)
			{
				return -3667.897f, -2805.515f, -7.129f;
			}
			break;
		case 1120968795:
			if (iParam1 == 0)
			{
				return -1521.811f, 519.1222f, 101.6756f;
			}
			else if (iParam1 == 1)
			{
				return 2417.936f, 853.4788f, 72.5143f;
			}
			break;
		case -834293086:
			if (iParam1 == 0)
			{
				return 1747.022f, -267.8047f, 73.0826f;
			}
			else if (iParam1 == 1)
			{
				return 1978.289f, -60.4567f, 59.4946f;
			}
			else if (iParam1 == 2)
			{
				return 640.8188f, -1062.613f, 48.0237f;
			}
			else if (iParam1 == 3)
			{
				return 839.6257f, -1174.002f, 54.9616f;
			}
			else if (iParam1 == 4)
			{
				return 1917.611f, 10.6206f, 77.6881f;
			}
			else if (iParam1 == 5)
			{
				return -85.5144f, 76.4358f, 93.2066f;
			}
			else if (iParam1 == 6)
			{
				return 76.4646f, 854.9302f, 207.8816f;
			}
			else if (iParam1 == 7)
			{
				return 1871.215f, 643.5952f, 119.9651f;
			}
			else if (iParam1 == 8)
			{
				return 2572.759f, 690.9401f, 83.9642f;
			}
			else if (iParam1 == 9)
			{
				return 2264.918f, 934.7651f, 81.1843f;
			}
			break;
		case -1859023693:
			if (iParam1 == 0)
			{
				return 525.7659f, 373.9645f, 107.9581f;
			}
			else if (iParam1 == 1)
			{
				return 610.1569f, -142.2089f, 146.4651f;
			}
			else if (iParam1 == 2)
			{
				return 1253.233f, 40.0713f, 94.2498f;
			}
			else if (iParam1 == 3)
			{
				return 886.287f, 470.977f, 103.937f;
			}
			else if (iParam1 == 4)
			{
				return 370.7786f, 1072.15f, 190.1675f;
			}
			else if (iParam1 == 5)
			{
				return -3575.866f, -2199.067f, -13.415f;
			}
			else if (iParam1 == 6)
			{
				return -5159.03f, -3162.67f, -18.5954f;
			}
			else if (iParam1 == 7)
			{
				return -3970.804f, -3027.692f, -12.9605f;
			}
			else if (iParam1 == 8)
			{
				return -3242.678f, -3077.875f, -0.5597f;
			}
			else if (iParam1 == 9)
			{
				return -3686.284f, -3258.813f, -4.4117f;
			}
			else if (iParam1 == 10)
			{
				return 795.2883f, 1013.304f, 118.3968f;
			}
			break;
		case 1519472817:
			if (iParam1 == 0)
			{
				return -2519.475f, 820.6946f, 146.4494f;
			}
			else if (iParam1 == 1)
			{
				return -1349.727f, -923.9958f, 69.342f;
			}
			break;
		case 2000209669:
			return func_100(uParam0, iParam1);
		case -1761578407:
		case 404434344:
			if (iParam1 == 9)
			{
				return -762.4968f, -1910.661f, 50.4933f;
			}
			else if (iParam1 == 10)
			{
				return -1738.282f, -995.4295f, 113.6716f;
			}
			else
			{
				return func_92(uParam0, iParam1);
			}
			break;
		case 870958936:
			return func_101(uParam0, iParam1);
		case 513110082:
			if (iParam1 == 0)
			{
				return -2531.5f, 1174.4f, 225.9f;
			}
			else if (iParam1 == 1)
			{
				return 3026.4f, 1778f, 84.2f;
			}
			else if (iParam1 == 2)
			{
				return -4389.58f, -2166.55f, 50.81f;
			}
			break;
		case 503180747:
			if (iParam1 == 0)
			{
				return 2325.978f, 1070.32f, 44.9401f;
			}
			else if (iParam1 == 1)
			{
				return -2698.656f, 697.2829f, 162.889f;
			}
			break;
		case 1535254161:
			return func_92(uParam0, iParam1);
		case -1272862985:
			return func_92(uParam0, iParam1);
		case -1243267511:
			return func_92(uParam0, iParam1);
		case -321841939:
			return func_92(uParam0, iParam1);
		case -890175011:
			return func_92(uParam0, iParam1);
		case 677950956:
			return func_92(uParam0, iParam1);
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_14(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

int func_15()
{
	if (func_102() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == 11966224)
	{
		return 1;
	}
	return 0;
}

bool func_16(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_103(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
	}
	return (UNLOCK::_UNLOCK_IS_UNLOCKED(((*Global_1835011)[iParam0 /*74*/])->f_2) && !UNLOCK::_UNLOCK_IS_VISIBLE(((*Global_1835011)[iParam0 /*74*/])->f_2));
}

int func_17(var uParam0)
{
	if (func_39(uParam0->f_3, 1))
	{
		return 1;
	}
	return 0;
}

void func_18(var uParam0)
{
	if (func_33(uParam0->f_6.f_8))
	{
		func_104(&(uParam0->f_6.f_8), 1, 1);
	}
	func_25(&(uParam0->f_6.f_5));
	if (func_39(uParam0->f_3, 2))
	{
		func_43(&(uParam0->f_3), 2);
	}
}

void func_19(var uParam0, int iParam1)
{
	uParam0->f_5 = iParam1;
}

int func_20(var uParam0)
{
	switch (*uParam0)
	{
		case -544327665:
			if (uParam0->f_4 == 0)
			{
				if (func_39(Global_40.f_8863.f_152, 1))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (func_39(Global_40.f_8863.f_152, 2))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				if (func_39(Global_40.f_8863.f_152, 4))
				{
					return 1;
				}
			}
			break;
		case 2000209669:
			if (uParam0->f_4 == 0)
			{
				if (func_39(Global_40.f_8863.f_152, 8))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (func_39(Global_40.f_8863.f_152, 16))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				if (func_39(Global_40.f_8863.f_152, 32))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 3)
			{
				if (func_39(Global_40.f_8863.f_152, 64))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 4)
			{
				if (func_39(Global_40.f_8863.f_152, 128))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 5)
			{
				if (func_39(Global_40.f_8863.f_152, 256))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 6)
			{
				if (func_39(Global_40.f_8863.f_152, 512))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 7)
			{
				if (func_39(Global_40.f_8863.f_152, 1024))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 11)
			{
				if (func_39(Global_40.f_8863.f_152, 16384))
				{
					return 1;
				}
			}
			break;
		case 1120968795:
			if (uParam0->f_4 == 0)
			{
				if (func_39(Global_40.f_8863.f_153, 1024))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (func_39(Global_40.f_8863.f_153, 2048))
				{
					return 1;
				}
			}
			break;
		case 1519472817:
			if (uParam0->f_4 == 0)
			{
				if (func_39(Global_40.f_8863.f_153, 8388608))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (func_39(Global_40.f_8863.f_153, 16777216))
				{
					return 1;
				}
			}
			break;
		case -834293086:
			if (uParam0->f_4 == 0)
			{
				if (func_39(Global_40.f_8863.f_153, 1))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (func_39(Global_40.f_8863.f_153, 2))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				if (func_39(Global_40.f_8863.f_153, 4))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 3)
			{
				if (func_39(Global_40.f_8863.f_153, 8))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 4)
			{
				if (func_39(Global_40.f_8863.f_153, 16))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 5)
			{
				if (func_39(Global_40.f_8863.f_153, 32))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 6)
			{
				if (func_39(Global_40.f_8863.f_153, 64))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 7)
			{
				if (func_39(Global_40.f_8863.f_153, 128))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 8)
			{
				if (func_39(Global_40.f_8863.f_153, 256))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 9)
			{
				if (func_39(Global_40.f_8863.f_153, 512))
				{
					return 1;
				}
			}
			break;
		case -1859023693:
			if (uParam0->f_4 == 0)
			{
				if (func_39(Global_40.f_8863.f_153, 4096))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (func_39(Global_40.f_8863.f_153, 8192))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				if (func_39(Global_40.f_8863.f_153, 16384))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 3)
			{
				if (func_39(Global_40.f_8863.f_153, 32768))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 4)
			{
				if (func_39(Global_40.f_8863.f_153, 65536))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 5)
			{
				if (func_39(Global_40.f_8863.f_153, 131072))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 6)
			{
				if (func_39(Global_40.f_8863.f_153, 262144))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 7)
			{
				if (func_39(Global_40.f_8863.f_153, 524288))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 8)
			{
				if (func_39(Global_40.f_8863.f_153, 1048576))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 9)
			{
				if (func_39(Global_40.f_8863.f_153, 2097152))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 10)
			{
				if (func_39(Global_40.f_8863.f_153, 4194304))
				{
					return 1;
				}
			}
			break;
		case 404434344:
			if (func_39(Global_40.f_8863.f_154, 1))
			{
				return 1;
			}
			break;
		case -1761578407:
			if (uParam0->f_4 == 0)
			{
				if (func_39(Global_40.f_8863.f_154, 1))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (func_39(Global_40.f_8863.f_154, 2))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				if (func_39(Global_40.f_8863.f_154, 4))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 3)
			{
				if (func_39(Global_40.f_8863.f_154, 8))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 4)
			{
				if (func_39(Global_40.f_8863.f_154, 16))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 5)
			{
				if (func_39(Global_40.f_8863.f_154, 32))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 6)
			{
				if (func_39(Global_40.f_8863.f_154, 64))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 7)
			{
				if (func_39(Global_40.f_8863.f_154, 128))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 8)
			{
				if (func_39(Global_40.f_8863.f_154, 256))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 9)
			{
				if (func_39(Global_40.f_8863.f_154, 512))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 10)
			{
				if (func_39(Global_40.f_8863.f_154, 1024))
				{
					return 1;
				}
			}
			break;
		case -321841939:
			if (uParam0->f_4 == 0)
			{
				if (func_39(Global_40.f_8863.f_148, 2))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (func_39(Global_40.f_8863.f_148, 4))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				if (func_39(Global_40.f_8863.f_148, 8))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 3)
			{
				if (func_39(Global_40.f_8863.f_148, 16))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 4)
			{
				if (func_39(Global_40.f_8863.f_148, 32))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 5)
			{
				if (func_39(Global_40.f_8863.f_148, 64))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 6)
			{
				if (func_39(Global_40.f_8863.f_148, 128))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 7)
			{
				if (func_39(Global_40.f_8863.f_148, 256))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 8)
			{
				if (func_39(Global_40.f_8863.f_148, 512))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 9)
			{
				if (func_39(Global_40.f_8863.f_148, 1024))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 10)
			{
				if (func_39(Global_40.f_8863.f_148, 2048))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 11)
			{
				if (func_39(Global_40.f_8863.f_148, 4096))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 12)
			{
				if (func_39(Global_40.f_8863.f_148, 8192))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 13)
			{
				if (func_39(Global_40.f_8863.f_148, 16384))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 14)
			{
				if (func_39(Global_40.f_8863.f_148, 32768))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 15)
			{
				if (func_39(Global_40.f_8863.f_148, 65536))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 16)
			{
				if (func_39(Global_40.f_8863.f_148, 131072))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 17)
			{
				if (func_39(Global_40.f_8863.f_148, 262144))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 18)
			{
				if (func_39(Global_40.f_8863.f_148, 524288))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 19)
			{
				if (func_39(Global_40.f_8863.f_148, 1048576))
				{
					return 1;
				}
			}
			break;
		case 870958936:
			if (uParam0->f_4 == 0)
			{
				if (func_39(Global_40.f_8863.f_149, 1))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (func_39(Global_40.f_8863.f_149, 2))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				if (func_39(Global_40.f_8863.f_149, 4))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 3)
			{
				if (func_39(Global_40.f_8863.f_149, 8))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 4)
			{
				if (func_39(Global_40.f_8863.f_149, 16))
				{
					return 1;
				}
			}
			break;
		case 513110082:
			switch (uParam0->f_4)
			{
				case 0:
					if (func_39(Global_40.f_8863.f_150, 1))
					{
						return 1;
					}
					break;
				case 1:
					if (func_39(Global_40.f_8863.f_150, 2))
					{
						return 1;
					}
					break;
				case 2:
					if (((((func_39(Global_40.f_8863.f_150, 4) && func_39(Global_40.f_8863.f_150, 8)) && func_39(Global_40.f_8863.f_150, 16)) && func_39(Global_40.f_8863.f_150, 32)) && func_39(Global_40.f_8863.f_150, 64)) && func_39(Global_40.f_8863.f_150, 128))
					{
						return 1;
					}
					break;
				default:
					break;
			}
			break;
		case -890175011:
			if (uParam0->f_4 == 0)
			{
				if (func_39(Global_40.f_8863.f_154, 2048))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (func_39(Global_40.f_8863.f_154, 4096))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				if (func_39(Global_40.f_8863.f_154, 8192))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 3)
			{
				if (func_39(Global_40.f_8863.f_154, 16384))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 4)
			{
				if (func_39(Global_40.f_8863.f_154, 32768))
				{
					return 1;
				}
			}
			break;
		case 677950956:
			if (uParam0->f_4 == 0)
			{
				if (func_39(Global_40.f_8863.f_154, 65536))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (func_39(Global_40.f_8863.f_154, 131072))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				if (func_39(Global_40.f_8863.f_154, 262144))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 3)
			{
				if (func_39(Global_40.f_8863.f_154, 524288))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 4)
			{
				if (func_39(Global_40.f_8863.f_154, 1048576))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 5)
			{
				if (func_39(Global_40.f_8863.f_154, 2097152))
				{
					return 1;
				}
			}
			break;
		case -1272862985:
			if (uParam0->f_4 == 0)
			{
				if (func_39(Global_40.f_8863.f_152, 262144))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				if (func_39(Global_40.f_8863.f_152, 524288))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				if (func_39(Global_40.f_8863.f_152, 1048576))
				{
					return 1;
				}
			}
			else if (uParam0->f_4 == 3)
			{
				if (func_39(Global_40.f_8863.f_152, 2097152))
				{
					return 1;
				}
			}
			break;
		default:
			break;
	}
	return 0;
}

void func_21(var uParam0)
{
	uParam0->f_6.f_2 = { func_92(uParam0, uParam0->f_4) };
	uParam0->f_6.f_1 = 5f;
	uParam0->f_6 = 10f;
	switch (*uParam0)
	{
		case 1535254161:
			uParam0->f_6 = 20f;
			uParam0->f_6.f_1 = 10f;
			func_105(uParam0);
			break;
		case -1958832660:
		case -1109016944:
			uParam0->f_6 = 48f;
			uParam0->f_6.f_1 = 24f;
			break;
		case -1960242214:
		case -1300082860:
		case -161804536:
		case 657666087:
		case 1673499939:
		case 1734766691:
			uParam0->f_6 = 30f;
			uParam0->f_6.f_1 = 15f;
			break;
		case -1891628345:
		case -986176781:
		case -849582265:
		case 247563739:
		case 1982045664:
		case 1986618633:
			uParam0->f_6 = 20f;
			uParam0->f_6.f_1 = 10f;
			break;
		case -1646022773:
		case 1284679164:
		case 2000209669:
			uParam0->f_6 = 6f;
			uParam0->f_6.f_1 = 3f;
			break;
		case -1614148516:
			uParam0->f_6 = 3f;
			uParam0->f_6.f_1 = 1.5f;
			break;
		case -1243267511:
			uParam0->f_6 = 10f;
			func_105(uParam0);
			break;
		case -607940493:
			uParam0->f_6 = 30f;
			func_105(uParam0);
			break;
		case -321841939:
			uParam0->f_6 = 10f;
			break;
		case -1761578407:
		case 404434344:
			uParam0->f_6 = 10f;
			func_105(uParam0);
			break;
		case -890175011:
			uParam0->f_6 = 3f;
			uParam0->f_6.f_1 = 1.5f;
			if (((uParam0->f_4 == 0 || uParam0->f_4 == 1) || uParam0->f_4 == 3) || uParam0->f_4 == 4)
			{
				func_105(uParam0);
			}
			break;
		case 677950956:
			uParam0->f_6 = 6f;
			uParam0->f_6.f_1 = 3f;
			if (uParam0->f_4 == 1 || uParam0->f_4 == 5)
			{
				func_105(uParam0);
			}
			break;
		default:
			uParam0->f_6 = 10f;
			uParam0->f_6.f_1 = 5f;
			break;
	}
}

int func_22(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_23(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_24(var uParam0)
{
	return func_106(*uParam0, 1);
}

void func_25(var uParam0)
{
	func_107(uParam0, 0f);
}

int func_26(var uParam0)
{
	if (!func_24(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000f));
	}
	if (func_108(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_109() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

int func_27(var uParam0, bool bParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!func_33(uParam0->f_6.f_8))
		{
			return 1;
		}
		if (func_110(uParam0))
		{
			return 1;
		}
		if (!func_111(uParam0, 0))
		{
			return 1;
		}
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) || PED::IS_PED_USING_ANY_SCENARIO(Global_35))
		{
			return 1;
		}
		if ((((*uParam0 == -1761578407 || *uParam0 == 404434344) || *uParam0 == -1243267511) || *uParam0 == -607940493) || *uParam0 == 1535254161)
		{
			if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_6.f_9))
			{
				return 0;
			}
			if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_6.f_9, true, 0) || !func_112(Global_35, uParam0->f_6.f_2, 0))
			{
				return 1;
			}
		}
		else if (func_14(Global_35, uParam0->f_6.f_2, 1) > (uParam0->f_6.f_1 + 0.5f) || !func_112(Global_35, uParam0->f_6.f_2, 0))
		{
			return 1;
		}
	}
	else
	{
		if (func_110(uParam0))
		{
			return 0;
		}
		if (!func_111(uParam0, 0))
		{
			return 0;
		}
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) || PED::IS_PED_USING_ANY_SCENARIO(Global_35))
		{
			return 0;
		}
		if ((((*uParam0 == -1761578407 || *uParam0 == 404434344) || *uParam0 == -1243267511) || *uParam0 == -607940493) || *uParam0 == 1535254161)
		{
			if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_6.f_9))
			{
				return 0;
			}
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_6.f_9, true, 0) && func_112(Global_35, uParam0->f_6.f_2, 0))
			{
				return 1;
			}
		}
		else if (func_14(Global_35, uParam0->f_6.f_2, 1) <= uParam0->f_6.f_1 && func_112(Global_35, uParam0->f_6.f_2, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_28(var uParam0)
{
	if (!func_33(uParam0->f_6.f_8))
	{
		if (*uParam0 == 404434344)
		{
			if (func_53(*uParam0))
			{
				uParam0->f_6.f_8 = func_113("DISCO_FOCUS", -719620017, Global_35, 0, 0, 0, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
				func_34(uParam0->f_6.f_8, 0, 1);
			}
			else
			{
				uParam0->f_6.f_8 = func_113("DISCO_EXAMINE", -719620017, Global_35, 0, 0, 0, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
			}
		}
		else if (*uParam0 == -1761578407)
		{
			if (uParam0->f_4 == 2)
			{
				if (func_39(Global_40.f_8863.f_154, 4))
				{
					uParam0->f_6.f_8 = func_113("DISCO_FOCUS", -719620017, Global_35, 0, 0, 0, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
					func_34(uParam0->f_6.f_8, 0, 1);
				}
				else
				{
					uParam0->f_6.f_8 = func_113("DISCO_EXAMINE", -719620017, Global_35, 0, 0, 0, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
				}
			}
			else if (uParam0->f_4 == 3)
			{
				if (func_39(Global_40.f_8863.f_154, 8))
				{
					uParam0->f_6.f_8 = func_113("DISCO_FOCUS", -719620017, Global_35, 0, 0, 0, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
					func_34(uParam0->f_6.f_8, 0, 1);
				}
				else
				{
					uParam0->f_6.f_8 = func_113("DISCO_EXAMINE", -719620017, Global_35, 0, 0, 0, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
				}
			}
			else if (func_20(uParam0))
			{
				uParam0->f_6.f_8 = func_113("DISCO_FOCUS", -719620017, Global_35, 0, 0, 0, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
				func_34(uParam0->f_6.f_8, 0, 1);
			}
			else
			{
				uParam0->f_6.f_8 = func_113("DISCO_EXAMINE", -719620017, Global_35, 0, 0, 0, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
			}
		}
		else if (*uParam0 == 1861313914)
		{
			if (func_11(*uParam0, 2) || func_11(*uParam0, 16))
			{
				uParam0->f_6.f_8 = func_113("DISCO_FOCUS", -719620017, Global_35, 0, 0, 0, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
				func_34(uParam0->f_6.f_8, 0, 1);
			}
			else
			{
				uParam0->f_6.f_8 = func_113("DISCO_EXAMINE", -719620017, Global_35, 2, 0, 0, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, 1753096650, 0, 0);
			}
		}
		else if (*uParam0 == -415839138)
		{
			if (func_11(*uParam0, 2) || func_11(*uParam0, 16))
			{
				uParam0->f_6.f_8 = func_113("DISCO_FOCUS", -719620017, Global_35, 0, 0, 0, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
				func_34(uParam0->f_6.f_8, 0, 1);
			}
			else
			{
				uParam0->f_6.f_8 = func_113("DISCO_EXAMINE", -719620017, Global_35, 2, 0, 0, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, 1753096650, 0, 0);
			}
		}
		else if (func_11(*uParam0, 2) || func_11(*uParam0, 16))
		{
			uParam0->f_6.f_8 = func_113("DISCO_FOCUS", -719620017, Global_35, 0, 0, 0, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
			func_34(uParam0->f_6.f_8, 0, 1);
		}
		else
		{
			uParam0->f_6.f_8 = func_113("DISCO_EXAMINE", -719620017, Global_35, 0, 0, 0, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, 1753096650, 0, 0);
		}
		func_114(uParam0->f_6.f_8, 13, 1, 1);
		func_115(uParam0->f_6.f_8);
	}
}

char* func_29(var uParam0)
{
	if (*uParam0 == 404434344)
	{
		if (func_53(*uParam0))
		{
			return "DISCO_GRAVE_AM";
		}
		else
		{
			return "DISCO_GRAVE";
		}
	}
	else if (*uParam0 == -1761578407)
	{
		if (func_20(uParam0))
		{
			if (uParam0->f_4 == 0)
			{
				return "DISCO_GRAVE_AM";
			}
			else if (uParam0->f_4 == 1)
			{
				return "DISCO_GRAVE_JC";
			}
			else if (uParam0->f_4 == 2)
			{
				return "DISCO_GRAVE_HM";
			}
			else if (uParam0->f_4 == 3)
			{
				return "DISCO_GRAVE_LS";
			}
			else if (uParam0->f_4 == 4)
			{
				return "DISCO_GRAVE_SM";
			}
			else if (uParam0->f_4 == 5)
			{
				return "DISCO_GRAVE_DC";
			}
			else if (uParam0->f_4 == 6)
			{
				return "DISCO_GRAVE_KD";
			}
			else if (uParam0->f_4 == 7)
			{
				return "DISCO_GRAVE_SG";
			}
			else if (uParam0->f_4 == 8)
			{
				return "DISCO_GRAVE_EF";
			}
		}
		else
		{
			return "DISCO_GRAVE";
		}
	}
	else if (*uParam0 == -890175011)
	{
		return "DISCO_VAMP";
	}
	else if (*uParam0 == 677950956)
	{
		return "DISCO_VAMP";
	}
	else if (*uParam0 == -321841939)
	{
		return "DISCO_DREAM";
	}
	else if (func_11(*uParam0, 2) || func_11(*uParam0, 16))
	{
		if (*uParam0 == -1958832660)
		{
			return "DISCO_AC";
		}
		else if (*uParam0 == -1300082860)
		{
			return "DISCO_AW";
		}
		else if (*uParam0 == 247563739)
		{
			return "DISCO_ATP";
		}
		else if (*uParam0 == -1287911066)
		{
			return "DISCO_BR";
		}
		else if (*uParam0 == 1861313914)
		{
			return "DISCO_BS";
		}
		else if (*uParam0 == 1734766691)
		{
			return "DISCO_FIRE";
		}
		else if (*uParam0 == 657666087)
		{
			return "DISCO_CW";
		}
		else if (*uParam0 == 1535254161)
		{
			return "DISCO_CWB";
		}
		else if (*uParam0 == 58958195)
		{
			return "DISCO_CA";
		}
		else if (*uParam0 == -1109016944)
		{
			return "DISCO_DT";
		}
		else if (*uParam0 == -780455182)
		{
			return "DISCO_DG";
		}
		else if (*uParam0 == -1636964661)
		{
			return "DISCO_DL";
		}
		else if (*uParam0 == -2009137002)
		{
			return "DISCO_FIC";
		}
		else if (*uParam0 == -1243267511)
		{
			return "DISCO_FT";
		}
		else if (*uParam0 == -1053108445)
		{
			return "DISCO_FLY";
		}
		else if (*uParam0 == -1646022773)
		{
			return "DISCO_FO";
		}
		else if (*uParam0 == 1284679164)
		{
			return "DISCO_FR";
		}
		else if (*uParam0 == 2134589549)
		{
			return "DISCO_FS";
		}
		else if (*uParam0 == -1787770845)
		{
			return "DISCO_GM";
		}
		else if (*uParam0 == -1887999095)
		{
			return "DISCO_GS";
		}
		else if (*uParam0 == 1519228573)
		{
			return "DISCO_HS";
		}
		else if (*uParam0 == 1982045664)
		{
			return "DISCO_HW";
		}
		else if (*uParam0 == 308500632)
		{
			return "DISCO_HT";
		}
		else if (*uParam0 == -849582265)
		{
			return "DISCO_IB";
		}
		else if (*uParam0 == 429544447)
		{
			return "DISCO_JM";
		}
		else if (*uParam0 == -148407339)
		{
			return "DISCO_MA";
		}
		else if (*uParam0 == -415839138)
		{
			return "DISCO_MONK";
		}
		else if (*uParam0 == 1673499939)
		{
			return "DISCO_MH";
		}
		else if (*uParam0 == -709811179)
		{
			return "DISCO_MT";
		}
		else if (*uParam0 == -979575591)
		{
			return "DISCO_OB";
		}
		else if (*uParam0 == -1609238411)
		{
			return "DISCO_OWS";
		}
		else if (*uParam0 == 921081956)
		{
			return "DISCO_ORC";
		}
		else if (*uParam0 == -739986731)
		{
			return "DISCO_PR";
		}
		else if (*uParam0 == 1034793488)
		{
			return "DISCO_PIC";
		}
		else if (*uParam0 == -1614148516)
		{
			return "DISCO_PH";
		}
		else if (*uParam0 == -1761189332)
		{
			return "DISCO_RR";
		}
		else if (*uParam0 == -607940493)
		{
			return "DISCO_SM";
		}
		else if (*uParam0 == 1986618633)
		{
			return "DISCO_SW";
		}
		else if (*uParam0 == -161804536)
		{
			return "DISCO_ST";
		}
		else if (*uParam0 == 2000209669)
		{
			return "DISCO_SS";
		}
		else if (*uParam0 == -232974724)
		{
			return "DISCO_TP";
		}
		else if (*uParam0 == -1272862985)
		{
			return "DISCO_TT";
		}
		else if (*uParam0 == -1891628345)
		{
			return "DISCO_UTE";
		}
		else if (*uParam0 == -1960242214)
		{
			return "DISCO_UCB";
		}
		else if (*uParam0 == -1505275983)
		{
			return "DISCO_WT";
		}
		else if (*uParam0 == -986176781)
		{
			return "DISCO_WB";
		}
		else if (*uParam0 == 373034311)
		{
			return "DISCO_AA";
		}
	}
	else if (((*uParam0 == -986176781 || *uParam0 == 1986618633) || *uParam0 == -1787770845) || *uParam0 == -148407339)
	{
		return "DISCO_BONES";
	}
	else if ((((((*uParam0 == -1958832660 || *uParam0 == 921081956) || *uParam0 == 247563739) || *uParam0 == -232974724) || *uParam0 == -1300082860) || *uParam0 == -979575591) || *uParam0 == 1673499939)
	{
		return "DISCO_STRUCT";
	}
	else if (*uParam0 == -780455182)
	{
		return "DISCO_GRAVE";
	}
	else if (*uParam0 == -2009137002)
	{
		return "DISCO_SCULPT";
	}
	else if ((*uParam0 == -1243267511 || *uParam0 == -1272862985) || *uParam0 == -1505275983)
	{
		return "DISCO_TREE";
	}
	else if (*uParam0 == 1034793488 || *uParam0 == 373034311)
	{
		return "DISCO_PAINT";
	}
	else if ((((((((*uParam0 == -1646022773 || *uParam0 == 1284679164) || *uParam0 == 2134589549) || *uParam0 == -1887999095) || *uParam0 == 1519228573) || *uParam0 == -1287911066) || *uParam0 == -1636964661) || *uParam0 == 429544447) || *uParam0 == -739986731)
	{
		return "DISCO_CORPSE";
	}
	else if ((((((((((*uParam0 == -1109016944 || *uParam0 == 1535254161) || *uParam0 == -849582265) || *uParam0 == -161804536) || *uParam0 == -1891628345) || *uParam0 == -1960242214) || *uParam0 == -607940493) || *uParam0 == 308500632) || *uParam0 == 1734766691) || *uParam0 == -415839138) || *uParam0 == 1982045664)
	{
		return "DISCO_SITE";
	}
	else if (*uParam0 == -1614148516)
	{
		return "DISCO_DEVICE";
	}
	else if ((*uParam0 == -1761189332 || *uParam0 == -1609238411) || *uParam0 == -709811179)
	{
		return "DISCO_ROCK";
	}
	else if ((*uParam0 == 58958195 || *uParam0 == -1053108445) || *uParam0 == 657666087)
	{
		return "DISCO_WRECK";
	}
	else if (*uParam0 == 1861313914)
	{
		if (func_16(59))
		{
			return "DISCO_CORPSE";
		}
		else
		{
			return "DISCO_SITE";
		}
	}
	else if (*uParam0 == 2000209669)
	{
		if (uParam0->f_4 == 11)
		{
			return "DISCO_PAINT";
		}
		else
		{
			return "DISCO_SCULPT";
		}
	}
	else
	{
		return "DISCO_UNKNOWN";
	}
	return "";
}

void func_30(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_33(iParam1))
	{
		return;
	}
	iVar0 = func_116(iParam1);
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		if ((!*uParam0 == -890175011 && !*uParam0 == 677950956) && !*uParam0 == -1308658310)
		{
			if (bParam3)
			{
				func_40(&iVar1, 12);
			}
			else
			{
				func_40(&iVar1, 8);
			}
		}
		if ((*uParam0 == 1861313914 || *uParam0 == -1308658310) || *uParam0 == -415839138)
		{
			if (func_11(*uParam0, 16))
			{
				iVar2 = 0;
			}
			else
			{
				iVar2 = 2;
			}
		}
		else
		{
			iVar2 = 0;
		}
		HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, 1f, iVar2, 1, 1710353528, sParam2, iVar1);
	}
}

int func_31(var uParam0)
{
	if (func_117(uParam0->f_6.f_8, 1))
	{
		return 1;
	}
	return 0;
}

void func_32(int iParam0, int iParam1)
{
	if (!func_98(iParam0))
	{
		return;
	}
	Global_40.f_8863[func_99(iParam0, 1)] = (Global_40.f_8863[func_99(iParam0, 1)] || iParam1);
}

bool func_33(int iParam0)
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

void func_34(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam2 && !func_33(iParam0))
	{
		return;
	}
	iVar0 = func_116(iParam0);
	func_118(iVar0, iParam1);
}

void func_35(var uParam0)
{
	if (func_102() != -1)
	{
		return;
	}
	if (*uParam0 == -321841939)
	{
		if (func_119(uParam0->f_4) != 0)
		{
			if (!MAP::_0x3F81EA4275D39D6F(uParam0->f_4))
			{
				MAP::_0xD8C7162AB2E2AF45(func_119(uParam0->f_4));
			}
			func_32(*uParam0, 8);
		}
	}
	else
	{
		if (func_120(*uParam0, uParam0->f_4) != 0)
		{
			if (!MAP::_0x3F81EA4275D39D6F(func_120(*uParam0, uParam0->f_4)))
			{
				MAP::_0xD8C7162AB2E2AF45(func_120(*uParam0, uParam0->f_4));
			}
			func_32(*uParam0, 8);
		}
		func_69(uParam0);
	}
}

void func_36(var uParam0, bool bParam1)
{
	int iVar0;

	if (*uParam0 == -321841939)
	{
		if (bParam1)
		{
			if (func_85() < (20 - 1))
			{
				return;
			}
		}
		else if (!func_52())
		{
			return;
		}
	}
	if (bParam1)
	{
		iVar0 = func_122(*uParam0, func_121(), uParam0->f_4);
	}
	else
	{
		iVar0 = func_123(*uParam0, uParam0->f_4);
	}
	if (iVar0 != 0)
	{
		if (bParam1)
		{
			func_124(iVar0, 0);
			if (*uParam0 == -890175011)
			{
				if (func_125() == (5 - 1))
				{
					if (func_121())
					{
						func_124(-533137209, 0);
						iVar0 = -533137209;
					}
					else
					{
						func_124(642612355, 0);
						iVar0 = 642612355;
					}
				}
			}
		}
		if (func_126())
		{
			Global_1357518 = iVar0;
			if (bParam1 == 1)
			{
				*Global_1357519 = { uParam0->f_6.f_2 };
			}
		}
	}
}

void func_37(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_127(&Global_0, 8);
	}
	if (!func_128() || func_102() != -1)
	{
		return;
	}
	func_127(&Global_0, 1);
}

float func_38(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_33(iParam0))
	{
		return 0f;
	}
	iVar0 = func_116(iParam0);
	if (HUD::_0xCD072523791DDC1B(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return HUD::_UIPROMPT_GET_MASH_MODE_PROGRESS(((*Global_1945938)[iVar0 /*18*/])->f_3);
	}
	return HUD::_0x81801291806DBC50(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

bool func_39(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_40(var uParam0, int iParam1)
{
	func_129(uParam0, iParam1);
}

void func_41(var uParam0)
{
	uParam0->f_6.f_10.f_21 = 4;
	uParam0->f_6.f_10.f_17 = 4;
	uParam0->f_6.f_10.f_18 = 1;
	uParam0->f_6.f_10.f_23 = 2;
	uParam0->f_6.f_10.f_24 = 2;
	uParam0->f_6.f_10 = { func_92(uParam0, uParam0->f_4) };
}

void func_42(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		_NAMESPACE29::_0x66F9EB44342BB4C5(Global_35, &(uParam0->f_6.f_10));
	}
}

void func_43(var uParam0, int iParam1)
{
	func_130(uParam0, iParam1);
}

void func_44(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		_NAMESPACE29::_0x0EABF182FBB63D72(Global_35, 6, 0);
	}
}

int func_45(int iParam0)
{
	switch (iParam0)
	{
		case -1891628345:
		case -1859413640:
		case -1761578407:
		case -849582265:
		case -780455182:
		case -739986731:
		case -641229542:
		case -499529359:
		case -657632:
		case 230001763:
		case 404434344:
		case 429544447:
		case 683269210:
		case 921081956:
		case 949011950:
		case 1861313914:
		case 2072029413:
			return 1;
	}
	return 0;
}

int func_46(int iParam0)
{
	struct<7> Var0;
	vector3 vVar7;

	if (VOLUME::_0x92A78D0BEDB332A3(*iParam0))
	{
		func_131(*iParam0, &Var0);
		if (FIRE::_GET_ENTITY_INSIDE_EXPLOSION_AREA(-1, Var0, Var0.f_3, Var0.f_6) == func_132(Global_35))
		{
			return 1;
		}
		else if (MISC::IS_BULLET_IN_ANGLED_AREA(Var0, Var0.f_3, Var0.f_6, true))
		{
			vVar7 = { 0f, 0f, 0f };
			if (WEAPON::GET_PED_LAST_WEAPON_IMPACT_COORD(Global_35, &vVar7))
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(vVar7, Var0, Var0.f_3, Var0.f_6, false, true))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_47(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_102() != -1)
	{
		return;
	}
	if ((Global_36615 && func_133(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_134(iParam0);
	iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_135(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, iParam7);
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
			func_136(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_135(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_48(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_137(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return 1;
	}
	return 0;
}

int func_49(var uParam0)
{
	switch (*uParam0)
	{
		case 404434344:
			if (!func_138() && !func_139())
			{
				if (!func_138())
				{
				}
				if (!func_139())
				{
				}
				return 0;
			}
			else if (func_140(77))
			{
				return 0;
			}
			else if (func_141() != 0)
			{
				return 0;
			}
			break;
		case -1761578407:
			if (uParam0->f_4 == 0)
			{
				if (!func_138() && !func_139())
				{
					if (!func_138())
					{
					}
					if (!func_139())
					{
					}
					return 0;
				}
			}
			else if (uParam0->f_4 == 2 || uParam0->f_4 == 3)
			{
				if (!func_54(8924991) && !func_54(665676602))
				{
					if (!func_54(8924991))
					{
					}
					if (!func_54(665676602))
					{
					}
					return 0;
				}
			}
			else if (uParam0->f_4 == 4)
			{
				if (!func_54(1488286867))
				{
					return 0;
				}
			}
			else if (uParam0->f_4 == 6)
			{
				if (!func_54(651395116))
				{
					return 0;
				}
			}
			else if (uParam0->f_4 == 7)
			{
				if (!func_54(-1241340344))
				{
					return 0;
				}
			}
			else if (uParam0->f_4 == 8)
			{
				if (!func_54(409602249))
				{
					return 0;
				}
			}
			else if (uParam0->f_4 == 5)
			{
			}
			else if (uParam0->f_4 == 1)
			{
			}
			break;
		case -2108030724:
			if (!func_16(26))
			{
				return 0;
			}
			break;
		case -1887999095:
			if (!func_16(21))
			{
				return 0;
			}
			break;
		case -1240932004:
			if (!func_16(77))
			{
				return 0;
			}
			break;
		case 118535038:
			if (!func_16(12))
			{
				return 0;
			}
			break;
		case -2008558277:
			if (func_142(19))
			{
				return 0;
			}
			break;
		case 221420861:
			if (func_142(29))
			{
				return 0;
			}
			break;
		case -1308658310:
			if (func_142(11))
			{
				return 0;
			}
			break;
		case 308500632:
			if (!&Global_40.f_11623[20 /*8*/] > 0)
			{
				return 0;
			}
			break;
		case 1861313914:
			if (func_140(19) || func_142(4))
			{
				return 0;
			}
			break;
		case 1982045664:
			if (func_140(66))
			{
				return 0;
			}
			break;
		case 677950956:
			if (!func_15())
			{
				return 0;
			}
			break;
	}
	return 1;
}

void func_50(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 || iParam0);
}

void func_51(int iParam0, int iParam1)
{
	if (!func_98(iParam0))
	{
		return;
	}
	Global_40.f_8863[func_99(iParam0, 1)] = (&Global_40.f_8863[func_99(iParam0, 1)] - (Global_40.f_8863[func_99(iParam0, 1)] && iParam1));
}

int func_52()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= (20 - 1))
	{
		iVar1 = func_143(iVar0);
		if (!func_39(Global_40.f_8863.f_148, iVar1))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_53(int iParam0)
{
	return func_11(iParam0, 2);
}

bool func_54(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_144(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return MISC::IS_BIT_SET(&(Global_40.f_283[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_1058888->f_40567[iVar1]), iVar2);
}

bool func_55(int iParam0)
{
	var uVar0;

	return func_145(iParam0, &uVar0);
}

void func_56(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_146(1497516462);
			func_147(2016141805);
			func_147(1010885152);
			func_147(-502324015);
			break;
		case 2016141805:
			func_147(1497516462);
			func_146(2016141805);
			func_147(1010885152);
			func_147(-502324015);
			break;
		case 1010885152:
			func_147(1497516462);
			func_147(2016141805);
			func_146(1010885152);
			func_147(-502324015);
			break;
		case -502324015:
			func_147(1497516462);
			func_147(2016141805);
			func_147(1010885152);
			func_146(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_147(-538889627);
			func_147(-538880323);
			func_147(-1056767524);
			func_146(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_148();
			func_146(iParam0);
			break;
		case -639037538:
		case -618620429:
		case -491981251:
		case 168171957:
		case 227918160:
		case 588987611:
		case 704802028:
		case 1193080109:
		case 1649996811:
		case 2008888900:
			func_149();
			func_146(iParam0);
			break;
		case 2019386373:
			func_147(-664252410);
			func_147(2109952320);
			func_146(2019386373);
			break;
		case -664252410:
			func_147(2019386373);
			func_147(2109952320);
			func_146(-664252410);
			break;
		case 2109952320:
			func_147(2019386373);
			func_147(-664252410);
			func_146(2109952320);
			break;
		case -1674179981:
			func_147(-1835851517);
			func_147(-1838352012);
			func_146(-1674179981);
			break;
		case -1835851517:
			func_147(-1674179981);
			func_147(-1838352012);
			func_146(-1835851517);
			break;
		case -1838352012:
			func_147(-1674179981);
			func_147(-1835851517);
			func_146(-1838352012);
			break;
		case -1717960576:
			func_147(210001842);
			func_146(-1717960576);
			break;
		case 210001842:
			func_147(-1717960576);
			func_146(210001842);
			break;
		case -150493654:
			func_147(-1271608261);
			func_147(1846061697);
			func_147(-1145519186);
			func_146(-150493654);
			break;
		case -1271608261:
			func_147(-150493654);
			func_147(1846061697);
			func_147(-1145519186);
			func_146(-1271608261);
			break;
		case 1846061697:
			func_147(-150493654);
			func_147(-1271608261);
			func_147(-1145519186);
			func_146(1846061697);
			break;
		case -1145519186:
			func_147(-150493654);
			func_147(-1271608261);
			func_147(1846061697);
			func_146(-1145519186);
			break;
		case 1766284049:
			func_147(280705402);
			func_147(1926308480);
			func_146(1766284049);
			break;
		case 280705402:
			func_147(1766284049);
			func_147(1926308480);
			func_146(280705402);
			break;
		case 1926308480:
			func_147(1766284049);
			func_147(280705402);
			func_146(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_147(439465264);
				func_146(1609506757);
			}
			else
			{
				func_147(1609506757);
				func_147(439465264);
			}
			break;
		case 439465264:
			if (func_54(1609506757))
			{
				if (bParam1)
				{
					func_146(439465264);
				}
				else
				{
					func_147(439465264);
				}
			}
			break;
		case 1822001510:
			func_147(-1612662716);
			func_146(1822001510);
			break;
		case -1612662716:
			func_147(1822001510);
			func_146(-1612662716);
			break;
		case 1306158345:
			func_147(1952610440);
			func_147(-223469678);
			func_147(-404698347);
			func_147(1517904467);
			func_146(1306158345);
			break;
		case 1952610440:
			func_147(1306158345);
			func_147(-223469678);
			func_147(-404698347);
			func_147(1517904467);
			func_146(1952610440);
			break;
		case -223469678:
			func_147(1306158345);
			func_147(1952610440);
			func_147(-404698347);
			func_147(1517904467);
			func_146(-223469678);
			break;
		case -404698347:
			func_147(1306158345);
			func_147(1952610440);
			func_147(-223469678);
			func_147(1517904467);
			func_146(-404698347);
			break;
		case 1517904467:
			func_147(1306158345);
			func_147(1952610440);
			func_147(-223469678);
			func_147(-404698347);
			func_146(1517904467);
			break;
		case 1376646519:
			func_147(931649776);
			func_147(-434590080);
			func_147(1743048395);
			func_147(449774763);
			func_146(1376646519);
			break;
		case 931649776:
			func_147(1376646519);
			func_147(-434590080);
			func_147(1743048395);
			func_147(449774763);
			func_146(931649776);
			break;
		case -434590080:
			func_147(1376646519);
			func_147(931649776);
			func_147(1743048395);
			func_147(449774763);
			func_146(-434590080);
			break;
		case 1743048395:
			func_147(1376646519);
			func_147(931649776);
			func_147(-434590080);
			func_147(449774763);
			func_146(1743048395);
			break;
		case 449774763:
			func_147(1376646519);
			func_147(931649776);
			func_147(-434590080);
			func_147(1743048395);
			func_146(449774763);
			break;
		case -1414537028:
			func_147(38162571);
			func_147(1350391819);
			func_147(54073871);
			func_146(-1414537028);
			break;
		case 38162571:
			func_147(-1414537028);
			func_147(1350391819);
			func_147(54073871);
			func_146(38162571);
			break;
		case 1350391819:
			func_147(-1414537028);
			func_147(38162571);
			func_147(54073871);
			func_146(1350391819);
			break;
		case 54073871:
			func_147(-1414537028);
			func_147(38162571);
			func_147(1350391819);
			func_146(54073871);
			break;
		case 198200492:
			func_146(198200492);
			func_147(-1124061431);
			func_147(52706132);
			func_147(-259123672);
			break;
		case -1124061431:
			func_147(198200492);
			func_146(-1124061431);
			func_147(52706132);
			func_147(-259123672);
			break;
		case 52706132:
			func_147(198200492);
			func_147(-1124061431);
			func_146(52706132);
			func_147(-259123672);
			break;
		case -259123672:
			func_147(198200492);
			func_147(-1124061431);
			func_147(52706132);
			func_146(-259123672);
			break;
		case -919512195:
			func_146(-919512195);
			func_147(-1925798111);
			func_147(420709909);
			func_147(1703426636);
			break;
		case -1925798111:
			func_146(-1925798111);
			func_147(-919512195);
			func_147(420709909);
			func_147(1703426636);
			break;
		case 420709909:
			func_146(420709909);
			func_147(-919512195);
			func_147(-1925798111);
			func_147(1703426636);
			break;
		case 1703426636:
			func_146(1703426636);
			func_147(-919512195);
			func_147(-1925798111);
			func_147(420709909);
			break;
		case -1223121209:
			func_146(-1223121209);
			func_147(630808005);
			break;
		case 630808005:
			func_146(630808005);
			func_147(-1223121209);
			break;
		case 1453909576:
			func_146(1453909576);
			func_147(1643531967);
			break;
		case 1643531967:
			func_146(1643531967);
			func_147(1453909576);
			break;
		case 0:
			func_146(0);
			func_147(473295046);
			func_147(-1738165526);
			break;
		case 473295046:
			func_146(473295046);
			func_147(0);
			func_147(-1738165526);
			break;
		case -1738165526:
			func_146(-1738165526);
			func_147(0);
			func_147(473295046);
			break;
		case 932909855:
			func_146(932909855);
			func_147(2051822093);
			break;
		case 2051822093:
			func_146(2051822093);
			func_147(932909855);
			break;
		case 405586984:
			func_146(405586984);
			func_147(1509509592);
			func_147(-959357075);
			func_147(-1311865656);
			break;
		case 1509509592:
			func_146(1509509592);
			func_147(405586984);
			func_147(-959357075);
			func_147(-1311865656);
			break;
		case -959357075:
			func_146(-959357075);
			func_147(1509509592);
			func_147(405586984);
			func_147(-1311865656);
			break;
		case -1311865656:
			func_146(-1311865656);
			func_147(1509509592);
			func_147(-959357075);
			func_147(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_146(-524145696);
			}
			else
			{
				func_147(-524145696);
			}
			func_147(1626481264);
			func_147(282809459);
			break;
		case 282809459:
			func_146(282809459);
			func_147(1626481264);
			func_147(-524145696);
			break;
		case 1626481264:
			func_146(1626481264);
			func_147(-524145696);
			func_147(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_146(885203519);
			}
			else
			{
				func_147(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_146(-1080627546);
			}
			else
			{
				func_147(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_54(iParam0))
				{
					func_146(iParam0);
				}
			}
			else if (func_54(iParam0))
			{
				func_147(iParam0);
			}
			break;
	}
}

void func_57(int iParam0, int iParam1, bool bParam2)
{
	*iParam0 = iParam1;
	if (bParam2)
	{
		func_25(&(iParam0->f_1));
	}
}

int func_58(var uParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 <= 7)
	{
		if (func_150(iVar1))
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
		}
		if (!func_152(func_151(iVar1, bVar0), func_13(uParam0, iVar1), bParam1) || !func_152(func_151(iVar1, !bVar0), func_13(uParam0, iVar1), !bParam1))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

int func_59(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			if (!func_152(func_153(uParam0, 1), func_76(uParam0, 2), 0) || !func_152(func_153(uParam0, 0), func_76(uParam0, 2), 0))
			{
				return 0;
			}
			break;
		case 1:
			if (!func_152(func_153(uParam0, 1), func_76(uParam0, 2), 1) || !func_152(func_153(uParam0, 0), func_76(uParam0, 2), 1))
			{
				return 0;
			}
			break;
		default:
			break;
	}
	return 1;
}

void func_60(var uParam0)
{
	func_154(uParam0);
	func_155(uParam0);
	if (((((*uParam0 == -1761578407 || *uParam0 == 404434344) || *uParam0 == -321841939) || *uParam0 == -890175011) || *uParam0 == 677950956) || *uParam0 == -1272862985)
	{
		func_21(uParam0);
	}
}

void func_61(var uParam0)
{
	func_156(&Local_40);
	func_157(&uLocal_28);
	if ((*uParam0 == -1761578407 || *uParam0 == 404434344) || *uParam0 == 2000209669)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(func_158(uParam0, 0, 0, 0)))
		{
			if (STREAMING::DOES_ANIM_DICT_EXIST(func_158(uParam0, 0, 0, 0)))
			{
				STREAMING::REQUEST_ANIM_DICT(func_158(uParam0, 0, 0, 0));
			}
		}
	}
	if (*uParam0 == -1308658310 || *uParam0 == 221420861)
	{
		STREAMING::REQUEST_PTFX_ASSET();
	}
	if (*uParam0 == 404434344)
	{
		PED::_0xF008E0BA1FE1D644(1);
	}
}

int func_62(var uParam0)
{
	if (!func_159(&Local_40) || !func_160(&uLocal_28))
	{
		return 0;
	}
	if ((*uParam0 == -1761578407 || *uParam0 == 404434344) || *uParam0 == 2000209669)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(func_158(uParam0, 0, 0, 0)))
		{
			if (STREAMING::DOES_ANIM_DICT_EXIST(func_158(uParam0, 0, 0, 0)))
			{
				if (!STREAMING::HAS_ANIM_DICT_LOADED(func_158(uParam0, 0, 0, 0)))
				{
					return 0;
				}
			}
		}
	}
	if (*uParam0 == 2000209669)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(func_161(uParam0)))
		{
			if (!AUDIO::_0xD9130842D7226045(func_161(uParam0), 0))
			{
				return 0;
			}
		}
	}
	else if (*uParam0 == -1614148516)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(func_161(uParam0)))
		{
			if (!AUDIO::LOAD_STREAM(func_162(uParam0, 0), func_161(uParam0)))
			{
				return 0;
			}
		}
	}
	if (*uParam0 == -1308658310 || *uParam0 == 221420861)
	{
		if (!STREAMING::HAS_PTFX_ASSET_LOADED())
		{
			return 0;
		}
	}
	if (*uParam0 == 404434344)
	{
		if (!PED::_0x5C16855277819BBF() == 1)
		{
			return 0;
		}
	}
	return 1;
}

bool func_63()
{
	return func_163(&Global_1935630, 4096);
}

int func_64(var uParam0)
{
	if (*uParam0 == -1761578407 || *uParam0 == 404434344)
	{
		if (*uParam0 == 404434344)
		{
			func_166(&Local_40, func_164(uParam0, 0), func_165(uParam0, 0), 0, 1, 1);
			if (ENTITY::DOES_ENTITY_EXIST(&(Local_40.f_1[0])))
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(&(Local_40.f_1[0]), -1538724068);
			}
		}
		else if (uParam0->f_4 == 6)
		{
			iLocal_64 = GRAPHICS::_0xFA50F79257745E74(func_76(uParam0, 0), 1f, 1, -1, 0);
		}
	}
	else if (*uParam0 == 1464664327)
	{
		if (!TASK::_0x841475AC96E794D1(iLocal_15))
		{
			iLocal_15 = func_169(func_167(uParam0, 0), func_101(uParam0, 0), func_168(uParam0, 0), 0, 0, 0);
		}
	}
	else if (*uParam0 == -161804536)
	{
		if (!func_39(Global_40.f_8863.f_152, 131072))
		{
			if (!func_171(&uLocal_28, func_76(uParam0, 1), func_170(uParam0, 1), 1))
			{
				return 0;
			}
			if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_28[1])))
			{
				ENTITY::FREEZE_ENTITY_POSITION(&(uLocal_28[1]), true);
			}
			if (!TASK::_0x841475AC96E794D1(iLocal_15))
			{
				iLocal_15 = func_169(func_167(uParam0, 0), func_101(uParam0, 0), func_168(uParam0, 0), 0, 0, 0);
				TASK::_0xEEE4829304F93EEE(iLocal_15, 0);
			}
		}
	}
	else if (*uParam0 == 2000209669)
	{
		if (!func_53(*uParam0))
		{
			if (!func_172(uParam0))
			{
				return 0;
			}
		}
	}
	else if (*uParam0 == 1347913620 || *uParam0 == -1308658310)
	{
		if (!func_171(&uLocal_28, func_76(uParam0, 0), func_170(uParam0, 0), 0))
		{
			return 0;
		}
	}
	else if (*uParam0 == -1891628345)
	{
		iLocal_64 = GRAPHICS::_0xFA50F79257745E74(func_76(uParam0, 0), 9f, 1, -1, 0);
	}
	else if (*uParam0 == -1614148516)
	{
		iLocal_21 = AUDIO::_0x0556C784FA056628(func_162(uParam0, 0), func_161(uParam0));
		AUDIO::PLAY_STREAM_FROM_POSITION(func_76(uParam0, 0), iLocal_21);
		func_56(1221801385, 1, 0);
	}
	else if (*uParam0 == -321841939)
	{
		PLAYER::_0xE5D3EB37ABC1EB03(PLAYER::GET_PLAYER_INDEX());
	}
	if (*uParam0 == 404434344 && func_139())
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(Local_40.f_1[0])))
		{
			if (!PED::_0xA0BC8FAED8CFEB3C(&(Local_40.f_1[0])))
			{
				return 0;
			}
			func_174(&(Local_40.f_1[0]), func_173(uParam0, 0));
		}
	}
	return 1;
}

char* func_65(var uParam0)
{
	switch (*uParam0)
	{
		case 221420861:
			return "AZ_Whispering_Trees_Discoverable";
		case 1535254161:
			return "AZ_scarlett_meadows_bulger_glade_battlefield_memories_01";
		case 1982045664:
			return "AZ_Disco_Hermit_Woman_Shack";
		default:
			break;
	}
	return "";
}

void func_66(var uParam0)
{
	if (func_39(uParam0->f_3, 1))
	{
		func_43(&(uParam0->f_3), 1);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(iLocal_14))
	{
		VOLUME::_0x43F867EF5C463A53(iLocal_14);
	}
	if (*uParam0 == 1464664327 || *uParam0 == 2000209669)
	{
		if (TASK::_0x841475AC96E794D1(iLocal_15))
		{
			TASK::_0x81948DFE4F5A0283(iLocal_15);
		}
	}
	else if (*uParam0 == -1761578407 && uParam0->f_4 == 7)
	{
		func_175(1);
	}
	func_104(&iLocal_63, 1, 1);
	if (CAM::DOES_CAM_EXIST(&(iLocal_16[0])))
	{
		CAM::DESTROY_CAM(&(iLocal_16[0]), false);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_20))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_20, false);
	}
}

float func_67(var uParam0)
{
	if (!func_24(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_108(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_176() - uParam0->f_1);
}

Vector3 func_68(var uParam0)
{
	vector3 vVar0;

	if (TASK::_0x841475AC96E794D1(uParam0->f_1))
	{
		vVar0 = { TASK::_0xA8452DD321607029(uParam0->f_1, 1) };
		return vVar0;
	}
	return 0f, 0f, 0f;
}

void func_69(var uParam0)
{
	if (func_102() != -1)
	{
		return;
	}
	if (func_177(*uParam0) != 0)
	{
		if (!MAP::_0x3F81EA4275D39D6F(func_177(*uParam0)))
		{
			MAP::_0xD8C7162AB2E2AF45(func_177(*uParam0));
		}
		func_32(*uParam0, 8);
	}
}

int func_70(var uParam0)
{
	int iVar0;
	int iVar1;

	switch (iLocal_65)
	{
		case 0:
			func_178(1, 1);
			break;
		case 1:
			if (TASK::_0x841475AC96E794D1(iLocal_15))
			{
				if (PED::_0x9C54041BB66BCF9E(Global_35, iLocal_15) && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
				{
					STREAMING::_0x513F8AA5BF2F17CF(func_101(uParam0, 0), 20f, 0);
					func_178(2, 1);
				}
			}
			break;
		case 2:
			if (func_67(&uLocal_66) <= 7.5f)
			{
				if (func_67(&uLocal_66) >= 3.5f)
				{
					if (!CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(4000);
					}
				}
			}
			else
			{
				func_178(3, 1);
			}
			break;
		case 3:
			if (func_179(uParam0))
			{
				iVar0 = 1;
			}
			if (STREAMING::_0x0909F71B5C070797())
			{
				iVar1 = 1;
			}
			if (((iVar0 && iVar1) && func_67(&uLocal_66) >= 1f) || func_67(&uLocal_66) >= 10f)
			{
				STREAMING::_0x5A8B01199C3E79C3();
				func_180(Global_35, func_101(uParam0, 1), func_168(uParam0, 1), 2, 1073741824);
				func_178(4, 1);
			}
			break;
		case 4:
			func_181(Global_35, func_167(uParam0, 1), 3000, 0, 0, -1082130432);
			func_178(6, 1);
			break;
		case 6:
			if ((TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0) && func_67(&uLocal_66) >= 1f) || func_67(&uLocal_66) >= 5f)
			{
				CAM::DO_SCREEN_FADE_IN(4000);
				func_178(12, 1);
			}
			break;
		case 12:
			return 1;
	}
	return 0;
}

void func_71(var uParam0)
{
	if (!func_53(*uParam0))
	{
		func_182(*uParam0);
		func_69(uParam0);
	}
}

int func_72(var uParam0)
{
	if (iLocal_65 > 0 && iLocal_65 < 12)
	{
		if (!func_49(uParam0))
		{
			func_178(12, 1);
		}
	}
	switch (iLocal_65)
	{
		case 0:
			func_178(1, 1);
			break;
		case 1:
			if (func_14(Global_35, func_76(uParam0, 0), 1) <= 1.6f)
			{
				func_104(&iLocal_63, 1, 1);
				func_178(2, 1);
			}
			break;
		case 2:
			if (func_14(Global_35, func_76(uParam0, 0), 1) > (1.6f + 1f))
			{
				func_104(&iLocal_63, 1, 1);
				func_178(1, 1);
			}
			else if (func_183(uParam0, 0))
			{
				iLocal_63 = func_113("GENERIC_USE", -473983589, Global_35, 2, 0, 0, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
				func_115(iLocal_63);
				func_178(3, 1);
			}
			break;
		case 3:
			func_30(uParam0, iLocal_63, "PLUNGER", 0);
			if (func_14(Global_35, func_76(uParam0, 0), 1) > (1.6f + 1f))
			{
				func_104(&iLocal_63, 1, 1);
				func_178(1, 1);
			}
			else if (func_183(uParam0, 1))
			{
				func_104(&iLocal_63, 1, 1);
				func_178(2, 1);
			}
			else if (func_33(iLocal_63) && func_117(iLocal_63, 1))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, -2334.563f, 102.6577f, 221.5343f, 1f, 20000, 0.1f, false, 164.0882f);
				func_104(&iLocal_63, 1, 1);
				func_178(5, 1);
			}
			break;
		case 5:
			if (func_67(&uLocal_66) >= 1f)
			{
				if (!CAM::DOES_CAM_EXIST(&(iLocal_16[0])))
				{
					iLocal_16[0] = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, -2333.38f, 102.69f, 223.21f, -6.197f, -0.63f, 55.514f, 65f, false, 2);
					CAM::SET_CAM_FOV(&(iLocal_16[0]), 37.84929f);
				}
				if (!CAM::DOES_CAM_EXIST(&(iLocal_16[1])))
				{
					iLocal_16[1] = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, -2334.52f, 104.21f, 223.47f, -7.584f, -0.74f, 59.195f, 65f, false, 2);
					CAM::SET_CAM_FOV(&(iLocal_16[1]), 37.84929f);
				}
				TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
				func_180(Global_35, -2334.563f, 102.6577f, 221.5343f, 164.0882f, 2, 1073741824);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(-98.7994f, 1065353216);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-11.5912f, 1f);
				if (CAM::DOES_CAM_EXIST(&(iLocal_16[0])))
				{
					CAM::SET_CAM_ACTIVE(&(iLocal_16[0]), true);
				}
				CAM::RENDER_SCRIPT_CAMS(true, false, 2000, true, false, 0);
				if (CAM::DOES_CAM_EXIST(&(iLocal_16[1])))
				{
					CAM::SET_CAM_ACTIVE_WITH_INTERP(&(iLocal_16[1]), &(iLocal_16[0]), 10000, 1, 1);
				}
				func_178(7, 1);
			}
			break;
		case 7:
			if (func_67(&uLocal_66) >= 1.2f)
			{
				FIRE::ADD_EXPLOSION_WITH_USER_VFX(func_76(uParam0, 1), 26, -1037168003, 1f, true, false, 1f);
				if (CAM::DOES_CAM_EXIST(&(iLocal_16[0])))
				{
					CAM::SHAKE_CAM(&(iLocal_16[0]), "SMALL_EXPLOSION_SHAKE", 0.5f);
				}
				if (CAM::DOES_CAM_EXIST(&(iLocal_16[1])))
				{
					CAM::SHAKE_CAM(&(iLocal_16[1]), "SMALL_EXPLOSION_SHAKE", 1f);
				}
				func_178(8, 1);
			}
			break;
		case 8:
			if (func_59(uParam0, 0) && func_67(&uLocal_66) >= 1f)
			{
				if (CAM::DOES_CAM_EXIST(&(iLocal_16[1])))
				{
					CAM::SHAKE_CAM(&(iLocal_16[1]), "SMALL_EXPLOSION_SHAKE", 0.5f);
				}
				PAD::SET_PAD_SHAKE(0, 1500, 150);
				func_178(9, 1);
			}
			break;
		case 9:
			if (func_67(&uLocal_66) >= 0.5f)
			{
				func_178(10, 1);
			}
			break;
		case 10:
			if (func_67(&uLocal_66) >= 0.5f)
			{
				CAM::RENDER_SCRIPT_CAMS(false, false, 2000, true, false, 0);
				if (CAM::DOES_CAM_EXIST(&(iLocal_16[0])))
				{
					CAM::SET_CAM_ACTIVE(&(iLocal_16[0]), false);
				}
				if (CAM::DOES_CAM_EXIST(&(iLocal_16[1])))
				{
					CAM::SET_CAM_ACTIVE(&(iLocal_16[1]), false);
				}
				func_71(uParam0);
				func_178(12, 1);
			}
			break;
		case 12:
			return 1;
	}
	return 0;
}

void func_73(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	switch (*uParam0)
	{
		case -544327665:
			if (uParam0->f_4 == 0)
			{
				iVar0 = 1;
			}
			else if (uParam0->f_4 == 1)
			{
				iVar0 = 2;
			}
			else if (uParam0->f_4 == 2)
			{
				iVar0 = 4;
			}
			else
			{
				return;
			}
			break;
		case -834293086:
			if (uParam0->f_4 == 0)
			{
				iVar1 = 1;
			}
			else if (uParam0->f_4 == 1)
			{
				iVar1 = 2;
			}
			else if (uParam0->f_4 == 2)
			{
				iVar1 = 4;
			}
			else if (uParam0->f_4 == 3)
			{
				iVar1 = 8;
			}
			else if (uParam0->f_4 == 4)
			{
				iVar1 = 16;
			}
			else if (uParam0->f_4 == 5)
			{
				iVar1 = 32;
			}
			else if (uParam0->f_4 == 6)
			{
				iVar1 = 64;
			}
			else if (uParam0->f_4 == 7)
			{
				iVar1 = 128;
			}
			else if (uParam0->f_4 == 8)
			{
				iVar1 = 256;
			}
			else if (uParam0->f_4 == 9)
			{
				iVar1 = 512;
			}
			else
			{
				return;
			}
			break;
		case 1120968795:
			if (uParam0->f_4 == 0)
			{
				iVar1 = 1024;
			}
			else if (uParam0->f_4 == 1)
			{
				iVar1 = 2048;
			}
			else
			{
				return;
			}
			break;
		case 1519472817:
			if (uParam0->f_4 == 0)
			{
				iVar1 = 8388608;
			}
			else if (uParam0->f_4 == 1)
			{
				iVar1 = 16777216;
			}
			else
			{
				return;
			}
			break;
		case -1859023693:
			if (uParam0->f_4 == 0)
			{
				iVar1 = 4096;
			}
			else if (uParam0->f_4 == 1)
			{
				iVar1 = 8192;
			}
			else if (uParam0->f_4 == 2)
			{
				iVar1 = 16384;
			}
			else if (uParam0->f_4 == 3)
			{
				iVar1 = 32768;
			}
			else if (uParam0->f_4 == 4)
			{
				iVar1 = 65536;
			}
			else if (uParam0->f_4 == 5)
			{
				iVar1 = 131072;
			}
			else if (uParam0->f_4 == 6)
			{
				iVar1 = 262144;
			}
			else if (uParam0->f_4 == 7)
			{
				iVar1 = 524288;
			}
			else if (uParam0->f_4 == 8)
			{
				iVar1 = 1048576;
			}
			else if (uParam0->f_4 == 9)
			{
				iVar1 = 2097152;
			}
			else if (uParam0->f_4 == 10)
			{
				iVar1 = 4194304;
			}
			else
			{
				return;
			}
			break;
		case 2000209669:
			if (uParam0->f_4 == 0)
			{
				iVar0 = 8;
			}
			else if (uParam0->f_4 == 1)
			{
				iVar0 = 16;
			}
			else if (uParam0->f_4 == 2)
			{
				iVar0 = 32;
			}
			else if (uParam0->f_4 == 3)
			{
				iVar0 = 64;
			}
			else if (uParam0->f_4 == 4)
			{
				iVar0 = 128;
			}
			else if (uParam0->f_4 == 5)
			{
				iVar0 = 256;
			}
			else if (uParam0->f_4 == 6)
			{
				iVar0 = 512;
			}
			else if (uParam0->f_4 == 7)
			{
				iVar0 = 1024;
			}
			else if (uParam0->f_4 == 8)
			{
				iVar0 = 2048;
			}
			else if (uParam0->f_4 == 9)
			{
				iVar0 = 4096;
			}
			else if (uParam0->f_4 == 10)
			{
				iVar0 = 8192;
			}
			else if (uParam0->f_4 == 11)
			{
				iVar0 = 16384;
			}
			else
			{
				return;
			}
			break;
		case -1272862985:
			if (uParam0->f_4 == 0)
			{
				iVar0 = 262144;
			}
			else if (uParam0->f_4 == 1)
			{
				iVar0 = 524288;
			}
			else if (uParam0->f_4 == 2)
			{
				iVar0 = 1048576;
			}
			else if (uParam0->f_4 == 3)
			{
				iVar0 = 2097152;
			}
			else
			{
				return;
			}
			break;
		case 404434344:
			iVar2 = 1;
			break;
		case -1761578407:
			if (uParam0->f_4 == 0)
			{
				iVar2 = 1;
			}
			else if (uParam0->f_4 == 1)
			{
				iVar2 = 2;
			}
			else if (uParam0->f_4 == 2)
			{
				iVar2 = 4;
			}
			else if (uParam0->f_4 == 3)
			{
				iVar2 = 8;
			}
			else if (uParam0->f_4 == 4)
			{
				iVar2 = 16;
			}
			else if (uParam0->f_4 == 5)
			{
				iVar2 = 32;
			}
			else if (uParam0->f_4 == 6)
			{
				iVar2 = 64;
			}
			else if (uParam0->f_4 == 7)
			{
				iVar2 = 128;
			}
			else if (uParam0->f_4 == 8)
			{
				iVar2 = 256;
			}
			else if (uParam0->f_4 == 9)
			{
				iVar2 = 512;
			}
			else if (uParam0->f_4 == 10)
			{
				iVar2 = 1024;
			}
			else
			{
				return;
			}
			break;
		case -890175011:
			if (uParam0->f_4 == 0)
			{
				iVar2 = 2048;
			}
			else if (uParam0->f_4 == 1)
			{
				iVar2 = 4096;
			}
			else if (uParam0->f_4 == 2)
			{
				iVar2 = 8192;
			}
			else if (uParam0->f_4 == 3)
			{
				iVar2 = 16384;
			}
			else if (uParam0->f_4 == 4)
			{
				iVar2 = 32768;
			}
			else
			{
				return;
			}
			break;
		case 677950956:
			if (uParam0->f_4 == 0)
			{
				iVar2 = 65536;
			}
			else if (uParam0->f_4 == 1)
			{
				iVar2 = 131072;
			}
			else if (uParam0->f_4 == 2)
			{
				iVar2 = 262144;
			}
			else if (uParam0->f_4 == 3)
			{
				iVar2 = 524288;
			}
			else if (uParam0->f_4 == 4)
			{
				iVar2 = 1048576;
			}
			else if (uParam0->f_4 == 5)
			{
				iVar2 = 2097152;
			}
			else
			{
				return;
			}
			break;
		default:
			break;
	}
	if (((*uParam0 == -1761578407 || *uParam0 == 404434344) || *uParam0 == -890175011) || *uParam0 == 677950956)
	{
		if (!func_39(Global_40.f_8863.f_154, iVar2))
		{
			func_40(&(Global_40.f_8863.f_154), iVar2);
		}
	}
	else if (((*uParam0 == -834293086 || *uParam0 == 1120968795) || *uParam0 == 1519472817) || *uParam0 == -1859023693)
	{
		if (!func_39(Global_40.f_8863.f_153, iVar1))
		{
			func_40(&(Global_40.f_8863.f_153), iVar1);
		}
	}
	else if (!func_39(Global_40.f_8863.f_152, iVar0))
	{
		func_40(&(Global_40.f_8863.f_152), iVar0);
	}
}

void func_74(int iParam0)
{
	if (!func_11(iParam0, 32))
	{
		func_32(iParam0, 32);
		TELEMETRY::_0xF5EAD898EF387E73(iParam0);
		if (func_184(iParam0))
		{
			func_186(func_185(795577402), 1);
		}
	}
}

int func_75(var uParam0)
{
	if (iLocal_65 > 0)
	{
	}
	switch (iLocal_65)
	{
		case 0:
			func_178(1, 1);
			break;
		case 1:
			if (!func_39(Global_40.f_8863.f_152, 1024))
			{
				if (VOLUME::_0x92A78D0BEDB332A3(iLocal_14) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_14, true, 0))
				{
					uParam0->f_4 = func_4(uParam0);
					if (func_48(Global_35, func_13(uParam0, uParam0->f_4), 1.4f, 1, 1) && func_112(Global_35, func_13(uParam0, uParam0->f_4), 0.5f))
					{
						func_178(2, 1);
					}
				}
			}
			else
			{
				func_178(9, 1);
			}
			break;
		case 2:
			func_104(&iLocal_63, 1, 1);
			uParam0->f_4 = func_4(uParam0);
			if (((!uParam0->f_4 == 7 && !uParam0->f_4 == 8) && !uParam0->f_4 == 9) && !uParam0->f_4 == 10)
			{
				if (func_188(Global_35, func_13(uParam0, uParam0->f_4), (func_187(uParam0, uParam0->f_4) + 55f), 1065353216))
				{
					iLocal_23 = 0;
					if (func_20(uParam0))
					{
						iLocal_63 = func_189("DISCO_PUSH", -719620017, func_13(uParam0, uParam0->f_4), 2f, 2, 0, 0, 5, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
					}
					func_178(4, 1);
				}
				else
				{
					iLocal_23 = 1;
					if (!func_20(uParam0))
					{
						iLocal_63 = func_189("DISCO_PUSH", -719620017, func_13(uParam0, uParam0->f_4), 2f, 2, 0, 0, 5, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
					}
					func_178(3, 1);
				}
			}
			break;
		case 3:
			if (!func_48(Global_35, func_13(uParam0, uParam0->f_4), 1.4f, 1, 1) || !func_112(Global_35, func_13(uParam0, uParam0->f_4), 0.5f))
			{
				func_104(&iLocal_63, 1, 1);
				func_178(1, 1);
			}
			else if (func_188(Global_35, func_13(uParam0, uParam0->f_4), (func_187(uParam0, uParam0->f_4) + 55f), 1065353216))
			{
				func_104(&iLocal_63, 1, 1);
				func_178(2, 1);
			}
			else if (func_33(iLocal_63))
			{
				if (func_117(iLocal_63, 1))
				{
					func_104(&iLocal_63, 1, 1);
					if (func_188(Global_35, func_13(uParam0, uParam0->f_4), (func_187(uParam0, uParam0->f_4) + 55f), 1065353216))
					{
						func_190(uParam0, uParam0->f_4);
					}
					else
					{
						func_73(uParam0);
					}
					func_191(uParam0);
					func_178(5, 1);
				}
			}
			break;
		case 4:
			if (!func_48(Global_35, func_13(uParam0, uParam0->f_4), 1.4f, 1, 1) || !func_112(Global_35, func_13(uParam0, uParam0->f_4), 0.5f))
			{
				func_104(&iLocal_63, 1, 1);
				func_178(1, 1);
			}
			else if (!func_188(Global_35, func_13(uParam0, uParam0->f_4), (func_187(uParam0, uParam0->f_4) + 55f), 1065353216))
			{
				func_104(&iLocal_63, 1, 1);
				func_178(2, 1);
			}
			else if (func_33(iLocal_63))
			{
				if (func_117(iLocal_63, 1))
				{
					func_104(&iLocal_63, 1, 1);
					if (func_188(Global_35, func_13(uParam0, uParam0->f_4), (func_187(uParam0, uParam0->f_4) + 55f), 1065353216))
					{
						func_190(uParam0, uParam0->f_4);
					}
					else
					{
						func_73(uParam0);
					}
					func_191(uParam0);
					func_178(5, 1);
				}
			}
			break;
		case 5:
			if (func_67(&uLocal_66) >= 9f)
			{
				func_178(7, 1);
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, 242628503, 1) == 8)
			{
				func_178(7, 1);
			}
			break;
		case 7:
			if (!func_39(Global_40.f_8863.f_152, 1024))
			{
				if ((((((func_39(Global_40.f_8863.f_152, 8) && func_39(Global_40.f_8863.f_152, 16)) && !func_39(Global_40.f_8863.f_152, 32)) && func_39(Global_40.f_8863.f_152, 64)) && !func_39(Global_40.f_8863.f_152, 128)) && func_39(Global_40.f_8863.f_152, 256)) && !func_39(Global_40.f_8863.f_152, 512))
				{
					func_40(&(Global_40.f_8863.f_152), 1024);
				}
			}
			if (func_26(&uLocal_66) >= 1000)
			{
				AUDIO::_0xCCE219C922737BFA(func_162(uParam0, 0), func_100(uParam0, uParam0->f_4), func_161(uParam0), 0, 0, 0, 0);
				func_178(8, 1);
			}
			break;
		case 8:
			if (func_26(&uLocal_66) >= 400)
			{
				if (func_58(uParam0, 1))
				{
					if (func_39(Global_40.f_8863.f_152, 1024))
					{
						AUDIO::_0xCCE219C922737BFA(func_162(uParam0, 1), func_100(uParam0, 7), func_161(uParam0), 0, 0, 0, 0);
						func_178(9, 1);
					}
					else
					{
						func_178(2, 1);
					}
				}
			}
			break;
		case 9:
			func_192(100f);
			func_172(uParam0);
			func_178(10, 1);
			break;
		case 10:
			if ((func_39(Global_40.f_8863.f_152, 2048) && func_39(Global_40.f_8863.f_152, 4096)) && func_39(Global_40.f_8863.f_152, 8192))
			{
				func_178(12, 1);
			}
			else if (func_48(Global_35, func_76(uParam0, 0), 5f, 1, 1))
			{
				if (func_78())
				{
					if (!func_39(Global_40.f_8863.f_152, 2048))
					{
						if (func_194(uLocal_28[0], func_193(uParam0, 0)))
						{
							func_40(&(Global_40.f_8863.f_152), 2048);
						}
					}
					if (!func_39(Global_40.f_8863.f_152, 4096))
					{
						if (func_194(uLocal_28[1], func_193(uParam0, 1)))
						{
							func_40(&(Global_40.f_8863.f_152), 4096);
						}
					}
					if (!func_39(Global_40.f_8863.f_152, 8192))
					{
						if (func_194(uLocal_28[2], func_193(uParam0, 2)))
						{
							func_40(&(Global_40.f_8863.f_152), 8192);
						}
					}
				}
			}
			break;
		case 12:
			return 1;
	}
	return 0;
}

Vector3 func_76(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case -1481450947:
			switch (iParam1)
			{
				case 0:
					return 1268.29f, -386.947f, 88.4659f;
				default:
					break;
			}
			break;
		case -1427565340:
			switch (iParam1)
			{
				case 0:
					return 2255.46f, -753.712f, 42.5807f;
				case 1:
					return 2255.29f, -753.756f, 42.8407f;
				default:
					break;
			}
			break;
		case -763376358:
			switch (iParam1)
			{
				case 0:
					return 2545.93f, 800.34f, 77.013f;
				default:
					break;
			}
			break;
		case 1801731633:
			switch (iParam1)
			{
				case 0:
					return 2286.46f, -727.94f, 42.98f;
				default:
					break;
			}
			break;
		case 1490223565:
			switch (iParam1)
			{
				case 0:
					return -5151.3f, -2118.4f, 13f;
				default:
					break;
			}
			break;
		case -777592153:
			switch (iParam1)
			{
				case 0:
					return 1123.43f, 430.557f, 95.3598f;
				default:
					break;
			}
			break;
		case 1342653896:
			switch (iParam1)
			{
				case 0:
					return -3338.99f, -2501.585f, 1.926f;
				default:
					break;
			}
			break;
		case -1308658310:
			switch (iParam1)
			{
				case 0:
					return -2334.66f, 102.11f, 221.988f;
				case 1:
					return -2351.106f, 111.0932f, 217f;
				case 2:
					return -2351.33f, 110.337f, 216.825f;
				default:
					break;
			}
			break;
		case 425000526:
			switch (iParam1)
			{
				case 0:
					return -2367.9f, 124.4f, 215.94f;
				case 1:
					return -2366.67f, 124.726f, 215.914f;
				default:
					break;
			}
			break;
		case 2134589549:
			switch (iParam1)
			{
				case 0:
					return -1619.97f, 1353.525f, 356.399f;
				default:
					break;
			}
			break;
		case 733338689:
			switch (iParam1)
			{
				case 0:
					return 2383.35f, 1695.3f, 96.018f;
				default:
					break;
			}
			break;
		case 1124200691:
			switch (iParam1)
			{
				case 0:
					return 2442.855f, 287.212f, 66.39f;
				default:
					break;
			}
			break;
		case -1859413640:
			switch (iParam1)
			{
				case 0:
					return 2195.15f, -554.37f, 41.02f;
				case 1:
					return 2195.38f, -554.33f, 41.02f;
				default:
					break;
			}
			break;
		case -1300082860:
			switch (iParam1)
			{
				case 0:
					return 365.9631f, -16.5072f, 99.3002f;
				default:
					break;
			}
			break;
		case -1420566543:
			switch (iParam1)
			{
				case 0:
					return 1068.42f, -2024.7f, 49.25f;
				default:
					break;
			}
			break;
		case -1208846034:
			switch (iParam1)
			{
				case 0:
					return 1581.16f, -1383.19f, 55.3f;
				default:
					break;
			}
			break;
		case 1048086072:
			switch (iParam1)
			{
				case 0:
					return -2311.151f, -2380.23f, 64.66f;
				default:
					break;
			}
			break;
		case 939555152:
			switch (iParam1)
			{
				case 0:
					return 1139.765f, 464.21f, 98.375f;
				default:
					break;
			}
			break;
		case -657632:
			switch (iParam1)
			{
				case 0:
					return 2685.89f, 70.2216f, 58.3001f;
				default:
					break;
			}
			break;
		case -1061274876:
			switch (iParam1)
			{
				case 0:
					return 180.217f, 1304.7f, 178.603f;
				case 1:
					return 180.267f, 1304.62f, 178.607f;
				case 2:
					return 180.387f, 1304.79f, 178.601f;
				case 3:
					return 180.397f, 1304.7f, 178.605f;
				case 4:
					return 180.437f, 1304.66f, 178.599f;
				default:
					break;
			}
			break;
		case 513110082:
			if (uParam0->f_4 == 0)
			{
				switch (iParam1)
				{
					case 0:
						return -2530.628f, 1173.581f, 225.1708f;
					default:
						break;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				switch (iParam1)
				{
					case 0:
						return 3029.425f, 1775.791f, 83.79f;
					default:
						break;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				switch (iParam1)
				{
					case 0:
						return -4394.6f, -2159.37f, 47.498f;
					case 1:
						return -4394.685f, -2159.115f, 47.5059f;
					case 2:
						return -4394.76f, -2159.05f, 47.498f;
					case 3:
						return -4394.446f, -2159.219f, 47.523f;
					case 4:
						return -4394.639f, -2159.254f, 47.499f;
					default:
						break;
				}
			}
			break;
		case 1335921989:
			switch (iParam1)
			{
				case 0:
					return 2811.864f, 996.6885f, 53.9353f;
				default:
					break;
			}
			break;
		case 2135153015:
			switch (iParam1)
			{
				case 0:
					return -161.8621f, 1734.902f, 170.799f;
				case 1:
					return -161.862f, 1734.9f, 170.687f;
				default:
					break;
			}
			break;
		case -35775921:
			switch (iParam1)
			{
				case 0:
					return 1141.463f, 763.3734f, 95.371f;
				default:
					break;
			}
			break;
		case -709811179:
			switch (iParam1)
			{
				case 0:
					return 2289.75f, 2081.3f, 199.581f;
				default:
					break;
			}
			break;
		case 464413478:
			switch (iParam1)
			{
				case 0:
					return 494.1373f, -301.9945f, 147.9723f;
				case 1:
					return 494.1373f, -301.9945f, 147f;
				default:
					break;
			}
			break;
		case 949011950:
			switch (iParam1)
			{
				case 0:
					return -2343.751f, -2181.372f, 73.3274f;
				case 1:
					return -2343.751f, -2181.372f, 73.3274f;
				default:
					break;
			}
			break;
		case 429544447:
			switch (iParam1)
			{
				case 0:
					return -5886.735f, -2762.121f, -5.0027f;
				default:
					break;
			}
			break;
		case 1673499939:
			switch (iParam1)
			{
				case 0:
					return 2476.28f, 1997.81f, 166.918f;
				default:
					break;
			}
			break;
		case 373034311:
			switch (iParam1)
			{
				case 0:
					return 2316.89f, 1072.69f, 94.409f;
				default:
					break;
			}
			break;
		case -780455182:
			switch (iParam1)
			{
				case 0:
					return -1019.89f, 1692.11f, 244.105f;
				case 1:
					return -988.1135f, 1692.075f, 243.3826f;
				default:
					break;
			}
			break;
		case -739986731:
			switch (iParam1)
			{
				case 0:
					return -2904.945f, -254.221f, 187.3f;
				default:
					break;
			}
			break;
		case 2000209669:
			switch (iParam1)
			{
				case 0:
					return 830.571f, 1924.11f, 258.798f;
				case 1:
					return 830.641f, 1924.09f, 258.798f;
				case 2:
					return 830.611f, 1924.12f, 258.825f;
				default:
					break;
			}
			break;
		case -654238687:
			switch (iParam1)
			{
				case 0:
					return -1413.56f, -2669.16f, 42.2f;
				default:
					break;
			}
			break;
		case -1144800837:
			switch (iParam1)
			{
				case 0:
					return 398.28f, -1267.89f, 40.737f;
				default:
					break;
			}
			break;
		case 1347913620:
			switch (iParam1)
			{
				case 0:
					return 2443.16f, 290.578f, 66.5052f;
				default:
					break;
			}
			break;
		case -1614148516:
			switch (iParam1)
			{
				case 0:
					return 2307.592f, -330.3333f, 41.6732f;
				default:
					break;
			}
			break;
		case -1494823099:
			switch (iParam1)
			{
				case 0:
					return -5854.019f, -3745.071f, -25.5216f;
				case 1:
					return -5854.012f, -3744.898f, -25.519f;
				default:
					break;
			}
			break;
		case 1937333853:
			switch (iParam1)
			{
				case 0:
					return 1593.43f, -1769.6f, 52.5869f;
				default:
					break;
			}
			break;
		case 118535038:
			switch (iParam1)
			{
				case 0:
					return -1530.689f, -308.1162f, 141.4804f;
				case 1:
					return -1532.051f, -308.3718f, 141.5067f;
				case 2:
					return -1530.594f, -308.8933f, 141.4845f;
				default:
					break;
			}
			break;
		case -1891628345:
			switch (iParam1)
			{
				case 0:
					return -2694.601f, -1500.248f, 150.5708f;
				default:
					break;
			}
			break;
		case 657666087:
			switch (iParam1)
			{
				case 0:
					return -1755.078f, -1623.864f, 90.579f;
				default:
					break;
			}
			break;
		case -2009137002:
			switch (iParam1)
			{
				case 0:
					return 1259.735f, 1294.358f, 216.0961f;
				case 1:
					return 1259.735f, 1294.358f, 216.0961f;
				default:
					break;
			}
			break;
		case -161804536:
			switch (iParam1)
			{
				case 0:
					return 2385.799f, 1696.725f, 95.7555f;
				case 1:
					return 2385.81f, 1696.69f, 95.7678f;
				default:
					break;
			}
			break;
		case -1761578407:
			switch (iParam1)
			{
				case 0:
					return 1735.312f, -1894.472f, 44.5668f;
				default:
					break;
			}
			break;
		case 247563739:
			switch (iParam1)
			{
				case 0:
					return 2448.58f, 2097.729f, 172.2719f;
				default:
					break;
			}
			break;
		case -2108030724:
		case -2060865802:
		case -2008558277:
		case -1887999095:
		case -1841331114:
		case -1829339703:
		case -1824429070:
		case -1761189332:
		case -1714262909:
		case -1636964661:
		case -1287911066:
		case -1272862985:
		case -1240932004:
		case -1177787273:
		case -968854939:
		case -641229542:
		case -599506500:
		case -499529359:
		case -415839138:
		case -357364973:
		case -261997819:
		case -232974724:
		case -30872859:
		case 149709049:
		case 221420861:
		case 308500632:
		case 330993088:
		case 435290930:
		case 683269210:
		case 870958936:
		case 1187689415:
		case 1187917501:
		case 1284679164:
		case 1424723727:
		case 1464664327:
		case 1505050944:
		case 1535254161:
		case 1861313914:
		case 2072029413:
		case 2072069278:
			break;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_77(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case -641229542:
			return 141209672;
		case 1937333853:
			return -27084600;
		case -1300082860:
			return -1836692081;
		case 429544447:
			return 1157890702;
		case 1347913620:
			return 1264764089;
		case -2009137002:
			return -1303435604;
		case -780455182:
			return 355916257;
		case 2135153015:
			return 1056963841;
		case 1342653896:
			return -551379044;
		case 1284679164:
			switch (iParam1)
			{
				case 0:
					return 1172185944;
				case 1:
					return -11004343;
				case 2:
					return 1771694799;
				case 3:
					return -1932381889;
				default:
					break;
			}
			break;
		case -1061274876:
			switch (iParam1)
			{
				case 0:
					return 1429539048;
				case 1:
					return 1745071749;
				case 2:
					return 1903214943;
				case 3:
					return -1644160387;
				case 4:
					return -1339375918;
				default:
					break;
			}
			break;
		case 118535038:
			switch (iParam1)
			{
				case 0:
					return 925382142;
				case 1:
					return -1411632109;
				case 2:
					return 1596138913;
				default:
					break;
			}
			break;
		case 513110082:
			switch (uParam0->f_4)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							return 342725892;
						case 1:
							return 1597450906;
						case 2:
							return -378242258;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam1)
					{
						case 0:
							return 342725892;
						case 1:
							return 1597450906;
						case 2:
							return -378242258;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 3:
							return -1141921809;
						case 4:
							return -1457651124;
						case 5:
							return -541298808;
						case 6:
							return -845952201;
						case 7:
							return 44643681;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_78()
{
	int iVar0;

	iVar0 = TASK::_0xD04241BBF6D03A5E(Global_35);
	if (TASK::_0x841475AC96E794D1(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_79(int iParam0)
{
	vector3 vVar0;
	int iVar10;

	if (TASK::_0xD04241BBF6D03A5E(Global_35) != 0)
	{
		iVar10 = 0;
		while (iVar10 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
		{
			if (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar10) == -1730772208)
			{
				if (SCRIPTS::GET_EVENT_DATA(0, iVar10, &vVar0, 10))
				{
					if (vVar0.z == iParam0 || iParam0 == 0)
					{
						return 1;
					}
				}
			}
			iVar10++;
		}
	}
	return 0;
}

void func_80(var uParam0)
{
	switch (*uParam0)
	{
		case -544327665:
			if (func_39(Global_40.f_8863.f_152, 1))
			{
			}
			if (func_39(Global_40.f_8863.f_152, 2))
			{
			}
			if (func_39(Global_40.f_8863.f_152, 4))
			{
			}
			break;
		case 1120968795:
			if (func_39(Global_40.f_8863.f_153, 1024))
			{
			}
			if (func_39(Global_40.f_8863.f_153, 2048))
			{
			}
			break;
		case 1519472817:
			if (func_39(Global_40.f_8863.f_153, 8388608))
			{
			}
			if (func_39(Global_40.f_8863.f_153, 16777216))
			{
			}
			break;
		case -1859023693:
			if (func_39(Global_40.f_8863.f_153, 4096))
			{
			}
			if (func_39(Global_40.f_8863.f_153, 8192))
			{
			}
			if (func_39(Global_40.f_8863.f_153, 16384))
			{
			}
			if (func_39(Global_40.f_8863.f_153, 32768))
			{
			}
			if (func_39(Global_40.f_8863.f_153, 65536))
			{
			}
			if (func_39(Global_40.f_8863.f_153, 131072))
			{
			}
			if (func_39(Global_40.f_8863.f_153, 262144))
			{
			}
			if (func_39(Global_40.f_8863.f_153, 524288))
			{
			}
			if (func_39(Global_40.f_8863.f_153, 1048576))
			{
			}
			if (func_39(Global_40.f_8863.f_153, 2097152))
			{
			}
			if (func_39(Global_40.f_8863.f_153, 4194304))
			{
			}
			break;
		case -834293086:
			if (func_39(Global_40.f_8863.f_153, 1))
			{
			}
			if (func_39(Global_40.f_8863.f_153, 2))
			{
			}
			if (func_39(Global_40.f_8863.f_153, 4))
			{
			}
			if (func_39(Global_40.f_8863.f_153, 8))
			{
			}
			if (func_39(Global_40.f_8863.f_153, 16))
			{
			}
			if (func_39(Global_40.f_8863.f_153, 32))
			{
			}
			if (func_39(Global_40.f_8863.f_153, 64))
			{
			}
			if (func_39(Global_40.f_8863.f_153, 128))
			{
			}
			if (func_39(Global_40.f_8863.f_153, 256))
			{
			}
			if (func_39(Global_40.f_8863.f_153, 512))
			{
			}
			break;
		case 2000209669:
			if (func_39(Global_40.f_8863.f_152, 8))
			{
			}
			if (func_39(Global_40.f_8863.f_152, 16))
			{
			}
			if (func_39(Global_40.f_8863.f_152, 32))
			{
			}
			if (func_39(Global_40.f_8863.f_152, 64))
			{
			}
			if (func_39(Global_40.f_8863.f_152, 128))
			{
			}
			if (func_39(Global_40.f_8863.f_152, 256))
			{
			}
			if (func_39(Global_40.f_8863.f_152, 512))
			{
			}
			if (func_39(Global_40.f_8863.f_152, 1024))
			{
			}
			if (func_39(Global_40.f_8863.f_152, 2048))
			{
			}
			if (func_39(Global_40.f_8863.f_152, 4096))
			{
			}
			if (func_39(Global_40.f_8863.f_152, 8192))
			{
			}
			break;
		case 404434344:
			if (func_39(Global_40.f_8863.f_154, 1))
			{
			}
			break;
		case -1761578407:
			if (func_39(Global_40.f_8863.f_154, 1))
			{
			}
			if (func_39(Global_40.f_8863.f_154, 2))
			{
			}
			if (func_39(Global_40.f_8863.f_154, 4))
			{
			}
			if (func_39(Global_40.f_8863.f_154, 8))
			{
			}
			if (func_39(Global_40.f_8863.f_154, 16))
			{
			}
			if (func_39(Global_40.f_8863.f_154, 32))
			{
			}
			if (func_39(Global_40.f_8863.f_154, 64))
			{
			}
			if (func_39(Global_40.f_8863.f_154, 128))
			{
			}
			if (func_39(Global_40.f_8863.f_154, 256))
			{
			}
			if (func_39(Global_40.f_8863.f_154, 512))
			{
			}
			if (func_39(Global_40.f_8863.f_154, 1024))
			{
			}
			break;
		case -890175011:
			if (func_39(Global_40.f_8863.f_154, 2048))
			{
			}
			if (func_39(Global_40.f_8863.f_154, 4096))
			{
			}
			if (func_39(Global_40.f_8863.f_154, 8192))
			{
			}
			if (func_39(Global_40.f_8863.f_154, 16384))
			{
			}
			if (func_39(Global_40.f_8863.f_154, 32768))
			{
			}
			break;
		case 677950956:
			if (func_39(Global_40.f_8863.f_154, 65536))
			{
			}
			if (func_39(Global_40.f_8863.f_154, 131072))
			{
			}
			if (func_39(Global_40.f_8863.f_154, 262144))
			{
			}
			if (func_39(Global_40.f_8863.f_154, 524288))
			{
			}
			if (func_39(Global_40.f_8863.f_154, 1048576))
			{
			}
			if (func_39(Global_40.f_8863.f_154, 1048576))
			{
			}
			if (func_39(Global_40.f_8863.f_154, 2097152))
			{
			}
			break;
		case -1272862985:
			if (func_39(Global_40.f_8863.f_152, 262144))
			{
			}
			if (func_39(Global_40.f_8863.f_152, 524288))
			{
			}
			if (func_39(Global_40.f_8863.f_152, 1048576))
			{
			}
			if (func_39(Global_40.f_8863.f_152, 2097152))
			{
			}
			break;
		default:
			break;
	}
}

int func_81(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iLocal_65 >= 0 && iLocal_65 <= 12)
	{
		if (*uParam0 == 404434344)
		{
			uParam0->f_4 = 0;
			uParam0->f_6.f_2 = { func_92(uParam0, 0) };
		}
		else if (*uParam0 == -1761578407)
		{
			if (uParam0->f_4 == 2 || uParam0->f_4 == 3)
			{
				if (VOLUME::_0x92A78D0BEDB332A3(iLocal_14) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_14, true, 0))
				{
					uParam0->f_4 = func_4(uParam0);
					uParam0->f_6.f_2 = { func_92(uParam0, uParam0->f_4) };
					if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_6.f_9))
					{
						VOLUME::_0x43F867EF5C463A53(uParam0->f_6.f_9);
					}
					if (uParam0->f_4 == 2)
					{
						uParam0->f_6.f_9 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2576.871f, -628.9302f, 42.2934f, 0f, 0f, -110.7924f, 2.5f, 1.61286f, 5f, func_195(uParam0));
					}
					else if (uParam0->f_4 == 3)
					{
						uParam0->f_6.f_9 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2578.758f, -629.6465f, 42.2934f, 0f, 0f, -110.7924f, 2.5f, 1.61286f, 5f, func_195(uParam0));
					}
				}
			}
		}
	}
	switch (iLocal_65)
	{
		case 0:
			if (*uParam0 == 404434344)
			{
				if (!ENTITY::IS_ENTITY_DEAD(&(Local_40.f_1[0])))
				{
					PED::REQUEST_PED_VISIBILITY_TRACKING(&(Local_40.f_1[0]));
					ENTITY::SET_ENTITY_INVINCIBLE(&(Local_40.f_1[0]), true);
					ENTITY::SET_ENTITY_PROOFS(&(Local_40.f_1[0]), 6, false);
				}
				func_178(1, 1);
			}
			else if (func_33(uParam0->f_6.f_8) && func_38(uParam0->f_6.f_8, 1) <= 0f)
			{
				func_178(1, 1);
			}
			break;
		case 1:
			if (*uParam0 == 404434344)
			{
				if (func_48(Global_35, func_164(uParam0, 0), 35f, 1, 1))
				{
					if ((!ENTITY::IS_ENTITY_DEAD(&(Local_40.f_1[0])) && ENTITY::IS_ENTITY_VISIBLE(&(Local_40.f_1[0]))) || func_48(Global_35, func_164(uParam0, 0), 15f, 1, 1))
					{
						if (func_139())
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(Local_40.f_1[0]), true);
							TASK::OPEN_SEQUENCE_TASK(&iVar0);
							TASK::TASK_ANIMAL_FLEE(0, Global_35, -1);
							TASK::TASK_SMART_FLEE_PED(0, Global_35, 200f, -1, 0, 3f, 0);
							TASK::CLOSE_SEQUENCE_TASK(iVar0);
							TASK::TASK_PERFORM_SEQUENCE(&(Local_40.f_1[0]), iVar0);
							TASK::CLEAR_SEQUENCE_TASK(&iVar0);
						}
						else
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(Local_40.f_1[0]), false);
							TASK::TASK_FLY_AWAY(&(Local_40.f_1[0]), Global_35);
						}
						func_178(3, 1);
					}
				}
			}
			else if (func_39(uParam0->f_3, 2))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar1);
				TASK::TASK_TURN_PED_TO_FACE_COORD(0, func_92(uParam0, uParam0->f_4), 1000);
				TASK::TASK_PLAY_ANIM(0, func_158(uParam0, 0, 0, 0), func_158(uParam0, 0, 1, 0), 4f, -2f, -1, 67108880, 0, 0, 65536, 0, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar1);
				TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar1);
				TASK::CLEAR_SEQUENCE_TASK(&iVar1);
				func_178(6, 1);
			}
			break;
		case 3:
			if (*uParam0 == 404434344)
			{
				if (!iLocal_23)
				{
					if (!func_196(Global_35, &(Local_40.f_1[0]), 90f, 1))
					{
						iLocal_23 = 1;
						if (!ENTITY::IS_ENTITY_DEAD(&(Local_40.f_1[0])))
						{
							func_197(Local_40.f_1[0], 1);
						}
					}
				}
			}
			if (func_39(uParam0->f_3, 2))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar2);
				TASK::TASK_TURN_PED_TO_FACE_COORD(0, func_92(uParam0, uParam0->f_4), 1000);
				TASK::TASK_PLAY_ANIM(0, func_158(uParam0, 0, 0, 0), func_158(uParam0, 0, 1, 0), 4f, -2f, -1, 67108880, 0, 0, 65536, 0, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar2);
				TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar2);
				TASK::CLEAR_SEQUENCE_TASK(&iVar2);
				func_178(6, 1);
			}
			break;
		case 6:
			CAM::SET_GAMEPLAY_COORD_HINT(uParam0->f_6.f_2, -1, 2000, 2000, 0);
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			PAD::ENABLE_CONTROL_ACTION(0, -719620017, true);
			if (!func_20(uParam0))
			{
				if (func_31(uParam0))
				{
					if (uParam0->f_4 == 2)
					{
						if (!func_39(Global_40.f_8863.f_154, 4))
						{
							func_73(uParam0);
							func_80(uParam0);
							func_198(uParam0, 1);
						}
					}
					else if (uParam0->f_4 == 3)
					{
						if (!func_39(Global_40.f_8863.f_154, 8))
						{
							func_73(uParam0);
							func_80(uParam0);
							func_198(uParam0, 1);
						}
					}
					else
					{
						func_73(uParam0);
						func_80(uParam0);
						func_198(uParam0, 1);
						if (*uParam0 == 404434344)
						{
							if (!func_11(*uParam0, 2))
							{
								func_32(*uParam0, 2);
							}
						}
					}
					if ((((((((func_39(Global_40.f_8863.f_154, 1) && func_39(Global_40.f_8863.f_154, 2)) && func_39(Global_40.f_8863.f_154, 4)) && func_39(Global_40.f_8863.f_154, 8)) && func_39(Global_40.f_8863.f_154, 16)) && func_39(Global_40.f_8863.f_154, 32)) && func_39(Global_40.f_8863.f_154, 64)) && func_39(Global_40.f_8863.f_154, 128)) && func_39(Global_40.f_8863.f_154, 256))
					{
						if (*uParam0 == 404434344)
						{
							if (!func_53(-1761578407))
							{
								func_182(-1761578407);
							}
						}
						else
						{
							func_71(uParam0);
							if (!func_11(404434344, 2))
							{
								func_32(404434344, 2);
							}
						}
					}
				}
			}
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0, -719620017))
			{
				if (!func_39(uParam0->f_3, 4))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, func_158(uParam0, 0, 0, 0), func_158(uParam0, 0, 1, 0), 1))
					{
						if (ENTITY::_0x627520389E288A73(Global_35, func_158(uParam0, 0, 0, 0), func_158(uParam0, 0, 1, 0)) >= 0.8f)
						{
							func_40(&(uParam0->f_3), 4);
							TASK::TASK_PLAY_ANIM(Global_35, func_158(uParam0, 0, 0, 0), "loop", 2f, -4f, -1, 67108880, 0, 0, 65536, 0, 0, 0);
						}
					}
				}
			}
			else if (!func_20(uParam0))
			{
				if (!func_39(uParam0->f_3, 2) && func_38(uParam0->f_6.f_8, 1) <= 0f)
				{
					TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
					if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
					{
						CAM::STOP_GAMEPLAY_HINT(false);
					}
					func_178(0, 1);
				}
			}
			else if (!func_39(uParam0->f_3, 4))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, func_158(uParam0, 0, 0, 0), func_158(uParam0, 0, 1, 0), 1))
				{
					if (ENTITY::_0x627520389E288A73(Global_35, func_158(uParam0, 0, 0, 0), func_158(uParam0, 0, 1, 0)) >= 0.8f)
					{
						func_40(&(uParam0->f_3), 4);
						TASK::TASK_PLAY_ANIM(Global_35, func_158(uParam0, 0, 0, 0), "loop", 2f, -4f, -1, 67108880, 0, 0, 65536, 0, 0, 0);
					}
				}
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, func_158(uParam0, 0, 0, 0), "loop", 1))
			{
				if (ENTITY::_0x627520389E288A73(Global_35, func_158(uParam0, 0, 0, 0), "loop") >= 0.02f)
				{
					TASK::TASK_PLAY_ANIM(Global_35, func_158(uParam0, 0, 0, 0), "outro", 4f, -8f, -1, 67108880, 0, 0, 65536, 0, 0, 0);
					func_178(7, 1);
				}
			}
			break;
		case 7:
			if (uParam0->f_4 == 2 || uParam0->f_4 == 3)
			{
				if (ENTITY::_0x627520389E288A73(Global_35, func_158(uParam0, 0, 0, 0), "outro") < 0.8f)
				{
					PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
				}
			}
			if (ENTITY::_0x627520389E288A73(Global_35, func_158(uParam0, 0, 0, 0), "outro") >= 0.98f)
			{
				if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					CAM::STOP_GAMEPLAY_HINT(false);
				}
				if (uParam0->f_4 == 2 || uParam0->f_4 == 3)
				{
					if (ENTITY::_0x627520389E288A73(Global_35, func_158(uParam0, 0, 0, 0), "outro") < 0.8f)
					{
						PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
					}
				}
				if (ENTITY::_0x627520389E288A73(Global_35, func_158(uParam0, 0, 0, 0), "outro") >= 0.98f)
				{
					if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
					{
						CAM::STOP_GAMEPLAY_HINT(false);
					}
					if (uParam0->f_4 == 2 || uParam0->f_4 == 3)
					{
						if (func_39(Global_40.f_8863.f_154, 4) && func_39(Global_40.f_8863.f_154, 8))
						{
							func_178(12, 1);
						}
						else
						{
							if (func_11(*uParam0, 16))
							{
								func_51(*uParam0, 16);
							}
							if (func_39(uParam0->f_3, 4))
							{
								func_43(&(uParam0->f_3), 4);
							}
							func_178(0, 1);
						}
					}
					else
					{
						func_178(12, 1);
					}
				}
			}
			break;
		case 12:
			return 1;
	}
	return 0;
}

int func_82(var uParam0)
{
	if (func_20(uParam0))
	{
		return 0;
	}
	if (iLocal_65 > 0 && iLocal_65 < 12)
	{
	}
	switch (iLocal_65)
	{
		case 0:
			func_178(1, 1);
			break;
		case 1:
			if (func_199(&iLocal_14, &uLocal_28))
			{
				func_178(6, 1);
			}
			break;
		case 6:
			if (func_46(&iLocal_14))
			{
				func_47(3, 0, 0, 0, 0, 0, 1065353216, 0);
				func_178(12, 1);
			}
			break;
		case 12:
			return 1;
	}
	return 0;
}

void func_83(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iVar0 = 2;
	}
	else if (iParam0 == 1)
	{
		iVar0 = 4;
	}
	else if (iParam0 == 2)
	{
		iVar0 = 8;
	}
	else if (iParam0 == 3)
	{
		iVar0 = 16;
	}
	else if (iParam0 == 4)
	{
		iVar0 = 32;
	}
	else if (iParam0 == 5)
	{
		iVar0 = 64;
	}
	else if (iParam0 == 6)
	{
		iVar0 = 128;
	}
	else if (iParam0 == 7)
	{
		iVar0 = 256;
	}
	else if (iParam0 == 8)
	{
		iVar0 = 512;
	}
	else if (iParam0 == 9)
	{
		iVar0 = 1024;
	}
	else if (iParam0 == 10)
	{
		iVar0 = 2048;
	}
	else if (iParam0 == 11)
	{
		iVar0 = 4096;
	}
	else if (iParam0 == 12)
	{
		iVar0 = 8192;
	}
	else if (iParam0 == 13)
	{
		iVar0 = 16384;
	}
	else if (iParam0 == 14)
	{
		iVar0 = 32768;
	}
	else if (iParam0 == 15)
	{
		iVar0 = 65536;
	}
	else if (iParam0 == 16)
	{
		iVar0 = 131072;
	}
	else if (iParam0 == 17)
	{
		iVar0 = 262144;
	}
	else if (iParam0 == 18)
	{
		iVar0 = 524288;
	}
	else if (iParam0 == 19)
	{
		iVar0 = 1048576;
	}
	else
	{
		return;
	}
	if (!func_39(Global_40.f_8863.f_148, iVar0))
	{
		func_40(&(Global_40.f_8863.f_148), iVar0);
	}
}

void func_84(var uParam0)
{
	if (func_39(Global_40.f_8863.f_148, 2))
	{
	}
	if (func_39(Global_40.f_8863.f_148, 4))
	{
	}
	if (func_39(Global_40.f_8863.f_148, 8))
	{
	}
	if (func_39(Global_40.f_8863.f_148, 16))
	{
	}
	if (func_39(Global_40.f_8863.f_148, 32))
	{
	}
	if (func_39(Global_40.f_8863.f_148, 64))
	{
	}
	if (func_39(Global_40.f_8863.f_148, 128))
	{
	}
	if (func_39(Global_40.f_8863.f_148, 256))
	{
	}
	if (func_39(Global_40.f_8863.f_148, 512))
	{
	}
	if (func_39(Global_40.f_8863.f_148, 1024))
	{
	}
	if (func_39(Global_40.f_8863.f_148, 2048))
	{
	}
	if (func_39(Global_40.f_8863.f_148, 4096))
	{
	}
	if (func_39(Global_40.f_8863.f_148, 8192))
	{
	}
	if (func_39(Global_40.f_8863.f_148, 16384))
	{
	}
	if (func_39(Global_40.f_8863.f_148, 32768))
	{
	}
	if (func_39(Global_40.f_8863.f_148, 65536))
	{
	}
	if (func_39(Global_40.f_8863.f_148, 131072))
	{
	}
	if (func_39(Global_40.f_8863.f_148, 262144))
	{
	}
	if (func_39(Global_40.f_8863.f_148, 524288))
	{
	}
	if (func_39(Global_40.f_8863.f_148, 1048576))
	{
	}
}

int func_85()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 <= (20 - 1))
	{
		iVar2 = func_143(iVar0);
		if (func_39(Global_40.f_8863.f_148, iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_86(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_200(iParam0);
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar0))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iVar0, 0f, 0f, 0f, func_201(iParam0), func_202(iParam0), 0);
	}
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iVar0, MISC::_CREATE_VAR_STRING(0, func_203(iParam0), iParam1, iParam2));
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iVar0, 0, MISC::_CREATE_VAR_STRING(0, func_204(iParam0), iParam1, iParam2), iParam1 == iParam2, 0, 0);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iVar0, MISC::GET_HASH_KEY(func_205(iParam0, 0)), MISC::GET_HASH_KEY(func_206(iParam0, 0)));
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iVar0, MISC::GET_HASH_KEY(func_205(iParam0, 1)), MISC::GET_HASH_KEY(func_206(iParam0, 1)));
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iVar0, 0, func_207(iParam0, 0), iParam1 == iParam2, 1, 0);
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iVar0, 1, func_207(iParam0, 1), func_53(373034311), 1, 0);
}

void func_87(char* sParam0)
{
	UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, func_200(-321841939));
	func_208(MISC::_CREATE_VAR_STRING(2, "DISCO_DREAM"), sParam0, 908516622, -1316482209, 1433015236, MISC::_CREATE_VAR_STRING(2, "COL_CTX_PLAYER_LOG"), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

int func_88(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	if (*iParam1 == 0)
	{
		*iParam1 = ENTITY::_0x6F3068258A499E52(&(uParam2->f_6[iParam3]), func_76(uParam0, iParam3), iParam4);
	}
	else if (ENTITY::_0x1FF441D7954F8709(*iParam1) && !ENTITY::DOES_ENTITY_EXIST(uParam2[iParam3]))
	{
		(*uParam2)[iParam3] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(*iParam1));
		if (!ENTITY::IS_ENTITY_DEAD(uParam2[iParam3]))
		{
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam2[iParam3]))
	{
		return 1;
	}
	return 0;
}

int func_89(var uParam0)
{
	switch (iLocal_65)
	{
		case 0:
			if (func_39(Global_40.f_8863.f_152, 131072))
			{
				func_178(12, 1);
			}
			else
			{
				func_178(1, 1);
			}
			break;
		case 1:
			if (func_48(Global_35, func_76(uParam0, 0), 75f, 1, 1))
			{
				if (!iLocal_23)
				{
					if (func_88(uParam0, &iLocal_19, &uLocal_28, 0, 7))
					{
						iLocal_23 = 1;
					}
				}
				else if (ENTITY::IS_ENTITY_DEAD(&(uLocal_28[0])) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(&(uLocal_28[0]), Global_35, 1, 1))
				{
					if (TASK::_0x841475AC96E794D1(iLocal_15) && !TASK::_0x0CC36D4156006509(iLocal_15))
					{
						TASK::_0xEEE4829304F93EEE(iLocal_15, 1);
					}
					func_178(2, 1);
				}
			}
			break;
		case 2:
			if (func_78())
			{
				if (func_79(func_209(uParam0, 0)))
				{
					func_178(3, 1);
				}
			}
			break;
		case 3:
			if (!func_78())
			{
				func_40(&(Global_40.f_8863.f_152), 131072);
				func_178(12, 1);
			}
			break;
		case 12:
			return 1;
	}
	return 0;
}

int func_90(var uParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(iLocal_14) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_14, true, 0))
	{
		if (!func_63())
		{
			func_210(Global_35, 0, 0);
			return 1;
		}
	}
	return 0;
}

int func_91(var uParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(iLocal_14) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_14, true, 0))
	{
		uParam0->f_4 = func_4(uParam0);
		uParam0->f_6.f_2 = { func_92(uParam0, uParam0->f_4) };
		if (func_48(Global_35, uParam0->f_6.f_2, 10f, 1, 1))
		{
			if (!func_39(uParam0->f_3, 1))
			{
				func_40(&(uParam0->f_3), 1);
			}
		}
	}
	switch (iLocal_65)
	{
		case 0:
			if ((!func_211(uParam0) || !func_212(uParam0)) || func_213(uParam0))
			{
				return 0;
			}
			func_178(2, 1);
			break;
		case 2:
			AUDIO::SET_AMBIENT_ZONE_STATE(func_65(uParam0), true, true);
			func_178(1, 1);
			break;
		case 1:
			if ((!func_211(uParam0) || !func_212(uParam0)) || func_213(uParam0))
			{
				func_178(7, 1);
				return 0;
			}
			break;
		case 7:
			AUDIO::SET_AMBIENT_ZONE_STATE(func_65(uParam0), false, true);
			func_178(0, 1);
			break;
		case 12:
			return 1;
	}
	return 0;
}

Vector3 func_92(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case -780455182:
			return func_76(uParam0, 1);
		case -1614148516:
			return func_76(uParam0, 0);
		case 2134589549:
			return func_76(uParam0, 0);
		case 373034311:
			return func_76(uParam0, 0);
		case -1887999095:
		case -1636964661:
		case -1287911066:
		case -415839138:
		case 429544447:
		case 1519228573:
		case 1982045664:
			return func_164(uParam0, 0);
		case -1300082860:
			return 365.725f, -15.4104f, 110.5399f;
		case -1958832660:
			return 1591.863f, -1845.292f, 65.196f;
		case 247563739:
			return 2450.049f, 2104.19f, 173.9434f;
		case 1861313914:
			return 894.6589f, -1969.363f, 44.554f;
		case 1734766691:
			return -270.2353f, 114.9477f, 62.751f;
		case 58958195:
			return -2565.258f, 756.6277f, 153.3524f;
		case 308500632:
			return -2664.789f, 690.7282f, 185.3162f;
		case -739986731:
			return -2904.952f, -254.2731f, 186.965f;
		case 1986618633:
			return -4688.022f, -3419.115f, 17.2107f;
		case -986176781:
			return -2774.109f, -431.3145f, 174.3467f;
		case -232974724:
			return 189.6525f, -414.4084f, 87.8956f;
		case -1053108445:
			return -4346.388f, -2604.249f, -1.1693f;
		case 1673499939:
			return 2476.001f, 1997.824f, 167.269f;
		case -709811179:
			return 2291.568f, 2080.932f, 200.7657f;
		case -979575591:
			return -2937.443f, -138.5504f, 199.3164f;
		case -1609238411:
			return 3220.522f, 1463.278f, 52.9448f;
		case 921081956:
			return 2417.172f, -738.7664f, 42.3038f;
		case -148407339:
			return -1732.145f, 2191.086f, 293.2867f;
		case -1109016944:
			return 1733.116f, -424.945f, 48.4327f;
		case -1646022773:
			return 2148.987f, 1918.443f, 194.4452f;
		case 1284679164:
			return 2782.746f, 536.9514f, 72.1612f;
		case -1505275983:
			return 947.541f, 238.4814f, 127.5118f;
		case -1761189332:
			return 703.7369f, 427.9747f, 108.3372f;
		case -2009137002:
			return 1260.331f, 1296.422f, 217.8313f;
		case -1787770845:
			return -1915.618f, -30.6525f, 287.4662f;
		case -161804536:
			return 2388.642f, 1690.187f, 95.5056f;
		case -1891628345:
			return -2694.149f, -1499.7f, 150.6036f;
		case -1960242214:
			return 749.9653f, 1825.082f, 240.1131f;
		case 1034793488:
			return 1705.885f, -1006.939f, 43.8407f;
		case -849582265:
			return -2588.29f, -93.565f, 167.61f;
		case 657666087:
			return -1749.065f, -1624.292f, 90.1441f;
		case -607940493:
			return 2698.995f, 410.8617f, 77.4735f;
		case 2000209669:
			if (iParam1 == 11)
			{
				return func_100(uParam0, 11);
			}
			else
			{
				return func_100(uParam0, 7);
			}
			break;
		case -1272862985:
			switch (iParam1)
			{
				case 0:
					return 2135.355f, 1069.851f, 122.7836f;
				case 1:
					return 2150.689f, 1124.094f, 130.4564f;
				case 2:
					return 2210.914f, 1134.496f, 141.0999f;
				case 3:
					return 2251.706f, 1198.574f, 121.7253f;
				default:
					break;
			}
			Jump @2418; //curOff = 1102
			switch (iParam1)
			{
				case 0:
					return -2693.879f, -402.3976f, 148.1729f;
				case 1:
					return -2687.993f, -402.3363f, 148.3894f;
				case 2:
					return -2686.917f, -410.486f, 148.4376f;
				case 3:
					return -2694.168f, -412.4018f, 148.8531f;
				case 4:
					return -2697.285f, -408.3287f, 149.3549f;
				default:
					break;
			}
			Jump @2418; //curOff = 1236
			switch (iParam1)
			{
				case 0:
					return 1478.761f, -1831.449f, 52.0191f;
				case 1:
					return 1487.726f, -1822.523f, 53.4034f;
				case 2:
					return 1501.093f, -1813.105f, 53.2804f;
				case 3:
					return 1520.822f, -1805.398f, 52.6965f;
				default:
					break;
			}
			Jump @2418; //curOff = 1346
			switch (iParam1)
			{
				case 0:
					return -941.5482f, 1011.45f, 198.416f;
				case 1:
					return -490.2726f, 1355.536f, 205.7345f;
				case 2:
					return 299.3675f, 1795.301f, 197.5344f;
				case 3:
					return 1884.704f, 1927.334f, 249.5903f;
				case 4:
					return 2549.506f, 1624.281f, 93.5729f;
				case 5:
					return 2489.881f, 1375.156f, 107.1609f;
				case 6:
					return 2657.062f, 1286.715f, 117.8777f;
				case 7:
					return 2577.385f, 1161.844f, 158.058f;
				case 8:
					return 2342.925f, 844.4003f, 82.3675f;
				case 9:
					return 1698.323f, 719.6797f, 125.0664f;
				case 10:
					return 1986.145f, -208.0823f, 51.4904f;
				case 11:
					return 1263.596f, 528.7397f, 88.8471f;
				case 12:
					return 1626.372f, -0.4718f, 87.7166f;
				case 13:
					return 1562.581f, -219.7309f, 84.4919f;
				case 14:
					return 111.1142f, 639.3316f, 125.9073f;
				case 15:
					return -20.3564f, 217.8298f, 109.194f;
				case 16:
					return 714.7566f, 22.1708f, 154.0224f;
				case 17:
					return -547.9435f, 557.9953f, 104.2689f;
				case 18:
					return -540.1378f, 256.6357f, 44.7136f;
				case 19:
					return -525.3924f, -277.1231f, 62.9066f;
				default:
					break;
			}
			Jump @2418; //curOff = 1840
			return 794.4265f, 1777.108f, 281.0706f;
			if (iParam1 == 0)
			{
				return 794.4265f, 1777.108f, 281.0706f;
			}
			else if (iParam1 == 1)
			{
				return -1277.741f, 2895.727f, 386.2982f;
			}
			else if (iParam1 == 2)
			{
				return 2577.433f, -627.2448f, 42.97695f;
			}
			else if (iParam1 == 3)
			{
				return 2579.389f, -627.8698f, 42.96334f;
			}
			else if (iParam1 == 4)
			{
				return 672.4651f, -974.1768f, 54.4574f;
			}
			else if (iParam1 == 5)
			{
				return -1307.091f, 2468.892f, 309.8042f;
			}
			else if (iParam1 == 6)
			{
				return 1735.903f, -1893.929f, 45.189f;
			}
			else if (iParam1 == 7)
			{
				return 2157.916f, 795.1056f, 156.5394f;
			}
			else if (iParam1 == 8)
			{
				return 514.147f, 1932.534f, 200.2069f;
			}
			Jump @2418; //curOff = 2102
			switch (iParam1)
			{
				case 0:
					return 2826.679f, -1323.043f, 46.43373f;
				case 1:
					return 2736.732f, -1339.335f, 46.65415f;
				case 2:
					return 2698.488f, -1306.194f, 49.48277f;
				case 3:
					return 2773.848f, -1182.319f, 48.53596f;
				case 4:
					return 2820.003f, -1230.709f, 47.52145f;
				default:
					break;
			}
			Jump @2418; //curOff = 2236
			switch (iParam1)
			{
				case 0:
					return -834.465f, -1365.791f, 48.5643f;
				case 1:
					return -781.2938f, -1320.024f, 44.8353f;
				case 2:
					return -729.9185f, -1219.616f, 41.4298f;
				case 3:
					return -773.6366f, -1354.466f, 44.1805f;
				case 4:
					return -756.8423f, -1276.124f, 49.337f;
				case 5:
					return -816.6586f, -1310.757f, 43.2499f;
				default:
					break;
			}
			Jump @2418; //curOff = 2394
			return -353.4487f, -133.7923f, 46.4927f;
			return 0f, 0f, 0f;
		}

void func_93(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	int iVar1;

	uVar0 = func_214();
	func_215(&uVar0, 0, iParam1, iParam2, iParam3, iParam4, 0, 0);
	iVar1 = -1;
	if (func_145(iParam0, &iVar1))
	{
		if (func_216(iVar1) == iParam0)
		{
			func_217(iVar1, iParam0);
			func_218(iVar1, uVar0);
			return;
		}
	}
	else if (iVar1 > -1)
	{
		func_217(iVar1, iParam0);
		func_218(iVar1, uVar0);
		return;
	}
}

bool func_94()
{
	return &Global_1357517;
}

void func_95(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		func_219(uParam0, bParam1, iVar0);
		iVar0++;
	}
}

void func_96(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		func_220(uParam0, bParam1, iVar0);
		iVar0++;
	}
}

void func_97(var uParam0)
{
	func_221(&Local_40);
	func_222(&uLocal_28);
	if ((*uParam0 == -1761578407 || *uParam0 == 404434344) || *uParam0 == 2000209669)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(func_158(uParam0, 0, 0, 0)))
		{
			if (STREAMING::DOES_ANIM_DICT_EXIST(func_158(uParam0, 0, 0, 0)))
			{
				STREAMING::REMOVE_ANIM_DICT(func_158(uParam0, 0, 0, 0));
			}
		}
	}
	if (*uParam0 == 2000209669)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(func_161(uParam0)))
		{
			AUDIO::_0x531A78D6BF27014B(func_161(uParam0));
		}
	}
	if (*uParam0 == -1308658310 || *uParam0 == 221420861)
	{
		STREAMING::REMOVE_PTFX_ASSET();
	}
	if (*uParam0 == -1891628345 || (*uParam0 == -1761578407 && uParam0->f_4 == 6))
	{
		GRAPHICS::_0x9CF1836C03FB67A2(&iLocal_64, 0);
	}
}

bool func_98(int iParam0)
{
	int iVar0;

	iVar0 = func_99(iParam0, 1);
	return (iVar0 >= 0 && iVar0 < 143);
}

int func_99(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2108030724:
			return 138;
		case -2060865802:
			return 116;
		case -2019711818:
			return 9;
		case -2009137002:
			return 34;
		case -2008558277:
			return 59;
		case -1960242214:
			return 125;
		case -1958832660:
			return 49;
		case -1923503631:
			return 117;
		case -1891628345:
			return 124;
		case -1887999095:
			return 89;
		case -1882503209:
			return 50;
		case -1859413640:
			return 28;
		case -1859023693:
			return 64;
		case -1848895400:
			return 113;
		case -1841331114:
			return 94;
		case -1829339703:
			return 141;
		case -1824429070:
			return 66;
		case -1787770845:
			return 16;
		case -1761578407:
			return 17;
		case -1761189332:
			return 115;
		case -1714262909:
			return 76;
		case -1686810506:
			return 112;
		case -1646022773:
			return 13;
		case -1636964661:
			return 10;
		case -1614148516:
			return 48;
		case -1609238411:
			return 21;
		case -1568839185:
			return 6;
		case -1505275983:
			return 31;
		case -1494823099:
			return 61;
		case -1481450947:
			return 53;
		case -1457751321:
			return 123;
		case -1427565340:
			return 47;
		case -1420566543:
			return 23;
		case -1308658310:
			return 45;
		case -1300082860:
			return 51;
		case -1287911066:
			return 2;
		case -1283611369:
			return 78;
		case -1272862985:
			return 139;
		case -1243267511:
			return 81;
		case -1240932004:
			return 140;
		case -1208846034:
			return 24;
		case -1177787273:
			return 127;
		case -1144800837:
			return 111;
		case -1109016944:
			return 15;
		case -1084929085:
			return 4;
		case -1061274876:
			return 96;
		case -1053108445:
			return 84;
		case -986176781:
			return 25;
		case -979575591:
			return 103;
		case -968854939:
			return 68;
		case -920971071:
			return 83;
		case -919236330:
			return 79;
		case -890175011:
			return 137;
		case -849582265:
			return 92;
		case -834293086:
			return 91;
		case -780455182:
			return 8;
		case -777592153:
			return 3;
		case -777150535:
			return 100;
		case -763376358:
			return 55;
		case -739986731:
			return 110;
		case -715636193:
			return 95;
		case -709811179:
			return 20;
		case -654238687:
			return 104;
		case -641229542:
			return 46;
		case -607940493:
			return 118;
		case -599506500:
			return 38;
		case -544327665:
			return 106;
		case -499529359:
			return 74;
		case -490142739:
			return 130;
		case -415839138:
			return 98;
		case -409986722:
			return 88;
		case -357364973:
			return 44;
		case -321841939:
			return 11;
		case -261997819:
			return 37;
		case -232974724:
			return 135;
		case -161804536:
			return 29;
		case -148407339:
			return 97;
		case -35775921:
			return 40;
		case -30872859:
			return 30;
		case -657632:
			return 114;
		case 0:
			return 143;
		case 58958195:
			return 72;
		case 74587361:
			return 35;
		case 118535038:
			return 101;
		case 149709049:
			return 67;
		case 173549940:
			return 22;
		case 221420861:
			return 132;
		case 230001763:
			return 107;
		case 233600584:
			return 54;
		case 247563739:
			return 52;
		case 308500632:
			return 136;
		case 330993088:
			return 131;
		case 373034311:
			return 0;
		case 397377585:
			return 87;
		case 404434344:
			return 18;
		case 425000526:
			return 75;
		case 429544447:
			return 93;
		case 435290930:
			return 60;
		case 464413478:
			return 128;
		case 503180747:
			return 19;
		case 513110082:
			return 121;
		case 657666087:
			return 70;
		case 677950956:
			return 142;
		case 683269210:
			return 134;
		case 733338689:
			return 32;
		case 870958936:
			return 1;
		case 918206817:
			return 82;
		case 921081956:
			return 108;
		case 939555152:
			return 27;
		case 949011950:
			return 109;
		case 1034793488:
			return 33;
		case 1048086072:
			return 26;
		case 1091556515:
			return 122;
		case 1120968795:
			return 105;
		case 1124200691:
			return 43;
		case 1154568952:
			return 12;
		case 1187689415:
			return 126;
		case 1187917501:
			return 71;
		case 1284679164:
			return 85;
		case 1335921989:
			return 58;
		case 1342653896:
			return 69;
		case 1347913620:
			return 5;
		case 1351526287:
			return 86;
		case 1424723727:
			return 39;
		case 1431862613:
			return 80;
		case 1464664327:
			return 129;
		case 1490223565:
			return 57;
		case 1505050944:
			return 77;
		case 1519228573:
			return 42;
		case 1519472817:
			return 63;
		case 1535254161:
			return 133;
		case 1673499939:
			return 99;
		case 1734766691:
			return 65;
		case 1801731633:
			return 56;
		case 1833243216:
			return 102;
		case 1861313914:
			return 62;
		case 1937333853:
			return 7;
		case 1982045664:
			return 90;
		case 1986618633:
			return 119;
		case 2000209669:
			return 120;
		case 2072029413:
			return 36;
		case 2072069278:
			return 73;
		case 2134589549:
			return 14;
		case 2135153015:
			return 41;
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

Vector3 func_100(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case 2000209669:
			if (iParam1 == 0)
			{
				return 827.9519f, 1925.23f, 258.7208f;
			}
			else if (iParam1 == 1)
			{
				return 832.673f, 1922.286f, 258.7208f;
			}
			else if (iParam1 == 2)
			{
				return 829.6969f, 1926.987f, 258.7208f;
			}
			else if (iParam1 == 3)
			{
				return 832.1583f, 1926.718f, 258.7208f;
			}
			else if (iParam1 == 4)
			{
				return 828.2374f, 1922.771f, 258.7208f;
			}
			else if (iParam1 == 5)
			{
				return 830.3385f, 1921.46f, 258.7208f;
			}
			else if (iParam1 == 6)
			{
				return 833.4829f, 1924.626f, 258.7208f;
			}
			else if (iParam1 == 7)
			{
				return 830.591f, 1924.07f, 258.795f;
			}
			else if (iParam1 == 11)
			{
				return -160.9032f, 1599.633f, 180.2413f;
			}
			break;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_101(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case -1859413640:
			return 2195.23f, -554.23f, 40.86f;
		case -1481450947:
			return 1268.257f, -387.328f, 88.459f;
		case -1427565340:
			return 2255.135f, -754.127f, 41.793f;
		case -1887999095:
			return 1772.964f, -1359.736f, 44.18f;
		case 2000209669:
			return 830.53f, 1923.9f, 258.33f;
		case -161804536:
			return 2385.593f, 1696.987f, 94.94f;
		case 733338689:
			return 2388.11f, 1688.02f, 94.66f;
		case 2135153015:
			return -161.88f, 1734.6f, 169.73f;
		case 2072029413:
			return 808.47f, 2300.12f, 250.82f;
		case 1464664327:
			switch (iParam1)
			{
				case 0:
					return 1182.68f, 2036.35f, 322.98f;
				case 1:
					return 1227.191f, 2007.389f, 319.3389f;
			}
			break;
		case 513110082:
			switch (iParam1)
			{
				case 0:
					return -2532.075f, 1173.143f, 224.93f;
				case 1:
					return 3028.165f, 1781.019f, 83.127f;
				case 2:
					return -4394.824f, -2159.366f, 47.3844f;
				default:
					break;
			}
			Jump @652; //curOff = 402
			switch (iParam1)
			{
				case 0:
					return 2783.187f, 532.9774f, 70.28662f;
				case 1:
					return 2783.885f, 534.9501f, 70.2896f;
				case 2:
					return 2784.209f, 532.77f, 70.28524f;
				case 3:
					return 2782.702f, 535.7864f, 70.28931f;
				default:
					break;
			}
			Jump @652; //curOff = 512
			switch (iParam1)
			{
				case 0:
					return -1518.81f, 533.46f, 101.45f;
				case 1:
					return 1251.4f, 1165.7f, 149.09f;
				case 2:
					return -150.285f, 1498.717f, 114.935f;
				case 3:
					return 2939.35f, 1422.56f, 44.58f;
				case 4:
					return 1973.787f, 1192.337f, 170.517f;
				default:
					break;
			}
			return 0f, 0f, 0f;
		}

int func_102()
{
	return Global_1572887->f_12;
}

int func_103(int iParam0, bool bParam1)
{
	switch (func_223(iParam0))
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

void func_104(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 && !func_33(*iParam0))
	{
		*iParam0 = 0;
		return;
	}
	iVar0 = func_116(*iParam0);
	if (((*Global_1945938)[iVar0 /*18*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && iParam2)
	{
		*iParam0 = 0;
		return;
	}
	func_224(iVar0);
	*iParam0 = 0;
}

void func_105(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;

	if (*uParam0 == 404434344)
	{
		vVar0 = { 796.1158f, 1777.652f, 281.4886f };
		vVar3 = { 0f, 0f, -74.42887f };
		vVar6 = { 2.5f, 3f, 5f };
		if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_6.f_9))
		{
			uParam0->f_6.f_9 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar0, vVar3, vVar6, func_195(uParam0));
		}
	}
	else if (*uParam0 == -1761578407)
	{
		if (uParam0->f_4 == 0)
		{
			vVar0 = { 796.1158f, 1777.652f, 281.4886f };
			vVar3 = { 0f, 0f, -74.42887f };
			vVar6 = { 2.5f, 3f, 5f };
		}
		else if (uParam0->f_4 == 1)
		{
			vVar0 = { -1279.247f, 2896.268f, 386.576f };
			vVar3 = { 0f, 0f, -21.05487f };
			vVar6 = { 2.5f, 3f, 5f };
		}
		else if (uParam0->f_4 == 2)
		{
			vVar0 = { 2576.871f, -628.9302f, 42.2934f };
			vVar3 = { 0f, 0f, -110.7924f };
			vVar6 = { 2.5f, 1.61286f, 5f };
		}
		else if (uParam0->f_4 == 3)
		{
			vVar0 = { 2578.758f, -629.6465f, 42.2934f };
			vVar3 = { 0f, 0f, -110.7924f };
			vVar6 = { 2.5f, 1.61286f, 5f };
		}
		else if (uParam0->f_4 == 4)
		{
			vVar0 = { 673.9809f, -974.8455f, 54.0894f };
			vVar3 = { 0f, 0f, -23.06569f };
			vVar6 = { 2.5f, 3f, 5f };
		}
		else if (uParam0->f_4 == 5)
		{
			vVar0 = { -1305.871f, 2468.329f, 309.4034f };
			vVar3 = { 0f, 0f, -21.05487f };
			vVar6 = { 2.5f, 3f, 5f };
		}
		else if (uParam0->f_4 == 6)
		{
			vVar0 = { 1734.58f, -1895.353f, 45.189f };
			vVar3 = { 0f, 0f, -41.82871f };
			vVar6 = { 2.5f, 3f, 5f };
		}
		else if (uParam0->f_4 == 7)
		{
			vVar0 = { 2155.717f, 794.849f, 156.1776f };
			vVar3 = { 0f, 0f, 280f };
			vVar6 = { 2.5f, 3f, 5f };
		}
		else if (uParam0->f_4 == 8)
		{
			vVar0 = { 512.7686f, 1932.379f, 199.7092f };
			vVar3 = { 0f, 0f, -2.622487f };
			vVar6 = { 2.5f, 3f, 5f };
		}
		if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_6.f_9))
		{
			uParam0->f_6.f_9 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar0, vVar3, vVar6, func_195(uParam0));
		}
	}
	else if ((*uParam0 == -1243267511 || *uParam0 == 1535254161) || *uParam0 == -607940493)
	{
		if (*uParam0 == -1243267511)
		{
			vVar0 = { -2691.41f, -407.6143f, 146.533f };
			vVar3 = { 0f, 0f, 0f };
			vVar6 = { 5f, 5f, 5f };
		}
		else if (*uParam0 == 1535254161)
		{
			vVar0 = { 1503.231f, -1819.476f, 56.89473f };
			vVar3 = { 0f, 0f, 31.7625f };
			vVar6 = { 44.60546f, 27.38259f, 6f };
		}
		else if (*uParam0 == -607940493)
		{
			vVar0 = { 2704.939f, 435.9636f, 91.37785f };
			vVar3 = { 0f, 0f, -54.20028f };
			vVar6 = { 3.346154f, 3.339972f, 8.648747f };
		}
		if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_6.f_9))
		{
			if (*uParam0 == -607940493)
			{
				uParam0->f_6.f_9 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar0, vVar3, vVar6, func_195(uParam0));
			}
			else
			{
				uParam0->f_6.f_9 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar0, vVar3, vVar6, func_195(uParam0));
			}
		}
	}
	else if (*uParam0 == -890175011)
	{
		if (uParam0->f_4 == 0)
		{
			vVar0 = { 2825.817f, -1322.569f, 45.7557f };
			vVar3 = { 0f, 0f, -40.04137f };
			vVar6 = { 1.479112f, 3.339972f, 8.648747f };
		}
		else if (uParam0->f_4 == 1)
		{
			vVar0 = { 2736.975f, -1340.535f, 46.51682f };
			vVar3 = { 0f, 0f, -44.91362f };
			vVar6 = { 1.006241f, 1.334083f, 4.408258f };
		}
		else if (uParam0->f_4 == 3)
		{
			vVar0 = { 2773.553f, -1183.345f, 48.74084f };
			vVar3 = { 0f, 0f, -23.65903f };
			vVar6 = { 1.282358f, 0.740535f, 5.648747f };
		}
		else if (uParam0->f_4 == 4)
		{
			vVar0 = { 2821.369f, -1229.302f, 46.5088f };
			vVar3 = { 0f, 0f, -34.54109f };
			vVar6 = { 3.346154f, 3.339972f, 8.648747f };
		}
		if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_6.f_9))
		{
			uParam0->f_6.f_9 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar0, vVar3, vVar6, func_195(uParam0));
		}
	}
	else if (*uParam0 == 677950956)
	{
		if (uParam0->f_4 == 1)
		{
			vVar0 = { -781.6985f, -1321.918f, 42.8842f };
			vVar3 = { 0f, 0f, -90.32019f };
			vVar6 = { 3.080742f, 6.954088f, 8.648747f };
		}
		else if (uParam0->f_4 == 5)
		{
			vVar0 = { -816.7859f, -1313.109f, 44.64705f };
			vVar3 = { 0f, 0f, -89.95428f };
			vVar6 = { 2.607229f, 7.43211f, 4.408258f };
		}
		if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_6.f_9))
		{
			uParam0->f_6.f_9 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar0, vVar3, vVar6, func_195(uParam0));
		}
	}
}

bool func_106(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_107(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_176() - fParam1);
	func_225(uParam0, 1);
	func_226(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_108(var uParam0)
{
	return func_106(*uParam0, 2);
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

int func_110(var uParam0)
{
	switch (*uParam0)
	{
		case -1300082860:
			if (func_48(Global_35, func_76(uParam0, 0), 3f, 1, 1))
			{
				return 1;
			}
			break;
		case -890175011:
			if (((uParam0->f_4 == 0 || uParam0->f_4 == 1) || uParam0->f_4 == 3) || uParam0->f_4 == 4)
			{
				if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_6.f_9) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_6.f_9, true, 0))
				{
					return 1;
				}
			}
			break;
		case 677950956:
			if (uParam0->f_4 == 1 || uParam0->f_4 == 5)
			{
				if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_6.f_9) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_6.f_9, true, 0))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_111(var uParam0, int iParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return 0;
	}
	if (!func_227(iParam1, 1))
	{
		if (PED::IS_PED_IN_COMBAT(Global_35, 0))
		{
			return 0;
		}
		if (TASK::_0xC8B29D18022EA2B7(Global_35))
		{
			return 0;
		}
	}
	if (TASK::IS_PED_BEING_ARRESTED(Global_35))
	{
		return 0;
	}
	if (!func_227(iParam1, 2) && !func_228())
	{
		return 0;
	}
	if (!func_227(iParam1, 4) && !func_229())
	{
		return 0;
	}
	if (!func_227(iParam1, 128) && !func_230())
	{
		return 0;
	}
	if (!func_227(iParam1, 2048) && !func_231(0))
	{
		return 0;
	}
	if (!func_227(iParam1, 32) && !func_232(iParam1))
	{
		return 0;
	}
	if (!func_227(iParam1, 64) && !func_233())
	{
		return 0;
	}
	if (!func_227(iParam1, 256) && CAM::IS_CINEMATIC_CAM_RENDERING())
	{
		return 0;
	}
	if (!func_227(iParam1, 512))
	{
		if (PED::_0xD5FE956C70FF370B(Global_35))
		{
			return 0;
		}
	}
	if (!func_227(iParam1, 1024))
	{
		if (PED::IS_PED_IN_COVER(Global_35, 0, 1))
		{
			return 0;
		}
	}
	if (CAM::_0x1204EB53A5FBC63D())
	{
		return 0;
	}
	if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1))
	{
		return 0;
	}
	else if (func_234(Global_35, 1369124074))
	{
		return 0;
	}
	else if (func_234(Global_35, 713668775))
	{
		return 0;
	}
	return 1;
}

bool func_112(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

int func_113(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_235(iVar0, 2))
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
				func_236(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}

void func_114(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam3 && !func_33(iParam0))
	{
		return;
	}
	iVar0 = func_116(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam1, iParam2);
}

void func_115(int iParam0)
{
	int iVar0;

	if (!func_33(iParam0))
	{
		return;
	}
	iVar0 = func_116(iParam0);
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_SET_GROUP(((*Global_1945938)[iVar0 /*18*/])->f_3, 1710353528, 0);
	}
}

int func_116(int iParam0)
{
	return iParam0;
}

bool func_117(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_33(iParam0))
	{
		return false;
	}
	iVar0 = func_116(iParam0);
	if (HUD::_0xCD072523791DDC1B(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_118(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		if (((*Global_1945938)[iParam0 /*18*/])->f_5 == 5 && !func_235(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, 0);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
		}
	}
}

int func_119(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1280505101;
		case 1:
			return 437457038;
		case 2:
			return 787823186;
		case 3:
			return -22914651;
		case 4:
			return -207797345;
		case 5:
			return 152333965;
		case 6:
			return -705591224;
		case 7:
			return -307775564;
		case 8:
			return -1166159519;
		case 9:
			return -164804701;
		case 10:
			return -1562042092;
		case 11:
			return -1717629304;
		case 12:
			return -1669917636;
		case 13:
			return -884608551;
		case 14:
			return -1143188730;
		case 15:
			return 1856092306;
		case 16:
			return 1445824426;
		case 17:
			return -2082446577;
		case 18:
			return 2030128465;
		case 19:
			return -597126414;
		default:
			break;
	}
	return 0;
}

int func_120(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -780455182:
			return 1614617630;
		case -1287911066:
			return -617882357;
		case -1636964661:
			return 1599532233;
		case -1646022773:
			return -65357919;
		case 2134589549:
			return 2004715705;
		case -1109016944:
			return -1451193020;
		case 308500632:
			return 1553391542;
		case -709811179:
			return 317656811;
		case -1609238411:
			return 1910189712;
		case -986176781:
			return -1896654834;
		case -161804536:
			return -126421233;
		case -2009137002:
			return -440810089;
		case 1519228573:
			return -703551507;
		case -1614148516:
			return -1705330644;
		case -1958832660:
			return -245016475;
		case -1300082860:
			return 1529964155;
		case 247563739:
			return 325616917;
		case 1861313914:
			return 1067266077;
		case 1734766691:
			return 1292039078;
		case 657666087:
			return -1721762433;
		case 58958195:
			return 712585684;
		case -1243267511:
			return -1482291365;
		case -1053108445:
			return -1576735250;
		case 1982045664:
			return -1173476934;
		case -849582265:
			return 2097588565;
		case 429544447:
			return -159963867;
		case -148407339:
			return -1155213091;
		case -415839138:
			return 979428630;
		case 1673499939:
			return -720689005;
		case -979575591:
			return 463289412;
		case 921081956:
			return 731487006;
		case -739986731:
			return 371066;
		case -1761189332:
			return 270899202;
		case -607940493:
			return 894739389;
		case 1986618633:
			return -2113673964;
		case -1891628345:
			return -804420153;
		case -1960242214:
			return 1747567809;
		case -232974724:
			return -792295257;
		case 1535254161:
			return -452661064;
		case -1505275983:
			return 387715582;
		case 1284679164:
			return -1245190585;
		case -1787770845:
			return 422665644;
		case -1887999095:
			return -95543768;
		case 1034793488:
			return 120200140;
		case 2000209669:
			switch (iParam1)
			{
				case 11:
					return -615993722;
				default:
					break;
			}
			return -866955093;
		case -1272862985:
			switch (iParam1)
			{
				case 0:
					return 493724241;
				case 1:
					return 1378917331;
				case 2:
					return -1267048347;
				case 3:
					return 1840337620;
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_121()
{
	if (func_102() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == joaat("player_zero"))
	{
		return 1;
	}
	return 0;
}

int func_122(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == 1)
	{
		switch (iParam0)
		{
			case -321841939:
				return -1099171777;
			case -1958832660:
				return 443793586;
			case 247563739:
				return -1240692636;
			case -1300082860:
				return 3075517;
			case -1287911066:
				return 1336990636;
			case 1861313914:
				return 1964547316;
			case 1734766691:
				return -460989844;
			case 657666087:
				return -1735207738;
			case 1535254161:
				return -1018340507;
			case 58958195:
				return 1699788918;
			case -1109016944:
				return -764076835;
			case -780455182:
				return -1048196910;
			case -1636964661:
				return 276159606;
			case -2009137002:
				return -1450540639;
			case -1243267511:
				return 595762271;
			case -1053108445:
				return 1411852139;
			case -1646022773:
				return 2104695167;
			case 1284679164:
				return 899380023;
			case 2134589549:
				return -1051688219;
			case -1787770845:
				return -936503465;
			case -1887999095:
				return -1387877395;
			case 1519228573:
				return 133231560;
			case 1982045664:
				return -123431304;
			case 308500632:
				return -2009629516;
			case -849582265:
				return 1042178190;
			case 429544447:
				return -462983094;
			case -148407339:
				return -1419041917;
			case -415839138:
				return -1547870200;
			case -709811179:
				return 1008388265;
			case 1673499939:
				return 841815548;
			case -979575591:
				return -1736624325;
			case -1609238411:
				return 1333773802;
			case 921081956:
				return -2119790235;
			case -739986731:
				return 1437695839;
			case 1034793488:
				return -1324667819;
			case -1614148516:
				return 344894142;
			case -1761189332:
				return -1509887801;
			case -607940493:
				return 907274245;
			case 1986618633:
				return -261392068;
			case -161804536:
				return -2101238167;
			case 2000209669:
				if (iParam2 == 11)
				{
					return 664846144;
				}
				else
				{
					return 470395879;
				}
				break;
			case -232974724:
				return 1671677748;
			case -1272862985:
				if (iParam2 == 0)
				{
					return 306789431;
				}
				else if (iParam2 == 1)
				{
					return -648356304;
				}
				else if (iParam2 == 2)
				{
					return -1016027240;
				}
				else if (iParam2 == 3)
				{
					return 98524525;
				}
				break;
			case -1891628345:
				return -244494475;
			case -1960242214:
				return 1312605337;
			case -1505275983:
				return 1963540825;
			case -890175011:
				if (iParam2 == 0)
				{
					return -421616371;
				}
				else if (iParam2 == 1)
				{
					return 1136001003;
				}
				else if (iParam2 == 2)
				{
					return 345827951;
				}
				else if (iParam2 == 3)
				{
					return 1234082698;
				}
				else if (iParam2 == 4)
				{
					return -871261476;
				}
				break;
			case -986176781:
				return 1496143424;
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case -321841939:
				return -1967056269;
			case -1958832660:
				return -648759467;
			case 247563739:
				return 255109463;
			case -1300082860:
				return 383250899;
			case 677950956:
				if (iParam2 == 0)
				{
					return -73611983;
				}
				else if (iParam2 == 1)
				{
					return -1198691744;
				}
				else if (iParam2 == 2)
				{
					return 1983661621;
				}
				else if (iParam2 == 3)
				{
					return -1513446044;
				}
				else if (iParam2 == 4)
				{
					return -928373393;
				}
				else if (iParam2 == 5)
				{
					return -1085802945;
				}
				break;
			case -1287911066:
				return -1174358134;
			case 1734766691:
				return 591206754;
			case 657666087:
				return 732639128;
			case 1535254161:
				return -1087659594;
			case 58958195:
				return 2146731777;
			case -1109016944:
				return 1545716728;
			case -780455182:
				return -1852987413;
			case -1636964661:
				return -869178017;
			case -2009137002:
				return -1814020955;
			case -1243267511:
				return 2132597694;
			case -1053108445:
				return 174557649;
			case -1646022773:
				return 2146742726;
			case 1284679164:
				return -1071111037;
			case 2134589549:
				return -34990673;
			case -1787770845:
				return -166634067;
			case -1887999095:
				return -291947039;
			case 1519228573:
				return -1480640586;
			case 1982045664:
				return 1720275147;
			case 308500632:
				return -662282713;
			case -849582265:
				return -1815546802;
			case 429544447:
				return 1059199814;
			case -148407339:
				return -926136175;
			case -415839138:
				return -396787177;
			case -709811179:
				return -1049062461;
			case 1673499939:
				return -1917407050;
			case -979575591:
				return -1821865947;
			case -1609238411:
				return 364371639;
			case 921081956:
				return -1267601737;
			case -739986731:
				return -1045962986;
			case 1034793488:
				return -1911908440;
			case -1614148516:
				return 408494028;
			case -1761189332:
				return 1049962829;
			case -607940493:
				return -1306230772;
			case 1986618633:
				return -1172234904;
			case -161804536:
				return 684380081;
			case 2000209669:
				if (iParam2 == 11)
				{
					return 2070016093;
				}
				else
				{
					return -871264392;
				}
				break;
			case -232974724:
				return 1876202217;
			case -1272862985:
				if (iParam2 == 0)
				{
					return 1896812829;
				}
				else if (iParam2 == 1)
				{
					return 1453616421;
				}
				else if (iParam2 == 2)
				{
					return 748324258;
				}
				else if (iParam2 == 3)
				{
					return -319332707;
				}
				break;
			case -1891628345:
				return 1447580982;
			case -1960242214:
				return 556103947;
			case -1505275983:
				return 767041924;
			case -986176781:
				return 252093804;
			case -890175011:
				if (iParam2 == 0)
				{
					return 1861008860;
				}
				else if (iParam2 == 1)
				{
					return 1746563727;
				}
				else if (iParam2 == 2)
				{
					return 508009009;
				}
				else if (iParam2 == 3)
				{
					return -788581731;
				}
				else if (iParam2 == 4)
				{
					return -209526346;
				}
				break;
			default:
				break;
		}
	}
	return 0;
}

int func_123(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_122(iParam0, 1, iParam1);
	if (!HUD::_JOURNAL_CAN_WRITE_ENTRY(iVar0))
	{
		return iVar0;
	}
	iVar0 = func_122(iParam0, 0, iParam1);
	if (!HUD::_JOURNAL_CAN_WRITE_ENTRY(iVar0))
	{
		return iVar0;
	}
	return 0;
}

void func_124(int iParam0, int iParam1)
{
	HUD::_JOURNAL_WRITE_ENTRY(iParam0);
	if (iParam1 == 1)
	{
		func_237(1);
	}
}

int func_125()
{
	int iVar0;

	iVar0 = 0;
	if (func_39(Global_40.f_8863.f_154, 2048))
	{
		iVar0++;
	}
	if (func_39(Global_40.f_8863.f_154, 4096))
	{
		iVar0++;
	}
	if (func_39(Global_40.f_8863.f_154, 8192))
	{
		iVar0++;
	}
	if (func_39(Global_40.f_8863.f_154, 16384))
	{
		iVar0++;
	}
	if (func_39(Global_40.f_8863.f_154, 32768))
	{
		iVar0++;
	}
	return iVar0;
}

int func_126()
{
	int iVar0;

	if (!func_238(-569063887, 1, 0))
	{
		HUD::_0xBFFF81E12A745A5F();
		return 0;
	}
	if (!func_239(16))
	{
		HUD::_0xBFFF81E12A745A5F();
		return 0;
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_35) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 108107462))
	{
		return 0;
	}
	if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1) || func_234(Global_35, 1369124074))
	{
		return 0;
	}
	if ((((((PAD::IS_CONTROL_JUST_PRESSED(0, -473983589) || PAD::IS_CONTROL_JUST_PRESSED(0, -719620017)) || PAD::IS_CONTROL_JUST_PRESSED(0, 1367437629)) || PAD::IS_CONTROL_JUST_PRESSED(0, 992265328)) || PAD::IS_CONTROL_JUST_PRESSED(0, -1053137564)) || PAD::IS_CONTROL_JUST_PRESSED(0, 129547951)) || PAD::IS_CONTROL_JUST_PRESSED(0, -1300031296))
	{
		return 0;
	}
	iVar0 = -569063887; /* GXTEntry: "Journal" */
	if (INVENTORY::_0x3D10D7179D7034AF(func_240(0), iVar0, 0))
	{
		return 0;
	}
	Global_36619 = MISC::GET_GAME_TIMER() + 1000;
	func_241();
	PAD::DISABLE_CONTROL_ACTION(0, -209515122, false);
	TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iVar0, 1928812891, 1, 0, -1082130432);
	return 1;
}

void func_127(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_128()
{
	return 1;
	if (Global_1572887->f_12 == 0)
	{
		return 1;
	}
	return Global_40.f_1;
}

void func_129(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_130(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_131(int iParam0, var uParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;

	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return 0;
	}
	vVar0 = { VOLUME::_0x3E2A25B2416DD67E(iParam0) };
	uParam1->f_6 = vVar0.y;
	vVar0 = { vVar0 * Vector(0.5f, 0.5f, 0.5f) };
	vVar3 = { VOLUME::_0xF70F00013A62F866(iParam0) };
	vVar6 = { VOLUME::_0x18675BC914891122(iParam0) };
	fVar9 = vVar6.z;
	*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar3, fVar9, -vVar0.x, 0f, -vVar0.z) };
	uParam1->f_3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar3, fVar9, vVar0.x, 0f, vVar0.z) };
	return 1;
}

int func_132(var uParam0)
{
	return uParam0;
}

int func_133(int iParam0)
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

int func_134(int iParam0)
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

void func_135(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
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

	iVar0 = func_242();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_243(iParam0);
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
	if (func_244(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_15())
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
	Global_40.f_11095.f_35 = func_245(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_242();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || iParam7)
	{
		iVar6 = func_246(iVar1);
		func_248(func_247(), 0, 4000);
		func_249(Global_40.f_11095.f_35);
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
		func_250(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_186(func_185(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(iParam5))
			{
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_134(14))
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
					sParam4 = func_251(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_252(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_252(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_186(func_185(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_134(4))
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
					sParam4 = func_251(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_252(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_252(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_185(-1990689970) };
	STATS::STAT_ID_SET_INT(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_0xE6B763C7F4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_253(10, 1);
	}
}

void func_136(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0 /*6*/] = iParam1;
	(Global_1347477->f_155[iParam0 /*6*/])->f_2 = iParam2;
	(Global_1347477->f_155[iParam0 /*6*/])->f_3 = iParam3;
	(Global_1347477->f_155[iParam0 /*6*/])->f_4 = iParam4;
	(Global_1347477->f_155[iParam0 /*6*/])->f_5 = bParam5;
	(Global_1347477->f_155[iParam0 /*6*/])->f_1 = MISC::GET_GAME_TIMER() + 500;
}

float func_137(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

int func_138()
{
	if (func_54(932909855))
	{
		return 1;
	}
	return 0;
}

int func_139()
{
	if (func_54(2051822093))
	{
		return 1;
	}
	return 0;
}

int func_140(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_254(((*Global_1835011)[iParam0 /*74*/])->f_1);
}

int func_141()
{
	return Global_0.f_7;
}

int func_142(int iParam0)
{
	if (func_102() != -1)
	{
		return 0;
	}
	if (!func_255(iParam0))
	{
		return 0;
	}
	return func_254(((*Global_1347702)[iParam0 /*49*/])->f_15);
}

int func_143(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 1:
			return 4;
		case 2:
			return 8;
		case 3:
			return 16;
		case 4:
			return 32;
		case 5:
			return 64;
		case 6:
			return 128;
		case 7:
			return 256;
		case 8:
			return 512;
		case 9:
			return 1024;
		case 10:
			return 2048;
		case 11:
			return 4096;
		case 12:
			return 8192;
		case 13:
			return 16384;
		case 14:
			return 32768;
		case 15:
			return 65536;
		case 16:
			return 131072;
		case 17:
			return 262144;
		case 18:
			return 524288;
		case 19:
			return 1048576;
		default:
			break;
	}
	return 1;
}

int func_144(int iParam0, int iParam1)
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

int func_145(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (func_216(iVar0) == iParam0)
		{
			*iParam1 = iVar0;
			return 1;
		}
		else if (func_216(iVar0) == -1)
		{
			*iParam1 = iVar0;
			return 0;
		}
	else
	{
		}
		iVar0++;
	}
	*iParam1 = -1;
	return 0;
}

void func_146(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_144(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		MISC::SET_BIT(Global_40.f_283[iVar1], iVar2);
	}
	else
	{
		iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (iVar3 == 255)
		{
			Global_1058888->f_40567.f_46 = 1;
			MISC::SET_BIT(Global_1058888->f_40567.f_14[iVar1], iVar2);
		}
		else
		{
			MISC::SET_BIT(((*Global_1055058)[iVar3 /*116*/])->f_72[iVar1], iVar2);
		}
		MISC::SET_BIT(Global_1058888->f_40567[iVar1], iVar2);
	}
	Global_1934765 = 0;
}

void func_147(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_144(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		MISC::CLEAR_BIT(Global_40.f_283[iVar1], iVar2);
	}
	else
	{
		iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (iVar3 == 255)
		{
			Global_1058888->f_40567.f_46 = 1;
			MISC::CLEAR_BIT(Global_1058888->f_40567.f_14[iVar1], iVar2);
		}
		else
		{
			MISC::CLEAR_BIT(((*Global_1055058)[iVar3 /*116*/])->f_72[iVar1], iVar2);
		}
	}
	Global_1934765 = 0;
}

void func_148()
{
	func_147(-939420910);
	func_147(-1187950766);
	func_147(356365161);
	func_147(753127042);
	func_147(-2038424081);
	func_147(1884271742);
	func_147(459290420);
}

void func_149()
{
	func_147(704802028);
	func_147(588987611);
	func_147(2008888900);
	func_147(1649996811);
	func_147(227918160);
	func_147(168171957);
	func_147(1193080109);
	func_147(-491981251);
	func_147(-639037538);
	func_147(-618620429);
}

int func_150(int iParam0)
{
	if (iParam0 == 0)
	{
		if (func_39(Global_40.f_8863.f_152, 8))
		{
			return 1;
		}
	}
	else if (iParam0 == 1)
	{
		if (func_39(Global_40.f_8863.f_152, 16))
		{
			return 1;
		}
	}
	else if (iParam0 == 2)
	{
		if (func_39(Global_40.f_8863.f_152, 32))
		{
			return 1;
		}
	}
	else if (iParam0 == 3)
	{
		if (func_39(Global_40.f_8863.f_152, 64))
		{
			return 1;
		}
	}
	else if (iParam0 == 4)
	{
		if (func_39(Global_40.f_8863.f_152, 128))
		{
			return 1;
		}
	}
	else if (iParam0 == 5)
	{
		if (func_39(Global_40.f_8863.f_152, 256))
		{
			return 1;
		}
	}
	else if (iParam0 == 6)
	{
		if (func_39(Global_40.f_8863.f_152, 512))
		{
			return 1;
		}
	}
	else if (iParam0 == 7)
	{
		if (func_39(Global_40.f_8863.f_152, 1024))
		{
			return 1;
		}
	}
	else if (iParam0 == 11)
	{
		if (func_39(Global_40.f_8863.f_152, 16384))
		{
			return 1;
		}
	}
	return 0;
}

char* func_151(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return "dis_grz_button_2_on";
			}
			else
			{
				return "dis_grz_button_2_off";
			}
			break;
		case 1:
			if (bParam1)
			{
				return "dis_grz_button_3_on";
			}
			else
			{
				return "dis_grz_button_3_off";
			}
			break;
		case 2:
			if (bParam1)
			{
				return "dis_grz_button_4_on";
			}
			else
			{
				return "dis_grz_button_4_off";
			}
			break;
		case 3:
			if (bParam1)
			{
				return "dis_grz_button_5_on";
			}
			else
			{
				return "dis_grz_button_5_off";
			}
			break;
		case 4:
			if (bParam1)
			{
				return "dis_grz_button_6_on";
			}
			else
			{
				return "dis_grz_button_6_off";
			}
			break;
		case 5:
			if (bParam1)
			{
				return "dis_grz_button_7_on";
			}
			else
			{
				return "dis_grz_button_7_off";
			}
			break;
		case 6:
			if (bParam1)
			{
				return "dis_grz_button_8_on";
			}
			else
			{
				return "dis_grz_button_8_off";
			}
			break;
		case 7:
			if (bParam1)
			{
				return "dis_grz_lid_open";
			}
			else
			{
				return "dis_grz_lid_closed";
			}
			break;
		default:
			break;
	}
	return "";
}

int func_152(char* sParam0, vector3 vParam1, bool bParam4)
{
	int iVar0;

	iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(vParam1);
	if (INTERIOR::IS_VALID_INTERIOR(iVar0))
	{
		if (INTERIOR::IS_INTERIOR_READY(iVar0))
		{
			if (bParam4)
			{
				INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar0, sParam0, 0);
			}
			else
			{
				INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar0, sParam0, 1);
			}
			return 1;
		}
	}
	return 0;
}

char* func_153(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case 1284679164:
			return "van_farmhouse_monster";
		case -1494823099:
			return "scr_shack_jewlerybox";
		case -1308658310:
			switch (iParam1)
			{
				case 0:
					return "m05_mine_collapse_rocks";
				case 1:
					return "m05_mine_explosive";
				default:
					break;
			}
			break;
	}
	return "";
}

void func_154(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;

	if (!VOLUME::_0x92A78D0BEDB332A3(iLocal_14))
	{
		if ((((((*uParam0 == -544327665 || *uParam0 == -1761578407) || *uParam0 == 404434344) || *uParam0 == 1519472817) || *uParam0 == -890175011) || *uParam0 == 677950956) || *uParam0 == -1272862985)
		{
			vVar0 = { func_13(uParam0, uParam0->f_4) };
		}
		else if (TASK::_0x841475AC96E794D1(uParam0->f_1))
		{
			vVar0 = { TASK::_0xA8452DD321607029(uParam0->f_1, 1) };
		}
		if (func_22(vVar0))
		{
		}
		if (((((((((((((((((*uParam0 == 1464664327 || *uParam0 == -232974724) || *uParam0 == 2000209669) || *uParam0 == -1761578407) || *uParam0 == 404434344) || *uParam0 == -890175011) || *uParam0 == 677950956) || *uParam0 == -1614148516) || *uParam0 == 503180747) || *uParam0 == -409986722) || *uParam0 == -2019711818) || *uParam0 == 683269210) || *uParam0 == 1347913620) || *uParam0 == -919236330) || *uParam0 == -1272862985) || *uParam0 == -607940493) || *uParam0 == 1535254161) || *uParam0 == 230001763)
		{
			if (*uParam0 == 1464664327)
			{
				vVar0 = { 1183.872f, 2035.43f, 324.3338f };
				vVar3 = { 0f, 0f, -45.764f };
				vVar6 = { 7.547398f, 4.034004f, 5.6249f };
			}
			else if (*uParam0 == -232974724)
			{
				vVar0 = { 191.2143f, -412.4497f, 86.6615f };
				vVar3 = { 0f, 0f, -31.00864f };
				vVar6 = { 4.507977f, 5.159722f, 5f };
			}
			else if (*uParam0 == 2000209669)
			{
				vVar0 = { 830.6414f, 1924.297f, 259.5716f };
				vVar3 = { 0f, 0f, 0f };
				vVar6 = { 4f, 4f, 4f };
			}
			else if (*uParam0 == -1614148516)
			{
				vVar0 = { 2309.656f, -334.2829f, 42.88904f };
				vVar3 = { 0f, 0f, 0f };
				vVar6 = { 10.73793f, 10.12531f, 10f };
			}
			else if (*uParam0 == -409986722)
			{
				vVar0 = { 1985.943f, -1896.122f, 40.6398f };
				vVar3 = { 0f, 0f, 12.50924f };
				vVar6 = { 6.360533f, 7.521983f, 10f };
			}
			else if (*uParam0 == -2019711818)
			{
				vVar0 = { 47.4897f, 1712.436f, 127.2594f };
				vVar3 = { 0f, 0f, 0f };
				vVar6 = { 13.81293f, 22.37569f, 19.81484f };
			}
			else if (*uParam0 == 683269210)
			{
				vVar0 = { -5576.82f, -2583.934f, -9.5414f };
				vVar3 = { 0f, 0f, 30.53407f };
				vVar6 = { 11.12445f, 7.156734f, 20.90556f };
			}
			else if (*uParam0 == 1347913620)
			{
				vVar0 = { 2452.989f, 291.1053f, 69.5017f };
				vVar3 = { 0f, 0f, 86.66475f };
				vVar6 = { 28.75424f, 25.43092f, 20.90556f };
			}
			else if (*uParam0 == -919236330)
			{
				vVar0 = { -3831.608f, -3004.712f, -7.892179f };
				vVar3 = { 0f, 0f, 0f };
				vVar6 = { 25f, 25f, 6f };
			}
			else if (*uParam0 == -607940493)
			{
				vVar0 = { 2704.939f, 435.9636f, 91.37785f };
				vVar3 = { 0f, 0f, -54.20028f };
				vVar6 = { 3.346154f, 3.339972f, 8.648747f };
			}
			else if (*uParam0 == 1535254161)
			{
				vVar0 = { 1503.231f, -1819.476f, 56.89473f };
				vVar3 = { 0f, 0f, 31.7625f };
				vVar6 = { 44.60546f, 27.38259f, 6f };
			}
			else if (*uParam0 == 230001763)
			{
				vVar0 = { 2133.283f, 145.452f, 75.745f };
				vVar3 = { 0f, 0f, 0f };
				vVar6 = { 6f, 6f, 6f };
			}
			else if (*uParam0 == -1761578407 || *uParam0 == 404434344)
			{
				if (uParam0->f_4 == 9)
				{
					vVar0 = { 895.55f, -1968.068f, 43.71555f };
				}
				else if (uParam0->f_4 == 10)
				{
					vVar0 = { 895.55f, -1968.068f, 43.71555f };
				}
				else if (uParam0->f_4 == 2 || uParam0->f_4 == 3)
				{
					vVar0 = { 2577.819f, -629.2898f, 42.2934f };
					vVar3 = { 0f, 0f, -110.7924f };
					vVar6 = { 3.5f, 5.840896f, 5f };
				}
				else
				{
					return;
				}
			}
			else if (*uParam0 == -890175011)
			{
				vVar3 = { 0f, 0f, 0f };
				vVar6 = { 3f, 3f, 3f };
				if (uParam0->f_4 == 0)
				{
				}
				else if (uParam0->f_4 == 1)
				{
				}
				else if (uParam0->f_4 == 2)
				{
				}
				else if (uParam0->f_4 == 3)
				{
				}
				else if (uParam0->f_4 == 4)
				{
				}
				else
				{
					return;
				}
			}
			else if (*uParam0 == 677950956)
			{
				vVar3 = { 0f, 0f, 0f };
				vVar6 = { 3f, 3f, 3f };
				if (uParam0->f_4 == 0)
				{
				}
				else if (uParam0->f_4 == 1)
				{
				}
				else if (uParam0->f_4 == 2)
				{
				}
				else if (uParam0->f_4 == 3)
				{
				}
				else if (uParam0->f_4 == 4)
				{
				}
				else if (uParam0->f_4 == 5)
				{
				}
				else
				{
					return;
				}
			}
			else if (*uParam0 == 503180747)
			{
				if (uParam0->f_4 == 0)
				{
					vVar0 = { 2325.978f, 1070.32f, 44.9401f };
					vVar3 = { 0f, 0f, 0f };
					vVar6 = { 8.229425f, 7.256244f, 7.642096f };
				}
				else if (uParam0->f_4 == 1)
				{
					vVar0 = { -2698.656f, 697.2829f, 162.889f };
					vVar3 = { 0f, 0f, 42.54451f };
					vVar6 = { 33.55475f, 29.02702f, 6f };
				}
			}
			else if (*uParam0 == -1272862985)
			{
				vVar3 = { 0f, 0f, 0f };
				vVar6 = { 6f, 6f, 6f };
			}
			if ((((((((*uParam0 == 2000209669 || *uParam0 == -890175011) || *uParam0 == 677950956) || *uParam0 == 503180747) || *uParam0 == -2019711818) || *uParam0 == -919236330) || *uParam0 == -1272862985) || *uParam0 == 1535254161) || *uParam0 == 230001763)
			{
				iLocal_14 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar0, vVar3, vVar6, func_256(uParam0));
			}
			else
			{
				iLocal_14 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar0, vVar3, vVar6, func_256(uParam0));
			}
		}
		else
		{
			if (*uParam0 == -321841939)
			{
				vVar0 = { func_92(uParam0, uParam0->f_4) };
				if (uParam0->f_4 == 4 || uParam0->f_4 == 19)
				{
					vVar6 = { 3f, 3f, 5f };
				}
				else if (uParam0->f_4 == 5)
				{
					vVar6 = { 3f, 3f, 7f };
				}
				else
				{
					vVar6 = { 5f, 5f, 5f };
				}
			}
			else if (*uParam0 == -1084929085 || *uParam0 == 330993088)
			{
				vVar6.x = (3f * 6f);
				vVar6.f_1 = (3f * 6f);
				vVar6.f_2 = 6f;
			}
			else if ((*uParam0 == -1891628345 || *uParam0 == 1505050944) || *uParam0 == -1243267511)
			{
				vVar6.x = (2f * 6f);
				vVar6.f_1 = (2f * 6f);
				vVar6.f_2 = 6f;
			}
			else if (*uParam0 == 221420861)
			{
				vVar6.x = (5f * 6f);
				vVar6.f_1 = (5f * 6f);
				vVar6.f_2 = (5f * 6f);
			}
			else if (*uParam0 == -1109016944)
			{
				vVar6.x = (10f * 6f);
				vVar6.f_1 = (10f * 6f);
				vVar6.f_2 = (3f * 6f);
			}
			else
			{
				vVar6.x = 6f;
				vVar6.f_1 = 6f;
				vVar6.f_2 = 6f;
			}
			iLocal_14 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar0, vVar3, vVar6, func_256(uParam0));
		}
	}
}

void func_155(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		uLocal_28.f_6[iVar0] = 0;
		iVar0++;
	}
	switch (*uParam0)
	{
		case 2000209669:
			uLocal_28.f_6[0] = 1604166241;
			uLocal_28.f_6[1] = 1604166241;
			uLocal_28.f_6[2] = 1604166241;
			break;
		case -321841939:
			uLocal_28.f_6[0] = 1488736779;
			uLocal_28.f_6[1] = 1127818789;
			uLocal_28.f_6[2] = 1645439885;
			uLocal_28.f_6[3] = 1276886590;
			uLocal_28.f_6[4] = -808106809;
			break;
		case 1347913620:
			uLocal_28.f_6[0] = joaat("p_cs_rt_envelope01x");
			break;
		case -1308658310:
			uLocal_28.f_6[0] = joaat("p_cs_detonator01x");
			break;
		case -1614148516:
			uLocal_28.f_6[0] = joaat("p_phonograph01x");
			break;
		case -161804536:
			uLocal_28.f_6[0] = -1826340919;
			uLocal_28.f_6[1] = 1859670088;
			break;
		case 404434344:
			if (uParam0->f_4 == 0)
			{
				if (func_138())
				{
					Local_40.f_12[0] = joaat("a_c_eagle_01");
				}
				else if (func_139())
				{
					Local_40.f_12[0] = joaat("a_c_coyote_01");
				}
			}
			break;
		default:
			break;
	}
}

void func_156(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (!&uParam0->f_12[iVar0] == 0)
		{
			STREAMING::REQUEST_MODEL(&(uParam0->f_12[iVar0]), false);
		}
		iVar0++;
	}
}

void func_157(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		if (!&uParam0->f_6[iVar0] == 0)
		{
			STREAMING::REQUEST_MODEL(&(uParam0->f_6[iVar0]), false);
		}
		iVar0++;
	}
}

char* func_158(var uParam0, int iParam1, int iParam2, int iParam3)
{
	switch (*uParam0)
	{
		case -777592153:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@deadman_and_sheep@pose";
						case 3:
							return "pl_base";
						default:
							break;
					}
					break;
			}
			break;
		case 949011950:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@overturned_hearse@overturned_hearse";
						case 3:
							return "pl_Overturned_Hearse";
						default:
							break;
					}
					break;
			}
			break;
		case 1342653896:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@dead_chinese_traveler@dead_chinese_traveler";
						case 3:
							return "pl_dead_chinese_traveler";
						default:
							break;
					}
					break;
			}
			break;
		case 2072069278:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@dead_bear@pose";
						default:
							break;
					}
					break;
			}
			break;
		case 425000526:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@dead_miner@pose";
						default:
							break;
					}
					break;
			}
			break;
		case -1308658310:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return "";
						case 1:
							return "";
						default:
							break;
					}
					break;
			}
			break;
		case -1636964661:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@donkey_lady@donkey_lady";
						case 3:
							return "pl_donkey_lady";
						default:
							break;
					}
					break;
			}
			break;
		case 1937333853:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@dead_soldier@dead_soldier";
						case 3:
							return "pl_Action";
						default:
							break;
					}
					break;
			}
			break;
		case -1300082860:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@corpse_abandoned_oil_drill@pose";
						default:
							break;
					}
					break;
			}
			break;
		case 149709049:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@burned_settlement@pose";
						default:
							break;
					}
					break;
			}
			break;
		case -1568839185:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@corpse_pit@pose";
						default:
							break;
					}
					break;
			}
			break;
		case -641229542:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@corpse_of_slave@dead";
						default:
							break;
					}
					break;
			}
			break;
		case 1673499939:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@meteor_house@pose";
						default:
							break;
					}
					break;
			}
			break;
		case -1177787273:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@water_diviner@water_diviner";
						case 3:
							return "pl_water_diviner";
						default:
							break;
					}
					break;
			}
			break;
		case -1287911066:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@barrel_rider@barrel_rider";
						default:
							break;
					}
					break;
			}
			break;
		case -1824429070:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@buck_carcasses@pose";
						default:
							break;
					}
					break;
			}
			break;
		case -1841331114:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@lightning_alley@lightning_alley";
						default:
							break;
					}
					break;
			}
			break;
		case 657666087:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@circuswagon@circuswagon";
						default:
							break;
					}
					break;
				case 1:
					switch (iParam2)
					{
						case 0:
							return "mech_melee@unarmed@_male@_ambient@_healthy@_noncombat";
						case 1:
							return "att_sucker_punch_dist_close_v1";
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return "s_lev_des_mission";
						case 1:
							return "s_fortuneteller01x";
						default:
							break;
					}
					break;
				case 3:
					switch (iParam2)
					{
						case 2:
							return "lightrig@misc@discoverable_circus_wagon";
						case 3:
							return "plMain";
						default:
							break;
					}
					break;
			}
			break;
		case 1861313914:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							if (func_16(59))
							{
								return "script@beat@wilderness@discoverables@braithwaites_secret_endless_summer@braithwaites_secret_endless_summer";
							}
							else
							{
								return "script@ambient@discoverables@braithwaites@secret";
							}
							break;
						case 3:
							if (func_16(59))
							{
								return "";
							}
							else
							{
								return "pb_intial_visit_a";
							}
							break;
					}
					break;
			}
			break;
		case -415839138:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@ambient@discoverables@meditating_monk@main";
						case 3:
							return "pbl_base_a";
						default:
							break;
					}
					break;
			}
			break;
		case 429544447:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@jesuit_missionary@pose";
						case 3:
							return "pl_jesuit_missionary";
						default:
							break;
					}
					break;
			}
			break;
		case -2060865802:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@roadside_brothel@roadside_brothel";
						case 3:
							return "";
						default:
							break;
					}
					break;
			}
			break;
		case 1519228573:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@swamp_freak@pose";
						default:
							break;
					}
					break;
			}
			break;
		case -920971071:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@flattened_cabin@flattened_cabin";
						case 3:
							return "pl_DeadCorpse";
						default:
							break;
					}
					break;
			}
			break;
		case -1761578407:
			if ((((((((iParam3 == 0 || iParam3 == 1) || iParam3 == 2) || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 6) || iParam3 == 7) || iParam3 == 8)
			{
				switch (iParam1)
				{
					case 0:
						switch (iParam2)
						{
							case 0:
								return "script_common@grieving@player@unarmed@upper";
							case 1:
								return "intro";
							default:
								break;
						}
						break;
				}
			}
			break;
		case 404434344:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return "script_common@grieving@player@unarmed@upper";
						case 1:
							return "intro";
						default:
							break;
					}
					break;
			}
			break;
		case -739986731:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@pagan_ritual@pagan_ritual";
						case 3:
							return "pl_pagan_pose";
						default:
							break;
					}
					break;
			}
			break;
		case 2000209669:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return "script_amb@discoverables@strange_statues@push_button";
						case 1:
							return "push_button_short";
						default:
							break;
					}
					break;
			}
			break;
		case -2108030724:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@braithwaitesburnedcorpse@braithwaitesburnedcorpse";
						case 3:
							return "pl_deadPose";
						default:
							break;
					}
					break;
			}
			break;
		case 1187917501:
			switch (iParam1)
			{
				case 0:
					if (!func_53(*uParam0))
					{
						switch (iParam2)
						{
							case 2:
								return "script@beat@wilderness@discoverables@conestoga_wagon@conestoga_wagon";
							default:
								break;
						}
					}
					break;
				case 1:
					switch (iParam2)
					{
						case 2:
							return "script@ambient@discoverables@Conestoga_Wagon@SlideCamera";
						case 3:
							return "pl_ACTION";
						default:
							break;
					}
					break;
			}
			break;
		case -1887999095:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@grayssecret@grayssecret";
						case 3:
							return "pl_deadPose";
						default:
							break;
					}
					break;
			}
			break;
		case -1829339703:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@wilderness_chest_3@wilderness_chest_3";
						default:
							break;
					}
					break;
			}
			break;
		case -1240932004:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@dead_micah@dead_micah";
						case 3:
							return "pl_micah";
						default:
							break;
					}
					break;
			}
			break;
		case -2008558277:
		case -1891628345:
		case -1859413640:
		case -1761189332:
		case -1714262909:
		case -1494823099:
		case -1420566543:
		case -1272862985:
		case -1208846034:
		case -1144800837:
		case -1061274876:
		case -968854939:
		case -780455182:
		case -763376358:
		case -709811179:
		case -654238687:
		case -599506500:
		case -499529359:
		case -357364973:
		case -261997819:
		case -35775921:
		case -30872859:
		case -657632:
		case 221420861:
		case 308500632:
		case 330993088:
		case 435290930:
		case 513110082:
		case 683269210:
		case 733338689:
		case 870958936:
		case 939555152:
		case 1048086072:
		case 1124200691:
		case 1187689415:
		case 1284679164:
		case 1335921989:
		case 1424723727:
		case 1464664327:
		case 1490223565:
		case 1505050944:
		case 1535254161:
		case 1801731633:
		case 2072029413:
		case 2134589549:
		case 2135153015:
			break;
		default:
			break;
	}
	return "";
}

int func_159(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (!&uParam0->f_12[iVar0] == 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED(&(uParam0->f_12[iVar0])))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_160(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		if (!&uParam0->f_6[iVar0] == 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED(&(uParam0->f_6[iVar0])))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

char* func_161(var uParam0)
{
	switch (*uParam0)
	{
		case 2000209669:
			return "Strange_Statues_Sounds";
		case -1614148516:
			return "inworld_music_wax_cylinder_swamp_boat";
		case 657666087:
			return "fortune_teller_soundset";
		default:
			break;
	}
	return "";
}

char* func_162(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case 2000209669:
			if (iParam1 == 0)
			{
				return "button_press";
			}
			else if (iParam1 == 1)
			{
				return "statue_door_open";
			}
			break;
		case -1614148516:
			switch ((Global_40.f_8863.f_146 % 4))
			{
				case 0:
					return "1";
				case 1:
					return "2";
				case 2:
					return "3";
				case 3:
					return "4";
				default:
					break;
			}
			break;
		case 657666087:
			if (iParam1 == 0)
			{
				return "fortune_teller";
			}
			if (iParam1 == 1)
			{
				return "punch_fortune_teller";
			}
			break;
	}
	return "";
}

bool func_163(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

Vector3 func_164(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case -777592153:
			switch (iParam1)
			{
				case 0:
					return 1122.582f, 430.9633f, 96.2455f;
				case 1:
					return 1123.024f, 430.963f, 95.7573f;
				default:
					break;
			}
			break;
		case 949011950:
			switch (iParam1)
			{
				case 0:
					return -2339.886f, -2176.59f, 71.4468f;
				case 1:
					return -2337.024f, -2179.854f, 71.9464f;
				case 2:
					return -2343.997f, -2181.427f, 70.977f;
				default:
					break;
			}
			break;
		case 1342653896:
			switch (iParam1)
			{
				case 0:
					return -3339.953f, -2500.892f, 1.8466f;
				default:
					break;
			}
			break;
		case 2072069278:
			switch (iParam1)
			{
				case 0:
					return -2334.939f, 903.981f, 157.7555f;
				case 1:
					return -2334.179f, 904.0247f, 157.8905f;
				default:
					break;
			}
			break;
		case 425000526:
			switch (iParam1)
			{
				case 0:
					return -2366.936f, 124.0762f, 216.8527f;
				default:
					break;
			}
			break;
		case -1636964661:
			switch (iParam1)
			{
				case 0:
					return -3815.849f, -2982.679f, -5.7608f;
				default:
					break;
			}
			break;
		case -2060865802:
			switch (iParam1)
			{
				case 0:
					return 2793.436f, 855.1691f, 71.7447f;
				default:
					break;
			}
			break;
		case 1937333853:
			switch (iParam1)
			{
				case 0:
					return 1593.37f, -1769.114f, 51.5788f;
				default:
					break;
			}
			break;
		case -654238687:
			switch (iParam1)
			{
				case 0:
					return -1413.266f, -2671.288f, 41.17608f;
				case 1:
					return -1411.035f, -2671.661f, 41.17608f;
				case 2:
					return -1411.408f, -2672.634f, 41.1746f;
				case 3:
					return -1413.048f, -2671.595f, 41.1746f;
				case 4:
					return -1412.823f, -2670.672f, 41.1746f;
				case 5:
					return -1412.741f, -2672.306f, 41.1746f;
				case 6:
					return -1413.745f, -2671.585f, 41.1746f;
				case 7:
					return -1412.558f, -2671.803f, 41.1746f;
				case 8:
					return -1412.088f, -2671.957f, 41.1746f;
				case 9:
					return -1412.338f, -2671.517f, 41.1746f;
				default:
					break;
			}
			break;
		case -1300082860:
			switch (iParam1)
			{
				case 0:
					return 368.6882f, -13.6098f, 108.217f;
				default:
					break;
			}
			break;
		case 149709049:
			switch (iParam1)
			{
				case 0:
					return -328.35f, -147.69f, 52.62f;
				case 1:
					return -328.35f, -147.69f, 52.62f;
				default:
					break;
			}
			break;
		case -1568839185:
			switch (iParam1)
			{
				case 0:
					return -2261.68f, -1433.048f, 138.7403f;
				case 1:
					return -2261.088f, -1434.147f, 138.5787f;
				case 2:
					return -2261.852f, -1433.882f, 138.6091f;
				case 3:
					return -2261.244f, -1434.466f, 138.7101f;
				case 4:
					return -2261.025f, -1432.579f, 138.68f;
				case 5:
					return -2260.271f, -1432.243f, 138.9447f;
				case 6:
					return -2260.379f, -1433.973f, 138.763f;
				case 7:
					return -2259.772f, -1432.779f, 138.7855f;
				case 8:
					return -2262.282f, -1433.536f, 138.7945f;
				case 9:
					return -2259.818f, -1433.147f, 138.9421f;
				default:
					break;
			}
			break;
		case -641229542:
			switch (iParam1)
			{
				case 0:
					return 1750.49f, -2091.79f, 40.94f;
				default:
					break;
			}
			break;
		case 1673499939:
			switch (iParam1)
			{
				case 0:
					return 2476.028f, 1996.19f, 168.2534f;
				case 1:
					return 2475.049f, 1998.073f, 168.2685f;
				case 2:
					return 2474.894f, 1999.316f, 168.2582f;
				default:
					break;
			}
			break;
		case -415839138:
			switch (iParam1)
			{
				case 0:
					return 1026.078f, 1575.433f, 360.6882f;
				case 1:
					return 1080.511f, 1659.407f, 372.3716f;
				default:
					break;
			}
			break;
		case -1177787273:
			switch (iParam1)
			{
				case 0:
					return -4859.858f, -2421.918f, 7.61f;
				case 1:
					return -4757.666f, -2424.231f, 8.0423f;
				case 2:
					return -4756.033f, -2420.065f, 7.9381f;
				case 3:
					return -4757.72f, -2419.863f, 7.8109f;
				default:
					break;
			}
			break;
		case -1287911066:
			switch (iParam1)
			{
				case 0:
					return 546.5995f, 1794.07f, 127.9608f;
				default:
					break;
			}
			break;
		case -2008558277:
			switch (iParam1)
			{
				case 0:
					return -5419.692f, -3655.095f, -20f;
				case 1:
					return -5419.692f, -3651.995f, -20f;
				case 2:
					return -5419.692f, -3653.495f, -20f;
				case 3:
					return -5419.792f, -3655.34f, -17.72f;
				case 4:
					return -5419.792f, -3654.34f, -17.72f;
				case 5:
					return -5429.492f, -3655.095f, -20f;
				case 6:
					return -5429.492f, -3653.61f, -20f;
				default:
					break;
			}
			break;
		case 1861313914:
			switch (iParam1)
			{
				case 0:
					return 894.7463f, -1969.915f, 44.5785f;
				case 1:
					return 1047.956f, -1880.671f, 45.402f;
				default:
					break;
			}
			break;
		case -1824429070:
			switch (iParam1)
			{
				case 0:
					return -1330.84f, -88.9414f, 97.5094f;
				case 1:
					return -1332.349f, -87.4579f, 97.4614f;
				case 2:
					return -1330.415f, -89.829f, 97.5879f;
				default:
					break;
			}
			break;
		case -1841331114:
			switch (iParam1)
			{
				case 0:
					return -3714.425f, -3602.42f, 45.4395f;
				case 1:
					return -3712.339f, -3602.567f, 44.9224f;
				case 2:
					return -3716.815f, -3604.644f, 44.6678f;
				case 3:
					return -3716.111f, -3602.837f, 46.7136f;
				default:
					break;
			}
			break;
		case -35775921:
			switch (iParam1)
			{
				case 0:
					return 1141.463f, 763.3734f, 95.371f;
				default:
					break;
			}
			break;
		case 657666087:
			switch (iParam1)
			{
				case 0:
					return -1741.339f, -1624.245f, 89.9356f;
				case 1:
					return -1755.518f, -1624.026f, 90.635f;
				default:
					break;
			}
			break;
		case 1464664327:
			switch (iParam1)
			{
				case 0:
					return 1217.047f, 2002.68f, 319.2006f;
				default:
					break;
			}
			break;
		case 429544447:
			switch (iParam1)
			{
				case 0:
					return -6314.926f, -3466.984f, -10.575f;
				default:
					break;
			}
			break;
		case 1519228573:
			switch (iParam1)
			{
				case 0:
					return 2023.15f, -1708.104f, 40.5575f;
				default:
					break;
			}
			break;
		case -1714262909:
			switch (iParam1)
			{
				case 0:
					return 1763.535f, -560.0701f, 46.6156f;
				default:
					break;
			}
			break;
		case -920971071:
			switch (iParam1)
			{
				case 0:
					return 1245.788f, 1152.984f, 151.5137f;
				default:
					break;
			}
			break;
		case -739986731:
			switch (iParam1)
			{
				case 0:
					return -2905.723f, -254.32f, 186.8714f;
				default:
					break;
			}
			break;
		case -2108030724:
			switch (iParam1)
			{
				case 0:
					return 1010.224f, -1764.319f, 46.4285f;
				default:
					break;
			}
			break;
		case 1187917501:
			switch (iParam1)
			{
				case 0:
					return -2222.461f, -618.8527f, 135.3655f;
				case 1:
					return -2222.735f, -616.4194f, 135.0682f;
				default:
					break;
			}
			break;
		case -1887999095:
			switch (iParam1)
			{
				case 0:
					return 1772.332f, -1360.154f, 44.1704f;
				default:
					break;
			}
			break;
		case 1982045664:
			switch (iParam1)
			{
				case 0:
					return -2532.369f, 1173.309f, 225.1319f;
				default:
					break;
			}
			break;
		case -2009137002:
			switch (iParam1)
			{
				case 0:
					return 1256.994f, 1257.913f, 171.0152f;
				default:
					break;
			}
			break;
		case -1829339703:
			switch (iParam1)
			{
				case 0:
					return 2518.04f, 564.7737f, 70.937f;
				case 1:
					return 2519.439f, 562.9084f, 70.9917f;
				default:
					break;
			}
			break;
		case 404434344:
			switch (iParam1)
			{
				case 0:
					if (func_138())
					{
						return 792.7722f, 1776.509f, 281.5611f;
					}
					else if (func_139())
					{
						return 794.3322f, 1778.012f, 280.3784f;
					}
					break;
			}
			break;
		case -1240932004:
			switch (iParam1)
			{
				case 0:
					return -1497.558f, 1251.074f, 313.1244f;
				default:
					break;
			}
			break;
		case -1891628345:
		case -1859413640:
		case -1761189332:
		case -1494823099:
		case -1481450947:
		case -1420566543:
		case -1272862985:
		case -1208846034:
		case -1144800837:
		case -1061274876:
		case -968854939:
		case -780455182:
		case -763376358:
		case -709811179:
		case -599506500:
		case -499529359:
		case -357364973:
		case -261997819:
		case -30872859:
		case -657632:
		case 221420861:
		case 308500632:
		case 330993088:
		case 435290930:
		case 464413478:
		case 513110082:
		case 683269210:
		case 733338689:
		case 870958936:
		case 939555152:
		case 1048086072:
		case 1124200691:
		case 1187689415:
		case 1284679164:
		case 1335921989:
		case 1424723727:
		case 1490223565:
		case 1505050944:
		case 1535254161:
		case 1801731633:
		case 2072029413:
		case 2134589549:
		case 2135153015:
			break;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_165(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case -777592153:
			switch (iParam1)
			{
				case 0:
					return -12.03f;
				case 1:
					return -22.89f;
				default:
					break;
			}
			break;
		case 949011950:
			switch (iParam1)
			{
				case 0:
					return 165.69f;
				case 1:
					return -97.7f;
				case 2:
					return 130.42f;
				default:
					break;
			}
			break;
		case 1342653896:
			switch (iParam1)
			{
				case 0:
					return -90f;
				default:
					break;
			}
			break;
		case 2072069278:
			switch (iParam1)
			{
				case 0:
					return -46.21f;
				case 1:
					return 135.66f;
				default:
					break;
			}
			break;
		case 425000526:
			switch (iParam1)
			{
				case 0:
					return 72.28f;
				default:
					break;
			}
			break;
		case -1636964661:
			switch (iParam1)
			{
				case 0:
					return 132.16f;
				default:
					break;
			}
			break;
		case -2060865802:
			switch (iParam1)
			{
				case 0:
					return 186.76f;
				default:
					break;
			}
			break;
		case 1937333853:
			switch (iParam1)
			{
				case 0:
					return 43.65f;
				default:
					break;
			}
			break;
		case -654238687:
			switch (iParam1)
			{
				case 0:
					return -96.76f;
				case 1:
					return 120.75f;
				case 2:
					return 0f;
				case 3:
					return 30f;
				case 4:
					return 60f;
				case 5:
					return -15f;
				case 6:
					return -30f;
				case 7:
					return -60f;
				case 8:
					return -120f;
				case 9:
					return 15f;
				default:
					break;
			}
			break;
		case -1300082860:
			switch (iParam1)
			{
				case 0:
					return -174f;
				default:
					break;
			}
			break;
		case 149709049:
			switch (iParam1)
			{
				case 0:
					return 0f;
				case 1:
					return 0f;
				default:
					break;
			}
			break;
		case -1568839185:
			switch (iParam1)
			{
				case 0:
					return -98.66f;
				case 1:
					return 3.79f;
				case 2:
					return -93.21f;
				case 3:
					return -72.99f;
				case 4:
					return 130.68f;
				case 5:
					return 117.29f;
				case 6:
					return -133f;
				case 7:
					return -86.34f;
				case 8:
					return 93.9f;
				case 9:
					return 110.42f;
				default:
					break;
			}
			break;
		case -641229542:
			switch (iParam1)
			{
				case 0:
					return 162.86f;
				default:
					break;
			}
			break;
		case 1673499939:
			switch (iParam1)
			{
				case 0:
					return -19.53f;
				case 1:
					return 133.99f;
				case 2:
					return -105.95f;
				default:
					break;
			}
			break;
		case -415839138:
			switch (iParam1)
			{
				case 0:
					return 175f;
				default:
					break;
			}
			break;
		case -1177787273:
			switch (iParam1)
			{
				case 0:
					return -167.58f;
				case 1:
					return 0f;
				case 2:
					return 117.57f;
				case 3:
					return 179.95f;
				default:
					break;
			}
			break;
		case -1287911066:
			switch (iParam1)
			{
				case 0:
					return -86.12f;
				default:
					break;
			}
			break;
		case -2008558277:
			switch (iParam1)
			{
				case 0:
					return -90f;
				case 1:
					return -90f;
				case 2:
					return -90f;
				case 3:
					return -90f;
				case 4:
					return -90f;
				case 5:
					return 90f;
				case 6:
					return 90f;
				default:
					break;
			}
			break;
		case 1861313914:
			switch (iParam1)
			{
				case 0:
					return -38.1f;
				case 1:
					return 56.97f;
				default:
					break;
			}
			break;
		case -1824429070:
			switch (iParam1)
			{
				case 0:
					return -2.39f;
				case 1:
					return -38.07f;
				case 2:
					return -132.4f;
				default:
					break;
			}
			break;
		case -1841331114:
			switch (iParam1)
			{
				case 0:
					return 59.57f;
				case 1:
					return 180f;
				case 2:
					return 180f;
				case 3:
					return -170.06f;
				default:
					break;
			}
			break;
		case -35775921:
			switch (iParam1)
			{
				case 0:
					return 0f;
				default:
					break;
			}
			break;
		case 657666087:
			switch (iParam1)
			{
				case 0:
					return -115.63f;
				case 1:
					return 280.0316f;
				default:
					break;
			}
			break;
		case 1464664327:
			switch (iParam1)
			{
				case 0:
					return 349.2461f;
				default:
					break;
			}
			break;
		case 429544447:
			switch (iParam1)
			{
				case 0:
					return 180f;
				default:
					break;
			}
			break;
		case 1519228573:
			switch (iParam1)
			{
				case 0:
					return -75.35f;
				default:
					break;
			}
			break;
		case -920971071:
			switch (iParam1)
			{
				case 0:
					return -26.24f;
				default:
					break;
			}
			break;
		case -739986731:
			switch (iParam1)
			{
				case 0:
					return -90.47f;
				default:
					break;
			}
			break;
		case -2108030724:
			switch (iParam1)
			{
				case 0:
					return 175.4f;
				default:
					break;
			}
			break;
		case 1187917501:
			switch (iParam1)
			{
				case 0:
					return 165.69f;
				case 1:
					return 0f;
				default:
					break;
			}
			break;
		case -1887999095:
			switch (iParam1)
			{
				case 0:
					return -99.19f;
				default:
					break;
			}
			break;
		case -2009137002:
			switch (iParam1)
			{
				case 0:
					return 0f;
				default:
					break;
			}
			break;
		case -1829339703:
			switch (iParam1)
			{
				case 0:
					return 142.69f;
				case 1:
					return 165.69f;
				default:
					break;
			}
			break;
		case 404434344:
			switch (iParam1)
			{
				case 0:
					if (func_138())
					{
						return 275f;
					}
					else if (func_139())
					{
						return 275f;
					}
					break;
			}
			break;
		case -1240932004:
			switch (iParam1)
			{
				case 0:
					return 150.68f;
				default:
					break;
			}
			break;
		case -1891628345:
		case -1859413640:
		case -1761189332:
		case -1714262909:
		case -1494823099:
		case -1481450947:
		case -1420566543:
		case -1272862985:
		case -1208846034:
		case -1144800837:
		case -1061274876:
		case -968854939:
		case -780455182:
		case -763376358:
		case -709811179:
		case -599506500:
		case -499529359:
		case -357364973:
		case -261997819:
		case -30872859:
		case -657632:
		case 221420861:
		case 308500632:
		case 330993088:
		case 435290930:
		case 464413478:
		case 513110082:
		case 683269210:
		case 733338689:
		case 870958936:
		case 939555152:
		case 1048086072:
		case 1124200691:
		case 1187689415:
		case 1284679164:
		case 1335921989:
		case 1424723727:
		case 1490223565:
		case 1505050944:
		case 1535254161:
		case 1801731633:
		case 2072029413:
		case 2134589549:
		case 2135153015:
			break;
		default:
			break;
	}
	return 0f;
}

void func_166(var uParam0, vector3 vParam1, float fParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (!&uParam0->f_12[iParam5] == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_1[iParam5])))
		{
			uParam0->f_1[iParam5] = func_257(&(uParam0->f_12[iParam5]), vParam1, fParam4, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0);
			if (!ENTITY::IS_ENTITY_DEAD(&(uParam0->f_1[iParam5])))
			{
				if (bParam6)
				{
					ENTITY::_0x9587913B9E772D29(&(uParam0->f_1[iParam5]), 0);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(uParam0->f_1[iParam5]), true);
				TASK::TASK_STAND_STILL(&(uParam0->f_1[iParam5]), -1);
				if (!bParam7)
				{
					ENTITY::SET_ENTITY_VISIBLE(&(uParam0->f_1[iParam5]), false);
				}
				*uParam0++;
			}
		}
		else
		{
			*uParam0++;
		}
	}
	else
	{
		*uParam0++;
	}
}

int func_167(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case -1859413640:
			return 1962997581;
		case -2008558277:
			return -884758938;
		case -1481450947:
			return -25545633;
		case -1427565340:
			return -1052361389;
		case -1887999095:
			return -1206647372;
		case 2000209669:
			return -1060784354;
		case -161804536:
			return -1623205626;
		case 733338689:
			return 1431646125;
		case 2072029413:
			return 2098990049;
		case 247563739:
			return 1677800332;
		case -35775921:
			return 526291251;
		case 2135153015:
			return -1005995225;
		case 513110082:
			return -1893200246;
		case 1464664327:
			switch (iParam1)
			{
				case 0:
					return 757635078;
				case 1:
					return -1689755873;
			}
			break;
		case 1284679164:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
					return -1206647372;
				default:
					break;
			}
			break;
		case 870958936:
			switch (iParam1)
			{
				case 0:
					return -1848017478;
				case 1:
					return -1142656965;
				case 2:
					return 1841152801;
				case 3:
					return 1244848886;
				case 4:
					return 1257007277;
				default:
					break;
			}
			return 0;
		}

float func_168(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case -1859413640:
			return -162.606f;
		case -1481450947:
			return 0f;
		case -1427565340:
			return -49.4f;
		case -1887999095:
			return 40f;
		case 2000209669:
			return -13f;
		case -161804536:
			return -160f;
		case 733338689:
			return -5.848f;
		case 2072029413:
			return -155.926f;
		case 2135153015:
			return 3.97f;
		case 1464664327:
			switch (iParam1)
			{
				case 0:
					return 80.219f;
				case 1:
					return 103.5514f;
			}
			break;
		case 513110082:
			switch (iParam1)
			{
				case 0:
					return -173f;
				case 1:
					return 0f;
				case 2:
					return 0f;
				default:
					break;
			}
			Jump @410; //curOff = 250
			switch (iParam1)
			{
				case 0:
					return 108.929f;
				case 1:
					return -98.32f;
				case 2:
					return -76.119f;
				case 3:
					return -156.164f;
				default:
					break;
			}
			Jump @410; //curOff = 320
			switch (iParam1)
			{
				case 0:
					return -156f;
				case 1:
					return -156f;
				case 2:
					return 20f;
				case 3:
					return -142.537f;
				case 4:
					return 30f;
				default:
					break;
			}
			return 0f;
		}

int func_169(int iParam0, vector3 vParam1, float fParam4, float fParam5, float fParam6, int iParam7)
{
	return TASK::CREATE_SCENARIO_POINT(iParam0, vParam1, fParam4, fParam5, fParam6, iParam7);
}

Vector3 func_170(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case -1481450947:
			switch (iParam1)
			{
				case 0:
					return 5f, 0f, 213f;
				default:
					break;
			}
			break;
		case -1427565340:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -48f;
				case 1:
					return 20f, 88.84f, -94.66f;
				default:
					break;
			}
			break;
		case -763376358:
			switch (iParam1)
			{
				case 0:
					return 65f, 0f, 90f;
				default:
					break;
			}
			break;
		case 1801731633:
			switch (iParam1)
			{
				case 0:
					return 15f, 0f, -42f;
				default:
					break;
			}
			break;
		case 1490223565:
			switch (iParam1)
			{
				case 0:
					return 25f, 0f, -75f;
				default:
					break;
			}
			break;
		case -777592153:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case 1342653896:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case -1308658310:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 155f;
				case 1:
					return 0f, 0f, 0f;
				case 2:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case 425000526:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				case 1:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case 2134589549:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -95f;
				default:
					break;
			}
			break;
		case 733338689:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -144.36f;
				default:
					break;
			}
			break;
		case 1124200691:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -35.981f;
				default:
					break;
			}
			break;
		case -1859413640:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				case 1:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case -1300082860:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case -1420566543:
			switch (iParam1)
			{
				case 0:
					return -10f, 0f, 33f;
				default:
					break;
			}
			break;
		case -1208846034:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case 1048086072:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case 939555152:
			switch (iParam1)
			{
				case 0:
					return 15f, 0f, 0f;
				default:
					break;
			}
			break;
		case -657632:
			switch (iParam1)
			{
				case 0:
					return 1.24f, 0f, 0f;
				default:
					break;
			}
			break;
		case -1061274876:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 12f;
				case 1:
					return 180f, 0f, 108f;
				case 2:
					return 180f, 0f, 208f;
				case 3:
					return 0f, 0f, 30f;
				case 4:
					return 180f, 0f, 35f;
				default:
					break;
			}
			break;
		case 513110082:
			if (uParam0->f_4 == 0)
			{
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, -45f;
					default:
						break;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, -110f;
					default:
						break;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, -49.418f;
					case 1:
						return 0f, 0f, -33.718f;
					case 2:
						return 0f, 0f, -26.718f;
					case 3:
						return 0f, 0f, -41.7187f;
					case 4:
						return 0f, 0f, -33.718f;
					default:
						break;
				}
			}
			break;
		case 1335921989:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case 2135153015:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				case 1:
					return 0f, 0f, 90f;
				default:
					break;
			}
			break;
		case -35775921:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case -709811179:
			switch (iParam1)
			{
				case 0:
					return 90f, 0f, 105f;
				default:
					break;
			}
			break;
		case 464413478:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				case 1:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case 949011950:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				case 1:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case 429544447:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 121.94f;
				default:
					break;
			}
			break;
		case 1673499939:
			switch (iParam1)
			{
				case 0:
					return -90f, 0f, 90f;
				default:
					break;
			}
			break;
		case 373034311:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case -780455182:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -48f;
				case 1:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case -739986731:
			switch (iParam1)
			{
				case 0:
					return 30f, 5f, 99f;
				default:
					break;
			}
			break;
		case 2000209669:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 169f;
				case 1:
					return 0f, 0f, 169f;
				case 2:
					return 0f, 0f, 169f;
				default:
					break;
			}
			break;
		case -654238687:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 116f;
				default:
					break;
			}
			break;
		case -1144800837:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -55f;
				default:
					break;
			}
			break;
		case 1347913620:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 90f;
				default:
					break;
			}
			break;
		case 1937333853:
			switch (iParam1)
			{
				case 0:
					return -10f, 90f, 30f;
				default:
					break;
			}
			break;
		case 118535038:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				case 1:
					return 0f, 0f, 0f;
				case 2:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case -2009137002:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				case 1:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case -161804536:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				case 1:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case -2108030724:
		case -2060865802:
		case -2008558277:
		case -1891628345:
		case -1887999095:
		case -1841331114:
		case -1829339703:
		case -1824429070:
		case -1761189332:
		case -1714262909:
		case -1636964661:
		case -1494823099:
		case -1287911066:
		case -1272862985:
		case -1240932004:
		case -1177787273:
		case -968854939:
		case -641229542:
		case -599506500:
		case -499529359:
		case -415839138:
		case -357364973:
		case -261997819:
		case -30872859:
		case 149709049:
		case 221420861:
		case 308500632:
		case 330993088:
		case 435290930:
		case 657666087:
		case 683269210:
		case 870958936:
		case 1187689415:
		case 1187917501:
		case 1284679164:
		case 1424723727:
		case 1464664327:
		case 1505050944:
		case 1535254161:
		case 1861313914:
		case 2072029413:
		case 2072069278:
			break;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_171(var uParam0, vector3 vParam1, vector3 vParam4, int iParam7)
{
	if (!&uParam0->f_6[iParam7] == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0[iParam7]))
		{
			(*uParam0)[iParam7] = OBJECT::CREATE_OBJECT(&(uParam0->f_6[iParam7]), vParam1, true, true, false, false, true);
			if (!ENTITY::IS_ENTITY_DEAD(uParam0[iParam7]))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0[iParam7], vParam1, true, false, true, true);
				ENTITY::SET_ENTITY_ROTATION(uParam0[iParam7], vParam4, 2, true);
			}
			else
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_172(var uParam0)
{
	int iVar0;

	if (func_39(Global_40.f_8863.f_152, 1024))
	{
		if (!func_39(Global_40.f_8863.f_152, 2048))
		{
			if (!func_171(&uLocal_28, func_76(uParam0, 0), func_170(uParam0, 0), 0))
			{
				return 0;
			}
		}
		if (!func_39(Global_40.f_8863.f_152, 4096))
		{
			if (!func_171(&uLocal_28, func_76(uParam0, 1), func_170(uParam0, 1), 1))
			{
				return 0;
			}
		}
		if (!func_39(Global_40.f_8863.f_152, 8192))
		{
			if (!func_171(&uLocal_28, func_76(uParam0, 2), func_170(uParam0, 2), 2))
			{
				return 0;
			}
		}
		if ((!func_39(Global_40.f_8863.f_152, 2048) || !func_39(Global_40.f_8863.f_152, 4096)) || !func_39(Global_40.f_8863.f_152, 8192))
		{
			if (!TASK::_0x841475AC96E794D1(iLocal_15))
			{
				iLocal_15 = func_169(func_167(uParam0, 0), func_101(uParam0, 0), func_168(uParam0, 0), 0, 0, 0);
			}
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_28[iVar0])))
			{
				ENTITY::FREEZE_ENTITY_POSITION(&(uLocal_28[iVar0]), true);
			}
			iVar0++;
		}
	}
	return 1;
}

int func_173(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case 404434344:
			switch (iParam1)
			{
				case 0:
					return -101240835;
				default:
					break;
			}
			break;
	}
	return 41788943;
}

void func_174(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_258(iParam0, iParam1))
		{
			if (func_259(iParam0, iParam1))
			{
				if (func_260(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_261(iParam0);
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

void func_175(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 - (Global_1310750->f_16035 && iParam0));
}

float func_176()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

int func_177(int iParam0)
{
	switch (iParam0)
	{
		case 683269210:
			return 993246734;
		case -1300082860:
			return -1212881551;
		case 247563739:
			return 1352537560;
		case 149709049:
			return 2021420613;
		case 1347913620:
			return 460210291;
		case -1109016944:
			return -2011320133;
		case -919236330:
			return 539572870;
		case 918206817:
			return -1262808306;
		case -920971071:
			return 1582457845;
		case 1673499939:
			return 1195199040;
		case -654238687:
			return 2056389698;
		case -2060865802:
			return -1988847961;
		case -232974724:
			return -942443338;
		case -1960242214:
			return 66159563;
		case 1464664327:
			return 387869270;
		case -1240932004:
			return -875696111;
		default:
			break;
	}
	return 0;
}

void func_178(int iParam0, bool bParam1)
{
	iLocal_65 = iParam0;
	if (bParam1)
	{
		func_25(&uLocal_66);
	}
}

int func_179(var uParam0)
{
	int iVar0;
	var uVar1;
	struct<11> Var2;

	Var2.f_10 = 7;
	Var2 = 1;
	Var2.f_1 = 1;
	Var2.f_2 = 0;
	Var2.f_6 = { func_164(uParam0, 0) };
	Var2.f_9 = func_165(uParam0, 0);
	iVar0 = func_262(&uVar1, &Var2);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		func_180(iVar0, func_164(uParam0, 0), func_165(uParam0, 0), 2, 1073741824);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
		TASK::TASK_STAND_STILL(iVar0, -1);
		return 1;
	}
	return 0;
}

void func_180(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == func_132(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (func_263(iParam0))
	{
		if (func_264(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			PHYSICS::_0x0348469DAA17576C(iParam0);
		}
	}
	if (func_39(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_180(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_180(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_39(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 0, 1);
		}
	}
	if (func_39(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			ENTITY::_0x203BEFFDBE12E96A(iParam0, vParam1, fParam4, 1, func_39(iParam5, 32), 1);
		}
		else
		{
			ENTITY::_0x203BEFFDBE12E96A(iParam0, vParam1, fParam4, 1, func_39(iParam5, 32), 1);
			ENTITY::_0x9587913B9E772D29(iParam0, 0);
		}
	}
	else if (func_39(iParam5, 129))
	{
		if (func_39(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0, vParam1, func_39(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
	}
	else
	{
		ENTITY::_0x203BEFFDBE12E96A(iParam0, vParam1, fParam4, 1, func_39(iParam5, 32), 1);
	}
	if (bVar4)
	{
		if (!func_39(iParam5, 16))
		{
			PED::_0x7DE9692C6F64CFE8(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3, 0, 0);
		}
		if (func_263(iParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PHYSICS::_0x0348469DAA17576C(iVar6);
			if (!func_39(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, 1, 0);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PACKAGE_INDEX(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 1);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0) == Global_35 && !func_39(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
}

void func_181(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	TASK::_TASK_START_SCENARIO_IN_PLACE(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, 0);
}

void func_182(int iParam0)
{
	func_32(iParam0, 2);
	func_74(iParam0);
}

int func_183(var uParam0, bool bParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!func_265())
		{
			return 1;
		}
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) || PED::IS_PED_USING_ANY_SCENARIO(Global_35))
		{
			return 1;
		}
		if (func_14(Global_35, func_76(uParam0, 0), 1) > (1.6f + 1f) || !func_112(Global_35, func_76(uParam0, 0), 0))
		{
			return 1;
		}
	}
	else
	{
		if (!func_265())
		{
			return 0;
		}
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) || PED::IS_PED_USING_ANY_SCENARIO(Global_35))
		{
			return 0;
		}
		if (func_14(Global_35, func_76(uParam0, 0), 1) <= 1.6f && func_112(Global_35, func_76(uParam0, 0), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_184(int iParam0)
{
	switch (iParam0)
	{
		case -2009137002:
		case -1960242214:
		case -1958832660:
		case -1891628345:
		case -1887999095:
		case -1787770845:
		case -1761189332:
		case -1646022773:
		case -1636964661:
		case -1614148516:
		case -1609238411:
		case -1505275983:
		case -1300082860:
		case -1287911066:
		case -1272862985:
		case -1243267511:
		case -1109016944:
		case -1053108445:
		case -986176781:
		case -979575591:
		case -849582265:
		case -780455182:
		case -739986731:
		case -709811179:
		case -607940493:
		case -415839138:
		case -232974724:
		case -161804536:
		case -148407339:
		case 58958195:
		case 247563739:
		case 308500632:
		case 429544447:
		case 657666087:
		case 921081956:
		case 1034793488:
		case 1284679164:
		case 1519228573:
		case 1535254161:
		case 1673499939:
		case 1734766691:
		case 1861313914:
		case 1982045664:
		case 1986618633:
		case 2000209669:
		case 2134589549:
			return 1;
	}
	return 0;
}

struct<2> func_185(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

void func_186(var uParam0, var uParam1, int iParam2)
{
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

float func_187(var uParam0, int iParam1)
{
	vector3 vVar0;

	vVar0 = { func_266(uParam0, iParam1) };
	return vVar0.z;
}

int func_188(int iParam0, vector3 vParam1, float fParam4, float fParam5)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (func_267(vParam1, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, fParam4, 0f, fParam5, 0f), ENTITY::GET_ENTITY_COORDS(iParam0, true, false)))
	{
		return 0;
	}
	return 1;
}

int func_189(char* sParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, bool bParam16)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_0xBC0884BC590951C7(iParam1, 0))
	{
		return 0;
	}
	if (func_22(vParam2))
	{
		return 0;
	}
	if (fParam5 <= 0f)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_235(iVar0, 2))
		{
			if (func_268(vParam2, ((*Global_1945938)[iVar0 /*18*/])->f_6, 0.01f, 1) && iParam1 == ((*Global_1945938)[iVar0 /*18*/])->f_4)
			{
				iVar2 = iVar0;
				return iVar2;
			}
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_236(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216, 0, 0, 0, iParam15, bParam16);
		return iVar1;
	}
	return 0;
}

void func_190(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	switch (*uParam0)
	{
		case -544327665:
			if (iParam1 == 0)
			{
				iVar0 = 1;
			}
			else if (iParam1 == 1)
			{
				iVar0 = 2;
			}
			else if (iParam1 == 2)
			{
				iVar0 = 4;
			}
			else
			{
				return;
			}
			break;
		case -834293086:
			if (iParam1 == 0)
			{
				iVar1 = 1;
			}
			else if (iParam1 == 1)
			{
				iVar1 = 2;
			}
			else if (iParam1 == 2)
			{
				iVar1 = 4;
			}
			else if (iParam1 == 3)
			{
				iVar1 = 8;
			}
			else if (iParam1 == 4)
			{
				iVar1 = 16;
			}
			else if (iParam1 == 5)
			{
				iVar1 = 32;
			}
			else if (iParam1 == 6)
			{
				iVar1 = 64;
			}
			else if (iParam1 == 7)
			{
				iVar1 = 128;
			}
			else if (iParam1 == 8)
			{
				iVar1 = 256;
			}
			else if (iParam1 == 9)
			{
				iVar1 = 512;
			}
			else
			{
				return;
			}
			break;
		case 1120968795:
			if (iParam1 == 0)
			{
				iVar1 = 1024;
			}
			else if (iParam1 == 1)
			{
				iVar1 = 2048;
			}
			else
			{
				return;
			}
			break;
		case 1519472817:
			if (iParam1 == 0)
			{
				iVar1 = 8388608;
			}
			else if (iParam1 == 1)
			{
				iVar1 = 16777216;
			}
			else
			{
				return;
			}
			break;
		case -1859023693:
			if (iParam1 == 0)
			{
				iVar1 = 4096;
			}
			else if (iParam1 == 1)
			{
				iVar1 = 8192;
			}
			else if (iParam1 == 2)
			{
				iVar1 = 16384;
			}
			else if (iParam1 == 3)
			{
				iVar1 = 32768;
			}
			else if (iParam1 == 4)
			{
				iVar1 = 65536;
			}
			else if (iParam1 == 5)
			{
				iVar1 = 131072;
			}
			else if (iParam1 == 6)
			{
				iVar1 = 262144;
			}
			else if (iParam1 == 7)
			{
				iVar1 = 524288;
			}
			else if (iParam1 == 8)
			{
				iVar1 = 1048576;
			}
			else if (iParam1 == 9)
			{
				iVar1 = 2097152;
			}
			else if (iParam1 == 10)
			{
				iVar1 = 4194304;
			}
			else
			{
				return;
			}
			break;
		case 2000209669:
			if (iParam1 == 0)
			{
				iVar0 = 8;
			}
			else if (iParam1 == 1)
			{
				iVar0 = 16;
			}
			else if (iParam1 == 2)
			{
				iVar0 = 32;
			}
			else if (iParam1 == 3)
			{
				iVar0 = 64;
			}
			else if (iParam1 == 4)
			{
				iVar0 = 128;
			}
			else if (iParam1 == 5)
			{
				iVar0 = 256;
			}
			else if (iParam1 == 6)
			{
				iVar0 = 512;
			}
			else if (iParam1 == 7)
			{
				iVar0 = 1024;
			}
			else if (iParam1 == 8)
			{
				iVar0 = 2048;
			}
			else if (iParam1 == 9)
			{
				iVar0 = 4096;
			}
			else if (iParam1 == 10)
			{
				iVar0 = 8192;
			}
			else
			{
				return;
			}
			break;
		case -1272862985:
			if (iParam1 == 0)
			{
				iVar0 = 262144;
			}
			else if (iParam1 == 1)
			{
				iVar0 = 524288;
			}
			else if (iParam1 == 2)
			{
				iVar0 = 1048576;
			}
			else if (iParam1 == 3)
			{
				iVar0 = 2097152;
			}
			else
			{
				return;
			}
			break;
		case -1761578407:
			if (iParam1 == 0)
			{
				iVar2 = 1;
			}
			else if (iParam1 == 1)
			{
				iVar2 = 2;
			}
			else if (uParam0->f_4 == 2)
			{
				iVar2 = 4;
			}
			else if (uParam0->f_4 == 3)
			{
				iVar2 = 8;
			}
			else if (iParam1 == 4)
			{
				iVar2 = 16;
			}
			else if (iParam1 == 5)
			{
				iVar2 = 32;
			}
			else if (iParam1 == 6)
			{
				iVar2 = 64;
			}
			else if (iParam1 == 7)
			{
				iVar2 = 128;
			}
			else if (iParam1 == 8)
			{
				iVar2 = 256;
			}
			else if (iParam1 == 9)
			{
				iVar2 = 512;
			}
			else if (iParam1 == 10)
			{
				iVar2 = 1024;
			}
			else
			{
				return;
			}
			break;
		case -890175011:
			if (iParam1 == 0)
			{
				iVar2 = 2048;
			}
			else if (iParam1 == 1)
			{
				iVar2 = 4096;
			}
			else if (iParam1 == 2)
			{
				iVar2 = 8192;
			}
			else if (iParam1 == 3)
			{
				iVar2 = 16384;
			}
			else if (iParam1 == 4)
			{
				iVar2 = 32768;
			}
			else
			{
				return;
			}
			break;
		case 677950956:
			if (iParam1 == 0)
			{
				iVar2 = 65536;
			}
			else if (iParam1 == 1)
			{
				iVar2 = 131072;
			}
			else if (iParam1 == 2)
			{
				iVar2 = 262144;
			}
			else if (iParam1 == 3)
			{
				iVar2 = 524288;
			}
			else if (iParam1 == 4)
			{
				iVar2 = 1048576;
			}
			else if (iParam1 == 5)
			{
				iVar2 = 2097152;
			}
			else
			{
				return;
			}
			break;
		default:
			break;
	}
	if ((*uParam0 == -1761578407 || *uParam0 == -890175011) || *uParam0 == 677950956)
	{
		if (func_39(Global_40.f_8863.f_154, iVar2))
		{
			func_43(&(Global_40.f_8863.f_154), iVar2);
		}
	}
	else if (((*uParam0 == -834293086 || *uParam0 == 1120968795) || *uParam0 == 1519472817) || *uParam0 == -1859023693)
	{
		if (func_39(Global_40.f_8863.f_153, iVar1))
		{
			func_43(&(Global_40.f_8863.f_153), iVar1);
		}
	}
	else if (func_39(Global_40.f_8863.f_152, iVar0))
	{
		func_43(&(Global_40.f_8863.f_152), iVar0);
	}
}

void func_191(var uParam0)
{
	vector3 vVar0;
	float fVar3;
	struct<4> Var4;
	int iVar8;

	if (iLocal_23)
	{
		fVar3 = (func_187(uParam0, uParam0->f_4) + 145f);
	}
	else
	{
		fVar3 = (func_187(uParam0, uParam0->f_4) + 325f);
	}
	Var4 = (fVar3 + 180f);
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_13(uParam0, uParam0->f_4), fVar3, 0f, 0.82f, 0f) };
	TASK::OPEN_SEQUENCE_TASK(&iVar8);
	if (PED::_0xD5FE956C70FF370B(Global_35))
	{
		TASK::TASK_SET_CROUCH_MOVEMENT(0, false, 0, false);
	}
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), false, 0, false, false);
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), false, 1, false, false);
	TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD_ADVANCED(0, vVar0, 1f, 20000, 0.09f, 0, Var4, (fVar3 + 180f));
	TASK::TASK_PLAY_ANIM(0, func_158(uParam0, 0, 0, 0), func_158(uParam0, 0, 1, 0), 8f, -8f, -1, 24, 0, 0, 0, 0, 0, 0);
	TASK::CLOSE_SEQUENCE_TASK(iVar8);
	TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar8);
	TASK::CLEAR_SEQUENCE_TASK(&iVar8);
}

void func_192(float fParam0)
{
	if (func_269(1) < fParam0)
	{
		func_270(1, fParam0, 0);
	}
	if (func_269(2) < fParam0)
	{
		func_270(2, fParam0, 0);
	}
	if (func_269(0) < fParam0)
	{
		func_270(0, fParam0, 0);
	}
}

int func_193(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case -1427565340:
			switch (iParam1)
			{
				case 1:
					return -1041821887;
				default:
					break;
			}
			break;
		case -1859413640:
			switch (iParam1)
			{
				case 0:
					return 688258043;
				case 1:
					return 1533677103;
				default:
					break;
			}
			break;
		case 2000209669:
			switch (iParam1)
			{
				case 0:
					return 146855730;
				case 1:
					return 146855730;
				case 2:
					return 146855730;
				default:
					break;
			}
			break;
		case 373034311:
			switch (iParam1)
			{
				case 0:
					return -172243588;
				default:
					break;
			}
			break;
		case -654238687:
			switch (iParam1)
			{
				case 0:
					return 2036668281;
				default:
					break;
			}
			break;
		default:
			break;
	}
	return 0;
}

int func_194(var uParam0, int iParam1)
{
	struct<6> Var0;
	int iVar10;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	if (TASK::_0xD04241BBF6D03A5E(Global_35) != 0)
	{
		iVar10 = 0;
		while (iVar10 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
		{
			if (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar10) == -1730772208)
			{
				if (SCRIPTS::GET_EVENT_DATA(0, iVar10, &Var0, 10))
				{
					if (((Var0.f_2 == iParam1 && Var0.f_5 == 1) && ENTITY::DOES_ENTITY_EXIST(Var0.f_1)) && Var0.f_1 == *uParam0)
					{
						return 1;
					}
				}
			}
			iVar10++;
		}
	}
	return 0;
}

char* func_195(var uParam0)
{
	switch (*uParam0)
	{
		case 404434344:
			return "DISC_VOL_GRAVE_ARTHUR_I";
		case -1761578407:
			if (uParam0->f_4 == 0)
			{
				return "DISC_VOL_GRAVE_ARTHUR_I";
			}
			else if (uParam0->f_4 == 1)
			{
				return "DISC_VOL_GRAVE_JENNY_I";
			}
			else if (uParam0->f_4 == 2)
			{
				return "DISC_VOL_GRAVE_HOSEA_I";
			}
			else if (uParam0->f_4 == 3)
			{
				return "DISC_VOL_GRAVE_LENNY_I";
			}
			else if (uParam0->f_4 == 4)
			{
				return "DISC_VOL_GRAVE_SEAN_I";
			}
			else if (uParam0->f_4 == 5)
			{
				return "DISC_VOL_GRAVE_DAVEY_I";
			}
			else if (uParam0->f_4 == 6)
			{
				return "DISC_VOL_GRAVE_KIERAN_I";
			}
			else if (uParam0->f_4 == 7)
			{
				return "DISC_VOL_GRAVE_SUSAN_I";
			}
			else if (uParam0->f_4 == 8)
			{
				return "DISC_VOL_GRAVE_EAGLE_I";
			}
			break;
		case -1243267511:
			return "DISC_VOL_FACE_TREES_I";
		case 1535254161:
			return "DISC_VOL_CIV_WAR_I";
		case -607940493:
			return "DISC_VOL_SERPENT_MOUND_I";
		case -890175011:
			if (uParam0->f_4 == 0)
			{
				return "DISC_VOL_VAMP_CLUES_1_I";
			}
			else if (uParam0->f_4 == 1)
			{
				return "DISC_VOL_VAMP_CLUES_2_I";
			}
			else if (uParam0->f_4 == 2)
			{
				return "DISC_VOL_VAMP_CLUES_3_I";
			}
			else if (uParam0->f_4 == 3)
			{
				return "DISC_VOL_VAMP_CLUES_4_I";
			}
			else if (uParam0->f_4 == 4)
			{
				return "DISC_VOL_VAMP_CLUES_5_I";
			}
			break;
		case 677950956:
			if (uParam0->f_4 == 0)
			{
				return "DISC_VOL_AZTEC_CLUES_1_I";
			}
			else if (uParam0->f_4 == 1)
			{
				return "DISC_VOL_AZTEC_CLUES_2_I";
			}
			else if (uParam0->f_4 == 2)
			{
				return "DISC_VOL_AZTEC_CLUES_3_I";
			}
			else if (uParam0->f_4 == 3)
			{
				return "DISC_VOL_AZTEC_CLUES_4_I";
			}
			else if (uParam0->f_4 == 4)
			{
				return "DISC_VOL_AZTEC_CLUES_5_I";
			}
			else if (uParam0->f_4 == 5)
			{
				return "DISC_VOL_AZTEC_CLUES_6_I";
			}
			break;
	}
	return "";
}

int func_196(int iParam0, int iParam1, float fParam2, bool bParam3)
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

void func_197(int* iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (ENTITY::_0xA7E51B53309EAC97(*iParam0))
		{
			return;
		}
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
		{
			return;
		}
		if (bParam1)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
		}
		else
		{
			if (!ENTITY::IS_ENTITY_DEAD(*iParam0) && PED::IS_PED_IN_ANY_VEHICLE(*iParam0, true))
			{
			}
			PED::DELETE_PED(iParam0);
		}
	}
}

void func_198(var uParam0, int iParam1)
{
	if (STATS::CHAL_IS_GOAL_ACTIVE(-816321659, -997227349))
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT_BY_SCORE_ID(func_271(uParam0), iParam1);
	}
}

int func_199(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (!VOLUME::_0x92A78D0BEDB332A3(*iParam0))
	{
		return 0;
	}
	iVar0 = func_272(uParam1, &(uParam1->f_6), *iParam0, 5);
	if (iVar0 > 0)
	{
		iVar1 = 0;
		while (iVar1 <= (iVar0 - 1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam1[iVar1]))
			{
				if (!PLAYER::_0x0E6846476906C9DD(PLAYER::GET_PLAYER_INDEX(), uParam1[iVar1]))
				{
					PLAYER::_0x543DFE14BE720027(PLAYER::GET_PLAYER_INDEX(), uParam1[iVar1], 0);
					PLAYER::_0x6ECFC621A168424C(uParam1[iVar1], uParam1[iVar1], 0);
				}
			}
			iVar1++;
		}
		return 1;
	}
	return 0;
}

int func_200(int iParam0)
{
	char* sVar0;

	sVar0 = "";
	switch (iParam0)
	{
		case -321841939:
			sVar0 = "DISCO_DREAM";
			break;
		default:
			break;
	}
	return MISC::GET_HASH_KEY(sVar0);
}

int func_201(int iParam0)
{
	switch (iParam0)
	{
		case -321841939:
			return 299377816;
	}
	return 0;
}

int func_202(int iParam0)
{
	switch (iParam0)
	{
		case -321841939:
			return -861704100;
	}
	return 0;
}

int func_203(int iParam0)
{
	switch (iParam0)
	{
		case -321841939:
			return 92461956;
	}
	return 0;
}

int func_204(int iParam0)
{
	switch (iParam0)
	{
		case -321841939:
			return 649617480;
	}
	return 0;
}

char* func_205(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -321841939:
			switch (iParam1)
			{
				case 0:
					return "TOAST_DREAMCATCHER";
				case 1:
					return "MISSION_COLLECTDREAM";
				default:
					break;
			}
			break;
	}
	return "";
}

char* func_206(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -321841939:
			switch (iParam1)
			{
				case 0:
					return "hud_toasts";
				case 1:
					return "SP_MISSIONS_13";
				default:
					break;
			}
			break;
	}
	return "";
}

char* func_207(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -321841939:
			switch (iParam1)
			{
				case 0:
					return "DISCO_DRM_CHECK1";
				case 1:
					return "DISCO_DRM_CHECK2";
				default:
					break;
			}
			break;
	}
	return "";
}

var func_208(char* sParam0, var uParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	struct<5> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = iParam7;
	Var0.f_1 = sParam8;
	Var0.f_2 = sParam9;
	Var0.f_3 = iParam11;
	Var0.f_4 = iParam4;
	Var0.f_4.f_1 = iParam6;
	Var0.f_4.f_2 = sParam5;
	Var13.f_7 = 1;
	Var13 = iParam10;
	Var13.f_1 = sParam0;
	Var13.f_2 = uParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = _NAMESPACE71::_0x26E87218390E6729(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

int func_209(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case -2108030724:
			return 1826539842;
		case -777592153:
		case -35775921:
			return 1478239863;
		case 425000526:
		case 464413478:
			return -1682377294;
		case -161804536:
			return -2067990682;
		case -1177787273:
			return -812427869;
		case -709811179:
		case 1673499939:
			return 1205599754;
		case -1494823099:
			switch (iParam1)
			{
				case 0:
					return 318818236;
				case 1:
					return 1202155616;
				default:
					break;
			}
			break;
	}
	return 0;
}

void func_210(int iParam0, bool bParam1, bool bParam2)
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

int func_211(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_214();
	iVar1 = func_273(iVar0);
	switch (*uParam0)
	{
		case -415839138:
			if (iVar1 > 9 && iVar1 < 16)
			{
				return 1;
			}
			break;
		case 1535254161:
			if (iVar1 >= 0 && iVar1 <= 4)
			{
				return 1;
			}
			else if (iVar1 >= 23 && iVar1 <= 24)
			{
				return 1;
			}
			break;
		default:
			break;
	}
	return 0;
}

int func_212(var uParam0)
{
	var uVar0;
	var uVar1;

	uVar0 = MISC::_0x4BEB42AEBCA732E9();
	uVar1 = MISC::_0x51021D36F62AAA83();
	if (func_274(uParam0, &uVar0))
	{
		return 1;
	}
	return 0;
}

int func_213(var uParam0)
{
	switch (*uParam0)
	{
		case 1535254161:
			if (func_275(127, 0, 1))
			{
				return 1;
			}
			break;
		default:
			break;
	}
	return 0;
}

var func_214()
{
	return &Global_1899515;
}

void func_215(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_276(*uParam0);
	iVar1 = func_277(*uParam0);
	iVar2 = func_278(*uParam0);
	iVar3 = func_273(*uParam0);
	iVar4 = func_279(*uParam0);
	iVar5 = func_280(*uParam0);
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
	iVar6 = func_281(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_281(iVar1, iVar0);
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
	func_282(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_216(int iParam0)
{
	return &(Global_40.f_297[iParam0]);
}

void func_217(int iParam0, int iParam1)
{
	Global_40.f_297[iParam0] = iParam1;
}

void func_218(int iParam0, var uParam1)
{
	Global_40.f_297[iParam0 + 30] = uParam1;
}

void func_219(var uParam0, bool bParam1, int iParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0[iParam2]))
	{
		if (bParam1)
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED((*uParam0)[iParam2]);
		}
		else
		{
			OBJECT::DELETE_OBJECT((*uParam0)[iParam2]);
		}
	}
}

void func_220(var uParam0, bool bParam1, int iParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_1[iParam2])))
	{
		if (bParam1)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0->f_1[iParam2]);
		}
		else
		{
			PED::DELETE_PED(uParam0->f_1[iParam2]);
		}
	}
}

void func_221(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (!&uParam0->f_12[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(&(uParam0->f_12[iVar0]));
		}
		iVar0++;
	}
}

void func_222(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		if (!&uParam0->f_6[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(&(uParam0->f_6[iVar0]));
		}
		iVar0++;
	}
}

int func_223(int iParam0)
{
	if (!func_283(iParam0))
	{
		return -1;
	}
	return func_284(iParam0);
}

void func_224(int iParam0)
{
	if (!func_285(iParam0))
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

void func_225(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_226(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_227(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_228()
{
	if (PED::_0x3AA24CCC0D451379(Global_35))
	{
		return 0;
	}
	if (PED::_0x42429C674B61238B(Global_35))
	{
		return 0;
	}
	if (PED::_0x9682F850056C9ADE(Global_35))
	{
		return 0;
	}
	if (PED::_0xEF3A8772F085B4AA(Global_35))
	{
		return 0;
	}
	if (!PED::_0xB65A4DAB460A19BD(Global_35) == 0)
	{
		return 0;
	}
	if (PED::_0x226CF9B159E38F42(Global_35))
	{
		return 0;
	}
	if (PED::_0x3BDFCF25B58B0415(Global_35))
	{
		return 0;
	}
	if (PED::_0x0E99E3BF11BB6367(Global_35) || PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 4096, 0))
	{
		return 0;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 32768, 0))
	{
		return 0;
	}
	return 1;
}

int func_229()
{
	if (PED::_IS_PED_SLIDING(Global_35))
	{
		return 0;
	}
	if (PED::IS_PED_SWIMMING(Global_35))
	{
		return 0;
	}
	if (PED::IS_PED_CLIMBING(Global_35))
	{
		return 0;
	}
	if (func_286(Global_35))
	{
		return 0;
	}
	if (PED::IS_PED_FALLING(Global_35))
	{
		return 0;
	}
	if (PED::_0x3E592D0486DEC0F6(Global_35))
	{
		return 0;
	}
	if (PED::IS_PED_RAGDOLL(Global_35))
	{
		return 0;
	}
	if (PED::IS_PED_VAULTING(Global_35))
	{
		return 0;
	}
	if (TASK::IS_PED_RUNNING(Global_35))
	{
		return 0;
	}
	if (TASK::IS_PED_GETTING_UP(Global_35))
	{
		return 0;
	}
	return 1;
}

int func_230()
{
	if (func_287(Global_35) && !Global_1392040->f_2)
	{
		return 0;
	}
	if (func_288(Global_35) && !Global_1392040->f_2)
	{
		return 0;
	}
	return 1;
}

int func_231(bool bParam0)
{
	if (PED::_0xA911EE21EDF69DAF(Global_35) && !Global_1392040->f_2)
	{
		if (bParam0)
		{
			func_289("ITEM_UNUSABLE_CARRYING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	return 1;
}

int func_232(var uParam0)
{
	int iVar0;
	int iVar1;

	if (PED::_0x1D46B417F926D34D(Global_35))
	{
		return 0;
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			return 0;
		}
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
		switch (iVar1)
		{
			case joaat("rowboat"):
			case joaat("handcart"):
				return 0;
			case joaat("breach_cannon"):
			case joaat("gatling_gun"):
			case joaat("gatlingmaxim02"):
			case joaat("hotchkiss_cannon"):
				return 0;
		}
		if ((!func_227(uParam0, 16) && !PED::IS_PED_ON_MOUNT(Global_35)) && VEHICLE::_0x2963B5C1637E8A27(iVar0) == Global_35)
		{
			return 0;
		}
	}
	else if (PED::IS_PED_GETTING_INTO_A_VEHICLE(Global_35))
	{
		return 0;
	}
	else if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (!func_290(uParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_233()
{
	if (PED::IS_PED_HANGING_ON_TO_VEHICLE(Global_35))
	{
		return 0;
	}
	return 1;
}

int func_234(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_235(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1) != 0;
}

void func_236(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, var uParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_118(iParam0, 1);
	func_291(iParam0, 1);
	func_292(iParam0, 128);
}

void func_237(bool bParam0)
{
	if (bParam0)
	{
		func_293(&(Global_40.f_12018.f_42), 1);
	}
	else
	{
		func_294(&(Global_40.f_12018.f_42), 1);
	}
}

bool func_238(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_295(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_296(iParam0);
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
		if (!func_297(iParam0, 1))
		{
			return false;
		}
	}
	return func_298(iParam0, 0, bParam2) >= iParam1;
}

bool func_239(int iParam0)
{
	return func_299(iParam0);
}

int func_240(bool bParam0)
{
	if (func_102() == -1)
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

void func_241()
{
	PAD::DISABLE_CONTROL_ACTION(0, 1367437629, false);
	PAD::DISABLE_CONTROL_ACTION(0, 992265328, false);
	PAD::DISABLE_CONTROL_ACTION(0, -473983589, false);
	PAD::DISABLE_CONTROL_ACTION(0, -719620017, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1053137564, false);
	PAD::DISABLE_CONTROL_ACTION(0, 129547951, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1300031296, false);
}

int func_242()
{
	int iVar0;

	iVar0 = func_300();
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

int func_243(int iParam0)
{
	float fVar0;
	float fVar1;

	if (func_102() != -1)
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
	fVar1 = func_301(MISC::ABSF(fVar1) < 1f, func_301(fVar1 < 0f, -1f, 1f), fVar1);
	return BUILTIN::CEIL(fVar1);
}

int func_244(int iParam0)
{
	if (!func_302(iParam0))
	{
		return 0;
	}
	return func_303(iParam0);
}

int func_245(int iParam0, int iParam1, int iParam2)
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

int func_246(int iParam0)
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

int func_247()
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

void func_248(int iParam0, bool bParam1, int iParam2)
{
	func_304((MISC::GET_GAME_TIMER() + iParam2), !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1955569->f_1.f_2.f_1, iParam0);
	func_305(iParam0);
}

void func_249(int iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_16[2]), 0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[2]), 1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_20[2]), func_306(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_24[2]), "pausemenu_player");
}

void func_250(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	bVar3 = false;
	if (func_307(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_308(iVar5, &iVar2, &iVar0))
			{
				if (!func_295(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_309(iVar2);
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
							if (func_296(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_242() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_242() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_310();
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

char* func_251(int iParam0)
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

var func_252(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_311(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_253(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_312(iParam0))
	{
		return 0;
	}
	if (!func_128())
	{
		return 0;
	}
	if (!func_313(iParam0, &iVar0, &iVar1))
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

bool func_254(int iParam0)
{
	int iVar0;

	iVar0 = func_223(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_255(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

char* func_256(var uParam0)
{
	switch (*uParam0)
	{
		case -1084929085:
			return "DISC_VOL_BOAT_IN_TREE";
		case -490142739:
			return "DISC_VOL_STUFFED_GORILLA";
		case 1464664327:
			return "DISC_VOL_WITCHES_CAULDRON";
		case 74587361:
			return "DISC_VOL_LOVE_MESSAGE";
		case 221420861:
			return "DISC_VOL_WHISPERING_TREES";
		case 1535254161:
			return "DISC_VOL_CIV_BATTLEFIELD";
		case 683269210:
			return "DISC_VOL_ABANDONED_MISSION";
		case -30872859:
			return "DISC_VOL_SUN_DIAL";
		case -1891628345:
			return "DISC_VOL_UTE_WICKIUP";
		case 1505050944:
			return "DISC_VOL_DESERT_SKELETONS";
		case 330993088:
			return "DISC_VOL_OLD_RR_CAMP";
		case 2000209669:
			return "DISC_VOL_STRANGE_STATUES";
		case -1882503209:
			return "DISC_VOL_ABD_FURNITURE";
		case 1734766691:
			return "DISC_VOL_BRUSH_FIRE";
		case 1347913620:
			return "DISC_VOL_CIV_WAR_FORT";
		case 58958195:
			return "DISC_VOL_CRASHED_AIRSHIP";
		case -2019711818:
			return "DISC_VOL_DERAILED_TRAIN";
		case -1283611369:
			return "DISC_VOL_DESERT_WAGON";
		case -919236330:
			return "DISC_VOL_DESERTED_FARM";
		case -1243267511:
			return "DISC_VOL_FACE_TREES";
		case 918206817:
			return "DISC_VOL_FIRE_TOWER";
		case -1053108445:
			return "DISC_VOL_FLY_MACHINE";
		case -1646022773:
			return "DISC_VOL_FOSSIL_MAN";
		case -1787770845:
			return "DISC_VOL_GIANT_REMAINS";
		case -409986722:
			return "DISC_VOL_GRAVESTONE_TREE";
		case -148407339:
			return "DISC_VOL_MAMMOTH";
		case -979575591:
			return "DISC_VOL_OBELISK";
		case 230001763:
			return "DISC_VOL_GRAVESTONES";
		case -1609238411:
			return "DISC_VOL_OLD_SCRIPT";
		case 921081956:
			return "DISC_VOL_ONE_ROOM_CHURCH";
		case 173549940:
			return "DISC_VOL_PILE_OF_SKULLS";
		case -1686810506:
			return "DISC_VOL_POTS_TREE";
		case -1923503631:
			return "DISC_VOL_ROPE_BRIDGE";
		case -607940493:
			return "DISC_VOL_SERPENT_MOUND";
		case 1986618633:
			return "DISC_VOL_SPERM_WHALE";
		case -1960242214:
			return "DISC_VOL_UTOPIAN_COLONY";
		case -986176781:
			return "DISC_VOL_WHALE_BONE";
		case -1848895400:
			return "DISC_VOL_QUARRY";
		case -161804536:
			return "DISC_VOL_STONEHENGE";
		case 1833243216:
			return "DISC_VOL_MOUNTAIN_CLIMB";
		case 1154568952:
			return "DISC_VOL_SWAMP_FACTORY";
		case 1431862613:
			return "DISC_VOL_EARLY_SETTLERS";
		case -1958832660:
			return "DISC_VOL_ABANDON_CHURCH";
		case -232974724:
			return "DISC_VOL_TRADING_POST";
		case -1109016944:
			return "DISC_VOL_GHOST_TOWN";
		case 308500632:
			return "DISC_VOL_HIDDEN_TUNNEL";
		case -1505275983:
			return "DISC_VOL_WARPED_TREE";
		case -1761189332:
			return "DISC_VOL_REGISTER_ROCK";
		case -1614148516:
			return "DISC_VOL_PHONOGRAPH";
		case -1308658310:
			return "DISC_VOL_POWDER_KEG";
		case 1519472817:
			if (uParam0->f_4 == 0)
			{
				return "DISC_VOL_BROKEN_BRIDGE_1";
			}
			else if (uParam0->f_4 == 1)
			{
				return "DISC_VOL_BROKEN_BRIDGE_2";
			}
			break;
		case -1859023693:
			if (uParam0->f_4 == 0)
			{
				return "DISC_VOL_BROKEN_WAGON_1";
			}
			else if (uParam0->f_4 == 1)
			{
				return "DISC_VOL_BROKEN_WAGON_2";
			}
			else if (uParam0->f_4 == 2)
			{
				return "DISC_VOL_BROKEN_WAGON_3";
			}
			else if (uParam0->f_4 == 3)
			{
				return "DISC_VOL_BROKEN_WAGON_4";
			}
			else if (uParam0->f_4 == 4)
			{
				return "DISC_VOL_BROKEN_WAGON_5";
			}
			else if (uParam0->f_4 == 5)
			{
				return "DISC_VOL_BROKEN_WAGON_6";
			}
			else if (uParam0->f_4 == 6)
			{
				return "DISC_VOL_BROKEN_WAGON_7";
			}
			else if (uParam0->f_4 == 7)
			{
				return "DISC_VOL_BROKEN_WAGON_8";
			}
			else if (uParam0->f_4 == 8)
			{
				return "DISC_VOL_BROKEN_WAGON_9";
			}
			else if (uParam0->f_4 == 9)
			{
				return "DISC_VOL_BROKEN_WAGON_10";
			}
			else if (uParam0->f_4 == 10)
			{
				return "DISC_VOL_BROKEN_WAGON_11";
			}
			break;
		case -544327665:
			if (uParam0->f_4 == 0)
			{
				return "DISC_VOL_OLD_FIREPIT_1";
			}
			else if (uParam0->f_4 == 1)
			{
				return "DISC_VOL_OLD_FIREPIT_2";
			}
			else if (uParam0->f_4 == 2)
			{
				return "DISC_VOL_OLD_FIREPIT_3";
			}
			break;
		case 1120968795:
			if (uParam0->f_4 == 0)
			{
				return "DISC_VOL_OLD_FIREPLACE_1";
			}
			else if (uParam0->f_4 == 1)
			{
				return "DISC_VOL_OLD_FIREPLACE_2";
			}
			break;
		case -834293086:
			if (uParam0->f_4 == 0)
			{
				return "DISC_VOL_HORNETS_NEST_1";
			}
			else if (uParam0->f_4 == 1)
			{
				return "DISC_VOL_HORNETS_NEST_2";
			}
			else if (uParam0->f_4 == 2)
			{
				return "DISC_VOL_HORNETS_NEST_3";
			}
			else if (uParam0->f_4 == 3)
			{
				return "DISC_VOL_HORNETS_NEST_4";
			}
			else if (uParam0->f_4 == 4)
			{
				return "DISC_VOL_HORNETS_NEST_5";
			}
			else if (uParam0->f_4 == 5)
			{
				return "DISC_VOL_HORNETS_NEST_6";
			}
			else if (uParam0->f_4 == 6)
			{
				return "DISC_VOL_HORNETS_NEST_7";
			}
			else if (uParam0->f_4 == 7)
			{
				return "DISC_VOL_HORNETS_NEST_8";
			}
			else if (uParam0->f_4 == 8)
			{
				return "DISC_VOL_HORNETS_NEST_9";
			}
			else if (uParam0->f_4 == 9)
			{
				return "DISC_VOL_HORNETS_NEST_10";
			}
			break;
		case 404434344:
			return "DISC_VOL_GRAVE_ARTHUR";
		case -1761578407:
			if (uParam0->f_4 == 0)
			{
				return "DISC_VOL_GRAVE_ARTHUR";
			}
			else if (uParam0->f_4 == 1)
			{
				return "DISC_VOL_GRAVE_JENNY";
			}
			else if (uParam0->f_4 == 2 || uParam0->f_4 == 3)
			{
				return "DISC_VOL_GRAVE_HOSEA_LENNY";
			}
			else if (uParam0->f_4 == 4)
			{
				return "DISC_VOL_GRAVE_SEAN";
			}
			else if (uParam0->f_4 == 5)
			{
				return "DISC_VOL_GRAVE_DAVEY";
			}
			else if (uParam0->f_4 == 6)
			{
				return "DISC_VOL_GRAVE_KIERAN";
			}
			else if (uParam0->f_4 == 7)
			{
				return "DISC_VOL_GRAVE_SUSAN";
			}
			else if (uParam0->f_4 == 8)
			{
				return "DISC_VOL_GRAVE_EAGLE";
			}
			else if (uParam0->f_4 == 9)
			{
				return "DISC_VOL_GRAVE_1";
			}
			else if (uParam0->f_4 == 10)
			{
				return "DISC_VOL_GRAVE_2";
			}
			break;
		case -321841939:
			if (uParam0->f_4 == 0)
			{
				return "DISCO_DREAMCATCHERS_01";
			}
			else if (uParam0->f_4 == 1)
			{
				return "DISCO_DREAMCATCHERS_02";
			}
			else if (uParam0->f_4 == 2)
			{
				return "DISCO_DREAMCATCHERS_03";
			}
			else if (uParam0->f_4 == 3)
			{
				return "DISCO_DREAMCATCHERS_04";
			}
			else if (uParam0->f_4 == 4)
			{
				return "DISCO_DREAMCATCHERS_05";
			}
			else if (uParam0->f_4 == 5)
			{
				return "DISCO_DREAMCATCHERS_06";
			}
			else if (uParam0->f_4 == 6)
			{
				return "DISCO_DREAMCATCHERS_07";
			}
			else if (uParam0->f_4 == 7)
			{
				return "DISCO_DREAMCATCHERS_08";
			}
			else if (uParam0->f_4 == 8)
			{
				return "DISCO_DREAMCATCHERS_09";
			}
			else if (uParam0->f_4 == 9)
			{
				return "DISCO_DREAMCATCHERS_10";
			}
			else if (uParam0->f_4 == 10)
			{
				return "DISCO_DREAMCATCHERS_11";
			}
			else if (uParam0->f_4 == 11)
			{
				return "DISCO_DREAMCATCHERS_12";
			}
			else if (uParam0->f_4 == 12)
			{
				return "DISCO_DREAMCATCHERS_13";
			}
			else if (uParam0->f_4 == 13)
			{
				return "DISCO_DREAMCATCHERS_14";
			}
			else if (uParam0->f_4 == 14)
			{
				return "DISCO_DREAMCATCHERS_15";
			}
			else if (uParam0->f_4 == 15)
			{
				return "DISCO_DREAMCATCHERS_16";
			}
			else if (uParam0->f_4 == 16)
			{
				return "DISCO_DREAMCATCHERS_17";
			}
			else if (uParam0->f_4 == 17)
			{
				return "DISCO_DREAMCATCHERS_18";
			}
			else if (uParam0->f_4 == 18)
			{
				return "DISCO_DREAMCATCHERS_19";
			}
			else if (uParam0->f_4 == 19)
			{
				return "DISCO_DREAMCATCHERS_20";
			}
			break;
		case -890175011:
			if (uParam0->f_4 == 0)
			{
				return "DISC_VOL_VAMPIRE_CLUE_1";
			}
			else if (uParam0->f_4 == 1)
			{
				return "DISC_VOL_VAMPIRE_CLUE_2";
			}
			else if (uParam0->f_4 == 2)
			{
				return "DISC_VOL_VAMPIRE_CLUE_3";
			}
			else if (uParam0->f_4 == 3)
			{
				return "DISC_VOL_VAMPIRE_CLUE_4";
			}
			else if (uParam0->f_4 == 4)
			{
				return "DISC_VOL_VAMPIRE_CLUE_5";
			}
			break;
		case 677950956:
			if (uParam0->f_4 == 0)
			{
				return "DISC_VOL_AZTEC_CLUE_1";
			}
			else if (uParam0->f_4 == 1)
			{
				return "DISC_VOL_AZTEC_CLUE_2";
			}
			else if (uParam0->f_4 == 2)
			{
				return "DISC_VOL_AZTEC_CLUE_3";
			}
			else if (uParam0->f_4 == 3)
			{
				return "DISC_VOL_AZTEC_CLUE_4";
			}
			else if (uParam0->f_4 == 4)
			{
				return "DISC_VOL_AZTEC_CLUE_5";
			}
			else if (uParam0->f_4 == 5)
			{
				return "DISC_VOL_AZTEC_CLUE_6";
			}
			break;
		case 503180747:
			if (uParam0->f_4 == 0)
			{
				return "DISC_VOL_KILL_ZONE_1";
			}
			else if (uParam0->f_4 == 1)
			{
				return "DISC_VOL_KILL_ZONE_2";
			}
			break;
		case -1272862985:
			if (uParam0->f_4 == 0)
			{
				return "DISC_VOL_TRAIL_TREES_1";
			}
			else if (uParam0->f_4 == 1)
			{
				return "DISC_VOL_TRAIL_TREES_2";
			}
			else if (uParam0->f_4 == 2)
			{
				return "DISC_VOL_TRAIL_TREES_3";
			}
			else if (uParam0->f_4 == 3)
			{
				return "DISC_VOL_TRAIL_TREES_4";
			}
			break;
	}
	return "";
}

int func_257(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_314(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_258(int iParam0, int iParam1)
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

int func_259(int iParam0, int iParam1)
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

bool func_260(int iParam0, int iParam1)
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
	if (!func_258(iParam0, iVar0))
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

void func_261(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

int func_262(var uParam0, var uParam1)
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

	uParam1->f_10 = func_315(uParam1->f_10);
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
		if (func_22(uParam1->f_6))
		{
		}
	}
	bVar0 = func_128();
	if (*uParam1)
	{
		if (bVar0 && !func_103(((*Global_1835011)[4 /*74*/])->f_1, 1))
		{
			if (func_316(5))
			{
				func_317(5);
				func_318(5);
				func_319(0);
				func_320(0);
			}
		}
	}
	if (func_321(Global_36) == 8)
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_103(((*Global_1835011)[37 /*74*/])->f_1, 1)) && !func_103(((*Global_1835011)[43 /*74*/])->f_1, 1))
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_103(((*Global_1835011)[43 /*74*/])->f_1, 1)) && !func_103(((*Global_1835011)[44 /*74*/])->f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*uParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_322(iVar1);
	bVar3 = false;
	bVar4 = false;
	iVar5 = 0;
	if (func_323(iVar1))
	{
		bVar3 = true;
		if (func_324(iVar1))
		{
			bVar4 = true;
		}
		if (func_325(iVar1))
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
				func_326(uParam1->f_10);
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
			if (!func_316(0) && func_316(1))
			{
				func_327(1, 0);
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_328())
			{
				func_329();
			}
			func_319(0);
			func_320(0);
			func_330(uParam1->f_6);
		}
	}
	if (!func_323(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_331(uParam1->f_10) == 0 || func_332(uParam1->f_10) == 0) || func_333(uParam1->f_10) == 0)
			{
				func_334(uParam1->f_10);
			}
			func_335(uParam1->f_10);
			func_336(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*uParam0 = 0;
			return 0;
		}
		*uParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_322(iVar1);
	bVar3 = false;
	bVar4 = false;
	iVar5 = 0;
	if (func_323(iVar1))
	{
		bVar3 = true;
		if (func_324(iVar1))
		{
			bVar4 = true;
		}
		if (func_325(iVar1))
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
			if (!func_22(uParam1->f_6))
			{
				ENTITY::SET_ENTITY_COORDS(iVar2, uParam1->f_6, false, true, true, true);
				ENTITY::SET_ENTITY_HEADING(iVar2, uParam1->f_9);
				ENTITY::_0x9587913B9E772D29(iVar2, 0);
			}
		}
	}
	if (func_337(uParam1->f_10))
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
			Var8 = { func_338(uParam1->f_10) };
			Var10 = { func_339() };
			func_340(iVar2, &Var8, &Var10, 0);
			PLAYER::_0xD2CB0FB0FDCB473D(iVar6, iVar2);
			PED::SET_PED_CONFIG_FLAG(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*uParam0 = 2;
		return iVar2;
	}
	if (!func_341(uParam1->f_10))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, true, true);
		func_342(uParam1->f_10);
		if (uParam1->f_2 && !func_22(uParam1->f_6))
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
	func_343(uParam1->f_10);
	if (func_341(uParam1->f_10))
	{
		iVar16 = func_344(uParam1->f_10);
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

bool func_263(int iParam0)
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

int func_264(int iParam0)
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

bool func_265()
{
	return func_239(1);
}

Vector3 func_266(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case 2000209669:
			if (iParam1 == 0)
			{
				return 0f, 0f, 102.86f;
			}
			else if (iParam1 == 1)
			{
				return 0f, 0f, -102.86f;
			}
			else if (iParam1 == 2)
			{
				return 0f, 0f, 51.43f;
			}
			else if (iParam1 == 3)
			{
				return 0f, 0f, 0f;
			}
			else if (iParam1 == 4)
			{
				return 0f, 0f, 154.29f;
			}
			else if (iParam1 == 5)
			{
				return 0f, 0f, -154.29f;
			}
			else if (iParam1 == 6)
			{
				return 0f, 0f, -51.43f;
			}
			else if (iParam1 == 7)
			{
				return 0f, 0f, -135f;
			}
			break;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_267(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, Vector3 vParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

int func_268(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

float func_269(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

void func_270(int iParam0, float fParam1, int iParam2)
{
	int iVar0;
	char* sVar1;

	if (func_102() != -1)
	{
		return;
	}
	if (!func_244(15))
	{
		return;
	}
	Global_40.f_11095[iParam0] = fParam1;
	iVar0 = func_345(BUILTIN::CEIL(&(Global_40.f_11095[iParam0])));
	ATTRIBUTE::_0xC6258F41D86676E0(Global_35, func_346(iParam0), iVar0);
	func_348(func_347(iParam0), (100f * (BUILTIN::TO_FLOAT(iVar0) / 100f)), 0);
	if (((fParam1 <= func_349(15) && iParam0 == 1) && PED::IS_PED_ON_FOOT(Global_35)) && !PED::IS_PED_SWIMMING(Global_35))
	{
		func_350(84, 1);
	}
	if (fParam1 <= -99.999f)
	{
		func_350(func_351(iParam0), 1);
	}
	sVar1 = func_352(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		PED::_0x437C08DB4FEBE2BD(Global_35, sVar1, BUILTIN::TO_FLOAT(iVar0), -1);
	}
}

int func_271(var uParam0)
{
	switch (*uParam0)
	{
		case 404434344:
			return -1262584390;
		case -1761578407:
			if (uParam0->f_4 == 0)
			{
				return -1262584390;
			}
			else if (uParam0->f_4 == 1)
			{
				return -1323467054;
			}
			else if (uParam0->f_4 == 2)
			{
				return -1962017335;
			}
			else if (uParam0->f_4 == 3)
			{
				return 652769759;
			}
			else if (uParam0->f_4 == 4)
			{
				return 1495670958;
			}
			else if (uParam0->f_4 == 5)
			{
				return 603641236;
			}
			else if (uParam0->f_4 == 6)
			{
				return -723785739;
			}
			else if (uParam0->f_4 == 7)
			{
				return 1012542113;
			}
			else if (uParam0->f_4 == 8)
			{
				return 1273005666;
			}
			break;
		default:
			break;
	}
	return 0;
}

int func_272(var uParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar6 = ENTITY::_0x886171A12F400B89(iParam2, iVar0, 3);
	if (iVar6 >= iParam3)
	{
	}
	iVar4 = 0;
	while (iVar4 < iVar6)
	{
		uVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar0);
		iVar2 = uVar1;
		if (ENTITY::IS_ENTITY_AN_OBJECT(iVar2))
		{
			iVar5 = 0;
			while (iVar5 < *uParam1)
			{
				if (uParam1[iVar5] == 0)
				{
					(*uParam0)[iVar3] = uVar1;
					iVar3++;
					iVar5 = *uParam1;
				}
				else if (ENTITY::GET_ENTITY_MODEL(iVar2) == uParam1[iVar5])
				{
					(*uParam0)[iVar3] = uVar1;
					iVar3++;
					iVar5 = *uParam1;
				}
				iVar5++;
			}
		}
		if (iVar3 >= iParam3)
		{
			ITEMSET::DESTROY_ITEMSET(iVar0);
			return iParam3;
		}
		iVar4++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return iVar3;
}

int func_273(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_274(var uParam0, var uParam1)
{
	switch (*uParam0)
	{
		case -415839138:
			switch (*uParam1)
			{
				case -1148613331:
				case -702816767:
				case -173507739:
				case 433385945:
				case 821931868:
				case 1500834021:
				case 1632247697:
					return 1;
			}
			break;
		case 1535254161:
			switch (*uParam1)
			{
				case -1233681761:
				case 2082228755:
					return 1;
			}
			break;
		case 397377585:
			switch (*uParam1)
			{
				case -1721991356:
				case -1148613331:
				case -702816767:
				case -173507739:
				case 433385945:
				case 821931868:
				case 1500834021:
				case 1632247697:
					return 1;
			}
			break;
		default:
			break;
	}
	return 0;
}

int func_275(int iParam0, bool bParam1, int iParam2)
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
		if (func_353())
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
		iVar0 = func_354(&(Global_1898164->f_1[0 /*5*/]));
		if (func_255(iVar0) && func_355(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_283(&(Global_1898164->f_1[0 /*5*/])))
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

var func_276(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_356(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_277(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_278(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_279(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_280(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_281(int iParam0, int iParam1)
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

void func_282(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_357(uParam0, iParam6);
	func_358(uParam0, iParam5);
	func_359(uParam0, iParam4);
	func_360(uParam0, iParam3);
	func_361(uParam0, iParam2);
	func_362(uParam0, iParam1);
}

bool func_283(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_284(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_363(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

bool func_285(int iParam0)
{
	return func_235(iParam0, 2);
}

int func_286(int iParam0)
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

var func_287(int iParam0)
{
	return (func_364(iParam0, 4) || func_364(iParam0, 5));
}

int func_288(int iParam0)
{
	var uVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 0, &uVar0, 1, 1) != 0)
	{
		return 1;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 2, &uVar0, 1, 1) != 0)
	{
		return 1;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 1, &uVar0, 1, 1) != 0)
	{
		return 1;
	}
	if (PED::_0x758F081DB204DDDE(iParam0))
	{
		return 1;
	}
	return 0;
}

var func_289(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_290(var uParam0)
{
	int iVar0;

	iVar0 = PED::GET_MOUNT(Global_35);
	if (!func_365(Global_35))
	{
		return 0;
	}
	if (!func_227(uParam0, 16) && !func_366(iVar0, 0))
	{
		return 0;
	}
	return 1;
}

void func_291(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
	}
}

void func_292(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 || iParam1);
}

void func_293(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_294(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_295(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_296(int iParam0)
{
	vector3 vVar0;

	if (!func_295(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_297(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_295(iParam0, 0))
	{
		return 0;
	}
	if (Global_1935630->f_12)
	{
		return 0;
	}
	iVar0 = func_367(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_368("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_369(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_370(Var4.f_4))
			{
			}
			else if (WEAPON::_0x5C2EA6C44F515F34(Var4.f_4) == iVar0)
			{
				func_371(iVar1);
				return 1;
			}
			iVar3++;
		}
		func_371(iVar1);
	}
	return 0;
}

int func_298(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_295(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_296(iParam0);
	if (iVar0 == 307971639 || (iParam1 && iVar0 == -427144552))
	{
		iVar1 = func_367(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_372(iParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_240(bParam2), iParam0, 0);
	return iVar2;
}

bool func_299(int iParam0)
{
	return func_39(Global_1935496->f_27, iParam0);
}

var func_300()
{
	return Global_40.f_11095.f_35;
}

float func_301(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_302(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_303(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_304(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_373(bParam1);
	}
}

void func_305(int iParam0)
{
	_NAMESPACE84::_0x74BCCEB233AD95B2(-156028329, iParam0);
}

char* func_306(int iParam0)
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

int func_307(var uParam0)
{
	vector3 vVar0;

	if (!func_374(23, &vVar0))
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

int func_308(int iParam0, var uParam1, var uParam2)
{
	struct<4> Var0;
	var uVar5;

	if (!func_374(23, &Var0))
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

int func_309(int iParam0)
{
	return iParam0;
}

int func_310()
{
	int iVar0;

	iVar0 = func_242();
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

void func_311(char* sParam0, char* sParam1, int iParam2)
{
	_NAMESPACE84::_0x74BCCEB233AD95B2(-466562563, MISC::GET_HASH_KEY(sParam0));
	_NAMESPACE84::_0x74BCCEB233AD95B2(1885309238, MISC::GET_HASH_KEY(sParam1));
	_NAMESPACE84::_0x74BCCEB233AD95B2(-826961056, iParam2);
}

int func_312(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return 0;
	}
	return 1;
}

int func_313(int iParam0, var uParam1, var uParam2)
{
	if (!func_312(iParam0))
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

void func_314(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_375(iParam1))
		{
			func_174(iParam0, 41788943);
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
			func_376(iParam0, 0, 1);
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
			func_377(iParam0, 0);
			bVar0 = true;
		}
		func_378(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	}
}

int func_315(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_316(int iParam0)
{
	iParam0 = func_315(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (func_333(iParam0) == 0)
	{
		return 0;
	}
	return 1;
}

void func_317(int iParam0)
{
	int iVar0;
	int iVar1;

	iParam0 = func_315(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_323(iParam0))
	{
		return;
	}
	iVar0 = func_322(iParam0);
	func_379(iParam0);
	if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
	if (PED::_0xAA9F048DCF69B6DC(iVar1))
	{
		if (!func_380(iVar1))
		{
			PED::SET_PED_MODEL_IS_SUPPRESSED(iVar1, false);
		}
	}
	PED::DELETE_PED(&iVar0);
	func_381(iParam0, 0);
	func_382(iParam0);
}

void func_318(int iParam0)
{
	struct<2> Var0;
	int iVar2;
	int iVar3;

	iParam0 = func_315(iParam0);
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
	func_383(&Var0);
	func_384(iParam0, Var0);
	func_385(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_15));
	func_386(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_298));
	func_387(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_356));
	func_388(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_389(iVar2, (Global_40.f_1095.f_1[iParam0 /*436*/])->f_398[iVar2 /*4*/]);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_390(iVar3, (Global_40.f_1095.f_1[iParam0 /*436*/])->f_407[iVar3 /*4*/]);
		iVar3++;
	}
	func_391(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_420));
	func_392(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_422));
	func_393(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_425));
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

void func_319(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_320(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

int func_321(vector3 vParam0)
{
	return func_394(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

int func_322(int iParam0)
{
	iParam0 = func_315(iParam0);
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

int func_323(int iParam0)
{
	iParam0 = func_315(iParam0);
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

int func_324(int iParam0)
{
	int iVar0;

	iParam0 = func_315(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_323(iParam0))
	{
		return 0;
	}
	iVar0 = func_322(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_325(int iParam0)
{
	int iVar0;

	iParam0 = func_315(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_323(iParam0))
	{
		return 0;
	}
	iVar0 = func_322(iParam0);
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

void func_326(int iParam0)
{
	int iVar0;

	iParam0 = func_315(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_323(iParam0))
	{
		return;
	}
	iVar0 = func_322(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	ENTITY::_SET_ENTITY_HEALTH(iVar0, 0, 0);
}

void func_327(int iParam0, int iParam1)
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
	func_395(iParam0);
	func_395(iParam0);
	func_396(iParam0, iParam1);
	func_397(iParam0, iParam1);
	func_398(iParam0, iParam1);
	iVar1 = func_322(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_399(iVar1);
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
	iVar3 = func_322(iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_399(iVar3);
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
	func_400();
}

int func_328()
{
	int iVar0;

	iVar0 = func_401();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 1;
	}
	return 0;
}

void func_329()
{
	int iVar0;

	iVar0 = func_401();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	OBJECT::DELETE_OBJECT(&iVar0);
	func_402(0);
}

void func_330(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

int func_331(int iParam0)
{
	iParam0 = func_315(iParam0);
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

int func_332(int iParam0)
{
	iParam0 = func_315(iParam0);
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

int func_333(int iParam0)
{
	iParam0 = func_315(iParam0);
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

void func_334(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;

	iParam0 = func_315(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_403(&uVar0, &uVar1, &uVar2);
	func_404(iParam0, uVar0);
	func_405(iParam0, uVar1);
	func_406(iParam0, uVar2);
	func_407(iParam0, 1);
	func_408(iParam0, 1);
}

void func_335(int iParam0)
{
	iParam0 = func_315(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_409(iParam0, 1);
}

void func_336(int iParam0, vector3 vParam1, var uParam4)
{
	iParam0 = func_315(iParam0);
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

int func_337(int iParam0)
{
	iParam0 = func_315(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return func_410(iParam0, 1);
}

struct<2> func_338(int iParam0)
{
	struct<2> Var0;
	var uVar2;
	var uVar3;

	iParam0 = func_315(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!func_411(iParam0, &uVar2))
	{
	}
	if (!func_412(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<6> func_339()
{
	struct<6> Var0;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;

	if (func_413(-997150586, &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_413(-1189569496, &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_413(325139909, &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_413(1310070322, &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_413(986998820, &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_413(-415648720, &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

void func_340(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_414(iParam0);
	func_415(iParam0, uParam1);
	func_416(iParam0);
	func_417(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_418(iParam0, iParam3, 0);
	}
	PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 1);
}

int func_341(int iParam0)
{
	iParam0 = func_315(iParam0);
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

void func_342(int iParam0)
{
	iParam0 = func_315(iParam0);
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

void func_343(int iParam0)
{
	int iVar0;

	iParam0 = func_315(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_344(iParam0);
	if (!SCRIPTS::_DOES_THREAD_EXIST(iVar0))
	{
		func_382(iParam0);
	}
	else if (!SCRIPTS::IS_THREAD_ACTIVE(iVar0, false))
	{
		func_382(iParam0);
	}
}

int func_344(int iParam0)
{
	iParam0 = func_315(iParam0);
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

int func_345(int iParam0)
{
	float fVar0;

	fVar0 = (BUILTIN::TO_FLOAT(iParam0 + 100) / 200f);
	return BUILTIN::CEIL((100f * fVar0));
}

int func_346(int iParam0)
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

int func_347(int iParam0)
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

void func_348(int iParam0, float fParam1, int iParam2)
{
	char* sVar0;

	sVar0 = func_419(iParam0, 0, 0, 0);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_12[0]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_16[0]), iParam2);
}

float func_349(int iParam0)
{
	float fVar0;

	fVar0 = (BUILTIN::TO_FLOAT(iParam0) / 100f);
	return ((fVar0 * 200f) - 100f);
}

void func_350(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_420(iParam0, &iVar0, &iVar1);
	if (!func_421(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_422(iVar0, iVar1);
}

int func_351(int iParam0)
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

char* func_352(int iParam0)
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

int func_353()
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

int func_354(int iParam0)
{
	if (!func_283(iParam0))
	{
		return -1;
	}
	return func_424(func_423(iParam0));
}

bool func_355(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_356(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_357(var uParam0, int iParam1)
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

void func_358(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 62914560);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_359(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_277(*uParam0);
	iVar1 = func_276(*uParam0);
	if (iParam1 < 1 || iParam1 > func_281(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4063232);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_360(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 126976);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_361(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4032);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_362(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 63);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

int func_363(int iParam0)
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

int func_364(int iParam0, int iParam1)
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

int func_365(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iParam0, true);
	}
	return 0;
}

int func_366(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;

	if (bParam1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			return 0;
		}
		if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
		{
			return 0;
		}
	}
	fVar0 = ENTITY::GET_ENTITY_SPEED(iParam0);
	fVar1 = PED::_0xCA95924C893A0C91(iParam0, fVar0);
	if (fVar1 <= 1.5f)
	{
		return 1;
	}
	return 0;
}

int func_367(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_295(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_296(iParam0);
	if (iVar0 == -427144552 && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_0x5C2EA6C44F515F34(iParam0);
	}
	else if (iVar0 == 307971639 && WEAPON::_0x1F7977C9101F807F(iParam0))
	{
		return iParam0;
	}
	if (func_425(iParam0, 1399091007))
	{
		func_426(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_368(char* sParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	*uParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_240(bParam4), sParam0, iParam3, uParam2);
	if (*uParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_369(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_370(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("weapon_unarmed"));
}

int func_371(int iParam0)
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

int func_372(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_427(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_429(&Var0, func_428(0));
	}
	if (!func_430(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_371(iVar14);
	return uVar15;
}

void func_373(bool bParam0)
{
	func_431(bParam0);
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

int func_374(int iParam0, var uParam1)
{
	if (!func_432(iParam0))
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

int func_375(int iParam0)
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

void func_376(int iParam0, int iParam1, bool bParam2)
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

void func_377(int iParam0, bool bParam1)
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

void func_378(int iParam0, int iParam1)
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

void func_379(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;

	iParam0 = func_315(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_322(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_433(iVar6);
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

int func_380(int iParam0)
{
	if (!func_434(iParam0))
	{
		return 0;
	}
	if (!func_435())
	{
		return 1;
	}
	return 0;
}

void func_381(int iParam0, int iParam1)
{
	iParam0 = func_315(iParam0);
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

void func_382(int iParam0)
{
	iParam0 = func_315(iParam0);
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

void func_383(var uParam0)
{
	*uParam0 = -377364164; /* GXTEntry: "Natural" */
	uParam0->f_1 = 357708345; /* GXTEntry: "Natural" */
}

void func_384(int iParam0, struct<2> Param1)
{
	iParam0 = func_315(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_436(iParam0, Param1))
	{
	}
	if (!func_437(iParam0, Param1.f_1))
	{
	}
}

void func_385(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_438((*uParam0)[iVar0 /*94*/]);
		iVar0++;
	}
}

void func_386(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 57)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_387(var uParam0)
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

void func_388(var uParam0)
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

void func_389(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 100;
	*uParam1 = iVar0;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
}

void func_390(int iParam0, var uParam1)
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

void func_391(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1f;
}

void func_392(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -15;
}

void func_393(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
}

int func_394(int iParam0)
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

void func_395(int iParam0)
{
	iParam0 = func_315(iParam0);
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

void func_396(int iParam0, int iParam1)
{
	MISC::_COPY_MEMORY(&(Global_1900383->f_508), Global_40.f_1095.f_1[iParam1 /*436*/], 436);
	MISC::_COPY_MEMORY(Global_40.f_1095.f_1[iParam1 /*436*/], Global_40.f_1095.f_1[iParam0 /*436*/], 436);
	MISC::_COPY_MEMORY(Global_40.f_1095.f_1[iParam0 /*436*/], &(Global_1900383->f_508), 436);
}

void func_397(int iParam0, int iParam1)
{
	MISC::_COPY_MEMORY(&(Global_1900383->f_463), (*Global_1900383)[iParam1 /*45*/], 45);
	MISC::_COPY_MEMORY((*Global_1900383)[iParam1 /*45*/], (*Global_1900383)[iParam0 /*45*/], 45);
	MISC::_COPY_MEMORY((*Global_1900383)[iParam0 /*45*/], &(Global_1900383->f_463), 45);
}

int func_398(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<4> Var29;
	bool bVar58;
	int iVar59;

	Var0.f_9 = -1591664384;
	Var29.f_9 = -1591664384;
	if (!func_439(iParam0, &Var0))
	{
		return 0;
	}
	bVar58 = false;
	if (!func_439(iParam1, &Var29))
	{
		bVar58 = true;
	}
	if (bVar58)
	{
		iVar59 = func_440(iParam1);
		if (iVar59 == 0)
		{
			return 0;
		}
		if (!func_441(Var0, Var0.f_5, iVar59, 0, 0))
		{
			return 0;
		}
	}
	else if (!func_442(Var0, Var29, 0, 0))
	{
		return 0;
	}
	return 1;
}

void func_399(int iParam0)
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
	if (func_443(iParam0))
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
	if (func_444(iParam0))
	{
		uVar3 = func_445(iParam0);
		if (func_446(uVar3))
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

void func_400()
{
	if (func_323(0))
	{
		func_447(0);
	}
	if (func_323(1))
	{
		func_447(1);
	}
	if (func_323(5))
	{
		func_447(5);
	}
	if (func_323(6))
	{
		func_395(6);
	}
}

var func_401()
{
	return Global_1900383->f_393;
}

void func_402(int iParam0)
{
	Global_1900383->f_393 = iParam0;
}

int func_403(var uParam0, int iParam1, var uParam2)
{
	bool bVar0;

	*uParam0 = 0;
	*iParam1 = 0;
	*uParam2 = 0;
	if (func_128())
	{
		if (func_121())
		{
			bVar0 = false;
			if (!func_103(((*Global_1835011)[15 /*74*/])->f_1, 1) && !func_244(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*uParam0 = func_448();
				*iParam1 = func_449();
				*uParam2 = func_450();
				return 1;
			}
			else
			{
				*uParam0 = func_451();
				*iParam1 = func_452();
				*uParam2 = func_453();
				return 1;
			}
		}
		else if (func_15())
		{
			if (!func_103(((*Global_1835011)[60 /*74*/])->f_1, 1))
			{
				*uParam0 = func_454();
				*iParam1 = func_455();
				*uParam2 = func_456();
				return 1;
			}
			else
			{
				*uParam0 = func_457();
				*iParam1 = func_458();
				*uParam2 = func_459();
				return 1;
			}
		}
	}
	else if (func_121())
	{
		*uParam0 = func_460();
		*iParam1 = func_461();
		*uParam2 = func_462();
		return 1;
	}
	else if (func_15())
	{
		*uParam0 = func_463();
		*iParam1 = func_464();
		*uParam2 = func_465();
		return 1;
	}
	return 0;
}

void func_404(int iParam0, var uParam1)
{
	iParam0 = func_315(iParam0);
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

void func_405(int iParam0, var uParam1)
{
	iParam0 = func_315(iParam0);
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

void func_406(int iParam0, var uParam1)
{
	iParam0 = func_315(iParam0);
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

void func_407(int iParam0, int iParam1)
{
	iParam0 = func_315(iParam0);
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

void func_408(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iParam0 = func_315(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_331(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		func_403(&uVar1, &iVar0, &uVar2);
	}
	iVar3 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	if (iParam1 > iVar3)
	{
		return;
	}
	fVar4 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iParam1));
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_372 = iParam1;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_372.f_1 = fVar4;
	func_466(iParam1);
	iVar5 = func_322(iParam0);
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

void func_409(int iParam0, int iParam1)
{
	iParam0 = func_315(iParam0);
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

bool func_410(int iParam0, int iParam1)
{
	iParam0 = func_315(iParam0);
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

int func_411(int iParam0, var uParam1)
{
	struct<4> Var0;

	Var0.f_9 = -1591664384;
	if (!func_439(iParam0, &Var0))
	{
		return 0;
	}
	*uParam1 = func_467(Var0, 1415981582, 0);
	if (!func_295(*uParam1, 0))
	{
		return 0;
	}
	return 1;
}

int func_412(int iParam0, var uParam1)
{
	struct<4> Var0;

	Var0.f_9 = -1591664384;
	if (!func_439(iParam0, &Var0))
	{
		return 0;
	}
	*uParam1 = func_467(Var0, -2119169513, 0);
	if (!func_295(*uParam1, 0))
	{
		return 0;
	}
	return 1;
}

int func_413(int iParam0, var uParam1)
{
	struct<4> Var0;

	if (!func_468(856287005, iParam0))
	{
		return 0;
	}
	Var0 = { func_469() };
	*uParam1 = func_467(Var0, iParam0, 0);
	if (!func_295(*uParam1, 0))
	{
		return 0;
	}
	return 1;
}

void func_414(int iParam0)
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

void func_415(int iParam0, var uParam1)
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
	func_470(iParam0, *uParam1);
	func_470(iParam0, uParam1->f_1);
}

void func_416(int iParam0)
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

void func_417(int iParam0, var uParam1)
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
	func_470(iParam0, *uParam1);
	func_470(iParam0, uParam1->f_1);
	func_470(iParam0, uParam1->f_2);
	func_470(iParam0, uParam1->f_3);
	func_470(iParam0, uParam1->f_4);
	func_470(iParam0, uParam1->f_5);
}

int func_418(int iParam0, int iParam1, bool bParam2)
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

char* func_419(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
						return func_471(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_471(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
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

void func_420(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

int func_421(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return 0;
	}
	if (func_472(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_473(iParam0))
	{
		return 0;
	}
	if (func_474(iParam0))
	{
		return 0;
	}
	if ((Global_1898164->f_163 && !func_475(iParam0, 1)) || func_476(32768))
	{
		if (!func_475(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return 0;
		}
	}
	if (!func_477())
	{
		return 0;
	}
	return 1;
}

void func_422(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

int func_423(int iParam0)
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

int func_424(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

int func_425(int iParam0, int iParam1)
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

void func_426(int iParam0, var uParam1, var uParam2)
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

struct<14> func_427(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

struct<4> func_428(bool bParam0)
{
	int iVar0;

	iVar0 = func_240(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224214))
		{
			*Global_1224214 = { func_479(923904168, func_478(bParam0), -740156546, bParam0) };
		}
		return *Global_1224214;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224222))
		{
			*Global_1224222 = { func_479(923904168, func_478(bParam0), -740156546, 0) };
		}
		return *Global_1224222;
	}
	return func_479(923904168, func_478(bParam0), -740156546, 0);
}

void func_429(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_430(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	*uParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_240(bParam3), uParam0, uParam2);
	if (*uParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

void func_431(bool bParam0)
{
	_NAMESPACE84::_0xB6FD96420C0126A1(-1056478928, bParam0);
}

bool func_432(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_433(int iParam0)
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

int func_434(int iParam0)
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

bool func_435()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(99890643);
}

int func_436(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<4> Var29;

	Var0.f_9 = -1591664384;
	if (!func_439(iParam0, &Var0))
	{
		return 0;
	}
	Var29 = { func_479(iParam1, Var0, 1415981582, 0) };
	return func_480(Var29, 1);
}

int func_437(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<4> Var29;

	Var0.f_9 = -1591664384;
	if (!func_439(iParam0, &Var0))
	{
		return 0;
	}
	Var29 = { func_479(iParam1, Var0, -2119169513, 0) };
	return func_480(Var29, 1);
}

void func_438(var uParam0)
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

int func_439(int iParam0, var uParam1)
{
	int iVar0;
	struct<10> Var1;
	struct<4> Var15;

	if (!func_481(iParam0))
	{
		return 0;
	}
	iVar0 = func_440(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1.f_9 = -1591664384;
	Var15 = { func_478(0) };
	if (!func_482(Var15, iVar0, &Var1, 0, 0))
	{
		return 0;
	}
	if (!func_483(&Var1, uParam1))
	{
		return 0;
	}
	return 1;
}

int func_440(int iParam0)
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

int func_441(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10)
{
	struct<12> Var0;
	struct<4> Var14;

	if (!func_484(bParam10))
	{
		return func_485(Param0, Param4, iParam8, 1, bParam9, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0) || !INVENTORY::_0xB881CA836CC4B6D4(&Param4))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_486(Param0, &Var0, 0, 0))
	{
		return 0;
	}
	if (func_487(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return 1;
	}
	if (!INVENTORY::_0x780C5B9AE2819807(Var0.f_4, iParam8))
	{
		return 0;
	}
	if (!INVENTORY::_0xDCCAA7C3BFD88862(func_240(0), &Param0, &Param4, iParam8, Var0.f_11, &Var14))
	{
		return 0;
	}
	if (bParam9)
	{
		if (!func_480(Var14, 1))
		{
		}
	}
	return 1;
}

int func_442(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9)
{
	struct<11> Var0;
	struct<11> Var14;
	int iVar28;

	if (!func_484(bParam9))
	{
		return func_488(Param0, Param4, iParam8, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0) || !INVENTORY::_0xB881CA836CC4B6D4(&Param4))
	{
		return 0;
	}
	if (func_487(&Param0, &Param4))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_486(Param0, &Var0, bParam9, 1) || !func_486(Param4, &Var14, bParam9, 1))
	{
		return 0;
	}
	if (func_487(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return 0;
	}
	if (!INVENTORY::_0x780C5B9AE2819807(Var0.f_4, Var14.f_9) || !INVENTORY::_0x780C5B9AE2819807(Var14.f_4, Var0.f_9))
	{
		return 0;
	}
	iVar28 = func_240(0);
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

int func_443(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (func_489(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		return 1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseCompanion"))
	{
		return 1;
	}
	return 0;
}

int func_444(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = func_445(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	return 1;
}

int func_445(int iParam0)
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

int func_446(var uParam0)
{
	int iVar0;

	iVar0 = uParam0;
	if (iVar0 >= 0 && iVar0 < 5)
	{
		return 1;
	}
	return 0;
}

void func_447(int iParam0)
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
	iVar0 = func_322(iParam0);
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
	if (func_410(iParam0, 64))
	{
		func_395(iParam0);
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
	bVar3 = func_244(42);
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
				func_490(&(((*Global_1900383)[iParam0 /*45*/])->f_27));
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
		func_395(iParam0);
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
		if (func_491(1) < 1)
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
		func_492(&(((*Global_1900383)[iParam0 /*45*/])->f_26), bVar6);
	}
	if (!MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_410(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = TASK::IS_PED_IN_WRITHE(iVar0);
	bVar10 = false;
	iVar11 = func_493(iParam0);
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
	fVar15 = func_494(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_495(iParam0))
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
		func_496(((*Global_1900383)[iParam0 /*45*/])->f_26);
		func_497(((*Global_1900383)[iParam0 /*45*/])->f_26);
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
	if (func_264(iVar0) && !bVar9)
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
	iVar21 = func_491(iParam0);
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

int func_448()
{
	return 1342496140;
}

int func_449()
{
	return 446670976;
}

int func_450()
{
	return 1;
}

int func_451()
{
	return -868094182;
}

int func_452()
{
	return 1074477367;
}

int func_453()
{
	return 1;
}

int func_454()
{
	return -997197050;
}

int func_455()
{
	return -2063289686;
}

int func_456()
{
	return 2;
}

int func_457()
{
	return -868094182;
}

int func_458()
{
	return 1074477367;
}

int func_459()
{
	return 1;
}

int func_460()
{
	return 1235275977;
}

int func_461()
{
	return 2030804811;
}

int func_462()
{
	return 1;
}

int func_463()
{
	return 1974379573;
}

int func_464()
{
	return 2024948086;
}

int func_465()
{
	return 1;
}

void func_466(int iParam0)
{
	if (func_498() < iParam0)
	{
		func_499(iParam0);
	}
}

int func_467(struct<4> Param0, int iParam4, bool bParam5)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_500(Param0, iParam4, &Var0, bParam5))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_468(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar4;
	int iVar5;
	int iVar6;

	if (iParam0 != 0)
	{
		iVar5 = func_501(iParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_502(iParam0);
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

struct<4> func_469()
{
	struct<4> Var0;

	Var0 = { func_478(0) };
	return func_479(856287005, Var0, -218846335, 0);
}

void func_470(int iParam0, int iParam1)
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

char* func_471(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_472(int iParam0, int iParam1)
{
	if (func_102() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iParam0]), iParam1);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iParam0]), iParam1);
}

int func_473(int iParam0)
{
	if (func_102() != -1)
	{
		if (func_475(iParam0, 4))
		{
			return 0;
		}
	}
	else if (func_475(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

int func_474(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_475(iParam0, 65536) && !func_475(iParam0, 32768))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if ((Global_40.f_7756[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_475(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0 /*3*/] - iVar1);
			if ((Global_40.f_7756[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && func_475(iParam0, 32768))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_475(int iParam0, int iParam1)
{
	return ((Global_1905944->f_22[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

bool func_476(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_477()
{
	return Global_1905944->f_5694;
}

struct<4> func_478(bool bParam0)
{
	return func_479(1328661203, func_503(), -1591664384, bParam0);
}

struct<4> func_479(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_295(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_240(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_480(struct<4> Param0, int iParam4)
{
	struct<11> Var0;

	if (!func_484(0))
	{
		return func_504(Param0, iParam4, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_486(Param0, &Var0, 0, 0))
	{
		return 0;
	}
	if (Var0.f_10 == iParam4)
	{
		return 1;
	}
	if (!INVENTORY::_0x734311E2852760D0(func_240(0), &Param0, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_481(int iParam0)
{
	int iVar0;
	struct<4> Var1;

	iVar0 = func_440(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_478(0) };
	if (func_505(&Var1, iVar0, 0) > 0)
	{
		return 1;
	}
	return 0;
}

int func_482(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	int iVar0;

	iVar0 = func_240(bParam7);
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

int func_483(var uParam0, var uParam1)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_240(0), uParam0, uParam1, 29, 1))
	{
		return 0;
	}
	return 1;
}

int func_484(bool bParam0)
{
	if (func_102() == -1)
	{
		return 1;
	}
	return INVENTORY::_0x0FBBFFC891A97C81(func_240(bParam0));
}

int func_485(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, var uParam10, bool bParam11)
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
	if (!func_486(Param0, &Var0, 1, 0))
	{
		return -1;
	}
	if (func_487(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return -1;
	}
	if (!INVENTORY::_0x780C5B9AE2819807(Var0.f_4, iParam8))
	{
		return -1;
	}
	iVar14 = func_506(Var0.f_4, Param4, iParam8, 0);
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
	Var16 = { func_507(&Var0) };
	Var16.f_4 = { Param4 };
	Var16.f_11 = iParam8;
	Var16.f_10 = uParam10;
	iVar32 = func_508(1168099063, &Var16, bParam9);
	if (iVar32 == -1)
	{
		return -1;
	}
	return iVar32;
}

int func_486(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(func_240(bParam5), &uParam0, uParam4, !bParam6))
	{
		return 0;
	}
	return 1;
}

int func_487(var uParam0, var uParam1)
{
	if (((*uParam0 == *uParam1 && uParam0->f_1 == uParam1->f_1) && uParam0->f_2 == uParam1->f_2) && uParam0->f_3 == uParam1->f_3)
	{
		return 1;
	}
	return 0;
}

int func_488(struct<4> Param0, struct<4> Param4, var uParam8, bool bParam9)
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
	if (func_487(&Param0, &Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_486(Param0, &Var0, 1, 0) || !func_486(Param4, &Var14, 1, 0))
	{
		return -1;
	}
	if (func_487(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return -1;
	}
	if (!INVENTORY::_0x780C5B9AE2819807(Var0.f_4, Var14.f_9) || !INVENTORY::_0x780C5B9AE2819807(Var14.f_4, Var0.f_9))
	{
		return -1;
	}
	Var28 = { func_507(&Var0) };
	Var28.f_4 = { Var14.f_5 };
	Var28.f_11 = Var14.f_9;
	Var28.f_10 = (Var14.f_10 || uParam8);
	Var44 = { func_507(&Var14) };
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
					func_509(iVar60, 1);
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
		iVar60 = func_508(1168099063, &Var28, 0);
		iVar60 = func_508(1168099063, &Var44, 0);
	}
	return iVar60;
}

int func_489(int iParam0)
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

void func_490(var uParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_0x9CB1A1623062F402(*uParam0, func_511(func_510(255), 109029619));
	}
	else if (func_121())
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_15();
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_491(int iParam0)
{
	iParam0 = func_315(iParam0);
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

void func_492(var uParam0, bool bParam1)
{
	char* sVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_0x9CB1A1623062F402(*uParam0, func_511(func_510(255), 109029619));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_121())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_15())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (MISC::COMPARE_STRINGS(sVar0, "", false, -1) != 0)
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, sVar0);
		}
	}
}

int func_493(int iParam0)
{
	iParam0 = func_315(iParam0);
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

float func_494(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

float func_495(int iParam0)
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

	iParam0 = func_315(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_331(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return -1f;
	}
	iVar1 = func_491(iParam0);
	iVar2 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	fVar3 = TASK::_0xEB67D4E056C85A81(iVar1);
	fVar4 = TASK::_0x78D8C1D4EB80C588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_491(iParam0) + 1;
	fVar6 = func_512(iParam0);
	fVar7 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar1));
	fVar8 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	uVar12 = func_513(fVar3, fVar4, fVar11);
	return uVar12;
}

void func_496(int iParam0)
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

void func_497(int iParam0)
{
	MAP::_0xB059D7BD3D78C16F(iParam0, 673950256);
	MAP::_0xB059D7BD3D78C16F(iParam0, 561559387);
	MAP::_0xB059D7BD3D78C16F(iParam0, -201249929);
}

int func_498()
{
	return Global_40.f_1095.f_3135;
}

void func_499(int iParam0)
{
	Global_40.f_1095.f_3135 = iParam0;
}

int func_500(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
{
	struct<4> Var0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x22E590F108289A9D(func_240(bParam6), &uParam0, uParam4, &Var0))
	{
		return 0;
	}
	if (!func_486(Var0, uParam5, bParam6, 0))
	{
		return 0;
	}
	return 1;
}

int func_501(int iParam0)
{
	struct<2> Var0;

	if (!func_295(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_502(int iParam0)
{
	int iVar0;

	if (!func_295(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_501(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_COUNT(iVar0);
}

struct<4> func_503()
{
	struct<4> Var0;

	return Var0;
}

int func_504(struct<4> Param0, int iParam4, bool bParam5)
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
	if (!func_486(Param0, &Var1, 1, 0))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam4)
	{
		return iVar0;
	}
	iVar15 = func_296(Var1.f_4);
	if (iVar15 == -1784221369)
	{
		Var16 = { func_514(Param0, 1) };
		Var16.f_10 = iParam4;
		iVar0 = func_515(-1230526146, &Var16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -1037537535)
	{
		Var44 = { func_516(Param0, 1) };
		Var44.f_10 = iParam4;
		iVar0 = func_517(-1230526146, &Var44, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var61 = { func_507(&Var1) };
		Var61.f_10 = iParam4;
		iVar0 = func_508(-1230526146, &Var61, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

int func_505(var uParam0, int iParam1, bool bParam2)
{
	return INVENTORY::_0x033EE4B89F3AC545(func_240(bParam2), uParam0, iParam1);
}

int func_506(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;

	if (!func_295(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_479(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_240(bParam6), &Var0, 0);
	return uVar4;
}

struct<16> func_507(var uParam0)
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

int func_508(int iParam0, var uParam1, bool bParam2)
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
					func_509(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_509(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 16))
	{
		func_509(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_509(int iParam0, int iParam1)
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
	func_518(iParam0, iParam1);
}

char* func_510(int iParam0)
{
	char* sVar0;

	if (iParam0 == 255)
	{
		if (func_519(37, iParam0))
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
	if (func_519(37, iParam0))
	{
		return HUD::_0xD8402B858F4DDD88(&(((*Global_1108178)[iParam0 /*37*/])->f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(((*Global_1108178)[iParam0 /*37*/])->f_12)));
	}
	return PLAYER::GET_PLAYER_NAME(&(Global_1225638->f_120[iParam0]));
}

char* func_511(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return MISC::_CREATE_VAR_STRING(10, "PLAYER_STRING", sParam0);
	}
	return func_520(MISC::_CREATE_VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

float func_512(int iParam0)
{
	iParam0 = func_315(iParam0);
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

float func_513(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

struct<28> func_514(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
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
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_240(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_507(&Var28) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_515(int iParam0, var uParam1, bool bParam2)
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
					func_509(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_509(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 28))
	{
		func_509(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<17> func_516(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
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
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_240(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_507(&Var17) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_517(int iParam0, var uParam1, bool bParam2)
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
					func_509(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_509(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 17))
	{
		func_509(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_518(int iParam0, int iParam1)
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

int func_519(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_521(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_522())
	{
		return func_521(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1225638->f_21[iParam1])
	{
		return func_521(&(((*Global_1108178)[iParam1 /*37*/])->f_4), iVar0, 5);
	}
	return 0;
}

char* func_520(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

bool func_521(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_522()
{
	return Global_1109400->f_244;
}

