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
	var uLocal_21 = 0;
	bool bLocal_22 = false;
	bool bLocal_23 = false;
	bool bLocal_24 = false;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
#endregion

void __EntryFunction__()
{
	struct<126> Var0;

	fLocal_15 = 1f;
	fLocal_16 = 1f;
	iLocal_26 = -1;
	Var0.f_5.f_2 = 12;
	Var0.f_5.f_64 = 11;
	Var0.f_5.f_76 = 11;
	Var0.f_124 = 1;
	Var0.f_125 = 1;
	Var0.f_121 = 1;
	Var0.f_101 = ScriptParam_0.f_1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		Var0.f_118 = 1;
		func_1(&Var0, Global_1913102);
	}
	if (func_2())
	{
		TASK::_0xED27560703F37258(Global_35);
	}
	Var0.f_108 = ANIMSCENE::_CREATE_ANIM_SCENE("lightrig@player_journal", 0, "plMain", false, true);
	ANIMSCENE::LOAD_ANIM_SCENE(Var0.f_108);
	Var0.f_116 = 0;
	if (MISC::GET_GAME_TIMER() >= &Global_1912967 && MISC::GET_GAME_TIMER() >= Global_17168)
	{
		Var0.f_93.f_4 = TASK::_0xDF7993356F52359A(Global_35, 0);
		Var0.f_116 = 1;
	}
	Global_1912967 = 0;
	Global_17170 = 0;
	Global_17171 = 0;
	if ((((MISC::GET_GAME_TIMER() < Global_17151 || Var0.f_116) || (func_3() == 0 && func_4(&Global_1912966, 1224357681) == -1460119729)) || func_5(&Global_1912966, 566155764)) || (func_5(&Global_1912966, -1472964441) && func_6(&Global_1912966)))
	{
		Global_17170 = 1;
		Global_17171 = 1;
	}
	if (Global_1939221->f_10477 == 0 || MISC::GET_GAME_TIMER() <= Global_1939057->f_70.f_2 + 3000)
	{
		Global_17170 = 1;
	}
	while (func_7(&Var0, Global_1913102))
	{
		if (func_5(Global_1913102[0 /*11*/], 566155764) || func_5(&Global_1912966, 566155764))
		{
			PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_FRONTEND_PAUSE"), false);
		}
		Var0.f_104 = TASK::_0x6AA3DCA2C6F5EB6D(Global_35);
		if (((ANIMSCENE::_0x25557E324489393C(Var0.f_108) && ANIMSCENE::_0x477122B8D05E7968(Var0.f_108, 1, 0)) && !ANIMSCENE::_0xCBFC7725DE6CE2E0(Var0.f_108, 0)) && CAM::_0xA24C1D341C6E0D53(1, 0, 0))
		{
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Var0.f_108, Global_36, ENTITY::GET_ENTITY_ROTATION(Global_35, 2), 2);
			ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY_PRESERVING_LOCATION(Var0.f_108, Global_35, -1);
			ANIMSCENE::START_ANIM_SCENE(Var0.f_108);
		}
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_SECONDARY"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DUCK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MELEE"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_HORSE_ATTACK_PRIMARY"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_HORSE_ATTACK_SECONDARY"), false);
		CAM::_0x8910C24B7E0046EC();
		if (UIAPPS::_IS_APP_RUNNING(-605293197))
		{
			HUD::_0xC9CAEAEEC1256E54(382897689);
		}
		if (Var0.f_116)
		{
			func_8(&Var0, Global_1913102);
		}
		else
		{
			func_9(&Var0, Global_1913102);
		}
		func_10(&Var0, Global_1913102);
		BUILTIN::WAIT(0);
	}
	func_1(&Var0, Global_1913102);
}

void func_1(var uParam0, var uParam1)
{
	if (func_11() && !Global_1939221->f_8)
	{
		if (!SCRIPTS::_0x9E4EF615E307FBBE())
		{
			SCRIPTS::TERMINATE_THIS_THREAD();
		}
		return;
	}
	if (UIAPPS::_IS_APP_RUNNING(-605293197))
	{
		UIAPPS::_CLOSE_APP_BY_HASH(-605293197);
	}
	if (uParam0->f_115)
	{
		func_12(uParam0, uParam1);
	}
	if (uParam0->f_119)
	{
		func_13(uParam0->f_1.f_1);
	}
	func_14(uParam0, uParam1);
	func_15(uParam0);
	func_16(uParam0);
	if (uParam0->f_118)
	{
		func_17(uParam0, uParam1);
	}
	if (!uParam0->f_117)
	{
		if (!((*uParam1)[0 /*11*/])->f_1)
		{
			func_18(0);
		}
		else
		{
			((*Global_1913136)[0 /*6*/])->f_1 = 4;
		}
		func_18(2);
		func_18(1);
		func_19(uParam1);
	}
	else
	{
		func_20(uParam0, uParam1);
	}
	if (!SCRIPTS::_0x9E4EF615E307FBBE())
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

int func_2()
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		return 0;
	}
	if (!TASK::_0xEFC4303DDC6E60D3(iVar0))
	{
		return 0;
	}
	iVar1 = TASK::_0xED1F514AF4732258(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iVar1, true))
	{
		return 0;
	}
	if (!PED::_0x2D64376CF437363E(iVar1))
	{
		return 0;
	}
	return 1;
}

int func_3()
{
	return Global_1572887->f_13;
}

int func_4(int iParam0, int iParam1)
{
	struct<2> Var0[20];
	int iVar41;
	int iVar42;

	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_TAG_DATA(iParam0, &Var0, &iVar41, 20))
	{
		iVar42 = 0;
		while (iVar42 < iVar41)
		{
			if ((Var0[iVar42 /*2*/])->f_1 == iParam1)
			{
				return &(Var0[iVar42 /*2*/]);
			}
			iVar42++;
		}
	}
	return 0;
}

int func_5(int iParam0, int iParam1)
{
	if (!func_21(iParam0, 0))
	{
		return func_23(func_22(iParam0), iParam1);
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

int func_6(int iParam0)
{
	if (func_5(iParam0, 566155764))
	{
		return 0;
	}
	if (func_5(iParam0, 2028734248))
	{
		return 1;
	}
	return 0;
}

int func_7(var uParam0, var uParam1)
{
	if (func_3() == 0 && func_24(0, 0))
	{
		return 0;
	}
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		return 0;
	}
	if (func_25(uParam0, uParam1) && (MISC::GET_GAME_TIMER() >= Global_17151 || !func_26(&Global_1912966)))
	{
		uParam0->f_118 = 1;
		return 0;
	}
	return 1;
}

int func_8(var uParam0, var uParam1)
{
	if (*uParam0 > 0)
	{
		func_27(uParam0, uParam1);
	}
	switch (*uParam0)
	{
		case 0:
			uParam0->f_101 = TASK::_0x05A0100EA714DB68(Global_35, 2120637577);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_101))
			{
				func_28(uParam0, (*uParam1)[0 /*11*/]);
				func_29(uParam0, uParam1);
				func_30(uParam0, uParam1[0 /*11*/]);
				func_27(uParam0, uParam1);
				func_31(uParam0, 4);
			}
			break;
		case 4:
			if (func_32(uParam1[0 /*11*/], uParam0->f_104))
			{
				func_33(uParam1[0 /*11*/]);
				func_34(uParam0, uParam1, 1);
				func_31(uParam0, 6);
			}
			break;
		case 6:
			func_35(uParam0, (*uParam1)[0 /*11*/]);
			func_36(uParam0, uParam1);
			func_37(uParam0, uParam1);
			if (func_38(uParam1[0 /*11*/], uParam0->f_104))
			{
				if (func_5(uParam1[0 /*11*/], -674618190))
				{
					func_31(uParam0, 7);
				}
				else
				{
					func_31(uParam0, 8);
				}
			}
			else if (func_39(&(Global_17158[3]), 1))
			{
				func_40(uParam0, uParam1[0 /*11*/]);
			}
			func_15(uParam0);
			break;
		case 8:
			if (!func_41(uParam1[0 /*11*/], 1) && !uParam0->f_123)
			{
				func_42(uParam1[0 /*11*/], 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				uParam0->f_123 = 1;
			}
			func_31(uParam0, 9);
			break;
		case 7:
			uParam0->f_93.f_3 = TASK::_0xA92450B5AE687AAF(uParam0->f_93.f_4);
			uParam0->f_93 = { TASK::_0xA8452DD321607029(uParam0->f_93.f_4, 1) };
			TASK::_0x4161648394262FDF(uParam0->f_93, 1f);
			if (!TASK::_0x841475AC96E794D1(uParam0->f_93.f_4))
			{
				uParam0->f_93.f_4 = TASK::_0xF533D68FF970D190(uParam0->f_93, uParam0->f_93.f_3, 1f, 1, 0);
			}
			uParam0->f_93.f_5 = TASK::_0x295514F198EFD0CA(uParam0->f_93.f_4, "PrimaryItem");
			uParam0->f_93.f_6 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(uParam0->f_93.f_5);
			OBJECT::_0xE124889AE0521FCF(uParam0->f_93.f_6, ((*uParam1)[0 /*11*/])->f_5, 0, 0);
			func_31(uParam0, 9);
			break;
	}
	return 0;
}

int func_9(var uParam0, var uParam1)
{
	if (*uParam0 > 0)
	{
		func_27(uParam0, uParam1);
	}
	switch (*uParam0)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_101))
			{
				uParam0->f_101 = TASK::_0x05A0100EA714DB68(Global_35, 2120637577);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_101))
			{
				(*uParam1)[0 /*11*/] = func_43(uParam0);
				func_44(uParam0, uParam1[0 /*11*/]);
				func_29(uParam0, uParam1);
				func_30(uParam0, uParam1[0 /*11*/]);
				func_27(uParam0, uParam1);
				func_28(uParam0, (*uParam1)[0 /*11*/]);
				func_45(uParam0, uParam1);
				if (((*Global_1913136)[0 /*6*/])->f_1 == 2)
				{
					func_46((*uParam1)[0 /*11*/], 0);
					func_47(uParam0, uParam1);
				}
				func_31(uParam0, 2);
			}
			break;
		case 2:
			if (func_46((*uParam1)[0 /*11*/], 0) && func_48(uParam0, uParam1))
			{
				func_31(uParam0, 3);
			}
			break;
		case 3:
			if (func_47(uParam0, uParam1))
			{
				func_31(uParam0, 4);
			}
			break;
		case 4:
			if (func_32(uParam1[0 /*11*/], uParam0->f_104))
			{
				func_34(uParam0, uParam1, 1);
				func_33(uParam1[0 /*11*/]);
				func_31(uParam0, 5);
			}
			break;
		case 5:
			func_35(uParam0, (*uParam1)[0 /*11*/]);
			func_36(uParam0, uParam1);
			func_37(uParam0, uParam1);
			if (func_38(uParam1[0 /*11*/], uParam0->f_104))
			{
				func_31(uParam0, 9);
			}
			else if (func_49(&(Global_17158[2])) && func_50(&(Global_17158[2]), 1))
			{
				func_31(uParam0, 9);
				uParam0->f_118 = 1;
				Global_1939221->f_8 = 1;
				Global_17169 = MISC::GET_GAME_TIMER() + 10000;
				func_51(1);
			}
			else if (func_39(&(Global_17158[3]), 1))
			{
				func_40(uParam0, uParam1[0 /*11*/]);
			}
			else if (!Global_17170 && func_52(uParam0))
			{
				uParam0->f_117 = 1;
				func_31(uParam0, 9);
			}
			func_15(uParam0);
			break;
	}
	return 0;
}

int func_10(var uParam0, var uParam1)
{
	int iVar0;

	Global_1939057->f_70.f_4 = MISC::GET_GAME_TIMER() + 5000;
	if (Global_17157 == 1)
	{
		iVar0 = TASK::_0x6AA3DCA2C6F5EB6D(Global_35);
		if (iVar0 == func_53(&Global_1912966))
		{
			Global_17157 = 2;
		}
	}
	switch (*uParam0)
	{
		case 9:
			func_1(uParam0, uParam1);
			break;
	}
	return 0;
}

bool func_11()
{
	return (Global_1939221->f_1 || &Global_1939221 == 1);
}

void func_12(var uParam0, var uParam1)
{
}

int func_13(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!INVENTORY::_0x42A2F33A1942E865(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_14(var uParam0, var uParam1)
{
	func_54(uParam1[0 /*11*/]);
}

void func_15(var uParam0)
{
	if (uParam0->f_5.f_1 && !UIAPPS::_IS_APP_RUNNING(-605293197))
	{
		AUDIO::PLAY_SOUND_FRONTEND("READ", "HUD_SHOP_SOUNDSET", true, 0);
		uParam0->f_5.f_1 = 0;
	}
}

void func_16(var uParam0)
{
	int iVar0;

	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_5.f_63))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_5.f_63);
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(&(uParam0->f_5.f_64[iVar0])))
		{
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(&(uParam0->f_5.f_64[iVar0]));
		}
		if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(&(uParam0->f_5.f_76[iVar0])))
		{
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(&(uParam0->f_5.f_76[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_5.f_2)
	{
		(uParam0->f_5.f_2[iVar0 /*5*/])->f_3 = 0;
		iVar0++;
	}
}

void func_17(var uParam0, var uParam1)
{
	if (uParam1[0 /*11*/] != 0)
	{
		if (func_53(uParam1[0 /*11*/]) != 0)
		{
			TASK::_0xB35370D5353995CB(Global_35, func_53(uParam1[0 /*11*/]), 1048576000);
		}
		if (((uParam0->f_116 && func_55(uParam1[0 /*11*/])) && !func_41(uParam1[0 /*11*/], 1)) && !uParam0->f_123)
		{
			func_42(uParam1[0 /*11*/], 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			uParam0->f_123 = 1;
		}
	}
}

void func_18(int iParam0)
{
	((*Global_1913136)[iParam0 /*6*/])->f_1 = 3;
	(*Global_1913136)[iParam0 /*6*/] = 0;
	((*Global_1913136)[iParam0 /*6*/])->f_5 = 0;
}

void func_19(var uParam0)
{
	if (!Global_1939221->f_8)
	{
		if (((func_5(&Global_1912966, -1472964441) || func_5(&Global_1912966, 1841149704)) || func_5(&Global_1912966, 566155764)) || func_5(&Global_1912966, -228153877))
		{
			Global_1939057->f_70.f_5 = 1;
			Global_1939057->f_70.f_1 = &Global_1912966;
		}
	}
	Global_1912966 = 0;
	Global_17168 = 0;
	Global_17157 = 2;
	((*Global_1913102)[0 /*11*/])->f_3 = 0;
	func_56(uParam0);
}

void func_20(var uParam0, var uParam1)
{
	if (uParam0->f_115)
	{
		func_12(uParam0, uParam1);
	}
	if (uParam0->f_110)
	{
		func_57(uParam1);
	}
	else
	{
		func_58(uParam1);
	}
	if (uParam0->f_119)
	{
		func_13(uParam0->f_1.f_1);
	}
	func_59(uParam1);
	((*uParam1)[0 /*11*/])->f_3 = 0;
	Global_1912966 = uParam1[0 /*11*/];
	func_60(uParam1[0 /*11*/], 0, 1, 0, 0f);
	GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
	Global_17168 = MISC::GET_GAME_TIMER() + 3000;
}

int func_21(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_22(int iParam0)
{
	return iParam0;
}

int func_23(int iParam0, int iParam1)
{
	if (!func_61(iParam0, 2))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_0x99C6EA66DFE73757(iParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

int func_24(bool bParam0, bool bParam1)
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

int func_25(var uParam0, var uParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return 1;
	}
	if (!TASK::_0x038B1F1674F0E242(Global_35))
	{
		return 1;
	}
	if (!func_62(16))
	{
		return 1;
	}
	if ((!uParam0->f_118 && *uParam0 > 4) && (func_63(uParam1[0 /*11*/]) || func_64(uParam1[0 /*11*/])))
	{
		return 1;
	}
	return 0;
}

int func_26(int iParam0)
{
	switch (iParam0)
	{
		case -904734609: /* GXTEntry: "Goodbye Letter from Mary" */
		case -595619260: /* GXTEntry: "Goodbye Letter from Mary" */
		case -31140163: /* GXTEntry: "Panoramic Map" */
		case 1760651454: /* GXTEntry: "Goodbye Letter from Mary" */
			return 1;
	}
	return 0;
}

void func_27(var uParam0, var uParam1)
{
	if (!uParam0->f_122)
	{
		if (func_32(uParam1[0 /*11*/], uParam0->f_104))
		{
			func_34(uParam0, uParam1, 0);
			uParam0->f_122 = 1;
		}
	}
}

void func_28(var uParam0, var uParam1)
{
	struct<5> Var0;

	*uParam1 = func_43(uParam0);
	uParam1->f_6 = func_4(*uParam1, -949239683);
	uParam1->f_1 = func_65(uParam1->f_6);
	if (uParam1->f_1)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(*uParam1, &Var0))
		{
			uParam1->f_7.f_2 = Var0.f_4;
		}
	}
	func_44(uParam0, *uParam1);
}

void func_29(var uParam0, var uParam1)
{
	uParam0->f_120 = 1;
	switch (TASK::_0x804425C4BBD00883(Global_35))
	{
		case 2129073771:
			iLocal_27 = -1912187723;
			TXD::_0xDB1BD07FB464584D(iLocal_27, 0);
			break;
		case -1391775747: /* GXTEntry: "Jail Ledger" */
			iLocal_27 = -658853329;
			TXD::_0xDB1BD07FB464584D(iLocal_27, 0);
			break;
		case -1448289118: /* GXTEntry: "Diary" */
			iLocal_27 = 1095224717;
			TXD::_0xDB1BD07FB464584D(iLocal_27, 0);
			break;
	}
}

void func_30(var uParam0, int iParam1)
{
	if (func_5(iParam1, -98816307))
	{
		PED::_0xCB9401F918CB0F75(Global_35, "GENERIC_BOOK_TAKE_AVAILABLE", 0, -1);
	}
	else
	{
		PED::_0xCB9401F918CB0F75(Global_35, "GENERIC_BOOK_TAKE_AVAILABLE", 1, -1);
	}
	if (func_5(iParam1, -1903335637))
	{
		PED::_0xCB9401F918CB0F75(Global_35, "GENERIC_DOCUMENT_FLIP_AVAILABLE", 1, -1);
	}
	else
	{
		PED::_0xCB9401F918CB0F75(Global_35, "GENERIC_DOCUMENT_FLIP_AVAILABLE", 0, -1);
	}
	if (uParam0->f_120)
	{
		if (func_5(iParam1, -98816307))
		{
			PED::_0xCB9401F918CB0F75(Global_35, "GENERIC_BOOK_TAKE_AVAILABLE", 0, -1);
			PED::_0xCB9401F918CB0F75(Global_35, "GENERIC_BOOK_RETURN_AVAILABLE", 1, -1);
		}
	}
	func_66(uParam0);
}

void func_31(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_32(int iParam0, int iParam1)
{
	switch (func_4(iParam0, -949239683))
	{
		case -1420737577:
			if (iParam1 == 1607869040)
			{
				return 1;
			}
			break;
		case 1712126263:
			if (iParam1 == -1424266966)
			{
				return 1;
			}
			break;
		case 10252101:
			if (iParam1 == -487508500)
			{
				return 1;
			}
			break;
		case -1229959999:
			if (iParam1 == -1791047090)
			{
				return 1;
			}
			break;
		case -1050374492:
			if (iParam1 == 760057945)
			{
				return 1;
			}
			break;
		case 1513351077:
			if (iParam1 == -1043439814)
			{
				return 1;
			}
			break;
		case -1565009253:
			if (iParam1 == -2077441721)
			{
				return 1;
			}
			break;
		case 733893097:
			if (iParam1 == 1972630951)
			{
				return 1;
			}
			break;
		case -164980960:
			if (iParam1 == 2000759837)
			{
				return 1;
			}
			break;
		case 1894156335:
			if (iParam1 == 374699583)
			{
				return 1;
			}
			break;
		case 871191033:
			if (iParam1 == -59421711)
			{
				return 1;
			}
			break;
		case -1273369295:
			if (iParam1 == -1340223099)
			{
				return 1;
			}
			break;
		case 82200319:
			if (iParam1 == -1140851507)
			{
				return 1;
			}
			break;
		case -873135685:
			if (iParam1 == -1570312122 || iParam1 == -1563464392)
			{
				return 1;
			}
			break;
		case 24248412:
			if (iParam1 == 416212934)
			{
				return 1;
			}
			break;
		case -1239610997:
			if ((iParam1 == 1087288635 || iParam1 == 1761334567) || iParam1 == 504129763)
			{
				return 1;
			}
			break;
		case 632545869:
			if ((iParam1 == -212251684 || iParam1 == -1401979141) || iParam1 == -1983586928)
			{
				return 1;
			}
			break;
		case -793205628:
			if (iParam1 == 136592566 || iParam1 == 16062911)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_33(var uParam0)
{
}

int func_34(var uParam0, var uParam1, bool bParam2)
{
	if (func_5(uParam1[0 /*11*/], 566155764))
	{
		return 1;
	}
	if (func_5(uParam1[0 /*11*/], -1472964441))
	{
		if (func_6(uParam1[0 /*11*/]))
		{
			return 1;
		}
	}
	if (!uParam0->f_120)
	{
		if (!Global_17170 && bParam2)
		{
			if (!func_21(uParam1[2 /*11*/], 0))
			{
				Global_17163[1] = 0;
				func_67(Global_17158[1], 0);
			}
			else
			{
				Global_17163[1] = 1;
				func_67(Global_17158[1], 1);
			}
			if (!func_21(uParam1[1 /*11*/], 0))
			{
				Global_17163[0] = 0;
				func_67(Global_17158[0], 0);
			}
			else
			{
				Global_17163[0] = 1;
				func_67(Global_17158[0], 1);
			}
		}
		Global_17163[3] = func_68(uParam0, (*uParam1)[0 /*11*/]);
		func_67(Global_17158[3], &(Global_17163[3]));
		if (uParam1[0 /*11*/] == -1084135070)
		{
			Global_17172 = 1;
		}
		Global_17157 = 1;
	}
	if (uParam0->f_116)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INSPECT_ZOOM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DOCUMENT_PAGE_NEXT"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DOCUMENT_PAGE_PREV"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_A"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_X"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_B"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INSPECT_OPEN_SATCHEL"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INSPECT_OPEN_SATCHEL"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_TAB_RIGHT"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_TAB_LEFT"), false);
	}
	return 1;
}

void func_35(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (!func_32(*uParam1, uParam0->f_104) && !func_69(*uParam1, uParam0->f_104))
	{
		if (!uParam0->f_112)
		{
			if (func_70(&(Global_17158[0]), 1))
			{
				uParam0->f_113 = 0;
			}
			else
			{
				uParam0->f_113 = 1;
			}
			if (func_70(&(Global_17158[1]), 1))
			{
				uParam0->f_114 = 0;
			}
			else
			{
				uParam0->f_114 = 1;
			}
			iVar0 = 0;
			while (iVar0 < 4)
			{
				func_71(Global_17158[iVar0], 0);
				iVar0++;
			}
			uParam0->f_112 = 1;
		}
	}
	else if (uParam0->f_112)
	{
		func_72(uParam0, uParam1);
		iVar0 = 0;
		while (iVar0 < 3)
		{
			iVar1 = iVar0;
			if (((iVar1 == 0 && !uParam0->f_113) || (iVar1 == 1 && !uParam0->f_114)) || (iVar1 != 1 && iVar1 != 0))
			{
				func_71(Global_17158[iVar1], 1);
			}
			iVar0++;
		}
		uParam0->f_112 = 0;
	}
}

void func_36(var uParam0, var uParam1)
{
	if (!uParam0->f_115 && func_73(uParam1[0 /*11*/], uParam0->f_104))
	{
		uParam0->f_115 = 1;
		func_74(uParam1[0 /*11*/]);
	}
}

void func_37(var uParam0, var uParam1)
{
	int iVar0;

	if (!UIAPPS::_IS_APP_RUNNING(-605293197) && uParam0->f_105 > 0)
	{
		if (PAD::IS_CONTROL_JUST_RELEASED(0, joaat("INPUT_CONTEXT_X")))
		{
			if (UIAPPS::_LAUNCH_APP_BY_HASH_WITH_ENTRY(-605293197, joaat("generic")) == 0)
			{
				func_75(uParam0, uParam1);
			}
		}
		if (iLocal_26 == -1)
		{
			func_76(uParam0);
		}
		iVar0 = TASK::_0x6AA3DCA2C6F5EB6D(Global_35);
		if (!bLocal_22)
		{
			if (iVar0 == -271999469 || iVar0 == 1088578020)
			{
				bLocal_22 = true;
				iLocal_25++;
			}
		}
		else if (((iVar0 == 1087288635 || iVar0 == 504129763) || iVar0 == -1809475494) || iVar0 == 1854147388)
		{
			bLocal_22 = false;
		}
		if (!bLocal_23)
		{
			if (iVar0 == 447737959 || iVar0 == 847337666)
			{
				bLocal_23 = true;
				iLocal_25 = (iLocal_25 - 1);
			}
		}
		else if (((iVar0 == 1087288635 || iVar0 == 504129763) || iVar0 == -1809475494) || iVar0 == 1854147388)
		{
			bLocal_23 = false;
		}
		if (iLocal_25 == 0)
		{
			if (!PED::_0x4912DFE492DB98CD(Global_35, "BOOK_BLOCK_PAGE_PREV"))
			{
				PED::_0xCB9401F918CB0F75(Global_35, "BOOK_BLOCK_PAGE_PREV", 1, -1);
			}
		}
		else if (PED::_0x4912DFE492DB98CD(Global_35, "BOOK_BLOCK_PAGE_PREV"))
		{
			PED::_0xCB9401F918CB0F75(Global_35, "BOOK_BLOCK_PAGE_PREV", 0, -1);
		}
		if (iLocal_25 >= iLocal_26)
		{
			if (!PED::_0x4912DFE492DB98CD(Global_35, "BOOK_BLOCK_PAGE_NEXT"))
			{
				PED::_0xCB9401F918CB0F75(Global_35, "BOOK_BLOCK_PAGE_NEXT", 1, -1);
			}
		}
		else if (PED::_0x4912DFE492DB98CD(Global_35, "BOOK_BLOCK_PAGE_NEXT"))
		{
			PED::_0xCB9401F918CB0F75(Global_35, "BOOK_BLOCK_PAGE_NEXT", 0, -1);
		}
	}
	if (!bLocal_24 && iLocal_27 != 0)
	{
		if (TXD::_0xBE72591D1509FFE4(iLocal_27))
		{
			OBJECT::_0xE124889AE0521FCF(TASK::_0x05A0100EA714DB68(Global_35, 0), iLocal_27, 0, 0);
			bLocal_24 = true;
		}
	}
}

int func_38(int iParam0, int iParam1)
{
	switch (func_4(iParam0, -949239683))
	{
		case -1420737577:
			if (iParam1 == -34349608)
			{
				return 1;
			}
			break;
		case 1712126263:
			if (iParam1 == 1918075176 || iParam1 == -1661733570)
			{
				return 1;
			}
			break;
		case 10252101:
			if (iParam1 == -838154919 || iParam1 == 384644694)
			{
				return 1;
			}
			break;
		case -1229959999:
			if (iParam1 == 779637421 || iParam1 == 1184806339)
			{
				return 1;
			}
			break;
		case -1050374492:
			if (iParam1 == -13228069 || iParam1 == -733273327)
			{
				return 1;
			}
			break;
		case 1513351077:
			if (iParam1 == -1855297853 || iParam1 == 327088472)
			{
				return 1;
			}
			break;
		case -1565009253:
			if (iParam1 == -672448089 || iParam1 == 1505672707)
			{
				return 1;
			}
			break;
		case 733893097:
			if (iParam1 == 329918092 || iParam1 == 1320390176)
			{
				return 1;
			}
			break;
		case -164980960:
			if (iParam1 == 1096961806 || iParam1 == -1142551033)
			{
				return 1;
			}
			break;
		case 1894156335:
			if (iParam1 == 2067181640 || iParam1 == -1286256799)
			{
				return 1;
			}
			break;
		case 871191033:
			if (iParam1 == 313665285 || iParam1 == 474174677)
			{
				return 1;
			}
			break;
		case -1273369295:
			if (iParam1 == 1434623772 || iParam1 == 1708036133)
			{
				return 1;
			}
			break;
		case 82200319:
			if (iParam1 == 1668318109 || iParam1 == -465598822)
			{
				return 1;
			}
			break;
		case -873135685:
			if (iParam1 == 676329346 || iParam1 == 1940752053)
			{
				return 1;
			}
			break;
		case 24248412:
			if (iParam1 == -587250236 || iParam1 == -503655797)
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_39(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_49(iParam0))
	{
		return false;
	}
	iVar0 = func_77(iParam0);
	return HUD::_UIPROMPT_IS_JUST_PRESSED(((*Global_1949749)[iVar0 /*23*/])->f_3);
}

void func_40(var uParam0, int iParam1)
{
	if (func_5(iParam1, -1227898937))
	{
		if (UIAPPS::_LAUNCH_APP_BY_HASH_WITH_ENTRY(-605293197, 1536810153) == 0)
		{
			uParam0->f_5.f_1 = 1;
			AUDIO::PLAY_SOUND_FRONTEND("READ", "HUD_SHOP_SOUNDSET", true, 0);
			func_78(uParam0, iParam1);
		}
	}
	else if (UIAPPS::_LAUNCH_APP_BY_HASH_WITH_ENTRY(-605293197, joaat("generic")) == 0)
	{
		uParam0->f_5.f_1 = 1;
		AUDIO::PLAY_SOUND_FRONTEND("READ", "HUD_SHOP_SOUNDSET", true, 0);
		func_78(uParam0, iParam1);
	}
}

bool func_41(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_21(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_79(iParam0);
	switch (iVar0)
	{
		case joaat("weapon"):
			if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case joaat("ammo"):
			if (!func_80(iParam0, 1))
			{
				return false;
			}
			break;
		case joaat("clothing"):
			if (func_81(iParam0))
			{
				return true;
			}
			break;
	}
	return func_82(iParam0, 0, 0, 0) >= iParam1;
}

int func_42(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	struct<13> Var6;
	int iVar29;
	struct<2> Var30;
	bool bVar32;

	if (!func_21(iParam0, 0))
	{
		return 0;
	}
	if (!func_83(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_84(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_85(iParam0, bParam2);
	iVar2 = 0;
	if (func_79(iParam0) == joaat("clothing"))
	{
		if (!func_5(iParam0, 866047851) && !func_5(iParam0, -1979000645))
		{
			bVar3 = true;
		}
	}
	if (func_86(iParam0, 8388608) && !func_87(27))
	{
		func_88(27);
	}
	func_89(iParam0);
	if (!bVar3)
	{
		if (func_5(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			iVar1 = func_91(func_90(iParam0, 1), 0);
			if (WEAPON::IS_WEAPON_VALID(iVar1))
			{
				if (func_3() == -1)
				{
					func_92(iVar1);
				}
				if (func_93(0) && func_94(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
				{
					func_95(iParam0, iVar0, iParam5);
					if (!bParam9)
					{
						bParam2 = false;
					}
				}
				else
				{
					func_96(iParam0, iVar0, iParam5);
				}
			}
		}
		else if (func_79(iParam0) == joaat("weapon"))
		{
			if (!func_97(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_79(iParam0) == joaat("ammo") && func_98(iParam0))
		{
			if (!func_99(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_5(iParam0, 866047851))
		{
		}
		else if (func_5(iParam0, 2000026003))
		{
		}
		else if (func_5(iParam0, -103750053))
		{
			func_101(func_100(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_101(func_102(-717883113, 2091222383), iVar0);
		}
		else if (func_5(iParam0, -121341956) && !func_5(iParam0, 606799272))
		{
			if (iParam0 != 191707516)
			{
				func_103(534, 0);
			}
			if (func_5(iParam0, -2017733358) || func_5(iParam0, -1369131378))
			{
			}
		}
		else if (func_5(iParam0, -136654233))
		{
			if (func_5(iParam0, -1021472396))
			{
			}
		}
		else if (func_5(iParam0, -1466706512) && func_5(iParam0, 1147021565))
		{
			func_103(517, 0);
		}
		else if (func_5(iParam0, 1147021565) && func_5(iParam0, -524514947))
		{
		}
		else if (func_5(iParam0, 554195525))
		{
		}
		else if (func_5(iParam0, 589988438))
		{
			if (func_104())
			{
				func_105(1339418451, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_5(iParam0, 787083290) && func_5(iParam0, 949916894))
		{
			func_106(iParam0);
		}
		else if (func_5(iParam0, -1718133314))
		{
			func_107(iParam0);
		}
		else if (func_5(iParam0, -1738650224))
		{
			func_108(iParam0);
		}
		else if (func_5(iParam0, -1112814642) && func_5(iParam0, 949916894))
		{
			func_109(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1939057->f_21 = 0;
		}
		else if (func_5(iParam0, 1841149704))
		{
			func_110();
		}
		else if (func_5(iParam0, -1979000645))
		{
		}
		else if (func_5(iParam0, 606799272))
		{
		}
		else if (func_5(iParam0, -1112814642) && func_5(iParam0, -1697809989))
		{
		}
		else if (func_5(iParam0, -2017733358) || func_5(iParam0, -1369131378))
		{
		}
		else if (func_5(iParam0, -1921346699))
		{
			return 0;
		}
		else if (func_5(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868: /* GXTEntry: "Special Lake Lure" */
					if (!func_41(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1))
					{
						func_42(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438: /* GXTEntry: "Special River Lure" */
					if (!func_41(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1))
					{
						func_42(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217: /* GXTEntry: "Special Swamp Lure" */
					if (!func_41(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1))
					{
						func_42(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653: /* GXTEntry: "Lake Lure" */
					if (!func_41(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1))
					{
						func_42(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425: /* GXTEntry: "River Lure" */
					if (!func_41(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1))
					{
						func_42(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104: /* GXTEntry: "Swamp Lure" */
					if (!func_41(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1))
					{
						func_42(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_5(iParam0, -839724752) && func_86(iParam0, 4))
		{
		}
		else if (func_5(iParam0, 1399091007))
		{
			func_111(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		switch (iParam0)
		{
			case 990323211: /* GXTEntry: "Bundle of Arrows" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1930309310;
				break;
			case 1143540373: /* GXTEntry: "Poison Throwing Knives" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1372580021;
				break;
			case -1073808995: /* GXTEntry: "Live Crickets" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1557306571;
				break;
			case 1903483453: /* GXTEntry: "Live Worms" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 306085243;
				break;
			case 224572565: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 627131028;
				break;
			case -13395913: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 627131028;
				break;
			case 1859340712: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 239008065;
				break;
			case -1614861441: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 239008065;
				break;
			case -1336735809: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1930727055;
				break;
			case -1109613870: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1930727055;
				break;
			case 637788839: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2118798877;
				break;
			case -1161163727: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2118798877;
				break;
			case 648503798: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = -978517238;
				break;
			case -1434556002: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = -978517238;
				break;
			case -843069275: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1367906801;
				break;
			case 1356680930: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1367906801;
				break;
			case 1127253961: /* GXTEntry: "Reward" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1531214887;
				break;
			case joaat("weapon_kit_binoculars"):
			case 1652431022: /* GXTEntry: "Refined Binoculars" */
				break;
			case -102111672: /* GXTEntry: "Map" */
				bParam2 = true;
				bVar4 = true;
				break;
			case -21093309: /* GXTEntry: "Aged Pirate Rum" */
				func_113(271, func_112(-21093309 /* GXTEntry: "Aged Pirate Rum" */), 0);
				break;
			case 204375141: /* GXTEntry: "Ginseng Elixir" */
				func_113(269, func_112(204375141 /* GXTEntry: "Ginseng Elixir" */), 0);
				break;
			case -417963070: /* GXTEntry: "Valerian Root" */
				func_113(270, func_112(-417963070 /* GXTEntry: "Valerian Root" */), 0);
				break;
			case -1080874779: /* GXTEntry: "Special Health Cure" */
			case -755485480: /* GXTEntry: "Potent Health Cure" */
			case 230530039: /* GXTEntry: "Health Cure" */
			case 299161628: /* GXTEntry: "Moonshine" */
				if (MISC::GET_GAME_TIMER() >= (Global_1939221->f_10487 + 60000))
				{
					func_114(683, 1934060482 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health Bar." */, 1, 1);
					Global_1939221->f_10487 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1067476102: /* GXTEntry: "Potent Bitters" */
			case -541584777: /* GXTEntry: "Opened Cocaine Gum" */
			case 206762213: /* GXTEntry: "Cocaine Gum" */
			case 1566032147: /* GXTEntry: "Special Bitters" */
			case 1973952589: /* GXTEntry: "Bitters" */
				if (MISC::GET_GAME_TIMER() >= (Global_1939221->f_10487 + 60000))
				{
					func_114(683, 1110018439 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Stamina Bar." */, 1, 1);
					Global_1939221->f_10487 = MISC::GET_GAME_TIMER();
				}
				break;
			case -653299524: /* GXTEntry: "Snake Oil" */
			case -486559882: /* GXTEntry: "Potent Snake Oil" */
			case -324053813: /* GXTEntry: "Chewing Tobacco" */
			case -223790555: /* GXTEntry: "Special Snake Oil" */
			case 998010398: /* GXTEntry: "Opened Chewing Tobacco" */
				if (MISC::GET_GAME_TIMER() >= (Global_1939221->f_10487 + 60000))
				{
					func_114(683, 1408511260 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Dead Eye Bar." */, 1, 1);
					Global_1939221->f_10487 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1976480343: /* GXTEntry: "Special Miracle Tonic" */
			case -953313786: /* GXTEntry: "Miracle Tonic" */
			case 730856618: /* GXTEntry: "Potent Miracle Tonic" */
				if (MISC::GET_GAME_TIMER() >= (Global_1939221->f_10487 + 60000))
				{
					func_114(683, -1228016946 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health, Stamina and Dea" +
    "d Eye Bars." */, 1, 1);
					Global_1939221->f_10487 = MISC::GET_GAME_TIMER();
				}
				break;
			case -2034071102: /* GXTEntry: "Lamb Heart" */
			case -1939600995: /* GXTEntry: "Prime Rib" */
			case -1760041550: /* GXTEntry: "High Quality Beef Stew" */
			case -1708424762: /* GXTEntry: "Regional Beef Stew" */
			case -1598782722: /* GXTEntry: "Consomme" */
			case -1505924449: /* GXTEntry: "Fried Catfish" */
			case -1403873319: /* GXTEntry: "Prairie Chicken" */
			case -1335566375: /* GXTEntry: "Lamb Fry" */
			case -1192685521: /* GXTEntry: "Oyster Stew" */
			case 144810727: /* GXTEntry: "Turtle Soup" */
			case 567164682: /* GXTEntry: "Oatmeal" */
			case 1174625611: /* GXTEntry: "Corned Beef Hash" */
			case 1955751248: /* GXTEntry: "Roast Beef" */
				if (MISC::GET_GAME_TIMER() >= (Global_1939221->f_10487 + 60000))
				{
					func_114(684, -103579 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health Core." */, 1, 1);
					Global_1939221->f_10487 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1977068039: /* GXTEntry: "High Quality Beef and Eggs Stew" */
			case -399865011: /* GXTEntry: "Regional Beef and Eggs Stew" */
				if (MISC::GET_GAME_TIMER() >= (Global_1939221->f_10487 + 60000))
				{
					func_114(684, -1531530025 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health and Dead Eye" +
    " Cores." */, 1, 1);
					Global_1939221->f_10487 = MISC::GET_GAME_TIMER();
				}
				break;
			case 80178851: /* GXTEntry: "Hair Tonic" */
				func_103(524, 0);
				break;
			case 1613651027: /* GXTEntry: "Hair Pomade" */
				func_103(527, 0);
				break;
			case -885810591: /* GXTEntry: "Premium Cigarettes" */
				break;
			case -601932535: /* GXTEntry: "Ground Coffee" */
				if (func_87(1))
				{
					func_103(520, 0);
				}
				break;
			case -898386032: /* GXTEntry: "Gun Oil" */
				func_103(519, 0);
				break;
			case -2035110427: /* GXTEntry: "Mortar and Pestle" */
				if (func_3() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case 1510719693: /* GXTEntry: "Coffee Percolator" */
				func_103(532, 0);
				break;
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (iVar0 <= 0)
		{
			return 0;
		}
		iVar5 = iParam0;
		func_115(&iVar5);
		if (!func_96(iVar5, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_93(0))
		{
			return 1;
		}
		if (func_79(iParam0) == joaat("clothing"))
		{
			func_116(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_93(0) && !func_117())
		{
			Var6.f_1 = 10;
			Var6.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, 0, 0, iVar2, &Var6, 0);
			iVar29 = 0;
			while (iVar29 < Var6)
			{
				func_42(&(Var6.f_1[iVar29]), &(Var6.f_12[iVar29]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar29++;
			}
		}
		else
		{
			func_118(iVar2, 0);
		}
	}
	Var30 = { func_119(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var30))
	{
		STATS::_0x6A0184E904CDF25E(&Var30, iVar0);
	}
	func_120(iParam0);
	if (fParam6 > 0f)
	{
		if (func_5(iParam0, -839724752))
		{
			func_121(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar32 = iParam5 == 1248274121;
		func_122(iParam0, iVar0, 0, bVar32, 0, 0, 0);
	}
	return 1;
}

int func_43(var uParam0)
{
	int iVar0;

	if (uParam0->f_116)
	{
		if (DECORATOR::DECOR_EXIST_ON(uParam0->f_101, "letter_item"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(uParam0->f_101, "letter_item");
		}
		else
		{
			iVar0 = TASK::_0x804425C4BBD00883(Global_35);
			if (!func_21(iVar0, 0))
			{
			}
		}
		Global_1912966 = iVar0;
	}
	else
	{
		iVar0 = &Global_1912966;
	}
	return iVar0;
}

void func_44(var uParam0, var uParam1)
{
	int iVar0;

	uParam0->f_105 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_NUM_LABEL_TYPES(uParam1);
	iVar0 = 0;
	while (iVar0 < uParam0->f_105)
	{
		uParam0->f_5.f_2[iVar0 /*5*/] = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_TYPE(uParam1, iVar0);
		(uParam0->f_5.f_2[iVar0 /*5*/])->f_2 = &uParam0->f_5.f_2[iVar0 /*5*/];
		(uParam0->f_5.f_2[iVar0 /*5*/])->f_1 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_NUM_VALUES(uParam1, (uParam0->f_5.f_2[iVar0 /*5*/])->f_2);
		iVar0++;
	}
}

void func_45(var uParam0, var uParam1)
{
	func_123(uParam0, uParam1[0 /*11*/]);
	func_124(uParam0, uParam1);
	if (uParam1[1 /*11*/] != 0)
	{
		func_125(1, uParam1[1 /*11*/]);
	}
	else
	{
		func_18(1);
	}
	func_126(uParam0, uParam1);
	if (uParam1[2 /*11*/] != 0)
	{
		func_125(2, uParam1[2 /*11*/]);
	}
	else
	{
		func_18(2);
	}
	func_127(uParam1);
	func_128(uParam1);
}

int func_46(var uParam0, int iParam1)
{
	int iVar0;

	if (uParam0->f_1)
	{
		if (uParam0->f_7.f_1 == 0)
		{
			uParam0->f_7.f_1 = HUD::_0xB6857100F8FD433C(uParam0->f_7.f_3, -2);
		}
		if (uParam0->f_7.f_1 != 0 && uParam0->f_7 == 0)
		{
			uParam0->f_7 = HUD::_0xBE1067CD1C9570F6(uParam0->f_7.f_1);
			if (iParam1 == 0)
			{
				if (!func_129(uParam0))
				{
					return 0;
				}
			}
			return 1;
		}
	}
	else if (func_130(*uParam0, &iVar0, joaat("inventory"), -401018458, 0, 0))
	{
		if (TXD::_0xBA0163B277C2D2D0(iVar0))
		{
			TXD::_0xDB1BD07FB464584D(iVar0, 0);
			uParam0->f_5 = iVar0;
		}
	}
	return 1;
}

int func_47(var uParam0, var uParam1)
{
	if (func_131(uParam0, (*uParam1)[0 /*11*/]))
	{
		func_132(uParam0, uParam1);
		return 1;
	}
	return 0;
}

int func_48(var uParam0, var uParam1)
{
	return 1;
}

bool func_49(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 60)
	{
		return false;
	}
	if (((*Global_1949749)[iParam0 /*23*/])->f_1 & 2 == 0)
	{
		return false;
	}
	return HUD::_UIPROMPT_IS_VALID(((*Global_1949749)[iParam0 /*23*/])->f_3);
}

bool func_50(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam1 && !func_49(iParam0))
	{
		return false;
	}
	iVar0 = func_77(iParam0);
	if (HUD::_UIPROMPT_HAS_HOLD_AUTO_FILL_MODE(((*Global_1949749)[iVar0 /*23*/])->f_3))
	{
		if (((*Global_1949749)[iVar0 /*23*/])->f_20)
		{
			iVar1 = MISC::GET_GAME_TIMER();
		}
		else
		{
			iVar1 = MISC::_GET_SYSTEM_TIME();
		}
		uVar2 = HUD::_0x81801291806DBC50(((*Global_1949749)[iVar0 /*23*/])->f_3);
		if (!HUD::_UIPROMPT_IS_ACTIVE(((*Global_1949749)[iVar0 /*23*/])->f_3))
		{
			iVar3 = (iVar1 - ((*Global_1949749)[iVar0 /*23*/])->f_21);
			iVar4 = BUILTIN::FLOOR((IntToFloat(((*Global_1949749)[iVar0 /*23*/])->f_18) * (1f - ((*Global_1949749)[iVar0 /*23*/])->f_22)));
			if (iVar3 > iVar4)
			{
				return true;
			}
		}
		else
		{
			((*Global_1949749)[iVar0 /*23*/])->f_21 = iVar1;
			((*Global_1949749)[iVar0 /*23*/])->f_22 = uVar2;
		}
	}
	if (HUD::_0xCD072523791DDC1B(((*Global_1949749)[iVar0 /*23*/])->f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(((*Global_1949749)[iVar0 /*23*/])->f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(((*Global_1949749)[iVar0 /*23*/])->f_3);
}

void func_51(bool bParam0)
{
	if (bParam0)
	{
		Global_1939221 = 1;
	}
	else
	{
		Global_1939221 = 2;
	}
}

int func_52(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	uParam0->f_110 = 0;
	if (func_39(&(Global_17158[1]), 1))
	{
		iVar0 = 1;
		uParam0->f_110 = 1;
		func_71(Global_17158[1], !uParam0->f_125);
		func_71(Global_17158[0], 1);
	}
	if (func_39(&(Global_17158[0]), 1))
	{
		iVar0 = 1;
		func_71(Global_17158[0], !uParam0->f_124);
		func_71(Global_17158[1], 1);
	}
	return iVar0;
}

int func_53(int iParam0)
{
	switch (func_4(iParam0, -949239683))
	{
		case -1420737577:
			return -34349608;
		case 1712126263:
			return 1918075176;
		case 10252101:
			return -838154919;
		case -1229959999:
			return 779637421;
		case -1050374492:
			return -13228069;
		case 1513351077:
			return -1855297853;
		case -1565009253:
			return -672448089;
		case 733893097:
			return 329918092;
		case -164980960:
			return 1096961806;
		case 1894156335:
			return 2067181640;
		case 871191033:
			return 313665285;
		case -1273369295:
			return 1434623772;
		case 82200319:
			return 1668318109;
		case -873135685:
			return 486187924;
		case 24248412:
			return -1079287506;
	}
	return 0;
}

void func_54(int iParam0)
{
	switch (iParam0)
	{
		case 684416450: /* GXTEntry: "Letter from Horley" */
			func_133(-1419640182, 0);
			break;
		case -492264119: /* GXTEntry: "Letter from Cripps" */
			func_133(-2028134866, 0);
			func_103(859, 0);
			break;
		case 1397875340:
			func_133(518311877, 0);
			break;
	}
}

int func_55(int iParam0)
{
	switch (iParam0)
	{
		case -31140163: /* GXTEntry: "Panoramic Map" */
			return 0;
	}
	return 1;
}

void func_56(var uParam0)
{
	(*uParam0)[0 /*11*/] = 0;
	((*uParam0)[0 /*11*/])->f_1 = 0;
	((*uParam0)[0 /*11*/])->f_3 = 0;
	((*uParam0)[0 /*11*/])->f_5 = 0;
	((*uParam0)[0 /*11*/])->f_6 = 0;
	((*uParam0)[0 /*11*/])->f_7 = 0;
	((*uParam0)[0 /*11*/])->f_7.f_1 = 0;
	((*uParam0)[0 /*11*/])->f_7.f_2 = 0;
	((*uParam0)[0 /*11*/])->f_7.f_3 = 0;
	func_59(uParam0);
}

void func_57(var uParam0)
{
	(*uParam0)[0 /*11*/] = uParam0[2 /*11*/];
	((*uParam0)[0 /*11*/])->f_1 = ((*uParam0)[2 /*11*/])->f_1;
	((*uParam0)[0 /*11*/])->f_5 = ((*uParam0)[2 /*11*/])->f_5;
	((*uParam0)[0 /*11*/])->f_6 = ((*uParam0)[2 /*11*/])->f_6;
	((*uParam0)[0 /*11*/])->f_7 = ((*uParam0)[2 /*11*/])->f_7;
	((*uParam0)[0 /*11*/])->f_7.f_1 = ((*uParam0)[2 /*11*/])->f_7.f_1;
	((*uParam0)[0 /*11*/])->f_7.f_2 = ((*uParam0)[2 /*11*/])->f_7.f_2;
	((*uParam0)[0 /*11*/])->f_7.f_3 = ((*uParam0)[2 /*11*/])->f_7.f_3;
	((*uParam0)[0 /*11*/])->f_3 = 0;
}

void func_58(var uParam0)
{
	(*uParam0)[0 /*11*/] = uParam0[1 /*11*/];
	((*uParam0)[0 /*11*/])->f_1 = ((*uParam0)[1 /*11*/])->f_1;
	((*uParam0)[0 /*11*/])->f_5 = ((*uParam0)[1 /*11*/])->f_5;
	((*uParam0)[0 /*11*/])->f_6 = ((*uParam0)[1 /*11*/])->f_6;
	((*uParam0)[0 /*11*/])->f_7 = ((*uParam0)[1 /*11*/])->f_7;
	((*uParam0)[0 /*11*/])->f_7.f_1 = ((*uParam0)[1 /*11*/])->f_7.f_1;
	((*uParam0)[0 /*11*/])->f_7.f_2 = ((*uParam0)[1 /*11*/])->f_7.f_2;
	((*uParam0)[0 /*11*/])->f_7.f_3 = ((*uParam0)[1 /*11*/])->f_7.f_3;
	((*uParam0)[0 /*11*/])->f_3 = 0;
}

void func_59(var uParam0)
{
	(*uParam0)[2 /*11*/] = 0;
	((*uParam0)[2 /*11*/])->f_1 = 0;
	((*uParam0)[2 /*11*/])->f_3 = 0;
	((*uParam0)[2 /*11*/])->f_5 = 0;
	((*uParam0)[2 /*11*/])->f_6 = 0;
	((*uParam0)[2 /*11*/])->f_7 = 0;
	((*uParam0)[2 /*11*/])->f_7.f_1 = 0;
	((*uParam0)[2 /*11*/])->f_7.f_2 = 0;
	((*uParam0)[2 /*11*/])->f_7.f_3 = 0;
	(*uParam0)[1 /*11*/] = 0;
	((*uParam0)[1 /*11*/])->f_1 = 0;
	((*uParam0)[1 /*11*/])->f_3 = 0;
	((*uParam0)[1 /*11*/])->f_5 = 0;
	((*uParam0)[1 /*11*/])->f_6 = 0;
	((*uParam0)[1 /*11*/])->f_7 = 0;
	((*uParam0)[1 /*11*/])->f_7.f_1 = 0;
	((*uParam0)[1 /*11*/])->f_7.f_2 = 0;
	((*uParam0)[1 /*11*/])->f_7.f_3 = 0;
}

int func_60(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)
{
	int iVar0;

	switch (func_4(iParam0, -949239683))
	{
		case -1420737577:
			if (!bParam1)
			{
				iVar0 = 2129866661;
				if (bParam2)
				{
					iVar0 = 1607869040;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case 1712126263:
			if (!bParam1)
			{
				iVar0 = 1589555562;
				if (bParam2)
				{
					iVar0 = -1424266966;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case -1229959999:
			if (!bParam1)
			{
				iVar0 = 1159762194;
				if (bParam2)
				{
					iVar0 = -1791047090;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case -1050374492:
			if (!bParam1)
			{
				iVar0 = 343713021;
				if (bParam2)
				{
					iVar0 = 760057945;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case 1513351077:
			if (!bParam1)
			{
				iVar0 = 889797228;
				if (bParam2)
				{
					iVar0 = -1043439814;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case -1565009253:
			if (!bParam1)
			{
				iVar0 = 1254219723;
				if (bParam2)
				{
					iVar0 = -2077441721;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case 733893097:
			if (!bParam1)
			{
				iVar0 = 436157482;
				if (bParam2)
				{
					iVar0 = 1972630951;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case -164980960:
			if (!bParam1)
			{
				iVar0 = -138141811;
				if (bParam2)
				{
					iVar0 = 2000759837;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case 1894156335:
			if (!bParam1)
			{
				iVar0 = 1801769345;
				if (bParam2)
				{
					iVar0 = 374699583;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case 871191033:
			if (!bParam1)
			{
				iVar0 = 1290994194;
				if (bParam2)
				{
					iVar0 = -59421711;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case -1273369295:
			if (!bParam1)
			{
				iVar0 = -27851152;
				if (bParam2)
				{
					iVar0 = -1340223099;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case 82200319:
			if (!bParam1)
			{
				iVar0 = -1216929452;
				if (bParam2)
				{
					iVar0 = -1140851507;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case -873135685:
			if (!bParam1)
			{
				iVar0 = -1418730365;
				if (bParam2)
				{
					iVar0 = -1570312122;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case 24248412:
			if (!bParam1)
			{
				iVar0 = 1014486005;
				if (bParam2)
				{
					iVar0 = 416212934;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case 10252101:
			if (!bParam1)
			{
				iVar0 = -1246302402;
				if (bParam2)
				{
					iVar0 = -1791047090;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
	}
	return 0;
}

int func_61(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(iParam0, iParam1);
}

bool func_62(int iParam0)
{
	return func_134(iParam0);
}

bool func_63(int iParam0)
{
	return (func_5(iParam0, 566155764) && !UIAPPS::_IS_APP_ACTIVE(joaat("map")));
}

bool func_64(int iParam0)
{
	return ((func_5(iParam0, -1472964441) && func_6(iParam0)) && !UIAPPS::_IS_APP_ACTIVE(joaat("map")));
}

int func_65(int iParam0)
{
	if (iParam0 == 82200319)
	{
		return 1;
	}
	return 0;
}

void func_66(var uParam0)
{
	if (uParam0->f_105 > 0)
	{
		PED::_0xCB9401F918CB0F75(Global_35, "GENERIC_BOOK_READ_AVAILABLE", 1, -1);
	}
}

void func_67(var uParam0, bool bParam1)
{
	if (func_49(*uParam0))
	{
		func_135(*uParam0, bParam1, 0, 1);
	}
}

bool func_68(var uParam0, var uParam1)
{
	bool bVar0;

	if (func_32(*uParam1, uParam0->f_104))
	{
		bVar0 = !func_5(*uParam1, 1051234725);
	}
	if (func_69(*uParam1, uParam0->f_104))
	{
		bVar0 = func_5(*uParam1, 601161511);
	}
	return bVar0;
}

int func_69(int iParam0, int iParam1)
{
	switch (func_4(iParam0, -949239683))
	{
		case 1712126263:
			if (iParam1 == 2110129666)
			{
				return 1;
			}
			break;
		case 10252101:
			if (iParam1 == -358392831)
			{
				return 1;
			}
			break;
		case -1229959999:
			if (iParam1 == 391077233)
			{
				return 1;
			}
			break;
		case -1050374492:
			if (iParam1 == 1010970643)
			{
				return 1;
			}
			break;
		case 1513351077:
			if (iParam1 == 382283982)
			{
				return 1;
			}
			break;
		case -1565009253:
			if (iParam1 == -498826883)
			{
				return 1;
			}
			break;
		case 733893097:
			if (iParam1 == -1222090749)
			{
				return 1;
			}
			break;
		case -164980960:
			if (iParam1 == 1641476577)
			{
				return 1;
			}
			break;
		case 1894156335:
			if (iParam1 == 690458252)
			{
				return 1;
			}
			break;
		case 871191033:
			if (iParam1 == 1870337093)
			{
				return 1;
			}
			break;
		case -1273369295:
			if (iParam1 == -277062447)
			{
				return 1;
			}
			break;
		case 82200319:
			if (iParam1 == 1913655128)
			{
				return 1;
			}
			break;
		case -873135685:
			if (iParam1 == -180517239)
			{
				return 1;
			}
			break;
		case 24248412:
			if (iParam1 == -2082844535)
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_70(int iParam0, bool bParam1)
{
	if (bParam1 && !func_49(iParam0))
	{
		return false;
	}
	return !func_136(iParam0, 4);
}

void func_71(var uParam0, bool bParam1)
{
	if (func_49(*uParam0))
	{
		func_135(*uParam0, bParam1, 1, 1);
	}
}

void func_72(var uParam0, var uParam1)
{
	func_71(Global_17158[3], func_68(uParam0, uParam1));
}

int func_73(int iParam0, int iParam1)
{
	switch (func_4(iParam0, -949239683))
	{
		case 1712126263:
			if (iParam1 == 699685523)
			{
				return 1;
			}
			break;
		case 10252101:
			if (iParam1 == 687211918)
			{
				return 1;
			}
			break;
		case -1229959999:
			if (iParam1 == 1942589213)
			{
				return 1;
			}
			break;
		case -1050374492:
			if (iParam1 == 557096072)
			{
				return 1;
			}
			break;
		case 1513351077:
			if (iParam1 == 676223146)
			{
				return 1;
			}
			break;
		case -1565009253:
			if (iParam1 == 961781775)
			{
				return 1;
			}
			break;
		case 733893097:
			if (iParam1 == 88279163)
			{
				return 1;
			}
			break;
		case -164980960:
			if (iParam1 == 251586723)
			{
				return 1;
			}
			break;
		case 1894156335:
			if (iParam1 == 554041952)
			{
				return 1;
			}
			break;
		case 871191033:
			if (iParam1 == 1222452293)
			{
				return 1;
			}
			break;
		case -1273369295:
			if (iParam1 == 527714016)
			{
				return 1;
			}
			break;
		case 82200319:
			if (iParam1 == 1125283391)
			{
				return 1;
			}
			break;
		case -873135685:
			if (iParam1 == 1275147506)
			{
				return 1;
			}
			break;
		case 24248412:
			if (iParam1 == 224513019)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_74(var uParam0)
{
}

void func_75(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uLocal_28))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uLocal_28);
	}
	func_16(uParam0);
	uLocal_28 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Translate");
	uParam0->f_5.f_63 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uLocal_28, "Generic");
	iVar2 = 0;
	iLocal_26 = -1;
	iVar1 = 0;
	while (iVar1 < uParam0->f_105)
	{
		iVar0 = 0;
		while (iVar0 < (uParam0->f_5.f_2[iVar1 /*5*/])->f_1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_VALUE(uParam1[0 /*11*/], (uParam0->f_5.f_2[iVar1 /*5*/])->f_2, iVar0);
			switch (&uParam0->f_5.f_2[iVar1 /*5*/])
			{
				case 1410847083:
					func_137(&(uParam0->f_5), iVar2, 0, 1, 0);
					iVar2++;
					break;
				case 1724675796:
					func_137(&(uParam0->f_5), iVar2, 1, 1, 0);
					iVar2++;
					break;
				default:
					func_138(&(uParam0->f_5), iVar1, &iVar2, 2, 1);
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_76(var uParam0)
{
	int iVar0;
	int iVar1;

	iLocal_26 = -1;
	iVar1 = 0;
	while (iVar1 < uParam0->f_105)
	{
		iVar0 = 0;
		while (iVar0 < (uParam0->f_5.f_2[iVar1 /*5*/])->f_1)
		{
			switch (&uParam0->f_5.f_2[iVar1 /*5*/])
			{
				case 1410847083:
				case 1724675796:
					break;
				default:
					if (!(uParam0->f_5.f_2[iVar1 /*5*/])->f_3)
					{
						iLocal_26++;
						(uParam0->f_5.f_2[iVar1 /*5*/])->f_4 = iLocal_26;
					}
					(uParam0->f_5.f_2[iVar1 /*5*/])->f_3 = 1;
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

int func_77(int iParam0)
{
	return iParam0;
}

void func_78(var uParam0, int iParam1)
{
	var uVar0;

	uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Translate");
	uParam0->f_5.f_63 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar0, "Generic");
	if (func_5(iParam1, 1104960349))
	{
		func_139(uParam0, iParam1);
	}
	else if (func_5(iParam1, 1989861793))
	{
		if (func_5(iParam1, -885754398))
		{
			func_140(uParam0, iParam1);
		}
		else
		{
			func_141(uParam0, iParam1);
		}
	}
	else if (func_5(iParam1, 1989861793))
	{
		func_141(uParam0, iParam1);
	}
	else if (func_5(iParam1, -772152977))
	{
		func_142(uParam0, iParam1);
	}
	else if (func_5(iParam1, -2081717885))
	{
		func_143(uParam0, iParam1);
	}
	else if (func_4(iParam1, 1224357681) == 1130538400)
	{
		func_144(uParam0, iParam1);
	}
	else if (func_5(iParam1, -1227898937))
	{
	}
	else
	{
		func_145(uParam0, iParam1);
	}
}

int func_79(int iParam0)
{
	vector3 vVar0;

	if (!func_21(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_80(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_21(iParam0, 0))
	{
		return 0;
	}
	if (Global_1939168->f_6)
	{
		return 0;
	}
	iVar0 = func_146(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_147("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_148(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_149(Var4.f_4))
			{
			}
			else if (WEAPON::_0x5C2EA6C44F515F34(Var4.f_4) == iVar0)
			{
				func_13(iVar1);
				return 1;
			}
			iVar3++;
		}
		func_13(iVar1);
	}
	return 0;
}

bool func_81(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_21(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_150(iParam0);
	switch (iVar0)
	{
		case -636562458:
		case 252325943:
		case 829857647:
		case 1216664798:
		case 1341188928:
			break;
		default:
			return false;
	}
	iVar1 = func_151(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_152(&(Global_17173.f_54.f_644.f_1353.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_153(iParam0);
	iVar2 = func_152(&(Global_17173.f_54.f_644.f_1353.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == &Global_17173.f_54.f_644.f_1353.f_5[iVar2 /*17*/];
}

int func_82(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_21(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_79(iParam0);
	if (iVar1 == joaat("ammo") || (bParam1 && iVar1 == joaat("weapon")))
	{
		iVar2 = func_146(iParam0, 1);
		if (iVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar2);
		}
	}
	else if (iVar1 == joaat("weapon"))
	{
		return func_154(iParam0, 0);
	}
	if (func_155(iParam0, joaat("default")) != 0)
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_156(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_157(iParam0, bParam2) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_156(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

int func_83(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_3() == -1)
	{
		if (func_158(iParam0) && func_159(iParam0))
		{
			func_160(iParam0, iParam1, 1, &bParam2, iParam3);
			return 0;
		}
	}
	else if (iParam0 == 1259508039)
	{
		bParam2 = true;
	}
	else if (iParam0 == joaat("weapon_unarmed"))
	{
		return 0;
	}
	return 1;
}

int func_84(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	*iParam1 = iParam2;
	func_161(iParam0, iParam1);
	Var0 = { func_162(iParam0, 0, 1) };
	iVar5 = func_163(iParam0, &Var0, 0, 0);
	iVar6 = func_164(iParam0, 0, 0, 0);
	if (iVar5 > 1 && (iVar6 + iParam2) >= iVar5)
	{
		if (func_5(iParam0, -2051813666))
		{
			func_103(672, 1);
		}
		else if (func_3() == -1)
		{
			func_103(671, 0);
		}
	}
	if (func_165(iParam0, &Var0, *iParam1, 0, 0, -1, 0))
	{
		if (iVar6 < iVar5)
		{
			*iParam1 = (iVar5 - iVar6);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_85(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	if (!func_166())
	{
		return;
	}
	switch (func_4(iParam0, -949239683))
	{
		case -1565009253:
		case -1420737577:
		case -1273369295:
		case -1239610997:
		case -1229959999:
		case -1050374492:
		case -873135685:
		case -164980960:
		case 10252101:
		case 24248412:
		case 82200319:
		case 632545869:
		case 733893097:
		case 871191033:
		case 1513351077:
		case 1712126263:
		case 1894156335:
			Global_1939057->f_70.f_5 = 1;
			Global_1939057->f_70.f_6 = 0;
			Global_1939057->f_70.f_1 = iParam0;
			break;
	}
}

int func_86(int iParam0, int iParam1)
{
	if (!func_21(iParam0, 0))
	{
		return 0;
	}
	return INVENTORY::_0x245D07651B1D183B(iParam0, iParam1);
}

int func_87(int iParam0)
{
	if (!func_167(iParam0))
	{
		return 0;
	}
	return func_168(iParam0);
}

void func_88(int iParam0)
{
	if (!func_167(iParam0))
	{
		return;
	}
	func_169(iParam0);
	func_170(iParam0);
}

void func_89(int iParam0)
{
	if (func_5(iParam0, -1522723129))
	{
		func_171(-848633709, 0, 255, 0, 0);
	}
	else if (func_5(iParam0, -283942357))
	{
		func_171(-981153234, 0, 255, 0, 0);
	}
	else if (func_5(iParam0, 683680997))
	{
		func_171(-756350192, 0, 255, 0, 0);
	}
	else if (func_5(iParam0, 1307628809))
	{
		func_171(603094518, 0, 255, 0, 0);
	}
}

int func_90(int iParam0, bool bParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case -1639263599: /* GXTEntry: "Throwing Knife" */
			iVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case -1860710511:
			iVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case 1507636870:
			iVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case 1828724907:
			iVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case 1222378998: /* GXTEntry: "Improved Throwing Knife" */
			iVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case 2074469742: /* GXTEntry: "Poison Throwing Knife" */
			iVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case 1270940175:
			iVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case -1857826511:
			iVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case 480079517: /* GXTEntry: "Dynamite" */
			iVar0 = joaat("weapon_thrown_dynamite");
			break;
		case 840671577: /* GXTEntry: "Dynamite - Volatile" */
			iVar0 = joaat("weapon_thrown_dynamite");
			break;
		case joaat("ammo_molotov"):
			iVar0 = joaat("weapon_thrown_molotov");
			break;
		case -2006166057: /* GXTEntry: "Fire Bottle - Volatile" */
			iVar0 = joaat("weapon_thrown_molotov");
			break;
		case 1235846615: /* GXTEntry: "Tomahawk" */
			iVar0 = joaat("weapon_thrown_tomahawk");
			break;
		case -228768324: /* GXTEntry: "Ancient Tomahawk" */
			iVar0 = joaat("weapon_thrown_tomahawk_ancient");
			break;
		case -1411922943: /* GXTEntry: "Tomahawk - Homing" */
			iVar0 = joaat("weapon_thrown_tomahawk");
			break;
		case -834103244: /* GXTEntry: "Tomahawk - Improved" */
			iVar0 = joaat("weapon_thrown_tomahawk");
			break;
		case 34372170: /* GXTEntry: "Bolas" */
			iVar0 = 1151374672; /* GXTEntry: "Bolas" */
			break;
		case 963726415:
			iVar0 = -577893115;
			break;
		case 424030678: /* GXTEntry: "Hatchet" */
			iVar0 = joaat("weapon_melee_hatchet");
			break;
		case 446901936: /* GXTEntry: "Hunter Hatchet" */
			iVar0 = joaat("weapon_melee_hatchet_hunter");
			break;
		case -1092841802: /* GXTEntry: "Rusted Hunter Hatchet" */
			iVar0 = joaat("weapon_melee_hatchet_hunter_rusted");
			break;
		case -1452241321: /* GXTEntry: "Stone Hatchet" */
			iVar0 = joaat("weapon_melee_ancient_hatchet");
			break;
		case -1188697038: /* GXTEntry: "Cleaver" */
			iVar0 = joaat("weapon_melee_cleaver");
			break;
		case 1671758975: /* GXTEntry: "Double Bit Hatchet" */
			iVar0 = joaat("weapon_melee_hatchet_double_bit");
			break;
		case -893514737: /* GXTEntry: "Rusted Double Bit Hatchet" */
			iVar0 = joaat("weapon_melee_hatchet_double_bit_rusted");
			break;
		case -2063089161: /* GXTEntry: "Hewing Hatchet" */
			iVar0 = joaat("weapon_melee_hatchet_hewing");
			break;
		case -452897925: /* GXTEntry: "Viking Hatchet" */
			iVar0 = joaat("weapon_melee_hatchet_viking");
			break;
		default:
			break;
	}
	if (func_21(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_172(iVar0) || func_173(iVar0))
			{
				return iVar0;
			}
		}
		else
		{
			return iVar0;
		}
	}
	return iParam0;
}

int func_91(int iParam0, bool bParam1)
{
	if (!func_21(iParam0, 0))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return iParam0;
	}
	if (!bParam1)
	{
	}
	return 0;
}

void func_92(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_13 != -1)
	{
		return;
	}
	if (!func_149(iParam0))
	{
		return;
	}
	iVar0 = WEAPON::_0x865F36299079FB75(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(iVar0, true);
}

int func_93(bool bParam0)
{
	if (func_3() == -1)
	{
		return 1;
	}
	return INVENTORY::_0x0FBBFFC891A97C81(func_156(bParam0));
}

int func_94(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<4> Var27;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	if (WEAPON::_0x959383DCD42040DA(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
	{
		Var0 = { func_162(iParam0, 0, 1) };
		if (func_174(iParam0, &Var0, Var0.f_4, 0, 0))
		{
			Var5.f_9 = -1591664384;
			if (func_175(iParam0, &Var5, Var0.f_4))
			{
				Var27 = { func_176(iParam0, Var0, Var0.f_4, 0) };
				func_177(iParam0, &Var27, &Var0, 1, -142743235, 1, 0);
			}
		}
	}
	if (func_93(0))
	{
		WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
		{
			return 0;
		}
		func_95(WEAPON::_0x5C2EA6C44F515F34(iParam0), iParam1, iParam6);
		func_178(iParam0, iParam1);
		return 1;
	}
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
	{
		return 0;
	}
	if (iParam1 > 0)
	{
	}
	WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
	return 1;
}

int func_95(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_98(iParam0))
	{
		return 0;
	}
	if (!func_93(0))
	{
		return 0;
	}
	WEAPON::_0x106A811C6D3035F3(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

int func_96(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_21(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	iVar0 = func_155(iParam0, joaat("default"));
	if (iVar0 != 0)
	{
		return func_179(iParam0, iParam1, iParam2);
	}
	Var1 = { func_162(iParam0, 0, 1) };
	Var6 = { func_176(iParam0, Var1, Var1.f_4, 0) };
	return func_180(iParam0, &Var6, &Var1, iParam1, iParam2, 0);
}

int func_97(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar6;
	int iVar7;

	iVar0 = func_91(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
		if (func_3() == -1)
		{
			func_92(iVar0);
			if (iParam1 == 1248274121)
			{
				func_181(iVar0);
			}
		}
		if (!func_165(iParam0, &uVar1, 1, 0, 0, -1, 0))
		{
			func_160(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_182(iVar0);
			if (WEAPON::_0x6AD66548840472E5(iVar0))
			{
				func_94(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("weapon_fishingrod") || WEAPON::_0xC853230E76A152DF(iVar0))
			{
				func_94(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_0x6E4E1A82081EABED(iVar0))
			{
				func_94(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_0x959383DCD42040DA(iVar0))
			{
				if (iVar0 == joaat("weapon_melee_knife_john") && !func_183())
				{
					return 0;
				}
				if (WEAPON::_0x2C83212A7AA51D3D(iParam0))
				{
				}
				else if (!func_184(iVar0))
				{
					func_94(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_94(iVar0, WEAPON::_0xD3750CCC00635FC2(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_0xD955FEE4B87AFA07(iVar0))
			{
				iVar7 = func_185(Global_35, 2, 0, 1);
				if ((((func_149(iVar7) && !Global_26387) && iVar7 != iVar0) && !func_41(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 1)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_35, iVar7);
				}
				if (func_149(iVar7) && func_41(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 1))
				{
					if (!func_94(iVar0, iVar6, bParam3, bParam4, 3, 1, iParam1, 0))
					{
						return 0;
					}
				}
				else if (!func_94(iVar0, iVar6, bParam3, bParam4, 0, 1, iParam1, 0))
				{
					return 0;
				}
			}
			else if (!func_94(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
			{
				return 0;
			}
		}
	}
	else
	{
		return 0;
	}
	if (WEAPON::_0x9F0E1892C7F228A8(1) != 0 && iParam1 == 1248274121)
	{
		func_103(513, 1);
	}
	return 1;
}

bool func_98(int iParam0)
{
	return WEAPON::_0x1F7977C9101F807F(iParam0);
}

int func_99(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_98(iParam0))
	{
		return 0;
	}
	iVar4 = WEAPON::_0x7AA043F6C41D151E(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	if (func_149(iVar4))
	{
		WEAPON::GET_MAX_AMMO(Global_35, &iVar2, iVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (iVar4 == joaat("weapon_bow"))
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = WEAPON::_0xD3750CCC00635FC2(iVar4);
	}
	if (*iParam1 > 0)
	{
		iVar6 = *iParam1;
	}
	else if (*iParam1 < 0)
	{
		iVar6 = (iVar1 * MISC::ABSI(*iParam1));
	}
	if (iVar5 >= iVar6)
	{
		iVar0 = iVar6;
	}
	else if (iVar5 < iVar6 && iVar5 >= 1)
	{
		iVar0 = iVar5;
	}
	else
	{
		func_113(func_186(iParam0), func_112(iParam0), 1);
		return 0;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_93(0))
	{
		if (func_95(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return 1;
		}
	}
	else
	{
		return func_96(iParam0, *iParam1, iParam2);
	}
	return 0;
}

struct<2> func_100(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

void func_101(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

struct<2> func_102(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_103(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_187(iParam0, &iVar0, &iVar1);
	if (!func_188(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_189(iVar0, iVar1);
}

int func_104()
{
	return 0;
}

int func_105(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;

	if (func_3() == 0)
	{
		func_118(iParam0, 0);
		return 0;
	}
	iVar0 = func_190(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_191(iVar0, sParam4, iParam5, 0);
	}
	func_192(iVar0, bParam1, fParam2, iParam3);
	return iVar0;
}

void func_106(int iParam0)
{
}

void func_107(int iParam0)
{
}

void func_108(int iParam0)
{
}

void func_109(int iParam0)
{
}

void func_110()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(-1278339625) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(-1278339625, -1316535105, 1);
	}
}

void func_111(int iParam0, int iParam1)
{
	var uVar0;

	func_193(iParam0, iParam1, &uVar0);
}

int func_112(int iParam0)
{
	int iVar0;

	if (!func_21(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_194(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return iParam0;
}

void func_113(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_187(iParam0, &iVar0, &iVar1);
	if (!func_188(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_195(iParam0, 1024))
	{
		return;
	}
	func_189(iVar0, iVar1);
	(Global_1904612->f_31[iParam0 /*9*/])->f_3[0 /*2*/] = iParam1;
	((Global_1904612->f_31[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 2;
}

void func_114(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_187(iParam0, &iVar0, &iVar1);
	if (!func_188(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_195(iParam0, 1024))
	{
		return;
	}
	func_189(iVar0, iVar1);
	(Global_1904612->f_31[iParam0 /*9*/])->f_3[0 /*2*/] = iParam1;
	if (!bParam3)
	{
		((Global_1904612->f_31[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 1;
	}
	else
	{
		((Global_1904612->f_31[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 5;
	}
}

void func_115(int iParam0)
{
	switch (*iParam0)
	{
		case -1424823393: /* GXTEntry: "Opened Cigarettes" */
			*iParam0 = -885810591; /* GXTEntry: "Premium Cigarettes" */
			break;
		case 1358243310: /* GXTEntry: "Opened Cigarettes" */
			*iParam0 = 1463786584; /* GXTEntry: "Cigarettes" */
			break;
		case -541584777: /* GXTEntry: "Opened Cocaine Gum" */
			*iParam0 = 206762213; /* GXTEntry: "Cocaine Gum" */
			break;
	}
}

void func_116(int iParam0)
{
	if (func_3() != -1)
	{
		return;
	}
}

int func_117()
{
	if (INVENTORY::_0x13D234A2A3F66E63(PLAYER::PLAYER_PED_ID()) != 3)
	{
		return 0;
	}
	return INVENTORY::_0xFC7563F482781A3D();
}

int func_118(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;

	if (0 == iParam0)
	{
		return 0;
	}
	Var4.f_1 = 10;
	func_196(&Var4, 1356624740);
	return func_197(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_119(int iParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_21(iParam0, 0))
	{
		return Var0;
	}
	if (func_5(iParam0, -305066475))
	{
		if (func_3() == -1)
		{
			if (func_5(iParam0, -537818634))
			{
				return func_198(189951448);
			}
			else
			{
				return func_198(1176172851);
			}
		}
	}
	else if (func_5(iParam0, -537818634))
	{
		return func_198(-963660207);
	}
	if (func_5(iParam0, 2084895747))
	{
		return func_198(1694039471);
	}
	return Var2;
}

void func_120(int iParam0)
{
	switch (iParam0)
	{
		case 236757114: /* GXTEntry: "Flight Feather" */
			break;
	}
}

void func_121(int iParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_199(Global_1902941->f_37);
	func_201(MISC::_CREATE_VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_200(iParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_122(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	int iVar1;
	char cVar2[32];
	int iVar6;
	struct<2> Var7;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	char* sVar14;
	char* sVar15;
	int iVar16;
	char* sVar17;
	int iVar18;
	char* sVar19;
	char cVar20[128];

	if (!func_21(iParam0, 0))
	{
		return;
	}
	else if (iParam0 == 1807503187)
	{
		return;
	}
	else if (iParam1 == 0)
	{
		return;
	}
	if (!func_202() || bParam6)
	{
		func_203(iParam0, iParam1, bParam2, bParam4, bParam3, bParam5);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_204(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else if (bParam3 || bParam4)
	{
		StringCopy(&cVar2, func_204(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		bVar0 = true;
	}
	else if (bParam2 && func_86(iParam0, 2097152))
	{
		StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		bVar0 = true;
	}
	iVar6 = func_79(iParam0);
	iVar10 = 0;
	iVar11 = joaat("inventory");
	if (((((((iVar6 == joaat("ammo") && iParam0 != 424030678) && iParam0 != -1188697038) && iParam0 != 446901936) && iParam0 != -228768324) && iParam0 != 34372170) && iParam0 != 963726415) && iParam0 != 1701457723)
	{
		iVar10 = 622449822;
		iVar11 = 622449822;
	}
	iVar12 = func_150(iParam0);
	if (((((((iVar6 == -1013984273 || iVar6 == 658570475) || iVar12 == -1674363638) || iVar12 == 252325943) || iVar12 == 829857647) || iVar12 == -636562458) || iVar12 == 1341188928) || iVar12 == 1216664798)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_205(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (MISC::GET_HASH_KEY(Var7) == 121560594)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (bParam5)
	{
		Var7 = "ITEMTYPE_ORDERED_ITEM";
		Var7.f_1 = "itemtype_textures";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Var7))
	{
		return;
	}
	iVar13 = joaat("COLOR_PURE_WHITE");
	sVar14 = "Transaction_Positive";
	sVar15 = "Transaction_Feed_Sounds";
	iVar16 = 0;
	if (bVar0)
	{
		iVar13 = 619977481;
		sVar14 = "Transaction_Negative";
		iVar16 = 1;
	}
	if (func_5(iParam0, 474910316))
	{
		sVar17 = func_206(iParam0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar17))
		{
			sVar14 = sVar17;
			sVar15 = "RDRO_Collectible_Sounds_Travelling_Saleswoman";
		}
	}
	if (ITEMDATABASE::_ITEM_DATABASE_IS_OVERPOWERED_ITEM(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar13 = -856358433;
		}
		else
		{
			iVar13 = -1905433004;
		}
	}
	if (func_5(iParam0, 1816585950))
	{
		iVar13 = 76603059;
	}
	iVar18 = func_112(iParam0);
	if ((func_207(iVar12) && func_5(iParam0, -306684263)) && iVar18 != 0)
	{
		iVar18 = func_208(iParam0);
	}
	sVar19 = func_209(MISC::_CREATE_VAR_STRING(10, &cVar2, MISC::_CREATE_VAR_STRING(0, iVar18), iVar1), iVar13);
	if (((((iParam1 == 1 || func_5(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar19 = MISC::_CREATE_VAR_STRING(0, iVar18);
	}
	if ((((((iVar12 == -1839668642 && iParam0 != -1713496139) && iParam0 != 1326838792) && iParam0 != -230310728) || ((iVar12 == 231148558 && iParam0 != 1733464892) && iParam0 != -598283164)) || (iVar12 == 252325943 && iParam0 != -860557048)) || (iVar12 == -636562458 && iParam0 != -2087489409))
	{
		sVar19 = MISC::_CREATE_VAR_STRING(0, func_210(iParam0, -442898163));
	}
	if (iVar12 == -126813555 || iVar12 == 1946043663)
	{
		if (!func_5(iParam0, 920823793))
		{
			StringCopy(&cVar20, "", 128);
			if (func_211(iParam0, &cVar20))
			{
				sVar19 = func_213(func_212(cVar20), joaat("COLOR_PURE_WHITE"));
			}
		}
	}
	func_201(sVar19, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar16, iVar13, sVar15, sVar14, 0, 1);
}

int func_123(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<10> Var2;

	if (func_147("ALL SATCHEL", &(uParam0->f_1.f_1), &(uParam0->f_1), 1084182731, 0))
	{
		uParam0->f_119 = 1;
		iVar0 = 0;
		iVar1 = 0;
		if (uParam0->f_1 > 0)
		{
			Var2.f_9 = -1591664384;
			iVar0 = (uParam0->f_1 - 1);
			while (iVar0 >= 0)
			{
				if (!func_148(&Var2, iVar0, uParam0->f_1.f_1, uParam0->f_1))
				{
				}
				else
				{
					if (iParam1 == Var2.f_4)
					{
						uParam0->f_1.f_2 = iVar0;
						uParam0->f_1.f_3 = iVar1;
					}
					if (Global_1939221->f_10477 == 0)
					{
						if (func_214(&Var2, 0))
						{
							iVar1++;
						}
						if (iVar1 >= 16)
						{
							return 1;
						}
					}
				}
				iVar0 = (iVar0 + -1);
			}
			return 1;
		}
	}
	return 0;
}

bool func_124(var uParam0, var uParam1)
{
	struct<10> Var0;
	int iVar14;
	bool bVar15;

	if (uParam0->f_1.f_2 + 1 >= uParam0->f_1)
	{
		(*uParam1)[2 /*11*/] = 0;
		return false;
	}
	if (Global_17170)
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	iVar14 = 0;
	bVar15 = false;
	iVar14 = uParam0->f_1.f_2 + 1;
	while (iVar14 <= (uParam0->f_1 - 1))
	{
		if (func_148(&Var0, iVar14, uParam0->f_1.f_1, uParam0->f_1))
		{
			if (func_215(uParam1[0 /*11*/], Var0.f_4))
			{
				if (!bVar15)
				{
					(*uParam1)[1 /*11*/] = Var0.f_4;
					bVar15 = true;
				}
				else
				{
					uParam0->f_124 = 0;
					return bVar15;
				}
			}
		}
		iVar14++;
	}
	if (!bVar15)
	{
		(*uParam1)[1 /*11*/] = 0;
	}
	return bVar15;
}

void func_125(int iParam0, int iParam1)
{
	if (!func_21(iParam1, 0))
	{
		return;
	}
	if ((!func_5(iParam1, 747873593) && !func_5(iParam1, -1661502552)) && !func_5(iParam1, 2108217528))
	{
		return;
	}
	if (iParam1 != Global_1913136[iParam0 /*6*/])
	{
		((*Global_1913136)[iParam0 /*6*/])->f_1 = 3;
		(*Global_1913136)[iParam0 /*6*/] = iParam1;
		((*Global_1913136)[iParam0 /*6*/])->f_5 = 0;
	}
}

bool func_126(var uParam0, var uParam1)
{
	struct<10> Var0;
	int iVar14;
	int iVar15;
	int iVar16;
	bool bVar17;

	Var0.f_9 = -1591664384;
	iVar14 = 0;
	iVar15 = (16 - uParam0->f_1.f_3);
	if (Global_17170)
	{
		return false;
	}
	bVar17 = false;
	iVar14 = (uParam0->f_1.f_2 - 1);
	while (iVar14 >= 0)
	{
		if (Global_1939221->f_10477 == 0)
		{
			iVar16++;
			if (iVar16 >= iVar15)
			{
				return false;
			}
		}
		if (func_148(&Var0, iVar14, uParam0->f_1.f_1, uParam0->f_1))
		{
			if (func_215(uParam1[0 /*11*/], Var0.f_4))
			{
				if (!bVar17)
				{
					(*uParam1)[2 /*11*/] = Var0.f_4;
					bVar17 = true;
				}
				else
				{
					uParam0->f_125 = 0;
					return bVar17;
				}
			}
		}
		iVar14 = (iVar14 + -1);
	}
	if (!bVar17)
	{
		(*uParam1)[2 /*11*/] = 0;
	}
	return bVar17;
}

void func_127(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_21(uParam0[iVar0 /*11*/], 0))
		{
			func_216((*uParam0)[iVar0 /*11*/]);
		}
		iVar0++;
	}
}

void func_128(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_21(uParam0[iVar0 /*11*/], 0))
		{
			((*uParam0)[iVar0 /*11*/])->f_6 = func_4(uParam0[iVar0 /*11*/], -949239683);
		}
		iVar0++;
	}
}

int func_129(var uParam0)
{
	if ((!uParam0->f_3 && uParam0->f_7.f_1 != 0) && uParam0->f_7 != 0)
	{
		HUD::_0x51DE09A2196BD951(uParam0->f_7, uParam0->f_7.f_2);
		uParam0->f_3 = 1;
		return 1;
	}
	return 0;
}

int func_130(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;

	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(iParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(&(Var3.f_2[iVar0 /*3*/])))
			{
				Jump @230; //curOff = 56
			}
			else if (MISC::IS_STRING_NULL_OR_EMPTY((Var3.f_2[iVar0 /*3*/])->f_1))
			{
			}
			else
			{
				iVar1 = MISC::GET_HASH_KEY(&(Var3.f_2[iVar0 /*3*/]));
				iVar2 = MISC::GET_HASH_KEY((Var3.f_2[iVar0 /*3*/])->f_1);
				if (iParam2 != 0 && (Var3.f_2[iVar0 /*3*/])->f_2 != iParam2)
				{
					Jump @230; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @230; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @230; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*iParam1 = iVar1;
					iParam1->f_1 = iVar2;
					iParam1->f_2 = iParam2;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_131(var uParam0, var uParam1)
{
	if (uParam1->f_3)
	{
		return 1;
	}
	if (uParam1->f_1)
	{
		return func_129(uParam1);
	}
	else if (uParam1->f_5 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_101) && TXD::_0xBE72591D1509FFE4(uParam1->f_5))
		{
			if (!uParam1->f_3)
			{
				OBJECT::_0xE124889AE0521FCF(uParam0->f_101, uParam1->f_5, 0, 0);
			}
			uParam1->f_3 = 1;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_132(var uParam0, var uParam1)
{
	return 0;
}

int func_133(int iParam0, int iParam1)
{
	struct<30> Var0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (Global_1270479->f_438.f_1546 >= 40)
	{
		func_217();
		return -1;
	}
	Var0 = -1;
	Var0.f_5.f_1 = 11;
	Var0.f_18.f_1 = 10;
	Var0.f_4 = iParam0;
	Var0 = func_218();
	Var0.f_3 = iParam1;
	func_219(Var0, 0);
	return Var0;
}

bool func_134(int iParam0)
{
	return func_220(Global_1939057->f_38, iParam0);
}

void func_135(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_49(iParam0))
	{
		return;
	}
	iVar0 = func_77(iParam0);
	if (bParam1)
	{
		func_221(iParam0, 4);
		if (bParam3)
		{
			func_222(iVar0, 1);
		}
		func_223(iVar0, 1);
	}
	else
	{
		func_224(iParam0, 4);
		func_223(iVar0, 0);
	}
}

bool func_136(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1949749)[iParam0 /*23*/])->f_1 && iParam1) != 0;
}

void func_137(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	char cVar0[16];

	if (iParam1 >= 11)
	{
		return;
	}
	StringCopy(&cVar0, "textField", 16);
	StringIntConCat(&cVar0, iParam1, 16);
	if (bParam4)
	{
		StringConCat(&cVar0, "Strike", 16);
	}
	uParam0->f_64[iParam1] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_63, &cVar0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(&(uParam0->f_64[iParam1]), "text", *uParam0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(&(uParam0->f_64[iParam1]), "style", iParam2);
	StringCopy(&cVar0, "divider", 16);
	StringIntConCat(&cVar0, iParam1, 16);
	uParam0->f_76[iParam1] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_63, &cVar0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(&(uParam0->f_76[iParam1]), "isVisible", iParam3);
}

void func_138(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	char cVar0[16];

	if (*iParam2 >= 11)
	{
		return;
	}
	if (!(uParam0->f_2[iParam1 /*5*/])->f_3)
	{
		iLocal_26++;
		(uParam0->f_2[iParam1 /*5*/])->f_4 = iLocal_26;
	}
	(uParam0->f_2[iParam1 /*5*/])->f_3 = 1;
	StringCopy(&cVar0, "textField", 16);
	StringIntConCat(&cVar0, *iParam2, 16);
	uParam0->f_64[*iParam2] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_63, &cVar0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(&(uParam0->f_64[*iParam2]), "text", *uParam0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(&(uParam0->f_64[*iParam2]), "style", iParam3);
	StringCopy(&cVar0, "divider", 16);
	StringIntConCat(&cVar0, *iParam2, 16);
	uParam0->f_76[*iParam2] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_63, &cVar0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(&(uParam0->f_76[*iParam2]), "isVisible", iParam4);
	*iParam2++;
}

void func_139(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < uParam0->f_105)
	{
		iVar0 = 0;
		while (iVar0 < (uParam0->f_5.f_2[iVar1 /*5*/])->f_1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_VALUE(iParam1, (uParam0->f_5.f_2[iVar1 /*5*/])->f_2, iVar0);
			switch (&uParam0->f_5.f_2[iVar1 /*5*/])
			{
				case 1410847083:
					func_137(&(uParam0->f_5), 0, 0, 1, 0);
					break;
				case -641080715:
					func_137(&(uParam0->f_5), 1, 2, 1, 0);
					break;
				case 1724675796:
					func_137(&(uParam0->f_5), 2, 1, 1, 0);
					break;
				case 276123595:
					func_137(&(uParam0->f_5), 3, 3, 1, 0);
					break;
				case -139224928:
					func_137(&(uParam0->f_5), 4, 1, 1, 0);
					break;
				case -29447330:
					func_137(&(uParam0->f_5), 5, 2, 1, 0);
					break;
				case 159464507:
					func_137(&(uParam0->f_5), 6, 1, 1, 0);
					break;
				case 1175698187:
					func_137(&(uParam0->f_5), 7, 2, 0, 0);
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_140(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;

	iVar1 = 0;
	while (iVar1 < uParam0->f_105)
	{
		iVar0 = 0;
		while (iVar0 < (uParam0->f_5.f_2[iVar1 /*5*/])->f_1)
		{
			if (func_225(iVar0))
			{
				uParam0->f_5 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_VALUE(iParam1, (uParam0->f_5.f_2[iVar1 /*5*/])->f_2, iVar0);
				sVar3 = HUD::_GET_LABEL_TEXT_BY_HASH(uParam0->f_5);
				uParam0->f_5 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_VALUE(iParam1, (uParam0->f_5.f_2[iVar1 /*5*/])->f_2, iVar0 + 1);
				if (MISC::_DOES_STRING_EXIST_IN_STRING(sVar3, "_MH"))
				{
					func_137(&(uParam0->f_5), iVar2, 0, 1, 0);
				}
				else if (MISC::_DOES_STRING_EXIST_IN_STRING(sVar3, "_SH"))
				{
					func_137(&(uParam0->f_5), iVar2, 1, 1, 0);
				}
				else if (MISC::_DOES_STRING_EXIST_IN_STRING(sVar3, "_BDY_C"))
				{
					func_137(&(uParam0->f_5), iVar2, 3, 0, 0);
				}
				else if (MISC::_DOES_STRING_EXIST_IN_STRING(sVar3, "_BDY_J"))
				{
					func_137(&(uParam0->f_5), iVar2, 4, 0, 0);
				}
				else if (MISC::_DOES_STRING_EXIST_IN_STRING(sVar3, "_BDY_L"))
				{
					func_137(&(uParam0->f_5), iVar2, 2, 0, 0);
				}
				iVar2++;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_141(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_105)
	{
		iVar0 = 0;
		while (iVar0 < (uParam0->f_5.f_2[iVar1 /*5*/])->f_1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_VALUE(iParam1, (uParam0->f_5.f_2[iVar1 /*5*/])->f_2, iVar0);
			switch (&uParam0->f_5.f_2[iVar1 /*5*/])
			{
				case 1410847083:
					func_137(&(uParam0->f_5), iVar2, 0, 1, 0);
					iVar2++;
					break;
				case -641080715:
					func_137(&(uParam0->f_5), iVar2, 2, 1, 0);
					iVar2++;
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_142(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < uParam0->f_105)
	{
		iVar0 = 0;
		while (iVar0 < (uParam0->f_5.f_2[iVar1 /*5*/])->f_1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_VALUE(iParam1, (uParam0->f_5.f_2[iVar1 /*5*/])->f_2, iVar0);
			switch (&uParam0->f_5.f_2[iVar1 /*5*/])
			{
				case 1410847083:
					func_137(&(uParam0->f_5), 0, 0, 1, 0);
					break;
				case -641080715:
					func_137(&(uParam0->f_5), 2, 3, 1, 0);
					break;
				case 276123595:
					func_137(&(uParam0->f_5), 3, 3, 1, 0);
					break;
				case -29447330:
					func_137(&(uParam0->f_5), 4, 3, 1, 0);
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
	uParam0->f_5 = iParam1;
	func_137(&(uParam0->f_5), 1, 1, 1, 0);
}

void func_143(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_105)
	{
		iVar0 = 0;
		while (iVar0 < (uParam0->f_5.f_2[iVar1 /*5*/])->f_1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_VALUE(iParam1, (uParam0->f_5.f_2[iVar1 /*5*/])->f_2, iVar0);
			switch (&uParam0->f_5.f_2[iVar1 /*5*/])
			{
				case 1410847083:
					func_137(&(uParam0->f_5), iVar2, 1, 1, 0);
					iVar2++;
					break;
				case 1724675796:
					func_137(&(uParam0->f_5), iVar2, 3, 1, 0);
					iVar2++;
					break;
				case -641080715:
					func_137(&(uParam0->f_5), iVar2, 2, 0, 0);
					iVar2++;
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_144(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < uParam0->f_105)
	{
		iVar0 = 0;
		while (iVar0 < (uParam0->f_5.f_2[iVar1 /*5*/])->f_1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_VALUE(iParam1, (uParam0->f_5.f_2[iVar1 /*5*/])->f_2, iVar0);
			switch (&uParam0->f_5.f_2[iVar1 /*5*/])
			{
				case 1410847083:
					func_137(&(uParam0->f_5), 0, 1, 1, 0);
					break;
				case 1724675796:
					func_137(&(uParam0->f_5), 1, 0, 1, 0);
					break;
				case -139224928:
					func_137(&(uParam0->f_5), 2, 0, 1, 0);
					break;
				case -641080715:
					func_137(&(uParam0->f_5), 3, 0, 1, 0);
					break;
				case 276123595:
					func_137(&(uParam0->f_5), 4, 3, 1, 0);
					break;
				case -29447330:
					func_137(&(uParam0->f_5), 5, 3, 1, 0);
					break;
				case 1175698187:
					func_137(&(uParam0->f_5), 6, 3, 1, 0);
					break;
				case 852595847:
					func_137(&(uParam0->f_5), 7, 3, 1, 0);
					break;
				case 1488412754:
					func_137(&(uParam0->f_5), 8, 3, 1, 0);
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_145(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;

	iVar1 = 0;
	while (iVar1 < uParam0->f_105)
	{
		iVar0 = 0;
		while (iVar0 < (uParam0->f_5.f_2[iVar1 /*5*/])->f_1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_VALUE(iParam1, (uParam0->f_5.f_2[iVar1 /*5*/])->f_2, iVar0);
			switch (&uParam0->f_5.f_2[iVar1 /*5*/])
			{
				case 159464507:
				case 1410847083:
					func_226(iParam1, &(uParam0->f_5), &uVar2, 0);
					break;
				case -2016692014:
				case 1724675796:
					func_226(iParam1, &(uParam0->f_5), &uVar2, 1);
					break;
				case -1720361947:
				case -139224928:
					func_226(iParam1, &(uParam0->f_5), &uVar2, 1);
					break;
				case -641080715:
				case -29447330:
				case 276123595:
					func_226(iParam1, &(uParam0->f_5), &uVar2, 2);
					break;
				case 852595847:
				case 1175698187:
				case 1488412754:
					func_226(iParam1, &(uParam0->f_5), &uVar2, 2);
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

int func_146(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_21(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_79(iParam0);
	if (iVar0 == joaat("weapon") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_0x5C2EA6C44F515F34(iParam0);
	}
	else if (iVar0 == joaat("ammo") && WEAPON::_0x1F7977C9101F807F(iParam0))
	{
		return iParam0;
	}
	if (func_5(iParam0, 1399091007))
	{
		func_193(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_147(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_156(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_148(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 < 0)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		return 0;
	}
	if (!INVENTORY::_0x82FA24C3D3FCD9B7(iParam2, iParam1, uParam0))
	{
		return 0;
	}
	return 1;
}

bool func_149(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("weapon_unarmed"));
}

int func_150(int iParam0)
{
	struct<2> Var0;

	if (!func_21(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_151(int iParam0)
{
	switch (iParam0)
	{
		case -577270367:
			return 241235545;
		case 194818087:
			return 1827902148;
		case -845885815:
			return 1301555144;
		case -1869018428: /* GXTEntry: "No Foundation" */
			return -2056583192;
		case 1710247623: /* GXTEntry: "No Blush" */
			return 1015239729;
		case 1964684696: /* GXTEntry: "No Eye Liner" */
			return -340627321;
		case -2087489409: /* GXTEntry: "No Eye Shadow" */
			return -875805376;
		case -860557048: /* GXTEntry: "No Lipstick" */
			return -768760704;
		case -28107610:
			return -2118203104;
		case -896045342:
			return 1285634184;
		case -643819742:
			return -559080197;
		case -1504407916:
			return -1180698265;
		case -1386156083:
			return -487028314;
		case 1687431937:
			return -1811760631;
		case 1613216286:
			return 1858448324;
		default:
			break;
	}
	return 0;
}

int func_152(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (((*uParam0)[iVar0 /*17*/])->f_1 == -1)
		{
		}
		else
		{
			if (((*uParam0)[iVar0 /*17*/])->f_16 == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_153(int iParam0)
{
	int iVar0;

	iVar0 = func_150(iParam0);
	switch (iVar0)
	{
		case 1341188928:
			return -2056583192;
		case 1216664798:
			return 1015239729;
		case 829857647:
			return -340627321;
		case -636562458:
			return -875805376;
		case 252325943:
			return -768760704;
		default:
			break;
	}
	return 0;
}

int func_154(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_227(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_229(&Var0, func_228(0));
	}
	if (!func_230(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_13(iVar14);
	return uVar15;
}

int func_155(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

int func_156(bool bParam0)
{
	if (func_3() == -1)
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

struct<4> func_157(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_162(iParam0, bParam1, 0) };
	return func_176(iParam0, Var0, Var0.f_4, bParam1);
}

bool func_158(int iParam0)
{
	return func_79(iParam0) == joaat("weapon");
}

int func_159(int iParam0)
{
	var uVar0;

	if (func_3() != -1)
	{
		return 0;
	}
	if (func_86(iParam0, 1048576))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return func_165(iParam0, &uVar0, 1, 0, 0, -1, 0);
	}
	return func_41(iParam0, 1);
}

void func_160(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (func_79(iParam0) != joaat("weapon"))
	{
		return;
	}
	iVar0 = func_91(iParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return;
	}
	if (bParam2 || !func_173(iVar0))
	{
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, 0) && func_82(iParam0, 0, 0, 0) == 0))
		{
			if (func_3() == -1)
			{
				func_92(iVar0);
			}
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_122(iParam0, iParam1, 0, 0, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_161(int iParam0, int iParam1)
{
	if (func_5(iParam0, 58855631))
	{
		func_231(iParam0, -915411861, iParam1, 1);
	}
}

struct<5> func_162(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_232(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_79(iParam0);
	switch (iVar5)
	{
		case joaat("clothing"):
			Var0 = { func_176(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			break;
		case joaat("weapon"):
			Var0 = { func_228(bParam1) };
			if (bParam2 && func_233(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_174(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_174(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_175(iParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
			}
			else
			{
				Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
			}
			break;
		case joaat("coach"):
		case joaat("horse"):
			Var0.f_4 = 1782082944;
			break;
		case -1650247667:
			Var0.f_4 = -1591664384;
			Var0 = { func_234(bParam1) };
			switch (func_150(iParam0))
			{
				case -1070622585:
					Var0.f_4 = -6796437;
					break;
				case -1057349201:
					Var0.f_4 = 1473261684;
					break;
				case 874188557:
					Var0.f_4 = -241855024;
					break;
				case -2101244071:
					Var0.f_4 = -268116367;
					break;
			}
			break;
		case -2130996531:
		case joaat("dog"):
			if (func_235(iParam0, -1823706425))
			{
				Var0 = { func_176(-1838434463 /* GXTEntry: "Camp" */, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, -1838434463);
			}
			else if (func_235(iParam0, -1483207246))
			{
				Var0 = { func_176(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -1911121386))
			{
				Var0 = { func_176(-1838434463 /* GXTEntry: "Camp" */, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_235(iParam0, -1653629781))
			{
				Var0 = { func_176(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 1384535894);
			}
			break;
		default:
			if (INVENTORY::_0x780C5B9AE2819807(iParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -833319691))
			{
				Var28.f_9 = -1591664384;
				if (!func_236(Var0, &Var28, bParam1, 0, -1))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var28.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -718417579))
			{
				Var0.f_4 = -718417579;
			}
			else if (func_235(iParam0, -1653629781))
			{
				Var0 = { func_176(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 1384535894);
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("character"));
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

int func_163(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_21(iParam0, 0) && !func_61(func_22(iParam0), 2))
	{
		return 0;
	}
	if (func_79(iParam0) == 26423971)
	{
		return -1;
	}
	if (!bParam2 && func_155(iParam0, joaat("default")) == 0)
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_0xE80E50BEE276A54A(iParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_156(bParam3), iParam0);
}

int func_164(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_98(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_156(bParam1), iParam0, iParam3);
}

int func_165(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	struct<4> Var0;
	struct<10> Var4;
	int iVar26;
	int iVar27;

	func_237(&iParam0);
	if (!func_21(iParam0, 0) && !func_61(func_22(iParam0), 2))
	{
		return 0;
	}
	if (!bParam3 && func_155(iParam0, joaat("default")) == 0)
	{
		bParam3 = true;
	}
	if (func_158(iParam0) && WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		Var0 = { func_228(0) };
		Var4.f_9 = -1591664384;
		if (!func_174(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
		{
			return 0;
		}
		else if (func_175(iParam0, &Var4, 1728382685 /* GXTEntry: "Right" */))
		{
			return 0;
		}
		if (func_233(iParam0, 1))
		{
			if (!func_174(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
			{
				return 0;
			}
			else if (func_175(iParam0, &Var4, -649335959 /* GXTEntry: "Left" */))
			{
				return 0;
			}
		}
		return 1;
	}
	iVar26 = iParam5;
	if (iParam5 < 0)
	{
		iVar26 = func_163(iParam0, uParam1, bParam3, bParam4);
	}
	if (iVar26 < 0)
	{
		return 0;
	}
	else if (iVar26 == 0)
	{
		return 1;
	}
	iVar27 = func_238(iParam0, *uParam1, uParam1->f_4, bParam4, bParam3, iParam6);
	if ((iVar27 + iParam2) > iVar26)
	{
		return 1;
	}
	return 0;
}

int func_166()
{
	if (((((!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1) && !PED::IS_PED_USING_ANY_SCENARIO(Global_35)) && !func_239(Global_35, 1369124074)) && !func_239(Global_35, 713668775)) && !TASK::_0xEC7E480FF8BD0BED(Global_35)) && !PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		return 1;
	}
	return 0;
}

int func_167(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_168(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_40.f_3434[iVar1]), iVar2);
}

void func_169(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_3434[iVar1];
	MISC::SET_BIT(&uVar3, iVar2);
	Global_40.f_3434[iVar1] = uVar3;
}

void func_170(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 11:
			func_240(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			func_241(1);
			break;
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_241(2);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_241(3);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			break;
		case 30:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 31:
			break;
		case 32:
			func_242(1);
			break;
		case 33:
			func_243(1);
			break;
		case 34:
			func_244(1);
			break;
		case 35:
			break;
		case 36:
			func_245(0);
			break;
		case 37:
			func_246(0);
			break;
		case 38:
			func_247(0);
			break;
		case 39:
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 1:
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 2:
			if (func_248() && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_249("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 2);
			func_103(675, 0);
			break;
		case 3:
			if (func_248() && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_249("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 3);
			func_103(676, 0);
			break;
		case 4:
			if (func_248() && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_249("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 4, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 4);
			func_103(677, 0);
			break;
		case 5:
			if (func_248() && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_249("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 4, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 5, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 5);
			func_103(678, 0);
			break;
		case 23:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-200143754, true);
			UNLOCK::_UNLOCK_SET_VISIBLE(-200143754, true);
			WEAPON::_0x83B8D50EB9446BBA(PLAYER::PLAYER_PED_ID(), 1);
			break;
		case 47:
			if (func_3() == -1)
			{
				if (!func_41(1013902307, 1))
				{
					func_96(1013902307, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_3() == -1)
			{
				if (!func_41(1013902307, 1))
				{
					func_96(1013902307, 1, 752097756);
				}
				if (!func_41(142640135, 1))
				{
					func_96(142640135, 1, 752097756);
				}
			}
			break;
		case 48:
			if (func_3() == -1)
			{
				if (!func_41(786809402, 1))
				{
					func_96(786809402, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_3() == -1)
			{
				if (!func_41(786809402, 1))
				{
					func_96(786809402, 1, 752097756);
				}
				if (!func_41(-518019409, 1))
				{
					func_96(-518019409, 1, 752097756);
				}
			}
			break;
		case 22:
			PLAYER::_0x5B9813ECF7633FE8(0);
			break;
		case 24:
			break;
		case 25:
			break;
		case 26:
			break;
		case 27:
			break;
		case 28:
			break;
		case 29:
			break;
		case 43:
			break;
		case 44:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-843169622, true);
			Global_1939168->f_41 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 45:
			break;
		case 46:
			PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 51:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-78935213, true);
			break;
		case 52:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-384786155, true);
			break;
		case 53:
			UNLOCK::_UNLOCK_SET_UNLOCKED(296662302, true);
			break;
		case 54:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-1871453000, true);
			break;
		case 55:
			UNLOCK::_UNLOCK_SET_UNLOCKED(1397349651, true);
			break;
	}
}

int func_171(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<2> Var0;
	struct<2> Var12;
	var uVar25;

	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_250(iParam0, &uVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

int func_172(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_0x865F36299079FB75(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (UNLOCK::_UNLOCK_IS_VISIBLE(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_173(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_0x865F36299079FB75(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar0))
	{
		return 1;
	}
	return 0;
}

bool func_174(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	return func_238(iParam0, *uParam1, iParam2, bParam3, 1, iParam4) > 0;
}

int func_175(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_251(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_176(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_21(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_156(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_177(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;
	struct<13> Var15;
	struct<16> Var31;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (func_252(iParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_236(*uParam1, &Var0, bParam6, 0, -1))
	{
		return 0;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!func_93(bParam6))
	{
		iVar14 = -1;
		if (func_3() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -1591664384;
			Var15.f_8 = iParam0;
			Var15 = { *uParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_253(joaat("use"), &Var15, 1);
			if (iVar14 != -1)
			{
				Var31.f_7 = -142743235;
				Var31 = iParam5;
				Var31.f_7 = iParam4;
				func_254(iVar14, Var31);
			}
		}
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_156(bParam6), uParam1, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

void func_178(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::_0xD3750CCC00635FC2(iParam0))
	{
		iVar2 = func_255(WEAPON::_0xD3750CCC00635FC2(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar2);
		if (WEAPON::GET_MAX_AMMO(Global_35, &iVar1, iParam0) && WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, iParam0) > iVar1)
		{
			WEAPON::SET_PED_AMMO(Global_35, iParam0, iVar1);
		}
	}
}

int func_179(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	if (!func_21(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_155(iParam0, joaat("default"));
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_162(iParam0, 0, 0) };
	if (func_165(iParam0, &Var1, iParam1, 0, 0, -1, 0))
	{
		return 0;
	}
	if (!func_93(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_156(0), &uVar6, &Var1, iParam0, Var1.f_4, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

int func_180(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_21(iParam0, 0))
	{
		return 0;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return 0;
	}
	if (func_165(iParam0, uParam2, iParam3, bParam5, 0, -1, 0))
	{
		return 0;
	}
	if (!func_93(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_156(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

void func_181(int iParam0)
{
	char* sVar0;
	char* sVar1;
	int iVar2;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1939168->f_6)
	{
		return;
	}
	if (WEAPON::_0xC4DEC3CA8C365A5D(iParam0))
	{
		return;
	}
	sVar0 = "player_newWeaponType";
	sVar1 = "player_newWeaponTime";
	if (WEAPON::_0xDDC64F5E31EEDAB6(iParam0))
	{
		sVar0 = "player_newPistolWeaponType";
		sVar1 = "player_newPistolWeaponTime";
	}
	else if (WEAPON::_0xC212F1D05A8232BB(iParam0))
	{
		sVar0 = "player_newRevolverWeaponType";
		sVar1 = "player_newRevolverWeaponTime";
	}
	else if (WEAPON::_0x0A82317B7EBFC420(iParam0))
	{
		sVar0 = "player_newRifleWeaponType";
		sVar1 = "player_newRifleWeaponTime";
	}
	else if (WEAPON::_0xC75386174ECE95D5(iParam0))
	{
		sVar0 = "player_newShotgunWeaponType";
		sVar1 = "player_newShotgunWeaponTime";
	}
	DECORATOR::DECOR_SET_INT(Global_35, sVar0, iParam0);
	iVar2 = func_256();
	func_257(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_35, sVar1, iVar2);
}

int func_182(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_258(iParam0))
	{
		if (WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, 954660191) <= 0)
		{
			iVar0 = 10;
		}
		else
		{
			iVar0 = 0;
		}
	}
	else if (WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		if (WEAPON::_0x6AD66548840472E5(iParam0))
		{
			iVar0 = 12;
		}
		else
		{
			iVar0 = WEAPON::_0xD3750CCC00635FC2(iParam0) * 4;
		}
		iVar1 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, WEAPON::_0x5C2EA6C44F515F34(iParam0));
		if (iVar1 >= iVar0)
		{
			iVar0 = 0;
		}
		else if (iVar1 > 0)
		{
			iVar0 = (iVar0 - iVar1);
		}
	}
	return iVar0;
}

int func_183()
{
	return 0;
}

bool func_184(int iParam0)
{
	return WEAPON::_0x1F7977C9101F807F(WEAPON::_0x5C2EA6C44F515F34(iParam0));
}

int func_185(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_186(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_0x7AA043F6C41D151E(iParam0);
	if (WEAPON::_0x705BE297EEBDB95D(iVar0))
	{
		if (WEAPON::_0x0556E9D2ECF39D01(iVar0))
		{
			if (!func_87(49))
			{
				if (!func_87(47))
				{
					return 149;
				}
				return 151;
			}
		}
		else if (WEAPON::_0xD955FEE4B87AFA07(iVar0))
		{
			if (!func_87(50))
			{
				if (!func_87(48))
				{
					return 150;
				}
				return 152;
			}
		}
	}
	return 153;
}

void func_187(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

int func_188(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 30)
	{
		return 0;
	}
	if (func_259(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_260(iParam0))
	{
		return 0;
	}
	if (func_261(iParam0))
	{
		return 0;
	}
	if ((Global_1900718->f_67 && !func_195(iParam0, 1)) || func_262(32768))
	{
		if (!func_195(iParam0, 262144) || !Global_1904612->f_8189)
		{
			return 0;
		}
	}
	if (!func_263())
	{
		return 0;
	}
	return 1;
}

void func_189(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904612[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1904612)[iParam0] = uVar0;
}

int func_190(int iParam0, bool bParam1, int iParam2)
{
	float fVar0;
	struct<13> Var1;
	int iVar24;
	int iVar25;

	if (func_3() == 0)
	{
		return 0;
	}
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_41(1811977508 /* GXTEntry: "Elk Antler Trinket" */, 1))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	Var1.f_1 = 10;
	Var1.f_12 = 10;
	MISC::_0x48E4D50F87A96AA5(Global_35, 1, 1, iParam0, &Var1, 0);
	iVar24 = 0;
	while (iVar24 < Var1)
	{
		if (&Var1.f_1[iVar24] == 2084597891)
		{
			return BUILTIN::CEIL((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
		}
		else
		{
			iVar25 = &Var1.f_1[iVar24];
			if (func_21(iVar25, 0) && func_5(iVar25, -1921346699))
			{
				return BUILTIN::CEIL((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_191(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (bParam3)
		{
			func_264(iParam0, 1000);
			return;
		}
		sParam1 = "FEED_MONEY_EARN";
	}
	func_201(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_192(int iParam0, bool bParam1, float fParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_265() || func_266())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_201(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
		}
		func_201(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, 752097756);
		func_101(func_198(1644987397), iVar1);
	}
}

void func_193(int iParam0, int iParam1, var uParam2)
{
	*iParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case 1234009870: /* GXTEntry: "Revolver Cartridges - Regular" */
			*iParam1 = 1802325493;
			*uParam2 = 1681219929; /* GXTEntry: "Revolver Cartridges - Regular" */
			break;
		case -1202134084: /* GXTEntry: "Opened Revolver Cartridges" */
			*iParam1 = -864693164;
			*uParam2 = 1681219929; /* GXTEntry: "Revolver Cartridges - Regular" */
			break;
		case 1297050066: /* GXTEntry: "Revolver Cartridges - Express" */
			*iParam1 = -603289736;
			*uParam2 = 1232099469; /* GXTEntry: "Revolver Cartridges - Express" */
			break;
		case -1780177928: /* GXTEntry: "Revolver Cartridges - High Velocity" */
			*iParam1 = -1803237008;
			*uParam2 = -2084181920; /* GXTEntry: "Revolver Cartridges - High Velocity" */
			break;
		case -1467836497: /* GXTEntry: "Pistol Cartridges - Regular" */
			*iParam1 = -1175521284;
			*uParam2 = joaat("ammo_pistol");
			break;
		case 1723805622: /* GXTEntry: "Opened Pistol Cartridges" */
			*iParam1 = -1559549888;
			*uParam2 = joaat("ammo_pistol");
			break;
		case -153287664: /* GXTEntry: "Pistol Cartridges - Express" */
			*iParam1 = -1650796693;
			*uParam2 = 836939099; /* GXTEntry: "Pistol Cartridges - Express" */
			break;
		case 1845082736: /* GXTEntry: "Pistol Cartridges - High Velocity" */
			*iParam1 = -1521597660;
			*uParam2 = -1411815376; /* GXTEntry: "Pistol Cartridges - High Velocity" */
			break;
		case 406755377: /* GXTEntry: "Rifle Cartridges - Regular" */
			*iParam1 = -1288829256;
			*uParam2 = joaat("ammo_rifle");
			break;
		case 1469029564: /* GXTEntry: "Opened Rifle Cartridges" */
			*iParam1 = 1393841762;
			*uParam2 = joaat("ammo_rifle");
			break;
		case 45760211: /* GXTEntry: "Rifle Cartridges - Express" */
			*iParam1 = -851229814;
			*uParam2 = 1654725195; /* GXTEntry: "Rifle Cartridges - Express" */
			break;
		case -276295943: /* GXTEntry: "Rifle Cartridges - High Velocity" */
			*iParam1 = 914704115;
			*uParam2 = 1858824185; /* GXTEntry: "Rifle Cartridges - High Velocity" */
			break;
		case -2029793397: /* GXTEntry: "Repeater Cartridges - Regular" */
			*iParam1 = -219896679;
			*uParam2 = -1330115686; /* GXTEntry: "Repeater Cartridges - Regular" */
			break;
		case 2120467495:
			*iParam1 = 516838334;
			*uParam2 = -1330115686; /* GXTEntry: "Repeater Cartridges - Regular" */
			break;
		case -2075613923: /* GXTEntry: "Repeater Cartridges - Express" */
			*iParam1 = -385817936;
			*uParam2 = -578347576; /* GXTEntry: "Repeater Cartridges - Express" */
			break;
		case 122656217: /* GXTEntry: "Repeater Cartridges - High Velocity" */
			*iParam1 = 1192843172;
			*uParam2 = 231465488; /* GXTEntry: "Repeater Cartridges - High Velocity" */
			break;
		case 2107187484: /* GXTEntry: "Shotgun Shells - Regular" */
			*iParam1 = 954871696;
			*uParam2 = joaat("ammo_shotgun");
			break;
		case -791844268: /* GXTEntry: "Opened Shotgun Shells" */
			*iParam1 = -1217273132;
			*uParam2 = joaat("ammo_shotgun");
			break;
		case 305770744: /* GXTEntry: "Shotgun - Slug" */
			*iParam1 = -2087227528;
			*uParam2 = 314966081; /* GXTEntry: "Shotgun - Slug" */
			break;
		case 550900979: /* GXTEntry: "Rifle Cartridges - Varmint" */
			*iParam1 = -618066518;
			*uParam2 = 2113196069;
			break;
	}
}

int func_194(int iParam0)
{
	switch (iParam0)
	{
		case -59585102: /* GXTEntry: "Tonics Satchel" */
			return MISC::GET_HASH_KEY("KIT_POUCH_REMEDIES_MP");
		case 1018123892: /* GXTEntry: "Ingredients Satchel" */
			return MISC::GET_HASH_KEY("KIT_POUCH_INGREDIENTS_MP");
		case 982182330: /* GXTEntry: "Materials Satchel" */
			return MISC::GET_HASH_KEY("KIT_POUCH_MATERIALS_MP");
		case -1406390556: /* GXTEntry: "Valuables Satchel" */
			return MISC::GET_HASH_KEY("KIT_POUCH_VALUABLES_MP");
		case -1455768246: /* GXTEntry: "Kit Satchel" */
			return MISC::GET_HASH_KEY("KIT_POUCH_KIT_MP");
		case -921879912: /* GXTEntry: "Provisions Satchel" */
			return MISC::GET_HASH_KEY("KIT_POUCH_PROVISIONS_MP");
	}
	return 0;
}

bool func_195(int iParam0, int iParam1)
{
	return ((Global_1904612->f_31[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

void func_196(var uParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	if (iParam1 == 0)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (&uParam0->f_1[iVar1] == iParam1)
		{
			return;
		}
		switch (iParam1)
		{
			case 291123060:
			case 617531372:
				if (&uParam0->f_1[iVar1] == 617531372 || &uParam0->f_1[iVar1] == 291123060)
				{
					bVar0 = true;
				}
				break;
			case 1356624740:
			case 1884295263:
				if (&uParam0->f_1[iVar1] == 1356624740 || &uParam0->f_1[iVar1] == 1884295263)
				{
					bVar0 = true;
				}
				break;
			case -1850666435:
			case 1551239286:
			case 1937393363:
				if ((&uParam0->f_1[iVar1] == 1551239286 || &uParam0->f_1[iVar1] == -1850666435) || &uParam0->f_1[iVar1] == 1937393363)
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			uParam0->f_1[iVar1] = iParam1;
			return;
		}
		iVar1++;
	}
	if (*uParam0 >= 10)
	{
		return;
	}
	uParam0->f_1[*uParam0] = iParam1;
	*uParam0++;
}

int func_197(int iParam0, var uParam1, var uParam2, int iParam3)
{
	var uVar0;
	struct<14> Var1;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return 0;
	}
	func_267(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_268(uParam2, iParam0, Var1);
	return 1;
}

struct<2> func_198(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

char* func_199(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PROVISION_FISH_BLUEGILL";
		case 1:
			return "PROVISION_FISH_BULLHEAD_CATFISH";
		case 2:
			return "PROVISION_FISH_CHAIN_PICKEREL";
		case 3:
			return "PROVISION_FISH_CHANNEL_CATFISH";
		case 4:
			return "PROVISION_FISH_LAKE_STURGEON";
		case 5:
			return "PROVISION_FISH_LARGEMOUTH_BASS";
		case 6:
			return "PROVISION_FISH_LONGNOSE_GAR";
		case 7:
			return "PROVISION_FISH_MUSKIE";
		case 8:
			return "PROVISION_FISH_NORTHERN_PIKE";
		case 9:
			return "PROVISION_FISH_PERCH";
		case 10:
			return "PROVISION_FISH_REDFIN_PICKEREL";
		case 11:
			return "PROVISION_FISH_ROCK_BASS";
		case 12:
			return "PROVISION_FISH_SMALLMOUTH_BASS";
		case 13:
			return "PROVISION_FISH_SOCKEYE_SALMON";
		case 14:
			return "PROVISION_FISH_STEELHEAD_TROUT";
		default:
			break;
	}
	return "FISHTYPE_UNKNOWN";
}

int func_200(int iParam0)
{
	var uVar0;

	if (!func_130(iParam0, &uVar0, joaat("inventory"), 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

var func_201(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
{
	struct<4> Var0;
	struct<7> Var13;
	var uVar20;

	Var0 = -2;
	Var0.f_1 = sParam5;
	Var0.f_2 = sParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = _NAMESPACE71::_0xB249EBCB30DD88E0(&Var0, &Var13, iParam8);
	func_269(sParam0, sParam1, iParam2);
	return uVar20;
}

bool func_202()
{
	return !&Global_1912968;
}

void func_203(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1912968->f_3)
	{
		if ((((&Global_1912968->f_4[iVar0 /*6*/] == iParam0 && (Global_1912968->f_4[iVar0 /*6*/])->f_2 == bParam2) && (Global_1912968->f_4[iVar0 /*6*/])->f_3 == iParam3) && (Global_1912968->f_4[iVar0 /*6*/])->f_4 == bParam4) && (Global_1912968->f_4[iVar0 /*6*/])->f_5 == bParam5)
		{
			(Global_1912968->f_4[iVar0 /*6*/])->f_1 = ((Global_1912968->f_4[iVar0 /*6*/])->f_1 + iParam1);
			return;
		}
		iVar0++;
	}
	if (Global_1912968->f_3 < 19)
	{
		Global_1912968->f_4[Global_1912968->f_3 /*6*/] = iParam0;
		(Global_1912968->f_4[Global_1912968->f_3 /*6*/])->f_1 = iParam1;
		(Global_1912968->f_4[Global_1912968->f_3 /*6*/])->f_2 = bParam2;
		(Global_1912968->f_4[Global_1912968->f_3 /*6*/])->f_3 = iParam3;
		(Global_1912968->f_4[Global_1912968->f_3 /*6*/])->f_4 = bParam4;
		(Global_1912968->f_4[Global_1912968->f_3 /*6*/])->f_5 = bParam5;
		Global_1912968->f_3++;
	}
}

char* func_204(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_205(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;

	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(iParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(&(Var3.f_2[iVar0 /*3*/])))
			{
				Jump @227; //curOff = 56
			}
			else if (MISC::IS_STRING_NULL_OR_EMPTY((Var3.f_2[iVar0 /*3*/])->f_1))
			{
			}
			else
			{
				iVar1 = MISC::GET_HASH_KEY(&(Var3.f_2[iVar0 /*3*/]));
				iVar2 = MISC::GET_HASH_KEY((Var3.f_2[iVar0 /*3*/])->f_1);
				if (iParam2 != 0 && (Var3.f_2[iVar0 /*3*/])->f_2 != iParam2)
				{
					Jump @227; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @227; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @227; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = { *(Var3.f_2[iVar0 /*3*/]) };
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

char* func_206(int iParam0)
{
	if (func_5(iParam0, -1995062316))
	{
		return "collectible_arrowheads";
	}
	if (func_5(iParam0, 1239889275))
	{
		return "collectible_liquor_bottles";
	}
	if (func_5(iParam0, 143267379))
	{
		return "collectible_coins";
	}
	if (func_5(iParam0, -944041124))
	{
		return "colectible_heirlooms";
	}
	if (func_5(iParam0, 1562621600))
	{
		return "collectible_jewelry";
	}
	if (func_5(iParam0, -149719013))
	{
		return "collectible_bird_eggs";
	}
	if (func_5(iParam0, 1940829793))
	{
		return "collectible_tarot_cards";
	}
	if (func_5(iParam0, 781094263))
	{
		return "collectible_flowers";
	}
	return "";
}

int func_207(int iParam0)
{
	switch (iParam0)
	{
		case -1696039442:
		case 688466329:
		case 759802290:
			return 0;
		default:
			break;
	}
	return 1;
}

int func_208(int iParam0)
{
	struct<19> Var0;
	int iVar35;

	if (!func_21(iParam0, 0))
	{
		return 0;
	}
	Var0.f_2 = 5;
	Var0.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(iParam0, &Var0))
	{
		iVar35 = 0;
		while (iVar35 < 8)
		{
			if ((Var0.f_18[iVar35 /*2*/])->f_1 == 14460646)
			{
				if (&Var0.f_18[iVar35 /*2*/] != 0)
				{
					return &(Var0.f_18[iVar35 /*2*/]);
				}
			}
			iVar35++;
		}
	}
	return 0;
}

char* func_209(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_210(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_270(iParam0, iParam1);
	if (iVar0 == 0)
	{
		return 0;
	}
	return iVar0;
}

int func_211(int iParam0, char* sParam1)
{
	int iVar0;
	char cVar1[128];

	if (!func_21(iParam0, 0))
	{
		return 0;
	}
	StringCopy(sParam1, func_271(iParam0), 128);
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);
	if (!func_272(iParam0))
	{
		return 0;
	}
	StringCopy(&cVar1, func_273(iParam0), 128);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
		return 0;
	}
	StringConCat(&cVar1, " - ", 128);
	iVar0 = (iVar0 + HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar1));
	StringConCat(&cVar1, sParam1, 128);
	if (iVar0 >= 127)
	{
		return 0;
	}
	*sParam1 = { cVar1 };
	return 1;
}

var func_212(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

char* func_213(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_209(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

int func_214(var uParam0, int iParam1)
{
	int iVar0;

	if (func_274(uParam0->f_9))
	{
		return 0;
	}
	if (!func_275(*uParam0))
	{
		return 0;
	}
	if (!func_276(uParam0->f_4, iParam1, 0))
	{
		return 0;
	}
	if (!func_277(uParam0->f_4))
	{
		return 0;
	}
	if (func_278(0))
	{
		if (!func_21(uParam0->f_4, 0))
		{
			return 0;
		}
		if (func_117())
		{
			iVar0 = func_164(uParam0->f_4, 1, 0, 0);
			if (iVar0 < func_238(uParam0->f_4, uParam0->f_5, uParam0->f_9, 0, 0, 0))
			{
				uParam0->f_11 = iVar0;
			}
		}
		if (uParam0->f_11 <= 0)
		{
			return 0;
		}
	}
	if (Global_1939221->f_10478 == 0 && !func_279())
	{
		func_280(uParam0->f_4);
	}
	else
	{
		func_281(0);
	}
	return 1;
}

int func_215(int iParam0, int iParam1)
{
	switch (func_4(iParam1, -949239683))
	{
		case -1565009253:
		case -1273369295:
		case -1229959999:
		case -1050374492:
		case -873135685:
		case -164980960:
		case 10252101:
		case 24248412:
		case 82200319:
		case 733893097:
		case 871191033:
		case 1513351077:
		case 1712126263:
		case 1894156335:
			if (Global_1939221->f_10477 != 1061777683 || func_4(iParam0, 1224357681) == func_4(iParam1, 1224357681))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_216(var uParam0)
{
	struct<5> Var0;

	if (func_65(uParam0->f_6))
	{
		if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(*uParam0, &Var0))
		{
			uParam0->f_7.f_2 = Var0.f_4;
		}
	}
}

void func_217()
{
}

var func_218()
{
	Global_1270479->f_438.f_1552++;
	if (Global_1270479->f_438.f_1552 >= 2147483646)
	{
		Global_1270479->f_438.f_1552 = 0;
	}
	return Global_1270479->f_438.f_1552;
}

void func_219(struct<30> Param0, int iParam30)
{
	switch (iParam30)
	{
		case 0:
			*(Global_1270479->f_438.f_44[func_282() /*30*/]) = { Param0 };
			func_283((func_282() + 1 % 40));
			Global_1270479->f_438.f_1546++;
			break;
		case 1:
			*(Global_1270479->f_438.f_1245[func_284() /*30*/]) = { Param0 };
			func_285((func_284() + 1 % 10));
			Global_1270479->f_438.f_1547++;
			break;
	}
}

bool func_220(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_221(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1949749)[iParam0 /*23*/])->f_1 = (((*Global_1949749)[iParam0 /*23*/])->f_1 - (((*Global_1949749)[iParam0 /*23*/])->f_1 && iParam1));
}

void func_222(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1949749)[iParam0 /*23*/])->f_3))
	{
		if (((*Global_1949749)[iParam0 /*23*/])->f_5 == 5 && !func_136(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1949749)[iParam0 /*23*/])->f_3, 0);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1949749)[iParam0 /*23*/])->f_3, iParam1);
		}
	}
}

void func_223(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1949749)[iParam0 /*23*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1949749)[iParam0 /*23*/])->f_3, iParam1);
	}
}

void func_224(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1949749)[iParam0 /*23*/])->f_1 = (((*Global_1949749)[iParam0 /*23*/])->f_1 || iParam1);
}

int func_225(int iParam0)
{
	if ((iParam0 % 2) == 0)
	{
		return 1;
	}
	return 0;
}

void func_226(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (*uParam2 < 7)
	{
		uParam1->f_64[*uParam2] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_63, func_286(iParam0, *uParam2));
		DATABINDING::_DATABINDING_ADD_DATA_HASH(&(uParam1->f_64[*uParam2]), "text", *uParam1);
		DATABINDING::_DATABINDING_ADD_DATA_HASH(&(uParam1->f_64[*uParam2]), "style", iParam3);
		*uParam2++;
	}
}

struct<14> func_227(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<14> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_13 = -1;
	if (iParam0 != 0)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1591664384)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0 && iParam3 != -1591664384)
	{
		Var0.f_3 = iParam3;
	}
	if (iParam4 != 0)
	{
		Var0.f_4 = iParam4;
	}
	if (iParam5 != 0)
	{
		Var0.f_5 = iParam5;
	}
	if (iParam6 != 0)
	{
		Var0.f_8 = iParam6;
	}
	return Var0;
}

struct<4> func_228(bool bParam0)
{
	int iVar0;

	iVar0 = func_156(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1270479->f_4)))
		{
			Global_1270479->f_4 = { func_176(923904168, func_232(bParam0), -740156546, bParam0) };
		}
		return Global_1270479->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1270479->f_16)))
		{
			Global_1270479->f_16 = { func_176(923904168, func_232(bParam0), -740156546, 0) };
		}
		return Global_1270479->f_16;
	}
	return func_176(923904168, func_232(bParam0), -740156546, 0);
}

void func_229(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_230(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_156(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_231(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_21(iParam0, 0) && !func_61(func_22(iParam0), 2))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(iParam0, iParam1, &Var0))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	if (!bParam3)
	{
	}
	*iParam2 = Var0.f_1;
	return 1;
}

struct<4> func_232(bool bParam0)
{
	int iVar0;

	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_156(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1270479))
			{
				*Global_1270479 = { func_176(joaat("character"), func_287(), -1591664384, bParam0) };
			}
			return *Global_1270479;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1270479->f_12)))
			{
				Global_1270479->f_12 = { func_176(joaat("character"), func_287(), -1591664384, 0) };
			}
			return Global_1270479->f_12;
		}
	}
	return func_176(joaat("character"), func_287(), -1591664384, bParam0);
}

int func_233(int iParam0, bool bParam1)
{
	if (func_150(iParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
	{
		if (bParam1)
		{
			return func_288();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

struct<4> func_234(bool bParam0)
{
	int iVar0;

	iVar0 = func_156(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1270479->f_8)))
		{
			Global_1270479->f_8 = { func_176(271701509, func_232(bParam0), 12999093, 0) };
		}
		return Global_1270479->f_8;
	}
	return func_176(271701509, func_232(bParam0), 12999093, 0);
}

int func_235(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_150(iParam0);
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &iVar0))
		{
			if (func_289(iParam0, iParam1, iVar0))
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

bool func_236(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_290(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_237(int iParam0)
{
	if (!func_21(*iParam0, 0))
	{
		return 0;
	}
	if (!func_291(*iParam0))
	{
		return 0;
	}
	switch (*iParam0)
	{
		case -1073808995: /* GXTEntry: "Live Crickets" */
			*iParam0 = -1753819339; /* GXTEntry: "Cricket Bait" */
			break;
		case 1903483453: /* GXTEntry: "Live Worms" */
			*iParam0 = -1527293029; /* GXTEntry: "Worm Bait" */
			break;
		case -541584777: /* GXTEntry: "Opened Cocaine Gum" */
			*iParam0 = 206762213; /* GXTEntry: "Cocaine Gum" */
			break;
		case 998010398: /* GXTEntry: "Opened Chewing Tobacco" */
			*iParam0 = -324053813; /* GXTEntry: "Chewing Tobacco" */
			break;
		case -1424823393: /* GXTEntry: "Opened Cigarettes" */
			*iParam0 = -885810591; /* GXTEntry: "Premium Cigarettes" */
			break;
		default:
			return 0;
	}
	return 1;
}

int func_238(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_21(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_155(iParam0, joaat("default")) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_176(iParam0, Param1, iParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_156(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_156(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

int func_239(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	return 0;
}

void func_240(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (bParam0)
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, 1);
	}
	else
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, 0);
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 1, 1);
	}
}

void func_241(int iParam0)
{
	int iVar0;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1954462->f_5.f_7))
	{
		return;
	}
	if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1954462->f_5.f_7) > iParam0)
	{
		iVar0 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(Global_1954462->f_5.f_7, iParam0);
		if (iVar0 == &Global_1954462->f_5.f_14[iParam0 /*82*/])
		{
			return;
		}
	}
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1954462->f_5.f_7, iParam0, "pause_info_panel_list", &(Global_1954462->f_5.f_14[iParam0 /*82*/]));
}

void func_242(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 440, !bParam0);
}

void func_243(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 439, !bParam0);
}

void func_244(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 438, !bParam0);
}

void func_245(bool bParam0)
{
	int iVar0;

	iVar0 = 398076311;
	if (bParam0)
	{
		HUD::_0x4CC5F2FC1332577F(iVar0);
	}
	else
	{
		HUD::_0x8BC7C1F929D07BF3(iVar0);
	}
}

void func_246(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 50;
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 1);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 1);
	}
	else
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 0);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 0);
	}
}

void func_247(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 49;
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 1);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 1);
	}
	else
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 0);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 0);
	}
}

int func_248()
{
	return 1;
	if (Global_1572887->f_13 == 0)
	{
		return 1;
	}
	return Global_40.f_1;
}

var func_249(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<4> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = iParam4;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam8;
	Var13.f_7 = 1;
	Var13 = iParam7;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	Var13.f_7 = 1;
	uVar21 = _NAMESPACE71::_0x26E87218390E6729(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

int func_250(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	var uVar2;
	struct<17> Var3;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return 0;
	}
	if (NETWORK::_0xFBE782B3165AC8EC(iParam0))
	{
		return 1;
	}
	if (bParam7)
	{
		bVar0 = (_NAMESPACE26::_0xD6F6ACF4392187FB(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) && _NAMESPACE26::_0x0F99F6436528A089(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())));
		bParam7 = bVar0;
	}
	POSSE::_0xC08AFF658B2E51DA(&iVar1);
	if (iVar1 != 0)
	{
		func_292(iParam2, -372840566);
	}
	if (!bParam7)
	{
		if (!NETWORK::_0x64A36BA85CE01A81(&uVar2, &(uParam3->f_1), &(iParam2->f_1), uParam1))
		{
			return 0;
		}
	}
	else if (!NETWORK::_0x7A8E8DF782B47EB0(&uVar2, &(iParam2->f_1), uParam1))
	{
		return 0;
	}
	Var3.f_1 = 11;
	Var3.f_16 = 255;
	Var3.f_13 = iParam4;
	Var3.f_16 = iParam5;
	Var3.f_14 = iParam6;
	Var3 = { *iParam2 };
	func_293(uParam1, iParam0, Var3);
	return 1;
}

int func_251(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_156(0);
	*uParam1 = { func_176(iParam0, func_228(0), iParam3, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, uParam1, uParam2, 22, 1))
	{
		return 0;
	}
	return 1;
}

int func_252(int iParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_253(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_294(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 712853601, iParam0))
		{
			return func_295(NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 16), iVar0, uParam1);
		}
	}
	else
	{
		return func_296(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

void func_254(int iParam0, struct<16> Param1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1270479->f_20)
	{
		if (&Global_1270479->f_20.f_1[iVar0 /*20*/] == iParam0)
		{
			if ((Global_1270479->f_20.f_1[iVar0 /*20*/])->f_1 == 1 || (Global_1270479->f_20.f_1[iVar0 /*20*/])->f_1 == 5)
			{
				(Global_1270479->f_20.f_1[iVar0 /*20*/])->f_4 = { Param1 };
			}
			return;
		}
		iVar0++;
	}
}

int func_255(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_256()
{
	return &Global_1902688;
}

void func_257(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_297(*iParam0);
	iVar1 = func_298(*iParam0);
	iVar2 = func_299(*iParam0);
	iVar3 = func_300(*iParam0);
	iVar4 = func_301(*iParam0);
	iVar5 = func_302(*iParam0);
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
	iVar6 = func_303(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_303(iVar1, iVar0);
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
	func_304(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_258(int iParam0)
{
	return WEAPON::_0xC4DEC3CA8C365A5D(iParam0);
}

bool func_259(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(&(Global_17173.f_2563[iParam0]), iParam1);
}

int func_260(int iParam0)
{
	if (func_195(iParam0, 4))
	{
		return 0;
	}
	return 1;
}

int func_261(int iParam0)
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

bool func_262(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

int func_263()
{
	if (!func_305())
	{
		return 0;
	}
	return Global_1904612->f_8187;
}

void func_264(int iParam0, int iParam1)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_306())
	{
		Global_1912968->f_125 = MISC::GET_GAME_TIMER();
		Global_1912968->f_126 = iParam1;
	}
	Global_1912968->f_127 = (Global_1912968->f_127 + iParam0);
}

bool func_265()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797);
}

bool func_266()
{
	return DLC::IS_DLC_PRESENT(-2112896652);
}

void func_267(var uParam0)
{
	func_196(uParam0, 143479330);
	if (func_307() == 2026485318)
	{
		func_196(uParam0, 617531372);
	}
	else
	{
		func_196(uParam0, 291123060);
	}
}

void func_268(var uParam0, int iParam1, struct<14> Param2)
{
	int iVar0;
	struct<21> Var1;

	if (!func_308(uParam0))
	{
		return;
	}
	if (Global_1270479->f_2518 < 20)
	{
		Global_1270479->f_2518++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*(Global_1270479->f_2518.f_1[iVar0 /*21*/]) = { *(Global_1270479->f_2518.f_1[iVar0 + 1 /*21*/]) };
			iVar0++;
		}
	}
	Var1.f_7.f_2.f_1 = 10;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_6 = 1;
	Var1.f_7 = { Param2 };
	*(Global_1270479->f_2518.f_1[(Global_1270479->f_2518 - 1) /*21*/]) = { Var1 };
}

void func_269(char* sParam0, char* sParam1, int iParam2)
{
	_NAMESPACE84::_0x74BCCEB233AD95B2(-466562563, MISC::GET_HASH_KEY(sParam0));
	_NAMESPACE84::_0x74BCCEB233AD95B2(1885309238, MISC::GET_HASH_KEY(sParam1));
	_NAMESPACE84::_0x74BCCEB233AD95B2(-826961056, iParam2);
}

int func_270(int iParam0, int iParam1)
{
	struct<2> Var0[20];
	int iVar41;
	int iVar42;
	int iVar43;

	iVar41 = 0;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_TAG_DATA(iParam0, &Var0, &iVar42, 20))
	{
		iVar43 = 0;
		while (iVar43 < iVar42)
		{
			if ((Var0[iVar43 /*2*/])->f_1 == iParam1)
			{
				iVar41 = &Var0[iVar43 /*2*/];
				return iVar41;
			}
			iVar43++;
		}
	}
	return 0;
}

char* func_271(int iParam0)
{
	int iVar0;

	if (!func_21(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_112(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(iVar0);
}

int func_272(int iParam0)
{
	if (func_150(iParam0) == -126813555 || func_150(iParam0) == 1946043663)
	{
		return 1;
	}
	return 0;
}

char* func_273(int iParam0)
{
	int iVar0;

	if (!func_21(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_208(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(iVar0);
}

int func_274(int iParam0)
{
	switch (iParam0)
	{
		case -1649851713:
		case -997505963:
		case 1005272:
		case 348853959:
		case 359221401:
		case 1045621973:
		case 1463321587:
		case 1583044470:
		case 1651573695:
			return 1;
	}
	return 0;
}

int func_275(struct<10> Param0, var uParam10, var uParam11, var uParam12, var uParam13)
{
	int iVar0;

	if (Param0.f_9 != 1084182731 && Param0.f_9 != -1162387149)
	{
		return 0;
	}
	iVar0 = func_79(Param0.f_4);
	if ((iVar0 == joaat("weapon") && !WEAPON::_0xC853230E76A152DF(Param0.f_4)) && Param0.f_4 != joaat("weapon_kit_camera"))
	{
		return 0;
	}
	switch (iVar0)
	{
		case -1977020088:
		case -1879562593:
		case joaat("horse"):
		case -1650247667:
		case -1013984273:
		case 26423971:
		case 129583122:
		case joaat("ammo"):
		case 658570475:
		case 810656527:
		case joaat("gold"):
		case joaat("component"):
		case 1495295997:
		case 1780172046:
		case 2071704023:
		case 2088138839:
			return 0;
		case joaat("clothing"):
			switch (func_150(Param0.f_4))
			{
				case -525676072:
					if (Param0.f_4 == 1147557067)
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case 81053684:
					return 1;
				case 1477698721:
					if (func_5(Param0.f_4, -1348134986))
					{
						return 1;
					}
					return 0;
				default:
					return 0;
			}
			break;
	}
	if (func_150(Param0.f_4) == -829303394)
	{
		return 0;
	}
	return 1;
}

int func_276(int iParam0, int iParam1, bool bParam2)
{
	bool bVar0;

	bVar0 = false;
	if ((iParam1 == 0 || func_278(0)) || bParam2)
	{
		bVar0 = true;
	}
	if (!bParam2)
	{
		if ((!func_21(iParam0, 0) || iParam0 == 1259508039) || iParam0 == -727924611)
		{
			return 0;
		}
	}
	if (!bVar0 && func_309(iParam0))
	{
		return 0;
	}
	switch (iParam1)
	{
		case -889932290:
		case -283002878:
		case 0:
			if (!func_278(0))
			{
				if (iParam0 == 1807503187)
				{
					return 1;
				}
				if (((((((((((func_276(iParam0, -1559802791, 1) || func_276(iParam0, -1268291907, 1)) || func_276(iParam0, -96974025, 1)) || func_276(iParam0, -1666604090, 1)) || func_276(iParam0, 1561961676, 1)) || func_276(iParam0, -156634416, 1)) || func_276(iParam0, 1061777683, 1)) || func_276(iParam0, -2074770370, 1)) || func_276(iParam0, -693134279, 1)) || func_276(iParam0, -182626652, 1)) || func_276(iParam0, 1783698482, 1)) || func_310(iParam0))
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
			break;
		case -1559802791:
			return (func_5(iParam0, 1422457563) && !func_5(iParam0, 474910316));
		case -1268291907:
			return (func_5(iParam0, 1360707454) && !func_5(iParam0, 474910316));
		case -96974025:
			return (func_5(iParam0, 1009210113) && !func_5(iParam0, 474910316));
		case -1666604090:
			return (func_5(iParam0, -193035453) && !func_5(iParam0, 474910316));
		case 1561961676:
			return (func_5(iParam0, -111938901) && !func_5(iParam0, 474910316));
		case -156634416:
			return (func_5(iParam0, -928967997) && !func_5(iParam0, 474910316));
		case 1061777683:
			return (func_5(iParam0, 747873593) && !func_5(iParam0, 474910316));
		case 1783698482:
			return (func_5(iParam0, 474910316) && !func_278(0));
		case -2074770370:
			if (Global_1939221->f_36 == 1 || Global_1939221->f_36 == 2)
			{
				return func_311(iParam0, iParam1);
			}
			else if (func_4(iParam0, -949239683) == -1337515701 && iParam0 != -780677328)
			{
				return 1;
			}
			else
			{
				return func_5(iParam0, -111938901);
			}
			break;
		case -693134279:
			return func_86(iParam0, 8388608);
		case -182626652:
			if (func_312(iParam0, Global_1915170->f_19742.f_1))
			{
				func_313(func_156(0), iParam0, 1);
				return 1;
			}
			break;
	}
	return 0;
}

int func_277(int iParam0)
{
	int iVar0;

	if (Global_1939221->f_14.f_16 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_1939221->f_14.f_16)
		{
			if (&Global_1939221->f_14[iVar0 /*3*/] != iParam0)
			{
			}
			else if ((Global_1939221->f_14[iVar0 /*3*/])->f_1 & 1 != 0)
			{
				return 0;
			}
			iVar0++;
		}
	}
	switch (iParam0)
	{
		case -776155824: /* GXTEntry: "Animal Carcass Perfect" */
		case -45650221: /* GXTEntry: "Animal Carcass Poor" */
		case 1715058708: /* GXTEntry: "Animal Carcass Good Quality" */
			return 0;
		case 1906048139: /* GXTEntry: "Ingredients Satchel Pamphlet" */
			if (func_238(-1898006219 /* GXTEntry: "Ingredients Satchel Pamphlet" */, func_232(1), 1084182731, 0, 0, 0) > 0)
			{
				return 0;
			}
			break;
		case -1331886426: /* GXTEntry: "Materials Satchel Pamphlet" */
			if (func_238(-1898852053 /* GXTEntry: "Materials Satchel Pamphlet" */, func_232(1), 1084182731, 0, 0, 0) > 0)
			{
				return 0;
			}
			break;
	}
	if (func_278(0) && Global_1915170->f_19742 == 2)
	{
		if (!func_314(iParam0))
		{
			return 0;
		}
	}
	if (func_5(iParam0, -805003139))
	{
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(iParam0))
		{
			return 0;
		}
	}
	if (func_79(iParam0) == -2130996531)
	{
		if (!func_5(iParam0, -1540973036) && !func_5(iParam0, 1192444843))
		{
			return 0;
		}
		else if (iParam0 == 1872063208 || iParam0 == 1309979101)
		{
			return 0;
		}
	}
	if (Global_1915170->f_19742 == 29)
	{
		if (func_315(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

bool func_278(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915170->f_20136;
	}
	return (Global_1915170->f_20136 || Global_1915170->f_21989.f_1);
}

bool func_279()
{
	return Global_1939221->f_9;
}

void func_280(var uParam0)
{
	Global_1939221->f_10478 = uParam0;
}

void func_281(int iParam0)
{
	Global_1939221->f_9 = iParam0;
}

int func_282()
{
	if (Global_1270479->f_438.f_1548 >= 40 || Global_1270479->f_438.f_1548 < 0)
	{
		Global_1270479->f_438.f_1548 = 0;
	}
	return Global_1270479->f_438.f_1548;
}

void func_283(int iParam0)
{
	if (iParam0 >= 40 || iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_1270479->f_438.f_1548 = iParam0;
}

int func_284()
{
	if (Global_1270479->f_438.f_1549 >= 10 || Global_1270479->f_438.f_1549 < 0)
	{
		Global_1270479->f_438.f_1549 = 0;
	}
	return Global_1270479->f_438.f_1549;
}

void func_285(int iParam0)
{
	if (iParam0 >= 10 || iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_1270479->f_438.f_1549 = iParam0;
}

char* func_286(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return "textField0";
		case 1:
			return "textField1";
		case 2:
			return "textField2";
		case 3:
			return "textField3";
		case 4:
			return "textField4";
		case 5:
			return "textField5";
		case 6:
			return "textField6";
		case 7:
			return "textField7";
	}
	return "";
}

struct<4> func_287()
{
	struct<4> Var0;

	return Var0;
}

bool func_288()
{
	return (func_164(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 0, 0, 0) > 0 && func_316(func_176(889965687 /* GXTEntry: "Wardrobe" */, func_232(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_289(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 487172188)
	{
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(iParam1, joaat("default")) == -1925887917)
		{
			return 0;
		}
	}
	return ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iParam1, iParam2);
}

int func_290(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_156(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

bool func_291(int iParam0)
{
	return func_5(iParam0, 1279601681);
}

void func_292(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	if (RDR_RAGE_STORE_N_SR >= 11)
	{
		return;
	}
}

void func_293(var uParam0, int iParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_308(uParam0))
	{
		return;
	}
	if (Global_1270479->f_1991 < 20)
	{
		Global_1270479->f_1991++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*(Global_1270479->f_1991.f_1[iVar0 /*24*/]) = { *(Global_1270479->f_1991.f_1[iVar0 + 1 /*24*/]) };
			iVar0++;
		}
	}
	Var1.f_7.f_1 = 11;
	Var1.f_7.f_16 = 255;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_7 = { Param2 };
	Var1.f_6 = 1;
	*(Global_1270479->f_1991.f_1[(Global_1270479->f_1991 - 1) /*24*/]) = { Var1 };
}

int func_294(int iParam0, var uParam1)
{
	var uVar0;

	uVar0 = NETSHOPPING::_0x6C9F12700BCE69F4(iParam0, uParam1);
	if (iParam0 == joaat("use"))
	{
		if (func_220(uVar0, 2048))
		{
			return 0;
		}
	}
	else if (func_220(uVar0, 8))
	{
		return 0;
	}
	else if (func_220(uVar0, 16))
	{
		return 0;
	}
	else if (func_220(uVar0, 65536))
	{
		return 0;
	}
	return 1;
}

int func_295(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_317(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_317(iParam1, 2, 0, 0);
	return -1;
}

int func_296(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_317(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

int func_297(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_318(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_298(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_299(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_300(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_301(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_302(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_303(int iParam0, int iParam1)
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

void func_304(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_319(iParam0, iParam6);
	func_320(iParam0, iParam5);
	func_321(iParam0, iParam4);
	func_322(iParam0, iParam3);
	func_323(iParam0, iParam2);
	func_324(iParam0, iParam1);
}

int func_305()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return 1;
	}
	return 0;
}

bool func_306()
{
	return Global_1912968->f_127 == 0;
}

int func_307()
{
	return Global_1951131->f_1;
}

int func_308(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return 0;
	}
	return 1;
}

int func_309(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1939221->f_38.f_1)
	{
		if (func_325(iParam0, &(Global_1939221->f_38.f_2[iVar0 /*2*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_310(int iParam0)
{
	if (func_5(iParam0, -839724752))
	{
		return func_5(iParam0, 1937586541);
	}
	return 0;
}

int func_311(int iParam0, int iParam1)
{
	switch (Global_1939221->f_36)
	{
		case 1:
			if (iParam1 == -2074770370)
			{
				if ((func_5(iParam0, -887064662) || func_5(iParam0, -839724752)) || func_5(iParam0, -136654233))
				{
					return 1;
				}
			}
			break;
		case 2:
			if (iParam1 == -2074770370)
			{
				if ((((((((func_5(iParam0, -887064662) || func_5(iParam0, -839724752)) || func_5(iParam0, -136654233)) || func_5(iParam0, 554195525)) || func_5(iParam0, -1238310989)) || func_5(iParam0, 2127114599)) || func_5(iParam0, -1864584831)) || func_5(iParam0, 1068498601)) || func_5(iParam0, 1967571132))
				{
					return 1;
				}
			}
			break;
		default:
			break;
	}
	return 0;
}

bool func_312(int iParam0, int iParam1)
{
	if (iParam1 == 119)
	{
		return func_326(iParam0);
	}
	return func_327(iParam0, iParam1);
}

void func_313(int iParam0, int iParam1, bool bParam2)
{
	if (func_21(iParam1, 0))
	{
		if (bParam2)
		{
			INVENTORY::_0x6A564540FAC12211(iParam0, iParam1);
		}
		else
		{
			INVENTORY::_0x766315A564594401(iParam0, iParam1, 0);
		}
	}
}

int func_314(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (!func_328(iVar0))
	{
		return 0;
	}
	if (((((((((((((iVar0 == COLLECTION::_0xCC644BC1DD655269(-623226361, 0) || iVar0 == COLLECTION::_0xCC644BC1DD655269(-1452445456, 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(332438661, 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(1632674359, 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(56759509, 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(2145533727, 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(-1874365462, 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(-1658668866, 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(90781239, 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(1997097980, 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(920487791, 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(-668555046, 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(-839148413, 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(10424351, 0))
	{
		return 1;
	}
	return 0;
}

int func_315(int iParam0)
{
	var uVar0;
	int iVar1;
	var uVar2[1];
	int iVar4[3];
	int iVar8;

	if (func_329(iParam0, &uVar0))
	{
		return 1;
	}
	if (!func_330(iParam0))
	{
		return 0;
	}
	if (PED::_0xA911EE21EDF69DAF(Global_35))
	{
		func_331(Global_35, &uVar2, 1);
		iVar1 = func_332(&(uVar2[0]));
		if (iVar1 == iParam0)
		{
			if (ENTITY::_0x8DE41E9902E85756(&(uVar2[0])))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (PED::_0xA911EE21EDF69DAF(PLAYER::_0xF49F14462F0AE27C(PLAYER::PLAYER_ID())))
	{
		func_331(PLAYER::_0xF49F14462F0AE27C(PLAYER::PLAYER_ID()), &iVar4, 3);
		iVar8 = 0;
		while (iVar8 < iVar4)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(&(iVar4[iVar8])))
			{
			}
			else
			{
				iVar1 = func_333(iVar4[iVar8]);
				if (iVar1 == iParam0)
				{
					if (ENTITY::_0x8DE41E9902E85756(&(iVar4[iVar8])))
					{
						return 1;
					}
				}
			}
			iVar8++;
		}
	}
	return 0;
}

int func_316(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_334(&uParam0, iParam4, bParam5, iParam6);
}

void func_317(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1270479->f_20)
	{
		if (&Global_1270479->f_20.f_1[iVar0 /*20*/] == iParam0)
		{
			if ((Global_1270479->f_20.f_1[iVar0 /*20*/])->f_1 == iParam1)
			{
			}
			else
			{
				(Global_1270479->f_20.f_1[iVar0 /*20*/])->f_1 = iParam1;
			}
			if (iParam2 != 0 && iParam3 != 0)
			{
				(Global_1270479->f_20.f_1[iVar0 /*20*/])->f_2 = iParam2;
				(Global_1270479->f_20.f_1[iVar0 /*20*/])->f_3 = iParam3;
			}
			return;
		}
		iVar0++;
	}
	func_335(iParam0, iParam1, iParam2, iParam3);
}

int func_318(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_319(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT((1898 - iParam1), 26));
		*iParam0 |= -2147483648;
	}
	else
	{
		*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT((iParam1 - 1898), 26));
		*iParam0 = (*iParam0 - *iParam0 & -2147483648);
	}
}

void func_320(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_321(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_298(*iParam0);
	iVar1 = func_297(*iParam0);
	if (iParam1 < 1 || iParam1 > func_303(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_322(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_323(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_324(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

bool func_325(int iParam0, int iParam1)
{
	return iParam1 == func_4(iParam0, 1224357681);
}

int func_326(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = Global_1915170->f_20144.f_1010.f_201;
	if (iParam0 != 0)
	{
		if (iVar1 < 200)
		{
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				if (&Global_1915170->f_20144.f_1010[iVar0] == iParam0)
				{
					return 1;
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_327(int iParam0, int iParam1)
{
	struct<4> Var0;
	int iVar5;
	int iVar6;

	if (!func_21(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar5 = func_336(iParam1);
	if (iVar5 == -1)
	{
		return 0;
	}
	if (!func_337(6, &Var0))
	{
		return 0;
	}
	Var0.f_2 = -815325344;
	Var0.f_3 = func_338(iVar5);
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		iVar6 = iParam0;
		Var0.f_2 = 549615901;
		Var0.f_3 = iVar6;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_328(int iParam0)
{
	return iParam0 != 0;
}

bool func_329(int iParam0, var uParam1)
{
	*uParam1 = func_339(iParam0);
	return *uParam1 != 0;
}

int func_330(int iParam0)
{
	if (!func_21(iParam0, 0))
	{
	}
	if (func_5(iParam0, 1286414894))
	{
		return 1;
	}
	return 0;
}

int func_331(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!PED::_0xA911EE21EDF69DAF(iParam0))
	{
		return iVar4;
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iParam0, iVar0);
	iVar3 = ITEMSET::GET_ITEMSET_SIZE(iVar0);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		iVar1 = MISC::_0xEE04C0AFD4EFAF0E(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar0));
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
		}
		else
		{
			(*iParam1)[iVar4] = iVar1;
			iVar4++;
			if (iVar4 == iParam2)
			{
			}
			else
			{
				iVar2++;
			}
			ITEMSET::DESTROY_ITEMSET(iVar0);
			return iVar4;
		}
	}

int func_332(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::_0x9A100F1CF4546629(iParam0) || ENTITY::_0xC346A546612C49A9(iParam0))
	{
		iVar0 = func_333(&iParam0);
		if (!func_21(iVar0, 0))
		{
			iVar0 = func_340(iParam0);
		}
	}
	else
	{
		iVar0 = func_340(iParam0);
	}
	return iVar0;
}

int func_333(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*iParam0);
	return func_341(iVar0);
}

int func_334(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_342(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

void func_335(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<20> Var1;

	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1270479->f_20 < 20)
	{
		Global_1270479->f_20++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*(Global_1270479->f_20.f_1[iVar0 /*20*/]) = { *(Global_1270479->f_20.f_1[iVar0 + 1 /*20*/]) };
			iVar0++;
		}
	}
	Var1 = -1;
	Var1.f_4.f_7 = -142743235;
	Var1 = iParam0;
	Var1.f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Var1.f_2 = iParam2;
		Var1.f_3 = iParam3;
	}
	*(Global_1270479->f_20.f_1[(Global_1270479->f_20 - 1) /*20*/]) = { Var1 };
}

int func_336(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 < 176))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 133:
			return 27;
		case 149:
			return 28;
		case 150:
			return 29;
		case 26:
			return 14;
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
			return 38;
		case 134:
			return 37;
		case 3:
		case 4:
		case 40:
		case 63:
		case 76:
			return 15;
		case 64:
		case 65:
		case 66:
		case 67:
			return 16;
		case 120:
		case 122:
		case 124:
		case 126:
		case 127:
		case 129:
			return 25;
		case 45:
		case 83:
		case 151:
		case 155:
		case 160:
		case 164:
		case 168:
			return 0;
		case 6:
		case 23:
		case 33:
		case 48:
		case 69:
		case 84:
		case 99:
		case 102:
		case 108:
		case 152:
		case 156:
		case 161:
		case 165:
		case 169:
			return 3;
		case 0:
		case 7:
		case 34:
		case 49:
		case 85:
		case 103:
		case 153:
		case 157:
		case 162:
		case 166:
		case 170:
			return 6;
		case 19:
		case 53:
			return 7;
		case 22:
		case 31:
		case 46:
		case 93:
		case 116:
		case 130:
			return 4;
		case 20:
			return 33;
		case 21:
		case 32:
		case 47:
		case 92:
		case 115:
		case 131:
			return 33;
		case 9:
		case 30:
		case 44:
		case 68:
		case 82:
		case 104:
			return 10;
		case 1:
		case 14:
		case 24:
		case 27:
		case 35:
		case 51:
		case 74:
		case 87:
		case 98:
		case 101:
		case 111:
		case 117:
			return 2;
		case 2:
		case 15:
		case 25:
		case 28:
		case 39:
		case 52:
		case 88:
		case 97:
		case 100:
		case 112:
		case 118:
			return 1;
		case 8:
		case 43:
		case 78:
			return 8;
		case 13:
		case 41:
		case 50:
		case 71:
		case 86:
		case 96:
		case 107:
			return 9;
		case 121:
		case 123:
		case 125:
		case 128:
			return 26;
		case 159:
			return 5;
		case 5:
		case 29:
		case 42:
		case 77:
			return 12;
		case 10:
		case 36:
		case 54:
		case 56:
		case 75:
		case 79:
		case 81:
		case 91:
		case 94:
		case 105:
		case 110:
			return 30;
		case 11:
		case 37:
		case 55:
		case 57:
		case 80:
		case 95:
		case 106:
			return 31;
		case 16:
		case 17:
		case 18:
		case 38:
		case 58:
		case 59:
		case 72:
		case 73:
		case 132:
			return 32;
		case 70:
		case 90:
			return 17;
		case 119:
			return 11;
		case 172:
			return 19;
		case 173:
			return 20;
		case 174:
			return 21;
		case 12:
		case 60:
			return 18;
		case 148:
			return 34;
		case 154:
		case 158:
		case 163:
		case 167:
		case 171:
			return 23;
		case 175:
			return 20;
		case 109:
		case 113:
		case 114:
			return 35;
		case 61:
		case 62:
		case 89:
			return 36;
		default:
			break;
	}
	return -1;
}

int func_337(int iParam0, var uParam1)
{
	if (!func_343(iParam0))
	{
		return 0;
	}
	*uParam1 = Global_1915121[iParam0];
	if (*uParam1 == 0)
	{
		return 0;
	}
	return 1;
}

int func_338(int iParam0)
{
	if (func_3() != -1)
	{
		if (Global_1070355->f_10)
		{
			if (iParam0 == 3)
			{
				return -1033589769;
			}
		}
	}
	return func_344(iParam0);
}

int func_339(int iParam0)
{
	switch (iParam0)
	{
		case 1908704263: /* GXTEntry: "Good Skinned Alligator Carcass" */
			return 915880986 /* GXTEntry: "Good Alligator Carcass" */;
		case -2112217546: /* GXTEntry: "Perfect Skinned Alligator Carcass" */
			return -1424697962 /* GXTEntry: "Perfect Alligator Carcass" */;
		case -1745255175: /* GXTEntry: "Poor Skinned Alligator Carcass" */
			return -1643384846 /* GXTEntry: "Poor Alligator Carcass" */;
		case -237368063: /* GXTEntry: "Good Skinned Armadillo Carcass" */
			return -847420802 /* GXTEntry: "Good Armadillo Carcass" */;
		case 1598967299: /* GXTEntry: "Perfect Skinned Armadillo Carcass" */
			return -662726703 /* GXTEntry: "Perfect Armadillo Carcass" */;
		case -1809464109: /* GXTEntry: "Poor Skinned Armadillo Carcass" */
			return 1760886130 /* GXTEntry: "Poor Armadillo Carcass" */;
		case -165201917: /* GXTEntry: "Good Skinned Badger Carcass" */
			return -1243653490 /* GXTEntry: "Good Badger Carcass" */;
		case 815147738: /* GXTEntry: "Perfect Skinned Badger Carcass" */
			return 1988467099 /* GXTEntry: "Perfect Badger Carcass" */;
		case 1287583539: /* GXTEntry: "Poor Skinned Badger Carcass" */
			return -674590015 /* GXTEntry: "Poor Badger Carcass" */;
		case -2126985311: /* GXTEntry: "Good Skinned Beaver Carcass" */
			return -1480423460 /* GXTEntry: "Good Beaver Carcass" */;
		case -1268352491: /* GXTEntry: "Perfect Skinned Beaver Carcass" */
			return 924882045 /* GXTEntry: "Perfect Beaver Carcass" */;
		case -1940225526: /* GXTEntry: "Poor Skinned Beaver Carcass" */
			return 1415608202 /* GXTEntry: "Poor Beaver Carcass" */;
		case -212307068: /* GXTEntry: "Good Skinned Bighorn Sheep Carcass" */
			return -593311590 /* GXTEntry: "Good Bighorn Sheep Carcass" */;
		case 355421032: /* GXTEntry: "Perfect Skinned Bighorn Sheep Carcass" */
			return 765085831 /* GXTEntry: "Perfect Bighorn Sheep Carcass" */;
		case 1657729714: /* GXTEntry: "Poor Skinned Bighorn Sheep Carcass" */
			return 2094730711 /* GXTEntry: "Poor Bighorn Sheep Carcass" */;
		case 1350692346: /* GXTEntry: "Good Skinned Buck Carcass" */
			return -1310590179 /* GXTEntry: "Good Buck Carcass" */;
		case -257850294: /* GXTEntry: "Perfect Skinned Buck Carcass" */
			return 992366796 /* GXTEntry: "Perfect Buck Carcass" */;
		case -918541014: /* GXTEntry: "Poor Skinned Buck Carcass" */
			return -244657613 /* GXTEntry: "Poor Buck Carcass" */;
		case -947573795: /* GXTEntry: "Good Plucked California Condor Carcass" */
			return -2026210939 /* GXTEntry: "Good California Condor Carcass" */;
		case -2068302756: /* GXTEntry: "Perfect Plucked California Condor Carcass" */
			return -1252472243 /* GXTEntry: "Perfect California Condor Carcass" */;
		case 1650829985: /* GXTEntry: "Poor Plucked California Condor Carcass" */
			return -980016656 /* GXTEntry: "Poor California Condor Carcass" */;
		case -1808044035: /* GXTEntry: "Good Skinned Chicken Carcass" */
			return -758005668 /* GXTEntry: "Good Chicken Carcass" */;
		case -1952647655: /* GXTEntry: "Perfect Skinned Chicken Carcass" */
			return -2139551030 /* GXTEntry: "Perfect Chicken Carcass" */;
		case 1293221440: /* GXTEntry: "Poor Skinned Chicken Carcass" */
			return 1607144310 /* GXTEntry: "Poor Chicken Carcass" */;
		case -642946194: /* GXTEntry: "Good Plucked Cormorant Carcass" */
			return 80093385 /* GXTEntry: "Good Cormorant Carcass" */;
		case 819214075: /* GXTEntry: "Perfect Plucked Cormorant Carcass" */
			return -867655342 /* GXTEntry: "Perfect Cormorant Carcass" */;
		case -858652427: /* GXTEntry: "Poor Plucked Cormorant Carcass" */
			return 991092621 /* GXTEntry: "Poor Cormorant Carcass" */;
		case 395625948: /* GXTEntry: "Good Skinned Cougar Carcass" */
			return 871746664 /* GXTEntry: "Good Cougar Carcass" */;
		case -2063800922: /* GXTEntry: "Perfect Skinned Cougar Carcass" */
			return 1626949878 /* GXTEntry: "Perfect Cougar Carcass" */;
		case -2117103642: /* GXTEntry: "Poor Skinned Cougar Carcass" */
			return -1722483116 /* GXTEntry: "Poor Cougar Carcass" */;
		case -1583694057: /* GXTEntry: "Good Skinned Coyote Carcass" */
			return -1739474417 /* GXTEntry: "Good Coyote Carcass" */;
		case -1550918713: /* GXTEntry: "Perfect Skinned Coyote Carcass" */
			return -161524199 /* GXTEntry: "Perfect Coyote Carcass" */;
		case 836539658: /* GXTEntry: "Poor Skinned Coyote Carcass" */
			return 156979555 /* GXTEntry: "Poor Coyote Carcass" */;
		case 773062352: /* GXTEntry: "Good Plucked Crane Carcass" */
			return 322141256 /* GXTEntry: "Good Crane Carcass" */;
		case 1306100270: /* GXTEntry: "Perfect Plucked Crane Carcass" */
			return 1310120320 /* GXTEntry: "Perfect Crane Carcass" */;
		case -1063194668: /* GXTEntry: "Poor Plucked Crane Carcass" */
			return -1228376431 /* GXTEntry: "Poor Crane Carcass" */;
		case 337839068: /* GXTEntry: "Good Skinned Deer Carcass" */
			return 472142656 /* GXTEntry: "Good Deer Carcass" */;
		case -1426520714: /* GXTEntry: "Perfect Skinned Deer Carcass" */
			return -1837840093 /* GXTEntry: "Perfect Deer Carcass" */;
		case -1456429189: /* GXTEntry: "Poor Skinned Deer Carcass" */
			return 58634176 /* GXTEntry: "Poor Deer Carcass" */;
		case -2032809253: /* GXTEntry: "Good Skinned Duck Carcass" */
			return 1023080408 /* GXTEntry: "Good Duck Carcass" */;
		case 781728005: /* GXTEntry: "Perfect Skinned Duck Carcass" */
			return 1001171791 /* GXTEntry: "Perfect Duck Carcass" */;
		case 1202409779: /* GXTEntry: "Poor Skinned Duck Carcass" */
			return 1210345318 /* GXTEntry: "Poor Duck Carcass" */;
		case 1520877300: /* GXTEntry: "Good Plucked Eagle Carcass" */
			return 399553313 /* GXTEntry: "Good Eagle Carcass" */;
		case -1736624361: /* GXTEntry: "Perfect Plucked Eagle Carcass" */
			return -1422869557 /* GXTEntry: "Perfect Eagle Carcass" */;
		case 719465997: /* GXTEntry: "Poor Plucked Eagle Carcass" */
			return -1378812236 /* GXTEntry: "Poor Eagle Carcass" */;
		case -361486526: /* GXTEntry: "Good Skinned Egret Carcass" */
			return 1011003885 /* GXTEntry: "Good Egret Carcass" */;
		case -765274711: /* GXTEntry: "Perfect Skinned Egret Carcass" */
			return 651035143 /* GXTEntry: "Perfect Egret Carcass" */;
		case -887205673: /* GXTEntry: "Poor Skinned Egret Carcass" */
			return 2013022756 /* GXTEntry: "Poor Egret Carcass" */;
		case -784020903: /* GXTEntry: "Good Skinned Fox Carcass" */
			return -1186289527 /* GXTEntry: "Good Fox Carcass" */;
		case -886117938: /* GXTEntry: "Perfect Skinned Fox Carcass" */
			return 877935135 /* GXTEntry: "Perfect Fox Carcass" */;
		case -1416771220: /* GXTEntry: "Poor Skinned Fox Carcass" */
			return -39646495 /* GXTEntry: "Poor Fox Carcass" */;
		case 1648676911: /* GXTEntry: "Good Skinned Gila Monster Carcass" */
			return 1582593525 /* GXTEntry: "Good Gila Monster Carcass" */;
		case 2103833563: /* GXTEntry: "Perfect Skinned Gila Monster Carcass" */
			return -246542229 /* GXTEntry: "Perfect Gila Monster Carcass" */;
		case -831636369: /* GXTEntry: "Poor Skinned Gila Monster Carcass" */
			return -529454751 /* GXTEntry: "Poor Gila Monster Carcass" */;
		case -852290935: /* GXTEntry: "Good Skinned Goat Carcass" */
			return -46978629 /* GXTEntry: "Good Goat Carcass" */;
		case -1870415962: /* GXTEntry: "Perfect Skinned Goat Carcass" */
			return -1347000030 /* GXTEntry: "Perfect Goat Carcass" */;
		case -788684109: /* GXTEntry: "Poor Skinned Goat Carcass" */
			return -505583391 /* GXTEntry: "Poor Goat Carcass" */;
		case 1416435145: /* GXTEntry: "Good Skinned Goose Carcass" */
			return 1645887374 /* GXTEntry: "Good Goose Carcass" */;
		case -1483088274: /* GXTEntry: "Perfect Skinned Goose Carcass" */
			return -1559227925 /* GXTEntry: "Perfect Goose Carcass" */;
		case -791867098: /* GXTEntry: "Poor Skinned Goose Carcass" */
			return 1562528937 /* GXTEntry: "Poor Goose Carcass" */;
		case -1689552552: /* GXTEntry: "Good Plucked Hawk Carcass" */
			return -1471526136 /* GXTEntry: "Good Hawk Carcass" */;
		case -1850779170: /* GXTEntry: "Perfect Plucked Hawk Carcass" */
			return -1440794801 /* GXTEntry: "Perfect Hawk Carcass" */;
		case -121487803: /* GXTEntry: "Poor Plucked Hawk Carcass" */
			return 2144711797;
		case -1280499288: /* GXTEntry: "Good Skinned Heron Carcass" */
			return 718825539 /* GXTEntry: "Good Heron Carcass" */;
		case 820245961: /* GXTEntry: "Perfect Skinned Heron Carcass" */
			return 2105263879 /* GXTEntry: "Perfect Heron Carcass" */;
		case -889526774: /* GXTEntry: "Poor Skinned Heron Carcass" */
			return -905842006 /* GXTEntry: "Poor Heron Carcass" */;
		case -521025998: /* GXTEntry: "Good Skinned Iguana Carcass" */
			return 1191274340 /* GXTEntry: "Good Iguana Carcass" */;
		case 1583031244: /* GXTEntry: "Perfect Skinned Iguana Carcass" */
			return 1613453781 /* GXTEntry: "Perfect Iguana Carcass" */;
		case -2115599211: /* GXTEntry: "Poor Skinned Iguana Carcass" */
			return -1030182399 /* GXTEntry: "Poor Iguana Carcass" */;
		case -767176802: /* GXTEntry: "Good Skinned Loon Carcass" */
			return 987967309 /* GXTEntry: "Good Loon Carcass" */;
		case -750945821: /* GXTEntry: "Perfect Skinned Loon Carcass" */
			return -1060737769 /* GXTEntry: "Perfect Loon Carcass" */;
		case -2135749211: /* GXTEntry: "Poor Skinned Loon Carcass" */
			return 553310445 /* GXTEntry: "Poor Loon Carcass" */;
		case 2063108046: /* GXTEntry: "Good Skinned Muskrat Carcass" */
			return -1838865945 /* GXTEntry: "Good Muskrat Carcass" */;
		case 1299111759: /* GXTEntry: "Perfect Skinned Muskrat Carcass" */
			return 1418092959 /* GXTEntry: "Perfect Muskrat Carcass" */;
		case 1595322723: /* GXTEntry: "Poor Skinned Muskrat Carcass" */
			return -1315697778 /* GXTEntry: "Poor Muskrat Carcass" */;
		case 784918835: /* GXTEntry: "Good Skinned Opossum Carcass" */
			return -1772126340 /* GXTEntry: "Good Opossum Carcass" */;
		case -676310905: /* GXTEntry: "Perfect Skinned Opossum Carcass" */
			return -935543049 /* GXTEntry: "Perfect Opossum Carcass" */;
		case -1719545959: /* GXTEntry: "Poor Skinned Opossum Carcass" */
			return 1772544356 /* GXTEntry: "Poor Opossum Carcass" */;
		case -2142423934: /* GXTEntry: "Good Plucked Owl Carcass" */
			return -266273535 /* GXTEntry: "Good Owl Carcass" */;
		case 747751566: /* GXTEntry: "Perfect Plucked Owl Carcass" */
			return -1670544626 /* GXTEntry: "Perfect Owl Carcass" */;
		case -1942682403: /* GXTEntry: "Poor Plucked Owl Carcass" */
			return 1290960696 /* GXTEntry: "Poor Owl Carcass" */;
		case 1018433784: /* GXTEntry: "Good Skinned Panther Carcass" */
			return 1913571052 /* GXTEntry: "Good Panther Carcass" */;
		case -796185392: /* GXTEntry: "Perfect Skinned Panther Carcass" */
			return 1717601520 /* GXTEntry: "Perfect Panther Carcass" */;
		case -49549406: /* GXTEntry: "Poor Skinned Panther Carcass" */
			return 430397370 /* GXTEntry: "Poor Panther Carcass" */;
		case 857788498: /* GXTEntry: "Good Plucked Parrot Carcass" */
			return 16287711 /* GXTEntry: "Good Parrot Carcass" */;
		case 1223148871: /* GXTEntry: "Perfect Plucked Parrot Carcass" */
			return -1356230367 /* GXTEntry: "Perfect Parrot Carcass" */;
		case 939407236: /* GXTEntry: "Poor Plucked Parrot Carcass" */
			return 1417331079 /* GXTEntry: "Poor Parrot Carcass" */;
		case 1608778431: /* GXTEntry: "Good Plucked Pelican Carcass" */
			return -884124246 /* GXTEntry: "Good Pelican Carcass" */;
		case -2033821082: /* GXTEntry: "Perfect Plucked Pelican Carcass" */
			return 1884610748 /* GXTEntry: "Perfect Pelican Carcass" */;
		case -993340234: /* GXTEntry: "Poor Plucked Pelican Carcass" */
			return 746558492 /* GXTEntry: "Poor Pelican Carcass" */;
		case -1861062075: /* GXTEntry: "Good Skinned Pheasant Carcass" */
			return -892811627 /* GXTEntry: "Good Pheasant Carcass" */;
		case 1645001514: /* GXTEntry: "Perfect Skinned Pheasant Carcass" */
			return -2040522845 /* GXTEntry: "Perfect Pheasant Carcass" */;
		case 782371031: /* GXTEntry: "Poor Skinned Pheasant Carcass" */
			return -1224510844 /* GXTEntry: "Poor Pheasant Carcass" */;
		case 1255529169: /* GXTEntry: "Good Skinned Pig Carcass" */
			return 1334837390 /* GXTEntry: "Good Pig Carcass" */;
		case 70898308: /* GXTEntry: "Perfect Skinned Pig Carcass" */
			return 339620522 /* GXTEntry: "Perfect Pig Carcass" */;
		case -1050350982: /* GXTEntry: "Poor Skinned Pig Carcass" */
			return 1770451033 /* GXTEntry: "Poor Pig Carcass" */;
		case 581781784: /* GXTEntry: "Good Skinned Prairie Chicken Carcass" */
			return 756657535 /* GXTEntry: "Good Prairie Chicken Carcass" */;
		case -1363330863: /* GXTEntry: "Perfect Skinned Prairie Chicken Carcass" */
			return 862898895 /* GXTEntry: "Perfect Prairie Chicken Carcass" */;
		case -1780911288: /* GXTEntry: "Poor Skinned Prairie Chicken Carcass" */
			return 1997845858 /* GXTEntry: "Poor Prairie Chicken Carcass" */;
		case 1018306802: /* GXTEntry: "Good Skinned Pronghorn Carcass" */
			return -1930144509 /* GXTEntry: "Good Pronghorn Carcass" */;
		case 1615521415: /* GXTEntry: "Perfect Skinned Pronghorn Carcass" */
			return 1846915545 /* GXTEntry: "Perfect Pronghorn Carcass" */;
		case -1499066338: /* GXTEntry: "Poor Skinned Pronghorn Carcass" */
			return -1816929509 /* GXTEntry: "Poor Pronghorn Carcass" */;
		case 1711081908: /* GXTEntry: "Good Skinned Rabbit Carcass" */
			return 1197831625 /* GXTEntry: "Good Rabbit Carcass" */;
		case -164705: /* GXTEntry: "Perfect Skinned Rabbit Carcass" */
			return -1866642239 /* GXTEntry: "Perfect Rabbit Carcass" */;
		case -2044044647: /* GXTEntry: "Poor Skinned Rabbit Carcass" */
			return -1508120809 /* GXTEntry: "Poor Rabbit Carcass" */;
		case -859583379: /* GXTEntry: "Good Skinned Raccoon Carcass" */
			return -1007681885 /* GXTEntry: "Good Raccoon Carcass" */;
		case -759504052: /* GXTEntry: "Perfect Skinned Raccoon Carcass" */
			return 434924608 /* GXTEntry: "Perfect Raccoon Carcass" */;
		case 700225820: /* GXTEntry: "Poor Skinned Raccoon Carcass" */
			return 1666393029 /* GXTEntry: "Poor Raccoon Carcass" */;
		case 136458586: /* GXTEntry: "Good Skinned Ram Carcass" */
			return -1814593136 /* GXTEntry: "Good Ram Carcass" */;
		case 799105420: /* GXTEntry: "Perfect Skinned Ram Carcass" */
			return -1188120304 /* GXTEntry: "Perfect Ram Carcass" */;
		case -481655757: /* GXTEntry: "Poor Skinned Ram Carcass" */
			return 1978734761 /* GXTEntry: "Poor Ram Carcass" */;
		case 484160931: /* GXTEntry: "Good Plucked Raven Carcass" */
			return -824902132 /* GXTEntry: "Good Raven Carcass" */;
		case 1010699907: /* GXTEntry: "Perfect Plucked Raven Carcass" */
			return -1015531226 /* GXTEntry: "Perfect Raven Carcass" */;
		case 1550264248: /* GXTEntry: "Poor Plucked Raven Carcass" */
			return -581619522 /* GXTEntry: "Poor Raven Carcass" */;
		case -371992731: /* GXTEntry: "Good Plucked Red-footed Booby Carcass" */
			return -861854914 /* GXTEntry: "Good Red-footed Booby Carcass" */;
		case 1090294483: /* GXTEntry: "Perfect Plucked Red-footed Booby Carcass" */
			return -545447034 /* GXTEntry: "Perfect Red-footed Booby Carcass" */;
		case -274175035: /* GXTEntry: "Poor Plucked Red-footed Booby Carcass" */
			return -1824684934 /* GXTEntry: "Poor Red-footed Booby Carcass" */;
		case -1064414912: /* GXTEntry: "Good Skinned Rooster Carcass" */
			return 980653387 /* GXTEntry: "Good Rooster Carcass" */;
		case -2091620305: /* GXTEntry: "Perfect Skinned Rooster Carcass" */
			return -1011598664 /* GXTEntry: "Perfect Rooster Carcass" */;
		case -468684824: /* GXTEntry: "Poor Skinned Rooster Carcass" */
			return -177476569 /* GXTEntry: "Poor Rooster Carcass" */;
		case 1668870118: /* GXTEntry: "Good Skinned Roseate Spoonbill Carcass" */
			return 416630124 /* GXTEntry: "Good Roseate Spoonbill Carcass" */;
		case -534004020: /* GXTEntry: "Perfect Skinned Roseate Spoonbill Carcass" */
			return 1925728375 /* GXTEntry: "Perfect Roseate Spoonbill Carcass" */;
		case -2126925270: /* GXTEntry: "Poor Skinned Roseate Spoonbill Carcass" */
			return -1080457688 /* GXTEntry: "Poor Roseate Spoonbill Carcass" */;
		case 2008380517: /* GXTEntry: "Good Plucked Seagull Carcass" */
			return 1742676369 /* GXTEntry: "Good Seagull Carcass" */;
		case -510697884: /* GXTEntry: "Perfect Plucked Seagull Carcass" */
			return -899751553 /* GXTEntry: "Perfect Seagull Carcass" */;
		case -955209948: /* GXTEntry: "Poor Plucked Seagull Carcass" */
			return 431501574 /* GXTEntry: "Poor Seagull Carcass" */;
		case 1459836898: /* GXTEntry: "Good Skinned Sheep Carcass" */
			return 2126795269;
		case 303969766: /* GXTEntry: "Perfect Skinned Sheep Carcass" */
			return 1489051752 /* GXTEntry: "Perfect Sheep Carcass" */;
		case -1707588662: /* GXTEntry: "Poor Skinned Sheep Carcass" */
			return -1705499323 /* GXTEntry: "Poor Sheep Carcass" */;
		case -1224075784: /* GXTEntry: "Good Skinned Skunk Carcass" */
			return -2013445740 /* GXTEntry: "Good Skunk Carcass" */;
		case -1806671048: /* GXTEntry: "Perfect Skinned Skunk Carcass" */
			return 102446365 /* GXTEntry: "Perfect Skunk Carcass" */;
		case 749765420: /* GXTEntry: "Poor Skinned Skunk Carcass" */
			return -1927342740 /* GXTEntry: "Poor Skunk Carcass" */;
		case 462936163: /* GXTEntry: "Good Skinned Black-Tailed Rattlesnake Carcass" */
			return -410900360 /* GXTEntry: "Good Black-tailed Rattlesnake Carcass" */;
		case -8888941: /* GXTEntry: "Perfect Skinned Black-Tailed Rattlesnake Carcass" */
			return -1073614594 /* GXTEntry: "Perfect Black-tailed Rattlesnake Carcass" */;
		case 1640227110: /* GXTEntry: "Poor Skinned Black-Tailed Rattlesnake Carcass" */
			return 2060013792 /* GXTEntry: "Poor Black-tailed Rattlesnake Carcass" */;
		case -1241188722: /* GXTEntry: "Good Skinned Red Boa Carcass" */
			return 581032175 /* GXTEntry: "Good Red Boa Carcass" */;
		case -1030962659: /* GXTEntry: "Perfect Skinned Red Boa Carcass" */
			return -581931638 /* GXTEntry: "Perfect Red Boa Carcass" */;
		case 112552982: /* GXTEntry: "Poor Skinned Red Boa Carcass" */
			return -1528265128 /* GXTEntry: "Poor Red Boa Carcass" */;
		case -1599578931: /* GXTEntry: "Good Skinned Copperhead Carcass" */
			return -142632645 /* GXTEntry: "Good Copperhead Carcass" */;
		case 1296331626: /* GXTEntry: "Perfect Skinned Copperhead Carcass" */
			return -2048519180 /* GXTEntry: "Perfect Copperhead Carcass" */;
		case -1256398198: /* GXTEntry: "Poor Skinned Copperhead Carcass" */
			return 1442025993 /* GXTEntry: "Poor Copperhead Carcass" */;
		case 1297800973: /* GXTEntry: "Good Skinned Fer-de-lance Carcass" */
			return 441195430 /* GXTEntry: "Good Fer-de-Lance Carcass" */;
		case 1772582754: /* GXTEntry: "Perfect Skinned Fer-de-lance Carcass" */
			return 748665395 /* GXTEntry: "Perfect Fer-de-Lance Carcass" */;
		case -1459876379: /* GXTEntry: "Poor Skinned Fer-de-lance Carcass" */
			return 351048413 /* GXTEntry: "Poor Fer-de-Lance Carcass" */;
		case 1127406863: /* GXTEntry: "Good Skinned Snake Carcass" */
			return -914779013 /* GXTEntry: "Good Snake Carcass" */;
		case 1779996957: /* GXTEntry: "Perfect Skinned Snake Carcass" */
			return 1323485831 /* GXTEntry: "Perfect Snake Carcass" */;
		case 1885306923: /* GXTEntry: "Poor Skinned Snake Carcass" */
			return -365111821 /* GXTEntry: "Poor Snake Carcass" */;
		case 1244107697: /* GXTEntry: "Good Skinned Water Snake Carcass" */
			return 101495387 /* GXTEntry: "Good Water Snake Carcass" */;
		case -1201555940: /* GXTEntry: "Perfect Skinned Water Snake Carcass" */
			return 157917500 /* GXTEntry: "Perfect Water Snake Carcass" */;
		case -668487833: /* GXTEntry: "Poor Skinned Water Snake Carcass" */
			return -936537044 /* GXTEntry: "Poor Water Snake Carcass" */;
		case -1178150148: /* GXTEntry: "Good Skinned Turkey Carcass" */
			return -1610329427 /* GXTEntry: "Good Turkey Carcass" */;
		case 1171158615: /* GXTEntry: "Perfect Skinned Turkey Carcass" */
			return -1836227998 /* GXTEntry: "Perfect Turkey Carcass" */;
		case -2123554124: /* GXTEntry: "Poor Skinned Turkey Carcass" */
			return 619479575 /* GXTEntry: "Poor Turkey Carcass" */;
		case 1806705761: /* GXTEntry: "Good Skinned Snapping Turtle Carcass" */
			return -1444929945 /* GXTEntry: "Good Snapping Turtle Carcass" */;
		case 404581836: /* GXTEntry: "Perfect Skinned Snapping Turtle Carcass" */
			return -929322235 /* GXTEntry: "Perfect Snapping Turtle Carcass" */;
		case 987197489: /* GXTEntry: "Poor Skinned Snapping Turtle Carcass" */
			return -548076717 /* GXTEntry: "Poor Snapping Turtle Carcass" */;
		case -1259715647: /* GXTEntry: "Good Plucked Vulture Carcass" */
			return -281211381 /* GXTEntry: "Good Vulture Carcass" */;
		case -1716717840: /* GXTEntry: "Perfect Plucked Vulture Carcass" */
			return 493457089 /* GXTEntry: "Perfect Vulture Carcass" */;
		case -196277007: /* GXTEntry: "Poor Plucked Vulture Carcass" */
			return -479485786 /* GXTEntry: "Poor Vulture Carcass" */;
		case -2064457926: /* GXTEntry: "Good Skinned Wolf Carcass" */
			return 27838955 /* GXTEntry: "Good Wolf Carcass" */;
		case 561267454: /* GXTEntry: "Perfect Skinned Wolf Carcass" */
			return 1641833719 /* GXTEntry: "Perfect Wolf Carcass" */;
		case 686253083: /* GXTEntry: "Poor Skinned Wolf Carcass" */
			return -314933180 /* GXTEntry: "Poor Wolf Carcass" */;
		default:
			break;
	}
	return 0;
}

int func_340(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::_0x31FEF6A20F00B963(iParam0);
	if (iVar0 == 0)
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar0 = func_341(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0));
		}
	}
	return iVar0;
}

int func_341(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	iVar1 = PED::_0x88EFFED5FE8B0B4A(iVar0);
	iVar2 = func_345(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	iVar3 = iVar1;
	iVar4 = iVar2;
	if (iVar4 < iVar3)
	{
		iVar1 = iVar4;
	}
	if (!PED::_0x9E7738B291706746(&iVar5, iVar0, iVar1))
	{
		return 0;
	}
	if (iVar5 != 0)
	{
		if (PED::_0xFB4891BD7578CDC1(iVar0, 43391475) || ENTITY::_0x8DE41E9902E85756(iVar0))
		{
			iVar6 = func_346(iVar5);
			if (iVar6 != 0)
			{
				return iVar6;
			}
		}
		return iVar5;
	}
	switch (iVar1)
	{
		case 2:
			return -776155824 /* GXTEntry: "Animal Carcass Perfect" */;
		case 1:
			return 1715058708 /* GXTEntry: "Animal Carcass Good Quality" */;
		case 0:
			return -45650221 /* GXTEntry: "Animal Carcass Poor" */;
		default:
			break;
	}
	return -45650221 /* GXTEntry: "Animal Carcass Poor" */;
}

int func_342(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_156(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, uParam0, iParam1, &uVar0))
	{
		return 0;
	}
	if (!func_290(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return 0;
	}
	return 1;
}

bool func_343(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_344(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1391860027;
		case 3:
			return -2049683567;
		case 4:
			return -1639750081;
		case 33:
			return -395929392;
		case 6:
			return -543306319;
		case 7:
			return 93160283;
		case 8:
			return -1838611891;
		case 1:
			return 1619762084;
		case 2:
			return -2104053099;
		case 9:
			return -1431073983;
		case 10:
			return 887432345;
		case 11:
			return -238320361;
		case 22:
			return -1433937760;
		case 23:
			return -681691620;
		case 24:
			return -706234936;
		case 25:
			return -282099500;
		case 26:
			return 1450105278;
		case 5:
			return 379756162;
		case 12:
			return 2128397741;
		case 14:
			return -924263120;
		case 30:
			return 1915478031;
		case 31:
			return -1816941102;
		case 32:
			return 1350021532;
		case 15:
			return 1442571063;
		case 16:
			return -997221403;
		case 17:
			return 1489861748;
		case 27:
			return -2132712788;
		case 28:
			return -995716959;
		case 29:
			return 1414815075;
		case 34:
			return 1427539511;
		case 19:
			return -967055532;
		case 20:
			return 662159626;
		case 21:
			return 1743191502;
		case 18:
			return -830712656;
		case 35:
			return 1570650502;
		case 36:
			return -1980461700;
		case 38:
			return -486915945;
		case 37:
			return -1023568458;
		default:
			break;
	}
	return 0;
}

int func_345(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 2;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return iVar0;
	}
	iVar1 = PED::_0x7BCC6087D130312A(iParam0);
	switch (iVar1)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = 1;
			break;
		case -1:
		case 2:
			iVar0 = 2;
			break;
	}
	return iVar0;
}

int func_346(int iParam0)
{
	switch (iParam0)
	{
		case 915880986: /* GXTEntry: "Good Alligator Carcass" */
			return 1908704263 /* GXTEntry: "Good Skinned Alligator Carcass" */;
		case -1424697962: /* GXTEntry: "Perfect Alligator Carcass" */
			return -2112217546 /* GXTEntry: "Perfect Skinned Alligator Carcass" */;
		case -1643384846: /* GXTEntry: "Poor Alligator Carcass" */
			return -1745255175 /* GXTEntry: "Poor Skinned Alligator Carcass" */;
		case -847420802: /* GXTEntry: "Good Armadillo Carcass" */
			return -237368063 /* GXTEntry: "Good Skinned Armadillo Carcass" */;
		case -662726703: /* GXTEntry: "Perfect Armadillo Carcass" */
			return 1598967299 /* GXTEntry: "Perfect Skinned Armadillo Carcass" */;
		case 1760886130: /* GXTEntry: "Poor Armadillo Carcass" */
			return -1809464109 /* GXTEntry: "Poor Skinned Armadillo Carcass" */;
		case -1243653490: /* GXTEntry: "Good Badger Carcass" */
			return -165201917 /* GXTEntry: "Good Skinned Badger Carcass" */;
		case 1988467099: /* GXTEntry: "Perfect Badger Carcass" */
			return 815147738 /* GXTEntry: "Perfect Skinned Badger Carcass" */;
		case -674590015: /* GXTEntry: "Poor Badger Carcass" */
			return 1287583539 /* GXTEntry: "Poor Skinned Badger Carcass" */;
		case -1480423460: /* GXTEntry: "Good Beaver Carcass" */
			return -2126985311 /* GXTEntry: "Good Skinned Beaver Carcass" */;
		case 924882045: /* GXTEntry: "Perfect Beaver Carcass" */
			return -1268352491 /* GXTEntry: "Perfect Skinned Beaver Carcass" */;
		case 1415608202: /* GXTEntry: "Poor Beaver Carcass" */
			return -1940225526 /* GXTEntry: "Poor Skinned Beaver Carcass" */;
		case -593311590: /* GXTEntry: "Good Bighorn Sheep Carcass" */
			return -212307068 /* GXTEntry: "Good Skinned Bighorn Sheep Carcass" */;
		case 765085831: /* GXTEntry: "Perfect Bighorn Sheep Carcass" */
			return 355421032 /* GXTEntry: "Perfect Skinned Bighorn Sheep Carcass" */;
		case 2094730711: /* GXTEntry: "Poor Bighorn Sheep Carcass" */
			return 1657729714 /* GXTEntry: "Poor Skinned Bighorn Sheep Carcass" */;
		case -1310590179: /* GXTEntry: "Good Buck Carcass" */
			return 1350692346 /* GXTEntry: "Good Skinned Buck Carcass" */;
		case 992366796: /* GXTEntry: "Perfect Buck Carcass" */
			return -257850294 /* GXTEntry: "Perfect Skinned Buck Carcass" */;
		case -244657613: /* GXTEntry: "Poor Buck Carcass" */
			return -918541014 /* GXTEntry: "Poor Skinned Buck Carcass" */;
		case -2026210939: /* GXTEntry: "Good California Condor Carcass" */
			return -947573795 /* GXTEntry: "Good Plucked California Condor Carcass" */;
		case -1252472243: /* GXTEntry: "Perfect California Condor Carcass" */
			return -2068302756 /* GXTEntry: "Perfect Plucked California Condor Carcass" */;
		case -980016656: /* GXTEntry: "Poor California Condor Carcass" */
			return 1650829985 /* GXTEntry: "Poor Plucked California Condor Carcass" */;
		case -758005668: /* GXTEntry: "Good Chicken Carcass" */
			return -1808044035 /* GXTEntry: "Good Skinned Chicken Carcass" */;
		case -2139551030: /* GXTEntry: "Perfect Chicken Carcass" */
			return -1952647655 /* GXTEntry: "Perfect Skinned Chicken Carcass" */;
		case 1607144310: /* GXTEntry: "Poor Chicken Carcass" */
			return 1293221440 /* GXTEntry: "Poor Skinned Chicken Carcass" */;
		case 80093385: /* GXTEntry: "Good Cormorant Carcass" */
			return -642946194 /* GXTEntry: "Good Plucked Cormorant Carcass" */;
		case -867655342: /* GXTEntry: "Perfect Cormorant Carcass" */
			return 819214075 /* GXTEntry: "Perfect Plucked Cormorant Carcass" */;
		case 991092621: /* GXTEntry: "Poor Cormorant Carcass" */
			return -858652427 /* GXTEntry: "Poor Plucked Cormorant Carcass" */;
		case 871746664: /* GXTEntry: "Good Cougar Carcass" */
			return 395625948 /* GXTEntry: "Good Skinned Cougar Carcass" */;
		case 1626949878: /* GXTEntry: "Perfect Cougar Carcass" */
			return -2063800922 /* GXTEntry: "Perfect Skinned Cougar Carcass" */;
		case -1722483116: /* GXTEntry: "Poor Cougar Carcass" */
			return -2117103642 /* GXTEntry: "Poor Skinned Cougar Carcass" */;
		case -1739474417: /* GXTEntry: "Good Coyote Carcass" */
			return -1583694057 /* GXTEntry: "Good Skinned Coyote Carcass" */;
		case -161524199: /* GXTEntry: "Perfect Coyote Carcass" */
			return -1550918713 /* GXTEntry: "Perfect Skinned Coyote Carcass" */;
		case 156979555: /* GXTEntry: "Poor Coyote Carcass" */
			return 836539658 /* GXTEntry: "Poor Skinned Coyote Carcass" */;
		case 322141256: /* GXTEntry: "Good Crane Carcass" */
			return 773062352 /* GXTEntry: "Good Plucked Crane Carcass" */;
		case 1310120320: /* GXTEntry: "Perfect Crane Carcass" */
			return 1306100270 /* GXTEntry: "Perfect Plucked Crane Carcass" */;
		case -1228376431: /* GXTEntry: "Poor Crane Carcass" */
			return -1063194668 /* GXTEntry: "Poor Plucked Crane Carcass" */;
		case 472142656: /* GXTEntry: "Good Deer Carcass" */
			return 337839068 /* GXTEntry: "Good Skinned Deer Carcass" */;
		case -1837840093: /* GXTEntry: "Perfect Deer Carcass" */
			return -1426520714 /* GXTEntry: "Perfect Skinned Deer Carcass" */;
		case 58634176: /* GXTEntry: "Poor Deer Carcass" */
			return -1456429189 /* GXTEntry: "Poor Skinned Deer Carcass" */;
		case 1023080408: /* GXTEntry: "Good Duck Carcass" */
			return -2032809253 /* GXTEntry: "Good Skinned Duck Carcass" */;
		case 1001171791: /* GXTEntry: "Perfect Duck Carcass" */
			return 781728005 /* GXTEntry: "Perfect Skinned Duck Carcass" */;
		case 1210345318: /* GXTEntry: "Poor Duck Carcass" */
			return 1202409779 /* GXTEntry: "Poor Skinned Duck Carcass" */;
		case 399553313: /* GXTEntry: "Good Eagle Carcass" */
			return 1520877300 /* GXTEntry: "Good Plucked Eagle Carcass" */;
		case -1422869557: /* GXTEntry: "Perfect Eagle Carcass" */
			return -1736624361 /* GXTEntry: "Perfect Plucked Eagle Carcass" */;
		case -1378812236: /* GXTEntry: "Poor Eagle Carcass" */
			return 719465997 /* GXTEntry: "Poor Plucked Eagle Carcass" */;
		case 1011003885: /* GXTEntry: "Good Egret Carcass" */
			return -361486526 /* GXTEntry: "Good Skinned Egret Carcass" */;
		case 651035143: /* GXTEntry: "Perfect Egret Carcass" */
			return -765274711 /* GXTEntry: "Perfect Skinned Egret Carcass" */;
		case 2013022756: /* GXTEntry: "Poor Egret Carcass" */
			return -887205673 /* GXTEntry: "Poor Skinned Egret Carcass" */;
		case -1186289527: /* GXTEntry: "Good Fox Carcass" */
			return -784020903 /* GXTEntry: "Good Skinned Fox Carcass" */;
		case 877935135: /* GXTEntry: "Perfect Fox Carcass" */
			return -886117938 /* GXTEntry: "Perfect Skinned Fox Carcass" */;
		case -39646495: /* GXTEntry: "Poor Fox Carcass" */
			return -1416771220 /* GXTEntry: "Poor Skinned Fox Carcass" */;
		case 1582593525: /* GXTEntry: "Good Gila Monster Carcass" */
			return 1648676911 /* GXTEntry: "Good Skinned Gila Monster Carcass" */;
		case -246542229: /* GXTEntry: "Perfect Gila Monster Carcass" */
			return 2103833563 /* GXTEntry: "Perfect Skinned Gila Monster Carcass" */;
		case -529454751: /* GXTEntry: "Poor Gila Monster Carcass" */
			return -831636369 /* GXTEntry: "Poor Skinned Gila Monster Carcass" */;
		case -46978629: /* GXTEntry: "Good Goat Carcass" */
			return -852290935 /* GXTEntry: "Good Skinned Goat Carcass" */;
		case -1347000030: /* GXTEntry: "Perfect Goat Carcass" */
			return -1870415962 /* GXTEntry: "Perfect Skinned Goat Carcass" */;
		case -505583391: /* GXTEntry: "Poor Goat Carcass" */
			return -788684109 /* GXTEntry: "Poor Skinned Goat Carcass" */;
		case 1645887374: /* GXTEntry: "Good Goose Carcass" */
			return 1416435145 /* GXTEntry: "Good Skinned Goose Carcass" */;
		case -1559227925: /* GXTEntry: "Perfect Goose Carcass" */
			return -1483088274 /* GXTEntry: "Perfect Skinned Goose Carcass" */;
		case 1562528937: /* GXTEntry: "Poor Goose Carcass" */
			return -791867098 /* GXTEntry: "Poor Skinned Goose Carcass" */;
		case -1471526136: /* GXTEntry: "Good Hawk Carcass" */
			return -1689552552 /* GXTEntry: "Good Plucked Hawk Carcass" */;
		case -1440794801: /* GXTEntry: "Perfect Hawk Carcass" */
			return -1850779170 /* GXTEntry: "Perfect Plucked Hawk Carcass" */;
		case 2144711797:
			return -121487803 /* GXTEntry: "Poor Plucked Hawk Carcass" */;
		case 718825539: /* GXTEntry: "Good Heron Carcass" */
			return -1280499288 /* GXTEntry: "Good Skinned Heron Carcass" */;
		case 2105263879: /* GXTEntry: "Perfect Heron Carcass" */
			return 820245961 /* GXTEntry: "Perfect Skinned Heron Carcass" */;
		case -905842006: /* GXTEntry: "Poor Heron Carcass" */
			return -889526774 /* GXTEntry: "Poor Skinned Heron Carcass" */;
		case 1191274340: /* GXTEntry: "Good Iguana Carcass" */
			return -521025998 /* GXTEntry: "Good Skinned Iguana Carcass" */;
		case 1613453781: /* GXTEntry: "Perfect Iguana Carcass" */
			return 1583031244 /* GXTEntry: "Perfect Skinned Iguana Carcass" */;
		case -1030182399: /* GXTEntry: "Poor Iguana Carcass" */
			return -2115599211 /* GXTEntry: "Poor Skinned Iguana Carcass" */;
		case 987967309: /* GXTEntry: "Good Loon Carcass" */
			return -767176802 /* GXTEntry: "Good Skinned Loon Carcass" */;
		case -1060737769: /* GXTEntry: "Perfect Loon Carcass" */
			return -750945821 /* GXTEntry: "Perfect Skinned Loon Carcass" */;
		case 553310445: /* GXTEntry: "Poor Loon Carcass" */
			return -2135749211 /* GXTEntry: "Poor Skinned Loon Carcass" */;
		case -1838865945: /* GXTEntry: "Good Muskrat Carcass" */
			return 2063108046 /* GXTEntry: "Good Skinned Muskrat Carcass" */;
		case 1418092959: /* GXTEntry: "Perfect Muskrat Carcass" */
			return 1299111759 /* GXTEntry: "Perfect Skinned Muskrat Carcass" */;
		case -1315697778: /* GXTEntry: "Poor Muskrat Carcass" */
			return 1595322723 /* GXTEntry: "Poor Skinned Muskrat Carcass" */;
		case -1772126340: /* GXTEntry: "Good Opossum Carcass" */
			return 784918835 /* GXTEntry: "Good Skinned Opossum Carcass" */;
		case -935543049: /* GXTEntry: "Perfect Opossum Carcass" */
			return -676310905 /* GXTEntry: "Perfect Skinned Opossum Carcass" */;
		case 1772544356: /* GXTEntry: "Poor Opossum Carcass" */
			return -1719545959 /* GXTEntry: "Poor Skinned Opossum Carcass" */;
		case -266273535: /* GXTEntry: "Good Owl Carcass" */
			return -2142423934 /* GXTEntry: "Good Plucked Owl Carcass" */;
		case -1670544626: /* GXTEntry: "Perfect Owl Carcass" */
			return 747751566 /* GXTEntry: "Perfect Plucked Owl Carcass" */;
		case 1290960696: /* GXTEntry: "Poor Owl Carcass" */
			return -1942682403 /* GXTEntry: "Poor Plucked Owl Carcass" */;
		case 1913571052: /* GXTEntry: "Good Panther Carcass" */
			return 1018433784 /* GXTEntry: "Good Skinned Panther Carcass" */;
		case 1717601520: /* GXTEntry: "Perfect Panther Carcass" */
			return -796185392 /* GXTEntry: "Perfect Skinned Panther Carcass" */;
		case 430397370: /* GXTEntry: "Poor Panther Carcass" */
			return -49549406 /* GXTEntry: "Poor Skinned Panther Carcass" */;
		case 16287711: /* GXTEntry: "Good Parrot Carcass" */
			return 857788498 /* GXTEntry: "Good Plucked Parrot Carcass" */;
		case -1356230367: /* GXTEntry: "Perfect Parrot Carcass" */
			return 1223148871 /* GXTEntry: "Perfect Plucked Parrot Carcass" */;
		case 1417331079: /* GXTEntry: "Poor Parrot Carcass" */
			return 939407236 /* GXTEntry: "Poor Plucked Parrot Carcass" */;
		case -884124246: /* GXTEntry: "Good Pelican Carcass" */
			return 1608778431 /* GXTEntry: "Good Plucked Pelican Carcass" */;
		case 1884610748: /* GXTEntry: "Perfect Pelican Carcass" */
			return -2033821082 /* GXTEntry: "Perfect Plucked Pelican Carcass" */;
		case 746558492: /* GXTEntry: "Poor Pelican Carcass" */
			return -993340234 /* GXTEntry: "Poor Plucked Pelican Carcass" */;
		case -892811627: /* GXTEntry: "Good Pheasant Carcass" */
			return -1861062075 /* GXTEntry: "Good Skinned Pheasant Carcass" */;
		case -2040522845: /* GXTEntry: "Perfect Pheasant Carcass" */
			return 1645001514 /* GXTEntry: "Perfect Skinned Pheasant Carcass" */;
		case -1224510844: /* GXTEntry: "Poor Pheasant Carcass" */
			return 782371031 /* GXTEntry: "Poor Skinned Pheasant Carcass" */;
		case 1334837390: /* GXTEntry: "Good Pig Carcass" */
			return 1255529169 /* GXTEntry: "Good Skinned Pig Carcass" */;
		case 339620522: /* GXTEntry: "Perfect Pig Carcass" */
			return 70898308 /* GXTEntry: "Perfect Skinned Pig Carcass" */;
		case 1770451033: /* GXTEntry: "Poor Pig Carcass" */
			return -1050350982 /* GXTEntry: "Poor Skinned Pig Carcass" */;
		case 756657535: /* GXTEntry: "Good Prairie Chicken Carcass" */
			return 581781784 /* GXTEntry: "Good Skinned Prairie Chicken Carcass" */;
		case 862898895: /* GXTEntry: "Perfect Prairie Chicken Carcass" */
			return -1363330863 /* GXTEntry: "Perfect Skinned Prairie Chicken Carcass" */;
		case 1997845858: /* GXTEntry: "Poor Prairie Chicken Carcass" */
			return -1780911288 /* GXTEntry: "Poor Skinned Prairie Chicken Carcass" */;
		case -1930144509: /* GXTEntry: "Good Pronghorn Carcass" */
			return 1018306802 /* GXTEntry: "Good Skinned Pronghorn Carcass" */;
		case 1846915545: /* GXTEntry: "Perfect Pronghorn Carcass" */
			return 1615521415 /* GXTEntry: "Perfect Skinned Pronghorn Carcass" */;
		case -1816929509: /* GXTEntry: "Poor Pronghorn Carcass" */
			return -1499066338 /* GXTEntry: "Poor Skinned Pronghorn Carcass" */;
		case 1197831625: /* GXTEntry: "Good Rabbit Carcass" */
			return 1711081908 /* GXTEntry: "Good Skinned Rabbit Carcass" */;
		case -1866642239: /* GXTEntry: "Perfect Rabbit Carcass" */
			return -164705 /* GXTEntry: "Perfect Skinned Rabbit Carcass" */;
		case -1508120809: /* GXTEntry: "Poor Rabbit Carcass" */
			return -2044044647 /* GXTEntry: "Poor Skinned Rabbit Carcass" */;
		case -1007681885: /* GXTEntry: "Good Raccoon Carcass" */
			return -859583379 /* GXTEntry: "Good Skinned Raccoon Carcass" */;
		case 434924608: /* GXTEntry: "Perfect Raccoon Carcass" */
			return -759504052 /* GXTEntry: "Perfect Skinned Raccoon Carcass" */;
		case 1666393029: /* GXTEntry: "Poor Raccoon Carcass" */
			return 700225820 /* GXTEntry: "Poor Skinned Raccoon Carcass" */;
		case -1814593136: /* GXTEntry: "Good Ram Carcass" */
			return 136458586 /* GXTEntry: "Good Skinned Ram Carcass" */;
		case -1188120304: /* GXTEntry: "Perfect Ram Carcass" */
			return 799105420 /* GXTEntry: "Perfect Skinned Ram Carcass" */;
		case 1978734761: /* GXTEntry: "Poor Ram Carcass" */
			return -481655757 /* GXTEntry: "Poor Skinned Ram Carcass" */;
		case -824902132: /* GXTEntry: "Good Raven Carcass" */
			return 484160931 /* GXTEntry: "Good Plucked Raven Carcass" */;
		case -1015531226: /* GXTEntry: "Perfect Raven Carcass" */
			return 1010699907 /* GXTEntry: "Perfect Plucked Raven Carcass" */;
		case -581619522: /* GXTEntry: "Poor Raven Carcass" */
			return 1550264248 /* GXTEntry: "Poor Plucked Raven Carcass" */;
		case -861854914: /* GXTEntry: "Good Red-footed Booby Carcass" */
			return -371992731 /* GXTEntry: "Good Plucked Red-footed Booby Carcass" */;
		case -545447034: /* GXTEntry: "Perfect Red-footed Booby Carcass" */
			return 1090294483 /* GXTEntry: "Perfect Plucked Red-footed Booby Carcass" */;
		case -1824684934: /* GXTEntry: "Poor Red-footed Booby Carcass" */
			return -274175035 /* GXTEntry: "Poor Plucked Red-footed Booby Carcass" */;
		case 980653387: /* GXTEntry: "Good Rooster Carcass" */
			return -1064414912 /* GXTEntry: "Good Skinned Rooster Carcass" */;
		case -1011598664: /* GXTEntry: "Perfect Rooster Carcass" */
			return -2091620305 /* GXTEntry: "Perfect Skinned Rooster Carcass" */;
		case -177476569: /* GXTEntry: "Poor Rooster Carcass" */
			return -468684824 /* GXTEntry: "Poor Skinned Rooster Carcass" */;
		case 416630124: /* GXTEntry: "Good Roseate Spoonbill Carcass" */
			return 1668870118 /* GXTEntry: "Good Skinned Roseate Spoonbill Carcass" */;
		case 1925728375: /* GXTEntry: "Perfect Roseate Spoonbill Carcass" */
			return -534004020 /* GXTEntry: "Perfect Skinned Roseate Spoonbill Carcass" */;
		case -1080457688: /* GXTEntry: "Poor Roseate Spoonbill Carcass" */
			return -2126925270 /* GXTEntry: "Poor Skinned Roseate Spoonbill Carcass" */;
		case 1742676369: /* GXTEntry: "Good Seagull Carcass" */
			return 2008380517 /* GXTEntry: "Good Plucked Seagull Carcass" */;
		case -899751553: /* GXTEntry: "Perfect Seagull Carcass" */
			return -510697884 /* GXTEntry: "Perfect Plucked Seagull Carcass" */;
		case 431501574: /* GXTEntry: "Poor Seagull Carcass" */
			return -955209948 /* GXTEntry: "Poor Plucked Seagull Carcass" */;
		case 2126795269:
			return 1459836898 /* GXTEntry: "Good Skinned Sheep Carcass" */;
		case 1489051752: /* GXTEntry: "Perfect Sheep Carcass" */
			return 303969766 /* GXTEntry: "Perfect Skinned Sheep Carcass" */;
		case -1705499323: /* GXTEntry: "Poor Sheep Carcass" */
			return -1707588662 /* GXTEntry: "Poor Skinned Sheep Carcass" */;
		case -2013445740: /* GXTEntry: "Good Skunk Carcass" */
			return -1224075784 /* GXTEntry: "Good Skinned Skunk Carcass" */;
		case 102446365: /* GXTEntry: "Perfect Skunk Carcass" */
			return -1806671048 /* GXTEntry: "Perfect Skinned Skunk Carcass" */;
		case -1927342740: /* GXTEntry: "Poor Skunk Carcass" */
			return 749765420 /* GXTEntry: "Poor Skinned Skunk Carcass" */;
		case -410900360: /* GXTEntry: "Good Black-tailed Rattlesnake Carcass" */
			return 462936163 /* GXTEntry: "Good Skinned Black-Tailed Rattlesnake Carcass" */;
		case -1073614594: /* GXTEntry: "Perfect Black-tailed Rattlesnake Carcass" */
			return -8888941 /* GXTEntry: "Perfect Skinned Black-Tailed Rattlesnake Carcass" */;
		case 2060013792: /* GXTEntry: "Poor Black-tailed Rattlesnake Carcass" */
			return 1640227110 /* GXTEntry: "Poor Skinned Black-Tailed Rattlesnake Carcass" */;
		case 581032175: /* GXTEntry: "Good Red Boa Carcass" */
			return -1241188722 /* GXTEntry: "Good Skinned Red Boa Carcass" */;
		case -581931638: /* GXTEntry: "Perfect Red Boa Carcass" */
			return -1030962659 /* GXTEntry: "Perfect Skinned Red Boa Carcass" */;
		case -1528265128: /* GXTEntry: "Poor Red Boa Carcass" */
			return 112552982 /* GXTEntry: "Poor Skinned Red Boa Carcass" */;
		case -142632645: /* GXTEntry: "Good Copperhead Carcass" */
			return -1599578931 /* GXTEntry: "Good Skinned Copperhead Carcass" */;
		case -2048519180: /* GXTEntry: "Perfect Copperhead Carcass" */
			return 1296331626 /* GXTEntry: "Perfect Skinned Copperhead Carcass" */;
		case 1442025993: /* GXTEntry: "Poor Copperhead Carcass" */
			return -1256398198 /* GXTEntry: "Poor Skinned Copperhead Carcass" */;
		case 441195430: /* GXTEntry: "Good Fer-de-Lance Carcass" */
			return 1297800973 /* GXTEntry: "Good Skinned Fer-de-lance Carcass" */;
		case 748665395: /* GXTEntry: "Perfect Fer-de-Lance Carcass" */
			return 1772582754 /* GXTEntry: "Perfect Skinned Fer-de-lance Carcass" */;
		case 351048413: /* GXTEntry: "Poor Fer-de-Lance Carcass" */
			return -1459876379 /* GXTEntry: "Poor Skinned Fer-de-lance Carcass" */;
		case -914779013: /* GXTEntry: "Good Snake Carcass" */
			return 1127406863 /* GXTEntry: "Good Skinned Snake Carcass" */;
		case 1323485831: /* GXTEntry: "Perfect Snake Carcass" */
			return 1779996957 /* GXTEntry: "Perfect Skinned Snake Carcass" */;
		case -365111821: /* GXTEntry: "Poor Snake Carcass" */
			return 1885306923 /* GXTEntry: "Poor Skinned Snake Carcass" */;
		case 101495387: /* GXTEntry: "Good Water Snake Carcass" */
			return 1244107697 /* GXTEntry: "Good Skinned Water Snake Carcass" */;
		case 157917500: /* GXTEntry: "Perfect Water Snake Carcass" */
			return -1201555940 /* GXTEntry: "Perfect Skinned Water Snake Carcass" */;
		case -936537044: /* GXTEntry: "Poor Water Snake Carcass" */
			return -668487833 /* GXTEntry: "Poor Skinned Water Snake Carcass" */;
		case -1610329427: /* GXTEntry: "Good Turkey Carcass" */
			return -1178150148 /* GXTEntry: "Good Skinned Turkey Carcass" */;
		case -1836227998: /* GXTEntry: "Perfect Turkey Carcass" */
			return 1171158615 /* GXTEntry: "Perfect Skinned Turkey Carcass" */;
		case 619479575: /* GXTEntry: "Poor Turkey Carcass" */
			return -2123554124 /* GXTEntry: "Poor Skinned Turkey Carcass" */;
		case -1444929945: /* GXTEntry: "Good Snapping Turtle Carcass" */
			return 1806705761 /* GXTEntry: "Good Skinned Snapping Turtle Carcass" */;
		case -929322235: /* GXTEntry: "Perfect Snapping Turtle Carcass" */
			return 404581836 /* GXTEntry: "Perfect Skinned Snapping Turtle Carcass" */;
		case -548076717: /* GXTEntry: "Poor Snapping Turtle Carcass" */
			return 987197489 /* GXTEntry: "Poor Skinned Snapping Turtle Carcass" */;
		case -281211381: /* GXTEntry: "Good Vulture Carcass" */
			return -1259715647 /* GXTEntry: "Good Plucked Vulture Carcass" */;
		case 493457089: /* GXTEntry: "Perfect Vulture Carcass" */
			return -1716717840 /* GXTEntry: "Perfect Plucked Vulture Carcass" */;
		case -479485786: /* GXTEntry: "Poor Vulture Carcass" */
			return -196277007 /* GXTEntry: "Poor Plucked Vulture Carcass" */;
		case 27838955: /* GXTEntry: "Good Wolf Carcass" */
			return -2064457926 /* GXTEntry: "Good Skinned Wolf Carcass" */;
		case 1641833719: /* GXTEntry: "Perfect Wolf Carcass" */
			return 561267454 /* GXTEntry: "Perfect Skinned Wolf Carcass" */;
		case -314933180: /* GXTEntry: "Poor Wolf Carcass" */
			return 686253083 /* GXTEntry: "Poor Skinned Wolf Carcass" */;
		default:
			break;
	}
	return 0;
}

