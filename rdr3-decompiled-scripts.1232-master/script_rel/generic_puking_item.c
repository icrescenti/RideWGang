void __EntryFunction__()
{
	var uVar0;
	int iVar3;
	var uVar4;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
	}
	iVar3 = 0;
	while (!SCRIPTS::_0x9E4EF615E307FBBE())
	{
		if (func_1(&iVar3, &uVar4, 1, &uVar0))
		{
		}
		else
		{
			BUILTIN::WAIT(0);
		}
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_1(int iParam0, var uParam1, bool bParam2, var uParam3)
{
	if (*iParam0 < 5)
	{
		if (((func_2() || (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, *uParam1))) || !func_3()) || !PED::IS_PED_ON_FOOT(Global_35))
		{
			if (ANIMSCENE::_0x25557E324489393C(*uParam1))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(*uParam1);
			}
			return 1;
		}
		else
		{
			Global_1935496->f_127 = 1;
		}
	}
	switch (*iParam0)
	{
		case 0:
			if (bParam2)
			{
				func_4(uParam3, 0);
			}
			if (func_5(uParam3) && func_6(uParam3) > 2f)
			{
				func_7(iParam0, 1);
				func_8(uParam3);
			}
			break;
		case 1:
			*uParam1 = ANIMSCENE::_CREATE_ANIM_SCENE("script@story@sal1@ig@sal1_ig12_wake_up@sal1_ig12_wake_up", 0, "Herb_PL", false, true);
			func_7(iParam0, 2);
			break;
		case 2:
			if (ANIMSCENE::_0x25557E324489393C(*uParam1))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(*uParam1);
				func_7(iParam0, 3);
			}
			break;
		case 3:
			if (ANIMSCENE::_0x477122B8D05E7968(*uParam1, 1, 0))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "ARTHUR", Global_35, 0);
				ANIMSCENE::START_ANIM_SCENE(*uParam1);
				func_7(iParam0, 5);
			}
			break;
		case 5:
			if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(*uParam1, 0))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(*uParam1, "ARTHUR", Global_35);
				func_7(iParam0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

bool func_2()
{
	return (ANIMSCENE::_0x25557E324489393C(Global_43799) && ANIMSCENE::_0xCBFC7725DE6CE2E0(Global_43799, 0));
}

bool func_3()
{
	return func_9(1);
}

void func_4(var uParam0, int iParam1)
{
	if (iParam1 || !func_5(uParam0))
	{
		func_10(uParam0);
	}
}

bool func_5(var uParam0)
{
	return func_11(*uParam0, 1);
}

float func_6(var uParam0)
{
	if (!func_5(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_12(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_13() - uParam0->f_1);
}

void func_7(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_8(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_9(int iParam0)
{
	return func_14(iParam0);
}

void func_10(var uParam0)
{
	func_15(uParam0, 0f);
}

bool func_11(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_12(var uParam0)
{
	return func_11(*uParam0, 2);
}

float func_13()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_14(var uParam0)
{
	return func_16(Global_1935496->f_27, uParam0);
}

void func_15(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_13() - fParam1);
	func_17(uParam0, 1);
	func_18(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_16(var uParam0, var uParam1)
{
	return (uParam0 && uParam1) != 0;
}

void func_17(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_18(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

