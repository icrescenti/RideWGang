#region Local Var
	struct<45> Local_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_45 = ScriptParam_0;
	iLocal_46 = ScriptParam_0.f_1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1();
	}
	while (func_2())
	{
		BUILTIN::WAIT(0);
	}
	func_1();
}

void func_1()
{
	SCRIPTS::_0xE7282390542F570D(iLocal_45);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_2()
{
	if ((PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || !TASK::_0x841475AC96E794D1(iLocal_46)) || !PED::_0x9C54041BB66BCF9E(PLAYER::PLAYER_PED_ID(), iLocal_46))
	{
		func_3();
		return 0;
	}
	return func_4();
}

void func_3()
{
	if (Local_0.f_44)
	{
		if (CAM::_0xDD0B7C5AE58F721D(&(Local_0.f_1)))
		{
			CAM::_0x798BE43C9393632B(&(Local_0.f_1));
		}
		if (CAM::_0x927B810E43E99932(&(Local_0.f_1)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(Local_0.f_1));
		}
		Local_0.f_44 = 0;
	}
	if (DATAFILE::_0x603AC35FD4602C76(Local_0.f_34))
	{
		DATAFILE::_DATAFILE_UNLOAD(Local_0.f_34);
	}
}

int func_4()
{
	switch (Local_0)
	{
		case 0:
			Local_0.f_32 = TASK::_0xDF7993356F52359A(Global_35, 0);
			if (!TASK::_0x841475AC96E794D1(Local_0.f_32))
			{
				return 0;
			}
			Local_0.f_33 = TASK::_0x7467165EE97D3C68(Local_0.f_32);
			Local_0.f_34 = DATAFILE::_0xD97D8D905F1562F2(82155782);
			Local_0.f_35 = TASK::_0xA92450B5AE687AAF(Local_0.f_32);
			Local_0 = 1;
			break;
		case 1:
			if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) && DATAFILE::_0x603AC35FD4602C76(Local_0.f_34))
			{
				func_5();
				if (!func_6())
				{
					func_3();
					Local_0 = 5;
					return 0;
				}
				DATAFILE::_DATAFILE_UNLOAD(Local_0.f_34);
				func_7("player_scenario_orbit_cam", &(Local_0.f_36));
				Local_0 = 2;
			}
			break;
		case 2:
			if (func_8())
			{
				Local_0 = 3;
			}
			break;
		case 3:
			if (Local_0.f_33 != 0)
			{
				CAM::_0xD904F75DBD7AB865(Local_0.f_33);
			}
			if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
			{
				Local_0 = 4;
			}
			break;
		case 4:
			func_3();
			Local_0 = 5;
			break;
		case 5:
			return 0;
	}
	return 1;
}

void func_5()
{
	DATAFILE::_DATAFILE_REGISTER_QUERY(Local_0.f_34, -1296226829, "CameraData/Scenarios/Camera");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Local_0.f_34, 279908099, "CameraData/Scenarios/Camera(%i):scenario");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Local_0.f_34, -302997874, "CameraData/Scenarios/Camera(%i):request");
}

int func_6()
{
	struct<4> Var0;
	int iVar5;
	int iVar6;
	int iVar7;

	Var0 = Local_0.f_34;
	Var0.f_2 = -1296226829;
	iVar5 = DATAFILE::_DATAFILE_GET_NUM_NODES(&Var0);
	iVar6 = 0;
	iVar6 = 0;
	while (iVar6 < iVar5)
	{
		Var0.f_3 = iVar6;
		Var0.f_2 = 279908099;
		DATAFILE::_DATAFILE_GET_HASH(&iVar7, &Var0);
		if (iVar7 == Local_0.f_35)
		{
			Var0.f_2 = -302997874;
			DATAFILE::_DATAFILE_GET_STRING(&(Local_0.f_36), &Var0);
			return 1;
		}
		iVar6++;
	}
	return 0;
}

void func_7(char* sParam0, char* sParam1)
{
	StringCopy(&(Local_0.f_1), sParam0, 64);
	StringCopy(&(Local_0.f_1.f_8), sParam1, 64);
	CAM::_0x6A4D224FC7643941(&(Local_0.f_1));
	Local_0.f_44 = 1;
}

int func_8()
{
	if (CAM::_0xDD0B7C5AE58F721D(&(Local_0.f_1)) && !CAM::_0x927B810E43E99932(&(Local_0.f_1)))
	{
		CAM::_0xB8B207C34285E978(&(Local_0.f_1));
		Local_0.f_1.f_16 = Global_35;
		Local_0.f_1.f_21 = 1;
		Local_0.f_1.f_22 = { 0f, 0f, TASK::_0xB93EA7184BAA85C3(Local_0.f_32, 1) };
		CAM::_0xAC77757C05DE9E5A(&(Local_0.f_1));
		return 1;
	}
	return 0;
}

