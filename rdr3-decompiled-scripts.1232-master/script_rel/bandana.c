#region Local Var
	struct<7> Local_0 = { 0, 0, 0, 0, 0, 0, 0 } ;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(515))
	{
		func_1(&Local_0, 10);
	}
	else
	{
		func_1(&Local_0, 0);
	}
	Local_0.f_1 = ScriptParam_0.f_2;
	Local_0.f_6 = ScriptParam_0.f_4;
	Local_0.f_3 = ScriptParam_0;
	Local_0.f_4 = ScriptParam_0.f_3;
	while (func_2(&Local_0))
	{
		BUILTIN::WAIT(0);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	uParam0->f_5 = MISC::GET_GAME_TIMER();
}

int func_2(var uParam0)
{
	func_3(uParam0);
	switch (*uParam0)
	{
		case 0:
			func_4(uParam0);
			break;
		case 1:
			if (func_5(uParam0->f_5, 4000))
			{
				func_1(uParam0, 9);
			}
			else
			{
				func_6(uParam0);
				Jump @846; //curOff = 126
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 37, 1);
				if (func_5(uParam0->f_5, 4000))
				{
					func_1(uParam0, 9);
				}
				else
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_3, 822176400) || uParam0->f_4)
					{
						func_7(uParam0->f_3);
						func_1(uParam0, 9);
					}
					Jump @846; //curOff = 207
					PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 37, 1);
					if (func_5(uParam0->f_5, 4000))
					{
						func_1(uParam0, 9);
					}
					else
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_3, 822176400) || uParam0->f_4)
						{
							func_8(uParam0->f_3);
							func_1(uParam0, 9);
						}
						Jump @846; //curOff = 288
						PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 37, 1);
						if (func_5(uParam0->f_5, 4000))
						{
							func_1(uParam0, 9);
						}
						else
						{
							if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_3, 822176400) || uParam0->f_4)
							{
								func_9(uParam0->f_3, uParam0->f_1, &(uParam0->f_6));
								func_1(uParam0, 9);
							}
							Jump @846; //curOff = 378
							if (func_5(uParam0->f_5, 4000))
							{
								func_1(uParam0, 9);
							}
							else
							{
								if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_3, 822176400) || uParam0->f_4)
								{
									if (func_10(uParam0->f_1) == 81053684)
									{
										func_11(uParam0->f_3, uParam0->f_1);
									}
									else
									{
										func_12(uParam0->f_3, uParam0->f_1);
									}
									func_1(uParam0, 9);
								}
								Jump @846; //curOff = 483
								if (func_5(uParam0->f_5, 4000))
								{
									func_1(uParam0, 9);
								}
								else
								{
									if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_3, 822176400) || uParam0->f_4)
									{
										if (func_10(uParam0->f_1) == 81053684)
										{
											func_13(uParam0->f_3, uParam0->f_1);
										}
										else
										{
											func_12(uParam0->f_3, uParam0->f_1);
										}
										func_1(uParam0, 9);
									}
									Jump @846; //curOff = 588
									if (func_5(uParam0->f_5, 4000))
									{
										func_1(uParam0, 9);
									}
									else
									{
										if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_3, 822176400) || uParam0->f_4)
										{
											func_9(uParam0->f_3, uParam0->f_2, &(uParam0->f_6));
											uParam0->f_5 = func_14();
											func_1(uParam0, 8);
										}
										Jump @846; //curOff = 675
										if (func_5(uParam0->f_5, 4000))
										{
											func_1(uParam0, 9);
										}
										else if (TASK::_0xEC7E480FF8BD0BED(uParam0->f_3) && !uParam0->f_4)
										{
											if (!ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_3, 108107462))
											{
											}
											else
											{
												Jump @846; //curOff = 744
												if (func_15())
												{
												}
												else if (func_16())
												{
													func_17();
												}
												else
												{
													if (Global_35 == uParam0->f_3)
													{
														Global_1946804->f_2793 = 0;
													}
													func_18(uParam0->f_1, 0);
													func_1(uParam0, 9);
													Jump @846; //curOff = 807
													if (Global_35 == uParam0->f_3)
													{
														Global_1946804->f_2793 = 0;
													}
													func_1(uParam0, 10);
													Jump @846; //curOff = 836
													return 0;
												}
											}
											return 1;
										}
									}
								}
							}
						}
					}
				}
			}
		}

void func_3(var uParam0)
{
	if (func_19(uParam0) == 10)
	{
		return;
	}
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		if (Global_35 == uParam0->f_3)
		{
			uParam0->f_4 = 1;
			return;
		}
		else
		{
			uParam0->f_4 = 1;
			return;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		func_1(uParam0, 10);
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_3))
	{
		if (Global_35 == uParam0->f_3)
		{
			func_1(uParam0, 9);
			return;
		}
		else
		{
			func_1(uParam0, 10);
			return;
		}
	}
}

void func_4(var uParam0)
{
	if (PED::IS_PED_A_PLAYER(uParam0->f_3))
	{
		if (Global_35 == uParam0->f_3)
		{
			if (Global_1946804->f_2793)
			{
				func_1(uParam0, 10);
			}
			else
			{
				Global_1946804->f_2793 = 1;
				func_1(uParam0, 1);
			}
		}
		else
		{
			func_1(uParam0, 1);
		}
	}
	else
	{
		func_1(uParam0, 10);
	}
}

int func_5(int iParam0, int iParam1)
{
	if (MISC::ABSI((MISC::GET_GAME_TIMER() - iParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_6(var uParam0)
{
	int iVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar6;

	if (!func_20(uParam0->f_1))
	{
		func_1(uParam0, 10);
		return;
	}
	bVar2 = false;
	bVar3 = true;
	if (func_21(&iVar0))
	{
		if (uParam0->f_1 == iVar0)
		{
			bVar2 = true;
			bVar3 = true;
		}
		else
		{
			uParam0->f_2 = iVar0;
			bVar3 = false;
		}
	}
	iVar4 = func_10(uParam0->f_1);
	bVar5 = func_22(&uVar1);
	if (bVar3)
	{
		iVar6 = func_23(uParam0->f_1);
		if (iVar6 != -358215195 && func_24(uParam0->f_6, 1))
		{
			func_1(uParam0, 6);
		}
		else if (bVar2)
		{
			if (bVar5)
			{
				if (iVar4 == 81053684)
				{
					func_1(uParam0, 4);
				}
				else
				{
					func_1(uParam0, 6);
				}
			}
			else
			{
				func_1(uParam0, 5);
			}
		}
		else if (iVar4 == 81053684 && func_24(uParam0->f_6, 2))
		{
			func_1(uParam0, 2);
			func_25(&(uParam0->f_6), 2);
		}
		else
		{
			func_1(uParam0, 3);
		}
	}
	else
	{
		func_1(uParam0, 7);
	}
}

void func_7(int iParam0)
{
	int iVar0;

	if (!func_22(&iVar0))
	{
		return;
	}
	PED::_0x2208438012482A1A(iParam0, false, false);
	PED::_0xC494C76A34266E82(iParam0, 13);
	func_26(iVar0, 2);
	func_27(26, 0, 0, 0, 0);
}

void func_8(int iParam0)
{
	int iVar0;
	var uVar1;

	if (!func_21(&iVar0))
	{
		return;
	}
	if (func_22(&uVar1))
	{
		return;
	}
	PED::_0x2208438012482A1A(iParam0, false, false);
	PED::_0xC494C76A34266E82(iParam0, 0);
	if (EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(1925708505, iParam0, -1f, -1f, -1f, -1082130432, -1082130432, 1127481344, 0, 0, -1, -1) > 0)
	{
	}
	func_26(iVar0, 1);
	func_27(26, 0, 0, 0, 0);
}

int func_9(int iParam0, int iParam1, var uParam2)
{
	if (!func_20(iParam1))
	{
		return 0;
	}
	if (!func_28(iParam1))
	{
		return 0;
	}
	PED::_0x2208438012482A1A(iParam0, false, false);
	PED::_0xC494C76A34266E82(iParam0, 13);
	func_25(uParam2, 1);
	func_26(iParam1, 8);
	func_27(26, 0, 0, 0, 0);
	return 1;
}

int func_10(int iParam0)
{
	struct<2> Var0;

	if (!func_29(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

void func_11(int iParam0, int iParam1)
{
	if (func_10(iParam1) != 81053684)
	{
		return;
	}
	PED::_0x2208438012482A1A(iParam0, false, false);
	func_26(iParam1, 2);
	func_27(26, 0, 0, 0, 0);
}

void func_12(int iParam0, int iParam1)
{
	if (func_10(iParam1) != -525676072)
	{
		return;
	}
	PED::_0x2208438012482A1A(iParam0, false, false);
	PED::_0xC494C76A34266E82(iParam0, 0);
	if (EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(1925708505, iParam0, -1f, -1f, -1f, -1082130432, -1082130432, 1127481344, 0, 0, -1, -1) > 0)
	{
	}
	func_26(iParam1, 1);
	func_27(26, 0, 0, 0, 0);
}

void func_13(int iParam0, int iParam1)
{
	if (func_10(iParam1) != 81053684)
	{
		return;
	}
	PED::_0x2208438012482A1A(iParam0, false, false);
	PED::_0xC494C76A34266E82(iParam0, 0);
	if (EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(1925708505, iParam0, -1f, -1f, -1f, -1082130432, -1082130432, 1127481344, 0, 0, -1, -1) > 0)
	{
	}
	func_26(iParam1, 1);
	func_27(26, 0, 0, 0, 0);
}

int func_14()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

bool func_15()
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

int func_16()
{
	int iVar0;

	iVar0 = 0;
	if (func_30(81053684, &iVar0))
	{
		return 1;
	}
	if (func_30(-525676072, &iVar0))
	{
		return 1;
	}
	return 0;
}

void func_17()
{
	if (!func_16())
	{
		return;
	}
	func_31();
}

int func_18(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;

	bVar3 = func_28(iParam0);
	if (func_32(iParam0, -1303648999))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_22(&iVar2))
		{
			if (bVar1)
			{
				iVar0 = func_33();
			}
			else
			{
				iVar0 = func_34();
			}
		}
		else if (func_24(iParam1, 1))
		{
			iVar0 = 0;
		}
		else if (bVar1)
		{
			iVar0 = func_35();
		}
		else
		{
			iVar0 = func_36();
		}
	}
	else if (func_21(&iVar2))
	{
		if (func_32(iVar2, -1303648999))
		{
			iVar0 = func_33();
		}
		else
		{
			iVar0 = func_34();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_35();
	}
	else
	{
		iVar0 = func_36();
	}
	if (iVar0 != 0)
	{
		Global_1946804->f_2791 = MISC::GET_GAME_TIMER();
		TASK::_TASK_ITEM_INTERACTION(Global_35, iParam0, iVar0, 1, iParam1, -1082130432);
		return 1;
	}
	return 0;
}

int func_19(var uParam0)
{
	return *uParam0;
}

bool func_20(int iParam0)
{
	return func_37(iParam0);
}

int func_21(int iParam0)
{
	if (func_30(81053684, iParam0))
	{
		return 1;
	}
	if (func_30(-525676072, iParam0))
	{
		return 1;
	}
	return 0;
}

int func_22(var uParam0)
{
	if (-1829635046 == func_38(81053684))
	{
		if (func_21(uParam0))
		{
			return 1;
		}
	}
	else if (func_30(-525676072, uParam0))
	{
		if (func_21(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_23(int iParam0)
{
	struct<5> Var0;

	Var0 = { func_39(iParam0, 1, 0) };
	return func_40(Var0.f_4);
}

bool func_24(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_25(var uParam0, int iParam1)
{
	func_41(uParam0, iParam1);
}

void func_26(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;

	iVar0 = func_23(iParam0);
	iVar1 = func_42(iVar0, 1);
	if (iVar1 == 39)
	{
		return;
	}
	if (func_43(iParam0) && func_44(iParam0))
	{
		iParam1 |= 64;
	}
	if (((iVar0 == 1108822547 && func_45(32768)) || &Global_1946804->f_1497.f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/]) && iParam0 != &Global_1946804->f_1497.f_1[iVar1 /*3*/])
	{
		if (func_43(&(Global_1946804->f_1497.f_1[iVar1 /*3*/])) && func_44(&(Global_1946804->f_1497.f_1[iVar1 /*3*/])))
		{
			iParam1 |= 32;
		}
		if ((Global_1946804->f_57[iVar1 /*11*/])->f_1 > 1)
		{
			iParam1 |= 16;
		}
		iVar2 = 0;
		switch (func_10(iParam0))
		{
			case 81053684:
				if (func_30(-525676072, &uVar3))
				{
					iVar2 = func_42(func_46(-525676072), 1);
					if (iVar2 == 39)
					{
					}
					else
					{
						Global_1946804->f_2377[iVar2 /*2*/] = &Global_1946804->f_57[iVar2 /*11*/];
						Jump @434; //curOff = 294
						if (func_45(32768))
						{
							func_48(func_47(iVar1, 1));
						}
						if (func_45(32768) || (func_30(-2061583405, &iVar4) && !func_44(iVar4)))
						{
							PED::KNOCK_OFF_PED_PROP(Global_35, false, true, false, true);
						}
						if (func_30(81053684, &iVar4))
						{
							iVar2 = func_42(func_46(81053684), 1);
							if (iVar2 == 39)
							{
							}
							else
							{
								Global_1946804->f_2377[iVar2 /*2*/] = &Global_1946804->f_57[iVar2 /*11*/];
							}
							Global_1946804->f_2377[iVar1 /*2*/] = iParam0;
							func_49(iVar0, iParam1, 6);
						}
					}
				}
		}
	}

void func_27(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;

	if (bParam4)
	{
		func_50(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_51(Var0);
}

int func_28(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (func_21(&iVar0))
	{
		if (iParam0 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_29(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_30(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_42(func_46(iParam0), 1);
	if (iVar1 >= 39)
	{
		return 0;
	}
	if (&Global_1946804->f_1497.f_1[iVar1 /*3*/] != 0 && &Global_1946804->f_1497.f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1 /*3*/];
		if (func_10(iVar0) == iParam0)
		{
			*iParam1 = iVar0;
			return 1;
		}
	}
	*iParam1 = 0;
	return 0;
}

void func_31()
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	if (func_30(81053684, &iVar1))
	{
		if (func_37(iVar1))
		{
			func_52(81053684);
			bVar0 = true;
		}
	}
	if (func_30(-525676072, &iVar1))
	{
		if (func_37(iVar1))
		{
			func_52(-525676072);
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		PED::_0xC494C76A34266E82(Global_35, 13);
	}
}

int func_32(int iParam0, int iParam1)
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

int func_33()
{
	int iVar0;

	iVar0 = 1549701178;
	switch (func_53())
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

int func_34()
{
	int iVar0;

	iVar0 = 614608656;
	switch (func_53())
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

int func_35()
{
	int iVar0;

	iVar0 = -1832677570;
	switch (func_53())
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

int func_36()
{
	int iVar0;

	iVar0 = 1623252156;
	switch (func_53())
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

int func_37(int iParam0)
{
	int iVar0;

	iVar0 = func_10(iParam0);
	if (iVar0 == 81053684 || iVar0 == -525676072)
	{
		return 1;
	}
	return 0;
}

int func_38(int iParam0)
{
	int iVar0;

	iVar0 = func_42(func_46(iParam0), 1);
	if (iVar0 != 39)
	{
		return (Global_1946804->f_1497.f_1[iVar0 /*3*/])->f_1;
	}
	return 0;
}

struct<5> func_39(int iParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;

	Var0 = { func_54(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_55(iParam0))
	{
		case -1037537535:
			if (!INVENTORY::_0x780C5B9AE2819807(iParam0, 1034665895))
			{
				Var0 = { func_56(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_57(bParam1) };
			if (iParam2 && func_58(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_59(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_59(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_60(iParam0, &Var5, 1728382685))
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
			Var0 = { func_61(bParam1) };
			switch (func_10(iParam0))
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
			if (func_62(iParam0, -1823706425))
			{
				Var0 = { func_56(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, -1838434463);
			}
			else if (func_62(iParam0, -1483207246))
			{
				Var0 = { func_56(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_63(Var0, &Var27, bParam1, 0))
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

int func_40(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if ((Global_1946804->f_57[iVar0 /*11*/])->f_8 == iParam0)
		{
			return func_47(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

void func_41(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_42(int iParam0, int iParam1)
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

int func_43(int iParam0)
{
	switch (func_10(iParam0))
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

bool func_44(int iParam0)
{
	var uVar0;

	return func_64(iParam0, &uVar0);
}

bool func_45(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

int func_46(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_40(iVar0);
}

int func_47(int iParam0, int iParam1)
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

void func_48(int iParam0)
{
	func_65(iParam0, 8, 6);
}

void func_49(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_2377[func_42(iParam0, 1) /*2*/])->f_1 = ((Global_1946804->f_2377[func_42(iParam0, 1) /*2*/])->f_1 || iParam1);
}

void func_50(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_51(struct<4> Param0)
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
			if (func_66(Param0))
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
			func_67(Param0);
			*(Global_1946804->f_668[Global_1946804->f_856 /*4*/]) = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_50(8);
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
			if (func_66(Param0))
			{
				return;
			}
			func_67(Param0);
			*(Global_1946804->f_567[Global_1946804->f_851 /*4*/]) = { Param0 };
			Global_1946804->f_851++;
			func_50(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_68(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

void func_52(int iParam0)
{
	int iVar0;

	iVar0 = func_42(func_46(iParam0), 1);
	if (iVar0 == 39)
	{
		return;
	}
	func_26(&(Global_1946804->f_57[iVar0 /*11*/]), 8);
	func_27(26, 0, 0, 0, 0);
}

int func_53()
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
		else if ((((WEAPON::IS_WEAPON_VALID(iVar0) && WEAPON::_0x0556E9D2ECF39D01(iVar0)) && !func_69(iVar0)) && !PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true)) && !(PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && !CAM::_0xA24C1D341C6E0D53(1, 0, 0)))
		{
			return 3;
		}
		else if (iVar0 == joaat("weapon_kit_binoculars"))
		{
			return 1;
		}
		else if ((WEAPON::IS_WEAPON_VALID(iVar0) && func_69(iVar0)) || iVar0 == joaat("weapon_lasso"))
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

struct<4> func_54(bool bParam0)
{
	return func_56(1328661203, func_70(), -1591664384, bParam0);
}

int func_55(int iParam0)
{
	vector3 vVar0;

	if (!func_29(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_56(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_29(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_71(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

struct<4> func_57(bool bParam0)
{
	int iVar0;

	iVar0 = func_71(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224214))
		{
			*Global_1224214 = { func_56(923904168, func_54(bParam0), -740156546, bParam0) };
		}
		return *Global_1224214;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224222))
		{
			*Global_1224222 = { func_56(923904168, func_54(bParam0), -740156546, 0) };
		}
		return *Global_1224222;
	}
	return func_56(923904168, func_54(bParam0), -740156546, 0);
}

int func_58(int iParam0, bool bParam1)
{
	if (func_10(iParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
	{
		if (bParam1)
		{
			return func_72(-1185145312, 0) > 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_59(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_73(iParam0, *uParam1, iParam2, bParam3) > 0;
}

int func_60(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_74(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_61(bool bParam0)
{
	int iVar0;

	iVar0 = func_71(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224218))
		{
			*Global_1224218 = { func_56(271701509, func_54(bParam0), 12999093, 0) };
		}
		return *Global_1224218;
	}
	return func_56(271701509, func_54(bParam0), 12999093, 0);
}

int func_62(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_10(iParam0);
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &uVar0))
		{
			if (ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iParam1, uVar0))
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

int func_63(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(func_71(bParam5), &uParam0, uParam4, !bParam6))
	{
		return 0;
	}
	return 1;
}

int func_64(int iParam0, var uParam1)
{
	*uParam1 = 0;
	*uParam1 = 0;
	while (*uParam1 < Global_1946804->f_2657.f_19)
	{
		if (iParam0 == &Global_1946804->f_2657[*uParam1])
		{
			return 1;
		}
		*uParam1++;
	}
	return 0;
}

void func_65(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_42(iParam0, 1) /*11*/])->f_10 = ((Global_1946804->f_57[func_42(iParam0, 1) /*11*/])->f_10 - ((Global_1946804->f_57[func_42(iParam0, 1) /*11*/])->f_10 && iParam1));
}

bool func_66(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_67(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

void func_68(var uParam0, var uParam1, var uParam2)
{
	struct<4> Var0;

	Var0.f_1 = uParam2;
	Var0 = uParam0;
	Var0.f_2 = uParam1;
	func_75(Var0);
}

bool func_69(int iParam0)
{
	return WEAPON::_0xC4DEC3CA8C365A5D(iParam0);
}

struct<4> func_70()
{
	struct<4> Var0;

	return Var0;
}

int func_71(bool bParam0)
{
	if (func_76() == -1)
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

int func_72(int iParam0, bool bParam1)
{
	if (func_77(iParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_71(bParam1), iParam0, 0);
}

int func_73(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;

	if (!func_29(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_56(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_71(bParam6), &Var0, 0);
	return uVar4;
}

int func_74(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_71(0);
	*uParam1 = { func_56(iParam0, func_57(0), iParam3, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, uParam1, uParam2, 22, 1))
	{
		return 0;
	}
	return 1;
}

void func_75(struct<4> Param0)
{
	int iVar0;
	int iVar1;

	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_66(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1 /*4*/] == Param0 && (Global_1946804->f_769[iVar1 /*4*/])->f_2 == Param0.f_2) && (Global_1946804->f_769[iVar1 /*4*/])->f_3 == Param0.f_3) && (Global_1946804->f_769[iVar1 /*4*/])->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1 /*4*/] == 34 && func_66(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_67(Param0);
	*(Global_1946804->f_769[Global_1946804->f_854 /*4*/]) = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_50(8);
}

int func_76()
{
	return Global_1572887->f_12;
}

bool func_77(int iParam0)
{
	return WEAPON::_0x1F7977C9101F807F(iParam0);
}

