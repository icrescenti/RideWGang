#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
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
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	struct<69> Local_19 = { 0, 0, 10, 0, 0, 0, 0, 0, -1, 2, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 3;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 10;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = -1;
	var uLocal_174[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_185 = 0;
	var uLocal_186[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	int iLocal_202 = 0;
	bool bLocal_203 = false;
	bool bLocal_204 = false;
	bool bLocal_205 = false;
	int iLocal_206 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion

void __EntryFunction__()
{
	iLocal_0 = 1;
	fLocal_12 = 1f;
	fLocal_13 = 1f;
	iLocal_2 = vScriptParam_0.x;
	iLocal_3 = vScriptParam_0.y;
	uLocal_4 = vScriptParam_0.z;
	func_1();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_2();
	}
	while (!SCRIPTS::_0x9E4EF615E307FBBE() && func_3())
	{
		func_4();
		func_5();
		func_6();
		BUILTIN::WAIT(0);
	}
	func_2();
}

void func_1()
{
}

void func_2()
{
	func_7();
	SCRIPTS::_0xE7282390542F570D(iLocal_2);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_8();
	}
	else
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

int func_3()
{
	if (iLocal_1 != 0)
	{
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(iLocal_1) == 0)
		{
			return iLocal_0;
		}
		else
		{
			return 1;
		}
	}
	return iLocal_0;
}

void func_4()
{
}

void func_5()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(2))
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(2, iVar0))
		{
			case -45008988:
				func_9(iVar0);
				break;
			case -456923784:
				func_10(iVar0);
				break;
			case -843555838:
				func_11(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_6()
{
	char* sVar0;
	vector3 vVar4;
	vector3 vVar7;
	char* sVar10;

	if (!ENTITY::DOES_ENTITY_EXIST(Local_19))
	{
		Local_19 = PLAYER::PLAYER_PED_ID();
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_19.f_5))
	{
		func_12(&Local_19);
		bLocal_203 = true;
		Local_19.f_6 = iLocal_3;
		Local_19.f_7 = uLocal_4;
		Local_19.f_5 = TASK::_0x7467165EE97D3C68(iLocal_3);
		if (ENTITY::DOES_ENTITY_EXIST(Local_19.f_5))
		{
			iLocal_197 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(Local_19.f_5);
			OBJECT::_0xB6CBD40F8EA69E8A(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(Local_19.f_5));
		}
	}
	switch (iLocal_202)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(Local_19.f_5) && OBJECT::_0xB6CBD40F8EA69E8A(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(Local_19.f_5)))
			{
				if (!TASK::_0x841475AC96E794D1(Local_19.f_6))
				{
					iLocal_0 = 0;
					return;
				}
				if (TASK::_0xB219612B5568E9EC(Local_19.f_5))
				{
					iLocal_0 = 0;
					return;
				}
				func_13(&Local_19);
				func_14(&Local_19);
				bLocal_205 = func_15(&Local_19);
				if (bLocal_205)
				{
					Local_19.f_3 = !func_16(Local_19.f_5);
				}
				else
				{
					Local_19.f_3 = 1;
					func_17(0, 0f, 0f, 0f, &iLocal_197, 0, 0);
				}
				uLocal_198 = func_18(&Local_19, bLocal_205);
				func_19(Local_19.f_5);
				Local_19.f_1 = ENTITY::GET_ENTITY_MODEL(Local_19.f_5);
				func_20(&Local_19);
				func_21(&uLocal_199);
				iLocal_202 = 1;
			}
			break;
		case 1:
			if (!TASK::_0x841475AC96E794D1(Local_19.f_6))
			{
				iLocal_0 = 0;
				return;
			}
			if (bLocal_203)
			{
				iLocal_206 = 0;
				while (iLocal_206 < 10)
				{
					MISC::_INT_TO_STRING(iLocal_206, "%i", &sVar0);
					func_23(uLocal_174[iLocal_206], Local_19.f_12[iLocal_206], &Local_19, uLocal_186[iLocal_206], &sVar0, *(Local_19.f_37[iLocal_206 /*3*/]), *(Local_19.f_68[iLocal_206 /*3*/]), 0, 1, 1, func_22(&uLocal_199, 2f), &(Local_19.f_26[iLocal_206]));
					iLocal_206++;
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_19.f_5))
				{
					vVar4 = { ENTITY::GET_ENTITY_COORDS(Local_19.f_5, true, false) };
					vVar7 = { ENTITY::GET_ENTITY_ROTATION(Local_19.f_5, 2) };
				}
				else
				{
					vVar4 = { TASK::_0xA8452DD321607029(iLocal_3, 1) };
					vVar7 = { 0f, 0f, TASK::_0xB93EA7184BAA85C3(iLocal_3, 1) };
				}
				func_24(&iLocal_185, &uLocal_198, &Local_19, vVar4, vVar7);
			}
			bLocal_204 = true;
			iLocal_206 = 0;
			while (iLocal_206 < 10)
			{
				if (&uLocal_174[iLocal_206] < 2)
				{
					bLocal_204 = false;
				}
				else
				{
					iLocal_206++;
					if (iLocal_185 != 4)
					{
						bLocal_204 = false;
					}
					if (bLocal_204)
					{
						func_21(&uLocal_199);
						iLocal_202 = 2;
					}
					Jump @776; //curOff = 561
					if (!TASK::_0x841475AC96E794D1(Local_19.f_6))
					{
						iLocal_0 = 0;
						return;
					}
					if (bLocal_203)
					{
						iLocal_206 = 0;
						while (iLocal_206 < 10)
						{
							MISC::_INT_TO_STRING(iLocal_206, "%i", &sVar10);
							func_23(uLocal_174[iLocal_206], Local_19.f_12[iLocal_206], &Local_19, uLocal_186[iLocal_206], &sVar10, *(Local_19.f_37[iLocal_206 /*3*/]), *(Local_19.f_68[iLocal_206 /*3*/]), 0, 1, 0, func_22(&uLocal_199, 2f), &(Local_19.f_26[iLocal_206]));
							iLocal_206++;
						}
					}
					bLocal_204 = true;
					iLocal_206 = 0;
					while (iLocal_206 < 10)
					{
						if (&uLocal_174[iLocal_206] != 4)
						{
							bLocal_204 = false;
						}
						else
						{
							iLocal_206++;
							if (bLocal_204)
							{
								func_25(&uLocal_199);
								iLocal_202 = 3;
							}
							Jump @776; //curOff = 734
							if (!TASK::_0x841475AC96E794D1(Local_19.f_6) || !PED::_0x9C54041BB66BCF9E(Global_35, Local_19.f_6))
							{
								iLocal_0 = 0;
								return;
							}
						}
					}
				}
			}
		}

void func_7()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_19.f_5))
	{
		if (TASK::_0xB219612B5568E9EC(Local_19.f_5))
		{
			func_26(Local_19.f_5);
		}
	}
}

void func_8()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_9(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, 1);
		func_27(&iVar0);
	}
}

void func_10(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, 1);
		func_28(&iVar0);
	}
}

void func_11(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, 1);
		func_29(&iVar0);
	}
}

void func_12(var uParam0)
{
	int iVar0;

	uParam0->f_1 = 0;
	uParam0->f_154 = -1;
	uParam0->f_7 = 0;
	uParam0->f_8 = -1;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_99[iVar0] = -1;
		iVar0++;
	}
}

void func_13(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		uParam0->f_103[iVar0 /*5*/] = -1;
		(uParam0->f_103[iVar0 /*5*/])->f_3 = 0;
		(uParam0->f_103[iVar0 /*5*/])->f_1 = 0;
		(uParam0->f_103[iVar0 /*5*/])->f_2 = 0f;
		(uParam0->f_103[iVar0 /*5*/])->f_4 = 0;
		iVar0++;
	}
}

void func_14(var uParam0)
{
	func_30(uParam0);
	func_31(uParam0);
	func_32(uParam0);
}

int func_15(var uParam0)
{
	if (DECORATOR::DECOR_EXIST_ON(uParam0->f_5, "loot_allow_random") && DECORATOR::DECOR_GET_BOOL(uParam0->f_5, "loot_allow_random"))
	{
		return 1;
	}
	if (TASK::_0x8569C38D2FB80650(uParam0->f_6, 25))
	{
		return 0;
	}
	if (func_33() == 0)
	{
		return 0;
	}
	if (func_34(TASK::_0xA8452DD321607029(uParam0->f_6, 1)))
	{
		return 0;
	}
	if (func_35(0) || func_35(3))
	{
		return 0;
	}
	return 1;
}

int func_16(int iParam0)
{
	if ((((((((DECORATOR::DECOR_EXIST_ON(iParam0, "loot_empty") || DECORATOR::DECOR_EXIST_ON(iParam0, "loot_money")) || DECORATOR::DECOR_EXIST_ON(iParam0, "fLoot_money")) || DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type1")) || DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type2")) || DECORATOR::DECOR_EXIST_ON(iParam0, "loot_ammo1_type")) || DECORATOR::DECOR_EXIST_ON(iParam0, "loot_ammo2_type")) || DECORATOR::DECOR_EXIST_ON(iParam0, "loot_ammo3_type")) || DECORATOR::DECOR_EXIST_ON(iParam0, "loot_weapon"))
	{
		return 0;
	}
	return 1;
}

void func_17(int iParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam4))
	{
		*iParam4 = func_36(iParam0, vParam1, iParam5, iParam6);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam4))
	{
		func_37(*iParam4);
	}
}

int func_18(var uParam0, bool bParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5) && DECORATOR::DECOR_EXIST_ON(uParam0->f_5, "lootable_interior"))
	{
		iVar0 = DECORATOR::DECOR_GET_INT(uParam0->f_5, "lootable_interior");
		if (iVar0 == 0)
		{
			bParam1 = true;
		}
		else
		{
			return iVar0;
		}
	}
	if (bParam1)
	{
		switch (uParam0->f_8)
		{
			case 0:
				return func_38();
			case 1:
				return func_39();
			case 16:
				return func_40();
			case 17:
				return func_41(uParam0);
			default:
				break;
		}
	}
	return 0;
}

void func_19(int iParam0)
{
	int iVar0;
	struct<10> Var1;

	iVar0 = OBJECT::_0x250EBB11E81A10BE(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	if (func_42(OBJECT::_0x2BF1953C0C21AC88(iVar0), 1))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "loot_empty", true);
		return;
	}
	OBJECT::_0x7D4411D6736CD295(iVar0, &Var1);
	if (Var1 > 0)
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_money", Var1);
	}
	if (Var1.f_2 > 0)
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_ammo1_type", Var1.f_1);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_ammo1_amt", Var1.f_2);
	}
	if (Var1.f_4 > 0)
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_ammo2_type", Var1.f_3);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_ammo2_amt", Var1.f_4);
	}
	if (Var1.f_6 > 0)
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_ammo3_type", Var1.f_5);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_ammo3_amt", Var1.f_6);
	}
	if (Var1.f_8 > 0)
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_type1", Var1.f_7);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_amt1", Var1.f_8);
	}
	if (Var1.f_9 != 0)
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_weapon", Var1.f_9);
	}
}

void func_20(var uParam0)
{
	struct<13> Var0;
	int iVar23;
	int iVar24;

	if (uParam0->f_3 && func_43(uParam0->f_5))
	{
		return;
	}
	Var0.f_1 = 10;
	Var0.f_12 = 10;
	if (!func_44(uParam0->f_5))
	{
		MISC::_0x48E4D50F87A96AA5(*uParam0, 1, 1, uParam0->f_1, &Var0, 0);
	}
	if (Var0 <= 0 && !uParam0->f_3)
	{
		return;
	}
	if (uParam0->f_3)
	{
		func_45(uParam0, &Var0, 10);
	}
	if (uParam0->f_2 > 10)
	{
		uParam0->f_2 = 10;
	}
	iVar23 = 0;
	while (iVar23 < uParam0->f_2)
	{
		uParam0->f_26[iVar23] = &Var0.f_1[iVar23];
		if ((uParam0->f_103[iVar23 /*5*/])->f_4 != 0)
		{
			uParam0->f_12[iVar23] = (uParam0->f_103[iVar23 /*5*/])->f_4;
		}
		else
		{
			iVar24 = TASK::_0xE47DD64B9F02677D(&(Var0.f_1[iVar23]));
			if (iVar24 == 0 && &uParam0->f_26[iVar23] != 0)
			{
				uParam0->f_12[iVar23] = 1077976463;
			}
			else
			{
				uParam0->f_12[iVar23] = iVar24;
			}
		}
		iVar23++;
	}
}

void func_21(var uParam0)
{
	func_46(uParam0, 0f);
}

int func_22(var uParam0, float fParam1)
{
	if (!func_47(uParam0))
	{
		return 0;
	}
	if (func_48(uParam0) > fParam1)
	{
		return 1;
	}
	return 0;
}

void func_23(var uParam0, var uParam1, var uParam2, var uParam3, char* sParam4, vector3 vParam5, vector3 vParam8, bool bParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;

	switch (*uParam0)
	{
		case 0:
			if (*uParam1 != 0)
			{
				STREAMING::REQUEST_MODEL(*uParam1, false);
				*uParam0 = 1;
			}
			else
			{
				*uParam0 = 4;
			}
			break;
		case 1:
			if (STREAMING::HAS_MODEL_LOADED(*uParam1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam2->f_5))
				{
					if (uParam2->f_154 != -1)
					{
						vVar3 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(uParam2->f_5, uParam2->f_154) };
						vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar3, ENTITY::GET_ENTITY_HEADING(uParam2->f_5), vParam5) };
					}
					else
					{
						vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam2->f_5, vParam5) };
					}
				}
				else if (TASK::_0x841475AC96E794D1(uParam2->f_6))
				{
					vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(TASK::_0xA8452DD321607029(uParam2->f_6, 1), TASK::_0xB93EA7184BAA85C3(uParam2->f_6, 1), vParam5) };
				}
			else
			{
				}
				else
				{
					*uParam3 = OBJECT::CREATE_OBJECT(*uParam1, vVar0, true, true, false, false, bParam11);
					ENTITY::SET_ENTITY_INVINCIBLE(*uParam3, true);
					OBJECT::_0x1461DF6DB886BE3F(*uParam3);
					if (bParam12)
					{
						iVar6 = func_49(uParam2->f_4, uParam2->f_154, 0);
						vVar0 = { func_50(uParam2->f_4, vParam5, ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(uParam2->f_5, ENTITY::GET_ENTITY_COORDS(*uParam3, true, false))) };
						ENTITY::ATTACH_ENTITY_TO_ENTITY(*uParam3, uParam2->f_5, iVar6, vVar0, vParam8, 0, 0, 0, 0, 2, 1, 0, 0);
					}
					else
					{
						ENTITY::SET_ENTITY_ROTATION(*uParam3, vParam8, 2, true);
					}
					*uParam0 = 2;
					Jump @359; //curOff = 348
					if (bParam14)
					{
					}
					Jump @502; //curOff = 359
					if (!bParam13)
					{
						if (iParam15 != 0)
						{
							iVar7 = 3;
						}
						else
						{
							iVar7 = 4;
						}
						if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
						{
							*uParam0 = iVar7;
						}
						else if (!ENTITY::DOES_ENTITY_EXIST(*uParam3))
						{
							*uParam0 = iVar7;
						}
						else if (!TASK::_0x841475AC96E794D1(uParam2->f_6))
						{
							*uParam0 = iVar7;
						}
						else if (TASK::_0x8360C47380B6F351(uParam2->f_6, *uParam3, sParam4, 1))
						{
							*uParam0 = iVar7;
						}
						else if (bParam14)
						{
							*uParam0 = iVar7;
						}
					}
					Jump @502; //curOff = 474
					if (iParam15 != 0)
					{
						TASK::_0xA6A76D666A281F2D(*uParam3, iParam15);
						*uParam0 = 4;
					}
				}
			}
		}

void func_24(var uParam0, var uParam1, var uParam2, vector3 vParam3, vector3 vParam6)
{
	int iVar0;
	int iVar1;

	switch (*uParam0)
	{
		case 0:
			if (*uParam1 != 0)
			{
				STREAMING::REQUEST_MODEL(*uParam1, false);
				*uParam0 = 1;
			}
			else
			{
				*uParam0 = 4;
			}
			break;
		case 1:
			if (STREAMING::HAS_MODEL_LOADED(*uParam1))
			{
				if (*uParam1 == -180727039)
				{
					vParam3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam3, vParam6.z, 0f, 0f, 0.08f) };
				}
				iVar0 = OBJECT::CREATE_OBJECT(*uParam1, vParam3, true, true, false, false, false);
				if (ENTITY::DOES_ENTITY_EXIST(uParam2->f_5))
				{
					iVar1 = func_49(uParam2->f_4, uParam2->f_154, 0);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iVar0, uParam2->f_5, iVar1, 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 1, 0);
				}
				else
				{
					ENTITY::_0x0918E3565C20F03C(iVar0, vParam3, vParam6.z, 0, 1);
				}
				*uParam0 = 4;
			}
			break;
		case 4:
			break;
	}
}

void func_25(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_26(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "chest_open", true);
	}
	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
		func_52(func_51(-1482693337), 1);
	}
	else
	{
		func_52(func_51(822398076), 1);
	}
}

void func_27(int iParam0)
{
}

void func_28(int iParam0)
{
	if (iParam0->f_1 != Local_19)
	{
		return;
	}
	if (TASK::_0xB219612B5568E9EC(Local_19.f_5))
	{
		if (!func_53(Local_19.f_5))
		{
			func_26(Local_19.f_5);
		}
	}
}

void func_29(int iParam0)
{
}

void func_30(var uParam0)
{
	switch (uParam0->f_7)
	{
		case -556299774:
			uParam0->f_8 = 0;
			uParam0->f_154 = func_54(uParam0, -1);
			break;
		case -1844699338:
			uParam0->f_8 = 1;
			uParam0->f_154 = func_54(uParam0, -1);
			break;
		case 934878503:
		case 1753153202:
			if (ENTITY::GET_ENTITY_MODEL(uParam0->f_5) == 879616218)
			{
				uParam0->f_8 = 2;
			}
			else
			{
				uParam0->f_8 = 3;
			}
			uParam0->f_154 = func_54(uParam0, -1);
			break;
		case -1520256117:
			uParam0->f_8 = 5;
			uParam0->f_154 = func_54(uParam0, -1);
			break;
		case -1023377132:
		case -507789686:
			uParam0->f_8 = 6;
			uParam0->f_154 = func_54(uParam0, -1);
			break;
		case -580247852:
			uParam0->f_8 = 4;
			uParam0->f_154 = func_54(uParam0, -1);
			break;
		case 675799862:
			uParam0->f_8 = 9;
			uParam0->f_154 = func_54(uParam0, -1);
			break;
		case -529258369:
			uParam0->f_8 = 10;
			uParam0->f_154 = func_54(uParam0, -1);
			break;
		case 2050785088:
			uParam0->f_8 = 7;
			uParam0->f_154 = func_54(uParam0, -1);
			break;
		case 113259694:
			uParam0->f_8 = 8;
			uParam0->f_154 = func_54(uParam0, -1);
			break;
		case 1954699087:
			uParam0->f_8 = 16;
			uParam0->f_154 = func_54(uParam0, 0);
			uParam0->f_4 = 1;
			break;
		case -832608606:
			uParam0->f_8 = 16;
			uParam0->f_154 = func_54(uParam0, 1);
			uParam0->f_4 = 1;
			break;
		case -1198581396:
			uParam0->f_8 = 16;
			uParam0->f_154 = func_54(uParam0, 2);
			uParam0->f_4 = 1;
			break;
		case -2092256791:
			uParam0->f_8 = 16;
			uParam0->f_154 = func_54(uParam0, 3);
			uParam0->f_4 = 1;
			break;
		case -1350870117:
		case -643955342:
		case 425046062:
		case 2113302033:
			uParam0->f_8 = 16;
			uParam0->f_154 = func_54(uParam0, 0);
			uParam0->f_4 = 1;
			break;
		case 1021152268:
			uParam0->f_8 = 17;
			uParam0->f_154 = func_54(uParam0, 4);
			uParam0->f_4 = 1;
			break;
		case -658509002:
			uParam0->f_8 = 17;
			uParam0->f_154 = func_54(uParam0, 5);
			uParam0->f_4 = 1;
			break;
		case -519544825:
			uParam0->f_8 = 17;
			uParam0->f_154 = func_54(uParam0, 6);
			uParam0->f_4 = 1;
			break;
		case -1893910834:
			uParam0->f_8 = 17;
			uParam0->f_154 = func_54(uParam0, 7);
			uParam0->f_4 = 1;
			break;
		case -1384407567:
		case -1363262734:
		case -733157857:
		case 1956439393:
			uParam0->f_8 = 17;
			uParam0->f_154 = func_54(uParam0, 4);
			uParam0->f_4 = 1;
			break;
		case -619465711:
		case -380363474:
		case -308358537:
		case -235670490:
		case -69078291:
		case 434713043:
		case 949215578:
		case 1182859337:
		case 1468081052:
		case 1472197696:
		case 1884809780:
		case 1941854706:
		case 1956408893:
		case 1992236106:
			uParam0->f_8 = 13;
			uParam0->f_154 = func_54(uParam0, -1);
			break;
		case -2132089563:
		case -1050797783:
		case -774297062:
		case -602690338:
		case -428719204:
		case -426093511:
		case -371405990:
		case -280896888:
		case 180206120:
		case 322611816:
		case 795742498:
		case 990258706:
		case 1532541314:
		case 1824320289:
			uParam0->f_8 = 14;
			uParam0->f_154 = func_54(uParam0, -1);
			break;
		case -1980304607:
		case -1146648371:
		case -1003656747:
		case -749434233:
		case -99422178:
		case 167092195:
		case 419796913:
		case 555612790:
		case 837758692:
		case 884959174:
		case 1186922655:
		case 1609966682:
		case 1921610057:
		case 1947556039:
			uParam0->f_8 = 15;
			uParam0->f_154 = func_54(uParam0, -1);
			break;
		case 1681044150:
			uParam0->f_8 = 11;
			uParam0->f_154 = func_54(uParam0, -1);
			break;
		case -419231450:
			uParam0->f_8 = 12;
			uParam0->f_154 = func_54(uParam0, -1);
			break;
		default:
			uParam0->f_8 = -1;
			break;
	}
}

void func_31(var uParam0)
{
	switch (uParam0->f_8)
	{
		case 0:
			uParam0->f_99[0] = 10;
			break;
		case 1:
			uParam0->f_99[0] = 10;
			break;
		case 2:
			uParam0->f_99[0] = 150;
			break;
		case 3:
			uParam0->f_99[0] = 105;
			uParam0->f_99[1] = 150;
			break;
		case 4:
			uParam0->f_99[0] = 105;
			uParam0->f_99[1] = 150;
			break;
		case 5:
			uParam0->f_99[0] = 105;
			uParam0->f_99[1] = 150;
			break;
		case 6:
			uParam0->f_99[0] = 10;
			break;
		case 7:
			uParam0->f_99[0] = 10;
			break;
		case 8:
			uParam0->f_99[0] = 10;
			break;
		case 9:
			uParam0->f_99[0] = 80;
			uParam0->f_99[1] = 105;
			uParam0->f_99[2] = 150;
			break;
		case 10:
			uParam0->f_99[0] = 10;
			break;
		case 11:
			uParam0->f_99[0] = 10;
			break;
		case 12:
			uParam0->f_99[0] = 10;
			break;
		case 13:
			uParam0->f_99[0] = 5;
			break;
		case 14:
			uParam0->f_99[0] = 5;
			break;
		case 15:
			uParam0->f_99[0] = 5;
			break;
		case 16:
			break;
		case 17:
			break;
	}
}

void func_32(var uParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	var uVar13[10];

	iVar10 = 1;
	iVar11 = 1;
	iVar12 = 1;
	switch (uParam0->f_8)
	{
		case 4:
			fVar2 = 0.07f;
			fVar3 = 1.13f;
			fVar4 = 0.05f;
			fVar5 = 0.4f;
			fVar9 = 1.6f;
			break;
		case 9:
			fVar2 = 0.07f;
			fVar3 = 1.13f;
			fVar4 = 0.05f;
			fVar5 = 0.4f;
			fVar9 = 1.3f;
			break;
		case 10:
			fVar2 = 0.07f;
			fVar3 = 1.13f;
			fVar4 = 0.05f;
			fVar5 = 0.25f;
			fVar9 = 0.45f;
			break;
		case 3:
			fVar2 = 0.07f;
			fVar3 = 0.63f;
			fVar4 = 0.05f;
			fVar5 = 0.4f;
			fVar9 = 1.6f;
			break;
		case 2:
			fVar2 = 0.14f;
			fVar3 = 0.56f;
			fVar4 = 0.05f;
			fVar5 = 0.16f;
			fVar9 = 1.6f;
			break;
		case 5:
			func_55(uParam0);
			return;
		case 6:
			func_56(uParam0);
			return;
		case 16:
			func_57(uParam0);
			return;
		case 17:
			func_58(uParam0);
			return;
		case 0:
			func_59(uParam0);
			return;
		case 1:
			fVar2 = -0.55f;
			fVar3 = 0.55f;
			fVar4 = -0.2f;
			fVar5 = 0.2f;
			break;
		case 7:
			fVar2 = 0.12f;
			fVar3 = 0.21f;
			fVar4 = 0.05f;
			fVar5 = 0.25f;
			fVar9 = 0.45f;
			break;
		case 8:
			fVar2 = (-1f * 0.21f);
			fVar3 = (-1f * 0.12f);
			fVar4 = 0.05f;
			fVar5 = 0.25f;
			fVar9 = 0.45f;
			break;
		case 11:
			fVar2 = 0.12f;
			fVar3 = 0.48f;
			fVar4 = 0.05f;
			fVar5 = 0.25f;
			fVar9 = 0.45f;
			break;
		case 12:
			fVar2 = (-1f * 0.48f);
			fVar3 = (-1f * 0.12f);
			fVar4 = 0.05f;
			fVar5 = 0.25f;
			fVar9 = 0.45f;
			break;
		case 13:
			func_60(uParam0);
			return;
		case 14:
			func_61(uParam0);
			return;
		case 15:
			func_62(uParam0);
			return;
	}
	fVar7 = fVar4;
	fVar5 = fVar5;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (&uParam0->f_99[iVar0] != -1)
		{
			iVar1++;
		}
		iVar0++;
	}
	func_63(&uVar13, 10, 1);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		fVar6 = func_64(fVar6, fVar2, fVar3, 0.15f, 0.25f, &iVar11);
		if (iVar10 != iVar11)
		{
			fVar7 = func_64(fVar7, fVar4, fVar5, 0.13f, 0.13f, &iVar12);
			iVar10 = iVar11;
		}
		if (iVar1 > 0)
		{
			fVar8 = ((BUILTIN::TO_FLOAT(&(uParam0->f_99[MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1)])) / 100f) - fVar9);
		}
		*(uParam0->f_37[&uVar13[iVar0] /*3*/]) = { fVar6, fVar7, fVar8 };
		iVar0++;
	}
}

int func_33()
{
	return Global_1572887->f_12;
}

int func_34(vector3 vParam0)
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

int func_35(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_65(((*Global_1835011)[iParam0 /*74*/])->f_1);
}

int func_36(int iParam0, vector3 vParam1, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;

	STREAMING::REQUEST_MODEL(iParam0, false);
	if (!STREAMING::HAS_MODEL_LOADED(iParam0))
	{
		return 0;
	}
	if (!TASK::_0x841475AC96E794D1(iParam4) && iParam5 != 0)
	{
		iParam4 = TASK::_0xF533D68FF970D190(vParam1, iParam5, 1f, 0, 0);
	}
	if (TASK::_0x841475AC96E794D1(iParam4))
	{
		if (TASK::_0xEA31F199A73801D3(iParam4))
		{
			iVar1 = TASK::_0x295514F198EFD0CA(iParam4, "CONTAINER");
			if (ENTITY::IS_ENTITY_AN_OBJECT(iVar1))
			{
				iVar0 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar1);
			}
		}
	}
	else
	{
		iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(vParam1, 0.5f, iParam0, false, false, true);
	}
	return iVar0;
}

void func_37(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "scripted_loot_only", true);
		ENTITY::_0x8C03CD6B5E0E85E8(iParam0, -1143637011);
	}
}

int func_38()
{
	return -180727039;
}

int func_39()
{
	int iVar0;
	int iVar1;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	iVar1 = 0;
	switch (iVar0)
	{
		case 0:
			iVar1 = -1370447667;
			break;
		case 1:
			iVar1 = -608044113;
			break;
		case 2:
			iVar1 = -2145565593;
			break;
		case 3:
			iVar1 = 775037074;
			break;
	}
	return 0;
}

int func_40()
{
	int iVar0;

	iVar0 = 0;
	if (func_35(0))
	{
		iVar0 = -1090886849;
	}
	return iVar0;
}

int func_41(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	if (func_35(3) && ENTITY::GET_ENTITY_MODEL(uParam0->f_5) == 114039925)
	{
		iVar0 = 852615066;
	}
	return iVar0;
}

bool func_42(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_43(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_empty"))
	{
		return 1;
	}
	return 0;
}

int func_44(int iParam0)
{
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && DECORATOR::DECOR_EXIST_ON(iParam0, "scripted_loot_only")) && DECORATOR::DECOR_GET_BOOL(iParam0, "scripted_loot_only"))
	{
		return 1;
	}
	return 0;
}

void func_45(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	vector3 vVar5;
	int iVar8;
	var uVar9;
	var uVar10;
	var uVar11;

	while (!func_16(uParam0->f_5) && iVar8 < iParam2)
	{
		iVar0 = func_66(uParam0->f_5, &uVar9, &uVar1, &uVar10, &uVar11, &vVar2, &vVar5);
		if (func_67(iVar0, 0))
		{
			func_68(uParam0, uVar1, vVar2, vVar5, iVar0, uVar9, uVar10, uVar11);
			iParam1->f_1[iVar8] = iVar0;
			iVar8++;
		}
	}
}

void func_46(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_69() - fParam1);
	func_70(uParam0, 1);
	func_71(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_47(var uParam0)
{
	return func_72(*uParam0, 1);
}

float func_48(var uParam0)
{
	if (!func_47(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_73(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_69() - uParam0->f_1);
}

int func_49(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

Vector3 func_50(bool bParam0, vector3 vParam1, vector3 vParam4)
{
	if (bParam0)
	{
		return vParam1;
	}
	return vParam4;
}

struct<2> func_51(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

void func_52(var uParam0, var uParam1, int iParam2)
{
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

int func_53(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return DECORATOR::DECOR_EXIST_ON(iParam0, "chest_open");
	}
	return 0;
}

int func_54(var uParam0, int iParam1)
{
	int iVar0;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(func_74(uParam0, iParam1)))
	{
		iVar0 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam0->f_5, func_74(uParam0, iParam1));
		return iVar0;
	}
	return 0;
}

void func_55(var uParam0)
{
	vector3 vVar0[10];
	var uVar31[10];
	int iVar42;

	*(vVar0[0 /*3*/]) = { 0.05f, 0.07f, 0.2f };
	*(vVar0[1 /*3*/]) = { 0.17f, 0.21f, 0.2f };
	*(vVar0[2 /*3*/]) = { 0.28f, 0.07f, 0.2f };
	*(vVar0[3 /*3*/]) = { 0.39f, 0.23f, 0.2f };
	*(vVar0[4 /*3*/]) = { 0.41f, 0.08f, 0.2f };
	*(vVar0[5 /*3*/]) = { 0.08f, 0.08f, -0.25f };
	*(vVar0[6 /*3*/]) = { 0.22f, 0.19f, -0.25f };
	*(vVar0[7 /*3*/]) = { 0.35f, 0.09f, -0.25f };
	*(vVar0[8 /*3*/]) = { 0.49f, 0.19f, -0.25f };
	*(vVar0[9 /*3*/]) = { 0.63f, 0.08f, -0.25f };
	func_63(&uVar31, 10, 1);
	iVar42 = 0;
	while (iVar42 < 9)
	{
		*(uParam0->f_37[iVar42 /*3*/]) = { *(vVar0[&uVar31[iVar42] /*3*/]) };
		iVar42++;
	}
}

void func_56(var uParam0)
{
	vector3 vVar0[10];
	var uVar31[10];
	int iVar42;

	*(vVar0[0 /*3*/]) = { 0.08f, 0.08f, 0.15f };
	*(vVar0[1 /*3*/]) = { 0.22f, 0.19f, 0.15f };
	*(vVar0[2 /*3*/]) = { 0.35f, 0.09f, 0.15f };
	*(vVar0[3 /*3*/]) = { 0.49f, 0.19f, 0.15f };
	*(vVar0[4 /*3*/]) = { 0.63f, 0.08f, 0.15f };
	*(vVar0[5 /*3*/]) = { 0.08f, 0.08f, -0.35f };
	*(vVar0[6 /*3*/]) = { 0.22f, 0.19f, -0.35f };
	*(vVar0[7 /*3*/]) = { 0.35f, 0.09f, -0.35f };
	*(vVar0[8 /*3*/]) = { 0.49f, 0.19f, -0.35f };
	*(vVar0[9 /*3*/]) = { 0.63f, 0.08f, -0.35f };
	func_63(&uVar31, 10, 1);
	iVar42 = 0;
	while (iVar42 < 9)
	{
		*(uParam0->f_37[iVar42 /*3*/]) = { *(vVar0[&uVar31[iVar42] /*3*/]) };
		iVar42++;
	}
}

void func_57(var uParam0)
{
	vector3 vVar0[10];
	var uVar31[10];
	int iVar42;

	*(vVar0[0 /*3*/]) = { 0.15f, 0.07f, -0.06f };
	*(vVar0[1 /*3*/]) = { 0.07f, 0.12f, -0.06f };
	*(vVar0[2 /*3*/]) = { 0f, 0.08f, -0.06f };
	*(vVar0[3 /*3*/]) = { -0.09f, 0.13f, -0.06f };
	*(vVar0[4 /*3*/]) = { -0.15f, 0.08f, -0.06f };
	*(vVar0[5 /*3*/]) = { -0.16f, 0.24f, -0.06f };
	*(vVar0[6 /*3*/]) = { -0.1f, 0.29f, -0.06f };
	*(vVar0[7 /*3*/]) = { 0f, 0.23f, -0.06f };
	*(vVar0[8 /*3*/]) = { 0.08f, 0.29f, -0.06f };
	*(vVar0[9 /*3*/]) = { 0.14f, 0.21f, -0.06f };
	func_63(&uVar31, 10, 1);
	iVar42 = 0;
	while (iVar42 < 9)
	{
		*(uParam0->f_37[iVar42 /*3*/]) = { *(vVar0[&uVar31[iVar42] /*3*/]) };
		iVar42++;
	}
}

void func_58(var uParam0)
{
	vector3 vVar0[10];
	var uVar31[10];
	int iVar42;

	*(vVar0[0 /*3*/]) = { 0.04f, 0.17f, -0.04f };
	*(vVar0[1 /*3*/]) = { -0.13f, 0.22f, -0.04f };
	*(vVar0[2 /*3*/]) = { -0.26f, 0.13f, -0.04f };
	*(vVar0[3 /*3*/]) = { -0.4f, 0.23f, -0.04f };
	*(vVar0[4 /*3*/]) = { -0.57f, 0.18f, -0.04f };
	*(vVar0[5 /*3*/]) = { -0.56f, 0.33f, -0.04f };
	*(vVar0[6 /*3*/]) = { -0.41f, 0.37f, -0.04f };
	*(vVar0[7 /*3*/]) = { -0.23f, 0.36f, -0.04f };
	*(vVar0[8 /*3*/]) = { -0.05f, 0.38f, -0.04f };
	*(vVar0[9 /*3*/]) = { 0.08f, 0.34f, -0.04f };
	func_63(&uVar31, 10, 1);
	iVar42 = 0;
	while (iVar42 < 9)
	{
		*(uParam0->f_37[iVar42 /*3*/]) = { *(vVar0[&uVar31[iVar42] /*3*/]) };
		iVar42++;
	}
}

void func_59(var uParam0)
{
	vector3 vVar0[10];
	var uVar31[10];
	int iVar42;

	*(vVar0[0 /*3*/]) = { -0.34f, -0.11f, 0.11f };
	*(vVar0[1 /*3*/]) = { -0.32f, -0.02f, 0.11f };
	*(vVar0[2 /*3*/]) = { -0.19f, -0.14f, 0.11f };
	*(vVar0[3 /*3*/]) = { -0.1f, -0.01f, 0.11f };
	*(vVar0[4 /*3*/]) = { -0.32f, 0.17f, 0.11f };
	*(vVar0[5 /*3*/]) = { -0.15f, 0.18f, 0.11f };
	*(vVar0[6 /*3*/]) = { 0.06f, 0.13f, 0.11f };
	*(vVar0[7 /*3*/]) = { 0.13f, 0.03f, 0.11f };
	*(vVar0[8 /*3*/]) = { 0.27f, 0.12f, 0.11f };
	*(vVar0[9 /*3*/]) = { 0.28f, -0.03f, 0.11f };
	func_63(&uVar31, 10, 1);
	iVar42 = 0;
	while (iVar42 < 10)
	{
		*(uParam0->f_68[iVar42 /*3*/]) = { 0f, 0f, 90f };
		*(uParam0->f_37[iVar42 /*3*/]) = { *(vVar0[&uVar31[iVar42] /*3*/]) };
		iVar42++;
	}
}

void func_60(var uParam0)
{
	vector3 vVar0[10];
	var uVar31[10];
	int iVar42;

	*(vVar0[0 /*3*/]) = { 0f, 0.07f, 0.02f };
	*(vVar0[1 /*3*/]) = { 0f, -0.07f, 0.02f };
	*(vVar0[2 /*3*/]) = { -0.16f, -0.07f, 0.02f };
	*(vVar0[3 /*3*/]) = { 0.16f, -0.07f, 0.02f };
	*(vVar0[4 /*3*/]) = { -0.16f, 0.07f, 0.02f };
	*(vVar0[5 /*3*/]) = { 0.16f, 0.07f, 0.02f };
	uParam0->f_2 = 6;
	func_63(&uVar31, uParam0->f_2, 1);
	iVar42 = 0;
	while (iVar42 < uParam0->f_2)
	{
		*(uParam0->f_68[iVar42 /*3*/]) = { 0f, 0f, 90f };
		*(uParam0->f_37[iVar42 /*3*/]) = { *(vVar0[&uVar31[iVar42] /*3*/]) };
		iVar42++;
	}
}

void func_61(var uParam0)
{
	vector3 vVar0[10];
	var uVar31[10];
	int iVar42;

	*(vVar0[0 /*3*/]) = { -0.11f, 0.07f, 0.02f };
	*(vVar0[1 /*3*/]) = { 0.11f, 0.07f, 0.02f };
	*(vVar0[2 /*3*/]) = { -0.11f, -0.07f, 0.02f };
	*(vVar0[3 /*3*/]) = { 0.11f, -0.07f, 0.02f };
	*(vVar0[4 /*3*/]) = { 0f, 0f, 0.02f };
	uParam0->f_2 = 5;
	func_63(&uVar31, uParam0->f_2, 1);
	iVar42 = 0;
	while (iVar42 < uParam0->f_2)
	{
		*(uParam0->f_68[iVar42 /*3*/]) = { 0f, 0f, 90f };
		*(uParam0->f_37[iVar42 /*3*/]) = { *(vVar0[&uVar31[iVar42] /*3*/]) };
		iVar42++;
	}
}

void func_62(var uParam0)
{
	vector3 vVar0[10];
	var uVar31[10];
	float fVar42;
	int iVar43;

	fVar42 = 0.005f;
	iVar43 = 0;
	while (iVar43 < 9)
	{
		*(vVar0[iVar43 /*3*/]) = { 0f, 0f, fVar42 };
		fVar42 = (fVar42 + 0.02f);
		*(uParam0->f_68[iVar43 /*3*/]) = { 0f, 0f, 90f };
		iVar43++;
	}
	uParam0->f_2 = 2;
	func_63(&uVar31, uParam0->f_2, 1);
	iVar43 = 0;
	while (iVar43 < uParam0->f_2)
	{
		*(uParam0->f_37[iVar43 /*3*/]) = { *(vVar0[&uVar31[iVar43] /*3*/]) };
		iVar43++;
	}
}

void func_63(var uParam0, int iParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	if (bParam2)
	{
		iVar2 = 0;
		while (iVar2 <= (iParam1 - 1))
		{
			(*uParam0)[iVar2] = iVar2;
			iVar2++;
		}
	}
	iVar2 = (iParam1 - 1);
	iVar2 = (iParam1 - 1);
	while (iVar2 >= 0)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar2);
		uVar0 = uParam0[iVar2];
		(*uParam0)[iVar2] = uParam0[iVar1];
		(*uParam0)[iVar1] = uVar0;
		iVar2 = (iVar2 + -1);
	}
}

float func_64(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5)
{
	float fVar0;
	float fVar1;

	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = func_76(func_75(), fParam3, fParam4);
	if (*iParam5)
	{
		if ((fVar0 + fParam0) > fParam2)
		{
			*iParam5 = 0;
			fVar1 = (fParam2 - MISC::ABSF(((fVar0 + fParam0) - fParam2)));
		}
		else
		{
			fVar1 = (fVar0 + fParam0);
		}
	}
	else if ((fParam0 - fVar0) < fParam1)
	{
		*iParam5 = 1;
		fVar1 = (fParam1 + MISC::ABSF(((fParam0 - fVar0) - fParam1)));
	}
	else
	{
		fVar1 = (fParam0 - fVar0);
	}
	return fVar1;
}

bool func_65(int iParam0)
{
	int iVar0;

	iVar0 = func_77(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_66(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	char cVar6[16];
	struct<2> Var8;
	struct<2> Var10;
	int iVar12;
	int iVar13;

	iVar0 = 0;
	iVar1 = 0;
	*uParam1 = 0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_empty"))
	{
		return 0;
	}
	*uParam1 = 1;
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_money"))
	{
		*uParam1 = DECORATOR::DECOR_GET_INT(iParam0, "loot_money");
		DECORATOR::DECOR_REMOVE(iParam0, "loot_money");
		*uParam2 = 0;
		return 2084597891;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "fLoot_money"))
	{
		*uParam3 = DECORATOR::DECOR_GET_FLOAT(iParam0, "fLoot_money");
		DECORATOR::DECOR_REMOVE(iParam0, "fLoot_money");
		*uParam2 = 0;
		return func_78(*uParam3);
	}
	StringCopy(&cVar6, "loot_ammo", 16);
	iVar5 = 1;
	while (iVar5 <= 3)
	{
		Var8 = { cVar6 };
		Var10 = { cVar6 };
		StringIntConCat(&Var8, iVar5, 16);
		StringIntConCat(&Var10, iVar5, 16);
		StringConCat(&Var8, "_type", 16);
		StringConCat(&Var10, "_amt", 16);
		if (DECORATOR::DECOR_EXIST_ON(iParam0, &Var8))
		{
			iVar1 = DECORATOR::DECOR_GET_INT(iParam0, &Var8);
			if (iVar1 != 0)
			{
				iVar0 = WEAPON::_0x5C2EA6C44F515F34(iVar1);
				DECORATOR::DECOR_REMOVE(iParam0, &Var8);
				if (DECORATOR::DECOR_EXIST_ON(iParam0, &Var10))
				{
					*uParam1 = DECORATOR::DECOR_GET_INT(iParam0, &Var10);
					DECORATOR::DECOR_REMOVE(iParam0, &Var10);
					*uParam2 = 2;
				}
				return iVar0;
			}
		}
		iVar5++;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_weapon"))
	{
		iVar1 = DECORATOR::DECOR_GET_INT(iParam0, "loot_weapon");
		if (iVar1 != 0)
		{
			DECORATOR::DECOR_REMOVE(iParam0, "loot_weapon");
			*uParam2 = 3;
			return func_79(iVar1);
		}
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type1"))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_amt1"))
		{
			*uParam1 = DECORATOR::DECOR_GET_INT(iParam0, "loot_item_amt1");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_amt1");
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_model1"))
		{
			*uParam4 = DECORATOR::DECOR_GET_INT(iParam0, "loot_item_model1");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_model1");
		}
		if ((DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_offset1x") && DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_offset1y")) && DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_offset1z"))
		{
			fVar2 = DECORATOR::DECOR_GET_FLOAT(iParam0, "loot_item_offset1x");
			fVar3 = DECORATOR::DECOR_GET_FLOAT(iParam0, "loot_item_offset1y");
			fVar4 = DECORATOR::DECOR_GET_FLOAT(iParam0, "loot_item_offset1z");
			*uParam5 = { fVar2, fVar3, fVar4 };
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_offset1x");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_offset1y");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_offset1z");
		}
		if ((DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_orient1x") && DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_orient1y")) && DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_orient1z"))
		{
			fVar2 = DECORATOR::DECOR_GET_FLOAT(iParam0, "loot_item_orient1x");
			fVar3 = DECORATOR::DECOR_GET_FLOAT(iParam0, "loot_item_orient1y");
			fVar4 = DECORATOR::DECOR_GET_FLOAT(iParam0, "loot_item_orient1z");
			*uParam6 = { fVar2, fVar3, fVar4 };
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_orient1x");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_orient1y");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_orient1z");
		}
		iVar12 = DECORATOR::DECOR_GET_INT(iParam0, "loot_item_type1");
		DECORATOR::DECOR_REMOVE(iParam0, "loot_item_type1");
		*uParam2 = 1;
		return iVar12;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type2"))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_amt2"))
		{
			*uParam1 = DECORATOR::DECOR_GET_INT(iParam0, "loot_item_amt2");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_amt2");
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_model2"))
		{
			*uParam4 = DECORATOR::DECOR_GET_INT(iParam0, "loot_item_model2");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_model2");
		}
		if ((DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_offset2x") && DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_offset2y")) && DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_offset2z"))
		{
			fVar2 = DECORATOR::DECOR_GET_FLOAT(iParam0, "loot_item_offset2x");
			fVar3 = DECORATOR::DECOR_GET_FLOAT(iParam0, "loot_item_offset2y");
			fVar4 = DECORATOR::DECOR_GET_FLOAT(iParam0, "loot_item_offset2z");
			*uParam5 = { fVar2, fVar3, fVar4 };
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_offset2x");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_offset2y");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_offset2z");
		}
		if ((DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_orient2x") && DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_orient2y")) && DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_orient2z"))
		{
			fVar2 = DECORATOR::DECOR_GET_FLOAT(iParam0, "loot_item_orient2x");
			fVar3 = DECORATOR::DECOR_GET_FLOAT(iParam0, "loot_item_orient2y");
			fVar4 = DECORATOR::DECOR_GET_FLOAT(iParam0, "loot_item_orient2z");
			*uParam6 = { fVar2, fVar3, fVar4 };
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_orient2x");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_orient2y");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_orient2z");
		}
		iVar13 = DECORATOR::DECOR_GET_INT(iParam0, "loot_item_type2");
		DECORATOR::DECOR_REMOVE(iParam0, "loot_item_type2");
		*uParam2 = 1;
		return iVar13;
	}
	return 0;
}

bool func_67(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

void func_68(var uParam0, var uParam1, vector3 vParam2, vector3 vParam5, int iParam8, var uParam9, var uParam10, var uParam11)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&uParam0->f_103[iVar0 /*5*/] == -1)
		{
			uParam0->f_103[iVar0 /*5*/] = uParam1;
			(uParam0->f_103[iVar0 /*5*/])->f_3 = iParam8;
			(uParam0->f_103[iVar0 /*5*/])->f_1 = uParam9;
			(uParam0->f_103[iVar0 /*5*/])->f_2 = uParam10;
			(uParam0->f_103[iVar0 /*5*/])->f_4 = uParam11;
			if (!func_80(vParam2))
			{
				*(uParam0->f_37[iVar0 /*3*/]) = { vParam2 };
			}
			if (!func_80(vParam5))
			{
				*(uParam0->f_68[iVar0 /*3*/]) = { vParam5 };
			}
		}
		else
		{
			iVar0++;
		}
	}
}

float func_69()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_70(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_71(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_72(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_73(var uParam0)
{
	return func_72(*uParam0, 2);
}

char* func_74(var uParam0, int iParam1)
{
	switch (uParam0->f_8)
	{
		case -1:
			return "";
		case 0:
			return "Root_p_CHEST_MED";
		case 1:
			return "Root_p_CHEST_LRG";
		case 2:
		case 3:
			return "p_CUPBOARDS_NARROW_TalL";
		case 4:
			return "p_CUPBOARDS_WIDE_TalL";
		case 5:
			return "p_CUPBOARDS_NARROW_MedL";
		case 6:
			return "p_CUPBOARDS_NARROW_LowL";
		case 7:
			return "p_CUPBOARDS_NARROW_LowL";
		case 8:
			return "p_CUPBOARDS_NARROW_LowR";
		case 9:
			return "p_CUPBOARDS_WIDE_MedL";
		case 10:
			return "p_CUPBOARDS_WIDE_LowL";
		case 11:
			return "p_CUPBOARDS_WIDE_LowL";
		case 12:
			return "p_CUPBOARDS_WIDE_LowR";
		case 13:
			return "Root_p_LOCKBOX_LRG";
		case 14:
			return "Root_p_LOCKBOX_MED";
		case 15:
			return "Root_p_LOCKBOX_SML";
		case 16:
			return func_81(iParam1);
		case 17:
			return func_81(iParam1);
	}
	return "";
}

int func_75()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
	{
		return 1;
	}
	return 0;
}

var func_76(bool bParam0, var uParam1, var uParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return uParam2;
}

int func_77(int iParam0)
{
	if (!func_82(iParam0))
	{
		return -1;
	}
	return func_83(iParam0);
}

int func_78(float fParam0)
{
	int iVar0;
	float fVar1;

	fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
	fVar1 = (fVar1 + fParam0);
	if (fVar1 > 0.75f)
	{
		iVar0 = -2001202686; /* GXTEntry: "Bill Stack" */
	}
	else if (fVar1 > 0.5f)
	{
		iVar0 = -343824903; /* GXTEntry: "Money Clip" */
	}
	else if (fVar1 > 0.25f)
	{
		iVar0 = 1576210101; /* GXTEntry: "Coin Purse" */
	}
	else
	{
		iVar0 = 1111063991; /* GXTEntry: "Coin" */
	}
	return iVar0;
}

int func_79(int iParam0)
{
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return iParam0;
	}
	return 0;
}

int func_80(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

char* func_81(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "p_DRAWER_SGL_Drawer1";
		case 1:
			return "p_DRAWER_SGL_Drawer2";
		case 2:
			return "p_DRAWER_SGL_Drawer3";
		case 3:
			return "p_DRAWER_SGL_Drawer4";
		case 4:
			return "p_DRAWER_DBL_Drawer1_NUB";
		case 5:
			return "p_DRAWER_DBL_Drawer2_NUB";
		case 6:
			return "p_DRAWER_DBL_Drawer3_NUB";
		case 7:
			return "p_DRAWER_DBL_Drawer4_NUB";
	}
	return "";
}

bool func_82(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_83(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_84(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

int func_84(int iParam0)
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

