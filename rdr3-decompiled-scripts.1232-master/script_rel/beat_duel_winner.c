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
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	struct<8> Local_19 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_27 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<193> Local_35 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_228 = 0;
	struct<2> Local_229[4];
	int iLocal_238 = 0;
	struct<32> Local_239[14];
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = -1;
	var uLocal_699 = -1;
	var uLocal_700 = 1065353216;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = -1082130432;
	var uLocal_707 = 0;
	var uLocal_708 = 3;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 1065353216;
	var uLocal_738 = 1119092736;
	var uLocal_739 = 1092616192;
	var uLocal_740 = 1085276160;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = -1;
	var uLocal_761 = -1;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	struct<87> Local_782 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, -1082130432, -1082130432, -1082130432, 1, 1050253722, 3000, 6000, 0 } ;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = -1;
	int iLocal_873 = 0;
	int iLocal_874 = 0;
	struct<7> Local_875 = { 0, 0, 0, -1, 0, 0, 1 } ;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 15;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	vector3 vLocal_1040 = { 0f, 0f, 10000f };
	int iLocal_1043 = 0;
	int iLocal_1044 = 0;
	int iLocal_1045 = 0;
	struct<21> Local_1046[1];
	struct<17> Local_1068[3];
	int iLocal_1120 = 0;
	var uLocal_1121[14] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_1136[14] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1151 = 0;
	int iLocal_1152 = 0;
	int iLocal_1153 = 0;
	int iLocal_1154 = 0;
	int iLocal_1155 = 0;
	var uLocal_1156 = 4;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
	var uLocal_1181 = 0;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	struct<4> Local_1189[32];
	struct<4> Local_1318 = { 0, 0, 0, 0 } ;
	struct<4> Local_1322 = { 0, 0, 0, 0 } ;
	struct<4> Local_1326 = { 0, 0, 0, 0 } ;
	struct<4> Local_1330 = { 0, 0, 0, 0 } ;
	struct<4> Local_1334 = { 0, 0, 0, 0 } ;
	struct<4> Local_1338 = { 0, 0, 0, 0 } ;
	struct<4> Local_1342 = { 0, 0, 0, 0 } ;
	float fLocal_1346 = 0f;
	float fLocal_1347 = 0f;
	int iLocal_1348 = 0;
	int iLocal_1349 = 0;
	int iLocal_1350 = 0;
	int iLocal_1351 = 0;
	int iLocal_1352 = 0;
	int iLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	int iLocal_1356 = 0;
	int iLocal_1357 = 0;
	int iLocal_1358 = 0;
	bool bLocal_1359 = false;
	vector3 vLocal_1360[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_1367 = 0;
	int iLocal_1368 = 0;
	bool bLocal_1369 = false;
	bool bLocal_1370 = false;
	var uLocal_1371 = 0;
	int iLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	bool bLocal_1376 = false;
	bool bLocal_1377 = false;
	int iLocal_1378 = 0;
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
	iLocal_1356 = 4;
	iLocal_1378 = -1;
	Local_35.f_3 = func_1(&vScriptParam_0);
	Local_35.f_43 = func_2();
	Local_35.f_161 = func_3(vScriptParam_0.z, 2);
	func_4(&Local_35, 1);
	func_5(&(Local_35.f_5));
	func_6(&(Local_35.f_5), 1);
	func_7(&(Local_35.f_5), 1);
	func_8(&(Local_35.f_5), 0);
	func_9(&(Local_35.f_5), 1);
	func_10(&(Local_35.f_5), 0);
	iLocal_17 = func_11(Local_35.f_3, 1, 0);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_1369 = true;
	}
	while (true)
	{
		func_13(bLocal_1369, 944/*func_12*/, 0);
		if (bLocal_1369)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_18)
			{
				case 0:
					if (func_14())
					{
						iLocal_18 = 1;
					}
					break;
				case 1:
					if (func_15(&Local_35, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						func_16(&Local_35, &iLocal_1372, &uLocal_1371);
						func_17();
						iLocal_18 = 3;
					}
					else if (Local_35.f_160)
					{
						func_12();
					}
					break;
				case 3:
					if (func_18())
					{
						func_19();
						func_20();
						func_21(0);
						func_22();
						if (iLocal_1372 != 10)
						{
						}
						else
						{
							func_23(0, &Local_782, &uLocal_688, -1038090240, 1103626240);
						}
						func_24(&iLocal_238, 32);
						func_25();
						iLocal_18 = 4;
					}
					break;
				case 4:
					if (!func_26(&Local_35, &uLocal_1121, iLocal_17, 0, 1, 0, 1, 0))
					{
						func_12();
					}
					if (!Local_35.f_46)
					{
						if (bLocal_1370)
						{
							if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_1121[0])))
							{
								func_27(&(uLocal_1121[0]));
							}
						}
					}
					if (!Local_35.f_46)
					{
						if (func_28() || func_3(iLocal_238, 268435456))
						{
							if (func_3(iLocal_238, 268435456))
							{
							}
							Local_35.f_46 = 1;
							func_29();
							func_30(&uLocal_1136);
							func_31(Local_875);
							func_32();
							func_33(&Local_1068, 1, 1, 1, 0);
							if (!func_3(iLocal_238, 33554432))
							{
								func_34();
							}
							iLocal_15 = 16;
						}
					}
					if (func_35())
					{
						Local_35.f_50 = 1;
						func_12();
					}
					if (func_36(&Local_35, &uLocal_1121, !Local_35.f_50, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0))
					{
						func_12();
					}
					break;
			}
			BUILTIN::WAIT(Local_35.f_158);
		}
	}
}

var func_1(var uParam0)
{
	return *uParam0;
}

int func_2()
{
	return Global_1894899->f_2;
}

bool func_3(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_4(var uParam0, bool bParam1)
{
	func_5(&(uParam0->f_5));
	if (uParam0->f_161)
	{
		func_37("BEAT_LAUNCHED", 4000, 0, 1, 0, 0, -1, -1, 0);
	}
	MAP::ALLOW_SONAR_BLIPS(bParam1);
}

void func_5(var uParam0)
{
	func_7(uParam0, 0);
	func_6(uParam0, 0);
	func_38(uParam0, 1);
	func_39(uParam0, 1);
	func_40(uParam0, 0);
	func_9(uParam0, 1);
	func_41(uParam0, 1, 1, 1);
}

void func_6(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_42(&(uParam0->f_1), 2048);
	}
	else
	{
		func_24(&(uParam0->f_1), 2048);
	}
}

void func_7(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_42(&(uParam0->f_1), 16384);
	}
	else
	{
		func_24(&(uParam0->f_1), 16384);
	}
}

void func_8(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_42(&(uParam0->f_1), 1024);
	}
	else
	{
		func_24(&(uParam0->f_1), 1024);
	}
}

void func_9(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_24(uParam0, 256);
	}
	else
	{
		func_42(uParam0, 256);
	}
}

void func_10(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_24(uParam0, 524288);
	}
	else
	{
		func_42(uParam0, 524288);
	}
}

int func_11(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return (func_43(iParam0) % iParam1);
	}
	return (func_44(iParam0) % iParam1);
}

void func_12()
{
	func_45(&iLocal_1043, 1);
	if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_1121[0])))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(uLocal_1121[0]), false);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uLocal_1121[0]);
	}
	if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_1121[1])))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(uLocal_1121[1]), false);
		PED::SET_PED_CONFIG_FLAG(&(uLocal_1121[1]), 243, false);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uLocal_1121[1]);
	}
	func_46(&Local_35, &uLocal_1121, &uLocal_1136, iLocal_17, iLocal_1372, uLocal_1371, 0, 1, 1, 1);
	if (iLocal_1372 == 10 && func_3(iLocal_238, 32))
	{
		func_23(1, &Local_782, &uLocal_688, -1038090240, 1103626240);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(iLocal_1151))
	{
		VOLUME::_0x43F867EF5C463A53(iLocal_1151);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(iLocal_1152))
	{
		VOLUME::_0x43F867EF5C463A53(iLocal_1152);
	}
	PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::GET_PLAYER_INDEX(), 0, 0, -1, 0);
	func_32();
	if (iLocal_1368)
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 514, false);
		iLocal_1368 = 0;
	}
	func_47(&Local_782, &uLocal_688);
	func_48(1);
	func_49();
	func_50();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_13(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!func_51(bParam2) || CAM::IS_SCREEN_FADED_OUT())
		{
			Call_Loc(iParam1);
		}
	}
}

int func_14()
{
	switch (iLocal_14)
	{
		case 0:
			if (func_52(&Local_35))
			{
				iLocal_873 = func_2();
				func_53();
				func_54();
				func_55();
				iLocal_14 = 1;
			}
			break;
		case 1:
			if (!func_56(&uLocal_1156))
			{
				return 0;
			}
			if (!func_57(&Local_239))
			{
				return 0;
			}
			return 1;
	}
	return 0;
}

int func_15(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, bool bParam7)
{
	float fVar0;

	if (iParam6 || func_58(*uParam1, &(uParam0->f_51), uParam0->f_161, &(uParam0->f_158), *uParam1, &(uParam0->f_160), 1, bParam3, bParam4))
	{
		if (iParam6 || func_59(uParam0, *uParam1))
		{
			if (uParam0->f_161 && uParam0->f_184)
			{
				fVar0 = 7f;
				if (func_60(uParam0->f_3, 1))
				{
					fVar0 = 20f;
				}
				MISC::CLEAR_AREA(uParam0->f_51, fVar0, 2097152);
			}
			if (iParam5 == 1)
			{
				func_61(uParam0, -1, 0, bParam7);
			}
			_NAMESPACE49::_0x9D16896F0DBE78A2(uParam0->f_51, 5f);
			if (bParam2)
			{
				uParam0->f_51.f_3 = func_62(uParam0->f_51);
			}
			return 1;
		}
	}
	return 0;
}

void func_16(var uParam0, var uParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*uParam1 = 9;
			*uParam2 = 0;
			break;
		case 1:
			*uParam1 = 10;
			*uParam2 = 0;
			break;
	}
}

void func_17()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 14)
	{
		func_63(&((Local_239[iVar0 /*32*/])->f_22));
		iVar0++;
	}
	switch (iLocal_873)
	{
		case 76:
			(Local_239[0 /*32*/])->f_6 = { -346.4771f, 735.5283f, 116.4082f };
			(Local_239[0 /*32*/])->f_9 = 14.4829f;
			(Local_239[1 /*32*/])->f_6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS((Local_239[0 /*32*/])->f_6, (Local_239[0 /*32*/])->f_9, 0f, 10.5f, 0f) };
			(Local_239[1 /*32*/])->f_9 = MISC::GET_HEADING_FROM_VECTOR_2D(((Local_239[0 /*32*/])->f_6 - (Local_239[1 /*32*/])->f_6), ((Local_239[0 /*32*/])->f_6.f_1 - (Local_239[1 /*32*/])->f_6.f_1));
			(Local_239[2 /*32*/])->f_6 = { -353.117f, 734.682f, 116.082f };
			(Local_239[2 /*32*/])->f_9 = -53.853f;
			(Local_239[3 /*32*/])->f_6 = { -353.117f, 734.682f, 116.082f };
			(Local_239[3 /*32*/])->f_9 = -53.853f;
			(Local_239[4 /*32*/])->f_6 = { -324.756f, 739.587f, 116.538f };
			(Local_239[4 /*32*/])->f_9 = 96.065f;
			(Local_239[5 /*32*/])->f_6 = { -324.756f, 739.587f, 116.538f };
			(Local_239[5 /*32*/])->f_9 = 96.065f;
			(Local_239[6 /*32*/])->f_6 = { -338.8194f, 761.5798f, 116.6062f };
			(Local_239[6 /*32*/])->f_9 = 134.873f;
			(Local_239[7 /*32*/])->f_6 = { -342.27f, 717.97f, 116.622f };
			(Local_239[7 /*32*/])->f_9 = 41.92f;
			(Local_239[8 /*32*/])->f_6 = { -343.07f, 717.73f, 116.622f };
			(Local_239[8 /*32*/])->f_9 = -35.16f;
			(Local_239[9 /*32*/])->f_6 = { -355.795f, 748.096f, 115.68f };
			(Local_239[9 /*32*/])->f_9 = -125.813f;
			(Local_239[10 /*32*/])->f_6 = { -355.795f, 748.096f, 115.68f };
			(Local_239[10 /*32*/])->f_9 = -125.813f;
			(Local_239[11 /*32*/])->f_6 = { -328.678f, 754.037f, 116.096f };
			(Local_239[11 /*32*/])->f_9 = -3.124f;
			(Local_239[12 /*32*/])->f_6 = { -328.678f, 754.037f, 116.096f };
			(Local_239[12 /*32*/])->f_9 = -3.124f;
			(Local_239[13 /*32*/])->f_6 = { -328.678f, 754.037f, 116.096f };
			(Local_239[13 /*32*/])->f_9 = -3.124f;
			break;
		case 92:
			(Local_239[0 /*32*/])->f_6 = { 2956.972f, 518.731f, 43.95716f };
			(Local_239[0 /*32*/])->f_9 = -1.91f;
			(Local_239[1 /*32*/])->f_6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS((Local_239[0 /*32*/])->f_6, (Local_239[0 /*32*/])->f_9, 0f, 10.5f, 0f) };
			(Local_239[1 /*32*/])->f_9 = MISC::GET_HEADING_FROM_VECTOR_2D(((Local_239[0 /*32*/])->f_6 - (Local_239[1 /*32*/])->f_6), ((Local_239[0 /*32*/])->f_6.f_1 - (Local_239[1 /*32*/])->f_6.f_1));
			(Local_239[2 /*32*/])->f_6 = { 2967.377f, 534.855f, 42.684f };
			(Local_239[2 /*32*/])->f_9 = 148.123f;
			(Local_239[3 /*32*/])->f_6 = { 2967.377f, 534.855f, 42.684f };
			(Local_239[3 /*32*/])->f_9 = 148.123f;
			(Local_239[4 /*32*/])->f_6 = { 2953.076f, 532.356f, 43.783f };
			(Local_239[4 /*32*/])->f_9 = -164.591f;
			(Local_239[5 /*32*/])->f_6 = { 2953.076f, 532.356f, 43.783f };
			(Local_239[5 /*32*/])->f_9 = -164.591f;
			(Local_239[6 /*32*/])->f_6 = { 2954.992f, 544.578f, 43.811f };
			(Local_239[6 /*32*/])->f_9 = -173.237f;
			(Local_239[7 /*32*/])->f_6 = { 2966.757f, 505.9f, 44.21f };
			(Local_239[7 /*32*/])->f_9 = -135.91f;
			(Local_239[8 /*32*/])->f_6 = { 2966.757f, 505.9f, 44.21f };
			(Local_239[8 /*32*/])->f_9 = -135.91f;
			(Local_239[9 /*32*/])->f_6 = { 2969.58f, 504.118f, 44.036f };
			(Local_239[9 /*32*/])->f_9 = 62.425f;
			(Local_239[10 /*32*/])->f_6 = { 2969.58f, 504.118f, 44.036f };
			(Local_239[10 /*32*/])->f_9 = 62.425f;
			(Local_239[11 /*32*/])->f_6 = { 2955.397f, 498.389f, 44.792f };
			(Local_239[11 /*32*/])->f_9 = -119.179f;
			(Local_239[12 /*32*/])->f_6 = { 2955.397f, 498.389f, 44.792f };
			(Local_239[12 /*32*/])->f_9 = -119.179f;
			(Local_239[13 /*32*/])->f_6 = { 2955.397f, 498.389f, 44.792f };
			(Local_239[13 /*32*/])->f_9 = -119.179f;
			break;
	}
}

int func_18()
{
	switch (iLocal_16)
	{
		case 0:
			if (!func_64(&Local_35, &uLocal_903, &Local_239, 0, 1, 1, 0, -1))
			{
				func_12();
			}
			iLocal_16 = 1;
			break;
		case 1:
			if (!func_65(&uLocal_903, &Local_239, &uLocal_1121, 1, 1, 0, -1))
			{
				return 0;
			}
			iLocal_16 = 6;
			return 1;
		case 6:
			return 1;
	}
	return 0;
}

void func_19()
{
	int iVar0;

	func_67(&(uLocal_1121[0]), func_66(131072, 1056964608, 1065353216), 0, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
	PED::SET_PED_COMBAT_ATTRIBUTES(&(uLocal_1121[0]), 5, true);
	func_68(&(uLocal_1121[0]), &((Local_239[0 /*32*/])->f_23), 0);
	func_67(&(uLocal_1121[1]), func_66(131072, 1056964608, 1065353216), 0, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
	PED::SET_PED_COMBAT_ATTRIBUTES(&(uLocal_1121[1]), 5, true);
	func_68(&(uLocal_1121[1]), &((Local_239[1 /*32*/])->f_23), 0);
	PED::SET_PED_CONFIG_FLAG(&(uLocal_1121[1]), 243, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(&(uLocal_1121[1]), 5, true);
	func_69(&(uLocal_1121[0]), &Local_35, 0);
	func_69(&(uLocal_1121[1]), &Local_35, 0);
	iVar0 = 1;
	while (iVar0 <= 13)
	{
		func_70(&(uLocal_1121[iVar0]), 1);
		iVar0++;
	}
	PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(&(uLocal_1121[1]), 0, 1);
	PED::SET_PED_CONFIG_FLAG(&(uLocal_1121[0]), 6, true);
	PED::SET_PED_CONFIG_FLAG(&(uLocal_1121[1]), 6, true);
	DECORATOR::DECOR_SET_BOOL(&(uLocal_1121[0]), "bBeatPed", true);
	DECORATOR::DECOR_SET_BOOL(&(uLocal_1121[1]), "bBeatPed", true);
}

void func_20()
{
	Local_19.f_4 = "script@beat@town@duelWinner@duelPreDuelerA";
	Local_19.f_5 = "script@beat@town@duelWinner@duelPreDuelerB";
	Local_19.f_6 = "script@beat@town@duelWinner@crowdA_MaleFemale";
	Local_19.f_7 = "script@beat@town@duelWinner@crowdB_MaleMale";
	Local_27.f_4 = "script@beat@town@duelWinner@crowdC_Male";
	Local_27.f_5 = "script@beat@town@duelWinner@crowdD_MaleMale";
	Local_27.f_6 = "script@beat@town@duelWinner@crowdE_MaleFemale";
	Local_27.f_7 = "script@beat@town@duelWinner@crowdF_MaleMaleFemale";
}

void func_21(int iParam0)
{
	Local_782 = Global_35;
	Local_782.f_1 = &uLocal_1121[0];
	Local_782.f_45 = { (Local_239[0 /*32*/])->f_6 };
	Local_782.f_42 = { (Local_239[1 /*32*/])->f_6 };
	func_71(&Local_782, 1);
	if (iParam0 == 0)
	{
		func_72(&Local_782, 2);
	}
	else
	{
		func_72(&Local_782, 3);
	}
}

void func_22()
{
	switch (func_2())
	{
		case 76:
			if (iLocal_17 == 0)
			{
				StringCopy(Local_1189[1 /*4*/], func_73("WINNER_CHEATER"), 32);
				StringCopy(Local_1189[2 /*4*/], func_73("LOSER_WON_GAME"), 32);
				StringCopy(Local_1189[3 /*4*/], func_73("WINNER_DENY"), 32);
				StringCopy(Local_1189[4 /*4*/], func_73("LOSER_DEFEND"), 32);
				StringCopy(Local_1189[5 /*4*/], func_73("WINNER_CHAL"), 32);
				StringCopy(Local_1189[6 /*4*/], func_73("LOSER_AGREE"), 32);
				StringCopy(Local_1189[22 /*4*/], func_73("WINNER_MOVE"), 32);
				StringCopy(&Local_1318, func_73("OFFER_POSSE"), 32);
				StringCopy(&Local_1322, func_73("OFFER"), 32);
				StringCopy(&Local_1326, func_73("OFFER_SICK"), 32);
				StringCopy(&Local_1330, func_73("SCARED_POSSE"), 32);
				StringCopy(&Local_1334, func_73("SCARED"), 32);
				StringCopy(&Local_1338, func_73("SCARED_SICK"), 32);
				StringCopy(&Local_1342, func_73("DUELER_RESPOND"), 32);
			}
			break;
		case 92:
			if (iLocal_17 == 0)
			{
				StringCopy(Local_1189[0 /*4*/], func_73("ARGUE_MIND"), 32);
				StringCopy(Local_1189[1 /*4*/], func_73("ARGUE"), 32);
				StringCopy(Local_1189[3 /*4*/], func_73("ACCUSE"), 32);
				StringCopy(Local_1189[4 /*4*/], func_73("DENY"), 32);
				StringCopy(Local_1189[5 /*4*/], func_73("ASK"), 32);
				StringCopy(Local_1189[6 /*4*/], func_73("DADDY"), 32);
				StringCopy(Local_1189[7 /*4*/], func_73("INSULT"), 32);
				StringCopy(Local_1189[8 /*4*/], func_73("THREAT_MIND"), 32);
				StringCopy(Local_1189[9 /*4*/], func_73("ANGER"), 32);
				StringCopy(Local_1189[10 /*4*/], func_73("MOVEMENT"), 32);
				StringCopy(Local_1189[11 /*4*/], func_73("THREAT"), 32);
				StringCopy(Local_1189[12 /*4*/], func_73("ACCEPT"), 32);
				StringCopy(Local_1189[22 /*4*/], func_73("CHALLENGE"), 32);
				StringCopy(&Local_1318, func_73("OFFER_POSSE"), 32);
				StringCopy(&Local_1322, func_73("OFFER"), 32);
				StringCopy(&Local_1326, func_73("OFFER"), 32);
				StringCopy(&Local_1330, func_73("SCARED_POSSE"), 32);
				StringCopy(&Local_1334, func_73("SCARED"), 32);
				StringCopy(&Local_1338, "INSULT_RESPONSE_SICK", 32);
				StringCopy(&Local_1342, "ACCEPT_DUEL", 32);
			}
			break;
	}
}

void func_23(bool bParam0, var uParam1, var uParam2, float fParam3, int iParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;

	fVar6 = func_74(uParam1->f_42, uParam1->f_45, 1);
	fVar7 = func_74(uParam1->f_45, uParam1->f_42, 1);
	if (func_2() == 76)
	{
		vVar0 = { -269.649f, 791.1334f, 17.58054f };
		vVar3 = { -342.3348f, 777.1977f, 215.2967f };
	}
	else if (func_2() == 105)
	{
		vVar0 = { 1312.238f, -1296.278f, 0.850876f };
		vVar3 = { 1432.387f, -1431.857f, 179.1864f };
	}
	else
	{
		vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam1->f_42, fVar6, 0f, fParam3, -100f) };
		vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam1->f_45, fVar7, 0f, fParam3, 100f) };
	}
	if (bParam0)
	{
		if (func_75(uParam2, 2))
		{
			PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(vVar0, vVar3, iParam4, 0, 1);
		}
	}
	else if (!func_75(uParam2, 2))
	{
		PATHFIND::SET_ROADS_IN_ANGLED_AREA(vVar0, vVar3, iParam4, 0, bParam0, 1, 0);
		func_76(uParam2, 2);
	}
}

void func_24(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

void func_25()
{
	Local_19 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_19.f_4, 0, "pblPacingIdles", false, true);
	Local_19.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_19.f_5, 0, "pblPacingIdles", false, true);
	Local_19.f_2 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_19.f_6, 0, "pblPreDuel", false, true);
	Local_19.f_3 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_19.f_7, 0, "pblPreDuel", false, true);
	Local_27 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_27.f_4, 0, "pblPreDuel", false, true);
	Local_27.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_27.f_5, 0, "pblPreDuel", false, true);
	Local_27.f_2 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_27.f_6, 0, "pblPreDuel", false, true);
	Local_27.f_3 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_27.f_7, 0, "pblPreDuel", false, true);
	func_77(&((Local_239[0 /*32*/])->f_6), 1088421888);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_19, (Local_239[0 /*32*/])->f_6, 0f, 0f, (Local_239[0 /*32*/])->f_9, 2);
	if (func_78(&(uLocal_1121[0]), 0, 1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_19, "pedDuelA", &(uLocal_1121[0]), 0);
	}
	func_77(&((Local_239[1 /*32*/])->f_6), 1088421888);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_19.f_1, (Local_239[1 /*32*/])->f_6, 0f, 0f, (Local_239[1 /*32*/])->f_9, 2);
	if (func_78(&(uLocal_1121[1]), 0, 1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_19.f_1, "pedDuelB", &(uLocal_1121[1]), 0);
	}
	func_77(&((Local_239[2 /*32*/])->f_6), 2f);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_19.f_2, (Local_239[2 /*32*/])->f_6, 0f, 0f, (Local_239[2 /*32*/])->f_9, 2);
	if (func_78(&(uLocal_1121[2]), 0, 1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_19.f_2, "pedCrowdFemaleA", &(uLocal_1121[2]), 0);
	}
	if (func_78(&(uLocal_1121[3]), 0, 1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_19.f_2, "pedCrowdMaleA", &(uLocal_1121[3]), 0);
	}
	func_77(&((Local_239[4 /*32*/])->f_6), 2f);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_19.f_3, (Local_239[4 /*32*/])->f_6, 0f, 0f, (Local_239[4 /*32*/])->f_9, 2);
	if (func_78(&(uLocal_1121[4]), 0, 1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_19.f_3, "pedCrowdMaleA", &(uLocal_1121[4]), 0);
	}
	if (func_78(&(uLocal_1121[5]), 0, 1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_19.f_3, "pedCrowdMaleB", &(uLocal_1121[5]), 0);
	}
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_27, (Local_239[6 /*32*/])->f_6, 0f, 0f, (Local_239[6 /*32*/])->f_9, 2);
	if (func_78(&(uLocal_1121[6]), 0, 1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_27, "pedCrowdMaleA", &(uLocal_1121[6]), 0);
	}
	func_77(&((Local_239[7 /*32*/])->f_6), 2f);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_27.f_1, Vector(116.362f, 717.985f, -342.291f) - Vector(0f, -1.245f, -2.09f), 0f, 0f, -178.125f, 2);
	if (func_78(&(uLocal_1121[7]), 0, 1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_27.f_1, "pedCrowdMaleA", &(uLocal_1121[7]), 0);
	}
	if (func_78(&(uLocal_1121[8]), 0, 1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_27.f_1, "pedCrowdMaleB", &(uLocal_1121[8]), 0);
	}
	func_77(&((Local_239[9 /*32*/])->f_6), 2f);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_27.f_2, (Local_239[9 /*32*/])->f_6, 0f, 0f, (Local_239[9 /*32*/])->f_9, 2);
	if (func_78(&(uLocal_1121[9]), 0, 1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_27.f_2, "pedCrowdFemaleA", &(uLocal_1121[9]), 0);
	}
	if (func_78(&(uLocal_1121[10]), 0, 1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_27.f_2, "pedCrowdMaleA", &(uLocal_1121[10]), 0);
	}
	func_77(&((Local_239[11 /*32*/])->f_6), 2f);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_27.f_3, (Local_239[11 /*32*/])->f_6, 0f, 0f, (Local_239[11 /*32*/])->f_9, 2);
	if (func_78(&(uLocal_1121[11]), 0, 1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_27.f_3, "pedCrowdFemaleA", &(uLocal_1121[11]), 0);
	}
	if (func_78(&(uLocal_1121[12]), 0, 1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_27.f_3, "pedCrowdMaleA", &(uLocal_1121[12]), 0);
	}
	if (func_78(&(uLocal_1121[13]), 0, 1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_27.f_3, "pedCrowdMaleB", &(uLocal_1121[13]), 0);
	}
	ANIMSCENE::LOAD_ANIM_SCENE(Local_19);
	ANIMSCENE::LOAD_ANIM_SCENE(Local_19.f_1);
	ANIMSCENE::LOAD_ANIM_SCENE(Local_19.f_2);
	ANIMSCENE::LOAD_ANIM_SCENE(Local_19.f_3);
	ANIMSCENE::LOAD_ANIM_SCENE(Local_27);
	ANIMSCENE::LOAD_ANIM_SCENE(Local_27.f_1);
	ANIMSCENE::LOAD_ANIM_SCENE(Local_27.f_2);
	ANIMSCENE::LOAD_ANIM_SCENE(Local_27.f_3);
}

int func_26(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (!uParam0->f_186)
	{
		func_79(uParam0, iParam2);
	}
	uParam0->f_1 = (uParam0->f_1 % 4);
	func_80(uParam0, uParam1);
	if (bParam4)
	{
		if (uParam0->f_48 && !uParam0->f_5 & 16384 != 0)
		{
			if (uParam0->f_5.f_1 & 256 != 0)
			{
				func_81(&(uParam0->f_5));
			}
			func_24(&(uParam0->f_5), 16384);
		}
	}
	if (!uParam0->f_48 && !func_82(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_83(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_84(&(uParam0->f_121));
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
					func_85(uParam0, uParam0->f_193, 2f);
				}
			}
			break;
		case 2:
			if (!func_86(uParam0->f_3, &(uParam0->f_47), uParam0, bParam3))
			{
				bVar0 = true;
			}
			break;
		case 3:
			break;
	}
	if (func_60(uParam0->f_3, 128))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(uParam1[0]) && !PED::IS_PED_INJURED(uParam1[0])) && uParam0->f_3 != 49)
		{
			if (!VOLUME::_0xF6A8A652A6B186CD(VOLUME::_0xF6F5447D418DAA82(uParam1[0])))
			{
				func_87(uParam0, uParam1[0]);
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

void func_27(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iParam0);
	}
}

int func_28()
{
	bool bVar0;
	bool bVar1;

	if (func_3(iLocal_238, -2147483648))
	{
		if (!bLocal_1370)
		{
			func_88(&(Local_35.f_5), &iLocal_874);
			EVENT::_0xB6F4825153920582();
			return 0;
		}
	}
	bVar0 = (!bLocal_1370 && func_89(&uLocal_1121, &(Local_35.f_5), &iLocal_874, &uLocal_1354, 0, 1, 2));
	bVar1 = (!bVar0 && func_89(&uLocal_1121, &(Local_35.f_5), &iLocal_874, &uLocal_1355, 2, 13, 1));
	if (bVar0 && iLocal_874 != 0)
	{
		if (func_90(iLocal_874, 1, 1, 0, 0))
		{
			bLocal_1376 = true;
		}
	}
	if (bVar0 || bVar1)
	{
		if (bLocal_1370)
		{
			switch (iLocal_874)
			{
				case 1:
				case 2:
				case 8:
				case 16:
				case 512:
				case 1024:
				case 2048:
				case 16384:
					bLocal_1370 = false;
					bLocal_1376 = true;
					return 1;
				default:
					break;
			}
		}
		else
		{
			if (iLocal_874 == 16384)
			{
				if (!func_91())
				{
					return 0;
				}
				bLocal_1376 = true;
			}
			if (func_90(iLocal_874, 1, 1, 1, 1))
			{
				bLocal_1376 = true;
				if (iLocal_15 < 14)
				{
					bLocal_1377 = true;
				}
			}
			return 1;
		}
	}
	if (bLocal_1370)
	{
		if (!func_78(&(uLocal_1121[0]), 0, 1))
		{
			if (!func_92(&uLocal_1373))
			{
				func_93(&uLocal_1373);
			}
			else if (func_94(&uLocal_1373, 3f))
			{
				bLocal_1370 = false;
			}
		}
		EVENT::_0xB6F4825153920582();
	}
	return 0;
}

void func_29()
{
	UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
}

void func_30(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_95((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_31(struct<6> Param0, var uParam6)
{
	if (VOLUME::_0x92A78D0BEDB332A3(Param0))
	{
		VOLUME::_0x43F867EF5C463A53(Param0);
	}
	Param0.f_1 = 0;
	Param0.f_2 = -1;
	Param0.f_3 = -1;
	Param0.f_4 = 0;
	if (MAP::DOES_BLIP_EXIST(Param0.f_5))
	{
		MAP::REMOVE_BLIP(&(Param0.f_5));
	}
}

void func_32()
{
	PLAYER::_0x93624B36E8851B42(PLAYER::GET_PLAYER_INDEX());
}

void func_33(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_96(((*uParam0)[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET(uParam0[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_97(&(((*uParam0)[iVar0 /*17*/])->f_6), 1, 1);
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

void func_34()
{
	int iVar0;

	iVar0 = 2;
	while (iVar0 <= 13)
	{
		if (func_78(&(uLocal_1121[iVar0]), 0, 1))
		{
			TASK::_TASK_SMART_FLEE_STYLE_PED(&(uLocal_1121[iVar0]), Global_35, 4, 0, 200f, -1, 0);
			PED::SET_PED_KEEP_TASK(&(uLocal_1121[iVar0]), true);
		}
		iVar0++;
	}
}

int func_35()
{
	bool bVar0;
	int iVar1;
	int iVar2;

	func_98(0);
	func_99();
	func_100();
	func_101();
	func_102();
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		iLocal_1155 = PED::GET_MOUNT(Global_35);
	}
	switch (iLocal_15)
	{
		case 0:
			if (func_103())
			{
				func_104();
				func_105(1);
				func_48(0);
				func_106();
				func_107(-1f);
				iLocal_1043 = GRAPHICS::_0xFA50F79257745E74(ENTITY::GET_ENTITY_COORDS(&(uLocal_1121[0]), true, false), 13f, 1, 316, 0);
				ANIMSCENE::START_ANIM_SCENE(Local_19);
				ANIMSCENE::SET_ANIM_SCENE_RATE(Local_19, 1.1f);
				ANIMSCENE::START_ANIM_SCENE(Local_19.f_1);
				ANIMSCENE::SET_ANIM_SCENE_RATE(Local_19.f_1, 1.1f);
				ANIMSCENE::START_ANIM_SCENE(Local_19.f_2);
				ANIMSCENE::START_ANIM_SCENE(Local_19.f_3);
				ANIMSCENE::START_ANIM_SCENE(Local_27);
				ANIMSCENE::START_ANIM_SCENE(Local_27.f_1);
				ANIMSCENE::START_ANIM_SCENE(Local_27.f_2);
				ANIMSCENE::START_ANIM_SCENE(Local_27.f_3);
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_19, "pblEnterEarly");
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_19.f_1, "pblEnterEarly");
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_19, "pblEnterNormal");
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_19.f_1, "pblEnterNormal");
				func_108("pblPreDuel");
				func_108("pblDuel");
				iLocal_15 = 1;
			}
			break;
		case 1:
			if (func_109(&Local_35, &vLocal_1040, 2f, 70f, 45f, 1500, 1065353216, 1065353216, 1, 0, 1, -1082130432, 1, 0, 0))
			{
				func_110(&Local_35);
				vLocal_1040.x = 0;
				vLocal_1040.f_1 = 0;
				vLocal_1040.f_2 = 10000f;
				func_107(1092616192);
				func_84(&(Local_35.f_121));
				iLocal_15 = 2;
			}
			break;
		case 2:
			if (func_111(8f))
			{
				bVar0 = true;
			}
			else if (func_112())
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				if (!func_3(iLocal_238, 262144) && !func_3(iLocal_238, 524288))
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_1121[0]), -1329557607))
					{
						if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_19, "pblEnterEarly") && ANIMSCENE::_0x23E33CB9F4A3F547(Local_19.f_1, "pblEnterEarly"))
						{
							func_24(&iLocal_238, 262144);
						}
					}
					else if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_1121[0]), -2037335242))
					{
						if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_19, "pblEnterNormal") && ANIMSCENE::_0x23E33CB9F4A3F547(Local_19.f_1, "pblEnterNormal"))
						{
							func_24(&iLocal_238, 524288);
						}
					}
				}
				if (func_3(iLocal_238, 262144))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_19, "pblEnterEarly", true);
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_19.f_1, "pblEnterEarly", true);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_19, "bDrawIdle", true, false);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_19.f_1, "bDrawIdle", true, false);
					func_113("bDrawIdle", 1);
					func_84(&(Local_35.f_121));
					iLocal_15 = 3;
				}
				else if (func_3(iLocal_238, 524288))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_19, "pblEnterNormal", true);
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_19.f_1, "pblEnterNormal", true);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_19, "bDrawIdle", true, false);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_19.f_1, "bDrawIdle", true, false);
					func_113("bDrawIdle", 1);
					func_84(&(Local_35.f_121));
					iLocal_15 = 3;
				}
			}
			break;
		case 3:
			if (!func_92(&uLocal_897))
			{
				func_93(&uLocal_897);
			}
			if ((bLocal_1359 || func_111(10f)) || func_114(&uLocal_897) > 8f)
			{
				func_115();
				iLocal_15 = 4;
			}
			break;
		case 4:
			func_116(0);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_19, "bDraw", true, false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_19.f_1, "bDraw", true, false);
			if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_1121[0]), 199968317))
			{
				EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(1498498500, &(uLocal_1121[0]), -1f, -1f, -1f, -1082130432, -1082130432, 1127481344, 0, 0, -1, -1);
				func_117(1066055203, &(uLocal_1121[0]), 1);
			}
			iLocal_15 = 5;
			break;
		case 5:
			func_118();
			PED::SET_PED_RESET_FLAG(&(uLocal_1121[0]), 5, true);
			if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_1121[1]), 1397652762))
			{
				if (func_111(40f))
				{
					Local_35.f_44 = 1;
				}
				func_24(&iLocal_238, 1048576);
				func_119(&(uLocal_1121[1]), 0, 0);
				func_120();
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_1121[1]), -698244996))
			{
				func_121(Local_19.f_1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_1121[0]), 199968317))
			{
				EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(1498498500, &(uLocal_1121[0]), -1f, -1f, -1f, -1082130432, -1082130432, 1127481344, 0, 0, -1, -1);
				func_117(1066055203, &(uLocal_1121[0]), 1);
			}
			if (func_122(&(uLocal_1121[1]), Local_19.f_1, "pedDuelB", 0, 0, 1, 0))
			{
				if (!func_3(iLocal_238, 1048576))
				{
					func_24(&iLocal_238, 268435456);
					return 0;
				}
			}
			if (func_122(&(uLocal_1121[0]), Local_19, "pedDuelA", 2116222025, 0, 1, 0))
			{
				if (!func_3(iLocal_238, 1048576))
				{
					func_24(&iLocal_238, 268435456);
				}
				else if (!bLocal_1359)
				{
					iLocal_15 = 6;
				}
				else
				{
					return 1;
				}
			}
			break;
		case 6:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_1121[0]), 199968317))
			{
				EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(1498498500, &(uLocal_1121[0]), -1f, -1f, -1f, -1082130432, -1082130432, 1127481344, 0, 0, -1, -1);
				func_117(1066055203, &(uLocal_1121[0]), 1);
			}
			Local_782 = Global_35;
			Local_782.f_1 = &uLocal_1121[0];
			func_108("pblPreDuel");
			iLocal_15 = 7;
			break;
		case 7:
			func_123();
			if (func_122(&(uLocal_1121[0]), Local_19, "pedDuelA", 0, 0, 1, 0))
			{
				iVar1 = 1;
			}
			if (iVar1 || func_124())
			{
				Local_35.f_49 = 1;
				if (iLocal_17 == 0)
				{
					func_93(&uLocal_882);
					iLocal_15 = 8;
				}
			}
			else if (func_125(&(uLocal_1121[0]), 1, 1) <= 15f && func_126())
			{
				func_127();
			}
			func_128();
			func_129();
			break;
		case 8:
			func_123();
			func_128();
			func_129();
			func_130();
			if (func_125(&(uLocal_1121[0]), 1, 1) <= 15f && func_126())
			{
				if (!AUDIO::IS_ANY_SPEECH_PLAYING(&(uLocal_1121[0])))
				{
					func_131(uLocal_1121[0], 0, 0, 1, 0, 0, 0, 1);
					if (!func_3(iLocal_238, 16777216))
					{
						func_132(&(uLocal_1121[0]));
					}
					if (func_133() == 0)
					{
						func_134(205, 0);
					}
					else
					{
						func_134(202, 0);
					}
					fLocal_1347 = 10f;
					func_93(&uLocal_882);
					func_105(1);
					func_135();
					iLocal_15 = 9;
				}
				else
				{
					func_127();
				}
			}
			else if (func_136(&uLocal_882) > 30f)
			{
				iLocal_15 = 11;
			}
			break;
		case 9:
			func_123();
			func_128();
			func_129();
			func_130();
			func_131(uLocal_1121[0], 0, 0, 1, 0, 0, 0, 1);
			if (func_122(&(uLocal_1121[0]), Local_19, "pedDuelA", 0, 0, 1, 0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(&(uLocal_1121[0]), 1435919172, 1) != 1)
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(&(uLocal_1121[0]), Global_35, -1, -1082130432, -1082130432, -1082130432);
				}
			}
			if (iLocal_1120 == 0 || iLocal_1120 == 1)
			{
				func_42(&iLocal_238, 2097152);
				func_105(0);
				iLocal_15 = 10;
			}
			if (func_136(&uLocal_882) > fLocal_1347)
			{
				func_93(&uLocal_882);
				func_137();
				func_24(&iLocal_238, 33554432);
				func_42(&iLocal_238, 2097152);
				func_105(1);
				iLocal_15 = 11;
			}
			else
			{
				func_138();
				func_139(Local_19.f_3, &iLocal_238, 4096, 4, 5);
			}
			break;
		case 10:
			func_123();
			func_131(uLocal_1121[0], 0, 0, 1, 0, 0, 0, 1);
			func_130();
			if (func_140(-3.5f, 1, &(uLocal_1121[0]), 1))
			{
				switch (iLocal_1120)
				{
					case 0:
						AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_1121[0]), 0);
						func_141(Global_35, &(uLocal_1121[0]), func_73("PLAYER_YES"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_142(&Local_35, Local_782.f_42, Local_782.f_86, 0, 1114636288);
						func_42(&iLocal_238, 2097152);
						func_143();
						func_93(&uLocal_882);
						func_105(1);
						iLocal_15 = 13;
						func_93(&uLocal_882);
						break;
					case 1:
						AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_1121[0]), 0);
						func_141(Global_35, &(uLocal_1121[0]), func_73("PLAYER_NO"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_93(&uLocal_882);
						func_137();
						func_24(&iLocal_238, 33554432);
						func_42(&iLocal_238, 2097152);
						func_105(1);
						if (iLocal_17 == 0)
						{
							iLocal_15 = 11;
						}
						break;
				}
			}
			break;
		case 11:
			func_131(uLocal_1121[0], 0, 0, 1, 0, 0, 0, 1);
			if (func_140(0f, 1, Global_35, 1) && func_140(0f, 1, &(uLocal_1121[0]), 1))
			{
				if (func_3(iLocal_238, 16777216))
				{
					if (func_3(iLocal_238, 8388608))
					{
						switch (func_2())
						{
							case 76:
								func_141(&(uLocal_1121[0]), Global_35, func_73("DUELER_LEAVE"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								break;
							case 92:
								func_141(&(uLocal_1121[0]), Global_35, "IGNORING_YOU", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								break;
						}
					}
					else
					{
						switch (func_2())
						{
							case 76:
								func_141(&(uLocal_1121[0]), Global_35, func_73("DUELER_LEAVE"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								break;
							case 92:
								func_141(&(uLocal_1121[0]), Global_35, "IGNORING_YOU", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								break;
						}
					}
				}
				else
				{
					switch (func_2())
					{
						case 76:
							func_141(&(uLocal_1121[0]), Global_35, func_73("DUELER_LEAVE"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							break;
						case 92:
							func_141(&(uLocal_1121[0]), Global_35, "IGNORING_YOU", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							break;
					}
				}
				func_42(&iLocal_238, 2097152);
				TASK::OPEN_SEQUENCE_TASK(&iVar2);
				if (func_3(iLocal_238, 16777216))
				{
					TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, &(Local_229[3 /*2*/]), (Local_229[3 /*2*/])->f_1, Global_35, 7300, 4f, -4f, 0, 0, 0, 0, -1082130432, 0, 0, -1082130432);
				}
				TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar2);
				TASK::TASK_PERFORM_SEQUENCE(&(uLocal_1121[0]), iVar2);
				TASK::CLEAR_SEQUENCE_TASK(&iVar2);
				PED::SET_PED_KEEP_TASK(&(uLocal_1121[0]), true);
				iLocal_15 = 12;
			}
			break;
		case 12:
			if (func_3(iLocal_238, 536870912))
			{
				func_144();
			}
			else if (func_140(-3.5f, 1, 0, 0))
			{
				func_137();
				func_24(&iLocal_238, 536870912);
			}
			if (func_145())
			{
				iLocal_15 = 17;
			}
			else
			{
				func_128();
				func_146();
				func_129();
			}
			break;
		case 13:
			func_146();
			func_108("pblDuel");
			func_130();
			if (iLocal_1120 == 1 || func_125(&(uLocal_1121[0]), 1, 1) > 20f)
			{
				AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_1121[0]), 0);
				func_141(Global_35, &(uLocal_1121[0]), func_73("PLR_QUIT"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_93(&uLocal_882);
				func_31(Local_875);
				func_24(&iLocal_238, 33554432);
				func_137();
				func_105(1);
				iLocal_15 = 11;
				return 0;
			}
			func_131(uLocal_1121[0], 0, 0, 1, 0, 0, 0, 1);
			func_147();
			if (func_140(-3.5f, 1, 0, 0) && iLocal_1044 != 1)
			{
				iLocal_1044 = 1;
				func_120();
			}
			if (func_78(&(uLocal_1121[0]), 0, 1))
			{
				func_148();
				if (func_3(iLocal_238, 64) && func_149(Local_875))
				{
					_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
					func_150(203);
					func_151(203);
					func_150(205);
					func_151(205);
					func_152(1);
					func_153();
					Local_35.f_49 = 0;
					func_31(Local_875);
					func_29();
					func_105(1);
					iLocal_1367 = 1;
					func_24(&iLocal_238, -2147483648);
					iLocal_15 = 14;
				}
				else
				{
					if (func_122(&(uLocal_1121[0]), Local_19, "pedDuelA", 0, 0, 1, 0))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(&(uLocal_1121[0]), 1435919172, 1) != 1)
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(&(uLocal_1121[0]), Global_35, -1, -1082130432, -1082130432, -1082130432);
						}
					}
					if (func_3(iLocal_238, 1))
					{
						if (func_154(Global_35, Local_782.f_42, 1) <= 6f && CAM::IS_SPHERE_VISIBLE(Local_782.f_42, 2f))
						{
							func_155(0, 1065353216);
						}
					}
					if (!func_3(iLocal_238, 64))
					{
						if (func_140(-2f, 1, 0, 0))
						{
							func_141(&(uLocal_1121[0]), Global_35, &Local_1342, 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
							func_24(&iLocal_238, 64);
						}
					}
					else if (!func_3(iLocal_238, 1))
					{
						func_156();
						Local_875 = { func_157(2, Global_35, Local_782.f_42, 0f, 0f, 0f, 3f, 3f, 3f, 1, 1, 1) };
						func_158("DUEL_OBJ", 7500, 0, 0, -1, -1, 0);
						MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_875.f_5, "DUEL_OBJ_BLIP");
						func_24(&iLocal_238, 1);
					}
				}
			}
			else if (func_159(Local_875))
			{
				func_31(Local_875);
			}
			break;
		case 14:
			func_146();
			func_108("pblDuel");
			func_113("bDrawIdle", 1);
			EVENT::_0xB6F4825153920582();
			if (func_160(&Local_782, &uLocal_688))
			{
				iLocal_1378 = func_161(&uLocal_688);
				switch (iLocal_1378)
				{
					case 5:
						bLocal_1370 = false;
						break;
					case 2:
					case 4:
						func_93(&uLocal_891);
						if (iLocal_1378 == 4)
						{
							bLocal_1370 = true;
							func_162(&(uLocal_1121[0]), uLocal_1136[0], 831283580, 580546400, 0, 0);
						}
						else
						{
							bLocal_1370 = false;
							PED::SET_PED_CONFIG_FLAG(&(uLocal_1121[0]), 6, false);
							func_24(&iLocal_238, 16);
						}
						break;
				}
				DECORATOR::DECOR_SET_BOOL(&(uLocal_1121[0]), "bIgnoreDamageChecking", true);
				DECORATOR::DECOR_SET_BOOL(&(uLocal_1121[1]), "bIgnoreDamageChecking", true);
				if (func_3(iLocal_238, 16))
				{
					func_163(11, 0, 0, 0, Local_35.f_5.f_10, 0, 1065353216, 0);
				}
				else
				{
					if (func_164())
					{
						if (func_165(0))
						{
							func_163(1, 0, 0, 0, Local_35.f_5.f_10, 0, 1065353216, 0);
						}
					}
					if (func_166())
					{
						func_163(1, 0, 0, 0, Local_35.f_5.f_10, 0, 1065353216, 0);
					}
				}
				if (PED::IS_PED_DEAD_OR_DYING(&(uLocal_1121[0]), true))
				{
					func_167(Local_1046[0 /*21*/], &Local_1068);
				}
				iLocal_1044 = 2;
				func_120();
				func_93(&uLocal_891);
				func_27(&(uLocal_1121[0]));
				iLocal_15 = 15;
			}
			break;
		case 15:
			if (!bLocal_1370)
			{
				func_118();
				func_168();
				if (func_94(&uLocal_891, 1f))
				{
					if (func_3(iLocal_238, 16))
					{
						switch (func_2())
						{
							case 76:
								func_141(&(uLocal_1121[0]), Global_35, "GENERIC_ANGRY_REACTION", 0, -1082130432, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
								break;
							case 92:
								func_141(&(uLocal_1121[0]), Global_35, "SERIOUSLY_WOUNDED_MOAN", 0, -1082130432, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
								break;
						}
						func_117(249295937, &(uLocal_1121[0]), 1);
						func_105(1);
						func_137();
					}
					func_93(&uLocal_891);
					func_42(&iLocal_238, -2147483648);
					iLocal_15 = 16;
				}
			}
			break;
		case 16:
			func_168();
			func_121(Local_19);
			func_121(Local_19.f_1);
			if (!Local_35.f_46)
			{
				if (func_3(iLocal_238, 16))
				{
					func_144();
				}
			}
			if (bLocal_1376)
			{
				func_169();
				if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_1121[0])))
				{
					if (bLocal_1377)
					{
						TASK::TASK_COMBAT_PED(&(uLocal_1121[0]), Global_35, 0, 0);
						func_162(&(uLocal_1121[0]), uLocal_1136[0], 831283580, 580546400, 0, 0);
					}
					else if (!PED::IS_PED_IN_COMBAT(&(uLocal_1121[0]), 0))
					{
						TASK::_TASK_SMART_FLEE_STYLE_PED(&(uLocal_1121[0]), Global_35, 2, 0, -1082130432, -1, 0);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_1121[1])))
				{
					if (bLocal_1377)
					{
						TASK::TASK_COMBAT_PED(&(uLocal_1121[1]), Global_35, 0, 0);
						func_162(&(uLocal_1121[1]), uLocal_1136[1], 831283580, 580546400, 0, 0);
					}
					else if (!PED::IS_PED_IN_COMBAT(&(uLocal_1121[1]), 0))
					{
						TASK::_TASK_SMART_FLEE_STYLE_PED(&(uLocal_1121[1]), Global_35, 2, 0, -1082130432, -1, 0);
					}
				}
				Local_35.f_50 = 1;
				return 1;
			}
			else if (iLocal_17 == 0)
			{
				if (func_78(&(uLocal_1121[0]), 0, 1))
				{
					if (!func_3(iLocal_238, 16))
					{
						if (func_3(iLocal_238, 256))
						{
							TASK::TASK_COMBAT_PED(&(uLocal_1121[0]), Global_35, 0, 0);
							func_162(&(uLocal_1121[0]), uLocal_1136[0], 831283580, 580546400, 0, 0);
							if (iLocal_873 == 76)
							{
								func_141(&(uLocal_1121[0]), Global_35, "MELEE_BRING_IT_ON", 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
							}
							else
							{
								func_141(&(uLocal_1121[0]), Global_35, "OPENS_FIRE", 0, -1082130432, 2, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
							}
						}
						else
						{
							TASK::_TASK_SMART_FLEE_STYLE_PED(&(uLocal_1121[0]), Global_35, 4, 0, -1082130432, -1, 0);
						}
						PED::SET_PED_KEEP_TASK(&(uLocal_1121[0]), true);
						func_169();
					}
				}
				if (func_78(&(uLocal_1121[1]), 0, 1))
				{
					if (func_3(iLocal_238, 256))
					{
						TASK::TASK_COMBAT_PED(&(uLocal_1121[1]), Global_35, 0, 0);
						func_162(&(uLocal_1121[1]), uLocal_1136[1], 831283580, 580546400, 0, 0);
					}
					else
					{
						TASK::_TASK_SMART_FLEE_STYLE_PED(&(uLocal_1121[1]), Global_35, 4, 0, -1082130432, -1, 0);
					}
					PED::SET_PED_KEEP_TASK(&(uLocal_1121[1]), true);
				}
				iLocal_15 = 17;
			}
			break;
		case 17:
			if (!Local_35.f_46)
			{
				if (func_3(iLocal_238, 16))
				{
					func_144();
				}
			}
			if (!func_3(iLocal_238, 128))
			{
				PED::SET_PED_CONFIG_FLAG(&(uLocal_1121[1]), 243, false);
				func_24(&iLocal_238, 128);
			}
			if ((func_3(iLocal_238, 16) && !func_3(iLocal_238, 512)) && (func_94(&uLocal_891, 6f) || func_3(iLocal_238, 134217728)))
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED(&(uLocal_1121[0]), Global_35, 1, 0, 500f, -1, 0);
				PED::SET_PED_KEEP_TASK(&(uLocal_1121[0]), true);
				Local_35.f_50 = 1;
				func_24(&iLocal_238, 512);
			}
			if (func_168())
			{
				if (func_170())
				{
					return 1;
				}
				else
				{
					func_128();
					func_129();
				}
				if (!func_3(iLocal_238, 4))
				{
					if (func_171())
					{
						func_32();
						func_24(&iLocal_238, 4);
						func_169();
					}
				}
			}
			break;
	}
	return 0;
}

int func_36(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, int iParam10, int iParam11, int iParam12)
{
	float fVar0;
	vector3 vVar1;

	fVar0 = 0f;
	if (uParam0->f_1 >= 4)
	{
		if (bParam6)
		{
			if (func_172())
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
			else if (func_173(uParam0->f_3))
			{
				fVar0 = 250f;
			}
			else if (func_60(uParam0->f_3, 131072))
			{
				fVar0 = 70f;
				fVar0 = (fVar0 + 10f);
			}
			else if (func_60(uParam0->f_3, 1) && iParam12 == 0)
			{
				fVar0 = 215f;
				fVar0 = (fVar0 + 20f);
				if (uParam0->f_48)
				{
					fVar0 = (fVar0 - 80f);
				}
			}
			else if (func_60(uParam0->f_3, 2) || iParam12 == 1)
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
				if (func_174(Global_36, uParam0->f_51) > fVar0)
				{
					return 1;
				}
			}
			else
			{
				vVar1 = { fParam9, iParam10, iParam11 };
				if (func_174(Global_36, vVar1) > fVar0)
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

var func_37(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	char* sVar0;

	if (bParam2)
	{
		_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_175(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_176(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(sVar0);
	}
	return func_175(sVar0, iParam1, 0, 0, 1, 1);
}

void func_38(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_42(&(uParam0->f_1), 256);
	}
	else
	{
		func_24(&(uParam0->f_1), 256);
	}
}

void func_39(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_24(uParam0, 16);
	}
	else
	{
		func_42(uParam0, 67108864);
		func_42(uParam0, 16);
	}
}

void func_40(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_42(&(uParam0->f_1), 128);
	}
	else
	{
		func_24(&(uParam0->f_1), 128);
	}
}

void func_41(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_24(uParam0, 268435456);
	}
	else
	{
		func_42(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_24(uParam0, 1073741824);
	}
	else
	{
		func_42(uParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_24(uParam0, 536870912);
	}
	else
	{
		func_42(uParam0, 536870912);
	}
}

void func_42(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

int func_43(int iParam0)
{
	return (Global_17503.f_42[iParam0 /*8*/])->f_1;
}

int func_44(int iParam0)
{
	return &(Global_17503.f_42[iParam0 /*8*/]);
}

void func_45(int iParam0, int iParam1)
{
	if (func_177(iParam0))
	{
		GRAPHICS::_0x9CF1836C03FB67A2(iParam0, iParam1);
	}
}

void func_46(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	int iVar9;

	if (MISC::ARE_STRINGS_EQUAL(MISC::_0xF81C53561D15F330(), func_178(uParam0->f_3)))
	{
		MISC::_0x1096603B519C905F("");
	}
	if (uParam0->f_48)
	{
		AUDIO::STOP_AUDIO_SCENE("RE_active_location_scene");
		if (!uParam0->f_45 && !uParam0->f_44)
		{
			func_179(uParam0->f_3, 524288);
		}
	}
	if (func_78(PLAYER::PLAYER_PED_ID(), 0, 1))
	{
		iVar1 = PED::GET_MOUNT(Global_35);
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
		iVar2 = uParam0->f_98;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			bVar3 = (iParam8 && DECORATOR::DECOR_EXIST_ON(uParam1[iVar0], "pedRoam_bInPedRoam"));
			if (func_78(uParam1[iVar0], 0, 0))
			{
				func_180(uParam1[iVar0], bVar3);
				if (func_181(uParam0, (*uParam1)[iVar0]))
				{
					func_182((*uParam1)[iVar0]);
				}
			}
			if (!uParam0->f_50)
			{
				if (func_78(uParam1[iVar0], 0, 1))
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
							func_184(uParam1[iVar0], 1073741824, func_183(iVar0 < iVar2, &(uParam0->f_98[iVar0]), -1f), iVar1, 0);
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
		func_185(uParam0);
	}
	func_186(uParam0);
	if (!uParam0->f_186)
	{
		func_79(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = func_187(uParam0->f_3, uParam0->f_185);
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
		func_188(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

void func_47(var uParam0, var uParam1)
{
	if (!func_3(uParam0->f_88, 1024))
	{
		func_189(uParam0, uParam1);
	}
	func_190();
	MISC::SET_TIME_SCALE(1f);
	func_192(func_191(uParam1, uParam0), 1);
	func_29();
	func_193();
	func_194();
	func_195(&(uParam1->f_26));
	func_195(&(uParam1->f_29));
	func_195(&(uParam1->f_32));
	func_195(&(uParam1->f_35));
	func_195(&(uParam1->f_38));
	func_195(&(uParam1->f_41));
	if (func_196(uParam0->f_1, 0))
	{
		if (func_197(uParam0, 65536))
		{
			PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 16, false);
			PED::SET_PED_CAN_RAGDOLL(uParam0->f_1, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 263, false);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(uParam0->f_1, 0);
		}
		if (func_197(uParam0, 1024))
		{
			PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(uParam0->f_1, 1);
		}
		if (func_197(uParam0, 128) || func_197(uParam0, 4096))
		{
			PED::SET_PED_USING_ACTION_MODE(uParam0->f_1, false, -1, 0);
		}
		PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 371, false);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 392, false);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(uParam0->f_1, false, 0f);
	}
	PLAYER::_0x3C4AE8506638C7E2(PLAYER::GET_PLAYER_INDEX(), 1);
	if (!func_197(uParam0, 2048))
	{
		LAW::_0xDE5FAA741A781F73(PLAYER::GET_PLAYER_INDEX(), 0);
	}
	if (func_75(uParam1, 2048))
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 146, false);
	}
	PAD::ENABLE_CONTROL_ACTION(0, -1404316431, true);
	PAD::ENABLE_CONTROL_ACTION(0, 255439828, true);
	if (func_75(uParam1, 2) && !func_197(uParam0, 32768))
	{
		func_23(1, uParam0, uParam1, -1038090240, 1103626240);
		func_198(uParam1, 2);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_86))
	{
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_86);
		POPULATION::_0xA1CFB35069D23C23(uParam0->f_86);
	}
	if (MISC::_0xBDC6E364C9C78178(*uParam1))
	{
		ITEMSET::DESTROY_ITEMSET(*uParam1);
	}
	func_199(uParam0, uParam1, 1);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0) && (func_75(uParam1, 8) && (!func_75(uParam1, 1) || TASK::_0xC8B29D18022EA2B7(*uParam0))))
	{
		TASK::_0xEED08A3A98B847E2(*uParam0, (!func_197(uParam0, 256) || ENTITY::IS_ENTITY_DEAD(uParam0->f_1)), 1040187392);
		if (func_75(uParam1, 4096))
		{
			TASK::CLEAR_PED_TASKS(*uParam0, 1, 0);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1) && TASK::_0xC8B29D18022EA2B7(uParam0->f_1))
	{
		TASK::_0xEED08A3A98B847E2(uParam0->f_1, false, 1040187392);
		if (func_75(uParam1, 4096))
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_1, 1, 0);
		}
	}
	MAP::DISPLAY_RADAR(true);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		if (PED::IS_PED_A_PLAYER(*uParam0))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
		}
		PED::SET_PED_USING_ACTION_MODE(*uParam0, false, -1, 0);
	}
	GRAPHICS::ANIMPOSTFX_STOP("Duel");
	PLAYER::_0x914071FF93AF2692(PLAYER::PLAYER_ID(), 1f);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_16)))
	{
		if (!AUDIO::CANCEL_MUSIC_EVENT(&(uParam0->f_16)))
		{
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_20)))
	{
		if (!AUDIO::CANCEL_MUSIC_EVENT(&(uParam0->f_20)))
		{
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_28)))
	{
		if (!AUDIO::CANCEL_MUSIC_EVENT(&(uParam0->f_28)))
		{
		}
	}
	HUD::_0xAA03F130A637D923("MGDUL");
	if (func_75(uParam1, 16777216))
	{
		func_200();
	}
	PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 0, 0, -1, 0);
	MISC::_0x4D5C9CC7E7E23E09();
	func_201(uParam1, 9);
}

void func_48(bool bParam0)
{
	if (func_2() == 76)
	{
		if (!bParam0)
		{
			if (!VOLUME::_0x92A78D0BEDB332A3(iLocal_1153))
			{
				iLocal_1153 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-360.4944f, 750.4674f, 116.4046f, 0f, 0f, 0f, 1.245337f, 1.274085f, 2.205222f, "REDW - volScenarioBlocking");
				iLocal_1154 = PED::_0x4C39C95AE5DB1329(iLocal_1153, 0, 15);
				POPULATION::_0xB56D41A694E42E86(iLocal_1153, 534496, 0, 0, -1, -1, 2);
				POPULATION::_0x18262CAFEBB5FBE1(iLocal_1153, 534496, 0, 0, -1, -1, 0);
			}
		}
		else if (VOLUME::_0x92A78D0BEDB332A3(iLocal_1153))
		{
			POPULATION::_0x74C2B3DC0B294102(iLocal_1153);
			POPULATION::_0xA1CFB35069D23C23(iLocal_1153);
			PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_1154, false);
			VOLUME::_0x43F867EF5C463A53(iLocal_1153);
		}
	}
}

void func_49()
{
	if (iLocal_1350 != -1)
	{
		EVENT::REMOVE_SHOCKING_EVENT(iLocal_1350);
	}
}

void func_50()
{
	if (iLocal_1351 != -1)
	{
		EVENT::REMOVE_SHOCKING_EVENT(iLocal_1351);
	}
}

int func_51(bool bParam0)
{
	int iVar0;

	iVar0 = PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP();
	if (bParam0)
	{
		return 1;
	}
	if (func_202(iVar0))
	{
		return 0;
	}
	if (func_203(iVar0, 1) || func_203(iVar0, 2))
	{
		return 1;
	}
	return 0;
}

int func_52(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_204(uParam0->f_3);
	iVar1 = func_205(1);
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

void func_53()
{
	switch (iLocal_873)
	{
		case 76:
			(Local_239[0 /*32*/])->f_1 = 233635031;
			(Local_239[0 /*32*/])->f_3 = -728053340;
			Local_239[0 /*32*/] = 22;
			StringCopy(&((Local_239[0 /*32*/])->f_23), "0746_G_M_M_BountyHunters_01_WHITE_08", 64);
			(Local_239[1 /*32*/])->f_1 = 233635031;
			(Local_239[1 /*32*/])->f_3 = -2129848553;
			StringCopy(&((Local_239[1 /*32*/])->f_23), "0192_A_M_M_HtlRoughTravellers_01_WHITE_01", 64);
			Local_239[1 /*32*/] = 22;
			(Local_239[2 /*32*/])->f_1 = -915783151;
			(Local_239[2 /*32*/])->f_3 = 1855801915;
			Local_239[2 /*32*/] = 5;
			StringCopy(&((Local_239[2 /*32*/])->f_23), "0461_A_F_M_ValTownfolk_01_WHITE_01", 64);
			(Local_239[3 /*32*/])->f_1 = 233635031;
			(Local_239[3 /*32*/])->f_3 = 1855801915;
			Local_239[3 /*32*/] = 4;
			(Local_239[4 /*32*/])->f_1 = 233635031;
			(Local_239[4 /*32*/])->f_3 = -1662212387;
			Local_239[4 /*32*/] = 4;
			StringCopy(&((Local_239[4 /*32*/])->f_23), "0465_A_M_M_ValTownfolk_01_WHITE_01", 64);
			(Local_239[5 /*32*/])->f_1 = 233635031;
			(Local_239[5 /*32*/])->f_3 = -1960443056;
			Local_239[5 /*32*/] = 4;
			(Local_239[6 /*32*/])->f_1 = 233635031;
			(Local_239[6 /*32*/])->f_3 = 2001591252;
			Local_239[6 /*32*/] = 22;
			(Local_239[7 /*32*/])->f_1 = 233635031;
			(Local_239[7 /*32*/])->f_3 = -1995407527;
			Local_239[7 /*32*/] = 4;
			StringCopy(&((Local_239[7 /*32*/])->f_23), "0467_S_M_M_ValCowpoke_01_WHITE_01", 64);
			(Local_239[8 /*32*/])->f_1 = 233635031;
			(Local_239[8 /*32*/])->f_3 = -1837002177;
			Local_239[8 /*32*/] = 4;
			(Local_239[9 /*32*/])->f_1 = -915783151;
			(Local_239[9 /*32*/])->f_3 = -1662212387;
			Local_239[9 /*32*/] = 5;
			StringCopy(&((Local_239[9 /*32*/])->f_23), "0462_A_F_M_ValProstitute_01_WHITE_01", 64);
			(Local_239[10 /*32*/])->f_1 = 233635031;
			(Local_239[10 /*32*/])->f_3 = -1506035277;
			Local_239[10 /*32*/] = 4;
			(Local_239[11 /*32*/])->f_1 = -915783151;
			(Local_239[11 /*32*/])->f_3 = -1960443056;
			Local_239[11 /*32*/] = 5;
			(Local_239[12 /*32*/])->f_1 = 233635031;
			(Local_239[12 /*32*/])->f_3 = 777538026;
			Local_239[12 /*32*/] = 4;
			(Local_239[13 /*32*/])->f_1 = 233635031;
			(Local_239[13 /*32*/])->f_3 = 1074720087;
			Local_239[13 /*32*/] = 4;
			break;
		case 92:
			(Local_239[0 /*32*/])->f_1 = 233635031;
			(Local_239[0 /*32*/])->f_3 = 885345434;
			Local_239[0 /*32*/] = 22;
			StringCopy(&((Local_239[0 /*32*/])->f_23), "0499_S_M_M_VhtDockWorker_01_WHITE_01", 64);
			(Local_239[1 /*32*/])->f_1 = 233635031;
			(Local_239[1 /*32*/])->f_3 = -34547514;
			StringCopy(&((Local_239[1 /*32*/])->f_23), "0497_S_M_M_VhtLaborer_01_WHITE_01", 64);
			Local_239[1 /*32*/] = 22;
			(Local_239[2 /*32*/])->f_1 = -915783151;
			(Local_239[2 /*32*/])->f_3 = 1645670014;
			Local_239[2 /*32*/] = 5;
			(Local_239[3 /*32*/])->f_1 = 233635031;
			(Local_239[3 /*32*/])->f_3 = 1645670014;
			Local_239[3 /*32*/] = 4;
			StringCopy(&((Local_239[3 /*32*/])->f_23), "0494_A_M_M_VhtTownfolk_01_WHITE_01", 64);
			(Local_239[4 /*32*/])->f_1 = 233635031;
			(Local_239[4 /*32*/])->f_3 = 1344359059;
			Local_239[4 /*32*/] = 4;
			(Local_239[5 /*32*/])->f_1 = 233635031;
			(Local_239[5 /*32*/])->f_3 = 1783037674;
			Local_239[5 /*32*/] = 4;
			(Local_239[6 /*32*/])->f_1 = 233635031;
			(Local_239[6 /*32*/])->f_3 = 1469405575;
			Local_239[6 /*32*/] = 22;
			StringCopy(&((Local_239[6 /*32*/])->f_23), "0495_A_M_M_VhtTownfolk_01_BLACK_01", 64);
			(Local_239[7 /*32*/])->f_1 = 233635031;
			(Local_239[7 /*32*/])->f_3 = -313228025;
			Local_239[7 /*32*/] = 4;
			(Local_239[8 /*32*/])->f_1 = 233635031;
			(Local_239[8 /*32*/])->f_3 = 455237794;
			Local_239[8 /*32*/] = 4;
			(Local_239[9 /*32*/])->f_1 = -915783151;
			(Local_239[9 /*32*/])->f_3 = 1344359059;
			Local_239[9 /*32*/] = 5;
			(Local_239[10 /*32*/])->f_1 = 233635031;
			(Local_239[10 /*32*/])->f_3 = 288967888;
			Local_239[10 /*32*/] = 4;
			StringCopy(&((Local_239[10 /*32*/])->f_23), "0902_A_M_M_Civ_Poor_White_AGGRESSIVE_02", 64);
			(Local_239[11 /*32*/])->f_1 = -915783151;
			(Local_239[11 /*32*/])->f_3 = 1783037674;
			Local_239[11 /*32*/] = 5;
			StringCopy(&((Local_239[11 /*32*/])->f_23), "0491_A_F_M_VhtTownfolk_02_BLACK_01", 64);
			(Local_239[12 /*32*/])->f_1 = 233635031;
			(Local_239[12 /*32*/])->f_3 = -1088345963;
			Local_239[12 /*32*/] = 4;
			(Local_239[13 /*32*/])->f_1 = 233635031;
			(Local_239[13 /*32*/])->f_3 = -1335653606;
			Local_239[13 /*32*/] = 4;
			break;
	}
}

void func_54()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 14)
	{
		if ((Local_239[iVar0 /*32*/])->f_1 != 0)
		{
			STREAMING::REQUEST_MODEL((Local_239[iVar0 /*32*/])->f_1, false);
		}
		iVar0++;
	}
}

void func_55()
{
	Local_229[0 /*2*/] = "mech_loco@generic@brave@base@a";
	(Local_229[0 /*2*/])->f_1 = "idle";
	Local_229[1 /*2*/] = "script_re@duel_winner@taunt";
	(Local_229[1 /*2*/])->f_1 = "chicken_shit_ped01";
	Local_229[2 /*2*/] = "script_re@duel_winner@taunt";
	(Local_229[2 /*2*/])->f_1 = "you_scared_ped01";
	Local_229[3 /*2*/] = "script_re@duel_winner@taunt";
	(Local_229[3 /*2*/])->f_1 = "laughing_ped01";
	func_206(&(Local_229[0 /*2*/]), &uLocal_1156);
	func_206(&(Local_229[1 /*2*/]), &uLocal_1156);
}

int func_56(var uParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = true;
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY((*uParam0)[iVar1 /*8*/]))
		{
			if (!STREAMING::HAS_ANIM_DICT_LOADED((*uParam0)[iVar1 /*8*/]))
			{
				bVar0 = false;
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
		return 0;
	}
	return 1;
}

bool func_57(int iParam0)
{
	int iVar0;
	bool bVar1;

	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (!func_207((*iParam0)[iVar0 /*32*/]))
		{
			bVar1 = true;
		}
		iVar0++;
	}
	return !bVar1;
}

int func_58(int iParam0, var uParam1, bool bParam2, var uParam3, struct<7> Param4, var uParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;
	float fVar1;
	float fVar2;
	bool bVar3;
	bool bVar4;

	if (Param4.f_6 > -1)
	{
		*uParam1 = { func_208(iParam0, Param4.f_6) };
		uParam1->f_4 = Param4.f_6;
		uParam1->f_5 = uParam1->f_4;
		func_209(iParam0, uParam1, bParam2, bParam12, 0);
		*uParam3 = 0;
		return 1;
	}
	switch (uParam1->f_9)
	{
		case 0:
			if (func_82(iParam0, 128))
			{
				if (!func_210(iParam0, &(uParam1->f_10)))
				{
					*uParam11 = 1;
					return 0;
				}
			}
			else
			{
				func_211(iParam0, &fVar1, &fVar2, &iVar0, 0);
				bVar4 = false;
				*uParam1 = { func_212(&bVar4, iParam0, fVar2, fVar1) };
				if (bVar4)
				{
					*uParam11 = 1;
					return 0;
				}
				if (func_213(*uParam1))
				{
					return func_214(uParam1, uParam3, uParam11, bParam2, 12, 1000);
				}
				uParam1->f_4 = func_215(iParam0, *uParam1);
				uParam1->f_5 = uParam1->f_4;
				if (func_3(Param4.f_2, 8))
				{
					func_209(iParam0, uParam1, 0, bParam12, 0);
					*uParam3 = 0;
					return 1;
				}
				func_216(uParam1);
			}
			*uParam3 = 0;
			uParam1->f_9 = 2;
			break;
		case 1:
			if (func_217(uParam1, uParam3, uParam11, bParam2, bParam13))
			{
				if (!bParam13 && func_218(BUILTIN::VDIST(Global_36, *uParam1), iParam0))
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
			if (func_82(iParam0, 128))
			{
				if (!func_219(uParam1, &bVar3))
				{
					if (bVar3)
					{
						return func_214(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					return 0;
				}
			}
			else
			{
				func_211(iParam0, &fVar1, &fVar2, &iVar0, 0);
				if (BUILTIN::VDIST2(*uParam1, Global_36) < BUILTIN::TO_FLOAT(iVar0))
				{
					if (!func_216(uParam1))
					{
						return func_214(uParam1, uParam3, uParam11, bParam2, 12, 1000);
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
			if (func_220(iParam0, Param4.f_1, uParam1, Param4, bParam14))
			{
				func_209(iParam0, uParam1, bParam2, bParam12, 0);
				*uParam3 = 0;
				return 1;
			}
			else
			{
				*uParam3 = 0;
				uParam1->f_9 = 5;
				return func_214(uParam1, uParam3, uParam11, bParam2, 12, 1000);
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
		func_37("BEAT_SCAN", 2000, 0, 1, 0, 0, -1, -1, 0);
	}
	if (uParam1->f_8 >= 12)
	{
		if (bParam2)
		{
			_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
			func_37("BEAT_FAIL", 4000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam11 = 1;
	}
	return 0;
}

int func_59(var uParam0, int iParam1)
{
	if (func_60(iParam1, 256))
	{
		if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_172) || func_222(iParam1, func_221(uParam0), &(uParam0->f_172)))
		{
			if (func_78(Global_35, 0, 1))
			{
				return ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_172, true, 0);
			}
		}
	}
	return 1;
}

bool func_60(int iParam0, int iParam1)
{
	if (!func_223(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/] && iParam1) != 0;
}

void func_61(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (uParam0->f_176)
	{
		return;
	}
	if (iParam1 != -1)
	{
		func_224(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, IntToFloat(iParam1), IntToFloat(iParam1), 5f, "Custom Sized Ambient Avoidance");
	}
	else if (func_60(uParam0->f_3, 1) && !func_60(uParam0->f_3, 32))
	{
		func_224(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 25f, 25f, 6f, "Ambient Avoidance Wilderness & No Traffic");
	}
	else if (func_60(uParam0->f_3, 2) && !func_60(uParam0->f_3, 32))
	{
		func_224(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 4f, 4f, 5f, "Ambient Avoidance Town & No Traffic");
	}
	else
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(uParam0->f_171, 2228255, 262144, 0, -1, -1, uParam0->f_175);
	POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_171, 0, 0, 0, -1, -1, 0);
	if (bParam3)
	{
		func_225(uParam0->f_171, 1);
	}
	if (func_60(uParam0->f_3, 1))
	{
		func_224(&(uParam0->f_174), uParam0->f_51, 0f, 0f, 0f, VOLUME::_0x3E2A25B2416DD67E(uParam0->f_171) * Vector(3.5f, 3.5f, 3.5f), "Predator Stay Out");
		func_226(uParam0->f_174, 0, 262144, 0, 0);
	}
	if (iParam2 == 0)
	{
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		PED::_0x7C00CFC48A782DC0(uParam0->f_171, iParam2, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	}
}

float func_62(vector3 vParam0)
{
	vector3 vVar0;

	vVar0 = { Global_36 - vParam0 };
	return MISC::GET_HEADING_FROM_VECTOR_2D(vVar0.x, vVar0.y);
}

void func_63(var uParam0)
{
	func_227(uParam0, 2);
}

int func_64(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	var uVar1;
	var uVar2;
	vector3 vVar3;
	vector3 vVar6;

	if (!func_228(iParam2))
	{
		return 0;
	}
	if (iParam6 < 0 || iParam6 >= *iParam2)
	{
		iParam6 = 0;
	}
	if (iParam7 < 0 || iParam7 >= *iParam2)
	{
		iParam7 = (*iParam2 - 1);
	}
	iVar0 = iParam6;
	while (iVar0 <= iParam7)
	{
		if (((*iParam2)[iVar0 /*32*/])->f_1 != 0)
		{
			if (iParam3 && !func_229(&(((*iParam2)[iVar0 /*32*/])->f_22)))
			{
				vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_51, uParam0->f_51.f_3, ((*iParam2)[iVar0 /*32*/])->f_6) };
				uVar1 = func_230((uParam0->f_51.f_3 + ((*iParam2)[iVar0 /*32*/])->f_9));
			}
			else
			{
				vVar3 = { ((*iParam2)[iVar0 /*32*/])->f_6 };
				uVar1 = func_230(((*iParam2)[iVar0 /*32*/])->f_9);
			}
			if (!func_231(&(((*iParam2)[iVar0 /*32*/])->f_22)))
			{
				func_232(&vVar3, 1, 10, 0);
			}
			if (((*iParam2)[iVar0 /*32*/])->f_12 != 0)
			{
				if (!((*iParam2)[iVar0 /*32*/])->f_19 && !func_229(&(((*iParam2)[iVar0 /*32*/])->f_22)))
				{
					vVar6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_51, uParam0->f_51.f_3, ((*iParam2)[iVar0 /*32*/])->f_15) };
					uVar2 = func_230((uParam0->f_51.f_3 + ((*iParam2)[iVar0 /*32*/])->f_18));
					func_232(&vVar6, 1, 10, 0);
				}
				else
				{
					vVar6 = { ((*iParam2)[iVar0 /*32*/])->f_15 };
					uVar2 = func_230(((*iParam2)[iVar0 /*32*/])->f_18);
				}
				func_233(uParam1, iVar0 + 15, ((*iParam2)[iVar0 /*32*/])->f_12, vVar6, uVar2, bParam4, bParam5, 0, 1, 0);
			}
			func_233(uParam1, iVar0, ((*iParam2)[iVar0 /*32*/])->f_1, vVar3, uVar1, bParam4, bParam5, ((*iParam2)[iVar0 /*32*/])->f_2, 1, ((*iParam2)[iVar0 /*32*/])->f_5);
		}
		iVar0++;
	}
	return 1;
}

int func_65(var uParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;

	if (*iParam1 != *uParam2)
	{
		return 0;
	}
	if (iParam5 < 0 || iParam5 >= *iParam1)
	{
		iParam5 = 0;
	}
	if (iParam6 < 0 || iParam6 >= *iParam1)
	{
		iParam6 = (*iParam1 - 1);
	}
	if (func_234(uParam0, 1))
	{
		iVar0 = iParam5;
		while (iVar0 <= iParam6)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam2[iVar0]) && ((*iParam1)[iVar0 /*32*/])->f_1 != 0)
			{
				(*uParam2)[iVar0] = func_235(uParam0, iVar0);
				if (!ENTITY::IS_ENTITY_DEAD(uParam2[iVar0]))
				{
					if (((*iParam1)[iVar0 /*32*/])->f_12 != 0)
					{
						((*iParam1)[iVar0 /*32*/])->f_11 = func_235(uParam0, iVar0 + 15);
						func_236(&(((*iParam1)[iVar0 /*32*/])->f_11), (*iParam1)[iVar0 /*32*/], bParam3, 1);
						ENTITY::_SET_ENTITY_HEALTH(((*iParam1)[iVar0 /*32*/])->f_11, 400, 0);
						PED::_0x283978A15512B2FE(((*iParam1)[iVar0 /*32*/])->f_11, 1);
						PED::_0x1902C4CFCC5BE57C(((*iParam1)[iVar0 /*32*/])->f_11, 1268180497);
						PED::_0xCC8CA3E88256E58F(((*iParam1)[iVar0 /*32*/])->f_11, 1, 1, 1, 1, 0);
						if (((*iParam1)[iVar0 /*32*/])->f_13)
						{
							PED::_SET_PED_ON_MOUNT(uParam2[iVar0], ((*iParam1)[iVar0 /*32*/])->f_11, -1, true);
						}
						PED::SET_PED_CONFIG_FLAG(uParam2[iVar0], 307, true);
					}
					if (((*iParam1)[iVar0 /*32*/])->f_10)
					{
						PED::_0x0FB1BA7FF73B41E1(uParam2[iVar0], ((*iParam1)[iVar0 /*32*/])->f_4, 0);
					}
					if (bParam4)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&(((*iParam1)[iVar0 /*32*/])->f_23)))
						{
							func_68(uParam2[iVar0], &(((*iParam1)[iVar0 /*32*/])->f_23), 0);
						}
					}
					if (func_237(&(((*iParam1)[iVar0 /*32*/])->f_22)))
					{
						GRAPHICS::_0xDFCE8CE9F3EBE93F(uParam2[iVar0]);
					}
					func_236((*uParam2)[iVar0], (*iParam1)[iVar0 /*32*/], bParam3, 0);
				}
			}
			iVar0++;
		}
		func_238(uParam0);
		return 1;
	}
	return 0;
}

int func_66(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if ((func_239(iParam0, 8192) && func_239(iParam0, 16384)) && func_239(iParam0, 131072))
	{
		return joaat("weapon_revolver_cattleman");
	}
	iVar0 = WEAPON::_0xF8204EF17410BF43(416676503, iParam1, iParam2, 0);
	iVar1 = WEAPON::_0xF8204EF17410BF43(-1101297303, iParam1, iParam2, 0);
	iVar2 = joaat("weapon_shotgun_sawedoff");
	iVar3 = 0;
	if (!func_239(iParam0, 16384))
	{
		iVar3 = iVar1;
	}
	if (!func_239(iParam0, 8192))
	{
		if (!func_240(iVar3) || WEAPON::_0xF2F585411E748B9C(iVar0, 0) > WEAPON::_0xF2F585411E748B9C(iVar3, 0))
		{
			iVar3 = iVar0;
		}
	}
	if (!func_239(iParam0, 131072) && func_241(iVar2))
	{
		if (!func_240(iVar3) || WEAPON::_0xF2F585411E748B9C(iVar2, 0) > WEAPON::_0xF2F585411E748B9C(iVar3, 0))
		{
			iVar3 = iVar2;
		}
	}
	if (!func_240(iVar3))
	{
		return joaat("weapon_revolver_cattleman");
	}
	return iVar3;
}

bool func_67(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_240(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
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
							if (func_240(iVar4) && iVar4 != bVar0)
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
	if (func_242() == -1 && !func_241(bVar0))
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
				if (func_241(joaat("weapon_repeater_carbine")))
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
		if (iParam0 != Global_35 && func_240(bVar0))
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
	if (bParam6 && bParam2)
	{
		bParam5 = false;
	}
	if (iParam0 == Global_35)
	{
		func_243(bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_244(iParam0, &bVar0, &fVar25);
		bVar0 = WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_245(bVar0))
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

void func_68(int iParam0, char* sParam1, int iParam2)
{
	if (iParam2 || func_78(iParam0, 0, 0))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "HAS_VOICE", true);
		AUDIO::SET_AMBIENT_VOICE_NAME(iParam0, sParam1);
	}
}

int func_69(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (func_246(iParam0, &(uParam1->f_121)))
	{
		uParam1->f_120++;
		return 1;
	}
	return 0;
}

void func_70(int iParam0, bool bParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 130, !bParam1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 178, bParam1);
}

void func_71(var uParam0, int iParam1)
{
	uParam0->f_88 = (uParam0->f_88 || iParam1);
}

void func_72(var uParam0, int iParam1)
{
	uParam0->f_89 = iParam1;
}

char[] func_73(char[4] cParam0)
{
	char* sVar0;
	char[] cVar1[8];
	int iVar2;

	StringCopy(&sVar0, "DUELW", 8);
	switch (iLocal_873)
	{
		case 76:
			StringCopy(&cVar1, "VAL", 8);
			break;
		case 92:
			StringCopy(&cVar1, "VHT", 8);
			break;
	}
	switch (iLocal_17)
	{
		case 0:
			iVar2 = 1;
			break;
	}
	return func_247(&sVar0, &cVar1, cParam0, iVar2);
}

float func_74(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar1 = (Param3 - Param0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = MISC::ATAN2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

bool func_75(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_76(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

int func_77(var uParam0, float fParam1)
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

bool func_78(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_196(iParam0, iParam1);
}

void func_79(var uParam0, int iParam1)
{
	vector3 vVar0;
	int iVar3;

	vVar0 = { func_248(uParam0) };
	iVar3 = func_187(uParam0->f_3, iParam1);
	uParam0->f_185 = iParam1;
	STATS::_0xCA41E86545413B5B(7, 1221649453, -585414509, iVar3, vVar0);
	if (STATS::_0x01F4D242765C6B24(iVar3))
	{
		uParam0->f_186 = 1;
	}
}

void func_80(var uParam0, var uParam1)
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

void func_81(var uParam0)
{
	func_38(uParam0, 1);
	func_249(uParam0, 20);
}

bool func_82(int iParam0, int iParam1)
{
	if (!func_223(iParam0))
	{
		return false;
	}
	return (((*Global_1310750)[iParam0 /*111*/])->f_1 && iParam1) != 0;
}

void func_83(var uParam0, var uParam1, int iParam2, int* iParam3)
{
	if (!func_223(iParam2))
	{
		return;
	}
	if (*uParam1)
	{
		return;
	}
	if (func_250())
	{
		func_251(1);
	}
	func_252(iParam2, uParam0->f_43);
	func_253(iParam2, 0, 0, 0, 0);
	if (func_254(iParam2) != -1)
	{
		MISC::_0xD74ACDF7DB8114AF(1);
	}
	AUDIO::START_AUDIO_SCENE("RE_active_location_scene");
	MISC::_0x1096603B519C905F(func_178(uParam0->f_3));
	if (MAP::DOES_BLIP_EXIST(*iParam3))
	{
		MAP::REMOVE_BLIP(iParam3);
	}
	func_255(uParam0, 1, 0);
	*uParam1 = 1;
}

void func_84(var uParam0)
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

void func_85(var uParam0, int iParam1, float fParam2)
{
	bool bVar0;
	float fVar1;

	bVar0 = false;
	if (uParam0->f_178 && func_256())
	{
		bVar0 = true;
	}
	if (!uParam0->f_48 && !func_82(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_83(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_84(&(uParam0->f_121));
			return;
		}
		if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_173))
		{
			if (!func_257(Global_35, uParam0->f_173, 1, 0))
			{
				return;
			}
		}
		fVar1 = func_258(uParam0, bVar0);
		func_259(uParam0->f_121[iParam1 /*9*/], fVar1, 1082130432, 0, 90f, 0, &(uParam0->f_98[iParam1]));
		if (func_260(&(uParam0->f_121), uParam0->f_120, fParam2))
		{
			func_83(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_84(&(uParam0->f_121));
		}
	}
}

int func_86(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;

	fVar0 = 30f;
	fVar1 = 150f;
	if (func_60(uParam2->f_3, 1))
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
			if (func_261())
			{
				fVar0 = 15f;
			}
		}
		if (func_262(uParam2, fVar0))
		{
			*uParam1 = 1;
		}
	}
	if (!uParam2->f_48)
	{
		if (!bParam3 && func_263(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			return 0;
		}
		if (!func_262(uParam2, fVar1))
		{
			if (!func_264(((*Global_1310750)[uParam2->f_3 /*111*/])->f_38))
			{
				return 0;
			}
		}
		if (!func_265(uParam2->f_3, 2) && func_266(2))
		{
			return 0;
		}
		if (func_60(iParam0, 4194304) || func_60(iParam0, 33554432))
		{
			if (func_267(1))
			{
				return 0;
			}
		}
	}
	if (func_268(Global_35))
	{
		return 0;
	}
	if (func_269(0, 1, 1) && !func_270(iParam0))
	{
		return 0;
	}
	if (!*uParam1 && func_60(iParam0, 128))
	{
		if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (func_271(Global_35, 0))
		{
			return 0;
		}
		if (Global_16)
		{
			return 0;
		}
		if (func_263(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			return 0;
		}
		if (func_272())
		{
			return 0;
		}
		iVar2 = func_273(func_2());
		if (func_274(iVar2))
		{
			if (func_275(Global_36, iVar2))
			{
				return 0;
			}
		}
		if (func_276(Global_36) && !uParam2->f_161)
		{
			return 0;
		}
		if (!uParam2->f_48)
		{
			if (func_277(&(uParam2->f_91), 0, 1084227584, 1, 1))
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_87(var uParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;

	if (func_278(uParam0->f_51))
	{
		func_279(uParam0->f_51, 0);
		fVar0 = func_280(uParam0->f_3);
		iVar2 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(uParam0->f_51, 0f, 0f, 0f, fVar0, fVar0, fVar0, func_281());
		fVar1 = func_183(!func_60(uParam0->f_3, 1), 20f, -1f);
		uParam0->f_51.f_11 = func_283(iVar2, func_282(uParam0->f_3), 1, iParam1, 8, 0, fVar1);
	}
}

void func_88(int iParam0, var uParam1)
{
	if (iParam0->f_16 != 0 || *uParam1 != 0)
	{
		Global_1935630->f_30 = 0;
		Global_1935630->f_31 = 0;
		Global_1935630->f_25 = 0;
		Global_1935630->f_39 = 0;
		iParam0->f_8 = func_284();
		PLAYER::_0xEACEBAAE0A33FB3F(PLAYER::PLAYER_ID());
	}
	iParam0->f_2 = 0;
	iParam0->f_3 = 0;
	iParam0->f_5 = 0;
	iParam0->f_10 = 0;
	func_285(iParam0, 0);
	*uParam1 = 0;
	iParam0->f_16 = 0;
}

int func_89(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = (iParam5 - iParam4) + 1;
	if (iParam6 == 1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = func_286(iVar2, iParam6);
	}
	if (*uParam3 < iParam4 || *uParam3 > iParam5)
	{
		*uParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_287(uParam0[*uParam3], 0, iParam1, uParam2, 0, 0))
		{
			return 1;
		}
		*uParam3++;
		if (*uParam3 > iParam5)
		{
			*uParam3 = iParam4;
		}
		iVar1++;
	}
	return 0;
}

int func_90(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

int func_91()
{
	if (func_288() || PED::IS_PED_IN_COMBAT(Global_35, 0))
	{
		return 1;
	}
	return 0;
}

bool func_92(var uParam0)
{
	return func_289(*uParam0, 1);
}

void func_93(var uParam0)
{
	func_290(uParam0, 0f);
}

int func_94(var uParam0, float fParam1)
{
	if (func_291(uParam0, fParam1))
	{
		func_195(uParam0);
		return 1;
	}
	return 0;
}

void func_95(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

bool func_96(int iParam0)
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

void func_97(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 && !func_96(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_292(*uParam0);
	if (((*Global_1945938)[iVar0 /*18*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && iParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_293(iVar0);
	*uParam0 = 0;
}

void func_98(int iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(&(uLocal_1121[0])))
	{
		return;
	}
	if (iLocal_1357 >= iParam0)
	{
		if (func_294(&(uLocal_1121[0]), Global_35, 0, 1114636288, 0) || &Local_35.f_98[0] < 30f)
		{
			func_24(&iLocal_238, 256);
		}
		else
		{
			func_42(&iLocal_238, 256);
		}
		iLocal_1357 = 0;
	}
	iLocal_1357++;
}

void func_99()
{
	if (!func_145())
	{
		func_295(&uLocal_1121, 1, -1, 1, 1, 1, 1);
	}
	else if (!func_3(iLocal_238, 2))
	{
		func_32();
		func_24(&iLocal_238, 2);
	}
}

void func_100()
{
	int iVar0;

	if (!func_3(iLocal_238, 1048576) && !Local_35.f_46)
	{
		if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			iVar0 = PED::_0x4C8B59171957BCF7(Global_35);
			if (func_257(Global_35, iLocal_1152, 1, 0))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1.25f);
			}
		}
	}
}

void func_101()
{
	int iVar0;
	int iVar1;

	if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_1121[0])))
	{
		iVar0 = func_296(3, 0, 0);
		if (func_3(iLocal_238, 2097152))
		{
			iVar0 = 1;
		}
		iVar1 = func_297(uLocal_1121[0], Local_1046[0 /*21*/], 15f, &Local_1068, &(Local_35.f_192), 0, 1, 0, 0, iVar0, 0, 0, 2, 1, -1082130432, 0);
		if (iLocal_1120 <= -1)
		{
			iLocal_1120 = iVar1;
		}
	}
}

int func_102()
{
	int iVar0;

	if (iLocal_1356 >= 4)
	{
		return 1;
	}
	if (iLocal_1367)
	{
		return 1;
	}
	if (func_291(&uLocal_888, 1f))
	{
		iVar0 = func_298(iLocal_1356);
		if (iVar0 != -1 && !ENTITY::IS_ENTITY_DEAD(&(uLocal_1121[iVar0])))
		{
			func_141(&(uLocal_1121[iVar0]), Global_35, func_299(iLocal_1356, iLocal_1044), 0, -1082130432, 0, 0, 0, 1, 1, 0, -417894478, 1, 0, 0);
		}
		iLocal_1356++;
		func_93(&uLocal_888);
	}
	return 0;
}

int func_103()
{
	if (!ANIMSCENE::_0x477122B8D05E7968(Local_19, 1, 0))
	{
		return 0;
	}
	if (!ANIMSCENE::_0x477122B8D05E7968(Local_19.f_1, 1, 0))
	{
		return 0;
	}
	if (!ANIMSCENE::_0x477122B8D05E7968(Local_19.f_2, 1, 0))
	{
		return 0;
	}
	if (!ANIMSCENE::_0x477122B8D05E7968(Local_19.f_3, 1, 0))
	{
		return 0;
	}
	if (!ANIMSCENE::_0x477122B8D05E7968(Local_27, 1, 0))
	{
		return 0;
	}
	if (!ANIMSCENE::_0x477122B8D05E7968(Local_27.f_1, 1, 0))
	{
		return 0;
	}
	if (!ANIMSCENE::_0x477122B8D05E7968(Local_27.f_2, 1, 0))
	{
		return 0;
	}
	if (!ANIMSCENE::_0x477122B8D05E7968(Local_27.f_3, 1, 0))
	{
		return 0;
	}
	return 1;
}

void func_104()
{
	func_301(Local_1068[0 /*17*/], func_300(7), "", -163964935, 0, 0, 0, 1, 0);
	func_301(Local_1068[1 /*17*/], func_300(10), "", 648122183, 0, 0, 0, 1, 0);
	func_301(Local_1068[2 /*17*/], func_300(12), "", -1616532217, 0, 0, 0, 1, 0);
	func_302(Local_1068[2 /*17*/], 1);
}

void func_105(bool bParam0)
{
	func_303(Local_1046[0 /*21*/], 0);
	func_304(0);
	if (bParam0)
	{
		iLocal_1120 = -1;
	}
}

void func_106()
{
	iLocal_1152 = func_306(func_305(0), func_305(1), 12f, 25f, 10f, "REDW - volAmbientRestriction");
	POPULATION::_0xB56D41A694E42E86(iLocal_1152, 534496, 264192, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_1152, 534496, 262144, 0, -1, -1, 2);
	func_307();
}

void func_107(float fParam0)
{
	if (func_78(&(uLocal_1121[0]), 0, 1))
	{
		iLocal_1350 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(-23350179, &(uLocal_1121[0]), fParam0, 25f, 25f, fParam0, 12f, 1127481344, 0, 0, -1, -1);
	}
}

void func_108(char* sParam0)
{
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_19.f_2, sParam0);
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_19.f_3, sParam0);
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_27, sParam0);
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_27.f_1, sParam0);
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_27.f_2, sParam0);
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_27.f_3, sParam0);
}

int func_109(var uParam0, var uParam1, float fParam2, float fParam3, float fParam4, int iParam5, float fParam6, float fParam7, int iParam8, float fParam9, bool bParam10, float fParam11, int iParam12, int iParam13, bool bParam14)
{
	float fVar0;

	func_308(Global_35, uParam0->f_51, uParam1, 0f, 0, 0);
	fVar0 = 0f;
	if (func_309(uParam1, iParam5))
	{
		if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			fVar0 = (ENTITY::GET_ENTITY_SPEED(Global_35) * fParam7);
		}
		else
		{
			fVar0 = (ENTITY::GET_ENTITY_SPEED(Global_35) * fParam6);
		}
	}
	if (func_310(uParam0, fParam2, 1114636288, (fParam4 + fVar0), iParam8, fParam9, bParam10, fParam11, iParam12, 1125515264, bParam14, 1))
	{
		return 1;
	}
	return 0;
}

void func_110(var uParam0)
{
	int iVar0;

	func_84(&(uParam0->f_121));
	iVar0 = 0;
	while (iVar0 < uParam0->f_121)
	{
		uParam0->f_121[iVar0 /*9*/] = 0;
		iVar0++;
	}
}

int func_111(float fParam0)
{
	vector3 vVar0;

	if (!func_78(&(uLocal_1121[0]), 0, 1) || !func_78(&(uLocal_1121[1]), 0, 1))
	{
		return 0;
	}
	vVar0 = { func_311(Global_35, 3f) };
	if (func_154(&(uLocal_1121[0]), vVar0, 1) < fParam0 || func_154(&(uLocal_1121[1]), vVar0, 1) < fParam0)
	{
		func_24(&iLocal_238, 131072);
		return 1;
	}
	return 0;
}

int func_112()
{
	switch (func_2())
	{
		case 76:
			return func_312();
		case 92:
			return func_313();
		default:
			break;
	}
	return 0;
}

void func_113(char* sParam0, bool bParam1)
{
	ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_19.f_2, sParam0, bParam1, false);
	ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_19.f_3, sParam0, bParam1, false);
	ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_27, sParam0, bParam1, false);
	ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_27.f_1, sParam0, bParam1, false);
	ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_27.f_2, sParam0, bParam1, false);
	ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_27.f_3, sParam0, bParam1, false);
}

float func_114(var uParam0)
{
	if (!func_92(uParam0))
	{
		return 0f;
	}
	if (func_314(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_315() - uParam0->f_1);
}

int func_115()
{
	switch (iLocal_1349)
	{
		case 0:
			if (func_140(-3f, 1, 0, 0) || func_3(iLocal_238, 131072))
			{
				if (!func_3(iLocal_238, 1073741824))
				{
					AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_1121[0]), 0);
					func_141(&(uLocal_1121[0]), &(uLocal_1121[1]), Local_1189[22 /*4*/], 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_24(&iLocal_238, 1073741824);
				}
				iLocal_1349++;
			}
			break;
		case 1:
			if (func_140(-4f, 1, 0, 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_116(int iParam0)
{
	func_195(&uLocal_0);
	func_316(1, iParam0, 0);
	_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
	func_317();
}

void func_117(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	}
	MAP::_0x0C7A2289A5C4D7C9(iParam0, iParam1);
}

void func_118()
{
	if (func_318(Local_19.f_2, "preDuel", "pblPreDuel", "endLoop", "bReleaseCrowd", 0, 0))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_19.f_2, "pblPreDuel", true);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_19.f_2, "bDraw", false, false);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_19.f_2, "bDrawIdle", false, false);
	}
	if (func_318(Local_19.f_3, "preDuel", "pblPreDuel", "endLoop", "bReleaseCrowd", 0, 0))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_19.f_3, "pblPreDuel", true);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_19.f_3, "bDraw", false, false);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_19.f_3, "bDrawIdle", false, false);
	}
	if (func_318(Local_27, "preDuel", "pblPreDuel", "endLoop", "bReleaseCrowd", 0, 0))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_27, "pblPreDuel", true);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_27, "bDraw", false, false);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_27, "bDrawIdle", false, false);
	}
	if (func_318(Local_27.f_1, "preDuel", "pblPreDuel", "endLoop", "bReleaseCrowd", 0, 0))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_27.f_1, "pblPreDuel", true);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_27.f_1, "bDraw", false, false);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_27.f_1, "bDrawIdle", false, false);
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_27.f_1, -342.291f, 717.985f, 116.362f, 0f, 0f, -178.125f, 2);
	}
	if (func_318(Local_27.f_2, "preDuel", "pblPreDuel", "endLoop", "bReleaseCrowd", 0, 0))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_27.f_2, "pblPreDuel", true);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_27.f_2, "bDraw", false, false);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_27.f_2, "bDrawIdle", false, false);
	}
	if (func_318(Local_27.f_3, "preDuel", "pblPreDuel", "endLoop", "bReleaseCrowd", 0, 0))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_27.f_3, "pblPreDuel", true);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_27.f_3, "bDraw", false, false);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_27.f_3, "bDrawIdle", false, false);
	}
}

void func_119(int iParam0, bool bParam1, bool bParam2)
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

void func_120()
{
	iLocal_1356 = 0;
	func_93(&uLocal_888);
}

void func_121(int iParam0)
{
	if (ANIMSCENE::_0x25557E324489393C(iParam0))
	{
		if (ANIMSCENE::_0xCBFC7725DE6CE2E0(iParam0, 0))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(iParam0);
		}
	}
}

int func_122(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, int iParam6)
{
	if (func_319(iParam0, iParam1, sParam2, iParam3, fParam4, iParam5, iParam6 == 0))
	{
		return 1;
	}
	return 0;
}

void func_123()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1155))
	{
		if (func_320(iLocal_1155, iLocal_1152, 0, 1))
		{
			if (!func_321(iLocal_1155, 518218985))
			{
				if (!PED::IS_PED_ON_MOUNT(Global_35))
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_1155, Global_35, 1, 0, -1082130432, -1, 0);
				}
			}
		}
	}
}

int func_124()
{
	if ((func_125(&(uLocal_1121[0]), 1, 1) < 2f && PED::IS_PED_FACING_PED(Global_35, &(uLocal_1121[0]), 90f)) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(&(uLocal_1121[0])))
	{
		func_141(&(uLocal_1121[0]), Global_35, func_73("DUELER_CHAL"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		func_24(&iLocal_238, 4194304);
		func_24(&iLocal_238, 2097152);
		func_24(&iLocal_238, 16777216);
		func_105(1);
		func_135();
		TASK::TASK_CONFRONT(&(uLocal_1121[0]), Global_35, 2);
		iLocal_15 = 13;
		return 1;
	}
	return 0;
}

float func_125(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return -1f;
	}
	return func_322(Global_35, iParam0, bParam1, iParam2);
}

int func_126()
{
	if (MISC::ABSF((Global_36.f_2 - Local_35.f_51.f_2)) < 3f && !func_271(Global_35, 1))
	{
		return 1;
	}
	return 0;
}

void func_127()
{
	if (iLocal_17 == 0)
	{
		if (!func_3(iLocal_238, 2097152))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_1121[0]), -752067550))
			{
				func_24(&iLocal_238, 2097152);
				PED::SET_PED_CONFIG_FLAG(Global_35, 514, true);
				iLocal_1368 = 1;
				func_105(1);
				func_323();
			}
		}
		else if (func_126())
		{
			if (iLocal_1120 == 0)
			{
				if (func_133())
				{
					func_134(203, 0);
				}
				else
				{
					func_134(205, 0);
				}
				AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_1121[0]), 0);
				func_141(Global_35, &(uLocal_1121[0]), func_73("PLAYER_CHAL"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_105(1);
				func_121(Local_19);
				func_42(&iLocal_238, 2097152);
				func_143();
				func_113("bDrawIdle", 1);
				func_142(&Local_35, Local_782.f_42, Local_782.f_86, 0, 1114636288);
				iLocal_15 = 13;
			}
			if (iLocal_1120 == 1)
			{
				AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_1121[0]), 0);
				func_141(Global_35, &(uLocal_1121[0]), func_73("PLR_QUIT"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_93(&uLocal_882);
				func_31(Local_875);
				func_24(&iLocal_238, 33554432);
				func_137();
				func_105(1);
				iLocal_15 = 11;
			}
		}
	}
}

void func_128()
{
	func_139(Local_19.f_2, &iLocal_238, 2048, 2, 3);
	func_139(Local_19.f_3, &iLocal_238, 4096, 4, 5);
	func_139(Local_27, &iLocal_238, 8192, 6, 6);
	func_139(Local_27.f_1, &iLocal_238, 16384, 7, 8);
	func_139(Local_27.f_2, &iLocal_238, 32768, 9, 10);
	func_139(Local_27.f_3, &iLocal_238, 65536, 11, 13);
}

void func_129()
{
	if (!func_92(&uLocal_885))
	{
		func_93(&uLocal_885);
		fLocal_1346 = MISC::GET_RANDOM_FLOAT_IN_RANGE(2f, 4f);
	}
	else if (func_94(&uLocal_885, fLocal_1346))
	{
		switch (iLocal_1352)
		{
			case 0:
				func_324(Local_19.f_2, "bReleaseCrowd", 1);
				func_93(&uLocal_885);
				iLocal_1352++;
				break;
			case 1:
				func_324(Local_19.f_3, "bReleaseCrowd", 1);
				func_93(&uLocal_885);
				iLocal_1352++;
				break;
			case 2:
				func_324(Local_27, "bReleaseCrowd", 1);
				func_93(&uLocal_885);
				iLocal_1352++;
				break;
			case 3:
				func_324(Local_27.f_1, "bReleaseCrowd", 1);
				func_93(&uLocal_885);
				iLocal_1352++;
				break;
			case 4:
				func_324(Local_27.f_2, "bReleaseCrowd", 1);
				func_93(&uLocal_885);
				iLocal_1352++;
				break;
			case 5:
				func_324(Local_27.f_3, "bReleaseCrowd", 1);
				func_93(&uLocal_885);
				iLocal_1352++;
				break;
			case 6:
				break;
		}
	}
}

void func_130()
{
	if (func_325(Global_36))
	{
		TASK::CLEAR_PED_TASKS(&(uLocal_1121[0]), 1, 0);
		func_93(&uLocal_882);
		func_137();
		func_24(&iLocal_238, 33554432);
		func_42(&iLocal_238, 2097152);
		func_105(1);
		iLocal_15 = 11;
	}
}

void func_131(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	struct<14> Var0;

	if (iParam2 == 0)
	{
		iParam2 = Global_35;
	}
	Var0.f_4 = -1;
	Var0.f_8 = 2;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	Var0.f_13 = 1;
	Var0.f_14 = 2;
	Var0.f_15 = 2;
	Var0.f_16 = 3;
	Var0.f_19 = 3;
	Var0.f_20 = 1;
	Var0.f_21 = 3;
	Var0.f_22 = 3;
	Var0.f_4 = 21030;
	Var0.f_3 = iParam2;
	Var0.f_8 = 4;
	if (bParam7)
	{
		Var0.f_17 = 4;
		Var0.f_18 = 1;
	}
	else
	{
		Var0.f_17 = 0;
		Var0.f_18 = 0;
	}
	Var0.f_19 = 4;
	Var0.f_20 = 2;
	Var0.f_21 = 4;
	Var0.f_22 = 3;
	Var0 = { iParam4, iParam5, iParam6 };
	Var0.f_12 = 0;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	if (bParam3)
	{
		func_227(&(Var0.f_5), 1);
	}
	Var0.f_13 = 0;
	Var0.f_7 = iParam1;
	func_326(&(Var0.f_5), 1);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		_NAMESPACE29::_0x66F9EB44342BB4C5(*uParam0, &Var0);
	}
}

void func_132(int iParam0)
{
	int iVar0;

	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, &(Local_229[1 /*2*/]), (Local_229[1 /*2*/])->f_1, Global_35, 6333, 4f, -4f, 0, 0, 0, 0, -1082130432, 0, 0, -1082130432);
	TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, &(Local_229[0 /*2*/]), (Local_229[0 /*2*/])->f_1, Global_35, -1, 4f, -4f, 0, 0, 0, 0, -1082130432, 0, 0, -1082130432);
	func_327(iParam0, &iVar0, 0, 0, 1, 1);
	func_117(2001176446, &(uLocal_1121[0]), 1);
}

int func_133()
{
	int iVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false);
	if (!func_328(&iVar0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 3, false);
	}
	if (!func_328(&iVar0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false);
	}
	if (!func_328(&iVar0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 1, false);
	}
	if (!func_328(&iVar0))
	{
		iVar0 = 0;
	}
	if (!func_328(&iVar0))
	{
		iVar0 = func_329(131200, 0);
	}
	if (!func_328(&iVar0))
	{
		return 0;
	}
	return 1;
}

void func_134(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_330(iParam0, &iVar0, &iVar1);
	if (!func_331(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_332(iVar0, iVar1);
}

void func_135()
{
	func_333(0, "RE_DD_CHALLENGE");
	if (func_133())
	{
		func_334(0, 1);
	}
	else
	{
		func_334(0, 0);
	}
	func_333(1, func_300(1));
	func_334(1, 1);
	func_334(2, 0);
}

float func_136(var uParam0)
{
	if (!func_92(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_314(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_315() - uParam0->f_1);
}

void func_137()
{
	func_333(0, func_300(7));
	func_334(0, 0);
	func_333(1, func_300(10));
	func_334(1, 1);
	func_334(2, 0);
}

void func_138()
{
	if (iLocal_17 != 0)
	{
		return;
	}
	if (!func_3(iLocal_238, 1024))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(&(uLocal_1121[0]), &(Local_229[1 /*2*/]), (Local_229[1 /*2*/])->f_1, 1) && func_335(&(uLocal_1121[0]), Global_35, 0))
		{
			if (!func_92(&uLocal_900))
			{
				func_93(&uLocal_900);
			}
			else if (func_114(&uLocal_900) > 2f)
			{
				if (func_205(1) >= 1)
				{
					func_141(&(uLocal_1121[0]), Global_35, &Local_1318, 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else if (!func_3(iLocal_238, 16777216))
				{
					if (func_165(0))
					{
						func_141(&(uLocal_1121[0]), Global_35, &Local_1326, 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						func_141(&(uLocal_1121[0]), Global_35, &Local_1322, 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				func_24(&iLocal_238, 1024);
			}
		}
	}
	else if (!func_3(iLocal_238, 8))
	{
		if (func_140(3f, 1, 0, 0))
		{
			if (func_205(1) >= 1)
			{
				func_141(&(uLocal_1121[0]), Global_35, &Local_1330, 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			else if (func_165(0))
			{
				func_141(&(uLocal_1121[0]), Global_35, &Local_1338, 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			else
			{
				func_141(&(uLocal_1121[0]), Global_35, &Local_1334, 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			func_336(&(uLocal_1121[0]));
			func_24(&iLocal_238, 8);
		}
	}
}

void func_139(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (!func_3(*iParam1, iParam2))
	{
		if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(iParam0, 0))
		{
			iVar0 = iParam3;
			while (iVar0 <= iParam4)
			{
				if (func_78(&(uLocal_1121[iVar0]), 0, 1))
				{
					PED::_0xAAB050DA48B57978(&(uLocal_1121[iVar0]), "Default_Scared", 0, -1, 4);
					func_337(&(uLocal_1121[iVar0]), 0, 0, 0);
				}
				iVar0++;
			}
			Local_35.f_50 = 1;
			func_93(&uLocal_885);
			fLocal_1346 = MISC::GET_RANDOM_FLOAT_IN_RANGE(2f, 4f);
			func_24(iParam1, iParam2);
		}
	}
}

int func_140(float fParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam3 && ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		if (!func_338(iParam2, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (func_339(fParam0))
	{
		return 0;
	}
	return 1;
}

bool func_141(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, int iParam7, int iParam8, bool bParam9, int iParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_340(iParam0, iParam1, sParam2, sParam3, fParam4, iParam5, bParam6, iParam7, iParam8, bParam9, iParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

void func_142(var uParam0, vector3 vParam1, int iParam4, int iParam5, float fParam6)
{
	if (VOLUME::_0x92A78D0BEDB332A3(iParam4))
	{
		func_341(iParam5, func_205(1), iParam4, vParam1, 1069547520, 1075838976, 1056964608, 0, fParam6, 1);
	}
	else
	{
		func_342(iParam5, func_205(1), vParam1, uParam0->f_51, 1069547520, 1075838976, 1056964608, 0, fParam6, 1);
	}
	func_343(iParam5);
	uParam0->f_170 = 1;
}

void func_143()
{
	float fVar0[2];

	if (iLocal_1372 == 10)
	{
		func_23(1, &Local_782, &uLocal_688, -1038090240, 1103626240);
	}
	*(vLocal_1360[0 /*3*/]) = { func_305(0) };
	fVar0[0] = func_154(Global_35, *(vLocal_1360[0 /*3*/]), 1);
	*(vLocal_1360[1 /*3*/]) = { func_305(1) };
	fVar0[1] = func_154(Global_35, *(vLocal_1360[1 /*3*/]), 1);
	if (&fVar0[0] < &fVar0[1])
	{
		Local_782.f_42 = { *(vLocal_1360[0 /*3*/]) };
		iLocal_1045 = 0;
	}
	else
	{
		Local_782.f_42 = { *(vLocal_1360[1 /*3*/]) };
		iLocal_1045 = 1;
	}
	func_77(&(Local_782.f_42), 1088421888);
	if (iLocal_1372 == 10)
	{
		func_23(0, &Local_782, &uLocal_688, -1038090240, 1103626240);
	}
}

void func_144()
{
	if (!func_3(iLocal_238, 67108864))
	{
		switch (iLocal_1120)
		{
			case 1:
				if (func_3(iLocal_238, 16))
				{
					if (func_2() == 76)
					{
						func_141(Global_35, &(uLocal_1121[0]), "RE_DUELW_VAL_V1_PLR_ANT", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else if (func_2() == 92)
					{
						func_141(Global_35, &(uLocal_1121[0]), "RE_DUELW_VHT_V1_PLR_ANT", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				else
				{
					func_141(Global_35, &(uLocal_1121[0]), "TELLS_PED_TO_SHUT_UP", 0, -1082130432, 3, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				if (func_3(iLocal_238, 33554432))
				{
					TASK::CLEAR_PED_TASKS(&(uLocal_1121[0]), 1, 0);
					func_344(&(uLocal_1121[0]), Global_35, -1);
				}
				func_105(0);
				func_24(&iLocal_238, 67108864);
				break;
			case 2:
				if (func_140(-3.5f, 1, &(uLocal_1121[0]), 1) && func_140(-3.5f, 1, Global_35, 1))
				{
					func_141(Global_35, &(uLocal_1121[0]), "WITNESS_INTIMIDATION_END_NOW_ROB", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					if (func_3(iLocal_238, 33554432))
					{
						TASK::CLEAR_PED_TASKS(&(uLocal_1121[0]), 1, 0);
						func_344(&(uLocal_1121[0]), Global_35, -1);
					}
					func_105(0);
					func_24(&iLocal_238, 67108864);
				}
				break;
		}
	}
	else if (!func_3(iLocal_238, 134217728))
	{
		switch (iLocal_1120)
		{
			case 1:
				if (func_140(0f, 1, &(uLocal_1121[0]), 1) && func_140(0f, 1, Global_35, 1))
				{
					if (func_3(iLocal_238, 16))
					{
						if (func_2() == 76)
						{
							func_345(&(uLocal_1121[0]), "GENERIC_INSULT_MED_MALE", 291934926, 0, 1, &((Local_239[0 /*32*/])->f_23), 1, 1);
						}
						else if (func_2() == 92)
						{
							func_345(&(uLocal_1121[0]), "GENERIC_ANGRY_SHOUT", 291934926, 0, 1, &((Local_239[0 /*32*/])->f_23), 1, 1);
						}
					}
					else if (func_3(iLocal_238, 33554432))
					{
						func_24(&iLocal_238, 268435456);
					}
					else
					{
						func_141(&(uLocal_1121[0]), Global_35, "WHATS_YOUR_PROBLEM", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_137();
					}
					func_105(1);
					func_24(&iLocal_238, 134217728);
				}
				break;
			case 2:
				if (func_140(-3.5f, 1, &(uLocal_1121[0]), 1) && func_140(-3.5f, 1, Global_35, 1))
				{
					func_24(&iLocal_238, 268435456);
					func_105(1);
					func_24(&iLocal_238, 134217728);
				}
				break;
		}
	}
}

int func_145()
{
	if (((((func_346(Local_19.f_2) && func_346(Local_19.f_3)) && func_346(Local_27)) && func_346(Local_27.f_1)) && func_346(Local_27.f_2)) && func_346(Local_27.f_3))
	{
		return 1;
	}
	return 0;
}

void func_146()
{
	if (func_318(Local_19.f_2, "preDuel", "pblDuel", 0, 0, 0, 0))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_19.f_2, "pblDuel", true);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_19.f_2, "bDraw", false, false);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_19.f_2, "bDrawIdle", false, false);
	}
	if (func_318(Local_19.f_3, "preDuel", "pblDuel", 0, 0, 0, 0))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_19.f_3, "pblDuel", true);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_19.f_3, "bDraw", false, false);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_19.f_3, "bDrawIdle", false, false);
	}
	if (func_318(Local_27, "preDuel", "pblDuel", 0, 0, 0, 0))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_27, "pblDuel", true);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_27, "bDraw", false, false);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_27, "bDrawIdle", false, false);
	}
	if (func_318(Local_27.f_1, "preDuel", "pblDuel", 0, 0, 0, 0))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_27.f_1, "pblDuel", true);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_27.f_1, "bDraw", false, false);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_27.f_1, "bDrawIdle", false, false);
	}
	if (func_318(Local_27.f_2, "preDuel", "pblDuel", 0, 0, 0, 0))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_27.f_2, "pblDuel", true);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_27.f_2, "bDraw", false, false);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_27.f_2, "bDrawIdle", false, false);
	}
	if (func_318(Local_27.f_3, "preDuel", "pblDuel", 0, 0, 0, 0))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_27.f_3, "pblDuel", true);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_27.f_3, "bDraw", false, false);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_27.f_3, "bDrawIdle", false, false);
	}
}

void func_147()
{
	if (func_140(-2.5f, 1, 0, 0))
	{
		if (!func_92(&uLocal_882))
		{
			func_93(&uLocal_882);
		}
		if (func_94(&uLocal_882, 7.5f))
		{
			switch (iLocal_1353)
			{
				case 0:
					switch (func_2())
					{
						case 76:
							func_141(&(uLocal_1121[0]), Global_35, func_73("DUELER_IMP"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							break;
						case 92:
							func_141(&(uLocal_1121[0]), Global_35, "CONVO_TAIL_OFF", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							break;
					}
					break;
				case 1:
					switch (func_2())
					{
						case 76:
							func_141(&(uLocal_1121[0]), Global_35, func_73("DUELER_IMP"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							break;
						case 92:
							func_141(&(uLocal_1121[0]), Global_35, "PROVOKE_GENERIC", 0, -1082130432, 3, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							break;
					}
					break;
				default:
					func_24(&iLocal_238, 8388608);
					func_31(Local_875);
					iLocal_15 = 11;
					break;
			}
			iLocal_1353++;
		}
	}
}

void func_148()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;

	if (!func_159(Local_875))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 != iLocal_1045 && !func_213(*(vLocal_1360[iVar0 /*3*/])))
		{
			fVar2 = func_347(*(vLocal_1360[iVar0 /*3*/]), 1);
			if (fVar3 <= 0f || fVar2 < fVar3)
			{
				iVar1 = iVar0;
				fVar3 = fVar2;
			}
		}
		iVar0++;
	}
	if (fVar3 < (0.5f * func_347(*(vLocal_1360[iLocal_1045 /*3*/]), 1)))
	{
		iLocal_1045 = iVar1;
		func_348(Local_875, *(vLocal_1360[iLocal_1045 /*3*/]));
		Local_782.f_42 = { *(vLocal_1360[iLocal_1045 /*3*/]) };
	}
}

int func_149(struct<7> Param0)
{
	vector3 vVar0;

	if (!func_159(Param0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Param0.f_1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(Param0.f_1))
	{
		return 0;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(Param0.f_1, true, false) };
	if (VOLUME::_0xF256A75210C5C0EB(Param0, vVar0))
	{
		switch (Param0.f_3)
		{
			case 2:
				if (!PED::IS_PED_ON_MOUNT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Param0.f_1)))
				{
					return 0;
				}
				break;
			case 4:
				if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Param0.f_1)))
				{
					return 0;
				}
				break;
			case 1:
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Param0.f_1)) || PED::IS_PED_ON_MOUNT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Param0.f_1)))
				{
					return 0;
				}
				break;
		}
		return 1;
	}
	return 0;
}

void func_150(int iParam0)
{
	if (!func_349(iParam0))
	{
		return;
	}
	func_152(1);
}

void func_151(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = Global_1905944[iVar1];
	MISC::CLEAR_BIT(&uVar3, iVar2);
	(*Global_1905944)[iVar1] = uVar3;
}

void func_152(int iParam0)
{
	_NAMESPACE71::_0xDD1232B332CBB9E7(1, iParam0, 0);
}

void func_153()
{
	switch (func_2())
	{
		case 76:
			if (iLocal_1045 == 0)
			{
				*(Local_782.f_51[2 /*3*/]) = { -350.4168f, 746.7426f, 117.0885f };
				*(Local_782.f_61[2 /*3*/]) = { 0.6471f, 0f, -151.5887f };
				Local_782.f_71[2] = 29.9539f;
			}
			else
			{
				*(Local_782.f_51[2 /*3*/]) = { -340.4041f, 728.115f, 117.3947f };
				*(Local_782.f_61[2 /*3*/]) = { 0.8079f, 0f, 47.0287f };
				Local_782.f_71[2] = 30.0044f;
			}
			break;
		case 92:
			if (iLocal_1045 == 0)
			{
				*(Local_782.f_51[2 /*3*/]) = { 2959.544f, 507.7708f, 45.5006f };
				*(Local_782.f_61[2 /*3*/]) = { -1.8472f, 0f, 19.2149f };
				Local_782.f_71[2] = 29.996f;
			}
			else
			{
				*(Local_782.f_51[2 /*3*/]) = { 2955.989f, 528.7031f, 44.6315f };
				*(Local_782.f_61[2 /*3*/]) = { 1.244f, 0f, -167.8088f };
				Local_782.f_71[2] = 29.9609f;
			}
			break;
	}
}

float func_154(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_155(int iParam0, float fParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (!PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), fParam1);
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(PLAYER::PLAYER_PED_ID())))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PED::GET_MOUNT(PLAYER::PLAYER_PED_ID()), fParam1);
		}
	}
	if (!func_350(iParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -640622144, false);
	}
	if (!func_350(iParam0, 4))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -485697785, false);
	}
	if (!func_350(iParam0, 16))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -128997553, false);
		PAD::DISABLE_CONTROL_ACTION(0, 130948705, false);
		PAD::DISABLE_CONTROL_ACTION(0, 42190210, false);
	}
	if (!func_350(iParam0, 128))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -562475458, false);
	}
	if (!func_350(iParam0, 512))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -1292666904, false);
		PAD::DISABLE_CONTROL_ACTION(0, 578288361, false);
	}
	if (!func_350(iParam0, 64))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -620139643, false);
	}
	if (!(func_351(17) && func_154(Global_35, ((*Global_1835011)[17 /*74*/])->f_18, 0) < 10f))
	{
		if (!func_350(iParam0, 2048))
		{
			PAD::DISABLE_CONTROL_ACTION(0, -822242784, false);
		}
	}
	if (!func_350(iParam0, 4096))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -1664638556, false);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (!func_350(iParam0, 1024))
		{
			PED::SET_PED_RESET_FLAG(Global_35, 2, true);
			PED::SET_PED_RESET_FLAG(Global_35, 21, true);
		}
		if (!func_350(iParam0, 8))
		{
			PED::SET_PED_RESET_FLAG(Global_35, 168, true);
		}
		PED::SET_PED_RESET_FLAG(Global_35, 33, true);
		if (!func_350(iParam0, 32))
		{
			if (PED::_0xD5FE956C70FF370B(Global_35))
			{
				PED::_0x7DE9692C6F64CFE8(Global_35, false, 0, 0);
			}
		}
	}
}

void func_156()
{
	func_334(0, 0);
	func_333(1, func_300(30));
	func_334(1, 1);
	func_334(2, 0);
}

struct<7> func_157(int iParam0, int iParam1, vector3 vParam2, vector3 vParam5, vector3 vParam8, int iParam11, bool bParam12, int iParam13)
{
	struct<7> Var0;

	Var0.f_3 = -1;
	Var0.f_6 = 1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return Var0;
	}
	if (func_352(vParam8, 0f, 0f, 0f, 1056964608, 1))
	{
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Var0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam2, vParam5, vParam8, func_281());
			break;
		default:
			Var0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam2, vParam5, vParam8, func_281());
			break;
	}
	Var0 = { func_353(iParam0, iParam1, Var0, iParam11, bParam12, iParam13) };
	return Var0;
}

void func_158(char* sParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
{
	func_37(sParam0, iParam1, 0, 1, sParam2, sParam3, sParam4, sParam5, iParam6);
}

bool func_159(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	return VOLUME::_0x92A78D0BEDB332A3(iParam0);
}

int func_160(var uParam0, var uParam1)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	EVENT::_0xB6F4825153920582();
	PAD::DISABLE_CONTROL_ACTION(0, -1404316431, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1304887797, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1301263553, false);
	PAD::DISABLE_CONTROL_ACTION(0, -39308912, false);
	PAD::DISABLE_CONTROL_ACTION(0, -128997553, false);
	PAD::DISABLE_CONTROL_ACTION(0, 255439828, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1287709438, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2131587435, false);
	PAD::DISABLE_CONTROL_ACTION(0, -209515122, false);
	func_354();
	PAD::DISABLE_CONTROL_ACTION(0, -640622144, false);
	PAD::DISABLE_CONTROL_ACTION(0, 101002513, false);
	PAD::DISABLE_CONTROL_ACTION(0, -432665970, false);
	PAD::DISABLE_CONTROL_ACTION(0, -349518703, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1591726981, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1098542161, false);
	PAD::DISABLE_CONTROL_ACTION(0, 2139949496, false);
	CAM::_0x8910C24B7E0046EC();
	PAD::DISABLE_CONTROL_ACTION(0, 1644850270, false);
	PAD::DISABLE_CONTROL_ACTION(0, -672681099, false);
	func_355(uParam1, uParam0);
	if (func_196(uParam0->f_1, 0) && PED::IS_PED_A_PLAYER(*uParam0))
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_1, 25, true);
	}
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	func_356();
	switch (uParam1->f_55)
	{
		case 0:
			if (func_357(uParam1))
			{
				func_76(uParam1, 33554432);
				if (func_197(uParam0, 2))
				{
					func_358(ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false));
				}
			}
			if (func_357(uParam1))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, 0, 0);
			}
			else
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, 4480, 0);
			}
			func_359();
			func_155(0, 1065353216);
			if (func_197(uParam0, 2))
			{
				func_360(uParam0, uParam1);
			}
			func_361(uParam0, uParam1);
			if (func_362(uParam0, uParam1))
			{
				func_47(uParam0, uParam1);
				func_201(uParam1, 9);
				return 1;
			}
			if (func_196(*uParam0, 0) && func_363(uParam0, uParam1))
			{
				func_201(uParam1, 1);
			}
			break;
		case 1:
			func_359();
			func_361(uParam0, uParam1);
			if (func_197(uParam0, 2))
			{
				func_360(uParam0, uParam1);
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				return 0;
			}
			if (func_364(uParam0, uParam1) && func_365(uParam0, uParam1))
			{
				func_366(uParam0, uParam1, 0);
				Global_19 = 0;
				func_367(uParam0, uParam1);
				func_368(uParam0, uParam1);
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
				{
					uParam1->f_4 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(748896394, uParam0->f_1, 0f, 30f, 35f, -1f, 20f, 1127481344, 0, 0, -1, -1);
				}
				if (!func_197(uParam0, 1024))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
					if (func_197(uParam0, 64))
					{
						TASK::TASK_DUEL(*uParam0, uParam1->f_63, uParam0->f_48, uParam0->f_1, func_369(uParam0), 0, 0f, 0f, 0f, func_74(uParam0->f_42, uParam0->f_45, 1), 1);
					}
					else if (func_197(uParam0, 32))
					{
						TASK::TASK_DUEL(*uParam0, uParam1->f_63, uParam0->f_48, uParam0->f_1, func_369(uParam0), 0, 0f, 0f, 0f, func_74(uParam0->f_42, uParam0->f_45, 1), 1);
					}
					else
					{
						TASK::TASK_DUEL(*uParam0, uParam1->f_63, uParam0->f_48, uParam0->f_1, func_369(uParam0), 0, uParam0->f_42, func_74(uParam0->f_42, uParam0->f_45, 1), 1);
					}
				}
				PED::_0x2208438012482A1A(*uParam0, true, true);
				uParam1->f_2 = MISC::GET_GAME_TIMER();
				if (!PED::GET_PED_CONFIG_FLAG(uParam0->f_1, 146, true))
				{
					PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 146, true);
					func_76(uParam1, 2048);
				}
				if (!func_197(uParam0, 262144))
				{
					WEAPON::_0xFCCC886EDE3C63EC(*uParam0, 2, 1);
					WEAPON::_0xFCCC886EDE3C63EC(uParam0->f_1, 2, 1);
				}
				if ((func_197(uParam0, 32) || func_197(uParam0, 2)) || (func_357(uParam1) && !func_357(uParam1)))
				{
					if (!func_197(uParam0, 1024))
					{
						func_370(&(uParam0->f_16), 0);
					}
					if (!func_357(uParam1))
					{
						func_371(uParam0, uParam1, 1);
					}
					func_201(uParam1, 7);
				}
				else
				{
					func_372(uParam1, 0);
					MAP::DISPLAY_RADAR(false);
					func_201(uParam1, 3);
				}
			}
			break;
		case 3:
			func_359();
			func_155(0, 1065353216);
			func_367(uParam0, uParam1);
			uVar0 = func_360(uParam0, uParam1);
			if (func_362(uParam0, uParam1))
			{
				func_47(uParam0, uParam1);
				func_201(uParam1, 9);
				return 1;
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				return 0;
			}
			if (MISC::GET_GAME_TIMER() > uParam1->f_2 + 1000 || func_3(uParam0->f_88, 2))
			{
				if ((func_3(uParam0->f_88, 32) || uVar0) && (func_197(uParam0, 2) || (PED::IS_PED_FACING_PED(uParam0->f_1, *uParam0, 20f) && PED::IS_PED_FACING_PED(*uParam0, uParam0->f_1, 20f))))
				{
					if (!func_197(uParam0, 2048))
					{
						LAW::_0xDE5FAA741A781F73(PLAYER::GET_PLAYER_INDEX(), 1);
					}
					if (!func_197(uParam0, 1024))
					{
						func_370(&(uParam0->f_16), 0);
					}
					if (func_3(uParam0->f_88, 1024))
					{
						if (func_154(uParam0->f_1, uParam0->f_45, 0) < 0.5f || func_321(uParam0->f_1, -717627678))
						{
							TASK::CLEAR_PED_TASKS(uParam0->f_1, 1, 0);
							TASK::OPEN_SEQUENCE_TASK(&iVar1);
							if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_12)))
							{
								TASK::TASK_PLAY_ANIM(0, "script_re@drunk_dueler", &(uParam0->f_12), 2f, -4f, -1, 4, 0, 0, 0, 0, 0, 0);
							}
							else
							{
								TASK::TASK_PLAY_ANIM(0, "script_re@drunk_dueler", "intro_idle_drunk", 2f, -4f, -1, 4, 0, 0, 0, 0, 0, 0);
								TASK::TASK_PLAY_ANIM(0, "script_re@drunk_dueler", "pass_out_drunk", 2f, -4f, -1, 4, 0, 0, 0, 0, 0, 0);
							}
							func_327(uParam0->f_1, &iVar1, 0, 0, 1, 1);
							func_201(uParam1, 8);
						}
					}
					else
					{
						func_201(uParam1, 7);
					}
				}
			}
			break;
		case 7:
			MAP::DISPLAY_RADAR(false);
			func_367(uParam0, uParam1);
			if (func_373(uParam0, uParam1))
			{
				func_47(uParam0, uParam1);
				func_201(uParam1, 9);
				func_370(&(uParam0->f_32), 1);
				return 1;
			}
			break;
		case 8:
			func_367(uParam0, uParam1);
			func_374(uParam0);
			if (!func_3(uParam1->f_1, 512) && ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_1, -529482553))
			{
				EVENT::REMOVE_SHOCKING_EVENT(uParam1->f_4);
				uParam1->f_4 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(-180122789, ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false), -1f, -1f, -1f, -1082130432, -1082130432, -1, -1);
				TASK::CLEAR_PED_TASKS(uParam0->f_1, 1, 0);
				WEAPON::REMOVE_ALL_PED_WEAPONS(uParam0->f_1, false, true);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 243, true);
				TASK::TASK_KNOCKED_OUT(uParam0->f_1, 60f, 1);
				func_24(&(uParam1->f_1), 512);
				func_47(uParam0, uParam1);
				if (!func_197(uParam0, 2048))
				{
					LAW::_0xDE5FAA741A781F73(PLAYER::GET_PLAYER_INDEX(), 0);
				}
				func_370(&(uParam0->f_32), 1);
				CAM::RENDER_SCRIPT_CAMS(false, true, 5000, true, false, 0);
				MAP::DISPLAY_RADAR(true);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
				TASK::CLEAR_PED_TASKS(*uParam0, 1, 0);
				func_201(uParam1, 9);
				return 1;
			}
			break;
		case 9:
			func_47(uParam0, uParam1);
			return 1;
	}
	if (func_197(uParam0, 4))
	{
		bVar2 = true;
		iVar3 = MISC::_0x483B8C542103AD72();
		if (uParam1->f_10 == -1)
		{
			uParam1->f_10 = iVar3;
		}
		else if ((iVar3 - uParam1->f_10) > 2000)
		{
			bVar2 = false;
		}
		if (bVar2)
		{
			PAD::DISABLE_CONTROL_ACTION(0, 130948705, true);
			PAD::DISABLE_CONTROL_ACTION(0, 42190210, true);
		}
	}
	return 0;
}

int func_161(var uParam0)
{
	return uParam0->f_57;
}

void func_162(int iParam0, int* iParam1, int iParam2, int iParam3, int iParam4, char* sParam5)
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

void func_163(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_242() != -1)
	{
		return;
	}
	if ((Global_36615 && func_375(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_376(iParam0);
	iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_377(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, iParam7);
	}
	else
	{
		iVar1 = -1;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (iVar1 < 0)
			{
				if (&Global_1347477->f_155[iVar2 /*6*/] == 0)
				{
					iVar1 = iVar2;
				}
			}
			iVar2++;
		}
		if (iVar1 >= 0)
		{
			func_378(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_377(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_164()
{
	if (func_242() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == joaat("player_zero"))
	{
		return 1;
	}
	return 0;
}

int func_165(int iParam0)
{
	if (func_166())
	{
		return 0;
	}
	return func_379(((*Global_1347702)[58 /*49*/])->f_15, 1);
}

int func_166()
{
	if (func_242() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == 11966224)
	{
		return 1;
	}
	return 0;
}

void func_167(int* iParam0, var uParam1)
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
	func_380(iParam0, uParam1, 1);
	func_33(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY((*uParam1)[iVar0 /*17*/], &Var22, 17);
		iVar0++;
	}
}

int func_168()
{
	switch (iLocal_1358)
	{
		case 0:
			if (!func_92(&uLocal_894))
			{
				func_381(&uLocal_894, 0);
			}
			else if (func_140(0f, 1, &(uLocal_1121[0]), 1))
			{
				if (func_3(iLocal_238, 16))
				{
					if (func_114(&uLocal_894) > 1f)
					{
						func_141(Global_35, &(uLocal_1121[0]), func_73("DISARM_RESP"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_1358++;
					}
				}
				else if (func_114(&uLocal_894) > 3f)
				{
					func_141(Global_35, &(uLocal_1121[0]), func_73("FINAL_KILL"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_1358++;
				}
			}
			else
			{
				func_93(&uLocal_894);
			}
			break;
		case 1:
			if (func_140(0f, 1, &(uLocal_1121[0]), 1) && func_140(0f, 1, Global_35, 1))
			{
				if (func_3(iLocal_238, 16))
				{
					switch (func_2())
					{
						case 76:
							func_345(&(uLocal_1121[0]), "GENERIC_INSULT_HIGH_MALE", 291934926, 0, 1, &((Local_239[0 /*32*/])->f_23), 1, 1);
							break;
						case 92:
							func_345(&(uLocal_1121[0]), "GENERIC_ANGRY_SHOUT", 291934926, 0, 1, &((Local_239[0 /*32*/])->f_23), 1, 1);
							break;
					}
					iLocal_1358++;
				}
				else
				{
					iLocal_1358 = 3;
				}
			}
			break;
		case 2:
			if (func_140(0f, 1, &(uLocal_1121[0]), 1) && func_140(0f, 1, Global_35, 1))
			{
				func_141(Global_35, &(uLocal_1121[0]), func_73("FINAL_DISARM"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_1358++;
			}
			break;
		case 3:
			return 1;
	}
	return 0;
}

void func_169()
{
	int iVar0;
	int iVar1;

	func_121(Local_19.f_2);
	func_121(Local_19.f_3);
	func_121(Local_27);
	func_121(Local_27.f_1);
	func_121(Local_27.f_2);
	func_121(Local_27.f_3);
	iVar0 = 2;
	while (iVar0 <= 13)
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(uLocal_1121[iVar0]), false);
		TASK::OPEN_SEQUENCE_TASK(&iVar1);
		TASK::_TASK_SMART_FLEE_STYLE_COORD(0, Local_35.f_51, 3, 0, 1000f, -1, 0);
		func_327(&(uLocal_1121[iVar0]), &iVar1, 0f, 0.5f, 1, 1);
		iVar0++;
	}
	func_49();
	func_382(1077936128);
}

int func_170()
{
	if (!func_145())
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_1121[0])) && func_125(&(uLocal_1121[0]), 1, 1) < 100f)
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_1121[1])) && func_125(&(uLocal_1121[1]), 1, 1) < 100f)
	{
		return 0;
	}
	return 1;
}

int func_171()
{
	if ((ENTITY::DOES_ENTITY_EXIST(Local_35.f_5.f_10) && Local_35.f_5.f_10 != &uLocal_1121[0]) && Local_35.f_5.f_10 != &uLocal_1121[1])
	{
		return 1;
	}
	return 0;
}

int func_172()
{
	if (!func_383(Global_1395482->f_1))
	{
		return 0;
	}
	return func_384(Global_1395482->f_1, 32);
}

bool func_173(int iParam0)
{
	if (func_60(iParam0, 1))
	{
		return false;
	}
	return (1 == func_385(iParam0) || 2 == func_385(iParam0));
}

float func_174(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

var func_175(char* sParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_176(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
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
	return MISC::_CREATE_VAR_STRING(2, func_386(sParam1));
}

bool func_177(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

char* func_178(int iParam0)
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

void func_179(int iParam0, int iParam1)
{
	if (!func_223(iParam0))
	{
		return;
	}
	((*Global_1310750)[iParam0 /*111*/])->f_1 = (((*Global_1310750)[iParam0 /*111*/])->f_1 || iParam1);
}

void func_180(int iParam0, bool bParam1)
{
	if (func_78(iParam0, 0, 1))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
		func_387(iParam0, 1088421888, 0, 0);
		if (!bParam1)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
		}
	}
}

int func_181(var uParam0, var uParam1)
{
	if (func_60(uParam0->f_3, 16777216))
	{
		if (func_388(*uParam1) != -1 || ENTITY::GET_ENTITY_MODEL(*uParam1) == joaat("g_m_m_unibrontegoons_01"))
		{
			return 1;
		}
	}
	return 0;
}

void func_182(var uParam0)
{
	PED::SET_PED_CONFIG_FLAG(*uParam0, 6, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 4, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 494, true);
}

float func_183(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_184(int iParam0, float fParam1, float fParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	float fVar2;

	if (!Global_1935630->f_12 && (!bParam4 || func_78(iParam0, 0, 1)))
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
			fVar2 = func_183(fParam2 >= 0f, fParam2, BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), Global_36));
			if (fVar2 > 25f && ENTITY::IS_ENTITY_OCCLUDED(iParam0))
			{
				func_389(&iParam0);
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

void func_185(var uParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_171))
	{
		func_390(uParam0->f_171);
		POPULATION::_0xA1CFB35069D23C23(uParam0->f_171);
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_171);
	}
	if (uParam0->f_51.f_7 != 0)
	{
		GRAPHICS::DESTROY_TRACKED_POINT(uParam0->f_51.f_7);
		uParam0->f_51.f_7 = 0;
	}
	func_391(uParam0);
	func_392(uParam0);
	func_393(uParam0);
	if (!func_394(uParam0))
	{
		if (VOLUME::_0xF6A8A652A6B186CD(uParam0->f_51.f_11))
		{
			VOLUME::_0xFDFECC6EE4491E11(uParam0->f_51.f_11);
		}
		func_279(uParam0->f_51, 0);
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_51.f_6))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_51.f_6));
	}
	if (uParam0->f_48)
	{
		func_395();
	}
	if (!func_396(uParam0->f_3) && !func_60(uParam0->f_3, 256))
	{
		func_397(uParam0->f_3, 1, 0, 15, 0, 0, 0, 1);
	}
	func_398(uParam0->f_173);
	func_398(uParam0->f_172);
}

void func_186(var uParam0)
{
	if (MAP::DOES_BLIP_EXIST(uParam0->f_181))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_181));
	}
}

int func_187(int iParam0, int iParam1)
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

void func_188(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_242() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

void func_189(var uParam0, var uParam1)
{
	if (func_75(uParam1, 4))
	{
		if (!func_399(uParam0->f_1))
		{
			func_198(uParam1, 4);
		}
	}
}

void func_190()
{
	CAM::_0x88544C0E3291DCAE(1);
	func_395();
}

char* func_191(var uParam0, var uParam1)
{
	switch (uParam0->f_3)
	{
		case 0:
			if (uParam0->f_69)
			{
				return "DUEL_OBJ_FILL";
			}
			else
			{
				return "DUEL_OBJ_FILL_ALT";
			}
			break;
		case 1:
			if (uParam0->f_69)
			{
				return "DUEL_OBJ_DRAW";
			}
			else
			{
				return "DUEL_OBJ_DRAW_ALT";
			}
			break;
		case 2:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_36)))
			{
				return func_400(uParam1->f_36);
			}
			else
			{
				return "DUEL_OBJ_FIRE";
			}
			break;
	}
	return "";
}

void func_192(char* sParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	Var0.f_1 = sParam0;
	iVar2 = _NAMESPACE71::_0x4E88A65968A55C78(&Var0, iParam1);
	if (func_401(iVar2))
	{
		_NAMESPACE71::_0x2F901291EF177B02(iVar2, 0);
	}
}

void func_193()
{
	int iVar0;

	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1911643->f_3, 0);
	iVar0 = 0;
	while (iVar0 < &Global_1911643)
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(&(Global_1911643->f_5[iVar0 /*3*/]));
		iVar0++;
	}
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(Global_1911643->f_4);
	Global_1911643 = 0;
	Global_1911643->f_1 = 0;
}

void func_194()
{
}

void func_195(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_196(int iParam0, int iParam1)
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
	if (func_402(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_402(iVar0, 2))
	{
		if (PED::_0x3AA24CCC0D451379(iParam0))
		{
			return 0;
		}
	}
	if (func_402(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_402(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_402(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_402(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return 0;
		}
	}
	if (func_402(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_402(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

bool func_197(var uParam0, int iParam1)
{
	return (uParam0->f_88 && iParam1) != 0;
}

void func_198(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 - (uParam0->f_1 && iParam1));
}

void func_199(var uParam0, var uParam1, int iParam2)
{
	if (func_75(uParam1, 1024) || iParam2)
	{
		if (func_196(uParam0->f_3, 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
			{
				PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 136, false);
				func_403(uParam0->f_3, 0);
			}
		}
		func_198(uParam1, 1024);
	}
}

void func_200()
{
	func_404(Global_35, &(Global_1347400->f_46));
}

void func_201(var uParam0, int iParam1)
{
	uParam0->f_55 = iParam1;
}

int func_202(int iParam0)
{
	if (((func_203(iParam0, 1) && func_203(iParam0, 2)) && func_203(iParam0, 8)) && func_203(iParam0, 512))
	{
		return 1;
	}
	return 0;
}

bool func_203(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_204(int iParam0)
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

int func_205(bool bParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam0)
	{
		return func_405(Global_1359489->f_4);
	}
	PED::GET_GROUP_SIZE(func_406(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = PED::GET_PED_AS_GROUP_MEMBER(func_406(), iVar3);
		if (func_407(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

void func_206(char* sParam0, var uParam1)
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

int func_207(var uParam0)
{
	if (!func_408(uParam0->f_1))
	{
		return 0;
	}
	if (uParam0->f_12 != 0)
	{
		if (!func_408(uParam0->f_12))
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

Vector3 func_208(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 < 0)
	{
		return 0f, 0f, 0f;
	}
	if (!func_223(iParam0))
	{
		return 0f, 0f, 0f;
	}
	if (func_409(iParam0) == 0)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = (func_410(iParam0) + iParam1);
	if (iVar0 >= 892)
	{
		return 0f, 0f, 0f;
	}
	return *(Global_1310750->f_13358[iVar0 /*3*/]);
}

void func_209(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;

	if (func_60(iParam0, 32))
	{
		if (func_411(iParam0, uParam1->f_4, &(uParam1->f_12)))
		{
			if (bParam4)
			{
				vVar1 = { func_412(Global_35, &(uParam1->f_12)) };
				if (!func_213(vVar1))
				{
					*uParam1 = { vVar1 };
				}
			}
		}
	}
	if (bParam2)
	{
		func_413(uParam1, bParam2);
	}
	if (bParam3)
	{
		fVar4 = func_280(iParam0);
		iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(*uParam1, 0f, 0f, 0f, fVar4, fVar4, fVar4, func_281());
		if (func_414(Global_1310750[iParam0 /*111*/], 33554432))
		{
			func_283(iVar0, func_282(iParam0), 1, 0, 2, 0, -1082130432);
		}
		else
		{
			func_283(iVar0, func_282(iParam0), 1, 0, 8, 0, -1082130432);
		}
		if (func_60(iParam0, 1))
		{
			func_415(*uParam1 + Vector(1f, 0f, 0f), 25f, "Beat Inner", 1, 0, 32, 0, -1082130432);
		}
	}
	func_416(iParam0);
}

int func_210(int iParam0, var uParam1)
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
			func_417(uParam1, *(((*Global_1310750)[iParam0 /*111*/])->f_4.f_4[iVar0 /*3*/]));
		}
		iVar0++;
	}
	if (func_82(iParam0, 16))
	{
		TASK::_0xB8E3486D107F4194(*uParam1, 55f);
		TASK::_0x827A58CED9D4D5B4(*uParam1, 180f);
		fVar2 = BUILTIN::TO_FLOAT(func_418(iParam0));
		fVar1 = 60f;
	}
	else
	{
		TASK::_0x65D281985F2BDFC2(*uParam1, 35f);
		TASK::_0x827A58CED9D4D5B4(*uParam1, 65f);
		fVar2 = BUILTIN::TO_FLOAT(func_418(iParam0));
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

void func_211(int iParam0, float fParam1, float fParam2, var uParam3, bool bParam4)
{
	switch (func_419(iParam0))
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
			if (!func_60(iParam0, 1))
			{
				if (func_82(iParam0, 2))
				{
				}
			}
			func_420(fParam1, fParam2, uParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*uParam3 = (*uParam3 * *uParam3);
			break;
		case 2:
			func_421(fParam1, fParam2, uParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*uParam3 = (*uParam3 * *uParam3);
			break;
		case 3:
			func_421(fParam1, fParam2, uParam3, iParam0, bParam4);
			*fParam1 = 7f;
			*fParam2 = (*fParam2 * *fParam2);
			*uParam3 = (*uParam3 * *uParam3);
			break;
		default:
			break;
	}
	if (func_173(iParam0))
	{
		*fParam2 = 40000f;
	}
}

Vector3 func_212(int iParam0, int iParam1, float fParam2, float fParam3)
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
	while (iVar0 < func_409(iParam1))
	{
		if (!func_422(iParam1, iVar0))
		{
			vVar4 = { func_208(iParam1, iVar0) };
			if (!func_213(vVar4))
			{
				fVar8 = BUILTIN::VDIST(Global_36, vVar4);
				if (func_218(fVar8, iParam1))
				{
					*iParam0 = 0;
				}
				if (fVar8 < fVar7)
				{
					if (func_423(iParam1, vVar4, fParam2, fParam3))
					{
						fVar7 = BUILTIN::VDIST(Global_36, vVar4);
						vVar1 = { vVar4 };
					}
				}
			}
		}
		iVar0++;
	}
	if (!func_213(vVar4))
	{
	}
	return vVar1;
}

int func_213(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_214(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4, int iParam5)
{
	if (uParam0->f_8 >= iParam4)
	{
		if (bParam3)
		{
			_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
			func_37("BEAT_FAIL", 5000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam2 = 1;
	}
	*uParam1 = iParam5;
	uParam0->f_8++;
	return 0;
}

int func_215(int iParam0, vector3 vParam1)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	while (iVar0 < func_409(iParam0))
	{
		vVar1 = { func_208(iParam0, iVar0) };
		if (func_352(vVar1, vParam1, 1056964608, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_216(var uParam0)
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

int func_217(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;

	vVar2 = { *uParam0 };
	func_308(Global_35, *uParam0, &(uParam0->f_37), 1061158912, 0, 0);
	if (func_309(&(uParam0->f_37), 500))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (!func_213(*(uParam0->f_12[iVar0 /*3*/])))
			{
				vVar5 = { *(uParam0->f_12[iVar0 /*3*/]) };
				vVar8 = { MISC::_0x83ACC65D9ACEC5EF(Global_36, vVar2, vVar5, true) };
				if (BUILTIN::VDIST2(Global_36, vVar8) <= (35f * 35f) || BUILTIN::VDIST2(Global_36, *(uParam0->f_12[iVar0 /*3*/])) <= (80f * 80f))
				{
					if (bParam4)
					{
						iVar1 = func_424(uParam0);
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
	return func_214(uParam0, uParam1, uParam2, bParam3, 16, 1000);
}

int func_218(float fParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;

	fVar3 = (fParam0 * fParam0);
	func_211(iParam1, &fVar0, &fVar1, &uVar2, 1);
	if (fVar3 > fVar1)
	{
		return 0;
	}
	if (func_60(iParam1, 1))
	{
		if (fVar3 < fVar0)
		{
			return 0;
		}
	}
	return 1;
}

int func_219(var uParam0, var uParam1)
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

int func_220(int iParam0, var uParam1, var uParam2, struct<7> Param3, bool bParam10)
{
	if (func_425(iParam0, *uParam2))
	{
		return 0;
	}
	if (!func_426(iParam0, uParam2))
	{
		return 0;
	}
	if (!func_427(Param3))
	{
		return 0;
	}
	if (bParam10)
	{
		if (!func_428(*uParam2, Global_35))
		{
			return 0;
		}
	}
	return 1;
}

int func_221(var uParam0)
{
	return uParam0->f_51.f_4;
}

int func_222(int iParam0, int iParam1, var uParam2)
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

bool func_223(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_224(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

void func_225(int iParam0, int iParam1)
{
	if (func_429(iParam0))
	{
		return;
	}
	if (func_430(iParam0) == iParam1)
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

void func_226(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 0);
	if (bParam3)
	{
		func_42(&iParam1, 8192);
	}
	if (bParam4)
	{
		POPULATION::_0x2161278C6322F740(iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, iParam0);
	}
}

void func_227(var uParam0, int iParam1)
{
	func_431(uParam0, iParam1);
}

bool func_228(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (((*uParam0)[iVar0 /*32*/])->f_1 != 0)
		{
			iVar1++;
			if (((*uParam0)[iVar0 /*32*/])->f_12 != 0)
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1 <= 15;
}

bool func_229(var uParam0)
{
	return func_402(*uParam0, 32);
}

float func_230(float fParam0)
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

bool func_231(var uParam0)
{
	return func_402(*uParam0, 1);
}

int func_232(var uParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_432(*uParam0, 0f, 0f, 0f))
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

void func_233(var uParam0, int iParam1, int iParam2, vector3 vParam3, var uParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10, int iParam11)
{
	if (uParam0->f_136 < 0 || uParam0->f_136 > 15)
	{
		return;
	}
	STREAMING::REQUEST_MODEL(iParam2, false);
	((*uParam0)[uParam0->f_136 /*9*/])->f_1 = iParam2;
	((*uParam0)[uParam0->f_136 /*9*/])->f_2 = { vParam3 };
	((*uParam0)[uParam0->f_136 /*9*/])->f_5 = uParam6;
	((*uParam0)[uParam0->f_136 /*9*/])->f_7 = iParam1;
	((*uParam0)[uParam0->f_136 /*9*/])->f_8 = iParam11;
	if (bParam7)
	{
		func_24(&(((*uParam0)[uParam0->f_136 /*9*/])->f_6), 4);
	}
	if (bParam8)
	{
		func_24(&(((*uParam0)[uParam0->f_136 /*9*/])->f_6), 8);
	}
	if (iParam9 == 1)
	{
		func_24(&(((*uParam0)[uParam0->f_136 /*9*/])->f_6), 1);
	}
	else if (iParam9 == 2)
	{
		func_24(&(((*uParam0)[uParam0->f_136 /*9*/])->f_6), 2);
	}
	if (bParam10)
	{
		func_24(&(((*uParam0)[uParam0->f_136 /*9*/])->f_6), 16);
	}
	uParam0->f_136++;
}

int func_234(var uParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;

	iVar0 = 0;
	while (iVar0 < uParam0->f_136)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0[iVar0 /*9*/]) && ((*uParam0)[iVar0 /*9*/])->f_1 != 0)
		{
			if (STREAMING::HAS_MODEL_LOADED(((*uParam0)[iVar0 /*9*/])->f_1))
			{
				bVar1 = func_3(((*uParam0)[iVar0 /*9*/])->f_6, 4);
				bVar2 = func_3(((*uParam0)[iVar0 /*9*/])->f_6, 8);
				bVar3 = func_3(((*uParam0)[iVar0 /*9*/])->f_6, 16);
				if (func_3(((*uParam0)[iVar0 /*9*/])->f_6, 1))
				{
					iVar4 = 1;
				}
				else if (func_3(((*uParam0)[iVar0 /*9*/])->f_6, 2))
				{
					iVar4 = 2;
				}
				else
				{
					iVar4 = 0;
				}
				if (((*uParam0)[iVar0 /*9*/])->f_8 != 0 && PED::_0x610438375E5D1801(((*uParam0)[iVar0 /*9*/])->f_8))
				{
					(*uParam0)[iVar0 /*9*/] = PED::_0xEAF682A14F8E5F53(((*uParam0)[iVar0 /*9*/])->f_8, ((*uParam0)[iVar0 /*9*/])->f_2, ((*uParam0)[iVar0 /*9*/])->f_5, bVar1, bVar2, 1, 0);
				}
				else
				{
					(*uParam0)[iVar0 /*9*/] = func_433(((*uParam0)[iVar0 /*9*/])->f_1, ((*uParam0)[iVar0 /*9*/])->f_2, ((*uParam0)[iVar0 /*9*/])->f_5, bVar1, bVar2, iVar4, bVar3, 1, 1, 0, 0, 0, 0);
				}
				if (bParam1)
				{
					ENTITY::SET_ENTITY_VISIBLE(uParam0[iVar0 /*9*/], false);
				}
			}
			return 0;
		}
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_136)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0[iVar0 /*9*/]))
			{
				ENTITY::SET_ENTITY_VISIBLE(uParam0[iVar0 /*9*/], true);
				ENTITY::_0xA91E6CF94404E8C9(uParam0[iVar0 /*9*/]);
			}
			iVar0++;
		}
	}
	return 1;
}

int func_235(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_136)
	{
		if (((*uParam0)[iVar0 /*9*/])->f_7 == iParam1)
		{
			return uParam0[iVar0 /*9*/];
		}
		iVar0++;
	}
	return 0;
}

void func_236(var uParam0, var uParam1, bool bParam2, bool bParam3)
{
	vector3 vVar0;

	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) };
		if (bParam2)
		{
			func_434(&vVar0, uParam1->f_22);
		}
		if (PED::IS_PED_HUMAN(*uParam0) && uParam1->f_10)
		{
			PED::_0x0FB1BA7FF73B41E1(*uParam0, uParam1->f_4, 0);
		}
		if (ENTITY::IS_ENTITY_DEAD(*uParam0))
		{
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
			EVENT::_0x9520175B35E2268D(*uParam0, 1);
			if (func_435(*uParam0))
			{
				FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(*uParam0, 48, true);
			}
		}
		if (!bParam3 && func_436(&(uParam1->f_22)))
		{
			PED::SET_PED_CAN_RAGDOLL(*uParam0, true);
			PED::SET_PED_TO_RAGDOLL(*uParam0, 1000, 1000, 1, false, false, false);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 186, !func_437(&(uParam1->f_22)));
			func_119(*uParam0, func_438(&(uParam1->f_22)), 0);
		}
		else
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(*uParam0);
		}
		if (func_439(&(uParam1->f_22)))
		{
			ENTITY::FREEZE_ENTITY_POSITION(*uParam0, true);
		}
		func_441(*uParam0, !func_440(&(uParam1->f_22)));
		PED::SET_PED_CONFIG_FLAG(*uParam0, 4, func_442(&(uParam1->f_22)));
		PED::SET_PED_CONFIG_FLAG(*uParam0, 6, func_443(&(uParam1->f_22)));
		if (func_444(&(uParam1->f_22)))
		{
			func_70(*uParam0, 1);
		}
		if (func_437(&(uParam1->f_22)))
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 186, false);
		}
	}
}

bool func_237(var uParam0)
{
	return func_402(*uParam0, 16);
}

void func_238(var uParam0)
{
	int iVar0;
	struct<9> Var1;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		*((*uParam0)[iVar0 /*9*/]) = { Var1 };
		iVar0++;
	}
	uParam0->f_136 = 0;
}

bool func_239(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_240(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("weapon_unarmed"));
}

int func_241(int iParam0)
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

int func_242()
{
	return Global_1572887->f_12;
}

int func_243(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_445(iParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_446((375 + iVar28), 1);
			if (func_447(iParam0, &Var0, iVar5, 0))
			{
				if (func_448(iParam0, &Var6, iVar5))
				{
					Var29 = { func_449(iParam0, Var0, iVar5, 0) };
					func_450(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_451(0))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
					{
						return 0;
					}
					func_452(WEAPON::_0x5C2EA6C44F515F34(iParam0), iParam1, iParam6);
					func_453(iParam0, iParam1);
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

void func_244(int iParam0, int iParam1, float fParam2)
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

bool func_245(bool bParam0)
{
	return WEAPON::_0x1F7977C9101F807F(WEAPON::_0x5C2EA6C44F515F34(bParam0));
}

int func_246(int iParam0, var uParam1)
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

var func_247(char* sParam0, char* sParam1, char* sParam2, int iParam3)
{
	char cVar0[64];
	char cVar8[32];

	StringCopy(&cVar0, "RE_", 64);
	StringCopy(&cVar8, sParam1, 32);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "_", 64);
	StringConCat(&cVar0, &cVar8, 64);
	if (iParam3 >= 0)
	{
		StringConCat(&cVar0, "_V", 64);
		StringIntConCat(&cVar0, iParam3, 64);
	}
	else
	{
		StringConCat(&cVar0, "_ALL", 64);
	}
	StringConCat(&cVar0, "_", 64);
	StringConCat(&cVar0, sParam2, 64);
	return func_454(cVar0);
}

Vector3 func_248(var uParam0)
{
	return uParam0->f_51;
}

void func_249(var uParam0, int iParam1)
{
	uParam0->f_21 = iParam1;
}

bool func_250()
{
	return &Global_1935436 == 2;
}

void func_251(int iParam0)
{
	if (iParam0 >= &Global_1935436)
	{
		return;
	}
	Global_1935436->f_1 = iParam0;
}

void func_252(int iParam0, int iParam1)
{
	float fVar0;

	if (MISC::GET_RANDOM_EVENT_FLAG())
	{
		return;
	}
	Global_17503.f_3++;
	(Global_17503.f_42[iParam0 /*8*/])->f_1++;
	if (func_60(iParam0, 2))
	{
		func_456(iParam0, func_455(iParam1));
	}
	else
	{
		func_458(iParam0, func_457());
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
	func_459(iParam0, ((*Global_1310750)[iParam0 /*111*/])->f_36, fVar0, 1, 0);
	func_460(iParam0, 0);
	func_461(iParam0);
	func_462(1);
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
	if (!func_60(iParam0, 16))
	{
		func_253(iParam0, 0, 0, 0, 0);
	}
}

void func_253(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	if (func_463() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0 /*9*/];
		if (((func_223(iVar1) && !func_60(iVar1, iParam2)) && (!bParam3 || !func_270(iVar1))) && (!bParam4 || !func_464(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_465(iVar0);
			}
		}
		iVar0++;
	}
}

int func_254(int iParam0)
{
	return ((*Global_1310750)[iParam0 /*111*/])->f_39;
}

void func_255(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_177 != -1 || func_414(Global_1310750[uParam0->f_3 /*111*/], 16777216))
	{
		if (bParam2)
		{
			if (func_60(uParam0->f_3, 1073741824))
			{
				func_466(2, -1, 0, 0, 0);
			}
			else
			{
				func_466(1, -1, 0, 0, 0);
			}
		}
		else if (bParam1)
		{
			if (uParam0->f_45)
			{
				func_466(8, -1, 0, 0, 0);
			}
		}
		if (uParam0->f_177 != -1)
		{
			if (bParam2)
			{
				if (!func_467(1, uParam0->f_177))
				{
					func_468(16, uParam0->f_177);
					func_469(1, uParam0->f_177);
				}
				COMPENDIUM::COMPENDIUM_GANG_ENCOUNTERED(func_470(uParam0->f_177));
			}
		}
	}
	else if (bParam2 || (bParam1 && uParam0->f_45))
	{
		func_466(8, -1, 0, 0, 0);
	}
}

int func_256()
{
	if (func_240(Global_1935630->f_44))
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
		else if (func_471())
		{
			return 1;
		}
	}
	return 0;
}

bool func_257(int iParam0, int iParam1, bool bParam2, int iParam3)
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

float func_258(var uParam0, bool bParam1)
{
	float fVar0;

	if (uParam0->f_119 == -1f)
	{
		if (func_60(uParam0->f_3, 1024))
		{
			fVar0 = 95f;
		}
		else if (func_60(uParam0->f_3, 2048))
		{
			fVar0 = 80f;
		}
		else if (func_60(uParam0->f_3, 4096))
		{
			fVar0 = 65f;
		}
		else if (func_60(uParam0->f_3, 8192))
		{
			fVar0 = 55f;
		}
		else if (func_60(uParam0->f_3, 16384))
		{
			fVar0 = 30f;
		}
		else
		{
			fVar0 = 85f;
		}
		if (func_60(uParam0->f_3, 1))
		{
		}
		else if (func_60(uParam0->f_3, 2))
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

int func_259(var uParam0, float fParam1, int iParam2, int iParam3, float fParam4, int iParam5, int iParam6)
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
			else if (func_472(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
					if (func_473(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
		uParam0->f_7 = (func_315() - uParam0->f_8);
	}
	else
	{
		uParam0->f_7 = 0f;
	}
	return 1;
}

int func_260(var uParam0, int iParam1, float fParam2)
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
	func_84(uParam0);
	return 1;
}

bool func_261()
{
	return (Global_1894899 & 1 != 0 && func_2() != -1);
}

int func_262(var uParam0, float fParam1)
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

int func_263(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_474(bParam1, iParam2, bParam3);
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

int func_264(int iParam0)
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
	iVar0 = func_476(func_475());
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

bool func_265(int iParam0, int iParam1)
{
	return (func_254(iParam0) && iParam1) != 0;
}

int func_266(int iParam0)
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
	if (iParam0 & 1 == 1 && func_477(iVar3))
	{
		return 1;
	}
	if (iParam0 & 2 == 2 && func_478(iVar3))
	{
		return 1;
	}
	if (iParam0 & 4 == 4 && func_479(iVar3))
	{
		return 1;
	}
	if (iParam0 & 8 == 8 && func_480(iVar3))
	{
		return 1;
	}
	if (iParam0 & 16 == 16 && func_481(iVar3))
	{
		return 1;
	}
	if (iParam0 & 32 == 32 && func_482(iVar3))
	{
		return 1;
	}
	if (iParam0 & 64 == 64 && func_483(iVar3))
	{
		return 1;
	}
	return 0;
}

int func_267(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_484(bParam0, &uVar0, &uVar1))
	{
		return 1;
	}
	return 0;
}

int func_268(int iParam0)
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

int func_269(int iParam0, bool bParam1, int iParam2)
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
		if (func_485())
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
		iVar0 = func_486(&(Global_1898164->f_1[0 /*5*/]));
		if (func_487(iVar0) && func_488(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_489(&(Global_1898164->f_1[0 /*5*/])))
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

int func_270(int iParam0)
{
	if (!func_223(iParam0))
	{
		return 0;
	}
	if (func_490(64) && func_491(iParam0))
	{
		return 1;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_46;
}

int func_271(int iParam0, bool bParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0) || !bParam1)
		{
			iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0);
			if (INTERIOR::IS_VALID_INTERIOR(iVar0))
			{
				if (func_492(iVar0) || func_493(iVar0))
				{
					return 0;
				}
				return 1;
			}
		}
	}
	return 0;
}

bool func_272()
{
	return Global_1894899 & 4 != 0;
}

int func_273(int iParam0)
{
	if (!func_494(iParam0))
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

int func_274(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return 0;
	}
	return 1;
}

int func_275(vector3 vParam0, int iParam3)
{
	if (!func_274(iParam3))
	{
		return 0;
	}
	if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1392194)[iParam3 /*10*/])->f_5))
	{
		return VOLUME::_0xF256A75210C5C0EB(((*Global_1392194)[iParam3 /*10*/])->f_5, vParam0);
	}
	return 0;
}

bool func_276(vector3 vParam0)
{
	float fVar0;

	if (func_213(vParam0))
	{
		return false;
	}
	fVar0 = func_183(func_261(), 6f, 22f);
	return VOLUME::_0x769BB7626B8CDB06(vParam0, fVar0, 1, 0, 16384);
}

int func_277(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
						func_93(uParam0);
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
		func_93(uParam0);
		return 1;
	}
	if (!bParam4)
	{
		if (!func_92(uParam0))
		{
			return 0;
		}
		else if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) || AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
		{
			return 1;
		}
		if (!func_291(uParam0, fParam2))
		{
			return 1;
		}
		if (func_92(uParam0))
		{
			func_195(uParam0);
		}
	}
	return 0;
}

bool func_278(vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, 16384);
}

void func_279(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_213(vParam0))
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
			if (func_352(vVar2, vParam0, 2f, 1))
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

float func_280(int iParam0)
{
	if (!func_223(iParam0))
	{
		return 0f;
	}
	if (!func_495(iParam0))
	{
		return 0f;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_44;
}

char* func_281()
{
	return "unnamed";
}

char* func_282(int iParam0)
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

int func_283(int iParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, float fParam6)
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
	uVar6 = func_415(vVar0, vVar3.x, uParam1, bParam2, iParam3, iParam4, bParam5, fParam6);
	return uVar6;
}

int func_284()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

void func_285(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_24(iParam0, 134217728);
	}
	else
	{
		func_42(iParam0, 134217728);
	}
}

int func_286(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_287(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam2->f_5)
	{
		func_496(iParam2, 1, iVar0);
	}
	if (!Global_1935630->f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			iParam2->f_12 = fParam5;
		}
		else
		{
			iParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!iParam2->f_1 & 128 != 0)
		{
			if (func_497(iParam0, iParam2))
			{
				*uParam3 = 128;
				func_498(iParam0, iParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (func_499(iParam0, iParam2))
				{
					*uParam3 = 8;
					func_498(iParam0, iParam2, *uParam3);
					return 1;
				}
				else if (func_500(iParam0, iParam1, iParam2))
				{
					*uParam3 = 8;
					func_498(iParam0, iParam2, *uParam3);
					return 1;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (func_501(iParam0, iParam2))
				{
					*uParam3 = 64;
					func_498(iParam0, iParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_26 && func_263(PLAYER::PLAYER_ID(), 0, 1, iParam2->f_1 & 524288 == 0))
		{
			if (!iParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_498(iParam0, iParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_502(iParam2, 1065353216))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (func_503(Global_35, iParam0, iParam2))
					{
						*uParam3 = 4;
						func_498(iParam0, iParam2, *uParam3);
						return 1;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (func_504(Global_35, iParam0, iParam2))
					{
						*uParam3 = 256;
						func_498(iParam0, iParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_505(Global_35, iParam0, iParam2, 0))
				{
					*uParam3 = 16;
					func_498(iParam0, iParam2, *uParam3);
					return 1;
				}
			}
			else if (func_505(Global_35, iParam0, iParam2, 1))
			{
				*uParam3 = 16;
				func_498(iParam0, iParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (func_506(iParam0, iParam2))
				{
					*uParam3 = 32;
					func_498(iParam0, iParam2, *uParam3);
					return 1;
				}
			}
		}
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || iParam2->f_12 < 20f)
			{
				if (func_507(&iParam0, iParam2))
				{
					*uParam3 = 4096;
					func_498(iParam0, iParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (func_508(iParam2, 4000))
				{
					if ((func_509(iParam0, Global_1935630->f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && func_510(iParam2, iParam0)) && func_511(iParam2, iParam0))
					{
						*uParam3 = 2;
						func_498(iParam0, iParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4f)
			{
				if ((func_509(iParam0, Global_1935630->f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && func_510(iParam2, iParam0)) && func_511(iParam2, iParam0))
				{
					*uParam3 = 2;
					func_498(iParam0, iParam2, *uParam3);
					return 1;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*iParam2 & 131072 == 0)
						{
							if (func_512(iParam0, Global_1935630->f_41))
							{
								func_513();
								*uParam3 = 2;
								func_498(iParam0, iParam2, *uParam3);
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
					if (*iParam2 & 131072 == 0)
					{
						if (func_512(iParam0, Global_1935630->f_41))
						{
							func_513();
							*uParam3 = 2;
							func_498(iParam0, iParam2, *uParam3);
							return 1;
						}
					}
				}
			}
			if (iParam2->f_12 < 10f)
			{
				if (func_514(iParam2, iParam0) || (iParam2->f_9 > 0 && (func_284() - iParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_513();
						*uParam3 = 2;
						func_498(iParam0, iParam2, *uParam3);
						return 1;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*iParam2 & 131072 == 0)
				{
					if (func_515())
					{
						if (func_512(iParam0, Global_1935630->f_42))
						{
							func_513();
							*uParam3 = 2;
							func_498(iParam0, iParam2, *uParam3);
							return 1;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & 1024 != 0)
		{
			if (func_516(iParam2, iParam0))
			{
				*uParam3 = 1024;
				func_498(iParam0, iParam2, *uParam3);
				return 1;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & 2048 != 0)
			{
				if (func_517(iParam0, iParam1, iParam2))
				{
					*uParam3 = 2048;
					func_498(iParam0, iParam2, *uParam3);
					return 1;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (func_518(iParam0, iParam2))
					{
						*uParam3 = 8192;
						func_498(iParam0, iParam2, *uParam3);
						return 1;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (func_519(iParam0, iParam2))
				{
					*uParam3 = 32768;
					func_498(iParam0, iParam2, *uParam3);
					return 1;
				}
			}
		}
		if (iParam2->f_12 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (func_520(iParam2, 4000))
				{
					if (func_521(&iParam0, iParam2))
					{
						*uParam3 = 512;
						func_498(iParam0, iParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (func_522(iParam0, iParam2))
				{
					*uParam3 = 65536;
					iParam2->f_4 = 0;
					func_498(iParam0, iParam2, *uParam3);
					return 1;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_523(iParam2, iParam0))
			{
				*uParam3 = 1;
				func_498(iParam0, iParam2, *uParam3);
				return 1;
			}
		}
	}
	return 0;
}

bool func_288()
{
	int iVar0;
	int iVar1;

	iVar0 = ITEMSET::CREATE_ITEMSET(false);
	LAW::_0x0C392DB374655176(Global_36, 50f, iVar0);
	iVar1 = ITEMSET::GET_ITEMSET_SIZE(iVar0);
	ITEMSET::_0x20A4BF0E09BEE146(iVar0);
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return iVar1 > 1;
}

bool func_289(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_290(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_315() - fParam1);
	func_524(uParam0, 1);
	func_525(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_291(var uParam0, float fParam1)
{
	if (!func_92(uParam0))
	{
		return 0;
	}
	if (func_136(uParam0) > fParam1)
	{
		return 1;
	}
	return 0;
}

int func_292(int iParam0)
{
	return iParam0;
}

void func_293(int iParam0)
{
	if (!func_526(iParam0))
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

bool func_294(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4)
{
	if (bParam2)
	{
		if (!func_335(iParam0, iParam1, 0f))
		{
			return false;
		}
	}
	if (!func_527(iParam0, iParam1, fParam3, 1))
	{
		return false;
	}
	if (iParam4 && ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		return PED::_0x9D9473CB82D83A30(iParam0, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 0) == 1;
	}
	return PED::_0x7F9B9791D4CB71F6(iParam0, iParam1, bParam2, 0) == 1;
}

void func_295(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	bool bVar0;
	int iVar1;

	if (iParam1 >= *uParam0 || iParam1 < 0)
	{
		iParam1 = 0;
	}
	if (iParam2 >= *uParam0 || iParam2 < iParam1)
	{
		iParam2 = (*uParam0 - 1);
	}
	iVar1 = iParam1;
	while (iVar1 <= iParam2)
	{
		if (func_528((*uParam0)[iVar1], iParam3, iParam4, iParam5, 0, bParam6, 0, 0))
		{
			bVar0 = true;
		}
		else
		{
			iVar1++;
		}
	}
	if (!bVar0)
	{
		func_32();
	}
}

int func_296(int iParam0, int iParam1, int iParam2)
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

var func_297(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	var uVar1;

	iVar0 = iParam9;
	func_529(&iVar0);
	if (func_3(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	uVar1 = func_530(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_3(iVar0, 134217728))
	{
		func_531(iParam1, uParam3, uParam0);
	}
	if (!*uParam4)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 25))
		{
			if (MISC::IS_BIT_SET(*iParam1, 24))
			{
				if (!func_532(558))
				{
					func_134(558, 0);
				}
				MISC::SET_BIT(iParam1, 24);
				MISC::SET_BIT(iParam1, 25);
			}
		}
	}
	return uVar1;
}

int func_298(int iParam0)
{
	switch (iLocal_873)
	{
		case 76:
			switch (iParam0)
			{
				case 0:
					return 2;
				case 1:
					return 4;
				case 2:
					return 7;
				case 3:
					return 9;
				default:
					break;
			}
			break;
		case 92:
			switch (iParam0)
			{
				case 0:
					return 3;
				case 1:
					return 6;
				case 2:
					return 10;
				case 3:
					return 11;
				default:
					break;
			}
			break;
	}
	return -1;
}

char* func_299(int iParam0, int iParam1)
{
	switch (iLocal_873)
	{
		case 76:
			switch (iParam0)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							return "GENERIC_SHOCKED_MED";
						case 1:
							return "GENERIC_SHOCKED_MED";
						case 2:
							return "GENERIC_EXCITING_EVENT_COMMENT";
						default:
							break;
					}
					break;
				case 1:
					switch (iParam1)
					{
						case 0:
							return "GENERIC_CHEER_ON";
						case 1:
							return "COME_SEE_THIS";
						case 2:
							return "GENERIC_CHEER_ON";
						default:
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 0:
							return "GENERIC_CHEER_ON";
						case 1:
							return "GENERIC_CHEER_ON";
						case 2:
							return "GENERIC_CHEER";
						default:
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 0:
							return "GENERIC_CHEER_ON";
						case 1:
							return "GENERIC_CHEER_ON";
						case 2:
							return "GENERIC_CHEER";
						default:
							break;
					}
					break;
			}
			break;
		case 92:
			switch (iParam0)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							return "GENERIC_CHEER";
						case 1:
							return "GENERIC_CHEER_ON";
						case 2:
							return "GENERIC_EXCITING_EVENT_COMMENT";
						default:
							break;
					}
					break;
				case 1:
					switch (iParam1)
					{
						case 0:
							return "GENERIC_CHEER";
						case 1:
							return "GENERIC_CHEER_ON";
						case 2:
							return "GENERIC_MOCK";
						default:
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 0:
							return "GENERIC_CHEER_ON";
						case 1:
							return "GENERIC_CHEER_ON";
						case 2:
							return "GENERIC_CHEER";
						default:
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 0:
							return "GENERIC_SHOCKED_MED";
						case 1:
							return "GENERIC_CHEER_ON";
						case 2:
							return "GENERIC_EXCITING_EVENT_COMMENT";
						default:
							break;
					}
					break;
			}
			break;
	}
	return "";
}

char* func_300(int iParam0)
{
	if (func_533(iParam0))
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

void func_301(int* iParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = uParam1;
	iParam0->f_7 = iParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = sParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (func_96(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				func_534(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_535(iParam0->f_6, iParam0->f_5, 0);
			}
			func_536(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		func_537(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

void func_302(int* iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_538(iParam0, 4))
		{
			func_97(&(iParam0->f_6), 1, 1);
			func_539(iParam0, 4);
		}
	}
	else if (func_538(iParam0, 4))
	{
		func_540(iParam0, 4);
		func_539(iParam0, 14);
	}
}

void func_303(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_195(&(uParam0->f_18));
}

void func_304(int iParam0)
{
	func_334(0, iParam0);
	func_334(1, iParam0);
	func_334(2, iParam0);
}

Vector3 func_305(int iParam0)
{
	switch (func_2())
	{
		case 76:
			switch (iParam0)
			{
				case 0:
					return -348.5889f, 744.9133f, 116.0824f;
				case 1:
					return -342.713f, 729.3618f, 116.3879f;
				default:
					break;
			}
			break;
		case 92:
			switch (iParam0)
			{
				case 0:
					return 2957.778f, 510.3161f, 44.40849f;
				case 1:
					return 2957.107f, 526.4081f, 43.62538f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_306(vector3 vParam0, vector3 vParam3, float fParam6, float fParam7, float fParam8, char* sParam9)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		sParam9 = func_281();
	}
	return VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0 - vParam3 * Vector(0.5f, 0.5f, 0.5f) + vParam3, 0f, 0f, -func_541(vParam0, vParam3), fParam6, (BUILTIN::VDIST(vParam0, vParam3) + (fParam8 * 2f)), fParam7, sParam9);
}

void func_307()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;

	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS((Local_239[0 /*32*/])->f_6, (Local_239[1 /*32*/])->f_6, true);
	fVar1 = (((Local_239[0 /*32*/])->f_6 + (Local_239[1 /*32*/])->f_6) / 2f);
	fVar2 = (((Local_239[0 /*32*/])->f_6.f_1 + (Local_239[0 /*32*/])->f_6.f_1) / 2f);
	fVar3 = (((Local_239[0 /*32*/])->f_6.f_2 + (Local_239[0 /*32*/])->f_6.f_2) / 2f);
	vVar4 = { fVar1, fVar2, fVar3 };
	fVar0 = (fVar0 + 10f);
	iLocal_1151 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar4, 0f, 0f, (Local_239[0 /*32*/])->f_9, 10f, fVar0, 10f, "REDW - volCompanionStayOut");
	POPULATION::_0xB56D41A694E42E86(iLocal_1151, 0, 0, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_1151, 0, 0, 0, -1, -1, 0);
	func_542(iLocal_1151, 0);
	func_543(iLocal_1151, 0, 1, 0, 0, 0);
	func_544(iLocal_1151, 0);
	func_341(0, func_205(1), Local_35.f_171, vVar4, 1069547520, 1075838976, 1056964608, 0, 1106247680, 1);
	func_343(0);
}

void func_308(int iParam0, vector3 vParam1, var uParam4, float fParam5, bool bParam6, int iParam7)
{
	float fVar0;

	fVar0 = func_183(bParam6, iParam7, BUILTIN::VDIST(vParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true, false)));
	if (!uParam4->f_1)
	{
		if (fVar0 < uParam4->f_2 || (func_428(vParam1, iParam0) && ENTITY::GET_ENTITY_SPEED(iParam0) > fParam5))
		{
			*uParam4 = func_284();
			uParam4->f_2 = func_154(iParam0, vParam1, 1);
			uParam4->f_1 = 1;
		}
	}
	else if (fVar0 > uParam4->f_2 || (!func_428(vParam1, iParam0) && ENTITY::GET_ENTITY_SPEED(iParam0) > fParam5))
	{
		*uParam4 = func_284();
		uParam4->f_2 = func_154(iParam0, vParam1, 1);
		uParam4->f_1 = 0;
	}
}

int func_309(var uParam0, int iParam1)
{
	if (uParam0->f_1 == 1)
	{
		return (func_284() - *uParam0) >= iParam1;
	}
	return 0;
}

int func_310(var uParam0, float fParam1, int iParam2, float fParam3, int iParam4, float fParam5, bool bParam6, float fParam7, var uParam8, float fParam9, bool bParam10, bool bParam11)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	float fVar4;

	bVar1 = false;
	fVar2 = func_258(uParam0, bVar1);
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
	if (uParam0->f_178 && func_256())
	{
		bVar1 = true;
		fVar3 = func_183(bVar1, fParam9, fVar2);
	}
	if (uParam0->f_48 && (!bParam10 || (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_173) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_173, true, 0))))
	{
		if (iParam4 > 1)
		{
			iVar0 = 0;
			while (iVar0 < uParam0->f_121)
			{
				func_259(uParam0->f_121[iVar0 /*9*/], fVar3, 1082130432, 1, 90f, 0, 0);
				iVar0++;
			}
		}
		else
		{
			func_259(uParam0->f_121[0 /*9*/], fVar3, 1082130432, 1, 90f, 0, 0);
		}
		if (func_260(&(uParam0->f_121), iParam4, fParam1))
		{
			func_84(&(uParam0->f_121));
			if (uParam0->f_186)
			{
				STATS::_0xB2A38826E5886E83(func_187(uParam0->f_3, uParam0->f_185), 0);
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
					if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_173) && !(uParam8 && PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true)))
					{
						if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_173, false, 0))
						{
							return 0;
						}
					}
					if (bParam6)
					{
						func_83(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
					}
				}
				func_84(&(uParam0->f_121));
				if (uParam0->f_186)
				{
					STATS::_0xB2A38826E5886E83(func_187(uParam0->f_3, uParam0->f_185), 0);
				}
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_311(int iParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return vVar0;
	}
	vVar6 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	func_545(vVar6);
	vVar6 = { FtoV((ENTITY::GET_ENTITY_SPEED(iParam0) * fParam1)) * vVar6 };
	vVar3 = { vVar0 + vVar6 };
	return vVar3;
}

int func_312()
{
	switch (iLocal_1348)
	{
		case 0:
			if (func_140(-5f, 1, 0, 0))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_1121[0]), func_546(1)))
				{
					func_117(-2097881464, &(uLocal_1121[1]), 1);
					func_141(&(uLocal_1121[0]), &(uLocal_1121[1]), Local_1189[1 /*4*/], 0, 70f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
					iLocal_1348++;
				}
			}
			break;
		case 1:
			if (func_140(0f, 1, &(uLocal_1121[0]), 1) && func_140(0f, 1, &(uLocal_1121[1]), 1))
			{
				func_141(&(uLocal_1121[1]), &(uLocal_1121[0]), Local_1189[2 /*4*/], 0, 70f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				iLocal_1348++;
			}
			break;
		case 2:
			if (func_140(-5f, 1, 0, 0))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_1121[0]), func_546(1)))
				{
					func_117(2001176446, &(uLocal_1121[0]), 1);
					func_141(&(uLocal_1121[0]), &(uLocal_1121[1]), Local_1189[3 /*4*/], 0, 70f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
					iLocal_1348++;
				}
			}
			break;
		case 3:
			if (func_140(0f, 1, &(uLocal_1121[0]), 1) && func_140(0f, 1, &(uLocal_1121[1]), 1))
			{
				func_141(&(uLocal_1121[1]), &(uLocal_1121[0]), Local_1189[4 /*4*/], 0, 70f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				iLocal_1348++;
			}
			break;
		case 4:
			if (func_140(-6f, 1, 0, 0))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_1121[0]), func_546(1)))
				{
					func_117(2001176446, &(uLocal_1121[0]), 1);
					func_141(&(uLocal_1121[0]), &(uLocal_1121[1]), Local_1189[5 /*4*/], 0, 70f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
					iLocal_1348++;
				}
			}
			break;
		case 5:
			if (func_140(0f, 1, &(uLocal_1121[0]), 1) && func_140(0f, 1, &(uLocal_1121[1]), 1))
			{
				func_141(&(uLocal_1121[1]), &(uLocal_1121[0]), Local_1189[6 /*4*/], 0, 70f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				iLocal_1348++;
			}
			break;
		case 6:
			if (func_140(-5f, 1, 0, 0))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_1121[0]), func_546(1)))
				{
					if (!func_3(iLocal_238, 1073741824))
					{
						func_117(249295937, &(uLocal_1121[0]), 1);
						func_141(&(uLocal_1121[0]), &(uLocal_1121[1]), Local_1189[22 /*4*/], 0, 70f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
						func_24(&iLocal_238, 1073741824);
					}
					iLocal_1348++;
				}
			}
			break;
		case 7:
			return 1;
	}
	return 0;
}

int func_313()
{
	switch (iLocal_1348)
	{
		case 0:
			if (func_140(-5f, 1, 0, 0))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_1121[0]), func_546(1)))
				{
					func_117(-2097881464, &(uLocal_1121[1]), 1);
					func_141(&(uLocal_1121[1]), &(uLocal_1121[0]), Local_1189[0 /*4*/], 0, 70f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
					iLocal_1348++;
				}
			}
			break;
		case 1:
			if (func_140(-5f, 1, 0, 0))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_1121[0]), func_546(1)))
				{
					func_117(2001176446, &(uLocal_1121[0]), 1);
					func_141(&(uLocal_1121[0]), &(uLocal_1121[1]), Local_1189[1 /*4*/], 0, 70f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
					iLocal_1348++;
				}
			}
			break;
		case 2:
			if (func_140(-6f, 1, 0, 0))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_1121[0]), func_546(1)))
				{
					func_117(2001176446, &(uLocal_1121[0]), 1);
					func_141(&(uLocal_1121[0]), &(uLocal_1121[1]), Local_1189[3 /*4*/], 0, 70f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
					iLocal_1348++;
				}
			}
			break;
		case 3:
			if (func_140(0f, 1, &(uLocal_1121[0]), 1) && func_140(0f, 1, &(uLocal_1121[1]), 1))
			{
				func_141(&(uLocal_1121[1]), &(uLocal_1121[0]), Local_1189[4 /*4*/], 0, 70f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				iLocal_1348++;
			}
			break;
		case 4:
			if (func_140(-6f, 1, 0, 0))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_1121[0]), func_546(1)))
				{
					func_117(2001176446, &(uLocal_1121[0]), 1);
					func_141(&(uLocal_1121[0]), &(uLocal_1121[1]), Local_1189[5 /*4*/], 0, 70f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
					iLocal_1348++;
				}
			}
			break;
		case 5:
			if (func_140(0f, 1, &(uLocal_1121[0]), 1) && func_140(0f, 1, &(uLocal_1121[1]), 1))
			{
				func_141(&(uLocal_1121[1]), &(uLocal_1121[0]), Local_1189[6 /*4*/], 0, 70f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				iLocal_1348++;
			}
			break;
		case 6:
			if (func_140(-5f, 1, 0, 0))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_1121[0]), func_546(1)))
				{
					func_117(2001176446, &(uLocal_1121[0]), 1);
					func_141(&(uLocal_1121[0]), &(uLocal_1121[1]), Local_1189[7 /*4*/], 0, 70f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
					iLocal_1348++;
				}
			}
			break;
		case 7:
			if (func_140(0f, 1, &(uLocal_1121[0]), 1) && func_140(0f, 1, &(uLocal_1121[1]), 1))
			{
				func_141(&(uLocal_1121[1]), &(uLocal_1121[0]), Local_1189[8 /*4*/], 0, 70f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				iLocal_1348++;
			}
			break;
		case 8:
			if (func_140(-4f, 1, 0, 0))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_1121[0]), func_546(1)))
				{
					func_117(2001176446, &(uLocal_1121[0]), 1);
					func_141(&(uLocal_1121[0]), &(uLocal_1121[1]), Local_1189[9 /*4*/], 0, 70f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
					iLocal_1348++;
				}
			}
			break;
		case 9:
			if (func_140(0f, 1, &(uLocal_1121[0]), 1) && func_140(0f, 1, &(uLocal_1121[1]), 1))
			{
				func_141(&(uLocal_1121[1]), &(uLocal_1121[0]), Local_1189[10 /*4*/], 0, 70f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				iLocal_1348++;
			}
			break;
		case 10:
			if (func_140(-4f, 1, 0, 0))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_1121[0]), func_546(1)))
				{
					func_117(2001176446, &(uLocal_1121[0]), 1);
					func_141(&(uLocal_1121[0]), &(uLocal_1121[1]), Local_1189[11 /*4*/], 0, 70f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
					iLocal_1348++;
				}
			}
			break;
		case 11:
			if (func_140(0f, 1, &(uLocal_1121[0]), 1) && func_140(0f, 1, &(uLocal_1121[1]), 1))
			{
				func_141(&(uLocal_1121[1]), &(uLocal_1121[0]), Local_1189[12 /*4*/], 0, 70f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				iLocal_1348++;
			}
			break;
		case 12:
			if (func_140(-4f, 1, 0, 0))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_1121[0]), func_546(1)))
				{
					func_117(249295937, &(uLocal_1121[0]), 1);
					func_141(&(uLocal_1121[0]), &(uLocal_1121[1]), Local_1189[22 /*4*/], 0, 70f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
					func_24(&iLocal_238, 1073741824);
					iLocal_1348++;
				}
			}
			break;
		case 13:
			return 1;
	}
	return 0;
}

bool func_314(var uParam0)
{
	return func_289(*uParam0, 2);
}

float func_315()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_316(int iParam0, int iParam1, int iParam2)
{
	AUDIO::_0x36559148B78853B3(iParam0, iParam1, iParam2);
}

void func_317()
{
	_NAMESPACE71::_0xDD1232B332CBB9E7(4, 1, 0);
}

int func_318(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, bool bParam6)
{
	if (bParam6)
	{
		if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(iParam0, 0))
		{
			return 0;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		if (ANIMSCENE::_0x8D81E7824B7753F7(iParam0, sParam3, 1))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				if (!ANIMSCENE::GET_ANIM_SCENE_BOOL(iParam0, sParam4))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iParam0, sParam4, true, false);
				}
			}
		}
	}
	if (iParam5 || !ANIMSCENE::_0x1F0E401031E20146(iParam0, sParam2))
	{
		if (ANIMSCENE::_0x8D81E7824B7753F7(iParam0, sParam1, 1))
		{
			if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, sParam2))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_319(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, var uParam5, bool bParam6)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0) && uParam5)
	{
		return 1;
	}
	if (!ANIMSCENE::_0x25557E324489393C(iParam1))
	{
		return 1;
	}
	if (ANIMSCENE::_0xD8254CB2C586412B(iParam1, 0))
	{
		return 1;
	}
	if (!ANIMSCENE::_0x95531A4A20CCE7BC(iParam1, 0))
	{
		return 1;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		if (bParam6)
		{
			if (ANIMSCENE::_0x73616E64696C616E(iParam1, sParam2, 1, 0))
			{
				return 1;
			}
		}
		if (ANIMSCENE::_0x005E6F28DD7ED58D(iParam1, sParam2) || ANIMSCENE::_0xB89FCFF19DAFFF28(iParam1, sParam2))
		{
			return 1;
		}
	}
	if (iParam3 != 0 && ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, iParam3))
	{
		return 1;
	}
	if (fParam4 > 0f && ANIMSCENE::_0x3FBC3F51BF12DFBF(iParam1) >= fParam4)
	{
		return 1;
	}
	return 0;
}

bool func_320(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_321(int iParam0, int iParam1)
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

float func_322(int iParam0, int iParam1, bool bParam2, int iParam3)
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

void func_323()
{
	func_333(0, "RE_DB_CHALLENGE");
	if (func_133())
	{
		func_334(0, 1);
	}
	else
	{
		func_334(0, 0);
	}
	func_333(1, func_300(1));
	func_334(1, 1);
	func_334(2, 0);
}

void func_324(int iParam0, char* sParam1, bool bParam2)
{
	ANIMSCENE::SET_ANIM_SCENE_BOOL(iParam0, sParam1, bParam2, false);
}

int func_325(vector3 vParam0)
{
	if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vParam0)))
	{
		if (!INTERIOR::_ARE_COORDS_COLLIDING_WITH_EXTERIOR(vParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_326(int iParam0, int iParam1)
{
	func_547(iParam0, iParam1);
}

void func_327(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
{
	TASK::CLOSE_SEQUENCE_TASK(*iParam1);
	if (!bParam5 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam2 > 0f)
		{
			if (fParam3 < fParam2)
			{
				fParam3 = fParam2;
			}
			TASK::_TASK_PERFORM_SEQUENCE_2(iParam0, *iParam1, fParam2, fParam3);
		}
		else
		{
			TASK::TASK_PERFORM_SEQUENCE(iParam0, *iParam1);
		}
	}
	if (bParam4)
	{
		TASK::CLEAR_SEQUENCE_TASK(iParam1);
	}
}

int func_328(int iParam0)
{
	if (!WEAPON::IS_WEAPON_VALID(*iParam0))
	{
		return 0;
	}
	if (*iParam0 == joaat("weapon_unarmed"))
	{
		return 0;
	}
	if (WEAPON::_0xC75386174ECE95D5(*iParam0))
	{
		return 0;
	}
	if (WEAPON::_0xDDC64F5E31EEDAB6(*iParam0) || WEAPON::_0xC212F1D05A8232BB(*iParam0))
	{
		return 1;
	}
	return 0;
}

int func_329(int iParam0, int iParam1)
{
	var uVar0;

	return func_548(&uVar0, iParam0, iParam1);
}

void func_330(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

int func_331(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return 0;
	}
	if (func_549(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_550(iParam0))
	{
		return 0;
	}
	if (func_551(iParam0))
	{
		return 0;
	}
	if ((Global_1898164->f_163 && !func_552(iParam0, 1)) || func_553(32768))
	{
		if (!func_552(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return 0;
		}
	}
	if (!func_554())
	{
		return 0;
	}
	return 1;
}

void func_332(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_333(int iParam0, char* sParam1)
{
	func_535((Local_1068[iParam0 /*17*/])->f_6, sParam1, 0);
	(Local_1068[iParam0 /*17*/])->f_5 = sParam1;
}

void func_334(int iParam0, int iParam1)
{
	func_555(Local_1068[iParam0 /*17*/], iParam1, 0);
}

bool func_335(int iParam0, int iParam1, float fParam2)
{
	return func_556(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, false, false), fParam2);
}

void func_336(int iParam0)
{
	int iVar0;

	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	func_344(0, Global_35, 0);
	TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, &(Local_229[2 /*2*/]), (Local_229[2 /*2*/])->f_1, Global_35, 6066, 4f, -4f, 0, 0, 0, 0, -1082130432, 0, 0, -1082130432);
	TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, &(Local_229[0 /*2*/]), (Local_229[0 /*2*/])->f_1, Global_35, -1, 4f, -4f, 0, 0, 0, 0, -1082130432, 0, 0, -1082130432);
	func_327(iParam0, &iVar0, 0, 0, 1, 1);
}

int func_337(int iParam0, int iParam1, int iParam2, char* sParam3)
{
	int iVar0;

	if (!ITEMSET::IS_ITEMSET_VALID(&Global_1396084))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ITEMSET::IS_IN_ITEMSET(iParam0, &Global_1396084))
		{
			return 1;
		}
		ITEMSET::ADD_TO_ITEMSET(iParam0, &Global_1396084);
		DECORATOR::DECOR_SET_BOOL(iParam0, "pedRoam_bInPedRoam", true);
		func_557(iParam0, 0);
		func_558(iParam0, iParam1);
		func_559(iParam0, iParam2);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		{
			iVar0 = MISC::GET_HASH_KEY(sParam3);
			if (!func_560(iVar0))
			{
				DECORATOR::DECOR_SET_INT(iParam0, "pedRoam_hashKey", iVar0);
			}
		}
		return 1;
	}
	return 0;
}

int func_338(int iParam0, int iParam1)
{
	if (func_78(iParam0, 0, 1))
	{
		return (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0) || (iParam1 && AUDIO::IS_ANY_SPEECH_PLAYING(iParam0)));
	}
	return 0;
}

int func_339(float fParam0)
{
	if (func_561(1))
	{
		return 1;
	}
	if (func_92(&uLocal_0) && !func_94(&uLocal_0, (7.5f + fParam0)))
	{
		return 1;
	}
	return 0;
}

int func_340(int iParam0, int iParam1, char* sParam2, var uParam3, float fParam4, var uParam5, bool bParam6, var uParam7, var uParam8, bool bParam9, var uParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, var uParam15)
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
		if (func_261())
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
				if (func_125(iParam0, 1, 1) > fParam4)
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
			fVar1 = func_322(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || uParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_93(&uLocal_0);
			if (!bVar0 && uParam10)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_562(iParam0, iParam1, fVar1, bParam13))
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
				iVar2 = func_563(func_345(iParam0, sParam2, iParam11, iParam1, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0, uParam5, uParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

void func_341(int iParam0, int iParam1, int iParam2, vector3 vParam3, float fParam6, float fParam7, float fParam8, int iParam9, float fParam10, int iParam11)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	vector3 vVar6;
	vector3 vVar9;

	if (iParam0 <= -1)
	{
		return;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam2))
	{
		return;
	}
	vVar0 = { 0f, 0f, 0f };
	iVar3 = func_205(1);
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		iVar5 = func_564(iVar4);
		if (!ENTITY::IS_ENTITY_DEAD(iVar5))
		{
			vVar0 = { vVar0 + ENTITY::GET_ENTITY_COORDS(iVar5, true, false) };
		}
		iVar4++;
	}
	vVar0 = { vVar0 / FtoV(BUILTIN::TO_FLOAT(iVar3)) };
	vVar6 = { vVar0 - VOLUME::_0xF70F00013A62F866(iParam2) };
	vVar9 = { func_565(iParam2, vVar6, 1065353216, 100) };
	func_566(iParam0, iParam1, iParam9, vVar9, vParam3, fParam6, fParam7, fParam8, fParam10, -1, 1, iParam11);
}

void func_342(int iParam0, int iParam1, vector3 vParam2, vector3 vParam5, float fParam8, float fParam9, float fParam10, int iParam11, float fParam12, bool bParam13)
{
	if (iParam0 <= -1)
	{
		return;
	}
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 3)
	{
		iParam1 = 3;
	}
	func_566(iParam0, iParam1, iParam11, vParam2, vParam5, fParam8, fParam9, fParam10, fParam12, -1, bParam13, 1);
}

void func_343(int iParam0)
{
	if (iParam0 <= -1)
	{
		return;
	}
	func_567(iParam0);
	func_568(21);
}

int func_344(int iParam0, int iParam1, int iParam2)
{
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0, iParam1, iParam2, 3f, 0.25f, -1082130432);
	return 1;
}

bool func_345(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
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
	return func_569(iParam0, &Var0);
}

bool func_346(int iParam0)
{
	return (!ANIMSCENE::_0x25557E324489393C(iParam0) || ANIMSCENE::_0xD8254CB2C586412B(iParam0, 0));
}

float func_347(vector3 vParam0, bool bParam3)
{
	return func_154(Global_35, vParam0, bParam3);
}

void func_348(struct<7> Param0, vector3 vParam7)
{
	if (!func_159(Param0))
	{
		return;
	}
	if (func_352(vParam7, 0f, 0f, 0f, 1056964608, 1))
	{
		return;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(Param0))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(Param0.f_5))
	{
		MAP::SET_BLIP_COORDS(Param0.f_5, vParam7);
	}
	VOLUME::_0x541B8576615C33DE(Param0, vParam7);
}

int func_349(int iParam0)
{
	int iVar0;

	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
	if (iVar0 != 0)
	{
		return iVar0 == (Global_1905944->f_22[iParam0 /*9*/])->f_1;
	}
	return 0;
}

bool func_350(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_351(int iParam0)
{
	int iVar0;

	if (!func_570(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_1879534->f_7300)
	{
		if (!MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iVar0 /*4*/]), 2))
		{
			if (MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iVar0 /*4*/]), 1))
			{
				switch (&Global_1879534->f_1911[(Global_1879534->f_7301.f_2[iVar0 /*4*/])->f_1 /*3*/])
				{
					case -2093459088:
						if ((Global_1879534->f_1911[(Global_1879534->f_7301.f_2[iVar0 /*4*/])->f_1 /*3*/])->f_2 == iParam0)
						{
							return 1;
						}
						break;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_352(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

struct<7> func_353(int iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, var uParam5)
{
	struct<7> Var0;

	Var0.f_3 = -1;
	Var0.f_6 = 1;
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam2))
	{
		return Var0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return Var0;
	}
	Var0 = iParam2;
	if (VOLUME::_0x92A78D0BEDB332A3(Var0))
	{
		Var0.f_1 = iParam1;
		Var0.f_2 = iParam0;
		Var0.f_3 = uParam3;
		if (bParam4)
		{
			Var0.f_5 = MAP::_0x554D9D53F696D002(408396114, VOLUME::_0xF70F00013A62F866(Var0));
		}
		Var0.f_4 = 0;
		Var0.f_6 = uParam5;
		return Var0;
	}
	return Var0;
}

void func_354()
{
	Global_1357516 = 0;
}

void func_355(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	if (ENTITY::IS_ENTITY_DEAD(*uParam1))
	{
		return;
	}
	if (func_75(uParam0, 524288) && PLAYER::_0xA81D24AE0AF99A5E(PLAYER::GET_PLAYER_INDEX()) > 0f)
	{
		iVar2 = func_571(*uParam1, 0, 1, 0);
		if (iVar2 != joaat("weapon_unarmed"))
		{
			WEAPON::GET_AMMO_IN_CLIP(*uParam1, &iVar0, iVar2);
			if (iVar0 <= 0)
			{
				WEAPON::_0x6929E22158E52265(*uParam1, 0, &uVar3);
				WEAPON::_0x678F00858980F516(*uParam1, &iVar0, &uVar3);
			}
			iVar1 = WEAPON::GET_MAX_AMMO_IN_CLIP(*uParam1, iVar2, true);
		}
		if (iVar0 == iVar1 && func_161(uParam0) == 0)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 159, true);
		}
	}
}

void func_356()
{
	PAD::DISABLE_CONTROL_ACTION(0, 1287709438, false);
	func_572(0);
	Global_1935689->f_6 = 1;
}

int func_357(var uParam0)
{
	if (func_75(uParam0, 33554432))
	{
		return 1;
	}
	if (CAM::_0xA24C1D341C6E0D53(0, 0, 0) || CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		return 1;
	}
	return 0;
}

void func_358(vector3 vParam0)
{
	if (!Global_1935630->f_12)
	{
		func_573(vParam0);
		func_574(vParam0);
	}
}

void func_359()
{
	PAD::DISABLE_CONTROL_ACTION(0, -1450761377, false);
	PAD::DISABLE_CONTROL_ACTION(0, -771458680, false);
	PAD::DISABLE_CONTROL_ACTION(1, -1450761377, false);
	PAD::DISABLE_CONTROL_ACTION(1, -771458680, false);
}

int func_360(var uParam0, var uParam1)
{
	if (func_357(uParam1))
	{
		return 1;
	}
	if (!func_92(&(uParam1->f_26)))
	{
		func_381(&(uParam1->f_26), 0);
	}
	switch (uParam1->f_59)
	{
		case 0:
			func_371(uParam0, uParam1, 0);
			if (func_3(uParam0->f_88, 2))
			{
				if (CAM::DOES_CAM_EXIST(&(uParam1->f_20[0])))
				{
					CAM::DETACH_CAM(&(uParam1->f_20[0]));
					CAM::SET_CAM_ACTIVE(&(uParam1->f_20[0]), false);
				}
				if (CAM::DOES_CAM_EXIST(&(uParam1->f_20[2])))
				{
					CAM::SET_CAM_ACTIVE(&(uParam1->f_20[2]), true);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				}
				MAP::DISPLAY_RADAR(false);
				func_372(uParam1, 3);
			}
			else
			{
				func_575(uParam0, uParam1);
				func_372(uParam1, 1);
			}
			break;
		case 1:
			func_576("DCS: INTRO START TO INTRO END");
			if (CAM::DOES_CAM_EXIST(&(uParam1->f_20[1])))
			{
				CAM::SET_CAM_ACTIVE(&(uParam1->f_20[1]), true);
			}
			CAM::RENDER_SCRIPT_CAMS(true, true, uParam0->f_84, true, false, 0);
			func_372(uParam1, 2);
			break;
		case 2:
			func_576("DCS: INTRO START TO INTRO END");
			if (!CAM::DOES_CAM_EXIST(&(uParam1->f_20[1])) || !CAM::IS_CAM_INTERPOLATING(&(uParam1->f_20[1])))
			{
				func_576("DCS: INTRO END TO DUEL");
				if (CAM::DOES_CAM_EXIST(&(uParam1->f_20[2])))
				{
					CAM::SET_CAM_ACTIVE_WITH_INTERP(&(uParam1->f_20[2]), &(uParam1->f_20[1]), uParam0->f_85, 1, 1);
				}
				func_372(uParam1, 3);
			}
			break;
		case 3:
			func_576("DCS: INTRO END TO DUEL");
			if ((!CAM::DOES_CAM_EXIST(&(uParam1->f_20[2])) || !CAM::IS_CAM_INTERPOLATING(&(uParam1->f_20[2]))) && (!CAM::DOES_CAM_EXIST(&(uParam1->f_20[0])) || !CAM::IS_CAM_INTERPOLATING(&(uParam1->f_20[0]))))
			{
				if (!func_3(uParam0->f_88, 1024))
				{
					func_577();
				}
				func_195(&(uParam1->f_26));
				func_372(uParam1, 4);
				func_190();
				func_576("DCS: DUEL");
				return 1;
			}
			break;
		case 4:
			return 1;
	}
	return 0;
}

void func_361(var uParam0, var uParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;

	if (func_357(uParam1))
	{
		return;
	}
	if (&uParam0->f_75[2])
	{
		func_576("DCS: DUEL ATTACHED");
		if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
		{
			vVar6 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) };
			func_77(&vVar6, 1088421888);
		}
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1))
		{
			vVar3 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false) };
		}
		if (!func_213(*(uParam0->f_51[2 /*3*/])))
		{
			fVar9 = func_74(vVar3, vVar6, 1);
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar3, fVar9, *(uParam0->f_51[2 /*3*/])) };
		}
		else
		{
			fVar9 = func_74(vVar3, vVar6, 1);
			if (func_197(uParam0, 64))
			{
				vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar3, fVar9, 0.25f, 0f, 0f) };
			}
			else
			{
				vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar3, fVar9, 0.25f, 0f, 1f) };
			}
		}
		if (CAM::DOES_CAM_EXIST(&(uParam1->f_20[2])))
		{
			CAM::POINT_CAM_AT_COORD(&(uParam1->f_20[2]), vVar0);
		}
	}
}

int func_362(var uParam0, var uParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(*uParam0) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_1))
	{
		func_76(uParam1, 4096);
		return 1;
	}
	else if (ENTITY::IS_ENTITY_DEAD(uParam0->f_1) && !ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		func_76(uParam1, 4096);
		return 1;
	}
	return 0;
}

int func_363(var uParam0, var uParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (!func_3(Global_40.f_9145, 1))
	{
		func_71(uParam0, 4);
		uParam1->f_67 = 1;
		uParam0->f_89 = 3;
	}
	if (uParam0->f_89 == -1)
	{
		uParam0->f_89 = 0;
	}
	if (func_213(uParam0->f_42))
	{
		uParam0->f_42 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) };
	}
	if (func_213(uParam0->f_45))
	{
		uParam0->f_45 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1))
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 297, false);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 317, false);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 392, true);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 371, true);
		PLAYER::_0x3C4AE8506638C7E2(PLAYER::GET_PLAYER_INDEX(), 0);
		if (func_197(uParam0, 65536))
		{
			PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 16, true);
			PED::SET_PED_CAN_RAGDOLL(uParam0->f_1, false);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 263, true);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(uParam0->f_1, 4097);
		}
		if (func_197(uParam0, 131072))
		{
			PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 263, true);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(uParam0->f_1, 1044479);
		}
		PED::SET_PED_USING_ACTION_MODE(uParam0->f_1, true, -1, 0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		if (PED::IS_PED_A_PLAYER(*uParam0))
		{
			fVar0 = PLAYER::_0xA81D24AE0AF99A5E(PLAYER::GET_PLAYER_INDEX());
			if (fVar0 < 28f)
			{
				func_578(2);
			}
		}
		PED::SET_PED_USING_ACTION_MODE(*uParam0, true, -1, 0);
	}
	func_579(uParam1, uParam0);
	func_580(uParam0, uParam1);
	iVar1 = func_581(Global_35, 1, 2, 0);
	if ((iVar1 == joaat("weapon_unarmed") || iVar1 != uParam0->f_48) && !func_75(uParam1, 16777216))
	{
		func_582();
		func_76(uParam1, 16777216);
		func_67(*uParam0, uParam0->f_48, 0, 0, 2, 1, 0, 1056964608, 1065353216, -1, 1, 0, 0, 0);
	}
	WEAPON::SET_CURRENT_PED_WEAPON(*uParam0, joaat("weapon_unarmed"), false, 0, false, false);
	WEAPON::SET_CURRENT_PED_WEAPON(*uParam0, joaat("weapon_unarmed"), false, 1, false, false);
	TASK::TASK_SWAP_WEAPON(*uParam0, 1, 1, 0, 0);
	iVar2 = 0;
	if (func_197(uParam0, 512))
	{
		iVar2 = 1;
	}
	if (!func_197(uParam0, 262144))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_1, joaat("weapon_unarmed"), false, 0, false, false);
		WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_1, joaat("weapon_unarmed"), false, 1, false, false);
		TASK::TASK_SWAP_WEAPON(uParam0->f_1, 1, 1, 0, 0);
		func_67(uParam0->f_1, uParam0->f_49, 0, 0, iVar2, 1, func_197(uParam0, 512), 1056964608, 1065353216, -1, 1, 0, 0, 0);
	}
	func_583(uParam0->f_1);
	if (!func_584(uParam1->f_53))
	{
		uParam1->f_53 = { func_585() };
	}
	if (uParam0->f_50 == -1)
	{
		if (func_197(uParam0, 8))
		{
			if (func_197(uParam0, 512))
			{
				uParam0->f_50 = 34606;
			}
			else
			{
				uParam0->f_50 = 22798;
			}
		}
		else if (func_197(uParam0, 16))
		{
			uParam0->f_50 = 21030;
		}
	}
	if (!MISC::_0xBDC6E364C9C78178(*uParam1))
	{
		*uParam1 = ITEMSET::CREATE_ITEMSET(true);
	}
	func_586(uParam0, uParam1);
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_87))
	{
		uParam0->f_87 = func_306(uParam0->f_42, uParam0->f_45, 2.5f, 5f, 2f, 0);
		ITEMSET::ADD_TO_ITEMSET(uParam0->f_87, *uParam1);
	}
	return 1;
}

int func_364(var uParam0, var uParam1)
{
	if (!HUD::_0xD0976CC34002DB57("MGDUL"))
	{
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("MINI_DUEL@REPOSITION@BASE"))
	{
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(uParam1->f_65))
	{
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(uParam1->f_66))
	{
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("MINI_DUEL@PLAYER@ACTION"))
	{
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("MINI_DUEL@PLAYER@NORMAL"))
	{
		return 0;
	}
	return 1;
}

int func_365(var uParam0, var uParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	func_367(uParam0, uParam1);
	PAD::DISABLE_CONTROL_ACTION(0, 130948705, false);
	if (func_197(uParam0, 2))
	{
		return 1;
	}
	fVar0 = func_74(uParam0->f_42, uParam0->f_45, 1);
	iVar1 = 1;
	iVar2 = 1;
	if (!func_352(ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), uParam0->f_42, 0.1f, 0))
	{
		iVar1 = 0;
		if (!func_321(Global_35, 242628503))
		{
			func_198(uParam1, 16384);
		}
	}
	if (!func_197(uParam0, 8388608) && !func_352(ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false), uParam0->f_45, 0.1f, 0))
	{
		iVar1 = 0;
		if (!func_321(uParam0->f_1, 242628503))
		{
			func_198(uParam1, 32768);
		}
	}
	if (!func_335(*uParam0, uParam0->f_1, 0.99f))
	{
		if (!func_321(Global_35, 242628503))
		{
			func_198(uParam1, 16384);
		}
		iVar2 = 0;
	}
	if (!func_335(uParam0->f_1, *uParam0, 0.99f))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_1, 242628503, 1) != 1)
		{
			func_198(uParam1, 32768);
		}
		iVar2 = 0;
	}
	if (iVar1 && iVar2)
	{
		if (func_357(uParam1))
		{
			iVar2 = func_587(uParam1, uParam0);
		}
	}
	if (iVar1 && iVar2)
	{
		TASK::CLEAR_PED_TASKS(*uParam0, 1, 0);
		if (!func_197(uParam0, 8388608))
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_1, 1, 0);
		}
		return 1;
	}
	if (!func_75(uParam1, 16384))
	{
		if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, 4480, 0);
		}
		TASK::OPEN_SEQUENCE_TASK(&iVar3);
		if (PED::_0xA911EE21EDF69DAF(*uParam0))
		{
			iVar4 = PED::_0xD806CD2A4F2C2996(*uParam0);
			TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(0, iVar4, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), 1f, 0);
		}
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_42, 1f, -1, 0f, 512, fVar0);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, uParam0->f_1, 0, -1082130432, -1082130432, -1082130432);
		func_327(*uParam0, &iVar3, 0, 0, 1, 1);
		func_76(uParam1, 16384);
	}
	if (!func_75(uParam1, 32768))
	{
		TASK::TASK_SWAP_WEAPON(uParam0->f_1, 1, 1, 0, 0);
		if (!func_197(uParam0, 8388608))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar3);
			if (!func_352(ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false), uParam0->f_45, 0.1f, 0))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_45, 1f, -1, 0f, 512, (fVar0 + 180f));
			}
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, *uParam0, 0, -1082130432, -1082130432, -1082130432);
			func_327(uParam0->f_1, &iVar3, 0, 0, 1, 1);
		}
		func_588(&(uParam1->f_44.f_3), 2);
		func_589(uParam0->f_1, &(uParam1->f_44), 0f, 0f, 0f, 0, 1106247680, 30f, 99999, 4000, 1000, 0f, 1, 1, 1084227584);
		func_76(uParam1, 32768);
	}
	return 0;
}

void func_366(var uParam0, var uParam1, int iParam2)
{
	uParam1->f_57 = iParam2;
	func_590(*uParam0, iParam2);
}

void func_367(var uParam0, var uParam1)
{
	if (!func_75(uParam1, 1024))
	{
		if (func_592(*uParam0, &(uParam0->f_3), func_591(), uParam0->f_86, 1097859072, 2, 1, 0, 0, 1, 1071644672))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
			{
				PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 136, true);
			}
			func_76(uParam1, 1024);
		}
	}
}

void func_368(var uParam0, var uParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_1))
	{
		func_47(uParam0, uParam1);
		func_201(uParam1, 9);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_86))
	{
		if (!func_197(uParam0, 32768))
		{
			func_23(0, uParam0, uParam1, -1038090240, 1103626240);
			func_76(uParam1, 2);
		}
	}
	func_593(uParam1, uParam0, *uParam0, uParam0->f_42, uParam0->f_45, uParam0->f_48);
	func_594(uParam1, uParam0, uParam0->f_1, *uParam0, uParam0->f_45, uParam0->f_42, uParam0->f_49);
	Global_19 = 1;
	MAP::DISPLAY_RADAR(false);
	if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADED_IN())
	{
		CAM::DO_SCREEN_FADE_IN(1000);
	}
	func_595(*uParam0);
	func_76(uParam1, 8);
}

float func_369(var uParam0)
{
	switch (uParam0->f_89)
	{
		case 3:
			return 0.22f;
		case 0:
			return 0.28f;
		case 1:
			return 0.34f;
		case 2:
			return 0.44f;
		case 4:
			return 0.28f;
		default:
			break;
	}
	return 0.25f;
}

int func_370(char* sParam0, bool bParam1)
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

void func_371(var uParam0, var uParam1, bool bParam2)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	int iVar13;

	if (func_357(uParam1))
	{
		return;
	}
	if (!CAM::DOES_CAM_EXIST(&(uParam1->f_20[2])))
	{
		uParam1->f_20[2] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
		iVar13 = 1;
	}
	if (CAM::DOES_CAM_EXIST(&(uParam1->f_20[2])) && iVar13 == 1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
		{
			vVar7 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) };
		}
		if (!func_213(uParam0->f_45))
		{
			vVar10 = { uParam0->f_45 };
		}
		else if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1))
		{
			vVar10 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false) };
		}
		if (!func_213(*(uParam0->f_51[2 /*3*/])))
		{
			vVar4 = { *(uParam0->f_51[2 /*3*/]) };
		}
		else
		{
			vVar4 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar7, func_74(vVar7, vVar10, 1), 0.8385f, -2.5071f, 0f) };
		}
		CAM::SET_CAM_COORD(&(uParam1->f_20[2]), vVar4);
		if (&uParam0->f_75[2])
		{
			CAM::ATTACH_CAM_TO_ENTITY(&(uParam1->f_20[2]), Global_35, vVar4, true);
		}
		if (!func_213(*(uParam0->f_61[2 /*3*/])))
		{
			CAM::SET_CAM_ROT(&(uParam1->f_20[2]), *(uParam0->f_61[2 /*3*/]), 2);
		}
		else
		{
			fVar0 = func_74(vVar10, vVar7, 1);
			if (func_197(uParam0, 64))
			{
				vVar1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar10, fVar0, 0.25f, 0f, 0f) };
			}
			else
			{
				vVar1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar10, fVar0, 0.25f, 0f, 1f) };
			}
			CAM::POINT_CAM_AT_COORD(&(uParam1->f_20[2]), vVar1);
		}
		if (&uParam0->f_71[2] != 0f)
		{
			CAM::SET_CAM_FOV(&(uParam1->f_20[2]), &(uParam0->f_71[2]));
		}
		else
		{
			CAM::SET_CAM_FOV(&(uParam1->f_20[2]), 17f);
		}
		if (bParam2)
		{
			func_190();
			CAM::SET_CAM_ACTIVE(&(uParam1->f_20[2]), true);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		}
	}
}

void func_372(var uParam0, int iParam1)
{
	func_93(&(uParam0->f_26));
	uParam0->f_59 = iParam1;
}

int func_373(var uParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	vector3 vVar3;
	int iVar6;

	func_596(uParam0, uParam1);
	if (uParam1->f_56 > 0)
	{
		func_597(uParam0, uParam1);
	}
	switch (uParam1->f_56)
	{
		case 0:
			func_359();
			func_361(uParam0, uParam1);
			func_358(ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false));
			if (func_197(uParam0, 32) || (!CAM::DOES_CAM_EXIST(&(uParam1->f_20[2])) || !CAM::IS_CAM_INTERPOLATING(&(uParam1->f_20[2]))))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
				{
					return 1;
				}
				if (!func_197(uParam0, 524288) && !TASK::_0xC8B29D18022EA2B7(uParam0->f_1))
				{
					func_594(uParam1, uParam0, uParam0->f_1, *uParam0, uParam0->f_45, uParam0->f_42, uParam0->f_49);
					return 0;
				}
				if (TASK::_0xC8B29D18022EA2B7(uParam0->f_1))
				{
					TASK::_0x3FEB770D8ED9047A(uParam0->f_1);
				}
				func_598(uParam0->f_89, uParam1);
				if (TASK::_0xC8B29D18022EA2B7(uParam0->f_1))
				{
					TASK::_0x30146C25686B7836(uParam0->f_1, -1f);
					TASK::_0x59AE5CA4FFB4E378(uParam0->f_1, -1f);
				}
				TASK::_0x30146C25686B7836(*uParam0, -1f);
				TASK::_0x59AE5CA4FFB4E378(*uParam0, -1f);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
				HUD::SET_TEXT_SCALE(0.5f, 0.5f);
				uParam1->f_69 = PAD::_0xBD629C1C4F501C80(0);
				if (uParam1->f_69)
				{
					uParam1->f_24 = func_599("DUEL_HELP_DRAW_GUNSLINGER", 10000, 0, 0, 0, 1);
				}
				else
				{
					uParam1->f_24 = func_599("DUEL_HELP_DRAW_ALT", 10000, 0, 0, 0, 1);
				}
				AUDIO::PLAY_SOUND_FRONTEND("HUD_DRAW", "HUD_DUEL_SOUNDSET", true, 0);
				if (!func_197(uParam0, 1024))
				{
					WEAPON::_0x94A3C1B804D291EC(Global_35, 1, 0, 1, 1);
					TASK::_0x908BB14BCE85C80E(Global_35);
					if (!func_197(uParam0, 524288))
					{
						TASK::_0x908BB14BCE85C80E(uParam0->f_1);
					}
					ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(uParam0->f_1, true, 50f);
					func_190();
					func_93(&(uParam1->f_35));
					uParam1->f_5 = MISC::_0x483B8C542103AD72();
					if (!func_197(uParam0, 4194304))
					{
						CAM::_0x986F7A51EE3E1F92(uParam0->f_1, 1);
					}
					uParam1->f_72 = func_600(uParam0);
					PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_1, true);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 277, false);
					WEAPON::_0xCC9C4393523833E2(*uParam0, uParam0->f_48, WEAPON::_0xEC97101A8F311282(uParam0->f_48));
					WEAPON::SET_AMMO_IN_CLIP(*uParam0, uParam0->f_48, WEAPON::GET_MAX_AMMO_IN_CLIP(*uParam0, uParam0->f_48, true));
					WEAPON::GET_CURRENT_PED_WEAPON(*uParam0, &iVar0, true, 3, false);
					if (iVar0 != 0 && iVar0 != joaat("weapon_unarmed"))
					{
						WEAPON::_0xCC9C4393523833E2(*uParam0, iVar0, WEAPON::_0xEC97101A8F311282(iVar0));
						WEAPON::SET_AMMO_IN_CLIP(*uParam0, iVar0, WEAPON::GET_MAX_AMMO_IN_CLIP(*uParam0, iVar0, true));
					}
				}
				func_601(uParam1, 3);
			}
			break;
		case 3:
			func_602(uParam1);
			if (func_603(uParam0, uParam1))
			{
				if (func_604(uParam1->f_24))
				{
					func_152(1);
				}
				func_605(uParam0, uParam1);
			}
			else
			{
				func_359();
				fVar1 = PLAYER::_0xE956C2340A76272E(PLAYER::PLAYER_ID());
				if (uParam1->f_18 < 0f)
				{
					if (uParam1->f_17 > 0.1f && (fVar1 - uParam1->f_17) == -uParam1->f_17)
					{
						uParam1->f_18 = uParam1->f_17;
					}
				}
				uParam1->f_17 = fVar1;
			}
			func_606(uParam0, uParam1);
			func_607(uParam0, uParam1);
			func_361(uParam0, uParam1);
			if (func_197(uParam0, 33554432))
			{
				if (PLAYER::_0xA54000D4BFD90BDE(PLAYER::PLAYER_ID()) && PLAYER::_0xCCD9B77F70D31C9D(PLAYER::PLAYER_ID()) > 1)
				{
					CAM::_0x5B637D6F3B67716A(uParam0->f_1);
					func_71(uParam0, 4194304);
				}
			}
			if (func_608(uParam0, uParam1))
			{
				EVENT::_0x118873DD538490B4(1722245163, 0);
				func_76(uParam1, 2097152);
				if (func_196(uParam0->f_1, 0))
				{
					PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(uParam0->f_1, 1);
				}
				if (func_604(uParam1->f_25))
				{
					func_152(1);
				}
				switch (func_161(uParam1))
				{
					case 1:
						uParam1->f_62 = func_2();
						if (func_609(uParam1->f_62))
						{
							func_610(&(uParam0->f_1));
							func_611(uParam1->f_62);
							func_612(ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false));
						}
						if (!func_75(uParam1, 1))
						{
							if (func_196(uParam0->f_1, 0))
							{
								PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 243, true);
								if (!func_197(uParam0, 65536))
								{
									func_119(uParam0->f_1, 0, 0);
								}
								if (!func_197(uParam0, 4194304))
								{
									CAM::_0xE3639DB78B3B5400(uParam0->f_1);
								}
							}
							EVENT::REMOVE_SHOCKING_EVENT(uParam1->f_4);
							uParam1->f_4 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(1498498500, ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false), -1f, 30f, 30f, -1082130432, -1082130432, -1, -1);
							func_76(uParam1, 1);
						}
						func_601(uParam1, 4);
						break;
					case 2:
						if (!func_75(uParam1, 1))
						{
							fVar2 = 0.125f;
							if (func_196(uParam0->f_1, 0))
							{
								CAM::_0x5B637D6F3B67716A(uParam0->f_1);
								if (func_613(uParam0, uParam1, 0))
								{
									if (func_581(uParam0->f_1, 1, 0, 0) != joaat("weapon_unarmed"))
									{
										WEAPON::_0xCEF4C65DE502D367(uParam0->f_1, 1, 0, 1, 0);
									}
									if (func_197(uParam0, 512))
									{
										PED::_0x89F5E7ADECCCB49C(uParam0->f_1, "injured_left_arm");
									}
									else
									{
										PED::_0x89F5E7ADECCCB49C(uParam0->f_1, "injured_right_arm");
									}
									fVar2 = 0.25f;
								}
								if (!func_197(uParam0, 524288))
								{
									if (TASK::_0xC8B29D18022EA2B7(uParam0->f_1))
									{
										TASK::_0xEED08A3A98B847E2(uParam0->f_1, false, fVar2);
									}
									else
									{
										TASK::CLEAR_PED_TASKS(uParam0->f_1, 1, 0);
									}
								}
							}
							EVENT::REMOVE_SHOCKING_EVENT(uParam1->f_4);
							if (!func_197(uParam0, 536870912))
							{
								func_163(13, 0, 0, 0, uParam0->f_1, 0, 1065353216, 0);
							}
							TASK::_0xEED08A3A98B847E2(*uParam0, !func_197(uParam0, 256), fVar2);
							func_76(uParam1, 1);
						}
						func_601(uParam1, 5);
						break;
					case 3:
						func_614(uParam1);
						if (!func_75(uParam1, 1))
						{
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1) && (func_197(uParam0, 524288) || TASK::_0xC8B29D18022EA2B7(uParam0->f_1)))
							{
								if (!func_197(uParam0, 524288))
								{
									TASK::_0x748D5E0D2A1A4C61(uParam0->f_1, 2f, 1);
								}
								CAM::_0x5B637D6F3B67716A(uParam0->f_1);
								func_76(uParam1, 1);
								PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
								ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(Global_35, 0);
								if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
								{
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 4992, 0);
								}
							}
							else
							{
								func_366(uParam0, uParam1, 4);
								if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
								{
									CAM::_0x5B637D6F3B67716A(uParam0->f_1);
									if (!func_3(uParam0->f_88, 128))
									{
										TASK::TASK_COMBAT_PED(uParam0->f_1, *uParam0, 0, 0);
										PED::SET_PED_KEEP_TASK(uParam0->f_1, true);
									}
								}
								func_615(uParam0, uParam1);
								func_601(uParam1, 8);
							}
						}
						else
						{
							if (func_196(Global_35, 0))
							{
								CAM::_0x5B637D6F3B67716A(uParam0->f_1);
								func_616(uParam0, uParam1);
							}
							if (!func_196(*uParam0, 9))
							{
								func_601(uParam1, 6);
							}
						}
						break;
					case 5:
						func_614(uParam1);
						if (!func_197(uParam0, 2097152))
						{
							func_119(uParam0->f_2, 0, 0);
						}
					case 4:
						if (!func_75(uParam1, 1))
						{
							TASK::_0xEED08A3A98B847E2(*uParam0, !func_197(uParam0, 256), 1040187392);
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
							{
								CAM::_0x5B637D6F3B67716A(uParam0->f_1);
								if (TASK::_0xC8B29D18022EA2B7(uParam0->f_1))
								{
									TASK::_0xEED08A3A98B847E2(uParam0->f_1, !func_197(uParam0, 256), 1040187392);
								}
								if (!func_3(uParam0->f_88, 128))
								{
									if (func_3(uParam0->f_88, 16777216))
									{
										PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 263, false);
										WEAPON::_0xCEF4C65DE502D367(uParam0->f_1, 0, 0, 0, 0);
										if (func_581(uParam0->f_1, 1, 0, 0) != joaat("weapon_melee_knife"))
										{
											WEAPON::_GIVE_WEAPON_TO_PED_2(uParam0->f_1, joaat("weapon_melee_knife"), 1, false, true, 4, false, 0.5f, 1f, 752097756, false, 0f, false);
										}
										if (!func_321(uParam0->f_1, -2055662961))
										{
											WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_1, joaat("weapon_melee_knife"), false, 4, true, false);
											TASK::TASK_SWAP_WEAPON(uParam0->f_1, 1, 0, 0, 0);
											TASK::TASK_MELEE(uParam0->f_1, *uParam0, 0, 0, 1, 2f, 1, -1082130432);
										}
									}
									else
									{
										TASK::TASK_COMBAT_PED(uParam0->f_1, *uParam0, 0, 0);
									}
									PED::SET_PED_KEEP_TASK(uParam0->f_1, true);
								}
							}
							func_76(uParam1, 1);
							func_601(uParam1, 5);
						}
						break;
				}
			}
			break;
		case 5:
			if (func_617(uParam1, uParam0))
			{
				uParam1->f_8 = MISC::_0x483B8C542103AD72();
				func_601(uParam1, 7);
			}
			break;
		case 4:
			if (func_609(uParam1->f_62))
			{
				func_611(uParam1->f_62);
			}
			if (func_271(Global_35, 0))
			{
				vVar3 = { -1f, 4f, 0.5f };
			}
			else
			{
				vVar3 = { -2f, -4f, 2f };
			}
			if (func_618(uParam0, uParam1, *uParam0, uParam0->f_1, vVar3, 0) && (!func_609(uParam1->f_62) || func_611(uParam1->f_62)))
			{
				func_615(uParam0, uParam1);
				func_601(uParam1, 8);
				return 1;
			}
			break;
		case 6:
			func_615(uParam0, uParam1);
			func_601(uParam1, 8);
			return 1;
		case 7:
			func_619();
			iVar6 = (MISC::_0x483B8C542103AD72() - uParam1->f_8);
			if (func_197(uParam0, 4194304) || iVar6 > 1000)
			{
				func_615(uParam0, uParam1);
				func_601(uParam1, 8);
				return 1;
			}
			break;
		case 8:
			return 1;
	}
	return 0;
}

void func_374(var uParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_1))
	{
		return;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_4)) && ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_1, MISC::GET_HASH_KEY(&(uParam0->f_4))))
	{
		func_345(uParam0->f_1, &(uParam0->f_4), 1744022339, 0, 1, 0, 0, 1);
	}
}

int func_375(int iParam0)
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

int func_376(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return -2;
		case 2:
			return -5;
		case 3:
			return -10;
		case 4:
			return -20;
		case 5:
			return -40;
		case 6:
			return -160;
		case 7:
			return -320;
		case 8:
			return -480;
		case 18:
			return -640;
		case 9:
			return 0;
		case 10:
			return 1;
		case 11:
			return 2;
		case 12:
			return 5;
		case 13:
			return 10;
		case 14:
			return 20;
		case 15:
			return 40;
		case 16:
			return 160;
		case 17:
			return 640;
		default:
			break;
	}
	return 0;
}

void func_377(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	char* sVar7;
	struct<2> Var8;

	iVar0 = func_620();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_621(iParam0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam5))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_override"))
			{
				iParam0 = (DECORATOR::DECOR_GET_INT(iParam5, "honor_override") * -1);
				DECORATOR::DECOR_REMOVE(iParam5, "honor_override");
			}
			else if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_bank"))
			{
				iParam0 = (iParam0 - DECORATOR::DECOR_GET_INT(iParam5, "honor_bank"));
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", 0);
			}
		}
	}
	iVar2 = 240;
	iVar3 = -240;
	fVar4 = 1f;
	if (func_622(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_166())
		{
			if (((iParam2 >= 0 && iParam2 <= 4) || (iParam2 >= 10 && iParam2 <= 14)) && iParam3 != 446961221)
			{
				fVar4 = 1.5f;
			}
		}
	}
	if (iParam0 > 0)
	{
		iVar5 = BUILTIN::CEIL((IntToFloat(iParam0) * fVar4));
	}
	else
	{
		iVar5 = BUILTIN::FLOOR((IntToFloat(iParam0) * fVar4));
	}
	Global_40.f_11095.f_35 = (Global_40.f_11095.f_35 + iVar5);
	Global_40.f_11095.f_35 = func_623(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_620();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || iParam7)
	{
		iVar6 = func_624(iVar1);
		func_626(func_625(), 0, 4000);
		func_627(Global_40.f_11095.f_35);
		if ((iVar6 > Global_40.f_11095.f_36 && iVar1 > 0) || (iVar6 > Global_40.f_11095.f_37 && iVar1 < 0))
		{
			if (iVar1 < 0)
			{
				Global_40.f_11095.f_37 = iVar6;
			}
			else
			{
				Global_40.f_11095.f_36 = iVar6;
			}
		}
		func_628(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_630(func_629(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(iParam5))
			{
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_376(14))
				{
					sVar7 = "Honor_Increase_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelGood");
				}
				else
				{
					sVar7 = "Honor_Increase_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = func_631(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_632(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_632(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_630(func_629(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_376(4))
				{
					sVar7 = "Honor_Decrease_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelBad");
				}
				else
				{
					sVar7 = "Honor_Decrease_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = func_631(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_632(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_632(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_629(-1990689970) };
	STATS::STAT_ID_SET_INT(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_0xE6B763C7F4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_633(10, 1);
	}
}

void func_378(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0 /*6*/] = iParam1;
	(Global_1347477->f_155[iParam0 /*6*/])->f_2 = iParam2;
	(Global_1347477->f_155[iParam0 /*6*/])->f_3 = iParam3;
	(Global_1347477->f_155[iParam0 /*6*/])->f_4 = iParam4;
	(Global_1347477->f_155[iParam0 /*6*/])->f_5 = bParam5;
	(Global_1347477->f_155[iParam0 /*6*/])->f_1 = MISC::GET_GAME_TIMER() + 500;
}

int func_379(int iParam0, bool bParam1)
{
	switch (func_634(iParam0))
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

void func_380(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_97(&(((*uParam1)[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			func_303(iParam0, 0);
		}
	}
}

void func_381(var uParam0, int iParam1)
{
	if (iParam1 || !func_92(uParam0))
	{
		func_93(uParam0);
	}
}

void func_382(float fParam0)
{
	if (func_78(&(uLocal_1121[0]), 0, 1))
	{
		iLocal_1351 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(513747494, &(uLocal_1121[0]), fParam0, 25f, 25f, fParam0, 12f, 1127481344, 0, 0, -1, -1);
	}
}

bool func_383(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

bool func_384(int iParam0, int iParam1)
{
	if (!func_383(iParam0))
	{
		return false;
	}
	return (Global_1395482->f_2[iParam0] && iParam1) != 0;
}

int func_385(int iParam0)
{
	return (Global_17503.f_42[iParam0 /*8*/])->f_5;
}

char* func_386(char* sParam0)
{
	return sParam0;
}

int func_387(int iParam0, float fParam1, bool bParam2, int iParam3)
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

int func_388(int iParam0)
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

void func_389(int* iParam0)
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

void func_390(int iParam0)
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

void func_391(var uParam0)
{
	if (func_96(uParam0->f_162))
	{
		func_97(&(uParam0->f_162), 1, 1);
	}
	if (func_96(uParam0->f_163))
	{
		func_97(&(uParam0->f_163), 1, 1);
	}
	if (func_96(uParam0->f_164))
	{
		func_97(&(uParam0->f_164), 1, 1);
	}
	if (func_96(uParam0->f_165))
	{
		func_97(&(uParam0->f_165), 1, 1);
	}
}

void func_392(var uParam0)
{
	if (uParam0->f_170)
	{
		func_635();
	}
}

void func_393(var uParam0)
{
	if (uParam0->f_48 && !uParam0->f_45)
	{
		func_636(32);
		func_397(uParam0->f_3, 1, 0, 0, 2, 0, 0, 1);
	}
}

int func_394(var uParam0)
{
	if (func_637(uParam0) || uParam0->f_44)
	{
		uParam0->f_44 = 1;
		func_638(uParam0->f_3);
		func_255(uParam0, 0, 1);
		func_639(uParam0->f_3, uParam0->f_51.f_5, 0, uParam0->f_43, -1);
		func_640(0, 0);
		return 1;
	}
	return 0;
}

void func_395()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

bool func_396(int iParam0)
{
	if (!func_223(iParam0))
	{
		return true;
	}
	return (Global_17503.f_42[iParam0 /*8*/])->f_4 > 0;
}

void func_397(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;

	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_385(iParam0) == 1 && iParam7)
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
	if ((iParam1 || bParam6) || func_242() != -1)
	{
		(Global_17503.f_42[iParam0 /*8*/])->f_4 = 0;
	}
	(Global_17503.f_42[iParam0 /*8*/])->f_4 = ((Global_17503.f_42[iParam0 /*8*/])->f_4 + iVar0);
}

void func_398(int iParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		VOLUME::_0x43F867EF5C463A53(iParam0);
	}
}

int func_399(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	return 0;
}

var func_400(var uParam0, var uParam1, var uParam2)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

bool func_401(int iParam0)
{
	return iParam0 != 0;
}

bool func_402(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_403(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	if (!func_641(iParam0))
	{
		return;
	}
	iVar0 = func_642(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_643(iVar0);
	func_644(iVar0);
	iVar1 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	iVar2 = func_645(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_646(iVar0))
		{
			return;
		}
	}
	func_647(iVar0);
	PED::SET_PED_KEEP_TASK(iParam0, true);
	if (bParam1 && func_242() == -1)
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, true);
		}
	}
}

void func_404(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 29)
	{
		if (uParam1[iVar0] != 0)
		{
			if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, uParam1[iVar0], 0, 0))
			{
				if (func_241(uParam1[iVar0]))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, uParam1[iVar0], 0, false, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
			}
			iVar1 = 0;
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, false, iVar0, true);
			if (iVar1 != uParam1[iVar0])
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, uParam1[iVar0], true, iVar0, false, false);
			}
		}
		iVar0++;
	}
}

int func_405(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = uParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_547(&iVar1, -2147483648);
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

int func_406()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

int func_407(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (func_242() != -1)
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

int func_408(int iParam0)
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

int func_409(int iParam0)
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

int func_410(int iParam0)
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

int func_411(int iParam0, int iParam1, var uParam2)
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

Vector3 func_412(int iParam0, var uParam1)
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
			if (!func_213(*((*uParam1)[iVar0 /*3*/])))
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

void func_413(var uParam0, bool bParam1)
{
	if (!MAP::DOES_BLIP_EXIST(uParam0->f_6))
	{
		uParam0->f_6 = MAP::_0x554D9D53F696D002(-1702907713, *uParam0);
		MAP::_0x662D364ABF16DE2F(uParam0->f_6, 580546400);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_6, "BLIP_DEBUG");
		if (bParam1)
		{
			_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
			func_37("BEAT_GLB", 5500, 0, 1, 0, 0, -1, -1, 0);
		}
		PED::_0x9851DE7AEC10B4E1(*uParam0, 100f, 1, 0);
	}
}

bool func_414(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_415(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, int iParam7, bool bParam8, float fParam9)
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
	if (func_213(vParam0))
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
		if (func_278(vParam0))
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
	func_648(iVar0, bParam8);
	return iVar0;
}

void func_416(int iParam0)
{
	if (!func_223(iParam0))
	{
		return;
	}
	func_649(iParam0);
}

void func_417(var uParam0, vector3 vParam1)
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

int func_418(int iParam0)
{
	if (func_82(iParam0, 2))
	{
		return 200;
	}
	if (func_82(iParam0, 4))
	{
		return 70;
	}
	if (func_82(iParam0, 32))
	{
		return 400;
	}
	return 110;
}

int func_419(int iParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (func_60(iParam0, 131072))
	{
		return 0;
	}
	else
	{
		if (iParam0 == 6)
		{
			if (func_457() == 8)
			{
				return 3;
			}
		}
		bVar0 = func_60(iParam0, 2);
		bVar1 = func_60(iParam0, 1);
		bVar2 = (bVar0 && bVar1);
		if (bVar2)
		{
			if (!func_261())
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

void func_420(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
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
	if (func_82(iParam3, 2097152))
	{
		*uParam0 = (*uParam0 + 15f);
		*uParam2 = BUILTIN::CEIL((*uParam0 + 50f));
	}
	else
	{
		*uParam2 = 70;
	}
}

void func_421(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
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
	if (func_82(iParam3, 2))
	{
		*uParam0 = (*uParam0 + 60f);
		*uParam1 = (*uParam1 + 60f);
		*uParam2 = BUILTIN::CEIL((*uParam0 + 110f));
	}
	else if (func_82(iParam3, 2097152))
	{
		*uParam0 = (*uParam0 + 30f);
		*uParam2 = BUILTIN::CEIL((*uParam0 + 30f));
	}
	else
	{
		*uParam2 = 70;
	}
}

bool func_422(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = (func_410(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_17503.f_12[iVar1]), iVar2);
}

int func_423(int iParam0, vector3 vParam1, float fParam4, float fParam5)
{
	float fVar0;

	if (func_213(vParam1))
	{
		return 0;
	}
	if (func_425(iParam0, vParam1))
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
	if (func_173(iParam0))
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

int func_424(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_213(*(uParam0->f_12[iVar0 /*3*/])))
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

int func_425(int iParam0, vector3 vParam1)
{
	int iVar0;

	if (!func_60(iParam0, 1))
	{
		iVar0 = 1;
	}
	if (func_650(vParam1, 0, 0, iVar0))
	{
		return 1;
	}
	if (func_60(iParam0, 33554432))
	{
		if (func_651(vParam1, 200f, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_426(int iParam0, var uParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;

	iVar0 = 1;
	if (func_82(iParam0, 128))
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
	if (func_60(iParam0, 1) && !func_60(iParam0, 2))
	{
		if (func_60(iParam0, 4096) || func_60(iParam0, 2048))
		{
			if (func_652(*uParam1))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

int func_427(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	var uVar0;

	uVar0 = func_1(&uParam0);
	if (!func_653())
	{
		return 0;
	}
	return 1;
}

bool func_428(vector3 vParam0, int iParam3)
{
	vector3 vVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam3))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam3) };
	return func_654(vVar0, vParam0) > func_654(vVar0, ENTITY::GET_ENTITY_COORDS(iParam3, true, false));
}

int func_429(int iParam0)
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

int func_430(int iParam0)
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

void func_431(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_432(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_433(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_655(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

int func_434(var uParam0, var uParam1)
{
	vector3 vVar0;

	vVar0 = { *uParam0 };
	if (func_231(&uParam1))
	{
		return 1;
	}
	if (!func_232(&vVar0, 1, 10, 0))
	{
		return 0;
	}
	*uParam0 = { vVar0 };
	return 1;
}

bool func_435(int iParam0)
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

bool func_436(var uParam0)
{
	return func_402(*uParam0, 4);
}

bool func_437(var uParam0)
{
	return func_402(*uParam0, 64);
}

bool func_438(var uParam0)
{
	return func_402(*uParam0, 8);
}

bool func_439(var uParam0)
{
	return func_402(*uParam0, 128);
}

bool func_440(var uParam0)
{
	return func_402(*uParam0, 256);
}

void func_441(int iParam0, bool bParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 146, !bParam1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 148, !bParam1);
}

bool func_442(var uParam0)
{
	return func_402(*uParam0, 512);
}

bool func_443(var uParam0)
{
	return func_402(*uParam0, 1024);
}

bool func_444(var uParam0)
{
	return func_402(*uParam0, 2048);
}

struct<5> func_445(int iParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;

	Var0 = { func_656(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_657(iParam0))
	{
		case -1037537535:
			if (!INVENTORY::_0x780C5B9AE2819807(iParam0, 1034665895))
			{
				Var0 = { func_449(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_658(bParam1) };
			if (iParam2 && func_659(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_447(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_447(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_448(iParam0, &Var5, 1728382685))
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
			Var0 = { func_660(bParam1) };
			switch (func_661(iParam0))
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
			if (func_662(iParam0, -1823706425))
			{
				Var0 = { func_449(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, -1838434463);
			}
			else if (func_662(iParam0, -1483207246))
			{
				Var0 = { func_449(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_663(Var0, &Var27, bParam1, 0))
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

int func_446(int iParam0, int iParam1)
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

bool func_447(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_664(iParam0, *uParam1, iParam2, bParam3) > 0;
}

int func_448(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_665(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_449(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_666(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_667(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_450(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (func_668(iParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_663(*uParam1, &Var0, bParam6, 0))
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
	if (!func_451(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_667(bParam6), uParam1, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_451(bool bParam0)
{
	if (func_242() == -1)
	{
		return 1;
	}
	return INVENTORY::_0x0FBBFFC891A97C81(func_667(bParam0));
}

int func_452(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_669(iParam0))
	{
		return 0;
	}
	if (!func_451(0))
	{
		return 0;
	}
	WEAPON::_0x106A811C6D3035F3(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_453(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::_0xD3750CCC00635FC2(iParam0))
	{
		iVar1 = func_286(WEAPON::_0xD3750CCC00635FC2(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

var func_454(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

int func_455(int iParam0)
{
	var uVar0;

	if (iParam0 == -1)
	{
		uVar0 = func_670(1);
	}
	else
	{
		uVar0 = func_671(iParam0);
	}
	return uVar0;
}

void func_456(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 != 0)
	{
		iVar0 = func_672(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_673(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17503.f_2205[iVar2 /*2*/] = &Global_17503.f_2205[iVar2 /*2*/] + 1;
	}
}

int func_457()
{
	return Global_1897952->f_41;
}

void func_458(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 != -1 && !func_82(iParam0, 8192))
	{
		iVar0 = func_673(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17503.f_2205[iVar0 /*2*/] = &Global_17503.f_2205[iVar0 /*2*/] + 1;
	}
}

void func_459(int iParam0, int iParam1, float fParam2, int iParam3, bool bParam4)
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
	func_397(iParam0, iParam3, BUILTIN::ROUND((fVar0 * fParam2)), BUILTIN::ROUND((fVar1 * fParam2)), BUILTIN::ROUND((fVar2 * fParam2)), BUILTIN::ROUND((fVar3 * fParam2)), bParam4, 1);
}

void func_460(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 1;
	if (bParam1)
	{
		iVar0 = 3;
	}
	if (func_60(iParam0, 262144))
	{
		if (Global_1392135->f_3 == -1)
		{
			func_674(262144, iVar0, 0, 1);
		}
	}
	if (func_60(iParam0, 128))
	{
		func_674(128, iVar0, 0, 1);
	}
	else if (func_60(iParam0, 524288))
	{
		func_674(524288, iVar0, 0, 1);
	}
	else if (func_60(iParam0, 536870912))
	{
		func_674(536870912, iVar0, 0, 1);
	}
	else if (func_60(iParam0, 4194304))
	{
		func_674(4194304, iVar0, 0, 1);
	}
	else if (func_60(iParam0, 8388608))
	{
		func_674(8388608, iVar0, 0, 1);
	}
}

void func_461(int iParam0)
{
	Global_1310750->f_16077 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1310750->f_16071 = iParam0;
}

int func_462(bool bParam0)
{
	if (!bParam0 && func_675(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(752193127, bParam0, 0);
	return 1;
}

int func_463()
{
	return Global_1310750->f_16037;
}

int func_464(int iParam0)
{
	if (!func_223(iParam0))
	{
		return 0;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_47;
}

void func_465(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_223(&(Global_1310750->f_13321[iParam0 /*9*/])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID((Global_1310750->f_13321[iParam0 /*9*/])->f_5, 523);
	((*Global_1310750)[iVar0 /*111*/])->f_48 = 0;
	func_676(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

void func_466(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	func_677(Global_1393447, 1);
	func_678();
	func_679();
	func_680((BUILTIN::TO_FLOAT(200) / 3f));
	if (iParam0 != 8)
	{
		Global_1392135->f_54 = (func_284() / 1000);
		if (Global_1392135->f_1 & 4 != 0)
		{
			Global_1392135->f_1 = (Global_1392135->f_1 - Global_1392135->f_1 & 4);
		}
		func_681();
		if (iParam1 == -1)
		{
			if (func_3(iParam0, 1))
			{
				func_674(16777216, 2, 0, 1);
				iVar0 = BUILTIN::FLOOR(240f);
			}
			else if (func_3(iParam0, 2))
			{
				func_674(16777216, 0, 0, 1);
				iVar0 = BUILTIN::FLOOR(60f);
			}
			else if (func_3(iParam0, 4))
			{
				func_674(16777216, 5, 0, 1);
				iVar0 = BUILTIN::FLOOR(900f);
			}
			Global_1392135->f_4 = (Global_1392135->f_54 + iVar0);
		}
		else
		{
			func_682(iParam1, iParam2, iParam3, iParam4);
			Global_1392135->f_5[iParam1] = (((Global_1392135->f_54 + iParam2) + iParam3 * 60) + iParam4 * 3600);
		}
		func_683(BUILTIN::TO_FLOAT(iVar0), 1, 0);
	}
	else
	{
		func_683((BUILTIN::TO_FLOAT(200) / 3f), 1, 0);
	}
}

bool func_467(int iParam0, int iParam1)
{
	return (Global_40.f_9571[iParam1 /*10*/] && iParam0) != 0;
}

void func_468(int iParam0, int iParam1)
{
	((*Global_1392050)[iParam1 /*14*/])->f_1 = (((*Global_1392050)[iParam1 /*14*/])->f_1 - (((*Global_1392050)[iParam1 /*14*/])->f_1 && iParam0));
}

void func_469(int iParam0, int iParam1)
{
	Global_40.f_9571[iParam1 /*10*/] = (Global_40.f_9571[iParam1 /*10*/] || iParam0);
}

int func_470(int iParam0)
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

bool func_471()
{
	return (Global_1935630->f_44 == joaat("weapon_kit_binoculars") && CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE());
}

int func_472(var uParam0, float fParam1, float fParam2, var uParam3)
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

int func_473(var uParam0, float fParam1, float fParam2, var uParam3)
{
	if (func_472(uParam0, fParam1, fParam2, uParam3))
	{
		if (uParam0->f_8 == 0f)
		{
			uParam0->f_8 = (func_315() - 0.02f);
		}
		return 1;
	}
	uParam0->f_8 = 0f;
	return 0;
}

int func_474(bool bParam0, var uParam1, var uParam2)
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

int func_475()
{
	return &Global_1899515;
}

int func_476(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_477(int iParam0)
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

int func_478(int iParam0)
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

int func_479(int iParam0)
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

int func_480(int iParam0)
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

int func_481(int iParam0)
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

int func_482(int iParam0)
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

int func_483(int iParam0)
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

int func_484(bool bParam0, var uParam1, var uParam2)
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

int func_485()
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

int func_486(int iParam0)
{
	if (!func_489(iParam0))
	{
		return -1;
	}
	return func_685(func_684(iParam0));
}

bool func_487(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_488(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_489(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_490(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_491(int iParam0)
{
	return func_60(iParam0, Global_1310750->f_16072 | 64);
}

int func_492(int iParam0)
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

int func_493(int iParam0)
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

bool func_494(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_495(int iParam0)
{
	return ((Global_1310750[iParam0 /*111*/] != 0 && !MISC::IS_STRING_NULL_OR_EMPTY(&(((*Global_1310750)[iParam0 /*111*/])->f_40))) && HUD::GET_LENGTH_OF_LITERAL_STRING(&(((*Global_1310750)[iParam0 /*111*/])->f_40)) != 0);
}

void func_496(int iParam0, bool bParam1, int iParam2)
{
	func_686(iParam2);
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
		iParam0->f_10 = 0;
	}
	iParam0->f_5 = iParam2;
	if (Global_1572887->f_12 == -1)
	{
		iParam0->f_13 = Global_1935630->f_44;
	}
	else
	{
		iParam0->f_13 = func_687(0);
	}
	switch (iParam0->f_6)
	{
		case 0:
			if (*iParam0 & 16 != 0)
			{
				if (!*iParam0 & 33554432 != 0)
				{
					if (iParam0->f_13 == joaat("weapon_thrown_dynamite"))
					{
						if (PED::IS_PED_PLANTING_BOMB(Global_35))
						{
							func_24(iParam0, 33554432);
						}
					}
					else if (!*iParam0 & 8192 != 0)
					{
						if (func_267(1))
						{
							func_24(iParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_267(1) || *iParam0 & 8192 != 0))
				{
					func_42(iParam0, 33554432);
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
	if (!iParam0->f_1 & 1024 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_14))
		{
			if (func_688(iParam0))
			{
				iParam0->f_15 = func_284();
			}
		}
		else if (iParam0->f_15 > 0)
		{
			if ((func_284() - iParam0->f_15) > 500)
			{
				if (!PED::IS_PED_ON_MOUNT(iParam0->f_14))
				{
					iParam0->f_14 = 0;
					iParam0->f_15 = 0;
				}
			}
		}
	}
	iParam0->f_6++;
	if (iParam0->f_6 >= 4)
	{
		iParam0->f_6 = 0;
		iParam0->f_7++;
		if (iParam0->f_7 > 4)
		{
			iParam0->f_7 = 0;
		}
	}
	func_689(iParam0);
}

int func_497(int iParam0, int iParam1)
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
			if (!func_690(iParam0, iParam1, iVar2))
			{
				return 0;
			}
			if (func_691(iParam0, iVar2) <= func_692(iParam1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_498(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		iParam1->f_10 = iParam0;
	}
	if (func_90(iParam2, 1, 1, 1, 0))
	{
		func_24(iParam1, 2048);
	}
	iParam1->f_16 = iParam2;
	func_285(iParam1, 1);
	func_395();
}

int func_499(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_693(iParam0, !*iParam1 & 268435456 != 0, !*iParam1 & 536870912 != 0, !*iParam1 & 1073741824 != 0, 0, 0))
		{
			if (iParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (iParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_694(iParam1);
			if (func_695(iParam1, iParam0, fVar0, fVar1))
			{
				if (iParam1->f_2 == 0)
				{
					iParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - iParam1->f_2);
				iVar3 = func_696(iParam1);
				if (iParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_285(iParam1, 1);
						return 1;
					}
					else if (iParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_285(iParam1, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_500(int iParam0, int iParam1, int iParam2)
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
	if (func_697(iParam1, !*iParam2 & 268435456 != 0, !*iParam2 & 536870912 != 0, !*iParam2 & 1073741824 != 0, 0))
	{
		if (iParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (iParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_694(iParam2);
		if (func_695(iParam2, iParam0, fVar0, fVar1))
		{
			if (iParam2->f_2 == 0)
			{
				iParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (iParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - iParam2->f_2) > func_696(iParam2)
				{
					func_285(iParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_501(int iParam0, int iParam1)
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
	if (func_690(iParam0, iParam1, iVar1))
	{
		if (iParam1->f_3 == 0)
		{
			iParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - iParam1->f_3) > func_696(iParam1)
		{
			fVar3 = func_694(iParam1);
			if (iParam1->f_12 < fVar3)
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

int func_502(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_284();
	iVar1 = (iVar0 - iParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return 1;
	}
	return 0;
}

int func_503(var uParam0, int iParam1, int iParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_698(iParam2);
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
			if (func_511(iParam2, iParam1))
			{
				func_285(iParam2, 1);
				return 1;
			}
		}
	}
	return 0;
}

int func_504(var uParam0, int iParam1, int iParam2)
{
	var uVar0;

	if (iParam2->f_12 < IntToFloat(func_699(iParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && !WEAPON::_0x5809DBCA0A37C82B(Global_1935630->f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_511(iParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_285(iParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_505(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_700(iParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(217247011, vVar0, iParam2->f_22))
				{
					func_285(iParam2, 1);
					return 1;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(956330317, vVar0, iParam2->f_27))
				{
					func_285(iParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-966930978, vVar0, iParam2->f_22))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("weapon_thrown_dynamite"), iParam2->f_26, &vVar4, 0, 0);
					if (func_701(iParam1, vVar0, vVar4))
					{
						func_285(iParam2, 1);
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
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(217247011, vVar0, iParam2->f_22))
				{
					func_285(iParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-966930978, vVar0, iParam2->f_22))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("weapon_thrown_dynamite"), iParam2->f_26, &vVar7, 0, 0);
					if (func_701(iParam1, vVar0, vVar7))
					{
						func_285(iParam2, 1);
						return 1;
					}
				}
				break;
		}
	}
	return 0;
}

int func_506(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	vector3 vVar2[2];
	vector3 vVar9;
	bool bVar12;
	bool bVar13;

	vVar9 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	bVar12 = *iParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_690(iParam0, iParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_702(&(Global_1935630->f_34[iVar0]));
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_703(&(Global_1935630->f_34[iVar0])))
			{
				if (fVar1 < 35f)
				{
					if ((DECORATOR::DECOR_EXIST_ON(&(Global_1935630->f_34[iVar0]), "HorseTeamA") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA")) || (DECORATOR::DECOR_EXIST_ON(&(Global_1935630->f_34[iVar0]), "HorseTeamB") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB")))
					{
						*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
						*(vVar2[1 /*3*/]) = { vVar9 };
						iParam1->f_10 = iParam0;
						return 1;
					}
				}
			}
			if (func_704(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				iParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_705(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				iParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_706(iParam1, iParam0, fVar1, iVar0))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				iParam1->f_10 = iParam0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_507(int iParam0, int iParam1)
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

int func_508(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_284();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

int func_509(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_707(iVar0, &iVar2))
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
	if (func_708(iVar0, iParam0))
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

int func_510(int iParam0, int iParam1)
{
	int iVar0;

	if (!DECORATOR::DECOR_EXIST_ON(iParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (DECORATOR::DECOR_SET_INT(iParam1, "iDamageFrame", iParam0->f_5))
		{
		}
	}
	else if (iParam0->f_5 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

int func_511(int iParam0, int iParam1)
{
	if (func_709(iParam0))
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

int func_512(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return 1;
		}
		if (func_322(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_513()
{
}

int func_514(int iParam0, int iParam1)
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
		if (func_710(iVar0, iParam1, vVar1))
		{
			iParam0->f_9 = func_284();
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
						if (func_154(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								iParam0->f_9 = func_284();
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

int func_515()
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
	if ((func_284() - Global_1935630->f_43) >= 10000)
	{
		return 0;
	}
	return 1;
}

int func_516(int iParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_14))
	{
		return 0;
	}
	if (!PED::IS_PED_HUMAN(iParam1))
	{
		return 0;
	}
	fVar0 = func_692(iParam0);
	if (iParam0->f_12 > func_711(iParam0) && iParam0->f_12 > fVar0)
	{
		return 0;
	}
	iVar2 = func_712(iParam1);
	iVar1 = func_713(iParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((iParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, Global_35, 1, 0) == 1)) || ((PED::_0x06087579E7AA85A9(iParam1, iParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iParam0->f_14, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, iParam0->f_14, 1, 0) == 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_517(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (iParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *iParam2 & 256 != false;
	bVar1 = *iParam2 & 524288 != false;
	bVar2 = *iParam2 & 128 != false;
	return func_714(iParam0, iParam1, bVar0, bVar2, iParam2->f_12, bVar1);
}

int func_518(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (*iParam1 & 67108864 != 0)
	{
		return 1;
	}
	if (Global_1935630->f_24)
	{
		return 1;
	}
	if (*iParam1 & 33554432 != 0)
	{
		if (func_715(iParam0, iParam1, 1))
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
					if (!func_716(iParam1, iParam0))
					{
						if (func_154(iVar4, Global_36, 1) < 7f)
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

int func_519(int iParam0, int iParam1)
{
	if (!func_165(0))
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

int func_520(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_284();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_521(int iParam0, int iParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_522(int iParam0, int iParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (iParam1->f_4 == 0)
	{
		iParam1->f_4 = func_284();
	}
	else if (func_284() - iParam1->f_4) > func_717(iParam1)
	{
		return func_718(iParam0, iParam1, 0, -1082130432);
	}
	return 0;
}

int func_523(int iParam0, int iParam1)
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

void func_524(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_525(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_526(int iParam0)
{
	return func_719(iParam0, 2);
}

int func_527(int iParam0, int iParam1, float fParam2, bool bParam3)
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

int func_528(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;

	if (((PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::GET_PLAYER_INDEX(), &iVar0, iParam6, iParam7) && (!bParam5 || !ENTITY::IS_ENTITY_DEAD(iVar0))) && ENTITY::IS_ENTITY_A_PED(iVar0)) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0) == *uParam0)
	{
		PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), *uParam0, 3, 2, iParam1);
		PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), *uParam0, 4, 2, iParam2);
		PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), *uParam0, 7, 2, iParam3);
		return 1;
	}
	if (bParam4)
	{
		PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), *uParam0, 3, 2, 0);
		PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), *uParam0, 4, 2, 0);
		PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), *uParam0, 7, 2, 0);
	}
	return 0;
}

void func_529(var uParam0)
{
	if (*uParam0 & 1 != 0)
	{
		*uParam0 |= 64 | 16 | 16777216;
	}
}

int func_530(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		func_529(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::_0x92A78D0BEDB332A3(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar8 = func_183(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
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
			func_93(&(iParam1->f_13));
		}
		if (func_720(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_721(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_530(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_722(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317, true))
						{
							func_723(*uParam0, 1, 1);
						}
					}
					else if (func_724(iParam1, 22))
					{
						func_723(*uParam0, 0, 1);
					}
				}
				if (func_725(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_726(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_727(iParam8);
					if (func_728(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET(uParam3[iParam1->f_1 /*17*/], 20))
								{
									func_729(uParam3);
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
					func_730(iParam1, uParam3, fVar8);
					if (func_731(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						func_33(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_732(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_725(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_733(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_728(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_726(uParam0, func_725(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_727(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_33(uParam3, 0, 0, 1, 1);
					}
					func_734(iParam1, 1);
				}
				func_730(iParam1, uParam3, fVar8);
				if (func_732(uParam0, iParam1, fParam4, bVar6))
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
			func_167(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_531(int* iParam0, var uParam1, var uParam2)
{
	int iVar0;
	char* sVar1;
	var uVar2;

	iVar0 = func_735(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = ((*uParam1)[iVar0 /*17*/])->f_13;
		uVar2 = ((*uParam1)[iVar0 /*17*/])->f_15;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			func_141(Global_35, *uParam2, sVar1, "", -1082130432, uVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

bool func_532(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_242() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iVar1]), iVar2);
}

int func_533(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 38)
	{
		return 1;
	}
	return 0;
}

void func_534(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	int iVar0;

	if (iParam3 && !func_96(iParam0))
	{
		return;
	}
	iVar0 = func_292(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, MISC::_CREATE_VAR_STRING(2, sParam1, sParam2));
}

void func_535(int iParam0, char* sParam1, int iParam2)
{
	int iVar0;

	if (iParam2 && !func_96(iParam0))
	{
		return;
	}
	iVar0 = func_292(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, sParam1);
}

void func_536(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (iParam2 && !func_96(iParam0))
	{
		return;
	}
	iVar0 = func_292(iParam0);
	if (bParam1)
	{
		func_736(iParam0, 4);
		func_737(iVar0, 1);
		func_738(iVar0, 1);
	}
	else
	{
		func_739(iParam0, 4);
		func_738(iVar0, 0);
	}
}

void func_537(int* iParam0, char* sParam1)
{
	if (func_96(iParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		func_535(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_540(iParam0, 1);
}

bool func_538(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

void func_539(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_540(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

float func_541(vector3 vParam0, vector3 vParam3)
{
	vector3 vVar0;

	vVar0 = { vParam3 - vParam0 };
	if (vVar0.y == 0f)
	{
		if (vVar0.x < 0f)
		{
			return -90f;
		}
		else
		{
			return 90f;
		}
	}
	return MISC::ATAN2(vVar0.x, vVar0.y);
}

void func_542(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	MISC::_0x2FCD528A397E5C88(iParam0, iVar0);
}

void func_543(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	iVar0 = 8;
	if (bParam1)
	{
		iVar0 |= 72;
	}
	if (bParam2)
	{
		iVar0 |= 131072;
	}
	if (bParam3)
	{
		iVar0 |= 24;
	}
	if (bParam4)
	{
		iVar0 |= 40;
	}
	if (bParam5)
	{
		iVar0 |= 524288;
	}
	MISC::_0x2FCD528A397E5C88(iParam0, iVar0);
}

void func_544(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 512;
	if (iParam1 & 1 != 0)
	{
		iVar0 |= 524288;
	}
	if (iParam1 & 2 != 0)
	{
		iVar0 |= 1536;
	}
	if (iParam1 & 4 != 0)
	{
		iVar0 |= 2560;
	}
	if (iParam1 & 8 != 0)
	{
		iVar0 |= 4608;
	}
	if (iParam1 & 16 != 0)
	{
		iVar0 |= 8704;
	}
	MISC::_0x2FCD528A397E5C88(iParam0, iVar0);
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

int func_546(int iParam0)
{
	switch (iLocal_873)
	{
		case 76:
		case 92:
			switch (iLocal_17)
			{
				case 0:
					switch (iParam0)
					{
						case 1:
							return -446424746;
						default:
							break;
					}
					break;
			}
			break;
	}
	return -1;
}

void func_547(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

int func_548(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<4> Var4;
	bool bVar18;

	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = func_239(uParam1, 128);
	if (func_740("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_741(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_240(Var4.f_4))
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
				if (((WEAPON::_0xD955FEE4B87AFA07(Var4.f_4) && (!WEAPON::_0xC75386174ECE95D5(Var4.f_4) || func_239(uParam1, 32))) && (!WEAPON::_0xDDC64F5E31EEDAB6(Var4.f_4) || !func_239(uParam1, 8192))) && (!WEAPON::_0xC212F1D05A8232BB(Var4.f_4) || !func_239(uParam1, 16384)))
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
		func_742(iVar1);
	}
	if (func_240(iVar0))
	{
	}
	return iVar0;
}

bool func_549(int iParam0, int iParam1)
{
	if (func_242() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iParam0]), iParam1);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iParam0]), iParam1);
}

int func_550(int iParam0)
{
	if (func_242() != -1)
	{
		if (func_552(iParam0, 4))
		{
			return 0;
		}
	}
	else if (func_552(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

int func_551(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_552(iParam0, 65536) && !func_552(iParam0, 32768))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if ((Global_40.f_7756[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_552(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0 /*3*/] - iVar1);
			if ((Global_40.f_7756[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && func_552(iParam0, 32768))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_552(int iParam0, int iParam1)
{
	return ((Global_1905944->f_22[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

bool func_553(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_554()
{
	return Global_1905944->f_5694;
}

void func_555(int* iParam0, var uParam1, bool bParam2)
{
	if (uParam1 && !func_538(iParam0, 13))
	{
		func_539(iParam0, 0);
	}
	else
	{
		func_540(iParam0, 0);
	}
	if (func_96(iParam0->f_6))
	{
		if (bParam2)
		{
			func_97(&(iParam0->f_6), 0, 1);
		}
	}
}

bool func_556(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

void func_557(int iParam0, int iParam1)
{
	DECORATOR::DECOR_SET_INT(iParam0, "pedRoam_state", iParam1);
}

void func_558(int iParam0, int iParam1)
{
	DECORATOR::DECOR_SET_INT(iParam0, "pedRoam_behavior", iParam1);
}

void func_559(int iParam0, int iParam1)
{
	DECORATOR::DECOR_SET_INT(iParam0, "pedRoam_target", iParam1);
}

int func_560(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ITEMSET::IS_ITEMSET_VALID(&Global_1396084))
	{
		return 0;
	}
	iVar0 = ITEMSET::GET_ITEMSET_SIZE(&Global_1396084);
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, &Global_1396084);
		if (MISC::_0xBDC6E364C9C78178(iVar1))
		{
			if (DECORATOR::DECOR_EXIST_ON(iVar1, "pedRoam_hashKey"))
			{
				if (DECORATOR::DECOR_GET_INT(iVar1, "pedRoam_hashKey") == iParam0)
				{
					return 1;
				}
			}
		}
		iVar2++;
	}
	return 0;
}

bool func_561(int iParam0)
{
	return AUDIO::_0xA2CAC9DEF0195E6F(iParam0);
}

int func_562(int iParam0, int iParam1, float fParam2, bool bParam3)
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

int func_563(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_564(int iParam0)
{
	int iVar0;
	var uVar1;

	if (!func_743(iParam0))
	{
		return 0;
	}
	uVar1 = func_744(iParam0);
	iVar0 = uVar1;
	if (iVar0 < 0 || iVar0 >= 27)
	{
		return 0;
	}
	return Global_1360165[iVar0 /*1157*/];
}

Vector3 func_565(int iParam0, vector3 vParam1, float fParam4, int iParam5)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	vector3 vVar7;

	vVar0 = { func_545(vParam1) };
	vVar3 = { VOLUME::_0xF70F00013A62F866(iParam0) };
	iVar6 = 0;
	while (iVar6 < iParam5)
	{
		vVar7 = { vVar3 + vVar0 * Vector(fParam4, fParam4, fParam4) * FtoV(BUILTIN::TO_FLOAT(iVar6)) };
		if (!VOLUME::_0xF256A75210C5C0EB(iParam0, vVar7))
		{
			return vVar7;
		}
		iVar6++;
	}
	return vVar3;
}

void func_566(int iParam0, int iParam1, var uParam2, vector3 vParam3, vector3 vParam6, float fParam9, float fParam10, float fParam11, float fParam12, int iParam13, bool bParam14, int iParam15)
{
	vector3 vVar0[3];
	vector3 vVar10[3];
	int iVar20;
	int iVar21;
	int iVar22;
	struct<4> Var23;
	int iVar27;

	if (iParam0 <= -1)
	{
		return;
	}
	if (bParam14)
	{
		iVar20 = func_745(iParam0, iParam1);
		func_746(&vVar0, &vVar10, iVar20, vParam3, vParam6, fParam9, fParam10, fParam11);
	}
	iVar21 = uParam2;
	iVar22 = 0;
	while (iVar22 < 3)
	{
		StringCopy(&Var23, "", 32);
		iVar27 = 0;
		if (iVar21 > 0)
		{
			StringCopy(&Var23, func_747(iParam0, 3), 32);
			iVar21 = (iVar21 - 1);
			iVar27 = 1;
		}
		func_749(iParam0, func_748(iParam0), iVar27, bParam14, &Var23, *(vVar0[iVar22 /*3*/]), *(vVar10[iVar22 /*3*/]), vParam6, iVar22, 0, -1082130432, fParam12, iParam13, iParam15);
		iVar22++;
	}
}

void func_567(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < func_205(1))
	{
		func_750(Global_1359489[iVar0], iParam0);
		iVar0++;
	}
}

void func_568(int iParam0)
{
	int iVar0;

	if (func_242() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_196(func_751(iVar0), 0))
		{
			if (PED::IS_PED_GROUP_MEMBER(func_751(iVar0), func_406(), 1))
			{
				func_752(iVar0, iParam0);
			}
		}
		iVar0++;
	}
}

var func_569(var uParam0, var uParam1)
{
	return AUDIO::_PLAY_AMBIENT_SPEECH1(uParam0, uParam1);
}

bool func_570(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

int func_571(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

void func_572(bool bParam0)
{
	if (bParam0)
	{
		Global_1935689 = 1;
	}
	else
	{
		Global_1935689 = 2;
	}
}

void func_573(vector3 vParam0)
{
	float fVar0;
	vector3 vVar1;

	if (!Global_1935630->f_12)
	{
		vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Global_35, vParam0) };
		fVar0 = MISC::GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fVar0, 1065353216);
		CAM::_0x05BD5E4088B30A66(-180f, 180f);
	}
}

void func_574(vector3 vParam0)
{
	vector3 vVar0;
	float fVar3;

	if (!Global_1935630->f_12)
	{
		vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Global_35, vParam0) };
		fVar3 = MISC::ATAN((vVar0.z / BUILTIN::SQRT(((vVar0.y * vVar0.y) + (vVar0.x * vVar0.x)))));
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fVar3, 1f);
	}
}

void func_575(var uParam0, var uParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	float fVar10;

	fVar10 = func_74(uParam0->f_45, uParam0->f_42, 1);
	if (func_197(uParam0, 64))
	{
		vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_45, fVar10, 0.25f, 0f, 0f) };
	}
	else
	{
		vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_45, fVar10, 0.25f, 0f, 1f) };
	}
	if (!func_3(uParam0->f_88, 2))
	{
		if (!CAM::DOES_CAM_EXIST(&(uParam1->f_20[0])))
		{
			uParam1->f_20[0] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
		}
		func_753(uParam0, *uParam1);
		if (!CAM::DOES_CAM_EXIST(&(uParam1->f_20[1])))
		{
			uParam1->f_20[1] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
			if (!func_213(uParam0->f_42))
			{
				vVar0 = { uParam0->f_42 };
			}
			else
			{
				vVar0 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
			}
			fVar9 = func_74(vVar0, uParam0->f_45, 1);
			if (!func_213(*(uParam0->f_51[1 /*3*/])))
			{
				vVar6 = { *(uParam0->f_51[1 /*3*/]) };
			}
			else
			{
				vVar6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar9, 0.8385f, -2.5071f, 1.5f) };
			}
			if (CAM::DOES_CAM_EXIST(&(uParam1->f_20[1])))
			{
				CAM::SET_CAM_COORD(&(uParam1->f_20[1]), vVar6);
				if (&uParam0->f_75[1])
				{
					CAM::ATTACH_CAM_TO_ENTITY(&(uParam1->f_20[1]), Global_35, vVar6, true);
				}
				if (!func_213(*(uParam0->f_61[1 /*3*/])))
				{
					CAM::SET_CAM_ROT(&(uParam1->f_20[1]), *(uParam0->f_61[1 /*3*/]), 2);
				}
				else
				{
					CAM::POINT_CAM_AT_COORD(&(uParam1->f_20[1]), vVar3);
				}
				if (&uParam0->f_71[1] > 0f)
				{
					CAM::SET_CAM_FOV(&(uParam1->f_20[1]), &(uParam0->f_71[1]));
				}
				else
				{
					CAM::SET_CAM_FOV(&(uParam1->f_20[1]), 35f);
				}
			}
		}
	}
}

void func_576(char* sParam0)
{
}

void func_577()
{
}

void func_578(int iParam0)
{
	PLAYER::_0x51345AE20F22C261(PLAYER::PLAYER_ID(), BUILTIN::TO_FLOAT(iParam0 * 14), 0, 0, 0);
}

void func_579(var uParam0, var uParam1)
{
	if (func_197(uParam1, 64))
	{
		uParam0->f_63 = 529077016;
		uParam0->f_65 = "MINI_DUEL@PLAYER@MISSION@MUD4";
	}
	else if (func_197(uParam1, 32))
	{
		uParam0->f_63 = 2002375312;
		uParam0->f_65 = "MINI_DUEL@PLAYER@MISSION@IND3@IG9";
	}
	else
	{
		uParam0->f_63 = -1910137495;
		uParam0->f_65 = "MINI_DUEL@PLAYER@BASE";
	}
	if (func_197(uParam1, 32))
	{
		uParam0->f_64 = -1516447524;
		uParam0->f_66 = "MINI_DUEL@CHALLENGER@MISSION@IND3@IG9";
	}
	else if (func_197(uParam1, 512))
	{
		uParam0->f_64 = 986377420;
		uParam0->f_66 = "MINI_DUEL@CHALLENGER@RC@RCAL@RC3_IG1";
	}
	else if (PED::_0x50F124E6EF188B22(uParam1->f_1) && PED::_0x6FB76442469ABD68(uParam1->f_1) >= 0.4f)
	{
		uParam0->f_64 = -298479946;
		uParam0->f_66 = "MINI_DUEL@CHALLENGER@DRUNK";
	}
	else
	{
		uParam0->f_64 = -1925057680;
		uParam0->f_66 = "MINI_DUEL@CHALLENGER@BASE";
	}
}

void func_580(var uParam0, var uParam1)
{
	uParam0->f_88 = uParam0->f_88;
	uParam1->f_1 = uParam1->f_1;
	STREAMING::REQUEST_ANIM_DICT("MINI_DUEL@REPOSITION@BASE");
	STREAMING::REQUEST_ANIM_DICT(uParam1->f_65);
	STREAMING::REQUEST_ANIM_DICT(uParam1->f_66);
	STREAMING::REQUEST_ANIM_DICT("MINI_DUEL@PLAYER@ACTION");
	STREAMING::REQUEST_ANIM_DICT("MINI_DUEL@PLAYER@NORMAL");
	if (!func_328(&(uParam0->f_48)))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(*uParam0, &(uParam0->f_48), true, 2, false);
		if (!func_328(&(uParam0->f_48)))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(*uParam0, &(uParam0->f_48), true, 3, false);
		}
		if (!func_328(&(uParam0->f_48)))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(*uParam0, &(uParam0->f_48), true, 0, false);
		}
		if (!func_328(&(uParam0->f_48)))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(*uParam0, &(uParam0->f_48), true, 1, false);
		}
		if (!func_328(&(uParam0->f_48)))
		{
			uParam0->f_48 = 0;
		}
		if (!func_328(&(uParam0->f_48)))
		{
			uParam0->f_48 = func_329(131200, 0);
		}
		if (!func_328(&(uParam0->f_48)))
		{
			uParam0->f_48 = joaat("weapon_revolver_cattleman");
		}
	}
	if (!func_328(&(uParam0->f_49)))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(uParam0->f_1, &(uParam0->f_49), true, 2, false);
		if (!func_328(&(uParam0->f_49)))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(uParam0->f_1, &(uParam0->f_49), true, 3, false);
		}
		if (!func_328(&(uParam0->f_49)))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(uParam0->f_1, &(uParam0->f_49), true, 0, false);
		}
		if (!func_328(&(uParam0->f_49)))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(uParam0->f_1, &(uParam0->f_49), true, 1, false);
		}
		if (!func_328(&(uParam0->f_49)))
		{
			uParam0->f_49 = 0;
		}
		if (!func_328(&(uParam0->f_49)))
		{
			uParam0->f_49 = func_66(131072, 1056964608, 1065353216);
		}
		if (!func_328(&(uParam0->f_49)))
		{
			uParam0->f_49 = joaat("weapon_revolver_cattleman");
		}
	}
	if (!func_75(uParam1, 8192))
	{
		if (uParam0->f_48 != 0)
		{
			WEAPON::_0x72D4CB5DB927009C(uParam0->f_48, -1, 0);
		}
		if (uParam0->f_49 != 0)
		{
			WEAPON::_0x72D4CB5DB927009C(uParam0->f_49, -1, 0);
		}
		func_76(uParam1, 8192);
	}
	if (!func_197(uParam0, 16384))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_16)))
		{
			StringCopy(&(uParam0->f_16), "DUEL_GENERAL_START", 32);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_20)))
		{
			StringCopy(&(uParam0->f_20), "DUEL_GENERAL_DRAW", 32);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_24)))
		{
			StringCopy(&(uParam0->f_24), "DUEL_GENERAL_CROSSHAIRS", 32);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_28)))
		{
			StringCopy(&(uParam0->f_28), "DUEL_GENERAL_STOP", 32);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_32)))
		{
			StringCopy(&(uParam0->f_32), "DUEL_GENERAL_END_OS", 32);
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_32)))
	{
		AUDIO::PREPARE_MUSIC_EVENT(&(uParam0->f_32));
	}
	HUD::_0xF66090013DE648D5("MGDUL");
}

int func_581(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

void func_582()
{
	func_754(Global_35, &(Global_1347400->f_46));
}

void func_583(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	iVar2 = 0;
	while (iVar2 < 5)
	{
		iVar0 = func_755(iVar2);
		if (iVar0 != 0 && WEAPON::HAS_PED_GOT_WEAPON(iParam0, iVar0, 0, 0))
		{
			iVar1 = WEAPON::GET_MAX_AMMO_IN_CLIP(iParam0, iVar0, true);
			WEAPON::SET_AMMO_IN_CLIP(iParam0, iVar0, iVar1);
		}
		iVar2++;
	}
}

bool func_584(int iParam0, var uParam1)
{
	return ITEMSET::IS_ITEMSET_VALID(iParam0);
}

struct<2> func_585()
{
	struct<2> Var0;

	Var0 = ITEMSET::CREATE_ITEMSET(true);
	return Var0;
}

void func_586(var uParam0, var uParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;

	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_86))
	{
		vVar0 = { func_756(uParam0->f_42, uParam0->f_45, 0.5f) };
		vVar3 = { 0f, 0f, func_74(uParam0->f_42, uParam0->f_45, 1) };
		vVar6 = { 12f, (MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_42, uParam0->f_45, true) + 30f), 25f };
		uParam0->f_86 = VOLUME::_CREATE_VOLUME_BOX(vVar0, vVar3, vVar6);
		ITEMSET::ADD_TO_ITEMSET(uParam0->f_86, *uParam1);
		POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_86, 534496, 0, 0, -1, -1, 0);
		POPULATION::_0xB56D41A694E42E86(uParam0->f_86, 534496, 0, 0, -1, -1, 2);
	}
}

int func_587(var uParam0, var uParam1)
{
	float fVar0;

	switch (uParam0->f_68)
	{
		case 0:
			StringCopy(&(uParam0->f_74), "generic_hint_cam", 64);
			StringCopy(&(uParam0->f_74.f_8), "GENERIC_HINT_CAM", 64);
			uParam0->f_74.f_19 = uParam1->f_1;
			CAM::_0x6A4D224FC7643941(&(uParam0->f_74));
			uParam0->f_68 = 1;
			break;
		case 1:
			if (CAM::_0xDD0B7C5AE58F721D(&(uParam0->f_74)))
			{
				uParam0->f_68 = 2;
			}
			break;
		case 2:
			fVar0 = 1f;
			func_381(&(uParam0->f_32), 0);
			if (func_291(&(uParam0->f_32), fVar0))
			{
				if (CAM::_0x927B810E43E99932(&(uParam0->f_74)))
				{
					CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_74));
				}
				func_195(&(uParam0->f_32));
				uParam0->f_68 = 3;
			}
			else if (!CAM::_0x927B810E43E99932(&(uParam0->f_74)))
			{
				CAM::_0xB8B207C34285E978(&(uParam0->f_74));
			}
			else
			{
				CAM::_0x7B0279170961A73F(&(uParam0->f_74));
			}
			break;
		case 3:
			return 1;
	}
	return 0;
}

void func_588(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_589(int iParam0, var uParam1, vector3 vParam2, bool bParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, float fParam11, bool bParam12, int iParam13, float fParam14)
{
	if (func_757(&(uParam1->f_3), 1))
	{
		func_758(uParam1);
		if (func_759(iParam0, fParam7, fParam11, bParam12, iParam13, fParam14))
		{
			func_190();
		}
	}
	if (func_760(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), uParam1, fParam7))
	{
		CAM::SET_GAMEPLAY_PED_HINT(iParam0, Vector(0f, 0f, 0f) + vParam2, bParam5, iParam8, iParam9, iParam10);
		func_761(uParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam6, iParam9);
	}
}

void func_590(int iParam0, var uParam1)
{
	int iVar0;
	vector3 vVar1;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = uParam1;
		vVar1 = { func_762() };
		DECORATOR::DECOR_SET_INT(iParam0, &vVar1, iVar0);
	}
}

Vector3 func_591()
{
	return 0f, 0f, 0f;
}

int func_592(int iParam0, var uParam1, vector3 vParam2, int iParam5, float fParam6, int iParam7, bool bParam8, int iParam9, bool bParam10, bool bParam11, float fParam12)
{
	int iVar0;
	var uVar1;
	struct<11> Var2;
	int iVar13;

	if (!func_763(iParam0))
	{
		if (bParam11)
		{
			iVar0 = func_764(7);
		}
		else
		{
			iVar0 = PED::_0x4C8B59171957BCF7(iParam0);
		}
		if (!func_196(iVar0, 1) || (!(VOLUME::_0x92A78D0BEDB332A3(iParam5) && func_257(iVar0, iParam5, 1, 0)) && func_322(iParam0, iVar0, 1, 1) > fParam6))
		{
			return 1;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			if (func_641(iVar0) && func_642(iVar0) != 1)
			{
				Var2.f_10 = 7;
				Var2.f_1 = 1;
				*uParam1 = func_765(&uVar1, &Var2);
				if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
				{
					*uParam1 = iVar0;
				}
			}
			else
			{
				*uParam1 = iVar0;
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			return 1;
		}
		if (func_196(*uParam1, 1))
		{
			if (!(func_321(*uParam1, 518218985) || func_321(*uParam1, 713668775)))
			{
				TASK::CLEAR_PED_TASKS(*uParam1, 1, 0);
				iVar13 = 0;
				if (!bParam10)
				{
					iVar13 = 16640;
				}
				FLOCK::_0xFF1E339CE40EAAAF(*uParam1, 0);
				POPULATION::_0xF74E134F40192884(*uParam1, 2);
				if (!func_213(vParam2))
				{
					bParam8 = false;
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam1, vParam2, fParam12, -1, 0.25f, false, 40000f);
				}
				if (VOLUME::_0x92A78D0BEDB332A3(iParam5))
				{
					POPULATION::_0xB56D41A694E42E86(iParam5, 2048, 0, 0, -1, -1, 2);
					if (bParam8)
					{
						TASK::_TASK_SMART_FLEE_STYLE_COORD(*uParam1, VOLUME::_0xF70F00013A62F866(iParam5), iParam7, iVar13, fParam6, 6000, 0);
					}
				}
				if (!bParam8 && func_213(vParam2))
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(*uParam1, iParam0, iParam7, iVar13, fParam6, 6000, 0);
				}
			}
		}
	}
	return 0;
}

void func_593(var uParam0, var uParam1, int iParam2, vector3 vParam3, vector3 vParam6, var uParam9)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam2))
	{
		func_766(uParam0, uParam1, iParam2, vParam3, vParam6, uParam9);
		if (!func_3(uParam1->f_88, 32))
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 4992, 0);
			}
		}
		func_595(iParam2);
	}
}

void func_594(var uParam0, var uParam1, int iParam2, int iParam3, vector3 vParam4, vector3 vParam7, var uParam10)
{
	float fVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam2))
	{
		if (func_213(vParam7))
		{
			vParam7 = { ENTITY::GET_ENTITY_COORDS(iParam3, true, false) };
		}
		if (func_197(uParam1, 1))
		{
			func_766(uParam0, uParam1, iParam2, 0f, 0f, 0f, vParam7, uParam10);
		}
		else
		{
			func_766(uParam0, uParam1, iParam2, vParam4, vParam7, uParam10);
		}
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam2, 1269650476);
		PED::SET_PED_CONFIG_FLAG(iParam2, 6, true);
		if (func_399(iParam2))
		{
			func_76(uParam0, 4);
		}
		PED::_0x2208438012482A1A(iParam2, false, false);
		fVar0 = func_74(vParam4, vParam7, 1);
		if (!func_197(uParam1, 524288))
		{
			if ((func_3(uParam1->f_88, 32) || func_3(uParam1->f_88, 2)) || func_197(uParam1, 1))
			{
				TASK::TASK_DUEL(iParam2, uParam0->f_64, uParam10, iParam3, func_767(uParam1), 0, 0f, 0f, 0f, fVar0, 0);
			}
			else
			{
				TASK::TASK_DUEL(iParam2, uParam0->f_64, uParam10, iParam3, func_767(uParam1), 0, vParam4, fVar0, 0);
			}
		}
	}
}

void func_595(int iParam0)
{
	vector3 vVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	vVar0 = { func_762() };
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, &vVar0))
	{
		return;
	}
	DECORATOR::DECOR_REMOVE(iParam0, &vVar0);
}

void func_596(var uParam0, var uParam1)
{
	if (!func_75(uParam1, 4194304))
	{
		if (func_197(uParam0, 524288) && ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_1, 200432249))
		{
			func_76(uParam1, 4194304);
		}
	}
}

void func_597(var uParam0, var uParam1)
{
	if (func_197(uParam0, 4))
	{
		if (func_75(uParam1, 8388608))
		{
			if (func_768(uParam1))
			{
				func_769(uParam1->f_3);
				func_770(func_191(uParam1, uParam0), -1, 0, 0, 1);
			}
		}
		if (!func_75(uParam1, 8388608))
		{
			MISC::SET_TIME_SCALE(0.25f);
			func_76(uParam1, 8388608);
			func_771(3);
			func_769(uParam1->f_3);
			func_770(func_191(uParam1, uParam0), -1, 0, 0, 1);
		}
		else
		{
			switch (uParam1->f_3)
			{
				case 0:
					if (func_75(uParam1, 1048576))
					{
						uParam1->f_3++;
						func_769(uParam1->f_3);
						func_770(func_191(uParam1, uParam0), -1, 0, 0, 1);
					}
					if (func_75(uParam1, 16))
					{
						MISC::SET_TIME_SCALE(1f);
						uParam1->f_3++;
						func_769(uParam1->f_3);
						func_770(func_191(uParam1, uParam0), -1, 0, 0, 1);
					}
					break;
				case 1:
					if (func_75(uParam1, 16))
					{
						MISC::SET_TIME_SCALE(1f);
						uParam1->f_3++;
						uParam1->f_25 = func_599("DUEL_HELP_SHOWDOWN", 10000, 0, 0, 0, 1);
						func_769(uParam1->f_3);
						func_770(func_191(uParam1, uParam0), -1, 0, 0, 1);
					}
					break;
				case 2:
					if (func_161(uParam1) > 0)
					{
						func_24(&(Global_40.f_9145), 1);
						func_192(func_191(uParam1, uParam0), 1);
						func_29();
						func_193();
						uParam1->f_3++;
					}
					break;
			}
		}
	}
}

void func_598(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 3:
			uParam1->f_12 = 2f;
			break;
		case 0:
			uParam1->f_12 = 2f;
			break;
		case 1:
			uParam1->f_12 = 2f;
			break;
		case 2:
			uParam1->f_12 = 2f;
			break;
		case 4:
			uParam1->f_12 = 2f;
			break;
	}
	PLAYER::_0x914071FF93AF2692(PLAYER::PLAYER_ID(), uParam1->f_12);
}

var func_599(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar15;

	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = _NAMESPACE71::_0x049D5C615BD38BAD(&Var0, &Var13, iParam5);
	return uVar15;
}

int func_600(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 9);
	switch (iVar1)
	{
		case 0:
			if (func_197(uParam0, 512))
			{
				iVar0 = 22798;
			}
			else
			{
				iVar0 = 34606;
			}
			break;
		case 1:
			if (func_197(uParam0, 512))
			{
				iVar0 = 46065;
			}
			else
			{
				iVar0 = 37873;
			}
			break;
		case 2:
			if (func_197(uParam0, 512))
			{
				iVar0 = 54187;
			}
			else
			{
				iVar0 = 53675;
			}
			break;
		case 3:
			iVar0 = 55120;
			break;
		case 4:
			iVar0 = 43312;
			break;
		case 5:
			iVar0 = 65478;
			break;
		case 6:
			iVar0 = 6884;
			break;
		case 7:
			iVar0 = 45454;
			break;
		case 8:
			iVar0 = 33646;
			break;
	}
	return iVar0;
}

void func_601(var uParam0, int iParam1)
{
	uParam0->f_56 = iParam1;
}

void func_602(var uParam0)
{
	if (!func_75(uParam0, 1048576))
	{
		if (PLAYER::_0xE956C2340A76272E(PLAYER::PLAYER_ID()) > 0.5f)
		{
			func_93(&(uParam0->f_38));
			uParam0->f_6 = MISC::_0x483B8C542103AD72();
			func_76(uParam0, 1048576);
		}
	}
}

int func_603(var uParam0, var uParam1)
{
	int iVar0;

	if (func_75(uParam1, 16))
	{
		return 1;
	}
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		iVar0 = func_571(*uParam0, 0, 1, 0);
		if (func_666(iVar0, 0) && iVar0 != joaat("weapon_unarmed"))
		{
			func_370(&(uParam0->f_20), 0);
			func_93(&(uParam1->f_41));
			uParam1->f_7 = MISC::_0x483B8C542103AD72();
			func_76(uParam1, 16);
			return 1;
		}
	}
	return 0;
}

bool func_604(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _NAMESPACE71::_0x59FA676177DBE4C9(iParam0) == 4;
}

void func_605(var uParam0, var uParam1)
{
	if (func_197(uParam0, 4))
	{
	}
	else if (!func_75(uParam1, 64))
	{
		uParam1->f_25 = func_599("DUEL_HELP_SHOWDOWN", 10000, 0, 0, 0, 1);
		func_76(uParam1, 64);
	}
}

void func_606(var uParam0, var uParam1)
{
	if (uParam1->f_18 < 0f)
	{
		if (uParam1->f_17 > 0.9f)
		{
			if (uParam0->f_90 != -1)
			{
				uParam1->f_73 = uParam0->f_90;
			}
			else if (func_772() && !func_197(uParam0, 16))
			{
				if (func_197(uParam0, 512))
				{
					uParam1->f_73 = 34606;
				}
				else
				{
					uParam1->f_73 = 22798;
				}
			}
			else
			{
				uParam1->f_73 = 21030;
			}
		}
		else
		{
			uParam1->f_73 = uParam1->f_72;
		}
	}
	PLAYER::_0x310CE349E0C0EC4B(PLAYER::PLAYER_ID(), uParam0->f_1, uParam1->f_73);
}

void func_607(var uParam0, var uParam1)
{
	if (!func_75(uParam1, 65536))
	{
		if (func_773(uParam0, uParam1))
		{
			if (func_197(uParam0, 524288))
			{
				if (ANIMSCENE::_0x25557E324489393C(uParam0->f_39))
				{
					if (ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_39, 0))
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_39.f_1))
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_39, uParam0->f_39.f_1, true);
						}
						if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_39.f_2))
						{
							ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_39, uParam0->f_39.f_2, true, false);
						}
					}
					else
					{
						ANIMSCENE::START_ANIM_SCENE(uParam0->f_39);
					}
				}
			}
			else
			{
				TASK::_0x1F7A9A9C38C13A56(uParam0->f_1);
			}
			func_76(uParam1, 65536);
		}
	}
}

int func_608(var uParam0, var uParam1)
{
	if (!func_196(*uParam0, 9))
	{
		func_366(uParam0, uParam1, 3);
		return 1;
	}
	if (!func_75(uParam1, 131072) && func_774(uParam0->f_1))
	{
		func_370(&(uParam0->f_24), 0);
		func_76(uParam1, 131072);
	}
	if (!func_75(uParam1, 262144))
	{
		if (PED::_0x285D36C5C72B0569(*uParam0) < 0.5f || PED::_0x285D36C5C72B0569(uParam0->f_1) < 0.5f)
		{
			func_370(&(uParam0->f_28), 0);
			func_76(uParam1, 262144);
		}
	}
	if (!func_75(uParam1, 1))
	{
		if ((((((((((ENTITY::IS_ENTITY_DEAD(uParam0->f_1) || func_75(uParam1, 4194304)) || func_775(uParam0, uParam1)) || func_776(uParam0, uParam1, 1)) || func_777(uParam0, uParam1, 1)) || func_613(uParam0, uParam1, 1)) || func_778(uParam0, uParam1, 1)) || func_779(uParam0, uParam1, 1)) || func_780(uParam0, uParam1, 1)) || func_781(uParam0, uParam1, 1)) || (func_197(uParam0, 4096) && func_782(uParam0, uParam1, 1)))
		{
			func_783(uParam1);
			if ((!func_197(uParam0, 4096) && func_782(uParam0, uParam1, 0)) || func_776(uParam0, uParam1, 0))
			{
				func_76(uParam1, 128);
				PLAYER::_0x914071FF93AF2692(PLAYER::PLAYER_ID(), 999f);
				TASK::_0x651F0530083C0E5A(uParam0->f_1, 0);
				PED::SET_PED_SHOOT_RATE(uParam0->f_1, 200);
			}
			if (func_197(uParam0, 64) && ((!ENTITY::DOES_ENTITY_EXIST(uParam0->f_2) || !func_196(uParam0->f_2, 1)) || (uParam0->f_2 != uParam0->f_1 && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam0->f_2, *uParam0, 0, 0))))
			{
				func_366(uParam0, uParam1, 5);
				return 1;
			}
			else if (func_775(uParam0, uParam1))
			{
				func_366(uParam0, uParam1, 4);
				return 1;
			}
			else if (((func_778(uParam0, uParam1, 0) || func_784(uParam0, uParam1, 0) >= 2) || func_780(uParam0, uParam1, 0)) || ENTITY::IS_ENTITY_DEAD(uParam0->f_1))
			{
				func_366(uParam0, uParam1, 1);
				return 1;
			}
			else if (func_613(uParam0, uParam1, 0))
			{
				func_366(uParam0, uParam1, 2);
				return 1;
			}
			else if (func_784(uParam0, uParam1, 0) == 1)
			{
				if (func_197(uParam0, 8192))
				{
					func_366(uParam0, uParam1, 1);
				}
				else
				{
					func_366(uParam0, uParam1, 4);
				}
				return 1;
			}
			else if (func_776(uParam0, uParam1, 0) || func_75(uParam1, 4194304))
			{
				if (func_197(uParam0, 64))
				{
					func_366(uParam0, uParam1, 4);
				}
				else if (func_197(uParam0, 4096))
				{
					func_366(uParam0, uParam1, 4);
				}
				else
				{
					func_366(uParam0, uParam1, 3);
				}
				return 1;
			}
			else
			{
				if (func_197(uParam0, 4096) && func_782(uParam0, uParam1, 0))
				{
					func_366(uParam0, uParam1, 4);
				}
				else if (func_197(uParam0, 67108864) && func_781(uParam0, uParam1, 0))
				{
					func_366(uParam0, uParam1, 4);
				}
				else if (func_197(uParam0, 134217728))
				{
					func_366(uParam0, uParam1, 4);
				}
				else
				{
					func_366(uParam0, uParam1, 3);
					if (func_196(Global_35, 0))
					{
						func_616(uParam0, uParam1);
					}
				}
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_609(int iParam0)
{
	if (!func_494(iParam0))
	{
		return false;
	}
	return ((((*Global_1888801)[iParam0 /*35*/])->f_20 == 1 || ((*Global_1888801)[iParam0 /*35*/])->f_20 == 2) && !func_785(iParam0));
}

void func_610(var uParam0)
{
	PED::SET_PED_CONFIG_FLAG(*uParam0, 186, false);
	DECORATOR::DECOR_SET_BOOL(*uParam0, func_786(), true);
}

int func_611(var uParam0)
{
	Global_1425351->f_18 = uParam0;
	func_787(1);
	return 1;
}

int func_612(vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_213(*((*Global_1425351)[iVar0 /*3*/])))
		{
			*((*Global_1425351)[iVar0 /*3*/]) = { vParam0 };
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_613(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_3(uParam1->f_58, 8))
	{
		return 1;
	}
	if (func_197(uParam0, 16) && func_197(uParam0, 8192))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	if (ENTITY::_0x3EC28DA1FFAC9DDD(uParam0->f_1, *uParam0, 0, 0))
	{
		PED::GET_PED_LAST_DAMAGE_BONE(uParam0->f_1, &iVar0);
		if (func_788(iVar0, func_197(uParam0, 512)))
		{
			func_24(&(uParam1->f_58), 8);
			return 1;
		}
		if (func_197(uParam0, 268435456) && func_75(uParam1, 65536))
		{
			func_24(&(uParam1->f_58), 8);
			return 1;
		}
	}
	iVar1 = 0;
	if (func_197(uParam0, 512))
	{
		iVar1 = 1;
	}
	iVar2 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(uParam0->f_1, iVar1);
	if (func_789(iVar2))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar2))
		{
			if (MISC::_0x7A76104CC2CC69E8(iVar2, 1, 1))
			{
				if (bParam2)
				{
					func_24(&(uParam1->f_58), 8);
				}
				return 1;
			}
		}
	}
	if (func_3(uParam1->f_58, -2147483648))
	{
		if (func_291(&(uParam1->f_29), 0.05f))
		{
			if (bParam2)
			{
				func_24(&(uParam1->f_58), 8);
			}
			return 1;
		}
	}
	else if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iVar2, true, false), uParam0->f_83, true))
	{
		func_93(&(uParam1->f_29));
		func_24(&(uParam1->f_58), -2147483648);
	}
	return 0;
}

void func_614(var uParam0)
{
	if (uParam0->f_67 == 1)
	{
		if (func_3(Global_40.f_9145, 1))
		{
			func_42(&(Global_40.f_9145), 1);
		}
	}
}

void func_615(var uParam0, var uParam1)
{
	func_190();
	if (uParam1->f_57 != 3)
	{
		if (uParam1->f_57 == 4)
		{
			CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
		}
		else
		{
			CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
		}
	}
	if (PLAYER::_0xB16223CB7DA965F0(PLAYER::PLAYER_ID()))
	{
		PLAYER::_0xAE637BB8EF017875(PLAYER::PLAYER_ID(), 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 6, 0);
		PLAYER::_0x914071FF93AF2692(PLAYER::PLAYER_ID(), 1f);
	}
	MISC::SET_TIME_SCALE(1f);
}

void func_616(var uParam0, var uParam1)
{
	PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
	ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(Global_35, 0);
	if (func_75(uParam1, 4194304))
	{
		func_119(Global_35, 0, 0);
	}
	else if (func_779(uParam0, uParam1, 0))
	{
		if (func_197(uParam0, 524288))
		{
			func_119(Global_35, 0, 0);
		}
		else
		{
			PED::EXPLODE_PED_HEAD(Global_35, joaat("weapon_sniperrifle_rollingblock"));
		}
	}
	else if (func_790(uParam0, uParam1))
	{
		func_119(Global_35, 0, 0);
	}
}

int func_617(var uParam0, var uParam1)
{
	int iVar0;

	if (func_197(uParam1, 4194304))
	{
		return 1;
	}
	func_619();
	if (uParam0->f_8 == 0)
	{
		uParam0->f_8 = MISC::_0x483B8C542103AD72();
	}
	iVar0 = (MISC::_0x483B8C542103AD72() - uParam0->f_8);
	if (iVar0 >= 1000)
	{
		CAM::RENDER_SCRIPT_CAMS(false, true, 1000, true, false, 0);
		return 1;
	}
	return 0;
}

int func_618(var uParam0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5, var uParam6, bool bParam7)
{
	if (func_197(uParam0, 33554432) && PLAYER::_0xA54000D4BFD90BDE(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_197(uParam0, 4194304))
	{
		return 1;
	}
	switch (uParam1->f_59)
	{
		case 0:
			func_24(&(uParam1->f_60), 2048);
			CAM::DESTROY_ALL_CAMS(false);
			CAM::_0x6E969927CF632608(1);
			CAM::_0xE3639DB78B3B5400(iParam3);
			func_93(&(uParam1->f_26));
			func_372(uParam1, 3);
			break;
		case 3:
			func_619();
			if (!CAM::_0x1204EB53A5FBC63D())
			{
				if (iParam3 != PLAYER::PLAYER_PED_ID())
				{
					CAM::RENDER_SCRIPT_CAMS(false, bParam7, 3000, true, false, 0);
				}
				func_372(uParam1, 0);
				TASK::CLEAR_PED_TASKS(iParam2, 1, 0);
				return 1;
			}
			break;
		default:
			func_372(uParam1, 0);
			break;
	}
	return 0;
}

void func_619()
{
	if (CAM::_0x1204EB53A5FBC63D())
	{
		PAD::DISABLE_CONTROL_ACTION(0, -128997553, false);
		PAD::DISABLE_CONTROL_ACTION(0, -1450761377, false);
		PAD::DISABLE_CONTROL_ACTION(0, -771458680, false);
		PAD::DISABLE_CONTROL_ACTION(1, -128997553, false);
		PAD::DISABLE_CONTROL_ACTION(1, -1450761377, false);
		PAD::DISABLE_CONTROL_ACTION(1, -771458680, false);
	}
}

int func_620()
{
	int iVar0;

	iVar0 = func_791();
	if (iVar0 <= -320)
	{
		return -320;
	}
	if (iVar0 <= -280)
	{
		return -280;
	}
	if (iVar0 <= -240)
	{
		return -240;
	}
	if (iVar0 <= -200)
	{
		return -200;
	}
	if (iVar0 <= -160)
	{
		return -160;
	}
	if (iVar0 <= -120)
	{
		return -120;
	}
	if (iVar0 <= -80)
	{
		return -80;
	}
	if (iVar0 <= -40)
	{
		return -40;
	}
	if (iVar0 >= 320)
	{
		return 320;
	}
	if (iVar0 >= 280)
	{
		return 280;
	}
	if (iVar0 >= 240)
	{
		return 240;
	}
	if (iVar0 >= 200)
	{
		return 200;
	}
	if (iVar0 >= 160)
	{
		return 160;
	}
	if (iVar0 >= 120)
	{
		return 120;
	}
	if (iVar0 >= 80)
	{
		return 80;
	}
	if (iVar0 >= 40)
	{
		return 40;
	}
	return 0;
}

int func_621(int iParam0)
{
	float fVar0;
	float fVar1;

	if (func_242() != -1)
	{
		return iParam0;
	}
	if (Global_1347477->f_2 + 120000) < MISC::GET_GAME_TIMER()
	{
		Global_1347477->f_3 = 1;
		Global_1347477->f_2 = MISC::GET_GAME_TIMER();
		return iParam0;
	}
	fVar0 = 1f;
	Global_1347477->f_2 = MISC::GET_GAME_TIMER();
	Global_1347477->f_3++;
	if (Global_1347477->f_3 >= 10)
	{
		fVar0 = 2f;
	}
	else if (Global_1347477->f_3 >= 3)
	{
		fVar0 = 1.5f;
	}
	fVar1 = (BUILTIN::TO_FLOAT(iParam0) * fVar0);
	fVar1 = func_183(MISC::ABSF(fVar1) < 1f, func_183(fVar1 < 0f, -1f, 1f), fVar1);
	return BUILTIN::CEIL(fVar1);
}

int func_622(int iParam0)
{
	if (!func_792(iParam0))
	{
		return 0;
	}
	return func_793(iParam0);
}

int func_623(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_624(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case -40:
		case 40:
			return 1;
		case -80:
		case 80:
			return 2;
		case -120:
		case 120:
			return 3;
		case -160:
		case 160:
			return 4;
		case -200:
		case 200:
			return 5;
		case -240:
		case 240:
			return 6;
		case -280:
		case 280:
			return 7;
		case -320:
		case 320:
			return 8;
	}
	return 0;
}

int func_625()
{
	if (Global_40.f_11095.f_35 <= -320)
	{
		return 1;
	}
	else if (Global_40.f_11095.f_35 <= -280)
	{
		return 2;
	}
	else if (Global_40.f_11095.f_35 <= -240)
	{
		return 3;
	}
	else if (Global_40.f_11095.f_35 <= -200)
	{
		return 4;
	}
	else if (Global_40.f_11095.f_35 <= -160)
	{
		return 5;
	}
	else if (Global_40.f_11095.f_35 <= -120)
	{
		return 6;
	}
	else if (Global_40.f_11095.f_35 <= -80)
	{
		return 7;
	}
	else if (Global_40.f_11095.f_35 < 0)
	{
		return 8;
	}
	else if (Global_40.f_11095.f_35 <= 40)
	{
		return 9;
	}
	else if (Global_40.f_11095.f_35 >= 320)
	{
		return 16;
	}
	else if (Global_40.f_11095.f_35 >= 280)
	{
		return 15;
	}
	else if (Global_40.f_11095.f_35 >= 240)
	{
		return 14;
	}
	else if (Global_40.f_11095.f_35 >= 200)
	{
		return 13;
	}
	else if (Global_40.f_11095.f_35 >= 160)
	{
		return 12;
	}
	else if (Global_40.f_11095.f_35 >= 120)
	{
		return 11;
	}
	else if (Global_40.f_11095.f_35 >= 80)
	{
		return 10;
	}
	return 9;
}

void func_626(int iParam0, bool bParam1, int iParam2)
{
	func_794((MISC::GET_GAME_TIMER() + iParam2), !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1955569->f_1.f_2.f_1, iParam0);
	func_795(iParam0);
}

void func_627(int iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_16[2]), 0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[2]), 1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_20[2]), func_796(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_24[2]), "pausemenu_player");
}

void func_628(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	bVar3 = false;
	if (func_797(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_798(iVar5, &iVar2, &iVar0))
			{
				if (!func_666(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_799(iVar2);
					if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar1))
					{
						if (bParam0)
						{
							UNLOCK::_UNLOCK_SET_UNLOCKED(iVar1, false);
						}
					else
					{
						}
						else
						{
							if (func_657(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_620() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_620() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_800();
							}
							if (bVar3)
							{
								UNLOCK::_UNLOCK_SET_UNLOCKED(iVar1, true);
								bVar3 = false;
							}
						}
						iVar5++;
					}
				}
			}
		}
	}

struct<2> func_629(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

void func_630(var uParam0, var uParam1, int iParam2)
{
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

char* func_631(int iParam0)
{
	switch (iParam0)
	{
		case 2139774588:
			return "HONOR_EVENT_LOOT_INNOCENT";
		case 1142025875:
			return "HONOR_EVENT_AMBIENT_KILL";
		case 1587891565:
			return "HONOR_EVENT_AMBIENT_KO";
		case 1877013492:
			return "HONOR_EVENT_SCARE";
		case -643014279:
			return "HONOR_EVENT_KILL_VERMIN";
		case -597116214:
			return "HONOR_EVENT_KILL_FARM_ANIMAL";
		case 551416228:
			return "HONOR_EVENT_KILL_HORSE";
		case 1022576842:
			return "HONOR_EVENT_STEAL_HORSE";
		case 953325896:
			return "HONOR_EVENT_STEAL_DONKEY";
		case 508358508:
			return "HONOR_EVENT_STEAL_MULE";
		case -856432278:
			return "HONOR_EVENT_STEAL_WAGON";
		case -735200598:
			return "HONOR_EVENT_TRAMPLED_INNOCENT";
		case -2010847721:
			return "HONOR_EVENT_ABANDON_ANIMALS";
		case 446961221:
			return "HONOR_EVENT_ANIMAL_BLEEDOUT";
		case -1972216640:
			return "HONOR_EVENT_ANTAGONIZE";
		case 530833824:
			return "HONOR_EVENT_THEFT";
		case 1682361219:
			return "HONOR_EVENT_INTERVENED";
		case 158959085:
			return "HONOR_EVENT_WANTED_IN_CAMP";
		case 1919819559:
			return "HONOR_EVENT_DONATED_GAME";
		case 1461411082:
			return "HONOR_EVENT_ITEM_REQUEST";
		case -549508280:
			return "HONOR_EVENT_LONG_ABSENCE";
		case -1787248475:
			return "HONOR_EVENT_CRUEL_DEATH";
		case 932872355:
			return "HONOR_EVENT_JUSTICE_SERVED";
		case -1091304842:
			return "HONOR_EVENT_CHEAT";
		default:
			break;
	}
	return "";
}

var func_632(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_801(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_633(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_802(iParam0))
	{
		return 0;
	}
	if (!func_803())
	{
		return 0;
	}
	if (!func_804(iParam0, &iVar0, &iVar1))
	{
		return 0;
	}
	if (iVar0 == -816321659 && Global_1572887->f_12 != -1)
	{
		return 0;
	}
	STATS::CHAL_ADD_GOAL_PROGRESS_INT(iVar0, iVar1, iParam1);
	return 1;
}

int func_634(int iParam0)
{
	if (!func_489(iParam0))
	{
		return -1;
	}
	return func_805(iParam0);
}

void func_635()
{
	func_568(23);
}

void func_636(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 || iParam0);
}

int func_637(var uParam0)
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

void func_638(int iParam0)
{
	int iVar0;

	iVar0 = func_806(iParam0);
	if (iVar0 != 0)
	{
		func_807(-1, 24, 0, iVar0);
	}
}

void func_639(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	if (Global_1310750->f_16071 != iParam0 && !bParam2)
	{
		return;
	}
	if (&Global_17503.f_42[iParam0 /*8*/] == 0)
	{
		func_630(func_629(-1029789297), 1);
	}
	Global_17503.f_4++;
	Global_17503.f_42[iParam0 /*8*/] = &Global_17503.f_42[iParam0 /*8*/] + 1;
	((*Global_1310750)[iParam0 /*111*/])->f_110 |= 8;
	if (func_60(iParam0, 2))
	{
		func_808(iParam0, func_455(iParam3));
	}
	if (func_60(iParam0, 1))
	{
		if (iParam4 == -1)
		{
			iParam4 = func_457();
		}
		func_809(iParam0, iParam4);
	}
	if (iParam1 >= 0 && !func_82(iParam0, 65536))
	{
		func_810(iParam0, iParam1);
		func_811(iParam0, func_208(iParam0, iParam1));
		func_636(128);
	}
	func_459(iParam0, ((*Global_1310750)[iParam0 /*111*/])->f_37, 1065353216, 0, 0);
	func_460(iParam0, 1);
	if (!bParam2)
	{
		func_636(16);
		Global_17503.f_5 = iParam0;
		Global_17503.f_9 = 1;
		Global_17503.f_7 = 0;
		Global_17503.f_8 = 0;
		func_812(524288);
	}
	if (func_813(iParam0) != 0)
	{
		if (&Global_17503.f_42[iParam0 /*8*/] >= func_813(iParam0))
		{
			(Global_17503.f_42[iParam0 /*8*/])->f_6 = 1;
		}
	}
}

void func_640(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_814(&Global_0, 8);
	}
	if (!func_803() || func_242() != -1)
	{
		return;
	}
	func_814(&Global_0, 1);
}

int func_641(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = func_642(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	return 1;
}

int func_642(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iParam0 == Global_1900383[iVar0 /*45*/])
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_643(int iParam0)
{
	iParam0 = func_815(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_816(iParam0, 32);
	func_817();
}

void func_644(int iParam0)
{
	int iVar0;

	iParam0 = func_815(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_645(iParam0);
	if (!SCRIPTS::_DOES_THREAD_EXIST(iVar0))
	{
		func_647(iParam0);
	}
	else if (!SCRIPTS::IS_THREAD_ACTIVE(iVar0, false))
	{
		func_647(iParam0);
	}
}

int func_645(int iParam0)
{
	iParam0 = func_815(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return ((*Global_1900383)[iParam0 /*45*/])->f_3;
}

int func_646(int iParam0)
{
	iParam0 = func_815(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return ((*Global_1900383)[iParam0 /*45*/])->f_2;
}

void func_647(int iParam0)
{
	iParam0 = func_815(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1900383)[iParam0 /*45*/])->f_2 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_3 = 0;
}

int func_648(int iParam0, bool bParam1)
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

void func_649(int iParam0)
{
	Global_17503.f_2++;
	(Global_17503.f_42[iParam0 /*8*/])->f_3++;
	((*Global_1310750)[iParam0 /*111*/])->f_110 |= 2;
}

int func_650(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	var uVar0[4];
	int iVar5[4];

	if (func_213(vParam0))
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

bool func_651(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	if (func_213(vParam0))
	{
		return false;
	}
	return VOLUME::_0x769BB7626B8CDB06(vParam0, fParam3, iParam5, iParam4, 16384);
}

int func_652(vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1310750->f_16043)
	{
		if (!func_213(*(Global_1310750->f_16043[iVar0 /*3*/])))
		{
			if (func_174(vParam0, *(Global_1310750->f_16043[iVar0 /*3*/])) < 2500f)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_653()
{
	int iVar0;
	int iVar1;

	iVar0 = func_818(func_2());
	if (iVar0 == 8)
	{
		iVar1 = func_273(func_2());
		if (func_275(Global_36, iVar1))
		{
			return 0;
		}
	}
	if (func_819(func_670(0)))
	{
		return 0;
	}
	if (func_820())
	{
		return 0;
	}
	if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

float func_654(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

void func_655(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_821(iParam1))
		{
			func_822(iParam0, 41788943);
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
			func_823(iParam0, 0, 1);
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
			func_824(iParam0, 0);
			bVar0 = true;
		}
		func_825(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	}
}

struct<4> func_656(bool bParam0)
{
	return func_449(1328661203, func_826(), -1591664384, bParam0);
}

int func_657(int iParam0)
{
	vector3 vVar0;

	if (!func_666(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_658(bool bParam0)
{
	int iVar0;

	iVar0 = func_667(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224214))
		{
			*Global_1224214 = { func_449(923904168, func_656(bParam0), -740156546, bParam0) };
		}
		return *Global_1224214;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224222))
		{
			*Global_1224222 = { func_449(923904168, func_656(bParam0), -740156546, 0) };
		}
		return *Global_1224222;
	}
	return func_449(923904168, func_656(bParam0), -740156546, 0);
}

int func_659(int iParam0, bool bParam1)
{
	if (func_661(iParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
	{
		if (bParam1)
		{
			return func_827(-1185145312, 0) > 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

struct<4> func_660(bool bParam0)
{
	int iVar0;

	iVar0 = func_667(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224218))
		{
			*Global_1224218 = { func_449(271701509, func_656(bParam0), 12999093, 0) };
		}
		return *Global_1224218;
	}
	return func_449(271701509, func_656(bParam0), 12999093, 0);
}

int func_661(int iParam0)
{
	struct<2> Var0;

	if (!func_666(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_662(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_661(iParam0);
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &uVar0))
		{
			if (ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iParam1, uVar0))
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

int func_663(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(func_667(bParam5), &uParam0, uParam4, !bParam6))
	{
		return 0;
	}
	return 1;
}

int func_664(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;

	if (!func_666(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_449(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_667(bParam6), &Var0, 0);
	return uVar4;
}

int func_665(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_667(0);
	*uParam1 = { func_449(iParam0, func_658(0), iParam3, 0) };
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

int func_666(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_667(bool bParam0)
{
	if (func_242() == -1)
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

int func_668(var uParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_669(int iParam0)
{
	return WEAPON::_0x1F7977C9101F807F(iParam0);
}

int func_670(bool bParam0)
{
	int iVar0;

	if (bParam0)
	{
		iVar0 = func_828(1, 0, 0);
	}
	else
	{
		iVar0 = func_2();
	}
	return func_671(iVar0);
}

int func_671(int iParam0)
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

int func_672(int iParam0)
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

int func_673(int iParam0, int iParam1)
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

void func_674(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_414(Global_1310750[iVar0 /*111*/], iParam0))
		{
			if (!func_396(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_829(iVar0) < func_830(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_459(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

bool func_675(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_831(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return MISC::IS_BIT_SET(&(Global_40.f_283[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_1058888->f_40567[iVar1]), iVar2);
}

void func_676(int iParam0)
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

void func_677(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_678()
{
	int iVar0;

	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (!func_832(iVar0, 128))
		{
			func_833(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_679()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_832(iVar0, 128) && func_832(iVar0, 1))
		{
			func_833(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_680(float fParam0)
{
	int iVar0;

	iVar0 = BUILTIN::FLOOR((fParam0 * 1000f));
	if (Global_1393237->f_3 < (MISC::GET_GAME_TIMER() + iVar0))
	{
		Global_1393237->f_3 = (MISC::GET_GAME_TIMER() + iVar0);
	}
}

void func_681()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		if (func_60(iVar0, 16777216))
		{
			if (!func_834(iVar0))
			{
				func_835(iVar0, 4096);
			}
		}
		iVar0++;
	}
}

void func_682(int iParam0, int iParam1, int iParam2, int iParam3)
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
			func_397(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_397(99, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_397(44, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_397(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_397(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 1:
			func_397(5, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_397(6, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_397(13, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_397(25, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_397(29, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_397(46, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_397(67, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_397(9, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 2:
			func_397(3, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_397(11, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_397(18, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_397(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_397(95, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_397(96, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_397(101, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_397(51, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 3:
			func_397(53, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_397(54, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_397(52, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_397(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_397(56, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 4:
			func_397(70, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_397(63, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_397(35, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 5:
			func_397(117, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_397(75, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_397(76, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_397(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_397(15, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_397(108, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_397(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
	}
}

void func_683(float fParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	fVar0 = func_315();
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

int func_684(int iParam0)
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

int func_685(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

void func_686(int iParam0)
{
	int iVar0;
	var uVar1;

	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_836();
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
			func_837(&(Global_1935630->f_34), &(Global_1935630->f_39));
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

var func_687(int iParam0)
{
	return &(Global_1109400->f_275[iParam0 /*3*/]);
}

int func_688(int iParam0)
{
	int iVar0;

	iVar0 = Global_1935630->f_40;
	if (func_242() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_838(iParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_838(iParam0);
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_713(iVar0) == -1)
	{
		return 0;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iVar0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(iVar0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
	{
		return 0;
	}
	iParam0->f_14 = iVar0;
	return 1;
}

void func_689(int iParam0)
{
	if (*iParam0 & 8 != 0 || *iParam0 & 16 != 0)
	{
		func_839(iParam0);
	}
}

int func_690(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_713(iParam2);
	}
	else
	{
		iVar1 = func_712(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_713(iParam0);
	}
	else
	{
		iVar0 = func_712(iParam0);
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

float func_691(int iParam0, int iParam1)
{
	return func_322(iParam0, iParam1, 1, 1);
}

float func_692(var uParam0)
{
	return uParam0->f_26;
}

int func_693(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5)
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
		if (((WEAPON::_0xCB690F680A3EA971(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, iParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_322(iVar0, iParam0, 1, 1) <= 4f)
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
		if (WEAPON::_0x6AD66548840472E5(func_840(iVar0, 0)))
		{
			if (func_841(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_694(var uParam0)
{
	return uParam0->f_17;
}

int func_695(var uParam0, int iParam1, float fParam2, float fParam3)
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

int func_696(var uParam0)
{
	return uParam0->f_18;
}

int func_697(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (WEAPON::_0x6AD66548840472E5(func_840(iVar0, 0)))
		{
			if (func_842(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_698(var uParam0)
{
	return uParam0->f_23;
}

int func_699(var uParam0)
{
	return uParam0->f_21;
}

int func_700(var uParam0)
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

int func_701(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_556(iParam0, vParam4, 0.5f))
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

int func_702(int iParam0)
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
	if (func_843(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_703(int iParam0)
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

int func_704(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_268(iParam1))
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

int func_705(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_268(iParam1))
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

int func_706(var uParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40f;
	if (func_268(iParam1))
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

int func_707(int iParam0, var uParam1)
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

int func_708(int iParam0, int iParam1)
{
	if (PED::_0xB65A4DAB460A19BD(iParam0) == iParam1)
	{
		return 1;
	}
	if (func_581(iParam0, 1, 0, 0) != joaat("weapon_lasso"))
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

bool func_709(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

int func_710(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_154(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

float func_711(var uParam0)
{
	return uParam0->f_24;
}

int func_712(int iParam0)
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

int func_713(int iParam0)
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

int func_714(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_707(Global_35, &iVar1))
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
		fVar2 = func_322(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
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
		if (func_322(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
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

int func_715(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_484(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_716(uParam1, iVar0))
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
				if (!bParam2 || !func_716(uParam1, iVar1))
				{
					if (func_154(iVar1, Global_36, 1) < 5f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_716(var uParam0, int iParam1)
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

int func_717(var uParam0)
{
	return uParam0->f_20;
}

int func_718(int iParam0, var uParam1, bool bParam2, float fParam3)
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

bool func_719(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1) != 0;
}

int func_720(int iParam0, var uParam1, var uParam2)
{
	if (uParam1->f_11 != 0)
	{
		if (func_844(iParam0, uParam1))
		{
			if (!func_3(uParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
				func_33(uParam2, 0, 0, 1, 0);
				func_24(&(uParam1->f_10), 1);
			}
			return 1;
		}
		else if (func_3(uParam1->f_10, 1))
		{
			func_845(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
			func_42(&(uParam1->f_10), 1);
		}
	}
	return 0;
}

int func_721(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
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
		bVar4 = func_3(iParam4, 32);
		func_380(iParam1, uParam2, 0);
		iVar5 = func_846(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return 1;
		}
		func_33(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_3(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_3(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_3(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_3(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_3(iParam4, 8388608) || func_3(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_3(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_3(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_724(iParam1, 4))
		{
			iVar6 |= 1024;
			EVENT::_0xBB1E41DD3D3C6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_724(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_3(iParam4, 67108864))
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
				iParam6 = func_847(uParam0);
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
			if (func_3(iParam4, 268435456))
			{
				iVar8 = func_848(uParam2, 648122183);
				if (iVar8 > -1)
				{
					func_849(iParam1, (*uParam2)[iVar8 /*17*/]);
				}
			}
			if (func_724(iParam1, 23))
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
			if (func_3(iParam4, 2) || func_3(iParam4, 16))
			{
				func_723(*uParam0, 1, 1);
			}
			else
			{
				func_723(*uParam0, 0, 1);
			}
			return 1;
		}
	}
	return 0;
}

void func_722(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297, false);
	}
}

void func_723(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
	}
}

bool func_724(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

int func_725(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	bVar0 = (!VOLUME::_0x92A78D0BEDB332A3(iParam2) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam2, true, 0));
	bVar1 = iParam1 & 32 != false;
	bVar2 = iParam1 & 65792 != false;
	bVar3 = iParam1 & 1179648 != false;
	if (bVar0)
	{
		if (bVar1)
		{
			return 1;
		}
		if (func_850(*uParam0, bParam3, bVar2, bVar3))
		{
			return 1;
		}
	}
	return 0;
}

void func_726(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_851(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_3(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_727(int iParam0)
{
	if (func_3(iParam0, 4))
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
	if (func_3(iParam0, 16384))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -485697785, false);
	}
	if (func_3(iParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -1292666904, false);
		PAD::DISABLE_CONTROL_ACTION(0, 578288361, false);
	}
}

bool func_728(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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

	iVar1 = func_852(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*uParam0);
	bVar11 = (((PED::_0xA911EE21EDF69DAF(Global_35) || func_853(Global_35)) || func_854(Global_35)) || func_855(Global_35));
	fVar12 = -1f;
	if (func_92(&(iParam1->f_13)))
	{
		fVar12 = func_136(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if (((*uParam4)[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = ((*uParam4)[iVar0 /*17*/])->f_8;
		}
		bVar4 = func_96(((*uParam4)[iVar0 /*17*/])->f_6);
		func_856(*uParam0, (*uParam4)[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET(uParam4[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (func_857(*uParam0, iParam1, (*uParam4)[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_858(iParam12, ((*uParam4)[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						func_33(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_859(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET(uParam4[iVar0 /*17*/], 11))
					{
						func_380(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
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
					if (func_860(iParam1, fParam6, iParam1->f_9))
					{
						func_93(&(iParam1->f_18));
						if (bVar6)
						{
							func_859(uParam4, 0, 0);
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
		func_861(iParam1, fParam2);
	}
	return bVar5;
}

void func_729(var uParam0)
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

void func_730(int* iParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_862((*uParam1)[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET(uParam1[iVar0 /*17*/], 20))
			{
				func_861(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

int func_731(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, -124244224))
		{
			if (func_863(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_864(iParam1, 0);
				func_380(iParam1, uParam2, func_724(iParam1, 6));
				return 1;
			}
		}
	}
	return 0;
}

int func_732(var uParam0, int* iParam1, float fParam2, bool bParam3)
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
			func_93(&(iParam1->f_18));
			return 0;
		}
		else if (func_92(&(iParam1->f_18)))
		{
			func_195(&(iParam1->f_18));
			return 0;
		}
	}
	if (!func_92(&(iParam1->f_18)))
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
	return func_94(&(iParam1->f_18), fParam2);
	return 1;
}

void func_733(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_856(iParam0, (*uParam2)[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_734(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

int func_735(int* iParam0)
{
	if (func_724(iParam0, 0))
	{
		if (func_865(iParam0))
		{
			func_734(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

void func_736(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 - (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1));
}

void func_737(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		if (((*Global_1945938)[iParam0 /*18*/])->f_5 == 5 && !func_719(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, 0);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
		}
	}
}

void func_738(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
	}
}

void func_739(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 || iParam1);
}

int func_740(char* sParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	*uParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_667(bParam4), sParam0, iParam3, uParam2);
	if (*uParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_741(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_742(int iParam0)
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

bool func_743(int iParam0)
{
	return iParam0 > -1;
}

int func_744(int iParam0)
{
	if (!func_743(iParam0))
	{
		return -1;
	}
	if (iParam0 >= func_205(1))
	{
		return -1;
	}
	if (iParam0 >= 3 || iParam0 < 0)
	{
		return -1;
	}
	return Global_1359489[iParam0];
}

int func_745(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			if (iParam1 == 1)
			{
				return 0;
			}
			else if (iParam1 == 2)
			{
				return 1;
			}
			else if (iParam1 == 3)
			{
				return 2;
			}
			break;
		case 2:
			return 0;
	}
	return -1;
}

void func_746(var uParam0, var uParam1, int iParam2, vector3 vParam3, vector3 vParam6, float fParam9, float fParam10, float fParam11)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;

	fVar0 = (fParam9 / 2f);
	fVar1 = (fParam10 / 2f);
	switch (iParam2)
	{
		case 0:
			vVar5 = { func_545(vParam6 - vParam3) };
			vVar8 = { func_866(vVar5, 0f, 0f, 1f) };
			*((*uParam0)[0 /*3*/]) = { vParam3 + func_867(0f, 0f, 0f, fParam11, 0.1f) };
			*((*uParam0)[1 /*3*/]) = { vParam3 + vVar8 * FtoV(MISC::GET_RANDOM_FLOAT_IN_RANGE(fParam9, fParam10)) + func_867(0f, 0f, 0f, fParam11, 0.1f) };
			*((*uParam0)[2 /*3*/]) = { vParam3 - vVar8 * FtoV(MISC::GET_RANDOM_FLOAT_IN_RANGE(fParam9, fParam10)) + func_867(0f, 0f, 0f, fParam11, 0.1f) };
			*((*uParam1)[0 /*3*/]) = { vVar5 };
			*((*uParam1)[1 /*3*/]) = { vVar5 };
			*((*uParam1)[2 /*3*/]) = { vVar5 };
			break;
		case 1:
			vVar2 = { func_868() };
			*((*uParam1)[0 /*3*/]) = { func_545(vVar2) };
			*((*uParam1)[1 /*3*/]) = { -*((*uParam1)[0 /*3*/]) };
			*((*uParam0)[0 /*3*/]) = { vParam3 - *((*uParam1)[0 /*3*/]) * FtoV(MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar0, fVar1)) + func_867(0f, 0f, 0f, fParam11, 0.1f) };
			*((*uParam0)[1 /*3*/]) = { vParam3 - *((*uParam1)[1 /*3*/]) * FtoV(MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar0, fVar1)) + func_867(0f, 0f, 0f, fParam11, 0.1f) };
			break;
		case 2:
			vVar2 = { func_868() };
			*((*uParam1)[0 /*3*/]) = { func_545(vVar2) };
			func_869(&vVar2, &(vVar2.f_1), 120f);
			*((*uParam1)[1 /*3*/]) = { func_545(vVar2) };
			func_869(&vVar2, &(vVar2.f_1), 120f);
			*((*uParam1)[2 /*3*/]) = { func_545(vVar2) };
			*((*uParam0)[0 /*3*/]) = { vParam3 - *((*uParam1)[0 /*3*/]) * FtoV(MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar0, fVar1)) + func_867(0f, 0f, 0f, fParam11, 0.1f) };
			*((*uParam0)[1 /*3*/]) = { vParam3 - *((*uParam1)[1 /*3*/]) * FtoV(MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar0, fVar1)) + func_867(0f, 0f, 0f, fParam11, 0.1f) };
			*((*uParam0)[2 /*3*/]) = { vParam3 - *((*uParam1)[2 /*3*/]) * FtoV(MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar0, fVar1)) + func_867(0f, 0f, 0f, fParam11, 0.1f) };
			break;
	}
}

var func_747(int iParam0, int iParam1)
{
	int iVar0;
	char* sVar1[5];

	switch (iParam0)
	{
		case 0:
			iVar0 = 2;
			sVar1[0] = "INDIFF1";
			sVar1[1] = "INDIFF2";
			break;
		case 1:
			iVar0 = 1;
			if (iParam1 > 1)
			{
				sVar1[0] = "WAIT1";
			}
			else
			{
				sVar1[0] = "WAIT2";
			}
			break;
		case 2:
			iVar0 = 2;
			sVar1[0] = "SHOCK1";
			sVar1[1] = "SHOCK2";
			break;
		default:
			break;
	}
	return &(sVar1[MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0)]);
}

var func_748(int iParam0)
{
	int iVar0;
	int iVar1[10];

	switch (iParam0)
	{
		case 0:
			iVar0 = 3;
			iVar1[0] = 830847823;
			iVar1[1] = -22664287;
			iVar1[2] = 2087366558;
			break;
		case 1:
			iVar0 = 3;
			iVar1[0] = -22664287;
			iVar1[1] = -1124614608;
			iVar1[2] = 830847823;
			break;
		case 2:
			iVar0 = 2;
			iVar1[0] = 2087366558;
			iVar1[1] = -1982207864;
			break;
		default:
			break;
	}
	return &(iVar1[MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0)]);
}

void func_749(int iParam0, var uParam1, int iParam2, bool bParam3, char* sParam4, vector3 vParam5, struct<2> Param8, var uParam10, vector3 vParam11, int iParam14, int iParam15, int iParam16, float fParam17, var uParam18, var uParam19)
{
	struct<24> Var0;

	if (Global_1359489->f_63.f_241 >= 10)
	{
		return;
	}
	if (bParam3)
	{
		Var0.f_10 = func_870(MISC::GET_HEADING_FROM_VECTOR_2D(Param8, Param8.f_1));
		Var0 = 1;
	}
	else
	{
		Var0.f_23 = 0;
		Var0.f_10 = 0f;
		Var0 = 2;
	}
	Var0.f_3 = uParam1;
	Var0.f_4 = { vParam5 };
	Var0.f_7 = { vParam11 };
	Var0.f_11 = iParam15;
	Var0.f_12 = iParam16;
	Var0.f_13 = (fParam17 * fParam17);
	Var0.f_1 = iParam0;
	Var0.f_2 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Var0.f_14 = uParam18;
	Var0.f_15 = bParam3;
	Var0.f_16 = iParam2;
	StringCopy(&(Var0.f_19), sParam4, 32);
	Var0.f_17 = uParam19;
	*(Global_1359489->f_63[iParam14 /*24*/]) = { Var0 };
	if ((Global_1359489->f_63[iParam14 /*24*/])->f_15)
	{
		func_871(Global_1359489->f_63[iParam14 /*24*/]);
	}
}

void func_750(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_872(iParam0))
	{
		return;
	}
	iVar0 = Global_1360165[iParam0 /*1157*/];
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			DECORATOR::DECOR_SET_INT(iVar0, "companion_manager_watch_mode", iParam1);
		}
	}
}

int func_751(int iParam0)
{
	if (!func_743(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		(*Global_1360165)[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

void func_752(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_872(iParam0))
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

void func_753(var uParam0, struct<21> Param1, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94)
{
	vector3 vVar0;

	if (!func_213(*(uParam0->f_51[0 /*3*/])))
	{
		vVar0 = { *(uParam0->f_51[0 /*3*/]) };
	}
	else
	{
		vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*uParam0, 0.4567f, -1.6522f, 0.4558f) };
	}
	if (CAM::DOES_CAM_EXIST(&(Param1.f_20[0])))
	{
		CAM::SET_CAM_COORD(&(Param1.f_20[0]), vVar0);
		if (&uParam0->f_75[0])
		{
			CAM::ATTACH_CAM_TO_ENTITY(&(Param1.f_20[0]), Global_35, vVar0, true);
		}
		if (!func_213(*(uParam0->f_61[0 /*3*/])))
		{
			CAM::SET_CAM_ROT(&(Param1.f_20[0]), *(uParam0->f_61[0 /*3*/]), 2);
		}
		else
		{
			CAM::POINT_CAM_AT_ENTITY(&(Param1.f_20[0]), *uParam0, 0.3524f, 1.3349f, 0.1018f, true);
		}
		if (&uParam0->f_71[0] > 0f)
		{
			CAM::SET_CAM_FOV(&(Param1.f_20[0]), &(uParam0->f_71[0]));
		}
		else
		{
			CAM::SET_CAM_FOV(&(Param1.f_20[0]), 35f);
		}
	}
}

void func_754(int iParam0, int* iParam1)
{
	var uVar0;
	int iVar30;
	int iVar31;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	uVar0 = 29;
	MISC::_COPY_MEMORY(iParam1, &uVar0, 30);
	iVar30 = 0;
	while (iVar30 < 29)
	{
		iVar31 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar31, false, iVar30, true);
		if (func_240(iVar31))
		{
			(*iParam1)[iVar30] = iVar31;
		}
		else
		{
			(*iParam1)[iVar30] = 0;
		}
		iVar30++;
	}
}

int func_755(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("weapon_revolver_doubleaction");
		case 1:
			return joaat("weapon_pistol_semiauto");
		case 2:
			return joaat("weapon_revolver_schofield");
		case 3:
			return joaat("weapon_pistol_volcanic");
		case 4:
			return joaat("weapon_revolver_cattleman");
		default:
			break;
	}
	return 0;
}

Vector3 func_756(vector3 vParam0, vector3 vParam3, float fParam6)
{
	return FtoV((1f - fParam6)) * vParam0 + Vector(fParam6, fParam6, fParam6) * vParam3;
}

bool func_757(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_758(var uParam0)
{
	if (func_757(&(uParam0->f_3), 4))
	{
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if ((!func_873(uParam0) || func_757(&(uParam0->f_3), 4)) && !func_757(&(uParam0->f_3), 256))
		{
			PAD::DISABLE_CONTROL_ACTION(0, -1450761377, false);
			PAD::DISABLE_CONTROL_ACTION(0, -771458680, false);
			PAD::DISABLE_CONTROL_ACTION(0, -1722177808, false);
			PAD::DISABLE_CONTROL_ACTION(1, -1450761377, false);
			PAD::DISABLE_CONTROL_ACTION(1, -771458680, false);
			PAD::DISABLE_CONTROL_ACTION(1, -1722177808, false);
			PAD::DISABLE_CONTROL_ACTION(2, -1450761377, false);
			PAD::DISABLE_CONTROL_ACTION(2, -771458680, false);
			PAD::DISABLE_CONTROL_ACTION(2, -1722177808, false);
		}
		PAD::DISABLE_CONTROL_ACTION(2, 2139949496, false);
	}
	if (func_874(uParam0))
	{
		func_190();
	}
	if (!func_757(&(uParam0->f_3), 16))
	{
		if (func_92(uParam0))
		{
			if (func_875(uParam0) < uParam0->f_4)
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			}
		}
	}
}

int func_759(int iParam0, float fParam1, float fParam2, bool bParam3, var uParam4, float fParam5)
{
	if (uParam4 && PED::IS_PED_INJURED(iParam0))
	{
		return 1;
	}
	if (func_876(iParam0, fParam1, fParam2, bParam3, uParam4, fParam5))
	{
		return 1;
	}
	return 0;
}

int func_760(vector3 vParam0, var uParam3, float fParam4)
{
	float fVar0;

	if (!func_877(uParam3->f_7, uParam3->f_8))
	{
		return 0;
	}
	if (func_757(&(uParam3->f_3), 1))
	{
		return 0;
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		return 0;
	}
	fVar0 = func_154(Global_35, vParam0, 1);
	if (fVar0 > fParam4)
	{
		return 0;
	}
	if (!func_878(vParam0, uParam3))
	{
		return 0;
	}
	if (!func_757(&(uParam3->f_3), 2))
	{
		if (!CAM::IS_SPHERE_VISIBLE(vParam0, 0.5f))
		{
			return 0;
		}
		if (!func_879(vParam0, uParam3))
		{
			return 0;
		}
	}
	return 1;
}

void func_761(var uParam0, vector3 vParam1, float fParam4, int iParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
	{
		return;
	}
	CAM::SET_GAMEPLAY_HINT_FOV(fParam4);
	fVar0 = func_880(vParam1, 1);
	if (!func_757(&(uParam0->f_3), 32))
	{
		if (fVar0 > 60f)
		{
			iVar1 = 4000;
			iVar2 = 3500;
		}
		else if (fVar0 > 40f)
		{
			iVar1 = 3750;
			iVar2 = 3250;
		}
		else if (fVar0 > 20f)
		{
			iVar1 = 3500;
			iVar2 = 3000;
		}
		else if (fVar0 > 10f)
		{
			iVar1 = 3250;
			iVar2 = 2750;
		}
		else
		{
			iVar1 = 3000;
			iVar2 = 2500;
		}
		if (iParam5 > iVar1)
		{
			uParam0->f_4 = iVar1;
		}
		else if (iParam5 < iVar2)
		{
			uParam0->f_4 = iVar2;
		}
		else
		{
			uParam0->f_4 = iParam5;
		}
		CAM::_0x1F6EBD94680252CE(iVar1, -1082130432);
		CAM::_0xF48664E9C83825E3(iVar2, -1082130432);
	}
	else
	{
		uParam0->f_4 = iParam5;
	}
	func_93(uParam0);
	func_588(&(uParam0->f_3), 1);
}

Vector3 func_762()
{
	vector3 vVar0[24];

	StringCopy(&cVar0, "eDuelResult", 24);
	return cVar0;
}

bool func_763(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

int func_764(int iParam0)
{
	iParam0 = func_815(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0 /*45*/];
}

int func_765(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<2> Var8;
	struct<6> Var10;
	int iVar16;
	int iVar17;

	uParam1->f_10 = func_815(uParam1->f_10);
	if (uParam1->f_10 == -1)
	{
		*uParam0 = 1;
		return 0;
	}
	if (uParam1->f_10 >= 7)
	{
		*uParam0 = 1;
		return 0;
	}
	if (*uParam1)
	{
		if (func_213(uParam1->f_6))
		{
		}
	}
	bVar0 = func_803();
	if (*uParam1)
	{
		if (bVar0 && !func_379(((*Global_1835011)[4 /*74*/])->f_1, 1))
		{
			if (func_881(5))
			{
				func_882(5);
				func_883(5);
				func_884(0);
				func_885(0);
			}
		}
	}
	if (func_886(Global_36) == 8)
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_379(((*Global_1835011)[37 /*74*/])->f_1, 1)) && !func_379(((*Global_1835011)[43 /*74*/])->f_1, 1))
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_379(((*Global_1835011)[43 /*74*/])->f_1, 1)) && !func_379(((*Global_1835011)[44 /*74*/])->f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*uParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_764(iVar1);
	bVar3 = false;
	bVar4 = false;
	iVar5 = 0;
	if (func_887(iVar1))
	{
		bVar3 = true;
		if (func_888(iVar1))
		{
			bVar4 = true;
		}
		if (func_889(iVar1))
		{
			iVar5 = 1;
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (iVar5 && !uParam1->f_5)
			{
				func_890(uParam1->f_10);
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar4)
			{
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_3)
	{
		if (uParam1->f_10 == 0)
		{
			if (!func_881(0) && func_881(1))
			{
				func_891(1, 0);
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_892())
			{
				func_893();
			}
			func_884(0);
			func_885(0);
			func_894(uParam1->f_6);
		}
	}
	if (!func_887(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_895(uParam1->f_10) == 0 || func_896(uParam1->f_10) == 0) || func_897(uParam1->f_10) == 0)
			{
				func_898(uParam1->f_10);
			}
			func_899(uParam1->f_10);
			func_900(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*uParam0 = 0;
			return 0;
		}
		*uParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_764(iVar1);
	bVar3 = false;
	bVar4 = false;
	iVar5 = 0;
	if (func_887(iVar1))
	{
		bVar3 = true;
		if (func_888(iVar1))
		{
			bVar4 = true;
		}
		if (func_889(iVar1))
		{
			iVar5 = 1;
		}
	}
	if (uParam1->f_2)
	{
		if (bVar3)
		{
			if (ENTITY::_0x083D497D57B7400F(iVar2))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iVar2, false);
			}
			if (!func_213(uParam1->f_6))
			{
				ENTITY::SET_ENTITY_COORDS(iVar2, uParam1->f_6, false, true, true, true);
				ENTITY::SET_ENTITY_HEADING(iVar2, uParam1->f_9);
				ENTITY::_0x9587913B9E772D29(iVar2, 0);
			}
		}
	}
	if (func_901(uParam1->f_10))
	{
		*uParam0 = 0;
		return 0;
	}
	if (bVar3)
	{
		if (bVar4)
		{
			if (*uParam1)
			{
				*uParam0 = 0;
				return 0;
			}
			*uParam0 = 1;
			return 0;
		}
	}
	if (bVar3)
	{
		if (iVar5 && !uParam1->f_5)
		{
			if (*uParam1)
			{
				*uParam0 = 0;
				return 0;
			}
			*uParam0 = 1;
			return 0;
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (!PED::_0xA0BC8FAED8CFEB3C(iVar2))
			{
				*uParam0 = 0;
				return 0;
			}
			iVar6 = PLAYER::PLAYER_ID();
			iVar7 = PLAYER::_0xB48050D326E9A2F3(iVar6);
			if (ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
				if (iVar7 != iVar2)
				{
					PLAYER::_0xD2CB0FB0FDCB473D(iVar6, 0);
				}
			}
			Var8 = { func_902(uParam1->f_10) };
			Var10 = { func_903() };
			func_904(iVar2, &Var8, &Var10, 0);
			PLAYER::_0xD2CB0FB0FDCB473D(iVar6, iVar2);
			PED::SET_PED_CONFIG_FLAG(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*uParam0 = 2;
		return iVar2;
	}
	if (!func_646(uParam1->f_10))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, true, true);
		func_905(uParam1->f_10);
		if (uParam1->f_2 && !func_213(uParam1->f_6))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar2, false);
			PHYSICS::_0x0348469DAA17576C(iVar2);
			ENTITY::SET_ENTITY_COORDS(iVar2, uParam1->f_6, false, true, true, true);
			ENTITY::SET_ENTITY_HEADING(iVar2, uParam1->f_9);
			ENTITY::_0x9587913B9E772D29(iVar2, 0);
		}
		*uParam0 = 2;
		return iVar2;
	}
	func_644(uParam1->f_10);
	if (func_646(uParam1->f_10))
	{
		iVar16 = func_645(uParam1->f_10);
		iVar17 = SCRIPTS::GET_ID_OF_THIS_THREAD();
		if (iVar16 != iVar17)
		{
			*uParam0 = 1;
			return 0;
		}
	}
	*uParam0 = 2;
	return iVar2;
}

void func_766(var uParam0, var uParam1, int iParam2, vector3 vParam3, vector3 vParam6, var uParam9)
{
	float fVar0;
	int iVar1;

	if (!ENTITY::IS_ENTITY_DEAD(iParam2))
	{
		if (FIRE::IS_ENTITY_ON_FIRE(iParam2))
		{
			FIRE::STOP_ENTITY_FIRE(iParam2, 0);
		}
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iParam2, true);
		if (PED::IS_PED_ON_MOUNT(iParam2))
		{
			iVar1 = PED::GET_MOUNT(iParam2);
			PED::_REMOVE_PED_FROM_MOUNT(iParam2, true, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED(iVar1, iParam2, 1, 0, -1082130432, -1, 0);
			}
		}
		if (!func_197(uParam1, 32) && (!func_197(uParam1, 524288) || iParam2 == *uParam1))
		{
			if (!func_213(vParam3))
			{
				fVar0 = func_74(vParam3, vParam6, 1);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam2, vParam3, 1f, 20000, 0.5f, 64, fVar0);
			}
			else
			{
				TASK::TASK_TURN_PED_TO_FACE_COORD(iParam2, vParam6, 0);
			}
		}
		if (iParam2 != Global_35)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam2, true);
		}
	}
}

float func_767(var uParam0)
{
	switch (uParam0->f_89)
	{
		case 3:
			return 0.2f;
		case 0:
			return 0.25f;
		case 1:
			return 0.31f;
		case 2:
			return 0.4f;
		case 4:
			return 0.25f;
		default:
			break;
	}
	return 0.25f;
}

int func_768(var uParam0)
{
	int iVar0;

	iVar0 = PAD::_0xBD629C1C4F501C80(0);
	if (iVar0 != uParam0->f_69)
	{
		uParam0->f_69 = iVar0;
		return 1;
	}
	return 0;
}

void func_769(int iParam0)
{
	bool bVar0;

	if (iParam0 >= &Global_1911643 || iParam0 < 0)
	{
		return;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1911643->f_5[Global_1911643->f_1 /*3*/])->f_2, 0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1911643->f_5[Global_1911643->f_1 /*3*/])->f_1, 0);
	bVar0 = iParam0 < Global_1911643->f_1;
	Global_1911643->f_1 = iParam0;
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1911643->f_5[Global_1911643->f_1 /*3*/])->f_1, 1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1911643->f_5[Global_1911643->f_1 /*3*/])->f_2, bVar0);
}

var func_770(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
	return func_175(sParam0, iParam1, iParam2, iParam3, 0, iParam4);
}

void func_771(int iParam0)
{
	var uVar0;
	char cVar1[32];
	int iVar5;

	if (iParam0 > 6)
	{
		return;
	}
	if (&Global_1911643 != 0)
	{
		func_193();
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1911643->f_3, 1);
	Global_1911643 = iParam0;
	Global_1911643->f_1 = 0;
	iVar5 = 0;
	while (iVar5 < iParam0)
	{
		StringCopy(&cVar1, "Objective", 32);
		StringIntConCat(&cVar1, iVar5, 32);
		uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(Global_1911643->f_2, &cVar1);
		Global_1911643->f_5[iVar5 /*3*/] = uVar0;
		(Global_1911643->f_5[iVar5 /*3*/])->f_1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar0, "IsCurrent", 0);
		(Global_1911643->f_5[iVar5 /*3*/])->f_2 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar0, "Failed", 0);
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1911643->f_4, iVar5, "objective_breadcrumb", uVar0);
		iVar5++;
	}
}

bool func_772()
{
	return func_791() > 0;
}

int func_773(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	float fVar6;

	if (func_906(uParam0, uParam1))
	{
		return 1;
	}
	if (!func_197(uParam0, 1048576))
	{
		if (uParam0->f_82)
		{
			iVar0 = MISC::_0x483B8C542103AD72();
			iVar1 = (iVar0 - uParam1->f_5);
			fVar2 = func_907(uParam0, 0);
			if (IntToFloat(iVar1) >= (fVar2 * 1000f))
			{
				return 1;
			}
			if (func_75(uParam1, 1048576))
			{
				iVar3 = (iVar0 - uParam1->f_6);
				fVar4 = func_907(uParam0, 1);
				if (IntToFloat(iVar3) >= (fVar4 * 1000f))
				{
					return 1;
				}
			}
			if (func_75(uParam1, 16))
			{
				iVar5 = (iVar0 - uParam1->f_7);
				fVar6 = func_907(uParam0, 2);
				if (IntToFloat(iVar5) >= (fVar6 * 1000f))
				{
					return 1;
				}
			}
		}
		else
		{
			if (func_291(&(uParam1->f_35), func_907(uParam0, 0)))
			{
				return 1;
			}
			if (func_291(&(uParam1->f_38), func_907(uParam0, 1)))
			{
				return 1;
			}
			if (func_291(&(uParam1->f_41), func_907(uParam0, 2)))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_774(int iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	return PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0);
}

int func_775(var uParam0, var uParam1)
{
	if ((func_197(uParam0, 64) && uParam0->f_1 != uParam0->f_2) && func_75(uParam1, 65536))
	{
		if (!func_75(uParam1, 4096))
		{
			func_76(uParam1, 4096);
		}
		return 1;
	}
	return 0;
}

int func_776(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	if (ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return 1;
	}
	if (func_3(uParam1->f_58, 512))
	{
		return 1;
	}
	if (!func_75(uParam1, 524288))
	{
		if (PLAYER::_0xB16223CB7DA965F0(PLAYER::GET_PLAYER_INDEX()))
		{
			func_76(uParam1, 524288);
		}
	}
	else
	{
		iVar2 = func_571(*uParam0, 0, 1, 0);
		if (iVar2 != joaat("weapon_unarmed"))
		{
			WEAPON::GET_AMMO_IN_CLIP(*uParam0, &iVar0, iVar2);
			if (iVar0 <= 0)
			{
				WEAPON::_0x6929E22158E52265(*uParam0, 0, &uVar3);
				WEAPON::_0x678F00858980F516(*uParam0, &iVar0, &uVar3);
			}
			iVar1 = WEAPON::GET_MAX_AMMO_IN_CLIP(*uParam0, iVar2, true);
		}
		if (iVar1 == iVar0 && !PLAYER::_0xB16223CB7DA965F0(PLAYER::GET_PLAYER_INDEX()))
		{
			if (bParam2)
			{
				func_24(&(uParam1->f_58), 512);
			}
			return 1;
		}
	}
	return 0;
}

int func_777(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	var uVar1;

	if (func_3(uParam1->f_58, 256))
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	if (WEAPON::GET_AMMO_IN_CLIP(*uParam0, &iVar0, uParam0->f_48))
	{
		if (iVar0 <= 0)
		{
			if (func_240(func_581(*uParam0, 1, 0, 0)))
			{
				WEAPON::_0x6929E22158E52265(*uParam0, 0, &uVar1);
			}
			else
			{
				WEAPON::_0x6929E22158E52265(*uParam0, 2, &uVar1);
			}
			WEAPON::_0x678F00858980F516(*uParam0, &iVar0, &uVar1);
			if (iVar0 <= 0)
			{
				if (bParam2)
				{
					func_24(&(uParam1->f_58), 256);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_778(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (func_3(uParam1->f_58, 16))
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	if (PED::_0xBD6B242B8BD5543A(uParam0->f_1))
	{
		return 1;
	}
	if (ENTITY::_0x3EC28DA1FFAC9DDD(uParam0->f_1, *uParam0, 0, 0))
	{
		PED::GET_PED_LAST_DAMAGE_BONE(uParam0->f_1, &iVar0);
		if (func_908(iVar0))
		{
			if (bParam2)
			{
				func_24(&(uParam1->f_58), 16);
			}
			return 1;
		}
	}
	return 0;
}

int func_779(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (func_3(uParam1->f_58, 64))
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	if (func_197(uParam0, 524288) && ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_1, 200432249))
	{
		if (bParam2)
		{
			func_24(&(uParam1->f_58), 64);
		}
		return 1;
	}
	if (PED::_0xBD6B242B8BD5543A(*uParam0))
	{
		if (bParam2)
		{
			func_24(&(uParam1->f_58), 64);
		}
		return 1;
	}
	if (ENTITY::_0x3EC28DA1FFAC9DDD(*uParam0, uParam0->f_1, 0, 0))
	{
		PED::GET_PED_LAST_DAMAGE_BONE(*uParam0, &iVar0);
		if (func_908(iVar0))
		{
			if (bParam2)
			{
				func_24(&(uParam1->f_58), 64);
			}
			return 1;
		}
	}
	return 0;
}

int func_780(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (func_3(uParam1->f_58, 32))
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	if (ENTITY::_0x3EC28DA1FFAC9DDD(uParam0->f_1, *uParam0, 0, 0))
	{
		PED::GET_PED_LAST_DAMAGE_BONE(uParam0->f_1, &iVar0);
		if (func_909(iVar0))
		{
			if (bParam2)
			{
				func_24(&(uParam1->f_58), 32);
			}
			return 1;
		}
	}
	return 0;
}

int func_781(var uParam0, var uParam1, bool bParam2)
{
	if (func_3(uParam1->f_58, 4))
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	if (ENTITY::_0x3EC28DA1FFAC9DDD(uParam0->f_1, *uParam0, 0, 0))
	{
		if (bParam2)
		{
			func_24(&(uParam1->f_58), 4);
		}
		return 1;
	}
	return 0;
}

int func_782(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;

	if (ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return 1;
	}
	if (func_3(uParam1->f_58, 1))
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return 0;
	}
	if (func_3(uParam1->f_58, -2147483648) && !func_291(&(uParam1->f_29), 0.05f))
	{
		return 0;
	}
	iVar2 = func_571(*uParam0, 0, 1, 0);
	if (iVar2 == 0)
	{
		return 0;
	}
	if (iVar2 != joaat("weapon_unarmed"))
	{
		WEAPON::GET_AMMO_IN_CLIP(*uParam0, &iVar0, iVar2);
		if (iVar0 <= 0)
		{
			WEAPON::_0x6929E22158E52265(*uParam0, 0, &uVar3);
			WEAPON::_0x678F00858980F516(*uParam0, &iVar0, &uVar3);
		}
		iVar1 = WEAPON::GET_MAX_AMMO_IN_CLIP(*uParam0, iVar2, true);
		iVar7 = 0;
		if (func_197(uParam0, 512))
		{
			iVar7 = 1;
		}
		iVar8 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(uParam0->f_1, iVar7);
		if (iVar0 < iVar1)
		{
			if (uParam1->f_11 == -1)
			{
				uParam1->f_11 = MISC::_0x483B8C542103AD72();
			}
			iVar10 = (MISC::_0x483B8C542103AD72() - uParam1->f_11);
			if (iVar10 > 200)
			{
				iVar9 = 1;
			}
		}
		if (!func_197(uParam0, 33554432))
		{
			if ((((iVar0 < iVar1 && iVar9) && !ENTITY::_0x3EC28DA1FFAC9DDD(uParam0->f_1, *uParam0, 0, 0)) && !PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::GET_PLAYER_INDEX(), uParam0->f_1)) && !PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::GET_PLAYER_INDEX(), iVar8))
			{
				if (bParam2)
				{
					func_24(&(uParam1->f_58), 1);
				}
				return 1;
			}
		}
		else
		{
			if (iVar0 == 0)
			{
				bVar11 = true;
			}
			if (iVar0 < iVar1 && PLAYER::_0xA54000D4BFD90BDE(PLAYER::PLAYER_ID()) == 0)
			{
				bVar11 = true;
			}
			if (!PLAYER::_0xB16223CB7DA965F0(PLAYER::GET_PLAYER_INDEX()) && func_75(uParam1, 524288))
			{
				bVar11 = true;
			}
			if (bVar11)
			{
				if (!ENTITY::_0x3EC28DA1FFAC9DDD(uParam0->f_1, *uParam0, 0, 0) && iVar9 == 1)
				{
					if (bParam2)
					{
						func_24(&(uParam1->f_58), 1);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_783(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	while (iVar0 <= 512)
	{
		iVar1 = iVar0;
		if (func_3(uParam0->f_58, iVar1))
		{
		}
		iVar0 *= 2;
	}
}

int func_784(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (func_3(uParam1->f_58, 2))
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	if (ENTITY::_0x3EC28DA1FFAC9DDD(uParam0->f_1, *uParam0, 0, 0))
	{
		iVar0 = 1;
		if (bParam2)
		{
			func_24(&(uParam1->f_58), 2);
		}
	}
	return iVar0;
}

int func_785(int iParam0)
{
	if ((iParam0 == 22 || iParam0 == 37) && !func_166())
	{
		return 1;
	}
	if (iParam0 == 61)
	{
		return 1;
	}
	return 0;
}

char* func_786()
{
	return "bPickupThisCorpse";
}

void func_787(int iParam0)
{
	func_24(&(Global_1425351->f_17), iParam0);
}

int func_788(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		switch (iParam0)
		{
			case 16731:
			case 16732:
			case 16733:
			case 16734:
			case 16747:
			case 16748:
			case 16749:
			case 16750:
			case 16763:
			case 16764:
			case 16765:
			case 16766:
			case 16779:
			case 16780:
			case 16781:
			case 16782:
			case 16827:
			case 16828:
			case 16829:
			case 22798:
			case 46065:
			case 54187:
			case 54802:
				return 1;
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 30226:
			case 34606:
			case 37873:
			case 41307:
			case 41308:
			case 41309:
			case 41310:
			case 41323:
			case 41324:
			case 41325:
			case 41326:
			case 41339:
			case 41340:
			case 41341:
			case 41342:
			case 41355:
			case 41356:
			case 41357:
			case 41358:
			case 41403:
			case 41404:
			case 41405:
			case 53675:
				return 1;
			default:
				break;
		}
	}
	return 0;
}

int func_789(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if ((!ENTITY::IS_ENTITY_A_PED(iParam0) && !ENTITY::IS_ENTITY_A_VEHICLE(iParam0)) && !ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_790(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return 0;
	}
	if (func_197(uParam0, 524288) && ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_1, 200432249))
	{
		return 1;
	}
	if (!func_197(uParam0, 262144))
	{
		WEAPON::GET_AMMO_IN_CLIP(uParam0->f_1, &iVar0, uParam0->f_49);
		iVar1 = WEAPON::GET_MAX_AMMO_IN_CLIP(uParam0->f_1, uParam0->f_49, true);
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_791()
{
	return Global_40.f_11095.f_35;
}

int func_792(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_793(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_794(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_910(bParam1);
	}
}

void func_795(int iParam0)
{
	_NAMESPACE84::_0x74BCCEB233AD95B2(-156028329, iParam0);
}

char* func_796(int iParam0)
{
	if (iParam0 <= -320)
	{
		return "HONOR_BAD_8";
	}
	else if (iParam0 <= -280)
	{
		return "HONOR_BAD_7";
	}
	else if (iParam0 <= -240)
	{
		return "HONOR_BAD_6";
	}
	else if (iParam0 <= -200)
	{
		return "HONOR_BAD_5";
	}
	else if (iParam0 <= -160)
	{
		return "HONOR_BAD_4";
	}
	else if (iParam0 <= -120)
	{
		return "HONOR_BAD_3";
	}
	else if (iParam0 <= -80)
	{
		return "HONOR_BAD_2";
	}
	else if (iParam0 < 0)
	{
		return "HONOR_BAD_1";
	}
	else if (iParam0 <= 40)
	{
		return "HONOR_GOOD_1";
	}
	else if (iParam0 >= 320)
	{
		return "HONOR_GOOD_8";
	}
	else if (iParam0 >= 280)
	{
		return "HONOR_GOOD_7";
	}
	else if (iParam0 >= 240)
	{
		return "HONOR_GOOD_6";
	}
	else if (iParam0 >= 200)
	{
		return "HONOR_GOOD_5";
	}
	else if (iParam0 >= 160)
	{
		return "HONOR_GOOD_4";
	}
	else if (iParam0 >= 120)
	{
		return "HONOR_GOOD_3";
	}
	else if (iParam0 >= 80)
	{
		return "HONOR_GOOD_2";
	}
	return "HONOR_GOOD_1";
}

int func_797(var uParam0)
{
	vector3 vVar0;

	if (!func_911(23, &vVar0))
	{
		return 0;
	}
	vVar0.f_2 = 1781729525;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(vVar0.f_1), &vVar0))
	{
		vVar0.f_2 = -2103982008;
		*uParam0 = DATAFILE::_DATAFILE_GET_NUM_NODES(&vVar0);
		return 1;
	}
	return 0;
}

int func_798(int iParam0, var uParam1, var uParam2)
{
	struct<4> Var0;
	var uVar5;

	if (!func_911(23, &Var0))
	{
		return 0;
	}
	Var0.f_2 = 1781729525;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = -57097983;
		Var0.f_3 = iParam0;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			Var0.f_2 = 2027336698;
			DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
			*uParam1 = uVar5;
			Var0.f_2 = 316053773;
			DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
			*uParam2 = uVar5;
			return 1;
		}
	}
	return 0;
}

int func_799(int iParam0)
{
	return iParam0;
}

int func_800()
{
	int iVar0;

	iVar0 = func_620();
	switch (iVar0)
	{
		case 120:
		case 160:
		case 200:
			return -608161198;
		case 240:
		case 280:
		case 320:
			return -2132502231;
		default:
			break;
	}
	return -1130204298;
}

void func_801(char* sParam0, char* sParam1, int iParam2)
{
	_NAMESPACE84::_0x74BCCEB233AD95B2(-466562563, MISC::GET_HASH_KEY(sParam0));
	_NAMESPACE84::_0x74BCCEB233AD95B2(1885309238, MISC::GET_HASH_KEY(sParam1));
	_NAMESPACE84::_0x74BCCEB233AD95B2(-826961056, iParam2);
}

int func_802(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return 0;
	}
	return 1;
}

int func_803()
{
	return 1;
	if (Global_1572887->f_12 == 0)
	{
		return 1;
	}
	return Global_40.f_1;
}

int func_804(int iParam0, var uParam1, var uParam2)
{
	if (!func_802(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			*uParam1 = -816321659;
			*uParam2 = -987026056;
			break;
		case 1:
			*uParam1 = -816321659;
			*uParam2 = -1822602787;
			break;
		case 2:
			*uParam1 = -816321659;
			*uParam2 = -1602329569;
			break;
		case 3:
			*uParam1 = -816321659;
			*uParam2 = 1881899898;
			break;
		case 4:
			*uParam1 = -816321659;
			*uParam2 = -1906196506;
			break;
		case 5:
			*uParam1 = -816321659;
			*uParam2 = -674995867;
			break;
		case 6:
			*uParam1 = -816321659;
			*uParam2 = -734156617;
			break;
		case 7:
			*uParam1 = -816321659;
			*uParam2 = 261758426;
			break;
		case 8:
			*uParam1 = -816321659;
			*uParam2 = 1545586131;
			break;
		case 9:
			*uParam1 = -816321659;
			*uParam2 = -489125522;
			break;
		case 10:
			*uParam1 = -816321659;
			*uParam2 = 1190367681;
			break;
		case 11:
			*uParam1 = -816321659;
			*uParam2 = -1179367301;
			break;
		case 12:
			*uParam1 = -816321659;
			*uParam2 = 1154513253;
			break;
		case 13:
			*uParam1 = -816321659;
			*uParam2 = -1825640214;
			break;
		case 14:
			*uParam1 = -816321659;
			*uParam2 = 1209829059;
			break;
		case 15:
			*uParam1 = -816321659;
			*uParam2 = -1713230487;
			break;
		case 16:
			*uParam1 = -816321659;
			*uParam2 = 2092309893;
			break;
		default:
			return 0;
	}
	return 1;
}

int func_805(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_912(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

int func_806(int iParam0)
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

void func_807(int iParam0, int iParam1, int iParam2, int iParam3)
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
					if (func_913() > (Global_32073.f_2697.f_6[iVar0 /*6*/])->f_5)
					{
						(Global_32073.f_2697.f_6[iVar0 /*6*/])->f_5 = func_913();
					}
					func_914(&((Global_32073.f_2697.f_6[iVar0 /*6*/])->f_5), 0, 0, iParam1, iParam2, 0, 0, 0);
					func_42(&((Global_1415419->f_19[iVar0 /*12*/])->f_11), 2);
				}
			}
			iVar0++;
		}
	}
}

void func_808(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 != 0)
	{
		iVar0 = func_672(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_673(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		(Global_17503.f_2205[iVar2 /*2*/])->f_1++;
	}
}

void func_809(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 != -1 && !func_82(iParam0, 8192))
	{
		iVar0 = func_673(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		(Global_17503.f_2205[iVar0 /*2*/])->f_1++;
	}
}

void func_810(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = (func_410(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::SET_BIT(Global_17503.f_12[iVar1], iVar2);
}

void func_811(int iParam0, vector3 vParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_60(iParam0, 512))
	{
		vParam1 = { Global_36 };
	}
	if (func_213(vParam1))
	{
		return;
	}
	if (!func_223(iParam0))
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < Global_17503.f_2084)
	{
		vVar2 = { *(Global_17503.f_2084[iVar0 /*5*/]) };
		if (func_213(vVar2))
		{
			if (iVar1 < 0)
			{
				iVar1 = iVar0;
			}
		}
		else if ((Global_17503.f_2084[iVar0 /*5*/])->f_3 == iParam0)
		{
			if (func_352(vVar2, vParam1, 1f, 1))
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

void func_812(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		func_835(iVar0, iParam0);
		iVar0++;
	}
}

int func_813(int iParam0)
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

void func_814(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_815(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

void func_816(int iParam0, int iParam1)
{
	iParam0 = func_815(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1900383)[iParam0 /*45*/])->f_24 = (((*Global_1900383)[iParam0 /*45*/])->f_24 - (((*Global_1900383)[iParam0 /*45*/])->f_24 && iParam1));
}

void func_817()
{
	if (func_887(0))
	{
		func_915(0);
	}
	if (func_887(1))
	{
		func_915(1);
	}
	if (func_887(5))
	{
		func_915(5);
	}
	if (func_887(6))
	{
		func_916(6);
	}
}

int func_818(int iParam0)
{
	if (!func_494(iParam0))
	{
		return 0;
	}
	return ((*Global_1888801)[iParam0 /*35*/])->f_20;
}

bool func_819(var uParam0)
{
	return (Global_1310750->f_16074 && uParam0) != 0;
}

bool func_820()
{
	return Global_1894899 & 2 != 0;
}

int func_821(int iParam0)
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

void func_822(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_917(iParam0, iParam1))
		{
			if (func_918(iParam0, iParam1))
			{
				if (func_919(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_920(iParam0);
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

void func_823(int iParam0, int iParam1, bool bParam2)
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

void func_824(int iParam0, bool bParam1)
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

void func_825(int iParam0, int iParam1)
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

struct<4> func_826()
{
	struct<4> Var0;

	return Var0;
}

int func_827(int iParam0, bool bParam1)
{
	if (func_669(iParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_667(bParam1), iParam0, 0);
}

int func_828(int iParam0, bool bParam1, int iParam2)
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
				if (!bParam1 || func_921(iVar2))
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

int func_829(int iParam0)
{
	if (func_223(iParam0))
	{
		return (Global_17503.f_42[iParam0 /*8*/])->f_4;
	}
	return 0;
}

int func_830(int iParam0)
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

int func_831(int iParam0, int iParam1)
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

bool func_832(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return false;
	}
	return ((Global_1393237->f_11[iParam0 /*30*/])->f_10 && iParam1) != 0;
}

void func_833(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return;
	}
	(Global_1393237->f_11[iParam0 /*30*/])->f_10 = ((Global_1393237->f_11[iParam0 /*30*/])->f_10 || iParam1);
}

int func_834(int iParam0)
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

void func_835(int iParam0, int iParam1)
{
	if (!func_223(iParam0))
	{
		return;
	}
	((*Global_1310750)[iParam0 /*111*/])->f_1 = (((*Global_1310750)[iParam0 /*111*/])->f_1 - (((*Global_1310750)[iParam0 /*111*/])->f_1 && iParam1));
}

int func_836()
{
	if (func_922())
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

void func_837(var uParam0, var uParam1)
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

int func_838(var uParam0)
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

void func_839(int iParam0)
{
	int iVar0;

	if (Global_1935630->f_38 == 0)
	{
		func_42(iParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(Global_1935630->f_34[iVar0])))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(&(Global_1935630->f_34[iVar0])))
				{
					func_24(iParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}

var func_840(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

int func_841(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_842(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_842(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

int func_843(int iParam0, int iParam1, bool bParam2, int iParam3)
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

int func_844(int iParam0, var uParam1)
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
		if (PED::IS_PED_IN_COMBAT(iParam0, func_923((bVar1 && !bVar0), Global_35, 0)))
		{
			return 1;
		}
	}
	return 0;
}

void func_845(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_862((*uParam0)[iVar0 /*17*/]))
		{
			func_539((*uParam0)[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_846(int iParam0, var uParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;

	if (uParam1->f_3 > -1 && uParam1->f_3 < *uParam2)
	{
		iVar0 = uParam1->f_3;
		((*uParam2)[iVar0 /*17*/])->f_8 = 6;
		func_924(iParam0, (*uParam2)[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (func_96(((*uParam2)[iVar0 /*17*/])->f_6))
		{
			func_539((*uParam2)[iVar0 /*17*/], 11);
			return ((*Global_1945938)[((*uParam2)[iVar0 /*17*/])->f_6 /*18*/])->f_3;
		}
	}
	return 0;
}

int func_847(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_388(*uParam0);
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

int func_848(var uParam0, int iParam1)
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

void func_849(int* iParam0, int* iParam1)
{
	if (!func_724(iParam0, 23))
	{
		if (iParam1->f_7 == 648122183)
		{
			func_539(iParam1, 19);
			func_864(iParam0, 23);
			func_925(iParam1, 2);
		}
	}
}

int func_850(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (func_926(16))
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
					func_927(16);
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

void func_851(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_924(iParam0, (*uParam1)[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, iParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT((*uParam1)[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_852(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

var func_853(int iParam0)
{
	return (func_928(iParam0, 4) || func_928(iParam0, 5));
}

int func_854(int iParam0)
{
	return func_928(iParam0, 7);
}

int func_855(int iParam0)
{
	return func_928(iParam0, 6);
}

void func_856(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (func_862(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			func_924(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

int func_857(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, var uParam13, float fParam14, bool bParam15, int iParam16)
{
	int iVar0;
	bool bVar1;

	iVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_929(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, uParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_930(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_536(iParam2->f_6, 0, 1);
				iVar0 = 0;
			}
		}
		else if (!bVar1)
		{
			func_536(iParam2->f_6, 1, 1);
			iVar0 = 0;
		}
		if (bParam8)
		{
			func_931(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return iVar0;
}

int func_858(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_932(iParam1, 1))
		{
			return 1;
		}
	}
	else if (func_933(iParam1, 1))
	{
		func_934(iParam1, 1);
		return 1;
	}
	return 0;
}

void func_859(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_555((*uParam0)[iVar0 /*17*/], iParam1, bParam2);
		iVar0++;
	}
}

int func_860(int* iParam0, float fParam1, var uParam2)
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

void func_861(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 1101824977, true);
		PAD::DISABLE_CONTROL_ACTION(0, 966551065, true);
		PAD::DISABLE_CONTROL_ACTION(0, 668058244, true);
		PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	}
}

int func_862(var uParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_5))
	{
		return 1;
	}
	return 0;
}

int func_863(int iParam0)
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

void func_864(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

int func_865(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return 1;
	}
	return 0;
}

Vector3 func_866(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.y * vParam3.z) - (vParam0.z * vParam3.y)), ((vParam0.z * vParam3.x) - (vParam0.x * vParam3.z)), ((vParam0.x * vParam3.y) - (vParam0.y * vParam3.x));
}

Vector3 func_867(vector3 vParam0, float fParam3, float fParam4)
{
	vector3 vVar0;
	float fVar3;

	vVar0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), 0f };
	fVar3 = (fParam4 / 2f);
	vVar0 = { func_935(vVar0, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fParam3)) };
	vVar0.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-fVar3, fVar3);
	return vParam0 + vVar0;
}

Vector3 func_868()
{
	vector3 vVar0;

	vVar0 = { 1f, 0f, 0f };
	func_869(&vVar0, &(vVar0.f_1), MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f));
	return vVar0;
}

void func_869(var uParam0, var uParam1, float fParam2)
{
	float fVar0;
	float fVar1;

	fVar0 = *uParam0;
	fVar1 = *uParam1;
	*uParam0 = ((fVar0 * BUILTIN::COS(fParam2)) - (fVar1 * BUILTIN::SIN(fParam2)));
	*uParam1 = ((fVar0 * BUILTIN::SIN(fParam2)) + (fVar1 * BUILTIN::COS(fParam2)));
}

float func_870(float fParam0)
{
	return (fParam0 * 0.01745329f);
}

int func_871(var uParam0)
{
	if (TASK::_0x841475AC96E794D1(uParam0->f_23))
	{
		if (TASK::_0x5BA659955369B0E2(uParam0->f_23) != func_936())
		{
			return 0;
		}
		else
		{
			TASK::_0x81948DFE4F5A0283(uParam0->f_23);
		}
	}
	if (func_232(&(uParam0->f_4), 50, 10, 0))
	{
		if (uParam0->f_3 != 0)
		{
			uParam0->f_23 = func_938(uParam0->f_3, uParam0->f_4, func_937(uParam0->f_10), uParam0->f_11, uParam0->f_12, 0);
		}
		TASK::_0xE69FDA40AAC3EFC0(uParam0->f_23, 0);
		uParam0->f_15 = 1;
		return 1;
	}
	return 0;
}

int func_872(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return 0;
	}
	return 1;
}

int func_873(var uParam0)
{
	if (!func_939(*uParam0, uParam0->f_4))
	{
		return 0;
	}
	return 1;
}

int func_874(var uParam0)
{
	if (!func_873(uParam0))
	{
		return 0;
	}
	if (func_940(uParam0->f_7, uParam0->f_8, func_757(&(uParam0->f_3), 4)))
	{
		return 1;
	}
	if (!func_757(&(uParam0->f_3), 4))
	{
		if (func_941())
		{
			return 1;
		}
	}
	return 0;
}

int func_875(var uParam0)
{
	if (!func_92(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000f));
	}
	if (func_314(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_284() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

int func_876(int iParam0, float fParam1, float fParam2, bool bParam3, var uParam4, float fParam5)
{
	if (uParam4 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 1;
	}
	if (!bParam3)
	{
		if (ENTITY::IS_ENTITY_OCCLUDED(iParam0))
		{
			return 1;
		}
	}
	if (func_942(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, 1, fParam5))
	{
		return 1;
	}
	return 0;
}

bool func_877(float fParam0, float fParam1)
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return ENTITY::GET_ENTITY_SPEED(Global_35) < fParam0;
	}
	return ENTITY::GET_ENTITY_SPEED(Global_35) < fParam1;
}

int func_878(vector3 vParam0, var uParam3)
{
	if (!func_757(&(uParam3->f_3), 8))
	{
		return 1;
	}
	if (func_842(vParam0, 0.06f, 0.94f, 0.1f, 0.8f))
	{
		return 1;
	}
	return 0;
}

bool func_879(vector3 vParam0, var uParam3)
{
	float fVar0;

	fVar0 = func_880(vParam0, 1);
	return fVar0 < uParam3->f_6;
}

float func_880(vector3 vParam0, bool bParam3)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { func_943(0) };
	vVar3 = { func_545(vParam0 - CAM::GET_GAMEPLAY_CAM_COORD()) };
	if (bParam3)
	{
		return MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar3.x, vVar3.y, vVar0.x, vVar0.y));
	}
	return MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar3.x, vVar3.y, vVar0.x, vVar0.y);
}

int func_881(int iParam0)
{
	iParam0 = func_815(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (func_897(iParam0) == 0)
	{
		return 0;
	}
	return 1;
}

void func_882(int iParam0)
{
	int iVar0;
	int iVar1;

	iParam0 = func_815(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_887(iParam0))
	{
		return;
	}
	iVar0 = func_764(iParam0);
	func_944(iParam0);
	if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
	if (PED::_0xAA9F048DCF69B6DC(iVar1))
	{
		if (!func_945(iVar1))
		{
			PED::SET_PED_MODEL_IS_SUPPRESSED(iVar1, false);
		}
	}
	PED::DELETE_PED(&iVar0);
	func_946(iParam0, 0);
	func_647(iParam0);
}

void func_883(int iParam0)
{
	struct<2> Var0;
	int iVar2;
	int iVar3;

	iParam0 = func_815(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	StringCopy(Global_40.f_1095.f_1[iParam0 /*436*/], "", 64);
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_8 = 0;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_9 = 0;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_10 = 0;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_11 = 0;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_12 = -1;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_13 = -15;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_14 = 0;
	func_947(&Var0);
	func_948(iParam0, Var0);
	func_949(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_15));
	func_950(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_298));
	func_951(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_356));
	func_952(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_953(iVar2, (Global_40.f_1095.f_1[iParam0 /*436*/])->f_398[iVar2 /*4*/]);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_954(iVar3, (Global_40.f_1095.f_1[iParam0 /*436*/])->f_407[iVar3 /*4*/]);
		iVar3++;
	}
	func_955(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_420));
	func_956(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_422));
	func_957(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_425));
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_427 = { 0f, 0f, 0f };
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_430 = 0f;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_431 = -1;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_432 = -1;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_433 = 0;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_434 = 0;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_435 = 0;
	(*Global_1900383)[iParam0 /*45*/] = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_1 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_2 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_3 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_19 = { 0f, 0f, 0f };
	((*Global_1900383)[iParam0 /*45*/])->f_22 = 0f;
	((*Global_1900383)[iParam0 /*45*/])->f_23 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_24 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_25 = 0;
	if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
	{
		MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_26));
	}
	((*Global_1900383)[iParam0 /*45*/])->f_26 = 0;
	if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_27))
	{
		MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_27));
	}
	((*Global_1900383)[iParam0 /*45*/])->f_27 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_28 = { 0f, 0f, 0f };
	((*Global_1900383)[iParam0 /*45*/])->f_31 = { 0f, 0f, 0f };
	((*Global_1900383)[iParam0 /*45*/])->f_34 = 0f;
	((*Global_1900383)[iParam0 /*45*/])->f_35 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_36 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_37 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_38 = { 0f, 0f, 0f };
	((*Global_1900383)[iParam0 /*45*/])->f_41 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_42 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_43 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_44 = -1;
}

void func_884(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_885(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

int func_886(vector3 vParam0)
{
	return func_958(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

int func_887(int iParam0)
{
	iParam0 = func_815(iParam0);
	if (iParam0 <= -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383[iParam0 /*45*/]))
	{
		return 1;
	}
	return 0;
}

int func_888(int iParam0)
{
	int iVar0;

	iParam0 = func_815(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_887(iParam0))
	{
		return 0;
	}
	iVar0 = func_764(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_889(int iParam0)
{
	int iVar0;

	iParam0 = func_815(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_887(iParam0))
	{
		return 0;
	}
	iVar0 = func_764(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return 1;
	}
	return 0;
}

void func_890(int iParam0)
{
	int iVar0;

	iParam0 = func_815(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_887(iParam0))
	{
		return;
	}
	iVar0 = func_764(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	ENTITY::_SET_ENTITY_HEALTH(iVar0, 0, 0);
}

void func_891(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	var uVar4;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
	}
	func_916(iParam0);
	func_916(iParam0);
	func_959(iParam0, iParam1);
	func_960(iParam0, iParam1);
	func_961(iParam0, iParam1);
	iVar1 = func_764(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_962(iVar1);
		}
		if (iParam0 == 0)
		{
			PLAYER::_0x8FBF9EDB378CCB8C(iVar0, iVar1);
		}
		else if (iParam0 == 1)
		{
			uVar2 = PLAYER::_0x227B06324234FB09(iVar0, iVar1);
		}
		else
		{
			if (PLAYER::_0x46FA0AE18F4C7FA9(iVar0) == iVar1)
			{
				PLAYER::_0x8FBF9EDB378CCB8C(iVar0, 0);
			}
			if (PLAYER::_0xD3F7445CEA2E5035(iVar0) == iVar1)
			{
				PLAYER::_0x227B06324234FB09(iVar0, 0);
			}
		}
	}
	iVar3 = func_764(iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_962(iVar3);
		}
		if (iParam1 == 0)
		{
			PLAYER::_0x8FBF9EDB378CCB8C(iVar0, iVar3);
		}
		else if (iParam1 == 1)
		{
			uVar4 = PLAYER::_0x227B06324234FB09(iVar0, iVar3);
		}
		else
		{
			if (PLAYER::_0x46FA0AE18F4C7FA9(iVar0) == iVar3)
			{
				PLAYER::_0x8FBF9EDB378CCB8C(iVar0, 0);
			}
			if (PLAYER::_0xD3F7445CEA2E5035(iVar0) == iVar3)
			{
				PLAYER::_0x227B06324234FB09(iVar0, 0);
			}
		}
	}
	func_817();
}

int func_892()
{
	int iVar0;

	iVar0 = func_963();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 1;
	}
	return 0;
}

void func_893()
{
	int iVar0;

	iVar0 = func_963();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	OBJECT::DELETE_OBJECT(&iVar0);
	func_964(0);
}

void func_894(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

int func_895(int iParam0)
{
	iParam0 = func_815(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_9;
}

int func_896(int iParam0)
{
	iParam0 = func_815(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_8;
}

int func_897(int iParam0)
{
	iParam0 = func_815(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_14;
}

void func_898(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;

	iParam0 = func_815(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_965(&uVar0, &uVar1, &uVar2);
	func_966(iParam0, uVar0);
	func_967(iParam0, uVar1);
	func_968(iParam0, uVar2);
	func_969(iParam0, 1);
	func_970(iParam0, 1);
}

void func_899(int iParam0)
{
	iParam0 = func_815(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_971(iParam0, 1);
}

void func_900(int iParam0, vector3 vParam1, var uParam4)
{
	iParam0 = func_815(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1900383)[iParam0 /*45*/])->f_19 = { vParam1 };
	((*Global_1900383)[iParam0 /*45*/])->f_22 = uParam4;
}

int func_901(int iParam0)
{
	iParam0 = func_815(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return func_972(iParam0, 1);
}

struct<2> func_902(int iParam0)
{
	struct<2> Var0;
	var uVar2;
	var uVar3;

	iParam0 = func_815(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!func_973(iParam0, &uVar2))
	{
	}
	if (!func_974(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<6> func_903()
{
	struct<6> Var0;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;

	if (func_975(-997150586, &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_975(-1189569496, &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_975(325139909, &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_975(1310070322, &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_975(986998820, &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_975(-415648720, &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

void func_904(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
	{
		return;
	}
	func_976(iParam0);
	func_977(iParam0, uParam1);
	func_978(iParam0);
	func_979(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_980(iParam0, iParam3, 0);
	}
	PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 1);
}

void func_905(int iParam0)
{
	iParam0 = func_815(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1900383)[iParam0 /*45*/])->f_2 = 1;
	((*Global_1900383)[iParam0 /*45*/])->f_3 = SCRIPTS::GET_ID_OF_THIS_THREAD();
}

int func_906(var uParam0, var uParam1)
{
	if ((func_782(uParam0, uParam1, 0) || func_776(uParam0, uParam1, 0)) || func_777(uParam0, uParam1, 0))
	{
		return 1;
	}
	return 0;
}

float func_907(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = uParam0->f_89;
	iVar1 = 1;
	if (func_197(uParam0, 4))
	{
		iVar1 = 0;
	}
	switch (iParam1)
	{
		case 0:
			if (iVar1 && uParam0->f_79 >= 0f)
			{
				return uParam0->f_79;
			}
			switch (iVar0)
			{
				case 3:
					return 8f;
				case 4:
					return 5f;
				case 0:
					return 4f;
				case 1:
					return 3.5f;
				case 2:
					return 3f;
				default:
					break;
			}
			break;
		case 1:
			if (iVar1 && uParam0->f_80 >= 0f)
			{
				return uParam0->f_80;
			}
			switch (iVar0)
			{
				case 3:
					return 4f;
				case 4:
					return 3f;
				case 0:
					return 2f;
				case 1:
					return 1.5f;
				case 2:
					return 1f;
				default:
					break;
			}
			break;
		case 2:
			if ((iVar1 || func_197(uParam0, 524288)) && uParam0->f_81 >= 0f)
			{
				return uParam0->f_81;
			}
			switch (iVar0)
			{
				case 3:
					return 2f;
				case 4:
					return 2f;
				case 0:
					return 1f;
				case 1:
					return 0.5f;
				case 2:
					return 0.25f;
				default:
					break;
			}
			break;
	}
	return 0f;
}

int func_908(int iParam0)
{
	switch (iParam0)
	{
		case 14283:
		case 14284:
		case 14285:
		case 21030:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_909(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 11569:
		case 14410:
		case 14411:
		case 14412:
		case 14413:
		case 14414:
		case 14415:
		case 14416:
		case 56200:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_910(bool bParam0)
{
	func_981(bParam0);
	Global_1955569->f_1.f_1 = bParam0;
	if (bParam0 == 1)
	{
		HUD::_0x4CC5F2FC1332577F(121713391);
	}
	else
	{
		HUD::_0x8BC7C1F929D07BF3(121713391);
	}
}

int func_911(int iParam0, var uParam1)
{
	if (!func_982(iParam0))
	{
		return 0;
	}
	*uParam1 = Global_1914270[iParam0];
	if (*uParam1 == 0)
	{
		return 0;
	}
	return 1;
}

int func_912(int iParam0)
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

int func_913()
{
	return &Global_1899515;
}

void func_914(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_983(*uParam0);
	iVar1 = func_984(*uParam0);
	iVar2 = func_985(*uParam0);
	iVar3 = func_476(*uParam0);
	iVar4 = func_986(*uParam0);
	iVar5 = func_987(*uParam0);
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
	iVar6 = func_988(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_988(iVar1, iVar0);
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
	func_989(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_915(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	int iVar11;
	vector3 vVar12;
	float fVar15;
	bool bVar16;
	int iVar17;
	int iVar18;
	float fVar19;
	int iVar20;
	int iVar21;
	int iVar22;

	if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
	{
		return;
	}
	iVar0 = func_764(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	bVar1 = false;
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		bVar1 = true;
	}
	if (!PED::_0xA0BC8FAED8CFEB3C(iVar0))
	{
		return;
	}
	if (func_972(iParam0, 64))
	{
		func_916(iParam0);
		return;
	}
	bVar2 = false;
	if (!MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26) && !MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_27))
	{
		if (!MAP::GET_BLIP_FROM_ENTITY(iVar0) == 0)
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		return;
	}
	uVar3 = func_622(42);
	if (bVar1)
	{
		if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
		{
			MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_26));
		}
		if (iVar0 == PLAYER::_0xB48050D326E9A2F3(PLAYER::PLAYER_ID()) && uVar3)
		{
			if (!MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_27))
			{
				((*Global_1900383)[iParam0 /*45*/])->f_27 = MAP::_0x23F74C2FDA6E7C61(-515518185, iVar0);
				MAP::SET_BLIP_SPRITE(((*Global_1900383)[iParam0 /*45*/])->f_27, -1327110633, true);
				func_990(&(((*Global_1900383)[iParam0 /*45*/])->f_27));
			}
		}
		else if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_27))
		{
			MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_27));
		}
		return;
	}
	else if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_27))
	{
		MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_27));
	}
	bVar4 = false;
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (Global_1935630->f_40 == iVar0)
		{
			bVar4 = true;
		}
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26) && bVar4)
	{
		func_916(iParam0);
	}
	if (bVar4)
	{
		return;
	}
	if ((Global_40.f_1095.f_1[iParam0 /*436*/])->f_14 == 2)
	{
		return;
	}
	bVar6 = false;
	if (iParam0 == 0)
	{
		iVar5 = -1925605092;
	}
	else if (iParam0 == 1)
	{
		iVar5 = -1230993421;
		bVar6 = true;
	}
	else
	{
		return;
	}
	if (bVar6)
	{
		bVar7 = false;
		if (func_991(1) < 1)
		{
			bVar7 = true;
		}
		if (bVar7)
		{
			if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
			{
				MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_26));
			}
			return;
		}
	}
	if (!MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
	{
		((*Global_1900383)[iParam0 /*45*/])->f_26 = MAP::_0x23F74C2FDA6E7C61(iVar5, iVar0);
		((*Global_1900383)[iParam0 /*45*/])->f_25 = 0;
		func_992(&(((*Global_1900383)[iParam0 /*45*/])->f_26), bVar6);
	}
	if (!MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_972(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = TASK::IS_PED_IN_WRITHE(iVar0);
	bVar10 = false;
	iVar11 = func_993(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar11))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar11))
		{
			if (PED::GET_MOUNT(iVar11) == iVar0)
			{
				bVar10 = true;
			}
		}
	}
	vVar12 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	fVar15 = func_994(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_995(iParam0))
	{
		bVar16 = true;
	}
	iVar17 = 0;
	iVar18 = 0;
	if (bVar8)
	{
		if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 3)
		{
			iVar17 = -401963276;
			((*Global_1900383)[iParam0 /*45*/])->f_25 = 3;
		}
	}
	else if (bVar9)
	{
		fVar19 = PED::_0xEBE89623EB861271(iVar0, 1);
		if (bVar16)
		{
			if (fVar19 < 0.25f)
			{
				if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 9)
				{
					iVar17 = 430539302;
					iVar18 = 1313031610;
					((*Global_1900383)[iParam0 /*45*/])->f_25 = 9;
				}
			}
			else if (fVar19 < 0.5f)
			{
				if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 10)
				{
					iVar17 = -995247980;
					iVar18 = 1313031610;
					((*Global_1900383)[iParam0 /*45*/])->f_25 = 10;
				}
			}
			else if (fVar19 < 0.75f)
			{
				if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 11)
				{
					iVar17 = -25056193;
					iVar18 = 1313031610;
					((*Global_1900383)[iParam0 /*45*/])->f_25 = 11;
				}
			}
			else if (fVar19 <= 1f)
			{
				if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 12)
				{
					iVar17 = -264630352;
					iVar18 = 1313031610;
					((*Global_1900383)[iParam0 /*45*/])->f_25 = 12;
				}
			}
		}
		else if (fVar19 < 0.25f)
		{
			if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 5)
			{
				iVar17 = 430539302;
				iVar18 = -1012863186;
				((*Global_1900383)[iParam0 /*45*/])->f_25 = 5;
			}
		}
		else if (fVar19 < 0.5f)
		{
			if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 6)
			{
				iVar17 = -995247980;
				iVar18 = -1012863186;
				((*Global_1900383)[iParam0 /*45*/])->f_25 = 6;
			}
		}
		else if (fVar19 < 0.75f)
		{
			if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 7)
			{
				iVar17 = -25056193;
				iVar18 = -1012863186;
				((*Global_1900383)[iParam0 /*45*/])->f_25 = 7;
			}
		}
		else if (fVar19 <= 1f)
		{
			if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 8)
			{
				iVar17 = -264630352;
				iVar18 = -1012863186;
				((*Global_1900383)[iParam0 /*45*/])->f_25 = 8;
			}
		}
	}
	else if (bVar10)
	{
		if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 4)
		{
			iVar17 = -1380599892;
			((*Global_1900383)[iParam0 /*45*/])->f_25 = 4;
		}
	}
	else if (bVar16)
	{
		if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 2)
		{
			iVar17 = 1313031610;
			((*Global_1900383)[iParam0 /*45*/])->f_25 = 2;
		}
	}
	else if (!bVar16)
	{
		if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 1)
		{
			iVar17 = -1012863186;
			((*Global_1900383)[iParam0 /*45*/])->f_25 = 1;
		}
	}
	if (iVar17 != 0)
	{
		func_996(((*Global_1900383)[iParam0 /*45*/])->f_26);
		func_997(((*Global_1900383)[iParam0 /*45*/])->f_26);
		MAP::_0x662D364ABF16DE2F(((*Global_1900383)[iParam0 /*45*/])->f_26, iVar17);
		if (iVar17 == -401963276)
		{
			MAP::_0x662D364ABF16DE2F(((*Global_1900383)[iParam0 /*45*/])->f_26, 231194138);
		}
	}
	if (iVar18 != 0)
	{
		MAP::_0x662D364ABF16DE2F(((*Global_1900383)[iParam0 /*45*/])->f_26, iVar18);
	}
	if ((PLAYER::_0xB48050D326E9A2F3(PLAYER::PLAYER_ID()) == iVar0 && uVar3) && !bVar9)
	{
		MAP::_0x662D364ABF16DE2F(((*Global_1900383)[iParam0 /*45*/])->f_26, 673950256);
	}
	else
	{
		MAP::_0xB059D7BD3D78C16F(((*Global_1900383)[iParam0 /*45*/])->f_26, 673950256);
	}
	if (func_998(iVar0) && !bVar9)
	{
		if (iVar5 == -1925605092)
		{
			iVar20 = 561559387;
		}
		else if (iVar5 == -1230993421)
		{
			iVar20 = -201249929;
		}
		MAP::_0x662D364ABF16DE2F(((*Global_1900383)[iParam0 /*45*/])->f_26, iVar20);
	}
	else
	{
		MAP::_0xB059D7BD3D78C16F(((*Global_1900383)[iParam0 /*45*/])->f_26, 561559387);
		MAP::_0xB059D7BD3D78C16F(((*Global_1900383)[iParam0 /*45*/])->f_26, -201249929);
	}
	iVar21 = func_991(iParam0);
	iVar22 = 0;
	if (iParam0 == 0)
	{
		switch (iVar21)
		{
			case 0:
				iVar22 = -217389439;
				break;
			case 1:
				iVar22 = 13992470;
				break;
			case 2:
				iVar22 = 396341162;
				break;
			case 3:
				iVar22 = 623069873;
				break;
			case 4:
				iVar22 = -637422489;
				break;
		}
	}
	else if (iParam0 == 1)
	{
		switch (iVar21)
		{
			case 0:
				iVar22 = 937553910;
				break;
			case 1:
				iVar22 = 489732756;
				break;
			case 2:
				iVar22 = 195204984;
				break;
			case 3:
				iVar22 = -103418913;
				break;
			case 4:
				iVar22 = -815685893;
				break;
		}
	}
	if (iVar22 == 0)
	{
		MAP::_0x44813684F72B563C(iVar0, ((*Global_1900383)[iParam0 /*45*/])->f_26);
	}
	else
	{
		MAP::_0x97F6F158CC5B5CA2(iVar0, ((*Global_1900383)[iParam0 /*45*/])->f_26);
		MAP::_0x7563CBCA99253D1A(iVar0, iVar22);
	}
}

void func_916(int iParam0)
{
	iParam0 = func_815(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_26));
	}
	((*Global_1900383)[iParam0 /*45*/])->f_25 = 0;
}

bool func_917(int iParam0, int iParam1)
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

int func_918(int iParam0, int iParam1)
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

bool func_919(int iParam0, int iParam1)
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
	if (!func_917(iParam0, iVar0))
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

void func_920(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

bool func_921(int iParam0)
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

int func_922()
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

int func_923(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_924(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	char* sVar0;
	int iVar1;

	if (func_96(iParam1->f_6))
	{
		if (iParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		func_97(&(iParam1->f_6), 0, 1);
	}
	if (!func_96(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_862(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_999(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824, 0, 1704213876, iParam1->f_10, 0);
			if (func_96(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_931(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_1000(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						func_1001(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_534(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					func_1000(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					func_536(iParam1->f_6, 0, 1);
				}
				else
				{
					func_536(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

void func_925(int* iParam0, int iParam1)
{
	if (!func_538(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_539(iParam0, 14);
		}
	}
}

bool func_926(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_927(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_928(int iParam0, int iParam1)
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

bool func_929(int* iParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, var uParam8, float fParam9, bool bParam10, int iParam11)
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

bool func_930(int iParam0, int iParam1)
{
	if (iParam1 && !func_96(iParam0))
	{
		return false;
	}
	return !func_719(iParam0, 4);
}

void func_931(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (iParam3 && !func_96(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = func_292(iParam0);
	func_1000(iParam0, 18, 0, 1);
	func_1000(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1);
	}
	HUD::_UIPROMPT_SET_GROUP(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam4, iParam2);
}

bool func_932(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_96(iParam0))
	{
		return false;
	}
	iVar0 = func_292(iParam0);
	if (HUD::_0xCD072523791DDC1B(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

bool func_933(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_96(iParam0))
	{
		return false;
	}
	iVar0 = func_292(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_934(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_96(iParam0))
	{
		return;
	}
	iVar0 = func_292(iParam0);
	HUD::_UIPROMPT_RESTART_MODES(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

Vector3 func_935(vector3 vParam0, float fParam3)
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

int func_936()
{
	return -1;
}

float func_937(float fParam0)
{
	return (fParam0 * 57.29578f);
}

int func_938(int iParam0, vector3 vParam1, float fParam4, float fParam5, float fParam6, int iParam7)
{
	return TASK::CREATE_SCENARIO_POINT(iParam0, vParam1, fParam4, fParam5, fParam6, iParam7);
}

int func_939(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (!func_92(&uParam0))
	{
		return 0;
	}
	if (func_875(&uParam0) <= iParam3 + 500)
	{
		return 0;
	}
	return 1;
}

int func_940(float fParam0, float fParam1, bool bParam2)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;

	func_1002(&uVar0, &uVar1, &iVar2, &iVar3, 529461124, 1410914475, -1497929239, 665185216, 2);
	if (!bParam2)
	{
		if (iVar2 != 0 || iVar3 != 0)
		{
			return 1;
		}
	}
	if (!func_877(fParam0, fParam1))
	{
		return 1;
	}
	return 0;
}

int func_941()
{
	if (((((((((((PAD::IS_CONTROL_PRESSED(0, -1879280170) || PAD::IS_CONTROL_PRESSED(0, 1537201378)) || PAD::IS_CONTROL_PRESSED(0, -1175108432)) || PAD::IS_CONTROL_PRESSED(0, 1520437207)) || PAD::IS_CONTROL_PRESSED(0, -1292666904)) || PAD::IS_CONTROL_PRESSED(0, -640622144)) || PAD::IS_CONTROL_PRESSED(0, -455946723)) || PAD::IS_CONTROL_PRESSED(0, -1242632265)) || PAD::IS_CONTROL_PRESSED(0, -485697785)) || PAD::IS_CONTROL_PRESSED(0, -822242784)) || PAD::IS_CONTROL_PRESSED(0, 782960533)) || PAD::IS_CONTROL_PRESSED(0, -874806616))
	{
		return 1;
	}
	return 0;
}

int func_942(vector3 vParam0, float fParam3, float fParam4, int iParam5, float fParam6)
{
	float fVar0;

	fVar0 = func_154(Global_35, vParam0, 1);
	if (fVar0 < fParam4 && iParam5)
	{
		return 1;
	}
	if (fVar0 > (fParam3 + fParam6))
	{
		return 1;
	}
	return 0;
}

Vector3 func_943(int iParam0)
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

void func_944(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;

	iParam0 = func_815(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_764(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_1003(iVar6);
		if (!PED::_0x608BC6A6AACD5036(&Var2, iVar0, iVar1, 0))
		{
		}
		else
		{
			iVar7 = Var2.f_3;
			if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
			}
			else if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar7) && !ENTITY::_0x88AD6CC10D8D35B2(iVar7))
			{
			}
			else
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar7))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar7, true, true);
				}
				ENTITY::_0x0D0DB2B6AF19A987(&iVar7);
			}
		}
		iVar6++;
	}
}

int func_945(int iParam0)
{
	if (!func_1004(iParam0))
	{
		return 0;
	}
	if (!func_1005())
	{
		return 1;
	}
	return 0;
}

void func_946(int iParam0, int iParam1)
{
	iParam0 = func_815(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0 /*45*/] = iParam1;
}

void func_947(var uParam0)
{
	*uParam0 = -377364164; /* GXTEntry: "Natural" */
	uParam0->f_1 = 357708345; /* GXTEntry: "Natural" */
}

void func_948(int iParam0, struct<2> Param1)
{
	iParam0 = func_815(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_1006(iParam0, Param1))
	{
	}
	if (!func_1007(iParam0, Param1.f_1))
	{
	}
}

void func_949(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_1008((*uParam0)[iVar0 /*94*/]);
		iVar0++;
	}
}

void func_950(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 57)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_951(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		(*uParam0)[iVar0 /*5*/] = 0;
		((*uParam0)[iVar0 /*5*/])->f_1 = 0;
		((*uParam0)[iVar0 /*5*/])->f_2 = 0;
		((*uParam0)[iVar0 /*5*/])->f_3 = 0;
		((*uParam0)[iVar0 /*5*/])->f_4 = 0;
		iVar0++;
	}
}

void func_952(var uParam0)
{
	int iVar0;

	uParam0->f_1 = 0f;
	*uParam0 = 0;
	iVar0 = 0;
	while (iVar0 < 23)
	{
		if (iVar0 == -1)
		{
		}
		else
		{
			uParam0->f_2[iVar0] = 0f;
		}
		iVar0++;
	}
}

void func_953(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 100;
	*uParam1 = iVar0;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
}

void func_954(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	if (iParam0 == 2)
	{
		iVar0 = 50;
	}
	*uParam1 = iVar0;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
}

void func_955(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1f;
}

void func_956(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -15;
}

void func_957(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
}

int func_958(int iParam0)
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

void func_959(int iParam0, int iParam1)
{
	MISC::_COPY_MEMORY(&(Global_1900383->f_508), Global_40.f_1095.f_1[iParam1 /*436*/], 436);
	MISC::_COPY_MEMORY(Global_40.f_1095.f_1[iParam1 /*436*/], Global_40.f_1095.f_1[iParam0 /*436*/], 436);
	MISC::_COPY_MEMORY(Global_40.f_1095.f_1[iParam0 /*436*/], &(Global_1900383->f_508), 436);
}

void func_960(int iParam0, int iParam1)
{
	MISC::_COPY_MEMORY(&(Global_1900383->f_463), (*Global_1900383)[iParam1 /*45*/], 45);
	MISC::_COPY_MEMORY((*Global_1900383)[iParam1 /*45*/], (*Global_1900383)[iParam0 /*45*/], 45);
	MISC::_COPY_MEMORY((*Global_1900383)[iParam0 /*45*/], &(Global_1900383->f_463), 45);
}

int func_961(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<4> Var29;
	bool bVar58;
	int iVar59;

	Var0.f_9 = -1591664384;
	Var29.f_9 = -1591664384;
	if (!func_1009(iParam0, &Var0))
	{
		return 0;
	}
	bVar58 = false;
	if (!func_1009(iParam1, &Var29))
	{
		bVar58 = true;
	}
	if (bVar58)
	{
		iVar59 = func_1010(iParam1);
		if (iVar59 == 0)
		{
			return 0;
		}
		if (!func_1011(Var0, Var0.f_5, iVar59, 0, 0))
		{
			return 0;
		}
	}
	else if (!func_1012(Var0, Var29, 0, 0))
	{
		return 0;
	}
	return 1;
}

void func_962(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (func_1013(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, false, true);
	}
	PED::_0xBCC76708E5677E1D(iParam0, 0);
	PED::_0x931B241409216C1F(Global_35, iParam0, 0);
	PED::_0xB8B6430EAD2D2437(iParam0, 130495496);
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar2 = PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iVar1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, iVar2);
	ENTITY::SET_ENTITY_INVINCIBLE(iParam0, false);
	POPULATION::_0xF74E134F40192884(iParam0, 1);
	PED::_0xFD6943B6DF77E449(iParam0, false);
	PLAYER::_0xDF93973251FB2CA5(iVar0, 1);
	PED::REQUEST_PED_VISIBILITY_TRACKING(iParam0);
	FLOCK::_0xAEB97D84CDF3C00B(iParam0, 0);
	if (func_641(iParam0))
	{
		iVar3 = func_642(iParam0);
		if (func_1014(iVar3))
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 324, true);
		}
	}
	PED::SET_PED_CONFIG_FLAG(iParam0, 211, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 208, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 209, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 400, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 136, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 312, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 113, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 301, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 277, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 319, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 6, true);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 25, false);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 24, false);
}

var func_963()
{
	return Global_1900383->f_393;
}

void func_964(int iParam0)
{
	Global_1900383->f_393 = iParam0;
}

int func_965(var uParam0, int iParam1, var uParam2)
{
	bool bVar0;

	*uParam0 = 0;
	*iParam1 = 0;
	*uParam2 = 0;
	if (func_803())
	{
		if (func_164())
		{
			bVar0 = false;
			if (!func_379(((*Global_1835011)[15 /*74*/])->f_1, 1) && !func_622(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*uParam0 = func_1015();
				*iParam1 = func_1016();
				*uParam2 = func_1017();
				return 1;
			}
			else
			{
				*uParam0 = func_1018();
				*iParam1 = func_1019();
				*uParam2 = func_1020();
				return 1;
			}
		}
		else if (func_166())
		{
			if (!func_379(((*Global_1835011)[60 /*74*/])->f_1, 1))
			{
				*uParam0 = func_1021();
				*iParam1 = func_1022();
				*uParam2 = func_1023();
				return 1;
			}
			else
			{
				*uParam0 = func_1024();
				*iParam1 = func_1025();
				*uParam2 = func_1026();
				return 1;
			}
		}
	}
	else if (func_164())
	{
		*uParam0 = func_1027();
		*iParam1 = func_1028();
		*uParam2 = func_1029();
		return 1;
	}
	else if (func_166())
	{
		*uParam0 = func_1030();
		*iParam1 = func_1031();
		*uParam2 = func_1032();
		return 1;
	}
	return 0;
}

void func_966(int iParam0, var uParam1)
{
	iParam0 = func_815(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_8 = uParam1;
}

void func_967(int iParam0, var uParam1)
{
	iParam0 = func_815(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_9 = uParam1;
}

void func_968(int iParam0, var uParam1)
{
	iParam0 = func_815(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_10 = uParam1;
}

void func_969(int iParam0, int iParam1)
{
	iParam0 = func_815(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_14 = iParam1;
}

void func_970(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iParam0 = func_815(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_895(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		func_965(&uVar1, &iVar0, &uVar2);
	}
	iVar3 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	if (iParam1 > iVar3)
	{
		return;
	}
	fVar4 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iParam1));
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_372 = iParam1;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_372.f_1 = fVar4;
	func_1033(iParam1);
	iVar5 = func_764(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar5) || PED::IS_PED_INJURED(iVar5))
	{
		return;
	}
	iVar6 = BUILTIN::FLOOR((Global_40.f_1095.f_1[iParam0 /*436*/])->f_372.f_1);
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(iVar5, 7, iVar6);
	iVar7 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iVar5, 7);
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_372 = iVar7;
	PED::_0xA69899995997A63B(iVar5, iVar7);
}

void func_971(int iParam0, int iParam1)
{
	iParam0 = func_815(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1900383)[iParam0 /*45*/])->f_24 = (((*Global_1900383)[iParam0 /*45*/])->f_24 || iParam1);
}

bool func_972(int iParam0, int iParam1)
{
	iParam0 = func_815(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return (((*Global_1900383)[iParam0 /*45*/])->f_24 && iParam1) != 0;
}

int func_973(int iParam0, var uParam1)
{
	struct<4> Var0;

	Var0.f_9 = -1591664384;
	if (!func_1009(iParam0, &Var0))
	{
		return 0;
	}
	*uParam1 = func_1034(Var0, 1415981582, 0);
	if (!func_666(*uParam1, 0))
	{
		return 0;
	}
	return 1;
}

int func_974(int iParam0, var uParam1)
{
	struct<4> Var0;

	Var0.f_9 = -1591664384;
	if (!func_1009(iParam0, &Var0))
	{
		return 0;
	}
	*uParam1 = func_1034(Var0, -2119169513, 0);
	if (!func_666(*uParam1, 0))
	{
		return 0;
	}
	return 1;
}

int func_975(int iParam0, var uParam1)
{
	struct<4> Var0;

	if (!func_1035(856287005, iParam0))
	{
		return 0;
	}
	Var0 = { func_1036() };
	*uParam1 = func_1034(Var0, iParam0, 0);
	if (!func_666(*uParam1, 0))
	{
		return 0;
	}
	return 1;
}

void func_976(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	PED::_0xDF631E4BCE1B1FC4(iParam0, -1442703445, 0, false);
	PED::_0xDF631E4BCE1B1FC4(iParam0, -1505972720, 0, false);
}

void func_977(int iParam0, var uParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	func_1037(iParam0, *uParam1);
	func_1037(iParam0, uParam1->f_1);
}

void func_978(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	PED::_0xDF631E4BCE1B1FC4(iParam0, 399422490, 0, false);
	PED::_0xDF631E4BCE1B1FC4(iParam0, -1163401704, 0, false);
	PED::_0xDF631E4BCE1B1FC4(iParam0, 88372018, 0, false);
	PED::_0xDF631E4BCE1B1FC4(iParam0, -630346294, 0, false);
	PED::_0xDF631E4BCE1B1FC4(iParam0, -273475295, 0, false);
	PED::_0xDF631E4BCE1B1FC4(iParam0, -2142954459, 0, false);
}

void func_979(int iParam0, var uParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	func_1037(iParam0, *uParam1);
	func_1037(iParam0, uParam1->f_1);
	func_1037(iParam0, uParam1->f_2);
	func_1037(iParam0, uParam1->f_3);
	func_1037(iParam0, uParam1->f_4);
	func_1037(iParam0, uParam1->f_5);
}

int func_980(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (!PED::_DOES_METAPED_OUTFIT_EXIST_FOR_PED_MODEL(iParam1, iVar0))
	{
		return 0;
	}
	PED::_0x1902C4CFCC5BE57C(iParam0, iParam1);
	if (bParam2)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 1, 1, 1, 1, 0);
	}
	return 1;
}

void func_981(bool bParam0)
{
	_NAMESPACE84::_0xB6FD96420C0126A1(-1056478928, bParam0);
}

bool func_982(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

var func_983(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_563(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_984(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_985(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_986(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_987(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_988(int iParam0, int iParam1)
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

void func_989(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1038(uParam0, iParam6);
	func_1039(uParam0, iParam5);
	func_1040(uParam0, iParam4);
	func_1041(uParam0, iParam3);
	func_1042(uParam0, iParam2);
	func_1043(uParam0, iParam1);
}

void func_990(var uParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_0x9CB1A1623062F402(*uParam0, func_1045(func_1044(255), 109029619));
	}
	else if (func_164())
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_166();
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_991(int iParam0)
{
	iParam0 = func_815(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_372;
}

void func_992(var uParam0, bool bParam1)
{
	char* sVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_0x9CB1A1623062F402(*uParam0, func_1045(func_1044(255), 109029619));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_164())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_166())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (MISC::COMPARE_STRINGS(sVar0, "", false, -1) != 0)
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, sVar0);
		}
	}
}

int func_993(int iParam0)
{
	iParam0 = func_815(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return ((*Global_1900383)[iParam0 /*45*/])->f_37;
}

float func_994(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

float func_995(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	var uVar12;

	iParam0 = func_815(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_895(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return -1f;
	}
	iVar1 = func_991(iParam0);
	iVar2 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	fVar3 = TASK::_0xEB67D4E056C85A81(iVar1);
	fVar4 = TASK::_0x78D8C1D4EB80C588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_991(iParam0) + 1;
	fVar6 = func_1046(iParam0);
	fVar7 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar1));
	fVar8 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	uVar12 = func_1047(fVar3, fVar4, fVar11);
	return uVar12;
}

void func_996(int iParam0)
{
	MAP::_0xB059D7BD3D78C16F(iParam0, -401963276);
	MAP::_0xB059D7BD3D78C16F(iParam0, 231194138);
	MAP::_0xB059D7BD3D78C16F(iParam0, -1012863186);
	MAP::_0xB059D7BD3D78C16F(iParam0, -272772079);
	MAP::_0xB059D7BD3D78C16F(iParam0, 1313031610);
	MAP::_0xB059D7BD3D78C16F(iParam0, -1814032670);
	MAP::_0xB059D7BD3D78C16F(iParam0, -1380599892);
	MAP::_0xB059D7BD3D78C16F(iParam0, 430539302);
	MAP::_0xB059D7BD3D78C16F(iParam0, -995247980);
	MAP::_0xB059D7BD3D78C16F(iParam0, -25056193);
	MAP::_0xB059D7BD3D78C16F(iParam0, -264630352);
}

void func_997(int iParam0)
{
	MAP::_0xB059D7BD3D78C16F(iParam0, 673950256);
	MAP::_0xB059D7BD3D78C16F(iParam0, 561559387);
	MAP::_0xB059D7BD3D78C16F(iParam0, -201249929);
}

int func_998(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (PED::_0x34D6AC1157C8226C(iParam0, -1805387726))
	{
		return 1;
	}
	return 0;
}

int func_999(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_719(iVar0, 2))
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
				func_1048(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, uParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}

void func_1000(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam3 && !func_96(iParam0))
	{
		return;
	}
	iVar0 = func_292(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam1, iParam2);
}

void func_1001(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4)
{
	int iVar0;

	if (iParam4 && !func_96(iParam0))
	{
		return;
	}
	iVar0 = func_292(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, MISC::_CREATE_VAR_STRING(10, sParam1, sParam2, sParam3));
}

void func_1002(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	*uParam0 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam4) * 127f));
	*uParam1 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam5) * 127f));
	*uParam2 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam6) * 127f));
	*uParam3 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam7) * 127f));
}

int func_1003(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4;
		case 1:
			return 5;
		case 2:
			return 6;
	}
	return 0;
}

int func_1004(int iParam0)
{
	switch (iParam0)
	{
		case -1523757120:
		case -1516219602:
		case -1063137731:
		case 604357666:
		case 705691988:
		case 1048964673:
		case 1576849913:
			return 1;
	}
	return 0;
}

bool func_1005()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(99890643);
}

int func_1006(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<4> Var29;

	Var0.f_9 = -1591664384;
	if (!func_1009(iParam0, &Var0))
	{
		return 0;
	}
	Var29 = { func_449(iParam1, Var0, 1415981582, 0) };
	return func_1049(Var29, 1);
}

int func_1007(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<4> Var29;

	Var0.f_9 = -1591664384;
	if (!func_1009(iParam0, &Var0))
	{
		return 0;
	}
	Var29 = { func_449(iParam1, Var0, -2119169513, 0) };
	return func_1049(Var29, 1);
}

void func_1008(var uParam0)
{
	int iVar0;

	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = -1;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		uParam0->f_10[iVar0 /*8*/] = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_1 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_2 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_3 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_4 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_5 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_6 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_7 = 0;
		iVar0++;
	}
	uParam0->f_91 = 0;
	uParam0->f_92 = 0;
	uParam0->f_93 = 0;
}

int func_1009(int iParam0, var uParam1)
{
	int iVar0;
	struct<10> Var1;
	struct<4> Var15;

	if (!func_1050(iParam0))
	{
		return 0;
	}
	iVar0 = func_1010(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1.f_9 = -1591664384;
	Var15 = { func_656(0) };
	if (!func_1051(Var15, iVar0, &Var1, 0, 0))
	{
		return 0;
	}
	if (!func_1052(&Var1, uParam1))
	{
		return 0;
	}
	return 1;
}

int func_1010(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 7:
			return 1782082944;
		case 1:
			return -832337898;
		case 2:
			return 1271463052;
		case 3:
			return 1983140194;
		case 4:
			return 677262775;
	}
	return 0;
}

int func_1011(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10)
{
	struct<12> Var0;
	struct<4> Var14;

	if (!func_451(bParam10))
	{
		return func_1053(Param0, Param4, iParam8, 1, bParam9, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0) || !INVENTORY::_0xB881CA836CC4B6D4(&Param4))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_663(Param0, &Var0, 0, 0))
	{
		return 0;
	}
	if (func_1054(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return 1;
	}
	if (!INVENTORY::_0x780C5B9AE2819807(Var0.f_4, iParam8))
	{
		return 0;
	}
	if (!INVENTORY::_0xDCCAA7C3BFD88862(func_667(0), &Param0, &Param4, iParam8, Var0.f_11, &Var14))
	{
		return 0;
	}
	if (bParam9)
	{
		if (!func_1049(Var14, 1))
		{
		}
	}
	return 1;
}

int func_1012(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9)
{
	struct<11> Var0;
	struct<11> Var14;
	int iVar28;

	if (!func_451(bParam9))
	{
		return func_1055(Param0, Param4, iParam8, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0) || !INVENTORY::_0xB881CA836CC4B6D4(&Param4))
	{
		return 0;
	}
	if (func_1054(&Param0, &Param4))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_663(Param0, &Var0, bParam9, 1) || !func_663(Param4, &Var14, bParam9, 1))
	{
		return 0;
	}
	if (func_1054(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return 0;
	}
	if (!INVENTORY::_0x780C5B9AE2819807(Var0.f_4, Var14.f_9) || !INVENTORY::_0x780C5B9AE2819807(Var14.f_4, Var0.f_9))
	{
		return 0;
	}
	iVar28 = func_667(0);
	if (!INVENTORY::_0xF2753D691BCDA314(iVar28, &Param0, &Param4))
	{
		return 0;
	}
	if (!INVENTORY::_0x734311E2852760D0(iVar28, &Param0, (Var14.f_10 || iParam8)))
	{
	}
	if (!INVENTORY::_0x734311E2852760D0(iVar28, &Param4, (Var0.f_10 || iParam8)))
	{
	}
	return 1;
}

int func_1013(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (func_1056(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		return 1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseCompanion"))
	{
		return 1;
	}
	return 0;
}

int func_1014(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 5)
	{
		return 1;
	}
	return 0;
}

int func_1015()
{
	return 1342496140;
}

int func_1016()
{
	return 446670976;
}

int func_1017()
{
	return 1;
}

int func_1018()
{
	return -868094182;
}

int func_1019()
{
	return 1074477367;
}

int func_1020()
{
	return 1;
}

int func_1021()
{
	return -997197050;
}

int func_1022()
{
	return -2063289686;
}

int func_1023()
{
	return 2;
}

int func_1024()
{
	return -868094182;
}

int func_1025()
{
	return 1074477367;
}

int func_1026()
{
	return 1;
}

int func_1027()
{
	return 1235275977;
}

int func_1028()
{
	return 2030804811;
}

int func_1029()
{
	return 1;
}

int func_1030()
{
	return 1974379573;
}

int func_1031()
{
	return 2024948086;
}

int func_1032()
{
	return 1;
}

void func_1033(int iParam0)
{
	if (func_1057() < iParam0)
	{
		func_1058(iParam0);
	}
}

int func_1034(struct<4> Param0, int iParam4, bool bParam5)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_1059(Param0, iParam4, &Var0, bParam5))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_1035(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar4;
	int iVar5;
	int iVar6;

	if (iParam0 != 0)
	{
		iVar5 = func_661(iParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_1060(iParam0);
			iVar0 = 0;
			while (iVar0 < iVar6)
			{
				if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar5, iVar0, &uVar1))
				{
					iVar4 = uVar1;
					if (iVar4 == iParam1)
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

struct<4> func_1036()
{
	struct<4> Var0;

	Var0 = { func_656(0) };
	return func_449(856287005, Var0, -218846335, 0);
}

void func_1037(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (iParam1 == -377364164 || iParam1 == 357708345)
	{
		return;
	}
	iVar0 = iParam1;
	PED::_SET_PED_COMPONENT_ENABLED(iParam0, iVar0, false, false, false);
}

void func_1038(var uParam0, int iParam1)
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

void func_1039(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 62914560);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_1040(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_984(*uParam0);
	iVar1 = func_983(*uParam0);
	if (iParam1 < 1 || iParam1 > func_988(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4063232);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_1041(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 126976);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_1042(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4032);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_1043(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 63);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

char* func_1044(int iParam0)
{
	char* sVar0;

	if (iParam0 == 255)
	{
		if (func_1061(37, iParam0))
		{
			return HUD::_0xD8402B858F4DDD88(&(Global_1109400->f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1109400->f_12)));
		}
		else
		{
			return PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID());
		}
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return "";
	}
	sVar0 = "";
	if (!&Global_1225638->f_21[iParam0])
	{
		return sVar0;
	}
	if (func_1061(37, iParam0))
	{
		return HUD::_0xD8402B858F4DDD88(&(((*Global_1108178)[iParam0 /*37*/])->f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(((*Global_1108178)[iParam0 /*37*/])->f_12)));
	}
	return PLAYER::GET_PLAYER_NAME(&(Global_1225638->f_120[iParam0]));
}

char* func_1045(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return MISC::_CREATE_VAR_STRING(10, "PLAYER_STRING", sParam0);
	}
	return func_1062(MISC::_CREATE_VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

float func_1046(int iParam0)
{
	iParam0 = func_815(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_372.f_1;
}

float func_1047(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

void func_1048(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, var uParam13, int iParam14, var uParam15, var uParam16, int iParam17, var uParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
			HUD::_UIPROMPT_SET_PRESSED_TIMED_MODE(iVar0, uParam16);
			break;
		case 3:
			HUD::_UIPROMPT_SET_HOLD_INDEFINITELY_MODE(iVar0);
			break;
		case 6:
			HUD::_UIPROMPT_SET_HOLD_AUTO_FILL_MODE(iVar0, uParam16, uParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, 1);
			}
			break;
		case 7:
			HUD::_UIPROMPT_SET_MASH_MODE(iVar0, iParam17);
			break;
		case 8:
			HUD::_UIPROMPT_SET_MASH_AUTO_FILL_MODE(iVar0, uParam16, iParam17);
			break;
		case 13:
			HUD::_UIPROMPT_SET_MASH_INDEFINITELY_MODE(iVar0);
			break;
		case 15:
			HUD::_UIPROMPT_SET_TARGET_MODE(iVar0, 0.5f, 0.1f, 0);
			break;
		case 9:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_MODE(iVar0, iParam17, uParam18, iParam19);
			break;
		case 4:
		case 5:
			HUD::_UIPROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, iParam24);
			break;
		case 10:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(iVar0, iParam17, uParam18, iParam19);
			break;
		case 11:
			HUD::_UIPROMPT_SET_MASH_MANUAL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), uParam18, 0f, iParam19);
			break;
		case 12:
			HUD::_UIPROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), uParam18, 0f, iParam19);
			break;
		case 14:
			HUD::_UIPROMPT_SET_ROTATE_MODE(iVar0, iParam20, iParam21);
			HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 10, 1);
			break;
	}
	HUD::_UIPROMPT_REGISTER_END(iVar0);
	((*Global_1945938)[iParam0 /*18*/])->f_3 = iVar0;
	func_737(iParam0, 1);
	func_738(iParam0, 1);
	func_739(iParam0, 128);
}

int func_1049(struct<4> Param0, int iParam4)
{
	struct<11> Var0;

	if (!func_451(0))
	{
		return func_1063(Param0, iParam4, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_663(Param0, &Var0, 0, 0))
	{
		return 0;
	}
	if (Var0.f_10 == iParam4)
	{
		return 1;
	}
	if (!INVENTORY::_0x734311E2852760D0(func_667(0), &Param0, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_1050(int iParam0)
{
	int iVar0;
	struct<4> Var1;

	iVar0 = func_1010(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_656(0) };
	if (func_1064(&Var1, iVar0, 0) > 0)
	{
		return 1;
	}
	return 0;
}

int func_1051(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	int iVar0;

	iVar0 = func_667(bParam7);
	if (INVENTORY::_0x033EE4B89F3AC545(iVar0, &uParam0, iParam4) <= iParam6)
	{
		return 0;
	}
	if (!INVENTORY::_0xBE012571B25F5ACA(iVar0, &uParam0, iParam4, iParam6, uParam5))
	{
		return 0;
	}
	return 1;
}

int func_1052(var uParam0, var uParam1)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_667(0), uParam0, uParam1, 29, 1))
	{
		return 0;
	}
	return 1;
}

int func_1053(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, var uParam10, bool bParam11)
{
	struct<12> Var0;
	int iVar14;
	int iVar15;
	struct<16> Var16;
	int iVar32;

	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0) || !INVENTORY::_0xB881CA836CC4B6D4(&Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	if (!func_663(Param0, &Var0, 1, 0))
	{
		return -1;
	}
	if (func_1054(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return -1;
	}
	if (!INVENTORY::_0x780C5B9AE2819807(Var0.f_4, iParam8))
	{
		return -1;
	}
	iVar14 = func_664(Var0.f_4, Param4, iParam8, 0);
	iVar15 = INVENTORY::_0xE80E50BEE276A54A(Var0.f_4, iParam8);
	if (iVar15 >= 0)
	{
		if (iVar14 >= iVar15)
		{
			return -1;
		}
		else if ((iVar14 + Var0.f_11) > iVar15)
		{
			if (bParam11)
			{
				return -1;
			}
			Var0.f_11 = (iVar15 - iVar14);
		}
	}
	Var16 = { func_1065(&Var0) };
	Var16.f_4 = { Param4 };
	Var16.f_11 = iParam8;
	Var16.f_10 = uParam10;
	iVar32 = func_1066(1168099063, &Var16, bParam9);
	if (iVar32 == -1)
	{
		return -1;
	}
	return iVar32;
}

int func_1054(var uParam0, var uParam1)
{
	if (((*uParam0 == *uParam1 && uParam0->f_1 == uParam1->f_1) && uParam0->f_2 == uParam1->f_2) && uParam0->f_3 == uParam1->f_3)
	{
		return 1;
	}
	return 0;
}

int func_1055(struct<4> Param0, struct<4> Param4, var uParam8, bool bParam9)
{
	struct<11> Var0;
	struct<11> Var14;
	struct<16> Var28;
	struct<16> Var44;
	int iVar60;

	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0) || !INVENTORY::_0xB881CA836CC4B6D4(&Param4))
	{
		return -1;
	}
	if (func_1054(&Param0, &Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_663(Param0, &Var0, 1, 0) || !func_663(Param4, &Var14, 1, 0))
	{
		return -1;
	}
	if (func_1054(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return -1;
	}
	if (!INVENTORY::_0x780C5B9AE2819807(Var0.f_4, Var14.f_9) || !INVENTORY::_0x780C5B9AE2819807(Var14.f_4, Var0.f_9))
	{
		return -1;
	}
	Var28 = { func_1065(&Var0) };
	Var28.f_4 = { Var14.f_5 };
	Var28.f_11 = Var14.f_9;
	Var28.f_10 = (Var14.f_10 || uParam8);
	Var44 = { func_1065(&Var14) };
	Var44.f_4 = { Var0.f_5 };
	Var44.f_11 = Var0.f_9;
	Var44.f_10 = (Var0.f_10 || uParam8);
	iVar60 = -1;
	if (bParam9)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar60, 712853601, 1168099063))
		{
			if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar60, &Var28, 16) && NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar60, &Var44, 16))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar60))
				{
					func_1067(iVar60, 1);
				}
				else
				{
					NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar60);
					return -1;
				}
			}
			else
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar60);
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	else
	{
		iVar60 = func_1066(1168099063, &Var28, 0);
		iVar60 = func_1066(1168099063, &Var44, 0);
	}
	return iVar60;
}

int func_1056(int iParam0)
{
	switch (iParam0)
	{
		case joaat("a_c_horse_gang_bill"):
		case joaat("a_c_horse_gang_sean"):
		case joaat("a_c_horse_gang_john"):
		case -1486704931:
		case joaat("a_c_horse_gang_dutch"):
		case -1356425746:
		case joaat("a_c_horse_gang_javier"):
		case joaat("a_c_horse_gang_sadie"):
		case joaat("a_c_horse_gang_lenny"):
		case joaat("a_c_horse_gang_micah"):
		case joaat("a_c_horse_gang_hosea"):
		case -575759638:
		case joaat("a_c_horse_gang_charles"):
		case 291878635:
		case joaat("a_c_horse_gang_trelawney"):
		case 1139858530:
		case 1760888205:
		case 1800725969:
			return 1;
	}
	return 0;
}

int func_1057()
{
	return Global_40.f_1095.f_3135;
}

void func_1058(int iParam0)
{
	Global_40.f_1095.f_3135 = iParam0;
}

int func_1059(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
{
	struct<4> Var0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x22E590F108289A9D(func_667(bParam6), &uParam0, uParam4, &Var0))
	{
		return 0;
	}
	if (!func_663(Var0, uParam5, bParam6, 0))
	{
		return 0;
	}
	return 1;
}

int func_1060(int iParam0)
{
	int iVar0;

	if (!func_666(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_661(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_COUNT(iVar0);
}

int func_1061(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_1068(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_1069())
	{
		return func_1068(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1225638->f_21[iParam1])
	{
		return func_1068(&(((*Global_1108178)[iParam1 /*37*/])->f_4), iVar0, 5);
	}
	return 0;
}

char* func_1062(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_1063(struct<4> Param0, int iParam4, bool bParam5)
{
	int iVar0;
	struct<11> Var1;
	int iVar15;
	struct<28> Var16;
	struct<17> Var44;
	struct<16> Var61;

	iVar0 = -1;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_663(Param0, &Var1, 1, 0))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam4)
	{
		return iVar0;
	}
	iVar15 = func_657(Var1.f_4);
	if (iVar15 == -1784221369)
	{
		Var16 = { func_1070(Param0, 1) };
		Var16.f_10 = iParam4;
		iVar0 = func_1071(-1230526146, &Var16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -1037537535)
	{
		Var44 = { func_1072(Param0, 1) };
		Var44.f_10 = iParam4;
		iVar0 = func_1073(-1230526146, &Var44, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var61 = { func_1065(&Var1) };
		Var61.f_10 = iParam4;
		iVar0 = func_1066(-1230526146, &Var61, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

int func_1064(var uParam0, int iParam1, bool bParam2)
{
	return INVENTORY::_0x033EE4B89F3AC545(func_667(bParam2), uParam0, iParam1);
}

struct<16> func_1065(var uParam0)
{
	struct<16> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { *uParam0 };
	Var0.f_4 = { uParam0->f_5 };
	Var0.f_8 = uParam0->f_4;
	Var0.f_9 = uParam0->f_11;
	Var0.f_11 = uParam0->f_9;
	Var0.f_10 = uParam0->f_10;
	return Var0;
}

int func_1066(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 712853601, iParam0))
		{
			if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 16))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_1067(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_1067(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 16))
	{
		func_1067(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_1067(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1224226)
	{
		if (&Global_1224226->f_1[iVar0 /*9*/] == iParam0)
		{
			if ((Global_1224226->f_1[iVar0 /*9*/])->f_1 == iParam1)
			{
			}
			else
			{
				(Global_1224226->f_1[iVar0 /*9*/])->f_1 = iParam1;
			}
			return;
		}
		iVar0++;
	}
	func_1074(iParam0, iParam1);
}

bool func_1068(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_1069()
{
	return Global_1109400->f_244;
}

struct<28> func_1070(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	struct<28> Var0;
	struct<29> Var28;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return Var0;
	}
	Var28.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_667(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_1065(&Var28) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_1071(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 712853601, iParam0))
		{
			if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 28))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_1067(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_1067(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 28))
	{
		func_1067(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<17> func_1072(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	struct<17> Var0;
	struct<15> Var17;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return Var0;
	}
	Var17.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_667(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_1065(&Var17) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_1073(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 712853601, iParam0))
		{
			if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 17))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_1067(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_1067(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 17))
	{
		func_1067(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_1074(int iParam0, int iParam1)
{
	int iVar0;
	struct<9> Var1;

	if (iParam0 == -1)
	{
		return;
	}
	if (&Global_1224226 < 20)
	{
		Global_1224226 = &Global_1224226 + 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*(Global_1224226->f_1[iVar0 /*9*/]) = { *(Global_1224226->f_1[iVar0 + 1 /*9*/]) };
			iVar0++;
		}
	}
	Var1 = -1;
	Var1 = iParam0;
	Var1.f_1 = iParam1;
	*(Global_1224226->f_1[(&Global_1224226 - 1) /*9*/]) = { Var1 };
}

