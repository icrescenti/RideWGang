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
	struct<52> Local_15[8];
	struct<21> Local_432[8];
	int iLocal_601 = 0;
	int iLocal_602 = 0;
	int iLocal_603 = 0;
	int iLocal_604 = 0;
	var uLocal_605 = 0;
	int iLocal_606 = 0;
	int iLocal_607 = 0;
	var uLocal_608 = 0;
	int iLocal_609 = 0;
	int iLocal_610 = 0;
	int iLocal_611 = 0;
	int iLocal_612 = 0;
	int iLocal_613 = 0;
	int iLocal_614 = 0;
	int iLocal_615 = 0;
	int iLocal_616 = 0;
	var uLocal_617 = 0;
	int iLocal_618 = 0;
	bool bLocal_619 = false;
	float fLocal_620 = 0f;
	float fLocal_621 = 0f;
	int iLocal_622[4] = { 0, 0, 0, 0 };
	vector3 vLocal_627[22] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_694 = 0f;
	float fLocal_695 = 0f;
	vector3 vLocal_696 = { 0f, 0f, 0f };
	var uLocal_699 = 2;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	struct<1110> Local_718 = { 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 45, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 3, -1, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, -1, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, -1, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1828 = 0;
	var uLocal_1829 = 0;
	var uLocal_1830 = 0;
	var uLocal_1831 = 0;
	var uLocal_1832 = 0;
	var uLocal_1833 = 0;
	var uLocal_1834 = 0;
	var uLocal_1835 = 0;
	int iLocal_1836 = 0;
	var uLocal_1837 = 0;
	var uLocal_1838 = 0;
	var uLocal_1839 = 0;
	var uLocal_1840 = 0;
	var uLocal_1841 = 0;
	var uLocal_1842 = 0;
	var uLocal_1843 = 0;
	var uLocal_1844 = 0;
	var uLocal_1845 = 0;
	var uLocal_1846 = 0;
	var uLocal_1847 = -1;
	var uLocal_1848 = 0;
	var uLocal_1849 = 0;
	var uLocal_1850 = 0;
	var uLocal_1851 = 0;
	var uLocal_1852 = 0;
	var uLocal_1853 = 0;
	var uLocal_1854 = 0;
	var uLocal_1855 = 0;
	var uLocal_1856 = 1097859072;
	var uLocal_1857 = 1000;
	var uLocal_1858 = 1067450368;
	var uLocal_1859 = 5000;
	var uLocal_1860 = 42;
	var uLocal_1861 = 1103626240;
	var uLocal_1862 = 1077936128;
	var uLocal_1863 = 1106247680;
	var uLocal_1864 = 1103101952;
	var uLocal_1865 = 1097859072;
	var uLocal_1866 = 1103626240;
	int iLocal_1867 = 0;
	int iLocal_1868 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion

void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_603 = -1;
	iLocal_604 = -1;
	iLocal_606 = -1;
	iLocal_607 = -1;
	iLocal_610 = -1;
	iLocal_614 = -1;
	fLocal_620 = 0f;
	fLocal_621 = 0f;
	if (func_1(vScriptParam_0.x) || vScriptParam_0.x == 14)
	{
		Local_718 = vScriptParam_0.x;
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-686154976, true);
		func_2(&uLocal_1839, 1);
		func_3(&uLocal_1839, 1);
		func_4(&uLocal_1839, 1);
		func_5(&uLocal_1839, 1);
		func_6(&uLocal_1839, 1);
		func_7(&uLocal_1839, 1);
		func_8(&uLocal_1839, 1);
		func_9(&uLocal_1839, 1);
		func_10(&uLocal_1839, 0);
		if (func_11(Global_1392581->f_3, 8))
		{
			func_12(&uLocal_716, 1, 1);
		}
		if (vScriptParam_0.x != 14 && func_13(vScriptParam_0.x, 65536))
		{
			func_14(&uLocal_717, -2147483648);
		}
		func_15();
		iLocal_611 = func_16(1299961383, 1015970717);
	}
	if (Local_718 == 14)
	{
		Local_718.f_1[0 /*22*/] = vScriptParam_0.z;
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		iLocal_616 = 1;
		uLocal_617 = func_17(PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP());
	}
	while (true)
	{
		func_19(iLocal_616, 1859/*func_18*/, iLocal_618);
		if (func_20())
		{
			func_18();
		}
		func_21();
		if (func_22(&vScriptParam_0))
		{
			func_23(&iLocal_14, 5);
		}
		if ((MISC::GET_FRAME_COUNT() % 10) == 0)
		{
			fLocal_695 = func_24();
		}
		func_12(&uLocal_716, 128, 0);
		iLocal_607 = -1;
		func_12(&uLocal_716, 268435456, 0);
		func_25(&Local_718, &uLocal_717, iLocal_603);
		func_26(iLocal_603, &uLocal_716);
		if (func_27(&Local_718, &uLocal_716, iLocal_603))
		{
			iLocal_618 = 1;
			iLocal_616 = 1;
		}
		if (iLocal_14 != 5 && Local_718 != 14)
		{
			func_28();
		}
		func_29();
		switch (iLocal_14)
		{
			case 0:
				if (!ENTITY::DOES_ENTITY_EXIST(&(Local_718.f_1[0 /*22*/])))
				{
					if (Local_718 == 14)
					{
						Local_718.f_1[0 /*22*/] = vScriptParam_0.z;
					}
					else
					{
						Local_718.f_1[0 /*22*/] = func_30(Local_718);
					}
				}
				else if (VEHICLE::_0xBD3C4A2ED509205E(&(Local_718.f_1[0 /*22*/])))
				{
					func_14(&uLocal_717, 536870912);
					func_31(ENTITY::GET_ENTITY_COORDS(&(Local_718.f_1[0 /*22*/]), true, false), 225f, 0);
					func_32(Local_718, 1, 0, 0);
					func_33(&Local_718, &(Local_718.f_1102));
					func_34(Global_40.f_8863[87], 4);
					func_35();
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(2045433246, true);
					func_36(&Local_718);
					func_37(&Local_718);
					func_38(&Local_718);
					func_39(&uLocal_699);
					iLocal_1836 = 0;
					func_23(&iLocal_14, 1);
				}
				break;
			case 1:
				if (func_40(&Local_718, &uLocal_699, &iLocal_1836))
				{
					func_41(&Local_718);
					BUILTIN::SETTIMERA(0);
					func_23(&iLocal_14, 2);
				}
				break;
			case 2:
				if (!func_11(Global_1392581->f_3, 8))
				{
					if (func_42(&Local_718))
					{
						if (func_43(uLocal_716, 1))
						{
							func_44();
							func_45(&Local_718, iLocal_603);
						}
						func_23(&iLocal_14, 3);
					}
				}
				break;
			case 3:
				if (func_46(&Local_718, 125f))
				{
					func_47();
					func_12(&uLocal_716, 64, func_48());
					func_49();
					if (func_43(uLocal_716, 64))
					{
						if (func_44())
						{
							func_12(&uLocal_716, 268435456, 1);
						}
						func_50(iLocal_603);
					}
					else
					{
						iLocal_603 = -1;
						func_12(&uLocal_716, 64, 0);
						func_12(&uLocal_716, 8, 0);
						EVENT::REMOVE_SHOCKING_EVENT(iLocal_610);
					}
					if (func_51(&Local_718, iLocal_603))
					{
						func_52(&Local_718, iLocal_603);
					}
					func_53();
					func_54();
					func_42(&Local_718);
					func_55(&Local_718, 1);
					func_56();
					func_57();
					func_58();
					func_59();
					func_60();
					func_61(1);
					func_62();
					if (func_63())
					{
						func_64();
						func_65(&iLocal_609);
						func_23(&iLocal_14, 4);
					}
				}
				break;
			case 4:
				if (!func_13(Local_718, 32768))
				{
					func_66(Local_718, 32768);
					func_66(Local_718, 65536);
				}
				func_47();
				PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Global_35, 0, 1);
				func_67(&uLocal_716, &vLocal_627);
				func_68(&Local_718, &vLocal_627, &uLocal_716, &uLocal_717, iLocal_603, &uLocal_605, &iLocal_609);
				func_59();
				func_60();
				func_61(0);
				func_69(&uLocal_716);
				func_58();
				func_49();
				func_70();
				if (func_44())
				{
					if (!func_11((Local_718.f_1[iLocal_603 /*22*/])->f_4, 2))
					{
						func_34(&((Local_718.f_1[iLocal_603 /*22*/])->f_4), 2);
					}
					func_12(&uLocal_716, 268435456, 1);
				}
				if (func_51(&Local_718, iLocal_603))
				{
					func_52(&Local_718, iLocal_603);
				}
				func_53();
				func_71(iLocal_603);
				func_50(iLocal_603);
				func_54();
				func_72();
				func_42(&Local_718);
				func_55(&Local_718, 0);
				func_62();
				func_73();
				break;
			case 5:
				func_18();
				break;
		}
		BUILTIN::WAIT(0);
	}
}

int func_1(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return 0;
	}
	return 1;
}

void func_2(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_74(&(uParam0->f_1), 8);
	}
	else
	{
		func_34(&(uParam0->f_1), 8);
	}
}

void func_3(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_74(&(uParam0->f_1), 4);
	}
	else
	{
		func_34(&(uParam0->f_1), 4);
	}
}

void func_4(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_74(&(uParam0->f_1), 2);
	}
	else
	{
		func_34(&(uParam0->f_1), 2);
	}
}

void func_5(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_34(uParam0, 8);
	}
	else
	{
		func_74(uParam0, 8);
	}
}

void func_6(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_34(uParam0, 16);
	}
	else
	{
		func_74(uParam0, 67108864);
		func_74(uParam0, 16);
	}
}

void func_7(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_74(&(uParam0->f_1), 256);
	}
	else
	{
		func_34(&(uParam0->f_1), 256);
	}
}

void func_8(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_34(uParam0, 524288);
	}
	else
	{
		func_74(uParam0, 524288);
	}
}

void func_9(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_34(uParam0, 256);
	}
	else
	{
		func_74(uParam0, 256);
	}
}

void func_10(var uParam0, int iParam1)
{
	uParam0->f_18 = iParam1;
}

bool func_11(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_12(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_11(*uParam0, iParam1))
		{
			func_34(uParam0, iParam1);
		}
	}
	else if (func_11(*uParam0, iParam1))
	{
		func_74(uParam0, iParam1);
	}
}

bool func_13(int iParam0, int iParam1)
{
	if (!func_1(iParam0))
	{
		return false;
	}
	return (Global_40.f_11029[iParam0 /*5*/] && iParam1) != 0;
}

void func_14(var uParam0, int iParam1)
{
	if (!func_75(uParam0, iParam1))
	{
		func_34(uParam0, iParam1);
	}
}

void func_15()
{
}

var func_16(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var1;

	Var1 = { func_76(iParam0, iParam1) };
	STATS::STAT_ID_GET_INT(&Var1, &uVar0);
	return uVar0;
}

int func_17(int iParam0)
{
	if (((func_77(iParam0, 1) && func_77(iParam0, 2)) && func_77(iParam0, 8)) && func_77(iParam0, 512))
	{
		return 1;
	}
	return 0;
}

void func_18()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	bVar0 = ENTITY::DOES_ENTITY_EXIST(&(Local_718.f_1[0 /*22*/]));
	func_74(&(Global_1392581->f_3), 4);
	func_74(&(Global_1392581->f_3), 16);
	if (ITEMSET::IS_ITEMSET_VALID(iLocal_602))
	{
		ITEMSET::DESTROY_ITEMSET(iLocal_602);
	}
	if (func_75(&uLocal_717, 134217728))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
	}
	if (!iLocal_618)
	{
		if (func_13(Local_718, 16))
		{
			func_78();
			func_79(Local_718);
			func_80(Local_718, 32768);
		}
	}
	Global_1430221->f_2 = 0;
	if (!iLocal_618)
	{
		func_32(Local_718, 0, 0, 0);
		if (func_13(Local_718, 65536))
		{
			func_81(Global_1392581->f_4[Local_718 /*3*/]);
		}
	}
	func_82();
	if (func_43(uLocal_716, 536870912))
	{
		func_83(1);
		func_12(&uLocal_716, 536870912, 0);
	}
	func_74(Global_40.f_8863[87], 4);
	iVar2 = 0;
	while (iVar2 < Local_718.f_1099)
	{
		iVar3 = &Local_718.f_310[iVar2 /*14*/];
		if (ENTITY::DOES_ENTITY_EXIST(iVar3))
		{
			if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar3, false))
			{
				if (func_11((Local_718.f_310[iVar2 /*14*/])->f_7, 32))
				{
					PED::_0x3088634CF8C819CF(iVar3);
				}
				PED::SET_PED_FLEE_ATTRIBUTES(iVar3, 32768, false);
				if ((Local_718.f_310[iVar2 /*14*/])->f_8 == Local_718.f_1102)
				{
					PED::SET_PED_KEEP_TASK(iVar3, true);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar3);
				}
				else if (((uLocal_617 || iLocal_618) || !bVar0) && ((Local_718.f_310[iVar2 /*14*/])->f_3 != 0 || !bVar0))
				{
					func_84(&iVar3);
				}
				else
				{
					PED::SET_PED_KEEP_TASK(iVar3, true);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar3);
					PED::_0x39A2FC5AF55A52B1(iVar3, 5000);
				}
			}
		}
		iVar2++;
	}
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (PED::_0x91A5F9CBEBB9D936((Local_718.f_1[iVar1 /*22*/])->f_5))
		{
			iVar4 = PED::_0x6F46F8ACB44C4FC1((Local_718.f_1[iVar1 /*22*/])->f_5);
			POPULATION::_0xA1CFB35069D23C23(iVar4);
			func_85(iVar4);
			PED::REMOVE_SCENARIO_BLOCKING_AREA((Local_718.f_1[iVar1 /*22*/])->f_5, false);
		}
		if (VOLUME::_0x92A78D0BEDB332A3((Local_718.f_1[iVar1 /*22*/])->f_1))
		{
			func_85((Local_718.f_1[iVar1 /*22*/])->f_1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(&(Local_718.f_1[iVar1 /*22*/])))
		{
			if (bVar0)
			{
				VEHICLE::_0xD4907EF4334C7602(&(Local_718.f_1[iVar1 /*22*/]), 0);
				VEHICLE::_0x68830738A6BFB370(&(Local_718.f_1[iVar1 /*22*/]), 0);
			}
			ENTITY::_0x119A5714578F4E05(&(Local_718.f_1[iVar1 /*22*/]), 0);
		}
		iVar5 = PED::_0x5C16855277819BBF();
		if (iVar5 > 0)
		{
			iVar6 = (func_86(&Local_718, iVar1) - (Local_718.f_1[iVar1 /*22*/])->f_9);
			if (iVar6 > 0)
			{
				if (iVar6 > iVar5)
				{
					iVar6 = iVar5;
				}
				PED::_0x7D4E70A67A651C71(iVar6);
			}
		}
		iVar1++;
	}
	if (!iLocal_618)
	{
		if (bVar0)
		{
			VEHICLE::_0x4182C037AA1F0091(&(Local_718.f_1[0 /*22*/]), 1);
			VEHICLE::_0xA72B1BF3857B94D7(&(Local_718.f_1[0 /*22*/]), 0);
		}
	}
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-686154976, true);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(2045433246, false);
	iVar7 = 0;
	while (iVar7 < 4)
	{
		func_85(&(iLocal_622[iVar7]));
		iVar7++;
	}
	if (ITEMSET::IS_ITEMSET_VALID(iLocal_601))
	{
		ITEMSET::DESTROY_ITEMSET(iLocal_601);
	}
	EVENT::REMOVE_SHOCKING_EVENT(iLocal_610);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_1868);
	if (func_87(162))
	{
		func_88(162);
	}
	if (!iLocal_618)
	{
		LAW::_0x710448D44A64C213(1);
		if (LAW::_0xAD401C63158ACBAA(PLAYER::PLAYER_ID()))
		{
			LAW::_0x987BE590FB9D41E5(0);
			LAW::_0xDCF12B89624AAC96(0);
		}
	}
	func_89(2, 0, 0);
	func_89(1, 0, 0);
	Global_1392581->f_44 = 0;
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_19(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!func_90(bParam2) || CAM::IS_SCREEN_FADED_OUT())
		{
			Call_Loc(iParam1);
		}
	}
}

int func_20()
{
	return 0;
}

void func_21()
{
}

int func_22(var uParam0)
{
	float fVar0;

	if (func_75(&uLocal_717, 536870912))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(&(Local_718.f_1[0 /*22*/])))
		{
			return 1;
		}
	}
	if (func_91(0, 0, 1) && func_92(0) != Global_1392581->f_1)
	{
		return 1;
	}
	else if (*uParam0 == 14)
	{
		return 0;
	}
	if (!func_1(*uParam0))
	{
		return 1;
	}
	if (!VEHICLE::_0x0516FAE561276EFC(((*Global_1425371)[*uParam0 /*373*/])->f_1))
	{
		return 1;
	}
	fVar0 = 300f;
	if (func_43(uLocal_716, 65536))
	{
		if (!func_93(&Local_718) || (Local_718.f_1099 - Local_718.f_1101) < (Local_718.f_1099 / 2))
		{
			fVar0 = 100f;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(&(Local_718.f_1[0 /*22*/])) || func_13(*uParam0, 8192))
	{
		if (!func_46(&Local_718, fVar0))
		{
			return 1;
		}
	}
	else if (func_94(*uParam0, fVar0, 0))
	{
		return 1;
	}
	return 0;
}

void func_23(int iParam0, int iParam1)
{
	if (iParam1 != *iParam0)
	{
		*iParam0 = iParam1;
	}
}

float func_24()
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	vector3 vVar5;
	vector3 vVar8;
	float fVar11;

	if (!ENTITY::DOES_ENTITY_EXIST(&(Local_718.f_1[0 /*22*/])))
	{
		return 9999f;
	}
	if (VEHICLE::_0xDE8C5B9F65017FA1(&(Local_718.f_1[0 /*22*/])) <= 0)
	{
		return 9999f;
	}
	iVar0 = VEHICLE::_0xAF787E081AC4A8EE(&(Local_718.f_1[0 /*22*/]));
	iVar1 = VEHICLE::_0x86FA6D8B48667D75(&(Local_718.f_1[0 /*22*/]));
	iVar2 = VEHICLE::_0x1180A2974D251B7B(&(Local_718.f_1[0 /*22*/]));
	fVar3 = 9999f;
	fVar4 = 9999f;
	if (iVar1 >= 0)
	{
		vVar5 = { VEHICLE::_0xBA958F68031DDBFC(iVar0, iVar1) };
		if (func_95(vVar5, 500f, 1))
		{
			fVar3 = func_96(&(Local_718.f_1[0 /*22*/]), vVar5, 1);
		}
	}
	if (iVar2 >= 0)
	{
		vVar8 = { VEHICLE::_0xBA958F68031DDBFC(iVar0, iVar2) };
		if (func_95(vVar8, 500f, 1))
		{
			fVar4 = func_96(&(Local_718.f_1[0 /*22*/]), vVar8, 1);
		}
	}
	if (fVar4 < fVar3)
	{
		fVar11 = fVar4;
		vLocal_696 = { vVar8 };
	}
	else
	{
		fVar11 = fVar3;
		vLocal_696 = { vVar5 };
	}
	return fVar11;
}

void func_25(var uParam0, var uParam1, int iParam2)
{
	bool bVar0;

	if ((MISC::GET_FRAME_COUNT() % 60) != 0 || func_75(uParam1, 268435456))
	{
		return;
	}
	if (func_97())
	{
		if (!func_75(uParam1, 1073741824))
		{
			func_14(uParam1, 1073741824);
			bVar0 = true;
		}
	}
	else if (func_75(uParam1, 1073741824))
	{
		func_98(uParam1, 1073741824);
		bVar0 = true;
	}
	if (bVar0)
	{
		func_45(uParam0, iParam2);
	}
}

void func_26(int iParam0, var uParam1)
{
	if (iParam0 > -1 && TASK::_0x841475AC96E794D1(TASK::_0xD04241BBF6D03A5E(Global_35)))
	{
		func_99(uParam1);
	}
}

int func_27(var uParam0, var uParam1, int iParam2)
{
	if (!func_43(*uParam1, 1))
	{
		if (func_11(Global_1392581->f_3, 8))
		{
			func_12(uParam1, 1, 1);
			return 1;
		}
	}
	else if (!func_11(Global_1392581->f_3, 8))
	{
		if (!func_43(*uParam1, 64))
		{
			func_12(uParam1, 1, 0);
		}
		if (!func_43(*uParam1, -2147483648))
		{
			func_45(uParam0, iParam2);
			func_12(uParam1, -2147483648, 1);
		}
	}
	return 0;
}

void func_28()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = (MISC::GET_FRAME_COUNT() % Local_718.f_1098);
	if ((iVar0 >= 0 && iVar0 < Local_718.f_1098) && !ENTITY::DOES_ENTITY_EXIST(&(Local_718.f_1[iVar0 /*22*/])))
	{
		if (VOLUME::_0x92A78D0BEDB332A3(Local_718.f_1105))
		{
			VOLUME::_0x43F867EF5C463A53(Local_718.f_1105);
		}
		iVar0 = 1;
		while (iVar0 <= 13)
		{
			if (VOLUME::_0x92A78D0BEDB332A3((Local_718.f_1[iVar0 /*22*/])->f_1))
			{
				VOLUME::_0x43F867EF5C463A53((Local_718.f_1[iVar0 /*22*/])->f_1);
			}
			if (VOLUME::_0x92A78D0BEDB332A3((Local_718.f_1[iVar0 /*22*/])->f_2))
			{
				VOLUME::_0x43F867EF5C463A53((Local_718.f_1[iVar0 /*22*/])->f_2);
			}
			(Local_718.f_1[iVar0 /*22*/])->f_8 = 0;
			(Local_718.f_1[iVar0 /*22*/])->f_3 = 0;
			iVar1 = 0;
			while (iVar1 < 8)
			{
				(Local_718.f_1[iVar0 /*22*/])->f_11[iVar1] = 0;
				iVar1++;
			}
			iVar0++;
		}
		iVar2 = 0;
		while (iVar2 < 45)
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(Local_718.f_310[iVar2 /*14*/])))
			{
				PED::SET_PED_KEEP_TASK(&(Local_718.f_310[iVar2 /*14*/]), true);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(Local_718.f_310[iVar2 /*14*/]);
				func_74(&((Local_718.f_310[iVar2 /*14*/])->f_7), 16);
				(Local_718.f_310[iVar2 /*14*/])->f_4 = 0;
				(Local_718.f_310[iVar2 /*14*/])->f_6 = 0;
			}
			iVar2++;
		}
		iVar3 = 0;
		while (iVar3 < 4)
		{
			if (VOLUME::_0x92A78D0BEDB332A3(&(iLocal_622[iVar3])))
			{
				VOLUME::_0x43F867EF5C463A53(&(iLocal_622[iVar3]));
			}
			iVar3++;
		}
		iLocal_1836 = 0;
		Local_718.f_1099 = 0;
		func_23(&iLocal_14, 0);
	}
}

void func_29()
{
	if (!func_75(&uLocal_717, 268435456))
	{
		if (func_100() && !func_46(&Local_718, 100f))
		{
			func_14(&uLocal_717, 268435456);
		}
	}
	else if (!func_100() || func_46(&Local_718, 75f))
	{
		func_98(&uLocal_717, 268435456);
	}
}

int func_30(int iParam0)
{
	if (!func_1(iParam0))
	{
		return 0;
	}
	if (!VEHICLE::_0xC29996A337BDD099(((*Global_1425371)[iParam0 /*373*/])->f_1))
	{
		return 0;
	}
	func_66(iParam0, 16);
	return VEHICLE::_0x6E585A616ABB8401(((*Global_1425371)[iParam0 /*373*/])->f_1);
}

void func_31(vector3 vParam0, float fParam3, int iParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;

	vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_101(vVar0, vVar3, 0f) };
	vVar9 = { func_102(vVar0, vVar3, 0f) };
	PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(vVar6, vVar9, iParam4);
}

void func_32(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (func_1(iVar0))
		{
			if (iVar0 != iParam0)
			{
				if (bParam1)
				{
					func_66(iVar0, 2);
					if (bParam3)
					{
						if (VEHICLE::_0xC29996A337BDD099(((*Global_1425371)[iVar0 /*373*/])->f_1))
						{
							VEHICLE::_0x0D5FDF0D36FA10CD(((*Global_1425371)[iVar0 /*373*/])->f_1);
						}
					}
				}
				else
				{
					func_80(iVar0, 2);
				}
			}
			else
			{
				func_80(iVar0, 2);
				if (VEHICLE::_0xC29996A337BDD099(((*Global_1425371)[iVar0 /*373*/])->f_1))
				{
					if (bParam2)
					{
						VEHICLE::_0x718EB706B6E998A0(((*Global_1425371)[iVar0 /*373*/])->f_1);
					}
					else
					{
						VEHICLE::_0xE682002DB1F30669(((*Global_1425371)[iVar0 /*373*/])->f_1);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_33(int iParam0, var uParam1)
{
	var uVar0[14];
	int iVar15;

	uVar0[0] = &iParam0->f_1[0 /*22*/];
	func_103(iParam0, 0);
	if (!VOLUME::_0x92A78D0BEDB332A3((iParam0->f_1[0 /*22*/])->f_1))
	{
		func_104(iParam0->f_1[0 /*22*/], &((iParam0->f_1[0 /*22*/])->f_1), 0, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0);
	}
	iParam0->f_1098 = func_105(&uVar0);
	iVar15 = 1;
	while (iVar15 <= 13)
	{
		func_106(iParam0, iVar15);
		if (ENTITY::DOES_ENTITY_EXIST(&(uVar0[iVar15])))
		{
			iParam0->f_1[iVar15 /*22*/] = &uVar0[iVar15];
			func_103(iParam0, iVar15);
			if ((iParam0->f_1[iVar15 /*22*/])->f_6 == 3)
			{
				*uParam1 = iVar15;
			}
			if (!VOLUME::_0x92A78D0BEDB332A3((iParam0->f_1[iVar15 /*22*/])->f_1))
			{
				func_104(iParam0->f_1[iVar15 /*22*/], &((iParam0->f_1[iVar15 /*22*/])->f_1), iVar15, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0);
			}
			if (!VOLUME::_0x92A78D0BEDB332A3((iParam0->f_1[iVar15 /*22*/])->f_2))
			{
				func_104(iParam0->f_1[iVar15 /*22*/], &((iParam0->f_1[iVar15 /*22*/])->f_2), iVar15, -1082130432, -1082130432, -1082130432, 1, 0, 0, 0);
			}
			if ((iParam0->f_1[iVar15 /*22*/])->f_6 == 3)
			{
				func_104(iParam0->f_1[iVar15 /*22*/], &(iParam0->f_1105), iVar15, 14f, 5f, 15f, 0, -4f, 1, "NOCABOOSEJUMP");
			}
			if (!ENTITY::IS_ENTITY_DEAD(&(uVar0[iVar15])))
			{
			}
			if (ENTITY::DOES_ENTITY_EXIST(&(iParam0->f_1[iVar15 /*22*/])))
			{
			}
		}
		iVar15++;
	}
}

void func_34(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_35()
{
	if (iLocal_1868 == 0)
	{
		PED::ADD_RELATIONSHIP_GROUP("amb_train_guards", &iLocal_1868);
	}
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_1868, 555364152);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, 555364152, iLocal_1868);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_1868, 1030835986);
}

void func_36(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (func_93(iParam0))
	{
		iVar1 = 0;
		while (iVar1 < iParam0->f_1098)
		{
			if (func_51(iParam0, iVar1))
			{
				if (iVar0 >= 3)
				{
				}
				else
				{
					iParam0->f_941[iVar0 /*52*/] = iVar1;
					iVar0++;
					iVar1++;
				}
				iVar0 = iVar0;
				while (iVar0 <= 2)
				{
					iParam0->f_941[iVar0 /*52*/] = -1;
					iVar0++;
				}
			}
		}
	}

void func_37(int iParam0)
{
	int iVar0;
	var uVar1;
	int iVar2;

	if (func_93(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (&iParam0->f_941[iVar0 /*52*/] >= 0)
			{
				uVar1 = func_107();
				iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(1, 3);
				switch (iVar2)
				{
					case 3:
						((iParam0->f_941[iVar0 /*52*/])->f_3[3 /*12*/])->f_7 = uVar1;
						*((iParam0->f_941[iVar0 /*52*/])->f_3[3 /*12*/]) = { 1.51f, -0.77f, 1.77f };
						((iParam0->f_941[iVar0 /*52*/])->f_3[3 /*12*/])->f_3 = 92f;
						func_108(&(((iParam0->f_941[iVar0 /*52*/])->f_3[3 /*12*/])->f_11), 11);
					case 2:
						((iParam0->f_941[iVar0 /*52*/])->f_3[2 /*12*/])->f_7 = uVar1;
						*((iParam0->f_941[iVar0 /*52*/])->f_3[2 /*12*/]) = { 1.51f, -0.69f, 1.77f };
						((iParam0->f_941[iVar0 /*52*/])->f_3[2 /*12*/])->f_3 = 92f;
						func_108(&(((iParam0->f_941[iVar0 /*52*/])->f_3[2 /*12*/])->f_11), 11);
					case 1:
						((iParam0->f_941[iVar0 /*52*/])->f_3[1 /*12*/])->f_7 = uVar1;
						*((iParam0->f_941[iVar0 /*52*/])->f_3[1 /*12*/]) = { 1.54f, -0.29f, 1.77f };
						((iParam0->f_941[iVar0 /*52*/])->f_3[1 /*12*/])->f_3 = 92f;
						func_108(&(((iParam0->f_941[iVar0 /*52*/])->f_3[1 /*12*/])->f_11), 11);
						break;
				}
			}
			iVar0++;
		}
	}
}

void func_38(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_109(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	iVar2 = func_110(iParam0, (iVar0 - 1), 0);
	(iParam0->f_1[(iVar0 - 1) /*22*/])->f_5 = func_111(iVar2);
	iVar1 = func_112(iParam0);
	if (iVar1 == -1 || iVar1 == iVar0)
	{
		return;
	}
	if (iVar1 + 1 >= iParam0->f_1098)
	{
		return;
	}
	if ((iParam0->f_1[iVar1 + 1 /*22*/])->f_6 != 3)
	{
		iVar2 = func_110(iParam0, iVar1 + 1, 1);
		(iParam0->f_1[iVar1 + 1 /*22*/])->f_5 = func_111(iVar2);
	}
}

void func_39(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		StringCopy((*uParam0)[iVar0 /*8*/], "", 64);
		iVar0++;
	}
}

int func_40(int iParam0, var uParam1, int iParam2)
{
	switch (*iParam2)
	{
		case 0:
			HUD::_0xF66090013DE648D5("TNRB");
			func_113(iParam0);
			func_114(uParam1);
			func_115();
			*iParam2 = 1;
			break;
		case 1:
			if (!HUD::_0xD0976CC34002DB57("TNRB"))
			{
				return 0;
			}
			if (!func_116(iParam0))
			{
				return 0;
			}
			if (!func_115())
			{
				return 0;
			}
			*iParam2 = 2;
			return 1;
		case 2:
			return 1;
	}
	return 0;
}

void func_41(int iParam0)
{
	int iVar0;

	if (func_93(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (&iParam0->f_941[iVar0 /*52*/] >= 0)
			{
				func_117(0f, 0f, 0f, &((iParam0->f_941[iVar0 /*52*/])->f_3), 0, 0, 0, -1, 0);
				func_118(iParam0, iVar0);
			}
			iVar0++;
		}
	}
}

int func_42(int iParam0)
{
	int iVar0;

	if (!func_75(&uLocal_717, -2147483648) || iParam0->f_1103 == 0)
	{
		if (iParam0->f_1103 != 1)
		{
			func_119(iParam0, iParam0->f_1103);
		}
		else
		{
			func_120(iParam0, iParam0->f_1103, 1);
		}
	}
	else
	{
		func_120(iParam0, iParam0->f_1103, 1);
	}
	iParam0->f_1103++;
	if (iParam0->f_1103 >= iParam0->f_1098)
	{
		iParam0->f_1103 = 0;
		if (func_11((iParam0->f_1[iParam0->f_1103 /*22*/])->f_4, 4))
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

bool func_43(var uParam0, int iParam1)
{
	return func_11(uParam0, iParam1);
}

int func_44()
{
	bool bVar0;
	var uVar1;
	int iVar3;
	vector3 vVar4;
	int iVar7;
	float fVar8;
	int iVar9;

	if (iLocal_603 >= 0)
	{
		if (!func_11((Local_718.f_1[iLocal_603 /*22*/])->f_4, 2))
		{
			if (PED::IS_PED_SHOOTING(Global_35))
			{
				if (!func_43(uLocal_716, 4096) && !func_43(uLocal_716, 1048576))
				{
					func_64();
				}
				func_34(&((Local_718.f_1[iLocal_603 /*22*/])->f_4), 2);
			}
		}
	}
	if ((MISC::GET_FRAME_COUNT() % 5) == 0)
	{
		if (!func_43(uLocal_716, 524288))
		{
			bVar0 = false;
			if (iLocal_610 >= 0)
			{
				uVar1 = 1;
				if (PED::_0xF4860514AD354226(iLocal_610, Global_36, 40f, &uVar1) > 0)
				{
					bVar0 = true;
				}
			}
			if (bVar0)
			{
				fLocal_620 = (fLocal_620 + (5f * BUILTIN::TIMESTEP()));
				if (fLocal_620 >= 10f)
				{
					LAW::_0xEDFC6C1FD1C964F5(PLAYER::GET_PLAYER_INDEX(), 1343354387, 0, 0, 0, 0, 0, 0, 0);
					func_12(&uLocal_716, 524288, 1);
				}
			}
			else
			{
				fLocal_620 = (fLocal_620 - (5f * BUILTIN::TIMESTEP()));
				if (fLocal_620 < 0f)
				{
					fLocal_620 = 0f;
				}
			}
		}
		iVar3 = 0;
		while (iVar3 < 14)
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(Local_718.f_1[iVar3 /*22*/])))
			{
				if (PED::IS_PED_ON_SPECIFIC_VEHICLE(Global_35, &(Local_718.f_1[iVar3 /*22*/])) || (VOLUME::_0x92A78D0BEDB332A3((Local_718.f_1[iVar3 /*22*/])->f_1) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, (Local_718.f_1[iVar3 /*22*/])->f_1, true, 0)))
				{
					vVar4 = { ENTITY::GET_ENTITY_COORDS(&(Local_718.f_1[iVar3 /*22*/]), true, false) };
					func_12(&uLocal_716, 64, 1);
					fVar8 = (Global_36.f_2 - vVar4.z);
					if (fVar8 > 4f)
					{
						if (!func_43(uLocal_716, 8))
						{
							EVENT::REMOVE_SHOCKING_EVENT(iLocal_610);
							iLocal_610 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(-1905235087, Global_35, 0f, 30f, 40f, -1082130432, -1082130432, 1127481344, 0, 0, -1, -1);
							func_12(&uLocal_716, 8, 1);
						}
					}
					else if (func_43(uLocal_716, 8))
					{
						EVENT::REMOVE_SHOCKING_EVENT(iLocal_610);
						iLocal_610 = -1;
						func_12(&uLocal_716, 8, 0);
						EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(-1905235087, Global_35, 10f, 10f, 15f, -1082130432, -1082130432, 1127481344, 0, 0, -1, -1);
						iVar7 = 1;
					}
					if (iVar3 != iLocal_603 || iVar7)
					{
						iLocal_604 = iLocal_603;
						iLocal_603 = iVar3;
						func_121(vLocal_627[1 /*3*/]);
						func_45(&Local_718, iLocal_603);
						if (iLocal_603 == 1)
						{
							func_45(&Local_718, 0);
						}
						iVar9 = 0;
						while (iVar9 < 8)
						{
							func_122(Local_15[iVar9 /*52*/], 0, 0, 1, 0);
							iVar9++;
						}
						func_81(vLocal_627[11 /*3*/]);
						return 1;
					}
					else
					{
						return 0;
					}
				}
			}
			iVar3++;
		}
		if (iLocal_603 != -1)
		{
			func_12(&uLocal_716, 64, 0);
			func_12(&uLocal_716, 8, 0);
			iLocal_603 = -1;
			EVENT::REMOVE_SHOCKING_EVENT(iLocal_610);
			iLocal_610 = -1;
			func_81(vLocal_627[11 /*3*/]);
		}
	}
	return 0;
}

void func_45(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam1 < 0 || iParam1 >= uParam0->f_1098)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < (uParam0->f_1[iParam1 /*22*/])->f_8)
	{
		iVar1 = &(uParam0->f_1[iParam1 /*22*/])->f_11[iVar0];
		if (iVar1 >= 0)
		{
			func_34(&((uParam0->f_310[iVar1 /*14*/])->f_7), 2048);
		}
		iVar0++;
	}
}

int func_46(int iParam0, float fParam1)
{
	if (!func_123(*iParam0))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(&(iParam0->f_1[0 /*22*/])) && *iParam0 != 14)
		{
			iParam0->f_1[0 /*22*/] = func_30(*iParam0);
		}
		return func_124(*iParam0, iParam0->f_1[0 /*22*/], fParam1, iParam0->f_1102);
	}
	return 0;
}

void func_47()
{
	float fVar0;

	bLocal_619 = false;
	if (func_43(uLocal_716, 1))
	{
		func_121(vLocal_627[17 /*3*/]);
		return;
	}
	if (ENTITY::GET_ENTITY_SPEED(&(Local_718.f_1[0 /*22*/])) <= 0.2f)
	{
		if (!func_125(vLocal_627[17 /*3*/]))
		{
			func_81(vLocal_627[17 /*3*/]);
		}
	}
	else
	{
		func_121(vLocal_627[17 /*3*/]);
		return;
	}
	if (func_126())
	{
		return;
	}
	if (func_43(uLocal_716, 16384))
	{
		fVar0 = 130f;
	}
	else
	{
		fVar0 = 15f;
	}
	if (!func_127(vLocal_627[17 /*3*/], fVar0))
	{
		return;
	}
	bLocal_619 = true;
}

int func_48()
{
	if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return func_128(&Local_718, &Global_35);
}

void func_49()
{
	if (ENTITY::DOES_ENTITY_EXIST(&(Local_718.f_1[0 /*22*/])))
	{
		if (!func_43(uLocal_716, 16384))
		{
			if (func_129(&Local_718))
			{
				if (!func_125(vLocal_627[16 /*3*/]))
				{
					func_81(vLocal_627[16 /*3*/]);
				}
				if (func_125(vLocal_627[5 /*3*/]))
				{
					func_121(vLocal_627[5 /*3*/]);
				}
				func_12(&uLocal_716, 16384, 1);
			}
		}
		else if (!func_129(&Local_718))
		{
			if (!func_125(vLocal_627[5 /*3*/]))
			{
				func_81(vLocal_627[5 /*3*/]);
			}
			if (func_125(vLocal_627[16 /*3*/]))
			{
				func_121(vLocal_627[16 /*3*/]);
			}
			if (func_130(vLocal_627[5 /*3*/], 5f))
			{
				func_12(&uLocal_716, 16384, 0);
			}
		}
	}
}

void func_50(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;

	if (!func_43(uLocal_716, 8) && iParam0 > -1)
	{
		if (iParam0 != 0)
		{
			if ((func_43(uLocal_716, 4096) && func_131(iParam0)) && func_43(uLocal_716, 268435456))
			{
				iVar0 = func_132(iParam0);
				if (iVar0 != 0)
				{
					if ((Local_718.f_1[iParam0 /*22*/])->f_8 > 1)
					{
						StringCopy(&vVar1, func_133(1), 24);
					}
					else
					{
						StringCopy(&vVar1, func_133(0), 24);
					}
					func_65(&iLocal_609);
					func_134(iVar0, Global_35, &vVar1, 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
			}
			else if (!func_11((Local_718.f_1[iParam0 /*22*/])->f_4, 2))
			{
				if (bLocal_619)
				{
					if (MISC::GET_GAME_TIMER() >= iLocal_613)
					{
						iVar4 = func_132(iParam0);
						if (iVar4 != 0)
						{
							func_65(&iLocal_609);
							func_134(iVar4, Global_35, func_135(func_11((Local_718.f_1[iParam0 /*22*/])->f_4, 32)), 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
							func_34(&((Local_718.f_1[iParam0 /*22*/])->f_4), 32);
							iLocal_613 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(10000, 13000));
						}
					}
				}
			}
		}
	}
}

int func_51(var uParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_1[iParam1 /*22*/])))
	{
		return 0;
	}
	if (ENTITY::GET_ENTITY_MODEL(&(uParam0->f_1[iParam1 /*22*/])) == joaat("privatebaggage01x"))
	{
		return 1;
	}
	return 0;
}

void func_52(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;

	if (iParam1 < 0)
	{
		return;
	}
	if (!func_93(uParam0))
	{
		return;
	}
	iVar0 = -1;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (&uParam0->f_941[iVar0 /*52*/] == iParam1)
		{
		}
		else
		{
			iVar0++;
		}
	}
	if (iVar0 < 0)
	{
		return;
	}
	if (TASK::_0x841475AC96E794D1((uParam0->f_941[iVar0 /*52*/])->f_1))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(((uParam0->f_941[iVar0 /*52*/])->f_3[0 /*12*/])->f_8))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_1[&uParam0->f_941[iVar0 /*52*/] /*22*/])))
		{
			return;
		}
		if (!PROPSET::_0x53784CEA0159439B(&(uParam0->f_1[&uParam0->f_941[iVar0 /*52*/] /*22*/])))
		{
			return;
		}
		(uParam0->f_941[iVar0 /*52*/])->f_2 = PROPSET::_0xCE2ACD6F602803E5(&(uParam0->f_1[&uParam0->f_941[iVar0 /*52*/] /*22*/]));
		if (!PROPSET::_DOES_PROPSET_EXIST((uParam0->f_941[iVar0 /*52*/])->f_2))
		{
			return;
		}
		vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(&(uParam0->f_1[&uParam0->f_941[iVar0 /*52*/] /*22*/]), *((uParam0->f_941[iVar0 /*52*/])->f_3[0 /*12*/])) };
		func_137((uParam0->f_941[iVar0 /*52*/])->f_2, func_136(), &(((uParam0->f_941[iVar0 /*52*/])->f_3[0 /*12*/])->f_8), vVar1, -1082130432);
	}
	if (PROPSET::_DOES_PROPSET_EXIST((uParam0->f_941[iVar0 /*52*/])->f_2))
	{
		if (ENTITY::DOES_ENTITY_EXIST(((uParam0->f_941[iVar0 /*52*/])->f_3[0 /*12*/])->f_8))
		{
			(uParam0->f_941[iVar0 /*52*/])->f_1 = TASK::CREATE_SCENARIO_POINT_ATTACHED_TO_ENTITY(((uParam0->f_941[iVar0 /*52*/])->f_3[0 /*12*/])->f_8, 45887683, func_138(0), 0f, 0, 0, 0);
		}
		else
		{
			(uParam0->f_941[iVar0 /*52*/])->f_1 = TASK::CREATE_SCENARIO_POINT_ATTACHED_TO_ENTITY(&(uParam0->f_1[&uParam0->f_941[iVar0 /*52*/] /*22*/]), 45887683, func_138(1), -90f, 0, 0, 0);
		}
	}
}

void func_53()
{
	if (func_43(uLocal_716, 64) && !func_43(uLocal_716, 8))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 275, true);
	}
}

void func_54()
{
	int iVar0;
	int iVar1;

	if (func_43(uLocal_716, 2097152))
	{
		iVar0 = 0;
		while (iVar0 < 14)
		{
			iVar1 = 0;
			while (iVar1 < (Local_718.f_1[iVar0 /*22*/])->f_8)
			{
				if ((Local_718.f_310[&(Local_718.f_1[iVar0 /*22*/])->f_11[iVar1] /*14*/])->f_3 == 1)
				{
					func_139(&Local_718, iVar0, &vLocal_627, &uLocal_1839, &iLocal_1867, &uLocal_716, &uLocal_717, &iLocal_606, Local_15[iVar1 /*52*/], Local_432[iVar1 /*21*/], 1, 1);
				}
				iVar1++;
			}
			iVar0++;
		}
	}
}

void func_55(int iParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;

	func_140(iParam0);
	if (func_141(&uLocal_716))
	{
		func_142(iParam0, iParam0->f_1104);
	}
	func_143(iParam0->f_1104, &bVar0, bParam1);
	if (iLocal_603 != -1)
	{
		if (iLocal_603 != 1)
		{
			if (iParam0->f_1104 != iLocal_603)
			{
				func_143(iLocal_603, &bVar0, bParam1);
			}
		}
		else if (iParam0->f_1104 != 0)
		{
			func_143(0, &bVar0, bParam1);
		}
	}
	else
	{
		iVar1 = -1;
		if (&(Local_718.f_1[0 /*22*/])->f_11[0] >= 0 && !ENTITY::IS_ENTITY_DEAD(&(iParam0->f_310[&(Local_718.f_1[0 /*22*/])->f_11[0] /*14*/])))
		{
			if ((iParam0->f_310[&(Local_718.f_1[0 /*22*/])->f_11[0] /*14*/])->f_9 < 27f)
			{
				iVar1 = 0;
			}
		}
		if ((iVar1 < 0 && &(Local_718.f_1[iParam0->f_1102 /*22*/])->f_11[0] >= 0) && !ENTITY::IS_ENTITY_DEAD(&(iParam0->f_310[&(Local_718.f_1[iParam0->f_1102 /*22*/])->f_11[0] /*14*/])))
		{
			if ((iParam0->f_310[&(iParam0->f_1[iParam0->f_1102 /*22*/])->f_11[0] /*14*/])->f_9 < 27f)
			{
				iVar1 = iParam0->f_1102;
			}
		}
		if ((iVar1 >= 0 && iVar1 < iParam0->f_1098) && iParam0->f_1104 != iVar1)
		{
			func_143(iVar1, &bVar0, bParam1);
		}
	}
	if (func_75(&uLocal_717, 268435456))
	{
		if (!func_11((Local_718.f_1[iParam0->f_1104 /*22*/])->f_4, 65536) && func_144(&Local_718, iParam0->f_1104))
		{
			func_145(&Local_718, iParam0->f_1104);
		}
	}
	else if (func_11((Local_718.f_1[iParam0->f_1104 /*22*/])->f_4, 65536))
	{
		func_146(&Local_718, &uLocal_717, iParam0->f_1104);
	}
	iParam0->f_1104++;
	if (iParam0->f_1104 >= iParam0->f_1098)
	{
		iParam0->f_1104 = 0;
	}
	if (bVar0)
	{
		if (!func_125(vLocal_627[0 /*3*/]))
		{
			func_81(vLocal_627[0 /*3*/]);
		}
	}
	if (func_130(vLocal_627[0 /*3*/], 0.5f))
	{
		func_147(iLocal_603);
	}
}

void func_56()
{
	int iVar0;
	int iVar1;

	if (VOLUME::_0x92A78D0BEDB332A3(Local_718.f_1105))
	{
		if (func_148(Global_35, Local_718.f_1105, 1, 0))
		{
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				iVar0 = 0;
				while (iVar0 <= 7)
				{
					iVar1 = &(Local_718.f_1[Local_718.f_1102 /*22*/])->f_11[iVar0];
					if (iVar1 >= 0)
					{
						if (!PED::IS_PED_INJURED(&(Local_718.f_310[iVar1 /*14*/])))
						{
							PAD::DISABLE_CONTROL_ACTION(0, -640622144, false);
						}
					}
					iVar0++;
				}
			}
		}
	}
}

void func_57()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = func_16(1299961383, 1015970717);
	if (iLocal_603 >= 0)
	{
		if (iVar0 != iLocal_611)
		{
			iLocal_612 = MISC::GET_GAME_TIMER();
			iLocal_611 = iVar0;
			func_149(iLocal_603, 1);
			vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(&(Local_718.f_1[iLocal_603 /*22*/]), Global_36) };
			if (vVar1.y >= 7f)
			{
				if ((iLocal_603 - 1) >= 0)
				{
					func_149((iLocal_603 - 1), 0);
				}
			}
			else if (vVar1.y <= -7f)
			{
				if (iLocal_603 + 1 < 14)
				{
					func_149(iLocal_603 + 1, 0);
				}
			}
		}
	}
}

void func_58()
{
	if (!func_11((Local_718.f_1[0 /*22*/])->f_4, 4096))
	{
		if (VEHICLE::_0x2963B5C1637E8A27(&(Local_718.f_1[0 /*22*/])) == Global_35)
		{
			VEHICLE::_0x9F29999DFDF2AEB8(&(Local_718.f_1[0 /*22*/]), 10f);
			func_34(&((Local_718.f_1[0 /*22*/])->f_4), 4096);
		}
	}
	else if (VEHICLE::_0x2963B5C1637E8A27(&(Local_718.f_1[0 /*22*/])) != Global_35)
	{
		func_74(&((Local_718.f_1[0 /*22*/])->f_4), 4096);
	}
}

void func_59()
{
	if (func_43(uLocal_716, 64))
	{
		if (LAW::_0xA22C46F16359471C())
		{
			LAW::_0x710448D44A64C213(0);
		}
	}
	else if (!LAW::_0xA22C46F16359471C())
	{
		LAW::_0x710448D44A64C213(1);
	}
}

void func_60()
{
	if (bLocal_619)
	{
		if (!func_43(uLocal_716, 262144) && !func_43(uLocal_716, 1073741824))
		{
			if (!func_150())
			{
				return;
			}
			func_12(&uLocal_716, 262144, 1);
			func_81(vLocal_627[6 /*3*/]);
			fLocal_694 = MISC::GET_RANDOM_FLOAT_IN_RANGE(20f, 30f);
		}
	}
}

void func_61(bool bParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	char* sVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;

	if (func_43(uLocal_716, 2048))
	{
		return;
	}
	if (!func_125(vLocal_627[2 /*3*/]))
	{
		func_81(vLocal_627[2 /*3*/]);
	}
	if (func_43(uLocal_716, 32768))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(&(Local_718.f_1[0 /*22*/]), -1) != Global_35)
		{
			VEHICLE::SET_TRAIN_CRUISE_SPEED(&(Local_718.f_1[0 /*22*/]), 0f);
		}
	}
	if (func_43(uLocal_716, 32768))
	{
		if (func_151(0, 1, &(Local_718.f_310[&(Local_718.f_1[0 /*22*/])->f_11[0] /*14*/]), 1))
		{
			if (!func_125(vLocal_627[21 /*3*/]))
			{
				func_81(vLocal_627[21 /*3*/]);
			}
			if (func_130(vLocal_627[21 /*3*/], 8.5f))
			{
				if (iLocal_615 < 4)
				{
					func_134(&(Local_718.f_310[&(Local_718.f_1[0 /*22*/])->f_11[0] /*14*/]), Global_35, func_152(iLocal_615), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_615++;
				}
				else if (func_46(&Local_718, 50f) && func_43(uLocal_716, 2))
				{
					func_12(&uLocal_716, 2048, 1);
				}
			}
		}
	}
	if (func_130(vLocal_627[2 /*3*/], 1.5f))
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(Local_718.f_1[0 /*22*/])))
		{
			if (!func_43(uLocal_716, 2048))
			{
				if (bParam0 || (!bParam0 && (!ENTITY::IS_ENTITY_DEAD(&(Local_718.f_310[&(Local_718.f_1[0 /*22*/])->f_11[0] /*14*/])) || !ENTITY::DOES_ENTITY_EXIST(&(Local_718.f_310[&(Local_718.f_1[0 /*22*/])->f_11[0] /*14*/])))))
				{
					if (!ITEMSET::IS_ITEMSET_VALID(iLocal_602))
					{
						iLocal_602 = ITEMSET::CREATE_ITEMSET(true);
					}
					bVar2 = false;
					if (ENTITY::GET_ENTITY_SPEED(&(Local_718.f_1[0 /*22*/])) <= 10f)
					{
						iVar3 = 3;
					}
					else
					{
						iVar3 = 4;
					}
					iVar1 = 0;
					while (iVar1 < iVar3)
					{
						if (!VOLUME::_0x92A78D0BEDB332A3(&(iLocal_622[iVar1])))
						{
							switch (iVar1)
							{
								case 0:
									sVar4 = "TrainRob - volProbe0";
									fVar5 = 0f;
									fVar6 = 0f;
									fVar7 = 20f;
									fVar8 = 45f;
									fVar9 = 10f;
									break;
								case 1:
									sVar4 = "TrainRob - volProbe1";
									fVar5 = 20f;
									fVar6 = -3f;
									fVar7 = 20f;
									fVar8 = 45f;
									fVar9 = 10f;
									break;
								case 2:
									sVar4 = "TrainRob - volProbe2";
									fVar5 = -20f;
									fVar6 = 3f;
									fVar7 = 20f;
									fVar8 = 45f;
									fVar9 = 10f;
									break;
								case 3:
									sVar4 = "TrainRob - volProbefast";
									fVar5 = 0f;
									fVar6 = 0f;
									fVar7 = 32f;
									fVar8 = 50f;
									fVar9 = 14f;
									break;
							}
							iLocal_622[iVar1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(ENTITY::GET_ENTITY_COORDS(&(Local_718.f_1[0 /*22*/]), true, false), ENTITY::GET_ENTITY_ROTATION(&(Local_718.f_1[0 /*22*/]), 2), fVar9, fVar8, 8f, sVar4);
							PED::_0x7C00CFC48A782DC0(&(iLocal_622[iVar1]), &(Local_718.f_1[0 /*22*/]), fVar6, fVar7, 0f, 0f, 0f, fVar5, 2, 1);
						}
						ITEMSET::_0x20A4BF0E09BEE146(iLocal_602);
						ENTITY::_0x886171A12F400B89(&(iLocal_622[iVar1]), iLocal_602, 2);
						iVar10 = 0;
						while (iVar10 < ITEMSET::GET_ITEMSET_SIZE(iLocal_602))
						{
							iVar0 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(MISC::_0xEE04C0AFD4EFAF0E(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar10, iLocal_602)));
							if (!func_153(iVar0) && &Local_718.f_1[0 /*22*/] != iVar0)
							{
								if (ENTITY::_0x857ACB0AB4BD0D55(iVar0))
								{
									if (iVar0 == VEHICLE::GET_LAST_DRIVEN_VEHICLE())
									{
										if (!func_43(uLocal_716, 2))
										{
											if (iLocal_615 > 1)
											{
												iLocal_615 = (iLocal_615 - 1);
											}
											func_12(&uLocal_716, 2, 1);
											if (func_125(vLocal_627[17 /*3*/]))
											{
												func_81(vLocal_627[17 /*3*/]);
											}
											if (func_125(vLocal_627[21 /*3*/]))
											{
												func_81(vLocal_627[21 /*3*/]);
											}
										}
									}
									bVar2 = true;
								}
								else
								{
									iVar10++;
								}
								iVar1++;
								if (bVar2)
								{
									if (!func_43(uLocal_716, 32768))
									{
										func_134(&(Local_718.f_310[&(Local_718.f_1[0 /*22*/])->f_11[0] /*14*/]), Global_35, func_152(iLocal_615), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
										iLocal_615++;
										PED::SET_PED_CONFIG_FLAG(&(Local_718.f_310[&(Local_718.f_1[0 /*22*/])->f_11[0] /*14*/]), 492, true);
										func_12(&uLocal_716, 32768, 1);
									}
								}
								else if (func_43(uLocal_716, 32768))
								{
									if (!func_43(uLocal_716, 1073741824))
									{
										func_121(vLocal_627[21 /*3*/]);
										iLocal_615 = 0;
										PED::SET_PED_CONFIG_FLAG(&(Local_718.f_310[&(Local_718.f_1[0 /*22*/])->f_11[0] /*14*/]), 492, false);
										func_12(&uLocal_716, 32768, 0);
										func_12(&uLocal_716, 2, 0);
										if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(&(Local_718.f_1[0 /*22*/]), -1) != Global_35)
										{
											VEHICLE::SET_TRAIN_CRUISE_SPEED(&(Local_718.f_1[0 /*22*/]), func_154(Local_718));
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}

void func_62()
{
	if (!func_75(&uLocal_717, 1073741824))
	{
		return;
	}
	if (func_43(uLocal_716, 1))
	{
		return;
	}
	if (Local_718 == 14 && !func_43(uLocal_716, 65536))
	{
		return;
	}
	if (func_155(&uLocal_717))
	{
		func_156(162, 0);
		func_14(&uLocal_717, 2);
	}
	if (func_157(25))
	{
		if (func_158(&Local_718, iLocal_603, &uLocal_717))
		{
			func_156(153, 0);
			func_14(&uLocal_717, 4);
		}
		if (func_159(&Local_718, &uLocal_717))
		{
			func_156(154, 0);
			func_14(&uLocal_717, 8);
		}
		if (func_160(&Local_718, iLocal_603, &uLocal_716, &uLocal_717))
		{
			func_156(160, 0);
			func_14(&uLocal_717, 16);
		}
		if (func_161(&Local_718, &uLocal_716, &uLocal_717))
		{
			func_156(155, 0);
			func_14(&uLocal_717, 32);
		}
		if (func_162(iLocal_603, &uLocal_717))
		{
			func_156(157, 0);
			func_14(&uLocal_717, 64);
		}
	}
}

int func_63()
{
	if (!func_43(uLocal_716, 64))
	{
		return 0;
	}
	if (func_43(uLocal_716, 4096))
	{
		return 1;
	}
	if (func_163())
	{
		return 1;
	}
	if (func_164())
	{
		LAW::_0x785177E4D57D7389(PLAYER::PLAYER_ID(), -1521715232, 0, 0, -1);
		return 1;
	}
	if (func_43(uLocal_716, 8388608))
	{
		return 1;
	}
	if (VEHICLE::_0x2963B5C1637E8A27(&(Local_718.f_1[0 /*22*/])) == Global_35)
	{
		LAW::_0x785177E4D57D7389(PLAYER::PLAYER_ID(), -1521715232, 0, 0, -1);
		return 1;
	}
	return 0;
}

int func_64()
{
	if (!func_43(uLocal_716, 4096))
	{
		func_81(vLocal_627[3 /*3*/]);
	}
	Global_1430221->f_2 = 1;
	func_139(&Local_718, iLocal_603, &vLocal_627, &uLocal_1839, &iLocal_1867, &uLocal_716, &uLocal_717, &iLocal_606, Local_15[0 /*52*/], Local_432[0 /*21*/], 1, !func_165(&Local_718, iLocal_603));
	EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(1498498500, Global_35, 5f, 20f, 10f, -1082130432, -1082130432, 1127481344, 0, 0, -1, -1);
	func_81(&(Local_718.f_1106));
	func_12(&uLocal_716, 65536, 1);
	func_81(vLocal_627[14 /*3*/]);
	return 1;
}

void func_65(int iParam0)
{
	*iParam0 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(7000, 11000));
}

void func_66(int iParam0, int iParam1)
{
	if (!func_1(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0 /*5*/] = (Global_40.f_11029[iParam0 /*5*/] || iParam1);
}

void func_67(var uParam0, var uParam1)
{
	if (func_166(uParam0, uParam1))
	{
		func_81((*uParam1)[18 /*3*/]);
		PLAYER::_0xCBCCF73FFA69CC6B(PLAYER::GET_PLAYER_INDEX());
	}
}

void func_68(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, var uParam6)
{
	int iVar0;

	if (iParam4 < 0 || iParam4 >= iParam0->f_1098)
	{
		return;
	}
	if (func_43(*uParam2, 512) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		if (ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			return;
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 152436526))
		{
			func_167(Global_35, 0, 0, 1, 1, 0);
			func_34(&((iParam0->f_1[iParam4 /*22*/])->f_4), 2);
			if (!func_125((*uParam1)[19 /*3*/]))
			{
				func_81((*uParam1)[19 /*3*/]);
			}
		}
		if (func_168(uParam1, uParam2, uParam5) && iParam4 > -1)
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, (iParam0->f_1[iParam4 /*22*/])->f_8);
			iVar0 = &(iParam0->f_1[iParam4 /*22*/])->f_11[iVar0];
			if (iVar0 > -1)
			{
				func_65(uParam6);
				func_134(&(iParam0->f_310[iVar0 /*14*/]), Global_35, func_169(), 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
			}
		}
		if (func_170(uParam1))
		{
			func_121((*uParam1)[15 /*3*/]);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
			func_98(uParam3, 134217728);
			func_12(uParam2, 512, 0);
		}
		else
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, func_171(), 0);
			func_14(uParam3, 134217728);
			HUD::_0x8BC7C1F929D07BF3(724769646);
		}
	}
}

void func_69(var uParam0)
{
	if (func_43(*uParam0, 536870912) && func_172(uParam0, 0))
	{
		func_83(1);
		func_12(uParam0, 536870912, 0);
	}
}

void func_70()
{
	if (ENTITY::DOES_ENTITY_EXIST(&(Local_718.f_1[0 /*22*/])))
	{
		if (func_173())
		{
			func_174(1);
			LAW::_0xEDFC6C1FD1C964F5(PLAYER::GET_PLAYER_INDEX(), 1685924442, 0, 0, 0, 0, 0, 0, 0);
			if (!LAW::_0xAD401C63158ACBAA(PLAYER::PLAYER_ID()))
			{
				if (func_175())
				{
					LAW::_0x75CBF20BA47E4F89(Global_36, 0);
				}
				else
				{
					LAW::_0x75CBF20BA47E4F89(Global_36, -867256593);
				}
			}
			LAW::_0x987BE590FB9D41E5(1);
			LAW::_0xDCF12B89624AAC96(1);
			func_81(vLocal_627[18 /*3*/]);
			func_81(vLocal_627[19 /*3*/]);
			if (func_176())
			{
				if (func_177(&Local_718))
				{
					VEHICLE::_0x787E43477746876F(&(Local_718.f_1[0 /*22*/]));
					VEHICLE::_0x4182C037AA1F0091(&(Local_718.f_1[0 /*22*/]), 0);
					VEHICLE::_0x9F29999DFDF2AEB8(&(Local_718.f_1[0 /*22*/]), 7f);
				}
			}
			else if (func_177(&Local_718))
			{
				func_178(&(Local_718.f_1[0 /*22*/]), 0f);
				func_179();
			}
			func_12(&uLocal_716, 4, 1);
		}
		if (func_180())
		{
			func_179();
			func_12(&uLocal_716, 1024, 1);
		}
	}
}

void func_71(int iParam0)
{
	int iVar0;

	if (MISC::GET_GAME_TIMER() >= iLocal_609)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35))
		{
			func_65(&iLocal_609);
		}
		else if (!func_43(uLocal_716, 8) && iParam0 > -1)
		{
			if (iParam0 != 0)
			{
				if (func_43(uLocal_716, 4096))
				{
					iVar0 = func_132(iParam0);
					if (iVar0 != 0)
					{
						if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iVar0))
						{
							if (func_134(iVar0, Global_35, func_181(), 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0))
							{
								func_65(&iLocal_609);
							}
						}
						else
						{
							func_65(&iLocal_609);
						}
					}
				}
			}
		}
	}
}

void func_72()
{
	bool bVar0;

	if ((func_125(&(Local_718.f_1109)) && func_43(uLocal_716, 33554432)) && !func_127(&(Local_718.f_1109), 3f))
	{
		return;
	}
	bVar0 = func_182(4);
	if (func_43(uLocal_716, 33554432))
	{
		if (!bVar0)
		{
			func_12(&uLocal_716, 33554432, 0);
			func_81(&(Local_718.f_1109));
		}
	}
	else if (bVar0)
	{
		func_12(&uLocal_716, 33554432, 1);
		func_81(&(Local_718.f_1109));
	}
}

void func_73()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_43(uLocal_716, 8192))
	{
		if (LAW::_0x9D5C9A5A3321B128(PLAYER::PLAYER_ID()))
		{
			func_12(&uLocal_716, 8192, 1);
			func_12(&uLocal_716, 16, 1);
			return;
		}
	}
	if (func_43(uLocal_716, 64))
	{
		return;
	}
	if (!func_43(uLocal_716, 16))
	{
		if (func_94(Local_718, 60f, 1))
		{
			if (!func_183(PLAYER::PLAYER_ID(), 1, 0, 1))
			{
				iVar2 = (MISC::GET_FRAME_COUNT() % 7) * 7;
				iVar3 = (iVar2 + 7 - 1);
				if (iVar3 >= Local_718.f_1099)
				{
					iVar3 = (Local_718.f_1099 - 1);
				}
				iVar1 = iVar2;
				while (iVar1 <= iVar3)
				{
					iVar0 = &Local_718.f_310[iVar1 /*14*/];
					if (!ENTITY::IS_ENTITY_DEAD(iVar0))
					{
					}
					else
					{
						iVar1++;
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					TASK::CLEAR_PED_TASKS(iVar0, 1, 0);
					PED::SET_PED_CONFIG_FLAG(iVar0, 146, false);
					PED::SET_PED_CONFIG_FLAG(iVar0, 190, true);
					PED::_0xC6C4E15CF7D52FEA(iVar0, 1000f);
					func_174(1);
					LAW::_0xEDFC6C1FD1C964F5(PLAYER::PLAYER_ID(), 1685924442, 0, 0, 0, 0, 0, 0, 0);
					if (!LAW::_0xAD401C63158ACBAA(PLAYER::PLAYER_ID()))
					{
						if (func_175())
						{
							LAW::_0x75CBF20BA47E4F89(Global_36, 0);
						}
						else
						{
							LAW::_0x75CBF20BA47E4F89(Global_36, -867256593);
						}
					}
					LAW::_0x987BE590FB9D41E5(1);
					LAW::_0xDCF12B89624AAC96(1);
					LAW::_0xD7494DED50C6EF52(PLAYER::PLAYER_ID(), 1685924442, 2);
					LAW::_0xF0B67BAD53C35BD9(iVar0, Global_35, iVar0, Global_36, 1685924442);
					PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 32768, false);
					func_12(&uLocal_716, 16, 1);
				}
			}
		}
	}
}

void func_74(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_75(var uParam0, int iParam1)
{
	return func_11(*uParam0, iParam1);
}

struct<2> func_76(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

bool func_77(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_78()
{
	if (ENTITY::DOES_ENTITY_EXIST(&(Local_718.f_1[0 /*22*/])))
	{
		VEHICLE::_0x4182C037AA1F0091(&(Local_718.f_1[0 /*22*/]), 1);
		VEHICLE::_0xDC69F6913CCA0B99(&(Local_718.f_1[0 /*22*/]), 0);
		VEHICLE::SET_TRAIN_CRUISE_SPEED(&(Local_718.f_1[0 /*22*/]), 10f);
		VEHICLE::_0x9F29999DFDF2AEB8(&(Local_718.f_1[0 /*22*/]), 10f);
	}
}

void func_79(int iParam0)
{
	func_80(iParam0, 16);
}

void func_80(int iParam0, int iParam1)
{
	if (!func_1(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0 /*5*/] = (&Global_40.f_11029[iParam0 /*5*/] - (Global_40.f_11029[iParam0 /*5*/] && iParam1));
}

void func_81(var uParam0)
{
	func_184(uParam0, 0f);
}

void func_82()
{
	UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
}

void func_83(int iParam0)
{
	char* sVar0;

	sVar0 = func_185(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		func_186(sVar0, 0);
	}
}

void func_84(int* iParam0)
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

void func_85(int iParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		VOLUME::_0x43F867EF5C463A53(iParam0);
	}
}

int func_86(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 1;
	}
	else if ((uParam0->f_1[iParam1 /*22*/])->f_6 == 3)
	{
		return 2;
	}
	else if ((uParam0->f_1[iParam1 /*22*/])->f_6 == 1)
	{
		return 2;
	}
	else if ((uParam0->f_1[iParam1 /*22*/])->f_6 == 2)
	{
		return 7;
	}
	return 0;
}

bool func_87(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_187() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iVar1]), iVar2);
}

void func_88(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_187() != -1)
	{
		uVar3 = &Global_36637.f_1444[iVar1];
		MISC::CLEAR_BIT(&uVar3, iVar2);
		Global_36637.f_1444[iVar1] = uVar3;
		return;
	}
	uVar4 = &Global_40.f_7832[iVar1];
	MISC::CLEAR_BIT(&uVar4, iVar2);
	Global_40.f_7832[iVar1] = uVar4;
}

void func_89(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_188(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (bParam2)
		{
			func_189(iParam0, 4);
		}
		else
		{
			func_190(iParam0, 33554432);
		}
	}
	else if (bParam2)
	{
		func_191(iParam0, 4);
	}
	else
	{
		func_192(iParam0, 33554432);
	}
	INVENTORY::_0x9B4E793B1CB6550A();
	func_193(iParam0);
}

int func_90(bool bParam0)
{
	int iVar0;

	iVar0 = PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP();
	if (bParam0)
	{
		return 1;
	}
	if (func_17(iVar0))
	{
		return 0;
	}
	if (func_77(iVar0, 1) || func_77(iVar0, 2))
	{
		return 1;
	}
	return 0;
}

int func_91(int iParam0, bool bParam1, int iParam2)
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
		if (func_194())
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
		iVar0 = func_195(&(Global_1898164->f_1[0 /*5*/]));
		if (func_196(iVar0) && func_197(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_198(&(Global_1898164->f_1[0 /*5*/])))
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

int func_92(int iParam0)
{
	return &(Global_1898164->f_1[iParam0 /*5*/]);
}

int func_93(var uParam0)
{
	if ((*uParam0 == 0 || *uParam0 == 1) || *uParam0 == 14)
	{
		return 1;
	}
	return 0;
}

bool func_94(int iParam0, float fParam1, bool bParam2)
{
	if (iParam0 != 14 && !bParam2)
	{
		return func_199(iParam0, Global_36) > fParam1;
	}
	return !func_124(iParam0, Local_718.f_1[0 /*22*/], fParam1, -1);
}

int func_95(vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;

	vParam0.f_2 = 0f;
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1888801)[iVar0 /*35*/])->f_3))
		{
			if (((*Global_1888801)[iVar0 /*35*/])->f_20 == 1 || (!bParam4 && ((*Global_1888801)[iVar0 /*35*/])->f_20 == 2))
			{
				vVar1 = { VOLUME::_0xF70F00013A62F866(((*Global_1888801)[iVar0 /*35*/])->f_3) };
				vVar1.f_2 = 0f;
				fVar4 = BUILTIN::VDIST2(vParam0, vVar1);
				if (fVar4 < (fParam3 * fParam3))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

float func_96(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

int func_97()
{
	int iVar0;

	iVar0 = func_200(0, 0);
	if (func_201(iVar0))
	{
		return 1;
	}
	iVar0 = func_202(0, 0);
	if (func_201(iVar0))
	{
		return 1;
	}
	return 0;
}

void func_98(var uParam0, int iParam1)
{
	if (func_75(uParam0, iParam1))
	{
		func_74(uParam0, iParam1);
	}
}

void func_99(var uParam0)
{
	if (!func_43(*uParam0, 4194304))
	{
		func_203(func_76(978382515, 1015970717), 1);
		func_12(uParam0, 4194304, 1);
	}
}

int func_100()
{
	if (func_43(uLocal_716, 65536))
	{
		return 0;
	}
	if (func_204())
	{
		return 1;
	}
	return 0;
}

Vector3 func_101(vector3 vParam0, vector3 vParam3, float fParam6)
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

Vector3 func_102(vector3 vParam0, vector3 vParam3, float fParam6)
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

void func_103(var uParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_1[iParam1 /*22*/])))
	{
		return;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(&(uParam0->f_1[iParam1 /*22*/]));
	(uParam0->f_1[iParam1 /*22*/])->f_6 = func_205(iVar0);
	(uParam0->f_1[iParam1 /*22*/])->f_7 = func_206(iVar0);
}

void func_104(var uParam0, var uParam1, int iParam2, float fParam3, float fParam4, float fParam5, bool bParam6, int iParam7, bool bParam8, char* sParam9)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	char cVar9[16];
	char cVar11[16];
	int iVar15;
	vector3 vVar16;
	vector3 vVar19;

	vVar6 = { ENTITY::GET_ENTITY_ROTATION(*uParam0, 2) };
	vVar6.x = 0f;
	vVar6.f_1 = 0f;
	StringCopy(&cVar9, "Car_", 16);
	if (!bParam8)
	{
		MISC::_INT_TO_STRING(iParam2, "%d", &cVar11);
		StringConCat(&cVar9, &cVar11, 16);
		if (bParam6)
		{
			StringConCat(&cVar9, "def", 16);
		}
	}
	else
	{
		StringCopy(&cVar9, sParam9, 16);
	}
	if ((fParam3 != -1f || fParam4 != -1f) || fParam5 != -1f)
	{
		*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), vVar6, fParam3, fParam4, fParam5, &cVar9);
	}
	else
	{
		iVar15 = ENTITY::GET_ENTITY_MODEL(*uParam0);
		MISC::GET_MODEL_DIMENSIONS(iVar15, &vVar0, &vVar3);
		vVar16 = { (1f * (vVar3.x - vVar0.x)), (1f * (vVar3.y - vVar0.y)), (vVar3.z - vVar0.z) };
		if (bParam6)
		{
			if (iVar15 != joaat("caboose01x"))
			{
				vVar16.x = (vVar16.x - 1.2f);
				vVar16.f_1 = (vVar16.y - 4f);
			}
			else
			{
				vVar16.x = (vVar16.x - 1.2f);
				vVar16.f_1 = (vVar16.y - 2.2f);
			}
			vVar16.f_2 = 2f;
		}
		*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), vVar6, vVar16, &cVar9);
	}
	vVar19 = { 0f, iParam7, ((vVar3.z - vVar0.z) / 2f) };
	if (bParam6)
	{
		vVar19.f_2 = 2f;
	}
	PED::_0x7C00CFC48A782DC0(*uParam1, *uParam0, vVar19, 0f, 0f, 0f, 2, 1);
}

int func_105(var uParam0)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0[0]))
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0[0]))
		{
		}
		iVar1 = 1;
		while (iVar1 <= (*uParam0 - 1))
		{
			iVar0 = VEHICLE::GET_TRAIN_CARRIAGE(uParam0[0], iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				(*uParam0)[iVar1] = iVar0;
			}
			else
			{
				return iVar1;
			}
			iVar1++;
		}
	}
	else
	{
		return 0;
	}
	return *uParam0;
}

void func_106(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		(uParam0->f_1[iParam1 /*22*/])->f_11[iVar0] = -1;
		iVar0++;
	}
}

int func_107()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	switch (iVar0)
	{
		case 0:
			return joaat("p_cs_billstack01x");
		case 1:
			return joaat("p_foldedbills01x");
		case 2:
			return joaat("p_moneybag01x");
		default:
			break;
	}
	return joaat("p_cs_billstack01x");
}

void func_108(var uParam0, int iParam1)
{
	func_207(uParam0, iParam1);
}

int func_109(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if ((uParam0->f_1[iVar0 /*22*/])->f_6 != 2)
		{
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_110(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	char cVar13[32];
	char cVar17[32];
	int iVar21;
	int iVar22;
	vector3 vVar23;

	iVar21 = &uParam0->f_1[iParam1 /*22*/];
	if (!ENTITY::DOES_ENTITY_EXIST(iVar21))
	{
		return 0;
	}
	StringCopy(&cVar13, "Car_", 32);
	MISC::_INT_TO_STRING(iParam1, "%d", &cVar17);
	StringConCat(&cVar13, &cVar17, 32);
	StringConCat(&cVar13, "_ScenarioBlocker", 32);
	vVar7 = { ENTITY::GET_ENTITY_ROTATION(iVar21, 2) };
	iVar22 = ENTITY::GET_ENTITY_MODEL(iVar21);
	MISC::GET_MODEL_DIMENSIONS(iVar22, &vVar1, &vVar4);
	vVar23 = { (vVar4.x - vVar1.x), (vVar4.y - vVar1.y), (vVar4.z - vVar1.z) };
	vVar23.f_1 = (vVar23.y / 2f);
	if (bParam2)
	{
		vVar10 = { 0f, ((vVar23.y / 2f) - (vVar23.y / 4f)), 0f };
	}
	else
	{
		vVar10 = { 0f, ((-vVar23.y / 2f) + (vVar23.y / 4f)), 0f };
	}
	iVar0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(ENTITY::GET_ENTITY_COORDS(iVar21, true, false), vVar7, vVar23, &cVar13);
	PED::_0x7C00CFC48A782DC0(iVar0, iVar21, vVar10, 0f, 0f, 0f, 2, 1);
	return iVar0;
}

int func_111(int iParam0)
{
	func_208(iParam0, 0);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, 0, 0, 0, -1, -1, 32);
	POPULATION::_0xB56D41A694E42E86(iParam0, 0, 0, 0, -1, -1, 32);
	return PED::_0x4C39C95AE5DB1329(iParam0, 0, 15);
}

int func_112(var uParam0)
{
	int iVar0;

	iVar0 = (uParam0->f_1098 - 1);
	while (iVar0 >= 0)
	{
		if ((uParam0->f_1[iVar0 /*22*/])->f_6 != 2)
		{
		}
		else
		{
			return iVar0;
		}
		iVar0 = (iVar0 + -1);
	}
	return -1;
}

void func_113(var uParam0)
{
	int iVar0;
	int iVar1;

	if (func_93(uParam0))
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (&uParam0->f_941[iVar0 /*52*/] >= 0)
			{
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (((uParam0->f_941[iVar0 /*52*/])->f_3[iVar1 /*12*/])->f_7 != 0)
					{
						STREAMING::REQUEST_MODEL(((uParam0->f_941[iVar0 /*52*/])->f_3[iVar1 /*12*/])->f_7, false);
					}
					iVar1++;
				}
			}
			iVar0++;
		}
		STREAMING::REQUEST_MODEL(func_136(), false);
	}
}

void func_114(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_210(func_209(iVar0), uParam0);
		iVar0++;
	}
}

int func_115()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!AUDIO::PREPARE_MUSIC_EVENT(func_185(iVar0)))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_116(var uParam0)
{
	int iVar0;
	int iVar1;

	if (func_93(uParam0))
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (&uParam0->f_941[iVar0 /*52*/] >= 0)
			{
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (((uParam0->f_941[iVar0 /*52*/])->f_3[iVar1 /*12*/])->f_7 != 0 && !STREAMING::HAS_MODEL_LOADED(((uParam0->f_941[iVar0 /*52*/])->f_3[iVar1 /*12*/])->f_7))
					{
						return 0;
					}
					iVar1++;
				}
			}
			iVar0++;
		}
		if (!STREAMING::HAS_MODEL_LOADED(func_136()))
		{
			return 0;
		}
	}
	return 1;
}

int func_117(vector3 vParam0, var uParam3, float fParam4, bool bParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	vector3 vVar5;
	int iVar8;
	vector3 vVar9;

	iVar4 = 1;
	if (iParam7 < 0 || iParam7 >= *uParam3)
	{
		iParam7 = (*uParam3 - 1);
	}
	iVar0 = iParam6;
	while (iVar0 <= iParam7)
	{
		if (iParam8 && ENTITY::DOES_ENTITY_EXIST(((*uParam3)[iVar0 /*12*/])->f_8))
		{
		}
		else if (((*uParam3)[iVar0 /*12*/])->f_7 != 0 && !func_211(((*uParam3)[iVar0 /*12*/])->f_11, 16))
		{
			if (!STREAMING::HAS_MODEL_LOADED(((*uParam3)[iVar0 /*12*/])->f_7))
			{
				iVar4 = 0;
			}
			else
			{
				if (((*uParam3)[iVar0 /*12*/])->f_9 != -1)
				{
					iVar8 = ((*uParam3)[iVar0 /*12*/])->f_9;
					vVar5 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(((*uParam3)[iVar8 /*12*/])->f_8, *((*uParam3)[iVar0 /*12*/])) };
					if (func_211(((*uParam3)[iVar0 /*12*/])->f_11, 64))
					{
						((*uParam3)[iVar0 /*12*/])->f_8 = OBJECT::CREATE_OBJECT_NO_OFFSET(((*uParam3)[iVar0 /*12*/])->f_7, vVar5, true, true, false, false);
					}
					else
					{
						((*uParam3)[iVar0 /*12*/])->f_8 = OBJECT::CREATE_OBJECT(((*uParam3)[iVar0 /*12*/])->f_7, vVar5, true, true, false, false, true);
					}
					ENTITY::ATTACH_ENTITY_TO_ENTITY(((*uParam3)[iVar0 /*12*/])->f_8, ((*uParam3)[iVar8 /*12*/])->f_8, 0, *((*uParam3)[iVar0 /*12*/]), ((*uParam3)[iVar0 /*12*/])->f_4, 0, 0, 0, 0, 2, 1, 0, 0);
				}
				else
				{
					if (!func_211(((*uParam3)[iVar0 /*12*/])->f_11, 8))
					{
						vVar5 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, fParam4, *((*uParam3)[iVar0 /*12*/])) };
					}
					else
					{
						vVar5 = { *((*uParam3)[iVar0 /*12*/]) };
					}
					if (!func_211(((*uParam3)[iVar0 /*12*/])->f_11, 128))
					{
						func_212(&vVar5, ((*uParam3)[iVar0 /*12*/])->f_10);
					}
					if (func_211(((*uParam3)[iVar0 /*12*/])->f_11, 64))
					{
						((*uParam3)[iVar0 /*12*/])->f_8 = OBJECT::CREATE_OBJECT_NO_OFFSET(((*uParam3)[iVar0 /*12*/])->f_7, vVar5, true, true, false, false);
					}
					else
					{
						((*uParam3)[iVar0 /*12*/])->f_8 = OBJECT::CREATE_OBJECT(((*uParam3)[iVar0 /*12*/])->f_7, vVar5, true, true, false, false, true);
					}
					if (func_213(((*uParam3)[iVar0 /*12*/])->f_4))
					{
						vVar1 = { 0f, 0f, ((*uParam3)[iVar0 /*12*/])->f_3 };
					}
					else
					{
						vVar1 = { ((*uParam3)[iVar0 /*12*/])->f_4 };
					}
					if (func_211(((*uParam3)[iVar0 /*12*/])->f_11, 4))
					{
						vVar1.f_2 = func_214((vVar1.z + fParam4));
					}
					ENTITY::SET_ENTITY_ROTATION(((*uParam3)[iVar0 /*12*/])->f_8, vVar1, 2, true);
					if (!func_211(((*uParam3)[iVar0 /*12*/])->f_11, 128))
					{
						if (((*uParam3)[iVar0 /*12*/])->f_10)
						{
							ENTITY::_0x9587913B9E772D29(((*uParam3)[iVar0 /*12*/])->f_8, 0);
						}
					}
				}
				if (func_211(((*uParam3)[iVar0 /*12*/])->f_11, 2))
				{
					ENTITY::FREEZE_ENTITY_POSITION(((*uParam3)[iVar0 /*12*/])->f_8, true);
				}
				if (func_211(((*uParam3)[iVar0 /*12*/])->f_11, 32))
				{
					ENTITY::SET_ENTITY_VISIBLE(((*uParam3)[iVar0 /*12*/])->f_8, false);
				}
				if (bParam5)
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(((*uParam3)[iVar0 /*12*/])->f_8, 1);
					PHYSICS::ACTIVATE_PHYSICS(((*uParam3)[iVar0 /*12*/])->f_8);
				}
				ENTITY::_0xA91E6CF94404E8C9(((*uParam3)[iVar0 /*12*/])->f_8);
				vVar9 = { ENTITY::GET_ENTITY_COORDS(((*uParam3)[iVar0 /*12*/])->f_8, true, false) };
			}
		}
		iVar0++;
	}
	return iVar4;
}

void func_118(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;

	if (iParam1 < 0)
	{
		return;
	}
	iVar0 = 1;
	while (iVar0 <= 3)
	{
		if (((uParam0->f_941[iParam1 /*52*/])->f_3[iVar0 /*12*/])->f_7 != 0)
		{
			vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(&(uParam0->f_1[&uParam0->f_941[iParam1 /*52*/] /*22*/]), *((uParam0->f_941[iParam1 /*52*/])->f_3[iVar0 /*12*/])) };
			fVar4 = (ENTITY::GET_ENTITY_HEADING(&(uParam0->f_1[&uParam0->f_941[iParam1 /*52*/] /*22*/])) + ((uParam0->f_941[iParam1 /*52*/])->f_3[iVar0 /*12*/])->f_3);
			ENTITY::_0x203BEFFDBE12E96A(((uParam0->f_941[iParam1 /*52*/])->f_3[iVar0 /*12*/])->f_8, vVar1, fVar4, 1, 0, 1);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(((uParam0->f_941[iParam1 /*52*/])->f_3[iVar0 /*12*/])->f_8, &(uParam0->f_1[&uParam0->f_941[iParam1 /*52*/] /*22*/]), 0, *((uParam0->f_941[iParam1 /*52*/])->f_3[iVar0 /*12*/]), 0f, 0f, ((uParam0->f_941[iParam1 /*52*/])->f_3[iVar0 /*12*/])->f_3, 0, 0, 0, 0, 2, 1, 0, 0);
			ENTITY::SET_ENTITY_PROOFS(((uParam0->f_941[iParam1 /*52*/])->f_3[iVar0 /*12*/])->f_8, 6, false);
		}
		iVar0++;
	}
}

void func_119(var uParam0, int iParam1)
{
	if (func_11((uParam0->f_1[iParam1 /*22*/])->f_4, 65536))
	{
		return;
	}
	switch ((uParam0->f_1[iParam1 /*22*/])->f_3)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_1[iParam1 /*22*/])))
			{
				if (func_215(uParam0, iParam1))
				{
					ENTITY::_0x119A5714578F4E05(&(uParam0->f_1[iParam1 /*22*/]), 1);
				}
				func_74(&((uParam0->f_1[iParam1 /*22*/])->f_4), 4);
				if (!func_11((uParam0->f_1[iParam1 /*22*/])->f_4, 131072))
				{
					PED::_0xF008E0BA1FE1D644(func_86(uParam0, iParam1));
					func_34(&((uParam0->f_1[iParam1 /*22*/])->f_4), 131072);
				}
				(uParam0->f_1[iParam1 /*22*/])->f_3 = 2;
			}
			break;
		case 2:
			func_216(uParam0, iParam1);
			func_34(&((uParam0->f_1[iParam1 /*22*/])->f_4), 4);
			func_217(iParam1);
			break;
	}
}

void func_120(var uParam0, int iParam1, bool bParam2)
{
	if (!VOLUME::_0x92A78D0BEDB332A3((uParam0->f_1[iParam1 /*22*/])->f_1))
	{
		return;
	}
	if (!func_11((uParam0->f_1[iParam1 /*22*/])->f_4, 16))
	{
		if (bParam2)
		{
			func_208((uParam0->f_1[iParam1 /*22*/])->f_1, 0);
		}
		VEHICLE::_0xD4907EF4334C7602(&(uParam0->f_1[iParam1 /*22*/]), 1);
		VEHICLE::_0x68830738A6BFB370(&(uParam0->f_1[iParam1 /*22*/]), 1);
		ENTITY::_0x119A5714578F4E05(&(uParam0->f_1[iParam1 /*22*/]), 0);
		func_34(&((uParam0->f_1[iParam1 /*22*/])->f_4), 16);
	}
	else if (bParam2 && !func_11((uParam0->f_1[iParam1 /*22*/])->f_4, 8192))
	{
		func_208((uParam0->f_1[iParam1 /*22*/])->f_1, 0);
		func_34(&((uParam0->f_1[iParam1 /*22*/])->f_4), 8192);
	}
}

void func_121(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_122(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_218(((*uParam0)[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET(uParam0[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_219(&(((*uParam0)[iVar0 /*17*/])->f_6), 1, 1);
					if (bParam2)
					{
						((*uParam0)[iVar0 /*17*/])->f_7 = 0;
						(*uParam0)[iVar0 /*17*/] = 0;
						((*uParam0)[iVar0 /*17*/])->f_5 = "";
						((*uParam0)[iVar0 /*17*/])->f_14 = 0;
						((*uParam0)[iVar0 /*17*/])->f_13 = "";
						((*uParam0)[iVar0 /*17*/])->f_15 = 0;
						((*uParam0)[iVar0 /*17*/])->f_11 = "";
						((*uParam0)[iVar0 /*17*/])->f_12 = "";
					}
				}
				iVar0++;
			}
		}
	}

int func_123(int iParam0)
{
	switch (iParam0)
	{
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
			return 1;
	}
	return 0;
}

int func_124(int iParam0, var uParam1, float fParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_220(iParam0) && iParam0 != 14)
	{
		return 0;
	}
	if (iParam0 != 14)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam1) || ENTITY::IS_ENTITY_DEAD(*uParam1))
		{
			if (func_221(Global_35, VEHICLE::_0x1E8A921112891651(((*Global_1425371)[iParam0 /*373*/])->f_1), 1) < (fParam2 * fParam2))
			{
				return 1;
			}
			*uParam1 = VEHICLE::_0x6E585A616ABB8401(((*Global_1425371)[iParam0 /*373*/])->f_1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1) && !ENTITY::IS_ENTITY_DEAD(*uParam1))
	{
		if (func_222(Global_35, *uParam1, 1) < (fParam2 * fParam2))
		{
			return 1;
		}
		if (iParam3 < 0)
		{
			iVar0 = VEHICLE::_0x671A07C9A1CD50A5(*uParam1);
		}
		else
		{
			iVar0 = VEHICLE::GET_TRAIN_CARRIAGE(*uParam1, iParam3);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (func_222(Global_35, iVar0, 1) < (fParam2 * fParam2))
			{
				return 1;
			}
		}
		iVar1 = VEHICLE::_0x60B7D1DCC312697D(*uParam1);
		if (iVar1 > 3)
		{
			iVar1 = (iVar1 / 2);
			iVar2 = VEHICLE::GET_TRAIN_CARRIAGE(*uParam1, iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (func_222(Global_35, iVar2, 1) < (fParam2 * fParam2))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_125(var uParam0)
{
	return func_223(*uParam0, 1);
}

bool func_126()
{
	var uVar0;

	if (!func_1(Local_718) && Local_718 != 14)
	{
		return false;
	}
	if (Local_718 == 14)
	{
		uVar0 = VEHICLE::_0x45853F4E17D847D5(&(Local_718.f_1[0 /*22*/]));
	}
	else
	{
		uVar0 = ((*Global_1425371)[Local_718 /*373*/])->f_1;
	}
	if (!VEHICLE::_0x0516FAE561276EFC(uVar0))
	{
		return false;
	}
	return !VEHICLE::_0x37D238BE69F7378A(uVar0);
}

int func_127(var uParam0, float fParam1)
{
	if (!func_125(uParam0))
	{
		return 0;
	}
	if (func_224(uParam0) > fParam1)
	{
		return 1;
	}
	return 0;
}

int func_128(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(iParam0->f_1[iVar0 /*22*/])))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
			{
				return 0;
			}
			if (PED::IS_PED_ON_SPECIFIC_VEHICLE(*uParam1, &(iParam0->f_1[iVar0 /*22*/])))
			{
				return 1;
			}
			if (func_225(*uParam1, &(iParam0->f_1[iVar0 /*22*/]), 0))
			{
				return 1;
			}
			if (VOLUME::_0x92A78D0BEDB332A3((iParam0->f_1[iVar0 /*22*/])->f_1) && ENTITY::IS_ENTITY_IN_VOLUME(*uParam1, (iParam0->f_1[iVar0 /*22*/])->f_1, true, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_129(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;

	if (VEHICLE::_0xE887BD31D97793F6(&(uParam0->f_1[0 /*22*/])))
	{
		return 1;
	}
	if (ENTITY::GET_ENTITY_SPEED(&(uParam0->f_1[0 /*22*/])) > 0.2f)
	{
		return 0;
	}
	if (VEHICLE::_0xDE8C5B9F65017FA1(&(uParam0->f_1[0 /*22*/])) <= 0)
	{
		return 0;
	}
	iVar1 = VEHICLE::_0xAF787E081AC4A8EE(&(uParam0->f_1[0 /*22*/]));
	iVar0 = VEHICLE::_0x86FA6D8B48667D75(&(uParam0->f_1[0 /*22*/]));
	if (iVar0 >= 0)
	{
		vVar2 = { VEHICLE::_0xBA958F68031DDBFC(iVar1, iVar0) };
		fVar5 = func_96(&(uParam0->f_1[0 /*22*/]), vVar2, 1);
		if (fVar5 < 25f)
		{
			return 1;
		}
	}
	iVar0 = VEHICLE::_0x1180A2974D251B7B(&(uParam0->f_1[0 /*22*/]));
	if (iVar0 >= 0)
	{
		vVar2 = { VEHICLE::_0xBA958F68031DDBFC(iVar1, iVar0) };
		fVar5 = func_96(&(uParam0->f_1[0 /*22*/]), vVar2, 1);
		if (fVar5 < 25f)
		{
			return 1;
		}
	}
	return 0;
}

int func_130(var uParam0, float fParam1)
{
	if (func_127(uParam0, fParam1))
	{
		func_121(uParam0);
		return 1;
	}
	return 0;
}

int func_131(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_11((Local_718.f_1[iParam0 /*22*/])->f_4, 1))
	{
		if (func_11((Local_718.f_1[iParam0 /*22*/])->f_4, 4))
		{
			if ((Local_718.f_1[iParam0 /*22*/])->f_8 <= 0 || (Local_718.f_1[iParam0 /*22*/])->f_9 >= (Local_718.f_1[iParam0 /*22*/])->f_8)
			{
				return 1;
			}
			iVar0 = 0;
			while (iVar0 < (Local_718.f_1[iParam0 /*22*/])->f_8)
			{
				iVar1 = &(Local_718.f_1[iParam0 /*22*/])->f_11[iVar0];
				if (func_226(iParam0, iVar1))
				{
					return 0;
				}
				iVar0++;
			}
			func_34(&((Local_718.f_1[iParam0 /*22*/])->f_4), 1);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_132(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 < 0)
	{
		return 0;
	}
	if ((Local_718.f_1[iParam0 /*22*/])->f_8 == 0)
	{
		return 0;
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, (Local_718.f_1[iParam0 /*22*/])->f_8);
	iVar2 = 0;
	while (!func_227(iParam0, iVar0) && iVar1 < 10)
	{
		iVar0 = func_228(0, (Local_718.f_1[iParam0 /*22*/])->f_8, iVar0);
		iVar1++;
	}
	iVar3 = &(Local_718.f_1[iParam0 /*22*/])->f_11[iVar0];
	if (func_227(iParam0, iVar0))
	{
		iVar2 = &Local_718.f_310[iVar3 /*14*/];
	}
	return iVar2;
}

char* func_133(bool bParam0)
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	if (bParam0)
	{
		switch (iVar0)
		{
			case 0:
			case default:
				return "PLEAD";
			case 1:
				return "INTIMIDATED_AGAIN_GEN";
			case 2:
				return "GENERIC_FRIGHTENED_HIGH";
				switch (iVar0)
				{
					case 0:
					case default:
						return "INTIMIDATED_AGAIN_ROB";
					case 1:
						return "SCARED_HELP";
					case 2:
						return "GENERIC_FRIGHTENED_HIGH";
				}
		}
	}

bool func_134(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, int iParam7, int iParam8, bool bParam9, int iParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_229(iParam0, iParam1, sParam2, iParam3, fParam4, iParam5, bParam6, iParam7, iParam8, bParam9, iParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

char* func_135(bool bParam0)
{
	if (bParam0)
	{
		return "GENERIC_CURSE_MED";
	}
	return "WHATS_GOING_ON";
}

int func_136()
{
	return -64257206;
}

int func_137(int iParam0, int iParam1, var uParam2, vector3 vParam3, float fParam6)
{
	int iVar0;
	int iVar1[4];
	int iVar6;
	int iVar7;
	int iVar8;
	float fVar9;
	float fVar10;

	if (ENTITY::DOES_ENTITY_EXIST(*uParam2))
	{
		return 1;
	}
	if (!PROPSET::_0xF42DB680A8B2A4D9(iParam0))
	{
		return 0;
	}
	iVar8 = -1;
	fVar10 = 99999.9f;
	iVar0 = ITEMSET::CREATE_ITEMSET(false);
	iVar6 = PROPSET::_GET_ENTITIES_FROM_PROPSET(iParam0, iVar0, iParam1, false, false);
	iVar7 = 0;
	while (iVar7 < iVar6)
	{
		if (iVar7 < iVar1)
		{
			iVar1[iVar7] = MISC::_0x18013392501CE5DC(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar7, iVar0));
			fVar9 = func_96(&(iVar1[iVar7]), vParam3, 1);
			if (fVar9 < fVar10 && (fParam6 < 0f || fVar9 < fParam6))
			{
				fVar10 = fVar9;
				iVar8 = iVar7;
			}
		}
	else
	{
		}
		else
		{
			iVar7++;
		}
	}
	ITEMSET::_0x20A4BF0E09BEE146(iVar0);
	ITEMSET::CLEAN_ITEMSET(iVar0);
	ITEMSET::DESTROY_ITEMSET(iVar0);
	if (iVar8 >= 0)
	{
		*uParam2 = &iVar1[iVar8];
		return 1;
	}
	return 0;
}

Vector3 func_138(bool bParam0)
{
	if (!bParam0)
	{
		return -0.3f, -0.025f, -0.8f;
	}
	return 1.35f, -0.52f, 0.94f;
}

int func_139(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, var uParam6, int iParam7, var uParam8, int* iParam9, bool bParam10, bool bParam11)
{
	if (iParam1 < 0)
	{
		return 0;
	}
	if (func_43(*uParam5, 4096))
	{
		return 0;
	}
	if (!func_11((uParam0->f_1[iParam1 /*22*/])->f_4, 2))
	{
		if (!func_43(*uParam5, 536870912))
		{
			func_83(0);
			func_12(uParam5, 536870912, 1);
		}
		if (bParam10 || bParam11)
		{
			if (func_230(uParam0, uParam5, iParam1, bParam10) && !bParam11)
			{
				if ((uParam0->f_1[iParam1 /*22*/])->f_6 == 2)
				{
					func_231((uParam0->f_1[iParam1 /*22*/])->f_8, (uParam0->f_1[iParam1 /*22*/])->f_7);
				}
			}
			func_232(uParam5);
			func_34(&((uParam0->f_1[iParam1 /*22*/])->f_4), 2);
			if (!func_125((*uParam2)[12 /*3*/]))
			{
				func_81((*uParam2)[12 /*3*/]);
			}
			func_81((*uParam2)[15 /*3*/]);
			func_45(uParam0, iParam1);
			if (*iParam4 != 0)
			{
				func_233(uParam3, iParam4);
			}
			return 1;
		}
		if (!func_230(uParam0, uParam5, iParam1, 0))
		{
			return 0;
		}
		if (!func_43(*uParam5, 134217728))
		{
			func_234(uParam0, iParam1, uParam2, uParam5, uParam6, iParam7, uParam8, iParam9);
			if ((uParam0->f_1[iParam1 /*22*/])->f_6 == 2)
			{
				func_231((uParam0->f_1[iParam1 /*22*/])->f_8, (uParam0->f_1[iParam1 /*22*/])->f_7);
			}
			func_232(uParam5);
			func_34(&((uParam0->f_1[iParam1 /*22*/])->f_4), 2);
			if (!func_125((*uParam2)[12 /*3*/]))
			{
				func_81((*uParam2)[12 /*3*/]);
			}
			func_45(uParam0, iParam1);
			if (*iParam4 != 0)
			{
				func_233(uParam3, iParam4);
			}
		}
		return 1;
	}
	return 0;
}

void func_140(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_1098)
	{
		if (func_11((uParam0->f_1[iVar0 /*22*/])->f_4, 32768))
		{
			func_12(&uLocal_716, 16777216, 1);
			return;
		}
		iVar0++;
	}
	func_12(&uLocal_716, 16777216, 0);
}

int func_141(var uParam0)
{
	if (func_43(*uParam0, 64))
	{
		return 1;
	}
	if (func_43(*uParam0, 4096))
	{
		return 1;
	}
	if (func_43(*uParam0, 1048576))
	{
		return 1;
	}
	if (func_43(*uParam0, 67108864))
	{
		return 1;
	}
	if (func_43(*uParam0, 2048))
	{
		return 1;
	}
	if (func_43(*uParam0, 2097152))
	{
		return 1;
	}
	if (func_43(*uParam0, 1024))
	{
		return 1;
	}
	if (func_43(*uParam0, 8192))
	{
		return 1;
	}
	if (func_43(*uParam0, 256))
	{
		return 1;
	}
	if (func_43(*uParam0, 2))
	{
		return 1;
	}
	if (func_43(*uParam0, 16384))
	{
		return 1;
	}
	if (func_43(*uParam0, 65536))
	{
		return 1;
	}
	if (func_43(*uParam0, 32768))
	{
		return 1;
	}
	if (func_43(*uParam0, 4))
	{
		return 1;
	}
	return 0;
}

void func_142(var uParam0, int iParam1)
{
	if (!func_11((uParam0->f_1[iParam1 /*22*/])->f_4, 16384) && *uParam0 == 14)
	{
		func_235(&(uParam0->f_1[iParam1 /*22*/]));
		func_34(&((uParam0->f_1[iParam1 /*22*/])->f_4), 16384);
	}
}

void func_143(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	bool bVar5;
	int iVar6;
	int iVar7;

	func_236(&Local_718, &uLocal_716, &vLocal_627, iParam0);
	func_237(&Local_718, &uLocal_716, &vLocal_627, iParam0);
	func_238(&Local_718, &uLocal_716, &uLocal_717, iParam0);
	if ((Local_718.f_1[iParam0 /*22*/])->f_8 == 0)
	{
		return;
	}
	func_239(iParam0);
	iVar0 = 0;
	iVar1 = ((Local_718.f_1[iParam0 /*22*/])->f_8 - 1);
	if ((!func_11((Local_718.f_1[iParam0 /*22*/])->f_4, 2) && !func_43(uLocal_716, 8388608)) && func_125(vLocal_627[8 /*3*/]))
	{
		(Local_718.f_1[iParam0 /*22*/])->f_21 = func_240(iParam0);
	}
	else
	{
		(Local_718.f_1[iParam0 /*22*/])->f_21 = 0;
	}
	iVar3 = iVar0;
	while (iVar3 <= iVar1)
	{
		iVar2 = &(Local_718.f_1[iParam0 /*22*/])->f_11[iVar3];
		if (iVar2 < 0)
		{
			return;
		}
		if (func_75(&uLocal_717, 268435456) && func_144(&Local_718, iParam0))
		{
			func_241(&Local_718, iVar2, iParam0);
		}
		else if (ENTITY::DOES_ENTITY_EXIST(&(Local_718.f_310[iVar2 /*14*/])))
		{
			if (!TASK::_0x841475AC96E794D1((Local_718.f_310[iVar2 /*14*/])->f_6) && PED::IS_PED_USING_ANY_SCENARIO(&(Local_718.f_310[iVar2 /*14*/])))
			{
				(Local_718.f_310[iVar2 /*14*/])->f_6 = TASK::_0xDF7993356F52359A(&(Local_718.f_310[iVar2 /*14*/]), 0);
			}
			func_242(&Local_718, iVar2);
			func_243(iParam0, iVar2);
			if (func_11((Local_718.f_310[iVar2 /*14*/])->f_7, 16))
			{
				if (ENTITY::IS_ENTITY_DEAD(&(Local_718.f_310[iVar2 /*14*/])))
				{
					if ((Local_718.f_310[iVar2 /*14*/])->f_4 != 19)
					{
						*uParam1 = func_244(iParam0, iVar2);
						if (*uParam1)
						{
							func_245(&Local_718, iVar2, iLocal_603);
						}
						func_246(Local_718.f_310[iVar2 /*14*/], 19);
					}
				}
				else if (LAW::_0x0EAF918F751F27BA(&(Local_718.f_310[iVar2 /*14*/])))
				{
					if ((Local_718.f_310[iVar2 /*14*/])->f_4 != 14)
					{
						func_246(Local_718.f_310[iVar2 /*14*/], 14);
					}
				}
				else if ((Local_718.f_310[iVar2 /*14*/])->f_4 > 0)
				{
					if ((((((((Local_718.f_310[iVar2 /*14*/])->f_4 != 16 && (Local_718.f_310[iVar2 /*14*/])->f_4 != 15) && (Local_718.f_310[iVar2 /*14*/])->f_4 != 19) && (Local_718.f_310[iVar2 /*14*/])->f_4 != 14) && (Local_718.f_310[iVar2 /*14*/])->f_4 != 20) && (Local_718.f_310[iVar2 /*14*/])->f_3 != 1) && (Local_718.f_310[iVar2 /*14*/])->f_3 != 0) && func_247(&Local_718, &uLocal_716, &vLocal_627, iParam0, iVar2, iLocal_603))
					{
						func_246(Local_718.f_310[iVar2 /*14*/], 15);
					}
					else if ((((((((((Local_718.f_310[iVar2 /*14*/])->f_4 != 19 && (Local_718.f_310[iVar2 /*14*/])->f_4 != 14) && (Local_718.f_310[iVar2 /*14*/])->f_4 != 16) && (Local_718.f_310[iVar2 /*14*/])->f_4 != 15) && (Local_718.f_310[iVar2 /*14*/])->f_4 != 20) && (Local_718.f_310[iVar2 /*14*/])->f_4 != 11) && (Local_718.f_310[iVar2 /*14*/])->f_4 != 12) && (Local_718.f_310[iVar2 /*14*/])->f_4 != 13) && (Local_718.f_310[iVar2 /*14*/])->f_3 != 1) && (Local_718.f_310[iVar2 /*14*/])->f_3 != 0)
					{
						if (!PED::IS_PED_USING_ANY_SCENARIO(&(Local_718.f_310[iVar2 /*14*/])))
						{
							if (((!PED::IS_PED_ON_VEHICLE(&(Local_718.f_310[iVar2 /*14*/]), false) && !PED::IS_PED_IN_ANY_VEHICLE(&(Local_718.f_310[iVar2 /*14*/]), false)) && !PED::IS_PED_ON_SPECIFIC_VEHICLE(&(Local_718.f_310[iVar2 /*14*/]), &(Local_718.f_1[iParam0 /*22*/]))) && !func_148(&(Local_718.f_310[iVar2 /*14*/]), (Local_718.f_1[iParam0 /*22*/])->f_1, 1, 0))
							{
								func_246(Local_718.f_310[iVar2 /*14*/], 16);
							}
							else if (func_248(&Local_718, iVar2, iParam0, iLocal_603))
							{
								func_249(&Local_718, iVar2, iParam0);
							}
						}
					}
				}
				switch ((Local_718.f_310[iVar2 /*14*/])->f_4)
				{
					case 0:
						func_250(&Local_718, iVar2);
						if (func_251(iParam0, iVar2))
						{
							(Local_718.f_1[0 /*22*/])->f_11[0] = &(Local_718.f_1[iParam0 /*22*/])->f_11[iVar3];
							func_34(&((Local_718.f_310[iVar2 /*14*/])->f_7), 2);
							(Local_718.f_310[iVar2 /*14*/])->f_3 = 0;
							PED::SET_PED_CONFIG_FLAG(&(Local_718.f_310[iVar2 /*14*/]), 233, true);
							PED::SET_PED_CONFIG_FLAG(&(Local_718.f_310[iVar2 /*14*/]), 21, true);
							func_246(Local_718.f_310[iVar2 /*14*/], 4);
						}
						else if ((Local_718.f_310[iVar2 /*14*/])->f_3 == 1)
						{
							func_246(Local_718.f_310[iVar2 /*14*/], 2);
						}
						else
						{
							func_246(Local_718.f_310[iVar2 /*14*/], 1);
						}
						break;
					case 4:
						func_252(&Local_718, &uLocal_716, iParam0, iVar2, iLocal_603, &vLocal_627, Local_432[iVar3 /*21*/], Local_15[iVar3 /*52*/], &uLocal_1838, &uLocal_1839, &iLocal_1867);
						uVar4 = func_253(&Local_718, iVar2, &uLocal_716, 0);
						if (func_254(&Local_718, iVar2, &uLocal_1839, &iLocal_1867, &uLocal_716, iLocal_603) || uVar4)
						{
							if (func_11((Local_718.f_310[iVar2 /*14*/])->f_7, 512) || func_172(&uLocal_716, 0))
							{
								func_255(&Local_718, &uLocal_1839, &iLocal_1867, &uLocal_716, iVar2);
							}
							else if ((func_256(iLocal_1867) || uVar4) || iLocal_1867 == 0)
							{
								func_257(&Local_718, &uLocal_716, iLocal_603, &uLocal_1839, &iLocal_1867, func_43(uLocal_716, 64), 0, 0);
							}
						}
						func_258(&Local_718, &vLocal_627, iLocal_603, &uLocal_1839, &iLocal_1867, &uLocal_716, 1);
						func_259(&Local_718, &(Local_718.f_310[iVar2 /*14*/]), iParam0, iVar2, 0);
						func_260(&Local_718, iVar2);
						break;
					case 5:
						func_258(&Local_718, &vLocal_627, iLocal_603, &uLocal_1839, &iLocal_1867, &uLocal_716, 0);
						func_252(&Local_718, &uLocal_716, iParam0, iVar2, iLocal_603, &vLocal_627, Local_432[iVar3 /*21*/], Local_15[iVar3 /*52*/], &uLocal_1838, &uLocal_1839, &iLocal_1867);
						if (!func_125(vLocal_627[7 /*3*/]))
						{
							func_81(vLocal_627[7 /*3*/]);
						}
						if (!func_11((Local_718.f_310[iVar2 /*14*/])->f_7, -2147483648) && func_151(0, 1, Global_35, 1))
						{
							func_261(&Local_718);
							func_34(&((Local_718.f_310[iVar2 /*14*/])->f_7), -2147483648);
						}
						if (func_130(vLocal_627[7 /*3*/], 15f))
						{
							TASK::_0xE7FA07624574B79A(&(Local_718.f_310[iVar2 /*14*/]), Global_35, 2, 1, 0.5f, 1, 0, 0, 0);
						}
						bVar5 = ENTITY::GET_ENTITY_SPEED(&(Local_718.f_1[0 /*22*/])) < 1f;
						if (!func_125(vLocal_627[7 /*3*/]) || func_224(vLocal_627[7 /*3*/]) > 4f)
						{
							iVar6 = 1;
						}
						if (func_262(&Local_718, iVar2, 10f, &uLocal_1839, &iLocal_1867, &uLocal_716, iLocal_603) && (func_256(iLocal_1867) || iLocal_1867 == 0))
						{
							if (iVar6 || iLocal_1867 != 4)
							{
								iVar7 = 1;
							}
						}
						if ((((iVar7 || VEHICLE::_0x2963B5C1637E8A27(&(Local_718.f_1[0 /*22*/])) == Global_35) || (ENTITY::DOES_ENTITY_EXIST(&(Local_718.f_310[iVar2 /*14*/])) && PED::_0xE33F98BD76490ABC(&(Local_718.f_310[iVar2 /*14*/]), PLAYER::PLAYER_ID(), 0))) || (iVar6 && func_253(&Local_718, iVar2, &uLocal_716, 0))) || bVar5)
						{
							func_257(&Local_718, &uLocal_716, iLocal_603, &uLocal_1839, &iLocal_1867, (!bVar5 && (func_43(uLocal_716, 64) || func_253(&Local_718, iVar2, &uLocal_716, 0))), 1, 0);
						}
						func_260(&Local_718, iVar2);
						func_259(&Local_718, &(Local_718.f_310[iVar2 /*14*/]), iParam0, iVar2, 0);
						break;
					case 6:
						func_258(&Local_718, &vLocal_627, iLocal_603, &uLocal_1839, &iLocal_1867, &uLocal_716, 0);
						func_252(&Local_718, &uLocal_716, iParam0, iVar2, iLocal_603, &vLocal_627, Local_432[iVar3 /*21*/], Local_15[iVar3 /*52*/], &uLocal_1838, &uLocal_1839, &iLocal_1867);
						if (func_151(-3.5f, 1, Global_35, 1))
						{
							func_261(&Local_718);
							PED::PED_COWER_IN_PLACE(&(Local_718.f_310[iVar2 /*14*/]), Global_35);
							if (iLocal_1867 != 0)
							{
								func_233(&uLocal_1839, &iLocal_1867);
							}
							VEHICLE::SET_TRAIN_CRUISE_SPEED(&(Local_718.f_1[0 /*22*/]), 0f);
							VEHICLE::_0x4182C037AA1F0091(&(Local_718.f_1[0 /*22*/]), 1);
							VEHICLE::_0x160C1B5AB48AB87C(&(Local_718.f_1[0 /*22*/]), 9999f);
							func_12(&uLocal_716, 2048, 1);
							if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
							{
								PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
								func_98(&uLocal_717, 134217728);
							}
							func_246(Local_718.f_310[iVar2 /*14*/], 7);
						}
						func_260(&Local_718, iVar2);
						func_259(&Local_718, &(Local_718.f_310[iVar2 /*14*/]), iParam0, iVar2, 0);
						break;
					case 7:
						func_258(&Local_718, &vLocal_627, iLocal_603, &uLocal_1839, &iLocal_1867, &uLocal_716, 0);
						func_252(&Local_718, &uLocal_716, iParam0, iVar2, iLocal_603, &vLocal_627, Local_432[iVar3 /*21*/], Local_15[iVar3 /*52*/], &uLocal_1838, &uLocal_1839, &iLocal_1867);
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(&(Local_718.f_1[0 /*22*/]), -1) != Global_35)
						{
							VEHICLE::SET_TRAIN_CRUISE_SPEED(&(Local_718.f_1[0 /*22*/]), 0f);
						}
						if (!func_11((Local_718.f_310[iVar2 /*14*/])->f_7, 256))
						{
							PED::PED_COWER_IN_PLACE(&(Local_718.f_310[iVar2 /*14*/]), Global_35);
							func_34(&((Local_718.f_310[iVar2 /*14*/])->f_7), 256);
						}
						func_260(&Local_718, iVar2);
						func_259(&Local_718, &(Local_718.f_310[iVar2 /*14*/]), iParam0, iVar2, 1);
						break;
					case 1:
						if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(&(Local_718.f_310[iVar2 /*14*/]), true))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(&(Local_718.f_310[iVar2 /*14*/]), true, true);
						}
						func_263(&Local_718, iVar2, uLocal_716);
						if (func_11((Local_718.f_310[iVar2 /*14*/])->f_7, 64))
						{
							if (MISC::GET_GAME_TIMER() >= (Local_718.f_310[iVar2 /*14*/])->f_13)
							{
								if (func_11((Local_718.f_310[iVar2 /*14*/])->f_7, 1073741824))
								{
									func_134(&(Local_718.f_310[iVar2 /*14*/]), Global_35, "GENERIC_SHOCKED_MED", 0, -1082130432, 0, 0, 0, 1, 1, 1, 1808677283, 0, 0, 0);
								}
								PED::_0x62FDAD5E01D2DD47(&(Local_718.f_310[iVar3 /*14*/]), Global_36, 3, 0);
								TASK::_0xE7FA07624574B79A(&(Local_718.f_310[iVar2 /*14*/]), Global_35, 3, 2, MISC::GET_RANDOM_FLOAT_IN_RANGE(4f, 7f), 1, 0, 0, 0);
								func_74(&((Local_718.f_310[iVar2 /*14*/])->f_7), 64);
							}
						}
						if (func_43(uLocal_716, 256))
						{
							func_264(&Local_718, iVar2, &uLocal_716, &uLocal_717, iLocal_603);
						}
						if (!bParam2)
						{
							if (!func_11((Local_718.f_310[iVar2 /*14*/])->f_7, 8))
							{
								if (((func_11((Local_718.f_1[iParam0 /*22*/])->f_4, 2) || func_265(iVar2)) || func_262(&Local_718, iVar2, 10f, &uLocal_1839, &iLocal_1867, &uLocal_716, iLocal_603)) || (ENTITY::DOES_ENTITY_EXIST(&(Local_718.f_310[iVar2 /*14*/])) && PED::_0xE33F98BD76490ABC(&(Local_718.f_310[iVar2 /*14*/]), PLAYER::PLAYER_ID(), 0)))
								{
									func_34(&((Local_718.f_310[iVar2 /*14*/])->f_7), 8);
									func_34(&((Local_718.f_310[iVar2 /*14*/])->f_7), 512);
									func_139(&Local_718, iParam0, &vLocal_627, &uLocal_1839, &iLocal_1867, &uLocal_716, &uLocal_717, &iLocal_606, Local_15[iVar3 /*52*/], Local_432[iVar3 /*21*/], 1, !func_165(&Local_718, iLocal_603));
								}
							}
							if (!func_11((Local_718.f_310[iVar2 /*14*/])->f_7, 2))
							{
								if (iParam0 == iLocal_603 && (Local_718.f_310[iVar2 /*14*/])->f_3 != 1)
								{
									if (!MAP::DOES_BLIP_EXIST((Local_718.f_310[iVar2 /*14*/])->f_1))
									{
										func_266(&(Local_718.f_310[iVar2 /*14*/]), &((Local_718.f_310[iVar2 /*14*/])->f_1), -1749618580, 0, 0, "BLIP_TNRB_PASSENGER");
									}
								}
								else if (MAP::DOES_BLIP_EXIST((Local_718.f_310[iVar2 /*14*/])->f_1))
								{
									func_267(&((Local_718.f_310[iVar2 /*14*/])->f_1));
								}
								if (!func_43(uLocal_716, 8))
								{
									func_268(iParam0, iVar3);
								}
							}
							else
							{
								func_246(Local_718.f_310[iVar2 /*14*/], 12);
							}
						}
						else if (!func_43(uLocal_716, 8))
						{
							if (func_268(iParam0, iVar3))
							{
								func_34(&((Local_718.f_310[iVar2 /*14*/])->f_7), 8);
							}
						}
						break;
					case 2:
						func_269(&Local_718, iVar2);
						func_270(&Local_718, &uLocal_716, iParam0, iVar2, iLocal_603, &vLocal_627, Local_432[iVar3 /*21*/], Local_15[iVar3 /*52*/], &uLocal_1837);
						if (!func_11((Local_718.f_310[iVar2 /*14*/])->f_7, 8))
						{
							if (func_271(iParam0, iVar2))
							{
								func_34(&((Local_718.f_310[iVar2 /*14*/])->f_7), 8);
								func_272(&Local_718, iParam0, &vLocal_627, &uLocal_1839, &iLocal_1867, &uLocal_716);
								func_246(Local_718.f_310[iVar2 /*14*/], 17);
								func_34(&((Local_718.f_310[iVar2 /*14*/])->f_7), 2);
							}
						}
						if (func_11((Local_718.f_310[iVar2 /*14*/])->f_7, 8))
						{
							if (iParam0 == iLocal_603 || (Local_718.f_310[iVar2 /*14*/])->f_9 < 10f)
							{
								func_34(&((Local_718.f_310[iVar2 /*14*/])->f_7), 2);
								func_272(&Local_718, iParam0, &vLocal_627, &uLocal_1839, &iLocal_1867, &uLocal_716);
								func_246(Local_718.f_310[iVar2 /*14*/], 17);
							}
						}
						else
						{
							if ((iLocal_603 != iParam0 && iLocal_603 < 0) && (Local_718.f_1[iParam0 /*22*/])->f_6 == 3)
							{
								func_273(&Local_718, &uLocal_716, iVar2, &fLocal_621);
							}
							else
							{
								func_274(&Local_718, &vLocal_627, &uLocal_716, &uLocal_1839, &iLocal_1867, &iLocal_606, iVar2, iParam0, iLocal_603, iLocal_604, &uLocal_608);
							}
							if (func_275(&Local_718, iParam0) && func_271(iParam0, iVar2))
							{
								func_246(Local_718.f_310[iVar2 /*14*/], 3);
							}
						}
						if (func_43(uLocal_716, 262144) && IntToFloat(MISC::GET_GAME_TIMER()) >= fLocal_694)
						{
							func_12(&uLocal_716, 262144, 0);
							func_12(&uLocal_716, 1073741824, 1);
						}
						break;
					case 3:
						func_269(&Local_718, iVar2);
						func_246(Local_718.f_310[iVar2 /*14*/], 17);
						break;
					case 8:
						func_268(iParam0, iVar3);
						if (func_151(0, 1, Global_35, 1))
						{
							if (func_11((Local_718.f_310[iVar2 /*14*/])->f_7, 8192))
							{
								func_134(&(Local_718.f_310[iVar2 /*14*/]), Global_35, "INSULT_RESPONSE", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							else if (func_11((Local_718.f_310[iVar2 /*14*/])->f_7, 4096))
							{
								func_134(&(Local_718.f_310[iVar2 /*14*/]), Global_35, "GREET_GENERAL_STRANGER", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							if ((Local_718.f_310[iVar2 /*14*/])->f_3 == 1)
							{
								func_246(Local_718.f_310[iVar2 /*14*/], 2);
							}
							else if ((Local_718.f_310[iVar2 /*14*/])->f_3 == 0)
							{
								func_246(Local_718.f_310[iVar2 /*14*/], 4);
							}
							else
							{
								func_246(Local_718.f_310[iVar2 /*14*/], 1);
							}
							func_74(&((Local_718.f_310[iVar2 /*14*/])->f_7), 134217728);
							func_34(&((Local_718.f_310[iVar2 /*14*/])->f_7), 2048);
						}
						break;
					case 9:
						func_268(iParam0, iVar3);
						func_263(&Local_718, iVar2, uLocal_716);
						if (func_276(&Local_718, &vLocal_627, iVar2) && func_277(&Local_718, &vLocal_627, &uLocal_716, &uLocal_717, iParam0, iVar2, &iLocal_606, &iLocal_609))
						{
							func_121(vLocal_627[1 /*3*/]);
							func_246(Local_718.f_310[iVar2 /*14*/], 11);
						}
						break;
					case 11:
						func_268(iParam0, iVar3);
						func_263(&Local_718, iVar2, uLocal_716);
						if (!func_125(vLocal_627[13 /*3*/]))
						{
							func_81(vLocal_627[13 /*3*/]);
						}
						func_278(Local_718.f_310[iVar2 /*14*/], &iLocal_609, &uLocal_717);
						func_121(vLocal_627[13 /*3*/]);
						func_279(Local_718.f_310[iVar2 /*14*/]);
						func_246(Local_718.f_310[iVar2 /*14*/], 12);
						break;
					case 12:
						func_268(iParam0, iVar3);
						func_278(Local_718.f_310[iVar2 /*14*/], &iLocal_609, &uLocal_717);
						func_263(&Local_718, iVar2, uLocal_716);
						func_34(&((Local_718.f_310[iVar2 /*14*/])->f_7), 2);
						func_74(&((Local_718.f_310[iVar2 /*14*/])->f_7), 134217728);
						func_45(&Local_718, iParam0);
						if (func_151(0, 1, &(Local_718.f_310[iVar2 /*14*/]), 1))
						{
							PED::_0x9A77DFD295E29B09(&(Local_718.f_310[iVar2 /*14*/]), true);
							func_246(Local_718.f_310[iVar2 /*14*/], 13);
						}
						if (MAP::DOES_BLIP_EXIST((Local_718.f_310[iVar2 /*14*/])->f_1))
						{
							func_267(&((Local_718.f_310[iVar2 /*14*/])->f_1));
						}
						break;
					case 13:
						func_268(iParam0, iVar3);
						func_278(Local_718.f_310[iVar2 /*14*/], &iLocal_609, &uLocal_717);
						func_263(&Local_718, iVar2, uLocal_716);
						if (MAP::DOES_BLIP_EXIST((Local_718.f_310[iVar2 /*14*/])->f_1))
						{
							func_267(&((Local_718.f_310[iVar2 /*14*/])->f_1));
						}
						break;
					case 17:
						func_269(&Local_718, iVar2);
						if ((Local_718.f_310[iVar2 /*14*/])->f_3 == 1)
						{
							func_12(&uLocal_716, 1048576, 1);
						}
						if (!func_11((Local_718.f_1[iParam0 /*22*/])->f_4, 2))
						{
							func_34(&((Local_718.f_1[iParam0 /*22*/])->f_4), 2);
						}
						func_280(&Local_718, &uLocal_716, iVar2, iParam0, iLocal_603, &iLocal_1868, &uLocal_608, Local_432[iVar3 /*21*/], Local_15[iVar3 /*52*/]);
						func_246(Local_718.f_310[iVar2 /*14*/], 18);
						break;
					case 18:
						func_269(&Local_718, iVar2);
						if (!func_11((Local_718.f_1[iParam0 /*22*/])->f_4, 2))
						{
							func_34(&((Local_718.f_1[iParam0 /*22*/])->f_4), 2);
						}
						func_280(&Local_718, &uLocal_716, iVar2, iParam0, iLocal_603, &iLocal_1868, &uLocal_608, Local_432[iVar3 /*21*/], Local_15[iVar3 /*52*/]);
						break;
					case 14:
						func_263(&Local_718, iVar2, uLocal_716);
						break;
					case 15:
						func_268(iParam0, iVar3);
						func_263(&Local_718, iVar2, uLocal_716);
						func_246(Local_718.f_310[iVar2 /*14*/], 16);
						break;
					case 16:
						func_268(iParam0, iVar3);
						func_281(&Local_718, iParam0, iVar2);
						break;
					case 19:
						if (!func_11((Local_718.f_310[iVar2 /*14*/])->f_7, 2))
						{
							func_34(&((Local_718.f_310[iVar2 /*14*/])->f_7), 2);
						}
						if (MAP::DOES_BLIP_EXIST((Local_718.f_310[iVar2 /*14*/])->f_1))
						{
							func_267(&((Local_718.f_310[iVar2 /*14*/])->f_1));
						}
						if (ENTITY::DOES_ENTITY_EXIST(&(Local_718.f_310[iVar2 /*14*/])))
						{
							(Local_718.f_310[iVar2 /*14*/])->f_1 = MAP::GET_BLIP_FROM_ENTITY(&(Local_718.f_310[iVar2 /*14*/]));
							if (MAP::DOES_BLIP_EXIST((Local_718.f_310[iVar2 /*14*/])->f_1))
							{
								func_267(&((Local_718.f_310[iVar2 /*14*/])->f_1));
							}
						}
						if (!func_11((Local_718.f_310[iVar2 /*14*/])->f_7, 128))
						{
							func_34(&((Local_718.f_310[iVar2 /*14*/])->f_7), 128);
						}
						func_34(&((Local_718.f_310[iVar2 /*14*/])->f_7), 2048);
						func_122(Local_15[iVar3 /*52*/], 0, 0, 1, 0);
						if ((Local_718.f_310[iVar2 /*14*/])->f_3 == 1)
						{
							func_45(&Local_718, iLocal_603);
						}
						func_246(Local_718.f_310[iVar2 /*14*/], 20);
						func_244(iParam0, iVar2);
						if (func_11((Local_718.f_310[iVar2 /*14*/])->f_7, 32))
						{
							PED::_0x3088634CF8C819CF(&(Local_718.f_310[iVar2 /*14*/]));
						}
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(Local_718.f_310[iVar2 /*14*/]);
						(Local_718.f_1[iParam0 /*22*/])->f_9++;
						PED::_0x7D4E70A67A651C71(1);
						break;
				}
			}
			else
			{
				func_282(iParam0, iVar3);
			}
		}
		else if (!func_11((Local_718.f_310[iVar2 /*14*/])->f_7, 2))
		{
			func_34(&((Local_718.f_310[iVar2 /*14*/])->f_7), 2);
		}
		iVar3++;
	}
}

int func_144(var uParam0, int iParam1)
{
	if (iParam1 == 0 || iParam1 == uParam0->f_1102)
	{
		return 0;
	}
	return 1;
}

void func_145(var uParam0, int iParam1)
{
	(uParam0->f_1[iParam1 /*22*/])->f_4 = 0;
	(uParam0->f_1[iParam1 /*22*/])->f_3 = 0;
	(uParam0->f_1[iParam1 /*22*/])->f_9 = 0;
	(uParam0->f_1[iParam1 /*22*/])->f_8 = 0;
	(uParam0->f_1[iParam1 /*22*/])->f_10 = 0;
	(uParam0->f_1[iParam1 /*22*/])->f_20 = -1;
	func_106(uParam0, iParam1);
	ENTITY::_0x119A5714578F4E05(&(uParam0->f_1[iParam1 /*22*/]), 0);
	VEHICLE::_0xD4907EF4334C7602(&(uParam0->f_1[iParam1 /*22*/]), 1);
	VEHICLE::_0x68830738A6BFB370(&(uParam0->f_1[iParam1 /*22*/]), 1);
	PED::_0x7D4E70A67A651C71(func_86(uParam0, iParam1));
	func_34(&((uParam0->f_1[iParam1 /*22*/])->f_4), 65536);
}

void func_146(var uParam0, var uParam1, int iParam2)
{
	if (!func_75(uParam1, -2147483648))
	{
		VEHICLE::_0xD4907EF4334C7602(&(uParam0->f_1[iParam2 /*22*/]), 0);
		VEHICLE::_0x68830738A6BFB370(&(uParam0->f_1[iParam2 /*22*/]), 0);
	}
	func_74(&((uParam0->f_1[iParam2 /*22*/])->f_4), 65536);
}

void func_147(int iParam0)
{
	int iVar0;

	iVar0 = func_132(iParam0);
	if (iVar0 != 0)
	{
		func_134(iVar0, Global_35, "GENERIC_FRIGHTENED_HIGH", 0, -1082130432, 0, 0, 0, 1, 1, 1, 1808677283, 0, 0, 0);
		func_65(&iLocal_609);
	}
}

bool func_148(int iParam0, int iParam1, bool bParam2, int iParam3)
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

void func_149(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar2 = -1;
	if (bParam1)
	{
		func_283(&Local_718, iLocal_603, &iVar2);
	}
	iVar1 = 0;
	while (iVar1 < (Local_718.f_1[iParam0 /*22*/])->f_8)
	{
		iVar0 = &(Local_718.f_1[iParam0 /*22*/])->f_11[iVar1];
		if (iVar0 >= 0)
		{
			if ((Local_718.f_310[iVar0 /*14*/])->f_3 != 1 && (Local_718.f_310[iVar0 /*14*/])->f_3 != 0)
			{
				func_34(&((Local_718.f_310[iVar0 /*14*/])->f_7), 64);
				if (iVar2 == iVar0)
				{
					iVar3 = 300;
					func_34(&((Local_718.f_310[iVar0 /*14*/])->f_7), 1073741824);
				}
				else
				{
					iVar3 = (300 + MISC::GET_RANDOM_INT_IN_RANGE(300, 1000));
				}
				(Local_718.f_310[iVar0 /*14*/])->f_13 = (iLocal_612 + iVar3);
			}
		}
		iVar1++;
	}
}

int func_150()
{
	int iVar0;

	if (func_43(uLocal_716, 2))
	{
		return 1;
	}
	iVar0 = &(Local_718.f_1[0 /*22*/])->f_11[0];
	if (ENTITY::IS_ENTITY_DEAD(&(Local_718.f_310[iVar0 /*14*/])) && ENTITY::_0x3EC28DA1FFAC9DDD(&(Local_718.f_310[iVar0 /*14*/]), Global_35, 0, 0))
	{
		return 1;
	}
	if (VEHICLE::_0x2963B5C1637E8A27(&(Local_718.f_1[0 /*22*/])) != &Local_718.f_310[iVar0 /*14*/])
	{
		return 1;
	}
	if (func_11((Local_718.f_310[iVar0 /*14*/])->f_7, 4194304) || func_11((Local_718.f_310[iVar0 /*14*/])->f_7, 512))
	{
		return 1;
	}
	return 0;
}

int func_151(float fParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam3 && ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		if (!func_284(iParam2, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (func_285(fParam0))
	{
		return 0;
	}
	return 1;
}

char* func_152(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "GENERIC_CURSE_MED";
		case 1:
			return "BLOCKED_GENERIC";
		case 2:
			return "GENERIC_ANGRY_REACTION";
		case 3:
			return "GENERIC_CURSE_HIGH";
		default:
			break;
	}
	return "BLOCKED_GENERIC";
}

bool func_153(int iParam0)
{
	return VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam0));
}

float func_154(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 11f;
		case 1:
			return 11f;
		case 2:
			return 11f;
		case 3:
			return 11f;
		case 6:
			return 0f;
		case 7:
			return 0f;
		case 8:
			return 3.5f;
		case 9:
			return 3.5f;
		case 10:
			return 3.5f;
		case 11:
			return 3.5f;
		case 12:
			return 3.5f;
		case 5:
			return 0f;
		case 4:
			return 11f;
		default:
			break;
	}
	return 5f;
}

int func_155(var uParam0)
{
	if (func_75(uParam0, 2))
	{
		return 0;
	}
	if (func_87(162))
	{
		return 0;
	}
	if (!func_75(uParam0, 1))
	{
		return 0;
	}
	return 1;
}

void func_156(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_286(iParam0, &iVar0, &iVar1);
	if (!func_287(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_288(iVar0, iVar1);
}

bool func_157(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_289(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
	}
	return (UNLOCK::_UNLOCK_IS_UNLOCKED(((*Global_1835011)[iParam0 /*74*/])->f_2) && !UNLOCK::_UNLOCK_IS_VISIBLE(((*Global_1835011)[iParam0 /*74*/])->f_2));
}

int func_158(int iParam0, int iParam1, var uParam2)
{
	if (func_75(uParam2, 4))
	{
		return 0;
	}
	if (func_87(153))
	{
		return 0;
	}
	if (*iParam0 == 2 || *iParam0 == 3)
	{
		return 0;
	}
	if (!func_290(iParam0, iParam1))
	{
		return 0;
	}
	return 1;
}

int func_159(int iParam0, var uParam1)
{
	if (func_75(uParam1, 8))
	{
		return 0;
	}
	if (func_87(154))
	{
		return 0;
	}
	if (!func_291(iParam0, 1097859072))
	{
		return 0;
	}
	if (!func_292(Global_35))
	{
		return 0;
	}
	return 1;
}

int func_160(int iParam0, int iParam1, var uParam2, var uParam3)
{
	if (func_75(uParam3, 16))
	{
		return 0;
	}
	if (func_87(160))
	{
		return 0;
	}
	if (iParam1 < 0 || !func_43(*uParam2, 64))
	{
		return 0;
	}
	if (!(iParam0->f_1[iParam1 /*22*/])->f_6 == 2)
	{
		return 0;
	}
	if ((iParam0->f_1[iParam1 /*22*/])->f_8 <= 0)
	{
		return 0;
	}
	return 1;
}

int func_161(int iParam0, var uParam1, var uParam2)
{
	if (func_75(uParam2, 32))
	{
		return 0;
	}
	if (*iParam0 == 2 || *iParam0 == 3)
	{
		return 0;
	}
	if (func_87(155))
	{
		return 0;
	}
	if (!func_43(*uParam1, 64))
	{
		return 0;
	}
	return 1;
}

int func_162(int iParam0, var uParam1)
{
	if (func_75(uParam1, 64))
	{
		return 0;
	}
	if (func_87(157))
	{
		return 0;
	}
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 1)
	{
		return 0;
	}
	return 1;
}

int func_163()
{
	if (!WEAPON::_0xCB690F680A3EA971(Global_35, 4))
	{
		return 0;
	}
	if (!PED::GET_PED_RESET_FLAG(Global_35, 0))
	{
		return 0;
	}
	if (!func_43(uLocal_716, 128))
	{
		return 0;
	}
	if (iLocal_607 < 0)
	{
		return 0;
	}
	if ((Local_718.f_310[iLocal_607 /*14*/])->f_3 == 1)
	{
		return 0;
	}
	return 1;
}

int func_164()
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::_0x2963B5C1637E8A27(&(Local_718.f_1[0 /*22*/]))))
	{
		iVar0 = VEHICLE::_0x2963B5C1637E8A27(&(Local_718.f_1[0 /*22*/]));
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && FIRE::IS_EXPLOSION_IN_SPHERE(25, ENTITY::GET_ENTITY_COORDS(iVar0, true, false), 8.25f))
		{
			func_12(&uLocal_716, 2097152, 1);
			VEHICLE::SET_TRAIN_CRUISE_SPEED(&(Local_718.f_1[0 /*22*/]), 0f);
			return 1;
		}
	}
	return 0;
}

int func_165(var uParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return 0;
	}
	if ((uParam0->f_1[iParam1 /*22*/])->f_8 < 1)
	{
		return 0;
	}
	return 1;
}

int func_166(var uParam0, var uParam1)
{
	if (!func_43(*uParam0, 4))
	{
		return 0;
	}
	if (!func_43(*uParam0, 64))
	{
		return 0;
	}
	return 1;
}

int func_167(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	return func_293(iParam0, 0f, 0f, 0f, iParam1, iParam2, bParam3, iParam4, bParam5);
}

int func_168(var uParam0, var uParam1, var uParam2)
{
	if (func_43(*uParam1, 134217728))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -808813879))
		{
			return 1;
		}
	}
	else if (func_127((*uParam0)[15 /*3*/], func_294(*uParam2)))
	{
		*uParam2++;
		return 1;
	}
	return 0;
}

char* func_169()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	switch (iVar0)
	{
		case 0:
		case default:
			return "GENERIC_FRIGHTENED_MED";
		case 1:
			return "GENERIC_SHOCKED_MED";
		}

int func_170(var uParam0)
{
	if (!func_125((*uParam0)[15 /*3*/]))
	{
		return 1;
	}
	if (func_127((*uParam0)[15 /*3*/], 8f))
	{
		return 1;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 2019359053))
	{
		return 1;
	}
	return 0;
}

int func_171()
{
	return 4992;
}

int func_172(var uParam0, bool bParam1)
{
	struct<17> Var0;

	if (func_43(*uParam0, 1))
	{
		return 0;
	}
	if (LAW::_0xAD401C63158ACBAA(PLAYER::GET_PLAYER_INDEX()))
	{
		LAW::_0x9C5BD8C562565CE6(&Var0);
		if (Var0.f_11 == 6)
		{
			return 1;
		}
		else if (!bParam1 && (Var0.f_15 || Var0.f_16))
		{
			return 1;
		}
	}
	return 0;
}

int func_173()
{
	float fVar0;
	vector3 vVar1;
	var uVar4;
	var uVar7;
	var uVar8;
	var uVar9;
	int iVar10;
	vector3 vVar11;

	if (func_43(uLocal_716, 4))
	{
		return 0;
	}
	if (!func_43(uLocal_716, 131072) && Local_718.f_1100 > 0)
	{
		return 0;
	}
	fVar0 = 120f;
	if (func_43(uLocal_716, 8388608))
	{
		fVar0 = 60f;
	}
	if (func_127(vLocal_627[14 /*3*/], fVar0))
	{
		return 1;
	}
	fVar0 = 60f;
	if (func_43(uLocal_716, 8388608))
	{
		fVar0 = 30f;
	}
	if (func_127(vLocal_627[14 /*3*/], fVar0))
	{
		iVar10 = func_295();
		if ((iVar10 > 0 && iVar10 < 14) && ENTITY::DOES_ENTITY_EXIST(&(Local_718.f_1[iVar10 /*22*/])))
		{
			vVar11 = { ENTITY::GET_ENTITY_COORDS(&(Local_718.f_1[iVar10 /*22*/]), true, false) };
			if (PATHFIND::GET_CLOSEST_ROAD(vVar11, 100f, 1, &vVar1, &uVar4, &uVar7, &uVar8, &uVar9, true))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar11, vVar1, true) < 75f)
				{
					return 1;
				}
			}
		}
	}
	fVar0 = 15f;
	if (func_43(uLocal_716, 8388608))
	{
		fVar0 = 7.5f;
	}
	if (!func_127(vLocal_627[14 /*3*/], fVar0))
	{
		return 0;
	}
	if (fLocal_695 < 300f)
	{
		return 1;
	}
	return 0;
}

void func_174(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_296(Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_297(Global_1935630, 4194304);
	}
	MISC::ENABLE_DISPATCH_SERVICE(15, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(6, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(1, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(16, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(2, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(3, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(4, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(5, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(7, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(9, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(10, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(11, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(12, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(13, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(14, bParam0);
}

bool func_175()
{
	return (Global_1894899 & 1 != 0 && func_298() != -1);
}

int func_176()
{
	if (!func_43(uLocal_716, 16384))
	{
		return 1;
	}
	if (!VEHICLE::_0xE887BD31D97793F6(&(Local_718.f_1[0 /*22*/])))
	{
		return 1;
	}
	if (fLocal_695 > 300f)
	{
		return 1;
	}
	return 0;
}

int func_177(var uParam0)
{
	int iVar0;

	iVar0 = VEHICLE::_0x2963B5C1637E8A27(&(uParam0->f_1[0 /*22*/]));
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (iVar0 == Global_35)
	{
		return 0;
	}
	return 1;
}

void func_178(int iParam0, float fParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		VEHICLE::SET_TRAIN_SPEED(iParam0, fParam1);
		VEHICLE::SET_TRAIN_CRUISE_SPEED(iParam0, fParam1);
	}
}

void func_179()
{
	VEHICLE::_0x4182C037AA1F0091(&(Local_718.f_1[0 /*22*/]), 1);
	VEHICLE::_0x160C1B5AB48AB87C(&(Local_718.f_1[0 /*22*/]), -1f);
	VEHICLE::_0xDC69F6913CCA0B99(&(Local_718.f_1[0 /*22*/]), 1);
	VEHICLE::SET_TRAIN_CRUISE_SPEED(&(Local_718.f_1[0 /*22*/]), 0f);
	VEHICLE::_0x9F29999DFDF2AEB8(&(Local_718.f_1[0 /*22*/]), 0f);
}

int func_180()
{
	float fVar0;

	if (func_43(uLocal_716, 1024))
	{
		return 0;
	}
	if (VEHICLE::_0xE887BD31D97793F6(&(Local_718.f_1[0 /*22*/])) && fLocal_695 < 100f)
	{
		return 1;
	}
	if (!func_299())
	{
		return 0;
	}
	if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(&(Local_718.f_1[0 /*22*/]), -1) == Global_35)
	{
		return 0;
	}
	if (iLocal_603 < 0)
	{
		return 0;
	}
	if ((!func_43(uLocal_716, 131072) && !func_183(PLAYER::PLAYER_ID(), 1, 0, 1)) && Local_718.f_1100 > 0)
	{
		return 0;
	}
	fVar0 = 45f;
	if (func_43(uLocal_716, 8388608))
	{
		fVar0 = 35f;
	}
	else if (func_43(uLocal_716, 32))
	{
		fVar0 = 40f;
	}
	if (func_127(vLocal_627[19 /*3*/], fVar0))
	{
		return 1;
	}
	if (!func_172(&uLocal_716, 1))
	{
		return 0;
	}
	if (!func_127(vLocal_627[19 /*3*/], 30f))
	{
		return 0;
	}
	return 1;
}

char* func_181()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	switch (iVar0)
	{
		case 0:
		case default:
			return "PLEAD";
		case 1:
			return "DONT_HURT_ME";
		case 2:
			return "SCARED_HELP";
		case 3:
			return "GENERIC_FRIGHTENED_HIGH";
		}

bool func_182(int iParam0)
{
	int iVar0;

	iVar0 = PED::_0x5407B7288D0478B7(Global_35, iParam0);
	return iVar0 > 0;
}

int func_183(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_300(bParam1, iParam2, bParam3);
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

void func_184(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_301() - fParam1);
	func_302(uParam0, 1);
	func_303(uParam0, 2);
	uParam0->f_2 = 0f;
}

char* func_185(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PRTRN_START";
		case 1:
			return "PRTRN_IDLE";
		default:
			break;
	}
	return "";
}

int func_186(char* sParam0, bool bParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (!AUDIO::PREPARE_MUSIC_EVENT(sParam0))
		{
			return 0;
		}
	}
	if (AUDIO::TRIGGER_MUSIC_EVENT(sParam0))
	{
		return 1;
	}
	return 0;
}

int func_187()
{
	return Global_1572887->f_12;
}

bool func_188(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 35);
}

void func_189(int iParam0, int iParam1)
{
	func_34(&((Global_1914319->f_3[iParam0 /*446*/])->f_6), iParam1);
}

void func_190(int iParam0, int iParam1)
{
	if (!func_188(iParam0))
	{
		return;
	}
	(Global_1914319->f_3[iParam0 /*446*/])->f_7 = ((Global_1914319->f_3[iParam0 /*446*/])->f_7 || iParam1);
}

void func_191(int iParam0, int iParam1)
{
	func_74(&((Global_1914319->f_3[iParam0 /*446*/])->f_6), iParam1);
}

void func_192(int iParam0, int iParam1)
{
	if (!func_188(iParam0))
	{
		return;
	}
	(Global_1914319->f_3[iParam0 /*446*/])->f_7 = ((Global_1914319->f_3[iParam0 /*446*/])->f_7 - ((Global_1914319->f_3[iParam0 /*446*/])->f_7 && iParam1));
}

void func_193(int iParam0)
{
	Global_1914319->f_15923 = iParam0;
}

int func_194()
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

int func_195(int iParam0)
{
	if (!func_198(iParam0))
	{
		return -1;
	}
	return func_305(func_304(iParam0));
}

bool func_196(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_197(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_198(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

float func_199(int iParam0, vector3 vParam1)
{
	if (func_220(iParam0))
	{
		return BUILTIN::VDIST(VEHICLE::_0x1E8A921112891651(((*Global_1425371)[iParam0 /*373*/])->f_1), vParam1);
	}
	return 1E+08f;
}

int func_200(int iParam0, int iParam1)
{
	var uVar0;

	return func_306(&uVar0, iParam0, iParam1);
}

bool func_201(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("weapon_unarmed"));
}

int func_202(int iParam0, int iParam1)
{
	var uVar0;

	return func_307(&uVar0, iParam0, iParam1);
}

void func_203(var uParam0, var uParam1, int iParam2)
{
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

int func_204()
{
	int iVar0;

	if (func_308(func_298()))
	{
		return 1;
	}
	if (Local_718 != 14)
	{
		if (func_308(func_309(VEHICLE::_0x1E8A921112891651(((*Global_1425371)[Local_718 /*373*/])->f_1), 1)))
		{
			return 1;
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(Local_718.f_1[0 /*22*/])) && func_308(func_309(ENTITY::GET_ENTITY_COORDS(&(Local_718.f_1[0 /*22*/]), true, false), 1)))
		{
			return 1;
		}
		if (Local_718.f_1102 > 0)
		{
			iVar0 = Local_718.f_1102;
		}
		else if (Local_718.f_1098 > 0)
		{
			iVar0 = (Local_718.f_1098 - 1);
		}
		if (iVar0 > 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(Local_718.f_1[Local_718.f_1102 /*22*/])) && func_308(func_309(ENTITY::GET_ENTITY_COORDS(&(Local_718.f_1[Local_718.f_1102 /*22*/]), true, false), 1)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_205(int iParam0)
{
	switch (iParam0)
	{
		case joaat("northcoalcar01x"):
		case joaat("northsteamer01x"):
		case joaat("privatesteamer01x"):
		case joaat("wintercoalcar"):
		case joaat("privatecoalcar01x"):
		case joaat("wintersteamer"):
			return 0;
		case joaat("privateboxcar01x"):
		case -321394418:
		case joaat("privateflatcar01x"):
		case joaat("privateboxcar04x"):
		case joaat("armoredcar03x"):
		case joaat("privatearmoured"):
		case joaat("midlandboxcar05x"):
		case joaat("privateboxcar02x"):
		case 1308722738:
		case joaat("privatebaggage01x"):
			return 1;
		case joaat("northpassenger03x"):
		case -1032231746:
		case joaat("privateobservationcar"):
		case joaat("privatepassenger01x"):
		case joaat("privatedining01x"):
		case joaat("northpassenger01x"):
		case joaat("privateopensleeper02x"):
			return 2;
		case joaat("caboose01x"):
			return 3;
		default:
			break;
	}
	return -1;
}

int func_206(int iParam0)
{
	switch (iParam0)
	{
		case -1032231746:
		case joaat("privateobservationcar"):
		case joaat("privatepassenger01x"):
		case joaat("privatedining01x"):
		case joaat("northpassenger01x"):
		case joaat("privateopensleeper02x"):
			return 0;
		case joaat("northpassenger03x"):
			return 1;
		default:
			break;
	}
	return -1;
}

void func_207(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_208(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	MISC::_0x2FCD528A397E5C88(iParam0, iVar0);
}

char* func_209(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SCRIPT_PROC@ROBBERIES@TRAIN@ROB_PASSENGERS@LONG_ARMS";
		case 1:
			return "SCRIPT_PROC@ROBBERIES@TRAIN@ROB_PASSENGERS@PISTOLS";
		default:
			break;
	}
	return "SCRIPT_PROC@ROBBERIES@TRAIN@ROB_PASSENGERS@LONG_ARMS";
	return "";
}

void func_210(char* sParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY((*uParam1)[iVar0 /*8*/]))
		{
			StringCopy((*uParam1)[iVar0 /*8*/], sParam0, 64);
			STREAMING::REQUEST_ANIM_DICT((*uParam1)[iVar0 /*8*/]);
			return;
		}
		iVar0++;
	}
}

bool func_211(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_212(var uParam0, bool bParam1)
{
	vector3 vVar0;

	vVar0 = { *uParam0 };
	vVar0.f_2 = (vVar0.z + 5f);
	if (bParam1)
	{
		if (!func_310(&vVar0, 50, 10, 0))
		{
		}
		else
		{
			*uParam0 = { vVar0 };
		}
	}
}

int func_213(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

float func_214(float fParam0)
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

int func_215(var uParam0, int iParam1)
{
	if ((uParam0->f_1[iParam1 /*22*/])->f_6 == 1)
	{
		if (MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) >= 0.6f)
		{
			return 0;
		}
	}
	return 1;
}

int func_216(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_1[iParam1 /*22*/])))
	{
		if (uParam0->f_1099 < 45 && (uParam0->f_1[iParam1 /*22*/])->f_8 < 8)
		{
			if (!ITEMSET::IS_ITEMSET_VALID(iLocal_601))
			{
				iLocal_601 = ITEMSET::CREATE_ITEMSET(true);
			}
			ITEMSET::_0x20A4BF0E09BEE146(iLocal_601);
			iVar2 = VEHICLE::_0x0E558D3A49D759D6(&(uParam0->f_1[iParam1 /*22*/]), iLocal_601);
			iVar4 = VEHICLE::_0x2963B5C1637E8A27(&(uParam0->f_1[iParam1 /*22*/]));
			if (ENTITY::DOES_ENTITY_EXIST(iVar4))
			{
				func_311(iVar4, iLocal_601);
				iVar2++;
			}
			if ((func_312(iLocal_603, iParam1) || func_43(uLocal_716, 4096)) || func_43(uLocal_716, 1048576))
			{
				ENTITY::_0x119A5714578F4E05(&(uParam0->f_1[iParam1 /*22*/]), 0);
				func_120(uParam0, iParam1, 0);
			}
			if (iVar2 <= (uParam0->f_1[iParam1 /*22*/])->f_8)
			{
				if (ITEMSET::IS_ITEMSET_VALID(iLocal_601))
				{
					ITEMSET::_0x20A4BF0E09BEE146(iLocal_601);
				}
				return (uParam0->f_1[iParam1 /*22*/])->f_8;
			}
			iVar1 = 0;
			while (iVar1 < iVar2)
			{
				iVar5 = MISC::_0x3FFB15534067DCD4(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, iLocal_601));
				if (!ENTITY::IS_ENTITY_DEAD(iVar5))
				{
					if (PED::IS_PED_HUMAN(iVar5))
					{
						if (iVar5 == Global_35)
						{
						}
						else if (!LAW::_0x40851BCC33ACD9AB(iVar5) && !LAW::_0x0EAF918F751F27BA(iVar5))
						{
							if (!func_313(&iVar5))
							{
								if (uParam0->f_1099 >= 45)
								{
									if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar5))
									{
										ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar5, true, false);
									}
									func_84(&iVar5);
									Jump @520; //curOff = 363
								}
								else if ((uParam0->f_1[iParam1 /*22*/])->f_8 >= 8)
								{
									if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar5))
									{
										ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar5, true, false);
									}
									func_84(&iVar5);
								}
								else
								{
									iVar3 = (uParam0->f_1[iParam1 /*22*/])->f_8;
									uParam0->f_310[uParam0->f_1099 /*14*/] = iVar5;
									(uParam0->f_1[iParam1 /*22*/])->f_11[iVar3] = uParam0->f_1099;
									func_34(&((uParam0->f_1[iParam1 /*22*/])->f_4), 4);
									iVar0++;
									(uParam0->f_1[iParam1 /*22*/])->f_8++;
									uParam0->f_1099++;
								}
								iVar1++;
								if (ITEMSET::IS_ITEMSET_VALID(iLocal_601))
								{
									ITEMSET::_0x20A4BF0E09BEE146(iLocal_601);
								}
								Jump @561; //curOff = 546
								iVar0 = (uParam0->f_1[iParam1 /*22*/])->f_8;
								if (ITEMSET::IS_ITEMSET_VALID(iLocal_601))
								{
									ITEMSET::_0x20A4BF0E09BEE146(iLocal_601);
								}
								return iVar0;
							}
						}
					}
				}
			}
		}
	}

void func_217(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < (Local_718.f_1[iParam0 /*22*/])->f_8)
	{
		iVar1 = &(Local_718.f_1[iParam0 /*22*/])->f_11[iVar0];
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(&(Local_718.f_310[iVar1 /*14*/]), true))
		{
		}
		else
		{
			if (func_11((Local_718.f_310[iVar1 /*14*/])->f_7, 16))
			{
				func_74(&((Local_718.f_310[iVar1 /*14*/])->f_7), 16);
			}
			if (func_314(iParam0, iVar0))
			{
				func_282(iParam0, iVar0);
			}
		}
		iVar0++;
	}
}

bool func_218(int iParam0)
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

void func_219(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 && !func_218(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_315(*uParam0);
	if (((*Global_1945938)[iVar0 /*18*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && iParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_316(iVar0);
	*uParam0 = 0;
}

int func_220(int iParam0)
{
	if (func_1(iParam0))
	{
		return VEHICLE::_0xC29996A337BDD099(((*Global_1425371)[iParam0 /*373*/])->f_1);
	}
	return 0;
}

float func_221(int iParam0, vector3 vParam1, bool bParam4)
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
	return func_317(vVar0, vParam1);
}

float func_222(int iParam0, int iParam1, bool bParam2)
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
	return func_317(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
}

bool func_223(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_224(var uParam0)
{
	if (!func_125(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_318(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_301() - uParam0->f_1);
}

int func_225(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (PED::IS_PED_IN_VEHICLE(iParam0, iParam1, bParam2))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_226(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return 0;
	}
	if (!func_148(&(Local_718.f_310[iParam1 /*14*/]), (Local_718.f_1[iParam0 /*22*/])->f_1, 1, 0))
	{
		return 0;
	}
	if ((Local_718.f_310[iParam1 /*14*/])->f_4 > 1)
	{
		return 0;
	}
	if (func_11((Local_718.f_310[iParam1 /*14*/])->f_7, 2))
	{
		return 0;
	}
	return 1;
}

int func_227(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = &(Local_718.f_1[iParam0 /*22*/])->f_11[iParam1];
	if (iVar0 < 0)
	{
		return 0;
	}
	if (!func_319(&(Local_718.f_310[iVar0 /*14*/]), 0))
	{
		return 0;
	}
	if ((Local_718.f_310[iVar0 /*14*/])->f_3 == 1)
	{
		return 0;
	}
	if (LAW::_0x0EAF918F751F27BA(&(Local_718.f_310[iVar0 /*14*/])))
	{
		return 0;
	}
	return 1;
}

int func_228(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(iParam0, iParam1);
	if (iVar0 == iParam2)
	{
		if (func_320())
		{
			iVar0 = (iVar0 - 1);
		}
		else
		{
			iVar0++;
		}
		if (iVar0 < iParam0)
		{
			iVar0 = iParam0;
		}
		else if (iVar0 >= iParam1)
		{
			iVar0 = (iParam1 - 1);
		}
		if (iVar0 == iParam0 && iParam0 == iParam2)
		{
			iVar0++;
		}
		else if (iVar0 == (iParam1 - 1) && (iParam1 - 1) == iParam2)
		{
			iVar0 = (iVar0 - 1);
		}
		if (iVar0 < iParam0 || iVar0 >= iParam1)
		{
			iVar0 = func_321(func_320(), iParam0, (iParam1 - 1));
		}
	}
	return iVar0;
}

int func_229(int iParam0, int iParam1, char* sParam2, var uParam3, float fParam4, var uParam5, bool bParam6, var uParam7, var uParam8, bool bParam9, var uParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, var uParam15)
{
	bool bVar0;
	float fVar1;
	int iVar2;
	struct<8> Var3;

	uParam5 = uParam5;
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
		if (func_175())
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
				if (func_322(iParam0, 1, 1) > fParam4)
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
			fVar1 = func_323(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || uParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_81(&uLocal_0);
			if (!bVar0 && uParam10)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_324(iParam0, iParam1, fVar1, bParam13))
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
				Var3.f_6 = uParam15;
				Var3.f_2 = uParam5;
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
				iVar2 = func_321(func_325(iParam0, sParam2, iParam11, iParam1, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0, uParam5, uParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

int func_230(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	if (!func_43(*uParam1, 64))
	{
		return 0;
	}
	if (func_43(*uParam1, 256))
	{
		return 0;
	}
	if (iParam2 < 0)
	{
		return 0;
	}
	if ((uParam0->f_1[iParam2 /*22*/])->f_8 < 1)
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	if (func_43(*uParam1, 8))
	{
		return 0;
	}
	if (bParam3)
	{
		return 1;
	}
	if (func_172(uParam1, 0))
	{
		return 0;
	}
	return 1;
}

void func_231(int iParam0, int iParam1)
{
	if (iParam0 > 1)
	{
		if (iParam1 == 0)
		{
			func_134(Global_35, Global_35, "ROB_WEALTHY_GROUP", 0, -1082130432, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
		}
		else
		{
			func_134(Global_35, Global_35, "ROB_GROUP", 0, -1082130432, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
		}
	}
	else if (iParam0 > 0)
	{
		func_134(Global_35, Global_35, "ROB_GENERAL", 0, -1082130432, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
	}
}

void func_232(var uParam0)
{
	func_12(uParam0, 4096, 1);
	func_34(&(Global_1392581->f_3), 4);
	func_89(2, 1, 0);
	func_89(1, 1, 0);
}

void func_233(var uParam0, int iParam1)
{
	if (uParam0->f_16 != 0 || *iParam1 != 0)
	{
		Global_1935630->f_30 = 0;
		Global_1935630->f_31 = 0;
		Global_1935630->f_25 = 0;
		Global_1935630->f_39 = 0;
		uParam0->f_8 = func_326();
		PLAYER::_0xEACEBAAE0A33FB3F(PLAYER::PLAYER_ID());
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_5 = 0;
	uParam0->f_10 = 0;
	func_327(uParam0, 0);
	*iParam1 = 0;
	uParam0->f_16 = 0;
}

void func_234(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int* iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, func_171(), 0);
	func_14(uParam4, 134217728);
	HUD::_0x8BC7C1F929D07BF3(724769646);
	PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, 0, 0);
	TASK::OPEN_SEQUENCE_TASK(&iVar3);
	if (!func_328())
	{
		iVar0 = func_329(uParam5, 1);
	}
	else
	{
		iVar0 = func_330(Global_35, 0, 1, 0);
	}
	if (func_201(iVar0))
	{
		if (WEAPON::_0x0556E9D2ECF39D01(iVar0))
		{
			iVar1 = 0;
		}
		else
		{
			iVar1 = 1;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iVar2, 0, -1082130432, -1082130432, -1082130432);
		}
		TASK::TASK_PLAY_ANIM(0, func_209(iVar1), func_331(iVar1), 2f, -2f, -1, 67108880, 0, 0, 65536, 0, 0, 0);
	}
	TASK::CLOSE_SEQUENCE_TASK(iVar3);
	TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar3);
	TASK::CLEAR_SEQUENCE_TASK(&iVar3);
	func_122(uParam6, 0, 0, 1, 0);
	func_332(iParam7, 1);
	func_81((*uParam2)[15 /*3*/]);
	func_12(uParam3, 134217728, 1);
	func_12(uParam3, 512, 1);
	func_34(&((uParam0->f_1[iParam1 /*22*/])->f_4), 2);
}

void func_235(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		VEHICLE::_0xCBF88256E44D5D39(iParam0, 1);
		ENTITY::SET_CAN_AUTO_VAULT_ON_ENTITY(iParam0, true);
		ENTITY::SET_CAN_CLIMB_ON_ENTITY(iParam0, true);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iParam0, true);
		AITRANSPORT::_0xBA8818212633500A(iParam0, 0, 0);
	}
}

void func_236(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (func_333())
	{
		if (func_125((*uParam2)[19 /*3*/]))
		{
			func_121((*uParam2)[19 /*3*/]);
		}
		return;
	}
	if (PED::IS_PED_SHOOTING(Global_35))
	{
		LAW::_0x785177E4D57D7389(PLAYER::GET_PLAYER_INDEX(), 1343354387, 0, 0, -1);
		if (!func_125((*uParam2)[19 /*3*/]))
		{
			func_81((*uParam2)[19 /*3*/]);
		}
	}
	if (!func_43(*uParam1, 32))
	{
		if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(&(iParam0->f_1[iParam3 /*22*/]), true, false), (19f / 2f), true))
		{
			func_12(uParam1, 32, 1);
		}
	}
}

void func_237(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (!func_43(*uParam1, 1048576))
	{
		if (func_11((iParam0->f_1[iParam3 /*22*/])->f_4, 256))
		{
			iVar1 = 0;
			while (iVar1 < (iParam0->f_1[iParam3 /*22*/])->f_8)
			{
				iVar0 = &(iParam0->f_1[iParam3 /*22*/])->f_11[iVar1];
				if ((iVar0 >= 0 && (iParam0->f_310[iVar0 /*14*/])->f_3 == 1) && PED::IS_PED_SHOOTING(&(iParam0->f_310[iVar0 /*14*/])))
				{
					func_12(uParam1, 1048576, 1);
					if (!func_125((*uParam2)[19 /*3*/]))
					{
						func_81((*uParam2)[19 /*3*/]);
					}
				}
				iVar1++;
			}
		}
	}
}

void func_238(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (func_75(uParam2, 268435456))
	{
		if (func_11((iParam0->f_1[iParam3 /*22*/])->f_4, 32768))
		{
			func_74(&((iParam0->f_1[iParam3 /*22*/])->f_4), 32768);
		}
		return;
	}
	if (func_334(iParam0, uParam1, uParam2, iParam3))
	{
		if (func_335(iParam0, iParam3))
		{
			func_34(&((iParam0->f_1[iParam3 /*22*/])->f_4), 32768);
		}
		else
		{
			func_74(&((iParam0->f_1[iParam3 /*22*/])->f_4), 32768);
		}
	}
}

void func_239(int iParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3((Local_718.f_1[iParam0 /*22*/])->f_1) && FIRE::_0xE24822A4CFC9107A(-1, (Local_718.f_1[iParam0 /*22*/])->f_1))
	{
		LAW::_0x785177E4D57D7389(PLAYER::GET_PLAYER_INDEX(), -102241052, 0, 0, -1);
		LAW::_0x785177E4D57D7389(PLAYER::GET_PLAYER_INDEX(), 1420320220, 0, 0, -1);
		func_174(1);
		LAW::_0xEDFC6C1FD1C964F5(PLAYER::GET_PLAYER_INDEX(), 1685924442, 0, 0, 0, 0, 0, 0, 0);
		if (!LAW::_0xAD401C63158ACBAA(PLAYER::PLAYER_ID()))
		{
			if (func_175())
			{
				LAW::_0x75CBF20BA47E4F89(Global_36, 0);
			}
			else
			{
				LAW::_0x75CBF20BA47E4F89(Global_36, -867256593);
			}
		}
		LAW::_0x987BE590FB9D41E5(1);
		LAW::_0xDCF12B89624AAC96(1);
	}
}

int func_240(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = -1;
	iVar2 = -1;
	iVar0 = iParam0;
	while (iVar0 >= 1)
	{
		if (func_11((Local_718.f_1[iVar0 /*22*/])->f_4, 2))
		{
			iVar1 = MISC::ABSI((iParam0 - iVar0));
			Jump @87; //curOff = 51
		}
		else if ((Local_718.f_1[iVar0 /*22*/])->f_8 == 0)
		{
			iVar3++;
		}
		iVar0 = (iVar0 + -1);
	}
	if (iVar1 > -1 && iVar3 > 0)
	{
		iVar1 = (iVar1 + iVar3 * 1);
	}
	iVar3 = 0;
	iVar0 = iParam0;
	while (iVar0 <= (Local_718.f_1098 - 1))
	{
		if (func_11((Local_718.f_1[iVar0 /*22*/])->f_4, 2))
		{
			iVar2 = MISC::ABSI((iParam0 - iVar0));
			Jump @198; //curOff = 162
		}
		else if ((Local_718.f_1[iVar0 /*22*/])->f_8 == 0)
		{
			iVar3++;
		}
		iVar0++;
	}
	if (iVar2 > -1 && iVar3 > 0)
	{
		iVar2 = (iVar2 + iVar3 * 1);
	}
	if (iVar1 >= 0 && iVar2 < 0)
	{
		return iVar1;
	}
	else if (iVar2 >= 0 && iVar1 < 0)
	{
		return iVar2;
	}
	return func_321(iVar1 < iVar2, iVar1, iVar2);
}

void func_241(var uParam0, int iParam1, int iParam2)
{
	func_267(&((uParam0->f_310[iParam1 /*14*/])->f_1));
	(uParam0->f_310[iParam1 /*14*/])->f_2 = 0;
	(uParam0->f_310[iParam1 /*14*/])->f_4 = 0;
	(uParam0->f_310[iParam1 /*14*/])->f_7 = 0;
	(uParam0->f_310[iParam1 /*14*/])->f_3 = -1;
	(uParam0->f_310[iParam1 /*14*/])->f_10 = 0f;
	(uParam0->f_310[iParam1 /*14*/])->f_9 = -1f;
	(uParam0->f_310[iParam1 /*14*/])->f_8 = -1;
	(uParam0->f_310[iParam1 /*14*/])->f_11 = -1;
	(uParam0->f_310[iParam1 /*14*/])->f_13 = 0;
	(uParam0->f_310[iParam1 /*14*/])->f_12 = 0;
	(uParam0->f_310[iParam1 /*14*/])->f_6 = 0;
	PED::SET_PED_KEEP_TASK(&(uParam0->f_310[iParam1 /*14*/]), true);
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0->f_310[iParam1 /*14*/]);
	uParam0->f_310[iParam1 /*14*/] = 0;
	(uParam0->f_1[iParam2 /*22*/])->f_8 = ((uParam0->f_1[iParam2 /*22*/])->f_8 - 1);
	uParam0->f_1099 = (uParam0->f_1099 - 1);
}

void func_242(var uParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(&(uParam0->f_310[iParam1 /*14*/])))
	{
		(uParam0->f_310[iParam1 /*14*/])->f_9 = func_322(&(uParam0->f_310[iParam1 /*14*/]), 1, 1);
	}
	else
	{
		(uParam0->f_310[iParam1 /*14*/])->f_9 = 9999.9f;
	}
}

void func_243(int iParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!func_125(vLocal_627[8 /*3*/]))
	{
		func_81(vLocal_627[8 /*3*/]);
	}
	if (!func_11((Local_718.f_310[iParam1 /*14*/])->f_7, 512))
	{
		if (func_11((Local_718.f_1[iParam0 /*22*/])->f_4, 2))
		{
			func_34(&((Local_718.f_310[iParam1 /*14*/])->f_7), 512);
			func_34(&((Local_718.f_310[iParam1 /*14*/])->f_7), 2048);
		}
		else if (func_43(uLocal_716, 8388608))
		{
			func_34(&((Local_718.f_310[iParam1 /*14*/])->f_7), 512);
			func_34(&((Local_718.f_310[iParam1 /*14*/])->f_7), 2048);
		}
		else if (func_127(vLocal_627[8 /*3*/], 3f))
		{
			fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
			iVar1 = (Local_718.f_1[iParam0 /*22*/])->f_21;
			if (iVar1 == 0)
			{
				func_34(&((Local_718.f_310[iParam1 /*14*/])->f_7), 512);
				func_34(&((Local_718.f_310[iParam1 /*14*/])->f_7), 2048);
			}
			else
			{
				fVar2 = (1f / BUILTIN::TO_FLOAT(iVar1));
				if (fVar0 < fVar2)
				{
					func_34(&((Local_718.f_310[iParam1 /*14*/])->f_7), 512);
					func_34(&((Local_718.f_310[iParam1 /*14*/])->f_7), 2048);
					func_121(vLocal_627[8 /*3*/]);
				}
			}
		}
	}
}

int func_244(int iParam0, int iParam1)
{
	if (!func_11((Local_718.f_310[iParam1 /*14*/])->f_7, 128) && func_336(&(Local_718.f_310[iParam1 /*14*/]), Global_35))
	{
		func_34(&((Local_718.f_1[iParam0 /*22*/])->f_4), 8);
		func_12(&uLocal_716, 8388608, 1);
		func_34(&((Local_718.f_310[iParam1 /*14*/])->f_7), 128);
		return 1;
	}
	return 0;
}

void func_245(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < uParam0->f_1098)
	{
		if (func_148(&(uParam0->f_310[iParam1 /*14*/]), (uParam0->f_1[iVar1 /*22*/])->f_1, 0, 0))
		{
			iVar0 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	if (iParam2 >= 0)
	{
		if (iParam2 > iVar0)
		{
			iVar2 = iVar0;
			iVar3 = iParam2;
		}
		else
		{
			iVar2 = iParam2;
			iVar3 = iVar0;
		}
		iVar1 = iVar2;
		while (iVar1 <= iVar3)
		{
			func_337(uParam0, iVar1);
			iVar1++;
		}
	}
	else
	{
		func_337(uParam0, iVar1);
	}
}

void func_246(var uParam0, int iParam1)
{
	if (iParam1 != uParam0->f_4)
	{
		uParam0->f_4 = iParam1;
	}
}

int func_247(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	int iVar3;

	if (!func_125((*uParam2)[9 /*3*/]))
	{
		func_81((*uParam2)[9 /*3*/]);
	}
	if (!func_11((uParam0->f_1[iParam3 /*22*/])->f_4, 2) && !(func_43(*uParam1, 1024) || func_43(*uParam1, 32768)))
	{
		return 0;
	}
	iVar0 = ((uParam0->f_1[iParam3 /*22*/])->f_8 - (uParam0->f_1[iParam3 /*22*/])->f_9);
	if (iVar0 <= 3 && !(func_43(*uParam1, 1024) || func_43(*uParam1, 32768)))
	{
		return 0;
	}
	if ((uParam0->f_310[iParam4 /*14*/])->f_9 < 19f && func_43(*uParam1, 64))
	{
		return 0;
	}
	if (((uParam0->f_310[iParam4 /*14*/])->f_4 == 11 || (uParam0->f_310[iParam4 /*14*/])->f_4 == 12) || (uParam0->f_310[iParam4 /*14*/])->f_4 == 9)
	{
		return 0;
	}
	bVar1 = func_338(uParam0, uParam1, iParam3, iParam4);
	if ((!func_43(*uParam1, 1024) && !bVar1) && (((iParam5 == -1 || iParam5 == iParam3) || iParam3 == iParam5 + 1) || iParam3 == (iParam5 - 1)))
	{
		return 0;
	}
	if ((func_43(*uParam1, 1024) || func_43(*uParam1, 32768)) || func_172(uParam1, 1))
	{
		fVar2 = 4f;
	}
	else if ((func_43(*uParam1, 8388608) || func_11((uParam0->f_1[iParam3 /*22*/])->f_4, 8)) || bVar1)
	{
		fVar2 = 15f;
	}
	else if (func_11((uParam0->f_1[iParam3 /*22*/])->f_4, 64))
	{
		fVar2 = 20f;
	}
	else if (iParam5 > iParam3 + 1 || iParam5 < (iParam3 - 1))
	{
		fVar2 = 15f;
	}
	else
	{
		fVar2 = 25f;
	}
	if (iParam5 != -1)
	{
		iVar3 = MISC::ABSI((iParam5 - iParam3));
		if (iVar3 > 0)
		{
			iVar3 = (iVar3 - 1);
		}
		fVar2 = (fVar2 - (fVar2 * (0.33f * IntToFloat(iVar3))));
	}
	if (!func_127((*uParam2)[9 /*3*/], fVar2))
	{
		return 0;
	}
	func_121((*uParam2)[9 /*3*/]);
	(uParam0->f_1[iParam3 /*22*/])->f_9++;
	func_34(&((uParam0->f_1[iParam3 /*22*/])->f_4), 64);
	return 1;
}

int func_248(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if ((uParam0->f_310[iParam1 /*14*/])->f_3 == 0)
	{
		return 0;
	}
	if ((iParam3 == -1 || iParam2 > iParam3 + 1) || iParam2 < (iParam3 - 1))
	{
		return 1;
	}
	if (!ENTITY::IS_ENTITY_ON_SCREEN(&(uParam0->f_310[iParam1 /*14*/])))
	{
		return 1;
	}
	return 0;
}

void func_249(var uParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	if (!TASK::_0x841475AC96E794D1((uParam0->f_310[iParam1 /*14*/])->f_6))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(&(uParam0->f_310[iParam1 /*14*/]), true, false) };
		(uParam0->f_310[iParam1 /*14*/])->f_6 = TASK::_0xF533D68FF970D190(vVar0, 547706868, 4f, 1, 0);
	}
	if (TASK::_0x841475AC96E794D1((uParam0->f_310[iParam1 /*14*/])->f_6))
	{
		if (func_11((uParam0->f_310[iParam1 /*14*/])->f_7, 256))
		{
			TASK::_TASK_USE_SCENARIO_POINT_2(&(uParam0->f_310[iParam1 /*14*/]), Global_35, (uParam0->f_310[iParam1 /*14*/])->f_6, 0, -1, 0, -1f, 0);
		}
		else
		{
			TASK::_TASK_USE_SCENARIO_POINT(&(uParam0->f_310[iParam1 /*14*/]), (uParam0->f_310[iParam1 /*14*/])->f_6, 0, -1, 0, 1, 0, 0, -1082130432, 0);
		}
	}
}

void func_250(var uParam0, int iParam1)
{
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(&(uParam0->f_310[iParam1 /*14*/]), false, 0f);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(uParam0->f_310[iParam1 /*14*/]), true);
	PED::SET_PED_CONFIG_FLAG(&(uParam0->f_310[iParam1 /*14*/]), 178, false);
	PED::SET_PED_CONFIG_FLAG(&(uParam0->f_310[iParam1 /*14*/]), 315, true);
	PED::SET_PED_CONFIG_FLAG(&(uParam0->f_310[iParam1 /*14*/]), 297, false);
	PED::SET_PED_CONFIG_FLAG(&(uParam0->f_310[iParam1 /*14*/]), 301, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(&(uParam0->f_310[iParam1 /*14*/]), 17, true);
	PED::SET_PED_FLEE_ATTRIBUTES(&(uParam0->f_310[iParam1 /*14*/]), 32768, true);
	PED::SET_PED_CONFIG_FLAG(&(uParam0->f_310[iParam1 /*14*/]), 162, false);
	if ((uParam0->f_310[iParam1 /*14*/])->f_3 != 1)
	{
		PED::_0xAE6004120C18DF97(&(uParam0->f_310[iParam1 /*14*/]), 0, 0);
		func_339(uParam0, iParam1);
	}
	if ((uParam0->f_310[iParam1 /*14*/])->f_3 == 2)
	{
		PED::_0xD355E2F1BB41087E(&(uParam0->f_310[iParam1 /*14*/]), 0.5f);
		PED::SET_PED_CONFIG_FLAG(&(uParam0->f_310[iParam1 /*14*/]), 138, true);
		PED::_0xC163DAC52AC975D3(&(uParam0->f_310[iParam1 /*14*/]), 32);
		PED::_0xC163DAC52AC975D3(&(uParam0->f_310[iParam1 /*14*/]), 1);
		PED::_0xC163DAC52AC975D3(&(uParam0->f_310[iParam1 /*14*/]), 31);
		PED::_0xC163DAC52AC975D3(&(uParam0->f_310[iParam1 /*14*/]), 6);
		PED::_0xC163DAC52AC975D3(&(uParam0->f_310[iParam1 /*14*/]), 5);
		PED::_0xC163DAC52AC975D3(&(uParam0->f_310[iParam1 /*14*/]), 26);
		PED::_0xC163DAC52AC975D3(&(uParam0->f_310[iParam1 /*14*/]), 33);
		PED::_0xC163DAC52AC975D3(&(uParam0->f_310[iParam1 /*14*/]), 15);
		PED::_0xC163DAC52AC975D3(&(uParam0->f_310[iParam1 /*14*/]), 27);
		PED::_0xC163DAC52AC975D3(&(uParam0->f_310[iParam1 /*14*/]), 28);
		PED::_0xC163DAC52AC975D3(&(uParam0->f_310[iParam1 /*14*/]), 3);
		PED::_0xC163DAC52AC975D3(&(uParam0->f_310[iParam1 /*14*/]), 14);
		PED::_0xC163DAC52AC975D3(&(uParam0->f_310[iParam1 /*14*/]), 16);
		PED::SET_PED_CONFIG_FLAG(&(uParam0->f_310[iParam1 /*14*/]), 1, true);
	}
	PED::SET_RAGDOLL_BLOCKING_FLAGS(&(uParam0->f_310[iParam1 /*14*/]), 24592);
	PED::_0x52A24D8A1DA89658(&(uParam0->f_310[iParam1 /*14*/]), 2, 1);
	PED::SET_PED_CONFIG_FLAG(&(uParam0->f_310[iParam1 /*14*/]), 186, false);
}

int func_251(int iParam0, int iParam1)
{
	if (VEHICLE::_0x2963B5C1637E8A27(&(Local_718.f_1[0 /*22*/])) == &Local_718.f_310[iParam1 /*14*/])
	{
		return 1;
	}
	if ((Local_718.f_310[iParam1 /*14*/])->f_3 == 0)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 1;
	}
	return 0;
}

void func_252(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, int* iParam6, var uParam7, var uParam8, var uParam9, int iParam10)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	if (!func_340(uParam0, iParam3, iParam4))
	{
		*uParam8 = 0;
		return;
	}
	if (iParam3 >= 45)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(&(uParam0->f_310[iParam3 /*14*/])))
	{
		return;
	}
	if (iParam4 < 0)
	{
		if (*uParam8 != 1)
		{
			func_341(uParam7, iParam6);
			func_342(uParam7, 0);
			*uParam8 = 1;
		}
	}
	if (func_11((uParam0->f_310[iParam3 /*14*/])->f_7, 2048))
	{
		func_341(uParam7, iParam6);
		bVar0 = (func_43(*uParam1, 2048) || func_11((uParam0->f_310[iParam3 /*14*/])->f_7, 134217728));
		if (func_11((uParam0->f_310[iParam3 /*14*/])->f_7, 268435456))
		{
			func_343(uParam7, bVar0);
		}
		else if (func_11((uParam0->f_310[iParam3 /*14*/])->f_7, 32768))
		{
			func_344(uParam7, bVar0);
		}
		else
		{
			func_342(uParam7, bVar0);
		}
		func_74(&((uParam0->f_310[iParam3 /*14*/])->f_7), 2048);
	}
	iVar1 = func_345(1, 0, 0) | 2048 | 16384 | 256;
	iVar2 = func_346(uParam0->f_310[iParam3 /*14*/], iParam6, 19f, uParam7, 0, 3, 0, 0, iVar1, 0, 0, 2, (uParam0->f_310[iParam3 /*14*/])->f_9);
	if (iVar2 != -1)
	{
		func_34(&((uParam0->f_310[iParam3 /*14*/])->f_7), 134217728);
		func_34(&((uParam0->f_310[iParam3 /*14*/])->f_7), 2048);
	}
	switch (iVar2)
	{
		case 0:
			func_341(uParam7, iParam6);
			func_45(uParam0, iParam2);
			if (func_11((uParam0->f_310[iParam3 /*14*/])->f_7, 32768))
			{
				func_134(Global_35, &(uParam0->f_310[iParam3 /*14*/]), "DEFUSE_LEFT_PROPERTY", 0, -1082130432, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				func_81((*uParam5)[3 /*3*/]);
				func_34(&((uParam0->f_310[iParam3 /*14*/])->f_7), 268435456);
				func_74(&((uParam0->f_310[iParam3 /*14*/])->f_7), 134217728);
			}
			else if (!func_11((uParam0->f_310[iParam3 /*14*/])->f_7, 512))
			{
				if (func_320())
				{
					func_134(Global_35, &(uParam0->f_310[iParam3 /*14*/]), "GREET_MALE", 0, -1082130432, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				}
				else
				{
					func_134(Global_35, &(uParam0->f_310[iParam3 /*14*/]), "GREET_GENERAL", 0, -1082130432, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				}
				func_246(uParam0->f_310[iParam3 /*14*/], 8);
				func_34(&((uParam0->f_310[iParam3 /*14*/])->f_7), 4096);
			}
			break;
		case 1:
			if (!func_11((uParam0->f_310[iParam3 /*14*/])->f_7, 512))
			{
				func_341(uParam7, iParam6);
				func_45(uParam0, iParam2);
				if (PED::IS_PED_MALE(&(uParam0->f_310[iParam3 /*14*/])))
				{
					func_134(Global_35, &(uParam0->f_310[iParam3 /*14*/]), func_347(uParam0->f_310[iParam3 /*14*/]), 0, -1082130432, (uParam0->f_310[iParam3 /*14*/])->f_11, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				}
				else
				{
					func_134(Global_35, &(uParam0->f_310[iParam3 /*14*/]), func_347(uParam0->f_310[iParam3 /*14*/]), 0, -1082130432, (uParam0->f_310[iParam3 /*14*/])->f_11, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				}
				func_246(uParam0->f_310[iParam3 /*14*/], 8);
				func_34(&((uParam0->f_310[iParam3 /*14*/])->f_7), 8192);
			}
			break;
		case 2:
			func_329(&uVar3, 0);
			func_257(uParam0, uParam1, iParam4, uParam9, iParam10, 1, 0, 1);
			break;
	}
}

int func_253(var uParam0, int iParam1, var uParam2, int iParam3)
{
	bool bVar0;
	float fVar1;

	bVar0 = func_43(*uParam2, 64);
	fVar1 = 3f;
	if (func_333() && !bVar0)
	{
		fVar1 = (fVar1 / 2f);
	}
	if (iParam1 > -1 && !ENTITY::IS_ENTITY_DEAD(&(uParam0->f_310[iParam1 /*14*/])))
	{
		if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(&(uParam0->f_310[iParam1 /*14*/]), true, false), fVar1, true))
		{
			return 1;
		}
		if (MISC::_0xDC416CA762BC4F43(ENTITY::GET_ENTITY_COORDS(&(uParam0->f_310[iParam1 /*14*/]), true, false), fVar1, 1, 1) > 0)
		{
			return 1;
		}
	}
	if (!bVar0 || (bVar0 && iParam3))
	{
		if (MISC::_0x7A76104CC2CC69E8(&(uParam0->f_1[0 /*22*/]), 1, 1))
		{
			return 1;
		}
		if (ENTITY::_0x3EC28DA1FFAC9DDD(&(uParam0->f_1[0 /*22*/]), Global_35, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_254(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5)
{
	int iVar0;

	if ((uParam0->f_310[iParam1 /*14*/])->f_4 == 19)
	{
		return 0;
	}
	if (func_262(uParam0, iParam1, 10f, uParam2, uParam3, uParam4, iParam5))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false);
		if (*uParam3 != 8 || WEAPON::_0x705BE297EEBDB95D(iVar0))
		{
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_310[iParam1 /*14*/])) && PED::_0xE33F98BD76490ABC(&(uParam0->f_310[iParam1 /*14*/]), PLAYER::PLAYER_ID(), 0))
	{
		return 1;
	}
	if (func_11((uParam0->f_310[iParam1 /*14*/])->f_7, 512))
	{
		return 1;
	}
	if (func_172(uParam4, 1) && (iParam5 != -1 || func_348(&(uParam0->f_310[iParam1 /*14*/]), Global_35, 0, 1114636288, 0)))
	{
		return 1;
	}
	return 0;
}

void func_255(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	if (func_43(*uParam3, 67108864))
	{
		return;
	}
	if (*uParam2 != 0)
	{
		func_233(uParam1, uParam2);
	}
	TASK::_0xE7FA07624574B79A(&(uParam0->f_310[&(uParam0->f_1[0 /*22*/])->f_11[0] /*14*/]), Global_35, 3, 1, 0f, 1, 0, 0, 0);
	if (!func_43(*uParam3, 1024) && !func_338(uParam0, uParam3, 0, &((uParam0->f_1[0 /*22*/])->f_11[0])))
	{
		VEHICLE::_0x4182C037AA1F0091(&(uParam0->f_1[0 /*22*/]), 0);
		VEHICLE::_0x160C1B5AB48AB87C(&(uParam0->f_1[0 /*22*/]), 0f);
		VEHICLE::_0x787E43477746876F(&(uParam0->f_1[0 /*22*/]));
	}
	func_246(uParam0->f_310[&(uParam0->f_1[0 /*22*/])->f_11[0] /*14*/], 5);
	func_74(&((uParam0->f_310[iParam4 /*14*/])->f_7), 32768);
	func_74(&((uParam0->f_310[iParam4 /*14*/])->f_7), 65536);
	func_74(&((uParam0->f_310[iParam4 /*14*/])->f_7), 131072);
	func_12(uParam3, 67108864, 1);
}

int func_256(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 4:
		case 8:
		case 16:
		case 2048:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_257(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	PED::_0xAAB050DA48B57978(&(uParam0->f_310[&(uParam0->f_1[0 /*22*/])->f_11[0] /*14*/]), "Default_Panic", 0, -1, 4);
	if (bParam5 && (iParam7 || func_349(uParam0, uParam1, iParam2)))
	{
		func_350(uParam0);
	}
	if (!func_43(*uParam1, 64) && !bParam6)
	{
		func_255(uParam0, uParam3, iParam4, uParam1, &((uParam0->f_1[0 /*22*/])->f_11[0]));
		func_34(&((uParam0->f_310[&(uParam0->f_1[0 /*22*/])->f_11[0] /*14*/])->f_7), 512);
		func_34(&((uParam0->f_310[&(uParam0->f_1[0 /*22*/])->f_11[0] /*14*/])->f_7), 2048);
		return;
	}
	else
	{
		func_34(&((uParam0->f_310[&(uParam0->f_1[0 /*22*/])->f_11[0] /*14*/])->f_7), 2048);
		func_12(uParam1, 2048, 1);
		func_246(uParam0->f_310[&(uParam0->f_1[0 /*22*/])->f_11[0] /*14*/], 6);
	}
}

void func_258(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, var uParam5, bool bParam6)
{
	int iVar0;
	vector3 vVar1;
	char* sVar4;
	float fVar5;
	char* sVar6;
	char* sVar7;

	iVar0 = 0;
	if (VEHICLE::_0x2963B5C1637E8A27(&(uParam0->f_1[0 /*22*/])) == &uParam0->f_310[&(uParam0->f_1[0 /*22*/])->f_11[0] /*14*/])
	{
		if (iParam2 == 0)
		{
			vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(&(uParam0->f_1[0 /*22*/]), Global_36) };
			if (vVar1.z >= 1f)
			{
				iVar0 = 1;
			}
			iVar0 = 1;
		}
		else if (iParam2 == 1)
		{
			vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(&(uParam0->f_1[1 /*22*/]), Global_36) };
			if (vVar1.z >= 2f)
			{
				iVar0 = 1;
			}
		}
		else if (!bParam6 && (iParam2 == 2 || iParam2 == 3))
		{
			iVar0 = 1;
		}
	}
	if (bParam6)
	{
		if (iVar0 && func_127((*uParam1)[11 /*3*/], 1.5f))
		{
			if (!func_11((uParam0->f_310[&(uParam0->f_1[0 /*22*/])->f_11[0] /*14*/])->f_7, 32768))
			{
				sVar4 = func_351();
				if (*uParam0 == 2 || *uParam0 == 3)
				{
					sVar4 = "STOP_THAT";
				}
				func_134(&(uParam0->f_310[&(uParam0->f_1[0 /*22*/])->f_11[0] /*14*/]), Global_35, sVar4, 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
				func_34(&((uParam0->f_310[&(uParam0->f_1[0 /*22*/])->f_11[0] /*14*/])->f_7), 32768);
				func_34(&((uParam0->f_310[&(uParam0->f_1[0 /*22*/])->f_11[0] /*14*/])->f_7), 2048);
				func_81((*uParam1)[7 /*3*/]);
			}
			else if (!func_11((uParam0->f_310[&(uParam0->f_1[0 /*22*/])->f_11[0] /*14*/])->f_7, 65536))
			{
				fVar5 = 7.5f;
				if (func_11((uParam0->f_310[&(uParam0->f_1[0 /*22*/])->f_11[0] /*14*/])->f_7, 268435456) && !func_11((uParam0->f_310[&(uParam0->f_1[0 /*22*/])->f_11[0] /*14*/])->f_7, 67108864))
				{
					fVar5 = 8.5f;
				}
				if (func_127((*uParam1)[7 /*3*/], fVar5))
				{
					if (func_11((uParam0->f_310[&(uParam0->f_1[0 /*22*/])->f_11[0] /*14*/])->f_7, 268435456) && !func_11((uParam0->f_310[&(uParam0->f_1[0 /*22*/])->f_11[0] /*14*/])->f_7, 67108864))
					{
						func_134(&(uParam0->f_310[&(uParam0->f_1[0 /*22*/])->f_11[0] /*14*/]), Global_35, func_352(), 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
						func_34(&((uParam0->f_310[&(uParam0->f_1[0 /*22*/])->f_11[0] /*14*/])->f_7), 67108864);
					}
					else
					{
						func_134(&(uParam0->f_310[&(uParam0->f_1[0 /*22*/])->f_11[0] /*14*/]), Global_35, func_353(), 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
						func_34(&((uParam0->f_310[&(uParam0->f_1[0 /*22*/])->f_11[0] /*14*/])->f_7), 65536);
					}
					func_34(&((uParam0->f_310[&(uParam0->f_1[0 /*22*/])->f_11[0] /*14*/])->f_7), 2048);
					func_81((*uParam1)[7 /*3*/]);
				}
			}
			else if (func_127((*uParam1)[7 /*3*/], 8.5f))
			{
				func_255(uParam0, uParam3, iParam4, uParam5, &((uParam0->f_1[0 /*22*/])->f_11[0]));
				func_34(&((uParam0->f_310[&(uParam0->f_1[0 /*22*/])->f_11[0] /*14*/])->f_7), 2048);
			}
		}
	}
	else
	{
		if ((uParam0->f_310[&(uParam0->f_1[0 /*22*/])->f_11[0] /*14*/])->f_9 < 15f)
		{
			if (!func_354(&(uParam0->f_310[&(uParam0->f_1[0 /*22*/])->f_11[0] /*14*/]), 150319005))
			{
				TASK::TASK_LOOK_AT_ENTITY(&(uParam0->f_310[&(uParam0->f_1[0 /*22*/])->f_11[0] /*14*/]), Global_35, -1, 4, 51, 1);
			}
		}
		if (!func_125((*uParam1)[7 /*3*/]) && func_151(0, 1, &(uParam0->f_310[&(uParam0->f_1[0 /*22*/])->f_11[0] /*14*/]), 1))
		{
			func_81((*uParam1)[7 /*3*/]);
		}
		if (iVar0 && func_127((*uParam1)[7 /*3*/], 10f))
		{
			if (iParam2 == 2 || iParam2 == 3)
			{
				if (!func_11((uParam0->f_310[&(uParam0->f_1[0 /*22*/])->f_11[0] /*14*/])->f_7, 32768))
				{
					func_134(&(uParam0->f_310[&(uParam0->f_1[0 /*22*/])->f_11[0] /*14*/]), Global_35, func_355(), 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
					func_34(&((uParam0->f_310[&(uParam0->f_1[0 /*22*/])->f_11[0] /*14*/])->f_7), 32768);
					func_121((*uParam1)[7 /*3*/]);
				}
			}
			else if ((uParam0->f_310[&(uParam0->f_1[0 /*22*/])->f_11[0] /*14*/])->f_9 > 5f)
			{
				sVar6 = func_356();
				func_134(&(uParam0->f_310[&(uParam0->f_1[0 /*22*/])->f_11[0] /*14*/]), Global_35, sVar6, 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
				func_121((*uParam1)[7 /*3*/]);
			}
			else if ((uParam0->f_310[&(uParam0->f_1[0 /*22*/])->f_11[0] /*14*/])->f_9 < 15f)
			{
				if (!func_11((uParam0->f_310[&(uParam0->f_1[0 /*22*/])->f_11[0] /*14*/])->f_7, 65536))
				{
					func_134(&(uParam0->f_310[&(uParam0->f_1[0 /*22*/])->f_11[0] /*14*/]), Global_35, func_357(), 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
					func_121((*uParam1)[7 /*3*/]);
				}
				else
				{
					sVar7 = func_356();
					func_134(&(uParam0->f_310[&(uParam0->f_1[0 /*22*/])->f_11[0] /*14*/]), Global_35, sVar7, 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
					func_121((*uParam1)[7 /*3*/]);
				}
			}
		}
	}
}

void func_259(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	vector3 vVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(iParam1, false))
	{
		PED::_0x16F798A05BB9E3B5(iParam1);
		if (TASK::GET_SCRIPT_TASK_STATUS(iParam1, 518218985, 1) == 8)
		{
			func_358(iParam1);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam1, 32768, false);
			TASK::_TASK_SMART_FLEE_STYLE_PED(iParam1, Global_35, 3, 0, 1000f, 1000000, 0);
		}
		return;
	}
	if (!bParam4)
	{
		return;
	}
	if (func_359(uParam0, iParam3))
	{
		vVar0 = { func_360(uParam0) };
		if (func_213(vVar0))
		{
			return;
		}
		func_361(uParam0, iParam1, iParam2, iParam3, vVar0);
	}
}

void func_260(var uParam0, int iParam1)
{
	int iVar0;
	char* sVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_310[iParam1 /*14*/])))
	{
		return;
	}
	if (!func_11((uParam0->f_310[iParam1 /*14*/])->f_7, 512))
	{
		return;
	}
	if (!func_151(3f, 1, 0, 0))
	{
		return;
	}
	if (!func_125(&(uParam0->f_1112)))
	{
		func_362(&(uParam0->f_1112), 0);
		return;
	}
	if (func_127(&(uParam0->f_1112), 20f))
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 11);
		switch (iVar0)
		{
			case 0:
				sVar1 = "SCARED_HELP";
				break;
			case 1:
				sVar1 = "GENERIC_FRIGHTENED_HIGH";
				break;
			case 2:
				sVar1 = "GET_AWAY_FROM_ME";
				break;
			case 3:
				sVar1 = "STOP_THAT";
				break;
			case 4:
				sVar1 = "SICK_BASTARD";
				break;
			case 5:
				sVar1 = "PLEAD";
				break;
			case 6:
				sVar1 = "PANIC_HELP";
				break;
			case 7:
				sVar1 = "NEED_HELP";
				break;
			case 8:
				sVar1 = "LEAVE_ME";
				break;
			case 9:
				sVar1 = "GENERIC_SHOCKED_HIGH";
				break;
			case 10:
				sVar1 = "GENERIC_ANGRY_SHOUT";
				break;
			default:
				sVar1 = "GENERIC_CURSE_HIGH";
				break;
		}
		func_134(&(uParam0->f_310[iParam1 /*14*/]), Global_35, sVar1, 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
		func_81(&(uParam0->f_1112));
	}
}

void func_261(var uParam0)
{
	func_134(&(uParam0->f_310[&(uParam0->f_1[0 /*22*/])->f_11[0] /*14*/]), Global_35, "SCARED_HELP", 0, -1082130432, 0, 0, 0, 1, 0, 0, 1744022339, 0, 0, 0);
	VEHICLE::_0xCFE122EC635CC2B2(&(uParam0->f_1[0 /*22*/]), "DANGER", 0, 0);
}

int func_262(var uParam0, int iParam1, float fParam2, var uParam3, int iParam4, var uParam5, int iParam6)
{
	if (func_363(uParam0->f_310[iParam1 /*14*/], fParam2))
	{
		*iParam4 = 8;
		return 1;
	}
	else if (func_364(&(uParam0->f_310[iParam1 /*14*/]), 0, uParam3, iParam4, 0, 0) || ((uParam0->f_310[iParam1 /*14*/])->f_8 == iParam6 && func_365(&(uParam0->f_310[iParam1 /*14*/]), uParam3)))
	{
		if (*iParam4 == 256)
		{
			if (func_333())
			{
				return 0;
			}
			if ((((!func_43(*uParam5, 64) && (uParam0->f_310[iParam1 /*14*/])->f_8 >= 0) && (uParam0->f_310[iParam1 /*14*/])->f_8 < 14) && ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_1[(uParam0->f_310[iParam1 /*14*/])->f_8 /*22*/]))) && MISC::_0x970339EFA4FDE518(&(uParam0->f_1[(uParam0->f_310[iParam1 /*14*/])->f_8 /*22*/]), 1, 1) == 0)
			{
				func_233(uParam3, iParam4);
				return 0;
			}
		}
		else if (*iParam4 == 16384)
		{
			if (!func_172(uParam5, 1))
			{
				func_233(uParam3, iParam4);
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_263(int iParam0, int iParam1, var uParam2)
{
	if (((func_11((iParam0->f_310[iParam1 /*14*/])->f_7, 512) || func_43(uParam2, 1048576)) && (!func_11((iParam0->f_310[iParam1 /*14*/])->f_7, 256) || (MISC::GET_FRAME_COUNT() % 10) == 0)) && PED::IS_PED_USING_ANY_SCENARIO(&(iParam0->f_310[iParam1 /*14*/])))
	{
		if ((iParam0->f_310[iParam1 /*14*/])->f_12 < 0)
		{
			if (func_366(&(iParam0->f_310[iParam1 /*14*/]), 1, 1, 1, 0))
			{
				(iParam0->f_310[iParam1 /*14*/])->f_12 = 0;
			}
			else
			{
				(iParam0->f_310[iParam1 /*14*/])->f_12 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(100, 980));
			}
		}
		if (MISC::GET_GAME_TIMER() >= (iParam0->f_310[iParam1 /*14*/])->f_12)
		{
			PED::_0xAAB050DA48B57978(&(iParam0->f_310[iParam1 /*14*/]), "Default_Panic", 0, -1, 4);
			if (func_367(iParam0, iParam1))
			{
				PED::_0xD8CEEED54C672B5D(&(iParam0->f_310[iParam1 /*14*/]), Global_35, 0f, 0f, 0f, 3, 3);
			}
			else
			{
				PED::_0xD8CEEED54C672B5D(&(iParam0->f_310[iParam1 /*14*/]), &(iParam0->f_310[iParam1 /*14*/]), 0f, 3f, 0.5f, 3, 3);
			}
			PED::_0x9A77DFD295E29B09(&(iParam0->f_310[iParam1 /*14*/]), true);
			PED::_0xEEED8FAFEC331A70(&(iParam0->f_310[iParam1 /*14*/]), Global_36, 3);
			func_34(&((iParam0->f_310[iParam1 /*14*/])->f_7), 256);
		}
	}
}

void func_264(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	bool bVar0;

	bVar0 = func_11((uParam0->f_310[iParam1 /*14*/])->f_7, 1);
	if (func_43(*uParam2, 33554432) || (uParam0->f_310[iParam1 /*14*/])->f_8 != iParam4)
	{
		if (!func_75(uParam3, 1) && func_368(&(uParam0->f_310[iParam1 /*14*/]), 1, 1, 1, 0, 0))
		{
			func_14(uParam3, 1);
		}
		if (!bVar0 && MAP::DOES_BLIP_EXIST((uParam0->f_310[iParam1 /*14*/])->f_1))
		{
			MAP::_0x662D364ABF16DE2F((uParam0->f_310[iParam1 /*14*/])->f_1, -1186550032);
			func_34(&((uParam0->f_310[iParam1 /*14*/])->f_7), 1);
		}
	}
	else if ((uParam0->f_310[iParam1 /*14*/])->f_8 == iParam4)
	{
		if (bVar0 && MAP::DOES_BLIP_EXIST((uParam0->f_310[iParam1 /*14*/])->f_1))
		{
			MAP::_0xB059D7BD3D78C16F((uParam0->f_310[iParam1 /*14*/])->f_1, -1186550032);
			func_74(&((uParam0->f_310[iParam1 /*14*/])->f_7), 1);
		}
	}
}

int func_265(int iParam0)
{
	if (func_127(&(Local_718.f_1106), 5f))
	{
		return 0;
	}
	if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(1498498500, Global_36, 1f) && EVENT::IS_SHOCKING_EVENT_IN_SPHERE(1498498500, ENTITY::GET_ENTITY_COORDS(&(Local_718.f_310[iParam0 /*14*/]), true, false), 10f))
	{
		return 1;
	}
	return 0;
}

void func_266(int iParam0, int* iParam1, int iParam2, int iParam3, int iParam4, char* sParam5)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (MAP::DOES_BLIP_EXIST(*iParam1))
		{
			MAP::REMOVE_BLIP(iParam1);
		}
		iVar0 = MAP::GET_BLIP_FROM_ENTITY(iParam0);
		if (MAP::DOES_BLIP_EXIST(iVar0))
		{
			MAP::REMOVE_BLIP(&iVar0);
		}
		*iParam1 = MAP::_0x23F74C2FDA6E7C61(iParam2, iParam0);
		if (iParam3 != 0)
		{
			MAP::_0x662D364ABF16DE2F(*iParam1, iParam3);
		}
		if (iParam4 != 0)
		{
			MAP::SET_BLIP_SPRITE(*iParam1, iParam4, true);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam1, sParam5);
		}
	}
}

void func_267(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

int func_268(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == iLocal_603)
	{
		iVar0 = &(Local_718.f_1[iParam0 /*22*/])->f_11[iParam1];
		if (func_369(&Local_718, &uLocal_716, &uLocal_717, iParam0, iVar0, Local_432[iParam1 /*21*/], Local_15[iParam1 /*52*/], &vLocal_627, &uLocal_1839, &iLocal_1867, &iLocal_606, &iLocal_607))
		{
			func_263(&Local_718, iParam1, uLocal_716);
			return 1;
		}
	}
	return 0;
}

void func_269(var uParam0, int iParam1)
{
	bool bVar0;

	if (ENTITY::IS_ENTITY_DEAD(&(uParam0->f_310[iParam1 /*14*/])) || (uParam0->f_310[iParam1 /*14*/])->f_4 == 19)
	{
		return;
	}
	if (func_370(uParam0, iParam1, &bVar0))
	{
		func_84(uParam0->f_310[iParam1 /*14*/]);
		func_246(uParam0->f_310[iParam1 /*14*/], 19);
	}
	else if (bVar0)
	{
		if (!PED::IS_PED_IN_COMBAT(&(uParam0->f_310[iParam1 /*14*/]), 0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(&(uParam0->f_310[iParam1 /*14*/]), 1, 1);
			WEAPON::SET_CURRENT_PED_WEAPON(&(uParam0->f_310[iParam1 /*14*/]), joaat("weapon_unarmed"), false, 0, false, false);
			WEAPON::SET_CURRENT_PED_WEAPON(&(uParam0->f_310[iParam1 /*14*/]), joaat("weapon_unarmed"), false, 1, false, false);
			TASK::TASK_SWAP_WEAPON(&(uParam0->f_310[iParam1 /*14*/]), 0, 1, 0, 0);
			func_371(&(uParam0->f_310[iParam1 /*14*/]), 0, -1082130432, -1082130432, -1, -1, -1, -1082130432);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0->f_310[iParam1 /*14*/]);
			func_246(uParam0->f_310[iParam1 /*14*/], 20);
		}
	}
}

void func_270(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, int* iParam6, var uParam7, var uParam8)
{
	int iVar0;
	int iVar1;

	if (iParam4 != iParam2)
	{
		if (iParam4 < 0 && (uParam0->f_1[iParam2 /*22*/])->f_6 == 3)
		{
			if ((uParam0->f_310[iParam3 /*14*/])->f_9 < 40f)
			{
				func_372(uParam0, iParam3, iParam2, iParam6, uParam7, uParam8);
			}
			else
			{
				*uParam8 = 0;
			}
		}
		return;
	}
	if (iParam3 >= 45)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(&(uParam0->f_310[iParam3 /*14*/])))
	{
		return;
	}
	if (func_11((uParam0->f_310[iParam3 /*14*/])->f_7, 512))
	{
		PED::SET_PED_CONFIG_FLAG(&(uParam0->f_310[iParam3 /*14*/]), 297, false);
		PED::SET_PED_CONFIG_FLAG(&(uParam0->f_310[iParam3 /*14*/]), 315, true);
		return;
	}
	if (func_11((uParam0->f_310[iParam3 /*14*/])->f_7, 2048))
	{
		func_341(uParam7, iParam6);
		if ((((uParam0->f_310[iParam3 /*14*/])->f_4 == 17 || (uParam0->f_310[iParam3 /*14*/])->f_4 == 18) || (uParam0->f_310[iParam3 /*14*/])->f_4 == 19) || (uParam0->f_310[iParam3 /*14*/])->f_4 == 20)
		{
		}
		else if (func_11((uParam0->f_310[iParam3 /*14*/])->f_7, 32768))
		{
			func_373(uParam7, (func_11((uParam0->f_310[iParam3 /*14*/])->f_7, 268435456) || func_11((uParam0->f_310[iParam3 /*14*/])->f_7, 134217728)));
		}
		else
		{
			func_374(uParam7, (func_11((uParam0->f_310[iParam3 /*14*/])->f_7, 268435456) || func_11((uParam0->f_310[iParam3 /*14*/])->f_7, 134217728)));
		}
		func_74(&((uParam0->f_310[iParam3 /*14*/])->f_7), 2048);
	}
	iVar0 = func_345(1, 0, 0) | 16384;
	iVar1 = func_346(uParam0->f_310[iParam3 /*14*/], iParam6, 19f, uParam7, 0, 3, 0, 0, iVar0, 0, 0, 2, (uParam0->f_310[iParam3 /*14*/])->f_9);
	if (iVar1 != -1)
	{
		func_34(&((uParam0->f_310[iParam3 /*14*/])->f_7), 134217728);
		func_34(&((uParam0->f_310[iParam3 /*14*/])->f_7), 2048);
	}
	switch (iVar1)
	{
		case 0:
			func_341(uParam7, iParam6);
			func_45(uParam0, iParam2);
			if (func_11((uParam0->f_310[iParam3 /*14*/])->f_7, 32768))
			{
				if (func_11((uParam0->f_310[iParam3 /*14*/])->f_7, 524288))
				{
					func_134(Global_35, &(uParam0->f_310[iParam3 /*14*/]), "DEFUSE_LEFT_PROPERTY_KEEP_GOING", 0, -1082130432, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				}
				else
				{
					func_134(Global_35, &(uParam0->f_310[iParam3 /*14*/]), "DEFUSE_LEFT_PROPERTY", 0, -1082130432, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				}
				func_81((*uParam5)[3 /*3*/]);
				func_34(&((uParam0->f_310[iParam3 /*14*/])->f_7), 268435456);
				func_74(&((uParam0->f_310[iParam3 /*14*/])->f_7), 134217728);
			}
			else if (!func_11((uParam0->f_310[iParam3 /*14*/])->f_7, 512))
			{
				if (func_320())
				{
					func_134(Global_35, &(uParam0->f_310[iParam3 /*14*/]), "GREET_MALE", 0, -1082130432, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				}
				else
				{
					func_134(Global_35, &(uParam0->f_310[iParam3 /*14*/]), "GREET_GENERAL", 0, -1082130432, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				}
				func_246(uParam0->f_310[iParam3 /*14*/], 8);
				func_34(&((uParam0->f_310[iParam3 /*14*/])->f_7), 4096);
			}
			break;
		case 1:
			if (!func_11((uParam0->f_310[iParam3 /*14*/])->f_7, 512))
			{
				func_341(uParam7, iParam6);
				func_45(uParam0, iParam2);
				if (PED::IS_PED_MALE(&(uParam0->f_310[iParam3 /*14*/])))
				{
					func_134(Global_35, &(uParam0->f_310[iParam3 /*14*/]), func_347(uParam0->f_310[iParam3 /*14*/]), 0, -1082130432, (uParam0->f_310[iParam3 /*14*/])->f_11, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				}
				else
				{
					func_134(Global_35, &(uParam0->f_310[iParam3 /*14*/]), func_347(uParam0->f_310[iParam3 /*14*/]), 0, -1082130432, (uParam0->f_310[iParam3 /*14*/])->f_11, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				}
				func_246(uParam0->f_310[iParam3 /*14*/], 8);
				func_34(&((uParam0->f_310[iParam3 /*14*/])->f_7), 4096);
				func_34(&((uParam0->f_310[iParam3 /*14*/])->f_7), 8192);
			}
			break;
		case 2:
			break;
	}
}

int func_271(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	float fVar4;

	if ((Local_718.f_310[iParam1 /*14*/])->f_4 == 19)
	{
		return 0;
	}
	if (!func_11((Local_718.f_310[iParam1 /*14*/])->f_7, 4))
	{
		if (func_262(&Local_718, iParam1, 10f, &uLocal_1839, &iLocal_1867, &uLocal_716, iLocal_603))
		{
			if (iLocal_1867 != 256 || iLocal_603 < 0)
			{
				func_34(&((Local_718.f_310[iParam1 /*14*/])->f_7), 4);
			}
			bVar0 = true;
		}
	}
	if (!bVar0)
	{
		if (func_11((Local_718.f_310[iParam1 /*14*/])->f_7, 16384))
		{
			bVar0 = true;
		}
	}
	if (!bVar0)
	{
		if (func_43(uLocal_716, 67108864))
		{
			bVar0 = true;
		}
	}
	if (!bVar0)
	{
		if (func_43(uLocal_716, 2048))
		{
			bVar0 = true;
		}
	}
	if (!bVar0)
	{
		if (func_43(uLocal_716, 1048576))
		{
			bVar0 = true;
		}
	}
	if (!bVar0 && func_11((Local_718.f_1[iParam0 /*22*/])->f_4, 2))
	{
		bVar0 = true;
	}
	if (!bVar0 && func_265(iParam1))
	{
		bVar0 = true;
	}
	if ((!bVar0 && ENTITY::DOES_ENTITY_EXIST(&(Local_718.f_310[iParam1 /*14*/]))) && PED::_0xE33F98BD76490ABC(&(Local_718.f_310[iParam1 /*14*/]), PLAYER::PLAYER_ID(), 0))
	{
		bVar0 = true;
	}
	if (!bVar0 && func_43(uLocal_716, 1024))
	{
		bVar0 = true;
	}
	if ((!bVar0 && func_172(&uLocal_716, 1)) && (iLocal_603 != -1 || func_348(&(Local_718.f_310[iParam1 /*14*/]), Global_35, 0, 1114636288, 0)))
	{
		bVar0 = true;
	}
	if (!bVar0 && func_11((Local_718.f_310[iParam1 /*14*/])->f_7, 512))
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if ((func_43(uLocal_716, 1073741824) && !func_43(uLocal_716, 16384)) && (((Local_718.f_310[iParam1 /*14*/])->f_9 < 60f || iLocal_603 >= 0) && func_127(vLocal_627[17 /*3*/], 30f)))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (iLocal_614 < 0)
		{
			iLocal_614 = MISC::GET_GAME_TIMER();
		}
		if (!func_11((Local_718.f_310[iParam1 /*14*/])->f_7, 32))
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(&(Local_718.f_310[iParam1 /*14*/]));
			func_34(&((Local_718.f_310[iParam1 /*14*/])->f_7), 32);
		}
		iVar1 = 0;
		iVar2 = 0;
		if (iLocal_603 >= 0)
		{
			iVar1 = (iParam0 - iLocal_603);
			if (iVar1 < 0)
			{
				iVar1 = (iVar1 * -1);
			}
			if ((Local_718.f_1[iLocal_603 /*22*/])->f_6 == 1 || (Local_718.f_1[iLocal_603 /*22*/])->f_6 == 3)
			{
				iVar2 = 1;
			}
		}
		if ((Local_718.f_310[iParam1 /*14*/])->f_12 < 0)
		{
			if (((iVar1 == 0 && iLocal_603 >= 0) || func_11((Local_718.f_310[iParam1 /*14*/])->f_7, 4)) || (iVar2 && iVar1 == 1))
			{
				(Local_718.f_310[iParam1 /*14*/])->f_12 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(100, 600));
			}
			else if (func_43(uLocal_716, 2048))
			{
				(Local_718.f_310[iParam1 /*14*/])->f_12 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(6500, 8500));
			}
			else if (iVar1 == 1)
			{
				(Local_718.f_310[iParam1 /*14*/])->f_12 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(16000, 18000));
			}
			else if (iVar1 == 2)
			{
				(Local_718.f_310[iParam1 /*14*/])->f_12 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(23000, 25000));
			}
			else
			{
				(Local_718.f_310[iParam1 /*14*/])->f_12 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(30000, 32000));
			}
		}
		else
		{
			bVar3 = false;
			if (((iVar1 == 0 || func_11((Local_718.f_310[iParam1 /*14*/])->f_7, 4)) || (iVar2 && iVar1 == 1)) && iLocal_603 >= 0)
			{
				bVar3 = true;
			}
			else if (iVar1 >= 1)
			{
				if (PED::_0x164CECC59E70DF86(&(Local_718.f_310[iParam1 /*14*/]), 50f))
				{
					(Local_718.f_310[iParam1 /*14*/])->f_10 = ((Local_718.f_310[iParam1 /*14*/])->f_10 + (1f * BUILTIN::TIMESTEP()));
				}
				else
				{
					(Local_718.f_310[iParam1 /*14*/])->f_10 = 0f;
				}
				if ((Local_718.f_310[iParam1 /*14*/])->f_10 >= 1.4f && (func_43(uLocal_716, 131072) || func_43(uLocal_716, 8388608)))
				{
					bVar3 = true;
				}
				fVar4 = BUILTIN::TO_FLOAT(iVar1 * 5);
				if (func_43(uLocal_716, 32))
				{
					fVar4 = (IntToFloat(iVar1) * 3.5f);
				}
				if ((Local_718.f_310[iParam1 /*14*/])->f_9 > 15f && iVar1 == 1)
				{
					fVar4 = (fVar4 * 1.5f);
				}
				if ((Local_718.f_310[iParam1 /*14*/])->f_10 >= fVar4)
				{
					bVar3 = true;
				}
			}
			if (bVar3)
			{
				func_12(&uLocal_716, 131072, 1);
				if (((Local_718.f_310[iParam1 /*14*/])->f_12 - MISC::GET_GAME_TIMER()) >= 1000)
				{
					(Local_718.f_310[iParam1 /*14*/])->f_12 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(100, 900));
				}
			}
		}
		if ((iLocal_603 != iParam0 && iLocal_603 < 0) && (Local_718.f_1[iParam0 /*22*/])->f_6 == 3)
		{
			if ((Local_718.f_310[iParam1 /*14*/])->f_12 < 0)
			{
				(Local_718.f_310[iParam1 /*14*/])->f_12 = MISC::GET_GAME_TIMER() + 200;
			}
		}
		func_34(&((Local_718.f_310[iParam1 /*14*/])->f_7), 16384);
		if (MISC::GET_GAME_TIMER() >= (Local_718.f_310[iParam1 /*14*/])->f_12)
		{
			func_12(&uLocal_716, 131072, 1);
			return 1;
		}
	}
	return 0;
}

int func_272(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5)
{
	if (iParam1 < 0)
	{
		return 0;
	}
	func_45(uParam0, iParam1);
	if (*iParam4 != 0)
	{
		func_233(uParam3, iParam4);
	}
	if (!func_125((*uParam2)[12 /*3*/]))
	{
		func_81((*uParam2)[12 /*3*/]);
	}
	func_12(uParam5, 256, 1);
	return 1;
}

void func_273(var uParam0, var uParam1, int iParam2, float fParam3)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;

	if ((((uParam0->f_310[iParam2 /*14*/])->f_9 < 17f && !func_43(*uParam1, 16384)) && !func_11((uParam0->f_310[iParam2 /*14*/])->f_7, 16384)) && (ENTITY::GET_ENTITY_SPEED(Global_35) >= 1f || ENTITY::GET_ENTITY_SPEED(&(uParam0->f_1[0 /*22*/])) < 1f))
	{
		iVar0 = 1;
	}
	if ((iVar0 || func_11((uParam0->f_310[iParam2 /*14*/])->f_7, 8192)) && (PED::IS_PED_FACING_PED(&(uParam0->f_310[iParam2 /*14*/]), Global_35, 180f) || func_375(Global_35, uParam0->f_1105, 148, 1)))
	{
		vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(&(uParam0->f_310[iParam2 /*14*/]), ENTITY::GET_ENTITY_COORDS(Global_35, true, false)) };
		if (vVar1.y < 0f)
		{
			return;
		}
		*fParam3 = (*fParam3 + (1f * BUILTIN::TIMESTEP()));
		fVar4 = *fParam3;
		if (func_11((uParam0->f_310[iParam2 /*14*/])->f_7, 268435456))
		{
			fVar4 = (fVar4 - 4f);
		}
		if (!func_11((uParam0->f_310[iParam2 /*14*/])->f_7, 32768))
		{
			if ((*fParam3 >= 5f || (*fParam3 >= 1.3f && (uParam0->f_310[iParam2 /*14*/])->f_9 < 8f)) || func_11((uParam0->f_310[iParam2 /*14*/])->f_7, 8192))
			{
				TASK::_0xE7FA07624574B79A(&(uParam0->f_310[iParam2 /*14*/]), Global_35, 2, 2, 100f, 1, 0, 0, 0);
				func_134(&(uParam0->f_310[iParam2 /*14*/]), Global_35, "GUARD_PLAYER_LOITERING", 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
				func_34(&((uParam0->f_310[iParam2 /*14*/])->f_7), 32768);
				func_34(&((uParam0->f_310[iParam2 /*14*/])->f_7), 2048);
				*fParam3 = 0f;
			}
		}
		else if (!func_11((uParam0->f_310[iParam2 /*14*/])->f_7, 65536))
		{
			if (fVar4 >= 7f)
			{
				TASK::_0xE7FA07624574B79A(&(uParam0->f_310[iParam2 /*14*/]), Global_35, 2, 2, 100f, 1, 0, 0, 0);
				func_134(&(uParam0->f_310[iParam2 /*14*/]), Global_35, "WARNED_ALREADY", 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
				func_34(&((uParam0->f_310[iParam2 /*14*/])->f_7), 65536);
				*fParam3 = 0f;
			}
		}
		else if (!func_11((uParam0->f_310[iParam2 /*14*/])->f_7, 131072))
		{
			if (fVar4 >= 7f)
			{
				TASK::TASK_LOOK_AT_ENTITY(&(uParam0->f_310[iParam2 /*14*/]), Global_35, 3000, 0, 51, 0);
				PED::_0x802092B07E3B1EEA(&(uParam0->f_310[iParam2 /*14*/]), Global_36, 3);
				TASK::CLEAR_PED_TASKS(&(uParam0->f_310[iParam2 /*14*/]), 1, 0);
				TASK::OPEN_SEQUENCE_TASK(&iVar5);
				TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, 0, 1);
				TASK::CLOSE_SEQUENCE_TASK(iVar5);
				TASK::TASK_PERFORM_SEQUENCE(&(uParam0->f_310[iParam2 /*14*/]), iVar5);
				TASK::CLEAR_SEQUENCE_TASK(&iVar5);
				func_134(&(uParam0->f_310[iParam2 /*14*/]), Global_35, func_376(), 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
				func_34(&((uParam0->f_310[iParam2 /*14*/])->f_7), 131072);
				*fParam3 = 0f;
			}
		}
		else if (fVar4 >= 6f)
		{
			func_246(uParam0->f_310[iParam2 /*14*/], 17);
		}
	}
	else
	{
		*fParam3 = (*fParam3 - (1f * BUILTIN::TIMESTEP()));
		if (*fParam3 < 0f)
		{
			if (!PED::IS_PED_USING_ANY_SCENARIO(&(uParam0->f_310[iParam2 /*14*/])))
			{
				TASK::CLEAR_PED_TASKS(&(uParam0->f_310[iParam2 /*14*/]), 1, 0);
				TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(&(uParam0->f_310[iParam2 /*14*/]), ENTITY::GET_ENTITY_COORDS(&(uParam0->f_310[iParam2 /*14*/]), true, false), 3f, -1, 0, 0, 0, 0);
			}
			*fParam3 = 0f;
		}
	}
}

void func_274(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, var uParam10)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	if (func_11((uParam0->f_310[iParam6 /*14*/])->f_7, 32768) && !func_377(uParam0, uParam2, iParam8))
	{
		if (func_125((*uParam1)[3 /*3*/]) && !func_318((*uParam1)[3 /*3*/]))
		{
			func_378((*uParam1)[3 /*3*/]);
			if (!func_11((uParam0->f_310[iParam6 /*14*/])->f_7, 262144))
			{
				func_34(&((uParam0->f_310[iParam6 /*14*/])->f_7), 262144);
			}
			func_74(&((uParam0->f_1[iParam7 /*22*/])->f_4), 128);
		}
		if (!func_125((*uParam1)[4 /*3*/]))
		{
			func_81((*uParam1)[4 /*3*/]);
		}
		if (!func_11((uParam0->f_310[iParam6 /*14*/])->f_7, 16777216))
		{
			if (!func_11((uParam0->f_1[iParam7 /*22*/])->f_4, 1024) && func_11((uParam0->f_310[iParam6 /*14*/])->f_7, 131072))
			{
				if (func_127((*uParam1)[4 /*3*/], (10.5f / 2f)))
				{
					TASK::TASK_CLEAR_LOOK_AT(&(uParam0->f_310[iParam6 /*14*/]));
					TASK::_0x541E5B41DCA45828(&(uParam0->f_310[iParam6 /*14*/]), 2, 0);
					if (!PED::IS_PED_USING_ANY_SCENARIO(&(uParam0->f_310[iParam6 /*14*/])))
					{
						TASK::CLEAR_PED_TASKS(&(uParam0->f_310[iParam6 /*14*/]), 1, 0);
						if (TASK::_0x841475AC96E794D1((uParam0->f_310[iParam6 /*14*/])->f_6))
						{
							TASK::_TASK_USE_SCENARIO_POINT(&(uParam0->f_310[iParam6 /*14*/]), (uParam0->f_310[iParam6 /*14*/])->f_6, 0, 0, 1, 0, 0, 0, -1082130432, 0);
						}
						else
						{
							TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(&(uParam0->f_310[iParam6 /*14*/]), ENTITY::GET_ENTITY_COORDS(&(uParam0->f_310[iParam6 /*14*/]), true, false), 3f, -1, 0, 0, 0, 0);
						}
					}
					else if (!TASK::_0x841475AC96E794D1((uParam0->f_310[iParam6 /*14*/])->f_6))
					{
						(uParam0->f_310[iParam6 /*14*/])->f_6 = TASK::_0xDF7993356F52359A(&(uParam0->f_310[iParam6 /*14*/]), 0);
					}
					func_74(&((uParam0->f_310[iParam6 /*14*/])->f_7), 32768);
					func_74(&((uParam0->f_310[iParam6 /*14*/])->f_7), 524288);
					func_74(&((uParam0->f_310[iParam6 /*14*/])->f_7), 67108864);
					func_74(&((uParam0->f_310[iParam6 /*14*/])->f_7), 131072);
				}
			}
		}
		func_379(uParam0, iParam6);
		if (func_130((*uParam1)[4 /*3*/], 10.5f))
		{
			if (func_11((uParam0->f_310[iParam6 /*14*/])->f_7, 262144))
			{
				func_74(&((uParam0->f_310[iParam6 /*14*/])->f_7), 262144);
				func_74(&((uParam0->f_1[iParam7 /*22*/])->f_4), 1024);
				func_74(&((uParam0->f_1[iParam7 /*22*/])->f_4), 512);
				func_34(&((uParam0->f_310[iParam6 /*14*/])->f_7), 2048);
			}
			else if (func_11((uParam0->f_310[iParam6 /*14*/])->f_7, 131072))
			{
				func_74(&((uParam0->f_310[iParam6 /*14*/])->f_7), 131072);
				func_74(&((uParam0->f_310[iParam6 /*14*/])->f_7), 16777216);
				func_74(&((uParam0->f_1[iParam7 /*22*/])->f_4), 2048);
				func_74(&((uParam0->f_1[iParam7 /*22*/])->f_4), 1024);
				func_34(&((uParam0->f_310[iParam6 /*14*/])->f_7), 2048);
				(uParam0->f_1[iParam7 /*22*/])->f_20 = -1;
			}
			else if (func_11((uParam0->f_310[iParam6 /*14*/])->f_7, 65536))
			{
				func_74(&((uParam0->f_310[iParam6 /*14*/])->f_7), 65536);
				func_74(&((uParam0->f_310[iParam6 /*14*/])->f_7), 16777216);
				func_74(&((uParam0->f_1[iParam7 /*22*/])->f_4), 2048);
				func_74(&((uParam0->f_1[iParam7 /*22*/])->f_4), 1024);
				func_34(&((uParam0->f_310[iParam6 /*14*/])->f_7), 2048);
				(uParam0->f_1[iParam7 /*22*/])->f_20 = -1;
			}
			else if (func_11((uParam0->f_310[iParam6 /*14*/])->f_7, 32768))
			{
				func_74(&((uParam0->f_310[iParam6 /*14*/])->f_7), 16777216);
				func_74(&((uParam0->f_1[iParam7 /*22*/])->f_4), 2048);
				func_74(&((uParam0->f_310[iParam6 /*14*/])->f_7), 32768);
				func_74(&((uParam0->f_310[iParam6 /*14*/])->f_7), 524288);
				func_74(&((uParam0->f_310[iParam6 /*14*/])->f_7), 67108864);
				func_74(&((uParam0->f_1[iParam7 /*22*/])->f_4), 1024);
				func_74(&((uParam0->f_1[iParam7 /*22*/])->f_4), 512);
				func_34(&((uParam0->f_310[iParam6 /*14*/])->f_7), 2048);
				(uParam0->f_1[iParam7 /*22*/])->f_20 = -1;
			}
			if (func_125((*uParam1)[3 /*3*/]))
			{
				func_121((*uParam1)[3 /*3*/]);
			}
			TASK::_0x541E5B41DCA45828(&(uParam0->f_310[iParam6 /*14*/]), 2, 0);
			if (!PED::IS_PED_USING_ANY_SCENARIO(&(uParam0->f_310[iParam6 /*14*/])))
			{
				TASK::TASK_CLEAR_LOOK_AT(&(uParam0->f_310[iParam6 /*14*/]));
				TASK::CLEAR_PED_TASKS(&(uParam0->f_310[iParam6 /*14*/]), 1, 0);
				if (TASK::_0x841475AC96E794D1((uParam0->f_310[iParam6 /*14*/])->f_6))
				{
					TASK::_TASK_USE_SCENARIO_POINT(&(uParam0->f_310[iParam6 /*14*/]), (uParam0->f_310[iParam6 /*14*/])->f_6, 0, 0, 1, 0, 0, 0, -1082130432, 0);
				}
				else
				{
					TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(&(uParam0->f_310[iParam6 /*14*/]), ENTITY::GET_ENTITY_COORDS(&(uParam0->f_310[iParam6 /*14*/]), true, false), 3f, -1, 0, 0, 0, 0);
				}
			}
			else if (!TASK::_0x841475AC96E794D1((uParam0->f_310[iParam6 /*14*/])->f_6))
			{
				(uParam0->f_310[iParam6 /*14*/])->f_6 = TASK::_0xDF7993356F52359A(&(uParam0->f_310[iParam6 /*14*/]), 0);
			}
		}
	}
	if (iParam8 == iParam7 && func_377(uParam0, uParam2, iParam8))
	{
		if (!func_11((uParam0->f_1[iParam7 /*22*/])->f_4, 2048))
		{
			if (func_380(uParam0, iParam7, iParam6))
			{
				func_381(uParam0, iParam6, iParam7);
				bVar0 = true;
			}
		}
		else
		{
			iVar1 = (uParam0->f_1[iParam7 /*22*/])->f_20;
			if (iParam6 == iVar1)
			{
				bVar0 = true;
			}
			else if ((uParam0->f_310[iParam6 /*14*/])->f_9 < (uParam0->f_310[iVar1 /*14*/])->f_9)
			{
				func_382(uParam0, iParam7);
				func_381(uParam0, iParam6, iParam7);
				func_383(uParam0, iParam6, iVar1);
				bVar0 = true;
			}
		}
		if (!func_11((uParam0->f_310[iParam6 /*14*/])->f_7, 16777216))
		{
			if (bVar0 && TASK::_0x841475AC96E794D1(TASK::_0xD04241BBF6D03A5E(Global_35)))
			{
				func_272(uParam0, iParam7, uParam1, uParam3, iParam4, uParam2);
				func_34(&((uParam0->f_1[iParam7 /*22*/])->f_4), 128);
				func_34(&((uParam0->f_310[iParam6 /*14*/])->f_7), 2048);
				func_74(&((uParam0->f_310[iParam6 /*14*/])->f_7), 268435456);
				func_246(uParam0->f_310[iParam6 /*14*/], 17);
				func_83(0);
				func_12(uParam2, 536870912, 1);
			}
			if (!func_11((uParam0->f_310[iParam6 /*14*/])->f_7, 32768))
			{
				if (func_11((uParam0->f_1[iParam7 /*22*/])->f_4, 512))
				{
					TASK::_0xE7FA07624574B79A(&(uParam0->f_310[iParam6 /*14*/]), Global_35, 2, 2, 100f, 1, 0, 0, 0);
					func_34(&((uParam0->f_310[iParam6 /*14*/])->f_7), 32768);
					func_34(&((uParam0->f_310[iParam6 /*14*/])->f_7), 2048);
				}
			}
			else if (!func_11((uParam0->f_310[iParam6 /*14*/])->f_7, 131072))
			{
				if (func_11((uParam0->f_1[iParam7 /*22*/])->f_4, 1024))
				{
					TASK::TASK_LOOK_AT_ENTITY(&(uParam0->f_310[iParam6 /*14*/]), Global_35, 3000, 0, 51, 0);
					PED::_0x802092B07E3B1EEA(&(uParam0->f_310[iParam6 /*14*/]), Global_36, 3);
					TASK::CLEAR_PED_TASKS(&(uParam0->f_310[iParam6 /*14*/]), 1, 0);
					TASK::OPEN_SEQUENCE_TASK(&iVar2);
					TASK::TASK_SEEK_CLEAR_LOS_TO_ENTITY(0, Global_35, (19f / 2f), 1f, -1f);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, 0, 1);
					TASK::CLOSE_SEQUENCE_TASK(iVar2);
					TASK::TASK_PERFORM_SEQUENCE(&(uParam0->f_310[iParam6 /*14*/]), iVar2);
					TASK::CLEAR_SEQUENCE_TASK(&iVar2);
					func_34(&((uParam0->f_310[iParam6 /*14*/])->f_7), 131072);
					func_34(&((uParam0->f_310[iParam6 /*14*/])->f_7), 2048);
					func_81((*uParam1)[3 /*3*/]);
				}
			}
			return;
		}
		if (!func_125((*uParam1)[3 /*3*/]))
		{
			func_81((*uParam1)[3 /*3*/]);
		}
		else if (func_318((*uParam1)[3 /*3*/]))
		{
			func_384((*uParam1)[3 /*3*/]);
		}
		if (func_125((*uParam1)[4 /*3*/]))
		{
			func_121((*uParam1)[4 /*3*/]);
		}
		if (func_127((*uParam1)[3 /*3*/], 1f))
		{
			if (func_43(*uParam2, 1073741824))
			{
				func_246(uParam0->f_310[iParam6 /*14*/], 17);
				return;
			}
			if (bVar0 && TASK::_0x841475AC96E794D1(TASK::_0xD04241BBF6D03A5E(Global_35)))
			{
				func_34(&((uParam0->f_310[iParam6 /*14*/])->f_7), 131072);
				func_34(&((uParam0->f_310[iParam6 /*14*/])->f_7), 524288);
			}
			if (func_385(uParam0, iParam6, iParam7, iParam9))
			{
				func_34(&((uParam0->f_310[iParam6 /*14*/])->f_7), 65536);
				if ((uParam0->f_1[iParam7 /*22*/])->f_6 == 3 && (uParam0->f_310[iParam6 /*14*/])->f_9 < 5f)
				{
					func_34(&((uParam0->f_310[iParam6 /*14*/])->f_7), 32768);
					func_34(&((uParam0->f_310[iParam6 /*14*/])->f_7), 131072);
					func_34(&((uParam0->f_310[iParam6 /*14*/])->f_7), 524288);
				}
			}
			if (!func_11((uParam0->f_310[iParam6 /*14*/])->f_7, 32768))
			{
				if (bVar0)
				{
					PED::_0x62FDAD5E01D2DD47(&(uParam0->f_310[iParam6 /*14*/]), Global_36, 1, 0);
					TASK::_0xE7FA07624574B79A(&(uParam0->f_310[iParam6 /*14*/]), Global_35, 2, 2, 100f, 1, 0, 0, 0);
					func_134(&(uParam0->f_310[iParam6 /*14*/]), Global_35, func_386(), 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
					func_34(&((uParam0->f_310[iParam6 /*14*/])->f_7), 32768);
					func_34(&((uParam0->f_1[iParam7 /*22*/])->f_4), 128);
					func_74(&((uParam0->f_310[iParam6 /*14*/])->f_7), 268435456);
					func_34(&((uParam0->f_310[iParam6 /*14*/])->f_7), 2048);
					func_34(&((uParam0->f_1[iParam7 /*22*/])->f_4), 512);
					func_81((*uParam1)[3 /*3*/]);
				}
			}
			else
			{
				fVar3 = 6.5f;
				if (func_11((uParam0->f_310[iParam6 /*14*/])->f_7, 268435456))
				{
					fVar3 = 9.5f;
				}
				if ((func_127((*uParam1)[3 /*3*/], fVar3) || !func_11((uParam0->f_1[iParam7 /*22*/])->f_4, 128)) || TASK::_0x841475AC96E794D1(TASK::_0xD04241BBF6D03A5E(Global_35)))
				{
					if (func_387(uParam0, iParam6, iParam8, iParam9, 1, uParam2))
					{
						func_134(&(uParam0->f_310[iParam6 /*14*/]), Global_35, func_388(1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
						func_34(&((uParam0->f_310[iParam6 /*14*/])->f_7), 524288);
						func_34(&((uParam0->f_1[iParam7 /*22*/])->f_4), 128);
						func_74(&((uParam0->f_310[iParam6 /*14*/])->f_7), 268435456);
						func_34(&((uParam0->f_1[iParam7 /*22*/])->f_4), 512);
						func_34(&((uParam0->f_310[iParam6 /*14*/])->f_7), 2048);
						func_81((*uParam1)[3 /*3*/]);
					}
					else if (func_387(uParam0, iParam6, iParam8, iParam9, 0, uParam2))
					{
						func_134(&(uParam0->f_310[iParam6 /*14*/]), Global_35, func_388(0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
						func_34(&((uParam0->f_310[iParam6 /*14*/])->f_7), 67108864);
						func_34(&((uParam0->f_1[iParam7 /*22*/])->f_4), 128);
						func_74(&((uParam0->f_310[iParam6 /*14*/])->f_7), 134217728);
						func_34(&((uParam0->f_1[iParam7 /*22*/])->f_4), 512);
						func_34(&((uParam0->f_310[iParam6 /*14*/])->f_7), 2048);
						func_81((*uParam1)[3 /*3*/]);
					}
					else if (!func_11((uParam0->f_310[iParam6 /*14*/])->f_7, 65536))
					{
						if (bVar0)
						{
							func_134(&(uParam0->f_310[iParam6 /*14*/]), Global_35, func_389(), 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
							func_34(&((uParam0->f_310[iParam6 /*14*/])->f_7), 65536);
							func_34(&((uParam0->f_1[iParam7 /*22*/])->f_4), 128);
							func_34(&((uParam0->f_310[iParam6 /*14*/])->f_7), 2048);
							func_34(&((uParam0->f_1[iParam7 /*22*/])->f_4), 512);
							func_74(&((uParam0->f_310[iParam6 /*14*/])->f_7), 268435456);
							PED::_0x62FDAD5E01D2DD47(&(uParam0->f_310[iParam6 /*14*/]), Global_36, 1, 0);
							TASK::CLEAR_PED_TASKS(&(uParam0->f_310[iParam6 /*14*/]), 1, 0);
							TASK::TASK_LOOK_AT_ENTITY(&(uParam0->f_310[iParam6 /*14*/]), Global_35, 3000, 0, 51, 0);
							TASK::OPEN_SEQUENCE_TASK(&iVar2);
							TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
							TASK::TASK_SEEK_CLEAR_LOS_TO_ENTITY(0, Global_35, (19f / 2f), 1f, -1f);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
							TASK::CLOSE_SEQUENCE_TASK(iVar2);
							TASK::TASK_PERFORM_SEQUENCE(&(uParam0->f_310[iParam6 /*14*/]), iVar2);
							TASK::CLEAR_SEQUENCE_TASK(&iVar2);
							func_81((*uParam1)[3 /*3*/]);
						}
					}
					else if (!func_11((uParam0->f_310[iParam6 /*14*/])->f_7, 131072))
					{
						if (bVar0)
						{
							PED::_0x802092B07E3B1EEA(&(uParam0->f_310[iParam6 /*14*/]), Global_36, 3);
							TASK::CLEAR_PED_TASKS(&(uParam0->f_310[iParam6 /*14*/]), 1, 0);
							TASK::TASK_LOOK_AT_ENTITY(&(uParam0->f_310[iParam6 /*14*/]), Global_35, 3000, 0, 51, 0);
							TASK::OPEN_SEQUENCE_TASK(&iVar2);
							TASK::TASK_SEEK_CLEAR_LOS_TO_ENTITY(0, Global_35, (19f / 2f), 1f, -1f);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, 0, 1);
							TASK::CLOSE_SEQUENCE_TASK(iVar2);
							TASK::TASK_PERFORM_SEQUENCE(&(uParam0->f_310[iParam6 /*14*/]), iVar2);
							TASK::CLEAR_SEQUENCE_TASK(&iVar2);
							func_134(&(uParam0->f_310[iParam6 /*14*/]), Global_35, func_376(), 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
							func_34(&((uParam0->f_310[iParam6 /*14*/])->f_7), 131072);
							func_34(&((uParam0->f_1[iParam7 /*22*/])->f_4), 128);
							func_34(&((uParam0->f_1[iParam7 /*22*/])->f_4), 512);
							func_34(&((uParam0->f_1[iParam7 /*22*/])->f_4), 1024);
							func_74(&((uParam0->f_310[iParam6 /*14*/])->f_7), 268435456);
							func_34(&((uParam0->f_310[iParam6 /*14*/])->f_7), 2048);
							func_81((*uParam1)[3 /*3*/]);
						}
					}
					else if (bVar0)
					{
						PED::_0x802092B07E3B1EEA(&(uParam0->f_310[iParam6 /*14*/]), Global_36, 3);
						func_134(&(uParam0->f_310[iParam6 /*14*/]), Global_35, func_390(), 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
						*uParam10 = MISC::GET_GAME_TIMER() + 8000;
						func_34(&((uParam0->f_310[iParam6 /*14*/])->f_7), 536870912);
						func_272(uParam0, iParam7, uParam1, uParam3, iParam4, uParam2);
						func_34(&((uParam0->f_1[iParam7 /*22*/])->f_4), 128);
						func_34(&((uParam0->f_310[iParam6 /*14*/])->f_7), 2048);
						func_74(&((uParam0->f_310[iParam6 /*14*/])->f_7), 268435456);
						func_246(uParam0->f_310[iParam6 /*14*/], 17);
						func_83(0);
						func_12(uParam2, 536870912, 1);
					}
				}
			}
		}
	}
}

int func_275(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_321((iParam1 - 1) < 0, -1, (iParam1 - 1));
	iVar0 = func_321(iParam1 + 1 >= uParam0->f_1098, -1, iParam1 + 1);
	if (iParam1 != -1 && func_11((uParam0->f_1[iParam1 /*22*/])->f_4, 2))
	{
		return 1;
	}
	if (iVar1 != -1 && func_11((uParam0->f_1[iVar1 /*22*/])->f_4, 2))
	{
		return 1;
	}
	if (iVar0 != -1 && func_11((uParam0->f_1[iVar0 /*22*/])->f_4, 2))
	{
		return 1;
	}
	return 0;
}

int func_276(var uParam0, var uParam1, int iParam2)
{
	if (func_151(0, 1, Global_35, 1))
	{
		return 1;
	}
	if (func_125((*uParam1)[1 /*3*/]) && !func_127((*uParam1)[1 /*3*/], 2.5f))
	{
		return 0;
	}
	return 1;
}

int func_277(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, var uParam7)
{
	if (!ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_310[iParam5 /*14*/])))
	{
		return 0;
	}
	if ((!func_328() && !func_127((*uParam1)[20 /*3*/], 1.5f)) && !func_391(uParam0, iParam5, uParam2))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, func_171(), 0);
		func_14(uParam3, 134217728);
		HUD::_0x8BC7C1F929D07BF3(724769646);
		func_329(iParam6, 0);
		if (!func_125((*uParam1)[20 /*3*/]))
		{
			func_81((*uParam1)[20 /*3*/]);
		}
		return 0;
	}
	if ((!PED::_0x82CB0F3F0C7785E5(&(uParam0->f_310[iParam5 /*14*/])) && !func_127((*uParam1)[20 /*3*/], 1.5f)) && !func_391(uParam0, iParam5, uParam2))
	{
		if ((uParam0->f_310[iParam5 /*14*/])->f_12 == 0)
		{
			(uParam0->f_310[iParam5 /*14*/])->f_12 = MISC::GET_GAME_TIMER();
		}
		PED::_0xD8CEEED54C672B5D(&(uParam0->f_310[iParam5 /*14*/]), Global_35, 0f, 0f, 0f, 3, 3);
		PED::_0x9A77DFD295E29B09(&(uParam0->f_310[iParam5 /*14*/]), true);
		return 0;
	}
	func_121((*uParam1)[20 /*3*/]);
	PED::_0xE735A7DA22E88359(&(uParam0->f_310[iParam5 /*14*/]));
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()) && !func_43(*uParam2, 512))
	{
		func_98(uParam3, 134217728);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
	}
	func_65(uParam7);
	func_134(&(uParam0->f_310[iParam5 /*14*/]), Global_35, "HAND_OVER_MONEY", 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
	return 1;
}

void func_278(var uParam0, var uParam1, var uParam2)
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 25446659))
	{
		func_134(Global_35, *uParam0, "ROB_ESCALATED_HIT", 0, -1082130432, 0, 0, 0, 1, 1, 0, 1506116031, 1, 0, 0);
		func_65(uParam1);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 60809731))
	{
		AUDIO::STOP_CURRENT_PLAYING_SPEECH(*uParam0, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam0, -2007843936))
	{
		func_134(*uParam0, Global_35, "HAND_OVER_MONEY", 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
		func_65(uParam1);
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			func_98(uParam2, 134217728);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
		}
	}
}

void func_279(var uParam0)
{
	STREAMING::_0x19A6BE7D9C6884D3(767498549, 8193, ENTITY::GET_ENTITY_MODEL(*uParam0), 0);
}

void func_280(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, var uParam6, var uParam7, var uParam8)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;

	if (!ENTITY::IS_ENTITY_DEAD(&(iParam0->f_310[iParam2 /*14*/])))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(&(iParam0->f_310[iParam2 /*14*/]), 780511057, 1) == 8 && (iParam0->f_310[iParam2 /*14*/])->f_5 != 4)
		{
			TASK::TASK_CLEAR_LOOK_AT(&(iParam0->f_310[iParam2 /*14*/]));
			PED::_0x802092B07E3B1EEA(&(iParam0->f_310[iParam2 /*14*/]), Global_36, 3);
			TASK::TASK_COMBAT_PED(&(iParam0->f_310[iParam2 /*14*/]), Global_35, 16777216, 16);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(iParam0->f_310[iParam2 /*14*/]), false);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(&(iParam0->f_310[iParam2 /*14*/]), *iParam5);
			PED::REGISTER_TARGET(&(iParam0->f_310[iParam2 /*14*/]), Global_35, 1);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(&(iParam0->f_310[iParam2 /*14*/]), true, 15f);
			PED::SET_PED_TARGET_LOSS_RESPONSE(&(iParam0->f_310[iParam2 /*14*/]), 1);
			PED::SET_PED_KEEP_TASK(&(iParam0->f_310[iParam2 /*14*/]), true);
			PED::SET_PED_CONFIG_FLAG(&(iParam0->f_310[iParam2 /*14*/]), 297, false);
			PED::SET_PED_CONFIG_FLAG(&(iParam0->f_310[iParam2 /*14*/]), 315, true);
			if (iParam4 == iParam3)
			{
				func_122(uParam8, 0, 0, 1, 0);
			}
		}
		if (MISC::GET_GAME_TIMER() >= *uParam6)
		{
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, 10) == 0)
			{
				if ((iParam0->f_310[iParam2 /*14*/])->f_9 < 50f)
				{
					if (!func_11((iParam0->f_310[iParam2 /*14*/])->f_7, 536870912))
					{
						sVar0 = func_390();
					}
					else
					{
						sVar0 = func_392();
					}
					if (func_134(&(iParam0->f_310[iParam2 /*14*/]), Global_35, sVar0, 0, -1082130432, 0, 0, 0, 1, 0, 1, 1744022339, 0, 0, 0))
					{
						func_34(&((iParam0->f_310[iParam2 /*14*/])->f_7), 536870912);
						*uParam6 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(8000, 12000));
					}
				}
			}
		}
		if (MISC::GET_GAME_TIMER() >= (iParam0->f_310[iParam2 /*14*/])->f_12)
		{
			iVar1 = 0;
			iVar2 = -1;
			if (func_128(iParam0, iParam0->f_310[iParam2 /*14*/]) && ENTITY::GET_ENTITY_SPEED(&(iParam0->f_1[0 /*22*/])) > 0.2f)
			{
				if (!func_128(iParam0, &Global_35) || iParam4 < 0)
				{
					iVar1 = 1;
				}
				else if (VOLUME::_0x92A78D0BEDB332A3((iParam0->f_1[iParam4 /*22*/])->f_1) && ENTITY::IS_ENTITY_IN_VOLUME(&(iParam0->f_310[iParam2 /*14*/]), (iParam0->f_1[iParam4 /*22*/])->f_1, true, 0))
				{
					iVar1 = 2;
					iVar2 = iParam4;
				}
				else if (iParam4 > 0)
				{
					iVar1 = 3;
				}
				else
				{
					iVar3 = func_393(iParam0, iParam2);
					if (iVar3 > 1)
					{
						iVar1 = 3;
					}
					else
					{
						iVar1 = 3;
						if (iVar3 >= 0)
						{
							vVar4 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(&(iParam0->f_1[iVar3 /*22*/]), ENTITY::GET_ENTITY_COORDS(&(iParam0->f_310[iParam2 /*14*/]), true, false)) };
							if (vVar4.z < 2.3f)
							{
								iVar1 = 4;
							}
						}
					}
				}
			}
			else if (iParam4 != -1 || func_46(iParam0, 30f))
			{
				iVar1 = 0;
			}
			else
			{
				iVar1 = 5;
			}
			if (iVar1 != (iParam0->f_310[iParam2 /*14*/])->f_5)
			{
				func_394(iParam0, iParam2, iVar1, iVar2);
			}
			switch ((iParam0->f_310[iParam2 /*14*/])->f_5)
			{
				case 1:
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(&(iParam0->f_310[iParam2 /*14*/]), 1f);
					break;
			}
			(iParam0->f_310[iParam2 /*14*/])->f_12 = MISC::GET_GAME_TIMER() + 1000;
		}
		if (!MAP::DOES_BLIP_EXIST((iParam0->f_310[iParam2 /*14*/])->f_1))
		{
			(iParam0->f_310[iParam2 /*14*/])->f_1 = MAP::_0x23F74C2FDA6E7C61(831283580, &(iParam0->f_310[iParam2 /*14*/]));
		}
	}
}

void func_281(var uParam0, int iParam1, int iParam2)
{
	func_395(uParam0, iParam2, iParam1);
}

void func_282(int iParam0, int iParam1)
{
	char[] cVar0[8];

	iParam1 = &(Local_718.f_1[iParam0 /*22*/])->f_11[iParam1];
	PED::SET_PED_CONFIG_FLAG(&(Local_718.f_310[iParam1 /*14*/]), 171, true);
	PED::SET_PED_CONFIG_FLAG(&(Local_718.f_310[iParam1 /*14*/]), 189, true);
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(&(Local_718.f_310[iParam1 /*14*/])))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(&(Local_718.f_310[iParam1 /*14*/]), true, true);
	}
	if (PED::IS_PED_MALE(&(Local_718.f_310[iParam1 /*14*/])))
	{
		if (ENTITY::GET_ENTITY_MODEL(&(Local_718.f_310[iParam1 /*14*/])) == func_396())
		{
			(Local_718.f_310[iParam1 /*14*/])->f_3 = 1;
			Local_718.f_1100++;
			func_397(&(Local_718.f_310[iParam1 /*14*/]), joaat("weapon_revolver_cattleman"), 0, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
			func_398(Local_718.f_310[iParam1 /*14*/]);
			if (!func_11((Local_718.f_1[iParam0 /*22*/])->f_4, 256))
			{
				func_34(&((Local_718.f_1[iParam0 /*22*/])->f_4), 256);
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(&(Local_718.f_310[iParam1 /*14*/])) == func_399())
		{
			(Local_718.f_310[iParam1 /*14*/])->f_3 = 0;
		}
		else
		{
			(Local_718.f_310[iParam1 /*14*/])->f_3 = 2;
		}
	}
	else
	{
		(Local_718.f_310[iParam1 /*14*/])->f_3 = 2;
	}
	(Local_718.f_310[iParam1 /*14*/])->f_8 = iParam0;
	func_250(&Local_718, iParam1);
	cVar0 = func_400(ENTITY::GET_ENTITY_MODEL(&(Local_718.f_310[iParam1 /*14*/])));
	if (!MISC::IS_STRING_NULL_OR_EMPTY(cVar0))
	{
		func_401(&(Local_718.f_310[iParam1 /*14*/]), cVar0, 0);
	}
	func_34(&((Local_718.f_310[iParam1 /*14*/])->f_7), 16);
}

var func_283(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;

	fVar2 = 9999.9f;
	iVar0 = 0;
	while (iVar0 < (uParam0->f_1[iParam1 /*22*/])->f_8)
	{
		iVar1 = &(uParam0->f_1[iParam1 /*22*/])->f_11[iVar0];
		if (iVar1 >= 0 && (uParam0->f_310[iVar1 /*14*/])->f_9 < fVar2)
		{
			fVar2 = (uParam0->f_310[iVar1 /*14*/])->f_9;
			uVar3 = &uParam0->f_310[iVar1 /*14*/];
			*iParam2 = iVar1;
		}
		iVar0++;
	}
	return uVar3;
}

int func_284(int iParam0, int iParam1)
{
	if (func_402(iParam0, 0, 1))
	{
		return (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0) || (iParam1 && AUDIO::IS_ANY_SPEECH_PLAYING(iParam0)));
	}
	return 0;
}

int func_285(float fParam0)
{
	if (func_403(1))
	{
		return 1;
	}
	if (func_125(&uLocal_0) && !func_130(&uLocal_0, (7.5f + fParam0)))
	{
		return 1;
	}
	return 0;
}

void func_286(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

int func_287(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return 0;
	}
	if (func_404(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_405(iParam0))
	{
		return 0;
	}
	if (func_406(iParam0))
	{
		return 0;
	}
	if ((Global_1898164->f_163 && !func_407(iParam0, 1)) || func_408(32768))
	{
		if (!func_407(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return 0;
		}
	}
	if (!func_409())
	{
		return 0;
	}
	return 1;
}

void func_288(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

int func_289(int iParam0, bool bParam1)
{
	switch (func_410(iParam0))
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

int func_290(var uParam0, int iParam1)
{
	int iVar0;

	if (iParam1 >= 0)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_1098)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_1[iVar0 /*22*/])))
		{
			if (!func_11((uParam0->f_1[iVar0 /*22*/])->f_4, -2147483648))
			{
				VEHICLE::TRACK_VEHICLE_VISIBILITY(&(uParam0->f_1[iVar0 /*22*/]));
				func_34(&((uParam0->f_1[iVar0 /*22*/])->f_4), -2147483648);
			}
			if (VEHICLE::IS_VEHICLE_VISIBLE(&(uParam0->f_1[iVar0 /*22*/])))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_291(var uParam0, float fParam1)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (func_411(uParam0, iVar0, fParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_292(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

int func_293(int iParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6, var uParam7, bool bParam8)
{
	struct<15> Var0;
	int iVar20;
	int iVar21;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	Var0.f_8 = -1082130432;
	if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &(Var0.f_6), false, iParam5, false))
	{
		iVar20 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iParam0, iParam5);
		if (ENTITY::DOES_ENTITY_EXIST(iVar20))
		{
			Var0 = { func_412(iVar20) };
			if (func_213(vParam1))
			{
				Var0.f_3 = { func_413(iVar20) };
			}
			else
			{
				Var0.f_3 = { vParam1 };
			}
			Var0.f_7 = 1f;
			Var0.f_12 = 1;
			if (bParam8)
			{
				if (func_319(iParam0, 0))
				{
					Var0.f_9 = iParam0;
				}
				else
				{
					Var0.f_9 = 0;
				}
			}
			Var0.f_13 = 1;
			Var0.f_14 = uParam7;
			if (func_319(iParam4, 0))
			{
				Var0.f_11 = iParam4;
			}
			MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Var0);
			if (bParam6)
			{
				if (WEAPON::GET_AMMO_IN_CLIP(iParam0, &iVar21, Var0.f_6))
				{
					if (iVar21 > 0)
					{
						WEAPON::SET_AMMO_IN_CLIP(iParam0, Var0.f_6, (iVar21 - 1));
					}
				}
			}
			return 1;
		}
	}
	return 0;
}

float func_294(int iParam0)
{
	switch (iParam0)
	{
		case 3:
		case default:
			return 10f;
		case 2:
			return 5f;
		case 1:
			return 3f;
		case 0:
			return 1f;
		}

int func_295()
{
	if ((MISC::GET_FRAME_COUNT() % 5) != 0)
	{
		return -1;
	}
	return ((MISC::GET_FRAME_COUNT() % Local_718.f_1098 * 5) / 5);
}

void func_296(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_297(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_298()
{
	return Global_1894899->f_2;
}

int func_299()
{
	if (func_414())
	{
		return 0;
	}
	if (func_43(uLocal_716, 16777216))
	{
		return 0;
	}
	return 1;
}

int func_300(bool bParam0, var uParam1, var uParam2)
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

float func_301()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_302(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_303(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_304(int iParam0)
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

int func_305(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

int func_306(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<4> Var4;
	bool bVar18;

	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = func_415(uParam1, 128);
	if (func_416("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_417(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_201(Var4.f_4))
			{
			}
			else if (!WEAPON::_0x705BE297EEBDB95D(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if (!bVar18 || WEAPON::_0xF29A186ED428B552(Global_35, Var4.f_4))
			{
				if (((WEAPON::_0xD955FEE4B87AFA07(Var4.f_4) && (!WEAPON::_0xC75386174ECE95D5(Var4.f_4) || func_415(uParam1, 32))) && (!WEAPON::_0xDDC64F5E31EEDAB6(Var4.f_4) || !func_415(uParam1, 8192))) && (!WEAPON::_0xC212F1D05A8232BB(Var4.f_4) || !func_415(uParam1, 16384)))
				{
					if (iVar0 == 0 || WEAPON::_0xA2091482ED42EF85(Global_35, &Var4) > WEAPON::_0xA2091482ED42EF85(Global_35, uParam0))
					{
						iVar0 = Var4.f_4;
						*uParam0 = { Var4 };
					}
				}
			}
			iVar3++;
		}
		func_418(iVar1);
	}
	if (func_201(iVar0))
	{
	}
	return iVar0;
}

int func_307(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<4> Var4;
	bool bVar18;

	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = func_415(uParam1, 128);
	if (func_416("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_417(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_201(Var4.f_4))
			{
			}
			else if (!WEAPON::_0x705BE297EEBDB95D(Var4.f_4) && !WEAPON::_0xC4DEC3CA8C365A5D(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if (!bVar18 || WEAPON::_0xF29A186ED428B552(Global_35, Var4.f_4))
			{
				if (((WEAPON::_0x0556E9D2ECF39D01(Var4.f_4) && (!WEAPON::_0xC75386174ECE95D5(Var4.f_4) || func_415(uParam1, 16))) && (!WEAPON::_0x6AD66548840472E5(Var4.f_4) || func_415(uParam1, 4))) && (!func_419(Var4.f_4) || func_415(uParam1, 8)))
				{
					if (iVar0 == 0 || WEAPON::_0xA2091482ED42EF85(Global_35, &Var4) > WEAPON::_0xA2091482ED42EF85(Global_35, uParam0))
					{
						iVar0 = Var4.f_4;
						*uParam0 = { Var4 };
					}
				}
			}
			iVar3++;
		}
		func_418(iVar1);
	}
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
	}
	return iVar0;
}

bool func_308(int iParam0)
{
	if (!func_420(iParam0))
	{
		return false;
	}
	return ((((*Global_1888801)[iParam0 /*35*/])->f_20 == 1 || ((*Global_1888801)[iParam0 /*35*/])->f_20 == 2) && !func_421(iParam0));
}

int func_309(vector3 vParam0, bool bParam3)
{
	int iVar0;

	iVar0 = func_298();
	if (func_420(iVar0))
	{
		if (VOLUME::_0xF256A75210C5C0EB(((*Global_1888801)[iVar0 /*35*/])->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_422(vParam0, bParam3);
}

int func_310(var uParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_423(*uParam0, 0f, 0f, 0f))
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

void func_311(int iParam0, int iParam1)
{
	if (!ITEMSET::IS_ITEMSET_VALID(iParam1))
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ITEMSET::IS_IN_ITEMSET(iParam0, iParam1))
		{
			ITEMSET::ADD_TO_ITEMSET(iParam0, iParam1);
		}
	}
}

int func_312(int iParam0, int iParam1)
{
	if (func_11(Global_1392581->f_3, 8))
	{
		return 0;
	}
	if (iParam0 != iParam1)
	{
		return 0;
	}
	return 1;
}

int func_313(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_718.f_1099)
	{
		if (*iParam0 == &Local_718.f_310[iVar0 /*14*/])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_314(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 < 0 || iParam0 >= Local_718.f_1098)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 8)
	{
		return 0;
	}
	iVar0 = &(Local_718.f_1[iParam0 /*22*/])->f_11[iParam1];
	if (iVar0 < 0 || iVar0 >= 45)
	{
		return 0;
	}
	if (func_11((Local_718.f_310[iVar0 /*14*/])->f_7, 16))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(&(Local_718.f_310[iVar0 /*14*/])))
	{
		return 0;
	}
	if (LAW::_0x40851BCC33ACD9AB(&(Local_718.f_310[iVar0 /*14*/])))
	{
		return 0;
	}
	if (LAW::_0x0EAF918F751F27BA(&(Local_718.f_310[iVar0 /*14*/])))
	{
		return 0;
	}
	return 1;
}

int func_315(int iParam0)
{
	return iParam0;
}

void func_316(int iParam0)
{
	if (!func_424(iParam0))
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

float func_317(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

bool func_318(var uParam0)
{
	return func_223(*uParam0, 2);
}

int func_319(int iParam0, int iParam1)
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
	if (func_211(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_211(iVar0, 2))
	{
		if (PED::_0x3AA24CCC0D451379(iParam0))
		{
			return 0;
		}
	}
	if (func_211(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_211(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_211(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_211(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return 0;
		}
	}
	if (func_211(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_211(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_320()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
	{
		return 1;
	}
	return 0;
}

int func_321(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

float func_322(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return -1f;
	}
	return func_323(Global_35, iParam0, bParam1, iParam2);
}

float func_323(int iParam0, int iParam1, bool bParam2, int iParam3)
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

int func_324(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_325(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, var uParam6, var uParam7)
{
	struct<7> Var0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = uParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = bParam4;
	Var0.f_6 = uParam7;
	return func_425(iParam0, &Var0);
}

int func_326()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

void func_327(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_34(uParam0, 134217728);
	}
	else
	{
		func_74(uParam0, 134217728);
	}
}

int func_328()
{
	int iVar0;

	iVar0 = func_330(Global_35, 0, 1, 0);
	if (((iVar0 == joaat("weapon_unarmed") || iVar0 == joaat("weapon_lasso")) || WEAPON::_0x959383DCD42040DA(iVar0)) || !WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return 0;
	}
	if (WEAPON::_0x705BE297EEBDB95D(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_329(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (func_328())
	{
		return func_330(Global_35, 0, 1, 0);
	}
	iVar0 = func_330(Global_35, 1, 1, 0);
	if (!func_201(iVar0))
	{
		iVar0 = func_330(Global_35, 2, 1, 0);
	}
	if (!func_201(iVar0))
	{
		iVar0 = func_330(Global_35, 3, 1, 0);
	}
	if (!func_201(iVar0))
	{
		iVar0 = func_330(Global_35, 9, 1, 0);
	}
	if (iVar0 != joaat("weapon_unarmed") && !func_354(Global_35, 716706914))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, false, 0, false, false);
		if (bParam1)
		{
			*iParam0++;
			iVar1 = 0;
		}
		else
		{
			iVar1 = Global_35;
		}
		TASK::TASK_SWAP_WEAPON(iVar1, 1, 0, 0, 0);
	}
	return iVar0;
}

int func_330(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

char* func_331(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "TRAIN_ROB_START_RIFLE";
		case 1:
			return "PISTOL_ARMED_ROB_START";
		default:
			break;
	}
	return "";
}

void func_332(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

bool func_333()
{
	return Global_1310750->f_16077 != 0;
}

int func_334(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (func_75(uParam2, 268435456))
	{
		return 0;
	}
	if (iParam3 == 0)
	{
		return 1;
	}
	if (iParam3 == (uParam0->f_1098 - 1))
	{
		return 1;
	}
	if (iParam3 == (uParam0->f_1098 / 2))
	{
		return 1;
	}
	return 0;
}

int func_335(var uParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;

	vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(&(uParam0->f_1[iParam1 /*22*/]), 6.5f, 0f, 0f) };
	vVar3 = { vVar0 };
	if (func_426(&vVar3, 3f))
	{
		vVar6 = { vVar0 - vVar3 };
		if (MISC::ABSF(vVar6.z) < 3f)
		{
			return 0;
		}
	}
	vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(&(uParam0->f_1[iParam1 /*22*/]), (-1f * 6.5f), 0f, 0f) };
	vVar3 = { vVar0 };
	if (func_426(&vVar3, 3f))
	{
		vVar6 = { vVar0 - vVar3 };
		if (MISC::ABSF(vVar6.z) < 3f)
		{
			return 0;
		}
	}
	return 1;
}

int func_336(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			if (ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				if (PED::GET_PED_SOURCE_OF_DEATH(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)) == iParam1)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_337(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam1 < 0 || iParam1 >= uParam0->f_1098)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < (uParam0->f_1[iParam1 /*22*/])->f_8)
	{
		iVar0 = &(uParam0->f_1[iParam1 /*22*/])->f_11[iVar1];
		if (iVar0 >= 0 && iVar0 < 45)
		{
			func_34(&((uParam0->f_310[iVar0 /*14*/])->f_7), 2048);
		}
		iVar1++;
	}
}

int func_338(var uParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (func_43(*uParam1, 2048))
	{
		return 1;
	}
	iVar0 = VEHICLE::_0x2963B5C1637E8A27(&(uParam0->f_1[0 /*22*/]));
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 1;
	}
	if (func_95(ENTITY::GET_ENTITY_COORDS(&(uParam0->f_310[iParam3 /*14*/]), true, false), 1140457472, 0))
	{
		return 1;
	}
	return 0;
}

void func_339(var uParam0, int iParam1)
{
	int iVar0;
	struct<13> Var1;
	int iVar24;

	iVar0 = 0;
	if ((uParam0->f_310[iParam1 /*14*/])->f_8 >= 0 && (uParam0->f_310[iParam1 /*14*/])->f_8 < uParam0->f_1098)
	{
		if ((uParam0->f_1[(uParam0->f_310[iParam1 /*14*/])->f_8 /*22*/])->f_7 == 0)
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(800, 1200);
		}
		else if ((uParam0->f_1[(uParam0->f_310[iParam1 /*14*/])->f_8 /*22*/])->f_7 == 1)
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(300, 600);
		}
	}
	if (iVar0 > 0)
	{
		Var1.f_1 = 10;
		Var1.f_12 = 10;
		MISC::_0xAD44856A1CD29635(Global_35, &(uParam0->f_310[iParam1 /*14*/]), &Var1);
		iVar24 = 0;
		while (iVar24 < Var1)
		{
			if (&Var1.f_1[iVar24] == 2084597891)
			{
				Var1.f_12[iVar24] = iVar0;
				MISC::_0xBB282CF5D2333FB8(&(uParam0->f_310[iParam1 /*14*/]), &Var1);
				return;
			}
			iVar24++;
		}
		if (Var1 >= 10)
		{
			Var1.f_12[0] = iVar0;
		}
		else
		{
			Var1.f_12[Var1] = iVar0;
			Var1++;
		}
		MISC::_0xBB282CF5D2333FB8(&(uParam0->f_310[iParam1 /*14*/]), &Var1);
	}
}

int func_340(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 < 0 && (uParam0->f_310[iParam1 /*14*/])->f_9 < 27f)
	{
		return 1;
	}
	if (iParam2 == 0 || iParam2 == 1)
	{
		return 1;
	}
	return 0;
}

void func_341(var uParam0, int* iParam1)
{
	func_427(iParam1, 0);
}

void func_342(var uParam0, bool bParam1)
{
	func_429((*uParam0)[0 /*17*/], func_428(7), 0, -163964935, 0, 0, 0, 1, 0);
	func_430((*uParam0)[0 /*17*/], 1);
	func_431((*uParam0)[0 /*17*/], 1);
	func_432((*uParam0)[0 /*17*/], 15f);
	func_429((*uParam0)[1 /*17*/], func_428(10), 0, 648122183, 0, 0, 0, 1, 0);
	func_430((*uParam0)[1 /*17*/], 1);
	func_431((*uParam0)[1 /*17*/], 1);
	func_432((*uParam0)[1 /*17*/], 15f);
	func_429((*uParam0)[2 /*17*/], "TRB_STOP_DRIVER", 0, -1616532217, 0, 0, 0, 1, 0);
	func_430((*uParam0)[2 /*17*/], 1);
	func_431((*uParam0)[2 /*17*/], bParam1);
	func_432((*uParam0)[2 /*17*/], 15f);
}

void func_343(var uParam0, bool bParam1)
{
	func_429((*uParam0)[0 /*17*/], func_428(8), 0, -163964935, 0, 0, 0, 1, 0);
	func_430((*uParam0)[0 /*17*/], 1);
	func_431((*uParam0)[0 /*17*/], 1);
	func_432((*uParam0)[0 /*17*/], 15f);
	func_429((*uParam0)[1 /*17*/], func_428(10), 0, 648122183, 0, 0, 0, 1, 0);
	func_430((*uParam0)[1 /*17*/], 1);
	func_431((*uParam0)[1 /*17*/], 1);
	func_432((*uParam0)[1 /*17*/], 15f);
	func_429((*uParam0)[2 /*17*/], "TRB_STOP_DRIVER", 0, -1616532217, 0, 0, 0, 1, 0);
	func_430((*uParam0)[2 /*17*/], 1);
	func_431((*uParam0)[2 /*17*/], bParam1);
	func_432((*uParam0)[2 /*17*/], 15f);
}

void func_344(var uParam0, bool bParam1)
{
	func_429((*uParam0)[0 /*17*/], func_428(8), 0, -163964935, 0, 0, 0, 1, 0);
	func_430((*uParam0)[0 /*17*/], 1);
	func_431((*uParam0)[0 /*17*/], bParam1);
	func_432((*uParam0)[0 /*17*/], 15f);
	func_429((*uParam0)[1 /*17*/], func_428(10), 0, 648122183, 0, 0, 0, 1, 0);
	func_430((*uParam0)[1 /*17*/], 1);
	func_431((*uParam0)[1 /*17*/], 1);
	func_432((*uParam0)[1 /*17*/], 15f);
	func_429((*uParam0)[2 /*17*/], "TRB_STOP_DRIVER", 0, -1616532217, 0, 0, 0, 1, 0);
	func_430((*uParam0)[2 /*17*/], 1);
	func_431((*uParam0)[2 /*17*/], bParam1);
	func_432((*uParam0)[2 /*17*/], 15f);
}

int func_345(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	switch (iParam0)
	{
		case 1:
			iVar0 = 64;
			break;
		case 3:
			iVar0 = 192;
			break;
		case 2:
			iVar0 = 208;
			break;
		case 4:
			iVar0 = 212;
			break;
		case 5:
			iVar0 = 77;
			break;
		case 7:
			iVar0 = 76;
			break;
		case 6:
			iVar0 = 96;
			break;
		default:
			iVar0 = 1;
			break;
	}
	iVar0 |= 16777216;
	if (iParam1 != 0)
	{
		iVar0 = (iVar0 || iParam1);
	}
	if (iParam2 != 0)
	{
		iVar0 = (iVar0 - (iVar0 && iParam2));
	}
	return iVar0;
}

int func_346(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	float fVar8;

	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		func_433(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::_0x92A78D0BEDB332A3(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar8 = func_434(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
		if (!iParam8 & 2097152 != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 184, true);
		}
		if (iParam8 & 8388608 != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 281, true);
		}
		if (bVar5)
		{
			bVar1 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35));
		}
		if (bVar7 || (bVar5 && bVar1))
		{
			func_81(&(iParam1->f_13));
		}
		if (func_435(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_436(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_346(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_437(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317, true))
						{
							func_438(*uParam0, 1, 1);
						}
					}
					else if (func_439(iParam1, 22))
					{
						func_438(*uParam0, 0, 1);
					}
				}
				if (func_440(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_441(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_442(iParam8);
					if (func_443(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET(uParam3[iParam1->f_1 /*17*/], 20))
								{
									func_444(uParam3);
								}
							}
							return iParam1->f_1;
						}
					}
					else if (iParam1->f_2 != 2)
					{
						if (iParam1->f_1 != -1)
						{
							iParam1->f_1 = -1;
						}
					}
				}
				else
				{
					func_445(iParam1, uParam3, fVar8);
					if (func_446(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						func_122(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_447(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_440(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_448(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_443(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_441(uParam0, func_440(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_442(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_122(uParam3, 0, 0, 1, 1);
					}
					func_332(iParam1, 1);
				}
				func_445(iParam1, uParam3, fVar8);
				if (func_447(uParam0, iParam1, fParam4, bVar6))
				{
					if (iParam8 & 512 != 0)
					{
						iParam1->f_2 = 0;
					}
					else
					{
						iParam1->f_2 = 1;
					}
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
		}
	}
	else if (!iParam8 & 1024 != 0)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 3))
		{
			func_449(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

char[] func_347(var uParam0)
{
	char cVar0[32];
	char cVar4[32];

	if (uParam0->f_11 == 0)
	{
		uParam0->f_11 = MISC::GET_RANDOM_INT_IN_RANGE(1, 20);
	}
	if (PED::IS_PED_MALE(*uParam0))
	{
		StringCopy(&cVar4, "INSULT_MALE_CONV", 32);
	}
	else
	{
		StringCopy(&cVar4, "INSULT_FEMALE_CONV", 32);
	}
	StringConCat(&cVar4, "_PART", 32);
	MISC::_INT_TO_STRING(1, "%d", &cVar0);
	StringConCat(&cVar4, &cVar0, 32);
	return func_450(cVar4);
}

bool func_348(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4)
{
	if (bParam2)
	{
		if (!func_451(iParam0, iParam1, 0f))
		{
			return false;
		}
	}
	if (!func_452(iParam0, iParam1, fParam3, 1))
	{
		return false;
	}
	if (iParam4 && ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		return PED::_0x9D9473CB82D83A30(iParam0, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 0) == 1;
	}
	return PED::_0x7F9B9791D4CB71F6(iParam0, iParam1, bParam2, 0) == 1;
}

int func_349(var uParam0, var uParam1, int iParam2)
{
	vector3 vVar0;

	if (VEHICLE::_0x2963B5C1637E8A27(&(uParam0->f_1[0 /*22*/])) == Global_35)
	{
		return 0;
	}
	if (func_323(&(uParam0->f_1[0 /*22*/]), Global_35, 1, 1) > 27f)
	{
		return 0;
	}
	if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(&(uParam0->f_310[&(uParam0->f_1[0 /*22*/])->f_11[0] /*14*/])))
	{
		return 0;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(&(uParam0->f_310[&(uParam0->f_1[0 /*22*/])->f_11[0] /*14*/]), true, false) };
	if (FIRE::_GET_ENTITY_INSIDE_EXPLOSION_AREA(-1, vVar0 + Vector(30f, 100f, 0f), vVar0 - Vector(30f, 100f, 0f), 30f) == func_453(Global_35))
	{
		return 0;
	}
	if (MISC::IS_PROJECTILE_IN_AREA(vVar0 + Vector(100f, 100f, 100f), vVar0 - Vector(100f, 100f, 100f), true))
	{
		return 0;
	}
	if (iParam2 < 2)
	{
		return 1;
	}
	if ((iParam2 < 3 && func_43(*uParam1, 8)) && ENTITY::IS_ENTITY_ON_SCREEN(&(uParam0->f_310[&(uParam0->f_1[0 /*22*/])->f_11[0] /*14*/])))
	{
		return 1;
	}
	return 0;
}

void func_350(var uParam0)
{
	char[] cVar0[8];

	func_454(0);
	if (!VEHICLE::IS_VEHICLE_STOPPED(&(uParam0->f_1[0 /*22*/])))
	{
		cVar0 = "CALL_OUT_TO_TRAIN_ENGINEER";
	}
	else
	{
		cVar0 = "ROB_SHOUTED";
	}
	func_134(Global_35, &(uParam0->f_310[&(uParam0->f_1[0 /*22*/])->f_11[0] /*14*/]), cVar0, 0, -1082130432, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
}

char* func_351()
{
	return "GET_OUT_CONDUCTOR";
}

char* func_352()
{
	return "GET_OUT";
}

char* func_353()
{
	return "LEAVE_NOW";
}

int func_354(int iParam0, int iParam1)
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

char* func_355()
{
	return "WHATS_GOING_ON_BACK_THERE";
}

char* func_356()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	switch (iVar0)
	{
		case 0:
		case default:
			return "GENERIC_ANGRY_REACTION";
		case 1:
			return "GET_AWAY_FROM_ME";
		case 2:
			return "DONT_BE_STUPID";
		}

char* func_357()
{
	return "NEED_HELP";
}

void func_358(int iParam0)
{
	PED::_0xBBF6D1D07C02D00A(iParam0, 32);
	PED::_0xBBF6D1D07C02D00A(iParam0, 1);
	PED::_0xBBF6D1D07C02D00A(iParam0, 31);
	PED::_0xBBF6D1D07C02D00A(iParam0, 4);
	PED::_0xBBF6D1D07C02D00A(iParam0, 0);
	PED::_0xBBF6D1D07C02D00A(iParam0, 6);
	PED::_0xBBF6D1D07C02D00A(iParam0, 5);
	PED::_0xBBF6D1D07C02D00A(iParam0, 26);
	PED::_0xBBF6D1D07C02D00A(iParam0, 33);
	PED::_0xBBF6D1D07C02D00A(iParam0, 15);
	PED::_0xBBF6D1D07C02D00A(iParam0, 27);
	PED::_0xBBF6D1D07C02D00A(iParam0, 28);
	PED::_0xBBF6D1D07C02D00A(iParam0, 3);
	PED::_0xBBF6D1D07C02D00A(iParam0, 14);
	PED::_0xBBF6D1D07C02D00A(iParam0, 16);
	PED::_0xAE6004120C18DF97(iParam0, 0, 1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 1, false);
}

int func_359(var uParam0, int iParam1)
{
	if (!func_125(&(uParam0->f_1115)))
	{
		func_362(&(uParam0->f_1115), 0);
		return 0;
	}
	else if (ENTITY::IS_ENTITY_ON_SCREEN(&(uParam0->f_310[iParam1 /*14*/])) && (uParam0->f_310[iParam1 /*14*/])->f_9 < 300f)
	{
		func_81(&(uParam0->f_1115));
		return 0;
	}
	else if (!func_127(&(uParam0->f_1115), 5f))
	{
		return 0;
	}
	if (ENTITY::GET_ENTITY_SPEED(&(uParam0->f_1[0 /*22*/])) > 0.2f)
	{
		return 0;
	}
	if (PED::IS_PED_RAGDOLL(&(uParam0->f_310[iParam1 /*14*/])))
	{
		return 0;
	}
	if (uParam0->f_310[iParam1 /*14*/])->f_9 < (19f / 2f)
	{
		return 0;
	}
	return 1;
}

Vector3 func_360(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;

	vVar3 = { ENTITY::GET_ENTITY_COORDS(&(uParam0->f_1[0 /*22*/]), true, false) };
	fVar6 = ENTITY::GET_ENTITY_HEADING(&(uParam0->f_1[0 /*22*/]));
	if (func_455(vVar3, ENTITY::GET_ENTITY_COORDS(&(uParam0->f_1[1 /*22*/]), true, false), Global_36))
	{
		vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar3, fVar6, -1.83f, -5f, 0f) };
	}
	else
	{
		vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar3, fVar6, 1.83f, -5f, 0f) };
	}
	vVar0.f_2 = (vVar0.z + 1f);
	if (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &(vVar0.f_2), 0))
	{
		return 0f, 0f, 0f;
	}
	if (CAM::IS_SPHERE_VISIBLE(vVar0, 1f))
	{
		return 0f, 0f, 0f;
	}
	return vVar0;
}

void func_361(var uParam0, int iParam1, var uParam2, int iParam3, vector3 vParam4)
{
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam1, 1, 1);
	ENTITY::SET_ENTITY_COORDS(iParam1, vParam4, true, false, true, true);
	func_281(uParam0, uParam2, iParam3);
}

void func_362(var uParam0, int iParam1)
{
	if (iParam1 || !func_125(uParam0))
	{
		func_81(uParam0);
	}
}

int func_363(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (func_11(uParam0->f_7, 2))
	{
		return 0;
	}
	iVar0 = *uParam0;
	if (!func_328())
	{
		return 0;
	}
	if (PED::_0xD0B7AEB56229D317(Global_35) == iVar0)
	{
		return 1;
	}
	if (!func_452(iVar0, Global_35, fParam1, 1))
	{
		return 0;
	}
	iVar1 = PED::_0x7F9B9791D4CB71F6(iVar0, Global_35, 0, 0);
	if (iVar1 == 0 || iVar1 == 2)
	{
		return 0;
	}
	if (func_368(iVar0, 1, 1, 1, 0, 0))
	{
		return 1;
	}
	if (func_456(iVar0, 15f, 35f, 1097859072, 0))
	{
		return 1;
	}
	return 0;
}

int func_364(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_457(uParam2, 1, iVar0);
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
			if (func_458(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_459(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_460(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_459(iParam0, uParam2, *uParam3);
					return 1;
				}
				else if (func_461(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_459(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_365(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_459(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_26 && func_183(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_459(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_462(uParam2, 1065353216))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_463(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_459(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_464(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_459(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_465(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_459(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			else if (func_465(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_459(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_466(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_459(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || uParam2->f_12 < 20f)
			{
				if (func_467(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_459(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_468(uParam2, 4000))
				{
					if ((func_469(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_470(uParam2, iParam0)) && func_471(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_459(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_469(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_470(uParam2, iParam0)) && func_471(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_459(iParam0, uParam2, *uParam3);
					return 1;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_472(iParam0, Global_1935630->f_41))
							{
								func_473();
								*uParam3 = 2;
								func_459(iParam0, uParam2, *uParam3);
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
						if (func_472(iParam0, Global_1935630->f_41))
						{
							func_473();
							*uParam3 = 2;
							func_459(iParam0, uParam2, *uParam3);
							return 1;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_474(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_326() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_473();
						*uParam3 = 2;
						func_459(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_475())
					{
						if (func_472(iParam0, Global_1935630->f_42))
						{
							func_473();
							*uParam3 = 2;
							func_459(iParam0, uParam2, *uParam3);
							return 1;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_476(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_459(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_477(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_459(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_478(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_459(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_479(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_459(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_480(uParam2, 4000))
				{
					if (func_481(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_459(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_482(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_459(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_483(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_459(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
	}
	return 0;
}

int func_365(int iParam0, var uParam1)
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
	if (func_484(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_485(uParam1)
		{
			fVar3 = func_486(uParam1);
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

int func_366(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (WEAPON::_0x6AD66548840472E5(func_487(iVar0, 0)))
		{
			if (func_488(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_367(var uParam0, int iParam1)
{
	if ((uParam0->f_310[iParam1 /*14*/])->f_9 <= 5f)
	{
		return 1;
	}
	if (func_489(PLAYER::PLAYER_ID(), &(uParam0->f_310[iParam1 /*14*/])))
	{
		return 1;
	}
	if (func_456(&(uParam0->f_310[iParam1 /*14*/]), 5f, 15f, 1097859072, 0))
	{
		return 1;
	}
	return 0;
}

int func_368(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5)
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
		if (((WEAPON::_0xCB690F680A3EA971(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, iParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_323(iVar0, iParam0, 1, 1) <= 4f)
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
		if (WEAPON::_0x6AD66548840472E5(func_487(iVar0, 0)))
		{
			if (func_490(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_369(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int* iParam5, var uParam6, var uParam7, var uParam8, int iParam9, int iParam10, int iParam11)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	bVar0 = true;
	if (ENTITY::IS_ENTITY_DEAD(&(uParam0->f_310[iParam4 /*14*/])))
	{
		bVar0 = false;
	}
	else if (!PED::IS_PED_USING_ANY_SCENARIO(&(uParam0->f_310[iParam4 /*14*/])) && !TASK::GET_IS_TASK_ACTIVE(&(uParam0->f_310[iParam4 /*14*/]), 3))
	{
		bVar0 = false;
	}
	else if ((uParam0->f_310[iParam4 /*14*/])->f_3 == 1 || (uParam0->f_310[iParam4 /*14*/])->f_3 == 0)
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		func_491(uParam0, uParam7, uParam1, uParam2, uParam8, iParam9, iParam5, uParam6, iParam3, iParam4, iParam10);
		if (func_11((uParam0->f_310[iParam4 /*14*/])->f_7, 2048))
		{
			func_341(uParam6, iParam5);
			if ((uParam0->f_310[iParam4 /*14*/])->f_4 == 19 || (uParam0->f_310[iParam4 /*14*/])->f_4 == 20)
			{
				func_122(uParam6, 0, 0, 1, 0);
			}
			else if (func_11((uParam0->f_310[iParam4 /*14*/])->f_7, 2) || func_11((uParam0->f_310[iParam4 /*14*/])->f_7, 4194304))
			{
				func_492(uParam6, func_11((uParam0->f_310[iParam4 /*14*/])->f_7, 67108864), 1);
			}
			else if (func_11((uParam0->f_310[iParam4 /*14*/])->f_7, 512))
			{
				func_492(uParam6, func_11((uParam0->f_310[iParam4 /*14*/])->f_7, 67108864), (func_11((uParam0->f_310[iParam4 /*14*/])->f_7, 134217728) || !func_75(uParam2, 1073741824)));
			}
			else
			{
				func_493(uParam6, func_11((uParam0->f_310[iParam4 /*14*/])->f_7, 134217728), func_11((uParam0->f_310[iParam4 /*14*/])->f_7, 4096), func_11((uParam0->f_310[iParam4 /*14*/])->f_7, 8192), !func_75(uParam2, 1073741824));
			}
			func_74(&((uParam0->f_310[iParam4 /*14*/])->f_7), 2048);
		}
		iVar2 = func_345(1, 0, 0) | 2048 | 16384 | 256 | 65536 | 2097152;
		iVar1 = func_346(uParam0->f_310[iParam4 /*14*/], iParam5, 19f, uParam6, 0, 3, 0, 0, iVar2, 0, 0, 2, (uParam0->f_310[iParam4 /*14*/])->f_9);
		func_74(&((uParam0->f_310[iParam4 /*14*/])->f_7), 33554432);
		if (func_439(iParam5, 1))
		{
			func_12(uParam1, 128, 1);
			*iParam11 = iParam4;
			func_34(&((uParam0->f_310[iParam4 /*14*/])->f_7), 33554432);
		}
		if (iVar1 != -1)
		{
			func_34(&((uParam0->f_310[iParam4 /*14*/])->f_7), 134217728);
		}
		switch (iVar1)
		{
			case 2:
				func_81((*uParam7)[1 /*3*/]);
				func_34(&((uParam0->f_310[iParam4 /*14*/])->f_7), 512);
				if (!func_43(*uParam1, 65536) || !func_11((uParam0->f_310[iParam4 /*14*/])->f_7, 512))
				{
					func_139(uParam0, iParam3, uParam7, uParam8, iParam9, uParam1, uParam2, iParam10, uParam6, iParam5, 0, 0);
					(uParam0->f_310[iParam4 /*14*/])->f_3 = 2;
					bVar3 = true;
				}
				else
				{
					func_121((*uParam7)[15 /*3*/]);
					if (!func_328())
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, func_171(), 0);
						func_14(uParam2, 134217728);
						HUD::_0x8BC7C1F929D07BF3(724769646);
						func_329(iParam10, 0);
					}
				}
				if (!bVar3)
				{
					func_494(uParam0, uParam1, iParam4, iParam3);
				}
				func_74(&((uParam0->f_310[iParam4 /*14*/])->f_7), 256);
				func_263(uParam0, iParam4, *uParam1);
				func_45(uParam0, iParam3);
				(uParam0->f_310[iParam4 /*14*/])->f_3 = 2;
				func_34(&((uParam0->f_310[iParam4 /*14*/])->f_7), 4194304);
				(uParam0->f_1[iParam3 /*22*/])->f_10++;
				func_341(uParam6, iParam5);
				func_99(uParam1);
				func_246(uParam0->f_310[iParam4 /*14*/], 9);
				return 1;
			case 1:
				if (!func_11((uParam0->f_310[iParam4 /*14*/])->f_7, 512))
				{
					func_341(uParam6, iParam5);
					func_45(uParam0, iParam3);
					if (PED::IS_PED_MALE(&(uParam0->f_310[iParam4 /*14*/])))
					{
						func_134(Global_35, &(uParam0->f_310[iParam4 /*14*/]), func_347(uParam0->f_310[iParam4 /*14*/]), 0, -1082130432, (uParam0->f_310[iParam4 /*14*/])->f_11, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
					}
					else
					{
						func_134(Global_35, &(uParam0->f_310[iParam4 /*14*/]), func_347(uParam0->f_310[iParam4 /*14*/]), 0, -1082130432, (uParam0->f_310[iParam4 /*14*/])->f_11, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
					}
					func_246(uParam0->f_310[iParam4 /*14*/], 8);
					func_34(&((uParam0->f_310[iParam4 /*14*/])->f_7), 4096);
					func_34(&((uParam0->f_310[iParam4 /*14*/])->f_7), 8192);
					func_34(&((uParam0->f_310[iParam4 /*14*/])->f_7), 2048);
				}
				break;
			case 0:
				func_341(uParam6, iParam5);
				func_45(uParam0, iParam3);
				if (!func_11((uParam0->f_310[iParam4 /*14*/])->f_7, 512))
				{
					if (func_320())
					{
						if (PED::IS_PED_MALE(&(uParam0->f_310[iParam4 /*14*/])))
						{
							func_134(Global_35, &(uParam0->f_310[iParam4 /*14*/]), "GREET_MALE", 0, -1082130432, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
						}
						else
						{
							func_134(Global_35, &(uParam0->f_310[iParam4 /*14*/]), "GREET_FEMALE", 0, -1082130432, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
						}
					}
					else
					{
						func_134(Global_35, &(uParam0->f_310[iParam4 /*14*/]), "GREET_GENERAL", 0, -1082130432, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
					}
					func_246(uParam0->f_310[iParam4 /*14*/], 8);
					func_34(&((uParam0->f_310[iParam4 /*14*/])->f_7), 4096);
					func_34(&((uParam0->f_310[iParam4 /*14*/])->f_7), 2048);
				}
				else
				{
					func_134(Global_35, &(uParam0->f_310[iParam4 /*14*/]), func_495(uParam0->f_310[iParam4 /*14*/]), 0, -1082130432, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
					func_34(&((uParam0->f_310[iParam4 /*14*/])->f_7), 67108864);
				}
				break;
		}
	}
	else if (func_439(iParam5, 1))
	{
		func_122(uParam6, 0, 0, 1, 0);
		func_332(iParam5, 1);
	}
	return 0;
}

int func_370(var uParam0, int iParam1, var uParam2)
{
	int iVar0;

	if ((uParam0->f_310[iParam1 /*14*/])->f_4 == 20)
	{
		return 0;
	}
	if ((uParam0->f_310[iParam1 /*14*/])->f_3 != 1)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 > 45)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(&(uParam0->f_310[iParam1 /*14*/])))
	{
		return 0;
	}
	if (ENTITY::GET_ENTITY_SPEED(&(uParam0->f_1[0 /*22*/])) < 1f)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_1098)
	{
		if (!VOLUME::_0x92A78D0BEDB332A3((uParam0->f_1[iVar0 /*22*/])->f_1))
		{
			return 0;
		}
		if (func_148(&(uParam0->f_310[iParam1 /*14*/]), (uParam0->f_1[iVar0 /*22*/])->f_1, 1, 0))
		{
			(uParam0->f_310[iParam1 /*14*/])->f_8 = iVar0;
			return 0;
		}
		iVar0++;
	}
	if ((ENTITY::IS_ENTITY_ON_SCREEN(&(uParam0->f_310[iParam1 /*14*/])) && (uParam0->f_310[iParam1 /*14*/])->f_9 < 300f) || (uParam0->f_310[iParam1 /*14*/])->f_9 < (19f * 4f))
	{
		*uParam2 = 1;
		return 0;
	}
	return 1;
}

void func_371(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, float fParam7)
{
	float fVar0;

	fVar0 = func_96(iParam0, Global_36, 1);
	switch (iParam1)
	{
		case 1:
			fParam2 = 100f;
			fParam3 = 200f;
			iParam4 = 3000;
			iParam5 = 1000;
			iParam6 = 4000;
			break;
		case 2:
			fParam2 = 60f;
			fParam3 = 120f;
			iParam4 = 1000;
			iParam5 = 1;
			iParam6 = 1000;
			break;
		case 0:
			fParam2 = 75f;
			fParam3 = 140f;
			iParam4 = 1000;
			iParam5 = 1;
			iParam6 = 1500;
			break;
		case 3:
			if (fParam2 < 0f)
			{
			}
			if (fParam3 < 0f)
			{
			}
			if (iParam4 < 0)
			{
			}
			if (iParam5 < 0)
			{
			}
			break;
	}
	if (fParam2 >= fParam3)
	{
	}
	PED::_0x39A2FC5AF55A52B1(iParam0, iParam6);
	if (fParam7 > 0f)
	{
		PED::_0x7C08E7CB8D951B70(iParam0, fParam7);
	}
	PED::_0x36E4B61DC56DE77C(iParam0, fParam2, fParam3, iParam4, iParam5);
}

void func_372(var uParam0, int iParam1, int iParam2, int* iParam3, var uParam4, var uParam5)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_11((uParam0->f_310[iParam1 /*14*/])->f_7, 32768);
	iVar1 = func_496(uParam0, iParam1, iParam3, uParam4, uParam5);
	if (iVar1 != -1)
	{
		func_120(uParam0, iParam2, 0);
	}
	switch (iVar1)
	{
		case 0:
			if (bVar0)
			{
				func_341(uParam4, iParam3);
				func_34(&((uParam0->f_310[iParam1 /*14*/])->f_7), 2048);
				func_134(Global_35, &(uParam0->f_310[iParam1 /*14*/]), "DEFUSE_ARGUMENT_TOUGH", 0, -1082130432, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				func_34(&((uParam0->f_310[iParam1 /*14*/])->f_7), 268435456);
				func_74(&((uParam0->f_310[iParam1 /*14*/])->f_7), 134217728);
			}
			else
			{
				func_341(uParam4, iParam3);
				func_34(&((uParam0->f_310[iParam1 /*14*/])->f_7), 2048);
				func_134(&(uParam0->f_310[iParam1 /*14*/]), Global_35, "GREET_GENERAL_STRANGER", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			break;
		case 1:
			func_341(uParam4, iParam3);
			func_34(&((uParam0->f_310[iParam1 /*14*/])->f_7), 2048);
			func_34(&((uParam0->f_310[iParam1 /*14*/])->f_7), 8192);
			break;
	}
}

void func_373(var uParam0, bool bParam1)
{
	func_429((*uParam0)[0 /*17*/], func_428(8), 0, -163964935, 0, 0, 0, 1, 0);
	func_430((*uParam0)[0 /*17*/], 1);
	func_431((*uParam0)[0 /*17*/], bParam1);
	func_432((*uParam0)[0 /*17*/], 15f);
	func_429((*uParam0)[1 /*17*/], func_428(10), 0, 648122183, 0, 0, 0, 1, 0);
	func_430((*uParam0)[1 /*17*/], 1);
	func_431((*uParam0)[1 /*17*/], 1);
	func_432((*uParam0)[1 /*17*/], 15f);
	func_429((*uParam0)[2 /*17*/], func_428(12), 0, -1616532217, 0, 0, 0, 1, 0);
	func_430((*uParam0)[2 /*17*/], 0);
	func_432((*uParam0)[2 /*17*/], 15f);
}

void func_374(var uParam0, bool bParam1)
{
	func_429((*uParam0)[0 /*17*/], func_428(7), 0, -163964935, 0, 0, 0, 1, 0);
	func_430((*uParam0)[0 /*17*/], 1);
	func_431((*uParam0)[0 /*17*/], 1);
	func_432((*uParam0)[0 /*17*/], 15f);
	func_429((*uParam0)[1 /*17*/], func_428(10), 0, 648122183, 0, 0, 0, 1, 0);
	func_430((*uParam0)[1 /*17*/], 1);
	func_431((*uParam0)[1 /*17*/], 1);
	func_432((*uParam0)[1 /*17*/], 15f);
	func_429((*uParam0)[2 /*17*/], func_428(12), 0, -1616532217, 0, 0, 0, 1, 0);
	func_430((*uParam0)[2 /*17*/], 0);
	func_432((*uParam0)[2 /*17*/], 15f);
}

bool func_375(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam3 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam1))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iParam1, true, 0);
}

char* func_376()
{
	return "FINAL_WARNING";
}

int func_377(var uParam0, var uParam1, int iParam2)
{
	if (iParam2 < 0)
	{
		return 0;
	}
	if (!func_43(*uParam1, 64))
	{
		return 0;
	}
	if (func_43(*uParam1, 8))
	{
		return 0;
	}
	if ((uParam0->f_1[iParam2 /*22*/])->f_6 == 2)
	{
		return 0;
	}
	return 1;
}

void func_378(var uParam0)
{
	if (!func_125(uParam0))
	{
	}
	if (!func_318(uParam0))
	{
		uParam0->f_2 = (func_301() - uParam0->f_1);
		func_302(uParam0, 2);
	}
}

void func_379(var uParam0, int iParam1)
{
	if (!func_11((uParam0->f_310[iParam1 /*14*/])->f_7, 131072))
	{
		if (func_354(&(uParam0->f_310[iParam1 /*14*/]), 242628503) && TASK::GET_SEQUENCE_PROGRESS(&(uParam0->f_310[iParam1 /*14*/])) == 1)
		{
			TASK::CLEAR_PED_TASKS(&(uParam0->f_310[iParam1 /*14*/]), 1, 0);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(&(uParam0->f_310[iParam1 /*14*/]), Global_35, -1, -1082130432, -1082130432, -1082130432);
		}
	}
	else if (func_354(&(uParam0->f_310[iParam1 /*14*/]), 242628503) && TASK::GET_SEQUENCE_PROGRESS(&(uParam0->f_310[iParam1 /*14*/])) == 0)
	{
		TASK::CLEAR_PED_TASKS(&(uParam0->f_310[iParam1 /*14*/]), 1, 0);
		TASK::TASK_AIM_GUN_AT_ENTITY(&(uParam0->f_310[iParam1 /*14*/]), Global_35, -1, 0, 1);
	}
}

bool func_380(var uParam0, int iParam1, int iParam2)
{
	bool bVar0;
	vector3 vVar1;
	float fVar4;

	if (func_11((uParam0->f_310[iParam2 /*14*/])->f_7, 32768) || !PED::_0xD5FE956C70FF370B(Global_35))
	{
		bVar0 = func_348(&(uParam0->f_310[iParam2 /*14*/]), Global_35, 0, 19f, 0);
	}
	else
	{
		bVar0 = ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(&(uParam0->f_310[iParam2 /*14*/]), Global_35, 17);
	}
	if (!bVar0)
	{
		if (func_375(Global_35, (uParam0->f_1[iParam1 /*22*/])->f_2, 148, 1))
		{
			vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(&(uParam0->f_310[iParam2 /*14*/]), ENTITY::GET_ENTITY_COORDS(Global_35, true, false)) };
			fVar4 = 2f;
			if (func_11((uParam0->f_310[iParam2 /*14*/])->f_7, 32768))
			{
				fVar4 = 6f;
			}
			if (vVar1.x < 0f)
			{
				vVar1.x = (vVar1.x * -1f);
			}
			if (vVar1.y > 0f && vVar1.x < fVar4)
			{
				bVar0 = true;
			}
		}
	}
	return bVar0;
}

void func_381(var uParam0, int iParam1, int iParam2)
{
	if (!func_11((uParam0->f_1[iParam2 /*22*/])->f_4, 2048))
	{
		func_34(&((uParam0->f_310[iParam1 /*14*/])->f_7), 16777216);
		func_34(&((uParam0->f_1[iParam2 /*22*/])->f_4), 2048);
		(uParam0->f_1[iParam2 /*22*/])->f_20 = iParam1;
	}
}

void func_382(var uParam0, int iParam1)
{
	if (func_11((uParam0->f_1[iParam1 /*22*/])->f_4, 2048))
	{
		func_74(&((uParam0->f_310[(uParam0->f_1[iParam1 /*22*/])->f_20 /*14*/])->f_7), 16777216);
		func_74(&((uParam0->f_1[iParam1 /*22*/])->f_4), 2048);
		(uParam0->f_1[iParam1 /*22*/])->f_20 = -1;
	}
}

void func_383(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_497(uParam0, iParam1);
	iVar1 = func_497(uParam0, iParam2);
	if (iVar0 >= iVar1)
	{
		return;
	}
	switch (iVar1)
	{
		case 3:
			func_34(&((uParam0->f_310[iParam1 /*14*/])->f_7), 131072);
		case 2:
			func_34(&((uParam0->f_310[iParam1 /*14*/])->f_7), 65536);
		case 1:
			func_34(&((uParam0->f_310[iParam1 /*14*/])->f_7), 32768);
		default:
			break;
	}
}

void func_384(var uParam0)
{
	if (!func_125(uParam0))
	{
	}
	if (func_318(uParam0))
	{
		uParam0->f_1 = (func_301() - uParam0->f_2);
		uParam0->f_2 = 0f;
		func_303(uParam0, 2);
	}
}

int func_385(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam3 != -1)
	{
		return 0;
	}
	if (VEHICLE::IS_VEHICLE_STOPPED(&(uParam0->f_1[0 /*22*/])))
	{
		return 0;
	}
	if (func_11((uParam0->f_1[iParam2 /*22*/])->f_4, 128))
	{
		return 0;
	}
	return 1;
}

char* func_386()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	switch (iVar0)
	{
		case 0:
		case default:
			return "SPOTTED_ENTERING_FAR";
		case 1:
			return "GET_LOST";
		case 2:
			return "DISCOVERED_FAR";
		}

int func_387(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, var uParam5)
{
	if (func_11((uParam0->f_310[iParam1 /*14*/])->f_7, 524288))
	{
		return 0;
	}
	if (func_498(uParam0, iParam2))
	{
		return 1;
	}
	if (!bParam4)
	{
		if (func_11((uParam0->f_310[iParam1 /*14*/])->f_7, 67108864))
		{
			return 0;
		}
		if (func_11((uParam0->f_310[iParam1 /*14*/])->f_7, 268435456))
		{
			return 1;
		}
	}
	else if (func_11((uParam0->f_310[iParam1 /*14*/])->f_7, 131072) && func_377(uParam0, uParam5, iParam3))
	{
		return 1;
	}
	return 0;
}

char* func_388(bool bParam0)
{
	if (bParam0)
	{
		return "KEEP_GOING";
	}
	return "GUARD_PLAYER_LOITERING";
}

char* func_389()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	switch (iVar0)
	{
		case 0:
		case default:
			return "SPOTTED_ENTERING_NEAR";
		case 1:
			return "WARNING";
		case 2:
			return "WARNED_ALREADY";
		}

char* func_390()
{
	return "OPENS_FIRE";
}

int func_391(var uParam0, int iParam1, var uParam2)
{
	if (!func_43(*uParam2, 64))
	{
		return 1;
	}
	if (uParam0->f_310[iParam1 /*14*/])->f_9 > (2.75f + 1f)
	{
		return 1;
	}
	if ((uParam0->f_310[iParam1 /*14*/])->f_12 == 0)
	{
		return 0;
	}
	if ((MISC::GET_GAME_TIMER() - (uParam0->f_310[iParam1 /*14*/])->f_12) < 3000)
	{
		return 0;
	}
	return 1;
}

char* func_392()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	switch (iVar0)
	{
		case 0:
		case default:
			return "OPENS_FIRE";
		case 1:
			return "TAUNT_GEN_NEUTRAL";
		case 2:
			return "TAUNT_GEN_MALE";
		}

int func_393(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(iParam0->f_1[iVar0 /*22*/])))
		{
			if (VOLUME::_0x92A78D0BEDB332A3((iParam0->f_1[iVar0 /*22*/])->f_1) && ENTITY::IS_ENTITY_IN_VOLUME(&(iParam0->f_310[iParam1 /*14*/]), (iParam0->f_1[iVar0 /*22*/])->f_1, true, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_394(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	vector3 vVar1;

	switch (iParam2)
	{
		case 5:
			PED::SET_PED_COMBAT_MOVEMENT(&(iParam0->f_310[iParam1 /*14*/]), 1);
			PED::SET_PED_COMBAT_RANGE(&(iParam0->f_310[iParam1 /*14*/]), 2);
			PED::SET_PED_COMBAT_ATTRIBUTES(&(iParam0->f_310[iParam1 /*14*/]), 50, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(&(iParam0->f_310[iParam1 /*14*/]), 42, false);
			PED::SET_PED_CONFIG_FLAG(&(iParam0->f_310[iParam1 /*14*/]), 189, true);
			PED::_0x78815FC52832B690(&(iParam0->f_310[iParam1 /*14*/]), 1);
			PED::_0xFC3DB99C8144CD81(&(iParam0->f_310[iParam1 /*14*/]), (iParam0->f_1[(iParam0->f_310[iParam1 /*14*/])->f_8 /*22*/])->f_2, 0, 0, 0);
			break;
		case 0:
			PED::SET_PED_COMBAT_MOVEMENT(&(iParam0->f_310[iParam1 /*14*/]), 2);
			PED::SET_PED_COMBAT_RANGE(&(iParam0->f_310[iParam1 /*14*/]), 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(&(iParam0->f_310[iParam1 /*14*/]), 50, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(&(iParam0->f_310[iParam1 /*14*/]), 42, true);
			PED::SET_PED_CONFIG_FLAG(&(iParam0->f_310[iParam1 /*14*/]), 189, false);
			PED::_0x78815FC52832B690(&(iParam0->f_310[iParam1 /*14*/]), 1);
			func_499(&(iParam0->f_310[iParam1 /*14*/]));
			break;
		case 1:
			PED::SET_PED_COMBAT_MOVEMENT(&(iParam0->f_310[iParam1 /*14*/]), 1);
			PED::SET_PED_COMBAT_RANGE(&(iParam0->f_310[iParam1 /*14*/]), 2);
			PED::SET_PED_COMBAT_ATTRIBUTES(&(iParam0->f_310[iParam1 /*14*/]), 50, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(&(iParam0->f_310[iParam1 /*14*/]), 42, false);
			PED::_0x78815FC52832B690(&(iParam0->f_310[iParam1 /*14*/]), 1);
			PED::SET_PED_CONFIG_FLAG(&(iParam0->f_310[iParam1 /*14*/]), 189, true);
			func_499(&(iParam0->f_310[iParam1 /*14*/]));
			break;
		case 2:
			PED::SET_PED_COMBAT_MOVEMENT(&(iParam0->f_310[iParam1 /*14*/]), 1);
			PED::SET_PED_COMBAT_RANGE(&(iParam0->f_310[iParam1 /*14*/]), 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(&(iParam0->f_310[iParam1 /*14*/]), 50, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(&(iParam0->f_310[iParam1 /*14*/]), 42, false);
			PED::_0x8ACC0506743A8A5C(&(iParam0->f_310[iParam1 /*14*/]), 1093694531, 1, -1082130432);
			PED::SET_PED_CONFIG_FLAG(&(iParam0->f_310[iParam1 /*14*/]), 189, true);
			func_499(&(iParam0->f_310[iParam1 /*14*/]));
			break;
		case 3:
			PED::SET_PED_COMBAT_MOVEMENT(&(iParam0->f_310[iParam1 /*14*/]), 2);
			PED::SET_PED_COMBAT_RANGE(&(iParam0->f_310[iParam1 /*14*/]), 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(&(iParam0->f_310[iParam1 /*14*/]), 50, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(&(iParam0->f_310[iParam1 /*14*/]), 42, false);
			PED::_0x8ACC0506743A8A5C(&(iParam0->f_310[iParam1 /*14*/]), 1093694531, 1, -1082130432);
			PED::SET_PED_CONFIG_FLAG(&(iParam0->f_310[iParam1 /*14*/]), 189, true);
			func_499(&(iParam0->f_310[iParam1 /*14*/]));
			break;
		case 4:
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(iParam0->f_310[iParam1 /*14*/]), true);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(&(iParam0->f_1[1 /*22*/]), ENTITY::GET_ENTITY_COORDS(&(iParam0->f_310[iParam1 /*14*/]), true, false)) };
			TASK::TASK_GOTO_ENTITY_OFFSET_XY_AIMING(0, &(iParam0->f_1[1 /*22*/]), 0, -1, 0.65f, vVar1.x, -4f, 2f, 17);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, &(iParam0->f_1[1 /*22*/]), 0, 3f, -1082130432, -1082130432);
			TASK::TASK_CLIMB(0, true);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(&(iParam0->f_310[iParam1 /*14*/]), iVar0);
			PED::SET_PED_CONFIG_FLAG(&(iParam0->f_310[iParam1 /*14*/]), 189, true);
			break;
	}
	(iParam0->f_310[iParam1 /*14*/])->f_5 = iParam2;
}

void func_395(var uParam0, int iParam1, var uParam2)
{
	if (func_500(uParam0, iParam1))
	{
		func_84(uParam0->f_310[iParam1 /*14*/]);
		(uParam0->f_310[iParam1 /*14*/])->f_4 = 20;
		uParam0->f_1101++;
	}
}

int func_396()
{
	return joaat("s_m_m_unitrainguards_01");
}

bool func_397(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char cVar5[128];
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	float fVar25;

	if (!bParam12 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	switch (iParam1)
	{
		case -1212426201:
		case -1101297303:
		case -594562071:
		case 416676503:
		case 860033945:
		case 970310034:
			bVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(bVar0))
			{
				bVar0 = joaat("weapon_unarmed");
			}
			break;
		default:
			if (!WEAPON::IS_WEAPON_VALID(iParam1))
			{
				return iParam1;
			}
			bVar0 = iParam1;
			if ((WEAPON::_0x705BE297EEBDB95D(bVar0) || WEAPON::_0x959383DCD42040DA(bVar0)) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == 1030835986)
			{
				StringCopy(&cVar5, WEAPON::_0x89CF5FF3D363311E(bVar0), 128);
				iVar2 = WEAPON::_0xD42514C182121C23(ENTITY::GET_ENTITY_MODEL(iParam0));
				if (!Global_43890 && MISC::_DOES_STRING_EXIST_IN_STRING(&cVar5, "_DUALWIELD"))
				{
					StringCopy(&cVar5, HUD::_0x806862E5D266CF38(&cVar5, 0, (HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar5) - HUD::GET_LENGTH_OF_LITERAL_STRING("_DUALWIELD"))), 128);
					iVar3 = MISC::GET_HASH_KEY(&cVar5);
					if (func_201(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
					{
						bVar21 = true;
					}
				}
				if (!bVar21)
				{
					iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(bVar0);
					if (iVar1 != 0 && iVar2 != 0)
					{
						iVar4 = WEAPON::_0x9EEFD670F10656D7(iVar2, iVar1);
						if (!Global_43890)
						{
							if (func_201(iVar4) && iVar4 != bVar0)
							{
								bVar0 = iVar4;
							}
						}
						else if (iVar4 == bVar0)
						{
						}
					}
				}
			}
			break;
	}
	if (func_187() == -1 && !func_501(bVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, bVar0, 0, 0) && iParam0 != Global_35)
		{
			bVar22 = true;
		}
		else if (((iVar4 == bVar0 && !Global_43890) && iParam0 != Global_35) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == 1030835986)
		{
			bVar22 = true;
		}
		else
		{
			bVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(bVar0))
			{
				bVar0 = joaat("weapon_unarmed");
			}
		}
	}
	if (bVar0 == joaat("weapon_unarmed") && iParam1 == joaat("weapon_unarmed"))
	{
		return bVar0;
	}
	else if (bVar0 == joaat("weapon_unarmed"))
	{
		switch (iParam1)
		{
			case -1101297303:
			case 416676503:
				bVar0 = joaat("weapon_revolver_cattleman");
				break;
			case -1212426201:
			case -594562071:
			case 860033945:
			case 970310034:
				if (func_501(joaat("weapon_repeater_carbine")))
				{
					bVar0 = joaat("weapon_repeater_carbine");
				}
				else
				{
					bVar0 = joaat("weapon_revolver_cattleman");
				}
				break;
			default:
				bVar0 = joaat("weapon_revolver_cattleman");
				break;
		}
	}
	else if (bVar0 == joaat("weapon_melee_lantern") && iParam0 == Global_35)
	{
		bVar0 = joaat("weapon_melee_davy_lantern");
	}
	if (iParam9 < 0)
	{
		if (iParam0 != Global_35 && func_201(bVar0))
		{
			WEAPON::GET_MAX_AMMO(iParam0, &iParam9, bVar0);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else if ((!WEAPON::_0x959383DCD42040DA(bVar0) && bVar0 != joaat("weapon_unarmed")) && !WEAPON::_0x79407D33328286C6(bVar0))
		{
			iVar23 = WEAPON::GET_PED_AMMO_BY_TYPE(iParam0, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(iParam0, bVar0));
			iVar24 = WEAPON::_0xD3750CCC00635FC2(bVar0) * 3;
			iParam9 = (iVar24 - iVar23);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else
		{
			iParam9 = 0;
		}
	}
	if (iParam6 && bParam2)
	{
		bParam5 = false;
	}
	if (iParam0 == Global_35)
	{
		func_502(bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_503(iParam0, &bVar0, &fVar25);
		bVar0 = WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_504(bVar0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, bParam3, bVar0);
		}
	}
	else if (bParam10)
	{
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), bVar0, iParam4);
	}
	return bVar0;
}

void func_398(var uParam0)
{
	PED::SET_PED_CONFIG_FLAG(*uParam0, 307, true);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 43, true);
	PED::SET_PED_COMBAT_MOVEMENT(*uParam0, 1);
	PED::SET_PED_COMBAT_ABILITY(*uParam0, 2);
	PED::_0xBD75500141E4725C(*uParam0, 298468673);
	PED::SET_PED_COMBAT_RANGE(*uParam0, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 58, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 6, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 17, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 5, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 3, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 50, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 42, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 30, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 24, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 71, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 73, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 47, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 31, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 1, false);
	PED::SET_COMBAT_FLOAT(*uParam0, 13, 7.5f);
	PED::SET_PED_ACCURACY(*uParam0, 50);
}

int func_399()
{
	return joaat("s_m_m_unitrainengineer_01");
}

char* func_400(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case joaat("s_m_m_unitrainengineer_01"):
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			switch (iVar0)
			{
				case 0:
				case default:
					return "0835_S_M_M_GenConductor_01_WHITE_01";
				case 1:
					return "0836_S_M_M_GenConductor_01_WHITE_02";
				case 2:
					return "0837_S_M_M_GenConductor_01_WHITE_03";
					break;
				case joaat("s_m_m_unitrainguards_01"):
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
					switch (iVar0)
					{
						case 0:
						case default:
							return "0946_A_M_M_Guard_White_AGGRESSIVE_01";
						case 1:
							return "0947_A_M_M_Guard_White_AGGRESSIVE_02";
						case 2:
							return "0948_A_M_M_Guard_White_AGGRESSIVE_03";
						case 3:
							return "0949_A_M_M_Guard_White_AGGRESSIVE_04";
						case 4:
							return "0950_A_M_M_Guard_White_AGGRESSIVE_05";
						case 5:
							return "0951_A_M_M_Guard_White_AGGRESSIVE_06";
						case 6:
							return "0952_A_M_M_Guard_White_AGGRESSIVE_07";
						case 7:
							return "0953_A_M_M_Guard_White_AGGRESSIVE_08";
						case 8:
							return "0954_A_M_M_Guard_White_AGGRESSIVE_09";
						case 9:
							return "0955_A_M_M_Guard_White_AGGRESSIVE_10";
							break;
					}
					return "";
				}

void func_401(int iParam0, char* sParam1, int iParam2)
{
	if (iParam2 || func_402(iParam0, 0, 0))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "HAS_VOICE", true);
		AUDIO::SET_AMBIENT_VOICE_NAME(iParam0, sParam1);
	}
}

bool func_402(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_319(iParam0, iParam1);
}

bool func_403(int iParam0)
{
	return AUDIO::_0xA2CAC9DEF0195E6F(iParam0);
}

bool func_404(int iParam0, int iParam1)
{
	if (func_187() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iParam0]), iParam1);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iParam0]), iParam1);
}

int func_405(int iParam0)
{
	if (func_187() != -1)
	{
		if (func_407(iParam0, 4))
		{
			return 0;
		}
	}
	else if (func_407(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

int func_406(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_407(iParam0, 65536) && !func_407(iParam0, 32768))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if ((Global_40.f_7756[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_407(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0 /*3*/] - iVar1);
			if ((Global_40.f_7756[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && func_407(iParam0, 32768))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_407(int iParam0, int iParam1)
{
	return ((Global_1905944->f_22[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

bool func_408(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_409()
{
	return Global_1905944->f_5694;
}

int func_410(int iParam0)
{
	if (!func_198(iParam0))
	{
		return -1;
	}
	return func_505(iParam0);
}

int func_411(var uParam0, int iParam1, float fParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_1[iParam1 /*22*/])))
	{
		return 0;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), ENTITY::GET_ENTITY_COORDS(&(uParam0->f_1[iParam1 /*22*/]), true, false), true) <= fParam2)
	{
		return 1;
	}
	return 0;
}

Vector3 func_412(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { 0f, 0f, 0f };
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return vVar0;
	}
	iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "Gun_Muzzle");
	vVar4 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iParam0, iVar3) };
	vVar7 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 1f, 0f, 0f) - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	vVar7 = { vVar7 / FtoV(BUILTIN::VMAG(vVar7)) };
	vVar0 = { vVar4 + Vector(0.1f, 0.1f, 0.1f) * vVar7 };
	return vVar0;
}

Vector3 func_413(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { 0f, 0f, 0f };
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return vVar0;
	}
	iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "Gun_Muzzle");
	vVar4 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iParam0, iVar3) };
	vVar7 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 1f, 0f, 0f) - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	vVar7 = { vVar7 / FtoV(BUILTIN::VMAG(vVar7)) };
	vVar0 = { vVar4 + vVar7 };
	return vVar0;
}

int func_414()
{
	float fVar0;

	fVar0 = 250f;
	if (func_309(vLocal_696, 1) == 5)
	{
		fVar0 = 475f;
	}
	if (fLocal_695 < fVar0)
	{
		return 1;
	}
	return 0;
}

bool func_415(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_416(char* sParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	*uParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_506(bParam4), sParam0, iParam3, uParam2);
	if (*uParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_417(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_418(int iParam0)
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

bool func_419(int iParam0)
{
	return WEAPON::_0xC4DEC3CA8C365A5D(iParam0);
}

bool func_420(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_421(int iParam0)
{
	if ((iParam0 == 22 || iParam0 == 37) && !func_507())
	{
		return 1;
	}
	if (iParam0 == 61)
	{
		return 1;
	}
	return 0;
}

int func_422(vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	iVar0 = func_508(vParam0);
	iVar1 = -1;
	if (Global_1894882[iVar0] > 0)
	{
		iVar2 = (Global_1894882[iVar0] - 1);
		bVar3 = false;
		while (iVar2 >= 0 && !bVar3)
		{
			iVar4 = (*Global_1894065)[iVar0 /*51*/][iVar2];
			if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1888801)[iVar4 /*35*/])->f_3))
			{
				if (VOLUME::_0xF256A75210C5C0EB(((*Global_1888801)[iVar4 /*35*/])->f_3, vParam0))
				{
					switch (((*Global_1888801)[iVar4 /*35*/])->f_20)
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

bool func_423(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_424(int iParam0)
{
	return func_509(iParam0, 2);
}

var func_425(var uParam0, var uParam1)
{
	return AUDIO::_PLAY_AMBIENT_SPEECH1(uParam0, uParam1);
}

int func_426(var uParam0, float fParam1)
{
	vector3 vVar0;
	var uVar3;

	vVar0 = { *uParam0 };
	vVar0.f_2 = (vVar0.z + fParam1);
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar3, 0))
	{
		uParam0->f_2 = uVar3;
		return 1;
	}
	return 0;
}

void func_427(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_121(&(uParam0->f_18));
}

char* func_428(int iParam0)
{
	if (func_510(iParam0))
	{
		switch (iParam0)
		{
			case 0:
				return "GREET_POS";
			case 1:
				return "GREET_NEG";
			case 2:
				return "GREET_SPOS";
			case 3:
				return "GREET_SNEG";
			case 4:
				return "GREET_ACC";
			case 5:
				return "GREET_REJ";
			case 6:
				return "BEAT_GRT_NEG";
			case 7:
				return "INTERACT_GREET";
			case 8:
				return "INTERACT_DEFUSE";
			case 9:
				return "INTERACT_LET_GO";
			case 10:
				return "INTERACT_INSULT";
			case 11:
				return "INTERACT_THREATEN";
			case 12:
				return "INTERACT_ROB";
			case 13:
				return "INTERACT_ROB_GRAPPLE_LET_GO";
			case 14:
				return "INTERACT_ROB_ACCEPT";
			case 15:
				return "INTERACT_ROB_REJECT_MELEE";
			case 16:
				return "INTERACT_STOP_WITNESS";
			case 17:
				return "INTERACT_STOP_VEHICLE";
			case 18:
				return "INTERACT_STOP_HORSE";
			case 19:
				return "INTERACT_REQUEST_RIDE";
			case 20:
				return "INTERACT_STEAL_HORSE";
			case 21:
				return "INTERACT_STEAL_VEHICLE";
			case 22:
				return "INTERACT_HORSE";
			case 23:
				return "INTERACT_CALLOUT";
			case 24:
				return "INTERACT_QUESTION";
			case 25:
				return "INTERACT_ENCOURAGE";
			case 26:
				return "INTERACT_INTERVENE";
			case 27:
				return "INTERACT_CONFRONT";
			case 28:
				return "RE_INTER_TRUTH";
			case 29:
				return "RE_INTER_LIE";
			case 30:
				return "INTERACT_QUIT";
			case 31:
				return "RE_INTER_DIRECT";
			case 32:
				return "INTERACT_SCOLD";
			case 33:
				return "INTERACT_PRAISE";
			case 34:
				return "INTERACT_ASSIST";
			case 35:
				return "INTERACT_MISLEAD";
			case 36:
				return "INTERACT_ASK";
			case 37:
				return "INTERACT_DEMAND";
			default:
				break;
		}
	}
	return "PED_INTERACT_PROMPT_LABEL_ERROR";
}

void func_429(int* iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = sParam1;
	iParam0->f_7 = iParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = iParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (func_218(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				func_511(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_512(iParam0->f_6, iParam0->f_5, 0);
			}
			func_513(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		func_514(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

void func_430(int* iParam0, bool bParam1)
{
	func_515(iParam0, !bParam1);
}

void func_431(int* iParam0, bool bParam1)
{
	func_516(iParam0, !bParam1, 0);
}

void func_432(int* iParam0, float fParam1)
{
	if (fParam1 <= 0f)
	{
		func_517(iParam0, 0);
	}
	else
	{
		func_518(iParam0, fParam1);
	}
}

void func_433(var uParam0)
{
	if (*uParam0 & 1 != 0)
	{
		*uParam0 |= 64 | 16 | 16777216;
	}
}

float func_434(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_435(int iParam0, var uParam1, var uParam2)
{
	if (uParam1->f_11 != 0)
	{
		if (func_519(iParam0, uParam1))
		{
			if (!func_11(uParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
				func_122(uParam2, 0, 0, 1, 0);
				func_34(&(uParam1->f_10), 1);
			}
			return 1;
		}
		else if (func_11(uParam1->f_10, 1))
		{
			func_520(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
			func_74(&(uParam1->f_10), 1);
		}
	}
	return 0;
}

int func_436(var uParam0, int* iParam1, var uParam2, float fParam3, var uParam4, char* sParam5, int iParam6, float fParam7)
{
	char cVar0[32];
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;

	if (fParam7 > (fParam3 + 5f))
	{
		return 0;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		bVar4 = func_11(uParam4, 32);
		func_521(iParam1, uParam2, 0);
		iVar5 = func_522(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return 1;
		}
		func_122(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_11(uParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_11(uParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_11(uParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_11(uParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_11(uParam4, 8388608) || func_11(uParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_11(uParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_11(uParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_439(iParam1, 4))
		{
			iVar6 |= 1024;
			EVENT::_0xBB1E41DD3D3C6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_439(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_11(uParam4, 67108864))
		{
			iVar6 |= 16384;
		}
		if (iParam1->f_6 < -1 || (iParam1->f_6 > -1 && iParam1->f_6 > 3))
		{
			iParam1->f_6 = -1;
		}
		if (MISC::_0x870708A6E147A9AD(*uParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, 0, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = func_523(uParam0);
			}
			if (iParam6 != 2)
			{
				bVar7 = true;
			}
			if (!bVar7)
			{
				switch (iParam6)
				{
					case 2:
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
						{
							iParam6 = MISC::GET_HASH_KEY(&cVar0);
						}
						break;
				}
				if (iParam6 != 2)
				{
					PED::_0xFCA8FB9E15FA80D3(*uParam0, iParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5) && iParam6 == 2)
				{
					PED::_0xFCA8FB9E15FA80D3(*uParam0, MISC::GET_HASH_KEY(sParam5));
				}
				else if (iParam6 != 2)
				{
					PED::_0xFCA8FB9E15FA80D3(*uParam0, iParam6);
				}
			}
			PED::SET_PED_CONFIG_FLAG(*uParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 301, false);
			if (func_11(uParam4, 268435456))
			{
				iVar8 = func_524(uParam2, 648122183);
				if (iVar8 > -1)
				{
					func_525(iParam1, (*uParam2)[iVar8 /*17*/]);
				}
			}
			if (func_439(iParam1, 23))
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 331, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, true);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, false);
			}
			if (func_11(uParam4, 2) || func_11(uParam4, 16))
			{
				func_438(*uParam0, 1, 1);
			}
			else
			{
				func_438(*uParam0, 0, 1);
			}
			return 1;
		}
	}
	return 0;
}

void func_437(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297, false);
	}
}

void func_438(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
	}
}

bool func_439(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

int func_440(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	bVar0 = (!VOLUME::_0x92A78D0BEDB332A3(iParam2) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam2, true, 0));
	bVar1 = uParam1 & 32 != false;
	bVar2 = uParam1 & 65792 != false;
	bVar3 = uParam1 & 1179648 != false;
	if (bVar0)
	{
		if (bVar1)
		{
			return 1;
		}
		if (func_526(*uParam0, bParam3, bVar2, bVar3))
		{
			return 1;
		}
	}
	return 0;
}

void func_441(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, var uParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
{
	int iVar0;

	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(*iParam2, 1))
		{
			if (bParam14)
			{
				iVar0 = 0;
				while (iVar0 < *uParam4)
				{
					MISC::SET_BIT((*uParam4)[iVar0 /*17*/], 14);
					iVar0++;
				}
			}
			func_527(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_11(uParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_442(var uParam0)
{
	if (func_11(uParam0, 4))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -128997553, true);
		PAD::DISABLE_CONTROL_ACTION(0, 130948705, true);
		PAD::DISABLE_CONTROL_ACTION(0, 42190210, true);
		PAD::DISABLE_CONTROL_ACTION(0, 1632043089, true);
		PAD::DISABLE_CONTROL_ACTION(0, 1623727326, true);
		PAD::DISABLE_CONTROL_ACTION(0, -922478227, true);
		PAD::DISABLE_CONTROL_ACTION(0, -674562833, true);
		PAD::DISABLE_CONTROL_ACTION(0, -197984200, true);
		PAD::DISABLE_CONTROL_ACTION(0, -238861894, true);
	}
	if (func_11(uParam0, 16384))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -485697785, false);
	}
	if (func_11(uParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -1292666904, false);
		PAD::DISABLE_CONTROL_ACTION(0, 578288361, false);
	}
}

bool func_443(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, var uParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	float fVar12;

	iVar1 = func_528(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = uParam10 & 128 != false;
	bVar7 = uParam10 & 64 != false;
	bVar8 = uParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*uParam0);
	bVar11 = (((PED::_0xA911EE21EDF69DAF(Global_35) || func_529(Global_35)) || func_530(Global_35)) || func_531(Global_35));
	fVar12 = -1f;
	if (func_125(&(iParam1->f_13)))
	{
		fVar12 = func_224(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if (((*uParam4)[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = ((*uParam4)[iVar0 /*17*/])->f_8;
		}
		bVar4 = func_218(((*uParam4)[iVar0 /*17*/])->f_6);
		func_532(*uParam0, (*uParam4)[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET(uParam4[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (func_533(*uParam0, iParam1, (*uParam4)[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_534(iParam12, ((*uParam4)[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						func_122(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_535(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET(uParam4[iVar0 /*17*/], 11))
					{
						func_521(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar5 = true;
					iParam1->f_9 = MISC::IS_BIT_SET(uParam4[iParam1->f_1 /*17*/], 16);
					if (!iParam1->f_9)
					{
						MISC::SET_BIT(iParam1, 0);
					}
					if (!bVar2)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(((*uParam4)[iVar0 /*17*/])->f_11))
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY(((*uParam4)[iVar0 /*17*/])->f_12))
							{
								TASK::TASK_PLAY_ANIM(Global_35, ((*uParam4)[iVar0 /*17*/])->f_11, ((*uParam4)[iVar0 /*17*/])->f_12, 4f, -4f, -1, 67108880, 0, 0, 0, 0, 0, 0);
							}
						}
					}
					if (func_536(iParam1, fParam6, iParam1->f_9))
					{
						func_81(&(iParam1->f_18));
						if (bVar6)
						{
							func_535(uParam4, 0, 0);
						}
						iParam1->f_2 = 2;
					}
					if (iParam1->f_2 != 2)
					{
						if (iParam1->f_2 != 3)
						{
							if (bVar8)
							{
								iParam1->f_2 = 0;
							}
						}
					}
					if (!bParam14)
					{
						bVar5 = true;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		func_537(iParam1, fParam2);
	}
	return bVar5;
}

void func_444(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (MISC::IS_BIT_SET(uParam0[iVar0 /*17*/], 20))
		{
			if (!MISC::IS_BIT_SET(uParam0[iVar0 /*17*/], 21))
			{
				MISC::CLEAR_BIT((*uParam0)[iVar0 /*17*/], 20);
				MISC::CLEAR_BIT((*uParam0)[iVar0 /*17*/], 21);
			}
		}
		iVar0++;
	}
}

void func_445(int* iParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_538((*uParam1)[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET(uParam1[iVar0 /*17*/], 20))
			{
				func_537(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

int func_446(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, -124244224))
		{
			if (func_539(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_540(iParam1, 0);
				func_521(iParam1, uParam2, func_439(iParam1, 6));
				return 1;
			}
		}
	}
	return 0;
}

int func_447(var uParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
		{
			return 0;
		}
		iParam1->f_9 = 0;
		MISC::SET_BIT(iParam1, 0);
		if (fParam2 > 0f)
		{
			func_81(&(iParam1->f_18));
			return 0;
		}
		else if (func_125(&(iParam1->f_18)))
		{
			func_121(&(iParam1->f_18));
			return 0;
		}
	}
	if (!func_125(&(iParam1->f_18)))
	{
		return 1;
	}
	if (fParam2 > 0f && bParam3)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
		{
			return 0;
		}
	}
	return func_130(&(iParam1->f_18), fParam2);
	return 1;
}

void func_448(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_532(iParam0, (*uParam2)[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_449(int* iParam0, var uParam1)
{
	int iVar0;
	struct<17> Var1;
	struct<10> Var22;

	Var1.f_1 = -1;
	Var1.f_3 = -1;
	Var1.f_6 = -1;
	Var1.f_12 = 1073741824;
	Var1.f_16 = 1;
	Var22.f_2 = 570;
	Var22.f_3 = 1065353216;
	Var22.f_4 = -1082130432;
	Var22.f_9 = 2;
	func_521(iParam0, uParam1, 1);
	func_122(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY((*uParam1)[iVar0 /*17*/], &Var22, 17);
		iVar0++;
	}
}

char* func_450(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

bool func_451(int iParam0, int iParam1, float fParam2)
{
	return func_541(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, false, false), fParam2);
}

int func_452(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return 1;
	}
	return 0;
}

int func_453(var uParam0)
{
	return uParam0;
}

void func_454(int iParam0)
{
	func_121(&uLocal_0);
	func_542(1, iParam0, 0);
	_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
	func_543();
}

bool func_455(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

int func_456(int iParam0, float fParam1, float fParam2, float fParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	float fVar13;
	float fVar14;

	if (!Global_1935630->f_27 && !bParam4)
	{
		return 0;
	}
	if (PAD::IS_CONTROL_PRESSED(0, -128997553))
	{
		fVar0 = func_323(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
		if (fVar0 < fParam3 && fVar0 > 0.5f)
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar1, 0, 0))
				{
					iVar2 = iParam0;
					if (iVar1 == iVar2)
					{
						return 0;
					}
				}
				iVar3 = func_487(PLAYER::PLAYER_PED_ID(), 0);
				if (func_419(iVar3) && !PAD::IS_CONTROL_PRESSED(0, 130948705))
				{
					return 0;
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false) && PED::WAS_PED_SKELETON_UPDATED(iParam0))
				{
					vVar4 = { PED::GET_PED_BONE_COORDS(iParam0, 21030, 0f, 0f, 0f) };
				}
				else
				{
					vVar4 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
				}
				vVar7 = { func_544(0) };
				vVar10 = { func_545(vVar4 - CAM::GET_GAMEPLAY_CAM_COORD()) };
				fVar13 = MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar10.x, vVar10.y, vVar7.x, vVar7.y));
				fVar14 = MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar10.y, vVar10.z, vVar7.y, vVar7.z));
				if (fVar13 < fParam1)
				{
					if (fVar14 < fParam2)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_457(var uParam0, bool bParam1, int iParam2)
{
	func_546(iParam2);
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
		uParam0->f_13 = func_547(0);
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
							func_34(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_548(1))
						{
							func_34(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_548(1) || *uParam0 & 8192 != 0))
				{
					func_74(uParam0, 33554432);
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
			if (func_549(uParam0))
			{
				uParam0->f_15 = func_326();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_326() - uParam0->f_15) > 500)
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
	func_550(uParam0);
}

int func_458(int iParam0, var uParam1)
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
			if (!func_484(iParam0, uParam1, iVar2))
			{
				return 0;
			}
			if (func_551(iParam0, iVar2) <= func_552(uParam1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_459(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_553(iParam2, 1, 1, 1, 0))
	{
		func_34(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_327(uParam1, 1);
	func_554();
}

int func_460(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_368(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_486(uParam1);
			if (func_555(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = func_485(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_327(uParam1, 1);
						return 1;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_327(uParam1, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_461(int iParam0, int iParam1, var uParam2)
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
	if (func_366(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_486(uParam2);
		if (func_555(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > func_485(uParam2)
				{
					func_327(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_462(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_326();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return 1;
	}
	return 0;
}

int func_463(var uParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_556(uParam2);
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
			if (func_471(uParam2, iParam1))
			{
				func_327(uParam2, 1);
				return 1;
			}
		}
	}
	return 0;
}

int func_464(var uParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_12 < IntToFloat(func_557(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && !WEAPON::_0x5809DBCA0A37C82B(Global_1935630->f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_471(uParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_327(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_465(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_558(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(217247011, vVar0, uParam2->f_22))
				{
					func_327(uParam2, 1);
					return 1;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(956330317, vVar0, uParam2->f_27))
				{
					func_327(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-966930978, vVar0, uParam2->f_22))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("weapon_thrown_dynamite"), uParam2->f_26, &vVar4, 0, 0);
					if (func_559(iParam1, vVar0, vVar4))
					{
						func_327(uParam2, 1);
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
					func_327(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-966930978, vVar0, uParam2->f_22))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("weapon_thrown_dynamite"), uParam2->f_26, &vVar7, 0, 0);
					if (func_559(iParam1, vVar0, vVar7))
					{
						func_327(uParam2, 1);
						return 1;
					}
				}
				break;
		}
	}
	return 0;
}

int func_466(int iParam0, var uParam1)
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
		if (!func_484(iParam0, uParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_560(&(Global_1935630->f_34[iVar0]));
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_561(&(Global_1935630->f_34[iVar0])))
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
			if (func_562(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_563(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_564(uParam1, iParam0, fVar1, iVar0))
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

int func_467(int iParam0, var uParam1)
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

int func_468(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_326();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

int func_469(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_565(iVar0, &iVar2))
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
	if (func_566(iVar0, iParam0))
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

int func_470(var uParam0, int iParam1)
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

int func_471(var uParam0, int iParam1)
{
	if (func_567(uParam0))
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

int func_472(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return 1;
		}
		if (func_323(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_473()
{
}

int func_474(var uParam0, int iParam1)
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
		if (func_568(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_326();
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
						if (func_96(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_9 = func_326();
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

int func_475()
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
	if ((func_326() - Global_1935630->f_43) >= 10000)
	{
		return 0;
	}
	return 1;
}

int func_476(var uParam0, int iParam1)
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
	fVar0 = func_552(uParam0);
	if (uParam0->f_12 > func_569(uParam0) && uParam0->f_12 > fVar0)
	{
		return 0;
	}
	iVar2 = func_570(iParam1);
	iVar1 = func_571(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, Global_35, 1, 0) == 1)) || ((PED::_0x06087579E7AA85A9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, uParam0->f_14, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, uParam0->f_14, 1, 0) == 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_477(int iParam0, int iParam1, var uParam2)
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
	return func_572(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

int func_478(int iParam0, var uParam1)
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
		if (func_573(iParam0, uParam1, 1))
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
					if (!func_574(uParam1, iParam0))
					{
						if (func_96(iVar4, Global_36, 1) < 7f)
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

int func_479(int iParam0, var uParam1)
{
	if (!func_575(0))
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

int func_480(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_326();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_481(int iParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_482(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_326();
	}
	else if (func_326() - uParam1->f_4) > func_576(uParam1)
	{
		return func_577(iParam0, uParam1, 0, -1082130432);
	}
	return 0;
}

int func_483(var uParam0, int iParam1)
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

int func_484(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_571(iParam2);
	}
	else
	{
		iVar1 = func_570(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_571(iParam0);
	}
	else
	{
		iVar0 = func_570(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return 1;
		}
	}
	if (func_11(*uParam1, 8388608))
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

int func_485(var uParam0)
{
	return uParam0->f_18;
}

var func_486(var uParam0)
{
	return uParam0->f_17;
}

var func_487(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

int func_488(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

int func_489(int iParam0, int iParam1)
{
	int iVar0;

	if ((PLAYER::IS_PLAYER_PLAYING(iParam0) && ENTITY::DOES_ENTITY_EXIST(iParam1)) && !ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (((PLAYER::_0x3EE1F7A8C32F24E1(iParam0, &iVar0, 0, 0) && ENTITY::DOES_ENTITY_EXIST(iVar0)) && iVar0 == iParam1) || ((PLAYER::_0xBEA3A6E5F5F79A6F(iParam0, &iVar0) && ENTITY::DOES_ENTITY_EXIST(iVar0)) && iVar0 == iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_490(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_488(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return 1;
		}
	}
	return 0;
}

void func_491(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int* iParam6, var uParam7, int iParam8, int iParam9, int iParam10)
{
	if (func_578(uParam0, iParam9))
	{
		func_341(uParam7, iParam6);
		func_99(uParam2);
		if (!func_43(*uParam2, 65536) || !func_11((uParam0->f_310[iParam9 /*14*/])->f_7, 512))
		{
			func_139(uParam0, iParam8, uParam1, uParam4, iParam5, uParam2, uParam3, iParam10, uParam7, iParam6, 0, 0);
		}
		else
		{
			func_121((*uParam1)[15 /*3*/]);
		}
		func_34(&((uParam0->f_310[iParam9 /*14*/])->f_7), 512);
		func_263(uParam0, iParam9, *uParam2);
		func_34(&((uParam0->f_310[iParam9 /*14*/])->f_7), 4194304);
		func_34(&((uParam0->f_310[iParam9 /*14*/])->f_7), 2);
		(uParam0->f_1[iParam8 /*22*/])->f_10++;
		func_45(uParam0, iParam8);
		func_134(Global_35, &(uParam0->f_310[iParam9 /*14*/]), "ROB_COACH_THREATEN_WARNING_SHOT", 0, -1082130432, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
		func_81((*uParam1)[1 /*3*/]);
		func_121((*uParam1)[15 /*3*/]);
		func_246(uParam0->f_310[iParam9 /*14*/], 9);
	}
}

void func_492(var uParam0, bool bParam1, bool bParam2)
{
	func_429((*uParam0)[2 /*17*/], func_428(12), 0, -1616532217, 0, 0, 0, 1, 0);
	func_430((*uParam0)[2 /*17*/], 1);
	func_431((*uParam0)[2 /*17*/], (bParam1 || bParam2));
	func_432((*uParam0)[2 /*17*/], 2.75f);
	func_429((*uParam0)[1 /*17*/], func_428(10), 0, 648122183, 0, 0, 0, 1, 0);
	func_430((*uParam0)[1 /*17*/], 1);
	func_431((*uParam0)[1 /*17*/], 1);
	func_432((*uParam0)[1 /*17*/], 2.75f);
	func_429((*uParam0)[0 /*17*/], func_428(7), 0, -163964935, 0, 0, 0, 1, 0);
	func_430((*uParam0)[0 /*17*/], 1);
	func_431((*uParam0)[0 /*17*/], 1);
	func_432((*uParam0)[0 /*17*/], 2.75f);
}

void func_493(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	func_429((*uParam0)[0 /*17*/], func_428(7), 0, -163964935, 0, 0, 0, 1, 0);
	func_430((*uParam0)[0 /*17*/], 1);
	func_431((*uParam0)[0 /*17*/], (bParam1 || bParam2));
	func_432((*uParam0)[0 /*17*/], 2.75f);
	func_429((*uParam0)[1 /*17*/], func_428(10), 0, 648122183, 0, 0, 0, 1, 0);
	func_430((*uParam0)[1 /*17*/], 1);
	func_431((*uParam0)[1 /*17*/], (bParam1 || bParam3));
	func_432((*uParam0)[1 /*17*/], 2.75f);
	func_429((*uParam0)[2 /*17*/], func_428(12), 0, -1616532217, 0, 0, 0, 1, 0);
	func_430((*uParam0)[2 /*17*/], 1);
	func_431((*uParam0)[2 /*17*/], (bParam1 || bParam4));
	func_432((*uParam0)[2 /*17*/], 2.75f);
}

void func_494(var uParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (func_11((uParam0->f_310[iParam2 /*14*/])->f_7, 512))
	{
		if ((uParam0->f_1[iParam3 /*22*/])->f_10 == 0)
		{
			func_134(Global_35, &(uParam0->f_310[iParam2 /*14*/]), "ROB_GENERAL", 0, -1082130432, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
		}
		else
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
			if (iVar0 == 0)
			{
				func_134(Global_35, &(uParam0->f_310[iParam2 /*14*/]), "ROB_ESCALATED_GENERAL", 0, -1082130432, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
			}
			else
			{
				func_134(Global_35, &(uParam0->f_310[iParam2 /*14*/]), "ROB_ESCALATED_THREATEN", 0, -1082130432, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
			}
		}
	}
}

char* func_495(var uParam0)
{
	if (func_11(uParam0->f_7, 4194304) || func_11(uParam0->f_7, 2))
	{
		return "ROB_ACCEPT_OFFER";
	}
	return "ROB_DEFUSE";
}

int func_496(var uParam0, int iParam1, int* iParam2, var uParam3, var uParam4)
{
	bool bVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	bVar0 = func_11((uParam0->f_310[iParam1 /*14*/])->f_7, 32768);
	if (*uParam4 != 1 || func_11((uParam0->f_310[iParam1 /*14*/])->f_7, 2048))
	{
		func_341(uParam3, iParam2);
		if (!bVar0)
		{
			func_579(uParam3);
		}
		else
		{
			func_580((*uParam3)[0 /*17*/], 0, 1);
			func_373(uParam3, (func_11((uParam0->f_310[iParam1 /*14*/])->f_7, 268435456) || func_11((uParam0->f_310[iParam1 /*14*/])->f_7, 134217728)));
		}
		func_74(&((uParam0->f_310[iParam1 /*14*/])->f_7), 2048);
		*uParam4 = 1;
	}
	iVar2 = func_345(1, 0, 0) | 16384;
	if (bVar0)
	{
		fVar1 = 0f;
	}
	else
	{
		fVar1 = 2f;
	}
	iVar3 = func_346(uParam0->f_310[iParam1 /*14*/], iParam2, 19f, uParam3, fVar1, 3, 0, 0, iVar2, 0, 0, 2, (uParam0->f_310[iParam1 /*14*/])->f_9);
	if (iVar3 != -1)
	{
		return iVar3;
	}
	if (func_581(iParam2))
	{
		iVar4 = func_582(iParam2);
		if (iVar4 != -1)
		{
			if (!bVar0)
			{
				switch (iVar4)
				{
					case 0:
						func_580((*uParam3)[0 /*17*/], 1, 1);
						func_134(Global_35, &(uParam0->f_310[iParam1 /*14*/]), "GREET_GENERAL", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						break;
					case 1:
						func_580((*uParam3)[1 /*17*/], 1, 1);
						func_134(Global_35, &(uParam0->f_310[iParam1 /*14*/]), func_347(uParam0->f_310[iParam1 /*14*/]), 0, -1082130432, (uParam0->f_310[iParam1 /*14*/])->f_11, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						break;
				}
			}
		}
	}
	return iVar3;
}

int func_497(var uParam0, int iParam1)
{
	if (func_11((uParam0->f_310[iParam1 /*14*/])->f_7, 131072))
	{
		return 3;
	}
	if (func_11((uParam0->f_310[iParam1 /*14*/])->f_7, 65536))
	{
		return 2;
	}
	if (func_11((uParam0->f_310[iParam1 /*14*/])->f_7, 32768))
	{
		return 1;
	}
	return 0;
}

int func_498(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	float fVar2;

	if (iParam1 < 0)
	{
		return 1;
	}
	iVar0 = func_583(Global_35, &(uParam0->f_1[iParam1 /*22*/]), 1060437492);
	if (!PED::_0xF60165E1D2C5370B(Global_35, &uVar1, &fVar2))
	{
		return 0;
	}
	if (fVar2 >= 1.5f)
	{
		return 1;
	}
	else if (fVar2 >= 1f)
	{
		if (iVar0 == 1)
		{
			return 1;
		}
	}
	return 0;
}

void func_499(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, true);
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, false);
	}
}

int func_500(var uParam0, int iParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(&(uParam0->f_310[iParam1 /*14*/])))
	{
		return 0;
	}
	if ((uParam0->f_310[iParam1 /*14*/])->f_3 == 0)
	{
		return 0;
	}
	return 1;
}

int func_501(int iParam0)
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

int func_502(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> Var0;
	int iVar5;
	struct<10> Var6;
	int iVar28;
	struct<4> Var29;

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
		Var0 = { func_584(iParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_585((375 + iVar28), 1);
			if (func_586(iParam0, &Var0, iVar5, 0))
			{
				if (func_587(iParam0, &Var6, iVar5))
				{
					Var29 = { func_588(iParam0, Var0, iVar5, 0) };
					func_589(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_590(0))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
					{
						return 0;
					}
					func_591(WEAPON::_0x5C2EA6C44F515F34(iParam0), iParam1, iParam6);
					func_592(iParam0, iParam1);
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
		}
	}

void func_503(int iParam0, int iParam1, float fParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = true;
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (((((((*iParam1 == joaat("weapon_revolver_cattleman_mexican") || *iParam1 == joaat("weapon_revolver_cattleman_pig")) || *iParam1 == joaat("weapon_revolver_doubleaction_exotic")) || *iParam1 == joaat("weapon_revolver_schofield_calloway")) || *iParam1 == joaat("weapon_revolver_schofield_golden")) || *iParam1 == joaat("weapon_pistol_mauser_drunk")) || *iParam1 == joaat("weapon_shotgun_doublebarrel_exotic")) || *iParam1 == joaat("weapon_sniperrifle_rollingblock_exotic"))
	{
		*fParam2 = 0f;
		return;
	}
	switch (iVar1)
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
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		case joaat("g_m_y_uniexconfeds_02"):
		case joaat("g_m_y_uniexconfeds_01"):
		case joaat("g_m_o_uniexconfeds_01"):
		case joaat("cs_exconfedsleader_01"):
		case joaat("u_m_m_uniexconfedsbounty_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.375f);
			break;
		case joaat("g_m_m_uniinbred_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.7f, 0.875f);
			break;
		case joaat("u_m_m_bht_skinnersearch"):
		case joaat("g_m_m_unimountainmen_01"):
		case joaat("u_m_m_bht_skinnerbrother"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.4f, 0.6f);
			break;
		case joaat("g_m_m_uniranchers_01"):
		case joaat("cs_laramie"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.25f);
			break;
		case joaat("u_m_m_bht_banditoshack"):
		case joaat("u_m_m_bht_banditomine"):
		case joaat("g_m_m_unibanditos_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		case joaat("u_m_m_nbxbrontegoon_01"):
		case joaat("u_m_m_nbxbrontesecform_01"):
		case joaat("u_m_m_nbxbronteasc_01"):
		case joaat("g_m_m_unibrontegoons_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.125f);
			break;
		default:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.4f);
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == 1030835986)
			{
				bVar0 = false;
			}
			break;
	}
	if (bVar0)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 361, true);
	}
}

bool func_504(bool bParam0)
{
	return WEAPON::_0x1F7977C9101F807F(WEAPON::_0x5C2EA6C44F515F34(bParam0));
}

int func_505(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_593(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

int func_506(bool bParam0)
{
	if (func_187() == -1)
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

int func_507()
{
	if (func_187() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == 11966224)
	{
		return 1;
	}
	return 0;
}

int func_508(vector3 vParam0)
{
	int iVar0;

	iVar0 = func_594(vParam0, 0f, 0f, 0, 2);
	return func_594(vParam0, ((*Global_1894052)[iVar0 /*3*/])->f_1, ((*Global_1894052)[iVar0 /*3*/])->f_2, Global_1894052[iVar0 /*3*/], 4);
}

bool func_509(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1) != 0;
}

int func_510(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 38)
	{
		return 1;
	}
	return 0;
}

void func_511(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	int iVar0;

	if (iParam3 && !func_218(iParam0))
	{
		return;
	}
	iVar0 = func_315(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, MISC::_CREATE_VAR_STRING(2, sParam1, sParam2));
}

void func_512(int iParam0, char* sParam1, int iParam2)
{
	int iVar0;

	if (iParam2 && !func_218(iParam0))
	{
		return;
	}
	iVar0 = func_315(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, sParam1);
}

void func_513(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (iParam2 && !func_218(iParam0))
	{
		return;
	}
	iVar0 = func_315(iParam0);
	if (bParam1)
	{
		func_595(iParam0, 4);
		func_596(iVar0, 1);
		func_597(iVar0, 1);
	}
	else
	{
		func_598(iParam0, 4);
		func_597(iVar0, 0);
	}
}

void func_514(int* iParam0, char* sParam1)
{
	if (func_218(iParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		func_512(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_599(iParam0, 1);
}

void func_515(int* iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_600(iParam0, 4))
		{
			func_219(&(iParam0->f_6), 1, 1);
			func_601(iParam0, 4);
		}
	}
	else if (func_600(iParam0, 4))
	{
		func_599(iParam0, 4);
		func_601(iParam0, 14);
	}
}

void func_516(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_600(iParam0, 13))
	{
		func_601(iParam0, 0);
	}
	else
	{
		func_599(iParam0, 0);
	}
	if (func_218(iParam0->f_6))
	{
		if (bParam2)
		{
			func_219(&(iParam0->f_6), 0, 1);
		}
	}
}

void func_517(int* iParam0, bool bParam1)
{
	if (!bParam1)
	{
		iParam0->f_4 = 0f;
	}
	func_599(iParam0, 7);
}

void func_518(int* iParam0, float fParam1)
{
	iParam0->f_4 = fParam1;
	func_601(iParam0, 7);
}

int func_519(int iParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;

	if (uParam1->f_11 & 1 != 0)
	{
		if (PED::_0x9682F850056C9ADE(iParam0))
		{
			return 1;
		}
	}
	if (uParam1->f_11 & 2 != 0)
	{
		if (PED::_0x3AA24CCC0D451379(iParam0))
		{
			return 1;
		}
	}
	bVar0 = uParam1->f_11 & 4 != false;
	bVar1 = uParam1->f_11 & 8 != false;
	if (bVar0 || bVar1)
	{
		if (PED::IS_PED_IN_COMBAT(iParam0, func_602((bVar1 && !bVar0), Global_35, 0)))
		{
			return 1;
		}
	}
	return 0;
}

void func_520(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_538((*uParam0)[iVar0 /*17*/]))
		{
			func_601((*uParam0)[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

void func_521(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_219(&(((*uParam1)[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			func_427(iParam0, 0);
		}
	}
}

int func_522(int iParam0, var uParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;

	if (uParam1->f_3 > -1 && uParam1->f_3 < *uParam2)
	{
		iVar0 = uParam1->f_3;
		((*uParam2)[iVar0 /*17*/])->f_8 = 6;
		func_603(iParam0, (*uParam2)[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (func_218(((*uParam2)[iVar0 /*17*/])->f_6))
		{
			func_601((*uParam2)[iVar0 /*17*/], 11);
			return ((*Global_1945938)[((*uParam2)[iVar0 /*17*/])->f_6 /*18*/])->f_3;
		}
	}
	return 0;
}

int func_523(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_604(*uParam0);
	iVar1 = 2;
	switch (iVar0)
	{
		case 2:
			iVar1 = 295425337; /* GXTEntry: "Lemoyne Raider" */
			break;
		case 1:
			iVar1 = 768137552; /* GXTEntry: "Murfree Brood" */
			break;
		case 0:
			iVar1 = 1415388528; /* GXTEntry: "O\'Driscoll Boy" */
			break;
		case 4:
			iVar1 = 1449436544; /* GXTEntry: "Laramie" */
			break;
		case 3:
			iVar1 = -1807204482; /* GXTEntry: "Skinner Brother" */
			break;
		case 5:
			iVar1 = -1096701282; /* GXTEntry: "Del Lobo" */
			break;
	}
	return iVar1;
}

int func_524(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (((*uParam0)[iVar0 /*17*/])->f_7 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_525(int* iParam0, int* iParam1)
{
	if (!func_439(iParam0, 23))
	{
		if (iParam1->f_7 == 648122183)
		{
			func_601(iParam1, 19);
			func_540(iParam0, 23);
			func_605(iParam1, 2);
		}
	}
}

int func_526(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (func_606(16))
	{
		return Global_1935630->f_58 == iParam0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
	{
		if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar0, bParam2, bParam3))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar0))
				{
					func_607(16);
					Global_1935630->f_58 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
					if (Global_1935630->f_58 == iParam0)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_527(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_603(iParam0, (*uParam1)[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, iParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT((*uParam1)[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_528(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

var func_529(int iParam0)
{
	return (func_608(iParam0, 4) || func_608(iParam0, 5));
}

int func_530(int iParam0)
{
	return func_608(iParam0, 7);
}

int func_531(int iParam0)
{
	return func_608(iParam0, 6);
}

void func_532(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (func_538(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			func_603(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

int func_533(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, var uParam13, float fParam14, bool bParam15, int iParam16)
{
	int iVar0;
	bool bVar1;

	iVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_609(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, uParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_610(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_513(iParam2->f_6, 0, 1);
				iVar0 = 0;
			}
		}
		else if (!bVar1)
		{
			func_513(iParam2->f_6, 1, 1);
			iVar0 = 0;
		}
		if (bParam8)
		{
			func_611(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return iVar0;
}

int func_534(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_612(iParam1, 1))
		{
			return 1;
		}
	}
	else if (func_613(iParam1, 1))
	{
		func_614(iParam1, 1);
		return 1;
	}
	return 0;
}

void func_535(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_516((*uParam0)[iVar0 /*17*/], bParam1, bParam2);
		iVar0++;
	}
}

int func_536(int* iParam0, float fParam1, var uParam2)
{
	if (iParam0->f_2 != 3)
	{
		if (uParam2 || fParam1 > 0f)
		{
			return 1;
		}
	}
	return 0;
}

void func_537(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 1101824977, true);
		PAD::DISABLE_CONTROL_ACTION(0, 966551065, true);
		PAD::DISABLE_CONTROL_ACTION(0, 668058244, true);
		PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	}
}

int func_538(var uParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_5))
	{
		return 1;
	}
	return 0;
}

int func_539(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;

	iVar1 = SCRIPTS::GET_NUMBER_OF_EVENTS(0);
	if (iVar1 > 0)
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar0))
			{
				case 1387172233:
					if (SCRIPTS::GET_EVENT_DATA(0, iVar0, &vVar3, 10))
					{
						iVar2 = vVar3.x;
						switch (iVar2)
						{
							case 9:
								if (ENTITY::IS_ENTITY_A_PED(vVar3.z))
								{
									if (iParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar3.z))
									{
										return 1;
									}
								}
								break;
						}
					}
					break;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_540(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

bool func_541(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

void func_542(int iParam0, int iParam1, int iParam2)
{
	AUDIO::_0x36559148B78853B3(iParam0, iParam1, iParam2);
}

void func_543()
{
	_NAMESPACE71::_0xDD1232B332CBB9E7(4, 1, 0);
}

Vector3 func_544(int iParam0)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;

	if (!CAM::DOES_CAM_EXIST(iParam0))
	{
		vVar0 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	else
	{
		vVar0 = { CAM::GET_CAM_ROT(iParam0, 2) };
	}
	fVar3 = BUILTIN::SIN(vVar0.z);
	fVar4 = BUILTIN::COS(vVar0.z);
	fVar5 = BUILTIN::SIN(vVar0.x);
	fVar6 = BUILTIN::COS(vVar0.x);
	return func_545((-fVar6 * fVar3), (fVar6 * fVar4), fVar5);
}

Vector3 func_545(vector3 vParam0)
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

void func_546(int iParam0)
{
	int iVar0;
	var uVar1;

	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_615();
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
			func_616(&(Global_1935630->f_34), &(Global_1935630->f_39));
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

var func_547(int iParam0)
{
	return &(Global_1109400->f_275[iParam0 /*3*/]);
}

int func_548(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_617(bParam0, &uVar0, &uVar1))
	{
		return 1;
	}
	return 0;
}

int func_549(var uParam0)
{
	int iVar0;

	iVar0 = Global_1935630->f_40;
	if (func_187() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_618(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_618(uParam0);
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_571(iVar0) == -1)
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

void func_550(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_619(uParam0);
	}
}

float func_551(int iParam0, int iParam1)
{
	return func_323(iParam0, iParam1, 1, 1);
}

float func_552(var uParam0)
{
	return uParam0->f_26;
}

int func_553(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_554()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

int func_555(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_12 > fParam3)
	{
		return 0;
	}
	fVar0 = -1f;
	if (!func_11(*uParam0, 4194304))
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

var func_556(var uParam0)
{
	return uParam0->f_23;
}

int func_557(var uParam0)
{
	return uParam0->f_21;
}

int func_558(var uParam0)
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

int func_559(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_541(iParam0, vParam4, 0.5f))
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

int func_560(int iParam0)
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
	if (func_620(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_561(int iParam0)
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

int func_562(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_621(iParam1))
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

int func_563(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_621(iParam1))
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

int func_564(var uParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40f;
	if (func_621(iParam1))
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

int func_565(int iParam0, var uParam1)
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

int func_566(int iParam0, int iParam1)
{
	if (PED::_0xB65A4DAB460A19BD(iParam0) == iParam1)
	{
		return 1;
	}
	if (func_622(iParam0, 1, 0, 0) != joaat("weapon_lasso"))
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

bool func_567(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

int func_568(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_96(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

float func_569(var uParam0)
{
	return uParam0->f_24;
}

int func_570(int iParam0)
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

int func_571(int iParam0)
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

int func_572(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_565(Global_35, &iVar1))
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
		fVar2 = func_323(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
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
		if (func_323(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
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

int func_573(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_617(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_574(uParam1, iVar0))
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
				if (!bParam2 || !func_574(uParam1, iVar1))
				{
					if (func_96(iVar1, Global_36, 1) < 5f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_574(var uParam0, int iParam1)
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

int func_575(int iParam0)
{
	if (func_507())
	{
		return 0;
	}
	return func_289(((*Global_1347702)[58 /*49*/])->f_15, 1);
}

int func_576(var uParam0)
{
	return uParam0->f_20;
}

int func_577(int iParam0, var uParam1, bool bParam2, float fParam3)
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

int func_578(var uParam0, int iParam1)
{
	if (func_11((uParam0->f_310[iParam1 /*14*/])->f_7, 4194304))
	{
		return 0;
	}
	if (!func_11((uParam0->f_310[iParam1 /*14*/])->f_7, 33554432))
	{
		return 0;
	}
	if ((uParam0->f_310[iParam1 /*14*/])->f_3 == 1)
	{
		return 0;
	}
	if (uParam0->f_310[iParam1 /*14*/])->f_9 > (2.75f + 0.5f)
	{
		return 0;
	}
	if (!PED::IS_PED_SHOOTING(Global_35))
	{
		return 0;
	}
	if (PLAYER::_0x6614F9039BD31931(PLAYER::GET_PLAYER_INDEX(), 7, 0))
	{
		return 0;
	}
	if (PED::_0x336B3D200AB007CB(Global_35, Global_36, 19f, 4) > 0)
	{
		return 0;
	}
	return 1;
}

void func_579(var uParam0)
{
	func_429((*uParam0)[0 /*17*/], func_428(7), 0, -163964935, 0, 0, 0, 1, 0);
	func_430((*uParam0)[0 /*17*/], 1);
	func_431((*uParam0)[0 /*17*/], 0);
	func_432((*uParam0)[0 /*17*/], 15f);
	func_429((*uParam0)[1 /*17*/], func_428(10), 0, 648122183, 0, 0, 0, 1, 0);
	func_430((*uParam0)[1 /*17*/], 1);
	func_431((*uParam0)[1 /*17*/], 0);
	func_432((*uParam0)[1 /*17*/], 15f);
	func_429((*uParam0)[2 /*17*/], func_428(12), 0, -1616532217, 0, 0, 0, 1, 0);
	func_430((*uParam0)[2 /*17*/], 0);
	func_432((*uParam0)[2 /*17*/], 15f);
}

void func_580(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (!func_600(iParam0, 13))
		{
			if (bParam2)
			{
				func_516(iParam0, 0, 0);
			}
			func_601(iParam0, 13);
		}
	}
	else if (func_600(iParam0, 13))
	{
		func_599(iParam0, 13);
	}
}

bool func_581(int* iParam0)
{
	return iParam0->f_2 == 2;
}

int func_582(int* iParam0)
{
	if (func_439(iParam0, 0))
	{
		if (func_623(iParam0))
		{
			func_332(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

int func_583(int iParam0, int iParam1, float fParam2)
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return func_624(iParam0, vVar0, fParam2);
}

struct<5> func_584(int iParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;

	Var0 = { func_625(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_626(iParam0))
	{
		case -1037537535:
			if (!INVENTORY::_0x780C5B9AE2819807(iParam0, 1034665895))
			{
				Var0 = { func_588(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_627(bParam1) };
			if (iParam2 && func_628(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_586(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_586(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_587(iParam0, &Var5, 1728382685))
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
		case -1784221369:
			Var0.f_4 = 1782082944;
			break;
		case -1650247667:
			Var0.f_4 = -813824107;
			Var0 = { func_629(bParam1) };
			switch (func_630(iParam0))
			{
				case 664784405:
					Var0.f_4 = -1150938404;
					break;
				case 2020212423:
					Var0.f_4 = -1756997214;
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
			if (func_631(iParam0, -1823706425))
			{
				Var0 = { func_588(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, -1838434463);
			}
			else if (func_631(iParam0, -1483207246))
			{
				Var0 = { func_588(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
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
				Var27.f_9 = -1591664384;
				if (!func_632(Var0, &Var27, bParam1, 0))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var27.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 1328661203);
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

int func_585(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1782082944;
		case 1:
			return 1704602624;
		case 2:
			return 1214181762;
		case 3:
			return -430578371;
		case 4:
			return -730381952;
		case 5:
			return -253503777;
		case 6:
			return 1352275534;
		case 7:
			return 1666399168;
		case 8:
			return -1911121386;
		case 9:
			return 1756656691;
		case 10:
			return -1774867076;
		case 11:
			return -421952220;
		case 12:
			return -1087003323;
		case 13:
			return 1231618917;
		case 14:
			return -1183777174;
		case 15:
			return -841767082;
		case 16:
			return 1043717005;
		case 17:
			return 142663787;
		case 18:
			return 1718143051;
		case 19:
			return -6605744;
		case 20:
			return 953047564;
		case 21:
			return 769706682;
		case 22:
			return 1635590003;
		case 23:
			return -2047978619;
		case 24:
			return -586319254;
		case 25:
			return 249896112;
		case 26:
			return -1060513333;
		case 27:
			return 1317351007;
		case 28:
			return -500478573;
		case 29:
			return -806573802;
		case 30:
			return -1109949204;
		case 31:
			return -740156546;
		case 32:
			return -684532710;
		case 33:
			return 1158805436;
		case 34:
			return -559473670;
		case 35:
			return -797147251;
		case 36:
			return -382216265;
		case 37:
			return 1419177114;
		case 38:
			return 1704297235;
		case 39:
			return -1139016418;
		case 40:
			return 897705377;
		case 41:
			return 17961769;
		case 42:
			return 205582207;
		case 43:
			return 900740963;
		case 44:
			return -1369589344;
		case 45:
			return -1695823795;
		case 46:
			return -41453074;
		case 47:
			return 539767227;
		case 48:
			return 1210490314;
		case 49:
			return -399684751;
		case 50:
			return 2138893455;
		case 51:
			return -1617010487;
		case 52:
			return -832377028;
		case 53:
			return -428040245;
		case 54:
			return 1279288897;
		case 55:
			return -594897905;
		case 56:
			return -1360459240;
		case 57:
			return 1838428396;
		case 58:
			return -1467846997;
		case 59:
			return -490610263;
		case 60:
			return -1885413079;
		case 61:
			return 708884155;
		case 62:
			return -134459952;
		case 63:
			return -1912136700;
		case 64:
			return -1268031552;
		case 65:
			return 1177953227;
		case 66:
			return 2130805296;
		case 67:
			return 38093490;
		case 68:
			return -269153218;
		case 69:
			return -1995068011;
		case 70:
			return -164284834;
		case 71:
			return 1446463345;
		case 72:
			return 1501315823;
		case 73:
			return -750379482;
		case 74:
			return -929560937;
		case 75:
			return 608323241;
		case 76:
			return 1030796013;
		case 77:
			return 1915057434;
		case 78:
			return -1582276476;
		case 79:
			return 692059311;
		case 80:
			return 2062839241;
		case 81:
			return -1884531872;
		case 82:
			return -866434534;
		case 83:
			return -1252192421;
		case 84:
			return 1243288963;
		case 85:
			return -1953772189;
		case 86:
			return 754411745;
		case 87:
			return 545309006;
		case 88:
			return -1089810811;
		case 89:
			return 1957869400;
		case 90:
			return -241412332;
		case 91:
			return -1548010959;
		case 92:
			return 550150488;
		case 93:
			return 946565453;
		case 94:
			return 434443248;
		case 95:
			return -1709914938;
		case 96:
			return 366686112;
		case 97:
			return -1370063350;
		case 98:
			return 2126829550;
		case 99:
			return 226552910;
		case 100:
			return 721193431;
		case 101:
			return -315672460;
		case 102:
			return 623544501;
		case 103:
			return 259556714;
		case 104:
			return -2125361825;
		case 105:
			return 1078230356;
		case 106:
			return 1885364811;
		case 107:
			return 1630382737;
		case 108:
			return 1738245512;
		case 109:
			return 1540262216;
		case 110:
			return 1016871472;
		case 111:
			return 13829069;
		case 112:
			return 737051352;
		case 113:
			return 1734614610;
		case 114:
			return -208715295;
		case 115:
			return 1435062936;
		case 116:
			return 1483055553;
		case 117:
			return 380335002;
		case 118:
			return -1079385677;
		case 119:
			return 676610411;
		case 120:
			return 2145419552;
		case 121:
			return 657238733;
		case 122:
			return 1850579281;
		case 123:
			return -1923957384;
		case 124:
			return -1142828108;
		case 125:
			return -1400618531;
		case 126:
			return -1433857135;
		case 127:
			return 209987206;
		case 128:
			return 1686943047;
		case 129:
			return -59178517;
		case 130:
			return 2134884601;
		case 131:
			return 651707517;
		case 132:
			return -633788535;
		case 133:
			return 116394463;
		case 134:
			return -1196973875;
		case 135:
			return 801752086;
		case 136:
			return 184475332;
		case 137:
			return -1880922659;
		case 138:
			return -898138634;
		case 139:
			return -2107418444;
		case 140:
			return -679970099;
		case 141:
			return -1531392549;
		case 142:
			return 1612483376;
		case 143:
			return 463930900;
		case 144:
			return -632148238;
		case 145:
			return 55303249;
		case 146:
			return 2108322089;
		case 147:
			return -1358896714;
		case 148:
			return 74475632;
		case 149:
			return -28710953;
		case 150:
			return -1791599168;
		case 151:
			return 1605938169;
		case 152:
			return 1255242276;
		case 153:
			return 636467727;
		case 154:
			return -1567688525;
		case 155:
			return -77886679;
		case 156:
			return -1057900679;
		case 157:
			return -1960888134;
		case 158:
			return -1719717295;
		case 159:
			return -1779244911;
		case 160:
			return -670540863;
		case 161:
			return 223362311;
		case 162:
			return 1150824567;
		case 163:
			return 974471191;
		case 164:
			return 1989683968;
		case 165:
			return 254804477;
		case 166:
			return 192057609;
		case 167:
			return 1553957817;
		case 168:
			return 2099829015;
		case 169:
			return -840300007;
		case 170:
			return -1948423372;
		case 171:
			return 981083654;
		case 172:
			return 1283289876;
		case 173:
			return -606884489;
		case 174:
			return -100418572;
		case 175:
			return 663645231;
		case 176:
			return 1442217033;
		case 177:
			return 1410986244;
		case 178:
			return 847409839;
		case 179:
			return 923926911;
		case 180:
			return 109995826;
		case 181:
			return -747412737;
		case 182:
			return 1114341727;
		case 183:
			return -539456939;
		case 184:
			return 45887121;
		case 185:
			return 913271624;
		case 186:
			return -1652812715;
		case 187:
			return -1791365775;
		case 188:
			return -979299941;
		case 189:
			return 713062001;
		case 190:
			return -575045963;
		case 191:
			return 1852965262;
		case 192:
			return -1398836354;
		case 193:
			return -1829885298;
		case 194:
			return -1773850357;
		case 195:
			return -564258009;
		case 196:
			return 2016532685;
		case 197:
			return -1070563798;
		case 198:
			return -1619221343;
		case 199:
			return -345571691;
		case 200:
			return 544288390;
		case 201:
			return 159578294;
		case 202:
			return -76852849;
		case 203:
			return 1110295244;
		case 204:
			return 2104563477;
		case 205:
			return 1947827651;
		case 206:
			return -933072766;
		case 207:
			return 2104388648;
		case 208:
			return -1677140601;
		case 209:
			return -2133097881;
		case 210:
			return -826678792;
		case 211:
			return -513522325;
		case 212:
			return 1970588249;
		case 213:
			return -2080032591;
		case 214:
			return 1758847745;
		case 215:
			return 895010282;
		case 216:
			return 1786352060;
		case 217:
			return -833319691;
		case 218:
			return 1591329969;
		case 219:
			return 2123222014;
		case 220:
			return -1578397674;
		case 221:
			return 1473261684;
		case 222:
			return -241855024;
		case 223:
			return 12999093;
		case 224:
			return -6796437;
		case 225:
			return -268116367;
		case 226:
			return -636470867;
		case 227:
			return 1737668280;
		case 228:
			return 892807236;
		case 229:
			return -733247890;
		case 230:
			return 24047176;
		case 231:
			return -1561999014;
		case 232:
			return -2052774042;
		case 233:
			return -997150586;
		case 234:
			return -1189569496;
		case 235:
			return 46488141;
		case 236:
			return 1046566686;
		case 237:
			return 325139909;
		case 238:
			return -1585141069;
		case 239:
			return 802754820;
		case 240:
			return 1415981582;
		case 241:
			return -1886147520;
		case 242:
			return 654877947;
		case 243:
			return -415648720;
		case 244:
			return 1221327846;
		case 245:
			return 923162715;
		case 246:
			return 625423581;
		case 247:
			return 326668608;
		case 248:
			return 669530755;
		case 249:
			return 429759982;
		case 250:
			return -2111934838;
		case 251:
			return 1886178087;
		case 252:
			return 1587783573;
		case 253:
			return -279722001;
		case 254:
			return 1310070322;
		case 255:
			return 724026534;
		case 256:
			return 137387616;
		case 257:
			return -653439684;
		case 258:
			return 1376835592;
		case 259:
			return -1824203570;
		case 260:
			return -1654197998;
		case 261:
			return 798987653;
		case 262:
			return 976923323;
		case 263:
			return 1167442289;
		case 264:
			return 986998820;
		case 265:
			return -2119169513;
		case 266:
			return -2015960939;
		case 267:
			return -1287636759;
		case 268:
			return -706917073;
		case 269:
			return -2166805;
		case 270:
			return -1391602433;
		case 271:
			return 1782075221;
		case 272:
			return 1282544585;
		case 273:
			return 1732594027;
		case 274:
			return -1058817012;
		case 275:
			return 1090546265;
		case 276:
			return -1783120823;
		case 277:
			return -1535745896;
		case 278:
			return -2086922122;
		case 279:
			return -1675198649;
		case 280:
			return 1189497682;
		case 281:
			return -1565675519;
		case 282:
			return -268973591;
		case 283:
			return 1039159916;
		case 284:
			return 1111816631;
		case 285:
			return 405591388;
		case 286:
			return 897456793;
		case 287:
			return 104187473;
		case 288:
			return 773808542;
		case 289:
			return -1120669954;
		case 290:
			return -1389278274;
		case 291:
			return 552979403;
		case 292:
			return -1571578784;
		case 293:
			return -708312114;
		case 294:
			return 688823508;
		case 295:
			return -1622147240;
		case 296:
			return 830292162;
		case 297:
			return 226276782;
		case 298:
			return -678416628;
		case 299:
			return -1098528034;
		case 300:
			return 316207340;
		case 301:
			return -1909200748;
		case 302:
			return -939652363;
		case 303:
			return -1990194462;
		case 304:
			return -375447933;
		case 305:
			return 537014919;
		case 306:
			return 1784584921;
		case 307:
			return 1084182731;
		case 308:
			return -1045471300;
		case 309:
			return 1617414719;
		case 310:
			return -787761753;
		case 311:
			return -490616606;
		case 312:
			return 1491346514;
		case 313:
			return -1311702610;
		case 314:
			return -904250715;
		case 315:
			return 1034665895;
		case 316:
			return -101524555;
		case 317:
			return 1419152594;
		case 318:
			return -451359317;
		case 319:
			return -1915385310;
		case 320:
			return 1315162488;
		case 321:
			return -361152079;
		case 322:
			return -2041626192;
		case 323:
			return -2077812539;
		case 324:
			return -1371514637;
		case 325:
			return 1730017037;
		case 326:
			return 892816668;
		case 327:
			return -1994943603;
		case 328:
			return 603133554;
		case 329:
			return -30160144;
		case 330:
			return -1248299493;
		case 331:
			return 727393558;
		case 332:
			return 755611221;
		case 333:
			return -170255458;
		case 334:
			return 1011151573;
		case 335:
			return 1122339631;
		case 336:
			return 454815308;
		case 337:
			return 990701735;
		case 338:
			return -246340825;
		case 339:
			return -1410671073;
		case 340:
			return 1547608292;
		case 341:
			return -714132970;
		case 342:
			return 732290690;
		case 343:
			return 971340545;
		case 344:
			return -234132662;
		case 345:
			return -2143057988;
		case 346:
			return -993947465;
		case 347:
			return -486552269;
		case 348:
			return -1156317860;
		case 349:
			return 1229625803;
		case 350:
			return -388596167;
		case 351:
			return -1204639465;
		case 352:
			return -1384685096;
		case 353:
			return -2026728113;
		case 354:
			return -1228057307;
		case 355:
			return 1835126290;
		case 356:
			return 1890833594;
		case 357:
			return -751549960;
		case 358:
			return -1682270750;
		case 359:
			return -1839865333;
		case 360:
			return -1990383629;
		case 361:
			return 1712094016;
		case 362:
			return 1532953697;
		case 363:
			return 1620318083;
		case 364:
			return -307230331;
		case 365:
			return -1034549620;
		case 366:
			return -1293064293;
		case 367:
			return -1540142553;
		case 368:
			return -1769886012;
		case 369:
			return -1983081126;
		case 370:
			return -1106117124;
		case 371:
			return -1873108338;
		case 372:
			return -2097543219;
		case 373:
			return 155413195;
		case 374:
			return -1162387149;
		case 375:
			return 1728382685;
		case 376:
			return -649335959;
		case 377:
			return -1876502240;
		case 378:
			return -2107032155;
		case 379:
			return 619103418;
		case 380:
			return 1355448197;
		case 381:
			return 1681762005;
		case 382:
			return 1026887814;
		case 383:
			return 354352628;
		case 384:
			return 1519366642;
		case 385:
			return -82757515;
		case 386:
			return 386306655;
		case 387:
			return 1243962119;
		case 388:
			return 756214903;
		case 389:
			return -718417579;
		case 390:
			return -1445516411;
		case 391:
			return -672392892;
		case 392:
			return 1465341584;
		case 393:
			return -427758369;
		case 394:
			return -735647142;
		case 395:
			return 1535838048;
		case 396:
			return -602272282;
		case 397:
			return 2051264661;
		case 398:
			return 487172188;
		case 399:
			return 282270687;
		case 400:
			return 1607708943;
		case 401:
			return 1686264939;
		case 402:
			return 314786149;
		case 403:
			return 1402841185;
		case 404:
			return 1099170772;
		case 405:
			return 2125676786;
		case 406:
			return -363896735;
		case 407:
			return -468790222;
		case 408:
			return -1779133048;
		case 409:
			return 1732537631;
		case 410:
			return 1755095401;
		case 411:
			return 835771095;
		case 412:
			return 1963317232;
		case 413:
			return 259627919;
		case 414:
			return 1299075397;
		case 415:
			return -1509094230;
		case 416:
			return 61132362;
		case 417:
			return 1549741908;
		case 418:
			return 288484254;
		case 419:
			return -1877032947;
		case 420:
			return -1395676456;
		case 421:
			return 1136146715;
		case 422:
			return 468034421;
		case 423:
			return 1079459546;
		case 424:
			return -140369351;
		case 425:
			return 1822341990;
		case 426:
			return 1219701681;
		case 427:
			return 1601295268;
		case 428:
			return -1692460667;
		case 429:
			return 1471419228;
		case 430:
			return 907446160;
		case 431:
			return -1126482585;
		case 432:
			return 1911050315;
		case 433:
			return -1343525599;
		case 434:
			return 1261891225;
		case 435:
			return 763162704;
		case 436:
			return 1335861197;
		case 437:
			return 526744654;
		case 438:
			return -1177461517;
		case 439:
			return -241638635;
		case 440:
			return 1024262875;
		case 441:
			return 853355463;
		case 442:
			return -337288221;
		case 443:
			return 361381308;
		case 444:
			return -1264898804;
		case 445:
			return -585289073;
		case 446:
			return 1423542233;
		case 447:
			return -948489286;
		case 448:
			return 2063859257;
		case 449:
			return -1652627327;
		case 450:
			return -1959697839;
		case 451:
			return -1532267859;
		case 452:
			return -1410062763;
		case 453:
			return -901428716;
		case 454:
			return -1628873469;
		case 455:
			return 144855571;
		case 456:
			return -617589883;
		case 457:
			return -1306457086;
		case 458:
			return 1713542477;
		case 459:
			return -305542365;
		case 460:
			return 1985390213;
		case 461:
			return -2145069367;
		case 462:
			return -1674390752;
		case 463:
			return -2117214398;
		case 464:
			return 1880805647;
		case 465:
			return -62390436;
		case 466:
			return 1815288415;
		case 467:
			return 196214097;
		case 468:
			return -201958220;
		case 469:
			return 1400281261;
		case 470:
			return 1601515402;
		case 471:
			return -940704970;
		case 472:
			return -548371721;
		case 473:
			return -1022384613;
		case 474:
			return -357406394;
		case 475:
			return 1077068189;
		case 476:
			return -782241404;
		case 477:
			return 1669853467;
		case 478:
			return 1592019450;
		case 479:
			return 635273153;
		case 480:
			return -1559225678;
		case 481:
			return -266425508;
		case 482:
			return 1117400455;
		case 483:
			return 454332195;
		case 484:
			return -1328061889;
		case 485:
			return 561650932;
		case 486:
			return 256105670;
		case 487:
			return 1976779618;
		case 488:
			return -269095126;
		case 489:
			return 2145617267;
		case 490:
			return 1150213537;
		case 491:
			return 1598825281;
		case 492:
			return -712527121;
		case 493:
			return 1308553072;
		case 494:
			return 852866398;
		case 495:
			return -1794417972;
		case 496:
			return 293062146;
		case 497:
			return 95360094;
		case 498:
			return 807631773;
		case 499:
			return 1603958275;
		case 500:
			return 860052020;
		case 501:
			return -1885979781;
		case 502:
			return 746147970;
		case 503:
			return 666663006;
		case 504:
			return -2096186453;
		case 505:
			return 859409444;
		case 506:
			return -671427187;
		case 507:
			return 100192478;
		case 508:
			return 307812616;
		case 509:
			return 1670843243;
		case 510:
			return 899615863;
		case 511:
			return -298901850;
		case 512:
			return 1379186917;
		case 513:
			return -817206030;
		case 514:
			return -1150323212;
		case 515:
			return -247466821;
		case 516:
			return 427124242;
		case 517:
			return 855418120;
		case 518:
			return -777015093;
		case 519:
			return -722462870;
		case 520:
			return -937454324;
		case 521:
			return -339438116;
		case 522:
			return 2135639035;
		case 523:
			return 1254273765;
		case 524:
			return -792172668;
		case 525:
			return 1905987493;
		case 526:
			return 495693044;
		case 527:
			return -1693422950;
		case 528:
			return -205873076;
		case 529:
			return -2143114654;
		case 530:
			return -1420574021;
		case 531:
			return -1959250381;
		case 532:
			return -1088328663;
		case 533:
			return 513602003;
		case 534:
			return 359221401;
		case 535:
			return 1005272;
		case 536:
			return 1583044470;
		case 537:
			return 348853959;
		case 538:
			return 1045621973;
		case 539:
			return 1084576580;
		case 540:
			return 1651573695;
		case 541:
			return 1463321587;
		case 542:
			return -997505963;
		case 543:
			return -1649851713;
		case 544:
			return -386012962;
		case 545:
			return 1386101789;
		case 546:
			return 1227915917;
		case 547:
			return -218846335;
		case 548:
			return -352578118;
		case 549:
			return 1426626782;
		case 550:
			return -714081520;
		case 551:
			return 74547781;
		case 552:
			return 1271463052;
		case 553:
			return 1983140194;
		case 554:
			return 677262775;
		case 555:
			return -832337898;
		case 556:
			return -319249747;
		case 557:
			return -16955722;
		case 558:
			return -1360128126;
		case 559:
			return -1535425646;
		case 560:
			return -1063641743;
		case 561:
			return -1041133401;
		case 562:
			return 1380479304;
		case 563:
			return 600890828;
		case 564:
			return 733333190;
		case 565:
			return 1843035435;
		case 566:
			return -304127320;
		case 567:
			return 122470371;
		case 568:
			return 0;
		case 569:
			return -1591664384;
		case 570:
			return -673000374;
		case 571:
			return -1150938404;
		case 572:
			return -1756997214;
		case 573:
			return -813824107;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

bool func_586(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_633(iParam0, *uParam1, iParam2, bParam3) > 0;
}

int func_587(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_634(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_588(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_635(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_506(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_589(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (func_636(iParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_632(*uParam1, &Var0, bParam6, 0))
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
	if (!func_590(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_506(bParam6), uParam1, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_590(bool bParam0)
{
	if (func_187() == -1)
	{
		return 1;
	}
	return INVENTORY::_0x0FBBFFC891A97C81(func_506(bParam0));
}

int func_591(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_637(iParam0))
	{
		return 0;
	}
	if (!func_590(0))
	{
		return 0;
	}
	WEAPON::_0x106A811C6D3035F3(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_592(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::_0xD3750CCC00635FC2(iParam0))
	{
		iVar1 = func_638(WEAPON::_0xD3750CCC00635FC2(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

int func_593(int iParam0)
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

int func_594(struct<2> Param0, var uParam2, float fParam3, float fParam4, int iParam5, int iParam6)
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

void func_595(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 - (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1));
}

void func_596(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		if (((*Global_1945938)[iParam0 /*18*/])->f_5 == 5 && !func_509(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, 0);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
		}
	}
}

void func_597(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
	}
}

void func_598(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 || iParam1);
}

void func_599(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

bool func_600(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

void func_601(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

int func_602(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_603(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	char* sVar0;
	int iVar1;

	if (func_218(iParam1->f_6))
	{
		if (iParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		func_219(&(iParam1->f_6), 0, 1);
	}
	if (!func_218(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_538(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_639(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824, 0, 1704213876, iParam1->f_10, 0);
			if (func_218(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_611(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_640(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						func_641(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_511(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					func_640(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					func_513(iParam1->f_6, 0, 1);
				}
				else
				{
					func_513(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

int func_604(int iParam0)
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

void func_605(int* iParam0, int iParam1)
{
	if (!func_600(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_601(iParam0, 14);
		}
	}
}

bool func_606(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_607(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_608(int iParam0, int iParam1)
{
	var uVar0;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar4 = PED::_0x4642182A298187D0(iParam0, iParam1, &uVar0, 4, 1);
	if (iVar4 != 0)
	{
		return 1;
	}
	return 0;
}

bool func_609(int* iParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, var uParam8, float fParam9, bool bParam10, int iParam11)
{
	bool bVar0;
	int iVar1;

	bVar0 = (MISC::IS_BIT_SET(*iParam1, 0) && !MISC::IS_BIT_SET(*iParam1, 4));
	if (MISC::IS_BIT_SET(*iParam1, 13))
	{
		return true;
	}
	if (bParam10)
	{
		if (MISC::IS_BIT_SET(*iParam1, 20))
		{
			if (!MISC::IS_BIT_SET(*iParam0, 25))
			{
				MISC::SET_BIT(iParam0, 24);
			}
			return true;
		}
	}
	if (MISC::IS_BIT_SET(*iParam1, 9))
	{
		MISC::CLEAR_BIT(iParam1, 9);
		return true;
	}
	if (bParam6)
	{
		if (MISC::IS_BIT_SET(*iParam1, 6))
		{
			return true;
		}
	}
	else if (MISC::IS_BIT_SET(*iParam1, 5))
	{
		return true;
	}
	if (MISC::IS_BIT_SET(*iParam1, 7))
	{
		if (fParam5 > iParam1->f_4)
		{
			return true;
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 17))
	{
		if (bParam3)
		{
			if (bParam4)
			{
				return true;
			}
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 18))
	{
		if (MISC::IS_BIT_SET(*iParam1, 8))
		{
			iVar1 = 0;
			if (fParam9 > -1f)
			{
				if (fParam9 < iParam1->f_3)
				{
					iVar1 = 1;
				}
			}
			if (!bParam7)
			{
				if (uParam8 || iVar1)
				{
					return true;
				}
			}
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 2))
	{
		if (MISC::IS_BIT_SET(*iParam1, 1))
		{
			if (iParam11 < iParam1->f_14)
			{
				return true;
			}
		}
	}
	return !bVar0;
}

bool func_610(int iParam0, int iParam1)
{
	if (iParam1 && !func_218(iParam0))
	{
		return false;
	}
	return !func_509(iParam0, 4);
}

void func_611(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (iParam3 && !func_218(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = func_315(iParam0);
	func_640(iParam0, 18, 0, 1);
	func_640(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1);
	}
	HUD::_UIPROMPT_SET_GROUP(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam4, iParam2);
}

bool func_612(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_218(iParam0))
	{
		return false;
	}
	iVar0 = func_315(iParam0);
	if (HUD::_0xCD072523791DDC1B(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

bool func_613(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_218(iParam0))
	{
		return false;
	}
	iVar0 = func_315(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_614(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_218(iParam0))
	{
		return;
	}
	iVar0 = func_315(iParam0);
	HUD::_UIPROMPT_RESTART_MODES(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

int func_615()
{
	if (func_642())
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

void func_616(var uParam0, var uParam1)
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

int func_617(bool bParam0, var uParam1, var uParam2)
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

int func_618(var uParam0)
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

void func_619(var uParam0)
{
	int iVar0;

	if (Global_1935630->f_38 == 0)
	{
		func_74(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(Global_1935630->f_34[iVar0])))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(&(Global_1935630->f_34[iVar0])))
				{
					func_34(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}

int func_620(int iParam0, int iParam1, bool bParam2, int iParam3)
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

int func_621(int iParam0)
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

int func_622(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_623(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return 1;
	}
	return 0;
}

int func_624(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
		vVar3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	}
	vVar6 = { vParam1 - vVar0 };
	fVar9 = func_643(vVar3, vVar6);
	if (MISC::ABSF(fVar9) > fParam4)
	{
		if (fVar9 > 0f)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (func_455(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

struct<4> func_625(bool bParam0)
{
	return func_588(1328661203, func_644(), -1591664384, bParam0);
}

int func_626(int iParam0)
{
	vector3 vVar0;

	if (!func_635(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_627(bool bParam0)
{
	int iVar0;

	iVar0 = func_506(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224214))
		{
			*Global_1224214 = { func_588(923904168, func_625(bParam0), -740156546, bParam0) };
		}
		return *Global_1224214;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224222))
		{
			*Global_1224222 = { func_588(923904168, func_625(bParam0), -740156546, 0) };
		}
		return *Global_1224222;
	}
	return func_588(923904168, func_625(bParam0), -740156546, 0);
}

int func_628(int iParam0, bool bParam1)
{
	if (func_630(iParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
	{
		if (bParam1)
		{
			return func_645(-1185145312, 0) > 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

struct<4> func_629(bool bParam0)
{
	int iVar0;

	iVar0 = func_506(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224218))
		{
			*Global_1224218 = { func_588(271701509, func_625(bParam0), 12999093, 0) };
		}
		return *Global_1224218;
	}
	return func_588(271701509, func_625(bParam0), 12999093, 0);
}

int func_630(int iParam0)
{
	struct<2> Var0;

	if (!func_635(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_631(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_630(iParam0);
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &iVar0))
		{
			if (ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iParam1, iVar0))
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

int func_632(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(func_506(bParam5), &uParam0, uParam4, !bParam6))
	{
		return 0;
	}
	return 1;
}

int func_633(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;

	if (!func_635(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_588(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_506(bParam6), &Var0, 0);
	return uVar4;
}

int func_634(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_506(0);
	*uParam1 = { func_588(iParam0, func_627(0), iParam3, 0) };
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

bool func_635(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_636(var uParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_637(int iParam0)
{
	return WEAPON::_0x1F7977C9101F807F(iParam0);
}

int func_638(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_639(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_0xBC0884BC590951C7(iParam1, 0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_509(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == ((*Global_1945938)[iVar0 /*18*/])->f_11 && iParam1 == ((*Global_1945938)[iVar0 /*18*/])->f_4)
				{
					if (iParam3 <= Global_1945938[iVar0 /*18*/])
					{
						return iVar0;
					}
				}
				Jump @140; //curOff = 127
				if (iVar1 == 0)
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
			if (iVar1 != 0)
			{
				func_646(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}

void func_640(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam3 && !func_218(iParam0))
	{
		return;
	}
	iVar0 = func_315(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam1, iParam2);
}

void func_641(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4)
{
	int iVar0;

	if (iParam4 && !func_218(iParam0))
	{
		return;
	}
	iVar0 = func_315(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, MISC::_CREATE_VAR_STRING(10, sParam1, sParam2, sParam3));
}

int func_642()
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

float func_643(vector3 vParam0, vector3 vParam3)
{
	float fVar0;

	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		vParam0.x = (vParam0.x / fVar0);
		vParam0.f_1 = (vParam0.y / fVar0);
	}
	fVar0 = BUILTIN::VMAG(vParam3);
	if (fVar0 != 0f)
	{
		vParam3.x = (vParam3.x / fVar0);
		vParam3.f_1 = (vParam3.y / fVar0);
	}
	return ((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y));
}

struct<4> func_644()
{
	struct<4> Var0;

	return Var0;
}

int func_645(int iParam0, bool bParam1)
{
	if (func_637(iParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_506(bParam1), iParam0, 0);
}

void func_646(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, var uParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	int iVar0;

	((*Global_1945938)[iParam0 /*18*/])->f_4 = iParam1;
	(*Global_1945938)[iParam0 /*18*/] = iParam4;
	((*Global_1945938)[iParam0 /*18*/])->f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	((*Global_1945938)[iParam0 /*18*/])->f_2 = iParam5;
	((*Global_1945938)[iParam0 /*18*/])->f_6 = { vParam6 };
	((*Global_1945938)[iParam0 /*18*/])->f_9 = fParam9;
	((*Global_1945938)[iParam0 /*18*/])->f_10 = iParam10;
	((*Global_1945938)[iParam0 /*18*/])->f_11 = iParam11;
	((*Global_1945938)[iParam0 /*18*/])->f_12 = { 0f, 0f, 0f };
	((*Global_1945938)[iParam0 /*18*/])->f_5 = iParam12;
	((*Global_1945938)[iParam0 /*18*/])->f_1 = 2;
	((*Global_1945938)[iParam0 /*18*/])->f_17 = -1;
	iVar0 = HUD::_UIPROMPT_REGISTER_BEGIN();
	HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam1);
	if (iParam23 != 0)
	{
		HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam23);
	}
	HUD::_UIPROMPT_SET_TEXT(iVar0, sParam2);
	if (iParam3 == 4)
	{
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, vParam6);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	else if (iParam3 == 2)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam10);
	}
	else if (iParam3 == 5)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam11);
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, 0f, 0f, 0f);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	HUD::_UIPROMPT_SET_PRIORITY(iVar0, iParam4);
	HUD::_UIPROMPT_SET_TRANSPORT_MODE(iVar0, iParam5);
	HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 18, 1);
	if (bParam22)
	{
		HUD::_0x53CE46C01A089DA1(iVar0, 1);
	}
	switch (iParam14)
	{
		case 0:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 0);
			break;
		case 2:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 1);
			break;
		case 1:
			HUD::_UIPROMPT_SET_PRESSED_TIMED_MODE(iVar0, iParam16);
			break;
		case 3:
			HUD::_UIPROMPT_SET_HOLD_INDEFINITELY_MODE(iVar0);
			break;
		case 6:
			HUD::_UIPROMPT_SET_HOLD_AUTO_FILL_MODE(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, 1);
			}
			break;
		case 7:
			HUD::_UIPROMPT_SET_MASH_MODE(iVar0, iParam17);
			break;
		case 8:
			HUD::_UIPROMPT_SET_MASH_AUTO_FILL_MODE(iVar0, iParam16, iParam17);
			break;
		case 13:
			HUD::_UIPROMPT_SET_MASH_INDEFINITELY_MODE(iVar0);
			break;
		case 15:
			HUD::_UIPROMPT_SET_TARGET_MODE(iVar0, 0.5f, 0.1f, 0);
			break;
		case 9:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 4:
		case 5:
			HUD::_UIPROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, iParam24);
			break;
		case 10:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 11:
			HUD::_UIPROMPT_SET_MASH_MANUAL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		case 12:
			HUD::_UIPROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		case 14:
			HUD::_UIPROMPT_SET_ROTATE_MODE(iVar0, iParam20, iParam21);
			HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 10, 1);
			break;
	}
	HUD::_UIPROMPT_REGISTER_END(iVar0);
	((*Global_1945938)[iParam0 /*18*/])->f_3 = iVar0;
	func_596(iParam0, 1);
	func_597(iParam0, 1);
	func_598(iParam0, 128);
}

