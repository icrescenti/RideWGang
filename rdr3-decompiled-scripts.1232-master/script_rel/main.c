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
#endregion

void __EntryFunction__()
{
	int iVar0;
	bool bVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	var uVar8;
	int iVar9;
	bool bVar10;
	var uVar11;
	int iVar37;
	bool bVar38;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	sLocal_14 = "mech_skin@BUCK_BUTCHER";
	sLocal_15 = "PBL_BASE";
	sLocal_16 = "PBL_DUMP";
	sLocal_17 = "PBL_DROP_IN";
	sLocal_27 = "beat_gang_camp_reminder";
	iLocal_28 = 23;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(512))
	{
		func_1();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	Global_35 = PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX());
	if (!Global_40)
	{
		CLOCK::SET_CLOCK_TIME(8, 0, 0);
		CLOCK::SET_CLOCK_DATE(5, 1, 1899);
	}
	if (func_2())
	{
		func_3(0);
	}
	else
	{
		func_3(1);
		PED::SET_PED_MODEL_IS_SUPPRESSED(705691988, true);
	}
	func_4();
	func_5(-1, 0);
	func_6(0);
	func_7(0);
	func_8();
	func_9();
	func_10();
	func_11();
	func_12();
	func_13();
	func_14();
	func_15();
	func_16(128);
	if (func_17(2))
	{
		func_16(32768);
		Global_1347343->f_2 = func_18();
		func_19(Global_1935630, 2048);
		func_20(Global_1347343, 5);
	}
	else
	{
		func_21(32768);
		func_22();
	}
	CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
	if (!ITEMSET::IS_ITEMSET_VALID(Global_43615))
	{
		Global_43615 = ITEMSET::CREATE_ITEMSET(true);
	}
	while (!func_23("init_all_sp", 1024))
	{
		BUILTIN::WAIT(0);
	}
	while (!func_24(256))
	{
		BUILTIN::WAIT(0);
	}
	MISC::PAUSE_DEATH_ARREST_RESTART(true);
	VEHICLE::SET_RANDOM_TRAINS(false);
	ENTITY::FREEZE_ENTITY_POSITION(Global_35, true);
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(Global_35, true);
	}
	func_25(1);
	PED::_0xDC91F22F09BC6C2F(-767591988, 0);
	PED::_0xDC91F22F09BC6C2F(-989642646, 0);
	PED::_0xDC91F22F09BC6C2F(1222652248, 0);
	PED::_0xDC91F22F09BC6C2F(-350226955, 0);
	PED::_0xDC91F22F09BC6C2F(-1535431934, 0);
	PED::_0xDC91F22F09BC6C2F(-1448293989, 0);
	PED::_0xDC91F22F09BC6C2F(266218800, 0);
	PED::_0xDC91F22F09BC6C2F(555364152, 0);
	PED::_0xDC91F22F09BC6C2F(-1663301869, 0);
	PED::_0xDC91F22F09BC6C2F(-1996978098, 0);
	PED::_0xDC91F22F09BC6C2F(1078461828, 0);
	PED::_0xDC91F22F09BC6C2F(1986610512, 0);
	PED::_0xDC91F22F09BC6C2F(889541022, 0);
	PED::_0xDC91F22F09BC6C2F(-319516747, 0);
	func_26();
	func_27();
	SCRIPTS::_0x11B0A0B282FA9B10(1);
	SCRIPTS::_0xF9E951A1E5517C06();
	if (!Global_40)
	{
		if (func_28() == -1)
		{
			func_29(0, -1, 1);
			if (NETWORK::_0x02E97CE283648CD9(func_30(joaat("benchmark"))))
			{
				Global_43892 = 1;
			}
		}
		else
		{
			func_29(0, 0, 1);
		}
		func_31(1);
	}
	else if (!func_32(0) && !func_17(32770))
	{
		func_29(0, -1, 1);
	}
	else if (!func_24(32768))
	{
		iVar0 = CLOCK::GET_CLOCK_HOURS();
		if (iVar0 < 6)
		{
			CLOCK::ADVANCE_CLOCK_TIME_TO(6, 0, 0);
		}
	}
	if (Global_43892)
	{
		func_33(128);
	}
	MAP::_0xD3F58E9316B7FC2A(1);
	_NAMESPACE71::_0xDD1232B332CBB9E7(2, 1, 0);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		PED::_0x5CA20FBE49891BBD(PLAYER::PLAYER_PED_ID(), 0);
	}
	while (!ENTITY::DOES_ENTITY_EXIST(Global_35) || ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
		}
		else
		{
			if (func_17(32))
			{
				MISC::PAUSE_DEATH_ARREST_RESTART(false);
				bVar1 = true;
			}
			Global_35 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
			BUILTIN::WAIT(0);
		}
	}
	if (bVar1)
	{
		MISC::PAUSE_DEATH_ARREST_RESTART(true);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		ENTITY::FREEZE_ENTITY_POSITION(Global_35, true);
		ENTITY::SET_ENTITY_INVINCIBLE(Global_35, true);
	}
	uVar2 = func_34(func_24(32768));
	if (Global_40)
	{
		if (func_35())
		{
			func_36();
			iVar3 = func_37(Global_35, 0, 0, 1);
			if (!func_38(func_37(Global_35, 2, 0, 1), 0) && (!func_39(iVar3) || !WEAPON::_0xD955FEE4B87AFA07(iVar3)))
			{
				iVar4 = func_40(0, 0);
				if (func_39(iVar4))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar4, true, 2, false, false);
				}
				else if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("weapon_revolver_cattleman"), 0, 0))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_revolver_cattleman"), true, 2, false, false);
				}
			}
			func_41();
			func_42();
			func_43();
			if (uVar2 && Global_40.f_9 <= 2)
			{
				func_45(func_44(), &vVar5, &uVar8);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), vVar5, false, false, true, true);
			}
			if (!func_46())
			{
				func_47(Global_35, Global_40.f_7729, 1, 0, 0);
			}
			func_48();
		}
		else
		{
			func_49();
		}
	}
	Global_1898438 = -5000;
	iVar9 = func_50(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false), 1);
	bVar10 = func_51(iVar9);
	while ((!func_52() || ((!func_24(4096) && !func_24(32768)) && !func_17(128))) || !bVar10)
	{
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
		}
		else
		{
			func_53();
			func_54();
			iVar9 = func_50(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false), 1);
			bVar10 = func_51(iVar9);
			if (!ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Global_35, true);
				ENTITY::SET_ENTITY_INVINCIBLE(Global_35, true);
			}
			BUILTIN::WAIT(0);
		}
	}
	while (!ENTITY::DOES_ENTITY_EXIST(Global_35) || ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
		}
		else
		{
			if (func_17(32))
			{
				MISC::PAUSE_DEATH_ARREST_RESTART(false);
				bVar1 = true;
			}
			Global_35 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
			BUILTIN::WAIT(0);
		}
	}
	if (bVar1)
	{
		MISC::PAUSE_DEATH_ARREST_RESTART(true);
	}
	func_55();
	func_56();
	if (!Global_40 && !func_35())
	{
		func_57(24);
		func_58();
		while ((ENTITY::IS_ENTITY_DEAD(Global_35) || !PED::_0xA0BC8FAED8CFEB3C(Global_35)) || func_59())
		{
			if (SCRIPTS::_0x9E4EF615E307FBBE())
			{
			}
			else
			{
				BUILTIN::WAIT(0);
			}
		}
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_revolver_schofield"), true, 2, false, false);
		func_60(0, 0);
		func_61(-1);
		func_62(100f);
	}
	if (!func_24(32768))
	{
		ENTITY::FREEZE_ENTITY_POSITION(Global_35, false);
		ENTITY::SET_ENTITY_INVINCIBLE(Global_35, false);
		MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 200f, 4260352);
		if (func_63())
		{
			func_16(8192);
		}
		else
		{
			func_21(8192);
		}
	}
	else
	{
		func_21(8192);
	}
	if (func_17(128) && !func_46())
	{
		ENTITY::_0x203BEFFDBE12E96A(Global_35, ((*Global_2621440)[0 /*12065*/])->f_9.f_7, ((*Global_2621440)[0 /*12065*/])->f_9.f_13, 1, 0, 1);
	}
	if (func_24(8192))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
		MISC::_0xA565FAC215CBC77D();
		SCRIPTS::SHUTDOWN_LOADING_SCREEN();
		func_33(1024);
		CAM::DO_SCREEN_FADE_IN(500);
	}
	func_16(64);
	Global_40 = 1;
	func_64();
	func_65(32);
	if (!NETWORK::_0x02E97CE283648CD9(func_30(joaat("benchmark"))))
	{
		func_65(128);
		func_65(16);
	}
	else
	{
		func_33(128);
	}
	if (func_28() != -1)
	{
	}
	else
	{
		func_66();
		if (func_67(Global_1879514->f_1) && Global_1879514->f_18)
		{
		}
		else if (func_67(Global_1347343->f_2))
		{
		}
		else if (func_17(2))
		{
		}
		else
		{
			UILOG::_UILOG_CLEAR_ALL_ENTRIES();
		}
		func_68();
		func_69();
		func_70();
		func_71();
		func_72();
		func_73();
		func_74();
		func_75(0);
		func_76();
		if ((((func_77(&Global_1935630, 131072) && func_32(60)) && !func_32(67)) && (CLOCK::GET_CLOCK_HOURS() > 16 || CLOCK::GET_CLOCK_HOURS() < 6)) && func_78() == 22)
		{
			func_79(9);
		}
		func_80();
		while (!func_81(&uVar11))
		{
			BUILTIN::WAIT(0);
		}
	}
	while (!bVar38)
	{
		bVar38 = SCRIPTS::_0x9E4EF615E307FBBE();
		iVar37 = (1 + iVar37);
		if (iVar37 >= 10)
		{
			func_82();
			iVar37 = 0;
		}
		if (!Global_1572887->f_8)
		{
			func_54();
		}
		if (((Global_43892 && !Global_43888) && !bVar38) && !func_17(48))
		{
			if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) <= 0)
			{
				SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(joaat("benchmark"));
				if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("benchmark")))
				{
				}
				else
				{
					BUILTIN::START_NEW_SCRIPT_WITH_NAME_HASH(joaat("benchmark"), 1024);
					SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("benchmark"));
					Global_43892 = 0;
				}
			}
		}
		BUILTIN::WAIT(0);
	}
	func_1();
	while (!SCRIPTS::_0x380FFA15B72408FB(10))
	{
		BUILTIN::WAIT(0);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1()
{
	Global_1894899->f_2 = -1;
	if (func_83() != 2)
	{
		Global_1572864->f_3 = 0;
		func_84();
	}
}

bool func_2()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(99890643);
}

void func_3(bool bParam0)
{
	PED::SET_PED_MODEL_IS_SUPPRESSED(604357666, bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(-1523757120, bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(1576849913, bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(-1516219602, bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(-1063137731, bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(1048964673, bParam0);
}

void func_4()
{
	func_85();
	func_86();
	func_87();
	SCRIPTS::_0x11B0A0B282FA9B10(0);
}

void func_5(int iParam0, int iParam1)
{
	int iVar0;

	if (!Global_40 || iParam1)
	{
		iVar0 = 0;
		while (iVar0 < func_88())
		{
			func_89(iVar0, iParam0);
			iVar0++;
		}
	}
}

void func_6(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < &Global_1898330)
	{
		(*Global_1898330)[iVar0] = -1;
		iVar0++;
	}
	Global_1898329 = 0;
	iVar1 = 0;
	while (iVar1 < func_88())
	{
		if ((func_90(iVar1) == 1 || func_90(iVar1) == 2) || func_90(iVar1) == 3)
		{
			if (bParam0)
			{
				func_93(func_91(iVar1), func_92(iVar1), 2);
			}
			func_94(iVar1, 0);
			func_95(iVar1, -15);
		}
		iVar1++;
	}
	if (func_28() == -1)
	{
		func_96(8);
		func_96(1);
	}
}

void func_7(int iParam0)
{
	int iVar0;

	if (!Global_40 || iParam0)
	{
		iVar0 = 0;
		while (iVar0 < Global_40.f_450)
		{
			Global_40.f_450[iVar0] = -1;
			iVar0++;
		}
	}
}

void func_8()
{
	var uVar0;
	int iVar1;

	if (func_97())
	{
		return;
	}
	func_98(&uVar0);
	iVar1 = 0;
	while (iVar1 < 6)
	{
		func_99(&uVar0, iVar1);
		iVar1++;
	}
	func_100(&uVar0);
	func_101();
}

void func_9()
{
	func_102(1, 1442955798, 82949);
	func_102(6, -637613554, 4);
	func_102(2, -491264247, 5);
	func_102(3, -211951838, 17413);
	func_102(4, -504561681, 17412);
	func_102(5, 1989166464, 4);
	func_102(7, 1528898976, 5);
	func_102(8, 740917367, 5);
	func_102(9, -1158474473, 5);
	func_102(10, -641388262, 5);
	func_102(11, -580966558, 5);
	func_102(12, -1407195211, 5);
	func_102(13, -417529492, 5);
	func_102(14, -1324583934, 5);
	func_102(15, -2015497475, 5);
	func_102(16, 1661723837, 5);
	func_102(17, 1994675293, 5);
	func_102(18, 1225508464, 5);
	func_102(19, 1721144768, 4);
	func_102(20, 1262746693, 4);
	func_102(21, 354025617, 581);
	func_102(22, -1855078184, 581);
	func_102(23, 1421241404, 581);
	func_102(24, 1895435813, 4);
	func_102(25, 357598967, 4);
	func_102(26, -1605217361, 4);
	func_102(27, -117368017, 4);
	func_102(28, -1270089526, 65540);
	func_102(29, 443850809, 65540);
	func_102(30, -2141646614, 65540);
	func_102(31, -1958786645, 65540);
	func_102(33, -1671091787, 65540);
	func_102(32, 1865623514, 65540);
	func_102(34, -271085641, 4);
	func_102(35, 628914944, 4);
	func_103(34, 35);
	func_102(36, 2044684586, 580);
	func_102(37, 1231893470, 580);
	func_102(38, 1045850957, 1541);
	func_102(39, 1474802901, 1025);
	func_102(40, 1437266219, 1025);
	func_102(41, 287196071, 17412);
	func_102(42, -1534873329, 5);
	func_102(43, -923785888, 4);
	func_102(44, 107847243, 4);
	func_102(45, -874005272, 68);
	func_102(46, 285322508, 65540);
	func_102(47, -1740675049, 4);
	func_102(48, 497806156, 4);
	func_102(49, 71529769, 4);
	func_102(50, 1068274146, 4);
	func_102(51, 1584871165, 4);
	func_102(52, -1151368854, 4);
	func_102(53, 1490608149, 4);
	func_102(54, -1552620374, 65540);
	func_102(55, -1656871326, 4);
	func_102(56, 722368711, 4);
	func_102(57, -1665795073, 4);
	func_102(58, -1416617006, 4);
	func_102(59, -1373195946, 68);
	func_102(60, 1851568687, 68);
	func_103(59, 60);
	func_102(61, -2104417357, 66052);
	func_102(62, 1166291909, 66052);
	func_102(63, -688802965, 5);
	func_102(64, -1731420917, 4);
	func_102(65, 1712039849, 4);
	func_102(66, 1257969622, 65540);
	func_102(67, -1230044011, 4);
	func_102(68, 623122901, 69);
	func_102(69, 116888688, 0);
	func_102(71, -879318171, 0);
	func_102(72, 1109693541, 65536);
	func_102(73, -1884070406, 65536);
	func_102(74, -1174138158, 0);
	func_102(75, -508418261, 0);
	func_102(76, -688557028, 0);
	func_102(198, -1663681033, 4);
	func_102(199, 1384944530, 4);
	func_102(200, -1030418965, 4);
	func_102(201, 943325079, 4);
	func_102(78, 1204386981, 1028);
	func_102(79, -1858995382, 1028);
	func_102(80, 370447594, 1028);
	func_102(81, 620517859, 32784);
	func_102(82, 786300880, 32784);
	func_102(83, -1405655995, 32768);
	func_102(84, 199112456, 32768);
	func_102(85, 1758637185, 32768);
	func_102(86, -817307285, 32768);
	func_102(87, -1418123540, 32768);
	func_102(88, -1258723850, 0);
	func_102(0, 1328275845, 513);
	func_102(89, -1346179088, 516);
	func_102(90, -1989120746, 4);
	func_102(91, -743542107, 4);
	func_102(92, -1799252769, 4);
	func_102(93, 2061289134, 4);
	func_102(94, 307558439, 0);
	func_102(95, -463004596, 0);
	func_103(94, 95);
	func_102(96, -997992274, 16);
	func_102(97, -707888317, 16);
	func_102(98, -334321697, 16);
	func_102(99, 940276186, 32768);
	func_102(100, -234727727, 32768);
	func_102(101, 650526530, 32768);
	func_102(102, -1840254829, 32768);
	func_102(103, -1399389135, 32768);
	func_102(104, -708925047, 32768);
	func_102(105, 1910552235, 32768);
	func_102(106, -117450424, 32768);
	func_102(107, -1353351646, 32768);
	func_102(108, -1169508001, 32768);
	func_102(109, -422501883, 32768);
	func_102(110, -907241368, 516);
	func_102(111, -273354156, 516);
	func_102(112, -503418783, 1540);
	func_102(113, -1860078853, 4);
	func_102(77, 1598041226, 5);
	func_102(114, 2065666193, 5);
	func_102(115, 682756528, 4);
	func_102(116, 601181133, 1028);
	func_102(117, -1160517710, 4);
	func_102(118, -1295863724, 5);
	func_102(119, -763105322, 5);
	func_103(118, 119);
	func_102(120, 1415497946, 4);
	func_102(121, -1293582803, 5);
	func_102(122, 603143905, 4);
	func_102(123, -273612239, 4);
	func_102(124, -563233876, 4);
	func_102(125, 549692738, 4);
	func_102(127, -1558839150, 5);
	func_102(128, -1342271498, 4);
	func_102(129, 1740863586, 0);
	func_102(152, 1587580315, 0);
	func_102(131, 1590177402, 5);
	func_102(153, 807130733, 4);
	func_102(154, -399307153, 4);
	func_102(157, 513607990, 4);
	func_102(158, 356872743, 4);
	func_102(155, 1205588547, 4);
	func_102(156, -444028358, 4);
	func_102(159, -467846174, 4);
	func_102(160, -107628785, 4);
	func_102(162, -1124101458, 516);
	func_103(155, 156);
	func_103(160, 159);
	func_103(157, 158);
	func_102(130, -832951255, 1024);
	func_102(138, 145624648, 0);
	func_102(139, -1469076539, 0);
	func_102(132, 719752691, 0);
	func_102(133, 507790294, 1028);
	func_102(134, -1928326675, 1028);
	func_102(135, -1969895912, 1028);
	func_102(136, 730174236, 1028);
	func_102(137, -770663347, 1028);
	func_102(163, 697102681, 1025);
	func_102(164, -859472440, 0);
	func_102(165, 1492120364, 0);
	func_102(166, -1563370335, 1);
	func_102(167, -1893503445, 0);
	func_102(168, -1993236866, 0);
	func_102(169, -861998726, 68);
	func_102(170, 878260591, 581);
	func_102(171, -1309461467, 4);
	func_102(173, 205914143, 4);
	func_102(172, 1333257018, 4);
	func_102(140, -1880803763, 4);
	func_102(141, 310470683, 4);
	func_102(142, 370506558, 516);
	func_102(143, -1146048144, 4);
	func_102(144, 1669998970, 4);
	func_102(145, 1161166319, 532);
	func_102(146, 683592491, 5);
	func_102(147, -1904663526, 5);
	func_102(148, -222321090, 5);
	func_102(149, 911175212, 5);
	func_102(150, 901098319, 4);
	func_102(501, 556962895, 128);
	func_102(502, -4732326, 128);
	func_102(503, -809342316, 128);
	func_102(504, 1215685536, 0);
	func_102(505, -1635466248, 1);
	func_102(506, 323252264, 128);
	func_102(507, -1792565875, 65664);
	func_102(508, -2112795848, 65664);
	func_102(511, -1189716495, 128);
	func_102(510, -190287083, 128);
	func_102(509, 322258537, 128);
	func_102(512, 542316304, 128);
	func_102(513, 213395742, 128);
	func_102(514, 1494443098, 1152);
	func_102(515, 1234464176, 65664);
	func_102(516, 706866209, 65664);
	func_102(517, 1707129024, 128);
	func_102(518, 1413978366, 128);
	func_102(519, -1072053682, 128);
	func_102(520, -571835808, 128);
	func_102(521, 1562440933, 128);
	func_102(522, 1727165432, 128);
	func_102(523, -1774924102, 1088);
	func_102(524, -477965895, 1089);
	func_102(525, -825236504, 1088);
	func_102(526, -945757107, 65);
	func_102(527, -1646996587, 1);
	func_102(174, -1239844062, 0);
	func_102(175, -1024099583, 4);
	func_102(176, 274213443, 4);
	func_102(177, 951458700, 4);
	func_102(178, -1784981781, 4);
	func_102(555, 1055679868, 4);
	func_102(556, -1451930162, 4);
	func_102(151, -1724964058, 5);
	func_102(179, 754006577, 1028);
	func_102(180, -1591427451, 1028);
	func_102(181, -2132053925, 4);
	func_102(182, -1840773566, 4);
	func_102(183, -1958980732, 4);
	func_102(184, -824284931, 4);
	func_102(185, -1662190894, 4);
	func_102(186, -2044484942, 4);
	func_102(187, 1793345913, 4);
	func_102(188, -2130020923, 4);
	func_102(189, -1926263277, 4);
	func_102(190, -2098628304, 4);
	func_102(191, -332901139, 5);
	func_102(192, 1832946484, 4);
	func_102(193, -2119444607, 4);
	func_102(194, 982638214, 5);
	func_102(195, 104025434, 4);
	func_102(196, 878816257, 0);
	func_102(197, -1746780873, 4);
	func_102(202, -57221646, 4);
	func_102(203, 1440543461, 4);
	func_102(204, 1659742301, 4);
	func_102(205, -1728520507, 4);
	func_102(206, -100261443, 12);
	func_102(207, 1282359645, 12);
	func_102(208, -1117426317, 1036);
	func_102(209, -2139696785, 1036);
	func_102(210, -79710399, 1);
	func_102(211, 1464586970, 1);
	func_102(212, -187882257, 1);
	func_102(213, 317970992, 1);
	func_102(214, -863957205, 1);
	func_102(215, 2097878939, 1);
	func_102(216, -937931736, 1);
	func_102(217, 615174536, 1);
	func_102(218, -1398748526, 1);
	func_102(219, -1569965791, 1);
	func_102(220, 2019508864, 1);
	func_102(221, -899306442, 1);
	func_102(222, -1934751777, 1);
	func_102(223, 1746273927, 1);
	func_102(224, -644567760, 1);
	func_102(225, -74448660, 1);
	func_102(226, 14795803, 1);
	func_102(227, -1478852948, 1);
	func_102(228, -309353715, 1);
	func_102(229, 199374245, 1);
	func_102(230, -935762660, 1);
	func_102(231, 234082525, 1);
	func_102(232, 1026737268, 1);
	func_102(233, 1049796611, 1);
	func_102(234, -281686174, 1);
	func_102(235, -1072882472, 1);
	func_102(236, -1826634801, 1);
	func_102(237, 1539508377, 1);
	func_102(238, -279714506, 1);
	func_102(239, 898084375, 1);
	func_102(240, 843093427, 1028);
	func_102(241, 185035452, 1028);
	func_102(242, -744402065, 1028);
	func_102(243, -97628567, 1028);
	func_102(244, -2007846308, 1028);
	func_102(245, 379360587, 1028);
	func_102(246, 979767353, 4);
	func_102(247, 1794940017, 4);
	func_102(248, -17930993, 4);
	func_102(249, -1090577349, 4);
	func_102(250, 1523477057, 4);
	func_102(251, -1449348514, 4);
	func_102(252, 1194521184, 4);
	func_102(253, 1624444568, 4);
	func_102(254, -1899809609, 4);
	func_102(255, 2068383985, 5);
	func_102(256, -692047840, 4);
	func_102(257, 584304790, 4);
	func_102(258, 1007934964, 5);
	func_102(259, -1770595760, 4);
	func_102(260, -1690981711, 4);
	func_102(261, -1143104690, 4);
	func_102(262, -2037426830, 4);
	func_102(265, 329339607, 516);
	func_102(266, -562783689, 516);
	func_102(263, 231450604, 516);
	func_102(264, 904198174, 516);
	func_102(267, 1302525821, 516);
	func_102(268, -839870815, 516);
	func_102(269, -363264000, 4);
	func_102(270, -451327186, 4);
	func_102(271, -771574767, 4);
	func_102(274, 926789089, 4);
	func_102(272, 211359492, 4);
	func_102(273, 869869151, 516);
	func_102(276, 1531107089, 4);
	func_102(275, 2067898910, 516);
	func_102(277, -1537183144, 4);
	func_102(278, -1753314606, 4);
	func_102(279, -976689306, 4);
	func_102(280, -280551512, 4);
	func_102(281, 1310626790, 4);
	func_102(282, -1458426020, 4);
	func_102(283, -1521356354, 4);
	func_102(284, 479362125, 4);
	func_102(289, -1730471781, 4);
	func_102(477, 934523351, 4);
	func_102(290, 1246561821, 4);
	func_102(291, 1402143862, 4);
	func_102(544, 1427410966, 516);
	func_102(545, 842295137, 516);
	func_102(546, 1462654506, 516);
	func_102(547, 1165537983, 516);
	func_102(548, 748924890, 516);
	func_102(285, 1096551697, 4);
	func_102(286, -1119237950, 4);
	func_102(287, 2075914777, 4);
	func_102(288, -217483428, 516);
	func_102(292, -376517445, 4);
	func_102(293, -381895251, 4);
	func_102(294, 923523402, 4);
	func_102(295, -35625228, 4);
	func_102(296, 2022461088, 4);
	func_102(297, -428820254, 4);
	func_102(298, 854468693, 4);
	func_102(299, -1005627854, 5);
	func_102(300, -1986558213, 4);
	func_102(301, -1272081633, 4);
	func_102(302, 557217637, 4);
	func_102(303, -1470773185, 4);
	func_102(304, -2003731674, 4);
	func_102(305, -414636663, 0);
	func_102(306, -504736726, 8);
	func_102(307, -1361844183, 8);
	func_102(308, 868895700, 8);
	func_102(309, 559911112, 8);
	func_102(310, 1066071363, 8);
	func_102(311, 1993508052, 8);
	func_102(312, 1996292318, 8);
	func_102(313, 374801514, 8);
	func_102(314, -658139838, 8);
	func_102(315, 423966992, 8);
	func_102(316, -1092683892, 8);
	func_102(317, 1662423691, 8);
	func_102(318, 1384456296, 8);
	func_102(319, -1078914282, 8);
	func_102(320, 916440151, 8);
	func_102(321, 1008252, 8);
	func_102(322, -863697517, 8);
	func_102(323, -1520658097, 8);
	func_102(324, 389581591, 8);
	func_102(325, -815118364, 8);
	func_102(326, -2081582655, 8);
	func_102(327, 1163268602, 8);
	func_102(328, 1503394588, 8);
	func_102(329, 511709238, 8);
	func_102(330, -571060537, 8);
	func_102(331, -373743187, 8);
	func_102(332, 1580384419, 8);
	func_102(333, -271256091, 8);
	func_102(334, -744708298, 8);
	func_102(335, 552259871, 8);
	func_102(336, 1378118496, 8);
	func_102(337, 1048616093, 8);
	func_102(338, 1959042715, 13);
	func_102(339, -750056018, 12);
	func_102(340, -1207210341, 12);
	func_102(341, 830154589, 12);
	func_102(342, 120752336, 12);
	func_102(343, -311552075, 12);
	func_102(344, -1797702717, 12);
	func_102(345, -1866285071, 12);
	func_102(346, 413422106, 12);
	func_102(347, -1561454178, 12);
	func_102(348, 689307199, 12);
	func_102(349, -1806282340, 12);
	func_102(350, 1053614726, 12);
	func_102(351, 888381014, 12);
	func_102(352, 107432890, 12);
	func_102(353, -1111734316, 12);
	func_102(354, 1901901467, 12);
	func_102(355, 1075202719, 12);
	func_102(356, 1621225785, 12);
	func_102(357, -742698155, 12);
	func_102(358, -25905133, 12);
	func_102(359, -1664137180, 12);
	func_102(360, 1729562527, 12);
	func_102(361, 970343313, 12);
	func_102(362, -478447865, 12);
	func_102(363, -712121287, 12);
	func_102(364, -806808774, 12);
	func_102(365, -1530330338, 12);
	func_102(366, -938064682, 12);
	func_102(367, 163466986, 12);
	func_102(368, 382636902, 12);
	func_102(369, -1315697612, 12);
	func_102(370, -1624502698, 12);
	func_102(371, 1386921300, 12);
	func_102(372, -146952241, 12);
	func_102(373, 198794184, 12);
	func_102(374, 1193147736, 12);
	func_102(375, -692374994, 12);
	func_102(376, 215842291, 12);
	func_102(377, 1467621484, 12);
	func_102(378, 1935973298, 12);
	func_102(379, 407848316, 12);
	func_102(380, 754746483, 12);
	func_102(381, 700674893, 12);
	func_102(382, 622132109, 12);
	func_102(383, 1850845847, 12);
	func_102(384, 1898040470, 12);
	func_102(390, 597254123, 12);
	func_102(386, 2088680135, 12);
	func_102(387, -1419809142, 12);
	func_102(385, 1902211699, 12);
	func_102(388, -1776248175, 12);
	func_102(389, 615491862, 12);
	func_102(391, -2061650310, 12);
	func_102(392, 1598599287, 12);
	func_102(393, -1384768670, 12);
	func_102(394, -1263260445, 12);
	func_102(395, -681745701, 12);
	func_102(396, 1673076308, 12);
	func_102(397, 1333248783, 12);
	func_102(403, 1971122678, 12);
	func_102(399, -1283711700, 12);
	func_102(400, -411588657, 12);
	func_102(398, 1640529993, 12);
	func_102(401, 344731596, 12);
	func_102(402, 535128630, 12);
	func_102(404, 942375749, 12);
	func_102(405, 866158837, 12);
	func_102(406, -732669044, 12);
	func_102(407, -650519405, 12);
	func_102(408, 2129621514, 12);
	func_102(409, 1236700945, 12);
	func_102(410, 1370981391, 12);
	func_102(411, -1254074275, 12);
	func_102(412, -1188874649, 12);
	func_102(413, 1598712949, 12);
	func_102(414, 979327889, 12);
	func_102(415, -1354674126, 12);
	func_102(416, -1530394161, 12);
	func_102(417, -989610486, 12);
	func_102(418, 742807149, 12);
	func_102(419, -2133920725, 12);
	func_102(420, 1553996704, 12);
	func_102(421, 1732430723, 12);
	func_102(422, 1473826052, 12);
	func_102(423, -34067420, 12);
	func_102(424, -29199894, 12);
	func_102(425, 1585726424, 12);
	func_102(426, -1379597176, 12);
	func_102(427, 513661771, 12);
	func_102(428, 1175101656, 12);
	func_102(429, 1747774401, 12);
	func_102(430, -1848239712, 12);
	func_102(431, 1761032615, 12);
	func_102(432, -180697003, 12);
	func_102(433, 609648029, 12);
	func_102(434, -1652586024, 12);
	func_102(435, -1248948810, 12);
	func_102(436, 1387759490, 12);
	func_102(437, 1025931364, 12);
	func_102(438, 564871348, 12);
	func_102(439, -1281191843, 12);
	func_102(440, 282800835, 12);
	func_102(441, -652778061, 12);
	func_102(442, -1892417555, 12);
	func_102(443, 212443252, 13);
	func_102(444, 1764583115, 13);
	func_102(445, -669584681, 13);
	func_102(446, 1534464445, 13);
	func_102(447, -2973651, 13);
	func_102(448, 9538750, 13);
	func_102(449, 1035665367, 13);
	func_102(450, -1038247998, 13);
	func_102(451, 687504463, 13);
	func_102(452, -1139541693, 13);
	func_102(453, 1263252909, 12);
	func_102(454, 489659542, 12);
	func_102(455, 475429548, 8);
	func_102(456, 97482151, 8);
	func_102(457, -1963976206, 8);
	func_102(458, -909262152, 12);
	func_102(459, 1000235946, 12);
	func_102(460, 1715283973, 1032);
	func_102(461, 671494356, 1032);
	func_102(462, 615838792, 1032);
	func_102(463, -408469321, 1032);
	func_102(464, 1970236789, 65536);
	func_102(465, 821861942, 4);
	func_102(466, 2018900854, 5);
	func_102(467, -660473096, 5);
	func_102(468, 1368298322, 4);
	func_102(470, 1222713470, 4);
	func_102(471, -292534915, 0);
	func_102(472, 358418309, 4);
	func_102(473, -1174847606, 4);
	func_102(474, 312859304, 5);
	func_102(475, 1960454965, 4);
	func_102(476, 1999760871, 4);
	func_102(478, -1788636233, 4);
	func_102(479, 1835807439, 4);
	func_102(480, 1785312833, 68);
	func_102(481, 1760169707, 5);
	func_102(482, -1159772199, 128);
	func_102(483, 1601895762, 128);
	func_102(484, -1684535486, 4);
	func_102(485, 1326949609, 4);
	func_102(487, -904526984, 4);
	func_102(486, 2104273923, 4);
	func_102(488, -1931970597, 4);
	func_102(489, -1829471519, 4);
	func_102(490, 1818962879, 4);
	func_102(491, 1367171656, 4);
	func_102(492, 53603274, 4);
	func_102(493, -1110615762, 4);
	func_102(494, -768196698, 4);
	func_102(495, 1092157679, 4);
	func_102(496, 605594785, 4);
	func_102(497, 107216183, 4);
	func_102(498, 44718251, 4);
	func_102(499, 1178446450, 4);
	func_102(500, -1482023523, 4);
	func_102(528, -938630534, 132);
	func_102(529, -1492841353, 4);
	func_102(530, -888771407, 4);
	func_102(531, -726690250, 4);
	func_102(532, 494770882, 4);
	func_102(533, 423259730, 5);
	func_102(534, 382417452, 5);
	func_102(535, -960396333, 5);
	func_102(536, -1331259017, 5);
	func_102(537, -45968461, 4);
	func_102(538, 1314256397, 4);
	func_102(539, -316486779, 5);
	func_102(540, 819078787, 5);
	func_102(550, -281500653, 4);
	func_102(551, -59149683, 4);
	func_102(552, -1360245176, 4);
	func_102(553, -583640217, 4);
	func_102(557, 1151299477, 4);
	func_102(541, -1449538839, 580);
	func_102(542, 970874492, 580);
	func_102(543, -1902016335, 580);
	func_102(549, 876207536, 68);
	func_102(554, -458935376, 4);
	func_102(558, -1454291508, 0);
	func_102(559, -189560664, 5);
	func_102(560, -629386182, 5);
	func_102(561, 783296342, 5);
	func_102(562, -866797587, 5);
	func_102(563, -1173417120, 5);
	func_102(564, -1937311304, 5);
	func_102(565, 1917109556, 5);
	func_102(567, -758436435, 5);
	func_102(568, 1771247710, 5);
	func_102(569, -1489191516, 5);
	func_102(566, -1644813909, 4);
	func_102(570, -1768696225, 1028);
	func_102(571, -647510190, 4);
	func_102(572, 1354876753, 1028);
	func_102(573, -956226118, 1028);
	func_102(574, -1980846656, 1028);
	func_102(575, -27462829, 1028);
	func_102(576, -1596380617, 1028);
	func_102(577, -1669705514, 1028);
	func_102(578, -863406233, 1028);
	func_102(579, -2000372153, 1092);
	func_102(580, -1677384704, 65536);
	func_102(581, 1403704658, 65536);
	func_102(582, 2082745666, 0);
	func_102(584, 2082745666, 65536);
	func_102(583, 1780796148, 0);
	func_102(585, -1459293189, 98821);
	func_102(586, -725743520, 4);
	func_102(587, -1022696190, 4);
	func_102(588, 198899353, 4);
	func_102(589, -106868186, 4);
	func_102(590, -573686971, 4);
	func_102(591, -1626499362, 4);
	func_102(592, 1571811637, 4);
	func_102(593, 1279507001, 4);
	func_102(594, -1882496981, 492544);
	func_102(595, 2010127730, 492544);
	func_102(596, -1707737945, 4);
	func_102(600, 1191776810, 8192);
	func_102(601, 1626367882, 4);
	func_102(597, 1357457512, 98308);
	func_102(598, -63569106, 1);
	func_102(599, -38169362, 1);
	func_102(602, 86033522, 98308);
	func_102(603, -958136213, 4);
	func_102(604, -1800046437, 4);
	func_102(605, -1282453027, 4);
	func_102(606, 486059546, 4);
	func_102(608, 668424118, 4);
	func_102(607, -662684443, 4);
	func_102(611, -1392949125, 4);
	func_102(612, 661131214, 4);
	func_102(613, -1474564683, 4);
	func_102(614, 484684935, 4);
	func_102(615, 128830014, 5);
	func_102(616, 183722917, 5);
	func_102(617, 948386188, 5);
	func_102(609, -693119752, 4);
	func_102(610, -1920992599, 32772);
	func_102(618, 2821915, 4);
	func_102(620, 1943562780, 5);
	func_102(619, -1886596731, 5);
	func_103(620, 619);
	func_102(621, -2017488406, 4);
	func_102(622, -1721289415, 4);
	func_102(623, -169021893, 4);
	func_102(624, -466007340, 4);
	func_102(625, 669666786, 5);
	func_102(626, -1001421270, 5);
	func_102(627, 1127637781, 5);
	func_102(628, 739719858, 5);
	func_102(629, -1151895259, 4);
	func_104();
	func_105();
}

void func_10()
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "ObjectiveSequence");
	Global_1911643->f_2 = iVar0;
	Global_1911643->f_3 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar0, "Enabled", 0);
	Global_1911643->f_4 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(iVar0, "Objectives");
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(Global_1911643->f_4);
}

void func_11()
{
	func_106(0);
}

void func_12()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_36307)
	{
		if (func_107(iVar0) != 0)
		{
			if (!MAP::DOES_BLIP_EXIST(&(Global_36307[iVar0])))
			{
				func_108(iVar0);
			}
		}
		iVar0++;
	}
}

void func_13()
{
}

void func_14()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 34)
	{
		Global_40.f_9536[iVar0] = -1;
		iVar0++;
	}
}

void func_15()
{
	int iVar0;
	var uVar1;

	if (func_28() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 130)
	{
		if ((func_109(iVar0) == 4 || func_109(iVar0) == 3) || func_109(iVar0) == 6)
		{
			(*Global_1888801)[iVar0 /*35*/] = func_111(iVar0, 0, 5, func_110(iVar0));
			if (func_109(iVar0) == 3)
			{
				uVar1 = func_112(func_111(iVar0, 0, 5, 0));
			}
		}
		iVar0++;
	}
}

void func_16(int iParam0)
{
	Global_21 = (Global_21 || iParam0);
}

bool func_17(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

var func_18()
{
	return Global_1572864->f_8;
}

void func_19(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_20(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_21(int iParam0)
{
	Global_21 = (Global_21 - (Global_21 && iParam0));
}

void func_22()
{
	if (func_28() != -1)
	{
		return;
	}
	Global_1347343->f_2 = -1;
	Global_1347343 = -1;
	Global_1347343->f_1 = -1;
	StringCopy(&(Global_1347343->f_3), "", 64);
	Global_1347343->f_12 = 0;
	Global_1347343->f_11 = 0;
}

int func_23(char* sParam0, int iParam1)
{
	if (!SCRIPTS::DOES_SCRIPT_EXIST(sParam0))
	{
		return 0;
	}
	SCRIPTS::REQUEST_SCRIPT(sParam0);
	if (!SCRIPTS::HAS_SCRIPT_LOADED(sParam0))
	{
		return 0;
	}
	BUILTIN::START_NEW_SCRIPT(sParam0, iParam1);
	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(sParam0);
	return 1;
}

bool func_24(int iParam0)
{
	return (Global_21 && iParam0) != 0;
}

void func_25(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_113(Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_19(Global_1935630, 4194304);
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

void func_26()
{
	BRAIN::ENABLE_SCRIPT_BRAIN_SET(1);
}

void func_27()
{
	BRAIN::ENABLE_SCRIPT_BRAIN_SET(2);
}

int func_28()
{
	return Global_1572887->f_12;
}

void func_29(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	Global_1879534->f_7301 = 1;
	Global_1879534->f_7301.f_1 = 0;
	func_114(iParam2);
	func_115(iParam0, iParam1, 1);
	func_116();
	func_117();
	iVar0 = 0;
	if (iParam1 != -1)
	{
		iVar0 = 0;
	}
	MISC::SET_BIT(Global_1879534->f_7301.f_2[iVar0 /*4*/], 1);
	NETWORK::_0xA95470DA137587F5(0);
	NETWORK::_0xBB697756309D77EE(0);
}

char* func_30(int iParam0)
{
	char* sVar0;

	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "";
			break;
		case -88424047:
			sVar0 = "new_game";
			break;
		case 1651967528:
			sVar0 = "shift_f";
			break;
		case -84928653:
			sVar0 = "demo";
			break;
		case 1306134188:
			sVar0 = "intro_not_done";
			break;
		case -1357178860:
			sVar0 = "private";
			break;
		case 133180145:
			sVar0 = "friendly";
			break;
		case 655115506:
			sVar0 = "hardcore";
			break;
		case 1737952409:
			sVar0 = "near_posse";
			break;
		case 2137301164:
			sVar0 = "random_posse";
			break;
		case -110687166:
			sVar0 = "open_posse";
			break;
		case -2030542394:
			sVar0 = "follow_invite";
			break;
		case -11301188:
			sVar0 = "random_region";
			break;
		case -1312679892:
			sVar0 = "last_region";
			break;
		case 1433203589:
			sVar0 = "spawn_location";
			break;
		case -61119924:
			sVar0 = "last_location";
			break;
		case 2134863183:
			sVar0 = "camp";
			break;
		case -159568751:
			sVar0 = "handheld";
			break;
		case joaat("benchmark"):
			sVar0 = "benchmark";
			break;
	}
	return sVar0;
}

void func_31(bool bParam0)
{
	Global_1934765->f_20 = 0;
	Global_1934765 = 0;
	Global_1934765->f_287 = 0;
	while (!func_118(1, bParam0))
	{
	}
	func_119();
	Global_1934765 = 0;
}

bool func_32(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_120(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
	}
	return (UNLOCK::_UNLOCK_IS_UNLOCKED(((*Global_1835011)[iParam0 /*74*/])->f_2) && !UNLOCK::_UNLOCK_IS_VISIBLE(((*Global_1835011)[iParam0 /*74*/])->f_2));
}

void func_33(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 || iParam0);
}

int func_34(bool bParam0)
{
	if (!Global_40)
	{
		return 0;
	}
	if (!func_35())
	{
		return 0;
	}
	if (func_121())
	{
		return 0;
	}
	if (func_17(2))
	{
		return 0;
	}
	if (bParam0)
	{
		return 0;
	}
	if (!func_122())
	{
		return 0;
	}
	if (func_123())
	{
		return 0;
	}
	if (_NAMESPACE76::_0xC5C395C60B542A3C(1))
	{
		return 0;
	}
	if (Global_1572864->f_21 != 0)
	{
		return 0;
	}
	if (Global_40.f_9 == 6 || Global_40.f_9 == 3)
	{
		return 0;
	}
	return 1;
}

int func_35()
{
	return 1;
	if (Global_1572887->f_12 == 0)
	{
		return 1;
	}
	return Global_40.f_1;
}

void func_36()
{
	int iVar0;

	if (Global_1347400->f_76)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	WEAPON::_0xC395355843BE134B(Global_35);
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, false, 0, true))
	{
		if (((iVar0 == joaat("weapon_fishingrod") || iVar0 == joaat("weapon_kit_binoculars")) || iVar0 == joaat("weapon_kit_camera")) || iVar0 == 191707516)
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
		}
	}
}

int func_37(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_38(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

bool func_39(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("weapon_unarmed"));
}

int func_40(int iParam0, int iParam1)
{
	var uVar0;

	return func_124(&uVar0, iParam0, iParam1);
}

void func_41()
{
}

void func_42()
{
}

void func_43()
{
	PLAYER::_0x95EE1DEE1DCD9070(PLAYER::PLAYER_ID(), 1);
	if (func_125(47))
	{
		PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::PLAYER_ID(), 1);
	}
	else
	{
		PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::PLAYER_ID(), 0);
	}
}

int func_44()
{
	return Global_40.f_4283.f_1;
}

void func_45(int iParam0, var uParam1, var uParam2)
{
	vector3 vVar0;

	if (!func_126(iParam0))
	{
		*uParam1 = { Global_36 };
		if (!Global_1935630->f_12)
		{
			*uParam2 = ENTITY::GET_ENTITY_HEADING(Global_35);
		}
		return;
	}
	switch (iParam0)
	{
		case 40:
			*uParam1 = { -600.8126f, 2679.079f, 323.538f };
			*uParam2 = 279.6308f;
			return;
		case 56:
			*uParam1 = { 486f, 2215.8f, 246.9f };
			*uParam2 = 84.159f;
			return;
		case 78:
			*uParam1 = { 2928.327f, 1356.631f, 43.5035f };
			*uParam2 = 261.1208f;
			return;
		case 82:
			*uParam1 = { 2560.459f, 777.5193f, 82.2433f };
			*uParam2 = 291.2065f;
			return;
		case 38:
			*uParam1 = { -800.244f, -1269.308f, 42.5502f };
			*uParam2 = 174.6141f;
			return;
		case 37:
			*uParam1 = { -1692.456f, -1425.278f, 88.5471f };
			*uParam2 = 44.6246f;
			return;
		case 95:
			*uParam1 = { 1698.547f, -1393.736f, 44.893f };
			*uParam2 = 289.3106f;
			return;
		case 105:
			*uParam1 = { 1274.799f, -1279.981f, 74.8681f };
			*uParam2 = 245.3242f;
			return;
		case 93:
			*uParam1 = { 1015.804f, -1316.683f, 55.1469f };
			*uParam2 = 181.2442f;
			return;
		case 5:
			*uParam1 = { 2557.408f, -1202.299f, 53.0907f };
			*uParam2 = 261.1247f;
			return;
		case 8:
			*uParam1 = { 3289.2f, -1275.795f, 44.6127f };
			*uParam2 = 163f;
			return;
		case 35:
			*uParam1 = { 353.8f, 1473f, 179.7f };
			*uParam2 = 46.6903f;
			return;
		case 92:
			*uParam1 = { 2983.202f, 441.7647f, 51.6148f };
			*uParam2 = 27.5833f;
			return;
		case 76:
			*uParam1 = { -250.1652f, 789.0698f, 118.9147f };
			*uParam2 = 88.1256f;
			return;
		case 65:
			*uParam1 = { 482.1f, 660.2f, 117.4f };
			*uParam2 = 144.2493f;
			return;
		case 68:
			*uParam1 = { -805.894f, 305.9081f, 94.4141f };
			*uParam2 = 28.5394f;
			return;
		case 69:
			*uParam1 = { 1429.8f, 319.9f, 88.6f };
			*uParam2 = 280.9084f;
			return;
		case 75:
			*uParam1 = { -365.4675f, -333.9249f, 87.8648f };
			*uParam2 = 239.3198f;
			return;
		case 26:
			*uParam1 = { -1780.331f, -426.5923f, 154.897f };
			*uParam2 = 74.77f;
			return;
		case 22:
			*uParam1 = { -2557.081f, 491.937f, 142.7487f };
			*uParam2 = 177.5235f;
			return;
		case 110:
			*uParam1 = { -1966.645f, -1574.229f, 115.4183f };
			*uParam2 = 177.3636f;
			return;
		case 32:
			*uParam1 = { 3343.871f, -629.7566f, 43.894f };
			*uParam2 = 197.4755f;
			return;
		case 57:
			*uParam1 = { 1471f, -7120f, 77f };
			*uParam2 = 331.1575f;
			return;
		case 120:
			*uParam1 = { -3716.447f, -2622.405f, -14.9813f };
			*uParam2 = 312.5245f;
			return;
		case 115:
			*uParam1 = { -5607f, -3059.301f, 1.8f };
			*uParam2 = -44.3f;
			return;
		case 117:
			*uParam1 = { -5239.2f, -3472.7f, -21.7f };
			*uParam2 = 90f;
			return;
		case 43:
			*uParam1 = { -1320.65f, 2424.004f, 307.8811f };
			*uParam2 = 69.8643f;
			return;
		case 71:
			*uParam1 = { -118.6397f, -32.2501f, 94.7409f };
			*uParam2 = 91.0078f;
			return;
		case 58:
			*uParam1 = { 1418.897f, -7329.16f, 80.562f };
			*uParam2 = 26.5179f;
			return;
		case 98:
			*uParam1 = { 689.6768f, -1222.049f, 43.7435f };
			*uParam2 = 167.6425f;
			return;
		case 6:
			*uParam1 = { 2048.825f, -852.7946f, 41.6127f };
			*uParam2 = 89.9021f;
			return;
		case 18:
			*uParam1 = { -1715.61f, -84.36f, 181.88f };
			*uParam2 = 0f;
			return;
		case 19:
			*uParam1 = { -1515.809f, -477.6617f, 142.8707f };
			*uParam2 = 108.7463f;
			return;
		case 23:
			*uParam1 = { -1066.092f, -584.9856f, 80.8338f };
			*uParam2 = 170.7164f;
			return;
		case 24:
			*uParam1 = { -2455.33f, 831.4f, 140.4909f };
			*uParam2 = 30.7991f;
			return;
		case 27:
			*uParam1 = { -1929.773f, 291.1429f, 166.0626f };
			*uParam2 = 1.2131f;
			return;
		case 49:
			*uParam1 = { -1838.605f, 1312.883f, 220.5665f };
			*uParam2 = 54.1507f;
			return;
		case 30:
			*uParam1 = { 2488.379f, -438.0566f, 40.7284f };
			*uParam2 = 3.9426f;
			return;
		case 31:
			*uParam1 = { 2863.12f, -218.5451f, 41.4376f };
			*uParam2 = 26.5179f;
			return;
		case 122:
			*uParam1 = { -3404.329f, -3293.104f, -6.8233f };
			*uParam2 = 227.0484f;
			return;
		case 33:
			*uParam1 = { 584.8f, 1683f, 187.7f };
			*uParam2 = 26.5179f;
			return;
		case 34:
			*uParam1 = { 223.3f, 996.3f, 189.7f };
			*uParam2 = 218.9453f;
			return;
		case 83:
			*uParam1 = { 2520.18f, 2266.464f, 177.2689f };
			*uParam2 = 170f;
			return;
		case 55:
			*uParam1 = { 1691.5f, 1508f, 146.6f };
			*uParam2 = 297.128f;
			return;
		case 116:
			*uParam1 = { -5213.7f, -2140.6f, 11.8f };
			*uParam2 = 286.744f;
			return;
		case 39:
			*uParam1 = { -1212.897f, -1940.406f, 41.5543f };
			*uParam2 = 271.54f;
			return;
		case 50:
			*uParam1 = { 688.6671f, 2229.267f, 221.7181f };
			*uParam2 = 28.1904f;
			return;
		case 52:
			*uParam1 = { 537.9389f, 3004.24f, 485.7947f };
			*uParam2 = 91.2925f;
			return;
		case 54:
			*uParam1 = { 1942.625f, 1965.863f, 261.5498f };
			*uParam2 = 151.5668f;
			return;
		case 45:
			*uParam1 = { -1396.671f, 1149.936f, 223.108f };
			*uParam2 = 24.5906f;
			return;
		case 46:
			*uParam1 = { -1968.04f, 2158.48f, 328.57f };
			*uParam2 = 0f;
			return;
		case 48:
			*uParam1 = { 718.4495f, 3508.114f, 587.7103f };
			*uParam2 = 249.96f;
			return;
		case 59:
			*uParam1 = { 971.3845f, -6763.39f, 42.8703f };
			*uParam2 = 346.4123f;
			return;
		case 60:
			*uParam1 = { 1178.995f, -7233.543f, 78.9764f };
			*uParam2 = 153.8034f;
			return;
		case 28:
			*uParam1 = { -1304.624f, 406.447f, 95.5907f };
			*uParam2 = 255.3416f;
			return;
		case 62:
			*uParam1 = { 724.3393f, -443.4879f, 78.9597f };
			*uParam2 = 236.3249f;
			return;
		case 66:
			*uParam1 = { 1122f, 482.2f, 94.7f };
			*uParam2 = 42.3615f;
			return;
		case 70:
			*uParam1 = { -76.048f, -401.04f, 70.225f };
			*uParam2 = 316.8146f;
			return;
		case 74:
			*uParam1 = { -600.4578f, 523.9606f, 96.2824f };
			*uParam2 = 79.6536f;
			return;
		case 80:
			*uParam1 = { 2852.53f, 1666.46f, 128.67f };
			*uParam2 = 135.3297f;
			return;
		case 81:
			*uParam1 = { 2641.525f, 2223.522f, 158.1051f };
			*uParam2 = 312.4187f;
			return;
		case 87:
			*uParam1 = { 2313.349f, 353.842f, 65.0149f };
			*uParam2 = 0f;
			return;
		case 119:
			*uParam1 = { -4690.065f, -3731.79f, 11.9774f };
			*uParam2 = 197.302f;
			return;
		case 94:
			*uParam1 = { 1455.848f, -1812.212f, 54.8037f };
			*uParam2 = 304.2492f;
			return;
		case 97:
			*uParam1 = { 677.98f, -821.6f, 48.3f };
			*uParam2 = 0f;
			return;
		case 99:
			*uParam1 = { 1263.5f, -385.8f, 98.6f };
			*uParam2 = 241.3119f;
			return;
		case 100:
			*uParam1 = { 1371.805f, -858.002f, 68.513f };
			*uParam2 = 35.9944f;
			return;
		case 101:
			*uParam1 = { 1185.041f, -212.0238f, 101.1f };
			*uParam2 = 114.1645f;
			return;
		case 1:
			*uParam1 = { 1888f, -745.2f, 41.8f };
			*uParam2 = 155.9022f;
			return;
		case 2:
			*uParam1 = { 1945.44f, -688.74f, 50.83f };
			*uParam2 = 127.4476f;
			return;
		case 104:
			*uParam1 = { 1117.25f, -1315.29f, 64.328f };
			*uParam2 = 0f;
			return;
		case 106:
			*uParam1 = { 1379.382f, -2087.341f, 51.5847f };
			*uParam2 = 255.7824f;
			return;
		case 107:
			*uParam1 = { -2574.174f, -1366.599f, 149.3313f };
			*uParam2 = 175.5364f;
			return;
		case 111:
			*uParam1 = { -1669.9f, -2097.6f, 45.0918f };
			*uParam2 = 0f;
			return;
		case 112:
			*uParam1 = { -2371.444f, -1604.031f, 152.6511f };
			*uParam2 = 10.8752f;
			return;
		case 79:
			*uParam1 = { 2376.457f, 1287.451f, 110.0213f };
			*uParam2 = 14.4916f;
			return;
		case 109:
			if (NETWORK::NETWORK_IS_IN_SESSION())
			{
				*uParam1 = { -2354.916f, -808.9133f, 157.759f };
				*uParam2 = 100.556f;
			}
			else
			{
				*uParam1 = { -2408.241f, -939.9655f, 160.1905f };
				*uParam2 = 157.281f;
			}
			return;
		case 16:
			*uParam1 = { -2145.34f, 599.7288f, 117.0818f };
			*uParam2 = 24.052f;
			return;
		case 4:
			*uParam1 = { 2331.1f, -739.5853f, 41.62f };
			*uParam2 = 121f;
			return;
		case 9:
			*uParam1 = { 1825.357f, -1813.989f, 47.0702f };
			*uParam2 = 218.5782f;
			return;
		case 36:
			*uParam1 = { -32.4394f, 1129.326f, 167.0201f };
			*uParam2 = 353f;
			return;
		case 127:
			*uParam1 = { -1484.448f, -2344.049f, 42.0182f };
			*uParam2 = 295.5278f;
			return;
		case 125:
			*uParam1 = { -3970.96f, -2227.629f, -7.9601f };
			*uParam2 = 4.8f;
			return;
		case 118:
			*uParam1 = { -4107.593f, -3315.498f, 36.3123f };
			*uParam2 = 148.2941f;
			return;
		case 129:
			*uParam1 = { -5300.958f, -3608.817f, -14.6678f };
			*uParam2 = 71.7035f;
			return;
		case 114:
			*uParam1 = { -6028.044f, -3379.058f, -14.9946f };
			*uParam2 = 5.5075f;
			return;
		case 77:
			*uParam1 = { 1797.451f, -96.17f, 55.2f };
			*uParam2 = 64.7894f;
			return;
		case 96:
			*uParam1 = { 1350.713f, -2253.611f, 50.6595f };
			*uParam2 = 132.3174f;
			return;
		case 29:
			*uParam1 = { -1792.309f, 628.2485f, 128.1326f };
			*uParam2 = 39.9216f;
			return;
		case 126:
			*uParam1 = { -2534.852f, -2474.868f, 62.043f };
			*uParam2 = 300.0005f;
			return;
		case 42:
			*uParam1 = { -404.0206f, 1711.73f, 214.8277f };
			*uParam2 = 24.0467f;
			return;
		case 64:
			*uParam1 = { 787.7f, 851.3f, 118.5f };
			*uParam2 = 71.0275f;
			return;
		case 72:
			*uParam1 = { 895.032f, 255.553f, 119.95f };
			*uParam2 = 0f;
			return;
		case 89:
			*uParam1 = { 2962.063f, 2204.987f, 165.3194f };
			*uParam2 = 230.7887f;
			return;
		case 91:
			*uParam1 = { 2819.17f, 301.7715f, 48.8212f };
			*uParam2 = 191.6095f;
			return;
		case 86:
			*uParam1 = { 2244.984f, -140.6945f, 46.6572f };
			*uParam2 = 110.0301f;
			return;
		case 51:
			*uParam1 = { 1988.3f, 1187.8f, 171f };
			*uParam2 = 0f;
			return;
		case 53:
			*uParam1 = { 1599.169f, 2198.761f, 321.9284f };
			*uParam2 = 117.4739f;
			return;
		case 73:
			*uParam1 = { 1472.249f, 802.5236f, 99.2177f };
			*uParam2 = 41.9282f;
			return;
		case 84:
			*uParam1 = { 1902.7f, 294.6f, 75.7f };
			*uParam2 = 34.0605f;
			return;
			*uParam1 = { -1570.748f, 247.7129f, 111.5785f };
			*uParam2 = 304.563f;
			return;
			if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1888801)[iParam0 /*35*/])->f_3))
			{
				*uParam1 = { VOLUME::_0xF70F00013A62F866(((*Global_1888801)[iParam0 /*35*/])->f_3) };
				vVar0 = { VOLUME::_0x18675BC914891122(((*Global_1888801)[iParam0 /*35*/])->f_3) };
				*uParam2 = vVar0.z;
			}
		}

bool func_46()
{
	return func_77(&Global_1935630, 4096);
}

int func_47(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar0 = func_127(iParam1);
	if (iParam4 != 0)
	{
		iVar0 = iParam4;
	}
	else if (iParam1 > -1 && iParam1 <= 5)
	{
		iVar0 = func_128(iParam1);
	}
	if ((bParam3 && func_129(iParam1, 4096)) && Global_1946804->f_1497 == iParam4)
	{
		return 1;
	}
	Global_1905941 = iParam1;
	if ((iParam1 > 5 || iParam4 != 0) && !func_130(iVar0, Global_1946804->f_1))
	{
		return 0;
	}
	if (bParam2)
	{
		func_131(Global_40.f_7729, 4096);
		func_132(&Global_1905941, 4096);
		Global_40.f_7729 = &Global_1905941;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		func_133(iParam0);
	}
	func_134();
	if (!func_135(iParam1))
	{
		func_137(iVar0, iParam0, func_136(iParam1), 1, 0, 1);
	}
	func_138(iParam0);
	return 1;
}

void func_48()
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

void func_49()
{
	struct<2> Var0;

	func_139();
	func_140();
	func_141(1);
	func_142(1);
	func_143(-2125499975);
	func_144();
	if (func_145() == 1160113249)
	{
		Global_40.f_7729 = 62;
		Global_1905941 = 62;
	}
	else
	{
		Global_40.f_7729 = 6;
		Global_1905941 = 6;
	}
	func_146();
	if (!func_35())
	{
		func_147(24);
	}
	else
	{
		func_148(24);
	}
	Global_1935630 = 0;
	func_149();
	func_48();
	func_150(1);
	func_151(0);
	if (ENTITY::DOES_ENTITY_EXIST(Global_35) && !ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		WEAPON::REMOVE_ALL_PED_WEAPONS(PLAYER::PLAYER_PED_ID(), false, true);
		if (func_35())
		{
			func_152(joaat("weapon_revolver_cattleman"), 1, 1, 0, 1, 752097756, 0, 0, 0, 0);
		}
		func_153(joaat("weapon_revolver_cattleman"));
		func_152(1259508039, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_35, 1862763509);
		UNLOCK::_UNLOCK_SET_UNLOCKED(-707360575, false);
		UNLOCK::_UNLOCK_SET_UNLOCKED(-1278339625, false);
		UNLOCK::_UNLOCK_SET_UNLOCKED(1880205078, false);
		UNLOCK::_UNLOCK_SET_UNLOCKED(-1201174711, false);
		UNLOCK::_UNLOCK_SET_UNLOCKED(151582343, false);
		UNLOCK::_UNLOCK_SET_UNLOCKED(1231074654, false);
		UNLOCK::_UNLOCK_SET_UNLOCKED(-642492359, false);
		UNLOCK::_UNLOCK_SET_UNLOCKED(1673898385, false);
		UNLOCK::_UNLOCK_SET_UNLOCKED(5171247, false);
		func_154(0);
		if (MONEY::_MONEY_GET_CASH_BALANCE() > 0)
		{
			MONEY::_MONEY_DECREMENT_CASH_BALANCE(MONEY::_MONEY_GET_CASH_BALANCE());
		}
		Var0 = { func_155(1644987397) };
		STATS::_0x0FEE2561120F3333(&Var0);
		if (!func_35())
		{
			func_156(1);
			func_152(-1623728698, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			func_152(1147557067, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			func_152(-569063887, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			func_152(1164374808, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(-707360575, true);
			UNLOCK::_UNLOCK_SET_UNLOCKED(-1278339625, true);
			UNLOCK::_UNLOCK_SET_UNLOCKED(1880205078, true);
			UNLOCK::_UNLOCK_SET_UNLOCKED(-1201174711, true);
			UNLOCK::_UNLOCK_SET_UNLOCKED(151582343, true);
			UNLOCK::_UNLOCK_SET_UNLOCKED(1231074654, true);
			UNLOCK::_UNLOCK_SET_UNLOCKED(-642492359, true);
			UNLOCK::_UNLOCK_SET_UNLOCKED(1673898385, true);
			UNLOCK::_UNLOCK_SET_UNLOCKED(5171247, true);
			if (func_157())
			{
				func_152(-755485480, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
				func_152(-486559882, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
				func_152(730856618, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
				func_152(-1429211481, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
				func_152(-227505011, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
				func_152(299161628, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
				func_152(-951828978, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
				func_152(-324053813, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
				func_152(785407605, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
				func_152(546981776, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
			}
			else
			{
				func_152(230530039, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			func_152(joaat("weapon_lasso"), 1, 1, 0, 1, 752097756, 0, 0, 0, 0);
			func_152(joaat("weapon_repeater_carbine"), 1, 1, 0, 1, 752097756, 0, 0, 0, 0);
			func_152(joaat("weapon_revolver_schofield"), 1, 1, 0, 1, 752097756, 0, 0, 0, 0);
			func_152(-1330115686, 100, 1, 0, 0, 752097756, 0, 0, 0, 0);
			func_152(1681219929, 100, 1, 0, 0, 752097756, 0, 0, 0, 0);
			func_152(-1838434463, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			func_152(-1448210800, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			func_152(-727924611, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			func_158(1449674019, 0, 1065353216, 1, 0, 0);
			func_152(-14157738, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			func_159(1);
			func_152(-1516555556, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			if (!func_157())
			{
				func_152(1533677103, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
				func_152(-2076104686, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
				func_152(-801397594, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
				func_152(1627068364, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			func_160();
			func_161(MISC::GET_RANDOM_INT_IN_RANGE(120, 420), 0, 1);
			if (!func_162(1661121390, 1, 0))
			{
				func_152(1661121390, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_162(624063935, 1, 0))
			{
				func_152(624063935, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_162(1560492757, 1, 0))
			{
				func_152(1560492757, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		PLAYER::_0x76F7E1BCD623A429(PLAYER::GET_PLAYER_INDEX());
	}
	func_163(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), 0);
	func_164(0, 1);
	func_106(1);
	func_165();
	func_166();
	func_167(1);
	func_168(1, 1);
	func_169(1);
	func_170();
	func_171();
	func_172();
	func_173();
	func_174();
	PED::_0xE6CB36F43A95D75F(0.1f);
}

int func_50(vector3 vParam0, bool bParam3)
{
	int iVar0;

	iVar0 = func_78();
	if (func_126(iVar0))
	{
		if (VOLUME::_0xF256A75210C5C0EB(((*Global_1888801)[iVar0 /*35*/])->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_175(vParam0, bParam3);
}

int func_51(int iParam0)
{
	if (func_121())
	{
		return 1;
	}
	if (!func_126(iParam0))
	{
		return 1;
	}
	if (func_109(iParam0) == 4)
	{
		if (iParam0 != func_44())
		{
			return 1;
		}
	}
	else if (MISC::IS_STRING_NULL_OR_EMPTY(&(((*Global_1888801)[iParam0 /*35*/])->f_23)))
	{
		return 1;
	}
	if (func_176(iParam0))
	{
		return 1;
	}
	else
	{
		if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1888801)[iParam0 /*35*/])->f_3))
		{
			if (VOLUME::_0xF256A75210C5C0EB(((*Global_1888801)[iParam0 /*35*/])->f_3, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false)))
			{
			}
		}
		if (func_177(iParam0, 2))
		{
		}
		if (func_177(iParam0, 1))
		{
		}
		if (SCRIPTS::IS_THREAD_ACTIVE(((*Global_1888801)[iParam0 /*35*/])->f_9, false))
		{
		}
	}
	return 0;
}

bool func_52()
{
	return ((func_24(1) && func_24(4)) && func_24(2));
}

void func_53()
{
	bool bVar0;
	int iVar1;

	if (func_97())
	{
		return;
	}
	func_178(8);
	func_179(Global_1897952->f_35);
	func_180(Global_1897952->f_35);
	Global_1897952->f_35++;
	if (Global_1897952->f_35 >= 17)
	{
		Global_1897952->f_35 = 0;
		bVar0 = true;
	}
	if (Global_1897952->f_36 != -1)
	{
		if (Global_1897952->f_36 != func_181())
		{
			func_182(Global_1897952->f_36);
		}
		return;
	}
	if (bVar0)
	{
		iVar1 = func_183(Global_36);
		if (iVar1 < 0 || iVar1 >= 17)
		{
			return;
		}
		if (func_181() != iVar1)
		{
			Global_1897952->f_37 = 1;
			if (func_182(iVar1))
			{
				return;
			}
		}
		if ((!Global_1897952->f_37 && !SCRIPTS::IS_THREAD_ACTIVE(Global_1897952->f_42, false)) && func_181() != -1)
		{
			func_182(func_181());
		}
		Global_1897952->f_37 = 0;
	}
}

void func_54()
{
	if (func_28() == -1)
	{
		if (func_184())
		{
			func_185();
		}
	}
	if (Global_1894899 & 64 != 0)
	{
		func_12();
		func_186(0);
	}
	func_187();
	func_188();
	func_189();
}

void func_55()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_28() != -1)
	{
		return;
	}
	iVar1 = 932;
	iVar2 = 952;
	iVar0 = 0;
	while (iVar0 < (iVar2 - iVar1) + 1)
	{
		func_190((iVar1 + iVar0), 0);
		iVar0++;
	}
}

void func_56()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 57)
	{
		if (func_125(iVar0))
		{
			func_147(iVar0);
		}
		else
		{
			func_148(iVar0);
		}
		iVar0++;
	}
}

void func_57(int iParam0)
{
	if (!func_191(iParam0))
	{
		return;
	}
	func_192(iParam0);
	func_148(iParam0);
}

void func_58()
{
	if (func_145() == 1160113249)
	{
		func_47(Global_35, 62, 1, 0, 0);
	}
	else
	{
		func_47(Global_35, 6, 1, 0, 0);
	}
}

bool func_59()
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

void func_60(int iParam0, int iParam1)
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

void func_61(int iParam0)
{
	int iVar0;

	if (func_28() != -1)
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

void func_62(float fParam0)
{
	if (func_193(1) < fParam0)
	{
		func_194(1, fParam0, 0);
	}
	if (func_193(2) < fParam0)
	{
		func_194(2, fParam0, 0);
	}
	if (func_193(0) < fParam0)
	{
		func_194(0, fParam0, 0);
	}
}

int func_63()
{
	if (func_17(32))
	{
		return 0;
	}
	if (func_195() == 3)
	{
		return 0;
	}
	if (func_17(2))
	{
		return 0;
	}
	if (func_17(4096))
	{
		return 0;
	}
	if (func_17(128))
	{
		return 0;
	}
	if (_NAMESPACE76::_0xC5C395C60B542A3C(1))
	{
		return 0;
	}
	if (Global_1572864->f_21 != 0)
	{
		return 0;
	}
	if (func_77(&Global_1935630, 131072))
	{
		return 0;
	}
	if (func_123())
	{
		return 0;
	}
	if ((func_28() == -1 && !Global_40) && Global_40.f_40)
	{
		return 0;
	}
	return 1;
}

void func_64()
{
	Global_0.f_6 = MISC::GET_GAME_TIMER();
	Global_0.f_3 = { Global_36 };
	func_196(&Global_0);
}

void func_65(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 - (Global_1572864->f_3 && iParam0));
}

void func_66()
{
	int iVar0;

	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_197(1);
		(*Global_1898441)[iVar0 /*38*/] = 1;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_ENTER_RDR", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_ENTER_RDR_COM", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_24), "AF_RDR", 24);
		StringCopy(((*Global_1898441)[iVar0 /*38*/])->f_5[0 /*3*/], "", 24);
	}
}

bool func_67(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

void func_68()
{
	func_198();
	func_199();
	func_200();
}

void func_69()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iVar0 == -1)
		{
		}
		else if (!func_201(iVar0, 1073741824))
		{
		}
		else
		{
			func_202(iVar0, 1);
		}
		iVar0++;
	}
}

void func_70()
{
	if (!func_203(4))
	{
		func_205(func_204());
	}
	if (func_35() && !func_206(40))
	{
		func_208(func_207());
	}
	func_209();
	if (func_35() && !func_206(48))
	{
		func_211(func_210());
	}
	if (func_35() && !func_206(42))
	{
		func_213(func_212());
	}
	if (!func_214(4))
	{
		func_216(func_215());
	}
	if (func_35() && !func_206(50))
	{
		func_218(func_217());
	}
	if (func_35() && !func_206(51))
	{
		func_220(func_219());
	}
	if (!func_221(8))
	{
		func_223(func_222());
	}
	if (!func_224(8))
	{
		func_226(func_225());
	}
	if (!func_227(8))
	{
		func_229(func_228());
	}
	if (!func_230(4))
	{
		func_232(func_231());
	}
	if (!func_233(8))
	{
		func_235(func_234());
	}
	if (!func_236(16))
	{
		func_238(func_237());
	}
}

void func_71()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 == -1)
		{
		}
		else
		{
			iVar1 = func_239(iVar0);
			if (!func_240(iVar1, -2147483648))
			{
			}
			else
			{
				func_241(iVar1, 1);
			}
		}
		iVar0++;
	}
}

void func_72()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_242(iVar0))
		{
			if (func_243(iVar0, 4))
			{
				if (!func_243(iVar0, 128))
				{
					if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_244(iVar0), func_245(iVar0)))
					{
						func_246(iVar0);
					}
					if (((*Global_1347702)[iVar0 /*49*/])->f_12 & 512 != 0)
					{
						func_247(iVar0);
					}
					else
					{
						func_248(iVar0);
					}
				}
				else
				{
					func_249(iVar0, 1);
					func_250(iVar0, 4);
					func_250(iVar0, 128);
					if (((*Global_1347702)[iVar0 /*49*/])->f_48 != -1)
					{
						iVar1 = func_91(((*Global_1347702)[iVar0 /*49*/])->f_48);
						if (iVar1 == 8)
						{
							iVar2 = func_251(((*Global_1347702)[iVar0 /*49*/])->f_48);
							if (func_242(iVar2))
							{
								if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_244(iVar2), func_245(iVar2)))
								{
									func_246(iVar2);
								}
								if (((*Global_1347702)[iVar2 /*49*/])->f_12 & 512 != 0)
								{
									func_247(iVar2);
								}
								else
								{
									func_248(iVar2);
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_73()
{
	func_252();
	func_253();
	func_254();
	func_255();
	func_256();
}

void func_74()
{
	if (!func_32(6))
	{
		return;
	}
	if (!func_32(37))
	{
		func_257(13);
	}
	if (!func_120(((*Global_1347702)[112 /*49*/])->f_15, 1))
	{
		func_257(1);
	}
	if (!func_32(21))
	{
		func_257(11);
		func_257(14);
	}
	if (func_120(((*Global_1347702)[67 /*49*/])->f_15, 1) && !func_32(37))
	{
		if (!func_258(6))
		{
			func_257(6);
		}
	}
	if (func_120(((*Global_1347702)[67 /*49*/])->f_15, 1) && !func_32(28))
	{
		if (!func_258(3))
		{
			func_257(3);
		}
	}
}

void func_75(bool bParam0)
{
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("a_m_y_asbminer_01"), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("a_m_y_asbminer_02"), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("a_m_y_asbminer_03"), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("a_m_y_asbminer_04"), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("a_m_y_nbxstreetkids_01"), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("a_m_y_nbxstreetkids_slums_01"), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("a_m_y_sdstreetkids_slums_02"), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("a_m_y_unicorpse_01"), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("s_m_y_army_01"), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("s_m_y_newspaperboy_01"), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("s_m_y_racrailworker_01"), bParam0);
}

void func_76()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0 /*5*/] == 1621135203 || &Global_40.f_4283.f_6[iVar0 /*5*/] == 1300783988)
		{
			return;
		}
		iVar0++;
	}
	iVar1 = func_259();
	switch (iVar1)
	{
		case 0:
			func_260(1621135203, 1137976064, -1235532919, -1, 1, 0, 1);
			PLAYER::_0x39BED552DB46FFA9(PLAYER::PLAYER_ID(), 5);
			break;
		case 4:
		case 5:
		case 6:
			func_260(1300783988, 1137976064, -1235532919, -1, 1, 0, 1);
			PLAYER::_0x39BED552DB46FFA9(PLAYER::PLAYER_ID(), 6);
			break;
		default:
			break;
	}
}

bool func_77(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_78()
{
	return Global_1894899->f_2;
}

void func_79(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 < 0 || iParam0 > 23)
	{
		return;
	}
	iVar0 = func_261();
	iVar1 = func_262(iVar0);
	iVar2 = func_263(iVar0);
	iVar3 = func_264(iVar0);
	if (func_265(iVar0) > iParam0)
	{
		iVar1++;
		if (iVar1 > func_266(iVar2, iVar3))
		{
			iVar1 = 1;
			if (iVar2 == 11)
			{
				iVar2 = 0;
				iVar3++;
			}
			else
			{
				iVar2++;
			}
		}
	}
	func_267(&iVar0, 0, 0, iParam0, iVar1, iVar2, iVar3);
	CLOCK::SET_CLOCK_TIME(func_265(iVar0), func_268(iVar0), func_269(iVar0));
	CLOCK::SET_CLOCK_DATE(func_262(iVar0), func_263(iVar0), func_264(iVar0));
}

void func_80()
{
	if (!func_2())
	{
		return;
	}
	if (func_32(17))
	{
		if (!func_270(joaat("weapon_repeater_evans")))
		{
			func_271(joaat("weapon_repeater_evans"));
		}
	}
	if (func_272(67))
	{
		if (!func_270(joaat("weapon_pistol_m1899")))
		{
			func_271(joaat("weapon_pistol_m1899"));
		}
	}
	if (func_32(33))
	{
		if (!func_270(joaat("weapon_revolver_lemat")))
		{
			func_271(joaat("weapon_revolver_lemat"));
		}
	}
	if (func_32(34))
	{
		if (!func_270(joaat("weapon_revolver_doubleaction_gambler")))
		{
			func_271(joaat("weapon_revolver_doubleaction_gambler"));
		}
	}
}

int func_81(var uParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;

	switch (*uParam0)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < 77)
			{
				iVar1 = 1;
				uVar2 = func_273(((*Global_1835011)[iVar0 /*74*/])->f_1);
				if (func_67(((*Global_1835011)[iVar0 /*74*/])->f_1) && func_120(((*Global_1835011)[iVar0 /*74*/])->f_1, 1))
				{
					switch (func_274(iVar0))
					{
						case 0:
							uParam0->f_1++;
							break;
						case 1:
							uParam0->f_2++;
							break;
						case 2:
							uParam0->f_3++;
							break;
						case 3:
							uParam0->f_4++;
							break;
						case 4:
							uParam0->f_5++;
							break;
						case 5:
							uParam0->f_6++;
							break;
						case 6:
							uParam0->f_7++;
							break;
						case 7:
							uParam0->f_8++;
							break;
						case 8:
							uParam0->f_9++;
							break;
						default:
							iVar1 = 0;
							break;
					}
					if (iVar0 == 7)
					{
						uParam0->f_11++;
					}
					if (iVar1 && MISSIONDATA::_0xE824CE7D13FCB35E(MISC::GET_HASH_KEY(&(((*Global_1835011)[iVar0 /*74*/])->f_8))))
					{
						uParam0->f_10++;
					}
					if (MISSIONDATA::_0x57E798B54C45EE1A(MISC::GET_HASH_KEY(&uVar2)) >= 5)
					{
						uParam0->f_13++;
					}
				}
				iVar0++;
			}
			*uParam0 = 1;
			break;
		case 1:
			iVar3 = 0;
			while (iVar3 < 156)
			{
				iVar1 = 1;
				uVar4 = func_273(((*Global_1347702)[iVar3 /*49*/])->f_15);
				if (func_67(((*Global_1347702)[iVar3 /*49*/])->f_15) && func_120(((*Global_1347702)[iVar3 /*49*/])->f_15, 1))
				{
					if (func_275(((*Global_1347702)[iVar3 /*49*/])->f_12, 536870912))
					{
						uParam0->f_12++;
					}
					if (func_275(((*Global_1347702)[iVar3 /*49*/])->f_12, 1))
					{
						switch (func_276(iVar3))
						{
							case 0:
								uParam0->f_1++;
								break;
							case 1:
								uParam0->f_2++;
								break;
							case 2:
								uParam0->f_3++;
								break;
							case 3:
								uParam0->f_4++;
								break;
							case 4:
								uParam0->f_5++;
								break;
							case 5:
								uParam0->f_6++;
								break;
							case 6:
								uParam0->f_7++;
								break;
							case 7:
								uParam0->f_8++;
								break;
							case 8:
								uParam0->f_9++;
								break;
							default:
								iVar1 = 0;
								break;
						}
						if (iVar1 && MISSIONDATA::_0xE824CE7D13FCB35E(MISC::GET_HASH_KEY(&(((*Global_1347702)[iVar3 /*49*/])->f_3))))
						{
							uParam0->f_10++;
						}
						if (MISSIONDATA::_0x57E798B54C45EE1A(MISC::GET_HASH_KEY(&uVar4)) >= 5)
						{
							uParam0->f_13++;
						}
					}
					else if (func_275(((*Global_1347702)[iVar3 /*49*/])->f_12, 4))
					{
						if (!func_275(((*Global_1347702)[iVar3 /*49*/])->f_12, 4194304))
						{
							if (!func_275(((*Global_1347702)[iVar3 /*49*/])->f_12, 512))
							{
								uParam0->f_14++;
							}
							else
							{
								uParam0->f_11++;
							}
						}
					}
				}
				iVar3++;
			}
			*uParam0 = 2;
			break;
		case 2:
			iVar5 = 0;
			while (iVar5 < 19)
			{
				if (iVar5 != 0)
				{
					switch (iVar5)
					{
						case 4:
							iVar6 = -727372692;
							break;
						case 5:
							iVar6 = 532503220;
							break;
						case 6:
							iVar6 = 562599937;
							break;
						case 7:
							iVar6 = 1714554710;
							break;
						case 8:
							iVar6 = 1610646968;
							break;
						case 9:
							iVar6 = -1249289544;
							break;
						case 10:
							iVar6 = -508074447;
							break;
						case 11:
							iVar6 = -1917132299;
							break;
						case 12:
							iVar6 = -763271696;
							break;
						case 13:
							iVar6 = 1116308524;
							break;
						case 14:
							iVar6 = 379859357;
							break;
						case 15:
							iVar6 = 1822876181;
							break;
						case 16:
							iVar6 = 1354284392;
							break;
						case 17:
							iVar6 = 43681669;
							break;
						case 18:
							iVar6 = 1871337449;
							break;
					}
					if (iVar6 != 0)
					{
						if (MAP::_0x3F81EA4275D39D6F(iVar6))
						{
							uParam0->f_15++;
						}
					}
				}
				iVar5++;
			}
			*uParam0 = 3;
			break;
		case 3:
			iVar7 = 0;
			while (iVar7 < 30)
			{
				if ((Global_40.f_11623[iVar7 /*8*/])->f_6 > 0)
				{
					uParam0->f_16++;
				}
				iVar7++;
			}
			*uParam0 = 4;
			break;
		case 4:
			iVar8 = 0;
			while (iVar8 < 120)
			{
				if (&Global_17503.f_42[iVar8 /*8*/] > 0)
				{
					uParam0->f_17++;
				}
				iVar8++;
			}
			*uParam0 = 5;
			break;
		case 5:
			iVar9 = 0;
			while (iVar9 < 9)
			{
				iVar10 = func_277(iVar9);
				if (func_126(iVar10))
				{
					iVar11 = func_278(iVar10);
					if (func_67(iVar11) && func_279(iVar11) > 0)
					{
						uParam0->f_18++;
					}
				}
				iVar9++;
			}
			*uParam0 = 6;
			break;
		case 6:
			iVar12 = 0;
			while (iVar12 < 144)
			{
				iVar13 = func_280(iVar12, 1);
				if (func_281(iVar13) && func_282(iVar13, 32))
				{
					uParam0->f_19++;
				}
				iVar12++;
			}
			*uParam0 = 7;
			break;
		case 7:
			if (MISC::IS_BIT_SET(Global_40.f_11958, 0))
			{
				uParam0->f_20++;
			}
			if (MISC::IS_BIT_SET(Global_40.f_11958, 1))
			{
				uParam0->f_20++;
			}
			if (MISC::IS_BIT_SET(Global_40.f_11958, 2))
			{
				uParam0->f_20++;
			}
			if (MISC::IS_BIT_SET(Global_40.f_11958, 3))
			{
				uParam0->f_20++;
			}
			iVar14 = 0;
			while (iVar14 < 8)
			{
				if (func_283(iVar14, 67108864))
				{
					uParam0->f_21++;
				}
				iVar14++;
			}
			if (func_120(func_111(0, 1, 11, -1894360593), 1))
			{
				uParam0->f_22++;
			}
			if (func_120(func_111(0, 2, 11, 581819093), 1))
			{
				uParam0->f_22++;
			}
			if (func_120(func_111(0, 3, 11, 687859577), 1))
			{
				uParam0->f_22++;
			}
			if (func_120(func_111(0, 4, 11, -103573613), 1))
			{
				uParam0->f_22++;
			}
			if (func_120(func_111(0, 5, 11, 1202375449), 1))
			{
				uParam0->f_23++;
			}
			if (func_120(func_111(0, 6, 11, 2038046186), 1))
			{
				uParam0->f_23++;
			}
			if (func_120(func_111(0, 7, 11, -839878969), 1))
			{
				uParam0->f_23++;
			}
			if (func_120(func_111(0, 8, 11, -360730635), 1))
			{
				uParam0->f_23++;
			}
			if (func_120(func_111(0, 9, 11, 194099983), 1))
			{
				uParam0->f_23++;
			}
			if (func_120(func_111(0, 10, 11, 2116153146), 1))
			{
				uParam0->f_24++;
			}
			if (func_120(func_111(0, 11, 11, -668333238), 1))
			{
				uParam0->f_24++;
			}
			if (func_120(func_111(0, 12, 11, 99378894), 1))
			{
				uParam0->f_24++;
			}
			if (func_120(func_111(0, 13, 11, 673012160), 1))
			{
				uParam0->f_24++;
			}
			iVar15 = 0;
			while (iVar15 < 16)
			{
				if ((Global_40.f_9319[iVar15 /*4*/])->f_1)
				{
					uParam0->f_25++;
				}
				iVar15++;
			}
			*uParam0 = 8;
			break;
		case 8:
			func_285(func_284(909007663, 1325140787), uParam0->f_1);
			func_285(func_284(909007663, 2101241783), uParam0->f_2);
			func_285(func_284(909007663, -1296936294), uParam0->f_3);
			func_285(func_284(909007663, -798388728), uParam0->f_4);
			func_285(func_284(909007663, -1787586531), uParam0->f_5);
			func_285(func_284(909007663, -1002834519), uParam0->f_6);
			func_285(func_284(909007663, -50600144), uParam0->f_7);
			func_285(func_284(909007663, -348503123), uParam0->f_8);
			func_285(func_284(909007663, -528798161), uParam0->f_9);
			func_285(func_284(909007663, 532323983), uParam0->f_10);
			func_285(func_284(909007663, 551192206), uParam0->f_14);
			func_285(func_284(909007663, -406093146), uParam0->f_11);
			func_285(func_284(-1756227506, -734935893), uParam0->f_25);
			func_285(func_155(1933084904), uParam0->f_15);
			func_285(func_155(-1342635612), uParam0->f_16);
			func_285(func_155(-1029789297), uParam0->f_17);
			func_285(func_155(64058978), uParam0->f_18);
			func_285(func_155(795577402), uParam0->f_19);
			func_286(5, uParam0->f_13);
			func_286(6, uParam0->f_20);
			func_286(7, uParam0->f_21);
			func_286(11, uParam0->f_12);
			if (Global_40.f_11095.f_37 == 8 || Global_40.f_11095.f_36 == 8)
			{
				func_286(10, 1);
			}
			if (uParam0->f_22 > 0)
			{
				STATS::CHAL_ADD_GOAL_PROGRESS_INT_BY_SCORE_ID(-85949609, 1);
			}
			if (uParam0->f_23 > 0)
			{
				STATS::CHAL_ADD_GOAL_PROGRESS_INT_BY_SCORE_ID(-1718529554, 1);
			}
			if (uParam0->f_24 > 0)
			{
				STATS::CHAL_ADD_GOAL_PROGRESS_INT_BY_SCORE_ID(1480231309, 1);
			}
			if (func_287(((*Global_1835011)[36 /*74*/])->f_1) < 1 && func_32(36))
			{
				STATS::CHAL_ADD_GOAL_PROGRESS_INT_BY_SCORE_ID(1594333983, 1);
			}
			func_288();
			return 1;
	}
	return 0;
}

void func_82()
{
	if (func_289(&Global_1898164, 2))
	{
		func_290(Global_1898164, 2);
		func_113(Global_1935630, 895);
	}
	if (func_289(&Global_1898164, 1))
	{
		func_290(Global_1898164, 1);
		func_291(Global_1898164, 2);
	}
}

int func_83()
{
	return &Global_1572864;
}

void func_84()
{
	Global_21 = 0;
}

void func_85()
{
	BRAIN::DISABLE_SCRIPT_BRAIN_SET(1);
}

void func_86()
{
}

void func_87()
{
	BRAIN::DISABLE_SCRIPT_BRAIN_SET(2);
}

int func_88()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

void func_89(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		(Global_12105[iParam0 /*7*/])->f_1 = 0;
		Global_12105[iParam0 /*7*/] = 0;
		(Global_12105[iParam0 /*7*/])->f_2 = 0;
		(Global_12105[iParam0 /*7*/])->f_3 = 0;
		(Global_12105[iParam0 /*7*/])->f_4 = 0;
		(Global_12105[iParam0 /*7*/])->f_6 = -15;
		return;
	}
	func_292(iParam0);
	Global_1058888->f_498[iParam0 /*2*/] = 0;
	(Global_1058888->f_498[iParam0 /*2*/])->f_1 = 0;
}

int func_90(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_293(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

int func_91(int iParam0)
{
	if (!func_67(iParam0))
	{
		return 0;
	}
	return func_295(func_294(iParam0));
}

int func_92(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_5;
	}
	return (Global_1058888->f_498[iParam0 /*2*/])->f_1;
}

void func_93(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_28() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

void func_94(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_12105[iParam0 /*7*/])->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_292(iParam0);
	}
	else
	{
		func_296(iParam0, iParam1);
	}
	func_297();
}

void func_95(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_6 = iParam1;
}

void func_96(int iParam0)
{
	var uVar0;
	struct<2> Var1;

	uVar0 = iParam0;
	Var1 = { func_155(-1048906573) };
	STATS::_0x6123E2832C34243D(&Var1, uVar0, -1, -1, 0);
}

int func_97()
{
	return 0;
}

void func_98(var uParam0)
{
	*uParam0 = DATAFILE::_0xD97D8D905F1562F2(-1412413887);
	while (!DATAFILE::_0x603AC35FD4602C76(*uParam0))
	{
		BUILTIN::WAIT(0);
	}
	DATAFILE::_DATAFILE_REGISTER_QUERY(*uParam0, 223399367, "regions/state(name=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(*uParam0, 1487863141, "iBountyDecayRate:value");
	DATAFILE::_DATAFILE_REGISTER_QUERY(*uParam0, -766247814, "iBountyDropToUnrestrict:value");
}

void func_99(var uParam0, int iParam1)
{
	struct<2> Var0;

	if (iParam1 > 6)
	{
		return;
	}
	if (iParam1 <= -1)
	{
		return;
	}
	if (!func_298(uParam0, iParam1, &Var0))
	{
		return;
	}
	Global_1934266->f_7[iParam1 /*3*/] = Var0;
	(Global_1934266->f_7[iParam1 /*3*/])->f_1 = Var0.f_1;
}

void func_100(var uParam0)
{
	DATAFILE::_DATAFILE_UNLOAD(*uParam0);
}

void func_101()
{
	Global_1934266->f_78 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "wanted");
	Global_1934266->f_78.f_55 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1934266->f_78, "showBountyHunterMessage", 0);
	func_299(&(Global_1934266->f_78.f_1), "firstMessage");
	func_299(&(Global_1934266->f_78.f_19), "secondMessage");
	func_299(&(Global_1934266->f_78.f_37), "thirdMessage");
	Global_1934266->f_78.f_62 = -1;
	StringCopy(&(Global_1934266->f_78.f_64), "", 24);
}

void func_102(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 <= -1 || iParam0 >= 630)
	{
		return;
	}
	Global_1905944->f_22[iParam0 /*9*/] = iParam1;
	(Global_1905944->f_22[iParam0 /*9*/])->f_2 = iParam2;
}

void func_103(int iParam0, int iParam1)
{
	(Global_1905944->f_22[iParam0 /*9*/])->f_8 = iParam1;
}

void func_104()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 21)
	{
		iVar1 = 0;
		while (iVar1 < 31)
		{
			func_300(iVar0, iVar1);
			iVar1++;
		}
		iVar0++;
	}
}

void func_105()
{
	Global_1905944->f_5693 = -1;
}

void func_106(int iParam0)
{
	func_302(1, func_301(1), iParam0);
	func_302(0, func_301(0), iParam0);
	func_302(2, func_301(2), iParam0);
}

int func_107(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_40.f_7862[iParam0 /*4*/])->f_1;
	}
	return (Global_42605[iParam0 /*4*/])->f_1;
}

void func_108(int iParam0)
{
	vector3 vVar0;

	vVar0 = { func_304(func_303(iParam0)) };
	Global_36307[iParam0] = MAP::_0x554D9D53F696D002(func_305(func_107(iParam0)), vVar0);
	MAP::SET_BLIP_SPRITE(&(Global_36307[iParam0]), func_306(func_107(iParam0)), true);
	MAP::SET_BLIP_FLASH_TIMER(&(Global_36307[iParam0]), func_107(iParam0), iParam0);
}

int func_109(int iParam0)
{
	if (!func_126(iParam0))
	{
		return 0;
	}
	return ((*Global_1888801)[iParam0 /*35*/])->f_20;
}

int func_110(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -4613767;
		case 1:
			return 1567162363;
		case 2:
			return 456471693;
		case 3:
			return -1772963474;
		case 4:
			return 1881496386;
		case 5:
			return 711768994;
		case 6:
			return -440834066;
		case 7:
			return -1363847832;
		case 8:
			return 967769300;
		case 9:
			return -1436873944;
		case 10:
			return -1585669139;
		case 11:
			return 16791368;
		case 12:
			return 1452922822;
		case 13:
			return 549538301;
		case 14:
			return 974698954;
		case 15:
			return 445881012;
		case 16:
			return -2043891857;
		case 17:
			return 419656993;
		case 18:
			return -1732457315;
		case 19:
			return 1794318026;
		case 20:
			return 2035159966;
		case 21:
			return 770832805;
		case 22:
			return -1109814766;
		case 24:
			return -1075550363;
		case 23:
			return -1080317735;
		case 25:
			return 2138576151;
		case 26:
			return 1180954297;
		case 27:
			return 783603394;
		case 28:
			return 1162337247;
		case 29:
			return -170458336;
		case 30:
			return 1285083821;
		case 31:
			return -1840907462;
		case 32:
			return 756710130;
		case 33:
			return 388370024;
		case 34:
			return 1092296123;
		case 35:
			return 467491346;
		case 36:
			return -1391584612;
		case 37:
			return -152111346;
		case 38:
			return 1447551317;
		case 39:
			return 153136092;
		case 40:
			return 1304405732;
		case 41:
			return 1074984055;
		case 50:
			return 1087476368;
		case 51:
			return -1768057340;
		case 42:
			return 1218874593;
		case 52:
			return -1438443836;
		case 43:
			return -2036340415;
		case 44:
			return 803939643;
		case 53:
			return -632496195;
		case 45:
			return -965943619;
		case 46:
			return 283532073;
		case 47:
			return -69067491;
		case 48:
			return -1864895118;
		case 54:
			return -1929806571;
		case 55:
			return -698525417;
		case 56:
			return -1149739894;
		case 49:
			return 380507325;
		case 57:
			return 407796241;
		case 58:
			return -152267914;
		case 59:
			return -1675443320;
		case 60:
			return 1940341639;
		case 61:
			return 1846596114;
		case 62:
			return 907708501;
		case 64:
			return 1825644981;
		case 65:
			return 2065937607;
		case 66:
			return -211317417;
		case 67:
			return 1801307910;
		case 68:
			return -4118897;
		case 69:
			return 1853610692;
		case 70:
			return -1574644415;
		case 71:
			return 2133055515;
		case 72:
			return -1413401932;
		case 73:
			return 801090761;
		case 74:
			return 2131218644;
		case 75:
			return 1708823660;
		case 76:
			return 7976942;
		case 77:
			return 2111120505;
		case 78:
			return 176893118;
		case 79:
			return 1179148161;
		case 63:
			return 602306665;
		case 80:
			return 547412068;
		case 81:
			return -1539748801;
		case 82:
			return -1605119912;
		case 83:
			return -884464063;
		case 84:
			return -1420970720;
		case 85:
			return 1017024547;
		case 86:
			return -1204497306;
		case 87:
			return -1621069480;
		case 88:
			return -458604261;
		case 89:
			return -923391614;
		case 90:
			return -689247089;
		case 91:
			return 44049568;
		case 92:
			return 1350259552;
		case 93:
			return -61661574;
		case 94:
			return -725338054;
		case 95:
			return -770123507;
		case 96:
			return 1322486734;
		case 97:
			return -460939553;
		case 98:
			return -1451863552;
		case 99:
			return 173833068;
		case 100:
			return -1681004136;
		case 101:
			return 713715980;
		case 102:
			return -31204969;
		case 103:
			return -1720064790;
		case 104:
			return -532172775;
		case 105:
			return -739067737;
		case 106:
			return -1203133835;
		case 107:
			return -1947411598;
		case 109:
			return -1298718762;
		case 110:
			return -595083064;
		case 111:
			return 884833917;
		case 112:
			return 2141950651;
		case 108:
			return -1049753365;
		case 113:
			return -1437650729;
		case 126:
			return 672925454;
		case 127:
			return 846062774;
		case 120:
			return 1369756178;
		case 121:
			return -736172423;
		case 122:
			return 1597070291;
		case 124:
			return -159501564;
		case 123:
			return -1438809608;
		case 125:
			return -102682392;
		case 114:
			return -81068979;
		case 115:
			return 227618407;
		case 116:
			return 2106043438;
		case 129:
			return -1868356491;
		case 117:
			return -1380256064;
		case 118:
			return -2118469183;
		case 119:
			return -558997834;
		case 128:
			return 658339366;
		default:
			break;
	}
	return 0;
}

int func_111(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_88())
	{
		iVar2 = func_88();
	}
	iVar5 = func_307(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_294(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_294(iVar6) == 0)
			{
				return func_308(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_294(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_294(iVar6) == 0)
			{
				return func_308(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_308(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

char* func_112(int iParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, "(", 64);
	StringIntConCat(&cVar0, func_251(iParam0), 64);
	StringConCat(&cVar0, ",", 64);
	StringIntConCat(&cVar0, func_309(iParam0), 64);
	StringConCat(&cVar0, ",", 64);
	StringConCat(&cVar0, func_310(func_91(iParam0)), 64);
	StringConCat(&cVar0, ")", 64);
	return HUD::_0xD8402B858F4DDD88(&cVar0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar0));
}

void func_113(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_114(var uParam0)
{
	if (Global_1572887->f_12 == 0)
	{
		return;
	}
	Global_40.f_1 = uParam0;
	TELEMETRY::_0x9BEE018A63FFFAD9(uParam0);
}

void func_115(var uParam0, int iParam1, bool bParam2)
{
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	func_311(1);
	func_312(0, 0, 1, 0);
	if ((iParam1 == -1 && SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME() != 27496334) && func_24(64))
	{
		PLAYER::FORCE_CLEANUP(2);
	}
	if (iParam1 == -1)
	{
		UILOG::_UILOG_CLEAR_ALL_ENTRIES();
		if (bParam2)
		{
			_NAMESPACE49::_0x7A1BD123E5CDB6E5();
			func_313();
			MISC::CLEAR_BIT(&(Global_1934765->f_301), 1);
		}
	}
	if (iParam1 == -1)
	{
		func_314();
		func_315();
	}
	func_316(uParam0, iParam1);
	func_317();
	func_318(1, 0);
	func_319(iParam1);
	func_320(iParam1);
	func_321();
	func_322(iParam1);
	func_323();
	func_324();
	func_325();
	func_326();
	func_327(1, 16);
	func_328();
	func_329(&(Global_1934765->f_402));
	func_330();
	func_331(1);
	HUD::_0x8BC7C1F929D07BF3(-1679307491);
	Global_1879534->f_6 = 1;
	Global_1879534->f_7 = 0;
	func_311(0);
}

void func_116()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1879534->f_7300)
	{
		(Global_1879534->f_7301.f_2[iVar0 /*4*/])->f_1 = &Global_1879534->f_7222[iVar0 /*2*/];
		iVar0++;
	}
}

void func_117()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Global_1879534->f_7300 - 1))
	{
		MISC::CLEAR_BIT(Global_1879534->f_7301.f_2[iVar0 /*4*/], 1);
		iVar0++;
	}
}

int func_118(bool bParam0, bool bParam1)
{
	int iVar0;
	struct<8> Var1;

	if (!bParam0)
	{
		if (STREAMING::_0xCF45DF50C7775F2A())
		{
			return 0;
		}
		if (func_332())
		{
			return 0;
		}
		if (!Global_1934765->f_274 && !func_17(32768))
		{
			if ((Global_1879534->f_1 || Global_1879534) // PointerArith)
			{
				return 0;
			}
		}
	}
	switch (&Global_1934765)
	{
		case 0:
			func_333(666617953);
			func_333(1733948592);
			func_333(1700234797);
			func_333(1305074360);
			func_333(-436566493);
			func_333(-1995815064);
			func_333(-483649675);
			func_333(212587871);
			func_333(2029194243);
			func_333(1190076410);
			func_333(350100475);
			func_333(2033090463);
			func_333(-688011628);
			func_333(-787042507);
			func_333(1688216398);
			func_333(669655585);
			func_333(-895099271);
			func_333(556610581);
			func_333(-786679704);
			if (func_2())
			{
				func_333(-693659956);
				func_333(642296010);
				func_333(-400238535);
				func_333(1416512144);
			}
			func_333(-991895362);
			func_333(-846479900);
			func_333(-866774384);
			if (!Global_1934765->f_288)
			{
				func_334(229);
			}
			PATHFIND::_0x6C3F12ECEB6D2E2A(-1176.011f, -32.44423f, 38f, -1186.829f, -18.19722f, 45f, 6, 1);
			PATHFIND::_0x6C3F12ECEB6D2E2A(-1177.246f, -19.60884f, 38f, -1170.786f, -12.71267f, 42f, 6, 1);
			PATHFIND::_0x6C3F12ECEB6D2E2A(-1174.544f, -4.74933f, 38f, -1163.424f, -13.43965f, 42f, 6, 1);
			func_335();
			func_336();
			func_337();
			return 0;
		case 1:
			func_338();
			func_337();
			return 0;
		case 2:
			func_339();
			func_337();
			return 0;
		case 3:
			break;
	}
	if (!func_340(514932331))
	{
		func_333(1892122519);
	}
	if (func_340(-1414537028))
	{
		if (!func_289(Global_1934765->f_20, 1))
		{
			func_341(5, 1);
			func_341(7, 1);
			func_341(6, 1);
			func_341(1, 1);
			func_291(&(Global_1934765->f_20), 1);
		}
	}
	else if (func_289(Global_1934765->f_20, 1))
	{
		func_341(5, 2);
		func_341(1, 2);
		func_290(&(Global_1934765->f_20), 1);
	}
	if (func_340(269047710))
	{
		func_342(382484708);
		func_333(-910880980);
	}
	else
	{
		func_342(-910880980);
		func_333(382484708);
	}
	if (func_340(-748969569))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("TAX_NOTICE", true);
	}
	else
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("TAX_NOTICE", false);
	}
	if (func_340(618699440))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("TAX_MARITAL", true);
	}
	else
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("TAX_MARITAL", false);
	}
	if (func_340(-1062490780))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("RARE_ORCHIDS_APPLESEED", true);
	}
	else
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("RARE_ORCHIDS_APPLESEED", false);
	}
	if (func_340(-683458244))
	{
		func_343(203);
		func_334(204);
	}
	else
	{
		func_343(204);
		func_334(203);
	}
	func_344(273461605, 79, 2, 4096);
	func_344(-868076593, 9, 32, 4096);
	func_344(1205826474, 36, 64, 4096);
	if (func_340(373691918))
	{
		if (WATER::_GET_WORLD_WATER_TYPE() != 1)
		{
			WATER::_SET_WORLD_WATER_TYPE(1);
		}
		if (!Global_43890)
		{
			STREAMING::_SET_GUARMA_WORLDHORIZON_ACTIVE(true);
			MAP::_0xA657EC9DBC6CC900(1935063277);
		}
		MAP::SET_MINIMAP_HIDE_FOW(true);
		MAP::_SET_FOW_UPDATE_ENABLED(false, 0);
		Global_43890 = 1;
	}
	else
	{
		if (func_340(657241756))
		{
			if (WATER::_GET_WORLD_WATER_TYPE() != 1)
			{
				WATER::_SET_WORLD_WATER_TYPE(1);
			}
		}
		else if (WATER::_GET_WORLD_WATER_TYPE() != 0)
		{
			WATER::_SET_WORLD_WATER_TYPE(0);
		}
		if (Global_43890)
		{
			STREAMING::_SET_GUARMA_WORLDHORIZON_ACTIVE(false);
			MAP::_0xA657EC9DBC6CC900(-1868977180);
		}
		MAP::SET_MINIMAP_HIDE_FOW(false);
		if (!func_17(128))
		{
			MAP::_SET_FOW_UPDATE_ENABLED(true, 0);
		}
		Global_43890 = 0;
	}
	if (func_340(-2058120606))
	{
		if (func_28() == -1)
		{
		}
	}
	else if (func_28() == -1)
	{
	}
	if (func_340(311708813))
	{
		func_333(-1786365097);
		func_334(178);
	}
	else
	{
		func_342(-1786365097);
		func_343(178);
	}
	if (!func_340(1399676951))
	{
		func_342(1934919499);
		func_342(993595204);
		func_342(-515396642);
		func_342(1291083725);
		func_342(2137790641);
		if (func_340(-1524512402))
		{
			func_333(2137790641);
			func_334(193);
		}
		else
		{
			iVar0 = func_287(func_345(11));
			if (func_346(iVar0, 1))
			{
				func_333(2137790641);
				func_334(193);
			}
			else
			{
				func_343(193);
				if (func_346(iVar0, 2))
				{
					func_333(1291083725);
				}
				else if (func_346(iVar0, 4))
				{
					func_333(993595204);
				}
			}
		}
	}
	if (func_340(1497516462))
	{
		if (func_28() == -1)
		{
			func_347(68, 16);
			func_348(557, 32);
			func_348(563, 32);
			func_348(560, 32);
			func_348(561, 32);
			func_348(562, 32);
			func_349(565, 32);
			func_350(565, 0);
			func_349(564, 32);
			func_350(564, 0);
			func_349(554, 32);
			func_350(554, 0);
			func_349(555, 32);
			func_350(555, 0);
			func_349(556, 32);
			func_350(556, 0);
		}
		func_343(199);
		func_334(198);
	}
	else if (func_340(2016141805))
	{
		if (func_28() == -1)
		{
			func_347(68, 16);
			func_348(557, 32);
			func_348(563, 32);
			func_349(560, 32);
			func_350(560, 0);
			func_349(561, 32);
			func_350(561, 0);
			func_349(562, 32);
			func_350(562, 0);
			func_349(554, 32);
			func_350(554, 0);
			func_349(555, 32);
			func_350(555, 0);
			func_349(556, 32);
			func_350(556, 0);
			func_349(565, 32);
			func_350(565, 0);
			func_349(564, 32);
			func_350(564, 0);
		}
		func_343(199);
		func_343(198);
	}
	else if (func_340(1010885152))
	{
		if (func_28() == -1)
		{
			func_351(68, 16);
			func_350(554, 0);
			func_350(555, 0);
			func_350(556, 0);
			func_350(557, 0);
			func_350(563, 0);
			func_350(560, 0);
			func_350(561, 0);
			func_350(562, 0);
			func_350(565, 0);
			func_350(564, 0);
		}
		func_343(199);
		func_334(198);
	}
	else if (func_340(-502324015))
	{
		if (func_28() == -1)
		{
			func_347(68, 16);
			func_349(554, 32);
			func_349(555, 32);
			func_349(556, 32);
			func_349(557, 32);
			func_349(563, 32);
			func_350(554, 0);
			func_350(555, 0);
			func_350(556, 0);
			func_350(557, 0);
			func_350(563, 0);
			func_348(565, 32);
			func_348(564, 32);
			func_348(560, 32);
			func_348(561, 32);
			func_348(562, 32);
		}
		func_343(198);
		func_334(199);
	}
	if (func_340(440043364))
	{
		func_342(376665102);
	}
	else
	{
		func_333(376665102);
	}
	if (func_340(-1425209566))
	{
		if (func_28() == -1)
		{
			func_348(800, 32);
		}
	}
	else if (func_28() == -1)
	{
		func_349(800, 32);
		func_350(800, 0);
	}
	func_352();
	if (func_340(0))
	{
		func_333(1149195254);
		func_333(2016081133);
		func_333(363257921);
		func_333(58066174);
		func_333(-1521525254);
		func_333(-761186147);
		func_333(-1872939092);
		func_333(-964156415);
		func_353(0);
		TASK::SET_SCENARIO_GROUP_ENABLED("BRA_MANOR_UNTIL_BRAITHWAITES_3", true);
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-842138123, false);
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1230241088, true);
		AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_braithwaite_manor_burnt", false, true);
		func_354(-434746250, 1);
		if (func_340(-699277634))
		{
			func_333(-2137633069);
			func_334(121);
			func_334(123);
			func_334(125);
			if (func_28() == -1)
			{
				func_351(93, 16);
				func_355(93);
			}
			if (!PED::_0x91A5F9CBEBB9D936(Global_1934765->f_1) && !bParam1)
			{
				Global_1934765->f_1 = PED::ADD_SCENARIO_BLOCKING_AREA(989.8797f, -1787.977f, 44.5697f, 1034.25f, -1752.225f, 59.7424f, false, 15);
			}
		}
		else
		{
			func_333(1944013855);
			func_334(120);
			func_334(122);
			func_334(124);
			func_347(93, 16);
			if (PED::_0x91A5F9CBEBB9D936(Global_1934765->f_1))
			{
				PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1934765->f_1, false);
				Global_1934765->f_1 = 0;
			}
		}
	}
	else if (func_340(473295046))
	{
		func_333(-1643869063);
		func_333(-1108618313);
		func_333(-787678727);
		func_353(0);
		TASK::SET_SCENARIO_GROUP_ENABLED("BRA_MANOR_UNTIL_BRAITHWAITES_3", false);
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-842138123, true);
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1230241088, true);
		AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_braithwaite_manor_burnt", true, true);
		func_354(-434746250, 1);
		if (func_340(-699277634))
		{
			func_356("bra_man_burned_bra3");
		}
		else
		{
			func_356("bra_man_burned");
		}
		func_347(93, 16);
		if (func_28() == -1)
		{
			func_348(621, 32);
			func_348(622, 32);
			func_348(623, 32);
			func_348(624, 32);
			func_349(909, 32);
			func_350(909, 0);
			func_349(910, 32);
			func_350(910, 0);
			func_349(911, 32);
			func_350(911, 0);
			func_349(912, 32);
			func_350(912, 0);
			func_349(913, 32);
			func_350(913, 0);
			func_349(914, 32);
			func_350(914, 0);
			func_349(617, 32);
			func_350(617, 0);
			func_349(618, 32);
			func_350(618, 0);
			func_349(619, 32);
			func_350(619, 0);
			func_349(620, 32);
			func_350(620, 0);
			func_349(915, 32);
			func_350(915, 0);
			func_349(916, 32);
			func_350(916, 0);
			func_349(917, 32);
			func_350(917, 0);
			func_349(625, 32);
			func_350(625, 0);
		}
		if (PED::_0x91A5F9CBEBB9D936(Global_1934765->f_1))
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1934765->f_1, false);
			Global_1934765->f_1 = 0;
		}
	}
	else if (func_340(-1738165526))
	{
		func_333(-1643869063);
		func_333(622597018);
		func_333(1649275138);
		func_353(1);
		func_356("bra_man_endsum");
		TASK::SET_SCENARIO_GROUP_ENABLED("BRA_MANOR_UNTIL_BRAITHWAITES_3", false);
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-842138123, true);
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1230241088, false);
		AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_braithwaite_manor_burnt", true, true);
		func_357(-434746250, 1);
		func_351(93, 16);
		if (!PED::_0x91A5F9CBEBB9D936(Global_1934765->f_1) && !bParam1)
		{
			Global_1934765->f_1 = PED::ADD_SCENARIO_BLOCKING_AREA(989.8797f, -1787.977f, 44.5697f, 1034.25f, -1752.225f, 59.7424f, false, 15);
		}
	}
	if (!func_340(-270094635))
	{
		func_333(1355914142);
		if (!VOLUME::_0x92A78D0BEDB332A3(Global_1934765->f_16))
		{
			Global_1934765->f_16 = VOLUME::_CREATE_VOLUME_CYLINDER(2846.517f, -1300.918f, 45.457f, 0f, 0f, -42f, 4.584f, 3.041f, 10.079f);
			PATHFIND::_0x19C7567D2F2287D6(Global_1934765->f_16, 7);
		}
	}
	else
	{
		func_342(1355914142);
		if (VOLUME::_0x92A78D0BEDB332A3(Global_1934765->f_16))
		{
			PATHFIND::_0x2C87C3E1C7B96EE2(Global_1934765->f_16);
			VOLUME::_0x43F867EF5C463A53(Global_1934765->f_16);
		}
	}
	if (func_340(-1666278201))
	{
		func_342(706203603);
		func_333(937192284);
	}
	else
	{
		func_342(937192284);
		func_333(706203603);
	}
	if (func_340(405586984))
	{
		func_342(-1052023588);
		func_342(-745087561);
		func_358("old_nav_wall_hole");
		func_358("old_nav_nts3_start");
		func_358("old_nav_nts3_end");
		func_333(944314155);
		func_356("old_nav_wall_fill");
	}
	else if (func_340(1509509592))
	{
		func_342(-1052023588);
		func_358("old_nav_wall_fill");
		func_358("old_nav_wall_hole");
		func_358("old_nav_nts3_end");
		func_333(944314155);
		func_333(-745087561);
		func_356("old_nav_nts3_start");
	}
	else if (func_340(-959357075))
	{
		func_342(944314155);
		func_358("old_nav_wall_fill");
		func_358("old_nav_nts3_start");
		func_358("old_nav_wall_hole");
		func_333(-1052023588);
		func_333(-745087561);
		func_356("old_nav_nts3_end");
	}
	else if (func_340(-1311865656))
	{
		func_342(944314155);
		func_342(-745087561);
		func_358("old_nav_wall_fill");
		func_358("old_nav_nts3_start");
		func_358("old_nav_nts3_end");
		func_333(-1052023588);
		func_356("old_nav_wall_hole");
	}
	if (func_340(2091701359))
	{
		func_333(-1081335485);
	}
	else
	{
		func_342(-1081335485);
	}
	if (func_340(1376646519))
	{
		func_342(-920505696);
		func_342(281772765);
		func_342(-516683274);
		func_343(135);
		func_343(136);
		func_343(137);
		func_343(138);
		func_358("nav_std_bank_start");
		func_358("nav_std_bank_shootout");
		func_358("nav_std_bank_dest");
		func_334(134);
		func_333(1017355491);
		func_333(-1004522372);
	}
	else if (func_340(931649776))
	{
		func_342(-920505696);
		func_342(-516683274);
		func_343(135);
		func_343(136);
		func_343(137);
		func_343(138);
		func_358("nav_std_bank_shootout");
		func_358("nav_std_bank_dest");
		func_333(-1004522372);
		func_334(134);
		func_333(1017355491);
		func_333(281772765);
		func_356("nav_std_bank_start");
	}
	else if (func_340(-434590080))
	{
		func_342(-920505696);
		func_342(-516683274);
		func_343(134);
		func_343(137);
		func_358("nav_std_bank_start");
		func_358("nav_std_bank_dest");
		func_333(-1004522372);
		func_334(135);
		func_334(136);
		func_334(138);
		func_333(1017355491);
		func_333(281772765);
		func_356("nav_std_bank_shootout");
	}
	else if (func_340(1743048395))
	{
		func_342(1017355491);
		func_342(281772765);
		func_342(-1004522372);
		func_343(134);
		func_343(135);
		func_334(137);
		func_334(138);
		func_358("nav_std_bank_start");
		func_358("nav_std_bank_shootout");
		func_333(-516683274);
		func_333(-920505696);
		func_356("nav_std_bank_dest");
	}
	else if (func_340(449774763))
	{
		func_342(1017355491);
		func_342(-516683274);
		func_342(281772765);
		func_343(134);
		func_343(135);
		func_343(136);
		func_343(138);
		func_333(-1004522372);
		func_334(137);
	}
	if (func_340(-764163380))
	{
		func_343(140);
		func_334(139);
	}
	else
	{
		func_343(139);
		func_334(140);
	}
	if (func_340(-349064220))
	{
		func_333(140744122);
		func_333(-1795618779);
		func_356("hso_post_caravan");
	}
	else
	{
		func_342(140744122);
		func_342(-1795618779);
		func_358("hso_post_caravan");
	}
	if (func_340(1776302352))
	{
		func_333(1691578074);
		func_333(-1936937394);
		func_356("dewclm_post_caravan");
	}
	else
	{
		func_342(1691578074);
		func_342(-1936937394);
		func_358("dewclm_post_caravan");
	}
	if (func_340(-523522517))
	{
		func_333(-1130111983);
		func_333(-1015786727);
	}
	else
	{
		func_342(-1130111983);
		func_342(-1015786727);
	}
	if (func_340(1591451572))
	{
		func_333(560821199);
	}
	else
	{
		func_342(560821199);
	}
	if (func_340(1177464213))
	{
		func_342(-313831898);
		func_342(634920011);
		func_333(1694736240);
		func_333(2035758463);
	}
	else
	{
		func_342(1694736240);
		func_342(2035758463);
		func_333(-313831898);
		func_333(634920011);
	}
	func_359();
	func_360();
	if (func_340(459290420))
	{
		func_333(474287981);
		func_333(-338553155);
		func_333(-1636879249);
		func_333(205214733);
		func_342(-1019727725);
		func_334(186);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", true);
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", true);
		func_361(-1170496998);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", false);
		if (func_35())
		{
			GRAPHICS::_SET_SNOW_COVERAGE_TYPE(0);
		}
	}
	else if (func_340(1884271742))
	{
		func_333(867231253);
		func_333(-323126593);
		func_333(-1316886711);
		func_333(205214733);
		func_342(-1019727725);
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", false);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", false);
		GRAPHICS::_SET_SNOW_COVERAGE_TYPE(0);
	}
	else if (func_340(-2038424081))
	{
		func_333(867231253);
		func_333(-1670453688);
		func_333(-323126593);
		func_333(-1316886711);
		func_333(205214733);
		func_356("col_nav_wint_end");
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", false);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", false);
		if (func_35())
		{
			GRAPHICS::_SET_SNOW_COVERAGE_TYPE(1);
		}
	}
	else if (func_340(753127042))
	{
		func_333(1248111234);
		func_333(-1670453688);
		func_333(-323126593);
		func_333(-1316886711);
		func_333(205214733);
		func_356("col_nav_wint2_post");
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", false);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", false);
		if (func_35())
		{
			GRAPHICS::_SET_SNOW_COVERAGE_TYPE(1);
		}
	}
	else if (func_340(-1187950766))
	{
		func_333(474287981);
		func_333(-1670453688);
		func_333(-1636879249);
		func_333(-338553155);
		func_334(186);
		func_356("col_nav_wint1_cabin_duringfire");
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", false);
		if (func_35())
		{
			GRAPHICS::_SET_SNOW_COVERAGE_TYPE(1);
		}
	}
	else if (func_340(356365161))
	{
		func_333(474287981);
		func_333(-1670453688);
		func_333(-338553155);
		func_333(-1636879249);
		func_356("col_nav_wint1_cabin_prefire");
		func_334(186);
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", false);
		if (func_35())
		{
			GRAPHICS::_SET_SNOW_COVERAGE_TYPE(1);
		}
	}
	else if (func_340(-939420910))
	{
		func_333(-1451954802);
		func_333(474287981);
		func_333(-717025835);
		func_333(-338553155);
		func_333(-1636879249);
		func_334(186);
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", true);
		func_361(-1170496998);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", false);
		if (func_35())
		{
			GRAPHICS::_SET_SNOW_COVERAGE_TYPE(1);
		}
	}
	if (func_340(-1170496998))
	{
		func_333(-1306375743);
		func_333(-743781837);
		func_333(2114706334);
		if (!VOLUME::_0x92A78D0BEDB332A3(Global_1934765->f_15))
		{
			Global_1934765->f_15 = VOLUME::_CREATE_VOLUME_CYLINDER(-1353.573f, 2424.476f, 306.385f, 0f, 0f, 0f, 0.4f, 0.4f, 1f);
			PATHFIND::_0x19C7567D2F2287D6(Global_1934765->f_15, 7);
		}
		func_334(149);
		func_334(150);
		func_334(151);
		func_334(152);
	}
	else
	{
		func_342(-1306375743);
		func_342(-743781837);
		func_342(2114706334);
		if (VOLUME::_0x92A78D0BEDB332A3(Global_1934765->f_15))
		{
			PATHFIND::_0x2C87C3E1C7B96EE2(Global_1934765->f_15);
			VOLUME::_0x43F867EF5C463A53(Global_1934765->f_15);
		}
		func_343(149);
		func_343(150);
		func_343(151);
		func_343(152);
	}
	func_362();
	if (func_340(2080210939))
	{
		func_333(-1055748784);
	}
	else
	{
		func_342(-1055748784);
	}
	if (func_340(1485195808))
	{
		func_334(147);
		func_343(148);
	}
	else
	{
		func_343(147);
		func_334(148);
	}
	if (func_340(-1532284567))
	{
		if (TASK::DOES_SCENARIO_GROUP_EXIST("BVH_GANG_hideout"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("BVH_GANG_hideout", true);
		}
	}
	else if (TASK::DOES_SCENARIO_GROUP_EXIST("BVH_GANG_hideout"))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("BVH_GANG_hideout", false);
	}
	if (func_340(2127577956))
	{
		func_333(-1070054959);
		func_342(-2014929982);
	}
	else
	{
		func_333(-2014929982);
		func_342(-1070054959);
	}
	if (func_340(-524145696))
	{
		func_333(809554858);
		func_333(1810083187);
		func_342(159921796);
		func_342(-1739900853);
		func_333(2113454609);
		func_333(-520163372);
		func_342(-90228526);
		func_343(17);
		func_343(2);
		func_343(4);
		func_334(1);
		func_334(5);
		func_363(931206119, 1, 0, 0, 0, 0, 0, 0);
		func_363(1783003505, 1, 0, 0, 0, 0, 0, 0);
		func_333(-646014955);
		func_358("shb_nav_camp_running");
		func_358("shb_nav_camp_teardown");
		func_342(1265596420);
		func_358("shb_nav_camp_01");
		func_356("shb_nav_camp_00");
		if (TASK::DOES_SCENARIO_GROUP_EXIST("SHB_HIDEOUT_CONFEDERATES"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("SHB_HIDEOUT_CONFEDERATES", true);
		}
		if (TASK::DOES_SCENARIO_GROUP_EXIST("HIDEOUT_SHADYBELLE_NOT_IN_COMBAT"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("HIDEOUT_SHADYBELLE_NOT_IN_COMBAT", false);
		}
	}
	else
	{
		func_358("shb_nav_camp_00");
		func_358("shb_nav_camp_01");
		func_342(809554858);
		func_342(1265596420);
		func_342(1810083187);
		func_363(931206119, 0, 0, 0, 1, 0, 0, 0);
		func_363(1783003505, 0, 0, 0, 1, 0, 0, 0);
		func_342(-646014955);
		if (func_340(282809459))
		{
			func_343(5);
			func_343(17);
			func_343(1);
			func_343(2);
			func_334(4);
			func_342(-520163372);
			func_333(-90228526);
			func_333(159921796);
			func_342(-1739900853);
			func_342(2113454609);
		}
		else if (func_340(1626481264))
		{
			func_343(5);
			func_343(4);
			func_343(1);
			func_343(2);
			func_334(17);
			func_342(-520163372);
			func_333(-90228526);
			func_333(159921796);
			func_333(-1739900853);
			func_342(2113454609);
		}
		else
		{
			func_342(-90228526);
			func_342(159921796);
			func_342(-1739900853);
			func_333(2113454609);
		}
		func_343(1);
		if (TASK::DOES_SCENARIO_GROUP_EXIST("SHB_HIDEOUT_CONFEDERATES"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("SHB_HIDEOUT_CONFEDERATES", false);
		}
		if (TASK::DOES_SCENARIO_GROUP_EXIST("HIDEOUT_SHADYBELLE_NOT_IN_COMBAT"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("HIDEOUT_SHADYBELLE_NOT_IN_COMBAT", false);
		}
	}
	if (func_340(-63926460))
	{
		func_342(1929440211);
		func_342(2126897368);
		func_333(-833857740);
		func_333(-825836321);
		if (func_340(1665756137))
		{
			func_333(-1718055184);
			func_358("han_nav_endless_summer");
			func_356("han_nav_endless_summer_marston4");
		}
		else
		{
			func_342(-1718055184);
			func_358("han_nav_endless_summer_marston4");
			func_356("han_nav_endless_summer");
		}
	}
	else
	{
		func_342(-833857740);
		func_342(-825836321);
		func_342(-1718055184);
		func_358("han_nav_endless_summer");
		func_358("han_nav_endless_summer_marston4");
		func_333(1929440211);
	}
	if (func_340(374115931))
	{
		func_334(164);
		func_356("bvh_nav_endless_summer");
	}
	else
	{
		func_343(164);
		func_358("bvh_nav_endless_summer");
	}
	if (func_340(1982676972))
	{
		func_334(20);
	}
	else
	{
		func_343(20);
	}
	if (func_340(-2034257789))
	{
		STREAMING::_REQUEST_IMAP(1817635528);
		func_343(22);
		func_343(24);
		func_334(21);
		func_334(23);
	}
	else
	{
		STREAMING::_REMOVE_IMAP(1817635528);
		func_343(21);
		func_343(23);
		func_334(22);
		func_334(24);
	}
	if (func_340(-1014145132))
	{
		func_334(200);
	}
	else
	{
		func_343(200);
	}
	if (func_340(-1840704908))
	{
		func_334(201);
	}
	else
	{
		func_343(201);
	}
	if (func_28() == -1)
	{
		if (func_340(-1053549743))
		{
			func_364(65536, 1);
		}
		else
		{
			func_364(65536, 0);
		}
	}
	func_365();
	if (func_340(-2073072369))
	{
		func_333(1343484786);
		func_333(1989074279);
		func_356("sad3_nav_rhodes_shootout_00");
	}
	else if (func_340(-1674179981))
	{
		if (func_340(-1053549743))
		{
			func_333(1871051363);
			func_333(-2144587490);
			func_333(1033721560);
			func_356("rho_nav_grave_norm_gry3_on");
		}
		else
		{
			func_333(1343484786);
			func_333(-1671953459);
			func_333(1871051363);
			func_333(-2144587490);
			func_356("rho_nav_grave_norm_gry3_off");
		}
	}
	else if (func_340(-1835851517))
	{
		if (func_340(-1053549743))
		{
			func_333(-2144587490);
			func_333(1033721560);
			func_356("rho_nav_grave_dug_gry3_on");
		}
		else
		{
			func_333(1343484786);
			func_333(-1671953459);
			func_333(-2144587490);
			func_356("rho_nav_grave_dug_gry3_off");
		}
	}
	else if (func_340(-1838352012))
	{
		if (func_340(-1053549743))
		{
			func_333(146746575);
			func_333(1033721560);
			func_356("rho_nav_grave_norm_gry3_on");
		}
		else
		{
			func_333(1343484786);
			func_333(-1671953459);
			func_333(146746575);
			func_356("rho_nav_grave_norm_gry3_off");
		}
	}
	if (func_340(-644722288))
	{
		func_342(1882605165);
		func_333(869642051);
	}
	else
	{
		func_342(869642051);
		func_333(1882605165);
	}
	if (func_340(1691618738))
	{
		func_342(-184821200);
		func_333(-490818122);
		func_333(1412515639);
		func_333(-1377139506);
	}
	else
	{
		func_333(-184821200);
		func_342(-490818122);
		func_342(1412515639);
		func_342(-1377139506);
	}
	if (func_340(-741351766))
	{
		func_343(130);
		func_334(131);
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765->f_12) && !bParam1)
		{
			Global_1934765->f_12 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(1351.383f, -1380.619f, 84.314f, 1.5f, 3f, 1.5f, 347f, false, 7);
		}
	}
	else
	{
		func_343(131);
		func_334(130);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765->f_12))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765->f_12));
		}
	}
	if (func_340(-1717960576))
	{
		func_343(133);
		func_334(132);
	}
	else if (func_340(210001842))
	{
		func_343(132);
		func_334(133);
	}
	if (func_340(-1164215952))
	{
		func_342(1603294144);
		func_333(349486662);
		func_343(144);
		func_334(143);
	}
	else
	{
		func_342(349486662);
		func_333(1603294144);
		func_343(143);
		func_334(144);
	}
	if (func_340(-1236261996))
	{
		func_342(897455211);
		func_342(774477221);
		func_333(1136898294);
		func_333(1097534152);
		func_343(146);
		func_334(145);
	}
	else
	{
		func_342(1136898294);
		func_342(1097534152);
		func_333(897455211);
		func_333(774477221);
		func_343(145);
		func_334(146);
	}
	if (func_340(-1799960545))
	{
		func_343(170);
		func_334(169);
	}
	else
	{
		func_343(169);
		func_334(170);
	}
	if (func_340(-628542779))
	{
		func_334(180);
	}
	else
	{
		func_343(180);
	}
	if (func_340(1500064347))
	{
		func_333(724436573);
		func_342(-1475403379);
	}
	else
	{
		func_333(-1475403379);
		func_342(724436573);
	}
	if (func_340(-1741667789))
	{
		func_343(179);
	}
	else
	{
		func_334(179);
	}
	if (func_340(-853383233))
	{
		if (func_28() == -1)
		{
			if (!func_366(70, 32))
			{
				func_349(70, 32);
				func_367(70);
			}
		}
	}
	else if (func_28() == -1)
	{
		if (func_366(70, 32))
		{
			func_348(70, 32);
			func_368(70);
		}
	}
	if (func_340(-334729750))
	{
		func_333(1138093977);
		func_356("wat_nav_grave");
	}
	else
	{
		func_342(1138093977);
		func_358("wat_nav_grave");
	}
	if (func_340(1926308480))
	{
		func_342(1849913721);
		func_333(573576705);
	}
	else if (func_340(280705402))
	{
		func_333(1849913721);
		func_342(573576705);
	}
	else if (func_340(1766284049))
	{
		func_342(1849913721);
		func_342(573576705);
	}
	if (func_340(-150493654))
	{
		func_342(-848315456);
		func_342(105426297);
		func_342(2095421392);
		func_342(-1614141377);
		func_342(45121961);
		func_342(-7594117);
		func_342(1388161943);
		func_333(-642132908);
		PATHFIND::_0xAFE2AE66F6251C66(-1177.246f, -19.60884f, 38f, -1170.786f, -12.71267f, 42f, 6, 1);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(&(Global_1934765->f_5[0])))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(Global_1934765->f_5[0]);
		}
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(&(Global_1934765->f_5[0])) && !bParam1)
		{
			Global_1934765->f_5[0] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1182.66f, -30.405f, 44.453f, 1f, 1f, 6f, 0f, false, 7);
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(&(Global_1934765->f_5[1])))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(Global_1934765->f_5[1]);
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(&(Global_1934765->f_5[2])))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(Global_1934765->f_5[2]);
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(&(Global_1934765->f_5[3])))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(Global_1934765->f_5[3]);
		}
		func_358("utp2_nav_tree_fallen");
	}
	else if (func_340(-1271608261))
	{
		func_342(-642132908);
		func_342(105426297);
		func_342(-1614141377);
		func_342(45121961);
		func_342(-7594117);
		func_342(1388161943);
		func_333(2095421392);
		func_333(-848315456);
		PATHFIND::_0xAFE2AE66F6251C66(-1176.011f, -32.44423f, 38f, -1186.829f, -18.19722f, 45f, 6, 1);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(&(Global_1934765->f_5[0])))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(Global_1934765->f_5[0]);
		}
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(&(Global_1934765->f_5[0])) && !bParam1)
		{
			Global_1934765->f_5[0] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1179.545f, -25.3265f, 42.664f, 1f, 13f, 1f, 15f, false, 7);
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(&(Global_1934765->f_5[1])))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(Global_1934765->f_5[1]);
		}
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(&(Global_1934765->f_5[1])) && !bParam1)
		{
			Global_1934765->f_5[1] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1161.862f, -27.8574f, 40.3872f, 1f, 1f, 9f, -7.41f, false, 7);
		}
		func_358("utp2_nav_tree_fallen");
	}
	else if (func_340(1846061697))
	{
		func_342(-642132908);
		func_342(2095421392);
		func_342(105426297);
		func_342(-7594117);
		func_333(45121961);
		func_333(-1614141377);
		func_333(-848315456);
		func_333(1388161943);
		PATHFIND::_0xAFE2AE66F6251C66(-1176.011f, -32.44423f, 38f, -1186.829f, -18.19722f, 45f, 6, 1);
		PATHFIND::_0xAFE2AE66F6251C66(-1174.544f, -4.74933f, 38f, -1163.424f, -13.43965f, 42f, 6, 1);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(&(Global_1934765->f_5[0])))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(Global_1934765->f_5[0]);
		}
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(&(Global_1934765->f_5[0])) && !bParam1)
		{
			Global_1934765->f_5[0] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1179.545f, -25.3265f, 41.664f, 1f, 13f, 3f, 15f, false, 7);
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(&(Global_1934765->f_5[1])))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(Global_1934765->f_5[1]);
		}
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(&(Global_1934765->f_5[1])) && !bParam1)
		{
			Global_1934765->f_5[1] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1161.862f, -27.8574f, 40.3872f, 1f, 1f, 9f, -7.41f, false, 7);
		}
		func_356("utp2_nav_tree_fallen");
	}
	else if (func_340(-1145519186))
	{
		func_342(-642132908);
		func_342(-848315456);
		func_342(-1614141377);
		func_342(45121961);
		func_342(2095421392);
		func_342(-7594117);
		func_342(1388161943);
		func_333(105426297);
		PATHFIND::_0xAFE2AE66F6251C66(-1177.246f, -19.60884f, 38f, -1170.786f, -12.71267f, 42f, 6, 1);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(&(Global_1934765->f_5[0])))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(Global_1934765->f_5[0]);
		}
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(&(Global_1934765->f_5[0])) && !bParam1)
		{
			Global_1934765->f_5[0] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1182.66f, -30.405f, 44.453f, 1f, 1f, 6f, 0f, false, 7);
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(&(Global_1934765->f_5[1])))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(Global_1934765->f_5[1]);
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(&(Global_1934765->f_5[2])))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(Global_1934765->f_5[2]);
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(&(Global_1934765->f_5[3])))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(Global_1934765->f_5[3]);
		}
		func_358("utp2_nav_tree_fallen");
	}
	if (!func_369(51))
	{
		if (func_340(1485494263))
		{
			func_342(1672215059);
			func_342(-1177027698);
			func_342(23211744);
			func_342(604668055);
			func_342(1324480450);
			func_333(1708195603);
			func_356("nts2_fallen_tree_ridge");
		}
		else
		{
			func_342(23211744);
			func_342(604668055);
			func_342(1708195603);
			func_333(1324480450);
			func_333(1672215059);
			func_333(-1177027698);
			func_358("nts2_fallen_tree_ridge");
		}
	}
	if (func_28() == -1)
	{
		if (func_340(-811637947))
		{
			if (func_366(497, 32))
			{
				func_348(497, 32);
				func_368(497);
			}
			if (func_366(498, 32))
			{
				func_348(498, 32);
				func_368(498);
			}
		}
		else
		{
			if (!func_366(497, 32))
			{
				func_349(497, 32);
				func_367(497);
			}
			if (!func_366(498, 32))
			{
				func_349(498, 32);
				func_367(498);
			}
		}
	}
	if (func_340(106479759))
	{
		func_342(-1403908542);
		func_342(1598834669);
		func_342(1299817544);
		func_342(1204787444);
		func_342(66523468);
		func_342(2040259178);
		func_342(1947806010);
		func_358("str_nav_construction_stage_0");
		func_358("str_nav_construction_stage_1");
		func_358("str_nav_construction_stage_2");
		func_358("str_nav_construction_stage_3");
		func_333(1924458218);
		func_356("utp1_bridge_cover");
	}
	else
	{
		func_342(1924458218);
		func_358("utp1_bridge_cover");
		if (func_340(198200492))
		{
			func_342(1299817544);
			func_342(1204787444);
			func_342(66523468);
			func_342(2040259178);
			func_342(1947806010);
			func_358("str_nav_construction_stage_1");
			func_358("str_nav_construction_stage_2");
			func_358("str_nav_construction_stage_3");
			func_333(-1403908542);
			func_333(1598834669);
			func_356("str_nav_construction_stage_0");
			if (func_28() == -1)
			{
				_NAMESPACE48::_0x187D65F3AEC5D679(-1066735787, "Strawberry/Str_Wood_Chop_Wife");
			}
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_INACTIVE", true);
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_ACTIVE", false);
		}
		else if (func_340(-1124061431))
		{
			func_342(-1403908542);
			func_342(1598834669);
			func_342(1204787444);
			func_342(66523468);
			func_342(2040259178);
			func_342(1947806010);
			func_358("str_nav_construction_stage_0");
			func_358("str_nav_construction_stage_2");
			func_358("str_nav_construction_stage_3");
			func_333(1299817544);
			func_356("str_nav_construction_stage_1");
			if (func_28() == -1)
			{
				_NAMESPACE48::_0x187D65F3AEC5D679(-1066735787, "Strawberry/Construction_House_Active/Str_Wood_Chop_Wife");
			}
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_INACTIVE", false);
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_ACTIVE", true);
		}
		else if (func_340(52706132))
		{
			func_342(-1403908542);
			func_342(1598834669);
			func_342(1299817544);
			func_342(66523468);
			func_342(2040259178);
			func_342(1947806010);
			func_358("str_nav_construction_stage_0");
			func_358("str_nav_construction_stage_1");
			func_358("str_nav_construction_stage_3");
			func_333(1204787444);
			func_356("str_nav_construction_stage_2");
			if (func_28() == -1)
			{
				_NAMESPACE48::_0x187D65F3AEC5D679(-1066735787, "Strawberry/Construction_House_Active/Str_Wood_Chop_Wife");
			}
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_INACTIVE", false);
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_ACTIVE", true);
		}
		else if (func_340(-259123672))
		{
			func_342(-1403908542);
			func_342(1598834669);
			func_342(1299817544);
			func_342(1204787444);
			func_358("str_nav_construction_stage_0");
			func_358("str_nav_construction_stage_1");
			func_358("str_nav_construction_stage_2");
			func_333(66523468);
			func_333(2040259178);
			func_333(1947806010);
			func_356("str_nav_construction_stage_3");
			if (func_28() == -1)
			{
				_NAMESPACE48::_0x187D65F3AEC5D679(-1066735787, "Strawberry/Construction_House_Active/Str_Wood_Chop_Wife");
			}
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_INACTIVE", false);
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_ACTIVE", true);
		}
	}
	if (func_340(-356975260))
	{
		func_342(73781828);
		func_333(-391567710);
	}
	else
	{
		func_342(-391567710);
		func_333(73781828);
	}
	if (func_340(-2106214197))
	{
	}
	else if (func_340(-1029225159))
	{
	}
	if (func_340(757752139))
	{
		func_343(168);
	}
	else
	{
		func_334(168);
	}
	if (func_340(1609506757))
	{
		func_333(-205116461);
		func_333(-1490034522);
		func_342(-1473336090);
		func_342(-1013403664);
		if (!Global_1934765->f_289)
		{
			Global_1934765->f_401 = -1;
			Global_1934765->f_289 = 1;
		}
		func_343(158);
		if (!func_369(47))
		{
			func_334(159);
		}
		else
		{
			func_343(159);
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765->f_14))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765->f_14));
		}
		if (func_340(439465264))
		{
			func_334(155);
			func_343(154);
			func_334(157);
			func_343(156);
		}
		else
		{
			func_334(156);
			func_370(156);
			func_334(154);
			func_343(155);
			func_343(157);
		}
	}
	else
	{
		func_333(-1473336090);
		func_333(-1013403664);
		func_342(-205116461);
		func_342(-1490034522);
		Global_1934765->f_289 = 0;
		func_343(154);
		func_343(155);
		func_343(157);
		func_343(156);
		func_343(159);
		func_334(158);
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765->f_14) && !bParam1)
		{
			Global_1934765->f_14 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(2698.198f, -1187.154f, 51.26f, 3.878f, 0.326f, 3.352f, func_371(-179f), false, 7);
		}
	}
	if (func_340(-2021582629) && func_372())
	{
		func_342(432272547);
		func_333(204868257);
		func_356("nav_sdn_fundraiser");
	}
	else
	{
		func_342(204868257);
		func_333(432272547);
		func_358("nav_sdn_fundraiser");
	}
	if (func_340(-1232809834))
	{
		func_342(206289712);
		func_333(-1225383143);
	}
	else
	{
		func_342(-1225383143);
		func_333(206289712);
	}
	if (func_340(141950038))
	{
		func_342(-473077489);
		func_333(619024057);
		func_333(-836433697);
		func_354(586229709, 1);
	}
	else
	{
		func_342(-836433697);
		func_342(619024057);
		func_333(-473077489);
		func_357(586229709, 1);
	}
	if (func_340(544152906))
	{
		func_342(1821956151);
		func_333(-704461521);
	}
	else
	{
		func_342(-704461521);
		func_333(1821956151);
	}
	if (func_340(26054262))
	{
		func_334(166);
	}
	else
	{
		func_343(166);
	}
	if (func_340(-503955743))
	{
		func_334(167);
	}
	else
	{
		func_343(167);
	}
	if (func_340(945612176))
	{
		func_334(161);
		func_334(163);
		func_343(160);
		func_343(162);
	}
	else
	{
		func_334(160);
		func_334(162);
		func_343(161);
		func_343(163);
	}
	if (func_340(-1706438978))
	{
		func_334(142);
		func_343(141);
	}
	else
	{
		func_343(141);
		func_343(142);
	}
	if (func_340(94263042))
	{
		func_333(-1499162505);
		func_333(1916362667);
		if (func_340(-2106445152))
		{
			func_342(-1832103801);
			func_343(230);
			func_358("fin2_micah_hideout");
			func_356("fin2_micah_hideout_abandon");
		}
		else
		{
			func_333(-1832103801);
			func_334(230);
			func_358("fin2_micah_hideout_abandon");
			func_356("fin2_micah_hideout");
		}
	}
	else
	{
		func_342(-1499162505);
		func_342(1916362667);
		func_342(-1832103801);
		func_343(230);
		func_358("fin2_micah_hideout");
		func_358("fin2_micah_hideout_abandon");
	}
	if (func_340(-25901845))
	{
		func_342(-468702164);
		func_343(192);
		func_333(-1436188587);
		func_334(191);
	}
	else
	{
		func_342(-1436188587);
		func_343(191);
		func_333(-468702164);
		func_334(192);
	}
	if (func_340(-75024673))
	{
		func_333(1573766063);
	}
	else
	{
		func_342(1573766063);
	}
	if (func_340(1250636944))
	{
		func_333(-892659042);
	}
	else
	{
		func_342(-892659042);
	}
	if (func_340(-1831552326))
	{
		func_334(194);
		func_343(195);
	}
	else
	{
		func_334(195);
		func_343(194);
	}
	if (func_340(-1151084372))
	{
		func_334(196);
	}
	else
	{
		func_343(196);
	}
	if (func_340(1064154891))
	{
		func_334(19);
		func_343(18);
	}
	else
	{
		func_334(18);
		func_343(19);
	}
	if (func_340(1822001510))
	{
	}
	else if (func_340(-1612662716))
	{
	}
	if (func_340(689930684))
	{
		func_334(176);
	}
	else
	{
		func_343(176);
	}
	if (func_340(-1957523409))
	{
		func_334(177);
	}
	else
	{
		func_343(177);
	}
	if (func_340(1306158345))
	{
		func_342(943998860);
		func_342(1949854427);
		func_342(580700069);
		func_342(1347068672);
		func_358("HKK_Trashed_Wagons");
		func_358("HKK_Part_Fixed");
		func_358("HKK_Camp_Only");
		func_373(1949854427);
	}
	else if (func_340(1952610440))
	{
		func_342(943998860);
		func_333(1949854427);
		func_333(580700069);
		func_333(1347068672);
		func_358("HKK_Part_Fixed");
		func_358("HKK_Camp_Only");
		func_356("HKK_Trashed_Wagons");
		func_374(1949854427);
	}
	else if (func_340(-223469678))
	{
		func_333(943998860);
		func_333(1949854427);
		func_342(580700069);
		func_342(1347068672);
		func_358("HKK_Trashed_Wagons");
		func_358("HKK_Camp_Only");
		func_356("HKK_Part_Fixed");
		func_374(1949854427);
	}
	else if (func_340(-404698347))
	{
		func_333(943998860);
		func_342(1949854427);
		func_342(580700069);
		func_342(1347068672);
		func_358("HKK_Trashed_Wagons");
		func_358("HKK_Part_Fixed");
		func_356("HKK_Camp_Only");
		func_374(1949854427);
	}
	else if (func_340(1517904467))
	{
		func_342(943998860);
		func_342(1949854427);
		func_342(580700069);
		func_342(1347068672);
		func_358("HKK_Trashed_Wagons");
		func_358("HKK_Part_Fixed");
		func_358("HKK_Camp_Only");
		func_373(1949854427);
	}
	if (func_340(-1405998267))
	{
		func_333(2015532863);
	}
	else
	{
		func_342(2015532863);
	}
	if (func_340(-468693731))
	{
		func_342(-800942395);
		func_333(-741366935);
	}
	else
	{
		func_342(-741366935);
		func_333(-800942395);
	}
	if (func_340(-238080464))
	{
		func_333(-1579403437);
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765->f_10) && !bParam1)
		{
			Global_1934765->f_10 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-304.439f, 783.08f, 117.11f, 1.909f, 4.17f, 3f, 9.6f, false, 7);
		}
	}
	else
	{
		func_342(-1579403437);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765->f_10))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765->f_10));
		}
	}
	if (func_340(1607768502))
	{
		func_333(808576710);
		func_342(-775951892);
		func_342(1547403545);
		func_342(1431947993);
		func_342(137316925);
		func_342(-660075384);
	}
	else if (func_340(-1852605133))
	{
		func_333(1547403545);
		func_342(-775951892);
		func_342(808576710);
		func_342(1431947993);
		func_342(137316925);
		func_342(-660075384);
	}
	else if (func_340(-129643890))
	{
		func_333(-660075384);
		func_342(-775951892);
		func_342(1547403545);
		func_342(808576710);
		func_342(1431947993);
		func_342(137316925);
	}
	else if (func_340(-1433686245))
	{
		func_333(137316925);
		func_342(-775951892);
		func_342(1547403545);
		func_342(808576710);
		func_342(1431947993);
		func_342(-660075384);
	}
	else
	{
		func_333(-775951892);
		func_342(1547403545);
		func_342(808576710);
		func_342(1431947993);
		func_342(137316925);
		func_342(-660075384);
	}
	if (func_340(192515737))
	{
		func_333(1104143966);
		func_342(-2142987163);
		func_342(1027093524);
		func_342(1879779330);
		func_342(-1617847332);
		func_342(317070801);
	}
	else if (func_340(426191476))
	{
		func_333(-2142987163);
		func_342(1104143966);
		func_342(1027093524);
		func_342(1879779330);
		func_342(-1617847332);
		func_342(317070801);
	}
	else if (func_340(187862543))
	{
		func_333(1027093524);
		func_342(1104143966);
		func_342(-2142987163);
		func_342(1879779330);
		func_342(-1617847332);
		func_342(317070801);
	}
	else if (func_340(417081698))
	{
		func_333(1879779330);
		func_342(1104143966);
		func_342(-2142987163);
		func_342(1027093524);
		func_342(-1617847332);
		func_342(317070801);
	}
	else if (func_340(791041526))
	{
		func_333(-1617847332);
		func_342(1104143966);
		func_342(-2142987163);
		func_342(1027093524);
		func_342(1879779330);
		func_342(317070801);
	}
	else
	{
		func_333(317070801);
		func_342(1104143966);
		func_342(-2142987163);
		func_342(1027093524);
		func_342(1879779330);
		func_342(-1617847332);
	}
	if (func_125(45))
	{
		if (func_340(-1838712533))
		{
			func_333(-771786794);
			func_342(-1267247536);
			func_342(-468635897);
			func_342(535384482);
			func_342(1088045886);
			func_342(-1678761663);
			func_342(1724413302);
			func_342(-626641013);
		}
		else if (func_340(1140218954))
		{
			func_333(-1267247536);
			func_342(-468635897);
			func_342(-771786794);
			func_342(535384482);
			func_342(1088045886);
			func_342(-1678761663);
			func_342(1724413302);
			func_342(-626641013);
		}
		else
		{
			func_333(-468635897);
			func_342(-771786794);
			func_342(-1267247536);
			func_342(535384482);
			func_342(1088045886);
			func_342(-1678761663);
			func_342(1724413302);
			func_342(-626641013);
		}
	}
	else if (func_340(-1257057567))
	{
		func_333(1088045886);
		func_342(-1678761663);
		func_342(1724413302);
		func_342(-626641013);
		func_342(535384482);
		func_342(-771786794);
		func_342(-1267247536);
		func_342(-468635897);
	}
	else if (func_340(-1419919497))
	{
		func_333(-1678761663);
		func_342(1724413302);
		func_342(-626641013);
		func_342(535384482);
		func_342(1088045886);
		func_342(-771786794);
		func_342(-1267247536);
		func_342(-468635897);
	}
	else if (func_340(-1718674470))
	{
		func_333(1724413302);
		func_342(-626641013);
		func_342(535384482);
		func_342(1088045886);
		func_342(-1678761663);
		func_342(-771786794);
		func_342(-1267247536);
		func_342(-468635897);
	}
	else if (func_340(-35658630))
	{
		func_333(-626641013);
		func_342(535384482);
		func_342(1088045886);
		func_342(-1678761663);
		func_342(1724413302);
		func_342(-771786794);
		func_342(-1267247536);
		func_342(-468635897);
	}
	else
	{
		func_333(535384482);
		func_342(1088045886);
		func_342(-1678761663);
		func_342(1724413302);
		func_342(-626641013);
		func_342(-771786794);
		func_342(-1267247536);
		func_342(-468635897);
	}
	if (func_340(-108307814))
	{
		func_342(-205505701);
		func_333(-51262018);
	}
	else
	{
		func_342(-51262018);
		func_333(-205505701);
	}
	if (func_340(-1123615607))
	{
		func_342(874022542);
		func_342(-2105071972);
		func_333(552030279);
		func_356("disco_nav_alchemist_house_burnt");
	}
	else
	{
		func_342(552030279);
		func_358("disco_nav_alchemist_house_burnt");
		func_333(874022542);
		func_333(-2105071972);
	}
	if (func_340(-261141318))
	{
		func_333(-531198053);
	}
	else
	{
		func_342(-531198053);
	}
	func_333(-791673850);
	func_333(-395621323);
	func_333(-1799943886);
	func_333(-1436313374);
	func_333(1473078398);
	func_342(-2116659774);
	func_333(-953275122);
	func_333(-893624314);
	func_333(1193359531);
	func_333(1145227353);
	func_333(1915867459);
	func_333(98482444);
	func_333(26932594);
	func_333(-1930879809);
	func_333(46370274);
	func_333(-1279036865);
	func_333(781058494);
	func_333(1467466015);
	func_333(-363626454);
	func_333(-1314125880);
	func_333(1763246099);
	func_333(-593457329);
	func_333(274045919);
	func_333(-1047394327);
	func_333(-1535282356);
	func_333(-1816233372);
	func_333(-551038153);
	func_333(-1022426685);
	func_333(-262759679);
	func_333(976641588);
	func_333(1601053042);
	func_342(453346329);
	func_333(-1233192626);
	func_342(-620856989);
	func_333(1262164851);
	func_333(-755250900);
	func_358("disco_nav_circus_wagon_off");
	func_333(658964321);
	if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765->f_13) && !bParam1)
	{
		Global_1934765->f_13 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(2813.128f, 991.613f, 54.6f, 9.375f, 3.243f, 7.954f, 30.906f, false, 7);
	}
	func_334(202);
	func_334(231);
	if (func_340(1015669983))
	{
		func_342(317070801);
		func_333(-763477089);
	}
	else
	{
		func_342(-763477089);
		func_333(317070801);
	}
	if (func_340(1867912207))
	{
		func_343(175);
		func_334(174);
	}
	else
	{
		func_343(174);
		func_334(175);
	}
	if (func_340(-534215902))
	{
		func_343(197);
	}
	else
	{
		func_334(197);
	}
	if (func_340(-9438024))
	{
		func_343(173);
		func_334(171);
		func_334(172);
	}
	else
	{
		func_334(173);
		func_343(171);
		func_343(172);
	}
	if (func_340(-1223121209))
	{
		func_342(1886602884);
		func_342(-1640200357);
		func_333(-1280884206);
	}
	else if (func_340(630808005))
	{
		func_342(-1280884206);
		func_333(1886602884);
		func_333(-1640200357);
	}
	else
	{
		func_342(-1280884206);
		func_342(-1640200357);
		func_333(1886602884);
	}
	if (func_340(1453909576))
	{
		func_342(-2127665186);
		func_342(-451832572);
		func_342(-689352221);
		func_342(1854980771);
		func_342(325677491);
		func_342(-391187090);
		func_342(1513363974);
		func_342(-1349539327);
		func_342(1963724330);
		func_333(-1902184438);
		func_333(1236921921);
		func_333(740012805);
	}
	else if (func_340(1643531967))
	{
		func_342(-1902184438);
		func_342(-689352221);
		func_342(1236921921);
		func_342(-391187090);
		func_342(740012805);
		func_342(1963724330);
		func_333(-2127665186);
		func_333(-451832572);
		func_333(1854980771);
		func_333(325677491);
		func_333(1513363974);
		func_333(-1349539327);
	}
	else
	{
		func_342(-1902184438);
		func_342(-451832572);
		func_342(1236921921);
		func_342(325677491);
		func_342(740012805);
		func_342(-1349539327);
		func_333(-2127665186);
		func_333(-689352221);
		func_333(1854980771);
		func_333(-391187090);
		func_333(1513363974);
		func_333(1963724330);
	}
	if (func_340(1164928979))
	{
		func_342(-1366431554);
		func_333(-960136064);
	}
	else
	{
		func_342(-960136064);
		func_333(-1366431554);
	}
	if (func_340(527226204))
	{
		func_342(-2122914678);
		func_333(-518004776);
	}
	else
	{
		func_342(-518004776);
		func_333(-2122914678);
	}
	if (func_340(1944170089))
	{
		func_333(1210820782);
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765->f_3) && !bParam1)
		{
			Global_1934765->f_3 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(665.03f, -1252.61f, 42.82f, 0.55f, 0.55f, 1f, 0f, false, 7);
		}
	}
	else
	{
		func_342(1210820782);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765->f_3))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765->f_3));
		}
	}
	if (func_340(1213993593))
	{
		func_333(-520400509);
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765->f_4) && !bParam1)
		{
			Global_1934765->f_4 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-112.01f, -36.73f, 95.65f, 0.5f, 0.5f, 0.75f, 0f, false, 7);
		}
	}
	else
	{
		func_342(-520400509);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765->f_4))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765->f_4));
		}
	}
	if (func_340(1216784232))
	{
		func_333(-1813544782);
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765->f_11) && !bParam1)
		{
			Global_1934765->f_11 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1593.796f, -181.753f, 138.934f, 6.212f, 2.801f, 5.068f, 220.2273f, false, 7);
		}
	}
	else
	{
		func_342(-1813544782);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765->f_11))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765->f_11));
		}
	}
	if (func_340(1410198831))
	{
		func_333(-1132206051);
		func_374(-1132206051);
	}
	else
	{
		func_342(-1132206051);
		func_373(-1132206051);
	}
	if (func_340(-538889627))
	{
		if (func_375(536870912) == 0)
		{
			func_376(536870912);
			MAP::_0x1392105DA88BBFFB(-1696121865, -2550f, 400f, 0, 0);
		}
		func_342(1221694281);
		func_342(-1552951782);
		func_342(-1142569437);
		func_342(474113610);
		func_342(-297340751);
		func_342(1802934313);
		func_342(2108112010);
		func_342(1208537422);
		func_342(361734047);
		func_342(446554495);
		func_342(-118700196);
		func_342(-735136865);
		func_342(636278554);
		func_358("pro_empty_nav");
		func_358("pro_fence_fixed_nav");
		func_358("pro_burned_nav");
		func_333(1423681694);
		func_333(775893260);
		func_333(-602816690);
		func_333(1271713904);
		func_333(1031662866);
		func_333(-1041976064);
		func_333(1983816160);
		func_333(-436084091);
		func_333(-868830916);
		func_333(-285245562);
		func_333(-262959893);
		func_333(1049886174);
		func_333(-1042390616);
		func_333(2038589758);
		func_356("pro_fence_broken_nav");
		if (func_28() == -1)
		{
			func_347(22, 16);
			func_377(22);
		}
		if (PED::_0x91A5F9CBEBB9D936(Global_1934765->f_2))
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1934765->f_2, false);
			Global_1934765->f_2 = 0;
		}
	}
	else if (func_340(-1056767524))
	{
		if (func_375(536870912) == 0)
		{
			func_376(536870912);
			MAP::_0x1392105DA88BBFFB(-1696121865, -2550f, 400f, 0, 0);
		}
		func_342(-436084091);
		func_342(-1552951782);
		func_342(-1142569437);
		func_342(474113610);
		func_342(-297340751);
		func_342(1802934313);
		func_342(2108112010);
		func_342(1208537422);
		func_342(361734047);
		func_342(446554495);
		func_342(-118700196);
		func_342(-735136865);
		func_342(636278554);
		func_358("pro_empty_nav");
		func_358("pro_fence_broken_nav");
		func_358("pro_burned_nav");
		func_333(1423681694);
		func_333(775893260);
		func_333(-329355129);
		func_333(2117211184);
		func_333(-602816690);
		func_333(1271713904);
		func_333(1031662866);
		func_333(-1041976064);
		func_333(1983816160);
		func_333(1221694281);
		func_333(-868830916);
		func_333(-285245562);
		func_333(-262959893);
		func_333(1049886174);
		func_333(-1042390616);
		func_333(2038589758);
		func_356("pro_fence_fixed_nav");
		if (func_28() == -1)
		{
			func_347(22, 16);
			func_377(22);
		}
		if (PED::_0x91A5F9CBEBB9D936(Global_1934765->f_2))
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1934765->f_2, false);
			Global_1934765->f_2 = 0;
		}
	}
	else if (func_340(-182889087))
	{
		if (func_375(536870912) == 0)
		{
			func_376(536870912);
			MAP::_0x1392105DA88BBFFB(-1696121865, -2550f, 400f, 0, 0);
		}
		func_342(-436084091);
		func_342(-1552951782);
		func_342(-1142569437);
		func_342(474113610);
		func_342(-297340751);
		func_342(1802934313);
		func_342(2108112010);
		func_342(1208537422);
		func_342(361734047);
		func_342(446554495);
		func_342(-1042390616);
		func_358("pro_empty_nav");
		func_358("pro_fence_broken_nav");
		func_358("pro_fence_fixed_nav");
		func_333(1423681694);
		func_333(-602816690);
		func_333(1271713904);
		func_333(1031662866);
		func_333(-1041976064);
		func_333(1983816160);
		func_333(1221694281);
		func_333(-868830916);
		func_333(-285245562);
		func_333(-262959893);
		func_333(1049886174);
		func_333(-118700196);
		func_333(-735136865);
		func_333(636278554);
		func_333(2038589758);
		func_356("pro_burned_nav");
		if (func_28() == -1)
		{
			func_347(22, 16);
			func_377(22);
		}
		if (PED::_0x91A5F9CBEBB9D936(Global_1934765->f_2))
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1934765->f_2, false);
			Global_1934765->f_2 = 0;
		}
	}
	else
	{
		if (func_375(536870912))
		{
			func_378(536870912);
			MAP::_0xE057FEA9A22EB3EE(-1696121865);
		}
		func_342(1423681694);
		func_342(-602816690);
		func_342(1271713904);
		func_342(1031662866);
		func_342(-1041976064);
		func_342(1983816160);
		func_342(1221694281);
		func_342(-436084091);
		func_342(-285245562);
		func_342(-262959893);
		func_342(1049886174);
		func_342(-1042390616);
		func_342(-118700196);
		func_342(-735136865);
		func_342(636278554);
		func_342(2038589758);
		func_342(775893260);
		func_358("pro_fence_broken_nav");
		func_358("pro_fence_fixed_nav");
		func_358("pro_burned_nav");
		func_333(-1552951782);
		func_333(-1142569437);
		func_333(474113610);
		func_333(-297340751);
		func_333(-868830916);
		func_333(1802934313);
		func_333(2108112010);
		func_333(1208537422);
		func_333(361734047);
		func_333(446554495);
		func_356("pro_empty_nav");
		if (func_28() == -1)
		{
			func_351(22, 16);
			func_379(22);
		}
		if (!PED::_0x91A5F9CBEBB9D936(Global_1934765->f_2) && !bParam1)
		{
			if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1888801)[22 /*35*/])->f_3))
			{
				Global_1934765->f_2 = PED::_0x4C39C95AE5DB1329(((*Global_1888801)[22 /*35*/])->f_4, 0, 15);
			}
		}
	}
	if (func_340(2019386373))
	{
		func_342(-217646849);
		func_342(-694809996);
		func_342(-2053475031);
		func_333(-279703229);
		func_333(-623091266);
	}
	else if (func_340(-664252410))
	{
		func_342(-279703229);
		func_342(-2053475031);
		func_333(-217646849);
		func_333(-694809996);
		func_333(-623091266);
	}
	else if (func_340(2109952320))
	{
		func_342(-279703229);
		func_342(-217646849);
		func_342(-623091266);
		func_333(-694809996);
		func_333(-2053475031);
	}
	if (func_340(2024121624))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("GUA_GUARD_CHAINS", false);
	}
	else
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("GUA_GUARD_CHAINS", true);
	}
	if (func_340(-1077783786))
	{
		func_342(-961488528);
		func_333(-1569624057);
	}
	else
	{
		func_342(-1569624057);
		func_333(-961488528);
	}
	if (func_340(-299522880))
	{
		func_333(131323483);
		func_342(-134556459);
	}
	else
	{
		func_342(131323483);
		func_333(-134556459);
	}
	if (func_125(45))
	{
		func_342(1638937672);
		func_342(661576070);
		func_342(795060201);
		func_342(1003623269);
		func_342(-395621323);
		func_342(-924329535);
		func_333(739805687);
		func_333(-243627670);
		func_333(-198004806);
		func_356("nav_wapiti_es");
	}
	else
	{
		func_342(739805687);
		func_342(-243627670);
		func_342(-198004806);
		func_358("nav_wapiti_es");
		func_333(1003623269);
		func_333(-924329535);
		func_333(-395621323);
		if (func_340(-389056691))
		{
			func_342(661576070);
			func_333(1638937672);
			func_333(795060201);
		}
		else
		{
			func_342(795060201);
			func_333(1638937672);
			func_333(661576070);
		}
	}
	if (func_340(-1824738758))
	{
		func_333(1489268640);
	}
	else
	{
		func_342(1489268640);
	}
	func_380();
	if (func_340(1221801385))
	{
		if (!Global_1934765->f_297)
		{
			MAP::_0x1392105DA88BBFFB(-1318786989, 2300f, -330f, 0, 0);
			Global_1934765->f_297 = 1;
		}
	}
	else if (Global_1934765->f_297)
	{
		MAP::_0xE057FEA9A22EB3EE(-1318786989);
		Global_1934765->f_297 = 0;
	}
	if (func_340(-306246697))
	{
		if (!Global_1934765->f_298)
		{
			MAP::_0x1392105DA88BBFFB(-1749581410, 3012.5f, 507.5f, 0, 0);
			Global_1934765->f_298 = 1;
		}
	}
	else if (Global_1934765->f_298)
	{
		MAP::_0xE057FEA9A22EB3EE(-1749581410);
		Global_1934765->f_298 = 0;
	}
	if (func_340(-1847672446))
	{
		if (!Global_1934765->f_299)
		{
			MAP::_0x1392105DA88BBFFB(1467785875, 2700f, -1600f, 0, 0);
			Global_1934765->f_299 = 1;
		}
	}
	else if (Global_1934765->f_299)
	{
		MAP::_0xE057FEA9A22EB3EE(1467785875);
		Global_1934765->f_299 = 0;
	}
	if (!func_340(-789397228))
	{
		func_333(-614421509);
		func_333(604920544);
		func_333(1382135686);
		if (func_340(-2022369555))
		{
			func_333(-1716205818);
			func_342(-276259505);
		}
		else
		{
			func_333(-276259505);
			func_342(-1716205818);
		}
		if (!Global_1934765->f_295 && func_381(5))
		{
			MAP::_0x1392105DA88BBFFB(1807082723, 3290f, -1310f, 0, 0);
			Global_1934765->f_295 = 1;
			MAP::_0xD8C7162AB2E2AF45(1944800674);
		}
	}
	else
	{
		func_342(-614421509);
		func_342(604920544);
		func_342(1382135686);
		func_342(-276259505);
		func_342(-1716205818);
		if (Global_1934765->f_295)
		{
			MAP::_0xE057FEA9A22EB3EE(1807082723);
			Global_1934765->f_295 = 0;
			MAP::_0xDA98246C7A3C2189(1944800674);
		}
	}
	if (func_340(1358491857))
	{
		func_333(1056170594);
		func_333(-873881483);
		func_333(146172383);
		if (func_340(723021499))
		{
			func_333(881979872);
			func_342(1157695860);
		}
		else
		{
			func_333(1157695860);
			func_342(881979872);
		}
		if (!Global_1934765->f_294 && func_381(5))
		{
			MAP::_0x1392105DA88BBFFB(1157868460, 2870f, -1400f, 0, 0);
			Global_1934765->f_294 = 1;
			MAP::_0xD8C7162AB2E2AF45(-296815465);
		}
	}
	else
	{
		func_342(1056170594);
		func_342(-873881483);
		func_342(881979872);
		func_342(1157695860);
		func_342(146172383);
		if (Global_1934765->f_294)
		{
			MAP::_0xE057FEA9A22EB3EE(1157868460);
			Global_1934765->f_294 = 0;
			MAP::_0xDA98246C7A3C2189(-296815465);
		}
	}
	func_382();
	StringCopy(&Var1, "nav_sdn_docks_", 64);
	if (func_340(1358491857))
	{
		StringConCat(&Var1, "korrigan_", 64);
	}
	if (func_340(-1825294305))
	{
		StringConCat(&Var1, "antenor_", 64);
		func_333(-445068262);
		func_333(-1688366042);
		if (TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-2024308038))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-2024308038, false);
		}
	}
	else
	{
		func_342(-445068262);
		func_342(-1688366042);
		if (!TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-2024308038))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-2024308038, true);
		}
	}
	if (func_340(522677506))
	{
		func_333(1048677741);
		func_333(-2035101386);
		func_333(1284188544);
		func_333(1520435387);
		func_333(876228895);
		StringConCat(&Var1, "trains_", 64);
	}
	else
	{
		func_342(1048677741);
		func_342(-2035101386);
		func_342(1284188544);
		func_342(1520435387);
		func_342(876228895);
	}
	if (!func_125(45))
	{
		func_342(-274080837);
		func_342(-1036688493);
		func_342(-1512794226);
		func_342(913995529);
		func_333(481139295);
		func_333(165972019);
		func_333(1679182807);
		func_333(-1986089134);
		StringConCat(&Var1, "pre_es", 64);
	}
	else
	{
		func_342(481139295);
		func_342(165972019);
		func_342(1679182807);
		func_342(-1986089134);
		func_333(-274080837);
		func_333(-1036688493);
		func_333(-1512794226);
		func_333(913995529);
		StringConCat(&Var1, "es", 64);
	}
	func_356(&Var1);
	if (func_340(171499483))
	{
		func_342(-890900091);
		func_333(-1758697759);
	}
	else
	{
		func_342(-1758697759);
		func_333(-890900091);
	}
	if (func_340(235928616))
	{
		func_342(-750963311);
		func_342(1926336063);
		func_342(-800534102);
		func_358("nav_crn1_barn");
		func_333(-886310806);
		func_356("nav_crn1_barn_burnt");
	}
	else
	{
		func_342(-886310806);
		func_358("nav_crn1_barn_burnt");
		func_333(-750963311);
		func_333(1926336063);
		func_333(-800534102);
		func_356("nav_crn1_barn");
	}
	if (func_340(345808947))
	{
		func_343(190);
		func_334(189);
	}
	else
	{
		func_343(189);
		func_334(190);
	}
	if (func_340(1167397384))
	{
		func_342(1736386364);
	}
	else
	{
		func_333(1736386364);
	}
	if (func_340(2024769126))
	{
		func_342(516817794);
	}
	else
	{
		func_333(516817794);
	}
	if (func_340(-154581735))
	{
		func_342(-262371610);
	}
	else
	{
		func_333(-262371610);
	}
	if (func_340(-1530132748))
	{
		func_342(-389510791);
	}
	else
	{
		func_333(-389510791);
	}
	if (func_340(976539083))
	{
		func_342(71064384);
	}
	else
	{
		func_333(71064384);
	}
	func_333(579127040);
	func_333(-2011620387);
	if (func_340(409602249))
	{
		func_333(677191274);
	}
	else
	{
		func_342(677191274);
	}
	if (func_340(651395116))
	{
		func_333(1989203268);
	}
	else
	{
		func_342(1989203268);
	}
	if (func_340(1488286867))
	{
		func_333(516308968);
	}
	else
	{
		func_342(516308968);
	}
	if (func_340(665676602))
	{
		func_333(1308321372);
	}
	else
	{
		func_342(1308321372);
	}
	if (func_340(8924991))
	{
		func_333(-449454773);
	}
	else
	{
		func_342(-449454773);
	}
	if (func_340(932909855))
	{
		func_333(-1754541271);
		func_333(-1363999915);
		func_333(-1116430120);
	}
	else
	{
		func_342(-1754541271);
		func_342(-1363999915);
		func_342(-1116430120);
	}
	if (func_340(2051822093))
	{
		func_333(-163883900);
	}
	else
	{
		func_342(-163883900);
	}
	if (func_340(-1241340344))
	{
		func_333(-1010679388);
	}
	else
	{
		func_342(-1010679388);
	}
	if (func_340(-1558439474))
	{
		func_333(1033367448);
	}
	else
	{
		func_342(1033367448);
	}
	if (func_340(2077022393))
	{
		func_342(391022529);
		func_342(-1560636071);
		func_342(1870870569);
		func_342(-904833761);
		func_342(1713084298);
		func_342(928528900);
		func_333(-2118853492);
		func_333(-597126658);
	}
	else
	{
		func_342(-2118853492);
		func_342(-597126658);
		if (func_340(1583012985))
		{
			func_342(391022529);
			func_342(-1560636071);
			func_333(1713084298);
		}
		else
		{
			func_342(1713084298);
			func_333(391022529);
			func_333(-1560636071);
		}
		if (func_340(479419429))
		{
			func_342(1870870569);
			func_342(-904833761);
			func_333(928528900);
		}
		else
		{
			func_342(928528900);
			func_333(1870870569);
			func_333(-904833761);
		}
	}
	if (func_340(-1556423728))
	{
		func_333(-1023331176);
	}
	else
	{
		func_342(-1023331176);
	}
	if (func_340(-144653976))
	{
		func_333(-1809571159);
	}
	else
	{
		func_342(-1809571159);
	}
	if (func_340(-351362068))
	{
		func_333(-2071756699);
	}
	else
	{
		func_342(-2071756699);
	}
	if (func_340(-939114198))
	{
		func_333(-1625703283);
	}
	else
	{
		func_342(-1625703283);
	}
	if (func_340(-1318987693))
	{
		func_333(-1696865897);
	}
	else
	{
		func_342(-1696865897);
	}
	if (func_340(-545450213))
	{
		func_342(-1950049852);
		func_333(-724913398);
	}
	else
	{
		func_342(-724913398);
		func_333(-1950049852);
	}
	func_358("railroad_stageMP");
	if (func_340(-2101264851))
	{
		func_333(1858796535);
		func_333(945532872);
		func_333(-2043326480);
		func_333(992791293);
		func_333(-1815023148);
		func_333(731209239);
		func_333(1531008020);
		func_333(-952533419);
		func_333(582879672);
		func_333(1750312025);
		func_333(-759698431);
		func_333(59954835);
		func_333(-1461922204);
		func_333(2079207010);
		func_333(-1360840312);
		func_333(-816857367);
	}
	else
	{
		func_342(1858796535);
		func_342(945532872);
		func_342(-2043326480);
		func_342(992791293);
		func_342(-1815023148);
		func_342(731209239);
		func_342(1531008020);
		func_342(-952533419);
		func_342(582879672);
		func_342(1750312025);
		func_342(-759698431);
		func_342(59954835);
		func_342(-1461922204);
		func_342(2079207010);
		func_342(-1360840312);
		func_342(-816857367);
	}
	if (func_340(434558613))
	{
		func_333(-715865581);
		func_342(-1387511711);
		func_342(1901132483);
		func_342(-2082345587);
		TASK::SET_SCENARIO_GROUP_ENABLED("TAN_BIRDS", true);
		func_358("rmllr_cabin_normal");
		func_356("rmllr_cabin_burnt");
	}
	else
	{
		func_333(-1387511711);
		func_333(1901132483);
		func_342(-2082345587);
		func_342(-715865581);
		TASK::SET_SCENARIO_GROUP_ENABLED("TAN_BIRDS", false);
		func_358("rmllr_cabin_burnt");
		func_356("rmllr_cabin_normal");
	}
	if (func_340(1186594126))
	{
		func_333(-1382351182);
	}
	else
	{
		func_342(-1382351182);
	}
	if (func_340(469053995))
	{
		func_333(1263244828);
	}
	else
	{
		func_342(1263244828);
	}
	if (func_340(476714362))
	{
		func_333(-1773409329);
	}
	else
	{
		func_342(-1773409329);
	}
	if (func_340(1947931439))
	{
		func_333(1628286919);
		func_342(1082980257);
		func_342(-1725465949);
	}
	else
	{
		func_333(1082980257);
		func_333(-1725465949);
		func_342(1628286919);
	}
	if (func_340(-879507474))
	{
		func_342(1928252407);
		func_333(-98843293);
	}
	else
	{
		func_342(-98843293);
		func_333(1928252407);
	}
	if (func_340(1050128548))
	{
		func_333(-1453850836);
	}
	else
	{
		func_342(-1453850836);
	}
	if (func_340(868326136))
	{
		func_333(2006850489);
	}
	else
	{
		func_342(2006850489);
	}
	if (func_340(-515561750))
	{
		func_342(-892659042);
		func_342(30201771);
		func_333(517553365);
		func_356("mud4_saloon_fight");
	}
	else if (func_340(26245360))
	{
		func_358("mud4_saloon_fight");
		func_342(30201771);
		func_333(-2083943324);
		func_333(517553365);
		func_356("mud4_saloon_fight_start");
	}
	else
	{
		func_358("mud4_saloon_fight_start");
		func_358("mud4_saloon_fight");
		func_342(517553365);
		func_342(-2083943324);
		func_333(30201771);
	}
	if (func_340(-1060078174))
	{
		if (func_125(45))
		{
			func_342(882236853);
			func_358("MS_MARY1_CAMP");
			func_333(-833696851);
			func_356("MS_CHELONIAN_CAMP");
		}
		else
		{
			func_342(-833696851);
			func_358("MS_CHELONIAN_CAMP");
			func_333(882236853);
			func_356("MS_MARY1_CAMP");
		}
		func_383(&(Global_1934765->f_17), 928.2264f, 1345.357f, 194.5221f, 4.5f);
		func_383(&(Global_1934765->f_18), 922.5641f, 1346.623f, 194.7151f, 3f);
		func_383(&(Global_1934765->f_19), 920.8331f, 1340.152f, 194.182f, 3.5f);
	}
	else
	{
		func_342(882236853);
		func_342(-833696851);
		func_384(&(Global_1934765->f_17), 1);
		func_384(&(Global_1934765->f_18), 1);
		func_384(&(Global_1934765->f_19), 1);
	}
	if (func_340(817925178))
	{
		func_333(-1417469821);
	}
	else
	{
		func_342(-1417469821);
	}
	if (func_340(-785605431))
	{
	}
	else
	{
		func_342(146172383);
	}
	if (func_340(1557082963))
	{
		func_342(-879315604);
		func_342(765343099);
		func_333(-909306169);
	}
	else if (func_340(-350863510))
	{
		func_342(-879315604);
		func_342(-909306169);
		func_333(765343099);
	}
	else
	{
		func_342(765343099);
		func_342(-909306169);
		func_333(-879315604);
	}
	if (func_340(-1952856164))
	{
		func_342(-890900091);
		func_342(-1758697759);
		func_333(591001924);
	}
	else if (func_340(249726958))
	{
		func_342(-890900091);
		func_342(591001924);
		func_333(-1758697759);
	}
	else
	{
		func_342(-1758697759);
		func_342(591001924);
		func_333(-890900091);
	}
	if (func_340(-99303535))
	{
		func_342(-2092712551);
		func_333(-1307469679);
	}
	else if (func_340(1433244935))
	{
		func_342(-1307469679);
		func_333(-2092712551);
	}
	else
	{
		func_342(-2092712551);
		func_342(-1307469679);
	}
	func_385(1512816328, 1590446437);
	func_385(1207048789, -1789074439);
	func_385(-1230112817, 499096137);
	func_385(-1278074582, 1466088082);
	func_385(-1436021162, -1852056457);
	func_385(407136781, 556704039);
	if (func_340(-978957786))
	{
		func_333(1111220101);
		func_333(1372565859);
		func_333(1644962309);
		if (!Global_1934765->f_296 && func_381(127))
		{
			MAP::_0x1392105DA88BBFFB(-361257171, -1350f, -2300f, 0, 0);
			Global_1934765->f_296 = 1;
		}
	}
	else
	{
		func_342(1111220101);
		func_342(1372565859);
		func_342(1644962309);
		if (Global_1934765->f_296)
		{
			MAP::_0xE057FEA9A22EB3EE(-361257171);
			Global_1934765->f_296 = 0;
		}
	}
	if (func_340(559573222))
	{
		func_342(1137646647);
		func_333(-898081380);
	}
	else
	{
		func_342(-898081380);
		func_333(1137646647);
	}
	if (func_340(-1818850842))
	{
		func_342(1584946069);
	}
	else
	{
		func_333(1584946069);
	}
	if (func_340(-792853067))
	{
		func_342(-1828030290);
		func_333(827269092);
	}
	else
	{
		func_333(-1828030290);
		func_342(827269092);
	}
	if (func_340(1151197909))
	{
		func_334(165);
	}
	else
	{
		func_343(165);
	}
	if (func_340(-828139293))
	{
		func_342(1364392658);
		func_333(-794503195);
		func_356("nts3_no_bridge");
		if (!Global_1934765->f_293)
		{
			MAP::_0x1392105DA88BBFFB(742204852, 512f, 1756f, 0, 0);
			Global_1934765->f_293 = 1;
		}
	}
	else
	{
		func_342(-794503195);
		func_333(1364392658);
		func_358("nts3_no_bridge");
		if (Global_1934765->f_293)
		{
			MAP::_0xE057FEA9A22EB3EE(742204852);
			Global_1934765->f_293 = 0;
		}
	}
	if (func_340(-464836488))
	{
		func_342(-1192199739);
		func_333(-65072454);
	}
	else
	{
		func_342(-65072454);
		func_333(-1192199739);
	}
	if (func_340(-233743613))
	{
		func_333(1692451176);
	}
	else
	{
		func_342(1692451176);
	}
	if (func_340(1203043430))
	{
		func_333(-102951407);
	}
	else
	{
		func_342(-102951407);
	}
	if (func_340(299694527))
	{
		func_333(1833824812);
	}
	else
	{
		func_342(1833824812);
	}
	if (func_259() == 2)
	{
		if (func_340(-1949204933))
		{
			func_342(1734859244);
			func_333(719147410);
		}
		else
		{
			func_333(1734859244);
			func_342(719147410);
		}
	}
	if (!func_369(4))
	{
		if (func_259() == 1 && func_386() == 1)
		{
			if (func_340(442317566))
			{
				func_342(1948051928);
				func_333(1453569688);
			}
			else
			{
				func_333(1948051928);
				func_342(1453569688);
			}
		}
		else
		{
			func_342(1453569688);
			func_342(1948051928);
		}
	}
	if (func_340(-736853952))
	{
		func_333(-1123141803);
		func_374(-1123141803);
		PATHFIND::_0x4BDEBEA5702B97A9(-1363.724f, -839.4881f, 65.44287f, 20f, 0, 1);
	}
	else
	{
		func_342(-1123141803);
		func_373(-1123141803);
		PATHFIND::_0x4BDEBEA5702B97A9(-1363.724f, -839.4881f, 65.44287f, 20f, 1, 1);
	}
	if (func_340(1478132521))
	{
		func_342(1759143160);
		func_333(398639187);
		func_358("reservation_abandoned");
		func_356("nav_sean1_camp");
	}
	else
	{
		func_342(398639187);
		func_333(1759143160);
	}
	if (func_340(-360036154))
	{
		func_342(1136457806);
		func_333(1255880931);
	}
	else
	{
		func_333(1136457806);
		func_342(1255880931);
	}
	if (func_340(2024383613))
	{
		func_342(-753844687);
		func_333(-1045062790);
		func_356("ntv1_cohutta");
	}
	else
	{
		func_333(-753844687);
		func_342(-1045062790);
		func_358("ntv1_cohutta");
	}
	if (func_340(-622554983))
	{
		func_333(746475990);
		func_356("ntv1_armycamp");
		if (!Global_1934765->f_287)
		{
			func_387(798.2925f, 1509.681f, 203.7047f, 21f, "native1_camp", 1, 0, 0, 0, -1082130432);
			Global_1934765->f_287 = 1;
		}
	}
	else
	{
		func_342(746475990);
		func_358("ntv1_armycamp");
		if (Global_1934765->f_287)
		{
			func_388(798.2925f, 1509.681f, 203.7047f, 0);
			Global_1934765->f_287 = 0;
		}
	}
	if (func_340(1954026328))
	{
		func_333(-1835067413);
		func_342(-1392150519);
		func_334(226);
	}
	else
	{
		func_333(-1392150519);
		func_342(-1835067413);
		func_343(226);
	}
	if (func_340(-330120947))
	{
		func_333(1953646620);
	}
	else
	{
		func_342(1953646620);
	}
	if (func_340(-1764522338))
	{
		func_342(1578454569);
		func_333(-276524767);
	}
	else
	{
		func_333(1578454569);
		func_342(-276524767);
	}
	if (func_340(-76237062))
	{
		func_333(-1085363933);
		func_333(-537740003);
		func_356("trn1_nav_ann_shootout_00");
	}
	else
	{
		func_342(-1085363933);
		func_342(-537740003);
		func_358("trn1_nav_ann_shootout_00");
	}
	if (func_340(-333135263))
	{
		func_333(728046625);
	}
	else
	{
		func_342(728046625);
	}
	if (func_340(885203519))
	{
		func_334(228);
	}
	else
	{
		func_343(228);
	}
	if (func_340(-1080627546))
	{
		func_334(227);
	}
	else
	{
		func_343(227);
	}
	if (func_340(1522511407))
	{
		func_333(-929277449);
		func_333(-723094901);
		func_333(-801609437);
	}
	else
	{
		func_342(-929277449);
		func_342(-723094901);
		func_342(-801609437);
	}
	if (func_340(1446719356))
	{
		func_333(-502582154);
	}
	else
	{
		func_342(-502582154);
	}
	if (func_340(171107021))
	{
		func_333(1624069429);
	}
	else
	{
		func_342(1624069429);
	}
	return 1;
}

void func_119()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 13)
	{
		if (Global_1572887->f_12 == -1)
		{
			Global_1934765->f_39[iVar0] = &Global_40.f_283[iVar0];
		}
		else
		{
			Global_1934765->f_39[iVar0] = &Global_1058888->f_40567[iVar0];
		}
		iVar0++;
	}
}

int func_120(int iParam0, bool bParam1)
{
	switch (func_389(iParam0))
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

int func_121()
{
	return 0;
}

int func_122()
{
	if (func_32(43) && !func_32(44))
	{
		return 0;
	}
	if (func_32(67) && func_259() != 8)
	{
		return 0;
	}
	return 1;
}

int func_123()
{
	if (func_28() != -1)
	{
		return 0;
	}
	if (!func_35())
	{
		return 0;
	}
	if (!func_120(((*Global_1835011)[1 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_120(((*Global_1835011)[2 /*74*/])->f_1, 1) && func_120(((*Global_1347702)[120 /*49*/])->f_15, 1)) && !func_120(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_120(((*Global_1835011)[37 /*74*/])->f_1, 1) && !func_120(((*Global_1835011)[39 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_120(((*Global_1835011)[57 /*74*/])->f_1, 1) && !func_120(((*Global_1835011)[60 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_120(((*Global_1835011)[26 /*74*/])->f_1, 1) && !func_120(((*Global_1347702)[67 /*49*/])->f_15, 1))
	{
		return 1;
	}
	if ((func_120(((*Global_1835011)[62 /*74*/])->f_1, 1) && func_120(((*Global_1835011)[63 /*74*/])->f_1, 1)) && !func_120(((*Global_1835011)[64 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_120(((*Global_1835011)[75 /*74*/])->f_1, 1) && !func_120(((*Global_1347702)[1 /*49*/])->f_15, 1))
	{
		return 1;
	}
	if (func_120(((*Global_1835011)[76 /*74*/])->f_1, 1) && !func_120(((*Global_1835011)[77 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_120(((*Global_1835011)[40 /*74*/])->f_1, 1) && func_120(((*Global_1835011)[41 /*74*/])->f_1, 1)) && !func_120(((*Global_1835011)[44 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_120(((*Global_1835011)[62 /*74*/])->f_1, 1) && func_120(((*Global_1835011)[63 /*74*/])->f_1, 1)) && !func_120(((*Global_1835011)[64 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_120(((*Global_1835011)[65 /*74*/])->f_1, 1) && func_120(((*Global_1835011)[66 /*74*/])->f_1, 1)) && !func_120(((*Global_1835011)[67 /*74*/])->f_1, 1))
	{
		return 1;
	}
	return 0;
}

int func_124(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<4> Var4;
	bool bVar18;

	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = func_390(uParam1, 128);
	if (func_391("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_392(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_39(Var4.f_4))
			{
			}
			else if (!WEAPON::_0x705BE297EEBDB95D(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if (!bVar18 || WEAPON::_0xF29A186ED428B552(Global_35, Var4.f_4))
			{
				if (((WEAPON::_0xD955FEE4B87AFA07(Var4.f_4) && (!WEAPON::_0xC75386174ECE95D5(Var4.f_4) || func_390(uParam1, 32))) && (!WEAPON::_0xDDC64F5E31EEDAB6(Var4.f_4) || !func_390(uParam1, 8192))) && (!WEAPON::_0xC212F1D05A8232BB(Var4.f_4) || !func_390(uParam1, 16384)))
				{
					if (iVar0 == 0 || WEAPON::_0xA2091482ED42EF85(Global_35, &Var4) > WEAPON::_0xA2091482ED42EF85(Global_35, uParam0))
					{
						iVar0 = Var4.f_4;
						*uParam0 = { Var4 };
					}
				}
			}
			iVar3++;
		}
		func_393(iVar1);
	}
	if (func_39(iVar0))
	{
	}
	return iVar0;
}

int func_125(int iParam0)
{
	if (!func_191(iParam0))
	{
		return 0;
	}
	return func_394(iParam0);
}

bool func_126(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_127(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return 439606975;
		case 6:
			return 1661121390;
		case 7:
			return 1164374808;
		case 8:
			return 1160643979;
		case 9:
			return 624063935;
		case 10:
			return -1476781101;
		case 11:
			return 294553332;
		case 12:
			return 1788874135;
		case 15:
			return 1560492757;
		case 16:
			return -769081407;
		case 17:
			return 1902428294;
		case 18:
			return -2114499732;
		case 19:
			return 800827126;
		case 20:
			return 688004210;
		case 0:
			return 166243423;
		case 1:
			return 1383300684;
		case 2:
			return 2051441678;
		case 3:
			return 162509669;
		case 4:
			return 635948769;
		case 5:
			return 274995506;
		case 24:
			return -1826731591;
		case 25:
			return 2119049229;
		case 26:
			return 1352942778;
		case 27:
			return 1964379549;
		case 28:
			return 1201189539;
		case 21:
			return 1351927599;
		case 22:
			return 2032023096;
		case 23:
			return -291256376;
		case 66:
			return -1243402388;
		case 67:
			return 65931886;
		case 68:
			return 1371678229;
		case 69:
			return 2102263084;
		case 61:
			return -272211555;
		case 64:
			return -55563408;
		case 71:
			return -1914506115;
		case 75:
			return 802495462;
		case 77:
			return 842905332;
		case 78:
			return -1951220140;
		case 79:
			return 1511551084;
		case 81:
			return -1725704631;
		case 83:
			return 1257427489;
		case 85:
			return -659341240;
		case 87:
			return 2038771525;
		case 89:
			return -535599244;
		case 73:
			return -389591806;
		case 70:
			return -1205612021;
		case 93:
			return 890706995;
		case 90:
			return 1156438275;
		case 91:
			return -1611873049;
		case 92:
			return 594312243;
		case 94:
			return -978578725;
		case 13:
			return 1784889667;
		case 62:
			return -361635024;
		case 76:
			return 1460520700;
		case 80:
			return 523337834;
		case 82:
			return -19271249;
		case 84:
			return 214175524;
		case 86:
			return -1303643297;
		case 88:
			return 411856831;
		case 72:
			return -926815459;
		case 74:
			return -1300731953;
		case 65:
			return -409616653;
		case 29:
			return 509954990;
		case 30:
			return -445916744;
		case 31:
			return -866249154;
		case 32:
			return -2077063704;
		case 33:
			return 205207539;
		case 34:
			return -1033657275;
		case 35:
			return 1806002837;
		case 36:
			return 705324896;
		case 37:
			return -1541763703;
		case 38:
			return 387052410;
		case 39:
			return -361288914;
		case 40:
			return -911054515;
		case 41:
			return 1084200963;
		case 42:
			return 1847948074;
		case 43:
			return -1212526764;
		case 44:
			return 1851440270;
		case 45:
			return -2028985700;
		case 46:
			return 1074435214;
		case 47:
			return -883015675;
		case 48:
			return -1047155604;
		case 49:
			return 1123231221;
		case 50:
			return 1866989210;
		case 51:
			return 478183719;
		case 52:
			return -1698955868;
		case 53:
			return -2029378634;
		case 54:
			return 1339864416;
		case 55:
			return 890998115;
		case 56:
			return -1376288999;
		case 57:
			return -1041123771;
		case 58:
			return 1389254668;
		case 59:
			return -346112633;
		case 60:
			return 773309172;
		default:
			break;
	}
	return 0;
}

int func_128(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_395();
	}
	if (func_28() == -1)
	{
		return (Global_26795.f_26[iParam0 /*120*/])->f_1;
	}
	return (Global_36637.f_45.f_350.f_26[iParam0 /*120*/])->f_1;
}

bool func_129(int iParam0, int iParam1)
{
	if (!func_396(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0 /*3*/] && iParam1) != 0;
}

bool func_130(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = func_397(iParam1);
	func_398(&(Global_1946804->f_964), uVar0, iParam0, -897569541, 1, iParam1);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1946804->f_964));
	return DATAFILE::_0xED4413CEE1BF142C(&(Global_1946804->f_964));
}

void func_131(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_396(iParam0))
	{
		return;
	}
	iVar0 = (Global_40.f_7157[iParam0 /*3*/] && iParam1);
	Global_40.f_7157[iParam0 /*3*/] = (&Global_40.f_7157[iParam0 /*3*/] - iVar0);
}

void func_132(int iParam0, int iParam1)
{
	if (!func_396(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0 /*3*/] = (Global_40.f_7157[iParam0 /*3*/] || iParam1);
}

void func_133(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

void func_134()
{
	char* sVar0;

	if (PED::IS_PED_RAGDOLL(Global_35))
	{
		return;
	}
	if (CAM::_0xA24C1D341C6E0D53(1, 1, 1))
	{
		return;
	}
	if (!func_399(1))
	{
		return;
	}
	sVar0 = "outfit_change_unarmed";
	switch (Global_1946804->f_859)
	{
		case 1:
			sVar0 = "outfit_change_longarms";
			break;
		case 0:
			sVar0 = "outfit_change_offhand";
			break;
		case 2:
			sVar0 = "outfit_change_unarmed";
			break;
	}
	TASK::TASK_PLAY_ANIM(Global_35, func_400(), sVar0, 1090519040, -1056964608, -1, 67108880, 0, 0, 0, 0, "Satchel_and_ik_hand_helpers_filter", 0);
	func_401(1);
	STREAMING::REMOVE_ANIM_DICT(func_400());
}

int func_135(int iParam0)
{
	return 0;
}

int func_136(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 1;
		case 2:
			return 1;
		case 3:
			return 1;
		case 4:
			return 1;
		case 5:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_137(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	bVar0 = false;
	iVar1 = 0;
	iVar2 = iParam0;
	iVar3 = -1;
	iVar4 = func_402(iParam0);
	if (iVar4 >= 0 && iVar4 <= 5)
	{
		iVar3 = iVar4;
	}
	if (func_28() != -1)
	{
		return;
	}
	func_403();
	if (bParam5)
	{
		if (!func_404(&(Global_1946804->f_1378), &bVar0, iVar2, iVar3, 1, 0))
		{
			return;
		}
	}
	if (func_399(32768) && &Global_1946804->f_1378.f_1[10 /*3*/] != &Global_1946804->f_57[10 /*11*/])
	{
		func_405();
	}
	func_406(iVar3, 1, 1, 1, 1, 1);
	func_407(31, 0, 0, 0, 0);
	func_408(0);
	if (!bParam3)
	{
		return;
	}
	if (bVar0)
	{
		iVar1 = 8;
	}
	if (!bParam4)
	{
		if (PED::IS_PED_A_PLAYER(iParam1))
		{
			func_407(2, iVar1, 2, 0, 0);
		}
		else
		{
			func_407(2, iVar1, 3, iParam1, 0);
		}
	}
	else
	{
		func_409(&(Global_1946804->f_1497), iParam1, 1, -1, 1, 1, 1);
	}
}

void func_138(int iParam0)
{
	PED::_0xE3144B932DFDFF65(iParam0, 0f, -1, 1, 1);
	PED::CLEAR_PED_ENV_DIRT(iParam0);
	PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 10, "ALL");
	PED::CLEAR_PED_BLOOD_DAMAGE(Global_35);
}

void func_139()
{
	if (func_28() != -1)
	{
		return;
	}
	INVENTORY::_0xE36D4A38D28D9CFB(0);
	INVENTORY::_0x5D6182F3BCE1333B(1, -142743235);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	func_410(1, 1);
}

int func_140()
{
	if (!func_412(-1898635967, func_411(), 1))
	{
		return 0;
	}
	if (func_413())
	{
		if (!func_412(146323340, func_411(), 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_141(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_38(iVar1, 0))
		{
			func_414(iVar1, 0, bParam0);
		}
		Global_1946804->f_2657[iVar0] = 0;
		iVar0 = (iVar0 + -1);
	}
	Global_1946804->f_2657.f_20 = 0;
	Global_1946804->f_2657.f_21 = 0;
	Global_1946804->f_2657.f_22 = 0;
	Global_1946804->f_2657.f_23 = 0;
	Global_1946804->f_2657.f_24 = 0;
	Global_1946804->f_2657.f_25 = 0;
	Global_1946804->f_2657.f_19 = 0;
	Global_1946804->f_2657.f_26.f_6 = 0;
}

void func_142(int iParam0)
{
	Global_26795.f_774 = (Global_26795.f_774 - (Global_26795.f_774 && iParam0));
}

void func_143(int iParam0)
{
	Global_1946804->f_1 = iParam0;
}

int func_144()
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;

	func_415(Global_1949604);
	func_416();
	iVar2 = 0;
	if (func_417(1))
	{
		Global_1946804->f_1 = Global_26795.f_775;
		func_141(0);
		if (((Global_1946804->f_1 == -2125499975 || Global_1946804->f_1 == -449205311) && func_120(((*Global_1835011)[4 /*74*/])->f_1, 1)) && !func_417(16))
		{
			func_418(967523420);
			func_419();
			func_420(16);
		}
		func_421();
		switch (Global_1946804->f_1)
		{
			case -2125499975:
			case -449205311:
				Global_40.f_39 = joaat("player_zero");
				Global_1935630->f_2 = Global_40.f_39;
				break;
			case 1160113249:
				Global_1935630->f_2 = 11966224;
				if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || ENTITY::GET_ENTITY_MODEL(Global_35) != 11966224)
				{
					Global_40.f_39 = 0;
				}
				break;
		}
	}
	else
	{
		func_141(1);
		iVar0 = 0;
		while (iVar0 < 5)
		{
			Global_26795.f_26[iVar0 /*120*/] = 0;
			(Global_26795.f_26[iVar0 /*120*/])->f_1 = 0;
			iVar1 = 0;
			while (iVar1 < 39)
			{
				vVar3.x = &Global_1946804->f_57[iVar1 /*11*/];
				*((Global_26795.f_26[iVar0 /*120*/])->f_1.f_1[iVar1 /*3*/]) = { vVar3 };
				iVar1++;
			}
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < 39)
		{
			vVar3.x = &Global_1946804->f_57[iVar1 /*11*/];
			*(Global_1946804->f_1497.f_1[iVar1 /*3*/]) = { vVar3 };
			*(Global_1946804->f_1378.f_1[iVar1 /*3*/]) = { vVar3 };
			iVar1++;
		}
		if ((((Global_1946804->f_1 == 0 || Global_1946804->f_1 == -2125499975) || Global_1946804->f_1 == -449205311) || Global_1946804->f_1 == 2026485318) || Global_1946804->f_1 == 24043185)
		{
			func_143(-2125499975);
			func_422(&(Global_1946804->f_1378), 2020890174, &iVar2, 0, 0, 0, 0);
			func_423(-2124052603);
			func_422(&(Global_1946804->f_1378), 1661121390, &iVar2, 0, 1, 0, 0);
			Global_26795.f_776 = 0;
			func_406(-1, 0, 1, 1, 1, 0);
			func_424(-1, 0, 0, 6);
			func_425(1420417918, 3, 3, 3, 0);
			func_426(0, 5, 0);
			Global_40.f_39 = joaat("player_zero");
			Global_1935630->f_2 = Global_40.f_39;
			Global_26795.f_775 = Global_1946804->f_1;
		}
		else if (Global_1946804->f_1 == 1160113249)
		{
			func_143(Global_1946804->f_1);
			switch (Global_1946804->f_1)
			{
				case 1160113249:
					Global_1935630->f_2 = 11966224;
					Global_40.f_39 = 0;
					break;
			}
		}
		func_420(1);
		func_427(7);
	}
	Global_1347698 = 0;
	Global_1347698->f_1 = 0;
	Global_1347698->f_2 = 0;
	return 1;
}

int func_145()
{
	return Global_1946804->f_1;
}

void func_146()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 95)
	{
		if (func_428(iVar0))
		{
			Global_40.f_7157[iVar0 /*3*/] = 1;
		}
		iVar0++;
	}
}

void func_147(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 11:
			func_429(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			break;
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			func_430(1);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_430(2);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_430(3);
			break;
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
		case 22:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			break;
		case 31:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 32:
			break;
		case 33:
			func_431(1);
			break;
		case 34:
			func_432(1);
			break;
		case 35:
			func_433(1);
			break;
		case 36:
			break;
		case 37:
			func_434(0);
			break;
		case 38:
			func_435(0);
			break;
		case 39:
			func_436(0);
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 43:
			break;
		case 1:
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 2:
			if ((!&Global_1879534 && func_35()) && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_437("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 2);
			func_438(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_35()) && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_437("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 3);
			func_438(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_35()) && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_437("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 4, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 4);
			func_438(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_35()) && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_437("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 4, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 5, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 5);
			func_438(589, 0);
			break;
		case 24:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-200143754, true);
			UNLOCK::_UNLOCK_SET_VISIBLE(-200143754, true);
			WEAPON::_0x83B8D50EB9446BBA(PLAYER::PLAYER_PED_ID(), 1);
			if (func_28() == -1)
			{
				if (!func_439(99217379) || func_440(99217379) == 2110595215)
				{
					if (func_372())
					{
						iVar0 = -1515874150; /* GXTEntry: "John\'s Off-Hand Holster" */
					}
					else
					{
						iVar0 = 899611344; /* GXTEntry: "Off-Hand Holster" */
					}
					if (!func_162(iVar0, 1, 0))
					{
						func_441(iVar0, 1, 752097756);
					}
					func_442(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_28() == -1)
			{
				if (!func_162(1013902307, 1, 0))
				{
					func_441(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_28() == -1)
			{
				if (!func_162(1013902307, 1, 0))
				{
					func_441(1013902307, 1, 752097756);
				}
				if (!func_162(142640135, 1, 0))
				{
					func_441(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_28() == -1)
			{
				if (!func_162(786809402, 1, 0))
				{
					func_441(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_28() == -1)
			{
				if (!func_162(786809402, 1, 0))
				{
					func_441(786809402, 1, 752097756);
				}
				if (!func_162(-518019409, 1, 0))
				{
					func_441(-518019409, 1, 752097756);
				}
			}
			break;
		case 23:
			PLAYER::_0x5B9813ECF7633FE8(0);
			break;
		case 25:
			break;
		case 26:
			break;
		case 27:
			break;
		case 28:
			break;
		case 29:
			break;
		case 30:
			break;
		case 44:
			break;
		case 45:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-843169622, true);
			Global_1935630->f_47 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 46:
			func_443();
			break;
		case 47:
			PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 52:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-78935213, true);
			break;
		case 53:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-384786155, true);
			break;
		case 54:
			UNLOCK::_UNLOCK_SET_UNLOCKED(296662302, true);
			break;
		case 55:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-1871453000, true);
			break;
		case 56:
			UNLOCK::_UNLOCK_SET_UNLOCKED(1397349651, true);
			break;
	}
}

void func_148(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 11:
			func_429(0);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			break;
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 2);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 2);
			func_444(1);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 2);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 2);
			func_444(2);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 2);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 2);
			func_444(3);
			break;
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 2);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 2);
			break;
		case 22:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 2);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 2);
			break;
		case 31:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 32:
			break;
		case 33:
			func_431(0);
			break;
		case 34:
			func_432(0);
			break;
		case 35:
			func_433(0);
			break;
		case 36:
			break;
		case 37:
			func_434(1);
			break;
		case 38:
			func_435(1);
			break;
		case 39:
			func_436(1);
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 43:
			break;
		case 1:
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 1);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 1);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 3, 1);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 4, 1);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 5, 1);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 0);
			break;
		case 2:
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 1);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 3, 1);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 4, 1);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 5, 1);
			if (PLAYER::_0xCCE7C695C164C35F(PLAYER::GET_PLAYER_INDEX()) > 1)
			{
				PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 1);
			}
			break;
		case 3:
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 3, 1);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 4, 1);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 5, 1);
			if (PLAYER::_0xCCE7C695C164C35F(PLAYER::GET_PLAYER_INDEX()) > 2)
			{
				PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 2);
			}
			break;
		case 4:
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 4, 1);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 5, 1);
			if (PLAYER::_0xCCE7C695C164C35F(PLAYER::GET_PLAYER_INDEX()) > 3)
			{
				PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 3);
			}
			break;
		case 5:
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 5, 1);
			if (PLAYER::_0xCCE7C695C164C35F(PLAYER::GET_PLAYER_INDEX()) > 4)
			{
				PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 4);
			}
			break;
		case 24:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-200143754, false);
			UNLOCK::_UNLOCK_SET_VISIBLE(-200143754, true);
			WEAPON::_0x83B8D50EB9446BBA(PLAYER::PLAYER_PED_ID(), 0);
			break;
		case 48:
			PLAYER::_0xC900A465364A85D6(PLAYER::PLAYER_ID());
			break;
		case 50:
			PLAYER::_0xC900A465364A85D6(PLAYER::PLAYER_ID());
			break;
		case 49:
			PLAYER::_0xC900A465364A85D6(PLAYER::PLAYER_ID());
			break;
		case 51:
			PLAYER::_0xC900A465364A85D6(PLAYER::PLAYER_ID());
			break;
		case 23:
			PLAYER::_0x5B9813ECF7633FE8(1);
			break;
		case 25:
			break;
		case 26:
			break;
		case 27:
			break;
		case 28:
			break;
		case 29:
			break;
		case 30:
			break;
		case 44:
			break;
		case 45:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-843169622, false);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", false, true);
			break;
		case 46:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-1526891582, false);
			break;
		case 47:
			PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::GET_PLAYER_INDEX(), 0);
			break;
		case 52:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-78935213, false);
			break;
		case 53:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-384786155, false);
			break;
		case 54:
			UNLOCK::_UNLOCK_SET_UNLOCKED(296662302, false);
			break;
		case 55:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-1871453000, false);
			break;
		case 56:
			UNLOCK::_UNLOCK_SET_UNLOCKED(1397349651, false);
			break;
	}
}

void func_149()
{
}

int func_150(int iParam0)
{
	func_445(6, 0, 0, 513, iParam0);
	func_445(62, 0, 0, 513, iParam0);
	func_445(7, 0, 4, 513, iParam0);
	func_445(8, 0, 4, 513, iParam0);
	func_445(9, 0, 8, 513, iParam0);
	func_445(10, 0, 8, 513, iParam0);
	func_445(12, 0, 0, 1, 0);
	func_445(11, 0, 0, 17, iParam0);
	func_445(14, 0, 0, 1, 0);
	func_445(13, 0, 0, 1, 0);
	func_445(61, 0, 0, 1, 0);
	func_445(63, 0, 0, 1, 0);
	func_445(70, 0, 4, 513, iParam0);
	func_445(94, 0, 0, 1, 0);
	func_445(15, 0, 0, 545, iParam0);
	func_445(16, 0, 0, 521, iParam0);
	func_445(17, 0, 0, 521, iParam0);
	func_445(18, 0, 0, 1, 0);
	func_445(19, 0, 0, 1, 0);
	func_445(20, 0, 0, 1, 0);
	func_445(0, 0, 0, 513, iParam0);
	func_445(1, 0, 0, 513, iParam0);
	func_445(2, 0, 0, 513, iParam0);
	func_445(3, 0, 0, 513, iParam0);
	func_445(4, 0, 0, 513, iParam0);
	func_445(5, 0, 0, 513, iParam0);
	func_445(24, 0, 0, 513, iParam0);
	func_445(25, 0, 0, 513, iParam0);
	func_445(26, 0, 0, 513, iParam0);
	func_445(27, 0, 0, 513, iParam0);
	func_445(28, 0, 0, 513, iParam0);
	func_445(21, 0, 0, 513, iParam0);
	func_445(22, 0, 0, 513, iParam0);
	func_445(29, 0, 0, 513, iParam0);
	func_445(30, 0, 0, 513, iParam0);
	func_445(31, 0, 0, 513, iParam0);
	func_445(32, 0, 0, 513, iParam0);
	func_445(33, 0, 0, 513, iParam0);
	func_445(34, 0, 0, 513, iParam0);
	func_445(35, 0, 0, 513, iParam0);
	func_445(36, 0, 0, 513, iParam0);
	func_445(37, 0, 0, 513, iParam0);
	func_445(38, 0, 0, 513, iParam0);
	func_445(39, 0, 0, 513, iParam0);
	func_445(40, 0, 0, 513, iParam0);
	func_445(41, 0, 0, 513, iParam0);
	func_445(42, 0, 0, 513, iParam0);
	func_445(43, 0, 0, 513, iParam0);
	func_445(44, 0, 0, 513, iParam0);
	func_445(45, 0, 0, 513, iParam0);
	func_445(46, 0, 0, 513, iParam0);
	func_445(47, 0, 0, 513, iParam0);
	func_445(48, 0, 0, 513, iParam0);
	func_445(49, 0, 0, 513, iParam0);
	func_445(50, 0, 0, 513, iParam0);
	func_445(51, 0, 0, 513, iParam0);
	func_445(52, 0, 0, 513, iParam0);
	func_445(53, 0, 0, 513, iParam0);
	func_445(54, 0, 0, 513, iParam0);
	func_445(55, 0, 0, 513, iParam0);
	func_445(56, 0, 0, 513, iParam0);
	func_445(57, 0, 0, 513, iParam0);
	func_445(58, 0, 0, 513, iParam0);
	func_445(59, 0, 0, 513, iParam0);
	func_445(60, 0, 0, 513, iParam0);
	func_445(23, 0, 0, 1, 0);
	func_445(67, 0, 0, 1, 0);
	func_445(68, 0, 0, 1, 0);
	func_445(69, 0, 0, 1, 0);
	func_445(75, 0, 0, 1, 0);
	func_445(79, 0, 0, 1, 0);
	func_445(83, 0, 0, 1, 0);
	func_445(87, 0, 0, 1, 0);
	func_445(71, 0, 0, 1, 0);
	func_445(73, 0, 0, 1, 0);
	func_445(77, 0, 0, 1, 0);
	func_445(78, 0, 0, 1, 0);
	func_445(81, 0, 0, 1, 0);
	func_445(85, 0, 0, 1, 0);
	func_445(89, 0, 0, 1, 0);
	func_445(76, 0, 0, 1, 0);
	func_445(80, 0, 0, 1, 0);
	func_445(82, 0, 0, 1, 0);
	func_445(84, 0, 0, 1, 0);
	func_445(86, 0, 0, 1, 0);
	func_445(88, 0, 0, 1, 0);
	func_445(72, 0, 0, 1, 0);
	func_445(74, 0, 0, 1, 0);
	func_445(93, 0, 0, 513, iParam0);
	func_445(66, 0, 0, 1, 0);
	func_445(64, 0, 0, 1, 0);
	func_445(70, 0, 4, 513, iParam0);
	func_445(90, 0, 0, 1, 0);
	func_445(65, 0, 0, 513, iParam0);
	func_445(91, 0, 0, 513, iParam0);
	func_445(92, 0, 0, 1, 0);
	func_446(1);
	return 1;
}

void func_151(bool bParam0)
{
	if (func_28() != -1)
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
		func_438(89, 1);
		ATTRIBUTE::_0xFB6E111908502871(5);
	}
	else
	{
		func_438(90, 1);
		ATTRIBUTE::_0x3FC4C027FD0936F4(5);
	}
	func_447(1, bParam0, 1);
	func_448();
	Global_40.f_11095.f_43 = bParam0;
}

int func_152(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, char* sParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<13> Var11;
	int iVar34;
	struct<2> Var35;
	bool bVar37;

	if (!func_38(iParam0, 0))
	{
		return 0;
	}
	if (!func_449(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_450(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_451(iParam0, bParam2);
	iVar2 = 0;
	if (func_452(iParam0, 0, 0) == 0)
	{
		if (func_453(iParam0))
		{
			iVar5 = func_454(iParam0);
			iVar6 = func_455(iVar5);
			iVar7 = func_456(iVar6) + 1;
			func_457(iVar5);
			if (func_206(38))
			{
				func_438(483, 0);
			}
			else
			{
				func_438(482, 0);
			}
			if (iVar7 == func_458(iVar6))
			{
				func_152(func_459(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_35() && func_460(4))
				{
					if (func_35() && (func_461(38) || func_206(38)))
					{
						func_463(38, func_459(iVar6), 0, 0, func_462(), 0, -1, 0);
						func_464(2);
					}
					else
					{
						func_463(38, func_459(iVar6), 0, 0, func_462(), 0, -1, 0);
						func_464(1);
					}
				}
			}
			else if (func_35() && func_460(4))
			{
				if (func_35() && (func_461(38) || func_206(38)))
				{
					func_463(38, 0, 0, 0, func_462(), 0, -1, 0);
					func_464(2);
				}
				else
				{
					func_463(38, 0, 0, 0, func_462(), 0, -1, 0);
					func_464(1);
				}
			}
			if (func_35() && func_460(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_35() && (func_461(38) || func_206(38)))
					{
						func_465(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_465(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_466(iParam0) == -1037537535)
	{
		if ((!func_467(iParam0, 866047851) && !func_467(iParam0, -1979000645)) && !func_467(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_468(iParam0, 8388608) && !func_125(28))
	{
		func_156(28);
	}
	if (!bVar3)
	{
		if (func_467(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_469(iParam0) == -1447088266)
			{
				iVar1 = func_471(func_470(iParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar1))
				{
					if (func_28() == -1)
					{
						func_153(iVar1);
					}
					if (func_472(0) && func_473(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_474(iParam0, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
			else
			{
				iVar1 = WEAPON::_0x5C2EA6C44F515F34(iParam0);
				if (WEAPON::_0x1F7977C9101F807F(iVar1))
				{
					if (func_28() == -1)
					{
						func_153(iParam0);
					}
					if (func_472(0) && func_473(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_474(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_466(iParam0) == -427144552)
		{
			if (!func_475(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_466(iParam0) == 307971639 && func_476(iParam0))
		{
			if (!func_477(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_467(iParam0, 866047851))
		{
			func_478(iParam0);
		}
		else if (func_467(iParam0, 2000026003))
		{
			func_479(iParam0);
		}
		else if (func_467(iParam0, -103750053))
		{
			func_481(func_480(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_481(func_284(-717883113, 2091222383), iVar0);
		}
		else if (func_467(iParam0, -121341956) && !func_467(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_120(((*Global_1835011)[4 /*74*/])->f_1, 1))
				{
					func_438(498, 0);
				}
			}
			if (func_467(iParam0, -2017733358) || func_467(iParam0, -1369131378))
			{
				func_482(iParam0);
			}
		}
		else if (func_467(iParam0, -136654233))
		{
			if (func_467(iParam0, -1021472396))
			{
			}
		}
		else if (func_467(iParam0, -1466706512) && func_467(iParam0, 1147021565))
		{
			func_438(484, 0);
		}
		else if (func_467(iParam0, 1147021565) && func_467(iParam0, -524514947))
		{
		}
		else if (func_467(iParam0, 554195525))
		{
		}
		else if (func_467(iParam0, 589988438))
		{
			if (func_483())
			{
				func_484(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_467(iParam0, 787083290) && func_467(iParam0, 949916894))
		{
			func_485(iParam0);
		}
		else if (func_467(iParam0, -1718133314))
		{
			func_486(iParam0);
		}
		else if (func_467(iParam0, -1738650224))
		{
			func_487(iParam0);
		}
		else if (func_467(iParam0, -1112814642) && func_467(iParam0, 949916894))
		{
			func_488(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_467(iParam0, 1841149704))
		{
			func_489();
		}
		else if (func_467(iParam0, 606799272))
		{
			func_490(iParam0, iParam1);
			func_491(iParam0);
		}
		else if (func_467(iParam0, -1112814642) && func_467(iParam0, -1697809989))
		{
			func_492(iParam0, 0, 0, 0);
		}
		else if (func_467(iParam0, -2017733358) || func_467(iParam0, -1369131378))
		{
			func_482(iParam0);
		}
		else if (func_467(iParam0, -1921346699))
		{
			if (func_28() != -1)
			{
				return 0;
			}
			func_493(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_467(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_162(215778062, 1, 0))
					{
						func_152(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_162(670273567, 1, 0))
					{
						func_152(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_162(-967317137, 1, 0))
					{
						func_152(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_162(526074061, 1, 0))
					{
						func_152(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_162(-1045488665, 1, 0))
					{
						func_152(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_162(471514780, 1, 0))
					{
						func_152(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_467(iParam0, -839724752) && func_468(iParam0, 4))
		{
			if (!func_206(42))
			{
				func_494(iParam0);
			}
		}
		else if (func_467(iParam0, 1399091007))
		{
			func_495(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_467(iParam0, 1248798204))
		{
			iVar8 = 0;
			switch (iParam0)
			{
				case -593948563:
					iVar8 = -1281487556; /* GXTEntry: "Legend of the East Satchel" */
					break;
				case -1421669656:
					iVar8 = -59585102; /* GXTEntry: "Tonics Satchel" */
					break;
				case -830181022:
					iVar8 = 1018123892; /* GXTEntry: "Ingredients Satchel" */
					break;
				case 917695895:
					iVar8 = -1455768246; /* GXTEntry: "Kit Satchel" */
					break;
				case -1580595448:
					iVar8 = -921879912; /* GXTEntry: "Provisions Satchel" */
					break;
				case 1309992709:
					iVar8 = 982182330; /* GXTEntry: "Materials Satchel" */
					break;
				case 1541618973:
					iVar8 = -1406390556; /* GXTEntry: "Valuables Satchel" */
					break;
			}
			if (iVar8 != 0)
			{
				func_152(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		switch (iParam0)
		{
			case 990323211:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1930309310;
				break;
			case 1143540373:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1372580021;
				break;
			case -1073808995:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1557306571;
				break;
			case 1903483453:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 306085243;
				break;
			case 224572565:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 627131028;
				break;
			case -13395913:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 627131028;
				break;
			case 1859340712:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 239008065;
				break;
			case -1614861441:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 239008065;
				break;
			case -1336735809:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1930727055;
				break;
			case -1109613870:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1930727055;
				break;
			case 637788839:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2118798877;
				break;
			case -1161163727:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2118798877;
				break;
			case 648503798:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -978517238;
				break;
			case -1434556002:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -978517238;
				break;
			case -843069275:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1367906801;
				break;
			case 1356680930:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1367906801;
				break;
			case -1185145312:
				func_156(24);
				if (&Global_1946804->f_1497.f_1[27 /*3*/] == &Global_1946804->f_57[27 /*11*/])
				{
					func_442(PLAYER::PLAYER_PED_ID(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_496(&iVar9, 0))
				{
					func_473(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303:
				if (func_28() == -1 && &Global_1946804->f_1497.f_1[25 /*3*/] == &Global_1946804->f_57[25 /*11*/])
				{
					func_442(PLAYER::PLAYER_PED_ID(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case joaat("weapon_kit_binoculars"):
				break;
			case 2131771850:
				func_438(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_497();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_498();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_499();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_500();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_448();
				break;
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584:
				func_501(499813453, 854119837, 0);
				func_502(499813453, 0);
				func_503(1);
				break;
			case 2127812557:
				func_501(499813453, -1292544588, 0);
				func_502(499813453, 0);
				func_503(2);
				break;
			case 808991383:
				func_501(499813453, -1003325394, 0);
				func_502(499813453, 0);
				func_503(4);
				break;
			case 1134518629:
				func_501(666607663, -335460405, 0);
				func_502(666607663, 0);
				func_504(1);
				break;
			case 902940106:
				func_501(666607663, 903797617, 0);
				func_502(666607663, 0);
				func_504(2);
				break;
			case -418174898:
				func_501(666607663, 669728650, 0);
				func_502(666607663, 0);
				func_504(4);
				break;
			case -648114971:
				func_501(-220219788, 1214120047, 0);
				func_502(-220219788, 0);
				func_505(1);
				break;
			case 211153747:
				func_501(-220219788, 655769340, 0);
				func_502(-220219788, 0);
				func_505(2);
				break;
			case -32876996:
				func_501(-220219788, 885316185, 0);
				func_502(-220219788, 0);
				func_505(4);
				break;
			case 1191437462:
				func_501(218622660, -1491419385, 0);
				func_502(218622660, 0);
				func_506(1);
				break;
			case 1119149048:
				func_501(218622660, 1809565830, 0);
				func_502(218622660, 0);
				func_506(2);
				break;
			case 506073827:
				func_501(390004462, -628873767, 0);
				func_502(390004462, 0);
				func_507(1);
				break;
			case -1876986168:
				func_501(390004462, -405421956, 0);
				func_502(390004462, 0);
				func_507(2);
				break;
			case 2142623221:
				func_501(390004462, -1108972386, 0);
				func_502(390004462, 0);
				func_507(4);
				break;
			case 1508215381:
				func_501(6410548, 1053716392, 0);
				func_502(6410548, 0);
				func_508(1);
				break;
			case -888935280:
				func_501(6410548, 806507056, 0);
				func_502(6410548, 0);
				func_508(2);
				break;
			case -1252474566:
				func_501(6410548, 1571925350, 0);
				func_502(6410548, 0);
				func_508(4);
				break;
			case -1465702449:
				func_501(6410548, 1330352282, 0);
				func_502(6410548, 0);
				func_508(8);
				break;
			case -21093309:
				func_510(242, func_509(-21093309), 0);
				break;
			case 204375141:
				func_510(240, func_509(204375141), 0);
				break;
			case -417963070:
				func_510(241, func_509(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_511(594, 1934060482, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1067476102:
			case -541584777:
			case 206762213:
			case 1566032147:
			case 1973952589:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_511(594, 1110018439, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -653299524:
			case -486559882:
			case -324053813:
			case -223790555:
			case 998010398:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_511(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_511(594, -1228016946, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -2034071102:
			case -1939600995:
			case -1760041550:
			case -1708424762:
			case -1598782722:
			case -1505924449:
			case -1403873319:
			case -1335566375:
			case -1192685521:
			case 144810727:
			case 567164682:
			case 1174625611:
			case 1955751248:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_511(595, -103579, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1977068039:
			case -399865011:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_511(595, -1531530025, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case 80178851:
				func_438(488, 0);
				break;
			case 1613651027:
				func_438(491, 0);
				break;
			case -885810591:
				func_438(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_152(func_512(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_152(func_513(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535:
				if (func_125(1))
				{
					func_438(487, 0);
				}
				break;
			case -898386032:
				func_438(486, 0);
				break;
			case -2035110427:
				if (func_28() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case 1510719693:
				func_438(496, 0);
				break;
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (iVar0 <= 0)
		{
			return 0;
		}
		iVar10 = iParam0;
		func_514(&iVar10);
		if (!func_441(iVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_472(0))
		{
			return 1;
		}
		if (func_466(iParam0) == -1037537535)
		{
			func_515(iParam0);
		}
		if (func_467(iParam0, -1979000645))
		{
			func_516(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_472(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_152(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_517(iVar2, 0);
		}
	}
	Var35 = { func_518(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var35))
	{
		STATS::_0x6A0184E904CDF25E(&Var35, iVar0);
	}
	func_519(iParam0);
	if (sParam6 > 0f)
	{
		if (func_467(iParam0, -839724752))
		{
			func_520(iParam0, sParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_521(iParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

void func_153(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_39(iParam0))
	{
		return;
	}
	iVar0 = WEAPON::_0x865F36299079FB75(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(iVar0, true);
}

void func_154(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	bVar3 = false;
	if (func_522(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_523(iVar5, &iVar2, &iVar0))
			{
				if (!func_38(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_524(iVar2);
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
							if (func_466(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_525() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_525() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_526();
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

struct<2> func_155(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

void func_156(int iParam0)
{
	if (!func_191(iParam0))
	{
		return;
	}
	func_527(iParam0);
	func_147(iParam0);
}

int func_157()
{
	return 0;
}

void func_158(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5)
{
	int iVar0;

	iVar0 = func_528(iParam0);
	if (!bParam1)
	{
		func_529(iVar0, sParam4, iParam5);
	}
	func_530(iVar0, bParam1, fParam2, iParam3, 752097756);
}

void func_159(bool bParam0)
{
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("weapon_fishingrod"), 0, 0))
	{
		func_152(joaat("weapon_fishingrod"), 1, bParam0, 0, 0, 752097756, 0, 0, 0, 0);
	}
}

void func_160()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		(Global_17503.f_42[iVar0 /*8*/])->f_2 = 0;
		(Global_17503.f_42[iVar0 /*8*/])->f_3 = 0;
		(Global_17503.f_42[iVar0 /*8*/])->f_1 = 0;
		Global_17503.f_42[iVar0 /*8*/] = 0;
		iVar0++;
	}
}

void func_161(int iParam0, int iParam1, bool bParam2)
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

bool func_162(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_38(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_466(iParam0);
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
		if (!func_531(iParam0, 1))
		{
			return false;
		}
	}
	return func_452(iParam0, 0, bParam2) >= iParam1;
}

void func_163(vector3 vParam0, bool bParam3)
{
	int iVar0;

	if (!func_35() || bParam3)
	{
		iVar0 = func_532(vParam0, 1);
		Global_40.f_7729 = iVar0;
	}
	else
	{
		iVar0 = Global_40.f_7729;
	}
	Global_1905941 = Global_40.f_7729;
	func_47(Global_35, iVar0, 1, !bParam3, 0);
	func_533();
}

void func_164(int iParam0, bool bParam1)
{
	if (func_28() == -1)
	{
		func_534(0, iParam0);
		func_534(2, iParam0);
		func_534(1, iParam0);
		if (bParam1)
		{
			func_535(10, iParam0);
			func_535(12, iParam0);
			func_535(13, iParam0);
			func_535(15, iParam0);
		}
	}
}

void func_165()
{
	Global_40.f_11095.f_42 = 0;
	Global_40.f_11095.f_43 = 0;
	Global_40.f_11095.f_44 = 0f;
	Global_40.f_11095.f_45 = 0f;
	Global_40.f_11095.f_49 = 0f;
	Global_40.f_11095.f_50 = 0f;
	Global_40.f_11095.f_51 = 0f;
	Global_40.f_11095.f_52 = 0f;
	Global_40.f_11095.f_53 = 0f;
	Global_40.f_11095.f_54 = 0f;
	Global_40.f_11095.f_55 = 0f;
	Global_40.f_11095.f_56 = 0f;
	Global_40.f_11095.f_57 = 0f;
	Global_40.f_11095.f_58 = 0f;
	Global_40.f_11095.f_59 = 0f;
	Global_40.f_11095.f_60 = 0f;
	Global_40.f_11095.f_61 = 0f;
	Global_40.f_11095.f_62 = 0f;
	Global_40.f_11095.f_63 = 0f;
	Global_40.f_11095.f_64 = 0f;
	Global_40.f_11095.f_65 = 0;
	Global_40.f_11095.f_66 = 0;
	Global_40.f_11095.f_68 = 0f;
	Global_40.f_11095.f_69 = 0f;
	Global_40.f_11095.f_70 = 0f;
	func_499();
	func_536();
	func_497();
	func_500();
	func_537();
	func_498();
	func_538();
}

void func_166()
{
	Global_1347477->f_185 = 0;
	Global_1347477->f_184 = -1;
	Global_1347477->f_189 = 0;
	Global_1347477->f_190 = 0;
}

void func_167(bool bParam0)
{
	if (func_28() != -1)
	{
		return;
	}
	if (bParam0)
	{
	}
}

void func_168(bool bParam0, bool bParam1)
{
	if (func_28() != -1)
	{
		return;
	}
	if (bParam0)
	{
	}
	func_42();
	if (bParam1)
	{
		func_61(-1);
	}
}

void func_169(bool bParam0)
{
	if (func_28() != -1)
	{
		return;
	}
	if (bParam0)
	{
	}
	func_43();
}

void func_170()
{
	int iVar0;

	if (func_28() == -1)
	{
		iVar0 = 0;
		while (iVar0 < 150)
		{
			(Global_23117[iVar0 /*11*/])->f_1 = -15;
			(Global_23117[iVar0 /*11*/])->f_4 = -1;
			(Global_23117[iVar0 /*11*/])->f_4.f_1 = 0;
			(Global_23117[iVar0 /*11*/])->f_4.f_2 = 0;
			(Global_23117[iVar0 /*11*/])->f_4.f_3 = 0;
			func_290(&((Global_23117[iVar0 /*11*/])->f_4.f_5), 1);
			(Global_23117[iVar0 /*11*/])->f_4.f_4 = -15;
			func_290(&((Global_23117[iVar0 /*11*/])->f_4.f_5), 2);
			if (Global_23117[iVar0 /*11*/] & 16777216 == 0)
			{
				Global_23117[iVar0 /*11*/] = (&Global_23117[iVar0 /*11*/] - Global_23117[iVar0 /*11*/] & 33554432);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 150)
		{
			(Global_1058888->f_40615[iVar0 /*11*/])->f_1 = -15;
			(Global_1058888->f_40615[iVar0 /*11*/])->f_4 = -1;
			(Global_1058888->f_40615[iVar0 /*11*/])->f_4.f_1 = 0;
			(Global_1058888->f_40615[iVar0 /*11*/])->f_4.f_2 = 0;
			(Global_1058888->f_40615[iVar0 /*11*/])->f_4.f_3 = 0;
			func_290(&((Global_1058888->f_40615[iVar0 /*11*/])->f_4.f_5), 1);
			(Global_1058888->f_40615[iVar0 /*11*/])->f_4.f_4 = -15;
			func_290(&((Global_1058888->f_40615[iVar0 /*11*/])->f_4.f_5), 2);
			if (Global_1058888->f_40615[iVar0 /*11*/] & 16777216 == 0)
			{
				Global_1058888->f_40615[iVar0 /*11*/] = (&Global_1058888->f_40615[iVar0 /*11*/] - Global_1058888->f_40615[iVar0 /*11*/] & 33554432);
			}
			iVar0++;
		}
	}
}

void func_171()
{
	int iVar0;
	struct<12> Var1;
	int iVar13;

	Var1.f_6 = -1;
	Var1.f_6.f_4 = -15;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar13 = (Global_40.f_358[iVar0 /*12*/])->f_5;
		iVar13 = (iVar13 - iVar13 & 1);
		iVar13 = (iVar13 - iVar13 & 4);
		*(Global_40.f_358[iVar0 /*12*/]) = { Var1 };
		(Global_40.f_358[iVar0 /*12*/])->f_5 = iVar13;
		iVar0++;
	}
}

void func_172()
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	LAW::_0x062B4A4A3396351D(iVar0);
	func_539();
}

void func_173()
{
	UNLOCK::_UNLOCK_SET_UNLOCKED(304788622, false);
	UNLOCK::_UNLOCK_SET_UNLOCKED(-1968398307, false);
	UNLOCK::_UNLOCK_SET_UNLOCKED(1244328330, false);
	UNLOCK::_UNLOCK_SET_UNLOCKED(-1383789777, false);
	UNLOCK::_UNLOCK_SET_UNLOCKED(398807247, false);
	UNLOCK::_UNLOCK_SET_UNLOCKED(-1651350587, false);
	UNLOCK::_UNLOCK_SET_UNLOCKED(-121456797, false);
	UNLOCK::_UNLOCK_SET_UNLOCKED(645322743, false);
	UNLOCK::_UNLOCK_SET_UNLOCKED(-236259196, false);
	UNLOCK::_UNLOCK_SET_UNLOCKED(99890643, false);
}

void func_174()
{
	if (func_28() != -1)
	{
		return;
	}
	func_540();
	func_541();
	func_542();
	func_543();
	func_544();
	func_545();
	func_546();
}

int func_175(vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	iVar0 = func_547(vParam0);
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

int func_176(int iParam0)
{
	if (!func_126(iParam0))
	{
		return 0;
	}
	return func_177(iParam0, 8);
}

bool func_177(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23117[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0 /*11*/] && iParam1) != 0;
}

void func_178(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

void func_179(int iParam0)
{
	int iVar0;

	if (func_548(iParam0, 1) || func_548(iParam0, 2))
	{
		iVar0 = func_549(iParam0);
		if (VOLUME::_0x92A78D0BEDB332A3(iVar0))
		{
			if (func_548(iParam0, 1))
			{
				func_550(iVar0, 0);
				func_551(iVar0, 0);
				func_552(iParam0, 1);
			}
			if (func_548(iParam0, 2))
			{
				POPULATION::_0xA1CFB35069D23C23(iVar0);
				POPULATION::_0x74C2B3DC0B294102(iVar0);
				VOLUME::_0x43F867EF5C463A53(iVar0);
				func_552(iParam0, 2);
			}
		}
	}
}

void func_180(int iParam0)
{
	if (func_548(iParam0, 4))
	{
		func_553(iParam0);
		func_552(iParam0, 4);
	}
	if (func_548(iParam0, 8))
	{
		func_554(iParam0);
		func_552(iParam0, 8);
	}
}

int func_181()
{
	return Global_1897952->f_41;
}

int func_182(int iParam0)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	sVar0 = func_555(iParam0);
	SCRIPTS::REQUEST_SCRIPT(sVar0);
	if (SCRIPTS::HAS_SCRIPT_LOADED(sVar0))
	{
		if (func_28() == -1)
		{
			if (SCRIPTS::IS_THREAD_ACTIVE(Global_1897952->f_42, false))
			{
				PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1897952->f_42, 523);
				return 1;
			}
			if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(sVar0)) > 0)
			{
				func_556(sVar0, 523);
				return 1;
			}
		}
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1897952->f_43)) && NETWORK::NETWORK_IS_SCRIPT_ACTIVE(&(Global_1897952->f_43), Global_1897952->f_51, true, 0))
		{
			SCRIPTS::_0x7DE4643157AD646C(Global_1897952->f_42);
			SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(sVar0);
			return 0;
		}
		Global_1897952->f_42 = BUILTIN::START_NEW_SCRIPT(sVar0, 1024);
		StringCopy(&(Global_1897952->f_43), sVar0, 64);
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(sVar0);
		bVar1 = func_557(iParam0);
		LAW::_0x5E6F375CA101C108(PLAYER::PLAYER_ID(), (bVar1 || func_559(func_558(iParam0))));
		if (func_558(iParam0) != func_558(func_181()) || bVar1)
		{
			func_560(func_181(), 0);
			iVar2 = func_50(Global_36, 1);
			if (!func_561(iVar2))
			{
				if (!func_77(&Global_1935630, 16384) && !func_46())
				{
					if (func_562(func_558(iParam0)) >= PLAYER::GET_WANTED_LEVEL_THRESHOLD(1))
					{
						func_563(-1, -1, -1, 0, func_558(iParam0), 0);
					}
					else if (bVar1)
					{
						func_563(-1, iParam0, -1, 0, -1, 0);
					}
				}
			}
			if (!func_564(PLAYER::PLAYER_ID(), 1, 0, 1))
			{
				func_565(iParam0);
			}
			else
			{
				func_560(iParam0, 1);
			}
		}
		if (func_181() != -1)
		{
			func_566(func_181());
			func_553(func_181());
		}
		func_567(iParam0);
		if (func_568(iParam0))
		{
			PLAYER::_0x14E57F88BA0A07FC(func_569(iParam0));
		}
		func_570(iParam0);
		func_571(iParam0);
		iVar3 = -1000;
		if (func_126(func_78()))
		{
			iVar3 = ((*Global_1888801)[func_78() /*35*/])->f_1;
		}
		if (iVar3 < (MISC::GET_GAME_TIMER() - 1000))
		{
			iVar4 = func_50(Global_36, 1);
			if (func_572(iVar4, 1, 0) == 0)
			{
				func_574(func_573(iParam0, 1), func_558(iParam0));
			}
			func_575(0.775f, 0.2f, 0.025f, 0f);
			func_554(iParam0);
		}
		if (8 == iParam0 != func_340(373691918))
		{
			func_576(373691918, 8 == iParam0, 0);
		}
		return 1;
	}
	return 0;
}

int func_183(vector3 vParam0)
{
	return func_577(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

int func_184()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;

	fVar2 = 4f;
	fVar3 = 3f;
	if ((Global_1357549->f_1641 >= 6 && Global_1357549->f_1641 != 10) || (Global_1357549->f_1641 == 10 && func_578(&(Global_1357549->f_1642)) < ((fVar2 + fVar3) + 6.75f)))
	{
		CAM::_0x71D71E08A7ED5BD7(1);
	}
	switch (Global_1357549->f_1641)
	{
		case 2:
		case 4:
		case 5:
		case 6:
			PED::SET_PED_RESET_FLAG(Global_35, 129, true);
			break;
	}
	switch (Global_1357549->f_1641)
	{
		case 0:
			if (func_579() == 0 || func_580())
			{
				return 0;
			}
			iVar0 = 0;
			while (iVar0 < 27)
			{
				if (func_582(func_581(iVar0), 0))
				{
					iVar1 = PED::_0x89816B58C3466262(func_581(iVar0));
					if (iVar1 == 3)
					{
						Global_1357549->f_1645 = func_583(iVar0);
						PED::SET_PED_CONFIG_FLAG(func_581(iVar0), 343, true);
						if ((Global_1357549->f_1645 != -1 && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)) && !AUDIO::IS_ANY_SPEECH_PLAYING(func_581(iVar0)))
						{
							func_584(func_581(Global_1357549->f_1645), "KNOCKOUT_WARNING", 334581534, Global_35, 1, 0, 0, 1);
							Global_1357549->f_1646 = 1;
							Global_1357549->f_1647 = 1;
							Global_1357549->f_1641 = 1;
						}
					}
					else if (iVar1 == 1)
					{
						Global_1357549->f_1645 = func_583(iVar0);
						if ((Global_1357549->f_1645 != -1 && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)) && !AUDIO::IS_ANY_SPEECH_PLAYING(func_581(iVar0)))
						{
							if (Global_1357549->f_1646 == 1 || ENTITY::_0x9A100F1CF4546629(func_581(iVar0)))
							{
								if (ENTITY::_0x9A100F1CF4546629(func_581(iVar0)))
								{
									func_584(func_581(Global_1357549->f_1645), "LEAVE_DOG_ALONE", -69597692, Global_35, 1, 0, 0, 1);
									PED::_0xA7DC9266ED6A4E51(func_581(iVar0));
								}
								else
								{
									Global_1357549->f_1646 = 0;
									if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
									{
										func_584(func_581(Global_1357549->f_1645), "GENERIC_MOCK", -69597692, Global_35, 1, 0, 0, 1);
									}
									else
									{
										func_585(iVar0);
									}
								}
							}
						}
					}
					else if (iVar1 == 2)
					{
						Global_1357549->f_1645 = func_583(iVar0);
						if (((Global_1357549->f_1645 != -1 && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)) && !AUDIO::IS_ANY_SPEECH_PLAYING(func_581(iVar0))) && !AUDIO::IS_ANY_SPEECH_PLAYING(func_581(Global_1357549->f_1645)))
						{
							if (Global_1357549->f_1647 == 1)
							{
								Global_1357549->f_1647 = 0;
								if (func_586(iVar0))
								{
									func_584(func_581(Global_1357549->f_1645), "DISPUTE_INTERVENE_CAMP_MALE", 334581534, Global_35, 1, 0, 0, 1);
								}
								else
								{
									func_584(func_581(Global_1357549->f_1645), "DISPUTE_INTERVENE_CAMP_FEMALE", 334581534, Global_35, 1, 0, 0, 1);
								}
							}
						}
					}
				}
				iVar0++;
			}
			break;
		case 1:
			func_587(Global_1357549->f_1635, &(Global_1357549->f_1637), &(Global_1357549->f_1640));
			if ((func_579() == 0 || func_580()) || func_588(Global_1357549->f_1637))
			{
				func_589();
				Global_1357549->f_1641 = 0;
				return 0;
			}
			iVar0 = 0;
			while (iVar0 < 27)
			{
				if (func_582(func_581(iVar0), 0))
				{
					iVar1 = PED::_0x89816B58C3466262(func_581(iVar0));
					if (iVar1 == 4)
					{
						if (func_588(Global_1357549->f_1637) == 0)
						{
							if (PED::IS_PED_ON_MOUNT(Global_35) == 0)
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) == 0 && PED::IS_PED_IN_MELEE_COMBAT(Global_35) == 0)
								{
									Global_1357549->f_1645 = func_590(iVar0, 1);
									if (func_591(Global_1357549->f_1645) && !AUDIO::IS_ANY_SPEECH_PLAYING(func_581(Global_1357549->f_1645)))
									{
										if (ANIMSCENE::_0x25557E324489393C(Global_1357549->f_1636))
										{
											ANIMSCENE::_DELETE_ANIM_SCENE(Global_1357549->f_1636);
										}
										func_589();
										Global_1357549->f_1636 = ANIMSCENE::_CREATE_ANIM_SCENE(func_592(), 0, func_593(Global_1357549->f_1635), false, true);
										Global_1357549->f_1641 = 3;
									}
									else
									{
										func_589();
										Global_1357549->f_1641 = 0;
									}
								}
							}
							else
							{
								PAD::DISABLE_CONTROL_ACTION(2, 648122183, false);
							}
						}
					}
				}
				iVar0++;
			}
			break;
		case 3:
			ANIMSCENE::LOAD_ANIM_SCENE(Global_1357549->f_1636);
			ANIMSCENE::_0xDF7B5144E25CD3FE(Global_1357549->f_1636, func_593(Global_1357549->f_1635));
			Global_1357549->f_1641 = 2;
			break;
		case 2:
			if (func_594(Global_1357549->f_1645))
			{
				if (ANIMSCENE::_0x25557E324489393C(Global_1357549->f_1636))
				{
					if (ANIMSCENE::_0x477122B8D05E7968(Global_1357549->f_1636, 1, 0))
					{
						if (ANIMSCENE::_0x23E33CB9F4A3F547(Global_1357549->f_1636, func_593(Global_1357549->f_1635)))
						{
							TASK::CLEAR_PED_TASKS(func_581(Global_1357549->f_1645), 1, 0);
							func_595();
							func_596(0, 0, 0);
							Global_1357549->f_1641 = 4;
						}
					}
				}
			}
			else
			{
				func_597(Global_1357549->f_1645, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
			}
			break;
		case 4:
			if (ANIMSCENE::_0xCBFC7725DE6CE2E0(Global_1357549->f_1636, 0))
			{
				if (func_582(Global_35, 0))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0, 0);
				}
				func_598();
				STREAMING::_0x19A6BE7D9C6884D3(-1689755873, 15, 0, 0);
				ENTITY::SET_ENTITY_VISIBLE(func_581(Global_1357549->f_1645), true);
				WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(func_581(Global_1357549->f_1645), false, false, true, false);
				func_584(func_581(Global_1357549->f_1645), func_599(), 272211449, Global_35, 1, 0, 0, 1);
				Global_1357549->f_1641 = 5;
			}
			else
			{
				func_600();
				ANIMSCENE::START_ANIM_SCENE(Global_1357549->f_1636);
			}
			break;
		case 5:
			if (ANIMSCENE::_0x3FBC3F51BF12DFBF(Global_1357549->f_1636) > 0.15f)
			{
				if (AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
				{
					AUDIO::STOP_CURRENT_PLAYING_SPEECH(Global_35, 0);
				}
			}
			if (ANIMSCENE::_0x3FBC3F51BF12DFBF(Global_1357549->f_1636) > 0.92f || (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(Global_35) && ANIMSCENE::_0x3FBC3F51BF12DFBF(Global_1357549->f_1636) > 0.37f))
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				ANIMSCENE::ABORT_ANIM_SCENE(Global_1357549->f_1636, false);
				func_601(&(Global_1357549->f_1642), 0);
				WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(func_581(Global_1357549->f_1645), true, false, true, false);
				func_260(1005520287, 1017034651, -1212621019, 6, 1, 1, 0);
				Global_1357549->f_1641 = 6;
			}
			break;
		case 6:
			if (func_578(&(Global_1357549->f_1642)) > fVar2)
			{
				ENTITY::SET_ENTITY_COORDS(Global_35, Global_1357549->f_1637, true, false, true, true);
				ENTITY::SET_ENTITY_HEADING(Global_35, Global_1357549->f_1640);
				ANIMSCENE::_0xAE6ADA8FE7E84ACC(Global_1357549->f_1636, func_593(Global_1357549->f_1635));
				ANIMSCENE::RESET_ANIM_SCENE(Global_1357549->f_1636, 0);
				ANIMSCENE::_DELETE_ANIM_SCENE(Global_1357549->f_1636);
				CLOCK::ADD_TO_CLOCK_TIME(4, 0, 0);
				Global_1357549->f_1641 = 8;
				func_602(Global_1357549->f_1645, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
				func_603();
				func_604(fVar3);
				return 1;
			}
			break;
		case 8:
			if (STREAMING::_0x9427C94D2E4094A4(-1689755873, 0))
			{
				if (PED::IS_PED_USING_ANY_SCENARIO(Global_35))
				{
					if (func_578(&(Global_1357549->f_1642)) > (fVar2 + 2.5f))
					{
						Global_1357549->f_1641 = 7;
					}
				}
			}
			break;
		case 7:
			Global_1357549->f_1635++;
			if (Global_1357549->f_1635 >= 4)
			{
				Global_1357549->f_1635 = 0;
			}
			PED::_0xC494C76A34266E82(Global_35, 3);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(250);
			}
			func_605();
			Global_1357549->f_1641 = 9;
			break;
		case 9:
			func_606();
			if (func_578(&(Global_1357549->f_1642)) > (fVar2 + fVar3))
			{
				Global_1357549->f_1641 = 10;
			}
			break;
		case 10:
			if (PED::IS_PED_USING_ANY_SCENARIO(Global_35) == 0)
			{
				if (func_582(Global_35, 0))
				{
					if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
					}
				}
				func_607(&(Global_1357549->f_1642));
				STREAMING::_0x4EDDD9E9CA5AF985(-1689755873);
				func_608(2, -1972216640, 0, 0, 0, 0, 1065353216, 0);
				Global_1357549->f_1641 = 0;
			}
			break;
	}
	return 0;
}

void func_185()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1327590->f_19547)
	{
		if (&Global_1327590->f_19547[iVar0 /*5*/] != -1)
		{
			func_609(iVar0);
		}
		iVar0++;
	}
}

void func_186(bool bParam0)
{
	if (bParam0)
	{
		Global_1894899 |= 64;
	}
	else
	{
		Global_1894899 = (&Global_1894899 - Global_1894899 & 64);
	}
}

int func_187()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;

	if (Global_1572887->f_8)
	{
		return 1;
	}
	if ((Global_36 == 0f && Global_36.f_1 == 0f) && Global_36.f_2 == 0f)
	{
		return 1;
	}
	if (Global_1894899 & 264 != 0)
	{
		return 1;
	}
	if (Global_1572887->f_12 == -1 && func_24(64))
	{
		iVar0 = 1;
	}
	else if (Global_1572887->f_12 == 0)
	{
		iVar0 = 1;
	}
	bVar1 = false;
	if (func_126(Global_1894899->f_2))
	{
		bVar2 = VOLUME::_0x92A78D0BEDB332A3(((*Global_1888801)[Global_1894899->f_2 /*35*/])->f_3);
		bVar3 = true;
		if (bVar2)
		{
			bVar1 = VOLUME::_0xF256A75210C5C0EB(((*Global_1888801)[Global_1894899->f_2 /*35*/])->f_3, Global_36);
		}
	}
	bVar4 = PED::IS_PED_INJURED(Global_35);
	bVar5 = func_610(0, 1, 1);
	if (iVar0 && !bVar4)
	{
		if (func_126(Global_1894899->f_2))
		{
			func_611(Global_1894899->f_2, Global_1894899->f_2, bVar5);
			if (Global_1894899->f_5 != Global_1894899->f_2)
			{
				func_611(Global_1894899->f_5, Global_1894899->f_2, bVar5);
			}
		}
		else
		{
			func_611(Global_1894899->f_5, Global_1894899->f_2, bVar5);
		}
	}
	Global_1894899->f_5++;
	if (Global_1894899->f_5 >= 130)
	{
		Global_1894899->f_5 = 0;
	}
	if (bVar3)
	{
		func_612(Global_1894899->f_2, bVar1, bVar2);
	}
	else
	{
		iVar6 = 0;
		iVar7 = (130 - 1);
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			iVar8 = func_50(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false), 1);
			if (func_126(iVar8))
			{
				iVar6 = iVar8;
				iVar7 = iVar8;
			}
		}
		else if (func_613(8))
		{
			if (func_614(Global_1897952->f_41))
			{
				if ((Global_1897952->f_41 == 5 || Global_1897952->f_41 == 6) || Global_1897952->f_41 == 7)
				{
					iVar6 = func_615(7);
					iVar7 = func_616(6);
				}
				else
				{
					iVar6 = func_615(Global_1897952->f_41);
					iVar7 = func_616(Global_1897952->f_41);
				}
			}
		}
		if (Global_1894899->f_4 < iVar6 || Global_1894899->f_4 > iVar7)
		{
			bVar10 = func_617(&bVar9);
			if (!bVar10)
			{
				Global_1894899->f_4 = iVar6;
			}
		}
		func_612(Global_1894899->f_4, bVar1, VOLUME::_0x92A78D0BEDB332A3(((*Global_1888801)[Global_1894899->f_4 /*35*/])->f_3));
		if (bVar9)
		{
			Global_1894899->f_4 = iVar6;
		}
		else if (!bVar10)
		{
			Global_1894899->f_4++;
		}
	}
	return 1;
}

void func_188()
{
	if (Global_1894899->f_9)
	{
		if (!func_618(Global_1934266->f_148))
		{
			func_619();
		}
	}
	switch (HUD::_0x7EC0D68233E391AC(6))
	{
		case 1:
			if (!func_618(Global_1934266->f_148))
			{
				func_619();
			}
			break;
		case 2:
			if (func_618(Global_1934266->f_148))
			{
				_NAMESPACE71::_0x2F901291EF177B02(Global_1934266->f_148, 0);
			}
			break;
	}
}

void func_189()
{
	int iVar0;

	if (func_620(Global_36, Global_1894899->f_6))
	{
		iVar0 = func_621(Global_1894899->f_6);
		if (iVar0 != 0)
		{
			if (!MAP::_0x3F81EA4275D39D6F(iVar0))
			{
				if (func_125(45) || !func_622(Global_1894899->f_6))
				{
					MAP::_0xD8C7162AB2E2AF45(iVar0);
				}
			}
		}
		Global_1894899->f_3 = Global_1894899->f_6;
	}
	else if (Global_1894899->f_3 != -1 && !func_620(Global_36, Global_1894899->f_3))
	{
		Global_1894899->f_3 = -1;
	}
	Global_1894899->f_6++;
	if (Global_1894899->f_6 >= 51)
	{
		Global_1894899->f_6 = 0;
	}
}

int func_190(int iParam0, bool bParam1)
{
	if (!func_623(iParam0))
	{
		return 0;
	}
	if (!func_366(iParam0, 2))
	{
		return 0;
	}
	if (func_366(iParam0, 32) && !bParam1)
	{
		func_625(iParam0, _NAMESPACE48::_0x4F76E3676583D951(func_624(iParam0)));
		if (func_28() == -1)
		{
			if (func_366(iParam0, 2048))
			{
				_NAMESPACE48::_0x49A8C2CD97815215(func_626(iParam0));
				func_348(iParam0, 2048);
			}
			_NAMESPACE48::_0xFCC6DB8DBE709BC8(func_626(iParam0));
		}
		return 0;
	}
	if (!func_627(iParam0) && func_28() == -1)
	{
		return 0;
	}
	if (_NAMESPACE48::_0x800DF3FC913355F3(func_626(iParam0)))
	{
		func_348(iParam0, 128);
		return 1;
	}
	func_625(iParam0, _NAMESPACE48::_0x4F76E3676583D951(func_624(iParam0)));
	_NAMESPACE48::_0x4F81EAD1DE8FA19B(func_626(iParam0));
	if (func_366(iParam0, 2048))
	{
		_NAMESPACE48::_0x49A8C2CD97815215(func_626(iParam0));
		func_348(iParam0, 2048);
	}
	return 1;
}

int func_191(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

void func_192(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	MISC::CLEAR_BIT(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

float func_193(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

void func_194(int iParam0, float fParam1, int iParam2)
{
	int iVar0;
	char* sVar1;

	if (func_28() != -1)
	{
		return;
	}
	if (!func_125(15))
	{
		return;
	}
	Global_40.f_11095[iParam0] = fParam1;
	iVar0 = func_628(BUILTIN::CEIL(&(Global_40.f_11095[iParam0])));
	ATTRIBUTE::_0xC6258F41D86676E0(Global_35, func_629(iParam0), iVar0);
	func_631(func_630(iParam0), (100f * (BUILTIN::TO_FLOAT(iVar0) / 100f)), 0);
	if (((fParam1 <= func_632(15) && iParam0 == 1) && PED::IS_PED_ON_FOOT(Global_35)) && !PED::IS_PED_SWIMMING(Global_35))
	{
		func_438(84, 1);
	}
	if (fParam1 <= -99.999f)
	{
		func_438(func_633(iParam0), 1);
	}
	sVar1 = func_634(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		PED::_0x437C08DB4FEBE2BD(Global_35, sVar1, BUILTIN::TO_FLOAT(iVar0), -1);
	}
}

int func_195()
{
	return Global_1572864->f_1;
}

void func_196(var uParam0)
{
	uParam0->f_2 = 0;
}

int func_197(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_1898441[iVar1 /*38*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_1898441[iVar1 /*38*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

int func_198()
{
	return func_635();
}

void func_199()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if ((Global_40.f_6563[iVar0 /*27*/])->f_24 == 0 || (Global_40.f_6563[iVar0 /*27*/])->f_24 == 19)
		{
		}
		else
		{
			if ((Global_40.f_6563[iVar0 /*27*/])->f_24 == 1)
			{
				func_636(iVar0, 2);
			}
			if ((Global_40.f_6563[iVar0 /*27*/])->f_24 > 3 && (Global_40.f_6563[iVar0 /*27*/])->f_24 < 11)
			{
				func_636(iVar0, 11);
			}
			if (&Global_40.f_6563[iVar0 /*27*/] == 9 || &Global_40.f_6563[iVar0 /*27*/] == 11)
			{
				if ((Global_40.f_6563[iVar0 /*27*/])->f_24 == 16)
				{
					func_636(iVar0, 15);
				}
			}
		}
		iVar0++;
	}
}

void func_200()
{
	int iVar0;
	char* sVar1;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if ((Global_40.f_6563[iVar0 /*27*/])->f_24 == 0 || (Global_40.f_6563[iVar0 /*27*/])->f_24 == 19)
		{
		}
		else
		{
			if ((Global_40.f_6563[iVar0 /*27*/])->f_24 >= 2)
			{
				func_637(Global_40.f_6563[iVar0 /*27*/]);
				func_638();
				func_639(Global_40.f_6563[iVar0 /*27*/], 0);
			}
			if ((Global_40.f_6563[iVar0 /*27*/])->f_24 < 3)
			{
				func_640(&(Global_40.f_6563[iVar0 /*27*/]));
			}
			if ((Global_40.f_6563[iVar0 /*27*/])->f_24 == 3)
			{
				func_641(Global_40.f_6563[iVar0 /*27*/], 0);
			}
			else if ((Global_40.f_6563[iVar0 /*27*/])->f_24 > 3 && (Global_40.f_6563[iVar0 /*27*/])->f_24 <= 11)
			{
				func_642(Global_40.f_6563[iVar0 /*27*/], 1896170705, "ITEM_REQ_RETURN", 0, 0, 0);
			}
			else if ((Global_40.f_6563[iVar0 /*27*/])->f_24 > 11)
			{
				sVar1 = func_643((Global_40.f_6563[iVar0 /*27*/])->f_3, 0);
				switch (func_259())
				{
					case 1:
					case 2:
					case 6:
						func_642(Global_40.f_6563[iVar0 /*27*/], 1896170705, MISC::_CREATE_VAR_STRING(10, "ITEM_REQ_ITEM_PICKUP_TENT", sVar1), 0, 0, 0);
						break;
					case 3:
					case 8:
						func_642(Global_40.f_6563[iVar0 /*27*/], 1896170705, MISC::_CREATE_VAR_STRING(10, "ITEM_REQ_ITEM_PICKUP_ROOM", sVar1), 0, 0, 0);
						break;
				}
			}
		}
		iVar0++;
	}
}

bool func_201(int iParam0, int iParam1)
{
	return ((Global_40.f_9422[iParam0 /*7*/])->f_6 && iParam1) != 0;
}

void func_202(int iParam0, bool bParam1)
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	char* sVar5;
	char* sVar6;

	iVar2 = 444204045; /* GXTEntry: "Home Robbery" */
	iVar3 = MISC::GET_HASH_KEY("toast_log_blips");
	switch (iParam0)
	{
		case 0:
			sVar4 = "PRHM1_LOG";
			sVar5 = "PRHM1_LOG_DESC";
			sVar0 = "PRHM1_LOG_OBJ1";
			sVar6 = "MISSION_PRHM1";
			sVar1 = "PRHM1_LOG";
			break;
		case 2:
			sVar4 = "PRHM2_LOG";
			sVar5 = "PRHM2_LOG_DESC";
			sVar0 = "PRHM2_LOG_OBJ1";
			sVar6 = "MISSION_PRHM2";
			sVar1 = "PRHM2_LOG";
			break;
		case 3:
			sVar4 = "PRHM6_LOG";
			sVar5 = "PRHM6_LOG_DESC";
			sVar0 = "PRHM6_LOG_OBJ1";
			sVar6 = "MISSION_PRHM6";
			sVar1 = "PRHM6_LOG";
			break;
		case 4:
			sVar4 = "PRHM3_LOG";
			sVar5 = "PRHM3_LOG_DESC";
			sVar0 = "PRHM3_LOG_OBJ1";
			sVar6 = "MISSION_PRHM3";
			sVar1 = "PRHM3_LOG";
			break;
		case 6:
			sVar4 = "PRHM7_LOG";
			sVar5 = "PRHM7_LOG_DESC";
			sVar0 = "PRHM7_LOG_OBJ1";
			sVar6 = "MISSION_PRHM7";
			sVar1 = "PRHM7_LOG";
			break;
		case 7:
			sVar4 = "PRHM5_LOG";
			sVar5 = "PRHM5_LOG_DESC";
			sVar0 = "PRHM5_LOG_OBJ1";
			sVar6 = "MISSION_PRHMW";
			sVar1 = "PRHM5_LOG";
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		return;
	}
	UILOG::_UILOG_ADD_ENTRY_HASH(4, func_644(iParam0), func_645(iParam0), MISC::GET_HASH_KEY(sVar4), MISC::GET_HASH_KEY(sVar5), 0);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(4, func_644(iParam0), MISC::GET_HASH_KEY(sVar6), -445557482);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(4, func_644(iParam0), iVar2, iVar3);
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(4, func_644(iParam0), MISC::GET_HASH_KEY(sVar0), sVar0, 0, 0, 0);
	if (bParam1)
	{
		return;
	}
	func_647(sVar1, 0, iVar3, iVar2, 1433015236, 0, -1, -2, func_646(), "robbery_tip_wipe_on", 0, 0, 1, 1, 1);
	func_648(iParam0, 1073741824);
	func_649(0, -1);
}

bool func_203(int iParam0)
{
	return (Global_40.f_12004 && iParam0) != 0;
}

int func_204()
{
	int iVar0;

	iVar0 = 3;
	while (iVar0 >= 0)
	{
		if (func_203(func_650(iVar0)))
		{
			return func_650(iVar0);
		}
		iVar0 = (iVar0 + -1);
	}
	return 0;
}

void func_205(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			func_463(38, 0, 0, 0, func_462(), 0, -1, 0);
			break;
		case 2:
			func_463(38, 0, 0, 0, func_462(), 0, -1, 0);
			break;
		case 4:
			break;
	}
}

int func_206(int iParam0)
{
	if (func_28() != -1)
	{
		return 0;
	}
	return func_120(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
}

int func_207()
{
	int iVar0;

	iVar0 = 7;
	while (iVar0 >= 0)
	{
		if (func_652(func_651(iVar0)))
		{
			return func_651(iVar0);
		}
		iVar0 = (iVar0 + -1);
	}
	return 0;
}

void func_208(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			func_463(39, 0, 0, 0, 0, 0, -1, 0);
			break;
		case 2:
			func_463(39, 0, 0, 0, 0, 0, -1, 0);
			break;
		case 4:
			func_463(39, 0, 0, 0, 0, 0, 7, 0);
			break;
		case 8:
			func_463(39, 0, 0, 0, 0, 0, 0, 0);
			break;
		case 16:
			func_463(39, 0, 0, 0, 0, 0, 1, 0);
			break;
		case 32:
			func_463(39, 0, 0, 0, 0, 0, 2, 0);
			break;
		case 64:
			break;
	}
}

void func_209()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = 0;
	while (iVar0 <= (20 - 1))
	{
		iVar4 = func_653(iVar0);
		if (func_346(Global_40.f_8863.f_148, iVar4))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 > 0)
	{
		iVar3 = MISC::GET_HASH_KEY("DISCO_DREAM");
		iVar2 = 20;
		if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar3))
		{
			UILOG::_UILOG_ADD_ENTRY_HASH(3, iVar3, 0f, 0f, 0f, MISC::GET_HASH_KEY("DISCO_DREAM"), MISC::GET_HASH_KEY("DISCO_DRM_DESC"), 0);
		}
		UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iVar3, MISC::_CREATE_VAR_STRING(2, "DISCO_DC_FOUND", iVar1, iVar2));
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iVar3, 0, MISC::_CREATE_VAR_STRING(2, "DISCO_DRM_OBJ", iVar1, iVar2), iVar1 == iVar2, 0, 0);
		UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iVar3, MISC::GET_HASH_KEY("TOAST_DREAMCATCHER"), MISC::GET_HASH_KEY("hud_toasts"));
		UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iVar3, MISC::GET_HASH_KEY("MISSION_COLLECTDREAM"), MISC::GET_HASH_KEY("SP_MISSIONS_13"));
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iVar3, 0, "DISCO_DRM_CHECK1", iVar1 == iVar2, 1, 0);
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iVar3, 1, "DISCO_DRM_CHECK2", func_654(373034311, 2), 1, 0);
	}
}

int func_210()
{
	int iVar0;
	var uVar1;

	iVar0 = 6;
	while (iVar0 >= 0)
	{
		uVar1 = func_655(iVar0);
		if (func_656(uVar1))
		{
			return uVar1;
		}
		iVar0 = (iVar0 + -1);
	}
	return func_655(iVar0);
}

void func_211(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			func_463(43, 0, 0, -1791518714, 0, 0, -1, 0);
			break;
		case 2:
			func_463(43, 0, 0, -2087881550, 0, 0, -1, 0);
			break;
		case 4:
			func_463(43, 0, 0, 1908068621, 0, 0, -1, 0);
			break;
		case 8:
			func_463(43, 0, 0, 1611247019, 0, 0, -1, 0);
			break;
		case 16:
			func_463(43, 0, 0, 1319635688, 0, 0, -1, 0);
			break;
		case 32:
			break;
	}
}

int func_212()
{
	int iVar0;

	iVar0 = 6;
	while (iVar0 >= 0)
	{
		if (func_658(func_657(iVar0)))
		{
			return func_657(iVar0);
		}
		iVar0 = (iVar0 + -1);
	}
	return 0;
}

void func_213(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			func_463(41, 0, 0, 0, 0, 0, -1, 0);
			break;
		case 2:
			func_463(41, 0, 0, 0, 0, 0, 7, 0);
			break;
		case 4:
			func_463(41, 0, 0, 0, 0, 0, 0, 0);
			break;
		case 8:
			func_463(41, 0, 0, 0, 0, 0, 1, 0);
			break;
		case 16:
			func_463(41, 0, 0, 0, 0, 0, 2, 0);
			break;
		case 32:
			break;
	}
}

bool func_214(int iParam0)
{
	return (Global_40.f_12004.f_4 && iParam0) != 0;
}

int func_215()
{
	int iVar0;

	iVar0 = 3;
	while (iVar0 >= 0)
	{
		if (func_214(func_659(iVar0)))
		{
			return func_659(iVar0);
		}
		iVar0 = (iVar0 + -1);
	}
	return 0;
}

void func_216(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			func_660(1, 0, 0, 0);
			break;
		case 2:
			func_660(15, 1, 0, 0);
			break;
		case 4:
			break;
	}
}

int func_217()
{
	int iVar0;

	iVar0 = 7;
	while (iVar0 >= 0)
	{
		if (func_662(func_661(iVar0)))
		{
			return func_661(iVar0);
		}
		iVar0 = (iVar0 + -1);
	}
	return 0;
}

void func_218(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			func_463(49, 0, 0, 0, 0, 0, -1, 0);
			break;
		case 2:
			func_463(49, 0, 0, 0, 0, 0, -1, 0);
			break;
		case 4:
			func_463(49, 0, 0, 0, 0, 0, 7, 0);
			break;
		case 8:
			func_463(49, 0, 0, 0, 0, 0, 0, 0);
			break;
		case 16:
			func_463(49, 0, 0, 0, 0, 0, 1, 0);
			break;
		case 32:
			func_463(49, 0, 0, 0, 0, 0, 2, 0);
			break;
		case 64:
			break;
	}
}

int func_219()
{
	int iVar0;

	iVar0 = 22;
	while (iVar0 >= 0)
	{
		if (func_664(func_663(iVar0)))
		{
			return func_663(iVar0);
		}
		iVar0 = (iVar0 + -1);
	}
	return 0;
}

void func_220(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 1:
			func_665(-949689219, -1866642239, &sVar0, 1, 0, 0);
			func_463(51, 0, 0, -949689219, sVar0, 0, -1, 0);
			break;
		case 2:
			func_463(51, 0, 0, -949689219, 0, 0, 7, 0);
			break;
		case 4:
			func_463(51, 0, 0, -949689219, 0, 0, 7, 1);
			break;
		case 8:
			func_665(-1248968496, -1969404854, &sVar0, 1, 0, 0);
			func_463(51, 0, 0, -1248968496, sVar0, 0, -1, 0);
			break;
		case 16:
			func_463(51, 0, 0, -1248968496, 0, 0, 7, 0);
			break;
		case 32:
			func_463(51, 0, 0, -1248968496, 0, 0, 7, 1);
			break;
		case 64:
			func_665(1706369307, -832850511, &sVar0, 1, 0, 0);
			func_463(51, 0, 0, 1706369307, sVar0, 0, -1, 0);
			break;
		case 128:
			func_463(51, 0, 0, 1706369307, 0, 0, 7, 0);
			break;
		case 256:
			func_463(51, 0, 0, 1706369307, 0, 0, 7, 1);
			break;
		case 512:
			func_665(1520110311, -100913452, &sVar0, 1, 0, 0);
			func_463(51, 0, 0, 1520110311, sVar0, 0, -1, 0);
			break;
		case 1024:
			func_463(51, 0, 0, 1520110311, 0, 0, 7, 0);
			break;
		case 2048:
			func_463(51, 0, 0, 1520110311, 0, 0, 7, 1);
			break;
		case 4096:
			func_463(51, 0, 0, 1520110311, 0, 0, 3, 0);
			break;
		case 8192:
			func_463(51, 0, 0, 1520110311, 0, 0, 4, 0);
			break;
		case 16384:
			func_463(51, 0, 0, 1520110311, 0, 0, 5, 0);
			break;
		case 32768:
			func_665(-1992824800, 905173572, &sVar0, 1, 0, 0);
			func_463(51, 0, 0, -1992824800, sVar0, 0, -1, 0);
			break;
		case 65536:
			func_463(51, 0, 0, -1992824800, 0, 0, 7, 0);
			break;
		case 262144:
			func_463(51, 0, 0, -1992824800, 0, 0, 0, 0);
			break;
		case 524288:
			func_463(51, 0, 0, -1992824800, 0, 0, 1, 0);
			break;
		case 1048576:
			func_463(51, 0, 0, -1992824800, 0, 0, 2, 0);
			break;
		case 2097152:
			break;
	}
}

bool func_221(int iParam0)
{
	return (Global_40.f_12004.f_7 && iParam0) != 0;
}

int func_222()
{
	int iVar0;

	iVar0 = 4;
	while (iVar0 >= 0)
	{
		if (func_221(func_666(iVar0)))
		{
			return func_666(iVar0);
		}
		iVar0 = (iVar0 + -1);
	}
	return 0;
}

void func_223(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			func_501(499813453, 854119837, 0);
			break;
		case 2:
			func_501(499813453, -1292544588, 0);
			break;
		case 4:
			func_501(499813453, -1003325394, 0);
			break;
		case 8:
			break;
	}
}

bool func_224(int iParam0)
{
	return (Global_40.f_12004.f_8 && iParam0) != 0;
}

int func_225()
{
	int iVar0;

	iVar0 = 4;
	while (iVar0 >= 0)
	{
		if (func_224(func_667(iVar0)))
		{
			return func_667(iVar0);
		}
		iVar0 = (iVar0 + -1);
	}
	return 0;
}

void func_226(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			func_501(666607663, -335460405, 0);
			break;
		case 2:
			func_501(666607663, 903797617, 0);
			break;
		case 4:
			func_501(666607663, 669728650, 0);
			break;
		case 8:
			break;
	}
}

bool func_227(int iParam0)
{
	return (Global_40.f_12004.f_9 && iParam0) != 0;
}

int func_228()
{
	int iVar0;

	iVar0 = 4;
	while (iVar0 >= 0)
	{
		if (func_227(func_668(iVar0)))
		{
			return func_668(iVar0);
		}
		iVar0 = (iVar0 + -1);
	}
	return 0;
}

void func_229(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			func_501(-220219788, 1214120047, 0);
			break;
		case 2:
			func_501(-220219788, 655769340, 0);
			break;
		case 4:
			func_501(-220219788, 885316185, 0);
			break;
		case 8:
			break;
	}
}

bool func_230(int iParam0)
{
	return (Global_40.f_12004.f_10 && iParam0) != 0;
}

int func_231()
{
	int iVar0;

	iVar0 = 3;
	while (iVar0 >= 0)
	{
		if (func_230(func_669(iVar0)))
		{
			return func_669(iVar0);
		}
		iVar0 = (iVar0 + -1);
	}
	return 0;
}

void func_232(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			func_501(218622660, -1491419385, 0);
			break;
		case 2:
			func_501(218622660, 1809565830, 0);
			break;
		case 4:
			break;
	}
}

bool func_233(int iParam0)
{
	return (Global_40.f_12004.f_11 && iParam0) != 0;
}

int func_234()
{
	int iVar0;

	iVar0 = 4;
	while (iVar0 >= 0)
	{
		if (func_233(func_670(iVar0)))
		{
			return func_670(iVar0);
		}
		iVar0 = (iVar0 + -1);
	}
	return 0;
}

void func_235(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			func_501(390004462, -628873767, 0);
			break;
		case 2:
			func_501(390004462, -405421956, 0);
			break;
		case 4:
			func_501(390004462, -1108972386, 0);
			break;
		case 8:
			break;
	}
}

bool func_236(int iParam0)
{
	return (Global_40.f_12004.f_12 && iParam0) != 0;
}

int func_237()
{
	int iVar0;

	iVar0 = 5;
	while (iVar0 >= 0)
	{
		if (func_236(func_671(iVar0)))
		{
			return func_671(iVar0);
		}
		iVar0 = (iVar0 + -1);
	}
	return 0;
}

void func_238(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			func_501(6410548, 1053716392, 0);
			break;
		case 2:
			func_501(6410548, 806507056, 0);
			break;
		case 4:
			func_501(6410548, 1571925350, 0);
			break;
		case 8:
			func_501(6410548, 1330352282, 0);
			break;
		case 16:
			break;
	}
}

int func_239(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 29;
		case 0:
			return 43;
		case 2:
			return 61;
		case 3:
			return 73;
		default:
			break;
	}
	return -1;
}

bool func_240(int iParam0, int iParam1)
{
	return (Global_20709.f_2092[iParam0] && iParam1) != 0;
}

void func_241(int iParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	iVar6 = MISC::GET_HASH_KEY("BLIP_ROBBERY_SHOP");
	iVar7 = MISC::GET_HASH_KEY("toast_log_blips");
	switch (iParam0)
	{
		case 29:
			sVar2 = "PRRGS_LOG";
			iVar3 = 1273430131; /* GXTEntry: "SHOP ROBBERY" */
			sVar4 = "PRRGS_LOG_DESC";
			iVar5 = 815429461; /* GXTEntry: "There\'s a rumor about some shady activities in the basement of the Rhodes Gunsmit" +
    "h. Look around the shop to investigate." */
			sVar0 = "PRRGS_LOG_OBJ1";
			iVar1 = -790894613; /* GXTEntry: "Investigate the Gunsmith." */
			iVar8 = -1662367475;
			break;
		case 43:
			sVar2 = "PRNBG_LOG";
			iVar3 = 891195117; /* GXTEntry: "SHOP ROBBERY" */
			sVar4 = "PRNBG_LOG_DESC";
			iVar5 = -374810475; /* GXTEntry: "Rumor has it the Gunsmith in Saint Denis is running a profitable gambling operati" +
    "on. Look around the shop to investigate." */
			sVar0 = "PRNBG_LOG_OBJ2";
			iVar1 = -904554217; /* GXTEntry: "Investigate the Gunsmith." */
			iVar8 = -1637141202;
			break;
		case 61:
			sVar2 = "PRSGS_LOG";
			iVar3 = -48607192; /* GXTEntry: "SHOP ROBBERY" */
			sVar4 = "PRSGS_LOG_DESC";
			iVar5 = -1489851049; /* GXTEntry: "The shopkeeper in the general store over at Strawberry is rumored to be running a" +
    " secret moonshine operation. Look around the shop to investigate." */
			sVar0 = "PRSGS_LOG_OBJ3";
			iVar1 = -1687482810; /* GXTEntry: "Investigate the General Store." */
			iVar8 = -439915887;
			break;
		case 73:
			sVar2 = "PRVDO_LOG";
			iVar3 = 1979151958; /* GXTEntry: "SHOP ROBBERY" */
			sVar4 = "PRVDO_LOG_DESC";
			iVar5 = 305972; /* GXTEntry: "There are rumors about the Valentine doctor being involved in some shady activiti" +
    "es. Look around the shop to investigate." */
			sVar0 = "PRVDO_LOG_OBJ4";
			iVar1 = 2100672420; /* GXTEntry: "Investigate the Doctor\'s Office." */
			iVar8 = -366465324;
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		return;
	}
	UILOG::_UILOG_ADD_ENTRY_HASH(4, func_672(iParam0), func_673(iParam0), iVar3, iVar5, 0);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(4, func_672(iParam0), iVar8, -445557482);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(4, func_672(iParam0), iVar6, iVar7);
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(4, func_672(iParam0), iVar1, sVar0, 0, 0, 0);
	if (bParam1)
	{
		return;
	}
	func_647(sVar2, 0, iVar7, iVar6, 1433015236, 0, -1, -2, func_674(), "robbery_tip_wipe_on", 0, 0, 1, 1, 1);
	func_675(iParam0, -2147483648);
	func_649(0, -1);
}

bool func_242(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_243(int iParam0, int iParam1)
{
	return (Global_40.f_490.f_402[iParam0] && iParam1) != 0;
}

int func_244(int iParam0)
{
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0 || ((*Global_1347702)[iParam0 /*49*/])->f_12 & 33554432 != 0)
	{
		return 1;
	}
	return 3;
}

int func_245(int iParam0)
{
	var uVar0;

	uVar0 = ((*Global_1347702)[iParam0 /*49*/])->f_3;
	return MISC::GET_HASH_KEY(&uVar0);
}

void func_246(int iParam0)
{
	char cVar0[64];
	char* sVar8;
	char* sVar9;
	var uVar10;
	int iVar11;
	int iVar12;
	int iVar13;

	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 67108864 != 0)
	{
		return;
	}
	uVar10 = func_676(iParam0, 0);
	iVar11 = uVar10;
	iVar12 = uVar10;
	if (iParam0 == 82 || iParam0 == 83)
	{
		iVar12 = MISC::GET_HASH_KEY("LAW_UI_DUTCH_GANG");
	}
	MemCopy(&cVar0, {((*Global_1347702)[iParam0 /*49*/])->f_3}, 8);
	StringConCat(&cVar0, "_DESC", 64);
	iVar13 = func_244(iParam0);
	UILOG::_UILOG_ADD_ENTRY_HASH(iVar13, func_245(iParam0), ((*Global_1347702)[iParam0 /*49*/])->f_24, iVar12, MISC::GET_HASH_KEY(&cVar0), ((*Global_1347702)[iParam0 /*49*/])->f_37);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(iVar13, func_245(iParam0), iVar11, MISC::GET_HASH_KEY("toast_log_blips"));
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar8) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar9))
	{
		UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(iVar13, func_245(iParam0), MISC::GET_HASH_KEY(sVar8), MISC::GET_HASH_KEY(sVar9));
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar13, func_245(iParam0)))
	{
		func_677(iParam0, 4);
	}
}

void func_247(int iParam0)
{
	char cVar0[16];
	char[] cVar3[8];

	switch (iParam0)
	{
		case 11:
			StringCopy(&cVar0, "DUL", 8);
			break;
		case 13:
			StringCopy(&cVar0, "RCH", 8);
			break;
		case 12:
			StringCopy(&cVar0, "ECF", 8);
			break;
		case 14:
			StringCopy(&cVar0, "WIL", 8);
			break;
		case 15:
			StringCopy(&cVar0, "SHE", 8);
			break;
		case 16:
			StringCopy(&cVar0, "NBS", 8);
			break;
		case 17:
			StringCopy(&cVar0, "SKN", 8);
			break;
		case 18:
			StringCopy(&cVar0, "RDE", 8);
			break;
		case 19:
			StringCopy(&cVar0, "BDS", 8);
			break;
		case 20:
			StringCopy(&cVar0, "BDM", 8);
			break;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		StringCopy(&Var1, "PSTR_O_", 16);
		StringConCat(&Var1, &cVar0, 16);
		cVar3 = func_678(0, &Var1, 0, 0, -1, -1);
		func_679(iParam0, &Var1, cVar3, -1082130432);
	}
}

void func_248(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	char[] cVar4[8];
	int iVar5;
	int iVar6;

	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 67108864 != 0)
	{
		return;
	}
	iVar0 = func_244(iParam0);
	if (iVar0 == 1)
	{
		if (UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar0, func_245(iParam0)))
		{
			UILOG::_UILOG_MARK_MISSION_COMPLETED(func_245(iParam0));
		}
		func_250(iParam0, 4);
		func_250(iParam0, 8);
		return;
	}
	else if (func_275(((*Global_1347702)[iParam0 /*49*/])->f_12, 4))
	{
		func_680(Global_1347702[iParam0 /*49*/]);
		func_246(iParam0);
		if (UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar0, func_245(iParam0)))
		{
			StringCopy(&vVar1, "", 24);
			cVar4 = func_678(0, &vVar1, 0, 0, -1, -1);
			func_679(iParam0, &vVar1, cVar4, -1082130432);
			UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(iVar0, func_245(iParam0), MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE"), MISC::GET_HASH_KEY("hud_toasts"));
		}
		func_250(iParam0, 4);
		func_250(iParam0, 8);
		return;
	}
	iVar5 = 0;
	if (func_243(iParam0, 8))
	{
		iVar5 = 1;
	}
	iVar6 = 0;
	if (func_243(iParam0, 16))
	{
		iVar6 = 1;
	}
	func_680(Global_1347702[iParam0 /*49*/]);
	func_246(iParam0);
	MemCopy(&vVar1, {((*Global_1347702)[iParam0 /*49*/])->f_1}, 3);
	StringConCat(&vVar1, "_obj", 24);
	if (func_243(iParam0, 64))
	{
		StringConCat(&vVar1, "3", 24);
	}
	else if (func_243(iParam0, 32))
	{
		StringConCat(&vVar1, "2", 24);
	}
	if (HUD::DOES_TEXT_LABEL_EXIST(&vVar1))
	{
		cVar4 = func_678(0, &vVar1, 0, 0, -1, -1);
		func_679(iParam0, &vVar1, cVar4, -1082130432);
		if (func_243(iParam0, 16) || iVar6)
		{
			func_681(iParam0, 1);
		}
		if (func_243(iParam0, 8) || iVar5)
		{
			func_682(iParam0, 1);
		}
	}
	else
	{
		StringCopy(&vVar1, "", 24);
		cVar4 = func_678(0, &vVar1, 0, 0, -1, -1);
		func_679(iParam0, &vVar1, cVar4, -1082130432);
		func_682(iParam0, 1);
		if (func_243(iParam0, 16) || iVar6)
		{
			func_681(iParam0, 1);
		}
	}
}

void func_249(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_244(iParam0);
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar0, func_245(iParam0)))
	{
		UILOG::_UILOG_REMOVE_ENTRY(iVar0, func_245(iParam0));
	}
	if (bParam1)
	{
		if (iVar0 == 1)
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(2, func_245(iParam0)))
			{
				UILOG::_UILOG_REMOVE_ENTRY(2, func_245(iParam0));
			}
		}
	}
	func_250(iParam0, 4);
	func_250(iParam0, 8);
	func_250(iParam0, 16);
}

void func_250(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (&Global_40.f_490.f_402[iParam0] - (Global_40.f_490.f_402[iParam0] && iParam1));
}

int func_251(int iParam0)
{
	if (!func_67(iParam0))
	{
		return -1;
	}
	return func_683(func_294(iParam0));
}

void func_252()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_684(iVar0);
		iVar0++;
	}
}

void func_253()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = func_685(iVar0);
		if (iVar1 == 0)
		{
		}
		else
		{
			func_686(iVar1);
		}
		iVar0++;
	}
}

void func_254()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar1 = func_687(iVar0);
		if (iVar1 == 0)
		{
		}
		else
		{
			func_688(iVar1);
		}
		iVar0++;
	}
}

void func_255()
{
	if (!func_120(((*Global_1347702)[26 /*49*/])->f_15, 1))
	{
		return;
	}
	if (func_120(((*Global_1347702)[28 /*49*/])->f_15, 1))
	{
		return;
	}
	if (func_120(func_345(37), 1))
	{
		if (!func_120(func_345(44), 1))
		{
			return;
		}
	}
	if (func_120(func_345(59), 1))
	{
		if (!func_120(func_345(67), 1))
		{
			return;
		}
	}
	func_689();
	func_690();
	func_691();
	func_692();
}

void func_256()
{
	if (Global_43890)
	{
		return;
	}
	else if (func_693(func_345(23)))
	{
		return;
	}
	func_694();
	func_695();
	func_696();
	func_697();
	func_698();
	func_699();
}

void func_257(int iParam0)
{
	func_700(iParam0, 4, 1);
}

bool func_258(int iParam0)
{
	return func_701(iParam0, 4, 1);
}

int func_259()
{
	return Global_40.f_4283;
}

int func_260(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;

	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar2 = func_702(iParam0);
	uVar3 = func_703(iParam0);
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0 /*5*/] == 176656832)
		{
			Global_40.f_4283.f_6[iVar0 /*5*/] = iParam0;
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_2 = iParam1;
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_3 = uVar3;
			if (iParam3 > 0)
			{
				iVar1 = func_261();
				func_704(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_1 = iVar1;
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_4 = iVar2;
			func_705(iParam0, 1);
			if (func_706(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if ((Global_40.f_4283.f_6[iVar4 /*5*/])->f_4 == iVar2 && &Global_40.f_4283.f_6[iVar4 /*5*/] != iParam0)
					{
						func_707(Global_40.f_4283.f_6[iVar4 /*5*/], 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_708(1, iParam0);
				}
				else
				{
					func_709(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_261()
{
	return &Global_1899515;
}

int func_262(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_263(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_264(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_710(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_265(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_266(int iParam0, int iParam1)
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

void func_267(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_711(iParam0, iParam6);
	func_712(iParam0, iParam5);
	func_713(iParam0, iParam4);
	func_714(iParam0, iParam3);
	func_715(iParam0, iParam2);
	func_716(iParam0, iParam1);
}

int func_268(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_269(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_270(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_0x865F36299079FB75(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (UNLOCK::_UNLOCK_IS_VISIBLE(iVar0))
	{
		return 1;
	}
	return 0;
}

void func_271(int iParam0)
{
	int iVar0;

	if (!func_39(iParam0))
	{
		return;
	}
	iVar0 = WEAPON::_0x865F36299079FB75(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_VISIBLE(iVar0, true);
}

int func_272(int iParam0)
{
	if (func_28() != -1)
	{
		return 0;
	}
	if (!func_242(iParam0))
	{
		return 0;
	}
	return func_120(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
}

var func_273(int iParam0)
{
	char[] cVar0[8];

	if (!func_67(iParam0))
	{
		return cVar0;
	}
	switch (func_91(iParam0))
	{
		case 1:
			cVar0 = ((*Global_1835011)[func_717(iParam0) /*74*/])->f_8;
			break;
		case 8:
			cVar0 = ((*Global_1347702)[func_251(iParam0) /*49*/])->f_3;
			break;
		case 11:
			if (iParam0 == func_111(0, 10, 11, 2116153146))
			{
				StringCopy(&cVar0, "CABR01", 8);
			}
			break;
	}
	return cVar0;
}

int func_274(int iParam0)
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

bool func_275(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_276(int iParam0)
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

int func_277(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9;
		case 1:
			return 16;
		case 2:
			return 36;
		case 3:
			return 79;
		case 4:
			return 125;
		case 5:
			return 127;
		case 6:
			return 118;
		case 7:
			return 129;
		case 8:
			return 114;
		default:
			break;
	}
	return -1;
}

var func_278(int iParam0)
{
	if (!func_718(iParam0))
	{
	}
	return Global_1888801[iParam0 /*35*/];
}

int func_279(int iParam0)
{
	if (!func_67(iParam0))
	{
		return -1;
	}
	return BUILTIN::SHIFT_RIGHT(func_719(iParam0) & 2147418112, 16);
}

int func_280(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 373034311;
		case 1:
			return 870958936;
		case 2:
			return -1287911066;
		case 3:
			return -777592153;
		case 4:
			return -1084929085;
		case 5:
			return 1347913620;
		case 6:
			return -1568839185;
		case 7:
			return 1937333853;
		case 8:
			return -780455182;
		case 9:
			return -2019711818;
		case 10:
			return -1636964661;
		case 11:
			return -321841939;
		case 12:
			return 1154568952;
		case 13:
			return -1646022773;
		case 14:
			return 2134589549;
		case 15:
			return -1109016944;
		case 16:
			return -1787770845;
		case 17:
			return -1761578407;
		case 18:
			return 404434344;
		case 19:
			return 503180747;
		case 20:
			return -709811179;
		case 21:
			return -1609238411;
		case 22:
			return 173549940;
		case 23:
			return -1420566543;
		case 24:
			return -1208846034;
		case 25:
			return -986176781;
		case 26:
			return 1048086072;
		case 27:
			return 939555152;
		case 28:
			return -1859413640;
		case 29:
			return -161804536;
		case 30:
			return -30872859;
		case 31:
			return -1505275983;
		case 32:
			return 733338689;
		case 33:
			return 1034793488;
		case 34:
			return -2009137002;
		case 35:
			return 74587361;
		case 36:
			return 2072029413;
		case 37:
			return -261997819;
		case 38:
			return -599506500;
		case 39:
			return 1424723727;
		case 40:
			return -35775921;
		case 41:
			return 2135153015;
		case 42:
			return 1519228573;
		case 43:
			return 1124200691;
		case 44:
			return -357364973;
		case 45:
			return -1308658310;
		case 46:
			return -641229542;
		case 47:
			return -1427565340;
		case 48:
			return -1614148516;
		case 49:
			return -1958832660;
		case 50:
			return -1882503209;
		case 51:
			return -1300082860;
		case 52:
			return 247563739;
		case 53:
			return -1481450947;
		case 54:
			return 233600584;
		case 55:
			return -763376358;
		case 56:
			return 1801731633;
		case 57:
			return 1490223565;
		case 58:
			return 1335921989;
		case 59:
			return -2008558277;
		case 60:
			return 435290930;
		case 61:
			return -1494823099;
		case 62:
			return 1861313914;
		case 63:
			return 1519472817;
		case 64:
			return -1859023693;
		case 65:
			return 1734766691;
		case 66:
			return -1824429070;
		case 67:
			return 149709049;
		case 68:
			return -968854939;
		case 69:
			return 1342653896;
		case 70:
			return 657666087;
		case 71:
			return 1187917501;
		case 72:
			return 58958195;
		case 73:
			return 2072069278;
		case 74:
			return -499529359;
		case 75:
			return 425000526;
		case 76:
			return -1714262909;
		case 77:
			return 1505050944;
		case 78:
			return -1283611369;
		case 79:
			return -919236330;
		case 80:
			return 1431862613;
		case 81:
			return -1243267511;
		case 82:
			return 918206817;
		case 83:
			return -920971071;
		case 84:
			return -1053108445;
		case 85:
			return 1284679164;
		case 86:
			return 1351526287;
		case 87:
			return 397377585;
		case 88:
			return -409986722;
		case 89:
			return -1887999095;
		case 90:
			return 1982045664;
		case 91:
			return -834293086;
		case 92:
			return -849582265;
		case 93:
			return 429544447;
		case 94:
			return -1841331114;
		case 95:
			return -715636193;
		case 96:
			return -1061274876;
		case 97:
			return -148407339;
		case 98:
			return -415839138;
		case 99:
			return 1673499939;
		case 100:
			return -777150535;
		case 101:
			return 118535038;
		case 102:
			return 1833243216;
		case 103:
			return -979575591;
		case 104:
			return -654238687;
		case 105:
			return 1120968795;
		case 106:
			return -544327665;
		case 107:
			return 230001763;
		case 108:
			return 921081956;
		case 109:
			return 949011950;
		case 110:
			return -739986731;
		case 111:
			return -1144800837;
		case 112:
			return -1686810506;
		case 113:
			return -1848895400;
		case 114:
			return -657632;
		case 115:
			return -1761189332;
		case 116:
			return -2060865802;
		case 117:
			return -1923503631;
		case 118:
			return -607940493;
		case 119:
			return 1986618633;
		case 120:
			return 2000209669;
		case 121:
			return 513110082;
		case 122:
			return 1091556515;
		case 123:
			return -1457751321;
		case 124:
			return -1891628345;
		case 125:
			return -1960242214;
		case 126:
			return 1187689415;
		case 127:
			return -1177787273;
		case 128:
			return 464413478;
		case 129:
			return 1464664327;
		case 130:
			return -490142739;
		case 131:
			return 330993088;
		case 132:
			return 221420861;
		case 133:
			return 1535254161;
		case 134:
			return 683269210;
		case 135:
			return -232974724;
		case 136:
			return 308500632;
		case 137:
			return -890175011;
		case 138:
			return -2108030724;
		case 139:
			return -1272862985;
		case 140:
			return -1240932004;
		case 141:
			return -1829339703;
		case 142:
			return 677950956;
		case 143:
			return 0;
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

int func_281(int iParam0)
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

bool func_282(int iParam0, int iParam1)
{
	if (!func_720(iParam0))
	{
		return false;
	}
	return (Global_40.f_8863[func_721(iParam0, 1)] && iParam1) != 0;
}

bool func_283(int iParam0, int iParam1)
{
	return ((Global_40.f_9422[iParam0 /*7*/])->f_5 && iParam1) != 0;
}

struct<2> func_284(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_285(var uParam0, var uParam1, int iParam2)
{
	STATS::_0x91A4F58E01ED5E4C(&uParam0, iParam2);
}

void func_286(int iParam0, int iParam1)
{
	int iVar0;

	if (func_722(iParam0))
	{
		return;
	}
	iVar0 = func_723(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iParam1 > iVar0)
	{
		func_724(iParam0, iParam1);
	}
}

int func_287(int iParam0)
{
	if (!func_67(iParam0))
	{
		return -1;
	}
	return func_725(iParam0);
}

void func_288()
{
	float fVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	struct<2> Var6;
	float fVar8;
	int iVar9[50];
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;

	if (!func_77(&Global_1935630, 8192))
	{
		return;
	}
	if (func_17(32768))
	{
		return;
	}
	func_113(Global_1935630, 8192);
	fVar0 = 0f;
	fVar0 = (fVar0 + (0.9259259f * BUILTIN::TO_FLOAT(func_726(909007663, 1325140787))));
	fVar0 = (fVar0 + (0.2525252f * BUILTIN::TO_FLOAT(func_726(909007663, 2101241783))));
	fVar0 = (fVar0 + (0.2923976f * BUILTIN::TO_FLOAT(func_726(909007663, -1296936294))));
	fVar0 = (fVar0 + (0.462963f * BUILTIN::TO_FLOAT(func_726(909007663, -798388728))));
	fVar0 = (fVar0 + (0.9259259f * BUILTIN::TO_FLOAT(func_726(909007663, -1787586531))));
	fVar0 = (fVar0 + (0.308642f * BUILTIN::TO_FLOAT(func_726(909007663, -1002834519))));
	fVar0 = (fVar0 + (5.555555f * BUILTIN::TO_FLOAT(func_726(909007663, -50600144))));
	fVar0 = (fVar0 + (0.6944444f * BUILTIN::TO_FLOAT(func_726(909007663, -348503123))));
	fVar0 = (fVar0 + (0.3703704f * BUILTIN::TO_FLOAT(func_726(909007663, -528798161))));
	fVar0 = (fVar0 + (0.5f * func_727(10f, BUILTIN::TO_FLOAT(func_726(909007663, 551192206)))));
	fVar0 = (fVar0 + (0.6f * func_727(5f, BUILTIN::TO_FLOAT(func_726(909007663, -406093146)))));
	fVar0 = (fVar0 + (0.2f * func_727(25f, BUILTIN::TO_FLOAT(func_728(-1029789297)))));
	fVar0 = (fVar0 + (2f * func_727(1f, BUILTIN::TO_FLOAT(func_728(-843295694)))));
	fVar0 = (fVar0 + (0.3333333f * func_727(6f, BUILTIN::TO_FLOAT(func_728(64058978)))));
	fVar0 = (fVar0 + (3f * func_727(1f, BUILTIN::TO_FLOAT(func_728(795577402)))));
	iVar1 = func_729();
	fVar0 = (fVar0 + (0.1111111f * func_727(9f, BUILTIN::TO_FLOAT(iVar1))));
	fVar2 = (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, 1665658745)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 1665658745)));
	fVar2 = func_730(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, -263938772)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, -263938772))));
	fVar2 = func_730(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, 228647253)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 228647253))));
	fVar2 = func_730(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, 1695604435)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 1695604435))));
	fVar2 = func_730(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, -379038926)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, -379038926))));
	fVar2 = func_730(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, 1597499323)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 1597499323))));
	fVar2 = func_730(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, -278663717)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, -278663717))));
	fVar2 = func_730(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, 586249988)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 586249988))));
	fVar2 = func_730(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, -419800938)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, -419800938))));
	fVar2 = func_730(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, -1362069171)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, -1362069171))));
	fVar2 = func_730(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, -740350755)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, -740350755))));
	fVar2 = func_730(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, 1511070393)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 1511070393))));
	fVar0 = (fVar0 + func_727(1f, fVar2));
	fVar0 = (fVar0 + (0.05f * func_727(BUILTIN::TO_FLOAT(20), BUILTIN::TO_FLOAT(func_731()))));
	if (func_272(40))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_272(42))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_272(48))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_272(50))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_272(52))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	fVar2 = (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(1765845133, 499813453)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(1765845133, 499813453)));
	fVar2 = func_730(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(1765845133, 666607663)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(1765845133, 666607663))));
	fVar2 = func_730(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(1765845133, -220219788)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(1765845133, -220219788))));
	fVar2 = func_730(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(1765845133, 218622660)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(1765845133, 218622660))));
	fVar2 = func_730(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(1765845133, 390004462)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(1765845133, 390004462))));
	fVar2 = func_730(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(1765845133, 6410548)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(1765845133, 6410548))));
	fVar0 = (fVar0 + (1f * func_727(1f, fVar2)));
	fVar0 = (fVar0 + (0.2f * func_727(5f, BUILTIN::TO_FLOAT(func_728(1933084904)))));
	fVar0 = (fVar0 + (0.2f * func_727(5f, BUILTIN::TO_FLOAT(func_726(-1756227506, -734935893)))));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_732(COMPENDIUM::_0x729D52F61A5A9E22(1979337996), 50)) / BUILTIN::TO_FLOAT(50)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_732(COMPENDIUM::_0x729D52F61A5A9E22(-2125891426), 10)) / BUILTIN::TO_FLOAT(10)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_732(COMPENDIUM::_0x729D52F61A5A9E22(1630085303), 10)) / BUILTIN::TO_FLOAT(10)));
	fVar0 = (fVar0 + COMPENDIUM::_0x725D52F21A5E9E22(-1658238931));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_732(COMPENDIUM::_0x729D52F61A5A9E22(1807539419), 20)) / BUILTIN::TO_FLOAT(20)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_732(COMPENDIUM::_0x729D52F61A5A9E22(717108105), 10)) / BUILTIN::TO_FLOAT(10)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_732(COMPENDIUM::_0x729D52F61A5A9E22(-2143405780), 48)) / BUILTIN::TO_FLOAT(48)));
	func_733(&iVar3, &iVar4);
	fVar0 = (fVar0 + (2f * func_727((BUILTIN::TO_FLOAT(iVar3) / BUILTIN::TO_FLOAT(iVar4)), 1f)));
	fVar0 = (fVar0 + (2f * func_727(1f, BUILTIN::TO_FLOAT(func_734(-2116919750)))));
	fVar5 = BUILTIN::TO_FLOAT(func_735());
	fVar0 = (fVar0 + ((3f * fVar5) / BUILTIN::TO_FLOAT(9)));
	fVar0 = (fVar0 + ((1f / 4f) * func_727(1f, BUILTIN::TO_FLOAT(func_726(1511238709, -747096482)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_727(1f, BUILTIN::TO_FLOAT(func_726(1511238709, 549911940)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_727(1f, BUILTIN::TO_FLOAT(func_726(1511238709, -760820978)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_727(1f, BUILTIN::TO_FLOAT(func_726(1511238709, -1672018311)))));
	fVar0 = (fVar0 + (0.2f * func_727(5f, BUILTIN::TO_FLOAT(func_728(-1342635612)))));
	fVar0 = (fVar0 + (0.5f * func_727(1f, BUILTIN::TO_FLOAT(func_728(-2061916883)))));
	fVar0 = (fVar0 + (0.5f * func_727(1f, BUILTIN::TO_FLOAT(func_728(281346304)))));
	fVar0 = (fVar0 + (0.5f * func_727(1f, BUILTIN::TO_FLOAT(func_728(-299021541)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_727(1f, BUILTIN::TO_FLOAT(func_726(-1276738576, 307971639)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_727(1f, BUILTIN::TO_FLOAT(func_726(-1276738576, -1555359431)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_727(1f, BUILTIN::TO_FLOAT(func_726(-1276738576, 644069854)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_727(1f, BUILTIN::TO_FLOAT(func_726(-1276738576, -97115714)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_727(1f, BUILTIN::TO_FLOAT(func_726(-1276738576, -2143405780)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_727(1f, BUILTIN::TO_FLOAT(func_726(-1276738576, 1455184052)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_727(1f, BUILTIN::TO_FLOAT(func_726(978382515, joaat("coach"))))));
	fVar0 = (fVar0 + ((1f / 4f) * func_727(1f, BUILTIN::TO_FLOAT(func_726(978382515, 574993838)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_727(1f, BUILTIN::TO_FLOAT(func_726(978382515, -605765767)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_727(1f, BUILTIN::TO_FLOAT(func_726(978382515, 1015970717)))));
	Var6 = { func_155(joaat("total_progress_made")) };
	fVar8 = func_736(Var6);
	STATS::_0xE141F6B40B1E3683(&Var6, fVar0);
	if (fVar0 > fVar8)
	{
	}
	if (func_67(&Global_1898437))
	{
		iVar60 = 0;
		iVar61 = 0;
		while (iVar61 < &Global_1898329)
		{
			if (!func_67(Global_1898330[iVar61]))
			{
			}
			else
			{
				iVar62 = func_90(Global_1898330[iVar61]);
				if (iVar62 == 3 || iVar62 == 4)
				{
				}
				else if (iVar62 != 1 && iVar62 != 2)
				{
					func_737(Global_1898330[iVar61]);
				}
				else
				{
					func_738(iVar61, 0);
					if (func_91(Global_1898330[iVar61]) == 1)
					{
						iVar9[iVar60] = func_92(Global_1898330[iVar61]);
						iVar60++;
						if (iVar60 >= 50)
						{
						}
						else
						{
							iVar61++;
						}
						if (iVar60 < 50)
						{
							iVar63 = 0;
							while (iVar63 < Global_40.f_450)
							{
								if (&Global_40.f_450[iVar63] > -1 && &Global_40.f_450[iVar63] < 200)
								{
									iVar9[iVar60] = func_92(((*Global_1347702)[&Global_40.f_450[iVar63] /*49*/])->f_15);
									iVar60++;
									if (iVar60 >= 50)
									{
									}
									else
									{
										iVar63++;
									}
									if (fVar0 > fVar8)
									{
										TELEMETRY::_0x51EC204A6E5B5A1A(func_92(&Global_1898437), &iVar9);
									}
								}
							}
						}
					}
				}
			}
		}
	}

bool func_289(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_290(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_291(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_292(int iParam0)
{
	int iVar0;

	iVar0 = func_293(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_739(iVar0);
}

int func_293(int iParam0)
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

int func_294(int iParam0)
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

int func_295(var uParam0)
{
	return uParam0 & 31;
}

int func_296(int iParam0, int iParam1)
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
			func_740(iVar2);
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

void func_297()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

int func_298(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;

	Var0 = *uParam0;
	Var0.f_2 = 223399367;
	Var0.f_3 = func_741(iParam1);
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 1487863141;
		DATAFILE::_DATAFILE_GET_INT(iParam2, &Var0);
		Var0.f_2 = -766247814;
		DATAFILE::_DATAFILE_GET_INT(&(iParam2->f_1), &Var0);
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_299(var uParam0, char* sParam1)
{
	char* sVar0;

	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(Global_1934266->f_78, sParam1);
	uParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "showMessage", 0);
	if (func_145() == 24043185)
	{
		sVar0 = "LAW_UI_WANTED_F";
	}
	else
	{
		sVar0 = "LAW_UI_WANTED_M";
	}
	uParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "upperLocText", sVar0);
	uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "upperTextStyle", 0);
	uParam0->f_4 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "lowerText0", "");
	uParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "lowerText1", "");
	uParam0->f_6 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "lowerText2", "");
	uParam0->f_7 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "lowerText3", "");
	uParam0->f_8 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "lowerRawText0", "");
	uParam0->f_9 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "lowerRawText1", "");
	uParam0->f_10 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "lowerRawText2", "");
	uParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "lowerRawText3", "");
	uParam0->f_12 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "switchLowerTextToIndex", 0);
	uParam0->f_13 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "showKnownPulse", 0);
	uParam0->f_14 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "showUnknownPulse", 0);
	uParam0->f_16 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "showShortWantedCooldown", 0);
	uParam0->f_17 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "showLongWantedCooldown", 0);
	uParam0->f_15 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "showWarningAnimation", 0);
}

void func_300(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::CLEAR_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

int func_301(int iParam0)
{
	int iVar0;

	if (func_742(iParam0, &iVar0))
	{
		return func_743(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_157())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 0:
			if (func_157())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		case 2:
			if (func_157())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 4:
			return 0;
	}
	return 0;
}

void func_302(int iParam0, int iParam1, var uParam2)
{
	if ((&Global_40.f_11095.f_11[iParam0] <= 0f || uParam2) && !PED::IS_PED_INJURED(Global_35))
	{
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iParam1);
		Global_40.f_11095.f_11[iParam0] = BUILTIN::TO_FLOAT(iParam1);
	}
}

int func_303(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_40.f_7862[iParam0 /*4*/])->f_2;
	}
	return (Global_42605[iParam0 /*4*/])->f_2;
}

Vector3 func_304(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;

	iVar3 = iParam0 & 32767;
	iVar4 = BUILTIN::SHIFT_RIGHT(iParam0, 15) & 32767;
	vVar0.x = BUILTIN::TO_FLOAT(iVar3);
	vVar0.f_1 = BUILTIN::TO_FLOAT(iVar4);
	if (iParam0 & 1073741824 == 0)
	{
		vVar0.x = (vVar0.x * -1f);
	}
	if (iParam0 & -2147483648 == 0)
	{
		vVar0.f_1 = (vVar0.y * -1f);
	}
	return vVar0;
}

int func_305(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return -678244495;
		case 1:
			return -678244495;
		case 2:
			return -678244495;
		case 4:
			return -678244495;
		case 5:
			return -678244495;
		case 6:
			return -678244495;
		case 7:
			return -678244495;
		case 8:
			return -678244495;
		case 9:
			return -678244495;
		case 10:
			return -678244495;
		case 11:
			return -678244495;
		case 12:
			return -678244495;
		case 14:
			return -936216634;
		case 13:
			return -936216634;
		case 15:
			return -936216634;
		case 16:
			return -936216634;
		case 17:
			return -936216634;
		case 18:
			return -936216634;
		case 19:
			return -936216634;
		case 20:
			return 168093330;
		case 21:
			return 168093330;
		case 22:
			return 168093330;
		case 23:
			return 168093330;
		case 24:
			return 168093330;
		case 25:
			return 168093330;
		case 26:
			return 168093330;
		case 28:
			return 168093330;
		case 29:
			return 168093330;
		case 33:
			return 168093330;
		case 34:
			return 168093330;
		case 30:
			return 168093330;
		case 32:
			return 168093330;
		case 31:
			return 168093330;
		case 41:
			return 168093330;
		case 42:
			return 168093330;
		case 35:
			return 168093330;
		case 36:
			return 168093330;
		case 37:
			return 168093330;
		case 38:
			return 168093330;
		case 39:
			return 168093330;
		case 27:
			return 168093330;
		case 45:
			return 168093330;
		case 40:
			return 168093330;
		case 43:
			return 168093330;
		case 44:
			return 168093330;
		case 46:
			return -972966383;
		case 47:
			return -972966383;
		case 48:
			return -972966383;
		case 49:
			return -678244495;
		case 50:
			return -678244495;
		case 51:
			return -678244495;
		case 52:
			return 1560611276;
		case 53:
			return -494978356;
		case 54:
			return -494978356;
		case 55:
			return -494978356;
		case 56:
			return -494978356;
		case 57:
			return -507182222;
		case 58:
			return -1337945352;
		case 59:
			return -678244495;
		case 60:
			return -678244495;
		case 61:
			return -678244495;
		case 62:
			return -383696203;
		default:
			break;
	}
	return 0;
}

int func_306(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 1243830185;
		case 1:
			return 595820042;
		case 2:
			return -1650465405;
		case 4:
			return 1974815632;
		case 5:
			return 1078668923;
		case 6:
			return 552659337;
		case 7:
			return -1179229323;
		case 8:
			return -1581061148;
		case 9:
			return -48718882;
		case 10:
			return -379108622;
		case 11:
			return 1015604260;
		case 12:
			return 126262516;
		case 14:
			return -997121570;
		case 13:
			return 423351566;
		case 16:
			return -1636832113;
		case 17:
			return 1012165077;
		case 18:
			return -250506368;
		case 19:
			return 2033397166;
		case 20:
			return 1475879922;
		case 21:
			return 531267562;
		case 22:
			return 249721687;
		case 23:
			return -145868367;
		case 24:
			return -1989306548;
		case 25:
			return -1739686743;
		case 26:
			return 1195729388;
		case 28:
			return -758970771;
		case 29:
			return 1542275196;
		case 33:
			return 1861010125;
		case 34:
			return 1475382911;
		case 30:
			return 103490298;
		case 31:
			return -2090472724;
		case 32:
			return -1665418949;
		case 35:
			return -852241114;
		case 36:
			return -1406874050;
		case 37:
			return 1938782895;
		case 38:
			return -1456209806;
		case 39:
			return 469827317;
		case 27:
			return 1879260108;
		case 40:
			return 587827268;
		case 41:
			return 819673798;
		case 42:
			return 819673798;
		case 43:
			return -211556852;
		case 44:
			return 1364029453;
		case 45:
			return -73168905;
		case 46:
			return 1586273744;
		case 47:
			return -1498696713;
		case 48:
			return 1586273744;
		case 49:
			return 503049244;
		case 50:
			return 305594522;
		case 51:
			return -417940443;
		case 52:
			return -1606321000;
		case 53:
			return 1904459580;
		case 54:
			return -1989725258;
		case 55:
			return -487631996;
		case 56:
			return -1944395098;
		case 57:
			return -428972082;
		case 58:
			return 1586273744;
		case 59:
			return -1575595762;
		case 60:
			return -417940443;
		case 61:
			return -417940443;
		case 62:
			return -1258576797;
		default:
			break;
	}
	return 0;
}

var func_307(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || BUILTIN::SHIFT_LEFT(iParam0 & 1023, 5)) || BUILTIN::SHIFT_LEFT(iParam1 & 16383, 15));
}

int func_308(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	int iVar1;

	if (!func_744(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_88())
	{
		return -1;
	}
	uVar0 = func_307(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_94(iVar1, 0);
	func_745(iVar1, 0);
	func_746(iVar1, 0);
	func_747(iVar1, 0);
	func_748(iVar1, uVar0);
	if (iParam4 != 0)
	{
		func_749(iVar1, iParam4);
	}
	return iVar1;
}

int func_309(int iParam0)
{
	if (!func_67(iParam0))
	{
		return -1;
	}
	return func_750(func_294(iParam0));
}

char* func_310(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "None";
		case 1:
			return "Story";
		case 2:
			return "Procedural";
		case 3:
			return "Location";
		case 4:
			return "Minigame";
		case 5:
			return "Hideout";
		case 6:
			return "Job";
		case 7:
			return "Beat";
		case 9:
			return "SpecialPed";
		case 11:
			return "CompanionActivity";
		case 8:
			return "RCM";
		case 10:
			return "Versus";
		case 12:
			return "Free Mode Activity";
	}
	return "Unknown";
}

void func_311(bool bParam0)
{
	if (&Global_1879534 == bParam0)
	{
		return;
	}
	Global_1879534 = bParam0;
	TELEMETRY::_0xEC0BD8736DCAF841(bParam0);
	if (func_17(32768) && !bParam0)
	{
		if (Global_1879534->f_7301.f_1)
		{
			Global_1879534->f_7301.f_1 = 0;
		}
		if (Global_1879534->f_1)
		{
			Global_1879534->f_1 = 0;
		}
	}
}

int func_312(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	bVar4 = func_28() == -1;
	if (bVar4)
	{
		bVar3 = bParam1;
	}
	else
	{
		bVar3 = func_564(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1);
	}
	if (!func_346(&Global_1898439, 1024))
	{
		func_751();
		func_752(Global_1898439, 1024);
		if (bParam3)
		{
			return 0;
		}
	}
	iVar2 = (&Global_1898329 - 1);
	while (iVar2 >= 0)
	{
		if (func_67(Global_1898330[iVar2]) && func_753(Global_1898330[iVar2]))
		{
			if (Global_1898330[iVar2] == Global_1392581->f_1)
			{
				Jump @578; //curOff = 140
			}
			else if (!func_754(iVar2, 1024))
			{
				func_738(iVar2, 0);
				switch (((*Global_1898346)[iVar2 /*6*/])->f_3)
				{
					case 1:
						if (!((*Global_1835011)[iVar0 /*74*/])->f_71)
						{
							iVar0 = ((*Global_1898346)[iVar2 /*6*/])->f_4;
							if (func_755(iVar0))
							{
								if (!bParam1)
								{
									func_756(iVar0, 0);
								}
								func_757(iVar0, -1, bVar3, 1, 1, 0, 0);
								func_758(iVar0);
								if (bVar3 && !func_759((*Global_1835011)[iVar0 /*74*/], 32768))
								{
									func_760((*Global_1835011)[iVar0 /*74*/], 32768);
									if ((iVar0 == 7 || iVar0 == 17) && Global_1894899->f_2 == ((*Global_1835011)[iVar0 /*74*/])->f_21)
									{
										((*Global_1835011)[iVar0 /*74*/])->f_64 = func_261();
									}
								}
								if (bParam3)
								{
									return 0;
								}
							}
						}
						break;
					case 6:
						iVar5 = ((*Global_1898346)[iVar2 /*6*/])->f_4;
						if (iVar5 == 0 && func_28() == -1)
						{
							iVar6 = ((*Global_1898346)[iVar2 /*6*/])->f_5;
							if ((*Global_1392626)[iVar6 /*32*/])->f_3 != func_761(0)
							{
								if (bVar3)
								{
									func_762(iVar6, 0, 0);
								}
								else
								{
									func_762(iVar6, 1, 0);
								}
								if (func_753(((*Global_1392626)[iVar6 /*32*/])->f_3))
								{
									func_737(((*Global_1392626)[iVar6 /*32*/])->f_3);
								}
								if (bParam3)
								{
									return 0;
								}
							}
						}
						break;
					case 2:
						if (MAP::DOES_BLIP_EXIST(Global_1898346[iVar2 /*6*/]))
						{
							MAP::REMOVE_BLIP((*Global_1898346)[iVar2 /*6*/]);
						}
						break;
					default:
						if (MAP::DOES_BLIP_EXIST(Global_1898346[iVar2 /*6*/]))
						{
							MAP::REMOVE_BLIP((*Global_1898346)[iVar2 /*6*/]);
						}
						break;
				}
			}
		}
		iVar2 = (iVar2 + -1);
	}
	if (bVar4)
	{
		if (!func_346(&Global_1898439, 8192))
		{
			if (bVar3 && !Global_43890)
			{
				func_763(16384);
			}
			else
			{
				func_764();
			}
			func_752(Global_1898439, 8192);
		}
		iVar7 = 0;
		while (iVar7 < Global_40.f_450)
		{
			iVar1 = &Global_40.f_450[iVar7];
			if (func_242(iVar1) && Global_1347702[iVar1 /*49*/] != 45)
			{
				if (func_765(((*Global_1347702)[iVar1 /*49*/])->f_13, 256))
				{
				}
				else if ((*Global_1347702)[iVar1 /*49*/])->f_15 != func_761(0)
				{
					if (func_766(0) == 1 || func_766(0) == 8)
					{
						func_767(iVar1, 1, 0, 1, 32);
					}
					else
					{
						func_768(iVar1, 0);
					}
					if (func_753(((*Global_1347702)[iVar1 /*49*/])->f_15))
					{
						func_737(((*Global_1347702)[iVar1 /*49*/])->f_15);
					}
				}
				func_769(&(((*Global_1347702)[iVar1 /*49*/])->f_13), 2);
			}
			iVar7++;
		}
	}
	func_770();
	if (bParam2)
	{
		func_771();
	}
	func_772();
	func_773();
	return 1;
}

void func_313()
{
	struct<60> Var0;
	int iVar60;

	Var0.f_8.f_1 = -15;
	Var0.f_11 = 10;
	Var0.f_11.f_1.f_1 = -15;
	Var0.f_11.f_1.f_3.f_1 = -15;
	Var0.f_11.f_1.f_3.f_3.f_1 = -15;
	Var0.f_11.f_1.f_3.f_3.f_3.f_1 = -15;
	Var0.f_11.f_1.f_3.f_3.f_3.f_3.f_1 = -15;
	Var0.f_11.f_1.f_3.f_3.f_3.f_3.f_3.f_1 = -15;
	Var0.f_11.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -15;
	Var0.f_11.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -15;
	Var0.f_11.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -15;
	Var0.f_11.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -15;
	Var0.f_42 = -1;
	Var0.f_43 = -15;
	Var0.f_45 = -15;
	Var0.f_46 = -15;
	Var0.f_47 = -15;
	Var0.f_48 = -15;
	Var0.f_50 = -15;
	iVar60 = 0;
	while (iVar60 < 27)
	{
		*(Global_40.f_4942[iVar60 /*60*/]) = { Var0 };
		iVar60++;
	}
}

void func_314()
{
	MISC::_COPY_MEMORY(&Global_20709, Global_2714652, 2408);
}

void func_315()
{
	int iVar0;
	struct<11> Var1;

	Var1.f_1 = -15;
	Var1.f_2 = -15;
	Var1.f_4 = -1;
	Var1.f_4.f_4 = -15;
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 150)
		{
			*(Global_23117[iVar0 /*11*/]) = { Var1 };
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 150)
		{
			*(Global_1058888->f_40615[iVar0 /*11*/]) = { Var1 };
			iVar0++;
		}
	}
}

void func_316(var uParam0, int iParam1)
{
	func_312(0, 0, 1, 0);
	func_774();
	func_775();
	func_6(1);
	func_776();
	func_22();
	if (iParam1 == -1)
	{
		if (!func_35() || uParam0)
		{
			func_777(((*Global_1835011)[0 /*74*/])->f_1, 0, 0, 0, 1);
		}
		else
		{
			MAP::_0xDA98246C7A3C2189(-1753910767);
		}
	}
}

void func_317()
{
	func_778();
	func_779();
	func_315();
}

void func_318(bool bParam0, int iParam1)
{
	bool bVar0;

	if (func_780())
	{
		if (func_781(255))
		{
			if (!func_782(36, 255))
			{
				return;
			}
		}
	}
	bVar0 = bParam0;
	if (!bParam0)
	{
		if (func_126(Global_1894899->f_2) && func_176(Global_1894899->f_2))
		{
			func_783(Global_1894899->f_2, 0);
			if (iParam1 != 0)
			{
				Global_1894899->f_7 = iParam1;
				func_784(16);
			}
		}
		else if (func_126(Global_1894899->f_2) && !func_177(Global_1894899->f_2, 2))
		{
			bParam0 = true;
		}
	}
	if (bParam0)
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
		}
		Global_1894899->f_7 = 0;
		func_785(16);
		func_786();
		if (bVar0)
		{
			func_785(1);
		}
	}
}

void func_319(int iParam0)
{
	PLAYER::_0x77E83C315A3B31CA(PLAYER::GET_PLAYER_INDEX());
	if (iParam0 == -1)
	{
		func_787();
		func_788();
		func_789();
		func_790();
		func_791();
		func_792();
		func_793();
		func_794();
		func_795();
		func_796();
		func_797();
		func_798(1);
		PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -944777689);
	}
	func_104();
	func_799();
}

void func_320(int iParam0)
{
	if (iParam0 == -1)
	{
		func_49();
	}
	else
	{
		func_800();
	}
}

void func_321()
{
	_NAMESPACE48::_0x8BC555034A5A5E8C(230221572, joaat("a_c_horse_gang_charles"));
	_NAMESPACE48::_0x8BC555034A5A5E8C(948152617, joaat("a_c_horse_gang_sadie"));
	_NAMESPACE48::_0x8BC555034A5A5E8C(404801781, 1760888205);
	(Global_40.f_4942[7 /*60*/])->f_7 = 0;
	(Global_40.f_4942[11 /*60*/])->f_7 = 0;
	(Global_40.f_4942[4 /*60*/])->f_7 = 0;
}

void func_322(int iParam0)
{
	if (iParam0 == -1)
	{
		func_801();
	}
	else
	{
		func_802();
	}
}

void func_323()
{
	func_803();
	func_804(0);
	if (func_28() == -1)
	{
		func_805(!func_35());
	}
	func_806();
	func_807();
	Global_40.f_7854 = 0;
	Global_40.f_7855 = 0;
	Global_40.f_7856 = 0;
	func_808();
	if (Global_40)
	{
		func_809();
	}
	AUDIO::_0x3E93DDDCBB6111E4("RDR3.BattleSeqIndex", 0f);
}

void func_324()
{
	HUD::_JORUNAL_CLEAR_ALL_PROGRESS();
	func_810();
}

void func_325()
{
	if (func_28() == 0)
	{
		return;
	}
	else
	{
		func_811();
		func_812();
	}
}

void func_326()
{
	if (func_28() != -1)
	{
		return;
	}
	Global_40.f_4283.f_328 = -15;
	Global_40.f_4283.f_329 = -15;
	Global_40.f_4283.f_331 = -15;
	Global_40.f_4283.f_332[0] = -1;
	Global_40.f_4283.f_332[1] = -1;
	func_813(Global_40.f_4283.f_440[0 /*63*/]);
	func_813(Global_40.f_4283.f_440[1 /*63*/]);
	func_814(0, 711);
}

void func_327(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 > 4)
	{
		iParam0 = 4;
	}
	if (iParam0 < 1)
	{
		iParam0 = 1;
	}
	if (iParam1 == 16)
	{
		Global_40.f_4283.f_312 = iParam0;
		iVar0 = 0;
		while (iVar0 < 17)
		{
			func_815(iVar0, iParam0);
			iVar0++;
		}
	}
	else
	{
		func_815(iParam1, iParam0);
	}
}

void func_328()
{
	vector3 vVar0;
	int iVar5;
	var uVar6;

	vVar0 = 176656832;
	vVar0.f_1 = -15;
	vVar0.f_2 = 1017034651;
	iVar5 = 0;
	while (iVar5 < 60)
	{
		MISC::_COPY_MEMORY(Global_40.f_4283.f_6[iVar5 /*5*/], &vVar0, 5);
		iVar5++;
	}
	iVar5 = 0;
	while (iVar5 < 17)
	{
		Global_1357549->f_1848[iVar5] = 0;
		iVar5++;
	}
	iVar5 = 0;
	while (iVar5 < 50)
	{
		MISC::_COPY_MEMORY(Global_1357549->f_1252[iVar5 /*3*/], &uVar6, 3);
		iVar5++;
	}
	Global_1357549->f_1403 = 0;
	Global_1357549->f_1404 = 0;
	Global_1357549->f_1405 = 0;
	Global_1357549->f_1406 = 0;
	Global_1359453 = 0;
}

void func_329(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
	uParam0->f_5 = { func_816() };
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	uParam0->f_3 = 0;
	if (CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() != 2000)
	{
		CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
	}
}

void func_330()
{
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_CAMP_COLTER", false, true);
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_CAMP_HORSESHOE_OVERLOOK", false, true);
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_camp_clemens_point", false, true);
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_camp_shady_belle", false, true);
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_camp_beaver_hollow", false, true);
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_camp_pronghorn_ranch", false, true);
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_pronghorn_ranch", false, true);
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_camp_beechers_hope", false, true);
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_beechers_hope", false, true);
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Camp_Lakay", false, true);
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Camp_Guarma", false, true);
	AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_camp_dark_mood_zone", false, true);
}

void func_331(bool bParam0)
{
	if (ANIMSCENE::_0x25557E324489393C(Global_43799))
	{
		if (ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(Global_43799))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(Global_43799);
		}
	}
	Global_43799 = -1;
	StringCopy(&Global_43801, "", 24);
	Global_16 = 0;
	if (bParam0)
	{
		func_817();
	}
	PAD::_0xA0CEFCEA390AAB9B(0);
}

int func_332()
{
	if (func_818(-524145696))
	{
		if (func_819(809554858))
		{
			return 1;
		}
		func_820(-524145696);
	}
	if (func_818(-1223121209))
	{
		if (func_819(-451832572))
		{
			return 1;
		}
		func_820(-1223121209);
	}
	if (func_818(-1053549743))
	{
		if (func_819(1033721560) || func_822(func_821(105), Global_36))
		{
			return 1;
		}
		func_820(-1053549743);
	}
	if (func_818(1649996811))
	{
		if (func_819(197447134))
		{
			return 1;
		}
		func_820(1649996811);
	}
	if (func_818(1478132521))
	{
		if (func_823(398639187, 1120403456))
		{
			return 1;
		}
		func_820(1478132521);
	}
	return 0;
}

void func_333(int iParam0)
{
	if (!STREAMING::_IS_IMAP_ACTIVE(iParam0))
	{
		STREAMING::_REQUEST_IMAP(iParam0);
	}
}

void func_334(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::SET_BIT(Global_1934765->f_21[iVar1], iVar2);
}

void func_335()
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
	int iVar9;

	if (!func_125(45))
	{
		if (Global_1934765->f_290)
		{
			MAP::_0xE057FEA9A22EB3EE(1253225952);
			MAP::_0xE057FEA9A22EB3EE(1483100487);
			MAP::_0xE057FEA9A22EB3EE(-1323466060);
			MAP::_0xE057FEA9A22EB3EE(346317463);
			Global_1934765->f_290 = 0;
		}
		if (Global_1934765->f_292)
		{
			MAP::_0xE057FEA9A22EB3EE(346317463);
			Global_1934765->f_292 = 0;
		}
		if (!Global_1934765->f_291 && func_381(38))
		{
			MAP::_0x1392105DA88BBFFB(577490767, -811f, -1212.5f, 0, 0);
			Global_1934765->f_291 = 1;
		}
		func_342(-37875204);
		func_342(258104717);
		func_342(-76700394);
		func_342(1614255891);
		func_342(1861460906);
		func_342(1044079550);
		func_358("nav_shack_BA");
		func_333(-1079295176);
		func_333(894787561);
		func_342(-1276109918);
		func_342(-1386423483);
		func_342(-1405375965);
		func_342(1277540472);
		func_342(-1331593143);
		func_342(1133172356);
		func_342(-559257162);
		func_358("nav_shack_BB");
		func_333(979670262);
		func_333(418666411);
		func_333(651621232);
		func_342(-574996782);
		func_342(1169511062);
		func_342(-1266106154);
		func_342(-1377975054);
		func_342(897624424);
		func_342(-2111718052);
		func_358("nav_shack_BC");
		func_333(-165202905);
		func_333(-1327148782);
		func_333(-1965378386);
		func_342(175578406);
		func_342(-686953321);
		func_342(-1737485501);
		func_342(-739754595);
		func_342(942470447);
		func_342(-1859413313);
		func_342(489834626);
		func_333(-1667265438);
		func_333(54029413);
		func_333(-1070234238);
		func_333(-931280709);
		func_333(-1170563128);
		func_333(1394163483);
		func_358("nav_std_train_station_es");
		func_342(-5339556);
		func_342(1258244391);
		func_342(1343343014);
		func_342(-2082201137);
		func_342(1641449717);
		func_342(739412171);
		func_342(-501793326);
		func_342(466168676);
		func_342(1479152994);
		func_358("nav_blackwater_endless_summer");
		func_333(1173561253);
		func_333(1470738186);
		func_333(-1632348233);
		func_342(903666582);
		func_333(1081087978);
		func_358("nav_val_es");
		func_358("nav_val_es_saloon_lockdown");
		func_358("nav_val_es_full_lockdown");
		func_342(-1509154451);
		func_333(1517736440);
		func_333(-693132475);
		func_358("nav_annesburg_es");
		func_342(158063004);
		func_358("nav_coots_graves");
		func_342(-1112373128);
		func_342(-891994084);
		func_342(-84516711);
		func_342(-657241692);
		func_333(1596089211);
		func_333(-2133417899);
		func_333(1274804496);
		func_333(1597665303);
		func_333(116162819);
		func_358("nav_cornwall_es");
		AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Cornwall_K_and_T_Endless_Summer", false, true);
		AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Cornwall_K_and_T_Normal", true, true);
		AUDIO::SET_STATIC_EMITTER_ENABLED("SE_Cornwall_Kerosene_And_Tar_Ambient_Emitter", true);
		iVar0 = func_824(2087609309);
		if (!GRAPHICS::_0x113857D66A9CABE6(iVar0))
		{
			GRAPHICS::_0xBFCB17895BB99E4E(iVar0, true);
		}
		func_342(-1380983970);
		func_342(-1912028958);
		func_333(563944718);
		func_358("nav_bridge_to_old_world");
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(1883691509))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1883691509, true);
		}
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(-1647292773))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1647292773, true);
		}
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(-824533183))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-824533183, true);
		}
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(-619084588))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-619084588, true);
		}
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(672230639))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(672230639, true);
		}
		if (func_28() == -1)
		{
			if (func_825(56, &iVar2, &iVar3, 0, 0))
			{
				iVar1 = 0;
				while (iVar1 < (iVar3 - iVar2) + 1)
				{
					func_348((iVar2 + iVar1), 32);
					iVar1++;
				}
			}
			if (func_825(65, &iVar2, &iVar3, 0, 0))
			{
				iVar1 = 0;
				while (iVar1 < (iVar3 - iVar2) + 1)
				{
					func_348((iVar2 + iVar1), 32);
					iVar1++;
				}
			}
			if (!func_610(0, 0, 1))
			{
				func_348(944, 32);
				func_348(940, 32);
			}
			func_826(41788943);
			iVar4 = 0;
			while (iVar4 < 13)
			{
				func_828(iVar4, func_827(iVar4));
				iVar4++;
			}
		}
	}
	else
	{
		if (!Global_1934765->f_290)
		{
			MAP::_0x1392105DA88BBFFB(1253225952, -1550f, 250f, 0, 0);
			MAP::_0x1392105DA88BBFFB(1483100487, 1440f, -1580f, 0, 0);
			MAP::_0x1392105DA88BBFFB(-1323466060, 1770f, 480f, 0, 0);
			Global_1934765->f_290 = 1;
		}
		if (!Global_1934765->f_292)
		{
			MAP::_0x1392105DA88BBFFB(346317463, -811f, -1212.5f, 0, 0);
			Global_1934765->f_292 = 1;
		}
		if (Global_1934765->f_291)
		{
			MAP::_0xE057FEA9A22EB3EE(577490767);
			Global_1934765->f_291 = 0;
		}
		func_333(-37875204);
		func_333(258104717);
		func_333(-76700394);
		func_333(1614255891);
		func_333(1861460906);
		func_333(1044079550);
		func_356("nav_shack_BA");
		func_342(-1079295176);
		func_342(894787561);
		func_333(-1276109918);
		func_333(-1386423483);
		func_333(-1405375965);
		func_333(1277540472);
		func_333(-1331593143);
		func_333(1133172356);
		func_333(-559257162);
		func_356("nav_shack_BB");
		func_342(979670262);
		func_342(418666411);
		func_342(651621232);
		func_333(-574996782);
		func_333(1169511062);
		func_333(-1266106154);
		func_333(-1377975054);
		func_333(-2111718052);
		func_333(897624424);
		func_356("nav_shack_BC");
		func_342(-165202905);
		func_342(-1327148782);
		func_342(-1965378386);
		func_342(-1667265438);
		func_342(54029413);
		func_342(-1070234238);
		func_342(-931280709);
		func_342(-1170563128);
		func_342(1394163483);
		func_333(175578406);
		func_333(489834626);
		func_333(-686953321);
		func_333(-1737485501);
		func_333(-739754595);
		func_333(942470447);
		func_333(-1859413313);
		func_356("nav_std_train_station_es");
		func_342(1173561253);
		func_342(1470738186);
		func_342(-1632348233);
		func_333(-5339556);
		func_333(1258244391);
		func_333(1343343014);
		func_333(-2082201137);
		func_333(1641449717);
		func_333(739412171);
		func_333(-501793326);
		func_333(466168676);
		func_333(1479152994);
		func_356("nav_blackwater_endless_summer");
		func_342(1081087978);
		func_333(903666582);
		if (func_340(-1215445344))
		{
			func_358("nav_val_saloon_lockdown");
			func_358("nav_val_full_lockdown");
			func_358("nav_val_es_saloon_lockdown");
			func_358("nav_val_es");
			func_356("nav_val_es_full_lockdown");
		}
		else if (func_340(-1763509974))
		{
			func_358("nav_val_saloon_lockdown");
			func_358("nav_val_full_lockdown");
			func_358("nav_val_es_full_lockdown");
			func_358("nav_val_es");
			func_356("nav_val_es_saloon_lockdown");
		}
		else
		{
			func_358("nav_val_saloon_lockdown");
			func_358("nav_val_full_lockdown");
			func_358("nav_val_es_saloon_lockdown");
			func_358("nav_val_es_full_lockdown");
			func_356("nav_val_es");
		}
		func_342(1517736440);
		func_342(-693132475);
		func_333(-1509154451);
		func_356("nav_annesburg_es");
		func_333(158063004);
		func_356("nav_coots_graves");
		func_342(1596089211);
		func_342(-2133417899);
		func_342(1274804496);
		func_342(1597665303);
		func_342(116162819);
		func_333(-1112373128);
		func_333(-891994084);
		func_333(-84516711);
		func_333(-657241692);
		func_356("nav_cornwall_es");
		AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Cornwall_K_and_T_Endless_Summer", true, true);
		AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Cornwall_K_and_T_Normal", false, true);
		AUDIO::SET_STATIC_EMITTER_ENABLED("SE_Cornwall_Kerosene_And_Tar_Ambient_Emitter", false);
		iVar5 = func_824(2087609309);
		if (GRAPHICS::_0x113857D66A9CABE6(iVar5))
		{
			GRAPHICS::_0xBFCB17895BB99E4E(iVar5, false);
		}
		func_333(-1380983970);
		func_342(563944718);
		func_333(-1912028958);
		func_356("nav_bridge_to_old_world");
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(1883691509))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1883691509, false);
		}
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(-1647292773))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1647292773, false);
		}
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(-824533183))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-824533183, false);
		}
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(-619084588))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-619084588, false);
		}
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(672230639))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(672230639, false);
		}
		if (func_28() == -1)
		{
			if (func_825(56, &iVar7, &iVar8, 0, 0))
			{
				iVar6 = 0;
				while (iVar6 < (iVar8 - iVar7) + 1)
				{
					func_349((iVar7 + iVar6), 32);
					iVar6++;
				}
			}
			if (func_825(65, &iVar7, &iVar8, 0, 0))
			{
				iVar6 = 0;
				while (iVar6 < (iVar8 - iVar7) + 1)
				{
					func_349((iVar7 + iVar6), 32);
					iVar6++;
				}
			}
			func_349(944, 32);
			func_349(940, 32);
			func_826(1689938120);
			iVar9 = 0;
			while (iVar9 < 13)
			{
				func_828(iVar9, func_829(iVar9));
				iVar9++;
			}
		}
	}
}

void func_336()
{
	if (func_272(38))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("CIG_CARDS_LOCKED", true);
	}
	else
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("CIG_CARDS_LOCKED", false);
	}
	if (func_830())
	{
		func_831(56);
	}
	else
	{
		func_832(56);
	}
	if (func_125(44))
	{
		func_831(105);
		func_831(95);
	}
	else
	{
		func_832(105);
		func_832(95);
	}
	if (func_833(105))
	{
		func_834(func_110(105));
	}
	else if (func_835(105))
	{
		func_836(105);
	}
	if (func_833(95))
	{
		func_834(func_110(95));
	}
	else if (func_835(95))
	{
		func_836(95);
	}
	func_342(481636996);
	func_334(212);
	func_334(211);
	func_334(213);
	func_334(214);
	func_334(215);
	func_334(216);
	func_334(217);
	func_334(218);
	func_334(219);
	func_334(220);
	func_334(221);
	func_334(222);
	func_334(223);
	func_334(224);
	func_334(225);
	func_333(1454866069);
	func_333(-383442850);
	func_333(531960211);
	func_333(1020450527);
	func_333(-2041779893);
	func_333(1123990218);
	func_333(1557698400);
	func_333(2116024182);
	func_333(-1141831946);
	func_333(-1111286486);
	func_333(-1017701936);
	func_333(107317036);
	func_333(1193229750);
	func_333(1492183352);
	func_333(2123010634);
	func_333(-1664053323);
	func_333(-1375030991);
	func_333(-313992757);
	func_334(205);
	func_334(206);
	func_334(207);
	func_334(208);
	func_334(209);
	func_334(210);
	func_333(-1176501741);
	if (!func_369(44))
	{
		func_334(26);
	}
	else
	{
		func_343(26);
	}
	func_357(1121239638, 1);
	func_357(-1677757270, 1);
	func_357(906662604, 1);
	func_357(-310410837, 1);
	func_343(185);
	func_334(184);
	func_333(642301973);
	func_342(1260721433);
	func_837();
}

void func_337()
{
	Global_1934765 = &Global_1934765 + 1;
}

void func_338()
{
	int iVar0;

	func_838();
	if (func_28() == 0)
	{
		func_333(-1253110600);
		func_333(-1402083909);
	}
	iVar0 = -1;
	if (func_340(704802028))
	{
		func_333(-1012618146);
		func_333(-722030448);
		func_356("nav_mesh_beech_shack");
		func_333(-1253110600);
		func_333(-1402083909);
		func_333(1970695826);
		func_333(-382865315);
		func_333(-904669171);
		func_333(774601424);
		func_333(-584332967);
		func_333(-1615103170);
		func_333(1256771838);
		func_333(-1765152778);
		func_333(-2072231077);
		func_333(19217583);
	}
	else if (func_340(588987611))
	{
		func_333(-1012618146);
		func_333(-722030448);
		func_333(1757739778);
		func_356("nav_mesh_beech_shack_with_fire");
		func_333(578474998);
		func_333(-1253110600);
		func_333(-1402083909);
		func_333(1970695826);
		func_333(-382865315);
	}
	else if (func_340(2008888900))
	{
		func_333(-1012618146);
		func_333(1757739778);
		func_356("nav_mesh_beech_shack_with_fire");
		func_333(197447134);
		func_333(578474998);
		func_333(-1253110600);
		func_333(-1402083909);
		func_333(1970695826);
		func_333(-382865315);
		func_342(-722030448);
	}
	else if (func_340(1649996811))
	{
		func_333(197447134);
		func_356("nav_mesh_beech_camp_with_rubble");
		func_333(578474998);
		func_333(-1253110600);
		func_333(-1402083909);
		func_333(1970695826);
		func_333(-382865315);
		func_333(2111816145);
	}
	else if (func_340(227918160))
	{
		func_333(197447134);
		func_333(-1253110600);
		func_333(-1402083909);
		func_333(1970695826);
		func_333(-382865315);
		func_333(578474998);
		func_356("nav_mesh_beech_camp_with_supplies");
	}
	else if (func_340(168171957))
	{
		func_333(197447134);
		func_333(-1667461262);
		func_333(-974480336);
		func_333(411742897);
		func_333(1344772301);
		func_333(1467774743);
		func_333(43335376);
		func_356("nav_mesh_beech_house_finished");
		func_333(-284612948);
		func_333(-1325016116);
		func_333(578474998);
		func_334(111);
		func_334(116);
		func_334(100);
		func_334(101);
	}
	else if (func_340(1193080109))
	{
		func_333(-1667461262);
		func_333(411742897);
		func_333(1344772301);
		func_333(1467774743);
		func_333(-956131204);
		func_333(578474998);
		func_333(43335376);
		func_333(1353861354);
		func_333(1205945639);
		func_356("nav_mesh_beech_barn_finished");
		func_333(-284612948);
		func_333(431365499);
		func_333(276582710);
		func_333(1191890045);
		func_333(1864768904);
		func_333(-692583342);
		func_333(-918785150);
		func_334(116);
		func_334(100);
		func_334(102);
		func_334(103);
		if (func_32(75) && !func_839(119))
		{
			func_334(118);
		}
		else
		{
			func_343(118);
		}
		func_334(104);
		func_334(105);
		func_334(111);
		if (func_839(108))
		{
			func_343(107);
		}
		else
		{
			func_334(107);
		}
	}
	else if (func_340(-639037538))
	{
		func_333(-1667461262);
		func_333(411742897);
		func_333(1467774743);
		func_333(-956131204);
		func_333(1353861354);
		func_356("nav_mesh_beech_house_decor");
		func_333(578474998);
		func_333(1236917971);
		func_333(43335376);
		func_333(-284612948);
		func_333(-2090209059);
		func_333(1977031606);
		func_333(1929454697);
		func_333(938290967);
		func_333(1532009326);
		func_333(1344772301);
		func_333(-918785150);
		func_333(-692583342);
		func_333(-803019223);
		func_374(-803019223);
		func_333(-1860722801);
		func_333(637627640);
		func_333(349494711);
		func_334(117);
		func_334(116);
		func_334(100);
		func_334(109);
		func_334(102);
		func_334(110);
		func_334(106);
		if (!func_839(119))
		{
			func_334(118);
		}
		else
		{
			func_343(118);
		}
		func_334(111);
	}
	else if (func_340(-491981251))
	{
		func_333(-1667461262);
		func_333(411742897);
		func_333(1467774743);
		func_333(-956131204);
		func_333(1353861354);
		func_356("nav_mesh_beech_house_decor");
		func_333(578474998);
		func_333(1236917971);
		func_333(43335376);
		func_333(-284612948);
		func_333(-2090209059);
		func_333(1977031606);
		func_333(1929454697);
		func_333(938290967);
		func_333(1532009326);
		func_333(1344772301);
		func_333(-918785150);
		func_333(-692583342);
		func_333(-803019223);
		func_374(-803019223);
		func_333(-1860722801);
		func_333(637627640);
		func_333(349494711);
		func_334(117);
		func_334(116);
		func_334(100);
		func_334(109);
		func_334(102);
		func_334(110);
		if (func_839(108))
		{
			func_343(107);
		}
		else
		{
			func_334(107);
		}
		if (!func_839(119))
		{
			func_334(118);
		}
		else
		{
			func_343(118);
		}
		func_334(111);
	}
	else if (func_340(-618620429))
	{
		func_333(-1667461262);
		func_333(411742897);
		func_333(1467774743);
		func_333(-956131204);
		func_333(1353861354);
		func_356("nav_mesh_beech_house_completed");
		func_333(578474998);
		func_333(1236917971);
		func_333(43335376);
		func_333(-284612948);
		func_333(349494711);
		func_333(1965249616);
		func_333(-2021605623);
		func_333(1649902358);
		func_333(1169279648);
		func_333(1532009326);
		func_333(1344772301);
		func_333(-918785150);
		func_333(-692583342);
		func_333(-803019223);
		func_374(-803019223);
		func_333(-1860722801);
		func_333(637627640);
		func_333(-218940381);
		if (!func_839(119))
		{
			func_334(118);
		}
		else
		{
			func_343(118);
		}
		func_334(117);
		func_334(116);
		func_334(100);
		func_334(109);
		func_334(102);
		func_334(112);
		func_334(113);
		func_334(111);
		func_334(113);
		if (func_839(115))
		{
			func_343(114);
		}
		else
		{
			func_334(114);
		}
	}
	if (Global_1934765->f_300 != iVar0)
	{
		if (Global_1934765->f_300 != -1)
		{
			MAP::_0xE057FEA9A22EB3EE(-749646899);
		}
		MAP::_0x1392105DA88BBFFB(-749646899, -1640f, -1370f, 0, iVar0);
		Global_1934765->f_300 = iVar0;
	}
}

void func_339()
{
	vector3 vVar0;
	vector3 vVar10;

	if (func_340(-1215445344))
	{
		func_342(-661560211);
		func_333(-1989899190);
		func_333(-784156210);
		if (func_125(45))
		{
			func_358("nav_val_saloon_lockdown");
			func_358("nav_val_full_lockdown");
			func_358("nav_val_es_saloon_lockdown");
			func_358("nav_val_es");
			func_356("nav_val_es_full_lockdown");
		}
		else
		{
			func_358("nav_val_saloon_lockdown");
			func_358("nav_val_es_saloon_lockdown");
			func_358("nav_val_es_full_lockdown");
			func_358("nav_val_es");
			func_356("nav_val_full_lockdown");
		}
	}
	else
	{
		func_342(-1989899190);
		func_342(-784156210);
		func_333(-661560211);
		if (func_125(45))
		{
			func_358("nav_val_saloon_lockdown");
			func_358("nav_val_full_lockdown");
			func_358("nav_val_es_saloon_lockdown");
			func_358("nav_val_es_full_lockdown");
			func_356("nav_val_es");
		}
		else
		{
			func_358("nav_val_saloon_lockdown");
			func_358("nav_val_es_saloon_lockdown");
			func_358("nav_val_es_full_lockdown");
			func_358("nav_val_es");
			func_358("nav_val_full_lockdown");
		}
	}
	if (func_340(-254562075))
	{
		func_342(-1049500949);
		func_333(-981203673);
		func_333(-2009766528);
	}
	else
	{
		func_342(-981203673);
		func_342(-2009766528);
		func_333(-1049500949);
	}
	if (func_340(320943355))
	{
		func_342(135886022);
		func_333(1228600352);
		func_333(406334892);
	}
	else
	{
		func_342(1228600352);
		func_342(406334892);
		func_333(135886022);
	}
	if (func_340(689024866))
	{
		func_342(-1933617196);
		func_333(951314072);
		func_333(-1905652203);
	}
	else
	{
		func_342(951314072);
		func_342(-1905652203);
		func_333(-1933617196);
	}
	if (func_340(1160698568))
	{
		func_342(-1588793465);
		func_333(-780819048);
		func_333(1519091923);
		func_363(1879307167, 1, 0, 0, 0, 0, 0, 0);
		func_363(540459374, 1, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		func_342(-780819048);
		func_342(1519091923);
		func_333(-1588793465);
		func_363(1879307167, 0, 0, 0, 1, 0, 0, 0);
		func_363(540459374, 0, 0, 0, 1, 0, 0, 0);
	}
	if (func_340(-1179948750))
	{
		func_342(1325716092);
		func_333(-1301569116);
		func_333(-554932707);
	}
	else
	{
		func_342(-1301569116);
		func_342(-554932707);
		func_333(1325716092);
	}
	if (func_340(1713221411))
	{
		func_342(924412185);
		func_333(-52140817);
		func_333(-156313117);
	}
	else
	{
		func_342(-52140817);
		func_342(-156313117);
		func_333(924412185);
	}
	if (func_340(300221584))
	{
		func_342(-1781246069);
		func_333(282485265);
		func_333(-1744253204);
	}
	else
	{
		func_342(282485265);
		func_342(-1744253204);
		func_333(-1781246069);
	}
	if (func_340(-220282381))
	{
		func_342(-1892595931);
		func_333(56708243);
	}
	else
	{
		func_342(56708243);
		func_333(-1892595931);
	}
	if (func_340(-1329135070))
	{
		func_342(-1158072415);
		func_333(199047531);
		func_333(192173299);
		func_840(32, 1);
	}
	else
	{
		func_342(199047531);
		func_342(192173299);
		func_333(-1158072415);
		if ((!func_841(9, 0) && !func_842(5)) && !func_843(5))
		{
			vVar0 = -1;
			vVar0.f_1 = -1;
			vVar0.f_2 = -1;
			func_844(32, &vVar0, 1);
			func_845(&vVar0, 1, 1);
		}
	}
	if (func_340(-1763509974))
	{
		func_333(-776975047);
		func_333(1385025009);
		if (!func_340(-1215445344))
		{
			if (func_125(45))
			{
				func_358("nav_val_saloon_lockdown");
				func_358("nav_val_full_lockdown");
				func_358("nav_val_es");
				func_358("nav_val_es_full_lockdown");
				func_356("nav_val_es_saloon_lockdown");
			}
			else
			{
				func_358("nav_val_saloon_lockdown");
				func_358("nav_val_es_saloon_lockdown");
				func_358("nav_val_full_lockdown");
				func_358("nav_val_es_full_lockdown");
				func_358("nav_val_es");
				func_356("nav_val_saloon_lockdown");
			}
		}
		func_363(-908482159, 1, 0, 0, 0, 0, 0, 0);
		func_363(-1147728628, 1, 0, 0, 0, 0, 0, 0);
		func_363(968874193, 1, 0, 0, 0, 0, 0, 0);
		func_363(1154795503, 1, 0, 0, 0, 0, 0, 0);
		func_363(583884620, 1, 0, 0, 0, 0, 0, 0);
		func_363(261929195, 1, 0, 0, 0, 0, 0, 0);
		OBJECT::_0x7F458B543006C8FE(-908482159, 28);
		OBJECT::_0x7F458B543006C8FE(-1147728628, 28);
		OBJECT::_0x7F458B543006C8FE(968874193, 28);
		OBJECT::_0x7F458B543006C8FE(1154795503, 28);
		OBJECT::_0x7F458B543006C8FE(583884620, 28);
		OBJECT::_0x7F458B543006C8FE(261929195, 28);
	}
	else
	{
		func_342(-776975047);
		func_342(1385025009);
		func_363(-908482159, 0, 0, 0, 1, 0, 0, 0);
		func_363(-1147728628, 0, 0, 0, 1, 0, 0, 0);
		func_363(968874193, 0, 0, 0, 1, 0, 0, 0);
		func_363(1154795503, 0, 0, 0, 1, 0, 0, 0);
		func_363(583884620, 0, 0, 0, 1, 0, 0, 0);
		func_363(261929195, 0, 0, 0, 1, 0, 0, 0);
		OBJECT::_0x0C0A373D181BF900(-908482159);
		OBJECT::_0x0C0A373D181BF900(-1147728628);
		OBJECT::_0x0C0A373D181BF900(968874193);
		OBJECT::_0x0C0A373D181BF900(1154795503);
		OBJECT::_0x0C0A373D181BF900(583884620);
		OBJECT::_0x0C0A373D181BF900(261929195);
		if (func_125(45))
		{
			func_358("nav_val_saloon_lockdown");
			func_358("nav_val_full_lockdown");
			func_358("nav_val_es_saloon_lockdown");
			func_358("nav_val_es_full_lockdown");
			func_356("nav_val_es");
		}
		else
		{
			func_358("nav_val_saloon_lockdown");
			func_358("nav_val_es_saloon_lockdown");
			func_358("nav_val_es_full_lockdown");
			func_358("nav_val_es");
			func_358("nav_val_full_lockdown");
		}
	}
	if (func_28() == -1)
	{
		if (func_340(-1206122982))
		{
			func_349(450, 32);
			func_349(451, 32);
			func_349(452, 32);
			func_349(453, 32);
			func_349(466, 32);
			func_349(467, 32);
			func_349(471, 32);
			func_349(464, 32);
		}
		else
		{
			func_348(450, 32);
			func_348(451, 32);
			func_348(452, 32);
			func_348(453, 32);
			func_348(466, 32);
			func_348(467, 32);
			func_348(471, 32);
			func_348(464, 32);
		}
		if (func_340(-666014935))
		{
			func_363(-1069042457, 1, 0, 0, 0, 0, 0, 0);
			func_363(244699522, 1, 0, 0, 0, 0, 0, 0);
			func_363(-590254598, 1, 0, 0, 0, 0, 0, 0);
			func_363(-1425307025, 1, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			func_363(-1069042457, 0, 0, 0, 1, 0, 0, 0);
			func_363(244699522, 0, 0, 0, 1, 0, 0, 0);
			func_363(-590254598, 0, 0, 0, 1, 0, 0, 0);
			func_363(-1425307025, 0, 0, 0, 1, 0, 0, 0);
		}
		if (func_340(1074873669))
		{
			func_349(433, 32);
		}
		else
		{
			func_348(433, 32);
		}
		if (func_340(-1579419919))
		{
			func_363(551601484, 1, 0, 0, 0, 0, 0, 0);
			func_363(-1842720100, 1, 0, 0, 0, 0, 0, 0);
			func_363(-983069384, 1, 0, 0, 0, 0, 0, 0);
			func_363(-768760124, 1, 0, 0, 0, 0, 0, 0);
			func_363(-1974086289, 1, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			func_363(551601484, 0, 0, 0, 1, 0, 0, 0);
			func_363(-1842720100, 0, 0, 0, 1, 0, 0, 0);
			func_363(-983069384, 0, 0, 0, 1, 0, 0, 0);
			func_363(-768760124, 0, 0, 0, 1, 0, 0, 0);
			func_363(-1974086289, 0, 0, 0, 1, 0, 0, 0);
		}
		if (func_340(478884033))
		{
			func_349(83, 32);
			func_349(84, 32);
			func_349(85, 32);
			func_349(86, 32);
			func_349(87, 32);
			func_349(79, 32);
		}
		else
		{
			func_348(83, 32);
			func_348(84, 32);
			func_348(85, 32);
			func_348(86, 32);
			func_348(87, 32);
			func_348(79, 32);
		}
		if (func_340(-191424539))
		{
			func_363(-1247339802, 1, 0, 0, 0, 0, 0, 0);
			func_363(2046695029, 1, 0, 0, 0, 0, 0, 0);
			func_363(834296435, 1, 0, 0, 0, 0, 0, 0);
			func_363(1124531468, 1, 0, 0, 0, 0, 0, 0);
			func_363(-902483455, 1, 0, 0, 0, 0, 0, 0);
			func_363(-566797819, 1, 0, 0, 0, 0, 0, 0);
			func_363(1469250492, 1, 0, 0, 0, 0, 0, 0);
			func_363(678501753, 1, 0, 0, 0, 0, 0, 0);
			func_363(-1079073283, 1, 0, 0, 0, 0, 0, 0);
			func_363(-860602360, 1, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			func_363(-1247339802, 0, 0, 0, 1, 0, 0, 0);
			func_363(2046695029, 0, 0, 0, 1, 0, 0, 0);
			func_363(834296435, 0, 0, 0, 1, 0, 0, 0);
			func_363(1124531468, 0, 0, 0, 1, 0, 0, 0);
			func_363(-902483455, 0, 0, 0, 1, 0, 0, 0);
			func_363(-566797819, 0, 0, 0, 1, 0, 0, 0);
			func_363(1469250492, 0, 0, 0, 1, 0, 0, 0);
			func_363(678501753, 0, 0, 0, 1, 0, 0, 0);
			func_363(-1079073283, 0, 0, 0, 1, 0, 0, 0);
			func_363(-860602360, 0, 0, 0, 1, 0, 0, 0);
		}
		if (func_340(-397760715))
		{
			func_363(1098854605, 1, 0, 0, 0, 0, 0, 0);
			func_363(1013933832, 1, 0, 0, 0, 0, 0, 0);
			func_840(19, 1);
		}
		else
		{
			func_363(1098854605, 0, 0, 0, 1, 0, 0, 0);
			func_363(1013933832, 0, 0, 0, 1, 0, 0, 0);
			if ((!func_841(9, 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(2082765849) <= 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(203152483) <= 0)
			{
				vVar10 = -1;
				vVar10.f_1 = -1;
				vVar10.f_2 = -1;
				func_844(19, &vVar10, 1);
				func_845(&vVar10, 1, 1);
			}
		}
		if (func_340(2639906))
		{
			func_363(-1334037078, 1, 0, 0, 0, 0, 0, 0);
			func_363(-1641377529, 1, 0, 0, 0, 0, 0, 0);
			func_363(-74215266, 1, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			func_363(-1334037078, 0, 0, 0, 1, 0, 0, 0);
			func_363(-1641377529, 0, 0, 0, 1, 0, 0, 0);
			func_363(-74215266, 0, 0, 0, 1, 0, 0, 0);
		}
		if (func_340(1660024373))
		{
			func_349(320, 32);
			func_349(317, 32);
			func_349(318, 32);
			func_349(319, 32);
			func_349(250, 32);
		}
		else
		{
			func_348(320, 32);
			func_348(317, 32);
			func_348(318, 32);
			func_348(319, 32);
			func_348(250, 32);
		}
		if (func_340(-1063147448))
		{
			func_363(-399528504, 1, 0, 0, 0, 0, 0, 0);
			func_363(804086151, 1, 0, 0, 0, 0, 0, 0);
			func_363(-923901632, 1, 0, 0, 0, 0, 0, 0);
			func_363(-438789356, 1, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			func_363(-399528504, 0, 0, 0, 1, 0, 0, 0);
			func_363(804086151, 0, 0, 0, 1, 0, 0, 0);
			func_363(-923901632, 0, 0, 0, 1, 0, 0, 0);
			func_363(-438789356, 0, 0, 0, 1, 0, 0, 0);
		}
		if (func_340(-80522843))
		{
			func_349(354, 32);
			func_349(367, 32);
			func_349(368, 32);
			func_349(369, 32);
			func_349(370, 32);
			func_349(371, 32);
			func_349(886, 32);
		}
		else
		{
			func_348(354, 32);
			func_348(367, 32);
			func_348(368, 32);
			func_348(86, 32);
			func_348(370, 32);
			func_348(371, 32);
			func_348(886, 32);
		}
		if (func_340(-1523910291))
		{
			func_363(2094297354, 1, 0, 0, 0, 0, 0, 0);
			func_363(1892085175, 1, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			func_363(2094297354, 0, 0, 0, 1, 0, 0, 0);
			func_363(1892085175, 0, 0, 0, 1, 0, 0, 0);
		}
	}
}

bool func_340(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_846(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return MISC::IS_BIT_SET(&(Global_40.f_283[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_1058888->f_40567[iVar1]), iVar2);
}

void func_341(int iParam0, int iParam1)
{
	(*Global_1897952)[iParam0 /*2*/] = (Global_1897952[iParam0 /*2*/] || iParam1);
}

void func_342(int iParam0)
{
	if (STREAMING::_IS_IMAP_ACTIVE(iParam0))
	{
		STREAMING::_REMOVE_IMAP(iParam0);
	}
}

void func_343(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::CLEAR_BIT(Global_1934765->f_21[iVar1], iVar2);
}

void func_344(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (func_340(iParam0))
	{
		if (func_289(Global_1934765->f_20, iParam2))
		{
			iVar0 = func_821(iParam1);
			if (VOLUME::_0x92A78D0BEDB332A3(iVar0))
			{
				POPULATION::_0xA1CFB35069D23C23(iVar0);
				POPULATION::_0x74C2B3DC0B294102(iVar0);
				func_290(&(Global_1934765->f_20), iParam2);
			}
		}
	}
	else if (!func_289(Global_1934765->f_20, iParam2))
	{
		iVar1 = func_821(iParam1);
		if (VOLUME::_0x92A78D0BEDB332A3(iVar1))
		{
			POPULATION::_0x18262CAFEBB5FBE1(iVar1, iParam3, 0, 0, -1, -1, 0);
			POPULATION::_0xB56D41A694E42E86(iVar1, iParam3, 0, 0, -1, -1, 0);
			func_291(&(Global_1934765->f_20), iParam2);
		}
	}
}

int func_345(int iParam0)
{
	if (!func_755(iParam0))
	{
		return 0;
	}
	return ((*Global_1835011)[iParam0 /*74*/])->f_1;
}

bool func_346(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_347(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23117[iParam0 /*11*/] = (&Global_23117[iParam0 /*11*/] - (Global_23117[iParam0 /*11*/] && iParam1));
		return;
	}
	Global_1058888->f_40615[iParam0 /*11*/] = (&Global_1058888->f_40615[iParam0 /*11*/] - (Global_1058888->f_40615[iParam0 /*11*/] && iParam1));
}

void func_348(int iParam0, int iParam1)
{
	if (func_28() != -1)
	{
		return;
	}
	if (!func_623(iParam0))
	{
		return;
	}
	Global_24886[iParam0 /*2*/] = (&Global_24886[iParam0 /*2*/] - (Global_24886[iParam0 /*2*/] && iParam1));
}

void func_349(int iParam0, int iParam1)
{
	if (func_28() != -1)
	{
		return;
	}
	if (!func_623(iParam0))
	{
		return;
	}
	Global_24886[iParam0 /*2*/] = (Global_24886[iParam0 /*2*/] || iParam1);
}

int func_350(int iParam0, bool bParam1)
{
	if (!func_623(iParam0))
	{
		return 0;
	}
	if (!func_366(iParam0, 2))
	{
		return 0;
	}
	if (func_624(iParam0) == 0)
	{
		return 1;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(func_626(iParam0)))
	{
		return 1;
	}
	if (func_366(iParam0, 1) && !bParam1)
	{
		func_349(iParam0, 128);
		return 1;
	}
	func_348(iParam0, 129);
	func_847(iParam0);
	_NAMESPACE48::_0xFC77C5B44D5FF7C0(func_626(iParam0));
	func_625(iParam0, 0);
	return 1;
}

void func_351(int iParam0, int iParam1)
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

void func_352()
{
	if (!func_340(0))
	{
		func_342(1149195254);
		func_342(2016081133);
		func_342(363257921);
		func_342(58066174);
		func_342(-1521525254);
		func_342(-761186147);
		func_342(-1872939092);
		func_342(-964156415);
	}
	else
	{
		func_342(-1643869063);
	}
	if (!func_340(473295046))
	{
		func_342(-1108618313);
		func_342(-787678727);
	}
	if (!func_340(-1738165526))
	{
		func_342(622597018);
		func_342(1649275138);
	}
	func_342(-2137633069);
	func_342(1944013855);
	func_342(-437251660);
	func_343(124);
	func_343(125);
	func_343(187);
	func_343(188);
	func_343(123);
	func_343(122);
	func_343(121);
	func_343(120);
	func_358("bra_man_burned");
	func_358("bra_man_burned_bra3");
	func_358("bra_man_endsum");
}

void func_353(bool bParam0)
{
	func_848(-1452136643, bParam0);
	func_848(-744260705, bParam0);
	func_848(1424293412, bParam0);
	func_848(1060557512, bParam0);
	func_848(-362403544, bParam0);
	func_848(-592147003, bParam0);
	func_848(2056145270, bParam0);
	func_848(748826019, bParam0);
	func_848(366542865, bParam0);
	func_848(-1508467572, bParam0);
	func_848(-1220264217, bParam0);
	func_848(-990258606, bParam0);
	func_848(-1508467572, bParam0);
	func_848(-1220264217, bParam0);
	func_848(-990258606, bParam0);
	func_848(-665583358, bParam0);
	func_848(-282972514, bParam0);
	func_848(-64632667, bParam0);
	func_848(314111435, bParam0);
	func_848(24859476, bParam0);
	func_848(340621560, bParam0);
	func_848(1266707689, bParam0);
	func_848(434145706, bParam0);
	func_848(654746614, bParam0);
	func_848(1965736001, bParam0);
	func_848(1650694835, bParam0);
	func_848(1891284833, bParam0);
	func_848(1576931820, bParam0);
	func_848(1812999696, bParam0);
	func_848(-1184151355, bParam0);
	func_848(-946313953, bParam0);
	func_848(-889100155, bParam0);
	func_848(-1296418825, bParam0);
	func_848(352816221, !bParam0);
	func_848(1128622296, !bParam0);
	func_848(979982112, !bParam0);
	func_848(1756640181, !bParam0);
	func_848(1557076971, !bParam0);
	func_848(1913538153, !bParam0);
	func_848(-1603329230, !bParam0);
	func_848(-1892843345, !bParam0);
	func_848(241205019, !bParam0);
}

void func_354(int iParam0, int iParam1)
{
	func_363(iParam0, 0, 0, 0, 1, 0, 0, 0);
}

int func_355(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_126(iParam0))
	{
		return 0;
	}
	if (!func_825(iParam0, &iVar1, &iVar2, 0, 0))
	{
		return 0;
	}
	iVar3 = 1;
	iVar0 = 0;
	while (iVar0 < (iVar2 - iVar1) + 1)
	{
		if (!func_367((iVar1 + iVar0)))
		{
			iVar3 = 0;
		}
		iVar0++;
	}
	return iVar3;
}

void func_356(char* sParam0)
{
	if (!PATHFIND::_0x5AC0944C156E5F44(sParam0))
	{
		PATHFIND::_0x7C334FF4D9215912(sParam0);
	}
}

void func_357(int iParam0, int iParam1)
{
	func_363(iParam0, 1, 0, 0, 0, 0, 0, 0);
}

void func_358(char* sParam0)
{
	if (PATHFIND::_0x5AC0944C156E5F44(sParam0))
	{
		PATHFIND::_0x527B97C203BB8606(sParam0);
	}
}

void func_359()
{
	if (func_340(-919512195))
	{
		func_342(419559004);
		func_342(1786931635);
		func_342(557212279);
		func_342(1426715569);
		func_342(2097480406);
		func_358("cal_nav_tabacco_burnt");
		func_358("cal_nav_tabacco_burning");
		func_358("cal_nav_tabacco_mission");
		func_333(702350293);
		func_333(-677977650);
		func_333(26815048);
		func_333(-1229109520);
		func_356("cal_nav_tabacco_clean");
	}
	else if (func_340(-1925798111))
	{
		func_342(419559004);
		func_342(1786931635);
		func_342(557212279);
		func_358("cal_nav_tabacco_burnt");
		func_358("cal_nav_tabacco_burning");
		func_358("cal_nav_tabacco_clean");
		func_333(702350293);
		func_333(-677977650);
		func_333(26815048);
		func_333(-1229109520);
		func_333(1426715569);
		func_333(2097480406);
		func_356("cal_nav_tabacco_mission");
	}
	else if (func_340(420709909))
	{
		func_342(419559004);
		func_342(26815048);
		func_342(-1229109520);
		func_358("cal_nav_tabacco_burnt");
		func_358("cal_nav_tabacco_clean");
		func_358("cal_nav_tabacco_mission");
		func_333(702350293);
		func_333(-677977650);
		func_333(1786931635);
		func_333(557212279);
		func_333(1426715569);
		func_333(2097480406);
		func_356("cal_nav_tabacco_burning");
	}
	else if (func_340(1703426636))
	{
		func_342(702350293);
		func_342(-677977650);
		func_342(26815048);
		func_342(-1229109520);
		func_342(1426715569);
		func_342(2097480406);
		func_358("cal_nav_tabacco_clean");
		func_358("cal_nav_tabacco_mission");
		func_358("cal_nav_tabacco_burning");
		func_333(419559004);
		func_333(1786931635);
		func_333(557212279);
		func_356("cal_nav_tabacco_burnt");
	}
}

void func_360()
{
	func_342(-717025835);
	func_342(1248111234);
	if (!func_340(1884271742) && !func_340(-2038424081))
	{
		func_342(-1316886711);
		func_342(867231253);
	}
	if (!func_340(356365161))
	{
		func_342(474287981);
		func_342(-1670453688);
	}
	func_342(2039534767);
	func_342(-1451954802);
	func_342(-323126593);
	func_342(1590561203);
	func_342(205214733);
	if (!func_340(-1187950766) && !func_340(356365161))
	{
		func_342(-338553155);
		func_342(-1106668087);
		func_342(-1636879249);
	}
	func_343(186);
	if (!func_340(356365161))
	{
		func_358("col_nav_wint1_cabin_prefire");
	}
	func_358("col_nav_wint1_cabin_duringfire");
	func_358("col_nav_wint2_post");
	func_358("col_nav_wint_end");
}

void func_361(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_846(iParam0, 1);
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

void func_362()
{
	if (func_340(371850993))
	{
		func_333(263152228);
		func_333(1936009597);
	}
	else
	{
		func_342(263152228);
		func_342(1936009597);
	}
}

void func_363(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_849(iParam0, 0, 0);
	if (func_850(iParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, iParam2, iParam6);
		if (fParam5 > 0f)
		{
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_851(iParam0, iParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_852(iParam0, 1);
			}
			else
			{
				func_853(iParam0, 1);
			}
		}
		else
		{
			func_854(iParam0, 1);
		}
		if (bParam7)
		{
			OBJECT::_0x276AAF0F1C7F2494(iParam0, 1);
		}
	}
	else if (func_855())
	{
	}
	else if (NETWORK::NETWORK_IS_IN_SESSION())
	{
	}
}

void func_364(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_1310750->f_16074 = (Global_1310750->f_16074 || iParam0);
	}
	else
	{
		Global_1310750->f_16074 = (Global_1310750->f_16074 - (Global_1310750->f_16074 && iParam0));
	}
}

void func_365()
{
	if (!func_340(-1053549743))
	{
		func_342(1033721560);
	}
	func_342(1343484786);
	func_342(1871051363);
	func_342(146746575);
	func_342(-2144587490);
	func_342(1989074279);
	func_342(-1671953459);
	func_358("rho_nav_grave_norm_gry3_off");
	func_358("rho_nav_grave_norm_gry3_on");
	func_358("rho_nav_grave_dug_gry3_off");
	func_358("rho_nav_grave_dug_gry3_on");
	func_358("rho_nav_grave_open_gry3_off");
	func_358("rho_nav_grave_open_gry3_on");
	func_358("sad3_nav_rhodes_shootout_00");
}

bool func_366(int iParam0, int iParam1)
{
	if (func_28() != -1)
	{
		return false;
	}
	if (!func_623(iParam0))
	{
		return false;
	}
	return (Global_24886[iParam0 /*2*/] && iParam1) != 0;
}

int func_367(int iParam0)
{
	int iVar0;

	if (!func_623(iParam0))
	{
		return 0;
	}
	if (!func_856(func_624(iParam0)))
	{
		return 1;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(func_626(iParam0)))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(_NAMESPACE48::_0x31C70A716CAE1FEE(func_626(iParam0))))
		{
			return 1;
		}
	}
	iVar0 = _NAMESPACE48::_0x31C70A716CAE1FEE(func_626(iParam0));
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
		}
	}
	_NAMESPACE48::_0x7B204F88F6C3D287(func_626(iParam0));
	return 1;
}

int func_368(int iParam0)
{
	if (!func_623(iParam0))
	{
		return 0;
	}
	if (!func_856(func_624(iParam0)))
	{
		return 1;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(func_626(iParam0)))
	{
		return 0;
	}
	_NAMESPACE48::_0x4F81EAD1DE8FA19B(func_626(iParam0));
	return 1;
}

int func_369(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_693(((*Global_1835011)[iParam0 /*74*/])->f_1);
}

void func_370(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::CLEAR_BIT(Global_1934765->f_30[iVar1], iVar2);
}

float func_371(float fParam0)
{
	return (fParam0 * 0.01745329f);
}

int func_372()
{
	if (func_28() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == 11966224)
	{
		return 1;
	}
	return 0;
}

void func_373(int iParam0)
{
	if (GRAPHICS::_0xDE9BAD3292AA6D5E(iParam0))
	{
		GRAPHICS::_0xDD0BC0EDCB2162F6(iParam0);
	}
}

void func_374(int iParam0)
{
	if (!GRAPHICS::_0xDE9BAD3292AA6D5E(iParam0))
	{
		GRAPHICS::_0xDFEA23EC90113657(iParam0);
	}
}

int func_375(int iParam0)
{
	switch (func_28())
	{
		case -1:
			return (Global_1357549->f_1495 && iParam0) != 0;
	}
	return 0;
}

void func_376(int iParam0)
{
	switch (func_28())
	{
		case -1:
			Global_1357549->f_1495 = (Global_1357549->f_1495 || iParam0);
			break;
	}
}

int func_377(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_126(iParam0))
	{
		return 0;
	}
	if (!func_825(iParam0, &iVar1, &iVar2, 0, 0))
	{
		return 0;
	}
	iVar3 = 1;
	iVar0 = 0;
	while (iVar0 < (iVar2 - iVar1) + 1)
	{
		if (!func_368((iVar1 + iVar0)))
		{
			iVar3 = 0;
		}
		iVar0++;
	}
	return iVar3;
}

void func_378(int iParam0)
{
	switch (func_28())
	{
		case -1:
			Global_1357549->f_1495 = (Global_1357549->f_1495 - (Global_1357549->f_1495 && iParam0));
			break;
	}
}

int func_379(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_126(iParam0))
	{
		return 0;
	}
	if (!func_825(iParam0, &iVar1, &iVar2, 0, 0))
	{
		return 0;
	}
	iVar3 = 1;
	iVar0 = 0;
	while (iVar0 < (iVar2 - iVar1) + 1)
	{
		if (!func_350((iVar1 + iVar0), 0))
		{
			iVar3 = 0;
		}
		iVar0++;
	}
	return iVar3;
}

void func_380()
{
	if (func_340(-2020023971))
	{
		func_342(758684739);
		func_342(-661825463);
		func_333(518127510);
		func_343(182);
		func_334(181);
	}
	else
	{
		func_342(518127510);
		func_333(758684739);
		func_333(-661825463);
		func_343(181);
		func_334(182);
	}
}

bool func_381(int iParam0)
{
	if (!(iParam0 >= 0 && iParam0 <= 150))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return Global_23117[iParam0 /*11*/] & 32 != 0;
	}
	return Global_1058888->f_40615[iParam0 /*11*/] & 32 != 0;
}

void func_382()
{
	func_358("nav_sdn_docks_pre_es");
	func_358("nav_sdn_docks_korrigan_pre_es");
	func_358("nav_sdn_docks_antenor_pre_es");
	func_358("nav_sdn_docks_trains_pre_es");
	func_358("nav_sdn_docks_korrigan_antenor_pre_es");
	func_358("nav_sdn_docks_antenor_trains_pre_es");
	func_358("nav_sdn_docks_korrigan_trains_pre_es");
	func_358("nav_sdn_docks_korrigan_antenor_trains_pre_es");
	func_358("nav_sdn_docks_es");
	func_358("nav_sdn_docks_korrigan_es");
	func_358("nav_sdn_docks_antenor_es");
	func_358("nav_sdn_docks_trains_es");
	func_358("nav_sdn_docks_korrigan_antenor_es");
	func_358("nav_sdn_docks_antenor_trains_es");
	func_358("nav_sdn_docks_korrigan_trains_es");
	func_358("nav_sdn_docks_korrigan_antenor_trains_es");
}

void func_383(var uParam0, vector3 vParam1, float fParam4)
{
	if (*uParam0 == -1)
	{
		*uParam0 = GRAPHICS::_0xFA50F79257745E74(vParam1, fParam4, 1, -1, 0);
	}
}

void func_384(int iParam0, int iParam1)
{
	if (*iParam0 != -1)
	{
		GRAPHICS::_0x9CF1836C03FB67A2(iParam0, iParam1);
		*iParam0 = -1;
	}
}

void func_385(int iParam0, int iParam1)
{
	if (func_340(iParam0))
	{
		func_333(iParam1);
	}
	else
	{
		func_342(iParam1);
	}
}

int func_386()
{
	return Global_40.f_4283.f_4;
}

int func_387(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, int iParam7, bool bParam8, float fParam9)
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
	if (func_588(vParam0))
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
		if (func_857(vParam0))
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
	func_858(iVar0, bParam8);
	return iVar0;
}

void func_388(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_588(vParam0))
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
			if (func_859(vVar2, vParam0, 2f, 1))
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

int func_389(int iParam0)
{
	if (!func_67(iParam0))
	{
		return -1;
	}
	return func_90(iParam0);
}

bool func_390(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_391(char* sParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	*uParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_860(bParam4), sParam0, iParam3, uParam2);
	if (*uParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_392(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_393(int iParam0)
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

bool func_394(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_40.f_7857[iVar1]), iVar2);
}

int func_395()
{
	if (func_28() == -1)
	{
		return Global_26795.f_776;
	}
	return Global_36637.f_45.f_350.f_1011;
}

int func_396(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return 0;
	}
	return 1;
}

int func_397(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_145();
	}
	if (func_28() == -1)
	{
		if (iParam0 == 1160113249)
		{
			iVar0 = 1583685020;
		}
		else
		{
			iVar0 = -572793833;
		}
	}
	else
	{
		iVar0 = -2109211296;
	}
	return iVar0;
}

void func_398(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

bool func_399(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

char* func_400()
{
	return "MECH_INVENTORY@CLOTHING@OUTFIT_CHANGE";
}

void func_401(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

int func_402(int iParam0)
{
	switch (iParam0)
	{
		case 439606975:
			return 14;
		case 1661121390:
			return 6;
		case 1164374808:
			return 7;
		case 624063935:
			return 9;
		case -1476781101:
			return 10;
		case 1560492757:
			return 15;
		case -769081407:
			return 16;
		case 688004210:
			return 20;
		case 166243423:
			return 0;
		case -1826731591:
			return 24;
		case 2119049229:
			return 25;
		case 1352942778:
			return 26;
		case 1964379549:
			return 27;
		case 1201189539:
			return 28;
		case 1351927599:
			return 21;
		case 2032023096:
			return 22;
		case 1784889667:
			return 13;
		case 1160643979:
			return 8;
		case 1383300684:
			return 1;
		case 2051441678:
			return 2;
		case 162509669:
			return 3;
		case 635948769:
			return 4;
		case 274995506:
			return 5;
		case 1902428294:
			return 17;
		case -2114499732:
			return 18;
		case 800827126:
			return 19;
		case 294553332:
			return 11;
		case 1788874135:
			return 12;
		case -1243402388:
			return 66;
		case 65931886:
			return 67;
		case 1371678229:
			return 68;
		case 2102263084:
			return 69;
		case -272211555:
			return 61;
		case -55563408:
			return 64;
		case -1914506115:
			return 71;
		case 802495462:
			return 75;
		case 842905332:
			return 77;
		case 1511551084:
			return 79;
		case -1725704631:
			return 81;
		case 1257427489:
			return 83;
		case -659341240:
			return 85;
		case 2038771525:
			return 87;
		case -535599244:
			return 89;
		case -389591806:
			return 73;
		case -1205612021:
			return 70;
		case 890706995:
			return 93;
		case 1156438275:
			return 90;
		case -1611873049:
			return 91;
		case 594312243:
			return 92;
		case -978578725:
			return 94;
		case -361635024:
			return 62;
		case -1951220140:
			return 78;
		case 1460520700:
			return 76;
		case 523337834:
			return 80;
		case -19271249:
			return 82;
		case 214175524:
			return 84;
		case -1303643297:
			return 86;
		case 411856831:
			return 88;
		case -926815459:
			return 72;
		case -1300731953:
			return 74;
		case -409616653:
			return 65;
		case 509954990:
			return 29;
		case -445916744:
			return 30;
		case -866249154:
			return 31;
		case -2077063704:
			return 32;
		case 205207539:
			return 33;
		case -1033657275:
			return 34;
		case 1806002837:
			return 35;
		case 705324896:
			return 36;
		case -1541763703:
			return 37;
		case 387052410:
			return 38;
		case -361288914:
			return 39;
		case -911054515:
			return 40;
		case 1084200963:
			return 41;
		case 1847948074:
			return 42;
		case -1212526764:
			return 43;
		case 1851440270:
			return 44;
		case -2028985700:
			return 45;
		case 1074435214:
			return 46;
		case -883015675:
			return 47;
		case -1047155604:
			return 48;
		case 1123231221:
			return 49;
		case 1866989210:
			return 50;
		case 478183719:
			return 51;
		case -1698955868:
			return 52;
		case -2029378634:
			return 53;
		case 1339864416:
			return 54;
		case 890998115:
			return 55;
		case -1376288999:
			return 56;
		case -1041123771:
			return 57;
		case 1389254668:
			return 58;
		case -346112633:
			return 59;
		case 773309172:
			return 60;
		case -291256376:
			return 23;
		default:
			break;
	}
	return -1;
}

void func_403()
{
	int iVar0;

	Global_1946804->f_1378 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*(Global_1946804->f_1378.f_1[iVar0 /*3*/]) = { *(Global_1946804->f_1497.f_1[iVar0 /*3*/]) };
		iVar0++;
	}
}

int func_404(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (!func_861(uParam0, iParam3, iParam2) && !func_422(uParam0, iParam2, iParam1, 0, bParam4, 0, 0))
	{
		return 0;
	}
	iVar0 = 10;
	if (func_399(32768))
	{
		if (!*iParam1 || (*iParam1 && &uParam0->f_1[iVar0 /*3*/] != &Global_1946804->f_57[iVar0 /*11*/]))
		{
			func_862(1108822547);
		}
		else
		{
			func_863(1108822547);
		}
	}
	func_864(uParam0, 0, 0);
	func_865(iParam5);
	return 1;
}

void func_405()
{
	func_866(&(Global_1946804->f_2776));
	func_401(32768);
	func_867(1108822547, 8, 6);
}

void func_406(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;

	iVar1 = 1;
	if (bParam2)
	{
		if ((iParam0 == -1 || iParam0 == func_395()) || iParam5)
		{
			func_868();
		}
	}
	if (func_28() == -1)
	{
		iVar0 = Global_40.f_7729;
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "playerChangeOutfits") && DECORATOR::DECOR_GET_BOOL(Global_35, "playerChangeOutfits"))
		{
			iVar0 = &Global_1905941;
		}
		if ((iParam4 && iVar0 > 5) && func_869(Global_1946804->f_1497))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = (&Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				iVar0 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= 4096;
				Global_1946804->f_1497 = func_127(Global_40.f_7729);
				Global_1946804->f_1378 = func_127(Global_40.f_7729);
				iParam3 = 1;
			}
		}
		iVar1 = func_136(iVar0);
	}
	if (iParam3 && iVar1)
	{
		func_870(iParam0, 0, 6);
	}
	if (bParam1)
	{
		func_871(0, 1);
	}
	func_865(0);
}

void func_407(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;

	if (bParam4)
	{
		func_872(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_873(Var0);
}

void func_408(int iParam0)
{
	struct<4> Var0;

	if (func_874(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_875(Var0);
}

void func_409(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	bVar4 = func_28() != -1;
	Global_1946804->f_857 = 0;
	if (iParam3 == -1 && bParam6)
	{
		PED::_0x0BFA1BD465CDFEFD(iParam1);
		if (!bVar4)
		{
			if (Global_1347477->f_189 != 0)
			{
				PED::_0x1902C4CFCC5BE57C(iParam1, Global_1347477->f_189);
			}
			if ((Global_1946804->f_1 == -2125499975 || Global_1946804->f_1 == -449205311) && Global_1347477->f_190 != 0)
			{
				PED::_0x1902C4CFCC5BE57C(iParam1, Global_1347477->f_190);
			}
			func_872(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_876(iParam1, 29, bVar4, 1, 0);
			func_876(iParam1, 31, bVar4, 1, 0);
			func_876(iParam1, 30, bVar4, 1, 0);
			func_876(iParam1, 22, bVar4, 1, 0);
			func_876(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_399(32768) && func_877(1108822547, 8)) && func_878(10, iParam3))
	{
		func_879(iParam1, 0, 1);
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar1 = &Global_1946804->f_57.f_430[iVar0];
		if (iVar1 <= -1 || iVar1 >= 39)
		{
		}
		else
		{
			iVar3 = func_880(iVar1, 1);
			if (func_877(iVar3, 8))
			{
			}
			else if (&(Global_1946804->f_57[iVar1 /*11*/])->f_2[0] == -1802376732 || &uParam0->f_1[iVar1 /*3*/] == 0)
			{
			}
			else
			{
				iVar2 = &uParam0->f_1[iVar1 /*3*/];
				if (!func_878(iVar1, iParam3))
				{
				}
				else if ((func_877(iVar3, 6) || &uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/]) || (uParam0->f_1[iVar1 /*3*/])->f_1 == 289238755)
				{
					if (!func_877(iVar3, 1) || bParam2)
					{
						Global_1946804->f_857++;
						if (!bParam6)
						{
							func_876(iParam1, iVar1, bVar4, 1, 0);
						}
						if ((uParam0->f_1[iVar1 /*3*/])->f_1 == 289238755)
						{
							(Global_1946804->f_2456[iVar1 /*2*/])->f_1 = 289238755;
						}
						func_881(iVar3, 1, 6);
					}
				}
				else
				{
					if (!bParam6)
					{
						if ((!bParam2 && &uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_2456[iVar1 /*2*/]) && (uParam0->f_1[iVar1 /*3*/])->f_1 == (Global_1946804->f_2456[iVar1 /*2*/])->f_1)
						{
						}
						else
						{
							if ((Global_1946804->f_57[iVar1 /*11*/])->f_1 > 1)
							{
								func_876(iParam1, iVar1, bVar4, 1, &(uParam0->f_1[iVar1 /*3*/]));
							}
							Global_1946804->f_2456[iVar1 /*2*/] = &uParam0->f_1[iVar1 /*3*/];
							(Global_1946804->f_2456[iVar1 /*2*/])->f_1 = (uParam0->f_1[iVar1 /*3*/])->f_1;
							if (func_877(iVar3, 1))
							{
								func_867(iVar3, 1, 6);
							}
							Global_1946804->f_857++;
							PED::_SET_PED_COMPONENT_ENABLED(iParam1, iVar2, false, bVar4, false);
							if ((uParam0->f_1[iVar1 /*3*/])->f_1 != 0)
							{
								PED::_0x66B957AAC2EAAEAB(iParam1, iVar2, (uParam0->f_1[iVar1 /*3*/])->f_1, 0, bVar4, 1);
							}
						}
						iVar0++;
						if (Global_1946804->f_857 <= 0)
						{
							return;
						}
						if (bParam4)
						{
							PED::_0xAAB86462966168CE(iParam1, bVar4);
							PED::_0xCC8CA3E88256E58F(iParam1, 0, 1, 1, 1, iParam5);
						}
					}
				}
			}
		}
	}

void func_410(bool bParam0, bool bParam1)
{
	var uVar0;
	var uVar9;

	if (func_28() != -1)
	{
		return;
	}
	if (&Global_1956575 != 2)
	{
		return;
	}
	if (bParam0)
	{
		while (SPACTIONPROXY::_SPACTIONPROXY_GET_NEXT_PENDING_CRAFTING_ACTION(&uVar0))
		{
			if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar0, false))
			{
			}
		else
		{
			}
		}
	}
	if (bParam1)
	{
		while (SPACTIONPROXY::_SPACTIONPROXY_GET_NEXT_PENDING_BUY_ACTION(&uVar9))
		{
			if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar9, false))
			{
			}
		else
		{
			}
		}
	}
}

struct<4> func_411()
{
	struct<4> Var0;

	Var0 = { func_882(0) };
	return func_883(856287005, Var0, -218846335, 0);
}

int func_412(int iParam0, struct<4> Param1, bool bParam5)
{
	int iVar0;
	var uVar1;
	struct<2> Var3;
	struct<4> Var7;
	int iVar11;
	struct<5> Var12;

	if (iParam0 == 0)
	{
		return 0;
	}
	uVar1 = 1;
	iVar11 = ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ITEM_COUNT(iParam0, &uVar1);
	Var12 = { Param1 };
	iVar0 = 0;
	while (iVar0 < iVar11)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ITEM_INFO(iParam0, &uVar1, iVar0, &Var3))
		{
			if (func_38(Var3, 0))
			{
				Var12.f_4 = Var3.f_1;
				if (func_884(Var3, Param1, Var12.f_4, 0) > 0)
				{
				}
				else
				{
					func_885(&Var7);
					if (func_886(Var3, &Var7, &Var12, 1, 752097756, 0))
					{
						if (bParam5)
						{
							func_887(Var7, 1);
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 1;
}

bool func_413()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797);
}

void func_414(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	switch (func_469(iParam0))
	{
		case -2061583405:
			bVar0 = func_888(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_888(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_888(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_888(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_888(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_888(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_889();
	}
	if (bParam1)
	{
		func_871(0, 0);
	}
}

void func_415(var uParam0)
{
	int iVar0;
	char cVar1[64];
	int iVar9;
	struct<14> Var10;
	struct<21> Var24;
	struct<28> Var45;

	if (uParam0->f_5861)
	{
		return;
	}
	Var10 = 1;
	Var10.f_1 = 1;
	Var10.f_2 = 1105014447;
	Var10.f_4 = -1;
	Var10.f_5 = -1134602452;
	Var10.f_6 = 1276832712;
	Var10.f_13 = 1105014447;
	Var24 = 1;
	Var24.f_1 = 1;
	Var24.f_2 = 1105014447;
	Var24.f_4 = -1;
	Var24.f_5 = -1134602452;
	Var24.f_6 = 1276832712;
	Var45 = 1;
	Var45.f_1 = 1;
	Var45.f_2 = 1105014447;
	Var45.f_4 = -1;
	Var45.f_5 = -1134602452;
	Var45.f_6 = 1276832712;
	Var45.f_18 = 1;
	Var45.f_19 = 1;
	Var45.f_20 = 1;
	Var45.f_24 = 1;
	Var45.f_25 = 1;
	Var45.f_26 = 1;
	Var45.f_27 = -1;
	uParam0->f_5835 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "PlayerWardrobeRoot");
	iVar9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_5835, "main_menu");
	uParam0->f_3084 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(iVar9, "list");
	iVar9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_5835, "item_style");
	uParam0->f_3761 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(iVar9, "list");
	iVar9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_5835, "item_variation");
	uParam0->f_5263 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(iVar9, "list");
	iVar9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_5835, "outfit_customizations");
	uParam0->f_5640 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(iVar9, "list");
	Var10.f_8 = 1;
	Var10.f_9 = 1;
	Var24.f_8 = 1;
	Var24.f_9 = 1;
	Var45.f_8 = 1;
	Var45.f_9 = 1;
	iVar0 = 0;
	while (iVar0 <= 44)
	{
		StringCopy(&cVar1, "item_type_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		func_890(uParam0->f_3084.f_1[iVar0 /*15*/], uParam0->f_5835, cVar1, Var10);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 99)
	{
		StringCopy(&cVar1, "item_style_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		func_891(uParam0->f_3761.f_1[iVar0 /*15*/], uParam0->f_5835, cVar1, Var24);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 24)
	{
		StringCopy(&cVar1, "item_variation_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		func_891(uParam0->f_5263.f_1[iVar0 /*15*/], uParam0->f_5835, cVar1, Var24);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		StringCopy(&cVar1, "item_customize_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		func_892(uParam0->f_5640.f_1[iVar0 /*22*/], uParam0->f_5835, cVar1, Var45);
		iVar0++;
	}
	func_893(uParam0, 0, "main_menu", "CustomizeOutfitEnabled", 0);
	func_893(uParam0, 1, "main_menu", "CustomizeOutfitVisible", 0);
	func_893(uParam0, 2, "itemInfo", "text1visible", 0);
	func_893(uParam0, 3, "itemInfo", "text2visible", 0);
	func_893(uParam0, 4, "itemInfo", "text3visible", 0);
	func_893(uParam0, 5, "item_style", "ExtraOptionPromptEnabled", 0);
	func_893(uParam0, 6, "item_style", "ExtraOptionPromptVisible", 0);
	func_893(uParam0, 7, "item_style", "SaveOutfitOptionEnabled", 0);
	func_893(uParam0, 8, "item_style", "SaveOutfitOptionVisible", 0);
	func_893(uParam0, 9, "item_style", "InspectItemOptionEnabled", 1);
	func_893(uParam0, 10, "item_style", "InspectItemOptionVisible", 1);
	func_894(uParam0, 0, "header", "label", 1435214408);
	func_894(uParam0, 1, "header", "sublabel", 0);
	func_894(uParam0, 2, "footer", "label", 0);
	func_894(uParam0, 3, "itemInfo", "text1", 0);
	func_894(uParam0, 4, "itemInfo", "text2", 0);
	func_894(uParam0, 5, "itemInfo", "text3", 0);
	func_894(uParam0, 6, "item_style", "back_link", 927041140);
	func_894(uParam0, 7, "item_style", "ExtraOptionPromptKey", -430643131);
	func_894(uParam0, 8, "item_style", "SaveOutfitOptionPromptKey", -1400108436);
	func_894(uParam0, 9, "item_style", "InspectItemOptionPromptKey", -1876738730);
	func_895(uParam0, 0, "footer", "labelRaw", "");
	uParam0->f_5861 = 1;
}

void func_416()
{
	int iVar0;
	struct<2> Var1;
	vector3 vVar3;
	struct<2> Var6;

	func_896();
	Global_1946804 = 0;
	func_897();
	Global_1946804->f_2535.f_2 = 0;
	Global_1946804->f_2535.f_1 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		*(Global_1946804->f_2535.f_43[iVar0 /*2*/]) = { Var1 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		Global_1946804->f_2535.f_3[iVar0] = 0;
		vVar3.x = &Global_1946804->f_57[iVar0 /*11*/];
		*(Global_1946804->f_1497.f_1[iVar0 /*3*/]) = { vVar3 };
		*(Global_1946804->f_1378.f_1[iVar0 /*3*/]) = { vVar3 };
		*(Global_1946804->f_2456[iVar0 /*2*/]) = { Var6 };
		Global_1946804->f_2377[iVar0 /*2*/] = 0;
		(Global_1946804->f_2377[iVar0 /*2*/])->f_1 = 0;
		iVar0++;
	}
	Global_1946804->f_2589.f_1 = 0;
	Global_1946804->f_2589 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_1946804->f_2589.f_2[iVar0 /*2*/] = 39;
		iVar0++;
	}
	Global_1946804->f_2792 = 1;
	Global_1946804->f_2793 = 0;
}

bool func_417(int iParam0)
{
	return (Global_26795.f_774 && iParam0) != 0;
}

void func_418(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;

	func_898(iParam0, 1, 1, -142743235, 1);
	if (func_899(iParam0))
	{
		func_414(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = func_901(func_900(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	func_423(-2124052603);
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = &Global_1946804->f_57[iVar1 /*11*/];
		*(Global_1946804->f_1616.f_1[iVar1 /*3*/]) = { vVar4 };
		(Global_1946804->f_1616.f_1[iVar1 /*3*/])->f_2 = ((Global_1946804->f_1497.f_1[iVar1 /*3*/])->f_2 || (Global_1946804->f_1378.f_1[iVar1 /*3*/])->f_2);
		iVar1++;
	}
	if (func_145() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	func_422(&(Global_1946804->f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	func_422(&(Global_1946804->f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	*(Global_1946804->f_1616.f_1[8 /*3*/]) = { func_902(8, 0) };
	*(Global_1946804->f_1616.f_1[9 /*3*/]) = { func_902(9, 0) };
	*(Global_1946804->f_1616.f_1[0 /*3*/]) = { func_902(0, 0) };
	*(Global_1946804->f_1616.f_1[2 /*3*/]) = { func_902(2, 0) };
	*(Global_1946804->f_1616.f_1[3 /*3*/]) = { func_902(3, 0) };
	*(Global_1946804->f_1616.f_1[1 /*3*/]) = { func_902(1, 0) };
	*(Global_1946804->f_1616.f_1[5 /*3*/]) = { func_902(5, 0) };
	*(Global_1946804->f_1616.f_1[6 /*3*/]) = { func_902(6, 0) };
	*(Global_1946804->f_1616.f_1[7 /*3*/]) = { func_902(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == func_903(iVar8, iVar0))
				{
					func_904(Global_1946804->f_1616.f_1[iVar8 /*3*/], iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == func_903(iVar8, iVar0))
		{
			func_904(Global_1946804->f_1616.f_1[iVar8 /*3*/], iVar8, iVar0);
		}
		iVar0++;
	}
	if (bVar7)
	{
		iVar8 = 0;
		while (iVar8 < 39)
		{
			if (iParam0 == &Global_1946804->f_1497.f_1[iVar8 /*3*/])
			{
				*(Global_1946804->f_1497.f_1[iVar8 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar8 /*3*/]) };
				bVar3 = true;
			}
			if (iParam0 == &Global_26795.f_627.f_1.f_1.f_1[iVar8 /*3*/])
			{
				*(Global_26795.f_627.f_1.f_1.f_1[iVar8 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar8 /*3*/]) };
				bVar3 = true;
			}
			if (bVar3)
			{
			}
			else
			{
				iVar8++;
			}
		}
	}
	else
	{
		if (iParam0 == &Global_1946804->f_1497.f_1[iVar8 /*3*/])
		{
			*(Global_1946804->f_1497.f_1[iVar8 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar8 /*3*/]) };
		}
		if (iParam0 == &Global_26795.f_627.f_1.f_1.f_1[iVar8 /*3*/])
		{
			*(Global_26795.f_627.f_1.f_1.f_1[iVar8 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar8 /*3*/]) };
		}
	}
	iVar1 = 0;
	while (iVar1 < 39)
	{
		*(Global_1946804->f_1378.f_1[iVar1 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar1 /*3*/]) };
		iVar1++;
	}
}

void func_419()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	int iVar5;

	iVar5 = 16;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_903(iVar5, iVar0);
		if (iVar1 == &Global_1946804->f_57[iVar5 /*11*/] || iVar1 == 0)
		{
			if (func_145() == -2125499975 || func_145() == -449205311)
			{
				vVar2.x = -2018863109;
				vVar2.f_1 = 1530758430;
				func_904(&vVar2, iVar5, iVar0);
			}
			else
			{
				vVar2.x = 1734931872;
				vVar2.f_1 = 1155669136;
				func_904(&vVar2, iVar5, iVar0);
			}
		}
		iVar0++;
	}
	vVar2.x = -2018863109;
	vVar2.f_1 = 1530758430;
	if (&Global_1946804->f_57[iVar5 /*11*/] == &Global_26795.f_627.f_1.f_1.f_1[iVar5 /*3*/] || 0 == &Global_26795.f_627.f_1.f_1.f_1[iVar5 /*3*/])
	{
		*(Global_26795.f_627.f_1.f_1.f_1[iVar5 /*3*/]) = { vVar2 };
	}
}

void func_420(int iParam0)
{
	Global_26795.f_774 = (Global_26795.f_774 || iParam0);
}

void func_421()
{
	var uVar0;
	var uVar6;

	func_905(&(Global_1946804->f_1378), -1);
	func_868();
	func_427(7);
	uVar0 = 5;
	func_423(-2124052603);
	if (!func_906(&uVar0))
	{
		func_907(&uVar0);
		func_871(0, 1);
	}
	if (!func_908(&uVar6, &(Global_26795.f_627.f_1.f_1)))
	{
		func_909(&(Global_26795.f_627.f_1.f_1), 1);
	}
}

int func_422(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<4> Var4;

	Var4 = func_397(iParam6);
	Var4.f_1 = iParam1;
	Var4.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var4);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		return 0;
	}
	DATAFILE::_0xA63CD20F19B961AB(&bVar2, &Var4, -1516819610);
	DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 2049745650);
	*iParam2 = bVar2;
	Global_1946804->f_2652 = 0;
	if (!bVar2 && !bParam3)
	{
		func_911(uParam0, func_910(iVar0), 1);
	}
	while (DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_901(iVar3, 1);
			if (iVar1 < 0 || iVar1 > 39)
			{
			}
			else if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1373051002))
			{
			}
			else
			{
				Global_1946804->f_2612[Global_1946804->f_2652] = iVar1;
				Global_1946804->f_2652++;
				uParam0->f_1[iVar1 /*3*/] = iVar0;
				if (bParam5)
				{
					if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1441384))
					{
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 1155669136;
					}
					else
					{
						Jump @343; //curOff = 278
						if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1194786549))
						{
							if (func_912(iVar3) && func_913(&(uParam0->f_1[iVar1 /*3*/]), iVar3, &iVar0))
							{
								(uParam0->f_1[iVar1 /*3*/])->f_1 = iVar0;
							}
						}
						else
						{
							(uParam0->f_1[iVar1 /*3*/])->f_1 = iVar0;
						}
					}
					if (bVar2)
					{
						iVar1 = 0;
						while (iVar1 < Global_1946804->f_2652)
						{
							func_914(uParam0, &(uParam0->f_1[&Global_1946804->f_2612[iVar1] /*3*/]), &(Global_1946804->f_2612[iVar1]), 0, 0);
							iVar1++;
						}
					}
					if (bParam4)
					{
						*uParam0 = iParam1;
					}
					return 1;
				}
			}
		}
	}

void func_423(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;

	if (func_28() == -1)
	{
		Var2 = -1394038466;
	}
	else
	{
		Var2 = 545953470;
	}
	Var2.f_1 = iParam0;
	Var2.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var2);
	while (DATAFILE::_0xED4413CEE1BF142C(&Var2))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar1, &Var2, -2008906477))
		{
			return;
		}
		iVar0 = func_901(iVar1, 1);
		if (iVar0 < 0 || iVar0 >= 39)
		{
		}
		else
		{
			func_915(Global_1946804->f_1378.f_1[iVar0 /*3*/], 2, 6);
		}
	}
}

void func_424(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	func_916(&(Global_1946804->f_1497), iParam0);
	if (bParam2)
	{
		func_917(2, iParam0, 6);
	}
	if (bParam1)
	{
		func_871(0, 1);
	}
}

void func_425(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	func_918(iParam0, Global_35, iParam1, iParam2, iParam3, bParam4);
	func_919();
}

void func_426(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		iParam0 = func_920();
	}
	func_921(iParam0, Global_35, iParam1, bParam2);
	func_922();
}

void func_427(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	Global_1946804->f_2657.f_26.f_2 = 3;
	Global_1946804->f_2657.f_26.f_1 = 3;
	Global_1946804->f_2657.f_26 = 3;
	if (func_28() == -1)
	{
		func_923(352481484);
		iVar0 = 0;
		while (iVar0 < Global_26795.f_19)
		{
			Global_1946804->f_2657[iVar0] = &Global_26795[iVar0];
			iVar0++;
		}
		Global_1946804->f_2657.f_20 = Global_26795.f_20;
		Global_1946804->f_2657.f_21 = Global_26795.f_21;
		Global_1946804->f_2657.f_22 = Global_26795.f_22;
		Global_1946804->f_2657.f_23 = Global_26795.f_23;
		Global_1946804->f_2657.f_24 = Global_26795.f_24;
		Global_1946804->f_2657.f_25 = Global_26795.f_25;
		Global_1946804->f_2657.f_19 = Global_26795.f_19;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_36637.f_45.f_350.f_19)
		{
			Global_1946804->f_2657[iVar0] = &Global_36637.f_45.f_350[iVar0];
			iVar0++;
		}
		Global_1946804->f_2657.f_20 = Global_36637.f_45.f_350.f_20;
		Global_1946804->f_2657.f_21 = Global_36637.f_45.f_350.f_21;
		Global_1946804->f_2657.f_22 = Global_36637.f_45.f_350.f_22;
		Global_1946804->f_2657.f_23 = Global_36637.f_45.f_350.f_23;
		Global_1946804->f_2657.f_24 = Global_36637.f_45.f_350.f_24;
		Global_1946804->f_2657.f_25 = Global_36637.f_45.f_350.f_25;
		Global_1946804->f_2657.f_19 = Global_36637.f_45.f_350.f_19;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar2 = &Global_1946804->f_2657[iVar0];
		if (func_469(iVar2) != -999503751)
		{
			func_924(&(Global_1946804->f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (func_925(iVar2, 0))
		{
			func_926(iVar2, &Global_1946804->f_1497.f_1[iVar1 /*3*/] == &Global_1946804->f_2657[iVar0]);
		}
		iVar0++;
	}
}

bool func_428(int iParam0)
{
	return func_129(iParam0, 1);
}

void func_429(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (bParam0)
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, 1);
	}
	else
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, 0);
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 1, 1);
	}
}

void func_430(int iParam0)
{
	int iVar0;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1955569->f_5.f_1))
	{
		return;
	}
	if (DATABINDING::_DATABDING_GET_ARRAY_COUNT(Global_1955569->f_5.f_1) > iParam0)
	{
		iVar0 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(Global_1955569->f_5.f_1, iParam0);
		if (iVar0 == &Global_1955569->f_5.f_2[iParam0 /*36*/])
		{
			return;
		}
	}
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1955569->f_5.f_1, iParam0, "pause_info_panel_list", &(Global_1955569->f_5.f_2[iParam0 /*36*/]));
}

void func_431(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 440, !bParam0);
}

void func_432(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 439, !bParam0);
}

void func_433(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 438, !bParam0);
}

void func_434(bool bParam0)
{
	int iVar0;

	iVar0 = 398076311;
	if (bParam0)
	{
		HUD::_0x4CC5F2FC1332577F(iVar0);
	}
	else
	{
		HUD::_0x8BC7C1F929D07BF3(iVar0);
	}
}

void func_435(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 50;
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 1);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 1);
	}
	else
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 0);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 0);
	}
}

void func_436(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 49;
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 1);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 1);
	}
	else
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 0);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 0);
	}
}

var func_437(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<4> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = iParam4;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam8;
	Var13.f_7 = 1;
	Var13 = iParam7;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = _NAMESPACE71::_0x26E87218390E6729(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

void func_438(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_927(iParam0, &iVar0, &iVar1);
	if (!func_928(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_929(iVar0, iVar1);
}

bool func_439(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_901(iParam0, 1) /*3*/] != &Global_1946804->f_57[func_901(iParam0, 1) /*11*/];
}

int func_440(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return &(Global_1946804->f_1497.f_1[func_901(iParam0, 1) /*3*/]);
}

int func_441(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_38(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_930(iParam0, 0, 1) };
	Var5 = { func_883(iParam0, Var0, Var0.f_4, 0) };
	return func_886(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

int func_442(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;

	if (iParam3 == -358215195)
	{
		Var0 = { func_930(iParam1, 1, 0) };
		iParam3 = func_931(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_932(iParam1, iParam2, func_901(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_933(1, (func_28() == -1 && iParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (iParam8 && iParam1 != &Global_1946804->f_57[func_901(iParam3, 1) /*11*/])
			{
				func_407(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_399(32768) && iParam1 != &Global_1946804->f_57[func_901(iParam3, 1) /*11*/])
			{
				func_405();
				func_407(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_407(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_934(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_407(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_408(0);
			func_935(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_407(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_443()
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-1526891582))
	{
		func_936();
		UNLOCK::_UNLOCK_SET_UNLOCKED(-1526891582, true);
		func_153(joaat("weapon_revolver_cattleman_john"));
		func_441(joaat("weapon_revolver_cattleman_john"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_revolver_cattleman_john"), true, 2, false, false);
		func_153(joaat("weapon_melee_knife_john"));
		func_441(joaat("weapon_melee_knife_john"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_melee_knife_john"), true, 4, false, false);
	}
}

void func_444(int iParam0)
{
	int iVar0;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1955569->f_5.f_1))
	{
		return;
	}
	iVar0 = &Global_1955569->f_5.f_2[iParam0 /*36*/];
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iVar0))
	{
		return;
	}
	DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(Global_1955569->f_5.f_1, iVar0);
}

void func_445(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam0 < 0 || iParam0 > 95)
	{
		return;
	}
	if (!Global_40 || iParam4)
	{
		func_132(iParam0, iParam3);
	}
	(Global_40.f_7157[iParam0 /*3*/])->f_1 = iParam1;
	(Global_40.f_7157[iParam0 /*3*/])->f_2 = iParam2;
}

void func_446(bool bParam0)
{
	if (bParam0 == func_937())
	{
		return;
	}
	if (bParam0)
	{
		func_938(81053684);
		if (!func_939(func_761(0)))
		{
			func_938(-525676072);
		}
	}
	else
	{
		func_940(81053684);
		func_940(-525676072);
	}
	Global_1946804->f_2792 = bParam0;
}

void func_447(int iParam0, bool bParam1, int iParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_6, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_5, iParam2);
}

void func_448()
{
	func_941();
	func_942();
	func_943();
}

int func_449(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_28() == -1)
	{
		if (func_944(iParam0) && func_945(iParam0))
		{
			func_946(iParam0, iParam1, 1, &iParam2, iParam3);
			return 0;
		}
	}
	else if (iParam0 == 1259508039)
	{
		iParam2 = 1;
	}
	else if (iParam0 == joaat("weapon_unarmed"))
	{
		return 0;
	}
	return 1;
}

int func_450(int iParam0, var uParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	*uParam1 = iParam2;
	func_947(iParam0, uParam1);
	Var0 = { func_930(iParam0, 0, 1) };
	iVar5 = func_948(iParam0, &Var0, 0, 0);
	iVar6 = func_949(iParam0, 0);
	if ((iVar5 > 1 && !func_123()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_467(iParam0, -2051813666))
		{
			func_438(583, 1);
		}
		else
		{
			func_438(582, 0);
		}
	}
	if (func_950(iParam0, &Var0, *uParam1, 0, 0))
	{
		if (iVar6 < iVar5)
		{
			*uParam1 = (iVar5 - iVar6);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_451(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_951(iParam0, -949239683))
	{
		case -1565009253:
		case -1273369295:
		case -1239610997:
		case -1229959999:
		case -1050374492:
		case -873135685:
		case -164980960:
		case 10252101:
		case 24248412:
		case 82200319:
		case 632545869:
		case 733893097:
		case 871191033:
		case 1513351077:
		case 1712126263:
		case 1894156335:
			Global_1935496->f_59.f_6 = 1;
			Global_1935496->f_59.f_7 = 0;
			Global_1935496->f_59.f_1 = iParam0;
			Global_1935496->f_59.f_5 = MISC::GET_GAME_TIMER();
			break;
	}
}

int func_452(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_38(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_466(iParam0);
	if (iVar0 == 307971639 || (iParam1 && iVar0 == -427144552))
	{
		iVar1 = func_952(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_953(iParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_860(bParam2), iParam0, 0);
	return iVar2;
}

bool func_453(int iParam0)
{
	if (func_28() != -1)
	{
		return false;
	}
	return func_454(iParam0) != 0;
}

int func_454(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < func_954())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_955(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_455(int iParam0)
{
	return COLLECTION::_0x6052B4DE6657684F(iParam0);
}

int func_456(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < func_954())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_455(iVar0))
		{
			if (func_162(func_955(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_457(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	func_956(48);
	func_649(0, -1);
}

int func_458(int iParam0)
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, iParam0);
}

int func_459(int iParam0)
{
	return COLLECTION::_0x93F2E7B5DB85657B(-2076669067, iParam0);
}

int func_460(int iParam0)
{
	if (func_28() != -1)
	{
		return 0;
	}
	return func_120(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
}

int func_461(int iParam0)
{
	if (func_28() != -1)
	{
		return 0;
	}
	if (!func_242(iParam0))
	{
		return 0;
	}
	return func_693(((*Global_1347702)[iParam0 /*49*/])->f_15);
}

int func_462()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_162(func_957(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_463(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	vector3 vVar6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;

	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_35() && (func_461(38) || func_206(38)))
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_02";
				sVar5 = "COL_CC_INTRO";
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
				iVar13 = 38816757; /* GXTEntry: "Smoking and Other Hobbies" */
			}
			else
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_01";
				sVar5 = "COL_CC_INTRO_PRE";
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
				iVar13 = 578982838; /* GXTEntry: "A New Hobby" */
			}
			sVar4 = "COL_CC_TITLE";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = 12;
			iVar14 = -2076669067;
			break;
		case 39:
			if (func_35() && (func_461(39) || func_206(39)))
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_02";
				sVar5 = "COL_DB_INTRO";
				iVar9 = 3;
				iVar11 = 1162303770; /* GXTEntry: "Deborah MacGuiness" */
				iVar13 = -1223580455; /* GXTEntry: "A Test of Faith" */
			}
			else
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_01";
				sVar5 = "COL_DB_INTRO_PRE";
				iVar9 = 1;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
				iVar13 = 349797279; /* GXTEntry: "Digging up the Past" */
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_DB_TITLE";
			vVar6 = { 122.7758f, -185.4978f, 116.4383f };
			iVar10 = 30;
			iVar14 = -440187297;
			break;
		case 43:
			if (iParam3 == -1791518714)
			{
				sVar0 = "MISSION_RCEXO1";
				sVar3 = "RCEXO1_DESC";
				iVar10 = 30;
			}
			else if (iParam3 == -2087881550)
			{
				sVar0 = "MISSION_RCEXO2";
				sVar3 = "RCEXO2_DESC";
				iVar10 = 37;
			}
			else if (iParam3 == 1908068621)
			{
				sVar0 = "MISSION_RCEXO3";
				sVar3 = "RCEXO3_DESC";
				iVar10 = 40;
			}
			else if (iParam3 == 1611247019)
			{
				sVar0 = "MISSION_RCEXO4";
				sVar3 = "RCEXO4_DESC";
				iVar10 = 50;
			}
			else if (iParam3 == 1319635688)
			{
				sVar0 = "MISSION_RCEXO5";
				sVar3 = "RCEXO5_DESC";
				iVar10 = 25;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_EX_TITLE";
			sVar5 = "COL_EX_INTRO";
			vVar6 = { 2585.668f, -1009.616f, 44.97972f };
			iVar9 = func_958(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963; /* GXTEntry: "Duchesses and Other Animals" */
			break;
		case 41:
			if (func_35() && (func_461(41) || func_206(41)))
			{
				sVar0 = "MISSION_RCFSH2";
			}
			else
			{
				sVar0 = "MISSION_RCFSH1";
			}
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_RARE_FISH_01";
			sVar4 = "COL_LF_TITLE";
			sVar5 = "COL_LF_INTRO";
			vVar6 = { 337.3075f, -684.5404f, 41.8362f };
			iVar9 = 13;
			iVar14 = 1995362678;
			iVar11 = -273196610; /* GXTEntry: "Jeremy Gill" */
			iVar13 = -1666208710; /* GXTEntry: "A Fisher of Fish" */
			break;
		case 49:
			if (func_35() && (func_461(49) || func_206(49)))
			{
				sVar0 = "MISSION_RCRKF2";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_02";
				sVar5 = "COL_RC_INTRO";
				iVar9 = 3;
				iVar11 = -781551276; /* GXTEntry: "Francis Sinclair" */
				iVar13 = -170865073; /* GXTEntry: "Geology for Beginners" */
			}
			else
			{
				sVar0 = "MISSION_RCRKF1";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_01";
				sVar5 = "COL_RC_INTRO_PRE";
				iVar9 = 1;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
				iVar13 = 1974744712; /* GXTEntry: "Rock Carvings" */
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_RC_TITLE";
			vVar6 = { -2178.646f, -245.6886f, 191.1569f };
			iVar10 = 10;
			iVar14 = 2103522376;
			break;
		case 51:
			sVar0 = "MISSION_RCTAX1";
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_TAXIDERMY_01";
			sVar4 = "COL_TX_TITLE";
			sVar5 = "COL_TX_INTRO";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = func_958(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931; /* GXTEntry: "Ms. L Hobbs" */
			iVar13 = -1424865411; /* GXTEntry: "A Better World, A New Friend" */
			break;
	}
	sVar2 = func_959(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar12 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar12 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (func_960(iParam0, iVar13, iVar14))
	{
	}
	if (func_961(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_962(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_963(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_964(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_965(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_464(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_465(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_35() && (func_461(38) || func_206(38)))
			{
				sVar1 = "COL_CC_INTRO";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
			}
			else
			{
				sVar1 = "COL_CC_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
			}
			iVar6 = 38816757; /* GXTEntry: "Smoking and Other Hobbies" */
			break;
		case 39:
			sVar0 = "COL_DB_TITLE";
			sVar3 = "COL_DB_FOUND";
			iVar7 = -440187297;
			if (func_35() && (func_461(39) || func_206(39)))
			{
				sVar1 = "COL_DB_INTRO";
				iVar4 = 1162303770; /* GXTEntry: "Deborah MacGuiness" */
			}
			else
			{
				sVar1 = "COL_DB_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
			}
			iVar6 = -1223580455; /* GXTEntry: "A Test of Faith" */
			break;
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			sVar0 = "COL_EX_TITLE";
			sVar3 = "COL_EX_ITEMS_COLLECTED";
			sVar1 = "COL_EX_INTRO";
			iVar7 = -1531394072;
			iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar6 = 911890963; /* GXTEntry: "Duchesses and Other Animals" */
			break;
		case 41:
			sVar0 = "COL_LF_TITLE";
			sVar3 = "COL_LF_CAUGHT";
			sVar1 = "COL_LF_INTRO";
			iVar7 = 1995362678;
			iVar4 = -273196610; /* GXTEntry: "Jeremy Gill" */
			iVar6 = -1666208710; /* GXTEntry: "A Fisher of Fish" */
			break;
		case 49:
			sVar0 = "COL_RC_TITLE";
			sVar3 = "COL_RC_FOUND";
			iVar7 = 2103522376;
			if (func_35() && (func_461(49) || func_206(49)))
			{
				sVar1 = "COL_RC_INTRO";
				iVar4 = -781551276; /* GXTEntry: "Francis Sinclair" */
			}
			else
			{
				sVar1 = "COL_RC_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
			}
			iVar6 = -170865073; /* GXTEntry: "Geology for Beginners" */
			break;
		case 51:
			sVar0 = "COL_TX_TITLE";
			sVar3 = "COL_TX_CARCASS_COLLECTED";
			sVar1 = "COL_TX_INTRO";
			iVar7 = 678508515;
			iVar4 = 1986498931; /* GXTEntry: "Ms. L Hobbs" */
			iVar6 = -1424865411; /* GXTEntry: "A Better World, A New Friend" */
			break;
	}
	if (iParam5 == 2)
	{
		sVar0 = "MISSION_COMPLETE";
		iVar4 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar5 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar5 = MISC::GET_HASH_KEY("toast_log_blips");
		sVar1 = "COL_ALL_LOG_UPDATED";
	}
	sVar2 = "COL_CTX_PLAYER_LOG";
	if (iVar7 == -2076669067)
	{
		if (func_35() && (func_461(38) || func_206(38)))
		{
			iVar6 = 38816757; /* GXTEntry: "Smoking and Other Hobbies" */
		}
		else
		{
			iVar6 = 578982838; /* GXTEntry: "A New Hobby" */
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 0)
		{
			iVar5 = iParam1;
			iVar4 = iParam2;
		}
		if (iParam5 == 2)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			iParam3 = 12;
			iParam4 = 12;
			func_966(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_966(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_437(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, func_967(func_459(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_966(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_966(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_35() && (func_461(39) || func_206(39)))
		{
			iVar6 = -1223580455; /* GXTEntry: "A Test of Faith" */
		}
		else
		{
			iVar6 = 349797279; /* GXTEntry: "Digging up the Past" */
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_966(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_966(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_35() && (func_461(49) || func_206(49)))
		{
			iVar6 = -170865073; /* GXTEntry: "Geology for Beginners" */
		}
		else
		{
			iVar6 = 1974744712; /* GXTEntry: "Rock Carvings" */
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_966(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_966(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_966(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_966(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_466(int iParam0)
{
	vector3 vVar0;

	if (!func_38(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_467(int iParam0, int iParam1)
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

int func_468(int iParam0, int iParam1)
{
	if (!func_38(iParam0, 0))
	{
		return 0;
	}
	return INVENTORY::_0x245D07651B1D183B(iParam0, iParam1);
}

int func_469(int iParam0)
{
	struct<2> Var0;

	if (!func_38(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_470(int iParam0, bool bParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case -1639263599:
			iVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case 1222378998:
			iVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case 2074469742:
			iVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case 480079517:
			iVar0 = joaat("weapon_thrown_dynamite");
			break;
		case 840671577:
			iVar0 = joaat("weapon_thrown_dynamite");
			break;
		case joaat("ammo_molotov"):
			iVar0 = joaat("weapon_thrown_molotov");
			break;
		case -2006166057:
			iVar0 = joaat("weapon_thrown_molotov");
			break;
		case 1235846615:
			iVar0 = joaat("weapon_thrown_tomahawk");
			break;
		case -228768324:
			iVar0 = joaat("weapon_thrown_tomahawk_ancient");
			break;
		case -1411922943:
			iVar0 = joaat("weapon_thrown_tomahawk");
			break;
		case -834103244:
			iVar0 = joaat("weapon_thrown_tomahawk");
			break;
		case 424030678:
			iVar0 = joaat("weapon_melee_hatchet");
			break;
		case 446901936:
			iVar0 = joaat("weapon_melee_hatchet_hunter");
			break;
		case -1092841802:
			iVar0 = joaat("weapon_melee_hatchet_hunter_rusted");
			break;
		case -1452241321:
			iVar0 = joaat("weapon_melee_ancient_hatchet");
			break;
		case -1188697038:
			iVar0 = joaat("weapon_melee_cleaver");
			break;
		case 1671758975:
			iVar0 = joaat("weapon_melee_hatchet_double_bit");
			break;
		case -893514737:
			iVar0 = joaat("weapon_melee_hatchet_double_bit_rusted");
			break;
		case -2063089161:
			iVar0 = joaat("weapon_melee_hatchet_hewing");
			break;
		case -452897925:
			iVar0 = joaat("weapon_melee_hatchet_viking");
			break;
		default:
			break;
	}
	if (func_38(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_270(iVar0) || func_968(iVar0))
			{
				return iVar0;
			}
		}
		else
		{
			return iVar0;
		}
	}
	return iParam0;
}

int func_471(int iParam0, bool bParam1)
{
	if (!func_38(iParam0, 0))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return iParam0;
	}
	if (!bParam1)
	{
	}
	return 0;
}

int func_472(bool bParam0)
{
	if (func_28() == -1)
	{
		return 1;
	}
	return INVENTORY::_0x0FBBFFC891A97C81(func_860(bParam0));
}

int func_473(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> Var0;
	int iVar5;
	struct<10> Var6;
	int iVar28;
	struct<4> Var29;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	if (WEAPON::_0x959383DCD42040DA(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
	{
		Var0 = { func_930(iParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_969((375 + iVar28), 1);
			if (func_970(iParam0, &Var0, iVar5, 0))
			{
				if (func_971(iParam0, &Var6, iVar5))
				{
					Var29 = { func_883(iParam0, Var0, iVar5, 0) };
					func_972(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_472(0))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
					{
						return 0;
					}
					func_474(WEAPON::_0x5C2EA6C44F515F34(iParam0), iParam1, iParam6);
					func_973(iParam0, iParam1);
					return 1;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
				{
					return 0;
				}
				if (iParam1 > 0)
				{
				}
				WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return 1;
			}
		}
	}

int func_474(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_476(iParam0))
	{
		return 0;
	}
	if (!func_472(0))
	{
		return 0;
	}
	WEAPON::_0x106A811C6D3035F3(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

int func_475(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar6;
	int iVar7;

	iVar0 = func_471(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
		if (func_28() == -1)
		{
			func_153(iVar0);
			if (iParam1 == 1248274121)
			{
				func_974(iVar0);
			}
		}
		if (!func_950(iParam0, &uVar1, 1, 0, 0))
		{
			func_946(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_975(iVar0);
			if (WEAPON::_0x6AD66548840472E5(iVar0))
			{
				func_473(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("weapon_fishingrod") || iVar0 == joaat("weapon_kit_binoculars"))
			{
				func_473(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("weapon_lasso"))
			{
				func_473(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_0x959383DCD42040DA(iVar0))
			{
				if (iVar0 == joaat("weapon_melee_knife_john") && !func_372())
				{
					return 0;
				}
				if (WEAPON::_0x2C83212A7AA51D3D(iParam0))
				{
				}
				else if (!func_976(iVar0))
				{
					func_473(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_473(iVar0, WEAPON::_0xD3750CCC00635FC2(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_0xD955FEE4B87AFA07(iVar0))
			{
				iVar7 = func_37(Global_35, 2, 0, 1);
				if ((((func_39(iVar7) && !Global_43890) && iVar7 != iVar0) && !func_162(-1185145312, 1, 0)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_35, iVar7);
				}
				if (func_39(iVar7) && func_162(-1185145312, 1, 0))
				{
					if (!func_473(iVar0, iVar6, bParam3, bParam4, 3, 1, iParam1, 0))
					{
						return 0;
					}
				}
				else if (!func_473(iVar0, iVar6, bParam3, bParam4, 0, 1, iParam1, 0))
				{
					return 0;
				}
			}
			else if (!func_473(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
			{
				return 0;
			}
		}
	}
	else
	{
		return 0;
	}
	if (WEAPON::_0x9F0E1892C7F228A8(1) != 0 && iParam1 == 1248274121)
	{
		func_438(480, 1);
	}
	return 1;
}

bool func_476(int iParam0)
{
	return WEAPON::_0x1F7977C9101F807F(iParam0);
}

int func_477(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_476(iParam0))
	{
		return 0;
	}
	iVar4 = WEAPON::_0x7AA043F6C41D151E(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	if (func_39(iVar4))
	{
		WEAPON::GET_MAX_AMMO(Global_35, &iVar2, iVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (iVar4 == joaat("weapon_bow"))
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = WEAPON::_0xD3750CCC00635FC2(iVar4);
	}
	if (*iParam1 > 0)
	{
		iVar6 = *iParam1;
	}
	else if (*iParam1 < 0)
	{
		iVar6 = (iVar1 * MISC::ABSI(*iParam1));
	}
	if (func_162(611073244, 1, 0) && iParam2 == -897553835)
	{
		iVar6 = BUILTIN::CEIL((IntToFloat(iVar6) * 1.1f));
	}
	if (iVar5 >= iVar6)
	{
		iVar0 = iVar6;
	}
	else if (iVar5 < iVar6 && iVar5 >= 1)
	{
		iVar0 = iVar5;
	}
	else
	{
		func_510(func_977(iParam0), func_509(iParam0), 1);
		return 0;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_28() == -1)
		{
			if (func_120(((*Global_1835011)[14 /*74*/])->f_1, 1))
			{
				func_438(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_472(0))
	{
		if (func_474(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return 1;
		}
	}
	else
	{
		return func_441(iParam0, *iParam1, iParam2);
	}
	return 0;
}

void func_478(int iParam0)
{
	var uVar0;

	if ((iParam0 == -615217896 && !func_413()) || iParam0 != -615217896)
	{
		if (func_978(Global_35, iParam0, &uVar0))
		{
			func_442(PLAYER::PLAYER_PED_ID(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415:
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_448();
			break;
		case -832719552:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_448();
			break;
		case -1941112926:
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_448();
			break;
		case -615217896:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_499();
			break;
		case -121629511:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_497();
			break;
	}
}

void func_479(int iParam0)
{
	switch (iParam0)
	{
		case -224110471:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_497();
			break;
		case 1289585739:
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_498();
			break;
		case 1441506783:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 780305678:
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case -935153695:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_499();
			break;
		case 655868243:
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_500();
			break;
		case 1299744282:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 1631240196:
			Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
			break;
		case 1768869276:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.15f);
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.15f);
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.15f);
			func_448();
			break;
		case -569248339:
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_538();
			break;
		case -1196089647:
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case -982895431:
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_537();
			break;
		case -1056342069:
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_480(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

void func_481(var uParam0, var uParam1, int iParam2)
{
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

void func_482(int iParam0)
{
	bool bVar0;

	bVar0 = func_467(iParam0, -2017733358);
	if (func_979() < 3)
	{
		if (bVar0)
		{
			if (func_981(func_980(iParam0), iParam0))
			{
				func_510(79, func_509(func_980(iParam0)), 1);
			}
			else
			{
				func_510(78, func_509(func_980(iParam0)), 1);
			}
		}
		else
		{
			func_510(80, func_509(func_982(iParam0)), 1);
		}
	}
}

int func_483()
{
	if (((((func_983(839908568, 400) || func_983(-1134030454, 400)) || func_983(623353496, 400)) || func_983(-344413337, 400)) || func_983(-1664948962, 400)) || func_983(1795228059, 400))
	{
		return 1;
	}
	return 0;
}

int func_484(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;

	iVar0 = func_984(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_529(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_530(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_485(int iParam0)
{
	switch (iParam0)
	{
		case -625427311:
			func_463(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_465(51, 0, 0, 0, 0, -1, 0);
			func_985(8192);
			break;
		case 581047644:
			func_463(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_465(51, 0, 0, 0, 0, -1, 0);
			func_985(524288);
			break;
		case -644199619:
			func_463(39, 0, 0, 0, 0, 0, 1, 0);
			func_465(39, 0, 0, 0, 0, -1, 0);
			func_986(16);
			break;
		case 684296857:
			func_463(41, 0, 0, 0, 0, 0, 1, 0);
			func_465(41, 0, 0, 0, 0, -1, 0);
			func_987(8);
			break;
		case 466137807:
			func_463(49, 0, 0, 0, 0, 0, 1, 0);
			func_465(49, 0, 0, 0, 0, -1, 0);
			func_988(16);
			break;
		case -1087522507:
			func_463(43, 0, 0, -1791518714, func_989(1), 0, -1, 0);
			func_990(1);
			break;
		case -405829000:
			func_463(43, 0, 0, -2087881550, func_989(2), 0, -1, 0);
			func_990(2);
			break;
		case 378660860:
			func_463(43, 0, 0, 1908068621, func_989(4), 0, -1, 0);
			func_990(4);
			break;
		case 1566111097:
			func_463(43, 0, 0, 1611247019, func_989(8), 0, -1, 0);
			func_990(8);
			break;
		case 1276007140:
			func_463(43, 0, 0, 1319635688, func_989(16), 0, -1, 0);
			func_990(16);
			break;
	}
}

void func_486(int iParam0)
{
	if (func_991() == 1)
	{
		if (func_206(39))
		{
			func_438(342, 0);
		}
		else
		{
			func_438(343, 0);
			func_986(1);
		}
	}
	if (func_991() >= 30)
	{
		func_438(344, 0);
	}
	func_463(39, 0, 0, 0, 0, 0, -1, 0);
	func_465(39, 0, 0, func_991(), 30, 1, 0);
}

void func_487(int iParam0)
{
	if (func_992() == 1)
	{
		if (func_206(49))
		{
			func_438(409, 0);
		}
		else
		{
			func_438(410, 0);
			func_988(1);
		}
	}
	if (func_992() >= 10)
	{
		func_438(411, 0);
	}
	func_463(49, 0, 0, 0, 0, 0, -1, 0);
	func_465(49, 0, 0, func_992(), 10, 1, 0);
}

void func_488(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 1369162587:
			COLLECTION::_0x3EA62E56F386C997(-949689219, 1);
			func_438(437, 0);
			func_438(440, 0);
			func_665(-949689219, 444160793, &iVar0, 1, 0, 0);
			func_463(51, 0, 0, -949689219, iVar0, 0, -1, 0);
			func_465(51, 0, 0, iVar0, func_958(-949689219, 20), 1, 0);
			func_985(1);
			func_576(-748969569, 0, 0);
			break;
		case 1610047510:
			COLLECTION::_0x3EA62E56F386C997(-1248968496, 1);
			func_665(-1248968496, -1969404854, &iVar0, 1, 0, 0);
			func_463(51, 0, 0, -1248968496, iVar0, 0, -1, 0);
			func_465(51, 0, 0, iVar0, func_958(-1248968496, 20), 1, 0);
			func_985(8);
			break;
		case 1317879106:
			COLLECTION::_0x3EA62E56F386C997(1706369307, 1);
			func_665(1706369307, -832850511, &iVar0, 1, 0, 0);
			func_463(51, 0, 0, 1706369307, iVar0, 0, -1, 0);
			func_465(51, 0, 0, iVar0, func_958(1706369307, 20), 1, 0);
			func_985(64);
			break;
		case 1062444751:
			COLLECTION::_0x3EA62E56F386C997(1520110311, 1);
			func_665(1520110311, -100913452, &iVar0, 1, 0, 0);
			func_463(51, 0, 0, 1520110311, iVar0, 0, -1, 0);
			func_465(51, 0, 0, iVar0, func_958(1520110311, 20), 1, 0);
			func_985(512);
			break;
		case 754186760:
			COLLECTION::_0x3EA62E56F386C997(-1992824800, 1);
			func_438(438, 0);
			func_665(-1992824800, 905173572, &iVar0, 1, 0, 0);
			func_463(51, 0, 0, -1992824800, iVar0, 0, -1, 0);
			func_465(51, 0, 0, iVar0, func_958(-1992824800, 20), 1, 0);
			func_985(32768);
			break;
		default:
			func_438(439, 0);
			break;
	}
}

void func_489()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(-1278339625) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(-1278339625, -1316535105, 1);
	}
}

void func_490(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (func_28() == -1)
	{
		if (!func_206(43))
		{
			if (iParam0 == 281887510)
			{
				func_438(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_438(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_438(352, 0);
			}
			else if (iParam0 == 728781265)
			{
				func_438(400, 0);
			}
		}
		else if (func_467(iParam0, 412399755))
		{
			func_993(-1791518714);
			if (func_994() == 0)
			{
				func_649(0, 10);
				iVar1 = func_995(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_996(iParam0) < func_997(iParam0))
					{
						func_463(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_465(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_206(44))
		{
			if (iParam0 == -222563712)
			{
				func_438(354, 0);
			}
			else if (iParam0 == 1794857344)
			{
				func_438(399, 0);
			}
			else if (iParam0 == 1952409553)
			{
				func_438(401, 0);
			}
		}
		else if (func_467(iParam0, 709057512))
		{
			func_993(-2087881550);
			if (func_994() == 1)
			{
				func_649(0, 10);
				iVar1 = func_995(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_996(iParam0) < func_997(iParam0))
					{
						func_463(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_465(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_206(45))
		{
			if (iParam0 == 2116770557)
			{
				func_438(359, 0);
			}
			else if (iParam0 == -651064726)
			{
				func_438(394, 0);
			}
			else if (iParam0 == -404270094)
			{
				func_438(395, 0);
			}
			else if (iParam0 == 2093126853)
			{
				func_438(398, 0);
			}
		}
		else if (func_467(iParam0, -1478961327))
		{
			func_993(1908068621);
			if (func_994() == 2)
			{
				func_649(0, 10);
				iVar1 = func_995(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_998(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0)) >= 25)
					{
						func_999(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0), 1);
						func_956(48);
					}
					if (func_996(iParam0) < func_997(iParam0))
					{
						func_463(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_465(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_996(iParam0) < func_997(iParam0))
					{
						func_463(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_465(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_206(46))
		{
			if (iParam0 == 2085530337)
			{
				func_438(356, 0);
			}
			else if (iParam0 == -150591160)
			{
				func_438(402, 0);
			}
			else if (iParam0 == -323969289)
			{
				func_438(404, 0);
			}
			else if (iParam0 == 1504361882)
			{
				func_438(406, 0);
			}
		}
		else if (func_467(iParam0, -1238404098))
		{
			func_993(1611247019);
			if (func_994() == 3)
			{
				func_649(0, 10);
				iVar1 = func_995(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_996(iParam0) < func_997(iParam0))
					{
						func_463(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_465(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_206(47))
		{
			if (iParam0 == -1521783510)
			{
				func_438(396, 0);
			}
			else if (iParam0 == 1714875242)
			{
				func_438(397, 0);
			}
			else if (iParam0 == 927763737)
			{
				func_438(405, 0);
			}
			else if (iParam0 == 1019229063)
			{
				func_438(403, 0);
			}
		}
		else if (func_467(iParam0, 1160548794))
		{
			func_993(1319635688);
			if (func_994() == 4)
			{
				func_649(0, 10);
				iVar1 = func_995(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_996(iParam0) < func_997(iParam0))
					{
						func_463(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_465(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_491(int iParam0)
{
	int iVar0;

	if (iParam0 == 2116770557)
	{
		if (!func_998(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0)) >= 25)
		{
			func_999(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0), 1);
			func_956(48);
		}
	}
}

void func_492(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, 678508515, -1160144609);
		if (func_162(func_1000(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_1001(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_1002(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_493(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_28() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			iVar0 = MISC::_0x6F02B5E50511721E(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_484(0, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255:
			func_484(-949580860, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493:
			func_484(-1171997683, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627:
			func_484(-2140931002, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377:
			func_484(-1116228267, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086:
			func_484(2112896861, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -2001202686:
			func_484(-1915150712, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1111063991:
			func_484(994220262, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1576210101:
			func_484(-1388440107, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 675090918:
			func_484(-1531790128, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 355838765:
			func_484(1351791770, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -343824903:
			func_484(-161493966, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1142684684:
			func_484(668131102, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1243851340:
			if (!func_1003())
			{
				func_484(1330954593, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case -525490740:
			func_484(817681514, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1736635264:
			func_484(1404311868, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970:
			func_484(-175152067, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1027115192:
			func_484(-526915387, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1064332555:
			func_484(101362741, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1954478446:
			func_484(1458818027, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -518592739:
			func_484(-1957208512, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -2010073778:
			func_484(2066857461, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -700133011:
			func_484(803940201, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1415414735:
			func_484(-1717765429, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 2045548742:
			func_484(1379920914, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 830381058:
			func_484(447209691, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

void func_494(int iParam0)
{
	if (func_206(41))
	{
		func_438(363, 0);
	}
	else
	{
		func_438(362, 0);
	}
	switch (iParam0)
	{
		case 323124696:
			func_1004(-1865241121);
			func_1005(-642026005);
			func_1006(-642026005);
			func_649(0, 10);
			break;
		case -2108314374:
			func_1004(2117142684);
			func_1005(-940584364);
			func_1006(-940584364);
			func_649(0, 10);
			break;
		case -1193798153:
			func_1004(-1409326024);
			func_1005(1972645282);
			func_1006(1972645282);
			func_649(0, 10);
			break;
		case -787702678:
			func_1004(-641744968);
			func_1005(1667205433);
			func_1006(1667205433);
			func_649(0, 10);
			break;
		case -804542901:
			func_1004(-946988203);
			func_1005(1362715885);
			func_1006(1362715885);
			func_649(0, 10);
			break;
		case -1696275132:
			func_1004(-646136018);
			func_1005(1053540370);
			func_1006(1053540370);
			func_649(0, 10);
			break;
		case -161595323:
			func_1004(-955835837);
			func_1005(-1100103852);
			func_1006(-1100103852);
			func_649(0, 10);
			break;
		case -1114363619:
			func_1004(-179276075);
			func_1005(-1409869209);
			func_1006(-1409869209);
			func_649(0, 10);
			break;
		case -368407134:
			func_1004(-492711560);
			func_1005(-1760235357);
			func_1006(-1760235357);
			func_649(0, 10);
			break;
		case 1997759228:
			func_1004(1764383959);
			func_1005(-138366827);
			func_1006(-138366827);
			func_649(0, 10);
			break;
		case 1265573293:
			func_1004(317501533);
			func_1005(-1261163843);
			func_1006(-1261163843);
			func_649(0, 10);
			break;
		case -1030441283:
			func_1004(817753087);
			func_1005(-963523016);
			func_1006(-963523016);
			func_649(0, 10);
			break;
		case -1490884871:
			func_1004(576606016);
			func_1005(560825326);
			func_1006(560825326);
			func_649(0, 10);
			break;
		case -395458616:
			func_1004(814934957);
			func_1005(858269539);
			func_1006(858269539);
			break;
	}
}

void func_495(int iParam0, int iParam1)
{
	var uVar0;

	func_1007(iParam0, iParam1, &uVar0);
}

int func_496(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	bool bVar17;
	int iVar18;
	int iVar19;

	Var3.f_9 = -1591664384;
	bVar17 = false;
	*uParam0 = 0;
	iVar18 = func_37(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, 1, 0);
	iVar19 = func_37(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, 1, 0);
	if (func_391("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_392(&Var3, iVar2, iVar0, iVar1))
			{
				if (WEAPON::_0xD955FEE4B87AFA07(Var3.f_4))
				{
					if (!bParam1)
					{
						if (Var3.f_4 == iVar18 || Var3.f_4 == iVar19)
						{
						}
						else
						{
							if (!bVar17)
							{
								*uParam0 = Var3.f_4;
								bVar17 = true;
							}
						}
						iVar2++;
						func_393(iVar0);
						if (*uParam0 != 0)
						{
							return 1;
						}
						return 0;
					}
				}
			}
		}
	}

void func_497()
{
	PLAYER::_0x11A7FF918EF6BC66(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_60));
}

void func_498()
{
	float fVar0;
	float fVar1;

	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	PLAYER::_0x497A6539BB0E8787(PLAYER::PLAYER_ID(), (1f - fVar0), (1f - fVar1));
}

void func_499()
{
	PLAYER::_0xE0D6C2A146A5C993(PLAYER::PLAYER_ID(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_500()
{
	PLAYER::_0xB427911EA6DFFEF3(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_63));
}

void func_501(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	vector3 vVar4;

	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_JACK_HALL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -293111728; /* GXTEntry: "Jack Hall Gang Treasure" */
			break;
		case 666607663:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_HIGH_STAKES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = 1406403390; /* GXTEntry: "High Stakes Treasure" */
			break;
		case -220219788:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_POISONOUS_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = 917780075; /* GXTEntry: "The Poisonous Trail Treasure" */
			break;
		case 218622660:
			sVar3 = "COL_TH_SUB_TRESOR_DES_MORTS";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -857004026; /* GXTEntry: "Le Tresor des Morts Treasure" */
			break;
		case 390004462:
			sVar3 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -1108821735; /* GXTEntry: "The Elemental Trail Treasure" */
			break;
		case 6410548:
			sVar3 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -208135085; /* GXTEntry: "Landmarks Of Riches Treasure" */
			break;
	}
	switch (iParam1)
	{
		case 854119837:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_01";
			break;
		case -1292544588:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_02";
			break;
		case -1003325394:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_03";
			break;
		case -696705861:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_04";
			break;
		case -335460405:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_01";
			break;
		case 903797617:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_02";
			break;
		case 669728650:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_03";
			break;
		case 1595354593:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_04";
			break;
		case 1214120047:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_01";
			break;
		case 655769340:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_02";
			break;
		case 885316185:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_03";
			break;
		case -2016706455:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_04";
			break;
		case -1491419385:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_01";
			break;
		case 1809565830:
			sVar1 = "COL_TH_OBJ_RDL";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_02";
			break;
		case 2056119786:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_03";
			break;
		case -628873767:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_01";
			break;
		case -405421956:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_02";
			break;
		case -1108972386:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_03";
			break;
		case -878376933:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_04";
			break;
		case 1053716392:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_01";
			break;
		case 806507056:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_02";
			break;
		case 1571925350:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_03";
			break;
		case 1330352282:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_04";
			break;
		case 975496781:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_05";
			break;
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar0))
	{
		UILOG::_UILOG_REMOVE_ENTRY(3, iVar0);
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar0))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iVar0, vVar4, MISC::GET_HASH_KEY("COL_TH_TITLE"), MISC::GET_HASH_KEY(sVar2), 0);
	}
	if (bParam2)
	{
		switch (iParam0)
		{
			case 499813453:
				sVar1 = "COL_TH_JACK_HALL_COMPLETE";
				break;
			case 666607663:
				sVar1 = "COL_TH_HIGH_STAKES_COMPLETE";
				break;
			case -220219788:
				sVar1 = "COL_TH_POISONOUS_TRAIL_COMPLETE";
				break;
			case 218622660:
				sVar1 = "COL_TH_TRESOR_DES_MORTS_COMPLETE";
				break;
			case 390004462:
				sVar1 = "COL_TH_ELEMENTAL_TRAIL_COMPLETE";
				break;
			case 6410548:
				sVar1 = "COL_TH_LANDMARKS_OF_RICHES_COMPLETE";
				break;
		}
	}
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iVar0, MISC::GET_HASH_KEY(sVar1), sVar1, 0, 0, 0);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iVar0, 1);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iVar0, MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), MISC::GET_HASH_KEY("toast_log_blips"));
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iVar0, MISC::GET_HASH_KEY("MISSION_RETH"), MISC::GET_HASH_KEY("SP_MISSIONS_19"));
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iVar0, MISC::_CREATE_VAR_STRING(2, sVar3));
}

void func_502(int iParam0, bool bParam1)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;

	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_JACK_HALL";
			iVar0 = -293111728; /* GXTEntry: "Jack Hall Gang Treasure" */
			break;
		case 666607663:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_HIGH_STAKES";
			iVar0 = 1406403390; /* GXTEntry: "High Stakes Treasure" */
			break;
		case -220219788:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_POISONOUS_TRAIL";
			iVar0 = 917780075; /* GXTEntry: "The Poisonous Trail Treasure" */
			break;
		case 218622660:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_TRESOR_DES_MORTS";
			iVar0 = -857004026; /* GXTEntry: "Le Tresor des Morts Treasure" */
			break;
		case 390004462:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			iVar0 = -1108821735; /* GXTEntry: "The Elemental Trail Treasure" */
			break;
		case 6410548:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			iVar0 = -208135085; /* GXTEntry: "Landmarks Of Riches Treasure" */
			break;
	}
	sVar3 = "COL_CTX_PLAYER_LOG";
	if (bParam1)
	{
		sVar1 = "MISSION_COMPLETE";
	}
	UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar0);
	func_966(MISC::_CREATE_VAR_STRING(2, sVar1), MISC::_CREATE_VAR_STRING(2, sVar2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), 1433015236, MISC::_CREATE_VAR_STRING(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_503(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_504(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_505(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_506(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_507(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_508(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_509(int iParam0)
{
	if (!func_38(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_510(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_927(iParam0, &iVar0, &iVar1);
	if (!func_928(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1008(iParam0, 1024))
	{
		return;
	}
	func_929(iVar0, iVar1);
	(Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/] = uParam1;
	((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 2;
}

void func_511(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_927(iParam0, &iVar0, &iVar1);
	if (!func_928(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1008(iParam0, 1024))
	{
		return;
	}
	func_929(iVar0, iVar1);
	(Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/] = iParam1;
	if (!bParam3)
	{
		((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 1;
	}
	else
	{
		((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 5;
	}
}

int func_512()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = COLLECTION::_0x5461C821D00FE15A(-2076669067, 0);
	if (iVar0 == func_954())
	{
		return func_513();
	}
	iVar4 = (func_954() - iVar0);
	iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_954())
	{
		iVar1 = COLLECTION::_0x126CBEBBA46693CF(iVar2, -2076669067, 0);
		if (!func_1009(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_955(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_513()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_954());
	return func_955(COLLECTION::_0x126CBEBBA46693CF(iVar0, -2076669067, 0));
}

void func_514(int iParam0)
{
	switch (*iParam0)
	{
		case -1424823393:
			*iParam0 = -885810591; /* GXTEntry: "Premium Cigarettes" */
			break;
		case 998010398:
			*iParam0 = -324053813; /* GXTEntry: "Chewing Tobacco" */
			break;
		case 1358243310:
			*iParam0 = 1463786584; /* GXTEntry: "Cigarettes" */
			break;
		case -541584777:
			*iParam0 = 206762213; /* GXTEntry: "Cocaine Gum" */
			break;
	}
}

void func_515(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_28() != -1)
	{
		return;
	}
	switch (func_469(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_1010(81053684, 0) <= 0)
			{
				func_407(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_407(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_402(iParam0);
			if (func_396(iVar0))
			{
				func_1011(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_407(30, iParam0, 0, 0, 0);
			}
			if (func_145() == -2125499975 || func_145() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_407(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_145() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024:
						func_407(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_1012(-525676072, 0))
			{
				if (func_1013(-525676072, &iVar1))
				{
					func_407(33, iVar1, 0, 0, 0);
				}
			}
			func_407(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_439(99217379))
		{
			func_442(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_156(24);
		if (func_496(&iVar2, 0))
		{
			func_473(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_516(int iParam0)
{
	if (func_467(iParam0, 943695443))
	{
		func_1014(0, iParam0);
	}
	else if (func_467(iParam0, -2096528786))
	{
		func_1014(1, iParam0);
	}
	else if (func_467(iParam0, -1094167013))
	{
		func_1014(2, iParam0);
	}
	else if (func_467(iParam0, 1936654645))
	{
		func_1014(3, iParam0);
	}
	else if (func_467(iParam0, 1306489306))
	{
		func_1014(4, iParam0);
	}
	else if (func_467(iParam0, 435762317))
	{
		func_1014(5, iParam0);
	}
	else if (func_467(iParam0, 1259363210))
	{
		func_1014(6, iParam0);
	}
	else if (func_467(iParam0, 881398259))
	{
		func_1014(7, iParam0);
	}
	else if (func_467(iParam0, -541549214))
	{
		func_1014(8, iParam0);
	}
	else if (func_467(iParam0, 130796156))
	{
		func_1014(-1, iParam0);
	}
}

int func_517(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;

	Var4.f_1 = 10;
	func_1015(&Var4, 1356624740);
	return func_1016(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_518(int iParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_38(iParam0, 0))
	{
		return Var0;
	}
	if (func_467(iParam0, -305066475))
	{
		if (func_28() == -1)
		{
			if (func_467(iParam0, -537818634))
			{
				return func_155(189951448);
			}
			else
			{
				return func_155(1176172851);
			}
		}
	}
	else if (func_467(iParam0, -537818634))
	{
		return func_155(-963660207);
	}
	if (func_467(iParam0, 2084895747))
	{
		return func_155(1694039471);
	}
	return Var2;
}

void func_519(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			if (func_28() == -1)
			{
				if (func_120(((*Global_1835011)[4 /*74*/])->f_1, 1))
				{
					func_438(109, 1);
				}
			}
			break;
	}
}

void func_520(int iParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_1018(func_1017(0));
	func_1020(MISC::_CREATE_VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_1019(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_521(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;
	char cVar2[32];
	int iVar6;
	struct<2> Var7;
	int iVar10;
	int iVar11;
	int iVar12;
	char* sVar13;
	int iVar14;
	char* sVar15;

	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_38(iParam0, 0))
	{
		return;
	}
	if (iParam0 == 1807503187)
	{
		return;
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (!func_1021())
	{
		func_1022(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_1023(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_1023(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_468(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_466(iParam0);
	iVar10 = 0;
	iVar11 = 805880880;
	if ((iVar6 == 307971639 && iParam0 != 424030678) && iParam0 != -1188697038)
	{
		iVar10 = 622449822;
		iVar11 = 622449822;
	}
	if (iVar6 == -1013984273 || iVar6 == 658570475)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_1024(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (MISC::GET_HASH_KEY(Var7) == 121560594)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Var7))
	{
		return;
	}
	iVar12 = 109029619;
	sVar13 = "Transaction_Positive";
	iVar14 = 0;
	if (bVar0)
	{
		iVar12 = 619977481;
		sVar13 = "Transaction_Negative";
		iVar14 = 1;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_IS_OVERPOWERED_ITEM(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar12 = -856358433;
		}
		else
		{
			iVar12 = -1905433004;
		}
	}
	sVar15 = func_1025(MISC::_CREATE_VAR_STRING(10, &cVar2, MISC::_CREATE_VAR_STRING(0, func_509(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_467(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = MISC::_CREATE_VAR_STRING(0, func_509(iParam0));
	}
	func_1020(sVar15, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

int func_522(var uParam0)
{
	vector3 vVar0;

	if (!func_1026(23, &vVar0))
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

int func_523(int iParam0, var uParam1, var uParam2)
{
	struct<4> Var0;
	var uVar5;

	if (!func_1026(23, &Var0))
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

int func_524(int iParam0)
{
	return iParam0;
}

int func_525()
{
	int iVar0;

	iVar0 = func_1027();
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

int func_526()
{
	int iVar0;

	iVar0 = func_525();
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

void func_527(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	MISC::SET_BIT(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

int func_528(var uParam0)
{
	struct<5> Var0;
	var uVar5;

	if (func_97())
	{
		return 0;
	}
	if (!func_1026(3, &Var0))
	{
	}
	Var0.f_1 = 0;
	Var0.f_2 = -2017996124;
	Var0.f_3 = uParam0;
	Var0.f_4 = 0;
	if (DATAFILE::_DATAFILE_GET_INT(&uVar5, &Var0))
	{
	}
	return uVar5;
}

void func_529(int iParam0, char* sParam1, var uParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_1020(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_530(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_1028())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_1020(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_1029(iVar0);
			func_1030(iVar0, 0, 0);
		}
		func_1020(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, iParam4);
		func_481(func_155(1644987397), iVar1);
	}
}

int func_531(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_38(iParam0, 0))
	{
		return 0;
	}
	if (Global_1935630->f_12)
	{
		return 0;
	}
	iVar0 = func_952(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_391("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_392(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_39(Var4.f_4))
			{
			}
			else if (WEAPON::_0x5C2EA6C44F515F34(Var4.f_4) == iVar0)
			{
				func_393(iVar1);
				return 1;
			}
			iVar3++;
		}
		func_393(iVar1);
	}
	return 0;
}

int func_532(vector3 vParam0, bool bParam3)
{
	int iVar0;
	float fVar1;

	if (func_28() != -1)
	{
		return -1;
	}
	iVar0 = 6;
	fVar1 = MISC::_GET_TEMPERATURE_AT_COORDS(vParam0);
	if (fVar1 <= 10f)
	{
		if (func_32(4))
		{
			iVar0 = 6;
		}
		else
		{
			iVar0 = 7;
		}
	}
	else if (fVar1 <= 27f)
	{
		if (func_1031(6) || !bParam3)
		{
			iVar0 = 6;
		}
	}
	else if (fVar1 > 27f)
	{
		if (func_1031(9) || !bParam3)
		{
			iVar0 = 9;
		}
		else if (func_1031(6))
		{
			iVar0 = 6;
		}
	}
	return iVar0;
}

void func_533()
{
	if (!func_1032())
	{
		return;
	}
	func_1033();
}

void func_534(int iParam0, var uParam1)
{
	Global_40.f_11095[iParam0] = uParam1;
	ATTRIBUTE::_0xC6258F41D86676E0(Global_35, func_629(iParam0), func_628(BUILTIN::ROUND(&(Global_40.f_11095[iParam0]))));
}

void func_535(int iParam0, var uParam1)
{
	Global_40.f_11095.f_11[iParam0] = uParam1;
}

void func_536()
{
	PLAYER::_0x22C8B10802301381(PLAYER::PLAYER_ID(), Global_40.f_11095.f_59);
}

void func_537()
{
	float fVar0;
	float fVar1;

	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	PLAYER::SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(PLAYER::PLAYER_ID(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	PLAYER::_0x08E22898A6AF4905(PLAYER::PLAYER_ID(), (1f - fVar0));
	PLAYER::_0xFECA17CF3343694B(PLAYER::PLAYER_ID(), (1f - fVar0));
	PLAYER::_0xBBADFB5E5E5766FB(PLAYER::PLAYER_ID(), (1f - fVar1));
}

void func_538()
{
	PLAYER::_0xFE7C9CF376D23342(PLAYER::PLAYER_ID(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_539()
{
	int iVar0;

	VOLUME::_0x748C5F51A18CB8F0(0);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_1034(iVar0))
		{
			func_1035(iVar0);
		}
		iVar0++;
	}
	VOLUME::_0x748C5F51A18CB8F0(1);
}

void func_540()
{
	bool bVar0;

	bVar0 = DLC::IS_DLC_PRESENT(33819255);
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(2116153146, 0);
			func_1036(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(-121456797, false);
			func_140();
		}
		return;
	}
	if (!func_120(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return;
	}
	func_1037();
	if (MISSIONDATA::_0x57E798B54C45EE1A(1685912227) >= 2)
	{
		if (MISSIONDATA::_0x57E798B54C45EE1A(2116153146) < 2)
		{
			MISSIONDATA::_0xE824CE7D13FCB300(2116153146, 2);
		}
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(-121456797, true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(645322743))
	{
		return;
	}
	func_1036(1);
}

void func_541()
{
	if (!func_120(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(304788622))
	{
		return;
	}
	func_152(1351927599, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(304788622, true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-1968398307))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(-1968398307, true);
}

void func_542()
{
	bool bVar0;

	bVar0 = DLC::IS_DLC_PRESENT(-751383868);
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(1244328330))
		{
			func_1038(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(1244328330, false);
		}
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(1244328330))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-1383789777))
	{
		return;
	}
	if (!func_120(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(1244328330, true);
	func_1038(1);
}

void func_543()
{
	bool bVar0;

	bVar0 = DLC::IS_DLC_PRESENT(-1499823613);
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(398807247))
		{
			func_1039(15000, 0, 0, 0, 1);
			func_1038(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(398807247, false);
		}
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(398807247))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-1651350587))
	{
		return;
	}
	if (!func_120(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(398807247, true);
	func_1040(15000, 0, 1065353216, 1, 0, 0, 1, 752097756);
	func_1038(1);
}

void func_544()
{
	bool bVar0;

	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(-1491419385) > 0)
		{
			if ((!func_162(1191437462, 1, 0) && !func_693(((*Global_1835011)[23 /*74*/])->f_1)) && !Global_43890)
			{
				func_152(1191437462, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_230(1))
			{
				func_506(1);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(1809565830) > 0)
		{
			if ((!func_162(1119149048, 1, 0) && !func_693(((*Global_1835011)[23 /*74*/])->f_1)) && !Global_43890)
			{
				func_152(1119149048, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_230(2))
			{
				func_506(2);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(2056119786) > 0 && !func_230(4))
		{
			func_506(4);
		}
		if (func_230(0))
		{
			func_1041(0);
		}
	}
	else
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(-1491419385) > 0)
		{
			if (func_162(1191437462, 1, 0))
			{
				func_898(1191437462, 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(1809565830) > 0)
		{
			if (func_162(1119149048, 1, 0))
			{
				func_898(1119149048, 1, 1, -142743235, 0);
			}
		}
		if (func_230(1))
		{
			func_1041(1);
		}
		if (func_230(2))
		{
			func_1041(2);
		}
		if (func_230(4))
		{
			func_1041(4);
		}
		if (!func_230(0))
		{
			func_506(0);
		}
	}
}

void func_545()
{
	bool bVar0;
	struct<4> Var1;
	int iVar15;
	int iVar16;

	bVar0 = UNLOCK::_UNLOCK_IS_UNLOCKED(240039223);
	if (!bVar0)
	{
		return;
	}
	if (!func_120(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-236259196))
	{
		return;
	}
	Var1 = { func_1042() };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
	{
		func_153(joaat("weapon_revolver_doubleaction"));
		if (func_473(joaat("weapon_revolver_doubleaction"), 0, 0, 0, 0, 0, 752097756, 0))
		{
			Var1 = { func_1042() };
		}
	}
	if (INVENTORY::_0xB881CA836CC4B6D4(&Var1))
	{
		func_1043(-2055673461, Var1, 1423542233);
		func_1043(-202131179, Var1, -1264898804);
		func_1043(2013836545, Var1, 1592019450);
		func_1043(1497476650, Var1, 1117400455);
		func_1043(1063571467, Var1, 1150213537);
		func_1043(2107224237, Var1, 1598825281);
		func_1043(1747981656, Var1, -712527121);
		func_1043(-1371140647, Var1, 454332195);
		func_1043(-19142973, Var1, 256105670);
		func_1043(-2074737817, Var1, -1328061889);
		func_1043(-1114256243, Var1, -782241404);
		func_1043(-1653277288, Var1, 1669853467);
		func_1043(1869398132, Var1, -1559225678);
		func_1043(459868358, Var1, -266425508);
		if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1) && !func_1044())
		{
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar15, false, 2, false);
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar16, false, 0, false);
			if (func_39(iVar16))
			{
				if (iVar16 != joaat("weapon_revolver_doubleaction"))
				{
					if (WEAPON::_0xD955FEE4B87AFA07(iVar16))
					{
						if (func_125(24))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar16, true, 3, false, false);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_revolver_doubleaction"), true, 0, false, false);
					}
					else if (WEAPON::_0x0556E9D2ECF39D01(iVar16))
					{
						if ((func_125(24) && func_39(iVar15)) && iVar15 != joaat("weapon_revolver_doubleaction"))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar15, true, 3, false, false);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_revolver_doubleaction"), true, 2, false, false);
					}
				}
			}
			else if (!func_39(iVar15))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_revolver_doubleaction"), true, 2, false, false);
			}
			else if (iVar15 != joaat("weapon_revolver_doubleaction"))
			{
				if (func_125(24))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar15, true, 3, false, false);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_revolver_doubleaction"), true, 2, false, false);
			}
		}
		UNLOCK::_UNLOCK_SET_UNLOCKED(-236259196, true);
	}
}

void func_546()
{
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(99890643))
	{
		return;
	}
	if (MISC::IS_PC_VERSION() || MISC::_IS_STADIA_VERSION())
	{
		UNLOCK::_UNLOCK_SET_UNLOCKED(99890643, true);
	}
	if (MISC::IS_ORBIS_VERSION())
	{
		UNLOCK::_UNLOCK_SET_UNLOCKED(99890643, true);
	}
}

int func_547(vector3 vParam0)
{
	int iVar0;

	iVar0 = func_1045(vParam0, 0f, 0f, 0, 2);
	return func_1045(vParam0, ((*Global_1894052)[iVar0 /*3*/])->f_1, ((*Global_1894052)[iVar0 /*3*/])->f_2, Global_1894052[iVar0 /*3*/], 4);
}

bool func_548(int iParam0, int iParam1)
{
	return (Global_1897952[iParam0 /*2*/] && iParam1) != 0;
}

int func_549(int iParam0)
{
	int iVar0;

	if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1897952)[iParam0 /*2*/])->f_1))
	{
		return ((*Global_1897952)[iParam0 /*2*/])->f_1;
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_BAYOU_NWA");
			VOLUME::_0x39816F6F94F385AD(iVar0, 2037.5f, -2050f, 150f, 0f, 0f, 18f, 575f, 750f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2485f, -1497.5f, 150f, 0f, 0f, 20f, 725f, 1050f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2060f, -1812.5f, 150f, 0f, 0f, 20f, 315f, 750f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1975f, -1452.5f, 150f, 0f, 0f, -43f, 200f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2022.5f, -1277.5f, 150f, 0f, 0f, -7f, 100f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2022.5f, -925f, 150f, 0f, 0f, 20f, 865f, 365f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2200f, -2440f, 150f, 0f, 0f, 0f, 500f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1762.5f, -737.5f, 150f, 0f, 0f, 20f, 500f, 175f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2020.944f, -580.694f, 150f, 0f, 0f, -111f, 400f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2116.078f, -612.5f, 150f, 0f, 0f, -1f, 240f, 540f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2197.5f, -693.982f, 150f, 0f, 0f, -111f, 200f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2527.5f, -785f, 150f, 0f, 0f, -80f, 400f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3550f, -1455f, 150f, 0f, 0f, 0f, 1800f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2687.5f, -757.5f, 150f, 0f, 0f, -80f, 400f, 75f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2826.796f, -755f, 150f, 0f, 0f, 0f, 282.646f, 400f, 700f);
			break;
		case 1:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_BIG_VALLEY");
			VOLUME::_0x39816F6F94F385AD(iVar0, -1605f, -382.5f, 150f, 0f, 0f, 25f, 1100f, 1200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2035f, -810f, 150f, 0f, 0f, -65f, 400f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1887.5f, -1050f, 150f, 0f, 0f, -45f, 210f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2210f, -625f, 150f, 0f, 0f, -65f, 200f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2827.5f, -82.5f, 150f, 0f, 0f, 167f, 1500f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -930f, -730f, 150f, 0f, 0f, 0f, 600f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -825f, -780f, 150f, 0f, 0f, -45f, 300f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -632.5f, -902.5f, 150f, 0f, 0f, -20f, 300f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -820f, -170f, 150f, 0f, 0f, 37.5f, 500f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -835f, -525f, 150f, 0f, 0f, 41f, 200f, 400f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -532.5f, -32.5f, 150f, 0f, 0f, -27f, 150f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -605f, 50f, 150f, 0f, 0f, -75f, 200f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -540f, 50f, 150f, 0f, 0f, -140f, 150f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1127.5f, -90f, 150f, 0f, 0f, -32.5f, 200f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1500f, 392.5f, 150f, 0f, 0f, 160f, 700f, 400f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1477.5f, 552.5f, 150f, 0f, 0f, 143f, 800f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1656.969f, 378.098f, 150f, 0f, 0f, 122f, 795f, 1083f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2617.969f, 452.097f, 150f, 0f, 0f, 167f, 1763f, 1500f, 700f);
			break;
		case 2:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_BLUEGILL_MARSH");
			VOLUME::_0x39816F6F94F385AD(iVar0, 3585f, -280f, 150f, 0f, 0f, 0f, 1800f, 550f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3085f, -337.5f, 150f, 0f, 0f, -80.5f, 300f, 1500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2440f, -465f, 150f, 0f, 0f, -1f, 400f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2322.5f, -537.5f, 150f, 0f, 0f, -111f, 100f, 150f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3100f, 125f, 150f, 0f, 0f, 41f, 1700f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3670f, 80f, 150f, 0f, 0f, 41f, 1400f, 475f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2332.651f, -365.338f, 150f, 0f, 0f, 86f, 150f, 140f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2124.824f, -347.118f, 150f, 0f, 0f, 86f, 140f, 291f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3726.431f, -755f, 150f, 0f, 0f, 0f, 1518.809f, 400f, 700f);
			break;
		case 3:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_CUMBERLAND_FOREST");
			VOLUME::_0x39816F6F94F385AD(iVar0, 190.4736f, 1214.829f, 200f, 0f, 0f, 59f, 488.2586f, 443.9291f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 695f, 1075f, 200f, 0f, 0f, 35f, 250f, 250f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -11.22244f, 1259.539f, 200f, 0f, 0f, 0f, 135f, 340.8336f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 667.5f, 1675f, 200f, 0f, 0f, 15f, 150f, 325f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 627.5f, 1255f, 200f, 0f, 0f, 9.999999f, 400f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 507.5f, 1532.5f, 200f, 0f, 0f, -45f, 300f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 72.5f, 1297.5f, 200f, 0f, 0f, 50f, 400f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 615f, 1750f, 200f, 0f, 0f, -93f, 200f, 150f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 510f, 1025f, 200f, 0f, 0f, 1f, 300f, 250f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 330.2712f, 1028.66f, 200f, 0f, 0f, 82f, 300f, 100f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 224.7084f, 1010.634f, 200f, 0f, 0f, 58.85596f, 175f, 267.2676f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 153.0846f, 1314.722f, 200f, 0f, 0f, -23f, 400f, 409.2231f, 800f);
			break;
		case 4:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GREAT_PLAINS");
			VOLUME::_0x39816F6F94F385AD(iVar0, -1285f, -1725f, 150f, 0f, 0f, 20f, 500f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1360f, -1540f, 150f, 0f, 0f, 30f, 500f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1492.5f, -1262.5f, 150f, 0f, 0f, 15f, 500f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1410f, -1147.5f, 150f, 0f, 0f, 25f, 700f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -865f, -1125f, 150f, 0f, 0f, -20f, 700f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -865f, -1725f, 150f, 0f, 0f, 0f, 800f, 1200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1300f, -1917.5f, 150f, 0f, 0f, -42f, 250f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1180f, -2122.5f, 150f, 0f, 0f, 20f, 300f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -955f, -1065f, 150f, 0f, 0f, -45f, 250f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1052.5f, -990f, 150f, 0f, 0f, 1.25f, 200f, 200f, 700f);
			break;
		case 7:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GRIZZLIES_WEST");
			VOLUME::_0x39816F6F94F385AD(iVar0, -100f, 1557.5f, 200f, 0f, 0f, 50f, 225f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -162.5f, 1660f, 200f, 0f, 0f, 0f, 135f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -162.5f, 1952.5f, 200f, 0f, 0f, 9f, 300f, 800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -752.5f, 2135f, 200f, 0f, 0f, 0f, 1050f, 1975f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2139.972f, 1966.829f, 200f, 0f, 0f, 165f, 1814.271f, 1288f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1295f, 1090f, 200f, 0f, 0f, 122f, 1200f, 300f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1080f, 1132.5f, 200f, 0f, 0f, 105f, 1200f, 375f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -895f, 1150f, 200f, 0f, 0f, 45f, 800f, 800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -845f, 720f, 200f, 0f, 0f, 0f, 200f, 300f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1015f, 560f, 200f, 0f, 0f, 143f, 75f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1940f, 3145f, 200f, 0f, 0f, 0f, 1400f, 2000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -757.5f, 3625f, 200f, 0f, 0f, 0f, 975f, 1050f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -187.5f, 3210f, 200f, 0f, 0f, -6f, 400f, 1800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2315.88f, 1498.498f, 150f, 0f, 0f, 167f, 1655f, 587f, 700f);
			break;
		case 6:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GRIZZLIES_EAST");
			VOLUME::_0x39816F6F94F385AD(iVar0, 190f, 1630f, 200f, 0f, 0f, -23f, 225f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 715f, 3145f, 200f, 0f, 0f, 0f, 1200f, 2000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1210f, 1212.5f, 200f, 0f, 0f, -14f, 585f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1510f, 1445f, 200f, 0f, 0f, 16f, 450f, 1000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1935f, 1040f, 200f, 0f, 0f, 12f, 200f, 100f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1810f, 1030f, 200f, 0f, 0f, -14f, 100f, 100f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1495f, 1425f, 200f, 0f, 0f, -9f, 1200f, 650f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1050f, 1430f, 200f, 0f, 0f, 10f, 500f, 700f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2037.5f, 1630f, 200f, 0f, 0f, 118f, 200f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1400f, 2500f, 200f, 0f, 0f, -47f, 2000f, 800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1810f, 2707.5f, 200f, 0f, 0f, -19f, 1500f, 900f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2175f, 3557.5f, 200f, 0f, 0f, -39f, 2000f, 1500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1040f, 2120f, 200f, 0f, 0f, 15f, 800f, 1000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 410f, 2112.5f, 200f, 0f, 0f, -93f, 500f, 600f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 307.5f, 1722.5f, 200f, 0f, 0f, -45f, 250f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 472.5f, 1880f, 200f, 0f, 0f, -93f, 200f, 150f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 135f, 2000f, 200f, 0f, 0f, 9f, 300f, 800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 217.5f, 3245f, 200f, 0f, 0f, -6f, 400f, 1800f, 800f);
			break;
		case 5:
			if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1897952)[6 /*2*/])->f_1) && VOLUME::_0x92A78D0BEDB332A3(((*Global_1897952)[7 /*2*/])->f_1))
			{
				iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GRIZZLIES");
				VOLUME::_0x6E0D3C3F828DA773(iVar0, ((*Global_1897952)[6 /*2*/])->f_1);
				VOLUME::_0x6E0D3C3F828DA773(iVar0, ((*Global_1897952)[7 /*2*/])->f_1);
			}
			else
			{
				return 0;
			}
			break;
		case 8:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GUARMA");
			VOLUME::_0xBCE668AAF83608BE(iVar0, 2410.933f, -7578.265f, 50f, 0f, 0f, 0f, 2000f, 2000f, 890f);
			VOLUME::_0xBCE668AAF83608BE(iVar0, 2388.016f, -4563.885f, 50f, 0f, 0f, 0f, 815f, 500f, 800f);
			break;
		case 9:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_HEARTLAND");
			VOLUME::_0x39816F6F94F385AD(iVar0, -357.5f, -120f, 200f, 0f, 0f, -27f, 150f, 350f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -385f, 180f, 200f, 0f, 0f, -140f, 150f, 350f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -600f, 280f, 200f, 0f, 0f, -75f, 150f, 350f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 165f, 165f, 200f, 0f, 0f, 0f, 1100f, 1000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -465f, -340f, 200f, 0f, 0f, 37.5f, 500f, 275f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -37.5f, -525f, 200f, 0f, 0f, 0f, 1125f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 670f, -315f, 200f, 0f, 0f, -42f, 365f, 817f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 860f, 487.5f, 200f, 0f, 0f, 35f, 650f, 900f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 512.5f, 800f, 200f, 0f, 0f, 1f, 300f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1230f, 695f, 200f, 0f, 0f, -14f, 875f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1560f, 835f, 200f, 0f, 0f, 16f, 450f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1727.5f, 702.5f, 200f, 0f, 0f, -14f, 100f, 575f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 964.14f, 59.521f, 200f, 0f, 0f, -71.00001f, 415f, 725f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1485f, 322.5f, 200f, 0f, 0f, -84f, 650f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1630f, 100f, 200f, 0f, 0f, -111f, 435f, 375f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1752.5f, 302.5f, 200f, 0f, 0f, -47f, 275f, 100f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 103.6867f, 807.6879f, 200f, 0f, 0f, 58.7951f, 295.0871f, 709.0376f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 302.139f, 780.344f, 200f, 0f, 0f, 82f, 200f, 157.492f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -847.5f, 240f, 200f, 0f, 0f, 33f, 797f, 225f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -975f, 280f, 200f, 0f, 0f, 142f, 329f, 450f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -245.4394f, 1000f, 200f, 0f, 0f, 0f, 333.3127f, 300f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -760f, 440f, 200f, 0f, 0f, 105f, 300f, 250f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -520f, 507.5f, 200f, 0f, 0f, 0f, 450f, 450f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -495f, 822.5f, 200f, 0f, 0f, 45f, 500f, 225f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -140f, 705f, 200f, 0f, 0f, 59f, 250f, 650f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -327.5f, 1080f, 200f, 0f, 0f, 45f, 100f, 100f, 800f);
			break;
		case 10:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_ROANOKE_RIDGE");
			VOLUME::_0x39816F6F94F385AD(iVar0, 1838.526f, 72.693f, 200f, 0f, 0f, -111f, 525f, 311f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2827.5f, 1215f, 200f, 0f, 0f, -9f, 1500f, 650f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1920f, 655f, 200f, 0f, 0f, -14f, 300f, 575f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2181.992f, -132.078f, 200f, 0f, 0f, 86f, 315f, 322f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2130f, 825f, 200f, 0f, 0f, 12f, 500f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2345f, 1795f, 200f, 0f, 0f, 118f, 200f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2775f, 725f, 200f, 0f, 0f, 41f, 2000f, 985f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2565f, 1537.5f, 200f, 0f, 0f, -47f, 1000f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3025f, 1632.5f, 200f, 0f, 0f, -19f, 1500f, 1000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3730f, 2300f, 200f, 0f, 0f, -39f, 2000f, 1500f, 800f);
			break;
		case 11:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_SCARLETT_MEADOWS");
			VOLUME::_0x39816F6F94F385AD(iVar0, 1025f, -642.5f, 150f, 0f, 0f, -42f, 600f, 800f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1335f, -407.5f, 150f, 0f, 0f, -71f, 717f, 325f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1585f, -330f, 150f, 0f, 0f, -111f, 400f, 625f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1250f, -1702.5f, 150f, 0f, 0f, 0f, 594f, 2000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 612.5f, -1337.5f, 150f, 0f, 0f, 0f, 850f, 1200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 677.5f, -2270f, 150f, 0f, 0f, 45f, 1000f, 700f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1408.3f, -1687.9f, 150f, 0f, 0f, 5f, 450f, 1300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1600f, -545f, 100f, 0f, 0f, 20f, 325f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1807.467f, -1544.09f, 150f, 0f, 0f, -72f, 309f, 562f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1705.656f, -1257.077f, 150f, 0f, 0f, 20f, 400f, 50f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1946.824f, -1264.023f, 150f, 0f, 0f, 21f, 100f, 176f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1735.228f, -1334.945f, 150f, 0f, 0f, 20f, 295f, 150f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1902.5f, -432.5f, 150f, 0f, 0f, -111f, 365f, 75f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1827.5f, -580f, 150f, 0f, 0f, 20f, 75f, 75f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1571.834f, -1097.489f, 150f, 0f, 0f, 20f, 85f, 371f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1661.989f, -1972.796f, 150f, 0f, 0f, 18f, 85f, 371f, 700f);
			break;
		case 12:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_TALL_TREES");
			VOLUME::_0x39816F6F94F385AD(iVar0, -1762.5f, -2030f, 150f, 0f, 0f, 16f, 275f, 400f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1445f, -1987.5f, 150f, 0f, 0f, -42f, 125f, 50f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1600f, -1882.5f, 150f, 0f, 0f, 20f, 200f, 335f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1927.5f, -1750f, 150f, 0f, 0f, 30f, 690f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2052.5f, -1517.5f, 150f, 0f, 0f, 15f, 715f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2162.5f, -1237.5f, 150f, 0f, 0f, -45f, 500f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2272.5f, -1057.5f, 150f, 0f, 0f, -65f, 519f, 530f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2865f, -1112.5f, 150f, 0f, 0f, 167f, 1250f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1972.5f, -2022.5f, 150f, 0f, 0f, 44f, 300f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1875f, -2087.5f, 150f, 0f, 0f, 70f, 300f, 180f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2140f, -1950f, 150f, 0f, 0f, 70f, 200f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2210f, -1890f, 150f, 0f, 0f, 24f, 200f, 175f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1397.5f, -2027.5f, 150f, 0f, 0f, 20f, 45f, 25f, 700f);
			break;
		case 15:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_CHOLLA_SPRINGS");
			VOLUME::_0x39816F6F94F385AD(iVar0, -3305f, -3380f, 150f, 0f, 0f, 123f, 300f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3335f, -3582.5f, 150f, 0f, 0f, 170f, 225f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3200f, -3515f, 150f, 0f, 0f, -154f, 235f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3515f, -3190f, 150f, 0f, 0f, 139f, 450f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3930f, -2912.5f, 150f, 0f, 0f, 154f, 700f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4537.5f, -2665f, 150f, 0f, 0f, -178f, 1000f, 800f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4967.5f, -2390f, 150f, 0f, 0f, -148f, 300f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4617.5f, -2080f, 150f, 0f, 0f, 175f, 1000f, 700f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3747.5f, -2030f, 150f, 0f, 0f, 99f, 700f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3282.5f, -3050f, 150f, 0f, 0f, 107f, 750f, 400f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3370f, -2690f, 150f, 0f, 0f, 124f, 100f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3355f, -2345f, 150f, 0f, 0f, 69f, 200f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3657.5f, -2610f, 150f, 0f, 0f, 98f, 500f, 850f, 700f);
			break;
		case 13:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GAPTOOTH_RIDGE");
			VOLUME::_0x39816F6F94F385AD(iVar0, -5420f, -3447.5f, 150f, 0f, 0f, 175f, 300f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5837.5f, -3530f, 150f, 0f, 0f, -32f, 1000f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -6142.5f, -3665f, 150f, 0f, 0f, -8f, 800f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5747.5f, -2905f, 150f, 0f, 0f, 136.5f, 1300f, 750f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5407.5f, -2487.5f, 150f, 0f, 0f, -148f, 550f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5232.5f, -2825f, 150f, 0f, 0f, -178f, 400f, 530f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5667.5f, -2040f, 150f, 0f, 0f, 175f, 1100f, 800f, 700f);
			break;
		case 16:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_HENNIGAS_STEAD");
			VOLUME::_0x39816F6F94F385AD(iVar0, -2510f, -2542.5f, 150f, 0f, 0f, 44f, 1200f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1632.5f, -2480f, 150f, 0f, 0f, 16f, 275f, 535f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1990f, -2525f, 150f, 0f, 0f, 70f, 600f, 850f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1452.5f, -2342.5f, 150f, 0f, 0f, 16f, 150f, 625f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1480f, -2177.5f, 150f, 0f, 0f, 20f, 165f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1487.5f, -2087.5f, 150f, 0f, 0f, -42f, 60f, 150f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1350f, -2330f, 150f, 0f, 0f, 20f, 165f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1562.5f, -2652.5f, 150f, 0f, 0f, 28f, 500f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2445f, -2795f, 150f, 0f, 0f, 107f, 750f, 1350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2675f, -2177.5f, 150f, 0f, 0f, 70f, 600f, 900f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2947.5f, -2465f, 150f, 0f, 0f, 98f, 150f, 600f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3097.5f, -1977.5f, 150f, 0f, 0f, 99f, 800f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2467.5f, -3145f, 150f, 0f, 0f, 123f, 150f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2577.5f, -3182.5f, 150f, 0f, 0f, 85f, 150f, 150f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2985f, -2502.5f, 150f, 0f, 0f, 124f, 150f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2942.5f, -2457.5f, 150f, 0f, 0f, 69f, 175f, 600f, 700f);
			break;
		case 14:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_RIO_BRAVO");
			VOLUME::_0x39816F6F94F385AD(iVar0, -3540f, -3635f, 150f, 0f, 0f, 123f, 125f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3880f, -3687.5f, 150f, 0f, 0f, 105f, 225f, 625f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4495f, -3610f, 150f, 0f, 0f, 96f, 600f, 625f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4922.5f, -3742.5f, 150f, 0f, 0f, 131f, 500f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5135f, -3900f, 150f, 0f, 0f, 22f, 200f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5205f, -3887.5f, 150f, 0f, 0f, -16f, 300f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5350f, -3835f, 150f, 0f, 0f, -32f, 150f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5125f, -3500f, 150f, 0f, 0f, 175f, 300f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4975f, -3360f, 150f, 0f, 0f, 137f, 450f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4645f, -3220f, 150f, 0f, 0f, -178f, 735f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4205f, -3420f, 150f, 0f, 0f, 154f, 450f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3795f, -3510f, 150f, 0f, 0f, 139f, 450f, 275f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3992.5f, -3567.5f, 150f, 0f, 0f, 0f, 200f, 200f, 700f);
			break;
	}
	((*Global_1897952)[iParam0 /*2*/])->f_1 = iVar0;
	return iVar0;
}

void func_550(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	MISC::_0x2FCD528A397E5C88(iParam0, iVar0);
}

void func_551(int iParam0, bool bParam1)
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

void func_552(int iParam0, int iParam1)
{
	(*Global_1897952)[iParam0 /*2*/] = (Global_1897952[iParam0 /*2*/] - (Global_1897952[iParam0 /*2*/] && iParam1));
}

void func_553(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_1046(iParam0, &iVar1, &iVar2))
	{
		iVar0 = 0;
		while (iVar0 < (iVar2 - iVar1) + 1)
		{
			func_350((iVar1 + iVar0), 1);
			iVar0++;
		}
	}
}

void func_554(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_28() != -1)
	{
		return;
	}
	if (func_1046(iParam0, &iVar1, &iVar2))
	{
		iVar0 = 0;
		while (iVar0 < (iVar2 - iVar1) + 1)
		{
			func_190((iVar1 + iVar0), 0);
			iVar0++;
		}
	}
}

char* func_555(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BayouNwa_population";
		case 1:
			return "BigValley_population";
		case 2:
			return "BluegillMarsh_population";
		case 3:
			return "CumberlandForest_population";
		case 4:
			return "GreatPlains_population";
		case 5:
			return "Grizzlies_population";
		case 6:
			return "GrizzliesEast_population";
		case 7:
			return "GrizzliesWest_population";
		case 8:
			return "Guama_population";
		case 9:
			return "Heartland_population";
		case 10:
			return "RoanokeRidge_population";
		case 11:
			return "ScarlettMeadows_population";
		case 12:
			return "TallTrees_population";
		case 15:
			return "ChollaSprings_population";
		case 13:
			return "GaptoothRidge_population";
		case 16:
			return "HennigansStead_population";
		case 14:
			return "RioBravo_population";
		default:
			break;
	}
	return "No District script?";
}

void func_556(char* sParam0, int iParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	func_1047(MISC::GET_HASH_KEY(sParam0), iParam1);
}

int func_557(int iParam0)
{
	if (!func_614(iParam0))
	{
		return 0;
	}
	return func_1048(iParam0, 2);
}

int func_558(int iParam0)
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

int func_559(int iParam0)
{
	if (!func_1034(iParam0))
	{
		return 0;
	}
	return func_1049(iParam0, 2);
}

void func_560(int iParam0, int iParam1)
{
	if (!func_614(iParam0))
	{
		return;
	}
	func_1050(func_558(iParam0), iParam1);
}

bool func_561(int iParam0)
{
	if (!func_126(iParam0))
	{
		return false;
	}
	return ((((*Global_1888801)[iParam0 /*35*/])->f_20 == 1 || ((*Global_1888801)[iParam0 /*35*/])->f_20 == 2) && !func_1051(iParam0));
}

int func_562(int iParam0)
{
	if (!func_1034(iParam0))
	{
		return -1;
	}
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_40.f_358[iParam0 /*12*/]);
	}
	return &(Global_1058888->f_42266[iParam0 /*12*/]);
}

void func_563(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
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

	if (!func_1052())
	{
		return;
	}
	sVar1 = func_1053(iParam0, iParam1, iParam2, iParam4, iParam5, bParam3, &uVar0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		if (bParam3)
		{
			return;
		}
		sVar1 = "DISTRICT_GRIZZLIES";
	}
	if (!func_1034(iParam4))
	{
		if (func_126(iParam0))
		{
			iParam4 = func_558(func_1054(iParam0));
		}
		else
		{
			iParam4 = func_558(iParam1);
		}
	}
	if (func_1034(iParam4))
	{
		iVar3 = func_562(iParam4);
	}
	if (uVar0 && bParam3)
	{
		sVar2 = func_1056(func_1055(iParam2));
	}
	else if ((func_1048(iParam1, 2) || func_1049(iParam4, 2)) && !Global_1894899->f_9)
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
	else if ((func_126(iParam0) && func_177(iParam0, 16777216)) && !Global_1894899->f_9)
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
		iVar4 = func_265(func_261());
		iVar5 = func_268(func_261());
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
				fVar7 = func_1057(fVar7);
				sVar8 = "TIME_AND_TEMP_F";
			}
			IntToString(&sVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::_CREATE_VAR_STRING(674, sVar8, iVar4, func_1058(&sVar6, 109029619), sVar9, func_1058(&sVar10, 109029619));
		}
		else
		{
			sVar8 = "TIME_AND_TEMP_C_24";
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				fVar7 = func_1057(fVar7);
				sVar8 = "TIME_AND_TEMP_F_24";
			}
			IntToString(&sVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::_CREATE_VAR_STRING(162, sVar8, iVar4, func_1058(&sVar6, 109029619), func_1058(&sVar10, 109029619));
		}
		Global_1894899->f_9 = 0;
	}
	Global_1934266->f_148 = func_1059(sVar1, sVar2, 4000, 0, 0, 0, 0, 1);
}

int func_564(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_1060(bParam1, iParam2, iParam3);
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

void func_565(int iParam0)
{
	int iVar0;

	if (!func_614(iParam0))
	{
		return;
	}
	iVar0 = func_558(iParam0);
	func_1061(iVar0);
	func_1062(iVar0, func_562(iVar0));
}

void func_566(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_1063(iParam0, &iVar1, &iVar2))
	{
		iVar0 = 0;
		while (iVar0 < (iVar2 - iVar1) + 1)
		{
			func_350((iVar1 + iVar0), 1);
			iVar0++;
		}
	}
}

void func_567(int iParam0)
{
	Global_1897952->f_41 = iParam0;
}

int func_568(int iParam0)
{
	if (!func_35())
	{
		return 1;
	}
	if (!func_32(3))
	{
		return 7 == iParam0;
	}
	return 1;
}

int func_569(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2025841068;
		case 1:
			return 822658194;
		case 2:
			return 1308232528;
		case 3:
			return 1835499550;
		case 4:
			return 476637847;
		case 6:
			return -120156735;
		case 7:
			return 1645618177;
		case 8:
			return -512529193;
		case 9:
			return 131399519;
		case 10:
			return 178647645;
		case 11:
			return -864275692;
		case 12:
			return 1684533001;
		case 13:
			return -2066240242;
		case 14:
			return -2145992129;
		case 15:
			return -108848014;
		case 16:
			return 892930832;
		default:
			break;
	}
	return -1;
}

void func_570(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_28() != -1)
	{
		return;
	}
	if (func_1063(iParam0, &iVar1, &iVar2))
	{
		iVar0 = 0;
		while (iVar0 < (iVar2 - iVar1) + 1)
		{
			if (func_1064((iVar1 + iVar0)))
			{
				func_190((iVar1 + iVar0), 0);
			}
			iVar0++;
		}
	}
}

void func_571(int iParam0)
{
	if (!func_614(iParam0))
	{
		return;
	}
	func_1065();
	switch (iParam0)
	{
		case 0:
			func_1066(5, -411244401);
			func_1066(10, -530650579);
			func_1066(11, -411244401);
			func_1066(12, -79992523);
			func_1066(13, -1608748833);
			func_1066(7, -1243003160);
			break;
		case 1:
			func_1066(5, -431794078);
			func_1066(10, -530650579);
			func_1066(11, 2024364203);
			func_1066(12, 1131021608);
			func_1066(13, -2064541187);
			func_1066(7, -604466256);
			break;
		case 2:
			func_1066(5, -715307145);
			func_1066(10, 1784992423);
			func_1066(11, -411244401);
			func_1066(12, 1784992423);
			func_1066(13, -1608748833);
			func_1066(7, 486487548);
			break;
		case 3:
			func_1066(5, -2064541187);
			func_1066(10, -530650579);
			func_1066(11, 2024364203);
			func_1066(12, 1131021608);
			func_1066(13, -2064541187);
			func_1066(7, 506825778);
			break;
		case 4:
			func_1066(5, -530650579);
			func_1066(10, -530650579);
			func_1066(11, 2024364203);
			func_1066(12, -1897088481);
			func_1066(13, -2064541187);
			func_1066(7, -604466256);
			func_1066(8, 239028334);
			break;
		case 5:
		case 6:
		case 7:
			func_1066(5, -530650579);
			func_1066(10, -1608748833);
			func_1066(11, 1455354960);
			func_1066(12, -530650579);
			func_1066(13, -1608748833);
			func_1066(7, 188176855);
			break;
		case 8:
			func_1066(5, -79992523);
			func_1066(10, -79992523);
			func_1066(11, 796850253);
			func_1066(12, -838827775);
			func_1066(13, -79992523);
			func_1066(7, -1063650279);
			break;
		case 9:
			func_1066(5, -530650579);
			func_1066(10, -530650579);
			func_1066(11, 1455354960);
			func_1066(12, -79992523);
			func_1066(13, -2064541187);
			func_1066(7, -604466256);
			func_1066(8, 239028334);
			break;
		case 10:
			func_1066(5, -2064541187);
			func_1066(10, -530650579);
			func_1066(11, 1455354960);
			func_1066(12, 1131021608);
			func_1066(13, -2064541187);
			func_1066(7, -604466256);
			break;
		case 11:
			func_1066(5, -530650579);
			func_1066(10, -1074047115);
			func_1066(11, -1608748833);
			func_1066(12, -1897088481);
			func_1066(13, -1608748833);
			func_1066(7, 662736559);
			break;
		case 12:
			func_1066(5, -530650579);
			func_1066(10, -1608748833);
			func_1066(11, -1504621559);
			func_1066(12, 1131021608);
			func_1066(13, -2064541187);
			func_1066(7, 486487548);
			break;
	}
}

int func_572(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	switch (iParam0)
	{
		case 76:
			if (func_833(iParam0))
			{
				return 305496830;
			}
			else
			{
				return -1482428221;
			}
			break;
		case 105:
			if (func_833(iParam0))
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
			if (!bParam1 || func_28() != -1)
			{
				return 1624541293;
			}
			if (func_125(45))
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
			if (!bParam1 || func_28() != -1)
			{
				return 1024208566;
			}
			if (func_125(45))
			{
				return 1024208566;
			}
			else
			{
				return 1640255731;
			}
			break;
		case 22:
			if (!bParam1 || func_28() != -1)
			{
				return 965626876;
			}
			if (func_120(((*Global_1835011)[59 /*74*/])->f_1, 1))
			{
				return 965626876;
			}
			else
			{
				return 1039226266;
			}
			break;
		case 37:
			if (!bParam1 || func_28() != -1)
			{
				return -497792649;
			}
			if (func_120(((*Global_1347702)[9 /*49*/])->f_15, 1))
			{
				return -497792649;
			}
			else if (func_125(45))
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
			if (iParam0 == func_44())
			{
				return 2126166785;
			}
			break;
		case 110:
			if (!bParam1 || func_28() != -1)
			{
				return -1990305778;
			}
			if (func_125(45))
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
		iVar0 = func_1067(iParam0);
		if (iVar0 != -1)
		{
			return func_573(iVar0, bParam1);
		}
	}
	return 0;
}

int func_573(int iParam0, bool bParam1)
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
			if (!bParam1 || func_28() != -1)
			{
				return -1308265478;
			}
			if (func_125(45))
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
			if (!bParam1 || func_28() != -1)
			{
				return -650528936;
			}
			if (func_125(45))
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
			if (!bParam1 || func_28() != -1)
			{
				return -877373104;
			}
			if (func_125(45))
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

void func_574(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		iParam0 = func_573(func_183(Global_36), 1);
	}
	if (func_1068(iParam0, iParam1))
	{
	}
}

void func_575(float fParam0, float fParam1, float fParam2, float fParam3)
{
	Global_1894899->f_182 = fParam0;
	Global_1894899->f_183 = fParam1;
	Global_1894899->f_184 = fParam2;
	Global_1894899->f_185 = fParam3;
}

void func_576(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_1069(1497516462);
			func_361(2016141805);
			func_361(1010885152);
			func_361(-502324015);
			break;
		case 2016141805:
			func_361(1497516462);
			func_1069(2016141805);
			func_361(1010885152);
			func_361(-502324015);
			break;
		case 1010885152:
			func_361(1497516462);
			func_361(2016141805);
			func_1069(1010885152);
			func_361(-502324015);
			break;
		case -502324015:
			func_361(1497516462);
			func_361(2016141805);
			func_361(1010885152);
			func_1069(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_361(-538889627);
			func_361(-538880323);
			func_361(-1056767524);
			func_1069(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_1070();
			func_1069(iParam0);
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
			func_1071();
			func_1069(iParam0);
			break;
		case 2019386373:
			func_361(-664252410);
			func_361(2109952320);
			func_1069(2019386373);
			break;
		case -664252410:
			func_361(2019386373);
			func_361(2109952320);
			func_1069(-664252410);
			break;
		case 2109952320:
			func_361(2019386373);
			func_361(-664252410);
			func_1069(2109952320);
			break;
		case -1674179981:
			func_361(-1835851517);
			func_361(-1838352012);
			func_1069(-1674179981);
			break;
		case -1835851517:
			func_361(-1674179981);
			func_361(-1838352012);
			func_1069(-1835851517);
			break;
		case -1838352012:
			func_361(-1674179981);
			func_361(-1835851517);
			func_1069(-1838352012);
			break;
		case -1717960576:
			func_361(210001842);
			func_1069(-1717960576);
			break;
		case 210001842:
			func_361(-1717960576);
			func_1069(210001842);
			break;
		case -150493654:
			func_361(-1271608261);
			func_361(1846061697);
			func_361(-1145519186);
			func_1069(-150493654);
			break;
		case -1271608261:
			func_361(-150493654);
			func_361(1846061697);
			func_361(-1145519186);
			func_1069(-1271608261);
			break;
		case 1846061697:
			func_361(-150493654);
			func_361(-1271608261);
			func_361(-1145519186);
			func_1069(1846061697);
			break;
		case -1145519186:
			func_361(-150493654);
			func_361(-1271608261);
			func_361(1846061697);
			func_1069(-1145519186);
			break;
		case 1766284049:
			func_361(280705402);
			func_361(1926308480);
			func_1069(1766284049);
			break;
		case 280705402:
			func_361(1766284049);
			func_361(1926308480);
			func_1069(280705402);
			break;
		case 1926308480:
			func_361(1766284049);
			func_361(280705402);
			func_1069(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_361(439465264);
				func_1069(1609506757);
			}
			else
			{
				func_361(1609506757);
				func_361(439465264);
			}
			break;
		case 439465264:
			if (func_340(1609506757))
			{
				if (bParam1)
				{
					func_1069(439465264);
				}
				else
				{
					func_361(439465264);
				}
			}
			break;
		case 1822001510:
			func_361(-1612662716);
			func_1069(1822001510);
			break;
		case -1612662716:
			func_361(1822001510);
			func_1069(-1612662716);
			break;
		case 1306158345:
			func_361(1952610440);
			func_361(-223469678);
			func_361(-404698347);
			func_361(1517904467);
			func_1069(1306158345);
			break;
		case 1952610440:
			func_361(1306158345);
			func_361(-223469678);
			func_361(-404698347);
			func_361(1517904467);
			func_1069(1952610440);
			break;
		case -223469678:
			func_361(1306158345);
			func_361(1952610440);
			func_361(-404698347);
			func_361(1517904467);
			func_1069(-223469678);
			break;
		case -404698347:
			func_361(1306158345);
			func_361(1952610440);
			func_361(-223469678);
			func_361(1517904467);
			func_1069(-404698347);
			break;
		case 1517904467:
			func_361(1306158345);
			func_361(1952610440);
			func_361(-223469678);
			func_361(-404698347);
			func_1069(1517904467);
			break;
		case 1376646519:
			func_361(931649776);
			func_361(-434590080);
			func_361(1743048395);
			func_361(449774763);
			func_1069(1376646519);
			break;
		case 931649776:
			func_361(1376646519);
			func_361(-434590080);
			func_361(1743048395);
			func_361(449774763);
			func_1069(931649776);
			break;
		case -434590080:
			func_361(1376646519);
			func_361(931649776);
			func_361(1743048395);
			func_361(449774763);
			func_1069(-434590080);
			break;
		case 1743048395:
			func_361(1376646519);
			func_361(931649776);
			func_361(-434590080);
			func_361(449774763);
			func_1069(1743048395);
			break;
		case 449774763:
			func_361(1376646519);
			func_361(931649776);
			func_361(-434590080);
			func_361(1743048395);
			func_1069(449774763);
			break;
		case -1414537028:
			func_361(38162571);
			func_361(1350391819);
			func_361(54073871);
			func_1069(-1414537028);
			break;
		case 38162571:
			func_361(-1414537028);
			func_361(1350391819);
			func_361(54073871);
			func_1069(38162571);
			break;
		case 1350391819:
			func_361(-1414537028);
			func_361(38162571);
			func_361(54073871);
			func_1069(1350391819);
			break;
		case 54073871:
			func_361(-1414537028);
			func_361(38162571);
			func_361(1350391819);
			func_1069(54073871);
			break;
		case 198200492:
			func_1069(198200492);
			func_361(-1124061431);
			func_361(52706132);
			func_361(-259123672);
			break;
		case -1124061431:
			func_361(198200492);
			func_1069(-1124061431);
			func_361(52706132);
			func_361(-259123672);
			break;
		case 52706132:
			func_361(198200492);
			func_361(-1124061431);
			func_1069(52706132);
			func_361(-259123672);
			break;
		case -259123672:
			func_361(198200492);
			func_361(-1124061431);
			func_361(52706132);
			func_1069(-259123672);
			break;
		case -919512195:
			func_1069(-919512195);
			func_361(-1925798111);
			func_361(420709909);
			func_361(1703426636);
			break;
		case -1925798111:
			func_1069(-1925798111);
			func_361(-919512195);
			func_361(420709909);
			func_361(1703426636);
			break;
		case 420709909:
			func_1069(420709909);
			func_361(-919512195);
			func_361(-1925798111);
			func_361(1703426636);
			break;
		case 1703426636:
			func_1069(1703426636);
			func_361(-919512195);
			func_361(-1925798111);
			func_361(420709909);
			break;
		case -1223121209:
			func_1069(-1223121209);
			func_361(630808005);
			break;
		case 630808005:
			func_1069(630808005);
			func_361(-1223121209);
			break;
		case 1453909576:
			func_1069(1453909576);
			func_361(1643531967);
			break;
		case 1643531967:
			func_1069(1643531967);
			func_361(1453909576);
			break;
		case 0:
			func_1069(0);
			func_361(473295046);
			func_361(-1738165526);
			break;
		case 473295046:
			func_1069(473295046);
			func_361(0);
			func_361(-1738165526);
			break;
		case -1738165526:
			func_1069(-1738165526);
			func_361(0);
			func_361(473295046);
			break;
		case 932909855:
			func_1069(932909855);
			func_361(2051822093);
			break;
		case 2051822093:
			func_1069(2051822093);
			func_361(932909855);
			break;
		case 405586984:
			func_1069(405586984);
			func_361(1509509592);
			func_361(-959357075);
			func_361(-1311865656);
			break;
		case 1509509592:
			func_1069(1509509592);
			func_361(405586984);
			func_361(-959357075);
			func_361(-1311865656);
			break;
		case -959357075:
			func_1069(-959357075);
			func_361(1509509592);
			func_361(405586984);
			func_361(-1311865656);
			break;
		case -1311865656:
			func_1069(-1311865656);
			func_361(1509509592);
			func_361(-959357075);
			func_361(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_1069(-524145696);
			}
			else
			{
				func_361(-524145696);
			}
			func_361(1626481264);
			func_361(282809459);
			break;
		case 282809459:
			func_1069(282809459);
			func_361(1626481264);
			func_361(-524145696);
			break;
		case 1626481264:
			func_1069(1626481264);
			func_361(-524145696);
			func_361(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_1069(885203519);
			}
			else
			{
				func_361(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_1069(-1080627546);
			}
			else
			{
				func_361(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_340(iParam0))
				{
					func_1069(iParam0);
				}
			}
			else if (func_340(iParam0))
			{
				func_361(iParam0);
			}
			break;
	}
}

int func_577(int iParam0)
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

float func_578(var uParam0)
{
	if (!func_1072(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_1073(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_1074() - uParam0->f_1);
}

bool func_579()
{
	return Global_1894899 & 2 != 0;
}

var func_580()
{
	return Global_1898164->f_163;
}

int func_581(int iParam0)
{
	if (!func_1075(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		(*Global_1360165)[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

int func_582(int iParam0, int iParam1)
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
	if (func_346(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_346(iVar0, 2))
	{
		if (PED::_0x3AA24CCC0D451379(iParam0))
		{
			return 0;
		}
	}
	if (func_346(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_346(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_346(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_346(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return 0;
		}
	}
	if (func_346(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_346(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_583(int iParam0)
{
	int iVar0;
	int iVar1[15];
	int iVar17;
	int iVar18;
	int iVar19;

	func_1076(iParam0);
	iVar0 = -1;
	switch (iParam0)
	{
		case 6:
		case 24:
		case 25:
			iVar1[0] = -1;
			iVar1[1] = -1;
			iVar1[2] = -1;
			iVar1[3] = -1;
			iVar1[4] = -1;
			iVar1[5] = -1;
			iVar1[6] = -1;
			iVar1[7] = -1;
			iVar1[8] = -1;
			iVar1[9] = -1;
			iVar1[10] = -1;
			iVar1[11] = -1;
			iVar1[12] = -1;
			iVar1[13] = -1;
			iVar1[14] = -1;
			break;
		case 10:
			iVar1[0] = 7;
			iVar1[1] = 1;
			iVar1[2] = 8;
			iVar1[3] = 9;
			iVar1[4] = 20;
			iVar1[5] = -1;
			iVar1[6] = -1;
			iVar1[7] = -1;
			iVar1[8] = -1;
			iVar1[9] = -1;
			iVar1[10] = -1;
			iVar1[11] = -1;
			iVar1[12] = -1;
			iVar1[13] = -1;
			iVar1[14] = -1;
			break;
		case 15:
		case 16:
		case 20:
		case 22:
			iVar1[0] = 3;
			iVar1[1] = 2;
			iVar1[2] = 8;
			iVar1[3] = 9;
			iVar1[4] = 7;
			iVar1[5] = 20;
			iVar1[6] = 15;
			iVar1[7] = 5;
			iVar1[8] = 13;
			iVar1[9] = 19;
			iVar1[10] = 18;
			iVar1[11] = 20;
			iVar1[12] = 22;
			iVar1[13] = 4;
			iVar1[14] = 11;
			break;
		case 14:
			iVar1[0] = 1;
			iVar1[1] = 7;
			iVar1[2] = 3;
			iVar1[3] = 21;
			iVar1[4] = 16;
			iVar1[5] = 20;
			iVar1[6] = 15;
			iVar1[7] = 5;
			iVar1[8] = 0;
			iVar1[9] = 19;
			iVar1[10] = 18;
			iVar1[11] = 20;
			iVar1[12] = 22;
			iVar1[13] = 4;
			iVar1[14] = 11;
			break;
		default:
			iVar1[0] = 7;
			iVar1[1] = 3;
			iVar1[2] = 1;
			iVar1[3] = 9;
			iVar1[4] = 2;
			iVar1[5] = 8;
			iVar1[6] = 0;
			iVar1[7] = 15;
			iVar1[8] = 13;
			iVar1[9] = 19;
			iVar1[10] = 18;
			iVar1[11] = 20;
			iVar1[12] = 22;
			iVar1[13] = 4;
			iVar1[14] = 5;
			break;
	}
	iVar19 = 0;
	while (iVar19 < 15)
	{
		if (&iVar1[iVar19] != -1)
		{
			if (func_1077(&(iVar1[iVar19]), 1, 1) && func_1078(&(iVar1[iVar19]), 0) == 0)
			{
				iVar18 = INTERIOR::GET_INTERIOR_FROM_ENTITY(func_581(&(iVar1[iVar19])));
				iVar17 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
				if (iVar17 == iVar18)
				{
					if (iParam0 != &iVar1[iVar19])
					{
						if (iVar0 == -1)
						{
							if (func_1079(Global_35, func_581(&(iVar1[iVar19])), 1, 1) < 35f)
							{
								iVar0 = &iVar1[iVar19];
							}
						}
						else if (&iVar1[iVar19] != -1)
						{
							if (func_1079(Global_35, func_581(iVar0), 1, 1) > func_1079(Global_35, func_581(&(iVar1[iVar19])), 1, 1))
							{
								iVar0 = &iVar1[iVar19];
							}
						}
					}
				}
			}
		}
		iVar19++;
	}
	if (iVar0 == -1)
	{
		if ((MISC::GET_FRAME_COUNT() % 300) == 0)
		{
		}
	}
	return iVar0;
}

var func_584(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	return func_1080(iParam0, &Var0);
}

void func_585(int iParam0)
{
	int iVar0;
	int iVar1;

	if (iParam0 == 6)
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_582(func_581(iVar0), 0))
		{
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(func_581(iVar0)))
			{
				if (iVar1 == -1)
				{
					iVar1 = iVar0;
				}
				else if (func_1079(func_581(iVar0), Global_35, 1, 1) > func_1079(func_581(iVar1), Global_35, 1, 1))
				{
					iVar1 = iVar0;
				}
			}
		}
		iVar0++;
	}
	if (iVar1 != -1)
	{
		func_584(func_581(iVar1), "GENERIC_SYMPATHIZE_ON_DISPUTE", -1454469014, 0, 1, 0, 0, 1);
	}
}

int func_586(int iParam0)
{
	if ((((((iParam0 == 11 || iParam0 == 13) || iParam0 == 15) || iParam0 == 16) || iParam0 == 19) || iParam0 == 20) || iParam0 == 22)
	{
		return 0;
	}
	return 1;
}

void func_587(int iParam0, var uParam1, var uParam2)
{
	switch (func_259())
	{
		case 2:
			switch (iParam0)
			{
				case 0:
					*uParam1 = { 681.5647f, -1167.61f, 44.9204f };
					*uParam2 = 197.2448f;
					break;
				case 1:
					*uParam1 = { 810.8986f, -969.9656f, 53.016f };
					*uParam2 = 134.2209f;
					break;
				case 2:
					*uParam1 = { 864.3746f, -943.9187f, 56.2085f };
					*uParam2 = 150.086f;
					break;
				case 3:
					*uParam1 = { 933.3844f, -911.3843f, 59.72f };
					*uParam2 = 135.8932f;
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					*uParam1 = { -67.4627f, 7.3844f, 92.8657f };
					*uParam2 = 131.3534f;
					break;
				case 1:
					*uParam1 = { -116.7554f, 188.6082f, 93.8397f };
					*uParam2 = 140.8986f;
					break;
				case 2:
					*uParam1 = { -87.3227f, 244.034f, 101.5532f };
					*uParam2 = 177.536f;
					break;
				case 3:
					*uParam1 = { -68.581f, 371.115f, 112.856f };
					*uParam2 = 206.1627f;
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					*uParam1 = { 1786.846f, -1789.869f, 48.3654f };
					*uParam2 = 243.2151f;
					break;
				case 1:
					*uParam1 = { 1579.342f, -1728.154f, 53.9348f };
					*uParam2 = 246.6603f;
					break;
				case 2:
					*uParam1 = { 1453.837f, -1691.054f, 65.0555f };
					*uParam2 = 234.7165f;
					break;
				case 3:
					*uParam1 = { 1287f, -1603.052f, 64.1451f };
					*uParam2 = 273.4906f;
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					*uParam1 = { 2374.944f, 1312.075f, 107.3511f };
					*uParam2 = 35.4268f;
					break;
				case 1:
					*uParam1 = { 2394.57f, 1225.873f, 100.4456f };
					*uParam2 = 329.851f;
					break;
				case 2:
					*uParam1 = { 2406.418f, 1114.158f, 95.6929f };
					*uParam2 = 21.6707f;
					break;
				case 3:
					*uParam1 = { 2391.831f, 1001.5f, 87.3075f };
					*uParam2 = 346.1555f;
					break;
			}
			break;
		default:
			*uParam1 = { 0f, 0f, 0f };
			break;
	}
}

int func_588(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_589()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_582(func_581(iVar0), 0))
		{
			PED::_0xA7DC9266ED6A4E51(func_581(iVar0));
		}
		iVar0++;
	}
}

int func_590(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1[9];
	int iVar11;
	int iVar12;
	int iVar13;
	vector3 vVar14;

	iVar0 = -1;
	switch (iParam0)
	{
		case 6:
		case 12:
		case 24:
		case 25:
			iVar1[0] = -1;
			iVar1[1] = -1;
			iVar1[2] = -1;
			iVar1[3] = -1;
			iVar1[4] = -1;
			iVar1[5] = -1;
			iVar1[6] = -1;
			iVar1[7] = -1;
			iVar1[8] = -1;
			break;
		case 10:
			iVar1[0] = 7;
			iVar1[1] = 1;
			iVar1[2] = 8;
			iVar1[3] = 9;
			iVar1[4] = -1;
			iVar1[5] = -1;
			iVar1[6] = -1;
			iVar1[7] = -1;
			iVar1[8] = -1;
			break;
		case 15:
		case 16:
		case 20:
		case 22:
			iVar1[0] = 3;
			iVar1[1] = 2;
			iVar1[2] = 8;
			iVar1[3] = 9;
			iVar1[4] = 7;
			iVar1[5] = -1;
			iVar1[6] = -1;
			iVar1[7] = -1;
			iVar1[8] = -1;
			break;
		case 13:
		case 14:
			iVar1[0] = 1;
			iVar1[1] = 7;
			iVar1[2] = 3;
			iVar1[3] = -1;
			iVar1[4] = -1;
			iVar1[5] = -1;
			iVar1[6] = -1;
			iVar1[7] = -1;
			iVar1[8] = -1;
			break;
		case 3:
			iVar1[0] = 2;
			iVar1[1] = 9;
			iVar1[2] = 1;
			iVar1[3] = 8;
			iVar1[4] = -1;
			iVar1[5] = -1;
			iVar1[6] = -1;
			iVar1[7] = -1;
			iVar1[8] = -1;
			break;
		default:
			iVar1[0] = 7;
			iVar1[1] = 3;
			iVar1[2] = 1;
			iVar1[3] = 9;
			iVar1[4] = 2;
			iVar1[5] = 8;
			iVar1[6] = -1;
			iVar1[7] = -1;
			iVar1[8] = -1;
			break;
	}
	iVar13 = 0;
	while (iVar13 < 9)
	{
		if (&iVar1[iVar13] != -1)
		{
			if (func_1077(&(iVar1[iVar13]), 1, 1) && func_1078(&(iVar1[iVar13]), 0) == 0)
			{
				vVar14 = { ENTITY::GET_ENTITY_COORDS(func_581(&(iVar1[iVar13])), true, false) };
				if (CAM::IS_SPHERE_VISIBLE(vVar14, 1.25f) == 0 || iParam1 == 0)
				{
					iVar12 = INTERIOR::GET_INTERIOR_FROM_ENTITY(func_581(&(iVar1[iVar13])));
					iVar11 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
					if (iVar11 == iVar12)
					{
						if (iParam0 != &iVar1[iVar13])
						{
							if (iVar0 == -1)
							{
								if (func_1079(Global_35, func_581(&(iVar1[iVar13])), 1, 1) < 25f || iParam1)
								{
									iVar0 = &iVar1[iVar13];
								}
							}
							else if (&iVar1[iVar13] != -1)
							{
								if (func_1079(Global_35, func_581(iVar0), 1, 1) > func_1079(Global_35, func_581(&(iVar1[iVar13])), 1, 1))
								{
									iVar0 = &iVar1[iVar13];
								}
							}
						}
					}
				}
			}
		}
		iVar13++;
	}
	if (iVar0 == -1)
	{
		if ((MISC::GET_FRAME_COUNT() % 300) == 0)
		{
		}
	}
	return iVar0;
}

int func_591(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return 0;
	}
	return 1;
}

char* func_592()
{
	return "script@common@cnv_camp@grief@knockout@knockout";
}

char* func_593(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pbl_griefing_ko_back_leadin";
		case 1:
			return "pbl_griefing_ko_back_noleadin";
		case 2:
			return "pbl_griefing_ko_front";
		case 3:
			return "pbl_griefing_ko_back_noleadin";
		default:
			break;
	}
	return "pbl_griefing_ko_back_leadin";
}

bool func_594(int iParam0)
{
	return func_701(iParam0, 16, 1);
}

void func_595()
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
	vVar0.f_2 = (vVar0.z + 0.5f);
	MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &(vVar0.f_2), 0);
	vVar3 = { 0f, 0f, 0f };
	iVar6 = func_581(Global_1357549->f_1645);
	vVar7 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), ENTITY::GET_ENTITY_HEADING(Global_35), 0f, -1.5f, 0f) };
	ENTITY::SET_ENTITY_VISIBLE(iVar6, false);
	MISC::GET_GROUND_Z_FOR_3D_COORD(vVar7, &(vVar7.f_2), 0);
	ENTITY::SET_ENTITY_COORDS(iVar6, vVar7, true, false, true, true);
	if (func_582(Global_35, 0))
	{
		vVar3.f_2 = ENTITY::GET_ENTITY_HEADING(Global_35);
	}
	vVar7.f_2 = (vVar7.z + 0.25f);
	if (func_1081(iVar6, &(Global_1357549->f_1663[0]), 1, 0) || func_1081(Global_35, &(Global_1357549->f_1663[0]), 1, 0))
	{
		vVar3.f_2 = (vVar3.z + 90f);
		if (func_259() == 2)
		{
			vVar0 = { 659.2351f, -1251.625f, 42.6868f };
		}
		else if (func_259() == 1)
		{
			vVar0 = { -123.8883f, -31.9883f, 94.8056f };
		}
		else if (func_259() == 6)
		{
			vVar0 = { 2357.898f, 1372.787f, 105.298f };
		}
	}
	if (func_1081(iVar6, &(Global_1357549->f_1663[1]), 1, 0) || func_1081(Global_35, &(Global_1357549->f_1663[1]), 1, 0))
	{
		vVar3.f_2 = (vVar3.z + 90f);
		if (func_259() == 2)
		{
			vVar0 = { 659.2351f, -1251.625f, 42.6868f };
		}
		else if (func_259() == 1)
		{
			vVar0 = { -123.8883f, -31.9883f, 94.8056f };
		}
		else if (func_259() == 6)
		{
			vVar0 = { 2346.387f, 1352.174f, 105.0121f };
		}
	}
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Global_1357549->f_1636, vVar0, vVar3, 2);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Global_1357549->f_1636, "player_one", Global_35, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Global_1357549->f_1636, "CS_GENSTORYMALE", iVar6, 0);
}

void func_596(int iParam0, int iParam1, int iParam2)
{
	AUDIO::_0x36559148B78853B3(iParam0, iParam1, iParam2);
}

int func_597(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	int iVar5;

	if (!func_591(iParam0))
	{
		return 0;
	}
	vVar0.x = iParam3;
	vVar0.f_1 = iParam4;
	vVar0.f_2 = iParam5;
	if (((Global_1572864->f_13 || Global_1572864->f_14) || Global_1572864->f_8 != 0) || Global_1391438->f_5 & 8 != 0)
	{
		bVar3 = true;
	}
	switch (((*Global_1360165)[iParam0 /*1157*/])->f_11)
	{
		case 0:
			if (func_1082(iParam0, 2, 1))
			{
				func_1083(iParam0, 2, 1);
			}
			if (func_701(iParam0, 16, 1))
			{
				if ((*Global_1360165)[iParam0 /*1157*/])->f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD()
				{
					if (bParam14)
					{
						func_1084(iParam0, 29, 1);
						return 0;
					}
					if (SCRIPTS::IS_THREAD_ACTIVE(((*Global_1360165)[iParam0 /*1157*/])->f_129, false))
					{
					}
					else
					{
						func_602(iParam0, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (func_582(Global_1360165[iParam0 /*1157*/], 0))
				{
					return Global_1360165[iParam0 /*1157*/];
				}
			}
			if (func_582(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_1360165[iParam0 /*1157*/]))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(Global_1360165[iParam0 /*1157*/]))
				{
					if (bParam1)
					{
						func_1085(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				func_1084(iParam0, 44, 1);
				((*Global_1360165)[iParam0 /*1157*/])->f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				func_1086(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_1084(iParam0, 44, 1);
				((*Global_1360165)[iParam0 /*1157*/])->f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				func_1086(iParam0, 1);
			}
			else
			{
				return 0;
			}
		case 1:
			if (bVar3)
			{
				if (iParam13 == 0)
				{
					iParam13 = (Global_40.f_4942[iParam0 /*60*/])->f_4;
				}
			}
			if (!func_1082(iParam0, 44, 0))
			{
				func_1084(iParam0, 44, 0);
			}
			if (func_1087(iParam0, vVar0, iParam13, 0, 1, bParam17, bParam20, -1, 1, 0))
			{
				func_1086(iParam0, 2);
			}
			break;
		case 2:
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 171, true);
			if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1360165[iParam0 /*1157*/]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
			}
			func_1083(iParam0, 18, 1);
			ENTITY::SET_ENTITY_VISIBLE(Global_1360165[iParam0 /*1157*/], true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], 1030835986);
			POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/], 0);
			_NAMESPACE48::_0x6759BEE6762E140B(((*Global_1360165)[iParam0 /*1157*/])->f_1);
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 130, false);
			func_1088(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				func_1089(iParam0, 0, 0, 1);
			}
			func_1083(iParam0, 33, 1);
			func_1083(iParam0, 34, 1);
			func_1083(iParam0, 29, 1);
			if (!func_588(vVar0) && iParam7)
			{
				func_1086(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				func_1086(iParam0, 4);
			}
			else
			{
				func_1086(iParam0, 5);
			}
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(Global_1360165[iParam0 /*1157*/]) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_1360165[iParam0 /*1157*/], -1))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Global_1360165[iParam0 /*1157*/]))
				{
					if (PED::IS_PED_ON_MOUNT(Global_1360165[iParam0 /*1157*/]) && bParam10)
					{
					}
					else if (PED::IS_PED_USING_ANY_SCENARIO(Global_1360165[iParam0 /*1157*/]))
					{
						func_1085(iParam0, 1, "Teleporting a stolen companion using a scenario.");
					}
					else
					{
						ENTITY::DETACH_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
					}
				}
				iVar4 = 2;
				if (bParam10)
				{
					iVar4 |= 4;
				}
				func_1090(Global_1360165[iParam0 /*1157*/], vVar0, fParam6, 2, 1073741824);
			}
			else if (bParam16)
			{
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_1360165[iParam0 /*1157*/], 0) && !TASK::_0x0C3CB2E600C8977D(Global_1360165[iParam0 /*1157*/], 1))
				{
					TASK::CLEAR_PED_TASKS(Global_1360165[iParam0 /*1157*/], 1, 0);
				}
				return 0;
			}
			if (iParam13 != 0)
			{
				func_1086(iParam0, 4);
			}
			else
			{
				func_1086(iParam0, 5);
			}
			break;
		case 4:
			if (iParam13 != 0 || bVar3)
			{
				if (bVar3)
				{
					if (iParam13 == 0)
					{
						iParam13 = (Global_40.f_4942[iParam0 /*60*/])->f_4;
					}
				}
				if (func_1091(iParam0, iParam13))
				{
					if (PED::_0xA0BC8FAED8CFEB3C(Global_1360165[iParam0 /*1157*/]))
					{
						func_1092(iParam0, iParam13, 0);
						func_1093(iParam0, Global_1360165[iParam0 /*1157*/], iParam13, 1);
						if (func_1082(iParam0, 25, 0))
						{
							func_1083(iParam0, 25, 0);
						}
						func_1084(iParam0, 66, 0);
						func_1086(iParam0, 5);
						((*Global_1360165)[iParam0 /*1157*/])->f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_1086(iParam0, 5);
				}
				func_1084(iParam0, 28, 1);
			}
			else
			{
				func_1086(iParam0, 5);
			}
			break;
		case 5:
			if (PED::_0xA0BC8FAED8CFEB3C(Global_1360165[iParam0 /*1157*/]))
			{
				func_1086(iParam0, 6);
			}
			break;
		case 6:
			if (func_582(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (bParam24)
				{
					PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], true);
				}
				if (bParam18)
				{
					if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_1360165[iParam0 /*1157*/], -1))
					{
						iVar5 = 0;
						while (iVar5 < 10)
						{
							PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_1360165[iParam0 /*1157*/], iVar5);
							PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Global_1360165[iParam0 /*1157*/], iVar5, "ALL");
							iVar5++;
						}
						PED::_0xE3144B932DFDFF65(Global_1360165[iParam0 /*1157*/], 0f, -1, 1, 1);
						PED::_0xD049920CD29F6CC8(Global_1360165[iParam0 /*1157*/], 0f, -1, 1, 1);
					}
				}
				if (bParam19)
				{
					func_1094(iParam0);
				}
				if (bParam21)
				{
					TASK::CLEAR_PED_SECONDARY_TASK(Global_1360165[iParam0 /*1157*/]);
					func_1095(Global_1360165[iParam0 /*1157*/], 1);
				}
			}
			func_1086(iParam0, 7);
		case 7:
			func_1088(iParam0, bParam9, bParam15, 0);
			func_1096(iParam0, 4, bParam11);
			func_1097(iParam0);
			if (bParam20)
			{
				if (func_1098(Global_1360165[iParam0 /*1157*/]))
				{
				}
			}
			func_1099(iParam0, Global_1360165[iParam0 /*1157*/]);
			if (!bParam23 && !PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true))
			{
				PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true);
			}
			(Global_40.f_4942[iParam0 /*60*/])->f_4 = (Global_40.f_4942[iParam0 /*60*/])->f_3;
			func_1086(iParam0, 0);
			func_700(iParam0, 16, 1);
			func_1083(iParam0, 44, 1);
			((*Global_1360165)[iParam0 /*1157*/])->f_1156 = 0;
			((*Global_1360165)[iParam0 /*1157*/])->f_129 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			return Global_1360165[iParam0 /*1157*/];
	}
	return 0;
}

void func_598()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_582(func_581(iVar0), 0))
		{
			if (PED::GET_PED_CONFIG_FLAG(func_581(iVar0), 343, true))
			{
				PED::SET_PED_CONFIG_FLAG(func_581(iVar0), 343, false);
			}
		}
		iVar0++;
	}
}

char* func_599()
{
	return "CUT_THAT_OUT";
}

void func_600()
{
	int iVar0;

	if (func_582(Global_35, 0))
	{
		TASK::CLEAR_PED_SECONDARY_TASK(Global_35);
		if (PED::_0xA911EE21EDF69DAF(Global_35))
		{
			iVar0 = PED::_0xD806CD2A4F2C2996(Global_35);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				PED::_0xED00D72F81CF7278(iVar0, 0, 0);
				PED::SET_PED_TO_RAGDOLL(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0), 10000, 10000, 0, false, false, false);
			}
		}
	}
}

void func_601(var uParam0, int iParam1)
{
	if (iParam1 || !func_1072(uParam0))
	{
		func_1100(uParam0);
	}
}

void func_602(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	if (!func_591(iParam0))
	{
		return;
	}
	if (func_594(iParam0))
	{
		if (((*Global_1360165)[iParam0 /*1157*/])->f_129 != 0 && ((*Global_1360165)[iParam0 /*1157*/])->f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_1084(iParam0, 56, 1);
		func_601(&(Global_1359489->f_40), 1);
	}
	func_1101(iParam0, 0);
	func_1096(iParam0, 4, 0);
	func_1102(iParam0);
	func_1097(iParam0);
	func_1083(iParam0, 37, 1);
	bVar0 = func_582(Global_1360165[iParam0 /*1157*/], 0);
	iVar1 = func_1103(iParam0, 0);
	bVar2 = _NAMESPACE48::_0x800DF3FC913355F3(iVar1);
	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, false);
	}
	if (func_1082(iParam0, 64, 1))
	{
		func_1083(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_1083(iParam0, 33, 1);
		func_1083(iParam0, 34, 1);
		func_1104(iParam0, 1056964608, -1, 1061158912);
		func_1088(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_1084(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_1084(iParam0, 35, 1);
			if (bParam8)
			{
				func_1084(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_1105(iParam0, 0);
			if (PED::IS_PED_IN_GROUP(Global_1360165[iParam0 /*1157*/]))
			{
				PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
			}
			POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/], 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], 1030835986);
		}
		if (bVar2)
		{
			_NAMESPACE48::_0xBB68908CD11AEBDC(iVar1);
		}
		func_1083(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
		}
		func_1084(iParam0, 33, 1);
		func_1088(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_133 = fParam4;
			func_601(&(((*Global_1360165)[iParam0 /*1157*/])->f_130), 1);
		}
		else
		{
			func_607(&(((*Global_1360165)[iParam0 /*1157*/])->f_130));
		}
		if (bParam9)
		{
			func_1084(iParam0, 34, 1);
		}
	}
	if (iParam1 || bParam2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		{
			func_1106(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], false);
	}
	if (func_1082(iParam0, 45, 1))
	{
		func_1083(iParam0, 45, 1);
	}
	func_1107(iParam0, 16, 1);
	func_1083(iParam0, 44, 1);
	((*Global_1360165)[iParam0 /*1157*/])->f_129 = 0;
	(Global_40.f_4942[iParam0 /*60*/])->f_4 = 0;
	if (bParam5)
	{
		if (func_582(func_1108(iParam0), 0))
		{
			func_1109(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

void func_603()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_582(func_581(iVar0), 0))
		{
			if (func_1077(iVar0, 1, 1))
			{
				_NAMESPACE48::_0xD4B614179BCD0654(func_1103(iVar0, 0));
			}
		}
		iVar0++;
	}
}

void func_604(float fParam0)
{
	int iVar0;

	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::_TASK_START_SCENARIO_IN_PLACE(0, -1689755873, 750, 0, 0, -1082130432, 0);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, BUILTIN::FLOOR(fParam0) * 1000, 0f, true, false);
	if (func_582(Global_35, 0))
	{
		TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar0);
	}
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	func_606();
}

void func_605()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = PLAYER::GET_PLAYER_INDEX();
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_1110(iVar0, 1, 0))
		{
			if (func_1111(iVar0))
			{
				iVar2 = func_1112(iVar0);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					PED::_0x97B06669AC569003(iVar2, iVar1);
				}
			}
		}
		iVar0++;
	}
}

void func_606()
{
	vector3 vVar0;
	int iVar3;

	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1065353216);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-15f, 1f);
	if (func_582(Global_35, 0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
	}
	vVar0.f_2 = (vVar0.z - 2f);
	iVar3 = CAM::GET_RENDERING_CAM();
	if (CAM::DOES_CAM_EXIST(iVar3))
	{
		CAM::POINT_CAM_AT_COORD(iVar3, vVar0);
		CAM::SHAKE_CAM(iVar3, "HAND_SHAKE", 1f);
	}
}

void func_607(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_608(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_28() != -1)
	{
		return;
	}
	if ((Global_36615 && func_1113(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_1114(iParam0);
	iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_1115(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, iParam7);
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
			func_1116(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_1115(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

void func_609(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_1327590->f_19547)
	{
		(Global_1327590->f_19547[iParam0 /*5*/])->f_4 = 1;
	}
}

int func_610(int iParam0, bool bParam1, int iParam2)
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
		if (func_1117())
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
		iVar0 = func_251(&(Global_1898164->f_1[0 /*5*/]));
		if (func_242(iVar0) && func_275(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_67(&(Global_1898164->f_1[0 /*5*/])))
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

void func_611(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;

	iVar0 = ((*Global_1888801)[iParam0 /*35*/])->f_20;
	bVar1 = func_177(iParam0, 32);
	if (iVar0 == 8)
	{
		return;
	}
	if ((!bVar1 && iVar0 != 3) && iVar0 != 4)
	{
		return;
	}
	bVar2 = false;
	if (Global_1572887->f_12 == -1 && iParam0 == func_44())
	{
		if (((((((iParam0 != 58 || func_1118()) && !func_842(4)) && !func_1119(67)) && !func_369(67)) && !(func_32(43) && !func_32(44))) && !(func_32(59) && !func_32(60))) && !func_1121(func_1120(iParam0), 8192))
		{
			bVar2 = true;
			iVar3 = 52;
			if (func_32(70))
			{
				iVar3 = 46;
			}
			else
			{
				iVar3 = 52;
			}
		}
	}
	else
	{
		switch (((*Global_1888801)[iParam0 /*35*/])->f_20)
		{
			case 3:
				bVar2 = false;
				break;
			case 4:
				if (((*Global_1888801)[iParam0 /*35*/])->f_13 != -1)
				{
					func_1122(iParam0, ((*Global_1888801)[iParam0 /*35*/])->f_14, ((*Global_1888801)[iParam0 /*35*/])->f_15, 1);
					((*Global_1888801)[iParam0 /*35*/])->f_13 = -1;
				}
				break;
			case 6:
				break;
		}
	}
	if (bVar2)
	{
	}
	if (bVar2 && !bParam2)
	{
		if (((*Global_1888801)[iParam0 /*35*/])->f_13 == -1)
		{
			((*Global_1888801)[iParam0 /*35*/])->f_14 = iVar3;
			((*Global_1888801)[iParam0 /*35*/])->f_13 = func_1123(iParam0, iVar3, ((*Global_1888801)[iParam0 /*35*/])->f_15, -1);
			func_1124(iParam0, iVar3, ((*Global_1888801)[iParam0 /*35*/])->f_15, &(((*Global_1888801)[iParam0 /*35*/])->f_22));
			if (iParam0 == 9)
			{
				if (MAP::DOES_BLIP_EXIST(&(Global_36307[((*Global_1888801)[iParam0 /*35*/])->f_13])))
				{
					MAP::SET_BLIP_COORDS(&(Global_36307[((*Global_1888801)[iParam0 /*35*/])->f_13]), ((*Global_1888801)[iParam0 /*35*/])->f_15);
					MAP::_0x662D364ABF16DE2F(&(Global_36307[((*Global_1888801)[iParam0 /*35*/])->f_13]), 1046501997);
				}
			}
			if (Global_1572887->f_12 == -1)
			{
				if (iVar3 == 52 && Global_1357549->f_1708)
				{
					func_1125(((*Global_1888801)[iParam0 /*35*/])->f_13, 1720107185);
				}
			}
		}
		else if (((*Global_1888801)[iParam0 /*35*/])->f_14 != iVar3 || ((*Global_1888801)[iParam0 /*35*/])->f_18)
		{
			func_1122(iParam0, ((*Global_1888801)[iParam0 /*35*/])->f_14, ((*Global_1888801)[iParam0 /*35*/])->f_15, 1);
			((*Global_1888801)[iParam0 /*35*/])->f_13 = -1;
			func_347(iParam0, 1024);
			((*Global_1888801)[iParam0 /*35*/])->f_18 = 0;
		}
	}
	else if (((*Global_1888801)[iParam0 /*35*/])->f_13 != -1)
	{
		func_1122(iParam0, ((*Global_1888801)[iParam0 /*35*/])->f_14, ((*Global_1888801)[iParam0 /*35*/])->f_15, 1);
		((*Global_1888801)[iParam0 /*35*/])->f_13 = -1;
		func_347(iParam0, 1024);
	}
	if (func_177(iParam0, 64))
	{
		func_347(iParam0, 64);
		func_1126(iParam0);
	}
	if (bVar4)
	{
		if (!func_177(iParam0, 1024))
		{
			if (func_1127(iParam0, iVar3, -1726569132))
			{
				func_351(iParam0, 1024);
			}
		}
	}
	else if (func_177(iParam0, 1024))
	{
		if (func_1128(iParam0, iVar3, -1726569132))
		{
			func_347(iParam0, 1024);
		}
	}
}

void func_612(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		if (func_177(iParam0, 2))
		{
			func_1129(iParam0, Global_36);
		}
		else if (func_177(iParam0, 1))
		{
			func_1130(iParam0, 0);
		}
		else
		{
			func_1131(iParam0, Global_36, bParam1);
		}
	}
}

bool func_613(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

bool func_614(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

int func_615(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 11;
		case 2:
			return 30;
		case 3:
			return 33;
		case 4:
			return 37;
		case 7:
			return 40;
		case 6:
			return 50;
		case 8:
			return 57;
		case 9:
			return 62;
		case 10:
			return 77;
		case 11:
			return 93;
		case 12:
			return 107;
		case 13:
			return 114;
		case 14:
			return 117;
		case 15:
			return 120;
		case 16:
			return 126;
		default:
			break;
	}
	return -1;
}

int func_616(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
		case 1:
			return 29;
		case 2:
			return 32;
		case 3:
			return 36;
		case 4:
			return 39;
		case 7:
			return 49;
		case 6:
			return 56;
		case 8:
			return 61;
		case 9:
			return 76;
		case 10:
			return 92;
		case 11:
			return 106;
		case 12:
			return 113;
		case 13:
			return 116;
		case 14:
			return 119;
		case 15:
			return 125;
		case 16:
			return 127;
		default:
			break;
	}
	return -1;
}

int func_617(var uParam0)
{
	switch (Global_1897952->f_41)
	{
		case 11:
			if (Global_1894899->f_4 != 9)
			{
				Global_1894899->f_4 = 9;
			}
			else
			{
				Global_1894899->f_4 = 77;
				*uParam0 = 1;
			}
			return 1;
		case 2:
			if (Global_1894899->f_4 != 3)
			{
				Global_1894899->f_4 = 3;
			}
			*uParam0 = 1;
			return 1;
		case 0:
			if (Global_1894899->f_4 != 95)
			{
				Global_1894899->f_4 = 95;
			}
			*uParam0 = 1;
			return 1;
		case 9:
		case 10:
			if (Global_1894899->f_4 != 128)
			{
				Global_1894899->f_4 = 128;
			}
			*uParam0 = 1;
			return 1;
		case 13:
			if (Global_1894899->f_4 != 117)
			{
				Global_1894899->f_4 = 117;
			}
			else
			{
				Global_1894899->f_4 = 129;
				*uParam0 = 1;
			}
			return 1;
	}
	return 0;
}

bool func_618(int iParam0)
{
	int iVar0;

	iVar0 = 6;
	if (func_1132(iParam0))
	{
		iVar0 = _NAMESPACE71::_0x59FA676177DBE4C9(iParam0);
	}
	return iVar0 != 6;
}

void func_619()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_50(Global_36, 1);
	iVar1 = func_181();
	iVar2 = func_1133();
	if (func_561(iVar0) && 32 != iVar0)
	{
		iVar3 = ((*Global_1888801)[iVar0 /*35*/])->f_4;
		if (VOLUME::_0x92A78D0BEDB332A3(iVar3) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iVar3, false, 0))
		{
			func_563(iVar0, iVar1, iVar2, func_1134(0), -1, 1);
		}
		else
		{
			func_563(-1, iVar1, iVar2, func_1134(0), -1, 1);
		}
	}
	else
	{
		func_563(iVar0, iVar1, iVar2, func_1134(0), -1, 1);
	}
}

int func_620(vector3 vParam0, int iParam3)
{
	vector3 vVar0;
	struct<2> Var3;
	float fVar6;

	func_1135(iParam3, &vVar0, &Var3, &fVar6);
	if (func_1136(vParam0, vVar0, Var3, Var3.f_1, fVar6))
	{
		return 1;
	}
	return 0;
}

int func_621(int iParam0)
{
	switch (iParam0)
	{
		case 16:
			return 1474106589;
		case 31:
			return 1979340260;
		case 24:
			return -656861063;
		case 38:
			return 2073023198;
		case 18:
			return 1735191955;
		case 23:
			return 215480587;
		case 44:
			return 545498183;
		case 26:
			return 428613469;
		case 40:
			return 532401286;
		case 30:
			return 1740117339;
		case 4:
			return -1116738159;
		case 22:
			return -1730421200;
		case 5:
			return -1394664008;
		case 10:
			return -325788416;
		case 36:
			return -792566558;
		case 1:
			return -2089448537;
		case 6:
			return 82527577;
		case 7:
			return 1515744307;
		case 41:
			return -2110824426;
		case 43:
			return 1268001912;
		case 42:
			return 205568929;
		case 21:
			return -1173041902;
		case 45:
			return 2133877879;
		case 46:
			return -1408667066;
		case 47:
			return 1374995365;
		case 48:
			return 1837393665;
		case 49:
			return -1585921053;
		case 50:
			return -876779166;
		default:
			break;
	}
	return 0;
}

int func_622(int iParam0)
{
	switch (iParam0)
	{
		case 42:
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_623(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

int func_624(int iParam0)
{
	if (!func_623(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/];
}

void func_625(int iParam0, int iParam1)
{
	if (!func_623(iParam0))
	{
		return;
	}
	((*Global_1895087)[iParam0 /*3*/])->f_1 = iParam1;
}

int func_626(int iParam0)
{
	if (!func_623(iParam0))
	{
		return 0;
	}
	return ((*Global_1895087)[iParam0 /*3*/])->f_1;
}

int func_627(int iParam0)
{
	if (!func_623(iParam0))
	{
		return 0;
	}
	if (!func_366(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

int func_628(int iParam0)
{
	float fVar0;

	fVar0 = (BUILTIN::TO_FLOAT(iParam0 + 100) / 200f);
	return BUILTIN::CEIL((100f * fVar0));
}

int func_629(int iParam0)
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

int func_630(int iParam0)
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

void func_631(int iParam0, float fParam1, int iParam2)
{
	char* sVar0;

	sVar0 = func_1137(iParam0, 0, 0, 0);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_12[0]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_16[0]), iParam2);
}

float func_632(int iParam0)
{
	float fVar0;

	fVar0 = (BUILTIN::TO_FLOAT(iParam0) / 100f);
	return ((fVar0 * 200f) - 100f);
}

int func_633(int iParam0)
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

char* func_634(int iParam0)
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

int func_635()
{
	struct<4> Var0;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	int iVar9;
	vector3 vVar10;
	vector3 vVar13;
	var uVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;

	if (!func_1138())
	{
		return 0;
	}
	Var0 = Global_1359489->f_361.f_195;
	Var0.f_2 = 0;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		return 0;
	}
	iVar6 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Global_1359489->f_361.f_195, Var0.f_1);
	iVar9 = 0;
	if (iVar6 < 1)
	{
	}
	else if (5 < iVar6)
	{
		return 0;
	}
	else
	{
		Global_1359489->f_361.f_2 = iVar6;
	}
	uVar16 = Var0.f_1;
	iVar5 = 0;
	while (iVar5 < iVar6)
	{
		Var0.f_2 = 2;
		Var0.f_3 = iVar5;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			Var0.f_2 = 6;
			if (DATAFILE::_DATAFILE_GET_HASH(&iVar7, &Var0))
			{
				iVar17 = func_1139(iVar7);
				if (iVar17 == -1)
				{
					func_1140(Global_1359489->f_361.f_196[iVar5 /*12*/]);
					Jump @582; //curOff = 193
				}
				else
				{
					Global_1359489->f_361.f_196[iVar5 /*12*/] = iVar17;
				}
			}
			Var0.f_2 = 7;
			if (DATAFILE::_DATAFILE_GET_HASH(&uVar8, &Var0))
			{
				iVar18 = uVar8;
				if (func_38(iVar18, 0))
				{
					(Global_1359489->f_361.f_196[iVar5 /*12*/])->f_2 = iVar18;
					iVar19 = func_1141(iVar18);
					if (iVar19 != 0)
					{
						(Global_1359489->f_361.f_196[iVar5 /*12*/])->f_3 = iVar19;
					}
					else
					{
						func_1140(Global_1359489->f_361.f_196[iVar5 /*12*/]);
					}
					else
					{
						Jump @338; //curOff = 315
						func_1140(Global_1359489->f_361.f_196[iVar5 /*12*/]);
						Jump @582; //curOff = 335
						Jump @361; //curOff = 338
						func_1140(Global_1359489->f_361.f_196[iVar5 /*12*/]);
						Jump @582; //curOff = 358
						Var0.f_2 = 3;
						if (DATAFILE::_DATAFILE_GET_HASH(&iVar9, &Var0))
						{
							iVar20 = func_1142(iVar9);
							if (iVar20 != -1)
							{
								(Global_1359489->f_361.f_196[iVar5 /*12*/])->f_1 = iVar20;
							}
							else
							{
								func_1140(Global_1359489->f_361.f_196[iVar5 /*12*/]);
							}
							else
							{
								Jump @454; //curOff = 431
								func_1140(Global_1359489->f_361.f_196[iVar5 /*12*/]);
								Jump @582; //curOff = 451
								Var0.f_2 = 8;
								if (DATAFILE::_DATAFILE_GET_VECTOR(&vVar10, &Var0))
								{
									(Global_1359489->f_361.f_196[iVar5 /*12*/])->f_4 = { vVar10 };
								}
								else
								{
									func_1140(Global_1359489->f_361.f_196[iVar5 /*12*/]);
								}
								else
								{
									Var0.f_2 = 9;
									if (DATAFILE::_DATAFILE_GET_VECTOR(&vVar13, &Var0))
									{
										(Global_1359489->f_361.f_196[iVar5 /*12*/])->f_7 = { vVar13 };
									}
									else
									{
										func_1140(Global_1359489->f_361.f_196[iVar5 /*12*/]);
									}
									else
									{
										Var0.f_1 = uVar16;
									}
								}
							}
							iVar5++;
							return 1;
						}
					}
				}
			}
		}
	}

void func_636(int iParam0, int iParam1)
{
	(Global_40.f_6563[iParam0 /*27*/])->f_24 = iParam1;
}

void func_637(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_1143(*uParam0);
	iVar1 = func_1144(*uParam0);
	iVar2 = MISC::GET_HASH_KEY(func_1145(uParam0->f_3));
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(9, iVar0))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(9, iVar0, func_1146(func_259()), 1307979820, func_1147(*uParam0), 0);
		UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(9, iVar0, iVar2, 1997120069);
		UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(9, iVar0, iVar1, 404961913);
		if (*uParam0 == 21)
		{
			func_1148(1, 688258043, 0);
			func_1148(2, -1477273558, 0);
			func_1148(3, 128702355, 0);
			func_1148(4, 1613651027, 0);
			func_1148(5, 0, -998653403);
			iVar3 = 0;
			while (iVar3 < 6)
			{
				if (iVar3 == 0)
				{
				}
				else
				{
					func_642(uParam0, iVar3, &((Global_1359489->f_361.f_258[iVar3 /*6*/])->f_2), 0, 1, 1);
				}
				iVar3++;
			}
		}
	}
}

void func_638()
{
	int iVar0;

	iVar0 = Global_1359489->f_361.f_1 + 1;
	if (iVar0 > 10)
	{
		return;
	}
	Global_1359489->f_361.f_1++;
}

void func_639(var uParam0, bool bParam1)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;

	iVar0 = func_1149(*uParam0);
	if (iVar0 == 0)
	{
		return;
	}
	if (iVar0 == 761950088)
	{
		sVar1 = MISC::_CREATE_VAR_STRING(0, uParam0->f_1);
		MISC::_INT_TO_STRING(uParam0->f_2, "%i", &sVar4);
		sVar3 = func_1058(&sVar4, 109029619);
		sVar2 = func_643(uParam0->f_3, 0);
		func_642(uParam0, 1896170705, MISC::_CREATE_VAR_STRING(168, iVar0, sVar2, sVar3, sVar1), 0, bParam1, 0);
	}
	else
	{
		func_642(uParam0, 1896170705, HUD::_GET_LABEL_TEXT_BY_HASH(iVar0), 0, bParam1, 0);
	}
}

void func_640(int iParam0)
{
	switch (iParam0)
	{
		case 9:
			if (func_452(1427759409, 0, 0) < 1)
			{
				func_1150();
				func_1151(-2137341727, 0.68f);
				func_1151(-1564940634, 0.68f);
				func_1151(-1881226198, 0.68f);
			}
			break;
	}
}

void func_641(var uParam0, bool bParam1)
{
	int iVar0;
	char* sVar1;

	iVar0 = func_1152(*uParam0);
	if (iVar0 == 0)
	{
		return;
	}
	if (iVar0 == 541204999)
	{
		sVar1 = func_643(uParam0->f_3, 0);
		func_642(uParam0, 1896170705, MISC::_CREATE_VAR_STRING(8, iVar0, sVar1), 0, bParam1, 0);
	}
	else
	{
		func_642(uParam0, 1896170705, HUD::_GET_LABEL_TEXT_BY_HASH(iVar0), 0, bParam1, 0);
	}
}

void func_642(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;

	iVar0 = func_1143(*uParam0);
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(9, iVar0))
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(9, func_1143(*uParam0), iParam1, sParam2, iParam3, iParam5, 0);
		if (bParam4)
		{
			UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar0);
			Global_1359489->f_361.f_194 = func_966("CAMP_REQUEST", "CAMP_REQUEST_DETAIL", 1997120069, MISC::GET_HASH_KEY(func_1145(uParam0->f_3)), 1433015236, "INPUT_FEED_INTERACT_GENERIC", -1507719118, 5000, 0, 0, 0, 0, 1, 1);
		}
	}
}

char* func_643(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "COMP_DUTCH";
		case 1:
			return "COMP_JOHN";
		case 2:
			return "COMP_JAVIER";
		case 3:
			return "COMP_BILL";
		case 4:
			return "COMP_UNCLE";
		case 5:
			return "COMP_HOSEA";
		case 6:
			return "COMP_MICAH";
		case 7:
			return "COMP_CHARLES";
		case 8:
			return "COMP_SEAN";
		case 9:
			return "COMP_LENNY";
		case 10:
			return "COMP_KIERAN";
		case 23:
			return "COMP_TRELAWNY";
		case 17:
			return "COMP_PEARSON";
		case 18:
			return "COMP_STRAUSS";
		case 13:
			return "COMP_ABIGAIL";
		case 14:
			return "COMP_JACK";
		case 16:
			return "COMP_MOLLY_OSHEA";
		case 19:
			return "COMP_SUSAN_GRIMSHAW";
		case 15:
			return "COMP_MARY_BETH";
		case 20:
			return "COMP_KAREN";
		case 22:
			return "COMP_TILLY";
		case 11:
			return "COMP_SADIE";
		case 24:
			return "COMP_CLEET";
		case 25:
			return "COMP_JOE";
		case 26:
			return "COMP_EAGLE_FLIES";
		case 12:
			if ((func_120(((*Global_1835011)[59 /*74*/])->f_1, 1) || func_120(((*Global_1347702)[1 /*49*/])->f_15, 1)) || func_693(((*Global_1347702)[1 /*49*/])->f_15))
			{
				return "COMP_RUFUS";
			}
			else if (func_1153(403634348, 1))
			{
				return "COMP_CAIN";
			}
			return "COMP_DOG";
		case 21:
			if (bParam1)
			{
				return "COMP_SWANSON_S";
			}
			else
			{
				return "COMP_SWANSON";
			}
			break;
	}
	return "";
}

int func_644(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 280930298;
		case 2:
			return -682314457;
		case 3:
			return -316940111;
		case 4:
			return -974253478;
		case 6:
			return -496907459;
		case 7:
			return -511522429;
		default:
			break;
	}
	return 0;
}

Vector3 func_645(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1789f, -81.2f, 56.8f;
		case 1:
			return 777.0469f, 848.3318f, 117.9097f;
		case 2:
			return 1319.072f, -2281.907f, 51.31572f;
		case 3:
			return -415.0638f, 1752.658f, 217.6675f;
		case 4:
			return 1623.045f, -364.0234f, 75.39715f;
		case 5:
			return 2820.866f, 275.3142f, 51.84647f;
		case 6:
			return 2990.484f, 2188.289f, 165.7838f;
		case 7:
			return -1817.371f, 657.6644f, 130.8627f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

char* func_646()
{
	return "HUD_Toast_Soundset";
}

var func_647(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		sParam0 = "ROB_TOAST_BODY";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "ROB_TOAST_BODY";
	}
	if (iParam2 == -1)
	{
		iParam2 = -1234289408;
	}
	if (iParam3 == -1)
	{
		iParam3 = 1531758713;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		sParam5 = "INPUT_FEED_INTERACT_GENERIC";
	}
	if (iParam6 == -1)
	{
		iParam6 = 138119161;
	}
	if (!bParam14)
	{
		return func_966(sParam0, sParam1, iParam2, iParam3, iParam4, sParam5, iParam6, iParam7, sParam8, sParam9, iParam10, iParam11, iParam12, iParam13);
	}
	return func_1154(sParam0, sParam1, iParam2, iParam3, iParam4, sParam5, iParam6, iParam7, sParam8, sParam9, iParam10, iParam11, iParam12, iParam13);
}

void func_648(int iParam0, int iParam1)
{
	if (func_201(iParam0, iParam1))
	{
		return;
	}
	(Global_40.f_9422[iParam0 /*7*/])->f_6 = ((Global_40.f_9422[iParam0 /*7*/])->f_6 || iParam1);
}

void func_649(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_1155(&Global_0, 8);
	}
	if (!func_35() || func_28() != -1)
	{
		return;
	}
	func_1155(&Global_0, 1);
}

int func_650(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 4;
		default:
			break;
	}
	return 0;
}

int func_651(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 4;
		case 3:
			return 8;
		case 4:
			return 16;
		case 5:
			return 32;
		case 6:
			return 64;
		default:
			break;
	}
	return 0;
}

bool func_652(var uParam0)
{
	return (Global_40.f_12004.f_1 && uParam0) != 0;
}

int func_653(int iParam0)
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

bool func_654(int iParam0, int iParam1)
{
	return (Global_40.f_8863[func_721(iParam0, 1)] && iParam1) != 0;
}

int func_655(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 4;
		case 3:
			return 8;
		case 4:
			return 16;
		case 5:
			return 32;
		default:
			break;
	}
	return 0;
}

bool func_656(var uParam0)
{
	return (Global_40.f_12004.f_2 && uParam0) != 0;
}

int func_657(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 4;
		case 3:
			return 8;
		case 4:
			return 16;
		case 5:
			return 32;
		default:
			break;
	}
	return 0;
}

bool func_658(var uParam0)
{
	return (Global_40.f_12004.f_3 && uParam0) != 0;
}

int func_659(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 4;
		default:
			break;
	}
	return 0;
}

void func_660(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	char* sVar6;
	char* sVar7;
	char* sVar8;
	char* sVar9;
	char* sVar10;
	vector3 vVar11;
	int iVar14;
	int iVar15;

	iVar14 = 0;
	sVar3 = "MISSION_COLLECTPARAKEETS";
	sVar4 = "SP_MISSIONS_13";
	sVar7 = "COL_CP_TITLE";
	vVar11 = { -1678.832f, -335.5439f, 172.9001f };
	switch (iParam0)
	{
		case 1:
			sVar5 = "COL_CP_INTRO";
			sVar6 = "TF_CAROLINA_PARAKEET_ONE_DEAD";
			iVar1 = MISC::GET_HASH_KEY("BLIP_COLLECT_PARAKEETS");
			break;
		case 15:
			sVar5 = "COL_CP_INTRO";
			sVar6 = "TF_CAROLINA_PARAKEET_FIVE_DEAD";
			iVar1 = MISC::GET_HASH_KEY("BLIP_COLLECT_PARAKEETS");
			break;
		case 25:
			sVar5 = "COL_CP_END";
			sVar6 = "TF_CAROLINA_PARAKEET_ALL_DEAD";
			break;
	}
	iVar0 = 1951140434; /* GXTEntry: "Carolina Parakeets" */
	if (bParam2)
	{
		sVar8 = "COL_CP_TITLE";
		sVar10 = "COL_CTX_PLAYER_LOG";
		sVar9 = "MISSION_COMPLETE";
		iVar1 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar2 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		sVar8 = "COL_CP_INTRO";
		sVar10 = "COL_CTX_PLAYER_LOG";
		sVar9 = "COL_CP_TITLE";
		iVar1 = MISC::GET_HASH_KEY("BLIP_COLLECT_PARAKEETS");
		iVar2 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (bParam3)
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar0);
		func_966(MISC::_CREATE_VAR_STRING(2, sVar9), MISC::_CREATE_VAR_STRING(2, sVar8), iVar2, iVar1, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar10), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
	}
	if (bParam1)
	{
		if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar0))
		{
			UILOG::_UILOG_REMOVE_ENTRY(3, iVar0);
		}
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar0))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iVar0, vVar11, MISC::GET_HASH_KEY(sVar7), MISC::GET_HASH_KEY(sVar6), 0);
	}
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iVar0, MISC::GET_HASH_KEY(sVar5), sVar5, 0, 0, 0);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iVar0, 1);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iVar0, iVar1, iVar2);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iVar0, MISC::GET_HASH_KEY(sVar3), MISC::GET_HASH_KEY(sVar4));
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iVar0, MISC::_CREATE_VAR_STRING(2, sVar5));
	if (func_1156(COLLECTION::_0x126CBEBBA46693CF(iVar15, -566775080, 0)) >= 25)
	{
		iVar14 = 1;
	}
	else
	{
		iVar14 = 0;
	}
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iVar0, MISC::GET_HASH_KEY("COL_CP_HUNT"), "COL_CP_HUNT", iVar14, 1, 0);
}

int func_661(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 4;
		case 3:
			return 8;
		case 4:
			return 16;
		case 5:
			return 32;
		case 6:
			return 64;
		default:
			break;
	}
	return 0;
}

bool func_662(var uParam0)
{
	return (Global_40.f_12004.f_5 && uParam0) != 0;
}

int func_663(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 4;
		case 3:
			return 8;
		case 4:
			return 16;
		case 5:
			return 32;
		case 6:
			return 64;
		case 7:
			return 128;
		case 8:
			return 256;
		case 9:
			return 512;
		case 10:
			return 1024;
		case 11:
			return 2048;
		case 12:
			return 4096;
		case 13:
			return 8192;
		case 14:
			return 16384;
		case 15:
			return 32768;
		case 16:
			return 65536;
		case 17:
			return 131072;
		case 18:
			return 262144;
		case 19:
			return 524288;
		case 20:
			return 1048576;
		case 21:
			return 2097152;
		default:
			break;
	}
	return 0;
}

bool func_664(var uParam0)
{
	return (Global_40.f_12004.f_6 && uParam0) != 0;
}

int func_665(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	switch (iParam0)
	{
		case -949689219:
			if (iParam1 == -1866642239)
			{
				iVar0 = 444160793; /* GXTEntry: "Perfect Squirrel Carcass" */
			}
			else if (iParam1 == 444160793)
			{
				iVar0 = -1866642239; /* GXTEntry: "Perfect Rabbit Carcass" */
			}
			break;
		case -1248968496:
			if (iParam1 == -1969404854)
			{
				iVar0 = 1761263432; /* GXTEntry: "Perfect Rat Carcass" */
				iVar1 = -843795569; /* GXTEntry: "Perfect Woodpecker Carcass" */
			}
			else if (iParam1 == 1761263432)
			{
				iVar0 = -1969404854; /* GXTEntry: "Perfect Cardinal Carcass" */
				iVar1 = -843795569; /* GXTEntry: "Perfect Woodpecker Carcass" */
			}
			else if (iParam1 == -843795569)
			{
				iVar0 = -1969404854; /* GXTEntry: "Perfect Cardinal Carcass" */
				iVar1 = 1761263432; /* GXTEntry: "Perfect Rat Carcass" */
			}
			break;
		case 1706369307:
			if (iParam1 == -832850511)
			{
				iVar0 = -935543049; /* GXTEntry: "Perfect Opossum Carcass" */
				iVar1 = -1464585113; /* GXTEntry: "Perfect Oriole Carcass" */
				iVar2 = -1290897778; /* GXTEntry: "Perfect Robin Carcass" */
			}
			else if (iParam1 == -935543049)
			{
				iVar0 = -832850511; /* GXTEntry: "Perfect Chipmunk Carcass" */
				iVar1 = -1464585113; /* GXTEntry: "Perfect Oriole Carcass" */
				iVar2 = -1290897778; /* GXTEntry: "Perfect Robin Carcass" */
			}
			else if (iParam1 == -1464585113)
			{
				iVar0 = -832850511; /* GXTEntry: "Perfect Chipmunk Carcass" */
				iVar1 = -935543049; /* GXTEntry: "Perfect Opossum Carcass" */
				iVar2 = -1290897778; /* GXTEntry: "Perfect Robin Carcass" */
			}
			else if (iParam1 == -1290897778)
			{
				iVar0 = -832850511; /* GXTEntry: "Perfect Chipmunk Carcass" */
				iVar1 = -935543049; /* GXTEntry: "Perfect Opossum Carcass" */
				iVar2 = -1464585113; /* GXTEntry: "Perfect Oriole Carcass" */
			}
			break;
		case 1520110311:
			if (iParam1 == -100913452)
			{
				iVar0 = 313332607; /* GXTEntry: "Perfect Sparrow Carcass" */
				iVar1 = -124539232; /* GXTEntry: "Perfect Toad Carcass" */
				iVar2 = 102446365; /* GXTEntry: "Perfect Skunk Carcass" */
				iVar3 = -1882344824; /* GXTEntry: "Perfect Bullfrog Carcass" */
			}
			else if (iParam1 == 313332607)
			{
				iVar0 = -100913452; /* GXTEntry: "Perfect Songbird Carcass" */
				iVar1 = -124539232; /* GXTEntry: "Perfect Toad Carcass" */
				iVar2 = 102446365; /* GXTEntry: "Perfect Skunk Carcass" */
				iVar3 = -1882344824; /* GXTEntry: "Perfect Bullfrog Carcass" */
			}
			else if (iParam1 == -124539232)
			{
				iVar0 = -100913452; /* GXTEntry: "Perfect Songbird Carcass" */
				iVar1 = 313332607; /* GXTEntry: "Perfect Sparrow Carcass" */
				iVar2 = 102446365; /* GXTEntry: "Perfect Skunk Carcass" */
				iVar3 = -1882344824; /* GXTEntry: "Perfect Bullfrog Carcass" */
			}
			else if (iParam1 == 102446365)
			{
				iVar0 = -100913452; /* GXTEntry: "Perfect Songbird Carcass" */
				iVar1 = 313332607; /* GXTEntry: "Perfect Sparrow Carcass" */
				iVar2 = -124539232; /* GXTEntry: "Perfect Toad Carcass" */
				iVar3 = -1882344824; /* GXTEntry: "Perfect Bullfrog Carcass" */
			}
			else if (iParam1 == -1882344824)
			{
				iVar0 = -100913452; /* GXTEntry: "Perfect Songbird Carcass" */
				iVar1 = 313332607; /* GXTEntry: "Perfect Sparrow Carcass" */
				iVar2 = -124539232; /* GXTEntry: "Perfect Toad Carcass" */
				iVar3 = 102446365; /* GXTEntry: "Perfect Skunk Carcass" */
			}
			break;
		case -1992824800:
			if (iParam1 == 905173572)
			{
				iVar0 = 1432949803; /* GXTEntry: "Perfect Bat Carcass" */
				iVar1 = -983831788; /* GXTEntry: "Perfect Blue Jay Carcass" */
				iVar2 = 59384454; /* GXTEntry: "Perfect Crow Carcass" */
				iVar3 = 924882045; /* GXTEntry: "Perfect Beaver Carcass" */
			}
			else if (iParam1 == 1432949803)
			{
				iVar0 = 905173572; /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
				iVar1 = -983831788; /* GXTEntry: "Perfect Blue Jay Carcass" */
				iVar2 = 59384454; /* GXTEntry: "Perfect Crow Carcass" */
				iVar3 = 924882045; /* GXTEntry: "Perfect Beaver Carcass" */
			}
			else if (iParam1 == -983831788)
			{
				iVar0 = 905173572; /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
				iVar1 = 1432949803; /* GXTEntry: "Perfect Bat Carcass" */
				iVar2 = 59384454; /* GXTEntry: "Perfect Crow Carcass" */
				iVar3 = 924882045; /* GXTEntry: "Perfect Beaver Carcass" */
			}
			else if (iParam1 == 59384454)
			{
				iVar0 = 905173572; /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
				iVar1 = 1432949803; /* GXTEntry: "Perfect Bat Carcass" */
				iVar2 = -983831788; /* GXTEntry: "Perfect Blue Jay Carcass" */
				iVar3 = 924882045; /* GXTEntry: "Perfect Beaver Carcass" */
			}
			else if (iParam1 == 924882045)
			{
				iVar0 = 905173572; /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
				iVar1 = 1432949803; /* GXTEntry: "Perfect Bat Carcass" */
				iVar2 = -983831788; /* GXTEntry: "Perfect Blue Jay Carcass" */
				iVar3 = 59384454; /* GXTEntry: "Perfect Crow Carcass" */
			}
			break;
	}
	if (iParam0 == -949689219)
	{
		if (bParam3)
		{
			if (func_1157(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1157(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1157(iVar0))
		{
			*iParam2++;
		}
		if (func_1157(iVar0))
		{
			return 1;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_1157(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1157(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1157(iVar0))
		{
			*iParam2++;
		}
		if (func_1157(iVar1))
		{
			*iParam2++;
		}
		if (func_1157(iVar0) && func_1157(iVar1))
		{
			return 1;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_1157(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1157(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1157(iVar0))
		{
			*iParam2++;
		}
		if (func_1157(iVar1))
		{
			*iParam2++;
		}
		if (func_1157(iVar2))
		{
			*iParam2++;
		}
		if ((func_1157(iVar0) && func_1157(iVar1)) && func_1157(iVar2))
		{
			return 1;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_1157(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1157(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1157(iVar0))
		{
			*iParam2++;
		}
		if (func_1157(iVar1))
		{
			*iParam2++;
		}
		if (func_1157(iVar2))
		{
			*iParam2++;
		}
		if (func_1157(iVar3))
		{
			*iParam2++;
		}
		if (((func_1157(iVar0) && func_1157(iVar1)) && func_1157(iVar2)) && func_1157(iVar3))
		{
			return 1;
		}
	}
	return 0;
}

int func_666(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 4;
		case 3:
			return 8;
		default:
			break;
	}
	return 0;
}

int func_667(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 4;
		case 3:
			return 8;
		default:
			break;
	}
	return 0;
}

int func_668(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 4;
		case 3:
			return 8;
		default:
			break;
	}
	return 0;
}

int func_669(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 4;
		default:
			break;
	}
	return 0;
}

int func_670(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 4;
		case 3:
			return 8;
		default:
			break;
	}
	return 0;
}

int func_671(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 4;
		case 3:
			return 8;
		case 4:
			return 16;
		default:
			break;
	}
	return 0;
}

int func_672(int iParam0)
{
	switch (iParam0)
	{
		case 29:
			return -137688725;
		case 43:
			return -2011875989;
		case 61:
			return 1574026908;
		case 73:
			return 911048422;
		default:
			break;
	}
	return 0;
}

Vector3 func_673(int iParam0)
{
	switch (iParam0)
	{
		case 29:
			return 1325.468f, -1319.246f, 77.0711f;
		case 43:
			return 2719.43f, -1283.178f, 49.6495f;
		case 61:
			return -1789.8f, -385.6f, 160.3f;
		case 73:
			return -283.6743f, 804.662f, 118.3859f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

char* func_674()
{
	return "HUD_Toast_Soundset";
}

void func_675(int iParam0, int iParam1)
{
	if (func_240(iParam0, iParam1))
	{
		return;
	}
	Global_20709.f_2092[iParam0] = (Global_20709.f_2092[iParam0] || iParam1);
}

int func_676(int iParam0, int iParam1)
{
	if (iParam0 == 22 || iParam0 == 23)
	{
		return 332378857;
	}
	else if (iParam0 == 26)
	{
		return -1744398657;
	}
	else if ((iParam0 == 30 || iParam0 == 33) || iParam0 == 36)
	{
		return -622951465;
	}
	else if (iParam0 == 53 || iParam0 == 55)
	{
		return 877823184;
	}
	else if (iParam0 == 58)
	{
		return -1739686743;
	}
	else if (iParam0 == 60 || iParam0 == 61)
	{
		return 2145479193;
	}
	else if ((iParam0 == 71 || iParam0 == 74) || iParam0 == 75)
	{
		return -1610853131;
	}
	else if (iParam0 == 77)
	{
		return -434412386;
	}
	else if (iParam0 == 82 || iParam0 == 83)
	{
		return -1489164512;
	}
	else if (iParam0 == 89)
	{
		return 1970061205;
	}
	else if (iParam0 == 101)
	{
		return -1259688762;
	}
	else if (iParam0 == 115)
	{
		return 1079956634;
	}
	else if ((iParam0 == 117 || iParam0 == 118) || iParam0 == 119)
	{
		return -1280269885;
	}
	else if (iParam0 == 121)
	{
		if (iParam1 || func_120(((*Global_1347702)[iParam0 /*49*/])->f_15, 1))
		{
			return 415367144;
		}
	}
	else if (iParam0 == 127)
	{
		return -1962480616;
	}
	else if (iParam0 == 136)
	{
		return 194953189;
	}
	else if (iParam0 == 143)
	{
		return 825960713;
	}
	else if (iParam0 == 147)
	{
		if (iParam1 || func_120(((*Global_1347702)[iParam0 /*49*/])->f_15, 1))
		{
			return 1770336866;
		}
	}
	if (iParam0 == 151)
	{
		return -1176045274;
	}
	return ((*Global_1347702)[iParam0 /*49*/])->f_36;
}

void func_677(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (Global_40.f_490.f_402[iParam0] || iParam1);
}

char* func_678(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
{
	switch (iParam0)
	{
		case 1:
			return MISC::_CREATE_VAR_STRING(2, sParam1, sParam4);
		case 2:
			return MISC::_CREATE_VAR_STRING(2, sParam1, sParam4, sParam5);
		case 3:
			return MISC::_CREATE_VAR_STRING(10, sParam1, sParam2);
		case 4:
			return MISC::_CREATE_VAR_STRING(42, sParam1, sParam2, sParam3);
	}
	return MISC::_CREATE_VAR_STRING(2, func_1158(sParam1));
}

void func_679(int iParam0, char* sParam1, char* sParam2, float fParam3)
{
	int iVar0;

	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 67108864 != 0)
	{
		return;
	}
	iVar0 = func_244(iParam0);
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar0, func_245(iParam0)))
	{
		return;
	}
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(iVar0, func_245(iParam0), MISC::GET_HASH_KEY(sParam1), sParam2, fParam3 >= 0.9f, 0, 0);
}

void func_680(int iParam0)
{
	int iVar0;
	bool bVar1;

	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_242(iVar0) && Global_1347702[iVar0 /*49*/] == iParam0)
		{
			bVar1 = true;
			func_249(iVar0, 1);
		}
		else if (bVar1)
		{
		}
		else
		{
			iVar0++;
		}
	}
}

void func_681(int iParam0, bool bParam1)
{
	if (!func_243(iParam0, 4))
	{
		return;
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_244(iParam0), func_245(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_244(iParam0), func_245(iParam0), 2, "");
		func_677(iParam0, 16);
	}
	else
	{
		if (func_243(iParam0, 8))
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_244(iParam0), func_245(iParam0), 1, "");
		}
		else
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_244(iParam0), func_245(iParam0), 0, "");
		}
		func_250(iParam0, 16);
	}
}

void func_682(int iParam0, bool bParam1)
{
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 67108864 != 0)
	{
		return;
	}
	if (!func_243(iParam0, 4))
	{
		return;
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_244(iParam0), func_245(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		if (func_243(iParam0, 16))
		{
		}
		else
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_244(iParam0), func_245(iParam0), 1, "");
		}
		func_677(iParam0, 8);
	}
	else
	{
		if (func_243(iParam0, 16))
		{
		}
		else
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_244(iParam0), func_245(iParam0), 0, "");
		}
		func_250(iParam0, 8);
	}
}

int func_683(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

void func_684(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	if (!func_1159(iParam0))
	{
		return;
	}
	iVar0 = func_1160(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	iVar1 = func_1161(iVar0);
	if (iVar1 == 0)
	{
		return;
	}
	if (!func_1162(iVar1))
	{
		return;
	}
	if (!func_1163(iParam0))
	{
		return;
	}
	if (func_1164(iVar0))
	{
		return;
	}
	if (func_162(iVar0, 1, 0))
	{
		return;
	}
	if (func_1165(iVar0))
	{
		return;
	}
	if (func_1166(0, iVar0))
	{
		return;
	}
	if (func_1166(1, iVar0))
	{
		return;
	}
	iVar2 = func_1167(iParam0);
	uVar3 = func_1168(iVar2, 2);
	if (_NAMESPACE49::_0x1F56FB3FDB4EAF65(uVar3))
	{
		_NAMESPACE49::_0x291CC21D1FB6790E(uVar3);
	}
	func_1169(iParam0, 0);
	MAP::_0xD8C7162AB2E2AF45(func_1170(iVar1));
	MAP::_0xDA98246C7A3C2189(func_1171(iVar1));
}

int func_685(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1175400068;
		case 1:
			return 854689865;
		case 2:
			return 1772877245;
		case 3:
			return -891504611;
		case 4:
			return -1134748898;
		case 5:
			return -810270260;
		case 6:
			return 83602522;
		case 7:
			return -2054476413;
		case 8:
			return 1934461192;
		case 9:
			return -1434912930;
		case 10:
			return 491871729;
		case 11:
			return -1078418763;
		case 12:
			return -1360396008;
		case 13:
			return -462984174;
		case 14:
			return -751449681;
		case 15:
			return -1973995525;
		case 16:
			return 1988923494;
		case 17:
			return -1386480124;
		case 18:
			return -1676256391;
		case 19:
			return 901975752;
		case 20:
			return 2119466214;
		case 21:
			return 1812453453;
		case 22:
			return 797237060;
		case 23:
			return 468989987;
		case 24:
			return 1393010249;
		case 25:
			return 1099957082;
		case 26:
			return -415281478;
		case 27:
			return -722949619;
		case 28:
			return 202086482;
		case 29:
			return -87394864;
		default:
			break;
	}
	return 0;
}

void func_686(int iParam0)
{
	int iVar0;

	if (!func_1172(iParam0))
	{
		return;
	}
	if (func_1173(iParam0))
	{
		return;
	}
	iVar0 = func_1000(iParam0, 5);
	if (func_162(iVar0, 1, 0))
	{
		return;
	}
	func_152(iVar0, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
	MAP::_0xD8C7162AB2E2AF45(func_1174(iParam0));
}

int func_687(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 790725359;
		case 1:
			return -1018620084;
		case 2:
			return 1417352943;
		case 3:
			return -198238953;
		case 4:
			return -1572028097;
		case 5:
			return 1013020015;
		case 6:
			return 529834059;
		case 7:
			return -851121144;
		case 8:
			return 489753387;
		case 9:
			return 288056757;
		default:
			break;
	}
	return 0;
}

void func_688(int iParam0)
{
	int iVar0;

	if (!func_1175(iParam0))
	{
		return;
	}
	if (func_1176(iParam0))
	{
		return;
	}
	iVar0 = func_1000(iParam0, 5);
	if (func_162(iVar0, 1, 0))
	{
		return;
	}
	func_152(iVar0, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
	MAP::_0xD8C7162AB2E2AF45(func_1177(iParam0));
}

void func_689()
{
	if (func_162(305626647, 1, 0))
	{
		return;
	}
	func_152(305626647, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
}

void func_690()
{
	if (func_162(-287018478, 1, 0))
	{
		return;
	}
	func_152(-287018478, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
}

void func_691()
{
	if (func_162(-691125380, 1, 0))
	{
		return;
	}
	func_152(-691125380, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
}

void func_692()
{
	if (func_162(-1280336729, 1, 0))
	{
		return;
	}
	func_152(-1280336729, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
}

bool func_693(int iParam0)
{
	int iVar0;

	iVar0 = func_389(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_694()
{
	if (!func_162(-1937935584, 1, 0))
	{
		if (func_221(1) || COLLECTION::_0xF83D3DDA4D3C8169(854119837) > 0)
		{
			func_152(-1937935584, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		}
	}
	else
	{
		if (!func_221(1))
		{
			func_503(1);
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(854119837) < 1)
		{
			COLLECTION::_0x3EA62E56F386C997(854119837, 1);
		}
	}
	if (!func_162(2127812557, 1, 1))
	{
		if (func_221(2) || COLLECTION::_0xF83D3DDA4D3C8169(-1292544588) > 0)
		{
			func_152(2127812557, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		}
	}
	else
	{
		if (!func_221(2))
		{
			func_503(2);
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(-1292544588) < 1)
		{
			COLLECTION::_0x3EA62E56F386C997(-1292544588, 1);
		}
	}
	if (!func_162(808991383, 1, 0))
	{
		if (func_221(4) || COLLECTION::_0xF83D3DDA4D3C8169(-1003325394) > 0)
		{
			func_152(808991383, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		}
	}
	else
	{
		if (!func_221(4))
		{
			func_503(4);
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(-1003325394) < 1)
		{
			COLLECTION::_0x3EA62E56F386C997(-1003325394, 1);
		}
	}
}

void func_695()
{
	if (!func_162(1134518629, 1, 0))
	{
		if (func_224(1) || COLLECTION::_0xF83D3DDA4D3C8169(-335460405) > 0)
		{
			func_152(1134518629, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		}
	}
	else
	{
		if (!func_224(1))
		{
			func_504(1);
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(-335460405) < 1)
		{
			COLLECTION::_0x3EA62E56F386C997(-335460405, 1);
		}
	}
	if (!func_162(902940106, 1, 0))
	{
		if (func_224(2) || COLLECTION::_0xF83D3DDA4D3C8169(903797617) > 0)
		{
			func_152(902940106, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		}
	}
	else
	{
		if (!func_224(2))
		{
			func_504(2);
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(903797617) < 1)
		{
			COLLECTION::_0x3EA62E56F386C997(903797617, 1);
		}
	}
	if (!func_162(-418174898, 1, 0))
	{
		if (func_224(4) || COLLECTION::_0xF83D3DDA4D3C8169(669728650) > 0)
		{
			func_152(-418174898, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		}
	}
	else
	{
		if (!func_224(4))
		{
			func_504(4);
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(669728650) < 1)
		{
			COLLECTION::_0x3EA62E56F386C997(669728650, 1);
		}
	}
}

void func_696()
{
	if (!func_162(-648114971, 1, 0))
	{
		if (func_227(1) || COLLECTION::_0xF83D3DDA4D3C8169(1214120047) > 0)
		{
			func_152(-648114971, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		}
	}
	else
	{
		if (!func_227(1))
		{
			func_505(1);
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(1214120047) < 1)
		{
			COLLECTION::_0x3EA62E56F386C997(1214120047, 1);
		}
	}
	if (!func_162(211153747, 1, 0))
	{
		if (func_227(2) || COLLECTION::_0xF83D3DDA4D3C8169(655769340) > 0)
		{
			func_152(211153747, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		}
	}
	else
	{
		if (!func_227(2))
		{
			func_505(2);
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(655769340) < 1)
		{
			COLLECTION::_0x3EA62E56F386C997(655769340, 1);
		}
	}
	if (!func_162(-32876996, 1, 0))
	{
		if (func_227(4) || COLLECTION::_0xF83D3DDA4D3C8169(885316185) > 0)
		{
			func_152(-32876996, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		}
	}
	else
	{
		if (!func_227(4))
		{
			func_505(4);
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(885316185) < 1)
		{
			COLLECTION::_0x3EA62E56F386C997(885316185, 1);
		}
	}
}

void func_697()
{
	if (!DLC::IS_DLC_PRESENT(-679138445))
	{
		return;
	}
	if (!func_162(1191437462, 1, 0))
	{
		if (func_230(1) || COLLECTION::_0xF83D3DDA4D3C8169(-1491419385) > 0)
		{
			func_152(1191437462, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		}
	}
	else
	{
		if (!func_230(1))
		{
			func_506(1);
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(-1491419385) < 1)
		{
			COLLECTION::_0x3EA62E56F386C997(-1491419385, 1);
		}
	}
	if (!func_162(1119149048, 1, 0))
	{
		if (func_230(2) || COLLECTION::_0xF83D3DDA4D3C8169(1809565830) > 0)
		{
			func_152(1119149048, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		}
	}
	else
	{
		if (!func_230(2))
		{
			func_506(2);
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(1809565830) < 1)
		{
			COLLECTION::_0x3EA62E56F386C997(1809565830, 1);
		}
	}
}

void func_698()
{
	if (!func_162(506073827, 1, 0))
	{
		if (func_233(1) || COLLECTION::_0xF83D3DDA4D3C8169(-628873767) > 0)
		{
			func_152(506073827, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		}
	}
	else
	{
		if (!func_233(1))
		{
			func_507(1);
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(-628873767) < 1)
		{
			COLLECTION::_0x3EA62E56F386C997(-628873767, 1);
		}
	}
	if (!func_162(-1876986168, 1, 0))
	{
		if (func_233(2) || COLLECTION::_0xF83D3DDA4D3C8169(-405421956) > 0)
		{
			func_152(-1876986168, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		}
	}
	else
	{
		if (!func_233(2))
		{
			func_507(2);
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(-405421956) < 1)
		{
			COLLECTION::_0x3EA62E56F386C997(-405421956, 1);
		}
	}
	if (!func_162(2142623221, 1, 0))
	{
		if (func_233(4) || COLLECTION::_0xF83D3DDA4D3C8169(-1108972386) > 0)
		{
			func_152(2142623221, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		}
	}
	else
	{
		if (!func_233(4))
		{
			func_507(4);
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(-1108972386) < 1)
		{
			COLLECTION::_0x3EA62E56F386C997(-1108972386, 1);
		}
	}
}

void func_699()
{
	if (!func_162(1508215381, 1, 0))
	{
		if (func_236(1) || COLLECTION::_0xF83D3DDA4D3C8169(1053716392) > 0)
		{
			func_152(1508215381, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		}
	}
	else
	{
		if (!func_236(1))
		{
			func_508(1);
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(1053716392) < 1)
		{
			COLLECTION::_0x3EA62E56F386C997(1053716392, 1);
		}
	}
	if (!func_162(-888935280, 1, 0))
	{
		if (func_236(2) || COLLECTION::_0xF83D3DDA4D3C8169(806507056) > 0)
		{
			func_152(-888935280, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		}
	}
	else
	{
		if (!func_236(2))
		{
			func_508(2);
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(806507056) < 1)
		{
			COLLECTION::_0x3EA62E56F386C997(806507056, 1);
		}
	}
	if (!func_162(-1252474566, 1, 0))
	{
		if (func_236(4) || COLLECTION::_0xF83D3DDA4D3C8169(1571925350) > 0)
		{
			func_152(-1252474566, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		}
	}
	else
	{
		if (!func_236(4))
		{
			func_508(4);
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(1571925350) < 1)
		{
			COLLECTION::_0x3EA62E56F386C997(1571925350, 1);
		}
	}
	if (!func_162(-1465702449, 1, 0))
	{
		if (func_236(8) || COLLECTION::_0xF83D3DDA4D3C8169(1330352282) > 0)
		{
			func_152(-1465702449, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		}
	}
	else
	{
		if (!func_236(8))
		{
			func_508(8);
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(1330352282) < 1)
		{
			COLLECTION::_0x3EA62E56F386C997(1330352282, 1);
		}
	}
}

void func_700(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_591(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (Global_40.f_4942[iParam0 /*60*/] || iParam1);
}

bool func_701(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1075(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0 /*60*/] && iParam1) != 0;
}

int func_702(int iParam0)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 0;
	if (func_1178(Var0, 70005598, &iVar6, 0))
	{
		iVar5 = func_1179(iVar6);
	}
	return iVar5;
}

int func_703(int iParam0)
{
	struct<5> Var0;
	int iVar5;

	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 1;
	if (func_1180(Var0, -1875502208, &iVar5, 0))
	{
	}
	return iVar5;
}

void func_704(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_264(*iParam0);
	iVar1 = func_263(*iParam0);
	iVar2 = func_262(*iParam0);
	iVar3 = func_265(*iParam0);
	iVar4 = func_268(*iParam0);
	iVar5 = func_269(*iParam0);
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
	iVar6 = func_266(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_266(iVar1, iVar0);
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
	func_267(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_705(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_1181(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		MISC::SET_BIT(Global_1357549->f_1848[iVar0], iVar1);
	}
	else
	{
		MISC::CLEAR_BIT(Global_1357549->f_1848[iVar0], iVar1);
	}
}

int func_706(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 1;
		case 3:
			return 1;
		case 4:
			return 1;
		case 5:
			return 0;
		case 7:
			return 0;
		case 9:
			return 1;
		case 10:
			return 0;
		case 11:
			return 1;
		case 8:
			return 1;
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
			return 0;
		default:
			break;
	}
	return 0;
}

void func_707(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_705(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_708(2, *uParam0);
		}
		else
		{
			func_709(2, *uParam0);
		}
	}
	func_1182(uParam0);
}

void func_708(int iParam0, int iParam1)
{
	if (Global_1357549->f_1483 >= 25)
	{
		Global_1357549->f_1483 = 0;
	}
	Global_1357549->f_1407[Global_1357549->f_1483 /*3*/] = iParam0;
	(Global_1357549->f_1407[Global_1357549->f_1483 /*3*/])->f_1 = iParam1;
	(Global_1357549->f_1407[Global_1357549->f_1483 /*3*/])->f_2 = 0;
	Global_1357549->f_1483++;
}

void func_709(int iParam0, int iParam1)
{
	if (Global_1357549->f_1406 >= 50)
	{
		return;
	}
	if (&Global_1357549->f_1252[Global_1357549->f_1406 /*3*/] != 0)
	{
		return;
	}
	Global_1357549->f_1252[Global_1357549->f_1406 /*3*/] = iParam0;
	(Global_1357549->f_1252[Global_1357549->f_1406 /*3*/])->f_1 = iParam1;
	(Global_1357549->f_1252[Global_1357549->f_1406 /*3*/])->f_2 = 0;
	Global_1357549->f_1403++;
	Global_1357549->f_1406++;
}

int func_710(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_711(var uParam0, int iParam1)
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

void func_712(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 62914560);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_713(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_263(*uParam0);
	iVar1 = func_264(*uParam0);
	if (iParam1 < 1 || iParam1 > func_266(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4063232);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_714(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 126976);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_715(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4032);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_716(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 63);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

int func_717(int iParam0)
{
	if (func_91(iParam0) == 1)
	{
		return func_251(iParam0);
	}
	return -1;
}

int func_718(int iParam0)
{
	switch (iParam0)
	{
		case 9:
		case 16:
		case 36:
		case 79:
		case 114:
		case 118:
		case 125:
		case 127:
		case 129:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_719(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_2;
	}
	return -1;
}

bool func_720(int iParam0)
{
	int iVar0;

	iVar0 = func_721(iParam0, 1);
	return (iVar0 >= 0 && iVar0 < 143);
}

int func_721(int iParam0, int iParam1)
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

int func_722(int iParam0)
{
	var uVar0;
	var uVar1;

	if (!func_1183(iParam0, &uVar0, &uVar1))
	{
		return 0;
	}
	return UNK_0x77B97A827739D434(uVar0, uVar1);
}

int func_723(int iParam0)
{
	var uVar0;
	var uVar1;

	if (!func_1183(iParam0, &uVar0, &uVar1))
	{
		return -1;
	}
	return UNK_0x808712E428F697B8(uVar0, uVar1);
}

void func_724(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;

	if (!func_1183(iParam0, &uVar0, &uVar1))
	{
		return;
	}
	STATS::CHAL_SET_GOAL_PROGRESS_INT(uVar0, uVar1, iParam1);
}

int func_725(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_3;
	}
	return 0;
}

var func_726(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var1;

	Var1 = { func_284(iParam0, iParam1) };
	STATS::STAT_ID_GET_INT(&Var1, &uVar0);
	return uVar0;
}

float func_727(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

var func_728(int iParam0)
{
	var uVar0;
	struct<2> Var1;

	Var1 = { func_155(iParam0) };
	STATS::STAT_ID_GET_INT(&Var1, &uVar0);
	return uVar0;
}

int func_729()
{
	int iVar0;

	if (func_346(Global_40.f_8863.f_154, 1))
	{
		iVar0++;
	}
	if (func_346(Global_40.f_8863.f_154, 2))
	{
		iVar0++;
	}
	if (func_346(Global_40.f_8863.f_154, 4))
	{
		iVar0++;
	}
	if (func_346(Global_40.f_8863.f_154, 8))
	{
		iVar0++;
	}
	if (func_346(Global_40.f_8863.f_154, 16))
	{
		iVar0++;
	}
	if (func_346(Global_40.f_8863.f_154, 32))
	{
		iVar0++;
	}
	if (func_346(Global_40.f_8863.f_154, 64))
	{
		iVar0++;
	}
	if (func_346(Global_40.f_8863.f_154, 128))
	{
		iVar0++;
	}
	if (func_346(Global_40.f_8863.f_154, 256))
	{
		iVar0++;
	}
	return iVar0;
}

float func_730(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

int func_731()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 <= (20 - 1))
	{
		iVar2 = func_1184(iVar0);
		if (func_346(func_1185(), iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_732(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_733(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	ENTITY::IS_ENTITY_DEAD(Global_35);
	*uParam0 = ATTRIBUTE::GET_ATTRIBUTE_RANK(Global_35, 0);
	*uParam0 = (*uParam0 + ATTRIBUTE::GET_ATTRIBUTE_RANK(Global_35, 1));
	*uParam0 = (*uParam0 + ATTRIBUTE::GET_ATTRIBUTE_RANK(Global_35, 2));
	*uParam1 = ATTRIBUTE::GET_MAX_ATTRIBUTE_RANK(Global_35, 0);
	*uParam1 = (*uParam1 + ATTRIBUTE::GET_MAX_ATTRIBUTE_RANK(Global_35, 1));
	*uParam1 = (*uParam1 + ATTRIBUTE::GET_MAX_ATTRIBUTE_RANK(Global_35, 2));
	*uParam1 += 6;
	iVar0 = func_452(-1845241476, 0, 0);
	iVar1 = func_452(1654063339, 0, 0);
	iVar2 = func_452(1623931083, 0, 0);
	*uParam0 = (*uParam0 + ((iVar0 + iVar1) + iVar2));
}

var func_734(int iParam0)
{
	var uVar0;
	struct<2> Var1;

	Var1 = { func_480(iParam0) };
	STATS::STAT_ID_GET_INT(&Var1, &uVar0);
	return uVar0;
}

int func_735()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar2 = func_1186(iVar0);
		if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(iVar2) >= STATS::CHAL_GET_MAX_RANKS(iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

var func_736(var uParam0, var uParam1)
{
	var uVar0;

	STATS::STAT_ID_GET_FLOAT(&uParam0, &uVar0);
	return uVar0;
}

void func_737(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<6> Var2;

	if (&Global_1898329 <= 0)
	{
		return;
	}
	if (!func_67(iParam0))
	{
		return;
	}
	if (func_753(iParam0))
	{
		func_1187(iParam0, 0, 2);
	}
	iVar0 = func_1188(iParam0);
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = iVar0;
	if (&Global_1898329 > 1)
	{
		(*Global_1898330)[iVar1] = Global_1898330[(&Global_1898329 - 1)];
		*((*Global_1898346)[iVar1 /*6*/]) = { *((*Global_1898346)[(&Global_1898329 - 1) /*6*/]) };
		(*Global_1898330)[(&Global_1898329 - 1)] = -1;
		*((*Global_1898346)[(&Global_1898329 - 1) /*6*/]) = { Var2 };
	}
	else
	{
		(*Global_1898330)[iVar1] = -1;
		*((*Global_1898346)[iVar1 /*6*/]) = { Var2 };
	}
	Global_1898329 = (&Global_1898329 - 1);
	if (&Global_1898329 < 0)
	{
		Global_1898329 = 0;
	}
}

void func_738(int iParam0, int iParam1)
{
	if (((*Global_1898346)[iParam0 /*6*/])->f_2 == 0 || iParam1)
	{
		((*Global_1898346)[iParam0 /*6*/])->f_2 = func_294(Global_1898330[iParam0]);
		func_1189(((*Global_1898346)[iParam0 /*6*/])->f_2, &(((*Global_1898346)[iParam0 /*6*/])->f_4), &(((*Global_1898346)[iParam0 /*6*/])->f_5), &(((*Global_1898346)[iParam0 /*6*/])->f_3));
	}
}

int func_739(int iParam0)
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

int func_740(int iParam0)
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

int func_741(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 421607589;
		case 1:
			return -1133664649;
		case 3:
			return 1526413630;
		case 2:
			return 1549152219;
		case 5:
			return 985893921;
		case 4:
			return -180220260;
		default:
			break;
	}
	return 0;
}

int func_742(var uParam0, var uParam1)
{
	return 0;
}

int func_743(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 0:
			return 0;
		case 1:
			return 50;
		case 2:
			return 100;
		case 3:
			return 200;
		case 4:
			return 350;
		case 5:
			return 550;
		case 6:
			return 800;
		case 7:
			return 1100;
		default:
			break;
	}
	return 0;
}

bool func_744(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_745(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_2 = iParam1;
}

void func_746(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_3 = iParam1;
}

void func_747(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_4 = iParam1;
}

void func_748(int iParam0, var uParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12105[iParam0 /*7*/] = uParam1;
		return;
	}
	Global_1058888->f_498[iParam0 /*2*/] = uParam1;
}

void func_749(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_12105[iParam0 /*7*/])->f_5 = iParam1;
		return;
	}
	(Global_1058888->f_498[iParam0 /*2*/])->f_1 = iParam1;
}

int func_750(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 15) & 16383;
}

void func_751()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	iVar2 = 0;
	bVar3 = func_28() == -1;
	iVar1 = 0;
	while (iVar1 < &Global_1898329)
	{
		if (func_67(Global_1898330[iVar1]) && func_753(Global_1898330[iVar1]))
		{
			if (((*Global_1898346)[iVar1 /*6*/])->f_3 == 4)
			{
				if (bVar3)
				{
					iVar0 = ((*Global_1898346)[iVar1 /*6*/])->f_5;
					if (func_1190(iVar0, 0))
					{
						iVar2++;
					}
				}
			}
		}
		iVar1++;
	}
	if (iVar2 > 0)
	{
	}
}

void func_752(var uParam0, int iParam1)
{
	func_1191(uParam0, iParam1);
}

int func_753(int iParam0)
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
		iVar0 = func_90(iParam0);
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

bool func_754(int iParam0, int iParam1)
{
	return (func_1192(iParam0) && (((*Global_1898346)[iParam0 /*6*/])->f_1 && iParam1) != 0);
}

bool func_755(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

void func_756(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_755(iParam0))
	{
		return;
	}
	if (func_759((*Global_1835011)[iParam0 /*74*/], 8192))
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

void func_757(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, float fParam5, int iParam6)
{
	if (!func_1192(iParam1))
	{
		iParam1 = func_1188(func_345(iParam0));
		if (!func_1192(iParam1))
		{
			return;
		}
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1835011)[iParam0 /*74*/])->f_27))
	{
		if ((iParam2 || iParam6) && (!func_1193(iParam0, -1) || ((*Global_1835011)[iParam0 /*74*/])->f_70))
		{
			MAP::_0x662D364ABF16DE2F(((*Global_1835011)[iParam0 /*74*/])->f_27, 724623647);
		}
		else
		{
			if (func_1194())
			{
				if (MAP::DOES_BLIP_EXIST(((*Global_1835011)[iParam0 /*74*/])->f_27))
				{
					if (((*Global_1835011)[iParam0 /*74*/])->f_27 == Global_1905944->f_5698)
					{
						func_1195(1);
					}
				}
			}
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			MAP::REMOVE_BLIP(&(((*Global_1835011)[iParam0 /*74*/])->f_27));
			if (func_1193(iParam0, -1) && func_1196(iParam0))
			{
				func_1197(iParam0, fParam5, iParam1, iParam2, 1);
				func_760((*Global_1835011)[iParam0 /*74*/], 2);
			}
		}
	}
	else if ((iParam2 && !func_1198(iParam0)) && !Global_43890)
	{
		func_1197(iParam0, fParam5, iParam1, iParam2, 1);
	}
	if (func_754(iParam1, 48))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(((*Global_1835011)[iParam0 /*74*/])->f_12));
	}
	if ((SCRIPTS::IS_THREAD_ACTIVE(((*Global_1835011)[iParam0 /*74*/])->f_16, false) && !func_369(iParam0)) && !func_754(iParam1, 1024))
	{
		PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(((*Global_1835011)[iParam0 /*74*/])->f_16, 1);
	}
	if (GRAPHICS::_0xF2FDDCC8C6BAE1B3(((*Global_1835011)[iParam0 /*74*/])->f_72))
	{
		GRAPHICS::DESTROY_TRACKED_POINT(((*Global_1835011)[iParam0 /*74*/])->f_72);
	}
	if (bParam4)
	{
		func_737(((*Global_1835011)[iParam0 /*74*/])->f_1);
	}
	else
	{
		func_1199(iParam1, 3831);
	}
	((*Global_1835011)[iParam0 /*74*/])->f_73 = 0;
}

void func_758(int iParam0)
{
	var uVar0;

	MemCopy(&uVar0, {((*Global_1835011)[iParam0 /*74*/])->f_3}, 3);
	if ((func_28() != -1 && !MISC::IS_STRING_NULL_OR_EMPTY(&uVar0)) && SCRIPTS::IS_THREAD_ACTIVE(((*Global_1835011)[iParam0 /*74*/])->f_7, false))
	{
		SCRIPTS::_0x7DE4643157AD646C(((*Global_1835011)[iParam0 /*74*/])->f_7);
	}
}

bool func_759(var uParam0, int iParam1)
{
	return (uParam0->f_63 && iParam1) != 0;
}

void func_760(var uParam0, int iParam1)
{
	uParam0->f_63 = (uParam0->f_63 || iParam1);
}

int func_761(int iParam0)
{
	return &(Global_1898164->f_1[iParam0 /*5*/]);
}

void func_762(int iParam0, bool bParam1, int iParam2)
{
	if (func_693(((*Global_1392626)[iParam0 /*32*/])->f_3))
	{
		return;
	}
	if (bParam1)
	{
		func_1200(iParam0);
	}
	if (!SCRIPTS::IS_THREAD_ACTIVE(((*Global_1392626)[iParam0 /*32*/])->f_21, false))
	{
		if (iParam2 == 1)
		{
			func_1201(iParam0);
		}
		func_1202(&(((*Global_1392626)[iParam0 /*32*/])->f_11), 1, 0, 1);
		((*Global_1392626)[iParam0 /*32*/])->f_11 = 0;
	}
	func_1203(&(((*Global_1392626)[iParam0 /*32*/])->f_9), 1);
	if (!func_1204(((*Global_1392626)[iParam0 /*32*/])->f_8, 1))
	{
		func_1205(&(((*Global_1392626)[iParam0 /*32*/])->f_8), 1);
	}
	func_1203(&(((*Global_1392626)[iParam0 /*32*/])->f_9), 2);
}

void func_763(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < &Global_1392626)
	{
		if (func_1206(iVar0) && MISC::IS_BIT_SET(Global_40.f_9052, iVar0))
		{
			if ((((*Global_1392626)[iVar0 /*32*/])->f_10 && iParam0) == 0)
			{
				func_1207(iVar0, iParam0);
			}
			func_1208(iVar0);
		}
		iVar0++;
	}
}

void func_764()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < &Global_1392626)
	{
		if (func_1206(iVar0))
		{
			func_1200(iVar0);
		}
		iVar0++;
	}
}

bool func_765(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_766(int iParam0)
{
	return (Global_1898164->f_1[iParam0 /*5*/])->f_2;
}

void func_767(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_242(iParam0))
	{
		return;
	}
	if (iParam2 == 1)
	{
		func_1209(iParam0);
	}
	if (func_765(((*Global_1347702)[iParam0 /*49*/])->f_13, 256))
	{
		func_769(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 256);
	}
	if (func_275(((*Global_1347702)[iParam0 /*49*/])->f_12, 1024))
	{
		func_1210(&(((*Global_1347702)[iParam0 /*49*/])->f_12), 1024);
	}
	if (iParam1 == 1)
	{
		func_768(iParam0, 0);
	}
	func_1211(iParam0);
	if (iParam3 == 1)
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(((*Global_1347702)[iParam0 /*49*/])->f_42, false))
		{
			PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(((*Global_1347702)[iParam0 /*49*/])->f_42, iParam4);
		}
		else
		{
			((*Global_1347702)[iParam0 /*49*/])->f_43 = 0;
		}
	}
}

void func_768(int iParam0, int iParam1)
{
	if (!func_242(iParam0))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
	{
		func_1212(&(((*Global_1347702)[iParam0 /*49*/])->f_14));
		func_769(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 16);
		func_1213(iParam0);
		if ((!func_1214(PLAYER::PLAYER_ID(), 1, 0, 1) || Global_43890) || iParam1)
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			_NAMESPACE71::_0x2F901291EF177B02(((*Global_1347702)[iParam0 /*49*/])->f_40, 0);
			func_769(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 4096);
			func_1215(&(((*Global_1347702)[iParam0 /*49*/])->f_37));
		}
		else
		{
			func_1216(iParam0, 16384);
			func_1218(iParam0, 1, func_1217(iParam0));
		}
	}
}

void func_769(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_770()
{
	int iVar0;

	if (func_28() != -1)
	{
		return;
	}
	Global_1357549->f_1708 = 0;
	if (MAP::DOES_BLIP_EXIST(Global_1357549->f_1711))
	{
		MAP::REMOVE_BLIP(&(Global_1357549->f_1711));
		iVar0 = func_1219(Global_40.f_4283);
		if (func_126(iVar0) && func_1220(((*Global_1888801)[iVar0 /*35*/])->f_13))
		{
			func_1125(((*Global_1888801)[iVar0 /*35*/])->f_13, 1560611276);
		}
		Global_1357549->f_1710 = 0;
	}
}

void func_771()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < Global_1879534->f_7300)
	{
		if (!MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iVar0 /*4*/]), 2))
		{
			if (MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iVar0 /*4*/]), 1))
			{
				switch (&Global_1879534->f_1911[(Global_1879534->f_7301.f_2[iVar0 /*4*/])->f_1 /*3*/])
				{
					case -2093459088:
						iVar1 = (Global_1879534->f_1911[(Global_1879534->f_7301.f_2[iVar0 /*4*/])->f_1 /*3*/])->f_2;
						if (func_755(iVar1))
						{
							func_756(iVar1, 0);
							func_757(iVar1, -1, 0, 1, 0, 0, 0);
							if (MAP::DOES_BLIP_EXIST(((*Global_1835011)[iVar1 /*74*/])->f_27))
							{
								MAP::REMOVE_BLIP(&(((*Global_1835011)[iVar1 /*74*/])->f_27));
							}
						}
						break;
				}
			}
		}
		iVar0++;
	}
}

void func_772()
{
	Global_1898164->f_163 = func_610(0, 0, 0);
}

void func_773()
{
	Global_1898164->f_164 = func_610(0, 1, 0);
}

void func_774()
{
	int iVar0;

	func_1221();
	func_116();
	iVar0 = 0;
	while (iVar0 < Global_1879534->f_7300)
	{
		Global_1879534->f_46[iVar0] = 0;
		Global_1879534->f_79[iVar0] = 0;
		Global_1879534->f_112[iVar0] = -15;
		Global_1879534->f_145[iVar0] = 0;
		Global_1879534->f_178[iVar0] = 0;
		iVar0++;
	}
}

void func_775()
{
	int iVar0;

	if (func_28() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1835011)
	{
		func_1222(((*Global_1835011)[iVar0 /*74*/])->f_1, 0);
		func_1223(&(((*Global_1835011)[iVar0 /*74*/])->f_29), 9216);
		func_1224((*Global_1835011)[iVar0 /*74*/]);
		((*Global_1835011)[iVar0 /*74*/])->f_70 = 0;
		((*Global_1835011)[iVar0 /*74*/])->f_71 = 0;
		iVar0++;
	}
}

void func_776()
{
	int iVar0;

	func_1225();
	iVar0 = 0;
	while (iVar0 < func_88())
	{
		if (func_294(iVar0) != 0)
		{
			if (func_90(iVar0) == 3 || func_90(iVar0) == 1)
			{
				func_93(func_91(iVar0), func_92(iVar0), 2);
			}
			func_94(iVar0, 0);
			func_95(iVar0, -15);
			func_745(iVar0, 0);
			func_746(iVar0, 0);
			func_747(iVar0, 0);
		}
		iVar0++;
	}
}

void func_777(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	struct<2> Var2;
	struct<2> Var4;
	int iVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;

	if (!func_67(iParam0))
	{
		return;
	}
	if (func_389(iParam0) == 4)
	{
		func_95(iParam0, func_261());
		if (!func_90(iParam0) == 5 && !func_90(iParam0) == 6)
		{
			if (bParam3)
			{
				func_1222(iParam0, 6);
			}
			else
			{
				func_1222(iParam0, 5);
			}
			func_1226(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		func_25(1);
	}
	iVar0 = func_91(iParam0);
	bVar1 = func_28() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		func_1227(0, 2);
		if (!bVar1 && bParam1)
		{
			func_1228();
		}
	}
	else
	{
		func_1229(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		func_1230(iParam0);
	}
	else
	{
		Var2 = { func_155(-1876607090) };
		STATS::_0x0FEE2561120F3333(&Var2);
		if (!func_17(32768))
		{
			Var4 = { func_155(773573510) };
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (bParam1 && func_90(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (func_251(iParam0) == 77)
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(((*Global_1835011)[76 /*74*/])->f_8), true);
						}
						else
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(((*Global_1835011)[func_251(iParam0) /*74*/])->f_8), true);
						}
					}
					else if ((func_251(iParam0) != 95 && func_251(iParam0) != 82) && !func_275(((*Global_1347702)[func_251(iParam0) /*49*/])->f_12, 512))
					{
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(((*Global_1347702)[func_251(iParam0) /*49*/])->f_3), true);
					}
				}
			}
			else
			{
				switch (NETWORK::_0x225640E09EFFDC3F())
				{
					case 0:
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(((*Global_1835011)[func_251(iParam0) /*74*/])->f_8), true);
						break;
				}
			}
		}
	}
	if (iVar0 == 1)
	{
		Global_40.f_1093 = -1;
	}
	iVar6 = 0;
	if (iVar0 == 1)
	{
		func_1232(func_251(iParam0), iVar6, func_1231());
	}
	else if (iVar0 == 8)
	{
		func_1233(func_251(iParam0), iVar6, func_1231(), func_830());
	}
	if (!func_90(iParam0) == 5 && !func_90(iParam0) == 6)
	{
		iVar9 = func_1234(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_260(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!&Global_1879534 && !Global_1879534->f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = func_1235(func_251(iParam0), &iVar11);
				if (!Global_17503.f_9)
				{
					iVar10 = func_1236((iVar10 - 20), 0, iVar10);
					iVar11 = func_1236((iVar11 - 10), 0, iVar11);
				}
				func_186(1);
				func_1237(iVar10, iVar11, 1);
				Global_17503.f_9 = 0;
				Global_17503.f_10 = 0;
				Global_1899528->f_217 = 1;
				break;
			case 4:
				func_1237(45, 0, 1);
				break;
			case 8:
				iVar10 = func_1238(func_251(iParam0), &iVar11);
				if (!Global_17503.f_9)
				{
					iVar10 = func_1236((iVar10 - 20), 0, iVar10);
					iVar11 = func_1236((iVar11 - 10), 0, iVar11);
				}
				func_1237(iVar10, iVar11, 1);
				Global_17503.f_9 = 0;
				Global_17503.f_10 = 0;
				if (func_1239(func_251(iParam0)))
				{
					func_608(14, 0, 0, 0, 0, 0, 1065353216, 0);
				}
				Global_1899528->f_217 = 1;
				break;
			case 9:
				func_1237(120, 0, 1);
				break;
			case 2:
				func_1237(120, 0, 1);
				break;
			case 6:
				func_1237(func_1240(func_309(iParam0)), 0, 1);
				break;
			case 5:
				func_1237(120, 0, 1);
				break;
		}
	}
	func_1241(iParam0, 1);
	func_95(iParam0, func_261());
	func_1226(iParam0);
	if ((!func_90(iParam0) == 0 && bParam1) && func_28() == -1)
	{
		iVar12 = func_1242(iParam0);
		if (iVar12 != -1)
		{
			func_1243(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = func_1244();
			if (iVar12 != -1)
			{
				func_1243(0);
			}
		}
	}
	if (bParam1)
	{
		Global_1898437 = iParam0;
		switch (iVar0)
		{
			case 1:
				Global_1898438 = MISC::GET_GAME_TIMER();
				break;
			case 6:
				switch (func_251(iParam0))
				{
					case 0:
						Global_1898438 = (MISC::GET_GAME_TIMER() - 5000);
						break;
					case 1:
						Global_1898438 = MISC::GET_GAME_TIMER();
						break;
				}
				break;
			case 2:
			case 4:
			case 5:
			case 9:
			case 11:
				Global_1898438 = MISC::GET_GAME_TIMER();
				break;
			case 8:
				if (func_242(func_251(iParam0)) && func_275(((*Global_1347702)[func_251(iParam0) /*49*/])->f_12, 4))
				{
					Global_1898438 = MISC::GET_GAME_TIMER();
				}
				else
				{
					Global_1898438 = (MISC::GET_GAME_TIMER() - 5000);
				}
				break;
			default:
				break;
		}
	}
	if (bParam4)
	{
		switch (iVar0)
		{
			case 1:
				if (func_251(iParam0) != 77)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_123();
				}
				break;
			case 8:
				if (func_251(iParam0) != 58)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_123();
				}
				break;
		}
	}
	if (!func_90(iParam0) == 5 && !func_90(iParam0) == 6)
	{
		if (bParam3)
		{
			func_1222(iParam0, 6);
		}
		else
		{
			func_1222(iParam0, 5);
		}
		func_1226(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (func_251(iParam0))
				{
					case 0:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						MAP::_0xD8C7162AB2E2AF45(-1753910767);
						break;
					case 1:
						func_1245();
						NETWORK::_0xBB697756309D77EE(1);
						break;
					case 4:
						func_152(-1781387050, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_152(1433048902, 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_152(-597058368, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_152(-529638012, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_152(500564674, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_152(-875449072, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_152(1237770824, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_152(236757114, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_152(-601932535, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_152(-1267972061, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1246(-1267972061);
						func_152(1619534881, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1246(1619534881);
						func_152(-755457379, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1246(-755457379);
						func_152(1015404643, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1246(1015404643);
						func_152(-1724192342, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1246(-1724192342);
						func_152(1310680212, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1246(1310680212);
						func_152(-566881549, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1246(-566881549);
						func_152(-1753730528, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1246(-1753730528);
						func_152(147796381, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1246(147796381);
						func_152(-378547623, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1246(-378547623);
						func_152(829545206, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1246(829545206);
						func_152(891318243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1246(891318243);
						func_152(joaat("weapon_kit_camera"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_152(-1838434463, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_152(-1448210800, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_152(-248960099, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_174();
						func_418(967523420);
						func_419();
						func_1247();
						break;
					case 5:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOMMY"));
						break;
					case 14:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					case 2:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY(func_643(10, 0)));
						break;
					case 8:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 621714131);
						break;
					case 15:
						func_152(1030791766, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(1231074654))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(1231074654, true);
							func_438(449, 0);
						}
						break;
					case 10:
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(1880205078))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(1880205078, true);
							func_438(446, 0);
						}
						break;
					case 16:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_LEIGHGRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_ARCHIBALD"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					case 18:
						func_1248(304805134, 1, 1);
						if (!func_120(((*Global_1347702)[21 /*49*/])->f_15, 1))
						{
							func_777(((*Global_1347702)[21 /*49*/])->f_15, 0, 0, 0, 0);
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 2;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[21 /*49*/])->f_3)), iVar14);
						}
						break;
					case 20:
						func_1249();
						break;
					case 26:
						func_1250();
						break;
					case 17:
						func_1251(Global_35, 176992230, 0, -358215195, 1, 1);
						if (func_2())
						{
							func_271(joaat("weapon_repeater_evans"));
						}
						break;
					case 19:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TAVISH_GRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLIVE"));
						break;
					case 33:
						if (!func_1252(-514575035, -1))
						{
							iVar15 = func_261();
							func_704(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							func_1253(-514575035, iVar15, 0);
						}
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (func_2())
						{
							func_271(joaat("weapon_revolver_lemat"));
						}
						break;
					case 34:
						if (func_2())
						{
							func_271(joaat("weapon_revolver_doubleaction_gambler"));
						}
						break;
					case 28:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_BRONTE"));
						break;
					case 31:
						func_1254();
						break;
					case 37:
						func_1255();
						if (func_413())
						{
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(2116153146, iVar14);
						}
						break;
					case 38:
						func_1256();
						break;
					case 43:
						func_1257();
						break;
					case 44:
						if (!func_120(((*Global_1347702)[82 /*49*/])->f_15, 1))
						{
							func_777(((*Global_1347702)[82 /*49*/])->f_15, 0, 0, 0, 0);
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[82 /*49*/])->f_3)), iVar14);
						}
						if (!func_120(((*Global_1347702)[83 /*49*/])->f_15, 1))
						{
							func_777(((*Global_1347702)[83 /*49*/])->f_15, 0, 0, 0, 0);
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[83 /*49*/])->f_3)), iVar14);
						}
						break;
					case 45:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ARTURO"));
						break;
					case 48:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_MONROE"));
						break;
					case 49:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_FAVOURS"));
						break;
					case 58:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLEET_GOON"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_JOE_GOON"));
						break;
					case 50:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_PAYTAH"));
						break;
					case 52:
						break;
					case 47:
						func_1258();
						break;
					case 59:
						func_1259();
						break;
					case 60:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					case 61:
						func_1260();
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_DAVID_GEDDES"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ABE"));
						break;
					case 62:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANGUS_GEDDES"));
						break;
					case 63:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_DUNCAN_GEDDES"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MRS_GEDDES"));
						break;
					case 67:
						func_1261();
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(1673898385))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(1673898385, true);
							func_438(451, 0);
						}
						if (!func_1262(-1992824800))
						{
							if (func_1262(1520110311))
							{
								iVar16 = func_261();
								func_704(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								func_1253(1937177603, iVar16, 1);
							}
						}
						if (func_1263(4))
						{
							if (!func_162(684296857, 1, 0))
							{
								iVar17 = func_261();
								func_704(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								func_1253(-1439688706, iVar17, 1);
							}
						}
						func_152(1224687176, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_152(-4440804, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ALBERT_CAKE"));
						func_1264(89200);
						func_1264(2300);
						func_1264(2300);
						break;
					case 68:
						func_1265();
						break;
					case 76:
						if (Global_1425247->f_53)
						{
							iVar14 = 0;
						}
						else
						{
							iVar14 = 1;
						}
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[108 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[69 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[70 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[7 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[22 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[23 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[65 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1835011)[7 /*74*/])->f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1835011)[8 /*74*/])->f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1835011)[36 /*74*/])->f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1835011)[48 /*74*/])->f_8)), iVar14);
						func_1266();
						func_1264(-139100);
						break;
					case 69:
						if (func_120(((*Global_1347702)[9 /*49*/])->f_15, 1))
						{
							func_1264(-6000);
						}
						break;
					case 70:
						func_1264(23400);
						func_1264(1900);
						func_1264(-15000);
						break;
					case 71:
						func_1264(-5500);
						break;
				}
				break;
			case 8:
				switch (func_251(iParam0))
				{
					case 0:
						if (!PLAYER::_0x0772F87D7B07719A(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MILTON")))
						{
							PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MILTON"));
						}
						if (!PLAYER::_0x0772F87D7B07719A(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDGAR")))
						{
							PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDGAR"));
						}
						break;
					case 4:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -812886857);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -751847444);
						break;
					case 5:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1843499806);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -259499455);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1193930411);
						break;
					case 22:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -433459459);
						break;
					case 24:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, -1230369426);
						break;
					case 26:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 2049954876);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1851064008);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -511263105);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -837057898);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -258195548);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1110794082);
						break;
					case 28:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1324848767);
						break;
					case 30:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -461700465);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -489179187);
						break;
					case 37:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1595707554);
						break;
					case 56:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 883682516);
						break;
					case 57:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 780151577);
						break;
					case 58:
						func_1267();
						break;
					case 59:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -121001171);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 727067922);
						break;
					case 61:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_THOMAS_DOWNES"));
						break;
					case 62:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDITH_DOWNES"));
						func_1268();
						break;
					case 66:
						func_1269();
						func_1270();
						break;
					case 67:
						if (!func_258(6))
						{
							func_257(6);
						}
						if (!func_258(3))
						{
							func_257(3);
						}
						if (func_2())
						{
							func_271(joaat("weapon_pistol_m1899"));
						}
						break;
					case 68:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MEREDITH"));
						break;
					case 89:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1085773120);
						break;
					case 91:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 753448360);
						break;
					case 98:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1853266833);
						break;
					case 101:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 709011912);
						break;
					case 115:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, MISC::GET_HASH_KEY("ALLY_RAINSFALL"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, MISC::GET_HASH_KEY("COMP_EAGLE_FLIES"));
						break;
					case 120:
						MAP::_0xD8C7162AB2E2AF45(1720279629);
						break;
					case 138:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -831543589);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1687814239);
						break;
					case 139:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -831543589);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1687814239);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 989551914);
						break;
					case 140:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 2131140554);
						break;
					case 143:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 240200131);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -480463506);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1901360117);
						break;
					case 147:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1841532568);
						break;
					case 9:
						if (func_120(((*Global_1835011)[69 /*74*/])->f_1, 1))
						{
							func_1271(0);
							func_1264(40500);
						}
						else
						{
							func_1271(0);
							func_1264(46500);
						}
						break;
				}
				break;
			case 6:
				switch (func_251(iParam0))
				{
					case 0:
						switch (func_309(iParam0))
						{
							case 5:
								PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1014740297);
								break;
						}
						break;
				}
				break;
		}
		func_1272(iParam0);
		func_1273();
		switch (iVar0)
		{
			case 1:
				switch (func_251(iParam0))
				{
					case 4:
						func_1274(iParam0, 1000, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						func_1274(iParam0, 300, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 25:
						func_1274(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						func_1274(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						func_1274(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						func_1274(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						func_1274(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = func_287(iParam0);
						func_1274(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						func_1274(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						func_1274(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!func_162(-2046502963, 1, 0))
						{
							func_152(-2046502963, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						func_1274(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						func_1274(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						func_1274(iParam0, 2042100, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 72:
						if (func_287(iParam0) == 0)
						{
							func_1274(iParam0, 20000, 0, 1065353216, 1, 0, 0, 1);
						}
						else
						{
							func_1274(iParam0, 15000, 0, 1065353216, 1, 0, 0, 1);
						}
						break;
				}
				break;
			case 8:
				if (func_275(((*Global_1347702)[func_251(iParam0) /*49*/])->f_12, 536870912))
				{
					func_1275(11, 1);
				}
				switch (func_251(iParam0))
				{
					case 109:
						func_1274(iParam0, 1500, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 55:
						func_1275(8, 1);
						break;
					case 138:
						MISC::SET_BIT(&(Global_40.f_9052), 1);
						MISC::SET_BIT(&(Global_40.f_9052), 3);
						break;
					case 94:
						func_1274(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						func_1274(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						func_1274(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						func_1274(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			case 11:
				if (iParam0 == func_111(0, 10, 11, 2116153146))
				{
					func_1274(iParam0, func_287(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_111(0, 7, 11, -379687487))
				{
					func_1274(iParam0, func_1276(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_111(0, 8, 11, -1386089015))
				{
					func_1274(iParam0, func_1276(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == func_111(0, 11, 11, -1952009645))
				{
					func_1274(iParam0, func_1276(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_111(0, 12, 11, 2065895756))
				{
					func_1274(iParam0, func_1276(11), 1, 0.5f, 2, 0, 0, 1);
				}
				break;
		}
		if (bParam1)
		{
			if (!func_90(iParam0) == 0)
			{
				if (func_92(iParam0) == 0)
				{
				}
				else if (STATS::_0x01F4D242765C6B24(func_92(iParam0)))
				{
					iVar19 = 0;
					if (bParam3)
					{
						iVar19 = 3;
					}
					func_93(func_91(iParam0), func_92(iParam0), iVar19);
					if (bParam4)
					{
						if (iVar0 == 8 && func_251(iParam0) == 58)
						{
							Global_1879514->f_1 = iParam0;
						}
						func_1277(func_273(Global_1879514->f_1));
						if (iVar0 == 8 && func_251(iParam0) == 58)
						{
							Global_1879514->f_1 = -1;
						}
					}
				}
			}
			if (bParam2)
			{
				switch (iVar0)
				{
					case 1:
						iVar20 = 3;
						break;
					case 4:
						iVar20 = 2;
						break;
					case 6:
						iVar20 = 1;
						break;
					case 2:
						iVar20 = 9;
						break;
					case 8:
						if (func_242(func_251(iParam0)) && func_275(((*Global_1347702)[func_251(iParam0) /*49*/])->f_12, 1))
						{
							iVar20 = 3;
						}
						else
						{
							iVar20 = 8;
						}
						break;
					case 7:
						iVar20 = 0;
						break;
					case 5:
						iVar20 = 12;
						break;
					case 9:
					case 11:
						iVar20 = 0;
						break;
				}
			}
			func_649(bParam2, iVar20);
		}
	}
	func_1278(1);
	if ((bVar13 || func_123()) && (func_91(iParam0) == 1 || func_91(iParam0) == 8))
	{
		Global_1879534->f_6 = 1;
		Global_1879534->f_7 = 1;
	}
}

void func_778()
{
	bool bVar0;

	bVar0 = func_1279(8);
	Global_1894899 = 0;
	if (bVar0)
	{
		func_784(8);
	}
	Global_1894899->f_1 = 0;
	Global_1894899->f_2 = -1;
	Global_1894899->f_4 = 0;
	func_1280();
	func_1281();
}

void func_779()
{
	int iVar0;

	VOLUME::_0x748C5F51A18CB8F0(0);
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (!func_126(iVar0))
		{
		}
		else
		{
			if (func_28() == -1)
			{
				(Global_23117[iVar0 /*11*/])->f_1 = -15;
			}
			else
			{
				(Global_1058888->f_40615[iVar0 /*11*/])->f_1 = -15;
			}
			func_1282(func_110(iVar0));
			func_347(iVar0, 16777216);
			func_1283(iVar0, 0, 350);
			func_1284(iVar0, 0);
		}
		iVar0++;
	}
	VOLUME::_0x748C5F51A18CB8F0(1);
}

int func_780()
{
	if (Global_1572887->f_12 == -1)
	{
		return 0;
	}
	return Global_1058888->f_4;
}

bool func_781(int iParam0)
{
	return func_782(23, iParam0);
}

int func_782(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_1285(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_1286())
	{
		return func_1285(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1225638->f_21[iParam1])
	{
		return func_1285(&(((*Global_1108178)[iParam1 /*37*/])->f_4), iVar0, 5);
	}
	return 0;
}

void func_783(int iParam0, int iParam1)
{
	if (!func_126(iParam0))
	{
		return;
	}
	((*Global_1888801)[iParam0 /*35*/])->f_19 = iParam1;
}

void func_784(int iParam0)
{
	Global_1894899 = (Global_1894899 || iParam0);
}

void func_785(int iParam0)
{
	Global_1894899 = (&Global_1894899 - (Global_1894899 && iParam0));
}

bool func_786()
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 150)
	{
		if (func_177(iVar1, 1))
		{
			if (SCRIPTS::DOES_SCRIPT_EXIST(&(((*Global_1888801)[iVar1 /*35*/])->f_26)))
			{
				SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(((*Global_1888801)[iVar1 /*35*/])->f_26));
			}
		}
		if (((*Global_1888801)[iVar1 /*35*/])->f_9 != 0)
		{
			if (SCRIPTS::IS_THREAD_ACTIVE(((*Global_1888801)[iVar1 /*35*/])->f_9, false))
			{
				if (func_28() == -1)
				{
					PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(((*Global_1888801)[iVar1 /*35*/])->f_9, 523);
				}
				else if (!SCRIPTS::_0x30BED53646C86D11(((*Global_1888801)[iVar1 /*35*/])->f_9))
				{
					SCRIPTS::_0x7DE4643157AD646C(((*Global_1888801)[iVar1 /*35*/])->f_9);
				}
			}
			else if (func_177(iVar1, 2))
			{
				if (func_28() == -1)
				{
					PLAYER::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME(&(((*Global_1888801)[iVar1 /*35*/])->f_26), 523);
				}
				else
				{
					SCRIPTS::_0x7423F7835770F619(MISC::GET_HASH_KEY(&(((*Global_1888801)[iVar1 /*35*/])->f_26)));
				}
			}
			if (!SCRIPTS::_DOES_THREAD_EXIST(((*Global_1888801)[iVar1 /*35*/])->f_9))
			{
				((*Global_1888801)[iVar1 /*35*/])->f_9 = 0;
				func_347(iVar1, 11);
			}
			else
			{
				bVar0 = true;
			}
		}
		iVar1++;
	}
	return !bVar0;
}

void func_787()
{
	int iVar0;

	VOLUME::_0x748C5F51A18CB8F0(0);
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		func_1222(((*Global_1347702)[iVar0 /*49*/])->f_15, 0);
		func_1287(((*Global_1347702)[iVar0 /*49*/])->f_15, -15);
		func_767(iVar0, 1, 1, 1, 32);
		func_249(iVar0, 1);
		((*Global_1347702)[iVar0 /*49*/])->f_13 = 0;
		iVar0++;
	}
	VOLUME::_0x748C5F51A18CB8F0(1);
	func_1288();
	func_1289();
}

void func_788()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_40.f_11029)
	{
		(Global_40.f_11029[iVar0 /*5*/])->f_1 = { 0f, 0f, 0f };
		(Global_40.f_11029[iVar0 /*5*/])->f_4 = 0;
		func_1290(iVar0, 17);
		iVar0++;
	}
	func_1291(1);
}

void func_789()
{
	if (!Global_40)
	{
		Global_40.f_4283.f_2 = 0;
		Global_40.f_4283.f_3 = 0;
		Global_40.f_4283.f_312 = 1;
		Global_40.f_4283.f_324 = 0;
		Global_40.f_4283.f_325 = 0;
		Global_40.f_4283.f_328 = &Global_1899515;
	}
	Global_1357549 = 0;
	Global_1357549->f_1494 = 0;
	Global_1357549->f_1497.f_8 = 0;
	func_1292(0);
	Global_1357549->f_1724 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "camp_select_data");
	Global_1357549->f_1725 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(Global_1357549->f_1724, "camp_collection");
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(Global_1357549->f_1725);
	func_1293();
	func_1294();
	if ((func_32(17) && !func_32(37)) && !func_701(16, 4, 1))
	{
		func_257(16);
	}
}

void func_790()
{
	if (func_28() != -1)
	{
		return;
	}
	Global_40.f_9074 = 0;
	Global_40.f_9074.f_1 = 0;
}

void func_791()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_40.f_9079[iVar0] = 0;
		iVar0++;
	}
	switch (func_28())
	{
		case -1:
			func_1296(0, 5, func_1295(0), 0);
			func_1296(1, 105, func_1295(1), 0);
			func_1296(2, 76, func_1295(2), 0);
			func_1296(3, 38, func_1295(3), 0);
			break;
	}
}

void func_792()
{
	int iVar0;

	Global_40.f_9146 = 0;
	Global_40.f_9146.f_1 = 4;
	Global_40.f_9146.f_2 = 0;
	Global_40.f_9146.f_3 = -1;
	Global_40.f_9146.f_109 = -15;
	Global_40.f_9146.f_110 = -15;
	Global_40.f_9146.f_126 = 0;
	iVar0 = 0;
	while (iVar0 < 14)
	{
		Global_40.f_9146.f_49[iVar0] = 0;
		Global_40.f_9146.f_64[iVar0] = -15;
		Global_40.f_9146.f_79[iVar0] = -15;
		Global_40.f_9146.f_94[iVar0] = 0;
		Global_40.f_9146.f_4[iVar0] = 0;
		Global_40.f_9146.f_19[iVar0] = -1;
		Global_40.f_9146.f_34[iVar0] = -1;
		iVar0++;
	}
}

void func_793()
{
	int iVar0;

	Global_40.f_9052 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(((*Global_1392626)[iVar0 /*32*/])->f_21, false))
		{
			PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(((*Global_1392626)[iVar0 /*32*/])->f_21, 1);
		}
		((*Global_1392626)[iVar0 /*32*/])->f_21 = 0;
		func_762(iVar0, 1, 1);
		Global_40.f_9052.f_1[iVar0] = -15;
		((*Global_1392626)[iVar0 /*32*/])->f_9 = 0;
		((*Global_1392626)[iVar0 /*32*/])->f_8 = 0;
		func_1222(((*Global_1392626)[iVar0 /*32*/])->f_3, 0);
		iVar0++;
	}
	func_1297();
}

void func_794()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		func_1107(iVar0, 20510, 1);
		(Global_40.f_4942[iVar0 /*60*/])->f_1 = 0;
		(Global_40.f_4942[iVar0 /*60*/])->f_2 = 0;
		(Global_40.f_4942[iVar0 /*60*/])->f_3 = -268604689;
		(Global_40.f_4942[iVar0 /*60*/])->f_5 = 0;
		iVar0++;
	}
}

void func_795()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		(Global_17503.f_42[iVar0 /*8*/])->f_4 = 0;
		iVar0++;
	}
}

void func_796()
{
}

void func_797()
{
	var uVar0;
	int iVar5;

	MISC::_COPY_MEMORY(Global_1430226, &uVar0, 5);
	iVar5 = 0;
	while (iVar5 < 180)
	{
		(Global_40.f_9910[iVar5 /*6*/])->f_3 = -15;
		(Global_40.f_9910[iVar5 /*6*/])->f_1 = 0;
		iVar5++;
	}
}

void func_798(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (!ITEMSET::IS_ITEMSET_VALID(&Global_1396084))
	{
		return;
	}
	iVar0 = (ITEMSET::GET_ITEMSET_SIZE(&Global_1396084) - 1);
	while (iVar0 >= 0)
	{
		iVar1 = MISC::_0xEE04C0AFD4EFAF0E(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, &Global_1396084));
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (!ENTITY::_0x88AD6CC10D8D35B2(iVar1))
			{
				if (!bParam0)
				{
					Jump @99; //curOff = 79
				}
				else
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, true);
				}
			}
			ENTITY::DELETE_ENTITY(&iVar1);
		}
		iVar0 = (iVar0 + -1);
	}
}

void func_799()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_40.f_7832)
	{
		Global_40.f_7832[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		Global_40.f_7756[iVar0 /*3*/] = 0;
		(Global_40.f_7756[iVar0 /*3*/])->f_1 = 0;
		(Global_40.f_7756[iVar0 /*3*/])->f_2 = -1;
		iVar0++;
	}
}

void func_800()
{
	func_146();
}

void func_801()
{
	func_1298();
	func_1299();
	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383->f_393))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1900383->f_393))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1900383->f_393, true, true);
		}
		if (MAP::DOES_BLIP_EXIST(Global_1900383->f_393.f_1))
		{
			MAP::REMOVE_BLIP(&(Global_1900383->f_393.f_1));
		}
		OBJECT::DELETE_OBJECT(&(Global_1900383->f_393));
	}
}

void func_802()
{
}

void func_803()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 25)
	{
		func_1300(&((Global_20709[iVar0 /*45*/])->f_2));
		Global_20709[iVar0 /*45*/] = 0;
		(Global_20709[iVar0 /*45*/])->f_1 = 0;
		(Global_20709[iVar0 /*45*/])->f_43 = 0;
		(Global_20709[iVar0 /*45*/])->f_44 = 0;
		iVar0++;
	}
	func_1300(&(Global_20709.f_1126));
	Global_20709.f_1167 = -1;
}

void func_804(bool bParam0)
{
	func_1301(bParam0);
	func_1302(bParam0);
	func_1303(bParam0);
	func_1304(bParam0);
	func_1305(bParam0);
	func_1306(bParam0);
	func_1307(bParam0);
	func_1308(bParam0);
}

void func_805(bool bParam0)
{
	MAP::SET_MINIMAP_HIDE_FOW(bParam0);
	if (bParam0)
	{
		MAP::_0xF8096DF9B87246E3(0);
	}
	else
	{
		MAP::_0xEB3CB3386C775D72(0);
	}
}

void func_806()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 13)
	{
		if (Global_1572887->f_12 == -1)
		{
			Global_40.f_283[iVar0] = 0;
		}
		else
		{
			Global_1058888->f_40567[iVar0] = 0;
		}
		iVar0++;
	}
}

void func_807()
{
	func_25(1);
	func_1309(0);
	func_1310();
	func_539();
	func_1311();
}

void func_808()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_40.f_7857[iVar0] = 0;
		iVar0++;
	}
}

void func_809()
{
	struct<16> Var0;
	int iVar16;

	iVar16 = 0;
	while (iVar16 <= 9)
	{
		*((*Global_1934603)[iVar16 /*16*/]) = { Var0 };
		iVar16++;
	}
	Global_1934603->f_161 = 0;
}

void func_810()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		Global_40.f_11922[iVar0] = 0;
		iVar0++;
	}
}

void func_811()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar1 = 16920;
	iVar2 = 17013;
	iVar0 = iVar1;
	while (iVar0 <= iVar2)
	{
		iVar3 = func_1312(iVar0, 1);
		if (iVar3 == joaat("weapon_unarmed"))
		{
		}
		else if (!WEAPON::IS_WEAPON_VALID(iVar3))
		{
		}
		else
		{
			iVar4 = WEAPON::_0x865F36299079FB75(iVar3);
			if (iVar4 == 0)
			{
			}
			else
			{
				func_1313(iVar3);
			}
		}
		iVar0++;
	}
}

void func_812()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar1 = 16920;
	iVar2 = 17013;
	iVar0 = iVar1;
	while (iVar0 <= iVar2)
	{
		iVar3 = func_1312(iVar0, 1);
		if (iVar3 == joaat("weapon_unarmed"))
		{
		}
		else if (!WEAPON::IS_WEAPON_VALID(iVar3))
		{
		}
		else
		{
			iVar4 = WEAPON::_0x865F36299079FB75(iVar3);
			if (iVar4 == 0)
			{
			}
			else
			{
				func_1314(iVar3);
			}
		}
		iVar0++;
	}
}

void func_813(var uParam0)
{
	int iVar0;

	*uParam0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_1315(uParam0->f_1[iVar0 /*5*/]);
		iVar0++;
	}
	uParam0->f_62 = 0;
}

void func_814(int iParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (func_1316(iParam0, 0, iParam1, Global_40.f_4283.f_440[0 /*63*/], 0, 1))
	{
		return;
	}
	if (func_1316(iParam0, 0, iParam1, Global_40.f_4283.f_440[1 /*63*/], 0, 1))
	{
		if (&Global_40.f_4283.f_440[1 /*63*/] == 0)
		{
			Global_40.f_4283.f_440[1 /*63*/] = func_1317(Global_40.f_4283.f_440[0 /*63*/]);
		}
		return;
	}
	func_1318(&(Global_40.f_4283.f_440));
	func_1316(iParam0, 0, iParam1, Global_40.f_4283.f_440[1 /*63*/], 0, 1);
}

void func_815(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			Global_40.f_4283.f_313 = iParam1;
			break;
		case 1:
			Global_40.f_4283.f_316 = iParam1;
			break;
		case 2:
			Global_40.f_4283.f_317 = iParam1;
			break;
		case 3:
			Global_40.f_4283.f_318 = iParam1;
			break;
		case 4:
			Global_40.f_4283.f_319 = iParam1;
			break;
		case 5:
			Global_40.f_4283.f_320 = iParam1;
			break;
		case 10:
			Global_40.f_4283.f_321 = iParam1;
			break;
		case 12:
			Global_40.f_4283.f_315 = iParam1;
			break;
		case 13:
			Global_40.f_4283.f_314 = iParam1;
			break;
		case 14:
			Global_40.f_4283.f_322 = iParam1;
			break;
	}
}

Vector3 func_816()
{
	return 0f, 0f, 0f;
}

void func_817()
{
	if (func_1319(Global_43800))
	{
		func_1320(&Global_43800, 0, 0);
	}
}

bool func_818(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_846(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return MISC::IS_BIT_SET(&(Global_1934765->f_53[iVar1]), iVar2);
	}
	iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (iVar3 == 255)
	{
		return MISC::IS_BIT_SET(&(Global_1934765->f_53[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(((*Global_1055058)[iVar3 /*116*/])->f_72.f_28[iVar1]), iVar2);
}

bool func_819(int iParam0)
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return false;
	}
	return STREAMING::_0x73B40D97D7BAAD77(iParam0, Global_36);
}

void func_820(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_846(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		MISC::CLEAR_BIT(Global_1934765->f_53[iVar1], iVar2);
	}
	else
	{
		iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (iVar3 == 255)
		{
			Global_1058888->f_40567.f_46 = 1;
			MISC::CLEAR_BIT(Global_1058888->f_40567.f_28[iVar1], iVar2);
		}
		else
		{
			MISC::CLEAR_BIT(((*Global_1055058)[iVar3 /*116*/])->f_72.f_28[iVar1], iVar2);
		}
	}
}

int func_821(int iParam0)
{
	if (!func_126(iParam0))
	{
		return 0;
	}
	return ((*Global_1888801)[iParam0 /*35*/])->f_3;
}

bool func_822(int iParam0, vector3 vParam1)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return false;
	}
	return VOLUME::_0xF256A75210C5C0EB(iParam0, vParam1);
}

int func_823(int iParam0, float fParam1)
{
	vector3 vVar0;
	var uVar3;

	if (!STREAMING::_IS_IMAP_ACTIVE(iParam0))
	{
		return 0;
	}
	if (!STREAMING::_0x9C77964B0E07B633(iParam0, &vVar0, &uVar3))
	{
		return 0;
	}
	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), vVar0) <= fParam1)
	{
		return 1;
	}
	return 0;
}

int func_824(int iParam0)
{
	return iParam0;
}

int func_825(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;

	bVar0 = func_28() != -1;
	switch (iParam0)
	{
		case 76:
			*iParam1 = 0;
			if (bParam3)
			{
				*iParam2 = 47;
			}
			else
			{
				*iParam2 = 63;
			}
			if (bVar0)
			{
				*iParam2 = 5;
			}
			break;
		case 105:
			*iParam1 = 69;
			if (bParam3)
			{
				*iParam2 = 127;
			}
			else
			{
				*iParam2 = 136;
			}
			if (bVar0)
			{
				*iParam2 = 72;
			}
			break;
		case 5:
			*iParam1 = 137;
			*iParam2 = 324;
			if (bVar0)
			{
				*iParam2 = 142;
			}
			break;
		case 61:
			*iParam1 = 380;
			*iParam2 = 381;
			if (bVar0)
			{
				*iParam2 = 380;
			}
			break;
		case 78:
			*iParam1 = 382;
			*iParam2 = 431;
			if (bVar0)
			{
				*iParam2 = 384;
			}
			break;
		case 92:
			*iParam1 = 443;
			*iParam2 = 471;
			if (bVar0)
			{
				*iParam2 = 443;
			}
			break;
		case 26:
			*iParam1 = 472;
			if (bParam3)
			{
				*iParam2 = 500;
			}
			else
			{
				*iParam2 = 502;
			}
			if (bVar0)
			{
				*iParam2 = 472;
			}
			break;
		case 38:
			*iParam1 = 508;
			*iParam2 = 553;
			if (bVar0)
			{
				*iParam2 = 509;
			}
			break;
		case 68:
			*iParam1 = 554;
			*iParam2 = 565;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 65:
			*iParam1 = 566;
			*iParam2 = 588;
			if (bVar0)
			{
				*iParam2 = 566;
			}
			break;
		case 69:
			*iParam1 = 589;
			if (bParam3)
			{
				*iParam2 = 598;
			}
			else
			{
				*iParam2 = 612;
			}
			if (bVar0)
			{
				*iParam2 = 590;
			}
			break;
		case 75:
			*iParam1 = 503;
			*iParam2 = 506;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 93:
			*iParam1 = 613;
			*iParam2 = 625;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 95:
			*iParam1 = 626;
			*iParam2 = 641;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 97:
			*iParam1 = 642;
			*iParam2 = 643;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 3:
			*iParam1 = 644;
			*iParam2 = 656;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 6:
			*iParam1 = 657;
			*iParam2 = 658;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 32:
			*iParam1 = 325;
			*iParam2 = 344;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 82:
			*iParam1 = 659;
			if (bParam3)
			{
				*iParam2 = 673;
			}
			else
			{
				*iParam2 = 690;
			}
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 35:
			*iParam1 = 691;
			*iParam2 = 700;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 56:
			*iParam1 = 701;
			*iParam2 = 708;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 22:
			if (bParam4)
			{
				*iParam1 = 715;
			}
			else
			{
				*iParam1 = 715;
			}
			*iParam2 = 723;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 110:
			*iParam1 = 724;
			*iParam2 = 730;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 64:
			*iParam1 = 736;
			*iParam2 = 740;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 66:
			*iParam1 = 745;
			*iParam2 = 750;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 70:
			*iParam1 = 751;
			*iParam2 = 754;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 77:
			*iParam1 = 731;
			*iParam2 = 732;
			break;
		case 96:
			*iParam1 = 741;
			*iParam2 = 743;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 29:
			*iParam1 = 744;
			*iParam2 = 744;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 100:
			*iParam1 = 755;
			*iParam2 = 763;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 102:
			*iParam1 = 764;
			*iParam2 = 767;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 72:
			*iParam1 = 733;
			*iParam2 = 735;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 124:
			*iParam1 = 791;
			*iParam2 = 793;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 86:
			*iParam1 = 768;
			*iParam2 = 772;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 126:
			*iParam1 = 773;
			*iParam2 = 779;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 120:
			*iParam1 = 432;
			*iParam2 = 442;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 115:
			*iParam1 = 345;
			*iParam2 = 375;
			if (bVar0)
			{
				*iParam2 = 375;
			}
			break;
		case 125:
			*iParam1 = 376;
			*iParam2 = 379;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 116:
			*iParam1 = 783;
			*iParam2 = 790;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 21:
			*iParam1 = 780;
			*iParam2 = 782;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 42:
			*iParam1 = 794;
			*iParam2 = 798;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 89:
			*iParam1 = 799;
			*iParam2 = 800;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 23:
			*iParam1 = 801;
			*iParam2 = 801;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 28:
			*iParam1 = 802;
			*iParam2 = 803;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 101:
			*iParam1 = 804;
			*iParam2 = 806;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 117:
			*iParam1 = 507;
			*iParam2 = 507;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 11:
			*iParam1 = 807;
			*iParam2 = 833;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 128:
			*iParam1 = 834;
			*iParam2 = 857;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		default:
			*iParam1 = -1;
			*iParam2 = -1;
			break;
	}
	if (*iParam1 == -1 || *iParam2 == -1)
	{
		return 0;
	}
	return 1;
}

void func_826(int iParam0)
{
	if (func_28() != -1)
	{
		return;
	}
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(852936895, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(-2043636604, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(-1543778692, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(-1472222264, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(-736367663, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(19124873, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(-53891762, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(1479005205, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(928225741, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(-1945348028, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(-1086821801, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(212415041, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(-16935190, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(-16946315, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(584808788, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(1443812975, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(1908738551, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(-35439674, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(-1792832235, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(1317192638, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(1787522659, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(-1701317228, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(-934649940, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(785713260, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(-2099882877, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(1659593009, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(156473432, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(1198640232, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(2141998185, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(2001815635, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(1943609607, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(1330931991, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(135431031, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(1016865322, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(-1456173883, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(344419080, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(1057927283, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(1711355775, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(49689699, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(260410249, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(-1720522403, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(-1128080855, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(-1496211826, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(-359518005, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(2016269890, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(1690461416, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(41051113, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(-849398716, iParam0);
	_NAMESPACE48::_0x2DF89CD2ED1D0BDE(1677108849, iParam0);
}

int func_827(int iParam0)
{
	bool bVar0;

	bVar0 = func_125(45);
	switch (iParam0)
	{
		case 0:
			if (bVar0)
			{
				return -512973841;
			}
			else
			{
				return 470037909;
			}
			break;
		case 1:
			return -904280534;
		case 3:
			return -1438750434;
		case 6:
			return -41414424;
		case 7:
			return 214708080;
		case 5:
			if (bVar0)
			{
				return -241284918;
			}
			else
			{
				return 218350989;
			}
			break;
		case 8:
			return -1083616881;
		case 9:
			return -1643549114;
		case 10:
			return -1865722934;
		case 11:
			return 1936859429;
		case 12:
			return -272646696;
		case 2:
		case 4:
			if (bVar0)
			{
				return -634462673;
			}
			else
			{
				return 1824681511;
			}
			break;
	}
	return 0;
}

void func_828(int iParam0, int iParam1)
{
	if (!func_1321(iParam0))
	{
		return;
	}
	if (((*Global_1425371)[iParam0 /*373*/])->f_8 != iParam1)
	{
		((*Global_1425371)[iParam0 /*373*/])->f_8 = iParam1;
		func_1322(iParam0, 32);
	}
}

int func_829(int iParam0)
{
	switch (iParam0)
	{
		case 8:
		case 9:
		case 10:
		case 12:
			return -1360990987;
		case 11:
			return 162953686;
		default:
			break;
	}
	return func_827(iParam0);
}

int func_830()
{
	if (func_28() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == joaat("player_zero"))
	{
		return 1;
	}
	return 0;
}

void func_831(int iParam0)
{
	MAP::_0x563FCB6620523917(func_110(iParam0), -514130076);
}

void func_832(int iParam0)
{
	if (MAP::_0xE38450DBCBC70E3D(func_110(iParam0), -514130076))
	{
		MAP::_0x6786D7AFAC3162B3(func_110(iParam0));
	}
}

int func_833(int iParam0)
{
	if (!func_126(iParam0))
	{
		return 0;
	}
	return func_177(iParam0, 33554432);
}

void func_834(int iParam0)
{
	int iVar0;

	if (func_1142(iParam0) == 57)
	{
		MAP::_0x563FCB6620523917(-1145496915, -1482012664);
		MAP::_0x563FCB6620523917(-1043953850, -1482012664);
		MAP::_0x563FCB6620523917(-1783502982, -1482012664);
	}
	else
	{
		iVar0 = -1482012664;
		if (((func_1323(iParam0) == 4 || func_1323(iParam0) == 12) || func_558(func_1323(iParam0)) == 4) || (func_1048(func_1323(iParam0), 8) && ((func_1323(iParam0) == 2 || func_1323(iParam0) == 0) || func_1323(iParam0) == 10)))
		{
			iVar0 = -1305340593;
		}
		MAP::_0x563FCB6620523917(iParam0, iVar0);
	}
}

int func_835(int iParam0)
{
	if (!func_126(iParam0))
	{
		return 0;
	}
	return func_177(iParam0, 67108864);
}

void func_836(int iParam0)
{
	char cVar0[64];
	char* sVar8;

	StringCopy(&cVar0, func_1324(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_1325(cVar0);
	MAP::_0x563FCB6620523917(MISC::GET_HASH_KEY(sVar8), -1482012664);
}

void func_837()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (func_340(664571177))
	{
		func_367(941);
		func_367(943);
		func_367(944);
		func_367(942);
		func_349(941, 32);
		func_350(941, 0);
		func_349(943, 32);
		func_350(943, 0);
		func_349(944, 32);
		func_350(944, 0);
		func_349(942, 32);
		func_350(942, 0);
	}
	else if (!func_610(0, 0, 1))
	{
		func_348(941, 32);
		func_348(943, 32);
		func_348(944, 32);
		func_368(941);
		func_368(943);
		func_368(944);
	}
	if (func_32(52))
	{
		if (func_825(56, &iVar1, &iVar2, 0, 0))
		{
			iVar0 = 0;
			while (iVar0 < (iVar2 - iVar1) + 1)
			{
				func_349((iVar1 + iVar0), 32);
				func_367((iVar1 + iVar0));
				iVar0++;
			}
		}
	}
	else if (func_825(56, &iVar4, &iVar5, 0, 0))
	{
		iVar3 = 0;
		while (iVar3 < (iVar5 - iVar4) + 1)
		{
			func_348((iVar4 + iVar3), 32);
			func_368((iVar4 + iVar3));
			iVar3++;
		}
	}
	if (func_340(1850082804))
	{
		if (func_340(-538889627))
		{
			if (!func_366(709, 32))
			{
				func_349(709, 32);
				func_367(709);
			}
		}
	}
	else if (func_366(709, 32))
	{
		func_348(709, 32);
		if (func_340(-538889627))
		{
			func_368(709);
		}
	}
	if (func_340(-664512648))
	{
		if (!func_366(111, 32))
		{
			func_349(111, 32);
			func_367(111);
		}
		if (!func_366(112, 32))
		{
			func_349(112, 32);
			func_367(112);
		}
		if (!func_366(113, 32))
		{
			func_349(113, 32);
			func_367(113);
		}
		if (!func_366(114, 32))
		{
			func_349(114, 32);
			func_367(114);
		}
	}
	else
	{
		if (func_366(111, 32))
		{
			func_348(111, 32);
			func_368(111);
		}
		if (func_366(112, 32))
		{
			func_349(112, 32);
			func_368(112);
		}
		if (func_366(113, 32))
		{
			func_349(113, 32);
			func_368(113);
		}
		if (func_366(114, 32))
		{
			func_349(114, 32);
			func_368(114);
		}
	}
}

void func_838()
{
	if (((!func_340(168171957) && !func_340(1193080109)) && !func_340(-491981251)) && !func_340(-639037538))
	{
		func_343(100);
	}
	if (!func_340(168171957))
	{
		func_343(101);
	}
	if (((!func_340(1193080109) && !func_340(-491981251)) && !func_340(-639037538)) && !func_340(-618620429))
	{
		func_343(102);
	}
	if (!func_340(1193080109))
	{
		func_343(103);
	}
	if (!func_340(1193080109))
	{
		func_343(104);
	}
	if (!func_340(1193080109))
	{
		func_343(105);
	}
	if (!func_340(1193080109) && !func_340(-491981251))
	{
		func_343(107);
	}
	if (!func_340(-639037538))
	{
		func_343(106);
	}
	if ((!func_340(-491981251) && !func_340(-618620429)) && !func_340(-639037538))
	{
		func_343(109);
	}
	if (!func_340(-491981251) && !func_340(-639037538))
	{
		func_343(110);
	}
	if (((!func_340(168171957) && !func_340(1193080109)) && !func_340(-491981251)) && !func_340(-639037538))
	{
		func_343(111);
	}
	if (!func_340(-618620429))
	{
		func_343(112);
	}
	if (!func_340(-618620429))
	{
		func_343(113);
	}
	if (!func_340(-618620429))
	{
		func_343(114);
	}
	if (((!func_340(168171957) && !func_340(1193080109)) && !func_340(-491981251)) && !func_340(-639037538))
	{
		func_343(116);
	}
	if ((!func_340(-491981251) && !func_340(-618620429)) && !func_340(-639037538))
	{
		func_343(117);
	}
	if (((!func_340(-491981251) && !func_340(-618620429)) && !func_340(1193080109)) && !func_340(-639037538))
	{
		func_343(118);
	}
	if ((!func_340(704802028) && !func_340(588987611)) && !func_340(2008888900))
	{
		func_342(-722030448);
	}
	if (((!func_340(-491981251) && !func_340(-618620429)) && !func_340(-639037538)) && !func_340(1193080109))
	{
		func_342(-956131204);
		func_342(1353861354);
	}
	if (((((((!func_340(588987611) && !func_340(1649996811)) && !func_340(227918160)) && !func_340(168171957)) && !func_340(1193080109)) && !func_340(-491981251)) && !func_340(-639037538)) && !func_340(2008888900))
	{
		func_342(578474998);
	}
	if ((((!func_340(168171957) && !func_340(1193080109)) && !func_340(-491981251)) && !func_340(-639037538)) && !func_340(-618620429))
	{
		func_342(-1667461262);
	}
	if ((((!func_340(168171957) && !func_340(1193080109)) && !func_340(-491981251)) && !func_340(-639037538)) && !func_340(-618620429))
	{
		func_342(411742897);
		func_342(1467774743);
		func_342(1344772301);
		func_342(43335376);
		func_342(-284612948);
	}
	if (((!func_340(1193080109) && !func_340(-491981251)) && !func_340(-639037538)) && !func_340(-618620429))
	{
		func_342(-692583342);
	}
	if (((!func_340(1193080109) && !func_340(-491981251)) && !func_340(-639037538)) && !func_340(-618620429))
	{
		func_342(-918785150);
	}
	if (((!func_340(-491981251) && !func_340(-618620429)) && !func_340(-491981251)) && !func_340(-639037538))
	{
		func_342(1236917971);
	}
	if ((!func_340(-491981251) && !func_340(-639037538)) && !func_340(-618620429))
	{
		func_342(1532009326);
		func_342(-803019223);
		GRAPHICS::_0xDD0BC0EDCB2162F6(-803019223);
		func_342(-1860722801);
		func_342(637627640);
	}
	if (!func_340(-618620429))
	{
		func_342(1965249616);
		func_342(-2021605623);
		func_342(1649902358);
		func_342(1169279648);
		func_342(-218940381);
	}
	if (!func_340(704802028))
	{
		func_342(-904669171);
		func_342(774601424);
		func_342(-584332967);
		func_342(-1615103170);
		func_342(1256771838);
		func_342(-1765152778);
		func_342(-2072231077);
		func_342(19217583);
	}
	if ((!func_340(-491981251) && !func_340(-639037538)) && !func_340(-618620429))
	{
		func_342(349494711);
	}
	if (!func_340(1193080109))
	{
		func_342(1205945639);
	}
	func_342(1532774697);
	if (!func_340(1193080109))
	{
		func_342(431365499);
		func_342(276582710);
		func_342(1191890045);
		func_342(1864768904);
	}
	if (!func_340(-491981251) && !func_340(-639037538))
	{
		func_342(-2090209059);
		func_342(1977031606);
		func_342(1929454697);
		func_342(938290967);
	}
	func_342(-2000794023);
	func_342(-531137142);
	if (!func_340(588987611) && !func_340(2008888900))
	{
		func_342(1757739778);
	}
	func_342(5422464);
	if (!func_340(704802028) && !func_340(588987611))
	{
		func_342(-1012618146);
	}
	if (!func_340(1649996811) && !func_340(2008888900))
	{
		func_342(2111816145);
	}
	if (!func_340(227918160) && !func_340(168171957))
	{
		func_342(197447134);
	}
	if (!func_340(168171957))
	{
		func_342(-974480336);
	}
	func_342(33260939);
	func_342(-270212770);
	func_342(862349416);
	func_342(2006257967);
	func_342(-2008632686);
	if (func_28() == -1)
	{
		if ((((!func_340(704802028) && !func_340(588987611)) && !func_340(1649996811)) && !func_340(227918160)) && !func_340(2008888900))
		{
			func_342(-1253110600);
			func_342(-1402083909);
			func_342(1970695826);
			func_342(-382865315);
		}
	}
	if (!func_340(168171957))
	{
		func_342(-1325016116);
	}
	func_358("nav_mesh_beech_shack");
	func_358("nav_mesh_beech_shack_with_fire");
	func_358("nav_mesh_beech_camp_with_rubble");
	func_358("nav_mesh_beech_house_finished");
	func_358("nav_mesh_beech_barn_finished");
	func_358("nav_mesh_beech_gazebo_finished");
	func_358("nav_mesh_beech_house_decor");
	func_358("nav_mesh_beech_camp_with_supplies");
}

bool func_839(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_1934765->f_21[iVar1]), iVar2);
}

int func_840(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_1326(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	func_1190(iParam0, 1);
	func_1327(iVar0);
	if (bParam1)
	{
		func_1328(Global_1899778, iVar0);
	}
	func_1329(iVar0);
	return 1;
}

int func_841(int iParam0, bool bParam1)
{
	if (func_1330(iParam0))
	{
		return 1;
	}
	if (!bParam1)
	{
		if (func_1331(5000))
		{
			return 1;
		}
	}
	switch (func_766(0))
	{
		case 0:
			return 0;
		case 1:
			if (iParam0 & 1 != 0)
			{
				return 1;
			}
			break;
		case 4:
			if (iParam0 & 2 != 0)
			{
				return 1;
			}
			break;
		case 6:
			if (iParam0 & 4 != 0)
			{
				return 1;
			}
			break;
		case 2:
			if (iParam0 & 16 != 0)
			{
				return 1;
			}
			break;
		case 5:
			if (iParam0 & 32 != 0)
			{
				return 1;
			}
			break;
		case 9:
			if (iParam0 & 64 != 0)
			{
				return 1;
			}
			break;
		case 8:
			if (iParam0 & 8 != 0)
			{
				return 1;
			}
			break;
		case 10:
			if (iParam0 & 512 != 0)
			{
				return 1;
			}
			break;
		case 3:
			if (iParam0 & 128 != 0)
			{
				return 1;
			}
			break;
		case 11:
			if (iParam0 & 256 != 0)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_842(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_753(((*Global_1835011)[iParam0 /*74*/])->f_1);
}

int func_843(int iParam0)
{
	int iVar0;

	if (!func_755(iParam0))
	{
		return 0;
	}
	iVar0 = func_1188(func_345(iParam0));
	if (!func_1192(iVar0))
	{
		return 0;
	}
	return func_754(iVar0, 4);
}

int func_844(int iParam0, var uParam1, int iParam2)
{
	*uParam1 = iParam0;
	switch (iParam0)
	{
		case 0:
			uParam1->f_1 = 0;
			uParam1->f_2 = 38;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { -813.2971f, -1324.285f, 46.89f };
			uParam1->f_8 = 0.29f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 1:
			uParam1->f_1 = 0;
			uParam1->f_2 = 105;
			uParam1->f_3 = 0;
			uParam1->f_4 = 400f;
			uParam1->f_5 = { 1339.562f, -1372.173f, 83.2967f };
			uParam1->f_8 = 80f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 2:
			uParam1->f_1 = 0;
			uParam1->f_2 = 92;
			uParam1->f_3 = 0;
			uParam1->f_4 = 300f;
			uParam1->f_5 = { 2938.582f, 520.6577f, 44.3412f };
			uParam1->f_8 = 126.9f;
			uParam1->f_9 = 2f;
			return 1;
		case 3:
			uParam1->f_1 = 5;
			uParam1->f_2 = 37;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			if (Global_1899848->f_3 < 0 || Global_1899848->f_3 >= 6)
			{
				Global_1899848->f_3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
			}
			if (Global_1899848->f_3 == 0 || Global_1899848->f_3 == 1)
			{
				uParam1->f_5 = { -1604f, -1419.09f, 80.92f };
			}
			else if (Global_1899848->f_3 == 2 || Global_1899848->f_3 == 3)
			{
				uParam1->f_5 = { -1604f, -1419.09f, 80.92f };
			}
			else
			{
				uParam1->f_5 = { -1603.35f, -1409f, 80.92f };
			}
			uParam1->f_8 = 0f;
			uParam1->f_9 = 1f;
			return 1;
		case 4:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 5;
				uParam1->f_2 = 71;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { -63.25864f, -404.9262f, 69.9287f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 1f;
				return 1;
			}
			return 0;
		case 5:
			uParam1->f_1 = 5;
			uParam1->f_2 = 22;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -2552.997f, 397.415f, 147.1629f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 1f;
			return 1;
		case 6:
			uParam1->f_1 = 1;
			uParam1->f_2 = 38;
			uParam1->f_3 = 0;
			uParam1->f_4 = 200f;
			uParam1->f_5 = { -936.9756f, -1390.084f, 49.5777f };
			uParam1->f_8 = -174.39f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 7:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = -1;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { 0f, 0f, 0f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 8:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = 98;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { 665.5017f, -1243.862f, 43.1442f };
				uParam1->f_8 = 134.74f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 9:
			uParam1->f_1 = 1;
			uParam1->f_2 = 69;
			uParam1->f_3 = 0;
			uParam1->f_4 = 100f;
			uParam1->f_5 = { 1522.005f, 431.2095f, 89.679f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 10:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = 71;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { -118.0872f, -27.6725f, 94.805f };
				uParam1->f_8 = -103.99f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 11:
			uParam1->f_1 = 1;
			uParam1->f_2 = 5;
			uParam1->f_3 = 0;
			uParam1->f_4 = 150f;
			uParam1->f_5 = { 2515.659f, -1245.743f, 49.5757f };
			uParam1->f_8 = -45f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 12:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = 9;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { 1881.669f, -1874.046f, 41.7769f };
				uParam1->f_8 = 77.47f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 13:
			uParam1->f_1 = 6;
			uParam1->f_2 = 22;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -2594.942f, 410.063f, 148.7582f };
			uParam1->f_8 = 88.6423f;
			uParam1->f_9 = 2f;
			return 1;
		case 14:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = -1;
				uParam1->f_3 = 0;
				uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325->f_24);
				uParam1->f_5 = { 0f, 0f, 0f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 15:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = 98;
				uParam1->f_3 = 0;
				uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325->f_24);
				uParam1->f_5 = { 665.5322f, -1243.902f, 43.94809f };
				uParam1->f_8 = 225.55f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 16:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = 71;
				uParam1->f_3 = 0;
				uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325->f_24);
				uParam1->f_5 = { -118.119f, -27.6134f, 95.57291f };
				uParam1->f_8 = 166.84f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 17:
			uParam1->f_1 = 3;
			uParam1->f_2 = 26;
			uParam1->f_3 = 0;
			uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325->f_24);
			uParam1->f_5 = { -1826.215f, -433.9676f, 159.7386f };
			uParam1->f_8 = 157.4f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 18:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = 9;
				uParam1->f_3 = 0;
				uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325->f_24);
				uParam1->f_5 = { 1881.669f, -1874.046f, 42.58081f };
				uParam1->f_8 = 167.47f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 19:
			uParam1->f_1 = 3;
			uParam1->f_2 = 76;
			uParam1->f_3 = 0;
			uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325->f_24);
			uParam1->f_5 = { -243.7256f, 771.2707f, 117.8849f };
			uParam1->f_8 = -69.92f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 20:
			uParam1->f_1 = 3;
			uParam1->f_2 = 92;
			uParam1->f_3 = 0;
			uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325->f_24);
			uParam1->f_5 = { 2946.444f, 500.1154f, 45.53999f };
			uParam1->f_8 = -84.13f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 21:
			uParam1->f_1 = 4;
			uParam1->f_2 = 37;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -1603.485f, -1414.838f, 81.1f };
			uParam1->f_8 = -14.4f;
			uParam1->f_9 = 1.5f;
			return 1;
		case 22:
			uParam1->f_1 = 4;
			uParam1->f_2 = 22;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -2514.944f, 432.25f, 147f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 1.5f;
			return 1;
		case 23:
			uParam1->f_1 = 2;
			uParam1->f_2 = 38;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { -813.2148f, -1316.547f, 42.6787f };
			uParam1->f_8 = 60f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 24:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 2;
				uParam1->f_2 = -1;
				uParam1->f_3 = 0;
				uParam1->f_4 = 100f;
				uParam1->f_5 = { 0f, 0f, 0f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 25:
			return 0;
		case 26:
			uParam1->f_1 = 2;
			uParam1->f_2 = 71;
			uParam1->f_3 = 0;
			uParam1->f_4 = 100f;
			uParam1->f_5 = { -138.7686f, -27.4923f, 95.0878f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 27:
			uParam1->f_1 = 2;
			uParam1->f_2 = 5;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { 2630.74f, -1226.25f, 52.3794f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 28:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 2;
				uParam1->f_2 = 8;
				uParam1->f_3 = 0;
				uParam1->f_4 = 1000f;
				uParam1->f_5 = { 3288.448f, -1318.004f, 41.7734f };
				uParam1->f_8 = 60f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 29:
			return 0;
		case 30:
			uParam1->f_1 = 2;
			uParam1->f_2 = 75;
			uParam1->f_3 = 0;
			uParam1->f_4 = 250f;
			uParam1->f_5 = { -327.6681f, -357.796f, 87.055f };
			uParam1->f_8 = -63f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 31:
			uParam1->f_1 = 2;
			uParam1->f_2 = 115;
			uParam1->f_3 = 0;
			uParam1->f_4 = 200f;
			uParam1->f_5 = { -5510.395f, -2913.764f, 0.6353f };
			uParam1->f_8 = 90f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 32:
			uParam1->f_1 = 2;
			uParam1->f_2 = 76;
			uParam1->f_3 = 0;
			uParam1->f_4 = 250f;
			uParam1->f_5 = { -304.5352f, 801.1352f, 117.9785f };
			uParam1->f_8 = 135f;
			uParam1->f_9 = 2.5f;
			return 1;
		default:
			break;
	}
	return 0;
}

int func_845(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if (func_28() != -1)
	{
		return -1;
	}
	if (Global_1899528->f_211)
	{
		return -1;
	}
	iVar2 = -1;
	if (uParam0->f_2 == -1)
	{
		return -1;
	}
	if (uParam0->f_2 != func_78())
	{
		return -1;
	}
	if (!func_1332(uParam0->f_1))
	{
		return -1;
	}
	if (func_833(uParam0->f_2))
	{
		return -1;
	}
	iVar2 = func_1326(*uParam0);
	if (iVar2 == -1)
	{
		if (!func_1333(&iVar2))
		{
			return -1;
		}
	}
	func_1334(*uParam0, iVar2);
	bVar1 = func_1335(uParam0->f_1, 131072);
	func_1336(uParam0->f_1);
	iVar3 = func_1337(uParam0->f_1, *uParam0);
	(*Global_1392915)[iVar2 /*12*/] = *uParam0;
	((*Global_1392915)[iVar2 /*12*/])->f_1 = uParam0->f_1;
	((*Global_1392915)[iVar2 /*12*/])->f_2 = uParam0->f_2;
	((*Global_1392915)[iVar2 /*12*/])->f_3 = uParam0->f_3;
	((*Global_1392915)[iVar2 /*12*/])->f_4 = iVar3;
	((*Global_1392915)[iVar2 /*12*/])->f_5 = uParam0->f_9;
	((*Global_1392915)[iVar2 /*12*/])->f_6 = { uParam0->f_5 };
	((*Global_1392915)[iVar2 /*12*/])->f_9 = uParam0->f_8;
	((*Global_1392915)[iVar2 /*12*/])->f_10 = BUILTIN::FLOOR(uParam0->f_4);
	((*Global_1392915)[iVar2 /*12*/])->f_11 = iVar2;
	Global_1392915->f_121[iVar2 /*20*/] = 0;
	(Global_1392915->f_121[iVar2 /*20*/])->f_2 = bParam1;
	(Global_1392915->f_121[iVar2 /*20*/])->f_17 = iParam2;
	(Global_1392915->f_121[iVar2 /*20*/])->f_1 = 0;
	(Global_1392915->f_121[iVar2 /*20*/])->f_6 = 0;
	(Global_1392915->f_121[iVar2 /*20*/])->f_12 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_5);
	(Global_1392915->f_121[iVar2 /*20*/])->f_16 = 0;
	if ((Global_1392915->f_121[iVar2 /*20*/])->f_12 != 0)
	{
		(Global_1392915->f_121[iVar2 /*20*/])->f_9 = { INTERIOR::_0x2C9746D0CA15BE1C((Global_1392915->f_121[iVar2 /*20*/])->f_12) };
	}
	else
	{
		(Global_1392915->f_121[iVar2 /*20*/])->f_9 = { 0f, 0f, 0f };
	}
	if (bParam1)
	{
		func_1338(uParam0->f_1, 65536);
		if ((uParam0->f_1 == 1 || uParam0->f_1 == 2) || uParam0->f_1 == 0)
		{
			func_1338(uParam0->f_1, 2097152);
		}
	}
	if (bVar1)
	{
		func_1338(uParam0->f_1, 131072);
	}
	if (func_1339(iVar3) || (!func_753(iVar3) && func_761(0) != iVar3))
	{
		iVar0 = func_1188(iVar3);
		if (iVar0 == -1)
		{
			func_1340(iVar3);
		}
	}
	return iVar2;
}

int func_846(int iParam0, int iParam1)
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

void func_847(int iParam0)
{
	int iVar0;

	if (!func_623(iParam0))
	{
		return;
	}
	iVar0 = func_1341(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
	((*Global_1895087)[iParam0 /*3*/])->f_2 = 0;
}

void func_848(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_333(iParam0);
	}
	else
	{
		func_342(iParam0);
	}
}

int func_849(int iParam0, int iParam1, bool bParam2)
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

int func_850(int iParam0)
{
	if (func_1342(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return 0;
}

void func_851(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_850(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || iParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, iParam1, iParam3);
	}
}

void func_852(int iParam0, int iParam1)
{
	if (func_850(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 2 || iParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 2);
		}
	}
}

void func_853(int iParam0, int iParam1)
{
	if (func_850(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || iParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
	}
}

void func_854(int iParam0, int iParam1)
{
	if (func_850(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 0 || iParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 0);
		}
	}
}

int func_855()
{
	return 1;
}

bool func_856(int iParam0)
{
	return iParam0 != 0;
}

bool func_857(vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, 16384);
}

int func_858(int iParam0, bool bParam1)
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

int func_859(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

int func_860(bool bParam0)
{
	if (func_28() == -1)
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

int func_861(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam2 != 0 && func_128(iParam1) != iParam2)
	{
		return 0;
	}
	if (func_1343(2, iParam1))
	{
		func_905(uParam0, iParam1);
		return 1;
	}
	return 0;
}

void func_862(int iParam0)
{
	func_867(iParam0, 8, 6);
}

void func_863(int iParam0)
{
	func_881(iParam0, 8, 6);
}

void func_864(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;

	bVar6 = func_28() != -1;
	iVar7 = func_1344(0);
	if (func_399(32768))
	{
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 39)
	{
		iVar0 = &Global_1946804->f_57.f_430[iVar2];
		if (iVar0 <= -1 || iVar0 >= 39)
		{
		}
		else
		{
			iVar5 = func_880(iVar0, 1);
			if (func_877(iVar5, 8))
			{
			}
			else if (&(Global_1946804->f_57[iVar0 /*11*/])->f_2[0] == -1802376732 || &uParam0->f_1[iVar0 /*3*/] == 0)
			{
			}
			else if (func_877(iVar5, 6) || &uParam0->f_1[iVar0 /*3*/] == &Global_1946804->f_57[iVar0 /*11*/])
			{
			}
			else
			{
				iVar4 = func_1345(&(uParam0->f_1[iVar0 /*3*/]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_1346(uParam0);
				if (iVar3 > 0)
				{
					if (!func_399(524288))
					{
						func_872(524288);
						iVar1 = (iVar1 - iVar8);
					}
					iVar2 = iVar3;
					while (iVar2 <= 38)
					{
						iVar0 = &Global_1946804->f_57.f_430[iVar2];
						if (iVar0 <= -1 || iVar0 >= 39)
						{
						}
						else
						{
							iVar5 = func_880(iVar0, 1);
							if (func_877(iVar5, 8))
							{
							}
							else if (&(Global_1946804->f_57[iVar0 /*11*/])->f_2[0] == -1802376732 || &uParam0->f_1[iVar0 /*3*/] == 0)
							{
							}
							else if (func_877(iVar5, 6) || &uParam0->f_1[iVar0 /*3*/] == &Global_1946804->f_57[iVar0 /*11*/])
							{
							}
							else
							{
								iVar4 = func_1345(&(uParam0->f_1[iVar0 /*3*/]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
									(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
									if (bParam1)
									{
										func_1347(iVar0, iParam2);
									}
								}
								iVar1 = (iVar1 + iVar4);
							}
						}
						iVar2++;
					}
				}
				if ((iVar1 + iVar8) < 31)
				{
					func_401(524288);
				}
			}
		}
	}

void func_865(int iParam0)
{
	Global_1946804->f_978 = iParam0;
}

void func_866(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_8 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3[0] = 0;
	uParam0->f_3[1] = 0;
	uParam0->f_3[2] = 0;
	uParam0->f_3[3] = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	if (uParam0->f_12)
	{
		PED::_0x13E7320C762F0477(uParam0->f_13);
	}
	uParam0->f_12 = 0;
}

void func_867(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_901(iParam0, 1) /*11*/])->f_10 = ((Global_1946804->f_57[func_901(iParam0, 1) /*11*/])->f_10 - ((Global_1946804->f_57[func_901(iParam0, 1) /*11*/])->f_10 && iParam1));
}

void func_868()
{
	int iVar0;

	Global_1946804->f_1497 = Global_1946804->f_1378;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*(Global_1946804->f_1497.f_1[iVar0 /*3*/]) = { *(Global_1946804->f_1378.f_1[iVar0 /*3*/]) };
		iVar0++;
	}
}

int func_869(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_397(0);
	iVar1 = 0;
	func_398(&(Global_1946804->f_964), iVar0, iParam0, 0, 0, 0);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1946804->f_964));
	if (!DATAFILE::_0xED4413CEE1BF142C(&(Global_1946804->f_964)))
	{
		return 0;
	}
	if (!DATAFILE::_0xA63CD20F19B961AB(&iVar1, &(Global_1946804->f_964), -1516819610))
	{
		return 0;
	}
	return iVar1;
}

void func_870(int iParam0, bool bParam1, int iParam2)
{
	func_916(&(Global_1946804->f_1378), iParam0);
	func_917(2, iParam0, 6);
	if (bParam1)
	{
		func_871(0, 1);
	}
}

void func_871(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_865(0);
	}
	if (bParam0)
	{
		func_872(8);
		func_872(512);
	}
	else
	{
		func_872(8);
		func_872(16);
	}
}

void func_872(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_873(struct<4> Param0)
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
			if (func_1348(Param0))
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
			func_1349(Param0);
			*(Global_1946804->f_668[Global_1946804->f_856 /*4*/]) = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_872(8);
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
			if (func_1348(Param0))
			{
				return;
			}
			func_1349(Param0);
			*(Global_1946804->f_567[Global_1946804->f_851 /*4*/]) = { Param0 };
			Global_1946804->f_851++;
			func_872(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_935(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

bool func_874(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_875(struct<4> Param0)
{
	int iVar0;
	int iVar1;

	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_1348(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1 /*4*/] == Param0 && (Global_1946804->f_769[iVar1 /*4*/])->f_2 == Param0.f_2) && (Global_1946804->f_769[iVar1 /*4*/])->f_3 == Param0.f_3) && (Global_1946804->f_769[iVar1 /*4*/])->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1 /*4*/] == 34 && func_1348(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_1349(Param0);
	*(Global_1946804->f_769[Global_1946804->f_854 /*4*/]) = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_872(8);
}

void func_876(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_880(iParam1, 1);
	if (!bParam2 && iVar2 == 1367443060)
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = func_1350(iParam4);
		}
		else if (iParam4 != &Global_1946804->f_57[iParam1 /*11*/])
		{
			iVar1 = PED::_0x5FF9A878C3D115B8(iParam4, PED::_GET_METAPED_TYPE(iParam0), bParam2);
		}
	}
	if (bParam3)
	{
		iVar0 = 0;
		while (iVar0 < (Global_1946804->f_57[iParam1 /*11*/])->f_1)
		{
			if (&(Global_1946804->f_57[iParam1 /*11*/])->f_2[iVar0] != iVar1)
			{
				PED::_0xDF631E4BCE1B1FC4(iParam0, &((Global_1946804->f_57[iParam1 /*11*/])->f_2[iVar0]), 0, bParam2);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < (Global_1946804->f_57[iParam1 /*11*/])->f_1)
		{
			if (&(Global_1946804->f_57[iParam1 /*11*/])->f_2[iVar0] != iVar1)
			{
				PED::_0xD710A5007C2AC539(iParam0, &((Global_1946804->f_57[iParam1 /*11*/])->f_2[iVar0]), 0);
			}
			iVar0++;
		}
	}
}

bool func_877(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_901(iParam0, 1) /*11*/])->f_10 && iParam1) != 0;
}

bool func_878(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[iParam0 /*11*/])->f_9 && iParam1) != 0;
}

void func_879(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 10;
	if (func_877(1108822547, 6))
	{
		if (bParam2)
		{
			func_876(iParam0, iVar0, func_28() != -1, 0, 0);
			func_881(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		PED::_0xBC6DF00D7A4A6819(iParam0, Global_1946804->f_2776.f_1, &(Global_1946804->f_2776.f_3[0]), &(Global_1946804->f_2776.f_3[1]), &(Global_1946804->f_2776.f_3[2]), Global_1946804->f_2776.f_8, Global_1946804->f_2776.f_9, Global_1946804->f_2776.f_10, Global_1946804->f_2776.f_11);
		func_867(1108822547, 1, 6);
	}
	Global_1946804->f_857++;
	if (!bParam1)
	{
		return;
	}
	PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
}

int func_880(int iParam0, int iParam1)
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

void func_881(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_901(iParam0, 1) /*11*/])->f_10 = ((Global_1946804->f_57[func_901(iParam0, 1) /*11*/])->f_10 || iParam1);
}

struct<4> func_882(bool bParam0)
{
	return func_883(1328661203, func_1351(), -1591664384, bParam0);
}

struct<4> func_883(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_38(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_860(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_884(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;

	if (!func_38(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_883(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_860(bParam6), &Var0, 0);
	return uVar4;
}

void func_885(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_886(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_38(iParam0, 0))
	{
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return 0;
	}
	if (func_950(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return 0;
	}
	if (!func_472(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_860(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_887(struct<4> Param0, int iParam4)
{
	struct<11> Var0;

	if (!func_472(0))
	{
		return func_1352(Param0, iParam4, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_1353(Param0, &Var0, 0, 0))
	{
		return 0;
	}
	if (Var0.f_10 == iParam4)
	{
		return 1;
	}
	if (!INVENTORY::_0x734311E2852760D0(func_860(0), &Param0, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_888(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (!func_1354(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_469(iParam0) != -999503751)
		{
			func_1355(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_469(iParam0) != -999503751)
	{
		func_1355(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_925(iParam0, 1);
	return 1;
}

void func_889()
{
	int iVar0;

	if (func_28() == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_2657.f_19)
		{
			Global_26795[iVar0] = &Global_1946804->f_2657[iVar0];
			iVar0++;
		}
		Global_26795.f_20 = Global_1946804->f_2657.f_20;
		Global_26795.f_21 = Global_1946804->f_2657.f_21;
		Global_26795.f_22 = Global_1946804->f_2657.f_22;
		Global_26795.f_23 = Global_1946804->f_2657.f_23;
		Global_26795.f_24 = Global_1946804->f_2657.f_24;
		Global_26795.f_19 = Global_1946804->f_2657.f_19;
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		Global_36637.f_45.f_350[iVar0] = &Global_1946804->f_2657[iVar0];
		iVar0++;
	}
	Global_36637.f_45.f_350.f_20 = Global_1946804->f_2657.f_20;
	Global_36637.f_45.f_350.f_21 = Global_1946804->f_2657.f_21;
	Global_36637.f_45.f_350.f_22 = Global_1946804->f_2657.f_22;
	Global_36637.f_45.f_350.f_23 = Global_1946804->f_2657.f_23;
	Global_36637.f_45.f_350.f_24 = Global_1946804->f_2657.f_24;
	Global_36637.f_45.f_350.f_19 = Global_1946804->f_2657.f_19;
}

void func_890(var uParam0, var uParam1, char[32] cParam2, struct<14> Param10)
{
	func_1356(uParam0, uParam1, cParam2, Param10);
	uParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, func_1357(15), Param10.f_10);
	uParam0->f_12 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, func_1357(17), Param10.f_11);
	uParam0->f_13 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_1357(19), Param10.f_12);
	uParam0->f_14 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_1357(3), Param10.f_13);
}

void func_891(var uParam0, var uParam1, char[32] cParam2, struct<21> Param10)
{
	func_1356(uParam0, uParam1, cParam2, Param10);
	uParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, func_1357(15), &(Param10.f_10));
	uParam0->f_12 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_1357(21), Param10.f_18);
	uParam0->f_13 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_1357(22), Param10.f_19);
	uParam0->f_14 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_1357(23), Param10.f_20);
}

void func_892(var uParam0, var uParam1, char[32] cParam2, struct<28> Param10)
{
	func_1356(uParam0, uParam1, cParam2, Param10);
	uParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, func_1357(15), &(Param10.f_10));
	if (Param10.f_24)
	{
		uParam0->f_12 = DATABINDING::_DATABINDING_ADD_HASH_ARRAY(*uParam0, func_1357(32));
	}
	else
	{
		uParam0->f_12 = DATABINDING::_DATABINDING_ADD_STRING_ARRAY(*uParam0, func_1357(32));
	}
	uParam0->f_13 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_1357(30), Param10.f_18);
	uParam0->f_14 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_1357(31), Param10.f_19);
	uParam0->f_16 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_1357(33), Param10.f_21);
	uParam0->f_18 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, func_1357(35), Param10.f_22);
	uParam0->f_17 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, func_1357(34), Param10.f_22);
	uParam0->f_19 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_1357(36), Param10.f_25);
	uParam0->f_20 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_1357(37), Param10.f_26);
	uParam0->f_21 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_1357(38), Param10.f_27);
}

void func_893(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_5835, sParam2);
	uParam0->f_5836[iParam1] = DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar0, sParam3, iParam4);
}

void func_894(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_5835, sParam2);
	uParam0->f_5848[iParam1] = DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar0, sParam3, iParam4);
}

void func_895(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_5835, sParam2);
	uParam0->f_5859[iParam1] = DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar0, sParam3, sParam4);
}

void func_896()
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar9;

	if (func_28() == -1)
	{
		Var2 = 249428082;
	}
	else
	{
		Var2 = -525029060;
	}
	Var2.f_1 = -1781055500;
	Var2.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var2);
	while (DATAFILE::_0xED4413CEE1BF142C(&Var2))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar1, &Var2, 1205212054))
		{
		}
		else
		{
			iVar9 = func_1358(iVar1);
			if (iVar9 < 0 || iVar9 >= 54)
			{
			}
			else if (!DATAFILE::_0x52FC26D2D2FC2987(&iVar1, &Var2, 356562968))
			{
			}
			else
			{
				Global_1946804->f_2[iVar9] = iVar1;
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		func_1359(iVar0, func_28() == -1);
		iVar0++;
	}
}

void func_897()
{
	int iVar0;

	Global_1946804->f_850 = 0;
	Global_1946804->f_855 = 0;
	Global_1946804->f_856 = 0;
	Global_1946804->f_852 = 0;
	Global_1946804->f_853 = 0;
	Global_1946804->f_854 = 0;
	Global_1946804->f_851 = 0;
	iVar0 = 0;
	while (iVar0 < 37)
	{
		Global_1946804->f_529[iVar0] = 0;
		iVar0++;
	}
	func_401(8);
	func_401(16);
}

int func_898(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;

	if (!func_38(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_952(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return 0;
		}
		WEAPON::_0xB6CFEC32E3742779(Global_35, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_521(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_162(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_518(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((func_452(iParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((func_452(iParam0, 0, 0) - iParam1) < 0)
		{
			func_898(iParam0, func_452(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_466(iParam0) == -427144552)
	{
		if (!func_1360(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_1361(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_472(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_521(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_1362(iParam0, iParam1);
	return 1;
}

int func_899(int iParam0)
{
	switch (func_469(iParam0))
	{
		case -2061583405:
			return 1;
		case -1719060085:
			return 1;
		case -999503751:
			return 1;
		case -525676072:
			return 1;
		case 81053684:
			return 1;
		case -413129408:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_900(int iParam0)
{
	struct<5> Var0;

	Var0 = { func_930(iParam0, 1, 0) };
	return func_931(Var0.f_4);
}

int func_901(int iParam0, int iParam1)
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

Vector3 func_902(int iParam0, int iParam1)
{
	if (func_28() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		return *((Global_26795.f_26[iParam1 /*120*/])->f_1.f_1[iParam0 /*3*/]);
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	return *((Global_36637.f_45.f_350.f_26[iParam1 /*120*/])->f_1.f_1[iParam0 /*3*/]);
}

int func_903(int iParam0, int iParam1)
{
	vector3 vVar0;

	vVar0 = { func_902(iParam0, iParam1) };
	return vVar0.x;
}

void func_904(var uParam0, int iParam1, int iParam2)
{
	*((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/]) = { *uParam0 };
	((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 = (((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 - ((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 & 1);
}

void func_905(var uParam0, int iParam1)
{
	int iVar0;

	if (func_28() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		*uParam0 = (Global_26795.f_26[iParam1 /*120*/])->f_1;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			*(uParam0->f_1[iVar0 /*3*/]) = { *((Global_26795.f_26[iParam1 /*120*/])->f_1.f_1[iVar0 /*3*/]) };
			iVar0++;
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	*uParam0 = (Global_36637.f_45.f_350.f_26[iParam1 /*120*/])->f_1;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*(uParam0->f_1[iVar0 /*3*/]) = { *((Global_36637.f_45.f_350.f_26[iParam1 /*120*/])->f_1.f_1[iVar0 /*3*/]) };
		iVar0++;
	}
}

int func_906(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iVar0 >= 1 && !func_1343(2, iVar0))
		{
			(*uParam0)[iVar0] = 2;
		}
		else if (func_908((*uParam0)[iVar0], &((Global_26795.f_26[iVar0 /*120*/])->f_1)))
		{
			(*uParam0)[iVar0] = 0;
		}
		else
		{
			(*uParam0)[iVar0] = 1;
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

void func_907(var uParam0)
{
	int iVar0;

	if (uParam0[0] == 1)
	{
		func_909(&((Global_26795.f_26[0 /*120*/])->f_1), 0);
	}
	iVar0 = 1;
	while (iVar0 <= 4)
	{
		if (uParam0[iVar0] != 1)
		{
		}
		else
		{
			func_1363(2, iVar0, 6);
			func_414(func_1364(iVar0), 1, 1);
			func_1361(func_1364(iVar0), 1, -142743235, 0, 0);
			if (Global_1946804->f_1497 == func_128(iVar0) || Global_40.f_7729 == iVar0)
			{
				if (Global_1946804->f_1 == 1160113249)
				{
					Global_40.f_7729 = 62;
				}
				else
				{
					Global_40.f_7729 = 6;
				}
			}
		}
		iVar0++;
	}
}

int func_908(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (!func_1365(Global_1946804->f_1378.f_1[iVar0 /*3*/], 2))
		{
		}
		else if ((&uParam1->f_1[iVar0 /*3*/] == &Global_1946804->f_57[iVar0 /*11*/] || &uParam1->f_1[iVar0 /*3*/] == 0) || !func_1365(uParam1->f_1[iVar0 /*3*/], 2))
		{
			if (func_1366(func_880(iVar0, 1)))
			{
				*uParam0 = 1;
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_909(var uParam0, bool bParam1)
{
	var uVar0;
	int iVar1;

	Global_1347477->f_184 = -1;
	Global_1347477->f_185 = 0;
	func_423(-2124052603);
	if (Global_1946804->f_1 == 1160113249)
	{
		func_422(&(Global_1946804->f_1378), 1105329772, &uVar0, 1, 0, 0, 0);
		Global_1946804->f_1378.f_1[27 /*3*/] = -1515874150; /* GXTEntry: "John\'s Off-Hand Holster" */
	}
	else
	{
		func_422(&(Global_1946804->f_1378), 2020890174, &uVar0, 1, 0, 0, 0);
		if (bParam1)
		{
			func_422(&(Global_1946804->f_1378), -1061007984, &uVar0, 1, 0, 0, 0);
		}
		Global_1946804->f_1378.f_1[27 /*3*/] = 899611344; /* GXTEntry: "Off-Hand Holster" */
	}
	func_1367(&(Global_40.f_7731[0 /*5*/]), &(Global_40.f_7731[1 /*5*/]), &(Global_40.f_7731[2 /*5*/]));
	func_1368(Global_40.f_7748.f_1);
	iVar1 = 0;
	while (iVar1 < 39)
	{
		if (!func_1365(Global_1946804->f_1378.f_1[iVar1 /*3*/], 2))
		{
		}
		else
		{
			(Global_1946804->f_1497.f_1[iVar1 /*3*/])->f_2 = ((Global_1946804->f_1497.f_1[iVar1 /*3*/])->f_2 || (Global_1946804->f_1378.f_1[iVar1 /*3*/])->f_2);
			(uParam0->f_1[iVar1 /*3*/])->f_2 = ((uParam0->f_1[iVar1 /*3*/])->f_2 || (Global_1946804->f_1378.f_1[iVar1 /*3*/])->f_2);
			if (!func_1366(func_880(iVar1, 1)))
			{
			}
			else
			{
				if (&uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/] || &uParam0->f_1[iVar1 /*3*/] == 0)
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_1378.f_1[iVar1 /*3*/];
				}
				switch (func_880(iVar1, 1))
				{
					case -1506259487:
					case -1130352927:
					case -676503695:
					case 383349088:
						(uParam0->f_1[iVar1 /*3*/])->f_1 = (Global_1946804->f_1378.f_1[iVar1 /*3*/])->f_1;
						break;
				}
			}
		}
		iVar1++;
	}
}

int func_910(int iParam0)
{
	switch (iParam0)
	{
		case 708211766:
			return 1;
		case -1815871154:
			return 2;
		case 1053922635:
			return 4;
		case -1248203249:
			return 8;
		case -1275860049:
			return 16;
		case -473313046:
			return 32;
		case 1009605579:
			return 64;
		case -92538845:
			return 128;
		case 350097565:
			return 256;
		case 346761890:
			return 512;
		case -915377750:
			return 1024;
		case -1283403230:
			return 2048;
		case 1024778115:
			return 4096;
		case 75507907:
			return 8192;
		case -1678578495:
			return 16384;
		case -1925540957:
			return 32768;
		case -2125161702:
			return 131072;
		case 1929486675:
			return 262144;
		case -1932005642:
			return 65536;
		case 315750675:
			return 524288;
		case -376594188:
			return -1;
		case -663436545:
			return 112;
		case 1042019528:
			return 1136;
		case -141044514:
			return 4208;
		case 884232794:
			return 8304;
		case 836721350:
			return 20480;
		case -1062102573:
			return 32833;
		case -884591393:
			return 96;
		case -1886898087:
			return 16496;
		case -1674046782:
			return 139376;
		case 1481630954:
			return 262256;
		case -366477279:
			return 0;
		default:
			break;
	}
	return 0;
}

void func_911(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_1365(uParam0->f_1[iVar0 /*3*/], 2))
		{
			iVar7 = func_880(iVar0, 1);
			if (func_878(iVar0, iParam1))
			{
				vVar4 = { func_902(iVar0, -1) };
				if ((vVar4.x != &Global_1946804->f_57[iVar0 /*11*/] && vVar4.x != 0) && (&uParam0->f_1[iVar0 /*3*/] != vVar4.x || (uParam0->f_1[iVar0 /*3*/])->f_1 != vVar4.y))
				{
					*(uParam0->f_1[iVar0 /*3*/]) = { vVar4 };
				}
				if (func_877(iVar7, 4))
				{
					func_867(iVar7, 4, 6);
				}
			}
			else
			{
				func_881(iVar7, 4, 6);
				Jump @201; //curOff = 167
				if (bParam2)
				{
					vVar1.x = &Global_1946804->f_57[iVar0 /*11*/];
					*(uParam0->f_1[iVar0 /*3*/]) = { vVar1 };
				}
			}
			iVar0++;
		}
	}

int func_912(int iParam0)
{
	int iVar0;
	var uVar1;

	Global_1946804->f_964.f_2 = 0;
	if (func_28() == -1)
	{
		iVar0 = -380731322;
	}
	else
	{
		iVar0 = 1226838104;
	}
	func_398(&(Global_1946804->f_964), iVar0, -367421157, 1409451727, 1, iParam0);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1946804->f_964));
	if (!DATAFILE::_0x44B3A36933AC009C(&uVar1, &(Global_1946804->f_964), 1409451727))
	{
		return 0;
	}
	return 1;
}

int func_913(var uParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return 1;
}

void func_914(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 12;
	iVar2 = func_469(&(uParam0->f_1[iParam2 /*3*/]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_878(iParam2, 65536) && &uParam0->f_1[iVar1 /*3*/] == -452402570)
	{
		uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
		(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
		if (bParam4)
		{
			func_1347(iVar1, iVar3);
		}
	}
	if (func_439(-1586649372) && func_878(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
		(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
		if (bParam4)
		{
			func_1347(iVar1, iVar3);
		}
	}
	switch (iVar2)
	{
		case 698653232:
			if (iParam1 == &Global_1946804->f_57[iParam2 /*11*/])
			{
				iVar1 = 12;
				if (&uParam0->f_1[iVar1 /*3*/] == 1516947474)
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_1347(iVar1, iVar3);
					}
				}
			}
			func_1369(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_1369(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
			iVar1 = 22;
			if (&uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
			{
			}
			else
			{
				iVar0 = 16;
				if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1155669136 || (uParam0->f_1[iVar0 /*3*/])->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_1347(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 525
				func_1369(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if ((uParam0->f_1[iVar1 /*3*/])->f_1 == 1155669136)
				{
					(uParam0->f_1[iVar1 /*3*/])->f_1 = -1539589426;
					if (bParam4)
					{
						func_1347(iVar1, iVar3);
					}
				}
				if ((uParam0->f_1[iVar1 /*3*/])->f_1 == 1530758430)
				{
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 1334603721;
					if (bParam4)
					{
						func_1347(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 656
				func_1369(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1170; //curOff = 691
				func_1369(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_1347(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 786
				func_1369(uParam0, (1 && bParam4), 0, 1, bParam3);
				Jump @1170; //curOff = 807
				if (iParam1 == &Global_1946804->f_57[iParam2 /*11*/])
				{
					iVar1 = 37;
					if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_1347(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_1347(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_469(&(uParam0->f_1[iVar1 /*3*/])))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_1347(iVar1, iVar3);
						}
					}
				}
				Jump @1170; //curOff = 1025
				iVar1 = 36;
				if (&uParam0->f_1[iParam2 /*3*/] != &Global_1946804->f_57[iParam2 /*11*/] && func_467(&(Global_1946804->f_1497.f_1[iVar1 /*3*/]), -1638171711))
				{
					uParam0->f_1[iParam2 /*3*/] = &Global_1946804->f_57[iParam2 /*11*/];
					(uParam0->f_1[iParam2 /*3*/])->f_1 = 0;
				}
				Jump @1170; //curOff = 1110
				iVar1 = 36;
				if (&uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iParam2 /*3*/] = &Global_1946804->f_57[iParam2 /*11*/];
					(uParam0->f_1[iParam2 /*3*/])->f_1 = 0;
				}
			}
			switch (func_469(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_469(&(uParam0->f_1[iVar1 /*3*/])))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_1347(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_469(&(uParam0->f_1[iVar1 /*3*/])) || func_467(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_1347(iVar1, iVar3);
						}
					}
					break;
			}
		}

void func_915(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_916(var uParam0, int iParam1)
{
	int iVar0;

	if (func_28() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		(Global_26795.f_26[iParam1 /*120*/])->f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_904(uParam0->f_1[iVar0 /*3*/], iVar0, iParam1);
			iVar0++;
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	(Global_36637.f_45.f_350.f_26[iParam1 /*120*/])->f_1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		func_1370(uParam0->f_1[iVar0 /*3*/], iVar0, iParam1);
		iVar0++;
	}
}

void func_917(int iParam0, int iParam1, int iParam2)
{
	if (func_28() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			Global_26795.f_26[iParam1 /*120*/] = (Global_26795.f_26[iParam1 /*120*/] || iParam0);
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		Global_36637.f_45.f_350.f_26[iParam1 /*120*/] = (Global_36637.f_45.f_350.f_26[iParam1 /*120*/] || iParam0);
	}
}

int func_918(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;

	iVar0 = 0;
	if (iParam0 == 0)
	{
		return 0;
	}
	func_403();
	if (!func_404(&(Global_1946804->f_1378), &iVar0, iParam0, -1, 0, 1))
	{
		return 0;
	}
	if (iParam2 == -1)
	{
		iParam2 = &Global_40.f_7731[0 /*5*/];
	}
	if (iParam3 == -1)
	{
		iParam3 = &Global_40.f_7731[1 /*5*/];
	}
	if (iParam4 == -1)
	{
		iParam4 = &Global_40.f_7731[2 /*5*/];
	}
	func_1367(iParam2, iParam3, iParam4);
	if ((iParam2 == 0 && iParam3 == 0) && iParam4 == 0)
	{
		func_1371(iParam1, -7657935, -1889597427, 1, 1, 0);
	}
	else
	{
		func_1371(iParam1, 1155669136, -1889597427, 1, 1, 0);
	}
	if (bParam5)
	{
		if (PED::IS_PED_A_PLAYER(iParam1))
		{
			func_407(1, 96, 0, 0, 0);
		}
		else
		{
			func_407(1, 96, 1, iParam1, 0);
		}
	}
	func_865(1);
	return 1;
}

void func_919()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	func_865(0);
	func_1372(0, Global_1946804->f_2653, 0);
	func_1372(1, Global_1946804->f_2654, 0);
	func_1372(2, Global_1946804->f_2655, 0);
	iVar0 = 5;
	iVar1 = 6;
	iVar2 = 7;
	iVar3 = 0;
	*(Global_1946804->f_1497.f_1[iVar0 /*3*/]) = { *(Global_1946804->f_1378.f_1[iVar0 /*3*/]) };
	*(Global_1946804->f_1497.f_1[iVar1 /*3*/]) = { *(Global_1946804->f_1378.f_1[iVar1 /*3*/]) };
	*(Global_1946804->f_1497.f_1[iVar2 /*3*/]) = { *(Global_1946804->f_1378.f_1[iVar2 /*3*/]) };
	*(Global_1946804->f_1497.f_1[iVar3 /*3*/]) = { *(Global_1946804->f_1378.f_1[iVar3 /*3*/]) };
	func_1373();
	func_1374();
}

int func_920()
{
	if (func_145() == 1160113249)
	{
		return -2091943191;
	}
	return 933586678;
}

int func_921(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_932(iParam0, 0, 1, 1, 1))
	{
		return 0;
	}
	if (iParam2 == -1)
	{
		iParam2 = Global_40.f_7748.f_1;
	}
	func_1368(iParam2);
	if (bParam3)
	{
		if (PED::IS_PED_A_PLAYER(iParam1))
		{
			func_407(1, 64, 0, 0, 0);
		}
		else
		{
			func_407(1, 64, 1, iParam1, 0);
		}
	}
	func_865(1);
	return 1;
}

void func_922()
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = &Global_1946804->f_1378.f_1[iVar0 /*3*/];
	if (!func_1375() && func_1376(iVar1))
	{
		Global_1946804->f_1378.f_1[iVar0 /*3*/] = func_1377(iVar1);
	}
	func_865(0);
	*(Global_1946804->f_1497.f_1[iVar0 /*3*/]) = { *(Global_1946804->f_1378.f_1[iVar0 /*3*/]) };
	func_1378();
	Global_40.f_7748.f_2 = func_1379();
	func_1380(Global_1946804->f_2656, 0);
	func_1381();
}

void func_923(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<14> Var2;

	Var2 = -1;
	Var2.f_1 = -1;
	Var2.f_2 = -1;
	Var2.f_3 = -1;
	Var2.f_4 = -1;
	Var2.f_5 = -1;
	Var2.f_6 = -1;
	Var2.f_7 = -1;
	Var2.f_8 = -1;
	Var2.f_13 = -1;
	Var2 = { func_1382(0, -1591664384, -1591664384, -1591664384, 0, iParam0) };
	if (func_1383(&Var2, &iVar0, &iVar1, 0))
	{
		if (iVar1 > 0)
		{
			switch (iParam0)
			{
				case 352481484:
					Global_1946804->f_2657.f_26.f_2 = 5;
					Global_1946804->f_2657.f_26.f_1 = 5;
					Global_1946804->f_2657.f_26 = 5;
					break;
			}
		}
		func_393(iVar0);
	}
}

void func_924(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	func_1384(iParam2, *uParam0);
	func_1385(uParam0->f_1[*uParam0 /*5*/], iParam1, -1, 1, 0);
	*uParam0++;
}

int func_925(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_930(iParam0, 0, 0) };
	Var5 = { func_883(iParam0, Var0, Var0.f_4, 0) };
	if (func_884(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x9A113C660AEA3832(func_860(0), &Var5, iParam1);
	return 1;
}

void func_926(int iParam0, bool bParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_930(iParam0, 0, 0) };
	Var5 = { func_883(iParam0, Var0, Var0.f_4, 0) };
	if (func_884(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_0x65A5F70F4A292EBE(func_860(0), &Var5, bParam1);
}

void func_927(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

int func_928(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return 0;
	}
	if (func_1386(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_1387(iParam0))
	{
		return 0;
	}
	if (func_1388(iParam0))
	{
		return 0;
	}
	if ((Global_1898164->f_163 && !func_1008(iParam0, 1)) || func_17(32768))
	{
		if (!func_1008(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return 0;
		}
	}
	if (!func_1389())
	{
		return 0;
	}
	return 1;
}

void func_929(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

struct<5> func_930(int iParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;

	Var0 = { func_882(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_466(iParam0))
	{
		case -1037537535:
			if (!INVENTORY::_0x780C5B9AE2819807(iParam0, 1034665895))
			{
				Var0 = { func_883(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_1390(bParam1) };
			if (iParam2 && func_1391(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_970(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_970(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_971(iParam0, &Var5, 1728382685))
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
			Var0 = { func_1392(bParam1) };
			switch (func_469(iParam0))
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
			if (func_1393(iParam0, -1823706425))
			{
				Var0 = { func_883(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, -1838434463);
			}
			else if (func_1393(iParam0, -1483207246))
			{
				Var0 = { func_883(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_1353(Var0, &Var27, bParam1, 0))
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

int func_931(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if ((Global_1946804->f_57[iVar0 /*11*/])->f_8 == iParam0)
		{
			return func_880(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_932(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	func_403();
	if (iParam2 == 39)
	{
		Var0 = { func_930(iParam0, 1, 0) };
		iParam2 = func_901(func_931(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return 0;
	}
	if (func_467(iParam0, 866047851) && func_1394(&(Global_1946804->f_1378)) >= 2)
	{
		return 0;
	}
	if ((func_399(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2 /*11*/])
	{
		func_862(func_880(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_1395(iParam2);
	func_1347(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2 /*3*/] != &Global_1946804->f_57[iParam2 /*11*/] && (Global_1946804->f_57[iParam2 /*11*/])->f_1 > 1)
	{
		func_915(Global_1946804->f_1378.f_1[iParam2 /*3*/], 4, 6);
		func_915(Global_1946804->f_1497.f_1[iParam2 /*3*/], 4, 6);
	}
	func_914(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = (Global_1946804->f_1378.f_1[iParam2 /*3*/])->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2 /*3*/] = iParam0;
	(Global_1946804->f_1378.f_1[iParam2 /*3*/])->f_1 = func_1396(iParam0, iParam2, iParam1, func_28() != -1);
	if (bParam4)
	{
		func_864(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_864(&(Global_1946804->f_1378), 1, 0);
	}
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1946804->f_2589)
		{
			if (&Global_1946804->f_2589.f_2[iVar6 /*2*/] >= 0 && &Global_1946804->f_2589.f_2[iVar6 /*2*/] < 39)
			{
				Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar6 /*2*/] /*2*/] = 0;
				(Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar6 /*2*/] /*2*/])->f_1 = 0;
				func_867(func_880(&(Global_1946804->f_2589.f_2[iVar6 /*2*/]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return 1;
}

void func_933(bool bParam0, bool bParam1, bool bParam2)
{
	func_1397(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

int func_934(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_901(iParam0, 1);
	switch (iParam0)
	{
		case 1108822547:
			if (&Global_1946804->f_1497.f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/] || &Global_1946804->f_1378.f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
			{
				iVar0 = 48;
			}
			break;
	}
	return iVar0;
}

void func_935(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;

	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_875(Var0);
}

void func_936()
{
	int iVar0;
	struct<4> Var30;

	if (!INVENTORY::_0x7C7E4AB748EA3B07())
	{
		return;
	}
	iVar0 = 29;
	func_1398(Global_35, &iVar0);
	Var30 = { func_882(0) };
	INVENTORY::_0xE36D4A38D28D9CFB(0);
	INVENTORY::_0xC04F47D488EF9EBA(5, 1, &Var30, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	func_141(0);
	func_427(7);
	func_1399(-1623728698, 1, 1, 0);
	if (func_145() == 1160113249)
	{
		func_1399(-763730846, 1, 1, 1);
		func_1399(-361635024, 1, 1, 1);
	}
	func_1400(Global_35, &iVar0);
}

int func_937()
{
	return func_1401();
}

void func_938(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_860(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_469(iVar1) == iParam0)
		{
			INVENTORY::_0x6A564540FAC12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_1403(func_1402(iParam0), 6);
}

int func_939(int iParam0)
{
	if (!func_67(iParam0))
	{
		return 0;
	}
	switch (func_91(iParam0))
	{
		case 1:
			switch (func_251(iParam0))
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
			switch (func_251(iParam0))
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

void func_940(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_860(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_469(iVar1) == iParam0)
		{
			INVENTORY::_0x766315A564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_1404(func_1402(iParam0), 6);
}

float func_941()
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

	if (func_1405())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_193(2);
	}
	if (Global_1347477->f_119)
	{
		return func_193(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_1406();
	fVar2 = func_1407();
	fVar3 = func_1408();
	fVar4 = func_1409();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1410()));
	fVar7 = (func_193(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1411(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1412(3, fVar9, fVar9 > 100f);
	return func_1413(fVar7, -100f, 100f);
}

float func_942()
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

	if (func_1405())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_193(1);
	}
	if (Global_1347477->f_119)
	{
		return func_193(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_1406();
	fVar2 = func_1407();
	fVar3 = func_1408();
	fVar4 = func_1409();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1410()));
	fVar7 = (func_193(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1411(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1412(2, fVar9, fVar9 > 100f);
	return func_1413(fVar7, -100f, 100f);
}

float func_943()
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

	if (func_1405())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_193(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_1414())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_1415())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_193(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_1406();
	fVar2 = func_1407();
	fVar3 = func_1408();
	fVar4 = func_1409();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1410()));
	fVar7 = (func_193(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1411(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1412(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && PLAYER::_0x0317C947D062854E(PLAYER::PLAYER_ID()) < 1f)
	{
		return func_193(0);
	}
	return func_1413(fVar7, -100f, 100f);
}

bool func_944(int iParam0)
{
	return func_466(iParam0) == -427144552;
}

int func_945(int iParam0)
{
	var uVar0;

	if (func_28() != -1)
	{
		return 0;
	}
	if (func_468(iParam0, 1048576))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return func_950(iParam0, &uVar0, 1, 0, 0);
	}
	return func_162(iParam0, 1, 0);
}

void func_946(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4)
{
	int iVar0;

	if (func_466(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_471(iParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return;
	}
	if (iParam2 || !func_968(iVar0))
	{
		if (func_28() == -1)
		{
			func_153(iVar0);
		}
		if (iParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, 0) && func_452(iParam0, 0, 0) == 0))
		{
			if (!*uParam3 && !iParam4 == 1248274121)
			{
				func_521(iParam0, iParam1, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*uParam3 = 1;
			}
		}
	}
}

void func_947(int iParam0, var uParam1)
{
	int iVar0;

	if (func_467(iParam0, 58855631))
	{
		func_1416(iParam0, -915411861, &iVar0, 1);
		*uParam1 = (*uParam1 * iVar0);
	}
}

int func_948(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_38(iParam0, 0))
	{
		return 0;
	}
	if (!func_472(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_0xE80E50BEE276A54A(iParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_860(bParam3), iParam0);
}

int func_949(int iParam0, bool bParam1)
{
	if (func_476(iParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_860(bParam1), iParam0, 0);
}

int func_950(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<4> Var0;
	struct<10> Var4;
	var uVar26;
	int iVar27;
	int iVar28;

	func_1417(&iParam0);
	if (!func_38(iParam0, 0))
	{
		return 0;
	}
	if (!func_472(0))
	{
		bParam3 = true;
	}
	if (func_944(iParam0) && WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
		{
			Var0 = { func_1390(0) };
			Var4.f_9 = -1591664384;
			if (!func_970(iParam0, &Var0, 1728382685, 0))
			{
				return 0;
			}
			else if (func_971(iParam0, &Var4, 1728382685))
			{
				return 0;
			}
			if (func_1391(iParam0, 1))
			{
				if (!func_970(iParam0, &Var0, -649335959, 0))
				{
					return 0;
				}
				else if (func_971(iParam0, &Var4, -649335959))
				{
					return 0;
				}
			}
		}
		else if (!func_1418(iParam0, &uVar26, 0))
		{
			return 0;
		}
		return 1;
	}
	iVar27 = func_948(iParam0, uParam1, bParam3, bParam4);
	if (iVar27 < 0)
	{
		return 0;
	}
	else if (iVar27 == 0)
	{
		return 1;
	}
	if (bParam3)
	{
		iVar28 = func_884(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = INVENTORY::_0xE787F05DFC977BDE(func_860(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return 1;
	}
	return 0;
}

int func_951(int iParam0, int iParam1)
{
	struct<2> Var0[20];
	int iVar41;
	int iVar42;

	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_TAG_DATA(iParam0, &Var0, &iVar41, 20))
	{
		iVar42 = 0;
		while (iVar42 < iVar41)
		{
			if ((Var0[iVar42 /*2*/])->f_1 == iParam1)
			{
				return &(Var0[iVar42 /*2*/]);
			}
			iVar42++;
		}
	}
	return 0;
}

int func_952(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_38(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_466(iParam0);
	if (iVar0 == -427144552 && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_0x5C2EA6C44F515F34(iParam0);
	}
	else if (iVar0 == 307971639 && WEAPON::_0x1F7977C9101F807F(iParam0))
	{
		return iParam0;
	}
	if (func_467(iParam0, 1399091007))
	{
		func_1007(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_953(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_1382(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_1419(&Var0, func_1390(0));
	}
	if (!func_1383(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_393(iVar14);
	return uVar15;
}

int func_954()
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 0);
}

int func_955(int iParam0)
{
	return COLLECTION::_0xEC3959E9950BF56B(iParam0);
}

void func_956(int iParam0)
{
	int iVar0;
	float fVar1;

	if (func_28() != -1)
	{
		return;
	}
	iVar0 = func_1420(iParam0);
	fVar1 = func_1421(iParam0);
	if ((Global_1347477->f_117 || !func_125(31)) || !func_1422(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_1423(iVar0) >= 7)
	{
		return;
	}
	if (iVar0 == 1)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_57));
	}
	else if (iVar0 == 0)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_55));
	}
	else if (iVar0 == 2)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_56));
	}
	fVar1 = (fVar1 * IntToFloat(Global_1347477->f_182));
	fVar1 = BUILTIN::TO_FLOAT(BUILTIN::ROUND(fVar1));
	func_1424(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_1020(MISC::_CREATE_VAR_STRING(6, func_1425(iParam0), fVar1), "itemtype_textures", func_1426(iVar0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

int func_957(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 554799588;
		case 1:
			return -1021394391;
		case 2:
			return -987306668;
		case 3:
			return -1028735103;
		case 4:
			return 515229791;
		case 5:
			return -1230863414;
		case 6:
			return 232875659;
		case 7:
			return 1423129537;
		case 8:
			return -435742319;
		case 9:
			return -1854702679;
		case 10:
			return 1265323898;
		case 11:
			return -479775696;
		default:
			break;
	}
	return 0;
}

int func_958(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;

	if (!func_1026(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_INT(&uVar5, &Var0);
	return uVar5;
}

char* func_959(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
{
	switch (iParam1)
	{
		case -2076669067:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_CC_COMPLETE";
			}
			else if (func_462() >= 12)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", func_1427(), 12);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_1428(), 12);
			}
			break;
		case -440187297:
			if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_DB_COMPLETE";
			}
			else if (func_991() >= 30)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_POSTED_OBJ", func_1429(), 30);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_FOUND_OBJ", func_991(), 30);
			}
			break;
		case -1531394072:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_EX_COMPLETE";
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_EX_ITEMS_COLLECTED_OBJ", sParam4, sParam5);
			}
			break;
		case 1995362678:
			if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_LF_COMPLETE";
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_CAUGHT_OBJ", func_1430(), 13);
			}
			break;
		case 2103522376:
			if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_RC_COMPLETE";
			}
			else if (func_992() >= 10)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_POSTED_OBJ", func_1431(), 10);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_FOUND_OBJ", func_992(), 10);
			}
			break;
		case 678508515:
			if (iParam2 == 3)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 4)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_READ_VACATION");
			}
			else if (iParam2 == 5)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_ON_VACATION");
			}
			else if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_RETURN_POST_OFFICE";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_TX_COMPLETE";
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_958(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

int func_960(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -2076669067)
	{
		if (iParam1 == 38816757)
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, 578982838))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, 578982838);
			}
		}
	}
	else if (iParam2 == -440187297)
	{
		if (iParam1 == -1223580455)
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, 349797279))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, 349797279);
			}
		}
	}
	else if (iParam2 == 2103522376)
	{
		if (iParam1 == -170865073)
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, 1974744712))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, 1974744712);
			}
		}
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_REMOVE_ENTRY(3, iParam1);
	}
	return 1;
}

int func_961(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);
	}
	return 1;
}

int func_962(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(sParam2), sParam2, 0, 0, 0);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iParam1, 1);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iParam1, iParam6, iParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iParam1, MISC::_CREATE_VAR_STRING(2, sParam3));
	return 1;
}

int func_963(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_1432(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_162(iVar2, 1, 0) || func_1434(func_1433(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_967(func_1432(iVar0))), func_967(func_1432(iVar0)), bVar1, 1, 0);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_991() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1435(iVar0)), func_1435(iVar0), bVar1, 1, 0);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1429() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1435(iVar0)), func_1435(iVar0), bVar1, 1, 0);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1435(iVar0)), func_1435(iVar0), bVar1, 1, 0);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_1000(iParam3, func_1436(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_996(iVar2) - iParam7) >= func_958(iParam3, func_1437(iVar0));
				}
				else
				{
					bVar1 = func_996(iVar2) >= func_958(iParam3, func_1437(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_996(iVar2) + iParam7) >= func_958(iParam3, func_1437(iVar0));
			}
			else
			{
				bVar1 = func_996(iVar2) >= func_958(iParam3, func_1437(iVar0));
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1438(iVar2)), func_1438(iVar2), bVar1, 1, 0);
		}
		if (iParam2 == 1995362678)
		{
			if (func_1439(COLLECTION::_0x126CBEBBA46693CF(iVar0, 1995362678, 0)))
			{
				bVar1 = true;
			}
			else if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = false;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1440(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0))), func_1440(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0)), bVar1, 1, 0);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_992() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1441(iVar0)), func_1441(iVar0), bVar1, 1, 0);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1431() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1441(iVar0)), func_1441(iVar0), bVar1, 1, 0);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1441(iVar0)), func_1441(iVar0), bVar1, 1, 0);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_1000(iParam3, func_1436(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_996(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_1157(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_1157(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1442(iVar2)), func_1442(iVar2), bVar1, 1, 0);
		}
		iVar0++;
	}
	return 1;
}

int func_964(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = 0;
	if (iParam3 == 8)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	if (iParam2 == -2076669067)
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_CC_ITEMS_DELIVERED"), "COL_CC_ITEMS_DELIVERED", iVar0, 1, 0);
	}
	if (iParam2 == -1531394072)
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_EX_ITEMS_DELIVERED"), "COL_EX_ITEMS_DELIVERED", iVar0, 1, 0);
	}
	if (iParam2 == 1995362678)
	{
		if (func_1430() >= 13)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 0;
		}
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_LF_ITEMS_DELIVERED"), "COL_LF_ITEMS_DELIVERED", iVar0, 1, 0);
	}
	if (((((((iParam3 == 7 || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 0) || iParam3 == 1) || iParam3 == 2) || iParam3 == 8)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	if (iParam2 == 678508515)
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_TX_CARCASSES_MAILED"), "COL_TX_CARCASSES_MAILED", iVar0, 1, 0);
	}
	return 1;
}

int func_965(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_67(func_761(0)) && ((func_766(0) == 1 || func_766(0) == 8) || func_766(0) == 6))
	{
		iParam3 = 7;
	}
	if ((iParam2 == -440187297 || iParam2 == 1995362678) || iParam2 == 2103522376)
	{
		if (iParam3 == 7)
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(3, iParam1, 1, "");
		}
	}
	else if (iParam2 == 678508515)
	{
		if (iParam3 == 7)
		{
			if (bParam4)
			{
			}
			else
			{
				UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(3, iParam1, 1, "");
			}
		}
	}
	return 1;
}

var func_966(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = _NAMESPACE71::_0x26E87218390E6729(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

char* func_967(int iParam0)
{
	switch (iParam0)
	{
		case 554799588:
			return "COL_CC_GUN_SET";
		case -1021394391:
			return "COL_CC_ART_SET";
		case -987306668:
			return "COL_CC_LND_SET";
		case -1028735103:
			return "COL_CC_GRL_SET";
		case 515229791:
			return "COL_CC_PLT_SET";
		case -1230863414:
			return "COL_CC_ACT_SET";
		case 232875659:
			return "COL_CC_AML_SET";
		case 1423129537:
			return "COL_CC_VEH_SET";
		case -435742319:
			return "COL_CC_SPT_SET";
		case -1854702679:
			return "COL_CC_INV_SET";
		case 1265323898:
			return "COL_CC_HOR_SET";
		case -479775696:
			return "COL_CC_PAM_SET";
		default:
			break;
	}
	return "";
}

int func_968(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_0x865F36299079FB75(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_969(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1782082944;
		case 1:
			return 1704602624;
		case 2:
			return 1214181762;
		case 3:
			return -430578371;
		case 4:
			return -730381952;
		case 5:
			return -253503777;
		case 6:
			return 1352275534;
		case 7:
			return 1666399168;
		case 8:
			return -1911121386;
		case 9:
			return 1756656691;
		case 10:
			return -1774867076;
		case 11:
			return -421952220;
		case 12:
			return -1087003323;
		case 13:
			return 1231618917;
		case 14:
			return -1183777174;
		case 15:
			return -841767082;
		case 16:
			return 1043717005;
		case 17:
			return 142663787;
		case 18:
			return 1718143051;
		case 19:
			return -6605744;
		case 20:
			return 953047564;
		case 21:
			return 769706682;
		case 22:
			return 1635590003;
		case 23:
			return -2047978619;
		case 24:
			return -586319254;
		case 25:
			return 249896112;
		case 26:
			return -1060513333;
		case 27:
			return 1317351007;
		case 28:
			return -500478573;
		case 29:
			return -806573802;
		case 30:
			return -1109949204;
		case 31:
			return -740156546;
		case 32:
			return -684532710;
		case 33:
			return 1158805436;
		case 34:
			return -559473670;
		case 35:
			return -797147251;
		case 36:
			return -382216265;
		case 37:
			return 1419177114;
		case 38:
			return 1704297235;
		case 39:
			return -1139016418;
		case 40:
			return 897705377;
		case 41:
			return 17961769;
		case 42:
			return 205582207;
		case 43:
			return 900740963;
		case 44:
			return -1369589344;
		case 45:
			return -1695823795;
		case 46:
			return -41453074;
		case 47:
			return 539767227;
		case 48:
			return 1210490314;
		case 49:
			return -399684751;
		case 50:
			return 2138893455;
		case 51:
			return -1617010487;
		case 52:
			return -832377028;
		case 53:
			return -428040245;
		case 54:
			return 1279288897;
		case 55:
			return -594897905;
		case 56:
			return -1360459240;
		case 57:
			return 1838428396;
		case 58:
			return -1467846997;
		case 59:
			return -490610263;
		case 60:
			return -1885413079;
		case 61:
			return 708884155;
		case 62:
			return -134459952;
		case 63:
			return -1912136700;
		case 64:
			return -1268031552;
		case 65:
			return 1177953227;
		case 66:
			return 2130805296;
		case 67:
			return 38093490;
		case 68:
			return -269153218;
		case 69:
			return -1995068011;
		case 70:
			return -164284834;
		case 71:
			return 1446463345;
		case 72:
			return 1501315823;
		case 73:
			return -750379482;
		case 74:
			return -929560937;
		case 75:
			return 608323241;
		case 76:
			return 1030796013;
		case 77:
			return 1915057434;
		case 78:
			return -1582276476;
		case 79:
			return 692059311;
		case 80:
			return 2062839241;
		case 81:
			return -1884531872;
		case 82:
			return -866434534;
		case 83:
			return -1252192421;
		case 84:
			return 1243288963;
		case 85:
			return -1953772189;
		case 86:
			return 754411745;
		case 87:
			return 545309006;
		case 88:
			return -1089810811;
		case 89:
			return 1957869400;
		case 90:
			return -241412332;
		case 91:
			return -1548010959;
		case 92:
			return 550150488;
		case 93:
			return 946565453;
		case 94:
			return 434443248;
		case 95:
			return -1709914938;
		case 96:
			return 366686112;
		case 97:
			return -1370063350;
		case 98:
			return 2126829550;
		case 99:
			return 226552910;
		case 100:
			return 721193431;
		case 101:
			return -315672460;
		case 102:
			return 623544501;
		case 103:
			return 259556714;
		case 104:
			return -2125361825;
		case 105:
			return 1078230356;
		case 106:
			return 1885364811;
		case 107:
			return 1630382737;
		case 108:
			return 1738245512;
		case 109:
			return 1540262216;
		case 110:
			return 1016871472;
		case 111:
			return 13829069;
		case 112:
			return 737051352;
		case 113:
			return 1734614610;
		case 114:
			return -208715295;
		case 115:
			return 1435062936;
		case 116:
			return 1483055553;
		case 117:
			return 380335002;
		case 118:
			return -1079385677;
		case 119:
			return 676610411;
		case 120:
			return 2145419552;
		case 121:
			return 657238733;
		case 122:
			return 1850579281;
		case 123:
			return -1923957384;
		case 124:
			return -1142828108;
		case 125:
			return -1400618531;
		case 126:
			return -1433857135;
		case 127:
			return 209987206;
		case 128:
			return 1686943047;
		case 129:
			return -59178517;
		case 130:
			return 2134884601;
		case 131:
			return 651707517;
		case 132:
			return -633788535;
		case 133:
			return 116394463;
		case 134:
			return -1196973875;
		case 135:
			return 801752086;
		case 136:
			return 184475332;
		case 137:
			return -1880922659;
		case 138:
			return -898138634;
		case 139:
			return -2107418444;
		case 140:
			return -679970099;
		case 141:
			return -1531392549;
		case 142:
			return 1612483376;
		case 143:
			return 463930900;
		case 144:
			return -632148238;
		case 145:
			return 55303249;
		case 146:
			return 2108322089;
		case 147:
			return -1358896714;
		case 148:
			return 74475632;
		case 149:
			return -28710953;
		case 150:
			return -1791599168;
		case 151:
			return 1605938169;
		case 152:
			return 1255242276;
		case 153:
			return 636467727;
		case 154:
			return -1567688525;
		case 155:
			return -77886679;
		case 156:
			return -1057900679;
		case 157:
			return -1960888134;
		case 158:
			return -1719717295;
		case 159:
			return -1779244911;
		case 160:
			return -670540863;
		case 161:
			return 223362311;
		case 162:
			return 1150824567;
		case 163:
			return 974471191;
		case 164:
			return 1989683968;
		case 165:
			return 254804477;
		case 166:
			return 192057609;
		case 167:
			return 1553957817;
		case 168:
			return 2099829015;
		case 169:
			return -840300007;
		case 170:
			return -1948423372;
		case 171:
			return 981083654;
		case 172:
			return 1283289876;
		case 173:
			return -606884489;
		case 174:
			return -100418572;
		case 175:
			return 663645231;
		case 176:
			return 1442217033;
		case 177:
			return 1410986244;
		case 178:
			return 847409839;
		case 179:
			return 923926911;
		case 180:
			return 109995826;
		case 181:
			return -747412737;
		case 182:
			return 1114341727;
		case 183:
			return -539456939;
		case 184:
			return 45887121;
		case 185:
			return 913271624;
		case 186:
			return -1652812715;
		case 187:
			return -1791365775;
		case 188:
			return -979299941;
		case 189:
			return 713062001;
		case 190:
			return -575045963;
		case 191:
			return 1852965262;
		case 192:
			return -1398836354;
		case 193:
			return -1829885298;
		case 194:
			return -1773850357;
		case 195:
			return -564258009;
		case 196:
			return 2016532685;
		case 197:
			return -1070563798;
		case 198:
			return -1619221343;
		case 199:
			return -345571691;
		case 200:
			return 544288390;
		case 201:
			return 159578294;
		case 202:
			return -76852849;
		case 203:
			return 1110295244;
		case 204:
			return 2104563477;
		case 205:
			return 1947827651;
		case 206:
			return -933072766;
		case 207:
			return 2104388648;
		case 208:
			return -1677140601;
		case 209:
			return -2133097881;
		case 210:
			return -826678792;
		case 211:
			return -513522325;
		case 212:
			return 1970588249;
		case 213:
			return -2080032591;
		case 214:
			return 1758847745;
		case 215:
			return 895010282;
		case 216:
			return 1786352060;
		case 217:
			return -833319691;
		case 218:
			return 1591329969;
		case 219:
			return 2123222014;
		case 220:
			return -1578397674;
		case 221:
			return 1473261684;
		case 222:
			return -241855024;
		case 223:
			return 12999093;
		case 224:
			return -6796437;
		case 225:
			return -268116367;
		case 226:
			return -636470867;
		case 227:
			return 1737668280;
		case 228:
			return 892807236;
		case 229:
			return -733247890;
		case 230:
			return 24047176;
		case 231:
			return -1561999014;
		case 232:
			return -2052774042;
		case 233:
			return -997150586;
		case 234:
			return -1189569496;
		case 235:
			return 46488141;
		case 236:
			return 1046566686;
		case 237:
			return 325139909;
		case 238:
			return -1585141069;
		case 239:
			return 802754820;
		case 240:
			return 1415981582;
		case 241:
			return -1886147520;
		case 242:
			return 654877947;
		case 243:
			return -415648720;
		case 244:
			return 1221327846;
		case 245:
			return 923162715;
		case 246:
			return 625423581;
		case 247:
			return 326668608;
		case 248:
			return 669530755;
		case 249:
			return 429759982;
		case 250:
			return -2111934838;
		case 251:
			return 1886178087;
		case 252:
			return 1587783573;
		case 253:
			return -279722001;
		case 254:
			return 1310070322;
		case 255:
			return 724026534;
		case 256:
			return 137387616;
		case 257:
			return -653439684;
		case 258:
			return 1376835592;
		case 259:
			return -1824203570;
		case 260:
			return -1654197998;
		case 261:
			return 798987653;
		case 262:
			return 976923323;
		case 263:
			return 1167442289;
		case 264:
			return 986998820;
		case 265:
			return -2119169513;
		case 266:
			return -2015960939;
		case 267:
			return -1287636759;
		case 268:
			return -706917073;
		case 269:
			return -2166805;
		case 270:
			return -1391602433;
		case 271:
			return 1782075221;
		case 272:
			return 1282544585;
		case 273:
			return 1732594027;
		case 274:
			return -1058817012;
		case 275:
			return 1090546265;
		case 276:
			return -1783120823;
		case 277:
			return -1535745896;
		case 278:
			return -2086922122;
		case 279:
			return -1675198649;
		case 280:
			return 1189497682;
		case 281:
			return -1565675519;
		case 282:
			return -268973591;
		case 283:
			return 1039159916;
		case 284:
			return 1111816631;
		case 285:
			return 405591388;
		case 286:
			return 897456793;
		case 287:
			return 104187473;
		case 288:
			return 773808542;
		case 289:
			return -1120669954;
		case 290:
			return -1389278274;
		case 291:
			return 552979403;
		case 292:
			return -1571578784;
		case 293:
			return -708312114;
		case 294:
			return 688823508;
		case 295:
			return -1622147240;
		case 296:
			return 830292162;
		case 297:
			return 226276782;
		case 298:
			return -678416628;
		case 299:
			return -1098528034;
		case 300:
			return 316207340;
		case 301:
			return -1909200748;
		case 302:
			return -939652363;
		case 303:
			return -1990194462;
		case 304:
			return -375447933;
		case 305:
			return 537014919;
		case 306:
			return 1784584921;
		case 307:
			return 1084182731;
		case 308:
			return -1045471300;
		case 309:
			return 1617414719;
		case 310:
			return -787761753;
		case 311:
			return -490616606;
		case 312:
			return 1491346514;
		case 313:
			return -1311702610;
		case 314:
			return -904250715;
		case 315:
			return 1034665895;
		case 316:
			return -101524555;
		case 317:
			return 1419152594;
		case 318:
			return -451359317;
		case 319:
			return -1915385310;
		case 320:
			return 1315162488;
		case 321:
			return -361152079;
		case 322:
			return -2041626192;
		case 323:
			return -2077812539;
		case 324:
			return -1371514637;
		case 325:
			return 1730017037;
		case 326:
			return 892816668;
		case 327:
			return -1994943603;
		case 328:
			return 603133554;
		case 329:
			return -30160144;
		case 330:
			return -1248299493;
		case 331:
			return 727393558;
		case 332:
			return 755611221;
		case 333:
			return -170255458;
		case 334:
			return 1011151573;
		case 335:
			return 1122339631;
		case 336:
			return 454815308;
		case 337:
			return 990701735;
		case 338:
			return -246340825;
		case 339:
			return -1410671073;
		case 340:
			return 1547608292;
		case 341:
			return -714132970;
		case 342:
			return 732290690;
		case 343:
			return 971340545;
		case 344:
			return -234132662;
		case 345:
			return -2143057988;
		case 346:
			return -993947465;
		case 347:
			return -486552269;
		case 348:
			return -1156317860;
		case 349:
			return 1229625803;
		case 350:
			return -388596167;
		case 351:
			return -1204639465;
		case 352:
			return -1384685096;
		case 353:
			return -2026728113;
		case 354:
			return -1228057307;
		case 355:
			return 1835126290;
		case 356:
			return 1890833594;
		case 357:
			return -751549960;
		case 358:
			return -1682270750;
		case 359:
			return -1839865333;
		case 360:
			return -1990383629;
		case 361:
			return 1712094016;
		case 362:
			return 1532953697;
		case 363:
			return 1620318083;
		case 364:
			return -307230331;
		case 365:
			return -1034549620;
		case 366:
			return -1293064293;
		case 367:
			return -1540142553;
		case 368:
			return -1769886012;
		case 369:
			return -1983081126;
		case 370:
			return -1106117124;
		case 371:
			return -1873108338;
		case 372:
			return -2097543219;
		case 373:
			return 155413195;
		case 374:
			return -1162387149;
		case 375:
			return 1728382685;
		case 376:
			return -649335959;
		case 377:
			return -1876502240;
		case 378:
			return -2107032155;
		case 379:
			return 619103418;
		case 380:
			return 1355448197;
		case 381:
			return 1681762005;
		case 382:
			return 1026887814;
		case 383:
			return 354352628;
		case 384:
			return 1519366642;
		case 385:
			return -82757515;
		case 386:
			return 386306655;
		case 387:
			return 1243962119;
		case 388:
			return 756214903;
		case 389:
			return -718417579;
		case 390:
			return -1445516411;
		case 391:
			return -672392892;
		case 392:
			return 1465341584;
		case 393:
			return -427758369;
		case 394:
			return -735647142;
		case 395:
			return 1535838048;
		case 396:
			return -602272282;
		case 397:
			return 2051264661;
		case 398:
			return 487172188;
		case 399:
			return 282270687;
		case 400:
			return 1607708943;
		case 401:
			return 1686264939;
		case 402:
			return 314786149;
		case 403:
			return 1402841185;
		case 404:
			return 1099170772;
		case 405:
			return 2125676786;
		case 406:
			return -363896735;
		case 407:
			return -468790222;
		case 408:
			return -1779133048;
		case 409:
			return 1732537631;
		case 410:
			return 1755095401;
		case 411:
			return 835771095;
		case 412:
			return 1963317232;
		case 413:
			return 259627919;
		case 414:
			return 1299075397;
		case 415:
			return -1509094230;
		case 416:
			return 61132362;
		case 417:
			return 1549741908;
		case 418:
			return 288484254;
		case 419:
			return -1877032947;
		case 420:
			return -1395676456;
		case 421:
			return 1136146715;
		case 422:
			return 468034421;
		case 423:
			return 1079459546;
		case 424:
			return -140369351;
		case 425:
			return 1822341990;
		case 426:
			return 1219701681;
		case 427:
			return 1601295268;
		case 428:
			return -1692460667;
		case 429:
			return 1471419228;
		case 430:
			return 907446160;
		case 431:
			return -1126482585;
		case 432:
			return 1911050315;
		case 433:
			return -1343525599;
		case 434:
			return 1261891225;
		case 435:
			return 763162704;
		case 436:
			return 1335861197;
		case 437:
			return 526744654;
		case 438:
			return -1177461517;
		case 439:
			return -241638635;
		case 440:
			return 1024262875;
		case 441:
			return 853355463;
		case 442:
			return -337288221;
		case 443:
			return 361381308;
		case 444:
			return -1264898804;
		case 445:
			return -585289073;
		case 446:
			return 1423542233;
		case 447:
			return -948489286;
		case 448:
			return 2063859257;
		case 449:
			return -1652627327;
		case 450:
			return -1959697839;
		case 451:
			return -1532267859;
		case 452:
			return -1410062763;
		case 453:
			return -901428716;
		case 454:
			return -1628873469;
		case 455:
			return 144855571;
		case 456:
			return -617589883;
		case 457:
			return -1306457086;
		case 458:
			return 1713542477;
		case 459:
			return -305542365;
		case 460:
			return 1985390213;
		case 461:
			return -2145069367;
		case 462:
			return -1674390752;
		case 463:
			return -2117214398;
		case 464:
			return 1880805647;
		case 465:
			return -62390436;
		case 466:
			return 1815288415;
		case 467:
			return 196214097;
		case 468:
			return -201958220;
		case 469:
			return 1400281261;
		case 470:
			return 1601515402;
		case 471:
			return -940704970;
		case 472:
			return -548371721;
		case 473:
			return -1022384613;
		case 474:
			return -357406394;
		case 475:
			return 1077068189;
		case 476:
			return -782241404;
		case 477:
			return 1669853467;
		case 478:
			return 1592019450;
		case 479:
			return 635273153;
		case 480:
			return -1559225678;
		case 481:
			return -266425508;
		case 482:
			return 1117400455;
		case 483:
			return 454332195;
		case 484:
			return -1328061889;
		case 485:
			return 561650932;
		case 486:
			return 256105670;
		case 487:
			return 1976779618;
		case 488:
			return -269095126;
		case 489:
			return 2145617267;
		case 490:
			return 1150213537;
		case 491:
			return 1598825281;
		case 492:
			return -712527121;
		case 493:
			return 1308553072;
		case 494:
			return 852866398;
		case 495:
			return -1794417972;
		case 496:
			return 293062146;
		case 497:
			return 95360094;
		case 498:
			return 807631773;
		case 499:
			return 1603958275;
		case 500:
			return 860052020;
		case 501:
			return -1885979781;
		case 502:
			return 746147970;
		case 503:
			return 666663006;
		case 504:
			return -2096186453;
		case 505:
			return 859409444;
		case 506:
			return -671427187;
		case 507:
			return 100192478;
		case 508:
			return 307812616;
		case 509:
			return 1670843243;
		case 510:
			return 899615863;
		case 511:
			return -298901850;
		case 512:
			return 1379186917;
		case 513:
			return -817206030;
		case 514:
			return -1150323212;
		case 515:
			return -247466821;
		case 516:
			return 427124242;
		case 517:
			return 855418120;
		case 518:
			return -777015093;
		case 519:
			return -722462870;
		case 520:
			return -937454324;
		case 521:
			return -339438116;
		case 522:
			return 2135639035;
		case 523:
			return 1254273765;
		case 524:
			return -792172668;
		case 525:
			return 1905987493;
		case 526:
			return 495693044;
		case 527:
			return -1693422950;
		case 528:
			return -205873076;
		case 529:
			return -2143114654;
		case 530:
			return -1420574021;
		case 531:
			return -1959250381;
		case 532:
			return -1088328663;
		case 533:
			return 513602003;
		case 534:
			return 359221401;
		case 535:
			return 1005272;
		case 536:
			return 1583044470;
		case 537:
			return 348853959;
		case 538:
			return 1045621973;
		case 539:
			return 1084576580;
		case 540:
			return 1651573695;
		case 541:
			return 1463321587;
		case 542:
			return -997505963;
		case 543:
			return -1649851713;
		case 544:
			return -386012962;
		case 545:
			return 1386101789;
		case 546:
			return 1227915917;
		case 547:
			return -218846335;
		case 548:
			return -352578118;
		case 549:
			return 1426626782;
		case 550:
			return -714081520;
		case 551:
			return 74547781;
		case 552:
			return 1271463052;
		case 553:
			return 1983140194;
		case 554:
			return 677262775;
		case 555:
			return -832337898;
		case 556:
			return -319249747;
		case 557:
			return -16955722;
		case 558:
			return -1360128126;
		case 559:
			return -1535425646;
		case 560:
			return -1063641743;
		case 561:
			return -1041133401;
		case 562:
			return 1380479304;
		case 563:
			return 600890828;
		case 564:
			return 733333190;
		case 565:
			return 1843035435;
		case 566:
			return -304127320;
		case 567:
			return 122470371;
		case 568:
			return 0;
		case 569:
			return -1591664384;
		case 570:
			return -673000374;
		case 571:
			return -1150938404;
		case 572:
			return -1756997214;
		case 573:
			return -813824107;
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

bool func_970(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_884(iParam0, *uParam1, iParam2, bParam3) > 0;
}

int func_971(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_1443(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

int func_972(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (func_1444(iParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_1353(*uParam1, &Var0, bParam6, 0))
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
	if (!func_472(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_860(bParam6), uParam1, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

void func_973(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::_0xD3750CCC00635FC2(iParam0))
	{
		iVar1 = func_732(WEAPON::_0xD3750CCC00635FC2(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

void func_974(int iParam0)
{
	char* sVar0;
	char* sVar1;
	int iVar2;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630->f_12)
	{
		return;
	}
	if (WEAPON::_0xC4DEC3CA8C365A5D(iParam0))
	{
		return;
	}
	sVar0 = "player_newWeaponType";
	sVar1 = "player_newWeaponTime";
	if (WEAPON::_0xDDC64F5E31EEDAB6(iParam0))
	{
		sVar0 = "player_newPistolWeaponType";
		sVar1 = "player_newPistolWeaponTime";
	}
	else if (WEAPON::_0xC212F1D05A8232BB(iParam0))
	{
		sVar0 = "player_newRevolverWeaponType";
		sVar1 = "player_newRevolverWeaponTime";
	}
	else if (WEAPON::_0x0A82317B7EBFC420(iParam0))
	{
		sVar0 = "player_newRifleWeaponType";
		sVar1 = "player_newRifleWeaponTime";
	}
	else if (WEAPON::_0xC75386174ECE95D5(iParam0))
	{
		sVar0 = "player_newShotgunWeaponType";
		sVar1 = "player_newShotgunWeaponTime";
	}
	DECORATOR::DECOR_SET_INT(Global_35, sVar0, iParam0);
	iVar2 = func_261();
	func_704(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_35, sVar1, iVar2);
}

int func_975(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_1445(iParam0))
	{
		if (WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, 954660191) <= 0)
		{
			iVar0 = 10;
		}
		else
		{
			iVar0 = 0;
		}
	}
	else if (WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		if (WEAPON::_0x6AD66548840472E5(iParam0))
		{
			iVar0 = 12;
		}
		else
		{
			iVar0 = WEAPON::_0xD3750CCC00635FC2(iParam0) * 4;
		}
		iVar1 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, WEAPON::_0x5C2EA6C44F515F34(iParam0));
		if (iVar1 >= iVar0)
		{
			iVar0 = 0;
		}
		else if (iVar1 > 0)
		{
			iVar0 = (iVar0 - iVar1);
		}
	}
	return iVar0;
}

bool func_976(bool bParam0)
{
	return WEAPON::_0x1F7977C9101F807F(WEAPON::_0x5C2EA6C44F515F34(bParam0));
}

int func_977(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_0x7AA043F6C41D151E(iParam0);
	if (WEAPON::_0x705BE297EEBDB95D(iVar0))
	{
		if (WEAPON::_0x0556E9D2ECF39D01(iVar0))
		{
			if (!func_125(50))
			{
				if (!func_125(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (WEAPON::_0xD955FEE4B87AFA07(iVar0))
		{
			if (!func_125(51))
			{
				if (!func_125(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

int func_978(int iParam0, int iParam1, var uParam2)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	if (!func_38(iParam1, 0))
	{
		return 0;
	}
	if (func_466(iParam1) != -1037537535)
	{
		return 0;
	}
	bVar1 = func_28() != -1;
	iVar2 = PED::_GET_METAPED_TYPE(iParam0);
	if (func_469(iParam1) == -999503751)
	{
		return 1;
	}
	iVar4 = func_900(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return 0;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_467(iParam1, 866047851))
	{
		iVar5 = func_901(iVar4, 1);
		if (func_1394(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5 /*3*/] != iVar8)
		{
			*uParam2 = -265166256; /* GXTEntry: "You are wearing too many of this item. Remove some before equipping more." */
			return 0;
		}
		bVar7 = true;
	}
	switch (iVar4)
	{
		case 1742327865:
			if (PED::_0x5FF9A878C3D115B8(iVar8, iVar2, bVar1) == 2056714954 && PED::_0xFB4891BD7578CDC1(iParam0, -1455751347))
			{
				*uParam2 = 111371848; /* GXTEntry: "Your shirt does not support this type of neckwear." */
				return 0;
			}
			iVar5 = 10;
			iVar3 = func_469(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745; /* GXTEntry: "Your neckwear does not allow for changing your collar." */
				return 0;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5 /*3*/] != &Global_1946804->f_57[iVar5 /*11*/] && func_467(iParam1, -1638171711))
			{
				*uParam2 = 187275271; /* GXTEntry: "Your chaps do not support this." */
				return 0;
			}
			break;
		case 1900541263:
			iVar5 = 36;
			if (&Global_1946804->f_1497.f_1[iVar5 /*3*/] == &Global_1946804->f_57[iVar5 /*11*/])
			{
				*uParam2 = 2143522536;
				return 0;
			}
			if (PED::_0xFB4891BD7578CDC1(iParam0, -1968556728))
			{
				*uParam2 = -849690042; /* GXTEntry: "Your boots do not support having spurs." */
				return 0;
			}
			break;
		case -1505978566:
			if (func_1446(1868067663, &uVar0))
			{
				*uParam2 = 939463734; /* GXTEntry: "Item cannot be worn with coats." */
				return 0;
			}
		case -1130865351:
		case -426430150:
		case 1788623170:
			if (!bVar7)
			{
			}
			else
			{
				iVar11 = PED::_0x90403E8107B60E81(iParam0);
				iVar10 = func_1345(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_1345(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763; /* GXTEntry: "You are wearing too many items. Something must be removed to preview other items." +
    "" */
					return 0;
				}
				Jump @726; //curOff = 583
				iVar3 = func_469(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6 /*11*/] && func_467(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]), -1638171711))
				{
					*uParam2 = -357399012; /* GXTEntry: "Your boots do not support this." */
					return 0;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (&Global_1946804->f_1497.f_1[iVar5 /*3*/] == &Global_1946804->f_57[iVar5 /*11*/])
					{
						*uParam2 = 2143522536;
						return 0;
					}
				}
			}
			*uParam2 = 0;
			return 1;
		}

int func_979()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_162(func_1447(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_980(int iParam0)
{
	switch (iParam0)
	{
		case -1217729597:
		case 363594903:
		case 425319238:
			return -62615415;
			Jump @150; //curOff = 103
			return -832719552;
			Jump @150; //curOff = 114
			return -184823984;
			Jump @150; //curOff = 125
			return -1941112926;
			Jump @150; //curOff = 136
			return -121629511;
			return 0;
		}

int func_981(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	switch (iParam0)
	{
		case -62615415:
			if (iParam1 == 425319238)
			{
				iVar0 = 363594903; /* GXTEntry: "Vintage Civil War Handcuffs" */
				iVar1 = -1217729597; /* GXTEntry: "Gold Jointed Bracelet" */
			}
			else if (iParam1 == 363594903)
			{
				iVar0 = 425319238; /* GXTEntry: "Legendary Alligator Tooth" */
				iVar1 = -1217729597; /* GXTEntry: "Gold Jointed Bracelet" */
			}
			else
			{
				iVar0 = 425319238; /* GXTEntry: "Legendary Alligator Tooth" */
				iVar1 = 363594903; /* GXTEntry: "Vintage Civil War Handcuffs" */
			}
			break;
		case -832719552:
			if (iParam1 == -1540119664)
			{
				iVar0 = 2100194981; /* GXTEntry: "Quartz Chunk" */
				iVar1 = 446659922; /* GXTEntry: "Silver Chain Bracelet" */
			}
			else if (iParam1 == 2100194981)
			{
				iVar0 = -1540119664; /* GXTEntry: "Legendary Bear Claw" */
				iVar1 = 446659922; /* GXTEntry: "Silver Chain Bracelet" */
			}
			else
			{
				iVar0 = -1540119664; /* GXTEntry: "Legendary Bear Claw" */
				iVar1 = 2100194981; /* GXTEntry: "Quartz Chunk" */
			}
			break;
		case -184823984:
			if (iParam1 == -390982951)
			{
				iVar0 = -1018798851; /* GXTEntry: "Cobalt Petrified Wood" */
				iVar1 = -757567246; /* GXTEntry: "Gold Earring" */
			}
			else if (iParam1 == -1018798851)
			{
				iVar0 = -390982951; /* GXTEntry: "Legendary Boar Tusk" */
				iVar1 = -757567246; /* GXTEntry: "Gold Earring" */
			}
			else
			{
				iVar0 = -390982951; /* GXTEntry: "Legendary Boar Tusk" */
				iVar1 = -1018798851; /* GXTEntry: "Cobalt Petrified Wood" */
			}
			break;
		case -1941112926:
			if (iParam1 == -2054602073)
			{
				iVar0 = -378441099; /* GXTEntry: "Abalone Shell Fragment" */
				iVar1 = -585121677; /* GXTEntry: "Silver Earring" */
			}
			else if (iParam1 == -378441099)
			{
				iVar0 = -2054602073; /* GXTEntry: "Legendary Bison Horn" */
				iVar1 = -585121677; /* GXTEntry: "Silver Earring" */
			}
			else
			{
				iVar0 = -2054602073; /* GXTEntry: "Legendary Bison Horn" */
				iVar1 = -378441099; /* GXTEntry: "Abalone Shell Fragment" */
			}
			break;
	}
	if (func_162(iVar0, 1, 0) && func_162(iVar1, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_982(int iParam0)
{
	switch (iParam0)
	{
		case 968830139:
			return -224110471;
		case -649219937:
			return 1289585739;
		case -858567048:
			return -269048282;
		case -718162726:
			return 1441506783;
		case -1284282080:
			return 780305678;
		case -725003445:
			return 1811977508;
		case -1445630104:
			return -935153695;
		case 580970876:
			return 1299744282;
		case 967601061:
			return 1631240196;
		case 1946030891:
			return 517396587;
		case -1511404982:
			return 1620353486;
		case -944465290:
			return 1816443627;
		case -1701098855:
			return -127011478;
		default:
			break;
	}
	return 0;
}

int func_983(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_1448(iParam0);
	if (iVar0 != -15)
	{
		func_704(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_1449(iVar0, 1);
	}
	return 0;
}

int func_984(int iParam0, int iParam1, int iParam2)
{
	float fVar0;
	struct<13> Var1;
	int iVar24;
	int iVar25;

	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (iParam1 && func_162(1811977508, 1, 0))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	Var1.f_1 = 10;
	Var1.f_12 = 10;
	MISC::_0x48E4D50F87A96AA5(Global_35, 1, 1, iParam0, &Var1, 0);
	iVar24 = 0;
	while (iVar24 < Var1)
	{
		if (&Var1.f_1[iVar24] == 2084597891)
		{
			return BUILTIN::CEIL((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
		}
		else
		{
			iVar25 = &Var1.f_1[iVar24];
			if (func_38(iVar25, 0) && func_467(iVar25, -1921346699))
			{
				return BUILTIN::CEIL((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_985(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_986(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_987(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_988(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_989(int iParam0)
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
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;

	iVar0 = 0;
	switch (iParam0)
	{
		case 1:
			iVar9 = 281887510; /* GXTEntry: "Little Egret Plume" */
			iVar10 = -164081697; /* GXTEntry: "Reddish Egret Plume" */
			iVar11 = -1161319399; /* GXTEntry: "Snowy Egret Plume" */
			iVar12 = 728781265; /* GXTEntry: "Lady of the Night Orchid" */
			break;
		case 2:
			iVar9 = -222563712; /* GXTEntry: "Heron Plume" */
			iVar10 = 1794857344; /* GXTEntry: "Lady Slipper Orchid" */
			iVar11 = 1952409553; /* GXTEntry: "Moccasin Flower Orchid" */
			break;
		case 4:
			iVar9 = 2116770557;
			iVar10 = -651064726; /* GXTEntry: "Acuna\'s Star Orchid" */
			iVar11 = -404270094; /* GXTEntry: "Cigar Orchid" */
			iVar12 = 2093126853; /* GXTEntry: "Ghost Orchid" */
			break;
		case 8:
			iVar9 = 2085530337; /* GXTEntry: "Spoonbill Plume" */
			iVar10 = -150591160; /* GXTEntry: "Night Scented Orchid" */
			iVar11 = -323969289; /* GXTEntry: "Rat Tail Orchid" */
			iVar12 = 1504361882; /* GXTEntry: "Spider Orchid" */
			break;
		case 16:
			iVar9 = -1521783510; /* GXTEntry: "Clamshell Orchid" */
			iVar10 = 1714875242; /* GXTEntry: "Dragon\'s Mouth Orchid" */
			iVar11 = 1019229063; /* GXTEntry: "Queen\'s Orchid" */
			iVar12 = 927763737; /* GXTEntry: "Sparrow\'s Egg Orchid" */
			break;
	}
	iVar1 = func_996(iVar9);
	iVar2 = func_996(iVar10);
	iVar3 = func_996(iVar11);
	iVar5 = func_997(iVar9);
	iVar6 = func_997(iVar10);
	iVar7 = func_997(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_996(iVar12);
		iVar8 = func_997(iVar12);
	}
	if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam0 != 2)
	{
		if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

void func_990(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_991()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1172(COLLECTION::_0x126CBEBBA46693CF(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_992()
{
	return COLLECTION::_0x5461C821D00FE15A(2103522376, 0);
}

void func_993(int iParam0)
{
	if (!func_1450(iParam0))
	{
		func_1452(func_1451(iParam0));
	}
}

int func_994()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_1450(COLLECTION::_0x126CBEBBA46693CF(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_995(int iParam0, int iParam1, int iParam2)
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
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;

	iVar0 = 0;
	switch (iParam2)
	{
		case 1:
			iVar9 = 281887510; /* GXTEntry: "Little Egret Plume" */
			iVar10 = -164081697; /* GXTEntry: "Reddish Egret Plume" */
			iVar11 = -1161319399; /* GXTEntry: "Snowy Egret Plume" */
			iVar12 = 728781265; /* GXTEntry: "Lady of the Night Orchid" */
			break;
		case 2:
			iVar9 = -222563712; /* GXTEntry: "Heron Plume" */
			iVar10 = 1794857344; /* GXTEntry: "Lady Slipper Orchid" */
			iVar11 = 1952409553; /* GXTEntry: "Moccasin Flower Orchid" */
			break;
		case 4:
			iVar9 = 2116770557;
			iVar10 = -651064726; /* GXTEntry: "Acuna\'s Star Orchid" */
			iVar11 = -404270094; /* GXTEntry: "Cigar Orchid" */
			iVar12 = 2093126853; /* GXTEntry: "Ghost Orchid" */
			break;
		case 8:
			iVar9 = 2085530337; /* GXTEntry: "Spoonbill Plume" */
			iVar10 = -150591160; /* GXTEntry: "Night Scented Orchid" */
			iVar11 = -323969289; /* GXTEntry: "Rat Tail Orchid" */
			iVar12 = 1504361882; /* GXTEntry: "Spider Orchid" */
			break;
		case 16:
			iVar9 = -1521783510; /* GXTEntry: "Clamshell Orchid" */
			iVar10 = 1714875242; /* GXTEntry: "Dragon\'s Mouth Orchid" */
			iVar11 = 1019229063; /* GXTEntry: "Queen\'s Orchid" */
			iVar12 = 927763737; /* GXTEntry: "Sparrow\'s Egg Orchid" */
			break;
	}
	iVar1 = func_996(iVar9);
	iVar2 = func_996(iVar10);
	iVar3 = func_996(iVar11);
	iVar5 = func_997(iVar9);
	iVar6 = func_997(iVar10);
	iVar7 = func_997(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_996(iVar12);
		iVar8 = func_997(iVar12);
	}
	if (iParam0 == iVar9)
	{
		if ((iVar1 + iParam1) >= iVar5)
		{
			iVar0 = (iVar0 + iVar5);
		}
		else
		{
			iVar0 = (iVar0 + (iVar1 + iParam1));
		}
	}
	else if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iParam0 == iVar10)
	{
		if ((iVar2 + iParam1) >= iVar6)
		{
			iVar0 = (iVar0 + iVar6);
		}
		else
		{
			iVar0 = (iVar0 + (iVar2 + iParam1));
		}
	}
	else if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iParam0 == iVar11)
	{
		if ((iVar3 + iParam1) >= iVar7)
		{
			iVar0 = (iVar0 + iVar7);
		}
		else
		{
			iVar0 = (iVar0 + (iVar3 + iParam1));
		}
	}
	else if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam2 != 2)
	{
		if (iParam0 == iVar12)
		{
			if ((iVar4 + iParam1) >= iVar8)
			{
				iVar0 = (iVar0 + iVar8);
			}
			else
			{
				iVar0 = (iVar0 + (iVar4 + iParam1));
			}
		}
		else if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

int func_996(int iParam0)
{
	int iVar0;

	if (func_162(iParam0, 1, 0))
	{
		iVar0 = func_452(iParam0, 0, 0);
	}
	return iVar0;
}

int func_997(int iParam0)
{
	switch (iParam0)
	{
		case 281887510:
			return 5;
		case -164081697:
			return 5;
		case -1161319399:
			return 5;
		case 728781265:
			return 15;
		case -222563712:
			return 20;
		case 1794857344:
			return 7;
		case 1952409553:
			return 10;
		case 2116770557:
			return 25;
		case -651064726:
			return 3;
		case -404270094:
			return 7;
		case 2093126853:
			return 5;
		case 2085530337:
			return 30;
		case -150591160:
			return 5;
		case -323969289:
			return 10;
		case 1504361882:
			return 5;
		case -1521783510:
			return 5;
		case 1714875242:
			return 5;
		case 1019229063:
			return 5;
		case 927763737:
			return 10;
		default:
			break;
	}
	return 0;
}

int func_998(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0);
}

void func_999(int iParam0, int iParam1)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, iParam1);
}

int func_1000(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;

	if (!func_1026(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
	return uVar5;
}

void func_1001(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_1000(iParam1, 5) || iParam0 == func_1000(iParam1, 6)) || iParam0 == func_1000(iParam1, 7)) || iParam0 == func_1000(iParam1, 8)) || iParam0 == func_1000(iParam1, 9))
	{
		func_665(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_463(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_465(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_1002(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 1;
	if ((((iParam0 == func_1000(iParam1, 5) || iParam0 == func_1000(iParam1, 6)) || iParam0 == func_1000(iParam1, 7)) || iParam0 == func_1000(iParam1, 8)) || iParam0 == func_1000(iParam1, 9))
	{
		if (func_665(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_463(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_465(51, 0, 0, iVar0, func_958(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_463(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_465(51, 0, 0, iVar0, func_958(iParam1, 20), 1, 0);
			}
		}
	}
}

int func_1003()
{
	if (func_693(((*Global_1347702)[37 /*49*/])->f_15) && Global_1392388->f_7)
	{
		return 1;
	}
	return 0;
}

void func_1004(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
}

void func_1005(int iParam0)
{
	if (!func_1162(iParam0))
	{
		COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	}
}

void func_1006(int iParam0)
{
	COLLECTION::_0x398FAB9C96A81924(iParam0, 1);
}

void func_1007(int iParam0, var uParam1, var uParam2)
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

bool func_1008(int iParam0, int iParam1)
{
	return ((Global_1905944->f_22[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

bool func_1009(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_1010(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -2061583405:
			return Global_1946804->f_2657.f_21;
		case 81053684:
			return Global_1946804->f_2657.f_23;
		case -525676072:
			return Global_1946804->f_2657.f_22;
		case -1719060085:
			return Global_1946804->f_2657.f_24;
		case -413129408:
			return Global_1946804->f_2657.f_25;
		case -999503751:
			if (bParam1)
			{
				return Global_1946804->f_2657.f_20;
			}
			else
			{
				return func_1453();
			}
			break;
	}
	return 0;
}

void func_1011(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!func_396(iParam0))
	{
		return;
	}
	if (func_1031(iParam0))
	{
		return;
	}
	if (!func_1454(iParam0))
	{
		func_1455(iParam0, 1, 0);
	}
	iVar0 = func_127(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_129(iParam0, 512))
		{
			func_407(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_1194() && !bParam1) && !func_610(0, 0, 1))
	{
		func_1456(MISC::_CREATE_VAR_STRING(10, "OUT_JOURN_DONE", MISC::_CREATE_VAR_STRING(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_132(iParam0, 6);
	if (bParam2)
	{
		if (!func_610(0, 0, 1))
		{
			func_649(1, 4);
		}
	}
}

bool func_1012(int iParam0, bool bParam1)
{
	return func_1010(iParam0, 0) < func_1457(iParam0, bParam1);
}

int func_1013(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_469(iVar1) == iParam0)
		{
			*uParam1 = iVar1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_1014(int iParam0, int iParam1)
{
	if (func_467(iParam1, 130796156))
	{
		func_1458(iParam1, 0);
	}
	else if (func_467(iParam1, 930141731))
	{
		func_1458(iParam1, 1);
		func_1459(iParam0);
	}
}

void func_1015(var uParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (&uParam0->f_1[iVar0] == iParam1)
		{
			return;
		}
		if ((((iParam1 == 617531372 && &uParam0->f_1[iVar0] == 291123060) || (iParam1 == 291123060 && &uParam0->f_1[iVar0] == 617531372)) || (iParam1 == 1356624740 && &uParam0->f_1[iVar0] == 1884295263)) || (iParam1 == 1884295263 && &uParam0->f_1[iVar0] == 1356624740))
		{
			uParam0->f_1[iVar0] = iParam1;
			return;
		}
		iVar0++;
	}
	if (*uParam0 >= 10)
	{
		return;
	}
	uParam0->f_1[*uParam0] = iParam1;
	*uParam0++;
}

int func_1016(int iParam0, var uParam1, var uParam2, var uParam3)
{
	var uVar0;
	struct<14> Var1;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return 0;
	}
	func_1460(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = uParam3;
	Var1.f_2 = { *uParam1 };
	func_1461(uParam2, iParam0, Var1);
	return 1;
}

int func_1017(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_1018(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PROVISION_FISH_BLUEGILL";
		case 1:
			return "PROVISION_FISH_BULLHEAD_CATFISH";
		case 2:
			return "PROVISION_FISH_CHAIN_PICKEREL";
		case 3:
			return "PROVISION_FISH_CHANNEL_CATFISH";
		case 4:
			return "PROVISION_FISH_LAKE_STURGEON";
		case 5:
			return "PROVISION_FISH_LARGEMOUTH_BASS";
		case 6:
			return "PROVISION_FISH_LONGNOSE_GAR";
		case 7:
			return "PROVISION_FISH_MUSKIE";
		case 8:
			return "PROVISION_FISH_NORTHERN_PIKE";
		case 9:
			return "PROVISION_FISH_PERCH";
		case 10:
			return "PROVISION_FISH_REDFIN_PICKEREL";
		case 11:
			return "PROVISION_FISH_ROCK_BASS";
		case 12:
			return "PROVISION_FISH_SMALLMOUTH_BASS";
		case 13:
			return "PROVISION_FISH_SOCKEYE_SALMON";
		case 14:
			return "PROVISION_FISH_STEELHEAD_TROUT";
		default:
			break;
	}
	return "FISHTYPE_UNKNOWN";
}

int func_1019(int iParam0)
{
	var uVar0;

	if (!func_1462(iParam0, &uVar0, 805880880, 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

var func_1020(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_1463(sParam0, sParam1, iParam2);
	return uVar20;
}

bool func_1021()
{
	return !&Global_1911774;
}

void func_1022(int iParam0, int iParam1, var uParam2, var uParam3)
{
	Global_1911774->f_4[Global_1911774->f_3 /*4*/] = iParam0;
	(Global_1911774->f_4[Global_1911774->f_3 /*4*/])->f_1 = iParam1;
	(Global_1911774->f_4[Global_1911774->f_3 /*4*/])->f_2 = uParam2;
	(Global_1911774->f_4[Global_1911774->f_3 /*4*/])->f_3 = uParam3;
	if (Global_1911774->f_3 < 20)
	{
		Global_1911774->f_3++;
	}
}

char* func_1023(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_1024(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;

	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(iParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(&(Var3.f_2[iVar0 /*3*/])))
			{
				Jump @227; //curOff = 56
			}
			else if (MISC::IS_STRING_NULL_OR_EMPTY((Var3.f_2[iVar0 /*3*/])->f_1))
			{
			}
			else
			{
				iVar1 = MISC::GET_HASH_KEY(&(Var3.f_2[iVar0 /*3*/]));
				iVar2 = MISC::GET_HASH_KEY((Var3.f_2[iVar0 /*3*/])->f_1);
				if (iParam2 != 0 && (Var3.f_2[iVar0 /*3*/])->f_2 != iParam2)
				{
					Jump @227; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @227; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @227; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = { *(Var3.f_2[iVar0 /*3*/]) };
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

char* func_1025(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_1026(int iParam0, var uParam1)
{
	if (!func_1464(iParam0))
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

int func_1027()
{
	return Global_40.f_11095.f_35;
}

int func_1028()
{
	if (func_413())
	{
		return DLC::_0x1DB9D61E505AE3FC();
	}
	return 0;
}

void func_1029(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_1465((Global_40.f_4283.f_325 + iParam0));
}

void func_1030(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_1028())
	{
		func_1020(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_1020(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

int func_1031(int iParam0)
{
	if (!func_396(iParam0))
	{
		return 0;
	}
	if (func_129(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

int func_1032()
{
	int iVar0;

	iVar0 = 0;
	if (func_1446(81053684, &iVar0))
	{
		return 1;
	}
	if (func_1446(-525676072, &iVar0))
	{
		return 1;
	}
	return 0;
}

void func_1033()
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	if (func_1446(81053684, &iVar1))
	{
		if (func_1466(iVar1))
		{
			func_1467(81053684);
			bVar0 = true;
		}
	}
	if (func_1446(-525676072, &iVar1))
	{
		if (func_1466(iVar1))
		{
			func_1467(-525676072);
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		PED::_0xC494C76A34266E82(Global_35, 13);
	}
}

bool func_1034(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

void func_1035(int iParam0)
{
	int iVar0;
	int iVar1;

	VOLUME::_0x748C5F51A18CB8F0(0);
	if (!func_1034(iParam0))
	{
		return;
	}
	func_1468(iParam0, 0);
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (func_126(iVar0))
		{
			if (func_1469(func_572(iVar0, 1, 1)) == iParam0)
			{
				func_1284(iVar0, 0);
				func_1283(iVar0, 0, 350);
			}
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 17)
	{
		if (func_614(iVar1))
		{
			if (func_558(iVar1) == iParam0)
			{
				func_1470(iVar1, 0);
			}
		}
		iVar1++;
	}
	VOLUME::_0x748C5F51A18CB8F0(1);
}

void func_1036(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	if (bParam0)
	{
		func_152(2032023096, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_152(-615217896, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_152(655868243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_140();
		UNLOCK::_UNLOCK_SET_UNLOCKED(645322743, true);
	}
	else
	{
		func_1471(2032023096);
		func_418(-615217896);
		func_898(655868243, 1, 1, -142743235, 1);
		func_1472(146323340, func_411());
		Var0 = { func_1473() };
		if (func_1474(&Var0) == -1387633835)
		{
			func_1475(&Var0);
			func_1476(Var0);
		}
		iVar7 = -868094182; /* GXTEntry: "Tennessee Walker - Chestnut Coat" */
		iVar8 = 1074477367;
		iVar9 = 1;
		func_1477(&iVar7, &iVar8, &iVar9);
		iVar6 = 0;
		while (iVar6 < 7)
		{
			if (func_1478(iVar6) == 2010625508)
			{
				func_1479(iVar6, iVar7);
				func_1480(iVar6, iVar8);
				func_1481(iVar6, iVar9);
				func_1482(iVar6, 0);
				if (func_1483(iVar6))
				{
					func_1484(iVar6);
				}
				iVar10 = func_1485(iVar8);
				func_1486(iVar6, iVar10);
			}
			iVar6++;
		}
		UNLOCK::_UNLOCK_SET_UNLOCKED(645322743, false);
	}
}

void func_1037()
{
	func_271(joaat("weapon_pistol_volcanic"));
	func_271(joaat("weapon_shotgun_pump"));
	func_271(joaat("weapon_rifle_varmint"));
}

void func_1038(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (bParam0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(-1426541042))
		{
			return;
		}
		func_152(-1080874779, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_152(-223790555, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_152(1566032147, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_152(891311852, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_152(-1353737667, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_152(-330313895, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_152(-2051332199, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_152(1237770824, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_152(-1795542128, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_152(-1757588258, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_152(-1921080134, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(-1426541042, true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-1426541042))
		{
			return;
		}
		func_898(-1080874779, 3, 1, -142743235, 1);
		func_898(-223790555, 3, 1, -142743235, 1);
		func_898(1566032147, 3, 1, -142743235, 1);
		func_898(891311852, 5, 1, -142743235, 1);
		func_898(-1353737667, 5, 1, -142743235, 1);
		func_898(-330313895, 5, 1, -142743235, 1);
		func_898(-2051332199, 5, 1, -142743235, 1);
		func_898(1237770824, 5, 1, -142743235, 1);
		func_898(-1795542128, 3, 1, -142743235, 1);
		func_898(-1757588258, 3, 1, -142743235, 1);
		func_898(-1921080134, 10, 1, -142743235, 1);
		iVar1 = -868094182; /* GXTEntry: "Tennessee Walker - Chestnut Coat" */
		iVar2 = 1074477367;
		iVar3 = 1;
		func_1477(&iVar1, &iVar2, &iVar3);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (func_1478(iVar0) == 153881023)
			{
				func_1479(iVar0, iVar1);
				func_1480(iVar0, iVar2);
				func_1481(iVar0, iVar3);
				func_1482(iVar0, 0);
				if (func_1483(iVar0))
				{
					func_1484(iVar0);
				}
				iVar4 = func_1485(iVar2);
				func_1486(iVar0, iVar4);
			}
			iVar0++;
		}
		func_140();
		UNLOCK::_UNLOCK_SET_UNLOCKED(-1426541042, false);
	}
}

void func_1039(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_1487(iParam0);
	if (bParam3)
	{
		func_1488(iParam0, sParam1, iParam2);
	}
}

void func_1040(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_529(iParam0, sParam4, iParam5);
	}
	func_530(iParam0, bParam1, fParam2, iParam3, iParam7);
}

void func_1041(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 - (Global_40.f_12004.f_10 && iParam0));
}

struct<14> func_1042()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<14> Var3;
	struct<10> Var17;
	struct<14> Var39;

	Var3.f_9 = -1591664384;
	Var17.f_9 = -1591664384;
	if (func_391("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!func_392(&Var3, iVar2, iVar0, iVar1))
			{
				Jump @136; //curOff = 80
			}
			else if (Var3.f_4 != joaat("weapon_revolver_doubleaction"))
			{
			}
			else if (func_971(Var3.f_4, &Var17, Var3.f_9))
			{
			}
			else
			{
				func_393(iVar0);
				return Var3;
			}
			iVar2++;
		}
		func_393(iVar0);
	}
	Var39.f_9 = -1591664384;
	return Var39;
}

void func_1043(int iParam0, struct<4> Param1, int iParam5)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<4> Var19;

	Var0 = { Param1 };
	Var0.f_4 = iParam5;
	Var5.f_9 = -1591664384;
	if (func_1489(Param1, iParam5, &Var5, 0))
	{
		func_972(Var5.f_4, &Var5, &Var0, -1, -142743235, 1, 0);
	}
	func_886(iParam0, &Var19, &Var0, 1, 752097756, 0);
	func_887(Var19, 1);
}

bool func_1044()
{
	return (ANIMSCENE::_0x25557E324489393C(Global_43799) && ANIMSCENE::_0xCBFC7725DE6CE2E0(Global_43799, 0));
}

int func_1045(struct<2> Param0, var uParam2, float fParam3, float fParam4, int iParam5, int iParam6)
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

int func_1046(int iParam0, var uParam1, var uParam2)
{
	bool bVar0;

	bVar0 = func_28() != -1;
	if (bVar0)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 4:
			*uParam1 = 877;
			*uParam2 = 878;
			break;
		case 5:
		case 6:
		case 7:
			*uParam1 = 861;
			*uParam2 = 865;
			break;
		case 9:
			*uParam1 = 866;
			*uParam2 = 867;
			break;
		case 1:
			*uParam1 = 879;
			*uParam2 = 882;
			break;
		case 15:
			*uParam1 = 888;
			*uParam2 = 888;
			break;
		case 10:
			*uParam1 = 902;
			*uParam2 = 903;
			break;
		case 11:
			*uParam1 = 907;
			*uParam2 = 907;
			break;
		case 12:
			*uParam1 = 924;
			*uParam2 = 926;
			break;
		case 0:
			*uParam1 = 927;
			*uParam2 = 927;
			break;
		case 14:
			*uParam1 = 901;
			*uParam2 = 901;
			break;
		case 13:
			*uParam1 = 875;
			*uParam2 = 876;
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

void func_1047(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return;
	}
	if (!SCRIPTS::DOES_SCRIPT_WITH_NAME_HASH_EXIST(iParam0))
	{
		return;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(iParam0) != 0)
	{
		SCRIPTS::SCRIPT_THREAD_ITERATOR_RESET();
		iVar0 = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
		while (iVar0 != 0)
		{
			if (iParam0 == SCRIPTS::_GET_HASH_OF_THREAD(iVar0))
			{
				if (SCRIPTS::IS_THREAD_ACTIVE(iVar0, false))
				{
					PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(iVar0, iParam1);
				}
			}
			iVar0 = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
		}
	}
}

bool func_1048(int iParam0, int iParam1)
{
	if (!func_614(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return (Global_40.f_431[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_42339[iParam0] && iParam1) != 0;
}

bool func_1049(int iParam0, int iParam1)
{
	if (!func_1034(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return ((Global_40.f_358[iParam0 /*12*/])->f_5 && iParam1) != 0;
	}
	return ((Global_1058888->f_42266[iParam0 /*12*/])->f_5 && iParam1) != 0;
}

void func_1050(int iParam0, var uParam1)
{
	if (!func_1034(iParam0))
	{
		return;
	}
	Global_1934266->f_27[iParam0] = uParam1;
}

int func_1051(int iParam0)
{
	if ((iParam0 == 22 || iParam0 == 37) && !func_372())
	{
		return 1;
	}
	if (iParam0 == 61)
	{
		return 1;
	}
	return 0;
}

int func_1052()
{
	if (Global_16)
	{
		return 0;
	}
	if (!func_1490())
	{
		return 0;
	}
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1934266->f_78.f_55))
	{
		return 0;
	}
	if (func_610(-1 ^ 9, 0, 1))
	{
		return 0;
	}
	return 1;
}

char* func_1053(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5, var uParam6)
{
	char* sVar0;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1894899->f_162)))
	{
		sVar0 = func_1325(Global_1894899->f_162);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && uParam4)
	{
		sVar0 = func_1492(func_1491(Global_36));
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		if (!func_1493(iParam0) || func_125(45))
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

int func_1054(int iParam0)
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

int func_1055(int iParam0)
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

char* func_1056(int iParam0)
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

float func_1057(float fParam0)
{
	return ((fParam0 * 1.8f) + 32f);
}

char* func_1058(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_1025(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

var func_1059(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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

int func_1060(bool bParam0, var uParam1, var uParam2)
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

void func_1061(int iParam0)
{
	if (!func_1034(iParam0))
	{
		return;
	}
	Global_1934266->f_4 = iParam0;
}

void func_1062(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_1034(iParam0))
	{
		return;
	}
	iVar0 = func_1494();
	if (iParam1 > iVar0)
	{
		iParam1 = iVar0;
	}
	PLAYER::_0xEA6DE0CD15AECBE2(iVar0);
	if (iParam0 == func_1495())
	{
		LAW::_0x093A9D1F72DF0D19(PLAYER::PLAYER_ID(), iParam1);
	}
	if (Global_1572887->f_12 == -1)
	{
		if (&Global_40.f_358[iParam0 /*12*/] != iParam1)
		{
			func_1496(iParam0, iParam1);
			func_1497(iParam0);
		}
		Global_40.f_358[iParam0 /*12*/] = iParam1;
		if (!func_1049(iParam0, 4))
		{
			if (&Global_40.f_358[iParam0 /*12*/] >= PLAYER::GET_WANTED_LEVEL_THRESHOLD(1))
			{
				func_1498(iParam0, 1);
			}
		}
		else if (&Global_40.f_358[iParam0 /*12*/] == 0)
		{
			func_1498(iParam0, 0);
		}
		return;
	}
	Global_1058888->f_42266[iParam0 /*12*/] = iParam1;
}

int func_1063(int iParam0, var uParam1, var uParam2)
{
	bool bVar0;

	bVar0 = func_28() != -1;
	if (bVar0)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 9:
			*uParam1 = 868;
			*uParam2 = 874;
			break;
		case 16:
			*uParam1 = 893;
			*uParam2 = 900;
			break;
		case 1:
			*uParam1 = 883;
			*uParam2 = 885;
			break;
		case 3:
			*uParam1 = 858;
			*uParam2 = 860;
			break;
		case 15:
			*uParam1 = 889;
			*uParam2 = 892;
			break;
		case 13:
			*uParam1 = 886;
			*uParam2 = 887;
			break;
		case 10:
			*uParam1 = 904;
			*uParam2 = 906;
			break;
		case 11:
			*uParam1 = 908;
			*uParam2 = 923;
			break;
		case 0:
			*uParam1 = 928;
			*uParam2 = 931;
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

int func_1064(int iParam0)
{
	switch (iParam0)
	{
		case 709:
		case 710:
		case 711:
		case 713:
			if (((SCRIPTS::_DOES_THREAD_EXIST(((*Global_1835011)[64 /*74*/])->f_7) || SCRIPTS::_DOES_THREAD_EXIST(((*Global_1835011)[67 /*74*/])->f_7)) || SCRIPTS::_DOES_THREAD_EXIST(((*Global_1835011)[65 /*74*/])->f_7)) || SCRIPTS::_DOES_THREAD_EXIST(((*Global_1835011)[66 /*74*/])->f_7))
			{
				return 1;
			}
			return 0;
		default:
			break;
	}
	return 1;
}

void func_1065()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (func_1499(iVar0))
		{
			(*Global_1898147)[iVar0] = -1;
		}
		iVar0++;
	}
}

void func_1066(int iParam0, int iParam1)
{
	if (!func_1499(iParam0))
	{
		return;
	}
	if (!func_1500(iParam1))
	{
		return;
	}
	(*Global_1898147)[iParam0] = iParam1;
}

int func_1067(int iParam0)
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

int func_1068(int iParam0, int iParam1)
{
	int iVar0;

	if (Global_1934266->f_26 != iParam0)
	{
		Global_1934266->f_26 = iParam0;
		iVar0 = iParam1;
		if (!func_1034(iParam1))
		{
			iVar0 = func_1469(iParam0);
		}
		if (!func_1034(iVar0))
		{
			iVar0 = func_558(func_183(Global_36));
		}
		if (!func_1034(iVar0))
		{
			return 0;
		}
		LAW::_0x4752F68EB7F2D280(PLAYER::PLAYER_ID(), Global_1934266->f_26, func_1501(iVar0));
		return 1;
	}
	return 0;
}

void func_1069(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_846(iParam0, 1);
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

void func_1070()
{
	func_361(-939420910);
	func_361(-1187950766);
	func_361(356365161);
	func_361(753127042);
	func_361(-2038424081);
	func_361(1884271742);
	func_361(459290420);
}

void func_1071()
{
	func_361(704802028);
	func_361(588987611);
	func_361(2008888900);
	func_361(1649996811);
	func_361(227918160);
	func_361(168171957);
	func_361(1193080109);
	func_361(-491981251);
	func_361(-639037538);
	func_361(-618620429);
}

bool func_1072(var uParam0)
{
	return func_1502(*uParam0, 1);
}

bool func_1073(var uParam0)
{
	return func_1502(*uParam0, 2);
}

float func_1074()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_1075(int iParam0)
{
	return iParam0 > -1;
}

void func_1076(int iParam0)
{
	if (iParam0 == 14)
	{
		if (PED::_0xA454D234E45BB6E5(func_581(14), PLAYER::GET_PLAYER_INDEX()))
		{
			Global_1357549->f_1648 = 1;
		}
	}
	if (AUDIO::IS_ANY_SPEECH_PLAYING(func_581(13)) == 0)
	{
		if (Global_1357549->f_1648 && !PED::_0xA454D234E45BB6E5(func_581(14), PLAYER::GET_PLAYER_INDEX()))
		{
			Global_1357549->f_1648 = 0;
			if (func_1079(func_581(14), func_581(13), 1, 1) < 20f)
			{
				func_584(func_581(13), "DISPUTE_INTERVENE_CAMP_MALE", 334581534, Global_35, 1, 0, 0, 1);
			}
		}
	}
}

int func_1077(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1075(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		return func_1082(iParam0, 26, 1);
	}
	if (bParam2)
	{
		if (!func_582(func_581(iParam0), 0))
		{
			return 0;
		}
	}
	if (!func_1110(iParam0, 1, 0))
	{
		return 0;
	}
	if (func_1082(iParam0, 44, 1))
	{
		return 0;
	}
	return 1;
}

bool func_1078(int iParam0, bool bParam1)
{
	if (!func_1075(iParam0))
	{
		return false;
	}
	if (!bParam1)
	{
		if (func_594(iParam0) || func_1082(iParam0, 44, 1))
		{
			return false;
		}
	}
	return MISC::ARE_STRINGS_EQUAL(&(((*Global_1360165)[iParam0 /*1157*/])->f_48), "Sleep");
}

float func_1079(int iParam0, int iParam1, bool bParam2, int iParam3)
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

var func_1080(var uParam0, var uParam1)
{
	return AUDIO::_PLAY_AMBIENT_SPEECH1(uParam0, uParam1);
}

bool func_1081(int iParam0, int iParam1, bool bParam2, int iParam3)
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

bool func_1082(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_1075(iParam0))
		{
			return false;
		}
	}
	func_1503(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0]), iVar1);
}

void func_1083(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_1075(iParam0))
		{
			return;
		}
	}
	func_1503(iParam1, &iVar0, &iVar1);
	MISC::CLEAR_BIT(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0], iVar1);
}

void func_1084(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_1075(iParam0))
		{
			return;
		}
	}
	func_1503(iParam1, &iVar0, &iVar1);
	MISC::SET_BIT(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0], iVar1);
}

void func_1085(int iParam0, bool bParam1, char* sParam2)
{
	int iVar0;

	iVar0 = func_581(iParam0);
	if (!func_591(iParam0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	PED::_0xF1C03A5352243A30(iVar0);
	if (bParam1)
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0, 0, 1);
	}
	else
	{
		TASK::CLEAR_PED_TASKS(iVar0, 1, 0);
	}
}

void func_1086(int iParam0, int iParam1)
{
	if (!func_1075(iParam0))
	{
		return;
	}
	((*Global_1360165)[iParam0 /*1157*/])->f_11 = iParam1;
}

int func_1087(int iParam0, vector3 vParam1, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	if (!func_1075(iParam0))
	{
		return 0;
	}
	switch (((*Global_1360165)[iParam0 /*1157*/])->f_3)
	{
		case 0:
			if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(89040947))
			{
				SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(89040947);
			}
			((*Global_1360165)[iParam0 /*1157*/])->f_3 = 1;
		case 1:
			if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(89040947))
			{
				return 0;
			}
			if (Global_1359489->f_9 != -1)
			{
				return 0;
			}
			Global_1359489->f_9 = iParam0;
			if (iParam4 == 0)
			{
				if (iParam9 != -1)
				{
					iParam4 = func_1504(iParam0, iParam9, bParam7, 1);
				}
				else if ((((*Global_1360165)[iParam0 /*1157*/])->f_4.f_2 != 0 && ((*Global_1360165)[iParam0 /*1157*/])->f_4.f_2 == (Global_40.f_4942[iParam0 /*60*/])->f_59) && (func_753(((*Global_1360165)[iParam0 /*1157*/])->f_4.f_2) || func_693(((*Global_1360165)[iParam0 /*1157*/])->f_4.f_2)))
				{
					iParam4 = ((*Global_1360165)[iParam0 /*1157*/])->f_4.f_1;
				}
				else
				{
					iParam4 = func_1504(iParam0, Global_40.f_4283, bParam7, 1);
				}
				if (((*Global_1360165)[iParam0 /*1157*/])->f_63 != iParam4 && func_1505(((*Global_1360165)[iParam0 /*1157*/])->f_63))
				{
					if (!func_1078(iParam0, 0))
					{
						func_1084(iParam0, 25, 0);
					}
				}
			}
			((*Global_1360165)[iParam0 /*1157*/])->f_4 = { func_1506(iParam0, iParam4, vParam1, bParam5, bParam6, bParam8, (Global_40.f_4942[iParam0 /*60*/])->f_59, bParam11) };
			if (!bParam6)
			{
				func_1083(iParam0, 44, 1);
			}
			((*Global_1360165)[iParam0 /*1157*/])->f_3 = 2;
		case 2:
			if (!func_582(func_581(iParam0), 0))
			{
				return 0;
			}
			if (bParam5 && iParam10)
			{
				if (!func_582(func_1108(iParam0), 0))
				{
					return 0;
				}
			}
			((*Global_1360165)[iParam0 /*1157*/])->f_3 = 3;
		case 3:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_1088(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_1075(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_1083(iParam0, 50, 1);
		func_1083(iParam0, 48, 1);
		func_1083(iParam0, 49, 1);
		func_1083(iParam0, 51, 1);
		func_1083(iParam0, 52, 1);
		func_1083(iParam0, 54, 1);
		func_1083(iParam0, 55, 1);
	}
	else
	{
		func_1084(iParam0, 50, 1);
		func_1084(iParam0, 48, 1);
		func_1084(iParam0, 49, 1);
		func_1084(iParam0, 51, 1);
		if (bParam3)
		{
			func_1084(iParam0, 54, 1);
		}
		else
		{
			func_1083(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_1084(iParam0, 52, 1);
			if (bParam3)
			{
				func_1084(iParam0, 55, 1);
			}
		}
		else
		{
			func_1083(iParam0, 52, 1);
			if (!bParam3)
			{
				func_1083(iParam0, 55, 1);
			}
		}
	}
}

void func_1089(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_591(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_1507(iParam0, bParam3);
	}
	else
	{
		func_1508(iParam0, bParam3);
	}
	if (bParam2)
	{
		func_1509(iParam0, bParam3);
	}
	else
	{
		func_1510(iParam0, bParam3);
	}
}

void func_1090(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == func_1511(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (func_1512(iParam0))
	{
		if (func_1513(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			PHYSICS::_0x0348469DAA17576C(iParam0);
		}
	}
	if (func_346(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_1090(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_1090(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_346(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 0, 1);
		}
	}
	if (func_346(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			ENTITY::_0x203BEFFDBE12E96A(iParam0, vParam1, fParam4, 1, func_346(iParam5, 32), 1);
		}
		else
		{
			ENTITY::_0x203BEFFDBE12E96A(iParam0, vParam1, fParam4, 1, func_346(iParam5, 32), 1);
			ENTITY::_0x9587913B9E772D29(iParam0, 0);
		}
	}
	else if (func_346(iParam5, 129))
	{
		if (func_346(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0, vParam1, func_346(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
	}
	else
	{
		ENTITY::_0x203BEFFDBE12E96A(iParam0, vParam1, fParam4, 1, func_346(iParam5, 32), 1);
	}
	if (bVar4)
	{
		if (!func_346(iParam5, 16))
		{
			PED::_0x7DE9692C6F64CFE8(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3, 0, 0);
		}
		if (func_1512(iParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PHYSICS::_0x0348469DAA17576C(iVar6);
			if (!func_346(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, 1, 0);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PACKAGE_INDEX(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 1);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0) == Global_35 && !func_346(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
}

int func_1091(int iParam0, int iParam1)
{
	var uVar0;

	if (!func_591(iParam0))
	{
		return 0;
	}
	if (iParam1 == 296923297 || iParam1 == 1237718549)
	{
		return 1;
	}
	uVar0 = func_1514(iParam0, iParam1);
	return uVar0;
}

void func_1092(int iParam0, int iParam1, bool bParam2)
{
	if (!func_591(iParam0))
	{
		return;
	}
	if (!func_1091(iParam0, iParam1))
	{
		return;
	}
	(Global_40.f_4942[iParam0 /*60*/])->f_3 = iParam1;
	if (bParam2)
	{
		func_1084(iParam0, 25, 1);
	}
}

void func_1093(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (func_1515(iParam2))
		{
			iVar0 = func_1516(iParam2, -1);
			if (func_1517(iParam1, iVar0))
			{
				if (func_1518(iParam1, iVar0))
				{
					if (func_1519(iParam1, iVar0))
					{
						PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam1, "metaped_outfit_request"), iParam1, true, false);
						func_133(iParam1);
					}
				}
				else
				{
					PED::_0x1902C4CFCC5BE57C(iParam1, iVar0);
				}
			}
		}
		func_1520(iParam0, iParam1, 0);
		PED::_0xCC8CA3E88256E58F(iParam1, 0, 1, 1, 1, 0);
		PED::_0xE3144B932DFDFF65(iParam1, 0f, -1, 1, 1);
		PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam1, 10, "ALL");
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 3);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 0);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 5);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 7);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 8);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 9);
		if (bParam3)
		{
			func_1084(iParam0, 66, 0);
		}
	}
}

void func_1094(int iParam0)
{
	func_1521(iParam0);
	func_1522(iParam0, 0);
}

void func_1095(int iParam0, int iParam1)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("weapon_unarmed"), true, 0, false, false);
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("weapon_unarmed"), true, 1, false, false);
		if (PED::IS_PED_A_PLAYER(iParam0) && iParam1 == 1)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::PLAYER_ID(), joaat("weapon_unarmed"), 0);
			}
		}
	}
}

void func_1096(int iParam0, int iParam1, bool bParam2)
{
	if (!func_1075(iParam0))
	{
		return;
	}
	func_1523(&(((*Global_1360165)[iParam0 /*1157*/])->f_13), iParam1, bParam2);
}

void func_1097(int iParam0)
{
	func_1084(iParam0, 36, 1);
}

int func_1098(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar1, true, iVar0, true);
		if (!WEAPON::IS_WEAPON_VALID(iVar1))
		{
		}
		else if (!WEAPON::_0x0556E9D2ECF39D01(iVar1))
		{
		}
		else
		{
			iVar2 = 1;
			WEAPON::_0xE9BD19F8121ADE3E(iParam0, iVar1);
		}
		iVar0++;
	}
	return iVar2;
}

void func_1099(int iParam0, int iParam1)
{
	if (!func_1075(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 11:
			if ((Global_40.f_4942[iParam0 /*60*/])->f_3 == -1341683964)
			{
				func_1524(iParam1, joaat("weapon_revolver_cattleman_sadie"), 0, 0, 2, 1, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
				func_1524(iParam1, joaat("weapon_revolver_cattleman_sadie_dualwield"), 0, 0, 3, 1, 1, 1056964608, 1065353216, -1, 0, 1, 0, 0);
			}
			break;
	}
}

void func_1100(var uParam0)
{
	func_1525(uParam0, 0f);
}

void func_1101(int iParam0, bool bParam1)
{
	if (!func_1075(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_1526(&(((*Global_1360165)[iParam0 /*1157*/])->f_12), 1))
		{
			func_1096(iParam0, 1, 0);
		}
	}
	func_1096(iParam0, 16, bParam1);
}

void func_1102(int iParam0)
{
	func_1096(iParam0, 8, 0);
}

int func_1103(int iParam0, bool bParam1)
{
	if (!func_591(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_NAMESPACE48::_0x800DF3FC913355F3(((*Global_1360165)[iParam0 /*1157*/])->f_1))
		{
			func_1527(iParam0);
		}
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_1;
}

void func_1104(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (func_591(iParam0))
	{
		iVar1 = func_581(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			iVar0 = PED::GET_PED_MAX_HEALTH(iVar1);
			PED::SET_PED_CONFIG_FLAG(iVar1, 179, true);
			func_1528(iParam0);
		}
	}
	if (func_1082(iParam0, 5, 1))
	{
		PED::SET_PED_CONFIG_FLAG(func_581(iParam0), 137, true);
	}
}

void func_1105(int iParam0, bool bParam1)
{
	if (!func_1075(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(func_581(iParam0), 204, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(func_581(iParam0), 204, false);
	}
}

void func_1106(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	var uVar0;
	int iVar1;

	if (!func_591(iParam0))
	{
		return;
	}
	if (func_594(iParam0))
	{
		if (!func_1529(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_1082(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	uVar0 = func_1103(iParam0, 0);
	if (!MISC::_0x716F17F8A0419F95(uVar0))
	{
		return;
	}
	iVar1 = func_581(iParam0);
	if (((ENTITY::DOES_ENTITY_EXIST(iVar1) && func_1530(iParam0) < 10000f) && !bParam3) && !CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::IS_ENTITY_ATTACHED(iVar1))
	{
		if (((TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar1, 1) || TASK::_0x0C3CB2E600C8977D(iVar1, 1)) || PED::IS_PED_ON_MOUNT(iVar1)) || PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
		{
			PED::_0xF1C03A5352243A30(iVar1);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar1, 1, 1);
		}
		ENTITY::DETACH_ENTITY(iVar1, true, true);
	}
	if (bParam4)
	{
		func_1084(iParam0, 2, 1);
	}
	else
	{
		func_1531(iParam0);
		func_1084(iParam0, 1, 1);
	}
}

void func_1107(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_591(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (&Global_40.f_4942[iParam0 /*60*/] - (Global_40.f_4942[iParam0 /*60*/] && iParam1));
}

int func_1108(int iParam0)
{
	if (!func_591(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(((*Global_1360165)[iParam0 /*1157*/])->f_70))
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_70 = 0;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_70;
}

void func_1109(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (!func_1075(iParam1))
	{
		return;
	}
	iVar0 = func_1108(iParam1);
	if (func_1532(iParam1))
	{
		if (!func_1533(iParam1))
		{
			return;
		}
	}
	func_1083(iParam1, 39, 1);
	func_1534(iParam1, 64, 0);
	((*Global_1360165)[iParam1 /*1157*/])->f_70.f_11 = 0;
	func_1534(iParam1, 8, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!bParam2)
		{
			func_1534(iParam1, 512, 1);
			PED::SET_PED_KEEP_TASK(iVar0, true);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			func_1084(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_1535(iParam1, 0, 1, 1, 1);
		}
	}
}

int func_1110(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1075(iParam0))
	{
		return 0;
	}
	if (func_701(iParam0, 32, 1))
	{
		return 0;
	}
	if (!func_701(iParam0, 2, 1))
	{
		return 0;
	}
	if (!func_701(iParam0, 4, 1))
	{
		return 0;
	}
	if (func_1082(iParam0, 33, 1))
	{
		return 0;
	}
	if (func_594(iParam0))
	{
		return 0;
	}
	if (func_1536(iParam0))
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

int func_1111(int iParam0)
{
	if (func_591(iParam0))
	{
		if (func_582(Global_1360165[iParam0 /*1157*/], 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_1112(int iParam0)
{
	if (func_591(iParam0))
	{
		return Global_1360165[iParam0 /*1157*/];
	}
	return 0;
}

int func_1113(int iParam0)
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

int func_1114(int iParam0)
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

void func_1115(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
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

	iVar0 = func_525();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_1537(iParam0);
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
	if (func_125(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_372())
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
	Global_40.f_11095.f_35 = func_1236(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_525();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || iParam7)
	{
		iVar6 = func_1538(iVar1);
		func_1540(func_1539(), 0, 4000);
		func_1541(Global_40.f_11095.f_35);
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
		func_154(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_481(func_155(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(iParam5))
			{
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_1114(14))
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
					sParam4 = func_1542(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_1020(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_1020(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_481(func_155(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_1114(4))
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
					sParam4 = func_1542(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_1020(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_1020(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_155(-1990689970) };
	STATS::STAT_ID_SET_INT(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_0xE6B763C7F4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_1275(10, 1);
	}
}

void func_1116(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0 /*6*/] = iParam1;
	(Global_1347477->f_155[iParam0 /*6*/])->f_2 = iParam2;
	(Global_1347477->f_155[iParam0 /*6*/])->f_3 = iParam3;
	(Global_1347477->f_155[iParam0 /*6*/])->f_4 = iParam4;
	(Global_1347477->f_155[iParam0 /*6*/])->f_5 = bParam5;
	(Global_1347477->f_155[iParam0 /*6*/])->f_1 = MISC::GET_GAME_TIMER() + 500;
}

int func_1117()
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

int func_1118()
{
	if (!func_32(39))
	{
		return 0;
	}
	if (func_32(43))
	{
		return 0;
	}
	return 1;
}

int func_1119(int iParam0)
{
	if (func_28() != -1)
	{
		return 0;
	}
	if (!func_242(iParam0))
	{
		return 0;
	}
	return func_693(((*Global_1347702)[iParam0 /*49*/])->f_15);
}

int func_1120(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return 7;
		case 79:
			return 0;
		case 43:
			return 1;
		case 98:
			return 2;
		case 58:
			return 3;
		case 71:
			return 4;
		case 4:
			return 5;
		case 76:
			return 8;
		case 9:
			return 6;
		case 5:
			return 9;
		case 38:
			return 10;
		case 105:
			return 11;
		case 92:
			return 12;
		case 78:
			return 13;
		case 26:
			return 14;
		case 37:
			return 15;
		case 115:
			return 16;
		default:
			break;
	}
	return -1;
}

bool func_1121(int iParam0, int iParam1)
{
	if (!func_1543(iParam0))
	{
		return false;
	}
	return (Global_40.f_9384[iParam0 /*2*/] && iParam1) != 0;
}

void func_1122(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, bool bParam5)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_36307)
	{
		if (func_1544(iVar0) == iParam0 && func_107(iVar0) == iParam1)
		{
			func_1545(iVar0, -1);
			func_1546(iVar0, 0);
			func_1547(iVar0, 0);
			if (MAP::DOES_BLIP_EXIST(&(Global_36307[iVar0])))
			{
				if (bParam5)
				{
					MAP::SET_RADAR_ZOOM(&(Global_36307[iVar0]));
				}
				MAP::REMOVE_BLIP(Global_36307[iVar0]);
			}
			return;
		}
		iVar0++;
	}
}

int func_1123(int iParam0, int iParam1, vector3 vParam2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 == 0)
	{
		return -1;
	}
	if (func_588(vParam2))
	{
		return -1;
	}
	iVar1 = -1;
	iVar2 = func_1548(vParam2);
	iVar0 = 0;
	while (iVar0 < Global_36307)
	{
		if (func_107(iVar0) == 0 && iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		else if ((func_107(iVar0) == iParam1 && func_1544(iVar0) == iParam0) && iVar2 == func_303(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	if (iVar1 > -1 && iVar1 < 250)
	{
		func_1545(iVar1, iParam0);
		func_1546(iVar1, iParam1);
		func_1547(iVar1, iVar2);
		func_1549(iVar1, iParam5);
		func_108(iVar1);
		MAP::SET_BLIP_FLASH_TIMER(&(Global_36307[iVar1]), iParam1, 0);
		return iVar1;
	}
	return -1;
}

void func_1124(int iParam0, int iParam1, vector3 vParam2, char* sParam5)
{
	int iVar0;
	int iVar1;

	iVar0 = func_1548(vParam2);
	iVar1 = 0;
	while (iVar1 < Global_36307)
	{
		if ((func_1544(iVar1) == iParam0 && func_107(iVar1) == iParam1) && func_303(iVar1) == iVar0)
		{
			if (MAP::DOES_BLIP_EXIST(&(Global_36307[iVar1])))
			{
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(&(Global_36307[iVar1]), sParam5);
			}
			return;
		}
		iVar1++;
	}
}

void func_1125(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < Global_36307)
	{
		if (MAP::DOES_BLIP_EXIST(&(Global_36307[iParam0])))
		{
			MAP::_0xBD62D98799A3DAF0(&(Global_36307[iParam0]), iParam1);
		}
	}
}

void func_1126(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_36307)
	{
		if (func_1544(iVar0) == iParam0)
		{
			if (MAP::DOES_BLIP_EXIST(&(Global_36307[iVar0])))
			{
				MAP::_0x662D364ABF16DE2F(&(Global_36307[iVar0]), 580546400);
			}
			return;
		}
		iVar0++;
	}
}

int func_1127(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_36307)
	{
		if (func_1544(iVar0) == iParam0 && func_107(iVar0) == iParam1)
		{
			if (MAP::DOES_BLIP_EXIST(&(Global_36307[iVar0])))
			{
				return MAP::_0x662D364ABF16DE2F(&(Global_36307[iVar0]), iParam2);
			}
			return 0;
		}
		iVar0++;
	}
	return 0;
}

int func_1128(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_36307)
	{
		if (func_1544(iVar0) == iParam0 && func_107(iVar0) == iParam1)
		{
			if (MAP::DOES_BLIP_EXIST(&(Global_36307[iVar0])))
			{
				return MAP::_0xB059D7BD3D78C16F(&(Global_36307[iVar0]), iParam2);
			}
			return 0;
		}
		iVar0++;
	}
	return 0;
}

void func_1129(int iParam0, vector3 vParam1)
{
	if (func_1550(iParam0))
	{
		((*Global_1888801)[iParam0 /*35*/])->f_1 = MISC::GET_GAME_TIMER();
		return;
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(((*Global_1888801)[iParam0 /*35*/])->f_9, false) || MISC::IS_STRING_NULL_OR_EMPTY(&(((*Global_1888801)[iParam0 /*35*/])->f_26)))
	{
		if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1888801)[iParam0 /*35*/])->f_3))
		{
			if (VOLUME::_0xF256A75210C5C0EB(((*Global_1888801)[iParam0 /*35*/])->f_3, vParam1))
			{
				((*Global_1888801)[iParam0 /*35*/])->f_1 = MISC::GET_GAME_TIMER();
				func_1551(iParam0);
				return;
			}
		}
		if ((*Global_1888801)[iParam0 /*35*/])->f_1 + 2500 > MISC::GET_GAME_TIMER()
		{
			return;
		}
	}
	if (((*Global_1888801)[iParam0 /*35*/])->f_9 != 0)
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(((*Global_1888801)[iParam0 /*35*/])->f_9, false))
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(((*Global_1888801)[iParam0 /*35*/])->f_9, 523);
				((*Global_1888801)[iParam0 /*35*/])->f_9 = 0;
			}
			else if (!SCRIPTS::_0x30BED53646C86D11(((*Global_1888801)[iParam0 /*35*/])->f_9))
			{
				SCRIPTS::_0x7DE4643157AD646C(((*Global_1888801)[iParam0 /*35*/])->f_9);
			}
		}
		if (!SCRIPTS::_DOES_THREAD_EXIST(((*Global_1888801)[iParam0 /*35*/])->f_9))
		{
			((*Global_1888801)[iParam0 /*35*/])->f_9 = 0;
		}
		else
		{
			return;
		}
	}
	func_347(iParam0, 8);
	switch (((*Global_1888801)[iParam0 /*35*/])->f_20)
	{
		case 1:
		case 2:
			if (func_28() == -1)
			{
				if (Global_1327479->f_6 != iParam0)
				{
					func_161(-30, 0, 1);
					Global_1327479->f_6 = iParam0;
				}
			}
			break;
		case 3:
			break;
		case 7:
			break;
		case 4:
			break;
	}
	func_347(iParam0, 11);
	if ((Global_23117[iParam0 /*11*/])->f_10 < 10)
	{
		(Global_23117[iParam0 /*11*/])->f_10 = 0;
	}
	func_1552(func_572(iParam0, 1, 1));
	if (iParam0 == Global_1894899->f_2)
	{
		func_1551(-1);
		func_1553();
	}
}

void func_1130(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	bool bVar7;
	int iVar8;

	if (!func_126(iParam0))
	{
		return;
	}
	bVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(&(((*Global_1888801)[iParam0 /*35*/])->f_26)) != false;
	bVar1 = false;
	if (bVar0)
	{
		if (!SCRIPTS::HAS_SCRIPT_LOADED(&(((*Global_1888801)[iParam0 /*35*/])->f_26)))
		{
			SCRIPTS::REQUEST_SCRIPT(&(((*Global_1888801)[iParam0 /*35*/])->f_26));
			return;
		}
	}
	iVar2 = ((*Global_1888801)[iParam0 /*35*/])->f_20;
	bVar7 = iParam0 == func_44();
	if (((bVar0 && bVar7) && Global_1879534) // PointerArith)
	{
		bVar0 = false;
	}
	switch (iVar2)
	{
		case 3:
			if (func_1554(iParam0, 1))
			{
				bVar1 = true;
			}
		default:
			break;
	}
	if (bVar0)
	{
		vVar3.x = iParam0;
		iVar8 = 1024;
		if (MISC::GET_HASH_KEY(&(((*Global_1888801)[iParam0 /*35*/])->f_26)) != -135832742)
		{
			if (iVar2 == 8)
			{
				iVar8 = 512;
			}
			else if (bVar7)
			{
				iVar8 = 5000;
			}
			else if (iVar2 == 3)
			{
				iVar8 = 2049;
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar8 = 5500;
		}
		if (((*Global_1888801)[iParam0 /*35*/])->f_9 != 0)
		{
			if (SCRIPTS::IS_THREAD_ACTIVE(((*Global_1888801)[iParam0 /*35*/])->f_9, false))
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(((*Global_1888801)[iParam0 /*35*/])->f_9, 523);
				}
				else
				{
					SCRIPTS::_0x7DE4643157AD646C(((*Global_1888801)[iParam0 /*35*/])->f_9);
				}
			}
			if (!SCRIPTS::_DOES_THREAD_EXIST(((*Global_1888801)[iParam0 /*35*/])->f_9))
			{
				((*Global_1888801)[iParam0 /*35*/])->f_9 = 0;
			}
			else
			{
				return;
			}
		}
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(((*Global_1888801)[iParam0 /*35*/])->f_26))) > 0)
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				PLAYER::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME(&(((*Global_1888801)[iParam0 /*35*/])->f_26), 523);
			}
			else
			{
				SCRIPTS::_0x7423F7835770F619(MISC::GET_HASH_KEY(&(((*Global_1888801)[iParam0 /*35*/])->f_26)));
			}
			return;
		}
		vVar3.f_2 = iParam1;
		((*Global_1888801)[iParam0 /*35*/])->f_9 = BUILTIN::START_NEW_SCRIPT_WITH_ARGS(&(((*Global_1888801)[iParam0 /*35*/])->f_26), &vVar3, 4, iVar8);
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(((*Global_1888801)[iParam0 /*35*/])->f_26));
	}
	func_351(iParam0, 1);
	func_351(iParam0, 2);
	func_1555(bVar1);
}

void func_1131(int iParam0, vector3 vParam1, bool bParam4)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	if (Global_1572887->f_12 == -1)
	{
		if (!PLAYER::IS_PLAYER_PLAYING(iVar0))
		{
			return;
		}
		if (func_77(&Global_1935630, 4096))
		{
			if (!func_1556())
			{
				return;
			}
		}
	}
	if (!func_1550(iParam0))
	{
		if (!VOLUME::_0xF256A75210C5C0EB(((*Global_1888801)[iParam0 /*35*/])->f_3, vParam1))
		{
			if (Global_1894899->f_2 == iParam0)
			{
				func_1551(-1);
			}
			return;
		}
		if (func_126(Global_1894899->f_2))
		{
			if (SCRIPTS::_DOES_THREAD_EXIST(((*Global_1888801)[Global_1894899->f_2 /*35*/])->f_9))
			{
				if (bParam4)
				{
					func_351(Global_1894899->f_2, 2);
				}
				return;
			}
		}
	}
	MemCopy(&(((*Global_1888801)[iParam0 /*35*/])->f_26), {func_1557(iParam0)}, 4);
	if (HUD::GET_LENGTH_OF_LITERAL_STRING(&(((*Global_1888801)[iParam0 /*35*/])->f_26)) != 0)
	{
		SCRIPTS::REQUEST_SCRIPT(&(((*Global_1888801)[iParam0 /*35*/])->f_26));
	}
	else
	{
		func_351(iParam0, 2);
	}
	func_351(iParam0, 1);
	if (((*Global_1888801)[iParam0 /*35*/])->f_20 != 8)
	{
		func_1558(iParam0, 0);
	}
	PLAYER::_0xFA7DAAE3959E6C7B(iVar0, func_1559());
	if ((((*Global_1888801)[iParam0 /*35*/])->f_20 == 1 || ((*Global_1888801)[iParam0 /*35*/])->f_20 == 2) && !CAM::IS_SCREEN_FADED_OUT())
	{
		EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(-591924351, Global_35, -1f, -1f, -1f, -1082130432, -1082130432, 1127481344, 0, 0, -1, -1);
	}
	func_1551(iParam0);
	func_1560(iParam0);
	func_574(func_572(iParam0, 1, 1), -1);
}

bool func_1132(int iParam0)
{
	return iParam0 != 0;
}

int func_1133()
{
	return ZONE::_GET_WATER_MAP_ZONE_AT_COORDS(Global_36);
}

int func_1134(int iParam0)
{
	if (iParam0 == 0)
	{
		return (func_1561() && func_1562());
	}
	else if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 3)
	{
		return func_1563(iParam0, 1);
	}
	return 0;
}

void func_1135(int iParam0, var uParam1, var uParam2, var uParam3)
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

bool func_1136(vector3 vParam0, vector3 vParam3, float fParam6, float fParam7, float fParam8)
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

char* func_1137(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
						return func_1023(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_1023(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
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

bool func_1138()
{
	return DATAFILE::_0x603AC35FD4602C76(Global_1359489->f_361.f_195);
}

int func_1139(int iParam0)
{
	switch (iParam0)
	{
		case 689943881:
			return 5;
		case 1903089923:
			return 13;
		case 167109702:
			return 14;
		case 671600831:
			return 16;
		case 309887362:
			return 17;
		default:
			break;
	}
	return -1;
}

void func_1140(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = { 0f, 0f, 0f };
	uParam0->f_7 = { 0f, 0f, 0f };
	uParam0->f_11 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_10))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_10));
	}
}

int func_1141(int iParam0)
{
	struct<5> Var0;

	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_4;
}

int func_1142(int iParam0)
{
	switch (iParam0)
	{
		case -2085163631:
			return 0;
		case -4613767:
			return 0;
		case 1567162363:
			return 1;
		case 456471693:
			return 2;
		case -1772963474:
			return 3;
		case 1881496386:
			return 4;
		case 711768994:
			return 5;
		case -440834066:
			return 6;
		case -1363847832:
			return 7;
		case 967769300:
			return 8;
		case -1436873944:
			return 9;
		case -1585669139:
			return 10;
		case 16791368:
			return 11;
		case 1452922822:
			return 12;
		case 549538301:
			return 13;
		case 974698954:
			return 14;
		case 445881012:
			return 15;
		case -2043891857:
			return 16;
		case 419656993:
			return 17;
		case -1732457315:
			return 18;
		case 1794318026:
			return 19;
		case 2035159966:
			return 20;
		case 770832805:
			return 21;
		case -1109814766:
			return 22;
		case -1080317735:
			return 23;
		case -1075550363:
			return 24;
		case 2138576151:
			return 25;
		case 1180954297:
			return 26;
		case 783603394:
			return 27;
		case -170458336:
			return 29;
		case 1285083821:
			return 30;
		case -1840907462:
			return 31;
		case 756710130:
			return 32;
		case 388370024:
			return 33;
		case 1092296123:
			return 34;
		case 467491346:
			return 35;
		case -1391584612:
			return 36;
		case -152111346:
			return 37;
		case 1447551317:
			return 38;
		case 153136092:
			return 39;
		case 1304405732:
			return 40;
		case 1074984055:
			return 41;
		case 1087476368:
			return 50;
		case -1768057340:
			return 51;
		case 1218874593:
			return 42;
		case -1438443836:
			return 52;
		case -2036340415:
			return 43;
		case 803939643:
			return 44;
		case -632496195:
			return 53;
		case -965943619:
			return 45;
		case 283532073:
			return 46;
		case -69067491:
			return 47;
		case -1864895118:
			return 48;
		case -1929806571:
			return 54;
		case 1162337247:
			return 28;
		case -698525417:
			return 55;
		case -1149739894:
			return 56;
		case 380507325:
			return 49;
		case 407796241:
			return 57;
		case -152267914:
			return 58;
		case -1675443320:
			return 59;
		case 1940341639:
			return 60;
		case 1846596114:
			return 61;
		case 907708501:
			return 62;
		case 1825644981:
			return 64;
		case 2065937607:
			return 65;
		case -211317417:
			return 66;
		case 1801307910:
			return 67;
		case -4118897:
			return 68;
		case 1853610692:
			return 69;
		case -1574644415:
			return 70;
		case 2133055515:
			return 71;
		case -1413401932:
			return 72;
		case 801090761:
			return 73;
		case 2131218644:
			return 74;
		case 1708823660:
			return 75;
		case 7976942:
			return 76;
		case 2111120505:
			return 77;
		case 176893118:
			return 78;
		case 602306665:
			return 63;
		case 1179148161:
			return 79;
		case 547412068:
			return 80;
		case -1539748801:
			return 81;
		case -1605119912:
			return 82;
		case -884464063:
			return 83;
		case -1420970720:
			return 84;
		case 1017024547:
			return 85;
		case -1204497306:
			return 86;
		case -1621069480:
			return 87;
		case -458604261:
			return 88;
		case -923391614:
			return 89;
		case -689247089:
			return 90;
		case 44049568:
			return 91;
		case 1350259552:
			return 92;
		case -61661574:
			return 93;
		case -725338054:
			return 94;
		case -770123507:
			return 95;
		case 1322486734:
			return 96;
		case -460939553:
			return 97;
		case -1451863552:
			return 98;
		case 713715980:
			return 101;
		case -31204969:
			return 102;
		case -1720064790:
			return 103;
		case 173833068:
			return 99;
		case -1681004136:
			return 100;
		case -532172775:
			return 104;
		case -739067737:
			return 105;
		case -1203133835:
			return 106;
		case -1947411598:
			return 107;
		case -1049753365:
			return 108;
		case -1298718762:
			return 109;
		case -595083064:
			return 110;
		case 884833917:
			return 111;
		case 2141950651:
			return 112;
		case -1437650729:
			return 113;
		case 672925454:
			return 126;
		case 846062774:
			return 127;
		case 1369756178:
			return 120;
		case -736172423:
			return 121;
		case 1597070291:
			return 122;
		case -159501564:
			return 124;
		case -1438809608:
			return 123;
		case -102682392:
			return 125;
		case -81068979:
			return 114;
		case 227618407:
			return 115;
		case 2106043438:
			return 116;
		case -1868356491:
			return 129;
		case -1380256064:
			return 117;
		case -2118469183:
			return 118;
		case -558997834:
			return 119;
		case 658339366:
			return 128;
		default:
			break;
	}
	return -1;
}

int func_1143(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -467647619;
		case 2:
			return -1692078269;
		case 3:
			return -1411867178;
		case 4:
			return -1295797652;
		case 5:
			return -1306960697;
		case 6:
			return 567333282;
		case 7:
			return 669046098;
		case 8:
			return -1099073159;
		case 9:
			return 1137962872;
		case 10:
			return -74329438;
		case 11:
			return 1637646544;
		case 12:
			return 1226042171;
		case 13:
			return -338802011;
		case 14:
			return 1476368342;
		case 15:
			return 794168062;
		case 16:
			return -1058589986;
		case 17:
			return 1586830886;
		case 18:
			return 676666991;
		case 19:
			return -770025009;
		case 20:
			return -1897617972;
		case 21:
			return -930732451;
		case -1:
		case 0:
		case 22:
			return 0;
		default:
			break;
	}
	return 0;
}

int func_1144(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -1692636244;
		case 2:
			return -1014982708;
		case 3:
			return -1073061309;
		case 4:
			return -1255977291;
		case 5:
			return -222065427;
		case 6:
			return 1097021450;
		case 7:
			return -1103252731;
		case 8:
			return -717460974;
		case 9:
			return -1493460403;
		case 10:
			return 1749015556;
		case 11:
			return 1637212828;
		case 12:
			return -1193524449;
		case 13:
			return -363803270;
		case 14:
			return 308888437;
		case 15:
			return -2135469418;
		case 16:
			return -666501838;
		case 17:
			return -1275900794;
		case 18:
			return 1669790260;
		case 19:
			return 1328065892;
		case 20:
			return 923251562;
		case 21:
			return 2082971178;
		case -1:
		case 0:
		case 22:
			return 0;
		default:
			break;
	}
	return 0;
}

char* func_1145(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HEADSHOT_DUTCH";
		case 1:
			return "HEADSHOT_JOHN";
		case 2:
			return "HEADSHOT_JAVIER";
		case 3:
			return "HEADSHOT_BILL";
		case 4:
			return "HEADSHOT_UNCLE";
		case 5:
			return "HEADSHOT_HOSEA";
		case 6:
			return "HEADSHOT_MICAH";
		case 7:
			return "HEADSHOT_CHARLES";
		case 8:
			return "HEADSHOT_SEAN";
		case 9:
			return "HEADSHOT_LENNY";
		case 10:
			return "HEADSHOT_KIERAN";
		case 11:
			return "HEADSHOT_SADIE";
		case 13:
			return "HEADSHOT_ABIGAIL";
		case 14:
			return "HEADSHOT_JACK";
		case 15:
			return "HEADSHOT_MARYBETH";
		case 16:
			return "HEADSHOT_MOLLY";
		case 17:
			return "HEADSHOT_PEARSON";
		case 18:
			return "HEADSHOT_STRAUSS";
		case 19:
			return "HEADSHOT_SUSAN";
		case 20:
			return "HEADSHOT_KAREN";
		case 21:
			return "HEADSHOT_SWANSON";
		case 22:
			return "HEADSHOT_TILLY";
		case 23:
			return "HEADSHOT_TRELAWNY";
		case 24:
			return "HEADSHOT_CLEET";
		case 25:
			return "HEADSHOT_JOE";
		default:
			break;
	}
	return "";
}

Vector3 func_1146(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1343.699f, 2429.397f, 307.0626f;
		case 1:
			return -123.1805f, -28.8611f, 94.8478f;
		case 2:
			return 667.9077f, -1252.78f, 42.9221f;
		case 3:
			return 1880.807f, -1873.231f, 41.8094f;
		case 4:
			return 1422.625f, -7332.473f, 80.5977f;
		case 5:
			return 2254.96f, -758.12f, 41.75f;
		case 6:
			return 2351.282f, 1362.077f, 104.9752f;
		case 7:
			return -2593.21f, 453.9533f, 145.9973f;
		case 8:
			return func_1564();
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_1147(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -400046463;
		case 2:
			return 612022325;
		case 3:
			return -408808829;
		case 4:
			return -1166493723;
		case 5:
			return 636060187;
		case 6:
			return 908457788;
		case 7:
			return 1000496542;
		case 8:
			return 1291752698;
		case 9:
			return 28343229;
		case 10:
			return -442212335;
		case 11:
			return -905786637;
		case 12:
			return -32720610;
		case 13:
			return 1867124758;
		case 14:
			return 1191082472;
		case 15:
			return -2055932072;
		case 16:
			return 860706848;
		case 17:
			return 431084994;
		case 18:
			return -1845699285;
		case 19:
			return -309743615;
		case 20:
			return -1308505388;
		case 21:
			return -1196637421;
		case -1:
		case 0:
		case 22:
			return 0;
		default:
			break;
	}
	return 0;
}

void func_1148(int iParam0, int iParam1, char* sParam2)
{
	int iVar0;
	char* sVar1;

	iVar0 = iParam0;
	if (iParam1 == 0)
	{
		sVar1 = MISC::_CREATE_VAR_STRING(0, sParam2);
	}
	else
	{
		sVar1 = MISC::_CREATE_VAR_STRING(0, iParam1);
	}
	StringCopy(&((Global_1359489->f_361.f_258[iVar0 /*6*/])->f_2), sVar1, 32);
}

int func_1149(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
		case 10:
		case 11:
		case 18:
			return 761950088;
		case 5:
			return -1131986109;
		case 6:
			return 1756591705;
		case 8:
			return 2110897046;
		case 9:
			return 1947074040;
		case 12:
			return 361762491;
		case 13:
			return 542329524;
		case 14:
			return -918949028;
		case 16:
			return -407171189;
		case 15:
			return -1303018308;
		case 17:
			return -1427069925;
		case 19:
			return -1950223422;
		case 20:
			return 364912121;
		case 21:
			return -2103092431;
		default:
			break;
	}
	return 0;
}

void func_1150()
{
	if (MISC::_0x0D0AE5081F88CFE1(-2137341727))
	{
		MISC::_0x154340E87D8CC178(-2137341727);
	}
	if (MISC::_0x0D0AE5081F88CFE1(-1564940634))
	{
		MISC::_0x154340E87D8CC178(-1564940634);
	}
	if (MISC::_0x0D0AE5081F88CFE1(-1881226198))
	{
		MISC::_0x154340E87D8CC178(-1881226198);
	}
}

void func_1151(int iParam0, float fParam1)
{
	struct<6> Var0;

	MISC::_0x94FCADCF9F0C368E(iParam0);
	Var0.f_3 = 4;
	Var0 = 1427759409; /* GXTEntry: "Thimble" */
	Var0.f_1 = fParam1;
	Var0.f_5 = 1;
	Var0.f_4 = 0;
	MISC::_0xAF3A84C7DE6A1DC5(iParam0, &Var0);
}

int func_1152(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
		case 10:
		case 11:
		case 18:
			return 541204999;
		case 5:
			return 719640430;
		case 6:
			return -1918666284;
		case 8:
			return 123897536;
		case 9:
			return -2020390142;
		case 12:
			return -2029175088;
		case 13:
			return -59852486;
		case 14:
			return 1490755751;
		case 16:
			return -976438882;
		case 15:
			return -1367257557;
		case 17:
			return 1958136286;
		case 19:
			return -525693816;
		case 20:
			return 1187279835;
		case 21:
			return 1403739960;
		default:
			break;
	}
	return 0;
}

int func_1153(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		return func_1565(iParam0);
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_1154(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = _NAMESPACE71::_0x18D6869FBFFEC0F8(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

void func_1155(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_1156(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0);
}

int func_1157(int iParam0)
{
	if (func_1566(iParam0) && func_162(iParam0, 1, 0))
	{
		return 1;
	}
	else if (func_1567(iParam0) && func_1568(iParam0))
	{
		return 1;
	}
	return 0;
}

char* func_1158(char* sParam0)
{
	return sParam0;
}

int func_1159(int iParam0)
{
	if (iParam0 == 3)
	{
		return 0;
	}
	return 1;
}

int func_1160(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1490884871;
		case 1:
			return 323124696;
		case 2:
			return -2108314374;
		case 3:
			return -1320934717;
		case 4:
			return -1193798153;
		case 5:
			return -787702678;
		case 6:
			return -804542901;
		case 7:
			return -1696275132;
		case 8:
			return -395458616;
		case 9:
			return -161595323;
		case 10:
			return -1114363619;
		case 11:
			return -368407134;
		case 12:
			return 1997759228;
		case 13:
			return 1265573293;
		case 14:
			return -1030441283;
		default:
			break;
	}
	return 0;
}

int func_1161(int iParam0)
{
	switch (iParam0)
	{
		case 323124696:
			return -642026005;
		case -2108314374:
			return -940584364;
		case -1193798153:
			return 1972645282;
		case -787702678:
			return 1667205433;
		case -804542901:
			return 1362715885;
		case -1696275132:
			return 1053540370;
		case -161595323:
			return -1100103852;
		case -1114363619:
			return -1409869209;
		case -368407134:
			return -1760235357;
		case 1997759228:
			return -138366827;
		case 1265573293:
			return -1261163843;
		case -1030441283:
			return -963523016;
		case -1490884871:
			return 560825326;
		default:
			break;
	}
	return 0;
}

bool func_1162(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

bool func_1163(int iParam0)
{
	return &(Global_40.f_11184.f_5[iParam0]);
}

bool func_1164(int iParam0)
{
	return func_1439(func_1569(iParam0));
}

bool func_1165(int iParam0)
{
	return func_1570(Global_35, iParam0);
}

int func_1166(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (iVar0 == -1)
		{
		}
		else if (((Global_40.f_1095.f_1[iParam0 /*436*/])->f_15[iVar0 /*94*/])->f_1 == iParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1167(int iParam0)
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
		case 4:
			return 4;
		case 5:
			return 5;
		case 6:
			return 6;
		case 7:
			return 7;
		case 8:
			return 8;
		case 9:
			return 9;
		case 10:
			return 10;
		case 11:
			return 11;
		case 12:
			return 12;
		case 13:
			return 13;
		case 14:
			return 14;
		default:
			break;
	}
	return 15;
}

int func_1168(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 2)
			{
				iVar0 = joaat("a_c_fishbluegil_01_ms");
			}
			else
			{
				iVar0 = joaat("a_c_fishbluegil_01_sm");
			}
			break;
		case 1:
			if (iParam1 == 2)
			{
				iVar0 = joaat("a_c_fishbullheadcat_01_ms");
			}
			else
			{
				iVar0 = joaat("a_c_fishbullheadcat_01_sm");
			}
			break;
		case 2:
			if (iParam1 == 2)
			{
				iVar0 = joaat("a_c_fishchainpickerel_01_ms");
			}
			else
			{
				iVar0 = joaat("a_c_fishchainpickerel_01_sm");
			}
			break;
		case 3:
			if (iParam1 == 2)
			{
				iVar0 = joaat("a_c_fishchannelcatfish_01_xl");
			}
			else
			{
				iVar0 = joaat("a_c_fishchannelcatfish_01_lg");
			}
			break;
		case 4:
			iVar0 = joaat("a_c_fishlakesturgeon_01_lg");
			break;
		case 5:
			if (iParam1 == 2)
			{
				iVar0 = joaat("a_c_fishlargemouthbass_01_lg");
			}
			else
			{
				iVar0 = joaat("a_c_fishlargemouthbass_01_ms");
			}
			break;
		case 6:
			iVar0 = joaat("a_c_fishlongnosegar_01_lg");
			break;
		case 7:
			iVar0 = joaat("a_c_fishmuskie_01_lg");
			break;
		case 8:
			iVar0 = joaat("a_c_fishnorthernpike_01_lg");
			break;
		case 9:
			if (iParam1 == 2)
			{
				iVar0 = joaat("a_c_fishperch_01_ms");
			}
			else
			{
				iVar0 = joaat("a_c_fishperch_01_sm");
			}
			break;
		case 10:
			if (iParam1 == 2)
			{
				iVar0 = joaat("a_c_fishredfinpickerel_01_ms");
			}
			else
			{
				iVar0 = joaat("a_c_fishredfinpickerel_01_sm");
			}
			break;
		case 11:
			if (iParam1 == 2)
			{
				iVar0 = joaat("a_c_fishrockbass_01_ms");
			}
			else
			{
				iVar0 = joaat("a_c_fishrockbass_01_sm");
			}
			break;
		case 12:
			if (iParam1 == 2)
			{
				iVar0 = joaat("a_c_fishsmallmouthbass_01_lg");
			}
			else
			{
				iVar0 = joaat("a_c_fishsmallmouthbass_01_ms");
			}
			break;
		case 13:
			if (iParam1 == 2)
			{
				iVar0 = joaat("a_c_fishsalmonsockeye_01_lg");
			}
			else
			{
				iVar0 = joaat("a_c_fishsalmonsockeye_01_ms");
			}
			break;
		case 14:
			if (iParam1 == 2)
			{
				iVar0 = joaat("a_c_fishrainbowtrout_01_lg");
			}
			else
			{
				iVar0 = joaat("a_c_fishrainbowtrout_01_ms");
			}
			break;
		default:
			break;
	}
	return iVar0;
}

void func_1169(int iParam0, int iParam1)
{
	if (!func_1571(iParam0))
	{
		return;
	}
	Global_40.f_11184.f_5[iParam0] = iParam1;
}

int func_1170(int iParam0)
{
	switch (iParam0)
	{
		case -642026005:
			return 1791726215;
		case -940584364:
			return -1553566002;
		case 1972645282:
			return -528070704;
		case 1667205433:
			return 1214218277;
		case 1362715885:
			return -1424874851;
		case 1053540370:
			return -414895106;
		case -1100103852:
			return -1560294747;
		case -1409869209:
			return 1937997726;
		case -1760235357:
			return 505929754;
		case -138366827:
			return -312076753;
		case -1261163843:
			return 235447783;
		case -963523016:
			return 1793239293;
		case 560825326:
			return -1142443514;
		default:
			break;
	}
	return 0;
}

int func_1171(int iParam0)
{
	switch (iParam0)
	{
		case -642026005:
			return -695777111;
		case -940584364:
			return 1671816740;
		case 1972645282:
			return 1467033526;
		case 1667205433:
			return 1178765838;
		case 1362715885:
			return -1385591042;
		case 1053540370:
			return -1508614120;
		case -1100103852:
			return -116204733;
		case -1409869209:
			return 1041505554;
		case -1760235357:
			return 756063611;
		case -138366827:
			return 1035814529;
		case -1261163843:
			return -1052716565;
		case -963523016:
			return 1265504095;
		case 560825326:
			return 1343260208;
		default:
			break;
	}
	return 0;
}

bool func_1172(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

bool func_1173(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

int func_1174(int iParam0)
{
	switch (iParam0)
	{
		case 1175400068:
			return -507522147;
		case 854689865:
			return 385826331;
		case 1772877245:
			return 88906422;
		case -891504611:
			return 400179125;
		case -1134748898:
			return 93559592;
		case -810270260:
			return 1011255441;
		case 83602522:
			return 720004565;
		case -2054476413:
			return 1620332844;
		case 1934461192:
			return 1331375802;
		case -1434912930:
			return -2062411225;
		case 491871729:
			return 397365919;
		case -1078418763:
			return 1306640139;
		case -1360396008:
			return 1008999312;
		case -462984174:
			return 1163767295;
		case -751449681:
			return 857606528;
		case -1973995525:
			return 1500468770;
		case 1988923494:
			return -2018299223;
		case -1386480124:
			return 2019070964;
		case -1676256391:
			return -1382547854;
		case 901975752:
			return -1872444404;
		case 2119466214:
			return 981506433;
		case 1812453453:
			return -1863104923;
		case 797237060:
			return -1623923992;
		case 468989987:
			return -1730324939;
		case 1393010249:
			return -1491144008;
		case 1099957082:
			return 2101583618;
		case -415281478:
			return -1952302145;
		case -722949619:
			return -640198616;
		case 202086482:
			return -1340078918;
		case -87394864:
			return -1087659311;
		default:
			break;
	}
	return 0;
}

bool func_1175(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

bool func_1176(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

int func_1177(int iParam0)
{
	switch (iParam0)
	{
		case 790725359:
			return -790109104;
		case -1018620084:
			return -1615724059;
		case 1417352943:
			return -41632359;
		case -198238953:
			return -868361476;
		case -1572028097:
			return 435910278;
		case 1013020015:
			return -391015437;
		case 529834059:
			return 43468722;
		case -851121144:
			return 274064175;
		case 489753387:
			return 729946503;
		case 288056757:
			return 818095113;
		default:
			break;
	}
	return 0;
}

int func_1178(vector3 vParam0, var uParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
{
	var uVar0;

	vParam0.f_2 = iParam5;
	uVar0 = *uParam6;
	if (DATAFILE::_DATAFILE_GET_HASH(&uVar0, &vParam0))
	{
		*uParam6 = uVar0;
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_1179(int iParam0)
{
	switch (iParam0)
	{
		case 1928985868:
			return 7;
		case 1784174017:
			return 8;
		case 1763160914:
			return 10;
		case 2051438686:
			return 11;
		case 1155669136:
			return 1;
		case 1871598:
			return 9;
		case -1379218218:
			return 6;
		case 1059981727:
			return 2;
		case -1216736853:
			return 4;
		case 1191674135:
			return 3;
		case -112322057:
			return 12;
		case -823778732:
			return 25;
		case 1338623152:
			return 16;
		case 1401247110:
			return 20;
		case 1007627076:
			return 13;
		case 864606355:
			return 31;
		case 1338525796:
			return 18;
		case -2076625074:
			return 26;
		case -288774278:
			return 15;
		case 1934998953:
			return 14;
		case -1148482643:
			return 32;
		case 603776282:
			return 22;
		case 1339344423:
			return 27;
		case 1562395675:
			return 19;
		case 1316832864:
			return 28;
		case -1619448191:
			return 29;
		case -520130198:
			return 24;
		case 1418253584:
			return 30;
		case -348149883:
			return 33;
		case 814591385:
			return 34;
		case 981348373:
			return 17;
		case -1100417366:
			return 35;
		case 1438856241:
			return 23;
		case -1989143022:
			return 21;
		default:
			break;
	}
	return 0;
}

int func_1180(vector3 vParam0, var uParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_INT(iParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_1181(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = func_1572(iParam0, 1);
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
	return 1;
}

void func_1182(var uParam0)
{
	*uParam0 = 176656832;
	uParam0->f_1 = -15;
	uParam0->f_2 = 1017034651;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

int func_1183(int iParam0, var uParam1, var uParam2)
{
	if (!func_1573(iParam0))
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

int func_1184(int iParam0)
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

int func_1185()
{
	return Global_40.f_8863.f_148;
}

int func_1186(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -707360575;
		case 1:
			return -1278339625;
		case 2:
			return 1880205078;
		case 3:
			return -1201174711;
		case 4:
			return 151582343;
		case 5:
			return 1231074654;
		case 6:
			return -642492359;
		case 7:
			return 1673898385;
		case 8:
			return 5171247;
		default:
			break;
	}
	return 0;
}

void func_1187(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!func_67(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_693(iParam0) && !func_753(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_92(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_693(iParam0))
	{
		iParam2 = -1;
	}
	if (func_90(iParam0) == 3 || (func_90(iParam0) == 1 && STATS::_0x01F4D242765C6B24(func_92(iParam0))))
	{
		func_93(func_91(iParam0), func_92(iParam0), iParam2);
		if ((!func_67(Global_1572864->f_8) && !func_610(0, 1, 0)) && !func_77(&Global_1935630, 32768))
		{
			iVar0 = func_1242(iParam0);
			if (iVar0 != -1)
			{
				func_1243(0);
			}
			else if (func_91(iParam0) == 8)
			{
				iVar0 = func_1244();
				if (iVar0 != -1)
				{
					func_1243(0);
				}
			}
		}
	}
	func_1222(iParam0, 0);
	if (func_761(0) == iParam0)
	{
		func_25(1);
		func_1229(0);
		func_1278(1);
	}
	func_1241(iParam0, 1);
	func_1226(iParam0);
}

int func_1188(int iParam0)
{
	int iVar0;

	if (&Global_1898329 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (&Global_1898329 - 1))
	{
		if (Global_1898330[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1189(int iParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam3 = func_295(iParam0);
	*uParam1 = func_683(iParam0);
	*uParam2 = func_750(iParam0);
}

int func_1190(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_1326(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	iVar1 = func_1574(iVar0);
	if (iVar1 == -1)
	{
		return 0;
	}
	if (func_1575(iParam0))
	{
		return 1;
	}
	func_1576(iParam0);
	if (VOLUME::_0x92A78D0BEDB332A3((Global_1392915->f_121[iVar0 /*20*/])->f_7))
	{
		VOLUME::_0x43F867EF5C463A53((Global_1392915->f_121[iVar0 /*20*/])->f_7);
	}
	if (VOLUME::_0x92A78D0BEDB332A3((Global_1392915->f_121[iVar0 /*20*/])->f_8))
	{
		VOLUME::_0x43F867EF5C463A53((Global_1392915->f_121[iVar0 /*20*/])->f_8);
	}
	(Global_1392915->f_121[iVar0 /*20*/])->f_1 = 0;
	func_1577(iVar0);
	iVar2 = func_1188(((*Global_1392915)[iVar0 /*12*/])->f_4);
	if (iVar2 != -1)
	{
		if (iParam1 == 1)
		{
			func_737(((*Global_1392915)[iVar0 /*12*/])->f_4);
		}
		if (MAP::DOES_BLIP_EXIST(Global_1898346[iVar2 /*6*/]))
		{
			MAP::REMOVE_BLIP((*Global_1898346)[iVar2 /*6*/]);
		}
		func_1578(iVar2, 0);
		return 1;
	}
	return 0;
}

void func_1191(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_1192(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return 0;
	}
	return 1;
}

int func_1193(int iParam0, int iParam1)
{
	if (iParam1 != -1)
	{
		return 0;
	}
	if (func_1579(iParam0))
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

bool func_1194()
{
	int iVar0;

	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && _NAMESPACE71::_0x59FA676177DBE4C9(iVar0) == 4);
}

void func_1195(int iParam0)
{
	func_1580(1);
}

bool func_1196(int iParam0)
{
	return ((*Global_1835011)[iParam0 /*74*/])->f_63 & 64512 != 0;
}

int func_1197(int iParam0, float fParam1, int iParam2, var uParam3, int iParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	char cVar7[16];

	if (func_17(32768))
	{
		return 0;
	}
	iVar0 = func_28();
	if ((iParam4 && func_1581(&(((*Global_1835011)[iParam0 /*74*/])->f_29), 512)) && !func_1581(&(((*Global_1835011)[iParam0 /*74*/])->f_29), 1024))
	{
		if (func_1194())
		{
			return 0;
		}
	}
	if (((*Global_1835011)[iParam0 /*74*/])->f_71)
	{
		return 0;
	}
	if (!func_1582(iParam0))
	{
		return 0;
	}
	if (iVar0 == -1)
	{
		if (iParam0 == 19)
		{
			if ((func_120(((*Global_1835011)[20 /*74*/])->f_1, 1) && Global_1879514->f_1 == ((*Global_1835011)[20 /*74*/])->f_1) && (MISC::GET_GAME_TIMER() - func_1583()) <= 2000)
			{
				return 0;
			}
		}
		else if (iParam0 == 20)
		{
			if ((func_120(((*Global_1835011)[19 /*74*/])->f_1, 1) && Global_1879514->f_1 == ((*Global_1835011)[19 /*74*/])->f_1) && (MISC::GET_GAME_TIMER() - func_1583()) <= 2000)
			{
				return 0;
			}
		}
		else if (iParam0 == 14)
		{
			if (!func_120(((*Global_1347702)[62 /*49*/])->f_15, 1))
			{
				return 0;
			}
		}
	}
	if (!MAP::DOES_BLIP_EXIST(((*Global_1835011)[iParam0 /*74*/])->f_27))
	{
		bVar3 = ((*Global_1835011)[iParam0 /*74*/])->f_70;
		if (func_1193(iParam0, iVar0) && !bVar3)
		{
			if (uParam3 || func_759((*Global_1835011)[iParam0 /*74*/], 2))
			{
				if (func_1579(iParam0))
				{
					((*Global_1835011)[iParam0 /*74*/])->f_27 = MAP::_0x554D9D53F696D002(1673015813, func_1584(iParam0));
					iVar2 = 1;
				}
				else
				{
					((*Global_1835011)[iParam0 /*74*/])->f_27 = MAP::_0x554D9D53F696D002(1673015813, func_1585(iParam0));
				}
			}
			else if (func_1579(iParam0))
			{
				((*Global_1835011)[iParam0 /*74*/])->f_27 = MAP::_0xEC174ADBCB611ECC(1673015813, func_1584(iParam0), func_1586(iParam0), func_1587(iParam0));
				iVar2 = 1;
			}
			else
			{
				((*Global_1835011)[iParam0 /*74*/])->f_27 = MAP::_0x45F13B7E0A15C880(1673015813, func_1588(iParam0), func_1589(iParam0));
			}
		}
		else if (bVar3)
		{
			if (!func_1579(iParam0))
			{
				((*Global_1835011)[iParam0 /*74*/])->f_27 = MAP::_0x554D9D53F696D002(1673015813, func_1590(iParam0));
			}
			else
			{
				((*Global_1835011)[iParam0 /*74*/])->f_27 = MAP::_0x554D9D53F696D002(1673015813, func_1584(iParam0));
				iVar2 = 1;
			}
		}
		else if (func_1591(iParam0))
		{
			if (iParam0 == 7)
			{
				((*Global_1835011)[iParam0 /*74*/])->f_27 = MAP::_0x554D9D53F696D002(-1337945352, func_1585(iParam0));
			}
			else
			{
				((*Global_1835011)[iParam0 /*74*/])->f_27 = MAP::_0x554D9D53F696D002(1673015813, func_1585(iParam0));
			}
		}
		else
		{
			((*Global_1835011)[iParam0 /*74*/])->f_27 = MAP::_0x554D9D53F696D002(1673015813, func_1585(iParam0));
		}
		((*Global_1835011)[iParam0 /*74*/])->f_28 = 1673015813;
		bVar1 = true;
		if (iParam2 != -1)
		{
			if (iVar2 || func_1579(iParam0))
			{
				func_1578(iParam2, 4194304);
			}
			else
			{
				func_1199(iParam2, 4194304);
			}
		}
		MAP::SET_BLIP_FLASH_TIMER(((*Global_1835011)[iParam0 /*74*/])->f_27, 63, iParam0);
	}
	if (!MAP::DOES_BLIP_EXIST(((*Global_1835011)[iParam0 /*74*/])->f_27))
	{
		return 0;
	}
	if (bVar1)
	{
		MAP::SET_BLIP_SPRITE(((*Global_1835011)[iParam0 /*74*/])->f_27, ((*Global_1835011)[iParam0 /*74*/])->f_26, true);
		if (iVar0 != -1)
		{
			MAP::_0x9CB1A1623062F402(((*Global_1835011)[iParam0 /*74*/])->f_27, &(((*Global_1835011)[iParam0 /*74*/])->f_39));
		}
		if (!func_1581(&(((*Global_1835011)[iParam0 /*74*/])->f_29), 1024) && !func_1591(iParam0))
		{
			MAP::_0x662D364ABF16DE2F(((*Global_1835011)[iParam0 /*74*/])->f_27, 580546400);
			func_1592(&(((*Global_1835011)[iParam0 /*74*/])->f_29), 1024);
		}
	}
	if (iVar0 != -1)
	{
		return 1;
	}
	if (!func_1591(iParam0))
	{
		MAP::_0x662D364ABF16DE2F(((*Global_1835011)[iParam0 /*74*/])->f_27, -1986290853);
	}
	if (uParam3 || func_759((*Global_1835011)[iParam0 /*74*/], 2))
	{
		MAP::_0x662D364ABF16DE2F(((*Global_1835011)[iParam0 /*74*/])->f_27, 724623647);
	}
	else
	{
		MAP::_0xB059D7BD3D78C16F(((*Global_1835011)[iParam0 /*74*/])->f_27, 724623647);
	}
	iVar4 = func_1219(Global_40.f_4283);
	if (func_126(iVar4) && func_1220(((*Global_1888801)[iVar4 /*35*/])->f_13))
	{
		iVar5 = 1;
		bVar6 = func_1593(iVar4);
	}
	if (func_1594(iParam0, iVar5, iVar4))
	{
		func_1595(((*Global_1835011)[iParam0 /*74*/])->f_1, bVar6, iVar5, iVar4);
	}
	if (iParam0 == 7 && !func_1596(579))
	{
		func_1597(579, ((*Global_1835011)[iParam0 /*74*/])->f_27, 0);
	}
	if (iParam0 == 2)
	{
		return 1;
	}
	if (((((((func_1581(&(((*Global_1835011)[iParam0 /*74*/])->f_29), 4096) && !func_1581(&(((*Global_1835011)[iParam0 /*74*/])->f_29), 8192)) && IntToFloat(func_1583()) >= 10f) && !Global_1935630->f_12) && !Global_16) && !func_1598(Global_35, -2016812721)) && !PED::_0x34D6AC1157C8226C(Global_35, -1054012177)) && !PED::_0x34D6AC1157C8226C(Global_35, 1097070152))
	{
		if (!func_1193(iParam0, iVar0) || (fParam1 >= (func_1599(iParam0) * func_1599(iParam0)) && !((*Global_1835011)[iParam0 /*74*/])->f_70))
		{
			MemCopy(&cVar7, {((*Global_1835011)[iParam0 /*74*/])->f_8}, 2);
			StringConCat(&cVar7, "_FIRST", 16);
			func_1456(&cVar7, 10000, 0, 0, 0, 1);
			func_1592(&(((*Global_1835011)[iParam0 /*74*/])->f_29), 8192);
		}
	}
	return 1;
}

int func_1198(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 36:
			return 1;
	}
	return 0;
}

void func_1199(int iParam0, int iParam1)
{
	if (!func_1192(iParam0))
	{
		return;
	}
	((*Global_1898346)[iParam0 /*6*/])->f_1 = (((*Global_1898346)[iParam0 /*6*/])->f_1 - (((*Global_1898346)[iParam0 /*6*/])->f_1 && iParam1));
}

void func_1200(int iParam0)
{
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	if (MAP::DOES_BLIP_EXIST(Global_1392626[iParam0 /*32*/]))
	{
		func_1600(&(((*Global_1392626)[iParam0 /*32*/])->f_10));
		MAP::REMOVE_BLIP((*Global_1392626)[iParam0 /*32*/]);
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1392626)[iParam0 /*32*/])->f_1))
	{
		func_1600(&(((*Global_1392626)[iParam0 /*32*/])->f_10));
		MAP::REMOVE_BLIP(&(((*Global_1392626)[iParam0 /*32*/])->f_1));
	}
}

void func_1201(int iParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1392626)[iParam0 /*32*/])->f_30))
	{
		func_1601(((*Global_1392626)[iParam0 /*32*/])->f_30);
		VOLUME::_0x43F867EF5C463A53(((*Global_1392626)[iParam0 /*32*/])->f_30);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1392626)[iParam0 /*32*/])->f_31))
	{
		func_1601(((*Global_1392626)[iParam0 /*32*/])->f_31);
		VOLUME::_0x43F867EF5C463A53(((*Global_1392626)[iParam0 /*32*/])->f_31);
	}
	if (iParam0 == 4)
	{
		func_1602(1411.856f, 1166.743f, 184.1507f, 200f, 5);
	}
}

void func_1202(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (ENTITY::_0xA7E51B53309EAC97(*iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (!PED::IS_PED_INJURED(*iParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, 0);
		if (!bParam3)
		{
			TASK::CLEAR_PED_SECONDARY_TASK(*iParam0);
		}
		PED::SET_PED_KEEP_TASK(*iParam0, bParam1);
		if (bParam2)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
		}
	}
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
}

void func_1203(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_1204(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_1205(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_1206(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 9);
}

void func_1207(int iParam0, var uParam1)
{
	if (!func_1206(iParam0))
	{
		return;
	}
	func_1603(&(((*Global_1392626)[iParam0 /*32*/])->f_10), uParam1);
	func_1603(&(((*Global_1392626)[iParam0 /*32*/])->f_10), 2);
	func_1205(&(((*Global_1392626)[iParam0 /*32*/])->f_8), 1);
}

void func_1208(int iParam0)
{
	bool bVar0;

	if (!func_1206(iParam0))
	{
		return;
	}
	bVar0 = false;
	if (func_1604(iParam0, 4))
	{
		bVar0 = MAP::DOES_BLIP_EXIST(Global_1392626[iParam0 /*32*/]);
	}
	else
	{
		bVar0 = MAP::DOES_BLIP_EXIST(((*Global_1392626)[iParam0 /*32*/])->f_1);
	}
	if (((*Global_1392626)[iParam0 /*32*/])->f_9 & 4096 != 0)
	{
		if (bVar0)
		{
			return;
		}
	}
	if (func_1604(iParam0, 4))
	{
		if (!bVar0)
		{
			func_1605(iParam0, (*Global_1392626)[iParam0 /*32*/], ((*Global_1392626)[iParam0 /*32*/])->f_24);
		}
		MAP::_0x662D364ABF16DE2F(Global_1392626[iParam0 /*32*/], 724623647);
	}
	else
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		if (bVar0)
		{
			MAP::REMOVE_BLIP(&(((*Global_1392626)[iParam0 /*32*/])->f_1));
		}
		func_1605(iParam0, &(((*Global_1392626)[iParam0 /*32*/])->f_1), ((*Global_1392626)[iParam0 /*32*/])->f_27);
		MAP::_0x662D364ABF16DE2F(((*Global_1392626)[iParam0 /*32*/])->f_1, 724623647);
	}
	func_1606(&(((*Global_1392626)[iParam0 /*32*/])->f_9), 4096);
}

void func_1209(int iParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1347702)[iParam0 /*49*/])->f_41))
	{
		func_1601(((*Global_1347702)[iParam0 /*49*/])->f_41);
		if (iParam0 == 91 || iParam0 == 129)
		{
			PATHFIND::_0xD17672447692478E(((*Global_1347702)[iParam0 /*49*/])->f_41, 0);
		}
		VOLUME::_0x43F867EF5C463A53(((*Global_1347702)[iParam0 /*49*/])->f_41);
	}
}

void func_1210(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_1211(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_1607(iParam0, &iVar1, &iVar0))
	{
		if (func_1608(iVar1, iVar0, 1))
		{
			func_1609(iVar1, iVar0);
		}
	}
}

void func_1212(var uParam0)
{
	*uParam0 = 0;
}

void func_1213(int iParam0)
{
	if (func_1610(179) || func_1610(180))
	{
		if (MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
		{
			if (((*Global_1347702)[iParam0 /*49*/])->f_37 == Global_1905944->f_5698)
			{
				func_1195(1);
			}
		}
	}
	if (func_1611(179))
	{
		func_1612(179);
	}
	if (func_1611(180))
	{
		func_1612(180);
	}
}

int func_1214(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (func_564(iParam0, bParam1, iParam2, iParam3))
	{
		return 1;
	}
	if (bParam1)
	{
		if (LAW::_0x0BB6DE7D23C60626(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	return 0;
}

void func_1215(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

void func_1216(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_242(iParam0))
	{
		return;
	}
	func_1613(&(((*Global_1347702)[iParam0 /*49*/])->f_14), iParam1);
	func_1613(&(((*Global_1347702)[iParam0 /*49*/])->f_14), 2);
	func_1614(&(((*Global_1347702)[iParam0 /*49*/])->f_12), 16384);
	func_769(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 32);
	if (iParam1 != 16384)
	{
		iVar0 = 0;
		while (iVar0 < Global_40.f_450)
		{
			if (func_242(&(Global_40.f_450[iVar0])))
			{
				if (&Global_40.f_450[iVar0] == iParam0)
				{
					Global_1430257 = iVar0;
				}
				else
				{
					iVar0++;
				}
			}
		}
	}

Vector3 func_1217(int iParam0)
{
	vector3 vVar0;

	if (!func_242(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { 0f, 0f, 0f };
	if (func_1615(iParam0, &vVar0))
	{
		((*Global_1347702)[iParam0 /*49*/])->f_24 = { vVar0 };
	}
	return ((*Global_1347702)[iParam0 /*49*/])->f_24;
}

void func_1218(int iParam0, bool bParam1, vector3 vParam2)
{
	if (!func_242(iParam0))
	{
		return;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 32 != 0)
	{
		return;
	}
	else if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 4096 != 0)
	{
		if (bParam1)
		{
			return;
		}
	}
	func_1213(iParam0);
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1048576 != 0 && ((*Global_1347702)[iParam0 /*49*/])->f_13 & 2048 == 0)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		if (bParam1)
		{
			MAP::REMOVE_BLIP(&(((*Global_1347702)[iParam0 /*49*/])->f_37));
		}
		func_1617(iParam0, func_1616(iParam0), 0, 1);
	}
	else if (((*Global_1347702)[iParam0 /*49*/])->f_18 > -1f)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		if (bParam1)
		{
			MAP::REMOVE_BLIP(&(((*Global_1347702)[iParam0 /*49*/])->f_37));
		}
		func_1617(iParam0, vParam2, 0, 1);
	}
	else if (!bParam1)
	{
		func_1617(iParam0, vParam2, 0, 0);
	}
	MAP::_0x662D364ABF16DE2F(((*Global_1347702)[iParam0 /*49*/])->f_37, 724623647);
	func_1618(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 4096);
}

int func_1219(int iParam0)
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

int func_1220(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_36307)
	{
		return MAP::DOES_BLIP_EXIST(&(Global_36307[iParam0]));
	}
	return 0;
}

void func_1221()
{
	func_1619();
	func_1620();
	func_1621();
	func_1622();
	func_1623();
	func_1624();
}

void func_1222(int iParam0, int iParam1)
{
	if (!func_67(iParam0))
	{
		return;
	}
	func_94(iParam0, iParam1);
}

void func_1223(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
}

void func_1224(var uParam0)
{
	uParam0->f_69 = 0;
}

void func_1225()
{
	int iVar0;
	struct<5> Var1;
	int iVar6;
	bool bVar7;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		bVar7 = func_67(&(Global_1898164->f_1[iVar0 /*5*/]));
		if (bVar7)
		{
			iVar6 = func_389(&(Global_1898164->f_1[iVar0 /*5*/]));
		}
		else
		{
			iVar6 = -1;
		}
		if (!bVar7 || ((bVar7 && iVar6 != 3) && iVar6 != 4))
		{
			*(Global_1898164->f_1[iVar0 /*5*/]) = { Var1 };
			func_1625(iVar0, 31);
		}
		iVar0++;
	}
	Global_1898164->f_162 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (&Global_1898164->f_1[iVar0 /*5*/] != 0)
		{
			Global_1898164->f_162++;
			if (iVar0 == 0)
			{
				func_1222(&(Global_1898164->f_1[iVar0 /*5*/]), 3);
			}
			else
			{
				func_1222(&(Global_1898164->f_1[iVar0 /*5*/]), 4);
			}
		}
		iVar0++;
	}
}

int func_1226(int iParam0)
{
	return func_1627(func_1626(iParam0));
}

int func_1227(bool bParam0, int iParam1)
{
	int iVar0;

	if (!bParam0 && func_340(373691918))
	{
		return 0;
	}
	iVar0 = 0;
	if (LAW::_0x76CF93D4B416B288(752193127) < 2)
	{
		iVar0 = (LAW::_0x76CF93D4B416B288(752193127) + iParam1);
	}
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	LAW::_0xF19706B1F8FFA88F(752193127, iVar0);
	func_1229(bParam0);
	return 1;
}

void func_1228()
{
	struct<15> Var0;
	int iVar17;
	int iVar18;

	Var0 = Global_35;
	Var0.f_12 = 8;
	Var0.f_8 = 0;
	iVar17 = 0;
	while (iVar17 < 27)
	{
		if (func_591(iVar17))
		{
			iVar18 = func_581(iVar17);
			if (ENTITY::DOES_ENTITY_EXIST(iVar18))
			{
				Var0.f_14 = iVar18;
				Var0.f_3 = iVar18;
				MISC::_0x88BC5F4AEF77FC4E(&Var0, 17);
			}
		}
		iVar17++;
	}
	Global_1359489->f_58 = -15;
	func_607(&(Global_1359489->f_55));
	if (func_1153(1777191912, 1))
	{
		func_1628(1777191912, 1, 0);
	}
}

int func_1229(bool bParam0)
{
	if (!bParam0 && func_340(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(752193127, bParam0, 0);
	return 1;
}

void func_1230(int iParam0)
{
	if (!func_67(iParam0))
	{
		return;
	}
	func_745(iParam0, (func_719(iParam0) + BUILTIN::SHIFT_LEFT(1, 16)));
}

bool func_1231()
{
	return func_1027() > 0;
}

void func_1232(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 67:
			func_1629(-1032423150, iParam1);
			break;
		case 18:
			func_1629(294066959, iParam1);
			func_1629(-1925639563, iParam1);
			func_1629(-378582304, iParam1);
			func_1629(-338306437, iParam1);
			break;
		case 20:
			func_1629(437270255, iParam1);
			break;
		case 2:
			func_1629(-304000413, iParam1);
			func_1629(-533612796, iParam1);
			func_1629(48036954, iParam1);
			break;
		case 23:
			func_1629(193108691, iParam1);
			func_1629(491732588, iParam1);
			func_1629(671962088, iParam1);
			func_1630(1);
			break;
		case 16:
			func_1629(-1836056650, iParam1);
			func_1629(-754657922, iParam1);
			func_1629(-1752355838, iParam1);
			func_1629(-1375324510, iParam1);
			break;
		case 59:
			func_1629(-514392105, iParam1);
			func_1629(-822060246, iParam1);
			if (func_1631(146))
			{
				func_1629(1372748575, iParam1);
			}
			func_1630(1);
			break;
		case 76:
			func_1629(1991352213, iParam1);
			if (func_1632() == 0)
			{
				func_1629(1852488616, iParam1);
			}
			else
			{
				func_1629(-9866350, iParam1);
			}
			break;
		case 44:
			func_1629(863852599, iParam1);
			func_1629(1228374935, iParam1);
			func_1629(1517889050, iParam1);
			func_1629(830657578, iParam1);
			func_1629(1901354958, iParam1);
			break;
		case 46:
			func_1629(-582805654, iParam1);
			func_1629(250378940, iParam1);
			func_1629(-2143265426, iParam1);
			break;
		case 17:
			func_1629(-941494139, iParam1);
			func_1629(1641489521, iParam1);
			break;
		case 19:
			func_1629(-1829423531, iParam1);
			func_1629(-1590504752, iParam1);
			func_1629(1357221321, iParam1);
			break;
		case 21:
			func_1629(-1037992610, iParam1);
			func_1629(-1286414399, iParam1);
			func_1630(0);
			break;
		case 15:
			func_1629(-1014460309, iParam1);
			func_1629(-1030502825, iParam1);
			break;
		case 33:
			func_1629(479388090, iParam1);
			func_1629(-1396342239, iParam1);
			func_1629(-619618632, iParam1);
			break;
		case 34:
			func_1629(1193561641, iParam1);
			break;
		case 64:
			func_1629(1363960851, iParam1);
			break;
		case 60:
			func_1629(-1232453926, iParam1);
			func_1629(-882833584, iParam1);
			break;
		case 73:
			func_1629(2023205767, iParam1);
			break;
		case 74:
			func_1629(-2135286513, iParam1);
			if (func_1632() == 0)
			{
				func_1629(33799444, iParam1);
			}
			else
			{
				func_1629(-161343203, iParam1);
			}
			break;
		case 8:
			func_1629(841639693, iParam1);
			func_1629(358952323, iParam1);
			break;
		case 36:
			func_1629(852538149, iParam1);
			func_1629(689020839, iParam1);
			if (&Global_1357515 == 0)
			{
				func_1629(-404049058, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_1629(1116039310, iParam1);
			}
			break;
		case 27:
			func_1629(107633428, iParam1);
			func_1629(335902282, iParam1);
			func_1629(575673055, iParam1);
			func_1629(-425944207, iParam1);
			break;
		case 28:
			func_1629(-1941530250, iParam1);
			func_1629(1399269304, iParam1);
			func_1629(1839684664, iParam1);
			func_1629(923168503, iParam1);
			func_1629(-1485078322, iParam1);
			break;
		case 29:
			func_1629(574995900, iParam1);
			func_1629(-1691275407, iParam1);
			func_1629(-1725307861, iParam1);
			break;
		case 31:
			func_1629(-2108383238, iParam1);
			func_1629(-1321828931, iParam1);
			func_1629(-1632118592, iParam1);
			func_1629(334938948, iParam1);
			break;
		case 4:
			func_1629(115823701, iParam1);
			func_1629(-1896939736, iParam1);
			func_1629(-1830746356, iParam1);
			func_1629(-1235169781, iParam1);
			func_1630(0);
			break;
		case 6:
			func_1629(1801727621, iParam1);
			if (&Global_1357515 == -1)
			{
				func_1629(-999872881, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_1629(-1227289741, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_1629(-384176140, iParam1);
			}
			break;
		case 25:
			func_1629(1056132658, iParam1);
			break;
		case 24:
			if (&Global_1357515 == -1)
			{
				func_1629(1343889751, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_1629(-948326001, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_1629(-1374849484, iParam1);
			}
			break;
		case 48:
			func_1629(-1632856601, iParam1);
			if (&Global_1357515 == -1)
			{
				func_1629(217772674, iParam1);
			}
			else
			{
				func_1629(2071798160, iParam1);
			}
			if (func_1633(51))
			{
				func_1629(-792802286, iParam1);
			}
			break;
		case 49:
			func_1629(-1972727021, iParam1);
			if (&Global_1357515 == 0)
			{
				func_1629(-1444030885, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_1629(-1272255787, iParam1);
			}
			else if (&Global_1357515 == 2)
			{
				func_1629(1402120602, iParam1);
			}
			break;
		case 58:
			func_1629(-1661934591, iParam1);
			break;
		case 50:
			func_1629(-1713759426, iParam1);
			break;
		case 52:
			func_1629(-314799932, iParam1);
			func_1629(-462260432, iParam1);
			func_1629(822929377, iParam1);
			if (iParam2 == 1)
			{
				func_1629(345256028, iParam1);
				func_1629(-1635084094, iParam1);
			}
			else
			{
				func_1629(114267347, iParam1);
			}
			break;
		case 32:
			func_1629(615304157, iParam1);
			break;
		case 47:
			func_1629(415434835, iParam1);
			break;
		case 69:
			func_1629(1373465877, iParam1);
			if (func_120(((*Global_1347702)[9 /*49*/])->f_15, 1))
			{
				func_1629(-2058273527, iParam1);
			}
			break;
		case 70:
			func_1629(451334985, iParam1);
			if (func_1632() == 0)
			{
				func_1629(-224150200, iParam1);
			}
			else
			{
				func_1629(289012628, iParam1);
			}
			break;
		case 71:
			if (func_1632() == 0)
			{
				func_1629(-41692120, iParam1);
			}
			else
			{
				func_1629(1537840678, iParam1);
			}
			break;
		case 37:
			func_1629(1520478365, iParam1);
			break;
		case 9:
			if (&Global_1357515 == -1)
			{
				func_1629(1842132550, iParam1);
			}
			else
			{
				func_1629(-785735240, iParam1);
			}
			func_1629(-1605690566, iParam1);
			break;
		case 13:
			func_1629(-731367459, iParam1);
			func_1629(224176585, iParam1);
			func_1629(-14545580, iParam1);
			break;
		case 53:
			func_1629(1095274522, iParam1);
			break;
		case 54:
			func_1629(-572027988, iParam1);
			break;
		case 56:
			func_1629(1339307101, iParam1);
			func_1629(2102267732, iParam1);
			break;
		case 57:
			func_1629(710102686, iParam1);
			break;
		case 22:
			func_1629(-1754368482, iParam1);
			func_1629(-2071408557, iParam1);
			break;
		case 12:
			func_1629(-181334543, iParam1);
			break;
		case 0:
			func_1629(-2134669864, iParam1);
			func_1629(-548289709, iParam1);
			func_1629(-911271922, iParam1);
			func_1629(-604455775, iParam1);
			break;
		case 1:
			func_1630(1);
			break;
		case 3:
			if (func_413())
			{
				if (HUD::_JOURNAL_CAN_WRITE_ENTRY(-1478534115))
				{
					func_1629(-1286192062, iParam1);
				}
			}
			else if (HUD::_JOURNAL_CAN_WRITE_ENTRY(-1286192062))
			{
				func_1629(-1478534115, iParam1);
			}
			break;
		default:
			break;
	}
}

void func_1233(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
			func_1629(-145926707, iParam1);
			func_1629(-604922090, iParam1);
			func_1629(-848690769, iParam1);
			break;
		case 1:
			func_1629(-1477631591, iParam1);
			break;
		case 2:
			func_1629(76112544, iParam1);
			break;
		case 9:
			func_1629(1396404308, iParam1);
			func_1629(-1357381228, iParam1);
			if (func_120(((*Global_1835011)[69 /*74*/])->f_1, 1))
			{
				func_1629(1902679064, iParam1);
			}
			else
			{
				func_1629(-2146422425, iParam1);
			}
			break;
		case 22:
			func_1629(-1534761730, iParam1);
			break;
		case 26:
			if (iParam3 == 1)
			{
				func_1629(-1934184559, iParam1);
				func_1629(1281755988, iParam1);
			}
			else
			{
				func_1629(-1745220872, iParam1);
				func_1629(-1044976796, iParam1);
			}
			break;
		case 29:
			if (iParam3 == 1)
			{
				func_1629(-1641504538, iParam1);
				func_1629(-988014485, iParam1);
			}
			else if (func_1631(26))
			{
				func_1629(-343043950, iParam1);
				func_1629(-640062214, iParam1);
			}
			else
			{
				func_1629(-1272028496, iParam1);
			}
			break;
		case 32:
			if (iParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_1629(-1816782797, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_1629(-176175898, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_1629(1711460080, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_1629(-2108576508, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_1629(-1103692224, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_1629(1301690984, iParam1);
				}
			}
			else
			{
				func_1629(699457343, iParam1);
				if (&Global_1357515 == -1)
				{
					func_1629(-908444626, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_1629(-1475448104, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_1629(1727640249, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_1629(-2050867743, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_1629(-996445915, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_1629(-1868882771, iParam1);
				}
			}
			break;
		case 35:
			if (iParam3 == 1)
			{
				func_1629(-754570528, iParam1);
			}
			else
			{
				func_1629(1690083163, iParam1);
			}
			break;
		case 36:
			if (iParam3 == 1)
			{
				func_1629(-2072125821, iParam1);
			}
			else
			{
				func_1629(270040030, iParam1);
			}
			break;
		case 37:
			func_1629(-870030001, iParam1);
			break;
		case 53:
			if (iParam3 == 1)
			{
				func_1629(-505314737, iParam1);
				func_1629(-1853052860, iParam1);
			}
			else
			{
				func_1629(-1975624994, iParam1);
				func_1629(1648135852, iParam1);
			}
			break;
		case 54:
			if (iParam3 == 1)
			{
				func_1629(1690231002, iParam1);
			}
			else
			{
				func_1629(517031924, iParam1);
			}
			break;
		case 55:
			if (iParam3 == 1)
			{
				func_1629(1225386280, iParam1);
			}
			else if (func_1631(54))
			{
				func_1629(-283235773, iParam1);
			}
			else
			{
				func_1629(701962369, iParam1);
			}
			break;
		case 38:
			if (iParam3 == 1)
			{
				func_1629(1355398007, iParam1);
			}
			else
			{
				func_1629(-1900349467, iParam1);
			}
			break;
		case 39:
			if (iParam3 == 1)
			{
				func_1629(574636806, iParam1);
			}
			else
			{
				func_1629(-196256251, iParam1);
			}
			break;
		case 40:
			if (iParam3 == 1)
			{
				func_1629(821118338, iParam1);
			}
			else if (func_1631(39))
			{
				func_1629(846829260, iParam1);
			}
			else
			{
				func_1629(-1212247553, iParam1);
			}
			break;
		case 43:
			if (iParam3 == 1)
			{
				if (func_287(((*Global_1835011)[33 /*74*/])->f_1) == 1)
				{
					func_1629(1422779093, iParam1);
				}
				else
				{
					func_1629(-1769536986, iParam1);
				}
			}
			else
			{
				func_1629(-600786233, iParam1);
			}
			break;
		case 45:
			if (iParam3 == 1)
			{
				func_1629(352134789, iParam1);
			}
			else if (func_1631(43))
			{
				func_1629(260723113, iParam1);
			}
			else
			{
				func_1629(1080243038, iParam1);
			}
			break;
		case 41:
			if (iParam3 == 1)
			{
				func_1629(-457958799, iParam1);
			}
			else
			{
				func_1629(2076458086, iParam1);
			}
			break;
		case 42:
			if (func_1631(41))
			{
				func_1629(-546824600, iParam1);
			}
			else
			{
				func_1629(-308364587, iParam1);
			}
			break;
		case 49:
			if (iParam3 == 1)
			{
				func_1629(1297261593, iParam1);
			}
			else
			{
				func_1629(1940089142, iParam1);
			}
			break;
		case 50:
			if (iParam3 == 1)
			{
				func_1629(2068484886, iParam1);
			}
			else if (func_1631(49))
			{
				func_1629(-1489080639, iParam1);
				func_1629(-2102244050, iParam1);
			}
			else
			{
				func_1629(-1863040467, iParam1);
			}
			break;
		case 51:
			func_1629(-2055943209, iParam1);
			break;
		case 58:
			if (func_120(((*Global_1347702)[23 /*49*/])->f_15, 1))
			{
				func_1629(1650066845, iParam1);
			}
			else
			{
				func_1629(151370023, iParam1);
			}
			func_1629(1426057961, iParam1);
			func_1629(476379584, iParam1);
			break;
		case 59:
			func_1629(-1638117866, iParam1);
			break;
		case 62:
			func_1629(199541730, iParam1);
			break;
		case 63:
			func_1629(1703485804, iParam1);
			func_1629(-800449045, iParam1);
			break;
		case 65:
			func_1629(-1678210868, iParam1);
			func_1629(-1448238026, iParam1);
			func_1629(-1200864845, iParam1);
			func_1629(1473511536, iParam1);
			break;
		case 66:
			func_1629(-1774490051, iParam1);
			func_1629(-34645921, iParam1);
			func_1629(174027075, iParam1);
			func_1629(-1155999, iParam1);
			func_1630(1);
			break;
		case 67:
			func_1629(701612593, iParam1);
			func_1629(-1069631343, iParam1);
			func_1629(1673428882, iParam1);
			break;
		case 68:
			func_1629(-739133286, iParam1);
			func_1629(-2130089358, iParam1);
			func_1629(2056190391, iParam1);
			func_1629(1941753817, iParam1);
			func_1630(0);
			break;
		case 70:
			func_1629(-1217555753, iParam1);
			break;
		case 71:
			func_1629(697048821, iParam1);
			break;
		case 73:
			func_1629(-553148661, iParam1);
			break;
		case 75:
			func_1629(1349250531, iParam1);
			break;
		case 77:
			if (iParam3 == 1)
			{
				func_1629(1414263863, iParam1);
			}
			else
			{
				func_1629(-1772294468, iParam1);
			}
			break;
		case 79:
			if (iParam3 == 1)
			{
				func_1629(1835465936, iParam1);
				func_1629(523715611, iParam1);
			}
			else if (func_1631(78))
			{
				func_1629(1420338873, iParam1);
			}
			else
			{
				func_1629(-46362051, iParam1);
			}
			break;
		case 80:
			if (iParam3 == 1)
			{
				func_1629(10180941, iParam1);
			}
			else if (func_1631(79))
			{
				func_1629(768420635, iParam1);
			}
			else
			{
				func_1629(-1734012650, iParam1);
			}
			break;
		case 85:
			if (iParam3 == 1)
			{
				func_1629(-383601523, iParam1);
			}
			else
			{
				func_1629(1004812390, iParam1);
			}
			break;
		case 86:
			if (iParam3 == 1)
			{
				func_1629(1606472408, iParam1);
			}
			else
			{
				func_1629(1405690220, iParam1);
			}
			break;
		case 87:
			if (iParam3 == 1)
			{
				func_1629(-203571927, iParam1);
			}
			else
			{
				func_1629(640033630, iParam1);
			}
			break;
		case 88:
			if (iParam3 == 1)
			{
				func_1629(729886222, iParam1);
			}
			else
			{
				func_1629(-158717807, iParam1);
			}
			break;
		case 89:
			if (iParam3 == 1)
			{
				func_1629(-714816362, iParam1);
			}
			else
			{
				func_1629(1160146336, iParam1);
			}
			break;
		case 92:
			if (iParam3 == 1)
			{
				func_1629(-932932179, iParam1);
				func_1629(-1458537240, iParam1);
			}
			else
			{
				func_1629(-1764383885, iParam1);
				func_1629(894349517, iParam1);
			}
			break;
		case 93:
			if (iParam3 == 1)
			{
				func_1629(1741466706, iParam1);
			}
			else
			{
				func_1629(1405815775, iParam1);
			}
			break;
		case 94:
			func_1629(1163067702, iParam1);
			if (&Global_1357515 == -1)
			{
				func_1629(1905280979, iParam1);
			}
			else
			{
				func_1629(-1966245299, iParam1);
			}
			func_1629(721468880, iParam1);
			break;
		case 99:
			func_1629(800644248, iParam1);
			break;
		case 101:
			if (iParam3 == 1)
			{
				func_1629(1502176860, iParam1);
				if (&Global_1357515 == -1)
				{
					func_1629(-1117781095, iParam1);
				}
				else
				{
					func_1629(-618709225, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_1629(141494548, iParam1);
			}
			else
			{
				func_1629(-633957459, iParam1);
			}
			break;
		case 102:
			if (iParam3 == 1)
			{
				func_1629(-369525697, iParam1);
			}
			else if (func_1631(101))
			{
				func_1629(1595015219, iParam1);
			}
			else
			{
				func_1629(-321486961, iParam1);
			}
			break;
		case 103:
			func_1629(1422724221, iParam1);
			break;
		case 104:
			if (iParam3 == 1)
			{
				func_1629(793460477, iParam1);
				func_1629(-1610242176, iParam1);
			}
			else if (func_1631(103))
			{
				func_1629(1830897187, iParam1);
			}
			else
			{
				func_1629(1419017828, iParam1);
			}
			break;
		case 105:
			if (iParam3 == 1)
			{
				func_1629(1528309077, iParam1);
			}
			else if (func_1631(104))
			{
				func_1629(1864966105, iParam1);
			}
			else
			{
				func_1629(-103336013, iParam1);
			}
			break;
		case 108:
			func_1629(1175579551, iParam1);
			break;
		case 109:
			if (iParam3 == 1)
			{
				func_1629(-1123227713, iParam1);
				func_1629(-889574341, iParam1);
			}
			else
			{
				func_1629(2065385917, iParam1);
				func_1629(780305039, iParam1);
			}
			break;
		case 110:
			if (iParam3 == 1)
			{
				func_1629(-887421691, iParam1);
			}
			else if (func_1631(109))
			{
				func_1629(-1318117949, iParam1);
			}
			else
			{
				func_1629(1632244327, iParam1);
			}
			break;
		case 111:
			if (iParam3 == 1)
			{
				if (&Global_1357515 == 0)
				{
					func_1629(284822762, iParam1);
				}
				else
				{
					func_1629(-1425017554, iParam1);
				}
			}
			else if (func_1631(110))
			{
				if (&Global_1357515 == 0)
				{
					func_1629(553087292, iParam1);
				}
				else
				{
					func_1629(-1766870331, iParam1);
					func_1629(1971788022, iParam1);
				}
			}
			else if (&Global_1357515 == 0)
			{
				func_1629(-1980598735, iParam1);
			}
			else
			{
				func_1629(-442732098, iParam1);
				func_1629(1955756409, iParam1);
			}
			break;
		case 115:
			func_1629(394303528, iParam1);
			func_1629(-2040171028, iParam1);
			break;
		case 143:
			if (iParam3 == 1)
			{
				func_1629(1182403394, iParam1);
			}
			else
			{
				func_1629(-2116547899, iParam1);
			}
			break;
		case 144:
			if (iParam3 == 1)
			{
				func_1629(924445424, iParam1);
			}
			else
			{
				func_1629(1227062271, iParam1);
			}
			break;
		case 117:
			if (iParam3 == 1)
			{
				func_1629(430755273, iParam1);
				func_1629(-1473879802, iParam1);
			}
			else
			{
				func_1629(1121266049, iParam1);
			}
			break;
		case 118:
			if (iParam3 == 1)
			{
				func_1629(73885747, iParam1);
			}
			else if (func_1631(117))
			{
				func_1629(1559707913, iParam1);
			}
			else
			{
				func_1629(926897873, iParam1);
			}
			break;
		case 119:
			if (iParam3 == 1)
			{
				func_1629(-2103887972, iParam1);
			}
			else if (func_1631(118))
			{
				func_1629(-435828462, iParam1);
			}
			else
			{
				func_1629(-516020583, iParam1);
			}
			break;
		case 121:
			if (iParam3 == 1)
			{
				func_1629(2054486196, iParam1);
			}
			else
			{
				func_1629(1809320262, iParam1);
			}
			break;
		case 122:
			if (iParam3 == 1)
			{
				func_1629(-570086056, iParam1);
			}
			else if (func_1631(121))
			{
				func_1629(32337856, iParam1);
			}
			else
			{
				func_1629(-206811842, iParam1);
			}
			break;
		case 124:
			if (iParam3 == 1)
			{
				func_1629(813493663, iParam1);
			}
			else if (func_1631(122))
			{
				func_1629(-2132763590, iParam1);
			}
			else
			{
				func_1629(477901035, iParam1);
			}
			break;
		case 125:
			if (iParam3 == 1)
			{
				func_1629(-66240572, iParam1);
				func_1629(1563075046, iParam1);
			}
			else
			{
				func_1629(-787011772, iParam1);
				func_1629(-1523377438, iParam1);
			}
			break;
		case 127:
			func_1629(61020800, iParam1);
			break;
		case 129:
			func_1629(428985222, iParam1);
			break;
		case 131:
			func_1629(-1393851036, iParam1);
			break;
		case 133:
			func_1629(1559531342, iParam1);
			break;
		case 134:
			func_1629(-718846442, iParam1);
			break;
		case 135:
			if (iParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_1629(-1374407408, iParam1);
				}
				else
				{
					func_1629(471210931, iParam1);
				}
			}
			else if ((HUD::_JOURNAL_CAN_WRITE_ENTRY(1732474719) && HUD::_JOURNAL_CAN_WRITE_ENTRY(801682048)) && HUD::_JOURNAL_CAN_WRITE_ENTRY(-1986404392))
			{
				if (&Global_1357515 == -1)
				{
					func_1629(-472672138, iParam1);
				}
				else
				{
					func_1629(-2132098614, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_1629(-1678710489, iParam1);
			}
			else
			{
				func_1629(1522210661, iParam1);
			}
			break;
		case 136:
			if (iParam3 == 1)
			{
				func_1629(1717582460, iParam1);
			}
			else
			{
				func_1629(343644664, iParam1);
			}
			break;
		case 137:
			if (iParam3 == 1)
			{
				func_1629(1568112362, iParam1);
				func_1629(1388317526, iParam1);
			}
			else if (func_1631(136))
			{
				func_1629(-1597534828, iParam1);
				func_1629(-1207918353, iParam1);
			}
			else
			{
				func_1629(-1940891082, iParam1);
				func_1629(-598277294, iParam1);
			}
			break;
		case 142:
			if (iParam2 == 1)
			{
				func_1629(448334530, iParam1);
				func_1629(2145375502, iParam1);
			}
			else
			{
				func_1629(-1891994685, iParam1);
			}
			break;
		case 146:
			if (iParam3 == 1)
			{
				if (&Global_1357515 == 1)
				{
					func_1629(1159121660, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_1629(-1968554187, iParam1);
				}
			}
			else if (&Global_1357515 == 1)
			{
				func_1629(841927377, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_1629(848633571, iParam1);
			}
			break;
		case 147:
			if (iParam3 == 1)
			{
				func_1629(-66616327, iParam1);
			}
			else
			{
				func_1629(1978361607, iParam1);
			}
			break;
		case 148:
			if (iParam3 == 1)
			{
				func_1629(1862916706, iParam1);
			}
			else if (func_1631(147))
			{
				func_1629(675105199, iParam1);
			}
			else
			{
				func_1629(-1993800776, iParam1);
			}
			break;
		case 149:
			if (iParam3 == 1)
			{
				func_1629(174409701, iParam1);
			}
			else if (func_1631(148))
			{
				func_1629(-1730895475, iParam1);
			}
			else
			{
				func_1629(-342396910, iParam1);
			}
			break;
		case 150:
			if (iParam3 == 1)
			{
				func_1629(1295237052, iParam1);
			}
			else if (func_1631(149))
			{
				func_1629(-788577684, iParam1);
			}
			else
			{
				func_1629(1527015024, iParam1);
			}
			break;
		default:
			break;
	}
}

int func_1234(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	*uParam1 = 1137976064;
	*uParam2 = -1;
	iVar0 = func_91(iParam0);
	switch (iVar0)
	{
		case 1:
			iVar1 = func_717(iParam0);
			switch (iVar1)
			{
				case 0:
					return -1340559426;
				case 1:
					return -694047360;
				case 2:
					return -757336127;
				case 3:
					return -164763388;
				case 4:
					*uParam1 = -2060316038;
					return -2030965067;
				case 5:
					return 2030928096;
				case 6:
					return -332258016;
				case 10:
					return 1817180056;
				case 13:
					return 545240164;
				case 15:
					return 1141344854;
				case 8:
					return 1796786552;
				case 25:
					return 1783253542;
				case 14:
					return -2129915369;
				case 7:
					return -1393633441;
				case 9:
					if (func_287(((*Global_1835011)[9 /*74*/])->f_1) == 0)
					{
						return 1819621703;
					}
					else
					{
						return 1456958671;
					}
					break;
				case 11:
					return 278608719;
				case 12:
					return -561040434;
				case 16:
					return 95619635;
				case 17:
					return 1185998732;
				case 53:
					return -221923309;
				case 18:
					return -620369863;
				case 19:
					return -1738185394;
				case 20:
					return -637873918;
				case 22:
					return 561912024;
				case 23:
					return 951007010;
				case 24:
					return -1512720465;
				case 21:
					return 920901415;
				case 26:
					return -1664107227;
				case 27:
					return -1934704933;
				case 28:
					return -582523927;
				case 29:
					return -259827569;
				case 30:
					return -1633236438;
				case 31:
					return -1396074730;
				case 32:
					return -248683070;
				case 33:
					return 1454698172;
				case 34:
					return -1548165899;
				case 35:
					return -1486701482;
				case 36:
					return 1249990864;
				case 37:
					return -164125056;
				case 38:
					return -1198456774;
				case 39:
					return -820014425;
				case 40:
					return -2071373019;
				case 41:
					return -162152912;
				case 42:
					return -532430534;
				case 43:
					return -695655810;
				case 44:
					return -1238376790;
				case 45:
					return 1927460276;
				case 46:
					return 1824331150;
				case 47:
					return 1888528254;
				case 48:
					return 1971155641;
				case 49:
					return -1757085331;
				case 50:
					return 1264235360;
				case 51:
					return 1157034909;
				case 52:
					return 512067206;
				case 54:
					return -258855820;
				case 55:
					return 2143139308;
				case 56:
					return -18183703;
				case 57:
					return 692218123;
				case 58:
					return 127002552;
				case 59:
					return 1769573516;
				case 60:
					return 501194998;
				case 61:
					return -219249641;
				case 62:
					return 1935952956;
				case 63:
					return 121222228;
				case 64:
					return -1381943684;
				case 65:
					return -1417145007;
				case 66:
					return -314300362;
				case 67:
					return -445710060;
				case 68:
					return 122725574;
				case 69:
					return -935212592;
				case 70:
					return -597010176;
				case 71:
					return 534386033;
				case 72:
					return -330340613;
				case 73:
					return 1425403638;
				case 74:
					return 124507607;
				case 75:
					return 747937920;
				case 76:
					return 1636680094;
			}
			break;
		case 8:
			iVar2 = func_251(iParam0);
			switch (iVar2)
			{
				case 120:
					return -895048976;
				case 0:
					return -172442174;
				case 63:
					return 569547151;
				case 97:
					return 1150653348;
				case 98:
					return -2075517304;
				case 94:
					return -1048889581;
				case 59:
					return 2137967386;
				case 61:
					return -1955429862;
				case 62:
					return 1899640864;
				case 112:
					return 1469701481;
				case 113:
					return -954047483;
				case 114:
					return -1868521635;
				case 66:
					*uParam1 = -2060316038;
					return -402973141;
				case 76:
					return 281905065;
				case 134:
					return 1132574871;
				case 3:
					return 709886296;
				case 5:
					return -1646431667;
				case 21:
					return 2143106360;
				case 37:
					return 1073595144;
				case 138:
					return -1582252733;
				case 67:
					*uParam1 = -2060316038;
					return 1415827953;
				case 106:
					return 195634974;
				case 107:
					return 1508162848;
				case 115:
					return -1971110347;
				case 116:
					return 446631778;
				case 22:
					return 1909655985;
				case 23:
					return -303175962;
				case 82:
					return 437096661;
				case 68:
					*uParam1 = -2060316038;
					return 1046168872;
				case 140:
					return 1593516439;
				case 142:
					return 1234351222;
				case 58:
					return -1988547710;
				case 64:
					return 98434060;
				case 65:
					return 1937922313;
				case 108:
					return -713369135;
				case 8:
					return -1538781541;
				case 10:
					return -925475803;
				case 2:
					return -1479860879;
				case 96:
					return -1025265051;
				case 52:
					return -270246276;
				default:
					break;
			}
			break;
		case 11:
			iVar3 = func_251(iParam0);
			switch (iVar3)
			{
				case 581819093:
					return -1202860612;
				case -1220302226:
					return 703663141;
				case -839878969:
					return 1534808110;
				case -360730635:
					return -742985447;
				case 687859577:
					return -331451824;
				case 1202375449:
					return 1344816618;
				case -1891229662:
					return 597768834;
				case -668333238:
					return -120359954;
				case 99378894:
					return -290258665;
				default:
					break;
			}
			break;
	}
	return 176656832;
}

int func_1235(int iParam0, var uParam1)
{
	*uParam1 = 0;
	switch (iParam0)
	{
		case 68:
			*uParam1 = 35;
			return 70;
		case 76:
			*uParam1 = 35;
			return 70;
		case 70:
			*uParam1 = 35;
			return 70;
		case 73:
			*uParam1 = 35;
			return 70;
		case 19:
			*uParam1 = 25;
			return 50;
		case 21:
			*uParam1 = 35;
			return 70;
		case 60:
			*uParam1 = 35;
			return 70;
		case 61:
			*uParam1 = 35;
			return 70;
		case 62:
			*uParam1 = 35;
			return 70;
		case 63:
			*uParam1 = 35;
			return 70;
		case 64:
			*uParam1 = 35;
			return 70;
		case 65:
			*uParam1 = 35;
			return 70;
		case 66:
			*uParam1 = 35;
			return 70;
		case 67:
			*uParam1 = 35;
			return 70;
		case 32:
			*uParam1 = 35;
			return 70;
		case 48:
			*uParam1 = 35;
			return 70;
		case 49:
			*uParam1 = 35;
			return 70;
		case 47:
			*uParam1 = 30;
			return 60;
		case 58:
			*uParam1 = 30;
			return 60;
		case 27:
			*uParam1 = 30;
			return 60;
		case 29:
			*uParam1 = 40;
			return 100;
		case 30:
			*uParam1 = 50;
			return 100;
		case 33:
			*uParam1 = 30;
			return 60;
		case 23:
			*uParam1 = 30;
			return 60;
		case 10:
			*uParam1 = 30;
			return 60;
		case 5:
			*uParam1 = 45;
			return 60;
		case 11:
			*uParam1 = 35;
			return 70;
		case 9:
			*uParam1 = 45;
			return 70;
		case 15:
			*uParam1 = 15;
			return 35;
		case 35:
			*uParam1 = 50;
			return 70;
		case 8:
			*uParam1 = 50;
			return 100;
		case 36:
			*uParam1 = 40;
			return 80;
		case 22:
			*uParam1 = 25;
			return 45;
		case 39:
		case 41:
		case 42:
		case 43:
			*uParam1 = 20;
			return 40;
	}
	return 120;
}

int func_1236(int iParam0, int iParam1, int iParam2)
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

void func_1237(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = iParam0 * 1000;
	if ((iVar0 + MISC::GET_GAME_TIMER()) > Global_1327479->f_4)
	{
		func_1634(iParam0, iParam1, bParam2);
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

int func_1238(int iParam0, int iParam1)
{
	*iParam1 = 0;
	switch (iParam0)
	{
		case 55:
			*iParam1 = 45;
			return 75;
		case 60:
			*iParam1 = 0;
			return 0;
		case 74:
			*iParam1 = 45;
			return 75;
		case 119:
			*iParam1 = 45;
			return 75;
		case 84:
			*iParam1 = 45;
			return 75;
		case 85:
			*iParam1 = 45;
			return 75;
		case 106:
			*iParam1 = 20;
			return 35;
		case 107:
			*iParam1 = 20;
			return 35;
		case 8:
			*iParam1 = 45;
			return 75;
		case 9:
			*iParam1 = 45;
			return 75;
		case 10:
			*iParam1 = 45;
			return 75;
		case 98:
			*iParam1 = 30;
			return 50;
		case 82:
			*iParam1 = 30;
			return 50;
		case 83:
			*iParam1 = 30;
			return 50;
		case 99:
			*iParam1 = 30;
			return 50;
		case 138:
			*iParam1 = 30;
			return 50;
		case 139:
			*iParam1 = 30;
			return 50;
		case 140:
			*iParam1 = 30;
			return 50;
		case 141:
			*iParam1 = 30;
			return 50;
		case 142:
			*iParam1 = 30;
			return 50;
		case 21:
			*iParam1 = 30;
			return 50;
		case 136:
			*iParam1 = 30;
			return 50;
		case 137:
			*iParam1 = 40;
			return 80;
		case 124:
			*iParam1 = 30;
			return 50;
		case 125:
			*iParam1 = 30;
			return 50;
		case 127:
			*iParam1 = 30;
			return 50;
		case 128:
			*iParam1 = 30;
			return 50;
		case 131:
			*iParam1 = 30;
			return 50;
		case 133:
			*iParam1 = 30;
			return 50;
		case 105:
			*iParam1 = 30;
			return 50;
		case 89:
			*iParam1 = 30;
			return 50;
		case 93:
			*iParam1 = 30;
			return 50;
		case 75:
			*iParam1 = 30;
			return 50;
		case 5:
			*iParam1 = 50;
			return 100;
		case 6:
			*iParam1 = 30;
			return 50;
		case 77:
			*iParam1 = 30;
			return 50;
		case 78:
			*iParam1 = 30;
			return 50;
		case 30:
			*iParam1 = 30;
			return 50;
		case 31:
			*iParam1 = 30;
			return 50;
		case 32:
			*iParam1 = 30;
			return 50;
		case 33:
			*iParam1 = 30;
			return 50;
		case 34:
			*iParam1 = 30;
			return 50;
		case 35:
			*iParam1 = 30;
			return 50;
		case 36:
			*iParam1 = 30;
			return 50;
		case 24:
			*iParam1 = 30;
			return 50;
		case 25:
			*iParam1 = 30;
			return 50;
		case 26:
			*iParam1 = 30;
			return 50;
		case 27:
			*iParam1 = 30;
			return 50;
		case 28:
			*iParam1 = 30;
			return 50;
		case 66:
			*iParam1 = 30;
			return 50;
		case 67:
			*iParam1 = 50;
			return 100;
		case 146:
			*iParam1 = 30;
			return 50;
		case 38:
			*iParam1 = 30;
			return 45;
		case 39:
			*iParam1 = 30;
			return 45;
		case 40:
			*iParam1 = 30;
			return 45;
		case 41:
			*iParam1 = 30;
			return 45;
		case 42:
			*iParam1 = 30;
			return 45;
		case 43:
			*iParam1 = 30;
			return 45;
		case 44:
			*iParam1 = 30;
			return 45;
		case 45:
			*iParam1 = 30;
			return 45;
		case 46:
			*iParam1 = 30;
			return 45;
		case 47:
			*iParam1 = 30;
			return 45;
		case 48:
			*iParam1 = 30;
			return 45;
		case 49:
			*iParam1 = 30;
			return 45;
		case 50:
			*iParam1 = 30;
			return 45;
		case 51:
			*iParam1 = 30;
			return 45;
		case 112:
			*iParam1 = 10;
			return 20;
		case 113:
			*iParam1 = 25;
			return 45;
		case 114:
			*iParam1 = 10;
			return 20;
		case 59:
			*iParam1 = 15;
			return 35;
		case 61:
			*iParam1 = 15;
			return 35;
		case 97:
			*iParam1 = 15;
			return 35;
		case 94:
			*iParam1 = 20;
			return 30;
		case 0:
			*iParam1 = 45;
			return 75;
		case 115:
			*iParam1 = 30;
			return 60;
	}
	return 120;
}

int func_1239(int iParam0)
{
	switch (iParam0)
	{
		case 57:
		case 125:
		case 150:
			return 1;
	}
	return 0;
}

int func_1240(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 120;
	}
	return 60;
}

void func_1241(int iParam0, bool bParam1)
{
	if (func_28() != -1)
	{
		return;
	}
	if (func_761(0) != iParam0)
	{
		return;
	}
	if (func_939(iParam0))
	{
		if (bParam1)
		{
			func_938(-525676072);
		}
		else
		{
			func_940(-525676072);
		}
	}
}

int func_1242(int iParam0)
{
	int iVar0;
	int iVar1;

	switch (func_91(iParam0))
	{
		case 1:
			iVar0 = func_251(iParam0);
			return func_274(iVar0);
		case 8:
			iVar1 = func_251(iParam0);
			if (func_275(((*Global_1347702)[iVar1 /*49*/])->f_12, 1))
			{
				return func_276(iVar1);
			}
			break;
	}
	return -1;
}

void func_1243(bool bParam0)
{
	int iVar0;

	if (Global_1898077->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_28() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077->f_2 == 4 && Global_1898077->f_12 != Global_1898077->f_13) && !bParam0)
	{
		Global_1898077->f_1 = Global_1898077->f_2;
		Global_1898077->f_12 = Global_1898077->f_13;
		func_1635(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_1636();
		Global_1898077->f_9 = func_1637(Global_1894899->f_2);
		func_1638(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

int func_1244()
{
	if (!func_120(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return 0;
	}
	else if (!func_120(((*Global_1347702)[66 /*49*/])->f_15, 1))
	{
		return 1;
	}
	else if (!func_120(((*Global_1347702)[67 /*49*/])->f_15, 1))
	{
		return 2;
	}
	else if (!func_120(((*Global_1835011)[38 /*74*/])->f_1, 1))
	{
		return 3;
	}
	else if (!func_120(((*Global_1347702)[68 /*49*/])->f_15, 1))
	{
		return 4;
	}
	else if (!func_120(((*Global_1835011)[59 /*74*/])->f_1, 1))
	{
		return 5;
	}
	else if (!func_120(((*Global_1835011)[67 /*74*/])->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_1245()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 1);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_197(13);
		(*Global_1898441)[iVar0 /*38*/] = 13;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_WIN2_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_WIN2_COM", 24);
	}
}

void func_1246(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	bool bVar13;
	int iVar14;
	int iVar15;

	if (func_467(iParam0, 1989861793))
	{
		iVar0 = func_951(iParam0, 1697966752);
		if (iVar0 != 0)
		{
			Var3 = { func_1639(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
			if (func_1640(Var3, &iVar1, &iVar2, 0))
			{
				bVar13 = false;
				iVar14 = 0;
				while (iVar14 < iVar2)
				{
					iVar15 = func_1641(iVar14, iVar1);
					if (iVar15 != iParam0 && func_38(iVar15, 0))
					{
						if (func_1642(iVar15, 0, 0, 1, 0))
						{
							bVar13 = true;
						}
					}
					iVar14++;
				}
				func_1643(iVar1);
				if (bVar13)
				{
					func_1644(iParam0);
				}
				else
				{
					func_438(306, 0);
				}
			}
		}
	}
}

void func_1247()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 2);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_197(14);
		(*Global_1898441)[iVar0 /*38*/] = 14;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_MUD1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_MUD1_COM", 24);
	}
}

void func_1248(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_901(iParam0, 1);
	func_1645(Global_1946804->f_1497.f_1[iVar0 /*3*/], 2, 6);
	func_1645(Global_1946804->f_1378.f_1[iVar0 /*3*/], 2, 6);
	if (bParam1)
	{
		Global_1946804->f_1497.f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
		(Global_1946804->f_1497.f_1[iVar0 /*3*/])->f_1 = 0;
		*(Global_1946804->f_1378.f_1[iVar0 /*3*/]) = { *(Global_1946804->f_1497.f_1[iVar0 /*3*/]) };
		if (bParam2)
		{
			func_407(17, iParam0, 0, 0, 0);
		}
	}
	if (func_28() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_1645((Global_26795.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/], 2, 6);
			if (bParam1)
			{
				(Global_26795.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
				((Global_26795.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/])->f_1 = 0;
			}
			iVar1++;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_1645((Global_36637.f_45.f_350.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/], 2, 6);
			if (bParam1)
			{
				(Global_36637.f_45.f_350.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
				((Global_36637.f_45.f_350.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/])->f_1 = 0;
			}
			iVar1++;
		}
	}
}

void func_1249()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 5);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_197(17);
		(*Global_1898441)[iVar0 /*38*/] = 17;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_BRA2_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_BRA2_COM", 24);
	}
}

void func_1250()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 6);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_197(18);
		(*Global_1898441)[iVar0 /*38*/] = 18;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_BRA3_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_BRA3_COM", 24);
	}
}

int func_1251(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	struct<5> Var0;

	if (iParam3 == -358215195)
	{
		Var0 = { func_930(iParam1, 1, 0) };
		iParam3 = func_931(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	func_1646(iParam3);
	return func_442(iParam0, iParam1, iParam2, iParam3, bParam4, iParam5, 1, 0, 1, 0);
}

int func_1252(int iParam0, int iParam1)
{
	if (!func_1647(iParam0))
	{
		return 0;
	}
	if ((iParam1 == -1 || iParam1 < 0) || iParam1 > 179)
	{
		iParam1 = func_1648(iParam0);
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	return func_1649(Global_40.f_9910[iParam1 /*6*/], 4);
}

void func_1253(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_1647(iParam0))
	{
		return;
	}
	if (!func_1650(iParam1))
	{
		return;
	}
	if (func_1449(iParam1, 1))
	{
		return;
	}
	iVar0 = func_1648(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (func_1252(iParam0, -1))
	{
		return;
	}
	else
	{
		func_1651(Global_40.f_9910[iVar0 /*6*/], 2);
	}
	(Global_40.f_9910[iVar0 /*6*/])->f_4 = iParam1;
	if (bParam2)
	{
		if (!func_610(0, 0, 1))
		{
			func_649(0, 17);
		}
	}
}

void func_1254()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 7);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_197(19);
		(*Global_1898441)[iVar0 /*38*/] = 19;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_MOB5_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_MOB5_COM", 24);
	}
}

void func_1255()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 8);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_197(20);
		(*Global_1898441)[iVar0 /*38*/] = 20;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_SAI1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_SAI1_COM", 24);
	}
}

void func_1256()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 9);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_197(21);
		(*Global_1898441)[iVar0 /*38*/] = 21;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_GUA1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_GUA1_COM", 24);
	}
}

void func_1257()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 10);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_197(22);
		(*Global_1898441)[iVar0 /*38*/] = 22;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_GUA3_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_GUA3_COM", 24);
	}
}

void func_1258()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 12);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_197(24);
		(*Global_1898441)[iVar0 /*38*/] = 24;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_ODR5_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_ODR5_COM", 24);
	}
}

void func_1259()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 13);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_197(25);
		(*Global_1898441)[iVar0 /*38*/] = 25;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_FIN1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_FIN1_COM", 24);
	}
}

void func_1260()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 14);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_197(27);
		(*Global_1898441)[iVar0 /*38*/] = 27;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_MAR51_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_MAR51_COM", 24);
	}
}

void func_1261()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 15);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_197(28);
		(*Global_1898441)[iVar0 /*38*/] = 28;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_ABI21_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_ABI_21_COM", 24);
	}
}

bool func_1262(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

bool func_1263(int iParam0)
{
	return (Global_40.f_12018.f_4 && iParam0) != 0;
}

void func_1264(int iParam0)
{
	if (func_17(32768))
	{
		return;
	}
	if (iParam0 < 0)
	{
		func_1020(MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_BANK_FEED", MISC::ABSI(iParam0)), "itemtype_textures", MISC::GET_HASH_KEY("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
		Global_1879514->f_14 = 1;
		Global_1879514->f_15 = 0;
	}
	else
	{
		func_1020(MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_LOAN_FEED", iParam0), "itemtype_textures", MISC::GET_HASH_KEY("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Negative", 0, 1);
		Global_1879514->f_14 = 0;
		Global_1879514->f_15 = 1;
	}
}

void func_1265()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 16);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_197(29);
		(*Global_1898441)[iVar0 /*38*/] = 29;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_BEE22_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_BEE22_COM", 24);
	}
}

void func_1266()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 17);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_197(26);
		(*Global_1898441)[iVar0 /*38*/] = 26;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_FIN2_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_FIN2_COM", 24);
	}
}

void func_1267()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 11);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_197(23);
		(*Global_1898441)[iVar0 /*38*/] = 23;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_DOC_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_DOC_COM", 24);
	}
}

void func_1268()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 3);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_197(15);
		(*Global_1898441)[iVar0 /*38*/] = 15;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_DOW3_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_DOW3_COM", 24);
	}
}

void func_1269()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 4);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_197(16);
		(*Global_1898441)[iVar0 /*38*/] = 16;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_DUT1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_DUT1_COM", 24);
	}
}

void func_1270()
{
	if (func_1652() > 1)
	{
		func_1653();
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(-707360575))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(-707360575, true);
			func_438(444, 1);
		}
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(-1201174711))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(-1201174711, true);
			func_438(447, 1);
		}
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(151582343))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(151582343, true);
			func_438(448, 1);
		}
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(-642492359))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(-642492359, true);
			func_438(450, 1);
		}
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(5171247))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(5171247, true);
			func_438(452, 1);
		}
	}
}

void func_1271(int iParam0)
{
	struct<2> Var0;

	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_326 = iParam0;
	Var0 = { func_155(-160912108) };
	STATS::STAT_ID_SET_INT(&Var0, iParam0, true);
}

void func_1272(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_17(32768))
	{
		return;
	}
	if (!func_67(iParam0))
	{
		return;
	}
	func_19(Global_1935630, 8192);
	iVar2 = 1;
	switch (func_91(iParam0))
	{
		case 1:
			func_481(func_284(909007663, -587839005), 1);
			iVar0 = func_251(iParam0);
			func_481(func_155(-634848880), 1);
			switch (func_274(iVar0))
			{
				case 0:
					func_481(func_284(909007663, 1325140787), 1);
					break;
				case 1:
					func_481(func_284(909007663, 2101241783), 1);
					break;
				case 2:
					func_481(func_284(909007663, -1296936294), 1);
					break;
				case 3:
					func_481(func_284(909007663, -798388728), 1);
					break;
				case 4:
					func_481(func_284(909007663, -1787586531), 1);
					break;
				case 5:
					func_481(func_284(909007663, -1002834519), 1);
					break;
				case 6:
					func_481(func_284(909007663, -50600144), 1);
					break;
				case 7:
					func_481(func_284(909007663, -348503123), 1);
					break;
				case 8:
					func_481(func_284(909007663, -528798161), 1);
					break;
				default:
					iVar2 = 0;
					break;
			}
			if (iVar0 == 7)
			{
				func_481(func_284(909007663, -406093146), 1);
			}
			if (iVar2 && MISSIONDATA::_0xE824CE7D13FCB35E(MISC::GET_HASH_KEY(&(((*Global_1835011)[iVar0 /*74*/])->f_8))))
			{
				func_481(func_284(909007663, 532323983), 1);
			}
			break;
		case 8:
			iVar1 = func_251(iParam0);
			if (func_275(((*Global_1347702)[iVar1 /*49*/])->f_12, 1))
			{
				func_481(func_155(-634848880), 1);
			}
			if (func_275(((*Global_1347702)[iVar1 /*49*/])->f_12, 4) || iVar1 == 59)
			{
				if (func_275(((*Global_1347702)[iVar1 /*49*/])->f_12, 1))
				{
					func_481(func_284(909007663, -587839005), 1);
				}
				else
				{
					func_481(func_284(909007663, -2049243343), 1);
				}
			}
			if (func_275(((*Global_1347702)[iVar1 /*49*/])->f_12, 1))
			{
				switch (func_276(iVar1))
				{
					case 0:
						func_481(func_284(909007663, 1325140787), 1);
						break;
					case 1:
						func_481(func_284(909007663, 2101241783), 1);
						break;
					case 2:
						func_481(func_284(909007663, -1296936294), 1);
						break;
					case 3:
						func_481(func_284(909007663, -798388728), 1);
						break;
					case 4:
						func_481(func_284(909007663, -1787586531), 1);
						break;
					case 5:
						func_481(func_284(909007663, -1002834519), 1);
						break;
					case 6:
						func_481(func_284(909007663, -50600144), 1);
						break;
					case 7:
						func_481(func_284(909007663, -348503123), 1);
						break;
					case 8:
						func_481(func_284(909007663, -528798161), 1);
						break;
					default:
						iVar2 = 0;
						break;
				}
				if (iVar2 && MISSIONDATA::_0xE824CE7D13FCB35E(MISC::GET_HASH_KEY(&(((*Global_1347702)[iVar1 /*49*/])->f_3))))
				{
					func_481(func_284(909007663, 532323983), 1);
				}
			}
			else if (func_275(((*Global_1347702)[iVar1 /*49*/])->f_12, 4))
			{
				if (func_275(((*Global_1347702)[iVar1 /*49*/])->f_12, 4194304))
				{
				}
				else if (!func_275(((*Global_1347702)[iVar1 /*49*/])->f_12, 512))
				{
					func_481(func_284(909007663, 551192206), 1);
				}
				else
				{
					func_481(func_284(909007663, -406093146), 1);
				}
			}
			break;
	}
}

void func_1273()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;

	if (func_28() != -1)
	{
		return;
	}
	if (&Global_1956575 != 2)
	{
		return;
	}
	if (Global_1956575->f_2)
	{
		return;
	}
	if (!func_24(64))
	{
		return;
	}
	else if (func_77(&Global_1935630, 131072))
	{
		return;
	}
	else if ((func_610(0, 0, 1) || func_1654()) || func_123())
	{
		return;
	}
	iVar0 = func_1244();
	if (((iVar0 == 0 || iVar0 == 4) || iVar0 == 6) || iVar0 == 7)
	{
		return;
	}
	while (SPACTIONPROXY::_SPACTIONPROXY_GET_NEXT_PENDING_BUY_ACTION(&uVar4))
	{
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1655(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		func_437(MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		func_437(MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		func_1488(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		func_649(0, -1);
	}
	if (iVar2 > 0)
	{
		func_1456("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	func_410(1, 0);
	Global_1956575->f_2 = 1;
}

void func_1274(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	if (func_17(32768))
	{
		return;
	}
	func_1040(iParam1, bParam2, fParam3, iParam4, sParam5, iParam6, iParam7, 752097756);
	if (bParam2)
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-843169622))
		{
			Global_1879514->f_12 = 1;
		}
		else
		{
			Global_1879514->f_12 = 0;
		}
		func_1656(iParam0, iParam1, fParam3, iParam4);
	}
}

int func_1275(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_1573(iParam0))
	{
		return 0;
	}
	if (!func_35())
	{
		return 0;
	}
	if (!func_1183(iParam0, &iVar0, &iVar1))
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

int func_1276(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_984(1330954593, 0, -1);
		case 1:
			return func_984(1330954593, 0, -1);
		case 2:
			return func_984(1330954593, 0, -1) * 2;
		case 4:
			return func_984(1330954593, 0, -1);
		case 5:
			return func_984(1330954593, 0, -1);
		case 6:
			return func_984(1330954593, 0, -1) * 2;
		case 12:
			return 75000;
		case 8:
			return func_984(1330954593, 0, -1) * 3;
		case 9:
			return func_984(1330954593, 0, -1) * 3;
		case 10:
			return func_984(1330954593, 0, -1) * 3;
		case 11:
			return func_984(1330954593, 0, -1);
		default:
			break;
	}
	return 0;
}

void func_1277(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!Global_1879514->f_11)
	{
		iVar0 = func_1657();
		iVar1 = MISC::GET_HASH_KEY(&uParam0);
		if (MISSIONDATA::_0x57E798B54C45EE1A(iVar1) != 5 && iVar0 == 5)
		{
			if (func_91(Global_1879514->f_1) == 1)
			{
				func_1275(5, 1);
			}
			else if (func_91(Global_1879514->f_1) == 8 && (func_275(((*Global_1347702)[func_251(Global_1879514->f_1) /*49*/])->f_12, 1) || func_275(((*Global_1347702)[func_251(Global_1879514->f_1) /*49*/])->f_12, 33554432)))
			{
				func_1275(5, 1);
			}
		}
		MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&uParam0), iVar0);
	}
	else
	{
		MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&uParam0), 3);
	}
}

void func_1278(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

bool func_1279(int iParam0)
{
	return (Global_1894899 && iParam0) != 0;
}

void func_1280()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 150)
	{
		func_1658(iVar0);
		iVar0++;
	}
}

void func_1281()
{
	int iVar0;
	int iVar1;

	if (func_28() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_8863)
	{
		iVar1 = func_280(iVar0, 1);
		if (func_282(iVar1, 8))
		{
			MAP::_0xD8C7162AB2E2AF45(func_1659(iVar1, 0));
		}
		iVar0++;
	}
}

void func_1282(int iParam0)
{
	if (func_1142(iParam0) == 57)
	{
		MAP::_0x6786D7AFAC3162B3(-1145496915);
		MAP::_0x6786D7AFAC3162B3(-1043953850);
		MAP::_0x6786D7AFAC3162B3(-1783502982);
	}
	else if (MAP::_0xE38450DBCBC70E3D(iParam0, -1305340593) || MAP::_0xE38450DBCBC70E3D(iParam0, -1482012664))
	{
		MAP::_0x6786D7AFAC3162B3(iParam0);
	}
}

void func_1283(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if (!func_126(iParam0))
	{
		return;
	}
	if (func_1660(iParam0) && !bParam1)
	{
		return;
	}
	if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1888801)[iParam0 /*35*/])->f_5))
	{
		iVar0 = ((*Global_1888801)[iParam0 /*35*/])->f_5;
	}
	else
	{
		iVar0 = func_821(iParam0);
	}
	bVar1 = func_177(iParam0, 33554432);
	if (bParam1)
	{
		iVar2 = func_1661(iParam0);
		if (iParam2 > iVar2 || !func_1650(func_1662(iParam0)))
		{
			func_1663(iParam0, func_261());
			func_1664(iParam0, iParam2);
		}
		if (!bVar1)
		{
			func_351(iParam0, 33554432);
			if (VOLUME::_0x92A78D0BEDB332A3(iVar0))
			{
				if (iParam0 == 38)
				{
					iVar3 = 0;
				}
				else
				{
					iVar3 = 1;
				}
				PATHFIND::_0xF2A2177AC848B3A8(iVar0, 0, iVar3);
			}
		}
	}
	else if (bVar1)
	{
		func_347(iParam0, 33554432);
		func_1663(iParam0, -15);
		if (VOLUME::_0x92A78D0BEDB332A3(iVar0))
		{
			PATHFIND::_0xF2A2177AC848B3A8(iVar0, 1, 1);
		}
	}
	func_1665(iParam0);
}

void func_1284(int iParam0, bool bParam1)
{
	bool bVar0;

	if (!func_126(iParam0))
	{
		return;
	}
	bVar0 = func_177(iParam0, 67108864);
	if (bParam1)
	{
		if (((!bVar0 && func_109(iParam0) == 1) && iParam0 != 120) && iParam0 != 92)
		{
			func_1666(iParam0, func_261());
			func_351(iParam0, 67108864);
		}
	}
	else if (bVar0)
	{
		func_347(iParam0, 67108864);
		func_1666(iParam0, -15);
	}
	func_1667(iParam0);
}

bool func_1285(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_1286()
{
	return Global_1109400->f_244;
}

void func_1287(int iParam0, int iParam1)
{
	if (!func_67(iParam0))
	{
		return;
	}
	func_95(iParam0, iParam1);
}

void func_1288()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_40.f_450)
	{
		if (func_242(&(Global_40.f_450[iVar0])))
		{
			func_769(&(((*Global_1347702)[&Global_40.f_450[iVar0] /*49*/])->f_13), 2);
			Global_40.f_450[iVar0] = -1;
		}
		iVar0++;
	}
	Global_40.f_1094 = 0;
}

int func_1289()
{
	VOLUME::_0x748C5F51A18CB8F0(0);
	func_1668(0, 0, "ABIGAIL11", "RABI1", "rcm_abigail11", -1, -146.9627f, -15.7764f, 95.2415f, 0, 2134645637, 262151, 100f);
	func_1668(3, 3, "BANDP10", "RBNP10", "rcm_beau_and_penelope10", -1, 1736.427f, -1375.109f, 42.9164f, 0, -982604554, 67240067, 200f);
	func_1668(4, 3, "BANDP11", "RBNP11", "rcm_beau_and_penelope11", 5, 1790.746f, -1311.754f, 43.1925f, joaat("cs_beaugray"), 1301148265, 1310737, 120f);
	func_1668(5, 3, "BANDP12", "RBNP12", "rcm_beau_and_penelope12", -1, 1863.698f, -1349.39f, 41.2784f, 0, 1301148265, 262149, 250f);
	func_1668(21, 18, "BRAT01", "RBRT0", "rcm_braithwaites01", -1, 660.1356f, -1257.437f, 44.0746f, 0, 2134645637, 67239943, 120f);
	func_1668(37, 23, "COACHROBBERY1", "RCHRB", "rcm_coach_robbery1", -1, 675.0945f, -1217.237f, 44.386f, 0, -1151477989, 262151, 120f);
	func_1668(58, 33, "DOCTORSOPINION1", "RDOPN", "rcm_doctors_opinion1", -1, 2802.581f, -1177.624f, 45.9451f, 0, 0, 134480023, 85f);
	func_1668(59, 34, "DOWN1", "RDOWN1", "rcm_down1", 60, -171.1026f, -25.1129f, 94.9136f, 0, 2145479193, 67, 120f);
	func_1668(60, 34, "DOWNA", "RDOWNA", "rcm_down1_2", -1, -171.1026f, -25.1129f, 94.9136f, 0, 2145479193, 12529, 150f);
	func_1668(61, 34, "DOWN2", "RDOWN2", "rcm_down2", -1, -135.48f, -33.46f, 95.08f, 0, -1954662204, 97, 60f);
	func_1668(62, 34, "DOWN3", "RDOWN3", "rcm_down3", -1, -815.8262f, 343.8745f, 99.3458f, 0, 2145479193, 262341, 120f);
	func_1668(63, 35, "DUSTER21", "RDST2", "rcm_dusters21", -1, -138.2931f, -13.8407f, 95.3376f, 0, -420584813, 262215, 120f);
	func_1668(64, 36, "DUSTER61", "RDST61", "rcm_dusters61", -1, 2362.525f, 1308.025f, 111.6106f, 0, 1232829146, 67108931, 90f);
	func_1668(65, 36, "DUSTER62", "RDST62", "rcm_dusters62", -1, -2110.199f, 660.5305f, 119.8892f, 0, 1232829146, 1310725, 100f);
	func_1668(66, 37, "DUTCH11", "RDTC1", "rcm_dutch11", -1, -129.8283f, -32.11561f, 94.94459f, 0, -106554210, 262215, 150f);
	func_1668(67, 38, "DUTCH21", "RDTC2", "rcm_dutch21", -1, 672.7785f, -1246.157f, 42.9398f, 0, -106554210, 296039, 1112014848);
	func_1668(68, 39, "DUTCH31", "RDCH3", "rcm_dutch31", -1, 2247.695f, -798.5478f, 43.1559f, 0, -106554210, 262151, 130f);
	func_1668(76, 42, "EXCONFED11", "RXCF1", "rcm_exconfed11", -1, 677.1235f, -1288.551f, 42.4063f, 0, 818727011, 262151, 120f);
	func_1668(82, 45, "GANG01", "RGNG01", "rcm_gang01", -1, 3009.262f, 477.1921f, 40.8607f, 0, 0, 132323, 1112014848);
	func_1668(83, 45, "GANG02", "RGNG02", "rcm_gang02", -1, 2974.441f, 474.3331f, 46.86f, 0, 0, 134489253, 1112014848);
	func_1668(94, 51, "HOMEROB00", "RHMR0", "rcm_homerob00", -1, 1407.78f, 265.425f, 88.61228f, 0, -1724301546, 1351687, 200f);
	func_1668(97, 54, "MARY01", "RMARY1", "rcm_mary01", 98, -126.0832f, -38.3759f, 94.6333f, 0, -2100584570, 67240027, 1112014848);
	func_1668(98, 54, "MARY02", "RMARY2", "rcm_mary02", -1, -380.78f, 917.269f, 118.9613f, 0, 1429600911, 67240133, 36f);
	func_1668(106, 58, "MOB01", "RMOB01", "rcm_mob01", -1, 2793.855f, -1169.53f, 46.924f, 0, -1137631263, 67109063, 1112014848);
	func_1668(107, 58, "MOB02", "RMOB02", "rcm_mob02", -1, 2686.954f, -1122.447f, 49.7002f, 0, -1137631263, 67108935, 1112014848);
	func_1668(108, 59, "MONROE11", "RMNR1", "rcm_monroe11", -1, 471.1853f, 2226.889f, 246.2259f, 0, -301979999, 2359303, 150f);
	func_1668(112, 60, "MUDTOWN31", "RMUD31", "rcm_mudtown3_1", 112, -141.5388f, -57.201f, 93.9626f, 0, -887880659, 131283, 100f);
	func_1668(113, 60, "MUDTOWN32", "RMUD32", "rcm_mudtown3_2", 113, 505.0512f, 704.0245f, 115.0716f, 0, -887880659, 274609, 1112014848);
	func_1668(114, 60, "MUDTOWN33", "RMUD33", "rcm_mudtown3_3", -1, -144.0388f, -56.981f, 93.9626f, 0, -887880659, 67240005, 100f);
	func_1668(115, 62, "NATIVE1", "RNATV1", "rcm_native1", -1, 2531.1f, -1312.83f, 48.19f, joaat("cs_evelynmiller"), -1822497728, 67764227, 120f);
	func_1668(116, 62, "NATIVE2", "RNATV2", "rcm_native2", -1, 223.26f, 512.19f, 125.45f, 0, 1079956634, 1310725, 350f);
	func_1668(120, 64, "PEARSON1", "RPRSN", "rcm_pearson1", -1, -1346.968f, 2402.061f, 306.5004f, 0, -699499938, 262151, 120f);
	func_1668(134, 68, "SADIE1", "RSAD1", "rcm_sadie11", -1, 677.3743f, -1251.831f, 43.0154f, 0, -699499938, 262151, 130f);
	func_1668(6, 4, "BANDP20", "RBNP20", "rcm_beau_and_penelope20", 7, 2340.914f, 1359.669f, 105.3503f, 0, -2100584570, 2228234, 120f);
	func_1668(7, 4, "BANDP21", "RBNP21", "rcm_beau_and_penelope21", -1, 895.2736f, -1866.43f, 42.6791f, 0, -510064667, 40108164, 120f);
	func_1668(22, 19, "CALDERON1", "RCLDN1", "rcm_calderon1", 23, 2815.65f, -1222.53f, 46.57f, joaat("cs_brotherdorkins"), -1822497728, 35913794, 70f);
	func_1668(23, 19, "CALDERON2", "RCLDN2", "rcm_calderon2", -1, 2819.028f, -1110.255f, 45.9487f, joaat("cs_sistercalderon"), 332378857, 40108100, 120f);
	func_1668(24, 20, "CALDERON21", "RCLD21", "rcm_calderon21", 25, 2733.148f, -1248.815f, 48.8597f, joaat("cs_sistercalderon"), -1822497728, 2228290, 120f);
	func_1668(25, 20, "CALDERON22", "RCLD22", "rcm_calderon22", -1, 2733.148f, -1248.815f, 48.8597f, 0, -809133732, 6557892, 125f);
	func_1668(26, 21, "CALLOWAY1", "RCAL11", "rcm_callaway1", -1, -240.2066f, 768.6583f, 117.085f, joaat("cs_jimcalloway"), -1822497728, 1179714, 40f);
	func_1668(27, 21, "CALLOWAYB", "RCAL1B", "rcm_callaway12", 28, -239.1001f, 770.5522f, 117.1001f, 0, -1744398657, 131072, 40f);
	func_1668(28, 21, "CALLOWAY2", "RCAL12", "rcm_callaway2", 29, 2857.948f, -1370.687f, 43.5575f, 0, -1744398657, 131072, 1112014848);
	func_1668(29, 21, "CALLOWAY3", "RCAL13", "rcm_callaway3", -1, 2907.656f, 1314.266f, 44.67463f, joaat("cs_asbdeputy_01"), -1744398657, 537133124, 36f);
	func_1668(30, 22, "CHAINGANG1", "RBWCG1", "rcm_chain_gang1", 31, 1276.24f, -1389.17f, 79.86f, joaat("cs_chainprisoner_01"), -1822497728, 1704002, 140f);
	func_1668(31, 22, "CHAINGANG2", "RBWCG2", "rcm_chain_gang2", 32, 1311.78f, -1298.51f, 74.93f, 0, -622951465, 12528, 1112014848);
	func_1668(32, 22, "CHAINGANG3", "RBWCG3", "rcm_chain_gang3", 33, 1215.95f, -1425.98f, 70.45f, 0, -622951465, 1310784, 100f);
	func_1668(33, 22, "CHAINGANG4", "RBWCG4", "rcm_chain_gang4", 34, 902.15f, -384.86f, 88.3f, joaat("cs_chainprisoner_01"), -1822497728, 1572928, 150f);
	func_1668(34, 22, "CHAINGANG5", "RBWCG5", "rcm_chain_gang5", 35, 902.15f, -384.86f, 88.3f, 0, -622951465, 4320, 150f);
	func_1668(35, 22, "CHAINGANG6", "RBWCG6", "rcm_chain_gang6", 36, 902.15f, -384.86f, 88.3f, 0, -622951465, 262208, 150f);
	func_1668(36, 22, "CHAINGANG7", "RBWCG7", "rcm_chain_gang7", -1, -2459.21f, 838f, 145.37f, joaat("cs_chainprisoner_01"), -1822497728, 538836996, 80f);
	func_1668(38, 24, "CIGCARD1", "RCCIG", "rcm_collect_cigarette_cards1", -1, -343.5616f, -369.2671f, 87.0759f, joaat("cs_cigcardguy"), -1822497728, 72482822, (50f * 4f));
	func_1668(39, 25, "DINOBONE11", "RCDIN1", "rcm_collect_dinosaur_bones11", -1, 122.7758f, -185.4978f, 116.4383f, joaat("cs_dinoboneslady"), -1822497728, 68288642, (50f * 4f));
	func_1668(40, 25, "DINOBONE12", "RCDIN2", "rcm_collect_dinosaur_bones12", -1, 197.275f, 985.9788f, 189.2538f, joaat("cs_dinoboneslady"), 1162303770, 608176132, 1112014848);
	func_1668(43, 27, "EXOTICS1", "RCEXO1", "rcm_collect_exotics1", -1, 2586.494f, -1009.154f, 43.24f, joaat("cs_exoticcollector"), -1822497728, 68296706, 1112014848);
	func_1668(44, 27, "EXOTICS2", "RCEXO2", "rcm_collect_exotics2", -1, 2586.494f, -1009.154f, 43.24f, joaat("cs_exoticcollector"), 2107943776, 67250176, 1112014848);
	func_1668(45, 27, "EXOTICS3", "RCEXO3", "rcm_collect_exotics3", -1, 2586.494f, -1009.154f, 43.24f, joaat("cs_exoticcollector"), 2107943776, 67250176, 1112014848);
	func_1668(46, 27, "EXOTICS4", "RCEXO4", "rcm_collect_exotics4", -1, 2586.494f, -1009.154f, 43.24f, joaat("cs_exoticcollector"), 2107943776, 67250176, 1112014848);
	func_1668(47, 27, "EXOTICS5", "RCEXO5", "rcm_collect_exotics5", -1, 2586.494f, -1009.154f, 43.24f, joaat("cs_exoticcollector"), 2107943776, 67250176, 1112014848);
	func_1668(48, 27, "EXOTICS6", "RCEXO6", "rcm_collect_exotics6", -1, 2586.494f, -1009.154f, 43.24f, joaat("cs_exoticcollector"), 2107943776, 608315460, 1112014848);
	func_1668(41, 26, "RAREFISH11", "RCFSH1", "rcm_collect_rare_fish1", -1, 337.3075f, -684.5404f, 41.8362f, joaat("cs_fishcollector"), -1822497728, 68288642, (50f * 4f));
	func_1668(42, 26, "RAREFISH12", "RCFSH2", "rcm_collect_rare_fish2", -1, 341.9155f, -665.392f, 41.8046f, joaat("cs_fishcollector"), -273196610, 541067652, 1112014848);
	func_1668(49, 28, "ROCKFACE1", "RCRKF1", "rcm_collect_rock_faces1", -1, -2178.646f, -245.6886f, 191.1569f, joaat("cs_francis_sinclair"), -1822497728, 68288514, 100f);
	func_1668(50, 28, "ROCKFACE2", "RCRKF2", "rcm_collect_rock_faces2", -1, -2173.926f, -247.408f, 191.8229f, joaat("cs_mrs_sinclair"), -781551276, 608307204, 100f);
	func_1668(51, 29, "TAXIDERMY1", "RCTAX1", "rcm_collect_taxidermy1", -1, -1678.832f, -335.5439f, 172.9001f, joaat("cs_taxidermist"), 1986498931, 68290882, 1112014848);
	func_1668(52, 29, "TAXIDERMY2", "RCTAX2", "rcm_collect_taxidermy2", -1, -1638.497f, -1361.436f, 83.3966f, 0, -1822497728, 608305412, 1112014848);
	func_1668(53, 30, "CRACKPOT1", "RCKPT1", "rcm_crackpot1", 54, 2463.36f, -1372.69f, 44.3262f, joaat("cs_crackpotinventor"), -1822497728, 1310786, 120f);
	func_1668(54, 30, "CRACKPOT2", "RCKPT2", "rcm_crackpot2", 55, 2517.188f, 2289.349f, 176.3516f, joaat("cs_crackpotinventor"), 877823184, 262208, 300f);
	func_1668(55, 30, "CRACKPOT3", "RCKPT3", "rcm_crackpot3", -1, 2517.188f, 2289.349f, 176.3516f, 0, 0, 536875092, 100f);
	func_1668(56, 31, "CRAWLEY1", "RCRAW", "rcm_crawley1", -1, 2011.776f, -504.0132f, 40.983f, -1342246546, -1822497728, 537921542, 150f);
	func_1668(57, 32, "CREOLE1", "RCRLE", "rcm_creole1", -1, 1380.51f, -1337.51f, 77f, joaat("cs_creoledoctor"), -1822497728, 538181702, 120f);
	func_1668(69, 40, "EDOWN21", "REDW21", "rcm_edith_down21", 70, 2935.405f, 1377.749f, 43.5814f, joaat("cs_edithdown"), -661151214, 37486786, 120f);
	func_1668(70, 40, "EDOWN22", "REDW22", "rcm_edith_down22", -1, 2956.146f, 1340.49f, 43.8751f, joaat("cs_archiedown"), -661151214, 41156612, 60f);
	func_1668(77, 43, "FORMYART1", "RFMA1", "rcm_for_my_art1", 78, 2794.64f, -1168.4f, 46.92f, 0, -1822497728, 1179842, 36f);
	func_1668(78, 43, "FORMYART2", "RFMA2", "rcm_for_my_art2", 79, 2738.72f, -1207.39f, 48.66f, 0, -434412386, 1310784, 50f);
	func_1668(79, 43, "FORMYART3", "RFMA3", "rcm_for_my_art3", 80, 2700.241f, -1187.552f, 55.0907f, 0, -434412386, 262336, 150f);
	func_1668(80, 43, "FORMYART4", "RFMA4", "rcm_for_my_art4", -1, 2739.74f, -1315.64f, 47.63f, joaat("cs_frenchartist"), -434412386, 538706116, 120f);
	func_1668(81, 44, "FUNDRAISER", "REFND", "rcm_fundraiser", -1, 2504.054f, -1152.946f, 48.26756f, 0, -1822497728, 86519878, 120f);
	func_1668(84, 46, "GUNSLINGER1", "RGUN11", "rcm_gunslinger1_1", 85, -62.69012f, -404.3738f, 69.91233f, joaat("cs_famousgunslinger_01"), 858349040, 1050634, 120f);
	func_1668(85, 46, "GUNSLINGER12", "RGUN12", "rcm_gunslinger1_2", -1, -63.25864f, -404.9262f, 69.9287f, joaat("cs_famousgunslinger_01"), 858349040, 262340, 120f);
	func_1668(86, 47, "GUNSLINGER2", "RGUN2", "rcm_gunslinger2_1", -1, -967.5845f, 2181.624f, 339.4473f, joaat("cs_famousgunslinger_02"), 479604938, 264398, 200f);
	func_1668(87, 48, "GUNSLINGER3", "RGUN3", "rcm_gunslinger3_1", -1, 1231.35f, -1299.684f, 75.9034f, 0, 240424007, 264398, 50f);
	func_1668(88, 49, "GUNSLINGER51", "RGUN5", "rcm_gunslinger5_1", -1, 2492.992f, -420.529f, 43.78334f, joaat("cs_famousgunslinger_05"), 1813565390, 1312846, 120f);
	func_1668(89, 50, "HEREKITTY1", "RKTTY1", "rcm_here_kitty_kitty1", 90, 1604.317f, -262.3793f, 78.2036f, joaat("cs_ringmaster"), -1822497728, 1179650, 250f);
	func_1668(90, 50, "HEREKITTY2", "RKTTY2", "rcm_here_kitty_kitty2", 91, 1015.113f, 159.7295f, 103.0175f, 0, 1970061205, 262272, 250f);
	func_1668(91, 50, "HEREKITTY3", "RKTTY3", "rcm_here_kitty_kitty3", 92, 1491.239f, -1118.537f, 55.39496f, 0, 1970061205, 1310720, 250f);
	func_1668(92, 50, "HEREKITTY4", "RKTTY4", "rcm_here_kitty_kitty4", 93, 1408.014f, 280.6987f, 88.45465f, 0, 1970061205, 1310848, 200f);
	func_1668(93, 50, "HEREKITTY5", "RKTTY5", "rcm_here_kitty_kitty5", -1, 1581.761f, -259.8209f, 79.8f, joaat("cs_ringmaster"), 1970061205, 537264132, 250f);
	func_1668(95, 52, "HOMEROB01", "RHMRB", "rcm_homerob01", -1, 668.8008f, -1233.836f, 43.15567f, 0, 444204045, 23068678, 100f);
	func_1668(99, 55, "MARY31", "RMARY3", "rcm_mary31", -1, 1905.66f, -1860.534f, 47.18359f, 0, -2100584570, 6291530, 1112014848);
	func_1668(101, 57, "MASON1", "RMASN1", "rcm_mason1", 102, -1365.9f, -726.54f, 91.08f, joaat("cs_albertmason"), -1822497728, 1310914, 120f);
	func_1668(102, 57, "MASON2", "RMASN2", "rcm_mason2", 103, -1651.18f, 628.19f, 125.4f, joaat("cs_albertmason"), -1259688762, 1310784, 120f);
	func_1668(103, 57, "MASON3", "RMASN3", "rcm_mason3", 104, 1358.591f, 554.5364f, 87.3964f, joaat("cs_albertmason"), -1259688762, 3407936, 200f);
	func_1668(104, 57, "MASON4", "RMASN4", "rcm_mason4", 105, 2387.459f, -580.6672f, 41.0198f, joaat("cs_albertmason"), -1259688762, 1310784, 120f);
	func_1668(105, 57, "MASON5", "RMASN5", "rcm_mason5", -1, -231.24f, 226.84f, 94.4f, joaat("cs_albertmason"), -1259688762, 538312708, 400f);
	func_1668(109, 61, "MAYR1", "RMAYR1", "rcm_mr_mayor1", -1, 2401.393f, -1071.014f, 47.473f, joaat("cs_henrilemiux"), -340501579, 264258, 50f);
	func_1668(110, 61, "MAYR2", "RMAYR2", "rcm_mr_mayor2", 111, 2401.393f, -1071.014f, 47.473f, joaat("cs_henrilemiux"), -340501579, 2112, 50f);
	func_1668(111, 61, "MAYR3", "RMAYR3", "rcm_mr_mayor3", -1, 2401.393f, -1071.014f, 47.473f, 0, -340501579, 537133188, 50f);
	func_1668(117, 63, "OHBROTHER1", "ROBT1", "rcm_oh_brother1", 118, -323.86f, 794.53f, 116.89f, 0, -1822497728, 1310786, 100f);
	func_1668(118, 63, "OHBROTHER2", "ROBT2", "rcm_oh_brother2", 119, -303.77f, 817.93f, 117.41f, 0, -1822497728, 1310784, 100f);
	func_1668(119, 63, "OHBROTHER3", "ROBT3", "rcm_oh_brother3", -1, -1049.4f, 426.08f, 53.89f, 0, -1822497728, 538181700, 120f);
	func_1668(121, 65, "POISONEDWELL1", "RHNTN1", "rcm_poisoned_well1", 122, 2538.461f, 432.7961f, 64.0455f, 918898309, -1822497728, 1835074, 120f);
	func_1668(122, 65, "POISONEDWELL2", "RHNTN2", "rcm_poisoned_well2", 123, 2556.25f, 806.7f, 75.3f, 0, 415367144, 262144, 200f);
	func_1668(123, 65, "POISONEDWELL3", "RHNTN3", "rcm_poisoned_well3", 124, 2397.81f, 609.74f, 66.21f, 0, 415367144, 12416, 120f);
	func_1668(124, 65, "POISONEDWELL4", "RHNTN4", "rcm_poisoned_well4", 125, 2556.25f, 806.7f, 75.3f, joaat("cs_obediahhinton"), 415367144, 131072, 150f);
	func_1668(125, 65, "POISONEDWELL5", "RHNTN5", "rcm_poisoned_well5", -1, 2281.98f, 1198.91f, 108.09f, 0, 415367144, 538181636, 150f);
	func_1668(127, 67, "LIGHTNING1", "RRTL1", "rcm_ride_the_lightning1", 128, 2829.053f, -1055.899f, 43.0369f, joaat("cs_professorbell"), -1822497728, 3801090, 60f);
	func_1668(128, 67, "LIGHTNING2", "RRTL2", "rcm_ride_the_lightning2", -1, 1226.67f, -1295.04f, 75.9f, 0, -1962480616, 2101376, 36f);
	func_1668(129, 67, "LIGHTNING3", "RRTL3", "rcm_ride_the_lightning3", 130, 2536.865f, -275.3683f, 42.8264f, 0, -1962480616, 2361472, 150f);
	func_1668(130, 67, "LIGHTNING4", "RRTL4", "rcm_ride_the_lightning4", 131, 2507.133f, -1307.169f, 47.9537f, 0, -1962480616, 2363520, 36f);
	func_1668(131, 67, "LIGHTNING5", "RRTL5", "rcm_ride_the_lightning5", 132, 2829.053f, -1055.899f, 43.0369f, joaat("cs_professorbell"), -1962480616, 2752512, 60f);
	func_1668(132, 67, "LIGHTNING6", "RRTL6", "rcm_ride_the_lightning6", 133, 1281.752f, 908.6993f, 126.8532f, 0, -1962480616, 2359488, 300f);
	func_1668(133, 67, "LIGHTNING7", "RRTL7", "rcm_ride_the_lightning7", -1, 2689.054f, -1120.174f, 49.6621f, joaat("cs_professorbell"), -1962480616, 540934148, 140f);
	func_1668(135, 69, "SERIALKILLER1", "RSKLR", "rcm_serial_killer1", -1, -609.3224f, 521.8002f, 95.1998f, 0, -1822497728, 546572422, 55f);
	func_1668(136, 70, "SLAVE1", "RSLVC1", "rcm_slave_catcher1", 137, 1244.57f, -1275.52f, 74.96f, joaat("cs_slavecatcher"), -1822497728, 1179714, 200f);
	func_1668(137, 70, "SLAVE2", "RSLVC2", "rcm_slave_catcher2", -1, 1264.612f, -404.1218f, 97.0883f, 0, 194953189, 537133124, 36f);
	func_1668(138, 71, "STRAUSS11", "RSTR1", "rcm_strauss11", -1, 655.3615f, -1234.329f, 43.1254f, 0, 2145479193, 6422598, 100f);
	func_1668(139, 72, "STRAUSS21", "RSTR2", "rcm_strauss21", -1, 1970.765f, -1872.171f, 41.6262f, 0, 2145479193, 6422598, 120f);
	func_1668(140, 73, "STRAUSS31", "RSTR31", "rcm_strauss31", 141, 2327.984f, 1330.677f, 106.157f, 0, 2145479193, 2228290, 100f);
	func_1668(141, 73, "STRAUSS32", "RSTR32", "rcm_strauss32", 142, 2328.061f, 1329.368f, 106.1765f, 0, 2145479193, 2101488, 1112014848);
	func_1668(142, 73, "STRAUSS33", "RSTR33", "rcm_strauss33", -1, 2327.984f, 1330.677f, 106.157f, 0, 2145479193, 6684748, 100f);
	func_1668(143, 74, "THEODDFELLOWS1", "RODDF1", "rcm_the_odd_fellows1", 144, 2945.728f, 526.6201f, 45.84f, joaat("cs_oddfellowspinhead"), -1822497728, 1835010, 60f);
	func_1668(144, 74, "THEODDFELLOWS2", "RODDF2", "rcm_the_odd_fellows2", -1, 2312.786f, 27.78194f, 48.40265f, 0, 825960713, 538181700, 140f);
	func_1668(147, 77, "WARVET1", "RWARV1", "rcm_war_veteran1", 148, 1479.436f, 1335.166f, 161.3365f, joaat("cs_warvet"), -1822497728, 786498, 140f);
	func_1668(148, 77, "WARVET2", "RWARV2", "rcm_war_veteran2", 149, 1698.457f, 1511.371f, 146.8702f, joaat("cs_warvet"), 1770336866, 786496, 200f);
	func_1668(149, 77, "WARVET3", "RWARV3", "rcm_war_veteran3", 150, 1699.141f, 1508.696f, 146.8712f, joaat("cs_warvet"), 1770336866, 786496, 200f);
	func_1668(150, 77, "WARVET4", "RWARV4", "rcm_war_veteran4", -1, 1698.457f, 1511.371f, 146.8702f, joaat("cs_warvet"), 1770336866, 537657412, 200f);
	func_1668(11, 7, "BHDUEL1", "RBDUL", "rcm_bounty_duel1", -1, -2336.112f, 105.0412f, 221.6922f, 0, -907204276, 8653446, 60f);
	func_1668(12, 8, "BHEXCONFED1", "RBCON", "rcm_bounty_exconfed1", -1, 2505.874f, 286.573f, 71.9487f, joaat("u_m_m_uniexconfedsbounty_01"), -907204276, 8653446, 120f);
	func_1668(13, 9, "BHRANCHER1", "RBRAN", "rcm_bounty_rancher1", -1, 1647.412f, -608.9368f, 42.4184f, joaat("u_m_m_htlrancherbounty_01"), -907204276, 8653446, 150f);
	func_1668(153, 79, "BHTARGET3", "RBT03", "rcm_bh_laramie_sleeping", -1, -1947.647f, 427.8162f, 118.9041f, 0, -907204276, 8653702, 250f);
	func_1668(14, 10, "BHTARGET5", "RBT05", "rcm_bh_wife_and_lover", -1, -1215.09f, 369.9232f, 64.0378f, 0, -907204276, 8653446, 250f);
	func_1668(154, 80, "BHTARGET12", "RBT12", "rcm_bh_camp_return", -1, 1425.841f, -2186.84f, 47.99936f, 0, -907204276, 8653446, 250f);
	func_1668(15, 11, "BHTARGET14", "RBT14", "rcm_bh_shack_escape", -1, 1361.01f, -2066.81f, 52.23f, 0, -907204276, 8653446, 70f);
	func_1668(16, 12, "BHTARGET15", "RBT15", "rcm_bh_sd_saloon", -1, 2794.52f, -1170.64f, 46.924f, 0, -907204276, 8653702, 50f);
	func_1668(17, 13, "BHTARGET18", "RBT18", "rcm_bh_skinner_brother", -1, -2000.8f, -1829.5f, 113.3f, 0, -907204276, 8653702, 200f);
	func_1668(18, 14, "BHTARGET20", "RBT20", "rcm_bh_skinner_search", -1, -1982.37f, -1430.89f, 115.58f, 0, -907204276, 8653702, 200f);
	func_1668(155, 15, "BHTARGET21", "RBT21", "rcm_bh_blackwater_hunt", -1, -799.8206f, -1232.503f, 42.552f, 0, -907204276, 8653702, 175f);
	func_1668(19, 16, "BHTARGET22", "RBT22", "rcm_bh_bandito_shack", -1, -5409f, -3655f, -22.2f, 0, -907204276, 8653702, 250f);
	func_1668(20, 17, "BHTARGET23", "RBT23", "rcm_bh_bandito_mine", -1, -5970.842f, -3245.562f, -22.5793f, 0, -907204276, 8653702, 250f);
	func_1668(1, 1, "ABIGAIL22", "RABI22", "rcm_abigail22", -1, -1606.873f, -1376.358f, 81.81185f, 0, -887880659, 67143009, 1112014848);
	func_1668(2, 2, "ABIGAIL31", "RABI3", "rcm_abigail31", -1, -1637.182f, -1363.268f, 83.4566f, 0, 2134645637, 262407, 120f);
	func_1668(8, 5, "BEECHERS11", "RBCH11", "rcm_beechers11", 9, -814.331f, -1278.102f, 42.6377f, 0, -194220735, 67240259, 1112014848);
	func_1668(9, 5, "BEECHERS12", "RBCH12", "rcm_beechers12", -1, -1635.695f, -1355.41f, 82.9339f, 0, -194220735, 262469, 200f);
	func_1668(10, 6, "BEECHERS21", "RBCH21", "rcm_beechers21", -1, -1638.859f, -1359.027f, 82.9803f, 0, -338536163, 262403, 250f);
	func_1668(71, 41, "EVELYN1", "RMLLR1", "rcm_evelyn_miller1", 72, -2068.575f, -1063.067f, 134.9549f, joaat("cs_evelynmiller"), -1822497728, 1573314, 1112014848);
	func_1668(72, 41, "EVELYN2", "RMLLR2", "rcm_evelyn_miller2", 73, -2374.59f, -1594.19f, 153.4694f, joaat("cs_evelynmiller"), -1610853131, 1835328, 100f);
	func_1668(73, 41, "EVELYN3", "RMLLR3", "rcm_evelyn_miller3", 74, -2373.404f, -1592.497f, 153.0315f, 0, -1610853131, 256, 1112014848);
	func_1668(74, 41, "EVELYN4", "RMLLR4", "rcm_evelyn_miller4", 75, -2373.404f, -1592.497f, 153.0315f, 0, 0, 4592, 1112014848);
	func_1668(75, 41, "EVELYN5", "RMLLR5", "rcm_evelyn_miller5", -1, -2373.404f, -1592.497f, 153.0315f, 0, 0, 671355188, 1112014848);
	func_1668(96, 53, "JACK21", "RJCK2", "rcm_jack2", -1, -1629.71f, -1338.377f, 82.0174f, 0, 388668855, 262407, 140f);
	func_1668(100, 56, "MARYBETH1", "RMRYB", "rcm_marybeth1", -1, -171.3529f, 631.9009f, 113.0321f, 0, 0, 67240214, 1112014848);
	func_1668(126, 66, "RAINSFALL1", "RRFA1", "rcm_rains_fall1", -1, 2937.5f, 1276.5f, 45.1f, 0, 0, 67240214, 1112014848);
	func_1668(145, 75, "TILLY1", "RTLLY", "rcm_tilly1", -1, 2595.41f, -1198.08f, 52.23f, 0, 0, 67240214, 1112014848);
	func_1668(151, 78, "HERBALISTCAMP1", "REHEC1", "rcm_herbalist_camp", 152, 556.271f, 172.08f, 133.3435f, 0, -1822497728, 1048642, 250f);
	func_1668(152, 78, "HERBALISTCAMP2", "REHEC2", "rcm_herbalist_camp", -1, 557.4186f, 170.2608f, 134.348f, 0, -1176045274, 536875076, 250f);
	func_1668(146, 76, "TREASUREHUNTER1", "RETH", "rcm_treasure_hunter", -1, -586.4957f, -344.5864f, 81.4029f, joaat("cs_treasurehunter"), -1822497728, 68190278, 200f);
	func_1669(1, 12);
	func_1669(23, 1);
	func_1669(33, 24);
	func_1669(36, 24);
	func_1669(54, 24);
	func_1669(55, 48);
	func_1669(70, 4);
	func_1669(72, 24);
	func_1669(73, 24);
	func_1669(78, 24);
	func_1669(79, 24);
	func_1669(80, 48);
	func_1669(102, 48);
	func_1669(103, 48);
	func_1669(104, 48);
	func_1669(105, 48);
	func_1669(113, 1);
	func_1669(118, 24);
	func_1669(119, 24);
	func_1669(122, 24);
	func_1669(133, 24);
	func_1669(148, 24);
	func_1669(149, 24);
	func_1669(150, 24);
	func_1670(0, 100010212, 1);
	func_1670(2, 100010212, 1);
	func_1670(23, 100010212, 1);
	func_1670(24, 100010212, 1);
	func_1670(53, 100010212, 1);
	func_1670(54, 880414984, 1);
	func_1670(59, 100010212, 1);
	func_1670(71, 100010212, 1);
	func_1670(72, 100010212, 1);
	func_1670(69, 100010212, 1);
	func_1670(81, 100010212, 1);
	func_1670(89, 100010212, 1);
	func_1670(91, 100010212, 1);
	func_1670(92, 100010212, 1);
	func_1670(93, 100010212, 1);
	func_1670(101, 100010212, 1);
	func_1670(102, 100010212, 1);
	func_1670(103, 100010212, 1);
	func_1670(104, 100010212, 1);
	func_1670(105, 100010212, 1);
	func_1670(117, 100010212, 0);
	func_1670(118, 100010212, 0);
	func_1670(119, 100010212, 1);
	func_1670(115, 100010212, 1);
	func_1670(133, 100010212, 1);
	func_1670(134, 100010212, 1);
	func_1670(144, 100010212, 1);
	func_1670(145, 100010212, 0);
	func_1670(146, 100010212, 1);
	func_1670(147, 100010212, 1);
	if (&Global_1879534 == 0)
	{
		func_1671(2, (((*Global_1347702)[2 /*49*/])->f_16 + 50f));
		func_1671(12, (((*Global_1347702)[12 /*49*/])->f_16 + 40f));
		func_1671(13, (((*Global_1347702)[13 /*49*/])->f_16 + 40f));
		func_1671(23, (((*Global_1347702)[23 /*49*/])->f_16 + 30f));
		func_1671(32, (((*Global_1347702)[32 /*49*/])->f_16 + 30f));
		func_1671(56, (((*Global_1347702)[56 /*49*/])->f_16 + 50f));
		func_1671(54, (((*Global_1347702)[54 /*49*/])->f_16 + 50f));
		func_1671(58, (((*Global_1347702)[58 /*49*/])->f_16 + 50f));
		func_1671(63, (((*Global_1347702)[63 /*49*/])->f_16 + 40f));
		func_1671(81, (((*Global_1347702)[81 /*49*/])->f_16 + 30f));
		func_1671(151, 410f);
		func_1671(152, 410f);
		func_1671(90, (((*Global_1347702)[90 /*49*/])->f_16 + 25f));
		func_1671(91, (((*Global_1347702)[91 /*49*/])->f_16 + 25f));
		func_1671(96, (((*Global_1347702)[96 /*49*/])->f_16 + 50f));
		func_1671(120, (((*Global_1347702)[120 /*49*/])->f_16 + 100f));
		func_1671(123, (((*Global_1347702)[123 /*49*/])->f_16 + 50f));
		func_1671(129, (((*Global_1347702)[129 /*49*/])->f_16 + 60f));
		func_1671(132, (((*Global_1347702)[132 /*49*/])->f_16 + 60f));
		func_1671(144, (((*Global_1347702)[144 /*49*/])->f_16 + 50f));
		func_1672(3, 35f);
		func_1672(4, 20f);
		func_1672(11, 30f);
		func_1672(13, 80f);
		func_1672(12, 110f);
		func_1672(153, 100f);
		func_1672(14, 80f);
		func_1672(154, 100f);
		func_1672(15, 60f);
		func_1672(17, 100f);
		func_1672(18, 85f);
		func_1672(155, 65f);
		func_1672(19, 65f);
		func_1672(20, 60f);
		func_1672(26, 45f);
		func_1672(30, 40f);
		func_1672(32, 30f);
		func_1672(33, 55f);
		func_1672(36, 40f);
		func_1672(38, 35f);
		func_1672(39, 80f);
		func_1672(43, 45f);
		func_1672(41, 40f);
		func_1672(49, 40f);
		func_1672(51, 65f);
		func_1672(53, 32f);
		func_1672(56, 35f);
		func_1672(57, 17f);
		func_1672(62, 50f);
		func_1672(65, 42f);
		func_1672(69, 25f);
		func_1672(70, 30f);
		func_1672(71, 25f);
		func_1672(72, 25f);
		func_1672(77, 12f);
		func_1672(78, 17f);
		func_1672(80, 20f);
		func_1672(84, 35f);
		func_1672(86, 50f);
		func_1672(88, 45f);
		func_1672(89, 75f);
		func_1672(90, 130f);
		func_1672(91, 60f);
		func_1672(92, 85f);
		func_1672(94, 47f);
		func_1672(101, 40f);
		func_1672(102, 40f);
		func_1672(103, 40f);
		func_1672(104, 40f);
		func_1672(105, 40f);
		func_1672(106, 25f);
		func_1672(107, 25f);
		func_1672(116, 30f);
		func_1672(117, 20f);
		func_1672(118, 20f);
		func_1672(119, 20f);
		func_1672(121, 55f);
		func_1672(123, 100f);
		func_1672(125, 35f);
		func_1672(127, 28f);
		func_1672(129, func_1673(13));
		func_1672(132, 100f);
		func_1672(133, 20f);
		func_1672(135, 75f);
		func_1672(136, 22f);
		func_1672(143, 20f);
		func_1672(144, 50f);
		func_1672(151, 100f);
		func_1672(146, 135f);
		func_1675(0, (func_1674(13) || func_1674(14)));
		func_1675(2, (func_1674(13) || func_1674(4)));
		func_1675(10, (func_1674(4) || func_1674(7)));
		func_1675(21, func_1674(13));
		func_1675(37, func_1674(23));
		func_1675(59, func_1674(18));
		func_1675(63, func_1674(10));
		func_1675(64, func_1674(11));
		func_1675(65, func_1674(11));
		func_1675(66, (func_1674(0) || func_1674(5)));
		func_1675(67, (((func_1674(0) || func_1674(5)) || func_1674(9)) || func_1674(2)));
		func_1675(68, (func_1674(0) || func_1674(7)));
		func_1675(76, func_1674(9));
		func_1675(94, func_1674(5));
		func_1675(95, func_1674(8));
		func_1675(96, (func_1674(14) || func_1674(12)));
		func_1675(112, (func_1674(1) || func_1674(8)));
		func_1675(114, (func_1674(1) || func_1674(8)));
		func_1675(116, func_1674(26));
		func_1675(120, func_1674(17));
		func_1675(134, (func_1674(11) || func_1674(17)));
		func_1675(138, func_1674(18));
		func_1675(139, func_1674(18));
		func_1675(140, func_1674(18));
		func_1675(142, func_1674(22));
		func_1676(53, 1026);
		func_1676(54, 128);
		func_1676(56, 128);
		func_1676(57, 1030);
		func_1676(39, 1030);
		func_1676(79, 1026);
		func_1676(81, 8192);
		func_1676(101, 1026);
		func_1676(102, 1026);
		func_1676(103, 1026);
		func_1676(104, 1026);
		func_1676(105, 1026);
		func_1676(109, 128);
		func_1676(110, 128);
		func_1676(111, 128);
		func_1676(122, 8);
		func_1676(148, 1026);
		func_1676(149, 1026);
		func_1676(150, 1026);
		func_1676(155, 640);
		func_1676(128, 7);
		func_1676(52, 7);
		func_1676(71, 1026);
		func_1677(6, 1f);
		func_1677(22, 30f);
		func_1677(26, 15f);
		func_1677(27, 15f);
		func_1677(30, 50f);
		func_1677(32, 100f);
		func_1677(33, 150f);
		func_1677(34, 100f);
		func_1677(36, 100f);
		func_1677(41, 10f);
		func_1677(53, 50f);
		func_1677(54, 150f);
		func_1677(58, 0f);
		func_1677(59, 3f);
		func_1677(61, 2f);
		func_1677(76, 3f);
		func_1677(81, 50f);
		func_1677(84, 60f);
		func_1677(85, 60f);
		func_1677(89, 150f);
		func_1677(90, 180f);
		func_1677(91, 75f);
		func_1677(93, 150f);
		func_1677(95, 4.5f);
		func_1677(97, 2f);
		func_1677(101, 50f);
		func_1677(103, 150f);
		func_1677(112, 5f);
		func_1677(113, 0f);
		func_1677(114, 5f);
		func_1677(115, 70f);
		func_1677(116, 150f);
		func_1677(134, 2f);
		func_1677(0, 3f);
		func_1677(120, 3f);
		func_1677(138, 3f);
		func_1677(139, 3f);
		func_1677(140, 3f);
		func_1677(142, 3f);
		func_1677(147, 150f);
		func_1677(117, 10f);
		func_1677(118, 10f);
		func_1677(151, 160f);
		func_1677(152, 160f);
		func_1677(146, 155f);
		func_1677(121, 200f);
		func_1677(15, 70f);
		func_1677(155, 5f);
		func_1677(20, 170f);
		func_1677(13, 140f);
		func_1677(17, 160f);
		func_1677(12, 100f);
		func_1677(126, 2f);
		func_1677(145, 2f);
		func_1677(14, 100f);
		func_1678(22, 100f);
		func_1678(23, 100f);
		func_1678(62, 150f);
		func_1678(68, 150f);
		func_1678(65, 250f);
		func_1678(106, 100f);
		func_1678(107, 100f);
		func_1678(115, 100f);
		func_1678(116, 225f);
		func_1678(151, 250f);
		func_1678(155, 110f);
	}
	VOLUME::_0x748C5F51A18CB8F0(1);
	return 1;
}

void func_1290(int iParam0, int iParam1)
{
	if (!func_1321(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0 /*5*/] = (&Global_40.f_11029[iParam0 /*5*/] - (Global_40.f_11029[iParam0 /*5*/] && iParam1));
}

void func_1291(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (bParam0)
	{
		VEHICLE::_0x2A7413168F6CD5A8();
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			func_1322(iVar0, 4096);
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
	if (func_28() == -1)
	{
		Global_1430221->f_1 = !bParam0;
	}
}

void func_1292(bool bParam0)
{
	if (bParam0)
	{
		HUD::_0x4CC5F2FC1332577F(-1618603322);
		func_1679(8388608);
	}
	else
	{
		HUD::_0x8BC7C1F929D07BF3(-1618603322);
		func_1680(8388608);
	}
}

void func_1293()
{
	Global_1357549 = 0;
	func_1679(1);
}

void func_1294()
{
	int iVar0;
	int iVar1;

	Global_1357549->f_1886 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Tithing");
	Global_1357549->f_1886.f_1 = DATABINDING::_DATABINDING_ADD_DATA_STRING(Global_1357549->f_1886, "Supplies", "");
	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(Global_1357549->f_1886, "CampFunds");
	func_1681(iVar0, &(Global_1357549->f_1886.f_2));
	iVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(Global_1357549->f_1886, "PlayerCash");
	func_1681(iVar1, &(Global_1357549->f_1886.f_4));
}

Vector3 func_1295(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2638.87f, -1289.67f, 51.32f;
		case 1:
			return 1289.142f, -1305.846f, 77.34f;
		case 2:
			return -307.3165f, 776.0316f, 118.7f;
		case 3:
			return -813.4f, -1275.6f, 44.8f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_1296(int iParam0, int iParam1, vector3 vParam2, bool bParam5)
{
	if (!func_1682(iParam0))
	{
		return;
	}
	if (func_588(vParam2))
	{
		return;
	}
	if (!func_126(iParam1))
	{
		return;
	}
	((*Global_1934182)[iParam0 /*18*/])->f_1 = { vParam2 };
	((*Global_1934182)[iParam0 /*18*/])->f_5 = func_111(1, iParam0, 2, func_1683(iParam0));
	(*Global_1934182)[iParam0 /*18*/] = iParam1;
	if (bParam5)
	{
		((*Global_1934182)[iParam0 /*18*/])->f_7 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(func_1684(iParam0), func_1685(iParam0), func_1686(iParam0), func_1687(iParam0));
		VOLUME::_0x128FC3A893BF853A(((*Global_1934182)[iParam0 /*18*/])->f_7);
	}
	switch (iParam0)
	{
		case 2:
			func_334(170);
			break;
	}
}

int func_1297()
{
	if (func_28() != -1)
	{
		return 1;
	}
	func_1688(2, "loanshark_catfish", 96, 1308.708f, -2342.772f, 41.4922f, 1324.754f, -2307.706f, 47.07406f, 65f, 0, -1, -1, 1123680256, 65, 1123680256);
	func_1688(7, "loanshark_horseChase1", 66, 1120.147f, 503.3499f, 94.8851f, 1120.147f, 503.3499f, 94.8851f, 40f, 0, -1, -1, 200f, 65, 1123680256);
	func_1688(1, "loanshark_hunter", -1, -1781.541f, -180.863f, 194.142f, -1733.015f, -200.884f, 182.1981f, 75f, 0, -1, -1, 200f, 65, 140f);
	func_1688(5, "loanshark_miner1", 78, 2757.363f, 1370.689f, 68.29453f, 2792.968f, 1347.938f, 72.24879f, 50f, 0, -1, 6, 1123680256, 1, 1123680256);
	func_1688(6, "loanshark_miner2", 82, 2685.276f, 900.0816f, 90.9889f, 2689.845f, 900.8306f, 96.28243f, 35f, 0, -1, -1, 1123680256, 81, 1123680256);
	func_1688(8, "loanshark_sellHorse1", -1, -610.8f, -25.3f, 85.5f, -619.389f, -28.8628f, 84.4293f, 50f, 0, -1, -1, 1123680256, 65, 1123680256);
	func_1688(4, "loanshark_soldier", -1, 1411.856f, 1166.743f, 184.1507f, 1418.006f, 1129.67f, 183.486f, 120f, 0, -1, 5, 150f, 81, 140f);
	return 1;
}