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
	struct<47> Local_13 = { 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 } ;
	var uLocal_60 = 1;
	var uLocal_61 = 0;
	struct<17> Local_62[32];
	struct<265> Local_607 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 1092616192, -1723181095, 1127153664, 1117782016, 1123024896, 1125515264, 1036831949, 1073741824, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1061997773, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 } ;
	var uLocal_872 = 0;
	var uLocal_873 = 1;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 1065353216;
	var uLocal_877 = 0;
	var uLocal_878 = 1065353216;
	var uLocal_879 = 1077936128;
	var uLocal_880 = 1108082688;
	var uLocal_881 = 1113325568;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 3;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	float fLocal_914 = 0f;
	float fLocal_915 = 0f;
	var uLocal_916 = 0;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_914 = 1f;
	fLocal_915 = 1f;
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
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_13, 49, 40);
	func_10(NETWORK::_0xBA24095EA96DFE17(&Local_13), 49, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_62, 545, 41);
	func_11(NETWORK::_0x690806BC83BC8CA2(Local_62[0 /*17*/]), 545, "m_clientData");
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
	else if (func_17(Local_607.f_9, 0, 1))
	{
		return 1;
	}
	else if (!func_18())
	{
		return 1;
	}
	else if (!func_19(Local_607.f_12))
	{
		return 1;
	}
	else if (!func_21(func_20(Local_607.f_12), Local_607.f_9))
	{
		return 1;
	}
	else if (Local_607.f_8 == 6)
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
	MISC::_COPY_MEMORY(&Local_607, &uParam0, 5);
	iVar19 = func_30(&bVar18, Local_607.f_1, Local_607.f_2);
	if (bVar18 || iVar19 == -1)
	{
		return;
	}
	Local_607.f_12 = iVar19;
	iVar17 = (Global_1184672->f_231.f_1066[iVar19 /*17*/])->f_5;
	func_31(&Var0, Local_607.f_1, Local_607.f_2, Local_607.f_3, iVar17);
	Local_607.f_9 = { func_32(Var0.f_5, 8) };
	Local_607.f_14 = Var0.f_5;
	Local_607.f_15 = { Var0.f_11 };
	func_33();
	func_34();
}

void func_14()
{
	func_35();
}

void func_15()
{
	func_36();
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
	if (Local_13 <= 5)
	{
		func_42();
	}
	switch (Local_13)
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
	if (Local_607.f_8 <= 5)
	{
		func_50();
	}
	switch (Local_607.f_8)
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
		if (VOLUME::_0xF6A8A652A6B186CD(Local_13.f_3.f_1))
		{
			VOLUME::_0xFDFECC6EE4491E11(Local_13.f_3.f_1);
		}
	}
	func_59();
}

void func_26()
{
	func_60();
	func_61();
	func_62();
}

void func_27()
{
	if (Local_607.f_12 != -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1)
		{
			func_63(Local_607.f_12, 4);
		}
	}
	func_64();
	if (func_65(32))
	{
		func_66(Local_13.f_6);
	}
	func_67();
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
	func_68(&Var0, Var26);
	iVar25 = func_69(&Var0);
	if (func_19(iVar25))
	{
		Var10 = { func_70(iVar25) };
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
			func_71(iParam0, iParam2);
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
			func_72(iParam0);
			switch (iParam2)
			{
				case 0:
					func_73(iParam0);
					iParam0->f_5 = 277430601;
					iParam0->f_11 = { -1925.343f, -2119.336f, 52.16934f };
					break;
				case 1:
					func_73(iParam0);
					iParam0->f_5 = 1659133778;
					iParam0->f_11 = { 136.298f, 35.34337f, 101.2795f };
					break;
				case 2:
					func_73(iParam0);
					iParam0->f_5 = 1296650927;
					iParam0->f_11 = { -910.7408f, 860.8453f, 134.6651f };
					break;
				case 3:
					func_73(iParam0);
					iParam0->f_5 = 2115437634;
					iParam0->f_11 = { 2788.779f, 1077.284f, 57.99089f };
					break;
				case 4:
					func_73(iParam0);
					iParam0->f_5 = 1098622970;
					iParam0->f_11 = { 1751.914f, -1117.739f, 40.70011f };
					break;
				case 5:
					func_73(iParam0);
					iParam0->f_5 = 393263596;
					iParam0->f_11 = { 1290.432f, -836.7289f, 77.47561f };
					break;
				case 6:
					func_73(iParam0);
					iParam0->f_5 = 189453630;
					iParam0->f_11 = { 308.1141f, 1187.807f, 180.1746f };
					break;
				case 7:
					func_73(iParam0);
					iParam0->f_5 = -98921343;
					iParam0->f_11 = { -1779.538f, -235.3894f, 181.2029f };
					break;
				case 8:
					func_73(iParam0);
					iParam0->f_5 = 6025033;
					iParam0->f_11 = { -1290.399f, -1179.199f, 72.33453f };
					break;
				case 9:
					func_73(iParam0);
					iParam0->f_5 = -1060299979;
					iParam0->f_11 = { -2306.89f, -1546.208f, 152.0187f };
					break;
				case 10:
					func_73(iParam0);
					iParam0->f_5 = 682088681;
					iParam0->f_11 = { -2724.458f, -2521.524f, 64.76124f };
					break;
				case 11:
					func_73(iParam0);
					iParam0->f_5 = 1705841922;
					iParam0->f_11 = { -4461.883f, -3271.474f, 14.54459f };
					break;
				case 12:
					func_73(iParam0);
					iParam0->f_5 = -301205165;
					iParam0->f_11 = { -4631.054f, -2738.483f, -12.13559f };
					break;
				case 13:
					func_73(iParam0);
					iParam0->f_5 = 1906160715;
					iParam0->f_11 = { -5678.259f, -3182.939f, -22.66476f };
					break;
				case 14:
					func_73(iParam0);
					iParam0->f_5 = -1129906020;
					iParam0->f_11 = { -1688.868f, -2272.091f, 44.12061f };
					break;
				case 15:
					func_73(iParam0);
					iParam0->f_5 = 1592980994;
					iParam0->f_11 = { -1621.917f, 1628.208f, 235.9645f };
					break;
				case 16:
					func_73(iParam0);
					iParam0->f_5 = 686459378;
					iParam0->f_11 = { 420.3633f, 2020.91f, 230.4423f };
					break;
				case 17:
					func_73(iParam0);
					iParam0->f_5 = -259262381;
					iParam0->f_11 = { -517.4607f, 510.5349f, 102.2307f };
					break;
				case 18:
					func_73(iParam0);
					iParam0->f_5 = 1289806844;
					iParam0->f_11 = { 1775.601f, 546.3866f, 106.6334f };
					break;
				case 19:
					func_73(iParam0);
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
			func_72(iParam0);
			switch (iParam2)
			{
				case 0:
					func_74(iParam0, 2);
					func_74(iParam0, 3);
					func_74(iParam0, 5);
					iParam0->f_5 = 1454566440;
					iParam0->f_11 = { 2252.035f, 1342.706f, 84.5573f };
					break;
				case 1:
					func_74(iParam0, 2);
					func_74(iParam0, 3);
					func_74(iParam0, 5);
					iParam0->f_5 = 1141360338;
					iParam0->f_11 = { 2280.7f, 1608.79f, 84.32f };
					break;
				case 2:
					func_74(iParam0, 0);
					func_74(iParam0, 1);
					func_74(iParam0, 2);
					func_74(iParam0, 3);
					func_74(iParam0, 5);
					iParam0->f_5 = 844768119;
					iParam0->f_11 = { 2438.612f, 960.3168f, 73.0963f };
					break;
				case 3:
					func_74(iParam0, 0);
					func_74(iParam0, 2);
					func_74(iParam0, 3);
					func_74(iParam0, 4);
					func_74(iParam0, 5);
					func_74(iParam0, 7);
					iParam0->f_5 = -1601993562;
					iParam0->f_11 = { 1130.541f, 575.7938f, 86.66257f };
					break;
				case 4:
					func_74(iParam0, 0);
					func_74(iParam0, 2);
					func_74(iParam0, 3);
					func_74(iParam0, 5);
					func_74(iParam0, 7);
					iParam0->f_5 = -901588956;
					iParam0->f_11 = { -754.3893f, -399.1133f, 40.84306f };
					break;
				case 5:
					func_74(iParam0, 0);
					func_74(iParam0, 2);
					func_74(iParam0, 3);
					func_74(iParam0, 5);
					func_74(iParam0, 7);
					iParam0->f_5 = 2129019244;
					iParam0->f_11 = { -410.6756f, -63.938f, 40.7762f };
					break;
				case 6:
					func_74(iParam0, 0);
					func_74(iParam0, 2);
					func_74(iParam0, 4);
					func_74(iParam0, 5);
					func_74(iParam0, 6);
					iParam0->f_5 = 1227099802;
					iParam0->f_11 = { -2085.777f, -161.9067f, 208.0633f };
					break;
				case 7:
					func_74(iParam0, 0);
					func_74(iParam0, 2);
					func_74(iParam0, 4);
					func_74(iParam0, 5);
					func_74(iParam0, 6);
					iParam0->f_5 = -940471213;
					iParam0->f_11 = { -1678.304f, -517.8369f, 140.867f };
					break;
				case 8:
					func_74(iParam0, 0);
					func_74(iParam0, 2);
					func_74(iParam0, 4);
					func_74(iParam0, 5);
					func_74(iParam0, 6);
					iParam0->f_5 = -700569364;
					iParam0->f_11 = { -2624.881f, -339.7662f, 141.8102f };
					break;
				case 9:
					func_74(iParam0, 0);
					func_74(iParam0, 1);
					iParam0->f_5 = 412376369;
					iParam0->f_11 = { -926.5729f, -924.4639f, 41.1771f };
					break;
				case 10:
					func_74(iParam0, 0);
					func_74(iParam0, 2);
					func_74(iParam0, 5);
					func_74(iParam0, 7);
					iParam0->f_5 = -364052317;
					iParam0->f_11 = { -722.9517f, -1718.81f, 41.41f };
					break;
				case 11:
					func_74(iParam0, 0);
					func_74(iParam0, 1);
					iParam0->f_5 = -989186530;
					iParam0->f_11 = { -1069.18f, -1919.616f, 42.3447f };
					break;
				case 12:
					func_74(iParam0, 0);
					func_74(iParam0, 2);
					func_74(iParam0, 3);
					func_74(iParam0, 4);
					func_74(iParam0, 5);
					func_74(iParam0, 6);
					iParam0->f_5 = 333858683;
					iParam0->f_11 = { 1673.672f, 1440.046f, 146.0849f };
					break;
				case 13:
					func_74(iParam0, 0);
					func_74(iParam0, 1);
					iParam0->f_5 = -39511303;
					iParam0->f_11 = { 1562.434f, 1445.237f, 145.2842f };
					break;
				case 14:
					func_74(iParam0, 3);
					func_74(iParam0, 4);
					func_74(iParam0, 5);
					func_74(iParam0, 6);
					iParam0->f_5 = 813662381;
					iParam0->f_11 = { 1244.927f, 1177.251f, 148.8856f };
					break;
				case 15:
					func_74(iParam0, 2);
					func_74(iParam0, 3);
					func_74(iParam0, 5);
					func_74(iParam0, 7);
					iParam0->f_5 = -1114006686;
					iParam0->f_11 = { 1926.703f, -362.3477f, 42.4864f };
					break;
				case 16:
					func_74(iParam0, 0);
					func_74(iParam0, 1);
					func_74(iParam0, 3);
					func_74(iParam0, 5);
					func_74(iParam0, 7);
					iParam0->f_5 = 1049238845;
					iParam0->f_11 = { 2192.489f, -318.3198f, 40.7232f };
					break;
				case 17:
					func_74(iParam0, 0);
					func_74(iParam0, 1);
					func_74(iParam0, 3);
					func_74(iParam0, 5);
					func_74(iParam0, 7);
					iParam0->f_5 = 1363886783;
					iParam0->f_11 = { 2408.447f, -490.4562f, 40.9243f };
					break;
				case 18:
					func_74(iParam0, 0);
					func_74(iParam0, 1);
					func_74(iParam0, 2);
					func_74(iParam0, 3);
					func_74(iParam0, 5);
					iParam0->f_5 = -1215674354;
					iParam0->f_11 = { -3243.502f, -3187.141f, -9.3137f };
					break;
				case 19:
					func_74(iParam0, 0);
					func_74(iParam0, 1);
					iParam0->f_5 = 1902132155;
					iParam0->f_11 = { -1745.01f, -2929.141f, -12.3355f };
					break;
				case 20:
					func_74(iParam0, 0);
					func_74(iParam0, 1);
					func_74(iParam0, 2);
					func_74(iParam0, 3);
					func_74(iParam0, 5);
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
			func_72(iParam0);
			iParam0->f_15 = -2090512547;
			switch (iParam2)
			{
				case 0:
					func_73(iParam0);
					iParam0->f_5 = 1382777618;
					iParam0->f_11 = { -228.7198f, 824.1839f, 123.3019f };
					break;
				case 1:
					func_73(iParam0);
					iParam0->f_5 = -2000681184;
					iParam0->f_11 = { 1274.578f, -1218.286f, 80.6496f };
					break;
				case 2:
					func_73(iParam0);
					iParam0->f_5 = 886884092;
					iParam0->f_11 = { -954.4733f, -1203.246f, 54.5241f };
					break;
				case 3:
					func_73(iParam0);
					iParam0->f_5 = -1277120723;
					iParam0->f_11 = { -5442.537f, -2904.509f, -0.0668f };
					break;
				case 4:
					func_73(iParam0);
					iParam0->f_5 = 1577436816;
					iParam0->f_11 = { -4438.908f, -2693.073f, -12.033f };
					break;
				case 5:
					func_73(iParam0);
					iParam0->f_5 = -234749781;
					iParam0->f_11 = { -3339.601f, -2869.283f, -6.9507f };
					break;
				case 6:
					func_73(iParam0);
					iParam0->f_5 = -1607623039;
					iParam0->f_11 = { 1396.14f, -643.1758f, 70.4818f };
					break;
				case 7:
					func_73(iParam0);
					iParam0->f_5 = -1943295936;
					iParam0->f_11 = { 1735.865f, -422.7769f, 47.1349f };
					break;
				case 8:
					func_73(iParam0);
					iParam0->f_5 = -397730168;
					iParam0->f_11 = { 1978.501f, -1902.647f, 41.0487f };
					break;
				case 9:
					func_73(iParam0);
					iParam0->f_5 = -392659534;
					iParam0->f_11 = { 2757.999f, -1078.666f, 45.8905f };
					break;
				case 10:
					func_73(iParam0);
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
			func_72(iParam0);
			switch (iParam2)
			{
				case 0:
					func_73(iParam0);
					iParam0->f_5 = 1247886914;
					iParam0->f_11 = { 2777.227f, 463.4025f, 65.2501f };
					break;
				case 1:
					func_73(iParam0);
					iParam0->f_5 = 1926100410;
					iParam0->f_11 = { 1428.817f, -1812.995f, 57.37384f };
					break;
				case 2:
					func_73(iParam0);
					iParam0->f_5 = 603340011;
					iParam0->f_11 = { 2578.893f, -852.3694f, 41.3078f };
					break;
				case 3:
					func_73(iParam0);
					iParam0->f_5 = -1253915394;
					iParam0->f_11 = { 2798.119f, 1432.187f, 77.71185f };
					break;
				case 4:
					func_73(iParam0);
					iParam0->f_5 = 1281783573;
					iParam0->f_11 = { 1243.455f, 526.5765f, 87.43867f };
					break;
				case 5:
					func_73(iParam0);
					iParam0->f_5 = -1384936716;
					iParam0->f_11 = { -28.69774f, 1111.23f, 167.9945f };
					break;
				case 6:
					func_73(iParam0);
					iParam0->f_5 = 636669604;
					iParam0->f_11 = { -546.6091f, -298.2057f, 52.56811f };
					break;
				case 7:
					func_73(iParam0);
					iParam0->f_5 = 1410575087;
					iParam0->f_11 = { -1403.688f, 383.7506f, 102.2472f };
					break;
				case 8:
					func_73(iParam0);
					iParam0->f_5 = -736919321;
					iParam0->f_11 = { -1510.116f, -883.8221f, 88.72778f };
					break;
				case 9:
					func_73(iParam0);
					iParam0->f_5 = 1755496218;
					iParam0->f_11 = { -1459.752f, -1915.602f, 50.93545f };
					break;
				case 10:
					func_73(iParam0);
					iParam0->f_5 = -1810033095;
					iParam0->f_11 = { -2470.018f, -2426.993f, 59.1458f };
					break;
				case 11:
					func_73(iParam0);
					iParam0->f_5 = 99707271;
					iParam0->f_11 = { -3092.935f, -3166.527f, -1.36638f };
					break;
				case 12:
					func_73(iParam0);
					iParam0->f_5 = 2145033839;
					iParam0->f_11 = { -3685.624f, -2769.247f, -15.14988f };
					break;
				case 13:
					func_73(iParam0);
					iParam0->f_5 = -994111457;
					iParam0->f_11 = { -4668.993f, -3706.819f, 12.54352f };
					break;
				case 14:
					func_73(iParam0);
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
					func_75(iParam0, 0);
					func_75(iParam0, 1);
					func_75(iParam0, 4);
					func_75(iParam0, 5);
					break;
				case 1:
					func_75(iParam0, 2);
					func_75(iParam0, 3);
					func_75(iParam0, 6);
					func_75(iParam0, 7);
					func_76(iParam0, 2);
					break;
			}
			switch (iParam2)
			{
				case 0:
					func_74(iParam0, 0);
					iParam0->f_5 = -88606612;
					iParam0->f_11 = { 498.9236f, 1191.276f, 179.5016f };
					break;
				case 1:
					func_74(iParam0, 1);
					iParam0->f_5 = -1507537085;
					iParam0->f_11 = { 114.87f, 1097.69f, 177.97f };
					break;
				case 2:
					func_74(iParam0, 0);
					iParam0->f_5 = 150331424;
					iParam0->f_11 = { 2271.753f, -440.5277f, 40.82026f };
					break;
				case 3:
					func_74(iParam0, 1);
					iParam0->f_5 = -74168995;
					iParam0->f_11 = { 2000.58f, -499.0656f, 41.0245f };
					break;
				case 4:
					func_74(iParam0, 0);
					iParam0->f_5 = -1303456769;
					iParam0->f_11 = { 2299.81f, -898.4015f, 41.04434f };
					break;
				case 5:
					func_74(iParam0, 1);
					iParam0->f_5 = 2080696176;
					iParam0->f_11 = { 2369.292f, -673.8396f, 41.36789f };
					break;
				case 6:
					func_74(iParam0, 0);
					iParam0->f_5 = -801880493;
					iParam0->f_11 = { 1531.33f, 1578.837f, 147.4066f };
					break;
				case 7:
					func_74(iParam0, 1);
					iParam0->f_5 = -2098877513;
					iParam0->f_11 = { 945.3031f, 1142.541f, 147.4809f };
					break;
				case 8:
					func_74(iParam0, 0);
					iParam0->f_5 = -985131289;
					iParam0->f_11 = { -1126.469f, 815.3829f, 117.6536f };
					break;
				case 9:
					func_74(iParam0, 1);
					iParam0->f_5 = 171385032;
					iParam0->f_11 = { -2063.813f, 935.3212f, 147.0808f };
					break;
				case 10:
					func_74(iParam0, 0);
					iParam0->f_5 = -690365399;
					iParam0->f_11 = { -1589.688f, -1425.319f, 80.34965f };
					break;
				case 11:
					func_74(iParam0, 1);
					iParam0->f_5 = -393773180;
					iParam0->f_11 = { -910.3301f, -1815.748f, 61.71241f };
					break;
				case 12:
					func_74(iParam0, 0);
					iParam0->f_5 = 1783045643;
					iParam0->f_11 = { -2690.104f, -2892.627f, 64.73759f };
					break;
				case 13:
					func_74(iParam0, 1);
					iParam0->f_5 = -1841828372;
					iParam0->f_11 = { -2914.53f, -2558.967f, 61.66708f };
					break;
				case 14:
					func_74(iParam0, 0);
					iParam0->f_5 = -1926357119;
					iParam0->f_11 = { -4545.762f, -3673.932f, 17.87756f };
					break;
				case 15:
					func_74(iParam0, 1);
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
					func_74(iParam0, 0);
					func_74(iParam0, 1);
					func_74(iParam0, 2);
					func_74(iParam0, 9);
					func_74(iParam0, 10);
					func_74(iParam0, 11);
					func_77(iParam0, iParam3);
					iParam0->f_5 = 666420762;
					iParam0->f_11 = { 468.6932f, 60.0849f, 134.4816f };
					break;
				case 1:
					func_74(iParam0, 1);
					func_74(iParam0, 2);
					func_74(iParam0, 8);
					func_74(iParam0, 9);
					func_74(iParam0, 10);
					func_74(iParam0, 11);
					func_77(iParam0, iParam3);
					iParam0->f_5 = 1145423923;
					iParam0->f_11 = { -408.7124f, 154.0742f, 40.84526f };
					break;
				case 2:
					func_74(iParam0, 1);
					func_74(iParam0, 2);
					func_74(iParam0, 3);
					func_74(iParam0, 4);
					func_74(iParam0, 5);
					func_74(iParam0, 6);
					func_74(iParam0, 9);
					func_74(iParam0, 10);
					func_74(iParam0, 11);
					func_77(iParam0, iParam3);
					iParam0->f_5 = -1176575305;
					iParam0->f_11 = { -1929.655f, -1348.338f, 105.84f };
					break;
				case 3:
					func_74(iParam0, 0);
					func_74(iParam0, 1);
					func_74(iParam0, 2);
					func_74(iParam0, 9);
					func_74(iParam0, 10);
					func_74(iParam0, 11);
					func_77(iParam0, iParam3);
					iParam0->f_5 = -888961792;
					iParam0->f_11 = { -2003.943f, -2158.135f, 54.2301f };
					break;
				case 4:
					func_74(iParam0, 0);
					func_74(iParam0, 1);
					func_74(iParam0, 2);
					func_74(iParam0, 9);
					func_74(iParam0, 10);
					func_74(iParam0, 11);
					func_77(iParam0, iParam3);
					iParam0->f_5 = -1145898130;
					iParam0->f_11 = { -1272.226f, 97.47642f, 70.53004f };
					break;
				case 5:
					func_74(iParam0, 1);
					func_74(iParam0, 2);
					func_74(iParam0, 3);
					func_74(iParam0, 4);
					func_74(iParam0, 7);
					func_74(iParam0, 8);
					func_74(iParam0, 9);
					func_74(iParam0, 10);
					func_74(iParam0, 11);
					func_77(iParam0, iParam3);
					iParam0->f_5 = -264936334;
					iParam0->f_11 = { -2350.861f, -359.485f, 143.7474f };
					break;
				case 6:
					func_74(iParam0, 1);
					func_74(iParam0, 2);
					func_74(iParam0, 3);
					func_74(iParam0, 6);
					func_74(iParam0, 7);
					func_74(iParam0, 9);
					func_74(iParam0, 10);
					func_74(iParam0, 11);
					func_77(iParam0, iParam3);
					iParam0->f_5 = -562839313;
					iParam0->f_11 = { -1736.757f, 306.2781f, 108.1355f };
					break;
				case 7:
					func_74(iParam0, 1);
					func_74(iParam0, 2);
					func_74(iParam0, 4);
					func_74(iParam0, 5);
					func_74(iParam0, 6);
					func_74(iParam0, 9);
					func_74(iParam0, 10);
					func_74(iParam0, 11);
					func_77(iParam0, iParam3);
					iParam0->f_5 = -819926700;
					iParam0->f_11 = { -4964.499f, -3399.889f, 7.97322f };
					break;
				case 8:
					func_74(iParam0, 0);
					func_74(iParam0, 1);
					func_74(iParam0, 2);
					func_74(iParam0, 9);
					func_74(iParam0, 10);
					func_74(iParam0, 11);
					func_77(iParam0, iParam3);
					iParam0->f_5 = -100890882;
					iParam0->f_11 = { -2192.805f, -2778.977f, 69.01174f };
					break;
				case 9:
					func_74(iParam0, 1);
					func_74(iParam0, 2);
					func_74(iParam0, 5);
					func_74(iParam0, 9);
					func_74(iParam0, 10);
					func_74(iParam0, 11);
					func_77(iParam0, iParam3);
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
			func_72(iParam0);
			switch (iParam2)
			{
				case 0:
					func_73(iParam0);
					iParam0->f_5 = -1562903685;
					iParam0->f_11 = { 1452.25f, -1695.116f, 64.9668f };
					break;
				case 1:
					func_73(iParam0);
					iParam0->f_5 = 442262250;
					iParam0->f_11 = { 1163.55f, -324.0086f, 97.10712f };
					break;
				case 2:
					func_73(iParam0);
					iParam0->f_5 = 2113001754;
					iParam0->f_11 = { 2682.104f, 858.447f, 85.90118f };
					break;
				case 3:
					func_73(iParam0);
					iParam0->f_5 = 222101843;
					iParam0->f_11 = { 1311.333f, 1183.934f, 151.5859f };
					break;
				case 4:
					func_73(iParam0);
					iParam0->f_5 = 862535295;
					iParam0->f_11 = { 40.99253f, 1813.064f, 189.5056f };
					break;
				case 5:
					func_73(iParam0);
					iParam0->f_5 = 267494763;
					iParam0->f_11 = { 109.9411f, 1282.256f, 176.292f };
					break;
				case 6:
					func_73(iParam0);
					iParam0->f_5 = 492498900;
					iParam0->f_11 = { -1450.859f, 1686.266f, 255.2526f };
					break;
				case 7:
					func_73(iParam0);
					iParam0->f_5 = -735417347;
					iParam0->f_11 = { 66.91456f, -445.5748f, 72.15018f };
					break;
				case 8:
					func_73(iParam0);
					iParam0->f_5 = 2000289900;
					iParam0->f_11 = { -1698.036f, 380.6171f, 106.0826f };
					break;
				case 9:
					func_73(iParam0);
					iParam0->f_5 = 1820563970;
					iParam0->f_11 = { -2016.359f, -909.5917f, 84.91344f };
					break;
				case 10:
					func_73(iParam0);
					iParam0->f_5 = 1501808210;
					iParam0->f_11 = { -1362.091f, -1267.624f, 82.41972f };
					break;
				case 11:
					func_73(iParam0);
					iParam0->f_5 = -1103422576;
					iParam0->f_11 = { -2449.051f, -1457.942f, 148.705f };
					break;
				case 12:
					func_73(iParam0);
					iParam0->f_5 = -375108461;
					iParam0->f_11 = { -1559.339f, -1930.728f, 50.99157f };
					break;
				case 13:
					func_73(iParam0);
					iParam0->f_5 = 1074344160;
					iParam0->f_11 = { -1764.444f, -2717.768f, 62.81413f };
					break;
				case 14:
					func_73(iParam0);
					iParam0->f_5 = 1375567406;
					iParam0->f_11 = { -2190.544f, -2200.288f, 64.42333f };
					break;
				case 15:
					func_73(iParam0);
					iParam0->f_5 = 1695022182;
					iParam0->f_11 = { -2803.26f, -3142.291f, 5.88098f };
					break;
				case 16:
					func_73(iParam0);
					iParam0->f_5 = 1773241795;
					iParam0->f_11 = { -3175.168f, -2402.267f, 22.72451f };
					break;
				case 17:
					func_73(iParam0);
					iParam0->f_5 = 1650499101;
					iParam0->f_11 = { -4220.611f, -2690.138f, 0.65931f };
					break;
				case 18:
					func_73(iParam0);
					iParam0->f_5 = 149116609;
					iParam0->f_11 = { -4372.619f, -3274.055f, 20.26154f };
					break;
				case 19:
					func_73(iParam0);
					iParam0->f_5 = 1486166046;
					iParam0->f_11 = { -5456.922f, -3562.744f, -21.1142f };
					break;
				case 20:
					func_73(iParam0);
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
			func_72(iParam0);
			func_76(iParam0, 2);
			switch (iParam2)
			{
				case 0:
					func_73(iParam0);
					iParam0->f_5 = -1657923088;
					iParam0->f_11 = { 959.0613f, 383.9384f, 111.0409f };
					break;
				case 1:
					func_73(iParam0);
					iParam0->f_5 = -1268232386;
					iParam0->f_11 = { 1465.514f, -821.0334f, 50.2372f };
					break;
				case 2:
					func_73(iParam0);
					iParam0->f_5 = 1926851120;
					iParam0->f_11 = { -1082.332f, -696.7548f, 70.5432f };
					break;
				case 3:
					func_73(iParam0);
					iParam0->f_5 = -66052340;
					iParam0->f_11 = { -1462.952f, -1929.859f, 48.4187f };
					break;
				case 4:
					func_73(iParam0);
					iParam0->f_5 = 1738334804;
					iParam0->f_11 = { -4988.295f, -3902.346f, -0.03286f };
					break;
				case 5:
					func_73(iParam0);
					iParam0->f_5 = 1009780912;
					iParam0->f_11 = { -2770.473f, -2936.506f, 64.84297f };
					break;
				case 6:
					func_73(iParam0);
					iParam0->f_5 = -1560771476;
					iParam0->f_11 = { -1209.61f, -1812.165f, 61.23543f };
					break;
				case 7:
					func_73(iParam0);
					iParam0->f_5 = 453813335;
					iParam0->f_11 = { -1706.993f, -580.9286f, 149.93f };
					break;
				case 8:
					func_73(iParam0);
					iParam0->f_5 = 786924542;
					iParam0->f_11 = { 803.0057f, -584.7925f, 79.32288f };
					break;
				case 9:
					func_73(iParam0);
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
					func_78(iParam0, iParam3);
					iParam0->f_5 = 1323108111;
					iParam0->f_11 = { -1159.115f, 397.0877f, 60.4953f };
					break;
				case 1:
					func_78(iParam0, iParam3);
					iParam0->f_5 = -1505479200;
					iParam0->f_11 = { -1278.359f, 291.4224f, 76.6652f };
					break;
				case 2:
					func_78(iParam0, iParam3);
					iParam0->f_5 = -1283075997;
					iParam0->f_11 = { -1371.28f, 283.4114f, 86.0114f };
					break;
				case 3:
					func_78(iParam0, iParam3);
					iParam0->f_5 = -2100531475;
					iParam0->f_11 = { -1117.687f, 406.6783f, 55.3681f };
					break;
				case 4:
					func_78(iParam0, iParam3);
					iParam0->f_5 = 269617530;
					iParam0->f_11 = { -1288.323f, 148.5012f, 71.7864f };
					break;
				case 5:
					func_78(iParam0, iParam3);
					iParam0->f_5 = 1592829750;
					iParam0->f_11 = { -1648.447f, -114.858f, 170.0504f };
					break;
				case 6:
					func_78(iParam0, iParam3);
					iParam0->f_5 = 1817985549;
					iParam0->f_11 = { -1081.189f, -405.0457f, 97.0153f };
					break;
				case 7:
					func_78(iParam0, iParam3);
					iParam0->f_5 = 1945424739;
					iParam0->f_11 = { 206.8413f, -170.3653f, 130.5284f };
					break;
				case 8:
					func_78(iParam0, iParam3);
					iParam0->f_5 = 1787314318;
					iParam0->f_11 = { -621.2297f, 186.8452f, 41.2741f };
					break;
				case 9:
					func_78(iParam0, iParam3);
					iParam0->f_5 = 542354442;
					iParam0->f_11 = { 44.3784f, 388.2357f, 129.8287f };
					break;
				case 10:
					func_78(iParam0, iParam3);
					iParam0->f_5 = 1510776727;
					iParam0->f_11 = { 752.9834f, -58.1133f, 157.6479f };
					break;
				case 11:
					func_78(iParam0, iParam3);
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
			func_72(iParam0);
			switch (iParam2)
			{
				case 0:
					func_73(iParam0);
					iParam0->f_5 = -377638420;
					iParam0->f_11 = { -2058.13f, -2493.143f, 63.51377f };
					break;
				case 1:
					func_73(iParam0);
					iParam0->f_5 = 1308799438;
					iParam0->f_11 = { -1541.353f, -2334.611f, 43.10187f };
					break;
				case 2:
					func_73(iParam0);
					iParam0->f_5 = -1030922940;
					iParam0->f_11 = { -3456.39f, -2262.339f, 0.01624f };
					break;
				case 3:
					func_73(iParam0);
					iParam0->f_5 = 1750043358;
					iParam0->f_11 = { -3703.712f, -3594.224f, 45.18983f };
					break;
				case 4:
					func_73(iParam0);
					iParam0->f_5 = -1330609910;
					iParam0->f_11 = { -1581.551f, -1656.278f, 78.51012f };
					break;
				case 5:
					func_73(iParam0);
					iParam0->f_5 = 223942444;
					iParam0->f_11 = { -1236.292f, -1118.55f, 68.58572f };
					break;
				case 6:
					func_73(iParam0);
					iParam0->f_5 = 1067547121;
					iParam0->f_11 = { -1264.125f, -773.2117f, 91.83559f };
					break;
				case 7:
					func_73(iParam0);
					iParam0->f_5 = -450732096;
					iParam0->f_11 = { -1414.607f, -234.2123f, 99.22668f };
					break;
				case 8:
					func_73(iParam0);
					iParam0->f_5 = -1701940764;
					iParam0->f_11 = { -1721.402f, 553.6f, 112.524f };
					break;
				case 9:
					func_73(iParam0);
					iParam0->f_5 = 1584258975;
					iParam0->f_11 = { -484.7991f, -70.36918f, 42.94242f };
					break;
				case 10:
					func_73(iParam0);
					iParam0->f_5 = -98183174;
					iParam0->f_11 = { -458.5839f, -346.5686f, 80.66556f };
					break;
				case 11:
					func_73(iParam0);
					iParam0->f_5 = -90261849;
					iParam0->f_11 = { 1089.583f, 23.75282f, 88.22131f };
					break;
				case 12:
					func_73(iParam0);
					iParam0->f_5 = 754522971;
					iParam0->f_11 = { 1000.131f, 417.5909f, 107.9082f };
					break;
				case 13:
					func_73(iParam0);
					iParam0->f_5 = 974542513;
					iParam0->f_11 = { 713.7332f, 23.52884f, 152.0797f };
					break;
				case 14:
					func_73(iParam0);
					iParam0->f_5 = -790885273;
					iParam0->f_11 = { 63.77304f, 1023.487f, 201.9749f };
					break;
				case 15:
					func_73(iParam0);
					iParam0->f_5 = -1447045452;
					iParam0->f_11 = { 366.667f, 1408.665f, 175.0605f };
					break;
				case 16:
					func_73(iParam0);
					iParam0->f_5 = -586115209;
					iParam0->f_11 = { 1785.934f, 1522.009f, 155.1442f };
					break;
				case 17:
					func_73(iParam0);
					iParam0->f_5 = 224941020;
					iParam0->f_11 = { 1279.07f, 1164.678f, 149.2508f };
					break;
				case 18:
					func_73(iParam0);
					iParam0->f_5 = -1179654578;
					iParam0->f_11 = { 2106.456f, 207.6169f, 72.68985f };
					break;
				case 19:
					func_73(iParam0);
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
			func_72(iParam0);
			iParam0->f_10 = 60f;
			switch (iParam2)
			{
				case 0:
					func_73(iParam0);
					iParam0->f_5 = 974582605;
					iParam0->f_11 = { 1562.246f, -2047.412f, 47.3446f };
					break;
				case 1:
					func_73(iParam0);
					iParam0->f_5 = -964359125;
					iParam0->f_11 = { 1379.948f, -1696.249f, 66.86113f };
					break;
				case 2:
					func_73(iParam0);
					iParam0->f_5 = -700339292;
					iParam0->f_11 = { 1621.706f, -1650.367f, 56.03105f };
					break;
				case 3:
					func_73(iParam0);
					iParam0->f_5 = -470300912;
					iParam0->f_11 = { 1504.868f, -1470.025f, 71.38271f };
					break;
				case 4:
					func_73(iParam0);
					iParam0->f_5 = -241343909;
					iParam0->f_11 = { 1082.685f, -1265.978f, 67.5664f };
					break;
				case 5:
					func_73(iParam0);
					iParam0->f_5 = 1944053474;
					iParam0->f_11 = { 682.6295f, -992.2614f, 52.4207f };
					break;
				case 6:
					func_73(iParam0);
					iParam0->f_5 = -2120646059;
					iParam0->f_11 = { 707.7728f, -885.6594f, 48.26217f };
					break;
				case 7:
					func_73(iParam0);
					iParam0->f_5 = -1656440405;
					iParam0->f_11 = { 879.6264f, -537.9133f, 88.03556f };
					break;
				case 8:
					func_73(iParam0);
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
			func_72(iParam0);
			func_76(iParam0, 1);
			func_76(iParam0, 4);
			func_76(iParam0, 8);
			func_76(iParam0, 16);
			switch (iParam2)
			{
				case 0:
					func_73(iParam0);
					iParam0->f_5 = -1623035253;
					iParam0->f_11 = { func_80(func_79(iParam4)) };
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
					func_81(iParam0, iParam3);
					iParam0->f_5 = -1957221189;
					iParam0->f_11 = { -347.4531f, 740.8643f, 116.4549f };
					break;
				case 1:
					func_81(iParam0, iParam3);
					iParam0->f_5 = 871956008;
					iParam0->f_11 = { -360.6497f, 824.0327f, 115.4768f };
					break;
				case 2:
					func_81(iParam0, iParam3);
					iParam0->f_5 = -718829908;
					iParam0->f_11 = { 2957.225f, 524.4706f, 43.66619f };
					break;
				case 3:
					func_81(iParam0, iParam3);
					iParam0->f_5 = -478076065;
					iParam0->f_11 = { 2975.885f, 537.2245f, 42.42131f };
					break;
				case 4:
					func_81(iParam0, iParam3);
					iParam0->f_5 = 158131441;
					iParam0->f_11 = { 1444.633f, -1417.982f, 78.22246f };
					break;
				case 5:
					func_81(iParam0, iParam3);
					iParam0->f_5 = 575051428;
					iParam0->f_11 = { 1394.169f, -1422.854f, 78.97552f };
					break;
				case 6:
					func_81(iParam0, iParam3);
					iParam0->f_5 = -861587350;
					iParam0->f_11 = { 2996.145f, 1351.808f, 42.95977f };
					break;
				case 7:
					func_81(iParam0, iParam3);
					iParam0->f_5 = -616671844;
					iParam0->f_11 = { 2915.743f, 1231.952f, 43.5792f };
					break;
				case 8:
					func_81(iParam0, iParam3);
					iParam0->f_5 = -828875274;
					iParam0->f_11 = { -833.5609f, -1543.917f, 59.6274f };
					break;
				case 9:
					func_81(iParam0, iParam3);
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
			func_72(iParam0);
			switch (iParam2)
			{
				case 0:
					func_73(iParam0);
					iParam0->f_5 = 2136361638;
					iParam0->f_11 = { 2208.668f, -350.9536f, 41.488f };
					break;
				case 1:
					func_73(iParam0);
					iParam0->f_5 = 1948005426;
					iParam0->f_11 = { 1733.923f, -727.6727f, 40.8996f };
					break;
				case 2:
					func_73(iParam0);
					iParam0->f_5 = 462368629;
					iParam0->f_11 = { -2028.171f, 421.7315f, 123.1801f };
					break;
				case 3:
					func_73(iParam0);
					iParam0->f_5 = -172629291;
					iParam0->f_11 = { 238.8146f, 1242.903f, 185.8171f };
					break;
				case 4:
					func_73(iParam0);
					iParam0->f_5 = 1063777848;
					iParam0->f_11 = { 646.006f, 1304.928f, 193.4366f };
					break;
				case 5:
					func_73(iParam0);
					iParam0->f_5 = -267241827;
					iParam0->f_11 = { 438.9673f, 831.1111f, 145.7085f };
					break;
				case 6:
					func_73(iParam0);
					iParam0->f_5 = -1183266453;
					iParam0->f_11 = { -545.762f, 393.6189f, 87.0076f };
					break;
				case 7:
					func_73(iParam0);
					iParam0->f_5 = -877826604;
					iParam0->f_11 = { 1017.37f, 1062.322f, 158.965f };
					break;
				case 8:
					func_73(iParam0);
					iParam0->f_5 = 1527533302;
					iParam0->f_11 = { 2226.213f, -248.6621f, 42.5431f };
					break;
				case 9:
					func_73(iParam0);
					iParam0->f_5 = -865586768;
					iParam0->f_11 = { 2566.893f, -71.0977f, 49.3333f };
					break;
				case 10:
					func_73(iParam0);
					iParam0->f_5 = 294379466;
					iParam0->f_11 = { 1389.072f, -2196.696f, 48.3307f };
					break;
				case 11:
					func_73(iParam0);
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
			iVar17 = func_82(iParam1);
			if (iVar17 == -1)
			{
				return;
			}
			if ((iParam1 == 22 || iParam1 == 23) || iParam1 == 21)
			{
				iParam0->f_7 = 1;
			}
			*iParam0 = func_83(iVar17);
			iParam0->f_1 = 0;
			iParam0->f_6 = 2;
			func_76(iParam0, 32);
			if (iParam2 != -1)
			{
				iParam0->f_9 = func_85(func_84(iVar17), iParam2);
				iParam0->f_15 = func_86(func_84(iVar17), iParam2);
				iParam0->f_5 = func_87(iVar17, iParam2);
				iParam0->f_11 = { func_88(iVar17, iParam2) };
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
			Var0.f_1 = func_90(iParam0, &(Global_1070355->f_634), func_89(iParam1));
			break;
		case 3:
			Var0.f_1 = func_90(iParam0, &(Global_1070355->f_634.f_602), func_89(iParam1));
			break;
		case 4:
			Var0.f_1 = func_90(iParam0, &(Global_1070355->f_634.f_2104), func_89(iParam1));
			break;
		case 5:
			Var0.f_1 = func_90(iParam0, &(Global_1070355->f_634.f_12606), func_89(iParam1));
			break;
		case 6:
			Var0.f_1 = func_90(iParam0, &(Global_1070355->f_634.f_12908), func_89(iParam1));
			break;
		case 7:
			Var0.f_1 = func_90(iParam0, &(Global_1070355->f_634.f_15910), func_89(iParam1));
			break;
		case 8:
			Var0.f_1 = func_90(iParam0, &(Global_1070355->f_634.f_15981), func_89(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_91();
	}
	return Var0;
}

void func_33()
{
	func_92();
	func_93();
}

void func_34()
{
}

void func_35()
{
}

void func_36()
{
	int iVar0;

	iVar0 = 11;
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(iVar0);
}

void func_37()
{
	int iVar0;

	iVar0 = 1;
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(iVar0);
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
	if (Param0.f_1 >= func_89(Param0))
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

	iVar0 = (Global_1184672->f_231.f_1066[Local_607.f_12 /*17*/])->f_5;
	Var1.f_10 = 1106247680;
	func_31(&Var1, Local_607.f_1, Local_607.f_2, Local_607.f_3, iVar0);
	if (!func_95(&Var1, 1))
	{
		func_96(1);
		return;
	}
	Local_13.f_6 = func_79(_NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(iVar0)));
	func_97(256);
	if (func_98(Local_13.f_6))
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
	func_31(&Var0, Local_607.f_1, Local_607.f_2, -1, 255);
	if (func_95(&Var0, 1))
	{
		func_96(2);
		return;
	}
	if (func_100(Var0, &bVar17))
	{
		MISC::CLEAR_AREA(Local_607.f_15, Var0.f_10, 2442122);
		func_96(2);
	}
	else if (bVar17)
	{
		func_99(3);
		func_96(6);
	}
	if (!func_101(Local_13.f_3.f_2))
	{
		func_102(&(Local_13.f_3.f_2));
	}
	else if (func_103(Local_13.f_3.f_2) > 45000)
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
	if (func_114() || Local_13.f_2 != 0)
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
		if (func_65(32) && func_79(PLAYER::PLAYER_ID()) == Local_13.f_6)
		{
			func_66(Local_13.f_6);
			func_117(32);
		}
	}
	else if (!func_65(32))
	{
		if (func_79(PLAYER::PLAYER_ID()) == Local_13.f_6)
		{
			func_118(Local_13.f_6, 1, 1);
			func_119(32);
		}
	}
	else if (func_79(PLAYER::PLAYER_ID()) != Local_13.f_6)
	{
		func_66(Local_13.f_6);
		func_117(32);
	}
}

void func_50()
{
}

void func_51()
{
	if (Local_13 == 6)
	{
		func_120(6);
	}
	else if (Local_13 > 0)
	{
		func_49();
		func_120(1);
	}
}

void func_52()
{
	if (Local_13 == 6)
	{
		func_120(6);
	}
	else if (Local_13 > 1)
	{
		func_120(2);
	}
}

void func_53()
{
	bool bVar0;
	int iVar1;

	if (!func_104(1, 255))
	{
		bVar0 = true;
		if (!func_121())
		{
			bVar0 = false;
		}
		if (!func_122())
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			func_123(1);
		}
		else
		{
			iVar1 = Global_1901929->f_230.f_63;
			if (!func_101(Local_607.f_11))
			{
				func_102(&(Local_607.f_11));
			}
			if (func_103(Local_607.f_11) >= iVar1)
			{
				func_120(6);
			}
		}
	}
	else if (Local_13 > 2)
	{
		func_124(&(Local_607.f_11));
		func_125();
		func_120(3);
	}
}

void func_54()
{
	int iVar0;

	if (!func_104(2, 255))
	{
		if (func_126())
		{
			func_123(2);
		}
		else
		{
			iVar0 = Global_1901929->f_230.f_63;
			if (!func_101(Local_607.f_11))
			{
				func_102(&(Local_607.f_11));
			}
			if (func_127(Local_607.f_11) >= iVar0)
			{
				func_120(6);
			}
		}
	}
	else if (Local_13 > 3)
	{
		func_124(&(Local_607.f_11));
		func_128();
		func_129();
		func_130();
		func_131();
		func_120(4);
	}
}

void func_55()
{
	if (Local_13 >= 5)
	{
		func_132();
		func_120(5);
		return;
	}
	func_133();
	func_134();
	func_135();
	func_136();
	func_137();
	func_138();
}

void func_56()
{
	if (!func_104(4, 255))
	{
		if (func_139())
		{
			func_140();
			func_63(Local_607.f_12, 4);
			func_123(4);
		}
	}
	else if (Local_13 > 5)
	{
		func_120(6);
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
		while (iVar1 < 11)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_34[iVar1])))
			{
				iVar0 = NETWORK::NET_TO_PED(&(Local_13.f_34[iVar1]));
				func_141(iVar1);
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
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_58())
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			iVar2 = 0;
			while (iVar2 < 1)
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_46[iVar1 /*2*/][iVar2]))
				{
					iVar0 = NETWORK::NET_TO_OBJ(Local_13.f_46[iVar1 /*2*/][iVar2]);
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
					{
						if (func_142(iVar2))
						{
							OBJECT::DELETE_OBJECT(&iVar0);
						}
						else
						{
							ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iVar0);
						}
					}
				}
				iVar2++;
			}
			iVar1++;
		}
	}
}

void func_62()
{
	func_143(&(Local_607.f_264.f_13));
	if (VOLUME::_0x92A78D0BEDB332A3(Local_607.f_264.f_11))
	{
		VOLUME::_0x43F867EF5C463A53(Local_607.f_264.f_11);
	}
}

void func_63(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (func_144(iParam0, iVar0, iParam1))
	{
		return;
	}
	MISC::SET_BIT((*(*Global_1194410)[iVar0 /*72*/])[iParam0], iParam1);
}

void func_64()
{
	int iVar0;
	bool bVar1;

	if (!func_65(1))
	{
		return;
	}
	if (func_65(4))
	{
		return;
	}
	if (!func_65(2))
	{
		iVar0 = -1;
	}
	else if (!func_65(8))
	{
		iVar0 = 2;
	}
	else if (func_65(16))
	{
		iVar0 = 0;
		bVar1 = true;
	}
	else
	{
		iVar0 = 1;
		bVar1 = true;
	}
	func_145(Local_607.f_9, iVar0, 0);
	func_119(4);
	if (bVar1)
	{
		func_146(Local_607.f_1, Local_607.f_2);
	}
}

bool func_65(int iParam0)
{
	return func_147(Local_607.f_7, iParam0);
}

void func_66(int iParam0)
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

void func_67()
{
}

void func_68(var uParam0, struct<6> Param1, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17)
{
	uParam0->f_9 = 2;
	*uParam0 = { func_32(Param1.f_5, 8) };
	uParam0->f_2 = 0;
	uParam0->f_4 = -1;
}

int func_69(var uParam0)
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

struct<15> func_70(int iParam0)
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

void func_71(int iParam0, int iParam1)
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
			func_73(iParam0);
			func_72(iParam0);
			break;
	}
}

void func_72(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (iParam0->f_2 - 1))
	{
		func_75(iParam0, iVar0);
		iVar0++;
	}
}

void func_73(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (iParam0->f_1 - 1))
	{
		func_74(iParam0, iVar0);
		iVar0++;
	}
}

void func_74(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(iParam0->f_3), iParam1);
}

void func_75(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(iParam0->f_4), iParam1);
}

void func_76(int iParam0, int iParam1)
{
	func_153(&(iParam0->f_16), iParam1);
}

void func_77(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_75(iParam0, 0);
			break;
		case 1:
		case 2:
			func_75(iParam0, 1);
			func_75(iParam0, 2);
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			func_75(iParam0, 0);
			func_75(iParam0, 2);
			break;
		case 8:
			func_75(iParam0, 1);
			break;
		case 9:
		case 10:
		case 11:
			func_75(iParam0, 1);
			break;
		default:
			func_72(iParam0);
			break;
	}
}

void func_78(int iParam0, int iParam1)
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
			func_73(iParam0);
			func_72(iParam0);
			break;
	}
}

int func_79(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return ((*Global_1126840)[iVar0 /*83*/])->f_38.f_3;
	}
	return -1;
}

Vector3 func_80(int iParam0)
{
	if (!func_148(iParam0))
	{
		return 0f, 0f, 0f;
	}
	return ((*Global_1123778)[iParam0 /*27*/])->f_20;
}

void func_81(int iParam0, int iParam1)
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
			func_72(iParam0);
			break;
	}
	func_73(iParam0);
}

var func_82(int iParam0)
{
	return &(Global_1244208->f_2073[iParam0]);
}

int func_83(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return ((*Global_1232796)[iParam0 /*5*/])->f_3;
}

int func_84(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1232796[iParam0 /*5*/];
}

var func_85(var uParam0, int iParam1)
{
	var uVar0;
	struct<5> Var1;

	if (func_161(&Var1, uParam0) && func_162(&Var1, iParam1))
	{
		func_163(Var1, 1099008783, &uVar0, 0);
	}
	return uVar0;
}

int func_86(var uParam0, int iParam1)
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

int func_87(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_164(iParam0, iParam1);
	return &(Global_1232796->f_401[iVar0 /*7*/]);
}

Vector3 func_88(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = func_164(iParam0, iParam1);
	return (Global_1232796->f_401[iVar0 /*7*/])->f_3;
}

int func_89(int iParam0)
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

int func_90(int iParam0, var uParam1, int iParam2)
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

struct<2> func_91()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

void func_92()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = 0;
		while (iVar0 < 11)
		{
			(Local_62[iVar1 /*17*/])->f_2.f_2[iVar0] = 9000f;
			iVar0++;
		}
		iVar1++;
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
	return func_165(uParam0->f_16, iParam1);
}

void func_96(int iParam0)
{
	if (Local_13 != iParam0)
	{
		Local_13 = iParam0;
	}
}

void func_97(int iParam0)
{
	if (!func_105(iParam0))
	{
		func_166(&(Local_13.f_1), iParam0);
	}
}

bool func_98(int iParam0)
{
	if (!func_148(iParam0))
	{
		return false;
	}
	return (func_167(iParam0) && ((*Global_1123778)[iParam0 /*27*/])->f_18.f_1 != 0);
}

void func_99(int iParam0)
{
	if (Local_13.f_2 != iParam0)
	{
		Local_13.f_2 = iParam0;
	}
}

int func_100(struct<17> Param0, var uParam17)
{
	int iVar0;
	var uVar1;

	if (VOLUME::_0xF6A8A652A6B186CD(Local_13.f_3.f_1))
	{
		return 1;
	}
	if (func_168(Local_607.f_15))
	{
		*uParam17 = 1;
		return 0;
	}
	if (!VOLUME::_0xA4A4359320345B34(Local_13.f_3))
	{
		if (VOLUME::_0x397769175A7DBB30(Local_607.f_15, Param0.f_10, 0, 0, 0))
		{
			VOLUME::_0xFA15C9A320E707B0();
			*uParam17 = 1;
			return 0;
		}
		func_169(&uVar1, Param0);
		Local_13.f_3 = VOLUME::_0x183C0B6CFEFFCAE4(&uVar1);
		func_123(128);
	}
	else if (!func_104(128, 255))
	{
		Local_13.f_3.f_1 = func_170(Param0);
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
	return func_147(&(Local_62[iParam1 /*17*/]), iParam0);
}

bool func_105(int iParam0)
{
	return func_147(Local_13.f_1, iParam0);
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

	if (!func_171(&bVar0))
	{
		if (bVar0)
		{
			func_172();
		}
		return 0;
	}
	if (!func_173(&bVar0))
	{
		if (bVar0)
		{
			func_172();
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
	if (func_65(iParam0))
	{
		func_176(&(Local_607.f_7), iParam0);
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
	if (!func_65(iParam0))
	{
		func_166(&(Local_607.f_7), iParam0);
	}
}

void func_120(int iParam0)
{
	if (Local_607.f_8 != iParam0)
	{
		Local_607.f_8 = iParam0;
	}
}

int func_121()
{
	return 1;
}

bool func_122()
{
	bool bVar0;

	bVar0 = false;
	if (!func_179())
	{
		bVar0 = true;
	}
	if (!func_180())
	{
		bVar0 = true;
	}
	return !bVar0;
}

void func_123(int iParam0)
{
	if (!func_104(iParam0, 255))
	{
		func_166(Local_62[NETWORK::PARTICIPANT_ID_TO_INT() /*17*/], iParam0);
	}
}

void func_124(var uParam0)
{
	*uParam0 = 0;
}

void func_125()
{
}

int func_126()
{
	return 1;
}

int func_127(int iParam0)
{
	return (iParam0 - Global_1273882->f_21) * 1000;
}

void func_128()
{
	if (!func_65(1))
	{
		func_181(Local_607.f_9);
		func_119(1);
	}
}

void func_129()
{
	func_182();
	func_183();
}

void func_130()
{
}

void func_131()
{
}

void func_132()
{
}

void func_133()
{
	float fVar0;

	if (func_168(Local_607.f_15))
	{
		return;
	}
	if (func_184())
	{
		return;
	}
	if (func_185(Local_607.f_1, 600))
	{
		fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false), Local_607.f_15);
		if (fVar0 < 200f)
		{
			func_123(4096);
		}
		else if (fVar0 < 400f)
		{
			func_186(4096);
			func_123(2048);
		}
		else
		{
			func_186(4096);
			func_186(2048);
		}
	}
}

void func_134()
{
	func_187();
	func_188();
	func_189();
	func_190();
}

void func_135()
{
	if (func_191())
	{
		func_123(8);
	}
	else
	{
		func_186(8);
	}
}

void func_136()
{
}

void func_137()
{
	if (!func_104(8, 255))
	{
		func_123(16);
	}
	else
	{
		func_186(16);
	}
}

void func_138()
{
	int iVar0;

	Local_607.f_6 = -1;
	Local_607.f_5 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			Local_607.f_5 = (Local_607.f_5 || Local_62[iVar0 /*17*/]) // PointerArith;
			Local_607.f_6 = (Local_607.f_6 && Local_62[iVar0 /*17*/]) // PointerArith;
		}
		iVar0++;
	}
}

int func_139()
{
	return 1;
}

void func_140()
{
}

void func_141(int iParam0)
{
	if (MAP::DOES_BLIP_EXIST((Local_607.f_82.f_7[iParam0 /*11*/])->f_1))
	{
		MAP::REMOVE_BLIP(&((Local_607.f_82.f_7[iParam0 /*11*/])->f_1));
	}
}

bool func_142(int iParam0)
{
	return MISC::IS_BIT_SET(Local_607.f_248, iParam0);
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

	uVar0 = func_193(func_192(Param0));
	iVar1 = func_194(Param0);
	vVar2.f_1 = iParam3;
	vVar2.x = 0;
	vVar2.f_2 = 0;
	if (func_28() == 0)
	{
		vVar2.x = Global_265331->f_124445.f_70.f_17;
		func_195(Param0, &vVar2);
	}
	STATS::_0xD5910ECF81A2278C(uVar0, iVar1, iParam2, &vVar2);
}

void func_146(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_196(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	func_197(iVar0);
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

	iVar0 = func_198(iParam1);
	iVar1 = ((&Global_1184672->f_3[iParam1] + iVar0) - 1);
	if (&Global_1184672->f_23[iParam1] != 0)
	{
		iVar1 = ((iVar0 + func_199(iParam1)) - 1);
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
	func_74(iParam0, 0);
	func_74(iParam0, 1);
	func_74(iParam0, 3);
	func_72(iParam0);
}

void func_152(int iParam0)
{
	func_73(iParam0);
	func_200(iParam0, 0, 3);
}

void func_153(var uParam0, int iParam1)
{
	func_201(uParam0, iParam1);
}

void func_154(int iParam0)
{
	func_74(iParam0, 0);
	func_75(iParam0, 0);
	func_75(iParam0, 1);
	func_75(iParam0, 2);
}

void func_155(int iParam0)
{
	func_74(iParam0, 1);
	func_72(iParam0);
}

void func_156(int iParam0)
{
	func_74(iParam0, 2);
	func_75(iParam0, 3);
}

void func_157(int iParam0)
{
	func_74(iParam0, 3);
	func_75(iParam0, 4);
}

void func_158(int iParam0)
{
	func_75(iParam0, 0);
	func_75(iParam0, 1);
}

void func_159(int iParam0)
{
	func_75(iParam0, 2);
	func_75(iParam0, 3);
}

void func_160(int iParam0)
{
	func_75(iParam0, 4);
	func_75(iParam0, 5);
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

bool func_165(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_166(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_167(int iParam0)
{
	int iVar0;

	if (!func_148(iParam0))
	{
		return false;
	}
	iVar0 = func_202(iParam0);
	return (iVar0 != 0 && iVar0 != 3);
}

int func_168(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_169(var uParam0, struct<12> Param1, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17)
{
	*uParam0 = { Param1.f_11 };
	uParam0->f_4 = Param1.f_10;
	uParam0->f_6 = -653740250;
	uParam0->f_7 = Param1.f_5;
}

var func_170(struct<17> Param0)
{
	var uVar0;

	func_169(&uVar0, Param0);
	return VOLUME::_0x77A6E4AD0C496F81(&uVar0);
}

int func_171(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(11))
	{
		*uParam0 = 1;
		return 0;
	}
	bVar0 = false;
	bVar1 = false;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 11)
	{
		if (func_203(iVar2, 4))
		{
		}
		else if (!func_204(iVar2, uParam0, &bVar1))
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

void func_172()
{
	func_99(2);
}

int func_173(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;
	int iVar11;

	iVar0 = 1;
	if (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(iVar0))
	{
		*bParam0 = 1;
		return 0;
	}
	bVar4 = false;
	vVar5 = { 0f, 0f, 0f };
	vVar8 = { Local_607.f_15 };
	iVar11 = 0;
	iVar1 = 0;
	while (iVar1 < 1)
	{
		iVar2 = 0;
		while (iVar2 < 1)
		{
			iVar3 = func_205(iVar1, iVar2);
			if (iVar3 != 0 || func_206(iVar2))
			{
				if (MISC::IS_BIT_SET((Local_607.f_248.f_1[iVar1 /*14*/])->f_2, iVar2))
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_46[iVar1 /*2*/][iVar2]))
				{
					vVar5 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar8, 0f, func_207(iVar1, iVar2)) };
					if (func_206(iVar2))
					{
						iVar11 = PED::_0x9641A9A20310F6B8(((Local_607.f_248.f_1[iVar1 /*14*/])->f_4[iVar2 /*9*/])->f_2, vVar5, 0f, 0f, 0f, 1, 0, 0);
						if (!ENTITY::DOES_ENTITY_EXIST(iVar11))
						{
							*bParam0 = 1;
						}
						else
						{
							(*Local_13.f_46[iVar1 /*2*/])[iVar2] = NETWORK::OBJ_TO_NET(iVar11);
							if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_46[iVar1 /*2*/][iVar2]))
							{
								*bParam0 = 1;
								return 0;
							}
							ENTITY::_0xA91E6CF94404E8C9(iVar11);
							ENTITY::_0x9587913B9E772D29(iVar11, 0);
						}
					}
					else if (!func_208((*Local_13.f_46[iVar1 /*2*/])[iVar2], iVar3, vVar5, 1, 0))
					{
						*bParam0 = 1;
					}
					else
					{
						iVar11 = NETWORK::NET_TO_OBJ(Local_13.f_46[iVar1 /*2*/][iVar2]);
						if (ENTITY::DOES_ENTITY_EXIST(iVar11))
						{
							ENTITY::_0xA91E6CF94404E8C9(iVar11);
							if (func_209(iVar1, iVar2))
							{
								ENTITY::_0x9587913B9E772D29(iVar11, 0);
							}
						}
					}
					return 0;
				}
				else
				{
					iVar11 = NETWORK::NET_TO_OBJ(Local_13.f_46[iVar1 /*2*/][iVar2]);
					if (!ENTITY::DOES_ENTITY_EXIST(iVar11))
					{
						*bParam0 = 1;
						return 0;
					}
					ENTITY::SET_ENTITY_HEADING(iVar11, func_210(iVar1, iVar2));
					MISC::SET_BIT(&((Local_607.f_248.f_1[iVar1 /*14*/])->f_2), iVar2);
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	if (bVar4)
	{
		return 0;
	}
	return 1;
}

bool func_174(int iParam0)
{
	return func_147(Local_607.f_5, iParam0);
}

bool func_175(int iParam0)
{
	return func_147(Local_607.f_6, iParam0);
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
	if (!func_167(iParam0))
	{
		return 0;
	}
	return ((*Global_1123778)[iParam0 /*27*/])->f_18.f_1;
}

void func_178(var uParam0, int iParam1)
{
	func_211(uParam0, iParam1);
}

int func_179()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = false;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (MISC::IS_BIT_SET(Local_607.f_82.f_3, iVar0))
		{
		}
		else
		{
			iVar2 = func_212(iVar0);
			if (iVar2 == 0)
			{
				Jump @129; //curOff = 54
			}
			else
			{
				if (!MISC::IS_BIT_SET(Local_607.f_82.f_4, iVar0))
				{
					STREAMING::REQUEST_MODEL(iVar2, false);
					MISC::SET_BIT(&(Local_607.f_82.f_4), iVar0);
				}
				if (!STREAMING::HAS_MODEL_LOADED(iVar2))
				{
					bVar1 = true;
					Jump @129; //curOff = 110
				}
				else
				{
					MISC::SET_BIT(&(Local_607.f_82.f_3), iVar0);
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

int func_180()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	bVar2 = false;
	iVar3 = 0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			if (MISC::IS_BIT_SET((Local_607.f_248.f_1[iVar0 /*14*/])->f_1, iVar1))
			{
			}
			else
			{
				iVar3 = func_205(iVar0, iVar1);
				if (func_206(iVar1))
				{
					if (((Local_607.f_248.f_1[iVar0 /*14*/])->f_4[iVar1 /*9*/])->f_3 == 0 || !PED::_0x93FFD92F05EC32FD(((Local_607.f_248.f_1[iVar0 /*14*/])->f_4[iVar1 /*9*/])->f_3))
					{
						((Local_607.f_248.f_1[iVar0 /*14*/])->f_4[iVar1 /*9*/])->f_3 = PED::_0x91FE941F9FCFB702(((Local_607.f_248.f_1[iVar0 /*14*/])->f_4[iVar1 /*9*/])->f_2, 0);
						bVar2 = true;
					}
					else if (!PED::_0xB0B2C6D170B0E8E5(((Local_607.f_248.f_1[iVar0 /*14*/])->f_4[iVar1 /*9*/])->f_3))
					{
						bVar2 = true;
					}
					else
					{
						MISC::SET_BIT(&((Local_607.f_248.f_1[iVar0 /*14*/])->f_1), iVar1);
					}
				}
				else if (iVar3 == 0)
				{
					Jump @326; //curOff = 237
				}
				else
				{
					if (!MISC::IS_BIT_SET(&(Local_607.f_248.f_1[iVar0 /*14*/]), iVar1))
					{
						STREAMING::REQUEST_MODEL(iVar3, false);
						MISC::SET_BIT(Local_607.f_248.f_1[iVar0 /*14*/], iVar1);
					}
					if (!STREAMING::HAS_MODEL_LOADED(iVar3))
					{
						bVar2 = true;
						Jump @326; //curOff = 301
					}
					else
					{
						MISC::SET_BIT(&((Local_607.f_248.f_1[iVar0 /*14*/])->f_1), iVar1);
					}
				}
			}
			iVar1++;
		}
		iVar0++;
	}
	if (bVar2)
	{
		return 0;
	}
	return 1;
}

void func_181(struct<2> Param0)
{
	if (func_194(Param0) == 0)
	{
	}
	else if (!STATS::_0x01F4D242765C6B24(func_194(Param0)))
	{
		STATS::_0x99230691875FC218(func_192(Param0), func_194(Param0), Global_36);
	}
}

void func_182()
{
	int iVar0;
	int iVar1;

	iVar1 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar0 = 0;
	while (iVar0 < 11)
	{
		func_213(iVar0, iVar1, 0);
		iVar0++;
	}
}

void func_183()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < 1)
	{
		iVar2 = 0;
		while (iVar2 < 1)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_46[iVar1 /*2*/][iVar2]))
			{
				iVar0 = NETWORK::NET_TO_OBJ(Local_13.f_46[iVar1 /*2*/][iVar2]);
				(Local_607.f_248.f_1[iVar1 /*14*/])->f_4[iVar2 /*9*/] = iVar0;
			}
			else if (0 != func_205(iVar1, iVar2))
			{
			}
			iVar2++;
		}
		iVar1++;
	}
}

bool func_184()
{
	return (func_105(32) || func_104(32, 255));
}

int func_185(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	if (iParam0 == 0)
	{
		return 0;
	}
	Var0 = { func_214(iParam0, 2087069356) };
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

void func_186(int iParam0)
{
	if (func_147(&(Local_62[NETWORK::PARTICIPANT_ID_TO_INT() /*17*/]), iParam0))
	{
		func_176(Local_62[NETWORK::PARTICIPANT_ID_TO_INT() /*17*/], iParam0);
	}
}

void func_187()
{
	func_215();
}

void func_188()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
		func_216(iVar0, bVar1, iVar2);
		func_217(iVar0, bVar1, iVar2);
		iVar0++;
	}
}

void func_189()
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
		if (Local_607.f_82.f_129 >= 11)
		{
			Local_607.f_82.f_129 = 0;
		}
		iVar0 = Local_607.f_82.f_129;
		Local_607.f_82.f_129++;
		iVar7 = func_218(iVar0);
		iVar1 = &Local_607.f_82.f_7[iVar0 /*11*/];
		bVar4 = !ENTITY::DOES_ENTITY_EXIST(iVar1);
		if (func_203(iVar7, 4))
		{
			func_213(iVar7, iVar3, 1);
			bVar4 = !ENTITY::DOES_ENTITY_EXIST(iVar1);
		}
		if (bVar4)
		{
			if (&(Local_62[iVar3 /*17*/])->f_2.f_2[iVar0] > -1f)
			{
				(Local_62[iVar3 /*17*/])->f_2.f_2[iVar0] = -1f;
			}
			if (MISC::IS_BIT_SET(Local_607.f_82.f_5, iVar0))
			{
				MISC::CLEAR_BIT(&(Local_607.f_82.f_5), iVar0);
				MISC::CLEAR_BIT(&(Local_607.f_82.f_6), iVar0);
				MISC::CLEAR_BIT(&(Local_607.f_82.f_130), iVar0);
			}
		}
		if (MISC::IS_BIT_SET(Local_607.f_82.f_130, iVar0))
		{
			if (bVar4 || !func_219(iVar2, iVar1, iVar0))
			{
				MISC::CLEAR_BIT(&(Local_607.f_82.f_130), iVar0);
			}
		}
		else if (!bVar4)
		{
			if (func_219(iVar2, iVar1, iVar0))
			{
				MISC::SET_BIT(&(Local_607.f_82.f_130), iVar0);
			}
		}
		if (!bVar4)
		{
			if (AUDIO::IS_ANY_SPEECH_PLAYING(iVar1))
			{
				if (!MISC::IS_BIT_SET((Local_62[iVar3 /*17*/])->f_2.f_1, iVar0))
				{
					MISC::SET_BIT(&((Local_62[iVar3 /*17*/])->f_2.f_1), iVar0);
				}
				func_220(Local_607.f_82.f_131[iVar0 /*3*/]);
			}
		}
		if (MISC::IS_BIT_SET((Local_62[iVar3 /*17*/])->f_2.f_1, iVar0))
		{
			if (bVar4 || (!AUDIO::IS_ANY_SPEECH_PLAYING(iVar1) && (!func_221(Local_607.f_82.f_131[iVar0 /*3*/]) || func_222(Local_607.f_82.f_131[iVar0 /*3*/], 0.5f))))
			{
				func_223(Local_607.f_82.f_131[iVar0 /*3*/]);
				MISC::CLEAR_BIT(&((Local_62[iVar3 /*17*/])->f_2.f_1), iVar0);
			}
		}
		if (func_203(iVar7, 4))
		{
			if (bVar4)
			{
				if (!bVar6)
				{
					if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
					{
						if (func_224(iVar7))
						{
							if (!func_204(iVar7, &bVar5, &bVar6))
							{
								if (bVar5)
								{
									func_225(iVar7, 4);
								}
								else if (bVar6)
								{
								}
							}
						}
					}
				}
			}
			else if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1) && !func_203(iVar7, 8))
			{
				if (!func_224(iVar7))
				{
					PED::_0x7043D0681285BA2D(&iVar1);
				}
			}
		}
		iVar0++;
	}
	if (Local_607.f_82.f_130 != 0)
	{
		if (!func_226(1, -1))
		{
			func_227(1);
		}
	}
	else if (func_226(1, -1))
	{
		func_228(1);
	}
}

void func_190()
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

	fVar0 = func_229();
	if (Local_607.f_264.f_4)
	{
		return;
	}
	iVar1 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (func_147((Local_62[iVar1 /*17*/])->f_16, 1))
	{
		Local_607.f_264.f_4 = 1;
		return;
	}
	iVar2 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	fVar3 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar2, true, false), Local_607.f_15);
	fVar4 = Local_607.f_264.f_9;
	fVar5 = Local_607.f_264.f_10;
	if (func_147(Local_607.f_264.f_12, 2))
	{
		bVar6 = false;
		fVar7 = ENTITY::GET_ENTITY_SPEED(iVar2);
		fVar8 = (fVar0 * (1f / Local_607.f_264.f_7));
		if (fVar7 > 0f)
		{
			if (func_230(Local_607.f_15, iVar2))
			{
				bVar6 = true;
			}
		}
		if (bVar6)
		{
			if (Local_607.f_264.f_6 < 1f)
			{
				Local_607.f_264.f_6 = (Local_607.f_264.f_6 + fVar8);
				if (Local_607.f_264.f_6 > 1f)
				{
					Local_607.f_264.f_6 = 1f;
				}
			}
		}
		else if (Local_607.f_264.f_6 > 0f)
		{
			Local_607.f_264.f_6 = (Local_607.f_264.f_6 - fVar8);
			if (Local_607.f_264.f_6 < 0f)
			{
				Local_607.f_264.f_6 = 0f;
			}
		}
		fVar9 = ((fVar7 * Local_607.f_264.f_5) * Local_607.f_264.f_6);
		fVar4 = (fVar4 + fVar9);
		fVar5 = (fVar5 + fVar9);
	}
	if (fVar3 <= fVar4)
	{
		func_166(&((Local_62[iVar1 /*17*/])->f_16), 1);
	}
	else if (VOLUME::_0x92A78D0BEDB332A3(Local_607.f_264.f_11) && ENTITY::IS_ENTITY_IN_VOLUME(iVar2, Local_607.f_264.f_11, false, 0))
	{
		func_166(&((Local_62[iVar1 /*17*/])->f_16), 1);
	}
	else if (Local_607.f_264 > 0)
	{
		iVar10 = 0;
		while (iVar10 < 3)
		{
			func_231(Local_607.f_264.f_13[iVar10 /*9*/], fVar5, 1082130432 /* Float: 4f */, 0, 0, 0, 0);
			iVar10++;
		}
		if (func_232(&(Local_607.f_264.f_13), Local_607.f_264, Local_607.f_264.f_8))
		{
			func_166(&((Local_62[iVar1 /*17*/])->f_16), 1);
		}
	}
	if (func_147((Local_62[iVar1 /*17*/])->f_16, 1))
	{
		Local_607.f_264.f_4 = 1;
	}
}

int func_191()
{
	bool bVar0;

	bVar0 = true;
	if (bVar0 && !UNLOCK::_UNLOCK_IS_UNLOCKED(Local_607.f_14))
	{
		return 0;
	}
	return 1;
}

int func_192(var uParam0, var uParam1)
{
	return uParam0;
}

int func_193(int iParam0)
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

int func_194(struct<2> Param0)
{
	return func_233(Param0);
}

void func_195(struct<2> Param0, var uParam2)
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
	switch (func_192(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_235(func_234(Param0));
			iVar5 = func_236(iVar4);
			if (!func_237(iVar5, 0))
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

int func_196(int iParam0, int iParam1)
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

void func_197(int iParam0)
{
	struct<6> Var0;

	Var0.f_4 = 3;
	Var0.f_5 = iParam0;
	func_238(&Var0);
}

int func_198(int iParam0)
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

int func_199(int iParam0)
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

void func_200(int iParam0, int iParam1, int iParam2)
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
		func_75(iParam0, iVar0);
		iVar0++;
	}
}

void func_201(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_202(int iParam0)
{
	if (!func_148(iParam0))
	{
		return 0;
	}
	return &(Global_1124870->f_1[iParam0 /*59*/]);
}

bool func_203(int iParam0, int iParam1)
{
	return func_147((Local_607.f_82.f_7[iParam0 /*11*/])->f_2, iParam1);
}

int func_204(int iParam0, int iParam1, bool bParam2)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	int iVar9;

	fVar0 = 0f;
	vVar1 = { 0f, 0f, 0f };
	vVar4 = { Local_607.f_15 };
	iVar7 = 0;
	iVar8 = func_212(iParam0);
	iVar9 = func_239(iParam0);
	*bParam2 = 0;
	if (iVar8 != 0)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_34[iParam0])))
		{
			iVar9 = func_239(iParam0);
			fVar0 = func_240(iParam0);
			if (!func_147((Local_607.f_82.f_7[iParam0 /*11*/])->f_2, 2))
			{
				vVar1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar4, 0f, func_241(iParam0)) };
			}
			else
			{
				vVar1 = { func_241(iParam0) };
			}
			if (!func_242(Local_13.f_34[iParam0], iVar8, vVar1, fVar0, 1, 0, (iVar9 == 0 || PED::_0x772A1969F649E902(iVar8)), 1, 1))
			{
				*iParam1 = 1;
			}
			else
			{
				iVar7 = NETWORK::NET_TO_PED(&(Local_13.f_34[iParam0]));
				if (ENTITY::DOES_ENTITY_EXIST(iVar7))
				{
					ENTITY::_0xA91E6CF94404E8C9(iVar7);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar7, true);
					PED::SET_PED_CONFIG_FLAG(iVar7, 178, false);
					if (iVar9 != 0)
					{
						PED::_0x1902C4CFCC5BE57C(iVar7, iVar9);
						PED::_0xCC8CA3E88256E58F(iVar7, func_203(iParam0, 1), 1, 1, 1, false);
					}
					else if (PED::_0x772A1969F649E902(iVar8))
					{
						if (PED::_0xA0BC8FAED8CFEB3C(iVar7))
						{
						}
						func_243(iVar7, 1);
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
		else if (PED::_0xA0BC8FAED8CFEB3C(NETWORK::NET_TO_PED(&(Local_13.f_34[iParam0]))))
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

int func_205(int iParam0, int iParam1)
{
	return ((Local_607.f_248.f_1[iParam0 /*14*/])->f_4[iParam1 /*9*/])->f_1;
}

bool func_206(int iParam0)
{
	return MISC::IS_BIT_SET((Local_607.f_248.f_1[0 /*14*/])->f_3, iParam0);
}

Vector3 func_207(int iParam0, int iParam1)
{
	return ((Local_607.f_248.f_1[iParam0 /*14*/])->f_4[iParam1 /*9*/])->f_5;
}

int func_208(var uParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6)
{
	if (NETWORK::_0x0E2C3AEE6CE603B7())
	{
		return 0;
	}
	if (!func_244(iParam1))
	{
		return 0;
	}
	*uParam0 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT(iParam1, vParam2, true, bParam5, false, false, true));
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (bParam5)
		{
			NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
		}
		return 1;
	}
	return 0;
}

bool func_209(int iParam0, int iParam1)
{
	return ((Local_607.f_248.f_1[iParam0 /*14*/])->f_4[iParam1 /*9*/])->f_8;
}

var func_210(int iParam0, int iParam1)
{
	return ((Local_607.f_248.f_1[iParam0 /*14*/])->f_4[iParam1 /*9*/])->f_4;
}

void func_211(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_212(int iParam0)
{
	return (Local_607.f_82.f_7[iParam0 /*11*/])->f_3;
}

void func_213(int iParam0, int iParam1, bool bParam2)
{
	char* sVar0;
	int iVar1;

	if (!MISC::IS_BIT_SET(Local_607.f_82.f_5, iParam0))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_34[iParam0])))
		{
			iVar1 = NETWORK::NET_TO_PED(&(Local_13.f_34[iParam0]));
			Local_607.f_82.f_7[iParam0 /*11*/] = iVar1;
			(Local_62[iParam1 /*17*/])->f_2.f_2[iParam0] = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false));
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				EVENT::_0xBB1E41DD3D3C6250(iVar1, "MpRandomEvent", 1);
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
				{
					func_245(iVar1, 1f, 0);
				}
				sVar0 = func_246(iParam0);
				if (!MISC::_0x375F5870A7B8BEC1(sVar0))
				{
					func_247(iVar1, sVar0, 1);
				}
				MISC::SET_BIT(&(Local_607.f_82.f_5), iParam0);
				if (bParam2)
				{
					func_248(iParam0);
				}
			}
		}
	}
}

struct<2> func_214(int iParam0, int iParam1)
{
	struct<2> Var0;
	struct<2> Var2;
	int iVar4;

	if (iParam1 == 0)
	{
		return Var2;
	}
	iVar4 = func_249(iParam0);
	if (iVar4 == 0)
	{
		return Var2;
	}
	Var0 = { func_250(iParam1, iVar4) };
	if (!STATS::_STAT_ID_IS_VALID(&Var0))
	{
		return Var2;
	}
	return Var0;
}

void func_215()
{
	Local_607.f_82.f_6 = 0;
	Local_607.f_82.f_2 = 0;
	Local_607.f_82.f_1 = -1;
}

void func_216(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		Local_607.f_82.f_2 = (Local_607.f_82.f_2 || (Local_62[iParam0 /*17*/])->f_2);
		Local_607.f_82.f_1 = (Local_607.f_82.f_1 && (Local_62[iParam0 /*17*/])->f_2);
		Local_607.f_82.f_6 = (Local_607.f_82.f_6 || (Local_62[iParam0 /*17*/])->f_2.f_1);
	}
}

void func_217(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1 && iParam2 != iParam0)
	{
		(Local_62[iParam2 /*17*/])->f_16 = ((Local_62[iParam2 /*17*/])->f_16 || (Local_62[iParam0 /*17*/])->f_16);
	}
}

int func_218(int iParam0)
{
	return iParam0;
}

int func_219(int iParam0, int iParam1, int iParam2)
{
	float fVar0;

	fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), ENTITY::GET_ENTITY_COORDS(iParam1, true, false));
	(Local_62[NETWORK::PARTICIPANT_ID_TO_INT() /*17*/])->f_2.f_2[iParam2] = fVar0;
	if (fVar0 > (Local_607.f_82.f_7[iParam2 /*11*/])->f_9)
	{
		return 0;
	}
	return 1;
}

void func_220(var uParam0)
{
	func_251(uParam0, 0f);
}

bool func_221(var uParam0)
{
	return func_252(*uParam0, 1);
}

int func_222(var uParam0, float fParam1)
{
	if (!func_221(uParam0))
	{
		return 0;
	}
	if (func_253(uParam0) > fParam1)
	{
		return 1;
	}
	return 0;
}

void func_223(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_224(int iParam0)
{
	return 1;
}

void func_225(int iParam0, int iParam1)
{
	func_176(&((Local_607.f_82.f_7[iParam0 /*11*/])->f_2), iParam1);
}

bool func_226(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	return func_147((Local_62[iParam1 /*17*/])->f_2, iParam0);
}

void func_227(int iParam0)
{
	func_166(&((Local_62[NETWORK::PARTICIPANT_ID_TO_INT() /*17*/])->f_2), iParam0);
}

void func_228(int iParam0)
{
	func_176(&((Local_62[NETWORK::PARTICIPANT_ID_TO_INT() /*17*/])->f_2), iParam0);
}

float func_229()
{
	int iVar0;
	float fVar1;

	if (Local_607.f_264.f_3 == 0)
	{
		Local_607.f_264.f_3 = MISC::GET_GAME_TIMER();
		return 0.03125f;
	}
	iVar0 = MISC::GET_GAME_TIMER();
	fVar1 = (BUILTIN::TO_FLOAT((iVar0 - Local_607.f_264.f_3)) * 0.001f);
	Local_607.f_264.f_3 = iVar0;
	return fVar1;
}

bool func_230(vector3 vParam0, int iParam3)
{
	vector3 vVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam3))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam3) };
	return func_254(vVar0, vParam0) > func_254(vVar0, ENTITY::GET_ENTITY_COORDS(iParam3, true, false));
}

int func_231(var uParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, float fParam6)
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
			else if (func_255(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
					if (func_256(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
		uParam0->f_7 = (func_257() - uParam0->f_8);
	}
	else
	{
		uParam0->f_7 = 0f;
	}
	return 1;
}

int func_232(var uParam0, int iParam1, float fParam2)
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

int func_233(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_258(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_234(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_258(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_235(var uParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_161(&Var1, uParam0))
	{
		iVar0 = ((func_259() - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_236(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return ((*Global_1232796)[iParam0 /*5*/])->f_2;
}

int func_237(int iParam0, int iParam1)
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

void func_238(var uParam0)
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
	func_260(uParam0, uParam0->f_1);
}

int func_239(int iParam0)
{
	return (Local_607.f_82.f_7[iParam0 /*11*/])->f_4;
}

float func_240(int iParam0)
{
	return (Local_607.f_82.f_7[iParam0 /*11*/])->f_5;
}

Vector3 func_241(int iParam0)
{
	return (Local_607.f_82.f_7[iParam0 /*11*/])->f_6;
}

int func_242(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
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
	if (!func_244(iParam1))
	{
		return 0;
	}
	iVar0 = func_261(iParam1, vParam2, fParam5, bParam8, 1, bParam6, bParam7, bParam9);
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

void func_243(int iParam0, bool bParam1)
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

bool func_244(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam0, false);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

void func_245(int iParam0, float fParam1, int iParam2)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		fParam1 = func_262(fParam1, 0f, 1f);
		iVar0 = BUILTIN::FLOOR((fParam1 * IntToFloat(ENTITY::GET_ENTITY_MAX_HEALTH(iParam0, iParam2))));
		ENTITY::_SET_ENTITY_HEALTH(iParam0, iVar0, 0);
	}
}

var func_246(int iParam0)
{
	return (Local_607.f_82.f_7[iParam0 /*11*/])->f_10;
}

void func_247(int iParam0, char* sParam1, bool bParam2)
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

void func_248(int iParam0)
{
}

int func_249(int iParam0)
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

struct<2> func_250(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_251(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_257() - fParam1);
	func_263(uParam0, 1);
	func_264(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_252(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_253(var uParam0)
{
	if (!func_221(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_265(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_257() - uParam0->f_1);
}

float func_254(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

int func_255(var uParam0, float fParam1, float fParam2, int iParam3)
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

int func_256(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (func_255(uParam0, fParam1, fParam2, iParam3))
	{
		if (uParam0->f_8 == 0f)
		{
			uParam0->f_8 = (func_257() - 0.02f);
		}
		return 1;
	}
	uParam0->f_8 = 0f;
	return 0;
}

float func_257()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

int func_258(struct<2> Param0, int iParam2)
{
	if (!func_38(Param0))
	{
		return 0;
	}
	func_266(iParam2);
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

int func_259()
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

void func_260(var uParam0, var uParam1)
{
}

int func_261(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam6, bParam7, false, !bParam9);
	if (bParam5)
	{
		PED::_0x283978A15512B2FE(iVar0, 1);
	}
	return iVar0;
}

float func_262(float fParam0, float fParam1, float fParam2)
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

void func_263(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_264(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_265(var uParam0)
{
	return func_252(*uParam0, 2);
}

void func_266(int iParam0)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = -1;
}

