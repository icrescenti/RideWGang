#region Local Var
	struct<4> ScriptParam_0 = { 0, 0, 0, 0 } ;
	var uScriptParam_4 = 0;
#endregion

void __EntryFunction__()
{
	struct<180> Var0;
	int iVar180;
	int iVar181;
	int iVar182;
	int iVar183;

	Var0.f_1.f_2 = 1086324736;
	Var0.f_1.f_11.f_1 = 20;
	Var0.f_1.f_33 = 20;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Var0.f_179))
		{
			OBJECT::DELETE_OBJECT(&(Var0.f_179));
		}
		if (!ScriptParam_0.f_3)
		{
			func_1(0);
		}
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	iVar180 = ScriptParam_0.f_2;
	if (!func_2(iVar180, 0))
	{
		iVar180 = 599184882; /* GXTEntry: "Beef Stew" */
	}
	if (func_3())
	{
		if (Global_1357549->f_1492 != 878851736)
		{
			iVar180 = Global_1357549->f_1492;
		}
		else
		{
			iVar181 = Global_1357549->f_1488;
			func_4(&iVar181, 0, 0, 24, 0, 0, 0, 0);
			if (func_5(iVar181, 1))
			{
				if (Global_40.f_4283.f_313 > 1)
				{
					Global_1357549->f_1492 = 1762298001; /* GXTEntry: "Beef and Eggs Stew" */
				}
				else
				{
					Global_1357549->f_1492 = 878851736; /* GXTEntry: "Beef Stew" */
				}
				iVar180 = Global_1357549->f_1492;
			}
			else
			{
				iVar180 = Global_1357549->f_1492;
			}
		}
	}
	STREAMING::_0xAC37644A538F7524(-703333072);
	STREAMING::REQUEST_MODEL(-1737141731, false);
	Var0.f_1 = iVar180;
	if (!ScriptParam_0.f_3)
	{
		func_1(1);
	}
	Var0.f_1.f_2 = 5f;
	while (!SCRIPTS::_0x9E4EF615E307FBBE() && !ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (!ScriptParam_0.f_3)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
			PAD::DISABLE_CONTROL_ACTION(0, -822242784, false);
			if (!ENTITY::DOES_ENTITY_EXIST(Var0.f_179))
			{
				if (STREAMING::HAS_MODEL_LOADED(-1737141731))
				{
					Var0.f_179 = OBJECT::CREATE_OBJECT(-1737141731, Global_36, false, true, false, false, true);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Var0.f_179, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 7966), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0, 0);
					ENTITY::SET_ENTITY_VISIBLE(Var0.f_179, false);
				}
			}
			else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -701457528))
			{
				ENTITY::SET_ENTITY_VISIBLE(Var0.f_179, true);
			}
			else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1402617856))
			{
				ENTITY::SET_ENTITY_VISIBLE(Var0.f_179, false);
			}
		}
		if (IntToFloat(Var0.f_1.f_1) < Var0.f_1.f_2)
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 442509369))
			{
				Var0.f_1.f_1 = (1 + Var0.f_1.f_1);
				func_6(&(Var0.f_1), IntToFloat(Var0.f_1.f_1) >= Var0.f_1.f_2);
			}
		}
		switch (Var0)
		{
			case 0:
				if (func_2(Var0.f_1, 0))
				{
					func_7(&(Var0.f_1));
				}
				func_8(&Var0, 1);
				break;
			case 1:
				iVar182 = TASK::_0x6AA3DCA2C6F5EB6D(Global_35);
				if (iVar182 != -583731576)
				{
					if (iVar182 == 171451159 || iVar182 == 1881103362)
					{
						if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) || TASK::_0x0C3CB2E600C8977D(Global_35, 0))
						{
							TASK::_0xB35370D5353995CB(Global_35, -583731576, 1f);
						}
					}
				}
				else if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
				{
					iVar183 = TASK::_0x2D0571BB55879DA2(Global_35);
					if (iVar183 != -1177373461)
					{
						if (iVar183 == -447259824)
						{
							TASK::_0xB35370D5353995CB(Global_35, 1881103362, 1f);
						}
					}
					else
					{
						TASK::_0xB35370D5353995CB(Global_35, 171451159, 1f);
					}
				}
				if (IntToFloat(Var0.f_1.f_1) >= (Var0.f_1.f_2 - 1f) || ((MISC::GET_FRAME_COUNT() % 10) == 0 && ENTITY::GET_ENTITY_SUBMERGED_LEVEL(Global_35) > 0.2f))
				{
					func_8(&Var0, 2);
				}
				break;
			case 2:
				iVar182 = TASK::_0x6AA3DCA2C6F5EB6D(Global_35);
				PED::_0xCB9401F918CB0F75(Global_35, "HIDE_STEW_DROP_PROMPT", 1, 1);
				if (iVar182 == -583731576 || iVar182 == 1881103362)
				{
					PED::_0xCB9401F918CB0F75(Global_35, "HIDE_STEW_EAT_PROMPT", 1, 1);
					if (!func_9(-1))
					{
						if (iVar182 == 1881103362)
						{
							TASK::_0xB35370D5353995CB(Global_35, -805756414, 1048576000);
						}
						else
						{
							TASK::_0xB35370D5353995CB(Global_35, -616782017, 1048576000);
						}
						func_8(&Var0, 3);
					}
				}
				else if (iVar182 == 171451159 || (iVar182 == 1372498217 && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1160706425)))
				{
					PED::_0xCB9401F918CB0F75(Global_35, "HIDE_STEW_EAT_PROMPT", 1, 1);
					if (!func_9(-1))
					{
						PED::_0x6D07B371E9439019(Global_35);
						PED::_0xD65FDC686A031C83(Global_35, -1134349867, 1.5f);
					}
				}
				break;
			case 3:
				PED::_0xCB9401F918CB0F75(Global_35, "HIDE_STEW_EAT_PROMPT", 1, 1);
				PED::_0xCB9401F918CB0F75(Global_35, "HIDE_STEW_DROP_PROMPT", 1, 1);
				break;
		}
		BUILTIN::WAIT(0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Var0.f_179))
	{
		OBJECT::DELETE_OBJECT(&(Var0.f_179));
	}
	if (!ScriptParam_0.f_3)
	{
		func_1(0);
	}
	if (Global_1357549->f_1492 == 878851736)
	{
	}
	else
	{
		Global_1357549->f_1492 = 878851736; /* GXTEntry: "Beef Stew" */
	}
}

void func_1(int iParam0)
{
	PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 5, 0, iParam0);
	PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 50, 0, iParam0);
	PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 49, 0, iParam0);
	PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 11, 0, iParam0);
}

bool func_2(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

bool func_3()
{
	return Global_1894899 & 2 != 0;
}

void func_4(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_10(*uParam0);
	iVar1 = func_11(*uParam0);
	iVar2 = func_12(*uParam0);
	iVar3 = func_13(*uParam0);
	iVar4 = func_14(*uParam0);
	iVar5 = func_15(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_16(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_16(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	if (!bParam7)
	{
		iVar0 = (iVar0 + iParam6);
	}
	func_17(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_5(int iParam0, bool bParam1)
{
	return func_19(func_18(), iParam0, bParam1);
}

void func_6(var uParam0, bool bParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	int iVar11;

	if ((func_20(*uParam0, 1573112293) || func_20(*uParam0, 672467738)) || func_20(*uParam0, -550842268))
	{
		bVar8 = true;
	}
	ATTRIBUTE::_0xD962F8579D702DB5();
	Global_1935496->f_26 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_11)
	{
		if (-943921969 == (uParam0->f_33[iVar0 /*7*/])->f_1)
		{
			fVar1 = func_21(0, (IntToFloat((uParam0->f_33[iVar0 /*7*/])->f_2) / uParam0->f_2));
			func_22((IntToFloat((uParam0->f_33[iVar0 /*7*/])->f_2) / uParam0->f_2), 1);
			func_23(0, 7000);
			bVar10 = true;
		}
		else if (-1104847406 == (uParam0->f_33[iVar0 /*7*/])->f_1)
		{
			fVar2 = func_21(2, (IntToFloat((uParam0->f_33[iVar0 /*7*/])->f_2) / uParam0->f_2));
			func_24((IntToFloat((uParam0->f_33[iVar0 /*7*/])->f_2) / uParam0->f_2));
			func_23(2, 7000);
			bVar9 = true;
		}
		else if (381158954 == (uParam0->f_33[iVar0 /*7*/])->f_1)
		{
			fVar3 = func_21(1, (IntToFloat((uParam0->f_33[iVar0 /*7*/])->f_2) / uParam0->f_2));
			func_25((IntToFloat((uParam0->f_33[iVar0 /*7*/])->f_2) / uParam0->f_2));
			func_23(1, 7000);
		}
		else if (-416929031 == (uParam0->f_33[iVar0 /*7*/])->f_1)
		{
			fVar4 = func_26((IntToFloat((uParam0->f_33[iVar0 /*7*/])->f_2) / uParam0->f_2), ((uParam0->f_33[iVar0 /*7*/])->f_5 / uParam0->f_2));
			if (func_27(&(uParam0->f_9), &(uParam0->f_10), fVar4))
			{
				func_28(fVar4, 1, bVar8, 1);
				func_23(0, 7000);
			}
			bVar10 = true;
		}
		else if (1857353317 == (uParam0->f_33[iVar0 /*7*/])->f_1)
		{
			fVar5 = func_26((IntToFloat((uParam0->f_33[iVar0 /*7*/])->f_2) / uParam0->f_2), ((uParam0->f_33[iVar0 /*7*/])->f_5 / uParam0->f_2));
			if (func_27(&(uParam0->f_9), &(uParam0->f_10), fVar5))
			{
				func_29(fVar5, 1, bVar8, 1);
				func_23(2, 7000);
				bVar9 = true;
			}
		}
		else if (1681823811 == (uParam0->f_33[iVar0 /*7*/])->f_1)
		{
			fVar6 = func_26((IntToFloat((uParam0->f_33[iVar0 /*7*/])->f_2) / uParam0->f_2), ((uParam0->f_33[iVar0 /*7*/])->f_5 / uParam0->f_2));
			if (func_27(&(uParam0->f_9), &(uParam0->f_10), fVar6))
			{
				func_30(fVar6, 1, bVar8, 1);
				func_23(1, 7000);
			}
		}
		else if (-816334026 == (uParam0->f_33[iVar0 /*7*/])->f_1)
		{
			func_31((BUILTIN::TO_FLOAT((uParam0->f_33[iVar0 /*7*/])->f_2) / uParam0->f_2), 1 == uParam0->f_1);
		}
		else if (bParam1)
		{
			if (2062242710 == (uParam0->f_33[iVar0 /*7*/])->f_1)
			{
				fVar7 = func_32(BUILTIN::TO_FLOAT((uParam0->f_33[iVar0 /*7*/])->f_3), (uParam0->f_33[iVar0 /*7*/])->f_4);
				func_33(19, fVar7);
				bVar10 = true;
			}
			else if (-826379728 == (uParam0->f_33[iVar0 /*7*/])->f_1)
			{
				fVar7 = func_32(BUILTIN::TO_FLOAT((uParam0->f_33[iVar0 /*7*/])->f_3), (uParam0->f_33[iVar0 /*7*/])->f_4);
				func_33(20, fVar7);
				bVar9 = true;
			}
			else if (-1191740624 == (uParam0->f_33[iVar0 /*7*/])->f_1)
			{
				fVar7 = func_32(BUILTIN::TO_FLOAT((uParam0->f_33[iVar0 /*7*/])->f_3), (uParam0->f_33[iVar0 /*7*/])->f_4);
				func_33(18, fVar7);
			}
			else if (1869697234 == (uParam0->f_33[iVar0 /*7*/])->f_1)
			{
				fVar7 = func_32(BUILTIN::TO_FLOAT((uParam0->f_33[iVar0 /*7*/])->f_3), (uParam0->f_33[iVar0 /*7*/])->f_4);
				func_33(0, fVar7);
				bVar10 = true;
			}
			else if (1342237631 == (uParam0->f_33[iVar0 /*7*/])->f_1)
			{
				fVar7 = func_32(BUILTIN::TO_FLOAT((uParam0->f_33[iVar0 /*7*/])->f_3), (uParam0->f_33[iVar0 /*7*/])->f_4);
				func_33(2, fVar7);
				bVar9 = true;
			}
			else if (-1240225157 == (uParam0->f_33[iVar0 /*7*/])->f_1)
			{
				fVar7 = func_32(BUILTIN::TO_FLOAT((uParam0->f_33[iVar0 /*7*/])->f_3), (uParam0->f_33[iVar0 /*7*/])->f_4);
				func_33(1, fVar7);
			}
		}
		iVar0++;
	}
	if (bVar10)
	{
		if (fVar4 > 0f || fVar1 > 0f)
		{
			iVar11 = 1;
		}
	}
	func_34(*uParam0, bParam1, bVar9, iVar11);
	func_35(uParam0);
	uParam0->f_3 = (uParam0->f_3 + fVar1);
	uParam0->f_4 = (uParam0->f_4 + fVar2);
	uParam0->f_5 = (uParam0->f_5 + fVar3);
	uParam0->f_6 = (uParam0->f_6 + fVar4);
	uParam0->f_7 = (uParam0->f_7 + fVar5);
	uParam0->f_8 = (uParam0->f_8 + fVar6);
}

void func_7(var uParam0)
{
	int iVar0;

	ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(*uParam0, &(uParam0->f_11));
	iVar0 = 0;
	while (iVar0 < uParam0->f_11)
	{
		ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(&(uParam0->f_11.f_1[iVar0]), uParam0->f_33[iVar0 /*7*/]);
		iVar0++;
	}
}

void func_8(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_9(int iParam0)
{
	if (Global_1327590->f_19744 == -1)
	{
		return 0;
	}
	if (iParam0 != -1)
	{
		if (func_36(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

var func_10(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_37(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_11(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_12(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_13(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_14(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_15(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_16(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
		default:
			break;
	}
	return 30;
}

void func_17(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_38(uParam0, iParam6);
	func_39(uParam0, iParam5);
	func_40(uParam0, iParam4);
	func_41(uParam0, iParam3);
	func_42(uParam0, iParam2);
	func_43(uParam0, iParam1);
}

int func_18()
{
	return &Global_1899515;
}

bool func_19(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_44(iParam1) || !func_44(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

int func_20(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(iParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

float func_21(int iParam0, float fParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;

	switch (iParam0)
	{
		case 0:
			fVar0 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(Global_35));
			fVar1 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, 0));
			break;
		case 1:
			fVar0 = PED::_0x775A1CA7893AA8B5(Global_35);
			fVar1 = PED::_0xCB42AFE2B613EE55(Global_35);
			break;
		case 2:
			fVar0 = PLAYER::_0xA81D24AE0AF99A5E(PLAYER::GET_PLAYER_INDEX());
			fVar1 = PLAYER::_0x592F58BC4D2A2CF3(PLAYER::GET_PLAYER_INDEX(), 0);
			break;
	}
	fVar3 = (fParam1 + fVar0);
	if (fVar3 > fVar1)
	{
		fVar2 = (fVar1 - fVar0);
	}
	else
	{
		fVar2 = (fVar3 - fVar0);
	}
	return (fVar2 / 2f);
}

void func_22(float fParam0, int iParam1)
{
	float fVar0;
	int iVar1;

	fVar0 = (50f * fParam0);
	iVar1 = BUILTIN::ROUND((fVar0 + IntToFloat(ENTITY::GET_ENTITY_HEALTH(Global_35))));
	if (iParam1 && fVar0 < 0f)
	{
		ENTITY::_0x835F131E7DC8F97A(Global_35, fVar0, 0, 0);
	}
	else if (fParam0 <= 0f || iVar1 > ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, 0))
	{
		ENTITY::_SET_ENTITY_HEALTH(Global_35, ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, 0), 0);
	}
	else
	{
		ENTITY::_SET_ENTITY_HEALTH(Global_35, iVar1, 0);
	}
}

void func_23(int iParam0, int iParam1)
{
	Global_1347477->f_9[iParam0 /*2*/] = (MISC::GET_GAME_TIMER() + iParam1);
}

void func_24(float fParam0)
{
	PLAYER::_0x51345AE20F22C261(PLAYER::PLAYER_ID(), (fParam0 * 14f), 0, 0, 0);
}

void func_25(float fParam0)
{
	int iVar0;

	if (func_45() != -1)
	{
		return;
	}
	if (fParam0 == -1f)
	{
		PED::_0x675680D089BFA21F(Global_35, 100f);
	}
	else
	{
		iVar0 = 8;
		PED::_0xC3D4B754C0E86B9E(Global_35, (fParam0 * IntToFloat(iVar0)));
	}
}

float func_26(float fParam0, float fParam1)
{
	if (fParam1 != 0f)
	{
		return ((fParam1 / 100f) * 200f);
	}
	return ((fParam0 / 8f) * 200f);
}

int func_27(var uParam0, var uParam1, float fParam2)
{
	if (func_45() != -1)
	{
		return 1;
	}
	if (!func_46(0))
	{
		return 1;
	}
	if (fParam2 <= 0f)
	{
		return 1;
	}
	if (*uParam0)
	{
		return !*uParam1;
	}
	*uParam0 = 1;
	if (!Global_1347477->f_191.f_3)
	{
		func_47(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
		Global_1347477->f_191.f_3 = 1;
	}
	if (Global_1347477->f_191 < MISC::GET_GAME_TIMER())
	{
		Global_1347477->f_191.f_1 = 0;
	}
	Global_1347477->f_191.f_1++;
	if (Global_1347477->f_191.f_1 > 3)
	{
		if (Global_1347477->f_191.f_2 < MISC::GET_GAME_TIMER())
		{
			func_48(0, 1);
			Global_1347477->f_191.f_2 = (MISC::GET_GAME_TIMER() + 480000);
		}
		func_47(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
		*uParam1 = 1;
		return 0;
	}
	Global_1347477->f_191 = (MISC::GET_GAME_TIMER() + 480000);
	*uParam1 = 0;
	return 1;
}

void func_28(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;

	if (func_45() == 0)
	{
		func_49(0, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_50(0);
	if (bParam1)
	{
		func_51(fVar0);
	}
	if (fVar0 >= (100f - 1f))
	{
		func_52();
	}
	if (bParam2)
	{
		fParam0 = func_53(0, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_55(0, func_54(fParam0, -100f, 100f), bParam1);
}

void func_29(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;

	if (func_45() == 0)
	{
		func_49(2, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_50(2);
	if (bParam1)
	{
		func_51(fVar0);
	}
	if (bParam2)
	{
		fParam0 = func_53(2, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_55(2, func_54(fParam0, -100f, 100f), bParam1);
}

void func_30(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;

	if (func_45() == 0)
	{
		func_49(1, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_50(1);
	if (bParam1)
	{
		func_51(fVar0);
	}
	if (bParam2)
	{
		fParam0 = func_53(1, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_55(1, func_54(fParam0, -100f, 100f), bParam1);
}

void func_31(float fParam0, bool bParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;

	fVar0 = func_56(13);
	if (fParam0 > 10f)
	{
		fParam0 = 10f;
	}
	if (!func_57(17))
	{
		return;
	}
	if (func_58())
	{
		iVar1 = func_59(fVar0);
		fVar0 = (fVar0 + fParam0);
		iVar2 = func_59(fVar0);
		if (iVar1 != iVar2)
		{
			Global_1347477->f_195 = func_18();
			func_4(&(Global_1347477->f_195), 0, 0, 1, 0, 0, 0, 0);
		}
		func_60(&fVar3, &fVar4);
		func_61(13, func_54(fVar0, fVar3, fVar4));
	}
	if (bParam1)
	{
		Global_40.f_11095.f_66++;
		if (5 == Global_40.f_11095.f_66)
		{
			func_48(94, 0);
		}
	}
}

float func_32(float fParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return (fParam0 * 0.033f);
		case 1:
			return (fParam0 * 2f);
		case 2:
			return (fParam0 * 120f);
		case 3:
			return (fParam0 * 2880f);
		default:
			break;
	}
	return fParam0;
}

void func_33(int iParam0, float fParam1)
{
	int iVar0;
	char* sVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (fParam1 == -1f)
	{
		if (func_62(iParam0))
		{
			fParam1 = 30f;
		}
		else
		{
			fParam1 = 30f;
		}
	}
	else if (fParam1 <= 0f)
	{
		return;
	}
	fParam1 = (fParam1 * (1f + Global_40.f_11095.f_70));
	switch (iParam0)
	{
		case 0:
			sVar1 = func_63(iParam0);
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar1))
			{
				GRAPHICS::ANIMPOSTFX_PLAY(sVar1);
			}
			func_64(-1);
			func_65(0);
			ATTRIBUTE::_0xF6A7C08DF2E28B28(iVar0, iParam0, fParam1, 1);
			Global_40.f_11095.f_4[0 /*2*/] = fParam1;
			break;
		case 1:
			sVar1 = func_63(iParam0);
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar1))
			{
				GRAPHICS::ANIMPOSTFX_PLAY(sVar1);
			}
			func_66(-1);
			ATTRIBUTE::_0xF6A7C08DF2E28B28(iVar0, iParam0, fParam1, 1);
			Global_40.f_11095.f_4[1 /*2*/] = fParam1;
			break;
		case 2:
			sVar1 = func_63(iParam0);
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar1))
			{
				GRAPHICS::ANIMPOSTFX_PLAY(sVar1);
			}
			func_67(-1);
			ATTRIBUTE::_0xF6A7C08DF2E28B28(iVar0, iParam0, fParam1, 1);
			Global_40.f_11095.f_4[2 /*2*/] = fParam1;
			break;
		case 19:
			func_68(0, 1, 1);
			ATTRIBUTE::_0xF6A7C08DF2E28B28(iVar0, iParam0, fParam1, 1);
			(Global_40.f_11095.f_4[0 /*2*/])->f_1 = fParam1;
			break;
		case 18:
			func_68(1, 1, 1);
			ATTRIBUTE::_0xF6A7C08DF2E28B28(iVar0, iParam0, fParam1, 1);
			(Global_40.f_11095.f_4[1 /*2*/])->f_1 = fParam1;
			break;
		case 20:
			func_68(2, 1, 1);
			ATTRIBUTE::_0xF6A7C08DF2E28B28(iVar0, iParam0, fParam1, 1);
			(Global_40.f_11095.f_4[2 /*2*/])->f_1 = fParam1;
			break;
		default:
			break;
	}
}

void func_34(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!bParam1)
	{
		return;
	}
	if (iParam3 || func_20(iParam0, -537818634))
	{
		func_70(func_69(-704089207), 1);
	}
	if (func_20(iParam0, -1457797660))
	{
		func_70(func_69(-1909697259), 1);
	}
	if (func_20(iParam0, 1573112293))
	{
		func_72(func_71(&iParam0), 1);
	}
	if (func_20(iParam0, 1939071949))
	{
		func_70(func_73(1368284188, -939665347), 1);
	}
	switch (iParam0)
	{
		case -1921080134:
		case -635441454:
		case 1448771675:
			func_70(func_73(1368284188, -2049431929), 1);
			break;
	}
	switch (iParam0)
	{
		case 299161628:
			func_70(func_73(1368284188, 304473406), 1);
			break;
		case -1907044919:
		case 688258043:
			func_70(func_73(1368284188, 894597474), 1);
			break;
		case -541584777:
		case 206762213:
			func_70(func_73(1368284188, 2119695263), 1);
			break;
		case -653299524:
		case -486559882:
		case 376981280:
			func_70(func_73(1368284188, -1791969490), 1);
			break;
		case -324053813:
		case 998010398:
			func_70(func_73(1368284188, -155567636), 1);
			break;
		case -2042563684:
		case -834705084:
			func_70(func_73(1368284188, 497247514), 1);
			break;
		case 433340626:
		case 1895068170:
			func_70(func_73(1368284188, 1199394531), 1);
			break;
		case 1929383243:
		case 2036955137:
			func_70(func_73(1368284188, -868741806), 1);
			break;
		case -1635450397:
		case 1831763320:
			func_70(func_73(1368284188, -208442209), 1);
			break;
	}
	if (func_45() == -1)
	{
		if (iParam0 == -1976480343)
		{
			func_70(func_73(1368284188, 595572217), 1);
		}
	}
	if (bParam2)
	{
		func_70(func_69(704570463), 1);
	}
}

void func_35(var uParam0)
{
	if (!uParam0->f_176)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_174))
		{
			ENTITY::_0x18FF3110CF47115D(uParam0->f_174, 2, 0);
			uParam0->f_176 = 1;
		}
	}
}

bool func_36(int iParam0)
{
	if (Global_1327590->f_19744 == -1)
	{
		return false;
	}
	return Global_1327590->f_19744 == iParam0;
}

int func_37(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_38(var uParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT((1898 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT((iParam1 - 1898), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_39(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 62914560);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_40(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_11(*uParam0);
	iVar1 = func_10(*uParam0);
	if (iParam1 < 1 || iParam1 > func_16(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4063232);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_41(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 126976);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_42(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4032);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_43(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 63);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

int func_44(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_15(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_14(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_13(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_10(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return 0;
	}
	iVar4 = func_11(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_12(iParam0);
	if (iVar5 < 1 || iVar5 > func_16(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_45()
{
	return Global_1572887->f_12;
}

int func_46(int iParam0)
{
	if (func_74())
	{
		return 0;
	}
	return func_75(((*Global_1347702)[58 /*49*/])->f_15, 1);
}

var func_47(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<7> Var0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_76(uParam0, &Var0);
}

void func_48(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_77(iParam0, &iVar0, &iVar1);
	if (!func_78(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_79(iVar0, iVar1);
}

void func_49(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		fParam1 = func_53(iParam0, fParam1, 1);
	}
	func_81(iParam0, (func_80(iParam0, 2) + fParam1), bParam2, bParam3, 1, 2);
}

float func_50(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

void func_51(float fParam0)
{
	if (fParam0 >= (100f - 1f))
	{
		AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
	}
	else
	{
		AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);
	}
}

void func_52()
{
	Global_40.f_11095.f_11[14] = 100f;
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, 14, 100);
	Global_40.f_11095.f_42 = 60;
}

float func_53(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_18();
	func_82(&iVar0, 0, 0, 0, 1, 0, 0);
	iVar1 = func_83(iParam0, 2);
	if (func_19(iVar0, func_84(iParam0, 2), 1))
	{
		func_85(iParam0, 0, 2);
		iVar1 = 0;
	}
	if (iVar1 >= 2)
	{
		func_48(88, bParam2);
		return 0f;
	}
	func_86(iParam0, func_18(), 2);
	func_85(iParam0, iVar1 + 1, 2);
	return fParam1;
}

float func_54(float fParam0, float fParam1, float fParam2)
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

void func_55(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;

	if (func_45() != -1)
	{
		return;
	}
	if (!func_57(15))
	{
		return;
	}
	Global_40.f_11095[iParam0] = fParam1;
	iVar0 = func_87(BUILTIN::CEIL(&(Global_40.f_11095[iParam0])));
	ATTRIBUTE::_0xC6258F41D86676E0(Global_35, func_88(iParam0), iVar0);
	func_90(func_89(iParam0), (100f * (BUILTIN::TO_FLOAT(iVar0) / 100f)), 0);
	if (((fParam1 <= func_91(15) && iParam0 == 1) && PED::IS_PED_ON_FOOT(Global_35)) && !PED::IS_PED_SWIMMING(Global_35))
	{
		func_48(84, 1);
	}
	if (fParam1 <= -99.999f)
	{
		func_48(func_92(iParam0), 1);
	}
	sVar1 = func_93(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		PED::_0x437C08DB4FEBE2BD(Global_35, sVar1, BUILTIN::TO_FLOAT(iVar0), -1);
	}
}

float func_56(int iParam0)
{
	return &(Global_40.f_11095.f_11[iParam0]);
}

int func_57(int iParam0)
{
	if (!func_94(iParam0))
	{
		return 0;
	}
	return func_95(iParam0);
}

int func_58()
{
	if (func_45() != -1)
	{
		return 0;
	}
	if (Global_1347477->f_200)
	{
		return 0;
	}
	if (Global_1347477->f_195 == -15)
	{
		return 1;
	}
	return func_5(Global_1347477->f_195, 0);
}

int func_59(float fParam0)
{
	return BUILTIN::ROUND(((fParam0 / 100f) * BUILTIN::TO_FLOAT(10)));
}

void func_60(var uParam0, var uParam1)
{
	if (!func_96())
	{
		*uParam0 = -100f;
		*uParam1 = 100f;
		return;
	}
	*uParam0 = Global_40.f_11095.f_40;
	*uParam1 = Global_40.f_11095.f_41;
}

void func_61(int iParam0, float fParam1)
{
	int iVar0;
	bool bVar1;
	char* sVar2;

	Global_40.f_11095.f_11[iParam0] = fParam1;
	if (iParam0 == 12)
	{
		bVar1 = fParam1 != 0f;
		sVar2 = func_97(fParam1 < 0f, "rpg_cold", "rpg_hot");
		func_98(1, bVar1, 1, sVar2);
		func_99(!bVar1, fParam1 < 0f, bVar1);
		iVar0 = func_87(BUILTIN::CEIL(&(Global_40.f_11095.f_11[iParam0])));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0);
		func_100();
	}
	else if (iParam0 == 10)
	{
		iVar0 = func_87(BUILTIN::CEIL(&(Global_40.f_11095.f_11[iParam0])));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0);
	}
	else if (iParam0 == 16)
	{
		iVar0 = func_87(BUILTIN::CEIL(&(Global_40.f_11095.f_11[iParam0])));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0 * 100);
	}
	else if (iParam0 == 13)
	{
	}
}

int func_62(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 1;
		case 2:
			return 1;
		default:
			break;
	}
	return 0;
}

char* func_63(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PlayerOverpower";
		case 1:
			return "PlayerOverpower";
		case 2:
			return "PlayerOverpower";
		default:
			break;
	}
	return "";
}

void func_64(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = PED::_0x16F2C8C084AB2092(iVar0);
	}
	iVar1 = func_101(2);
	func_102(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_65(bool bParam0)
{
	if (func_45() != -1)
	{
		return;
	}
	if (bParam0 && ATTRIBUTE::_0x200373A8DF081F22(Global_35, 0))
	{
		return;
	}
	if (Global_40.f_11095.f_43 == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		func_48(89, 1);
		ATTRIBUTE::_0xFB6E111908502871(5);
	}
	else
	{
		func_48(90, 1);
		ATTRIBUTE::_0x3FC4C027FD0936F4(5);
	}
	func_103(1, bParam0, 1);
	func_100();
	Global_40.f_11095.f_43 = bParam0;
}

void func_66(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = PED::_0xFC3B580C4380B5B7(iVar0);
	}
	iVar1 = func_104(2);
	func_105(BUILTIN::TO_FLOAT((iParam0 * iVar1)));
}

void func_67(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_ID();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = PLAYER::_0x57D9991DC1334151(iVar0);
	}
	iVar1 = func_106(2);
	func_107(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_68(int iParam0, bool bParam1, bool bParam2)
{
	func_81(iParam0, 100f, bParam1, bParam2, 1, 2);
}

struct<2> func_69(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

void func_70(var uParam0, var uParam1, int iParam2)
{
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

int func_71(int iParam0)
{
	switch (*iParam0)
	{
		case 1433048902:
			return 2;
		case -1602657245:
			return 4;
		case -1991037110:
			return 5;
		case 1047281747:
			return 6;
		case -398744080:
			return 7;
		case -1066874997:
			return 8;
		case -2085219828:
			return 11;
		case 2064962445:
			return 12;
		case -1620920647:
			return 15;
		case -1664530975:
			return 16;
		case -597058368:
			return 20;
		case 128702355:
			return 23;
		case -2051332199:
			return 26;
		case 546981776:
			return 27;
		case -2013384490:
			return 28;
		case 228922461:
			return 29;
		case -746674788:
			return 31;
		case 599861917:
			return 33;
		case -1781387050:
			return 34;
		case 2006811763:
			return 37;
		case -90546043:
			return 38;
		case 1216456215:
			return 39;
		case 746300881:
			return 40;
		case -435006002:
			return 41;
		case -624139784:
			return 42;
		case -529638012:
			return 43;
		case -651064726:
			return 1;
		case -404270094:
			return 9;
		case -1521783510:
			return 10;
		case 1714875242:
			return 14;
		case 2093126853:
			return 17;
		case 728781265:
			return 21;
		case 1794857344:
			return 22;
		case 1952409553:
			return 24;
		case -150591160:
			return 25;
		case 1019229063:
			return 30;
		case -323969289:
			return 32;
		case 927763737:
			return 35;
		case 1504361882:
			return 36;
	}
	return 0;
}

void func_72(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_73(-372368982, func_108(iParam0)) };
	STATS::_0x6A0184E904CDF25E(&Var0, iParam1);
	func_70(func_109(106002964), iParam1);
}

struct<2> func_73(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

int func_74()
{
	if (func_45() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == 11966224)
	{
		return 1;
	}
	return 0;
}

int func_75(int iParam0, bool bParam1)
{
	switch (func_110(iParam0))
	{
		case 5:
			return 1;
		case 6:
			if (bParam1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

var func_76(var uParam0, var uParam1)
{
	return AUDIO::_PLAY_AMBIENT_SPEECH1(uParam0, uParam1);
}

void func_77(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

int func_78(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return 0;
	}
	if (func_111(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_112(iParam0))
	{
		return 0;
	}
	if (func_113(iParam0))
	{
		return 0;
	}
	if ((Global_1898164->f_163 && !func_114(iParam0, 1)) || func_115(32768))
	{
		if (!func_114(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return 0;
		}
	}
	if (!func_116())
	{
		return 0;
	}
	return 1;
}

void func_79(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

float func_80(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_117();
	}
	switch (iParam1)
	{
		case 0:
			return &(Global_1955569->f_753.f_5[iParam0 /*3*/]);
		case 1:
			return &(Global_1955569->f_866.f_2.f_5[iParam0 /*3*/]);
		default:
			break;
	}
	return -1f;
}

int func_81(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (iParam5 == 2)
	{
		iParam5 = func_117();
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (bParam2)
	{
		if (fParam1 >= 100f)
		{
			AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
		}
		else
		{
			AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);
		}
	}
	if (bParam3)
	{
		func_118(iParam0, 7000, iParam5);
	}
	if (fParam1 > 100f)
	{
		fParam1 = 100f;
	}
	else if (fParam1 < 0f)
	{
		fParam1 = 0f;
	}
	func_119(iVar0, iParam0, fParam1);
	func_120(iParam0, fParam1, bParam4, iParam5);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		ATTRIBUTE::_0xC6258F41D86676E0(iVar0, func_88(iParam0), BUILTIN::CEIL(fParam1));
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_82(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = func_10(*iParam0);
	iVar1 = func_11(*iParam0);
	iVar2 = func_12(*iParam0);
	iVar3 = func_13(*iParam0);
	iVar4 = func_14(*iParam0);
	iVar5 = func_15(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 - iParam1);
	while (iVar5 < 0)
	{
		iParam2++;
		iVar5 += 60;
	}
	iVar4 = (iVar4 - iParam2);
	while (iVar4 < 0)
	{
		iParam3++;
		iVar4 += 60;
	}
	iVar3 = (iVar3 - iParam3);
	while (iVar3 < 0)
	{
		iParam4++;
		iVar3 += 24;
	}
	iVar2 = (iVar2 - iParam4);
	while (iVar2 <= 0)
	{
		iParam5++;
		iVar6 = (iVar1 - 1);
		if (iVar6 < 0)
		{
			iParam6++;
			iVar1 += 12;
		}
		iVar7 = func_16(iVar6, iVar0);
		iVar2 = (iVar2 + iVar7);
	}
	iVar1 = (iVar1 - iParam5);
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 = (iVar0 - iParam6);
	func_17(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_83(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_117();
	}
	switch (iParam1)
	{
		case 0:
			return (Global_1955569->f_753.f_5[iParam0 /*3*/])->f_2;
		case 1:
			return (Global_1955569->f_866.f_2.f_5[iParam0 /*3*/])->f_2;
		default:
			break;
	}
	return -1;
}

int func_84(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_117();
	}
	switch (iParam1)
	{
		case 0:
			return (Global_1955569->f_753.f_5[iParam0 /*3*/])->f_1;
		case 1:
			return (Global_1955569->f_866.f_2.f_5[iParam0 /*3*/])->f_1;
		default:
			break;
	}
	return -15;
}

void func_85(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_117();
	}
	switch (iParam2)
	{
		case 0:
			(Global_1955569->f_753.f_5[iParam0 /*3*/])->f_2 = iParam1;
			break;
		case 1:
			(Global_1955569->f_866.f_2.f_5[iParam0 /*3*/])->f_2 = iParam1;
			break;
		default:
			break;
	}
}

void func_86(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_117();
	}
	switch (iParam2)
	{
		case 0:
			(Global_1955569->f_753.f_5[iParam0 /*3*/])->f_1 = iParam1;
			break;
		case 1:
			(Global_1955569->f_866.f_2.f_5[iParam0 /*3*/])->f_1 = iParam1;
			break;
		default:
			break;
	}
}

int func_87(int iParam0)
{
	float fVar0;

	fVar0 = (BUILTIN::TO_FLOAT(iParam0 + 100) / 200f);
	return BUILTIN::CEIL((100f * fVar0));
}

int func_88(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 0;
		case 2:
			return 2;
		default:
			break;
	}
	return 0;
}

int func_89(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 3;
		default:
			break;
	}
	return 0;
}

void func_90(int iParam0, float fParam1, int iParam2)
{
	char* sVar0;

	sVar0 = func_121(iParam0, 0, 0, 0);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_12[0]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_16[0]), iParam2);
}

float func_91(int iParam0)
{
	float fVar0;

	fVar0 = (BUILTIN::TO_FLOAT(iParam0) / 100f);
	return ((fVar0 * 200f) - 100f);
}

int func_92(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 87;
		case 1:
			return 85;
		case 2:
			return 86;
		default:
			break;
	}
	return -1;
}

char* func_93(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HealthCoreValue";
		case 1:
			return "StaminaCoreValue";
		case 2:
			return "DeadEyeCoreValue";
		default:
			break;
	}
	return "";
}

int func_94(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_95(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_40.f_7857[iVar1]), iVar2);
}

int func_96()
{
	return 1;
	if (Global_1572887->f_12 == 0)
	{
		return 1;
	}
	return Global_40.f_1;
}

char* func_97(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

void func_98(int iParam0, bool bParam1, int iParam2, char* sParam3)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_8, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_7, iParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_9, sParam3);
}

void func_99(bool bParam0, bool bParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_121(0, 1, bParam0, bParam1);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_12[1]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_16[1]), bParam2);
	if (bParam0)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[1]), 0);
	}
	else if (bParam1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_20[1]), "rpg_cold");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_24[1]), "pausemenu_player");
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[1]), 1);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_20[1]), "rpg_hot");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_24[1]), "pausemenu_player");
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[1]), 1);
	}
}

void func_100()
{
	func_122();
	func_123();
	func_124();
}

int func_101(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_117();
	}
	switch (iParam0)
	{
		case 0:
			return Global_1955569->f_850;
		case 1:
			return Global_1955569->f_866.f_115;
		default:
			break;
	}
	return -1;
}

void func_102(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = PLAYER::PLAYER_PED_ID();
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	ENTITY::_0x835F131E7DC8F97A(iParam1, fParam0, 0, 0);
}

void func_103(int iParam0, bool bParam1, int iParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_6, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_5, iParam2);
}

int func_104(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_117();
	}
	switch (iParam0)
	{
		case 0:
			return Global_1955569->f_850.f_2;
		case 1:
			return Global_1955569->f_866.f_115.f_2;
		default:
			break;
	}
	return -1;
}

void func_105(float fParam0)
{
	int iVar0;

	if (fParam0 == 0f)
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	PED::_0xC3D4B754C0E86B9E(iVar0, fParam0);
}

int func_106(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_117();
	}
	switch (iParam0)
	{
		case 0:
			return Global_1955569->f_850.f_1;
		case 1:
			return Global_1955569->f_866.f_115.f_1;
		default:
			break;
	}
	return -1;
}

void func_107(float fParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	if (PLAYER::_0xB16223CB7DA965F0(iVar0) && fParam0 > 0f)
	{
		return;
	}
	if (fParam0 == 0f)
	{
		return;
	}
	fVar2 = PLAYER::_0xAB3773E7AA1E9DCC(iVar0);
	if (fParam0 < 0f && bParam1 == 1)
	{
		bParam1 = false;
	}
	if (!bParam1)
	{
		PLAYER::_0x5A498FCA232F71E1(iVar0, 1f);
	}
	if (fParam0 > 0f)
	{
		PLAYER::_0x51345AE20F22C261(iVar0, fParam0, 0, 0, 0);
	}
	else
	{
		PLAYER::_0x200114E99552462B(iVar0, fParam0, 0);
	}
	if (!bParam1)
	{
		PLAYER::_0x5A498FCA232F71E1(iVar0, fVar2);
	}
}

int func_108(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return -932875117;
		case 3:
			return 1660962977;
		case 4:
			return -131409450;
		case 5:
			return -1487527516;
		case 6:
			return 561629573;
		case 7:
			return 1829679323;
		case 8:
			return -618617794;
		case 11:
			return 653458791;
		case 12:
			return 437319607;
		case 13:
			return -1519488075;
		case 15:
			return 1014445254;
		case 16:
			return 224814421;
		case 18:
			return 1012187868;
		case 19:
			return -1040706491;
		case 20:
			return -1910627346;
		case 23:
			return -1812487593;
		case 26:
			return 1983971282;
		case 27:
			return 1561519041;
		case 28:
			return -980496853;
		case 29:
			return -1738887126;
		case 31:
			return 424771379;
		case 33:
			return 787316814;
		case 34:
			return 984616481;
		case 37:
			return 1078285403;
		case 38:
			return -262897007;
		case 39:
			return -1727702531;
		case 40:
			return 1783324404;
		case 41:
			return 1288848815;
		case 42:
			return 918090738;
		case 43:
			return 170272501;
		case 1:
			return 2056650000;
		case 9:
			return -1195354638;
		case 10:
			return 1077596967;
		case 14:
			return -2145199848;
		case 17:
			return 752824478;
		case 21:
			return -819513569;
		case 22:
			return 1906968775;
		case 24:
			return -135434663;
		case 25:
			return 920123680;
		case 30:
			return 150470908;
		case 32:
			return -1665125257;
		case 35:
			return 1587928307;
		case 36:
			return -1738925422;
	}
	return 0;
}

struct<2> func_109(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

int func_110(int iParam0)
{
	if (!func_125(iParam0))
	{
		return -1;
	}
	return func_126(iParam0);
}

bool func_111(int iParam0, int iParam1)
{
	if (func_45() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iParam0]), iParam1);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iParam0]), iParam1);
}

int func_112(int iParam0)
{
	if (func_45() != -1)
	{
		if (func_114(iParam0, 4))
		{
			return 0;
		}
	}
	else if (func_114(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

int func_113(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_114(iParam0, 65536) && !func_114(iParam0, 32768))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if ((Global_40.f_7756[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_114(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0 /*3*/] - iVar1);
			if ((Global_40.f_7756[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && func_114(iParam0, 32768))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_114(int iParam0, int iParam1)
{
	return ((Global_1905944->f_22[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

bool func_115(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_116()
{
	return Global_1905944->f_5694;
}

int func_117()
{
	if (func_127())
	{
		return 1;
	}
	return 0;
}

void func_118(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_117();
	}
	switch (iParam2)
	{
		case 0:
			Global_1955569->f_753.f_15[iParam0 /*3*/] = iParam1;
			break;
		case 1:
			Global_1955569->f_866.f_2.f_15[iParam0 /*3*/] = iParam1;
			break;
		default:
			break;
	}
}

void func_119(int iParam0, int iParam1, float fParam2)
{
	char* sVar0;

	sVar0 = func_93(iParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		PED::_0x437C08DB4FEBE2BD(iParam0, func_128(iParam1), fParam2, -1);
	}
}

void func_120(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (iParam3 == 2)
	{
		iParam3 = func_117();
	}
	iVar0 = MISC::GET_GAME_TIMER();
	func_129(iParam0, fParam1, iParam3);
	if (bParam2)
	{
		func_130(iParam0, iVar0, iParam3);
	}
}

char* func_121(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					if (bParam2)
					{
						return "PMPLAYER_CONDITION_TEMPERATURE_FAIR";
					}
					else
					{
						return func_97(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_97(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
			}
			break;
		case 1:
		case 2:
		case 3:
			switch (iParam1)
			{
				case 0:
					return "PMPLAYER_CORE_PC_VALUE";
				case 1:
					return "PMPLAYER_TIME_VALUE_MINUTES";
				case 2:
					return "PMPLAYER_CORE_PC_VALUE";
				default:
					break;
			}
			break;
	}
	return "";
}

float func_122()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;

	if (func_131())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_50(2);
	}
	if (Global_1347477->f_119)
	{
		return func_50(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_132();
	fVar2 = func_133();
	fVar3 = func_134();
	fVar4 = func_135();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_136()));
	fVar7 = (func_50(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_137(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_138(3, fVar9, fVar9 > 100f);
	return func_54(fVar7, -100f, 100f);
}

float func_123()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;

	if (func_131())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_50(1);
	}
	if (Global_1347477->f_119)
	{
		return func_50(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_132();
	fVar2 = func_133();
	fVar3 = func_134();
	fVar4 = func_135();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_136()));
	fVar7 = (func_50(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_137(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_138(2, fVar9, fVar9 > 100f);
	return func_54(fVar7, -100f, 100f);
}

float func_124()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;

	if (func_131())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_50(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_139())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_140())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_50(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_132();
	fVar2 = func_133();
	fVar3 = func_134();
	fVar4 = func_135();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_136()));
	fVar7 = (func_50(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_137(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_138(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && PLAYER::_0x0317C947D062854E(PLAYER::PLAYER_ID()) < 1f)
	{
		return func_50(0);
	}
	return func_54(fVar7, -100f, 100f);
}

bool func_125(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_126(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_141(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

bool func_127()
{
	return Global_1955569->f_866;
}

char* func_128(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "isLowHealthCoreActive";
		case 1:
			return "isLowStaminaCoreActive";
		case 2:
			return "isLowDeadEyeCoreActive";
		default:
			break;
	}
	return "";
}

void func_129(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_117();
	}
	switch (iParam2)
	{
		case 0:
			Global_1955569->f_753.f_5[iParam0 /*3*/] = uParam1;
			break;
		case 1:
			Global_1955569->f_866.f_2.f_5[iParam0 /*3*/] = uParam1;
			break;
		default:
			break;
	}
}

void func_130(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_117();
	}
	switch (iParam2)
	{
		case 0:
			(Global_1955569->f_753.f_15[iParam0 /*3*/])->f_2 = iParam1;
			break;
		case 1:
			(Global_1955569->f_866.f_2.f_15[iParam0 /*3*/])->f_2 = iParam1;
			break;
		default:
			break;
	}
}

int func_131()
{
	if (Global_1572887->f_12 != -1)
	{
		return 0;
	}
	return Global_1347477->f_203;
}

float func_132()
{
	float fVar0;
	int iVar1;

	fVar0 = func_56(13);
	iVar1 = func_59(fVar0);
	if (iVar1 == 0)
	{
		return 0.15f;
	}
	if (iVar1 == 10 || iVar1 == -10)
	{
		return -0.25f;
	}
	return 0f;
}

float func_133()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_134()
{
	if (func_142())
	{
		if (DLC::_0xA16B4FBA7887D7BA())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_135()
{
	if (Global_40.f_39 == 11966224)
	{
		return 0f;
	}
	if (Global_40.f_11095.f_67 >= 9)
	{
		return -0.2f;
	}
	if (Global_40.f_11095.f_67 >= 7)
	{
		return -0.05f;
	}
	return 0f;
}

float func_136()
{
	return Global_1955565->f_3;
}

void func_137(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;

	sVar0 = func_121(iParam0, 1, 0, 0);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_12[1]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_16[1]), iParam2);
}

void func_138(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_121(iParam0, 2, 0, 0);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_12[2]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_16[2]), bParam2);
	if (fParam1 > 100f)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_20[2]), "RPG_ARROW_DOWN");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_24[2]), "pausemenu_player_update");
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_28[2]), 859817522);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_32[2]), 1);
	}
	else if (fParam1 < 100f)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_20[2]), "RPG_ARROW_UP");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_24[2]), "pausemenu_player_update");
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_28[2]), 1105014447);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_32[2]), 1);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_32[2]), 0);
	}
}

bool func_139()
{
	return func_56(12) <= -99f;
}

bool func_140()
{
	return func_56(12) >= 99f;
}

int func_141(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_1058888->f_40501 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar1 = (Global_1058888->f_40501 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if (&Global_1058888->f_40501.f_1[iVar2 /*2*/] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if (&Global_1058888->f_40501.f_1[iVar2 /*2*/] < iParam0)
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

bool func_142()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797);
}

