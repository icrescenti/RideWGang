#region Local Var
	var uLocal_0 = 7;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = -1;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	float fLocal_16 = 0f;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	char* sLocal_22 = NULL;
#endregion

void __EntryFunction__()
{
	fLocal_15 = 1f;
	fLocal_16 = 1f;
	sLocal_21 = "props_misc@campfires@5_logs";
	sLocal_22 = "Script_PropCampfire";
	func_1();
	while (!func_2(0, 0))
	{
		func_3(Global_1129899, Global_1129907, Global_1129901, Global_1130292);
		BUILTIN::WAIT(0);
	}
	func_4(Global_1129899, Global_1129907, Global_1129901);
	func_5();
}

void func_1()
{
	int iVar0;

	iVar0 = MISC::GET_GAME_TIMER();
	func_6(32, -1);
	func_7();
	if (func_8())
	{
		func_5();
	}
	func_9();
	func_10(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
}

int func_2(bool bParam0, bool bParam1)
{
	int iVar0;

	if (Global_1572887->f_12)
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bParam1 && NETWORK::_0xF2CBC969C4F090C7())
		{
		}
		else if (bParam1 && NETWORK::NETWORK_IS_SESSION_ACTIVE())
		{
		}
		else if (bParam1 && &Global_1572887 < 39)
		{
		}
		else
		{
			return 1;
		}
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
		{
			case 0:
				return 1;
			case 1:
				return 1;
			case 2:
				if (!bParam0)
				{
					return 1;
				}
				break;
			case 4:
				return 1;
			case 3:
				return 1;
			default:
				return 1;
		}
	}
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		if (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0) == 1976253964)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_3(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_11(uParam0, uParam1, uParam2);
	}
	func_12(uParam0, uParam1, uParam2, uParam3);
	func_13(uParam0, uParam1, uParam2, uParam3);
	func_14(uParam0, uParam1, uParam2, uParam3);
	return 1;
}

int func_4(var uParam0, var uParam1, var uParam2)
{
	return 1;
}

void func_5()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_6(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_5();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
}

int func_7()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	iVar1 = MISC::GET_GAME_TIMER();
	iVar2 = NETWORK::NETWORK_GET_TIMEOUT_TIME();
	if (iVar2 < 50000)
	{
		iVar2 = 50000;
	}
	while (iVar0 != 2)
	{
		if (MISC::GET_GAME_TIMER() - iVar1) > (iVar2 - 5000)
		{
		}
		if ((MISC::GET_GAME_TIMER() - iVar1) > 300000)
		{
			func_5();
		}
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
			{
				case 0:
					break;
				case 1:
					func_5();
					break;
				case 2:
					func_5();
					break;
				case 4:
					func_5();
					break;
				case 3:
					func_5();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_5();
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_5();
		}
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			func_5();
		}
		if (func_15() == 0)
		{
			if (func_16())
			{
				func_5();
			}
		}
		BUILTIN::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_5();
	}
	return 1;
}

int func_8()
{
	if (Global_1572887->f_9)
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	return 0;
}

void func_9()
{
	func_17(Global_1129899);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(Global_1129899, 2, 46);
	func_18(NETWORK::_0xBA24095EA96DFE17(Global_1129899), 2, "g_mpNetCampDogManagerHost");
	func_19(Global_1129907);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1129907, 385, 47);
	func_20(NETWORK::_0x690806BC83BC8CA2((*Global_1129907)[0 /*12*/]), 385, "g_mpNetCampDogManagerPlayer");
	func_21(Global_1129901);
}

void func_10(bool bParam0)
{
	int iVar0;
	struct<8> Var1;
	int iVar9;

	iVar0 = (MISC::_GET_SYSTEM_TIME() + 180000);
	iVar9 = 0;
	Var1 = { Var1 };
	while (true)
	{
		iVar9++;
		if (bParam0)
		{
			NETWORK::_0x236905C700FDB54D();
		}
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
			{
				case 0:
					break;
				case 1:
					func_5();
					break;
				case 2:
					func_5();
					break;
				case 4:
					func_5();
					break;
				case 3:
					func_5();
					break;
				default:
					break;
			}
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			StringCopy(&Var1, "HOST", 64);
		}
		else
		{
			StringCopy(&Var1, "CLIENT", 64);
		}
		if (NETWORK::_0x5D10B3795F3FC886())
		{
			return;
		}
		if (MISC::_GET_SYSTEM_TIME() >= iVar0)
		{
			func_5();
			return;
		}
		BUILTIN::WAIT(0);
	}
}

void func_11(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = func_22(*uParam0);
	switch (iVar0)
	{
		case 0:
			func_23(uParam0, 1);
			break;
		case 1:
			break;
		case 2:
			func_23(uParam0, 3);
			break;
		case 3:
			break;
	}
}

int func_12(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = iVar0;
	iVar2 = func_24(*((*uParam1)[iVar1 /*12*/]));
	switch (iVar2)
	{
		case 0:
			func_25((*uParam1)[iVar1 /*12*/]);
			func_26((*uParam1)[iVar1 /*12*/]);
			func_27((*uParam1)[iVar1 /*12*/], 1);
		case 1:
			iVar3 = func_28(uParam0, uParam1, uParam2, uParam3);
			if (iVar3 != iVar2)
			{
				func_27((*uParam1)[iVar1 /*12*/], iVar3);
			}
			break;
	}
	return 0;
}

int func_13(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	iVar0 = 1;
	iVar1 = func_29(*uParam2);
	switch (iVar1)
	{
		case 0:
			if (func_30(uParam0, uParam1, uParam2))
			{
				func_31(uParam2, 1);
			}
			break;
		case 1:
			bVar2 = true;
			if (bVar2)
			{
				if (!func_32())
				{
					bVar2 = false;
				}
			}
			if (bVar2)
			{
				if (!func_33(uParam2))
				{
					bVar2 = false;
				}
			}
			if (bVar2)
			{
				if (!func_34(uParam0, uParam1, uParam2))
				{
					bVar2 = false;
				}
			}
			if (bVar2)
			{
				func_31(uParam2, 2);
			}
			break;
		case 2:
			if (func_35(uParam0, uParam1, uParam2))
			{
				func_31(uParam2, 3);
			}
			break;
		case 3:
			if (func_36(uParam0, uParam1, uParam2))
			{
				func_31(uParam2, 4);
			}
			break;
		case 4:
			if (func_37(uParam0, uParam1, uParam2))
			{
				func_31(uParam2, 5);
			}
			break;
		case 5:
			iVar3 = func_38(uParam0, uParam1, uParam2);
			if (iVar3 == 1)
			{
				func_31(uParam2, 0);
			}
			else if (iVar3 == 2)
			{
				func_31(uParam2, 6);
			}
			break;
		case 6:
			if (func_39(uParam0, uParam1, uParam2))
			{
				func_31(uParam2, 1);
			}
			break;
		case 7:
			break;
	}
	return iVar0;
}

void func_14(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case -507840394:
				func_40(uParam0, uParam1, uParam2, uParam3, iVar0);
				break;
		}
		iVar0++;
	}
}

int func_15()
{
	return Global_1572887->f_13;
}

bool func_16()
{
	return Global_1051202->f_8;
}

void func_17(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
}

int func_18(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_19(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		func_25((*uParam0)[iVar0 /*12*/]);
		iVar0++;
	}
}

int func_20(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_21(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

var func_22(var uParam0, var uParam1)
{
	return uParam0;
}

void func_23(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

var func_24(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11)
{
	return uParam0;
}

void func_25(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	StringCopy(&(uParam0->f_2), "", 64);
	uParam0->f_10 = 0;
}

void func_26(var uParam0)
{
	bool bVar0;
	int iVar1;
	struct<8> Var2;
	bool bVar10;

	bVar0 = func_41();
	iVar1 = func_42();
	func_43(uParam0, bVar0);
	if (func_44(&Var2))
	{
		func_45(uParam0, Var2);
		func_46(PLAYER::PLAYER_ID(), Var2);
	}
	bVar10 = false;
	if (func_47(bVar0, 0))
	{
		if (bVar0 == iVar1)
		{
			bVar10 = true;
		}
	}
	if (bVar10)
	{
		func_48(uParam0, 0);
	}
	else
	{
		func_49(uParam0, 0);
	}
}

void func_27(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_28(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = iVar0;
	func_50((*uParam1)[iVar1 /*12*/], uParam3);
	func_51((*uParam1)[iVar1 /*12*/], uParam2);
	func_52((*uParam1)[iVar1 /*12*/], uParam2);
	return 1;
}

var func_29(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	return uParam0;
}

int func_30(var uParam0, var uParam1, var uParam2)
{
	Global_1129901->f_5 = 0;
	return 1;
}

void func_31(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_32()
{
	return 1;
}

int func_33(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	switch (uParam0->f_4)
	{
		case 1:
			iVar0 = 1;
			break;
	}
	iVar1 = uParam0->f_4;
	iVar1++;
	if (iVar1 >= 10)
	{
		uParam0->f_4 = 0;
	}
	else
	{
		uParam0->f_4 = iVar1;
	}
	return iVar0;
}

int func_34(var uParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (!func_53(uParam0, uParam1, uParam2, &uVar0))
	{
		return 0;
	}
	uParam2->f_1 = uVar0;
	return 1;
}

int func_35(var uParam0, var uParam1, var uParam2)
{
	if (!SCRIPTS::DOES_SCRIPT_EXIST(func_54()))
	{
		return 0;
	}
	SCRIPTS::REQUEST_SCRIPT(func_54());
	return 1;
}

int func_36(var uParam0, var uParam1, var uParam2)
{
	if (!SCRIPTS::HAS_SCRIPT_LOADED(func_54()))
	{
		SCRIPTS::REQUEST_SCRIPT(func_54());
		return 0;
	}
	return 1;
}

int func_37(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	iVar0 = uParam2->f_1;
	iVar1 = iVar0;
	func_55(&vVar2);
	vVar2.x = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(iVar0);
	vVar2.f_1 = iVar0;
	vVar2.f_2 = ((*uParam1)[iVar1 /*12*/])->f_1;
	if (MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(600) <= 0)
	{
		return 0;
	}
	Global_1129901->f_2 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(func_54(), &vVar2, 3, 600);
	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(func_54());
	return 1;
}

int func_38(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(iVar0);
	if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_54(), iVar1, true, 0))
	{
		return 1;
	}
	return 0;
}

int func_39(var uParam0, var uParam1, var uParam2)
{
	return 1;
}

void func_40(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	int iVar0;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam4, &iVar0, 4))
	{
		return;
	}
	switch (iVar0)
	{
		case 11:
			func_56(iParam4);
			break;
	}
}

var func_41()
{
	struct<4> Var0;
	var uVar4;

	Var0 = { func_58(-1838434463 /* GXTEntry: "Camp" */, func_57(0), 1084182731, 1) };
	uVar4 = func_59(Var0, -1911121386, 0, 1);
	return uVar4;
}

var func_42()
{
	struct<4> Var0;
	var uVar4;

	Var0 = { func_58(-1838434463 /* GXTEntry: "Camp" */, func_57(0), 1084182731, 1) };
	uVar4 = func_60(Var0, -1911121386, 1, -1);
	return uVar4;
}

void func_43(var uParam0, var uParam1)
{
	uParam0->f_1 = uParam1;
}

int func_44(var uParam0)
{
	struct<15> Var0;

	Var0.f_9 = -1591664384;
	if (!func_61(&Var0))
	{
		return 0;
	}
	*uParam0 = { Var0.f_14 };
	return 1;
}

void func_45(var uParam0, struct<8> Param1)
{
	uParam0->f_2 = { Param1 };
}

void func_46(int iParam0, struct<8> Param1)
{
	struct<20> Var0;

	Var0.f_4 = 1;
	Var0.f_8 = { Param1 };
	Var0.f_7 = iParam0;
	func_63(Var0, func_62(0, 8));
}

int func_47(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(bParam0, iParam1);
}

void func_48(var uParam0, int iParam1)
{
	if (func_64(uParam0->f_10, iParam1))
	{
		return;
	}
	func_65(&(uParam0->f_10), iParam1);
}

void func_49(var uParam0, int iParam1)
{
	if (!func_64(uParam0->f_10, iParam1))
	{
		return;
	}
	func_66(&(uParam0->f_10), iParam1);
}

void func_50(var uParam0, var uParam1)
{
	int iVar0;
	bool bVar1;

	iVar0 = func_67(uParam0, 1);
	bVar1 = func_68(uParam1, 0);
	if (iVar0 != bVar1)
	{
		if (bVar1)
		{
			func_48(uParam0, 1);
		}
		else
		{
			func_49(uParam0, 1);
		}
	}
}

void func_51(var uParam0, var uParam1)
{
	if (!func_69(uParam1, 0))
	{
		return;
	}
	func_26(uParam0);
	func_70(uParam1, 0);
}

void func_52(var uParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	iVar0 = func_71(1884341302, PLAYER::PLAYER_ID(), 0, 1);
	if (!func_72(iVar0))
	{
		func_49(uParam0, 2);
		func_49(uParam0, 3);
		func_49(uParam0, 4);
		return;
	}
	bVar1 = func_73(iVar0, 1);
	bVar2 = func_74(iVar0, 16, 255);
	bVar3 = func_74(iVar0, 32, 255);
	if (bVar1 && !bVar2)
	{
		func_48(uParam0, 2);
	}
	else
	{
		func_49(uParam0, 2);
	}
	if (bVar1 && (bVar2 || bVar3))
	{
		func_48(uParam0, 4);
	}
	else
	{
		func_49(uParam0, 4);
	}
	if (!bVar1)
	{
		func_49(uParam0, 3);
	}
}

int func_53(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (!func_75(iVar2, 0, 1))
		{
		}
		else
		{
			iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar2);
			iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar1);
			if (!_NAMESPACE26::_0x424B17A7DC5C90BC(iVar0))
			{
			}
			else if (!func_76(uParam0, uParam1, uParam2, iVar0))
			{
			}
			else
			{
				*uParam3 = iVar0;
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

char* func_54()
{
	return "net_camp_dog";
}

void func_55(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 255;
	uParam0->f_2 = 0;
}

void func_56(int iParam0)
{
	struct<5> Var0;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 20))
	{
		return;
	}
	switch (Var0.f_4)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			break;
	}
}

struct<4> func_57(bool bParam0)
{
	int iVar0;

	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_77(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1270479))
			{
				*Global_1270479 = { func_58(joaat("character"), func_78(), -1591664384, bParam0) };
			}
			return *Global_1270479;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1270479->f_12)))
			{
				Global_1270479->f_12 = { func_58(joaat("character"), func_78(), -1591664384, 0) };
			}
			return Global_1270479->f_12;
		}
	}
	return func_58(joaat("character"), func_78(), -1591664384, bParam0);
}

struct<4> func_58(bool bParam0, var uParam1, int iParam2, bool bParam3, var uParam4, bool bParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_47(bParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_77(bParam6), &uParam1, bParam0, bParam5, &Var0);
	return Var0;
}

int func_59(struct<4> Param0, int iParam4, int iParam5, bool bParam6)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_79(Param0, iParam4, &Var0, iParam5, bParam6))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_60(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, int iParam6)
{
	return func_80(&uParam0, bParam4, bParam5, iParam6);
}

int func_61(int iParam0)
{
	bool bVar0;
	struct<4> Var1;
	struct<4> Var5;
	int iVar9;
	struct<4> Var10;
	struct<10> Var14;

	bVar0 = func_42();
	if (!func_47(bVar0, 0))
	{
		return 0;
	}
	Var1 = { func_57(1) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
	{
		return 0;
	}
	Var5 = { func_58(-1838434463 /* GXTEntry: "Camp" */, Var1, 1084182731, 1) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var5))
	{
		return 0;
	}
	iVar9 = func_77(1);
	Var10 = { func_58(bVar0, Var5, -1911121386, 1) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var5))
	{
		return 0;
	}
	Var14.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar9, &Var10, &Var14, 22, 1))
	{
		return 0;
	}
	MISC::_COPY_MEMORY(iParam0, &Var14, 22);
	return 1;
}

var func_62(int iParam0, int iParam1)
{
	return func_81(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

void func_63(vector3 vParam0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam20))
	{
		return;
	}
	vParam0.x = 11;
	vParam0.f_1 = iVar0;
	vParam0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &vParam0, 20, 6, &uParam20);
}

bool func_64(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(iParam0, iParam1);
}

void func_65(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_66(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

int func_67(var uParam0, int iParam1)
{
	if (func_64(uParam0->f_10, iParam1))
	{
		return 1;
	}
	return 0;
}

int func_68(var uParam0, int iParam1)
{
	if (func_64(*uParam0, iParam1))
	{
		return 1;
	}
	return 0;
}

int func_69(var uParam0, int iParam1)
{
	if (func_64(uParam0->f_3, iParam1))
	{
		return 1;
	}
	return 0;
}

void func_70(var uParam0, int iParam1)
{
	if (!func_64(uParam0->f_3, iParam1))
	{
		return;
	}
	func_66(&(uParam0->f_3), iParam1);
}

int func_71(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (!NETWORK::_0x255A5EF65EDA9167(iParam1))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if (((*Global_1223462)[iVar0 /*686*/])->f_565 != iParam0)
		{
		}
		else if (bParam2 && !func_74(iVar0, 32, iParam1))
		{
		}
		else if (bParam3 && ((*Global_1212887)[iVar0 /*27*/])->f_15 != iParam1)
		{
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_72(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 12);
}

var func_73(int iParam0, int iParam1)
{
	return (func_82(iParam0) && func_83(((*Global_1223462)[iParam0 /*686*/])->f_562, iParam1));
}

bool func_74(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 255)
	{
		iParam2 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	return (func_82(iParam0) && func_83(((*(*Global_1213462)[iParam2 /*303*/])[iParam0 /*23*/])->f_19, iParam1));
}

int func_75(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
	{
		return 0;
	}
	iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
	if (bParam2 && !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		return 0;
	}
	if (bParam1 && PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return 0;
	}
	return 1;
}

int func_76(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	vector3 vVar6;
	bool bVar9;
	var uVar10;
	vector3 vVar11;
	var uVar14;
	bool bVar15;

	iVar0 = iParam3;
	bVar1 = func_84((*uParam1)[iVar0 /*12*/]);
	if (!func_47(bVar1, 0))
	{
		return 0;
	}
	if (!func_67((*uParam1)[iVar0 /*12*/], 0))
	{
		return 0;
	}
	if (func_67((*uParam1)[iVar0 /*12*/], 1))
	{
		return 0;
	}
	iVar2 = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(iParam3);
	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_54(), iVar2, true, 0))
	{
		return 0;
	}
	iVar3 = PLAYER::PLAYER_ID();
	iVar4 = PLAYER::GET_PLAYER_PED(iVar3);
	iVar5 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	vVar6 = { ENTITY::GET_ENTITY_COORDS(iVar4, false, false) };
	bVar9 = false;
	if (func_67((*uParam1)[iVar0 /*12*/], 2) && !func_67((*uParam1)[iVar0 /*12*/], 3))
	{
		bVar9 = true;
	}
	if (bVar9)
	{
		if (iVar0 == iVar5)
		{
			bVar9 = true;
		}
		else if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT_ON_SCRIPT(iParam3, func_54(), iVar2))
		{
			bVar9 = true;
		}
	}
	else
	{
		bVar15 = func_85(iParam3, &uVar10, &vVar11, &uVar14);
		if (!bVar15)
		{
			return 0;
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar6, vVar11, true) > 100f)
		{
			return 0;
		}
	}
	return 1;
}

int func_77(bool bParam0)
{
	if (func_15() == -1)
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

struct<4> func_78()
{
	struct<4> Var0;

	return Var0;
}

int func_79(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4, var uParam5, int iParam6, bool bParam7)
{
	int iVar0;

	iVar0 = func_77(bParam7);
	if (INVENTORY::_0x033EE4B89F3AC545(iVar0, &uParam0, bParam4) <= iParam6)
	{
		return 0;
	}
	if (!INVENTORY::_0xBE012571B25F5ACA(iVar0, &uParam0, bParam4, iParam6, uParam5))
	{
		return 0;
	}
	return 1;
}

int func_80(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_86(uParam0, bParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

var func_81(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	SCRIPTS::_0xDE544B7EC0C187CC(&uVar0);
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return uVar0;
	}
	if (func_87() != 0)
	{
		iVar1 = PLAYER::PLAYER_ID();
		if (iVar1 >= 0 && iVar1 < 32)
		{
			SCRIPTS::_0x31010318BA9897AC(&uVar0, iVar1);
		}
		return uVar0;
	}
	iVar2 = 0;
	bVar3 = false;
	bVar4 = false;
	iVar5 = Global_1273882->f_10;
	iVar6 = Global_1273882->f_15;
	bVar7 = true;
	iVar9 = iParam10;
	if (BUILTIN::VMAG2(vParam6) < 1f)
	{
		bVar7 = false;
	}
	else
	{
		switch (iParam9)
		{
			case 665633627:
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_88());
				break;
			case -432403087:
				iVar8 = VOLUME::_0x10157BC3247FF3BA(vParam0, vParam3, vParam6, func_88());
				break;
			case -1612834106:
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_88());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_89(PLAYER::GET_PLAYER_TEAM(iVar5)));
	}
	if (iVar9 & 8 != 0 && iVar9 & 32768 != 0)
	{
		iVar9 |= 65536;
		iVar9 = (iVar9 - iVar9 & 40952);
	}
	if (iVar9 & 4 != 0)
	{
		if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iVar9 = (iVar9 - iVar9 & 4);
			iVar9 |= 0;
		}
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Global_1273882->f_154[iVar2])))
		{
			iVar10 = &Global_1273882->f_154[iVar2];
			bVar3 = false;
			bVar4 = false;
			if (iVar9 & 1 != 0 && iVar10 == iVar5)
			{
				bVar3 = true;
			}
			if (func_90(iVar2))
			{
				bVar3 = true;
			}
			iVar11 = PLAYER::GET_PLAYER_PED(iVar10);
			if (!bVar3)
			{
				if (iVar9 & 2 != 0)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iVar11))
					{
						bVar3 = true;
					}
					else if (&Global_1273882->f_88[iVar2])
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8192 != 0 && func_91(iVar2) != 1)
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 16384 != 0 && PED::_0xB655DB7582AEC805(iVar11))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 4 != 0 && !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar10))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8176 != 0)
				{
					switch (PLAYER::GET_PLAYER_TEAM(iVar10))
					{
						case -1:
							if (iVar9 & 16 != 0)
							{
								bVar4 = true;
							}
							break;
						case 0:
							if (iVar9 & 32 != 0)
							{
								bVar4 = true;
							}
							break;
						case 1:
							if (iVar9 & 64 != 0)
							{
								bVar4 = true;
							}
							break;
						case 2:
							if (iVar9 & 128 != 0)
							{
								bVar4 = true;
							}
							break;
						case 3:
							if (iVar9 & 256 != 0)
							{
								bVar4 = true;
							}
							break;
						case 4:
							if (iVar9 & 512 != 0)
							{
								bVar4 = true;
							}
							break;
						case 5:
							if (iVar9 & 1024 != 0)
							{
								bVar4 = true;
							}
							break;
						case 6:
							if (iVar9 & 2048 != 0)
							{
								bVar4 = true;
							}
							break;
						case 8:
							if (iVar9 & 4096 != 0)
							{
								bVar4 = true;
							}
							break;
					}
					if (!bVar4)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 32768 != 0)
				{
					if (_NAMESPACE26::_0x901E0DC25080C8B9(iVar10) != iVar6)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 65536 != 0)
				{
					if (!func_92(iVar10))
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3 && bVar7)
			{
				if (!VOLUME::_0xF256A75210C5C0EB(iVar8, ENTITY::GET_ENTITY_COORDS(iVar11, false, false)))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				SCRIPTS::_0x31010318BA9897AC(&uVar0, iVar2);
			}
		}
		iVar2++;
	}
	if (bVar7)
	{
		VOLUME::_0x43F867EF5C463A53(iVar8);
	}
	return uVar0;
}

bool func_82(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 12);
}

bool func_83(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_84(var uParam0)
{
	return uParam0->f_1;
}

int func_85(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;

	if (!func_93(iParam0, &iVar0))
	{
		return 0;
	}
	if (!TASK::_0x841475AC96E794D1(iVar0))
	{
	}
	*uParam1 = iVar0;
	*uParam2 = { TASK::_0xA8452DD321607029(*uParam1, 1) };
	*uParam3 = TASK::_0xB93EA7184BAA85C3(*uParam1, 1);
	return 1;
}

int func_86(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_77(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, uParam0, bParam1, &uVar0))
	{
		return 0;
	}
	if (!func_94(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_87()
{
	return Global_1051202->f_12;
}

char* func_88()
{
	return "unnamed";
}

int func_89(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case -1:
			iVar0 = 16;
			break;
		case 0:
			iVar0 = 32;
			break;
		case 1:
			iVar0 = 64;
			break;
		case 2:
			iVar0 = 128;
			break;
		case 3:
			iVar0 = 256;
			break;
		case 4:
			iVar0 = 512;
			break;
		case 5:
			iVar0 = 1024;
			break;
		case 6:
			iVar0 = 2048;
			break;
		case 8:
			iVar0 = 4096;
			break;
	}
	return iVar0;
}

int func_90(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return func_95(35, iParam0);
}

int func_91(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1099293->f_1;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 26;
	}
	if (&Global_1273882->f_22[iParam0])
	{
		return ((*Global_1097609)[iParam0 /*51*/])->f_1;
	}
	return 26;
}

bool func_92(int iParam0)
{
	if (func_96(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1273882->f_10, iParam0) != 1)
		{
			func_97(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1273882->f_10, iParam0) == 1;
}

int func_93(int iParam0, var uParam1)
{
	vector3 vVar0;
	int iVar3;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	if (!func_98(iParam0, &vVar0))
	{
		return 0;
	}
	if (func_99(vVar0))
	{
		return 0;
	}
	iVar3 = TASK::_0xF533D68FF970D190(vVar0, 1579036847, 5.5f, 0, 0);
	if (TASK::_0x841475AC96E794D1(iVar3))
	{
		*uParam1 = iVar3;
		return 1;
	}
	return 0;
}

int func_94(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_77(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

int func_95(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_100(&(Global_1099293->f_4), iVar0, 5);
	}
	if (iParam1 == func_101())
	{
		return func_100(&(Global_1099293->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1273882->f_22[iParam1])
	{
		return func_100(&(((*Global_1097609)[iParam1 /*51*/])->f_4), iVar0, 5);
	}
	return 0;
}

int func_96(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070355->f_26832), iParam0))
	{
		return 1;
	}
	return 0;
}

void func_97(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_16 != 0 || Global_1572887->f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (!&Global_1273882->f_22[iVar0])
	{
		func_102(iParam0);
		return;
	}
	if (&Global_1070355->f_19683.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_103(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1070355->f_19683.f_1[iVar0 /*8*/] = 1;
}

int func_98(int iParam0, var uParam1)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	*uParam1 = { ((*Global_1126840)[iVar0 /*83*/])->f_38.f_8 };
	return 1;
}

int func_99(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_100(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_101()
{
	return Global_1099293->f_339;
}

void func_102(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_16 != 0 || Global_1572887->f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (&Global_1070355->f_19683.f_1[iVar0 /*8*/] == 0)
	{
		return;
	}
	func_103(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1070355->f_19683.f_1[iVar0 /*8*/] = 0;
}

void func_103(int iParam0)
{
	if ((Global_1070355->f_19683.f_1[iParam0 /*8*/])->f_1 != 0)
	{
		(Global_1070355->f_19683.f_1[iParam0 /*8*/])->f_2 = 0;
		(Global_1070355->f_19683.f_1[iParam0 /*8*/])->f_1 = 0;
	}
}

