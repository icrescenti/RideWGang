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
	var uLocal_18 = 3;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
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
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	struct<10> Local_45[3];
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	struct<4> Local_80 = { 0, 0, 0, 0 } ;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	vector3 vLocal_89 = { 0f, 0f, 0f };
	vector3 vLocal_92 = { 0f, 0f, 0f };
	int iScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	fLocal_15 = 1f;
	fLocal_16 = 1f;
	iLocal_78 = joaat("a_c_doghound_01");
	iLocal_76 = iScriptParam_0;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_1(9);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	func_2();
	while (func_3(iLocal_76))
	{
		func_4();
		BUILTIN::WAIT(0);
	}
	func_1(0);
}

void func_1(int iParam0)
{
	int iVar0;

	MAP::REMOVE_BLIP(&((Local_45[iParam0 /*10*/])->f_8));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_5(&((Local_45[iParam0 /*10*/])->f_1[iVar0]), 0))
		{
			func_6(&((Local_45[iParam0 /*10*/])->f_1[iVar0]));
			func_7((Local_45[iParam0 /*10*/])->f_1[iVar0], 1, 0, 1);
		}
		iVar0++;
	}
	if (PED::DOES_GROUP_EXIST((Local_45[iParam0 /*10*/])->f_7))
	{
		PED::REMOVE_GROUP((Local_45[iParam0 /*10*/])->f_7);
	}
}

void func_2()
{
	iLocal_77 = 1;
	PED::_0xED9582B3DA8F02B4(4);
	switch (iLocal_76)
	{
		case 81:
			vLocal_89 = { -297.8979f, 783.4763f, 117.3506f };
			break;
		default:
			vLocal_89 = { func_8(iLocal_76, 1) };
			break;
	}
}

int func_3(int iParam0)
{
	return 0;
}

void func_4()
{
	int iVar0;

	switch (iLocal_77)
	{
		case 1:
			iLocal_79 = func_9(2, 2, -156825994, 1, 0, 0f, 0f, 0f);
			if (!STREAMING::IS_MODEL_VALID(iLocal_79))
			{
				iLocal_79 = joaat("s_m_m_ambientlawrural_01");
			}
			iLocal_77 = 2;
			break;
		case 2:
			STREAMING::REQUEST_MODEL(iLocal_78, false);
			STREAMING::REQUEST_MODEL(iLocal_79, false);
			if ((STREAMING::HAS_MODEL_LOADED(iLocal_78) && STREAMING::HAS_MODEL_LOADED(iLocal_79)) && PED::_0x5E420FF293EE5472())
			{
				iLocal_77 = 4;
			}
			break;
		case 4:
			if (func_10())
			{
				func_11(0);
				func_12(0);
				iLocal_77 = 5;
			}
			break;
		case 5:
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (&Local_45[iVar0 /*10*/] == 1)
				{
					if (func_5((Local_45[iVar0 /*10*/])->f_6, 0))
					{
						if (func_13(Global_35, (Local_45[iVar0 /*10*/])->f_9, 1, 0))
						{
							func_14(iVar0);
						}
					}
					else if (func_13(Global_35, (Local_45[iVar0 /*10*/])->f_9, 1, 0))
					{
						func_14(iVar0);
					}
					else
					{
						Local_45[iVar0 /*10*/] = 3;
					}
				}
				else if (&Local_45[iVar0 /*10*/] == 2)
				{
					if (func_5((Local_45[iVar0 /*10*/])->f_6, 0))
					{
						if (!PED::IS_PED_IN_COMBAT((Local_45[iVar0 /*10*/])->f_6, 0) && !func_13(Global_35, (Local_45[iVar0 /*10*/])->f_9, 1, 0))
						{
							func_12(iVar0);
						}
					}
				}
				else if (&Local_45[iVar0 /*10*/] == 3)
				{
					func_1(iVar0);
				}
				iVar0++;
			}
			break;
		case 6:
			break;
	}
}

int func_5(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return 1;
	}
	if (func_15(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_15(iVar0, 2))
	{
		if (PED::_0x3AA24CCC0D451379(iParam0))
		{
			return 0;
		}
	}
	if (func_15(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_15(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_15(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_15(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return 0;
		}
	}
	if (func_15(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_15(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

void func_6(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	iVar0 = MAP::GET_BLIP_FROM_ENTITY(iParam0);
	func_16(&iVar0);
}

void func_7(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
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

Vector3 func_8(int iParam0, bool bParam1)
{
	vector3 vVar0;
	var uVar3;

	vVar0 = { 0f, 0f, 0f };
	if (!func_17(iParam0))
	{
		return vVar0;
	}
	if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1887327)[iParam0 /*36*/])->f_4))
	{
		vVar0 = { VOLUME::_0xF70F00013A62F866(((*Global_1887327)[iParam0 /*36*/])->f_4) };
		if (bParam1)
		{
			if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar3, 0))
			{
				vVar0.f_2 = uVar3;
			}
		}
	}
	return vVar0;
}

int func_9(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, vector3 vParam5)
{
	if (!func_18(iParam0))
	{
		return 0;
	}
	if (func_19(iParam0) == -1)
	{
		return 0;
	}
	return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(func_19(iParam0), iParam1, iParam2, iParam3, iParam4, vParam5);
}

int func_10()
{
	float fVar0;
	float fVar1;
	var uVar2;

	fVar0 = 25f;
	fVar1 = 60f;
	if (!func_20(vLocal_89, &Local_80, &uVar2, 1, 1, 1127481344 /* Float: 180f */, 50f, fVar0, fVar1, 0))
	{
		return 0;
	}
	vLocal_92 = { Local_80.f_3 };
	return 1;
}

void func_11(int iParam0)
{
	vector3 vVar0;
	int iVar3;

	if (!PED::DOES_GROUP_EXIST((Local_45[iParam0 /*10*/])->f_7))
	{
		(Local_45[iParam0 /*10*/])->f_7 = PED::CREATE_GROUP(1);
	}
	vVar0 = { func_21(vLocal_92, 3f, 1f) };
	(Local_45[iParam0 /*10*/])->f_6 = func_22(iLocal_79, vVar0, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f), 1, 1, 0, 1, 1, 1, 0, 0);
	PED::SET_PED_CONFIG_FLAG((Local_45[iParam0 /*10*/])->f_6, 279, true);
	PED::SET_PED_AS_GROUP_LEADER((Local_45[iParam0 /*10*/])->f_6, (Local_45[iParam0 /*10*/])->f_7, 0);
	TASK::TASK_POLICE((Local_45[iParam0 /*10*/])->f_6, 0);
	PED::SET_PED_CONFIG_FLAG((Local_45[iParam0 /*10*/])->f_6, 188, true);
	iVar3 = 0;
	while (iVar3 < 4)
	{
		(Local_45[iParam0 /*10*/])->f_1[iVar3] = func_22(iLocal_78, vVar0, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f), 1, 1, 0, 1, 1, 1, 0, 0);
		if (func_5(&((Local_45[iParam0 /*10*/])->f_1[iVar3]), 0))
		{
		}
		iVar3++;
	}
}

void func_12(int iParam0)
{
	int iVar0;
	vector3 vVar1;

	if (!func_5((Local_45[iParam0 /*10*/])->f_6, 0))
	{
		return;
	}
	Local_45[iParam0 /*10*/] = 1;
	if (!VOLUME::_0x92A78D0BEDB332A3((Local_45[iParam0 /*10*/])->f_9))
	{
		(Local_45[iParam0 /*10*/])->f_9 = VOLUME::_CREATE_VOLUME_CYLINDER(ENTITY::GET_ENTITY_COORDS((Local_45[iParam0 /*10*/])->f_6, true, false), 0f, 0f, 0f, 35f, 35f, 10f);
		PED::_0x7C00CFC48A782DC0((Local_45[iParam0 /*10*/])->f_9, (Local_45[iParam0 /*10*/])->f_6, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	}
	if (!MAP::DOES_BLIP_EXIST((Local_45[iParam0 /*10*/])->f_8))
	{
		(Local_45[iParam0 /*10*/])->f_8 = MAP::_0xA6EF0C54A3443E70(-1282792512, (Local_45[iParam0 /*10*/])->f_9);
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_5(&((Local_45[iParam0 /*10*/])->f_1[iVar0]), 0))
		{
			vVar1 = { IntToFloat(iVar0 + 1), MISC::GET_RANDOM_FLOAT_IN_RANGE(1f, 3f), 0f };
			func_6(&((Local_45[iParam0 /*10*/])->f_1[iVar0]));
			TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(&((Local_45[iParam0 /*10*/])->f_1[iVar0]), (Local_45[iParam0 /*10*/])->f_6, vVar1, 2f, -1, 1036831949, 1, 1, 0, 0, 1);
		}
		iVar0++;
	}
}

bool func_13(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam1))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iParam1, bParam2, iParam3);
}

void func_14(int iParam0)
{
	int iVar0;

	if (!func_5(Global_35, 0))
	{
		return;
	}
	Local_45[iParam0 /*10*/] = 2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_5(&((Local_45[iParam0 /*10*/])->f_1[iVar0]), 0))
		{
			PED::REMOVE_PED_FROM_GROUP(&((Local_45[iParam0 /*10*/])->f_1[iVar0]));
			TASK::TASK_COMBAT_PED(&((Local_45[iParam0 /*10*/])->f_1[iVar0]), Global_35, 0, 0);
			MAP::_0x23F74C2FDA6E7C61(joaat("BLIP_STYLE_ENEMY"), &((Local_45[iParam0 /*10*/])->f_1[iVar0]));
			MAP::REMOVE_BLIP(&((Local_45[iParam0 /*10*/])->f_8));
		}
		iVar0++;
	}
}

bool func_15(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_16(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

bool func_17(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_18(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 16);
}

int func_19(int iParam0)
{
	int iVar0;

	if (!func_18(iParam0))
	{
		return -1;
	}
	iVar0 = func_24(func_23());
	if (iVar0 != 1 && iVar0 != 2)
	{
		return Global_1900701[iParam0];
	}
	return Global_1900684[iParam0];
}

int func_20(vector3 vParam0, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8, float fParam9, int iParam10, float fParam11)
{
	int iVar0;

	switch (*iParam3)
	{
		case 0:
			if (iParam3->f_2 > 4)
			{
				*iParam4 = 1;
				return 0;
			}
			iParam3->f_1 = TASK::_0x74F0209674864CBD();
			func_25(&(iParam3->f_1), iParam3->f_2, vParam0, iParam5, iParam7, iParam8, fParam9, iParam10, fParam11);
			if (!TASK::_0x1AC5A8AB50CFAA33(iParam3->f_1))
			{
			}
			else
			{
				func_26(&(iParam3->f_1), iParam5, vParam0);
				if (!func_27(iParam3->f_6))
				{
					TASK::_0xCE4E669400E5F8AA(iParam3->f_1, func_28(iParam3->f_6));
				}
				TASK::_0x2B8AF29A78024BD3(iParam3->f_1);
			}
			*iParam3 = 3;
			break;
		case 3:
			if (!TASK::_0x1AC5A8AB50CFAA33(iParam3->f_1))
			{
				iVar0 = 4;
			}
			else
			{
				iVar0 = TASK::_0x0365000D8BF86531(&(iParam3->f_1));
			}
			switch (iVar0)
			{
				case 4:
					if (bParam6 && iParam3->f_2 < 4)
					{
						iParam3->f_2++;
						*iParam3 = 0;
					}
					else
					{
						*iParam4 = 1;
					}
					break;
				case 3:
					iParam3->f_3 = { TASK::_0x865732725536EE39(&(iParam3->f_1)) };
					*iParam3 = 4;
					if (!bParam6)
					{
						return 1;
					}
					break;
			}
			break;
		case 4:
			return 1;
	}
	return 0;
}

Vector3 func_21(vector3 vParam0, float fParam3, float fParam4)
{
	vector3 vVar0;
	float fVar3;

	vVar0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), 0f };
	fVar3 = (fParam4 / 2f);
	vVar0 = { func_29(vVar0, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fParam3)) };
	vVar0.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-fVar3, fVar3);
	return vParam0 + vVar0;
}

int func_22(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, false, false);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_30(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

int func_23()
{
	return Global_1893575->f_2;
}

int func_24(int iParam0)
{
	if (!func_17(iParam0))
	{
		return 0;
	}
	return ((*Global_1887327)[iParam0 /*36*/])->f_21;
}

void func_25(var uParam0, int iParam1, vector3 vParam2, int iParam5, float fParam6, int iParam7, float fParam8, float fParam9, float fParam10)
{
	int iVar0;
	int iVar1;

	if (!func_27(vParam2))
	{
		TASK::_0x2064B33F6E6B92D4(*uParam0, vParam2);
	}
	TASK::_0x9B6A58FDB0024F12(*uParam0, iParam7);
	switch (iParam5)
	{
		case 27:
			TASK::_0xB8E3486D107F4194(*uParam0, 90f);
			TASK::_0x827A58CED9D4D5B4(*uParam0, 180f);
			break;
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 49:
		case 50:
			break;
		case 48:
			TASK::_0x827A58CED9D4D5B4(*uParam0, fParam6);
			break;
		case 42:
			TASK::_0xB8E3486D107F4194(*uParam0, fParam10);
			break;
		default:
			TASK::_0x827A58CED9D4D5B4(*uParam0, fParam6);
			if (fParam10 != 0f)
			{
				TASK::_0xB8E3486D107F4194(*uParam0, fParam10);
			}
			break;
	}
	switch (iParam5)
	{
		case 0:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 11:
		case 14:
		case 15:
		case 16:
		case 18:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
			TASK::_0xE9225354FB7437A7(*uParam0, 1);
			break;
	}
	switch (iParam5)
	{
		case 12:
		case 13:
			TASK::_0xFF8AFCA532B500D4(*uParam0, 8192);
			break;
	}
	switch (iParam5)
	{
		case 2:
		case 3:
			TASK::_0xFF8AFCA532B500D4(*uParam0, 5);
			break;
	}
	switch (iParam5)
	{
		case 35:
		case 43:
			TASK::_0x764DB5A48390FBAD(*uParam0, 1);
			break;
	}
	if (fParam8 == -0.01f)
	{
		switch (iParam5)
		{
			case 12:
			case 13:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, ((80f - 40f) / 2f));
				TASK::_0xB79817DB31FF72B9(*uParam0, 0f);
				break;
			case 4:
				TASK::_0x954451EA2D2120FB(*uParam0, 0.5f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 2.5f);
				break;
			case 5:
				TASK::_0x954451EA2D2120FB(*uParam0, 3f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 6f);
				break;
			case 6:
				TASK::_0x954451EA2D2120FB(*uParam0, 5f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
			case 7:
				TASK::_0x954451EA2D2120FB(*uParam0, 2f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
			case 8:
				TASK::_0x954451EA2D2120FB(*uParam0, 5f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
			case 9:
				TASK::_0x954451EA2D2120FB(*uParam0, 12f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 18f);
				break;
			case 10:
				TASK::_0x4A7D73989F52EB37(*uParam0, 1f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 65f);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100f);
				break;
			case 0:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 55f);
				break;
			case 11:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 15f);
				break;
			case 15:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 40f);
				break;
			case 14:
				TASK::_0x954451EA2D2120FB(*uParam0, 50f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 80f);
				break;
			case 16:
				TASK::_0x954451EA2D2120FB(*uParam0, 60f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100f);
				break;
			case 30:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 150f);
				break;
			case 2:
				TASK::_0x4A7D73989F52EB37(*uParam0, 1f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 25f);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 150f);
				break;
			case 18:
				TASK::_0x954451EA2D2120FB(*uParam0, 1f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 20f);
				break;
			case 20:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
			case 21:
				TASK::_0x954451EA2D2120FB(*uParam0, 80f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100f);
				break;
			case 22:
				TASK::_0x954451EA2D2120FB(*uParam0, 70f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100f);
				break;
			case 23:
			case 24:
			case 25:
				TASK::_0x954451EA2D2120FB(*uParam0, 2f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
			case 26:
				TASK::_0x954451EA2D2120FB(*uParam0, 50f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 80f);
				break;
			case 27:
				TASK::_0x954451EA2D2120FB(*uParam0, 3f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 6f);
				break;
			case 28:
				TASK::_0x954451EA2D2120FB(*uParam0, 40f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 50f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 45f);
				break;
			case 29:
				TASK::_0x954451EA2D2120FB(*uParam0, 15f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 25f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 20f);
				break;
			case 31:
				TASK::_0x954451EA2D2120FB(*uParam0, 80f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 140f);
				break;
			case 32:
				TASK::_0x954451EA2D2120FB(*uParam0, 40f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 125f);
				break;
			case 33:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
			case 34:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
			case 35:
				TASK::_0x954451EA2D2120FB(*uParam0, 60f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 80f);
				break;
			case 36:
				TASK::_0x2EB977293923C723(*uParam0, 10f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_31(10f, 40f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_31(30f, 60f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 10f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 37:
				TASK::_0x2EB977293923C723(*uParam0, 30f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_31(40f, 80f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_31(50f, 90f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 10f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 15f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
			case 38:
				TASK::_0x2EB977293923C723(*uParam0, 30f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_31(30f, 60f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_31(50f, 80f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 5f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 15f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
			case 39:
				TASK::_0x2EB977293923C723(*uParam0, 10f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_31(0f, 10f, 1f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_31(5f, 15f, 1f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 3f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 3f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 40:
				TASK::_0x2EB977293923C723(*uParam0, 40f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_31(60f, 120f, 10f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_31(100f, 130f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 20f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 20f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
			case 41:
				TASK::_0x2EB977293923C723(*uParam0, 10f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_31(10f, 35f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_31(25f, 50f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 2f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 20f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 44:
			case 45:
				TASK::_0x2EB977293923C723(*uParam0, 60f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_31(60f, 80f, 10f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_31(75f, 95f, 5f, iParam1));
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 50:
				TASK::_0x2EB977293923C723(*uParam0, 30f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_31(30f, 70f, 10f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_31(65f, 95f, 5f, iParam1));
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 25f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 42:
				TASK::_0x2EB977293923C723(*uParam0, 50f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_31(50f, 70f, 10f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_31(65f, 85f, 5f, iParam1));
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 49:
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x2EB977293923C723(*uParam0, 50f);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_31(10f, 50f, 10f, iParam1));
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 43:
				TASK::_0x2EB977293923C723(*uParam0, func_31(95f, 90f, 80f, iParam1));
				TASK::_0x954451EA2D2120FB(*uParam0, func_31(95f, 90f, 80f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_31(125f, 115f, 100f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 5f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 46:
				iVar0 = func_32(vParam2, 1);
				iVar1 = func_33(vParam2);
				if ((((iVar1 == 15 || iVar1 == 14) || iVar1 == 13) || (iVar1 == 9 && iVar0 == -1)) || (iVar1 == 4 && iVar0 == -1))
				{
					TASK::_0x2EB977293923C723(*uParam0, func_31(100f, 80f, -5f, iParam1));
					TASK::_0x954451EA2D2120FB(*uParam0, func_31(100f, 80f, -5f, iParam1));
					TASK::_0x0F4F6C4CE471259D(*uParam0, func_31(110f, 160f, 12.5f, iParam1));
				}
				else
				{
					TASK::_0x2EB977293923C723(*uParam0, func_31(100f, 70f, -7.5f, iParam1));
					TASK::_0x954451EA2D2120FB(*uParam0, 70f);
					TASK::_0x0F4F6C4CE471259D(*uParam0, func_31(80f, 150f, 17.5f, iParam1));
				}
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				if (iParam1 <= 2)
				{
					TASK::_0x19BC99C678FBA139(*uParam0, 2, 0);
					TASK::_0x764DB5A48390FBAD(*uParam0, 1);
				}
				break;
			case 47:
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x2EB977293923C723(*uParam0, 50f);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_31(50f, 90f, 10f, iParam1));
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				if (iParam1 <= 2)
				{
					TASK::_0x764DB5A48390FBAD(*uParam0, 1);
				}
				break;
			case 48:
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x2EB977293923C723(*uParam0, func_31(100f, 70f, -7.5f, iParam1));
				TASK::_0x954451EA2D2120FB(*uParam0, 70f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_31(150f, 190f, 10f, iParam1));
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				if (iParam1 <= 2)
				{
					TASK::_0x764DB5A48390FBAD(*uParam0, 1);
				}
				break;
			default:
				if (iParam1 == 0)
				{
					TASK::_0x954451EA2D2120FB(*uParam0, 1f);
					TASK::_0x0F4F6C4CE471259D(*uParam0, 5f);
				}
				else if (iParam1 == 1)
				{
					TASK::_0x954451EA2D2120FB(*uParam0, 5f);
					TASK::_0x0F4F6C4CE471259D(*uParam0, 15f);
				}
				else if (iParam1 == 2)
				{
					TASK::_0x954451EA2D2120FB(*uParam0, 15f);
					TASK::_0x0F4F6C4CE471259D(*uParam0, 35f);
				}
				else
				{
					iParam1 = 3;
					TASK::_0x4A7D73989F52EB37(*uParam0, 1f);
					TASK::_0xB79817DB31FF72B9(*uParam0, 65f);
					TASK::_0x954451EA2D2120FB(*uParam0, 35f);
					if (iParam5 != 19)
					{
						TASK::_0x0F4F6C4CE471259D(*uParam0, 160f);
					}
					else
					{
						TASK::_0x0F4F6C4CE471259D(*uParam0, 65f);
					}
				}
				break;
		}
	}
	else
	{
		TASK::_0x954451EA2D2120FB(*uParam0, fParam8);
		TASK::_0x0F4F6C4CE471259D(*uParam0, fParam9);
	}
}

void func_26(var uParam0, int iParam1, vector3 vParam2)
{
	switch (iParam1)
	{
		case 0:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 64, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
		case 1:
		case 19:
		case 20:
		case 45:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
		case 2:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 73, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 1);
			break;
		case 3:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 34, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 73, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 1);
			break;
		case 4:
		case 5:
		case 6:
			TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
		case 7:
			TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
		case 8:
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
		case 9:
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
		case 10:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 34, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
		case 12:
		case 13:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			TASK::_0xBC3F847AE2C3DC65(*uParam0, 25f);
			TASK::_0x450080DDEDB91258(*uParam0, 25f);
			break;
		case 11:
		case 30:
			TASK::_0x19BC99C678FBA139(*uParam0, 77, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
		case 15:
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			break;
		case 14:
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
		case 51:
			TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 9, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			break;
		case 16:
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 5, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
		case 17:
			TASK::_0x2EB977293923C723(*uParam0, 40f);
			TASK::_0x764DB5A48390FBAD(*uParam0, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
		case 18:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
		case 21:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			break;
		case 22:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
		case 23:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 4, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
		case 24:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
		case 25:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
		case 26:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
		case 27:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 74, 0);
			break;
		case 28:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 77, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			break;
		case 29:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 12, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
		case 31:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 64, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			break;
		case 32:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			break;
		case 33:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 3, 0);
			break;
		case 34:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 4, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
		case 35:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			break;
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 1, 0);
			break;
		case 41:
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			break;
		case 42:
		case 44:
		case 49:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			break;
		case 50:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			break;
		case 46:
		case 47:
		case 48:
			if (func_32(vParam2, 1) == 5)
			{
				TASK::_0x5D9B0BAAF04CF65B(*uParam0, 53, 1, 0);
				TASK::_0x5D9B0BAAF04CF65B(*uParam0, 74, 1, 0);
			}
			else
			{
				TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			}
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			break;
		case 43:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 5, 0);
			break;
	}
}

int func_27(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_28(vector3 vParam0)
{
	float fVar0;
	float fVar1;

	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.f_1 = 0f;
		vParam0.f_2 = 0f;
	}
	return vParam0;
}

Vector3 func_29(vector3 vParam0, float fParam3)
{
	float fVar0;

	if (fParam3 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		return vParam0 * FtoV((fParam3 / fVar0));
	}
	return 0f, 0f, 0f;
}

void func_30(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (bParam5)
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
			func_34(iParam0, 0, 1);
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
			func_35(iParam0, 0);
			bVar0 = true;
		}
		func_36(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, false);
	}
}

float func_31(float fParam0, float fParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = fParam0;
	fVar0 = (fVar0 + (fParam2 * IntToFloat(iParam3)));
	if (fVar0 > fParam1)
	{
		fVar0 = fParam1;
	}
	return fVar0;
}

int func_32(vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = func_23();
	if (func_17(iVar0))
	{
		if (VOLUME::_0xF256A75210C5C0EB(((*Global_1887327)[iVar0 /*36*/])->f_4, vParam0))
		{
			return iVar0;
		}
	}
	return func_37(vParam0, iParam3);
}

int func_33(vector3 vParam0)
{
	return func_38(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

void func_34(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	PED::_0xD710A5007C2AC539(iParam0, -1725579161, 1);
	if (bParam2)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, false);
	}
}

void func_35(int iParam0, bool bParam1)
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

void func_36(int iParam0, int iParam1)
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

int func_37(vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	iVar0 = func_39(vParam0);
	iVar1 = -1;
	if (Global_1893558[iVar0] > 0)
	{
		iVar2 = (Global_1893558[iVar0] - 1);
		bVar3 = false;
		while (iVar2 >= 0 && !bVar3)
		{
			iVar4 = (*Global_1892741)[iVar0 /*51*/][iVar2];
			if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1887327)[iVar4 /*36*/])->f_4))
			{
				if (VOLUME::_0xF256A75210C5C0EB(((*Global_1887327)[iVar4 /*36*/])->f_4, vParam0))
				{
					switch (((*Global_1887327)[iVar4 /*36*/])->f_21)
					{
						case 5:
							if (!bParam3)
							{
								iVar1 = iVar4;
								bVar3 = true;
							}
							break;
						default:
							iVar1 = iVar4;
							bVar3 = true;
							break;
					}
				}
			}
			iVar2 = (iVar2 - 1);
		}
	}
	if (iVar1 != -1)
	{
	}
	return iVar1;
}

int func_38(int iParam0)
{
	switch (iParam0)
	{
		case 2025841068:
			return 0;
		case 822658194:
			return 1;
		case 1308232528:
			return 2;
		case 1835499550:
			return 3;
		case 476637847:
			return 4;
		case -120156735:
			return 6;
		case 1645618177:
			return 7;
		case -512529193:
			return 8;
		case 131399519:
			return 9;
		case 178647645:
			return 10;
		case -864275692:
			return 11;
		case 1684533001:
			return 12;
		case -2066240242:
			return 13;
		case -2145992129:
			return 14;
		case -108848014:
			return 15;
		case 892930832:
			return 16;
		default:
			break;
	}
	return -1;
}

int func_39(vector3 vParam0)
{
	int iVar0;

	iVar0 = func_40(vParam0, 0f, 0f, 0, 2);
	return func_40(vParam0, ((*Global_1892728)[iVar0 /*3*/])->f_1, ((*Global_1892728)[iVar0 /*3*/])->f_2, Global_1892728[iVar0 /*3*/], 4);
}

int func_40(struct<2> Param0, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6)
{
	if (Param0 < fParam3)
	{
		if (Param0.f_1 < fParam4)
		{
			return (iParam5 + iParam6);
		}
		else
		{
			return iParam5;
		}
	}
	if (Param0.f_1 < fParam4)
	{
		return (iParam5 + iParam6) + 1;
	}
	return iParam5 + 1;
}

