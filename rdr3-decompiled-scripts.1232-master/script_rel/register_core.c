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
	struct<14> Local_14 = { 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_28 = 1;
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
#endregion

void __EntryFunction__()
{
	vector3 vVar0;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	Local_14.f_12 = ScriptParam_0;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_1(&Local_14);
	}
	if (TASK::_0x841475AC96E794D1(ScriptParam_0.f_1))
	{
		Local_14.f_2 = ScriptParam_0.f_1;
		Local_14.f_1 = TASK::_0x7467165EE97D3C68(Local_14.f_2);
	}
	else
	{
		func_1(&Local_14);
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(Local_14.f_1, false, false) };
	if (!func_2(vVar0))
	{
		func_1(&Local_14);
	}
	while (true)
	{
		Local_14.f_13 = (1 + Local_14.f_13);
		if (Local_14.f_13 >= 30)
		{
			Local_14.f_13 = 0;
			if (Global_1935630->f_12)
			{
				func_3(&Local_14, 5);
			}
		}
		if (func_4(&Global_1935630, 2097152))
		{
			func_3(&Local_14, 5);
		}
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			func_1(&Local_14);
		}
		switch (func_5(&Local_14))
		{
			case 0:
				if (func_6(&Local_14))
				{
					func_7(&Local_14);
					func_8(&Local_14);
				}
				if (TASK::_0x841475AC96E794D1(Local_14.f_2))
				{
					if (func_9(Global_36) && func_10(&Local_14))
					{
						func_3(&Local_14, 1);
					}
				}
				else
				{
					func_3(&Local_14, 5);
				}
				break;
			case 1:
				if (func_6(&Local_14))
				{
					func_8(&Local_14);
				}
				if (func_11(&Local_14))
				{
					func_3(&Local_14, 2);
				}
				break;
			case 2:
				if (func_6(&Local_14))
				{
					func_8(&Local_14);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_1))
				{
					if (func_12(&Local_14))
					{
						func_3(&Local_14, 3);
					}
				}
				break;
			case 3:
				if (func_6(&Local_14))
				{
					func_13(&Local_14);
					func_14(&Local_14);
					func_8(&Local_14);
				}
				if (func_15(Local_14.f_11))
				{
					func_3(&Local_14, 4);
				}
				break;
			case 4:
				if (func_6(&Local_14))
				{
					func_8(&Local_14);
				}
				break;
			case 5:
				func_1(&Local_14);
				break;
		}
		BUILTIN::WAIT(0);
	}
}

void func_1(var uParam0)
{
	int iVar0;

	SCRIPTS::_0xE7282390542F570D(uParam0->f_12);
	iVar0 = 0;
	while (iVar0 < uParam0->f_7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_7[iVar0])))
		{
			OBJECT::DELETE_OBJECT(uParam0->f_7[iVar0]);
		}
		iVar0++;
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_11))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_11);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_2(vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (func_16(vParam0, iVar0))
		{
			if (func_17(iVar0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_3(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	func_18(uParam0);
}

bool func_4(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_5(var uParam0)
{
	return *uParam0;
}

bool func_6(var uParam0)
{
	return uParam0->f_14;
}

void func_7(var uParam0)
{
	uParam0->f_3[0] = 1477581656;
	uParam0->f_3[1] = 1477581656;
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_11))
	{
		uParam0->f_11 = ANIMSCENE::_CREATE_ANIM_SCENE("script@proc@shoprobberies@GLOBAL@EVENT_OPEN_REGISTER@BASE", 2, 0, false, true);
	}
}

void func_8(var uParam0)
{
	uParam0->f_14 = 0;
}

int func_9(vector3 vParam0)
{
	int iVar0;

	if (!INTERIOR::_ARE_COORDS_COLLIDING_WITH_EXTERIOR(vParam0))
	{
		iVar0 = INTERIOR::GET_INTERIOR_FROM_COLLISION(vParam0);
		if (INTERIOR::IS_VALID_INTERIOR(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_10(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		iVar1 = &uParam0->f_3[iVar0];
		if (iVar1 != 0)
		{
			STREAMING::REQUEST_MODEL(iVar1, false);
		}
		iVar0++;
	}
	if ((ANIMSCENE::_0x25557E324489393C(uParam0->f_11) && !ANIMSCENE::_0x477122B8D05E7968(uParam0->f_11, 1, 0)) && !ANIMSCENE::_0x59606519FF9D3EC2(uParam0->f_11, 1))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_11);
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_11, "pblMain"))
	{
		if (!ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_11, "pblMain"))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_11, "pblMain");
		}
		return 0;
	}
	return 1;
}

int func_11(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		iVar1 = &uParam0->f_3[iVar0];
		if (iVar1 != 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED(iVar1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	if (!ANIMSCENE::_0x477122B8D05E7968(uParam0->f_11, 1, 0))
	{
		return 0;
	}
	return 1;
}

bool func_12(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return false;
	}
	if (!DECORATOR::DECOR_EXIST_ON(uParam0->f_1, "register_open"))
	{
		return false;
	}
	return DECORATOR::DECOR_GET_BOOL(uParam0->f_1, "register_open");
}

void func_13(var uParam0)
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, 0.074814f, -0.117756f, 0.059386f) };
	uParam0->f_7[0] = OBJECT::CREATE_OBJECT(&(uParam0->f_3[0]), vVar0, true, true, false, false, true);
	TASK::_0x8360C47380B6F351(uParam0->f_2, &(uParam0->f_7[0]), "OOXO", 1);
	vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, -0.082664f, -0.117757f, 0.059386f) };
	uParam0->f_7[1] = OBJECT::CREATE_OBJECT(&(uParam0->f_3[1]), vVar0, true, true, false, false, true);
	TASK::_0x8360C47380B6F351(uParam0->f_2, &(uParam0->f_7[1]), "OXOO", 1);
}

void func_14(var uParam0)
{
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_11, ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false), ENTITY::GET_ENTITY_ROTATION(uParam0->f_1, 2), 2);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_11, "OOXO", &(uParam0->f_7[0]), 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_11, "OXOO", &(uParam0->f_7[1]), 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_11, "REGISTER", uParam0->f_1, 0);
	ANIMSCENE::START_ANIM_SCENE(uParam0->f_11);
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_11, "pblMain", true);
}

int func_15(int iParam0)
{
	if (ANIMSCENE::_0x3FBC3F51BF12DFBF(iParam0) >= 1f)
	{
		return 1;
	}
	return 0;
}

bool func_16(vector3 vParam0, int iParam3)
{
	if (!VOLUME::_0x92A78D0BEDB332A3((Global_1914319->f_3[iParam3 /*446*/])->f_25))
	{
		return false;
	}
	return VOLUME::_0xF256A75210C5C0EB((Global_1914319->f_3[iParam3 /*446*/])->f_25, vParam0);
}

int func_17(int iParam0)
{
	int iVar0;

	if (iParam0 > 25)
	{
		return 0;
	}
	iVar0 = func_20(func_19(), iParam0);
	switch (iVar0)
	{
		case 41:
		case 82:
			return 1;
	}
	switch (iParam0)
	{
		case -1:
		case 1:
		case 2:
		case 4:
		case 5:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
			return 0;
	}
	return 1;
}

void func_18(var uParam0)
{
	uParam0->f_14 = 1;
}

int func_19()
{
	return Global_1894899->f_2;
}

int func_20(int iParam0, int iParam1)
{
	if (iParam1 == 11)
	{
		return 101;
	}
	else if (iParam1 == 32)
	{
		return 126;
	}
	else if (iParam1 == 34)
	{
		return 127;
	}
	switch (iParam0)
	{
		case 79:
			switch (iParam1)
			{
				case 0:
					return 128;
				case 6:
					return 130;
				case 27:
					return 131;
				case 26:
					return 129;
				case 19:
					return 59;
				default:
					break;
			}
			break;
		case 38:
			switch (iParam1)
			{
				case 15:
					return 6;
				case 33:
					return 11;
				case 29:
					return 106;
				case 30:
					return 107;
				case 3:
					return 7;
				case 8:
					return 9;
				case 10:
					return 10;
				case 9:
					return 13;
				case 2:
					return 14;
				case 1:
					return 15;
				case 31:
					return 108;
				case 22:
					return 16;
				case 7:
					return 17;
				case 21:
					return 12;
				default:
					break;
			}
			break;
		case 98:
			switch (iParam1)
			{
				case 0:
					return 132;
				case 6:
					return 134;
				case 27:
					return 135;
				case 26:
					return 133;
				case 19:
					return 57;
				default:
					break;
			}
			break;
		case 69:
			switch (iParam1)
			{
				case 4:
					return 18;
				case 3:
					return 19;
				case 2:
					return 20;
				case 1:
					return 21;
				case 31:
					return 105;
				default:
					break;
			}
			break;
		case 71:
			switch (iParam1)
			{
				case 0:
					return 137;
				case 6:
					return 139;
				case 27:
					return 140;
				case 26:
					return 138;
				case 19:
					return 56;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 141;
				case 6:
					return 143;
				case 27:
					return 144;
				case 26:
					return 142;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 17:
					return 22;
				case 31:
					return 118;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 15:
					return 36;
				case 8:
					return 37;
				case 33:
					return 52;
				case 29:
					return 109;
				case 10:
					return 38;
				case 30:
					return 110;
				case 0:
					return 39;
				case 4:
					return 41;
				case 3:
					return 42;
				case 6:
					return 43;
				case 9:
					return 44;
				case 2:
					return 45;
				case 1:
					return 46;
				case 31:
					return 111;
				case 22:
					return 51;
				case 7:
					return 47;
				case 12:
					return 48;
				case 13:
					return 49;
				case 14:
					return 50;
				case 18:
					return 55;
				case 21:
					return 54;
				default:
					break;
			}
			break;
		case 105:
			switch (iParam1)
			{
				case 15:
					return 25;
				case 33:
					return 33;
				case 29:
					return 112;
				case 10:
					return 26;
				case 4:
					return 27;
				case 3:
					return 28;
				case 6:
					return 29;
				case 2:
					return 30;
				case 31:
					return 113;
				case 22:
					return 32;
				case 1:
					return 31;
				default:
					break;
			}
			break;
		case 101:
			switch (iParam1)
			{
				case 9:
					return 35;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 18:
					return 4;
				default:
					break;
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 2:
					return 23;
				case 1:
					return 24;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 145;
				case 26:
					return 146;
				case 6:
					return 147;
				case 27:
					return 148;
				case 19:
					return 58;
				default:
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 29:
					return 114;
				case 33:
					return 66;
				case 10:
					return 60;
				case 3:
					return 61;
				case 20:
					return 62;
				case 9:
					return 63;
				case 31:
					return 115;
				case 22:
					return 64;
				case 2:
					return 65;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 18:
					return 5;
				default:
					break;
			}
			break;
		case 76:
			switch (iParam1)
			{
				case 15:
					return 68;
				case 8:
					return 69;
				case 33:
					return 70;
				case 29:
					return 102;
				case 10:
					return 72;
				case 30:
					return 103;
				case 0:
					return 73;
				case 3:
					return 74;
				case 6:
					return 75;
				case 9:
					return 76;
				case 2:
					return 77;
				case 31:
					return 104;
				case 1:
					return 78;
				case 22:
					return 80;
				case 20:
					return 79;
				default:
					break;
			}
			break;
		case 92:
			switch (iParam1)
			{
				case 30:
					return 116;
				case 4:
					return 82;
				case 2:
					return 86;
				case 1:
					return 85;
				case 31:
					return 117;
				case 9:
					return 84;
				default:
					break;
			}
			break;
		case 78:
			switch (iParam1)
			{
				case 29:
					return 120;
				case 6:
					return 0;
				case 2:
					return 2;
				case 31:
					return 121;
				case 22:
					return 1;
				case 1:
					return 3;
				default:
					break;
			}
			break;
		case 90:
		case 128:
			switch (iParam1)
			{
				case 18:
					return 34;
				default:
					break;
			}
			break;
		case 28:
			switch (iParam1)
			{
				case 2:
					return 89;
				case 1:
					return 88;
				case 3:
					return 87;
				default:
					break;
			}
			break;
		case 65:
			switch (iParam1)
			{
				case 31:
					return 119;
				default:
					break;
			}
			break;
		case 82:
			switch (iParam1)
			{
				case 31:
					return 122;
				default:
					break;
			}
			break;
		case 110:
			switch (iParam1)
			{
				case 31:
					return 124;
				default:
					break;
			}
			break;
		case 115:
			switch (iParam1)
			{
				case 33:
					return 93;
				case 3:
					return 90;
				case 6:
					return 91;
				case 9:
					return 94;
				case 10:
					return 92;
				default:
					break;
			}
			break;
		case 120:
			switch (iParam1)
			{
				case 3:
					return 95;
				case 2:
					return 96;
				default:
					break;
			}
			break;
		case 123:
			switch (iParam1)
			{
				case 4:
					return 98;
				default:
					break;
			}
			break;
		case 117:
			switch (iParam1)
			{
				case 31:
					return 123;
				case 2:
					return 99;
				case 1:
					return 100;
				default:
					break;
			}
			break;
		case 113:
			switch (iParam1)
			{
				case 18:
					return 67;
				default:
					break;
			}
			break;
		case 127:
			switch (iParam1)
			{
				case 4:
					return 125;
				default:
					break;
			}
			break;
	}
	return -1;
}

