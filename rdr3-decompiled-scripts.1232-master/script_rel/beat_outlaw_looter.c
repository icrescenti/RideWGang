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
	struct<162> Local_14 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 1;
	var uLocal_181 = 1;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = -1;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 1;
	var uLocal_199 = -1;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	struct<32> Local_208[4];
	struct<12> Local_337[1];
	int iLocal_350 = 0;
	var uLocal_351[4] = { 0, 0, 0, 0 };
	int iLocal_356 = 0;
	vector3 vLocal_357 = { 0f, 0f, 0f };
	vector3 vLocal_360 = { 0f, 0f, 0f };
	vector3 vLocal_363 = { 0f, 0f, 0f };
	float fLocal_366 = 0f;
	int iLocal_367 = 0;
	int iLocal_368 = 0;
	var uLocal_369 = 0;
	int iLocal_370 = 0;
	int iLocal_371 = 0;
	int iLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = -1;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 1097859072;
	var uLocal_393 = 1000;
	var uLocal_394 = 1067450368;
	var uLocal_395 = 5000;
	var uLocal_396 = 42;
	var uLocal_397 = 1103626240;
	var uLocal_398 = 1077936128;
	var uLocal_399 = 1106247680;
	var uLocal_400 = 1103101952;
	var uLocal_401 = 1097859072;
	var uLocal_402 = 1103626240;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = -1;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 1097859072;
	var uLocal_421 = 1000;
	var uLocal_422 = 1067450368;
	var uLocal_423 = 5000;
	var uLocal_424 = 42;
	var uLocal_425 = 1103626240;
	var uLocal_426 = 1077936128;
	var uLocal_427 = 1106247680;
	var uLocal_428 = 1103101952;
	var uLocal_429 = 1097859072;
	var uLocal_430 = 1103626240;
	var uLocal_431 = 0;
	int iLocal_432 = 0;
	int iLocal_433 = 0;
	int iLocal_434 = 0;
	int iLocal_435 = 0;
	int iLocal_436 = 0;
	int iLocal_437 = 0;
	int iLocal_438 = 0;
	bool bLocal_439 = false;
	int iLocal_440 = 0;
	var uLocal_441 = 0;
	int iLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 4;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	int iLocal_460 = 0;
	int iLocal_461 = 0;
	int iLocal_462 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = -1;
#endregion

void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	vLocal_360 = { Vector(92.82582f, 179.7823f, -123.603f) - Vector(97.8585f, 214.15f, -100.095f) };
	vLocal_363 = { Vector(102.4513f, 257.4113f, -85.42538f) - Vector(97.8585f, 214.15f, -100.095f) };
	iLocal_372 = 1;
	Local_14.f_3 = func_1(&vScriptParam_0);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_2(1);
	}
	Local_14.f_161 = func_3(vScriptParam_0.z, 2);
	uLocal_369 = uLocal_369;
	func_4(&Local_14, 1);
	func_5(&(Local_14.f_5), 0);
	func_6(&(Local_14.f_5), 1);
	func_7(&(Local_14.f_5), 1);
	func_8(&(Local_14.f_5), 1);
	func_9(&(Local_14.f_5), 1);
	func_10(&(Local_14.f_5), 1);
	func_11(&(Local_14.f_5), 1);
	func_5(&uLocal_375, 0);
	func_12(&uLocal_375, 1);
	func_13(&uLocal_375, 1);
	func_14(&uLocal_375, 30f);
	func_5(&uLocal_403, 0);
	func_6(&uLocal_403, 1);
	func_15(&uLocal_403, 1);
	func_8(&uLocal_403, 1);
	func_11(&uLocal_403, 1);
	iLocal_367 = func_16(43, 4, 0);
	func_17();
	func_18();
	func_19();
	while (true)
	{
		switch (iLocal_372)
		{
			case 1:
				if (func_20(&Local_14, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
				{
					uLocal_431 = func_21(Local_14.f_51);
					func_22(&Local_14, &uLocal_431, &(Local_14.f_51.f_4));
					func_24(&Local_14, uLocal_431, 3271/*func_23*/);
					func_25();
					func_26((Local_208[0 /*32*/])->f_6, 40f, 0, 0, 5);
					func_27(Local_14.f_51, 150f, 0, 1, 0, 0, 0);
					MISC::CLEAR_AREA(Local_14.f_51, 150f, 1179656);
					iLocal_432 = 1;
					STREAMING::REQUEST_COLLISION_AT_COORD(Local_14.f_51);
					iLocal_372 = 0;
				}
				else if (Local_14.f_160)
				{
					func_2(0);
				}
				break;
			case 0:
				if (func_28())
				{
					iLocal_372 = 3;
				}
				break;
			case 3:
				if (func_29())
				{
					iLocal_372 = 4;
				}
				break;
			case 4:
				if (!func_30(&Local_14, &uLocal_351, iLocal_367, 0, 0, 0, 1, 0))
				{
					func_2(0);
				}
				if (!Local_14.f_46)
				{
					if (func_31(&(uLocal_351[1]), 0, &uLocal_403, &uLocal_374, 0, 0))
					{
						PED::_0x802092B07E3B1EEA(&(uLocal_351[0]), Global_36, 3);
						TASK::TASK_COMBAT_PED(&(uLocal_351[0]), Global_35, 0, 0);
						Local_14.f_46 = 1;
					}
					func_32();
				}
				if (func_33())
				{
					Local_14.f_50 = 1;
					func_2(0);
				}
				if (func_34(&Local_14, &uLocal_351, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0))
				{
					func_2(1);
				}
				break;
		}
		BUILTIN::WAIT(Local_14.f_158);
	}
}

var func_1(var uParam0)
{
	return *uParam0;
}

void func_2(int iParam0)
{
	int iVar0;

	EVENT::REMOVE_SHOCKING_EVENT(iLocal_442);
	if (iParam0 && iLocal_371 != 5)
	{
		func_35();
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_350))
		{
			VEHICLE::_0xC399CC89FBA05DA0(iLocal_350, 1);
		}
		Local_14.f_50 = 1;
	}
	if (iLocal_432)
	{
		func_36((Local_208[0 /*32*/])->f_6, 40f, 5);
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_351[iVar0])))
		{
			func_37(uLocal_351[iVar0], 1, 1, 1);
		}
		iVar0++;
	}
	func_38(&Local_14, &uLocal_351, &uLocal_455, iLocal_367, uLocal_431, Local_14.f_51.f_4, 0, 1, 0, 1);
	func_39(&Local_14);
	if (Local_14.f_44)
	{
	}
	if (MAP::DOES_BLIP_EXIST(Local_14.f_51.f_6))
	{
		MAP::REMOVE_BLIP(&(Local_14.f_51.f_6));
	}
	func_40(iLocal_462);
	func_40(iLocal_461);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_350))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_350);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_3(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_4(var uParam0, bool bParam1)
{
	func_41(&(uParam0->f_5));
	if (uParam0->f_161)
	{
		func_42("BEAT_LAUNCHED", 4000, 0, 1, 0, 0, -1, -1, 0);
	}
	MAP::ALLOW_SONAR_BLIPS(bParam1);
}

void func_5(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		uParam0->f_1 = 0;
		func_12(uParam0, 1);
		func_43(uParam0, 1);
		func_44(uParam0, 1);
		func_45(uParam0, 1);
		func_46(uParam0, 1);
		func_47(uParam0, 1);
		func_48(uParam0, 1);
	}
	else
	{
		uParam0->f_1 = -1;
		func_12(uParam0, 0);
		func_43(uParam0, 0);
		func_44(uParam0, 0);
		func_45(uParam0, 0);
		func_46(uParam0, 0);
		func_47(uParam0, 0);
		func_48(uParam0, 0);
	}
}

void func_6(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_49(&(uParam0->f_1), 2);
	}
	else
	{
		func_50(&(uParam0->f_1), 2);
	}
}

void func_7(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_49(&(uParam0->f_1), 2048);
	}
	else
	{
		func_50(&(uParam0->f_1), 2048);
	}
}

void func_8(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_49(&(uParam0->f_1), 4);
	}
	else
	{
		func_50(&(uParam0->f_1), 4);
	}
}

void func_9(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_49(&(uParam0->f_1), 8);
	}
	else
	{
		func_50(&(uParam0->f_1), 8);
	}
}

void func_10(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_49(&(uParam0->f_1), 256);
	}
	else
	{
		func_50(&(uParam0->f_1), 256);
	}
}

void func_11(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_49(&(uParam0->f_1), 16);
	}
	else
	{
		func_50(&(uParam0->f_1), 16);
	}
}

void func_12(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_50(uParam0, 4);
	}
	else
	{
		func_49(uParam0, 4);
	}
}

void func_13(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_49(&(uParam0->f_1), 131072);
	}
	else
	{
		func_50(&(uParam0->f_1), 131072);
	}
}

void func_14(var uParam0, float fParam1)
{
	uParam0->f_24 = fParam1;
}

void func_15(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_49(&(uParam0->f_1), 1);
	}
	else
	{
		func_50(&(uParam0->f_1), 1);
	}
}

int func_16(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return (func_51(iParam0) % iParam1);
	}
	return (func_52(iParam0) % iParam1);
}

void func_17()
{
	bool bVar0;
	int iVar1;

	(Local_208[0 /*32*/])->f_1 = -285866914;
	if ((func_53(43) % 2) == 0)
	{
		StringCopy(&((Local_208[0 /*32*/])->f_23), "0130_G_M_M_UNICRIMINALS_01_WHITE_01", 64);
	}
	else
	{
		StringCopy(&((Local_208[0 /*32*/])->f_23), "0131_G_M_M_UNICRIMINALS_01_WHITE_02", 64);
	}
	(Local_208[1 /*32*/])->f_1 = -1038436471;
	iVar1 = func_55(func_54());
	if (func_56(43, iVar1) > 0)
	{
		bVar0 = true;
	}
	switch (iLocal_367)
	{
		case 0:
			(Local_208[3 /*32*/])->f_1 = joaat("a_m_m_unicorpse_01");
			(Local_208[2 /*32*/])->f_1 = joaat("a_f_m_unicorpse_01");
			switch (iVar1)
			{
				case 1:
				case 3:
					if (bVar0)
					{
						(Local_208[0 /*32*/])->f_3 = -346838721;
					}
					else
					{
						(Local_208[0 /*32*/])->f_3 = -589558704;
					}
					(Local_208[3 /*32*/])->f_3 = -120266635;
					(Local_208[2 /*32*/])->f_3 = -120266635;
					break;
				case 0:
				case 2:
					if (bVar0)
					{
						(Local_208[0 /*32*/])->f_3 = 224785123;
					}
					else
					{
						(Local_208[0 /*32*/])->f_3 = 1776526941;
					}
					(Local_208[3 /*32*/])->f_3 = -1313156546;
					(Local_208[2 /*32*/])->f_3 = 1526539460;
					break;
				case 5:
					if (bVar0)
					{
						(Local_208[0 /*32*/])->f_3 = -1014964434;
					}
					else
					{
						(Local_208[0 /*32*/])->f_3 = -1313916021;
					}
					(Local_208[3 /*32*/])->f_3 = -1990295382;
					(Local_208[2 /*32*/])->f_3 = 1220706383;
					break;
			}
			iLocal_356 = joaat("stagecoach001x");
			break;
		case 1:
			iLocal_356 = joaat("cart06");
			iLocal_368 = -195275427;
			(Local_208[2 /*32*/])->f_1 = joaat("a_m_m_unicorpse_01");
			switch (iVar1)
			{
				case 1:
				case 3:
					if (bVar0)
					{
						(Local_208[0 /*32*/])->f_3 = 456984869;
					}
					else
					{
						(Local_208[0 /*32*/])->f_3 = 1316614046;
					}
					(Local_208[2 /*32*/])->f_3 = 1526539460;
					break;
				case 0:
				case 2:
					if (bVar0)
					{
						(Local_208[0 /*32*/])->f_3 = -1361955403;
					}
					else
					{
						(Local_208[0 /*32*/])->f_3 = -1669099240;
					}
					(Local_208[2 /*32*/])->f_3 = -1906832519;
					break;
				case 5:
					if (bVar0)
					{
						(Local_208[0 /*32*/])->f_3 = -318198111;
					}
					else
					{
						(Local_208[0 /*32*/])->f_3 = 1413611698;
					}
					(Local_208[2 /*32*/])->f_3 = 684572554;
					break;
			}
			break;
		case 2:
			iLocal_356 = joaat("wagon06x");
			iLocal_368 = -1902992705;
			(Local_208[3 /*32*/])->f_1 = joaat("a_m_m_unicorpse_01");
			(Local_208[2 /*32*/])->f_1 = joaat("a_m_m_unicorpse_01");
			switch (iVar1)
			{
				case 1:
				case 3:
					if (bVar0)
					{
						(Local_208[0 /*32*/])->f_3 = 278819816;
					}
					else
					{
						(Local_208[0 /*32*/])->f_3 = 41277335;
					}
					(Local_208[3 /*32*/])->f_3 = 1220706383;
					(Local_208[2 /*32*/])->f_3 = 1178434377;
					break;
				case 0:
				case 2:
					if (bVar0)
					{
						(Local_208[0 /*32*/])->f_3 = -1965593124;
					}
					else
					{
						(Local_208[0 /*32*/])->f_3 = 1996572208;
					}
					(Local_208[3 /*32*/])->f_3 = 2086791053;
					(Local_208[2 /*32*/])->f_3 = 1792296050;
					break;
				case 5:
					if (bVar0)
					{
						(Local_208[0 /*32*/])->f_3 = 1219519983;
					}
					else
					{
						(Local_208[0 /*32*/])->f_3 = 919290405;
					}
					(Local_208[3 /*32*/])->f_3 = -158344433;
					(Local_208[2 /*32*/])->f_3 = 71890561;
					break;
			}
			break;
		case 3:
			(Local_208[2 /*32*/])->f_1 = joaat("a_m_m_unicorpse_01");
			switch (iVar1)
			{
				case 1:
				case 3:
					if (bVar0)
					{
						(Local_208[0 /*32*/])->f_3 = 1494025392;
					}
					else
					{
						(Local_208[0 /*32*/])->f_3 = -1824163552;
					}
					(Local_208[2 /*32*/])->f_3 = 872175303;
					break;
				case 0:
				case 2:
					if (bVar0)
					{
						(Local_208[0 /*32*/])->f_3 = 761344753;
					}
					else
					{
						(Local_208[0 /*32*/])->f_3 = 460853023;
					}
					(Local_208[2 /*32*/])->f_3 = -1146002097;
					break;
				case 5:
					if (bVar0)
					{
						(Local_208[0 /*32*/])->f_3 = -1437357772;
					}
					else
					{
						(Local_208[0 /*32*/])->f_3 = -803474236;
					}
					(Local_208[2 /*32*/])->f_3 = -769519052;
					break;
			}
			break;
	}
	func_57(&((Local_208[0 /*32*/])->f_22));
}

void func_18()
{
	if (func_58(128))
	{
		(Local_337[0 /*12*/])->f_7 = 1588362795;
	}
}

void func_19()
{
}

int func_20(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, bool bParam7)
{
	float fVar0;

	if (iParam6 || func_59(*uParam1, &(uParam0->f_51), uParam0->f_161, &(uParam0->f_158), *uParam1, &(uParam0->f_160), 1, bParam3, bParam4))
	{
		if (iParam6 || func_60(uParam0, *uParam1))
		{
			if (uParam0->f_161 && uParam0->f_184)
			{
				fVar0 = 7f;
				if (func_61(uParam0->f_3, 1))
				{
					fVar0 = 20f;
				}
				MISC::CLEAR_AREA(uParam0->f_51, fVar0, 2097152);
			}
			if (iParam5 == 1)
			{
				func_62(uParam0, -1, 0, bParam7);
			}
			_NAMESPACE49::_0x9D16896F0DBE78A2(uParam0->f_51, 5f);
			if (bParam2)
			{
				uParam0->f_51.f_3 = func_63(uParam0->f_51);
			}
			return 1;
		}
	}
	return 0;
}

int func_21(vector3 vParam0)
{
	return func_64(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

void func_22(var uParam0, var uParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*uParam1 = 0;
			*uParam2 = 0;
			break;
		case 1:
			*uParam1 = 0;
			*uParam2 = 1;
			break;
		case 2:
			*uParam1 = 4;
			*uParam2 = 0;
			break;
		case 3:
			*uParam1 = 4;
			*uParam2 = 1;
			break;
		case 4:
			*uParam1 = 6;
			*uParam2 = 0;
			break;
		case 5:
			*uParam1 = 6;
			*uParam2 = 1;
			break;
		case 6:
			*uParam1 = 9;
			*uParam2 = 0;
			break;
		case 7:
			*uParam1 = 9;
			*uParam2 = 1;
			break;
		case 8:
			*uParam1 = 9;
			*uParam2 = 2;
			break;
		case 9:
			*uParam1 = 9;
			*uParam2 = 3;
			break;
		case 10:
			*uParam1 = 10;
			*uParam2 = 0;
			break;
		case 11:
			*uParam1 = 10;
			*uParam2 = 1;
			break;
		case 12:
			*uParam1 = 10;
			*uParam2 = 2;
			break;
		case 13:
			*uParam1 = 10;
			*uParam2 = 3;
			break;
		case 14:
			*uParam1 = 11;
			*uParam2 = 0;
			break;
		case 15:
			*uParam1 = 11;
			*uParam2 = 1;
			break;
		case 16:
			*uParam1 = 11;
			*uParam2 = 2;
			break;
		case 17:
			*uParam1 = 13;
			*uParam2 = 0;
			break;
		case 18:
			*uParam1 = 13;
			*uParam2 = 1;
			break;
		case 19:
			*uParam1 = 14;
			*uParam2 = 0;
			break;
		case 20:
			*uParam1 = 14;
			*uParam2 = 1;
			break;
		case 21:
			*uParam1 = 14;
			*uParam2 = 2;
			break;
		case 22:
			*uParam1 = 15;
			*uParam2 = 0;
			break;
		case 23:
			*uParam1 = 15;
			*uParam2 = 1;
			break;
		case 24:
			*uParam1 = 15;
			*uParam2 = 2;
			break;
		case 25:
			*uParam1 = 16;
			*uParam2 = 0;
			break;
		case 26:
			*uParam1 = 16;
			*uParam2 = 1;
			break;
	}
}

Vector3 func_23(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -78.48f;
				case 1:
					return 0f, 0f, -177.84f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 92.16f;
				case 1:
					return 0f, 0f, -300.24f;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -237.6f;
				case 1:
					return 0f, 0f, -55.44f;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -18.72f;
				case 1:
					return 0f, 0f, 263.52f;
				case 2:
					return 0f, 0f, -81.36f;
				case 3:
					return 0f, 0f, -174.96f;
				default:
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -109.44f;
				case 1:
					return 0f, 0f, 112.32f;
				case 2:
					return 0f, 0f, -183.6f;
				case 3:
					return 0f, 0f, -87.12f;
				default:
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -84.24f;
				case 1:
					return 0f, 0f, -32.4f;
				case 2:
					return 0f, 0f, -203.76f;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 204.26f;
				case 1:
					return 0f, 0f, -66.96f;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -49.68f;
				case 1:
					return 0f, 0f, 10.08f;
				case 2:
					return 0f, 0f, 58.32f;
				default:
					break;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 52.56f;
				case 1:
					return 0f, 0f, -84.24f;
				case 2:
					return 0f, 0f, 112.32f;
				default:
					break;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -78.48f;
				case 1:
					return 0f, 0f, -234.72f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_24(var uParam0, var uParam1, int iParam2)
{
	vector3 vVar0;

	Stack.Push(uParam1);
	Stack.Push(uParam0->f_51.f_4);
	Call_Loc(iParam2);
	vVar0 = { StackVal, StackVal, StackVal };
	uParam0->f_51.f_3 = vVar0.z;
}

void func_25()
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;

	(Local_208[0 /*32*/])->f_6 = { 2.50479f, -1.84608f, 1.09423f };
	(Local_208[0 /*32*/])->f_9 = 284.4f;
	(Local_208[1 /*32*/])->f_6 = { -1.1744f, -7.52913f, 0.144394f };
	(Local_208[1 /*32*/])->f_9 = 195.4219f;
	if (iLocal_367 == 1)
	{
		vLocal_357 = { Vector(99.2379f, 210.6038f, -94.4028f) - Vector(97.8585f, 214.15f, -100.095f) };
		fLocal_366 = 10f;
		(Local_208[1 /*32*/])->f_6 = { -1.1744f, -7.52913f, 0.144394f };
		(Local_208[1 /*32*/])->f_9 = 159.13f;
	}
	else
	{
		if (iLocal_367 == 2)
		{
			(Local_208[3 /*32*/])->f_6 = { Vector(98.4197f, 207.5725f, -97.6618f) - Vector(97.8585f, 214.15f, -100.095f) };
			(Local_208[1 /*32*/])->f_6 = { -1.1744f, -7.52913f, 0.144394f };
			(Local_208[1 /*32*/])->f_9 = 195.4219f;
		}
		else if (iLocal_367 == 3)
		{
			vLocal_360 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_14.f_51, Local_14.f_51.f_3, vLocal_360) };
			vLocal_363 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_14.f_51, Local_14.f_51.f_3, vLocal_363) };
			if (func_65(Global_35, vLocal_360, 1) > func_65(Global_35, vLocal_363, 1))
			{
				PATHFIND::GET_CLOSEST_VEHICLE_NODE(vLocal_360, &((Local_208[0 /*32*/])->f_6), 1, 3f, 0f);
				(Local_208[1 /*32*/])->f_6 = { (Local_208[0 /*32*/])->f_6 };
			}
			else
			{
				PATHFIND::GET_CLOSEST_VEHICLE_NODE(vLocal_363, &((Local_208[0 /*32*/])->f_6), 1, 3f, 0f);
				(Local_208[1 /*32*/])->f_6 = { (Local_208[0 /*32*/])->f_6 };
			}
			vVar1 = { Global_36 - (Local_208[0 /*32*/])->f_6 };
			vVar1.f_2 = 0f;
			vVar1 = { func_66(vVar1) };
			vVar4 = { -BUILTIN::SIN(fVar0), BUILTIN::COS(fVar0), 0f };
			if (func_67(vVar1, vVar4) < 0f)
			{
				fVar0 = (fVar0 + 180f);
			}
			(Local_208[0 /*32*/])->f_9 = fVar0;
			(Local_208[1 /*32*/])->f_9 = (Local_208[0 /*32*/])->f_9;
		}
		else
		{
			(Local_208[3 /*32*/])->f_6 = { 4.69632f, -2.40771f, 1.22749f };
			(Local_208[1 /*32*/])->f_6 = { -1.1744f, -7.52913f, 0.144394f };
			(Local_208[1 /*32*/])->f_9 = 195.4219f;
		}
		vLocal_357 = { 6.44497f, -3.58025f, 1.41759f };
		fLocal_366 = 350.0283f;
	}
	(Local_208[3 /*32*/])->f_9 = 349.3997f;
	(Local_208[2 /*32*/])->f_6 = { Vector(98.9893f, 212.5371f, -97.009f) - Vector(97.8585f, 214.15f, -100.095f) };
	(Local_208[2 /*32*/])->f_9 = 0.001856f;
}

void func_26(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;

	vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_68(vVar0, vVar3, 0f) };
	vVar9 = { func_69(vVar0, vVar3, 0f) };
	if (iParam4 == 1)
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(vVar6, vVar9, iParam5, 1);
	}
	else if (iParam6 == 5)
	{
		PATHFIND::SET_ROADS_IN_AREA(vVar6, vVar9, iParam4, 1, iParam5);
	}
	else
	{
		PATHFIND::_0xAFE2AE66F6251C66(vVar6, vVar9, iParam6, 1);
	}
}

void func_27(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 8;
	if (bParam4)
	{
		iVar0 |= 72;
	}
	if (bParam5)
	{
		iVar0 |= 131072;
	}
	if (bParam6)
	{
		iVar0 |= 24;
	}
	if (bParam7)
	{
		iVar0 |= 40;
	}
	if (bParam8)
	{
		iVar0 |= 524288;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

int func_28()
{
	switch (iLocal_370)
	{
		case 0:
			if (func_70(&Local_14))
			{
				if (iLocal_356 != 0)
				{
					STREAMING::REQUEST_MODEL(iLocal_356, false);
				}
				if (iLocal_367 == 1 || iLocal_367 == 2)
				{
					PROPSET::_REQUEST_PROPSET(iLocal_368);
				}
				func_71(527370025, 1, 0, 0);
				func_72();
				func_73(&Local_208);
				func_74(&Local_337);
				iLocal_370 = 1;
			}
			break;
		case 1:
			if (!func_75(&Local_208))
			{
				return 0;
			}
			if (!func_76(&Local_337))
			{
				return 0;
			}
			if (iLocal_356 != 0)
			{
				if (!STREAMING::HAS_MODEL_LOADED(iLocal_356))
				{
					return 0;
				}
			}
			if (iLocal_367 == 1 || iLocal_367 == 2)
			{
				if (!PROPSET::_HAS_PROPSET_LOADED(iLocal_368))
				{
					return 0;
				}
			}
			if (!func_72())
			{
				return 0;
			}
			return 1;
	}
	return 0;
}

int func_29()
{
	bool bVar0;

	switch (iLocal_460)
	{
		case 0:
			bVar0 = true;
			if (iLocal_356 != 0)
			{
				iLocal_350 = VEHICLE::CREATE_VEHICLE(iLocal_356, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_14.f_51, Local_14.f_51.f_3, vLocal_357), (fLocal_366 + Local_14.f_51.f_3), true, true, bVar0, false);
				if (iLocal_367 == 1 || iLocal_367 == 2)
				{
					PROPSET::_0xD80FAF919A2E56EA(iLocal_350, iLocal_368);
				}
			}
			iLocal_460 = 1;
			break;
		case 1:
			if (!func_77(Local_14.f_51, Local_14.f_51.f_3, &Local_208, &uLocal_351, 0, 0, -1, 1))
			{
				return 0;
			}
			if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_351[0])))
			{
				PED::SET_PED_HEARING_RANGE(&(uLocal_351[0]), 10f);
				if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_351[1])))
				{
					PED::_0x931B241409216C1F(&(uLocal_351[0]), &(uLocal_351[1]), 0);
					func_78();
					PED::SET_PED_CONFIG_FLAG(&(uLocal_351[1]), 297, true);
				}
				PED::SET_PED_CONFIG_FLAG(&(uLocal_351[0]), 6, false);
				PED::SET_PED_CONFIG_FLAG(&(uLocal_351[0]), 297, true);
				PED::SET_PED_CONFIG_FLAG(&(uLocal_351[0]), 146, false);
				PED::SET_PED_CONFIG_FLAG(&(uLocal_351[0]), 130, false);
				PED::SET_PED_CONFIG_FLAG(&(uLocal_351[0]), 458, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(&(uLocal_351[0]), 54, true);
				PED::_0xB8B6430EAD2D2437(&(uLocal_351[0]), -589962661);
				PED::_0x24C82EF607105FAA(&(uLocal_351[0]), -930817754);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(uLocal_351[0]), false);
				PED::SET_PED_KEEP_TASK(&(uLocal_351[0]), true);
				ENTITY::_0x8C03CD6B5E0E85E8(&(uLocal_351[0]), -301147667);
				WEAPON::REMOVE_ALL_PED_WEAPONS(&(uLocal_351[0]), true, true);
				WEAPON::_GIVE_WEAPON_TO_PED_2(&(uLocal_351[0]), joaat("weapon_revolver_cattleman"), 500, false, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
				WEAPON::SET_CURRENT_PED_WEAPON(&(uLocal_351[0]), joaat("weapon_revolver_cattleman"), false, 0, true, false);
				func_79(&(uLocal_351[0]), 0);
			}
			if (iLocal_367 == 0)
			{
				func_80(&(uLocal_351[2]), 1, 1060320051, 0, 0);
			}
			else
			{
				func_80(&(uLocal_351[2]), 1, 1060320051, 0, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_351[2])))
			{
				PED::SET_PED_RESET_FLAG(&(uLocal_351[2]), 29, true);
			}
			if (iLocal_367 != 3)
			{
				func_81(&(uLocal_351[3]), 0f);
				func_82(&(uLocal_351[3]), 0, 0);
			}
			if (iLocal_367 == 3)
			{
				iLocal_461 = VOLUME::_CREATE_VOLUME_CYLINDER(ENTITY::GET_ENTITY_COORDS(&(uLocal_351[2]), true, false), 0f, 0f, 0f, 6.5f, 6.5f, 5f);
				iLocal_462 = VOLUME::_CREATE_VOLUME_CYLINDER(ENTITY::GET_ENTITY_COORDS(&(uLocal_351[2]), true, false), 0f, 0f, 0f, 10.5f, 10.5f, 5f);
			}
			else
			{
				iLocal_461 = VOLUME::_CREATE_VOLUME_CYLINDER(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(&(uLocal_351[0]), 0f, -2f, 0f), 0f, 0f, 0f, 6.5f, 6.5f, 5f);
				iLocal_462 = VOLUME::_CREATE_VOLUME_CYLINDER(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(&(uLocal_351[0]), 0f, -2.5f, 0f), 0f, 0f, 0f, 10.5f, 10.5f, 5f);
			}
			VOLUME::_0xD52DF30355EA7C8E(iLocal_461, &(uLocal_351[0]), 1);
			VOLUME::_0x4A8FEFC43FD8AC9B(iLocal_461, 0, 1);
			iLocal_460 = 6;
			break;
		case 6:
			func_83(&Local_14, 1);
			func_84(&(uLocal_351[0]), &Local_14, 0);
			func_85();
			if (iLocal_367 == 3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_351[0])) && !ENTITY::IS_ENTITY_DEAD(&(uLocal_351[1])))
				{
					PED::_SET_PED_ON_MOUNT(&(uLocal_351[0]), &(uLocal_351[1]), -1, true);
					ENTITY::SET_ENTITY_COORDS(&(uLocal_351[1]), (Local_208[0 /*32*/])->f_6, true, false, true, true);
					ENTITY::SET_ENTITY_HEADING(&(uLocal_351[1]), (Local_208[0 /*32*/])->f_9);
				}
			}
			else if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_351[3])))
			{
				PED::SET_PED_INTO_VEHICLE(&(uLocal_351[3]), iLocal_350, -1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_351[2])))
			{
				PED::SET_PED_RESET_FLAG(&(uLocal_351[2]), 29, true);
			}
			return 1;
	}
	return 0;
}

int func_30(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (!uParam0->f_186)
	{
		func_86(uParam0, iParam2);
	}
	uParam0->f_1 = (uParam0->f_1 % 4);
	func_87(uParam0, uParam1);
	if (bParam4)
	{
		if (uParam0->f_48 && !uParam0->f_5 & 16384 != 0)
		{
			if (uParam0->f_5.f_1 & 256 != 0)
			{
				func_88(&(uParam0->f_5));
			}
			func_50(&(uParam0->f_5), 16384);
		}
	}
	if (!uParam0->f_48 && !func_89(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_90(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_91(&(uParam0->f_121));
		}
	}
	switch (uParam0->f_1)
	{
		case 0:
		case 1:
			if (!uParam0->f_48)
			{
				if (!bParam7)
				{
					if (uParam0->f_193 < 2)
					{
						uParam0->f_193++;
					}
					else
					{
						uParam0->f_193 = 0;
					}
					func_92(uParam0, uParam0->f_193, 2f);
				}
			}
			break;
		case 2:
			if (!func_93(uParam0->f_3, &(uParam0->f_47), uParam0, bParam3))
			{
				bVar0 = true;
			}
			break;
		case 3:
			break;
	}
	if (func_61(uParam0->f_3, 128))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(uParam1[0]) && !PED::IS_PED_INJURED(uParam1[0])) && uParam0->f_3 != 49)
		{
			if (!VOLUME::_0xF6A8A652A6B186CD(VOLUME::_0xF6F5447D418DAA82(uParam1[0])))
			{
				func_94(uParam0, uParam1[0]);
			}
		}
		if (bParam6)
		{
			if (PED::_0xA911EE21EDF69DAF(Global_35))
			{
				iVar1 = PED::_0xD806CD2A4F2C2996(Global_35);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
						if (ENTITY::DOES_ENTITY_EXIST(iVar2))
						{
							if (PED::_0x3AA24CCC0D451379(iVar2) || ((iParam5 || PED::IS_PED_HUMAN(iVar2)) && ENTITY::IS_ENTITY_DEAD(iVar2)))
							{
								bVar0 = true;
							}
						}
					}
				}
			}
		}
	}
	uParam0->f_158 = 0;
	uParam0->f_1++;
	uParam0->f_2++;
	if (bVar0)
	{
		return 0;
	}
	return 1;
}

int func_31(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_95(uParam2, 1, iVar0);
	}
	if (!Global_1935630->f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			uParam2->f_12 = fParam5;
		}
		else
		{
			uParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!uParam2->f_1 & 128 != 0)
		{
			if (func_96(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_97(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_98(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_97(iParam0, uParam2, *uParam3);
					return 1;
				}
				else if (func_99(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_97(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_100(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_97(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_26 && func_101(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_97(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_102(uParam2, 1065353216))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_103(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_97(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_104(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_97(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_105(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_97(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			else if (func_105(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_97(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_106(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_97(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || uParam2->f_12 < 20f)
			{
				if (func_107(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_97(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_108(uParam2, 4000))
				{
					if ((func_109(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_110(uParam2, iParam0)) && func_111(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_97(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_109(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_110(uParam2, iParam0)) && func_111(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_97(iParam0, uParam2, *uParam3);
					return 1;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_112(iParam0, Global_1935630->f_41))
							{
								func_113();
								*uParam3 = 2;
								func_97(iParam0, uParam2, *uParam3);
								return 1;
							}
						}
					}
				}
			}
			else if (Global_1935630->f_40 == 0)
			{
				if (Global_1935630->f_41 != 0)
				{
					if (*uParam2 & 131072 == 0)
					{
						if (func_112(iParam0, Global_1935630->f_41))
						{
							func_113();
							*uParam3 = 2;
							func_97(iParam0, uParam2, *uParam3);
							return 1;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_114(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_115() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_113();
						*uParam3 = 2;
						func_97(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_116())
					{
						if (func_112(iParam0, Global_1935630->f_42))
						{
							func_113();
							*uParam3 = 2;
							func_97(iParam0, uParam2, *uParam3);
							return 1;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_117(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_97(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_118(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_97(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_119(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_97(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_120(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_97(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_121(uParam2, 4000))
				{
					if (func_122(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_97(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_123(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_97(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_124(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_97(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
	}
	return 0;
}

void func_32()
{
	if (iLocal_433)
	{
		return;
	}
	if (func_125(&(uLocal_351[0]), &uLocal_375, &uLocal_374, 0))
	{
		TASK::_0xE7FA07624574B79A(&(uLocal_351[0]), Global_35, 2, 1, 2f, 1, 0, 0, 0);
		iLocal_433 = 1;
	}
}

int func_33()
{
	int iVar0;

	func_126();
	func_127();
	func_128();
	func_129();
	if (func_130(&uLocal_449, 10f))
	{
		AUDIO::_0x05D6195FB4D428F4(1697879553);
	}
	if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_351[0])))
	{
		if (!func_131(&uLocal_452))
		{
			if (func_132(&(uLocal_351[0])))
			{
				func_133(&uLocal_452);
			}
		}
		if (!func_134(&uLocal_452, 3f))
		{
			PED::SET_PED_RESET_FLAG(&(uLocal_351[0]), 216, true);
		}
		PED::SET_PED_RESET_FLAG(&(uLocal_351[0]), 42, true);
		if (func_135(Global_35, &(uLocal_351[0]), 1) < 125f)
		{
			TASK::TASK_LOOK_AT_ENTITY(&(uLocal_351[0]), Global_35, 20, 0, 51, 0);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_351[2])))
	{
		PED::SET_PED_RESET_FLAG(&(uLocal_351[2]), 29, true);
	}
	switch (iLocal_371)
	{
		case 0:
			iLocal_442 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(513747494, Local_14.f_51, 0f, 50f, 50f, 0f, -1082130432, -1, -1);
			ENTITY::_0x9587913B9E772D29(&(uLocal_351[2]), 0);
			ENTITY::_0x9587913B9E772D29(&(uLocal_351[3]), 0);
			if (iLocal_367 != 3)
			{
				func_136(&(uLocal_351[0]), 527370025, -1, 0, 0, -1082130432);
			}
			else if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_351[0])))
			{
				AUDIO::STOP_PED_SPEAKING(&(uLocal_351[0]), true);
			}
			iLocal_371 = 1;
			break;
		case 1:
			if (iLocal_367 != 3 && !iLocal_435)
			{
				iLocal_435 = 1;
				if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_351[2])) && ENTITY::IS_ENTITY_DEAD(&(uLocal_351[2])))
				{
					func_137(&(uLocal_351[2]), 1, 0);
					PED::_0x6569F31A01B4C097(&(uLocal_351[2]), 4, 0);
				}
				else
				{
					iLocal_435 = 0;
				}
				if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_351[3])) && ENTITY::IS_ENTITY_DEAD(&(uLocal_351[3])))
				{
					func_137(&(uLocal_351[3]), 1, 0);
					PED::_0x6569F31A01B4C097(&(uLocal_351[3]), 4, 0);
				}
				else
				{
					iLocal_435 = 0;
				}
			}
			if (iLocal_367 == 3 && !TASK::IS_PED_ACTIVE_IN_SCENARIO(&(uLocal_351[0]), 0))
			{
				if (func_65(Global_35, Local_14.f_51, 1) < 4900f)
				{
					if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_351[2])))
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar0);
						TASK::TASK_GO_TO_ENTITY(0, &(uLocal_351[2]), 20000, 4f, 1.25f, 2f, 0);
						TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
						TASK::TASK_GO_TO_ENTITY(0, &(uLocal_351[2]), -1, 0.75f, 1f, 2f, 0);
						func_136(0, 527370025, -1, 1, 0, -1082130432);
						TASK::CLOSE_SEQUENCE_TASK(iVar0);
						TASK::TASK_PERFORM_SEQUENCE(&(uLocal_351[0]), iVar0);
						TASK::CLEAR_SEQUENCE_TASK(&iVar0);
						iLocal_371 = 2;
					}
				}
			}
			else if (func_138(&Local_14, 2f, 1114636288, 35f, 1, 0, 1, -1082130432, 1, 1125515264, 0, 0))
			{
				AUDIO::_0x05D6195FB4D428F4(467735613);
				func_133(&uLocal_449);
				Local_14.f_44 = 1;
				func_133(&uLocal_443);
				iLocal_371 = 2;
			}
			break;
		case 2:
			if (!Local_14.f_44)
			{
				if (PED::_0xA454D234E45BB6E5(&(uLocal_351[0]), PLAYER::PLAYER_ID()) || PED::_0x9337183FDA2E9035(&(uLocal_351[0]), PLAYER::PLAYER_ID()))
				{
					Local_14.f_44 = 1;
				}
			}
			if (PED::_0x331550B212014B92(&(uLocal_351[0]), Global_35))
			{
				bLocal_439 = true;
				Local_14.f_44 = 1;
				iLocal_371 = 3;
			}
			if (func_130(&uLocal_443, 6f))
			{
				func_35();
				iLocal_371 = 5;
			}
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_351[0])))
			{
				if (!PED::_0x331550B212014B92(&(uLocal_351[0]), Global_35))
				{
					func_35();
					func_40(iLocal_461);
					func_40(iLocal_462);
					iLocal_371 = 5;
				}
			}
			else
			{
				iLocal_371 = 5;
			}
			break;
		case 4:
			if (ENTITY::IS_ENTITY_DEAD(&(uLocal_351[0])))
			{
				iLocal_371 = 5;
			}
			break;
		case 5:
			if ((PED::_0x331550B212014B92(&(uLocal_351[0]), Global_35) && func_139(&(uLocal_351[0]), 993674639)) && TASK::GET_SCRIPT_TASK_STATUS(&(uLocal_351[0]), 242628503, 1) == 0)
			{
				func_40(iLocal_461);
				func_40(iLocal_462);
				TASK::CLEAR_PED_TASKS(&(uLocal_351[0]), 1, 0);
				iLocal_371 = 3;
			}
			if (!iLocal_440 && !bLocal_439)
			{
				if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_351[0])) && func_135(&(uLocal_351[0]), Global_35, 1) < 100f)
				{
					func_140(&(uLocal_351[0]), Global_35, "HEADS_UP_THREATEN", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					TASK::TASK_LOOK_AT_ENTITY(&(uLocal_351[0]), Global_35, 2300, 0, 51, 0);
					iLocal_440 = 1;
				}
			}
			if (!func_141(Global_35, &uLocal_351, &uLocal_441, 2500f))
			{
				Local_14.f_44 = 1;
				return 1;
			}
			break;
	}
	return 0;
}

int func_34(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, int iParam10, int iParam11, int iParam12)
{
	float fVar0;
	vector3 vVar1;

	fVar0 = 0f;
	if (uParam0->f_1 >= 4)
	{
		if (bParam6)
		{
			if (func_142())
			{
				return 1;
			}
		}
		if (bParam7)
		{
			if (Global_16)
			{
				return 1;
			}
		}
		if (!uParam0->f_48)
		{
			if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
		}
	}
	if (bParam2 || bParam4)
	{
		if (uParam0->f_188 == 0)
		{
			if (bParam5)
			{
				fVar0 = 300f;
				if (!bParam8 && uParam0->f_48)
				{
					fVar0 = (fVar0 - 65f);
				}
			}
			else if (func_143(uParam0->f_3))
			{
				fVar0 = 250f;
			}
			else if (func_61(uParam0->f_3, 131072))
			{
				fVar0 = 70f;
				fVar0 = (fVar0 + 10f);
			}
			else if (func_61(uParam0->f_3, 1) && iParam12 == 0)
			{
				fVar0 = 215f;
				fVar0 = (fVar0 + 20f);
				if (uParam0->f_48)
				{
					fVar0 = (fVar0 - 80f);
				}
			}
			else if (func_61(uParam0->f_3, 2) || iParam12 == 1)
			{
				fVar0 = 125f;
				fVar0 = (fVar0 + 10f);
				if (uParam0->f_48)
				{
					fVar0 = (fVar0 - 50f);
				}
			}
			uParam0->f_189 = fVar0;
		}
		else
		{
			fVar0 = uParam0->f_189;
		}
		fVar0 = (fVar0 * fVar0);
		if (bParam2)
		{
			if (uParam0->f_188 < *uParam1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam1[uParam0->f_188]))
				{
					if (Global_1935630->f_40 != uParam1[uParam0->f_188])
					{
						if ((bParam3 && !ENTITY::IS_ENTITY_DEAD(uParam1[uParam0->f_188])) || !bParam3)
						{
							if ((&uParam0->f_98[uParam0->f_188] * &uParam0->f_98[uParam0->f_188]) <= fVar0)
							{
								uParam0->f_187 = 0;
							}
						}
					}
				}
				uParam0->f_188++;
			}
			else
			{
				uParam0->f_188 = 0;
				if (uParam0->f_187)
				{
					return 1;
				}
				else
				{
					uParam0->f_187 = 1;
				}
			}
		}
		if (bParam4)
		{
			if (fParam9 == 0f)
			{
				if (func_144(Global_36, uParam0->f_51) > fVar0)
				{
					return 1;
				}
			}
			else
			{
				vVar1 = { fParam9, iParam10, iParam11 };
				if (func_144(Global_36, vVar1) > fVar0)
				{
					return 1;
				}
			}
		}
	}
	if (bParam3)
	{
		if (uParam0->f_191 < *uParam1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam1[uParam0->f_191]))
			{
				uParam0->f_190 = 0;
			}
			uParam0->f_191++;
		}
		else if (uParam0->f_190)
		{
			return 1;
		}
		else
		{
			uParam0->f_191 = 0;
			uParam0->f_190 = 1;
		}
	}
	return 0;
}

void func_35()
{
	int iVar0;

	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_351[1])))
	{
		TASK::TASK_MOUNT_ANIMAL(0, &(uLocal_351[1]), -1, -1, 1f, 1, 0, 0);
	}
	TASK::_TASK_MOVE_IN_TRAFFIC(0, 1.25f, 0, 0);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(&(uLocal_351[0]), iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
}

void func_36(vector3 vParam0, float fParam3, int iParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;

	vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_68(vVar0, vVar3, 0f) };
	vVar9 = { func_69(vVar0, vVar3, 0f) };
	if (iParam4 == 5)
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(vVar6, vVar9, 0, 1);
	}
	else
	{
		PATHFIND::_0x6C3F12ECEB6D2E2A(vVar6, vVar9, iParam4, 1);
	}
}

void func_37(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
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

void func_38(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	int iVar9;

	if (MISC::ARE_STRINGS_EQUAL(MISC::_0xF81C53561D15F330(), func_145(uParam0->f_3)))
	{
		MISC::_0x1096603B519C905F("");
	}
	if (uParam0->f_48)
	{
		AUDIO::STOP_AUDIO_SCENE("RE_active_location_scene");
		if (!uParam0->f_45 && !uParam0->f_44)
		{
			func_146(uParam0->f_3, 524288);
		}
	}
	if (func_147(PLAYER::PLAYER_PED_ID(), 0, 1))
	{
		iVar1 = PED::GET_MOUNT(Global_35);
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
		iVar2 = uParam0->f_98;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			bVar3 = (iParam8 && DECORATOR::DECOR_EXIST_ON(uParam1[iVar0], "pedRoam_bInPedRoam"));
			if (func_147(uParam1[iVar0], 0, 0))
			{
				func_148(uParam1[iVar0], bVar3);
				if (func_149(uParam0, (*uParam1)[iVar0]))
				{
					func_150((*uParam1)[iVar0]);
				}
			}
			if (!uParam0->f_50)
			{
				if (func_147(uParam1[iVar0], 0, 1))
				{
					if (bParam9)
					{
						if (PED::GET_PED_STEALTH_MOVEMENT(uParam1[iVar0]))
						{
							PED::SET_PED_STEALTH_MOVEMENT(uParam1[iVar0], false, 0, 0);
						}
						else if (PED::_0xD5FE956C70FF370B(uParam1[iVar0]))
						{
							PED::_0x7DE9692C6F64CFE8(uParam1[iVar0], false, 0, 0);
						}
					}
					if (!bVar3)
					{
						if (!bParam6)
						{
							func_152(uParam1[iVar0], 1073741824, func_151(iVar0 < iVar2, &(uParam0->f_98[iVar0]), -1f), iVar1, 0);
						}
						else
						{
							TASK::TASK_WANDER_STANDARD(uParam1[iVar0], 40000f, 0);
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bParam7)
	{
		func_153(uParam0);
	}
	func_154(uParam0);
	if (!uParam0->f_186)
	{
		func_86(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = func_155(uParam0->f_3, uParam0->f_185);
		MISC::_INT_TO_STRING(iVar4, "%u", &uVar5);
		iVar9 = 0;
		if (!uParam0->f_48)
		{
			iVar9 = 2;
		}
		else if (!uParam0->f_44)
		{
			iVar9 = 1;
		}
		func_156(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

void func_39(var uParam0)
{
	if (func_157(uParam0->f_162))
	{
		func_158(&(uParam0->f_162), 1, 1);
	}
	if (func_157(uParam0->f_163))
	{
		func_158(&(uParam0->f_163), 1, 1);
	}
	if (func_157(uParam0->f_164))
	{
		func_158(&(uParam0->f_164), 1, 1);
	}
	if (func_157(uParam0->f_165))
	{
		func_158(&(uParam0->f_165), 1, 1);
	}
}

void func_40(int iParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		VOLUME::_0x43F867EF5C463A53(iParam0);
	}
}

void func_41(var uParam0)
{
	func_159(uParam0, 0);
	func_7(uParam0, 0);
	func_10(uParam0, 1);
	func_44(uParam0, 1);
	func_160(uParam0, 0);
	func_161(uParam0, 1);
	func_162(uParam0, 1, 1, 1);
}

var func_42(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	char* sVar0;

	if (bParam2)
	{
		_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_163(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_164(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(sVar0);
	}
	return func_163(sVar0, iParam1, 0, 0, 1, 1);
}

void func_43(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_50(uParam0, 8);
	}
	else
	{
		func_49(uParam0, 8);
	}
}

void func_44(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_50(uParam0, 16);
	}
	else
	{
		func_49(uParam0, 67108864);
		func_49(uParam0, 16);
	}
}

void func_45(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_50(uParam0, 32);
	}
	else
	{
		func_49(uParam0, 32);
	}
}

void func_46(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_50(uParam0, 64);
	}
	else
	{
		func_49(uParam0, 64);
	}
}

void func_47(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_50(uParam0, 1024);
	}
	else
	{
		func_49(uParam0, 1024);
	}
}

void func_48(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_50(uParam0, 1048576);
	}
	else
	{
		func_49(uParam0, 1048576);
	}
}

void func_49(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_50(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_51(int iParam0)
{
	return (Global_17503.f_42[iParam0 /*8*/])->f_1;
}

int func_52(int iParam0)
{
	return &(Global_17503.f_42[iParam0 /*8*/]);
}

int func_53(int iParam0)
{
	if (!func_165(iParam0))
	{
		return 0;
	}
	return &(Global_17503.f_42[iParam0 /*8*/]);
}

int func_54()
{
	return Global_1897952->f_41;
}

int func_55(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 11:
			return 3;
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			return 0;
		case 3:
		case 10:
			return 2;
		case 4:
		case 9:
			return 1;
		case 8:
			return 4;
		case 13:
		case 14:
		case 15:
		case 16:
			return 5;
		default:
			break;
	}
	return -1;
}

int func_56(int iParam0, int iParam1)
{
	int iVar0;

	switch (iParam1)
	{
		case 3:
			iVar0 = func_166(iParam0, 0);
			iVar0 = (iVar0 + func_166(iParam0, 2));
			iVar0 = (iVar0 + func_166(iParam0, 11));
			return iVar0;
		case 0:
			iVar0 = func_166(iParam0, 1);
			iVar0 = (iVar0 + func_166(iParam0, 7));
			iVar0 = (iVar0 + func_166(iParam0, 6));
			iVar0 = (iVar0 + func_166(iParam0, 12));
			return iVar0;
		case 2:
			iVar0 = func_166(iParam0, 3);
			iVar0 = (iVar0 + func_166(iParam0, 10));
			return iVar0;
		case 1:
			iVar0 = func_166(iParam0, 4);
			iVar0 = (iVar0 + func_166(iParam0, 9));
			return iVar0;
		case 4:
			return func_166(iParam0, 8);
		case 5:
			iVar0 = func_166(iParam0, 13);
			iVar0 = (iVar0 + func_166(iParam0, 14));
			iVar0 = (iVar0 + func_166(iParam0, 15));
			iVar0 = (iVar0 + func_166(iParam0, 16));
			return iVar0;
		default:
			break;
	}
	return 0;
}

void func_57(var uParam0)
{
	func_167(uParam0, 256);
}

int func_58(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = func_169(func_168());
	if (func_3(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (func_3(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return 1;
		}
	}
	if (func_3(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return 1;
		}
	}
	if (func_3(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_3(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return 1;
		}
	}
	if (func_3(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return 1;
		}
	}
	if (func_3(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (func_3(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return 1;
		}
	}
	if (func_3(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (func_3(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return 1;
		}
	}
	if (func_3(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_3(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return 1;
		}
	}
	if (func_3(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (func_3(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return 1;
		}
	}
	if (func_3(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_3(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return 1;
		}
	}
	if (func_3(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return 1;
		}
	}
	return 0;
}

int func_59(int iParam0, var uParam1, bool bParam2, var uParam3, struct<7> Param4, var uParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;
	float fVar1;
	float fVar2;
	bool bVar3;
	bool bVar4;

	if (Param4.f_6 > -1)
	{
		*uParam1 = { func_170(iParam0, Param4.f_6) };
		uParam1->f_4 = Param4.f_6;
		uParam1->f_5 = uParam1->f_4;
		func_171(iParam0, uParam1, bParam2, bParam12, 0);
		*uParam3 = 0;
		return 1;
	}
	switch (uParam1->f_9)
	{
		case 0:
			if (func_89(iParam0, 128))
			{
				if (!func_172(iParam0, &(uParam1->f_10)))
				{
					*uParam11 = 1;
					return 0;
				}
			}
			else
			{
				func_173(iParam0, &fVar1, &fVar2, &iVar0, 0);
				bVar4 = false;
				*uParam1 = { func_174(&bVar4, iParam0, fVar2, fVar1) };
				if (bVar4)
				{
					*uParam11 = 1;
					return 0;
				}
				if (func_175(*uParam1))
				{
					return func_176(uParam1, uParam3, uParam11, bParam2, 12, 1000);
				}
				uParam1->f_4 = func_177(iParam0, *uParam1);
				uParam1->f_5 = uParam1->f_4;
				if (func_3(Param4.f_2, 8))
				{
					func_171(iParam0, uParam1, 0, bParam12, 0);
					*uParam3 = 0;
					return 1;
				}
				func_178(uParam1);
			}
			*uParam3 = 0;
			uParam1->f_9 = 2;
			break;
		case 1:
			if (func_179(uParam1, uParam3, uParam11, bParam2, bParam13))
			{
				if (!bParam13 && func_180(BUILTIN::VDIST(Global_36, *uParam1), iParam0))
				{
					uParam1->f_9 = 2;
				}
				else
				{
					uParam1->f_9 = 5;
				}
			}
			break;
		case 2:
			if (func_89(iParam0, 128))
			{
				if (!func_181(uParam1, &bVar3))
				{
					if (bVar3)
					{
						return func_176(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					return 0;
				}
			}
			else
			{
				func_173(iParam0, &fVar1, &fVar2, &iVar0, 0);
				if (BUILTIN::VDIST2(*uParam1, Global_36) < BUILTIN::TO_FLOAT(iVar0))
				{
					if (!func_178(uParam1))
					{
						return func_176(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					else
					{
						uParam1->f_9 = 3;
					}
				}
				else
				{
					uParam1->f_9 = 3;
				}
			}
			*uParam3 = 0;
			break;
		case 3:
			if (func_182(iParam0, Param4.f_1, uParam1, Param4, bParam14))
			{
				func_171(iParam0, uParam1, bParam2, bParam12, 0);
				*uParam3 = 0;
				return 1;
			}
			else
			{
				*uParam3 = 0;
				uParam1->f_9 = 5;
				return func_176(uParam1, uParam3, uParam11, bParam2, 12, 1000);
			}
			break;
		case 5:
			if (uParam1->f_8 < 12)
			{
				uParam1->f_9 = 0;
			}
			break;
	}
	if (bParam2)
	{
		func_42("BEAT_SCAN", 2000, 0, 1, 0, 0, -1, -1, 0);
	}
	if (uParam1->f_8 >= 12)
	{
		if (bParam2)
		{
			_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
			func_42("BEAT_FAIL", 4000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam11 = 1;
	}
	return 0;
}

int func_60(var uParam0, int iParam1)
{
	if (func_61(iParam1, 256))
	{
		if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_172) || func_184(iParam1, func_183(uParam0), &(uParam0->f_172)))
		{
			if (func_147(Global_35, 0, 1))
			{
				return ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_172, true, 0);
			}
		}
	}
	return 1;
}

bool func_61(int iParam0, int iParam1)
{
	if (!func_165(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/] && iParam1) != 0;
}

void func_62(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (uParam0->f_176)
	{
		return;
	}
	if (iParam1 != -1)
	{
		func_185(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, IntToFloat(iParam1), IntToFloat(iParam1), 5f, "Custom Sized Ambient Avoidance");
	}
	else if (func_61(uParam0->f_3, 1) && !func_61(uParam0->f_3, 32))
	{
		func_185(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 25f, 25f, 6f, "Ambient Avoidance Wilderness & No Traffic");
	}
	else if (func_61(uParam0->f_3, 2) && !func_61(uParam0->f_3, 32))
	{
		func_185(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 4f, 4f, 5f, "Ambient Avoidance Town & No Traffic");
	}
	else
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(uParam0->f_171, 2228255, 262144, 0, -1, -1, uParam0->f_175);
	POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_171, 0, 0, 0, -1, -1, 0);
	if (bParam3)
	{
		func_186(uParam0->f_171, 1);
	}
	if (func_61(uParam0->f_3, 1))
	{
		func_185(&(uParam0->f_174), uParam0->f_51, 0f, 0f, 0f, VOLUME::_0x3E2A25B2416DD67E(uParam0->f_171) * Vector(3.5f, 3.5f, 3.5f), "Predator Stay Out");
		func_187(uParam0->f_174, 0, 262144, 0, 0);
	}
	if (iParam2 == 0)
	{
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		PED::_0x7C00CFC48A782DC0(uParam0->f_171, iParam2, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	}
}

float func_63(vector3 vParam0)
{
	vector3 vVar0;

	vVar0 = { Global_36 - vParam0 };
	return MISC::GET_HEADING_FROM_VECTOR_2D(vVar0.x, vVar0.y);
}

int func_64(int iParam0)
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

float func_65(int iParam0, vector3 vParam1, bool bParam4)
{
	vector3 vVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	}
	if (bParam4)
	{
		return BUILTIN::VDIST2(vVar0, vParam1);
	}
	return func_144(vVar0, vParam1);
}

Vector3 func_66(vector3 vParam0)
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

float func_67(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return ((Param0 * Param3) + (Param0.f_1 * Param3.f_1));
}

Vector3 func_68(vector3 vParam0, vector3 vParam3, float fParam6)
{
	vector3 vVar0;

	if (vParam0.x < vParam3.x)
	{
		vVar0.x = (vParam0.x - fParam6);
	}
	else
	{
		vVar0.x = (vParam3.x - fParam6);
	}
	if (vParam0.y < vParam3.y)
	{
		vVar0.f_1 = (vParam0.y - fParam6);
	}
	else
	{
		vVar0.f_1 = (vParam3.y - fParam6);
	}
	if (vParam0.z < vParam3.z)
	{
		vVar0.f_2 = (vParam0.z - fParam6);
	}
	else
	{
		vVar0.f_2 = (vParam3.z - fParam6);
	}
	return vVar0;
}

Vector3 func_69(vector3 vParam0, vector3 vParam3, float fParam6)
{
	vector3 vVar0;

	if (vParam0.x > vParam3.x)
	{
		vVar0.x = (vParam0.x + fParam6);
	}
	else
	{
		vVar0.x = (vParam3.x + fParam6);
	}
	if (vParam0.y > vParam3.y)
	{
		vVar0.f_1 = (vParam0.y + fParam6);
	}
	else
	{
		vVar0.f_1 = (vParam3.y + fParam6);
	}
	if (vParam0.z > vParam3.z)
	{
		vVar0.f_2 = (vParam0.z + fParam6);
	}
	else
	{
		vVar0.f_2 = (vParam3.z + fParam6);
	}
	return vVar0;
}

int func_70(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_188(uParam0->f_3);
	iVar1 = func_189(1);
	if (iVar1 > 0)
	{
		iVar0 = (iVar0 + iVar1);
	}
	PED::_0xED9582B3DA8F02B4(iVar0);
	if (PED::_0x5C16855277819BBF() >= iVar0)
	{
		return 1;
	}
	return 0;
}

bool func_71(int iParam0, int iParam1, int iParam2, int iParam3)
{
	return STREAMING::_0x19A6BE7D9C6884D3(iParam0, iParam1, iParam2, iParam3);
}

int func_72()
{
	STREAMING::REQUEST_ANIM_DICT(func_190());
	STREAMING::REQUEST_ANIM_DICT(func_191());
	if (!STREAMING::HAS_ANIM_DICT_LOADED(func_190()))
	{
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(func_191()))
	{
		return 0;
	}
	return 1;
}

void func_73(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_192(&(((*uParam0)[iVar0 /*32*/])->f_1));
		func_192(&(((*uParam0)[iVar0 /*32*/])->f_12));
		iVar0++;
	}
}

void func_74(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (((*uParam0)[iVar0 /*12*/])->f_7 != 0)
		{
			STREAMING::REQUEST_MODEL(((*uParam0)[iVar0 /*12*/])->f_7, false);
		}
		iVar0++;
	}
}

bool func_75(var uParam0)
{
	int iVar0;
	bool bVar1;

	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_193((*uParam0)[iVar0 /*32*/]))
		{
			bVar1 = true;
		}
		iVar0++;
	}
	return !bVar1;
}

int func_76(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (((*uParam0)[iVar0 /*12*/])->f_7 != 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED(((*uParam0)[iVar0 /*12*/])->f_7))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_77(vector3 vParam0, float fParam3, var uParam4, var uParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;

	if (*uParam4 != *uParam5)
	{
		return 0;
	}
	if (iParam7 < 0 || iParam7 >= *uParam4)
	{
		iParam7 = 0;
	}
	if (iParam8 < 0 || iParam8 >= *uParam4)
	{
		iParam8 = (*uParam4 - 1);
	}
	iVar0 = iParam7;
	while (iVar0 <= iParam8)
	{
		if (func_194() || !func_195((*uParam4)[iVar0 /*32*/], (*uParam5)[iVar0], vParam0, fParam3, iParam6, bParam9))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_78()
{
	var uVar0[1];

	uVar0[0] = Global_35;
	PED::_0x34EDDD59364AD74A(&(uLocal_351[1]), &uVar0);
}

void func_79(int iParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "honor_block"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "honor_block");
		}
		iVar0 = (iVar0 || func_196(iParam1));
		DECORATOR::DECOR_SET_INT(iParam0, "honor_block", iVar0);
	}
}

void func_80(int iParam0, bool bParam1, float fParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_198(iParam0, func_190(), func_197(MISC::GET_RANDOM_INT_IN_RANGE(0, 12)), 1148846080, -1065353216, iParam3, 0);
	}
	else
	{
		func_198(iParam0, func_191(), func_197(MISC::GET_RANDOM_INT_IN_RANGE(0, 12)), 1148846080, -1065353216, iParam3, 0);
	}
	if (bParam1)
	{
		func_81(iParam0, fParam2);
	}
}

void func_81(int iParam0, float fParam1)
{
	char* sVar0;
	vector3 vVar1;

	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
	{
		case 0:
			sVar0 = "PD_Ped_Throat_slash";
			break;
		case 1:
			sVar0 = "PD_Blood_face_right";
			break;
		case 2:
			sVar0 = "PD_Blood_face_left";
			break;
	}
	PED::APPLY_PED_DAMAGE_PACK(iParam0, sVar0, 1f, 1f);
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
	{
		case 0:
			sVar0 = "PD_Savage_Fight_Knife_Chest";
			break;
		case 1:
			sVar0 = "PD_Savage_Fight_Arrow_Left_Shoulder";
			break;
		case 2:
			sVar0 = "PD_Savage_Fight_Axe_Back";
			break;
	}
	PED::APPLY_PED_DAMAGE_PACK(iParam0, sVar0, 1f, 1f);
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
	{
		case 0:
			sVar0 = "PD_Fall_death";
			break;
		case 1:
			sVar0 = "PD_Blood_Soak_Left_Arm_Murder_for_Hire_Bump";
			break;
		case 2:
			sVar0 = "PD_Blood_Soak_Right_Arm_Murder_for_Hire_Bump";
			break;
	}
	PED::APPLY_PED_DAMAGE_PACK(iParam0, sVar0, 1f, 1f);
	if (MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) <= fParam1)
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
		func_199(&vVar1, 50, 10, 0);
		GRAPHICS::_0xFA2ECC78A6014D4F(vVar1, 1);
	}
}

void func_82(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (bParam1)
		{
			AUDIO::DISABLE_PED_PAIN_AUDIO(iParam0, true);
		}
		if (bParam2)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 243, true);
		}
		if (Global_35 == iParam0)
		{
		}
		ENTITY::_SET_ENTITY_HEALTH(iParam0, 0, 0);
	}
}

void func_83(var uParam0, int iParam1)
{
	uParam0->f_120 = iParam1;
}

int func_84(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (func_200(iParam0, &(uParam1->f_121)))
	{
		uParam1->f_120++;
		return 1;
	}
	return 0;
}

void func_85()
{
	if ((Local_337[0 /*12*/])->f_7 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_351[1])))
		{
			(Local_337[0 /*12*/])->f_8 = OBJECT::CREATE_OBJECT((Local_337[0 /*12*/])->f_7, Local_14.f_51, true, true, false, false, true);
		}
		if (ENTITY::DOES_ENTITY_EXIST((Local_337[0 /*12*/])->f_8))
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY((Local_337[0 /*12*/])->f_8, &(uLocal_351[1]), PED::GET_PED_BONE_INDEX(&(uLocal_351[1]), 62111), -0.32f, 0.05f, -0.22f, 0f, 53f, 0f, 0, 0, 0, 0, 2, 1, 1, 0);
		}
	}
}

void func_86(var uParam0, int iParam1)
{
	vector3 vVar0;
	int iVar3;

	vVar0 = { func_201(uParam0) };
	iVar3 = func_155(uParam0->f_3, iParam1);
	uParam0->f_185 = iParam1;
	STATS::_0xCA41E86545413B5B(7, 1221649453, -585414509, iVar3, vVar0);
	if (STATS::_0x01F4D242765C6B24(iVar3))
	{
		uParam0->f_186 = 1;
	}
}

void func_87(var uParam0, var uParam1)
{
	if (uParam0->f_2 >= *uParam1)
	{
		if (uParam0->f_2 > uParam0->f_98)
		{
		}
		uParam0->f_2 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1[uParam0->f_2]))
	{
		uParam0->f_98[uParam0->f_2] = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(uParam1[uParam0->f_2], false, false), Global_36, true);
	}
	else
	{
		uParam0->f_98[uParam0->f_2] = 0f;
	}
}

void func_88(var uParam0)
{
	func_10(uParam0, 1);
	func_202(uParam0, 20);
}

bool func_89(int iParam0, int iParam1)
{
	if (!func_165(iParam0))
	{
		return false;
	}
	return (((*Global_1310750)[iParam0 /*111*/])->f_1 && iParam1) != 0;
}

void func_90(var uParam0, var uParam1, int iParam2, int* iParam3)
{
	if (!func_165(iParam2))
	{
		return;
	}
	if (*uParam1)
	{
		return;
	}
	if (func_203())
	{
		func_204(1);
	}
	func_205(iParam2, uParam0->f_43);
	func_206(iParam2, 0, 0, 0, 0);
	if (func_207(iParam2) != -1)
	{
		MISC::_0xD74ACDF7DB8114AF(1);
	}
	AUDIO::START_AUDIO_SCENE("RE_active_location_scene");
	MISC::_0x1096603B519C905F(func_145(uParam0->f_3));
	if (MAP::DOES_BLIP_EXIST(*iParam3))
	{
		MAP::REMOVE_BLIP(iParam3);
	}
	func_208(uParam0, 1, 0);
	*uParam1 = 1;
}

void func_91(var uParam0)
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

void func_92(var uParam0, int iParam1, float fParam2)
{
	bool bVar0;
	float fVar1;

	bVar0 = false;
	if (uParam0->f_178 && func_209())
	{
		bVar0 = true;
	}
	if (!uParam0->f_48 && !func_89(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_90(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_91(&(uParam0->f_121));
			return;
		}
		if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_173))
		{
			if (!func_210(Global_35, uParam0->f_173, 1, 0))
			{
				return;
			}
		}
		fVar1 = func_211(uParam0, bVar0);
		func_212(uParam0->f_121[iParam1 /*9*/], fVar1, 1082130432, 0, 90f, 0, &(uParam0->f_98[iParam1]));
		if (func_213(&(uParam0->f_121), uParam0->f_120, fParam2))
		{
			func_90(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_91(&(uParam0->f_121));
		}
	}
}

int func_93(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;

	fVar0 = 30f;
	fVar1 = 150f;
	if (func_61(uParam2->f_3, 1))
	{
		fVar1 = 150f;
	}
	else
	{
		fVar1 = 70f;
	}
	if (!*uParam1)
	{
		if (iParam0 >= 75 && iParam0 <= 118)
		{
			if (func_214())
			{
				fVar0 = 15f;
			}
		}
		if (func_215(uParam2, fVar0))
		{
			*uParam1 = 1;
		}
	}
	if (!uParam2->f_48)
	{
		if (!bParam3 && func_101(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			return 0;
		}
		if (!func_215(uParam2, fVar1))
		{
			if (!func_58(((*Global_1310750)[uParam2->f_3 /*111*/])->f_38))
			{
				return 0;
			}
		}
		if (!func_216(uParam2->f_3, 2) && func_217(2))
		{
			return 0;
		}
		if (func_61(iParam0, 4194304) || func_61(iParam0, 33554432))
		{
			if (func_218(1))
			{
				return 0;
			}
		}
	}
	if (func_219(Global_35))
	{
		return 0;
	}
	if (func_220(0, 1, 1) && !func_221(iParam0))
	{
		return 0;
	}
	if (!*uParam1 && func_61(iParam0, 128))
	{
		if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (func_222(Global_35, 0))
		{
			return 0;
		}
		if (Global_16)
		{
			return 0;
		}
		if (func_101(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			return 0;
		}
		if (func_223())
		{
			return 0;
		}
		iVar2 = func_225(func_224());
		if (func_226(iVar2))
		{
			if (func_227(Global_36, iVar2))
			{
				return 0;
			}
		}
		if (func_228(Global_36) && !uParam2->f_161)
		{
			return 0;
		}
		if (!uParam2->f_48)
		{
			if (func_229(&(uParam2->f_91), 0, 1084227584, 1, 1))
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_94(var uParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;

	if (func_230(uParam0->f_51))
	{
		func_231(uParam0->f_51, 0);
		fVar0 = func_232(uParam0->f_3);
		iVar2 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(uParam0->f_51, 0f, 0f, 0f, fVar0, fVar0, fVar0, func_233());
		fVar1 = func_151(!func_61(uParam0->f_3, 1), 20f, -1f);
		uParam0->f_51.f_11 = func_235(iVar2, func_234(uParam0->f_3), 1, iParam1, 8, 0, fVar1);
	}
}

void func_95(var uParam0, bool bParam1, int iParam2)
{
	func_236(iParam2);
	if (Global_1572887->f_12 == -1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			return;
		}
		if (Global_1935630->f_12)
		{
			return;
		}
	}
	else
	{
		if (!Global_1225638->f_11)
		{
			return;
		}
		if (Global_1225638->f_12)
		{
			return;
		}
	}
	if (bParam1)
	{
		uParam0->f_10 = 0;
	}
	uParam0->f_5 = iParam2;
	if (Global_1572887->f_12 == -1)
	{
		uParam0->f_13 = Global_1935630->f_44;
	}
	else
	{
		uParam0->f_13 = func_237(0);
	}
	switch (uParam0->f_6)
	{
		case 0:
			if (*uParam0 & 16 != 0)
			{
				if (!*uParam0 & 33554432 != 0)
				{
					if (uParam0->f_13 == joaat("weapon_thrown_dynamite"))
					{
						if (PED::IS_PED_PLANTING_BOMB(Global_35))
						{
							func_50(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_218(1))
						{
							func_50(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_218(1) || *uParam0 & 8192 != 0))
				{
					func_49(uParam0, 33554432);
				}
			}
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
	if (!uParam0->f_1 & 1024 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
		{
			if (func_238(uParam0))
			{
				uParam0->f_15 = func_115();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_115() - uParam0->f_15) > 500)
			{
				if (!PED::IS_PED_ON_MOUNT(uParam0->f_14))
				{
					uParam0->f_14 = 0;
					uParam0->f_15 = 0;
				}
			}
		}
	}
	uParam0->f_6++;
	if (uParam0->f_6 >= 4)
	{
		uParam0->f_6 = 0;
		uParam0->f_7++;
		if (uParam0->f_7 > 4)
		{
			uParam0->f_7 = 0;
		}
	}
	func_239(uParam0);
}

int func_96(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!EVENT::_0x1D1B448D719415AB(iParam0))
	{
		return 0;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(iParam0, 0, 0);
	if (iVar0 == 0)
	{
		return 0;
	}
	switch (iVar0)
	{
		case -196899787:
		case 178452260:
		case 869302489:
		case 1589923363:
			iVar1 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar0, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar1))
			{
				return 0;
			}
			iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
			if (!PED::IS_PED_HUMAN(iVar2))
			{
				return 0;
			}
			if (DECORATOR::DECOR_EXIST_ON(iVar2, "bIgnoreDamageChecking"))
			{
				return 0;
			}
			if (iVar2 == Global_1935630->f_33)
			{
				return 0;
			}
			if (iVar2 == Global_1935630->f_32)
			{
				return 0;
			}
			if (!func_240(iParam0, uParam1, iVar2))
			{
				return 0;
			}
			if (func_241(iParam0, iVar2) <= func_242(uParam1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_97(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_243(iParam2, 1, 1, 1, 0))
	{
		func_50(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_244(uParam1, 1);
	func_245();
}

int func_98(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_246(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_247(uParam1);
			if (func_248(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = func_249(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_244(uParam1, 1);
						return 1;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_244(uParam1, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_99(int iParam0, int iParam1, var uParam2)
{
	float fVar0;
	float fVar1;

	if (iParam1 == 0)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	fVar0 = 85f;
	if (func_250(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_247(uParam2);
		if (func_248(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > func_249(uParam2)
				{
					func_244(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_100(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	if (!PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar0))
	{
		return 0;
	}
	if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, 0, 0))
	{
		if (iVar2 == iVar0)
		{
			return 0;
		}
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		return 0;
	}
	if (Global_1935630->f_40 != 0)
	{
		if (PED::_0xB676EFDA03DADA52(Global_1935630->f_40, 1) == iParam0)
		{
			return 0;
		}
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (func_240(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_249(uParam1)
		{
			fVar3 = func_247(uParam1);
			if (uParam1->f_12 < fVar3)
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar1, 17))
				{
					if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, fVar3, -1f, -1f) && PED::_0x06087579E7AA85A9(iParam0, iVar1, -1f, fVar3, -1f, -1f))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_101(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_251(bParam1, iParam2, bParam3);
	}
	if (Global_1572887->f_12 != -1)
	{
		if (iParam0 == Global_1225638->f_10)
		{
			if (!Global_1225638->f_11)
			{
				return 0;
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
		{
			return 0;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		return 0;
	}
	if (LAW::_0xAD401C63158ACBAA(iParam0))
	{
		LAW::_0xCBFB4951F2E3934C(iParam0, &Var0);
		if ((bParam3 || Var0.f_10 > 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(iParam0) > 0)
		{
			return 1;
		}
	}
	else if (iParam2 && !LAW::_0x148E7AC8141C9E64(iParam0) == 1370593166)
	{
		return 0;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (LAW::_0x532C5FDDB986EE5C(iParam0, iVar17, &Var18))
		{
			if (Var18.f_10 && (bParam3 || LAW::_0xDAEFDFDB2AEECE37(Var18, Var18.f_7) > 0))
			{
				return 1;
			}
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (LAW::_0x69E181772886F48B(iParam0) || LAW::_0xF0FBFB9AB15F7734(iParam0, 0, 0))
		{
			if (bParam3 || LAW::_0xE083BEDA81709891(iParam0) > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_102(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_115();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return 1;
	}
	return 0;
}

int func_103(var uParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_252(uParam2);
			if (!WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) || Global_1935630->f_46 == joaat("weapon_unarmed"))
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
			else if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && WEAPON::_0xEA522F991E120D45(Global_1935630->f_46))
			{
				PED::_0xD355E2F1BB41087E(iParam1, 5f);
			}
			else
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
		}
		if ((!WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) || Global_1935630->f_46 == joaat("weapon_unarmed")) || (WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && WEAPON::_0x5809DBCA0A37C82B(Global_1935630->f_46)))
		{
			fVar2 = 3f;
			iVar1 = 3000;
		}
		else
		{
			fVar2 = 1f;
			iVar1 = 1000;
		}
		if (PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), iParam1, iVar1) && PED::_0x285D36C5C72B0569(uParam0) <= fVar2)
		{
			if (func_111(uParam2, iParam1))
			{
				func_244(uParam2, 1);
				return 1;
			}
		}
	}
	return 0;
}

int func_104(var uParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_12 < IntToFloat(func_253(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && !WEAPON::_0x5809DBCA0A37C82B(Global_1935630->f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_111(uParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_244(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_105(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_254(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(217247011, vVar0, uParam2->f_22))
				{
					func_244(uParam2, 1);
					return 1;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(956330317, vVar0, uParam2->f_27))
				{
					func_244(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-966930978, vVar0, uParam2->f_22))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("weapon_thrown_dynamite"), uParam2->f_26, &vVar4, 0, 0);
					if (func_255(iParam1, vVar0, vVar4))
					{
						func_244(uParam2, 1);
						return 1;
					}
				}
				break;
		}
	}
	else
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(217247011, vVar0, uParam2->f_22))
				{
					func_244(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-966930978, vVar0, uParam2->f_22))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("weapon_thrown_dynamite"), uParam2->f_26, &vVar7, 0, 0);
					if (func_255(iParam1, vVar0, vVar7))
					{
						func_244(uParam2, 1);
						return 1;
					}
				}
				break;
		}
	}
	return 0;
}

int func_106(int iParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	vector3 vVar2[2];
	vector3 vVar9;
	bool bVar12;
	bool bVar13;

	vVar9 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_240(iParam0, uParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_256(&(Global_1935630->f_34[iVar0]));
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_257(&(Global_1935630->f_34[iVar0])))
			{
				if (fVar1 < 35f)
				{
					if ((DECORATOR::DECOR_EXIST_ON(&(Global_1935630->f_34[iVar0]), "HorseTeamA") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA")) || (DECORATOR::DECOR_EXIST_ON(&(Global_1935630->f_34[iVar0]), "HorseTeamB") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB")))
					{
						*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
						*(vVar2[1 /*3*/]) = { vVar9 };
						uParam1->f_10 = iParam0;
						return 1;
					}
				}
			}
			if (func_258(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_259(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_260(uParam1, iParam0, fVar1, iVar0))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_107(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar5;
	vector3 vVar8;

	if (!EVENT::_0x1D1B448D719415AB(*iParam0))
	{
		return 0;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(*iParam0, 0, 0);
	switch (iVar0)
	{
		case -1695849405:
		case 2044016570:
			iVar1 = EVENT::_0x822A001BCEA5BD81(*iParam0, iVar0, 0, 0);
			iVar2 = EVENT::_0x38497F139981C5C9(*iParam0, iVar0, 0, 0);
			vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar1, false, false) };
			vVar8 = { ENTITY::GET_ENTITY_COORDS(iVar2, false, false) };
			EVENT::_0x1A5C5D350068A673(*iParam0, 0);
			return 1;
	}
	return 0;
}

int func_108(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_115();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

int func_109(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!bParam3)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iParam0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iParam0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, 1, 1))
			{
				return 1;
			}
			iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar1, 1, 1))
				{
					return 1;
				}
			}
			if (PED::IS_PED_ON_MOUNT(iVar0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(iVar0)))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PED::GET_MOUNT(iVar0), 1, 1))
					{
						return 1;
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
					{
						return 1;
					}
				}
			}
		}
	}
	else if (!bParam2)
	{
		if (func_261(iVar0, &iVar2))
		{
			if ((PED::IS_PED_RAGDOLL(iParam0) || PED::_0x947E43F544B6AB34(iParam0, PLAYER::PLAYER_ID(), 10, 1000)) || (!bParam4 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar2, iParam0)))
			{
				return 1;
			}
		}
	}
	if (!bParam2)
	{
		if (PED::_0x29FCE825613FEFCA(iParam0, 400))
		{
			return 1;
		}
	}
	if (func_262(iVar0, iParam0))
	{
		return 1;
	}
	if (PED::_0xD0B7AEB56229D317(PLAYER::PLAYER_PED_ID()) == iParam0)
	{
		if (PED::_0x0E99E3BF11BB6367(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_BEING_JACKED(iParam0))
		{
			if (PED::GET_PEDS_JACKER(iParam0) == iVar0)
			{
				return 1;
			}
		}
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(iVar0, 8, 0))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, true) || PED::IS_PED_BEING_STEALTH_KILLED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_110(var uParam0, int iParam1)
{
	int iVar0;

	if (!DECORATOR::DECOR_EXIST_ON(iParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (DECORATOR::DECOR_SET_INT(iParam1, "iDamageFrame", uParam0->f_5))
		{
		}
	}
	else if (uParam0->f_5 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

int func_111(var uParam0, int iParam1)
{
	if (func_263(uParam0))
	{
		return 1;
	}
	if (PED::_0x29FCE825613FEFCA(iParam1, 400))
	{
		return 1;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iParam1, true))
	{
		return 0;
	}
	if ((PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 8, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 9, true)) || PED::IS_PED_BEING_STEALTH_KILLED(iParam1))
	{
		return 0;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 16, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 10, true))
	{
		return 0;
	}
	if (PED::_0xB65A4DAB460A19BD(Global_35) != 0)
	{
		return 1;
	}
	if (!PED::IS_PED_RAGDOLL(iParam1))
	{
		return 1;
	}
	return 0;
}

int func_112(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return 1;
		}
		if (func_264(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_113()
{
}

int func_114(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
	if (iVar0 != 0 && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iVar0)))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
		if (func_265(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_115();
			return 1;
		}
		else if (VEHICLE::_0xA19447D83294E29F(iVar0, &iVar5, &iVar4))
		{
			if (iVar5 <= 0)
			{
				return 0;
			}
			else if (iVar4 == iVar5)
			{
				iVar6 = 0;
				while (iVar6 < iVar4)
				{
					iVar7 = VEHICLE::_0xA8BA0BAE0173457B(iVar0, iVar6);
					if (ENTITY::DOES_ENTITY_EXIST(iVar7))
					{
						if (func_266(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_9 = func_115();
								return 1;
							}
						}
					}
					iVar6++;
				}
			}
		}
	}
	return 0;
}

int func_115()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

int func_116()
{
	if (Global_1935630->f_42 == 0)
	{
		return 0;
	}
	if (Global_1935630->f_42 == Global_1935630->f_40)
	{
		return 0;
	}
	if (Global_1935630->f_43 <= 0)
	{
		return 0;
	}
	if ((func_115() - Global_1935630->f_43) >= 10000)
	{
		return 0;
	}
	return 1;
}

int func_117(var uParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
	{
		return 0;
	}
	if (!PED::IS_PED_HUMAN(iParam1))
	{
		return 0;
	}
	fVar0 = func_242(uParam0);
	if (uParam0->f_12 > func_267(uParam0) && uParam0->f_12 > fVar0)
	{
		return 0;
	}
	iVar2 = func_268(iParam1);
	iVar1 = func_269(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, Global_35, 1, 0) == 1)) || ((PED::_0x06087579E7AA85A9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, uParam0->f_14, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, uParam0->f_14, 1, 0) == 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_118(int iParam0, int iParam1, var uParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (uParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return func_270(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

int func_119(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (*uParam1 & 67108864 != 0)
	{
		return 1;
	}
	if (Global_1935630->f_24)
	{
		return 1;
	}
	if (*uParam1 & 33554432 != 0)
	{
		if (func_271(iParam0, uParam1, 1))
		{
			return 1;
		}
		if ((PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17)) && PED::_0x7F9B9791D4CB71F6(iParam0, Global_35, 1, 0) == 1)
		{
			return 1;
		}
	}
	iVar0 = PED::GET_JACK_TARGET(Global_35);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, true))
	{
		if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return 1;
		}
	}
	if (!EVENT::_0x1D1B448D719415AB(iParam0))
	{
		return 0;
	}
	iVar1 = EVENT::_0x796EECFF0C6D39BE(iParam0, 0, 0);
	if (iVar1 == 0)
	{
		return 0;
	}
	switch (iVar1)
	{
		case -2027383723:
		case -870494873:
		case 73464052:
		case 1201762715:
			iVar2 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (iVar4 != Global_35)
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			if (ENTITY::_0x88AD6CC10D8D35B2(iVar5))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			return 1;
		case -1601932249:
			iVar2 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (PED::_0x06087579E7AA85A9(iParam0, iVar4, -1f, -1f, -1f, -1f) && PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar4, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
				{
					if (!func_272(uParam1, iParam0))
					{
						if (func_266(iVar4, Global_36, 1) < 7f)
						{
							return 1;
						}
					}
				}
			}
			break;
	}
	return 0;
}

int func_120(int iParam0, var uParam1)
{
	if (!func_273(0))
	{
		return 0;
	}
	if (PED::IS_PED_FACING_PED(iParam0, Global_35, 90f))
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
		{
			return 1;
		}
	}
	return 0;
}

int func_121(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_115();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_122(int iParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_123(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_115();
	}
	else if (func_115() - uParam1->f_4) > func_274(uParam1)
	{
		return func_275(iParam0, uParam1, 0, -1082130432);
	}
	return 0;
}

int func_124(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = PED::GET_PED_SOURCE_OF_DEATH(iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam1, "bIgnoreDamageChecking"))
	{
		return 0;
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (Global_35 == iVar1 || Global_1935630->f_40 == iVar1)
	{
		return 1;
	}
	return 0;
}

int func_125(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam1->f_5)
	{
		func_95(uParam1, 0, iVar0);
	}
	if (fParam3 > 0f)
	{
		uParam1->f_12 = fParam3;
	}
	else
	{
		uParam1->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, false, false));
	}
	if (!Global_1935630->f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam1->f_1 & 2 != 0)
			{
				if (func_108(uParam1, 4000))
				{
					if ((func_109(iParam0, Global_1935630->f_41, *uParam1 & 128 != 0, 0, *uParam1 & 256 != 0) && func_110(uParam1, iParam0)) && func_111(uParam1, iParam0))
					{
						func_113();
						*uParam2 = 2;
						func_97(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
			}
		}
		if (!uParam1->f_1 & 2 != 0)
		{
			if (uParam1->f_12 < 4f)
			{
				if (func_108(uParam1, 4000))
				{
					if ((func_109(iParam0, Global_1935630->f_41, *uParam1 & 128 != 0, 1, *uParam1 & 256 != 0) && func_110(uParam1, iParam0)) && func_111(uParam1, iParam0))
					{
						func_113();
						*uParam2 = 2;
						func_97(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam1 & 131072 == 0)
						{
							if (func_112(iParam0, Global_1935630->f_41))
							{
								func_113();
								*uParam2 = 2;
								func_97(iParam0, uParam1, *uParam2);
								return 1;
							}
						}
					}
				}
			}
			else if (Global_1935630->f_41 != 0)
			{
				if (Global_1935630->f_40 == 0)
				{
					if (*uParam1 & 131072 == 0)
					{
						if (func_112(iParam0, Global_1935630->f_41))
						{
							func_113();
							*uParam2 = 2;
							func_97(iParam0, uParam1, *uParam2);
							return 1;
						}
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam1 & 131072 == 0)
				{
					if (func_116())
					{
						if (func_112(iParam0, Global_1935630->f_42))
						{
							func_113();
							*uParam2 = 2;
							func_97(iParam0, uParam1, *uParam2);
							return 1;
						}
					}
				}
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_102(uParam1, 1065353216))
			{
				if (!uParam1->f_1 & 4 != 0)
				{
					if (func_103(Global_35, iParam0, uParam1))
					{
						func_113();
						*uParam2 = 4;
						func_97(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
				if (!uParam1->f_1 & 256 != 0)
				{
					if (func_104(Global_35, iParam0, uParam1))
					{
						func_113();
						*uParam2 = 256;
						func_97(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
			}
		}
		if (!uParam1->f_1 & 131072 != 0)
		{
			if (func_276(iParam0, uParam1))
			{
				func_113();
				*uParam2 = 131072;
				func_97(iParam0, uParam1, *uParam2);
				return 1;
			}
		}
		if (*uParam1 & 4 != 0)
		{
			if (func_277(iParam0, uParam1))
			{
				func_113();
				*uParam2 = 262144;
				func_97(iParam0, uParam1, *uParam2);
				return 1;
			}
		}
	}
	return 0;
}

void func_126()
{
	if (iLocal_371 < 4)
	{
		if (func_65(Global_35, Local_14.f_51, 0) < 10000f)
		{
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		}
	}
}

void func_127()
{
	if (!iLocal_434)
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_351[0])) && TASK::IS_PED_ACTIVE_IN_SCENARIO(&(uLocal_351[0]), 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_351[2])))
			{
				func_137(&(uLocal_351[2]), 1, 0);
				PED::_0x6569F31A01B4C097(&(uLocal_351[2]), 4, 0);
			}
			iLocal_434 = 1;
		}
	}
}

void func_128()
{
	if (iLocal_367 != 3)
	{
		return;
	}
	if ((!iLocal_436 && !iLocal_437) && func_135(&(uLocal_351[0]), &(uLocal_351[2]), 1) < 225f)
	{
		func_278(&(uLocal_351[0]), "WHOA", 291934926, 0, 1, 0, 0, 1);
		if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_351[0])))
		{
			AUDIO::STOP_PED_SPEAKING(&(uLocal_351[0]), false);
		}
		iLocal_436 = 1;
	}
	if (!iLocal_437 && (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_461, true, 0) || func_279(PLAYER::PLAYER_ID(), uLocal_351[0])))
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_351[0])))
		{
			AUDIO::STOP_PED_SPEAKING(&(uLocal_351[0]), false);
		}
		iLocal_437 = 1;
	}
}

void func_129()
{
	if (iLocal_438)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_462, true, 0))
	{
		if (!func_131(&uLocal_446))
		{
			func_133(&uLocal_446);
		}
		else if (func_280(&uLocal_446))
		{
			func_282(&uLocal_446, func_281(&uLocal_446), 0);
		}
	}
	else if (func_131(&uLocal_446))
	{
		func_283(&uLocal_446);
	}
	if (func_130(&uLocal_446, 3f))
	{
		VOLUME::_0xD52DF30355EA7C8E(iLocal_462, &(uLocal_351[0]), 1);
		VOLUME::_0x4A8FEFC43FD8AC9B(iLocal_462, 0, 1);
		iLocal_438 = 1;
	}
}

int func_130(var uParam0, float fParam1)
{
	if (func_134(uParam0, fParam1))
	{
		func_284(uParam0);
		return 1;
	}
	return 0;
}

bool func_131(var uParam0)
{
	return func_285(*uParam0, 1);
}

int func_132(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iParam0, true);
	}
	return 0;
}

void func_133(var uParam0)
{
	func_286(uParam0, 0f);
}

int func_134(var uParam0, float fParam1)
{
	if (!func_131(uParam0))
	{
		return 0;
	}
	if (func_281(uParam0) > fParam1)
	{
		return 1;
	}
	return 0;
}

float func_135(int iParam0, int iParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0f;
	}
	if (bParam2)
	{
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
	}
	return func_144(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
}

void func_136(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	TASK::_TASK_START_SCENARIO_IN_PLACE(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, 0);
}

void func_137(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		return;
	}
	else if (ENTITY::_0x9A100F1CF4546629(iParam0))
	{
		iVar0 = func_287(iParam0);
		func_288(iVar0, ENTITY::_0xC346A546612C49A9(iParam0));
	}
	if (bParam1)
	{
		func_289(iParam0, 0);
	}
}

int func_138(var uParam0, float fParam1, int iParam2, float fParam3, int iParam4, float fParam5, bool bParam6, float fParam7, int iParam8, float fParam9, bool bParam10, bool bParam11)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	float fVar4;

	bVar1 = false;
	fVar2 = func_211(uParam0, bVar1);
	fVar3 = fVar2;
	if (!bParam11 && fVar2 < fParam3)
	{
	}
	if (fParam5 > 0f)
	{
		if (ENTITY::GET_ENTITY_SPEED(Global_35) > fParam5)
		{
			return 0;
		}
	}
	if (fParam7 > 0f)
	{
		if (MISC::ABSF((Global_36.f_2 - uParam0->f_51.f_2)) >= fParam7)
		{
			return 0;
		}
	}
	if (uParam0->f_178 && func_209())
	{
		bVar1 = true;
		fVar3 = func_151(bVar1, fParam9, fVar2);
	}
	if (uParam0->f_48 && (!bParam10 || (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_173) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_173, true, 0))))
	{
		if (iParam4 > 1)
		{
			iVar0 = 0;
			while (iVar0 < uParam0->f_121)
			{
				func_212(uParam0->f_121[iVar0 /*9*/], fVar3, 1082130432, 1, 90f, 0, 0);
				iVar0++;
			}
		}
		else
		{
			func_212(uParam0->f_121[0 /*9*/], fVar3, 1082130432, 1, 90f, 0, 0);
		}
		if (func_213(&(uParam0->f_121), iParam4, fParam1))
		{
			func_91(&(uParam0->f_121));
			if (uParam0->f_186)
			{
				STATS::_0xB2A38826E5886E83(func_155(uParam0->f_3, uParam0->f_185), 0);
			}
			return 1;
		}
	}
	fVar4 = (fParam3 * fParam3);
	iVar0 = 0;
	while (iVar0 < uParam0->f_121)
	{
		if (!ENTITY::IS_ENTITY_DEAD((uParam0->f_121[iVar0 /*9*/])->f_6))
		{
			if (BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS((uParam0->f_121[iVar0 /*9*/])->f_6, true, false)) < fVar4)
			{
				if (!uParam0->f_48)
				{
					if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_173) && !(iParam8 && PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true)))
					{
						if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_173, false, 0))
						{
							return 0;
						}
					}
					if (bParam6)
					{
						func_90(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
					}
				}
				func_91(&(uParam0->f_121));
				if (uParam0->f_186)
				{
					STATS::_0xB2A38826E5886E83(func_155(uParam0->f_3, uParam0->f_185), 0);
				}
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_139(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam1 == 2104565373 && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iParam0))
			{
				return 1;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1) == 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_140(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, int iParam7, int iParam8, bool bParam9, int iParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_290(iParam0, iParam1, sParam2, iParam3, fParam4, iParam5, bParam6, iParam7, iParam8, bParam9, iParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

int func_141(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam1[iVar0]) && iParam0 != uParam1[iVar0])
		{
			if (func_135(iParam0, uParam1[iVar0], 1) < fParam3)
			{
				*uParam2 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_142()
{
	if (!func_291(Global_1395482->f_1))
	{
		return 0;
	}
	return func_292(Global_1395482->f_1, 32);
}

bool func_143(int iParam0)
{
	if (func_61(iParam0, 1))
	{
		return false;
	}
	return (1 == func_293(iParam0) || 2 == func_293(iParam0));
}

float func_144(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

char* func_145(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "REAA";
		case 75:
			return "REBBR";
		case 1:
			return "REAM";
		case 2:
			return "REAP";
		case 3:
			return "REAMD";
		case 76:
			return "REBE";
		case 4:
			return "REBT";
		case 77:
			return "REBTE";
		case 5:
			return "REBAT";
		case 6:
			return "REBOT";
		case 7:
			return "REBNT";
		case 78:
			return "REBGP";
		case 8:
			return "REBUB";
		case 9:
			return "RECA";
		case 10:
			return "RECG";
		case 11:
			return "RECP";
		case 12:
			return "RECHR";
		case 79:
			return "RECQ";
		case 13:
			return "RECCT";
		case 14:
			return "RECW";
		case 80:
			return "REDAA";
		case 81:
			return "REDAB";
		case 82:
			return "REDAS";
		case 83:
			return "REDEB";
		case 84:
			return "REDJ";
		case 15:
			return "REDLP";
		case 85:
			return "REDIB";
		case 86:
			return "REDOM";
		case 87:
			return "REDM";
		case 16:
			return "REPND";
		case 88:
			return "REDD";
		case 89:
			return "REDB";
		case 90:
			return "REDW";
		case 17:
			return "REESC";
		case 18:
			return "REEX";
		case 91:
			return "REFF";
		case 19:
			return "REFT";
		case 92:
			return "REFR";
		case 20:
			return "REFO";
		case 21:
			return "REFD";
		case 93:
			return "REFND";
		case 22:
			return "REFC";
		case 23:
			return "REGCR";
		case 94:
			return "REGPE";
		case 24:
			return "REGP";
		case 119:
			return "REHOC";
		case 27:
			return "REHOR";
		case 28:
			return "REHR";
		case 29:
			return "REIK";
		case 30:
			return "REIR";
		case 95:
			return "REIT";
		case 31:
			return "REKV";
		case 32:
			return "REKD";
		case 33:
			return "REKR";
		case 34:
			return "REKS";
		case 35:
			return "RELRU";
		case 96:
			return "REETE";
		case 36:
			return "RELK";
		case 37:
			return "RELP";
		case 97:
			return "RELD";
		case 98:
			return "RELDR";
		case 38:
			return "RELF";
		case 39:
			return "RELM";
		case 40:
			return "REMC";
		case 41:
			return "REMUC";
		case 42:
			return "RENS";
		case 99:
			return "REOTE";
		case 100:
			return "REOR";
		case 43:
			return "REOL";
		case 44:
			return "REOT";
		case 101:
			return "REPA";
		case 102:
			return "REPT";
		case 103:
			return "REPP";
		case 45:
			return "RESB";
		case 104:
			return "REPS";
		case 46:
			return "REPCA";
		case 47:
			return "REPCS";
		case 48:
			return "REPO";
		case 105:
			return "REPCH";
		case 49:
			return "REPBR";
		case 50:
			return "REPW";
		case 106:
			return "REPH";
		case 107:
			return "RERI";
		case 51:
			return "RERP";
		case 108:
			return "RERD";
		case 53:
			return "RESA";
		case 54:
			return "RESAF";
		case 56:
			return "RESWA";
		case 55:
			return "RESW";
		case 57:
			return "RESS";
		case 109:
			return "RESO";
		case 58:
			return "RESKP";
		case 110:
			return "RESAM";
		case 59:
			return "RESH";
		case 60:
			return "REHU";
		case 61:
			return "RESSH";
		case 62:
			return "RESR";
		case 111:
			return "RESTF";
		case 112:
			return "REKT";
		case 67:
			return "RETC";
		case 68:
			return "RETP";
		case 113:
			return "REBUR";
		case 114:
			return "RETWC";
		case 115:
			return "RETR";
		case 117:
			return "RETT";
		case 116:
			return "RETWW";
		case 63:
			return "RETA";
		case 64:
			return "RETRB";
		case 65:
			return "RETW";
		case 66:
			return "RETH";
		case 69:
			return "REVC";
		case 70:
			return "REWTH";
		case 71:
			return "REWA";
		case 118:
			return "REWC";
		case 72:
			return "REWH";
		case 73:
			return "REWM";
		case 74:
			return "REWMC";
		default:
			break;
	}
	return "XXXX";
}

void func_146(int iParam0, int iParam1)
{
	if (!func_165(iParam0))
	{
		return;
	}
	((*Global_1310750)[iParam0 /*111*/])->f_1 = (((*Global_1310750)[iParam0 /*111*/])->f_1 || iParam1);
}

bool func_147(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_294(iParam0, iParam1);
}

void func_148(int iParam0, bool bParam1)
{
	if (func_147(iParam0, 0, 1))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
		func_295(iParam0, 1088421888, 0, 0);
		if (!bParam1)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
		}
	}
}

int func_149(var uParam0, var uParam1)
{
	if (func_61(uParam0->f_3, 16777216))
	{
		if (func_296(*uParam1) != -1 || ENTITY::GET_ENTITY_MODEL(*uParam1) == joaat("g_m_m_unibrontegoons_01"))
		{
			return 1;
		}
	}
	return 0;
}

void func_150(var uParam0)
{
	PED::SET_PED_CONFIG_FLAG(*uParam0, 6, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 4, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 494, true);
}

float func_151(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_152(int iParam0, float fParam1, float fParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	float fVar2;

	if (!Global_1935630->f_12 && (!bParam4 || func_147(iParam0, 0, 1)))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam3))
		{
			iParam3 = PED::GET_MOUNT(Global_35);
		}
		if (iParam3 != iParam0)
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, false);
			}
			TASK::CLEAR_PED_TASKS(iParam0, 1, 0);
			TASK::CLEAR_PED_SECONDARY_TASK(iParam0);
			fVar2 = func_151(fParam2 >= 0f, fParam2, BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), Global_36));
			if (fVar2 > 25f && ENTITY::IS_ENTITY_OCCLUDED(iParam0))
			{
				func_297(&iParam0);
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_SMART_FLEE_PED(0, Global_35, 1000f, -1, 0, fParam1, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::_TASK_PERFORM_SEQUENCE_2(iParam0, iVar0, 0.1f, 0.5f);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				iVar1 = PED::GET_MOUNT(iParam0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					PED::_0x39A2FC5AF55A52B1(iVar1, -1);
				}
				PED::_0x39A2FC5AF55A52B1(iParam0, -1);
			}
		}
	}
}

void func_153(var uParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_171))
	{
		func_298(uParam0->f_171);
		POPULATION::_0xA1CFB35069D23C23(uParam0->f_171);
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_171);
	}
	if (uParam0->f_51.f_7 != 0)
	{
		GRAPHICS::DESTROY_TRACKED_POINT(uParam0->f_51.f_7);
		uParam0->f_51.f_7 = 0;
	}
	func_39(uParam0);
	func_299(uParam0);
	func_300(uParam0);
	if (!func_301(uParam0))
	{
		if (VOLUME::_0xF6A8A652A6B186CD(uParam0->f_51.f_11))
		{
			VOLUME::_0xFDFECC6EE4491E11(uParam0->f_51.f_11);
		}
		func_231(uParam0->f_51, 0);
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_51.f_6))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_51.f_6));
	}
	if (uParam0->f_48)
	{
		func_245();
	}
	if (!func_302(uParam0->f_3) && !func_61(uParam0->f_3, 256))
	{
		func_303(uParam0->f_3, 1, 0, 15, 0, 0, 0, 1);
	}
	func_40(uParam0->f_173);
	func_40(uParam0->f_172);
}

void func_154(var uParam0)
{
	if (MAP::DOES_BLIP_EXIST(uParam0->f_181))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_181));
	}
}

int func_155(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 <= 74)
	{
		switch (iParam0)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						return -1361771813;
					case 1:
						return -2064800864;
					case 2:
						return -1459648117;
					default:
						break;
				}
				return 1764738688;
			case 1:
				return -1738452225;
			case 2:
				return -823209843;
			case 3:
				switch (iParam1)
				{
					case 0:
						return 659020347;
					case 1:
						return 1082838675;
					default:
						break;
				}
				return -163609424;
			case 4:
				return -230454431;
			case 5:
				switch (iParam1)
				{
					case 0:
						return -255547597;
					case 1:
						return -779276698;
					default:
						break;
				}
				return 1848195968;
			case 6:
				switch (iParam1)
				{
					case 0:
						return 500453091;
					case 1:
						return -561787596;
					default:
						break;
				}
				return 199182688;
			case 7:
				switch (iParam1)
				{
					case 0:
						return -1050372802;
					case 1:
						return 1805609920;
					default:
						break;
				}
				return -1157729664;
			case 8:
				switch (iParam1)
				{
					case 0:
						return 1085166521;
					case 1:
						return -1805473967;
					default:
						break;
				}
				return -185185008;
			case 9:
				switch (iParam1)
				{
					case 0:
						return 1886894479;
					default:
						break;
				}
				return 1331739776;
			case 10:
				switch (iParam1)
				{
					case 0:
						return 124534071;
					default:
						break;
				}
				return -2125510912;
			case 11:
				switch (iParam1)
				{
					case 0:
						return -1439039856;
					case 1:
						return 1422484995;
					default:
						break;
				}
				return 2012422144;
			case 12:
				return 1004100858;
			case 13:
				switch (iParam1)
				{
					case 0:
						return 1957341991;
					case 1:
						return 1719865048;
					default:
						break;
				}
				return -462840960;
			case 14:
				switch (iParam1)
				{
					case 0:
						return 1333995618;
					case 1:
						return -1541809666;
					default:
						break;
				}
				return -2063125376;
			case 15:
				switch (iParam1)
				{
					case 0:
						return 1037952769;
					case 1:
						return 396925591;
					case 2:
						return -1318629866;
					default:
						break;
				}
				return 237843904;
			case 16:
				return 1583531269;
			case 17:
				return -728402510;
			case 18:
				switch (iParam1)
				{
					case 0:
						return -1622801117;
					case 1:
						return 1895496017;
					default:
						break;
				}
				return -1622801152;
			case 19:
				switch (iParam1)
				{
					case 0:
						return -93589059;
					default:
						break;
				}
				return -110846632;
			case 20:
				switch (iParam1)
				{
					case 0:
						return 1513876565;
					case 1:
						return 136987683;
					case 2:
						return -405984699;
					default:
						break;
				}
				return -1296870656;
			case 21:
				return 856957155;
			case 22:
				return 199192985;
			case 23:
				switch (iParam1)
				{
					case 0:
						return 1607827063;
					case 1:
						return -548752013;
					case 2:
						return -1799015093;
					case 3:
						return -115167180;
					default:
						break;
				}
				return 1480735360;
			case 24:
				switch (iParam1)
				{
					case 0:
						return -1188012136;
					case 1:
						return -195398422;
					default:
						break;
				}
				return 1888284288;
			case 25:
				switch (iParam1)
				{
					case 0:
						return 1245222967;
					case 1:
						return -140925504;
					default:
						break;
				}
				return 1262841600;
			case 26:
				return -1065165983;
			case 27:
				switch (iParam1)
				{
					case 0:
						return -1995068882;
					case 1:
						return -879341975;
					case 2:
						return 812000379;
					default:
						break;
				}
				return 1119637248;
			case 28:
				return -1641231995;
			case 29:
				switch (iParam1)
				{
					case 0:
						return -15789618;
					case 1:
						return -2001368627;
					default:
						break;
				}
				return 1411817728;
			case 30:
				switch (iParam1)
				{
					case 0:
						return 1669447203;
					case 1:
						return -413778780;
					default:
						break;
				}
				return 260689376;
			case 31:
				switch (iParam1)
				{
					case 0:
						return -1593929201;
					case 1:
						return -1268334164;
					default:
						break;
				}
				return 302505024;
			case 32:
				return -800701784;
			case 33:
				return -1599472750;
			case 34:
				return 239043929;
			case 35:
				return -1534174498;
			case 36:
				switch (iParam1)
				{
					case 0:
						return -1457758665;
					case 1:
						return 1873758089;
					default:
						break;
				}
				return 1179130240;
			case 37:
				switch (iParam1)
				{
					case 0:
						return 1820839571;
					case 1:
						return -2073786745;
					default:
						break;
				}
				return -959962496;
			case 38:
				return 1895786957;
			case 39:
				return -2058137475;
			case 40:
				switch (iParam1)
				{
					case 0:
						return -904691578;
					case 1:
						return 149442199;
					case 2:
						return 978666390;
					case 3:
						return -1076604521;
					case 4:
						return 919455489;
					default:
						break;
				}
				return -1427408128;
			case 41:
				return 598461796;
			case 42:
				switch (iParam1)
				{
					case 0:
						return -1171602865;
					case 1:
						return -632377398;
					default:
						break;
				}
				return -190635712;
			case 43:
				switch (iParam1)
				{
					case 0:
						return 1379819153;
					case 1:
						return -456339986;
					case 2:
						return 458545376;
					case 3:
						return 610100918;
					default:
						break;
				}
				return -2132368512;
			case 44:
				return 544369376;
			case 45:
				switch (iParam1)
				{
					case 0:
						return -1386454342;
					case 1:
						return -1472914811;
					default:
						break;
				}
				return 1517869312;
			case 46:
				switch (iParam1)
				{
					case 0:
						return -1244997037;
					case 1:
						return 1336213836;
					default:
						break;
				}
				return 1497529856;
			case 47:
				switch (iParam1)
				{
					case 0:
						return 1723732770;
					default:
						break;
				}
				return 516059168;
			case 48:
				switch (iParam1)
				{
					case 0:
						return -1862350799;
					default:
						break;
				}
				return 138359424;
			case 49:
				return 1602493990;
			case 50:
				switch (iParam1)
				{
					case 0:
						return 155959053;
					case 1:
						return 2125427011;
					case 2:
						return 371707271;
					case 3:
						return -731143567;
					case 4:
						return -742996004;
					default:
						break;
				}
				return -773614592;
			case 51:
				switch (iParam1)
				{
					case 0:
						return -114145497;
					case 1:
						return -770317277;
					default:
						break;
				}
				return -1496303104;
			case 52:
				switch (iParam1)
				{
					case 0:
						return 1512765774;
					case 1:
						return -189901396;
					default:
						break;
				}
				return 855036416;
			case 53:
				switch (iParam1)
				{
					case 0:
						return -1334437481;
					case 1:
						return -316021716;
					default:
						break;
				}
				return 1818026880;
			case 54:
				switch (iParam1)
				{
					case 0:
						return -1743740213;
					case 1:
						return -170394045;
					default:
						break;
				}
				return -1865567744;
			case 55:
				return 1762656414;
			case 56:
				switch (iParam1)
				{
					case 0:
						return -117822482;
					case 1:
						return 2050912022;
					case 2:
						return -631458463;
					default:
						break;
				}
				return 1729892352;
			case 57:
				switch (iParam1)
				{
					case 0:
						return 494567551;
					case 1:
						return 1070551761;
					case 2:
						return -1249279900;
					default:
						break;
				}
				return 1256394752;
			case 58:
				switch (iParam1)
				{
					case 0:
						return 1053173243;
					case 1:
						return -239132243;
					default:
						break;
				}
				return -2137622144;
			case 59:
				return -2018341642;
			case 60:
				switch (iParam1)
				{
					case 0:
						return 1901777355;
					default:
						break;
				}
				return 922910144;
			case 61:
				switch (iParam1)
				{
					case 0:
						return -195996461;
					default:
						break;
				}
				return 1967427328;
			case 62:
				switch (iParam1)
				{
					case 0:
						return 1050124907;
					case 1:
						return 1877863225;
					default:
						break;
				}
				return 1397209856;
			case 63:
				return -1618254924;
			case 64:
				switch (iParam1)
				{
					case 0:
						return 1827343540;
					case 1:
						return 2139528616;
					default:
						break;
				}
				return 1380866816;
			case 65:
				switch (iParam1)
				{
					case 0:
						return -1926993706;
					case 1:
						return 2073650155;
					default:
						break;
				}
				return 1432305280;
			case 66:
				switch (iParam1)
				{
					case 0:
						return 1806437024;
					default:
						break;
				}
				return 1650308608;
			case 67:
				switch (iParam1)
				{
					case 0:
						return -2133679238;
					case 1:
						return -1797377830;
					default:
						break;
				}
				return 685182784;
			case 68:
				switch (iParam1)
				{
					case 0:
						return -1237105013;
					case 1:
						return -522278917;
					default:
						break;
				}
				return -2001177728;
			case 69:
				return -2137572125;
			case 70:
				switch (iParam1)
				{
					case 0:
						return 638370814;
					case 1:
						return -1062366341;
					default:
						break;
				}
				return -948494848;
			case 71:
				return -774894224;
			case 72:
				switch (iParam1)
				{
					case 0:
						return -1267862564;
					case 1:
						return 28828972;
					default:
						break;
				}
				return -1846020608;
			case 73:
				switch (iParam1)
				{
					case 0:
						return 306936642;
					case 1:
						return 460031053;
					case 2:
						return 381656699;
					default:
						break;
				}
				return -188029312;
			case 74:
				switch (iParam1)
				{
					case 0:
						return -211653282;
					default:
						break;
				}
				return -301233792;
		}
	}
	else if (iParam0 >= 75 && iParam0 <= 118)
	{
		switch (iParam0)
		{
			case 75:
				return -346537584;
			case 76:
				switch (iParam1)
				{
					case 0:
						return -550739017;
					default:
						break;
				}
				return -1829585536;
			case 77:
				switch (iParam1)
				{
					case 0:
						return -609376390;
					case 1:
						return -311112952;
					case 2:
						return -682765316;
					case 3:
						return -2127446978;
					default:
						break;
				}
				return 1338777472;
			case 78:
				switch (iParam1)
				{
					case 0:
						return 581221752;
					case 1:
						return 20416722;
					default:
						break;
				}
				return 1293249792;
			case 79:
				switch (iParam1)
				{
					case 0:
						return -1786500412;
					default:
						break;
				}
				return 235904384;
			case 80:
				return -334565466;
			case 81:
				switch (iParam1)
				{
					case 0:
						return 31964051;
					case 1:
						return 245875704;
					default:
						break;
				}
				return 1046770304;
			case 82:
				switch (iParam1)
				{
					case 0:
						return 48921735;
					case 1:
						return 1062398415;
					default:
						break;
				}
				return -2047991552;
			case 83:
				return -1752276745;
			case 84:
				switch (iParam1)
				{
					case 0:
						return 418356694;
					case 1:
						return -1090928636;
					default:
						break;
				}
				return -1021157760;
			case 85:
				switch (iParam1)
				{
					case 0:
						return 278246928;
					case 1:
						return 1092461253;
					default:
						break;
				}
				return 900051136;
			case 86:
				return 1417655457;
			case 87:
				switch (iParam1)
				{
					case 0:
						return 188835226;
					case 1:
						return 220332139;
					default:
						break;
				}
				return 1359760512;
			case 88:
				switch (iParam1)
				{
					case 0:
						return -1638860831;
					case 1:
						return -812497188;
					default:
						break;
				}
				return 1616003072;
			case 89:
				return -69702063;
			case 90:
				switch (iParam1)
				{
					case 0:
						return -479871262;
					default:
						break;
				}
				return -1670654720;
			case 91:
				return -331264815;
			case 92:
				return -1217205534;
			case 93:
				switch (iParam1)
				{
					case 0:
						return -1662432355;
					case 1:
						return -368935814;
					default:
						break;
				}
				return -1021345856;
			case 94:
				switch (iParam1)
				{
					case 0:
						return -735413614;
					case 1:
						return -972169639;
					case 2:
						return -673250821;
					case 3:
						return 161473916;
					default:
						break;
				}
				return -1329933952;
			case 95:
				switch (iParam1)
				{
					case 0:
						return -1645068573;
					default:
						break;
				}
				return 1248360320;
			case 96:
				switch (iParam1)
				{
					case 0:
						return 884363685;
					case 1:
						return 368673822;
					case 2:
						return 578628915;
					case 3:
						return 689154642;
					case 4:
						return 471198511;
					case 5:
						return 967199063;
					case 6:
						return -38616787;
					case 7:
						return -1294637989;
					default:
						break;
				}
				return -84111088;
			case 97:
				switch (iParam1)
				{
					case 0:
						return -1639179308;
					case 1:
						return -436408638;
					default:
						break;
				}
				return 1995021696;
			case 98:
				switch (iParam1)
				{
					case 0:
						return 1464772696;
					case 1:
						return 6449957;
					default:
						break;
				}
				return -1853564800;
			case 99:
				switch (iParam1)
				{
					case 0:
						return 803309489;
					case 1:
						return -31873580;
					case 2:
						return -1922690045;
					case 3:
						return 515105064;
					default:
						break;
				}
				return -1759022208;
			case 100:
				return -307424281;
			case 101:
				switch (iParam1)
				{
					case 0:
						return 1006898715;
					case 1:
						return 1573993134;
					default:
						break;
				}
				return -1402545280;
			case 102:
				return -1979014350;
			case 103:
				return 2096137174;
			case 104:
				switch (iParam1)
				{
					case 0:
						return -861435303;
					case 1:
						return 2076430727;
					case 2:
						return -1266577036;
					default:
						break;
				}
				return 493009408;
			case 105:
				return 1152564685;
			case 106:
				switch (iParam1)
				{
					case 0:
						return 2036836823;
					case 1:
						return 2046057828;
					case 2:
						return -526712830;
					case 3:
						return -242317110;
					case 4:
						return 1729814355;
					case 5:
						return 1868875718;
					case 6:
						return -785635151;
					case 7:
						return 1586170447;
					case 8:
						return -291036947;
					default:
						break;
				}
				return -832026176;
			case 107:
				switch (iParam1)
				{
					case 0:
						return -981210833;
					case 1:
						return 875440489;
					default:
						break;
				}
				return -508430848;
			case 108:
				switch (iParam1)
				{
					case 0:
						return 1491780341;
					case 1:
						return 1920169067;
					default:
						break;
				}
				return -227796128;
			case 109:
				switch (iParam1)
				{
					case 0:
						return -1255044808;
					case 1:
						return -1012076841;
					default:
						break;
				}
				return -871899648;
			case 110:
				switch (iParam1)
				{
					case 0:
						return 792345848;
					case 1:
						return 121209110;
					default:
						break;
				}
				return 14115413;
			case 111:
				switch (iParam1)
				{
					case 0:
						return -1152301466;
					case 1:
						return -1113682855;
					case 2:
						return -1801389871;
					case 3:
						return -180725957;
					case 4:
						return 1811628790;
					default:
						break;
				}
				return 2016864128;
			case 112:
				switch (iParam1)
				{
					case 0:
						return 635397890;
					default:
						break;
				}
				return -717212864;
			case 113:
				return 1487351956;
			case 114:
				switch (iParam1)
				{
					case 0:
						return 1955914312;
					case 1:
						return 1685893021;
					case 2:
						return -711771194;
					case 3:
						return 146337879;
					default:
						break;
				}
				return 205846784;
			case 115:
				switch (iParam1)
				{
					case 0:
						return -775876869;
					case 1:
						return -39469638;
					default:
						break;
				}
				return 1483441280;
			case 116:
				switch (iParam1)
				{
					case 0:
						return 2113065035;
					case 1:
						return -2101774133;
					default:
						break;
				}
				return -815072896;
			case 117:
				return -689015496;
			case 118:
				switch (iParam1)
				{
					case 0:
						return -18903616;
					case 1:
						return -1607469655;
					default:
						break;
				}
				return -640409664;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 119:
				return 1996937952;
		}
	}
	return 1968536545;
}

void func_156(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_304() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

bool func_157(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 48)
	{
		return false;
	}
	if (((*Global_1945938)[iParam0 /*18*/])->f_1 & 2 == 0)
	{
		return false;
	}
	return HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3);
}

void func_158(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 && !func_157(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_305(*uParam0);
	if (((*Global_1945938)[iVar0 /*18*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && iParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_306(iVar0);
	*uParam0 = 0;
}

void func_159(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_49(&(uParam0->f_1), 16384);
	}
	else
	{
		func_50(&(uParam0->f_1), 16384);
	}
}

void func_160(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_49(&(uParam0->f_1), 128);
	}
	else
	{
		func_50(&(uParam0->f_1), 128);
	}
}

void func_161(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_50(uParam0, 256);
	}
	else
	{
		func_49(uParam0, 256);
	}
}

void func_162(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_50(uParam0, 268435456);
	}
	else
	{
		func_49(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_50(uParam0, 1073741824);
	}
	else
	{
		func_49(uParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_50(uParam0, 536870912);
	}
	else
	{
		func_49(uParam0, 536870912);
	}
}

var func_163(char* sParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar15;

	Var0 = -2;
	Var0 = uParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = _NAMESPACE71::_0xCEDBF17EFCC0E4A4(&Var0, &Var13, iParam5);
	return uVar15;
}

char* func_164(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
{
	switch (iParam0)
	{
		case 1:
			return MISC::_CREATE_VAR_STRING(2, sParam1, sParam4);
		case 2:
			return MISC::_CREATE_VAR_STRING(2, sParam1, sParam4, sParam5);
		case 3:
			return MISC::_CREATE_VAR_STRING(10, sParam1, sParam2);
		case 4:
			return MISC::_CREATE_VAR_STRING(42, sParam1, sParam2, sParam3);
	}
	return MISC::_CREATE_VAR_STRING(2, func_307(sParam1));
}

bool func_165(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

int func_166(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 != -1)
	{
		iVar0 = func_308(iParam0, iParam1);
		if (iVar0 == -1)
		{
			return 0;
		}
		return (Global_17503.f_2205[iVar0 /*2*/])->f_1;
	}
	return 0;
}

void func_167(var uParam0, int iParam1)
{
	func_309(uParam0, iParam1);
}

int func_168()
{
	return &Global_1899515;
}

int func_169(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

Vector3 func_170(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 < 0)
	{
		return 0f, 0f, 0f;
	}
	if (!func_165(iParam0))
	{
		return 0f, 0f, 0f;
	}
	if (func_310(iParam0) == 0)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = (func_311(iParam0) + iParam1);
	if (iVar0 >= 892)
	{
		return 0f, 0f, 0f;
	}
	return *(Global_1310750->f_13358[iVar0 /*3*/]);
}

void func_171(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;

	if (func_61(iParam0, 32))
	{
		if (func_312(iParam0, uParam1->f_4, &(uParam1->f_12)))
		{
			if (bParam4)
			{
				vVar1 = { func_313(Global_35, &(uParam1->f_12)) };
				if (!func_175(vVar1))
				{
					*uParam1 = { vVar1 };
				}
			}
		}
	}
	if (bParam2)
	{
		func_314(uParam1, bParam2);
	}
	if (bParam3)
	{
		fVar4 = func_232(iParam0);
		iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(*uParam1, 0f, 0f, 0f, fVar4, fVar4, fVar4, func_233());
		if (func_315(Global_1310750[iParam0 /*111*/], 33554432))
		{
			func_235(iVar0, func_234(iParam0), 1, 0, 2, 0, -1082130432);
		}
		else
		{
			func_235(iVar0, func_234(iParam0), 1, 0, 8, 0, -1082130432);
		}
		if (func_61(iParam0, 1))
		{
			func_316(*uParam1 + Vector(1f, 0f, 0f), 25f, "Beat Inner", 1, 0, 32, 0, -1082130432);
		}
	}
	func_317(iParam0);
}

int func_172(int iParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;

	*uParam1 = TASK::_0x74F0209674864CBD();
	if (!TASK::_0x1AC5A8AB50CFAA33(*uParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((((*Global_1310750)[iParam0 /*111*/])->f_4.f_4[iVar0 /*3*/])->f_1 != -1)
		{
			func_318(uParam1, *(((*Global_1310750)[iParam0 /*111*/])->f_4.f_4[iVar0 /*3*/]));
		}
		iVar0++;
	}
	if (func_89(iParam0, 16))
	{
		TASK::_0xB8E3486D107F4194(*uParam1, 55f);
		TASK::_0x827A58CED9D4D5B4(*uParam1, 180f);
		fVar2 = BUILTIN::TO_FLOAT(func_319(iParam0));
		fVar1 = 60f;
	}
	else
	{
		TASK::_0x65D281985F2BDFC2(*uParam1, 35f);
		TASK::_0x827A58CED9D4D5B4(*uParam1, 65f);
		fVar2 = BUILTIN::TO_FLOAT(func_319(iParam0));
		fVar1 = 60f;
	}
	TASK::_0x9B6A58FDB0024F12(*uParam1, 35f);
	TASK::_0x954451EA2D2120FB(*uParam1, fVar2);
	TASK::_0x0F4F6C4CE471259D(*uParam1, (fVar2 + fVar1));
	TASK::_0x4A7D73989F52EB37(*uParam1, (fVar2 + 10f));
	TASK::_0x8F8C84363810691A(*uParam1, 7f);
	TASK::_0x2B8AF29A78024BD3(*uParam1);
	return 1;
}

void func_173(int iParam0, float fParam1, float fParam2, var uParam3, bool bParam4)
{
	switch (func_320(iParam0))
	{
		case 0:
			if (bParam4)
			{
				*fParam1 = 225f;
				*fParam2 = 6400f;
			}
			else
			{
				*fParam1 = 225f;
				*fParam2 = 4900f;
			}
			*uParam3 = 2500;
			break;
		case 1:
			if (!func_61(iParam0, 1))
			{
				if (func_89(iParam0, 2))
				{
				}
			}
			func_321(fParam1, fParam2, uParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*uParam3 = (*uParam3 * *uParam3);
			break;
		case 2:
			func_322(fParam1, fParam2, uParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*uParam3 = (*uParam3 * *uParam3);
			break;
		case 3:
			func_322(fParam1, fParam2, uParam3, iParam0, bParam4);
			*fParam1 = 7f;
			*fParam2 = (*fParam2 * *fParam2);
			*uParam3 = (*uParam3 * *uParam3);
			break;
		default:
			break;
	}
	if (func_143(iParam0))
	{
		*fParam2 = 40000f;
	}
}

Vector3 func_174(int iParam0, int iParam1, float fParam2, float fParam3)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	float fVar7;
	float fVar8;

	fVar7 = 999999.9f;
	fVar8 = 0f;
	*iParam0 = 1;
	iVar0 = 0;
	while (iVar0 < func_310(iParam1))
	{
		if (!func_323(iParam1, iVar0))
		{
			vVar4 = { func_170(iParam1, iVar0) };
			if (!func_175(vVar4))
			{
				fVar8 = BUILTIN::VDIST(Global_36, vVar4);
				if (func_180(fVar8, iParam1))
				{
					*iParam0 = 0;
				}
				if (fVar8 < fVar7)
				{
					if (func_324(iParam1, vVar4, fParam2, fParam3))
					{
						fVar7 = BUILTIN::VDIST(Global_36, vVar4);
						vVar1 = { vVar4 };
					}
				}
			}
		}
		iVar0++;
	}
	if (!func_175(vVar4))
	{
	}
	return vVar1;
}

int func_175(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_176(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4, int iParam5)
{
	if (uParam0->f_8 >= iParam4)
	{
		if (bParam3)
		{
			_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
			func_42("BEAT_FAIL", 5000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam2 = 1;
	}
	*uParam1 = iParam5;
	uParam0->f_8++;
	return 0;
}

int func_177(int iParam0, vector3 vParam1)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	while (iVar0 < func_310(iParam0))
	{
		vVar1 = { func_170(iParam0, iVar0) };
		if (func_325(vVar1, vParam1, 1056964608, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_178(var uParam0)
{
	int iVar0;

	if (uParam0->f_7 == 0)
	{
		uParam0->f_7 = GRAPHICS::CREATE_TRACKED_POINT();
		if (uParam0->f_7 == 0)
		{
		}
		GRAPHICS::SET_TRACKED_POINT_INFO(uParam0->f_7, *uParam0, 4f);
	}
	else
	{
		iVar0 = GRAPHICS::_0xDFE332A5DA6FE7C9(uParam0->f_7);
		if (iVar0 == -1)
		{
			return 0;
		}
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_179(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;

	vVar2 = { *uParam0 };
	func_326(Global_35, *uParam0, &(uParam0->f_37), 1061158912, 0, 0);
	if (func_327(&(uParam0->f_37), 500))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (!func_175(*(uParam0->f_12[iVar0 /*3*/])))
			{
				vVar5 = { *(uParam0->f_12[iVar0 /*3*/]) };
				vVar8 = { MISC::_0x83ACC65D9ACEC5EF(Global_36, vVar2, vVar5, true) };
				if (BUILTIN::VDIST2(Global_36, vVar8) <= (35f * 35f) || BUILTIN::VDIST2(Global_36, *(uParam0->f_12[iVar0 /*3*/])) <= (80f * 80f))
				{
					if (bParam4)
					{
						iVar1 = func_328(uParam0);
						if (iVar1 > -1 && iVar1 < 8)
						{
							*uParam0 = { *(uParam0->f_12[iVar1 /*3*/]) };
						}
					}
					uParam0->f_8 = 0;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return func_176(uParam0, uParam1, uParam2, bParam3, 16, 1000);
}

int func_180(float fParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;

	fVar3 = (fParam0 * fParam0);
	func_173(iParam1, &fVar0, &fVar1, &uVar2, 1);
	if (fVar3 > fVar1)
	{
		return 0;
	}
	if (func_61(iParam1, 1))
	{
		if (fVar3 < fVar0)
		{
			return 0;
		}
	}
	return 1;
}

int func_181(var uParam0, var uParam1)
{
	*uParam1 = 0;
	if (TASK::_0x0365000D8BF86531(&(uParam0->f_10)) == 4)
	{
		*uParam1 = 1;
	}
	else if (TASK::_0x0365000D8BF86531(&(uParam0->f_10)) == 3)
	{
		*uParam0 = { TASK::_0x865732725536EE39(&(uParam0->f_10)) };
		return 1;
	}
	return 0;
}

int func_182(int iParam0, var uParam1, var uParam2, struct<7> Param3, bool bParam10)
{
	if (func_329(iParam0, *uParam2))
	{
		return 0;
	}
	if (!func_330(iParam0, uParam2))
	{
		return 0;
	}
	if (!func_331(Param3))
	{
		return 0;
	}
	if (bParam10)
	{
		if (!func_332(*uParam2, Global_35))
		{
			return 0;
		}
	}
	return 1;
}

int func_183(var uParam0)
{
	return uParam0->f_51.f_4;
}

int func_184(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 106:
			switch (iParam1)
			{
				case 1:
					*uParam2 = VOLUME::_CREATE_VOLUME_AGGREGATE();
					VOLUME::_0x39816F6F94F385AD(*uParam2, -771.7f, -1343.6f, 43.9f, 0f, 0f, 0f, 95f, 140f, 50f);
					VOLUME::_0x39816F6F94F385AD(*uParam2, -852.4f, -1349.5f, 45f, 5f, 0f, 0f, 70f, 130f, 50f);
					VOLUME::_0x39816F6F94F385AD(*uParam2, -907.6f, -1362.1f, 49f, 0f, 0f, 0f, 50f, 100f, 50f);
					return 1;
				case 2:
					*uParam2 = VOLUME::_CREATE_VOLUME_AGGREGATE();
					VOLUME::_0x39816F6F94F385AD(*uParam2, -270.606f, 827.282f, 118.4249f, 0f, 0f, 11.275f, 80f, 100.4f, 86.6f);
					VOLUME::_0x39816F6F94F385AD(*uParam2, -235.442f, 653.1498f, 112.3099f, 0f, 0f, 49.575f, 44.4f, 76.775f, 50f);
					VOLUME::_0x39816F6F94F385AD(*uParam2, -236.9004f, 797.5648f, 121.6383f, 0f, 0f, 17.55f, 53.975f, 105.5f, 20f);
					VOLUME::_0x39816F6F94F385AD(*uParam2, -339.8f, 829.675f, 100f, 0f, 0f, 14.975f, 25f, 75f, 50f);
					return 1;
			}
			break;
	}
	return 0;
}

void func_185(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

void func_186(int iParam0, int iParam1)
{
	if (func_333(iParam0))
	{
		return;
	}
	if (func_334(iParam0) == iParam1)
	{
		return;
	}
	if (Global_36601 >= 10)
	{
		Global_36601 = 0;
	}
	(Global_36580[Global_36601 /*2*/])->f_1 = iParam1;
	Global_36580[Global_36601 /*2*/] = iParam0;
	Global_36601++;
}

void func_187(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 0);
	if (bParam3)
	{
		func_49(&iParam1, 8192);
	}
	if (bParam4)
	{
		POPULATION::_0x2161278C6322F740(iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, iParam0);
	}
}

int func_188(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		case 1:
			return 4;
		case 2:
			return 1;
		case 3:
			return 8;
		case 75:
			return 9;
		case 76:
			return 3;
		case 4:
			return 3;
		case 77:
			return 3;
		case 8:
			return 17;
		case 5:
			return 5;
		case 6:
			return 6;
		case 7:
			return 5;
		case 78:
			return 4;
		case 9:
			return 2;
		case 10:
			return 7;
		case 11:
			return 8;
		case 12:
			return 7;
		case 13:
			return 6;
		case 14:
			return 4;
		case 79:
			return 2;
		case 15:
			return 10;
		case 80:
			return 3;
		case 81:
			return 1;
		case 82:
			return 2;
		case 83:
			return 6;
		case 84:
			return 6;
		case 85:
			return 2;
		case 86:
			return 2;
		case 87:
			return 2;
		case 16:
			return 1;
		case 88:
			return 1;
		case 89:
			return 6;
		case 90:
			return 14;
		case 18:
			return 6;
		case 17:
			return 2;
		case 91:
			return 2;
		case 19:
			return 3;
		case 92:
			return 6;
		case 20:
			return 2;
		case 21:
			return 5;
		case 93:
			return 1;
		case 22:
			return 5;
		case 23:
			return 1;
		case 94:
			return 1;
		case 24:
			return 2;
		case 119:
			return 2;
		case 27:
			return 6;
		case 28:
			return 6;
		case 29:
			return 6;
		case 95:
			return 7;
		case 30:
			return 2;
		case 112:
			return 5;
		case 31:
			return 3;
		case 32:
			return 4;
		case 33:
			return 17;
		case 34:
			return 4;
		case 35:
			return 14;
		case 96:
			return 3;
		case 36:
			return 4;
		case 37:
			return 1;
		case 97:
			return 3;
		case 98:
			return 3;
		case 38:
			return 4;
		case 39:
			return 1;
		case 40:
			return 3;
		case 41:
			return 14;
		case 42:
			return 1;
		case 99:
			return 6;
		case 100:
			return 2;
		case 43:
			return 6;
		case 44:
			return 13;
		case 101:
			return 5;
		case 102:
			return 4;
		case 103:
			return 2;
		case 45:
			return 2;
		case 104:
			return 3;
		case 46:
			return 4;
		case 47:
			return 1;
		case 48:
			return 2;
		case 105:
			return 2;
		case 49:
			return 8;
		case 50:
			return 9;
		case 106:
			return 16;
		case 107:
			return 16;
		case 51:
			return 6;
		case 108:
			return 5;
		case 53:
			return 10;
		case 54:
			return 8;
		case 56:
			return 4;
		case 55:
			return 1;
		case 57:
			return 14;
		case 109:
			return 2;
		case 58:
			return 1;
		case 110:
			return 5;
		case 59:
			return 15;
		case 60:
			return 3;
		case 61:
			return 13;
		case 62:
			return 2;
		case 111:
			return 4;
		case 67:
			return 6;
		case 68:
			return 3;
		case 113:
			return 7;
		case 114:
			return 1;
		case 115:
			return 3;
		case 117:
			return 6;
		case 116:
			return 1;
		case 63:
			return 6;
		case 64:
			return 22;
		case 65:
			return 2;
		case 66:
			return 2;
		case 69:
			return 5;
		case 70:
			return 8;
		case 71:
			return 8;
		case 118:
			return 4;
		case 72:
			return 4;
		case 73:
			return 4;
		case 74:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_189(bool bParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam0)
	{
		return func_335(Global_1359489->f_4);
	}
	PED::GET_GROUP_SIZE(func_336(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = PED::GET_PED_AS_GROUP_MEMBER(func_336(), iVar3);
		if (func_337(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

char* func_190()
{
	return "SCRIPT_COMMON@DEAD@MALE";
}

char* func_191()
{
	return "SCRIPT_COMMON@DEAD@FEMALE";
}

void func_192(var uParam0)
{
	if (*uParam0 != 0)
	{
		STREAMING::REQUEST_MODEL(*uParam0, false);
	}
}

int func_193(var uParam0)
{
	if (!func_338(uParam0->f_1))
	{
		return 0;
	}
	if (uParam0->f_12 != 0)
	{
		if (!func_338(uParam0->f_12))
		{
			return 0;
		}
	}
	if (uParam0->f_3 != 41788943)
	{
		if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_5))
		{
			uParam0->f_5 = PED::_REQUEST_METAPED_OUTFIT(uParam0->f_1, uParam0->f_3);
			if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_5))
			{
				uParam0->f_3 = 41788943;
			}
			return 0;
		}
		else if (!PED::_0x610438375E5D1801(uParam0->f_5))
		{
			return 0;
		}
	}
	return 1;
}

int func_194()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < &Global_1899517)
	{
		if (Global_1899517[iVar0] == SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_195(var uParam0, var uParam1, vector3 vParam2, float fParam5, var uParam6, bool bParam7)
{
	bool bVar0;
	bool bVar1;
	struct<4> Var2;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1) && uParam0->f_1 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_11) && uParam0->f_12 != 0)
		{
			if (STREAMING::HAS_MODEL_LOADED(uParam0->f_12))
			{
				Var2 = { func_339(vParam2, fParam5, uParam0->f_15, uParam0->f_19) };
				Var2.f_3 = func_340(fParam5, uParam0->f_18, uParam0->f_19);
				uParam0->f_11 = func_341(uParam0->f_12, uParam0, Var2, Var2.f_3, 1, 1, uParam0->f_14, 0, 1);
				if (func_342(uParam0->f_1, 1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_11))
					{
						func_79(uParam0->f_11, 0);
					}
				}
			}
			else
			{
				STREAMING::REQUEST_MODEL(uParam0->f_12, false);
			}
			return 0;
		}
		else
		{
			if (STREAMING::HAS_MODEL_LOADED(uParam0->f_1))
			{
				bVar0 = (ENTITY::DOES_ENTITY_EXIST(uParam0->f_11) && uParam0->f_13);
				if (bVar0)
				{
					Var2 = { func_339(vParam2, fParam5, uParam0->f_15, uParam0->f_19) };
					Var2.f_3 = func_340(fParam5, uParam0->f_18, uParam0->f_19);
				}
				else
				{
					bVar1 = (uParam6 || func_343(&(uParam0->f_22)));
					Var2 = { func_339(vParam2, fParam5, uParam0->f_6, bVar1) };
					Var2.f_3 = func_340(fParam5, uParam0->f_9, bVar1);
				}
				*uParam1 = func_341(uParam0->f_1, uParam0, Var2, Var2.f_3, bParam7, PED::_0x772A1969F649E902(uParam0->f_1), uParam0->f_14, 0, 1);
				PED::SET_PED_CONFIG_FLAG(*uParam1, 307, true);
				if (!ENTITY::IS_ENTITY_DEAD(*uParam1))
				{
					if (bVar0)
					{
						func_344(*uParam1, uParam0->f_11, 1, -1, 1);
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_23)))
					{
						func_345(*uParam1, &(uParam0->f_23), 0);
					}
				}
			}
			else
			{
				STREAMING::REQUEST_MODEL(uParam0->f_1, false);
			}
			return 0;
		}
	}
	return 1;
}

int func_196(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 2139774588:
			return 1;
		case 1142025875:
			return 2;
		case 1587891565:
			return 4;
		case 1877013492:
			return 32;
		case -643014279:
			return 64;
		case -597116214:
			return 128;
		case 551416228:
			return 256;
		case 1022576842:
			return 512;
		case 953325896:
			return 1024;
		case 508358508:
			return 2048;
		case -735200598:
			return 4096;
		case -856432278:
			return 8192;
		case -2010847721:
			return 16384;
		case 446961221:
			return 32768;
		case -1972216640:
			return 65536;
		case 530833824:
			return 131072;
		case 1682361219:
			return 262144;
		case 158959085:
			return 524288;
		case 1919819559:
			return 1048576;
		case 1461411082:
			return 2097152;
		case -549508280:
			return 4194304;
		default:
			break;
	}
	return 0;
}

char* func_197(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "FACEDOWN_01";
		case 1:
			return "FACEUP_01";
		case 2:
			return "FACEUP_02";
		case 3:
			return "FACEUP_03";
		case 4:
			return "FACEUP_04";
		case 5:
			return "FACEUP_05";
		case 6:
			return "FACEUP_06";
		case 7:
			return "FACEUP_07";
		case 8:
			return "ONSIDE_01";
		case 9:
			return "ONSIDE_02";
		case 10:
			return "ONSIDE_03";
		case 11:
			return "ONSIDE_04";
		default:
			break;
	}
	return func_346("[BEAT]", "GET_GENERIC_DEATH_ANIM_NAME_BY_INDEX: Invalid Index.");
}

void func_198(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, var uParam5, int iParam6)
{
	func_347(iParam0, 1f, 0);
	TASK::TASK_PLAY_ANIM(iParam0, sParam1, sParam2, iParam3, iParam4, -1, 679940 | uParam5, 0, 0, iParam6, 0, 0, 0);
}

int func_199(var uParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_348(*uParam0, 0f, 0f, 0f))
	{
		return 1;
	}
	iVar1 = 0;
	bVar2 = false;
	bVar3 = false;
	vVar4 = { *uParam0 };
	STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
	while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, iParam3) && !bVar2)
	{
		if (iVar1 < iParam2)
		{
			iVar1++;
			vVar4.f_2 = (vVar4.z + IntToFloat(iParam1));
			STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
		}
		else
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		iVar1 = 1;
		vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
		STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
		while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, iParam3) && !bVar3)
		{
			if (iVar1 < iParam2)
			{
				iVar1++;
				vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
				STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
			}
			else
			{
				bVar3 = true;
			}
		}
	}
	else
	{
		uParam0->f_2 = uVar0;
		return 1;
	}
	if (bVar2 && bVar3)
	{
		return 0;
	}
	uParam0->f_2 = uVar0;
	return 1;
}

int func_200(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(((*uParam1)[iVar0 /*9*/])->f_6))
		{
			((*uParam1)[iVar0 /*9*/])->f_6 = iParam0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_201(var uParam0)
{
	return uParam0->f_51;
}

void func_202(var uParam0, int iParam1)
{
	uParam0->f_21 = iParam1;
}

bool func_203()
{
	return &Global_1935436 == 2;
}

void func_204(int iParam0)
{
	if (iParam0 >= &Global_1935436)
	{
		return;
	}
	Global_1935436->f_1 = iParam0;
}

void func_205(int iParam0, int iParam1)
{
	float fVar0;

	if (MISC::GET_RANDOM_EVENT_FLAG())
	{
		return;
	}
	Global_17503.f_3++;
	(Global_17503.f_42[iParam0 /*8*/])->f_1++;
	if (func_61(iParam0, 2))
	{
		func_350(iParam0, func_349(iParam1));
	}
	else
	{
		func_351(iParam0, func_54());
	}
	fVar0 = (1f + (BUILTIN::TO_FLOAT(((Global_17503.f_42[iParam0 /*8*/])->f_1 / 2)) * 0.1f));
	if (fVar0 > 2f)
	{
		fVar0 = 2f;
	}
	else if (fVar0 < 1f)
	{
		fVar0 = 1f;
	}
	func_352(iParam0, ((*Global_1310750)[iParam0 /*111*/])->f_36, fVar0, 1, 0);
	func_353(iParam0, 0);
	func_354(iParam0);
	func_355(1);
	PED::SET_PED_CONFIG_FLAG(Global_35, 514, true);
	if (!MISC::GET_MISSION_FLAG())
	{
		MISC::SET_RANDOM_EVENT_FLAG(true);
	}
	AUDIO::_0x33D51F801CB16E4F();
	((*Global_1310750)[iParam0 /*111*/])->f_110 |= 4;
	Global_17503.f_6 = iParam0;
	Global_17503.f_10 = 1;
	Global_17503.f_7 = 0;
	Global_17503.f_8 = 0;
	if (!func_61(iParam0, 16))
	{
		func_206(iParam0, 0, 0, 0, 0);
	}
}

void func_206(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	if (func_356() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0 /*9*/];
		if (((func_165(iVar1) && !func_61(iVar1, iParam2)) && (!bParam3 || !func_221(iVar1))) && (!bParam4 || !func_357(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_358(iVar0);
			}
		}
		iVar0++;
	}
}

int func_207(int iParam0)
{
	return ((*Global_1310750)[iParam0 /*111*/])->f_39;
}

void func_208(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_177 != -1 || func_315(Global_1310750[uParam0->f_3 /*111*/], 16777216))
	{
		if (bParam2)
		{
			if (func_61(uParam0->f_3, 1073741824))
			{
				func_359(2, -1, 0, 0, 0);
			}
			else
			{
				func_359(1, -1, 0, 0, 0);
			}
		}
		else if (bParam1)
		{
			if (uParam0->f_45)
			{
				func_359(8, -1, 0, 0, 0);
			}
		}
		if (uParam0->f_177 != -1)
		{
			if (bParam2)
			{
				if (!func_360(1, uParam0->f_177))
				{
					func_361(16, uParam0->f_177);
					func_362(1, uParam0->f_177);
				}
				COMPENDIUM::COMPENDIUM_GANG_ENCOUNTERED(func_363(uParam0->f_177));
			}
		}
	}
	else if (bParam2 || (bParam1 && uParam0->f_45))
	{
		func_359(8, -1, 0, 0, 0);
	}
}

int func_209()
{
	if (func_364(Global_1935630->f_44))
	{
		if (WEAPON::_0x6AD66548840472E5(Global_1935630->f_44))
		{
			if (CAM::_0xA24C1D341C6E0D53(1, 1, 1))
			{
				if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
			}
		}
		else if (func_365())
		{
			return 1;
		}
	}
	return 0;
}

bool func_210(int iParam0, int iParam1, bool bParam2, int iParam3)
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

float func_211(var uParam0, bool bParam1)
{
	float fVar0;

	if (uParam0->f_119 == -1f)
	{
		if (func_61(uParam0->f_3, 1024))
		{
			fVar0 = 95f;
		}
		else if (func_61(uParam0->f_3, 2048))
		{
			fVar0 = 80f;
		}
		else if (func_61(uParam0->f_3, 4096))
		{
			fVar0 = 65f;
		}
		else if (func_61(uParam0->f_3, 8192))
		{
			fVar0 = 55f;
		}
		else if (func_61(uParam0->f_3, 16384))
		{
			fVar0 = 30f;
		}
		else
		{
			fVar0 = 85f;
		}
		if (func_61(uParam0->f_3, 1))
		{
		}
		else if (func_61(uParam0->f_3, 2))
		{
			fVar0 = (fVar0 - 15f);
		}
		uParam0->f_119 = fVar0;
	}
	fVar0 = uParam0->f_119;
	if (bParam1)
	{
		fVar0 = (fVar0 + 150f);
	}
	return fVar0;
}

int func_212(var uParam0, float fParam1, int iParam2, int iParam3, float fParam4, int iParam5, int iParam6)
{
	float fVar0;
	bool bVar1;

	iParam2 = iParam2;
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_6))
	{
		return 0;
	}
	fVar0 = BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, false, false));
	switch (*uParam0)
	{
		case 0:
			if (ENTITY::IS_ENTITY_A_PED(uParam0->f_6) && !PED::_0x5102307CE88798EB(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6)))
			{
				PED::REQUEST_PED_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6));
			}
			else if (func_366(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
					if (iParam5 && !ENTITY::IS_ENTITY_A_PED(uParam0->f_6))
					{
						fVar0 = BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, false, false));
					}
					if (func_367(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
		uParam0->f_7 = (func_368() - uParam0->f_8);
	}
	else
	{
		uParam0->f_7 = 0f;
	}
	return 1;
}

int func_213(var uParam0, int iParam1, float fParam2)
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
	func_91(uParam0);
	return 1;
}

bool func_214()
{
	return (Global_1894899 & 1 != 0 && func_224() != -1);
}

int func_215(var uParam0, float fParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_98)
	{
		if (&uParam0->f_98[iVar0] != 0f)
		{
			if (&uParam0->f_98[iVar0] < fParam1)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_216(int iParam0, int iParam1)
{
	return (func_207(iParam0) && iParam1) != 0;
}

int func_217(int iParam0)
{
	var uVar0;
	var uVar1;
	float fVar2;
	int iVar3;

	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 & -1 == -1)
	{
		return 1;
	}
	MISC::_GET_WEATHER_TYPE_TRANSITION(&uVar0, &uVar1, &fVar2);
	if (fVar2 < 0.5f)
	{
		iVar3 = uVar0;
	}
	else
	{
		iVar3 = uVar1;
	}
	if (iParam0 & 1 == 1 && func_369(iVar3))
	{
		return 1;
	}
	if (iParam0 & 2 == 2 && func_370(iVar3))
	{
		return 1;
	}
	if (iParam0 & 4 == 4 && func_371(iVar3))
	{
		return 1;
	}
	if (iParam0 & 8 == 8 && func_372(iVar3))
	{
		return 1;
	}
	if (iParam0 & 16 == 16 && func_373(iVar3))
	{
		return 1;
	}
	if (iParam0 & 32 == 32 && func_374(iVar3))
	{
		return 1;
	}
	if (iParam0 & 64 == 64 && func_375(iVar3))
	{
		return 1;
	}
	return 0;
}

int func_218(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_376(bParam0, &uVar0, &uVar1))
	{
		return 1;
	}
	return 0;
}

int func_219(int iParam0)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(iParam0))
	{
		return 0;
	}
	iVar0 = TASK::_0x2D0571BB55879DA2(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if ((((((((iVar0 == -1689755873 || iVar0 == 1690225020) || iVar0 == 1774730608) || iVar0 == 309374745) || iVar0 == -363194080) || iVar0 == 640190094) || iVar0 == -1085971095) || iVar0 == 49488831) || iVar0 == 343112864)
	{
		return 1;
	}
	if (iVar0 == -2016812721 || iVar0 == 1097070152)
	{
		iVar0 = PED::_0xC22AA08A8ADB87D4(iParam0);
		if (iVar0 == 970972795)
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_220(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (Global_1572887->f_12 != -1)
	{
		if ((iParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1898164->f_163;
		}
		if ((iParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1898164->f_164;
		}
		if (func_377())
		{
			return 1;
		}
		if (Global_1058888->f_3 && !Global_1572887->f_8)
		{
			if (((*Global_1055058)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*116*/])->f_114 && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
			{
				return 1;
			}
		}
	}
	else if (iParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1898164->f_163;
		}
		else
		{
			return Global_1898164->f_164;
		}
	}
	if ((Global_1898164->f_1[0 /*5*/])->f_2 == 8)
	{
		iVar0 = func_378(&(Global_1898164->f_1[0 /*5*/]));
		if (func_379(iVar0) && func_380(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_381(&(Global_1898164->f_1[0 /*5*/])))
	{
		return 1;
	}
	if ((Global_1935630 && 40959 & (-1 - iParam0)) != 0)
	{
		return 1;
	}
	if (!bParam1)
	{
		if ((MISC::GET_GAME_TIMER() - 5000) < &Global_1898438)
		{
			return 1;
		}
	}
	switch ((Global_1898164->f_1[0 /*5*/])->f_2)
	{
		case 0:
			return 0;
		case 1:
			return iParam0 & 1 == 0;
		case 4:
			return iParam0 & 2 == 0;
		case 6:
			return iParam0 & 4 == 0;
		case 2:
			return iParam0 & 16 == 0;
		case 5:
			return iParam0 & 32 == 0;
		case 9:
			return iParam0 & 64 == 0;
		case 8:
			return iParam0 & 8 == 0;
		case 10:
			return iParam0 & 512 == 0;
		case 3:
			return iParam0 & 128 == 0;
		case 11:
			return iParam0 & 256 == 0;
		default:
			break;
	}
	return 0;
}

int func_221(int iParam0)
{
	if (!func_165(iParam0))
	{
		return 0;
	}
	if (func_382(64) && func_383(iParam0))
	{
		return 1;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_46;
}

int func_222(int iParam0, bool bParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0) || !bParam1)
		{
			iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0);
			if (INTERIOR::IS_VALID_INTERIOR(iVar0))
			{
				if (func_384(iVar0) || func_385(iVar0))
				{
					return 0;
				}
				return 1;
			}
		}
	}
	return 0;
}

bool func_223()
{
	return Global_1894899 & 4 != 0;
}

int func_224()
{
	return Global_1894899->f_2;
}

int func_225(int iParam0)
{
	if (!func_386(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 11:
			return 0;
		case 76:
			return 1;
		case 15:
			return 3;
		case 128:
			return 2;
		default:
			break;
	}
	return -1;
}

int func_226(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return 0;
	}
	return 1;
}

int func_227(vector3 vParam0, int iParam3)
{
	if (!func_226(iParam3))
	{
		return 0;
	}
	if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1392194)[iParam3 /*10*/])->f_5))
	{
		return VOLUME::_0xF256A75210C5C0EB(((*Global_1392194)[iParam3 /*10*/])->f_5, vParam0);
	}
	return 0;
}

bool func_228(vector3 vParam0)
{
	float fVar0;

	if (func_175(vParam0))
	{
		return false;
	}
	fVar0 = func_151(func_214(), 6f, 22f);
	return VOLUME::_0x769BB7626B8CDB06(vParam0, fVar0, 1, 0, 16384);
}

int func_229(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_ID();
	if (!bParam4)
	{
		if (PLAYER::_0x1A51BFE60708E482(iVar0))
		{
			if (PLAYER::GET_PLAYER_TARGET_ENTITY(iVar0, &iVar1))
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
				{
					if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) || AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
					{
						func_133(uParam0);
						if (bParam3)
						{
							return 1;
						}
					}
					if (!bParam3)
					{
						return 1;
					}
				}
			}
		}
	}
	if (PLAYER::_0x6C54E69516CC56BD(iVar0) > 0)
	{
		func_133(uParam0);
		return 1;
	}
	if (!bParam4)
	{
		if (!func_131(uParam0))
		{
			return 0;
		}
		else if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) || AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
		{
			return 1;
		}
		if (!func_134(uParam0, fParam2))
		{
			return 1;
		}
		if (func_131(uParam0))
		{
			func_284(uParam0);
		}
	}
	return 0;
}

bool func_230(vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, 16384);
}

void func_231(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_175(vParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1911670)
	{
		iVar1 = Global_1911670[iVar0];
		if (VOLUME::_0xF6A8A652A6B186CD(iVar1))
		{
			vVar2 = { VOLUME::_0xC4019CF9AE8E931A(iVar1) };
			if (func_325(vVar2, vParam0, 2f, 1))
			{
				if (iParam3 == 0 || VOLUME::_0x769BB7626B8CDB06(vVar2, 2f, 0, iParam3, 16384))
				{
					VOLUME::_0xFDFECC6EE4491E11(iVar1);
					(*Global_1911670)[iVar0] = 0;
				}
			}
		}
		iVar0++;
	}
}

float func_232(int iParam0)
{
	if (!func_165(iParam0))
	{
		return 0f;
	}
	if (!func_387(iParam0))
	{
		return 0f;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_44;
}

char* func_233()
{
	return "unnamed";
}

char* func_234(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "ANIMAL_ATTACK";
		case 75:
			return "BANDITO_BREAKOUT";
		case 8:
			return "BURNING_BODIES";
		case 1:
			return "ANIMAL_MAULING";
		case 2:
			return "APPROACH";
		case 3:
			return "ARMS_DEAL";
		case 76:
			return "BANDITO_EXECUTION";
		case 4:
			return "BEAR_TRAP";
		case 77:
			return "BGN_TOWN_ENCOUNTER";
		case 5:
			return "BOAT_ATTACK";
		case 6:
			return "BOOBY_TRAP";
		case 7:
			return "BOUNTY TRANSPORT";
		case 78:
			return "BRONTE_PATROL";
		case 9:
			return "CAMPFIRE_AMBUSH";
		case 10:
			return "CHAIN_GANG";
		case 11:
			return "CHECKPOINT";
		case 12:
			return "COACH_ROBBERY";
		case 79:
			return "CONSEQUENCE";
		case 13:
			return "CORPSE_CART";
		case 14:
			return "CRASHED_WAGON";
		case 80:
			return "DARK_ALLEY_AMBUSH";
		case 81:
			return "DARK_ALLEY_BUM";
		case 82:
			return "DARK_ALLEY_STAB";
		case 83:
			return "DEAD_BODIES";
		case 84:
			return "DEAD_JOHN";
		case 15:
			return "DEL_LOBO_POSSE";
		case 85:
			return "DISABLED_BEGGAR";
		case 86:
			return "DOMESTIC_DISPUTE";
		case 87:
			return "DROWN_MURDER";
		case 16:
			return "DRUNK_CAMP";
		case 88:
			return "DRUNK_DUELER";
		case 89:
			return "DUEL_BOASTER";
		case 90:
			return "DUEL_WINNER";
		case 17:
			return "ESCORT";
		case 18:
			return "EXECUTIONS";
		case 91:
			return "FLEEING_FAMILY";
		case 19:
			return "FLEEING_TRESPASSER";
		case 92:
			return "FOOT_ROBBERY";
		case 20:
			return "FRIENDLY_OUTDOORSMAN";
		case 21:
			return "FROZEN_TO_DEATH";
		case 22:
			return "FUSSAR_CHASE";
		case 23:
			return "GANG_CAMP_REMINDER";
		case 94:
			return "GANG_PED_ENCOUNTER";
		case 24:
			return "GOLD_PANNER";
		case 119:
			return "HERBALIST_CAMP";
		case 27:
			return "HORSE_RACE";
		case 28:
			return "HOSTAGE_RESCUE";
		case 29:
			return "INBRED_KIDNAP";
		case 30:
			return "INJURED_RIDER";
		case 95:
			return "INTIMIDATION TACTICS";
		case 31:
			return "KIDNAP_VICTIM";
		case 32:
			return "RALLY_DISPUTE";
		case 33:
			return "RALLY";
		case 34:
			return "RALLY_SETUP";
		case 35:
			return "LARAMIE_GANG_RUSTLING";
		case 96:
			return "LEM_TOWN_ENCOUNTER";
		case 36:
			return "LOCKED_SAFE";
		case 37:
			return "LONE_PRISONER";
		case 97:
			return "LOST_DOG";
		case 98:
			return "LOST_DRUNK";
		case 38:
			return "LOST_FRIEND";
		case 39:
			return "LOST_MAN";
		case 40:
			return "MOONSHINE_CAMP";
		case 41:
			return "MURDER_CAMPFIRE";
		case 42:
			return "NAKED_SWIMMER";
		case 93:
			return "FUNDRAISER";
		case 99:
			return "ODR_TOWN_ENCOUNTER";
		case 100:
			return "ON_THE_RUN";
		case 43:
			return "OUTLAW_LOOTER";
		case 44:
			return "OUTLAW_TRANSPORT";
		case 101:
			return "PARLOR_AMBUSH";
		case 102:
			return "PEEPING_TOM";
		case 103:
			return "PICKPOCKET";
		case 45:
			return "SNAKE_BITE";
		case 104:
			return "PISS_POT";
		case 46:
			return "PLAYER_CAMP_ATTACK";
		case 47:
			return "PLAYER_CAMP_STRANGER";
		case 48:
			return "POISONED";
		case 105:
			return "POLICE_CHASE";
		case 49:
			return "POSSE_BREAKOUT";
		case 50:
			return "PRISON_WAGON";
		case 106:
			return "PUBLIC_HANGING";
		case 107:
			return "RAT_INFESTATION";
		case 51:
			return "RIFLE_PRACTICE";
		case 108:
			return "ROWDY_DRUNKS";
		case 53:
			return "SAVAGE_AFTERMATH";
		case 54:
			return "SAVAGE_FIGHT";
		case 56:
			return "SAVAGE_WAGON";
		case 55:
			return "SAVAGE_WARNING";
		case 57:
			return "SHARP_SHOOTER";
		case 109:
			return "SHOW_OFF";
		case 58:
			return "SKIPPING_STONES";
		case 110:
			return "SLUM_AMBUSH";
		case 59:
			return "SPOOKED_HORSE";
		case 60:
			return "STALKING_HUNTER";
		case 61:
			return "STALKING_SHADOWS";
		case 62:
			return "STRANDED_RIDER";
		case 111:
			return "STREET_FIGHT";
		case 112:
			return "TAUNTING";
		case 67:
			return "TORTURING_CAPTIVE";
		case 68:
			return "TORCH_PROCESSION";
		case 113:
			return "TOWN_BURIAL";
		case 114:
			return "TOWN_CONFRONTATION";
		case 115:
			return "TOWN_ROBBERY";
		case 117:
			return "TOWN_TERROR";
		case 116:
			return "TOWN_WIDOW";
		case 63:
			return "TRAFFIC_ATTACK";
		case 64:
			return "TRAIN_HOLDUP";
		case 65:
			return "TRAPPED_WOMAN";
		case 66:
			return "TREASURE_HUNTER";
		case 69:
			return "VOICE";
		case 70:
			return "WAGON_THREAT";
		case 71:
			return "WASHED_ASHORE";
		case 118:
			return "WEALTHY_COUPLE";
		case 72:
			return "WILDERNESS_HANGING";
		case 73:
			return "WILD_MAN";
		case 74:
			return "WILD_MAN_CAVE";
		default:
			break;
	}
	return "BEAT NO NAME";
}

int func_235(int iParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, float fParam6)
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;

	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return 0;
	}
	vVar0 = { VOLUME::_0xF70F00013A62F866(iParam0) };
	vVar3 = { VOLUME::_0x3E2A25B2416DD67E(iParam0) };
	uVar6 = func_316(vVar0, vVar3.x, uParam1, bParam2, iParam3, iParam4, bParam5, fParam6);
	return uVar6;
}

void func_236(int iParam0)
{
	int iVar0;
	var uVar1;

	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_388();
	if (Global_1935630->f_27)
	{
		Global_1935630->f_28 = MISC::GET_GAME_TIMER();
	}
	if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_44))
	{
		if (PED::IS_PED_SHOOTING(Global_35))
		{
			if (WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar1))
			{
			}
			else
			{
				uVar1 = Global_1935630->f_44;
			}
			Global_1935630->f_46 = uVar1;
		}
	}
	switch (iVar0)
	{
		case 0:
			func_389(&(Global_1935630->f_34), &(Global_1935630->f_39));
			Global_1935630->f_38 = iParam0;
			break;
		case 1:
			Global_1935630->f_30 = PLAYER::_0x72AD59F7B7FB6E24(PLAYER::PLAYER_ID(), 4000);
			if (!Global_1935630->f_30)
			{
				if (Global_1935630->f_44 == joaat("weapon_lasso"))
				{
					Global_1935630->f_30 = PED::_0xB65A4DAB460A19BD(Global_35) != 0;
				}
			}
			break;
		case 2:
			switch (Global_1935630->f_46)
			{
				case joaat("weapon_lasso"):
					Global_1935630->f_25 = 0;
					break;
				default:
					if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && WEAPON::_0x5809DBCA0A37C82B(Global_1935630->f_46))
					{
						Global_1935630->f_25 = PED::_0x285D36C5C72B0569(Global_35) <= 3f;
					}
					else
					{
						Global_1935630->f_25 = PED::_0x285D36C5C72B0569(Global_35) <= 1f;
					}
					if (Global_1935630->f_25)
					{
						Global_1935630->f_29 = MISC::GET_FRAME_COUNT();
					}
					break;
			}
			break;
		default:
			Global_1935630->f_38 = iParam0 + 1;
			break;
	}
	Global_22 |= 4;
}

var func_237(int iParam0)
{
	return &(Global_1109400->f_275[iParam0 /*3*/]);
}

int func_238(var uParam0)
{
	int iVar0;

	iVar0 = Global_1935630->f_40;
	if (func_304() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_390(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_390(uParam0);
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_269(iVar0) == -1)
	{
		return 0;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iVar0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(iVar0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
	{
		return 0;
	}
	uParam0->f_14 = iVar0;
	return 1;
}

void func_239(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_391(uParam0);
	}
}

int func_240(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_HUMAN(iParam2))
	{
		iVar1 = func_269(iParam2);
	}
	else
	{
		iVar1 = func_268(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_269(iParam0);
	}
	else
	{
		iVar0 = func_268(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return 1;
		}
	}
	if (func_3(*uParam1, 8388608))
	{
		return 1;
	}
	iVar2 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0);
	iVar3 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam2);
	switch (iVar2)
	{
		case -1976316465:
		case -1505548114:
		case -350651841:
		case -50399569:
		case 106566339:
		case 707888648:
		case 841021282:
			switch (iVar3)
			{
				case -1976316465:
				case -1505548114:
				case -350651841:
				case 841021282:
					return 1;
			}
			break;
	}
	if (iVar2 == iVar3)
	{
		return 1;
	}
	return 0;
}

float func_241(int iParam0, int iParam1)
{
	return func_264(iParam0, iParam1, 1, 1);
}

float func_242(var uParam0)
{
	return uParam0->f_26;
}

int func_243(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam0)
	{
		case 8:
			return iParam2;
		case 4:
		case 16:
			return iParam1;
		case 32:
		case 64:
		case 128:
			return iParam3;
		case 1:
		case 2:
		case 2048:
			return 1;
		case 8192:
			return iParam4;
		default:
			break;
	}
	return 0;
}

void func_244(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_50(uParam0, 134217728);
	}
	else
	{
		func_49(uParam0, 134217728);
	}
}

void func_245()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

int func_246(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return 0;
	}
	if (Global_1935630->f_44 == joaat("weapon_lasso") && Global_1935630->f_27)
	{
	}
	else if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, 0, 0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar2) && iParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2))
		{
			return 0;
		}
	}
	if (Global_1935630->f_40 != 0)
	{
		if (PED::_0xB676EFDA03DADA52(Global_1935630->f_40, 1) == iParam0)
		{
			return 0;
		}
	}
	if (bParam3)
	{
		if (((WEAPON::_0xCB690F680A3EA971(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, iParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_264(iVar0, iParam0, 1, 1) <= 4f)
		{
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, iParam5) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0))
	{
		if ((bParam1 && WEAPON::_0xCB690F680A3EA971(iVar0, 4)) || (bParam2 && WEAPON::_0xCB690F680A3EA971(iVar0, 2)))
		{
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_0x6AD66548840472E5(func_392(iVar0, 0)))
		{
			if (func_393(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_247(var uParam0)
{
	return uParam0->f_17;
}

int func_248(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_12 > fParam3)
	{
		return 0;
	}
	fVar0 = -1f;
	if (!func_3(*uParam0, 4194304))
	{
		fVar0 = fParam3;
	}
	if (PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, fParam3, -1f, fVar0))
	{
		return 1;
	}
	if (*uParam0 & 32768 != 0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17))
		{
			return 1;
		}
	}
	return 0;
}

int func_249(var uParam0)
{
	return uParam0->f_18;
}

int func_250(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return 0;
	}
	if (bParam3)
	{
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, 0) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0))
	{
		if ((bParam1 && WEAPON::_0xCB690F680A3EA971(iVar0, 4)) || (bParam2 && WEAPON::_0xCB690F680A3EA971(iVar0, 2)))
		{
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_0x6AD66548840472E5(func_392(iVar0, 0)))
		{
			if (func_394(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_251(bool bParam0, var uParam1, var uParam2)
{
	if (Global_1935630->f_18)
	{
		if ((uParam2 || Global_1935630->f_19 > 0) || Global_1935630->f_17 > 0)
		{
			return 1;
		}
	}
	else if (uParam1 && !Global_1935630->f_15 == 1370593166)
	{
		return 0;
	}
	if (Global_1935630->f_20 > 0 || (uParam2 && Global_1935630->f_20 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1935630->f_13)
		{
			if (uParam2 || Global_1935630->f_21 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_252(var uParam0)
{
	return uParam0->f_23;
}

int func_253(var uParam0)
{
	return uParam0->f_21;
}

int func_254(var uParam0)
{
	int iVar0;

	switch (uParam0->f_7)
	{
		case 0:
			switch (uParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 2:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 1:
			switch (uParam0->f_6)
			{
				case 3:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
		case 2:
			switch (uParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 1:
					iVar0 = 2;
					break;
			}
			break;
		case 3:
			switch (uParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 4:
			switch (uParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
	}
	if (*uParam0 & 16777216 != 0)
	{
		if (iVar0 == 2)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_255(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_395(iParam0, vParam4, 0.5f))
	{
		if (ENTITY::_0x0C9DBF48C6BA6E4C(iParam0, vParam4, 17))
		{
			return 1;
		}
	}
	if (BUILTIN::VDIST(vParam1, vParam4) < 5f)
	{
		return 1;
	}
	return 0;
}

int func_256(int iParam0)
{
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, false))
	{
		if (Global_1935630->f_44 == joaat("weapon_unarmed"))
		{
			return 1;
		}
		if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_46))
		{
			if (WEAPON::_0x959383DCD42040DA(Global_1935630->f_46) || WEAPON::_0xC4DEC3CA8C365A5D(Global_1935630->f_46))
			{
				return 1;
			}
		}
	}
	if (func_396(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_257(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (PED::_0x772A1969F649E902(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_258(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_219(iParam1))
		{
			return 0;
		}
	}
	fVar0 = 5f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return 1;
	}
	return 0;
}

int func_259(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_219(iParam1))
		{
			return 0;
		}
	}
	fVar0 = 10f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return 1;
	}
	return 0;
}

int func_260(var uParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40f;
	if (func_219(iParam1))
	{
		return 0;
	}
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x2BA9D7BF629F920C(iParam1);
	}
	if (fParam2 < fVar0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, &(Global_1935630->f_34[iParam3]), 17))
		{
			if (PED::_0x06087579E7AA85A9(iParam1, &(Global_1935630->f_34[iParam3]), -1f, -1f, -1f, -1f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_261(int iParam0, var uParam1)
{
	if (!TASK::_0xEFC4303DDC6E60D3(iParam0))
	{
		return 0;
	}
	*uParam1 = TASK::_0xED1F514AF4732258(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return 0;
	}
	if (PED::IS_PED_DEAD_OR_DYING(*uParam1, true))
	{
		return 0;
	}
	if (!PED::_0x2D64376CF437363E(*uParam1))
	{
		return 0;
	}
	return 1;
}

int func_262(int iParam0, int iParam1)
{
	if (PED::_0xB65A4DAB460A19BD(iParam0) == iParam1)
	{
		return 1;
	}
	if (func_397(iParam0, 1, 0, 0) != joaat("weapon_lasso"))
	{
		return 0;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(iParam0, 16, 0))
	{
		if (PED::GET_MELEE_TARGET_FOR_PED(iParam0) == iParam1)
		{
			return 1;
		}
	}
	return 0;
}

bool func_263(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

float func_264(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) && iParam3)
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) && iParam3)
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false), bParam2);
}

int func_265(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_266(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

float func_266(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

float func_267(var uParam0)
{
	return uParam0->f_24;
}

int func_268(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, true))
	{
		return -1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseOwnerTeamA"))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseOwnerTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_269(int iParam0)
{
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(iParam0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
	{
		return -1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseTeamA") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseTeamA"))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseTeamB") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_270(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	float fVar2;

	if (Global_1935630->f_40 != 0)
	{
		bVar0 = true;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), 1, 1))
		{
			return 1;
		}
	}
	if (bVar0)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, Global_1935630->f_40, 1, 1))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (PED::_0x947E43F544B6AB34(iParam0, PLAYER::GET_PLAYER_INDEX(), 10, 400))
		{
			if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
		if (PED::_0x947E43F544B6AB34(iParam0, PLAYER::GET_PLAYER_INDEX(), 11, 400))
		{
			if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
		if (bParam3)
		{
			if (func_261(Global_35, &iVar1))
			{
				if (fParam4 < 4f)
				{
					if (PED::IS_PED_RAGDOLL(iParam0) || (!bParam2 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar1, iParam0)))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (PED::_0x29FCE825613FEFCA(iParam0, 400))
		{
			return 1;
		}
	}
	if (fParam4 <= 0f)
	{
		fVar2 = func_264(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
	}
	else
	{
		fVar2 = fParam4;
	}
	if (fVar2 < 1f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0))
		{
			if (!bParam2)
			{
				return 1;
			}
			else if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
	}
	if (bVar0)
	{
		if (func_264(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_1935630->f_40, iParam0))
			{
				if (!bParam2)
				{
					return 1;
				}
				else if (PED::IS_PED_RAGDOLL(iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_271(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_376(1, &iVar0, &iVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iVar0 != iParam0)
		{
			if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
				{
					if (!bParam2 || !func_272(uParam1, iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (iVar1 != iParam0)
		{
			if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
			{
				if (!bParam2 || !func_272(uParam1, iVar1))
				{
					if (func_266(iVar1, Global_36, 1) < 5f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_272(var uParam0, int iParam1)
{
	int iVar0;

	if (DECORATOR::DECOR_EXIST_ON(iParam1, "bIsCriminal") && DECORATOR::DECOR_GET_BOOL(iParam1, "bIsCriminal"))
	{
		return 1;
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam1, 4, false))
	{
		return 1;
	}
	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam1);
	switch (iVar0)
	{
		case -1996978098:
		case -1448293989:
		case -350226955:
		case 266218800:
		case 555364152:
		case 1078461828:
		case 1222652248:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_273(int iParam0)
{
	if (func_398())
	{
		return 0;
	}
	return func_399(((*Global_1347702)[58 /*49*/])->f_15, 1);
}

int func_274(var uParam0)
{
	return uParam0->f_20;
}

int func_275(int iParam0, var uParam1, bool bParam2, float fParam3)
{
	if (!bParam2)
	{
		if (uParam1->f_4 == 0)
		{
			return 0;
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = uParam1->f_12;
	}
	if (PED::IS_PED_FACING_PED(iParam0, Global_35, 90f))
	{
		if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return 1;
		}
	}
	else if (fParam3 < 1.5f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, Global_35))
		{
			return 1;
		}
	}
	return 0;
}

int func_276(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar0 = func_400(uParam1);
	if (uParam1->f_12 > (fVar0 + 5f))
	{
		return 0;
	}
	if (!PED::_0x5102307CE88798EB(iParam0))
	{
		PED::REQUEST_PED_VISIBILITY_TRACKING(iParam0);
	}
	if (uParam1->f_12 < fVar0 || PED::IS_TRACKED_PED_VISIBLE(iParam0))
	{
		fVar1 = -1f;
		fVar2 = func_401(PED::_0x2BA9D7BF629F920C(iParam0), (fVar0 + 5f));
		if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, fVar2, -1f, fVar1) && PED::_0x7F9B9791D4CB71F6(iParam0, Global_35, 1, 0) == 1)
		{
			return 1;
		}
		else if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_44))
		{
			if (WEAPON::_0x79407D33328286C6(Global_1935630->f_44) || WEAPON::_0x506F1DE1BFC75304(Global_1935630->f_44))
			{
				if (uParam1->f_12 <= 5f)
				{
					if (func_402())
					{
						if (PED::IS_PED_FACING_PED(Global_35, iParam0, 110f))
						{
							if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_277(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (func_219(iParam0))
	{
		PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), 0.25f);
	}
	if (((PED::_0xD5FE956C70FF370B(Global_35) || PED::IS_PED_IN_COVER(Global_35, 0, 0)) || PED::IS_PED_GOING_INTO_COVER(Global_35)) || *uParam1 & 2097152 != 0)
	{
		iVar1 = 0;
	}
	else
	{
		iVar1 = 1;
	}
	if (PED::_0x0EA9EACBA3B01601(Global_35, iParam0, iVar1) && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) > 4f)
	{
		if (*uParam1 & 512 != 0)
		{
			if (PED::IS_PED_IN_COVER(Global_35, 0, 0) || PED::IS_PED_GOING_INTO_COVER(Global_35))
			{
				return 0;
			}
			if (PED::_0xD5FE956C70FF370B(Global_35) || ((PED::_0xA29FD00D45311EB7(Global_35, "stealth") == 1f && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) < 8f) && *uParam1 & 2097152 != 0))
			{
				return 0;
			}
		}
		if (PED::_0xA29FD00D45311EB7(Global_35, "stealth") == 1f && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) > 8f)
		{
		}
		iVar0 = 1;
	}
	return iVar0;
}

bool func_278(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
{
	struct<7> Var0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = bParam4;
	Var0.f_6 = iParam7;
	return func_403(iParam0, &Var0);
}

int func_279(int iParam0, var uParam1)
{
	var uVar0;

	uVar0 = *uParam1;
	if (PLAYER::_0x3EE1F7A8C32F24E1(iParam0, &uVar0, 0, 0))
	{
		return 1;
	}
	return 0;
}

bool func_280(var uParam0)
{
	return func_285(*uParam0, 2);
}

float func_281(var uParam0)
{
	if (!func_131(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_280(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_368() - uParam0->f_1);
}

void func_282(var uParam0, float fParam1, int iParam2)
{
	if (iParam2 || !func_131(uParam0))
	{
		func_286(uParam0, fParam1);
	}
}

void func_283(var uParam0)
{
	if (!func_131(uParam0))
	{
	}
	if (!func_280(uParam0))
	{
		uParam0->f_2 = (func_368() - uParam0->f_1);
		func_404(uParam0, 2);
	}
}

void func_284(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_285(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_286(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_368() - fParam1);
	func_404(uParam0, 1);
	func_405(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_287(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (ENTITY::_0x9A100F1CF4546629(iParam0))
	{
		iVar0 = func_406(iParam0);
	}
	return iVar0;
}

void func_288(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (ENTITY::DOES_ENTITY_EXIST(Global_35) && !Global_1935630->f_12)
	{
		iVar0 = func_407(iParam0);
		if (iVar0 <= 1)
		{
			iVar1 = 462;
			if (func_408(iParam0))
			{
				iVar1 = 463;
			}
			uVar2 = func_409(iParam0);
			func_410(iVar1, uVar2, 1);
		}
	}
}

void func_289(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	PED::_0x6569F31A01B4C097(iVar0, 0, iParam1);
	PED::_0x6569F31A01B4C097(iVar0, 1, iParam1);
}

int func_290(int iParam0, int iParam1, char* sParam2, var uParam3, float fParam4, int iParam5, bool bParam6, var uParam7, var uParam8, bool bParam9, var uParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
{
	bool bVar0;
	float fVar1;
	int iVar2;
	struct<8> Var3;

	iParam5 = iParam5;
	iParam1 = iParam1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return -1;
	}
	if (bParam6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iParam0, iParam1, 17))
			{
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	if (fParam4 == -1f)
	{
		if (func_214())
		{
			fParam4 = 50f;
		}
		else
		{
			fParam4 = 75f;
		}
	}
	if (bParam9)
	{
		if (iParam0 != Global_35 && iParam1 != Global_35)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				if (func_411(iParam0, 1, 1) > fParam4)
				{
					return -1;
				}
			}
		}
	}
	bVar0 = (iParam0 == iParam1 || iParam1 == 0);
	if ((!ENTITY::IS_ENTITY_DEAD(iParam0) || iParam11 == 1718175949) || bParam9 == 0)
	{
		if (!bVar0)
		{
			fVar1 = func_264(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || uParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_133(&uLocal_0);
			if (!bVar0 && uParam10)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_412(iParam0, iParam1, fVar1, bParam13))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam1, iParam0, 7500, 48, 31, 0);
				}
			}
			if (bParam12)
			{
				Var3.f_5 = 1;
				Var3.f_6 = 1;
				Var3 = sParam2;
				Var3.f_3 = iParam11;
				Var3.f_4 = iParam1;
				Var3.f_5 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
				Var3.f_6 = iParam15;
				Var3.f_2 = iParam5;
				if (bParam14)
				{
					MISC::SET_BIT(&(Var3.f_7), 3);
					MISC::SET_BIT(&(Var3.f_7), 2);
				}
				iVar2 = AUDIO::_0x72E4D1C4639BC465(iParam0, &Var3);
				if (iVar2 >= 0)
				{
					AUDIO::_0xB18FEC133C7C6C69(iVar2);
				}
			}
			else
			{
				iVar2 = func_413(func_278(iParam0, sParam2, iParam11, iParam1, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

bool func_291(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

bool func_292(int iParam0, int iParam1)
{
	if (!func_291(iParam0))
	{
		return false;
	}
	return (Global_1395482->f_2[iParam0] && iParam1) != 0;
}

int func_293(int iParam0)
{
	return (Global_17503.f_42[iParam0 /*8*/])->f_5;
}

int func_294(int iParam0, int iParam1)
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
	if (func_414(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_414(iVar0, 2))
	{
		if (PED::_0x3AA24CCC0D451379(iParam0))
		{
			return 0;
		}
	}
	if (func_414(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_414(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_414(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_414(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return 0;
		}
	}
	if (func_414(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_414(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_295(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	if (bParam2)
	{
		MISC::_0xE98D55C5983F2509(iParam0);
	}
	if (!PED::GET_PED_CONFIG_FLAG(iParam0, 178, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 297, true) != bParam2)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 297, bParam2);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 315, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 331, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 331, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 130, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 301, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 301, false);
	}
	if (bParam2 && iParam3)
	{
		if (MISC::_0x870708A6E147A9AD(iParam0, "INTERACT_LOCKON", fParam1, 0, 0, 0, 0, 0, 0, -1))
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

int func_296(int iParam0)
{
	int iVar0;

	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam0);
	switch (iVar0)
	{
		case -1448293989:
			return 3;
		case 555364152:
			return 2;
		case -1996978098:
			return 0;
		case 1078461828:
			return 1;
		case -1535431934:
			return 4;
		case -1663301869:
			return 5;
		default:
			break;
	}
	return -1;
}

void func_297(int* iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (ENTITY::_0xA7E51B53309EAC97(*iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, 0);
	}
	PED::DELETE_PED(iParam0);
}

void func_298(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_36580[iVar0 /*2*/] == iParam0)
		{
			(Global_36580[iVar0 /*2*/])->f_1 = 3;
		}
		iVar0++;
	}
}

void func_299(var uParam0)
{
	if (uParam0->f_170)
	{
		func_415();
	}
}

void func_300(var uParam0)
{
	if (uParam0->f_48 && !uParam0->f_45)
	{
		func_416(32);
		func_303(uParam0->f_3, 1, 0, 0, 2, 0, 0, 1);
	}
}

int func_301(var uParam0)
{
	if (func_417(uParam0) || uParam0->f_44)
	{
		uParam0->f_44 = 1;
		func_418(uParam0->f_3);
		func_208(uParam0, 0, 1);
		func_419(uParam0->f_3, uParam0->f_51.f_5, 0, uParam0->f_43, -1);
		func_420(0, 0);
		return 1;
	}
	return 0;
}

bool func_302(int iParam0)
{
	if (!func_165(iParam0))
	{
		return true;
	}
	return (Global_17503.f_42[iParam0 /*8*/])->f_4 > 0;
}

void func_303(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;

	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_293(iParam0) == 1 && iParam7)
	{
		return;
	}
	if (bParam6)
	{
		if ((Global_17503.f_42[iParam0 /*8*/])->f_4 > iVar0)
		{
			return;
		}
	}
	if ((iParam1 || bParam6) || func_304() != -1)
	{
		(Global_17503.f_42[iParam0 /*8*/])->f_4 = 0;
	}
	(Global_17503.f_42[iParam0 /*8*/])->f_4 = ((Global_17503.f_42[iParam0 /*8*/])->f_4 + iVar0);
}

int func_304()
{
	return Global_1572887->f_12;
}

var func_305(var uParam0)
{
	return uParam0;
}

void func_306(int iParam0)
{
	if (!func_421(iParam0))
	{
		return;
	}
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_DELETE(((*Global_1945938)[iParam0 /*18*/])->f_3);
	}
	((*Global_1945938)[iParam0 /*18*/])->f_4 = 0;
	(*Global_1945938)[iParam0 /*18*/] = 1;
	((*Global_1945938)[iParam0 /*18*/])->f_16 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_1 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_6 = { 0f, 0f, 0f };
	((*Global_1945938)[iParam0 /*18*/])->f_12 = { 0f, 0f, 0f };
	((*Global_1945938)[iParam0 /*18*/])->f_9 = 0f;
	((*Global_1945938)[iParam0 /*18*/])->f_10 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_11 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_2 = 1;
	((*Global_1945938)[iParam0 /*18*/])->f_15 = -1f;
}

char* func_307(char* sParam0)
{
	return sParam0;
}

int func_308(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;

	uVar0 = &Global_1326862->f_512[iParam1];
	iVar1 = &Global_1326862->f_558[iParam1];
	iVar2 = uVar0;
	while (iVar2 <= iVar1)
	{
		if (iParam0 == &Global_1326862->f_11[iVar2])
		{
			return iVar2;
		}
		iVar2++;
	}
	return -1;
}

void func_309(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_310(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
		case 1:
			return 12;
		case 2:
			return 23;
		case 3:
			return 6;
		case 4:
			return 17;
		case 5:
			return 1;
		case 6:
			return 3;
		case 7:
			return 23;
		case 8:
			return 1;
		case 9:
			return 8;
		case 10:
			return 2;
		case 11:
			return 4;
		case 12:
			return 18;
		case 13:
			return 12;
		case 14:
			return 7;
		case 15:
			return 21;
		case 16:
			return 19;
		case 17:
			return 12;
		case 18:
			return 7;
		case 19:
			return 1;
		case 20:
			return 17;
		case 21:
			return 3;
		case 22:
			return 1;
		case 23:
			return 17;
		case 24:
			return 14;
		case 27:
			return 11;
		case 28:
			return 5;
		case 29:
			return 8;
		case 30:
			return 38;
		case 31:
			return 20;
		case 32:
			return 10;
		case 33:
			return 13;
		case 34:
			return 11;
		case 35:
			return 2;
		case 36:
			return 12;
		case 37:
			return 20;
		case 38:
			return 1;
		case 39:
			return 1;
		case 40:
			return 12;
		case 41:
			return 3;
		case 42:
			return 1;
		case 43:
			return 27;
		case 44:
			return 9;
		case 45:
			return 15;
		case 46:
			return 2;
		case 47:
			return 2;
		case 48:
			return 9;
		case 49:
			return 7;
		case 50:
			return 36;
		case 51:
			return 5;
		case 53:
			return 3;
		case 54:
			return 6;
		case 55:
			return 2;
		case 56:
			return 12;
		case 57:
			return 14;
		case 58:
			return 8;
		case 59:
			return 3;
		case 60:
			return 11;
		case 61:
			return 2;
		case 62:
			return 17;
		case 63:
			return 6;
		case 64:
			return 7;
		case 65:
			return 10;
		case 66:
			return 12;
		case 67:
			return 5;
		case 68:
			return 5;
		case 69:
			return 5;
		case 70:
			return 6;
		case 71:
			return 8;
		case 72:
			return 9;
		case 73:
			return 4;
		case 74:
			return 1;
		case 75:
			return 1;
		case 76:
			return 1;
		case 77:
			return 3;
		case 78:
			return 2;
		case 79:
			return 6;
		case 80:
			return 3;
		case 81:
			return 15;
		case 82:
			return 9;
		case 83:
			return 2;
		case 84:
			return 2;
		case 85:
			return 11;
		case 86:
			return 2;
		case 87:
			return 9;
		case 88:
			return 2;
		case 89:
			return 1;
		case 90:
			return 2;
		case 91:
			return 2;
		case 92:
			return 3;
		case 93:
			return 1;
		case 94:
			return 9;
		case 95:
			return 1;
		case 96:
			return 7;
		case 97:
			return 6;
		case 98:
			return 4;
		case 99:
			return 2;
		case 100:
			return 1;
		case 101:
			return 2;
		case 102:
			return 3;
		case 103:
			return 3;
		case 104:
			return 3;
		case 105:
			return 2;
		case 106:
			return 4;
		case 107:
			return 1;
		case 108:
			return 3;
		case 109:
			return 3;
		case 110:
			return 1;
		case 111:
			return 4;
		case 112:
			return 3;
		case 113:
			return 3;
		case 114:
			return 16;
		case 115:
			return 3;
		case 116:
			return 7;
		case 117:
			return 2;
		case 118:
			return 10;
		case 119:
			return 17;
		default:
			break;
	}
	return 0;
}

int func_311(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 10;
		case 2:
			return 22;
		case 3:
			return 45;
		case 4:
			return 51;
		case 5:
			return 68;
		case 6:
			return 69;
		case 7:
			return 72;
		case 8:
			return 95;
		case 9:
			return 96;
		case 10:
			return 104;
		case 11:
			return 106;
		case 12:
			return 110;
		case 13:
			return 128;
		case 14:
			return 140;
		case 15:
			return 147;
		case 16:
			return 168;
		case 17:
			return 187;
		case 18:
			return 199;
		case 19:
			return 206;
		case 20:
			return 207;
		case 21:
			return 224;
		case 22:
			return 227;
		case 23:
			return 228;
		case 24:
			return 245;
		case 27:
			return 259;
		case 28:
			return 270;
		case 29:
			return 275;
		case 30:
			return 283;
		case 31:
			return 321;
		case 32:
			return 341;
		case 33:
			return 351;
		case 34:
			return 364;
		case 35:
			return 375;
		case 36:
			return 377;
		case 37:
			return 389;
		case 38:
			return 409;
		case 39:
			return 410;
		case 40:
			return 411;
		case 41:
			return 423;
		case 42:
			return 426;
		case 43:
			return 427;
		case 44:
			return 454;
		case 45:
			return 463;
		case 46:
			return 478;
		case 47:
			return 480;
		case 48:
			return 482;
		case 49:
			return 491;
		case 50:
			return 498;
		case 51:
			return 534;
		case 53:
			return 539;
		case 54:
			return 542;
		case 55:
			return 548;
		case 56:
			return 550;
		case 57:
			return 562;
		case 58:
			return 576;
		case 59:
			return 584;
		case 60:
			return 587;
		case 61:
			return 598;
		case 62:
			return 600;
		case 63:
			return 617;
		case 64:
			return 623;
		case 65:
			return 630;
		case 66:
			return 640;
		case 67:
			return 652;
		case 68:
			return 657;
		case 69:
			return 662;
		case 70:
			return 667;
		case 71:
			return 673;
		case 72:
			return 681;
		case 73:
			return 690;
		case 74:
			return 694;
		case 75:
			return 695;
		case 76:
			return 696;
		case 77:
			return 697;
		case 78:
			return 700;
		case 79:
			return 702;
		case 80:
			return 708;
		case 81:
			return 711;
		case 82:
			return 726;
		case 83:
			return 735;
		case 84:
			return 737;
		case 85:
			return 739;
		case 86:
			return 750;
		case 87:
			return 752;
		case 88:
			return 761;
		case 89:
			return 763;
		case 90:
			return 764;
		case 91:
			return 766;
		case 92:
			return 768;
		case 93:
			return 771;
		case 94:
			return 772;
		case 95:
			return 781;
		case 96:
			return 782;
		case 97:
			return 789;
		case 98:
			return 795;
		case 99:
			return 799;
		case 100:
			return 801;
		case 101:
			return 802;
		case 102:
			return 804;
		case 103:
			return 807;
		case 104:
			return 810;
		case 105:
			return 813;
		case 106:
			return 815;
		case 107:
			return 819;
		case 108:
			return 820;
		case 109:
			return 823;
		case 110:
			return 826;
		case 111:
			return 827;
		case 112:
			return 831;
		case 113:
			return 834;
		case 114:
			return 837;
		case 115:
			return 853;
		case 116:
			return 856;
		case 117:
			return 863;
		case 118:
			return 865;
		case 119:
			return 875;
		default:
			break;
	}
	return -1;
}

int func_312(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 7:
			switch (iParam1)
			{
				case 0:
					*((*uParam2)[0 /*3*/]) = { -1075.036f, -498.9537f, 80.4572f };
					*((*uParam2)[1 /*3*/]) = { -1058.055f, -609.5211f, 76.6181f };
					*((*uParam2)[2 /*3*/]) = { -1272.208f, -612.5573f, 100.8638f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 1:
					*((*uParam2)[0 /*3*/]) = { -2288.302f, -389.368f, 155.9838f };
					*((*uParam2)[1 /*3*/]) = { -2267.837f, -294.2087f, 162.0459f };
					*((*uParam2)[2 /*3*/]) = { -2588.6f, -283.9735f, 157.3797f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 2:
					*((*uParam2)[0 /*3*/]) = { -1751.366f, 174.5853f, 140.272f };
					*((*uParam2)[1 /*3*/]) = { -1639.375f, -163.5104f, 165.0787f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 3:
					*((*uParam2)[0 /*3*/]) = { -771.0659f, -259.0937f, 47.9193f };
					*((*uParam2)[1 /*3*/]) = { -822.0638f, -500.4154f, 43.2726f };
					*((*uParam2)[2 /*3*/]) = { -1024.218f, -401.8981f, 74.0529f };
					*((*uParam2)[3 /*3*/]) = { -1006.993f, -282.9351f, 74.6298f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 4:
					*((*uParam2)[0 /*3*/]) = { -1338.573f, 327.9119f, 84.6143f };
					*((*uParam2)[1 /*3*/]) = { -1232.65f, 330.8496f, 62.4046f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 5:
					*((*uParam2)[0 /*3*/]) = { -1502.984f, -885.5237f, 88.3171f };
					*((*uParam2)[1 /*3*/]) = { -1297.384f, -819.8127f, 66.0834f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 6:
					*((*uParam2)[0 /*3*/]) = { 350.4579f, 1090.999f, 185.1566f };
					*((*uParam2)[1 /*3*/]) = { 92.55f, 1093.111f, 180.0293f };
					*((*uParam2)[2 /*3*/]) = { 409.0284f, 1196.024f, 176.0849f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 7:
					*((*uParam2)[0 /*3*/]) = { 749.1558f, 1391.218f, 169.0392f };
					*((*uParam2)[1 /*3*/]) = { 655.3339f, 1501.052f, 182.3537f };
					*((*uParam2)[2 /*3*/]) = { 564.7472f, 1351.075f, 181.0084f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 8:
					*((*uParam2)[0 /*3*/]) = { 798.8331f, 1217.176f, 139.389f };
					*((*uParam2)[1 /*3*/]) = { 796.767f, 1022.301f, 117.9023f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 9:
					*((*uParam2)[0 /*3*/]) = { 1499.724f, 1483.517f, 148.1553f };
					*((*uParam2)[1 /*3*/]) = { 1762.153f, 1460.505f, 154.3694f };
					*((*uParam2)[2 /*3*/]) = { 1791.473f, 1553.145f, 158.3201f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 10:
					*((*uParam2)[0 /*3*/]) = { 1592.016f, 838.9788f, 137.0506f };
					*((*uParam2)[1 /*3*/]) = { 1481.788f, 983.7827f, 159.4282f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 11:
					*((*uParam2)[0 /*3*/]) = { 2066.821f, 1396.182f, 161.616f };
					*((*uParam2)[1 /*3*/]) = { 2018.585f, 1589.685f, 166.3078f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 12:
					*((*uParam2)[0 /*3*/]) = { 1931.246f, 1417.71f, 175.205f };
					*((*uParam2)[1 /*3*/]) = { 1758.616f, 1470.966f, 153.1616f };
					*((*uParam2)[2 /*3*/]) = { 1908.101f, 1340.718f, 184.5229f };
					*((*uParam2)[3 /*3*/]) = { 1758.631f, 1339.565f, 179.8116f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 13:
					*((*uParam2)[0 /*3*/]) = { 906.3064f, 1862.921f, 276.5091f };
					*((*uParam2)[1 /*3*/]) = { 1227.372f, 1910.686f, 303.6052f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 14:
					*((*uParam2)[0 /*3*/]) = { 39.5976f, -446.5889f, 73.5138f };
					*((*uParam2)[1 /*3*/]) = { 261.8906f, -501.4701f, 69.7941f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 15:
					*((*uParam2)[0 /*3*/]) = { 147.7795f, 574.2345f, 124.4514f };
					*((*uParam2)[1 /*3*/]) = { 353.6481f, 791.2978f, 158.3952f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 16:
					*((*uParam2)[0 /*3*/]) = { 1152.273f, 1.4974f, 91.3795f };
					*((*uParam2)[1 /*3*/]) = { 1229.58f, -41.3491f, 97.8027f };
					*((*uParam2)[2 /*3*/]) = { 1388.351f, 191.7681f, 91.0511f };
					*((*uParam2)[3 /*3*/]) = { 1182.174f, 249.1711f, 95.8012f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 17:
					*((*uParam2)[0 /*3*/]) = { 2436.349f, 1255.752f, 108.7815f };
					*((*uParam2)[1 /*3*/]) = { 2581.654f, 1319.187f, 109.4025f };
					*((*uParam2)[2 /*3*/]) = { 2648.991f, 1389.994f, 86.802f };
					*((*uParam2)[3 /*3*/]) = { 2499.877f, 1520.766f, 84.1962f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 18:
					*((*uParam2)[0 /*3*/]) = { 2886.699f, 650.0214f, 56.9408f };
					*((*uParam2)[1 /*3*/]) = { 2841.172f, 901.8114f, 48.3778f };
					*((*uParam2)[2 /*3*/]) = { 2789.388f, 789.1998f, 69.4871f };
					*((*uParam2)[3 /*3*/]) = { 2838.36f, 650.3098f, 66.5798f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 19:
					*((*uParam2)[0 /*3*/]) = { 1966.349f, 55.0459f, 77.6335f };
					*((*uParam2)[1 /*3*/]) = { 1997.614f, 290.7841f, 80.4139f };
					*((*uParam2)[2 /*3*/]) = { 2073.044f, 228.7493f, 69.5644f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 20:
					*((*uParam2)[0 /*3*/]) = { 2515.785f, 798.911f, 69.7688f };
					*((*uParam2)[1 /*3*/]) = { 2506.887f, 618.8073f, 68.6403f };
					*((*uParam2)[2 /*3*/]) = { 2377.615f, 751.5095f, 66.3114f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 21:
					*((*uParam2)[0 /*3*/]) = { 2128.213f, 1721.563f, 130.3847f };
					*((*uParam2)[1 /*3*/]) = { 2264.183f, 1720.874f, 103.2933f };
					*((*uParam2)[2 /*3*/]) = { 2134.791f, 1568.948f, 115.1957f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 22:
					*((*uParam2)[0 /*3*/]) = { 2826.741f, 2204.882f, 155.551f };
					*((*uParam2)[1 /*3*/]) = { 2838.074f, 1999.792f, 161.9055f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 2:
					*((*uParam2)[0 /*3*/]) = { 350.8081f, 1195.732f, 176.1334f };
					*((*uParam2)[1 /*3*/]) = { -9.8736f, 1100.082f, 171.5504f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 6:
					*((*uParam2)[0 /*3*/]) = { 951.1178f, 411.6494f, 111.4674f };
					*((*uParam2)[1 /*3*/]) = { 786.1444f, 1078.456f, 125.8602f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 7:
					*((*uParam2)[0 /*3*/]) = { -784.4099f, 128.655f, 42.3724f };
					*((*uParam2)[1 /*3*/]) = { -478.0183f, 232.7834f, 42.1853f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 8:
					*((*uParam2)[0 /*3*/]) = { 1148.99f, 1456.264f, 190.799f };
					*((*uParam2)[1 /*3*/]) = { 840.1897f, 1221.47f, 141.6344f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 9:
					*((*uParam2)[0 /*3*/]) = { 1413.901f, -334.469f, 88.1597f };
					*((*uParam2)[1 /*3*/]) = { 1222.652f, -59.931f, 93.5015f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 10:
					*((*uParam2)[0 /*3*/]) = { 1548.822f, -1190.659f, 49.1131f };
					*((*uParam2)[1 /*3*/]) = { 1547.513f, -1410.952f, 60.6415f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
			}
			break;
		case 30:
			switch (iParam1)
			{
				case 0:
					*((*uParam2)[0 /*3*/]) = { 2466.914f, -732.939f, 42.531f };
					*((*uParam2)[1 /*3*/]) = { 2303.902f, -750.908f, 41.569f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 1:
					*((*uParam2)[0 /*3*/]) = { 1757.029f, -832.27f, 41.718f };
					*((*uParam2)[1 /*3*/]) = { 1882.646f, -955.777f, 42.672f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 2:
					*((*uParam2)[0 /*3*/]) = { 2117.433f, -847.803f, 41.749f };
					*((*uParam2)[1 /*3*/]) = { 2112.33f, -625.643f, 41.772f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 12:
					*((*uParam2)[0 /*3*/]) = { 2552.283f, -208.465f, 43.013f };
					*((*uParam2)[1 /*3*/]) = { 2725.735f, 32.896f, 51.048f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 13:
					*((*uParam2)[0 /*3*/]) = { 2219.83f, -503.6095f, 41.0142f };
					*((*uParam2)[1 /*3*/]) = { 2371.775f, -527.7825f, 40.7584f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 14:
					*((*uParam2)[0 /*3*/]) = { 2157.784f, -459.4536f, 40.5431f };
					*((*uParam2)[1 /*3*/]) = { 2354.891f, -401.4336f, 40.5042f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 26:
					*((*uParam2)[0 /*3*/]) = { 3266.224f, 1664.717f, 60.269f };
					*((*uParam2)[1 /*3*/]) = { 3221.388f, 1809.026f, 74.813f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 27:
					*((*uParam2)[0 /*3*/]) = { 2782.415f, 634.97f, 74.323f };
					*((*uParam2)[1 /*3*/]) = { 2594.708f, 556.157f, 75.742f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 28:
					*((*uParam2)[0 /*3*/]) = { 3268.065f, 1618.25f, 51.5041f };
					*((*uParam2)[1 /*3*/]) = { 3151.345f, 1476.824f, 42.9185f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 29:
					*((*uParam2)[0 /*3*/]) = { 2524.41f, 1402.663f, 97.646f };
					*((*uParam2)[1 /*3*/]) = { 2436.137f, 1254.158f, 109.722f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 30:
					*((*uParam2)[0 /*3*/]) = { 2145.954f, 1592.128f, 118.3828f };
					*((*uParam2)[1 /*3*/]) = { 2118.189f, 1395.341f, 146.675f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
			}
			break;
		case 31:
			switch (iParam1)
			{
				case 5:
					*((*uParam2)[0 /*3*/]) = { 2724.549f, -7.066f, 51.083f };
					*((*uParam2)[1 /*3*/]) = { 2542.005f, -233.1396f, 41.4732f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 6:
					*((*uParam2)[0 /*3*/]) = { 2300.604f, -441.226f, 41.797f };
					*((*uParam2)[1 /*3*/]) = { 2569.006f, -361.3357f, 40.5728f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 7:
					*((*uParam2)[0 /*3*/]) = { 762.142f, 1455.038f, 160.172f };
					*((*uParam2)[1 /*3*/]) = { 581.92f, 1359.699f, 182.007f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 8:
					*((*uParam2)[0 /*3*/]) = { 1561.312f, 1602.54f, 188.8227f };
					*((*uParam2)[1 /*3*/]) = { 1315.677f, 1471.669f, 160.1485f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
			}
			break;
		case 44:
			switch (iParam1)
			{
				case 0:
					*((*uParam2)[0 /*3*/]) = { -1366.784f, 150.125f, 77.8591f };
					*((*uParam2)[1 /*3*/]) = { -1627.641f, 266.7185f, 105.116f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 1:
					*((*uParam2)[0 /*3*/]) = { -1366.784f, 150.125f, 77.859f };
					*((*uParam2)[1 /*3*/]) = { -1627.641f, 266.719f, 105.116f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 3:
					*((*uParam2)[0 /*3*/]) = { -1090.74f, 151.3781f, 58.3089f };
					*((*uParam2)[1 /*3*/]) = { -823.9262f, 278.8717f, 92.3226f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 6:
					*((*uParam2)[0 /*3*/]) = { 1714.427f, -1933.318f, 45.6594f };
					*((*uParam2)[1 /*3*/]) = { 1714.571f, -1856.846f, 48.5272f };
					*((*uParam2)[2 /*3*/]) = { 1531.954f, -1706.023f, 57.3286f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
			}
			break;
		case 50:
			switch (iParam1)
			{
				case 6:
					*((*uParam2)[0 /*3*/]) = { -1736.774f, -836.8357f, 96.5171f };
					*((*uParam2)[1 /*3*/]) = { -1915.833f, -682.8271f, 116.4542f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 7:
					*((*uParam2)[0 /*3*/]) = { -755.4001f, -796.7909f, 49.7304f };
					*((*uParam2)[1 /*3*/]) = { -1039.648f, -688.1265f, 69.6641f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 15:
					*((*uParam2)[0 /*3*/]) = { 902.8263f, 386.1294f, 115.5771f };
					*((*uParam2)[1 /*3*/]) = { 615.3056f, 258.5487f, 103.5037f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 16:
					*((*uParam2)[0 /*3*/]) = { 874.3443f, 827.1644f, 114.901f };
					*((*uParam2)[1 /*3*/]) = { 859.3398f, 590.4376f, 110.1404f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 17:
					*((*uParam2)[0 /*3*/]) = { -769.1578f, 299.2588f, 93.7465f };
					*((*uParam2)[1 /*3*/]) = { -588.5746f, 443.7545f, 97.2538f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 18:
					*((*uParam2)[0 /*3*/]) = { 442.6022f, -274.5149f, 141.8569f };
					*((*uParam2)[1 /*3*/]) = { 252.7831f, -219.3386f, 129.8086f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 19:
					*((*uParam2)[0 /*3*/]) = { 82.4531f, 27.6559f, 99.5123f };
					*((*uParam2)[1 /*3*/]) = { 441.6833f, 325.2197f, 102.5464f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 24:
					*((*uParam2)[0 /*3*/]) = { 2682.666f, 254.0104f, 62.8591f };
					*((*uParam2)[1 /*3*/]) = { 2726.419f, 15.7709f, 48.8237f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 25:
					*((*uParam2)[0 /*3*/]) = { 2166.428f, 1654.068f, 114.0645f };
					*((*uParam2)[1 /*3*/]) = { 2375.665f, 1665.218f, 95.4254f };
					*((*uParam2)[2 /*3*/]) = { 2402.211f, 1816.359f, 106.9185f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 28:
					*((*uParam2)[0 /*3*/]) = { 1832.606f, -1986.944f, 43.5085f };
					*((*uParam2)[1 /*3*/]) = { 1691.085f, -1896.396f, 47.2405f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 29:
					*((*uParam2)[0 /*3*/]) = { 1375.404f, -1591.844f, 68.4645f };
					*((*uParam2)[1 /*3*/]) = { 1603.71f, -1744.756f, 52.1714f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 30:
					*((*uParam2)[0 /*3*/]) = { 816.4478f, -915.9297f, 49.4983f };
					*((*uParam2)[1 /*3*/]) = { 1006.361f, -1293.403f, 53.9613f };
					*((*uParam2)[2 /*3*/]) = { 1094.919f, -1166.476f, 67.619f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 31:
					*((*uParam2)[0 /*3*/]) = { 810.3403f, -872.8113f, 51.4344f };
					*((*uParam2)[1 /*3*/]) = { 825.1677f, -576.8741f, 79.2273f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 32:
					*((*uParam2)[0 /*3*/]) = { 1018.101f, -922.2153f, 66.9381f };
					*((*uParam2)[1 /*3*/]) = { 832.2029f, -891.5154f, 51.1305f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 33:
					*((*uParam2)[0 /*3*/]) = { 1472.147f, -437.5275f, 75.9389f };
					*((*uParam2)[1 /*3*/]) = { 1224.738f, -51.7863f, 93.1655f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
			}
			break;
	}
	return 0;
}

Vector3 func_313(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	iVar1 = -1;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		vVar2 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!func_175(*((*uParam1)[iVar0 /*3*/])))
			{
				if (iVar1 < 0 || BUILTIN::VDIST2(vVar2, *((*uParam1)[iVar0 /*3*/])) < BUILTIN::VDIST2(vVar2, *((*uParam1)[iVar1 /*3*/])))
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar1 > -1 && iVar1 < *uParam1)
		{
			return *((*uParam1)[iVar1 /*3*/]);
		}
	}
	return 0f, 0f, 0f;
}

void func_314(var uParam0, bool bParam1)
{
	if (!MAP::DOES_BLIP_EXIST(uParam0->f_6))
	{
		uParam0->f_6 = MAP::_0x554D9D53F696D002(-1702907713, *uParam0);
		MAP::_0x662D364ABF16DE2F(uParam0->f_6, 580546400);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_6, "BLIP_DEBUG");
		if (bParam1)
		{
			_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
			func_42("BEAT_GLB", 5500, 0, 1, 0, 0, -1, -1, 0);
		}
		PED::_0x9851DE7AEC10B4E1(*uParam0, 100f, 1, 0);
	}
}

bool func_315(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_316(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, int iParam7, bool bParam8, float fParam9)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (!bParam8 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_175(vParam0))
	{
		return 0;
	}
	iVar1 = 0;
	if (!bParam5)
	{
		iVar1 |= 2;
	}
	iVar1 |= 1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam6))
	{
		if (func_230(vParam0))
		{
			return 0;
		}
		iVar0 = VOLUME::_0x00BBF7CEAE8C666A(vParam0, fParam3, iVar1, 0);
	}
	else
	{
		vVar2 = { ENTITY::GET_ENTITY_COORDS(iParam6, false, false) };
		iVar0 = VOLUME::_0xF383E96C4904DF0C(iParam6, fParam3, iVar1, 0);
	}
	if (iParam7 != 0)
	{
		VOLUME::_0xB440F4E35393FC39(iVar0, iParam7);
	}
	if (fParam9 >= 0f)
	{
		VOLUME::_0xD460135C98940274(iVar0, fParam9);
	}
	func_422(iVar0, bParam8);
	return iVar0;
}

void func_317(int iParam0)
{
	if (!func_165(iParam0))
	{
		return;
	}
	func_423(iParam0);
}

void func_318(var uParam0, vector3 vParam1)
{
	if (vParam1.x != 0)
	{
		TASK::_0x5D9B0BAAF04CF65B(*uParam0, vParam1.y, vParam1.x, vParam1.z);
	}
	else if (vParam1.y != -1)
	{
		TASK::_0x19BC99C678FBA139(*uParam0, vParam1.y, vParam1.z);
	}
}

int func_319(int iParam0)
{
	if (func_89(iParam0, 2))
	{
		return 200;
	}
	if (func_89(iParam0, 4))
	{
		return 70;
	}
	if (func_89(iParam0, 32))
	{
		return 400;
	}
	return 110;
}

int func_320(int iParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (func_61(iParam0, 131072))
	{
		return 0;
	}
	else
	{
		if (iParam0 == 6)
		{
			if (func_54() == 8)
			{
				return 3;
			}
		}
		bVar0 = func_61(iParam0, 2);
		bVar1 = func_61(iParam0, 1);
		bVar2 = (bVar0 && bVar1);
		if (bVar2)
		{
			if (!func_214())
			{
				return 2;
			}
			else
			{
				return 1;
			}
		}
		else if (bVar0)
		{
			return 1;
		}
		else if (bVar1)
		{
			return 2;
		}
	}
	return -1;
}

void func_321(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		*uParam0 = 45f;
		*uParam1 = 135f;
	}
	else
	{
		*uParam0 = 45f;
		*uParam1 = 125f;
	}
	if (func_89(iParam3, 2097152))
	{
		*uParam0 = (*uParam0 + 15f);
		*uParam2 = BUILTIN::CEIL((*uParam0 + 50f));
	}
	else
	{
		*uParam2 = 70;
	}
}

void func_322(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		*uParam1 = 240f;
	}
	else
	{
		*uParam1 = 215f;
	}
	*uParam0 = 110f;
	if (func_89(iParam3, 2))
	{
		*uParam0 = (*uParam0 + 60f);
		*uParam1 = (*uParam1 + 60f);
		*uParam2 = BUILTIN::CEIL((*uParam0 + 110f));
	}
	else if (func_89(iParam3, 2097152))
	{
		*uParam0 = (*uParam0 + 30f);
		*uParam2 = BUILTIN::CEIL((*uParam0 + 30f));
	}
	else
	{
		*uParam2 = 70;
	}
}

bool func_323(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = (func_311(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_17503.f_12[iVar1]), iVar2);
}

int func_324(int iParam0, vector3 vParam1, float fParam4, float fParam5)
{
	float fVar0;

	if (func_175(vParam1))
	{
		return 0;
	}
	if (func_329(iParam0, vParam1))
	{
		if (iParam0 == 42)
		{
		}
		else
		{
			return 0;
		}
	}
	fVar0 = BUILTIN::VDIST2(vParam1, Global_36);
	if (func_143(iParam0))
	{
		fParam4 = 40000f;
	}
	if (fVar0 < fParam4 && fVar0 > fParam5)
	{
		return 1;
	}
	else if (iParam0 == 42 || iParam0 == 110)
	{
		return 1;
	}
	return 0;
}

int func_325(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_326(int iParam0, vector3 vParam1, var uParam4, float fParam5, bool bParam6, float fParam7)
{
	float fVar0;

	fVar0 = func_151(bParam6, fParam7, BUILTIN::VDIST(vParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true, false)));
	if (!uParam4->f_1)
	{
		if (fVar0 < uParam4->f_2 || (func_332(vParam1, iParam0) && ENTITY::GET_ENTITY_SPEED(iParam0) > fParam5))
		{
			*uParam4 = func_115();
			uParam4->f_2 = func_266(iParam0, vParam1, 1);
			uParam4->f_1 = 1;
		}
	}
	else if (fVar0 > uParam4->f_2 || (!func_332(vParam1, iParam0) && ENTITY::GET_ENTITY_SPEED(iParam0) > fParam5))
	{
		*uParam4 = func_115();
		uParam4->f_2 = func_266(iParam0, vParam1, 1);
		uParam4->f_1 = 0;
	}
}

int func_327(var uParam0, int iParam1)
{
	if (uParam0->f_1 == 1)
	{
		return (func_115() - *uParam0) >= iParam1;
	}
	return 0;
}

int func_328(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_175(*(uParam0->f_12[iVar0 /*3*/])))
		{
			if (iVar1 < 0 || BUILTIN::VDIST2(Global_36, *(uParam0->f_12[iVar1 /*3*/])) < BUILTIN::VDIST2(Global_36, *(uParam0->f_12[iVar0 /*3*/])))
			{
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_329(int iParam0, vector3 vParam1)
{
	int iVar0;

	if (!func_61(iParam0, 1))
	{
		iVar0 = 1;
	}
	if (func_424(vParam1, 0, 0, iVar0))
	{
		return 1;
	}
	if (func_61(iParam0, 33554432))
	{
		if (func_425(vParam1, 200f, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_330(int iParam0, var uParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;

	iVar0 = 1;
	if (func_89(iParam0, 128))
	{
		if (!MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam1, uParam1->f_1, (uParam1->f_2 + 40f), &uVar1, 0))
		{
			return 0;
		}
		if (MISC::_0xBBE5B63EFFB08E68(*uParam1, uParam1->f_1, (uParam1->f_2 + 40f), 129, &uVar1, &iVar2, &uVar3))
		{
			if (iVar2 == 1619704960)
			{
				return 0;
			}
		}
	}
	if (func_61(iParam0, 1) && !func_61(iParam0, 2))
	{
		if (func_61(iParam0, 4096) || func_61(iParam0, 2048))
		{
			if (func_426(*uParam1))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

int func_331(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	var uVar0;

	uVar0 = func_1(&uParam0);
	if (!func_427())
	{
		return 0;
	}
	return 1;
}

bool func_332(vector3 vParam0, int iParam3)
{
	vector3 vVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam3))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam3) };
	return func_428(vVar0, vParam0) > func_428(vVar0, ENTITY::GET_ENTITY_COORDS(iParam3, true, false));
}

int func_333(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_36580[iVar0 /*2*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_334(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_36580[iVar0 /*2*/] == iParam0)
		{
			return (Global_36580[Global_36601 /*2*/])->f_1;
		}
		iVar0++;
	}
	return 3;
}

int func_335(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = uParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_429(&iVar1, -2147483648);
	}
	else
	{
		iVar0 = 0;
	}
	while (iVar1 > 0)
	{
		iVar1 = (iVar1 && (iVar1 - 1));
		iVar0++;
	}
	return iVar0;
}

int func_336()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

int func_337(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (func_304() != -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = Global_1360165[iVar0 /*1157*/];
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && iParam0 == iVar1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_338(int iParam0)
{
	if (iParam0 != 0)
	{
		if (!STREAMING::HAS_MODEL_LOADED(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

Vector3 func_339(vector3 vParam0, float fParam3, vector3 vParam4, bool bParam7)
{
	if (bParam7)
	{
		return vParam4;
	}
	return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, fParam3, vParam4);
}

float func_340(float fParam0, float fParam1, bool bParam2)
{
	if (bParam2)
	{
		return fParam1;
	}
	return func_430((fParam0 + fParam1));
}

int func_341(int iParam0, var uParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	int iVar0;

	if (bParam6)
	{
		func_431(&vParam2, uParam1->f_22);
	}
	if (!bParam7 && func_432(uParam1))
	{
		iVar0 = PED::_0xEAF682A14F8E5F53(uParam1->f_5, vParam2, fParam5, 1, 1, iParam9, iParam10);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = func_433(iParam0, vParam2, fParam5, 1, 1, 0, 1, bParam8, 1, 0, 0, 0, 0);
		}
		else if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam1->f_5))
		{
			PED::_RELEASE_METAPED_OUTFIT_REQUEST(uParam1->f_5);
		}
	}
	else
	{
		iVar0 = func_433(iParam0, vParam2, fParam5, 1, 1, 0, 1, bParam8, 1, 0, 0, 0, 0);
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
	}
	else
	{
		EVENT::_0x9520175B35E2268D(iVar0, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
		if (uParam1->f_10)
		{
			if (PED::IS_PED_HUMAN(iVar0))
			{
				PED::_0x0FB1BA7FF73B41E1(iVar0, uParam1->f_4, 0);
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_23)) && !func_434(iVar0))
		{
			func_345(iVar0, &(uParam1->f_23), 0);
		}
		if (func_434(iVar0))
		{
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iVar0, 48, true);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 307, true);
		}
		if (func_435(&(uParam1->f_22)))
		{
			PED::SET_PED_CAN_RAGDOLL(iVar0, true);
			PED::SET_PED_TO_RAGDOLL(iVar0, 1000, 1000, 1, false, false, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 186, !func_436(&(uParam1->f_22)));
			func_82(iVar0, func_437(&(uParam1->f_22)), 0);
		}
		else
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(iVar0);
		}
		if (func_438(&(uParam1->f_22)))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
		}
		if (func_439(&(uParam1->f_22)))
		{
			func_440(iVar0, 1);
		}
		ENTITY::_0xA91E6CF94404E8C9(iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 6, func_441(&(uParam1->f_22)));
		PED::SET_PED_CONFIG_FLAG(iVar0, 393, true);
		if (!func_414(uParam1->f_22, 8192))
		{
			ENTITY::_SET_ENTITY_SOMETHING(iVar0, true);
		}
		if (!func_434(iVar0))
		{
			func_443(iVar0, !func_442(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 4, func_444(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 297, !func_445(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 317, !func_445(&(uParam1->f_22)));
			if (uParam1->f_31 != 623901053)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, uParam1->f_31);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (PED::IS_PED_HUMAN(iVar0))
		{
			DECORATOR::DECOR_SET_BOOL(iVar0, "bBeatPed", true);
			DECORATOR::DECOR_SET_BOOL(iVar0, "bBeatCriminal", *uParam1 == 22);
		}
	}
	return iVar0;
}

int func_342(int iParam0, int iParam1)
{
	if (func_446(iParam0) != -1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("u_m_m_nbxbrontegoon_01"):
		case joaat("g_m_m_uniswamp_01"):
		case joaat("u_m_m_nbxbrontesecform_01"):
		case joaat("u_m_m_nbxbronteasc_01"):
		case joaat("g_m_m_unibrontegoons_01"):
			return 1;
		case joaat("g_m_m_unicriminals_02"):
		case joaat("g_m_m_unicriminals_01"):
			return iParam1;
		default:
			break;
	}
	return 0;
}

bool func_343(var uParam0)
{
	return func_414(*uParam0, 32);
}

int func_344(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	if (PED::GET_MOUNT(iParam0) != iParam1)
	{
		PED::_SET_PED_ON_MOUNT(iParam0, iParam1, iParam3, bParam4);
		PED::SET_PED_CAN_BE_TARGETTED(iParam1, bParam2);
	}
	return 1;
}

void func_345(int iParam0, char* sParam1, int iParam2)
{
	if (iParam2 || func_147(iParam0, 0, 0))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "HAS_VOICE", true);
		AUDIO::SET_AMBIENT_VOICE_NAME(iParam0, sParam1);
	}
}

char* func_346(char* sParam0, char* sParam1)
{
	return "ERR_STRING";
}

void func_347(int iParam0, float fParam1, int iParam2)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		fParam1 = func_447(fParam1, 0f, 1f);
		iVar0 = BUILTIN::FLOOR((fParam1 * IntToFloat(ENTITY::GET_ENTITY_MAX_HEALTH(iParam0, iParam2))));
		ENTITY::_SET_ENTITY_HEALTH(iParam0, iVar0, 0);
	}
}

bool func_348(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_349(int iParam0)
{
	var uVar0;

	if (iParam0 == -1)
	{
		uVar0 = func_448(1);
	}
	else
	{
		uVar0 = func_449(iParam0);
	}
	return uVar0;
}

void func_350(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 != 0)
	{
		iVar0 = func_450(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_308(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17503.f_2205[iVar2 /*2*/] = &Global_17503.f_2205[iVar2 /*2*/] + 1;
	}
}

void func_351(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 != -1 && !func_89(iParam0, 8192))
	{
		iVar0 = func_308(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17503.f_2205[iVar0 /*2*/] = &Global_17503.f_2205[iVar0 /*2*/] + 1;
	}
}

void func_352(int iParam0, int iParam1, float fParam2, int iParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;

	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	switch (iParam1)
	{
		case 0:
			fVar1 = 30f;
			break;
		case 1:
			fVar2 = 1f;
			break;
		case 2:
			fVar2 = 2f;
			break;
		case 3:
			fVar2 = 3f;
			break;
		case 4:
			fVar2 = 4f;
			break;
		case 5:
			fVar2 = 6f;
			break;
		case 6:
			fVar2 = 8f;
			break;
		case 7:
			fVar2 = 12f;
			break;
		case 8:
			fVar3 = 1f;
			break;
		case 9:
			fVar3 = 2f;
			break;
		case 10:
			fVar3 = 3f;
			break;
		case 11:
			fVar3 = 4f;
			break;
		case 12:
			fVar3 = 5f;
			break;
		case 13:
			fVar3 = 6f;
			break;
		case 14:
			fVar3 = 7f;
			break;
		case 15:
			fVar3 = 8f;
			break;
		case 16:
			fVar3 = 10f;
			break;
		case 17:
			fVar3 = 12f;
			break;
		case 18:
			fVar3 = 15f;
			break;
		case 19:
			fVar3 = 18f;
			break;
		case 20:
			fVar3 = 20f;
			break;
		case 21:
			fVar3 = 25f;
			break;
		case 22:
			fVar2 = -1f;
			break;
		case 23:
			fVar3 = -5f;
			break;
		case 24:
			fVar3 = -7f;
			break;
		case 25:
			fVar3 = -8f;
			break;
	}
	func_303(iParam0, iParam3, BUILTIN::ROUND((fVar0 * fParam2)), BUILTIN::ROUND((fVar1 * fParam2)), BUILTIN::ROUND((fVar2 * fParam2)), BUILTIN::ROUND((fVar3 * fParam2)), bParam4, 1);
}

void func_353(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 1;
	if (bParam1)
	{
		iVar0 = 3;
	}
	if (func_61(iParam0, 262144))
	{
		if (Global_1392135->f_3 == -1)
		{
			func_451(262144, iVar0, 0, 1);
		}
	}
	if (func_61(iParam0, 128))
	{
		func_451(128, iVar0, 0, 1);
	}
	else if (func_61(iParam0, 524288))
	{
		func_451(524288, iVar0, 0, 1);
	}
	else if (func_61(iParam0, 536870912))
	{
		func_451(536870912, iVar0, 0, 1);
	}
	else if (func_61(iParam0, 4194304))
	{
		func_451(4194304, iVar0, 0, 1);
	}
	else if (func_61(iParam0, 8388608))
	{
		func_451(8388608, iVar0, 0, 1);
	}
}

void func_354(int iParam0)
{
	Global_1310750->f_16077 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1310750->f_16071 = iParam0;
}

int func_355(bool bParam0)
{
	if (!bParam0 && func_452(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(752193127, bParam0, 0);
	return 1;
}

int func_356()
{
	return Global_1310750->f_16037;
}

int func_357(int iParam0)
{
	if (!func_165(iParam0))
	{
		return 0;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_47;
}

void func_358(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_165(&(Global_1310750->f_13321[iParam0 /*9*/])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID((Global_1310750->f_13321[iParam0 /*9*/])->f_5, 523);
	((*Global_1310750)[iVar0 /*111*/])->f_48 = 0;
	func_453(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

void func_359(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	func_454(Global_1393447, 1);
	func_455();
	func_456();
	func_457((BUILTIN::TO_FLOAT(200) / 3f));
	if (iParam0 != 8)
	{
		Global_1392135->f_54 = (func_115() / 1000);
		if (Global_1392135->f_1 & 4 != 0)
		{
			Global_1392135->f_1 = (Global_1392135->f_1 - Global_1392135->f_1 & 4);
		}
		func_458();
		if (iParam1 == -1)
		{
			if (func_3(iParam0, 1))
			{
				func_451(16777216, 2, 0, 1);
				iVar0 = BUILTIN::FLOOR(240f);
			}
			else if (func_3(iParam0, 2))
			{
				func_451(16777216, 0, 0, 1);
				iVar0 = BUILTIN::FLOOR(60f);
			}
			else if (func_3(iParam0, 4))
			{
				func_451(16777216, 5, 0, 1);
				iVar0 = BUILTIN::FLOOR(900f);
			}
			Global_1392135->f_4 = (Global_1392135->f_54 + iVar0);
		}
		else
		{
			func_459(iParam1, iParam2, iParam3, iParam4);
			Global_1392135->f_5[iParam1] = (((Global_1392135->f_54 + iParam2) + iParam3 * 60) + iParam4 * 3600);
		}
		func_460(BUILTIN::TO_FLOAT(iVar0), 1, 0);
	}
	else
	{
		func_460((BUILTIN::TO_FLOAT(200) / 3f), 1, 0);
	}
}

bool func_360(int iParam0, int iParam1)
{
	return (Global_40.f_9571[iParam1 /*10*/] && iParam0) != 0;
}

void func_361(int iParam0, int iParam1)
{
	((*Global_1392050)[iParam1 /*14*/])->f_1 = (((*Global_1392050)[iParam1 /*14*/])->f_1 - (((*Global_1392050)[iParam1 /*14*/])->f_1 && iParam0));
}

void func_362(int iParam0, int iParam1)
{
	Global_40.f_9571[iParam1 /*10*/] = (Global_40.f_9571[iParam1 /*10*/] || iParam0);
}

int func_363(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return 1033509606;
		case 2:
			return 1143368244;
		case 1:
			return -1797026825;
		case 0:
			return 55818986;
		case 4:
			return -2100600611;
		case 3:
			return 529020251;
		case -1:
			return 0;
		default:
			break;
	}
	return 0;
}

bool func_364(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("weapon_unarmed"));
}

bool func_365()
{
	return (Global_1935630->f_44 == joaat("weapon_kit_binoculars") && CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE());
}

int func_366(var uParam0, float fParam1, float fParam2, var uParam3)
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

int func_367(var uParam0, float fParam1, float fParam2, var uParam3)
{
	if (func_366(uParam0, fParam1, fParam2, uParam3))
	{
		if (uParam0->f_8 == 0f)
		{
			uParam0->f_8 = (func_368() - 0.02f);
		}
		return 1;
	}
	uParam0->f_8 = 0f;
	return 0;
}

float func_368()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

int func_369(int iParam0)
{
	switch (iParam0)
	{
		case -1148613331:
		case -173507739:
		case 433385945:
		case 821931868:
		case 1500834021:
		case 1632247697:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_370(int iParam0)
{
	switch (iParam0)
	{
		case -1721991356:
		case -1233681761:
		case -416908843:
		case 212278652:
		case 839715153:
		case 1420204096:
		case 1974067816:
		case 2082228755:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_371(int iParam0)
{
	switch (iParam0)
	{
		case -273223690:
		case 603685163:
		case 669657108:
		case 725623432:
		case 1679686673:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_372(int iParam0)
{
	switch (iParam0)
	{
		case -702816767:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_373(int iParam0)
{
	switch (iParam0)
	{
		case -1721991356:
		case -1233681761:
		case 1500834021:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_374(int iParam0)
{
	switch (iParam0)
	{
		case 603685163:
		case 1679686673:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_375(int iParam0)
{
	switch (iParam0)
	{
		case -1317052143:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_376(bool bParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1935630->f_32))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1935630->f_32))
		{
			*uParam1 = Global_1935630->f_32;
			iVar0 = 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1935630->f_33))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1935630->f_33))
		{
			if (PED::_0x3AA24CCC0D451379(Global_1935630->f_33) || ENTITY::IS_ENTITY_DEAD(Global_1935630->f_33))
			{
				*uParam2 = Global_1935630->f_33;
				iVar0 = 1;
			}
		}
	}
	if (Global_1935630->f_30 && !PED::IS_PED_INJURED(Global_35))
	{
		iVar1 = PED::_0xB65A4DAB460A19BD(Global_35);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (!bParam0 || PED::IS_PED_HUMAN(iVar1))
			{
				*uParam1 = iVar1;
				iVar0 = 1;
			}
		}
	}
	return iVar0;
}

int func_377()
{
	if (&Global_1048576)
	{
		return 1;
	}
	if (Global_1572887->f_4)
	{
		return 1;
	}
	if (&Global_524298)
	{
		return 1;
	}
	if (&Global_1048577)
	{
		return 1;
	}
	if (&Global_1051043 == -1 && Global_1572887->f_6 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

int func_378(int iParam0)
{
	if (!func_381(iParam0))
	{
		return -1;
	}
	return func_462(func_461(iParam0));
}

bool func_379(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_380(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_381(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_382(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_383(int iParam0)
{
	return func_61(iParam0, Global_1310750->f_16072 | 64);
}

int func_384(int iParam0)
{
	var uVar0;
	int iVar3;

	if (INTERIOR::IS_VALID_INTERIOR(iParam0))
	{
		INTERIOR::_0x8451E87D3C2B0286(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case -1571304986:
			case -1342123354:
			case -1269216817:
			case -1212338017:
			case -803716508:
			case 768224943:
			case 1245139812:
			case 1633500362:
				return 1;
		}
	}
	return 0;
}

int func_385(int iParam0)
{
	var uVar0;
	int iVar3;

	if (INTERIOR::IS_VALID_INTERIOR(iParam0))
	{
		INTERIOR::_0x8451E87D3C2B0286(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case -1946266312:
			case -1817199644:
			case -1604045519:
			case -857108408:
			case -431793961:
			case -17417813:
			case 37578405:
			case 459745161:
			case 653987431:
			case 1107105323:
			case 1135757916:
			case 1442115297:
			case 1548023642:
			case 1911907177:
				return 1;
		}
	}
	return 0;
}

bool func_386(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_387(int iParam0)
{
	return ((Global_1310750[iParam0 /*111*/] != 0 && !MISC::IS_STRING_NULL_OR_EMPTY(&(((*Global_1310750)[iParam0 /*111*/])->f_40))) && HUD::GET_LENGTH_OF_LITERAL_STRING(&(((*Global_1310750)[iParam0 /*111*/])->f_40)) != 0);
}

int func_388()
{
	if (func_463())
	{
		return 0;
	}
	if (Global_1572887->f_12 == -1)
	{
		if (Global_1935630->f_44 == joaat("weapon_lasso"))
		{
			return PAD::IS_CONTROL_PRESSED(0, 130948705);
		}
		return PED::GET_PED_RESET_FLAG(Global_35, 311);
	}
	else
	{
		return &(Global_1955569->f_992[2]);
	}
	return 0;
}

void func_389(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = PLAYER::PLAYER_ID();
	if (!PLAYER::_0x72AD59F7B7FB6E24(iVar2, 200))
	{
		*uParam1 = 0;
		return;
	}
	if (PLAYER::_0x1A6E84F13C952094(iVar2, 200, uParam0))
	{
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0[iVar1]))
			{
			}
			else if (!PED::IS_PED_HUMAN(uParam0[iVar1]) && !(DECORATOR::DECOR_EXIST_ON(uParam0[iVar1], "HorseTeamA") || DECORATOR::DECOR_EXIST_ON(uParam0[iVar1], "HorseTeamB")))
			{
			}
			else if (DECORATOR::DECOR_EXIST_ON(uParam0[iVar1], "bIgnoreDamageChecking"))
			{
			}
			else
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	*uParam1 = iVar0;
}

int func_390(var uParam0)
{
	int iVar0;
	int iVar1;

	if (iVar0 == 0)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(0, -171675621))
		{
			if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar1, 0, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						if (PED::_0x772A1969F649E902(ENTITY::GET_ENTITY_MODEL(iVar1)))
						{
							iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
							return iVar0;
						}
					}
				}
			}
		}
	}
	if (uParam0->f_6 == 3)
	{
		if (iVar0 == 0)
		{
			if (!Global_1935630->f_12)
			{
				iVar0 = PED::_0x4B19F171450E0D4F(Global_35);
			}
		}
		if (iVar0 == 0)
		{
			iVar0 = PED::_0xB65A4DAB460A19BD(Global_35);
		}
		if (iVar0 != 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!PED::_0x772A1969F649E902(ENTITY::GET_ENTITY_MODEL(iVar0)))
				{
					iVar0 = 0;
				}
			}
		}
	}
	return iVar0;
}

void func_391(var uParam0)
{
	int iVar0;

	if (Global_1935630->f_38 == 0)
	{
		func_49(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(Global_1935630->f_34[iVar0])))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(&(Global_1935630->f_34[iVar0])))
				{
					func_50(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}

var func_392(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

int func_393(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_394(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_394(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	bVar2 = HUD::GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(vParam0, &fVar0, &fVar1);
	if (bVar2 == 0)
	{
		if (((fVar0 > fParam3 && fVar0 < fParam4) && fVar1 > fParam5) && fVar1 < fParam6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_395(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

int func_396(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (iParam3 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (WEAPON::_0x9E2D5D6BC97A5F1E(iParam0, joaat("weapon_unarmed"), iParam1))
		{
			return 1;
		}
		else if (!bParam2)
		{
			if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_44))
			{
				if (WEAPON::_0x959383DCD42040DA(Global_1935630->f_44) || Global_1935630->f_44 == joaat("weapon_melee_knife"))
				{
					if (WEAPON::_0x9E2D5D6BC97A5F1E(iParam0, Global_1935630->f_44, iParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_397(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = joaat("weapon_unarmed");
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || !PED::IS_PED_HUMAN(iParam0))
	{
		return iVar0;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam1, iParam2, bParam3))
	{
		return iVar0;
	}
	return iVar0;
}

int func_398()
{
	if (func_304() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == 11966224)
	{
		return 1;
	}
	return 0;
}

int func_399(int iParam0, bool bParam1)
{
	switch (func_464(iParam0))
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

float func_400(var uParam0)
{
	if (!*uParam0 & 1 != 0)
	{
		return func_267(uParam0);
	}
	if (GRAPHICS::_0x25CA89B2A39DCC69() > 0.833f)
	{
		return func_465(uParam0);
	}
	return func_267(uParam0);
}

float func_401(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_402()
{
	int iVar0;
	int iVar1;

	iVar0 = func_169(func_168());
	iVar1 = func_466(func_168());
	if (iVar0 >= 21)
	{
		return 1;
	}
	else if (iVar0 < 5)
	{
		return 1;
	}
	else if (iVar0 >= 20)
	{
		if (iVar1 >= 20)
		{
			return 1;
		}
	}
	else if (iVar0 < 6)
	{
		if (iVar1 <= 20)
		{
			return 1;
		}
	}
	return 0;
}

var func_403(var uParam0, var uParam1)
{
	return AUDIO::_PLAY_AMBIENT_SPEECH1(uParam0, uParam1);
}

void func_404(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_405(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_406(int iParam0)
{
	return ENTITY::_0x964000D355219FC0(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0));
}

int func_407(int iParam0)
{
	var uVar0;
	struct<2> Var1;

	if (!func_467(iParam0))
	{
		return 0;
	}
	Var1 = { func_468(iParam0) };
	if (STATS::STAT_ID_GET_INT(&Var1, &uVar0))
	{
		return uVar0;
	}
	return 0;
}

bool func_408(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_469(-1366121835, func_409(iParam0)) };
	return STATS::_STAT_ID_IS_VALID(&Var0);
}

int func_409(int iParam0)
{
	return iParam0;
}

void func_410(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_470(iParam0, &iVar0, &iVar1);
	if (!func_471(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_472(iParam0, 1024))
	{
		return;
	}
	func_473(iVar0, iVar1);
	(Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/] = uParam1;
	((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 2;
}

float func_411(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return -1f;
	}
	return func_264(Global_35, iParam0, bParam1, iParam2);
}

int func_412(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!bParam3)
	{
		return 0;
	}
	if (fParam2 > 25f)
	{
		return 0;
	}
	if (iParam1 == Global_35)
	{
		if (PED::IS_PED_IN_COMBAT(Global_35, 0))
		{
			return 0;
		}
	}
	return 1;
}

int func_413(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_414(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_415()
{
	func_474(23);
}

void func_416(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 || iParam0);
}

int func_417(var uParam0)
{
	if (uParam0->f_46 && uParam0->f_48)
	{
		if (uParam0->f_5.f_16 != 16384)
		{
			return 1;
		}
	}
	return 0;
}

void func_418(int iParam0)
{
	int iVar0;

	iVar0 = func_475(iParam0);
	if (iVar0 != 0)
	{
		func_476(-1, 24, 0, iVar0);
	}
}

void func_419(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	if (Global_1310750->f_16071 != iParam0 && !bParam2)
	{
		return;
	}
	if (&Global_17503.f_42[iParam0 /*8*/] == 0)
	{
		func_478(func_477(-1029789297), 1);
	}
	Global_17503.f_4++;
	Global_17503.f_42[iParam0 /*8*/] = &Global_17503.f_42[iParam0 /*8*/] + 1;
	((*Global_1310750)[iParam0 /*111*/])->f_110 |= 8;
	if (func_61(iParam0, 2))
	{
		func_479(iParam0, func_349(iParam3));
	}
	if (func_61(iParam0, 1))
	{
		if (iParam4 == -1)
		{
			iParam4 = func_54();
		}
		func_480(iParam0, iParam4);
	}
	if (iParam1 >= 0 && !func_89(iParam0, 65536))
	{
		func_481(iParam0, iParam1);
		func_482(iParam0, func_170(iParam0, iParam1));
		func_416(128);
	}
	func_352(iParam0, ((*Global_1310750)[iParam0 /*111*/])->f_37, 1065353216, 0, 0);
	func_353(iParam0, 1);
	if (!bParam2)
	{
		func_416(16);
		Global_17503.f_5 = iParam0;
		Global_17503.f_9 = 1;
		Global_17503.f_7 = 0;
		Global_17503.f_8 = 0;
		func_483(524288);
	}
	if (func_484(iParam0) != 0)
	{
		if (&Global_17503.f_42[iParam0 /*8*/] >= func_484(iParam0))
		{
			(Global_17503.f_42[iParam0 /*8*/])->f_6 = 1;
		}
	}
}

void func_420(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_485(&Global_0, 8);
	}
	if (!func_486() || func_304() != -1)
	{
		return;
	}
	func_485(&Global_0, 1);
}

bool func_421(int iParam0)
{
	return func_487(iParam0, 2);
}

int func_422(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (!bParam1 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (!VOLUME::_0xF6A8A652A6B186CD(iParam0))
	{
	}
	iVar1 = 0;
	while (iVar1 < &Global_1911670)
	{
		iVar0 = Global_1911670[iVar1];
		if (!VOLUME::_0xF6A8A652A6B186CD(iVar0) || iVar0 == iParam0)
		{
			(*Global_1911670)[iVar1] = iParam0;
			return 1;
		}
		iVar1++;
	}
	return 0;
}

void func_423(int iParam0)
{
	Global_17503.f_2++;
	(Global_17503.f_42[iParam0 /*8*/])->f_3++;
	((*Global_1310750)[iParam0 /*111*/])->f_110 |= 2;
}

int func_424(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	var uVar0[4];
	int iVar5[4];

	if (func_175(vParam0))
	{
		return 0;
	}
	uVar0[0] = iParam4;
	iVar5[0] = 16384;
	iVar5[1] = iParam5;
	if (VOLUME::_0x870E9981ED27C815(vParam0, &uVar0, &iVar5, iParam3))
	{
		return 1;
	}
	return 0;
}

bool func_425(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	if (func_175(vParam0))
	{
		return false;
	}
	return VOLUME::_0x769BB7626B8CDB06(vParam0, fParam3, iParam5, iParam4, 16384);
}

int func_426(vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1310750->f_16043)
	{
		if (!func_175(*(Global_1310750->f_16043[iVar0 /*3*/])))
		{
			if (func_144(vParam0, *(Global_1310750->f_16043[iVar0 /*3*/])) < 2500f)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_427()
{
	int iVar0;
	int iVar1;

	iVar0 = func_488(func_224());
	if (iVar0 == 8)
	{
		iVar1 = func_225(func_224());
		if (func_227(Global_36, iVar1))
		{
			return 0;
		}
	}
	if (func_489(func_448(0)))
	{
		return 0;
	}
	if (func_490())
	{
		return 0;
	}
	if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

float func_428(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

void func_429(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

float func_430(float fParam0)
{
	float fVar0;

	fVar0 = fParam0;
	if (fParam0 < 0f)
	{
		fVar0 = (fVar0 + 360f);
	}
	else if (fParam0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	return fVar0;
}

int func_431(var uParam0, var uParam1)
{
	vector3 vVar0;

	vVar0 = { *uParam0 };
	if (func_491(&uParam1))
	{
		return 1;
	}
	if (!func_199(&vVar0, 1, 10, 0))
	{
		return 0;
	}
	*uParam0 = { vVar0 };
	return 1;
}

int func_432(var uParam0)
{
	if (uParam0->f_3 != 41788943)
	{
		if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_5))
		{
			if (PED::_0x610438375E5D1801(uParam0->f_5))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_433(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_492(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_434(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return PED::_0x772A1969F649E902(iVar0);
}

bool func_435(var uParam0)
{
	return func_414(*uParam0, 4);
}

bool func_436(var uParam0)
{
	return func_414(*uParam0, 64);
}

bool func_437(var uParam0)
{
	return func_414(*uParam0, 8);
}

bool func_438(var uParam0)
{
	return func_414(*uParam0, 128);
}

bool func_439(var uParam0)
{
	return func_414(*uParam0, 2048);
}

void func_440(int iParam0, bool bParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 130, !bParam1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 178, bParam1);
}

bool func_441(var uParam0)
{
	return func_414(*uParam0, 1024);
}

bool func_442(var uParam0)
{
	return func_414(*uParam0, 256);
}

void func_443(int iParam0, bool bParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 146, !bParam1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 148, !bParam1);
}

bool func_444(var uParam0)
{
	return func_414(*uParam0, 512);
}

bool func_445(var uParam0)
{
	return func_414(*uParam0, 4096);
}

int func_446(int iParam0)
{
	switch (iParam0)
	{
		case joaat("g_m_m_uniduster_03"):
		case joaat("u_m_m_unidusterhenchman_03"):
		case joaat("g_m_m_uniduster_04"):
		case joaat("u_m_m_unidusterhenchman_02"):
		case joaat("g_m_m_uniduster_02"):
		case joaat("u_m_m_fatduster_01"):
		case joaat("u_m_m_unidusterhenchman_01"):
		case joaat("g_m_m_uniduster_01"):
		case joaat("cs_disguisedduster_01"):
		case joaat("g_f_m_uniduster_01"):
		case joaat("u_m_m_unidusterleader_01"):
		case joaat("cs_disguisedduster_03"):
		case joaat("g_m_m_uniduster_05"):
		case joaat("cs_disguisedduster_02"):
			return 0;
		case joaat("g_m_y_uniexconfeds_02"):
		case joaat("g_m_y_uniexconfeds_01"):
		case joaat("g_m_o_uniexconfeds_01"):
		case joaat("cs_exconfedsleader_01"):
		case joaat("u_m_m_uniexconfedsbounty_01"):
			return 2;
		case joaat("g_m_m_uniinbred_01"):
			return 1;
		case joaat("u_m_m_bht_skinnersearch"):
		case joaat("g_m_m_unimountainmen_01"):
		case joaat("u_m_m_bht_skinnerbrother"):
			return 3;
		case joaat("g_m_m_uniranchers_01"):
		case joaat("cs_laramie"):
			return 4;
		case joaat("u_m_m_bht_banditoshack"):
		case joaat("u_m_m_bht_banditomine"):
		case joaat("g_m_m_unibanditos_01"):
			return 5;
	}
	return -1;
}

float func_447(float fParam0, float fParam1, float fParam2)
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

int func_448(bool bParam0)
{
	int iVar0;

	if (bParam0)
	{
		iVar0 = func_493(1, 0, 0);
	}
	else
	{
		iVar0 = func_224();
	}
	return func_449(iVar0);
}

int func_449(int iParam0)
{
	switch (iParam0)
	{
		case 40:
			return 1;
		case 78:
			return 2;
		case 37:
			return 4;
		case 38:
			return 8;
		case 93:
			return 16;
		case 82:
			return 32;
		case 95:
			return 64;
		case 65:
			return 128;
		case 68:
			return 256;
		case 69:
			return 512;
		case 3:
			return 1024;
		case 61:
			return 2048;
		case 110:
			return 4096;
		case 5:
			return 8192;
		case 35:
			return 16384;
		case 22:
			return 32768;
		case 105:
			return 65536;
		case 8:
			return 131072;
		case 32:
			return 262144;
		case 26:
			return 524288;
		case 115:
			return 1048576;
		case 76:
			return 2097152;
		case 92:
			return 4194304;
		case 56:
			return 8388608;
		case 120:
			return 16777216;
		default:
			break;
	}
	return 0;
}

int func_450(int iParam0)
{
	int iVar0;
	var uVar1;

	iVar0 = 0;
	uVar1 = iParam0;
	while (iParam0 > 1)
	{
		iParam0 = BUILTIN::SHIFT_RIGHT(iParam0, 1);
		iVar0++;
	}
	return iVar0;
}

void func_451(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_315(Global_1310750[iVar0 /*111*/], iParam0))
		{
			if (!func_302(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_494(iVar0) < func_495(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_352(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

bool func_452(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_496(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return MISC::IS_BIT_SET(&(Global_40.f_283[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_1058888->f_40567[iVar1]), iVar2);
}

void func_453(int iParam0)
{
	int iVar0;

	if (&Global_1310750->f_13321[iParam0 /*9*/] != -1)
	{
		((*Global_1310750)[&Global_1310750->f_13321[iParam0 /*9*/] /*111*/])->f_48 = 0;
	}
	Global_1310750->f_13321[iParam0 /*9*/] = -1;
	(Global_1310750->f_13321[iParam0 /*9*/])->f_1 = -1;
	(Global_1310750->f_13321[iParam0 /*9*/])->f_2 = { 0f, 0f, 0f };
	(Global_1310750->f_13321[iParam0 /*9*/])->f_5 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		(Global_1310750->f_13321[iParam0 /*9*/])->f_6[iVar0] = -1881652455;
		iVar0++;
	}
}

void func_454(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_455()
{
	int iVar0;

	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (!func_497(iVar0, 128))
		{
			func_498(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_456()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_497(iVar0, 128) && func_497(iVar0, 1))
		{
			func_498(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_457(float fParam0)
{
	int iVar0;

	iVar0 = BUILTIN::FLOOR((fParam0 * 1000f));
	if (Global_1393237->f_3 < (MISC::GET_GAME_TIMER() + iVar0))
	{
		Global_1393237->f_3 = (MISC::GET_GAME_TIMER() + iVar0);
	}
}

void func_458()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		if (func_61(iVar0, 16777216))
		{
			if (!func_499(iVar0))
			{
				func_500(iVar0, 4096);
			}
		}
		iVar0++;
	}
}

void func_459(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = ((iParam1 + (60 * iParam2)) + (3600 * iParam3));
	iVar1 = (iVar0 / 2);
	iVar2 = (iVar1 / 60);
	iVar3 = (iVar1 - iVar2 * 60);
	iVar4 = 0;
	switch (iParam0)
	{
		case 0:
			func_303(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_303(99, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_303(44, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_303(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_303(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 1:
			func_303(5, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_303(6, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_303(13, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_303(25, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_303(29, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_303(46, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_303(67, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_303(9, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 2:
			func_303(3, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_303(11, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_303(18, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_303(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_303(95, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_303(96, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_303(101, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_303(51, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 3:
			func_303(53, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_303(54, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_303(52, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_303(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_303(56, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 4:
			func_303(70, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_303(63, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_303(35, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 5:
			func_303(117, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_303(75, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_303(76, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_303(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_303(15, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_303(108, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_303(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
	}
}

void func_460(float fParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	fVar0 = func_368();
	fVar1 = (Global_1393447->f_60 - fVar0);
	bVar2 = fParam0 >= fVar1;
	if (!bParam1)
	{
		if (bVar2)
		{
			bParam1 = true;
		}
	}
	if ((!bVar2 && fParam0 >= 0f) && !bParam2)
	{
	}
	else
	{
		Global_1393447->f_60 = (fVar0 + fParam0);
	}
}

int func_461(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_12105[iParam0 /*7*/]);
	}
	if (iParam0 < 0 || iParam0 >= 20001)
	{
		return 0;
	}
	return &(Global_1058888->f_498[iParam0 /*2*/]);
}

int func_462(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

int func_463()
{
	switch (Global_1935630->f_44)
	{
		case joaat("weapon_melee_lantern"):
		case joaat("weapon_kit_binoculars"):
		case joaat("weapon_melee_lantern_electric"):
		case joaat("weapon_melee_davy_lantern"):
			return 1;
		default:
			break;
	}
	return 0;
}

int func_464(int iParam0)
{
	if (!func_381(iParam0))
	{
		return -1;
	}
	return func_501(iParam0);
}

var func_465(var uParam0)
{
	return uParam0->f_25;
}

int func_466(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_467(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

struct<2> func_468(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_469(-212244724, func_409(iParam0)) };
	if (STATS::_STAT_ID_IS_VALID(&Var0))
	{
		Var0 = { func_469(-1366121835, func_409(iParam0)) };
	}
	return Var0;
}

struct<2> func_469(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = uParam1;
	return Var0;
}

void func_470(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

int func_471(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return 0;
	}
	if (func_502(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_503(iParam0))
	{
		return 0;
	}
	if (func_504(iParam0))
	{
		return 0;
	}
	if ((Global_1898164->f_163 && !func_472(iParam0, 1)) || func_505(32768))
	{
		if (!func_472(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return 0;
		}
	}
	if (!func_506())
	{
		return 0;
	}
	return 1;
}

bool func_472(int iParam0, int iParam1)
{
	return ((Global_1905944->f_22[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

void func_473(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_474(int iParam0)
{
	int iVar0;

	if (func_304() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_294(func_507(iVar0), 0))
		{
			if (PED::IS_PED_GROUP_MEMBER(func_507(iVar0), func_336(), 1))
			{
				func_508(iVar0, iParam0);
			}
		}
		iVar0++;
	}
}

int func_475(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return 1;
		case 60:
			return 37;
		case 97:
			return 26;
		default:
			break;
	}
	return 0;
}

void func_476(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam3 == 0)
	{
		iParam3 = (Global_1415419->f_19[iParam0 /*12*/])->f_5;
	}
	if (iParam3 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 248)
		{
			if ((Global_1415419->f_19[iVar0 /*12*/])->f_5 == iParam3)
			{
				if (iVar0 != iParam0)
				{
					if (func_509() > (Global_32073.f_2697.f_6[iVar0 /*6*/])->f_5)
					{
						(Global_32073.f_2697.f_6[iVar0 /*6*/])->f_5 = func_509();
					}
					func_510(&((Global_32073.f_2697.f_6[iVar0 /*6*/])->f_5), 0, 0, iParam1, iParam2, 0, 0, 0);
					func_49(&((Global_1415419->f_19[iVar0 /*12*/])->f_11), 2);
				}
			}
			iVar0++;
		}
	}
}

struct<2> func_477(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

void func_478(var uParam0, var uParam1, int iParam2)
{
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

void func_479(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 != 0)
	{
		iVar0 = func_450(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_308(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		(Global_17503.f_2205[iVar2 /*2*/])->f_1++;
	}
}

void func_480(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 != -1 && !func_89(iParam0, 8192))
	{
		iVar0 = func_308(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		(Global_17503.f_2205[iVar0 /*2*/])->f_1++;
	}
}

void func_481(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = (func_311(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::SET_BIT(Global_17503.f_12[iVar1], iVar2);
}

void func_482(int iParam0, vector3 vParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_61(iParam0, 512))
	{
		vParam1 = { Global_36 };
	}
	if (func_175(vParam1))
	{
		return;
	}
	if (!func_165(iParam0))
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < Global_17503.f_2084)
	{
		vVar2 = { *(Global_17503.f_2084[iVar0 /*5*/]) };
		if (func_175(vVar2))
		{
			if (iVar1 < 0)
			{
				iVar1 = iVar0;
			}
		}
		else if ((Global_17503.f_2084[iVar0 /*5*/])->f_3 == iParam0)
		{
			if (func_325(vVar2, vParam1, 1f, 1))
			{
				return;
			}
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		*(Global_17503.f_2084[iVar1 /*5*/]) = { vParam1 };
		(Global_17503.f_2084[iVar1 /*5*/])->f_3 = iParam0;
		(Global_17503.f_2084[iVar1 /*5*/])->f_4 = ((*Global_1310750)[iParam0 /*111*/])->f_62;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_17503.f_2084)
		{
			if (iVar0 + 1 >= 24)
			{
				*(Global_17503.f_2084[iVar0 /*5*/]) = { vParam1 };
				(Global_17503.f_2084[iVar0 /*5*/])->f_3 = iParam0;
				(Global_17503.f_2084[iVar0 /*5*/])->f_4 = ((*Global_1310750)[iParam0 /*111*/])->f_62;
			}
			else
			{
				*(Global_17503.f_2084[iVar0 /*5*/]) = { *(Global_17503.f_2084[iVar0 + 1 /*5*/]) };
			}
			iVar0++;
		}
	}
}

void func_483(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		func_500(iVar0, iParam0);
		iVar0++;
	}
}

int func_484(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 2;
		case 2:
			return 2;
		case 3:
			return 2;
		case 75:
			return 1;
		case 76:
			return 1;
		case 4:
			return 2;
		case 77:
			return 2;
		case 5:
			return 2;
		case 6:
			return 3;
		case 7:
			return 2;
		case 78:
			return 2;
		case 8:
			return 2;
		case 9:
			return 1;
		case 10:
			return 1;
		case 11:
			return 2;
		case 12:
			return 3;
		case 13:
			return 2;
		case 14:
			return 2;
		case 15:
			return 5;
		case 16:
			return 1;
		case 17:
			return 2;
		case 18:
			return 2;
		case 91:
			return 1;
		case 19:
			return 1;
		case 20:
			return 3;
		case 21:
			return 1;
		case 22:
			return 1;
		case 23:
			return 3;
		case 94:
			return 8;
		case 24:
			return 3;
		case 119:
			return 4;
		case 27:
			return 6;
		case 28:
			return 2;
		case 29:
			return 2;
		case 30:
			return 4;
		case 31:
			return 3;
		case 32:
			return 1;
		case 33:
			return 2;
		case 34:
			return 1;
		case 35:
			return 1;
		case 96:
			return 4;
		case 36:
			return 3;
		case 37:
			return 4;
		case 38:
			return 1;
		case 39:
			return 1;
		case 40:
			return 4;
		case 41:
			return 3;
		case 42:
			return 2;
		case 99:
			return 2;
		case 44:
			return 3;
		case 43:
			return 4;
		case 45:
			return 4;
		case 46:
			return 2;
		case 47:
			return 1;
		case 48:
			return 2;
		case 105:
			return 2;
		case 49:
			return 1;
		case 50:
			return 9;
		case 51:
			return 2;
		case 52:
			return 2;
		case 53:
			return 2;
		case 54:
			return 2;
		case 56:
			return 3;
		case 57:
			return 8;
		case 58:
			return 2;
		case 59:
			return 2;
		case 60:
			return 2;
		case 61:
			return 1;
		case 62:
			return 3;
		case 63:
			return 3;
		case 64:
			return 3;
		case 65:
			return 2;
		case 66:
			return 3;
		case 67:
			return 1;
		case 68:
			return 2;
		case 69:
			return 1;
		case 70:
			return 2;
		case 71:
			return 2;
		case 72:
			return 3;
		case 73:
			return 3;
		case 74:
			return 1;
		case 79:
			return 4;
		case 80:
			return 2;
		case 81:
			return 4;
		case 82:
			return 4;
		case 83:
			return 2;
		case 84:
			return 2;
		case 85:
			return 2;
		case 86:
			return 2;
		case 87:
			return 3;
		case 88:
			return 2;
		case 89:
			return 1;
		case 90:
			return 2;
		case 92:
			return 2;
		case 93:
			return 1;
		case 95:
			return 1;
		case 97:
			return 2;
		case 98:
			return 3;
		case 100:
			return 1;
		case 101:
			return 2;
		case 102:
			return 3;
		case 103:
			return 3;
		case 104:
			return 3;
		case 106:
			return 9;
		case 107:
			return 2;
		case 108:
			return 5;
		case 109:
			return 2;
		case 110:
			return 1;
		case 111:
			return 7;
		case 112:
			return 1;
		case 113:
			return 3;
		case 114:
			return 4;
		case 115:
			return 2;
		case 117:
			return 2;
		case 116:
			return 1;
		case 118:
			return 2;
		default:
			break;
	}
	return 0;
}

void func_485(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_486()
{
	return 1;
	if (Global_1572887->f_12 == 0)
	{
		return 1;
	}
	return Global_40.f_1;
}

bool func_487(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1) != 0;
}

int func_488(int iParam0)
{
	if (!func_386(iParam0))
	{
		return 0;
	}
	return ((*Global_1888801)[iParam0 /*35*/])->f_20;
}

bool func_489(var uParam0)
{
	return (Global_1310750->f_16074 && uParam0) != 0;
}

bool func_490()
{
	return Global_1894899 & 2 != 0;
}

bool func_491(var uParam0)
{
	return func_414(*uParam0, 1);
}

void func_492(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_511(iParam1))
		{
			func_512(iParam0, 41788943);
		}
		else if (bParam5)
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
			func_513(iParam0, 0, 1);
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
			func_514(iParam0, 0);
			bVar0 = true;
		}
		func_515(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	}
}

int func_493(int iParam0, bool bParam1, int iParam2)
{
	float fVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar6;

	fVar0 = 999999.9f;
	iVar1 = -1;
	iVar2 = 0;
	while (iVar2 < 150)
	{
		if (((*Global_1888801)[iVar2 /*35*/])->f_20 == iParam0)
		{
			if (!(iParam2 && iVar2 == Global_1894899->f_2))
			{
				if (!bParam1 || func_516(iVar2))
				{
					vVar3 = { VOLUME::_0xF70F00013A62F866(((*Global_1888801)[iVar2 /*35*/])->f_3) };
					fVar6 = BUILTIN::VDIST(vVar3, Global_36);
					if (fVar6 < fVar0)
					{
						iVar1 = iVar2;
						fVar0 = fVar6;
					}
				}
			}
		}
		iVar2++;
	}
	return iVar1;
}

int func_494(int iParam0)
{
	if (func_165(iParam0))
	{
		return (Global_17503.f_42[iParam0 /*8*/])->f_4;
	}
	return 0;
}

int func_495(int iParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;

	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	switch (iParam0)
	{
		case 0:
			fVar1 = 30f;
			break;
		case 1:
			fVar2 = 1f;
			break;
		case 2:
			fVar2 = 2f;
			break;
		case 3:
			fVar2 = 3f;
			break;
		case 4:
			fVar2 = 4f;
			break;
		case 5:
			fVar2 = 6f;
			break;
		case 6:
			fVar2 = 8f;
			break;
		case 7:
			fVar2 = 12f;
			break;
		case 8:
			fVar3 = 1f;
			break;
		case 9:
			fVar3 = 2f;
			break;
		case 10:
			fVar3 = 3f;
			break;
		case 11:
			fVar3 = 4f;
			break;
		case 12:
			fVar3 = 5f;
			break;
		case 13:
			fVar3 = 6f;
			break;
		case 14:
			fVar3 = 7f;
			break;
		case 15:
			fVar3 = 8f;
			break;
		case 16:
			fVar3 = 10f;
			break;
		case 17:
			fVar3 = 12f;
			break;
		case 18:
			fVar3 = 15f;
			break;
		case 19:
			fVar3 = 18f;
			break;
		case 20:
			fVar3 = 20f;
			break;
		case 21:
			fVar3 = 25f;
			break;
		case 22:
			fVar2 = -1f;
			break;
		case 23:
			fVar3 = -5f;
			break;
		case 24:
			fVar3 = -7f;
			break;
		case 25:
			fVar3 = -8f;
			break;
	}
	iVar4 = BUILTIN::ROUND((((fVar0 + (60f * fVar1)) + (3600f * fVar2)) + (86400f * fVar3)));
	return iVar4;
}

int func_496(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2106445152:
			return 292;
		case -2106214197:
			return 104;
		case -2101264851:
			return 195;
		case -2073072369:
			return 59;
		case -2069570138:
			return 25;
		case -2066272360:
			return 357;
		case -2058120606:
			return 197;
		case -2038424081:
			return 49;
		case -2034257789:
			return 92;
		case -2022369555:
			return 265;
		case -2021582629:
			return 112;
		case -2020023971:
			return 278;
		case -1957523409:
			return 208;
		case -1952856164:
			return 165;
		case -1949204933:
			return 276;
		case -1925798111:
			return 41;
		case -1861414976:
			return 353;
		case -1852605133:
			return 10;
		case -1847672446:
			return 376;
		case -1840704908:
			return 289;
		case -1838712533:
			return 26;
		case -1838352012:
			return 57;
		case -1835851517:
			return 56;
		case -1831552326:
			return 123;
		case -1825294305:
			return 266;
		case -1824738758:
			return 277;
		case -1818850842:
			return 253;
		case -1799960545:
			return 257;
		case -1764522338:
			return 372;
		case -1763509974:
			return 141;
		case -1741667789:
			return 64;
		case -1738165526:
			return 3;
		case -1718674470:
			return 23;
		case -1717960576:
			return 61;
		case -1711895055:
			return 13;
		case -1706438978:
			return 233;
		case -1700452710:
			return 53;
		case -1674179981:
			return 55;
		case -1666278201:
			return 33;
		case -1612662716:
			return 201;
		case -1610966108:
			return 322;
		case -1582926490:
			return 146;
		case -1579419919:
			return 147;
		case -1558439474:
			return 301;
		case -1556423728:
			return 218;
		case -1532284567:
			return 116;
		case -1530132748:
			return 311;
		case -1524512402:
			return 209;
		case -1523910291:
			return 155;
		case -1455998786:
			return 338;
		case -1447311849:
			return 215;
		case -1436021162:
			return 172;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case -1419919497:
			return 22;
		case -1414537028:
			return 73;
		case -1405998267:
			return 105;
		case -1344601768:
			return 314;
		case -1340339190:
			return 331;
		case -1329135070:
			return 140;
		case -1318987693:
			return 222;
		case -1311865656:
			return 37;
		case -1296807958:
			return 320;
		case -1283202000:
			return 321;
		case -1282804314:
			return 270;
		case -1278074582:
			return 171;
		case -1271608261:
			return 98;
		case -1257057567:
			return 21;
		case -1241340344:
			return 300;
		case -1236261996:
			return 235;
		case -1232809834:
			return 113;
		case -1230112817:
			return 170;
		case -1223121209:
			return 126;
		case -1215445344:
			return 131;
		case -1209597203:
			return 333;
		case -1206122982:
			return 156;
		case -1187950766:
			return 45;
		case -1179948750:
			return 136;
		case -1170496998:
			return 46;
		case -1164215952:
			return 234;
		case -1151084372:
			return 124;
		case -1145519186:
			return 100;
		case -1124061431:
			return 242;
		case -1123615607:
			return 29;
		case -1080627546:
			return 378;
		case -1077783786:
			return 194;
		case -1063147448:
			return 151;
		case -1062490780:
			return 79;
		case -1060078174:
			return 239;
		case -1056767524:
			return 176;
		case -1053549743:
			return 58;
		case -1029225159:
			return 106;
		case -1014145132:
			return 288;
		case -978957786:
			return 251;
		case -959357075:
			return 36;
		case -950054349:
			return 152;
		case -939420910:
			return 44;
		case -939114198:
			return 221;
		case -919512195:
			return 40;
		case -911126844:
			return 336;
		case -897750037:
			return 334;
		case -895073533:
			return 356;
		case -879507474:
			return 236;
		case -868076593:
			return 84;
		case -857964358:
			return 83;
		case -853383233:
			return 65;
		case -851626677:
			return 339;
		case -828139293:
			return 260;
		case -811637947:
			return 245;
		case -796902762:
			return 88;
		case -792853067:
			return 254;
		case -789397228:
			return 262;
		case -785605431:
			return 250;
		case -781631220:
			return 345;
		case -764163380:
			return 228;
		case -748969569:
			return 78;
		case -741351766:
			return 60;
		case -736853952:
			return 366;
		case -734416508:
			return 340;
		case -699277634:
			return 4;
		case -693828600:
			return 323;
		case -683458244:
			return 80;
		case -666014935:
			return 157;
		case -664512648:
			return 67;
		case -664252410:
			return 191;
		case -644722288:
			return 261;
		case -640663440:
			return 214;
		case -639037538:
			return 185;
		case -628542779:
			return 71;
		case -622554983:
			return 370;
		case -618620429:
			return 187;
		case -545450213:
			return 377;
		case -538889627:
			return 175;
		case -538880323:
			return 174;
		case -534215902:
			return 130;
		case -524787708:
			return 352;
		case -524145696:
			return 117;
		case -523522517:
			return 364;
		case -515561750:
			return 238;
		case -503955743:
			return 249;
		case -502473159:
			return 343;
		case -502324015:
			return 8;
		case -491981251:
			return 186;
		case -468693731:
			return 111;
		case -464836488:
			return 268;
		case -460024530:
			return 316;
		case -434590080:
			return 225;
		case -404698347:
			return 205;
		case -397760715:
			return 143;
		case -389056691:
			return 272;
		case -360036154:
			return 368;
		case -356975260:
			return 103;
		case -355531636:
			return 337;
		case -351362068:
			return 220;
		case -350863510:
			return 162;
		case -349064220:
			return 362;
		case -334729750:
			return 69;
		case -333135263:
			return 361;
		case -330120947:
			return 360;
		case -306246697:
			return 375;
		case -299522880:
			return 213;
		case -270094635:
			return 267;
		case -261141318:
			return 30;
		case -259123672:
			return 244;
		case -254562075:
			return 132;
		case -238080464:
			return 121;
		case -233743613:
			return 273;
		case -223469678:
			return 204;
		case -220282381:
			return 139;
		case -191424539:
			return 149;
		case -182889087:
			return 177;
		case -154581735:
			return 309;
		case -150493654:
			return 97;
		case -144653976:
			return 219;
		case -129643890:
			return 11;
		case -108780030:
			return 317;
		case -108307814:
			return 28;
		case -99303535:
			return 167;
		case -86199844:
			return 145;
		case -80522843:
			return 154;
		case -76237062:
			return 373;
		case -75024673:
			return 258;
		case -63926460:
			return 89;
		case -61411516:
			return 325;
		case -35658630:
			return 24;
		case -25901845:
			return 290;
		case -9438024:
			return 129;
		case -1:
			return 0;
		case 0:
			return 1;
		case 2639906:
			return 153;
		case 8924991:
			return 297;
		case 26054262:
			return 248;
		case 26245360:
			return 237;
		case 38162571:
			return 74;
		case 52706132:
			return 243;
		case 54073871:
			return 76;
		case 74872959:
			return 348;
		case 93964309:
			return 358;
		case 94263042:
			return 291;
		case 106479759:
			return 101;
		case 141950038:
			return 114;
		case 153152452:
			return 86;
		case 168171957:
			return 183;
		case 171107021:
			return 381;
		case 171499483:
			return 283;
		case 187862543:
			return 16;
		case 192515737:
			return 14;
		case 198200492:
			return 241;
		case 210001842:
			return 62;
		case 224551212:
			return 142;
		case 227918160:
			return 182;
		case 229371495:
			return 344;
		case 235928616:
			return 286;
		case 249726958:
			return 164;
		case 269047710:
			return 54;
		case 273461605:
			return 81;
		case 280705402:
			return 95;
		case 282809459:
			return 119;
		case 299694527:
			return 275;
		case 300221584:
			return 138;
		case 302205488:
			return 216;
		case 311708813:
			return 198;
		case 320943355:
			return 133;
		case 330026330:
			return 66;
		case 345808947:
			return 287;
		case 356365161:
			return 47;
		case 371850993:
			return 281;
		case 373691918:
			return 188;
		case 374115931:
			return 90;
		case 405586984:
			return 34;
		case 407136781:
			return 173;
		case 409602249:
			return 293;
		case 417081698:
			return 17;
		case 417525590:
			return 303;
		case 420709909:
			return 42;
		case 426191476:
			return 15;
		case 434558613:
			return 199;
		case 439465264:
			return 108;
		case 440043364:
			return 31;
		case 442317566:
			return 302;
		case 449774763:
			return 227;
		case 459290420:
			return 52;
		case 469053995:
			return 231;
		case 473295046:
			return 2;
		case 476714362:
			return 232;
		case 478884033:
			return 148;
		case 479419429:
			return 305;
		case 509781469:
			return 350;
		case 514932331:
			return 246;
		case 522677506:
			return 279;
		case 526003171:
			return 355;
		case 527226204:
			return 159;
		case 544152906:
			return 115;
		case 559573222:
			return 252;
		case 582380806:
			return 326;
		case 588987611:
			return 179;
		case 618699440:
			return 77;
		case 630808005:
			return 128;
		case 651395116:
			return 294;
		case 657241756:
			return 189;
		case 664571177:
			return 312;
		case 665676602:
			return 296;
		case 682839815:
			return 327;
		case 689024866:
			return 134;
		case 689930684:
			return 207;
		case 704802028:
			return 178;
		case 723021499:
			return 264;
		case 747514327:
			return 354;
		case 753127042:
			return 48;
		case 757752139:
			return 109;
		case 784360470:
			return 330;
		case 791041526:
			return 18;
		case 817925178:
			return 240;
		case 868326136:
			return 285;
		case 885203519:
			return 379;
		case 885378256:
			return 351;
		case 929582877:
			return 335;
		case 931649776:
			return 224;
		case 932909855:
			return 298;
		case 945612176:
			return 247;
		case 965986934:
			return 19;
		case 976539083:
			return 310;
		case 1010885152:
			return 7;
		case 1015669983:
			return 122;
		case 1050128548:
			return 284;
		case 1064154891:
			return 110;
		case 1067254646:
			return 319;
		case 1074873669:
			return 144;
		case 1140218954:
			return 27;
		case 1151197909:
			return 256;
		case 1159471771:
			return 329;
		case 1160698568:
			return 135;
		case 1164928979:
			return 158;
		case 1166612791:
			return 347;
		case 1167397384:
			return 307;
		case 1177464213:
			return 38;
		case 1186594126:
			return 230;
		case 1193080109:
			return 184;
		case 1203043430:
			return 274;
		case 1205826474:
			return 85;
		case 1207048789:
			return 169;
		case 1213993593:
			return 160;
		case 1216784232:
			return 269;
		case 1221801385:
			return 374;
		case 1238086793:
			return 313;
		case 1250636944:
			return 259;
		case 1302228510:
			return 315;
		case 1306158345:
			return 202;
		case 1321892118:
			return 324;
		case 1350371763:
			return 20;
		case 1350391819:
			return 75;
		case 1352699670:
			return 271;
		case 1358491857:
			return 263;
		case 1360745816:
			return 82;
		case 1376646519:
			return 223;
		case 1399676951:
			return 210;
		case 1410198831:
			return 217;
		case 1433244935:
			return 166;
		case 1441416901:
			return 211;
		case 1446719356:
			return 380;
		case 1453909576:
			return 125;
		case 1466547629:
			return 120;
		case 1478132521:
			return 367;
		case 1485195808:
			return 50;
		case 1485494263:
			return 102;
		case 1488286867:
			return 295;
		case 1488453464:
			return 212;
		case 1497516462:
			return 5;
		case 1500064347:
			return 72;
		case 1509509592:
			return 35;
		case 1512816328:
			return 168;
		case 1517904467:
			return 206;
		case 1522511407:
			return 280;
		case 1549124796:
			return 342;
		case 1557082963:
			return 163;
		case 1582370975:
			return 359;
		case 1583012985:
			return 304;
		case 1591451572:
			return 365;
		case 1607768502:
			return 9;
		case 1609506757:
			return 107;
		case 1626481264:
			return 118;
		case 1643531967:
			return 127;
		case 1649996811:
			return 181;
		case 1660024373:
			return 150;
		case 1665756137:
			return 93;
		case 1672143046:
			return 383;
		case 1691618738:
			return 68;
		case 1698972798:
			return 318;
		case 1703398561:
			return 332;
		case 1703426636:
			return 43;
		case 1708045337:
			return 346;
		case 1713221411:
			return 137;
		case 1743048395:
			return 226;
		case 1744443559:
			return 349;
		case 1766284049:
			return 94;
		case 1776302352:
			return 363;
		case 1804403874:
			return 382;
		case 1822001510:
			return 200;
		case 1846061697:
			return 99;
		case 1850082804:
			return 196;
		case 1867912207:
			return 70;
		case 1884271742:
			return 51;
		case 1926308480:
			return 96;
		case 1932172605:
			return 328;
		case 1944170089:
			return 161;
		case 1947931439:
			return 229;
		case 1952610440:
			return 203;
		case 1954026328:
			return 371;
		case 1982676972:
			return 91;
		case 2008888900:
			return 180;
		case 2016141805:
			return 6;
		case 2019386373:
			return 190;
		case 2024121624:
			return 193;
		case 2024383613:
			return 369;
		case 2024769126:
			return 308;
		case 2037589949:
			return 63;
		case 2051822093:
			return 299;
		case 2077022393:
			return 306;
		case 2080210939:
			return 282;
		case 2091701359:
			return 39;
		case 2109952320:
			return 192;
		case 2113625508:
			return 341;
		case 2127577956:
			return 255;
		case 2136753624:
			return 87;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

bool func_497(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return false;
	}
	return ((Global_1393237->f_11[iParam0 /*30*/])->f_10 && iParam1) != 0;
}

void func_498(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return;
	}
	(Global_1393237->f_11[iParam0 /*30*/])->f_10 = ((Global_1393237->f_11[iParam0 /*30*/])->f_10 || iParam1);
}

int func_499(int iParam0)
{
	switch (iParam0)
	{
		case 6:
		case 53:
		case 101:
		case 108:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_500(int iParam0, int iParam1)
{
	if (!func_165(iParam0))
	{
		return;
	}
	((*Global_1310750)[iParam0 /*111*/])->f_1 = (((*Global_1310750)[iParam0 /*111*/])->f_1 - (((*Global_1310750)[iParam0 /*111*/])->f_1 && iParam1));
}

int func_501(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_517(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

bool func_502(int iParam0, int iParam1)
{
	if (func_304() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iParam0]), iParam1);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iParam0]), iParam1);
}

int func_503(int iParam0)
{
	if (func_304() != -1)
	{
		if (func_472(iParam0, 4))
		{
			return 0;
		}
	}
	else if (func_472(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

int func_504(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_472(iParam0, 65536) && !func_472(iParam0, 32768))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if ((Global_40.f_7756[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_472(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0 /*3*/] - iVar1);
			if ((Global_40.f_7756[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && func_472(iParam0, 32768))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_505(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_506()
{
	return Global_1905944->f_5694;
}

int func_507(int iParam0)
{
	if (!func_518(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		(*Global_1360165)[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

void func_508(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_519(iParam0))
	{
		return;
	}
	iVar0 = Global_1360165[iParam0 /*1157*/];
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			DECORATOR::DECOR_SET_INT(iVar0, "companion_manager_command", iParam1);
		}
	}
}

int func_509()
{
	return &Global_1899515;
}

void func_510(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_520(*uParam0);
	iVar1 = func_521(*uParam0);
	iVar2 = func_522(*uParam0);
	iVar3 = func_169(*uParam0);
	iVar4 = func_466(*uParam0);
	iVar5 = func_523(*uParam0);
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
	iVar6 = func_524(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_524(iVar1, iVar0);
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
	func_525(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_511(int iParam0)
{
	switch (iParam0)
	{
		case joaat("cs_sistercalderon"):
		case joaat("cs_strsheriff_01"):
		case joaat("cs_mud2bigguy"):
		case joaat("cs_rainsfall"):
		case joaat("cs_penelopebraithwaite"):
		case joaat("cs_swampweirdosonny"):
		case joaat("cs_unidusterjail_01"):
		case joaat("cs_iangray"):
		case joaat("cs_tinyhermit"):
		case joaat("cs_timothydonahue"):
		case joaat("cs_princessisabeau"):
		case joaat("cs_leviticuscornwall"):
		case joaat("cs_didsbury"):
		case joaat("cs_featherstonchambers"):
		case joaat("cs_featsofstrength"):
		case joaat("cs_bandpianist"):
		case joaat("cs_escapeartistassistant"):
		case joaat("cs_garethbraithwaite"):
		case joaat("cs_creoleguy"):
		case joaat("cs_leighgray"):
		case joaat("cs_strawberryoutlaw_02"):
		case joaat("cs_gloria"):
		case joaat("cs_warvet"):
		case joaat("cs_jockgray"):
		case joaat("cs_davidgeddes"):
		case joaat("cs_guidomartelli"):
		case joaat("cs_duncangeddes"):
		case joaat("cs_dusterinformant_01"):
		case joaat("cs_pinkertongoon"):
		case joaat("cs_mickey"):
		case joaat("cs_twinbrother_02"):
		case joaat("cs_hestonjameson"):
		case joaat("cs_strdeputy_01"):
		case joaat("cs_abe"):
		case joaat("cs_oddfellowspinhead"):
		case joaat("cs_swampfreak"):
		case joaat("cs_mradler"):
		case joaat("cs_aberdeenpigfarmer"):
		case joaat("cs_hobartcrawley"):
		case joaat("cs_formyartbigwoman"):
		case joaat("cs_norrisforsythe"):
		case joaat("cs_jules"):
		case joaat("cs_tomdickens"):
		case joaat("cs_geraldbraithwaite"):
		case joaat("cs_paytah"):
		case joaat("cs_cancan_03"):
		case joaat("cs_grizzledjon"):
		case joaat("cs_wrobel"):
		case joaat("cs_meredith"):
		case joaat("cs_creepyoldlady"):
		case joaat("cs_nbxreceptionist_01"):
		case joaat("cs_nbxpolicechiefformal"):
		case joaat("cs_cornwalltrainconductor"):
		case joaat("cs_rhodeputy_01"):
		case joaat("cs_drmalcolmmacintosh"):
		case joaat("cs_leon"):
		case joaat("cs_sheriffowens"):
		case joaat("cs_sddoctor_01"):
		case joaat("cs_scottgray"):
		case joaat("cs_cancan_01"):
		case joaat("cs_creolecaptain"):
		case joaat("cs_brontesbutler"):
		case joaat("cs_janson"):
		case joaat("cs_forgivenwife_01"):
		case joaat("cs_tigerhandler"):
		case joaat("cs_frenchartist"):
		case joaat("cs_genstorymale"):
		case joaat("cs_clay"):
		case joaat("cs_strdeputy_02"):
		case joaat("cs_famousgunslinger_03"):
		case joaat("cs_bivcoachdriver"):
		case joaat("cs_braithwaitebutler"):
		case joaat("cs_cleet"):
		case joaat("cs_joe"):
		case joaat("cs_slavecatcher"):
		case joaat("cs_braithwaitemaid"):
		case joaat("cs_twingroupie_02"):
		case joaat("cs_mrsgeddes"):
		case joaat("cs_samaritan"):
		case joaat("cs_exconfedinformant"):
		case joaat("cs_frenchman_01"):
		case joaat("cs_bandsinger"):
		case joaat("cs_baptiste"):
		case joaat("cs_angusgeddes"):
		case joaat("cs_mysteriousstranger"):
		case joaat("cs_famousgunslinger_01"):
		case joaat("cs_bartholomewbraithwaite"):
		case joaat("cs_mixedracekid"):
		case joaat("cs_beatenupcaptain"):
		case joaat("cs_edgarross"):
		case joaat("cs_twingroupie_01"):
		case joaat("cs_mrsweathers"):
		case joaat("cs_jamie"):
		case joaat("cs_karensjohn_01"):
		case joaat("cs_thomasdown"):
		case joaat("cs_obediahhinton"):
		case joaat("cs_agnesdowd"):
		case joaat("cs_cavehermit"):
		case joaat("cs_brynntildon"):
		case joaat("cs_germanson"):
		case joaat("cs_brendacrawley"):
		case joaat("cs_colfavours"):
		case joaat("cs_rhodeskidnapvictim"):
		case joaat("cs_exconfedsleader_01"):
		case joaat("cs_cancan_04"):
		case joaat("cs_towncrier"):
		case joaat("cs_famousgunslinger_04"):
		case joaat("cs_dalemaroney"):
		case joaat("cs_angryhusband"):
		case joaat("cs_lillianpowell"):
		case joaat("cs_andershelgerson"):
		case joaat("cs_poorjoe"):
		case joaat("cs_braithwaiteservant"):
		case joaat("cs_brotherdorkins"):
		case joaat("cs_albertmason"):
		case joaat("cs_famousgunslinger_05"):
		case joaat("cs_balloonoperator"):
		case joaat("cs_albertcakeesquire"):
		case joaat("cs_mrsfellows"):
		case joaat("cs_cancanman_01"):
		case joaat("cs_poisonwellshaman"):
		case joaat("cs_cancan_02"):
		case joaat("cs_meredithsmother"):
		case joaat("cs_angel"):
		case joaat("cs_archerfordham"):
		case joaat("cs_disguisedduster_01"):
		case joaat("cs_chelonianmaster"):
		case joaat("cs_twinbrother_01"):
		case joaat("cs_germandaughter"):
		case joaat("cs_lemiuxassistant"):
		case joaat("cs_creoledoctor"):
		case joaat("cs_crackpotrobot"):
		case joaat("cs_bandbassist"):
		case joaat("cs_genstoryfemale"):
		case joaat("cs_marylinton"):
		case joaat("cs_valprayingman"):
		case joaat("cs_johnthebaptisingmadman"):
		case joaat("cs_mrs_calhoun"):
		case joaat("cs_theodorelevin"):
		case joaat("cs_nicholastimmins"):
		case joaat("cs_disguisedduster_03"):
		case joaat("cs_dinoboneslady"):
		case joaat("cs_beaugray"):
		case joaat("cs_strawberryoutlaw_01"):
		case joaat("cs_crackpotinventor"):
		case joaat("cs_hercule"):
		case joaat("cs_gavin"):
		case joaat("cs_levisimon"):
		case joaat("cs_londonderryson"):
		case joaat("cs_captainmonroe"):
		case joaat("cs_famousgunslinger_02"):
		case joaat("cs_mrslondonderry"):
		case joaat("cs_soothsayer"):
		case joaat("cs_tavishgray"):
		case joaat("cs_joebutler"):
		case joaat("cs_banddrummer"):
		case joaat("cs_lillymillet"):
		case joaat("cs_ansel_atherton"):
		case joaat("cs_rhodeputy_02"):
		case joaat("cs_edmundlowry"):
		case joaat("cs_disguisedduster_02"):
		case joaat("cs_magnifico"):
		case joaat("cs_artappraiser"):
		case joaat("cs_forgivenhusband_01"):
		case joaat("cs_reverendfortheringham"):
		case joaat("cs_daveycallender"):
		case joaat("cs_desmond"):
		case joaat("cs_adamgray"):
		case joaat("cs_jimcalloway"):
		case joaat("cs_sdsaloondrunk_01"):
		case joaat("cs_nbxdrunk"):
		case joaat("cs_germanmother"):
		case joaat("cs_ringmaster"):
		case joaat("cs_lucanapoli"):
		case joaat("cs_rhodesassistant"):
		case joaat("cs_aberdeensister"):
		case joaat("cs_nbxexecuted"):
		case joaat("cs_famousgunslinger_06"):
		case joaat("cs_johnweathers"):
		case joaat("cs_professorbell"):
		case joaat("cs_rhodessaloonbouncer"):
			return 1;
		default:
			break;
	}
	return 0;
}

void func_512(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_526(iParam0, iParam1))
		{
			if (func_527(iParam0, iParam1))
			{
				if (func_528(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_529(iParam0);
				}
			}
			else
			{
				PED::_0x1902C4CFCC5BE57C(iParam0, iParam1);
				PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
			}
			PED::_0xE3144B932DFDFF65(iParam0, 0f, -1, 1, 1);
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 10, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 3);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 0);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 5);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 7);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 8);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 9);
		}
	}
}

void func_513(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	PED::_0xD710A5007C2AC539(iParam0, -1725579161, 1);
	if (bParam2)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	}
}

void func_514(int iParam0, bool bParam1)
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
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	}
}

void func_515(int iParam0, int iParam1)
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

bool func_516(int iParam0)
{
	if (!(iParam0 >= 0 && iParam0 <= 150))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return Global_23117[iParam0 /*11*/] & 32 != 0;
	}
	return Global_1058888->f_40615[iParam0 /*11*/] & 32 != 0;
}

int func_517(int iParam0)
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

bool func_518(int iParam0)
{
	return iParam0 > -1;
}

int func_519(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return 0;
	}
	return 1;
}

var func_520(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_413(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_521(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_522(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_523(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_524(int iParam0, int iParam1)
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

void func_525(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_530(uParam0, iParam6);
	func_531(uParam0, iParam5);
	func_532(uParam0, iParam4);
	func_533(uParam0, iParam3);
	func_534(uParam0, iParam2);
	func_535(uParam0, iParam1);
}

bool func_526(int iParam0, int iParam1)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	bVar0 = PED::_DOES_METAPED_OUTFIT_EXIST_FOR_PED_MODEL(iParam1, ENTITY::GET_ENTITY_MODEL(iParam0));
	if (bVar0)
	{
	}
	return bVar0;
}

int func_527(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return 0;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request_name");
	if (iVar0 == iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_528(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return false;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request_name");
	if (!func_526(iParam0, iVar0))
	{
		return true;
	}
	if (iVar0 != iParam1)
	{
		return false;
	}
	iVar1 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request");
	return PED::_0x610438375E5D1801(iVar1);
}

void func_529(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

void func_530(var uParam0, int iParam1)
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

void func_531(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 62914560);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_532(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_521(*uParam0);
	iVar1 = func_520(*uParam0);
	if (iParam1 < 1 || iParam1 > func_524(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4063232);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_533(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 126976);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_534(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4032);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_535(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 63);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

