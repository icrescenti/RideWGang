#region Local Var
	var uLocal_0 = -384354290;
	var uLocal_1 = -384354290;
	var uLocal_2 = -1230516683;
	var uLocal_3 = 0;
	var uLocal_4 = 3;
	var uLocal_5 = -384354290;
	var uLocal_6 = -384354290;
	var uLocal_7 = -1230516683;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 5;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 5;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 4;
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
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = -1082130432;
	var uLocal_40 = 5000;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = -384354290;
	var uLocal_48 = -384354290;
	var uLocal_49 = -1230516683;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 5;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 5;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 4;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = -1082130432;
	var uLocal_82 = 5000;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = -384354290;
	var uLocal_90 = -384354290;
	var uLocal_91 = -1230516683;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 5;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 5;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 4;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = -1082130432;
	var uLocal_124 = 5000;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 1;
	var uLocal_133 = -1;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	int iLocal_136 = 0;
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;

	uScriptParam_0 = uScriptParam_0;
	func_1(&uLocal_0);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_2(&uLocal_0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		if (!func_3(0, 0, 1) || Global_1415405->f_5)
		{
			bVar0 = true;
		}
		if (func_4(&uLocal_0))
		{
			func_5(&uLocal_0);
		}
		else if (bVar0)
		{
			if (!iLocal_136)
			{
				if (func_6(&uLocal_0))
				{
					iLocal_136 = 1;
				}
			}
			if (Global_1415405->f_4)
			{
				if (!LAW::_0xF46108C50A22B029())
				{
					LAW::_0x7803436E68C32B26();
				}
			}
			else if (LAW::_0xF46108C50A22B029())
			{
				LAW::_0x29CD4896ECB66C12();
			}
			func_5(&uLocal_0);
		}
		else if (iLocal_136)
		{
			if (func_7(&uLocal_0))
			{
				if (LAW::_0xF46108C50A22B029())
				{
					LAW::_0x29CD4896ECB66C12();
				}
				iLocal_136 = 0;
			}
		}
		BUILTIN::WAIT(0);
	}
}

void func_1(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		(uParam0->f_4[iVar0 /*42*/])->f_29 = iVar0;
		iVar0++;
	}
}

void func_2(var uParam0)
{
	int iVar0;

	if (LAW::_0xF46108C50A22B029())
	{
		LAW::_0x29CD4896ECB66C12();
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_8(uParam0->f_4[iVar0 /*42*/], uParam0);
		func_9(uParam0->f_4[iVar0 /*42*/], 0);
		iVar0++;
	}
	func_10(uParam0);
}

int func_3(int iParam0, bool bParam1, int iParam2)
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
		if (func_11())
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
		iVar0 = func_12(&(Global_1898164->f_1[0 /*5*/]));
		if (func_13(iVar0) && func_14(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_15(&(Global_1898164->f_1[0 /*5*/])))
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

int func_4(var uParam0)
{
	if (uParam0->f_3 == 4)
	{
		return 1;
	}
	return 0;
}

void func_5(var uParam0)
{
	switch (uParam0->f_3)
	{
		case 1:
			if (func_16(uParam0))
			{
				func_17(uParam0, 2);
			}
			break;
		case 2:
			func_18(uParam0, 1);
			func_17(uParam0, 3);
			break;
		case 3:
			if (!func_19(uParam0, 0))
			{
				func_17(uParam0, 0);
			}
			break;
		case 4:
			if (!func_19(uParam0, 1))
			{
				func_10(uParam0);
				func_17(uParam0, 0);
			}
			break;
		default:
			break;
	}
}

int func_6(var uParam0)
{
	if (uParam0->f_3 == 0)
	{
		func_17(uParam0, 1);
		return 1;
	}
	return 0;
}

int func_7(var uParam0)
{
	if (uParam0->f_3 == 3)
	{
		func_17(uParam0, 4);
		func_20(uParam0);
		return 1;
	}
	return 0;
}

void func_8(var uParam0, var uParam1)
{
	if (PED::DOES_GROUP_EXIST(uParam0->f_18))
	{
		PED::REMOVE_GROUP(uParam0->f_18);
	}
	if (func_21(uParam0->f_3))
	{
		func_22(uParam0->f_3);
		func_23(uParam0->f_3);
	}
	func_24(uParam0);
	MISC::CLEAR_BIT(&(uParam1->f_134), uParam0->f_41);
	if (MAP::DOES_BLIP_EXIST(uParam0->f_21))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_21));
	}
	if (func_25(&(uParam0->f_36)))
	{
		func_26(&(uParam0->f_36));
	}
	if (func_25(&(uParam0->f_30)))
	{
		func_26(&(uParam0->f_30));
	}
	if (func_27(uParam0->f_30.f_3))
	{
		func_28(&(uParam0->f_30.f_3), 1, 1);
	}
}

void func_9(var uParam0, int iParam1)
{
	uParam0->f_20 = iParam1;
}

void func_10(var uParam0)
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(*uParam0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_2);
}

int func_11()
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

int func_12(int iParam0)
{
	if (!func_15(iParam0))
	{
		return -1;
	}
	return func_30(func_29(iParam0));
}

bool func_13(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_14(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_15(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_16(var uParam0)
{
	STREAMING::REQUEST_MODEL(*uParam0, false);
	STREAMING::REQUEST_MODEL(uParam0->f_1, false);
	STREAMING::REQUEST_MODEL(uParam0->f_2, false);
	if ((!STREAMING::HAS_MODEL_LOADED(*uParam0) || !STREAMING::HAS_MODEL_LOADED(uParam0->f_1)) || !STREAMING::HAS_MODEL_LOADED(uParam0->f_2))
	{
		return 0;
	}
	return 1;
}

void func_17(var uParam0, int iParam1)
{
	if (iParam1 == 4)
	{
		func_18(uParam0, 12);
	}
	uParam0->f_3 = iParam1;
}

void func_18(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_9(uParam0->f_4[iVar0 /*42*/], iParam1);
		iVar0++;
	}
}

int func_19(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_31(uParam0->f_4[iVar0 /*42*/], uParam0);
		iVar0++;
	}
	if (!bParam1)
	{
		if (func_32(uParam0, 0))
		{
			return 0;
		}
	}
	else if (func_33(uParam0))
	{
		return 0;
	}
	return 1;
}

void func_20(var uParam0)
{
	func_34();
}

bool func_21(int iParam0, var uParam1)
{
	return ITEMSET::IS_ITEMSET_VALID(iParam0);
}

void func_22(struct<2> Param0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_21(Param0))
	{
		return;
	}
	iVar1 = func_35(Param0);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		func_36(Param0);
		iVar2 = func_37(Param0, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			func_38(&iVar2, 0);
		}
		iVar0++;
	}
}

void func_23(int iParam0, var uParam1)
{
	if (ITEMSET::IS_ITEMSET_VALID(iParam0))
	{
		ITEMSET::DESTROY_ITEMSET(iParam0);
	}
}

void func_24(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_5[iVar0])))
		{
			func_38(uParam0->f_5[iVar0], 0);
		}
		iVar0++;
	}
}

bool func_25(var uParam0)
{
	return func_39(*uParam0, 1);
}

void func_26(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_27(int iParam0)
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

void func_28(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 && !func_27(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_40(*uParam0);
	if (((*Global_1945938)[iVar0 /*18*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && iParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_41(iVar0);
	*uParam0 = 0;
}

int func_29(int iParam0)
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

int func_30(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

void func_31(var uParam0, var uParam1)
{
	bool bVar0;

	switch (uParam0->f_20)
	{
		case 1:
			if (func_42(uParam0, uParam1, 0))
			{
				func_9(uParam0, 4);
			}
			break;
		case 4:
			if (func_43(uParam0))
			{
				func_9(uParam0, 5);
			}
			break;
		case 5:
			if (func_44(uParam0))
			{
				func_9(uParam0, 10);
			}
			else if (func_45(uParam0))
			{
				func_46(uParam0);
				uParam0->f_23 = MISC::GET_GAME_TIMER();
				func_9(uParam0, 6);
			}
			else if (!func_47(uParam0))
			{
				func_9(uParam0, 4);
			}
			break;
		case 6:
			if (!func_48(uParam0) || MISC::GET_GAME_TIMER() > uParam0->f_23 + 10000)
			{
				func_49(uParam0);
				func_9(uParam0, 4);
			}
			break;
		case 7:
			if (!func_50(uParam0) || MISC::GET_GAME_TIMER() > uParam0->f_24 + 30000)
			{
				func_51(uParam0);
				func_9(uParam0, 4);
			}
			break;
		case 8:
			uParam0->f_27 = MISC::GET_GAME_TIMER();
			if (!func_52(uParam0->f_3))
			{
				func_9(uParam0, 4);
			}
			break;
		case 9:
			break;
		case 10:
			if (func_42(uParam0, uParam1, 1))
			{
				func_9(uParam0, 4);
			}
			break;
		case 11:
			func_8(uParam0, uParam1);
			func_9(uParam0, 1);
			break;
		case 12:
			func_8(uParam0, uParam1);
			func_9(uParam0, 0);
			break;
		default:
			break;
	}
	if (uParam0->f_20 != 0)
	{
		if ((uParam0->f_20 != 11 && uParam0->f_20 != 1) && uParam0->f_20 != 12)
		{
			func_53(uParam0->f_3);
			func_54(uParam0);
			if (!func_55(uParam0))
			{
				uParam0->f_25 = MISC::GET_GAME_TIMER();
				MISC::CLEAR_BIT(&(uParam1->f_134), uParam0->f_41);
				func_9(uParam0, 11);
			}
			else if (func_56(uParam0))
			{
				func_9(uParam0, 11);
			}
			else if (uParam0->f_20 != 8)
			{
				if (func_52(uParam0->f_3))
				{
					func_9(uParam0, 8);
				}
				else if ((uParam1->f_132 && !uParam0->f_39) && !func_57(Global_35, 0))
				{
					bVar0 = true;
				}
			}
		}
	}
	if (!bVar0)
	{
		func_58(uParam0);
		if (uParam1->f_132 && uParam0->f_39)
		{
			func_59(uParam0);
		}
	}
	else
	{
		func_60(uParam0);
	}
}

int func_32(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!func_55(uParam0->f_4[iVar0 /*42*/]) || (uParam0->f_4[iVar0 /*42*/])->f_20 != iParam1)
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_33(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if ((uParam0->f_4[iVar0 /*42*/])->f_20 != 0)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_34()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

int func_35(struct<2> Param0)
{
	if (!func_21(Param0))
	{
		return 0;
	}
	return ITEMSET::GET_ITEMSET_SIZE(Param0);
}

void func_36(struct<2> Param0)
{
	if (!func_21(Param0))
	{
		return;
	}
	ITEMSET::CLEAN_ITEMSET(Param0);
}

int func_37(struct<2> Param0, int iParam2)
{
	var uVar0;
	var uVar1;

	if (!func_21(Param0))
	{
		return 0;
	}
	uVar0 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iParam2, Param0);
	uVar1 = uVar0;
	return uVar1;
}

void func_38(int* iParam0, bool bParam1)
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

bool func_39(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_40(int iParam0)
{
	return iParam0;
}

void func_41(int iParam0)
{
	if (!func_61(iParam0))
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

int func_42(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	vector3 vVar6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	bool bVar14;
	bool bVar15;
	int iVar16;

	iVar0 = MISC::GET_GAME_TIMER();
	if ((uParam0->f_25 > 0 && iVar0 < (uParam0->f_25 + 120000)) || iVar0 < uParam0->f_26 + 5000)
	{
		return 0;
	}
	if (func_62(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
	}
	uParam0->f_26 = iVar0;
	if (!func_21(uParam0->f_3))
	{
		uParam0->f_3 = { func_63() };
	}
	if (!PED::DOES_GROUP_EXIST(uParam0->f_18))
	{
		uParam0->f_18 = PED::CREATE_GROUP(0);
		PED::SET_GROUP_FORMATION(uParam0->f_18, uParam0->f_19);
	}
	iVar13 = uParam0->f_2;
	if (bParam2)
	{
		if (PED::DOES_GROUP_EXIST(uParam0->f_18))
		{
			iVar11 = PED::GET_PED_AS_GROUP_LEADER(uParam0->f_18);
			if (!ENTITY::IS_ENTITY_DEAD(iVar11))
			{
				vVar2 = { ENTITY::GET_ENTITY_COORDS(iVar11, false, false) };
				fVar5 = ENTITY::GET_ENTITY_HEADING(iVar11);
				bVar15 = true;
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
	}
	else if (!func_64(&iVar1, &vVar2, &fVar5, uParam1))
	{
		return 0;
	}
	else
	{
		uParam0->f_39 = 0;
	}
	if (BUILTIN::VDIST(vVar2, ENTITY::GET_ENTITY_COORDS(Global_35, false, false)) < 30f)
	{
		return 0;
	}
	if (!MAP::DOES_BLIP_EXIST(uParam0->f_21))
	{
		uParam0->f_21 = MAP::_0x554D9D53F696D002(408396114, vVar2);
	}
	iVar16 = 0;
	while (iVar16 < 5)
	{
		bVar14 = false;
		if (bParam2)
		{
			iVar10 = func_37(uParam0->f_3, iVar16);
			if (!ENTITY::IS_ENTITY_DEAD(iVar10))
			{
				bVar14 = true;
			}
		}
		if (!bVar14)
		{
			if (iVar16 == 0 && !bVar15)
			{
				iVar12 = *uParam0;
			}
			else
			{
				iVar12 = uParam0->f_1;
			}
			vVar6 = { vVar2 + Vector(0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-3f, 3f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-3f, 3f)) };
			fVar5 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 359f);
			iVar9 = func_65(iVar12, vVar6, fVar5, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) <= 50)
			{
				if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_5[iVar16])))
				{
					func_66(uParam0->f_5[iVar16], 1, 0, 1);
				}
				uParam0->f_5[iVar16] = func_65(iVar13, vVar6, fVar5, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				PED::_SET_PED_ON_MOUNT(iVar9, &(uParam0->f_5[iVar16]), -1, true);
			}
			func_67(uParam0->f_3, iVar9);
			PED::SET_PED_CONFIG_FLAG(iVar9, 279, true);
			if (iVar16 == 0 && !bVar15)
			{
				PED::SET_PED_AS_GROUP_LEADER(func_37(uParam0->f_3, iVar16), uParam0->f_18, 0);
			}
			else
			{
				PED::SET_PED_AS_GROUP_MEMBER(func_37(uParam0->f_3, iVar16), uParam0->f_18);
			}
			PED::_0xA8A95CECB1906EA2(uParam0->f_18, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar9, 58, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar9, 5, true);
			PED::SET_PED_CONFIG_FLAG(iVar9, 49, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar9, 39, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar9, 14, true);
			PED::SET_PED_SEEING_RANGE(iVar9, 17f);
			PED::SET_PED_ID_RANGE(iVar9, 17f);
		}
		iVar16++;
	}
	if (!bParam2)
	{
		uParam0->f_41 = iVar1;
		MISC::SET_BIT(&(uParam1->f_134), iVar1);
	}
	if (uParam1->f_132)
	{
		if (func_25(&(uParam0->f_36)))
		{
			func_26(&(uParam0->f_36));
		}
		func_68(uParam0);
	}
	return 1;
}

int func_43(var uParam0)
{
	int iVar0;

	iVar0 = PED::GET_PED_AS_GROUP_LEADER(uParam0->f_18);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		TASK::_TASK_MOVE_IN_TRAFFIC(iVar0, 1f, 4, 0);
	}
	return 1;
}

int func_44(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = MISC::GET_GAME_TIMER();
	if (iVar0 < (uParam0->f_27 + 90000) || iVar0 < uParam0->f_28 + 5000)
	{
		return 0;
	}
	uParam0->f_28 = iVar0;
	if (func_35(uParam0->f_3) < 5)
	{
		iVar1 = PED::GET_PED_AS_GROUP_LEADER(uParam0->f_18);
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && !Global_1935630->f_12)
		{
			if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, false, false), ENTITY::GET_ENTITY_COORDS(Global_35, false, false)) >= 60f)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_45(var uParam0)
{
	int iVar0;
	int iVar1;

	if (func_3(0, 0, 1) || !Global_1415405->f_4)
	{
		return 0;
	}
	iVar0 = PED::GET_PED_AS_GROUP_LEADER(uParam0->f_18);
	iVar1 = MISC::GET_GAME_TIMER();
	if (iVar1 < uParam0->f_22 + 10000)
	{
		return 0;
	}
	uParam0->f_22 = iVar1;
	if (!ENTITY::IS_ENTITY_DEAD(iVar0) && !Global_1935630->f_12)
	{
		if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), ENTITY::GET_ENTITY_COORDS(Global_35, false, false)) <= 30f && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iVar0, Global_35, 3423))
		{
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) <= 40)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_46(var uParam0)
{
	int iVar0;

	iVar0 = PED::GET_PED_AS_GROUP_LEADER(uParam0->f_18);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0) && !Global_1935630->f_12)
	{
		TASK::TASK_GOTO_ENTITY_OFFSET(iVar0, Global_35, -1, 15f, 0f, 1f, 2);
		return 1;
	}
	return 0;
}

int func_47(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PED::GET_PED_AS_GROUP_LEADER(uParam0->f_18);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		iVar1 = TASK::GET_SCRIPT_TASK_STATUS(iVar0, -1665583462, 1);
		if (iVar1 == 0 || iVar1 == 1)
		{
			return 1;
		}
	}
	return 0;
}

int func_48(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PED::GET_PED_AS_GROUP_LEADER(uParam0->f_18);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		iVar1 = TASK::GET_SCRIPT_TASK_STATUS(iVar0, -2015108952, 1);
		if (iVar1 == 0 || iVar1 == 1)
		{
			return 1;
		}
	}
	return 0;
}

void func_49(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PED::GET_PED_AS_GROUP_LEADER(uParam0->f_18);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		iVar1 = TASK::GET_SCRIPT_TASK_STATUS(iVar0, -2015108952, 1);
		if (iVar1 != 7 && iVar1 != 8)
		{
			TASK::CLEAR_PED_TASKS(iVar0, 1, 0);
		}
	}
}

int func_50(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_35(uParam0->f_3);
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		iVar1 = func_37(uParam0->f_3, iVar2);
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			iVar3 = TASK::GET_SCRIPT_TASK_STATUS(iVar1, 923520851, 1);
			if (iVar3 == 0 || iVar3 == 1)
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

void func_51(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_35(uParam0->f_3);
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		iVar1 = func_37(uParam0->f_3, iVar2);
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			iVar3 = TASK::GET_SCRIPT_TASK_STATUS(iVar1, 923520851, 1);
			if (iVar3 != 7 && iVar3 != 8)
			{
				TASK::CLEAR_PED_TASKS(iVar1, 1, 0);
			}
		}
		iVar2++;
	}
}

int func_52(struct<2> Param0)
{
	int iVar0;
	int iVar1;

	if (!func_21(Param0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < func_35(Param0))
	{
		iVar1 = func_37(Param0, iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar1))
				{
					if (PED::IS_PED_IN_COMBAT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1), 0))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_53(struct<2> Param0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_21(Param0))
	{
		return;
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(false);
	iVar1 = 0;
	while (iVar1 < func_35(Param0))
	{
		iVar2 = func_37(Param0, iVar1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			if (ENTITY::IS_ENTITY_A_PED(iVar2))
			{
				if (ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					ITEMSET::ADD_TO_ITEMSET(iVar2, iVar0);
					ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar2);
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < ITEMSET::GET_ITEMSET_SIZE(iVar0))
	{
		iVar3 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, iVar0);
		ITEMSET::REMOVE_FROM_ITEMSET(iVar3, Param0);
		iVar1++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
}

void func_54(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (PED::DOES_GROUP_EXIST(uParam0->f_18) && PED::_0x0455546F23FF08E4(uParam0->f_18))
	{
		iVar0 = PED::GET_PED_AS_GROUP_LEADER(uParam0->f_18);
		if (ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::GET_GROUP_SIZE(uParam0->f_18, &iVar1, &iVar2);
			if (iVar2 > 0)
			{
				iVar3 = PED::GET_PED_AS_GROUP_MEMBER(uParam0->f_18, MISC::GET_RANDOM_INT_IN_RANGE(0, (iVar1 + iVar2)));
				if (!ENTITY::IS_ENTITY_DEAD(iVar3))
				{
					PED::SET_PED_AS_GROUP_LEADER(iVar3, uParam0->f_18, 0);
				}
			}
		}
	}
}

int func_55(var uParam0)
{
	int iVar0;
	int iVar1;

	PED::GET_GROUP_SIZE(uParam0->f_18, &iVar1, &iVar0);
	if ((((!func_21(uParam0->f_3) || func_35(uParam0->f_3) == 0) || !PED::DOES_GROUP_EXIST(uParam0->f_18)) || !PED::_0x0455546F23FF08E4(uParam0->f_18)) || (iVar0 == 0 && iVar1 == 0))
	{
		return 0;
	}
	return 1;
}

int func_56(var uParam0)
{
	if (!func_52(uParam0->f_3) && func_69(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_57(int iParam0, int iParam1)
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

void func_58(var uParam0)
{
	if (func_27(uParam0->f_30.f_3))
	{
		func_28(&(uParam0->f_30.f_3), 1, 1);
		func_34();
	}
}

void func_59(var uParam0)
{
	int iVar0;

	iVar0 = PED::GET_PED_AS_GROUP_LEADER(uParam0->f_18);
	if ((!ENTITY::IS_ENTITY_DEAD(iVar0) && !Global_1935630->f_12) && BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), ENTITY::GET_ENTITY_COORDS(Global_35, false, false)) < 100f)
	{
		if (func_25(&(uParam0->f_36)))
		{
			func_70(&(uParam0->f_36));
		}
	}
	else if (!func_25(&(uParam0->f_36)))
	{
		func_71(&(uParam0->f_36), 0);
	}
	else if (func_72(&(uParam0->f_36)))
	{
		func_73(&(uParam0->f_36));
	}
	if (func_74(&(uParam0->f_36)) >= 30000)
	{
		func_26(&(uParam0->f_36));
		uParam0->f_39 = 0;
		func_68(uParam0);
	}
}

void func_60(var uParam0)
{
	int iVar0;

	iVar0 = PED::GET_PED_AS_GROUP_LEADER(uParam0->f_18);
	if (func_27(uParam0->f_30.f_3))
	{
		if (func_75(uParam0->f_30.f_3, 1))
		{
			uParam0->f_39 = 1;
			if (!func_25(&(uParam0->f_30)))
			{
				func_71(&(uParam0->f_30), 0);
			}
			else if (func_72(&(uParam0->f_30)))
			{
				func_73(&(uParam0->f_30));
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				func_76(iVar0, -416594956);
			}
		}
	}
	if (func_74(&(uParam0->f_30)) >= uParam0->f_30.f_5)
	{
		func_26(&(uParam0->f_30));
		func_58(uParam0);
	}
}

bool func_61(int iParam0)
{
	return func_77(iParam0, 2);
}

int func_62(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_78(bParam1, iParam2, iParam3);
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

struct<2> func_63()
{
	struct<2> Var0;

	Var0 = ITEMSET::CREATE_ITEMSET(true);
	return Var0;
}

int func_64(var uParam0, var uParam1, float fParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	iVar0 = func_79();
	if (func_80(iVar0, &iVar1, &iVar2))
	{
		uVar3 = func_81(uParam3->f_134, (iVar2 - iVar1), 2, BUILTIN::SHIFT_LEFT(1, iVar1));
		*uParam0 = uVar3;
		if (func_82(*uParam0, uParam1, fParam2))
		{
			if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_35, false, false), *uParam1) >= 30f)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_65(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_83(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_66(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
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

void func_67(struct<2> Param0, int iParam2)
{
	if (!func_21(Param0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return;
	}
	if (!func_84(Param0, iParam2))
	{
		ITEMSET::ADD_TO_ITEMSET(iParam2, Param0);
	}
}

void func_68(var uParam0)
{
	int iVar0;

	iVar0 = PED::GET_PED_AS_GROUP_LEADER(uParam0->f_18);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0) && !func_27(uParam0->f_30.f_3))
	{
		uParam0->f_30.f_3 = func_85("GUAMA_PATROL_HINT", -416594956, iVar0, 1, 0, 1, 0, 0, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
		uParam0->f_30.f_4 = 50f;
		func_86(uParam0->f_30.f_3, uParam0->f_30.f_4, 1);
		if (func_25(&(uParam0->f_30)))
		{
			func_26(&(uParam0->f_30));
		}
	}
}

int func_69(var uParam0)
{
	int iVar0;

	if (func_21(uParam0->f_3) && !Global_1935630->f_12)
	{
		iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(func_87(uParam0->f_3, Global_35));
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), ENTITY::GET_ENTITY_COORDS(Global_35, false, false)) >= 300f && ENTITY::IS_ENTITY_OCCLUDED(iVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_70(var uParam0)
{
	if (!func_25(uParam0))
	{
	}
	if (!func_72(uParam0))
	{
		uParam0->f_2 = (func_88() - uParam0->f_1);
		func_89(uParam0, 2);
	}
}

void func_71(var uParam0, int iParam1)
{
	if (iParam1 || !func_25(uParam0))
	{
		func_90(uParam0);
	}
}

bool func_72(var uParam0)
{
	return func_39(*uParam0, 2);
}

void func_73(var uParam0)
{
	if (!func_25(uParam0))
	{
	}
	if (func_72(uParam0))
	{
		uParam0->f_1 = (func_88() - uParam0->f_2);
		uParam0->f_2 = 0f;
		func_91(uParam0, 2);
	}
}

int func_74(var uParam0)
{
	if (!func_25(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000f));
	}
	if (func_72(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_92() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

bool func_75(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_27(iParam0))
	{
		return false;
	}
	iVar0 = func_40(iParam0);
	if (!HUD::_0xB60C9F9ED47ABB76(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return PAD::IS_CONTROL_PRESSED(2, ((*Global_1945938)[iVar0 /*18*/])->f_4);
	}
	return HUD::_UIPROMPT_IS_HOLD_MODE_RUNNING(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_76(int iParam0, int iParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		CAM::STOP_GAMEPLAY_HINT(false);
		return;
	}
	else
	{
		if (PAD::IS_CONTROL_PRESSED(2, iParam1))
		{
			CAM::SET_GAMEPLAY_ENTITY_HINT(iParam0, 0f, 0f, 0f, true, -1, 2000, 2000, 0);
		}
		if (PAD::IS_CONTROL_JUST_RELEASED(2, iParam1))
		{
			CAM::STOP_GAMEPLAY_HINT(false);
		}
	}
}

bool func_77(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1) != 0;
}

int func_78(bool bParam0, var uParam1, var uParam2)
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

int func_79()
{
	int iVar0;
	int iVar1;
	float fVar2;
	vector3 vVar3;
	int iVar6;
	vector3 vVar7;
	float fVar10;

	iVar0 = func_93();
	if (iVar0 != -1)
	{
		return iVar0;
	}
	iVar1 = -1;
	fVar2 = 999999.9f;
	vVar3 = { ENTITY::GET_ENTITY_COORDS(Global_35, false, false) };
	if (func_94(vVar3))
	{
		return -1;
	}
	iVar6 = 57;
	iVar6 = 0;
	while (iVar6 < 61)
	{
		if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1888801)[iVar6 /*35*/])->f_3))
		{
			vVar7 = { 0f, 0f, 0f };
			vVar7 = { VOLUME::_0xF70F00013A62F866(((*Global_1888801)[iVar6 /*35*/])->f_3) };
			fVar10 = BUILTIN::VDIST2(vVar3, vVar7);
			if (fVar10 < fVar2)
			{
				iVar1 = iVar6;
				fVar2 = fVar10;
			}
		}
		iVar6++;
	}
	if (iVar1 == 57)
	{
		iVar1 = 57;
	}
	else if (iVar1 == 61)
	{
		iVar1 = 61;
	}
	return iVar1;
}

int func_80(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 57:
			*uParam1 = 8;
			*uParam2 = 13;
			return 1;
		case 59:
			*uParam1 = 0;
			*uParam2 = 2;
			return 1;
		case 60:
		case 61:
			*uParam1 = 3;
			*uParam2 = 7;
			return 1;
	}
	return 0;
}

int func_81(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4[32];

	if (iParam1 > 32)
	{
	}
	iVar1 = func_95(iParam3);
	if (iParam2 == 0)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(iVar1, iParam1);
		return iVar0;
	}
	iVar2 = iVar1;
	while (iVar2 <= ((iVar1 + iParam1) - 1))
	{
		if ((iParam2 == 1 && MISC::IS_BIT_SET(iParam0, iVar2)) || (iParam2 == 2 && !MISC::IS_BIT_SET(iParam0, iVar2)))
		{
			iVar4[iVar3] = iVar2;
			iVar3++;
		}
		iVar2++;
	}
	if (iVar3 == 0)
	{
		return -1;
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar3);
	return &(iVar4[iVar0]);
}

int func_82(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 3787.718f, -3954.145f, 41.288f };
			*uParam2 = 354.6375f;
			return 1;
		case 1:
			*uParam1 = { 3882.98f, -3730.864f, 43.6833f };
			*uParam2 = 116.3379f;
			return 1;
		case 3:
			*uParam1 = { 3972.921f, -3874.57f, 65.7122f };
			*uParam2 = 123.0235f;
			return 1;
		case 4:
			*uParam1 = { 3998.875f, -3721.019f, 67.4743f };
			*uParam2 = 206.3015f;
			return 1;
		case 5:
			*uParam1 = { 4136.172f, -3683.906f, 156.7324f };
			*uParam2 = 85.041f;
			return 1;
		case 6:
			*uParam1 = { 4228.889f, -3659.802f, 172.7372f };
			*uParam2 = 17.8561f;
			return 1;
		case 8:
			*uParam1 = { 3856.555f, -3577.237f, 53.4467f };
			*uParam2 = 167.0775f;
			return 1;
		case 9:
			*uParam1 = { 4070.433f, -3437.857f, 86.5179f };
			*uParam2 = 357.3192f;
			return 1;
		case 10:
			*uParam1 = { 3904.904f, -3224.065f, 45.5342f };
			*uParam2 = 195.7186f;
			return 1;
		case 11:
			*uParam1 = { 3853.244f, -3476.826f, 44.6443f };
			*uParam2 = 59.1071f;
			return 1;
		case 12:
			*uParam1 = { 3989.41f, -3338.172f, 64.3645f };
			*uParam2 = 85.9682f;
			return 1;
	}
	return 0;
}

void func_83(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_96(iParam1))
		{
			func_97(iParam0, 41788943);
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
			func_98(iParam0, 0, 1);
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
			func_99(iParam0, 0);
			bVar0 = true;
		}
		func_100(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	}
}

bool func_84(struct<2> Param0, int iParam2)
{
	if (!func_21(Param0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return false;
	}
	return ITEMSET::IS_IN_ITEMSET(iParam2, Param0);
}

int func_85(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_77(iVar0, 2))
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
				func_101(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}

void func_86(int iParam0, float fParam1, int iParam2)
{
	int iVar0;

	if (iParam2 && !func_27(iParam0))
	{
		return;
	}
	if (fParam1 <= 0f)
	{
		return;
	}
	iVar0 = func_40(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	((*Global_1945938)[iVar0 /*18*/])->f_9 = fParam1;
	HUD::_UIPROMPT_CONTEXT_SET_SIZE(((*Global_1945938)[iVar0 /*18*/])->f_3, fParam1);
}

int func_87(struct<2> Param0, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_21(Param0))
	{
		return iVar0;
	}
	iVar1 = 0;
	while (iVar1 < func_35(Param0))
	{
		iVar2 = func_37(Param0, iVar1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				if (iVar1 == 0 || func_102(iVar2, iParam2, 1, 1) < func_102(iVar0, iParam2, 1, 1))
				{
					iVar0 = iVar2;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

float func_88()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_89(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_90(var uParam0)
{
	func_103(uParam0, 0f);
}

void func_91(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_92()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

var func_93()
{
	return Global_1894899->f_2;
}

int func_94(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_95(int iParam0)
{
	int iVar0;
	var uVar1;

	iVar0 = 0;
	uVar1 = iParam0;
	while (iParam0 > 1)
	{
		iParam0 = BUILTIN::SHIFT_RIGHT(iParam0, 1);
		iVar0++;
	}
	return iVar0;
}

int func_96(int iParam0)
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

void func_97(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_104(iParam0, iParam1))
		{
			if (func_105(iParam0, iParam1))
			{
				if (func_106(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_107(iParam0);
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

void func_98(int iParam0, int iParam1, bool bParam2)
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

void func_99(int iParam0, bool bParam1)
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

void func_100(int iParam0, int iParam1)
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

void func_101(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, var uParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_108(iParam0, 1);
	func_109(iParam0, 1);
	func_110(iParam0, 128);
}

float func_102(int iParam0, int iParam1, bool bParam2, int iParam3)
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

void func_103(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_88() - fParam1);
	func_89(uParam0, 1);
	func_91(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_104(int iParam0, int iParam1)
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

int func_105(int iParam0, int iParam1)
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

bool func_106(int iParam0, int iParam1)
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
	if (!func_104(iParam0, iVar0))
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

void func_107(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

void func_108(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		if (((*Global_1945938)[iParam0 /*18*/])->f_5 == 5 && !func_77(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, 0);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
		}
	}
}

void func_109(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
	}
}

void func_110(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 || iParam1);
}

