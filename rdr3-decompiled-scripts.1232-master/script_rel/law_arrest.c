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
	var uLocal_15 = 0;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	var uLocal_27 = 0;
	bool bLocal_28 = false;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	bool bLocal_36 = false;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	bool bLocal_39 = false;
	vector3 vLocal_40 = { 0f, 0f, 0f };
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	struct<1008> Local_45 = { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1101004800, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1053 = 0;
	var uLocal_1054 = 0;
	var uLocal_1055 = 0;
	var uLocal_1056 = 0;
	var uLocal_1057 = 0;
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 0;
	var uLocal_1065 = 0;
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 0;
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	var uLocal_1079 = 0;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = 1;
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 0;
	var uLocal_1088 = 0;
	var uLocal_1089 = 0;
	var uLocal_1090 = 24;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	var uLocal_1132 = 0;
	var uLocal_1133 = 0;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	var uLocal_1156 = 0;
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
	int iLocal_1188 = 0;
	int iLocal_1189 = 0;
	int iLocal_1190 = 0;
	int iLocal_1191 = 0;
	int iLocal_1192 = 0;
	int iLocal_1193 = 0;
	struct<11> Local_1194 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7 } ;
	int iLocal_1205 = 0;
	struct<11> Local_1206 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7 } ;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 0;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
	var uScriptParam_23 = 0;
	var uScriptParam_24 = 0;
	var uScriptParam_25 = 0;
	var uScriptParam_26 = 0;
	var uScriptParam_27 = 0;
	var uScriptParam_28 = 0;
	var uScriptParam_29 = 0;
	var uScriptParam_30 = 0;
	var uScriptParam_31 = 0;
	var uScriptParam_32 = 0;
	var uScriptParam_33 = 0;
	var uScriptParam_34 = 0;
	var uScriptParam_35 = 0;
	var uScriptParam_36 = 0;
	var uScriptParam_37 = 0;
	var uScriptParam_38 = 0;
	var uScriptParam_39 = 0;
	var uScriptParam_40 = 10000;
	var uScriptParam_41 = 0;
	var uScriptParam_42 = 0;
	var uScriptParam_43 = 0;
	var uScriptParam_44 = 0;
	var uScriptParam_45 = 0;
	var uScriptParam_46 = 0;
	var uScriptParam_47 = 0;
	var uScriptParam_48 = 0;
	var uScriptParam_49 = 0;
	var uScriptParam_50 = 0;
	var uScriptParam_51 = 0;
	var uScriptParam_52 = 0;
	var uScriptParam_53 = 0;
	var uScriptParam_54 = 0;
	var uScriptParam_55 = 0;
	var uScriptParam_56 = 0;
	var uScriptParam_57 = 0;
	var uScriptParam_58 = 1;
	var uScriptParam_59 = 34;
	var uScriptParam_60 = 0;
#endregion

void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_20 = 15;
	iLocal_21 = 20;
	iLocal_22 = 6;
	iLocal_23 = 5000;
	iLocal_24 = -1;
	iLocal_25 = -1;
	iLocal_32 = 1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_1(&uScriptParam_0, 1);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	while (!func_2(&uScriptParam_0))
	{
		BUILTIN::WAIT(0);
	}
	if (STREAMING::_0xCF45DF50C7775F2A())
	{
		STREAMING::CLEAR_FOCUS();
		STREAMING::_0x5A8B01199C3E79C3();
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_3(uParam0, bParam1);
	}
	func_4(&Local_45);
	func_5(1);
	func_6();
	if (func_7(7))
	{
		func_8((*Global_1835011)[7 /*74*/], 8192);
	}
	Global_1934266->f_60 = 0;
}

int func_2(var uParam0)
{
	int iVar0;
	int iVar1;

	switch (iLocal_1189)
	{
		case 0:
			func_9();
			func_10();
			PED::_0x9851DE7AEC10B4E1(func_11(PLAYER::PLAYER_ID()), 500f, 1, 0);
			func_12(func_11(PLAYER::PLAYER_ID()), 500f, 0);
			func_13(func_11(PLAYER::PLAYER_ID()), 500f, 0, 0, 0, 0, 0);
			PED::_0x4759CC730F947C81();
			VEHICLE::_0x1FF00DB43026B12F();
			func_14(uParam0->f_60);
			func_15(1);
			Global_1934266->f_60 = 1;
			iLocal_24 = iLocal_24;
			iLocal_25 = iLocal_25;
			Global_1934266->f_61 = 1;
			func_16(0);
			func_17(1);
			func_18(0);
			func_19(0, 1);
			func_20(0);
			func_21();
			func_22();
			func_23();
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0, 0);
			PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
			iLocal_19 = func_24(uParam0->f_60);
			func_25(&iLocal_1189, 1);
			break;
		case 1:
			if (func_26(uParam0->f_60))
			{
				func_25(&iLocal_1189, 2);
			}
			break;
		case 2:
			if (func_27(uParam0) && func_28(uParam0->f_60, &Local_45))
			{
				bLocal_28 = true;
				func_29(Local_45.f_970);
			}
			LAW::_0xE0FA74AA3CCE650B(PLAYER::PLAYER_ID(), func_30(uParam0->f_60, 1, 1));
			iVar0 = 0;
			while (iVar0 < func_31(uParam0->f_60))
			{
				func_32(uParam0->f_60, iVar0);
				iVar0++;
			}
			func_33(uParam0);
			func_34(1);
			func_35(&Local_45);
			func_36();
			if (bLocal_28)
			{
				func_25(&iLocal_1189, 3);
			}
			else
			{
				func_37();
				func_25(&iLocal_1189, 8);
			}
			break;
		case 3:
			iLocal_32 = 1;
			iLocal_38 = 0;
			LAW::_0x55F37F5F3F2475E1();
			func_38(&Local_45);
			func_39(&Local_45);
			if (func_40(Local_45.f_970))
			{
				func_41(&Local_45);
			}
			if (func_42(Local_45.f_970))
			{
				func_37();
				func_43();
			}
			else
			{
				iLocal_29 = 1;
			}
			POPULATION::_0xC6DCC2A3A8825C85(1);
			func_44(uParam0);
			func_45();
			func_25(&iLocal_1189, 4);
			break;
		case 4:
			func_46(Local_45.f_970);
			if (iLocal_32)
			{
				func_47();
				PED::_0xAB0D553FE20A6E25(0f);
				PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				POPULATION::_0xF45E46DEECF7DF6E(10208, 0, 0, -1, -1);
				iVar1 = func_48(&Local_45);
				if ((iVar1 == 3 && !iLocal_38) && Global_1310720->f_5 < (MISC::GET_GAME_TIMER() - 2000))
				{
					func_49();
					func_50();
					func_5(0);
					AUDIO::_0xAC84686C06184B0D("Jail_Cell", "Arrest_Fail_Respawn_Scenes");
					iLocal_38 = 1;
				}
				if (iVar1 == 5)
				{
					AUDIO::_0xAC84686C06184B0D("Fade_To_Gameplay", "Arrest_Fail_Respawn_Scenes");
					if (Local_45.f_970 == 5 || Local_45.f_970 == 4)
					{
						INTERIOR::CLEAR_ROOM_FOR_ENTITY(Global_35);
					}
					if (Local_45.f_970 == 4)
					{
						if (!func_51(11))
						{
							Local_45.f_1007 = 1;
						}
					}
					func_52(uParam0);
					iLocal_32 = 0;
				}
			}
			else
			{
				func_53(&Local_45);
				if (func_40(Local_45.f_970))
				{
					func_54();
					func_25(&iLocal_1189, 5);
				}
				else
				{
					func_54();
					func_25(&iLocal_1189, 6);
				}
			}
			break;
		case 5:
			if (!iLocal_35)
			{
				if (!iLocal_37)
				{
					func_55(&Local_45);
					func_56(1, 1114636288, 1117847552, 1116602368);
					func_57(&Local_45, &uLocal_1090);
					func_58(&Local_45);
					func_59(0);
					if (Local_45.f_1007)
					{
						func_60(&Local_45, &uLocal_1090);
					}
					iLocal_37 = 1;
				}
				func_61();
				iLocal_33 = 1;
				vLocal_40 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
				iLocal_1188 = func_62();
				iLocal_25 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(513747494, Global_35, -1f, -1f, -1f, -1082130432, -1082130432, 1127481344, 0, 0, -1, -1);
				if (func_63(&Local_45))
				{
					iLocal_24 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(217247011, vLocal_40, -1f, 50f, 50f, -1082130432, -1082130432, -1, -1);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_35, false);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
				func_5(1);
				LAW::_0x07E8B8B20570271C(PLAYER::PLAYER_ID());
				LAW::_0x22741652985C84D0(PLAYER::PLAYER_ID(), func_30(func_62(), 1, 1));
				LAW::_0x9C4352134B2835FB(PLAYER::PLAYER_ID(), 218126730);
				LAW::_0x8DE82BC774F3B862(0);
				LAW::_0xD6C0A8C7C0B2F82C(PLAYER::PLAYER_ID(), 0);
				func_64(1);
				if (!iLocal_31)
				{
					LAW::_0xF60386770878A98F(PLAYER::PLAYER_ID(), 314693001, 0, 0, 1);
					LAW::_0x75CBF20BA47E4F89(vLocal_40, func_65(func_30(iLocal_1188, 1, 1)));
					iLocal_31 = 1;
				}
				func_64(0);
				iLocal_35 = 1;
			}
			if (iLocal_33)
			{
				func_66(&Local_45);
			}
			else
			{
				iLocal_35 = 0;
				func_67(&Local_45, &uLocal_1090);
				func_25(&iLocal_1189, 10);
			}
			if (ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				func_68(&Local_45);
				func_25(&iLocal_1189, 10);
			}
			break;
		case 6:
			func_69(&Local_45, &uLocal_1090);
			POPULATION::_0xC6DCC2A3A8825C85(1);
			func_25(&iLocal_1189, 7);
			break;
		case 7:
			if (func_70(&Local_45))
			{
				func_25(&iLocal_1189, 10);
			}
			break;
		case 8:
			func_43();
			PED::_0xED9582B3DA8F02B4(1);
			while (PED::_0x5C16855277819BBF() < 1)
			{
				BUILTIN::WAIT(0);
			}
			PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
			func_49();
			func_50();
			AUDIO::_0xAC84686C06184B0D("Jail_Cell", "Arrest_Fail_Respawn_Scenes");
			func_44(uParam0);
			func_45();
			func_5(0);
			func_25(&iLocal_1189, 9);
			break;
		case 9:
			if (!func_71(&uLocal_1054, uParam0->f_60))
			{
				func_72();
				PED::SET_PED_RESET_FLAG(Global_35, 103, true);
			}
			else if (CLOCK::GET_CLOCK_HOURS() >= iLocal_21 || CLOCK::GET_CLOCK_HOURS() < iLocal_22)
			{
				func_72();
				CLOCK::ADD_TO_CLOCK_TIME(0, iLocal_20, 0);
				return 0;
			}
			else
			{
				func_25(&iLocal_1189, 10);
			}
			break;
		case 10:
			if (func_3(uParam0, 0))
			{
				func_1(uParam0, 0);
				TELEMETRY::_TELEMETRY_PLAYER_SPAWNED(Global_35);
				if (iLocal_29 == 0)
				{
					if (!bLocal_28)
					{
						func_73(1);
					}
					else
					{
						func_74();
						func_73(0);
					}
					Global_40.f_11956 = 0;
					iLocal_29 = 1;
				}
				if (!Local_45.f_1005)
				{
					if (bLocal_36)
					{
						return 1;
					}
				}
				else
				{
					func_25(&iLocal_1189, 11);
				}
			}
			break;
		case 11:
			if (Local_45.f_949 == func_62())
			{
			}
			else
			{
				func_68(&Local_45);
			}
			if (ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				func_68(&Local_45);
			}
			if (CAM::IS_SCREEN_FADING_OUT())
			{
				func_68(&Local_45);
			}
			if (!Local_45.f_1005)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_3(var uParam0, bool bParam1)
{
	switch (iLocal_1192)
	{
		case 0:
			func_52(uParam0);
			func_75();
			func_16(1);
			if (func_42(Local_45.f_970))
			{
				if (!func_76(275))
				{
					func_77(275, 0);
				}
			}
			func_78(6, 16384);
			func_78(7, 16384);
			if (bLocal_28)
			{
				PED::_0x4759CC730F947C81();
				func_79(&iLocal_1192, 1);
			}
			else
			{
				func_79(&iLocal_1192, 2);
			}
			if (bParam1)
			{
				func_3(uParam0, bParam1);
			}
			break;
		case 1:
			func_80(&Local_45);
			func_81(&(Local_45.f_950));
			func_82();
			func_56(0, 1114636288, 1117847552, 1116602368);
			func_83(iLocal_19);
			func_84();
			func_85(120, 0, 1);
			Global_1934266->f_63 = -1;
			LAW::_0xD6C0A8C7C0B2F82C(PLAYER::PLAYER_ID(), 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_35, false);
			POPULATION::_0xBC90BDF4E5228EA1();
			func_86(uParam0);
			func_82();
			func_56(0, 1114636288, 1117847552, 1116602368);
			func_87();
			func_88();
			func_34(0);
			func_59(1);
			func_15(0);
			func_89(&Local_45);
			if (!bLocal_39)
			{
				func_90(0, -1);
			}
			if (ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				Local_45.f_1005 = 0;
				bLocal_36 = true;
				return 1;
			}
			if (PED::_0x0EE3F0D7FECCC54F())
			{
				bLocal_36 = true;
				return 1;
			}
			break;
		case 2:
			PED::_0x7D4E70A67A651C71(1);
			func_83(iLocal_19);
			func_84();
			func_85(120, 0, 1);
			Global_1934266->f_63 = -1;
			LAW::_0xD6C0A8C7C0B2F82C(PLAYER::PLAYER_ID(), 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_35, false);
			POPULATION::_0xBC90BDF4E5228EA1();
			PED::_0x4759CC730F947C81();
			func_82();
			func_56(0, 1114636288, 1117847552, 1116602368);
			func_87();
			func_88();
			func_91(12, 0, 0, 0, 0, 0, 1065353216, 0);
			func_34(0);
			func_59(1);
			func_15(0);
			func_79(&iLocal_1192, 3);
			if (bParam1)
			{
				func_3(uParam0, bParam1);
			}
			break;
		case 3:
			if (!bLocal_39)
			{
				func_90(0, -1);
			}
			if (PED::_0x0EE3F0D7FECCC54F())
			{
				bLocal_36 = true;
				if (func_92(uParam0))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_4(var uParam0)
{
	if (uParam0->f_1001 > 0)
	{
		ENTITY::_0x20FAEE47427A4497();
		PED::_0x7D4E70A67A651C71(uParam0->f_1001);
	}
}

void func_5(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_93(Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_94(Global_1935630, 4194304);
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

void func_6()
{
	Global_1347477->f_6 = 0;
}

int func_7(int iParam0)
{
	int iVar0;

	if (!func_95(iParam0))
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

void func_8(var uParam0, int iParam1)
{
	uParam0->f_63 = (uParam0->f_63 || iParam1);
}

void func_9()
{
	int iVar0;

	iVar0 = func_96();
	if (func_97(iVar0))
	{
		Global_1934266->f_317[iVar0] = func_98();
	}
}

void func_10()
{
	int iVar0;

	iVar0 = func_99();
	if (func_100(Global_1934266->f_63) && Global_1934266->f_63 != iVar0)
	{
		Local_45.f_1002 = func_101(Global_1934266->f_63);
	}
	else
	{
		Local_45.f_1002 = LAW::_0x54310AAB97B92816(PLAYER::PLAYER_ID());
	}
}

Vector3 func_11(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

void func_12(vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 16384;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

void func_13(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
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

int func_14(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			if (!func_102(6, 16384))
			{
				func_103(6, 16384);
				func_104(6);
			}
			if (!func_102(7, 16384))
			{
				func_103(7, 16384);
				func_104(7);
			}
			if (func_102(6, 16384) && func_102(7, 16384))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_15(bool bParam0)
{
	if (!bParam0 && func_105(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(752193127, bParam0, 0);
	return 1;
}

void func_16(int iParam0)
{
	Global_1905944->f_5694 = iParam0;
}

void func_17(int iParam0)
{
	_NAMESPACE71::_0xDD1232B332CBB9E7(1, iParam0, 0);
}

void func_18(bool bParam0)
{
	if (func_106() != -1)
	{
		return;
	}
	if (bParam0)
	{
	}
}

void func_19(bool bParam0, bool bParam1)
{
	if (func_106() != -1)
	{
		return;
	}
	if (bParam0)
	{
	}
	func_107();
	if (bParam1)
	{
		func_108(-1);
	}
}

void func_20(bool bParam0)
{
	if (func_106() != -1)
	{
		return;
	}
	if (bParam0)
	{
	}
	func_109();
}

void func_21()
{
	if (func_110(282))
	{
		func_111(282);
	}
	if (func_110(281))
	{
		func_111(281);
	}
	if (func_110(263))
	{
		func_111(263);
	}
	if (func_110(264))
	{
		func_111(264);
	}
	if (func_110(272))
	{
		func_111(272);
	}
}

void func_22()
{
	var uVar0;
	int iVar1;

	if (!func_112())
	{
		if (func_113(&uVar0))
		{
			func_114();
		}
	}
	if (func_115())
	{
		func_116(2018429721, Global_35, 0, 1);
		iVar1 = 0;
		while (iVar1 < 29)
		{
			WEAPON::_0x67E21ACC5C0C970C(Global_35, iVar1, 0);
			iVar1++;
		}
	}
}

void func_23()
{
	PED::_0xE3144B932DFDFF65(Global_35, 0f, -1, 1, 1);
	PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Global_35, 10, "ALL");
	PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_35, 3);
	PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_35, 0);
	PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_35, 5);
	PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_35, 7);
	PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_35, 8);
	PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_35, 9);
}

int func_24(int iParam0)
{
	return func_118(iParam0, 0, 3, func_117());
}

void func_25(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

int func_26(int iParam0)
{
	if (!func_119(iLocal_19))
	{
		iLocal_19 = func_24(iParam0);
		return 0;
	}
	if (func_120(iLocal_19))
	{
		return 1;
	}
	if (!func_121(iLocal_19))
	{
		func_122(iLocal_19, 1);
	}
	else
	{
		func_94(Global_1935630, 128);
		func_123(iLocal_19, 1, 0);
	}
	return 0;
}

int func_27(var uParam0)
{
	if (((((uParam0->f_60 == 76 || uParam0->f_60 == 26) || uParam0->f_60 == 105) || uParam0->f_60 == 78) || uParam0->f_60 == 38) || uParam0->f_60 == 5)
	{
		return 1;
	}
	return 0;
}

int func_28(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	uParam1->f_970 = -1;
	if (!func_124(iParam0))
	{
		return 0;
	}
	if (func_125(iParam0))
	{
		return 0;
	}
	iVar0 = func_127(func_126(iParam0));
	if (!func_100(iVar0))
	{
		return 0;
	}
	func_128(iParam0, &iVar1, uParam1);
	if (func_129(iVar1))
	{
		uParam1->f_970 = iVar1;
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

void func_29(int iParam0)
{
	if (!func_129(iParam0))
	{
		return;
	}
	MISC::SET_BIT(&(Global_40.f_11182), iParam0);
}

int func_30(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	switch (iParam0)
	{
		case 76:
			if (func_130(iParam0))
			{
				return 305496830;
			}
			else
			{
				return -1482428221;
			}
			break;
		case 105:
			if (func_130(iParam0))
			{
				return -1323821455;
			}
			else
			{
				return -1994249944;
			}
			break;
		case 5:
			return 1559741032;
		case 61:
			return 60667583;
		case 78:
			return 1758133584;
		case 26:
			return -577559008;
		case 38:
			if (!bParam1 || func_106() != -1)
			{
				return 1624541293;
			}
			if (func_131(45))
			{
				return 1624541293;
			}
			else
			{
				return 1716860278;
			}
			break;
		case 92:
			return 1637569166;
		case 65:
			return -867798278;
		case 69:
			return 1543937523;
		case 93:
			return 1030875135;
		case 95:
			return -201437056;
		case 57:
			return 794246846;
		case 3:
			return -968357677;
		case 32:
			return 728480338;
		case 82:
			return 725489698;
		case 35:
			return 183652754;
		case 56:
			return 2056744450;
		case 126:
			return 963280223;
		case 120:
			return -256309418;
		case 124:
			return 1666986024;
		case 115:
			return 251328732;
		case 127:
			if (!bParam1 || func_106() != -1)
			{
				return 1024208566;
			}
			if (func_131(45))
			{
				return 1024208566;
			}
			else
			{
				return 1640255731;
			}
			break;
		case 22:
			if (!bParam1 || func_106() != -1)
			{
				return 965626876;
			}
			if (func_132(((*Global_1835011)[59 /*74*/])->f_1, 1))
			{
				return 965626876;
			}
			else
			{
				return 1039226266;
			}
			break;
		case 37:
			if (!bParam1 || func_106() != -1)
			{
				return -497792649;
			}
			if (func_132(((*Global_1347702)[9 /*49*/])->f_15, 1))
			{
				return -497792649;
			}
			else if (func_131(45))
			{
				return -1738342532;
			}
			else
			{
				return -1308265478;
			}
			break;
		case 4:
		case 9:
		case 43:
		case 58:
		case 71:
		case 79:
		case 98:
			if (iParam0 == func_133())
			{
				return 2126166785;
			}
			break;
		case 110:
			if (!bParam1 || func_106() != -1)
			{
				return -1990305778;
			}
			if (func_131(45))
			{
				return -1990305778;
			}
			else
			{
				return -1679988168;
			}
			break;
	}
	if (bParam2)
	{
		iVar0 = func_126(iParam0);
		if (iVar0 != -1)
		{
			return func_134(iVar0, bParam1);
		}
	}
	return 0;
}

int func_31(int iParam0)
{
	switch (iParam0)
	{
		case 76:
			return 2;
		case 26:
			return 2;
		case 105:
			return 1;
		case 78:
			return 2;
		case 5:
			return 2;
		case 38:
			return 2;
		case 115:
			return 6;
	}
	return 0;
}

void func_32(int iParam0, int iParam1)
{
	func_136(func_135(iParam0, iParam1));
}

void func_33(var uParam0)
{
	switch (uParam0->f_60)
	{
		case 78:
			func_12(2902.057f, 1311.149f, 44.9349f, 3f, 0);
			break;
		case 76:
			func_12(-272.9033f, 808.8414f, 119.3715f, 4f, 0);
			break;
		case 38:
			func_12(-764.9592f, -1263.492f, 44.1678f, 3.5f, 0);
			break;
		case 105:
			func_12(1355.627f, -1302.07f, 77.7605f, 3f, 0);
			break;
		case 26:
			func_12(-1811.578f, -353.199f, 161.4108f, 4f, 0);
			break;
		case 5:
			func_12(2503.272f, -1306.936f, 48.9537f, 2f, 0);
			break;
	}
}

void func_34(int iParam0)
{
	Global_1396116->f_139 = iParam0;
}

void func_35(var uParam0)
{
	func_137(uParam0);
	func_138(iLocal_16, 0, 114688, 0);
}

void func_36()
{
	Global_1347477->f_6 = 1;
}

void func_37()
{
	int iVar0;

	iVar0 = func_99();
	if (func_100(Global_1934266->f_63) && Global_1934266->f_63 != iVar0)
	{
		func_139(Global_1934266->f_63);
		func_140(Global_1934266->f_63);
		func_141(Global_1934266->f_63, 0);
		func_140(iVar0);
	}
	else
	{
		func_139(Global_1934266->f_63);
		func_140(Global_1934266->f_63);
	}
	LAW::_0x062B4A4A3396351D(PLAYER::PLAYER_ID());
}

void func_38(var uParam0)
{
	switch (uParam0->f_970)
	{
		case 1:
			uParam0->f_1003 = 1;
			StringCopy(&(uParam0->f_984), "JBO3_EXT", 32);
			uParam0->f_973 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-274.9539f, 807.9131f, 121.9488f, 0f, 0f, 9.543586f, 10.13485f, 10.82004f, 7.605244f, "JBO3_Restrictions");
			func_142(uParam0, 7, "CharlesSmith", -269.002f, 806.5345f, 118.2811f, 1, -270.53f, 791.97f, 117.58f, 220.6354f, 0);
			func_142(uParam0, 0, "DUTCH", -269.002f, 806.5345f, 118.2811f, 1, -271.82f, 791.26f, 117.59f, 202.4148f, 0);
			func_143(uParam0, Global_35, "arthur", -269.002f, 806.5345f, 118.2811f, 1, -268.18f, 793.36f, 117.53f, 203.3375f, 0);
			break;
		case 2:
			uParam0->f_1003 = 1;
			StringCopy(&(uParam0->f_984), "JBO7_EXT", 32);
			uParam0->f_973 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-274.9539f, 807.9131f, 121.9488f, 0f, 0f, 9.543586f, 10.13485f, 10.82004f, 7.605244f, "JBO7_Restrictions");
			func_142(uParam0, 7, "CharlesSmith", -262.9f, 819.2f, 119.5f, 1, -266.4f, 818.8f, 119.5f, 154.3179f, "HORSE_01");
			func_142(uParam0, 0, "Dutch", -268.8f, 815.9f, 119.5f, 1, -265.8f, 814.1f, 119.5f, 165.487f, "Horse_01^1");
			func_143(uParam0, Global_35, "ARTHUR", -272.7f, 811.4f, 119.5f, 1, -269.9f, 819.3f, 119.5f, 186.387f, "Horse_01^2");
			break;
		case 3:
			uParam0->f_1003 = 0;
			StringCopy(&(uParam0->f_984), "JBO2_EXT", 32);
			uParam0->f_973 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-286.7853f, 805.7806f, 119.0863f, 0f, 0f, 11.78279f, 42.17782f, 34.87466f, 15.87478f, "JBO2_Restrictions");
			func_142(uParam0, 0, "Dutch", -274.8124f, 800.249f, 118.3808f, 1, -294.5992f, 819.6844f, 118.2036f, 272.9581f, 0);
			func_143(uParam0, Global_35, "ARTHUR", -272.7505f, 811.0136f, 118.38f, 1, -303.235f, 793.9093f, 118.1267f, 5.5524f, 0);
			break;
		case 4:
			uParam0->f_1003 = 1;
			StringCopy(&(uParam0->f_984), "JBO5_EXT", 32);
			uParam0->f_973 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1811.271f, -351.171f, 165.12f, 0f, 0f, 65.01599f, 11.6f, 8.2f, 8f, "JBO5_Restrictions");
			func_142(uParam0, 7, "CharlesSmith", -1803.529f, -344.7994f, 163.5501f, 1, -1793.58f, -367.07f, 160.21f, 216.8521f, 0);
			func_142(uParam0, 1, "JohnMarston", -1803.529f, -344.7994f, 163.5501f, 1, -1791.94f, -364.9f, 160.64f, 202.8108f, 0);
			func_143(uParam0, Global_35, "arthur", -269.002f, 806.5345f, 118.2811f, 1, -1795.35f, -369.44f, 159.86f, 210.9395f, 0);
			break;
		case 5:
			uParam0->f_1003 = 1;
			StringCopy(&(uParam0->f_984), "JBO9_EXT", 32);
			uParam0->f_973 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1811.271f, -351.171f, 163.953f, 0f, 0f, 65.01599f, 11.6f, 8.2f, 8f, "JBO9_Restrictions");
			func_143(uParam0, Global_35, "JOHN", -1810.377f, -351.2475f, 161.4798f, 0, 0f, 0f, 0f, 0f, 0);
			break;
		case 6:
			uParam0->f_1003 = 1;
			StringCopy(&(uParam0->f_984), "JBO1_EXT", 32);
			uParam0->f_973 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1357.724f, -1304.623f, 78.07324f, 0f, 0f, -20f, 15.45211f, 22.1697f, 6.84831f, "JBO1_Restrictions");
			func_142(uParam0, 0, "DUTCH", 1352.871f, -1299.193f, 75.6088f, 1, 1348.682f, -1311.307f, 76.5695f, 85.1549f, "Horse_01^1");
			func_143(uParam0, Global_35, "arthur", 1354.891f, -1301.46f, 77.1865f, 1, 1350.86f, -1309.55f, 76.71f, 85.1549f, "Horse_01");
			break;
		case 7:
			uParam0->f_1003 = 0;
			StringCopy(&(uParam0->f_984), "JBO4_EXT", 32);
			uParam0->f_973 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2906.926f, 1312.666f, 45.85957f, 0f, 0f, -18.92808f, 21.62638f, 10.55981f, 7.126882f, "JBO4_Restrictions");
			func_142(uParam0, 5, "HoseaMatthews", 2916.183f, 1308.597f, 44.59514f, 1, 2911.277f, 1303.386f, 43.7005f, 158.1667f, 0);
			func_143(uParam0, Global_35, "ARTHUR", 2916.527f, 1312.022f, 44.4304f, 1, 2916.746f, 1317.201f, 43.34f, 64.3745f, 0);
			break;
		case 8:
			uParam0->f_1003 = 1;
			StringCopy(&(uParam0->f_984), "JBO6_EXT", 32);
			uParam0->f_973 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2906.926f, 1312.666f, 45.85957f, 0f, 0f, -18.92808f, 21.62638f, 10.55981f, 7.126882f, "JBO6_Restrictions");
			func_142(uParam0, 7, "CharlesSmith", 2913.348f, 1309.59f, 43.5983f, 1, 2911.918f, 1304.091f, 43.5851f, 163.1755f, "Horse_01");
			func_143(uParam0, Global_35, "ARTHUR", 2902.42f, 1312.024f, 43.9416f, 1, 2916.746f, 1317.201f, 43.34f, 64.3745f, 0);
			func_144(uParam0, joaat("s_m_m_ambientlawrural_01"), "S_M_M_AMBIENTLAWRURAL_01", 2916.527f, 1312.022f, 44.4304f, 617504531);
			func_144(uParam0, joaat("s_m_m_ambientlawrural_01"), "S_M_M_AMBIENTLAWRURAL_01^1", 2913.348f, 1309.59f, 43.5983f, 617504531);
			break;
		case 9:
			uParam0->f_1003 = 0;
			StringCopy(&(uParam0->f_984), "JBO11_EXT", 32);
			uParam0->f_973 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-759.3268f, -1267.945f, 44.01426f, 0f, 0f, 0f, 21.59153f, 12.84869f, 6.995106f, "JBO11_Restrictions");
			func_142(uParam0, 13, "AbigailRoberts", -751.2921f, -1269.159f, 42.3344f, 1, -751.6697f, -1266.675f, 42.3642f, 351.0406f, "Horse_01");
			func_143(uParam0, Global_35, "JOHN", -762.8563f, -1263.777f, 42.8484f, 1, -752.6035f, -1276.804f, 42.4938f, 88.8295f, 0);
			break;
		case 10:
			uParam0->f_1003 = 0;
			StringCopy(&(uParam0->f_984), "JBO8_EXT", 32);
			uParam0->f_973 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2503.094f, -1308.998f, 48.54811f, 0f, 0f, 0f, 40.58993f, 17.2809f, 9.483007f, "JB10_Restrictions");
			func_142(uParam0, 5, "HoseaMatthews", 2529.161f, -1307.163f, 48.2126f, 1, 2522.156f, -1316.749f, 47.8753f, 77.2207f, 0);
			func_143(uParam0, Global_35, "ARTHUR", 2512.193f, -1308.456f, 47.9537f, 1, 2522.22f, -1302.554f, 48.0213f, 93.0952f, 0);
			break;
		case 11:
			uParam0->f_1003 = 0;
			StringCopy(&(uParam0->f_984), "JBO10_EXT", 32);
			uParam0->f_973 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2503.094f, -1308.998f, 48.54811f, 0f, 0f, 0f, 40.58993f, 17.2809f, 9.483007f, "JB10_Restrictions");
			func_143(uParam0, Global_35, "John", 2503.278f, -1306.994f, 47.9537f, 0, 0f, 0f, 0f, 0f, 0);
			break;
	}
}

void func_39(var uParam0)
{
	int iVar0;

	if ((uParam0->f_998 > 0 || uParam0->f_999 > 0) || uParam0->f_1000 > 0)
	{
		if (uParam0->f_950.f_18)
		{
			iVar0 = 1;
		}
		uParam0->f_1001 = (((uParam0->f_998 + uParam0->f_999) + uParam0->f_1000 * 2) + iVar0);
		PED::_0xED9582B3DA8F02B4(uParam0->f_1001);
	}
}

int func_40(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 4:
		case 6:
			return 1;
	}
	return 0;
}

void func_41(var uParam0)
{
	func_145(uParam0);
	func_138(iLocal_17, 0, 2048, 0);
}

int func_42(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
			return 0;
	}
	return 1;
}

void func_43()
{
	func_139(func_99());
}

void func_44(var uParam0)
{
	switch (uParam0->f_60)
	{
		case 76:
			func_136(32);
			func_146(32, 32);
			iLocal_18 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-270.6571f, 785.237f, 118.2027f, 0f, 0f, 11.43384f, 44.26319f, 53.83985f, 21.44312f, "volClearScriptWagons");
			break;
		case 26:
			func_136(883);
			func_136(884);
			func_146(883, 32);
			func_146(884, 32);
			iLocal_18 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1795.738f, -362.124f, 163.6816f, 0f, 0f, -23.81512f, 51.10044f, 45.75085f, 22.93521f, "volClearScriptWagons");
			break;
		case 105:
			iLocal_18 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1347.627f, -1309.533f, 76.47682f, 0f, 0f, -19.9999f, 64.97517f, 24.37222f, 16.81363f, "volClearScriptWagons");
			break;
		case 78:
			iLocal_18 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2910.424f, 1294.851f, 43.97159f, 0f, 0f, -20.00017f, 44.69428f, 76.72396f, 18.23014f, "volClearScriptWagons");
			break;
		case 38:
			iLocal_18 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-747.7532f, -1267.985f, 42.28417f, 0f, 0f, 0f, 19.36348f, 27.39255f, 21.49196f, "volClearScriptWagons");
			break;
		case 5:
			iLocal_18 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2521.402f, -1300.223f, 47.53965f, 0f, 0f, 0f, 23.75947f, 61.34023f, 26.76055f, "volClearScriptWagons");
			break;
		case 120:
			break;
	}
}

void func_45()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (VOLUME::_0x92A78D0BEDB332A3(iLocal_18))
	{
		iVar0 = ITEMSET::CREATE_ITEMSET(true);
		ENTITY::_0x886171A12F400B89(iLocal_18, iVar0, 2);
		iVar1 = ITEMSET::GET_ITEMSET_SIZE(iVar0);
		if (iVar1 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar1)
			{
				iVar3 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(MISC::_0xEE04C0AFD4EFAF0E(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar0)));
				if (ENTITY::DOES_ENTITY_EXIST(iVar3))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar3, true, true);
					VEHICLE::DELETE_VEHICLE(&iVar3);
				}
				iVar2++;
			}
		}
	}
}

void func_46(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
			if (!func_147(0, 16384))
			{
				func_148(0, 16384, 1);
			}
			if (!func_147(7, 16384))
			{
				func_148(7, 16384, 1);
			}
			break;
		case 6:
			if (!func_147(0, 16384))
			{
				func_148(0, 16384, 1);
			}
			break;
		case 8:
			if (!func_147(7, 16384))
			{
				func_148(7, 16384, 1);
			}
			break;
		case 4:
			if (!func_147(1, 16384))
			{
				func_148(1, 16384, 1);
			}
			if (!func_147(7, 16384))
			{
				func_148(7, 16384, 1);
			}
			break;
	}
}

void func_47()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 29)
	{
		iVar0 = func_149(Global_35, iVar1, 0, 1);
		if ((WEAPON::IS_WEAPON_VALID(iVar0) && WEAPON::_0x0556E9D2ECF39D01(iVar0)) && !WEAPON::_0xD955FEE4B87AFA07(iVar0))
		{
			func_150(iVar0);
		}
		iVar1++;
	}
}

var func_48(var uParam0)
{
	switch (uParam0->f_969)
	{
		case 0:
			if (func_151(uParam0))
			{
				uParam0->f_969 = 1;
			}
			break;
		case 1:
			func_152(uParam0);
			func_153(uParam0);
			func_154(uParam0);
			func_155(uParam0);
			uParam0->f_969 = 2;
			break;
		case 2:
			AUDIO::SET_AUDIO_FLAG("EnableCutsceneMusic", uParam0->f_1003);
			if (func_156(uParam0))
			{
				uParam0->f_969 = 3;
			}
			break;
		case 3:
			if (func_63(uParam0))
			{
				func_157(uParam0);
			}
			if (uParam0->f_1006 == 0)
			{
				if (func_158(uParam0))
				{
					uParam0->f_969 = 4;
				}
			}
			break;
		case 4:
			func_159(uParam0);
			if (uParam0->f_1003)
			{
				AUDIO::SET_AUDIO_FLAG("EnableCutsceneMusic", false);
			}
			uParam0->f_969 = 5;
			break;
		case 5:
			break;
	}
	return uParam0->f_969;
}

void func_49()
{
	if (Global_1935630->f_3 != 0)
	{
		_NAMESPACE76::_0x00A15B94CBA4F76F(Global_1935630->f_3);
		Global_1935630->f_3 = 0;
	}
}

void func_50()
{
	func_93(Global_1935630, 4096);
	func_160();
	func_161(0, 0);
	func_162();
	func_163(0f, 0f, 0f);
	Global_40.f_9.f_15 = -1;
	func_164(0);
	Global_1310720->f_1 = { 0f, 0f, 0f };
	Global_40.f_9.f_10 = -1;
	Global_40.f_9.f_12 = 0;
	Global_40.f_9.f_13 = 0f;
	Global_1310720->f_4 = 0;
	Global_1310720->f_6 = 0;
	Global_1310720->f_7 = 0;
	Global_1310720->f_8 = 1;
	Global_1310720->f_13 = 0;
	Global_1310720->f_14 = 0;
	Global_1310720->f_12 = 0;
	Global_1310720->f_27 = 0;
	Global_1310720->f_28 = 0;
	Global_1310720->f_29 = -1;
	Global_1935630->f_4 = 0;
	Global_1897952->f_40 = 0;
	Global_1310720->f_24 = joaat("weapon_unarmed");
	Global_1310720->f_22 = -1;
	func_165(0);
	func_166(0);
	MAP::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	func_5(1);
	func_167(0);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DEATH_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("DEATH_SCENE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DYING_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("DYING_SCENE");
	}
}

bool func_51(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_132(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
	}
	return (UNLOCK::_UNLOCK_IS_UNLOCKED(((*Global_1835011)[iParam0 /*74*/])->f_2) && !UNLOCK::_UNLOCK_IS_VISIBLE(((*Global_1835011)[iParam0 /*74*/])->f_2));
}

void func_52(var uParam0)
{
	int iVar0;
	int iVar1;

	if (iLocal_30)
	{
		return;
	}
	func_168();
	func_169(&(uParam0->f_43));
	func_169(&(uParam0->f_46));
	func_169(&(uParam0->f_49));
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
	if (bLocal_28)
	{
		func_16(1);
		func_75();
		func_170(&Local_45);
		ENTITY::FREEZE_ENTITY_POSITION(Global_35, false);
		if (!func_40(Local_45.f_970))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(iLocal_23);
		}
		if (!func_76(288))
		{
			func_77(288, 0);
		}
	}
	else
	{
		iVar0 = PLAYER::PLAYER_PED_ID();
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iVar0, false);
			if (TASK::_0x9FF5F9B24E870748(iVar0))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0, 0, 1);
			}
			iVar1 = TASK::_0xDF7993356F52359A(iVar0, 1);
			if (TASK::_0x841475AC96E794D1(iVar1))
			{
				TASK::_TASK_USE_SCENARIO_POINT(iVar0, iVar1, 0, 1, 0, 0, 0, 0, -1082130432, 0);
			}
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), uParam0->f_30, false) > 2f)
			{
				ENTITY::_0x203BEFFDBE12E96A(iVar0, uParam0->f_30, uParam0->f_33, 0, 0, 1);
			}
		}
	}
	AUDIO::_0x9428447DED71FC7E("Arrest_Fail_Respawn_Scenes");
	Global_1934266->f_61 = 0;
	iLocal_30 = 1;
}

void func_53(var uParam0)
{
	switch (uParam0->f_970)
	{
		case 3:
			func_171(535323366, 1, 0f, 0, 0, 1f, 0, 0);
			func_171(295355979, 1, 0f, 0, 0, 1f, 0, 0);
			func_171(193903155, 1, 0f, 0, 0, 1f, 0, 0);
			break;
		case 1:
		case 2:
			uParam0->f_1005 = 1;
			uParam0->f_949 = func_62();
			func_171(395506985, 1, 0f, 0, 0, 1f, 0, 0);
			func_171(535323366, 1, 0f, 0, 0, 1f, 0, 0);
			func_171(295355979, 1, 0f, 0, 0, 1f, 0, 0);
			func_171(193903155, 1, 0f, 0, 0, 1f, 0, 0);
			func_171(1988748538, 1, 0f, 0, 0, 1f, 0, 0);
			break;
		case 4:
		case 5:
			uParam0->f_1005 = 1;
			uParam0->f_949 = func_62();
			func_171(1207903970, 1, 0f, 0, 0, 1f, 0, 0);
			func_171(902070893, 1, 0f, 0, 0, 1f, 0, 0);
			func_171(1821044729, 1, 0f, 1, 0, 1f, 1, 1);
			func_171(1514359658, 1, 0f, 0, 0, 1f, 0, 0);
			break;
		case 8:
			uParam0->f_1005 = 1;
			uParam0->f_949 = func_62();
			func_171(-2082598623, 1, 0f, 0, 0, 1f, 0, 0);
			func_171(1657401918, 1, 0f, 0, 0, 1f, 0, 0);
			func_171(1502928852, 1, 0f, 0, 0, 1f, 0, 0);
			break;
		case 6:
			uParam0->f_1005 = 1;
			uParam0->f_949 = func_62();
			func_171(1614494720, 1, 0f, 0, 0, 1f, 0, 0);
			func_171(349074475, 1, 0f, 0, 0, 1f, 0, 0);
			func_171(1878514758, 1, 0f, 0, 0, 1f, 0, 0);
			break;
		case 9:
			uParam0->f_1005 = 1;
			uParam0->f_949 = func_62();
			func_171(-473782212, 1, 0f, 0, 0, 1f, 0, 0);
			func_171(-884246706, 1, 0f, 0, 0, 1f, 0, 0);
			func_171(-2127191462, 1, 0f, 0, 0, 1f, 0, 0);
			func_171(-1779971138, 1, 0f, 0, 0, 1f, 0, 0);
			func_171(-1484165375, 1, 0f, 0, 0, 1f, 0, 0);
			break;
	}
}

void func_54()
{
	WEAPON::_0x4F806A6CFED89468(Global_35, 1);
}

void func_55(var uParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	struct<4> Var9;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(Global_35, false, false) };
	iVar3 = ITEMSET::CREATE_ITEMSET(true);
	LAW::_0x0C392DB374655176(vVar0, func_172(&(uParam0->f_970)), iVar3);
	iVar4 = ITEMSET::GET_ITEMSET_SIZE(iVar3);
	if (iVar4 > 0)
	{
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			iVar7 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, iVar3);
			iVar8 = MISC::_0x3FFB15534067DCD4(iVar7);
			if (ENTITY::DOES_ENTITY_EXIST(iVar8) && !PED::IS_PED_DEAD_OR_DYING(iVar8, true))
			{
				if (iVar6 < 4)
				{
					Var9 = { func_173(&(uParam0->f_970), iVar6) };
					if (!func_174(Var9))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar8, 1, 1);
						func_175(iVar8, Var9, 2, 1073741824);
					}
					iVar6++;
				}
			}
			iVar5++;
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar3);
}

void func_56(bool bParam0, int iParam1, int iParam2, float fParam3)
{
	if (bParam0)
	{
		MISC::_0x27A1B170AA8AF84C(iParam1);
		MISC::_0x89314FB3463E28DE(iParam2);
		MISC::SET_DISPATCH_IDEAL_SPAWN_DISTANCE(fParam3);
	}
	else
	{
		MISC::_0x96498D922D8D0D0A();
		MISC::_0x54EC7B6BC72BAD69();
		MISC::RESET_DISPATCH_IDEAL_SPAWN_DISTANCE();
	}
}

void func_57(var uParam0, var uParam1)
{
	switch (uParam0->f_970)
	{
		case 1:
		case 2:
			func_177(uParam1, func_176(uParam0, 0), "DUTCH", 0);
			func_177(uParam1, func_176(uParam0, 7), "CHARLES_SMITH", 0);
			func_177(uParam1, Global_35, "ARTHUR", 0);
			break;
		case 4:
			func_177(uParam1, func_176(uParam0, 1), "JOHN", 0);
			func_177(uParam1, func_176(uParam0, 7), "CHARLES_SMITH", 0);
			func_177(uParam1, Global_35, "ARTHUR", 0);
			break;
		case 6:
			func_177(uParam1, func_176(uParam0, 0), "DUTCH", 0);
			func_177(uParam1, Global_35, "ARTHUR", 0);
			break;
	}
}

void func_58(var uParam0)
{
	switch (uParam0->f_970)
	{
		case 2:
			iLocal_14 = PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
			PED::SET_PED_CONFIG_FLAG(Global_35, 155, true);
			COMPANION::_0xCBD9EC60495C728C(iLocal_14);
			PED::_0x9238A3D970BBB0A9(Global_35, -1972074710);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_950.f_2, 113, true);
			PED::FORCE_PED_MOTION_STATE(uParam0->f_950.f_2, -1415276238, false, 1, false);
			func_178(func_176(uParam0, 7));
			PED::SET_PED_CONFIG_FLAG(func_176(uParam0, 7), 113, true);
			PED::SET_PED_CONFIG_FLAG(func_176(uParam0, 7), 156, true);
			ENTITY::SET_ENTITY_INVINCIBLE(func_176(uParam0, 7), true);
			COMPANION::_0xD730281E496621FB(func_176(uParam0, 7), -1370000800);
			PED::_0x9238A3D970BBB0A9(func_176(uParam0, 7), -1972074710);
			PED::SET_PED_CONFIG_FLAG(func_179(uParam0, 7), 113, true);
			ENTITY::SET_ENTITY_INVINCIBLE(func_179(uParam0, 7), true);
			PED::FORCE_PED_MOTION_STATE(func_179(uParam0, 7), -1415276238, false, 1, false);
			func_178(func_176(uParam0, 0));
			PED::SET_PED_CONFIG_FLAG(func_176(uParam0, 0), 113, true);
			PED::SET_PED_CONFIG_FLAG(func_176(uParam0, 0), 156, true);
			ENTITY::SET_ENTITY_INVINCIBLE(func_176(uParam0, 0), true);
			COMPANION::_0xD730281E496621FB(func_176(uParam0, 0), -1370000800);
			PED::_0x9238A3D970BBB0A9(func_176(uParam0, 0), -1972074710);
			PED::SET_PED_CONFIG_FLAG(func_179(uParam0, 0), 113, true);
			ENTITY::SET_ENTITY_INVINCIBLE(func_179(uParam0, 0), true);
			PED::FORCE_PED_MOTION_STATE(func_179(uParam0, 0), -1415276238, false, 1, false);
			break;
		case 4:
			iLocal_14 = PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
			PED::SET_PED_CONFIG_FLAG(Global_35, 155, true);
			COMPANION::_0xCBD9EC60495C728C(iLocal_14);
			PED::_0x9238A3D970BBB0A9(Global_35, -1972074710);
			func_178(func_176(uParam0, 7));
			PED::SET_PED_CONFIG_FLAG(func_176(uParam0, 7), 113, true);
			PED::SET_PED_CONFIG_FLAG(func_176(uParam0, 7), 156, true);
			ENTITY::SET_ENTITY_INVINCIBLE(func_176(uParam0, 7), true);
			COMPANION::_0xD730281E496621FB(func_176(uParam0, 7), -1370000800);
			PED::_0x9238A3D970BBB0A9(func_176(uParam0, 7), -1972074710);
			PED::SET_PED_CONFIG_FLAG(func_179(uParam0, 7), 113, true);
			ENTITY::SET_ENTITY_INVINCIBLE(func_179(uParam0, 7), true);
			func_178(func_176(uParam0, 1));
			PED::SET_PED_CONFIG_FLAG(func_176(uParam0, 1), 113, true);
			PED::SET_PED_CONFIG_FLAG(func_176(uParam0, 1), 156, true);
			ENTITY::SET_ENTITY_INVINCIBLE(func_176(uParam0, 1), true);
			COMPANION::_0xD730281E496621FB(func_176(uParam0, 1), -1370000800);
			PED::_0x9238A3D970BBB0A9(func_176(uParam0, 1), -1972074710);
			PED::SET_PED_CONFIG_FLAG(func_179(uParam0, 1), 113, true);
			ENTITY::SET_ENTITY_INVINCIBLE(func_179(uParam0, 1), true);
			break;
		case 6:
			iLocal_14 = PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
			PED::SET_PED_CONFIG_FLAG(Global_35, 155, true);
			COMPANION::_0xCBD9EC60495C728C(iLocal_14);
			PED::_0x9238A3D970BBB0A9(Global_35, -1972074710);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_950.f_2, 113, true);
			PED::FORCE_PED_MOTION_STATE(uParam0->f_950.f_2, -1415276238, false, 1, false);
			func_178(func_176(uParam0, 0));
			PED::SET_PED_CONFIG_FLAG(func_176(uParam0, 0), 113, true);
			PED::SET_PED_CONFIG_FLAG(func_176(uParam0, 0), 156, true);
			COMPANION::_0xD730281E496621FB(func_176(uParam0, 0), -1370000800);
			PED::_0x9238A3D970BBB0A9(func_176(uParam0, 0), -1972074710);
			PED::SET_PED_CONFIG_FLAG(func_179(uParam0, 0), 113, true);
			ENTITY::SET_ENTITY_INVINCIBLE(func_179(uParam0, 0), true);
			break;
	}
}

void func_59(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (bParam0)
	{
		VEHICLE::_0x2A7413168F6CD5A8();
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			func_103(iVar0, 4096);
			if (VEHICLE::_0xC29996A337BDD099(((*Global_1425371)[iVar0 /*373*/])->f_1))
			{
				VEHICLE::_0xF8F7DA13CFBD4532(((*Global_1425371)[iVar0 /*373*/])->f_1, 0);
			}
			iVar0++;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			if (VEHICLE::_0xC29996A337BDD099(((*Global_1425371)[iVar1 /*373*/])->f_1))
			{
				VEHICLE::_0xF8F7DA13CFBD4532(((*Global_1425371)[iVar1 /*373*/])->f_1, 1);
			}
			iVar1++;
		}
		VEHICLE::_0x4C05B42A8D937796();
		VEHICLE::_0x16B86A49E072AA85();
	}
	if (func_106() == -1)
	{
		Global_1430221->f_1 = !bParam0;
	}
}

void func_60(var uParam0, var uParam1)
{
	vector3 vVar0;
	char* sVar3;

	vVar0 = { func_180(uParam0) };
	sVar3 = func_181(vVar0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
	{
		func_182(uParam1, vVar0, 0, -1, 0, 0);
	}
}

void func_61()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(((*Global_1396257)[iVar0 /*638*/])->f_635, false))
		{
			PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(((*Global_1396257)[iVar0 /*638*/])->f_635, 1);
		}
		iVar0++;
	}
}

int func_62()
{
	return Global_1894899->f_2;
}

int func_63(var uParam0)
{
	switch (uParam0->f_970)
	{
		case 2:
		case 6:
			return 1;
	}
	return 0;
}

void func_64(bool bParam0)
{
	if (bParam0)
	{
	}
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(15, bParam0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(6, bParam0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(1, bParam0);
}

int func_65(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case -1391142299:
			return -272694090;
		case 1608357655:
			return -1627063602;
		case -2137625828:
			return 1017205426;
		case 493546894:
			return 2143950829;
		case 1178102426:
			return 1185210962;
		case -2119728378:
			return 1762776946;
		case -1147969487:
			return 1731139335;
		case 1039226266:
			return 1721292511;
		case -650528936:
			return -1371209550;
		case -1308265478:
			return 803887238;
		case 139139039:
			return -1872796492;
		case -1738342532:
			return -974171272;
		case 537788226:
			return 898872371;
		case -1482428221:
			return 1868990101;
		case 305496830:
			return 180106674;
		case -1994249944:
			return -2046129249;
		case -1323821455:
			return 814727220;
		case 1559741032:
			return 1000443839;
		case 1339372314:
			return -118275979;
		case 60667583:
			return -230205703;
		case 1758133584:
			return -438365419;
		case -577559008:
			return 446476115;
		case 965626876:
			return -1439318812;
		case 1624541293:
			return 1802224400;
		case 1637569166:
			return 570252687;
		case -867798278:
			return -118257754;
		case 1543937523:
			return -692268627;
		case 1030875135:
			return -856325217;
		case -201437056:
			return -411459879;
		case 794246846:
			return -1366309447;
		case -968357677:
			return -569867043;
		case 728480338:
			return -306254848;
		case 725489698:
			return -1354053979;
		case 183652754:
			return 260268737;
		case 2056744450:
			return 1390168855;
		case -497792649:
			return -1247868971;
		case -1990305778:
			return -1996568747;
		case 1716860278:
			return -610541033;
		case 2126166785:
			return 718118376;
		case -877373104:
			return 854108678;
		case -1618764825:
			return -1696696178;
		case 963280223:
			return 1703526340;
		case -256309418:
			return 921278225;
		case 1024208566:
			return -726295943;
		case 1640255731:
			return 2128183465;
		case 1666986024:
			return 1010862842;
		default:
			break;
	}
	return 0;
}

void func_66(var uParam0)
{
	func_183();
	if (!func_130(iLocal_1188))
	{
		func_184(iLocal_1188, 1, 350);
	}
	if (func_185(uParam0) && !LAW::_0xAD401C63158ACBAA(PLAYER::GET_PLAYER_INDEX()))
	{
		iLocal_33 = 0;
	}
}

void func_67(var uParam0, var uParam1)
{
	vector3 vVar0;
	char* sVar3;

	vVar0 = { func_186(uParam0) };
	sVar3 = func_181(vVar0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
	{
		func_182(uParam1, vVar0, 0, -1, 0, 0);
	}
}

void func_68(var uParam0)
{
	switch (uParam0->f_970)
	{
		case 1:
		case 2:
			func_171(395506985, 0, 0f, 0, 0, 1f, 0, 0);
			func_171(1988748538, 0, 0f, 0, 0, 1f, 0, 0);
			uParam0->f_1005 = 0;
			break;
		case 4:
		case 5:
			func_171(1207903970, 0, 0f, 0, 0, 1f, 0, 0);
			func_171(902070893, 0, 0f, 0, 0, 1f, 0, 0);
			func_171(1821044729, 0, 0f, 0, 0, 1f, 0, 0);
			func_171(1514359658, 0, 0f, 0, 0, 1f, 0, 0);
			uParam0->f_1005 = 0;
			break;
		case 8:
			func_171(-2082598623, 0, 0f, 0, 0, 1f, 0, 0);
			func_171(1657401918, 1, 0f, 0, 0, 1f, 0, 0);
			uParam0->f_1005 = 0;
			break;
		case 6:
			func_171(1614494720, 0, 0f, 0, 0, 1f, 0, 0);
			func_171(349074475, 0, 0f, 0, 0, 1f, 0, 0);
			uParam0->f_1005 = 0;
			break;
		case 9:
			func_171(-473782212, 0, 0f, 0, 0, 1f, 0, 0);
			func_171(-884246706, 0, 0f, 0, 0, 1f, 0, 0);
			uParam0->f_1005 = 0;
			break;
	}
}

void func_69(var uParam0, var uParam1)
{
	vector3 vVar0;
	char* sVar3;

	vVar0 = { func_187(uParam0) };
	sVar3 = func_181(vVar0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
	{
		func_182(uParam1, vVar0, 0, -1, 0, 0);
	}
}

int func_70(var uParam0)
{
	int iVar0;
	vector3 vVar1;

	if (func_188(iVar0) == -1)
	{
		vVar1 = { 224.566f, 171.2736f, 96.9528f };
	}
	else
	{
		vVar1 = { func_189(func_133(), 1) };
	}
	switch (uParam0->f_970)
	{
		case 1:
			if (!uParam0->f_1008)
			{
				func_190(func_176(uParam0, 0), func_179(uParam0, 0), 0, 1f, 20000);
				func_190(func_176(uParam0, 7), func_179(uParam0, 7), 0, 1f, 20000);
				uParam0->f_1008 = 1;
			}
			if (func_191(uParam0))
			{
				TASK::_TASK_MOVE_IN_TRAFFIC_4(func_176(uParam0, 0), 1.75f, vVar1, 0);
				TASK::_TASK_MOVE_IN_TRAFFIC_4(func_176(uParam0, 7), 1.75f, vVar1, 0);
				return 1;
			}
			break;
		case 9:
			if (func_191(uParam0))
			{
				TASK::_TASK_MOVE_IN_TRAFFIC_4(func_176(uParam0, 13), 1.25f, vVar1, 0);
				return 1;
			}
			break;
		case 3:
			if (!uParam0->f_1008)
			{
				func_190(func_176(uParam0, 0), func_179(uParam0, 0), 0, 1f, 20000);
				uParam0->f_1008 = 1;
			}
			if (func_191(uParam0))
			{
				TASK::_TASK_MOVE_IN_TRAFFIC_4(func_176(uParam0, 0), 1.25f, vVar1, 0);
				return 1;
			}
			break;
		case 7:
			if (func_191(uParam0))
			{
				TASK::_TASK_MOVE_IN_TRAFFIC_4(func_176(uParam0, 5), 1.25f, vVar1, 0);
				return 1;
			}
			break;
		case 8:
			if (func_191(uParam0))
			{
				TASK::_TASK_MOVE_IN_TRAFFIC_4(func_176(uParam0, 7), 1.75f, vVar1, 0);
				return 1;
			}
			break;
		case 10:
			if (func_191(uParam0))
			{
				TASK::_TASK_MOVE_IN_TRAFFIC_4(func_176(uParam0, 5), 1f, vVar1, 0);
				return 1;
			}
			break;
		case 5:
		case 11:
			return 1;
	}
	return 0;
}

int func_71(var uParam0, int iParam1)
{
	switch (uParam0->f_26)
	{
		case 0:
			func_192(uParam0, iParam1);
			func_193(uParam0, 1);
			break;
		case 1:
			func_193(uParam0, 2);
			break;
		case 2:
			if (func_194(uParam0))
			{
				func_193(uParam0, 4);
			}
			break;
		case 4:
			if (func_195(uParam0))
			{
				func_193(uParam0, 7);
			}
			break;
		case 5:
			if (ANIMSCENE::_0x25557E324489393C(uParam0->f_25))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_25);
			}
			if (CAM::_0x81DCFD13CF39920E())
			{
				CAM::_0xC64ABC0676AF262B();
			}
			func_193(uParam0, 7);
			break;
		case 7:
			return 1;
	}
	return 0;
}

void func_72()
{
	HUD::_0xC9CAEAEEC1256E54(1331687942);
}

void func_73(bool bParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;

	fVar0 = (IntToFloat(Local_45.f_1002) * 0.2f);
	iVar1 = (Local_45.f_1002 - BUILTIN::ROUND(fVar0));
	if (bParam0)
	{
		iVar2 = func_196(1);
		if (iVar2 >= iVar1)
		{
			func_197(iVar1, 0, 0, 1, 1);
		}
		else
		{
			func_197(iVar2, 0, 0, 1, 1);
		}
	}
}

void func_74()
{
	Global_40.f_11182.f_1 = func_198();
}

void func_75()
{
	if (func_199(543))
	{
		func_200(543);
	}
}

bool func_76(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_106() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iVar1]), iVar2);
}

void func_77(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_201(iParam0, &iVar0, &iVar1);
	if (!func_202(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_203(iVar0, iVar1);
}

void func_78(int iParam0, int iParam1)
{
	if (!func_204(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0 /*5*/] = (&Global_40.f_11029[iParam0 /*5*/] - (Global_40.f_11029[iParam0 /*5*/] && iParam1));
}

void func_79(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

void func_80(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_1000)
	{
		func_205(uParam0->f_868[iVar0 /*20*/]);
		if ((uParam0->f_868[iVar0 /*20*/])->f_19)
		{
			func_206(uParam0->f_868[iVar0 /*20*/]);
		}
		iVar0++;
	}
}

void func_81(var uParam0)
{
	if (!uParam0->f_18)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2))
	{
		TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_2, false);
		func_207(uParam0->f_2, 0);
	}
}

void func_82()
{
	MISC::_0x96498D922D8D0D0A();
	MISC::_0x54EC7B6BC72BAD69();
	MISC::RESET_DISPATCH_IDEAL_SPAWN_DISTANCE();
}

void func_83(int iParam0)
{
	func_93(Global_1935630, 128);
	if (!func_119(iParam0))
	{
		return;
	}
	if (func_121(iParam0) || func_120(iParam0))
	{
		func_208(iParam0, 0, 2);
	}
}

void func_84()
{
	if (!func_209(&Global_1327479))
	{
		return;
	}
	if (SCRIPTS::DOES_SCRIPT_EXIST(&(((*Global_1310750)[&Global_1327479 /*111*/])->f_40)))
	{
		if (SCRIPTS::HAS_SCRIPT_LOADED(&(((*Global_1310750)[&Global_1327479 /*111*/])->f_40)))
		{
			SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(((*Global_1310750)[&Global_1327479 /*111*/])->f_40));
		}
	}
	func_210(0);
	Global_1327479 = -1;
	Global_1310750->f_16075 = 0;
	Global_1310750->f_16076 = 0;
	Global_1310750->f_16103 = { 0f, 0f, 0f };
}

void func_85(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = iParam0 * 1000;
	if ((iVar0 + MISC::GET_GAME_TIMER()) > Global_1327479->f_4)
	{
		func_211(iParam0, iParam1, bParam2);
	}
	else
	{
		iVar0 = (iVar0 / 2);
		if ((iVar0 + MISC::GET_GAME_TIMER()) > Global_1327479->f_5)
		{
			Global_1327479->f_5 = (MISC::GET_GAME_TIMER() + iVar0);
		}
	}
}

void func_86(var uParam0)
{
	switch (uParam0->f_60)
	{
		case 76:
			func_212(32);
			func_213(32, 32);
			break;
		case 26:
			func_212(883);
			func_213(883, 32);
			func_212(884);
			func_213(884, 32);
			break;
	}
}

void func_87()
{
	func_214(iLocal_16);
	func_215(iLocal_16);
}

void func_88()
{
	func_214(iLocal_17);
}

void func_89(var uParam0)
{
	switch (uParam0->f_970)
	{
		case 2:
			if (!func_216(145))
			{
				func_217(145);
				func_218(146);
				func_219(-276.3671f, 802.3903f, 117.9588f, "val_jail_int_walla", 145, 0, 1, 0, 0);
			}
			break;
		case 6:
			if (!func_216(143))
			{
				func_217(143);
				func_218(144);
				func_219(1353.237f, -1302.472f, 77.547f, "rho_sheriff_int_JBO1_01", 143, 0, 1, 0, 0);
				INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(uParam0->f_974, uParam0->f_975, 1);
			}
			break;
	}
}

void func_90(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_220(&Global_0, 8);
	}
	if (!func_221() || func_106() != -1)
	{
		return;
	}
	func_220(&Global_0, 1);
}

void func_91(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_106() != -1)
	{
		return;
	}
	if ((Global_36615 && func_222(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_223(iParam0);
	iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_224(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, iParam7);
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
			func_225(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_224(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_92(var uParam0)
{
	vector3 vVar0;
	vector3 vVar4;
	int iVar8;

	vVar0 = { func_226(uParam0->f_60) };
	vVar4 = { func_227(uParam0->f_60) };
	iVar8 = 60000;
	switch (iLocal_1191)
	{
		case 0:
			func_228(Global_35, 2018429721, 0);
			func_168();
			uParam0->f_42 = MISC::GET_GAME_TIMER();
			func_229(&iLocal_1191, 1);
			break;
		case 1:
			if (func_230(uParam0) || (uParam0->f_42 + iVar8) < MISC::GET_GAME_TIMER())
			{
				func_229(&iLocal_1191, 3);
			}
			break;
		case 3:
			func_175(iLocal_43, vVar0, 2, 1073741824);
			func_175(iLocal_44, vVar4, 2, 1073741824);
			if (!func_125(uParam0->f_60))
			{
				func_231(iLocal_43, vVar0, 5f, 0);
				func_231(iLocal_44, vVar4, 5f, 0);
			}
			if (func_232(uParam0))
			{
				if (PED::_0x0EE3F0D7FECCC54F())
				{
					func_229(&iLocal_1191, 4);
				}
			}
			break;
		case 4:
			if (func_233(uParam0))
			{
				if (func_234(uParam0))
				{
					if (func_235(iLocal_43, 0))
					{
						func_207(iLocal_43, 0);
					}
					if (func_235(iLocal_44, 0))
					{
						func_207(iLocal_44, 0);
					}
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_93(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_94(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_95(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

var func_96()
{
	return Global_1897952->f_41;
}

bool func_97(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

int func_98()
{
	return &Global_1899515;
}

int func_99()
{
	return Global_1934266->f_4;
}

bool func_100(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

int func_101(int iParam0)
{
	if (!func_100(iParam0))
	{
		return -1;
	}
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_40.f_358[iParam0 /*12*/]);
	}
	return &(Global_1058888->f_42266[iParam0 /*12*/]);
}

bool func_102(int iParam0, int iParam1)
{
	if (!func_204(iParam0))
	{
		return false;
	}
	return (Global_40.f_11029[iParam0 /*5*/] && iParam1) != 0;
}

void func_103(int iParam0, int iParam1)
{
	if (!func_204(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0 /*5*/] = (Global_40.f_11029[iParam0 /*5*/] || iParam1);
}

int func_104(int iParam0)
{
	if (VEHICLE::_0xC29996A337BDD099(((*Global_1425371)[iParam0 /*373*/])->f_1))
	{
		VEHICLE::_0xA230A5DDE12ED374(((*Global_1425371)[iParam0 /*373*/])->f_1);
		((*Global_1425371)[iParam0 /*373*/])->f_1 = 0;
	}
	return 1;
}

bool func_105(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_236(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return MISC::IS_BIT_SET(&(Global_40.f_283[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_1058888->f_40567[iVar1]), iVar2);
}

int func_106()
{
	return Global_1572887->f_12;
}

void func_107()
{
}

void func_108(int iParam0)
{
	int iVar0;

	if (func_106() != -1)
	{
		return;
	}
	if (iParam0 == -1)
	{
		PED::_0x675680D089BFA21F(Global_35, 100f);
	}
	else
	{
		iVar0 = 8;
		PED::_0xC3D4B754C0E86B9E(Global_35, BUILTIN::TO_FLOAT((iParam0 * iVar0)));
	}
}

void func_109()
{
	PLAYER::_0x95EE1DEE1DCD9070(PLAYER::PLAYER_ID(), 1);
	if (func_131(47))
	{
		PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::PLAYER_ID(), 1);
	}
	else
	{
		PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::PLAYER_ID(), 0);
	}
}

int func_110(int iParam0)
{
	int iVar0;

	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
	if (iVar0 != 0)
	{
		return iVar0 == (Global_1905944->f_22[iParam0 /*9*/])->f_1;
	}
	return 0;
}

void func_111(int iParam0)
{
	if (!func_110(iParam0))
	{
		return;
	}
	func_17(1);
}

int func_112()
{
	return iLocal_26;
}

int func_113(var uParam0)
{
	if (-1829635046 == func_237(81053684))
	{
		if (func_238(uParam0))
		{
			return 1;
		}
	}
	else if (func_239(-525676072, uParam0))
	{
		if (func_238(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_114()
{
	int iVar0;

	if (!func_240())
	{
		return 0;
	}
	if (!func_238(&iVar0))
	{
		return 0;
	}
	if (!func_241(iVar0))
	{
		return 0;
	}
	return func_242(iVar0, 0);
}

int func_115()
{
	if (!iLocal_26)
	{
		iLocal_26 = 1;
		return 1;
	}
	return 0;
}

int func_116(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	return func_243(iParam0, iParam1, bParam2, bParam3);
}

int func_117()
{
	return -683745558;
}

int func_118(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar3 = iParam0;
	iVar4 = iParam1;
	if (Global_1572887->f_12 == -1)
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 100;
				iParam3 = MISC::GET_HASH_KEY(&(((*Global_1835011)[iParam0 /*74*/])->f_8));
				break;
			case 2:
				iVar1 = 101;
				iVar2 = 170;
				break;
			case 3:
				iVar1 = 171;
				iVar2 = 190;
				break;
			case 4:
				iVar1 = 191;
				iVar2 = 230;
				break;
			case 5:
				iVar1 = 231;
				iVar2 = 260;
				break;
			case 6:
				iVar1 = 261;
				iVar2 = 290;
				break;
			case 7:
				iVar1 = 291;
				iVar2 = 370;
				break;
			case 8:
				iVar1 = 371;
				iVar2 = 570;
				iParam3 = MISC::GET_HASH_KEY(&(((*Global_1347702)[iParam0 /*49*/])->f_3));
				break;
			case 9:
				iVar1 = 571;
				iVar2 = 650;
				break;
			case 11:
				iVar1 = 651;
				iVar2 = 750;
				break;
			case 10:
				return -1;
			case 12:
				return -1;
			default:
				return -1;
		}
	}
	else
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 200;
				break;
			case 2:
				iVar1 = 201;
				iVar2 = 15700;
				break;
			case 4:
				iVar1 = 15701;
				iVar2 = 16200;
				break;
			case 12:
				iVar1 = 16201;
				iVar2 = 19200;
				break;
			case 10:
				iVar1 = 19201;
				iVar2 = 20000;
				break;
			case 8:
				return -1;
			case 7:
				return -1;
			case 6:
				return -1;
			default:
				return -1;
		}
	}
	if (iVar2 >= func_244())
	{
		iVar2 = func_244();
	}
	iVar5 = func_245(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_246(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_246(iVar6) == 0)
			{
				return func_247(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
		iVar1 = 751;
		iVar2 = 770;
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_246(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_246(iVar6) == 0)
			{
				return func_247(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (&Global_1058888->f_498[iVar0 /*2*/] == iVar5)
			{
				return iVar0;
			}
			iVar0++;
		}
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (&Global_1058888->f_498[iVar0 /*2*/] == 0)
			{
				return func_247(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

bool func_119(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_120(int iParam0)
{
	int iVar0;

	iVar0 = func_248(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_121(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < 771))
		{
			return 0;
		}
		iVar0 = (Global_12105[iParam0 /*7*/])->f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
		{
			return 0;
		}
		iVar0 = func_249(iParam0);
	}
	if (iVar0 == 1)
	{
		return 1;
	}
	if (iVar0 == 2)
	{
		return 1;
	}
	return 0;
}

void func_122(int iParam0, bool bParam1)
{
	if (!func_119(iParam0))
	{
		return;
	}
	if (!func_250(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_251(iParam0) == 0)
		{
		}
		else if (!STATS::_0x01F4D242765C6B24(func_251(iParam0)))
		{
			STATS::_0xCA41E86545413B5B(func_252(iParam0), func_253(iParam0), func_254(iParam0), func_251(iParam0), Global_36);
		}
	}
	func_255(iParam0, 1);
	bParam1 = bParam1;
}

void func_123(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!func_119(iParam0))
	{
		return;
	}
	if (!func_121(iParam0))
	{
		return;
	}
	iVar0 = func_252(iParam0);
	if (bParam1)
	{
		if (func_251(iParam0) == 0)
		{
		}
		else if (!STATS::_0x01F4D242765C6B24(func_251(iParam0)))
		{
		}
		else
		{
			if (iVar0 == 1 && iParam0 != ((*Global_1835011)[77 /*74*/])->f_1)
			{
				func_256(func_253(iParam0));
			}
			if (func_106() != 0)
			{
				STATS::_0xB2A38826E5886E83(func_251(iParam0), 0);
			}
			else
			{
				STATS::_0xB2A38826E5886E83(func_251(iParam0), Global_265238->f_79565.f_208.f_17);
			}
		}
	}
	func_257(iParam0);
	if (!func_119(func_258(0)))
	{
		func_255(iParam0, 3);
		func_5(bParam2);
		if (func_106() == -1)
		{
			if (bParam2 == 0)
			{
				LAW::_0x55F37F5F3F2475E1();
			}
			func_15(1);
		}
		func_259(iParam0, -1);
		if (bParam1 && !func_260(2))
		{
			func_220(&Global_0, 1024);
		}
		if (func_106() == -1)
		{
			func_261(&(Global_1347343->f_11), 536870912);
			func_262(2);
			Global_1357515 = -1;
			if (iVar0 == 1)
			{
				func_263(0);
			}
			if (iVar0 == 1 || iVar0 == 8)
			{
				func_264(0);
			}
		}
		if (func_106() == -1)
		{
			iVar1 = func_265(iParam0);
			if (iVar1 != -1)
			{
				iVar1 = func_266();
				switch (iVar1)
				{
					case 0:
						func_267(0);
						break;
					case 1:
						func_267(1);
						break;
					case 2:
						func_267(2);
						break;
					case 3:
						func_267(3);
						break;
					case 4:
						func_267(4);
						break;
					case 5:
						func_267(5);
						break;
					case 6:
						func_267(5);
						break;
					case 7:
						func_267(7);
						break;
					case 8:
						func_267(8);
						break;
				}
			}
			else if (iVar0 == 1)
			{
				switch (func_253(iParam0))
				{
					case 7:
					case 8:
					case 36:
						func_267(11);
						break;
				}
			}
			else if (iVar0 == 8)
			{
				switch (func_253(iParam0))
				{
					case 6:
					case 7:
					case 21:
					case 24:
					case 25:
					case 69:
					case 70:
					case 139:
						func_267(11);
						break;
					default:
						iVar1 = func_266();
						if (iVar1 != -1)
						{
							switch (iVar1)
							{
								case 0:
									func_268(0);
									break;
								case 1:
									func_268(1);
									break;
								case 2:
									func_268(2);
									break;
								case 3:
									func_268(3);
									break;
								case 4:
									func_268(4);
									break;
								case 5:
									func_268(5);
									break;
								case 6:
									func_268(5);
									break;
								case 7:
									func_268(7);
									break;
								case 8:
									func_268(8);
									break;
								default:
									break;
							}
						}
						break;
				}
			}
		}
		func_269(1);
	}
	else
	{
		func_259(iParam0, -1);
		func_255(iParam0, 4);
	}
	func_270(iParam0, 0);
}

bool func_124(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_125(int iParam0)
{
	if (!func_124(iParam0))
	{
		return 0;
	}
	return func_271(iParam0, 16777216);
}

int func_126(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	else if (iParam0 <= 10)
	{
		return 0;
	}
	else if (iParam0 <= 29)
	{
		return 1;
	}
	else if (iParam0 <= 32)
	{
		return 2;
	}
	else if (iParam0 <= 36)
	{
		return 3;
	}
	else if (iParam0 <= 39)
	{
		return 4;
	}
	else if (iParam0 <= 49)
	{
		return 7;
	}
	else if (iParam0 <= 56)
	{
		return 6;
	}
	else if (iParam0 <= 61)
	{
		return 8;
	}
	else if (iParam0 <= 76)
	{
		return 9;
	}
	else if (iParam0 <= 92)
	{
		return 10;
	}
	else if (iParam0 <= 106)
	{
		return 11;
	}
	else if (iParam0 <= 113)
	{
		return 12;
	}
	else if (iParam0 <= 115)
	{
		return 13;
	}
	else if (iParam0 <= 119)
	{
		return 14;
	}
	else if (iParam0 <= 125)
	{
		return 15;
	}
	else if (iParam0 <= 127)
	{
		return 16;
	}
	return -1;
}

int func_127(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 2:
			return 2;
		case 11:
			return 2;
		case 9:
			return 1;
		case 10:
			return 1;
		case 3:
			return 1;
		case 4:
			return 3;
		case 12:
			return 3;
		case 1:
			return 3;
		case 5:
			return 0;
		case 6:
			return 0;
		case 7:
			return 0;
		case 8:
			return 5;
		case 13:
			return 4;
		case 14:
			return 4;
		case 15:
			return 4;
		case 16:
			return 4;
		default:
			break;
	}
	return -1;
}

int func_128(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	*uParam1 = -1;
	if (!func_272())
	{
		return 0;
	}
	if (!func_273(iParam0, &iVar0, uParam2))
	{
		return 0;
	}
	if (func_274(iVar0))
	{
		return 0;
	}
	if (!func_275(iVar0))
	{
		return 0;
	}
	if (!func_276(iVar0))
	{
		return 0;
	}
	if (!func_277(&iVar0))
	{
		return 0;
	}
	*uParam1 = iVar0;
	return 1;
}

bool func_129(int iParam0)
{
	return iParam0 != -1;
}

int func_130(int iParam0)
{
	if (!func_124(iParam0))
	{
		return 0;
	}
	return func_271(iParam0, 33554432);
}

int func_131(int iParam0)
{
	if (!func_278(iParam0))
	{
		return 0;
	}
	return func_279(iParam0);
}

int func_132(int iParam0, bool bParam1)
{
	switch (func_248(iParam0))
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

int func_133()
{
	return Global_40.f_4283.f_1;
}

int func_134(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return -2137625828;
		case 1:
			return 1039226266;
		case 2:
			return 493546894;
		case 3:
			return -2119728378;
		case 4:
			if (!bParam1 || func_106() != -1)
			{
				return -1308265478;
			}
			if (func_131(45))
			{
				return -1308265478;
			}
			else
			{
				return -1738342532;
			}
			break;
		case 5:
			return -1147969487;
		case 6:
			return -1147969487;
		case 7:
			return -1147969487;
		case 8:
			return 537788226;
		case 9:
			return -1391142299;
		case 10:
			return 1178102426;
		case 11:
			return 1608357655;
		case 12:
			if (!bParam1 || func_106() != -1)
			{
				return -650528936;
			}
			if (func_131(45))
			{
				return -650528936;
			}
			else
			{
				return 139139039;
			}
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			if (!bParam1 || func_106() != -1)
			{
				return -877373104;
			}
			if (func_131(45))
			{
				return -877373104;
			}
			else
			{
				return -1618764825;
			}
			break;
	}
	return 0;
}

int func_135(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = -1;
	switch (iParam0)
	{
		case 76:
			switch (iParam1)
			{
				case 0:
					iVar0 = 25;
					break;
				case 1:
					iVar0 = 26;
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 0:
					iVar0 = 499;
					break;
				case 1:
					iVar0 = 500;
					break;
			}
			break;
		case 105:
			switch (iParam1)
			{
				case 0:
					iVar0 = 127;
					break;
			}
			break;
		case 78:
			switch (iParam1)
			{
				case 0:
					iVar0 = 430;
					break;
				case 1:
					iVar0 = 431;
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					iVar0 = 281;
					break;
				case 1:
					iVar0 = 282;
					break;
			}
			break;
		case 38:
			switch (iParam1)
			{
				case 0:
					iVar0 = 511;
					break;
				case 1:
					iVar0 = 512;
					break;
			}
			break;
		case 115:
			switch (iParam1)
			{
				case 0:
					iVar0 = 364;
					break;
				case 1:
					iVar0 = 363;
					break;
				case 2:
					iVar0 = 362;
					break;
				case 3:
					iVar0 = 361;
					break;
				case 4:
					iVar0 = 360;
					break;
				case 5:
					iVar0 = 359;
					break;
			}
			break;
	}
	if (iVar0 == -1)
	{
	}
	return iVar0;
}

int func_136(int iParam0)
{
	int iVar0;

	if (!func_280(iParam0))
	{
		return 0;
	}
	if (!func_282(func_281(iParam0)))
	{
		return 1;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(func_283(iParam0)))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(_NAMESPACE48::_0x31C70A716CAE1FEE(func_283(iParam0))))
		{
			return 1;
		}
	}
	iVar0 = _NAMESPACE48::_0x31C70A716CAE1FEE(func_283(iParam0));
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
		}
	}
	_NAMESPACE48::_0x7B204F88F6C3D287(func_283(iParam0));
	return 1;
}

void func_137(var uParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(iLocal_16))
	{
		return;
	}
	switch (uParam0->f_970)
	{
		case 1:
		case 2:
		case 3:
			iLocal_16 = VOLUME::_CREATE_VOLUME_BOX(-268.8677f, 792.1881f, 118.7011f, 0f, 0f, 7.124719f, 35.4679f, 40.30593f, 9.127473f);
			break;
		case 4:
			iLocal_16 = VOLUME::_CREATE_VOLUME_BOX(-1799.767f, -355.932f, 164.8285f, 0f, 0f, 0f, 29.4004f, 39.85352f, 15.19435f);
			break;
		case 6:
			iLocal_16 = VOLUME::_CREATE_VOLUME_BOX(1354.038f, -1312.003f, 76.54549f, 0f, 0f, -20.45403f, 23.79081f, 16.56885f, 6.591243f);
			break;
	}
}

void func_138(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return;
	}
	func_284(iParam0, bParam1);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam2, iParam3, 0, -1, -1, 0);
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam2, iParam3, 0, -1, -1, 2);
}

void func_139(int iParam0)
{
	int iVar0;
	int iVar1;

	VOLUME::_0x748C5F51A18CB8F0(0);
	if (!func_100(iParam0))
	{
		return;
	}
	func_285(iParam0, 0);
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (func_124(iVar0))
		{
			if (func_286(func_30(iVar0, 1, 1)) == iParam0)
			{
				func_287(iVar0, 0);
				func_184(iVar0, 0, 350);
			}
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 17)
	{
		if (func_97(iVar1))
		{
			if (func_127(iVar1) == iParam0)
			{
				func_288(iVar1, 0);
			}
		}
		iVar1++;
	}
	VOLUME::_0x748C5F51A18CB8F0(1);
}

void func_140(int iParam0)
{
	if (!func_100(iParam0))
	{
		return;
	}
	func_141(iParam0, 0);
}

void func_141(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_100(iParam0))
	{
		return;
	}
	iVar0 = func_289();
	if (iParam1 > iVar0)
	{
		iParam1 = iVar0;
	}
	PLAYER::_0xEA6DE0CD15AECBE2(iVar0);
	if (iParam0 == func_99())
	{
		LAW::_0x093A9D1F72DF0D19(PLAYER::PLAYER_ID(), iParam1);
	}
	if (Global_1572887->f_12 == -1)
	{
		if (&Global_40.f_358[iParam0 /*12*/] != iParam1)
		{
			func_290(iParam0, iParam1);
			func_291(iParam0);
		}
		Global_40.f_358[iParam0 /*12*/] = iParam1;
		if (!func_292(iParam0, 4))
		{
			if (&Global_40.f_358[iParam0 /*12*/] >= PLAYER::GET_WANTED_LEVEL_THRESHOLD(1))
			{
				func_293(iParam0, 1);
			}
		}
		else if (&Global_40.f_358[iParam0 /*12*/] == 0)
		{
			func_293(iParam0, 0);
		}
		return;
	}
	Global_1058888->f_42266[iParam0 /*12*/] = iParam1;
}

void func_142(var uParam0, int iParam1, char* sParam2, vector3 vParam3, int iParam6, vector3 vParam7, float fParam10, char* sParam11)
{
	if (uParam0->f_1000 < 4)
	{
		(uParam0->f_868[uParam0->f_1000 /*20*/])->f_1 = iParam1;
		(uParam0->f_868[uParam0->f_1000 /*20*/])->f_4 = { func_294(sParam2) };
		(uParam0->f_868[uParam0->f_1000 /*20*/])->f_12 = { vParam3 };
		(uParam0->f_868[uParam0->f_1000 /*20*/])->f_19 = iParam6;
		(uParam0->f_868[uParam0->f_1000 /*20*/])->f_15 = { vParam7 };
		(uParam0->f_868[uParam0->f_1000 /*20*/])->f_18 = fParam10;
		if (!MISC::IS_STRING_NULL(sParam11))
		{
			(uParam0->f_868[uParam0->f_1000 /*20*/])->f_8 = { func_294(sParam11) };
		}
		uParam0->f_1000++;
	}
}

void func_143(var uParam0, int iParam1, char* sParam2, vector3 vParam3, int iParam6, vector3 vParam7, float fParam10, char* sParam11)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	uParam0->f_950 = ENTITY::GET_ENTITY_MODEL(iParam1);
	uParam0->f_950.f_1 = iParam1;
	uParam0->f_950.f_3 = { func_294(sParam2) };
	uParam0->f_950.f_11 = { vParam3 };
	uParam0->f_950.f_18 = iParam6;
	uParam0->f_950.f_14 = { vParam7 };
	uParam0->f_950.f_17 = fParam10;
	if (!MISC::IS_STRING_NULL(sParam11))
	{
		uParam0->f_950.f_7 = { func_294(sParam11) };
	}
}

void func_144(var uParam0, int iParam1, char* sParam2, vector3 vParam3, int iParam6)
{
	if (uParam0->f_998 < 4)
	{
		uParam0->f_782[uParam0->f_998 /*11*/] = iParam1;
		(uParam0->f_782[uParam0->f_998 /*11*/])->f_2 = { func_294(sParam2) };
		(uParam0->f_782[uParam0->f_998 /*11*/])->f_6 = { vParam3 };
		(uParam0->f_782[uParam0->f_998 /*11*/])->f_9 = iParam6;
		uParam0->f_998++;
	}
}

void func_145(var uParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(iLocal_17))
	{
		return;
	}
	switch (uParam0->f_970)
	{
		case 1:
		case 2:
		case 3:
			iLocal_17 = func_295(76);
			break;
		case 4:
			iLocal_17 = func_295(26);
			break;
		case 6:
			iLocal_17 = func_295(105);
			break;
	}
}

void func_146(int iParam0, int iParam1)
{
	if (func_106() != -1)
	{
		return;
	}
	if (!func_280(iParam0))
	{
		return;
	}
	Global_24886[iParam0 /*2*/] = (Global_24886[iParam0 /*2*/] || iParam1);
}

bool func_147(int iParam0, int iParam1)
{
	return ((Global_40.f_4942[iParam0 /*60*/])->f_5 && iParam1) > 0;
}

void func_148(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!bParam2)
	{
		switch (iParam1)
		{
			case 1:
			case 4096:
			case 16384:
			case 32768:
			case 65536:
			case 131072:
			case 262144:
			case 524288:
			case 1048576:
			case 2097152:
			case 134217728:
			case 1073741824:
				func_296(iParam0);
				func_297(iParam0, 0);
				break;
		}
		func_298(iParam0, iParam1);
		if (func_299(iParam1, &iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
			{
				if (func_300(Global_1360165[iParam0 /*1157*/], iVar0))
				{
					PED::_0xA2F8B3B5FEDFC100(Global_1360165[iParam0 /*1157*/], iVar0);
				}
				PED::_0x1902C4CFCC5BE57C(Global_1360165[iParam0 /*1157*/], PED::_0x30569F348D126A5A(Global_1360165[iParam0 /*1157*/]));
				PED::_0xCC8CA3E88256E58F(Global_1360165[iParam0 /*1157*/], 0, 1, 1, 1, 0);
			}
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
			case 4096:
			case 16384:
			case 32768:
			case 65536:
			case 131072:
			case 262144:
			case 524288:
			case 1048576:
			case 2097152:
			case 134217728:
			case 1073741824:
				func_296(iParam0);
				func_297(iParam0, 1);
				break;
		}
		func_301(iParam0, iParam1);
		func_302(iParam0, Global_1360165[iParam0 /*1157*/], 1);
	}
}

int func_149(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

void func_150(int iParam0)
{
	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return;
	}
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
	{
		return;
	}
	if (Global_43890)
	{
		return;
	}
	WEAPON::_0xE9BD19F8121ADE3E(Global_35, iParam0);
}

int func_151(var uParam0)
{
	uParam0->f_1004 = 0;
	if (!func_303(uParam0))
	{
		return 0;
	}
	if (!func_304(uParam0))
	{
		return 0;
	}
	if (!func_305(&(uParam0->f_950)))
	{
		return 0;
	}
	if (!func_306(uParam0))
	{
		return 0;
	}
	if (!func_307(uParam0))
	{
		return 0;
	}
	if (!func_308(uParam0))
	{
		return 0;
	}
	if (!func_309(uParam0))
	{
		return 0;
	}
	return 1;
}

void func_152(var uParam0)
{
	func_310(uParam0);
	func_311(uParam0);
	func_312(uParam0);
	func_313(uParam0);
	func_314(uParam0);
	func_315(uParam0);
	func_316(uParam0);
}

void func_153(var uParam0)
{
	struct<8> Var0;

	Var0 = { func_317(uParam0) };
	func_318(uParam0, &Var0);
}

void func_154(var uParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_973))
	{
		uParam0->f_4 = uParam0->f_973;
	}
}

void func_155(var uParam0)
{
	char* sVar0;

	sVar0 = func_319(uParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		func_318(uParam0, sVar0);
		func_320(uParam0, sVar0, 0);
	}
}

int func_156(var uParam0)
{
	if (func_321(uParam0, &(uParam0->f_984), 1, 1))
	{
		return 1;
	}
	return 0;
}

void func_157(var uParam0)
{
	switch (uParam0->f_970)
	{
		case 6:
			uParam0->f_975 = "rho_sheriff_int_explosion";
			uParam0->f_974 = INTERIOR::GET_INTERIOR_AT_COORDS(1353.237f, -1302.472f, 77.547f);
			if (ANIMSCENE::_0x3FBC3F51BF12DFBF(uParam0->f_444) > 0.33f)
			{
				if (func_216(143))
				{
					func_217(144);
					func_218(143);
					func_219(1353.237f, -1302.472f, 77.547f, "rho_sheriff_int_JBO1_02", 144, 0, 1, 0, 0);
					INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(uParam0->f_974, uParam0->f_975, 0);
				}
			}
			break;
		case 2:
			if (ANIMSCENE::_0x3FBC3F51BF12DFBF(uParam0->f_444) > 0.64f)
			{
				if (func_216(145))
				{
					func_217(146);
					func_218(145);
					func_219(-276.3671f, 802.3903f, 117.9588f, "val_jail_int_wallb", 146, 0, 1, 0, 0);
				}
			}
			break;
	}
}

int func_158(var uParam0)
{
	switch (uParam0->f_971)
	{
		case 0:
			if (ANIMSCENE::_0x25557E324489393C(uParam0->f_444) && ANIMSCENE::_0x477122B8D05E7968(uParam0->f_444, 1, 0))
			{
				if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_444, 0))
				{
					ANIMSCENE::START_ANIM_SCENE(uParam0->f_444);
					uParam0->f_971 = 1;
				}
			}
			break;
		case 1:
			if (func_322(uParam0->f_970))
			{
				func_323(uParam0);
			}
			func_324(uParam0);
			POPULATION::_0xC6DCC2A3A8825C85(1);
			if (!ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_444))
			{
				if (func_325(uParam0))
				{
					func_326(uParam0->f_444);
					uParam0->f_971 = 3;
				}
			}
			else
			{
				uParam0->f_971 = 2;
			}
			break;
		case 2:
			CAM::DO_SCREEN_FADE_OUT(0);
			if (func_327(uParam0->f_970, uParam0))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1065353216);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
				func_328(1);
				uParam0->f_971 = 3;
			}
			break;
		case 3:
			return 1;
	}
	return 0;
}

void func_159(var uParam0)
{
	func_329(uParam0);
	func_330(uParam0);
	func_331(uParam0);
	if (!func_40(uParam0->f_970))
	{
		func_80(uParam0);
		func_81(&(uParam0->f_950));
	}
	func_332(uParam0);
	func_333(uParam0);
}

void func_160()
{
	int iVar0;
	bool bVar1;
	struct<12> Var2;
	int iVar19;
	struct<11> Var20;
	int iVar37;

	iVar0 = func_334();
	bVar1 = (!func_335(&Global_1935630, 4194304) || Global_1935630->f_17 > 0);
	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		if (bVar1)
		{
			Global_1935630->f_13 = (LAW::_0x69E181772886F48B(iVar0) || LAW::_0xF0FBFB9AB15F7734(iVar0, 0, 0));
			Global_1935630->f_15 = LAW::_0x148E7AC8141C9E64(iVar0);
			Global_1935630->f_14 = LAW::_0x9945A3E2528A02E8(iVar0);
			Global_1935630->f_16 = LAW::_0xF46108C50A22B029();
			Global_1935630->f_17 = LAW::_0xDD5FD601481F648B(iVar0);
			Global_1935630->f_26 = LAW::_0x9D5C9A5A3321B128(iVar0);
			Global_1935630->f_21 = LAW::_0xDAEFDFDB2AEECE37(LAW::_GET_HUD_PLAYER_CRIME_TYPE(iVar0), 0);
			Global_1935630->f_18 = LAW::_0xAD401C63158ACBAA(iVar0);
			if (Global_1935630->f_18)
			{
				LAW::_0x9C5BD8C562565CE6(&Var2);
				Global_1935630->f_19 = Var2.f_10;
				Global_1935630->f_23 = Var2.f_11 == 6;
			}
			Global_1935630->f_20 = -1;
			iVar19 = 0;
			while (iVar19 < 24)
			{
				if (LAW::_0x532C5FDDB986EE5C(iVar0, iVar19, &Var20))
				{
					if (Var20.f_10)
					{
						iVar37 = LAW::_0xDAEFDFDB2AEECE37(Var20, 0);
						if (iVar37 > Global_1935630->f_20)
						{
							Global_1935630->f_20 = iVar37;
						}
					}
				}
				iVar19++;
			}
		}
		else
		{
			func_336();
		}
	}
	if (Global_1935630->f_40 != 0)
	{
		Global_1935630->f_41 = Global_1935630->f_40;
	}
	Global_1935630->f_22 = PLAYER::IS_PLAYER_BEING_ARRESTED(iVar0, true);
	Global_1935630->f_12 = ENTITY::IS_ENTITY_DEAD(Global_35);
	if (!Global_1935630->f_12)
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &(Global_1935630->f_44), false, 0, false);
		Global_1935630->f_40 = PED::GET_MOUNT(Global_35);
		if (Global_1572887->f_12 == -1 && Global_1935630 & 262144 != 0)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 174, true);
		}
		if (Global_1572887->f_12 != -1)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 154, true);
		}
		else if (Global_1935630 & 65536 != 0)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 154, true);
		}
		if (Global_1572887->f_12 == -1)
		{
			if (!func_131(9))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 135, true);
			}
			if (!func_131(14))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 144, true);
			}
			if (!func_131(36))
			{
				HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(9);
			}
			if (CAM::_0x139EFB0A71DD9011())
			{
				PAD::DISABLE_CONTROL_ACTION(0, -1404316431, false);
				PAD::DISABLE_CONTROL_ACTION(0, 1287709438, false);
				PAD::DISABLE_CONTROL_ACTION(0, 1934388793, false);
				PAD::DISABLE_CONTROL_ACTION(0, -209515122, false);
				PAD::DISABLE_CONTROL_ACTION(0, -824104112, false);
				PAD::DISABLE_CONTROL_ACTION(0, 516589524, false);
				PAD::DISABLE_CONTROL_ACTION(0, 1390807691, false);
				PAD::DISABLE_CONTROL_ACTION(0, 1663574939, false);
				HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
			}
			else if ((CAM::IS_SCREEN_FADED_OUT() && func_337()) && !func_338(0, 0, 1))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			if (PAD::IS_CONTROL_PRESSED(0, 255439828))
			{
				PAD::DISABLE_CONTROL_ACTION(0, 130948705, false);
				PAD::DISABLE_CONTROL_ACTION(0, 42190210, false);
				PAD::DISABLE_CONTROL_ACTION(0, 1623727326, false);
				PAD::DISABLE_CONTROL_ACTION(0, -922478227, false);
				PAD::DISABLE_CONTROL_ACTION(0, 1751579194, false);
				PAD::DISABLE_CONTROL_ACTION(0, -2023713047, false);
			}
			if (WEAPON::_0x6AD66548840472E5(Global_1935630->f_44) && CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
			{
				PAD::DISABLE_CONTROL_ACTION(0, 255439828, false);
			}
		}
	}
	else
	{
		if (func_106() == -1 && CAM::_0x139EFB0A71DD9011())
		{
			HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
		}
		Global_1935630->f_44 = 0;
		Global_1935630->f_40 = 0;
	}
}

void func_161(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = (50 * iParam0);
	iVar1 = (iVar0 + ENTITY::GET_ENTITY_HEALTH(Global_35));
	if (iParam1 && iVar0 < 0)
	{
		ENTITY::_0x835F131E7DC8F97A(Global_35, BUILTIN::TO_FLOAT(iVar0), 0, 0);
	}
	else if (iParam0 <= 0 || iVar1 > ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, 0))
	{
		ENTITY::_SET_ENTITY_HEALTH(Global_35, ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, 0), 0);
	}
	else
	{
		ENTITY::_SET_ENTITY_HEALTH(Global_35, iVar1, 0);
	}
}

void func_162()
{
	if (func_106() != -1)
	{
		return;
	}
	func_109();
}

void func_163(vector3 vParam0)
{
	Global_40.f_9.f_7 = { vParam0 };
}

void func_164(int iParam0)
{
	Global_1572864->f_21 = iParam0;
	Global_1310720->f_4 = MISC::GET_GAME_TIMER();
}

void func_165(int iParam0)
{
	Global_1310720->f_9 = iParam0;
}

void func_166(int iParam0)
{
	Global_1310720->f_10 = iParam0;
}

int func_167(bool bParam0)
{
	if (!bParam0 && func_105(373691918))
	{
		LAW::_0xE9AC8466ABE484BB(0, 0);
		LAW::_0xC61EDEBF16CD9668(752193127, true, 0);
		return 0;
	}
	LAW::_0xE9AC8466ABE484BB(bParam0, 0);
	return 1;
}

void func_168()
{
	if (!func_339())
	{
		if (func_112())
		{
			func_340(1);
			func_341();
			WEAPON::_0x4F806A6CFED89468(Global_35, 1);
		}
	}
}

void func_169(var uParam0)
{
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	*uParam0 = 0;
}

void func_170(var uParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_973))
	{
		VOLUME::_0x43F867EF5C463A53(uParam0->f_973);
	}
}

void func_171(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_342(iParam0, 0, 0);
	if (func_343(iParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, iParam2, iParam6);
		if (fParam5 > 0f)
		{
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_344(iParam0, iParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_345(iParam0, 1);
			}
			else
			{
				func_346(iParam0, 1);
			}
		}
		else
		{
			func_347(iParam0, 1);
		}
		if (bParam7)
		{
			OBJECT::_0x276AAF0F1C7F2494(iParam0, 1);
		}
	}
	else if (func_348())
	{
	}
	else if (NETWORK::NETWORK_IS_IN_SESSION())
	{
	}
}

float func_172(var uParam0)
{
	switch (*uParam0)
	{
		case 1:
		case 2:
			return 200f;
		case 4:
			return 200f;
		case 6:
			return 200f;
	}
	return 200f;
}

struct<4> func_173(var uParam0, int iParam1)
{
	struct<4> Var0;

	switch (*uParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					Var0 = { -272.4783f, 809.284f, 118.3711f };
					Var0.f_3 = 103.992f;
					break;
				case 1:
					Var0 = { -274.1379f, 808.532f, 118.3723f };
					Var0.f_3 = 87.475f;
					break;
				case 2:
					Var0 = { -309.8212f, 780.2781f, 117.7613f };
					Var0.f_3 = 7.6015f;
					break;
				case 3:
					Var0 = { -320.2737f, 799.5449f, 116.8817f };
					Var0.f_3 = 279.7465f;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					Var0 = { -276.9078f, 809.5782f, 118.3781f };
					Var0.f_3 = 287.1772f;
					break;
				case 1:
					Var0 = { -309.8212f, 780.2781f, 117.7613f };
					Var0.f_3 = 7.6015f;
					break;
				case 2:
					Var0 = { -292.2865f, 747.412f, 117.2355f };
					Var0.f_3 = 156.9073f;
					break;
				case 3:
					Var0 = { -313.3065f, 726.3862f, 119.6276f };
					Var0.f_3 = 34.53f;
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					Var0 = { -1812.424f, -352.8654f, 160.4154f };
					Var0.f_3 = 56.8545f;
					break;
				case 1:
					Var0 = { -1815.833f, -353.5223f, 160.4529f };
					Var0.f_3 = 316.3524f;
					break;
				case 2:
					Var0 = { -1805.574f, -426.7131f, 157.7882f };
					Var0.f_3 = 347.183f;
					break;
				case 3:
					Var0 = { -1775.714f, -438.922f, 153.9937f };
					Var0.f_3 = 217.3517f;
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					Var0 = { 1358.375f, -1303.417f, 76.7606f };
					Var0.f_3 = 196.0932f;
					break;
				case 1:
					Var0 = { 1330.127f, -1367.839f, 79.504f };
					Var0.f_3 = 72.4056f;
					break;
				case 2:
					Var0 = { 1362.746f, -1268.791f, 76.9478f };
					Var0.f_3 = 162.3188f;
					break;
				case 3:
					Var0 = { 1238.99f, -1309.599f, 75.9094f };
					Var0.f_3 = 113.614f;
					break;
			}
			break;
		default:
			Var0 = { 0f, 0f, 0f };
			Var0.f_3 = 0f;
			break;
	}
	return Var0;
}

int func_174(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_175(int iParam0, struct<4> Param1, int iParam5, int iParam6)
{
	func_349(iParam0, Param1, Param1.f_3, iParam5, iParam6);
}

int func_176(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_1000)
	{
		if ((uParam0->f_868[iVar0 /*20*/])->f_1 == iParam1)
		{
			return (uParam0->f_868[iVar0 /*20*/])->f_2;
		}
		iVar0++;
	}
	return 0;
}

void func_177(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_350(uParam0, iParam1, sParam2))
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1)))
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam1, bParam3);
			}
		}
	}
}

void func_178(int iParam0)
{
	if (PED::DOES_GROUP_EXIST(iLocal_14) && ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		func_351(&iParam0, &iLocal_14, 0, 1, 1, 1, 0);
	}
}

int func_179(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_1000)
	{
		if ((uParam0->f_868[iVar0 /*20*/])->f_1 == iParam1)
		{
			return (uParam0->f_868[iVar0 /*20*/])->f_3;
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_180(var uParam0)
{
	vector3 vVar0[24];

	switch (uParam0->f_970)
	{
		case 1:
			StringCopy(&cVar0, "JBO3_COMEON", 24);
			break;
		case 2:
			StringCopy(&cVar0, "JBO7_COMEON", 24);
			break;
		case 4:
			StringCopy(&cVar0, "JBO5_COMEON", 24);
			break;
		case 6:
			StringCopy(&cVar0, "JBO1_COMEON", 24);
			break;
		default:
			StringCopy(&cVar0, "", 24);
			break;
	}
	return cVar0;
}

char* func_181(var uParam0, var uParam1, var uParam2)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

bool func_182(var uParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!AUDIO::_0xD89504D9D7D5057D(&vParam1))
	{
		bVar0 = AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION(&vParam1);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_352(vParam1, uParam0);
		if (bParam6)
		{
			AUDIO::PRELOAD_SCRIPT_CONVERSATION(&vParam1, true, true, bParam7);
		}
		else
		{
			AUDIO::START_SCRIPT_CONVERSATION(&vParam1, true, true, bParam7);
		}
		if (bParam4)
		{
			AUDIO::_0x40CA665AB9D8D505(&vParam1, iParam5);
		}
	}
	return bVar0;
}

void func_183()
{
	POPULATION::_0xF45E46DEECF7DF6E(6144, 0, 0, -1, -1);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::_0xAB0D553FE20A6E25(0.25f);
	VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.25f);
}

void func_184(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if (!func_124(iParam0))
	{
		return;
	}
	if (func_125(iParam0) && !bParam1)
	{
		return;
	}
	if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1888801)[iParam0 /*35*/])->f_5))
	{
		iVar0 = ((*Global_1888801)[iParam0 /*35*/])->f_5;
	}
	else
	{
		iVar0 = func_295(iParam0);
	}
	bVar1 = func_271(iParam0, 33554432);
	if (bParam1)
	{
		iVar2 = func_353(iParam0);
		if (iParam2 > iVar2 || !func_355(func_354(iParam0)))
		{
			func_356(iParam0, func_98());
			func_357(iParam0, iParam2);
		}
		if (!bVar1)
		{
			func_358(iParam0, 33554432);
			if (VOLUME::_0x92A78D0BEDB332A3(iVar0))
			{
				if (iParam0 == 38)
				{
					iVar3 = 0;
				}
				else
				{
					iVar3 = 1;
				}
				PATHFIND::_0xF2A2177AC848B3A8(iVar0, 0, iVar3);
			}
		}
	}
	else if (bVar1)
	{
		func_359(iParam0, 33554432);
		func_356(iParam0, -15);
		if (VOLUME::_0x92A78D0BEDB332A3(iVar0))
		{
			PATHFIND::_0xF2A2177AC848B3A8(iVar0, 1, 1);
		}
	}
	func_360(iParam0);
}

int func_185(var uParam0)
{
	switch (uParam0->f_970)
	{
		case 4:
			if (func_361(Global_35, func_176(uParam0, 1)) < 10f && func_361(Global_35, func_176(uParam0, 7)) < 10f)
			{
				return 1;
			}
			break;
		case 2:
			if (func_361(Global_35, func_176(uParam0, 0)) < 10f && func_361(Global_35, func_176(uParam0, 7)) < 10f)
			{
				return 1;
			}
			break;
		case 6:
			if (func_361(Global_35, func_176(uParam0, 0)) < 10f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

Vector3 func_186(var uParam0)
{
	vector3 vVar0[24];

	switch (uParam0->f_970)
	{
		case 1:
			StringCopy(&cVar0, "JBO3_LOSTTHEM", 24);
			break;
		case 2:
			StringCopy(&cVar0, "JBO7_LOSTTHEM", 24);
			break;
		case 4:
			StringCopy(&cVar0, "JBO5_LOSTTHEM", 24);
			break;
		case 6:
			StringCopy(&cVar0, "JBO1_LOSTTHEM", 24);
			break;
		default:
			StringCopy(&cVar0, "", 24);
			break;
	}
	return cVar0;
}

Vector3 func_187(var uParam0)
{
	vector3 vVar0[24];

	switch (uParam0->f_970)
	{
		case 7:
			StringCopy(&cVar0, "JBO4_HBANT", 24);
			break;
		case 10:
			StringCopy(&cVar0, "JBO8_HBANT", 24);
			break;
		case 6:
			StringCopy(&cVar0, "JBO1_BANT", 24);
			break;
		case 1:
			StringCopy(&cVar0, "JBO3_BANT", 24);
			break;
		case 2:
			StringCopy(&cVar0, "JBO7_BANT", 24);
			break;
		case 4:
			StringCopy(&cVar0, "JBO5_SPLIT", 24);
			break;
		default:
			StringCopy(&cVar0, "", 24);
			break;
	}
	return cVar0;
}

int func_188(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 4:
			return 5;
		case 79:
			return 6;
		case 43:
			return 0;
		case 98:
			return 2;
		case 58:
			return 4;
		case 71:
			return 1;
		case 9:
			return 3;
		case 22:
			return 7;
		case 37:
			return 8;
		default:
			break;
	}
	return -1;
}

Vector3 func_189(int iParam0, bool bParam1)
{
	vector3 vVar0;
	var uVar3;

	vVar0 = { 0f, 0f, 0f };
	if (!func_124(iParam0))
	{
		return vVar0;
	}
	if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1888801)[iParam0 /*35*/])->f_3))
	{
		vVar0 = { VOLUME::_0xF70F00013A62F866(((*Global_1888801)[iParam0 /*35*/])->f_3) };
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

int func_190(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (!PED::IS_PED_ON_MOUNT(iParam0) && !ENTITY::DOES_ENTITY_EXIST(PED::_0xB676EFDA03DADA52(iParam1, 0)))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(iParam1, bParam2);
				if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 1868526510, 1) != 1)
				{
					TASK::TASK_MOUNT_ANIMAL(iParam0, iParam1, iParam4, -1, fParam3, 1, 0, 0);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_191(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_1000)
	{
		if (ENTITY::DOES_ENTITY_EXIST((uParam0->f_868[iVar0 /*20*/])->f_2))
		{
			if (!PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT((uParam0->f_868[iVar0 /*20*/])->f_2, true))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_192(var uParam0, int iParam1)
{
	func_362(uParam0, iParam1);
	uParam0->f_26 = 0;
	return 0;
}

void func_193(var uParam0, int iParam1)
{
	uParam0->f_26 = iParam1;
}

int func_194(var uParam0)
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (ANIMSCENE::_0x95531A4A20CCE7BC(uParam0->f_25, 0))
		{
			if (!ANIMSCENE::_0x59606519FF9D3EC2(uParam0->f_25, 1) && !ANIMSCENE::_0x477122B8D05E7968(uParam0->f_25, 1, 0))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_25);
			}
			if (ANIMSCENE::_0x477122B8D05E7968(uParam0->f_25, 1, 0))
			{
				CAM::_0xE296208C273BD7F0(0, 0, 0, 17, 1, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_25, "ARTHUR", Global_35, 0);
				CAM::DO_SCREEN_FADE_IN(240);
				ANIMSCENE::START_ANIM_SCENE(uParam0->f_25);
				return 1;
			}
		}
	}
	return 0;
}

int func_195(var uParam0)
{
	CAM::_0xE296208C273BD7F0(0, 0, 0, 17, 1, 0);
	if (ANIMSCENE::_0x3FBC3F51BF12DFBF(uParam0->f_25) > 0.85f)
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(500);
			return 1;
		}
	}
	return 0;
}

int func_196(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

void func_197(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_363(iParam0);
	if (bParam3)
	{
		func_364(iParam0, sParam1, iParam2);
	}
}

var func_198()
{
	return &Global_1899515;
}

bool func_199(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_201(iParam0, &iVar0, &iVar1);
	iVar2 = Global_1905944[iVar0];
	return MISC::IS_BIT_SET(iVar2, iVar1);
}

void func_200(int iParam0)
{
	int iVar0;
	int iVar1;

	func_201(iParam0, &iVar0, &iVar1);
	func_365(iVar0, iVar1);
}

void func_201(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

int func_202(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return 0;
	}
	if (func_366(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_367(iParam0))
	{
		return 0;
	}
	if (func_368(iParam0))
	{
		return 0;
	}
	if ((Global_1898164->f_163 && !func_369(iParam0, 1)) || func_260(32768))
	{
		if (!func_369(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return 0;
		}
	}
	if (!func_370())
	{
		return 0;
	}
	return 1;
}

void func_203(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

int func_204(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return 0;
	}
	return 1;
}

void func_205(var uParam0)
{
	if (func_371(uParam0->f_1))
	{
		func_372(uParam0->f_1, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
	}
}

void func_206(var uParam0)
{
	if (func_373(uParam0->f_1))
	{
		func_374(uParam0->f_3, uParam0->f_1, 1, 0, 0);
	}
}

void func_207(int iParam0, bool bParam1)
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
	if (!func_375(iParam0))
	{
		return;
	}
	iVar0 = func_376(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_377(iVar0);
	func_378(iVar0);
	iVar1 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	iVar2 = func_379(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_380(iVar0))
		{
			return;
		}
	}
	func_381(iVar0);
	PED::SET_PED_KEEP_TASK(iParam0, true);
	if (bParam1 && func_106() == -1)
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, true);
		}
	}
}

void func_208(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!func_119(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_120(iParam0) && !func_121(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_251(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_120(iParam0))
	{
		iParam2 = -1;
	}
	if (func_249(iParam0) == 3 || (func_249(iParam0) == 1 && STATS::_0x01F4D242765C6B24(func_251(iParam0))))
	{
		func_382(func_252(iParam0), func_251(iParam0), iParam2);
		if ((!func_119(Global_1572864->f_8) && !func_338(0, 1, 0)) && !func_335(&Global_1935630, 32768))
		{
			iVar0 = func_265(iParam0);
			if (iVar0 != -1)
			{
				func_383(0);
			}
			else if (func_252(iParam0) == 8)
			{
				iVar0 = func_266();
				if (iVar0 != -1)
				{
					func_383(0);
				}
			}
		}
	}
	func_255(iParam0, 0);
	if (func_258(0) == iParam0)
	{
		func_5(1);
		func_15(0);
		func_269(1);
	}
	func_270(iParam0, 1);
	func_384(iParam0);
}

bool func_209(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_210(int iParam0)
{
	Global_1327479->f_3 = iParam0;
}

void func_211(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = MISC::GET_GAME_TIMER();
	func_385(iParam0, iParam1, bParam2);
}

int func_212(int iParam0)
{
	if (!func_280(iParam0))
	{
		return 0;
	}
	if (!func_282(func_281(iParam0)))
	{
		return 1;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(func_283(iParam0)))
	{
		return 0;
	}
	_NAMESPACE48::_0x4F81EAD1DE8FA19B(func_283(iParam0));
	return 1;
}

void func_213(int iParam0, int iParam1)
{
	if (func_106() != -1)
	{
		return;
	}
	if (!func_280(iParam0))
	{
		return;
	}
	Global_24886[iParam0 /*2*/] = (&Global_24886[iParam0 /*2*/] - (Global_24886[iParam0 /*2*/] && iParam1));
}

void func_214(int iParam0)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return;
	}
	PED::CLEAR_PED_NON_CREATION_AREA();
	POPULATION::_0xA1CFB35069D23C23(iParam0);
	POPULATION::_0x74C2B3DC0B294102(iParam0);
}

void func_215(int iParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		VOLUME::_0x43F867EF5C463A53(iParam0);
	}
}

bool func_216(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_1934765->f_30[iVar1]), iVar2);
}

void func_217(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::SET_BIT(Global_1934765->f_21[iVar1], iVar2);
}

void func_218(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::CLEAR_BIT(Global_1934765->f_21[iVar1], iVar2);
}

void func_219(vector3 vParam0, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	bool bVar0;

	bVar0 = func_386(iParam4);
	if (!INTERIOR::IS_VALID_INTERIOR(iParam8))
	{
		if (iParam5 != 0)
		{
			iParam8 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPEHASH(vParam0, iParam5);
		}
		else
		{
			iParam8 = INTERIOR::GET_INTERIOR_AT_COORDS(vParam0);
		}
	}
	if (INTERIOR::IS_VALID_INTERIOR(iParam8))
	{
		if (func_216(iParam4) != bVar0 || INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iParam8, sParam3) != bVar0)
		{
			if (func_387(iParam8, iParam6, bParam7))
			{
				if (bVar0)
				{
					INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iParam8, sParam3, 0);
					func_388(iParam4);
					if (bParam7)
					{
						INTERIOR::_0x2533F2AB0EB9C6F9(iParam8, 1);
						INTERIOR::_0xFE2B3D5500B1B2E4(iParam8, 1);
					}
				}
				else
				{
					INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iParam8, sParam3, 1);
					func_389(iParam4);
					if (bParam7)
					{
						INTERIOR::_0x2533F2AB0EB9C6F9(iParam8, 0);
						INTERIOR::_0xFE2B3D5500B1B2E4(iParam8, 0);
					}
				}
			}
		}
	}
}

void func_220(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_221()
{
	return 1;
	if (Global_1572887->f_12 == 0)
	{
		return 1;
	}
	return Global_40.f_1;
}

int func_222(int iParam0)
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

int func_223(int iParam0)
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

void func_224(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
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

	iVar0 = func_390();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_391(iParam0);
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
	if (func_131(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_392())
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
	Global_40.f_11095.f_35 = func_393(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_390();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || iParam7)
	{
		iVar6 = func_394(iVar1);
		func_396(func_395(), 0, 4000);
		func_397(Global_40.f_11095.f_35);
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
		func_398(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_400(func_399(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(iParam5))
			{
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_223(14))
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
					sParam4 = func_401(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_402(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_402(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_400(func_399(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_223(4))
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
					sParam4 = func_401(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_402(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_402(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_399(-1990689970) };
	STATS::STAT_ID_SET_INT(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_0xE6B763C7F4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_403(10, 1);
	}
}

void func_225(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0 /*6*/] = iParam1;
	(Global_1347477->f_155[iParam0 /*6*/])->f_2 = iParam2;
	(Global_1347477->f_155[iParam0 /*6*/])->f_3 = iParam3;
	(Global_1347477->f_155[iParam0 /*6*/])->f_4 = iParam4;
	(Global_1347477->f_155[iParam0 /*6*/])->f_5 = bParam5;
	(Global_1347477->f_155[iParam0 /*6*/])->f_1 = MISC::GET_GAME_TIMER() + 500;
}

struct<4> func_226(int iParam0)
{
	struct<4> Var0;
	bool bVar4;

	Var0 = { 0f, 0f, 0f };
	Var0.f_3 = 0f;
	if (!func_124(iParam0))
	{
		return Var0;
	}
	if (func_125(iParam0))
	{
		bVar4 = true;
	}
	switch (iParam0)
	{
		case 78:
			if (!bVar4)
			{
				Var0 = { 2918.7f, 1321.6f, 44.3f };
				Var0.f_3 = 69.27f;
			}
			else
			{
				Var0 = { 2821.36f, 1121.52f, 48.54f };
				Var0.f_3 = 79.23f;
			}
			func_404(&Var0, 50, 10, 0);
			return Var0;
		case 105:
			if (!bVar4)
			{
				Var0 = { 1344.9f, -1307.3f, 76.6f };
				Var0.f_3 = 343.68f;
			}
			else
			{
				Var0 = { 1155.33f, -1155.41f, 71.29f };
				Var0.f_3 = 156.78f;
			}
			func_404(&Var0, 50, 10, 0);
			return Var0;
		case 26:
			if (!bVar4)
			{
				Var0 = { -1805.89f, -344.45f, 164.65f };
				Var0.f_3 = 99f;
			}
			else
			{
				Var0 = { -1706.68f, -450.12f, 150f };
				Var0.f_3 = 295.67f;
			}
			func_404(&Var0, 50, 10, 0);
			return Var0;
		case 38:
			if (!bVar4)
			{
				Var0 = { -751.16f, -1267.38f, 43.32f };
				Var0.f_3 = 115.96f;
			}
			else
			{
				Var0 = { -1065.66f, -1211.78f, 63.78f };
				Var0.f_3 = 178.78f;
			}
			func_404(&Var0, 50, 10, 0);
			return Var0;
		case 76:
			if (!bVar4)
			{
				Var0 = { -279.45f, 789.98f, 118.63f };
				Var0.f_3 = 165.4f;
			}
			else
			{
				Var0 = { -108f, 586.45f, 114.08f };
				Var0.f_3 = 164.78f;
			}
			func_404(&Var0, 50, 10, 0);
			return Var0;
		case 5:
			if (!bVar4)
			{
				Var0 = { 2525.45f, -1310.37f, 49.07f };
				Var0.f_3 = 266.56f;
			}
			else
			{
				Var0 = { 2147.36f, -1336.09f, 42.96f };
				Var0.f_3 = 352f;
			}
			func_404(&Var0, 50, 10, 0);
			return Var0;
		case 115:
			Var0 = { -5525.004f, -2923.18f, -2.0688f };
			Var0.f_3 = 114.01f;
			func_404(&Var0, 50, 10, 0);
			return Var0;
	}
	return Var0;
}

struct<4> func_227(int iParam0)
{
	struct<4> Var0;
	int iVar4;

	Var0 = { 0f, 0f, 0f };
	Var0.f_3 = 0f;
	if (!func_124(iParam0))
	{
		return Var0;
	}
	iVar4 = func_405();
	func_406(iVar4, &Var0, &(Var0.f_3));
	return Var0;
}

void func_228(int iParam0, int iParam1, bool bParam2)
{
	func_407(iParam0, iParam1, bParam2, 1);
}

void func_229(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

int func_230(var uParam0)
{
	struct<4> Var0;
	struct<4> Var4;
	int iVar8;
	int iVar9;

	Var0 = { func_226(uParam0->f_60) };
	Var4 = { func_227(uParam0->f_60) };
	iVar8 = 0;
	iVar9 = 0;
	if (func_408(0))
	{
		Local_1194.f_10 = 0;
		Local_1194 = 1;
		Local_1194.f_5 = 1;
		Local_1194.f_1 = 1;
		Local_1194.f_6 = { Var0 };
		Local_1194.f_9 = Var0.f_3;
		iLocal_43 = func_409(&iLocal_1193, &Local_1194);
		if (iLocal_1193 == 2)
		{
			iVar8 = 1;
		}
	}
	else
	{
		iVar8 = 1;
	}
	if (func_408(1))
	{
		Local_1206.f_10 = 1;
		Local_1206 = 1;
		Local_1206.f_1 = 1;
		Local_1206.f_5 = 1;
		Local_1206.f_6 = { Var4 };
		Local_1206.f_9 = Var4.f_3;
		iLocal_44 = func_409(&iLocal_1205, &Local_1206);
		if (iLocal_1205 == 2)
		{
			iVar9 = 1;
		}
	}
	else
	{
		iVar9 = 1;
	}
	if (iVar8 && iVar9)
	{
		return 1;
	}
	return 0;
}

int func_231(int iParam0, vector3 vParam1, float fParam4, int iParam5)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	func_12(vParam1, fParam4, 0);
	TASK::CLEAR_PED_TASKS(iParam0, 1, 0);
	iVar0 = -1805387726;
	iVar1 = TASK::_0xF533D68FF970D190(vParam1, iVar0, fParam4, 1, 0);
	if (TASK::_0x841475AC96E794D1(iVar1))
	{
		TASK::_TASK_USE_SCENARIO_POINT(iParam0, iVar1, 0, -1, 1, iParam5, iVar0, 0, -1082130432, 0);
	}
	else
	{
		TASK::TASK_STAND_STILL(iParam0, -1);
	}
	return 1;
}

int func_232(var uParam0)
{
	vector3 vVar0;

	switch (iLocal_1190)
	{
		case 0:
			switch (uParam0->f_60)
			{
				case 76:
					vVar0 = { -275.5043f, 805f, 118.3801f };
					break;
				case 78:
					vVar0 = { 2910.3f, 1310.8f, 44.4f };
					break;
				case 105:
					vVar0 = { 1359.6f, -1304.5f, 77.3f };
					break;
				case 38:
					vVar0 = { -758.5f, -1269.2f, 43.8f };
					break;
				case 5:
					vVar0 = { 2514.3f, -1308.8f, 48.7f };
					break;
				case 26:
					vVar0 = { -1808.2f, -350.1f, 164.4f };
					break;
				case 115:
					vVar0 = { -5528.724f, -2929.566f, -1.3609f };
					break;
			}
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, 1, 1);
			if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
			{
				PLAYER::START_PLAYER_TELEPORT(PLAYER::PLAYER_ID(), vVar0, uParam0->f_33, 0, 1, 0, 0);
			}
			else
			{
				uParam0->f_41 = MISC::GET_GAME_TIMER();
				func_410(&iLocal_1190, 1);
			}
			break;
		case 1:
			if (!PLAYER::_HAS_PLAYER_TELEPORT_FINISHED(PLAYER::PLAYER_ID()))
			{
				if (uParam0->f_41 + 6000 < MISC::GET_GAME_TIMER())
				{
					PLAYER::STOP_PLAYER_TELEPORT();
				}
			}
			else
			{
				uParam0->f_41 = MISC::GET_GAME_TIMER();
				func_410(&iLocal_1190, 2);
			}
			break;
		case 2:
			func_411(1, 0);
			func_412();
			switch (func_413(func_62()))
			{
				case 1:
				case 2:
				case 3:
				case 4:
				case 7:
				case 8:
					if (!func_414(func_62()) && uParam0->f_41 + 6000 > MISC::GET_GAME_TIMER())
					{
					}
					else
					{
						STREAMING::SET_FOCUS_POS_AND_VEL(uParam0->f_27, 0f, 0f, 0f);
						func_410(&iLocal_1190, 3);
					}
					break;
			}
			break;
		case 3:
			if (!STREAMING::_0xCF45DF50C7775F2A())
			{
				STREAMING::_0x387AD749E3B69B70(uParam0->f_27, BUILTIN::COS((uParam0->f_33 + 90f)), BUILTIN::SIN((uParam0->f_33 + 90f)), 0f, 500f, 4);
				uParam0->f_41 = MISC::GET_GAME_TIMER();
			}
			else if (!STREAMING::_0x0909F71B5C070797())
			{
				if (uParam0->f_41 + 6000 < MISC::GET_GAME_TIMER())
				{
					func_410(&iLocal_1190, 4);
				}
			}
			else
			{
				func_410(&iLocal_1190, 4);
			}
			break;
		case 4:
			if (STREAMING::_0xCF45DF50C7775F2A())
			{
				STREAMING::CLEAR_FOCUS();
				STREAMING::_0x5A8B01199C3E79C3();
			}
			return 1;
	}
	return 0;
}

int func_233(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;

	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		CAM::DO_SCREEN_FADE_IN(240);
		return 1;
	}
	else
	{
		switch (uParam0->f_60)
		{
			case 76:
				vVar0 = { -260.7436f, 793.9495f, 121.5746f };
				vVar3 = { -2.9074f, 0f, 80.7498f };
				fVar6 = 37.7527f;
				break;
			case 105:
				vVar0 = { 1365.147f, -1320.555f, 79.1558f };
				vVar3 = { -3.2928f, 0f, 44.6132f };
				fVar6 = 37.7527f;
				break;
			case 78:
				vVar0 = { 2911.884f, 1297.416f, 46.0857f };
				vVar3 = { -0.2822f, 0f, -12.0966f };
				fVar6 = 37.7527f;
				break;
			case 38:
				vVar0 = { -745.5821f, -1255.027f, 46.204f };
				vVar3 = { -3.8931f, 0f, 158.8413f };
				fVar6 = 37.7527f;
				break;
			case 26:
				vVar0 = { -1794.439f, -342.4006f, 166.2039f };
				vVar3 = { -2.2206f, 0f, 146.2695f };
				fVar6 = 37.7527f;
				break;
			case 5:
				vVar0 = { 2526.214f, -1321.603f, 51.8709f };
				vVar3 = { -1.1109f, 0f, 21.3832f };
				fVar6 = 37.7527f;
				break;
			case 115:
				vVar0 = { -5530.495f, -2941.743f, 0.393f };
				vVar3 = { -6.1555f, 0f, -32.786f };
				fVar6 = 51.282f;
				break;
		}
		*uParam0 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, vVar0, vVar3, fVar6, true, 2);
	}
	return 0;
}

int func_234(var uParam0)
{
	vector3 vVar0;

	if (!func_415(&(uParam0->f_52)))
	{
		func_416(&(uParam0->f_52), 0);
	}
	switch (uParam0->f_60)
	{
		case 76:
			vVar0 = { -274.6761f, 797.9018f, 118.9569f };
			break;
		case 105:
			vVar0 = { 1357.729f, -1311.525f, 76.9169f };
			break;
		case 78:
			vVar0 = { 2914.548f, 1309.378f, 44.3854f };
			break;
		case 38:
			vVar0 = { -752.4509f, -1269.742f, 43.3936f };
			break;
		case 26:
			vVar0 = { -1803.195f, -352.7251f, 164.1432f };
			break;
		case 5:
			vVar0 = { 2519.256f, -1308.59f, 48.9806f };
			break;
		case 115:
			vVar0 = { -5526.707f, -2933.721f, -1.9662f };
			break;
	}
	if (!uParam0->f_57)
	{
		if (TASK::IS_PED_STILL(Global_35))
		{
			uParam0->f_57 = 1;
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, vVar0, 1f, 20000, 0.25f, false, 40000f);
		}
	}
	if (func_417(Global_36, vVar0, 1f, 0) || func_418(&(uParam0->f_52)) >= 10f)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
		func_419(uParam0);
		return 1;
	}
	return 0;
}

int func_235(int iParam0, int iParam1)
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
	if (func_420(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_420(iVar0, 2))
	{
		if (PED::_0x3AA24CCC0D451379(iParam0))
		{
			return 0;
		}
	}
	if (func_420(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_420(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_420(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_420(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return 0;
		}
	}
	if (func_420(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_420(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_236(int iParam0, int iParam1)
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

int func_237(int iParam0)
{
	int iVar0;

	iVar0 = func_422(func_421(iParam0), 1);
	if (iVar0 != 39)
	{
		return (Global_1946804->f_1497.f_1[iVar0 /*3*/])->f_1;
	}
	return 0;
}

int func_238(int iParam0)
{
	if (func_239(81053684, iParam0))
	{
		return 1;
	}
	if (func_239(-525676072, iParam0))
	{
		return 1;
	}
	return 0;
}

int func_239(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_422(func_421(iParam0), 1);
	if (iVar1 >= 39)
	{
		return 0;
	}
	if (&Global_1946804->f_1497.f_1[iVar1 /*3*/] != 0 && &Global_1946804->f_1497.f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1 /*3*/];
		if (func_423(iVar0) == iParam0)
		{
			*uParam1 = iVar0;
			return 1;
		}
	}
	*uParam1 = 0;
	return 0;
}

bool func_240()
{
	return Global_1946804->f_2792;
}

int func_241(int iParam0)
{
	if (func_424())
	{
		return 0;
	}
	if (!func_425(iParam0, 0))
	{
		return 0;
	}
	if (!func_426(iParam0, 1, 0))
	{
		HUD::_0xBFFF81E12A745A5F();
		return 0;
	}
	return 1;
}

int func_242(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;

	bVar3 = func_427(iParam0);
	if (func_428(iParam0, -1303648999))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_113(&iVar2))
		{
			if (bVar1)
			{
				iVar0 = func_429();
			}
			else
			{
				iVar0 = func_430();
			}
		}
		else if (func_420(iParam1, 1))
		{
			iVar0 = 0;
		}
		else if (bVar1)
		{
			iVar0 = func_431();
		}
		else
		{
			iVar0 = func_432();
		}
	}
	else if (func_238(&iVar2))
	{
		if (func_428(iVar2, -1303648999))
		{
			iVar0 = func_429();
		}
		else
		{
			iVar0 = func_430();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_431();
	}
	else
	{
		iVar0 = func_432();
	}
	if (iVar0 != 0)
	{
		Global_1946804->f_2791 = MISC::GET_GAME_TIMER();
		TASK::_TASK_ITEM_INTERACTION(Global_35, iParam0, iVar0, 1, iParam1, -1082130432);
		return 1;
	}
	return 0;
}

int func_243(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (Global_1946804->f_2535.f_1 >= 5)
	{
		return 0;
	}
	if (!func_433(iParam0))
	{
		return 0;
	}
	if (!bParam3)
	{
		return 1;
	}
	iVar0 = func_434(iParam0);
	return func_435(iParam1, iVar0, bParam2, 1);
}

int func_244()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

var func_245(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || BUILTIN::SHIFT_LEFT(iParam0 & 1023, 5)) || BUILTIN::SHIFT_LEFT(iParam1 & 16383, 15));
}

int func_246(int iParam0)
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

int func_247(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	int iVar1;

	if (!func_436(iParam2))
	{
		return -1;
	}
	if (iParam0 < 0 || iParam0 > 511)
	{
		return -1;
	}
	if (iParam1 < 0 || iParam1 > 255)
	{
		return -1;
	}
	if (iParam3 < 0 || iParam3 > func_244())
	{
		return -1;
	}
	uVar0 = func_245(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_437(iVar1, 0);
	func_438(iVar1, 0);
	func_439(iVar1, 0);
	func_440(iVar1, 0);
	func_441(iVar1, uVar0);
	if (iParam4 != 0)
	{
		func_442(iVar1, iParam4);
	}
	return iVar1;
}

int func_248(int iParam0)
{
	if (!func_119(iParam0))
	{
		return -1;
	}
	return func_249(iParam0);
}

int func_249(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_443(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

bool func_250(int iParam0)
{
	return func_248(iParam0) == 0;
}

int func_251(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_5;
	}
	return (Global_1058888->f_498[iParam0 /*2*/])->f_1;
}

int func_252(int iParam0)
{
	if (!func_119(iParam0))
	{
		return 0;
	}
	return func_444(func_246(iParam0));
}

int func_253(int iParam0)
{
	if (!func_119(iParam0))
	{
		return -1;
	}
	return func_445(func_246(iParam0));
}

int func_254(int iParam0)
{
	if (!func_119(iParam0))
	{
		return -1;
	}
	return func_446(func_246(iParam0));
}

void func_255(int iParam0, int iParam1)
{
	if (!func_119(iParam0))
	{
		return;
	}
	func_437(iParam0, iParam1);
}

void func_256(int iParam0)
{
	var uVar0;
	int iVar1;
	vector3 vVar2;
	struct<8> Var5;
	struct<8> Var13;
	int iVar21;

	if (!func_95(iParam0))
	{
		return;
	}
	uVar0 = ((*Global_1835011)[iParam0 /*74*/])->f_8;
	iVar1 = MISC::GET_HASH_KEY(&uVar0);
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(1, iVar1))
	{
		UILOG::_UILOG_REMOVE_ENTRY(1, iVar1);
	}
	if (iParam0 == 77 || iParam0 == 38)
	{
		return;
	}
	vVar2 = { ((*Global_1835011)[iParam0 /*74*/])->f_18 };
	MemCopy(&Var5, {((*Global_1835011)[iParam0 /*74*/])->f_8}, 8);
	Var13 = { Var5 };
	StringConCat(&Var13, "_DESC", 64);
	UILOG::_UILOG_ADD_ENTRY_HASH(1, iVar1, vVar2, ((*Global_1835011)[iParam0 /*74*/])->f_26, MISC::GET_HASH_KEY(&Var13), iVar21);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(1, iVar1, ((*Global_1835011)[iParam0 /*74*/])->f_26, 676312963);
}

void func_257(int iParam0)
{
	if (!func_119(iParam0))
	{
		return;
	}
	func_438(iParam0, func_447(iParam0) + 1);
}

int func_258(int iParam0)
{
	return &(Global_1898164->f_1[iParam0 /*5*/]);
}

int func_259(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_448(iParam0);
	if (iVar0 >= 0)
	{
		return iVar0;
	}
	if (Global_1898164->f_162 >= 32)
	{
		return -1;
	}
	iVar0 = Global_1898164->f_162;
	func_449(iParam0, iVar0);
	Global_1898164->f_162++;
	if (iParam1 < 0 || iParam1 >= Global_1898164->f_162)
	{
		return iVar0;
	}
	func_450(iVar0, iParam1);
	return iParam1;
}

bool func_260(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

void func_261(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_262(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 - (Global_1572864->f_3 && iParam0));
}

void func_263(bool bParam0)
{
	func_451(bParam0);
	func_452(bParam0);
	func_453(bParam0);
	func_454(bParam0);
	func_455(bParam0);
	func_456(bParam0);
	func_457(bParam0);
	func_458(bParam0);
}

void func_264(bool bParam0)
{
	if (func_106() != -1)
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
		func_77(89, 1);
		ATTRIBUTE::_0xFB6E111908502871(5);
	}
	else
	{
		func_77(90, 1);
		ATTRIBUTE::_0x3FC4C027FD0936F4(5);
	}
	func_459(1, bParam0, 1);
	func_460();
	Global_40.f_11095.f_43 = bParam0;
}

int func_265(int iParam0)
{
	int iVar0;
	int iVar1;

	switch (func_252(iParam0))
	{
		case 1:
			iVar0 = func_253(iParam0);
			return func_461(iVar0);
		case 8:
			iVar1 = func_253(iParam0);
			if (func_462(((*Global_1347702)[iVar1 /*49*/])->f_12, 1))
			{
				return func_463(iVar1);
			}
			break;
	}
	return -1;
}

int func_266()
{
	if (!func_132(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return 0;
	}
	else if (!func_132(((*Global_1347702)[66 /*49*/])->f_15, 1))
	{
		return 1;
	}
	else if (!func_132(((*Global_1347702)[67 /*49*/])->f_15, 1))
	{
		return 2;
	}
	else if (!func_132(((*Global_1835011)[38 /*74*/])->f_1, 1))
	{
		return 3;
	}
	else if (!func_132(((*Global_1347702)[68 /*49*/])->f_15, 1))
	{
		return 4;
	}
	else if (!func_132(((*Global_1835011)[59 /*74*/])->f_1, 1))
	{
		return 5;
	}
	else if (!func_132(((*Global_1835011)[67 /*74*/])->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_267(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (func_106() != -1)
	{
		iVar0 = 1;
	}
	Global_1898077->f_1 = 2;
	Global_1898077->f_2 = 0;
	Global_1898077->f_3 = iParam0;
	Global_1898077->f_7 = iVar0;
	func_464(Global_1898077->f_7, Global_1898077->f_3);
}

void func_268(int iParam0)
{
	int iVar0;

	if (Global_1898077->f_1 == 2)
	{
		return;
	}
	iVar0 = 0;
	if (func_106() != -1)
	{
		iVar0 = 1;
	}
	Global_1898077->f_1 = 5;
	Global_1898077->f_2 = 0;
	Global_1898077->f_4 = iParam0;
	Global_1898077->f_7 = iVar0;
	func_465(Global_1898077->f_7, Global_1898077->f_4);
}

void func_269(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

void func_270(int iParam0, bool bParam1)
{
	if (func_106() != -1)
	{
		return;
	}
	if (func_258(0) != iParam0)
	{
		return;
	}
	if (func_466(iParam0))
	{
		if (bParam1)
		{
			func_467(-525676072);
		}
		else
		{
			func_468(-525676072);
		}
	}
}

bool func_271(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23117[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0 /*11*/] && iParam1) != 0;
}

int func_272()
{
	if (!MISC::IS_BIT_SET(Global_40.f_11182, 0))
	{
		MISC::SET_BIT(&(Global_40.f_11182), 0);
		return 0;
	}
	return 1;
}

int func_273(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	*uParam1 = -1;
	iVar0 = 3000;
	iVar1 = 5000;
	if (!func_124(iParam0))
	{
		return 0;
	}
	if (!func_469(iParam0))
	{
		return 0;
	}
	if (uParam2->f_1002 < iVar0)
	{
	}
	switch (iParam0)
	{
		case 76:
			if (uParam2->f_1002 >= iVar0 && !MISC::IS_BIT_SET(Global_40.f_11182, 3))
			{
				*uParam1 = 3;
				return 1;
			}
			else if (uParam2->f_1002 >= iVar0 && !MISC::IS_BIT_SET(Global_40.f_11182, 1))
			{
				*uParam1 = 1;
				return 1;
			}
			else if (uParam2->f_1002 >= iVar1 && !MISC::IS_BIT_SET(Global_40.f_11182, 2))
			{
				*uParam1 = 2;
				return 1;
			}
			break;
		case 26:
			if (uParam2->f_1002 >= iVar0 && ENTITY::GET_ENTITY_MODEL(Global_35) == joaat("player_zero"))
			{
				*uParam1 = 4;
				return 1;
			}
			else if (uParam2->f_1002 >= iVar0)
			{
				*uParam1 = 5;
				return 1;
			}
			break;
		case 105:
			if (uParam2->f_1002 >= iVar1)
			{
				*uParam1 = 6;
				return 1;
			}
			break;
		case 78:
			if (uParam2->f_1002 >= iVar0 && !MISC::IS_BIT_SET(Global_40.f_11182, 7))
			{
				*uParam1 = 7;
				return 1;
			}
			else if (uParam2->f_1002 >= iVar0 && !MISC::IS_BIT_SET(Global_40.f_11182, 8))
			{
				*uParam1 = 8;
				return 1;
			}
			break;
		case 38:
			if (uParam2->f_1002 >= iVar0)
			{
				*uParam1 = 9;
				return 1;
			}
			break;
		case 5:
			if (uParam2->f_1002 >= iVar0 && ENTITY::GET_ENTITY_MODEL(Global_35) == joaat("player_zero"))
			{
				*uParam1 = 10;
				return 1;
			}
			else if (uParam2->f_1002 >= iVar0)
			{
				*uParam1 = 11;
				return 1;
			}
			break;
	}
	return 0;
}

bool func_274(int iParam0)
{
	if (!func_129(iParam0))
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_40.f_11182, iParam0);
}

int func_275(int iParam0)
{
	if (!func_129(iParam0))
	{
		return 0;
	}
	if (!func_470())
	{
		return 0;
	}
	switch (iParam0)
	{
		case 1:
		case 2:
			if (func_471(7) && func_471(0))
			{
				return 1;
			}
			break;
		case 3:
			if (func_471(0))
			{
				return 1;
			}
			break;
		case 4:
			if (func_471(7) && func_471(1))
			{
				return 1;
			}
			break;
		case 5:
			return 1;
		case 6:
			if (func_471(0))
			{
				return 1;
			}
			break;
		case 7:
			if (func_471(5))
			{
				return 1;
			}
			break;
		case 8:
			if (func_471(7))
			{
				return 1;
			}
			break;
		case 9:
			if (func_471(13))
			{
				return 1;
			}
			break;
		case 10:
			if (func_471(5))
			{
				return 1;
			}
			break;
		case 11:
			return 1;
	}
	return 0;
}

int func_276(int iParam0)
{
	int iVar0;

	if (!func_129(iParam0))
	{
		return 0;
	}
	if (Global_1935630->f_12)
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(Global_35);
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
			return func_472(iVar0);
		case 4:
			return func_472(iVar0);
		case 5:
			return !func_472(iVar0);
		case 6:
			return func_472(iVar0);
		case 7:
		case 8:
			return func_472(iVar0);
		case 9:
			return !func_472(iVar0);
		case 10:
			return func_472(iVar0);
		case 11:
			return !func_472(iVar0);
	}
	return 0;
}

int func_277(int iParam0)
{
	if (!MISC::IS_BIT_SET(Global_40.f_11182, 12) && !MISC::IS_BIT_SET(Global_40.f_11182, *iParam0))
	{
		MISC::SET_BIT(&(Global_40.f_11182), 12);
		return 1;
	}
	if (MISC::IS_BIT_SET(Global_40.f_11182, *iParam0) && !MISC::IS_BIT_SET(Global_40.f_11182, 12))
	{
		MISC::SET_BIT(&(Global_40.f_11182), 12);
		return 0;
	}
	if ((MISC::IS_BIT_SET(Global_40.f_11182, *iParam0) && MISC::IS_BIT_SET(Global_40.f_11182, 12)) && !MISC::IS_BIT_SET(Global_40.f_11182, 13))
	{
		MISC::SET_BIT(&(Global_40.f_11182), 13);
		return 0;
	}
	if (!MISC::IS_BIT_SET(Global_40.f_11182, 13) && MISC::IS_BIT_SET(Global_40.f_11182, 12))
	{
		MISC::SET_BIT(&(Global_40.f_11182), 13);
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_40.f_11182, 12) && MISC::IS_BIT_SET(Global_40.f_11182, 13))
	{
		MISC::CLEAR_BIT(&(Global_40.f_11182), 13);
		MISC::CLEAR_BIT(&(Global_40.f_11182), 12);
		return 0;
	}
	return 1;
}

int func_278(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_279(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_40.f_7857[iVar1]), iVar2);
}

bool func_280(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

int func_281(int iParam0)
{
	if (!func_280(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/];
}

bool func_282(int iParam0)
{
	return iParam0 != 0;
}

int func_283(int iParam0)
{
	if (!func_280(iParam0))
	{
		return 0;
	}
	return ((*Global_1895087)[iParam0 /*3*/])->f_1;
}

void func_284(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	MISC::_0x2FCD528A397E5C88(iParam0, iVar0);
}

void func_285(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_100(iParam0))
	{
		return;
	}
	if (func_292(iParam0, 2) && !bParam1)
	{
		return;
	}
	if (bParam1)
	{
		func_473(iParam0, 1);
	}
	else
	{
		func_474(iParam0, 1);
	}
	func_475(iParam0, bParam1);
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (func_127(iVar0) == iParam0)
		{
			func_288(iVar0, 0);
		}
		iVar0++;
	}
}

int func_286(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2126166785:
			return -1;
		case -2119728378:
		case -1482428221:
		case -1391142299:
		case -867798278:
		case 183652754:
		case 305496830:
		case 725489698:
		case 1178102426:
		case 1543937523:
		case 1637569166:
		case 1758133584:
		case 2056744450:
			return 1;
		case -2137625828:
		case -1994249944:
		case -1323821455:
		case -968357677:
		case -201437056:
		case 493546894:
		case 728480338:
		case 1030875135:
		case 1559741032:
		case 1608357655:
			return 2;
		case -1147969487:
			return 0;
		case 60667583:
		case 537788226:
		case 794246846:
			return 5;
		case -1990305778:
		case -1738342532:
		case -1679988168:
		case -1308265478:
		case -650528936:
		case -577559008:
		case -497792649:
		case 139139039:
		case 965626876:
		case 1039226266:
		case 1624541293:
		case 1716860278:
			return 3;
		case -1618764825:
		case -877373104:
		case -256309418:
		case 251328732:
		case 963280223:
		case 1024208566:
		case 1640255731:
		case 1666986024:
			return 4;
	}
	return -1;
}

void func_287(int iParam0, bool bParam1)
{
	bool bVar0;

	if (!func_124(iParam0))
	{
		return;
	}
	bVar0 = func_271(iParam0, 67108864);
	if (bParam1)
	{
		if (((!bVar0 && func_413(iParam0) == 1) && iParam0 != 120) && iParam0 != 92)
		{
			func_476(iParam0, func_98());
			func_358(iParam0, 67108864);
		}
	}
	else if (bVar0)
	{
		func_359(iParam0, 67108864);
		func_476(iParam0, -15);
	}
	func_477(iParam0);
}

void func_288(int iParam0, bool bParam1)
{
	if (!func_97(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_478(iParam0, 1);
	}
	else
	{
		if (func_479(iParam0))
		{
			return;
		}
		func_480(iParam0, 1);
	}
	func_481(iParam0, bParam1);
}

int func_289()
{
	int iVar0;

	if (func_106() == 0)
	{
		return -1;
	}
	iVar0 = func_266();
	if (iVar0 == -1)
	{
		return 150000;
	}
	if (iVar0 <= 1)
	{
		return 30000;
	}
	if (iVar0 == 2 && !func_51(24))
	{
		return 50000;
	}
	return 150000;
}

void func_290(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			_NAMESPACE84::_0x74BCCEB233AD95B2(-1743273232, iParam1);
			break;
		case 1:
			_NAMESPACE84::_0x74BCCEB233AD95B2(-948016518, iParam1);
			break;
		case 2:
			_NAMESPACE84::_0x74BCCEB233AD95B2(580522491, iParam1);
			break;
		case 3:
			_NAMESPACE84::_0x74BCCEB233AD95B2(1176390239, iParam1);
			break;
		case 4:
			_NAMESPACE84::_0x74BCCEB233AD95B2(1791198853, iParam1);
			break;
		default:
			break;
	}
}

void func_291(int iParam0)
{
	int iVar0;

	iVar0 = func_482(iParam0);
	switch (iParam0)
	{
		case 0:
			_NAMESPACE84::_0x74BCCEB233AD95B2(-1047841819, iVar0);
			break;
		case 1:
			_NAMESPACE84::_0x74BCCEB233AD95B2(-1349566727, iVar0);
			break;
		case 2:
			_NAMESPACE84::_0x74BCCEB233AD95B2(613491521, iVar0);
			break;
		case 3:
			_NAMESPACE84::_0x74BCCEB233AD95B2(1452147132, iVar0);
			break;
		case 4:
			_NAMESPACE84::_0x74BCCEB233AD95B2(-885198919, iVar0);
			break;
		default:
			break;
	}
}

bool func_292(int iParam0, int iParam1)
{
	if (!func_100(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return ((Global_40.f_358[iParam0 /*12*/])->f_5 && iParam1) != 0;
	}
	return ((Global_1058888->f_42266[iParam0 /*12*/])->f_5 && iParam1) != 0;
}

void func_293(int iParam0, bool bParam1)
{
	if (!func_100(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_473(iParam0, 4);
	}
	else
	{
		func_474(iParam0, 4);
	}
	func_483(iParam0, bParam1);
}

struct<4> func_294(char* sParam0)
{
	char cVar0[32];

	StringCopy(&cVar0, sParam0, 32);
	return cVar0;
}

int func_295(int iParam0)
{
	if (!func_124(iParam0))
	{
		return 0;
	}
	return ((*Global_1888801)[iParam0 /*35*/])->f_3;
}

void func_296(int iParam0)
{
	func_298(iParam0, 1);
	func_298(iParam0, 128);
	func_298(iParam0, 256);
	func_298(iParam0, 512);
	func_298(iParam0, 1024);
	func_298(iParam0, 2048);
	func_298(iParam0, 4096);
	func_298(iParam0, 65536);
	func_298(iParam0, 16384);
	func_298(iParam0, 262144);
	func_298(iParam0, 524288);
	func_298(iParam0, 1048576);
	func_298(iParam0, 2097152);
	func_298(iParam0, 32768);
	func_298(iParam0, 131072);
	func_298(iParam0, 134217728);
	func_298(iParam0, 1073741824);
}

void func_297(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		return;
	}
	if (!bParam1)
	{
		if (DECORATOR::DECOR_EXIST_ON(Global_1360165[iParam0 /*1157*/], "wearing_bandana"))
		{
			DECORATOR::DECOR_REMOVE(Global_1360165[iParam0 /*1157*/], "wearing_bandana");
		}
	}
	else if (!DECORATOR::DECOR_EXIST_ON(Global_1360165[iParam0 /*1157*/], "wearing_bandana"))
	{
		DECORATOR::DECOR_SET_BOOL(Global_1360165[iParam0 /*1157*/], "wearing_bandana", true);
	}
}

void func_298(int iParam0, int iParam1)
{
	(Global_40.f_4942[iParam0 /*60*/])->f_5 = ((Global_40.f_4942[iParam0 /*60*/])->f_5 - ((Global_40.f_4942[iParam0 /*60*/])->f_5 && iParam1));
}

int func_299(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			*uParam1 = 860729266;
			return 1;
		case 128:
			*uParam1 = 1606325429;
			return 1;
		case 256:
			*uParam1 = 1743550585;
			return 1;
		case 512:
			*uParam1 = 1064646155;
			return 1;
		case 1024:
			*uParam1 = -536694793;
			return 1;
		case 2048:
			*uParam1 = -1304053509;
			return 1;
		case 4096:
			*uParam1 = 879715242;
			return 1;
		case 65536:
			*uParam1 = -972364774;
			return 1;
		case 16384:
			*uParam1 = -1100875244;
			return 1;
		case 262144:
			*uParam1 = 1153596794;
			return 1;
		case 524288:
			*uParam1 = 1016389820;
			return 1;
		case 1048576:
			*uParam1 = -726966617;
			return 1;
		case 2097152:
			*uParam1 = 1365901568;
			return 1;
		case 32768:
			*uParam1 = -1658942149;
			return 1;
		case 131072:
			*uParam1 = -1980913856;
			return 1;
		case 134217728:
			*uParam1 = -1683207356;
			return 1;
		case 1073741824:
			*uParam1 = -1712783565;
			return 1;
	}
	return 0;
}

bool func_300(int iParam0, int iParam1)
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

void func_301(int iParam0, int iParam1)
{
	(Global_40.f_4942[iParam0 /*60*/])->f_5 = ((Global_40.f_4942[iParam0 /*60*/])->f_5 || iParam1);
}

void func_302(int iParam0, int iParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) || ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (PED::_0xFB4891BD7578CDC1(iParam1, 1933068772))
	{
		PED::_0xD710A5007C2AC539(iParam1, 1933068772, 1);
	}
	if (PED::_0xFB4891BD7578CDC1(iParam1, 494009478))
	{
		PED::_0xD710A5007C2AC539(iParam1, 494009478, 1);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 1 > 0 && func_300(iParam1, 860729266))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 860729266);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 4096 > 0 && func_300(iParam1, 879715242))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 879715242);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 128 > 0 && func_300(iParam1, 1606325429))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1606325429);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 256 > 0 && func_300(iParam1, 1743550585))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1743550585);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 512 > 0 && func_300(iParam1, 1064646155))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1064646155);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 1024 > 0 && func_300(iParam1, -536694793))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -536694793);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 2048 > 0 && func_300(iParam1, -1304053509))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -1304053509);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & -2147483648 > 0 && func_300(iParam1, 718939204))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 718939204);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 65536 > 0 && func_300(iParam1, -972364774))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -972364774);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 16384 > 0 && func_300(iParam1, -1100875244))
	{
		if (PED::_0xFB4891BD7578CDC1(iParam1, -134124598))
		{
			PED::_0xD710A5007C2AC539(iParam1, -134124598, 1);
		}
		if (PED::_0xFB4891BD7578CDC1(iParam1, 2071466316))
		{
			PED::_0xD710A5007C2AC539(iParam1, 2071466316, 1);
		}
		PED::_0x1902C4CFCC5BE57C(iParam1, -1100875244);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 262144 > 0 && func_300(iParam1, 1153596794))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1153596794);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 524288 > 0 && func_300(iParam1, 1016389820))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1016389820);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 1048576 > 0 && func_300(iParam1, -726966617))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -726966617);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 2097152 > 0 && func_300(iParam1, 1365901568))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1365901568);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 32768 > 0 && func_300(iParam1, -1658942149))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -1658942149);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 131072 > 0 && func_300(iParam1, -1980913856))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -1980913856);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 4194304 > 0 && func_300(iParam1, 491764525))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 491764525);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 8388608 > 0 && func_300(iParam1, -76015264))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -76015264);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 16777216 > 0 && func_300(iParam1, 622113465))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 622113465);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 33554432 > 0 && func_300(iParam1, 781533162))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 781533162);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 67108864 > 0 && func_300(iParam1, -271415321))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -271415321);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 134217728 > 0 && func_300(iParam1, -1683207356))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -1683207356);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 268435456 > 0 && func_300(iParam1, -254794762))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -254794762);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 536870912 > 0 && func_300(iParam1, 609066278))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 609066278);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 1073741824 > 0 && func_300(iParam1, -1712783565))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -1712783565);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 8192 > 0 && func_300(iParam1, 1544915253))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1544915253);
	}
	if (bParam2)
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_57 = 1;
	}
}

int func_303(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1000)
	{
		if (!func_484(uParam0->f_868[iVar0 /*20*/]))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_304(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1000)
	{
		if ((uParam0->f_868[iVar0 /*20*/])->f_19)
		{
			if (!func_485(uParam0->f_868[iVar0 /*20*/]))
			{
				iVar1 = 0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_305(var uParam0)
{
	int iVar0;
	struct<11> Var1;

	if (!uParam0->f_18)
	{
		return 1;
	}
	if (func_235(uParam0->f_2, 0))
	{
		return 1;
	}
	else
	{
		Var1.f_10 = 7;
		Var1.f_1 = 1;
		Var1 = 1;
		Var1.f_5 = 1;
		Var1.f_6 = { uParam0->f_14 };
		uParam0->f_2 = func_409(&iVar0, &Var1);
		if (iVar0 == 1)
		{
			return 1;
		}
		func_349(uParam0->f_2, uParam0->f_14, uParam0->f_17, 2, 1073741824);
		TASK::TASK_STAND_STILL(uParam0->f_2, -1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_2, true);
	}
	return 0;
}

int func_306(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_999)
	{
		if (!func_486(uParam0->f_827[iVar0 /*10*/]))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_307(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_998)
	{
		if (!func_487(uParam0->f_782[iVar0 /*11*/], &(uParam0->f_1004), uParam0))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_308(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_996)
	{
		if (!func_488(uParam0->f_530[iVar0 /*10*/], &(uParam0->f_1004), uParam0))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_309(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_997)
	{
		if (!func_489(uParam0->f_731[iVar0 /*10*/], &(uParam0->f_1004)))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

void func_310(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_1000)
	{
		func_490(uParam0, (uParam0->f_868[iVar0 /*20*/])->f_2, &((uParam0->f_868[iVar0 /*20*/])->f_4), 0, 0, 0);
		if ((uParam0->f_868[iVar0 /*20*/])->f_19 && !MISC::IS_STRING_NULL_OR_EMPTY(func_491((uParam0->f_868[iVar0 /*20*/])->f_8)))
		{
			func_490(uParam0, (uParam0->f_868[iVar0 /*20*/])->f_3, &((uParam0->f_868[iVar0 /*20*/])->f_8), 0, 0, 0);
		}
		iVar0++;
	}
}

void func_311(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_999)
	{
		func_490(uParam0, (uParam0->f_827[iVar0 /*10*/])->f_2, &((uParam0->f_827[iVar0 /*10*/])->f_3), 0, 0, 0);
		iVar0++;
	}
}

void func_312(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_998)
	{
		func_490(uParam0, (uParam0->f_782[iVar0 /*11*/])->f_1, &((uParam0->f_782[iVar0 /*11*/])->f_2), 0, 0, 0);
		iVar0++;
	}
}

void func_313(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_996)
	{
		func_492(uParam0, (uParam0->f_530[iVar0 /*10*/])->f_1, &((uParam0->f_530[iVar0 /*10*/])->f_2), 0, 0, 0);
		iVar0++;
	}
}

void func_314(var uParam0)
{
	func_490(uParam0, uParam0->f_950.f_1, &(uParam0->f_950.f_3), 0, 0, 0);
}

void func_315(var uParam0)
{
	if (uParam0->f_950.f_18 && !MISC::IS_STRING_NULL_OR_EMPTY(func_491(uParam0->f_950.f_7)))
	{
		func_490(uParam0, uParam0->f_950.f_2, &(uParam0->f_950.f_7), 0, 0, 0);
	}
}

void func_316(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_997)
	{
		func_492(uParam0, (uParam0->f_731[iVar0 /*10*/])->f_1, &((uParam0->f_731[iVar0 /*10*/])->f_2), 0, 0, 0);
		iVar0++;
	}
}

struct<8> func_317(var uParam0)
{
	struct<8> Var0;

	Var0 = { func_493(uParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		Var0 = { func_494() };
	}
	return Var0;
}

void func_318(var uParam0, char* sParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	StringCopy(&(uParam0->f_446), sParam1, 64);
}

char* func_319(var uParam0)
{
	switch (uParam0->f_970)
	{
		case 10:
			return "PL1_Hosea_Left";
	}
	return "";
}

void func_320(var uParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	if (func_495(uParam0, sParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_462[iVar0 /*9*/]))
		{
			if (!func_496(uParam0, sParam1) || func_497(uParam0, 8388608))
			{
				StringCopy(uParam0->f_462[iVar0 /*9*/], sParam1, 64);
				if (!bParam2)
				{
					if (ANIMSCENE::_0x25557E324489393C(uParam0->f_444) && ANIMSCENE::_0x477122B8D05E7968(uParam0->f_444, 1, 0))
					{
						if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_444, sParam1))
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_444, sParam1);
						}
					}
					else
					{
						func_498(uParam0, 4194304);
					}
				}
				else
				{
					func_498(uParam0, 4194304);
				}
				return;
			}
			else
			{
				return;
			}
		}
		iVar0++;
	}
}

int func_321(var uParam0, char* sParam1, bool bParam2, bool bParam3)
{
	vector3 vVar0;
	float fVar3;
	struct<8> Var4;
	int iVar12;
	bool bVar13;
	int iVar14;
	struct<8> Var15;

	if (bParam3)
	{
		uParam0->f_511++;
		if (uParam0->f_511 < 10)
		{
			return (func_497(uParam0, 256) && !func_497(uParam0, 4194304));
		}
		uParam0->f_511 = 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	func_499(uParam0, sParam1);
	if (!func_497(uParam0, 64))
	{
		if (!func_174(func_500(uParam0)))
		{
			func_498(uParam0, 64);
		}
		else
		{
			vVar0 = { func_501(uParam0) };
			if (!func_174(vVar0))
			{
				func_502(uParam0, vVar0);
			}
		}
		return 0;
	}
	fVar3 = func_503(Global_35, func_500(uParam0), 1);
	if (func_497(uParam0, 128) || func_497(uParam0, 256))
	{
		if ((fVar3 >= func_504(uParam0) && !bParam2) || !ANIMSCENE::_0x25557E324489393C(uParam0->f_444))
		{
			if (uParam0->f_529)
			{
				func_505();
				uParam0->f_529 = 0;
			}
			func_506(uParam0);
			if (ANIMSCENE::_0x25557E324489393C(uParam0->f_444))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_444);
			}
			func_507(uParam0);
			func_508(uParam0, 128, 1);
			func_508(uParam0, 256, 1);
			func_508(uParam0, 4096, 1);
			func_508(uParam0, 32768, 1);
			func_508(uParam0, 16777216, 1);
		}
	}
	else if (fVar3 <= func_509(uParam0) || bParam2)
	{
		if (!func_497(uParam0, 128))
		{
			if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_444))
			{
				if (func_509(uParam0) >= func_504(uParam0))
				{
				}
				Var4 = { func_510(uParam0) };
				if (MISC::IS_STRING_NULL_OR_EMPTY(&Var4))
				{
					func_511(uParam0);
				}
				Var4 = { func_510(uParam0) };
				iVar12 = 256;
				if (!func_497(uParam0, 1))
				{
					iVar12 |= 2048;
				}
				uParam0->f_444 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_440), iVar12, &Var4, false, true);
				func_512(uParam0, 0, 0, 0, 0);
				func_498(uParam0, 128);
			}
		}
	}
	if (func_497(uParam0, 128))
	{
		if (func_497(uParam0, 256) && !func_497(uParam0, 4194304))
		{
			return 1;
		}
		func_513(uParam0);
		if (!uParam0->f_529)
		{
			if (func_514())
			{
				func_515(4096);
				uParam0->f_529 = 1;
			}
		}
		if (ANIMSCENE::_0x477122B8D05E7968(uParam0->f_444, 1, 0))
		{
			bVar13 = true;
			Var15 = { func_317(uParam0) };
			iVar14 = 0;
			while (iVar14 < 4)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_462[iVar14 /*9*/]))
				{
					if (!MISC::ARE_STRINGS_EQUAL(uParam0->f_462[iVar14 /*9*/], &Var15))
					{
						if (!(uParam0->f_462[iVar14 /*9*/])->f_8)
						{
							(uParam0->f_462[iVar14 /*9*/])->f_8 = 1;
							ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_444, uParam0->f_462[iVar14 /*9*/]);
							bVar13 = false;
						}
						else if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_444, uParam0->f_462[iVar14 /*9*/]))
						{
							bVar13 = false;
						}
					}
				}
				iVar14++;
			}
			if (!func_497(uParam0, 8388608))
			{
				if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_444, &Var15))
				{
					if (!func_497(uParam0, 16777216))
					{
						if ((!ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_444, &Var15) && !ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_444, &Var15)) && !ANIMSCENE::_0x1F0E401031E20146(uParam0->f_444, &Var15))
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_444, &Var15);
						}
						func_498(uParam0, 16777216);
					}
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_444, &Var15))
					{
						bVar13 = false;
					}
				}
			}
			if (!bVar13)
			{
				return 0;
			}
			func_498(uParam0, 256);
			func_508(uParam0, 4194304, 1);
			return 1;
		}
	}
	return 0;
}

int func_322(int iParam0)
{
	switch (iParam0)
	{
		case 3:
		case 7:
		case 10:
			return 1;
	}
	return 0;
}

void func_323(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (((!ANIMSCENE::_0x25557E324489393C(uParam0->f_444) || !ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_444, 0)) || ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_444)) || func_497(uParam0, 512))
	{
		if (!func_516(uParam0->f_501, 128))
		{
			func_517();
		}
		return;
	}
	if ((func_518(uParam0, Global_35, 4) || (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_444, func_519(Global_35)) && ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_444, func_519(Global_35)))) || !ANIMSCENE::_0x4B85B3CF91972222(uParam0->f_444))
	{
		if (!func_516(uParam0->f_501, 128))
		{
			func_517();
		}
		return;
	}
	iVar0 = 1;
	iVar1 = _NAMESPACE71::_0xC17F69E1418CD11F(9);
	if (iVar1 != 0)
	{
		if (func_520(iVar1))
		{
			if (func_521(Global_43800, 0))
			{
				iVar0 = 0;
			}
		}
	}
	bVar2 = false;
	if (func_516(uParam0->f_501, 512))
	{
		bVar2 = true;
	}
	if (func_522(iVar0, bVar2))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam0->f_444);
		func_517();
	}
}

void func_324(var uParam0)
{
	float fVar0;

	switch (uParam0->f_970)
	{
		case 1:
			fVar0 = 0.85f;
			break;
		case 2:
			fVar0 = 0.75f;
			break;
		case 3:
			fVar0 = 0.67f;
			break;
		case 4:
			fVar0 = 0.84f;
			break;
		case 5:
			fVar0 = 0.77f;
			break;
		case 6:
			fVar0 = 0.85f;
			break;
		case 7:
			fVar0 = 0.69f;
			break;
		case 8:
			fVar0 = 0.71f;
			break;
		case 9:
			fVar0 = 0.57f;
			break;
		case 10:
			fVar0 = 0.72f;
			break;
		case 11:
			fVar0 = 0.88f;
			break;
	}
	if (ANIMSCENE::_0x3FBC3F51BF12DFBF(uParam0->f_444) > fVar0)
	{
		func_228(Global_35, 2018429721, 0);
		func_54();
	}
}

int func_325(var uParam0)
{
	int iVar0;

	iVar0 = 1;
	switch (uParam0->f_970)
	{
		case 9:
			if (func_523(uParam0, Global_35, 0, 0, 1, 1))
			{
				func_524(-668482597, 2000, 0, 1, 1, 0, 0, 0);
				return 1;
			}
			break;
		case 10:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(0);
			}
			if (func_523(uParam0, Global_35, 0, 0, 1, 1))
			{
				func_524(-668482597, 2000, 0, 1, 1, 0, 0, 0);
				return 1;
			}
			break;
		case 11:
			if (func_523(uParam0, Global_35, 0, 0, 1, 1))
			{
				func_524(-1415276238, 2000, 0, 1, 1, 0, 0, 0);
				return 1;
			}
			break;
		case 3:
			if (func_523(uParam0, Global_35, 0, 0, 1, 1))
			{
				func_524(-668482597, 2000, 0, 1, 1, 0, 0, 0);
				return 1;
			}
			break;
		case 5:
			if (func_523(uParam0, Global_35, 0, 0, 1, 1))
			{
				func_524(-668482597, 1000, 0, 1, 1, 0, 0, 0);
				return 1;
			}
			break;
		case 7:
			if (func_523(uParam0, Global_35, 0, 0, 1, 1))
			{
				func_524(-668482597, 2000, 0, 1, 1, 0, 0, 0);
				return 1;
			}
			break;
		case 8:
			if (func_523(uParam0, Global_35, 0, 0, 1, 1))
			{
				return 1;
			}
			break;
		case 4:
			if (func_523(uParam0, Global_35, 0, 0, 1, 1))
			{
				func_524(-530524, 2000, 0, 1, 0, -152.8f, 0, 0);
				return 1;
			}
			if (ANIMSCENE::_0x3FBC3F51BF12DFBF(uParam0->f_444) > 0.96f)
			{
				if (iVar0 == 1)
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_444, func_525(1), func_176(uParam0, 1));
					func_190(func_176(uParam0, 1), func_179(uParam0, 1), 0, 2f, 20000);
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_444, func_525(7), func_176(uParam0, 7));
					func_190(func_176(uParam0, 7), func_179(uParam0, 7), 0, 2f, 20000);
					iVar0++;
				}
			}
			if (ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				return 1;
			}
			break;
		case 1:
			if (func_523(uParam0, Global_35, 0, 0, 1, 1))
			{
				func_524(-668482597, 1000, 0, 1, 0, -96.63f, 0, 0);
				return 1;
			}
			if (ANIMSCENE::_0x3FBC3F51BF12DFBF(uParam0->f_444) > 0.96f)
			{
				if (iVar0 == 1)
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_444, func_525(0), func_176(uParam0, 0));
					func_190(func_176(uParam0, 0), func_179(uParam0, 0), 0, 2f, 20000);
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_444, func_525(7), func_176(uParam0, 7));
					func_190(func_176(uParam0, 7), func_179(uParam0, 7), 0, 2f, 20000);
					iVar0++;
				}
			}
			if (ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				return 1;
			}
			break;
		case 2:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(0);
			}
			if (func_523(uParam0, Global_35, 0, 0, 1, 1))
			{
				return 1;
			}
			break;
		case 6:
			if (func_523(uParam0, Global_35, 0, 0, 1, 1))
			{
				return 1;
			}
			if (ANIMSCENE::_0x3FBC3F51BF12DFBF(uParam0->f_444) > 0.935f)
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_444, "DUTCH", func_176(uParam0, 0));
				func_190(func_176(uParam0, 0), func_179(uParam0, 0), 0, 1.5f, 20000);
			}
			break;
	}
	return 0;
}

void func_326(int iParam0)
{
	if (ANIMSCENE::_0x25557E324489393C(iParam0))
	{
		if (ANIMSCENE::_0xCBFC7725DE6CE2E0(iParam0, 0))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(iParam0);
		}
	}
}

int func_327(int iParam0, var uParam1)
{
	vector3 vVar0;
	float fVar3;

	switch (iParam0)
	{
		case 7:
			vVar0 = { 2916.061f, 1311.538f, 44.2142f };
			fVar3 = -54.69f;
			break;
		case 10:
			vVar0 = { 2518.293f, -1305.46f, 48.9726f };
			fVar3 = -8.52f;
			break;
		case 3:
			vVar0 = { -292.2816f, 800.4503f, 119.2814f };
			fVar3 = 96.96f;
			break;
	}
	switch (uParam1->f_972)
	{
		case 0:
			PLAYER::START_PLAYER_TELEPORT(PLAYER::PLAYER_ID(), vVar0, fVar3, 0, 1, 0, 0);
			uParam1->f_972 = 1;
			break;
		case 1:
			if (PLAYER::_HAS_PLAYER_TELEPORT_FINISHED(PLAYER::PLAYER_ID()))
			{
				uParam1->f_972 = 2;
			}
			break;
		case 2:
			if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_328(bool bParam0)
{
	if (ANIMSCENE::_0x25557E324489393C(Global_43799))
	{
		if (ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(Global_43799))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(Global_43799);
		}
	}
	Global_43799 = -1;
	StringCopy(&Global_43801, "", 24);
	Global_16 = 0;
	if (bParam0)
	{
		func_517();
	}
	PAD::_0xA0CEFCEA390AAB9B(0);
}

void func_329(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_998)
	{
		if ((uParam0->f_782[iVar0 /*11*/])->f_10)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(&(uParam0->f_782[iVar0 /*11*/]));
		}
		iVar0++;
	}
}

void func_330(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_996)
	{
		if ((uParam0->f_530[iVar0 /*10*/])->f_9)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(&(uParam0->f_530[iVar0 /*10*/]));
		}
		iVar0++;
	}
}

void func_331(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_997)
	{
		if ((uParam0->f_731[iVar0 /*10*/])->f_9)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(WEAPON::_GET_WEAPONTYPE_MODEL(&(uParam0->f_731[iVar0 /*10*/])));
		}
		iVar0++;
	}
}

void func_332(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_999)
	{
		func_526(uParam0->f_827[iVar0 /*10*/]);
		iVar0++;
	}
}

void func_333(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_996)
	{
		if (ENTITY::DOES_ENTITY_EXIST((uParam0->f_530[iVar0 /*10*/])->f_1) && (uParam0->f_530[iVar0 /*10*/])->f_9)
		{
			OBJECT::DELETE_OBJECT(&((uParam0->f_530[iVar0 /*10*/])->f_1));
		}
		iVar0++;
	}
}

int func_334()
{
	if (Global_1572887->f_12 != -1)
	{
		Global_35 = Global_1225638->f_8;
		Global_36 = { Global_1225638->f_16 };
		return Global_1225638->f_10;
	}
	Global_35 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	Global_36 = { ENTITY::GET_ENTITY_COORDS(Global_35, false, false) };
	return PLAYER::PLAYER_ID();
}

bool func_335(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_336()
{
	Global_1935630->f_13 = 0;
	Global_1935630->f_14 = 0;
	Global_1935630->f_26 = 0;
	Global_1935630->f_15 = 0;
	Global_1935630->f_16 = 0;
	Global_1935630->f_17 = 0;
	Global_1935630->f_18 = 0;
	Global_1935630->f_19 = -1;
	Global_1935630->f_20 = -1;
	Global_1935630->f_21 = -1;
	Global_1935630->f_23 = 0;
}

int func_337()
{
	if (func_106() != -1)
	{
		return 0;
	}
	if (!func_221())
	{
		return 0;
	}
	if (!func_132(((*Global_1835011)[1 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_132(((*Global_1835011)[2 /*74*/])->f_1, 1) && func_132(((*Global_1347702)[120 /*49*/])->f_15, 1)) && !func_132(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_132(((*Global_1835011)[37 /*74*/])->f_1, 1) && !func_132(((*Global_1835011)[39 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_132(((*Global_1835011)[57 /*74*/])->f_1, 1) && !func_132(((*Global_1835011)[60 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_132(((*Global_1835011)[26 /*74*/])->f_1, 1) && !func_132(((*Global_1347702)[67 /*49*/])->f_15, 1))
	{
		return 1;
	}
	if ((func_132(((*Global_1835011)[62 /*74*/])->f_1, 1) && func_132(((*Global_1835011)[63 /*74*/])->f_1, 1)) && !func_132(((*Global_1835011)[64 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_132(((*Global_1835011)[75 /*74*/])->f_1, 1) && !func_132(((*Global_1347702)[1 /*49*/])->f_15, 1))
	{
		return 1;
	}
	if (func_132(((*Global_1835011)[76 /*74*/])->f_1, 1) && !func_132(((*Global_1835011)[77 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_132(((*Global_1835011)[40 /*74*/])->f_1, 1) && func_132(((*Global_1835011)[41 /*74*/])->f_1, 1)) && !func_132(((*Global_1835011)[44 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_132(((*Global_1835011)[62 /*74*/])->f_1, 1) && func_132(((*Global_1835011)[63 /*74*/])->f_1, 1)) && !func_132(((*Global_1835011)[64 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_132(((*Global_1835011)[65 /*74*/])->f_1, 1) && func_132(((*Global_1835011)[66 /*74*/])->f_1, 1)) && !func_132(((*Global_1835011)[67 /*74*/])->f_1, 1))
	{
		return 1;
	}
	return 0;
}

int func_338(int iParam0, bool bParam1, int iParam2)
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
		if (func_527())
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
		iVar0 = func_253(&(Global_1898164->f_1[0 /*5*/]));
		if (func_528(iVar0) && func_462(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_119(&(Global_1898164->f_1[0 /*5*/])))
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

bool func_339()
{
	return uLocal_27;
}

void func_340(int iParam0)
{
	uLocal_27 = iParam0;
}

int func_341()
{
	if (iLocal_26)
	{
		return 1;
	}
	return 0;
}

int func_342(int iParam0, int iParam1, bool bParam2)
{
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0))
	{
		if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::_DOES_THREAD_EXIST(&(Global_1051081->f_15[0]))) && iParam1)
		{
			OBJECT::_0xD99229FE93B46286(iParam0, 1, 1, 0, &(Global_1051081->f_15[0]), 0, 0);
		}
		else
		{
			OBJECT::_0xD99229FE93B46286(iParam0, 1, 0, 0, 0, 0, 0);
		}
	}
	else if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::_DOES_THREAD_EXIST(&(Global_1051081->f_15[0]))) && iParam1)
	{
		if (!OBJECT::_0xB5DED7B65C604FDF(iParam0))
		{
			OBJECT::_0xD99229FE93B46286(iParam0, 1, 1, 0, &(Global_1051081->f_15[0]), 0, 0);
		}
	}
	if (bParam2)
	{
		OBJECT::_0x1F1FABFE9B2A1254(iParam0, 1);
	}
	return iParam0;
}

int func_343(int iParam0)
{
	if (func_529(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return 0;
}

void func_344(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_343(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || iParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, iParam1, iParam3);
	}
}

void func_345(int iParam0, int iParam1)
{
	if (func_343(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 2 || iParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 2);
		}
	}
}

void func_346(int iParam0, int iParam1)
{
	if (func_343(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || iParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
	}
}

void func_347(int iParam0, int iParam1)
{
	if (func_343(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 0 || iParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 0);
		}
	}
}

int func_348()
{
	return 1;
}

void func_349(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	int iVar6;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar4 = ENTITY::IS_ENTITY_A_PED(iParam0);
	if (bVar4)
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		bVar3 = PED::_0xD5FE956C70FF370B(iVar1);
		if (PED::IS_PED_RAGDOLL(iVar1))
		{
			PED::_0x221F4D9912B7FE86(iVar1, 1);
		}
	}
	if (iParam0 == func_530(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (func_531(iParam0))
	{
		if (func_532(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			PHYSICS::_0x0348469DAA17576C(iParam0);
		}
	}
	if (func_420(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_349(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_349(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_420(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 0, 1);
		}
	}
	if (func_420(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			ENTITY::_0x203BEFFDBE12E96A(iParam0, vParam1, fParam4, 1, func_420(iParam5, 32), 1);
		}
		else
		{
			ENTITY::_0x203BEFFDBE12E96A(iParam0, vParam1, fParam4, 1, func_420(iParam5, 32), 1);
			ENTITY::_0x9587913B9E772D29(iParam0, 0);
		}
	}
	else if (func_420(iParam5, 129))
	{
		if (func_420(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0, vParam1, func_420(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
	}
	else
	{
		ENTITY::_0x203BEFFDBE12E96A(iParam0, vParam1, fParam4, 1, func_420(iParam5, 32), 1);
	}
	if (bVar4)
	{
		if (!func_420(iParam5, 16))
		{
			PED::_0x7DE9692C6F64CFE8(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3, 0, 0);
		}
		if (func_531(iParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PHYSICS::_0x0348469DAA17576C(iVar6);
			if (!func_420(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, 1, 0);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PACKAGE_INDEX(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 1);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0) == Global_35 && !func_420(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
}

bool func_350(var uParam0, int iParam1, char* sParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < uParam0->f_97 && !bVar0)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam2, &(((*uParam0)[iVar1 /*4*/])->f_1)))
		{
			(*uParam0)[iVar1 /*4*/] = iParam1;
			bVar0 = true;
		}
		iVar1++;
	}
	if (!bVar0)
	{
		if (uParam0->f_97 < 24)
		{
			(*uParam0)[uParam0->f_97 /*4*/] = iParam1;
			StringCopy(&(((*uParam0)[uParam0->f_97 /*4*/])->f_1), sParam2, 24);
			uParam0->f_97++;
			bVar0 = true;
		}
	}
	return bVar0;
}

void func_351(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	if (!PED::DOES_GROUP_EXIST(*iParam1) || PED::IS_PED_DEAD_OR_DYING(*iParam0, true))
	{
		return;
	}
	PED::SET_PED_CONFIG_FLAG(*iParam0, 279, bParam3);
	if (bParam2)
	{
		PED::SET_PED_AS_GROUP_LEADER(*iParam0, *iParam1, 0);
	}
	else
	{
		PED::SET_PED_AS_GROUP_MEMBER(*iParam0, *iParam1);
		PED::SET_PED_CONFIG_FLAG(*iParam0, 280, bParam4);
		PED::_0xBAD2A311667A50D7(*iParam0, iParam5);
	}
	PED::_0x97C475212B327666(*iParam1, iParam6);
}

void func_352(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam3->f_97)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam3[iVar0 /*4*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam3[iVar0 /*4*/]))
			{
				AUDIO::ADD_PED_TO_CONVERSATION(&uParam0, uParam3[iVar0 /*4*/], &(((*uParam3)[iVar0 /*4*/])->f_1));
			}
		}
		iVar0++;
	}
}

int func_353(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_124(iParam0))
	{
		return 0;
	}
	iVar0 = func_533(iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	iVar1 = func_534(func_354(iParam0));
	iVar2 = (iVar0 - iVar1);
	if (iVar2 < 0)
	{
		iVar2 = 0;
	}
	return iVar2;
}

int func_354(int iParam0)
{
	if (!func_124(iParam0))
	{
		return -15;
	}
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23117[iParam0 /*11*/])->f_1;
	}
	return (Global_1058888->f_40615[iParam0 /*11*/])->f_1;
}

int func_355(int iParam0)
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
	iVar0 = func_535(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_536(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_537(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_538(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return 0;
	}
	iVar4 = func_539(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_540(iParam0);
	if (iVar5 < 1 || iVar5 > func_541(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_356(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_23117[iParam0 /*11*/])->f_1 = iParam1;
		return;
	}
	(Global_1058888->f_40615[iParam0 /*11*/])->f_1 = iParam1;
}

void func_357(int iParam0, int iParam1)
{
	if (!func_124(iParam0))
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	(Global_23117[iParam0 /*11*/])->f_3 = iParam1;
}

void func_358(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23117[iParam0 /*11*/] = (Global_23117[iParam0 /*11*/] || iParam1);
	}
	else
	{
		Global_1058888->f_40615[iParam0 /*11*/] = (Global_1058888->f_40615[iParam0 /*11*/] || iParam1);
	}
}

void func_359(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23117[iParam0 /*11*/] = (&Global_23117[iParam0 /*11*/] - (Global_23117[iParam0 /*11*/] && iParam1));
		return;
	}
	Global_1058888->f_40615[iParam0 /*11*/] = (&Global_1058888->f_40615[iParam0 /*11*/] - (Global_1058888->f_40615[iParam0 /*11*/] && iParam1));
}

void func_360(int iParam0)
{
	if (!func_124(iParam0))
	{
		return;
	}
	if (func_130(iParam0) && func_542(iParam0))
	{
		func_544(func_543(iParam0));
	}
	else
	{
		func_545(func_543(iParam0));
	}
}

float func_361(int iParam0, int iParam1)
{
	return func_546(iParam0, iParam1, 1, 1);
}

int func_362(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = ENTITY::GET_ENTITY_MODEL(Global_35);
	switch (iParam1)
	{
		case 76:
			if (func_472(iVar0))
			{
				if (func_548(&(uParam0->f_25), func_547(0), "PBL_1"))
				{
					return 1;
				}
			}
			else if (func_548(&(uParam0->f_25), func_547(1), "PBL_1"))
			{
				return 1;
			}
			break;
		case 26:
			if (func_472(iVar0))
			{
				if (func_548(&(uParam0->f_25), func_547(9), "PBL_1"))
				{
					return 1;
				}
			}
			else if (func_548(&(uParam0->f_25), func_547(10), "PBL_1"))
			{
				return 1;
			}
			break;
		case 105:
			if (func_472(iVar0))
			{
				if (func_548(&(uParam0->f_25), func_547(2), "PBL_1"))
				{
					return 1;
				}
			}
			else if (func_548(&(uParam0->f_25), func_547(3), "PBL_1"))
			{
				return 1;
			}
			break;
		case 78:
			if (func_472(iVar0))
			{
				if (func_548(&(uParam0->f_25), func_547(4), "PBL_1"))
				{
					return 1;
				}
			}
			else if (func_548(&(uParam0->f_25), func_547(5), "PBL_1"))
			{
				return 1;
			}
			break;
		case 38:
			if (func_548(&(uParam0->f_25), func_547(6), "PBL_1"))
			{
				return 1;
			}
			break;
		case 5:
			if (func_472(iVar0))
			{
				if (func_548(&(uParam0->f_25), func_547(7), "PBL_1"))
				{
					return 1;
				}
			}
			else if (func_548(&(uParam0->f_25), func_547(8), "PBL_1"))
			{
				return 1;
			}
			break;
		case 115:
			if (func_548(&(uParam0->f_25), func_547(11), "PBL_1"))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_363(int iParam0)
{
	struct<2> Var0;

	if (iParam0 <= 0)
	{
		return;
	}
	if (func_196(1) < iParam0)
	{
		iParam0 = func_196(1);
	}
	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	Var0 = { func_399(1644987397) };
	STATS::_0xBD861AE8A5181ED7(&Var0, iParam0);
}

void func_364(int iParam0, char* sParam1, var uParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_402(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

void func_365(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::CLEAR_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_366(int iParam0, int iParam1)
{
	if (func_106() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iParam0]), iParam1);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iParam0]), iParam1);
}

int func_367(int iParam0)
{
	if (func_106() != -1)
	{
		if (func_369(iParam0, 4))
		{
			return 0;
		}
	}
	else if (func_369(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

int func_368(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_369(iParam0, 65536) && !func_369(iParam0, 32768))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if ((Global_40.f_7756[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_369(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0 /*3*/] - iVar1);
			if ((Global_40.f_7756[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && func_369(iParam0, 32768))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_369(int iParam0, int iParam1)
{
	return ((Global_1905944->f_22[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

bool func_370()
{
	return Global_1905944->f_5694;
}

bool func_371(int iParam0)
{
	return func_549(iParam0, 16, 1);
}

void func_372(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	if (!func_550(iParam0))
	{
		return;
	}
	if (func_371(iParam0))
	{
		if (((*Global_1360165)[iParam0 /*1157*/])->f_129 != 0 && ((*Global_1360165)[iParam0 /*1157*/])->f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_551(iParam0, 56, 1);
		func_416(&(Global_1359489->f_40), 1);
	}
	func_552(iParam0, 0);
	func_553(iParam0, 4, 0);
	func_554(iParam0);
	func_555(iParam0);
	func_556(iParam0, 37, 1);
	bVar0 = func_235(Global_1360165[iParam0 /*1157*/], 0);
	iVar1 = func_557(iParam0, 0);
	bVar2 = _NAMESPACE48::_0x800DF3FC913355F3(iVar1);
	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, false);
	}
	if (func_558(iParam0, 64, 1))
	{
		func_556(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_556(iParam0, 33, 1);
		func_556(iParam0, 34, 1);
		func_559(iParam0, 1056964608, -1, 1061158912);
		func_560(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_551(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_551(iParam0, 35, 1);
			if (bParam8)
			{
				func_551(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_561(iParam0, 0);
			if (PED::IS_PED_IN_GROUP(Global_1360165[iParam0 /*1157*/]))
			{
				PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
			}
			POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/], 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], 1030835986);
		}
		if (bVar2)
		{
			_NAMESPACE48::_0xBB68908CD11AEBDC(iVar1);
		}
		func_556(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
		}
		func_551(iParam0, 33, 1);
		func_560(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_133 = fParam4;
			func_416(&(((*Global_1360165)[iParam0 /*1157*/])->f_130), 1);
		}
		else
		{
			func_562(&(((*Global_1360165)[iParam0 /*1157*/])->f_130));
		}
		if (bParam9)
		{
			func_551(iParam0, 34, 1);
		}
	}
	if (iParam1 || bParam2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		{
			func_563(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], false);
	}
	if (func_558(iParam0, 45, 1))
	{
		func_556(iParam0, 45, 1);
	}
	func_564(iParam0, 16, 1);
	func_556(iParam0, 44, 1);
	((*Global_1360165)[iParam0 /*1157*/])->f_129 = 0;
	(Global_40.f_4942[iParam0 /*60*/])->f_4 = 0;
	if (bParam5)
	{
		if (func_235(func_565(iParam0), 0))
		{
			func_374(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

int func_373(int iParam0)
{
	if (!func_566(iParam0))
	{
		return 0;
	}
	if (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 == 0 || ((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 == ((*Global_1360165)[iParam0 /*1157*/])->f_128)
	{
		return 0;
	}
	return 1;
}

void func_374(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (!func_566(iParam1))
	{
		return;
	}
	iVar0 = func_565(iParam1);
	if (func_373(iParam1))
	{
		if (!func_567(iParam1))
		{
			return;
		}
	}
	func_556(iParam1, 39, 1);
	func_568(iParam1, 64, 0);
	((*Global_1360165)[iParam1 /*1157*/])->f_70.f_11 = 0;
	func_568(iParam1, 8, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!bParam2)
		{
			func_568(iParam1, 512, 1);
			PED::SET_PED_KEEP_TASK(iVar0, true);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			func_551(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_569(iParam1, 0, 1, 1, 1);
		}
	}
}

int func_375(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = func_376(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	return 1;
}

int func_376(int iParam0)
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

void func_377(int iParam0)
{
	iParam0 = func_570(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_571(iParam0, 32);
	func_572();
}

void func_378(int iParam0)
{
	int iVar0;

	iParam0 = func_570(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_379(iParam0);
	if (!SCRIPTS::_DOES_THREAD_EXIST(iVar0))
	{
		func_381(iParam0);
	}
	else if (!SCRIPTS::IS_THREAD_ACTIVE(iVar0, false))
	{
		func_381(iParam0);
	}
}

int func_379(int iParam0)
{
	iParam0 = func_570(iParam0);
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

int func_380(int iParam0)
{
	iParam0 = func_570(iParam0);
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

void func_381(int iParam0)
{
	iParam0 = func_570(iParam0);
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

void func_382(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_106() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

void func_383(bool bParam0)
{
	int iVar0;

	if (Global_1898077->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_106() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077->f_2 == 4 && Global_1898077->f_12 != Global_1898077->f_13) && !bParam0)
	{
		Global_1898077->f_1 = Global_1898077->f_2;
		Global_1898077->f_12 = Global_1898077->f_13;
		func_573(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_574();
		Global_1898077->f_9 = func_575(Global_1894899->f_2);
		func_576(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

int func_384(int iParam0)
{
	return func_577(func_448(iParam0));
}

void func_385(int iParam0, int iParam1, bool bParam2)
{
	if (Global_1327479->f_9)
	{
		return;
	}
	Global_1327479->f_4 = (Global_1327479->f_4 + iParam0 * 1000);
	if (bParam2)
	{
		Global_1310750->f_16106 = { Global_36 };
	}
	if (iParam1 == 0)
	{
		if (iParam0 > 0)
		{
			Global_1327479->f_5 = (MISC::GET_GAME_TIMER() + ((Global_1327479->f_4 - MISC::GET_GAME_TIMER()) / 2));
		}
		else
		{
			Global_1327479->f_5 = (Global_1327479->f_5 + iParam0 * 500);
		}
	}
	else
	{
		Global_1327479->f_5 = (MISC::GET_GAME_TIMER() + iParam1 * 1000);
	}
}

bool func_386(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = uParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_1934765->f_21[iVar1]), iVar2);
}

bool func_387(int iParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!INTERIOR::IS_INTERIOR_READY(iParam0))
		{
			return false;
		}
	}
	if (uParam1 || Global_1934765->f_271)
	{
		return true;
	}
	return ((INTERIOR::_0xBC8A281FF125C655() != iParam0 && INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) != iParam0) || CAM::IS_SCREEN_FADED_OUT());
}

void func_388(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::SET_BIT(Global_1934765->f_30[iVar1], iVar2);
}

void func_389(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::CLEAR_BIT(Global_1934765->f_30[iVar1], iVar2);
}

int func_390()
{
	int iVar0;

	iVar0 = func_578();
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

int func_391(int iParam0)
{
	float fVar0;
	float fVar1;

	if (func_106() != -1)
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
	fVar1 = func_579(MISC::ABSF(fVar1) < 1f, func_579(fVar1 < 0f, -1f, 1f), fVar1);
	return BUILTIN::CEIL(fVar1);
}

int func_392()
{
	if (func_106() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == 11966224)
	{
		return 1;
	}
	return 0;
}

int func_393(int iParam0, int iParam1, int iParam2)
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

int func_394(int iParam0)
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

int func_395()
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

void func_396(int iParam0, bool bParam1, int iParam2)
{
	func_580((MISC::GET_GAME_TIMER() + iParam2), !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1955569->f_1.f_2.f_1, iParam0);
	func_581(iParam0);
}

void func_397(int iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_16[2]), 0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[2]), 1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_20[2]), func_582(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_24[2]), "pausemenu_player");
}

void func_398(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	bVar3 = false;
	if (func_583(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_584(iVar5, &iVar2, &iVar0))
			{
				if (!func_425(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_585(iVar2);
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
							if (func_586(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_390() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_390() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_587();
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

struct<2> func_399(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

void func_400(var uParam0, var uParam1, int iParam2)
{
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

char* func_401(int iParam0)
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

var func_402(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_588(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_403(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_589(iParam0))
	{
		return 0;
	}
	if (!func_221())
	{
		return 0;
	}
	if (!func_590(iParam0, &iVar0, &iVar1))
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

int func_404(var uParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_591(*uParam0, 0f, 0f, 0f))
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

var func_405()
{
	return Global_40.f_4283;
}

int func_406(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 6:
			*uParam1 = { 2368.145f, 1339.411f, 105.2073f };
			*uParam2 = 0f;
			break;
		case 0:
			*uParam1 = { -1347.354f, 2415.999f, 306.1693f };
			*uParam2 = 0f;
			break;
		case 2:
			*uParam1 = { 676.0986f, -1223.26f, 44.8735f };
			*uParam2 = 186f;
			break;
		case 1:
			*uParam1 = { -113.3444f, -16.16381f, 94.90366f };
			*uParam2 = 0f;
			break;
		case 3:
			*uParam1 = { 1855.146f, -1834.112f, 42.1034f };
			*uParam2 = 0f;
			break;
		case 7:
			*uParam1 = { -2591.77f, 465.7827f, 146.256f };
			*uParam2 = 0f;
			break;
		case 8:
			*uParam1 = { -1595.7f, -1414.78f, 83.7f };
			*uParam2 = 0f;
			break;
		case 5:
			*uParam1 = { 2278.67f, -751.0582f, 40.9953f };
			*uParam2 = 0f;
			break;
		default:
			return 0;
	}
	return 1;
}

int func_407(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (!func_592(iParam1))
	{
		return 0;
	}
	if (!bParam3)
	{
		return 1;
	}
	iVar0 = func_434(iParam1);
	return func_593(iParam0, iVar0, bParam2, bParam2);
}

int func_408(int iParam0)
{
	iParam0 = func_570(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (func_594(iParam0) == 0)
	{
		return 0;
	}
	return 1;
}

int func_409(var uParam0, var uParam1)
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

	uParam1->f_10 = func_570(uParam1->f_10);
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
		if (func_174(uParam1->f_6))
		{
		}
	}
	bVar0 = func_221();
	if (*uParam1)
	{
		if (bVar0 && !func_132(((*Global_1835011)[4 /*74*/])->f_1, 1))
		{
			if (func_408(5))
			{
				func_595(5);
				func_596(5);
				func_597(0);
				func_598(0);
			}
		}
	}
	if (func_599(Global_36) == 8)
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_132(((*Global_1835011)[37 /*74*/])->f_1, 1)) && !func_132(((*Global_1835011)[43 /*74*/])->f_1, 1))
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_132(((*Global_1835011)[43 /*74*/])->f_1, 1)) && !func_132(((*Global_1835011)[44 /*74*/])->f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*uParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_600(iVar1);
	bVar3 = false;
	bVar4 = false;
	iVar5 = 0;
	if (func_601(iVar1))
	{
		bVar3 = true;
		if (func_602(iVar1))
		{
			bVar4 = true;
		}
		if (func_603(iVar1))
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
				func_604(uParam1->f_10);
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
			if (!func_408(0) && func_408(1))
			{
				func_605(1, 0);
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_606())
			{
				func_607();
			}
			func_597(0);
			func_598(0);
			func_608(uParam1->f_6);
		}
	}
	if (!func_601(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_609(uParam1->f_10) == 0 || func_610(uParam1->f_10) == 0) || func_594(uParam1->f_10) == 0)
			{
				func_611(uParam1->f_10);
			}
			func_612(uParam1->f_10);
			func_613(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*uParam0 = 0;
			return 0;
		}
		*uParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_600(iVar1);
	bVar3 = false;
	bVar4 = false;
	iVar5 = 0;
	if (func_601(iVar1))
	{
		bVar3 = true;
		if (func_602(iVar1))
		{
			bVar4 = true;
		}
		if (func_603(iVar1))
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
			if (!func_174(uParam1->f_6))
			{
				ENTITY::SET_ENTITY_COORDS(iVar2, uParam1->f_6, false, true, true, true);
				ENTITY::SET_ENTITY_HEADING(iVar2, uParam1->f_9);
				ENTITY::_0x9587913B9E772D29(iVar2, 0);
			}
		}
	}
	if (func_614(uParam1->f_10))
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
			Var8 = { func_615(uParam1->f_10) };
			Var10 = { func_616() };
			func_617(iVar2, &Var8, &Var10, 0);
			PLAYER::_0xD2CB0FB0FDCB473D(iVar6, iVar2);
			PED::SET_PED_CONFIG_FLAG(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*uParam0 = 2;
		return iVar2;
	}
	if (!func_380(uParam1->f_10))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, true, true);
		func_618(uParam1->f_10);
		if (uParam1->f_2 && !func_174(uParam1->f_6))
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
	func_378(uParam1->f_10);
	if (func_380(uParam1->f_10))
	{
		iVar16 = func_379(uParam1->f_10);
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

void func_410(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

void func_411(bool bParam0, int iParam1)
{
	bool bVar0;

	if (func_619())
	{
		if (func_620(255))
		{
			if (!func_621(36, 255))
			{
				return;
			}
		}
	}
	bVar0 = bParam0;
	if (!bParam0)
	{
		if (func_124(Global_1894899->f_2) && func_414(Global_1894899->f_2))
		{
			func_622(Global_1894899->f_2, 0);
			if (iParam1 != 0)
			{
				Global_1894899->f_7 = iParam1;
				func_623(16);
			}
		}
		else if (func_124(Global_1894899->f_2) && !func_271(Global_1894899->f_2, 2))
		{
			bParam0 = true;
		}
	}
	if (bParam0)
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
		}
		Global_1894899->f_7 = 0;
		func_624(16);
		func_625();
		if (bVar0)
		{
			func_624(1);
		}
	}
}

void func_412()
{
	func_624(8);
}

int func_413(int iParam0)
{
	if (!func_124(iParam0))
	{
		return 0;
	}
	return ((*Global_1888801)[iParam0 /*35*/])->f_20;
}

int func_414(int iParam0)
{
	if (!func_124(iParam0))
	{
		return 0;
	}
	return func_271(iParam0, 8);
}

bool func_415(var uParam0)
{
	return func_626(*uParam0, 1);
}

void func_416(var uParam0, int iParam1)
{
	if (iParam1 || !func_415(uParam0))
	{
		func_627(uParam0);
	}
}

int func_417(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

float func_418(var uParam0)
{
	if (!func_415(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_628(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_629() - uParam0->f_1);
}

int func_419(var uParam0)
{
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1065353216);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(*uParam0, false);
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_420(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_421(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_630(iVar0);
}

int func_422(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1944638739:
			return 36;
		case -1889597427:
			return 0;
		case -1884748965:
			return 32;
		case -1586649372:
			return 33;
		case -1506259487:
			return 5;
		case -1505978566:
			return 22;
		case -1489346253:
			return 38;
		case -1364808185:
			return 19;
		case -1292426046:
			return 8;
		case -1197751823:
			return 20;
		case -1176744536:
			return 24;
		case -1130865351:
			return 31;
		case -1130352927:
			return 1;
		case -893163968:
			return 17;
		case -735900586:
			return 28;
		case -676503695:
			return 6;
		case -450913544:
			return 18;
		case -426430150:
			return 29;
		case -358215195:
			return 39;
		case -338487716:
			return 11;
		case -207860920:
			return 26;
		case 99217379:
			return 27;
		case 304805134:
			return 21;
		case 383349088:
			return 7;
		case 389988485:
			return 2;
		case 673166414:
			return 25;
		case 788010710:
			return 34;
		case 1108822547:
			return 10;
		case 1145151482:
			return 23;
		case 1250092473:
			return 16;
		case 1367443060:
			return 4;
		case 1422688607:
			return 9;
		case 1600962399:
			return 13;
		case 1672288269:
			return 15;
		case 1742327865:
			return 12;
		case 1780904876:
			return 3;
		case 1788623170:
			return 30;
		case 1849504272:
			return 14;
		case 1900541263:
			return 37;
		case 1958421083:
			return 35;
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

int func_423(int iParam0)
{
	struct<2> Var0;

	if (!func_425(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_424()
{
	if (Global_1946804->f_2793)
	{
		return 1;
	}
	if (MISC::ABSI((MISC::GET_GAME_TIMER() - Global_1946804->f_2791)) < 1250)
	{
		return 1;
	}
	if (func_631())
	{
		return 1;
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_35))
	{
		return 1;
	}
	return 0;
}

int func_425(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

bool func_426(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_425(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_586(iParam0);
	if (iVar0 == -427144552)
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (iVar0 == 307971639)
	{
		if (!func_632(iParam0, 1))
		{
			return false;
		}
	}
	return func_633(iParam0, 0, bParam2) >= iParam1;
}

int func_427(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (func_238(&iVar0))
	{
		if (iParam0 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_428(int iParam0, int iParam1)
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

int func_429()
{
	int iVar0;

	iVar0 = 1549701178;
	switch (func_634())
	{
		case 0:
			iVar0 = 1549701178;
			break;
		case 3:
			iVar0 = 949387044;
			break;
		case 1:
			iVar0 = -22529868;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_430()
{
	int iVar0;

	iVar0 = 614608656;
	switch (func_634())
	{
		case 0:
			iVar0 = 614608656;
			break;
		case 3:
			iVar0 = -1290316291;
			break;
		case 1:
			iVar0 = 1918034163;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_431()
{
	int iVar0;

	iVar0 = -1832677570;
	switch (func_634())
	{
		case 0:
			iVar0 = -1832677570;
			break;
		case 3:
			iVar0 = -362314920;
			break;
		case 1:
			iVar0 = -1336137422;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_432()
{
	int iVar0;

	iVar0 = 1623252156;
	switch (func_634())
	{
		case 0:
			iVar0 = 1623252156;
			break;
		case 3:
			iVar0 = -1469902924;
			break;
		case 1:
			iVar0 = 170763280;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_433(var uParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<4> Var3;

	Var3 = -961687407;
	if (func_106() == -1)
	{
		Var3 = 1444744190;
	}
	Var3.f_1 = uParam0;
	Var3.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var3);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var3))
	{
		return 0;
	}
	if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var3, -2008906477))
	{
		return 0;
	}
	uVar2 = func_635(uParam0);
	if (func_636(iVar0, &iVar1))
	{
		func_637(iVar1, uVar2);
	}
	while (DATAFILE::_0xED4413CEE1BF142C(&Var3))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var3, -2008906477))
		{
		}
		else if (!func_636(iVar0, &iVar1))
		{
		}
		else
		{
			func_637(iVar1, uVar2);
		}
	}
	return 1;
}

int func_434(int iParam0)
{
	int iVar0;
	struct<4> Var1;

	Var1 = -961687407;
	if (func_106() == -1)
	{
		Var1 = 1444744190;
	}
	Var1.f_1 = iParam0;
	Var1.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var1);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var1))
	{
		return 0;
	}
	if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var1, -624749060))
	{
		return 0;
	}
	return func_638(iVar0);
}

int func_435(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (iParam1 == 0)
	{
		iParam1 = -1;
	}
	if (!bParam2)
	{
		if (PED::IS_PED_A_PLAYER(iParam0))
		{
			func_639(13, iParam1, 0, 0, 0);
		}
		else
		{
			func_639(13, iParam1, 1, iParam0, 0);
		}
		return 1;
	}
	if (!func_640(0))
	{
	}
	func_641(&(Global_1946804->f_1497), iParam0, 1, iParam1, 1, iParam3, 1);
	return 1;
}

bool func_436(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_437(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_12105[iParam0 /*7*/])->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_642(iParam0);
	}
	else
	{
		func_643(iParam0, iParam1);
	}
	func_644();
}

void func_438(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_2 = iParam1;
}

void func_439(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_3 = iParam1;
}

void func_440(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_4 = iParam1;
}

void func_441(int iParam0, var uParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12105[iParam0 /*7*/] = uParam1;
		return;
	}
	Global_1058888->f_498[iParam0 /*2*/] = uParam1;
}

void func_442(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_12105[iParam0 /*7*/])->f_5 = iParam1;
		return;
	}
	(Global_1058888->f_498[iParam0 /*2*/])->f_1 = iParam1;
}

int func_443(int iParam0)
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

int func_444(var uParam0)
{
	return uParam0 & 31;
}

int func_445(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

int func_446(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 15) & 16383;
}

int func_447(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_2;
	}
	return -1;
}

int func_448(int iParam0)
{
	int iVar0;

	if (iParam0 == 0 || iParam0 == -1)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (&Global_1898164->f_1[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_449(int iParam0, int iParam1)
{
	struct<5> Var0;

	if (iParam0 == -1 || iParam0 == 0)
	{
		*(Global_1898164->f_1[iParam1 /*5*/]) = { Var0 };
	}
	else
	{
		Global_1898164->f_1[iParam1 /*5*/] = iParam0;
		(Global_1898164->f_1[iParam1 /*5*/])->f_1 = func_246(iParam0);
		func_645((Global_1898164->f_1[iParam1 /*5*/])->f_1, &((Global_1898164->f_1[iParam1 /*5*/])->f_3), &((Global_1898164->f_1[iParam1 /*5*/])->f_4), &((Global_1898164->f_1[iParam1 /*5*/])->f_2));
	}
}

void func_450(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == iParam1)
	{
		return;
	}
	if (iParam1 < iParam0)
	{
		iVar0 = iParam0;
		while (iVar0 > iParam1)
		{
			func_646((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_646(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_119(&(Global_1898164->f_1[0 /*5*/])))
	{
		func_255(&(Global_1898164->f_1[0 /*5*/]), 3);
	}
}

void func_451(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 153)
	{
		if ((Global_1914319->f_15936[iVar0 /*6*/])->f_5)
		{
			(Global_1914319->f_15936[iVar0 /*6*/])->f_5 = 0;
		}
		func_647(Global_1914319->f_15936[iVar0 /*6*/], bParam0);
		iVar0++;
	}
}

void func_452(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_647(Global_1934051->f_23[iVar0], bParam0);
		iVar0++;
	}
}

void func_453(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 33)
	{
		func_647(Global_1899778->f_34[iVar0], bParam0);
		(*Global_1899778)[iVar0] = 0;
		iVar0++;
	}
}

void func_454(bool bParam0)
{
	func_647(Global_1956612, bParam0);
}

void func_455(bool bParam0)
{
	func_647(&(Global_1415412->f_3), bParam0);
}

void func_456(bool bParam0)
{
	if (func_648(Global_1934051->f_33))
	{
		func_649(Global_1934051->f_33, 7148155);
	}
	func_647(&(Global_1934051->f_33), bParam0);
}

void func_457(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		iVar1 = func_651(func_650(iVar0));
		if (iVar1 != 0)
		{
			func_649(Global_1934051[iVar0 /*2*/], iVar1);
		}
		if (((*Global_1934051)[iVar0 /*2*/])->f_1)
		{
			((*Global_1934051)[iVar0 /*2*/])->f_1 = 0;
		}
		func_647((*Global_1934051)[iVar0 /*2*/], bParam0);
		iVar0++;
	}
}

void func_458(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_36307)
	{
		func_652(iVar0, -1);
		func_653(iVar0, 0);
		func_654(iVar0, 0);
		if (MAP::DOES_BLIP_EXIST(&(Global_36307[iVar0])))
		{
			if (bParam0)
			{
				MAP::SET_RADAR_ZOOM(&(Global_36307[iVar0]));
			}
			MAP::REMOVE_BLIP(Global_36307[iVar0]);
		}
		iVar0++;
	}
}

void func_459(int iParam0, bool bParam1, int iParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_6, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_5, iParam2);
}

void func_460()
{
	func_655();
	func_656();
	func_657();
}

int func_461(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 0;
		case 5:
		case 6:
		case 9:
		case 10:
		case 11:
		case 13:
		case 14:
		case 15:
		case 25:
			return 1;
		case 12:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 26:
		case 53:
			return 2;
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 37:
			return 3;
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			return 4;
		case 44:
		case 45:
		case 46:
		case 47:
		case 49:
		case 50:
		case 51:
		case 52:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			return 5;
		case 59:
			return 6;
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
			return 7;
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
			return 8;
	}
	return -1;
}

bool func_462(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_463(int iParam0)
{
	switch (iParam0)
	{
		case 120:
			return 0;
		case 0:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 66:
		case 94:
		case 97:
		case 98:
		case 112:
		case 113:
		case 114:
			return 1;
		case 3:
		case 4:
		case 5:
		case 37:
		case 67:
		case 76:
		case 134:
			return 2;
		case 115:
		case 116:
			return 3;
		case 58:
		case 64:
		case 68:
		case 82:
		case 83:
			return 5;
		case 1:
		case 2:
		case 8:
		case 9:
		case 10:
		case 96:
			return 8;
	}
	return -1;
}

void func_464(var uParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = uParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(2, &Var0, 2, 2);
}

void func_465(var uParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = uParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(5, &Var0, 2, 2);
}

int func_466(int iParam0)
{
	if (!func_119(iParam0))
	{
		return 0;
	}
	switch (func_252(iParam0))
	{
		case 1:
			switch (func_253(iParam0))
			{
				case 9:
				case 18:
				case 23:
				case 24:
				case 26:
				case 33:
				case 34:
				case 37:
				case 38:
				case 39:
				case 40:
				case 41:
				case 42:
				case 43:
				case 47:
				case 59:
				case 66:
					return 1;
			}
			break;
		case 8:
			switch (func_253(iParam0))
			{
				case 2:
				case 58:
				case 62:
				case 96:
					return 1;
			}
			break;
	}
	return 0;
}

void func_467(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_658(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_423(iVar1) == iParam0)
		{
			INVENTORY::_0x6A564540FAC12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_660(func_659(iParam0), 6);
}

void func_468(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_658(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_423(iVar1) == iParam0)
		{
			INVENTORY::_0x766315A564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_661(func_659(iParam0), 6);
}

int func_469(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 26:
		case 38:
		case 76:
		case 78:
		case 105:
			return 1;
	}
	return 0;
}

int func_470()
{
	if (func_408(0) || func_408(1))
	{
		return 1;
	}
	return 0;
}

int func_471(int iParam0)
{
	if (!func_662(iParam0, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_472(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 1;
	}
	return 0;
}

void func_473(int iParam0, int iParam1)
{
	if (!func_100(iParam0))
	{
		return;
	}
	if (!func_292(iParam0, iParam1))
	{
	}
	if (Global_1572887->f_12 == -1)
	{
		(Global_40.f_358[iParam0 /*12*/])->f_5 = ((Global_40.f_358[iParam0 /*12*/])->f_5 || iParam1);
		return;
	}
	(Global_1058888->f_42266[iParam0 /*12*/])->f_5 = ((Global_1058888->f_42266[iParam0 /*12*/])->f_5 || iParam1);
}

void func_474(int iParam0, int iParam1)
{
	if (!func_100(iParam0))
	{
		return;
	}
	if (Global_1572887->f_12 == -1)
	{
		(Global_40.f_358[iParam0 /*12*/])->f_5 = ((Global_40.f_358[iParam0 /*12*/])->f_5 - ((Global_40.f_358[iParam0 /*12*/])->f_5 && iParam1));
		return;
	}
	(Global_1058888->f_42266[iParam0 /*12*/])->f_5 = ((Global_1058888->f_42266[iParam0 /*12*/])->f_5 - ((Global_1058888->f_42266[iParam0 /*12*/])->f_5 && iParam1));
}

void func_475(int iParam0, bool bParam1)
{
	if (!func_100(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_544(func_663(iParam0));
	}
	else
	{
		func_545(func_663(iParam0));
	}
}

void func_476(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_23117[iParam0 /*11*/])->f_2 = iParam1;
		return;
	}
	(Global_1058888->f_40615[iParam0 /*11*/])->f_2 = iParam1;
}

void func_477(int iParam0)
{
	if (!func_124(iParam0))
	{
		return;
	}
	if (func_664(iParam0))
	{
		func_665(iParam0);
	}
	else
	{
		func_666(iParam0);
	}
}

void func_478(int iParam0, int iParam1)
{
	if (!func_97(iParam0))
	{
		return;
	}
	if (!func_667(iParam0, iParam1))
	{
	}
	if (Global_1572887->f_12 == -1)
	{
		Global_40.f_431[iParam0] = (Global_40.f_431[iParam0] || iParam1);
		return;
	}
	Global_1058888->f_42339[iParam0] = (Global_1058888->f_42339[iParam0] || iParam1);
}

int func_479(int iParam0)
{
	if (!func_97(iParam0))
	{
		return 0;
	}
	return func_667(iParam0, 2);
}

void func_480(int iParam0, int iParam1)
{
	if (!func_97(iParam0))
	{
		return;
	}
	if (Global_1572887->f_12 == -1)
	{
		Global_40.f_431[iParam0] = (&Global_40.f_431[iParam0] - (Global_40.f_431[iParam0] && iParam1));
		return;
	}
	Global_1058888->f_42339[iParam0] = (&Global_1058888->f_42339[iParam0] - (Global_1058888->f_42339[iParam0] && iParam1));
}

void func_481(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_97(iParam0))
	{
		return;
	}
	if (iParam0 == 8)
	{
		return;
	}
	iVar0 = func_668(iParam0);
	if (bParam1)
	{
		func_544(iVar0);
	}
	else
	{
		func_545(iVar0);
	}
}

int func_482(int iParam0)
{
	if (!func_100(iParam0))
	{
		return 0;
	}
	if ((Global_40.f_358[iParam0 /*12*/])->f_5 & 2 != 0)
	{
		return 5;
	}
	if (&Global_40.f_358[iParam0 /*12*/] > 0 && PLAYER::GET_WANTED_LEVEL_THRESHOLD(5) > 0)
	{
		return func_669(&(Global_40.f_358[iParam0 /*12*/]));
	}
	return 0;
}

void func_483(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		MAP::_0x563FCB6620523917(func_670(iParam0), -1482012664);
	}
	else if (MAP::_0xE38450DBCBC70E3D(func_670(iParam0), -1305340593) || MAP::_0xE38450DBCBC70E3D(func_670(iParam0), -1482012664))
	{
		MAP::_0x6786D7AFAC3162B3(func_670(iParam0));
	}
}

int func_484(var uParam0)
{
	if (!func_671(uParam0->f_1))
	{
		uParam0->f_2 = func_672(uParam0->f_1, 1, 0, uParam0->f_12, uParam0->f_12.f_1, uParam0->f_12.f_2, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
		if (func_235(uParam0->f_2, 0))
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

int func_485(var uParam0)
{
	int iVar0;

	if (func_235(uParam0->f_3, 0))
	{
		return 1;
	}
	if (!func_567(uParam0->f_1))
	{
		uParam0->f_3 = func_673(&iVar0, uParam0->f_1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0);
		if (func_235(uParam0->f_3, 0) && iVar0 == 2)
		{
			if (!func_174(uParam0->f_15))
			{
				func_349(uParam0->f_3, uParam0->f_15, uParam0->f_18, 2, 1073741824);
				TASK::TASK_STAND_STILL(uParam0->f_3, -1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_3, true);
			}
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_486(var uParam0)
{
	if (!func_674(uParam0->f_1, 0))
	{
		func_675(uParam0->f_1, 1, 0, 0, 1, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(func_676(uParam0->f_1)))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_676(uParam0->f_1), true);
		PED::SET_PED_CONFIG_FLAG(func_676(uParam0->f_1), 168, false);
		_NAMESPACE48::_0x6759BEE6762E140B(func_283(uParam0->f_1));
	}
	else
	{
		return 0;
	}
	uParam0->f_2 = func_676(uParam0->f_1);
	return 1;
}

int func_487(var uParam0, var uParam1, var uParam2)
{
	var uVar0[15];
	var uVar16[1];
	int iVar18;
	int iVar19;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return 1;
	}
	if (*uParam1)
	{
		return 0;
	}
	uVar16[0] = Global_35;
	iVar18 = func_677(&uVar0, &uVar16, 15, uParam0->f_6, 1101004800, 0, 1, 1, uParam0->f_9, 1, 0, -1082130432, 0, 0);
	iVar19 = 0;
	while (iVar19 < iVar18)
	{
		if (!func_678(uParam2, &(uVar0[iVar19])))
		{
			if (*uParam0 == ENTITY::GET_ENTITY_MODEL(&(uVar0[iVar19])))
			{
				uParam0->f_1 = &uVar0[iVar19];
				PED::_0xBD75500141E4725C(uParam0->f_1, 298468673);
				return 1;
			}
		}
		iVar19++;
	}
	STREAMING::REQUEST_MODEL(*uParam0, false);
	if (STREAMING::HAS_MODEL_LOADED(*uParam0))
	{
		uParam0->f_1 = func_679(*uParam0, uParam0->f_6, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		PED::_0xBD75500141E4725C(uParam0->f_1, 298468673);
		uParam0->f_10 = 1;
		*uParam1 = 1;
		return 1;
	}
	return 0;
}

int func_488(var uParam0, var uParam1, var uParam2)
{
	var uVar0[8];
	var uVar9[1];
	int iVar11;
	int iVar12;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return 1;
	}
	if (*uParam1)
	{
		return 0;
	}
	uVar9[0] = *uParam0;
	iVar11 = func_680(&uVar0, &uVar9, 8, uParam0->f_6, 1101004800);
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		if (!func_681(uParam2, &(uVar0[iVar12])))
		{
			uParam0->f_1 = &uVar0[iVar12];
			return 1;
		}
		iVar12++;
	}
	STREAMING::REQUEST_MODEL(*uParam0, false);
	if (STREAMING::HAS_MODEL_LOADED(*uParam0))
	{
		uParam0->f_1 = OBJECT::CREATE_OBJECT_NO_OFFSET(*uParam0, uParam0->f_6, true, true, false, true);
		uParam0->f_9 = 1;
		*uParam1 = 1;
		return 1;
	}
	return 0;
}

int func_489(var uParam0, var uParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return 1;
	}
	if (*uParam1)
	{
		return 0;
	}
	iVar0 = WEAPON::_GET_WEAPONTYPE_MODEL(*uParam0);
	STREAMING::REQUEST_MODEL(iVar0, false);
	if (STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		uParam0->f_1 = WEAPON::_0x9888652B8BA77F73(*uParam0, 100, uParam0->f_6, 1, 1065353216);
		uParam0->f_9 = 1;
		*uParam1 = 1;
		return 1;
	}
	return 0;
}

void func_490(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	func_492(uParam0, iParam1, sParam2, iParam3, iParam4, bParam5);
}

char* func_491(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

void func_492(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	if (iParam3 == 0 && !ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (iParam3 == 0 && (ENTITY::IS_ENTITY_DEAD(iParam1) && !bParam5))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
		}
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		sParam2 = func_682(iParam1);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
		}
		return;
	}
	iVar0 = func_683(uParam0, iParam1);
	if (iVar0 != -1)
	{
		if (!MISC::ARE_STRINGS_EQUAL(&((uParam0->f_13[iVar0 /*12*/])->f_1), sParam2))
		{
		}
		else if ((uParam0->f_13[iVar0 /*12*/])->f_9 != iParam3)
		{
		}
		else if ((uParam0->f_13[iVar0 /*12*/])->f_10 != iParam4)
		{
		}
		else
		{
			return;
		}
	}
	else
	{
		iVar1 = func_684(uParam0, sParam2);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != iParam1)
		{
			func_685(uParam0, iVar1);
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = func_686(uParam0);
	}
	if (iVar0 != -1)
	{
		uParam0->f_13[iVar0 /*12*/] = iParam1;
		StringCopy(&((uParam0->f_13[iVar0 /*12*/])->f_1), sParam2, 64);
		(uParam0->f_13[iVar0 /*12*/])->f_9 = iParam3;
		(uParam0->f_13[iVar0 /*12*/])->f_10 = iParam4;
		if (bParam5)
		{
			func_687(uParam0->f_13[iVar0 /*12*/], 2);
		}
		else
		{
			func_688(uParam0->f_13[iVar0 /*12*/], 2);
		}
	}
}

struct<8> func_493(var uParam0)
{
	return uParam0->f_454;
}

struct<8> func_494()
{
	char cVar0[64];

	StringCopy(&cVar0, "MultiStart", 64);
	return cVar0;
}

int func_495(var uParam0, char* sParam1)
{
	int iVar0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_462[iVar0 /*9*/]) && MISC::ARE_STRINGS_EQUAL(uParam0->f_462[iVar0 /*9*/], sParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_496(var uParam0, char* sParam1)
{
	struct<8> Var0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return false;
	}
	Var0 = { func_317(uParam0) };
	return MISC::ARE_STRINGS_EQUAL(sParam1, &Var0);
}

bool func_497(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

void func_498(var uParam0, int iParam1)
{
	uParam0->f_8 = (uParam0->f_8 || iParam1);
}

void func_499(var uParam0, char* sParam1)
{
	int iVar0;

	if (func_497(uParam0, 8192))
	{
		return;
	}
	if (MISC::_DOES_STRING_EXIST_IN_STRING(sParam1, "cutscene@"))
	{
		iVar0 = MISC::_0x94E8CA3DEE952789(sParam1, "@");
		if (MISC::_0x94E8CA3DEE952789(sParam1, "@") > 2)
		{
			MemCopy(&(uParam0->f_440), {func_689("cutscene@", MISC::_0x5B4A8121A47D844D((iVar0 - 1)), 1, 63)}, 4);
		}
		MISC::_0x3C3C7B1B5EC08764();
	}
	else
	{
		MemCopy(&(uParam0->f_440), {func_689("cutscene@", sParam1, 1, 63)}, 4);
	}
	func_498(uParam0, 8192);
}

Vector3 func_500(var uParam0)
{
	return uParam0->f_5;
}

Vector3 func_501(var uParam0)
{
	var uVar0;
	vector3 vVar8;
	var uVar11;
	vector3 vVar14;

	MemCopy(&uVar0, {func_690(uParam0)}, 8);
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_445))
	{
		uParam0->f_445 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_440), 0, 0, false, true);
	}
	else if (ANIMSCENE::_0x95531A4A20CCE7BC(uParam0->f_445, 0))
	{
		if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(uParam0->f_445, func_519(Global_35), &vVar14, false, 0, 2))
		{
			vVar8 = { vVar14 };
		}
		else
		{
			ANIMSCENE::_0xADF1D53F3B1FE0A7(uParam0->f_445, &vVar8, &uVar11, 2);
		}
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_445);
		return vVar8;
	}
	return 0f, 0f, 0f;
}

void func_502(var uParam0, vector3 vParam1)
{
	if (func_174(vParam1))
	{
		return;
	}
	uParam0->f_5 = { vParam1 };
}

float func_503(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

float func_504(var uParam0)
{
	return uParam0->f_435;
}

void func_505()
{
	struct<4> Var0;

	Global_1946804->f_858 = (Global_1946804->f_858 - 1);
	if (Global_1946804->f_858 <= 0)
	{
		Var0 = 35;
		func_691(Var0);
	}
}

void func_506(var uParam0)
{
	int iVar0;

	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_444))
	{
		return;
	}
	if (!ANIMSCENE::_0x477122B8D05E7968(uParam0->f_444, 1, 0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_462[iVar0 /*9*/]) && (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_444, uParam0->f_462[iVar0 /*9*/]) || ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_444, uParam0->f_462[iVar0 /*9*/])))
		{
			ANIMSCENE::_0xAE6ADA8FE7E84ACC(uParam0->f_444, uParam0->f_462[iVar0 /*9*/]);
		}
		(uParam0->f_462[iVar0 /*9*/])->f_8 = 0;
		iVar0++;
	}
}

void func_507(var uParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_4))
	{
		if (func_497(uParam0, 16))
		{
			POPULATION::_0xA1CFB35069D23C23(uParam0->f_4);
			POPULATION::_0x74C2B3DC0B294102(uParam0->f_4);
			func_692(uParam0);
			PATHFIND::_0xD17672447692478E(uParam0->f_4, 0);
		}
	}
	if (func_497(uParam0, 8))
	{
		VOLUME::_0x43F867EF5C463A53(uParam0->f_4);
		func_508(uParam0, 8, 1);
	}
	uParam0->f_4 = 0;
	func_508(uParam0, 16, 1);
}

void func_508(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_8 = (uParam0->f_8 - (uParam0->f_8 && iParam1));
	if (((iParam1 == 512 && iParam2) && ANIMSCENE::_0x25557E324489393C(uParam0->f_444)) && ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_444))
	{
		ANIMSCENE::_0x8A8208AE92BF87A5(uParam0->f_444);
	}
}

float func_509(var uParam0)
{
	return uParam0->f_434;
}

struct<8> func_510(var uParam0)
{
	return uParam0->f_446;
}

void func_511(var uParam0)
{
	struct<8> Var0;

	Var0 = { func_693() };
	func_318(uParam0, &Var0);
}

void func_512(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_497(uParam0, 16))
	{
		return;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_4) && !func_591(uParam0->f_5, 0f, 0f, 0f))
	{
		uParam0->f_4 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(uParam0->f_5, 0f, 0f, 0f, 5f, 5f, 5f, func_694());
		func_498(uParam0, 8);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_4))
	{
		POPULATION::_0xB56D41A694E42E86(uParam0->f_4, iParam1, iParam4, 0, -1, -1, iParam3);
		POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_4, iParam1, 0, 0, -1, -1, 0);
		func_695(uParam0, uParam0->f_4, 0, 1);
		PATHFIND::_0xC1799FAFD2FDF52B(uParam0->f_4, 0, 0, iParam2);
		func_498(uParam0, 16);
	}
}

void func_513(var uParam0)
{
	if ((!func_497(uParam0, 32768) && ANIMSCENE::_0x25557E324489393C(uParam0->f_444)) && ANIMSCENE::_0x95531A4A20CCE7BC(uParam0->f_444, 0))
	{
		func_696(uParam0);
		func_697(uParam0, 0);
		if (!ANIMSCENE::_0x59606519FF9D3EC2(uParam0->f_444, 1))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_444);
		}
		func_498(uParam0, 32768);
	}
}

bool func_514()
{
	return Global_1946804->f_1497 != Global_1946804->f_2163.f_1;
}

void func_515(int iParam0)
{
	struct<4> Var0;

	if (func_698(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_691(Var0);
}

bool func_516(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_517()
{
	if (func_699(Global_43800))
	{
		func_700(&Global_43800, 0, 0);
	}
}

int func_518(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_13[iVar0 /*12*/])) && &uParam0->f_13[iVar0 /*12*/] == iParam1) && func_701(uParam0->f_13[iVar0 /*12*/], iParam2))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

char* func_519(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return "";
	}
	if (iParam0 == Global_35)
	{
		if (ENTITY::GET_ENTITY_MODEL(Global_35) == 11966224)
		{
			return "John";
		}
		else
		{
			return "Arthur";
		}
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return func_702(iVar0);
}

int func_520(int iParam0)
{
	int iVar0;

	if (func_703(iParam0))
	{
		iVar0 = _NAMESPACE71::_0x59FA676177DBE4C9(iParam0);
		return ((((iVar0 == 4 || iVar0 == 0) || iVar0 == 3) || iVar0 == 5) || iVar0 == 2);
	}
	return 0;
}

bool func_521(int iParam0, int iParam1)
{
	if (iParam1 && !func_699(iParam0))
	{
		return false;
	}
	return !func_704(iParam0, 4);
}

int func_522(int iParam0, bool bParam1)
{
	if (!func_699(Global_43800))
	{
		Global_43800 = func_705("CUTSCENE_SKIP", -842734359, 5, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, -2018976333, 0);
		((*Global_1945938)[Global_43800 /*18*/])->f_16 = &Global_23[3];
		func_706(Global_43800, 0, 1);
		func_707(Global_43800, 6, 1);
		if (bParam1)
		{
			func_707(Global_43800, 14, 1);
		}
	}
	else
	{
		if (!func_521(Global_43800, 0))
		{
			func_708(Global_43800, 1, 1);
		}
		if (func_709(Global_43800, 1) != 0f && iParam0)
		{
			func_706(Global_43800, 1, 1);
		}
		else
		{
			func_706(Global_43800, 0, 1);
		}
		return func_710(Global_43800, 1);
	}
	return 0;
}

bool func_523(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	return func_711(uParam0, iParam1, sParam2, iParam3, iParam4, iParam5);
}

void func_524(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
{
	float fVar0;

	if (Global_1935630->f_12)
	{
		return;
	}
	fVar0 = 1f;
	switch (iParam0)
	{
		case -1871534317:
		case 1140525470:
			fVar0 = 0f;
			break;
		case -1415276238:
		case 1823606944:
			fVar0 = 1.5f;
			break;
		case -530524:
		case 898879241:
			fVar0 = 2f;
			break;
		case -1115154469:
			fVar0 = 3f;
			break;
		case -668482597:
		case 147004056:
			break;
	}
	PED::FORCE_PED_MOTION_STATE(Global_35, iParam0, bParam2, iParam3, false);
	if (bParam4)
	{
		PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), fVar0, iParam1, ENTITY::GET_ENTITY_HEADING(Global_35), bParam6, bParam7);
	}
	else
	{
		PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), fVar0, iParam1, fParam5, bParam6, bParam7);
	}
}

char* func_525(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "DUTCH";
		case 3:
			return "BILLWILLIAMSON";
		case 1:
			return "JOHN";
		case 2:
			return "JavierEscuella";
		case 4:
			return "UNCLE";
		case 5:
			return "HOSEA";
		case 6:
			return "MICAHBELL";
		case 7:
			return "CharlesSmith";
		case 8:
			return "SEAN";
		case 9:
			return "LENNY";
		case 13:
			return "AbigailRoberts";
		case 10:
			return "KIERAN";
		case 14:
			return "JACK";
		case 15:
			return "MARYBETH";
		case 16:
			return "MOLLY";
		case 17:
			return "MrPearson";
		case 18:
			return "STRAUSS";
		case 19:
			return "GRIMSHAW";
		case 20:
			return "KAREN";
		case 21:
			return "SWANSON";
		case 22:
			return "TILLY";
		case 23:
			return "TRELAWNY";
		case 11:
			return "SADIE";
		case 24:
			return "CLEET";
		case 25:
			return "JOE";
		case 26:
			return "EAGLE_FLIES";
		case 12:
			return "DOG";
		default:
			break;
	}
	return "Companion unknown";
}

void func_526(var uParam0)
{
	if (func_674(uParam0->f_1, 0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(func_676(uParam0->f_1)))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_676(uParam0->f_1), false);
			PED::SET_PED_CONFIG_FLAG(func_676(uParam0->f_1), 234, true);
			PED::SET_PED_CONFIG_FLAG(func_676(uParam0->f_1), 168, true);
		}
		func_712(uParam0->f_1, 0, 1, 0, 0);
		_NAMESPACE48::_0x6759BEE6762E140B(func_283(uParam0->f_1));
	}
}

int func_527()
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

bool func_528(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_529(int iParam0)
{
	return iParam0 != 0;
}

int func_530(var uParam0)
{
	return uParam0;
}

bool func_531(int iParam0)
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

int func_532(int iParam0)
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

int func_533(int iParam0)
{
	if (!func_124(iParam0))
	{
		return 0;
	}
	if (func_125(iParam0))
	{
		return -1;
	}
	return (Global_23117[iParam0 /*11*/])->f_3;
}

int func_534(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	int iVar7;

	if (!func_355(iParam0))
	{
		return 0;
	}
	func_713(iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	fVar6 = ((((((BUILTIN::TO_FLOAT(iVar0) / 60f) + BUILTIN::TO_FLOAT(iVar1)) + (BUILTIN::TO_FLOAT(iVar2) * 60f)) + ((BUILTIN::TO_FLOAT(iVar3) * 24f) * 60f)) + (((BUILTIN::TO_FLOAT(iVar4) * 30.4375f) * 24f) * 60f)) + (((BUILTIN::TO_FLOAT(iVar5) * 365.25f) * 24f) * 60f));
	iVar7 = BUILTIN::ROUND(fVar6);
	return iVar7;
}

int func_535(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_536(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_537(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_538(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_714(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_539(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_540(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_541(int iParam0, int iParam1)
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

int func_542(int iParam0)
{
	if (!func_124(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 26:
		case 32:
		case 35:
		case 38:
		case 57:
		case 61:
		case 76:
		case 78:
		case 93:
		case 95:
		case 105:
		case 115:
			return 1;
	}
	return 0;
}

int func_543(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -4613767;
		case 1:
			return 1567162363;
		case 2:
			return 456471693;
		case 3:
			return -1772963474;
		case 4:
			return 1881496386;
		case 5:
			return 711768994;
		case 6:
			return -440834066;
		case 7:
			return -1363847832;
		case 8:
			return 967769300;
		case 9:
			return -1436873944;
		case 10:
			return -1585669139;
		case 11:
			return 16791368;
		case 12:
			return 1452922822;
		case 13:
			return 549538301;
		case 14:
			return 974698954;
		case 15:
			return 445881012;
		case 16:
			return -2043891857;
		case 17:
			return 419656993;
		case 18:
			return -1732457315;
		case 19:
			return 1794318026;
		case 20:
			return 2035159966;
		case 21:
			return 770832805;
		case 22:
			return -1109814766;
		case 24:
			return -1075550363;
		case 23:
			return -1080317735;
		case 25:
			return 2138576151;
		case 26:
			return 1180954297;
		case 27:
			return 783603394;
		case 28:
			return 1162337247;
		case 29:
			return -170458336;
		case 30:
			return 1285083821;
		case 31:
			return -1840907462;
		case 32:
			return 756710130;
		case 33:
			return 388370024;
		case 34:
			return 1092296123;
		case 35:
			return 467491346;
		case 36:
			return -1391584612;
		case 37:
			return -152111346;
		case 38:
			return 1447551317;
		case 39:
			return 153136092;
		case 40:
			return 1304405732;
		case 41:
			return 1074984055;
		case 50:
			return 1087476368;
		case 51:
			return -1768057340;
		case 42:
			return 1218874593;
		case 52:
			return -1438443836;
		case 43:
			return -2036340415;
		case 44:
			return 803939643;
		case 53:
			return -632496195;
		case 45:
			return -965943619;
		case 46:
			return 283532073;
		case 47:
			return -69067491;
		case 48:
			return -1864895118;
		case 54:
			return -1929806571;
		case 55:
			return -698525417;
		case 56:
			return -1149739894;
		case 49:
			return 380507325;
		case 57:
			return 407796241;
		case 58:
			return -152267914;
		case 59:
			return -1675443320;
		case 60:
			return 1940341639;
		case 61:
			return 1846596114;
		case 62:
			return 907708501;
		case 64:
			return 1825644981;
		case 65:
			return 2065937607;
		case 66:
			return -211317417;
		case 67:
			return 1801307910;
		case 68:
			return -4118897;
		case 69:
			return 1853610692;
		case 70:
			return -1574644415;
		case 71:
			return 2133055515;
		case 72:
			return -1413401932;
		case 73:
			return 801090761;
		case 74:
			return 2131218644;
		case 75:
			return 1708823660;
		case 76:
			return 7976942;
		case 77:
			return 2111120505;
		case 78:
			return 176893118;
		case 79:
			return 1179148161;
		case 63:
			return 602306665;
		case 80:
			return 547412068;
		case 81:
			return -1539748801;
		case 82:
			return -1605119912;
		case 83:
			return -884464063;
		case 84:
			return -1420970720;
		case 85:
			return 1017024547;
		case 86:
			return -1204497306;
		case 87:
			return -1621069480;
		case 88:
			return -458604261;
		case 89:
			return -923391614;
		case 90:
			return -689247089;
		case 91:
			return 44049568;
		case 92:
			return 1350259552;
		case 93:
			return -61661574;
		case 94:
			return -725338054;
		case 95:
			return -770123507;
		case 96:
			return 1322486734;
		case 97:
			return -460939553;
		case 98:
			return -1451863552;
		case 99:
			return 173833068;
		case 100:
			return -1681004136;
		case 101:
			return 713715980;
		case 102:
			return -31204969;
		case 103:
			return -1720064790;
		case 104:
			return -532172775;
		case 105:
			return -739067737;
		case 106:
			return -1203133835;
		case 107:
			return -1947411598;
		case 109:
			return -1298718762;
		case 110:
			return -595083064;
		case 111:
			return 884833917;
		case 112:
			return 2141950651;
		case 108:
			return -1049753365;
		case 113:
			return -1437650729;
		case 126:
			return 672925454;
		case 127:
			return 846062774;
		case 120:
			return 1369756178;
		case 121:
			return -736172423;
		case 122:
			return 1597070291;
		case 124:
			return -159501564;
		case 123:
			return -1438809608;
		case 125:
			return -102682392;
		case 114:
			return -81068979;
		case 115:
			return 227618407;
		case 116:
			return 2106043438;
		case 129:
			return -1868356491;
		case 117:
			return -1380256064;
		case 118:
			return -2118469183;
		case 119:
			return -558997834;
		case 128:
			return 658339366;
		default:
			break;
	}
	return 0;
}

void func_544(int iParam0)
{
	int iVar0;

	if (func_715(iParam0) == 57)
	{
		MAP::_0x563FCB6620523917(-1145496915, -1482012664);
		MAP::_0x563FCB6620523917(-1043953850, -1482012664);
		MAP::_0x563FCB6620523917(-1783502982, -1482012664);
	}
	else
	{
		iVar0 = -1482012664;
		if (((func_716(iParam0) == 4 || func_716(iParam0) == 12) || func_127(func_716(iParam0)) == 4) || (func_667(func_716(iParam0), 8) && ((func_716(iParam0) == 2 || func_716(iParam0) == 0) || func_716(iParam0) == 10)))
		{
			iVar0 = -1305340593;
		}
		MAP::_0x563FCB6620523917(iParam0, iVar0);
	}
}

void func_545(int iParam0)
{
	if (func_715(iParam0) == 57)
	{
		MAP::_0x6786D7AFAC3162B3(-1145496915);
		MAP::_0x6786D7AFAC3162B3(-1043953850);
		MAP::_0x6786D7AFAC3162B3(-1783502982);
	}
	else if (MAP::_0xE38450DBCBC70E3D(iParam0, -1305340593) || MAP::_0xE38450DBCBC70E3D(iParam0, -1482012664))
	{
		MAP::_0x6786D7AFAC3162B3(iParam0);
	}
}

float func_546(int iParam0, int iParam1, bool bParam2, int iParam3)
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

char* func_547(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return "script@proc@jailcells@annesburg";
		case 0:
			return "script@proc@jailcells@valentine";
		case 2:
			return "script@proc@jailcells@rhodes";
		case 7:
			return "script@proc@jailcells@saintdenis";
		case 9:
			return "script@proc@jailcells@strawberry";
		case 5:
			return "script@proc@jailcells@annesburg_john";
		case 1:
			return "script@proc@jailcells@valentine_john";
		case 8:
			return "script@proc@jailcells@saintdenis_john";
		case 3:
			return "script@proc@jailcells@rhodes_john";
		case 10:
			return "script@proc@jailcells@strawberry_john";
		case 6:
			return "script@proc@jailcells@blackwater_john";
		case 11:
			return "script@proc@jailcells@tumbleweed_john";
		default:
			break;
	}
	return "FAIL";
}

int func_548(var uParam0, char* sParam1, char* sParam2)
{
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam1, 0, sParam2, false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
	}
	if (!ANIMSCENE::_0x477122B8D05E7968(*uParam0, 1, 0))
	{
		return 0;
	}
	return 1;
}

bool func_549(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_566(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0 /*60*/] && iParam1) != 0;
}

int func_550(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return 0;
	}
	return 1;
}

void func_551(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_566(iParam0))
		{
			return;
		}
	}
	func_717(iParam1, &iVar0, &iVar1);
	MISC::SET_BIT(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0], iVar1);
}

void func_552(int iParam0, bool bParam1)
{
	if (!func_566(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_718(&(((*Global_1360165)[iParam0 /*1157*/])->f_12), 1))
		{
			func_553(iParam0, 1, 0);
		}
	}
	func_553(iParam0, 16, bParam1);
}

void func_553(int iParam0, int iParam1, bool bParam2)
{
	if (!func_566(iParam0))
	{
		return;
	}
	func_719(&(((*Global_1360165)[iParam0 /*1157*/])->f_13), iParam1, bParam2);
}

void func_554(int iParam0)
{
	func_553(iParam0, 8, 0);
}

void func_555(int iParam0)
{
	func_551(iParam0, 36, 1);
}

void func_556(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_566(iParam0))
		{
			return;
		}
	}
	func_717(iParam1, &iVar0, &iVar1);
	MISC::CLEAR_BIT(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0], iVar1);
}

int func_557(int iParam0, bool bParam1)
{
	if (!func_550(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_NAMESPACE48::_0x800DF3FC913355F3(((*Global_1360165)[iParam0 /*1157*/])->f_1))
		{
			func_720(iParam0);
		}
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_1;
}

bool func_558(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_566(iParam0))
		{
			return false;
		}
	}
	func_717(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0]), iVar1);
}

void func_559(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (func_550(iParam0))
	{
		iVar1 = func_721(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			iVar0 = PED::GET_PED_MAX_HEALTH(iVar1);
			PED::SET_PED_CONFIG_FLAG(iVar1, 179, true);
			func_722(iParam0);
		}
	}
	if (func_558(iParam0, 5, 1))
	{
		PED::SET_PED_CONFIG_FLAG(func_721(iParam0), 137, true);
	}
}

void func_560(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_566(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_556(iParam0, 50, 1);
		func_556(iParam0, 48, 1);
		func_556(iParam0, 49, 1);
		func_556(iParam0, 51, 1);
		func_556(iParam0, 52, 1);
		func_556(iParam0, 54, 1);
		func_556(iParam0, 55, 1);
	}
	else
	{
		func_551(iParam0, 50, 1);
		func_551(iParam0, 48, 1);
		func_551(iParam0, 49, 1);
		func_551(iParam0, 51, 1);
		if (bParam3)
		{
			func_551(iParam0, 54, 1);
		}
		else
		{
			func_556(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_551(iParam0, 52, 1);
			if (bParam3)
			{
				func_551(iParam0, 55, 1);
			}
		}
		else
		{
			func_556(iParam0, 52, 1);
			if (!bParam3)
			{
				func_556(iParam0, 55, 1);
			}
		}
	}
}

void func_561(int iParam0, bool bParam1)
{
	if (!func_566(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(func_721(iParam0), 204, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(func_721(iParam0), 204, false);
	}
}

void func_562(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_563(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	var uVar0;
	int iVar1;

	if (!func_550(iParam0))
	{
		return;
	}
	if (func_371(iParam0))
	{
		if (!func_671(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_558(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	uVar0 = func_557(iParam0, 0);
	if (!MISC::_0x716F17F8A0419F95(uVar0))
	{
		return;
	}
	iVar1 = func_721(iParam0);
	if (((ENTITY::DOES_ENTITY_EXIST(iVar1) && func_723(iParam0) < 10000f) && !bParam3) && !CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::IS_ENTITY_ATTACHED(iVar1))
	{
		if (((TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar1, 1) || TASK::_0x0C3CB2E600C8977D(iVar1, 1)) || PED::IS_PED_ON_MOUNT(iVar1)) || PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
		{
			PED::_0xF1C03A5352243A30(iVar1);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar1, 1, 1);
		}
		ENTITY::DETACH_ENTITY(iVar1, true, true);
	}
	if (bParam4)
	{
		func_551(iParam0, 2, 1);
	}
	else
	{
		func_724(iParam0);
		func_551(iParam0, 1, 1);
	}
}

void func_564(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_550(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (&Global_40.f_4942[iParam0 /*60*/] - (Global_40.f_4942[iParam0 /*60*/] && iParam1));
}

int func_565(int iParam0)
{
	if (!func_550(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(((*Global_1360165)[iParam0 /*1157*/])->f_70))
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_70 = 0;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_70;
}

bool func_566(int iParam0)
{
	return iParam0 > -1;
}

bool func_567(int iParam0)
{
	if (!func_566(iParam0))
	{
		return false;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_568(int iParam0, int iParam1, bool bParam2)
{
	if (!func_566(iParam0))
	{
		return;
	}
	if (bParam2)
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 = (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 || iParam1);
	}
	else
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 = (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 - (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 && iParam1));
	}
}

int func_569(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_566(iParam0))
	{
		return 0;
	}
	iVar0 = func_565(iParam0);
	if (func_235(iVar0, 0))
	{
		if (func_235(PED::_0xB676EFDA03DADA52(iVar0, 0), 0) && !bParam4)
		{
			return 0;
		}
		if ((iParam1 || !func_373(iParam0)) || func_567(iParam0))
		{
			if (iParam2 || !(ENTITY::IS_ENTITY_ON_SCREEN(iVar0) && func_725(PLAYER::PLAYER_PED_ID(), iVar0, 1) < 10000f))
			{
				iVar1 = func_726(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
					}
					func_727(iParam0);
					_NAMESPACE48::_0x7B204F88F6C3D287(func_728(iParam0, 0));
					_NAMESPACE48::_0xFCC6DB8DBE709BC8(func_728(iParam0, 0));
					func_729(iParam0);
				}
			}
			else
			{
				if (func_549(iParam0, 32768, 1))
				{
					iVar2 = func_728(iParam0, 0);
					_NAMESPACE48::_0xB65E7F733956CF25(iVar2);
					_NAMESPACE48::_0xFCC6DB8DBE709BC8(iVar2);
				}
				else
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			}
		}
		else
		{
			return 0;
		}
	}
	else if (bParam3)
	{
		if (func_235(((*Global_1360165)[iParam0 /*1157*/])->f_124, 0))
		{
			if (func_549(iParam0, 32768, 1))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(((*Global_1360165)[iParam0 /*1157*/])->f_124))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(((*Global_1360165)[iParam0 /*1157*/])->f_124, true, true);
				}
				func_727(iParam0);
				_NAMESPACE48::_0x7B204F88F6C3D287(func_728(iParam0, 0));
				_NAMESPACE48::_0xFCC6DB8DBE709BC8(func_728(iParam0, 0));
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(((*Global_1360165)[iParam0 /*1157*/])->f_124, true, true);
				func_727(iParam0);
				PED::DELETE_PED(&(((*Global_1360165)[iParam0 /*1157*/])->f_124));
			}
		}
	}
	((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 = 0;
	func_730(iParam0, 0);
	return 1;
}

int func_570(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

void func_571(int iParam0, int iParam1)
{
	iParam0 = func_570(iParam0);
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

void func_572()
{
	if (func_601(0))
	{
		func_731(0);
	}
	if (func_601(1))
	{
		func_731(1);
	}
	if (func_601(5))
	{
		func_731(5);
	}
	if (func_601(6))
	{
		func_732(6);
	}
}

void func_573(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &Var0, 2, 2);
}

int func_574()
{
	float fVar0;

	fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
	if (fVar0 < 0.01f)
	{
		return 19;
	}
	if (fVar0 < 0.16f)
	{
		return 15;
	}
	if (fVar0 < 0.31f)
	{
		return 17;
	}
	if (fVar0 < 0.46f)
	{
		return 16;
	}
	if (fVar0 < 0.61f)
	{
		return 18;
	}
	return 0;
}

int func_575(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 112;
		case 2:
			return 113;
		case 3:
			return 2;
		case 4:
			return 3;
		case 5:
			return 4;
		case 6:
			return 5;
		case 8:
			return 7;
		case 9:
			return 8;
		case 10:
			return 9;
		case 11:
			return 10;
		case 12:
			return 11;
		case 15:
			return 12;
		case 16:
			return 13;
		case 17:
			return 15;
		case 19:
			return 17;
		case 20:
			return 18;
		case 21:
			return 19;
		case 22:
			return 20;
		case 23:
			return 21;
		case 25:
			return 23;
		case 26:
			return 25;
		case 27:
			return 26;
		case 28:
			return 62;
		case 29:
			return 27;
		case 49:
			return 28;
		case 30:
			return 29;
		case 31:
			return 30;
		case 32:
			return 31;
		case 120:
			return 32;
		case 124:
			return 33;
		case 125:
			return 34;
		case 33:
			return 35;
		case 83:
			return 40;
		case 35:
			return 42;
		case 36:
			return 43;
		case 89:
			return 44;
		case 115:
			return 46;
		case 37:
			return 47;
		case 38:
			return 48;
		case 39:
			return 49;
		case 40:
			return 50;
		case 50:
			return 51;
		case 42:
			return 52;
		case 52:
			return 53;
		case 43:
			return 54;
		case 45:
			return 57;
		case 48:
			return 61;
		case 56:
			return 63;
		case 57:
			return 64;
		case 58:
			return 65;
		case 59:
			return 66;
		case 60:
			return 67;
		case 61:
			return 68;
		case 126:
			return 69;
		case 127:
			return 70;
		case 62:
			return 71;
		case 77:
			return 72;
		case 64:
			return 73;
		case 65:
			return 74;
		case 67:
			return 76;
		case 68:
			return 78;
		case 69:
			return 79;
		case 70:
			return 80;
		case 71:
			return 81;
		case 72:
			return 82;
		case 75:
			return 84;
		case 76:
			return 85;
		case 117:
			return 86;
		case 78:
			return 87;
		case 79:
			return 88;
		case 80:
			return 90;
		case 81:
			return 91;
		case 82:
			return 92;
		case 87:
			return 96;
		case 88:
			return 97;
		case 91:
			return 98;
		case 92:
			return 99;
		case 93:
			return 100;
		case 94:
			return 101;
		case 95:
			return 102;
		case 96:
			return 103;
		case 97:
			return 104;
		case 98:
			return 105;
		case 99:
			return 106;
		case 100:
			return 107;
		case 104:
			return 114;
		case 105:
			return 115;
		case 107:
			return 118;
		case 109:
			return 119;
		case 110:
			return 120;
		case 111:
			return 121;
		case 112:
			return 122;
		case 128:
			return 123;
		default:
			break;
	}
	return 0;
}

void func_576(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;

	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

int func_577(int iParam0)
{
	struct<5> Var0;

	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_1898164->f_162 == 0)
	{
		return 0;
	}
	if (Global_1898164->f_162 == 1)
	{
		Global_1898164->f_162 = 0;
		*(Global_1898164->f_1[0 /*5*/]) = { Var0 };
		return 1;
	}
	*(Global_1898164->f_1[iParam0 /*5*/]) = { Var0 };
	Global_1898164->f_162 = (Global_1898164->f_162 - 1);
	func_450(iParam0, Global_1898164->f_162);
	return 1;
}

var func_578()
{
	return Global_40.f_11095.f_35;
}

float func_579(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_580(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_733(bParam1);
	}
}

void func_581(int iParam0)
{
	_NAMESPACE84::_0x74BCCEB233AD95B2(-156028329, iParam0);
}

char* func_582(int iParam0)
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

int func_583(var uParam0)
{
	vector3 vVar0;

	if (!func_734(23, &vVar0))
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

int func_584(int iParam0, var uParam1, var uParam2)
{
	struct<4> Var0;
	var uVar5;

	if (!func_734(23, &Var0))
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

int func_585(int iParam0)
{
	return iParam0;
}

int func_586(int iParam0)
{
	vector3 vVar0;

	if (!func_425(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_587()
{
	int iVar0;

	iVar0 = func_390();
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

void func_588(char* sParam0, char* sParam1, int iParam2)
{
	_NAMESPACE84::_0x74BCCEB233AD95B2(-466562563, MISC::GET_HASH_KEY(sParam0));
	_NAMESPACE84::_0x74BCCEB233AD95B2(1885309238, MISC::GET_HASH_KEY(sParam1));
	_NAMESPACE84::_0x74BCCEB233AD95B2(-826961056, iParam2);
}

int func_589(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return 0;
	}
	return 1;
}

int func_590(int iParam0, var uParam1, var uParam2)
{
	if (!func_589(iParam0))
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

bool func_591(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_592(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	if (Global_1946804->f_2535.f_1 <= 0)
	{
		return 0;
	}
	if (iParam0 == 0)
	{
		Global_1946804->f_2535.f_2 = 0;
		Global_1946804->f_2535.f_1 = 0;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			*(Global_1946804->f_2535.f_43[iVar0 /*2*/]) = { Var2 };
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < 39)
		{
			Global_1946804->f_2535.f_3[iVar1] = 0;
			iVar1++;
		}
		return 1;
	}
	iVar0 = func_735(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	Global_1946804->f_2535.f_2 = (Global_1946804->f_2535.f_2 - (Global_1946804->f_2535.f_2 && (Global_1946804->f_2535.f_43[iVar0 /*2*/])->f_1));
	iVar1 = 0;
	while (iVar1 < 39)
	{
		if (func_736(iVar1, (Global_1946804->f_2535.f_43[iVar0 /*2*/])->f_1))
		{
			func_737(iVar1, (Global_1946804->f_2535.f_43[iVar0 /*2*/])->f_1);
		}
		iVar1++;
	}
	Global_1946804->f_2535.f_1 = (Global_1946804->f_2535.f_1 - 1);
	*(Global_1946804->f_2535.f_43[iVar0 /*2*/]) = { *(Global_1946804->f_2535.f_43[Global_1946804->f_2535.f_1 /*2*/]) };
	(Global_1946804->f_2535.f_43[Global_1946804->f_2535.f_1 /*2*/])->f_1 = 0;
	Global_1946804->f_2535.f_43[Global_1946804->f_2535.f_1 /*2*/] = 0;
	return 1;
}

int func_593(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (iParam1 == 0)
	{
		iParam1 = -1;
	}
	if (!bParam2)
	{
		if (PED::IS_PED_A_PLAYER(iParam0))
		{
			func_639(14, iParam1, 0, 0, 0);
		}
		else
		{
			func_639(14, iParam1, 1, iParam0, 0);
		}
		return 1;
	}
	if (!func_738(0))
	{
	}
	func_641(&(Global_1946804->f_1497), iParam0, 1, iParam1, 1, iParam3, 1);
	return 1;
}

int func_594(int iParam0)
{
	iParam0 = func_570(iParam0);
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

void func_595(int iParam0)
{
	int iVar0;
	int iVar1;

	iParam0 = func_570(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_601(iParam0))
	{
		return;
	}
	iVar0 = func_600(iParam0);
	func_739(iParam0);
	if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
	if (PED::_0xAA9F048DCF69B6DC(iVar1))
	{
		if (!func_740(iVar1))
		{
			PED::SET_PED_MODEL_IS_SUPPRESSED(iVar1, false);
		}
	}
	PED::DELETE_PED(&iVar0);
	func_741(iParam0, 0);
	func_381(iParam0);
}

void func_596(int iParam0)
{
	struct<2> Var0;
	int iVar2;
	int iVar3;

	iParam0 = func_570(iParam0);
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
	func_742(&Var0);
	func_743(iParam0, Var0);
	func_744(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_15));
	func_745(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_298));
	func_746(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_356));
	func_747(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_748(iVar2, (Global_40.f_1095.f_1[iParam0 /*436*/])->f_398[iVar2 /*4*/]);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_749(iVar3, (Global_40.f_1095.f_1[iParam0 /*436*/])->f_407[iVar3 /*4*/]);
		iVar3++;
	}
	func_750(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_420));
	func_751(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_422));
	func_752(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_425));
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

void func_597(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_598(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

int func_599(vector3 vParam0)
{
	return func_753(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

int func_600(int iParam0)
{
	iParam0 = func_570(iParam0);
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

int func_601(int iParam0)
{
	iParam0 = func_570(iParam0);
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

int func_602(int iParam0)
{
	int iVar0;

	iParam0 = func_570(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_601(iParam0))
	{
		return 0;
	}
	iVar0 = func_600(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_603(int iParam0)
{
	int iVar0;

	iParam0 = func_570(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_601(iParam0))
	{
		return 0;
	}
	iVar0 = func_600(iParam0);
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

void func_604(int iParam0)
{
	int iVar0;

	iParam0 = func_570(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_601(iParam0))
	{
		return;
	}
	iVar0 = func_600(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	ENTITY::_SET_ENTITY_HEALTH(iVar0, 0, 0);
}

void func_605(int iParam0, int iParam1)
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
	func_732(iParam0);
	func_732(iParam0);
	func_754(iParam0, iParam1);
	func_755(iParam0, iParam1);
	func_756(iParam0, iParam1);
	iVar1 = func_600(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_757(iVar1);
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
	iVar3 = func_600(iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_757(iVar3);
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
	func_572();
}

int func_606()
{
	int iVar0;

	iVar0 = func_758();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 1;
	}
	return 0;
}

void func_607()
{
	int iVar0;

	iVar0 = func_758();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	OBJECT::DELETE_OBJECT(&iVar0);
	func_759(0);
}

void func_608(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

int func_609(int iParam0)
{
	iParam0 = func_570(iParam0);
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

int func_610(int iParam0)
{
	iParam0 = func_570(iParam0);
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

void func_611(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;

	iParam0 = func_570(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_760(&uVar0, &uVar1, &uVar2);
	func_761(iParam0, uVar0);
	func_762(iParam0, uVar1);
	func_763(iParam0, uVar2);
	func_764(iParam0, 1);
	func_765(iParam0, 1);
}

void func_612(int iParam0)
{
	iParam0 = func_570(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_766(iParam0, 1);
}

void func_613(int iParam0, vector3 vParam1, var uParam4)
{
	iParam0 = func_570(iParam0);
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

int func_614(int iParam0)
{
	iParam0 = func_570(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return func_767(iParam0, 1);
}

struct<2> func_615(int iParam0)
{
	struct<2> Var0;
	var uVar2;
	var uVar3;

	iParam0 = func_570(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!func_768(iParam0, &uVar2))
	{
	}
	if (!func_769(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<6> func_616()
{
	struct<6> Var0;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;

	if (func_770(-997150586, &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_770(-1189569496, &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_770(325139909, &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_770(1310070322, &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_770(986998820, &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_770(-415648720, &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

void func_617(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_771(iParam0);
	func_772(iParam0, uParam1);
	func_773(iParam0);
	func_774(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_775(iParam0, iParam3, 0);
	}
	PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 1);
}

void func_618(int iParam0)
{
	iParam0 = func_570(iParam0);
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

int func_619()
{
	if (Global_1572887->f_12 == -1)
	{
		return 0;
	}
	return Global_1058888->f_4;
}

bool func_620(int iParam0)
{
	return func_621(23, iParam0);
}

int func_621(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_776(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_777())
	{
		return func_776(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1225638->f_21[iParam1])
	{
		return func_776(&(((*Global_1108178)[iParam1 /*37*/])->f_4), iVar0, 5);
	}
	return 0;
}

void func_622(int iParam0, int iParam1)
{
	if (!func_124(iParam0))
	{
		return;
	}
	((*Global_1888801)[iParam0 /*35*/])->f_19 = iParam1;
}

void func_623(int iParam0)
{
	Global_1894899 = (Global_1894899 || iParam0);
}

void func_624(int iParam0)
{
	Global_1894899 = (&Global_1894899 - (Global_1894899 && iParam0));
}

bool func_625()
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 150)
	{
		if (func_271(iVar1, 1))
		{
			if (SCRIPTS::DOES_SCRIPT_EXIST(&(((*Global_1888801)[iVar1 /*35*/])->f_26)))
			{
				SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(((*Global_1888801)[iVar1 /*35*/])->f_26));
			}
		}
		if (((*Global_1888801)[iVar1 /*35*/])->f_9 != 0)
		{
			if (SCRIPTS::IS_THREAD_ACTIVE(((*Global_1888801)[iVar1 /*35*/])->f_9, false))
			{
				if (func_106() == -1)
				{
					PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(((*Global_1888801)[iVar1 /*35*/])->f_9, 523);
				}
				else if (!SCRIPTS::_0x30BED53646C86D11(((*Global_1888801)[iVar1 /*35*/])->f_9))
				{
					SCRIPTS::_0x7DE4643157AD646C(((*Global_1888801)[iVar1 /*35*/])->f_9);
				}
			}
			else if (func_271(iVar1, 2))
			{
				if (func_106() == -1)
				{
					PLAYER::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME(&(((*Global_1888801)[iVar1 /*35*/])->f_26), 523);
				}
				else
				{
					SCRIPTS::_0x7423F7835770F619(MISC::GET_HASH_KEY(&(((*Global_1888801)[iVar1 /*35*/])->f_26)));
				}
			}
			if (!SCRIPTS::_DOES_THREAD_EXIST(((*Global_1888801)[iVar1 /*35*/])->f_9))
			{
				((*Global_1888801)[iVar1 /*35*/])->f_9 = 0;
				func_359(iVar1, 11);
			}
			else
			{
				bVar0 = true;
			}
		}
		iVar1++;
	}
	return !bVar0;
}

bool func_626(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_627(var uParam0)
{
	func_778(uParam0, 0f);
}

bool func_628(var uParam0)
{
	return func_626(*uParam0, 2);
}

float func_629()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

int func_630(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if ((Global_1946804->f_57[iVar0 /*11*/])->f_8 == iParam0)
		{
			return func_779(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

bool func_631()
{
	int iVar0;

	iVar0 = &Global_1946804->f_529[9];
	iVar0 = (&Global_1946804->f_529[4] + iVar0);
	iVar0 = (&Global_1946804->f_529[10] + iVar0);
	iVar0 = (&Global_1946804->f_529[1] + iVar0);
	iVar0 = (&Global_1946804->f_529[2] + iVar0);
	iVar0 = (&Global_1946804->f_529[6] + iVar0);
	iVar0 = (&Global_1946804->f_529[29] + iVar0);
	iVar0 = (&Global_1946804->f_529[26] + iVar0);
	iVar0 = (&Global_1946804->f_529[18] + iVar0);
	iVar0 = (&Global_1946804->f_529[19] + iVar0);
	return iVar0 > 0;
}

int func_632(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_425(iParam0, 0))
	{
		return 0;
	}
	if (Global_1935630->f_12)
	{
		return 0;
	}
	iVar0 = func_780(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_781("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_782(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_783(Var4.f_4))
			{
			}
			else if (WEAPON::_0x5C2EA6C44F515F34(Var4.f_4) == iVar0)
			{
				func_784(iVar1);
				return 1;
			}
			iVar3++;
		}
		func_784(iVar1);
	}
	return 0;
}

int func_633(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_425(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_586(iParam0);
	if (iVar0 == 307971639 || (iParam1 && iVar0 == -427144552))
	{
		iVar1 = func_780(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_785(iParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_658(bParam2), iParam0, 0);
	return iVar2;
}

int func_634()
{
	int iVar0;
	int iVar1;

	if (PED::_0xA911EE21EDF69DAF(Global_35))
	{
		return 1;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false))
	{
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, true, 1, false))
	{
	}
	if (iVar1 == joaat("weapon_unarmed"))
	{
		if (iVar0 == joaat("weapon_unarmed"))
		{
			return 1;
		}
		else if ((((WEAPON::IS_WEAPON_VALID(iVar0) && WEAPON::_0x0556E9D2ECF39D01(iVar0)) && !func_786(iVar0)) && !PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true)) && !(PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && !CAM::_0xA24C1D341C6E0D53(1, 0, 0)))
		{
			return 3;
		}
		else if (iVar0 == joaat("weapon_kit_binoculars"))
		{
			return 1;
		}
		else if ((WEAPON::IS_WEAPON_VALID(iVar0) && func_786(iVar0)) || iVar0 == joaat("weapon_lasso"))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (iVar0 == joaat("weapon_unarmed"))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_635(var uParam0)
{
	int iVar0;

	Global_1946804->f_2535.f_43[Global_1946804->f_2535.f_1 /*2*/] = uParam0;
	iVar0 = Global_1946804->f_2535.f_2 ^ -1;
	iVar0 = (iVar0 && -iVar0);
	Global_1946804->f_2535.f_2 = (Global_1946804->f_2535.f_2 || iVar0);
	(Global_1946804->f_2535.f_43[Global_1946804->f_2535.f_1 /*2*/])->f_1 = iVar0;
	Global_1946804->f_2535.f_1++;
	return iVar0;
}

int func_636(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -696754231)
	{
		iVar0 = 1742327865;
		if (func_423(func_787(iVar0)) != 81053684)
		{
			return 0;
		}
	}
	else
	{
		iVar0 = iParam0;
	}
	*iParam1 = func_422(iVar0, 1);
	return 1;
}

void func_637(int iParam0, var uParam1)
{
	Global_1946804->f_2535.f_3[iParam0] = (Global_1946804->f_2535.f_3[iParam0] || uParam1);
}

int func_638(int iParam0)
{
	switch (iParam0)
	{
		case 708211766:
			return 1;
		case -1815871154:
			return 2;
		case 1053922635:
			return 4;
		case -1248203249:
			return 8;
		case -1275860049:
			return 16;
		case -473313046:
			return 32;
		case 1009605579:
			return 64;
		case -92538845:
			return 128;
		case 350097565:
			return 256;
		case 346761890:
			return 512;
		case -915377750:
			return 1024;
		case -1283403230:
			return 2048;
		case 1024778115:
			return 4096;
		case 75507907:
			return 8192;
		case -1678578495:
			return 16384;
		case -1925540957:
			return 32768;
		case -2125161702:
			return 131072;
		case 1929486675:
			return 262144;
		case -1932005642:
			return 65536;
		case 315750675:
			return 524288;
		case -376594188:
			return -1;
		case -663436545:
			return 112;
		case 1042019528:
			return 1136;
		case -141044514:
			return 4208;
		case 884232794:
			return 8304;
		case 836721350:
			return 20480;
		case -1062102573:
			return 32833;
		case -884591393:
			return 96;
		case -1886898087:
			return 16496;
		case -1674046782:
			return 139376;
		case 1481630954:
			return 262256;
		case -366477279:
			return 0;
		default:
			break;
	}
	return 0;
}

void func_639(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;

	if (bParam4)
	{
		func_788(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_789(Var0);
}

int func_640(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_1946804->f_2535.f_1 <= 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar2 = func_779(iVar0, 1);
		if (func_790(iVar2, 2))
		{
		}
		else if (&Global_1946804->f_2535.f_3[iVar0] == 0)
		{
		}
		else
		{
			if (iParam0 && func_791(iVar0) == -1)
			{
				func_792(iVar0, 0);
				func_793(Global_1946804->f_2589.f_2[(Global_1946804->f_2589 - 1) /*2*/], 2, 6);
			}
			func_794(iVar2, 2, 6);
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 > 0)
	{
		return 1;
	}
	return 0;
}

void func_641(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	bVar4 = func_106() != -1;
	Global_1946804->f_857 = 0;
	if (iParam3 == -1 && bParam6)
	{
		PED::_0x0BFA1BD465CDFEFD(iParam1);
		if (!bVar4)
		{
			if (Global_1347477->f_189 != 0)
			{
				PED::_0x1902C4CFCC5BE57C(iParam1, Global_1347477->f_189);
			}
			if ((Global_1946804->f_1 == -2125499975 || Global_1946804->f_1 == -449205311) && Global_1347477->f_190 != 0)
			{
				PED::_0x1902C4CFCC5BE57C(iParam1, Global_1347477->f_190);
			}
			func_788(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_795(iParam1, 29, bVar4, 1, 0);
			func_795(iParam1, 31, bVar4, 1, 0);
			func_795(iParam1, 30, bVar4, 1, 0);
			func_795(iParam1, 22, bVar4, 1, 0);
			func_795(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_796(32768) && func_790(1108822547, 8)) && func_797(10, iParam3))
	{
		func_798(iParam1, 0, 1);
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar1 = &Global_1946804->f_57.f_430[iVar0];
		if (iVar1 <= -1 || iVar1 >= 39)
		{
		}
		else
		{
			iVar3 = func_779(iVar1, 1);
			if (func_790(iVar3, 8))
			{
			}
			else if (&(Global_1946804->f_57[iVar1 /*11*/])->f_2[0] == -1802376732 || &uParam0->f_1[iVar1 /*3*/] == 0)
			{
			}
			else
			{
				iVar2 = &uParam0->f_1[iVar1 /*3*/];
				if (!func_797(iVar1, iParam3))
				{
				}
				else if ((func_790(iVar3, 6) || &uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/]) || (uParam0->f_1[iVar1 /*3*/])->f_1 == 289238755)
				{
					if (!func_790(iVar3, 1) || bParam2)
					{
						Global_1946804->f_857++;
						if (!bParam6)
						{
							func_795(iParam1, iVar1, bVar4, 1, 0);
						}
						if ((uParam0->f_1[iVar1 /*3*/])->f_1 == 289238755)
						{
							(Global_1946804->f_2456[iVar1 /*2*/])->f_1 = 289238755;
						}
						func_794(iVar3, 1, 6);
					}
				}
				else
				{
					if (!bParam6)
					{
						if ((!bParam2 && &uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_2456[iVar1 /*2*/]) && (uParam0->f_1[iVar1 /*3*/])->f_1 == (Global_1946804->f_2456[iVar1 /*2*/])->f_1)
						{
						}
						else
						{
							if ((Global_1946804->f_57[iVar1 /*11*/])->f_1 > 1)
							{
								func_795(iParam1, iVar1, bVar4, 1, &(uParam0->f_1[iVar1 /*3*/]));
							}
							Global_1946804->f_2456[iVar1 /*2*/] = &uParam0->f_1[iVar1 /*3*/];
							(Global_1946804->f_2456[iVar1 /*2*/])->f_1 = (uParam0->f_1[iVar1 /*3*/])->f_1;
							if (func_790(iVar3, 1))
							{
								func_799(iVar3, 1, 6);
							}
							Global_1946804->f_857++;
							PED::_SET_PED_COMPONENT_ENABLED(iParam1, iVar2, false, bVar4, false);
							if ((uParam0->f_1[iVar1 /*3*/])->f_1 != 0)
							{
								PED::_0x66B957AAC2EAAEAB(iParam1, iVar2, (uParam0->f_1[iVar1 /*3*/])->f_1, 0, bVar4, 1);
							}
						}
						iVar0++;
						if (Global_1946804->f_857 <= 0)
						{
							return;
						}
						if (bParam4)
						{
							PED::_0xAAB86462966168CE(iParam1, bVar4);
							PED::_0xCC8CA3E88256E58F(iParam1, 0, 1, 1, 1, iParam5);
						}
					}
				}
			}
		}
	}

int func_642(int iParam0)
{
	int iVar0;

	iVar0 = func_443(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_800(iVar0);
}

int func_643(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	if (Global_1058888->f_40501 >= 32)
	{
		return -1;
	}
	Var0 = -1;
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	if (Global_1058888->f_40501 == 0)
	{
		*(Global_1058888->f_40501.f_1[Global_1058888->f_40501 /*2*/]) = { Var0 };
		Global_1058888->f_40501++;
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < Global_1058888->f_40501)
	{
		if (iParam0 == &Global_1058888->f_40501.f_1[iVar2 /*2*/])
		{
			*(Global_1058888->f_40501.f_1[iVar2 /*2*/]) = { Var0 };
			return iVar2;
		}
		else if (iParam0 > &Global_1058888->f_40501.f_1[iVar2 /*2*/])
		{
			iVar2++;
		}
		else if (iParam0 < &Global_1058888->f_40501.f_1[iVar2 /*2*/])
		{
			func_801(iVar2);
			*(Global_1058888->f_40501.f_1[iVar2 /*2*/]) = { Var0 };
			return iVar2;
		}
	}
	if (Global_1058888->f_40501 < 31)
	{
		iVar2 = Global_1058888->f_40501;
		*(Global_1058888->f_40501.f_1[iVar2 /*2*/]) = { Var0 };
		Global_1058888->f_40501++;
		if (Global_1058888->f_40501 > 32)
		{
			Global_1058888->f_40501 = 32;
		}
		return iVar2;
	}
	return -1;
}

void func_644()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

void func_645(int iParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam3 = func_444(iParam0);
	*uParam1 = func_445(iParam0);
	*uParam2 = func_446(iParam0);
}

void func_646(int iParam0, int iParam1)
{
	struct<5> Var0;

	Var0 = { *(Global_1898164->f_1[iParam0 /*5*/]) };
	*(Global_1898164->f_1[iParam0 /*5*/]) = { *(Global_1898164->f_1[iParam1 /*5*/]) };
	*(Global_1898164->f_1[iParam1 /*5*/]) = { Var0 };
}

void func_647(var uParam0, bool bParam1)
{
	if (*uParam0 != -1)
	{
		func_652(*uParam0, -1);
		func_653(*uParam0, 0);
		func_654(*uParam0, 0);
		if (MAP::DOES_BLIP_EXIST(&(Global_36307[*uParam0])))
		{
			if (bParam1)
			{
				MAP::SET_RADAR_ZOOM(&(Global_36307[*uParam0]));
			}
			MAP::REMOVE_BLIP(Global_36307[*uParam0]);
		}
	}
	*uParam0 = -1;
}

int func_648(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_36307)
	{
		return MAP::DOES_BLIP_EXIST(&(Global_36307[iParam0]));
	}
	return 0;
}

void func_649(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < Global_36307)
	{
		if (MAP::DOES_BLIP_EXIST(&(Global_36307[iParam0])))
		{
			MAP::_0xB059D7BD3D78C16F(&(Global_36307[iParam0]), iParam1);
		}
	}
}

int func_650(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 5;
		case 2:
			return 26;
		case 3:
			return 38;
		case 4:
			return 69;
		case 5:
			return 76;
		case 6:
			return 78;
		case 7:
			return 92;
		case 8:
			return 105;
		case 9:
			return 115;
		case 10:
			return 120;
		default:
			break;
	}
	return -1;
}

int func_651(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 1341870286;
		case 5:
			return -1706412559;
		case 26:
			return 279909480;
		case 38:
			return -412614304;
		case 69:
			return -653335484;
		case 76:
			return 1777802794;
		case 78:
			return 1088576970;
		case 92:
			return 412321676;
		case 105:
			return 1787788681;
		case 115:
			return 1635466279;
		case 120:
			return -410502938;
		case 4:
		case 9:
		case 22:
		case 37:
		case 43:
		case 58:
		case 71:
		case 79:
		case 98:
			return 7148155;
		default:
			break;
	}
	return 0;
}

void func_652(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/] = iParam1;
		return;
	}
	Global_42605[iParam0 /*4*/] = iParam1;
	return;
}

void func_653(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_40.f_7862[iParam0 /*4*/])->f_1 = iParam1;
		return;
	}
	(Global_42605[iParam0 /*4*/])->f_1 = iParam1;
	return;
}

void func_654(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_40.f_7862[iParam0 /*4*/])->f_2 = iParam1;
		return;
	}
	(Global_42605[iParam0 /*4*/])->f_2 = iParam1;
	return;
}

float func_655()
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

	if (func_802())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_803(2);
	}
	if (Global_1347477->f_119)
	{
		return func_803(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_804();
	fVar2 = func_805();
	fVar3 = func_806();
	fVar4 = func_807();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_808()));
	fVar7 = (func_803(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_809(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_810(3, fVar9, fVar9 > 100f);
	return func_811(fVar7, -100f, 100f);
}

float func_656()
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

	if (func_802())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_803(1);
	}
	if (Global_1347477->f_119)
	{
		return func_803(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_804();
	fVar2 = func_805();
	fVar3 = func_806();
	fVar4 = func_807();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_808()));
	fVar7 = (func_803(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_809(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_810(2, fVar9, fVar9 > 100f);
	return func_811(fVar7, -100f, 100f);
}

float func_657()
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

	if (func_802())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_803(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_812())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_813())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_803(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_804();
	fVar2 = func_805();
	fVar3 = func_806();
	fVar4 = func_807();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_808()));
	fVar7 = (func_803(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_809(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_810(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && PLAYER::_0x0317C947D062854E(PLAYER::PLAYER_ID()) < 1f)
	{
		return func_803(0);
	}
	return func_811(fVar7, -100f, 100f);
}

int func_658(bool bParam0)
{
	if (func_106() == -1)
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

int func_659(int iParam0)
{
	switch (iParam0)
	{
		case -2061583405:
			return 2;
		case -1719060085:
			return 16;
		case -999503751:
			return 1;
		case -525676072:
			return 4;
		case 81053684:
			return 8;
		case -413129408:
			return 32;
		default:
			break;
	}
	return 0;
}

void func_660(var uParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 - (Global_1946804->f_2657.f_26.f_6 && uParam0));
}

void func_661(var uParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 || uParam0);
}

int func_662(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_566(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		return func_558(iParam0, 26, 1);
	}
	if (bParam2)
	{
		if (!func_235(func_721(iParam0), 0))
		{
			return 0;
		}
	}
	if (!func_814(iParam0, 1, 0))
	{
		return 0;
	}
	if (func_558(iParam0, 44, 1))
	{
		return 0;
	}
	return 1;
}

int func_663(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return -1806461473;
		case 3:
			return -694461623;
		case 1:
			return 1093870742;
		case 0:
			return 999150106;
		case 4:
			return 1098225713;
		case 5:
			return -1828192959;
		default:
			break;
	}
	return 0;
}

int func_664(int iParam0)
{
	if (!func_124(iParam0))
	{
		return 0;
	}
	return func_271(iParam0, 67108864);
}

void func_665(int iParam0)
{
	char cVar0[64];
	char* sVar8;

	StringCopy(&cVar0, func_815(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_816(cVar0);
	MAP::_0x563FCB6620523917(MISC::GET_HASH_KEY(sVar8), -1482012664);
}

void func_666(int iParam0)
{
	char cVar0[64];
	char* sVar8;
	int iVar9;

	StringCopy(&cVar0, func_815(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_816(cVar0);
	iVar9 = MISC::GET_HASH_KEY(sVar8);
	if (MAP::_0xE38450DBCBC70E3D(iVar9, -1305340593) || MAP::_0xE38450DBCBC70E3D(iVar9, -1482012664))
	{
		MAP::_0x6786D7AFAC3162B3(iVar9);
	}
}

bool func_667(int iParam0, int iParam1)
{
	if (!func_97(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return (Global_40.f_431[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_42339[iParam0] && iParam1) != 0;
}

int func_668(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 675537701;
		case 1:
			return -1915988145;
		case 2:
			return 38535626;
		case 3:
			return 1904167574;
		case 4:
			return 244711249;
		case 5:
			return -1859792564;
		case 6:
			return -1808688941;
		case 7:
			return -736296038;
		case 8:
			return -909439131;
		case 9:
			return 1917744724;
		case 10:
			return 821748379;
		case 11:
			return 196685551;
		case 12:
			return 1983548039;
		case 15:
			return -1716084250;
		case 13:
			return 985737465;
		case 16:
			return 869827975;
		case 14:
			return -735550853;
		default:
			break;
	}
	return 1776960747;
}

int func_669(int iParam0)
{
	int iVar0;

	iVar0 = 5;
	while (iVar0 >= 1)
	{
		if (iParam0 >= PLAYER::GET_WANTED_LEVEL_THRESHOLD(iVar0))
		{
			return iVar0;
		}
		iVar0 = (iVar0 + -1);
	}
	return 0;
}

int func_670(int iParam0)
{
	char cVar0[64];
	char* sVar8;

	StringCopy(&cVar0, func_817(iParam0), 64);
	sVar8 = func_816(cVar0);
	return MISC::GET_HASH_KEY(sVar8);
}

bool func_671(int iParam0)
{
	if (!func_550(iParam0))
	{
		return false;
	}
	if (!func_371(iParam0))
	{
		return false;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

int func_672(int iParam0, bool bParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	int iVar5;

	if (!func_550(iParam0))
	{
		return 0;
	}
	vVar0.x = uParam3;
	vVar0.f_1 = uParam4;
	vVar0.f_2 = uParam5;
	if (((Global_1572864->f_13 || Global_1572864->f_14) || Global_1572864->f_8 != 0) || Global_1391438->f_5 & 8 != 0)
	{
		bVar3 = true;
	}
	switch (((*Global_1360165)[iParam0 /*1157*/])->f_11)
	{
		case 0:
			if (func_558(iParam0, 2, 1))
			{
				func_556(iParam0, 2, 1);
			}
			if (func_549(iParam0, 16, 1))
			{
				if ((*Global_1360165)[iParam0 /*1157*/])->f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD()
				{
					if (bParam14)
					{
						func_551(iParam0, 29, 1);
						return 0;
					}
					if (SCRIPTS::IS_THREAD_ACTIVE(((*Global_1360165)[iParam0 /*1157*/])->f_129, false))
					{
					}
					else
					{
						func_372(iParam0, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (func_235(Global_1360165[iParam0 /*1157*/], 0))
				{
					return Global_1360165[iParam0 /*1157*/];
				}
			}
			if (func_235(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_1360165[iParam0 /*1157*/]))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(Global_1360165[iParam0 /*1157*/]))
				{
					if (bParam1)
					{
						func_818(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				func_551(iParam0, 44, 1);
				((*Global_1360165)[iParam0 /*1157*/])->f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				func_819(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_551(iParam0, 44, 1);
				((*Global_1360165)[iParam0 /*1157*/])->f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				func_819(iParam0, 1);
			}
			else
			{
				return 0;
			}
		case 1:
			if (bVar3)
			{
				if (iParam13 == 0)
				{
					iParam13 = (Global_40.f_4942[iParam0 /*60*/])->f_4;
				}
			}
			if (!func_558(iParam0, 44, 0))
			{
				func_551(iParam0, 44, 0);
			}
			if (func_820(iParam0, vVar0, iParam13, 0, 1, bParam17, bParam20, -1, 1, 0))
			{
				func_819(iParam0, 2);
			}
			break;
		case 2:
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 171, true);
			if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1360165[iParam0 /*1157*/]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
			}
			func_556(iParam0, 18, 1);
			ENTITY::SET_ENTITY_VISIBLE(Global_1360165[iParam0 /*1157*/], true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], 1030835986);
			POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/], 0);
			_NAMESPACE48::_0x6759BEE6762E140B(((*Global_1360165)[iParam0 /*1157*/])->f_1);
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 130, false);
			func_560(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				func_821(iParam0, 0, 0, 1);
			}
			func_556(iParam0, 33, 1);
			func_556(iParam0, 34, 1);
			func_556(iParam0, 29, 1);
			if (!func_174(vVar0) && iParam7)
			{
				func_819(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				func_819(iParam0, 4);
			}
			else
			{
				func_819(iParam0, 5);
			}
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(Global_1360165[iParam0 /*1157*/]) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_1360165[iParam0 /*1157*/], -1))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Global_1360165[iParam0 /*1157*/]))
				{
					if (PED::IS_PED_ON_MOUNT(Global_1360165[iParam0 /*1157*/]) && bParam10)
					{
					}
					else if (PED::IS_PED_USING_ANY_SCENARIO(Global_1360165[iParam0 /*1157*/]))
					{
						func_818(iParam0, 1, "Teleporting a stolen companion using a scenario.");
					}
					else
					{
						ENTITY::DETACH_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
					}
				}
				iVar4 = 2;
				if (bParam10)
				{
					iVar4 |= 4;
				}
				func_349(Global_1360165[iParam0 /*1157*/], vVar0, fParam6, 2, 1073741824);
			}
			else if (bParam16)
			{
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_1360165[iParam0 /*1157*/], 0) && !TASK::_0x0C3CB2E600C8977D(Global_1360165[iParam0 /*1157*/], 1))
				{
					TASK::CLEAR_PED_TASKS(Global_1360165[iParam0 /*1157*/], 1, 0);
				}
				return 0;
			}
			if (iParam13 != 0)
			{
				func_819(iParam0, 4);
			}
			else
			{
				func_819(iParam0, 5);
			}
			break;
		case 4:
			if (iParam13 != 0 || bVar3)
			{
				if (bVar3)
				{
					if (iParam13 == 0)
					{
						iParam13 = (Global_40.f_4942[iParam0 /*60*/])->f_4;
					}
				}
				if (func_822(iParam0, iParam13))
				{
					if (PED::_0xA0BC8FAED8CFEB3C(Global_1360165[iParam0 /*1157*/]))
					{
						func_823(iParam0, iParam13, 0);
						func_824(iParam0, Global_1360165[iParam0 /*1157*/], iParam13, 1);
						if (func_558(iParam0, 25, 0))
						{
							func_556(iParam0, 25, 0);
						}
						func_551(iParam0, 66, 0);
						func_819(iParam0, 5);
						((*Global_1360165)[iParam0 /*1157*/])->f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_819(iParam0, 5);
				}
				func_551(iParam0, 28, 1);
			}
			else
			{
				func_819(iParam0, 5);
			}
			break;
		case 5:
			if (PED::_0xA0BC8FAED8CFEB3C(Global_1360165[iParam0 /*1157*/]))
			{
				func_819(iParam0, 6);
			}
			break;
		case 6:
			if (func_235(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (bParam24)
				{
					PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], true);
				}
				if (bParam18)
				{
					if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_1360165[iParam0 /*1157*/], -1))
					{
						iVar5 = 0;
						while (iVar5 < 10)
						{
							PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_1360165[iParam0 /*1157*/], iVar5);
							PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Global_1360165[iParam0 /*1157*/], iVar5, "ALL");
							iVar5++;
						}
						PED::_0xE3144B932DFDFF65(Global_1360165[iParam0 /*1157*/], 0f, -1, 1, 1);
						PED::_0xD049920CD29F6CC8(Global_1360165[iParam0 /*1157*/], 0f, -1, 1, 1);
					}
				}
				if (bParam19)
				{
					func_825(iParam0);
				}
				if (bParam21)
				{
					TASK::CLEAR_PED_SECONDARY_TASK(Global_1360165[iParam0 /*1157*/]);
					func_826(Global_1360165[iParam0 /*1157*/], 1);
				}
			}
			func_819(iParam0, 7);
		case 7:
			func_560(iParam0, bParam9, bParam15, 0);
			func_553(iParam0, 4, bParam11);
			func_555(iParam0);
			if (bParam20)
			{
				if (func_827(Global_1360165[iParam0 /*1157*/]))
				{
				}
			}
			func_828(iParam0, Global_1360165[iParam0 /*1157*/]);
			if (!bParam23 && !PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true))
			{
				PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true);
			}
			(Global_40.f_4942[iParam0 /*60*/])->f_4 = (Global_40.f_4942[iParam0 /*60*/])->f_3;
			func_819(iParam0, 0);
			func_829(iParam0, 16, 1);
			func_556(iParam0, 44, 1);
			((*Global_1360165)[iParam0 /*1157*/])->f_1156 = 0;
			((*Global_1360165)[iParam0 /*1157*/])->f_129 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			return Global_1360165[iParam0 /*1157*/];
	}
	return 0;
}

int func_673(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, float fParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17)
{
	int iVar0;

	if (!func_566(iParam1))
	{
		return 0;
	}
	iVar0 = func_565(iParam1);
	if ((!ENTITY::DOES_ENTITY_EXIST(iVar0) || !func_235(iVar0, 0)) || (bParam3 && !func_567(iParam1)))
	{
		if (bParam2)
		{
			if (func_726(iParam1, 1) != 0)
			{
				iVar0 = func_830(iParam1, bParam3, bParam8, iParam9, iParam10, iParam11, fParam12, bParam7, bParam15, bParam16, bParam17);
			}
			else
			{
				*uParam0 = 1;
				return 0;
			}
		}
		else
		{
			*uParam0 = 1;
			return 0;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && func_235(iVar0, 0))
	{
		*uParam0 = 2;
		((*Global_1360165)[iParam1 /*1157*/])->f_70.f_2 = 0;
		func_831(iParam1, iVar0);
		func_832(iParam1, bParam13, bParam14, 1);
		return iVar0;
	}
	else
	{
		*uParam0 = 0;
		return 0;
	}
	return 0;
}

int func_674(int iParam0, int iParam1)
{
	if (func_106() != -1)
	{
		return 0;
	}
	if (!func_280(iParam0))
	{
		return 0;
	}
	if (!func_833(iParam0) && iParam1)
	{
		return 0;
	}
	return func_834(iParam0, 1);
}

int func_675(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	if (!func_835(iParam0, 1))
	{
		return 0;
	}
	if (func_282(func_281(iParam0)))
	{
		iVar1 = func_283(iParam0);
		if (!_NAMESPACE48::_0x800DF3FC913355F3(iVar1))
		{
			return 0;
		}
		if (bParam1)
		{
			if (_NAMESPACE48::_0xEB98B38CA60742D7(iVar1))
			{
				_NAMESPACE48::_0x49A8C2CD97815215(iVar1);
			}
		}
		_NAMESPACE48::_0x6759BEE6762E140B(iVar1);
		iVar0 = _NAMESPACE48::_0x0CADC3A977997472(iVar1, 0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return 0;
		}
	}
	if ((iParam4 && !func_833(iParam0)) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 171, bParam5);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	func_146(iParam0, 1);
	func_836(iParam0);
	if (bParam3)
	{
		func_146(iParam0, 16);
	}
	if (!bParam2)
	{
	}
	return iVar0;
}

int func_676(int iParam0)
{
	if (!func_280(iParam0))
	{
		return 0;
	}
	if (!func_834(iParam0, 2))
	{
		return 0;
	}
	if (func_282(func_281(iParam0)))
	{
		return func_837(iParam0);
	}
	return PED::_0xE76687023D8C8505(func_838(iParam0), 0);
}

var func_677(var uParam0, var uParam1, int iParam2, vector3 vParam3, float fParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, int iParam11, bool bParam12, float fParam13, bool bParam14, bool bParam15)
{
	int iVar0;
	var uVar1;

	if (fParam13 <= 0f)
	{
		iVar0 = VOLUME::_0xB3FB80A32BAE3065(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam6);
	}
	else
	{
		iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam13);
	}
	uVar1 = func_839(uParam0, uParam1, iParam2, iVar0, bParam7, bParam8, bParam9, iParam10, iParam11, bParam12, bParam14, bParam15);
	func_215(iVar0);
	return uVar1;
}

int func_678(var uParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_998)
	{
		if ((uParam0->f_782[iVar0 /*11*/])->f_1 == iParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_679(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_840(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

var func_680(var uParam0, var uParam1, int iParam2, vector3 vParam3, float fParam6)
{
	int iVar0;
	var uVar1;

	iVar0 = VOLUME::_0xB3FB80A32BAE3065(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam6);
	uVar1 = func_841(uParam0, uParam1, iVar0, iParam2);
	func_215(iVar0);
	return uVar1;
}

int func_681(var uParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_996)
	{
		if ((uParam0->f_530[iVar0 /*10*/])->f_1 == iParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

char* func_682(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return "";
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return func_519(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0));
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		return func_842(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0));
	}
	else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		return func_843(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0));
	}
	return "";
}

int func_683(var uParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_13[iVar0 /*12*/])) && &uParam0->f_13[iVar0 /*12*/] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_684(var uParam0, char* sParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_13[iVar0 /*12*/])) && MISC::ARE_STRINGS_EQUAL(&((uParam0->f_13[iVar0 /*12*/])->f_1), sParam1))
		{
			return &(uParam0->f_13[iVar0 /*12*/]);
		}
		iVar0++;
	}
	return 0;
}

void func_685(var uParam0, int iParam1)
{
	struct<12> Var0;
	int iVar12;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar12 = 0;
	while (iVar12 < 35)
	{
		if (&uParam0->f_13[iVar12 /*12*/] == iParam1)
		{
			*(uParam0->f_13[iVar12 /*12*/]) = { Var0 };
			return;
		}
		iVar12++;
	}
}

int func_686(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_13[iVar0 /*12*/])))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_687(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 || iParam1);
}

void func_688(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 - (uParam0->f_11 && iParam1));
}

struct<8> func_689(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	char cVar2[64];
	char cVar10[64];
	struct<8> Var18;

	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0);
	iVar1 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);
	if (iVar0 >= iParam3)
	{
		StringCopy(&cVar2, HUD::_0x806862E5D266CF38(sParam0, (iVar0 - iParam3), iVar0), 64);
	}
	else
	{
		StringCopy(&cVar2, sParam0, 64);
	}
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar2);
	if (iVar1 >= iParam3)
	{
		StringCopy(&cVar10, HUD::_0x806862E5D266CF38(sParam1, (iVar1 - iParam3), iVar1), 64);
	}
	else
	{
		StringCopy(&cVar10, sParam1, 64);
	}
	iVar1 = HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar10);
	if (bParam2)
	{
		if ((iVar0 + iVar1) >= iParam3)
		{
			StringCopy(&cVar10, HUD::_0x806862E5D266CF38(&cVar10, iVar0, iVar1), 64);
		}
	}
	else if ((iVar0 + iVar1) >= iParam3)
	{
		StringCopy(&cVar2, HUD::_0x806862E5D266CF38(&cVar2, iVar1, iVar0), 64);
	}
	Var18 = { cVar2 };
	StringConCat(&Var18, &cVar10, 64);
	return Var18;
}

struct<4> func_690(var uParam0)
{
	return uParam0->f_440;
}

void func_691(struct<4> Param0)
{
	int iVar0;
	int iVar1;

	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_844(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1 /*4*/] == Param0 && (Global_1946804->f_769[iVar1 /*4*/])->f_2 == Param0.f_2) && (Global_1946804->f_769[iVar1 /*4*/])->f_3 == Param0.f_3) && (Global_1946804->f_769[iVar1 /*4*/])->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1 /*4*/] == 34 && func_844(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_845(Param0);
	*(Global_1946804->f_769[Global_1946804->f_854 /*4*/]) = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_788(8);
}

void func_692(var uParam0)
{
	if (PED::_0x91A5F9CBEBB9D936(uParam0->f_9))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_9, false);
	}
}

struct<8> func_693()
{
	char cVar0[64];

	StringCopy(&cVar0, "NormalStart", 64);
	return cVar0;
}

char* func_694()
{
	return "unnamed";
}

void func_695(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (PED::_0x91A5F9CBEBB9D936(uParam0->f_9))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_9, false);
	}
	uParam0->f_4 = iParam1;
	iVar0 = 14;
	if (bParam3)
	{
		iVar0 |= 1;
	}
	uParam0->f_9 = PED::_0x4C39C95AE5DB1329(iParam1, iParam2, iVar0);
}

void func_696(var uParam0)
{
	int iVar0;

	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_444))
	{
		return;
	}
	if (!ANIMSCENE::_0x477122B8D05E7968(uParam0->f_444, 1, 0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(uParam0->f_13[iVar0 /*12*/])) || func_701(uParam0->f_13[iVar0 /*12*/], 2))
		{
			if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_444, &((uParam0->f_13[iVar0 /*12*/])->f_1)))
			{
				func_687(uParam0->f_13[iVar0 /*12*/], 1);
			}
		}
		iVar0++;
	}
}

void func_697(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(uParam0->f_13[iVar0 /*12*/])) || func_701(uParam0->f_13[iVar0 /*12*/], 2))
		{
			if (func_701(uParam0->f_13[iVar0 /*12*/], 1) || ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_444, &((uParam0->f_13[iVar0 /*12*/])->f_1)))
			{
				func_846(uParam0, &((uParam0->f_13[iVar0 /*12*/])->f_1), &(uParam0->f_13[iVar0 /*12*/]), (uParam0->f_13[iVar0 /*12*/])->f_9);
				if (iParam1 && ENTITY::IS_ENTITY_A_PED(&(uParam0->f_13[iVar0 /*12*/])))
				{
					iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(&(uParam0->f_13[iVar0 /*12*/]));
					if (iVar1 != Global_35 && !func_701(uParam0->f_13[iVar0 /*12*/], 16))
					{
						func_847(iVar1);
					}
				}
			}
		}
		iVar0++;
	}
}

bool func_698(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_699(int iParam0)
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

void func_700(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 && !func_699(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_848(*uParam0);
	if (((*Global_1945938)[iVar0 /*18*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && iParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_849(iVar0);
	*uParam0 = 0;
}

bool func_701(var uParam0, int iParam1)
{
	return (uParam0->f_11 && iParam1) != 0;
}

char* func_702(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return "Arthur";
		case joaat("cs_abe"):
			return "Abe";
		case joaat("cs_edmundlowry"):
			return "EdmundLowry";
		case joaat("cs_aberdeenpigfarmer"):
			return "ABERDEENPIGFARMER";
		case joaat("cs_aberdeensister"):
			return "ABERDEENSISTER";
		case joaat("cs_abigailroberts"):
			return "AbigailRoberts";
		case joaat("cs_albertmason"):
			return "AlbertMason";
		case joaat("cs_archiedown"):
			return "ArchieDown";
		case joaat("cs_baptiste"):
			return "Baptiste";
		case joaat("cs_bartholomewbraithwaite"):
			return "BartholomewBraithwaite";
		case joaat("cs_beatenupcaptain"):
			return "CS_BEATENUPCAPTAIN";
		case joaat("cs_beaugray"):
			return "BeauGray";
		case joaat("cs_penelopebraithwaite"):
			return "PenelopeBraithwaite";
		case joaat("cs_billwilliamson"):
			return "BillWilliamson";
		case joaat("cs_braithwaiteservant"):
			return "BraithwaiteServant";
		case joaat("cs_catherinebraithwaite"):
			return "CatherineBraithwaite";
		case joaat("cs_charlessmith"):
			return "CharlesSmith";
		case joaat("cs_cigcardguy"):
			return "CS_CIGCARDGUY";
		case joaat("cs_dinoboneslady"):
			return "CS_DINOBONESLADY";
		case joaat("cs_cleet"):
			return "Cleet";
		case joaat("cs_colmodriscoll"):
			return "ColmODriscoll";
		case joaat("cs_creoleguy"):
			return "CreoleGuy";
		case joaat("cs_sddoctor_01"):
			return "SDDoctor_01";
		case joaat("cs_dalemaroney"):
			return "DaleMaroney";
		case joaat("cs_dutch"):
			return "Dutch";
		case joaat("cs_edithdown"):
			return "EdithDown";
		case joaat("cs_fussar"):
			return "Fussar";
		case joaat("cs_fishcollector"):
			return "cs_fishcollector";
		case joaat("cs_bronte"):
			return "Bronte";
		case joaat("cs_guidomartelli"):
			return "GuidoMartelli";
		case joaat("u_m_m_nbxbrontegoon_01"):
			return "U_M_M_NBXBRONTEGOON_01";
		case joaat("g_m_m_unibrontegoons_01"):
			return "G_M_M_UNIBRONTEGOONS_01";
		case joaat("cs_garethbraithwaite"):
			return "GarethBraithwaite";
		case joaat("cs_genstoryfemale"):
			return "GenStoryFemale";
		case joaat("cs_genstorymale"):
			return "GenStoryMale";
		case joaat("cs_leon"):
			return "Leon";
		case joaat("cs_geraldbraithwaite"):
			return "GeraldBraithwaite";
		case joaat("cs_hoseamatthews"):
			return "HoseaMatthews";
		case joaat("cs_jackmarston"):
			return "JackMarston";
		case joaat("cs_jackmarston_teen"):
			return "JackMarston_Teen";
		case joaat("cs_jamie"):
			return "Jamie";
		case joaat("cs_javierescuella"):
			return "JavierEscuella";
		case joaat("cs_jimcalloway"):
			return "JimCalloway";
		case joaat("cs_joe"):
			return "Joe";
		case joaat("cs_johnmarston"):
			return "JohnMarston";
		case joaat("cs_johnweathers"):
			return "CS_JOHNWEATHERS";
		case joaat("cs_josiahtrelawny"):
			return "JosiahTrelawny";
		case joaat("cs_karen"):
			return "Karen";
		case joaat("cs_mrsadler"):
			return "MrsAdler";
		case joaat("cs_kieran"):
			return "Kieran";
		case joaat("cs_leostrauss"):
			return "LeoStrauss";
		case joaat("cs_londonderryson"):
			return "LondonderrySon";
		case joaat("cs_marybeth"):
			return "MaryBeth";
		case joaat("cs_marylinton"):
			return "MaryLinton";
		case joaat("cs_micahbell"):
			return "MicahBell";
		case joaat("cs_mollyoshea"):
			return "MollyOshea";
		case joaat("cs_mrlinton"):
			return "CS_MrLinton";
		case joaat("cs_mrpearson"):
			return "MrPearson";
		case joaat("cs_mrslondonderry"):
			return "MrsLondonderry";
		case joaat("cs_mud2bigguy"):
			return "Mud2BigGuy";
		case joaat("cs_professorbell"):
			return "ProfessorBell";
		case joaat("cs_revswanson"):
			return "RevSwanson";
		case joaat("cs_samaritan"):
			return "CS_Samaritan";
		case joaat("cs_strdeputy_01"):
			return "StrDeputy_01";
		case joaat("cs_strdeputy_02"):
			return "StrDeputy_02";
		case joaat("cs_strsheriff_01"):
		case joaat("u_m_m_strsherriff_01"):
			return "StrSheriff_01";
		case joaat("cs_susangrimshaw"):
			return "SusanGrimshaw";
		case joaat("cs_tavishgray"):
			return "TavishGray";
		case joaat("cs_theodorelevin"):
			return "TheodoreLevin";
		case joaat("cs_thomasdown"):
			return "ThomasDown";
		case joaat("cs_tilly"):
			return "Tilly";
		case joaat("cs_uncle"):
			return "Uncle";
		case joaat("g_m_m_unicriminals_01"):
			return "G_M_M_UniCriminals_01";
		case joaat("g_m_m_uniduster_01"):
			return "G_M_M_UNIDUSTER_01";
		case joaat("cs_valsheriff"):
			return "CS_VALSHERIFF";
		case joaat("s_m_m_marshallsrural_01"):
			return "S_M_M_MARSHALLSRURAL_01";
		case joaat("u_m_o_vhtexoticshopkeeper_01"):
			return "U_M_O_VHTEXOTICSHOPKEEPER_01";
		case joaat("cs_sean"):
			return "Sean";
		case joaat("cs_lenny"):
			return "Lenny";
		case joaat("cs_hercule"):
			return "Hercule";
		case joaat("cs_creolecaptain"):
			return "CreoleCaptain";
		case joaat("u_m_m_creolecaptain_01"):
			return "U_M_M_CREOLECAPTAIN_01";
		case joaat("cs_ringmaster"):
			return "RingMaster";
		case joaat("u_m_m_valbartender_01"):
			return "U_M_M_VALBARTENDER_01";
		case joaat("a_m_m_emrfarmhand_01"):
			return "A_M_M_EMRFARMHAND_01";
		case joaat("a_m_m_grisurvivalist_01"):
			return "A_M_M_GriSurvivalist_01";
		case joaat("cs_lillymillet"):
			return "LillyMillet";
		case joaat("a_f_m_strtownfolk_01"):
			return "A_F_M_STRTOWNFOLK_01";
		case joaat("a_m_m_strtownfolk_01"):
			return "A_M_M_STRTOWNFOLK_01";
		case joaat("s_m_m_strlumberjack_01"):
			return "S_M_M_STRLUMBERJACK_01";
		case joaat("g_m_m_unicriminals_02"):
			return "G_M_M_UniCriminals_02";
		case joaat("g_m_m_unicornwallgoons_01"):
			return "G_M_M_UNICORNWALLGOONS_01";
		case joaat("a_m_m_nbxupperclass_01"):
			return "A_M_M_NBXUPPERCLASS_01";
		case joaat("a_f_m_nbxupperclass_01"):
			return "A_F_M_NBXUPPERCLASS_01";
		case joaat("a_m_m_valfarmer_01"):
			return "A_M_M_VALFARMER_01";
		case joaat("a_m_m_valtownfolk_01"):
			return "A_M_M_VALTOWNFOLK_01";
		case joaat("a_m_m_valtownfolk_02"):
			return "A_M_M_VALTOWNFOLK_02";
		case joaat("a_f_m_valtownfolk_01"):
			return "A_F_M_VALTOWNFOLK_01";
		case joaat("u_m_m_nbxbartender_01"):
			return "U_M_M_NBXBARTENDER_01";
		case joaat("cs_nbxexecuted"):
			return "NBXExecuted";
		case joaat("cs_rhodeputy_01"):
			return "RHODEPUTY_01";
		case joaat("u_m_m_rhdsheriff_01"):
			return "RHDSHERIFF_01";
		case joaat("cs_leighgray"):
			return "LeighGray";
		case -1038436471:
			return "Horse_01";
		case joaat("u_m_m_strgenstoreowner_01"):
			return "U_M_M_StrGenStoreOwner_01";
		case joaat("cs_tomdickens"):
			return "TomDickens";
		case joaat("cs_davidgeddes"):
			return "DavidGeddes";
		case joaat("cs_ansel_atherton"):
			return "ANSEL_ATHERTON";
		case joaat("cs_wrobel"):
			return "CS_Wrobel";
		case joaat("a_c_cow"):
			return "COW";
		case joaat("a_c_bull_01"):
			return "BULL";
		case joaat("cs_albertcakeesquire"):
			return "ALBERTCAKEESQUIRE";
		case joaat("u_m_o_blwgeneralstoreowner_01"):
			return "U_M_O_BLWGENERALSTOREOWNER_01";
		case joaat("a_c_dogcatahoulacur_01"):
			return "A_C_DOGCATAHOULACUR_01";
		case joaat("a_c_dogrufus_01"):
			return "A_C_DOGRUFUS_01";
		case joaat("a_c_doglion_01"):
			return "A_C_DOGLION_01";
		case joaat("cs_tigerhandler"):
			return "Handler";
		case joaat("cs_valauctionboss_01"):
			return "VALAUCTIONBOSS_01";
		case joaat("cs_nbxreceptionist_01"):
			return "NbxReceptionist_01";
		case joaat("u_m_m_bivforeman_01"):
			return "U_M_M_BiVForeman_01";
		case joaat("u_m_m_racforeman_01"):
			return "U_M_M_RACFOREMAN_01";
		case joaat("cs_chainprisoner_01"):
			return "CHAINPRISONER_01";
		case joaat("cs_chainprisoner_02"):
			return "CHAINPRISONER_02";
		case joaat("u_m_m_valpokerplayer_01"):
			return "U_M_M_ValPokerPlayer_01";
		case joaat("u_m_m_valpokerplayer_02"):
			return "U_M_M_ValPokerPlayer_02";
		case joaat("cs_duncangeddes"):
			return "DUNCANGEDDES";
		case joaat("cs_angusgeddes"):
			return "ANGUSGEDDES";
		case joaat("cs_evelynmiller"):
			return "EvelynMiller";
		case joaat("cs_sistercalderon"):
			return "SISTERCALDERON";
		case joaat("cs_edgarross"):
			return "EDGARROSS";
		case joaat("cs_wintonholmes"):
			return "U_M_M_GriSurvivalist_01";
		case joaat("u_f_m_rkshomesteadtenant_01"):
			return "U_F_M_RKSHOMESTEADTENANT_01";
		case joaat("cs_rockyseven_widow"):
			return "U_F_M_RKSHOMESTEADTENANT_01";
		case joaat("u_m_m_bht_strawberryduel"):
			return "U_M_M_BHT_STRAWBERRYDUEL";
		case joaat("u_m_m_rhdtrainstationworker_01"):
			return "StationWorker";
		case joaat("cs_levisimon"):
			return "LEVISIMON";
		case joaat("s_m_m_fussarhenchman_01"):
			return "S_M_M_GULFUSSARS_01";
		case joaat("a_c_donkey_01"):
			return "A_C_DONKEY_01";
		case joaat("a_m_m_guatownfolk_01"):
			return "S_M_M_ISPWORKER_01";
		case joaat("a_m_o_guatownfolk_01"):
			return "S_M_M_ISPWORKER_02";
		case joaat("u_m_o_valbartender_01"):
			return "U_M_O_ValBartender_01";
		case joaat("u_m_m_nbxbartender_02"):
			return "U_M_M_NBXBARTENDER_02";
		case joaat("cs_unidusterjail_01"):
			return "CS_UNIDUSTERJAIL_01";
		case joaat("a_m_m_rhdtownfolk_01"):
			return "A_M_M_RHDTOWNFOLK_01";
		case joaat("u_m_m_unibountyhunter_01"):
			return "U_M_M_UNIBOUNTYHUNTER_01";
		case joaat("u_m_m_unibountyhunter_02"):
			return "U_M_M_UNIBOUNTYHUNTER_02";
		case joaat("cs_brotherdorkins"):
			return "BrotherDorkins";
		case joaat("g_m_m_unibraithwaites_01"):
			return "G_M_M_UniBraithwaites_01";
		case joaat("a_m_m_gamhighsociety_01"):
			return "A_M_M_GAMHIGHSOCIETY_01";
		case joaat("u_m_m_strfreightstationowner_01"):
			return "U_M_M_STRFREIGHTSTATIONOWNER_01";
		case joaat("cs_eagleflies"):
			return "EagleFlies";
		case joaat("cs_rainsfall"):
			return "CS_RAINSFALL";
		case joaat("a_m_m_wapwarriors_01"):
			return "A_M_M_WapWarriors_01";
		case joaat("a_m_y_nbxstreetkids_01"):
			return "A_M_Y_NBXSTREETKIDS_01";
		case joaat("u_m_m_bht_shackescape"):
			return "U_M_M_BHT_SHACKESCAPE";
		case joaat("a_m_m_htlroughtravellers_01"):
			return "A_M_M_HTLROUGHTRAVELLERS_01";
		case joaat("cs_lemiuxassistant"):
			return "LemiuxAssistant";
		case joaat("p_keys01x"):
			return "p_keys01x";
		case joaat("cs_balloonoperator"):
			return "CS_BALLOONOPERATOR";
		case joaat("a_m_m_bivworker_01"):
			return "Worker1";
		case joaat("u_m_m_bht_mineforeman"):
			return "U_M_M_BHT_MINEFOREMAN";
		case joaat("a_m_m_nbxslums_01"):
			return "A_M_M_NbxSlums_01";
		case joaat("cs_sdpriest"):
			return "U_M_M_NBXPRIEST_01";
		case joaat("a_c_bear_01"):
			return "A_C_BEAR_01";
		case joaat("cs_marshall_thurwell"):
			return "MARSHALL_THURWELL";
		case joaat("cs_famousgunslinger_02"):
			return "CS_FAMOUSGUNSLINGER_02";
		case joaat("cs_sd_streetkid_01"):
			return "cs_sd_streetkid_01";
		case joaat("cs_sd_streetkid_02"):
			return "cs_sd_streetkid_02";
		case joaat("cs_obediahhinton"):
			return "ObediahHinton";
		case joaat("cs_poisonwellshaman"):
			return "PoisonWellShaman";
		case joaat("cs_cooper"):
			return "A_M_M_EMRFARMHAND_01";
		case joaat("u_m_m_bht_benedictallbright"):
			return "u_m_m_bht_benedictallbright";
		case joaat("cs_jules"):
			return "Jules";
		case joaat("cs_mrdevon"):
			return "MRDEVON";
		case joaat("cs_mrwayne"):
			return "MRWAYNE";
		case joaat("cs_paytah"):
			return "PAYTAH";
		case joaat("cs_valdeputy_01"):
			return "CS_VALDEPUTY_01";
		case 167491564:
			return "MES_SADIE5_MALES_01^1";
		case joaat("a_m_m_nbxdockworkers_01"):
			return "A_M_M_NBXDOCKWORKERS_01";
		case joaat("u_m_m_valsheriff_01"):
			return "U_M_M_VALSHERIFF_01";
		case joaat("s_m_m_bankclerk_01"):
			return "S_M_M_BANKCLERK_01";
		case joaat("u_m_m_nbxbronteasc_01"):
			return "U_M_M_NBXBRONTEASC_01";
		case joaat("p_c_horse_01"):
			return "P_C_HORSE_01";
	}
	return "";
}

bool func_703(int iParam0)
{
	return iParam0 != 0;
}

bool func_704(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1) != 0;
}

int func_705(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
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
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_704(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_850(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

void func_706(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam2 && !func_699(iParam0))
	{
		return;
	}
	iVar0 = func_848(iParam0);
	func_851(iVar0, iParam1);
}

void func_707(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam2 && !func_699(iParam0))
	{
		return;
	}
	iVar0 = func_848(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_0xF4A5C4509BF923B1(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam1);
}

void func_708(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (iParam2 && !func_699(iParam0))
	{
		return;
	}
	iVar0 = func_848(iParam0);
	if (bParam1)
	{
		func_852(iParam0, 4);
		func_851(iVar0, 1);
		func_853(iVar0, 1);
	}
	else
	{
		func_854(iParam0, 4);
		func_853(iVar0, 0);
	}
}

float func_709(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_699(iParam0))
	{
		return 0f;
	}
	iVar0 = func_848(iParam0);
	if (HUD::_0xCD072523791DDC1B(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return HUD::_UIPROMPT_GET_MASH_MODE_PROGRESS(((*Global_1945938)[iVar0 /*18*/])->f_3);
	}
	return HUD::_0x81801291806DBC50(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

bool func_710(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_699(iParam0))
	{
		return false;
	}
	iVar0 = func_848(iParam0);
	if (HUD::_0xCD072523791DDC1B(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

int func_711(var uParam0, int iParam1, char* sParam2, int iParam3, var uParam4, var uParam5)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (uParam4 && ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		sParam2 = func_682(iParam1);
	}
	if (iParam3 == 0)
	{
		iParam3 = ENTITY::GET_ENTITY_MODEL(iParam1);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
	}
	if (!func_518(uParam0, iParam1, 4))
	{
		if (ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_444, sParam2))
		{
			func_855(uParam0, iParam1, 4);
			return 1;
		}
		else if (uParam5 && ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_444, sParam2))
		{
			func_855(uParam0, iParam1, 4);
			return 1;
		}
	}
	return 0;
}

void func_712(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_280(iParam0))
	{
		return;
	}
	if (!func_834(iParam0, 1))
	{
		return;
	}
	if (!func_834(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_833(iParam0)) && func_856(iParam0))
	{
		return;
	}
	func_213(iParam0, 1);
	func_857(iParam0);
	if (func_282(func_281(iParam0)))
	{
		iVar0 = func_283(iParam0);
		if (!_NAMESPACE48::_0x800DF3FC913355F3(iVar0))
		{
			return;
		}
		_NAMESPACE48::_0xBB68908CD11AEBDC(iVar0);
		_NAMESPACE48::_0xB65E7F733956CF25(iVar0);
		if (iParam2 && !_NAMESPACE48::_0xEB98B38CA60742D7(iVar0))
		{
			_NAMESPACE48::_0x631CD2D77FDC0316(iVar0);
		}
		iVar1 = _NAMESPACE48::_0x31C70A716CAE1FEE(iVar0);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			PED::SET_PED_CONFIG_FLAG(iVar1, 171, false);
		}
		if (bParam1)
		{
			_NAMESPACE48::_0x7B204F88F6C3D287(iVar0);
		}
		func_213(iParam0, 16);
	}
	if (func_834(iParam0, 128) && !bParam3)
	{
		func_858(iParam0, 0);
	}
}

void func_713(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_859(func_98(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

int func_714(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_715(int iParam0)
{
	switch (iParam0)
	{
		case -2085163631:
			return 0;
		case -4613767:
			return 0;
		case 1567162363:
			return 1;
		case 456471693:
			return 2;
		case -1772963474:
			return 3;
		case 1881496386:
			return 4;
		case 711768994:
			return 5;
		case -440834066:
			return 6;
		case -1363847832:
			return 7;
		case 967769300:
			return 8;
		case -1436873944:
			return 9;
		case -1585669139:
			return 10;
		case 16791368:
			return 11;
		case 1452922822:
			return 12;
		case 549538301:
			return 13;
		case 974698954:
			return 14;
		case 445881012:
			return 15;
		case -2043891857:
			return 16;
		case 419656993:
			return 17;
		case -1732457315:
			return 18;
		case 1794318026:
			return 19;
		case 2035159966:
			return 20;
		case 770832805:
			return 21;
		case -1109814766:
			return 22;
		case -1080317735:
			return 23;
		case -1075550363:
			return 24;
		case 2138576151:
			return 25;
		case 1180954297:
			return 26;
		case 783603394:
			return 27;
		case -170458336:
			return 29;
		case 1285083821:
			return 30;
		case -1840907462:
			return 31;
		case 756710130:
			return 32;
		case 388370024:
			return 33;
		case 1092296123:
			return 34;
		case 467491346:
			return 35;
		case -1391584612:
			return 36;
		case -152111346:
			return 37;
		case 1447551317:
			return 38;
		case 153136092:
			return 39;
		case 1304405732:
			return 40;
		case 1074984055:
			return 41;
		case 1087476368:
			return 50;
		case -1768057340:
			return 51;
		case 1218874593:
			return 42;
		case -1438443836:
			return 52;
		case -2036340415:
			return 43;
		case 803939643:
			return 44;
		case -632496195:
			return 53;
		case -965943619:
			return 45;
		case 283532073:
			return 46;
		case -69067491:
			return 47;
		case -1864895118:
			return 48;
		case -1929806571:
			return 54;
		case 1162337247:
			return 28;
		case -698525417:
			return 55;
		case -1149739894:
			return 56;
		case 380507325:
			return 49;
		case 407796241:
			return 57;
		case -152267914:
			return 58;
		case -1675443320:
			return 59;
		case 1940341639:
			return 60;
		case 1846596114:
			return 61;
		case 907708501:
			return 62;
		case 1825644981:
			return 64;
		case 2065937607:
			return 65;
		case -211317417:
			return 66;
		case 1801307910:
			return 67;
		case -4118897:
			return 68;
		case 1853610692:
			return 69;
		case -1574644415:
			return 70;
		case 2133055515:
			return 71;
		case -1413401932:
			return 72;
		case 801090761:
			return 73;
		case 2131218644:
			return 74;
		case 1708823660:
			return 75;
		case 7976942:
			return 76;
		case 2111120505:
			return 77;
		case 176893118:
			return 78;
		case 602306665:
			return 63;
		case 1179148161:
			return 79;
		case 547412068:
			return 80;
		case -1539748801:
			return 81;
		case -1605119912:
			return 82;
		case -884464063:
			return 83;
		case -1420970720:
			return 84;
		case 1017024547:
			return 85;
		case -1204497306:
			return 86;
		case -1621069480:
			return 87;
		case -458604261:
			return 88;
		case -923391614:
			return 89;
		case -689247089:
			return 90;
		case 44049568:
			return 91;
		case 1350259552:
			return 92;
		case -61661574:
			return 93;
		case -725338054:
			return 94;
		case -770123507:
			return 95;
		case 1322486734:
			return 96;
		case -460939553:
			return 97;
		case -1451863552:
			return 98;
		case 713715980:
			return 101;
		case -31204969:
			return 102;
		case -1720064790:
			return 103;
		case 173833068:
			return 99;
		case -1681004136:
			return 100;
		case -532172775:
			return 104;
		case -739067737:
			return 105;
		case -1203133835:
			return 106;
		case -1947411598:
			return 107;
		case -1049753365:
			return 108;
		case -1298718762:
			return 109;
		case -595083064:
			return 110;
		case 884833917:
			return 111;
		case 2141950651:
			return 112;
		case -1437650729:
			return 113;
		case 672925454:
			return 126;
		case 846062774:
			return 127;
		case 1369756178:
			return 120;
		case -736172423:
			return 121;
		case 1597070291:
			return 122;
		case -159501564:
			return 124;
		case -1438809608:
			return 123;
		case -102682392:
			return 125;
		case -81068979:
			return 114;
		case 227618407:
			return 115;
		case 2106043438:
			return 116;
		case -1868356491:
			return 129;
		case -1380256064:
			return 117;
		case -2118469183:
			return 118;
		case -558997834:
			return 119;
		case 658339366:
			return 128;
		default:
			break;
	}
	return -1;
}

int func_716(int iParam0)
{
	switch (iParam0)
	{
		case 675537701:
			return 0;
		case -1915988145:
			return 1;
		case 38535626:
			return 2;
		case 1904167574:
			return 3;
		case 244711249:
			return 4;
		case -1859792564:
			return 5;
		case -1808688941:
			return 6;
		case -736296038:
			return 7;
		case -909439131:
			return 8;
		case 1917744724:
			return 9;
		case 821748379:
			return 10;
		case 196685551:
			return 11;
		case 1983548039:
			return 12;
		case 985737465:
			return 13;
		case -735550853:
			return 14;
		case -1716084250:
			return 15;
		case 869827975:
			return 16;
		default:
			break;
	}
	return -1;
}

int func_717(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
	return 1;
}

bool func_718(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_719(var uParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
		*uParam0 = (*uParam0 || uParam1);
	}
	else
	{
		*uParam0 = (*uParam0 - (*uParam0 && uParam1));
	}
}

void func_720(int iParam0)
{
	int iVar0;

	if (!func_566(iParam0))
	{
		return;
	}
	if (!MISC::_0x716F17F8A0419F95(((*Global_1360165)[iParam0 /*1157*/])->f_1))
	{
		iVar0 = func_860(iParam0);
		if (iVar0 != 0)
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_1 = _NAMESPACE48::_0x4F76E3676583D951(iVar0);
			_NAMESPACE48::_0xFCC6DB8DBE709BC8(((*Global_1360165)[iParam0 /*1157*/])->f_1);
		}
		else
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_1 = 0;
		}
	}
}

int func_721(int iParam0)
{
	if (!func_566(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		(*Global_1360165)[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

void func_722(int iParam0)
{
	if (func_550(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_721(iParam0)))
		{
			func_829(iParam0, 67108864, 1);
			func_556(iParam0, 19, 1);
		}
	}
}

float func_723(int iParam0)
{
	if (!func_566(iParam0))
	{
		return 0f;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_134;
}

void func_724(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = func_721(iParam0);
	iVar1 = func_557(iParam0, 0);
	func_861(iParam0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
		{
			PED::_0xF008E0BA1FE1D644(1);
			bVar2 = true;
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
		}
		_NAMESPACE48::_0x7B204F88F6C3D287(iVar1);
		if (bVar2)
		{
			PED::_0x7D4E70A67A651C71(1);
		}
	}
	_NAMESPACE48::_0xFCC6DB8DBE709BC8(iVar1);
}

float func_725(int iParam0, int iParam1, bool bParam2)
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
	return func_862(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
}

int func_726(int iParam0, bool bParam1)
{
	if (!func_566(iParam0))
	{
		return 0;
	}
	if (((*Global_1360165)[iParam0 /*1157*/])->f_127 != 0)
	{
		return ((*Global_1360165)[iParam0 /*1157*/])->f_127;
	}
	switch (iParam0)
	{
		case 3:
			return -698095578;
		case 7:
			return 230221572;
		case 0:
			return 47961446;
		case 5:
			return 1268955201;
		case 2:
			return 2103924091;
		case 1:
			return 1554677062;
		case 9:
			return 984702223;
		case 6:
			return -1825091419;
		case 11:
			return 948152617;
		case 8:
			return 795059774;
		case 23:
			return -1880884094;
		case 20:
			return 849012978;
		case 4:
			return 404801781;
		case 10:
			return -1094022447;
		case 26:
			return -1484815615;
		case 12:
		case 14:
			return 0;
		default:
			break;
	}
	if (bParam1)
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_127 = func_863(iParam0);
		return ((*Global_1360165)[iParam0 /*1157*/])->f_127;
	}
	return 0;
}

void func_727(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_565(iParam0);
	if (!PED::_0xA911EE21EDF69DAF(iVar0))
	{
		return;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iVar0, iVar1);
	iVar2 = 0;
	while (iVar2 < ITEMSET::GET_ITEMSET_SIZE(iVar1))
	{
		iVar3 = MISC::_0xEE04C0AFD4EFAF0E(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar1));
		if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
		{
		}
		else
		{
			if (!ENTITY::_0x88AD6CC10D8D35B2(iVar3))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar3, true, true);
			}
			ENTITY::_0x0D0DB2B6AF19A987(&iVar3);
		}
		iVar2++;
	}
}

int func_728(int iParam0, int iParam1)
{
	if (!func_566(iParam0))
	{
		return 0;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(((*Global_1360165)[iParam0 /*1157*/])->f_126) && iParam1)
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_126 = func_864(iParam0);
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_126;
}

void func_729(int iParam0)
{
	int iVar0;

	if (!func_566(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if ((Global_1357549->f_1675[iVar0 /*5*/])->f_1 == iParam0)
		{
			(Global_1357549->f_1675[iVar0 /*5*/])->f_1 = -1;
			((*Global_1360165)[iParam0 /*1157*/])->f_127 = 0;
		}
		iVar0++;
	}
}

void func_730(int iParam0, int iParam1)
{
	if (!func_566(iParam0))
	{
		return;
	}
	((*Global_1360165)[iParam0 /*1157*/])->f_70.f_12 = iParam1;
}

void func_731(int iParam0)
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
	iVar0 = func_600(iParam0);
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
	if (func_767(iParam0, 64))
	{
		func_732(iParam0);
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
	uVar3 = func_131(42);
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
				func_865(&(((*Global_1900383)[iParam0 /*45*/])->f_27));
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
		func_732(iParam0);
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
		if (func_866(1) < 1)
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
		func_867(&(((*Global_1900383)[iParam0 /*45*/])->f_26), bVar6);
	}
	if (!MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_767(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = TASK::IS_PED_IN_WRITHE(iVar0);
	bVar10 = false;
	iVar11 = func_868(iParam0);
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
	fVar15 = func_869(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_870(iParam0))
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
		func_871(((*Global_1900383)[iParam0 /*45*/])->f_26);
		func_872(((*Global_1900383)[iParam0 /*45*/])->f_26);
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
	if (func_532(iVar0) && !bVar9)
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
	iVar21 = func_866(iParam0);
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

void func_732(int iParam0)
{
	iParam0 = func_570(iParam0);
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

void func_733(bool bParam0)
{
	func_873(bParam0);
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

int func_734(int iParam0, var uParam1)
{
	if (!func_874(iParam0))
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

int func_735(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2535.f_1)
	{
		if (&Global_1946804->f_2535.f_43[iVar0 /*2*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_736(int iParam0, var uParam1)
{
	return (Global_1946804->f_2535.f_3[iParam0] && uParam1) != 0;
}

void func_737(int iParam0, var uParam1)
{
	Global_1946804->f_2535.f_3[iParam0] = (&Global_1946804->f_2535.f_3[iParam0] - (Global_1946804->f_2535.f_3[iParam0] && uParam1));
}

bool func_738(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar2 = func_779(iVar0, 1);
		if (!func_790(iVar2, 2))
		{
		}
		else if (&Global_1946804->f_2535.f_3[iVar0] != 0)
		{
		}
		else
		{
			if (iParam0 && func_791(iVar0) == -1)
			{
				func_792(iVar0, 0);
				func_793(Global_1946804->f_2589.f_2[(Global_1946804->f_2589 - 1) /*2*/], 2, 6);
			}
			func_799(iVar2, 3, 6);
			Global_1946804->f_2456[iVar0 /*2*/] = 0;
			(Global_1946804->f_2456[iVar0 /*2*/])->f_1 = 0;
			iVar1++;
		}
		iVar0++;
	}
	return iVar1 > 0;
}

void func_739(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;

	iParam0 = func_570(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_600(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_875(iVar6);
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

int func_740(int iParam0)
{
	if (!func_876(iParam0))
	{
		return 0;
	}
	if (!func_877())
	{
		return 1;
	}
	return 0;
}

void func_741(int iParam0, int iParam1)
{
	iParam0 = func_570(iParam0);
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

void func_742(var uParam0)
{
	*uParam0 = -377364164; /* GXTEntry: "Natural" */
	uParam0->f_1 = 357708345; /* GXTEntry: "Natural" */
}

void func_743(int iParam0, struct<2> Param1)
{
	iParam0 = func_570(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_878(iParam0, Param1))
	{
	}
	if (!func_879(iParam0, Param1.f_1))
	{
	}
}

void func_744(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_880((*uParam0)[iVar0 /*94*/]);
		iVar0++;
	}
}

void func_745(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 57)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_746(var uParam0)
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

void func_747(var uParam0)
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

void func_748(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 100;
	*uParam1 = iVar0;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
}

void func_749(int iParam0, var uParam1)
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

void func_750(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1f;
}

void func_751(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -15;
}

void func_752(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
}

int func_753(int iParam0)
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

void func_754(int iParam0, int iParam1)
{
	MISC::_COPY_MEMORY(&(Global_1900383->f_508), Global_40.f_1095.f_1[iParam1 /*436*/], 436);
	MISC::_COPY_MEMORY(Global_40.f_1095.f_1[iParam1 /*436*/], Global_40.f_1095.f_1[iParam0 /*436*/], 436);
	MISC::_COPY_MEMORY(Global_40.f_1095.f_1[iParam0 /*436*/], &(Global_1900383->f_508), 436);
}

void func_755(int iParam0, int iParam1)
{
	MISC::_COPY_MEMORY(&(Global_1900383->f_463), (*Global_1900383)[iParam1 /*45*/], 45);
	MISC::_COPY_MEMORY((*Global_1900383)[iParam1 /*45*/], (*Global_1900383)[iParam0 /*45*/], 45);
	MISC::_COPY_MEMORY((*Global_1900383)[iParam0 /*45*/], &(Global_1900383->f_463), 45);
}

int func_756(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<4> Var29;
	bool bVar58;
	int iVar59;

	Var0.f_9 = -1591664384;
	Var29.f_9 = -1591664384;
	if (!func_881(iParam0, &Var0))
	{
		return 0;
	}
	bVar58 = false;
	if (!func_881(iParam1, &Var29))
	{
		bVar58 = true;
	}
	if (bVar58)
	{
		iVar59 = func_882(iParam1);
		if (iVar59 == 0)
		{
			return 0;
		}
		if (!func_883(Var0, Var0.f_5, iVar59, 0, 0))
		{
			return 0;
		}
	}
	else if (!func_884(Var0, Var29, 0, 0))
	{
		return 0;
	}
	return 1;
}

void func_757(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

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
	if (func_885(iParam0))
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
	if (func_375(iParam0))
	{
		uVar3 = func_376(iParam0);
		if (func_886(uVar3))
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

var func_758()
{
	return Global_1900383->f_393;
}

void func_759(int iParam0)
{
	Global_1900383->f_393 = iParam0;
}

int func_760(var uParam0, int iParam1, var uParam2)
{
	bool bVar0;

	*uParam0 = 0;
	*iParam1 = 0;
	*uParam2 = 0;
	if (func_221())
	{
		if (func_887())
		{
			bVar0 = false;
			if (!func_132(((*Global_1835011)[15 /*74*/])->f_1, 1) && !func_131(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*uParam0 = func_888();
				*iParam1 = func_889();
				*uParam2 = func_890();
				return 1;
			}
			else
			{
				*uParam0 = func_891();
				*iParam1 = func_892();
				*uParam2 = func_893();
				return 1;
			}
		}
		else if (func_392())
		{
			if (!func_132(((*Global_1835011)[60 /*74*/])->f_1, 1))
			{
				*uParam0 = func_894();
				*iParam1 = func_895();
				*uParam2 = func_896();
				return 1;
			}
			else
			{
				*uParam0 = func_897();
				*iParam1 = func_898();
				*uParam2 = func_899();
				return 1;
			}
		}
	}
	else if (func_887())
	{
		*uParam0 = func_900();
		*iParam1 = func_901();
		*uParam2 = func_902();
		return 1;
	}
	else if (func_392())
	{
		*uParam0 = func_903();
		*iParam1 = func_904();
		*uParam2 = func_905();
		return 1;
	}
	return 0;
}

void func_761(int iParam0, var uParam1)
{
	iParam0 = func_570(iParam0);
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

void func_762(int iParam0, var uParam1)
{
	iParam0 = func_570(iParam0);
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

void func_763(int iParam0, var uParam1)
{
	iParam0 = func_570(iParam0);
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

void func_764(int iParam0, int iParam1)
{
	iParam0 = func_570(iParam0);
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

void func_765(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iParam0 = func_570(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_609(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		func_760(&uVar1, &iVar0, &uVar2);
	}
	iVar3 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	if (iParam1 > iVar3)
	{
		return;
	}
	fVar4 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iParam1));
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_372 = iParam1;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_372.f_1 = fVar4;
	func_906(iParam1);
	iVar5 = func_600(iParam0);
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

void func_766(int iParam0, int iParam1)
{
	iParam0 = func_570(iParam0);
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

bool func_767(int iParam0, int iParam1)
{
	iParam0 = func_570(iParam0);
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

int func_768(int iParam0, var uParam1)
{
	struct<4> Var0;

	Var0.f_9 = -1591664384;
	if (!func_881(iParam0, &Var0))
	{
		return 0;
	}
	*uParam1 = func_907(Var0, 1415981582, 0);
	if (!func_425(*uParam1, 0))
	{
		return 0;
	}
	return 1;
}

int func_769(int iParam0, var uParam1)
{
	struct<4> Var0;

	Var0.f_9 = -1591664384;
	if (!func_881(iParam0, &Var0))
	{
		return 0;
	}
	*uParam1 = func_907(Var0, -2119169513, 0);
	if (!func_425(*uParam1, 0))
	{
		return 0;
	}
	return 1;
}

int func_770(int iParam0, var uParam1)
{
	struct<4> Var0;

	if (!func_908(856287005, iParam0))
	{
		return 0;
	}
	Var0 = { func_909() };
	*uParam1 = func_907(Var0, iParam0, 0);
	if (!func_425(*uParam1, 0))
	{
		return 0;
	}
	return 1;
}

void func_771(int iParam0)
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

void func_772(int iParam0, var uParam1)
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
	func_910(iParam0, *uParam1);
	func_910(iParam0, uParam1->f_1);
}

void func_773(int iParam0)
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

void func_774(int iParam0, var uParam1)
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
	func_910(iParam0, *uParam1);
	func_910(iParam0, uParam1->f_1);
	func_910(iParam0, uParam1->f_2);
	func_910(iParam0, uParam1->f_3);
	func_910(iParam0, uParam1->f_4);
	func_910(iParam0, uParam1->f_5);
}

int func_775(int iParam0, int iParam1, bool bParam2)
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

bool func_776(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_777()
{
	return Global_1109400->f_244;
}

void func_778(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_629() - fParam1);
	func_911(uParam0, 1);
	func_912(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_779(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1889597427;
		case 1:
			return -1130352927;
		case 2:
			return 389988485;
		case 3:
			return 1780904876;
		case 4:
			return 1367443060;
		case 5:
			return -1506259487;
		case 6:
			return -676503695;
		case 7:
			return 383349088;
		case 8:
			return -1292426046;
		case 9:
			return 1422688607;
		case 10:
			return 1108822547;
		case 11:
			return -338487716;
		case 12:
			return 1742327865;
		case 13:
			return 1600962399;
		case 14:
			return 1849504272;
		case 15:
			return 1672288269;
		case 16:
			return 1250092473;
		case 17:
			return -893163968;
		case 18:
			return -450913544;
		case 19:
			return -1364808185;
		case 20:
			return -1197751823;
		case 21:
			return 304805134;
		case 22:
			return -1505978566;
		case 23:
			return 1145151482;
		case 24:
			return -1176744536;
		case 25:
			return 673166414;
		case 26:
			return -207860920;
		case 27:
			return 99217379;
		case 28:
			return -735900586;
		case 29:
			return -426430150;
		case 30:
			return 1788623170;
		case 31:
			return -1130865351;
		case 32:
			return -1884748965;
		case 33:
			return -1586649372;
		case 34:
			return 788010710;
		case 35:
			return 1958421083;
		case 36:
			return -1944638739;
		case 37:
			return 1900541263;
		case 38:
			return -1489346253;
		case 39:
			return -358215195;
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

int func_780(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_425(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_586(iParam0);
	if (iVar0 == -427144552 && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_0x5C2EA6C44F515F34(iParam0);
	}
	else if (iVar0 == 307971639 && WEAPON::_0x1F7977C9101F807F(iParam0))
	{
		return iParam0;
	}
	if (func_428(iParam0, 1399091007))
	{
		func_913(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_781(char* sParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	*uParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_658(bParam4), sParam0, iParam3, uParam2);
	if (*uParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_782(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_783(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("weapon_unarmed"));
}

int func_784(int iParam0)
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

int func_785(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_914(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_916(&Var0, func_915(0));
	}
	if (!func_917(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_784(iVar14);
	return uVar15;
}

bool func_786(int iParam0)
{
	return WEAPON::_0xC4DEC3CA8C365A5D(iParam0);
}

int func_787(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return &(Global_1946804->f_1497.f_1[func_422(iParam0, 1) /*3*/]);
}

void func_788(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_789(struct<4> Param0)
{
	int iVar0;
	int iVar1;

	switch (Param0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 26:
			if (Global_1946804->f_850 >= 25)
			{
				return;
			}
			if (func_844(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1946804->f_850)
				{
					iVar1 = ((Global_1946804->f_855 + iVar0) % 25);
					if ((&Global_1946804->f_668[iVar1 /*4*/] == Param0 && (Global_1946804->f_668[iVar1 /*4*/])->f_1 == Param0.f_1) && (Global_1946804->f_668[iVar1 /*4*/])->f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_845(Param0);
			*(Global_1946804->f_668[Global_1946804->f_856 /*4*/]) = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_788(8);
			break;
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946804->f_851 >= 25)
			{
				return;
			}
			if (func_844(Param0))
			{
				return;
			}
			func_845(Param0);
			*(Global_1946804->f_567[Global_1946804->f_851 /*4*/]) = { Param0 };
			Global_1946804->f_851++;
			func_788(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_918(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

bool func_790(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_422(iParam0, 1) /*11*/])->f_10 && iParam1) != 0;
}

int func_791(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2589)
	{
		if (&Global_1946804->f_2589.f_2[iVar0 /*2*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_792(int iParam0, int iParam1)
{
	func_919(&(Global_1946804->f_2589), iParam0, iParam1);
}

void func_793(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_794(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_422(iParam0, 1) /*11*/])->f_10 = ((Global_1946804->f_57[func_422(iParam0, 1) /*11*/])->f_10 || iParam1);
}

void func_795(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_779(iParam1, 1);
	if (!bParam2 && iVar2 == 1367443060)
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = func_920(iParam4);
		}
		else if (iParam4 != &Global_1946804->f_57[iParam1 /*11*/])
		{
			iVar1 = PED::_0x5FF9A878C3D115B8(iParam4, PED::_GET_METAPED_TYPE(iParam0), bParam2);
		}
	}
	if (bParam3)
	{
		iVar0 = 0;
		while (iVar0 < (Global_1946804->f_57[iParam1 /*11*/])->f_1)
		{
			if (&(Global_1946804->f_57[iParam1 /*11*/])->f_2[iVar0] != iVar1)
			{
				PED::_0xDF631E4BCE1B1FC4(iParam0, &((Global_1946804->f_57[iParam1 /*11*/])->f_2[iVar0]), 0, bParam2);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < (Global_1946804->f_57[iParam1 /*11*/])->f_1)
		{
			if (&(Global_1946804->f_57[iParam1 /*11*/])->f_2[iVar0] != iVar1)
			{
				PED::_0xD710A5007C2AC539(iParam0, &((Global_1946804->f_57[iParam1 /*11*/])->f_2[iVar0]), 0);
			}
			iVar0++;
		}
	}
}

bool func_796(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

bool func_797(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[iParam0 /*11*/])->f_9 && iParam1) != 0;
}

void func_798(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 10;
	if (func_790(1108822547, 6))
	{
		if (bParam2)
		{
			func_795(iParam0, iVar0, func_106() != -1, 0, 0);
			func_794(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		PED::_0xBC6DF00D7A4A6819(iParam0, Global_1946804->f_2776.f_1, &(Global_1946804->f_2776.f_3[0]), &(Global_1946804->f_2776.f_3[1]), &(Global_1946804->f_2776.f_3[2]), Global_1946804->f_2776.f_8, Global_1946804->f_2776.f_9, Global_1946804->f_2776.f_10, Global_1946804->f_2776.f_11);
		func_799(1108822547, 1, 6);
	}
	Global_1946804->f_857++;
	if (!bParam1)
	{
		return;
	}
	PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
}

void func_799(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_422(iParam0, 1) /*11*/])->f_10 = ((Global_1946804->f_57[func_422(iParam0, 1) /*11*/])->f_10 - ((Global_1946804->f_57[func_422(iParam0, 1) /*11*/])->f_10 && iParam1));
}

int func_800(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = iParam0;
	while (iVar0 < Global_1058888->f_40501)
	{
		if (iVar0 + 1 < 32)
		{
			*(Global_1058888->f_40501.f_1[iVar0 /*2*/]) = { *(Global_1058888->f_40501.f_1[iVar0 + 1 /*2*/]) };
		}
		iVar0++;
	}
	Var1 = -1;
	if (Global_1058888->f_40501 < 32)
	{
		*(Global_1058888->f_40501.f_1[Global_1058888->f_40501 /*2*/]) = { Var1 };
	}
	Global_1058888->f_40501 = (Global_1058888->f_40501 - 1);
	if (Global_1058888->f_40501 < 0)
	{
		Global_1058888->f_40501 = 0;
	}
	return 1;
}

int func_801(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = (Global_1058888->f_40501 - 1);
	Var1 = -1;
	while (iVar0 >= iParam0)
	{
		if (iVar0 + 1 < 32)
		{
			*(Global_1058888->f_40501.f_1[iVar0 + 1 /*2*/]) = { *(Global_1058888->f_40501.f_1[iVar0 /*2*/]) };
		}
		iVar0 = (iVar0 - 1);
	}
	*(Global_1058888->f_40501.f_1[iParam0 /*2*/]) = { Var1 };
	Global_1058888->f_40501++;
	if (Global_1058888->f_40501 > 32)
	{
		Global_1058888->f_40501 = 32;
	}
	return 1;
}

int func_802()
{
	if (Global_1572887->f_12 != -1)
	{
		return 0;
	}
	return Global_1347477->f_203;
}

float func_803(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

float func_804()
{
	float fVar0;
	int iVar1;

	fVar0 = func_921(13);
	iVar1 = func_922(fVar0);
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

float func_805()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_806()
{
	if (func_923())
	{
		if (DLC::_0xA16B4FBA7887D7BA())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_807()
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

float func_808()
{
	return Global_1955565->f_3;
}

void func_809(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;

	sVar0 = func_924(iParam0, 1, 0, 0);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_12[1]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_16[1]), iParam2);
}

void func_810(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_924(iParam0, 2, 0, 0);
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

float func_811(float fParam0, float fParam1, float fParam2)
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

bool func_812()
{
	return func_921(12) <= -99f;
}

bool func_813()
{
	return func_921(12) >= 99f;
}

int func_814(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_566(iParam0))
	{
		return 0;
	}
	if (func_549(iParam0, 32, 1))
	{
		return 0;
	}
	if (!func_549(iParam0, 2, 1))
	{
		return 0;
	}
	if (!func_549(iParam0, 4, 1))
	{
		return 0;
	}
	if (func_558(iParam0, 33, 1))
	{
		return 0;
	}
	if (func_371(iParam0))
	{
		return 0;
	}
	if (func_925(iParam0))
	{
		if (!bParam2)
		{
			return 0;
		}
	}
	if (!bParam1)
	{
		if (Global_1357549->f_1497 == iParam0)
		{
			return 0;
		}
	}
	return 1;
}

char* func_815(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return "REGION_INVALID";
		case 0:
			return "REGION_BAY_CRAWDADWILLIES";
		case 1:
			return "REGION_BAY_MACOMBS_END";
		case 2:
			return "REGION_BAY_MERKINSWALLER";
		case 3:
			return "REGION_BAY_LAGRAS";
		case 4:
			return "REGION_BAY_LAKAY";
		case 5:
			return "REGION_BAY_SAINT_DENIS";
		case 6:
			return "REGION_BAY_ORANGE_PLANTATION";
		case 7:
			return "REGION_BAY_SERIAL_KILLER";
		case 8:
			return "REGION_BAY_SERENDIPITY";
		case 9:
			return "REGION_BAY_SHADYBELLE";
		case 10:
			return "REGION_BAY_SILTWATERSTRAND";
		case 11:
			return "REGION_BGV_APPLESEEDTIMBER";
		case 12:
			return "REGION_BGV_BERYLS_DREAM";
		case 13:
			return "REGION_BGV_BLACKBONEFOREST_TRAPPER";
		case 14:
			return "REGION_BGV_DAKOTARIVER_TRAPPER";
		case 15:
			return "REGION_BGV_FORTRIGGS";
		case 16:
			return "REGION_BGV_HANGINGDOG";
		case 17:
			return "REGION_BGV_LONEMULESTEAD";
		case 18:
			return "REGION_BGV_MISSING_HUSBAND";
		case 19:
			return "REGION_BGV_MONTO_REST";
		case 20:
			return "REGION_BGV_OWANJILA_DAM";
		case 21:
			return "REGION_BGV_PAINTEDSKY";
		case 22:
			return "REGION_BGV_PRONGHORN";
		case 23:
			return "REGION_BGV_RIGGS_STATION";
		case 24:
			return "REGION_BGV_SHACK";
		case 25:
			return "REGION_BGV_SHEPHERDS_RISE";
		case 26:
			return "REGION_BGV_STRAWBERRY";
		case 27:
			return "REGION_BGV_VALLEY_VIEW";
		case 28:
			return "REGION_BGV_WALLACE_STATION";
		case 29:
			return "REGION_BGV_WATSONSCABIN";
		case 30:
			return "REGION_BLU_CANEBREAK_MANOR";
		case 31:
			return "REGION_BLU_COPPERHEAD";
		case 32:
			return "REGION_BLU_SISIKA";
		case 33:
			return "REGION_CML_BACCHUSBRIDGE";
		case 34:
			return "REGION_CML_DINO_LADY";
		case 35:
			return "REGION_CML_OLDFORTWALLACE";
		case 36:
			return "REGION_CML_SIXPOINTCABIN";
		case 37:
			return "REGION_GRT_BEECHERS";
		case 38:
			return "REGION_GRT_BLACKWATER";
		case 39:
			return "REGION_GRT_QUAKERS_COVE";
		case 40:
			return "REGION_GRZ_ADLERRANCH";
		case 41:
			return "REGION_GRZ_DEAD_RIVAL";
		case 50:
			return "REGION_GRZ_CALUMETRAVINE";
		case 51:
			return "REGION_GRE_CIVIL_WAR_BRIDE";
		case 42:
			return "REGION_GRZ_CHEZPORTER";
		case 52:
			return "REGION_GRZ_COHUTTA";
		case 43:
			return "REGION_GRZ_COLTER";
		case 44:
			return "REGION_GRZ_FROZEN_EXPLORER";
		case 53:
			return "REGION_GRZ_GUNFIGHT";
		case 45:
			return "REGION_GRZ_MILLESANI_CLAIM";
		case 46:
			return "REGION_GRZ_MOUNTAIN_MAN";
		case 47:
			return "REGION_GRZ_STARVING_CHILDREN";
		case 48:
			return "REGION_GRZ_TEMPEST_RIM";
		case 54:
			return "REGION_GRZ_THELOFT";
		case 55:
			return "REGION_GRE_VETERAN";
		case 56:
			return "REGION_GRZ_WAPITI";
		case 49:
			return "REGION_GRZ_WINTERMINING_TOWN";
		case 57:
			return "REGION_GUA_AGUASDULCES";
		case 58:
			return "REGION_GUA_CAMP";
		case 59:
			return "REGION_GUA_CINCOTORRES";
		case 60:
			return "REGION_GUA_LACAPILLA";
		case 61:
			return "REGION_GUA_MANICATO";
		case 62:
			return "REGION_HRT_ABANDONED_MILL";
		case 64:
			return "REGION_HRT_CARMODYDELL";
		case 65:
			return "REGION_HRT_CORNWALLKEROSENE";
		case 66:
			return "REGION_HRT_CROP_FARM";
		case 67:
			return "REGION_HRT_CUMBERLANDFALLS";
		case 68:
			return "REGION_HRT_DOWNSRANCH";
		case 69:
			return "REGION_HRT_EMERALDRANCH";
		case 70:
			return "REGION_HRT_GRANGERS_HOGGERY";
		case 71:
			return "REGION_HRT_HORSESHOEOVERLOOK";
		case 72:
			return "REGION_HRT_LARNEDSOD";
		case 73:
			return "REGION_HRT_LOONY_CULT";
		case 74:
			return "REGION_HRT_LUCKYSCABIN";
		case 75:
			return "REGION_HRT_SWANSONS_STATION";
		case 76:
			return "REGION_HRT_VALENTINE";
		case 77:
			return "REGION_ROA_ABERDEENPIGFARM";
		case 78:
			return "REGION_ROA_ANNESBURG";
		case 79:
			return "REGION_ROA_BEAVERHOLLOW";
		case 63:
			return "REGION_ROA_BEECHERS_C";
		case 80:
			return "REGION_ROA_BLACK_BALSAM_RISE";
		case 81:
			return "REGION_ROA_BRANDYWINE_DROP";
		case 82:
			return "REGION_ROA_BUTCHERCREEK";
		case 83:
			return "REGION_ROA_DOVERHILL";
		case 84:
			return "REGION_ROA_HAPPY_FAMILY";
		case 85:
			return "REGION_ROA_ISOLATIONIST";
		case 86:
			return "REGION_ROA_MACLEANSHOUSE";
		case 87:
			return "REGION_ROA_MOSSY_FLATS";
		case 88:
			return "REGION_ROA_ROANOKE_VALLEY";
		case 89:
			return "REGION_ROA_ROCKYSEVEN";
		case 90:
			return "REGION_ROA_TRAPPER";
		case 91:
			return "REGION_ROA_VANHORNMANSION";
		case 92:
			return "REGION_ROA_VANHORNPOST";
		case 93:
			return "REGION_SCM_BRAITHWAITEMANOR";
		case 94:
			return "REGION_SCM_BULGERGLADE";
		case 95:
			return "REGION_SCM_CALIGAHALL";
		case 96:
			return "REGION_SCM_CATFISHJACKSONS";
		case 97:
			return "REGION_SCM_CLEMENSCOVE";
		case 98:
			return "REGION_SCM_CLEMENSPOINT";
		case 99:
			return "REGION_SCM_COMPSONS_STEAD";
		case 100:
			return "REGION_SCM_DAIRY_FARM";
		case 101:
			return "REGION_SCM_HORSE_SHOP";
		case 102:
			return "REGION_SCM_LONNIESSHACK";
		case 103:
			return "REGION_SCM_LOVE_TRIANGLE";
		case 104:
			return "REGION_SCM_RADLEYS_PASTURE";
		case 105:
			return "REGION_SCM_RHODES";
		case 106:
			return "REGION_SCM_SLAVE_PEN";
		case 107:
			return "REGION_TAL_AURORA_BASIN";
		case 108:
			return "REGION_TAL_DEAD_SETTLER";
		case 109:
			return "REGION_TAL_COCHINAY";
		case 110:
			return "REGION_TAL_MANZANITAPOST";
		case 111:
			return "REGION_TAL_PACIFICUNIONRR";
		case 112:
			return "REGION_TAL_TANNERSREACH";
		case 113:
			return "REGION_TAL_TRAPPER";
		case 126:
			return "REGION_HEN_MACFARLANES_RANCH";
		case 127:
			return "REGION_HEN_THIEVES_LANDING";
		case 120:
			return "REGION_CHO_ARMADILLO";
		case 121:
			return "REGION_CHO_COOTS_CHAPEL";
		case 122:
			return "REGION_CHO_DON_JULIO_HOUSE";
		case 124:
			return "REGION_CHO_RIDGEWOOD_FARM";
		case 123:
			return "REGION_CHO_RILEYS_CHARGE";
		case 125:
			return "REGION_CHO_TWIN_ROCKS";
		case 114:
			return "REGION_GAP_GAPTOOTH_BREACH";
		case 115:
			return "REGION_GAP_TUMBLEWEED";
		case 116:
			return "REGION_GAP_RATHSKELLER_FORK";
		case 129:
			return "REGION_GAP_SOLOMONS_FOLLY";
		case 117:
			return "REGION_RIO_BENEDICT_POINT";
		case 118:
			return "REGION_RIO_FORT_MERCER";
		case 119:
			return "REGION_RIO_PLAIN_VIEW";
		case 128:
			return "REGION_CENTRALUNIONRR";
		default:
			break;
	}
	return "REGION_INVALID";
	return "REGION_INVALID";
}

char* func_816(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

char* func_817(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LBS_AMBARINO_BOUNTY";
		case 1:
			return "LBS_NEW_HANOVER_BOUNTY";
		case 2:
			return "LBS_LEMOYNE_BOUNTY";
		case 3:
			return "LBS_W_ELIZABETH_BOUNTY";
		case 4:
			return "LBS_NEW_AUSTIN_BOUNTY";
		case 5:
			return "LBS_GUARMA_BOUNTY";
		default:
			break;
	}
	return "LBS_INVALID_BOUNTY";
}

void func_818(int iParam0, bool bParam1, char* sParam2)
{
	int iVar0;

	iVar0 = func_721(iParam0);
	if (!func_550(iParam0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	PED::_0xF1C03A5352243A30(iVar0);
	if (bParam1)
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0, 0, 1);
	}
	else
	{
		TASK::CLEAR_PED_TASKS(iVar0, 1, 0);
	}
}

void func_819(int iParam0, int iParam1)
{
	if (!func_566(iParam0))
	{
		return;
	}
	((*Global_1360165)[iParam0 /*1157*/])->f_11 = iParam1;
}

int func_820(int iParam0, vector3 vParam1, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	if (!func_566(iParam0))
	{
		return 0;
	}
	switch (((*Global_1360165)[iParam0 /*1157*/])->f_3)
	{
		case 0:
			if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(89040947))
			{
				SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(89040947);
			}
			((*Global_1360165)[iParam0 /*1157*/])->f_3 = 1;
		case 1:
			if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(89040947))
			{
				return 0;
			}
			if (Global_1359489->f_9 != -1)
			{
				return 0;
			}
			Global_1359489->f_9 = iParam0;
			if (iParam4 == 0)
			{
				if (iParam9 != -1)
				{
					iParam4 = func_926(iParam0, iParam9, bParam7, 1);
				}
				else if ((((*Global_1360165)[iParam0 /*1157*/])->f_4.f_2 != 0 && ((*Global_1360165)[iParam0 /*1157*/])->f_4.f_2 == (Global_40.f_4942[iParam0 /*60*/])->f_59) && (func_121(((*Global_1360165)[iParam0 /*1157*/])->f_4.f_2) || func_120(((*Global_1360165)[iParam0 /*1157*/])->f_4.f_2)))
				{
					iParam4 = ((*Global_1360165)[iParam0 /*1157*/])->f_4.f_1;
				}
				else
				{
					iParam4 = func_926(iParam0, Global_40.f_4283, bParam7, 1);
				}
				if (((*Global_1360165)[iParam0 /*1157*/])->f_63 != iParam4 && func_927(((*Global_1360165)[iParam0 /*1157*/])->f_63))
				{
					if (!func_928(iParam0, 0))
					{
						func_551(iParam0, 25, 0);
					}
				}
			}
			((*Global_1360165)[iParam0 /*1157*/])->f_4 = { func_929(iParam0, iParam4, vParam1, bParam5, bParam6, bParam8, (Global_40.f_4942[iParam0 /*60*/])->f_59, bParam11) };
			if (!bParam6)
			{
				func_556(iParam0, 44, 1);
			}
			((*Global_1360165)[iParam0 /*1157*/])->f_3 = 2;
		case 2:
			if (!func_235(func_721(iParam0), 0))
			{
				return 0;
			}
			if (bParam5 && iParam10)
			{
				if (!func_235(func_565(iParam0), 0))
				{
					return 0;
				}
			}
			((*Global_1360165)[iParam0 /*1157*/])->f_3 = 3;
		case 3:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_821(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_550(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_930(iParam0, bParam3);
	}
	else
	{
		func_931(iParam0, bParam3);
	}
	if (bParam2)
	{
		func_932(iParam0, bParam3);
	}
	else
	{
		func_933(iParam0, bParam3);
	}
}

int func_822(int iParam0, int iParam1)
{
	var uVar0;

	if (!func_550(iParam0))
	{
		return 0;
	}
	if (iParam1 == 296923297 || iParam1 == 1237718549)
	{
		return 1;
	}
	uVar0 = func_934(iParam0, iParam1);
	return uVar0;
}

void func_823(int iParam0, int iParam1, bool bParam2)
{
	if (!func_550(iParam0))
	{
		return;
	}
	if (!func_822(iParam0, iParam1))
	{
		return;
	}
	(Global_40.f_4942[iParam0 /*60*/])->f_3 = iParam1;
	if (bParam2)
	{
		func_551(iParam0, 25, 1);
	}
}

void func_824(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (func_935(iParam2))
		{
			iVar0 = func_936(iParam2, -1);
			if (func_300(iParam1, iVar0))
			{
				if (func_937(iParam1, iVar0))
				{
					if (func_938(iParam1, iVar0))
					{
						PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam1, "metaped_outfit_request"), iParam1, true, false);
						func_939(iParam1);
					}
				}
				else
				{
					PED::_0x1902C4CFCC5BE57C(iParam1, iVar0);
				}
			}
		}
		func_302(iParam0, iParam1, 0);
		PED::_0xCC8CA3E88256E58F(iParam1, 0, 1, 1, 1, 0);
		PED::_0xE3144B932DFDFF65(iParam1, 0f, -1, 1, 1);
		PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam1, 10, "ALL");
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 3);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 0);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 5);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 7);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 8);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 9);
		if (bParam3)
		{
			func_551(iParam0, 66, 0);
		}
	}
}

void func_825(int iParam0)
{
	func_296(iParam0);
	func_297(iParam0, 0);
}

void func_826(int iParam0, int iParam1)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("weapon_unarmed"), true, 0, false, false);
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("weapon_unarmed"), true, 1, false, false);
		if (PED::IS_PED_A_PLAYER(iParam0) && iParam1 == 1)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::PLAYER_ID(), joaat("weapon_unarmed"), 0);
			}
		}
	}
}

int func_827(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar1, true, iVar0, true);
		if (!WEAPON::IS_WEAPON_VALID(iVar1))
		{
		}
		else if (!WEAPON::_0x0556E9D2ECF39D01(iVar1))
		{
		}
		else
		{
			iVar2 = 1;
			WEAPON::_0xE9BD19F8121ADE3E(iParam0, iVar1);
		}
		iVar0++;
	}
	return iVar2;
}

void func_828(int iParam0, int iParam1)
{
	if (!func_566(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 11:
			if ((Global_40.f_4942[iParam0 /*60*/])->f_3 == -1341683964)
			{
				func_940(iParam1, joaat("weapon_revolver_cattleman_sadie"), 0, 0, 2, 1, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
				func_940(iParam1, joaat("weapon_revolver_cattleman_sadie_dualwield"), 0, 0, 3, 1, 1, 1056964608, 1065353216, -1, 0, 1, 0, 0);
			}
			break;
	}
}

void func_829(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_550(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (Global_40.f_4942[iParam0 /*60*/] || iParam1);
}

int func_830(int iParam0, bool bParam1, bool bParam2, var uParam3, var uParam4, var uParam5, float fParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	vector3 vVar0;
	int iVar3;
	char* sVar4;
	char* sVar12;

	if (!func_566(iParam0))
	{
		return 0;
	}
	vVar0 = { uParam3, uParam4, uParam5 };
	iVar3 = func_728(iParam0, 1);
	switch (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_12)
	{
		case 0:
			((*Global_1360165)[iParam0 /*1157*/])->f_124 = _NAMESPACE48::_0x31C70A716CAE1FEE(iVar3);
			((*Global_1360165)[iParam0 /*1157*/])->f_125 = 0;
			if (func_235(((*Global_1360165)[iParam0 /*1157*/])->f_124, 0))
			{
				func_730(iParam0, 3);
			}
			else
			{
				if (!func_941(iParam0) && func_942(iParam0, &sVar4))
				{
					_NAMESPACE48::_0x187D65F3AEC5D679(func_726(iParam0, 1), &sVar4);
				}
				func_568(iParam0, 256, 0);
				func_730(iParam0, 1);
			}
			break;
		case 1:
			if (!Global_1359489->f_12)
			{
				if (!_NAMESPACE48::_0xA8120EBEAF290C7A(iVar3))
				{
					return func_943();
				}
				if (bParam2 && !func_174(vVar0))
				{
					_NAMESPACE48::_0x59C7AD6FEA2AC449(iVar3, vVar0);
				}
				else if (bParam2)
				{
					_NAMESPACE48::_0xD4B614179BCD0654(iVar3);
				}
				if (!func_944(iParam0, vVar0, fParam6, bParam10))
				{
					return func_943();
				}
				if (func_235(((*Global_1360165)[iParam0 /*1157*/])->f_124, 0))
				{
					if (_NAMESPACE48::_0x31C70A716CAE1FEE(iVar3) != ((*Global_1360165)[iParam0 /*1157*/])->f_124)
					{
					}
					if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(((*Global_1360165)[iParam0 /*1157*/])->f_124, true))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(((*Global_1360165)[iParam0 /*1157*/])->f_124, true, true);
					}
					ENTITY::FREEZE_ENTITY_POSITION(((*Global_1360165)[iParam0 /*1157*/])->f_124, true);
					ENTITY::SET_ENTITY_INVINCIBLE(((*Global_1360165)[iParam0 /*1157*/])->f_124, true);
					func_730(iParam0, 2);
				}
			}
			break;
		case 2:
			if (!func_235(((*Global_1360165)[iParam0 /*1157*/])->f_124, 0))
			{
				func_730(iParam0, 1);
				return func_943();
			}
			if (!bParam9 || PED::_0xA0BC8FAED8CFEB3C(((*Global_1360165)[iParam0 /*1157*/])->f_124))
			{
				func_730(iParam0, 3);
			}
			break;
		case 3:
			if (!func_235(((*Global_1360165)[iParam0 /*1157*/])->f_124, 0))
			{
				func_730(iParam0, 1);
				return func_943();
			}
			if (bParam7)
			{
				if (!func_945(iParam0, ((*Global_1360165)[iParam0 /*1157*/])->f_124, 1))
				{
					return func_943();
				}
			}
			if ((bParam2 && !func_174(vVar0)) && !func_417(vVar0, ENTITY::GET_ENTITY_COORDS(((*Global_1360165)[iParam0 /*1157*/])->f_124, true, false), 1056964608, 1))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(((*Global_1360165)[iParam0 /*1157*/])->f_124))
				{
					ENTITY::DETACH_ENTITY(((*Global_1360165)[iParam0 /*1157*/])->f_124, true, true);
				}
				func_349(((*Global_1360165)[iParam0 /*1157*/])->f_124, vVar0, fParam6, 2, 1073741824);
			}
			if (bParam1)
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(((*Global_1360165)[iParam0 /*1157*/])->f_124))
				{
					if (func_558(iParam0, 39, 1))
					{
					}
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(((*Global_1360165)[iParam0 /*1157*/])->f_124, true, true);
				}
				func_551(iParam0, 39, 1);
				func_568(iParam0, 8, 1);
				func_568(iParam0, 64, 0);
				((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			}
			ENTITY::FREEZE_ENTITY_POSITION(((*Global_1360165)[iParam0 /*1157*/])->f_124, false);
			ENTITY::SET_ENTITY_INVINCIBLE(((*Global_1360165)[iParam0 /*1157*/])->f_124, false);
			func_946(((*Global_1360165)[iParam0 /*1157*/])->f_124, iParam0);
			if (bParam8)
			{
				POPULATION::_0xF74E134F40192884(((*Global_1360165)[iParam0 /*1157*/])->f_124, 1);
			}
			sVar12 = func_947(iParam0, func_392());
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar12))
			{
				_NAMESPACE48::_0x63AA2B8EB087886A(func_726(iParam0, 1), MISC::GET_HASH_KEY(sVar12));
			}
			((*Global_1360165)[iParam0 /*1157*/])->f_70 = ((*Global_1360165)[iParam0 /*1157*/])->f_124;
			((*Global_1360165)[iParam0 /*1157*/])->f_124 = 0;
			func_556(iParam0, 40, 0);
			func_568(iParam0, 32, 0);
			func_730(iParam0, 0);
			return ((*Global_1360165)[iParam0 /*1157*/])->f_70;
	}
	return func_943();
}

void func_831(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	switch (iParam0)
	{
		case 0:
		case 6:
			iVar0 = 0;
			break;
		case 3:
			iVar1 = ATTRIBUTE::GET_MAX_ATTRIBUTE_POINTS(iParam1, 16);
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(BUILTIN::ROUND((IntToFloat(iVar1) * 0.4f)), BUILTIN::ROUND((IntToFloat(iVar1) * 0.75f)));
			break;
		default:
			iVar1 = ATTRIBUTE::GET_MAX_ATTRIBUTE_POINTS(iParam1, 16);
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(BUILTIN::ROUND((IntToFloat(iVar1) * 0.1f)), BUILTIN::ROUND((IntToFloat(iVar1) * 0.4f)));
			break;
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(iParam1, 16, iVar0);
}

void func_832(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_550(iParam0))
	{
		return;
	}
	if (func_726(iParam0, 1) == 0)
	{
		return;
	}
	if (bParam3)
	{
		func_948(func_565(iParam0), 1f, 0);
	}
	if (bParam1)
	{
		func_949(iParam0);
	}
	else
	{
		func_950(iParam0);
	}
	if (bParam2)
	{
		func_951(iParam0);
	}
	else
	{
		func_952(iParam0);
	}
}

bool func_833(int iParam0)
{
	if (!func_280(iParam0))
	{
		return false;
	}
	return ((*Global_1895087)[iParam0 /*3*/])->f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

bool func_834(int iParam0, int iParam1)
{
	if (func_106() != -1)
	{
		return false;
	}
	if (!func_280(iParam0))
	{
		return false;
	}
	return (Global_24886[iParam0 /*2*/] && iParam1) != 0;
}

int func_835(int iParam0, bool bParam1)
{
	if (!func_280(iParam0))
	{
		return 0;
	}
	if ((func_834(iParam0, 1) && !func_833(iParam0)) && func_856(iParam0))
	{
		return 0;
	}
	if (!func_834(iParam0, 2))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (!func_953(iParam0, 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_836(int iParam0)
{
	if (!func_280(iParam0))
	{
		return;
	}
	((*Global_1895087)[iParam0 /*3*/])->f_2 = SCRIPTS::GET_ID_OF_THIS_THREAD();
}

int func_837(int iParam0)
{
	int iVar0;

	iVar0 = func_283(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(iVar0))
	{
		return 0;
	}
	return _NAMESPACE48::_0x31C70A716CAE1FEE(iVar0);
}

int func_838(int iParam0)
{
	if (!func_280(iParam0))
	{
		return 0;
	}
	return _NAMESPACE48::_0xA00DF706C60173D1(Global_1895087[iParam0 /*3*/]);
}

int func_839(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, var uParam8, bool bParam9, bool bParam10, bool bParam11)
{
	int iVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar6 = ENTITY::_0x886171A12F400B89(iParam3, iVar0, 1);
	if (iVar6 > 0)
	{
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			uVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, iVar0);
			iVar2 = uVar1;
			if ((ENTITY::DOES_ENTITY_EXIST(iVar2) && iVar4 < *uParam0) && iVar4 < iParam2)
			{
				if (func_954(iVar2, bParam4, bParam6, uParam8, bParam9, bParam10) && !DECORATOR::DECOR_EXIST_ON(iVar2, "bIgnoreThisPed"))
				{
					if (!func_955(iVar2, uParam1))
					{
						bVar3 = false;
						if (iParam7 != -1)
						{
							iVar7 = 0;
							iVar7 = 0;
							while (iVar7 < POPULATION::GET_NUM_MODELS_IN_POPULATION_SET(iParam7))
							{
								if (PED::IS_PED_MODEL(iVar2, POPULATION::GET_PED_MODEL_NAME_IN_POPULATION_SET(iParam7, iVar7)))
								{
									bVar3 = true;
								}
								else
								{
									iVar7++;
								}
							}
						}
						else
						{
							bVar3 = true;
						}
						if (bVar3)
						{
							if (!bParam11)
							{
								if (!ENTITY::IS_ENTITY_DEAD(iVar2))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, bParam5);
								}
							}
							(*uParam0)[iVar4] = iVar2;
							iVar4++;
						}
					}
				}
			}
			iVar5++;
		}
	}
	if (iVar4 >= (iParam2 - 1) && iVar6 >= iParam2)
	{
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return iVar4;
}

void func_840(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_956(iParam1))
		{
			func_957(iParam0, 41788943);
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
			func_958(iParam0, 0, 1);
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
			func_959(iParam0, 0);
			bVar0 = true;
		}
		func_960(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	}
}

int func_841(var uParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar6 = ENTITY::_0x886171A12F400B89(iParam2, iVar0, 3);
	if (iVar6 >= iParam3)
	{
	}
	iVar4 = 0;
	while (iVar4 < iVar6)
	{
		uVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar0);
		iVar2 = uVar1;
		if (ENTITY::IS_ENTITY_AN_OBJECT(iVar2))
		{
			iVar5 = 0;
			while (iVar5 < *uParam1)
			{
				if (uParam1[iVar5] == 0)
				{
					(*uParam0)[iVar3] = uVar1;
					iVar3++;
					iVar5 = *uParam1;
				}
				else if (ENTITY::GET_ENTITY_MODEL(iVar2) == uParam1[iVar5])
				{
					(*uParam0)[iVar3] = uVar1;
					iVar3++;
					iVar5 = *uParam1;
				}
				iVar5++;
			}
		}
		if (iVar3 >= iParam3)
		{
			ITEMSET::DESTROY_ITEMSET(iVar0);
			return iParam3;
		}
		iVar4++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return iVar3;
}

char* func_842(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return "";
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return func_961(iVar0);
}

char* func_843(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return "";
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar0)
	{
		case joaat("canoe"):
			return "CANOE";
		case joaat("wagon02x"):
			return "WAGON02X";
		case joaat("wagon04x"):
			return "WAGON04X";
		case joaat("wagon05x"):
			return "WAGON05X";
		case joaat("chuckwagon000x"):
			return "CHUCKWAGON000X";
		case joaat("wagoncircus02x"):
			return "WAGONCIRCUS02X";
		case joaat("coach2"):
			return "COACH2";
		case joaat("privatecoalcar01x"):
			return "PRIVATECOALCAR01X";
		case joaat("northpassenger01x"):
			return "NORTHPASSENGER01X";
		case joaat("privatesteamer01x"):
			return "PRIVATESTEAMER01X";
		case joaat("privatedining01x"):
			return "PRIVATEDINING01X";
		case joaat("utilliwag"):
			return "UTILLIWAG";
		case joaat("skiff"):
			return "SKIFF";
		case joaat("handcart"):
			return "HANDCART";
		case joaat("rowboatswamp"):
			return "ROWBOATSWAMP";
		case joaat("rowboatswamp02"):
			return "ROWBOATSWAMP02";
	}
	return "";
}

bool func_844(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_845(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

void func_846(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return;
	}
	if (iParam3 == 1)
	{
		if (ANIMSCENE::_0x9D1ECA9337BE9FC3(uParam0->f_444, sParam1))
		{
			iParam3 = 0;
		}
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_444, sParam1, iParam2, iParam3);
}

void func_847(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	PED::CLEAR_PED_BLOOD_DAMAGE(iParam0);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		PED::_0x7F5D88333EE8A86F(iParam0, iVar0);
		iVar0++;
	}
}

int func_848(int iParam0)
{
	return iParam0;
}

void func_849(int iParam0)
{
	if (!func_962(iParam0))
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

void func_850(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_851(iParam0, 1);
	func_853(iParam0, 1);
	func_854(iParam0, 128);
}

void func_851(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		if (((*Global_1945938)[iParam0 /*18*/])->f_5 == 5 && !func_704(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, 0);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
		}
	}
}

void func_852(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 - (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1));
}

void func_853(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
	}
}

void func_854(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 || iParam1);
}

void func_855(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_13[iVar0 /*12*/])) && &uParam0->f_13[iVar0 /*12*/] == iParam1)
		{
			func_687(uParam0->f_13[iVar0 /*12*/], iParam2);
		}
		iVar0++;
	}
}

bool func_856(int iParam0)
{
	if (!func_280(iParam0))
	{
		return false;
	}
	return SCRIPTS::_DOES_THREAD_EXIST(((*Global_1895087)[iParam0 /*3*/])->f_2);
}

void func_857(int iParam0)
{
	int iVar0;

	if (!func_280(iParam0))
	{
		return;
	}
	iVar0 = func_837(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
	((*Global_1895087)[iParam0 /*3*/])->f_2 = 0;
}

int func_858(int iParam0, bool bParam1)
{
	if (!func_280(iParam0))
	{
		return 0;
	}
	if (!func_834(iParam0, 2))
	{
		return 0;
	}
	if (func_281(iParam0) == 0)
	{
		return 1;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(func_283(iParam0)))
	{
		return 1;
	}
	if (func_834(iParam0, 1) && !bParam1)
	{
		func_146(iParam0, 128);
		return 1;
	}
	func_213(iParam0, 129);
	func_857(iParam0);
	_NAMESPACE48::_0xFC77C5B44D5FF7C0(func_283(iParam0));
	func_963(iParam0, 0);
	return 1;
}

void func_859(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (func_964(iParam0, iParam1, 1))
	{
		iVar0 = func_539(iParam1);
		iVar1 = func_538(iParam0);
		iVar2 = (func_538(iParam0) - func_538(iParam1));
		iVar3 = (func_539(iParam0) - func_539(iParam1));
		iVar4 = (func_540(iParam0) - func_540(iParam1));
		iVar5 = (func_537(iParam0) - func_537(iParam1));
		iVar6 = (func_536(iParam0) - func_536(iParam1));
		iVar7 = (func_535(iParam0) - func_535(iParam1));
	}
	else
	{
		iVar0 = func_539(iParam0);
		iVar1 = func_538(iParam1);
		iVar2 = (func_538(iParam1) - func_538(iParam0));
		iVar3 = (func_539(iParam1) - func_539(iParam0));
		iVar4 = (func_540(iParam1) - func_540(iParam0));
		iVar5 = (func_537(iParam1) - func_537(iParam0));
		iVar6 = (func_536(iParam1) - func_536(iParam0));
		iVar7 = (func_535(iParam1) - func_535(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_541(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = BUILTIN::ROUND(func_965(BUILTIN::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

int func_860(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -177936449;
		case 0:
			return -1758735922;
		case 6:
			return -680519380;
		case 3:
			return 263744889;
		case 7:
			return 351057032;
		case 4:
			return 1172283326;
		case 2:
			return -1046310682;
		case 5:
			return 652984488;
		case 8:
			return 1389665576;
		case 9:
			return -1066280913;
		case 13:
			return 1975793632;
		case 14:
			return -1887627202;
		case 15:
			return 1851096281;
		case 16:
			return 47402526;
		case 17:
			return 1762683397;
		case 18:
			return -1154551809;
		case 19:
			return -333682158;
		case 20:
			return 1465089966;
		case 21:
			return 511213393;
		case 22:
			return -1214580355;
		case 23:
			return -1397900723;
		case 10:
			return 541398842;
		case 24:
			return -1960060437;
		case 25:
			return 1634371177;
		case 26:
			return -1308114737;
		case 11:
			return 683250525;
		case 12:
			return -814958461;
	}
	return 0;
}

void func_861(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		func_966(iParam1);
	}
}

float func_862(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

int func_863(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (!func_566(iParam0))
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if ((Global_1357549->f_1675[iVar1 /*5*/])->f_1 == iParam0)
			{
				((*Global_1360165)[iParam0 /*1157*/])->f_126 = (Global_1357549->f_1675[iVar1 /*5*/])->f_4;
				return &(Global_1357549->f_1675[iVar1 /*5*/]);
			}
			iVar1++;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (&Global_1357549->f_1675[iVar1 /*5*/] != 0 && (Global_1357549->f_1675[iVar1 /*5*/])->f_1 == -1)
		{
			iVar0 = &Global_1357549->f_1675[iVar1 /*5*/];
			Jump @165; //curOff = 150
		}
		iVar1++;
	}
	if (!func_566(iParam0))
	{
		if (iVar0 != 0)
		{
			(Global_1357549->f_1675[iVar1 /*5*/])->f_1 = iParam0;
			((*Global_1360165)[iParam0 /*1157*/])->f_126 = (Global_1357549->f_1675[iVar1 /*5*/])->f_4;
		}
	}
	return iVar0;
}

int func_864(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_566(iParam0))
	{
		return 0;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(((*Global_1360165)[iParam0 /*1157*/])->f_126))
	{
		iVar0 = func_726(iParam0, 1);
		iVar1 = _NAMESPACE48::_0xA00DF706C60173D1(iVar0);
		if ((Global_40.f_4942[iParam0 /*60*/])->f_7 != 0 && iVar1 != (Global_40.f_4942[iParam0 /*60*/])->f_7)
		{
			_NAMESPACE48::_0x8BC555034A5A5E8C(iVar0, (Global_40.f_4942[iParam0 /*60*/])->f_7);
		}
		((*Global_1360165)[iParam0 /*1157*/])->f_126 = _NAMESPACE48::_0x4F76E3676583D951(iVar0);
		_NAMESPACE48::_0xFCC6DB8DBE709BC8(((*Global_1360165)[iParam0 /*1157*/])->f_126);
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_126;
}

void func_865(var uParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_0x9CB1A1623062F402(*uParam0, func_968(func_967(255), 109029619));
	}
	else if (func_887())
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_392();
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_866(int iParam0)
{
	iParam0 = func_570(iParam0);
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

void func_867(var uParam0, bool bParam1)
{
	char* sVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_0x9CB1A1623062F402(*uParam0, func_968(func_967(255), 109029619));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_887())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_392())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (MISC::COMPARE_STRINGS(sVar0, "", false, -1) != 0)
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, sVar0);
		}
	}
}

int func_868(int iParam0)
{
	iParam0 = func_570(iParam0);
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

float func_869(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

float func_870(int iParam0)
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

	iParam0 = func_570(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_609(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return -1f;
	}
	iVar1 = func_866(iParam0);
	iVar2 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	fVar3 = TASK::_0xEB67D4E056C85A81(iVar1);
	fVar4 = TASK::_0x78D8C1D4EB80C588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_866(iParam0) + 1;
	fVar6 = func_969(iParam0);
	fVar7 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar1));
	fVar8 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	uVar12 = func_970(fVar3, fVar4, fVar11);
	return uVar12;
}

void func_871(int iParam0)
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

void func_872(int iParam0)
{
	MAP::_0xB059D7BD3D78C16F(iParam0, 673950256);
	MAP::_0xB059D7BD3D78C16F(iParam0, 561559387);
	MAP::_0xB059D7BD3D78C16F(iParam0, -201249929);
}

void func_873(bool bParam0)
{
	_NAMESPACE84::_0xB6FD96420C0126A1(-1056478928, bParam0);
}

bool func_874(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_875(int iParam0)
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

int func_876(int iParam0)
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

bool func_877()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(99890643);
}

int func_878(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<4> Var29;

	Var0.f_9 = -1591664384;
	if (!func_881(iParam0, &Var0))
	{
		return 0;
	}
	Var29 = { func_971(iParam1, Var0, 1415981582, 0) };
	return func_972(Var29, 1);
}

int func_879(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<4> Var29;

	Var0.f_9 = -1591664384;
	if (!func_881(iParam0, &Var0))
	{
		return 0;
	}
	Var29 = { func_971(iParam1, Var0, -2119169513, 0) };
	return func_972(Var29, 1);
}

void func_880(var uParam0)
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

int func_881(int iParam0, var uParam1)
{
	int iVar0;
	struct<10> Var1;
	struct<4> Var15;

	if (!func_973(iParam0))
	{
		return 0;
	}
	iVar0 = func_882(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1.f_9 = -1591664384;
	Var15 = { func_974(0) };
	if (!func_975(Var15, iVar0, &Var1, 0, 0))
	{
		return 0;
	}
	if (!func_976(&Var1, uParam1))
	{
		return 0;
	}
	return 1;
}

int func_882(int iParam0)
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

int func_883(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10)
{
	struct<12> Var0;
	struct<4> Var14;

	if (!func_977(bParam10))
	{
		return func_978(Param0, Param4, iParam8, 1, bParam9, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0) || !INVENTORY::_0xB881CA836CC4B6D4(&Param4))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_979(Param0, &Var0, 0, 0))
	{
		return 0;
	}
	if (func_980(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return 1;
	}
	if (!INVENTORY::_0x780C5B9AE2819807(Var0.f_4, iParam8))
	{
		return 0;
	}
	if (!INVENTORY::_0xDCCAA7C3BFD88862(func_658(0), &Param0, &Param4, iParam8, Var0.f_11, &Var14))
	{
		return 0;
	}
	if (bParam9)
	{
		if (!func_972(Var14, 1))
		{
		}
	}
	return 1;
}

int func_884(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9)
{
	struct<11> Var0;
	struct<11> Var14;
	int iVar28;

	if (!func_977(bParam9))
	{
		return func_981(Param0, Param4, iParam8, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0) || !INVENTORY::_0xB881CA836CC4B6D4(&Param4))
	{
		return 0;
	}
	if (func_980(&Param0, &Param4))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_979(Param0, &Var0, bParam9, 1) || !func_979(Param4, &Var14, bParam9, 1))
	{
		return 0;
	}
	if (func_980(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return 0;
	}
	if (!INVENTORY::_0x780C5B9AE2819807(Var0.f_4, Var14.f_9) || !INVENTORY::_0x780C5B9AE2819807(Var14.f_4, Var0.f_9))
	{
		return 0;
	}
	iVar28 = func_658(0);
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

int func_885(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (func_982(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		return 1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseCompanion"))
	{
		return 1;
	}
	return 0;
}

int func_886(var uParam0)
{
	int iVar0;

	iVar0 = uParam0;
	if (iVar0 >= 0 && iVar0 < 5)
	{
		return 1;
	}
	return 0;
}

int func_887()
{
	if (func_106() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == joaat("player_zero"))
	{
		return 1;
	}
	return 0;
}

int func_888()
{
	return 1342496140;
}

int func_889()
{
	return 446670976;
}

int func_890()
{
	return 1;
}

int func_891()
{
	return -868094182;
}

int func_892()
{
	return 1074477367;
}

int func_893()
{
	return 1;
}

int func_894()
{
	return -997197050;
}

int func_895()
{
	return -2063289686;
}

int func_896()
{
	return 2;
}

int func_897()
{
	return -868094182;
}

int func_898()
{
	return 1074477367;
}

int func_899()
{
	return 1;
}

int func_900()
{
	return 1235275977;
}

int func_901()
{
	return 2030804811;
}

int func_902()
{
	return 1;
}

int func_903()
{
	return 1974379573;
}

int func_904()
{
	return 2024948086;
}

int func_905()
{
	return 1;
}

void func_906(int iParam0)
{
	if (func_983() < iParam0)
	{
		func_984(iParam0);
	}
}

int func_907(struct<4> Param0, int iParam4, bool bParam5)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_985(Param0, iParam4, &Var0, bParam5))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_908(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar4;
	int iVar5;
	int iVar6;

	if (iParam0 != 0)
	{
		iVar5 = func_423(iParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_986(iParam0);
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

struct<4> func_909()
{
	struct<4> Var0;

	Var0 = { func_974(0) };
	return func_971(856287005, Var0, -218846335, 0);
}

void func_910(int iParam0, int iParam1)
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

void func_911(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_912(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_913(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case 1234009870:
			*uParam1 = 1802325493;
			*uParam2 = 1681219929; /* GXTEntry: "Revolver Cartridges - Regular" */
			break;
		case -1202134084:
			*uParam1 = -864693164;
			*uParam2 = 1681219929; /* GXTEntry: "Revolver Cartridges - Regular" */
			break;
		case 1297050066:
			*uParam1 = -603289736;
			*uParam2 = 1232099469; /* GXTEntry: "Revolver Cartridges - Express" */
			break;
		case -1780177928:
			*uParam1 = -1803237008;
			*uParam2 = -2084181920; /* GXTEntry: "Revolver Cartridges - High Velocity" */
			break;
		case -1467836497:
			*uParam1 = -1175521284;
			*uParam2 = joaat("ammo_pistol");
			break;
		case 1723805622:
			*uParam1 = -1559549888;
			*uParam2 = joaat("ammo_pistol");
			break;
		case -153287664:
			*uParam1 = -1650796693;
			*uParam2 = 836939099; /* GXTEntry: "Pistol Cartridges - Express" */
			break;
		case 1845082736:
			*uParam1 = -1521597660;
			*uParam2 = -1411815376; /* GXTEntry: "Pistol Cartridges - High Velocity" */
			break;
		case 406755377:
			*uParam1 = -1288829256;
			*uParam2 = joaat("ammo_rifle");
			break;
		case 1469029564:
			*uParam1 = 1393841762;
			*uParam2 = joaat("ammo_rifle");
			break;
		case 45760211:
			*uParam1 = -851229814;
			*uParam2 = 1654725195; /* GXTEntry: "Rifle Cartridges - Express" */
			break;
		case -276295943:
			*uParam1 = 914704115;
			*uParam2 = 1858824185; /* GXTEntry: "Rifle Cartridges - High Velocity" */
			break;
		case -2029793397:
			*uParam1 = -219896679;
			*uParam2 = -1330115686; /* GXTEntry: "Repeater Cartridges - Regular" */
			break;
		case 2120467495:
			*uParam1 = 516838334;
			*uParam2 = -1330115686; /* GXTEntry: "Repeater Cartridges - Regular" */
			break;
		case -2075613923:
			*uParam1 = -385817936;
			*uParam2 = -578347576; /* GXTEntry: "Repeater Cartridges - Express" */
			break;
		case 122656217:
			*uParam1 = 1192843172;
			*uParam2 = 231465488; /* GXTEntry: "Repeater Cartridges - High Velocity" */
			break;
		case 2107187484:
			*uParam1 = 954871696;
			*uParam2 = joaat("ammo_shotgun");
			break;
		case -791844268:
			*uParam1 = -1217273132;
			*uParam2 = joaat("ammo_shotgun");
			break;
		case 305770744:
			*uParam1 = -2087227528;
			*uParam2 = 314966081; /* GXTEntry: "Shotgun - Slug" */
			break;
		case 550900979:
			*uParam1 = -618066518;
			*uParam2 = 2113196069;
			break;
	}
}

struct<14> func_914(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	return Var0;
}

struct<4> func_915(bool bParam0)
{
	int iVar0;

	iVar0 = func_658(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224214))
		{
			*Global_1224214 = { func_971(923904168, func_974(bParam0), -740156546, bParam0) };
		}
		return *Global_1224214;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224222))
		{
			*Global_1224222 = { func_971(923904168, func_974(bParam0), -740156546, 0) };
		}
		return *Global_1224222;
	}
	return func_971(923904168, func_974(bParam0), -740156546, 0);
}

void func_916(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_917(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	*uParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_658(bParam3), uParam0, uParam2);
	if (*uParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

void func_918(var uParam0, var uParam1, var uParam2)
{
	struct<4> Var0;

	Var0.f_1 = uParam2;
	Var0 = uParam0;
	Var0.f_2 = uParam1;
	func_691(Var0);
}

void func_919(var uParam0, var uParam1, var uParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_987(uParam0, 1))
	{
		func_988(uParam0, 1);
	}
	(uParam0->f_2[*uParam0 /*2*/])->f_1 = uParam2;
	uParam0->f_2[*uParam0 /*2*/] = uParam1;
	*uParam0++;
}

int func_920(int iParam0)
{
	int iVar0;

	iVar0 = func_423(iParam0);
	switch (iVar0)
	{
		case -2061583405:
			return -1725579161;
		case -525676072:
			return 1249071452;
		default:
			break;
	}
	return 0;
}

float func_921(int iParam0)
{
	return &(Global_40.f_11095.f_11[iParam0]);
}

int func_922(float fParam0)
{
	return BUILTIN::ROUND(((fParam0 / 100f) * BUILTIN::TO_FLOAT(10)));
}

bool func_923()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797);
}

char* func_924(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
						return func_989(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_989(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
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

int func_925(int iParam0)
{
	if ((Global_40.f_4942[iParam0 /*60*/])->f_59 != 0)
	{
		return 1;
	}
	return 0;
}

int func_926(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1[5];
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;

	if (!func_566(iParam0))
	{
		return 0;
	}
	iVar0 = CLOCK::GET_CLOCK_HOURS() + 1;
	if (iVar0 == 25)
	{
		iVar0 = 0;
	}
	iVar7 = 0;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 1:
					if (func_132(((*Global_1835011)[4 /*74*/])->f_1, 1))
					{
						iVar1[0] = -695701225;
					}
					else
					{
						iVar1[0] = 404503428;
					}
					break;
				default:
					iVar1[0] = 178615350;
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar1[3] = 1818898449;
					iVar7 = 4;
					break;
				case 1:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = 1818898449;
					iVar7 = 3;
					break;
				case 3:
					if (func_990(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar1[2] = -1862464078;
						iVar7 = 3;
					}
					if (!bParam2)
					{
						iVar1[0] = -268604689;
					}
					break;
				case 4:
					iVar1[0] = -268604689;
					break;
				case 5:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 6:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar1[3] = 1818898449;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = -268604689;
					iVar1[0] = -1632589543;
					iVar1[1] = 1818898449;
					iVar7 = 3;
					break;
				case 8:
					iVar1[0] = -268604689;
					break;
				case 9:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 10:
					if (func_132(((*Global_1347702)[63 /*49*/])->f_15, 1) || func_120(((*Global_1347702)[63 /*49*/])->f_15))
					{
						iVar1[0] = -268604689;
					}
					else
					{
						iVar1[0] = -310473775;
					}
					break;
				case 11:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 13:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 14:
					iVar1[0] = -268604689;
					break;
				case 15:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 16:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 17:
					if (func_990(iVar0, 9, 12))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar1[2] = -1862464078;
						iVar7 = 3;
					}
					else
					{
						iVar1[0] = -268604689;
					}
					break;
				case 18:
					if (!func_132(((*Global_1835011)[14 /*74*/])->f_1, 1))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar7 = 2;
					}
					else if (func_549(18, 134217728, 1))
					{
						iVar1[0] = 961676983;
					}
					else
					{
						iVar1[0] = -1587546924;
					}
					break;
				case 19:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -23947011;
					iVar7 = 3;
					break;
				default:
					iVar1[0] = -268604689;
					break;
			}
			break;
		case 2:
		case 3:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 1:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 3:
					if (func_990(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -922193456;
						iVar1[1] = -2040275819;
						iVar1[2] = -1114682645;
						iVar1[3] = -1414977761;
						iVar7 = 4;
					}
					if (!bParam2)
					{
						iVar1[0] = -922193456;
					}
					break;
				case 4:
					iVar1[0] = -922193456;
					break;
				case 5:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 6:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 8:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 9:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar1[4] = 1744281750;
					iVar7 = 5;
					break;
				case 10:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 11:
					if (func_132(((*Global_1347702)[134 /*49*/])->f_15, 1) || func_120(((*Global_1347702)[134 /*49*/])->f_15))
					{
						iVar1[0] = -2040275819;
						iVar1[1] = 1205492208;
						iVar7 = 2;
					}
					else
					{
						iVar1[0] = -922193456;
					}
					break;
				case 13:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 14:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 15:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 16:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 17:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 18:
					iVar1[0] = -922193456;
					break;
				case 19:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -922193456;
					iVar1[1] = 1744281750;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 1744281750;
					iVar7 = 3;
					break;
				case 26:
					iVar1[0] = -268604689;
					break;
				default:
					iVar1[0] = -922193456;
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 2:
					if (func_132(((*Global_1835011)[38 /*74*/])->f_1, 1))
					{
						iVar1[0] = -1559986688;
					}
					else
					{
						iVar1[0] = -1874208704;
					}
					break;
				default:
					iVar1[0] = 1593315648;
					break;
			}
			break;
		case 5:
		case 6:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 1:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 3:
					if (func_990(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -922193456;
						iVar1[1] = -2040275819;
						iVar1[2] = -1114682645;
						iVar1[3] = -1414977761;
						iVar7 = 4;
					}
					if (!bParam2)
					{
						iVar1[0] = -922193456;
					}
					break;
				case 4:
					iVar1[0] = -922193456;
					break;
				case 6:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = 1295334688;
					iVar7 = 1;
					break;
				case 11:
					iVar1[0] = -2051275045;
					break;
				case 13:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 14:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 15:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 16:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 17:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 18:
					iVar1[0] = -922193456;
					break;
				case 19:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -922193456;
					iVar1[1] = 1744281750;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 1744281750;
					iVar7 = 3;
					break;
				case 26:
					iVar1[0] = -268604689;
					break;
				default:
					iVar1[0] = -922193456;
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 13:
					iVar1[0] = -1341683964;
					iVar1[1] = 876797088;
					iVar7 = 2;
					break;
				case 14:
					iVar1[0] = -426171916;
					iVar1[1] = 1484386316;
					iVar1[2] = 1254970547;
					iVar7 = 3;
					break;
				case 4:
					if (func_991(747937920, 1) && !func_132(((*Global_1347702)[1 /*49*/])->f_15, 1))
					{
						iVar1[0] = -1155031950;
					}
					else
					{
						iVar1[0] = -1341683964;
					}
					break;
				default:
					iVar1[0] = -1341683964;
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 13:
					iVar1[0] = -1341683964;
					iVar1[1] = 876797088;
					iVar1[2] = 1484386316;
					iVar7 = 3;
					break;
				case 14:
					iVar1[0] = -1092189504;
					iVar1[1] = 80515440;
					iVar7 = 2;
					break;
				case 4:
					iVar1[0] = -1341683964;
					iVar1[1] = 867156718;
					iVar7 = 2;
					break;
				case 7:
					iVar1[0] = -1341683964;
					iVar1[1] = 1484386316;
					iVar7 = 2;
					break;
				default:
					iVar1[0] = -1341683964;
					break;
			}
			break;
	}
	if (iParam3 && ENTITY::DOES_ENTITY_EXIST(func_721(iParam0)))
	{
		iVar10 = 0;
		while (iVar10 < iVar7)
		{
			if (&iVar1[iVar10] == (Global_40.f_4942[iParam0 /*60*/])->f_3)
			{
				bVar9 = true;
				iVar8 = (Global_40.f_4942[iParam0 /*60*/])->f_3;
			}
			iVar10++;
		}
	}
	if (!bVar9)
	{
		iVar11 = 0;
		if (iVar7 > 0 && bParam2)
		{
			iVar11 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar7);
		}
		iVar8 = &iVar1[iVar11];
	}
	if (!func_822(iParam0, iVar8))
	{
		iVar8 = (Global_40.f_4942[iParam0 /*60*/])->f_3;
	}
	return iVar8;
}

int func_927(int iParam0)
{
	switch (iParam0)
	{
		case -1205468859:
		case -946772361:
		case -445211559:
		case 1744281750:
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_928(int iParam0, bool bParam1)
{
	if (!func_566(iParam0))
	{
		return false;
	}
	if (!bParam1)
	{
		if (func_371(iParam0) || func_558(iParam0, 44, 1))
		{
			return false;
		}
	}
	return MISC::ARE_STRINGS_EQUAL(&(((*Global_1360165)[iParam0 /*1157*/])->f_48), "Sleep");
}

struct<7> func_929(int iParam0, int iParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, var uParam8, bool bParam9)
{
	struct<7> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_3 = { vParam2 };
	Var0.f_2 = uParam8;
	Var0.f_6 = 0;
	if (bParam5)
	{
		MISC::SET_BIT(&(Var0.f_6), 0);
	}
	if (bParam6)
	{
		MISC::SET_BIT(&(Var0.f_6), 1);
	}
	if (bParam7)
	{
		MISC::SET_BIT(&(Var0.f_6), 2);
	}
	if (bParam9)
	{
		MISC::SET_BIT(&(Var0.f_6), 3);
	}
	return Var0;
}

void func_930(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_566(iParam0))
	{
		return;
	}
	iVar0 = func_721(iParam0);
	func_992(iVar0);
	func_551(iParam0, 60, 1);
	if (bParam1)
	{
		func_949(iParam0);
	}
}

void func_931(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_566(iParam0))
	{
		return;
	}
	iVar0 = func_721(iParam0);
	func_993(iVar0);
	func_556(iParam0, 60, 1);
	if (bParam1)
	{
		func_950(iParam0);
	}
}

void func_932(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_566(iParam0))
	{
		return;
	}
	iVar0 = func_721(iParam0);
	func_994(iVar0);
	if (iParam0 == 14)
	{
		func_995(iVar0);
	}
	func_551(iParam0, 61, 1);
	if (bParam1)
	{
		func_951(iParam0);
	}
}

void func_933(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_566(iParam0))
	{
		return;
	}
	iVar0 = func_721(iParam0);
	func_996(iVar0);
	func_556(iParam0, 61, 1);
	if (bParam1)
	{
		func_952(iParam0);
	}
}

bool func_934(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_566(iParam0))
	{
		return false;
	}
	func_997(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(((*Global_1360165)[iParam0 /*1157*/])->f_65[iVar0]), iVar1);
}

int func_935(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

int func_936(int iParam0, int iParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case 178615350:
			return 331645018;
		case 2094043703:
			return -1395382793;
		case -695701225:
			return -1090160065;
		case 404503428:
			return -1704514526;
		case -1268239471:
			return -1832874334;
		case -1874208704:
			return 1680324116;
		case 1593315648:
			return 989578874;
		case -1559986688:
			return 174754238;
		case 1071744295:
			return -2065784734;
		case 977450639:
			return 2111449038;
		case 1901494236:
			return 1245083301;
		case 713940276:
			return -1949892659;
		case 1744281750:
			return -663077666;
		case 283037683:
			return 1996046145;
		case -2051275045:
			return -306710010;
		case 1495063555:
			return -339275545;
		case 1046468203:
			return 393090546;
		case 1018353621:
			return 114272443;
		case -433615745:
			return 643643053;
		case 777603945:
			return -328334844;
		case -1668922931:
			return -1915831038;
		case -1341683964:
			return 1689938120;
		case 928493661:
			return 861275228;
		case 431390894:
			return -20643141;
		case -301101630:
			return -1187204983;
		case -1155031950:
			return 1883650185;
		case -1248623443:
			return -1437962122;
		case 350498312:
			return 1959714099;
		case -481967001:
			return 1833893952;
		case 513932985:
			return 505715365;
		case -193269670:
			return -1774801049;
		case -1684458716:
			return 1976273473;
		case -973332710:
			return -2045878709;
		case 1658153743:
			return -2072429185;
		case 1842975347:
			return 491764525;
		case -1678882891:
			return -1638703055;
		case -268604689:
			return -1496612359;
		case 1818898449:
			return 30596609;
		case -922193456:
			switch (iParam1)
			{
				case 24:
				case 25:
					return 41788943;
				default:
					break;
			}
			return -99272505;
		case 1205492208:
			return 1598276604;
		case 1199580439:
			return -1443192745;
		case -310473775:
			return -877585857;
		case -1632589543:
			return 1052055818;
		case -1862464078:
			return 1895628185;
		case 296923297:
			iVar0 = func_998(296923297, iParam1);
			return func_999(iVar0);
		case -2040275819:
			return 464906090;
		case -1114682645:
			return 744097966;
		case -1414977761:
			return 1059434053;
		case 1237718549:
			iVar0 = func_998(1237718549, iParam1);
			return func_999(iVar0);
		case -23947011:
			return -456769142;
		case 1295334688:
			return 869636257;
		case 1200878026:
			return 1560123389;
		case -1692022104:
			return -1851470579;
		case 707545953:
			return 890352471;
		case -1532979576:
			return 1391951221;
		case -1642335258:
			return -1491647079;
		case 876797088:
			return 1309207681;
		case -1587546924:
			return -1303789247;
		case 961676983:
			return -1527307534;
		case 1300659195:
			return -309158751;
		case -571427255:
			return -251280159;
		case 837028314:
			return -20984612;
		case -1394723994:
			return -1857650992;
		case -1335291723:
			return -1120526485;
		case -445211559:
			return -757536090;
		case -946772361:
			return 646599895;
		case 1950972546:
			return -1699183538;
		case -1092189504:
			return 389057251;
		case 80515440:
			return -2137653778;
		case 6418928:
			return -211106360;
		case -1648322231:
			return 1074183062;
		case -1065026089:
			return 1087308308;
		case 2062813606:
			return 1709174532;
		case 876535472:
			return -1916145078;
		case -1205468859:
			return -757536090;
		case 1484386316:
			return -800489594;
		case 1254970547:
			return -211106360;
		case 867156718:
			return 241911854;
		case -426171916:
			return 41788943;
	}
	return 41788943;
}

int func_937(int iParam0, int iParam1)
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

bool func_938(int iParam0, int iParam1)
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
	if (!func_300(iParam0, iVar0))
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

void func_939(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

bool func_940(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_783(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
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
							if (func_783(iVar4) && iVar4 != bVar0)
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
	if (func_106() == -1 && !func_1000(bVar0))
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
				if (func_1000(joaat("weapon_repeater_carbine")))
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
		if (iParam0 != Global_35 && func_783(bVar0))
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
		func_1001(bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_1002(iParam0, &bVar0, &fVar25);
		bVar0 = WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_1003(bVar0))
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

int func_941(int iParam0)
{
	if (!func_566(iParam0))
	{
		return 0;
	}
	switch (((*Global_1360165)[iParam0 /*1157*/])->f_127)
	{
		case -784953535:
		case -543937540:
		case -233385727:
		case 893704044:
		case 1132950513:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_942(int iParam0, char* sParam1)
{
	switch (Global_40.f_4283)
	{
		case 0:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "colter/col_default_horse_bill", 64);
					return 1;
				case 7:
					StringCopy(sParam1, "colter/col_default_horse_charles", 64);
					return 1;
				case 0:
					StringCopy(sParam1, "colter/col_default_horse_dutch", 64);
					return 1;
				case 5:
					StringCopy(sParam1, "colter/col_default_horse_hosea", 64);
					return 1;
				case 2:
					StringCopy(sParam1, "colter/col_default_horse_javier", 64);
					return 1;
				case 1:
					StringCopy(sParam1, "colter/col_default_horse_john", 64);
					return 1;
				case 9:
					StringCopy(sParam1, "colter/col_default_horse_lenny", 64);
					return 1;
				case 6:
					StringCopy(sParam1, "colter/col_default_horse_micah", 64);
					return 1;
				default:
					break;
			}
			StringCopy(sParam1, "colter/col_default_horses1", 64);
			return 1;
		case 1:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_bill", 64);
					return 1;
				case 7:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_charles", 64);
					return 1;
				case 0:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_dutch", 64);
					return 1;
				case 5:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_hosea", 64);
					return 1;
				case 2:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_javier", 64);
					return 1;
				case 1:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_john", 64);
					return 1;
				case 10:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horses1", 64);
					return 1;
				case 9:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_lenny", 64);
					return 1;
				case 6:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_micah", 64);
					return 1;
				case 11:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_sadie", 64);
					return 1;
				case 8:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_sean", 64);
					return 1;
				case 4:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_uncle", 64);
					return 1;
				default:
					break;
			}
			StringCopy(sParam1, "horseshoeOverlook/hso_default_horses1", 64);
			return 1;
		case 2:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_bill", 64);
					return 1;
				case 7:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_charles", 64);
					return 1;
				case 0:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_dutch", 64);
					return 1;
				case 5:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_hosea", 64);
					return 1;
				case 2:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_javier", 64);
					return 1;
				case 1:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_john", 64);
					return 1;
				case 10:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_kieran", 64);
					return 1;
				case 9:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_lenny", 64);
					return 1;
				case 6:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_micah", 64);
					return 1;
				case 11:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_sadie", 64);
					return 1;
				case 8:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_sean", 64);
					return 1;
				case 4:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_uncle", 64);
					return 1;
				default:
					break;
			}
			StringCopy(sParam1, "clemensPoint/clm_default_horses1", 64);
			return 1;
		case 3:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_bill", 64);
					return 1;
				case 7:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_charles", 64);
					return 1;
				case 0:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_dutch", 64);
					return 1;
				case 5:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_hosea", 64);
					return 1;
				case 2:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_javier", 64);
					return 1;
				case 1:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_john", 64);
					return 1;
				case 10:
					StringCopy(sParam1, "shadyBelle/shb_default_horses1", 64);
					return 1;
				case 9:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_lenny", 64);
					return 1;
				case 6:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_micah", 64);
					return 1;
				case 11:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_sadie", 64);
					return 1;
				case 4:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_uncle", 64);
					return 1;
				default:
					break;
			}
			StringCopy(sParam1, "shadyBelle/shb_default_horses1", 64);
			return 1;
		case 5:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "lakay/lak_default_horse_bill", 64);
					return 1;
				case 7:
					StringCopy(sParam1, "lakay/lak_default_horse_charles", 64);
					return 1;
				case 0:
					StringCopy(sParam1, "lakay/lak_default_horse_dutch", 64);
					return 1;
				case 2:
					StringCopy(sParam1, "lakay/lak_default_horse_javier", 64);
					return 1;
				case 1:
					StringCopy(sParam1, "lakay/lak_default_horse_john", 64);
					return 1;
				case 6:
					StringCopy(sParam1, "lakay/lak_default_horse_micah", 64);
					return 1;
				case 11:
					StringCopy(sParam1, "lakay/lak_default_horse_sadie", 64);
					return 1;
				case 4:
					StringCopy(sParam1, "lakay/lak_default_horses1", 64);
					return 1;
				default:
					break;
			}
			StringCopy(sParam1, "lakay/lak_default_horses1", 64);
			return 1;
		case 6:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_bill", 64);
					return 1;
				case 7:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_charles", 64);
					return 1;
				case 0:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_dutch", 64);
					return 1;
				case 2:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_javier", 64);
					return 1;
				case 1:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_john", 64);
					return 1;
				case 6:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_micah", 64);
					return 1;
				case 11:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_sadie", 64);
					return 1;
				case 4:
					StringCopy(sParam1, "beaverHollow/bvh_default_horses1", 64);
					return 1;
				default:
					break;
			}
			StringCopy(sParam1, "beaverHollow/bvh_default_horses1", 64);
			return 1;
		case 8:
			StringCopy(sParam1, "beechersHope/bch_default_horses", 64);
			return 1;
	}
	return 0;
}

int func_943()
{
	return -1;
}

int func_944(int iParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	int iVar0;

	if (!func_566(iParam0))
	{
		return 0;
	}
	if ((!bParam5 && !Global_1359489->f_12) || (bParam5 && Global_1359489->f_13 < 8))
	{
		if (((*Global_1360165)[iParam0 /*1157*/])->f_125 <= 300)
		{
			if (_NAMESPACE48::_0xEB98B38CA60742D7(((*Global_1360165)[iParam0 /*1157*/])->f_126))
			{
				_NAMESPACE48::_0x49A8C2CD97815215(((*Global_1360165)[iParam0 /*1157*/])->f_126);
			}
			if (bParam5)
			{
				((*Global_1360165)[iParam0 /*1157*/])->f_124 = _NAMESPACE48::_0x08FC896D2CB31FCC(((*Global_1360165)[iParam0 /*1157*/])->f_126, 0);
				Global_1359489->f_13++;
			}
			else
			{
				((*Global_1360165)[iParam0 /*1157*/])->f_124 = _NAMESPACE48::_0x0CADC3A977997472(((*Global_1360165)[iParam0 /*1157*/])->f_126, 0);
			}
			_NAMESPACE48::_0x6759BEE6762E140B(((*Global_1360165)[iParam0 /*1157*/])->f_126);
			((*Global_1360165)[iParam0 /*1157*/])->f_125++;
		}
		else
		{
			iVar0 = _NAMESPACE48::_0xA00DF706C60173D1(func_726(iParam0, 1));
			STREAMING::REQUEST_MODEL(iVar0, false);
			if (STREAMING::HAS_MODEL_LOADED(iVar0))
			{
				((*Global_1360165)[iParam0 /*1157*/])->f_124 = func_679(iVar0, vParam1, fParam4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
				_NAMESPACE48::_0x7B204F88F6C3D287(((*Global_1360165)[iParam0 /*1157*/])->f_126);
			}
		}
		if (!func_235(((*Global_1360165)[iParam0 /*1157*/])->f_124, 0))
		{
			return 0;
		}
		Global_1359489->f_12 = 1;
		func_568(iParam0, 256, 0);
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_945(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_566(iParam0))
	{
		return 0;
	}
	if (func_1004(iParam0, 256))
	{
		return 1;
	}
	iVar0 = 0;
	if (bParam2)
	{
		iVar0 = 256;
	}
	if (!func_235(iParam1, iVar0))
	{
		return 0;
	}
	PED::_0x1902C4CFCC5BE57C(iParam1, func_1005(iParam0));
	PED::_0xCC8CA3E88256E58F(iParam1, 0, 1, 1, 1, 0);
	func_568(iParam0, 256, 1);
	return 1;
}

void func_946(int iParam0, int iParam1)
{
	DECORATOR::DECOR_SET_BOOL(iParam0, "HorseCompanion", true);
	func_960(iParam0, func_1006(iParam1));
	if (func_1004(iParam1, 8))
	{
		POPULATION::_0xF74E134F40192884(iParam0, 2);
		PED::SET_PED_CONFIG_FLAG(iParam0, 412, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 412, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_721(iParam1)))
	{
		PED::_0x931B241409216C1F(func_721(iParam1), iParam0, 0);
		PED::_0xED1C764997A86D5A(func_721(iParam1), iParam0);
		PED::SET_PED_CONFIG_FLAG(iParam0, 367, true);
	}
	else
	{
		func_551(iParam1, 38, 1);
	}
	PED::SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam0, -1856989775);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, -1856989775);
	if (Global_40.f_4283 == 0)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 172, true);
	}
	PED::SET_PED_CONFIG_FLAG(iParam0, 324, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 330, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 331, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 471, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 442, true);
	if (func_1004(iParam1, 4096))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 1, false);
		PED::SET_PED_CONFIG_FLAG(iParam0, 54, false);
		PED::SET_PED_CONFIG_FLAG(iParam0, 121, false);
		PED::SET_PED_CONFIG_FLAG(iParam0, 302, false);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 1, true);
		PED::SET_PED_CONFIG_FLAG(iParam0, 54, true);
		PED::SET_PED_CONFIG_FLAG(iParam0, 121, true);
		PED::SET_PED_CONFIG_FLAG(iParam0, 302, true);
	}
	PED::_0xAE6004120C18DF97(iParam0, 2, 0);
	PED::_0xAE6004120C18DF97(iParam0, 3, 0);
	func_832(iParam1, func_1004(iParam1, 8192), func_1004(iParam1, 16384), 1);
}

char* func_947(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 3:
			return "HORSE_NAME_GANG_BILL";
		case 7:
			if (bParam1)
			{
				return "HORSE_NAME_GANG_CHARLES_ES";
			}
			else
			{
				return "HORSE_NAME_GANG_CHARLES";
			}
			break;
		case 0:
			return "HORSE_NAME_GANG_DUTCH";
		case 5:
			return "HORSE_NAME_GANG_HOSEA";
		case 2:
			return "HORSE_NAME_GANG_JAVIER";
		case 1:
			return "HORSE_NAME_GANG_JOHN";
		case 20:
			return "HORSE_NAME_GANG_KAREN";
		case 9:
			return "HORSE_NAME_GANG_LENNY";
		case 6:
			return "HORSE_NAME_GANG_MICAH";
		case 10:
			return "HORSE_NAME_GANG_KIERAN";
		case 11:
			if (bParam1)
			{
				return "HORSE_NAME_GANG_SADIE_ES";
			}
			else
			{
				return "HORSE_NAME_GANG_SADIE";
			}
			break;
		case 8:
			return "HORSE_NAME_GANG_SEAN";
		case 23:
			return "HORSE_NAME_GANG_TRELAWNEY";
		case 4:
			if (bParam1)
			{
				return "HORSE_NAME_GANG_UNCLE_ES";
			}
			else
			{
				return "HORSE_NAME_GANG_UNCLE";
			}
			break;
		default:
			break;
	}
	return "";
}

void func_948(int iParam0, float fParam1, int iParam2)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		fParam1 = func_811(fParam1, 0f, 1f);
		iVar0 = BUILTIN::FLOOR((fParam1 * IntToFloat(ENTITY::GET_ENTITY_MAX_HEALTH(iParam0, iParam2))));
		ENTITY::_SET_ENTITY_HEALTH(iParam0, iVar0, 0);
	}
}

void func_949(int iParam0)
{
	int iVar0;

	if (!func_566(iParam0))
	{
		return;
	}
	if (func_726(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_565(iParam0);
	func_992(iVar0);
	func_568(iParam0, 8192, 1);
}

void func_950(int iParam0)
{
	int iVar0;

	if (!func_566(iParam0))
	{
		return;
	}
	if (func_726(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_565(iParam0);
	func_993(iVar0);
	func_568(iParam0, 8192, 0);
}

void func_951(int iParam0)
{
	int iVar0;

	if (!func_566(iParam0))
	{
		return;
	}
	if (func_726(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_565(iParam0);
	func_994(iVar0);
	func_568(iParam0, 16384, 1);
}

void func_952(int iParam0)
{
	int iVar0;

	if (!func_566(iParam0))
	{
		return;
	}
	if (func_726(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_565(iParam0);
	func_996(iVar0);
	func_568(iParam0, 16384, 0);
}

bool func_953(int iParam0, int iParam1)
{
	if (func_106() != -1)
	{
		return false;
	}
	if (!func_280(iParam0))
	{
		return false;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(func_283(iParam0)))
	{
		return false;
	}
	if (iParam1 && !ENTITY::DOES_ENTITY_EXIST(func_837(iParam0)))
	{
		return false;
	}
	return !_NAMESPACE48::_0xEB98B38CA60742D7(func_283(iParam0));
}

int func_954(int iParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4, bool bParam5)
{
	if (uParam3 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (!bParam5 && !PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			return 0;
		}
	}
	if (uParam3 && func_1007(iParam0))
	{
		return 0;
	}
	if (bParam4)
	{
		if (PED::IS_PED_ON_MOUNT(iParam0))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		if (func_1008(iParam0, 0) != -1)
		{
			return 0;
		}
	}
	return 1;
}

int func_955(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (iParam0 == uParam1[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_956(int iParam0)
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

void func_957(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_300(iParam0, iParam1))
		{
			if (func_937(iParam0, iParam1))
			{
				if (func_938(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_939(iParam0);
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

void func_958(int iParam0, int iParam1, bool bParam2)
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

void func_959(int iParam0, bool bParam1)
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

void func_960(int iParam0, int iParam1)
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

char* func_961(int iParam0)
{
	switch (iParam0)
	{
		case joaat("p_cs_ledger01x"):
			return "P_CS_LEDGER01X";
		case joaat("p_cs_rope01x"):
			return "P_CS_ROPE01X";
		case joaat("p_door01x"):
			return "P_DOOR01X";
		case joaat("p_door03x"):
			return "P_DOOR03X";
		case joaat("p_door12x"):
			return "p_door12x";
		case joaat("p_door13x"):
			return "P_DOOR13X";
		case joaat("p_door45x"):
			return "p_door45x";
		case joaat("p_chairvictorian01x"):
			return "p_chairvictorian01x";
		case joaat("p_crate03x"):
			return "p_crate03x";
		case joaat("p_cs_jug01x"):
			return "p_cs_jug01x";
		case joaat("p_cs_wagon02x"):
			return "p_cs_wagon02x";
		case joaat("p_door37x"):
			return "P_DOOR37X";
		case joaat("p_door_val_genstore"):
			return "p_door_val_genstore";
		case joaat("p_doorstrawberry01x"):
			return "p_doorstrawberry01x";
		case joaat("p_doorfrench01l"):
			return "p_doorfrench01l";
		case joaat("p_doorfrench01r"):
			return "p_doorfrench01r";
		case joaat("p_doormansiongate01x"):
			return "p_doormansiongate01x";
		case joaat("p_doornbd39x"):
			return "p_doornbd39x";
		case joaat("p_doorsaloon02x"):
			return "p_doorsaloon02x";
		case joaat("p_doorvh_saloon_l"):
			return "P_DOORVH_SALOON_L";
		case joaat("p_doorvh_saloon_r"):
			return "P_DOORVH_SALOON_R";
		case joaat("p_cigarlit01x"):
			return "p_cigarlit01x";
		case joaat("p_pebble01x"):
			return "p_pebble01x";
		case joaat("p_cs_rope03x"):
			return "p_cs_rope03x";
		case joaat("p_cards01x"):
			return "P_CARDS01X";
		case joaat("p_cs_pokerhand01x"):
			return "P_CS_POKERHAND01X";
		case joaat("p_cs_pokerhand02x"):
			return "P_CS_POKERHAND02X";
		case joaat("p_cs_holdemhand01x"):
			return "P_CS_HOLDEMHAND01X";
		case joaat("p_cs_holdemhand02x"):
			return "P_CS_HOLDEMHAND02X";
		case joaat("p_cs_bucket01x"):
			return "P_CS_BUCKET01X";
		case joaat("p_cs_syringe01x"):
			return "p_cs_syringe01x";
		case joaat("p_bottlejd01x"):
			return "p_bottleJD01x";
		case joaat("p_rag02x"):
			return "p_rag02x";
		case joaat("p_magneto02x"):
			return "p_magneto02x";
		case joaat("p_magneto01x"):
			return "p_magneto01x";
		case joaat("p_cs_wantedalive01x"):
			return "p_cs_wantedalive01x";
		case joaat("p_cs_rcridethelightning"):
			return "P_CS_RCRIDETHELIGHTNING";
		case joaat("p_pen01x"):
			return "p_pen01x";
		case joaat("p_cs_letter01a_x"):
			return "p_cs_letter01a_x";
		case joaat("p_cs_electricchair01x"):
			return "p_cs_electricchair01x";
		case joaat("p_cs_generator01x"):
			return "p_cs_generator01x";
		case joaat("p_cs_electrichelmet01x"):
			return "p_cs_electricHelmet01x";
		case joaat("p_cs_gag01x"):
			return "p_cs_gag01x";
		case joaat("p_door_sha_man01x"):
			return "p_door_sha_man01x";
		case joaat("p_stool01x"):
			return "p_stool01x";
		case joaat("p_stool02x"):
			return "p_stool02x";
		case joaat("p_jugglingball01x"):
			return "p_jugglingball01x";
		case joaat("p_chair02x"):
			return "p_chair02x";
		case joaat("p_chair04x"):
			return "p_chair04x";
		case joaat("p_crate15x"):
			return "p_crate15x";
		case joaat("p_cleaver01x"):
			return "p_cleaver01x";
		case joaat("p_bottle003x"):
			return "p_bottle003x";
		case joaat("p_cs_book02x"):
			return "p_cs_book02x";
		case joaat("p_stickydymt_single"):
			return "p_stickydymt_single";
		case joaat("p_cs_fusedynamite01x"):
			return "p_cs_fusedynamite01x";
		case joaat("p_dynamite01x"):
			return "p_dynamite01x";
		case joaat("p_cs_fusespool01x"):
			return "p_cs_fusespool01x";
		case joaat("p_cs_detonator01x"):
			return "p_cs_detonator01x";
		case joaat("p_cs_bedrollclsd01x"):
			return "p_cs_bedrollclsd01x";
		case joaat("p_cigarette_cs01x"):
			return "P_CIGARETTE_CS01X";
		case joaat("p_matches01x"):
			return "P_MATCHES01X";
		case joaat("p_matchstick01x"):
			return "P_MATCHSTICK01X";
		case joaat("p_woodenchair01x"):
			return "P_WOODENCHAIR01X";
		case joaat("p_chair_crate02x"):
			return "P_CHAIR_CRATE02X";
		case joaat("p_knittingneedle01x"):
			return "p_knittingneedle01x";
		case joaat("p_knittingsquare01x"):
			return "p_knittingsquare01x";
		case joaat("p_cs_rabbitmeat01x"):
			return "p_cs_rabbitMeat01x";
		case joaat("p_cs_rabbitmeat02x"):
			return "p_cs_rabbitMeat02x";
		case joaat("p_bottle03x"):
			return "p_bottle03x";
		case joaat("p_cs_billstack01x"):
			return "p_cs_billstack01x";
		case joaat("p_cs_billsingle01x"):
			return "p_cs_billSingle01x";
		case joaat("p_binoculars01x"):
			return "p_binoculars01x";
		case joaat("p_doorrhosheriff02x"):
			return "p_doorrhosheriff02x";
		case joaat("p_barstool01x"):
			return "P_BARSTOOL01X";
		case joaat("p_cs_shotglass01x"):
			return "p_cs_shotglass01x";
		case joaat("p_lamp18x"):
			return "p_lamp18x";
		case joaat("p_clock06x"):
			return "p_clock06x";
		case joaat("p_bottle02x"):
			return "p_bottle02x";
		case joaat("p_cs_lootsack01x"):
			return "p_cs_lootSack01x";
		case joaat("p_winebox01x"):
			return "p_wineBox01x";
		case joaat("p_strongbox01x"):
			return "p_strongBox01x";
		case joaat("p_clocktable02x"):
			return "P_CLOCKTABLE02X";
		case joaat("p_gen_statue03b"):
			return "p_gen_statue03b";
		case joaat("p_stoolwinter01x"):
			return "P_STOOLWINTER01X";
		case joaat("p_cs_barrag01x"):
			return "P_CS_BARRAG01X";
		case joaat("p_plate01x"):
			return "P_PLATE01X";
		case joaat("p_knife01x"):
			return "P_KNIFE01X";
		case joaat("p_knife02x"):
			return "P_KNIFE02X";
		case joaat("p_cs_catfish_whole01x"):
			return "P_CS_CATFISH_WHOLE01X";
		case joaat("p_cs_catfish_whole01bx"):
			return "P_CS_CATFISH_WHOLE01BX";
		case joaat("p_woodwhittle01x"):
			return "P_WOODWHITTLE01X";
		case joaat("p_stickfirepoker01x"):
			return "P_STICKFIREPOKER01X";
		case joaat("p_cs_woodpile01x"):
			return "P_CS_WOODPILE01X";
		case joaat("p_fork01x"):
			return "P_FORK01X";
		case joaat("p_knife04x"):
			return "P_KNIFE04X";
		case joaat("p_knife03x"):
			return "p_knife03x";
		case joaat("p_cs_bottleslim01x"):
			return "P_CS_BOTTLESLIM01X";
		case joaat("p_cs_blanket01x"):
			return "P_CS_BLANKET01X";
		case joaat("p_bedrollclosed01x"):
			return "P_BEDROLLCLOSED01X";
		case joaat("p_cs_kindling01x"):
			return "P_CS_KINDLING01X";
		case joaat("p_cigarthin01x"):
			return "P_CIGARTHIN01X";
		case joaat("p_door_wglass01x"):
			return "p_door_wglass01x";
		case joaat("p_broom02x"):
			return "p_broom02x";
		case joaat("p_amb_clipboard_01"):
			return "P_AMB_CLIPBOARD_01";
		case joaat("p_chair07x"):
			return "P_CHAIR07X";
		case joaat("p_cs_cratetnt01x"):
			return "p_cs_cratetnt01x";
		case joaat("p_cs_flourbag01x"):
			return "p_cs_flourbag01x";
		case joaat("p_cs_supplies01x"):
			return "p_cs_supplies01x";
		case joaat("p_cs_supplies02x"):
			return "p_cs_supplies02x";
		case joaat("p_cs_supplies03x"):
			return "p_cs_supplies03x";
		case joaat("p_door04x"):
			return "p_door04x";
		case joaat("p_door11x"):
			return "p_door11x";
		case joaat("p_doorrhosaloon01_l"):
			return "p_doorrhosaloon01_l";
		case joaat("p_doorrhosaloon01_r"):
			return "p_doorrhosaloon01_r";
		case joaat("p_val_gate2m02x"):
			return "P_VAL_GATE2M02X";
		case joaat("p_cs_stmdnky01x"):
			return "P_CS_STMDNKY01X";
		case joaat("p_cs_hookpulley01x"):
			return "P_CS_HOOKPULLEY01X";
		case joaat("p_chair_cs05x"):
			return "P_CHAIR_CS05X";
		case joaat("p_chair18x"):
			return "P_CHAIR_18X";
		case joaat("p_chair19x"):
			return "P_CHAIR19X";
		case joaat("p_chair20x"):
			return "P_CHAIR20X";
		case joaat("p_chair05x"):
			return "P_CHAIR05X";
		case joaat("p_chair22x"):
			return "p_chair22x";
		case joaat("p_glass01x"):
			return "p_glass01x";
		case joaat("p_diningchairs01x"):
			return "P_DININGCHAIRS01X";
		case joaat("p_windsorchair03x"):
			return "P_WINDSORCHAIR03X";
		case joaat("p_windsorchair02x"):
			return "P_WINDSORCHAIR02X";
		case joaat("p_door_val_jail02x"):
			return "p_door_val_jail02x";
		case joaat("p_cratetnt01x"):
			return "P_CRATETNT01X";
		case joaat("p_cratetnt02x"):
			return "P_CRATETNT02X";
		case joaat("p_moneystack01x"):
			return "P_MONEYSTACK01X";
		case joaat("p_axe01x"):
			return "P_AXE01X";
		case joaat("p_hoe01x"):
			return "P_HOE01X";
		case joaat("p_shovel01x"):
			return "P_SHOVEL01X";
		case joaat("p_shovel04x"):
			return "P_SHOVEL04X";
		case joaat("p_broom01x"):
			return "P_BROOM01X";
		case joaat("p_pitchfork01x"):
			return "P_PITCHFORK01X";
		case joaat("p_scythe01x"):
			return "P_SCYTHE01X";
		case joaat("p_skiff02x"):
			return "P_SKIFF02x";
		case joaat("p_door_nbx_doc01x_l"):
			return "p_door_nbx_doc01x_l";
		case joaat("p_door_nbx_doc01x_r"):
			return "p_door_nbx_doc01x_r";
		case joaat("p_cs_camera"):
			return "p_cs_camera";
		case joaat("p_cs_cameratripod"):
			return "p_cs_cameratripod";
		case joaat("p_cs_camerabag01x"):
			return "p_cs_camerabag01x";
		case joaat("p_cameraflash01x"):
			return "p_cameraflash01x";
		case joaat("p_cs_shutterrelease"):
			return "p_cs_shutterrelease";
		case joaat("rowboatswamp"):
			return "rowboatswamp";
		case joaat("p_chair25x"):
			return "P_CHAIR25X";
		case joaat("p_doorbrait01bx"):
			return "P_DOORBRAIT01BX";
		case joaat("p_cs_map01x"):
			return "P_CS_MAP01X";
		case joaat("p_hammer03x"):
			return "p_hammer03x";
		case joaat("p_cs_nailbarrel01x"):
			return "p_cs_nailbarrel01x";
		case joaat("p_cs_book04x"):
			return "p_cs_book04x";
		case joaat("p_cs_fan01x"):
			return "p_cs_Fan01x";
		case joaat("p_cs_ledgersmall01x"):
			return "p_cs_ledgerSmall01x";
		case joaat("p_cs_envelope01x"):
			return "p_cs_envelope01x";
		case joaat("p_wrappedmeat01x"):
			return "p_wrappedmeat01x";
		case joaat("p_cs_letter02x"):
			return "P_CS_LETTER02X";
		case joaat("p_cs_book03x"):
			return "p_cs_book03x";
		case joaat("p_cs_giftbox01x"):
			return "p_cs_giftBox01x";
		case joaat("p_boiler01x"):
			return "p_boiler01x";
		case joaat("p_boiler02x"):
			return "p_boiler02x";
		case joaat("p_mugcoffee01x"):
			return "p_mugCoffee01x";
		case joaat("p_glasstallbeer01x"):
			return "p_glasstallbeer01x";
		case joaat("p_pitcher02x"):
			return "p_pitcher02x";
		case joaat("p_tray03x"):
			return "p_tray03x";
		case joaat("p_sit_chairwicker01b"):
			return "p_sit_chairwicker01b";
		case -449688053:
			return "S_INV_ORLEANDER01CX";
		case -703216761:
			return "S_INV_ORLEANDER01DX";
		case joaat("p_ladle02x"):
			return "P_LADLE02X";
		case joaat("p_cs_pot01x"):
			return "P_CS_POT01X";
		case joaat("p_chairdining03x"):
			return "P_CHAIRDINING03X";
		case joaat("p_spoon01x"):
			return "P_SPOON01X";
		case joaat("p_bowl03x"):
			return "P_BOWL03X";
		case joaat("p_cs_bridecatalogue01x"):
			return "P_CS_BRIDECATALOGUE01X";
		case joaat("p_jewelrybox02bx"):
			return "P_JEWELRYBOX02BX";
		case joaat("p_cs_letterfolded01x"):
			return "P_CS_LETTERFOLDED01X";
		case joaat("p_cs_arthurhat01x"):
			return "P_CS_ARTHURHAT01X";
		case joaat("p_oar03x"):
			return "P_OAR03X";
		case joaat("p_door_val_bankvault"):
			return "P_DOOR_VAL_BANKVAULT";
		case joaat("p_door_combank01x"):
			return "P_DOOR_COMBANK01X";
		case joaat("p_cs_donation01x"):
			return "P_CS_DONATION01X";
		case joaat("p_door_nbx_bank03x_r"):
			return "p_door_nbx_bank03x_R";
		case joaat("p_door_nbx_bank03x_l"):
			return "p_door_nbx_bank03x_L";
		case joaat("p_camp_plate_02x"):
			return "p_camp_plate_02x";
		case joaat("p_stewplate02x"):
			return "p_stewplate02x";
		case joaat("p_cs_log01x"):
			return "p_cs_log01x";
		case joaat("p_ndb_hotelplank01x"):
			return "p_ndb_hotelplank01x";
		case joaat("p_glass06x"):
			return "p_glass06x";
		case joaat("p_cs_rag01x"):
			return "p_cs_rag01x";
		case joaat("p_inkwell01x"):
			return "p_inkwell01x";
		case joaat("p_cigar02x"):
			return "p_cigar02x";
		case joaat("p_bottlebeer01x"):
			return "p_bottleBeer01x";
		case joaat("p_beermugglass01x"):
			return "p_beermugglass01x";
		case joaat("p_nutbowl01x"):
			return "p_nutBowl01x";
		case joaat("p_cs_sacklarge01x"):
			return "p_cs_sacklarge01x";
		case joaat("p_cs_dressbox01x"):
			return "p_cs_dressbox01x";
		case joaat("p_bell05x"):
			return "p_bell05x";
		case joaat("p_woodendeskchair01x"):
			return "p_woodendeskchair01x";
		case joaat("p_chair06x"):
			return "p_chair06x";
		case joaat("p_jug01x"):
			return "p_jug01x";
		case -1907186363:
			return "S_INV_MEDICINE01X";
		case 2067968977:
			return "S_INV_MEDICINE_FTY";
		case -434431529:
			return "S_INV_Milkweed01bx";
		case joaat("p_bottleslim01x"):
			return "p_bottleslim01x";
		case joaat("p_cs_journal01x"):
			return "p_cs_journal01x";
		case joaat("p_mortarpestle02x"):
			return "p_mortarpestle02x";
		case 197307092:
			return "s_inv_burdock01dx";
		case joaat("p_cs_ropelegsplit"):
			return "p_cs_ropeLegSplit";
		case joaat("p_cs_ropehandssplit"):
			return "p_cs_ropeHandsSplit";
		case joaat("p_fishingpole01x"):
			return "p_fishingpole01x";
		case joaat("p_fishingpole02x"):
			return "P_FISHINGPOLE02X";
		case joaat("p_cs_flowernecklace"):
			return "p_cs_flowernecklace";
		case joaat("p_cs_flowers01x"):
			return "P_CS_FLOWERS01X";
		case -1018099626:
			return "s_inv_yarrow01cx";
		case joaat("p_cs_fishingpolebag01x"):
			return "P_CS_FISHINGPOLEBAG01X";
		case joaat("p_stick02x"):
			return "P_STICK02X";
		case joaat("p_cs_sock01x"):
			return "P_CS_SOCK01X";
		case joaat("p_door_val_bank00_rx"):
			return "P_DOOR_VAL_BANK00_RX";
		case joaat("p_door_val_bank00_lx"):
			return "P_DOOR_VAL_BANK00_RX";
		case joaat("p_can10x"):
			return "p_can10x";
		case joaat("p_cs_rabbitgut"):
			return "p_cs_rabbitgut";
		case joaat("p_cs_rabbitheadless"):
			return "p_cs_rabbitheadless";
		case joaat("p_cs_rabbitfeetless"):
			return "p_cs_rabbitfeetless";
		case joaat("p_kettle03x"):
			return "p_kettle03x";
		case -804436865:
			return "s_che_woodbin01x";
		case 1833396091:
			return "s_lootablepoorcase";
		case joaat("p_cs_bookhardcv01x"):
			return "P_CS_BOOKHARDCV01X";
		case joaat("p_letterbundle_01x"):
			return "P_LETTERBUNDLE_01X";
		case joaat("p_letterenvelope_cs01x"):
			return "P_LETTERENVELOPE_CS01X";
		case joaat("p_package08x"):
			return "P_PACKAGE08X";
		case joaat("p_cigarbox02x"):
			return "P_CIGARBOX02X";
		case joaat("p_crucifix02x"):
			return "p_crucifix02x";
		case joaat("p_bottlecrate01x"):
			return "p_bottleCrate01x";
		case joaat("p_can05x"):
			return "p_can05x";
		case joaat("p_cs_suitcase04x"):
			return "p_cs_suitcase04x";
		case joaat("p_cs_bagstrauss01x"):
			return "p_cs_bagstrauss01x";
		case joaat("p_bottle008x"):
			return "P_BOTTLE008X";
		case joaat("p_bottle009x"):
			return "P_BOTTLE009X";
		case joaat("p_bottle010x"):
			return "P_BOTTLE010X";
		case joaat("p_pocketmirror01x"):
			return "p_pocketMirror01x";
		case joaat("p_cigarette01x"):
			return "P_CIGARETTE01X";
		case joaat("p_traveltrunk02x"):
			return "P_TRAVELTRUNK02X";
		case joaat("p_chairwhite01x"):
			return "P_CHAIRWHITE01X";
		case joaat("p_journal_open01x"):
			return "P_JOURNAL_OPEN01X";
		case joaat("p_table42_cs"):
			return "p_table42_cs";
		case joaat("p_cs_newspaper_02x"):
			return "p_cs_newspaper_02x";
		case joaat("p_cs_potatoslice01x"):
			return "P_CS_POTATOSLICE01X";
		case -1035439448:
			return "S_APLSD_LOG";
		case 1410968406:
			return "S_APLSD_HRSATT";
		case joaat("p_spittoon01x"):
			return "p_spittoon01x";
		case joaat("p_woodbowl01x"):
			return "p_woodbowl01x";
		case joaat("p_pencil01x"):
			return "p_pencil01x";
		case joaat("p_spoonmid01x"):
			return "P_SPOONMID01X";
		case joaat("p_pan01x"):
			return "P_PAN01X";
		case joaat("p_pipe01x"):
			return "P_Pipe01x";
		case joaat("p_cs_railroadbond01x"):
			return "p_cs_railroadbond01x";
		case joaat("p_sharpeningstone01x"):
			return "p_sharpeningstone01x";
		case joaat("p_treestump02x"):
			return "p_treestump02x";
		case joaat("p_plate17x"):
			return "p_plate17x";
		case joaat("p_cs_newspaper_01x"):
			return "p_cs_newspaper_01x";
		case joaat("p_sadiehat01x"):
			return "p_sadiehat01x";
		case joaat("p_door_bla_jail_l_01x"):
			return "p_door_bla_jail_l_01x";
		case joaat("p_door_bla_jail_r_01x"):
			return "p_door_bla_jail_r_01x";
		case joaat("p_mashedpotato02x"):
			return "p_mashedPotato02x";
		case joaat("p_cs_bookhardcv08x"):
			return "p_cs_bookHardCv08x";
	}
	return "";
}

bool func_962(int iParam0)
{
	return func_704(iParam0, 2);
}

void func_963(int iParam0, int iParam1)
{
	if (!func_280(iParam0))
	{
		return;
	}
	((*Global_1895087)[iParam0 /*3*/])->f_1 = iParam1;
}

bool func_964(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_355(iParam1) || !func_355(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

float func_965(float fParam0, float fParam1, float fParam2)
{
	float fVar0;

	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(BUILTIN::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

void func_966(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request");
	if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(iVar0))
	{
		PED::_RELEASE_METAPED_OUTFIT_REQUEST(iVar0);
	}
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

char* func_967(int iParam0)
{
	char* sVar0;

	if (iParam0 == 255)
	{
		if (func_621(37, iParam0))
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
	if (func_621(37, iParam0))
	{
		return HUD::_0xD8402B858F4DDD88(&(((*Global_1108178)[iParam0 /*37*/])->f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(((*Global_1108178)[iParam0 /*37*/])->f_12)));
	}
	return PLAYER::GET_PLAYER_NAME(&(Global_1225638->f_120[iParam0]));
}

char* func_968(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return MISC::_CREATE_VAR_STRING(10, "PLAYER_STRING", sParam0);
	}
	return func_1009(MISC::_CREATE_VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

float func_969(int iParam0)
{
	iParam0 = func_570(iParam0);
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

float func_970(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

struct<4> func_971(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_425(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_658(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_972(struct<4> Param0, int iParam4)
{
	struct<11> Var0;

	if (!func_977(0))
	{
		return func_1010(Param0, iParam4, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_979(Param0, &Var0, 0, 0))
	{
		return 0;
	}
	if (Var0.f_10 == iParam4)
	{
		return 1;
	}
	if (!INVENTORY::_0x734311E2852760D0(func_658(0), &Param0, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_973(int iParam0)
{
	int iVar0;
	struct<4> Var1;

	iVar0 = func_882(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_974(0) };
	if (func_1011(&Var1, iVar0, 0) > 0)
	{
		return 1;
	}
	return 0;
}

struct<4> func_974(bool bParam0)
{
	return func_971(1328661203, func_1012(), -1591664384, bParam0);
}

int func_975(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	int iVar0;

	iVar0 = func_658(bParam7);
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

int func_976(var uParam0, var uParam1)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_658(0), uParam0, uParam1, 29, 1))
	{
		return 0;
	}
	return 1;
}

int func_977(bool bParam0)
{
	if (func_106() == -1)
	{
		return 1;
	}
	return INVENTORY::_0x0FBBFFC891A97C81(func_658(bParam0));
}

int func_978(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, var uParam10, bool bParam11)
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
	if (!func_979(Param0, &Var0, 1, 0))
	{
		return -1;
	}
	if (func_980(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return -1;
	}
	if (!INVENTORY::_0x780C5B9AE2819807(Var0.f_4, iParam8))
	{
		return -1;
	}
	iVar14 = func_1013(Var0.f_4, Param4, iParam8, 0);
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
	Var16 = { func_1014(&Var0) };
	Var16.f_4 = { Param4 };
	Var16.f_11 = iParam8;
	Var16.f_10 = uParam10;
	iVar32 = func_1015(1168099063, &Var16, bParam9);
	if (iVar32 == -1)
	{
		return -1;
	}
	return iVar32;
}

int func_979(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(func_658(bParam5), &uParam0, uParam4, !bParam6))
	{
		return 0;
	}
	return 1;
}

int func_980(var uParam0, var uParam1)
{
	if (((*uParam0 == *uParam1 && uParam0->f_1 == uParam1->f_1) && uParam0->f_2 == uParam1->f_2) && uParam0->f_3 == uParam1->f_3)
	{
		return 1;
	}
	return 0;
}

int func_981(struct<4> Param0, struct<4> Param4, var uParam8, bool bParam9)
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
	if (func_980(&Param0, &Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_979(Param0, &Var0, 1, 0) || !func_979(Param4, &Var14, 1, 0))
	{
		return -1;
	}
	if (func_980(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return -1;
	}
	if (!INVENTORY::_0x780C5B9AE2819807(Var0.f_4, Var14.f_9) || !INVENTORY::_0x780C5B9AE2819807(Var14.f_4, Var0.f_9))
	{
		return -1;
	}
	Var28 = { func_1014(&Var0) };
	Var28.f_4 = { Var14.f_5 };
	Var28.f_11 = Var14.f_9;
	Var28.f_10 = (Var14.f_10 || uParam8);
	Var44 = { func_1014(&Var14) };
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
					func_1016(iVar60, 1);
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
		iVar60 = func_1015(1168099063, &Var28, 0);
		iVar60 = func_1015(1168099063, &Var44, 0);
	}
	return iVar60;
}

int func_982(int iParam0)
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

int func_983()
{
	return Global_40.f_1095.f_3135;
}

void func_984(int iParam0)
{
	Global_40.f_1095.f_3135 = iParam0;
}

int func_985(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
{
	struct<4> Var0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x22E590F108289A9D(func_658(bParam6), &uParam0, uParam4, &Var0))
	{
		return 0;
	}
	if (!func_979(Var0, uParam5, bParam6, 0))
	{
		return 0;
	}
	return 1;
}

int func_986(int iParam0)
{
	int iVar0;

	if (!func_425(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_423(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_COUNT(iVar0);
}

bool func_987(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_988(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

char* func_989(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_990(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return 0;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return 0;
	}
	if (iParam1 == iParam2)
	{
		return 1;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	if (!bVar0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	return 0;
}

int func_991(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		return func_1017(iParam0);
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_992(int iParam0)
{
	if (func_1018(iParam0, 0))
	{
		return;
	}
	ENTITY::SET_ENTITY_INVINCIBLE(iParam0, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 179, true);
	ENTITY::SET_ENTITY_PROOFS(iParam0, 127, false);
	if (FIRE::IS_ENTITY_ON_FIRE(iParam0))
	{
		FIRE::STOP_ENTITY_FIRE(iParam0, 0);
		ENTITY::_SET_ENTITY_HEALTH(iParam0, ENTITY::GET_ENTITY_MAX_HEALTH(iParam0, 0), 0);
	}
}

void func_993(int iParam0)
{
	if (func_1018(iParam0, 0))
	{
		return;
	}
	ENTITY::SET_ENTITY_INVINCIBLE(iParam0, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 179, false);
	ENTITY::SET_ENTITY_PROOFS(iParam0, 0, false);
}

void func_994(int iParam0)
{
	if (func_1018(iParam0, 0))
	{
		return;
	}
	PED::SET_PED_CAN_RAGDOLL(iParam0, true);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iParam0, 1048575);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 8229);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iParam0, false);
}

void func_995(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (func_371(14))
	{
		return;
	}
	if (Global_40.f_4283 != 7 && Global_40.f_4283 != 8)
	{
		return;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(&(Global_1357549->f_3[4])))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_IN_VOLUME(iParam0, &(Global_1357549->f_3[4]), true, 0))
	{
		return;
	}
	PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 909522);
}

void func_996(int iParam0)
{
	if (func_1018(iParam0, 0))
	{
		return;
	}
	PED::SET_PED_CAN_RAGDOLL(iParam0, true);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iParam0, 1048575);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 1);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iParam0, true);
}

int func_997(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = func_1019(iParam0, 1);
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
	return 1;
}

int func_998(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	switch (iParam0)
	{
		case 296923297:
			iVar2 = -268604689;
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			switch (iVar0)
			{
				case 0:
					iVar1 = -268604689;
					break;
				case 1:
					iVar1 = -1632589543;
					break;
				case 2:
					iVar1 = -1862464078;
					break;
			}
			break;
		case 1237718549:
			iVar2 = -922193456;
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
			switch (iVar0)
			{
				case 0:
					iVar1 = -922193456;
					break;
				case 1:
					iVar1 = -2040275819;
					break;
				case 2:
					iVar1 = -1114682645;
					break;
				case 3:
					iVar1 = -1414977761;
					break;
			}
			break;
	}
	if (iParam1 != -1)
	{
		if (func_822(iParam1, iVar1))
		{
			iVar2 = iVar1;
		}
	}
	return iVar2;
}

int func_999(int iParam0)
{
	switch (iParam0)
	{
		case -268604689:
			return -1496612359;
		case -1632589543:
			return 1052055818;
		case -1862464078:
			return 1895628185;
		case -922193456:
			return -99272505;
		case -2040275819:
			return 464906090;
		case -1114682645:
			return 744097966;
		case -1414977761:
			return 1059434053;
		default:
			break;
	}
	return 41788943;
}

int func_1000(int iParam0)
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

int func_1001(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_1020(iParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_1021((375 + iVar28), 1);
			if (func_1022(iParam0, &Var0, iVar5, 0))
			{
				if (func_1023(iParam0, &Var6, iVar5))
				{
					Var29 = { func_971(iParam0, Var0, iVar5, 0) };
					func_1024(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_977(0))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
					{
						return 0;
					}
					func_1025(WEAPON::_0x5C2EA6C44F515F34(iParam0), iParam1, iParam6);
					func_1026(iParam0, iParam1);
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

void func_1002(int iParam0, int iParam1, float fParam2)
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

bool func_1003(bool bParam0)
{
	return WEAPON::_0x1F7977C9101F807F(WEAPON::_0x5C2EA6C44F515F34(bParam0));
}

bool func_1004(int iParam0, int iParam1)
{
	if (!func_566(iParam0))
	{
		return false;
	}
	return (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 && iParam1) != 0;
}

int func_1005(int iParam0)
{
	return 1268180497;
}

int func_1006(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 5:
		case 6:
		case 8:
		case 10:
		case 23:
			return 1;
		case 4:
		case 9:
		case 20:
			return 2;
		case 7:
			if (func_131(45))
			{
				return 1;
			}
			else
			{
				return 2;
			}
			break;
		case 11:
			if (func_131(45))
			{
				return 2;
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_1007(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_GROUP_MEMBER(iParam0, func_1027(), 1))
	{
		return 1;
	}
	return 0;
}

int func_1008(int iParam0, bool bParam1)
{
	return func_1028(iParam0, Global_1894899->f_2, bParam1);
}

char* func_1009(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_1010(struct<4> Param0, int iParam4, bool bParam5)
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
	if (!func_979(Param0, &Var1, 1, 0))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam4)
	{
		return iVar0;
	}
	iVar15 = func_586(Var1.f_4);
	if (iVar15 == -1784221369)
	{
		Var16 = { func_1029(Param0, 1) };
		Var16.f_10 = iParam4;
		iVar0 = func_1030(-1230526146, &Var16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -1037537535)
	{
		Var44 = { func_1031(Param0, 1) };
		Var44.f_10 = iParam4;
		iVar0 = func_1032(-1230526146, &Var44, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var61 = { func_1014(&Var1) };
		Var61.f_10 = iParam4;
		iVar0 = func_1015(-1230526146, &Var61, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

int func_1011(var uParam0, int iParam1, bool bParam2)
{
	return INVENTORY::_0x033EE4B89F3AC545(func_658(bParam2), uParam0, iParam1);
}

struct<4> func_1012()
{
	struct<4> Var0;

	return Var0;
}

int func_1013(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;

	if (!func_425(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_971(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_658(bParam6), &Var0, 0);
	return uVar4;
}

struct<16> func_1014(var uParam0)
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

int func_1015(int iParam0, var uParam1, bool bParam2)
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
					func_1016(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_1016(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 16))
	{
		func_1016(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_1016(int iParam0, int iParam1)
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
	func_1033(iParam0, iParam1);
}

bool func_1017(int iParam0)
{
	int iVar0;
	int iVar1;

	func_1034(iParam0, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(Global_1357549->f_1866[iVar0]), iVar1);
}

int func_1018(int iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (bParam1)
		{
			return PED::IS_PED_DEAD_OR_DYING(iParam0, true);
		}
		else
		{
			return ENTITY::IS_ENTITY_DEAD(iParam0);
		}
	}
	return 1;
}

int func_1019(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2051275045:
			return 14;
		case -2040275819:
			return 46;
		case -1874208704:
			return 5;
		case -1862464078:
			return 44;
		case -1692022104:
			return 63;
		case -1684458716:
			return 31;
		case -1678882891:
			return 36;
		case -1668922931:
			return 20;
		case -1648322231:
			return 72;
		case -1642335258:
			return 66;
		case -1632589543:
			return 43;
		case -1587546924:
			return 54;
		case -1559986688:
			return 7;
		case -1532979576:
			return 65;
		case -1414977761:
			return 48;
		case -1394723994:
			return 59;
		case -1341683964:
			return 21;
		case -1335291723:
			return 60;
		case -1268239471:
			return 68;
		case -1256711921:
			return 35;
		case -1248623443:
			return 26;
		case -1205468859:
			return 76;
		case -1155031950:
			return 25;
		case -1114682645:
			return 47;
		case -1092189504:
			return 69;
		case -1065026089:
			return 73;
		case -973332710:
			return 32;
		case -946772361:
			return 62;
		case -922193456:
			return 39;
		case -695701225:
			return 3;
		case -571427255:
			return 57;
		case -481967001:
			return 28;
		case -445211559:
			return 61;
		case -433615745:
			return 18;
		case -426171916:
			return 80;
		case -310473775:
			return 42;
		case -301101630:
			return 24;
		case -268604689:
			return 37;
		case -193269670:
			return 30;
		case -23947011:
			return 50;
		case 0:
			return 0;
		case 6418928:
			return 71;
		case 80515440:
			return 70;
		case 178615350:
			return 1;
		case 283037683:
			return 13;
		case 296923297:
			return 45;
		case 350498312:
			return 27;
		case 404503428:
			return 4;
		case 431390894:
			return 23;
		case 513932985:
			return 29;
		case 707545953:
			return 64;
		case 713940276:
			return 11;
		case 777603945:
			return 19;
		case 837028314:
			return 58;
		case 867156718:
			return 79;
		case 876535472:
			return 75;
		case 876797088:
			return 53;
		case 928493661:
			return 22;
		case 961676983:
			return 55;
		case 977450639:
			return 9;
		case 1018353621:
			return 17;
		case 1046468203:
			return 16;
		case 1071744295:
			return 8;
		case 1199580439:
			return 41;
		case 1200878026:
			return 52;
		case 1205492208:
			return 40;
		case 1237718549:
			return 49;
		case 1254970547:
			return 78;
		case 1295334688:
			return 51;
		case 1300659195:
			return 56;
		case 1484386316:
			return 77;
		case 1495063555:
			return 15;
		case 1593315648:
			return 6;
		case 1658153743:
			return 33;
		case 1744281750:
			return 12;
		case 1818898449:
			return 38;
		case 1842975347:
			return 34;
		case 1901494236:
			return 10;
		case 1950972546:
			return 67;
		case 2062813606:
			return 74;
		case 2094043703:
			return 2;
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

struct<5> func_1020(int iParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;

	Var0 = { func_974(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_586(iParam0))
	{
		case -1037537535:
			if (!INVENTORY::_0x780C5B9AE2819807(iParam0, 1034665895))
			{
				Var0 = { func_971(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_915(bParam1) };
			if (iParam2 && func_1035(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_1022(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_1022(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_1023(iParam0, &Var5, 1728382685))
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
			Var0 = { func_1036(bParam1) };
			switch (func_423(iParam0))
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
			if (func_1037(iParam0, -1823706425))
			{
				Var0 = { func_971(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, -1838434463);
			}
			else if (func_1037(iParam0, -1483207246))
			{
				Var0 = { func_971(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_979(Var0, &Var27, bParam1, 0))
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

int func_1021(int iParam0, int iParam1)
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

bool func_1022(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_1013(iParam0, *uParam1, iParam2, bParam3) > 0;
}

int func_1023(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_1038(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

int func_1024(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (func_1039(iParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_979(*uParam1, &Var0, bParam6, 0))
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
	if (!func_977(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_658(bParam6), uParam1, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_1025(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_1040(iParam0))
	{
		return 0;
	}
	if (!func_977(0))
	{
		return 0;
	}
	WEAPON::_0x106A811C6D3035F3(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_1026(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::_0xD3750CCC00635FC2(iParam0))
	{
		iVar1 = func_1041(WEAPON::_0xD3750CCC00635FC2(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

int func_1027()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

int func_1028(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	int iVar1;

	if (iParam1 == -1)
	{
		return -1;
	}
	if (!func_1042(iParam1, &uVar0, &iVar1, 0, 0))
	{
		return -1;
	}
	return func_1043(iParam0, uVar0, iVar1, bParam2);
}

struct<28> func_1029(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
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
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_658(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_1014(&Var28) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_1030(int iParam0, var uParam1, bool bParam2)
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
					func_1016(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_1016(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 28))
	{
		func_1016(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<17> func_1031(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
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
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_658(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_1014(&Var17) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_1032(int iParam0, var uParam1, bool bParam2)
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
					func_1016(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_1016(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 17))
	{
		func_1016(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_1033(int iParam0, int iParam1)
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

int func_1034(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = func_1044(iParam0, 1);
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
	return 1;
}

int func_1035(int iParam0, bool bParam1)
{
	if (func_423(iParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
	{
		if (bParam1)
		{
			return func_1045(-1185145312, 0) > 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

struct<4> func_1036(bool bParam0)
{
	int iVar0;

	iVar0 = func_658(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224218))
		{
			*Global_1224218 = { func_971(271701509, func_974(bParam0), 12999093, 0) };
		}
		return *Global_1224218;
	}
	return func_971(271701509, func_974(bParam0), 12999093, 0);
}

int func_1037(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_423(iParam0);
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

int func_1038(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_658(0);
	*uParam1 = { func_971(iParam0, func_915(0), iParam3, 0) };
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

int func_1039(var uParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_1040(int iParam0)
{
	return WEAPON::_0x1F7977C9101F807F(iParam0);
}

int func_1041(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_1042(int iParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	bool bVar0;

	bVar0 = func_106() != -1;
	switch (iParam0)
	{
		case 76:
			*uParam1 = 0;
			if (bParam3)
			{
				*uParam2 = 47;
			}
			else
			{
				*uParam2 = 63;
			}
			if (bVar0)
			{
				*uParam2 = 5;
			}
			break;
		case 105:
			*uParam1 = 69;
			if (bParam3)
			{
				*uParam2 = 127;
			}
			else
			{
				*uParam2 = 136;
			}
			if (bVar0)
			{
				*uParam2 = 72;
			}
			break;
		case 5:
			*uParam1 = 137;
			*uParam2 = 324;
			if (bVar0)
			{
				*uParam2 = 142;
			}
			break;
		case 61:
			*uParam1 = 380;
			*uParam2 = 381;
			if (bVar0)
			{
				*uParam2 = 380;
			}
			break;
		case 78:
			*uParam1 = 382;
			*uParam2 = 431;
			if (bVar0)
			{
				*uParam2 = 384;
			}
			break;
		case 92:
			*uParam1 = 443;
			*uParam2 = 471;
			if (bVar0)
			{
				*uParam2 = 443;
			}
			break;
		case 26:
			*uParam1 = 472;
			if (bParam3)
			{
				*uParam2 = 500;
			}
			else
			{
				*uParam2 = 502;
			}
			if (bVar0)
			{
				*uParam2 = 472;
			}
			break;
		case 38:
			*uParam1 = 508;
			*uParam2 = 553;
			if (bVar0)
			{
				*uParam2 = 509;
			}
			break;
		case 68:
			*uParam1 = 554;
			*uParam2 = 565;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 65:
			*uParam1 = 566;
			*uParam2 = 588;
			if (bVar0)
			{
				*uParam2 = 566;
			}
			break;
		case 69:
			*uParam1 = 589;
			if (bParam3)
			{
				*uParam2 = 598;
			}
			else
			{
				*uParam2 = 612;
			}
			if (bVar0)
			{
				*uParam2 = 590;
			}
			break;
		case 75:
			*uParam1 = 503;
			*uParam2 = 506;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 93:
			*uParam1 = 613;
			*uParam2 = 625;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 95:
			*uParam1 = 626;
			*uParam2 = 641;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 97:
			*uParam1 = 642;
			*uParam2 = 643;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 3:
			*uParam1 = 644;
			*uParam2 = 656;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 6:
			*uParam1 = 657;
			*uParam2 = 658;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 32:
			*uParam1 = 325;
			*uParam2 = 344;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 82:
			*uParam1 = 659;
			if (bParam3)
			{
				*uParam2 = 673;
			}
			else
			{
				*uParam2 = 690;
			}
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 35:
			*uParam1 = 691;
			*uParam2 = 700;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 56:
			*uParam1 = 701;
			*uParam2 = 708;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 22:
			if (bParam4)
			{
				*uParam1 = 715;
			}
			else
			{
				*uParam1 = 715;
			}
			*uParam2 = 723;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 110:
			*uParam1 = 724;
			*uParam2 = 730;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 64:
			*uParam1 = 736;
			*uParam2 = 740;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 66:
			*uParam1 = 745;
			*uParam2 = 750;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 70:
			*uParam1 = 751;
			*uParam2 = 754;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 77:
			*uParam1 = 731;
			*uParam2 = 732;
			break;
		case 96:
			*uParam1 = 741;
			*uParam2 = 743;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 29:
			*uParam1 = 744;
			*uParam2 = 744;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 100:
			*uParam1 = 755;
			*uParam2 = 763;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 102:
			*uParam1 = 764;
			*uParam2 = 767;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 72:
			*uParam1 = 733;
			*uParam2 = 735;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 124:
			*uParam1 = 791;
			*uParam2 = 793;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 86:
			*uParam1 = 768;
			*uParam2 = 772;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 126:
			*uParam1 = 773;
			*uParam2 = 779;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 120:
			*uParam1 = 432;
			*uParam2 = 442;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 115:
			*uParam1 = 345;
			*uParam2 = 375;
			if (bVar0)
			{
				*uParam2 = 375;
			}
			break;
		case 125:
			*uParam1 = 376;
			*uParam2 = 379;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 116:
			*uParam1 = 783;
			*uParam2 = 790;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 21:
			*uParam1 = 780;
			*uParam2 = 782;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 42:
			*uParam1 = 794;
			*uParam2 = 798;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 89:
			*uParam1 = 799;
			*uParam2 = 800;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 23:
			*uParam1 = 801;
			*uParam2 = 801;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 28:
			*uParam1 = 802;
			*uParam2 = 803;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 101:
			*uParam1 = 804;
			*uParam2 = 806;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 117:
			*uParam1 = 507;
			*uParam2 = 507;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 11:
			*uParam1 = 807;
			*uParam2 = 833;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 128:
			*uParam1 = 834;
			*uParam2 = 857;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		default:
			*uParam1 = -1;
			*uParam2 = -1;
			break;
	}
	if (*uParam1 == -1 || *uParam2 == -1)
	{
		return 0;
	}
	return 1;
}

int func_1043(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (ENTITY::IS_ENTITY_DEAD(iParam0) && !bParam3)
	{
		return -1;
	}
	iVar0 = _NAMESPACE48::_0x32A1E3B83D501096(iParam0);
	if (!_NAMESPACE48::_0x800DF3FC913355F3(iVar0))
	{
		return -1;
	}
	iVar1 = uParam1;
	iVar1 = uParam1;
	while (iVar1 <= iParam2)
	{
		iVar2 = iVar1;
		if (func_281(iVar2) != 0 && _NAMESPACE48::_0x800DF3FC913355F3(func_283(iVar2)))
		{
			if (func_283(iVar2) == iVar0)
			{
				return iVar2;
			}
		}
		iVar1++;
	}
	return -1;
}

int func_1044(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2147332013:
			return 129;
		case -2137730706:
			return 13;
		case -2129915369:
			return 383;
		case -2122981486:
			return 179;
		case -2104294676:
			return 83;
		case -2098336883:
			return 145;
		case -2093351659:
			return 297;
		case -2093199573:
			return 185;
		case -2082302444:
			return 259;
		case -2075517304:
			return 393;
		case -2071373019:
			return 440;
		case -2063047758:
			return 190;
		case -2047114234:
			return 351;
		case -2041153728:
			return 277;
		case -2038346064:
			return 244;
		case -2033572567:
			return 92;
		case -2030965067:
			return 380;
		case -2023813568:
			return 125;
		case -2006082799:
			return 56;
		case -1994410205:
			return 499;
		case -1988547710:
			return 457;
		case -1981702243:
			return 96;
		case -1971110347:
			return 435;
		case -1955429862:
			return 387;
		case -1949364492:
			return 285;
		case -1943655584:
			return 460;
		case -1935893216:
			return 124;
		case -1934704933:
			return 423;
		case -1922834065:
			return 320;
		case -1917134080:
			return 309;
		case -1916588959:
			return 29;
		case -1897704131:
			return 225;
		case -1888506091:
			return 142;
		case -1885734028:
			return 110;
		case -1868521635:
			return 396;
		case -1866112883:
			return 257;
		case -1856459307:
			return 219;
		case -1837343824:
			return 496;
		case -1832590852:
			return 326;
		case -1827461037:
			return 233;
		case -1827211287:
			return 197;
		case -1827011525:
			return 98;
		case -1825730216:
			return 18;
		case -1818590041:
			return 246;
		case -1812183035:
			return 97;
		case -1805142260:
			return 273;
		case -1804466187:
			return 77;
		case -1802212639:
			return 10;
		case -1790474454:
			return 331;
		case -1771575988:
			return 16;
		case -1757085331:
			return 454;
		case -1738185394:
			return 411;
		case -1728071186:
			return 108;
		case -1719149624:
			return 131;
		case -1689239424:
			return 312;
		case -1675752723:
			return 249;
		case -1671819791:
			return 196;
		case -1667151809:
			return 139;
		case -1664107227:
			return 405;
		case -1648173738:
			return 22;
		case -1646431667:
			return 415;
		case -1633236438:
			return 426;
		case -1596446207:
			return 252;
		case -1584659518:
			return 210;
		case -1582252733:
			return 409;
		case -1565979762:
			return 507;
		case -1564254711:
			return 158;
		case -1557862414:
			return 88;
		case -1557856056:
			return 112;
		case -1548165899:
			return 422;
		case -1538781541:
			return 483;
		case -1526278254:
			return 338;
		case -1520159291:
			return 17;
		case -1512720465:
			return 413;
		case -1501120273:
			return 57;
		case -1486701482:
			return 437;
		case -1483924019:
			return 27;
		case -1482329777:
			return 369;
		case -1479860879:
			return 482;
		case -1466029365:
			return 223;
		case -1461741225:
			return 280;
		case -1426009748:
			return 119;
		case -1425653701:
			return 199;
		case -1417145007:
			return 472;
		case -1409307734:
			return 289;
		case -1408927269:
			return 21;
		case -1405475146:
			return 329;
		case -1396074730:
			return 427;
		case -1393633441:
			return 377;
		case -1383535454:
			return 135;
		case -1381943684:
			return 470;
		case -1377327596:
			return 205;
		case -1370062029:
			return 148;
		case -1355784201:
			return 311;
		case -1340559426:
			return 373;
		case -1333840726:
			return 236;
		case -1318290630:
			return 254;
		case -1316284753:
			return 114;
		case -1302664729:
			return 294;
		case -1299405763:
			return 206;
		case -1276847784:
			return 229;
		case -1238376790:
			return 445;
		case -1235200494:
			return 165;
		case -1233518925:
			return 318;
		case -1220678266:
			return 120;
		case -1211711936:
			return 26;
		case -1205318041:
			return 23;
		case -1202860612:
			return 327;
		case -1198456774:
			return 442;
		case -1190705999:
			return 9;
		case -1179993139:
			return 284;
		case -1171086122:
			return 41;
		case -1164176475:
			return 138;
		case -1152282847:
			return 33;
		case -1143028112:
			return 25;
		case -1117048125:
			return 238;
		case -1088604829:
			return 247;
		case -1077843421:
			return 324;
		case -1061998329:
			return 164;
		case -1061765120:
			return 169;
		case -1048889581:
			return 391;
		case -1045864225:
			return 510;
		case -1036305792:
			return 58;
		case -1032742879:
			return 61;
		case -1025265051:
			return 485;
		case -978287173:
			return 12;
		case -954047483:
			return 395;
		case -948342953:
			return 359;
		case -935212592:
			return 486;
		case -925475803:
			return 484;
		case -916887991:
			return 76;
		case -908082222:
			return 187;
		case -895048976:
			return 374;
		case -890266811:
			return 172;
		case -872824399:
			return 170;
		case -860304527:
			return 186;
		case -850999370:
			return 2;
		case -833577856:
			return 86;
		case -830432609:
			return 492;
		case -825056768:
			return 149;
		case -820146008:
			return 52;
		case -820014425:
			return 439;
		case -818926670:
			return 200;
		case -813365276:
			return 243;
		case -811804990:
			return 293;
		case -807742826:
			return 3;
		case -807680461:
			return 68;
		case -807112425:
			return 180;
		case -803062666:
			return 65;
		case -779264865:
			return 106;
		case -757336127:
			return 372;
		case -742985447:
			return 302;
		case -736212459:
			return 275;
		case -715535005:
			return 362;
		case -713369135:
			return 461;
		case -710247698:
			return 251;
		case -697342513:
			return 242;
		case -695655810:
			return 443;
		case -694047360:
			return 375;
		case -693094356:
			return 89;
		case -692943180:
			return 341;
		case -681593414:
			return 175;
		case -671103079:
			return 504;
		case -670201310:
			return 313;
		case -666548248:
			return 345;
		case -650501093:
			return 509;
		case -646454939:
			return 94;
		case -637873918:
			return 404;
		case -636774257:
			return 146;
		case -625309660:
			return 343;
		case -625171987:
			return 234;
		case -620369863:
			return 403;
		case -619139736:
			return 104;
		case -604891653:
			return 237;
		case -597010176:
			return 487;
		case -582523927:
			return 424;
		case -574426587:
			return 261;
		case -561040434:
			return 400;
		case -558867971:
			return 266;
		case -554271718:
			return 232;
		case -550689301:
			return 283;
		case -544885621:
			return 310;
		case -544096309:
			return 337;
		case -534913305:
			return 174;
		case -532430534:
			return 444;
		case -527348304:
			return 253;
		case -515663690:
			return 330;
		case -505205920:
			return 39;
		case -453449739:
			return 182;
		case -449489613:
			return 140;
		case -445710060:
			return 469;
		case -435161770:
			return 150;
		case -426458298:
			return 59;
		case -423162607:
			return 133;
		case -413943699:
			return 141;
		case -404697685:
			return 308;
		case -402973141:
			return 418;
		case -399703928:
			return 155;
		case -384358266:
			return 295;
		case -381477663:
			return 37;
		case -365550600:
			return 30;
		case -332258016:
			return 382;
		case -331451824:
			return 303;
		case -330340613:
			return 489;
		case -328226663:
			return 323;
		case -324786054:
			return 288;
		case -319093529:
			return 260;
		case -317452243:
			return 128;
		case -314300362:
			return 473;
		case -308211771:
			return 194;
		case -303175962:
			return 431;
		case -302690754:
			return 67;
		case -302574837:
			return 24;
		case -290258665:
			return 317;
		case -286479684:
			return 269;
		case -285172118:
			return 505;
		case -270246276:
			return 490;
		case -266920872:
			return 357;
		case -259827569:
			return 425;
		case -258855820:
			return 464;
		case -248683070:
			return 429;
		case -231638975:
			return 34;
		case -222982511:
			return 204;
		case -221923309:
			return 406;
		case -221398783:
			return 354;
		case -219249641:
			return 474;
		case -218211995:
			return 344;
		case -207368052:
			return 361;
		case -172442174:
			return 385;
		case -170673728:
			return 156;
		case -165538585:
			return 127;
		case -164763388:
			return 376;
		case -164125056:
			return 438;
		case -162152912:
			return 441;
		case -144509608:
			return 113;
		case -134086241:
			return 222;
		case -125979788:
			return 95;
		case -123719783:
			return 151;
		case -121904458:
			return 208;
		case -120359954:
			return 316;
		case -117389654:
			return 93;
		case -115054321:
			return 325;
		case -110297889:
			return 290;
		case -98209688:
			return 55;
		case -94582539:
			return 239;
		case -72799657:
			return 287;
		case -66788599:
			return 19;
		case -58963831:
			return 105;
		case -58291054:
			return 201;
		case -56411631:
			return 342;
		case -54575589:
			return 353;
		case -21372580:
			return 46;
		case -18183703:
			return 466;
		case -8269375:
			return 137;
		case 13460468:
			return 350;
		case 15906262:
			return 321;
		case 16938930:
			return 81;
		case 61425283:
			return 51;
		case 65871884:
			return 54;
		case 70047950:
			return 188;
		case 72162222:
			return 43;
		case 72854145:
			return 1;
		case 85572330:
			return 147;
		case 94814634:
			return 228;
		case 95619635:
			return 408;
		case 98434060:
			return 458;
		case 108841201:
			return 358;
		case 121222228:
			return 476;
		case 121466883:
			return 498;
		case 122725574:
			return 477;
		case 124507607:
			return 480;
		case 127002552:
			return 455;
		case 132239274:
			return 494;
		case 132287504:
			return 184;
		case 137433874:
			return 227;
		case 139790602:
			return 60;
		case 171363131:
			return 47;
		case 176656832:
			return 0;
		case 180573150:
			return 279;
		case 187832713:
			return 282;
		case 195634974:
			return 433;
		case 200640922:
			return 35;
		case 207369059:
			return 64;
		case 209896562:
			return 304;
		case 217189690:
			return 241;
		case 220165734:
			return 134;
		case 228261307:
			return 74;
		case 229393477:
			return 270;
		case 278608719:
			return 399;
		case 281905065:
			return 419;
		case 289706151:
			return 364;
		case 290238735:
			return 250;
		case 291150162:
			return 103;
		case 299577191:
			return 90;
		case 315283201:
			return 240;
		case 315850182:
			return 193;
		case 319124397:
			return 506;
		case 340819214:
			return 84;
		case 388356689:
			return 101;
		case 397857304:
			return 335;
		case 400034151:
			return 71;
		case 403634348:
			return 291;
		case 404260466:
			return 73;
		case 408875702:
			return 80;
		case 411591903:
			return 132;
		case 437096661:
			return 446;
		case 443165194:
			return 332;
		case 446631778:
			return 436;
		case 448165982:
			return 220;
		case 474959407:
			return 255;
		case 477580579:
			return 493;
		case 487107418:
			return 370;
		case 490619049:
			return 163;
		case 500323776:
			return 40;
		case 501194998:
			return 471;
		case 512067206:
			return 452;
		case 525567468:
			return 160;
		case 531203229:
			return 245;
		case 532176461:
			return 203;
		case 533929296:
			return 346;
		case 534386033:
			return 488;
		case 534766068:
			return 349;
		case 542655528:
			return 360;
		case 545240164:
			return 398;
		case 553023190:
			return 78;
		case 561912024:
			return 420;
		case 569547151:
			return 389;
		case 579829077:
			return 178;
		case 597768834:
			return 315;
		case 627421591:
			return 268;
		case 634843927:
			return 66;
		case 643583911:
			return 401;
		case 652625673:
			return 501;
		case 654830082:
			return 371;
		case 676394410:
			return 8;
		case 678897243:
			return 211;
		case 679257961:
			return 126;
		case 685466172:
			return 217;
		case 692218123:
			return 467;
		case 693884302:
			return 177;
		case 703663141:
			return 328;
		case 705436149:
			return 365;
		case 709886296:
			return 414;
		case 720937389:
			return 115;
		case 727456822:
			return 153;
		case 730196087:
			return 157;
		case 737744809:
			return 50;
		case 747937920:
			return 481;
		case 753501669:
			return 367;
		case 761196368:
			return 218;
		case 766757422:
			return 296;
		case 772151702:
			return 28;
		case 779383250:
			return 336;
		case 787526397:
			return 202;
		case 794696385:
			return 14;
		case 812866778:
			return 355;
		case 833697503:
			return 298;
		case 837366581:
			return 118;
		case 847641699:
			return 192;
		case 852724290:
			return 136;
		case 853563984:
			return 49;
		case 856952521:
			return 42;
		case 866755445:
			return 4;
		case 870594813:
			return 173;
		case 881844660:
			return 11;
		case 920901415:
			return 412;
		case 921753284:
			return 272;
		case 951007010:
			return 407;
		case 951777606:
			return 212;
		case 953460136:
			return 159;
		case 960236560:
			return 70;
		case 1004978630:
			return 333;
		case 1005520287:
			return 38;
		case 1019519723:
			return 256;
		case 1025198797:
			return 171;
		case 1046168872:
			return 456;
		case 1057391314:
			return 356;
		case 1059753202:
			return 198;
		case 1061621862:
			return 299;
		case 1073595144:
			return 417;
		case 1080053708:
			return 189;
		case 1086705486:
			return 265;
		case 1092859156:
			return 116;
		case 1098143971:
			return 305;
		case 1130474589:
			return 264;
		case 1132574871:
			return 402;
		case 1134064472:
			return 271;
		case 1138578991:
			return 286;
		case 1141344854:
			return 378;
		case 1150653348:
			return 392;
		case 1156064998:
			return 366;
		case 1157034909:
			return 451;
		case 1165920102:
			return 292;
		case 1166284695:
			return 363;
		case 1176031365:
			return 224;
		case 1176450045:
			return 87;
		case 1185998732:
			return 410;
		case 1188734721:
			return 214;
		case 1219566057:
			return 166;
		case 1234351222:
			return 463;
		case 1249990864:
			return 428;
		case 1264235360:
			return 450;
		case 1267596926:
			return 7;
		case 1267957796:
			return 32;
		case 1292421672:
			return 215;
		case 1296800590:
			return 107;
		case 1297331434:
			return 130;
		case 1300783988:
			return 45;
		case 1305416676:
			return 495;
		case 1314347520:
			return 122;
		case 1328264128:
			return 258;
		case 1330480767:
			return 102;
		case 1335382896:
			return 248;
		case 1338855384:
			return 152;
		case 1344816618:
			return 314;
		case 1344986053:
			return 168;
		case 1349313303:
			return 6;
		case 1354948947:
			return 300;
		case 1357649685:
			return 267;
		case 1358951864:
			return 368;
		case 1360004037:
			return 322;
		case 1365311568:
			return 85;
		case 1366067161:
			return 91;
		case 1402899606:
			return 195;
		case 1406459015:
			return 53;
		case 1410684624:
			return 181;
		case 1415827953:
			return 432;
		case 1425403638:
			return 479;
		case 1427678219:
			return 230;
		case 1437607594:
			return 306;
		case 1438982821:
			return 111;
		case 1441230304:
			return 502;
		case 1447433250:
			return 352;
		case 1448617333:
			return 99;
		case 1454698172:
			return 421;
		case 1456958671:
			return 397;
		case 1467569385:
			return 69;
		case 1469701481:
			return 394;
		case 1508162848:
			return 434;
		case 1522535287:
			return 48;
		case 1524405765:
			return 79;
		case 1534808110:
			return 301;
		case 1549419655:
			return 216;
		case 1566844391:
			return 63;
		case 1571380021:
			return 75;
		case 1578693170:
			return 144;
		case 1593516439:
			return 462;
		case 1618734891:
			return 339;
		case 1621135203:
			return 44;
		case 1623482561:
			return 503;
		case 1636680094:
			return 478;
		case 1647502903:
			return 20;
		case 1665139197:
			return 278;
		case 1674863702:
			return 281;
		case 1675028401:
			return 109;
		case 1685749736:
			return 334;
		case 1688887348:
			return 209;
		case 1699962800:
			return 263;
		case 1701503387:
			return 207;
		case 1707661169:
			return 167;
		case 1723031480:
			return 161;
		case 1731971171:
			return 262;
		case 1750892420:
			return 183;
		case 1756182884:
			return 162;
		case 1759111208:
			return 72;
		case 1769573516:
			return 468;
		case 1773135364:
			return 231;
		case 1777191912:
			return 340;
		case 1783253542:
			return 384;
		case 1784248599:
			return 143;
		case 1786449168:
			return 31;
		case 1791780428:
			return 117;
		case 1792418811:
			return 100;
		case 1796786552:
			return 379;
		case 1817180056:
			return 390;
		case 1819621703:
			return 276;
		case 1824331150:
			return 449;
		case 1852529797:
			return 307;
		case 1863892775:
			return 274;
		case 1874987418:
			return 191;
		case 1888528254:
			return 447;
		case 1889392998:
			return 508;
		case 1890596065:
			return 235;
		case 1899640864:
			return 388;
		case 1909655985:
			return 430;
		case 1914552023:
			return 176;
		case 1927460276:
			return 448;
		case 1935952956:
			return 475;
		case 1937922313:
			return 459;
		case 1945593927:
			return 62;
		case 1955664182:
			return 226;
		case 1964695690:
			return 491;
		case 1971155641:
			return 453;
		case 1974689262:
			return 500;
		case 1978339427:
			return 154;
		case 2011168490:
			return 123;
		case 2011368334:
			return 221;
		case 2016323151:
			return 36;
		case 2030928096:
			return 381;
		case 2033246305:
			return 82;
		case 2045192987:
			return 319;
		case 2045388447:
			return 121;
		case 2050878222:
			return 497;
		case 2057380366:
			return 348;
		case 2071287828:
			return 347;
		case 2080199877:
			return 213;
		case 2082303678:
			return 5;
		case 2091083291:
			return 15;
		case 2137967386:
			return 386;
		case 2143106360:
			return 416;
		case 2143139308:
			return 465;
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

int func_1045(int iParam0, bool bParam1)
{
	if (func_1040(iParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_658(bParam1), iParam0, 0);
}

