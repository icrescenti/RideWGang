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
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	func_1();
	func_2();
	bVar0 = true;
	while (bVar0)
	{
		BUILTIN::WAIT(0);
	}
	func_3();
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
		func_3();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

void func_2()
{
	iLocal_14 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(4150f, -3650f, 105f, 0f, 0f, 0f, 95f, 95f, 35f, "m_volTemple_Restriction");
	func_4(iLocal_14, 1);
	iLocal_15 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(3935f, -3340f, 65f, 0f, 0f, 0f, 125f, 125f, 35f, "m_volVilla_Restriction");
	func_4(iLocal_15, 1);
	iLocal_16 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(3900f, -3200f, 60f, 0f, 0f, 0f, 15f, 15f, 20f, "m_volLightHouse_Restriction");
	func_4(iLocal_16, 1);
	iLocal_17 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(3910f, -3820f, 65f, 0f, 0f, 42f, 100f, 70f, 35f, "m_volManicato_Restriction");
	func_4(iLocal_17, 1);
	iLocal_18 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volAquatic_Restriction");
	VOLUME::_0x39816F6F94F385AD(iLocal_18, 1198.392f, -6996.118f, 40.56991f, 0f, 0f, -13.19622f, 107.2032f, 48.4901f, 16.01354f);
	VOLUME::_0x39816F6F94F385AD(iLocal_18, 1122.764f, -6966.072f, 41.7932f, 0f, 0f, -13.23685f, 54.31777f, 34.31042f, 13.34025f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_18, 1061.422f, -6968.24f, 41.39648f, 0f, 0f, 0f, 46.10505f, 24.56085f, 7.935126f);
	VOLUME::_0x39816F6F94F385AD(iLocal_18, 1004.815f, -6902.04f, 40.91697f, 0f, 0f, 22.01897f, 20.89131f, 114.5361f, 13.15669f);
	func_5(iLocal_18, 1);
}

void func_3()
{
}

void func_4(int iParam0, bool bParam1)
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

void func_5(int iParam0, bool bParam1)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, 2228767, 0, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, 2228767, 0, 0, -1, -1, 0);
	if (bParam1)
	{
		POPULATION::_0x2161278C6322F740(2228767, 0, 0, -1, -1, iParam0);
	}
}

