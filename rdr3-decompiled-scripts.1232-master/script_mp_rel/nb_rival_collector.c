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
	struct<8> Local_13 = { 0, 0, 0, 0, 0, 0, -1, 0 } ;
	var uLocal_21 = 0;
	var uLocal_22 = 2;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	struct<2> Local_25[32];
	struct<19> Local_90 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_109 = 0;
	var uLocal_110 = 2;
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
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = -1;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 1097859072;
	var uLocal_135 = 1000;
	var uLocal_136 = 500;
	var uLocal_137 = 1067450368;
	var uLocal_138 = 5000;
	var uLocal_139 = 42;
	var uLocal_140 = 1103626240;
	var uLocal_141 = 1077936128;
	var uLocal_142 = 1106247680;
	var uLocal_143 = 1103101952;
	var uLocal_144 = 1109393408;
	var uLocal_145 = 1097859072;
	var uLocal_146 = 1103626240;
	var uLocal_147 = 1061997773;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	float fLocal_151 = 0f;
	float fLocal_152 = 0f;
	var uLocal_153 = 0;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_151 = 1f;
	fLocal_152 = 1f;
	iVar0 = ScriptParam_0;
	func_1(iVar0);
	func_2(ScriptParam_0);
	while (!func_3())
	{
		func_4();
		BUILTIN::WAIT(0);
	}
	func_5();
	func_6();
}

void func_1(int iParam0)
{
	func_7(32, iParam0);
	func_8();
	func_9();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_13, 12, 40);
	func_10(NETWORK::_0xBA24095EA96DFE17(&Local_13), 12, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_25, 65, 41);
	func_11(NETWORK::_0x690806BC83BC8CA2(Local_25[0 /*2*/]), 65, "m_clientData");
	func_12(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
}

void func_2(struct<5> Param0)
{
	if (Local_13 == 6)
	{
		return;
	}
	func_13(Param0);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_14();
		func_15();
	}
}

int func_3()
{
	if (func_16(0, 0))
	{
		return 1;
	}
	else if (func_17(Local_90.f_9, 0, 1))
	{
		return 1;
	}
	else if (!func_18())
	{
		return 1;
	}
	else if (!func_19(Local_90.f_12))
	{
		return 1;
	}
	else if (!func_21(func_20(Local_90.f_12), Local_90.f_9))
	{
		return 1;
	}
	else if (Local_90.f_8 == 6)
	{
		return 1;
	}
	return 0;
}

void func_4()
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_22();
	}
	func_23();
}

void func_5()
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_24();
		func_25();
	}
	func_26();
	func_27();
}

void func_6()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_7(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_6();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
}

int func_8()
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
			func_6();
		}
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
			{
				case 0:
					break;
				case 1:
					func_6();
					break;
				case 2:
					func_6();
					break;
				case 4:
					func_6();
					break;
				case 3:
					func_6();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_6();
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_6();
		}
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			func_6();
		}
		if (func_28() == 0)
		{
			if (func_29())
			{
				func_6();
			}
		}
		BUILTIN::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_6();
	}
	return 1;
}

void func_9()
{
}

int func_10(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

int func_11(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_12(bool bParam0)
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
					func_6();
					break;
				case 2:
					func_6();
					break;
				case 4:
					func_6();
					break;
				case 3:
					func_6();
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
			func_6();
			return;
		}
		BUILTIN::WAIT(0);
	}
}

void func_13(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	struct<12> Var0;
	int iVar17;
	bool bVar18;
	int iVar19;

	Var0.f_10 = 1106247680;
	iVar17 = 255;
	MISC::_COPY_MEMORY(&Local_90, &uParam0, 5);
	iVar19 = func_30(&bVar18, Local_90.f_1, Local_90.f_2);
	if (bVar18 || iVar19 == -1)
	{
		return;
	}
	Local_90.f_12 = iVar19;
	iVar17 = (Global_1184672->f_231.f_1066[iVar19 /*17*/])->f_5;
	func_31(&Var0, Local_90.f_1, Local_90.f_2, Local_90.f_3, iVar17);
	Local_90.f_9 = { func_32(Var0.f_5, 8) };
	Local_90.f_14 = Var0.f_5;
	Local_90.f_15 = { Var0.f_11 };
	func_33();
	func_34();
}

void func_14()
{
	func_35();
}

void func_15()
{
}

int func_16(bool bParam0, bool bParam1)
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

int func_17(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265331->f_124445.f_134 & 8 != 0)
	{
		Global_1070355->f_26837 = 1;
		return 1;
	}
	if (func_36(*Global_1051163) && !func_21(*Global_1051163, Param0))
	{
		Global_1070355->f_26837 = 2;
		return 1;
	}
	if (iParam2 != 0 && func_37(iParam2))
	{
		return 1;
	}
	if (iParam3 != 0 && func_38(iParam3, 255))
	{
		Global_1070355->f_26837 = 4;
		return 1;
	}
	if (Global_262996[&Global_1273882 /*70*/] > 2)
	{
		Global_1070355->f_26837 = 5;
		return 1;
	}
	if (&Global_262155 >= 1)
	{
		Global_1070355->f_26837 = 6;
		return 1;
	}
	if (func_39())
	{
		Global_1070355->f_26837 = 7;
		return 1;
	}
	if (Global_1572887->f_7 & 1 != 0)
	{
		if (!func_36(*Global_1051163))
		{
			Global_1070355->f_26837 = 8;
			return 1;
		}
	}
	if (Global_265331->f_124602 != 0 && SCRIPTS::_DOES_THREAD_EXIST(Global_265331->f_124602))
	{
		Global_1070355->f_26837 = 9;
		return 1;
	}
	Global_1070355->f_26837 = 0;
	return 0;
}

int func_18()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return 1;
	}
	return 0;
}

bool func_19(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 71);
}

struct<2> func_20(int iParam0)
{
	return (Global_1196787->f_1[iParam0 /*10*/])->f_4;
}

bool func_21(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

void func_22()
{
	if (Local_13 <= 5)
	{
		func_40();
	}
	switch (Local_13)
	{
		case 0:
			func_41();
			break;
		case 1:
			func_42();
			break;
		case 2:
			func_43();
			break;
		case 3:
			func_44();
			break;
		case 4:
			func_45();
			break;
		case 5:
			func_46();
			break;
	}
}

void func_23()
{
	func_47();
	if (Local_90.f_8 <= 5)
	{
		func_48();
	}
	switch (Local_90.f_8)
	{
		case 0:
			func_49();
			break;
		case 1:
			func_50();
			break;
		case 2:
			func_51();
			break;
		case 3:
			func_52();
			break;
		case 4:
			func_53();
			break;
		case 5:
			func_54();
			break;
	}
}

void func_24()
{
}

void func_25()
{
	if (func_55())
	{
		if (VOLUME::_0xF6A8A652A6B186CD(Local_13.f_3.f_1))
		{
			VOLUME::_0xFDFECC6EE4491E11(Local_13.f_3.f_1);
		}
	}
	func_56();
}

void func_26()
{
}

void func_27()
{
	if (Local_90.f_12 != -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1)
		{
			func_57(Local_90.f_12, 4);
		}
	}
	func_58();
	if (func_59(32))
	{
		func_60(Local_13.f_6);
	}
	func_61();
}

int func_28()
{
	return Global_1572887->f_13;
}

bool func_29()
{
	return Global_1051202->f_8;
}

int func_30(var uParam0, int iParam1, int iParam2)
{
	struct<10> Var0;
	struct<15> Var10;
	int iVar25;
	struct<17> Var26;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_6.f_1 = -1;
	Var0.f_9 = 2;
	Var10 = 2;
	Var10.f_1 = -1;
	Var10.f_5 = -1;
	Var10.f_5.f_1 = -1;
	Var10.f_5.f_3 = -1;
	Var10.f_5.f_4 = -1;
	Var10.f_5.f_5 = -1;
	Var10.f_5.f_6 = -1;
	Var10.f_5.f_6.f_1 = -1;
	Var10.f_5.f_9 = 2;
	Var26.f_10 = 1106247680;
	func_31(&Var26, iParam1, iParam2, -1, 255);
	func_62(&Var0, Var26);
	iVar25 = func_63(&Var0);
	if (func_19(iVar25))
	{
		Var10 = { func_64(iVar25) };
		if (Var10 == 2)
		{
			return iVar25;
		}
		else
		{
			*uParam0 = 1;
			return -1;
		}
	}
	return -1;
}

void func_31(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	struct<11> Var0;
	int iVar17;

	Var0.f_10 = 1106247680;
	MISC::_COPY_MEMORY(iParam0, &Var0, 17);
	if (iParam4 == 255)
	{
		iParam4 = PLAYER::PLAYER_ID();
	}
	switch (iParam1)
	{
		case 0:
			*iParam0 = 0;
			iParam0->f_1 = 0;
			iParam0->f_2 = 0;
			break;
		case 1:
			iParam0->f_6 = 1;
			*iParam0 = 10;
			iParam0->f_1 = 4;
			iParam0->f_2 = 7;
			func_65(iParam0, iParam2);
			switch (iParam2)
			{
				case 0:
					iParam0->f_5 = -1808627090;
					iParam0->f_11 = { 2150.374f, 1728.215f, 125.2313f };
					break;
				case 1:
					iParam0->f_5 = -1563711584;
					iParam0->f_11 = { 2179.106f, -25.3714f, 51.3658f };
					break;
				case 2:
					iParam0->f_5 = -717510681;
					iParam0->f_11 = { -1055.963f, -794.308f, 59.2567f };
					break;
				case 3:
					iParam0->f_5 = -2044065371;
					iParam0->f_11 = { -1158.078f, -155.114f, 88.889f };
					break;
				case 4:
					iParam0->f_5 = -1209537248;
					iParam0->f_11 = { -1370.712f, -515.7384f, 125.267f };
					break;
				case 5:
					iParam0->f_5 = 1714342319;
					iParam0->f_11 = { -1029.465f, -492.4087f, 101.0615f };
					break;
				case 6:
					iParam0->f_5 = 1269971654;
					iParam0->f_11 = { -319.5499f, 203.8464f, 62.1121f };
					break;
				case 7:
					iParam0->f_5 = 720927063;
					iParam0->f_11 = { -513.8f, 345.2f, 49.8945f };
					break;
				case 8:
					iParam0->f_5 = 1499128142;
					iParam0->f_11 = { -1234.665f, -1371.778f, 80.796f };
					break;
				case 9:
					iParam0->f_5 = -1539691586;
					iParam0->f_11 = { -1525.164f, 1722.86f, 239.152f };
					break;
			}
			break;
		case 2:
			iParam0->f_6 = 1;
			*iParam0 = 20;
			iParam0->f_1 = 2;
			iParam0->f_2 = 1;
			func_66(iParam0);
			switch (iParam2)
			{
				case 0:
					func_67(iParam0);
					iParam0->f_5 = 277430601;
					iParam0->f_11 = { -1925.343f, -2119.336f, 52.16934f };
					break;
				case 1:
					func_67(iParam0);
					iParam0->f_5 = 1659133778;
					iParam0->f_11 = { 136.298f, 35.34337f, 101.2795f };
					break;
				case 2:
					func_67(iParam0);
					iParam0->f_5 = 1296650927;
					iParam0->f_11 = { -910.7408f, 860.8453f, 134.6651f };
					break;
				case 3:
					func_67(iParam0);
					iParam0->f_5 = 2115437634;
					iParam0->f_11 = { 2788.779f, 1077.284f, 57.99089f };
					break;
				case 4:
					func_67(iParam0);
					iParam0->f_5 = 1098622970;
					iParam0->f_11 = { 1751.914f, -1117.739f, 40.70011f };
					break;
				case 5:
					func_67(iParam0);
					iParam0->f_5 = 393263596;
					iParam0->f_11 = { 1290.432f, -836.7289f, 77.47561f };
					break;
				case 6:
					func_67(iParam0);
					iParam0->f_5 = 189453630;
					iParam0->f_11 = { 308.1141f, 1187.807f, 180.1746f };
					break;
				case 7:
					func_67(iParam0);
					iParam0->f_5 = -98921343;
					iParam0->f_11 = { -1779.538f, -235.3894f, 181.2029f };
					break;
				case 8:
					func_67(iParam0);
					iParam0->f_5 = 6025033;
					iParam0->f_11 = { -1290.399f, -1179.199f, 72.33453f };
					break;
				case 9:
					func_67(iParam0);
					iParam0->f_5 = -1060299979;
					iParam0->f_11 = { -2306.89f, -1546.208f, 152.0187f };
					break;
				case 10:
					func_67(iParam0);
					iParam0->f_5 = 682088681;
					iParam0->f_11 = { -2724.458f, -2521.524f, 64.76124f };
					break;
				case 11:
					func_67(iParam0);
					iParam0->f_5 = 1705841922;
					iParam0->f_11 = { -4461.883f, -3271.474f, 14.54459f };
					break;
				case 12:
					func_67(iParam0);
					iParam0->f_5 = -301205165;
					iParam0->f_11 = { -4631.054f, -2738.483f, -12.13559f };
					break;
				case 13:
					func_67(iParam0);
					iParam0->f_5 = 1906160715;
					iParam0->f_11 = { -5678.259f, -3182.939f, -22.66476f };
					break;
				case 14:
					func_67(iParam0);
					iParam0->f_5 = -1129906020;
					iParam0->f_11 = { -1688.868f, -2272.091f, 44.12061f };
					break;
				case 15:
					func_67(iParam0);
					iParam0->f_5 = 1592980994;
					iParam0->f_11 = { -1621.917f, 1628.208f, 235.9645f };
					break;
				case 16:
					func_67(iParam0);
					iParam0->f_5 = 686459378;
					iParam0->f_11 = { 420.3633f, 2020.91f, 230.4423f };
					break;
				case 17:
					func_67(iParam0);
					iParam0->f_5 = -259262381;
					iParam0->f_11 = { -517.4607f, 510.5349f, 102.2307f };
					break;
				case 18:
					func_67(iParam0);
					iParam0->f_5 = 1289806844;
					iParam0->f_11 = { 1775.601f, 546.3866f, 106.6334f };
					break;
				case 19:
					func_67(iParam0);
					iParam0->f_5 = 347656238;
					iParam0->f_11 = { 1612.415f, -1715.397f, 52.91364f };
					break;
			}
			break;
		case 3:
			iParam0->f_6 = 1;
			*iParam0 = 21;
			iParam0->f_1 = 8;
			iParam0->f_2 = 1;
			func_66(iParam0);
			switch (iParam2)
			{
				case 0:
					func_68(iParam0, 2);
					func_68(iParam0, 3);
					func_68(iParam0, 5);
					iParam0->f_5 = 1454566440;
					iParam0->f_11 = { 2252.035f, 1342.706f, 84.5573f };
					break;
				case 1:
					func_68(iParam0, 2);
					func_68(iParam0, 3);
					func_68(iParam0, 5);
					iParam0->f_5 = 1141360338;
					iParam0->f_11 = { 2280.7f, 1608.79f, 84.32f };
					break;
				case 2:
					func_68(iParam0, 0);
					func_68(iParam0, 1);
					func_68(iParam0, 2);
					func_68(iParam0, 3);
					func_68(iParam0, 5);
					iParam0->f_5 = 844768119;
					iParam0->f_11 = { 2438.612f, 960.3168f, 73.0963f };
					break;
				case 3:
					func_68(iParam0, 0);
					func_68(iParam0, 2);
					func_68(iParam0, 3);
					func_68(iParam0, 4);
					func_68(iParam0, 5);
					func_68(iParam0, 7);
					iParam0->f_5 = -1601993562;
					iParam0->f_11 = { 1130.541f, 575.7938f, 86.66257f };
					break;
				case 4:
					func_68(iParam0, 0);
					func_68(iParam0, 2);
					func_68(iParam0, 3);
					func_68(iParam0, 5);
					func_68(iParam0, 7);
					iParam0->f_5 = -901588956;
					iParam0->f_11 = { -754.3893f, -399.1133f, 40.84306f };
					break;
				case 5:
					func_68(iParam0, 0);
					func_68(iParam0, 2);
					func_68(iParam0, 3);
					func_68(iParam0, 5);
					func_68(iParam0, 7);
					iParam0->f_5 = 2129019244;
					iParam0->f_11 = { -410.6756f, -63.938f, 40.7762f };
					break;
				case 6:
					func_68(iParam0, 0);
					func_68(iParam0, 2);
					func_68(iParam0, 4);
					func_68(iParam0, 5);
					func_68(iParam0, 6);
					iParam0->f_5 = 1227099802;
					iParam0->f_11 = { -2085.777f, -161.9067f, 208.0633f };
					break;
				case 7:
					func_68(iParam0, 0);
					func_68(iParam0, 2);
					func_68(iParam0, 4);
					func_68(iParam0, 5);
					func_68(iParam0, 6);
					iParam0->f_5 = -940471213;
					iParam0->f_11 = { -1678.304f, -517.8369f, 140.867f };
					break;
				case 8:
					func_68(iParam0, 0);
					func_68(iParam0, 2);
					func_68(iParam0, 4);
					func_68(iParam0, 5);
					func_68(iParam0, 6);
					iParam0->f_5 = -700569364;
					iParam0->f_11 = { -2624.881f, -339.7662f, 141.8102f };
					break;
				case 9:
					func_68(iParam0, 0);
					func_68(iParam0, 1);
					iParam0->f_5 = 412376369;
					iParam0->f_11 = { -926.5729f, -924.4639f, 41.1771f };
					break;
				case 10:
					func_68(iParam0, 0);
					func_68(iParam0, 2);
					func_68(iParam0, 5);
					func_68(iParam0, 7);
					iParam0->f_5 = -364052317;
					iParam0->f_11 = { -722.9517f, -1718.81f, 41.41f };
					break;
				case 11:
					func_68(iParam0, 0);
					func_68(iParam0, 1);
					iParam0->f_5 = -989186530;
					iParam0->f_11 = { -1069.18f, -1919.616f, 42.3447f };
					break;
				case 12:
					func_68(iParam0, 0);
					func_68(iParam0, 2);
					func_68(iParam0, 3);
					func_68(iParam0, 4);
					func_68(iParam0, 5);
					func_68(iParam0, 6);
					iParam0->f_5 = 333858683;
					iParam0->f_11 = { 1673.672f, 1440.046f, 146.0849f };
					break;
				case 13:
					func_68(iParam0, 0);
					func_68(iParam0, 1);
					iParam0->f_5 = -39511303;
					iParam0->f_11 = { 1562.434f, 1445.237f, 145.2842f };
					break;
				case 14:
					func_68(iParam0, 3);
					func_68(iParam0, 4);
					func_68(iParam0, 5);
					func_68(iParam0, 6);
					iParam0->f_5 = 813662381;
					iParam0->f_11 = { 1244.927f, 1177.251f, 148.8856f };
					break;
				case 15:
					func_68(iParam0, 2);
					func_68(iParam0, 3);
					func_68(iParam0, 5);
					func_68(iParam0, 7);
					iParam0->f_5 = -1114006686;
					iParam0->f_11 = { 1926.703f, -362.3477f, 42.4864f };
					break;
				case 16:
					func_68(iParam0, 0);
					func_68(iParam0, 1);
					func_68(iParam0, 3);
					func_68(iParam0, 5);
					func_68(iParam0, 7);
					iParam0->f_5 = 1049238845;
					iParam0->f_11 = { 2192.489f, -318.3198f, 40.7232f };
					break;
				case 17:
					func_68(iParam0, 0);
					func_68(iParam0, 1);
					func_68(iParam0, 3);
					func_68(iParam0, 5);
					func_68(iParam0, 7);
					iParam0->f_5 = 1363886783;
					iParam0->f_11 = { 2408.447f, -490.4562f, 40.9243f };
					break;
				case 18:
					func_68(iParam0, 0);
					func_68(iParam0, 1);
					func_68(iParam0, 2);
					func_68(iParam0, 3);
					func_68(iParam0, 5);
					iParam0->f_5 = -1215674354;
					iParam0->f_11 = { -3243.502f, -3187.141f, -9.3137f };
					break;
				case 19:
					func_68(iParam0, 0);
					func_68(iParam0, 1);
					iParam0->f_5 = 1902132155;
					iParam0->f_11 = { -1745.01f, -2929.141f, -12.3355f };
					break;
				case 20:
					func_68(iParam0, 0);
					func_68(iParam0, 1);
					func_68(iParam0, 2);
					func_68(iParam0, 3);
					func_68(iParam0, 5);
					iParam0->f_5 = 1661312774;
					iParam0->f_11 = { -1735.07f, -2378.355f, 41.289f };
					break;
			}
			break;
		case 4:
			iParam0->f_6 = 1;
			*iParam0 = 11;
			iParam0->f_1 = 1;
			iParam0->f_2 = 2;
			func_66(iParam0);
			iParam0->f_15 = -2090512547;
			switch (iParam2)
			{
				case 0:
					func_67(iParam0);
					iParam0->f_5 = 1382777618;
					iParam0->f_11 = { -228.7198f, 824.1839f, 123.3019f };
					break;
				case 1:
					func_67(iParam0);
					iParam0->f_5 = -2000681184;
					iParam0->f_11 = { 1274.578f, -1218.286f, 80.6496f };
					break;
				case 2:
					func_67(iParam0);
					iParam0->f_5 = 886884092;
					iParam0->f_11 = { -954.4733f, -1203.246f, 54.5241f };
					break;
				case 3:
					func_67(iParam0);
					iParam0->f_5 = -1277120723;
					iParam0->f_11 = { -5442.537f, -2904.509f, -0.0668f };
					break;
				case 4:
					func_67(iParam0);
					iParam0->f_5 = 1577436816;
					iParam0->f_11 = { -4438.908f, -2693.073f, -12.033f };
					break;
				case 5:
					func_67(iParam0);
					iParam0->f_5 = -234749781;
					iParam0->f_11 = { -3339.601f, -2869.283f, -6.9507f };
					break;
				case 6:
					func_67(iParam0);
					iParam0->f_5 = -1607623039;
					iParam0->f_11 = { 1396.14f, -643.1758f, 70.4818f };
					break;
				case 7:
					func_67(iParam0);
					iParam0->f_5 = -1943295936;
					iParam0->f_11 = { 1735.865f, -422.7769f, 47.1349f };
					break;
				case 8:
					func_67(iParam0);
					iParam0->f_5 = -397730168;
					iParam0->f_11 = { 1978.501f, -1902.647f, 41.0487f };
					break;
				case 9:
					func_67(iParam0);
					iParam0->f_5 = -392659534;
					iParam0->f_11 = { 2757.999f, -1078.666f, 45.8905f };
					break;
				case 10:
					func_67(iParam0);
					iParam0->f_5 = 146267878;
					iParam0->f_11 = { -1762.115f, -237.9833f, 181.9701f };
					break;
			}
			break;
		case 12:
			iParam0->f_6 = 1;
			*iParam0 = 15;
			iParam0->f_1 = 3;
			iParam0->f_2 = 1;
			func_66(iParam0);
			switch (iParam2)
			{
				case 0:
					func_67(iParam0);
					iParam0->f_5 = 1247886914;
					iParam0->f_11 = { 2777.227f, 463.4025f, 65.2501f };
					break;
				case 1:
					func_67(iParam0);
					iParam0->f_5 = 1926100410;
					iParam0->f_11 = { 1428.817f, -1812.995f, 57.37384f };
					break;
				case 2:
					func_67(iParam0);
					iParam0->f_5 = 603340011;
					iParam0->f_11 = { 2578.893f, -852.3694f, 41.3078f };
					break;
				case 3:
					func_67(iParam0);
					iParam0->f_5 = -1253915394;
					iParam0->f_11 = { 2798.119f, 1432.187f, 77.71185f };
					break;
				case 4:
					func_67(iParam0);
					iParam0->f_5 = 1281783573;
					iParam0->f_11 = { 1243.455f, 526.5765f, 87.43867f };
					break;
				case 5:
					func_67(iParam0);
					iParam0->f_5 = -1384936716;
					iParam0->f_11 = { -28.69774f, 1111.23f, 167.9945f };
					break;
				case 6:
					func_67(iParam0);
					iParam0->f_5 = 636669604;
					iParam0->f_11 = { -546.6091f, -298.2057f, 52.56811f };
					break;
				case 7:
					func_67(iParam0);
					iParam0->f_5 = 1410575087;
					iParam0->f_11 = { -1403.688f, 383.7506f, 102.2472f };
					break;
				case 8:
					func_67(iParam0);
					iParam0->f_5 = -736919321;
					iParam0->f_11 = { -1510.116f, -883.8221f, 88.72778f };
					break;
				case 9:
					func_67(iParam0);
					iParam0->f_5 = 1755496218;
					iParam0->f_11 = { -1459.752f, -1915.602f, 50.93545f };
					break;
				case 10:
					func_67(iParam0);
					iParam0->f_5 = -1810033095;
					iParam0->f_11 = { -2470.018f, -2426.993f, 59.1458f };
					break;
				case 11:
					func_67(iParam0);
					iParam0->f_5 = 99707271;
					iParam0->f_11 = { -3092.935f, -3166.527f, -1.36638f };
					break;
				case 12:
					func_67(iParam0);
					iParam0->f_5 = 2145033839;
					iParam0->f_11 = { -3685.624f, -2769.247f, -15.14988f };
					break;
				case 13:
					func_67(iParam0);
					iParam0->f_5 = -994111457;
					iParam0->f_11 = { -4668.993f, -3706.819f, 12.54352f };
					break;
				case 14:
					func_67(iParam0);
					iParam0->f_5 = 702836385;
					iParam0->f_11 = { -5194.483f, -2883.913f, 2.32447f };
					break;
			}
			break;
		case 6:
			iParam0->f_6 = 1;
			*iParam0 = 16;
			iParam0->f_1 = 2;
			iParam0->f_2 = 8;
			switch (iParam3)
			{
				case 0:
					func_69(iParam0, 0);
					func_69(iParam0, 1);
					func_69(iParam0, 4);
					func_69(iParam0, 5);
					break;
				case 1:
					func_69(iParam0, 2);
					func_69(iParam0, 3);
					func_69(iParam0, 6);
					func_69(iParam0, 7);
					func_70(iParam0, 2);
					break;
			}
			switch (iParam2)
			{
				case 0:
					func_68(iParam0, 0);
					iParam0->f_5 = -88606612;
					iParam0->f_11 = { 498.9236f, 1191.276f, 179.5016f };
					break;
				case 1:
					func_68(iParam0, 1);
					iParam0->f_5 = -1507537085;
					iParam0->f_11 = { 114.87f, 1097.69f, 177.97f };
					break;
				case 2:
					func_68(iParam0, 0);
					iParam0->f_5 = 150331424;
					iParam0->f_11 = { 2271.753f, -440.5277f, 40.82026f };
					break;
				case 3:
					func_68(iParam0, 1);
					iParam0->f_5 = -74168995;
					iParam0->f_11 = { 2000.58f, -499.0656f, 41.0245f };
					break;
				case 4:
					func_68(iParam0, 0);
					iParam0->f_5 = -1303456769;
					iParam0->f_11 = { 2299.81f, -898.4015f, 41.04434f };
					break;
				case 5:
					func_68(iParam0, 1);
					iParam0->f_5 = 2080696176;
					iParam0->f_11 = { 2369.292f, -673.8396f, 41.36789f };
					break;
				case 6:
					func_68(iParam0, 0);
					iParam0->f_5 = -801880493;
					iParam0->f_11 = { 1531.33f, 1578.837f, 147.4066f };
					break;
				case 7:
					func_68(iParam0, 1);
					iParam0->f_5 = -2098877513;
					iParam0->f_11 = { 945.3031f, 1142.541f, 147.4809f };
					break;
				case 8:
					func_68(iParam0, 0);
					iParam0->f_5 = -985131289;
					iParam0->f_11 = { -1126.469f, 815.3829f, 117.6536f };
					break;
				case 9:
					func_68(iParam0, 1);
					iParam0->f_5 = 171385032;
					iParam0->f_11 = { -2063.813f, 935.3212f, 147.0808f };
					break;
				case 10:
					func_68(iParam0, 0);
					iParam0->f_5 = -690365399;
					iParam0->f_11 = { -1589.688f, -1425.319f, 80.34965f };
					break;
				case 11:
					func_68(iParam0, 1);
					iParam0->f_5 = -393773180;
					iParam0->f_11 = { -910.3301f, -1815.748f, 61.71241f };
					break;
				case 12:
					func_68(iParam0, 0);
					iParam0->f_5 = 1783045643;
					iParam0->f_11 = { -2690.104f, -2892.627f, 64.73759f };
					break;
				case 13:
					func_68(iParam0, 1);
					iParam0->f_5 = -1841828372;
					iParam0->f_11 = { -2914.53f, -2558.967f, 61.66708f };
					break;
				case 14:
					func_68(iParam0, 0);
					iParam0->f_5 = -1926357119;
					iParam0->f_11 = { -4545.762f, -3673.932f, 17.87756f };
					break;
				case 15:
					func_68(iParam0, 1);
					iParam0->f_5 = -1904926193;
					iParam0->f_11 = { -4720.841f, -3357f, 8.61745f };
					break;
			}
			break;
		case 7:
			iParam0->f_6 = 1;
			*iParam0 = 10;
			iParam0->f_1 = 12;
			iParam0->f_2 = 3;
			switch (iParam2)
			{
				case 0:
					func_68(iParam0, 0);
					func_68(iParam0, 1);
					func_68(iParam0, 2);
					func_68(iParam0, 9);
					func_68(iParam0, 10);
					func_68(iParam0, 11);
					func_71(iParam0, iParam3);
					iParam0->f_5 = 666420762;
					iParam0->f_11 = { 468.6932f, 60.0849f, 134.4816f };
					break;
				case 1:
					func_68(iParam0, 1);
					func_68(iParam0, 2);
					func_68(iParam0, 8);
					func_68(iParam0, 9);
					func_68(iParam0, 10);
					func_68(iParam0, 11);
					func_71(iParam0, iParam3);
					iParam0->f_5 = 1145423923;
					iParam0->f_11 = { -408.7124f, 154.0742f, 40.84526f };
					break;
				case 2:
					func_68(iParam0, 1);
					func_68(iParam0, 2);
					func_68(iParam0, 3);
					func_68(iParam0, 4);
					func_68(iParam0, 5);
					func_68(iParam0, 6);
					func_68(iParam0, 9);
					func_68(iParam0, 10);
					func_68(iParam0, 11);
					func_71(iParam0, iParam3);
					iParam0->f_5 = -1176575305;
					iParam0->f_11 = { -1929.655f, -1348.338f, 105.84f };
					break;
				case 3:
					func_68(iParam0, 0);
					func_68(iParam0, 1);
					func_68(iParam0, 2);
					func_68(iParam0, 9);
					func_68(iParam0, 10);
					func_68(iParam0, 11);
					func_71(iParam0, iParam3);
					iParam0->f_5 = -888961792;
					iParam0->f_11 = { -2003.943f, -2158.135f, 54.2301f };
					break;
				case 4:
					func_68(iParam0, 0);
					func_68(iParam0, 1);
					func_68(iParam0, 2);
					func_68(iParam0, 9);
					func_68(iParam0, 10);
					func_68(iParam0, 11);
					func_71(iParam0, iParam3);
					iParam0->f_5 = -1145898130;
					iParam0->f_11 = { -1272.226f, 97.47642f, 70.53004f };
					break;
				case 5:
					func_68(iParam0, 1);
					func_68(iParam0, 2);
					func_68(iParam0, 3);
					func_68(iParam0, 4);
					func_68(iParam0, 7);
					func_68(iParam0, 8);
					func_68(iParam0, 9);
					func_68(iParam0, 10);
					func_68(iParam0, 11);
					func_71(iParam0, iParam3);
					iParam0->f_5 = -264936334;
					iParam0->f_11 = { -2350.861f, -359.485f, 143.7474f };
					break;
				case 6:
					func_68(iParam0, 1);
					func_68(iParam0, 2);
					func_68(iParam0, 3);
					func_68(iParam0, 6);
					func_68(iParam0, 7);
					func_68(iParam0, 9);
					func_68(iParam0, 10);
					func_68(iParam0, 11);
					func_71(iParam0, iParam3);
					iParam0->f_5 = -562839313;
					iParam0->f_11 = { -1736.757f, 306.2781f, 108.1355f };
					break;
				case 7:
					func_68(iParam0, 1);
					func_68(iParam0, 2);
					func_68(iParam0, 4);
					func_68(iParam0, 5);
					func_68(iParam0, 6);
					func_68(iParam0, 9);
					func_68(iParam0, 10);
					func_68(iParam0, 11);
					func_71(iParam0, iParam3);
					iParam0->f_5 = -819926700;
					iParam0->f_11 = { -4964.499f, -3399.889f, 7.97322f };
					break;
				case 8:
					func_68(iParam0, 0);
					func_68(iParam0, 1);
					func_68(iParam0, 2);
					func_68(iParam0, 9);
					func_68(iParam0, 10);
					func_68(iParam0, 11);
					func_71(iParam0, iParam3);
					iParam0->f_5 = -100890882;
					iParam0->f_11 = { -2192.805f, -2778.977f, 69.01174f };
					break;
				case 9:
					func_68(iParam0, 1);
					func_68(iParam0, 2);
					func_68(iParam0, 5);
					func_68(iParam0, 9);
					func_68(iParam0, 10);
					func_68(iParam0, 11);
					func_71(iParam0, iParam3);
					iParam0->f_5 = 373607510;
					iParam0->f_11 = { -4603.166f, -2701.434f, -10.12116f };
					break;
			}
			break;
		case 5:
			iParam0->f_6 = 1;
			*iParam0 = 21;
			iParam0->f_1 = 1;
			iParam0->f_2 = 1;
			func_66(iParam0);
			switch (iParam2)
			{
				case 0:
					func_67(iParam0);
					iParam0->f_5 = -1562903685;
					iParam0->f_11 = { 1452.25f, -1695.116f, 64.9668f };
					break;
				case 1:
					func_67(iParam0);
					iParam0->f_5 = 442262250;
					iParam0->f_11 = { 1163.55f, -324.0086f, 97.10712f };
					break;
				case 2:
					func_67(iParam0);
					iParam0->f_5 = 2113001754;
					iParam0->f_11 = { 2682.104f, 858.447f, 85.90118f };
					break;
				case 3:
					func_67(iParam0);
					iParam0->f_5 = 222101843;
					iParam0->f_11 = { 1311.333f, 1183.934f, 151.5859f };
					break;
				case 4:
					func_67(iParam0);
					iParam0->f_5 = 862535295;
					iParam0->f_11 = { 40.99253f, 1813.064f, 189.5056f };
					break;
				case 5:
					func_67(iParam0);
					iParam0->f_5 = 267494763;
					iParam0->f_11 = { 109.9411f, 1282.256f, 176.292f };
					break;
				case 6:
					func_67(iParam0);
					iParam0->f_5 = 492498900;
					iParam0->f_11 = { -1450.859f, 1686.266f, 255.2526f };
					break;
				case 7:
					func_67(iParam0);
					iParam0->f_5 = -735417347;
					iParam0->f_11 = { 66.91456f, -445.5748f, 72.15018f };
					break;
				case 8:
					func_67(iParam0);
					iParam0->f_5 = 2000289900;
					iParam0->f_11 = { -1698.036f, 380.6171f, 106.0826f };
					break;
				case 9:
					func_67(iParam0);
					iParam0->f_5 = 1820563970;
					iParam0->f_11 = { -2016.359f, -909.5917f, 84.91344f };
					break;
				case 10:
					func_67(iParam0);
					iParam0->f_5 = 1501808210;
					iParam0->f_11 = { -1362.091f, -1267.624f, 82.41972f };
					break;
				case 11:
					func_67(iParam0);
					iParam0->f_5 = -1103422576;
					iParam0->f_11 = { -2449.051f, -1457.942f, 148.705f };
					break;
				case 12:
					func_67(iParam0);
					iParam0->f_5 = -375108461;
					iParam0->f_11 = { -1559.339f, -1930.728f, 50.99157f };
					break;
				case 13:
					func_67(iParam0);
					iParam0->f_5 = 1074344160;
					iParam0->f_11 = { -1764.444f, -2717.768f, 62.81413f };
					break;
				case 14:
					func_67(iParam0);
					iParam0->f_5 = 1375567406;
					iParam0->f_11 = { -2190.544f, -2200.288f, 64.42333f };
					break;
				case 15:
					func_67(iParam0);
					iParam0->f_5 = 1695022182;
					iParam0->f_11 = { -2803.26f, -3142.291f, 5.88098f };
					break;
				case 16:
					func_67(iParam0);
					iParam0->f_5 = 1773241795;
					iParam0->f_11 = { -3175.168f, -2402.267f, 22.72451f };
					break;
				case 17:
					func_67(iParam0);
					iParam0->f_5 = 1650499101;
					iParam0->f_11 = { -4220.611f, -2690.138f, 0.65931f };
					break;
				case 18:
					func_67(iParam0);
					iParam0->f_5 = 149116609;
					iParam0->f_11 = { -4372.619f, -3274.055f, 20.26154f };
					break;
				case 19:
					func_67(iParam0);
					iParam0->f_5 = 1486166046;
					iParam0->f_11 = { -5456.922f, -3562.744f, -21.1142f };
					break;
				case 20:
					func_67(iParam0);
					iParam0->f_5 = 58739626;
					iParam0->f_11 = { -5796.222f, -2650.145f, -16.68393f };
					break;
			}
			break;
		case 11:
			iParam0->f_6 = 1;
			*iParam0 = 10;
			iParam0->f_1 = 4;
			iParam0->f_2 = 1;
			func_66(iParam0);
			func_70(iParam0, 2);
			switch (iParam2)
			{
				case 0:
					func_67(iParam0);
					iParam0->f_5 = -1657923088;
					iParam0->f_11 = { 959.0613f, 383.9384f, 111.0409f };
					break;
				case 1:
					func_67(iParam0);
					iParam0->f_5 = -1268232386;
					iParam0->f_11 = { 1465.514f, -821.0334f, 50.2372f };
					break;
				case 2:
					func_67(iParam0);
					iParam0->f_5 = 1926851120;
					iParam0->f_11 = { -1082.332f, -696.7548f, 70.5432f };
					break;
				case 3:
					func_67(iParam0);
					iParam0->f_5 = -66052340;
					iParam0->f_11 = { -1462.952f, -1929.859f, 48.4187f };
					break;
				case 4:
					func_67(iParam0);
					iParam0->f_5 = 1738334804;
					iParam0->f_11 = { -4988.295f, -3902.346f, -0.03286f };
					break;
				case 5:
					func_67(iParam0);
					iParam0->f_5 = 1009780912;
					iParam0->f_11 = { -2770.473f, -2936.506f, 64.84297f };
					break;
				case 6:
					func_67(iParam0);
					iParam0->f_5 = -1560771476;
					iParam0->f_11 = { -1209.61f, -1812.165f, 61.23543f };
					break;
				case 7:
					func_67(iParam0);
					iParam0->f_5 = 453813335;
					iParam0->f_11 = { -1706.993f, -580.9286f, 149.93f };
					break;
				case 8:
					func_67(iParam0);
					iParam0->f_5 = 786924542;
					iParam0->f_11 = { 803.0057f, -584.7925f, 79.32288f };
					break;
				case 9:
					func_67(iParam0);
					iParam0->f_5 = 1656593925;
					iParam0->f_11 = { 1778.236f, -1731.359f, 48.27552f };
					break;
			}
			break;
		case 9:
			iParam0->f_6 = 1;
			*iParam0 = 12;
			iParam0->f_1 = 4;
			iParam0->f_2 = 5;
			switch (iParam2)
			{
				case 0:
					func_72(iParam0, iParam3);
					iParam0->f_5 = 1323108111;
					iParam0->f_11 = { -1159.115f, 397.0877f, 60.4953f };
					break;
				case 1:
					func_72(iParam0, iParam3);
					iParam0->f_5 = -1505479200;
					iParam0->f_11 = { -1278.359f, 291.4224f, 76.6652f };
					break;
				case 2:
					func_72(iParam0, iParam3);
					iParam0->f_5 = -1283075997;
					iParam0->f_11 = { -1371.28f, 283.4114f, 86.0114f };
					break;
				case 3:
					func_72(iParam0, iParam3);
					iParam0->f_5 = -2100531475;
					iParam0->f_11 = { -1117.687f, 406.6783f, 55.3681f };
					break;
				case 4:
					func_72(iParam0, iParam3);
					iParam0->f_5 = 269617530;
					iParam0->f_11 = { -1288.323f, 148.5012f, 71.7864f };
					break;
				case 5:
					func_72(iParam0, iParam3);
					iParam0->f_5 = 1592829750;
					iParam0->f_11 = { -1648.447f, -114.858f, 170.0504f };
					break;
				case 6:
					func_72(iParam0, iParam3);
					iParam0->f_5 = 1817985549;
					iParam0->f_11 = { -1081.189f, -405.0457f, 97.0153f };
					break;
				case 7:
					func_72(iParam0, iParam3);
					iParam0->f_5 = 1945424739;
					iParam0->f_11 = { 206.8413f, -170.3653f, 130.5284f };
					break;
				case 8:
					func_72(iParam0, iParam3);
					iParam0->f_5 = 1787314318;
					iParam0->f_11 = { -621.2297f, 186.8452f, 41.2741f };
					break;
				case 9:
					func_72(iParam0, iParam3);
					iParam0->f_5 = 542354442;
					iParam0->f_11 = { 44.3784f, 388.2357f, 129.8287f };
					break;
				case 10:
					func_72(iParam0, iParam3);
					iParam0->f_5 = 1510776727;
					iParam0->f_11 = { 752.9834f, -58.1133f, 157.6479f };
					break;
				case 11:
					func_72(iParam0, iParam3);
					iParam0->f_5 = -2017297662;
					iParam0->f_11 = { 817.7247f, 566.3447f, 114.3761f };
					break;
			}
			break;
		case 10:
			iParam0->f_6 = 1;
			*iParam0 = 20;
			iParam0->f_1 = 1;
			iParam0->f_2 = 1;
			func_66(iParam0);
			switch (iParam2)
			{
				case 0:
					func_67(iParam0);
					iParam0->f_5 = -377638420;
					iParam0->f_11 = { -2058.13f, -2493.143f, 63.51377f };
					break;
				case 1:
					func_67(iParam0);
					iParam0->f_5 = 1308799438;
					iParam0->f_11 = { -1541.353f, -2334.611f, 43.10187f };
					break;
				case 2:
					func_67(iParam0);
					iParam0->f_5 = -1030922940;
					iParam0->f_11 = { -3456.39f, -2262.339f, 0.01624f };
					break;
				case 3:
					func_67(iParam0);
					iParam0->f_5 = 1750043358;
					iParam0->f_11 = { -3703.712f, -3594.224f, 45.18983f };
					break;
				case 4:
					func_67(iParam0);
					iParam0->f_5 = -1330609910;
					iParam0->f_11 = { -1581.551f, -1656.278f, 78.51012f };
					break;
				case 5:
					func_67(iParam0);
					iParam0->f_5 = 223942444;
					iParam0->f_11 = { -1236.292f, -1118.55f, 68.58572f };
					break;
				case 6:
					func_67(iParam0);
					iParam0->f_5 = 1067547121;
					iParam0->f_11 = { -1264.125f, -773.2117f, 91.83559f };
					break;
				case 7:
					func_67(iParam0);
					iParam0->f_5 = -450732096;
					iParam0->f_11 = { -1414.607f, -234.2123f, 99.22668f };
					break;
				case 8:
					func_67(iParam0);
					iParam0->f_5 = -1701940764;
					iParam0->f_11 = { -1721.402f, 553.6f, 112.524f };
					break;
				case 9:
					func_67(iParam0);
					iParam0->f_5 = 1584258975;
					iParam0->f_11 = { -484.7991f, -70.36918f, 42.94242f };
					break;
				case 10:
					func_67(iParam0);
					iParam0->f_5 = -98183174;
					iParam0->f_11 = { -458.5839f, -346.5686f, 80.66556f };
					break;
				case 11:
					func_67(iParam0);
					iParam0->f_5 = -90261849;
					iParam0->f_11 = { 1089.583f, 23.75282f, 88.22131f };
					break;
				case 12:
					func_67(iParam0);
					iParam0->f_5 = 754522971;
					iParam0->f_11 = { 1000.131f, 417.5909f, 107.9082f };
					break;
				case 13:
					func_67(iParam0);
					iParam0->f_5 = 974542513;
					iParam0->f_11 = { 713.7332f, 23.52884f, 152.0797f };
					break;
				case 14:
					func_67(iParam0);
					iParam0->f_5 = -790885273;
					iParam0->f_11 = { 63.77304f, 1023.487f, 201.9749f };
					break;
				case 15:
					func_67(iParam0);
					iParam0->f_5 = -1447045452;
					iParam0->f_11 = { 366.667f, 1408.665f, 175.0605f };
					break;
				case 16:
					func_67(iParam0);
					iParam0->f_5 = -586115209;
					iParam0->f_11 = { 1785.934f, 1522.009f, 155.1442f };
					break;
				case 17:
					func_67(iParam0);
					iParam0->f_5 = 224941020;
					iParam0->f_11 = { 1279.07f, 1164.678f, 149.2508f };
					break;
				case 18:
					func_67(iParam0);
					iParam0->f_5 = -1179654578;
					iParam0->f_11 = { 2106.456f, 207.6169f, 72.68985f };
					break;
				case 19:
					func_67(iParam0);
					iParam0->f_5 = 1247197458;
					iParam0->f_11 = { 2675.549f, 179.9657f, 54.14579f };
					break;
			}
			break;
		case 8:
			iParam0->f_6 = 1;
			*iParam0 = 9;
			iParam0->f_1 = 2;
			iParam0->f_2 = 1;
			func_66(iParam0);
			iParam0->f_10 = 60f;
			switch (iParam2)
			{
				case 0:
					func_67(iParam0);
					iParam0->f_5 = 974582605;
					iParam0->f_11 = { 1562.246f, -2047.412f, 47.3446f };
					break;
				case 1:
					func_67(iParam0);
					iParam0->f_5 = -964359125;
					iParam0->f_11 = { 1379.948f, -1696.249f, 66.86113f };
					break;
				case 2:
					func_67(iParam0);
					iParam0->f_5 = -700339292;
					iParam0->f_11 = { 1621.706f, -1650.367f, 56.03105f };
					break;
				case 3:
					func_67(iParam0);
					iParam0->f_5 = -470300912;
					iParam0->f_11 = { 1504.868f, -1470.025f, 71.38271f };
					break;
				case 4:
					func_67(iParam0);
					iParam0->f_5 = -241343909;
					iParam0->f_11 = { 1082.685f, -1265.978f, 67.5664f };
					break;
				case 5:
					func_67(iParam0);
					iParam0->f_5 = 1944053474;
					iParam0->f_11 = { 682.6295f, -992.2614f, 52.4207f };
					break;
				case 6:
					func_67(iParam0);
					iParam0->f_5 = -2120646059;
					iParam0->f_11 = { 707.7728f, -885.6594f, 48.26217f };
					break;
				case 7:
					func_67(iParam0);
					iParam0->f_5 = -1656440405;
					iParam0->f_11 = { 879.6264f, -537.9133f, 88.03556f };
					break;
				case 8:
					func_67(iParam0);
					iParam0->f_5 = -1422404207;
					iParam0->f_11 = { 1012.322f, -394.373f, 90.43443f };
					break;
			}
			break;
		case 13:
			iParam0->f_6 = 1;
			*iParam0 = 1;
			iParam0->f_1 = 6;
			iParam0->f_2 = 1;
			func_66(iParam0);
			func_70(iParam0, 1);
			func_70(iParam0, 4);
			func_70(iParam0, 8);
			func_70(iParam0, 16);
			switch (iParam2)
			{
				case 0:
					func_67(iParam0);
					iParam0->f_5 = -1623035253;
					iParam0->f_11 = { func_74(func_73(iParam4)) };
					break;
			}
			break;
		case 14:
			iParam0->f_6 = 1;
			*iParam0 = 10;
			iParam0->f_1 = 5;
			iParam0->f_2 = 6;
			switch (iParam2)
			{
				case 0:
					func_75(iParam0, iParam3);
					iParam0->f_5 = -1957221189;
					iParam0->f_11 = { -347.4531f, 740.8643f, 116.4549f };
					break;
				case 1:
					func_75(iParam0, iParam3);
					iParam0->f_5 = 871956008;
					iParam0->f_11 = { -360.6497f, 824.0327f, 115.4768f };
					break;
				case 2:
					func_75(iParam0, iParam3);
					iParam0->f_5 = -718829908;
					iParam0->f_11 = { 2957.225f, 524.4706f, 43.66619f };
					break;
				case 3:
					func_75(iParam0, iParam3);
					iParam0->f_5 = -478076065;
					iParam0->f_11 = { 2975.885f, 537.2245f, 42.42131f };
					break;
				case 4:
					func_75(iParam0, iParam3);
					iParam0->f_5 = 158131441;
					iParam0->f_11 = { 1444.633f, -1417.982f, 78.22246f };
					break;
				case 5:
					func_75(iParam0, iParam3);
					iParam0->f_5 = 575051428;
					iParam0->f_11 = { 1394.169f, -1422.854f, 78.97552f };
					break;
				case 6:
					func_75(iParam0, iParam3);
					iParam0->f_5 = -861587350;
					iParam0->f_11 = { 2996.145f, 1351.808f, 42.95977f };
					break;
				case 7:
					func_75(iParam0, iParam3);
					iParam0->f_5 = -616671844;
					iParam0->f_11 = { 2915.743f, 1231.952f, 43.5792f };
					break;
				case 8:
					func_75(iParam0, iParam3);
					iParam0->f_5 = -828875274;
					iParam0->f_11 = { -833.5609f, -1543.917f, 59.6274f };
					break;
				case 9:
					func_75(iParam0, iParam3);
					iParam0->f_5 = -598017669;
					iParam0->f_11 = { -1019.64f, -1138.944f, 56.39161f };
					break;
			}
			break;
		case 15:
			iParam0->f_6 = 1;
			iParam0->f_7 = 1;
			*iParam0 = 12;
			iParam0->f_1 = 2;
			iParam0->f_2 = 1;
			func_66(iParam0);
			switch (iParam2)
			{
				case 0:
					func_67(iParam0);
					iParam0->f_5 = 2136361638;
					iParam0->f_11 = { 2208.668f, -350.9536f, 41.488f };
					break;
				case 1:
					func_67(iParam0);
					iParam0->f_5 = 1948005426;
					iParam0->f_11 = { 1733.923f, -727.6727f, 40.8996f };
					break;
				case 2:
					func_67(iParam0);
					iParam0->f_5 = 462368629;
					iParam0->f_11 = { -2028.171f, 421.7315f, 123.1801f };
					break;
				case 3:
					func_67(iParam0);
					iParam0->f_5 = -172629291;
					iParam0->f_11 = { 238.8146f, 1242.903f, 185.8171f };
					break;
				case 4:
					func_67(iParam0);
					iParam0->f_5 = 1063777848;
					iParam0->f_11 = { 646.006f, 1304.928f, 193.4366f };
					break;
				case 5:
					func_67(iParam0);
					iParam0->f_5 = -267241827;
					iParam0->f_11 = { 438.9673f, 831.1111f, 145.7085f };
					break;
				case 6:
					func_67(iParam0);
					iParam0->f_5 = -1183266453;
					iParam0->f_11 = { -545.762f, 393.6189f, 87.0076f };
					break;
				case 7:
					func_67(iParam0);
					iParam0->f_5 = -877826604;
					iParam0->f_11 = { 1017.37f, 1062.322f, 158.965f };
					break;
				case 8:
					func_67(iParam0);
					iParam0->f_5 = 1527533302;
					iParam0->f_11 = { 2226.213f, -248.6621f, 42.5431f };
					break;
				case 9:
					func_67(iParam0);
					iParam0->f_5 = -865586768;
					iParam0->f_11 = { 2566.893f, -71.0977f, 49.3333f };
					break;
				case 10:
					func_67(iParam0);
					iParam0->f_5 = 294379466;
					iParam0->f_11 = { 1389.072f, -2196.696f, 48.3307f };
					break;
				case 11:
					func_67(iParam0);
					iParam0->f_5 = 452588198;
					iParam0->f_11 = { 906.9065f, -987.0414f, 56.96f };
					break;
			}
			break;
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
			switch (iParam1)
			{
				case 16:
					iParam0->f_8 = -468635158;
					break;
				case 17:
					iParam0->f_8 = 1112069699;
					break;
				case 18:
					iParam0->f_8 = 661147828;
					break;
				case 19:
					iParam0->f_8 = 899082205;
					break;
				case 20:
					iParam0->f_8 = 987333815;
					break;
				case 21:
					iParam0->f_8 = -315961129;
					break;
				case 22:
					iParam0->f_8 = -139081918;
					break;
				case 23:
					iParam0->f_8 = 1604238189;
					break;
			}
			iVar17 = func_76(iParam1);
			if (iVar17 == -1)
			{
				return;
			}
			if ((iParam1 == 22 || iParam1 == 23) || iParam1 == 21)
			{
				iParam0->f_7 = 1;
			}
			*iParam0 = func_77(iVar17);
			iParam0->f_1 = 0;
			iParam0->f_6 = 2;
			func_70(iParam0, 32);
			if (iParam2 != -1)
			{
				iParam0->f_9 = func_79(func_78(iVar17), iParam2);
				iParam0->f_15 = func_80(func_78(iVar17), iParam2);
				iParam0->f_5 = func_81(iVar17, iParam2);
				iParam0->f_11 = { func_82(iVar17, iParam2) };
			}
			break;
	}
}

struct<2> func_32(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = iParam1;
	switch (iParam1)
	{
		case 2:
			Var0.f_1 = func_84(iParam0, &(Global_1070355->f_634), func_83(iParam1));
			break;
		case 3:
			Var0.f_1 = func_84(iParam0, &(Global_1070355->f_634.f_602), func_83(iParam1));
			break;
		case 4:
			Var0.f_1 = func_84(iParam0, &(Global_1070355->f_634.f_2104), func_83(iParam1));
			break;
		case 5:
			Var0.f_1 = func_84(iParam0, &(Global_1070355->f_634.f_12606), func_83(iParam1));
			break;
		case 6:
			Var0.f_1 = func_84(iParam0, &(Global_1070355->f_634.f_12908), func_83(iParam1));
			break;
		case 7:
			Var0.f_1 = func_84(iParam0, &(Global_1070355->f_634.f_15910), func_83(iParam1));
			break;
		case 8:
			Var0.f_1 = func_84(iParam0, &(Global_1070355->f_634.f_15981), func_83(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_85();
	}
	return Var0;
}

void func_33()
{
}

void func_34()
{
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(2);
	func_86(&(Local_90.f_18.f_9));
}

void func_35()
{
}

int func_36(struct<2> Param0)
{
	if (!func_87(Param0))
	{
		return 0;
	}
	if (Param0.f_1 < 0)
	{
		return 0;
	}
	if (Param0.f_1 >= func_83(Param0))
	{
		return 0;
	}
	return 1;
}

bool func_37(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1184367->f_1 && iParam0) != 0;
}

bool func_38(int iParam0, int iParam1)
{
	if (!Global_1070355->f_3)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return false;
	}
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	return (Global_1183982[iParam1 /*12*/] && iParam0) != 0;
}

int func_39()
{
	if (&Global_1048576)
	{
		return 1;
	}
	if (Global_1572887->f_4)
	{
		return 1;
	}
	if (&Global_2883584)
	{
		return 1;
	}
	if (&Global_1048577)
	{
		return 1;
	}
	if (!func_36(*Global_1051163) && Global_1572887->f_7 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

void func_40()
{
}

void func_41()
{
	int iVar0;
	struct<11> Var1;

	iVar0 = (Global_1184672->f_231.f_1066[Local_90.f_12 /*17*/])->f_5;
	Var1.f_10 = 1106247680;
	func_31(&Var1, Local_90.f_1, Local_90.f_2, Local_90.f_3, iVar0);
	if (!func_88(&Var1, 1))
	{
		func_89(1);
		return;
	}
	Local_13.f_6 = func_73(_NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(iVar0)));
	func_90(256);
	if (func_91(Local_13.f_6))
	{
		func_92(5);
		func_89(6);
	}
	else
	{
		func_89(1);
	}
}

void func_42()
{
	struct<17> Var0;
	bool bVar17;

	Var0.f_10 = 1106247680;
	func_31(&Var0, Local_90.f_1, Local_90.f_2, -1, 255);
	if (func_88(&Var0, 1))
	{
		func_89(2);
		return;
	}
	if (func_93(Var0, &bVar17))
	{
		MISC::CLEAR_AREA(Local_90.f_15, Var0.f_10, 2442122);
		func_89(2);
	}
	else if (bVar17)
	{
		func_92(3);
		func_89(6);
	}
	if (!func_94(Local_13.f_3.f_2))
	{
		func_95(&(Local_13.f_3.f_2));
	}
	else if (func_96(Local_13.f_3.f_2) > 45000)
	{
		func_92(4);
		func_89(6);
	}
}

void func_43()
{
	if (func_97(1, 255))
	{
		if (!func_98(1))
		{
			if (func_99())
			{
				func_90(1);
			}
		}
		else
		{
			func_100();
			func_89(3);
		}
	}
}

void func_44()
{
	bool bVar0;

	if (func_97(2, 255))
	{
		if (!func_98(2))
		{
			bVar0 = true;
			if (!func_101())
			{
				bVar0 = false;
			}
			if (!func_102())
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				func_90(2);
			}
		}
		else
		{
			func_103();
			func_89(4);
		}
	}
}

void func_45()
{
	func_104();
	func_105();
	func_106();
	if (func_107() || Local_13.f_2 != 0)
	{
		func_108();
		func_89(5);
	}
}

void func_46()
{
	if (func_97(4, 255))
	{
		if (func_109())
		{
			func_90(4);
			func_89(6);
		}
	}
}

void func_47()
{
	if (!func_98(256))
	{
		return;
	}
	if (func_98(512))
	{
		if (func_59(32) && func_73(PLAYER::PLAYER_ID()) == Local_13.f_6)
		{
			func_60(Local_13.f_6);
			func_110(32);
		}
	}
	else if (!func_59(32))
	{
		if (func_73(PLAYER::PLAYER_ID()) == Local_13.f_6)
		{
			func_111(Local_13.f_6, 1, 1);
			func_112(32);
		}
	}
	else if (func_73(PLAYER::PLAYER_ID()) != Local_13.f_6)
	{
		func_60(Local_13.f_6);
		func_110(32);
	}
}

void func_48()
{
}

void func_49()
{
	if (Local_13 == 6)
	{
		func_113(6);
	}
	else if (Local_13 > 0)
	{
		func_47();
		func_113(1);
	}
}

void func_50()
{
	if (Local_13 == 6)
	{
		func_113(6);
	}
	else if (Local_13 > 1)
	{
		func_113(2);
	}
}

void func_51()
{
	bool bVar0;
	int iVar1;

	if (!func_97(1, 255))
	{
		bVar0 = true;
		if (!func_114())
		{
			bVar0 = false;
		}
		if (!func_115())
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			func_116(1);
		}
		else
		{
			iVar1 = Global_1901929->f_230.f_63;
			if (!func_94(Local_90.f_11))
			{
				func_95(&(Local_90.f_11));
			}
			if (func_96(Local_90.f_11) >= iVar1)
			{
				func_113(6);
			}
		}
	}
	else if (Local_13 > 2)
	{
		func_117(&(Local_90.f_11));
		func_118();
		func_113(3);
	}
}

void func_52()
{
	int iVar0;

	if (!func_97(2, 255))
	{
		if (func_119())
		{
			func_116(2);
		}
		else
		{
			iVar0 = Global_1901929->f_230.f_63;
			if (!func_94(Local_90.f_11))
			{
				func_95(&(Local_90.f_11));
			}
			if (func_120(Local_90.f_11) >= iVar0)
			{
				func_113(6);
			}
		}
	}
	else if (Local_13 > 3)
	{
		func_117(&(Local_90.f_11));
		func_121();
		func_122();
		func_123();
		func_124();
		func_113(4);
	}
}

void func_53()
{
	if (Local_13 >= 5)
	{
		func_125();
		func_113(5);
		return;
	}
	func_126();
	func_127();
	func_128();
	func_129();
	func_130();
	func_131();
}

void func_54()
{
	if (!func_97(4, 255))
	{
		if (func_132())
		{
			func_133();
			func_57(Local_90.f_12, 4);
			func_116(4);
		}
	}
	else if (Local_13 > 5)
	{
		func_113(6);
	}
}

bool func_55()
{
	return (func_98(4) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1));
}

void func_56()
{
}

void func_57(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (func_134(iParam0, iVar0, iParam1))
	{
		return;
	}
	MISC::SET_BIT((*(*Global_1194410)[iVar0 /*72*/])[iParam0], iParam1);
}

void func_58()
{
	int iVar0;
	bool bVar1;

	if (!func_59(1))
	{
		return;
	}
	if (func_59(4))
	{
		return;
	}
	if (!func_59(2))
	{
		iVar0 = -1;
	}
	else if (!func_59(8))
	{
		iVar0 = 2;
	}
	else if (func_59(16))
	{
		iVar0 = 0;
		bVar1 = true;
	}
	else
	{
		iVar0 = 1;
		bVar1 = true;
	}
	func_135(Local_90.f_9, iVar0, 0);
	func_112(4);
	if (bVar1)
	{
		func_136(Local_90.f_1, Local_90.f_2);
	}
}

bool func_59(int iParam0)
{
	return func_137(Local_90.f_7, iParam0);
}

void func_60(int iParam0)
{
	int iVar0;

	if (!func_138(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	((*Global_1126840)[iVar0 /*83*/])->f_70 = iParam0;
	((*Global_1126840)[iVar0 /*83*/])->f_70.f_2 = 0;
}

void func_61()
{
	bool bVar0;
	int iVar1;
	int iVar2;

	bVar0 = func_55();
	iVar1 = 0;
	while (iVar1 <= 1)
	{
		func_139(iVar1);
		if ((bVar0 && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_7.f_2[iVar1]))) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_13.f_7.f_2[iVar1])))
		{
			iVar2 = NETWORK::NET_TO_ENT(&(Local_13.f_7.f_2[iVar1]));
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar2);
		}
		iVar1++;
	}
	PED::REMOVE_RELATIONSHIP_GROUP(Local_90.f_18.f_7);
	PED::REMOVE_RELATIONSHIP_GROUP(Local_90.f_18.f_8);
}

void func_62(var uParam0, struct<6> Param1, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17)
{
	uParam0->f_9 = 2;
	*uParam0 = { func_32(Param1.f_5, 8) };
	uParam0->f_2 = 0;
	uParam0->f_4 = -1;
}

int func_63(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!func_140(uParam0))
	{
		return -1;
	}
	iVar0 = func_141(uParam0, uParam0->f_9);
	if (iVar0 != -1)
	{
		return iVar0;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (iVar1 == uParam0->f_9)
		{
		}
		else
		{
			iVar0 = func_141(uParam0, iVar1);
			if (iVar0 != -1)
			{
				return iVar0;
			}
		}
		iVar1++;
	}
	return -1;
}

struct<15> func_64(int iParam0)
{
	struct<15> Var0;

	Var0 = 2;
	Var0.f_1 = -1;
	Var0.f_5 = -1;
	Var0.f_5.f_1 = -1;
	Var0.f_5.f_3 = -1;
	Var0.f_5.f_4 = -1;
	Var0.f_5.f_5 = -1;
	Var0.f_5.f_6 = -1;
	Var0.f_5.f_6.f_1 = -1;
	Var0.f_5.f_9 = 2;
	if (!func_19(iParam0))
	{
		return Var0;
	}
	return *(Global_1184672->f_231[iParam0 /*15*/]);
}

void func_65(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_142(iParam0);
			break;
		case 1:
			func_142(iParam0);
			break;
		case 2:
			func_142(iParam0);
			break;
		case 3:
			func_143(iParam0);
			break;
		case 4:
			func_142(iParam0);
			break;
		case 5:
			func_142(iParam0);
			break;
		case 6:
			func_143(iParam0);
			break;
		case 7:
			func_143(iParam0);
			break;
		case 8:
			func_143(iParam0);
			break;
		case 9:
			func_142(iParam0);
			break;
		default:
			func_67(iParam0);
			func_66(iParam0);
			break;
	}
}

void func_66(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (iParam0->f_2 - 1))
	{
		func_69(iParam0, iVar0);
		iVar0++;
	}
}

void func_67(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (iParam0->f_1 - 1))
	{
		func_68(iParam0, iVar0);
		iVar0++;
	}
}

void func_68(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(iParam0->f_3), iParam1);
}

void func_69(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(iParam0->f_4), iParam1);
}

void func_70(int iParam0, int iParam1)
{
	func_144(&(iParam0->f_16), iParam1);
}

void func_71(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_69(iParam0, 0);
			break;
		case 1:
		case 2:
			func_69(iParam0, 1);
			func_69(iParam0, 2);
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			func_69(iParam0, 0);
			func_69(iParam0, 2);
			break;
		case 8:
			func_69(iParam0, 1);
			break;
		case 9:
		case 10:
		case 11:
			func_69(iParam0, 1);
			break;
		default:
			func_66(iParam0);
			break;
	}
}

void func_72(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_145(iParam0);
			break;
		case 1:
			func_146(iParam0);
			break;
		case 2:
			func_147(iParam0);
			break;
		case 3:
			func_148(iParam0);
			break;
		default:
			func_67(iParam0);
			func_66(iParam0);
			break;
	}
}

int func_73(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return ((*Global_1126840)[iVar0 /*83*/])->f_38.f_3;
	}
	return -1;
}

Vector3 func_74(int iParam0)
{
	if (!func_138(iParam0))
	{
		return 0f, 0f, 0f;
	}
	return ((*Global_1123778)[iParam0 /*27*/])->f_20;
}

void func_75(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_149(iParam0);
			break;
		case 1:
		case 2:
			func_150(iParam0);
			break;
		case 3:
		case 4:
			func_151(iParam0);
			break;
		default:
			func_66(iParam0);
			break;
	}
	func_67(iParam0);
}

var func_76(int iParam0)
{
	return &(Global_1244208->f_2073[iParam0]);
}

int func_77(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return ((*Global_1232796)[iParam0 /*5*/])->f_3;
}

int func_78(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1232796[iParam0 /*5*/];
}

var func_79(var uParam0, int iParam1)
{
	var uVar0;
	struct<5> Var1;

	if (func_152(&Var1, uParam0) && func_153(&Var1, iParam1))
	{
		func_154(Var1, 1099008783, &uVar0, 0);
	}
	return uVar0;
}

int func_80(var uParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 0;
	if (func_152(&Var1, uParam0) && func_153(&Var1, iParam1))
	{
		func_154(Var1, -1052341598, &iVar0, 0);
	}
	return iVar0;
}

int func_81(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_155(iParam0, iParam1);
	return &(Global_1232796->f_401[iVar0 /*7*/]);
}

Vector3 func_82(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = func_155(iParam0, iParam1);
	return (Global_1232796->f_401[iVar0 /*7*/])->f_3;
}

int func_83(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_1070355->f_634.f_601;
		case 3:
			return Global_1070355->f_634.f_2103;
		case 4:
			return Global_1070355->f_634.f_12605;
		case 5:
			return Global_1070355->f_634.f_12907;
		case 6:
			return Global_1070355->f_634.f_15909;
		case 7:
			return Global_1070355->f_634.f_15980;
		case 8:
			return Global_1070355->f_634.f_17182;
		default:
			break;
	}
	return -1;
}

int func_84(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = (iParam2 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if (uParam1[iVar2 /*3*/] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if (uParam1[iVar2 /*3*/] < iParam0)
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

struct<2> func_85()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

void func_86(var uParam0)
{
	func_156(uParam0, 0);
	func_157(uParam0, 0);
	func_158(uParam0, 1);
	func_159(uParam0, 1);
	func_160(uParam0, 0);
	func_161(uParam0, 1);
	func_162(uParam0, 1, 1, 1);
}

int func_87(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_88(var uParam0, int iParam1)
{
	return func_163(uParam0->f_16, iParam1);
}

void func_89(int iParam0)
{
	if (Local_13 != iParam0)
	{
		Local_13 = iParam0;
	}
}

void func_90(int iParam0)
{
	if (!func_98(iParam0))
	{
		func_164(&(Local_13.f_1), iParam0);
	}
}

bool func_91(int iParam0)
{
	if (!func_138(iParam0))
	{
		return false;
	}
	return (func_165(iParam0) && ((*Global_1123778)[iParam0 /*27*/])->f_18.f_1 != 0);
}

void func_92(int iParam0)
{
	if (Local_13.f_2 != iParam0)
	{
		Local_13.f_2 = iParam0;
	}
}

int func_93(struct<17> Param0, var uParam17)
{
	int iVar0;
	var uVar1;

	if (VOLUME::_0xF6A8A652A6B186CD(Local_13.f_3.f_1))
	{
		return 1;
	}
	if (func_166(Local_90.f_15))
	{
		*uParam17 = 1;
		return 0;
	}
	if (!VOLUME::_0xA4A4359320345B34(Local_13.f_3))
	{
		if (VOLUME::_0x397769175A7DBB30(Local_90.f_15, Param0.f_10, 0, 0, 0))
		{
			VOLUME::_0xFA15C9A320E707B0();
			*uParam17 = 1;
			return 0;
		}
		func_167(&uVar1, Param0);
		Local_13.f_3 = VOLUME::_0x183C0B6CFEFFCAE4(&uVar1);
		func_116(128);
	}
	else if (!func_97(128, 255))
	{
		Local_13.f_3.f_1 = func_168(Param0);
		if (VOLUME::_0xF6A8A652A6B186CD(Local_13.f_3.f_1))
		{
			return 1;
		}
		return 0;
	}
	iVar0 = VOLUME::_0xB33A604345F58202(Local_13.f_3);
	switch (iVar0)
	{
		case 3:
			Local_13.f_3.f_1 = VOLUME::_0x351D71B8B72B858B(Local_13.f_3);
			return 1;
		case 4:
			Local_13.f_3 = 0;
			return 0;
		default:
			break;
	}
	return 0;
}

bool func_94(int iParam0)
{
	return iParam0 != 0;
}

void func_95(var uParam0)
{
	*uParam0 = Global_1273882->f_21;
}

int func_96(int iParam0)
{
	return (Global_1273882->f_21 - iParam0) * 1000;
}

bool func_97(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	return func_137(&(Local_25[iParam1 /*2*/]), iParam0);
}

bool func_98(int iParam0)
{
	return func_137(Local_13.f_1, iParam0);
}

int func_99()
{
	return 1;
}

void func_100()
{
}

int func_101()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar0 = 1;
	iVar2 = 0;
	while (iVar2 <= 1)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_7.f_2[iVar2])))
		{
			if (func_169(iVar2, &bVar1) || bVar1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar2++;
			}
			if (bVar1)
			{
				func_170();
			}
			return iVar0;
		}
	}

int func_102()
{
	return 1;
}

void func_103()
{
}

void func_104()
{
	if (!func_98(32) && func_171(32))
	{
		func_90(32);
	}
	if (!func_98(64) && func_171(64))
	{
		func_90(64);
	}
	if (!func_98(16) && func_172(16))
	{
		func_90(16);
	}
	if ((!func_98(2048) && func_171(2048)) && !func_171(4096))
	{
		func_90(2048);
	}
}

void func_105()
{
	bool bVar0;

	if (!bVar0 && func_98(16))
	{
		func_92(1);
		return;
	}
	if (func_98(2048) && !func_171(4096))
	{
		func_92(6);
		return;
	}
}

void func_106()
{
}

int func_107()
{
	if (func_173())
	{
		return 1;
	}
	func_174();
	switch (Local_13.f_7)
	{
		case 0:
			func_175();
			break;
		case 1:
			func_176();
			break;
	}
	return 0;
}

void func_108()
{
}

int func_109()
{
	int iVar0;

	iVar0 = func_177(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || (ENTITY::IS_ENTITY_DEAD(iVar0) && ENTITY::_0x8DE41E9902E85756(iVar0)))
	{
		return 1;
	}
	return 0;
}

void func_110(int iParam0)
{
	if (func_59(iParam0))
	{
		func_178(&(Local_90.f_7), iParam0);
	}
}

int func_111(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!func_138(iParam0))
	{
		return 0;
	}
	iVar0 = func_179(iParam0);
	if (iVar0 != 0)
	{
		return 0;
	}
	iVar1 = PLAYER::PLAYER_ID();
	((*Global_1126840)[iVar1 /*83*/])->f_70 = iParam0;
	((*Global_1126840)[iVar1 /*83*/])->f_70.f_2 = iParam1;
	if (bParam2)
	{
		func_144(&(((*Global_1126840)[iVar1 /*83*/])->f_70.f_1), 1);
	}
	else
	{
		func_180(&(((*Global_1126840)[iVar1 /*83*/])->f_70.f_1), 1);
	}
	return 1;
}

void func_112(int iParam0)
{
	if (!func_59(iParam0))
	{
		func_164(&(Local_90.f_7), iParam0);
	}
}

void func_113(int iParam0)
{
	if (Local_90.f_8 != iParam0)
	{
		Local_90.f_8 = iParam0;
	}
}

int func_114()
{
	char* sVar0;
	int iVar1;
	int iVar2;

	sVar0 = "ORERC";
	iVar1 = 1;
	if (HUD::_0x2C729F2B94CEA911(sVar0))
	{
		HUD::_0xF66090013DE648D5(sVar0);
		if (!HUD::_0xD0976CC34002DB57(sVar0))
		{
			iVar1 = 0;
		}
	}
	iVar2 = 0;
	while (iVar2 <= 1)
	{
		if (!func_182(func_181(iVar2)))
		{
			iVar1 = 0;
		}
		iVar2++;
	}
	return iVar1;
}

bool func_115()
{
	bool bVar0;

	bVar0 = false;
	return !bVar0;
}

void func_116(int iParam0)
{
	if (!func_97(iParam0, 255))
	{
		func_164(Local_25[NETWORK::PARTICIPANT_ID_TO_INT() /*2*/], iParam0);
	}
}

void func_117(var uParam0)
{
	*uParam0 = 0;
}

void func_118()
{
}

int func_119()
{
	return 1;
}

int func_120(int iParam0)
{
	return (iParam0 - Global_1273882->f_21) * 1000;
}

void func_121()
{
	if (!func_59(1))
	{
		func_183(Local_90.f_9);
		func_112(1);
	}
}

void func_122()
{
}

void func_123()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_7.f_2[iVar0])))
		{
			(Local_90.f_18.f_2[iVar0 /*2*/])->f_1 = NETWORK::NET_TO_PED(&(Local_13.f_7.f_2[iVar0]));
		}
		iVar0++;
	}
	iVar1 = func_177(0);
	PED::SET_PED_CONFIG_FLAG(iVar1, 458, true);
	func_184(iVar1, func_177(1), 1, -1, 1);
	ENTITY::_0x18FF3110CF47115D(func_177(1), 9, false);
}

void func_124()
{
}

void func_125()
{
}

void func_126()
{
	float fVar0;

	if (func_166(Local_90.f_15))
	{
		return;
	}
	if (func_185())
	{
		return;
	}
	if (func_186(Local_90.f_1, 600))
	{
		fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false), Local_90.f_15);
		if (fVar0 < 200f)
		{
			func_116(4096);
		}
		else if (fVar0 < 400f)
		{
			func_187(4096);
			func_116(2048);
		}
		else
		{
			func_187(4096);
			func_187(2048);
		}
	}
}

void func_127()
{
	func_188();
	func_189();
}

void func_128()
{
	if (func_190())
	{
		func_116(8);
	}
	else
	{
		func_187(8);
	}
}

void func_129()
{
	func_191();
	func_192(Local_13.f_7);
	func_193();
	switch (Local_90.f_18)
	{
		case 0:
			func_194();
			break;
		case 1:
			func_195();
			break;
	}
}

void func_130()
{
	if (!func_97(8, 255))
	{
		func_116(16);
	}
	else
	{
		func_187(16);
	}
}

void func_131()
{
	int iVar0;

	Local_90.f_6 = -1;
	Local_90.f_5 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			Local_90.f_5 = (Local_90.f_5 || Local_25[iVar0 /*2*/]) // PointerArith;
			Local_90.f_6 = (Local_90.f_6 && Local_25[iVar0 /*2*/]) // PointerArith;
		}
		iVar0++;
	}
}

int func_132()
{
	int iVar0;

	iVar0 = func_177(0);
	if (func_196(iVar0, -1665583462, 1, 0) && !func_197())
	{
		TASK::_TASK_MOVE_IN_TRAFFIC(iVar0, 1f, 0, 0);
	}
	if (func_198(iVar0, -1665583462))
	{
		PED::SET_PED_KEEP_TASK(iVar0, true);
	}
	return 1;
}

void func_133()
{
}

bool func_134(int iParam0, int iParam1, int iParam2)
{
	if (!NETWORK::_0x255A5EF65EDA9167(iParam1))
	{
		return false;
	}
	return MISC::IS_BIT_SET((*Global_1194410)[iParam1 /*72*/][iParam0], iParam2);
}

void func_135(struct<2> Param0, int iParam2, int iParam3)
{
	var uVar0;
	int iVar1;
	vector3 vVar2;

	uVar0 = func_200(func_199(Param0));
	iVar1 = func_201(Param0);
	vVar2.f_1 = iParam3;
	vVar2.x = 0;
	vVar2.f_2 = 0;
	if (func_28() == 0)
	{
		vVar2.x = Global_265331->f_124445.f_70.f_17;
		func_202(Param0, &vVar2);
	}
	STATS::_0xD5910ECF81A2278C(uVar0, iVar1, iParam2, &vVar2);
}

void func_136(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_203(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	func_204(iVar0);
}

bool func_137(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_138(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return 1;
}

void func_139(int iParam0)
{
	if (!MAP::DOES_BLIP_EXIST(&(Local_90.f_18.f_2[iParam0 /*2*/])))
	{
		return;
	}
	MAP::REMOVE_BLIP(Local_90.f_18.f_2[iParam0 /*2*/]);
}

int func_140(var uParam0)
{
	if (func_36(*uParam0))
	{
		return 1;
	}
	if (uParam0->f_2 != 0)
	{
		if (uParam0->f_3 != -1)
		{
			return 1;
		}
		if (uParam0->f_4 != -1)
		{
			return 1;
		}
		if (uParam0->f_5 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_141(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;

	iVar0 = func_205(iParam1);
	iVar1 = ((&Global_1184672->f_3[iParam1] + iVar0) - 1);
	if (&Global_1184672->f_23[iParam1] != 0)
	{
		iVar1 = ((iVar0 + func_206(iParam1)) - 1);
	}
	bVar2 = func_36(*uParam0);
	bVar3 = (uParam0->f_2 != 0 && uParam0->f_3 != -1);
	bVar4 = (uParam0->f_2 != 0 && uParam0->f_4 != -1);
	bVar5 = (uParam0->f_2 != 0 && uParam0->f_5 != -1);
	iVar6 = iVar0;
	while (iVar6 <= iVar1)
	{
		if (bVar2)
		{
			if (func_21((Global_1184672->f_231[iVar6 /*15*/])->f_5, *uParam0))
			{
				return iVar6;
			}
		}
		if (bVar3)
		{
			if ((Global_1184672->f_231[iVar6 /*15*/])->f_5.f_2 == uParam0->f_2 && (Global_1184672->f_231[iVar6 /*15*/])->f_5.f_3 == uParam0->f_3)
			{
				return iVar6;
			}
		}
		if (bVar4)
		{
			if ((Global_1184672->f_231[iVar6 /*15*/])->f_5.f_2 == uParam0->f_2 && (Global_1184672->f_231[iVar6 /*15*/])->f_5.f_4 == uParam0->f_4)
			{
				return iVar6;
			}
		}
		if (bVar5)
		{
			if ((Global_1184672->f_231[iVar6 /*15*/])->f_5.f_2 == uParam0->f_2 && (Global_1184672->f_231[iVar6 /*15*/])->f_5.f_5 == uParam0->f_5)
			{
				return iVar6;
			}
		}
		iVar6++;
	}
	return -1;
}

void func_142(int iParam0)
{
	func_68(iParam0, 0);
	func_68(iParam0, 1);
	func_68(iParam0, 3);
	func_66(iParam0);
}

void func_143(int iParam0)
{
	func_67(iParam0);
	func_207(iParam0, 0, 3);
}

void func_144(var uParam0, int iParam1)
{
	func_208(uParam0, iParam1);
}

void func_145(int iParam0)
{
	func_68(iParam0, 0);
	func_69(iParam0, 0);
	func_69(iParam0, 1);
	func_69(iParam0, 2);
}

void func_146(int iParam0)
{
	func_68(iParam0, 1);
	func_66(iParam0);
}

void func_147(int iParam0)
{
	func_68(iParam0, 2);
	func_69(iParam0, 3);
}

void func_148(int iParam0)
{
	func_68(iParam0, 3);
	func_69(iParam0, 4);
}

void func_149(int iParam0)
{
	func_69(iParam0, 0);
	func_69(iParam0, 1);
}

void func_150(int iParam0)
{
	func_69(iParam0, 2);
	func_69(iParam0, 3);
}

void func_151(int iParam0)
{
	func_69(iParam0, 4);
	func_69(iParam0, 5);
}

bool func_152(var uParam0, var uParam1)
{
	*uParam0 = Global_1232796->f_8113;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = uParam1;
	return (DATAFILE::_0x603AC35FD4602C76(*uParam0) && DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0));
}

bool func_153(var uParam0, int iParam1)
{
	uParam0->f_2 = 333456427;
	uParam0->f_3 = iParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

int func_154(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;

	vParam0.f_2 = iParam5;
	uVar0 = *iParam6;
	if (DATAFILE::_DATAFILE_GET_HASH(&uVar0, &vParam0))
	{
		*iParam6 = uVar0;
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_155(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return (((*Global_1232796)[iParam0 /*5*/])->f_4 + iParam1);
}

void func_156(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_178(&(uParam0->f_1), 16384);
	}
	else
	{
		func_164(&(uParam0->f_1), 16384);
	}
}

void func_157(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_178(&(uParam0->f_1), 2048);
	}
	else
	{
		func_164(&(uParam0->f_1), 2048);
	}
}

void func_158(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_178(&(uParam0->f_1), 256);
	}
	else
	{
		func_164(&(uParam0->f_1), 256);
	}
}

void func_159(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_164(uParam0, 16);
	}
	else
	{
		func_178(uParam0, 67108864);
		func_178(uParam0, 16);
	}
}

void func_160(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_178(&(uParam0->f_1), 128);
	}
	else
	{
		func_164(&(uParam0->f_1), 128);
	}
}

void func_161(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_164(uParam0, 256);
	}
	else
	{
		func_178(uParam0, 256);
	}
}

void func_162(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_164(uParam0, 268435456);
	}
	else
	{
		func_178(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_164(uParam0, 1073741824 /* Float: 2f */);
	}
	else
	{
		func_178(uParam0, 1073741824 /* Float: 2f */);
	}
	if (!bParam3)
	{
		func_164(uParam0, 536870912);
	}
	else
	{
		func_178(uParam0, 536870912);
	}
}

bool func_163(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_164(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_165(int iParam0)
{
	int iVar0;

	if (!func_138(iParam0))
	{
		return false;
	}
	iVar0 = func_209(iParam0);
	return (iVar0 != 0 && iVar0 != 3);
}

int func_166(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_167(var uParam0, struct<12> Param1, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17)
{
	*uParam0 = { Param1.f_11 };
	uParam0->f_4 = Param1.f_10;
	uParam0->f_6 = -653740250;
	uParam0->f_7 = Param1.f_5;
}

var func_168(struct<17> Param0)
{
	var uVar0;

	func_167(&uVar0, Param0);
	return VOLUME::_0x77A6E4AD0C496F81(&uVar0);
}

int func_169(int iParam0, var uParam1)
{
	int iVar0;

	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		*uParam1 = 1;
		return 0;
	}
	if (!func_212(Local_13.f_7.f_2[iParam0], func_181(iParam0), func_210(iParam0), func_211(iParam0), 1, 0, 1, 1, 1))
	{
		*uParam1 = 1;
		return 0;
	}
	iVar0 = func_177(iParam0);
	if (!PED::_0xA0BC8FAED8CFEB3C(iVar0))
	{
		return 0;
	}
	return 1;
}

void func_170()
{
	func_92(2);
}

bool func_171(int iParam0)
{
	return func_137(Local_90.f_5, iParam0);
}

bool func_172(int iParam0)
{
	return func_137(Local_90.f_6, iParam0);
}

int func_173()
{
	int iVar0;

	if (Local_13.f_7 == 2)
	{
		return 1;
	}
	iVar0 = func_177(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ((ENTITY::IS_ENTITY_DEAD(iVar0) && !PED::GET_PED_CONFIG_FLAG(iVar0, 11, true)) && ENTITY::_0x8DE41E9902E85756(iVar0)))
	{
		return 1;
	}
	return 0;
}

void func_174()
{
	if (func_197())
	{
		func_213(1);
	}
}

void func_175()
{
}

void func_176()
{
}

int func_177(int iParam0)
{
	return (Local_90.f_18.f_2[iParam0 /*2*/])->f_1;
}

void func_178(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_179(int iParam0)
{
	if (!func_138(iParam0))
	{
		return 0;
	}
	if (!func_165(iParam0))
	{
		return 0;
	}
	return ((*Global_1123778)[iParam0 /*27*/])->f_18.f_1;
}

void func_180(var uParam0, int iParam1)
{
	func_214(uParam0, iParam1);
}

int func_181(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1731070285;
		case 1:
			return 96930969;
		default:
			break;
	}
	return 0;
}

bool func_182(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam0, false);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

void func_183(struct<2> Param0)
{
	if (func_201(Param0) == 0)
	{
	}
	else if (!STATS::_0x01F4D242765C6B24(func_201(Param0)))
	{
		STATS::_0x99230691875FC218(func_199(Param0), func_201(Param0), Global_36);
	}
}

int func_184(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	if (PED::GET_MOUNT(iParam0) != iParam1)
	{
		PED::_SET_PED_ON_MOUNT(iParam0, iParam1, iParam3, bParam4);
		PED::SET_PED_CAN_BE_TARGETTED(iParam1, bParam2);
	}
	return 1;
}

bool func_185()
{
	return (func_98(32) || func_97(32, 255));
}

int func_186(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	if (iParam0 == 0)
	{
		return 0;
	}
	Var0 = { func_215(iParam0, 2087069356) };
	if (!STATS::STAT_ID_GET_INT(&Var0, &iVar2))
	{
		return 0;
	}
	if (iVar2 != 0 && (Global_1273882->f_21 - iVar2) < iParam1)
	{
		return 1;
	}
	return 0;
}

void func_187(int iParam0)
{
	if (func_137(&(Local_25[NETWORK::PARTICIPANT_ID_TO_INT() /*2*/]), iParam0))
	{
		func_178(Local_25[NETWORK::PARTICIPANT_ID_TO_INT() /*2*/], iParam0);
	}
}

void func_188()
{
}

void func_189()
{
}

int func_190()
{
	bool bVar0;

	bVar0 = true;
	if (bVar0 && !UNLOCK::_UNLOCK_IS_UNLOCKED(Local_90.f_14))
	{
		return 0;
	}
	return 1;
}

void func_191()
{
	if (func_197())
	{
		return;
	}
	if (func_216(func_177(0), 0, &(Local_90.f_18.f_9), &(Local_90.f_18.f_40), 0, 0))
	{
		func_217(32);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), Local_90.f_18.f_8);
		func_218(0);
	}
}

void func_192(int iParam0)
{
	if (Local_90.f_18 != iParam0)
	{
		Local_90.f_18 = iParam0;
	}
}

void func_193()
{
	int iVar0;

	iVar0 = func_177(0);
	if (((ENTITY::IS_ENTITY_DEAD(iVar0) && !PED::GET_PED_CONFIG_FLAG(iVar0, 11, true)) && func_219(iVar0, Global_35)) && !func_220(4))
	{
		func_221(805, 0);
		func_222(-1399051227, PLAYER::GET_PLAYER_INDEX());
		func_217(4);
	}
	if (func_223(Global_35) == func_224(iVar0) && !func_220(8))
	{
		func_225();
		func_222(1571096148, PLAYER::GET_PLAYER_INDEX());
		func_217(8);
	}
}

void func_194()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		iVar1 = func_177(iVar0);
		if ((NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_7.f_2[iVar0])) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1)) && PED::_0xA0BC8FAED8CFEB3C(iVar1))
		{
			switch (iVar0)
			{
				case 0:
					if (!func_220(1))
					{
						func_217(1);
						PED::_0x1902C4CFCC5BE57C(iVar1, func_226());
						PED::_0xCC8CA3E88256E58F(iVar1, 0, 1, 1, 1, true);
					}
					break;
				case 1:
					if (!func_220(2))
					{
						func_217(2);
						PED::_0x1902C4CFCC5BE57C(iVar1, -1793085205);
						func_227(iVar1, 1);
						PED::_0xCC8CA3E88256E58F(iVar1, 1, 1, 1, 1, true);
					}
					break;
			}
		}
		iVar0++;
	}
	if (!func_220(16))
	{
		func_228();
		func_217(16);
	}
	iVar2 = func_177(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		if (BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iVar2, false, false)) < 20f && !func_97(32, 255))
		{
			func_229();
			func_230();
		}
		if (!func_220(64) && func_196(iVar2, -1665583462, 1, 0))
		{
			func_217(64);
			TASK::_TASK_MOVE_IN_TRAFFIC(iVar2, 1f, 0, 0);
		}
	}
}

void func_195()
{
	if (!func_97(32, 255))
	{
		func_229();
		func_230();
	}
	if (!func_220(32))
	{
		if (func_216(func_177(0), 0, &(Local_90.f_18.f_9), &(Local_90.f_18.f_40), 0, 0))
		{
			func_217(32);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), Local_90.f_18.f_8);
		}
	}
}

int func_196(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (bParam2 && !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		return 0;
	}
	if (!bParam3 && func_198(iParam0, iParam1))
	{
		return 0;
	}
	if (iParam1 == -1794415470 && PED::IS_PED_BEING_JACKED(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_197()
{
	return (func_98(64) || func_97(64, 255));
}

int func_198(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	return 0;
}

int func_199(var uParam0, var uParam1)
{
	return uParam0;
}

int func_200(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return -1690863991;
		case 3:
			return 1286170048;
		case 4:
			return -342492333;
		case 5:
			return 1140089012;
		case 8:
			return 634321112;
		case 7:
			return -2079273178;
		case 6:
			return -147846054;
		default:
			break;
	}
	return 0;
}

int func_201(struct<2> Param0)
{
	return func_231(Param0);
}

void func_202(struct<2> Param0, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	iVar2 = -1;
	iVar3 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (iVar3 == 0)
	{
		return;
	}
	switch (func_199(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_233(func_232(Param0));
			iVar5 = func_234(iVar4);
			if (!func_235(iVar5, 0))
			{
				return;
			}
			break;
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (&Global_1100949->f_33[iVar1 /*16*/] == iVar3)
		{
			iVar2 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	if (iVar2 == -1)
	{
		return;
	}
	iVar0 = (Global_1100949->f_33[iVar2 /*16*/])->f_3.f_1;
	if (iVar0 == -1)
	{
		return;
	}
	uParam2->f_2 = Global_1109623[iVar0 /*42*/];
}

int func_203(int iParam0, int iParam1)
{
	int iVar0;
	struct<11> Var1;
	int iVar18;
	int iVar19;

	Var1.f_10 = 1106247680;
	iVar19 = 1;
	while (iVar19 <= 23)
	{
		iVar18 = iVar19;
		if (iVar18 == iParam0)
		{
			return (iVar0 + iParam1);
		}
		else
		{
			func_31(&Var1, iVar18, -1, -1, 255);
			iVar0 = (iVar0 + Var1);
		}
		iVar19++;
	}
	return -1;
}

void func_204(int iParam0)
{
	struct<6> Var0;

	Var0.f_4 = 3;
	Var0.f_5 = iParam0;
	func_236(&Var0);
}

int func_205(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 3;
		case 2:
			return 35;
		case 3:
			return 55;
		default:
			break;
	}
	return 0;
}

int func_206(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			if (&Global_1184672->f_3[iParam0] * 2 <= 32)
			{
				return &Global_1184672->f_3[iParam0] * 2;
			}
			return 32;
		case 2:
			if (&Global_1184672->f_3[iParam0] * 2 <= 20)
			{
				return &Global_1184672->f_3[iParam0] * 2;
			}
			return 20;
		case 3:
			if (&Global_1184672->f_3[iParam0] * 2 <= 16)
			{
				return &Global_1184672->f_3[iParam0] * 2;
			}
			return 16;
		default:
			break;
	}
	return 0;
}

void func_207(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	if (iParam2 < iParam1)
	{
		iParam2 = (iParam0->f_2 - 1);
	}
	iVar0 = iParam1;
	while (iVar0 <= iParam2)
	{
		func_69(iParam0, iVar0);
		iVar0++;
	}
}

void func_208(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_209(int iParam0)
{
	if (!func_138(iParam0))
	{
		return 0;
	}
	return &(Global_1124870->f_1[iParam0 /*59*/]);
}

Vector3 func_210(int iParam0)
{
	switch (func_237())
	{
		case 0:
			return 1452.25f, -1695.116f, 64.9668f;
		case 1:
			return 1163.55f, -324.0086f, 97.10712f;
		case 2:
			return 2682.104f, 858.447f, 85.90118f;
		case 3:
			return 1311.333f, 1183.934f, 151.5859f;
		case 4:
			return 40.99253f, 1813.064f, 189.5056f;
		case 5:
			return 109.9411f, 1282.256f, 176.292f;
		case 6:
			return -1450.859f, 1686.266f, 255.2526f;
		case 7:
			return 66.91456f, -445.5748f, 72.15018f;
		case 8:
			return -1698.036f, 380.6171f, 106.0826f;
		case 9:
			return -2016.359f, -909.5917f, 84.91344f;
		case 10:
			return -1362.091f, -1267.624f, 82.41972f;
		case 11:
			return -2449.051f, -1457.942f, 148.705f;
		case 12:
			return -1559.339f, -1930.728f, 50.99157f;
		case 13:
			return -1764.444f, -2717.768f, 62.81413f;
		case 14:
			return -2190.544f, -2200.288f, 64.42333f;
		case 15:
			return -2803.26f, -3142.291f, 5.88098f;
		case 16:
			return -3175.168f, -2402.267f, 22.72451f;
		case 17:
			return -4220.611f, -2690.138f, 0.65931f;
		case 18:
			return -4372.619f, -3274.055f, 20.26154f;
		case 19:
			return -5456.922f, -3562.744f, -21.1142f;
		case 20:
			return -5796.222f, -2650.145f, -16.68393f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_211(int iParam0)
{
	switch (func_237())
	{
		case 0:
			return 67f;
		case 1:
			return 300f;
		case 2:
			return 178f;
		case 3:
			return 25f;
		case 4:
			return 89f;
		case 5:
			return 76f;
		case 6:
			return 150f;
		case 7:
			return 82f;
		case 8:
			return 237f;
		case 9:
			return 270f;
		case 10:
			return 164f;
		case 11:
			return 130f;
		case 12:
			return 300f;
		case 13:
			return 140f;
		case 14:
			return 310f;
		case 15:
			return 310f;
		case 16:
			return 235f;
		case 17:
			return 252f;
		case 18:
			return 100f;
		case 19:
			return 48f;
		case 20:
			return 160f;
		default:
			break;
	}
	return 0f;
}

int func_212(var uParam0, int iParam1, vector3 vParam2, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10)
{
	int iVar0;

	if (bParam6)
	{
		if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			return 0;
		}
	}
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	if (NETWORK::_0x0E2C3AEE6CE603B7())
	{
		return 0;
	}
	if (!func_182(iParam1))
	{
		return 0;
	}
	iVar0 = func_238(iParam1, vParam2, iParam5, iParam8, 1, bParam6, bParam7, bParam9);
	*uParam0 = NETWORK::PED_TO_NET(iVar0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (bParam9)
		{
			WEAPON::_0x899A04AFCC725D04(iVar0, WEAPON::_0xD42514C182121C23(iParam1));
		}
		if (bParam10)
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iParam1));
		}
		if (bParam6)
		{
			NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
		}
		return 1;
	}
	return 0;
}

void func_213(int iParam0)
{
	if (Local_13.f_7 != iParam0)
	{
		Local_13.f_7 = iParam0;
	}
}

void func_214(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

struct<2> func_215(int iParam0, int iParam1)
{
	struct<2> Var0;
	struct<2> Var2;
	int iVar4;

	if (iParam1 == 0)
	{
		return Var2;
	}
	iVar4 = func_239(iParam0);
	if (iVar4 == 0)
	{
		return Var2;
	}
	Var0 = { func_240(iParam1, iVar4) };
	if (!STATS::_STAT_ID_IS_VALID(&Var0))
	{
		return Var2;
	}
	return Var0;
}

int func_216(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_241(uParam2, 1, iVar0);
	}
	if (!Global_1939168->f_6 && !ENTITY::IS_ENTITY_DEAD(iParam0))
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
			if (func_242(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_243(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1939168->f_21)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_244(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_243(iParam0, uParam2, *uParam3);
					return 1;
				}
				else if (func_245(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_243(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_246(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_243(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1939168->f_20 && func_247(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_243(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1939168->f_19)
		{
			if (func_248(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_249(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_243(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_250(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_243(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1939168->f_23) < 300)
			{
				if (func_251(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_243(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			else if (func_251(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_243(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1939168->f_33 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_252(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_243(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1939168->f_19 || uParam2->f_12 < 20f)
			{
				if (func_253(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_243(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1939168->f_24 || Global_1939168->f_25)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_254(uParam2, 4000))
				{
					if ((func_255(iParam0, Global_1939168->f_35, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_256(uParam2, iParam0)) && func_257(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_243(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_255(iParam0, Global_1939168->f_35, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_256(uParam2, iParam0)) && func_257(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_243(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			else if (Global_1939168->f_34 == 0)
			{
				if (Global_1939168->f_35 != 0)
				{
					if (func_258(iParam0, Global_1939168->f_35))
					{
						func_259();
						*uParam3 = 2;
						func_243(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_260(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_261() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_259();
						*uParam3 = 2;
						func_243(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (Global_1939168->f_36 != 0)
			{
				if (func_262())
				{
					if (func_258(iParam0, Global_1939168->f_36))
					{
						func_259();
						*uParam3 = 2;
						func_243(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_263(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_243(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1939168->f_50)
		{
			if (*uParam2 & -2147483648 != 0)
			{
				if (func_265(func_264(PLAYER::PLAYER_ID()), ENTITY::GET_ENTITY_COORDS(iParam0, true, false)) <= uParam2->f_30)
				{
					if (func_266(PLAYER::PLAYER_PED_ID(), iParam0, 1060437492 /* Float: 0.707f */) == 0)
					{
						*uParam3 = 1048576;
						func_243(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_28)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_267(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_243(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_268(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_243(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_269(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_243(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_270(uParam2, 4000))
				{
					if (func_271(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_243(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_20)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_272(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_243(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_273(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_243(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
	}
	return 0;
}

void func_217(int iParam0)
{
	func_164(&(Local_90.f_18.f_1), iParam0);
}

void func_218(bool bParam0)
{
	int iVar0;

	if (!func_97(64, 255))
	{
		iVar0 = func_203(Local_90.f_1, Local_90.f_2);
		func_274(iVar0);
		if (!func_97(1024, 255))
		{
			func_275(Local_90.f_1);
			func_116(1024);
		}
		func_276(iVar0);
		if (bParam0)
		{
			func_277(Local_90.f_1, Local_90.f_4);
		}
		func_116(64);
	}
}

int func_219(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			if (ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				if (PED::GET_PED_SOURCE_OF_DEATH(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)) == iParam1)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_220(int iParam0)
{
	return func_137(Local_90.f_18.f_1, iParam0);
}

void func_221(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_278(iParam0, &iVar0, &iVar1);
	if (!func_279(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_280(iVar0, iVar1);
}

void func_222(int iParam0, int iParam1)
{
	struct<7> Var0;
	var uVar7;

	if (func_28() != 0)
	{
		return;
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
	{
		return;
	}
	Var0.f_5 = -1;
	Var0.f_4 = 2;
	Var0.f_5 = iParam0;
	Var0.f_6 = 0;
	SCRIPTS::_0x31010318BA9897AC(&uVar7, iParam1);
	func_281(&Var0, uVar7);
}

int func_223(int iParam0)
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
	if (PED::_0x5463C962BC7777C3(iParam0, 0, &uVar0, 1, 0) != 0)
	{
		return uVar0;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 2, &uVar0, 1, 0) != 0)
	{
		return uVar0;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 1, &uVar0, 1, 0) != 0)
	{
		return uVar0;
	}
	return 0;
}

int func_224(int iParam0)
{
	return iParam0;
}

void func_225()
{
	if (!func_59(8))
	{
		return;
	}
	func_112(16);
}

int func_226()
{
	int iVar0;
	int iVar1;

	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
	switch (func_237())
	{
		case 0:
		case 1:
		case 2:
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
			switch (iVar1)
			{
				case 0:
					iVar0 = 889771567;
					break;
				case 1:
					iVar0 = 636991573;
					break;
				case 2:
					iVar0 = 330929113;
					break;
				case 3:
					iVar0 = 1114927438;
					break;
				case 4:
					iVar0 = 875484355;
					break;
				case 5:
					iVar0 = 1597975267;
					break;
				case 6:
					iVar0 = 1359253102;
					break;
				case 7:
					iVar0 = 2076828664;
					break;
				case 8:
					iVar0 = 1837647733;
					break;
				case 9:
					iVar0 = -1717231026;
					break;
			}
			break;
		case 3:
		case 4:
		case 5:
		case 6:
			switch (iVar1)
			{
				case 0:
					iVar0 = -502622876;
					break;
				case 1:
					iVar0 = 1288792812;
					break;
				case 2:
					iVar0 = 1049349729;
					break;
				case 3:
					iVar0 = 693543927;
					break;
				case 4:
					iVar0 = 454559610;
					break;
				case 5:
					iVar0 = -1125496020;
					break;
				case 6:
					iVar0 = -1356288087;
					break;
				case 7:
					iVar0 = -1737522633;
					break;
				case 8:
					iVar0 = -1969822078;
					break;
				case 9:
					iVar0 = 1663243975;
					break;
			}
			break;
	}
	return iVar0;
}

void func_227(int iParam0, bool bParam1)
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
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, false);
	}
}

void func_228()
{
	PED::ADD_RELATIONSHIP_GROUP("NB_RIVAL_COLLECTOR_COLLECTOR", &(Local_90.f_18.f_7));
	PED::ADD_RELATIONSHIP_GROUP("NB_RIVAL_COLLECTOR_PLAYER", &(Local_90.f_18.f_8));
	if (ENTITY::DOES_ENTITY_EXIST(func_177(0)))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(func_177(0), Local_90.f_18.f_7);
	}
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, Local_90.f_18.f_7, Local_90.f_18.f_8);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(0, Local_90.f_18.f_8, Local_90.f_18.f_8);
}

void func_229()
{
	int iVar0;

	if (!func_97(32, 255))
	{
		func_282(Local_90.f_1, Local_90.f_3);
		if (!func_97(1024, 255))
		{
			func_275(Local_90.f_1);
			func_116(1024);
		}
		iVar0 = func_203(Local_90.f_1, Local_90.f_2);
		func_274(iVar0);
		func_276(iVar0);
		func_112(2);
		func_283(Local_90.f_9);
		func_284(Local_90.f_1);
		func_116(32);
	}
}

void func_230()
{
	if (!func_59(2))
	{
		return;
	}
	func_112(8);
}

int func_231(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_285(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_232(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_285(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_233(var uParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_152(&Var1, uParam0))
	{
		iVar0 = ((func_286() - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_234(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return ((*Global_1232796)[iParam0 /*5*/])->f_2;
}

int func_235(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1777724963:
		case -1165569262:
		case -260420884:
		case -232478158:
		case 78055447:
		case 850213441:
		case 974227447:
		case 1532822440:
		case 1918154385:
			return 1;
		case joaat("dynamic"):
			return iParam1;
		default:
			break;
	}
	return 0;
}

void func_236(var uParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (&Global_1051202->f_16[15] == 0 || !SCRIPTS::_DOES_THREAD_EXIST(&(Global_1051202->f_16[15])))
	{
		return;
	}
	*uParam0 = 176;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::_0x8B61C950A148FFA2(uParam0, 6, 11, &(Global_1051202->f_16[15]));
	func_287(uParam0, uParam0->f_1);
}

int func_237()
{
	return Local_90.f_2;
}

int func_238(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam6, bParam7, false, !bParam9);
	if (bParam5)
	{
		PED::_0x283978A15512B2FE(iVar0, 1);
	}
	return iVar0;
}

int func_239(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -88129556;
		case 2:
			return 1285278823;
		case 14:
			return 1990184729;
		case 4:
			return 1374143159;
		case 5:
			return 1983508419;
		case 6:
			return -174599426;
		case 7:
			return -1565506973;
		case 8:
			return 1332057400;
		case 9:
			return 725557162;
		case 10:
			return 9860771;
		case 11:
			return -189356331;
		case 12:
			return -1552492203;
		case 13:
			return 1780085540;
		case 3:
			return 1067005312;
		case 15:
			return -765620960;
		default:
			break;
	}
	return 0;
}

struct<2> func_240(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_241(var uParam0, bool bParam1, int iParam2)
{
	func_288(iParam2);
	if (Global_1572887->f_13 == -1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			return;
		}
		if (Global_1939168->f_6)
		{
			return;
		}
	}
	else
	{
		if (!Global_1273882->f_11)
		{
			return;
		}
		if (Global_1273882->f_12)
		{
			return;
		}
	}
	if (bParam1)
	{
		uParam0->f_10 = 0;
	}
	uParam0->f_5 = iParam2;
	if (Global_1572887->f_13 == -1)
	{
		uParam0->f_13 = Global_1939168->f_38;
	}
	else
	{
		uParam0->f_13 = func_289(0);
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
							func_164(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_290(1, 1))
						{
							func_164(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_290(1, 1) || *uParam0 & 8192 != 0))
				{
					func_178(uParam0, 33554432);
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
			if (func_291(uParam0))
			{
				uParam0->f_15 = func_261();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_261() - uParam0->f_15) > 500)
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
	func_292(uParam0);
}

int func_242(int iParam0, var uParam1)
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
		case joaat("event_shocking_dead_body"):
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
			if (iVar2 == Global_1939168->f_27)
			{
				return 0;
			}
			if (iVar2 == Global_1939168->f_26)
			{
				return 0;
			}
			if (!func_293(iParam0, uParam1, iVar2))
			{
				return 0;
			}
			if (func_294(iParam0, iVar2) <= func_295(uParam1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_243(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_296(iParam2, 1, 1, 1, 0))
	{
		func_164(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_297(uParam1, 1);
	func_298();
}

int func_244(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_299(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_300(uParam1);
			if (func_301(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = func_302(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_297(uParam1, 1);
						return 1;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > func_303(uParam1))
						{
							func_297(uParam1, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_245(int iParam0, int iParam1, var uParam2)
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
	if (func_304(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_300(uParam2);
		if (func_301(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > func_302(uParam2)
				{
					func_297(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_246(int iParam0, var uParam1)
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
	if (Global_1939168->f_34 != 0)
	{
		if (PED::_0xB676EFDA03DADA52(Global_1939168->f_34, 1) == iParam0)
		{
			return 0;
		}
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (func_293(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_302(uParam1)
		{
			fVar3 = func_300(uParam1);
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

int func_247(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_305(bParam1, bParam2, bParam3);
	}
	if (Global_1572887->f_13 != -1)
	{
		if (iParam0 == Global_1273882->f_10)
		{
			if (!Global_1273882->f_11)
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
	else if (bParam2 && !LAW::_0x148E7AC8141C9E64(iParam0) == 1370593166)
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

int func_248(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_261();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return 1;
	}
	return 0;
}

int func_249(int iParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_306(uParam2);
			if (!WEAPON::IS_WEAPON_VALID(Global_1939168->f_40) || Global_1939168->f_40 == joaat("weapon_unarmed"))
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
			else if (WEAPON::IS_WEAPON_VALID(Global_1939168->f_40) && WEAPON::_0xEA522F991E120D45(Global_1939168->f_40))
			{
				PED::_0xD355E2F1BB41087E(iParam1, 5f);
			}
			else
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
		}
		if ((!WEAPON::IS_WEAPON_VALID(Global_1939168->f_40) || Global_1939168->f_40 == joaat("weapon_unarmed")) || (WEAPON::IS_WEAPON_VALID(Global_1939168->f_40) && WEAPON::_0x5809DBCA0A37C82B(Global_1939168->f_40)))
		{
			fVar2 = 3f;
			iVar1 = 3000;
		}
		else
		{
			fVar2 = 1f;
			iVar1 = 1000;
		}
		if (PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), iParam1, iVar1) && PED::_0x285D36C5C72B0569(iParam0) <= fVar2)
		{
			if (func_257(uParam2, iParam1))
			{
				func_297(uParam2, 1);
				return 1;
			}
		}
	}
	return 0;
}

int func_250(int iParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_12 < IntToFloat(func_307(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1939168->f_40) && !WEAPON::_0x5809DBCA0A37C82B(Global_1939168->f_40)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_257(uParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(iParam0) <= 1f)
				{
					func_297(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_251(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_308(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_explosion"), vVar0, uParam2->f_23))
				{
					func_297(uParam2, 1);
					return 1;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_fire"), vVar0, uParam2->f_29))
				{
					func_297(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_potential_blast"), vVar0, uParam2->f_23))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("weapon_thrown_dynamite"), uParam2->f_28, &vVar4, 0, 0);
					if (func_309(iParam1, vVar0, vVar4))
					{
						func_297(uParam2, 1);
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
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_explosion"), vVar0, uParam2->f_23))
				{
					func_297(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_potential_blast"), vVar0, uParam2->f_23))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("weapon_thrown_dynamite"), uParam2->f_28, &vVar7, 0, 0);
					if (func_309(iParam1, vVar0, vVar7))
					{
						func_297(uParam2, 1);
						return 1;
					}
				}
				break;
		}
	}
	return 0;
}

int func_252(int iParam0, var uParam1)
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
	while (iVar0 < Global_1939168->f_33)
	{
		if (!func_293(iParam0, uParam1, &(Global_1939168->f_28[iVar0])) || iParam0 == &Global_1939168->f_28[iVar0])
		{
		}
		else
		{
			bVar13 = func_310(&(Global_1939168->f_28[iVar0]));
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(&(Global_1939168->f_28[iVar0]), false, false), vVar9);
			if (func_311(&(Global_1939168->f_28[iVar0])))
			{
				if (fVar1 < 35f)
				{
					if ((DECORATOR::DECOR_EXIST_ON(&(Global_1939168->f_28[iVar0]), "HorseTeamA") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA")) || (DECORATOR::DECOR_EXIST_ON(&(Global_1939168->f_28[iVar0]), "HorseTeamB") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB")))
					{
						*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1939168->f_28[iVar0]), false, false) };
						*(vVar2[1 /*3*/]) = { vVar9 };
						uParam1->f_10 = iParam0;
						return 1;
					}
				}
			}
			if (func_312(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1939168->f_28[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_313(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1939168->f_28[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_314(uParam1, iParam0, fVar1, iVar0))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1939168->f_28[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_253(int iParam0, var uParam1)
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
		case joaat("event_shocking_property_damage"):
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

int func_254(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_261();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

int func_255(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!bParam3)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iParam0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iParam0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, 1, 1) || DECORATOR::DECOR_EXIST_ON(iParam0, "DamagedByPlayer"))
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
		if (func_315(iVar0, &iVar2))
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
	if (func_316(iVar0, iParam0))
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

int func_256(var uParam0, int iParam1)
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

int func_257(var uParam0, int iParam1)
{
	if (func_317(uParam0))
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
	if (WEAPON::_0x8D50F43298AB9545(Global_35, iParam1))
	{
		return 1;
	}
	if (!PED::IS_PED_RAGDOLL(iParam1))
	{
		return 1;
	}
	return 0;
}

int func_258(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return 1;
		}
		if (func_318(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_259()
{
}

int func_260(var uParam0, int iParam1)
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
		if (func_319(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_261();
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
					iVar7 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar0, iVar6);
					if (ENTITY::DOES_ENTITY_EXIST(iVar7))
					{
						if (func_320(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_9 = func_261();
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

int func_261()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

int func_262()
{
	if (Global_1939168->f_36 == 0)
	{
		return 0;
	}
	if (Global_1939168->f_36 == Global_1939168->f_34)
	{
		return 0;
	}
	if (Global_1939168->f_37 <= 0)
	{
		return 0;
	}
	if ((func_261() - Global_1939168->f_37) >= 10000)
	{
		return 0;
	}
	return 1;
}

int func_263(var uParam0, int iParam1)
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
	fVar0 = func_295(uParam0);
	if (uParam0->f_12 > func_321(uParam0) && uParam0->f_12 > fVar0)
	{
		return 0;
	}
	iVar2 = func_322(iParam1);
	iVar1 = func_323(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || PED::_0x9D9473CB82D83A30(iParam1, Global_35, 0) == 1) || PED::_0x9D9473CB82D83A30(iParam1, uParam0->f_14, 0) == 1)
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_264(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

float func_265(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

int func_266(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return func_324(iParam0, vVar0, iParam2);
}

int func_267(int iParam0, int iParam1, var uParam2)
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
	return func_325(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

int func_268(int iParam0, var uParam1)
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
	if (Global_1939168->f_18)
	{
		return 1;
	}
	if (*uParam1 & 33554432 != 0)
	{
		if (func_326(iParam0, uParam1, 1))
		{
			return 1;
		}
		if ((PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17)) && PED::_0x7F9B9791D4CB71F6(iParam0, Global_35, true, 0) == 1)
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
		case joaat("event_shocking_seen_car_stolen"):
		case 1201762715:
			if (func_327(uParam1))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
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
					if (!func_328(uParam1, iParam0))
					{
						if (func_320(iVar4, Global_36, 1) < 7f)
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

int func_269(int iParam0, var uParam1)
{
	if (!func_329(0))
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

int func_270(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_261();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_271(int iParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_272(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_261();
	}
	else if (func_261() - uParam1->f_4) > func_330(uParam1)
	{
		return func_331(iParam0, uParam1, 0, -1082130432 /* Float: -1f */);
	}
	return 0;
}

int func_273(var uParam0, int iParam1)
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
	if (Global_35 == iVar1 || Global_1939168->f_34 == iVar1)
	{
		return 1;
	}
	return 0;
}

void func_274(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<11> Var2;
	int iVar19;
	struct<2> Var20;
	int iVar22;
	struct<2> Var23;

	if (func_94(Global_1244208[iParam0 /*4*/]))
	{
		return;
	}
	func_332(iParam0, &iVar0, &iVar1);
	Var2.f_10 = 1106247680;
	func_31(&Var2, iVar0, iVar1, -1, 255);
	func_95((*Global_1244208)[iParam0 /*4*/]);
	iVar19 = Var2.f_5;
	if (iVar19 != 0)
	{
		Var20 = { func_333(153786159) };
		STATS::STAT_ID_SET_INT(&Var20, iVar19, true);
		Var20 = { func_333(217123284) };
		STATS::STAT_ID_SET_INT(&Var20, Global_1273882->f_21, true);
	}
	iVar22 = Var2.f_9;
	if (iVar22 != 0)
	{
		Var23 = { func_333(945205875) };
		STATS::STAT_ID_SET_INT(&Var23, iVar22, true);
		Var23 = { func_333(890183498) };
		STATS::STAT_ID_SET_INT(&Var23, Global_1273882->f_21, true);
	}
}

void func_275(int iParam0)
{
	func_334();
	func_335(iParam0);
}

void func_276(int iParam0)
{
	struct<6> Var0;

	Var0.f_4 = 2;
	Var0.f_5 = iParam0;
	func_236(&Var0);
}

void func_277(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_336(iParam0, iParam1))
	{
		return;
	}
	iVar0 = func_337(iParam1);
	func_338(iVar0, iParam0);
}

void func_278(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

int func_279(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 30)
	{
		return 0;
	}
	if (func_339(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_340(iParam0))
	{
		return 0;
	}
	if (func_341(iParam0))
	{
		return 0;
	}
	if ((Global_1900718->f_67 && !func_342(iParam0, 1)) || func_343(32768))
	{
		if (!func_342(iParam0, 262144) || !Global_1904612->f_8189)
		{
			return 0;
		}
	}
	if (!func_344())
	{
		return 0;
	}
	return 1;
}

void func_280(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904612[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1904612)[iParam0] = uVar0;
}

void func_281(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 181;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 7, 7, &uParam1);
}

void func_282(int iParam0, int iParam1)
{
	struct<11> Var0;
	struct<2> Var17;
	int iVar19;

	Var0.f_10 = 1106247680;
	func_31(&Var0, iParam0, -1, -1, 255);
	Var17 = { func_215(iParam0, 1346578557) };
	if (!STATS::STAT_ID_GET_INT(&Var17, &iVar19))
	{
		return;
	}
	if (iParam1 > 15)
	{
		return;
	}
	MISC::SET_BIT(&iVar19, iParam1);
	if (!func_88(&Var0, 4) && func_345(iVar19) == Var0.f_1)
	{
		iVar19 = 0;
	}
	if (!STATS::STAT_ID_SET_INT(&Var17, iVar19, true))
	{
	}
	((*Global_1242415)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*56*/])->f_36[iParam0] = iVar19;
}

void func_283(struct<2> Param0)
{
	struct<32> Var0;

	if (func_201(Param0) == 0)
	{
	}
	else if (!STATS::_0x01F4D242765C6B24(func_201(Param0)))
	{
	}
	else
	{
		STATS::_0xB2A38826E5886E83(func_201(Param0), Global_265331->f_124445.f_70.f_17);
		if (func_346(Param0, &Var0))
		{
			if (Var0.f_29 == -681494152)
			{
				STATS::_0xF21A5D66874FCEDD(Var0.f_2, 0, joaat("race"));
			}
			STATS::_0xF21A5D66874FCEDD(Var0.f_2, Var0.f_29, 0);
			STATS::_0xF21A5D66874FCEDD(Var0.f_2, Var0.f_30, 0);
			STATS::_0xF21A5D66874FCEDD(Var0.f_2, Var0.f_31, 0);
		}
	}
}

void func_284(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_215(iParam0, -1797584255) };
	STATS::_0x6A0184E904CDF25E(&Var0, true);
}

int func_285(struct<2> Param0, int iParam2)
{
	if (!func_36(Param0))
	{
		return 0;
	}
	func_347(iParam2);
	switch (Param0)
	{
		case 2:
			MISC::_COPY_MEMORY(iParam2, Global_1070355->f_634[Param0.f_1 /*3*/], 3);
			return 1;
		case 3:
			MISC::_COPY_MEMORY(iParam2, Global_1070355->f_634.f_602[Param0.f_1 /*3*/], 3);
			return 1;
		case 4:
			MISC::_COPY_MEMORY(iParam2, Global_1070355->f_634.f_2104[Param0.f_1 /*3*/], 3);
			return 1;
		case 5:
			MISC::_COPY_MEMORY(iParam2, Global_1070355->f_634.f_12606[Param0.f_1 /*3*/], 3);
			return 1;
		case 6:
			MISC::_COPY_MEMORY(iParam2, Global_1070355->f_634.f_12908[Param0.f_1 /*3*/], 3);
			return 1;
		case 7:
			MISC::_COPY_MEMORY(iParam2, Global_1070355->f_634.f_15910[Param0.f_1 /*3*/], 3);
			return 1;
		case 8:
			MISC::_COPY_MEMORY(iParam2, Global_1070355->f_634.f_15981[Param0.f_1 /*3*/], 3);
			return 1;
		default:
			break;
	}
	return 0;
}

int func_286()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	vVar1.x = Global_1232796->f_8113;
	vVar1.f_2 = -1041770777;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(vVar1.f_1), &vVar1))
	{
		iVar0 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(vVar1.x, vVar1.y);
	}
	return iVar0;
}

void func_287(var uParam0, var uParam1)
{
}

void func_288(int iParam0)
{
	int iVar0;
	bool bVar1;
	var uVar2;
	bool bVar3;

	if (Global_19 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1939168->f_32);
	Global_1939168->f_21 = func_348();
	if (Global_1939168->f_21)
	{
		Global_1939168->f_22 = MISC::GET_GAME_TIMER();
	}
	bVar1 = false;
	if (WEAPON::IS_WEAPON_VALID(Global_1939168->f_38))
	{
		bVar1 = true;
		if (PED::IS_PED_SHOOTING(Global_35))
		{
			if (WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar2))
			{
			}
			else
			{
				uVar2 = Global_1939168->f_38;
			}
			Global_1939168->f_40 = uVar2;
		}
	}
	switch (iVar0)
	{
		case 0:
			func_349(&(Global_1939168->f_28), &(Global_1939168->f_33));
			Global_1939168->f_32 = iParam0;
			break;
		case 1:
			Global_1939168->f_24 = PLAYER::_0x72AD59F7B7FB6E24(PLAYER::PLAYER_ID(), 4000);
			if (!Global_1939168->f_24)
			{
				if (bVar1 && WEAPON::_0x6E4E1A82081EABED(Global_1939168->f_38))
				{
					Global_1939168->f_24 = PED::_0xB65A4DAB460A19BD(Global_35) != 0;
				}
				if (Global_1939168->f_40 == 1151374672)
				{
					Global_1939168->f_24 = WEAPON::_0x46D42883E873C1D7(Global_35) > 0;
				}
			}
			break;
		case 2:
			bVar3 = WEAPON::IS_WEAPON_VALID(Global_1939168->f_40);
			if (bVar3 && WEAPON::_0x6E4E1A82081EABED(Global_1939168->f_40))
			{
				Global_1939168->f_19 = 0;
			}
			else
			{
				if (bVar3 && WEAPON::_0x5809DBCA0A37C82B(Global_1939168->f_40))
				{
					Global_1939168->f_19 = PED::_0x285D36C5C72B0569(Global_35) <= 3f;
				}
				else
				{
					Global_1939168->f_19 = PED::_0x285D36C5C72B0569(Global_35) <= 1f;
				}
				if (Global_1939168->f_19)
				{
					Global_1939168->f_23 = MISC::GET_FRAME_COUNT();
				}
			}
			break;
		default:
			Global_1939168->f_32 = iParam0 + 1;
			break;
	}
	Global_19 |= 4;
}

var func_289(int iParam0)
{
	return &(Global_1099293->f_372[iParam0 /*3*/]);
}

int func_290(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (func_350(bParam0, &iVar0, &iVar1))
	{
		if (bParam1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && PED::GET_PED_CONFIG_FLAG(iVar0, 6, false))
			{
				return 0;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && PED::GET_PED_CONFIG_FLAG(iVar1, 6, false))
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_291(var uParam0)
{
	int iVar0;

	iVar0 = Global_1939168->f_34;
	if (func_28() == -1)
	{
		if (Global_1939168->f_34 == 0)
		{
			iVar0 = func_351(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1939168->f_34) || !&Global_1954462->f_1616[4])
	{
		iVar0 = func_351(uParam0);
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_323(iVar0) == -1)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
	{
		return 0;
	}
	uParam0->f_14 = iVar0;
	return 1;
}

void func_292(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_352(uParam0);
	}
}

int func_293(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_323(iParam2);
	}
	else
	{
		iVar1 = func_322(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_323(iParam0);
	}
	else
	{
		iVar0 = func_322(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return 1;
		}
	}
	if (func_137(*uParam1, 8388608))
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

float func_294(int iParam0, int iParam1)
{
	return func_318(iParam0, iParam1, 1, 1);
}

float func_295(var uParam0)
{
	return uParam0->f_28;
}

int func_296(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_297(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_164(uParam0, 134217728);
	}
	else
	{
		func_178(uParam0, 134217728);
	}
}

void func_298()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

int func_299(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5)
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
	if ((WEAPON::_0x6E4E1A82081EABED(Global_1939168->f_38) || 1151374672 == Global_1939168->f_38) && Global_1939168->f_21)
	{
	}
	else if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, 0, 0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar2) && iParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2))
		{
			return 0;
		}
	}
	if (Global_1939168->f_34 != 0)
	{
		if (PED::_0xB676EFDA03DADA52(Global_1939168->f_34, 1) == iParam0)
		{
			return 0;
		}
	}
	if (bParam3)
	{
		if (((WEAPON::_0xCB690F680A3EA971(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, iParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_318(iVar0, iParam0, 1, 1) <= 4f)
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
		if (WEAPON::_0x6AD66548840472E5(func_353(iVar0, 0)))
		{
			if (func_354(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_300(var uParam0)
{
	return uParam0->f_17;
}

int func_301(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_12 > fParam3)
	{
		return 0;
	}
	fVar0 = -1f;
	if (!func_137(*uParam0, 4194304))
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

int func_302(var uParam0)
{
	return uParam0->f_18;
}

int func_303(var uParam0)
{
	return uParam0->f_19;
}

int func_304(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (WEAPON::_0x6AD66548840472E5(func_353(iVar0, 0)))
		{
			if (func_355(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_305(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1939168->f_12)
	{
		if ((bParam2 || Global_1939168->f_13 > 0) || Global_1939168->f_11 > 0)
		{
			return 1;
		}
	}
	else if (bParam1 && !Global_1939168->f_9 == 1370593166)
	{
		return 0;
	}
	if (Global_1939168->f_14 > 0 || (bParam2 && Global_1939168->f_14 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1939168->f_7)
		{
			if (bParam2 || Global_1939168->f_15 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_306(var uParam0)
{
	return uParam0->f_24;
}

int func_307(var uParam0)
{
	return uParam0->f_22;
}

int func_308(var uParam0)
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

int func_309(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_356(iParam0, vParam4, 0.5f))
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

int func_310(int iParam0)
{
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, false))
	{
		if (Global_1939168->f_38 == joaat("weapon_unarmed"))
		{
			return 1;
		}
		if (WEAPON::IS_WEAPON_VALID(Global_1939168->f_40))
		{
			if (WEAPON::_0x959383DCD42040DA(Global_1939168->f_40) || WEAPON::_0xC4DEC3CA8C365A5D(Global_1939168->f_40))
			{
				return 1;
			}
		}
	}
	if (func_357(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_311(int iParam0)
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

int func_312(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_358(iParam1))
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

int func_313(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_358(iParam1))
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

int func_314(var uParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = func_359(uParam0);
	if (func_358(iParam1))
	{
		return 0;
	}
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x2BA9D7BF629F920C(iParam1);
	}
	if (fParam2 < fVar0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, &(Global_1939168->f_28[iParam3]), 17))
		{
			if (PED::_0x06087579E7AA85A9(iParam1, &(Global_1939168->f_28[iParam3]), -1f, -1f, -1f, -1f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_315(int iParam0, int iParam1)
{
	if (!TASK::_0xEFC4303DDC6E60D3(iParam0))
	{
		return 0;
	}
	*iParam1 = TASK::_0xED1F514AF4732258(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		return 0;
	}
	if (PED::IS_PED_DEAD_OR_DYING(*iParam1, true))
	{
		return 0;
	}
	if (!PED::_0x2D64376CF437363E(*iParam1))
	{
		return 0;
	}
	return 1;
}

int func_316(int iParam0, int iParam1)
{
	if (PED::_0xB65A4DAB460A19BD(iParam0) == iParam1)
	{
		return 1;
	}
	if (WEAPON::_0x8D50F43298AB9545(iParam0, iParam1))
	{
		return 1;
	}
	if (!WEAPON::_0x6E4E1A82081EABED(func_360(iParam0, 1, 0, 0)) && !func_360(iParam0, 1, 0, 0) == 1151374672)
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

bool func_317(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

float func_318(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) && bParam3)
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) && bParam3)
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false), bParam2);
}

int func_319(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_320(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

float func_320(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

float func_321(var uParam0)
{
	return uParam0->f_25;
}

int func_322(int iParam0)
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

int func_323(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, true))
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

int func_324(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
		vVar3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	}
	vVar6 = { vParam1 - vVar0 };
	fVar9 = func_361(vVar3, vVar6);
	if (MISC::ABSF(fVar9) > fParam4)
	{
		if (fVar9 > 0f)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (func_362(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

int func_325(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	float fVar2;

	if (Global_1939168->f_34 != 0)
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
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, Global_1939168->f_34, 1, 1))
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
			if (func_315(Global_35, &iVar1))
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
		fVar2 = func_318(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
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
		if (func_318(iParam0, Global_1939168->f_34, 0, 1) < 2.5f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_1939168->f_34, iParam0))
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

int func_326(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_350(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_328(uParam1, iVar0))
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
				if (!bParam2 || !func_328(uParam1, iVar1))
				{
					if (func_320(iVar1, Global_36, 1) < 5f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_327(var uParam0)
{
	return func_137(*uParam0, 131072);
}

int func_328(var uParam0, int iParam1)
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

int func_329(int iParam0)
{
	return 0;
}

int func_330(var uParam0)
{
	return uParam0->f_21;
}

int func_331(int iParam0, var uParam1, bool bParam2, float fParam3)
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

int func_332(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	struct<11> Var2;

	Var2.f_10 = 1106247680;
	iVar1 = 1;
	while (iVar1 <= 23)
	{
		*uParam1 = iVar1;
		func_31(&Var2, *uParam1, -1, -1, 255);
		iVar0 = (iVar0 + Var2);
		if (iVar0 >= iParam0)
		{
			iVar0 = (iVar0 - Var2);
			*uParam2 = 0;
			while (*uParam2 <= (Var2 - 1))
			{
				if (iVar0 == iParam0)
				{
					return 1;
				}
				iVar0++;
				*uParam2++;
			}
		}
		iVar1++;
	}
	return 0;
}

struct<2> func_333(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

void func_334()
{
	func_95(&(Global_1244208->f_2003));
}

void func_335(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = Global_1273882->f_21;
	Var1 = { func_215(iParam0, 2087069356) };
	if (!STATS::STAT_ID_SET_INT(&Var1, iVar0, true))
	{
	}
}

int func_336(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > (func_363(iParam0) - 1))
	{
		return 0;
	}
	return 1;
}

var func_337(int iParam0)
{
	return iParam0 + 8;
}

void func_338(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	Var0 = { func_215(iParam1, 896190569) };
	if (!STATS::STAT_ID_GET_INT(&Var0, &iVar2))
	{
		return;
	}
	if (MISC::IS_BIT_SET(iVar2, iParam0))
	{
		return;
	}
	MISC::SET_BIT(&iVar2, iParam0);
	if (!STATS::STAT_ID_SET_INT(&Var0, iVar2, true))
	{
	}
}

bool func_339(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(&(Global_17173.f_2563[iParam0]), iParam1);
}

int func_340(int iParam0)
{
	if (func_342(iParam0, 4))
	{
		return 0;
	}
	return 1;
}

int func_341(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if ((Global_1904612->f_31[iParam0 /*9*/])->f_2 & 98304 == 0)
	{
		return 0;
	}
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar0 = 0;
	while (iVar0 < Global_40.f_3327)
	{
		if ((Global_40.f_3327[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if ((Global_1904612->f_31[iParam0 /*9*/])->f_2 & 131072 != 0)
			{
				iVar3 = 2;
			}
			if ((Global_1904612->f_31[iParam0 /*9*/])->f_2 & 524288 != 0)
			{
				iVar3 = 5;
			}
			iVar2 = (&Global_40.f_3327[iVar0 /*3*/] - iVar1);
			if ((Global_40.f_3327[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && (Global_1904612->f_31[iParam0 /*9*/])->f_2 & 32768 != 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_342(int iParam0, int iParam1)
{
	return ((Global_1904612->f_31[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

bool func_343(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

int func_344()
{
	if (!func_18())
	{
		return 0;
	}
	return Global_1904612->f_8187;
}

int func_345(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 = (iParam0 && (iParam0 - 1));
		iVar0++;
	}
	return iVar0;
}

int func_346(struct<2> Param0, var uParam2)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_285(Param0, &vVar0);
	if (func_364(Param0, vVar0.x, uParam2))
	{
		return 1;
	}
	return 0;
}

void func_347(int iParam0)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = -1;
}

int func_348()
{
	if (func_365())
	{
		return 0;
	}
	if (Global_1572887->f_13 == -1)
	{
		if (Global_1939168->f_38 == joaat("weapon_lasso"))
		{
			return PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_ATTACK"));
		}
		return PED::GET_PED_RESET_FLAG(Global_35, 311);
	}
	else
	{
		return &(Global_1954462->f_1616[3]);
	}
	return 0;
}

void func_349(var uParam0, var uParam1)
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

int func_350(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1939168->f_26))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1939168->f_26))
		{
			*iParam1 = Global_1939168->f_26;
			iVar0 = 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1939168->f_27))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1939168->f_27))
		{
			if (PED::_0x3AA24CCC0D451379(Global_1939168->f_27) || ENTITY::IS_ENTITY_DEAD(Global_1939168->f_27))
			{
				*iParam2 = Global_1939168->f_27;
				iVar0 = 1;
			}
		}
	}
	if (Global_1939168->f_24 && !PED::IS_PED_INJURED(Global_35))
	{
		iVar1 = PED::_0xB65A4DAB460A19BD(Global_35);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (!bParam0 || PED::IS_PED_HUMAN(iVar1))
			{
				*iParam1 = iVar1;
				iVar0 = 1;
			}
		}
	}
	return iVar0;
}

int func_351(var uParam0)
{
	int iVar0;
	int iVar1;

	if (iVar0 == 0)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_INTERACT_LOCKON_DETACH_HORSE")))
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
			if (!Global_1939168->f_6)
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

void func_352(var uParam0)
{
	int iVar0;

	if (Global_1939168->f_32 == 0)
	{
		func_178(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1939168->f_33)
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(Global_1939168->f_28[iVar0])))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(&(Global_1939168->f_28[iVar0])))
				{
					func_164(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}

var func_353(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

int func_354(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_355(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_355(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_356(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

int func_357(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (WEAPON::_0x9E2D5D6BC97A5F1E(iParam0, joaat("weapon_unarmed"), iParam1))
		{
			return 1;
		}
		else if (!bParam2)
		{
			if (WEAPON::IS_WEAPON_VALID(Global_1939168->f_38))
			{
				if (WEAPON::_0x959383DCD42040DA(Global_1939168->f_38) || Global_1939168->f_38 == joaat("weapon_melee_knife"))
				{
					if (WEAPON::_0x9E2D5D6BC97A5F1E(iParam0, Global_1939168->f_38, iParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_358(int iParam0)
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
	if (((((((((iVar0 == -1689755873 || iVar0 == 1690225020) || iVar0 == 1774730608) || iVar0 == 309374745) || iVar0 == -363194080) || iVar0 == 640190094) || iVar0 == -1085971095) || iVar0 == 49488831) || iVar0 == 343112864) || iVar0 == -2016812721)
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

float func_359(var uParam0)
{
	return uParam0->f_27;
}

int func_360(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

float func_361(vector3 vParam0, vector3 vParam3)
{
	float fVar0;

	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		vParam0.x = (vParam0.x / fVar0);
		vParam0.f_1 = (vParam0.y / fVar0);
	}
	fVar0 = BUILTIN::VMAG(vParam3);
	if (fVar0 != 0f)
	{
		vParam3.x = (vParam3.x / fVar0);
		vParam3.f_1 = (vParam3.y / fVar0);
	}
	return ((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y));
}

bool func_362(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

int func_363(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return 4;
		case 4:
			return 2;
		default:
			break;
	}
	return 8;
}

int func_364(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (!func_366(iParam0))
	{
		return 0;
	}
	if (func_367(iParam0, uParam1, &uVar0))
	{
		func_368(iParam0, &uVar0, uParam2);
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_365()
{
	switch (Global_1939168->f_38)
	{
		case joaat("weapon_melee_lantern"):
		case joaat("weapon_kit_binoculars"):
		case joaat("weapon_melee_lantern_electric"):
		case joaat("weapon_melee_davy_lantern"):
		case 1652431022: /* GXTEntry: "Refined Binoculars" */
			return 1;
		default:
			break;
	}
	return 0;
}

int func_366(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_367(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1131373->f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_369(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_368(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_370(iParam0, uParam2->f_1);
	uParam1->f_2 = -2140901307;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_2 = iVar0;
	uParam1->f_2 = -2140901307;
	DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_9), uParam1);
	uParam1->f_2 = 1292053410;
	DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_17), uParam1);
	if (*uParam2 == 3)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_371(iVar0);
		}
	}
	else if (*uParam2 == 4)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = iVar0;
		}
	}
	else if (*uParam2 == 5)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_372(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_373(iVar0);
		}
		uParam1->f_2 = 162343104;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_374(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_7 = func_375(iVar0);
	uParam1->f_2 = 1060782978;
	DATAFILE::_DATAFILE_GET_HASH(&(uParam2->f_8), uParam1);
	uParam1->f_2 = 162343104;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_6), uParam1);
	uParam1->f_2 = -733480474;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_25), uParam1);
	uParam1->f_2 = 492825771;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_26), uParam1);
	uParam1->f_2 = -839279581;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_27), uParam1);
	uParam1->f_2 = -640941103;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_28), uParam1);
	iVar0 = 0;
	uParam1->f_2 = -2025968302;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_29 = iVar0;
	iVar0 = 0;
	uParam1->f_2 = -1829781569;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_30 = iVar0;
	iVar0 = 0;
	uParam1->f_2 = -1999176766;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_31 = iVar0;
}

int func_369(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("challenge");
			break;
		case -3:
			iVar0 = 1300413597;
			break;
		case 1:
			iVar0 = -1841318328;
			break;
		case -2:
			iVar0 = joaat("gold");
			break;
		case 2:
			iVar0 = -1599460565;
			break;
		case 3:
			iVar0 = 1610555441;
			break;
		case 4:
			iVar0 = 2080488347;
			break;
		case 5:
			iVar0 = 1107336882;
			break;
		case 6:
			iVar0 = -1307562954;
			break;
		case 7:
			iVar0 = 1198585370;
			break;
		case 8:
			iVar0 = 1753821005;
			break;
		case 9:
			iVar0 = joaat("property");
			break;
		case 10:
			iVar0 = 1894568478;
			break;
		case 11:
			iVar0 = joaat("title");
			break;
		case 12:
			iVar0 = joaat("shop");
			break;
		case 13:
			iVar0 = 1252941330;
			break;
		case 14:
			iVar0 = -1930354636;
			break;
		case 15:
			iVar0 = 1332629624;
			break;
		case 16:
			iVar0 = 1746212499;
			break;
		case 17:
			iVar0 = 1859328971;
			break;
		case 18:
			iVar0 = 1151893103;
			break;
		case 19:
			iVar0 = -312924468;
			break;
	}
	return iVar0;
}

int func_370(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (func_376(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_371(int iParam0)
{
	switch (iParam0)
	{
		case 1336837986:
			return 0;
		case 2124631622:
			return 1;
		case -66250361:
			return 2;
		case 1443764480:
			return 3;
		case -668110249:
			return 4;
		case -1381389849:
			return 5;
		case 536699577:
			return 6;
		case 541147288:
			return 7;
		case 377122918:
			return 8;
		case 1158195437:
			return 9;
		case -1261475678:
			return 10;
		case -621956193:
			return 11;
		case 1081776803:
			return 12;
		case -218697175:
			return 13;
		case -867762478:
			return 14;
		case 602097925:
			return 15;
		case 1724417419:
			return 16;
		case -728200180:
			return 17;
		case 1404415665:
			return 18;
		case 339077182:
			return 20;
		case 650120418:
			return 21;
		case 1695693301:
			return 28;
		case -1809176396:
			return 19;
		case 349772825:
			return 22;
		case 1657045547:
			return 23;
		case -590482787:
			return 24;
		case -1711308722:
			return 25;
		case -409129282:
			return 26;
		case -1790985606:
			return 27;
		default:
			break;
	}
	return -1;
}

int func_372(int iParam0)
{
	switch (iParam0)
	{
		case -747096482:
			return 0;
		case 390152599:
			return 1;
		case 348001928:
			return 2;
		case 687137831:
			return 3;
		case 1221273613:
			return 4;
		case -669486032:
			return 5;
		case -1044132584:
			return 6;
		default:
			break;
	}
	return -1;
}

int func_373(int iParam0)
{
	switch (iParam0)
	{
		case 1697883736:
			return 0;
		case 1927192818:
			return 1;
		case -1363591469:
			return 2;
		case 1635448909:
			return 3;
		case -604494871:
			return 4;
		case -993281498:
			return 5;
		case -1871525158:
			return 6;
		case -596286663:
			return 12;
		case 923956646:
			return 13;
		case 1459450644:
			return 14;
		case -2071675432:
			return 15;
		case -552339597:
			return 7;
		case 2144670272:
			return 9;
		case 996459079:
			return 8;
		case 1996177174:
			return 10;
		case -1702168032:
			return 11;
		default:
			break;
	}
	return -1;
}

int func_374(int iParam0)
{
	switch (iParam0)
	{
		case 2049341823:
			return 0;
		case 1655635003:
			return 1;
		case -435635781:
			return 2;
		case 2006131499:
			return 3;
		case -1641798436:
			return 4;
		case 352400957:
			return 5;
		case 1211286129:
			return 6;
		case 787592898:
			return 7;
		case -568832219:
			return 8;
		case -1103026985:
			return 9;
		default:
			break;
	}
	return 0;
}

int func_375(int iParam0)
{
	switch (iParam0)
	{
		case joaat("null"):
			return -1;
		case joaat("normal"):
			return 0;
		case -640677282:
			return 1;
		case -1950303839:
			return 2;
		case 1322114923:
			return 3;
		case -525004462:
			return 4;
		case 1419735597:
			return 5;
		case 1004744465:
			return 6;
		case joaat("bountyhunter"):
			return 7;
		case 1777227915:
			return 8;
		case 408825843:
			return 9;
		case joaat("hunter"):
			return 10;
		case 64621749:
			return 11;
		case -1346830927:
			return 12;
		case -218234180:
			return 13;
		case 751663875:
			return 14;
		case 1766283257:
			return 15;
		case -269943670:
			return 16;
		case 522313648:
			return 17;
		default:
			break;
	}
	return -1;
}

int func_376(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (func_377(iParam0, uParam1, &uVar0))
	{
		func_378(&uVar0, iParam0, uParam2);
	}
	else
	{
		return 0;
	}
	return 1;
}

bool func_377(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1131373->f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_369(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_378(var uParam0, int iParam1, var uParam2)
{
	var uVar0;

	*uParam2 = iParam1;
	uParam0->f_2 = -611386243;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_1), uParam0);
	uParam0->f_2 = -2140901307;
	if (DATAFILE::_DATAFILE_GET_HASH(&uVar0, uParam0))
	{
		uParam2->f_2 = uVar0;
	}
	uParam0->f_2 = -2140901307;
	DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_11), uParam0);
	uParam0->f_2 = 1292053410;
	DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_19), uParam0);
	uParam0->f_2 = 1234058424;
	DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_3), uParam0);
}

