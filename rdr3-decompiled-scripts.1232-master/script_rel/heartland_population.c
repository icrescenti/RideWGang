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
	var uLocal_20 = 6;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 6;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 6;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 6;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 4;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 3;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	vector3 vLocal_78 = { 0f, 0f, 0f };
	float fLocal_81 = 0f;
	float fLocal_82 = 0f;
	float fLocal_83 = 0f;
	float fLocal_84 = 0f;
	float fLocal_85 = 0f;
	float fLocal_86 = 0f;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	vector3 vLocal_92 = { 0f, 0f, 0f };
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	bool bVar1;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_75 = -791673850;
	iLocal_76 = -80167404;
	vLocal_78 = { -350.6435f, 288.2812f, 97.46367f };
	fLocal_81 = 7f;
	fLocal_82 = 0f;
	fLocal_83 = 0f;
	fLocal_84 = 100f;
	fLocal_85 = 100f;
	fLocal_86 = 0f;
	iLocal_87 = -1227324342;
	iLocal_88 = -1206647372;
	vLocal_92 = { -129.1927f, -68.5704f, 90.6221f };
	func_1();
	func_2();
	func_3();
	iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER(-128f, 153f, 92.509f, 0f, 0f, 0f, 7.5f, 7.5f, 10f);
	if (func_4() != 1)
	{
		if (!TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-1554291097))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1554291097, true);
		}
		PATHFIND::_0xD17672447692478E(iVar0, 0);
	}
	else
	{
		if (TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-1554291097))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1554291097, false);
		}
		PATHFIND::_0xC1799FAFD2FDF52B(iVar0, 0, 0, 0);
	}
	bVar1 = true;
	while (bVar1)
	{
		if (!func_5(Global_40.f_10991.f_37, 8))
		{
			if (STREAMING::_IS_IMAP_ACTIVE(iLocal_75))
			{
				func_6();
			}
		}
		func_7();
		func_8();
		BUILTIN::WAIT(0);
	}
	func_9();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1()
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	}
	else if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		if (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
		}
		func_9();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

void func_2()
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { fLocal_81, fLocal_82, fLocal_83 };
	vVar3 = { fLocal_84, fLocal_85, fLocal_86 };
	FLOCK::_0xF2CCA7B68CFAB2B9(904876610, 725.8305f, -468.8784f, 149f, vVar0, vVar3, 9.5f, 50f, 1f, 6f);
}

void func_3()
{
	iLocal_95 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1800f, -65f, 58.316f, 0f, 0f, 0f, 50f, 50f, 10f, "m_volAberdeenPigFarm_Restriction");
	func_10(iLocal_95, 1);
	iLocal_96 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(800f, 890f, 118f, 0f, 0f, 66f, 80f, 65f, 12f, "m_volCarmodyDell_Restriction");
	func_10(iLocal_96, 1);
	iLocal_98 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("HRT_volCornwall_Restriction");
	VOLUME::_0xBCE668AAF83608BE(iLocal_98, 557.5f, 585f, 120f, 0f, 0f, -16f, 60f, 100f, 15f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_98, 495f, 650f, 120f, 0f, 0f, 0f, 80f, 80f, 15f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_98, 582.5f, 695f, 120f, 0f, 0f, 0f, 25f, 25f, 15f);
	if (func_11())
	{
		POPULATION::_0xB56D41A694E42E86(iLocal_98, 2238463, 0, 0, -1, -1, 0);
		POPULATION::_0x18262CAFEBB5FBE1(iLocal_98, 2238463, 0, 0, -1, -1, 0);
	}
	else
	{
		func_12(iLocal_98, 0, 0, 1);
	}
	iLocal_99 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1120f, 432.5f, 94.789f, 0f, 0f, 45f, 150f, 135f, 20f, "m_volCropFarm_Restriction");
	func_10(iLocal_99, 1);
	iLocal_100 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(892.5f, 260f, 102.5f, 0f, 0f, 0f, 35f, 35f, 20f, "m_volLarnedSod_Restriction");
	func_10(iLocal_100, 1);
	iLocal_101 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-62.5f, -397.5f, 75f, 0f, 0f, 0f, 25f, 25f, 15f, "m_volSouthernShack_Restriction");
	func_12(iLocal_101, 0, 0, 1);
	iLocal_102 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-340.7f, -349.1f, 127.9f, 0f, 0f, 0f, 50f, 50f, 50f, "m_volFlatneckStation_Restriction");
	func_13(iLocal_102, 1);
	iLocal_103 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volValentine_Restriction");
	VOLUME::_0xBCE668AAF83608BE(iLocal_103, -205f, 670f, 115f, 0f, 0f, 0f, 125f, 125f, 15f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_103, -330f, 795f, 115f, 0f, 0f, 0f, 125f, 125f, 15f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_103, -205f, 820f, 130f, 0f, 0f, -55f, 125f, 50f, 20f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_103, -385f, 655f, 115f, 0f, 0f, 0f, 100f, 100f, 15f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_103, -390f, 920f, 115f, 0f, 0f, 0f, 60f, 60f, 15f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_103, -250f, 935f, 130f, 0f, 0f, 0f, 70f, 70f, 20f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_103, -330f, 970f, 125f, 0f, 0f, 0f, 60f, 60f, 15f);
	func_14(iLocal_103, 1);
	iLocal_105 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(311.33f, 301.2739f, 147.3381f, 0f, 0f, 0f, 25f, 25f, 50f, "m_volGiantRock_Restriction1");
	POPULATION::_0xB56D41A694E42E86(iLocal_105, 2228479, 16384, 0, -1, -1, 0);
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_105, 2228479, 16384, 0, -1, -1, 0);
	POPULATION::_0x2161278C6322F740(2228479, 16384, 0, -1, -1, iLocal_105);
	iLocal_106 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(295.4558f, 335.8347f, 144.3733f, 0f, 0f, 0f, 7f, 7f, 5f, "m_volGiantRock_Restriction2");
	POPULATION::_0xB56D41A694E42E86(iLocal_106, 2228479, 16384, 0, -1, -1, 0);
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_106, 2228479, 16384, 0, -1, -1, 0);
	POPULATION::_0x2161278C6322F740(2228479, 16384, 0, -1, -1, iLocal_106);
	iLocal_107 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(372.3861f, 149.449f, 144.5227f, 0f, 0f, 27.75f, 37.75f, 44.75f, 21.5f, "m_volGiantRock_Restriction3");
	POPULATION::_0xB56D41A694E42E86(iLocal_107, 2228479, 16384, 0, -1, -1, 0);
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_107, 2228479, 16384, 0, -1, -1, 0);
	POPULATION::_0x2161278C6322F740(2228479, 16384, 0, -1, -1, iLocal_107);
	iLocal_104 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1520f, 440f, 92.5f, 0f, 0f, 0f, 20f, 50f, 10f, "m_volER_Trainstation_Restriction");
	func_10(iLocal_104, 1);
	iLocal_108 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-838f, 343f, 95.5f, 0f, 0f, 0f, 80f, 50f, 44f, "m_volDownesRanch_Restriction");
	func_12(iLocal_108, 0, 0, 1);
	iLocal_109 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1416.5f, 321.5f, 93f, 0f, 0f, -21f, 70f, 80f, 25f, "m_volEmeraldRanch_Restriction");
	func_15(iLocal_109, 0, 0, 1);
	iLocal_110 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1185.274f, -101.3631f, 105f, 0f, 0f, 0f, 15f, 10f, 30f, "m_volRuinsNorthOfHorseShop_Restriction");
	func_12(iLocal_110, 0, 0, 1);
	iLocal_111 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volFlatIronLakeIsland_Restriction");
	VOLUME::_0xBCE668AAF83608BE(iLocal_111, 237.213f, -769.7713f, 42.9804f, 0f, 0f, 0f, 156.4307f, 81.38799f, 25.72252f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_111, -401.9616f, -1012.638f, 42.9804f, 0f, 0f, -51.00734f, 240.5335f, 103.688f, 24.89919f);
	VOLUME::_0x39816F6F94F385AD(iLocal_111, 440.3216f, -1462.027f, 55.90892f, 0f, 0f, 13.40226f, 421.2939f, 982.8425f, 99.70844f);
	func_16(iLocal_111, 0, 0, 1);
	if (func_17() == 1)
	{
		iLocal_112 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volHorseShoeOverLook_Restriction");
		VOLUME::_0xBCE668AAF83608BE(iLocal_112, -118.5499f, -30.44764f, 110.3997f, 0f, 0f, 99f, 54f, 31f, 35f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_112, -140.179f, -28.55973f, 110.3997f, 0f, 0f, -15f, 49f, 38f, 41f);
		func_18(iLocal_112, 0, 0, 1);
	}
	iLocal_97 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-435.5f, 498f, 107f, 0f, 0f, -7f, 27f, 17f, 20f, "m_volCastorsPond_Restriction");
	func_15(iLocal_97, 0, 0, 1);
	iLocal_113 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volSixPointCabin_Restriction");
	VOLUME::_0x39816F6F94F385AD(iLocal_113, -61.78288f, 1236.599f, 171.7316f, 0f, 0f, 30.49994f, 17.57404f, 11.67279f, 13.05081f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_113, -26.60302f, 1223.117f, 175.0363f, 0f, 0f, 0f, 17.60465f, 14.42418f, 5.206519f);
	func_18(iLocal_113, 0, 0, 1);
	iLocal_114 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volBardsCrossing_Restriction");
	VOLUME::_0x39816F6F94F385AD(iLocal_114, -730.6474f, -548.0654f, 77.02292f, 0f, 0f, 27f, 353.0691f, 8.967957f, 13.35221f);
	VOLUME::_0x39816F6F94F385AD(iLocal_114, -892.4706f, -627.4682f, 77.26994f, 0f, 0f, 18.91964f, 20.99991f, 7.632857f, 11.3815f);
	func_18(iLocal_114, 0, 0, 1);
	iLocal_115 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volLimpany_Restriction");
	VOLUME::_0x39816F6F94F385AD(iLocal_115, -344.2052f, -155.7421f, 51.92712f, 0f, 0f, -25.599f, 7.007796f, 12.39152f, 9.160034f);
	VOLUME::_0x39816F6F94F385AD(iLocal_115, -326.2495f, -151.1143f, 51.75295f, 0f, 0f, -40.79212f, 9.133691f, 7.226022f, 8.362908f);
	VOLUME::_0x39816F6F94F385AD(iLocal_115, -337.7838f, -123.2315f, 49.78259f, 0f, 0f, -30.27581f, 12.47807f, 6.990203f, 9.129834f);
	VOLUME::_0x39816F6F94F385AD(iLocal_115, -368.2776f, -141.5811f, 49.43251f, 0f, 0f, -25.07936f, 8.474558f, 7.734136f, 6.674875f);
	VOLUME::_0x39816F6F94F385AD(iLocal_115, -381.1944f, -138.4523f, 48.6927f, 0f, 0f, -26.4314f, 10.54735f, 16.19453f, 11.17168f);
	VOLUME::_0x39816F6F94F385AD(iLocal_115, -359.6013f, -115.6031f, 48.09516f, 0f, 0f, -36.89244f, 15.66171f, 18.04947f, 13.86367f);
	VOLUME::_0x39816F6F94F385AD(iLocal_115, -317.6271f, -131.9343f, 51.76871f, 0f, 0f, 0f, 6.531308f, 7.349917f, 8.040896f);
	VOLUME::_0x39816F6F94F385AD(iLocal_115, -314.7265f, -105.8513f, 50.30021f, 0f, 0f, 33.49742f, 11.55198f, 8.022533f, 6.21626f);
	VOLUME::_0x39816F6F94F385AD(iLocal_115, -372.8026f, -109.9615f, 47.05131f, 0f, 0f, -34.51117f, 5.588199f, 6.904874f, 7.632836f);
	func_15(iLocal_115, 0, 0, 1);
	iLocal_116 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volBurnedSettlement_Restriction");
	VOLUME::_0xBCE668AAF83608BE(iLocal_116, -355f, -132.5f, 50f, 0f, 0f, -20f, 50f, 30f, 25f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_116, -320f, -115f, 50f, 0f, 0f, 0f, 20f, 20f, 25f);
	func_12(iLocal_116, 0, 0, 1);
	iLocal_117 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volFishermansShack_Restriction");
	VOLUME::_0x39816F6F94F385AD(iLocal_117, 343.054f, -669.0029f, 42.165f, 0f, 0f, -31.01126f, 11.02041f, 15.73973f, 10.95584f);
	VOLUME::_0x39816F6F94F385AD(iLocal_117, 338.9478f, -681.7498f, 43.02779f, 0f, 0f, -31.24687f, 3.800817f, 10.34941f, 9.244935f);
	func_18(iLocal_117, 0, 0, 1);
}

int func_4()
{
	switch (func_19())
	{
		case -1:
			return Global_40.f_4283;
	}
	return -1;
}

bool func_5(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_6()
{
	if (func_20(vLocal_78, Global_36, 50f, 1))
	{
		switch (iLocal_74)
		{
			case 0:
				if (func_21())
				{
					iLocal_74 = 1;
				}
				break;
			case 1:
				if (func_22())
				{
					iLocal_74 = 2;
				}
				break;
			case 2:
				func_23();
				break;
		}
	}
	else if (iLocal_74 != 0)
	{
		func_24();
	}
}

void func_7()
{
	int iVar0;

	if ((MISC::GET_FRAME_COUNT() % 20) != 0)
	{
		return;
	}
	iVar0 = _NAMESPACE48::_0x112DDF56300BC6E5(546824119);
	if (!_NAMESPACE48::_0x800DF3FC913355F3(iVar0))
	{
		return;
	}
	if (_NAMESPACE48::_0xEB98B38CA60742D7(iVar0))
	{
		if (!func_25(-1530132748))
		{
			if (!STREAMING::_0x73B40D97D7BAAD77(-389510791, Global_36))
			{
				func_26(-1530132748);
			}
		}
	}
	else if (func_25(-1530132748))
	{
		if (!STREAMING::_0x73B40D97D7BAAD77(-389510791, Global_36))
		{
			func_27(-1530132748);
		}
	}
}

void func_8()
{
	func_28(&uLocal_89, &uLocal_91, &uLocal_90, vLocal_92, iLocal_87, -1209372002, iLocal_88);
}

void func_9()
{
	FLOCK::_0xFB16F08F47B83B4C(904876610);
	func_24();
}

void func_10(int iParam0, bool bParam1)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, 231, 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, 231, 16384, 0, -1, -1, 0);
	if (bParam1)
	{
		POPULATION::_0x2161278C6322F740(231, 16384, 0, -1, -1, iParam0);
	}
}

int func_11()
{
	if (func_19() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == 11966224)
	{
		return 1;
	}
	return 0;
}

void func_12(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam1 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam1 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		func_29(&iParam1, 8192);
	}
	if (bParam3)
	{
		POPULATION::_0x2161278C6322F740(iParam1 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
	}
}

void func_13(int iParam0, bool bParam1)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, 2228479, 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, 2228479, 16384, 0, -1, -1, 0);
	if (bParam1)
	{
		POPULATION::_0x2161278C6322F740(2228479, 16384, 0, -1, -1, iParam0);
	}
}

void func_14(int iParam0, bool bParam1)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, 2229503, 0, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, 2229503, 0, 0, -1, -1, 0);
	if (bParam1)
	{
		POPULATION::_0x2161278C6322F740(2229503, 0, 0, -1, -1, iParam0);
	}
}

void func_15(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		func_29(&iParam1, 8192);
	}
	if (bParam3)
	{
		POPULATION::_0x2161278C6322F740(iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
	}
}

void func_16(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam1 | 4096 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam1 | 4096 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		func_29(&iParam1, 8192);
	}
	if (bParam3)
	{
		POPULATION::_0x2161278C6322F740(iParam1 | 4096 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
	}
}

int func_17()
{
	return Global_40.f_4283;
}

void func_18(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		func_29(&iParam1, 8192);
	}
	if (bParam3)
	{
		POPULATION::_0x2161278C6322F740(iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
	}
}

int func_19()
{
	return Global_1572887->f_12;
}

int func_20(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

int func_21()
{
	STREAMING::REQUEST_MODEL(iLocal_76, false);
	return 1;
}

int func_22()
{
	if (STREAMING::HAS_MODEL_LOADED(iLocal_76))
	{
		iLocal_77 = OBJECT::CREATE_OBJECT(iLocal_76, vLocal_78, false, true, false, false, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_76);
		return 1;
	}
	return 0;
}

void func_23()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_77))
	{
		if (func_20(vLocal_78, Global_36, 3f, 1))
		{
			if (func_30(-417963070))
			{
				func_31(&(Global_40.f_10991.f_37), 8);
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_77);
			}
		}
	}
}

void func_24()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_77))
	{
		OBJECT::DELETE_OBJECT(&iLocal_77);
	}
	iLocal_74 = 0;
}

bool func_25(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_32(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return MISC::IS_BIT_SET(&(Global_40.f_283[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_1058888->f_40567[iVar1]), iVar2);
}

void func_26(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_32(iParam0, 1);
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

void func_27(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_32(iParam0, 1);
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

int func_28(var uParam0, var uParam1, var uParam2, vector3 vParam3, int iParam6, int iParam7, int iParam8)
{
	int iVar0;

	if (func_33(Global_35, vParam3, 1) > 225f)
	{
		return 1;
	}
	if (*uParam0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			if (!DECORATOR::DECOR_EXIST_ON(*uParam1, "letter_item"))
			{
				*uParam0 = 0;
			}
			else
			{
				return 1;
			}
		}
	}
	if (!TASK::_0x841475AC96E794D1(*uParam2))
	{
		*uParam2 = TASK::_0xF533D68FF970D190(vParam3, iParam8, 1f, 0, 0);
		return 0;
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		iVar0 = TASK::_0x295514F198EFD0CA(*uParam2, "PrimaryItem");
		*uParam1 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar0);
		TXD::_0xDB1BD07FB464584D(iParam6, 0);
		return 0;
	}
	else
	{
		if (!TXD::_0xBE72591D1509FFE4(iParam6))
		{
			TXD::_0xDB1BD07FB464584D(iParam6, 0);
			return 0;
		}
		if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			if (!DECORATOR::DECOR_EXIST_ON(*uParam1, "letter_item"))
			{
				DECORATOR::DECOR_SET_INT(*uParam1, "letter_item", iParam7);
				return 0;
			}
			else
			{
				OBJECT::_0xE124889AE0521FCF(*uParam1, iParam6, 0, 0);
				TXD::_0x8232F37DF762ACB2(iParam6);
				*uParam0 = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_29(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_30(int iParam0)
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

void func_31(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_32(int iParam0, int iParam1)
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

float func_33(int iParam0, vector3 vParam1, bool bParam4)
{
	vector3 vVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	}
	if (bParam4)
	{
		return BUILTIN::VDIST2(vVar0, vParam1);
	}
	return func_34(vVar0, vParam1);
}

float func_34(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

