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
	struct<2> Local_13 = { 0, 0 } ;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_21 = ScriptParam_0;
	iLocal_20 = ScriptParam_0.f_1;
	if (func_1() == -1)
	{
	}
	else
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
		if (func_3(func_2(0)) != 7)
		{
		}
		else
		{
			func_4(&Local_13);
		}
	}
	if (func_1() == -1)
	{
		if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		{
			func_4(&Local_13);
		}
	}
	if (!TASK::_0x841475AC96E794D1(iLocal_20))
	{
		func_4(&Local_13);
	}
	Local_13.f_1 = { TASK::_0xA8452DD321607029(iLocal_20, 1) };
	if (func_5(&Local_13))
	{
		TASK::_0xEEE4829304F93EEE(iLocal_20, 0);
		func_4(&Local_13);
	}
	else
	{
		TASK::_0xEEE4829304F93EEE(iLocal_20, 1);
	}
	while (func_6())
	{
		if (func_7())
		{
			func_4(&Local_13);
		}
		if (func_8(&Local_13))
		{
			func_4(&Local_13);
		}
		BUILTIN::WAIT(0);
	}
	func_4(&Local_13);
}

int func_1()
{
	return Global_1572887->f_13;
}

struct<2> func_2(int iParam0)
{
	return *(Global_1900718->f_1[iParam0 /*2*/]);
}

int func_3(var uParam0, var uParam1)
{
	return uParam0;
}

void func_4(var uParam0)
{
	if (MAP::DOES_BLIP_EXIST(uParam0->f_5))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_5));
	}
	SCRIPTS::_0xE7282390542F570D(iLocal_21);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_5(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_9(Local_13.f_1, ((*Global_1914742)[iVar0 /*4*/])->f_1, 1056964608 /* Float: 0.5f */, 1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_6()
{
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		func_4(&Local_13);
		return 0;
	}
	return 1;
}

int func_7()
{
	if (Global_1572887->f_13 == -1)
	{
		if (PED::IS_PED_INJURED(Global_35))
		{
			return 1;
		}
	}
	else if (Global_1273882->f_12)
	{
		return 1;
	}
	return 0;
}

int func_8(var uParam0)
{
	switch (func_10(uParam0))
	{
		case 0:
			iLocal_22 = func_11();
			func_12(uParam0, 1);
			break;
		case 1:
			if (func_13(uParam0))
			{
				if (MAP::DOES_BLIP_EXIST(uParam0->f_5))
				{
					MAP::REMOVE_BLIP(&(uParam0->f_5));
				}
				func_14(uParam0->f_1);
				return 1;
			}
			else if (MAP::DOES_BLIP_EXIST(uParam0->f_5))
			{
				func_15(uParam0);
			}
			else
			{
				uParam0->f_5 = MAP::_0x554D9D53F696D002(1425226969, uParam0->f_1);
				func_15(uParam0);
			}
			break;
	}
	return 0;
}

int func_9(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (MISC::ABSF((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (MISC::ABSF((vParam0.y - vParam3.y)) <= fParam6)
		{
			if (!bParam7 || MISC::ABSF((vParam0.z - vParam3.z)) <= fParam6)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_10(var uParam0)
{
	return *uParam0;
}

int func_11()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (func_17(func_16(iVar0), 1))
		{
			iVar1 = (iVar1 + func_18(func_16(iVar0), 0, 0, 0));
		}
		iVar0++;
	}
	return iVar1;
}

void func_12(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_13(var uParam0)
{
	if (1.414214f >= BUILTIN::VDIST(uParam0->f_1, Global_36) && iLocal_22 < func_11())
	{
		return 1;
	}
	return 0;
}

void func_14(vector3 vParam0)
{
	Global_1914955 = (&Global_1914955 % 10);
	((*Global_1914742)[&Global_1914955 /*4*/])->f_1 = { vParam0 };
	Global_1914955 = &Global_1914955 + 1;
}

void func_15(var uParam0)
{
	MAP::_0x662D364ABF16DE2F(uParam0->f_5, 287065609);
}

int func_16(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1602657245 /* GXTEntry: "Bay Bolete" */;
		case 1:
			return -1991037110 /* GXTEntry: "Blackberry" */;
		case 2:
			return -1066874997 /* GXTEntry: "Chanterelle" */;
		case 3:
			return 2064962445 /* GXTEntry: "Creeping Thyme" */;
		case 4:
			return -1664530975 /* GXTEntry: "Evergreen Huckleberry" */;
		case 5:
			return 546981776 /* GXTEntry: "Oregano" */;
		case 6:
			return -2013384490 /* GXTEntry: "Parasol Mushroom" */;
		case 7:
			return -746674788 /* GXTEntry: "Ram\'s Head" */;
		case 8:
			return 599861917 /* GXTEntry: "Raspberry" */;
		case 9:
			return -435006002 /* GXTEntry: "Wild Mint" */;
		case 10:
			return -624139784 /* GXTEntry: "Wintergreen Berry" */;
		default:
			break;
	}
	return 0;
}

bool func_17(bool bParam0, int iParam1)
{
	int iVar0;

	if (!func_19(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_20(bParam0);
	switch (iVar0)
	{
		case joaat("weapon"):
			if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, 0))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case joaat("ammo"):
			if (!func_21(bParam0, 1))
			{
				return false;
			}
			break;
		case joaat("clothing"):
			if (func_22(bParam0))
			{
				return true;
			}
			break;
	}
	return func_18(bParam0, 0, 0, 0) >= iParam1;
}

int func_18(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_19(bParam0, 0))
	{
		return 0;
	}
	iVar1 = func_20(bParam0);
	if (iVar1 == joaat("ammo") || (bParam1 && iVar1 == joaat("weapon")))
	{
		bVar2 = func_23(bParam0, 1);
		if (bVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, bVar2);
		}
	}
	else if (iVar1 == joaat("weapon"))
	{
		return func_24(bParam0, 0);
	}
	if (func_25(bParam0, joaat("default")) != 0)
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_26(bParam2), bParam0, iParam3);
	}
	else
	{
		Var3 = { func_27(bParam0, bParam2) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_26(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

int func_19(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(bParam0, iParam1);
}

int func_20(bool bParam0)
{
	vector3 vVar0;

	if (!func_19(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_21(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_19(bParam0, 0))
	{
		return 0;
	}
	if (Global_1939168->f_6)
	{
		return 0;
	}
	iVar0 = func_23(bParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_28("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_29(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_30(Var4.f_4))
			{
			}
			else if (WEAPON::_0x5C2EA6C44F515F34(Var4.f_4) == iVar0)
			{
				func_31(iVar1);
				return 1;
			}
			iVar3++;
		}
		func_31(iVar1);
	}
	return 0;
}

bool func_22(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_19(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_32(bParam0);
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
	iVar1 = func_33(bParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_34(&(Global_17173.f_54.f_644.f_1353.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_35(bParam0);
	iVar2 = func_34(&(Global_17173.f_54.f_644.f_1353.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return bParam0 == &Global_17173.f_54.f_644.f_1353.f_5[iVar2 /*17*/];
}

int func_23(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_19(bParam0, 0))
	{
		return 0;
	}
	iVar0 = func_20(bParam0);
	if (iVar0 == joaat("weapon") && WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return WEAPON::_0x5C2EA6C44F515F34(bParam0);
	}
	else if (iVar0 == joaat("ammo") && WEAPON::_0x1F7977C9101F807F(bParam0))
	{
		return bParam0;
	}
	if (func_36(bParam0, 1399091007))
	{
		func_37(bParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_24(bool bParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	Var0 = { func_38(bParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_40(&Var0, func_39(0));
	}
	if (!func_41(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_31(iVar14);
	return uVar15;
}

int func_25(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(bParam0, iParam1);
}

int func_26(bool bParam0)
{
	if (func_1() == -1)
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

struct<4> func_27(bool bParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_42(bParam0, bParam1, 0) };
	return func_43(bParam0, Var0, Var0.f_4, bParam1);
}

int func_28(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_26(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_29(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_30(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("weapon_unarmed"));
}

int func_31(int iParam0)
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

int func_32(bool bParam0)
{
	struct<2> Var0;

	if (!func_19(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_33(bool bParam0)
{
	switch (bParam0)
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

int func_34(var uParam0, int iParam1)
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

int func_35(bool bParam0)
{
	int iVar0;

	iVar0 = func_32(bParam0);
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

int func_36(bool bParam0, int iParam1)
{
	if (!func_19(bParam0, 0))
	{
		return func_45(func_44(bParam0), iParam1);
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(bParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

void func_37(bool bParam0, var uParam1, var uParam2)
{
	*uParam1 = 0;
	*uParam2 = 0;
	switch (bParam0)
	{
		case 1234009870: /* GXTEntry: "Revolver Cartridges - Regular" */
			*uParam1 = 1802325493;
			*uParam2 = 1681219929; /* GXTEntry: "Revolver Cartridges - Regular" */
			break;
		case -1202134084: /* GXTEntry: "Opened Revolver Cartridges" */
			*uParam1 = -864693164;
			*uParam2 = 1681219929; /* GXTEntry: "Revolver Cartridges - Regular" */
			break;
		case 1297050066: /* GXTEntry: "Revolver Cartridges - Express" */
			*uParam1 = -603289736;
			*uParam2 = 1232099469; /* GXTEntry: "Revolver Cartridges - Express" */
			break;
		case -1780177928: /* GXTEntry: "Revolver Cartridges - High Velocity" */
			*uParam1 = -1803237008;
			*uParam2 = -2084181920; /* GXTEntry: "Revolver Cartridges - High Velocity" */
			break;
		case -1467836497: /* GXTEntry: "Pistol Cartridges - Regular" */
			*uParam1 = -1175521284;
			*uParam2 = joaat("ammo_pistol");
			break;
		case 1723805622: /* GXTEntry: "Opened Pistol Cartridges" */
			*uParam1 = -1559549888;
			*uParam2 = joaat("ammo_pistol");
			break;
		case -153287664: /* GXTEntry: "Pistol Cartridges - Express" */
			*uParam1 = -1650796693;
			*uParam2 = 836939099; /* GXTEntry: "Pistol Cartridges - Express" */
			break;
		case 1845082736: /* GXTEntry: "Pistol Cartridges - High Velocity" */
			*uParam1 = -1521597660;
			*uParam2 = -1411815376; /* GXTEntry: "Pistol Cartridges - High Velocity" */
			break;
		case 406755377: /* GXTEntry: "Rifle Cartridges - Regular" */
			*uParam1 = -1288829256;
			*uParam2 = joaat("ammo_rifle");
			break;
		case 1469029564: /* GXTEntry: "Opened Rifle Cartridges" */
			*uParam1 = 1393841762;
			*uParam2 = joaat("ammo_rifle");
			break;
		case 45760211: /* GXTEntry: "Rifle Cartridges - Express" */
			*uParam1 = -851229814;
			*uParam2 = 1654725195; /* GXTEntry: "Rifle Cartridges - Express" */
			break;
		case -276295943: /* GXTEntry: "Rifle Cartridges - High Velocity" */
			*uParam1 = 914704115;
			*uParam2 = 1858824185; /* GXTEntry: "Rifle Cartridges - High Velocity" */
			break;
		case -2029793397: /* GXTEntry: "Repeater Cartridges - Regular" */
			*uParam1 = -219896679;
			*uParam2 = -1330115686; /* GXTEntry: "Repeater Cartridges - Regular" */
			break;
		case 2120467495:
			*uParam1 = 516838334;
			*uParam2 = -1330115686; /* GXTEntry: "Repeater Cartridges - Regular" */
			break;
		case -2075613923: /* GXTEntry: "Repeater Cartridges - Express" */
			*uParam1 = -385817936;
			*uParam2 = -578347576; /* GXTEntry: "Repeater Cartridges - Express" */
			break;
		case 122656217: /* GXTEntry: "Repeater Cartridges - High Velocity" */
			*uParam1 = 1192843172;
			*uParam2 = 231465488; /* GXTEntry: "Repeater Cartridges - High Velocity" */
			break;
		case 2107187484: /* GXTEntry: "Shotgun Shells - Regular" */
			*uParam1 = 954871696;
			*uParam2 = joaat("ammo_shotgun");
			break;
		case -791844268: /* GXTEntry: "Opened Shotgun Shells" */
			*uParam1 = -1217273132;
			*uParam2 = joaat("ammo_shotgun");
			break;
		case 305770744: /* GXTEntry: "Shotgun - Slug" */
			*uParam1 = -2087227528;
			*uParam2 = 314966081; /* GXTEntry: "Shotgun - Slug" */
			break;
		case 550900979: /* GXTEntry: "Rifle Cartridges - Varmint" */
			*uParam1 = -618066518;
			*uParam2 = 2113196069;
			break;
	}
}

struct<14> func_38(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
	if (bParam0 != 0)
	{
		Var0 = bParam0;
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

struct<4> func_39(bool bParam0)
{
	int iVar0;

	iVar0 = func_26(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1270479->f_4)))
		{
			Global_1270479->f_4 = { func_43(923904168, func_46(bParam0), -740156546, bParam0) };
		}
		return Global_1270479->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1270479->f_16)))
		{
			Global_1270479->f_16 = { func_43(923904168, func_46(bParam0), -740156546, 0) };
		}
		return Global_1270479->f_16;
	}
	return func_43(923904168, func_46(bParam0), -740156546, 0);
}

void func_40(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_41(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_26(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

struct<5> func_42(bool bParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_46(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_20(bParam0);
	switch (iVar5)
	{
		case joaat("clothing"):
			Var0 = { func_43(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, 889965687);
			break;
		case joaat("weapon"):
			Var0 = { func_39(bParam1) };
			if (iParam2 && func_47(bParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_48(bParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_48(bParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_49(bParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_50(bParam1) };
			switch (func_32(bParam0))
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
			if (func_51(bParam0, -1823706425))
			{
				Var0 = { func_43(-1838434463 /* GXTEntry: "Camp" */, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, -1838434463);
			}
			else if (func_51(bParam0, -1483207246))
			{
				Var0 = { func_43(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, 889965687);
			}
			else if (INVENTORY::_0x780C5B9AE2819807(bParam0, -1911121386))
			{
				Var0 = { func_43(-1838434463 /* GXTEntry: "Camp" */, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(bParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_51(bParam0, -1653629781))
			{
				Var0 = { func_43(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, 1384535894);
			}
			break;
		default:
			if (INVENTORY::_0x780C5B9AE2819807(bParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(bParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(bParam0, -833319691))
			{
				Var28.f_9 = -1591664384;
				if (!func_52(Var0, &Var28, bParam1, 0, -1))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var28.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else if (INVENTORY::_0x780C5B9AE2819807(bParam0, -718417579))
			{
				Var0.f_4 = -718417579;
			}
			else if (func_51(bParam0, -1653629781))
			{
				Var0 = { func_43(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, 1384535894);
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("character"));
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

struct<4> func_43(bool bParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_19(bParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_26(bParam6), &uParam1, bParam0, iParam5, &Var0);
	return Var0;
}

bool func_44(bool bParam0)
{
	return bParam0;
}

int func_45(int iParam0, int iParam1)
{
	if (!func_53(iParam0, 2))
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

struct<4> func_46(bool bParam0)
{
	int iVar0;

	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_26(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1270479))
			{
				*Global_1270479 = { func_43(joaat("character"), func_54(), -1591664384, bParam0) };
			}
			return *Global_1270479;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1270479->f_12)))
			{
				Global_1270479->f_12 = { func_43(joaat("character"), func_54(), -1591664384, 0) };
			}
			return Global_1270479->f_12;
		}
	}
	return func_43(joaat("character"), func_54(), -1591664384, bParam0);
}

int func_47(bool bParam0, bool bParam1)
{
	if (func_32(bParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_0xD955FEE4B87AFA07(bParam0))
	{
		if (bParam1)
		{
			return func_55();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_48(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_56(bParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

int func_49(bool bParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_57(bParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_50(bool bParam0)
{
	int iVar0;

	iVar0 = func_26(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1270479->f_8)))
		{
			Global_1270479->f_8 = { func_43(271701509, func_46(bParam0), 12999093, 0) };
		}
		return Global_1270479->f_8;
	}
	return func_43(271701509, func_46(bParam0), 12999093, 0);
}

int func_51(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_32(bParam0);
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &iVar0))
		{
			if (func_58(bParam0, iParam1, iVar0))
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

bool func_52(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_59(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_53(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(iParam0, iParam1);
}

struct<4> func_54()
{
	struct<4> Var0;

	return Var0;
}

bool func_55()
{
	return (func_60(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 0, 0, 0) > 0 && func_61(func_43(889965687 /* GXTEntry: "Wardrobe" */, func_46(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_56(bool bParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_19(bParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_25(bParam0, joaat("default")) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_43(bParam0, Param1, iParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_26(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_26(bParam6), bParam0, iParam8);
	}
	return iVar0;
}

int func_57(bool bParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_26(0);
	*uParam1 = { func_43(bParam0, func_39(0), iParam3, 0) };
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

int func_58(bool bParam0, int iParam1, int iParam2)
{
	if (iParam2 == 487172188)
	{
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(iParam1, joaat("default")) == -1925887917)
		{
			return 0;
		}
	}
	return ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(bParam0, iParam1, iParam2);
}

int func_59(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_26(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

int func_60(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_62(bParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, bParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_26(bParam1), bParam0, iParam3);
}

int func_61(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_63(&uParam0, iParam4, bParam5, iParam6);
}

bool func_62(bool bParam0)
{
	return WEAPON::_0x1F7977C9101F807F(bParam0);
}

int func_63(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_64(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_64(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_26(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, uParam0, iParam1, &uVar0))
	{
		return 0;
	}
	if (!func_59(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return 0;
	}
	return 1;
}

