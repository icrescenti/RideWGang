#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	vector3 vLocal_5 = { 0f, 0f, 0f };
	int iLocal_8 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_8 = ScriptParam_0;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514) || func_1() != -1)
	{
		func_2(&uLocal_3);
	}
	if (!TASK::_0x841475AC96E794D1(ScriptParam_0.f_1))
	{
		func_2(&uLocal_3);
	}
	vLocal_5 = { TASK::_0xA8452DD321607029(ScriptParam_0.f_1, 1) };
	while (func_3())
	{
		if (func_4())
		{
			func_2(&uLocal_3);
		}
		if (func_5(0, 0, 1))
		{
			func_2(&uLocal_3);
		}
		else if (func_6(&uLocal_3))
		{
		}
		BUILTIN::WAIT(0);
	}
	func_2(&uLocal_3);
}

int func_1()
{
	return Global_1572887->f_12;
}

void func_2(var uParam0)
{
	if (MAP::DOES_BLIP_EXIST(uParam0->f_1))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_1));
	}
	SCRIPTS::_0xE7282390542F570D(iLocal_8);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_3()
{
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		func_2(&uLocal_3);
		return 0;
	}
	return 1;
}

int func_4()
{
	if (PED::IS_PED_INJURED(Global_35))
	{
		return 1;
	}
	return 0;
}

int func_5(int iParam0, bool bParam1, int iParam2)
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
		if (func_7())
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
		iVar0 = func_8(&(Global_1898164->f_1[0 /*5*/]));
		if (func_9(iVar0) && func_10(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_11(&(Global_1898164->f_1[0 /*5*/])))
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

int func_6(var uParam0)
{
	switch (func_12(uParam0))
	{
		case 0:
			if (MAP::DOES_BLIP_EXIST(uParam0->f_1))
			{
				func_13(uParam0);
			}
			else
			{
				uParam0->f_1 = MAP::_0x554D9D53F696D002(2098831270, vLocal_5);
				func_13(uParam0);
			}
			func_14(uParam0, 1);
			break;
		case 1:
			if (func_15(Global_35, vLocal_5, 0) < 25f)
			{
				func_14(uParam0, 2);
			}
			break;
		case 2:
			break;
	}
	return 0;
}

int func_7()
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

int func_8(int iParam0)
{
	if (!func_11(iParam0))
	{
		return -1;
	}
	return func_17(func_16(iParam0));
}

bool func_9(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_10(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_11(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_12(var uParam0)
{
	return *uParam0;
}

void func_13(var uParam0)
{
	MAP::SET_BLIP_SPRITE(uParam0->f_1, -1733535731, true);
}

void func_14(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

float func_15(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

int func_16(int iParam0)
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

int func_17(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

