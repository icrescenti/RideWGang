#region Local Var
	struct<34> Local_0 = { 0, 0, 0, 0, 0, 0, -1, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0 } ;
	var uLocal_34 = 3;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 3;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	struct<27> Local_42[32];
	struct<213> Local_907 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1061997773, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1061997773, 0, 0, 0, 0, 0, 0, 0, 0, -1, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0 } ;
	var uLocal_1120 = 0;
	var uLocal_1121 = 1;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 1065353216;
	var uLocal_1125 = 0;
	var uLocal_1126 = 1065353216;
	var uLocal_1127 = 1077936128;
	var uLocal_1128 = 1108082688;
	var uLocal_1129 = 1113325568;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	var uLocal_1132 = 1;
	var uLocal_1133 = 0;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
	var uLocal_1141 = 0;
	var uLocal_1142 = 7;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = -1;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	var uLocal_1156 = 0;
	float fLocal_1157 = 0f;
	float fLocal_1158 = 0f;
	var uLocal_1159 = 0;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_1157 = 1f;
	fLocal_1158 = 1f;
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
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_0, 42, 41);
	func_10(NETWORK::_0xBA24095EA96DFE17(&Local_0), 42, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_42, 865, 42);
	func_11(NETWORK::_0x690806BC83BC8CA2(Local_42[0 /*27*/]), 865, "m_clientData");
	func_12(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
}

void func_2(struct<5> Param0)
{
	if (Local_0 == 6)
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
	else if (func_17(Local_907.f_9, 0, 1))
	{
		return 1;
	}
	else if (!func_18())
	{
		return 1;
	}
	else if (!func_19(Local_907.f_12))
	{
		return 1;
	}
	else if (!func_21(func_20(Local_907.f_12), Local_907.f_9))
	{
		return 1;
	}
	else if (Local_907.f_8 == 6)
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
	func_30();
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
	MISC::_COPY_MEMORY(&Local_907, &uParam0, 5);
	iVar19 = func_31(&bVar18, Local_907.f_1, Local_907.f_2);
	if (bVar18 || iVar19 == -1)
	{
		return;
	}
	Local_907.f_12 = iVar19;
	iVar17 = (Global_1184672->f_231.f_1066[iVar19 /*17*/])->f_5;
	func_32(&Var0, Local_907.f_1, Local_907.f_2, Local_907.f_3, iVar17);
	Local_907.f_9 = { func_33(Var0.f_5, 8) };
	Local_907.f_14 = Var0.f_5;
	Local_907.f_15 = { Var0.f_11 };
	func_34();
	func_35();
}

void func_14()
{
	func_36();
}

void func_15()
{
	func_37();
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
	if (func_38(*Global_1051163) && !func_21(*Global_1051163, Param0))
	{
		Global_1070355->f_26837 = 2;
		return 1;
	}
	if (iParam2 != 0 && func_39(iParam2))
	{
		return 1;
	}
	if (iParam3 != 0 && func_40(iParam3, 255))
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
	if (func_41())
	{
		Global_1070355->f_26837 = 7;
		return 1;
	}
	if (Global_1572887->f_7 & 1 != 0)
	{
		if (!func_38(*Global_1051163))
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
	if (Local_0 <= 5)
	{
		func_42();
	}
	switch (Local_0)
	{
		case 0:
			func_43();
			break;
		case 1:
			func_44();
			break;
		case 2:
			func_45();
			break;
		case 3:
			func_46();
			break;
		case 4:
			func_47();
			break;
		case 5:
			func_48();
			break;
	}
}

void func_23()
{
	func_49();
	if (Local_907.f_8 <= 5)
	{
		func_50();
	}
	switch (Local_907.f_8)
	{
		case 0:
			func_51();
			break;
		case 1:
			func_52();
			break;
		case 2:
			func_53();
			break;
		case 3:
			func_54();
			break;
		case 4:
			func_55();
			break;
		case 5:
			func_56();
			break;
	}
}

void func_24()
{
	func_57();
}

void func_25()
{
	if (func_58())
	{
		if (VOLUME::_0xF6A8A652A6B186CD(Local_0.f_3.f_1))
		{
			VOLUME::_0xFDFECC6EE4491E11(Local_0.f_3.f_1);
		}
	}
	func_59();
}

void func_26()
{
	func_60();
	func_61();
}

void func_27()
{
	if (Local_907.f_12 != -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1)
		{
			func_62(Local_907.f_12, 4);
		}
	}
	func_63();
	if (func_64(32))
	{
		func_65(Local_0.f_6);
	}
	func_66();
}

int func_28()
{
	return Global_1572887->f_13;
}

bool func_29()
{
	return Global_1051202->f_8;
}

void func_30()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			Local_0.f_33.f_1[iVar0] = 255;
			iVar0++;
		}
	}
}

int func_31(var uParam0, int iParam1, int iParam2)
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
	func_32(&Var26, iParam1, iParam2, -1, 255);
	func_67(&Var0, Var26);
	iVar25 = func_68(&Var0);
	if (func_19(iVar25))
	{
		Var10 = { func_69(iVar25) };
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

void func_32(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
			func_70(iParam0, iParam2);
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
			func_71(iParam0);
			switch (iParam2)
			{
				case 0:
					func_72(iParam0);
					iParam0->f_5 = 277430601;
					iParam0->f_11 = { -1925.343f, -2119.336f, 52.16934f };
					break;
				case 1:
					func_72(iParam0);
					iParam0->f_5 = 1659133778;
					iParam0->f_11 = { 136.298f, 35.34337f, 101.2795f };
					break;
				case 2:
					func_72(iParam0);
					iParam0->f_5 = 1296650927;
					iParam0->f_11 = { -910.7408f, 860.8453f, 134.6651f };
					break;
				case 3:
					func_72(iParam0);
					iParam0->f_5 = 2115437634;
					iParam0->f_11 = { 2788.779f, 1077.284f, 57.99089f };
					break;
				case 4:
					func_72(iParam0);
					iParam0->f_5 = 1098622970;
					iParam0->f_11 = { 1751.914f, -1117.739f, 40.70011f };
					break;
				case 5:
					func_72(iParam0);
					iParam0->f_5 = 393263596;
					iParam0->f_11 = { 1290.432f, -836.7289f, 77.47561f };
					break;
				case 6:
					func_72(iParam0);
					iParam0->f_5 = 189453630;
					iParam0->f_11 = { 308.1141f, 1187.807f, 180.1746f };
					break;
				case 7:
					func_72(iParam0);
					iParam0->f_5 = -98921343;
					iParam0->f_11 = { -1779.538f, -235.3894f, 181.2029f };
					break;
				case 8:
					func_72(iParam0);
					iParam0->f_5 = 6025033;
					iParam0->f_11 = { -1290.399f, -1179.199f, 72.33453f };
					break;
				case 9:
					func_72(iParam0);
					iParam0->f_5 = -1060299979;
					iParam0->f_11 = { -2306.89f, -1546.208f, 152.0187f };
					break;
				case 10:
					func_72(iParam0);
					iParam0->f_5 = 682088681;
					iParam0->f_11 = { -2724.458f, -2521.524f, 64.76124f };
					break;
				case 11:
					func_72(iParam0);
					iParam0->f_5 = 1705841922;
					iParam0->f_11 = { -4461.883f, -3271.474f, 14.54459f };
					break;
				case 12:
					func_72(iParam0);
					iParam0->f_5 = -301205165;
					iParam0->f_11 = { -4631.054f, -2738.483f, -12.13559f };
					break;
				case 13:
					func_72(iParam0);
					iParam0->f_5 = 1906160715;
					iParam0->f_11 = { -5678.259f, -3182.939f, -22.66476f };
					break;
				case 14:
					func_72(iParam0);
					iParam0->f_5 = -1129906020;
					iParam0->f_11 = { -1688.868f, -2272.091f, 44.12061f };
					break;
				case 15:
					func_72(iParam0);
					iParam0->f_5 = 1592980994;
					iParam0->f_11 = { -1621.917f, 1628.208f, 235.9645f };
					break;
				case 16:
					func_72(iParam0);
					iParam0->f_5 = 686459378;
					iParam0->f_11 = { 420.3633f, 2020.91f, 230.4423f };
					break;
				case 17:
					func_72(iParam0);
					iParam0->f_5 = -259262381;
					iParam0->f_11 = { -517.4607f, 510.5349f, 102.2307f };
					break;
				case 18:
					func_72(iParam0);
					iParam0->f_5 = 1289806844;
					iParam0->f_11 = { 1775.601f, 546.3866f, 106.6334f };
					break;
				case 19:
					func_72(iParam0);
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
			func_71(iParam0);
			switch (iParam2)
			{
				case 0:
					func_73(iParam0, 2);
					func_73(iParam0, 3);
					func_73(iParam0, 5);
					iParam0->f_5 = 1454566440;
					iParam0->f_11 = { 2252.035f, 1342.706f, 84.5573f };
					break;
				case 1:
					func_73(iParam0, 2);
					func_73(iParam0, 3);
					func_73(iParam0, 5);
					iParam0->f_5 = 1141360338;
					iParam0->f_11 = { 2280.7f, 1608.79f, 84.32f };
					break;
				case 2:
					func_73(iParam0, 0);
					func_73(iParam0, 1);
					func_73(iParam0, 2);
					func_73(iParam0, 3);
					func_73(iParam0, 5);
					iParam0->f_5 = 844768119;
					iParam0->f_11 = { 2438.612f, 960.3168f, 73.0963f };
					break;
				case 3:
					func_73(iParam0, 0);
					func_73(iParam0, 2);
					func_73(iParam0, 3);
					func_73(iParam0, 4);
					func_73(iParam0, 5);
					func_73(iParam0, 7);
					iParam0->f_5 = -1601993562;
					iParam0->f_11 = { 1130.541f, 575.7938f, 86.66257f };
					break;
				case 4:
					func_73(iParam0, 0);
					func_73(iParam0, 2);
					func_73(iParam0, 3);
					func_73(iParam0, 5);
					func_73(iParam0, 7);
					iParam0->f_5 = -901588956;
					iParam0->f_11 = { -754.3893f, -399.1133f, 40.84306f };
					break;
				case 5:
					func_73(iParam0, 0);
					func_73(iParam0, 2);
					func_73(iParam0, 3);
					func_73(iParam0, 5);
					func_73(iParam0, 7);
					iParam0->f_5 = 2129019244;
					iParam0->f_11 = { -410.6756f, -63.938f, 40.7762f };
					break;
				case 6:
					func_73(iParam0, 0);
					func_73(iParam0, 2);
					func_73(iParam0, 4);
					func_73(iParam0, 5);
					func_73(iParam0, 6);
					iParam0->f_5 = 1227099802;
					iParam0->f_11 = { -2085.777f, -161.9067f, 208.0633f };
					break;
				case 7:
					func_73(iParam0, 0);
					func_73(iParam0, 2);
					func_73(iParam0, 4);
					func_73(iParam0, 5);
					func_73(iParam0, 6);
					iParam0->f_5 = -940471213;
					iParam0->f_11 = { -1678.304f, -517.8369f, 140.867f };
					break;
				case 8:
					func_73(iParam0, 0);
					func_73(iParam0, 2);
					func_73(iParam0, 4);
					func_73(iParam0, 5);
					func_73(iParam0, 6);
					iParam0->f_5 = -700569364;
					iParam0->f_11 = { -2624.881f, -339.7662f, 141.8102f };
					break;
				case 9:
					func_73(iParam0, 0);
					func_73(iParam0, 1);
					iParam0->f_5 = 412376369;
					iParam0->f_11 = { -926.5729f, -924.4639f, 41.1771f };
					break;
				case 10:
					func_73(iParam0, 0);
					func_73(iParam0, 2);
					func_73(iParam0, 5);
					func_73(iParam0, 7);
					iParam0->f_5 = -364052317;
					iParam0->f_11 = { -722.9517f, -1718.81f, 41.41f };
					break;
				case 11:
					func_73(iParam0, 0);
					func_73(iParam0, 1);
					iParam0->f_5 = -989186530;
					iParam0->f_11 = { -1069.18f, -1919.616f, 42.3447f };
					break;
				case 12:
					func_73(iParam0, 0);
					func_73(iParam0, 2);
					func_73(iParam0, 3);
					func_73(iParam0, 4);
					func_73(iParam0, 5);
					func_73(iParam0, 6);
					iParam0->f_5 = 333858683;
					iParam0->f_11 = { 1673.672f, 1440.046f, 146.0849f };
					break;
				case 13:
					func_73(iParam0, 0);
					func_73(iParam0, 1);
					iParam0->f_5 = -39511303;
					iParam0->f_11 = { 1562.434f, 1445.237f, 145.2842f };
					break;
				case 14:
					func_73(iParam0, 3);
					func_73(iParam0, 4);
					func_73(iParam0, 5);
					func_73(iParam0, 6);
					iParam0->f_5 = 813662381;
					iParam0->f_11 = { 1244.927f, 1177.251f, 148.8856f };
					break;
				case 15:
					func_73(iParam0, 2);
					func_73(iParam0, 3);
					func_73(iParam0, 5);
					func_73(iParam0, 7);
					iParam0->f_5 = -1114006686;
					iParam0->f_11 = { 1926.703f, -362.3477f, 42.4864f };
					break;
				case 16:
					func_73(iParam0, 0);
					func_73(iParam0, 1);
					func_73(iParam0, 3);
					func_73(iParam0, 5);
					func_73(iParam0, 7);
					iParam0->f_5 = 1049238845;
					iParam0->f_11 = { 2192.489f, -318.3198f, 40.7232f };
					break;
				case 17:
					func_73(iParam0, 0);
					func_73(iParam0, 1);
					func_73(iParam0, 3);
					func_73(iParam0, 5);
					func_73(iParam0, 7);
					iParam0->f_5 = 1363886783;
					iParam0->f_11 = { 2408.447f, -490.4562f, 40.9243f };
					break;
				case 18:
					func_73(iParam0, 0);
					func_73(iParam0, 1);
					func_73(iParam0, 2);
					func_73(iParam0, 3);
					func_73(iParam0, 5);
					iParam0->f_5 = -1215674354;
					iParam0->f_11 = { -3243.502f, -3187.141f, -9.3137f };
					break;
				case 19:
					func_73(iParam0, 0);
					func_73(iParam0, 1);
					iParam0->f_5 = 1902132155;
					iParam0->f_11 = { -1745.01f, -2929.141f, -12.3355f };
					break;
				case 20:
					func_73(iParam0, 0);
					func_73(iParam0, 1);
					func_73(iParam0, 2);
					func_73(iParam0, 3);
					func_73(iParam0, 5);
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
			func_71(iParam0);
			iParam0->f_15 = -2090512547;
			switch (iParam2)
			{
				case 0:
					func_72(iParam0);
					iParam0->f_5 = 1382777618;
					iParam0->f_11 = { -228.7198f, 824.1839f, 123.3019f };
					break;
				case 1:
					func_72(iParam0);
					iParam0->f_5 = -2000681184;
					iParam0->f_11 = { 1274.578f, -1218.286f, 80.6496f };
					break;
				case 2:
					func_72(iParam0);
					iParam0->f_5 = 886884092;
					iParam0->f_11 = { -954.4733f, -1203.246f, 54.5241f };
					break;
				case 3:
					func_72(iParam0);
					iParam0->f_5 = -1277120723;
					iParam0->f_11 = { -5442.537f, -2904.509f, -0.0668f };
					break;
				case 4:
					func_72(iParam0);
					iParam0->f_5 = 1577436816;
					iParam0->f_11 = { -4438.908f, -2693.073f, -12.033f };
					break;
				case 5:
					func_72(iParam0);
					iParam0->f_5 = -234749781;
					iParam0->f_11 = { -3339.601f, -2869.283f, -6.9507f };
					break;
				case 6:
					func_72(iParam0);
					iParam0->f_5 = -1607623039;
					iParam0->f_11 = { 1396.14f, -643.1758f, 70.4818f };
					break;
				case 7:
					func_72(iParam0);
					iParam0->f_5 = -1943295936;
					iParam0->f_11 = { 1735.865f, -422.7769f, 47.1349f };
					break;
				case 8:
					func_72(iParam0);
					iParam0->f_5 = -397730168;
					iParam0->f_11 = { 1978.501f, -1902.647f, 41.0487f };
					break;
				case 9:
					func_72(iParam0);
					iParam0->f_5 = -392659534;
					iParam0->f_11 = { 2757.999f, -1078.666f, 45.8905f };
					break;
				case 10:
					func_72(iParam0);
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
			func_71(iParam0);
			switch (iParam2)
			{
				case 0:
					func_72(iParam0);
					iParam0->f_5 = 1247886914;
					iParam0->f_11 = { 2777.227f, 463.4025f, 65.2501f };
					break;
				case 1:
					func_72(iParam0);
					iParam0->f_5 = 1926100410;
					iParam0->f_11 = { 1428.817f, -1812.995f, 57.37384f };
					break;
				case 2:
					func_72(iParam0);
					iParam0->f_5 = 603340011;
					iParam0->f_11 = { 2578.893f, -852.3694f, 41.3078f };
					break;
				case 3:
					func_72(iParam0);
					iParam0->f_5 = -1253915394;
					iParam0->f_11 = { 2798.119f, 1432.187f, 77.71185f };
					break;
				case 4:
					func_72(iParam0);
					iParam0->f_5 = 1281783573;
					iParam0->f_11 = { 1243.455f, 526.5765f, 87.43867f };
					break;
				case 5:
					func_72(iParam0);
					iParam0->f_5 = -1384936716;
					iParam0->f_11 = { -28.69774f, 1111.23f, 167.9945f };
					break;
				case 6:
					func_72(iParam0);
					iParam0->f_5 = 636669604;
					iParam0->f_11 = { -546.6091f, -298.2057f, 52.56811f };
					break;
				case 7:
					func_72(iParam0);
					iParam0->f_5 = 1410575087;
					iParam0->f_11 = { -1403.688f, 383.7506f, 102.2472f };
					break;
				case 8:
					func_72(iParam0);
					iParam0->f_5 = -736919321;
					iParam0->f_11 = { -1510.116f, -883.8221f, 88.72778f };
					break;
				case 9:
					func_72(iParam0);
					iParam0->f_5 = 1755496218;
					iParam0->f_11 = { -1459.752f, -1915.602f, 50.93545f };
					break;
				case 10:
					func_72(iParam0);
					iParam0->f_5 = -1810033095;
					iParam0->f_11 = { -2470.018f, -2426.993f, 59.1458f };
					break;
				case 11:
					func_72(iParam0);
					iParam0->f_5 = 99707271;
					iParam0->f_11 = { -3092.935f, -3166.527f, -1.36638f };
					break;
				case 12:
					func_72(iParam0);
					iParam0->f_5 = 2145033839;
					iParam0->f_11 = { -3685.624f, -2769.247f, -15.14988f };
					break;
				case 13:
					func_72(iParam0);
					iParam0->f_5 = -994111457;
					iParam0->f_11 = { -4668.993f, -3706.819f, 12.54352f };
					break;
				case 14:
					func_72(iParam0);
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
					func_74(iParam0, 0);
					func_74(iParam0, 1);
					func_74(iParam0, 4);
					func_74(iParam0, 5);
					break;
				case 1:
					func_74(iParam0, 2);
					func_74(iParam0, 3);
					func_74(iParam0, 6);
					func_74(iParam0, 7);
					func_75(iParam0, 2);
					break;
			}
			switch (iParam2)
			{
				case 0:
					func_73(iParam0, 0);
					iParam0->f_5 = -88606612;
					iParam0->f_11 = { 498.9236f, 1191.276f, 179.5016f };
					break;
				case 1:
					func_73(iParam0, 1);
					iParam0->f_5 = -1507537085;
					iParam0->f_11 = { 114.87f, 1097.69f, 177.97f };
					break;
				case 2:
					func_73(iParam0, 0);
					iParam0->f_5 = 150331424;
					iParam0->f_11 = { 2271.753f, -440.5277f, 40.82026f };
					break;
				case 3:
					func_73(iParam0, 1);
					iParam0->f_5 = -74168995;
					iParam0->f_11 = { 2000.58f, -499.0656f, 41.0245f };
					break;
				case 4:
					func_73(iParam0, 0);
					iParam0->f_5 = -1303456769;
					iParam0->f_11 = { 2299.81f, -898.4015f, 41.04434f };
					break;
				case 5:
					func_73(iParam0, 1);
					iParam0->f_5 = 2080696176;
					iParam0->f_11 = { 2369.292f, -673.8396f, 41.36789f };
					break;
				case 6:
					func_73(iParam0, 0);
					iParam0->f_5 = -801880493;
					iParam0->f_11 = { 1531.33f, 1578.837f, 147.4066f };
					break;
				case 7:
					func_73(iParam0, 1);
					iParam0->f_5 = -2098877513;
					iParam0->f_11 = { 945.3031f, 1142.541f, 147.4809f };
					break;
				case 8:
					func_73(iParam0, 0);
					iParam0->f_5 = -985131289;
					iParam0->f_11 = { -1126.469f, 815.3829f, 117.6536f };
					break;
				case 9:
					func_73(iParam0, 1);
					iParam0->f_5 = 171385032;
					iParam0->f_11 = { -2063.813f, 935.3212f, 147.0808f };
					break;
				case 10:
					func_73(iParam0, 0);
					iParam0->f_5 = -690365399;
					iParam0->f_11 = { -1589.688f, -1425.319f, 80.34965f };
					break;
				case 11:
					func_73(iParam0, 1);
					iParam0->f_5 = -393773180;
					iParam0->f_11 = { -910.3301f, -1815.748f, 61.71241f };
					break;
				case 12:
					func_73(iParam0, 0);
					iParam0->f_5 = 1783045643;
					iParam0->f_11 = { -2690.104f, -2892.627f, 64.73759f };
					break;
				case 13:
					func_73(iParam0, 1);
					iParam0->f_5 = -1841828372;
					iParam0->f_11 = { -2914.53f, -2558.967f, 61.66708f };
					break;
				case 14:
					func_73(iParam0, 0);
					iParam0->f_5 = -1926357119;
					iParam0->f_11 = { -4545.762f, -3673.932f, 17.87756f };
					break;
				case 15:
					func_73(iParam0, 1);
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
					func_73(iParam0, 0);
					func_73(iParam0, 1);
					func_73(iParam0, 2);
					func_73(iParam0, 9);
					func_73(iParam0, 10);
					func_73(iParam0, 11);
					func_76(iParam0, iParam3);
					iParam0->f_5 = 666420762;
					iParam0->f_11 = { 468.6932f, 60.0849f, 134.4816f };
					break;
				case 1:
					func_73(iParam0, 1);
					func_73(iParam0, 2);
					func_73(iParam0, 8);
					func_73(iParam0, 9);
					func_73(iParam0, 10);
					func_73(iParam0, 11);
					func_76(iParam0, iParam3);
					iParam0->f_5 = 1145423923;
					iParam0->f_11 = { -408.7124f, 154.0742f, 40.84526f };
					break;
				case 2:
					func_73(iParam0, 1);
					func_73(iParam0, 2);
					func_73(iParam0, 3);
					func_73(iParam0, 4);
					func_73(iParam0, 5);
					func_73(iParam0, 6);
					func_73(iParam0, 9);
					func_73(iParam0, 10);
					func_73(iParam0, 11);
					func_76(iParam0, iParam3);
					iParam0->f_5 = -1176575305;
					iParam0->f_11 = { -1929.655f, -1348.338f, 105.84f };
					break;
				case 3:
					func_73(iParam0, 0);
					func_73(iParam0, 1);
					func_73(iParam0, 2);
					func_73(iParam0, 9);
					func_73(iParam0, 10);
					func_73(iParam0, 11);
					func_76(iParam0, iParam3);
					iParam0->f_5 = -888961792;
					iParam0->f_11 = { -2003.943f, -2158.135f, 54.2301f };
					break;
				case 4:
					func_73(iParam0, 0);
					func_73(iParam0, 1);
					func_73(iParam0, 2);
					func_73(iParam0, 9);
					func_73(iParam0, 10);
					func_73(iParam0, 11);
					func_76(iParam0, iParam3);
					iParam0->f_5 = -1145898130;
					iParam0->f_11 = { -1272.226f, 97.47642f, 70.53004f };
					break;
				case 5:
					func_73(iParam0, 1);
					func_73(iParam0, 2);
					func_73(iParam0, 3);
					func_73(iParam0, 4);
					func_73(iParam0, 7);
					func_73(iParam0, 8);
					func_73(iParam0, 9);
					func_73(iParam0, 10);
					func_73(iParam0, 11);
					func_76(iParam0, iParam3);
					iParam0->f_5 = -264936334;
					iParam0->f_11 = { -2350.861f, -359.485f, 143.7474f };
					break;
				case 6:
					func_73(iParam0, 1);
					func_73(iParam0, 2);
					func_73(iParam0, 3);
					func_73(iParam0, 6);
					func_73(iParam0, 7);
					func_73(iParam0, 9);
					func_73(iParam0, 10);
					func_73(iParam0, 11);
					func_76(iParam0, iParam3);
					iParam0->f_5 = -562839313;
					iParam0->f_11 = { -1736.757f, 306.2781f, 108.1355f };
					break;
				case 7:
					func_73(iParam0, 1);
					func_73(iParam0, 2);
					func_73(iParam0, 4);
					func_73(iParam0, 5);
					func_73(iParam0, 6);
					func_73(iParam0, 9);
					func_73(iParam0, 10);
					func_73(iParam0, 11);
					func_76(iParam0, iParam3);
					iParam0->f_5 = -819926700;
					iParam0->f_11 = { -4964.499f, -3399.889f, 7.97322f };
					break;
				case 8:
					func_73(iParam0, 0);
					func_73(iParam0, 1);
					func_73(iParam0, 2);
					func_73(iParam0, 9);
					func_73(iParam0, 10);
					func_73(iParam0, 11);
					func_76(iParam0, iParam3);
					iParam0->f_5 = -100890882;
					iParam0->f_11 = { -2192.805f, -2778.977f, 69.01174f };
					break;
				case 9:
					func_73(iParam0, 1);
					func_73(iParam0, 2);
					func_73(iParam0, 5);
					func_73(iParam0, 9);
					func_73(iParam0, 10);
					func_73(iParam0, 11);
					func_76(iParam0, iParam3);
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
			func_71(iParam0);
			switch (iParam2)
			{
				case 0:
					func_72(iParam0);
					iParam0->f_5 = -1562903685;
					iParam0->f_11 = { 1452.25f, -1695.116f, 64.9668f };
					break;
				case 1:
					func_72(iParam0);
					iParam0->f_5 = 442262250;
					iParam0->f_11 = { 1163.55f, -324.0086f, 97.10712f };
					break;
				case 2:
					func_72(iParam0);
					iParam0->f_5 = 2113001754;
					iParam0->f_11 = { 2682.104f, 858.447f, 85.90118f };
					break;
				case 3:
					func_72(iParam0);
					iParam0->f_5 = 222101843;
					iParam0->f_11 = { 1311.333f, 1183.934f, 151.5859f };
					break;
				case 4:
					func_72(iParam0);
					iParam0->f_5 = 862535295;
					iParam0->f_11 = { 40.99253f, 1813.064f, 189.5056f };
					break;
				case 5:
					func_72(iParam0);
					iParam0->f_5 = 267494763;
					iParam0->f_11 = { 109.9411f, 1282.256f, 176.292f };
					break;
				case 6:
					func_72(iParam0);
					iParam0->f_5 = 492498900;
					iParam0->f_11 = { -1450.859f, 1686.266f, 255.2526f };
					break;
				case 7:
					func_72(iParam0);
					iParam0->f_5 = -735417347;
					iParam0->f_11 = { 66.91456f, -445.5748f, 72.15018f };
					break;
				case 8:
					func_72(iParam0);
					iParam0->f_5 = 2000289900;
					iParam0->f_11 = { -1698.036f, 380.6171f, 106.0826f };
					break;
				case 9:
					func_72(iParam0);
					iParam0->f_5 = 1820563970;
					iParam0->f_11 = { -2016.359f, -909.5917f, 84.91344f };
					break;
				case 10:
					func_72(iParam0);
					iParam0->f_5 = 1501808210;
					iParam0->f_11 = { -1362.091f, -1267.624f, 82.41972f };
					break;
				case 11:
					func_72(iParam0);
					iParam0->f_5 = -1103422576;
					iParam0->f_11 = { -2449.051f, -1457.942f, 148.705f };
					break;
				case 12:
					func_72(iParam0);
					iParam0->f_5 = -375108461;
					iParam0->f_11 = { -1559.339f, -1930.728f, 50.99157f };
					break;
				case 13:
					func_72(iParam0);
					iParam0->f_5 = 1074344160;
					iParam0->f_11 = { -1764.444f, -2717.768f, 62.81413f };
					break;
				case 14:
					func_72(iParam0);
					iParam0->f_5 = 1375567406;
					iParam0->f_11 = { -2190.544f, -2200.288f, 64.42333f };
					break;
				case 15:
					func_72(iParam0);
					iParam0->f_5 = 1695022182;
					iParam0->f_11 = { -2803.26f, -3142.291f, 5.88098f };
					break;
				case 16:
					func_72(iParam0);
					iParam0->f_5 = 1773241795;
					iParam0->f_11 = { -3175.168f, -2402.267f, 22.72451f };
					break;
				case 17:
					func_72(iParam0);
					iParam0->f_5 = 1650499101;
					iParam0->f_11 = { -4220.611f, -2690.138f, 0.65931f };
					break;
				case 18:
					func_72(iParam0);
					iParam0->f_5 = 149116609;
					iParam0->f_11 = { -4372.619f, -3274.055f, 20.26154f };
					break;
				case 19:
					func_72(iParam0);
					iParam0->f_5 = 1486166046;
					iParam0->f_11 = { -5456.922f, -3562.744f, -21.1142f };
					break;
				case 20:
					func_72(iParam0);
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
			func_71(iParam0);
			func_75(iParam0, 2);
			switch (iParam2)
			{
				case 0:
					func_72(iParam0);
					iParam0->f_5 = -1657923088;
					iParam0->f_11 = { 959.0613f, 383.9384f, 111.0409f };
					break;
				case 1:
					func_72(iParam0);
					iParam0->f_5 = -1268232386;
					iParam0->f_11 = { 1465.514f, -821.0334f, 50.2372f };
					break;
				case 2:
					func_72(iParam0);
					iParam0->f_5 = 1926851120;
					iParam0->f_11 = { -1082.332f, -696.7548f, 70.5432f };
					break;
				case 3:
					func_72(iParam0);
					iParam0->f_5 = -66052340;
					iParam0->f_11 = { -1462.952f, -1929.859f, 48.4187f };
					break;
				case 4:
					func_72(iParam0);
					iParam0->f_5 = 1738334804;
					iParam0->f_11 = { -4988.295f, -3902.346f, -0.03286f };
					break;
				case 5:
					func_72(iParam0);
					iParam0->f_5 = 1009780912;
					iParam0->f_11 = { -2770.473f, -2936.506f, 64.84297f };
					break;
				case 6:
					func_72(iParam0);
					iParam0->f_5 = -1560771476;
					iParam0->f_11 = { -1209.61f, -1812.165f, 61.23543f };
					break;
				case 7:
					func_72(iParam0);
					iParam0->f_5 = 453813335;
					iParam0->f_11 = { -1706.993f, -580.9286f, 149.93f };
					break;
				case 8:
					func_72(iParam0);
					iParam0->f_5 = 786924542;
					iParam0->f_11 = { 803.0057f, -584.7925f, 79.32288f };
					break;
				case 9:
					func_72(iParam0);
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
					func_77(iParam0, iParam3);
					iParam0->f_5 = 1323108111;
					iParam0->f_11 = { -1159.115f, 397.0877f, 60.4953f };
					break;
				case 1:
					func_77(iParam0, iParam3);
					iParam0->f_5 = -1505479200;
					iParam0->f_11 = { -1278.359f, 291.4224f, 76.6652f };
					break;
				case 2:
					func_77(iParam0, iParam3);
					iParam0->f_5 = -1283075997;
					iParam0->f_11 = { -1371.28f, 283.4114f, 86.0114f };
					break;
				case 3:
					func_77(iParam0, iParam3);
					iParam0->f_5 = -2100531475;
					iParam0->f_11 = { -1117.687f, 406.6783f, 55.3681f };
					break;
				case 4:
					func_77(iParam0, iParam3);
					iParam0->f_5 = 269617530;
					iParam0->f_11 = { -1288.323f, 148.5012f, 71.7864f };
					break;
				case 5:
					func_77(iParam0, iParam3);
					iParam0->f_5 = 1592829750;
					iParam0->f_11 = { -1648.447f, -114.858f, 170.0504f };
					break;
				case 6:
					func_77(iParam0, iParam3);
					iParam0->f_5 = 1817985549;
					iParam0->f_11 = { -1081.189f, -405.0457f, 97.0153f };
					break;
				case 7:
					func_77(iParam0, iParam3);
					iParam0->f_5 = 1945424739;
					iParam0->f_11 = { 206.8413f, -170.3653f, 130.5284f };
					break;
				case 8:
					func_77(iParam0, iParam3);
					iParam0->f_5 = 1787314318;
					iParam0->f_11 = { -621.2297f, 186.8452f, 41.2741f };
					break;
				case 9:
					func_77(iParam0, iParam3);
					iParam0->f_5 = 542354442;
					iParam0->f_11 = { 44.3784f, 388.2357f, 129.8287f };
					break;
				case 10:
					func_77(iParam0, iParam3);
					iParam0->f_5 = 1510776727;
					iParam0->f_11 = { 752.9834f, -58.1133f, 157.6479f };
					break;
				case 11:
					func_77(iParam0, iParam3);
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
			func_71(iParam0);
			switch (iParam2)
			{
				case 0:
					func_72(iParam0);
					iParam0->f_5 = -377638420;
					iParam0->f_11 = { -2058.13f, -2493.143f, 63.51377f };
					break;
				case 1:
					func_72(iParam0);
					iParam0->f_5 = 1308799438;
					iParam0->f_11 = { -1541.353f, -2334.611f, 43.10187f };
					break;
				case 2:
					func_72(iParam0);
					iParam0->f_5 = -1030922940;
					iParam0->f_11 = { -3456.39f, -2262.339f, 0.01624f };
					break;
				case 3:
					func_72(iParam0);
					iParam0->f_5 = 1750043358;
					iParam0->f_11 = { -3703.712f, -3594.224f, 45.18983f };
					break;
				case 4:
					func_72(iParam0);
					iParam0->f_5 = -1330609910;
					iParam0->f_11 = { -1581.551f, -1656.278f, 78.51012f };
					break;
				case 5:
					func_72(iParam0);
					iParam0->f_5 = 223942444;
					iParam0->f_11 = { -1236.292f, -1118.55f, 68.58572f };
					break;
				case 6:
					func_72(iParam0);
					iParam0->f_5 = 1067547121;
					iParam0->f_11 = { -1264.125f, -773.2117f, 91.83559f };
					break;
				case 7:
					func_72(iParam0);
					iParam0->f_5 = -450732096;
					iParam0->f_11 = { -1414.607f, -234.2123f, 99.22668f };
					break;
				case 8:
					func_72(iParam0);
					iParam0->f_5 = -1701940764;
					iParam0->f_11 = { -1721.402f, 553.6f, 112.524f };
					break;
				case 9:
					func_72(iParam0);
					iParam0->f_5 = 1584258975;
					iParam0->f_11 = { -484.7991f, -70.36918f, 42.94242f };
					break;
				case 10:
					func_72(iParam0);
					iParam0->f_5 = -98183174;
					iParam0->f_11 = { -458.5839f, -346.5686f, 80.66556f };
					break;
				case 11:
					func_72(iParam0);
					iParam0->f_5 = -90261849;
					iParam0->f_11 = { 1089.583f, 23.75282f, 88.22131f };
					break;
				case 12:
					func_72(iParam0);
					iParam0->f_5 = 754522971;
					iParam0->f_11 = { 1000.131f, 417.5909f, 107.9082f };
					break;
				case 13:
					func_72(iParam0);
					iParam0->f_5 = 974542513;
					iParam0->f_11 = { 713.7332f, 23.52884f, 152.0797f };
					break;
				case 14:
					func_72(iParam0);
					iParam0->f_5 = -790885273;
					iParam0->f_11 = { 63.77304f, 1023.487f, 201.9749f };
					break;
				case 15:
					func_72(iParam0);
					iParam0->f_5 = -1447045452;
					iParam0->f_11 = { 366.667f, 1408.665f, 175.0605f };
					break;
				case 16:
					func_72(iParam0);
					iParam0->f_5 = -586115209;
					iParam0->f_11 = { 1785.934f, 1522.009f, 155.1442f };
					break;
				case 17:
					func_72(iParam0);
					iParam0->f_5 = 224941020;
					iParam0->f_11 = { 1279.07f, 1164.678f, 149.2508f };
					break;
				case 18:
					func_72(iParam0);
					iParam0->f_5 = -1179654578;
					iParam0->f_11 = { 2106.456f, 207.6169f, 72.68985f };
					break;
				case 19:
					func_72(iParam0);
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
			func_71(iParam0);
			iParam0->f_10 = 60f;
			switch (iParam2)
			{
				case 0:
					func_72(iParam0);
					iParam0->f_5 = 974582605;
					iParam0->f_11 = { 1562.246f, -2047.412f, 47.3446f };
					break;
				case 1:
					func_72(iParam0);
					iParam0->f_5 = -964359125;
					iParam0->f_11 = { 1379.948f, -1696.249f, 66.86113f };
					break;
				case 2:
					func_72(iParam0);
					iParam0->f_5 = -700339292;
					iParam0->f_11 = { 1621.706f, -1650.367f, 56.03105f };
					break;
				case 3:
					func_72(iParam0);
					iParam0->f_5 = -470300912;
					iParam0->f_11 = { 1504.868f, -1470.025f, 71.38271f };
					break;
				case 4:
					func_72(iParam0);
					iParam0->f_5 = -241343909;
					iParam0->f_11 = { 1082.685f, -1265.978f, 67.5664f };
					break;
				case 5:
					func_72(iParam0);
					iParam0->f_5 = 1944053474;
					iParam0->f_11 = { 682.6295f, -992.2614f, 52.4207f };
					break;
				case 6:
					func_72(iParam0);
					iParam0->f_5 = -2120646059;
					iParam0->f_11 = { 707.7728f, -885.6594f, 48.26217f };
					break;
				case 7:
					func_72(iParam0);
					iParam0->f_5 = -1656440405;
					iParam0->f_11 = { 879.6264f, -537.9133f, 88.03556f };
					break;
				case 8:
					func_72(iParam0);
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
			func_71(iParam0);
			func_75(iParam0, 1);
			func_75(iParam0, 4);
			func_75(iParam0, 8);
			func_75(iParam0, 16);
			switch (iParam2)
			{
				case 0:
					func_72(iParam0);
					iParam0->f_5 = -1623035253;
					iParam0->f_11 = { func_79(func_78(iParam4)) };
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
					func_80(iParam0, iParam3);
					iParam0->f_5 = -1957221189;
					iParam0->f_11 = { -347.4531f, 740.8643f, 116.4549f };
					break;
				case 1:
					func_80(iParam0, iParam3);
					iParam0->f_5 = 871956008;
					iParam0->f_11 = { -360.6497f, 824.0327f, 115.4768f };
					break;
				case 2:
					func_80(iParam0, iParam3);
					iParam0->f_5 = -718829908;
					iParam0->f_11 = { 2957.225f, 524.4706f, 43.66619f };
					break;
				case 3:
					func_80(iParam0, iParam3);
					iParam0->f_5 = -478076065;
					iParam0->f_11 = { 2975.885f, 537.2245f, 42.42131f };
					break;
				case 4:
					func_80(iParam0, iParam3);
					iParam0->f_5 = 158131441;
					iParam0->f_11 = { 1444.633f, -1417.982f, 78.22246f };
					break;
				case 5:
					func_80(iParam0, iParam3);
					iParam0->f_5 = 575051428;
					iParam0->f_11 = { 1394.169f, -1422.854f, 78.97552f };
					break;
				case 6:
					func_80(iParam0, iParam3);
					iParam0->f_5 = -861587350;
					iParam0->f_11 = { 2996.145f, 1351.808f, 42.95977f };
					break;
				case 7:
					func_80(iParam0, iParam3);
					iParam0->f_5 = -616671844;
					iParam0->f_11 = { 2915.743f, 1231.952f, 43.5792f };
					break;
				case 8:
					func_80(iParam0, iParam3);
					iParam0->f_5 = -828875274;
					iParam0->f_11 = { -833.5609f, -1543.917f, 59.6274f };
					break;
				case 9:
					func_80(iParam0, iParam3);
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
			func_71(iParam0);
			switch (iParam2)
			{
				case 0:
					func_72(iParam0);
					iParam0->f_5 = 2136361638;
					iParam0->f_11 = { 2208.668f, -350.9536f, 41.488f };
					break;
				case 1:
					func_72(iParam0);
					iParam0->f_5 = 1948005426;
					iParam0->f_11 = { 1733.923f, -727.6727f, 40.8996f };
					break;
				case 2:
					func_72(iParam0);
					iParam0->f_5 = 462368629;
					iParam0->f_11 = { -2028.171f, 421.7315f, 123.1801f };
					break;
				case 3:
					func_72(iParam0);
					iParam0->f_5 = -172629291;
					iParam0->f_11 = { 238.8146f, 1242.903f, 185.8171f };
					break;
				case 4:
					func_72(iParam0);
					iParam0->f_5 = 1063777848;
					iParam0->f_11 = { 646.006f, 1304.928f, 193.4366f };
					break;
				case 5:
					func_72(iParam0);
					iParam0->f_5 = -267241827;
					iParam0->f_11 = { 438.9673f, 831.1111f, 145.7085f };
					break;
				case 6:
					func_72(iParam0);
					iParam0->f_5 = -1183266453;
					iParam0->f_11 = { -545.762f, 393.6189f, 87.0076f };
					break;
				case 7:
					func_72(iParam0);
					iParam0->f_5 = -877826604;
					iParam0->f_11 = { 1017.37f, 1062.322f, 158.965f };
					break;
				case 8:
					func_72(iParam0);
					iParam0->f_5 = 1527533302;
					iParam0->f_11 = { 2226.213f, -248.6621f, 42.5431f };
					break;
				case 9:
					func_72(iParam0);
					iParam0->f_5 = -865586768;
					iParam0->f_11 = { 2566.893f, -71.0977f, 49.3333f };
					break;
				case 10:
					func_72(iParam0);
					iParam0->f_5 = 294379466;
					iParam0->f_11 = { 1389.072f, -2196.696f, 48.3307f };
					break;
				case 11:
					func_72(iParam0);
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
			iVar17 = func_81(iParam1);
			if (iVar17 == -1)
			{
				return;
			}
			if ((iParam1 == 22 || iParam1 == 23) || iParam1 == 21)
			{
				iParam0->f_7 = 1;
			}
			*iParam0 = func_82(iVar17);
			iParam0->f_1 = 0;
			iParam0->f_6 = 2;
			func_75(iParam0, 32);
			if (iParam2 != -1)
			{
				iParam0->f_9 = func_84(func_83(iVar17), iParam2);
				iParam0->f_15 = func_85(func_83(iVar17), iParam2);
				iParam0->f_5 = func_86(iVar17, iParam2);
				iParam0->f_11 = { func_87(iVar17, iParam2) };
			}
			break;
	}
}

struct<2> func_33(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = iParam1;
	switch (iParam1)
	{
		case 2:
			Var0.f_1 = func_89(iParam0, &(Global_1070355->f_634), func_88(iParam1));
			break;
		case 3:
			Var0.f_1 = func_89(iParam0, &(Global_1070355->f_634.f_602), func_88(iParam1));
			break;
		case 4:
			Var0.f_1 = func_89(iParam0, &(Global_1070355->f_634.f_2104), func_88(iParam1));
			break;
		case 5:
			Var0.f_1 = func_89(iParam0, &(Global_1070355->f_634.f_12606), func_88(iParam1));
			break;
		case 6:
			Var0.f_1 = func_89(iParam0, &(Global_1070355->f_634.f_12908), func_88(iParam1));
			break;
		case 7:
			Var0.f_1 = func_89(iParam0, &(Global_1070355->f_634.f_15910), func_88(iParam1));
			break;
		case 8:
			Var0.f_1 = func_89(iParam0, &(Global_1070355->f_634.f_15981), func_88(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_90();
	}
	return Var0;
}

void func_34()
{
	func_91();
	func_92();
	func_93();
}

void func_35()
{
}

void func_36()
{
}

void func_37()
{
	int iVar0;

	iVar0 = 3;
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(iVar0);
}

int func_38(struct<2> Param0)
{
	if (!func_94(Param0))
	{
		return 0;
	}
	if (Param0.f_1 < 0)
	{
		return 0;
	}
	if (Param0.f_1 >= func_88(Param0))
	{
		return 0;
	}
	return 1;
}

bool func_39(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1184367->f_1 && iParam0) != 0;
}

bool func_40(int iParam0, int iParam1)
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

int func_41()
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
	if (!func_38(*Global_1051163) && Global_1572887->f_7 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

void func_42()
{
}

void func_43()
{
	int iVar0;
	struct<11> Var1;

	iVar0 = (Global_1184672->f_231.f_1066[Local_907.f_12 /*17*/])->f_5;
	Var1.f_10 = 1106247680;
	func_32(&Var1, Local_907.f_1, Local_907.f_2, Local_907.f_3, iVar0);
	if (!func_95(&Var1, 1))
	{
		func_96(1);
		return;
	}
	Local_0.f_6 = func_78(_NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(iVar0)));
	func_97(256);
	if (func_98(Local_0.f_6))
	{
		func_99(5);
		func_96(6);
	}
	else
	{
		func_96(1);
	}
}

void func_44()
{
	struct<17> Var0;
	bool bVar17;

	Var0.f_10 = 1106247680;
	func_32(&Var0, Local_907.f_1, Local_907.f_2, -1, 255);
	if (func_95(&Var0, 1))
	{
		func_96(2);
		return;
	}
	if (func_100(Var0, &bVar17))
	{
		MISC::CLEAR_AREA(Local_907.f_15, Var0.f_10, 2442122);
		func_96(2);
	}
	else if (bVar17)
	{
		func_99(3);
		func_96(6);
	}
	if (!func_101(Local_0.f_3.f_2))
	{
		func_102(&(Local_0.f_3.f_2));
	}
	else if (func_103(Local_0.f_3.f_2) > 45000)
	{
		func_99(4);
		func_96(6);
	}
}

void func_45()
{
	if (func_104(1, 255))
	{
		if (!func_105(1))
		{
			if (func_106())
			{
				func_97(1);
			}
		}
		else
		{
			func_107();
			func_96(3);
		}
	}
}

void func_46()
{
	bool bVar0;

	if (func_104(2, 255))
	{
		if (!func_105(2))
		{
			bVar0 = true;
			if (!func_108())
			{
				bVar0 = false;
			}
			if (!func_109())
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				func_97(2);
			}
		}
		else
		{
			func_110();
			func_96(4);
		}
	}
}

void func_47()
{
	func_111();
	func_112();
	func_113();
	if (func_114() || Local_0.f_2 != 0)
	{
		func_115();
		func_96(5);
	}
}

void func_48()
{
	if (func_104(4, 255))
	{
		if (func_116())
		{
			func_97(4);
			func_96(6);
		}
	}
}

void func_49()
{
	if (!func_105(256))
	{
		return;
	}
	if (func_105(512))
	{
		if (func_64(32) && func_78(PLAYER::PLAYER_ID()) == Local_0.f_6)
		{
			func_65(Local_0.f_6);
			func_117(32);
		}
	}
	else if (!func_64(32))
	{
		if (func_78(PLAYER::PLAYER_ID()) == Local_0.f_6)
		{
			func_118(Local_0.f_6, 1, 1);
			func_119(32);
		}
	}
	else if (func_78(PLAYER::PLAYER_ID()) != Local_0.f_6)
	{
		func_65(Local_0.f_6);
		func_117(32);
	}
}

void func_50()
{
	func_120();
}

void func_51()
{
	if (Local_0 == 6)
	{
		func_121(6);
	}
	else if (Local_0 > 0)
	{
		func_49();
		func_121(1);
	}
}

void func_52()
{
	if (Local_0 == 6)
	{
		func_121(6);
	}
	else if (Local_0 > 1)
	{
		func_121(2);
	}
}

void func_53()
{
	bool bVar0;
	int iVar1;

	if (!func_104(1, 255))
	{
		bVar0 = true;
		if (!func_122())
		{
			bVar0 = false;
		}
		if (!func_123())
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			func_124(1);
		}
		else
		{
			iVar1 = Global_1901929->f_230.f_63;
			if (!func_101(Local_907.f_11))
			{
				func_102(&(Local_907.f_11));
			}
			if (func_103(Local_907.f_11) >= iVar1)
			{
				func_121(6);
			}
		}
	}
	else if (Local_0 > 2)
	{
		func_125(&(Local_907.f_11));
		func_126();
		func_121(3);
	}
}

void func_54()
{
	int iVar0;

	if (!func_104(2, 255))
	{
		if (func_127())
		{
			func_124(2);
		}
		else
		{
			iVar0 = Global_1901929->f_230.f_63;
			if (!func_101(Local_907.f_11))
			{
				func_102(&(Local_907.f_11));
			}
			if (func_128(Local_907.f_11) >= iVar0)
			{
				func_121(6);
			}
		}
	}
	else if (Local_0 > 3)
	{
		func_125(&(Local_907.f_11));
		func_129();
		func_130();
		func_131();
		func_132();
		func_121(4);
	}
}

void func_55()
{
	if (Local_0 >= 5)
	{
		func_133();
		func_121(5);
		return;
	}
	func_134();
	func_135();
	func_136();
	func_137();
	func_138();
	func_139();
}

void func_56()
{
	if (!func_104(4, 255))
	{
		if (func_140())
		{
			func_141();
			func_62(Local_907.f_12, 4);
			func_124(4);
		}
	}
	else if (Local_0 > 5)
	{
		func_121(6);
	}
}

void func_57()
{
}

bool func_58()
{
	return (func_105(4) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1));
}

void func_59()
{
}

void func_60()
{
	int iVar0;
	int iVar1;

	if (func_58())
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_0.f_29[iVar1])))
			{
				iVar0 = NETWORK::NET_TO_PED(&(Local_0.f_29[iVar1]));
				func_142(iVar1);
				EVENT::_0xAD8F2424C6E1E3A8(iVar0);
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
					PED::_0x39A2FC5AF55A52B1(iVar0, -1);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
				}
			}
			iVar1++;
		}
	}
}

void func_61()
{
	func_143(&(Local_907.f_212.f_13));
	if (VOLUME::_0x92A78D0BEDB332A3(Local_907.f_212.f_11))
	{
		VOLUME::_0x43F867EF5C463A53(Local_907.f_212.f_11);
	}
}

void func_62(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (func_144(iParam0, iVar0, iParam1))
	{
		return;
	}
	MISC::SET_BIT((*(*Global_1194410)[iVar0 /*72*/])[iParam0], iParam1);
}

void func_63()
{
	int iVar0;
	bool bVar1;

	if (!func_64(1))
	{
		return;
	}
	if (func_64(4))
	{
		return;
	}
	if (!func_64(2))
	{
		iVar0 = -1;
	}
	else if (!func_64(8))
	{
		iVar0 = 2;
	}
	else if (func_64(16))
	{
		iVar0 = 0;
		bVar1 = true;
	}
	else
	{
		iVar0 = 1;
		bVar1 = true;
	}
	func_145(Local_907.f_9, iVar0, 0);
	func_119(4);
	if (bVar1)
	{
		func_146(Local_907.f_1, Local_907.f_2);
	}
}

bool func_64(int iParam0)
{
	return func_147(Local_907.f_7, iParam0);
}

void func_65(int iParam0)
{
	int iVar0;

	if (!func_148(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	((*Global_1126840)[iVar0 /*83*/])->f_70 = iParam0;
	((*Global_1126840)[iVar0 /*83*/])->f_70.f_2 = 0;
}

void func_66()
{
}

void func_67(var uParam0, struct<6> Param1, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17)
{
	uParam0->f_9 = 2;
	*uParam0 = { func_33(Param1.f_5, 8) };
	uParam0->f_2 = 0;
	uParam0->f_4 = -1;
}

int func_68(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!func_149(uParam0))
	{
		return -1;
	}
	iVar0 = func_150(uParam0, uParam0->f_9);
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
			iVar0 = func_150(uParam0, iVar1);
			if (iVar0 != -1)
			{
				return iVar0;
			}
		}
		iVar1++;
	}
	return -1;
}

struct<15> func_69(int iParam0)
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

void func_70(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_151(iParam0);
			break;
		case 1:
			func_151(iParam0);
			break;
		case 2:
			func_151(iParam0);
			break;
		case 3:
			func_152(iParam0);
			break;
		case 4:
			func_151(iParam0);
			break;
		case 5:
			func_151(iParam0);
			break;
		case 6:
			func_152(iParam0);
			break;
		case 7:
			func_152(iParam0);
			break;
		case 8:
			func_152(iParam0);
			break;
		case 9:
			func_151(iParam0);
			break;
		default:
			func_72(iParam0);
			func_71(iParam0);
			break;
	}
}

void func_71(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (iParam0->f_2 - 1))
	{
		func_74(iParam0, iVar0);
		iVar0++;
	}
}

void func_72(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (iParam0->f_1 - 1))
	{
		func_73(iParam0, iVar0);
		iVar0++;
	}
}

void func_73(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(iParam0->f_3), iParam1);
}

void func_74(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(iParam0->f_4), iParam1);
}

void func_75(int iParam0, int iParam1)
{
	func_153(&(iParam0->f_16), iParam1);
}

void func_76(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_74(iParam0, 0);
			break;
		case 1:
		case 2:
			func_74(iParam0, 1);
			func_74(iParam0, 2);
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			func_74(iParam0, 0);
			func_74(iParam0, 2);
			break;
		case 8:
			func_74(iParam0, 1);
			break;
		case 9:
		case 10:
		case 11:
			func_74(iParam0, 1);
			break;
		default:
			func_71(iParam0);
			break;
	}
}

void func_77(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_154(iParam0);
			break;
		case 1:
			func_155(iParam0);
			break;
		case 2:
			func_156(iParam0);
			break;
		case 3:
			func_157(iParam0);
			break;
		default:
			func_72(iParam0);
			func_71(iParam0);
			break;
	}
}

int func_78(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return ((*Global_1126840)[iVar0 /*83*/])->f_38.f_3;
	}
	return -1;
}

Vector3 func_79(int iParam0)
{
	if (!func_148(iParam0))
	{
		return 0f, 0f, 0f;
	}
	return ((*Global_1123778)[iParam0 /*27*/])->f_20;
}

void func_80(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_158(iParam0);
			break;
		case 1:
		case 2:
			func_159(iParam0);
			break;
		case 3:
		case 4:
			func_160(iParam0);
			break;
		default:
			func_71(iParam0);
			break;
	}
	func_72(iParam0);
}

var func_81(int iParam0)
{
	return &(Global_1244208->f_2073[iParam0]);
}

int func_82(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return ((*Global_1232796)[iParam0 /*5*/])->f_3;
}

int func_83(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1232796[iParam0 /*5*/];
}

var func_84(var uParam0, int iParam1)
{
	var uVar0;
	struct<5> Var1;

	if (func_161(&Var1, uParam0) && func_162(&Var1, iParam1))
	{
		func_163(Var1, 1099008783, &uVar0, 0);
	}
	return uVar0;
}

int func_85(var uParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 0;
	if (func_161(&Var1, uParam0) && func_162(&Var1, iParam1))
	{
		func_163(Var1, -1052341598, &iVar0, 0);
	}
	return iVar0;
}

int func_86(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_164(iParam0, iParam1);
	return &(Global_1232796->f_401[iVar0 /*7*/]);
}

Vector3 func_87(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = func_164(iParam0, iParam1);
	return (Global_1232796->f_401[iVar0 /*7*/])->f_3;
}

int func_88(int iParam0)
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

int func_89(int iParam0, var uParam1, int iParam2)
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

struct<2> func_90()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

void func_91()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			(Local_42[iVar1 /*27*/])->f_3.f_2[iVar0] = 9000f;
			iVar0++;
		}
		iVar1++;
	}
}

void func_92()
{
	int iVar0;
	int iVar1;
	bool bVar2;

	func_165(&(Local_907.f_110), &(Local_907.f_110.f_31));
	iVar1 = NETWORK::PARTICIPANT_ID_TO_INT();
	bVar2 = true;
	if (iVar1 < 0 || iVar1 >= 32)
	{
		bVar2 = false;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			Local_0.f_33.f_5[iVar0] = 0;
			Local_0.f_33.f_1[iVar0] = 255;
		}
		if (bVar2)
		{
			(Local_42[iVar1 /*27*/])->f_9.f_13[iVar0] = 0;
		}
		iVar0++;
	}
}

void func_93()
{
}

int func_94(int iParam0)
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

bool func_95(var uParam0, int iParam1)
{
	return func_166(uParam0->f_16, iParam1);
}

void func_96(int iParam0)
{
	if (Local_0 != iParam0)
	{
		Local_0 = iParam0;
	}
}

void func_97(int iParam0)
{
	if (!func_105(iParam0))
	{
		func_167(&(Local_0.f_1), iParam0);
	}
}

bool func_98(int iParam0)
{
	if (!func_148(iParam0))
	{
		return false;
	}
	return (func_168(iParam0) && ((*Global_1123778)[iParam0 /*27*/])->f_18.f_1 != 0);
}

void func_99(int iParam0)
{
	if (Local_0.f_2 != iParam0)
	{
		Local_0.f_2 = iParam0;
	}
}

int func_100(struct<17> Param0, var uParam17)
{
	int iVar0;
	var uVar1;

	if (VOLUME::_0xF6A8A652A6B186CD(Local_0.f_3.f_1))
	{
		return 1;
	}
	if (func_169(Local_907.f_15))
	{
		*uParam17 = 1;
		return 0;
	}
	if (!VOLUME::_0xA4A4359320345B34(Local_0.f_3))
	{
		if (VOLUME::_0x397769175A7DBB30(Local_907.f_15, Param0.f_10, 0, 0, 0))
		{
			VOLUME::_0xFA15C9A320E707B0();
			*uParam17 = 1;
			return 0;
		}
		func_170(&uVar1, Param0);
		Local_0.f_3 = VOLUME::_0x183C0B6CFEFFCAE4(&uVar1);
		func_124(128);
	}
	else if (!func_104(128, 255))
	{
		Local_0.f_3.f_1 = func_171(Param0);
		if (VOLUME::_0xF6A8A652A6B186CD(Local_0.f_3.f_1))
		{
			return 1;
		}
		return 0;
	}
	iVar0 = VOLUME::_0xB33A604345F58202(Local_0.f_3);
	switch (iVar0)
	{
		case 3:
			Local_0.f_3.f_1 = VOLUME::_0x351D71B8B72B858B(Local_0.f_3);
			return 1;
		case 4:
			Local_0.f_3 = 0;
			return 0;
		default:
			break;
	}
	return 0;
}

bool func_101(int iParam0)
{
	return iParam0 != 0;
}

void func_102(var uParam0)
{
	*uParam0 = Global_1273882->f_21;
}

int func_103(int iParam0)
{
	return (Global_1273882->f_21 - iParam0) * 1000;
}

bool func_104(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	return func_147(&(Local_42[iParam1 /*27*/]), iParam0);
}

bool func_105(int iParam0)
{
	return func_147(Local_0.f_1, iParam0);
}

int func_106()
{
	return 1;
}

void func_107()
{
}

int func_108()
{
	return 1;
}

int func_109()
{
	bool bVar0;

	if (!func_172(&bVar0))
	{
		if (bVar0)
		{
			func_173();
		}
		return 0;
	}
	return 1;
}

void func_110()
{
}

void func_111()
{
	if (!func_105(32) && func_174(32))
	{
		func_97(32);
	}
	if (!func_105(64) && func_174(64))
	{
		func_97(64);
	}
	if (!func_105(16) && func_175(16))
	{
		func_97(16);
	}
	if ((!func_105(2048) && func_174(2048)) && !func_174(4096))
	{
		func_97(2048);
	}
}

void func_112()
{
	bool bVar0;

	if (!bVar0 && func_105(16))
	{
		func_99(1);
		return;
	}
	if (func_105(2048) && !func_174(4096))
	{
		func_99(6);
		return;
	}
}

void func_113()
{
}

int func_114()
{
	return 1;
}

void func_115()
{
}

int func_116()
{
	return 1;
}

void func_117(int iParam0)
{
	if (func_64(iParam0))
	{
		func_176(&(Local_907.f_7), iParam0);
	}
}

int func_118(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!func_148(iParam0))
	{
		return 0;
	}
	iVar0 = func_177(iParam0);
	if (iVar0 != 0)
	{
		return 0;
	}
	iVar1 = PLAYER::PLAYER_ID();
	((*Global_1126840)[iVar1 /*83*/])->f_70 = iParam0;
	((*Global_1126840)[iVar1 /*83*/])->f_70.f_2 = iParam1;
	if (bParam2)
	{
		func_153(&(((*Global_1126840)[iVar1 /*83*/])->f_70.f_1), 1);
	}
	else
	{
		func_178(&(((*Global_1126840)[iVar1 /*83*/])->f_70.f_1), 1);
	}
	return 1;
}

void func_119(int iParam0)
{
	if (!func_64(iParam0))
	{
		func_167(&(Local_907.f_7), iParam0);
	}
}

void func_120()
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
				func_179(iVar0);
				break;
			case -1315570756:
				func_180(iVar0);
				break;
			default:
				break;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
	{
		func_181(iVar0);
		iVar0++;
	}
}

void func_121(int iParam0)
{
	if (Local_907.f_8 != iParam0)
	{
		Local_907.f_8 = iParam0;
	}
}

int func_122()
{
	return 1;
}

bool func_123()
{
	bool bVar0;

	bVar0 = false;
	if (!func_182())
	{
		bVar0 = true;
	}
	return !bVar0;
}

void func_124(int iParam0)
{
	if (!func_104(iParam0, 255))
	{
		func_167(Local_42[NETWORK::PARTICIPANT_ID_TO_INT() /*27*/], iParam0);
	}
}

void func_125(var uParam0)
{
	*uParam0 = 0;
}

void func_126()
{
}

int func_127()
{
	return 1;
}

int func_128(int iParam0)
{
	return (iParam0 - Global_1273882->f_21) * 1000;
}

void func_129()
{
	if (!func_64(1))
	{
		func_183(Local_907.f_9);
		func_119(1);
	}
}

void func_130()
{
	func_184();
}

void func_131()
{
}

void func_132()
{
	func_185();
}

void func_133()
{
}

void func_134()
{
	float fVar0;

	if (func_169(Local_907.f_15))
	{
		return;
	}
	if (func_186())
	{
		return;
	}
	if (func_187(Local_907.f_1, 600))
	{
		fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false), Local_907.f_15);
		if (fVar0 < 200f)
		{
			func_124(4096);
		}
		else if (fVar0 < 400f)
		{
			func_188(4096);
			func_124(2048);
		}
		else
		{
			func_188(4096);
			func_188(2048);
		}
	}
}

void func_135()
{
	func_189();
	func_190();
	func_191();
	func_192();
	func_193();
}

void func_136()
{
	if (func_194())
	{
		func_124(8);
	}
	else
	{
		func_188(8);
	}
}

void func_137()
{
}

void func_138()
{
	if (!func_104(8, 255))
	{
		func_124(16);
	}
	else
	{
		func_188(16);
	}
}

void func_139()
{
	int iVar0;

	Local_907.f_6 = -1;
	Local_907.f_5 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			Local_907.f_5 = (Local_907.f_5 || Local_42[iVar0 /*27*/]) // PointerArith;
			Local_907.f_6 = (Local_907.f_6 && Local_42[iVar0 /*27*/]) // PointerArith;
		}
		iVar0++;
	}
}

int func_140()
{
	return 1;
}

void func_141()
{
	func_195();
}

void func_142(int iParam0)
{
	if (MAP::DOES_BLIP_EXIST((Local_907.f_56.f_7[iParam0 /*11*/])->f_1))
	{
		MAP::REMOVE_BLIP(&((Local_907.f_56.f_7[iParam0 /*11*/])->f_1));
	}
}

void func_143(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		((*uParam0)[iVar0 /*9*/])->f_7 = 0f;
		((*uParam0)[iVar0 /*9*/])->f_8 = 0f;
		iVar0++;
	}
}

bool func_144(int iParam0, int iParam1, int iParam2)
{
	if (!NETWORK::_0x255A5EF65EDA9167(iParam1))
	{
		return false;
	}
	return MISC::IS_BIT_SET((*Global_1194410)[iParam1 /*72*/][iParam0], iParam2);
}

void func_145(struct<2> Param0, int iParam2, int iParam3)
{
	var uVar0;
	int iVar1;
	vector3 vVar2;

	uVar0 = func_197(func_196(Param0));
	iVar1 = func_198(Param0);
	vVar2.f_1 = iParam3;
	vVar2.x = 0;
	vVar2.f_2 = 0;
	if (func_28() == 0)
	{
		vVar2.x = Global_265331->f_124445.f_70.f_17;
		func_199(Param0, &vVar2);
	}
	STATS::_0xD5910ECF81A2278C(uVar0, iVar1, iParam2, &vVar2);
}

void func_146(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_200(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	func_201(iVar0);
}

bool func_147(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_148(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return 1;
}

int func_149(var uParam0)
{
	if (func_38(*uParam0))
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

int func_150(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;

	iVar0 = func_202(iParam1);
	iVar1 = ((&Global_1184672->f_3[iParam1] + iVar0) - 1);
	if (&Global_1184672->f_23[iParam1] != 0)
	{
		iVar1 = ((iVar0 + func_203(iParam1)) - 1);
	}
	bVar2 = func_38(*uParam0);
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

void func_151(int iParam0)
{
	func_73(iParam0, 0);
	func_73(iParam0, 1);
	func_73(iParam0, 3);
	func_71(iParam0);
}

void func_152(int iParam0)
{
	func_72(iParam0);
	func_204(iParam0, 0, 3);
}

void func_153(var uParam0, int iParam1)
{
	func_205(uParam0, iParam1);
}

void func_154(int iParam0)
{
	func_73(iParam0, 0);
	func_74(iParam0, 0);
	func_74(iParam0, 1);
	func_74(iParam0, 2);
}

void func_155(int iParam0)
{
	func_73(iParam0, 1);
	func_71(iParam0);
}

void func_156(int iParam0)
{
	func_73(iParam0, 2);
	func_74(iParam0, 3);
}

void func_157(int iParam0)
{
	func_73(iParam0, 3);
	func_74(iParam0, 4);
}

void func_158(int iParam0)
{
	func_74(iParam0, 0);
	func_74(iParam0, 1);
}

void func_159(int iParam0)
{
	func_74(iParam0, 2);
	func_74(iParam0, 3);
}

void func_160(int iParam0)
{
	func_74(iParam0, 4);
	func_74(iParam0, 5);
}

bool func_161(var uParam0, var uParam1)
{
	*uParam0 = Global_1232796->f_8113;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = uParam1;
	return (DATAFILE::_0x603AC35FD4602C76(*uParam0) && DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0));
}

bool func_162(var uParam0, int iParam1)
{
	uParam0->f_2 = 333456427;
	uParam0->f_3 = iParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

int func_163(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_164(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return (((*Global_1232796)[iParam0 /*5*/])->f_4 + iParam1);
}

void func_165(var uParam0, var uParam1)
{
	func_206(uParam0);
	func_207(uParam0);
	func_208(uParam0, 1);
	func_209(uParam0, 1);
	func_210(uParam1);
	func_207(uParam1);
	func_211(uParam1);
	func_212(uParam1, 1);
	func_213(uParam1, 1);
}

bool func_166(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_167(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_168(int iParam0)
{
	int iVar0;

	if (!func_148(iParam0))
	{
		return false;
	}
	iVar0 = func_214(iParam0);
	return (iVar0 != 0 && iVar0 != 3);
}

int func_169(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_170(var uParam0, struct<12> Param1, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17)
{
	*uParam0 = { Param1.f_11 };
	uParam0->f_4 = Param1.f_10;
	uParam0->f_6 = -653740250;
	uParam0->f_7 = Param1.f_5;
}

var func_171(struct<17> Param0)
{
	var uVar0;

	func_170(&uVar0, Param0);
	return VOLUME::_0x77A6E4AD0C496F81(&uVar0);
}

int func_172(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(3))
	{
		*uParam0 = 1;
		return 0;
	}
	bVar0 = false;
	bVar1 = false;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 3)
	{
		if (func_215(iVar2, 4))
		{
		}
		else if (!func_216(iVar2, uParam0, &bVar1))
		{
			if (*uParam0)
			{
				return 0;
			}
			if (bVar1)
			{
				bVar0 = true;
			}
			else
			{
				iVar2++;
			}
			if (bVar0)
			{
				return 0;
			}
			return 1;
		}
	}

void func_173()
{
	func_99(2);
}

bool func_174(int iParam0)
{
	return func_147(Local_907.f_5, iParam0);
}

bool func_175(int iParam0)
{
	return func_147(Local_907.f_6, iParam0);
}

void func_176(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_177(int iParam0)
{
	if (!func_148(iParam0))
	{
		return 0;
	}
	if (!func_168(iParam0))
	{
		return 0;
	}
	return ((*Global_1123778)[iParam0 /*27*/])->f_18.f_1;
}

void func_178(var uParam0, int iParam1)
{
	func_217(uParam0, iParam1);
}

void func_179(int iParam0)
{
	struct<11> Var0;
	int iVar15;

	Var0.f_10 = 255;
	SCRIPTS::GET_EVENT_DATA(1, iParam0, &iVar15, 4);
	switch (iVar15)
	{
		case 178:
			if (func_218(&Var0, iParam0))
			{
				func_219(&Var0);
			}
			break;
		default:
			break;
	}
}

void func_180(int iParam0)
{
}

void func_181(int iParam0)
{
}

int func_182()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = false;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (MISC::IS_BIT_SET(Local_907.f_56.f_3, iVar0))
		{
		}
		else
		{
			iVar2 = func_220(iVar0);
			if (iVar2 == 0)
			{
				Jump @128; //curOff = 53
			}
			else
			{
				if (!MISC::IS_BIT_SET(Local_907.f_56.f_4, iVar0))
				{
					STREAMING::REQUEST_MODEL(iVar2, false);
					MISC::SET_BIT(&(Local_907.f_56.f_4), iVar0);
				}
				if (!STREAMING::HAS_MODEL_LOADED(iVar2))
				{
					bVar1 = true;
					Jump @128; //curOff = 109
				}
				else
				{
					MISC::SET_BIT(&(Local_907.f_56.f_3), iVar0);
				}
			}
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 0;
	}
	return 1;
}

void func_183(struct<2> Param0)
{
	if (func_198(Param0) == 0)
	{
	}
	else if (!STATS::_0x01F4D242765C6B24(func_198(Param0)))
	{
		STATS::_0x99230691875FC218(func_196(Param0), func_198(Param0), Global_36);
	}
}

void func_184()
{
	int iVar0;
	int iVar1;

	iVar1 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_221(iVar0, iVar1, 0);
		iVar0++;
	}
}

void func_185()
{
}

bool func_186()
{
	return (func_105(32) || func_104(32, 255));
}

int func_187(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	if (iParam0 == 0)
	{
		return 0;
	}
	Var0 = { func_222(iParam0, 2087069356) };
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

void func_188(int iParam0)
{
	if (func_147(&(Local_42[NETWORK::PARTICIPANT_ID_TO_INT() /*27*/]), iParam0))
	{
		func_176(Local_42[NETWORK::PARTICIPANT_ID_TO_INT() /*27*/], iParam0);
	}
}

void func_189()
{
	func_223();
	func_224();
}

void func_190()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
		func_225(iVar0, bVar1, iVar2);
		func_226(iVar0, bVar1, iVar2);
		func_227(iVar0, bVar1, iVar2);
		iVar0++;
	}
}

void func_191()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;

	if (!NETWORK::_0x255A5EF65EDA9167(PLAYER::PLAYER_ID()))
	{
		return;
	}
	iVar2 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		return;
	}
	iVar3 = NETWORK::PARTICIPANT_ID_TO_INT();
	bVar4 = false;
	bVar5 = false;
	bVar6 = false;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (Local_907.f_56.f_41 >= 3)
		{
			Local_907.f_56.f_41 = 0;
		}
		iVar0 = Local_907.f_56.f_41;
		Local_907.f_56.f_41++;
		iVar7 = func_228(iVar0);
		iVar1 = &Local_907.f_56.f_7[iVar0 /*11*/];
		bVar4 = !ENTITY::DOES_ENTITY_EXIST(iVar1);
		if (func_215(iVar7, 4))
		{
			func_221(iVar7, iVar3, 1);
			bVar4 = !ENTITY::DOES_ENTITY_EXIST(iVar1);
		}
		if (bVar4)
		{
			if (&(Local_42[iVar3 /*27*/])->f_3.f_2[iVar0] > -1f)
			{
				(Local_42[iVar3 /*27*/])->f_3.f_2[iVar0] = -1f;
			}
			if (MISC::IS_BIT_SET(Local_907.f_56.f_5, iVar0))
			{
				MISC::CLEAR_BIT(&(Local_907.f_56.f_5), iVar0);
				MISC::CLEAR_BIT(&(Local_907.f_56.f_6), iVar0);
				MISC::CLEAR_BIT(&(Local_907.f_56.f_42), iVar0);
			}
		}
		if (MISC::IS_BIT_SET(Local_907.f_56.f_42, iVar0))
		{
			if (bVar4 || !func_229(iVar2, iVar1, iVar0))
			{
				MISC::CLEAR_BIT(&(Local_907.f_56.f_42), iVar0);
			}
		}
		else if (!bVar4)
		{
			if (func_229(iVar2, iVar1, iVar0))
			{
				MISC::SET_BIT(&(Local_907.f_56.f_42), iVar0);
			}
		}
		if (!bVar4)
		{
			if (AUDIO::IS_ANY_SPEECH_PLAYING(iVar1))
			{
				if (!MISC::IS_BIT_SET((Local_42[iVar3 /*27*/])->f_3.f_1, iVar0))
				{
					MISC::SET_BIT(&((Local_42[iVar3 /*27*/])->f_3.f_1), iVar0);
				}
				func_230(Local_907.f_56.f_43[iVar0 /*3*/]);
			}
		}
		if (MISC::IS_BIT_SET((Local_42[iVar3 /*27*/])->f_3.f_1, iVar0))
		{
			if (bVar4 || (!AUDIO::IS_ANY_SPEECH_PLAYING(iVar1) && (!func_231(Local_907.f_56.f_43[iVar0 /*3*/]) || func_232(Local_907.f_56.f_43[iVar0 /*3*/], 0.5f))))
			{
				func_233(Local_907.f_56.f_43[iVar0 /*3*/]);
				MISC::CLEAR_BIT(&((Local_42[iVar3 /*27*/])->f_3.f_1), iVar0);
			}
		}
		if (func_215(iVar7, 4))
		{
			if (bVar4)
			{
				if (!bVar6)
				{
					if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
					{
						if (func_234(iVar7))
						{
							if (!func_216(iVar7, &bVar5, &bVar6))
							{
								if (bVar5)
								{
									func_235(iVar7, 4);
								}
								else if (bVar6)
								{
								}
							}
						}
					}
				}
			}
			else if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1) && !func_215(iVar7, 8))
			{
				if (!func_234(iVar7))
				{
					PED::_0x7043D0681285BA2D(&iVar1);
				}
			}
		}
		iVar0++;
	}
	if (Local_907.f_56.f_42 != 0)
	{
		if (!func_236(1, -1))
		{
			func_237(1);
		}
	}
	else if (func_236(1, -1))
	{
		func_238(1);
	}
}

void func_192()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	int iVar8;
	var uVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;

	iVar10 = 255;
	iVar15 = NETWORK::PARTICIPANT_ID_TO_INT();
	func_239();
	if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		(Local_42[iVar15 /*27*/])->f_9.f_8 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
	while (iVar12 < 1)
	{
		if (Local_907.f_110.f_96 >= 3)
		{
			Local_907.f_110.f_96 = 0;
		}
		iVar1 = Local_907.f_110.f_96;
		Local_907.f_110.f_96++;
		iVar12++;
		iVar8 = func_240(iVar1);
		if (!func_241(iVar8))
		{
		}
		else if (func_242(iVar8, &vVar5))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(vVar5.x))
			{
			}
			else
			{
				func_243(iVar8);
				if (func_244(iVar8))
				{
					if (func_245(iVar8))
					{
						if (!func_246(iVar8))
						{
							func_247(iVar8);
						}
					}
					if (func_248(iVar8))
					{
						func_249(iVar8);
					}
				}
				else
				{
					if (func_250(iVar8))
					{
						if (ENTITY::DOES_ENTITY_EXIST(vVar5.x) && !ENTITY::IS_ENTITY_DEAD(vVar5.x))
						{
							PED::SET_PED_RESET_FLAG(vVar5.x, 42, true);
						}
					}
					if (!func_251(iVar8, -1))
					{
						bVar2 = false;
						iVar3 = 0;
						if (func_252(iVar8))
						{
							bVar2 = true;
							iVar3 = 1;
						}
						else if (func_253(iVar8, iVar15))
						{
							iVar4 = 2;
							bVar2 = true;
						}
						else if (func_254(vVar5.x, vVar5.y, &(Local_907.f_110), &iVar4, 0, vVar5.z))
						{
							bVar2 = true;
						}
						else
						{
							iVar16 = EVENT::_0x796EECFF0C6D39BE(vVar5.x, 1, 1);
							if (iVar16 != 0)
							{
								iVar17 = EVENT::_0x822A001BCEA5BD81(vVar5.x, iVar16, 1, 1);
								if (ENTITY::DOES_ENTITY_EXIST(iVar17) && ENTITY::IS_ENTITY_A_PED(iVar17))
								{
									iVar18 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar17);
									if (PED::IS_PED_A_PLAYER(iVar18))
									{
										switch (iVar16)
										{
											case joaat("event_shot_fired"):
												if (!Local_907.f_110.f_1 & 256 != 0)
												{
													if (vVar5.z <= IntToFloat(func_255(&(Local_907.f_110))))
													{
														iVar4 = 256;
														bVar2 = true;
													}
												}
												break;
											case joaat("event_shot_fired_bullet_impact"):
											case joaat("event_shot_fired_whizzed_by"):
												if (!Local_907.f_110.f_1 & 4 != 0)
												{
													iVar4 = 4;
													bVar2 = true;
												}
												break;
										}
									}
								}
								EVENT::_0x1A5C5D350068A673(vVar5.x, 1);
							}
							if (!Local_907.f_110.f_1 & 256 != 0)
							{
								if ((Local_42[iVar15 /*27*/])->f_9.f_8 != 0 && NETWORK::GET_TIME_DIFFERENCE((Local_42[iVar15 /*27*/])->f_9.f_8, NETWORK::GET_NETWORK_TIME_ACCURATE()) <= 3000)
								{
									if (vVar5.z >= 0f && vVar5.z <= IntToFloat(func_255(&(Local_907.f_110))))
									{
										iVar4 = 256;
										bVar2 = true;
									}
								}
							}
						}
						if (bVar2)
						{
							if (!func_256(iVar8, iVar4, iVar3))
							{
							}
							else
							{
								if (MISC::IS_BIT_SET((Local_42[iVar15 /*27*/])->f_9.f_7, iVar8))
								{
									MISC::CLEAR_BIT(&((Local_42[iVar15 /*27*/])->f_9.f_7), iVar8);
								}
								func_257(iVar8, 1);
								Jump @756; //curOff = 668
								if (func_258(&vVar5, iVar8))
								{
									if (MISC::IS_BIT_SET((Local_42[iVar15 /*27*/])->f_9.f_7, iVar8))
									{
										MISC::CLEAR_BIT(&((Local_42[iVar15 /*27*/])->f_9.f_7), iVar8);
									}
								}
								else if (!MISC::IS_BIT_SET((Local_42[iVar15 /*27*/])->f_9.f_7, iVar8))
								{
									MISC::SET_BIT(&((Local_42[iVar15 /*27*/])->f_9.f_7), iVar8);
								}
								if (func_259(iVar8))
								{
									if (!func_260(iVar8, -1))
									{
										if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(vVar5.x))
										{
											if (!func_261(iVar8))
											{
											}
											else
											{
												func_262(iVar8);
												func_263(iVar8);
												Jump @1000; //curOff = 810
												if (func_264(iVar8))
												{
												}
												else if (iVar13 < 4)
												{
													if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(vVar5.x))
													{
														iVar14 = 0;
														while (iVar14 < 4)
														{
															if (&Local_907.f_110.f_98[iVar8] >= 32)
															{
																iVar0 = 0;
																Local_907.f_110.f_98[iVar8] = 0;
															}
															else
															{
																iVar0 = &Local_907.f_110.f_98[iVar8];
																Local_907.f_110.f_98[iVar8] = &Local_907.f_110.f_98[iVar8] + 1;
															}
															iVar14++;
															if (func_265(iVar0, &uVar11, &iVar10, &uVar9))
															{
																if (!func_266(iVar8, iVar10))
																{
																	if (func_251(iVar8, iVar0))
																	{
																		if (!func_267(iVar8, uVar11, iVar10, uVar9))
																		{
																		}
																		else
																		{
																			func_268(iVar8, iVar10);
																		}
																	}
																}
															}
														}
														iVar13++;
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}

void func_193()
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	bool bVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;

	fVar0 = func_269();
	if (Local_907.f_212.f_4)
	{
		return;
	}
	iVar1 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (func_147((Local_42[iVar1 /*27*/])->f_26, 1))
	{
		Local_907.f_212.f_4 = 1;
		return;
	}
	iVar2 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	fVar3 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar2, true, false), Local_907.f_15);
	fVar4 = Local_907.f_212.f_9;
	fVar5 = Local_907.f_212.f_10;
	if (func_147(Local_907.f_212.f_12, 2))
	{
		bVar6 = false;
		fVar7 = ENTITY::GET_ENTITY_SPEED(iVar2);
		fVar8 = (fVar0 * (1f / Local_907.f_212.f_7));
		if (fVar7 > 0f)
		{
			if (func_270(Local_907.f_15, iVar2))
			{
				bVar6 = true;
			}
		}
		if (bVar6)
		{
			if (Local_907.f_212.f_6 < 1f)
			{
				Local_907.f_212.f_6 = (Local_907.f_212.f_6 + fVar8);
				if (Local_907.f_212.f_6 > 1f)
				{
					Local_907.f_212.f_6 = 1f;
				}
			}
		}
		else if (Local_907.f_212.f_6 > 0f)
		{
			Local_907.f_212.f_6 = (Local_907.f_212.f_6 - fVar8);
			if (Local_907.f_212.f_6 < 0f)
			{
				Local_907.f_212.f_6 = 0f;
			}
		}
		fVar9 = ((fVar7 * Local_907.f_212.f_5) * Local_907.f_212.f_6);
		fVar4 = (fVar4 + fVar9);
		fVar5 = (fVar5 + fVar9);
	}
	if (fVar3 <= fVar4)
	{
		func_167(&((Local_42[iVar1 /*27*/])->f_26), 1);
	}
	else if (VOLUME::_0x92A78D0BEDB332A3(Local_907.f_212.f_11) && ENTITY::IS_ENTITY_IN_VOLUME(iVar2, Local_907.f_212.f_11, false, 0))
	{
		func_167(&((Local_42[iVar1 /*27*/])->f_26), 1);
	}
	else if (Local_907.f_212 > 0)
	{
		iVar10 = 0;
		while (iVar10 < 1)
		{
			func_271(Local_907.f_212.f_13[iVar10 /*9*/], fVar5, 1082130432 /* Float: 4f */, 0, 0, 0, 0);
			iVar10++;
		}
		if (func_272(&(Local_907.f_212.f_13), Local_907.f_212, Local_907.f_212.f_8))
		{
			func_167(&((Local_42[iVar1 /*27*/])->f_26), 1);
		}
	}
	if (func_147((Local_42[iVar1 /*27*/])->f_26, 1))
	{
		Local_907.f_212.f_4 = 1;
	}
}

int func_194()
{
	bool bVar0;

	bVar0 = true;
	if (bVar0 && !UNLOCK::_UNLOCK_IS_UNLOCKED(Local_907.f_14))
	{
		return 0;
	}
	return 1;
}

void func_195()
{
}

int func_196(var uParam0, var uParam1)
{
	return uParam0;
}

int func_197(int iParam0)
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

int func_198(struct<2> Param0)
{
	return func_273(Param0);
}

void func_199(struct<2> Param0, var uParam2)
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
	switch (func_196(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_275(func_274(Param0));
			iVar5 = func_276(iVar4);
			if (!func_277(iVar5, 0))
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

int func_200(int iParam0, int iParam1)
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
			func_32(&Var1, iVar18, -1, -1, 255);
			iVar0 = (iVar0 + Var1);
		}
		iVar19++;
	}
	return -1;
}

void func_201(int iParam0)
{
	struct<6> Var0;

	Var0.f_4 = 3;
	Var0.f_5 = iParam0;
	func_278(&Var0);
}

int func_202(int iParam0)
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

int func_203(int iParam0)
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

void func_204(int iParam0, int iParam1, int iParam2)
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
		func_74(iParam0, iVar0);
		iVar0++;
	}
}

void func_205(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_206(var uParam0)
{
	func_279(uParam0, 0);
	func_280(uParam0, 0);
	func_208(uParam0, 1);
	func_281(uParam0, 1);
	func_282(uParam0, 0);
	func_283(uParam0, 1);
	func_284(uParam0, 1, 1, 1);
}

void func_207(var uParam0)
{
	func_279(uParam0, 0);
	func_280(uParam0, 0);
	func_208(uParam0, 0);
	func_282(uParam0, 0);
	func_284(uParam0, 1, 1, 1);
}

void func_208(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_176(&(uParam0->f_1), 256);
	}
	else
	{
		func_167(&(uParam0->f_1), 256);
	}
}

void func_209(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_176(&(uParam0->f_1), 4);
	}
	else
	{
		func_167(&(uParam0->f_1), 4);
	}
}

void func_210(var uParam0)
{
	func_286(uParam0, (func_285(uParam0) - 6f));
	func_287(uParam0, 1);
}

void func_211(var uParam0)
{
	func_288(uParam0, 1);
	func_289(uParam0, 1);
	func_290(uParam0, 1);
}

void func_212(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_176(&(uParam0->f_1), 131072);
	}
	else
	{
		func_167(&(uParam0->f_1), 131072);
	}
}

void func_213(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_167(uParam0, 4);
	}
	else
	{
		func_176(uParam0, 4);
	}
}

int func_214(int iParam0)
{
	if (!func_148(iParam0))
	{
		return 0;
	}
	return &(Global_1124870->f_1[iParam0 /*59*/]);
}

bool func_215(int iParam0, int iParam1)
{
	return func_147((Local_907.f_56.f_7[iParam0 /*11*/])->f_2, iParam1);
}

int func_216(int iParam0, int iParam1, bool bParam2)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	int iVar9;

	fVar0 = 0f;
	vVar1 = { 0f, 0f, 0f };
	vVar4 = { Local_907.f_15 };
	iVar7 = 0;
	iVar8 = func_220(iParam0);
	iVar9 = func_291(iParam0);
	*bParam2 = 0;
	if (iVar8 != 0)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_0.f_29[iParam0])))
		{
			iVar9 = func_291(iParam0);
			fVar0 = func_292(iParam0);
			if (!func_147((Local_907.f_56.f_7[iParam0 /*11*/])->f_2, 2))
			{
				vVar1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar4, 0f, func_293(iParam0)) };
			}
			else
			{
				vVar1 = { func_293(iParam0) };
			}
			if (!func_294(Local_0.f_29[iParam0], iVar8, vVar1, fVar0, 1, 0, (iVar9 == 0 || PED::_0x772A1969F649E902(iVar8)), 1, 1))
			{
				*iParam1 = 1;
			}
			else
			{
				iVar7 = NETWORK::NET_TO_PED(&(Local_0.f_29[iParam0]));
				if (ENTITY::DOES_ENTITY_EXIST(iVar7))
				{
					ENTITY::_0xA91E6CF94404E8C9(iVar7);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar7, true);
					PED::SET_PED_CONFIG_FLAG(iVar7, 178, false);
					if (iVar9 != 0)
					{
						PED::_0x1902C4CFCC5BE57C(iVar7, iVar9);
						PED::_0xCC8CA3E88256E58F(iVar7, func_215(iParam0, 1), 1, 1, 1, false);
					}
					else if (PED::_0x772A1969F649E902(iVar8))
					{
						if (PED::_0xA0BC8FAED8CFEB3C(iVar7))
						{
						}
						func_295(iVar7, 1);
					}
					*bParam2 = 1;
					return 0;
				}
				else
				{
					*iParam1 = 1;
				}
			}
		}
		else if (PED::_0xA0BC8FAED8CFEB3C(NETWORK::NET_TO_PED(&(Local_0.f_29[iParam0]))))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_217(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_218(int* iParam0, int iParam1)
{
	if (!SCRIPTS::GET_EVENT_DATA(1, iParam1, iParam0, 15))
	{
		return 0;
	}
	if (iParam0->f_4.f_1 != Local_907.f_1)
	{
		return 0;
	}
	if (iParam0->f_4 != Local_907)
	{
		return 0;
	}
	if (iParam0->f_4.f_2 != Local_907.f_2)
	{
		return 0;
	}
	if (iParam0->f_4.f_3 != Local_907.f_3)
	{
		return 0;
	}
	return 1;
}

void func_219(int iParam0)
{
}

int func_220(int iParam0)
{
	return (Local_907.f_56.f_7[iParam0 /*11*/])->f_3;
}

void func_221(int iParam0, int iParam1, bool bParam2)
{
	char* sVar0;
	int iVar1;

	if (!MISC::IS_BIT_SET(Local_907.f_56.f_5, iParam0))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_0.f_29[iParam0])))
		{
			iVar1 = NETWORK::NET_TO_PED(&(Local_0.f_29[iParam0]));
			Local_907.f_56.f_7[iParam0 /*11*/] = iVar1;
			(Local_42[iParam1 /*27*/])->f_3.f_2[iParam0] = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false));
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				EVENT::_0xBB1E41DD3D3C6250(iVar1, "MpRandomEvent", 1);
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
				{
					func_296(iVar1, 1f, 0);
				}
				sVar0 = func_297(iParam0);
				if (!MISC::_0x375F5870A7B8BEC1(sVar0))
				{
					func_298(iVar1, sVar0, 1);
				}
				MISC::SET_BIT(&(Local_907.f_56.f_5), iParam0);
				if (bParam2)
				{
					func_299(iParam0);
				}
			}
		}
	}
}

struct<2> func_222(int iParam0, int iParam1)
{
	struct<2> Var0;
	struct<2> Var2;
	int iVar4;

	if (iParam1 == 0)
	{
		return Var2;
	}
	iVar4 = func_300(iParam0);
	if (iVar4 == 0)
	{
		return Var2;
	}
	Var0 = { func_301(iParam1, iVar4) };
	if (!STATS::_STAT_ID_IS_VALID(&Var0))
	{
		return Var2;
	}
	return Var0;
}

void func_223()
{
	Local_907.f_56.f_6 = 0;
	Local_907.f_56.f_2 = 0;
	Local_907.f_56.f_1 = -1;
}

void func_224()
{
	int iVar0;

	Local_907.f_110.f_64 = 0;
	Local_907.f_110.f_63 = 0;
	Local_907.f_110.f_66 = 0;
	Local_907.f_110.f_67 = 0;
	Local_907.f_110.f_70 = -1;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		SCRIPTS::_0xDE544B7EC0C187CC(Local_907.f_110.f_71[iVar0]);
		SCRIPTS::_0x20F4CB76689ACDBC(Local_907.f_110.f_79[iVar0]);
		SCRIPTS::_0xDE544B7EC0C187CC(Local_907.f_110.f_75[iVar0]);
		func_302(iVar0);
		iVar0++;
	}
}

void func_225(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		Local_907.f_56.f_2 = (Local_907.f_56.f_2 || (Local_42[iParam0 /*27*/])->f_3);
		Local_907.f_56.f_1 = (Local_907.f_56.f_1 && (Local_42[iParam0 /*27*/])->f_3);
		Local_907.f_56.f_6 = (Local_907.f_56.f_6 || (Local_42[iParam0 /*27*/])->f_3.f_1);
	}
}

void func_226(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		Local_907.f_110.f_64 = (Local_907.f_110.f_64 || (Local_42[iParam0 /*27*/])->f_9.f_1);
		Local_907.f_110.f_63 = (Local_907.f_110.f_63 || (Local_42[iParam0 /*27*/])->f_9);
		Local_907.f_110.f_66 = (Local_907.f_110.f_66 || (Local_42[iParam0 /*27*/])->f_9.f_3);
		Local_907.f_110.f_67 = (Local_907.f_110.f_67 || (Local_42[iParam0 /*27*/])->f_9.f_4);
		Local_907.f_110.f_68 = (Local_907.f_110.f_68 || (Local_42[iParam0 /*27*/])->f_9.f_5);
		Local_907.f_110.f_69 = (Local_907.f_110.f_69 || (Local_42[iParam0 /*27*/])->f_9.f_6);
		Local_907.f_110.f_94 = (Local_907.f_110.f_94 || (Local_42[iParam0 /*27*/])->f_9.f_2);
		Local_907.f_110.f_70 = (Local_907.f_110.f_70 && (Local_42[iParam0 /*27*/])->f_9.f_7);
		iVar0 = 0;
		while (iVar0 < 3)
		{
			SCRIPTS::_0xFFDDF802279BE128((Local_42[iParam0 /*27*/])->f_9.f_9[iVar0], Local_907.f_110.f_71[iVar0], Local_907.f_110.f_71[iVar0]);
			SCRIPTS::_0xFFDDF802279BE128((Local_42[iParam0 /*27*/])->f_9.f_9[iVar0], Local_907.f_110.f_71[iVar0], Local_907.f_110.f_75[iVar0]);
			SCRIPTS::_0xE4ABE20DCE7C7CFE((Local_42[iParam0 /*27*/])->f_9.f_9[iVar0], Local_907.f_110.f_71[iVar0], Local_907.f_110.f_79[iVar0]);
			func_303(func_240(iVar0), iParam0);
			iVar0++;
		}
	}
}

void func_227(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1 && iParam2 != iParam0)
	{
		(Local_42[iParam2 /*27*/])->f_26 = ((Local_42[iParam2 /*27*/])->f_26 || (Local_42[iParam0 /*27*/])->f_26);
	}
}

int func_228(int iParam0)
{
	return iParam0;
}

int func_229(int iParam0, int iParam1, int iParam2)
{
	float fVar0;

	fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), ENTITY::GET_ENTITY_COORDS(iParam1, true, false));
	(Local_42[NETWORK::PARTICIPANT_ID_TO_INT() /*27*/])->f_3.f_2[iParam2] = fVar0;
	if (fVar0 > (Local_907.f_56.f_7[iParam2 /*11*/])->f_9)
	{
		return 0;
	}
	return 1;
}

void func_230(var uParam0)
{
	func_304(uParam0, 0f);
}

bool func_231(var uParam0)
{
	return func_305(*uParam0, 1);
}

int func_232(var uParam0, float fParam1)
{
	if (!func_231(uParam0))
	{
		return 0;
	}
	if (func_306(uParam0) > fParam1)
	{
		return 1;
	}
	return 0;
}

void func_233(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_234(int iParam0)
{
	return 1;
}

void func_235(int iParam0, int iParam1)
{
	func_176(&((Local_907.f_56.f_7[iParam0 /*11*/])->f_2), iParam1);
}

bool func_236(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	return func_147((Local_42[iParam1 /*27*/])->f_3, iParam0);
}

void func_237(int iParam0)
{
	func_167(&((Local_42[NETWORK::PARTICIPANT_ID_TO_INT() /*27*/])->f_3), iParam0);
}

void func_238(int iParam0)
{
	func_176(&((Local_42[NETWORK::PARTICIPANT_ID_TO_INT() /*27*/])->f_3), iParam0);
}

void func_239()
{
	int iVar0;
	int iVar1;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar5 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar6 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar4 = func_240(iVar0);
		if (!func_241(iVar4))
		{
		}
		else if (!func_253(iVar4, iVar5))
		{
			if (func_242(iVar4, &iVar1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar1, iVar6, 0, 0))
				{
					func_307(iVar4);
					func_308(iVar4);
				}
			}
		}
		iVar0++;
	}
}

int func_240(int iParam0)
{
	return iParam0;
}

bool func_241(int iParam0)
{
	return !MISC::IS_BIT_SET(Local_907.f_110.f_67, iParam0);
}

int func_242(int iParam0, var uParam1)
{
	if (!MISC::IS_BIT_SET(Local_907.f_110.f_93, iParam0))
	{
		return 0;
	}
	*uParam1 = &Local_907.f_110.f_83[iParam0 /*3*/];
	uParam1->f_1 = (Local_907.f_110.f_83[iParam0 /*3*/])->f_1;
	uParam1->f_2 = (Local_907.f_110.f_83[iParam0 /*3*/])->f_2;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return 0;
	}
	return 1;
}

void func_243(int iParam0)
{
}

bool func_244(int iParam0)
{
	return MISC::IS_BIT_SET(Local_907.f_110.f_66, iParam0);
}

bool func_245(int iParam0)
{
	return MISC::IS_BIT_SET((Local_42[NETWORK::PARTICIPANT_ID_TO_INT() /*27*/])->f_9.f_3, iParam0);
}

bool func_246(int iParam0)
{
	return SCRIPTS::_0x179A6F0EE2E79026(Local_907.f_110.f_75[iParam0]);
}

void func_247(int iParam0)
{
	MISC::CLEAR_BIT(&((Local_42[NETWORK::PARTICIPANT_ID_TO_INT() /*27*/])->f_9.f_3), iParam0);
}

bool func_248(int iParam0)
{
	return SCRIPTS::_0x179A6F0EE2E79026((Local_42[NETWORK::PARTICIPANT_ID_TO_INT() /*27*/])->f_9.f_9[iParam0]);
}

void func_249(int iParam0)
{
	SCRIPTS::_0xDE544B7EC0C187CC((Local_42[NETWORK::PARTICIPANT_ID_TO_INT() /*27*/])->f_9.f_9[iParam0]);
}

bool func_250(int iParam0)
{
	return !MISC::IS_BIT_SET(Local_907.f_110.f_68, iParam0);
}

bool func_251(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	return MISC::IS_BIT_SET((Local_42[iParam1 /*27*/])->f_9, iParam0);
}

int func_252(int iParam0)
{
	return 0;
}

bool func_253(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	return MISC::IS_BIT_SET((Local_42[iParam1 /*27*/])->f_9.f_2, iParam0);
}

int func_254(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_309(uParam2, 1, iVar0);
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
			if (func_310(iParam0, uParam2))
			{
				*iParam3 = 128;
				func_311(iParam0, uParam2, *iParam3);
				return 1;
			}
		}
		if (Global_1939168->f_21)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_312(iParam0, uParam2))
				{
					*iParam3 = 8;
					func_311(iParam0, uParam2, *iParam3);
					return 1;
				}
				else if (func_313(iParam0, iParam1, uParam2))
				{
					*iParam3 = 8;
					func_311(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_314(iParam0, uParam2))
				{
					*iParam3 = 64;
					func_311(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
		}
		if (Global_1939168->f_20 && func_315(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*iParam3 = 16384;
				func_311(iParam0, uParam2, *iParam3);
				return 1;
			}
		}
		if (Global_1939168->f_19)
		{
			if (func_316(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_317(Global_35, iParam0, uParam2))
					{
						*iParam3 = 4;
						func_311(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_318(Global_35, iParam0, uParam2))
					{
						*iParam3 = 256;
						func_311(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1939168->f_23) < 300)
			{
				if (func_319(Global_35, iParam0, uParam2, 0))
				{
					*iParam3 = 16;
					func_311(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
			else if (func_319(Global_35, iParam0, uParam2, 1))
			{
				*iParam3 = 16;
				func_311(iParam0, uParam2, *iParam3);
				return 1;
			}
		}
		if (Global_1939168->f_33 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_320(iParam0, uParam2))
				{
					*iParam3 = 32;
					func_311(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1939168->f_19 || uParam2->f_12 < 20f)
			{
				if (func_321(&iParam0, uParam2))
				{
					*iParam3 = 4096;
					func_311(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
		}
		if (Global_1939168->f_24 || Global_1939168->f_25)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_322(uParam2, 4000))
				{
					if ((func_323(iParam0, Global_1939168->f_35, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_324(uParam2, iParam0)) && func_325(uParam2, iParam0))
					{
						*iParam3 = 2;
						func_311(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_323(iParam0, Global_1939168->f_35, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_324(uParam2, iParam0)) && func_325(uParam2, iParam0))
				{
					*iParam3 = 2;
					func_311(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
			else if (Global_1939168->f_34 == 0)
			{
				if (Global_1939168->f_35 != 0)
				{
					if (func_326(iParam0, Global_1939168->f_35))
					{
						func_327();
						*iParam3 = 2;
						func_311(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_328(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_329() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_327();
						*iParam3 = 2;
						func_311(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
			}
			if (Global_1939168->f_36 != 0)
			{
				if (func_330())
				{
					if (func_326(iParam0, Global_1939168->f_36))
					{
						func_327();
						*iParam3 = 2;
						func_311(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_331(uParam2, iParam0))
			{
				*iParam3 = 1024;
				func_311(iParam0, uParam2, *iParam3);
				return 1;
			}
		}
		if (Global_1939168->f_50)
		{
			if (*uParam2 & -2147483648 != 0)
			{
				if (func_333(func_332(PLAYER::PLAYER_ID()), ENTITY::GET_ENTITY_COORDS(iParam0, true, false)) <= uParam2->f_30)
				{
					if (func_334(PLAYER::PLAYER_PED_ID(), iParam0, 1060437492 /* Float: 0.707f */) == 0)
					{
						*iParam3 = 1048576;
						func_311(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_28)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_335(iParam0, iParam1, uParam2))
				{
					*iParam3 = 2048;
					func_311(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_336(iParam0, uParam2))
					{
						*iParam3 = 8192;
						func_311(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_337(iParam0, uParam2))
				{
					*iParam3 = 32768;
					func_311(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_338(uParam2, 4000))
				{
					if (func_339(&iParam0, uParam2))
					{
						*iParam3 = 512;
						func_311(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_20)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_340(iParam0, uParam2))
				{
					*iParam3 = 65536;
					uParam2->f_4 = 0;
					func_311(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_341(uParam2, iParam0))
			{
				*iParam3 = 1;
				func_311(iParam0, uParam2, *iParam3);
				return 1;
			}
		}
	}
	return 0;
}

int func_255(var uParam0)
{
	return uParam0->f_22;
}

int func_256(int iParam0, int iParam1, int iParam2)
{
	return 1;
}

void func_257(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
	MISC::SET_BIT(&((Local_42[iVar0 /*27*/])->f_9), iParam0);
	if (bParam1)
	{
		(Local_42[iVar0 /*27*/])->f_9.f_13[iParam0] = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
}

int func_258(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1;

	if (!func_342(iParam1))
	{
		iVar0 = PLAYER::PLAYER_PED_ID();
		if (uParam0->f_2 <= 25f && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) >= 4f)
		{
			if (PED::IS_PED_IN_COVER(iVar0, 0, 0) || PED::IS_PED_GOING_INTO_COVER(iVar0))
			{
			}
			else
			{
				return 1;
			}
		}
	}
	if (func_343(*uParam0, &(Local_907.f_110.f_31), &uVar1, uParam0->f_2))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), *uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_259(int iParam0)
{
	return MISC::IS_BIT_SET(Local_907.f_110.f_63, iParam0);
}

bool func_260(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	return MISC::IS_BIT_SET((Local_42[iParam1 /*27*/])->f_9.f_1, iParam0);
}

int func_261(int iParam0)
{
	return 1;
}

void func_262(int iParam0)
{
}

void func_263(int iParam0)
{
	MISC::SET_BIT(&((Local_42[NETWORK::PARTICIPANT_ID_TO_INT() /*27*/])->f_9.f_1), iParam0);
}

bool func_264(int iParam0)
{
	var uVar0;

	SCRIPTS::_0x20F4CB76689ACDBC(&uVar0);
	SCRIPTS::_0x64F765D9A1F8F02C(&uVar0, Local_907.f_110.f_79[iParam0], &uVar0);
	return !SCRIPTS::_0x179A6F0EE2E79026(&uVar0);
}

int func_265(int iParam0, var uParam1, int iParam2, var uParam3)
{
	*uParam1 = PLAYER::INT_TO_PARTICIPANTINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(*uParam1))
	{
		return 0;
	}
	*iParam2 = NETWORK::NETWORK_GET_PLAYER_INDEX(*uParam1);
	if (!NETWORK::_0x255A5EF65EDA9167(*iParam2))
	{
		return 0;
	}
	*uParam3 = PLAYER::GET_PLAYER_PED(*iParam2);
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam3))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(*uParam3))
	{
		return 0;
	}
	return 1;
}

bool func_266(int iParam0, int iParam1)
{
	return SCRIPTS::_0x72B2E00C9BAC6789(Local_907.f_110.f_71[iParam0], iParam1);
}

int func_267(int iParam0, var uParam1, int iParam2, var uParam3)
{
	return 1;
}

void func_268(int iParam0, int iParam1)
{
	SCRIPTS::_0x31010318BA9897AC((Local_42[NETWORK::PARTICIPANT_ID_TO_INT() /*27*/])->f_9.f_9[iParam0], iParam1);
}

float func_269()
{
	int iVar0;
	float fVar1;

	if (Local_907.f_212.f_3 == 0)
	{
		Local_907.f_212.f_3 = MISC::GET_GAME_TIMER();
		return 0.03125f;
	}
	iVar0 = MISC::GET_GAME_TIMER();
	fVar1 = (BUILTIN::TO_FLOAT((iVar0 - Local_907.f_212.f_3)) * 0.001f);
	Local_907.f_212.f_3 = iVar0;
	return fVar1;
}

bool func_270(vector3 vParam0, int iParam3)
{
	vector3 vVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam3))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam3) };
	return func_344(vVar0, vParam0) > func_344(vVar0, ENTITY::GET_ENTITY_COORDS(iParam3, true, false));
}

int func_271(var uParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, float fParam6)
{
	float fVar0;
	bool bVar1;

	iParam2 = iParam2;
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_6))
	{
		return 0;
	}
	if (bParam5)
	{
		fVar0 = (fParam6 * fParam6);
	}
	else
	{
		fVar0 = BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, false, false));
	}
	switch (*uParam0)
	{
		case 0:
			if (ENTITY::IS_ENTITY_A_PED(uParam0->f_6) && !PED::_0x5102307CE88798EB(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6)))
			{
				PED::REQUEST_PED_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6));
			}
			else if (func_345(uParam0, fVar0, (fParam1 * fParam1), iParam3))
			{
				*uParam0 = 1;
			}
			else
			{
				uParam0->f_8 = 0f;
			}
			break;
		case 1:
			if (ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_6))
			{
				bVar1 = false;
			}
			else if (ENTITY::IS_ENTITY_A_PED(uParam0->f_6))
			{
				if (fParam4 > 0f)
				{
					bVar1 = PED::_0x164CECC59E70DF86(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6), fParam4);
				}
				else
				{
					bVar1 = PED::IS_TRACKED_PED_VISIBLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6));
				}
			}
			else
			{
				bVar1 = ENTITY::_0xC8CCDB712FBCBA92(uParam0->f_6);
			}
			if (!bVar1)
			{
				uParam0->f_1.f_4 = 1;
			}
			if (bVar1)
			{
				if (ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_6))
				{
					*uParam0 = 2;
				}
				else
				{
					if (bParam5 && !ENTITY::IS_ENTITY_A_PED(uParam0->f_6))
					{
						fVar0 = BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, false, false));
					}
					if (func_346(uParam0, fVar0, (fParam1 * fParam1), iParam3))
					{
						*uParam0 = 0;
					}
					else
					{
						*uParam0 = 2;
					}
				}
			}
			else if (uParam0->f_1.f_4)
			{
				uParam0->f_1.f_4 = 0;
				*uParam0 = 0;
				uParam0->f_8 = 0f;
			}
			break;
		case 2:
			*uParam0 = 0;
			break;
	}
	if (uParam0->f_8 != 0f)
	{
		uParam0->f_7 = (func_347() - uParam0->f_8);
	}
	else
	{
		uParam0->f_7 = 0f;
	}
	return 1;
}

int func_272(var uParam0, int iParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar1 = 0;
	fVar2 = 0f;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(((*uParam0)[iVar0 /*9*/])->f_6) && ((*uParam0)[iVar0 /*9*/])->f_7 > 0f) && ENTITY::IS_ENTITY_ON_SCREEN(((*uParam0)[iVar0 /*9*/])->f_6))
		{
			iVar1++;
			fVar2 = (fVar2 + ((*uParam0)[iVar0 /*9*/])->f_7);
		}
		iVar0++;
	}
	if (iParam1 > 1)
	{
		iParam1 = (iParam1 - 1);
	}
	if (iVar1 < iParam1)
	{
		return 0;
	}
	if (fVar2 < fParam2)
	{
		return 0;
	}
	func_143(uParam0);
	return 1;
}

int func_273(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_348(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_274(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_348(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_275(var uParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_161(&Var1, uParam0))
	{
		iVar0 = ((func_349() - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_276(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return ((*Global_1232796)[iParam0 /*5*/])->f_2;
}

int func_277(int iParam0, int iParam1)
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

void func_278(var uParam0)
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
	func_350(uParam0, uParam0->f_1);
}

void func_279(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_176(&(uParam0->f_1), 16384);
	}
	else
	{
		func_167(&(uParam0->f_1), 16384);
	}
}

void func_280(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_176(&(uParam0->f_1), 2048);
	}
	else
	{
		func_167(&(uParam0->f_1), 2048);
	}
}

void func_281(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_167(uParam0, 16);
	}
	else
	{
		func_176(uParam0, 67108864);
		func_176(uParam0, 16);
	}
}

void func_282(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_176(&(uParam0->f_1), 128);
	}
	else
	{
		func_167(&(uParam0->f_1), 128);
	}
}

void func_283(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_167(uParam0, 256);
	}
	else
	{
		func_176(uParam0, 256);
	}
}

void func_284(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_167(uParam0, 268435456);
	}
	else
	{
		func_176(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_167(uParam0, 1073741824 /* Float: 2f */);
	}
	else
	{
		func_176(uParam0, 1073741824 /* Float: 2f */);
	}
	if (!bParam3)
	{
		func_167(uParam0, 536870912);
	}
	else
	{
		func_176(uParam0, 536870912);
	}
}

float func_285(var uParam0)
{
	return uParam0->f_25;
}

void func_286(var uParam0, float fParam1)
{
	uParam0->f_26 = fParam1;
}

void func_287(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_167(uParam0, 1);
	}
	else
	{
		func_176(uParam0, 1);
	}
}

void func_288(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_167(uParam0, 512);
	}
	else
	{
		func_176(uParam0, 512);
	}
}

void func_289(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_167(uParam0, 2);
	}
	else
	{
		func_176(uParam0, 2);
	}
}

void func_290(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_167(uParam0, 8);
	}
	else
	{
		func_176(uParam0, 8);
	}
}

int func_291(int iParam0)
{
	return (Local_907.f_56.f_7[iParam0 /*11*/])->f_4;
}

float func_292(int iParam0)
{
	return (Local_907.f_56.f_7[iParam0 /*11*/])->f_5;
}

Vector3 func_293(int iParam0)
{
	return (Local_907.f_56.f_7[iParam0 /*11*/])->f_6;
}

int func_294(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
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
	if (!func_351(iParam1))
	{
		return 0;
	}
	iVar0 = func_352(iParam1, vParam2, fParam5, bParam8, 1, bParam6, bParam7, bParam9);
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

void func_295(int iParam0, bool bParam1)
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

void func_296(int iParam0, float fParam1, int iParam2)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		fParam1 = func_353(fParam1, 0f, 1f);
		iVar0 = BUILTIN::FLOOR((fParam1 * IntToFloat(ENTITY::GET_ENTITY_MAX_HEALTH(iParam0, iParam2))));
		ENTITY::_SET_ENTITY_HEALTH(iParam0, iVar0, 0);
	}
}

var func_297(int iParam0)
{
	return (Local_907.f_56.f_7[iParam0 /*11*/])->f_10;
}

void func_298(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "HAS_VOICE", true);
			AUDIO::SET_AMBIENT_VOICE_NAME(iParam0, sParam1);
		}
	}
}

void func_299(int iParam0)
{
}

int func_300(int iParam0)
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

struct<2> func_301(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_302(int iParam0)
{
	if (!func_354(func_240(iParam0), Local_907.f_110.f_83[iParam0 /*3*/]))
	{
		MISC::CLEAR_BIT(&(Local_907.f_110.f_93), iParam0);
		return;
	}
	MISC::SET_BIT(&(Local_907.f_110.f_93), iParam0);
}

void func_303(int iParam0, int iParam1)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (MISC::IS_BIT_SET((Local_42[iParam1 /*27*/])->f_9, iParam0))
	{
		if (&(Local_42[iParam1 /*27*/])->f_9.f_13[iParam0] == 0)
		{
			return;
		}
		iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1));
		if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
		{
			return;
		}
		if (NETWORK::_0x255A5EF65EDA9167(&(Local_0.f_33.f_1[iParam0])))
		{
			if (&Local_0.f_33.f_1[iParam0] == iVar0)
			{
				return;
			}
		}
		if (&Local_0.f_33.f_5[iParam0] == 0 || NETWORK::IS_TIME_MORE_THAN(&((Local_42[iParam1 /*27*/])->f_9.f_13[iParam0]), &(Local_0.f_33.f_5[iParam0])))
		{
			Local_0.f_33.f_1[iParam0] = iVar0;
			Local_0.f_33.f_5[iParam0] = &(Local_42[iParam1 /*27*/])->f_9.f_13[iParam0];
		}
	}
}

void func_304(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_347() - fParam1);
	func_355(uParam0, 1);
	func_356(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_305(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_306(var uParam0)
{
	if (!func_231(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_357(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_347() - uParam0->f_1);
}

void func_307(int iParam0)
{
	MISC::SET_BIT(&((Local_42[NETWORK::PARTICIPANT_ID_TO_INT() /*27*/])->f_9.f_2), iParam0);
}

void func_308(int iParam0)
{
}

void func_309(var uParam0, bool bParam1, int iParam2)
{
	func_358(iParam2);
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
		uParam0->f_13 = func_359(0);
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
							func_167(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_360(1, 1))
						{
							func_167(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_360(1, 1) || *uParam0 & 8192 != 0))
				{
					func_176(uParam0, 33554432);
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
			if (func_361(uParam0))
			{
				uParam0->f_15 = func_329();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_329() - uParam0->f_15) > 500)
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
	func_362(uParam0);
}

int func_310(int iParam0, var uParam1)
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
			if (!func_363(iParam0, uParam1, iVar2))
			{
				return 0;
			}
			if (func_364(iParam0, iVar2) <= func_365(uParam1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_311(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_366(iParam2, 1, 1, 1, 0))
	{
		func_167(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_367(uParam1, 1);
	func_368();
}

int func_312(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_369(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_370(uParam1);
			if (func_371(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = func_372(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_367(uParam1, 1);
						return 1;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > func_373(uParam1))
						{
							func_367(uParam1, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_313(int iParam0, int iParam1, var uParam2)
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
	if (func_374(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_370(uParam2);
		if (func_371(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > func_372(uParam2)
				{
					func_367(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_314(int iParam0, var uParam1)
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
	if (func_363(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_372(uParam1)
		{
			fVar3 = func_370(uParam1);
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

int func_315(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_375(bParam1, bParam2, bParam3);
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

int func_316(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_329();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return 1;
	}
	return 0;
}

int func_317(int iParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_376(uParam2);
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
			if (func_325(uParam2, iParam1))
			{
				func_367(uParam2, 1);
				return 1;
			}
		}
	}
	return 0;
}

int func_318(int iParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_12 < IntToFloat(func_255(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1939168->f_40) && !WEAPON::_0x5809DBCA0A37C82B(Global_1939168->f_40)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_325(uParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(iParam0) <= 1f)
				{
					func_367(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_319(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_377(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_explosion"), vVar0, uParam2->f_23))
				{
					func_367(uParam2, 1);
					return 1;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_fire"), vVar0, uParam2->f_29))
				{
					func_367(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_potential_blast"), vVar0, uParam2->f_23))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("weapon_thrown_dynamite"), uParam2->f_28, &vVar4, 0, 0);
					if (func_378(iParam1, vVar0, vVar4))
					{
						func_367(uParam2, 1);
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
					func_367(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_potential_blast"), vVar0, uParam2->f_23))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("weapon_thrown_dynamite"), uParam2->f_28, &vVar7, 0, 0);
					if (func_378(iParam1, vVar0, vVar7))
					{
						func_367(uParam2, 1);
						return 1;
					}
				}
				break;
		}
	}
	return 0;
}

int func_320(int iParam0, var uParam1)
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
		if (!func_363(iParam0, uParam1, &(Global_1939168->f_28[iVar0])) || iParam0 == &Global_1939168->f_28[iVar0])
		{
		}
		else
		{
			bVar13 = func_379(&(Global_1939168->f_28[iVar0]));
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(&(Global_1939168->f_28[iVar0]), false, false), vVar9);
			if (func_380(&(Global_1939168->f_28[iVar0])))
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
			if (func_381(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1939168->f_28[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_382(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1939168->f_28[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_383(uParam1, iParam0, fVar1, iVar0))
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

int func_321(int iParam0, var uParam1)
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

int func_322(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_329();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

int func_323(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_384(iVar0, &iVar2))
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
	if (func_385(iVar0, iParam0))
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

int func_324(var uParam0, int iParam1)
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

int func_325(var uParam0, int iParam1)
{
	if (func_386(uParam0))
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

int func_326(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return 1;
		}
		if (func_387(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_327()
{
}

int func_328(var uParam0, int iParam1)
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
		if (func_388(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_329();
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
						if (func_389(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_9 = func_329();
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

int func_329()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

int func_330()
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
	if ((func_329() - Global_1939168->f_37) >= 10000)
	{
		return 0;
	}
	return 1;
}

int func_331(var uParam0, int iParam1)
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
	fVar0 = func_365(uParam0);
	if (uParam0->f_12 > func_285(uParam0) && uParam0->f_12 > fVar0)
	{
		return 0;
	}
	iVar2 = func_390(iParam1);
	iVar1 = func_391(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || PED::_0x9D9473CB82D83A30(iParam1, Global_35, 0) == 1) || PED::_0x9D9473CB82D83A30(iParam1, uParam0->f_14, 0) == 1)
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_332(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

float func_333(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

int func_334(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return func_392(iParam0, vVar0, iParam2);
}

int func_335(int iParam0, int iParam1, var uParam2)
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
	return func_393(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

int func_336(int iParam0, var uParam1)
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
		if (func_394(iParam0, uParam1, 1))
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
			if (func_395(uParam1))
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
					if (!func_396(uParam1, iParam0))
					{
						if (func_389(iVar4, Global_36, 1) < 7f)
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

int func_337(int iParam0, var uParam1)
{
	if (!func_397(0))
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

int func_338(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_329();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_339(int iParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_340(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_329();
	}
	else if (func_329() - uParam1->f_4) > func_398(uParam1)
	{
		return func_399(iParam0, uParam1, 0, -1082130432 /* Float: -1f */);
	}
	return 0;
}

int func_341(var uParam0, int iParam1)
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

bool func_342(int iParam0)
{
	return !MISC::IS_BIT_SET(Local_907.f_110.f_69, iParam0);
}

int func_343(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam1->f_5)
	{
		func_309(uParam1, 0, iVar0);
	}
	if (fParam3 > 0f)
	{
		uParam1->f_12 = fParam3;
	}
	else
	{
		uParam1->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, false, false));
	}
	if (!Global_1939168->f_6 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (Global_1939168->f_24 || Global_1939168->f_25)
		{
			if (!uParam1->f_1 & 2 != 0)
			{
				if (func_322(uParam1, 4000))
				{
					if ((func_323(iParam0, Global_1939168->f_35, *uParam1 & 128 != 0, 0, *uParam1 & 256 != 0) && func_324(uParam1, iParam0)) && func_325(uParam1, iParam0))
					{
						func_327();
						*uParam2 = 2;
						func_311(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
			}
		}
		if (!uParam1->f_1 & 2 != 0)
		{
			if (uParam1->f_12 < 4f)
			{
				if (func_322(uParam1, 4000))
				{
					if ((func_323(iParam0, Global_1939168->f_35, *uParam1 & 128 != 0, 1, *uParam1 & 256 != 0) && func_324(uParam1, iParam0)) && func_325(uParam1, iParam0))
					{
						func_327();
						*uParam2 = 2;
						func_311(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
			}
			else if (Global_1939168->f_35 != 0)
			{
				if (Global_1939168->f_34 == 0)
				{
					if (func_326(iParam0, Global_1939168->f_35))
					{
						func_327();
						*uParam2 = 2;
						func_311(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
			}
			if (Global_1939168->f_36 != 0)
			{
				if (func_330())
				{
					if (func_326(iParam0, Global_1939168->f_36))
					{
						func_327();
						*uParam2 = 2;
						func_311(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
			}
		}
		if (Global_1939168->f_19)
		{
			if (func_316(uParam1, 1065353216 /* Float: 1f */))
			{
				if (!uParam1->f_1 & 4 != 0)
				{
					if (func_317(Global_35, iParam0, uParam1))
					{
						func_327();
						*uParam2 = 4;
						func_311(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
				if (!uParam1->f_1 & 256 != 0)
				{
					if (func_318(Global_35, iParam0, uParam1))
					{
						func_327();
						*uParam2 = 256;
						func_311(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
			}
		}
		if (!uParam1->f_1 & 131072 != 0)
		{
			if (func_400(iParam0, uParam1))
			{
				func_327();
				*uParam2 = 131072;
				func_311(iParam0, uParam1, *uParam2);
				return 1;
			}
		}
		if (*uParam1 & 4 != 0)
		{
			if (func_401(iParam0, uParam1))
			{
				func_327();
				*uParam2 = 262144;
				func_311(iParam0, uParam1, *uParam2);
				return 1;
			}
		}
	}
	return 0;
}

float func_344(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

int func_345(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (fParam1 > fParam2)
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_6))
	{
		return 0;
	}
	return 1;
}

int func_346(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (func_345(uParam0, fParam1, fParam2, iParam3))
	{
		if (uParam0->f_8 == 0f)
		{
			uParam0->f_8 = (func_347() - 0.02f);
		}
		return 1;
	}
	uParam0->f_8 = 0f;
	return 0;
}

float func_347()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

int func_348(struct<2> Param0, int iParam2)
{
	if (!func_38(Param0))
	{
		return 0;
	}
	func_402(iParam2);
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

int func_349()
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

void func_350(var uParam0, var uParam1)
{
}

bool func_351(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam0, false);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_352(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam6, bParam7, false, !bParam9);
	if (bParam5)
	{
		PED::_0x283978A15512B2FE(iVar0, 1);
	}
	return iVar0;
}

float func_353(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_354(var uParam0, var uParam1)
{
	return 0;
}

void func_355(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_356(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_357(var uParam0)
{
	return func_305(*uParam0, 2);
}

void func_358(int iParam0)
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
	Global_1939168->f_21 = func_403();
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
			func_404(&(Global_1939168->f_28), &(Global_1939168->f_33));
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

var func_359(int iParam0)
{
	return &(Global_1099293->f_372[iParam0 /*3*/]);
}

int func_360(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (func_405(bParam0, &iVar0, &iVar1))
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

int func_361(var uParam0)
{
	int iVar0;

	iVar0 = Global_1939168->f_34;
	if (func_28() == -1)
	{
		if (Global_1939168->f_34 == 0)
		{
			iVar0 = func_406(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1939168->f_34) || !&Global_1954462->f_1616[4])
	{
		iVar0 = func_406(uParam0);
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_391(iVar0) == -1)
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

void func_362(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_407(uParam0);
	}
}

int func_363(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_391(iParam2);
	}
	else
	{
		iVar1 = func_390(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_391(iParam0);
	}
	else
	{
		iVar0 = func_390(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return 1;
		}
	}
	if (func_147(*uParam1, 8388608))
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

float func_364(int iParam0, int iParam1)
{
	return func_387(iParam0, iParam1, 1, 1);
}

float func_365(var uParam0)
{
	return uParam0->f_28;
}

int func_366(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_367(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_167(uParam0, 134217728);
	}
	else
	{
		func_176(uParam0, 134217728);
	}
}

void func_368()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

int func_369(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5)
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
		if (((WEAPON::_0xCB690F680A3EA971(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, iParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_387(iVar0, iParam0, 1, 1) <= 4f)
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
		if (WEAPON::_0x6AD66548840472E5(func_408(iVar0, 0)))
		{
			if (func_409(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_370(var uParam0)
{
	return uParam0->f_17;
}

int func_371(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_12 > fParam3)
	{
		return 0;
	}
	fVar0 = -1f;
	if (!func_147(*uParam0, 4194304))
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

int func_372(var uParam0)
{
	return uParam0->f_18;
}

int func_373(var uParam0)
{
	return uParam0->f_19;
}

int func_374(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (WEAPON::_0x6AD66548840472E5(func_408(iVar0, 0)))
		{
			if (func_410(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_375(bool bParam0, bool bParam1, bool bParam2)
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

float func_376(var uParam0)
{
	return uParam0->f_24;
}

int func_377(var uParam0)
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

int func_378(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_411(iParam0, vParam4, 0.5f))
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

int func_379(int iParam0)
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
	if (func_412(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_380(int iParam0)
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

int func_381(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_413(iParam1))
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

int func_382(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_413(iParam1))
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

int func_383(var uParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = func_414(uParam0);
	if (func_413(iParam1))
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

int func_384(int iParam0, int iParam1)
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

int func_385(int iParam0, int iParam1)
{
	if (PED::_0xB65A4DAB460A19BD(iParam0) == iParam1)
	{
		return 1;
	}
	if (WEAPON::_0x8D50F43298AB9545(iParam0, iParam1))
	{
		return 1;
	}
	if (!WEAPON::_0x6E4E1A82081EABED(func_415(iParam0, 1, 0, 0)) && !func_415(iParam0, 1, 0, 0) == 1151374672)
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

bool func_386(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

float func_387(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_388(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_389(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

float func_389(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

int func_390(int iParam0)
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

int func_391(int iParam0)
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

int func_392(int iParam0, vector3 vParam1, float fParam4)
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
	fVar9 = func_416(vVar3, vVar6);
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
	if (func_417(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

int func_393(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_384(Global_35, &iVar1))
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
		fVar2 = func_387(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
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
		if (func_387(iParam0, Global_1939168->f_34, 0, 1) < 2.5f)
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

int func_394(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_405(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_396(uParam1, iVar0))
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
				if (!bParam2 || !func_396(uParam1, iVar1))
				{
					if (func_389(iVar1, Global_36, 1) < 5f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_395(var uParam0)
{
	return func_147(*uParam0, 131072);
}

int func_396(var uParam0, int iParam1)
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

int func_397(int iParam0)
{
	return 0;
}

int func_398(var uParam0)
{
	return uParam0->f_21;
}

int func_399(int iParam0, var uParam1, bool bParam2, float fParam3)
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

int func_400(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar0 = func_418(uParam1);
	if (uParam1->f_12 > (fVar0 + 5f))
	{
		return 0;
	}
	if (!PED::_0x5102307CE88798EB(iParam0))
	{
		PED::REQUEST_PED_VISIBILITY_TRACKING(iParam0);
	}
	if (uParam1->f_12 < fVar0 || PED::IS_TRACKED_PED_VISIBLE(iParam0))
	{
		fVar1 = -1f;
		fVar2 = func_419(PED::_0x2BA9D7BF629F920C(iParam0), (fVar0 + 5f));
		if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, fVar2, -1f, fVar1) && PED::_0x7F9B9791D4CB71F6(iParam0, Global_35, true, 0) == 1)
		{
			return 1;
		}
		else if (WEAPON::IS_WEAPON_VALID(Global_1939168->f_38))
		{
			if (WEAPON::_0x79407D33328286C6(Global_1939168->f_38) || WEAPON::_0x506F1DE1BFC75304(Global_1939168->f_38))
			{
				if (uParam1->f_12 <= 5f)
				{
					if (func_420())
					{
						if (PED::IS_PED_FACING_PED(Global_35, iParam0, 110f))
						{
							if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_401(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (func_413(iParam0))
	{
		PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), 0.25f);
	}
	if (((PED::_0xD5FE956C70FF370B(Global_35) || PED::IS_PED_IN_COVER(Global_35, 0, 0)) || PED::IS_PED_GOING_INTO_COVER(Global_35)) || *uParam1 & 2097152 != 0)
	{
		iVar1 = 0;
	}
	else
	{
		iVar1 = 1;
	}
	if (PED::_0x0EA9EACBA3B01601(Global_35, iParam0, iVar1) && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) > 4f)
	{
		if (*uParam1 & 512 != 0)
		{
			if (PED::IS_PED_IN_COVER(Global_35, 0, 0) || PED::IS_PED_GOING_INTO_COVER(Global_35))
			{
				return 0;
			}
			if (PED::_0xD5FE956C70FF370B(Global_35) || ((PED::_0xA29FD00D45311EB7(Global_35, "stealth") == 1f && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) < 8f) && *uParam1 & 2097152 != 0))
			{
				return 0;
			}
		}
		if (PED::_0xA29FD00D45311EB7(Global_35, "stealth") == 1f && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) > 8f)
		{
		}
		iVar0 = 1;
	}
	return iVar0;
}

void func_402(int iParam0)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = -1;
}

int func_403()
{
	if (func_421())
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

void func_404(var uParam0, var uParam1)
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

int func_405(bool bParam0, int iParam1, int iParam2)
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

int func_406(var uParam0)
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

void func_407(var uParam0)
{
	int iVar0;

	if (Global_1939168->f_32 == 0)
	{
		func_176(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1939168->f_33)
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(Global_1939168->f_28[iVar0])))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(&(Global_1939168->f_28[iVar0])))
				{
					func_167(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}

var func_408(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

int func_409(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_410(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_410(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_411(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

int func_412(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_413(int iParam0)
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

float func_414(var uParam0)
{
	return uParam0->f_27;
}

int func_415(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

float func_416(vector3 vParam0, vector3 vParam3)
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

bool func_417(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

float func_418(var uParam0)
{
	if (!*uParam0 & 1 != 0)
	{
		return func_285(uParam0);
	}
	if (GRAPHICS::_0x25CA89B2A39DCC69() > 0.833f)
	{
		return func_422(uParam0);
	}
	return func_285(uParam0);
}

float func_419(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_420()
{
	int iVar0;
	int iVar1;

	iVar0 = func_424(func_423());
	iVar1 = func_425(func_423());
	if (iVar0 >= 21)
	{
		return 1;
	}
	else if (iVar0 < 5)
	{
		return 1;
	}
	else if (iVar0 >= 20)
	{
		if (iVar1 >= 20)
		{
			return 1;
		}
	}
	else if (iVar0 < 6)
	{
		if (iVar1 <= 20)
		{
			return 1;
		}
	}
	return 0;
}

int func_421()
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

var func_422(var uParam0)
{
	return uParam0->f_26;
}

int func_423()
{
	return &Global_1902688;
}

int func_424(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_425(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

