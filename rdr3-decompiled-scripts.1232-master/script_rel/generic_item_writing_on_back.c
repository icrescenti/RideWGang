#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	float fLocal_12 = 0f;
	float fLocal_13 = 0f;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
#endregion

void __EntryFunction__()
{
	struct<152> Var0;
	int iVar152;
	int iVar153;

	fLocal_12 = 1f;
	fLocal_13 = 1f;
	Var0.f_5.f_2 = 12;
	Var0.f_5.f_64 = 24;
	Var0.f_5.f_89 = 24;
	Var0.f_150 = 1;
	Var0.f_151 = 1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1(&Var0);
	}
	Var0.f_128 = TASK::_0x804425C4BBD00883(Global_35);
	if (!func_2(Var0.f_128, 0))
	{
		Global_1911772 = 323269915;
	}
	else
	{
		Global_1911772 = Var0.f_128;
	}
	Var0.f_131 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_NUM_LABEL_TYPES(Var0.f_128);
	iVar152 = 0;
	while (iVar152 < Var0.f_131)
	{
		Var0.f_5.f_2[iVar152 /*5*/] = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_TYPE(Var0.f_128, iVar152);
		(Var0.f_5.f_2[iVar152 /*5*/])->f_2 = &Var0.f_5.f_2[iVar152 /*5*/];
		(Var0.f_5.f_2[iVar152 /*5*/])->f_1 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_NUM_VALUES(Var0.f_128, (Var0.f_5.f_2[iVar152 /*5*/])->f_2);
		iVar152++;
	}
	Var0.f_134 = ANIMSCENE::_CREATE_ANIM_SCENE("lightrig@player_journal", 0, "plMain", false, true);
	ANIMSCENE::LOAD_ANIM_SCENE(Var0.f_134);
	Var0.f_142 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(Global_35) && (PED::IS_PED_USING_ANY_SCENARIO(Global_35) && !PED::GET_PED_CONFIG_FLAG(Global_35, 464, true)))
	{
		Var0.f_142 = 1;
	}
	if (func_3(Var0.f_128, -1903335637))
	{
		PED::_0xCB9401F918CB0F75(Global_35, "GENERIC_DOCUMENT_FLIP_AVAILABLE", 1, -1);
	}
	else
	{
		PED::_0xCB9401F918CB0F75(Global_35, "GENERIC_DOCUMENT_FLIP_AVAILABLE", 0, -1);
	}
	while (!func_4())
	{
		Var0.f_130 = TASK::_0x6AA3DCA2C6F5EB6D(Global_35);
		if ((ANIMSCENE::_0x25557E324489393C(Var0.f_134) && ANIMSCENE::_0x477122B8D05E7968(Var0.f_134, 1, 0)) && !ANIMSCENE::_0xCBFC7725DE6CE2E0(Var0.f_134, 0))
		{
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Var0.f_134, Global_36, ENTITY::GET_ENTITY_ROTATION(Global_35, 2), 2);
			ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY_PRESERVING_LOCATION(Var0.f_134, Global_35, -1);
			ANIMSCENE::START_ANIM_SCENE(Var0.f_134);
		}
		iVar153 = TASK::_0x6AA3DCA2C6F5EB6D(Global_35);
		if (iVar153 == -1215562113 || iVar153 == -982676640)
		{
			func_5(&Var0);
		}
		else if (iVar153 == 579381260 || iVar153 == 1510958603)
		{
			func_6(&Var0);
		}
		BUILTIN::WAIT(0);
	}
	func_1(&Var0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0)
{
	func_7(uParam0);
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uLocal_15))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uLocal_15);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_2(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_3(int iParam0, int iParam1)
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

int func_4()
{
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return 1;
	}
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		return 1;
	}
	if (!TASK::_0x038B1F1674F0E242(Global_35))
	{
		return 1;
	}
	if (!func_8())
	{
		return 1;
	}
	return 0;
}

void func_5(var uParam0)
{
	if (uParam0->f_131 > 0)
	{
		if (!PED::_0x4912DFE492DB98CD(Global_35, "GENERIC_BOOK_READ_AVAILABLE"))
		{
			PED::_0xCB9401F918CB0F75(Global_35, "GENERIC_BOOK_READ_AVAILABLE", 1, -1);
		}
		if (PED::_0x4912DFE492DB98CD(Global_35, "GENERIC_BOOK_READ_AVAILABLE") && PAD::IS_CONTROL_JUST_RELEASED(0, -473983589))
		{
			if (UIAPPS::_LAUNCH_APP_BY_HASH_WITH_ENTRY(-605293197, -1769873703) == 0)
			{
				uParam0->f_5.f_1 = 1;
				func_9(uParam0);
			}
		}
	}
	else if (PED::_0x4912DFE492DB98CD(Global_35, "GENERIC_BOOK_READ_AVAILABLE"))
	{
		PED::_0xCB9401F918CB0F75(Global_35, "GENERIC_BOOK_READ_AVAILABLE", 0, -1);
	}
	if (UIAPPS::_IS_APP_RUNNING(-605293197))
	{
		HUD::_0xC9CAEAEEC1256E54(382897689);
	}
	else if (uParam0->f_5.f_1)
	{
		func_7(uParam0);
	}
}

void func_6(var uParam0)
{
	if (uParam0->f_131 > 0 && uParam0->f_128 == -197923977)
	{
		if (!PED::_0x4912DFE492DB98CD(Global_35, "GENERIC_BOOK_READ_AVAILABLE"))
		{
			PED::_0xCB9401F918CB0F75(Global_35, "GENERIC_BOOK_READ_AVAILABLE", 1, -1);
		}
		if (PED::_0x4912DFE492DB98CD(Global_35, "GENERIC_BOOK_READ_AVAILABLE") && PAD::IS_CONTROL_JUST_RELEASED(0, -473983589))
		{
			if (UIAPPS::_LAUNCH_APP_BY_HASH_WITH_ENTRY(-605293197, -1769873703) == 0)
			{
				uParam0->f_5.f_1 = 1;
				func_9(uParam0);
			}
		}
	}
	else if (PED::_0x4912DFE492DB98CD(Global_35, "GENERIC_BOOK_READ_AVAILABLE"))
	{
		PED::_0xCB9401F918CB0F75(Global_35, "GENERIC_BOOK_READ_AVAILABLE", 0, -1);
	}
	if (UIAPPS::_IS_APP_RUNNING(-605293197))
	{
		HUD::_0xC9CAEAEEC1256E54(382897689);
	}
	else if (uParam0->f_5.f_1)
	{
		func_7(uParam0);
	}
}

void func_7(var uParam0)
{
	if (uParam0->f_5.f_1 && !UIAPPS::_IS_APP_RUNNING(-605293197))
	{
		AUDIO::PLAY_SOUND_FRONTEND("READ", "HUD_SHOP_SOUNDSET", true, 0);
		uParam0->f_5.f_1 = 0;
	}
}

bool func_8()
{
	return func_10(1);
}

void func_9(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uLocal_15))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uLocal_15);
	}
	func_11(uParam0);
	uLocal_15 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Translate");
	uParam0->f_5.f_63 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uLocal_15, "Generic");
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_131)
	{
		iVar0 = 0;
		while (iVar0 < (uParam0->f_5.f_2[iVar1 /*5*/])->f_1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_VALUE(uParam0->f_128, (uParam0->f_5.f_2[iVar1 /*5*/])->f_2, iVar0);
			switch (&uParam0->f_5.f_2[iVar1 /*5*/])
			{
				case 1410847083:
					func_12(&(uParam0->f_5), iVar2, 1, 1, 0);
					iVar2++;
					break;
				case -641080715:
					func_12(&(uParam0->f_5), iVar2, 3, 1, 0);
					iVar2++;
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

bool func_10(int iParam0)
{
	return func_13(iParam0);
}

void func_11(var uParam0)
{
	int iVar0;

	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_5.f_63))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_5.f_63);
	}
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(&(uParam0->f_5.f_64[iVar0])))
		{
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(&(uParam0->f_5.f_64[iVar0]));
		}
		if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(&(uParam0->f_5.f_89[iVar0])))
		{
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(&(uParam0->f_5.f_89[iVar0]));
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

void func_12(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	vector3 vVar0[24];

	if (iParam1 >= 24)
	{
		return;
	}
	StringCopy(&cVar0, "textField", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	if (bParam4)
	{
		StringConCat(&cVar0, "Strike", 24);
	}
	uParam0->f_64[iParam1] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_63, &cVar0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(&(uParam0->f_64[iParam1]), "text", *uParam0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(&(uParam0->f_64[iParam1]), "style", iParam2);
	StringCopy(&cVar0, "divider", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	uParam0->f_89[iParam1] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_63, &cVar0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(&(uParam0->f_89[iParam1]), "isVisible", iParam3);
}

bool func_13(var uParam0)
{
	return func_14(Global_1935496->f_27, uParam0);
}

bool func_14(var uParam0, var uParam1)
{
	return (uParam0 && uParam1) != 0;
}

