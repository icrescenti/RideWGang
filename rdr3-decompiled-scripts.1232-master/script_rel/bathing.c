#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	char* sLocal_3 = NULL;
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
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	struct<4> Local_36 = { 0, 0, 0, 0 } ;
	struct<4> Local_40 = { 0, 0, 0, 0 } ;
	int iLocal_44 = 0;
	char* sLocal_45 = NULL;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	float fLocal_67 = 0f;
	float fLocal_68 = 0f;
	float fLocal_69 = 0f;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	bool bLocal_76 = false;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	struct<7> Local_82 = { -1, 168093330, -304640465, 0, 0, 0, 0 } ;
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
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = -711536720;
	var uLocal_125 = -473983589;
	var uLocal_126 = -719620017;
	var uLocal_127 = 1138488863;
	var uLocal_128 = 814057702;
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
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 1;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 9;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	struct<31> Local_235 = { 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	struct<17> Local_269 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 1;
	var uLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	char* sLocal_302 = NULL;
	char* sLocal_303 = NULL;
	char* sLocal_304 = NULL;
	char* sLocal_305 = NULL;
	char* sLocal_306 = NULL;
	char* sLocal_307 = NULL;
	char* sLocal_308 = NULL;
	char* sLocal_309 = NULL;
	char* sLocal_310 = NULL;
	char* sLocal_311 = NULL;
	int iLocal_312 = 0;
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	int iLocal_320 = 0;
	int iLocal_321 = 0;
	int iLocal_322 = 0;
	int iLocal_323 = 0;
	int iLocal_324 = 0;
	int iLocal_325 = 0;
	float fLocal_326 = 0f;
	float fLocal_327 = 0f;
	int iLocal_328 = 0;
	int iLocal_329 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
#endregion

void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_15 = 1;
	iLocal_44 = 1;
	sLocal_45 = "X";
	fLocal_67 = 0f;
	fLocal_68 = 0f;
	fLocal_69 = 0f;
	iLocal_78 = 1;
	sLocal_302 = "Script_Mini_Game_Bathing_Regular";
	sLocal_303 = "Script_Mini_Game_Bathing_Deluxe";
	sLocal_304 = "MINI_GAMES@BATHING@REGULAR@ARTHUR";
	sLocal_305 = "CLIPSET@MINI_GAMES@BATHING@REGULAR@ARTHUR";
	sLocal_306 = "MINI_GAMES@BATHING@REGULAR@RAG";
	sLocal_307 = "CLIPSET@MINI_GAMES@BATHING@REGULAR@RAG";
	sLocal_308 = "MINI_GAMES@BATHING@DELUXE@ARTHUR";
	sLocal_309 = "CLIPSET@MINI_GAMES@BATHING@DELUXE@ARTHUR";
	sLocal_310 = "MINI_GAMES@BATHING@DELUXE@MAID";
	sLocal_311 = "CLIPSET@MINI_GAMES@BATHING@DELUXE@MAID";
	iLocal_312 = 1018603920;
	iLocal_313 = 1583018006;
	iLocal_314 = joaat("p_cs_rag02x");
	iLocal_315 = 4;
	iLocal_325 = 23;
	fLocal_326 = 4f;
	fLocal_327 = 4f;
	Local_82 = -1;
	func_1(Global_35);
	if (vScriptParam_0.z != -1)
	{
	}
	else
	{
		Local_82.f_6 = func_2();
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_3(&Local_82);
	}
	Local_82.f_6 = func_2();
	if (!func_4(&Local_82))
	{
		func_3(&Local_82);
	}
	iLocal_21 = 0;
	while (!func_5(&Local_82))
	{
		func_6(&Local_82);
		func_7();
		BUILTIN::WAIT(0);
	}
	func_3(&Local_82);
}

void func_1(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = Global_35;
	}
	func_8();
	Global_1905942 = Global_40.f_7729;
	if (func_9(32768))
	{
		func_10(&(Global_1946804->f_1735.f_120));
		func_11();
	}
	if (Global_40.f_7729 <= -1)
	{
		Global_1905942 = 0;
		func_12(iParam0, &Global_1905942, &(Global_1946804->f_1735), 0, Global_1946804->f_1497, 0);
	}
	else if (Global_40.f_7729 <= 5)
	{
		func_12(iParam0, &Global_1905942, &(Global_1946804->f_1735), 0, Global_1946804->f_1497, 0);
	}
	else
	{
		func_12(iParam0, &Global_1905942, &(Global_1946804->f_1735), 0, 0, 0);
	}
}

int func_2()
{
	return Global_1894899->f_2;
}

void func_3(var uParam0)
{
	PED::SET_PED_CAN_LEG_IK(Global_35, true);
	PED::SET_PED_LEG_IK_MODE(Global_35, 2);
	if (iLocal_14 && ENTITY::GET_ENTITY_COLLISION_DISABLED(Global_35))
	{
		ENTITY::SET_ENTITY_COLLISION(Global_35, true, false);
		ENTITY::SET_ENTITY_DYNAMIC(Global_35, true);
	}
	if (iLocal_66 == 0)
	{
	}
	if (INTERIOR::IS_VALID_INTERIOR(iLocal_65))
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_65);
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_5))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_5));
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_41))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_41));
	}
	if (iLocal_80)
	{
		STREAMING::_0x57A197AD83F66BBF(sLocal_303);
		iLocal_80 = 0;
	}
	if (iLocal_79)
	{
		STREAMING::_0x57A197AD83F66BBF(sLocal_302);
		iLocal_79 = 0;
	}
	func_13();
	func_14("BATH_GOTO_BATH", 1);
	Global_1914319->f_18941.f_17 = 0;
	if (STREAMING::DOES_ANIM_DICT_EXIST(sLocal_308))
	{
		STREAMING::REMOVE_ANIM_DICT(sLocal_308);
	}
	if (STREAMING::DOES_ANIM_DICT_EXIST(sLocal_310))
	{
		STREAMING::REMOVE_ANIM_DICT(sLocal_310);
	}
	if (STREAMING::DOES_ANIM_DICT_EXIST(sLocal_304))
	{
		STREAMING::REMOVE_ANIM_DICT(sLocal_304);
	}
	if (STREAMING::DOES_ANIM_DICT_EXIST(sLocal_306))
	{
		STREAMING::REMOVE_ANIM_DICT(sLocal_306);
	}
	if (STREAMING::HAS_CLIP_SET_LOADED(sLocal_309))
	{
		STREAMING::REMOVE_CLIP_SET(sLocal_309);
	}
	if (STREAMING::HAS_CLIP_SET_LOADED(sLocal_311))
	{
		STREAMING::REMOVE_CLIP_SET(sLocal_311);
	}
	if (STREAMING::HAS_CLIP_SET_LOADED(sLocal_305))
	{
		STREAMING::REMOVE_CLIP_SET(sLocal_305);
	}
	if (STREAMING::HAS_CLIP_SET_LOADED(sLocal_307))
	{
		STREAMING::REMOVE_CLIP_SET(sLocal_307);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
	{
		OBJECT::DELETE_OBJECT(&iLocal_62);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_64))
	{
		OBJECT::DELETE_OBJECT(&iLocal_64);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_63))
	{
		OBJECT::DELETE_OBJECT(&iLocal_63);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_135))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_135, true);
		PED::DELETE_PED(&(uParam0->f_135));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_144))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_144, true);
		PED::DELETE_PED(&(uParam0->f_144));
	}
	if (PED::_0x5C16855277819BBF() > 0)
	{
		PED::_0x7D4E70A67A651C71(PED::_0x5C16855277819BBF());
	}
	func_15(uParam0->f_13);
	func_15(uParam0->f_14);
	func_16(uParam0);
	STREAMING::REMOVE_PTFX_ASSET();
	Global_1395601->f_2 = 0;
	Global_1914319->f_18941.f_15 = 0;
	if (!func_17() && !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
	}
	if (iLocal_60 && iLocal_61 == 0)
	{
		ENTITY::SET_ENTITY_INVINCIBLE(Global_35, false);
		func_18(Global_35, 1);
		func_19(0);
		AUDIO::TRIGGER_MUSIC_EVENT("MG_BATHING_STOP");
		INVENTORY::_0xE36D4A38D28D9CFB(0);
		INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	}
	if (iLocal_81 && func_20(&Global_1935630, 2))
	{
		func_21(Global_1935630, 2);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_4(var uParam0)
{
	uParam0->f_1 = -972966383;
	uParam0->f_2 = -304640465; /* GXTEntry: "Bath House" */
	uParam0->f_6 = func_2();
	func_22(uParam0);
	return 1;
}

int func_5(var uParam0)
{
	uParam0->f_130++;
	if (IntToFloat(uParam0->f_130) < 10f)
	{
		return 0;
	}
	if (uParam0->f_112 == 4)
	{
		if (func_23(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			return 1;
		}
		if (INVENTORY::_0x7C7E4AB748EA3B07())
		{
			return 1;
		}
	}
	uParam0->f_130 = 0;
	if (uParam0->f_17)
	{
		return 1;
	}
	if (func_2() != uParam0->f_6 || uParam0->f_6 == -1)
	{
		return 1;
	}
	return 0;
}

void func_6(var uParam0)
{
	bool bVar0;
	var uVar1;
	float fVar2;

	if (iLocal_23)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_46) > 3000)
		{
			func_24(uParam0, "SCRUB_RESPONSE", 0);
			iLocal_23 = 0;
		}
	}
	if (iLocal_27)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_47) > 3000)
		{
			func_24(uParam0, "DECLINE_SPECIAL_BATH", 1);
			iLocal_27 = 0;
		}
	}
	bVar0 = false;
	if (func_2() == 92)
	{
		FIRE::STOP_FIRE_IN_RANGE(uParam0->f_60, 5f);
	}
	if (uParam0->f_112 > 7)
	{
		CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
		func_25(uParam0->f_14, 1);
		if (PED::IS_PED_INJURED(Global_35) || PED::IS_PED_DEAD_OR_DYING(Global_35, true))
		{
			func_18(Global_35, 1);
		}
		PED::SET_PED_CAN_LEG_IK(Global_35, false);
		PED::SET_PED_LEG_IK_MODE(Global_35, 0);
		FIRE::STOP_FIRE_IN_RANGE(uParam0->f_60, 10f);
		CAM::_0x8370D34BD2E60B73();
		PAD::DISABLE_CONTROL_ACTION(0, -2131587435, false);
		CAM::_0x3C8F74E8FE751614();
		func_26();
		PAD::DISABLE_CONTROL_ACTION(0, -1722177808, false);
	}
	if (uParam0->f_15 == 1)
	{
		if (uParam0->f_112 == 14 || uParam0->f_112 == 16)
		{
			func_27(uParam0);
		}
		else
		{
			if (func_28(iLocal_16))
			{
				func_29(&iLocal_16, 1, 1);
			}
			if (func_28(iLocal_17))
			{
				func_29(&iLocal_17, 1, 1);
			}
		}
	}
	switch (uParam0->f_112)
	{
		case 0:
			func_30(uParam0, uParam0->f_119, 1);
			func_31(uParam0, 1);
			uParam0->f_19 = 0;
			uParam0->f_112 = 1;
			break;
		case 1:
			func_33(Global_35, func_32(iLocal_325));
			func_34(uParam0, 0);
			if (uParam0->f_19 && !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				uParam0->f_19 = 0;
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
			}
			if (uParam0->f_6 == 115)
			{
				func_30(uParam0, uParam0->f_119, 0);
			}
			uParam0->f_3 = 1;
			PED::_0xED9582B3DA8F02B4(2);
			StringCopy(&Local_269, "bath_orbit_cam", 64);
			StringCopy(&(Local_269.f_8), "BATH_ORBIT_REQUEST", 64);
			CAM::_0x6A4D224FC7643941(&Local_269);
			uParam0->f_31 = 0;
			uParam0->f_30 = 0;
			uParam0->f_32 = 0;
			uParam0->f_113 = 0;
			uParam0->f_115 = 0;
			uParam0->f_33 = 0;
			if (iLocal_78)
			{
				uParam0->f_36 = 0;
				uParam0->f_37 = 0;
			}
			func_35(uParam0);
			iLocal_65 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_60);
			if (INTERIOR::IS_VALID_INTERIOR(iLocal_65))
			{
				if (uParam0->f_6 == 38)
				{
					iLocal_66 = GRAPHICS::_0x5D1C5D8E62E8EE1C(iLocal_65);
					if (iLocal_66 == 0)
					{
					}
					else if (!GRAPHICS::_0x113857D66A9CABE6(iLocal_66))
					{
						GRAPHICS::_0xBFCB17895BB99E4E(iLocal_66, true);
					}
				}
				INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_65);
			}
			func_36(&(uParam0->f_131), 1);
			uParam0->f_112 = 3;
			break;
		case 2:
			if (!func_37(uParam0, &uVar1))
			{
				if (uParam0->f_6 == 115)
				{
					func_30(uParam0, uParam0->f_119, 0);
				}
				func_38(uParam0, uParam0->f_10, 0);
				func_36(&(uParam0->f_131), 1);
				uParam0->f_112 = 3;
			}
			break;
		case 3:
			if (func_37(uParam0, &uVar1))
			{
				func_30(uParam0, uParam0->f_119, 1);
				func_34(uParam0, 0);
				func_39();
				uParam0->f_112 = 2;
			}
			if (func_40(&(uParam0->f_131)) && func_41(&(uParam0->f_131)) > 15f)
			{
				uParam0->f_17 = 1;
				func_42(&(uParam0->f_131));
			}
			else
			{
				if ((func_43() && !PED::_0xA911EE21EDF69DAF(Global_35)) && uParam0->f_112 == 3)
				{
					if (func_44(Global_1914319->f_16855.f_1, 262144))
					{
						func_45(Global_1914319->f_16855.f_1, 262144);
					}
					else
					{
						func_46(Global_1914319->f_18941.f_13, 0, 0, 1, 1);
						func_47(Global_1914319->f_16855, Global_1914319->f_16855.f_1, 470467759, 1, Global_1914319->f_18941.f_13);
					}
					Global_1914319->f_18941.f_16 = 1;
					func_48(2);
					func_42(&(uParam0->f_131));
					func_38(uParam0, uParam0->f_10, 1);
					uParam0->f_112 = 4;
				}
				Jump @6168; //curOff = 1022
				if (func_37(uParam0, &uVar1))
				{
					func_30(uParam0, uParam0->f_119, 1);
					func_34(uParam0, 0);
					func_39();
					uParam0->f_112 = 2;
				}
				if ((((func_49(uParam0, 0) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_14, true, 0)) && func_43()) && uParam0->f_112 == 4) && !PED::_0xA911EE21EDF69DAF(Global_35))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(Global_35, true);
					iLocal_62 = OBJECT::CREATE_OBJECT(iLocal_312, uParam0->f_60, uParam0->f_60.f_1, (uParam0->f_60.f_2 - 8f), true, true, false, false, true);
					iLocal_63 = OBJECT::CREATE_OBJECT(iLocal_313, uParam0->f_60, (uParam0->f_60.f_1 + 1f), (uParam0->f_60.f_2 - 5f), true, true, false, false, true);
					iLocal_64 = OBJECT::CREATE_OBJECT(iLocal_314, uParam0->f_60, (uParam0->f_60.f_1 + 0.2f), (uParam0->f_60.f_2 + 2f), true, true, false, false, true);
					StringCopy(&(uParam0->f_96), "s_regular_intro", 32);
					INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
					INVENTORY::_0xE36D4A38D28D9CFB(1);
					Global_1914319->f_18941.f_17 = 1;
					Global_1935183->f_26 = 1;
					func_50(-1, 0, 0, 0, 0);
					iLocal_300 = 1;
					uParam0->f_112 = 5;
				}
				Jump @6168; //curOff = 1301
				if (iLocal_300 == 3)
				{
					iLocal_300 = 6;
					if (func_51("BATH_GOTO_BATH", 1))
					{
						func_14("BATH_GOTO_BATH", 1);
					}
					func_39();
					WEAPON::REMOVE_ALL_PED_WEAPONS(Global_35, true, true);
					if (func_52(Global_35, 0))
					{
						if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0, 0);
						}
						MAP::DISPLAY_RADAR(false);
						if (func_52(Global_35, 0))
						{
							TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
						}
					}
					func_33(Global_35, func_32(iLocal_325));
					STREAMING::REQUEST_ANIM_DICT(sLocal_304);
					STREAMING::REQUEST_ANIM_DICT(sLocal_306);
					STREAMING::REQUEST_CLIP_SET(sLocal_305);
					STREAMING::REQUEST_CLIP_SET(sLocal_307);
					STREAMING::_0x2B6529C54D29037A(sLocal_302);
					STREAMING::_0x2B6529C54D29037A(sLocal_303);
					STREAMING::REQUEST_ANIM_DICT(sLocal_308);
					STREAMING::REQUEST_ANIM_DICT(sLocal_310);
					STREAMING::REQUEST_CLIP_SET(sLocal_309);
					STREAMING::REQUEST_CLIP_SET(sLocal_311);
					uParam0->f_38 = func_53(1203988035, -915411861, 1, 0, 0);
					func_34(uParam0, 0);
					func_54(uParam0);
					func_48(8);
					uParam0->f_112 = 6;
				}
				Jump @6168; //curOff = 1553
				if ((((STREAMING::_0x2C04D89A0FB4E244(sLocal_302) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_304)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_306)) && STREAMING::HAS_CLIP_SET_LOADED(sLocal_305)) && STREAMING::HAS_CLIP_SET_LOADED(sLocal_307))
				{
					uParam0->f_112 = 7;
				}
				Jump @6168; //curOff = 1619
				if (iLocal_300 == 8)
				{
					func_55(uParam0);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_63))
					{
					}
					Local_235.f_1 = -455129387; /* GXTEntry: "_" */
					Local_235 = 931646849;
					Local_235.f_30 = "BATHING";
					TASK::TASK_MOVE_NETWORK_BY_NAME_WITH_INIT_PARAMS(Global_35, sLocal_302, &Local_235, 1f, 0, 0, 0);
					iLocal_58 = MISC::GET_GAME_TIMER();
					Local_235.f_1 = -455129387; /* GXTEntry: "_" */
					Local_235 = 64669404;
					Local_235.f_30 = "BATHING";
					TASK::TASK_MOVE_NETWORK_ADVANCED_BY_NAME_WITH_INIT_PARAMS(iLocal_64, sLocal_302, &Local_235, uParam0->f_60, 0f, 0f, uParam0->f_63, 2, 3f, 0, 0, 0, 0);
					PED::_0x2208438012482A1A(Global_35, false, false);
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_64, 1);
					ENTITY::FREEZE_ENTITY_POSITION(Global_35, true);
					iLocal_14 = 1;
					ENTITY::SET_ENTITY_COLLISION(Global_35, false, false);
					ENTITY::SET_ENTITY_DYNAMIC(Global_35, false);
					if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
					}
					iLocal_79 = 1;
					fLocal_67 = 0f;
					PED::_0x55546004A244302A(Global_35, 1);
					func_56(16, -100f);
					func_36(&uLocal_70, 1);
					uParam0->f_112 = 14;
				}
				Jump @6168; //curOff = 1849
				if (((((iLocal_301 == 8 && STREAMING::_0x2C04D89A0FB4E244(sLocal_303)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_308)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_310)) && STREAMING::HAS_CLIP_SET_LOADED(sLocal_309)) && STREAMING::HAS_CLIP_SET_LOADED(sLocal_311))
				{
					func_57(uParam0);
					ENTITY::FREEZE_ENTITY_POSITION(Global_35, true);
					iLocal_14 = 1;
					ENTITY::SET_ENTITY_COLLISION(Global_35, false, false);
					ENTITY::SET_ENTITY_DYNAMIC(Global_35, false);
					iLocal_80 = 1;
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_144, true);
					ENTITY::SET_ENTITY_COLLISION(uParam0->f_144, false, false);
					ENTITY::SET_ENTITY_DYNAMIC(uParam0->f_144, false);
					Local_235.f_1 = -455129387; /* GXTEntry: "_" */
					Local_235 = -651856710;
					TASK::TASK_MOVE_NETWORK_BY_NAME_WITH_INIT_PARAMS(Global_35, sLocal_303, &Local_235, 1f, 0, 0, 0);
					iLocal_58 = MISC::GET_GAME_TIMER();
					Local_235.f_1 = -455129387; /* GXTEntry: "_" */
					Local_235 = -1442829246;
					TASK::TASK_MOVE_NETWORK_BY_NAME_WITH_INIT_PARAMS(uParam0->f_144, sLocal_303, &Local_235, 1f, 0, 0, 0);
					Local_235.f_1 = -455129387; /* GXTEntry: "_" */
					Local_235 = 771395316;
					PED::_0x2208438012482A1A(Global_35, false, false);
					PED::_0x2208438012482A1A(uParam0->f_144, false, false);
					fLocal_67 = 0f;
					func_58(uParam0);
					func_36(&uLocal_70, 1);
					uParam0->f_112 = 14;
				}
				Jump @6168; //curOff = 2114
				func_58(uParam0);
				if (func_49(uParam0, 1))
				{
					if (uParam0->f_116 == 0)
					{
						StringCopy(&(uParam0->f_104), "s_deluxe_intro", 32);
						iLocal_301 = 1;
						uParam0->f_112 = 11;
					}
				}
				Jump @6168; //curOff = 2161
				if (iLocal_301 == 5)
				{
					if (iLocal_53)
					{
						if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(uParam0->f_144) && (MISC::GET_GAME_TIMER() - iLocal_47) > 3000)
						{
							if (func_59(&(uParam0->f_24), "BUY_BATH_SPL", -155487368, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), uParam0->f_38))
							{
								uParam0->f_15 = 1;
								func_46(uParam0->f_38, 0, 0, 1, 1);
								func_60(Global_1914319->f_16855, Global_1914319->f_16855.f_1, 1203988035, 1, uParam0->f_38);
								func_31(uParam0, 1);
								iLocal_301 = 6;
								uParam0->f_112 = 8;
								func_61(uParam0, "PLAYER_ACCEPTS_SPECIAL_BATH");
								iLocal_26 = 1;
								iLocal_47 = MISC::GET_GAME_TIMER();
							}
							else if (func_62(&(uParam0->f_23), "GREET_NEG", 814057702, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 0, 0, 0, 0))
							{
								func_31(uParam0, 1);
								ANIMSCENE::ABORT_ANIM_SCENE(uParam0->f_69, false);
								ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_69);
								iLocal_301 = 8;
								uParam0->f_112 = 7;
								func_61(uParam0, "PLAYER_DECLINES_SPECIAL_BATH");
								iLocal_27 = 1;
								iLocal_47 = MISC::GET_GAME_TIMER();
							}
							else
							{
								Jump @2488; //curOff = 2412
								uParam0->f_15 = 1;
								func_46(uParam0->f_38, 0, 0, 1, 1);
								func_60(Global_1914319->f_16855, Global_1914319->f_16855.f_1, 1203988035, 1, uParam0->f_38);
								func_31(uParam0, 1);
								iLocal_301 = 6;
								uParam0->f_112 = 8;
								iLocal_47 = MISC::GET_GAME_TIMER();
								Jump @6168; //curOff = 2485
								Jump @6168; //curOff = 2488
								ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_69);
								if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_144))
								{
									PED::DELETE_PED(&(uParam0->f_144));
								}
								uParam0->f_112 = 14;
								Jump @6168; //curOff = 2524
								if (uParam0->f_116 == 0)
								{
									if (func_62(&(uParam0->f_28), "BATH_EXIT", 814057702, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 0, 0, 0, 0))
									{
										uParam0->f_116 = 1;
										func_31(uParam0, 1);
									}
								}
								if (((iLocal_323 == 1 && iLocal_324 == 1) && iLocal_321 == 1) && iLocal_322 == 1)
								{
									if (iLocal_77 == 0)
									{
										func_63(100f);
										iLocal_77 = 1;
									}
									if (iLocal_54 == 0)
									{
										iLocal_55 = MISC::GET_GAME_TIMER();
										iLocal_54 = 1;
									}
									else if ((MISC::GET_GAME_TIMER() - iLocal_55) > 15000)
									{
										if (uParam0->f_116 == 0)
										{
											uParam0->f_116 = 1;
											func_31(uParam0, 1);
										}
									}
								}
								func_58(uParam0);
								if (uParam0->f_116 == 0)
								{
									if (func_64(uParam0, "Bathing", 1) || func_64(uParam0, "Intro", 1))
									{
										if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
										{
											PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
										}
										if (iLocal_57 == 1)
										{
											iLocal_57 = 0;
											if (uParam0->f_32 == 0)
											{
												func_65(uParam0->f_25, 1, 1);
											}
											if (uParam0->f_31 == 0)
											{
												func_65(uParam0->f_27, 1, 1);
											}
											if (uParam0->f_30 == 0)
											{
												func_65(uParam0->f_26, 1, 1);
											}
											if (iLocal_53 == 0)
											{
												if (uParam0->f_15 == 0)
												{
													func_65(uParam0->f_24, 1, 1);
												}
											}
										}
										if (uParam0->f_15 == 0)
										{
											if (func_62(&(uParam0->f_25), "BATH_SCRUBHD", -719620017, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 0, uParam0->f_32, 0, 0))
											{
												func_66(uParam0, 1);
												StringCopy(&(uParam0->f_20), "BATH_SCRUBHD", 24);
												bVar0 = true;
											}
											if (uParam0->f_36 >= 1)
											{
												StringCopy(&(uParam0->f_20), "BATH_ARMLFT", 24);
											}
											else
											{
												StringCopy(&(uParam0->f_20), "BATH_ARMRHT", 24);
											}
											if (func_62(&(uParam0->f_27), &(uParam0->f_20), -473983589, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 0, uParam0->f_31, 0, 0))
											{
												func_66(uParam0, 2);
												bVar0 = true;
											}
											if (uParam0->f_37 >= 1)
											{
												StringCopy(&(uParam0->f_20), "BATH_LEGRHT", 24);
											}
											else
											{
												StringCopy(&(uParam0->f_20), "BATH_LEGLFT", 24);
											}
											if (func_62(&(uParam0->f_26), &(uParam0->f_20), 1367437629, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 0, uParam0->f_30, 0, 0))
											{
												func_66(uParam0, 3);
												bVar0 = true;
											}
										}
										else
										{
											if (iLocal_323 == 0 || iLocal_324 == 0)
											{
												if (iLocal_323 == 0)
												{
													StringCopy(&(uParam0->f_20), "BATH_ARMLFT", 24);
												}
												else
												{
													StringCopy(&(uParam0->f_20), "BATH_ARMRHT", 24);
												}
												if (func_62(&(uParam0->f_27), &(uParam0->f_20), -473983589, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 0, uParam0->f_31, 1, 0))
												{
													func_66(uParam0, 2);
													bVar0 = true;
												}
											}
											if (iLocal_321 == 0 || iLocal_322 == 0)
											{
												if (iLocal_321 == 0)
												{
													StringCopy(&(uParam0->f_20), "BATH_LEGLFT", 24);
												}
												else
												{
													StringCopy(&(uParam0->f_20), "BATH_LEGRHT", 24);
												}
												if (func_62(&(uParam0->f_26), &(uParam0->f_20), 1367437629, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 0, uParam0->f_30, 1, 0))
												{
													func_66(uParam0, 3);
													bVar0 = true;
												}
											}
										}
										if (iLocal_53 == 0)
										{
											if (uParam0->f_15 == 0)
											{
												if (func_59(&(uParam0->f_24), "BUY_BATH_DLX", -393875690, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), uParam0->f_38) || bLocal_76 == 1)
												{
													if (bLocal_76)
													{
													}
													uParam0->f_112 = 10;
													func_31(uParam0, 1);
												}
											}
										}
										if (bVar0)
										{
											if (func_40(&uLocal_73))
											{
												func_42(&uLocal_73);
											}
											func_31(uParam0, 1);
											fLocal_69 = 0f;
											if (uParam0->f_15)
											{
												uParam0->f_112 = 16;
												iLocal_315 = 4;
												iLocal_316 = 0;
												iLocal_320 = 0;
											}
											else
											{
												if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
												{
													PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0, 0);
												}
												uParam0->f_112 = 17;
											}
										}
										else
										{
											Jump @3650; //curOff = 3417
											iLocal_57 = 1;
											if (uParam0->f_15 == 0)
											{
												if (func_62(&(uParam0->f_25), "BATH_SCRUBHD", -719620017, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 0, uParam0->f_32, 0, 1))
												{
												}
												if (uParam0->f_36 >= 1)
												{
													StringCopy(&(uParam0->f_20), "BATH_ARMLFT", 24);
												}
												else
												{
													StringCopy(&(uParam0->f_20), "BATH_ARMRHT", 24);
												}
												if (func_62(&(uParam0->f_27), &(uParam0->f_20), -473983589, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 0, uParam0->f_31, 0, 1))
												{
												}
												if (uParam0->f_37 >= 1)
												{
													StringCopy(&(uParam0->f_20), "BATH_LEGRHT", 24);
												}
												else
												{
													StringCopy(&(uParam0->f_20), "BATH_LEGLFT", 24);
												}
												if (func_62(&(uParam0->f_26), &(uParam0->f_20), 1367437629, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 0, uParam0->f_30, 0, 1))
												{
												}
												if (iLocal_53 == 0)
												{
													if (func_59(&(uParam0->f_24), "BUY_BATH_DLX", -393875690, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), uParam0->f_38))
													{
													}
													func_65(uParam0->f_24, 0, 1);
												}
											}
											Jump @6168; //curOff = 3650
											if (iLocal_321 == 0)
											{
												if (MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(Global_35), "Scrub_Left_Leg"))
												{
													iLocal_321 = 1;
												}
											}
											if (iLocal_322 == 0)
											{
												if (MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(Global_35), "Scrub_Right_Leg"))
												{
													iLocal_322 = 1;
												}
											}
											if (iLocal_323 == 0)
											{
												if (MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(Global_35), "Scrub_Left_Arm"))
												{
													iLocal_323 = 1;
												}
											}
											if (iLocal_324 == 0)
											{
												if (MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(Global_35), "Scrub_Right_Arm"))
												{
													iLocal_324 = 1;
												}
											}
											if (((iLocal_323 == 1 && iLocal_324 == 1) && iLocal_321 == 1) && iLocal_322 == 1)
											{
												if (iLocal_77 == 0)
												{
													func_63(100f);
													iLocal_77 = 1;
												}
											}
											if (uParam0->f_116 == 0)
											{
												if (func_62(&(uParam0->f_28), "BATH_EXIT", 814057702, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 0, 0, 0, 0))
												{
													uParam0->f_116 = 1;
													func_31(uParam0, 1);
												}
											}
											if (!func_40(&uLocal_73) && iLocal_315 == 4)
											{
												func_36(&uLocal_73, 1);
												if (iLocal_15 == 0)
												{
													func_61(uParam0, "SCRUB_DIRECTIONS");
													iLocal_23 = 1;
													iLocal_46 = MISC::GET_GAME_TIMER();
												}
											}
											fVar2 = (func_41(&uLocal_73) / 15f);
											if (fVar2 > 1f)
											{
												fVar2 = 1f;
											}
											func_67(uParam0, fVar2);
											if (TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(Global_35))
											{
												if (iLocal_315 == 4)
												{
													if (!func_40(&uLocal_317))
													{
														func_36(&uLocal_317, 1);
													}
													if (iLocal_320 == 0)
													{
														if (func_68(&uLocal_317) > 2000)
														{
															if (((MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(Global_35), "Scrub_Left_Arm") || MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(Global_35), "Scrub_Right_Arm")) || MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(Global_35), "Scrub_Left_Leg")) || MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(Global_35), "Scrub_Right_Leg"))
															{
																if (!iLocal_315 == 2)
																{
																	if (iLocal_323 == 0 || iLocal_324 == 0)
																	{
																		if (iLocal_323 == 0)
																		{
																			StringCopy(&(uParam0->f_20), "BATH_ARMLFT", 24);
																		}
																		else
																		{
																			StringCopy(&(uParam0->f_20), "BATH_ARMRHT", 24);
																		}
																		if (func_62(&(uParam0->f_27), &(uParam0->f_20), -473983589, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 0, uParam0->f_31, 1, 0))
																		{
																			iLocal_316 = 1;
																			func_42(&uLocal_317);
																			func_29(&(uParam0->f_27), 1, 1);
																			func_29(&(uParam0->f_26), 1, 1);
																			func_31(uParam0, 1);
																			TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Global_35, "Scrub_Idle");
																			TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(uParam0->f_144, "Scrub_Idle");
																			iLocal_315 = 2;
																			if (!func_40(&uLocal_317))
																			{
																				func_36(&uLocal_317, 1);
																			}
																			if (iLocal_15 == 0)
																			{
																				func_61(uParam0, "SCRUB_DIRECTIONS");
																				iLocal_23 = 1;
																				iLocal_46 = MISC::GET_GAME_TIMER();
																			}
																		}
																	}
																}
																if (!iLocal_315 == 2)
																{
																	if (iLocal_321 == 0 || iLocal_322 == 0)
																	{
																		if (iLocal_321 == 0)
																		{
																			StringCopy(&(uParam0->f_20), "BATH_LEGLFT", 24);
																		}
																		else
																		{
																			StringCopy(&(uParam0->f_20), "BATH_LEGRHT", 24);
																		}
																		if (func_62(&(uParam0->f_26), &(uParam0->f_20), 1367437629, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 0, uParam0->f_30, 1, 0))
																		{
																			iLocal_316 = 2;
																			func_42(&uLocal_317);
																			func_29(&(uParam0->f_26), 1, 1);
																			func_29(&(uParam0->f_27), 1, 1);
																			func_31(uParam0, 1);
																			iLocal_316 = 2;
																			TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Global_35, "Scrub_Idle");
																			TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(uParam0->f_144, "Scrub_Idle");
																			iLocal_315 = 2;
																			if (!func_40(&uLocal_317))
																			{
																				func_36(&uLocal_317, 1);
																			}
																			if (iLocal_15 == 0)
																			{
																				func_61(uParam0, "SCRUB_DIRECTIONS");
																				iLocal_23 = 1;
																				iLocal_46 = MISC::GET_GAME_TIMER();
																			}
																		}
																	}
																}
															}
														}
													}
													if (func_68(&uLocal_317) > 8000 || iLocal_320)
													{
														func_42(&uLocal_317);
														iLocal_316 = 0;
														fLocal_67 = 0f;
														func_42(&uLocal_73);
														func_66(uParam0, 5);
														func_31(uParam0, 1);
														uParam0->f_112 = 14;
													}
												}
												if (iLocal_315 == 2)
												{
													if (MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(Global_35), "Scrub_Idle"))
													{
														if (iLocal_316 != 0)
														{
															if (func_68(&uLocal_317) > 6000)
															{
																if (TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(Global_35))
																{
																	if (iLocal_316 == 1)
																	{
																		if (iLocal_323 == 0)
																		{
																			TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Global_35, "Scrub_Left_Arm");
																			TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(uParam0->f_144, "Scrub_Left_Arm");
																		}
																		else
																		{
																			TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Global_35, "Scrub_Right_Arm");
																			TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(uParam0->f_144, "Scrub_Right_Arm");
																		}
																	}
																	if (iLocal_316 == 2)
																	{
																		if (iLocal_321 == 0)
																		{
																			TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Global_35, "Scrub_Left_leg");
																			TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(uParam0->f_144, "Scrub_Left_Leg");
																		}
																		else
																		{
																			TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Global_35, "Scrub_Right_Leg");
																			TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(uParam0->f_144, "Scrub_Right_Leg");
																		}
																	}
																	func_42(&uLocal_317);
																	iLocal_315 = 3;
																}
															}
														}
													}
												}
												if (iLocal_315 == 3)
												{
													if (iLocal_316 == 2)
													{
														if (MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(Global_35), "Scrub_Left_Leg") || MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(Global_35), "Scrub_Right_Leg"))
														{
															iLocal_315 = 4;
														}
													}
													if (iLocal_316 == 1)
													{
														if (MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(Global_35), "Scrub_Left_Arm") || MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(Global_35), "Scrub_Right_Arm"))
														{
															iLocal_315 = 4;
														}
													}
												}
											}
											Jump @6168; //curOff = 4871
											if (uParam0->f_117 == 2)
											{
												switch (uParam0->f_115)
												{
													case 1:
														func_62(&(uParam0->f_29), "BATH_SCRUB", -719620017, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 1, 0, 0, 0);
														break;
													case 2:
														func_62(&(uParam0->f_29), "BATH_SCRUB", -473983589, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 1, 0, 0, 0);
														break;
													case 3:
														func_62(&(uParam0->f_29), "BATH_SCRUB", 1367437629, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 1, 0, 0, 0);
														break;
													default:
														func_62(&(uParam0->f_29), "BATH_SCRUB", -473983589, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 1, 0, 0, 0);
														break;
												}
												if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
												{
													PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
												}
												uParam0->f_34 = 1;
												uParam0->f_112 = 18;
											}
											Jump @6168; //curOff = 5080
											func_58(uParam0);
											if (uParam0->f_116 == 0)
											{
												if (func_69(uParam0))
												{
													if (fLocal_67 >= 1f || bLocal_76 == 1)
													{
														switch (uParam0->f_115)
														{
															case 1:
																uParam0->f_32 = 1;
																break;
															case 2:
																uParam0->f_36++;
																if (uParam0->f_36 >= 2)
																{
																	uParam0->f_31 = 1;
																}
																break;
															case 3:
																uParam0->f_37++;
																if (uParam0->f_37 >= 2)
																{
																	uParam0->f_30 = 1;
																}
																break;
														}
														if ((uParam0->f_32 && uParam0->f_31) && uParam0->f_30)
														{
															func_70("BATH_STAMINA_UP", 10000, 0, 0, 0, 1);
															func_71(200f, 0, 0, 1);
															func_72(-1);
															if (uParam0->f_15)
															{
																func_73(1203988035, 1);
															}
															else
															{
																func_73(470467759, 1);
															}
														}
														fLocal_67 = 0f;
														func_42(&uLocal_73);
														func_66(uParam0, 5);
														func_31(uParam0, 1);
														if (iLocal_78)
														{
															if (iLocal_53)
															{
																uParam0->f_112 = 10;
															}
															else
															{
																uParam0->f_112 = 14;
															}
															iLocal_78 = 0;
														}
														else
														{
															uParam0->f_112 = 14;
														}
													}
													else
													{
														Jump @6168; //curOff = 5362
														if (iLocal_301 == 4)
														{
															iLocal_301 = 6;
															uParam0->f_112 = 20;
														}
														Jump @6168; //curOff = 5382
														if ((uParam0->f_15 && iLocal_301 == 8) || uParam0->f_15 == 0)
														{
															func_74(uParam0);
															if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_144))
															{
																PED::DELETE_PED(&(uParam0->f_144));
															}
															PED::CLEAR_PED_ENV_DIRT(Global_35);
															if (uParam0->f_6 == 115)
															{
																StringCopy(&(uParam0->f_96), "Pbl_Regular_Outro", 32);
															}
															else
															{
																StringCopy(&(uParam0->f_96), "s_Regular_outro", 32);
															}
															iLocal_300 = 1;
															uParam0->f_112 = 22;
														}
														Jump @6168; //curOff = 5489
														if (iLocal_300 == 3)
														{
															iLocal_300 = 6;
															func_57(uParam0);
															uParam0->f_112 = 23;
														}
														Jump @6168; //curOff = 5515
														switch (uParam0->f_6)
														{
															case 38:
																fLocal_327 = 2.6f;
																break;
															default:
																fLocal_327 = 2.6f;
																break;
														}
														if (iLocal_61 == 0)
														{
															if (func_75() == 0)
															{
																func_76();
															}
															if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1347001366))
															{
																PED::CLEAR_PED_WETNESS(Global_35);
																func_19(0);
																func_13();
																ENTITY::SET_ENTITY_INVINCIBLE(Global_35, false);
																iLocal_61 = 1;
																if (ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(uParam0->f_68, "BOOTS", false)))
																{
																}
																if (func_77())
																{
																}
																func_18(Global_35, 1);
																func_78(0);
																PED::_0xE3144B932DFDFF65(Global_35, 0f, -1, 1, 1);
																PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Global_35, 10, "ALL");
																PED::CLEAR_PED_BLOOD_DAMAGE(Global_35);
																func_16(uParam0);
																AUDIO::TRIGGER_MUSIC_EVENT("MG_BATHING_STOP");
																INVENTORY::_0xE36D4A38D28D9CFB(0);
																INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
																if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_135))
																{
																	ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_68, "FEMALE", uParam0->f_135);
																	ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_135, true);
																	PED::DELETE_PED(&(uParam0->f_135));
																}
																if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_144))
																{
																	ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_144, true);
																	PED::DELETE_PED(&(uParam0->f_144));
																}
																uParam0->f_16 = 1;
																AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("BATHING");
																AUDIO::_0x531A78D6BF27014B("BATHING_Sounds");
															}
														}
														if (iLocal_300 == 8)
														{
															ENTITY::FREEZE_ENTITY_POSITION(Global_35, false);
															ENTITY::SET_ENTITY_COLLISION(Global_35, true, false);
															ENTITY::SET_ENTITY_DYNAMIC(Global_35, true);
															func_13();
															if (func_51("BATH_GOTO_BATH", 1))
															{
																func_14("BATH_GOTO_BATH", 1);
															}
															if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
															{
																PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
															}
															if (func_52(Global_35, 0))
															{
															}
															if (func_20(&Global_1935630, 2))
															{
																func_21(Global_1935630, 2);
																iLocal_81 = 0;
															}
															if (ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(uParam0->f_68, "BOOTS", false)))
															{
																ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_68, "BOOTS", iLocal_62);
															}
															if (ENTITY::DOES_ENTITY_EXIST(iLocal_64))
															{
																OBJECT::DELETE_OBJECT(&iLocal_64);
															}
															if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
															{
																ENTITY::SET_ENTITY_COORDS(iLocal_62, uParam0->f_60, uParam0->f_60.f_1, (uParam0->f_60.f_2 - 20f), true, false, true, true);
																OBJECT::_0xCAAF2BCCFEF37F77(iLocal_62, 80);
																ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_62);
															}
															if (ENTITY::DOES_ENTITY_EXIST(iLocal_63))
															{
																OBJECT::_0xCAAF2BCCFEF37F77(iLocal_63, 80);
																ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_63);
															}
															if (HUD::IS_RADAR_HIDDEN())
															{
																MAP::DISPLAY_RADAR(true);
															}
															if (!uParam0->f_6 == 38)
															{
																func_30(uParam0, uParam0->f_119, 1);
															}
															Global_1914319->f_18941.f_17 = 0;
															STREAMING::REMOVE_PTFX_ASSET();
															func_74(uParam0);
															func_57(uParam0);
															if (PED::_0x5C16855277819BBF() > 0)
															{
																PED::_0x7D4E70A67A651C71(PED::_0x5C16855277819BBF());
															}
															func_80(func_79(-2061916883), 1);
															func_81(0, -1);
															uParam0->f_17 = 1;
														}
													}
													func_82(uParam0);
													func_83(uParam0);
													func_84(uParam0);
													func_85(uParam0);
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
		}

void func_7()
{
	if (iLocal_21 != 99)
	{
		if (iLocal_21 == 0)
		{
			func_86();
		}
		if (iLocal_21 == 1)
		{
			func_87();
		}
		if (iLocal_21 == 2)
		{
			func_88();
		}
		if (iLocal_21 == 3)
		{
			iLocal_21 = 99;
		}
	}
}

void func_8()
{
	func_89(&(Global_1946804->f_1735));
}

bool func_9(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_10(var uParam0)
{
	*uParam0 = Global_1946804->f_2776;
	uParam0->f_1 = Global_1946804->f_2776.f_1;
	uParam0->f_8 = Global_1946804->f_2776.f_8;
	uParam0->f_2 = Global_1946804->f_2776.f_2;
	uParam0->f_3[0] = &Global_1946804->f_2776.f_3[0];
	uParam0->f_3[1] = &Global_1946804->f_2776.f_3[1];
	uParam0->f_3[2] = &Global_1946804->f_2776.f_3[2];
	uParam0->f_3[3] = &Global_1946804->f_2776.f_3[3];
	uParam0->f_9 = Global_1946804->f_2776.f_9;
	uParam0->f_10 = Global_1946804->f_2776.f_10;
	uParam0->f_11 = Global_1946804->f_2776.f_11;
	uParam0->f_12 = 0;
}

void func_11()
{
	func_90(&(Global_1946804->f_2776));
	func_91(32768);
	func_92(1108822547, 8, 6);
}

int func_12(int iParam0, int iParam1, var uParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = -1;
	if (iParam1 > -1 && iParam1 <= 5)
	{
		iVar0 = iParam1;
	}
	if (iParam4 != 0)
	{
		iVar1 = iParam4;
	}
	else
	{
		iVar1 = func_93(iParam1);
	}
	if (iVar0 == -1 && !func_95(iVar1, func_94()))
	{
		return 1;
	}
	if (uParam2->f_1 != 0 && func_96(uParam2, 1))
	{
		if (uParam2->f_1 == iVar1)
		{
			if (bParam3)
			{
				return func_97(iParam0, uParam2);
			}
			else
			{
				return 1;
			}
		}
		else if (uParam2->f_1 != iVar1)
		{
			func_89(uParam2);
		}
	}
	if (!func_96(uParam2, 1))
	{
		func_98(&(uParam2->f_1));
		if (!bParam5)
		{
			if (!func_99(&(uParam2->f_1), &uVar2, iVar1, iVar0, 1, 0))
			{
				return 1;
			}
		}
		uParam2->f_1 = iVar1;
		func_100(uParam2, 1);
	}
	if (!bParam3)
	{
		return 1;
	}
	return func_97(iParam0, uParam2);
}

void func_13()
{
	if (CAM::_0x927B810E43E99932(&Local_269))
	{
		CAM::_0x0A5A4F1979ABB40E(&Local_269);
	}
}

void func_14(char* sParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	Var0.f_1 = sParam0;
	iVar2 = _NAMESPACE71::_0x4E88A65968A55C78(&Var0, iParam1);
	if (func_101(iVar2))
	{
		_NAMESPACE71::_0x2F901291EF177B02(iVar2, 0);
	}
}

void func_15(int iParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		VOLUME::_0x43F867EF5C463A53(iParam0);
	}
}

void func_16(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(&(uParam0->f_120[iVar0])))
		{
			GRAPHICS::REMOVE_PARTICLE_FX(&(uParam0->f_120[iVar0]), false);
		}
		iVar0++;
	}
}

bool func_17()
{
	return Global_1898164->f_163;
}

void func_18(int iParam0, bool bParam1)
{
	func_102(&(Global_1946804->f_1735.f_120));
	func_103(iParam0, &(Global_1946804->f_1735), bParam1, 0, 1, 1);
}

void func_19(int iParam0)
{
	Global_1347477->f_118 = iParam0;
	Global_1347477->f_6 = iParam0;
}

bool func_20(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_21(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_22(var uParam0)
{
	switch (uParam0->f_6)
	{
		case 5:
			func_104(uParam0);
			break;
		case 76:
			func_105(uParam0);
			break;
		case 78:
			func_106(uParam0);
			break;
		case 26:
			func_107(uParam0);
			break;
		case 38:
			func_108(uParam0);
			break;
		case 92:
			func_109(uParam0);
			break;
		case 105:
			func_110(uParam0);
			break;
		case 115:
			func_111(uParam0);
			break;
		default:
			break;
	}
}

int func_23(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_112(bParam1, iParam2, iParam3);
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
		if ((iParam3 || Var0.f_10 > 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(iParam0) > 0)
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
			if (Var18.f_10 && (iParam3 || LAW::_0xDAEFDFDB2AEECE37(Var18, Var18.f_7) > 0))
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
			if (iParam3 || LAW::_0xE083BEDA81709891(iParam0) > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_24(var uParam0, char* sParam1, int iParam2)
{
	int iVar0;
	struct<7> Var1;

	switch (uParam0->f_6)
	{
		case 5:
			sLocal_3 = "1103_A_F_M_BathingLadies_01_WHITE_03";
			break;
		case 76:
			sLocal_3 = "1102_A_F_M_BathingLadies_01_WHITE_02";
			break;
		case 78:
			sLocal_3 = "1101_A_F_M_BathingLadies_01_WHITE_01";
			break;
		case 26:
			sLocal_3 = "1101_A_F_M_BathingLadies_01_WHITE_01";
			break;
		case 38:
			sLocal_3 = "1101_A_F_M_BathingLadies_01_WHITE_01";
			break;
		case 92:
			sLocal_3 = "1104_U_F_M_VhtBathgirl_01";
			break;
		case 105:
			sLocal_3 = "1103_A_F_M_BathingLadies_01_WHITE_03";
			break;
		case 115:
			sLocal_3 = "1102_A_F_M_BathingLadies_01_WHITE_02";
			break;
		default:
			sLocal_3 = "1102_A_F_M_BathingLadies_01_WHITE_02";
			break;
	}
	if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(uParam0->f_144))
	{
	}
	else if (iParam2 == 0)
	{
		func_113(uParam0->f_144, sParam1, 1541280898, 0, 1, sLocal_3, 0, 1);
	}
	else
	{
		iVar0 = func_114(uParam0->f_119, 0, 0);
		Var1.f_5 = 1;
		Var1.f_6 = 1;
		Var1 = sParam1;
		Var1.f_1 = sLocal_3;
		Var1.f_3 = -417894478;
		AUDIO::_PLAY_AMBIENT_SPEECH_AT_COORDS(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), &Var1);
	}
}

void func_25(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	MISC::_0x2FCD528A397E5C88(iParam0, iVar0);
}

void func_26()
{
	iLocal_59 = MISC::GET_GAME_TIMER();
	if ((iLocal_59 - iLocal_58) < 2000 || func_115(Global_35, 76834332) == 0)
	{
		PAD::DISABLE_CONTROL_ACTION(0, -771458680, false);
		PAD::DISABLE_CONTROL_ACTION(0, -1450761377, false);
		PAD::DISABLE_CONTROL_ACTION(0, -1067115200, false);
		PAD::DISABLE_CONTROL_ACTION(0, -1898369514, false);
		PAD::DISABLE_CONTROL_ACTION(0, 150518893, false);
		PAD::DISABLE_CONTROL_ACTION(0, -1578429613, false);
		PAD::DISABLE_CONTROL_ACTION(0, -39308912, false);
		PAD::DISABLE_CONTROL_ACTION(0, 1301263553, false);
		PAD::DISABLE_CONTROL_ACTION(0, -1882188328, false);
		PAD::DISABLE_CONTROL_ACTION(0, -763919645, false);
		PAD::DISABLE_CONTROL_ACTION(0, 1885667965, false);
		PAD::DISABLE_CONTROL_ACTION(0, -1260100172, false);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 1287709438, false);
	PAD::DISABLE_CONTROL_ACTION(0, -209515122, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1404316431, false);
	PAD::DISABLE_CONTROL_ACTION(0, 2011525043, false);
	PAD::DISABLE_CONTROL_ACTION(0, 527275493, false);
	PAD::DISABLE_CONTROL_ACTION(0, -427942313, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1015723376, false);
	PAD::DISABLE_CONTROL_ACTION(0, -824104112, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1663574939, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2128655846, false);
	PAD::DISABLE_CONTROL_ACTION(0, 516589524, false);
	func_116(0);
}

void func_27(var uParam0)
{
	func_117(uParam0);
	if (iLocal_15 == 1)
	{
		if (iLocal_31 == 0)
		{
			if (iLocal_25 == 0)
			{
				func_24(uParam0, "CHAT_BATH_LEVEL1", 0);
				iLocal_25 = 1;
				iLocal_50 = MISC::GET_GAME_TIMER();
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_50) > 12000)
			{
				func_24(uParam0, "CHAT_BATH_LEVEL1", 0);
				if (func_28(iLocal_16))
				{
					func_29(&iLocal_16, 1, 1);
				}
				iLocal_31 = 1;
			}
		}
		if (iLocal_32 == 0)
		{
			if (iLocal_31 == 1 && (MISC::GET_GAME_TIMER() - iLocal_50) > 10000)
			{
				if (!func_28(iLocal_17))
				{
					iLocal_17 = func_118("BATH_CHAT", -719620017, 2, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
					iLocal_33 = 1;
					iLocal_52 = MISC::GET_GAME_TIMER();
				}
				func_117(uParam0);
				iLocal_32 = 1;
			}
		}
		if (iLocal_31 == 0)
		{
			if (!func_28(iLocal_16))
			{
				iLocal_16 = func_118("BATH_NO_CHAT", -719620017, 2, 0, 0, 4, 570, 4000, 10, 1073741824, 1704213876, 0);
			}
			else
			{
				func_117(uParam0);
				if (func_119(iLocal_16, 1))
				{
					iLocal_15 = 0;
					func_29(&iLocal_16, 1, 1);
					if (func_28(iLocal_17))
					{
						func_29(&iLocal_17, 1, 1);
					}
					func_61(uParam0, "NO_TALK");
					iLocal_24 = 1;
					iLocal_49 = MISC::GET_GAME_TIMER();
				}
			}
		}
		if (iLocal_33 == 1)
		{
			func_120(uParam0);
		}
	}
	if (iLocal_24)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_49) > 3500)
		{
			func_24(uParam0, "NO_TALK_RESPONSE", 0);
			iLocal_24 = 0;
		}
	}
}

bool func_28(int iParam0)
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

void func_29(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 && !func_28(*iParam0))
	{
		*iParam0 = 0;
		return;
	}
	iVar0 = func_121(*iParam0);
	if (((*Global_1945938)[iVar0 /*18*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && iParam2)
	{
		*iParam0 = 0;
		return;
	}
	func_122(iVar0);
	*iParam0 = 0;
}

void func_30(var uParam0, int iParam1, bool bParam2)
{
	if (func_123(iParam1))
	{
		uParam0->f_119 = iParam1;
		if (bParam2)
		{
			if (func_23(PLAYER::PLAYER_ID(), 1, 0, 1) && uParam0->f_112 > 4)
			{
			}
			else if (!func_124(uParam0->f_119) && !func_125(uParam0->f_119))
			{
				func_126(uParam0->f_119, 1, 0f, 0, 0, 1f, 0, 0);
			}
		}
		else if (func_124(uParam0->f_119) && !func_125(uParam0->f_119))
		{
			func_126(uParam0->f_119, 0, 0f, 0, 0, 1f, 0, 0);
		}
	}
}

void func_31(var uParam0, bool bParam1)
{
	if (func_28(uParam0->f_24))
	{
		func_29(&(uParam0->f_24), 1, 1);
	}
	if (func_28(uParam0->f_25))
	{
		func_29(&(uParam0->f_25), 1, 1);
	}
	if (func_28(uParam0->f_26))
	{
		func_29(&(uParam0->f_26), 1, 1);
	}
	if (func_28(uParam0->f_27))
	{
		func_29(&(uParam0->f_27), 1, 1);
	}
	if (func_28(uParam0->f_29))
	{
		func_29(&(uParam0->f_29), 1, 1);
	}
	if (bParam1)
	{
		if (func_28(uParam0->f_23))
		{
			func_29(&(uParam0->f_23), 1, 1);
		}
		if (func_28(uParam0->f_28))
		{
			func_29(&(uParam0->f_28), 1, 1);
		}
	}
}

int func_32(int iParam0)
{
	switch (iParam0)
	{
		case 23:
			return -1817923036;
		default:
			break;
	}
	return -1496612359;
}

int func_33(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!func_127(iParam0, iParam1))
	{
		return 1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") && DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request_name");
		if (iVar0 == iParam1)
		{
			return 1;
		}
		else
		{
			func_128(iParam0);
		}
	}
	iVar1 = PED::_REQUEST_METAPED_OUTFIT(ENTITY::GET_ENTITY_MODEL(iParam0), iParam1);
	DECORATOR::DECOR_SET_INT(iParam0, "metaped_outfit_request", iVar1);
	DECORATOR::DECOR_SET_INT(iParam0, "metaped_outfit_request_name", iParam1);
	return 1;
}

void func_34(var uParam0, bool bParam1)
{
	if (MAP::DOES_BLIP_EXIST(uParam0->f_41))
	{
		if (bParam1)
		{
			MAP::_0x662D364ABF16DE2F(uParam0->f_41, 724623647);
		}
		else
		{
			MAP::_0xB059D7BD3D78C16F(uParam0->f_41, 724623647);
			MAP::REMOVE_BLIP(&(uParam0->f_41));
		}
	}
}

void func_35(var uParam0)
{
	STREAMING::REQUEST_MODEL(uParam0->f_135.f_8, false);
	STREAMING::REQUEST_MODEL(uParam0->f_144.f_8, false);
	STREAMING::REQUEST_MODEL(iLocal_312, false);
	STREAMING::REQUEST_MODEL(iLocal_313, false);
	STREAMING::REQUEST_MODEL(iLocal_314, false);
	STREAMING::REQUEST_PTFX_ASSET();
}

void func_36(var uParam0, int iParam1)
{
	if (iParam1 || !func_40(uParam0))
	{
		func_129(uParam0);
	}
}

int func_37(var uParam0, var uParam1)
{
	bool bVar0;

	*uParam1 = 1;
	if (func_130(242, 1, 1))
	{
		return 1;
	}
	if (Global_1395601->f_1)
	{
		return 1;
	}
	if (func_131(((*Global_1835011)[7 /*74*/])->f_1) == 3)
	{
		return 0;
	}
	if (func_20(&Global_1935630, 2097152))
	{
		*uParam1 = 1;
		return 1;
	}
	bVar0 = func_132();
	if (bVar0)
	{
		*uParam1 = 1;
		return 1;
	}
	if (func_133(4))
	{
		if (Global_1935630->f_24)
		{
			*uParam1 = 1;
			return 1;
		}
	}
	else if (PED::IS_PED_IN_COMBAT(Global_35, 0))
	{
		*uParam1 = 1;
		return 1;
	}
	if (INVENTORY::_0x7C7E4AB748EA3B07())
	{
		*uParam1 = 1;
		return 1;
	}
	if (func_23(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		*uParam1 = 1;
		return 1;
	}
	if (func_134(uParam0->f_6))
	{
		*uParam1 = 1;
		return 1;
	}
	if (PED::_0xA911EE21EDF69DAF(Global_35))
	{
		*uParam1 = 1;
		return 1;
	}
	if (PED::_0x50F124E6EF188B22(Global_35))
	{
		if (iLocal_22 == 0)
		{
			func_70("BATH_DRUNK", 10000, 0, 0, 0, 1);
			iLocal_22 = 1;
		}
		*uParam1 = 1;
		return 1;
	}
	if (PED::IS_PED_USING_ANY_SCENARIO(PLAYER::PLAYER_PED_ID()))
	{
		if (func_135(PLAYER::PLAYER_PED_ID(), 817658057) || func_135(PLAYER::PLAYER_PED_ID(), 1231068245))
		{
			*uParam1 = 1;
			return 1;
		}
	}
	return 0;
}

void func_38(var uParam0, vector3 vParam1, bool bParam4)
{
	if (func_136() == -1)
	{
		if (func_77() && uParam0->f_6 == 38)
		{
			if (MAP::DOES_BLIP_EXIST(uParam0->f_41))
			{
				MAP::REMOVE_BLIP(&(uParam0->f_41));
			}
			return;
		}
	}
	if (!MAP::DOES_BLIP_EXIST(uParam0->f_41))
	{
		uParam0->f_41 = MAP::_0x554D9D53F696D002(uParam0->f_1, vParam1);
		MAP::SET_BLIP_SPRITE(uParam0->f_41, uParam0->f_2, true);
		if (bParam4)
		{
			MAP::_0x662D364ABF16DE2F(uParam0->f_41, -401963276);
		}
	}
	else
	{
		MAP::_0xB059D7BD3D78C16F(uParam0->f_41, 724623647);
	}
}

void func_39()
{
	UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
}

bool func_40(var uParam0)
{
	return func_137(*uParam0, 1);
}

float func_41(var uParam0)
{
	if (!func_40(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_138(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_139() - uParam0->f_1);
}

void func_42(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_43()
{
	return ((STREAMING::HAS_MODEL_LOADED(iLocal_312) && STREAMING::HAS_MODEL_LOADED(iLocal_313)) && STREAMING::HAS_MODEL_LOADED(iLocal_314));
}

bool func_44(int iParam0, int iParam1)
{
	if (!func_140(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_15614[iParam0] && iParam1) != 0;
}

void func_45(int iParam0, int iParam1)
{
	if (!func_140(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (&Global_1914319->f_15614[iParam0] - (Global_1914319->f_15614[iParam0] && iParam1));
}

void func_46(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_141(iParam0);
	if (bParam3)
	{
		func_142(iParam0, sParam1, iParam2);
	}
}

int func_47(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_136() == 0)
	{
		return 1;
	}
	if (func_143(iParam2))
	{
		func_144(iParam1, iParam2, iParam3);
	}
	func_60(iParam0, iParam1, iParam2, iParam3, iParam4);
	return 1;
}

void func_48(int iParam0)
{
	func_145(&(Global_1395601->f_3), iParam0);
}

int func_49(var uParam0, bool bParam1)
{
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("BATHING"))
	{
		return 0;
	}
	if (!AUDIO::_0xD9130842D7226045("BATHING_Sounds", 0))
	{
		AUDIO::_0xD9130842D7226045("BATHING_Sounds", 0);
		return 0;
	}
	if (bParam1)
	{
		if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_144.f_8))
		{
			STREAMING::REQUEST_MODEL(uParam0->f_144.f_8, false);
			return 0;
		}
	}
	else if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_135.f_8))
	{
		STREAMING::REQUEST_MODEL(uParam0->f_135.f_8, false);
		return 0;
	}
	if (PED::_0x5C16855277819BBF() > 0)
	{
		if (bParam1)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_144))
			{
				uParam0->f_144 = func_146(uParam0->f_144.f_8, uParam0->f_144.f_1, uParam0->f_144.f_4, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0);
				return 0;
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_144))
			{
				PED::SET_PED_NAME_DEBUG(uParam0->f_144, "WASH_MAIDEN");
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_144, true);
				PED::SET_PED_CAN_LEG_IK(uParam0->f_144, false);
				PED::SET_PED_LEG_IK_MODE(uParam0->f_144, 0);
			}
		}
		else
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_135))
			{
				uParam0->f_135 = func_146(uParam0->f_135.f_8, uParam0->f_135.f_1, uParam0->f_135.f_4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				return 0;
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_135))
			{
				PED::SET_PED_NAME_DEBUG(uParam0->f_135, "MAIDEN");
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_135, true);
			}
		}
		return 1;
	}
	return 0;
}

void func_50(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	if (func_147() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0 /*9*/];
		if (((func_148(iVar1) && !func_149(iVar1, iParam2)) && (!bParam3 || !func_150(iVar1))) && (!bParam4 || !func_151(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_152(iVar0);
			}
		}
		iVar0++;
	}
}

bool func_51(char* sParam0, int iParam1)
{
	struct<2> Var0;

	Var0.f_1 = sParam0;
	return func_153(_NAMESPACE71::_0x4E88A65968A55C78(&Var0, iParam1));
}

int func_52(int iParam0, int iParam1)
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
	if (func_154(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_154(iVar0, 2))
	{
		if (PED::_0x3AA24CCC0D451379(iParam0))
		{
			return 0;
		}
	}
	if (func_154(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_154(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_154(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_154(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return 0;
		}
	}
	if (func_154(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_154(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_53(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	struct<14> Var35;
	int iVar49;
	struct<9> Var50;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;

	if (func_155(iParam0, -5284486))
	{
		Var35 = -1;
		Var35.f_1 = -1;
		Var35.f_2 = -1;
		Var35.f_3 = -1;
		Var35.f_4 = -1;
		Var35.f_5 = -1;
		Var35.f_6 = -1;
		Var35.f_7 = -1;
		Var35.f_8 = -1;
		Var35.f_13 = -1;
		Var35 = iParam0;
		iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
		if (iVar33 != -1)
		{
			if (iVar34 > 0)
			{
				bParam4 = true;
			}
			INVENTORY::_0x42A2F33A1942E865(iVar33);
		}
		iVar49 = 0;
		if (func_156(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
		{
			iVar32 = 0;
			while (iVar32 < iVar31)
			{
				if (&Var0[iVar32 /*2*/] == 2084597891 || &Var0[iVar32 /*2*/] == 773203532)
				{
					iVar49 = (iVar49 + (Var0[iVar32 /*2*/])->f_1);
					Jump @229; //curOff = 201
				}
				else if (&Var0[iVar32 /*2*/] == 0)
				{
				}
				else
				{
					iVar32++;
				}
			}
		}
		Var50 = -1;
		Var50.f_1 = -1;
		Var50.f_2 = -1;
		Var50.f_3 = -1;
		Var50.f_4 = -1;
		Var50.f_5 = -1;
		Var50.f_6 = -1;
		Var50.f_7 = -1;
		Var50.f_8 = -1;
		iVar64 = func_157(iParam0, 862142561);
		if (iVar64 != 0)
		{
			Var50.f_8 = iVar64;
			iVar61 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&Var50, &iVar60, 1);
			if (iVar61 != -1)
			{
				iVar62 = 0;
				while (iVar62 < iVar60)
				{
					iVar63 = func_158(iVar62, iVar61);
					if (func_159(iVar63, 0) && iVar63 != iParam0)
					{
						if (bParam4)
						{
							iVar49 = (iVar49 + func_53(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_53(iVar63, -915411861, 1, 0, 0));
								}
								INVENTORY::_0x42A2F33A1942E865(iVar33);
							}
						}
					}
					iVar62++;
				}
				ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar61);
			}
		}
		return iVar49;
	}
	if (!func_156(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32 /*2*/] == 2084597891 || &Var0[iVar32 /*2*/] == 773203532)
		{
			return (Var0[iVar32 /*2*/])->f_1;
		}
		else if (&Var0[iVar32 /*2*/] == 0)
		{
		}
		else
		{
			iVar32++;
		}
	}
	if (!bParam3)
	{
	}
	return 0;
}

void func_54(var uParam0)
{
	uParam0->f_120[6] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_mg_bathing_tub_steam", uParam0->f_60, 90f, 0f, 0f, 1f, false, false, false, false);
}

void func_55(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_135) || ENTITY::IS_ENTITY_DEAD(uParam0->f_135))
	{
		return;
	}
	if (!func_160(uParam0->f_135.f_5))
	{
		func_161(uParam0->f_135, uParam0->f_135.f_5, 0f, 2, 1073741824);
	}
}

void func_56(int iParam0, float fParam1)
{
	int iVar0;
	bool bVar1;
	char* sVar2;

	Global_40.f_11095.f_11[iParam0] = fParam1;
	if (iParam0 == 12)
	{
		bVar1 = fParam1 != 0f;
		sVar2 = func_162(fParam1 < 0f, "rpg_cold", "rpg_hot");
		func_163(1, bVar1, 1, sVar2);
		func_164(!bVar1, fParam1 < 0f, bVar1);
		iVar0 = func_165(BUILTIN::CEIL(&(Global_40.f_11095.f_11[iParam0])));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0);
		func_166();
	}
	else if (iParam0 == 10)
	{
		iVar0 = func_165(BUILTIN::CEIL(&(Global_40.f_11095.f_11[iParam0])));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0);
	}
	else if (iParam0 == 16)
	{
		iVar0 = func_165(BUILTIN::CEIL(&(Global_40.f_11095.f_11[iParam0])));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0 * 100);
	}
	else if (iParam0 == 13)
	{
	}
}

void func_57(var uParam0)
{
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_69))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_69);
	}
	iLocal_301 = 0;
}

void func_58(var uParam0)
{
	if (CAM::_0x927B810E43E99932(&Local_269))
	{
		func_26();
		CAM::_0x8370D34BD2E60B73();
	}
	else if (func_115(Global_35, 76834332))
	{
		Local_269.f_16 = Global_35;
		func_26();
		PLAYER::SET_PLAYER_CLOTH_PIN_FRAMES(Global_35, true);
		if (uParam0->f_15 == 1)
		{
			PLAYER::SET_PLAYER_CLOTH_PIN_FRAMES(uParam0->f_144, true);
		}
		CAM::_0xB8B207C34285E978(&Local_269);
		CAM::_0xAC77757C05DE9E5A(&Local_269);
	}
}

int func_59(var uParam0, char* sParam1, int iParam2, vector3 vParam3, int iParam6)
{
	struct<121> Var0;

	if (!func_160(vParam3))
	{
		if (!func_28(*uParam0))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
			{
				*uParam0 = func_167(sParam1, iParam2, vParam3, 1.6f, 3, 0, 0, 0, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
				func_168(*uParam0, sParam1, iParam6, 1);
				func_65(*uParam0, func_169(1) > iParam6, 1);
			}
		}
		else if (func_170(*uParam0, 1))
		{
			if (iLocal_53 == 0)
			{
				iLocal_47 = MISC::GET_GAME_TIMER();
				Var0 = -1;
				Var0.f_1 = 168093330;
				Var0.f_2 = -304640465;
				Var0.f_42 = -711536720;
				Var0.f_43 = -473983589;
				Var0.f_44 = -719620017;
				Var0.f_45 = 1138488863;
				Var0.f_46 = 814057702;
				Var0.f_117 = 1;
				Var0.f_120 = 9;
				func_61(&Var0, "PLAYER_REQUESTS_SPECIAL_BATH");
			}
			return 1;
		}
	}
	return 0;
}

void func_60(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_171(iParam1, iParam2);
	func_172(iParam1, iParam4);
	func_173(iParam1, iParam4);
	TELEMETRY::_0x2A374E6F0075EE81(func_174(iParam0), func_175(iParam1), iParam2, iParam3, iParam4);
}

void func_61(var uParam0, char* sParam1)
{
	char* sVar0;

	if (func_176())
	{
		sVar0 = "JOHN_PLAYER";
		if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35))
		{
			if (MISC::ARE_STRINGS_EQUAL(sParam1, "PLAYER_LAUGH"))
			{
				sParam1 = "LAUGH_LOW";
				func_113(Global_35, "LAUGH_LOW", 1615046335, 0, 1, 0, 0, 1);
				return;
			}
			if (MISC::ARE_STRINGS_EQUAL(sParam1, "SIGH"))
			{
				sParam1 = "SIGH_LOW";
				func_113(Global_35, "SIGH_LOW", 1615046335, 0, 1, 0, 0, 1);
				return;
			}
		}
	}
	else
	{
		sVar0 = "ARTHUR";
		if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35))
		{
			if (MISC::ARE_STRINGS_EQUAL(sParam1, "PLAYER_LAUGH"))
			{
				sParam1 = "LAUGH_HIGH";
				func_113(Global_35, "LAUGH_HIGH", 1615046335, 0, 1, 0, 0, 1);
				return;
			}
			if (MISC::ARE_STRINGS_EQUAL(sParam1, "SIGH"))
			{
				sParam1 = "SIGH_LOW";
				func_113(Global_35, "SIGH_LOW", 1615046335, 0, 1, 0, 0, 1);
				return;
			}
		}
	}
	if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(uParam0->f_144))
	{
	}
	else
	{
		func_113(Global_35, sParam1, 1541280898, 0, 1, sVar0, 0, 1);
	}
}

int func_62(var uParam0, char* sParam1, int iParam2, vector3 vParam3, bool bParam6, bool bParam7, int iParam8, bool bParam9)
{
	int iVar0;

	if (iLocal_320 == 1)
	{
		return 0;
	}
	if (!func_28(*uParam0))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			iVar0 = 0;
			if (bParam6)
			{
				if (!func_160(vParam3))
				{
					iVar0 = 7;
					*uParam0 = func_167(sParam1, iParam2, vParam3, 1f, 2, 1, 0, iVar0, 570, 0, 14, 2f, 0, 1704213876, 0);
				}
			}
			else if (!func_160(vParam3))
			{
				*uParam0 = func_167(sParam1, iParam2, vParam3, 1f, 2, 1, 0, 0, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
			}
			if (iParam8 == 0)
			{
				if (func_28(*uParam0) && func_177(*uParam0, 0) == bParam7)
				{
					func_65(*uParam0, !bParam7, 1);
				}
			}
			if (bParam9)
			{
				func_65(*uParam0, 0, 1);
			}
		}
	}
	else if (bParam6)
	{
		if (func_178(*uParam0, 1))
		{
			return 1;
		}
	}
	else if (func_170(*uParam0, 1))
	{
		return 1;
	}
	return 0;
}

void func_63(float fParam0)
{
	if (func_179(1) < fParam0)
	{
		func_180(1, fParam0, 0);
	}
	if (func_179(2) < fParam0)
	{
		func_180(2, fParam0, 0);
	}
	if (func_179(0) < fParam0)
	{
		func_180(0, fParam0, 0);
	}
}

int func_64(var uParam0, char* sParam1, int iParam2)
{
	if (uParam0->f_15)
	{
		if (TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(Global_35))
		{
			if (MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(Global_35), sParam1) == iParam2)
			{
				return 1;
			}
		}
	}
	else if (MISC::ARE_STRINGS_EQUAL(&(uParam0->f_20), "TESTBLOCK"))
	{
		if (TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(Global_35))
		{
			if (MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(Global_35), sParam1) == iParam2)
			{
				return 1;
			}
		}
	}
	else if (TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(Global_35) && TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(iLocal_64))
	{
		if (MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(Global_35), sParam1) == iParam2 && MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(iLocal_64), sParam1) == iParam2)
		{
			return 1;
		}
	}
	return 0;
}

void func_65(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (iParam2 && !func_28(iParam0))
	{
		return;
	}
	iVar0 = func_121(iParam0);
	if (bParam1)
	{
		func_181(iParam0, 4);
		func_182(iVar0, 1);
		func_183(iVar0, 1);
	}
	else
	{
		func_184(iParam0, 4);
		func_183(iVar0, 0);
	}
}

void func_66(var uParam0, int iParam1)
{
	uParam0->f_115 = iParam1;
	if (MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(Global_35), "Bathing") || MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(Global_35), "Intro"))
	{
		uParam0->f_117 = 0;
		if (iParam1 == 5)
		{
			return;
		}
	}
	else if (MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(Global_35), "Scrub_Idle"))
	{
		uParam0->f_113 = uParam0->f_115;
		return;
	}
	else
	{
		uParam0->f_117 = 2;
		if (iParam1 == uParam0->f_114)
		{
			return;
		}
	}
	uParam0->f_113 = 4;
}

void func_67(var uParam0, float fParam1)
{
	if (fParam1 < 1f)
	{
		fParam1 = 1f;
	}
	switch (uParam0->f_115)
	{
		case 1:
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(&(uParam0->f_120[0]), "scrub", fParam1, false);
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(&(uParam0->f_120[5]), "scrub", fParam1, false);
			break;
		case 2:
			if (uParam0->f_36 >= 1)
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(&(uParam0->f_120[4]), "scrub", fParam1, false);
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(&(uParam0->f_120[2]), "scrub", fParam1, false);
			}
			else
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(&(uParam0->f_120[1]), "scrub", fParam1, false);
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(&(uParam0->f_120[3]), "scrub", fParam1, false);
			}
			break;
		case 3:
			if (uParam0->f_37 >= 1)
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(&(uParam0->f_120[7]), "scrub", fParam1, false);
			}
			else
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(&(uParam0->f_120[8]), "scrub", fParam1, false);
			}
			break;
	}
}

int func_68(var uParam0)
{
	if (!func_40(uParam0))
	{
		return 0;
	}
	if (func_138(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_185() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

int func_69(var uParam0)
{
	if (func_28(uParam0->f_29))
	{
		uParam0->f_40 = func_186(uParam0->f_29, 1);
		if (uParam0->f_34)
		{
			if (uParam0->f_40 > 0.025f)
			{
				func_36(&uLocal_73, 1);
				fLocal_68 = 0f;
				uParam0->f_118 = 0;
				uParam0->f_34 = 0;
			}
		}
	}
	if (func_119(uParam0->f_29, 1))
	{
	}
	if (func_28(uParam0->f_29) && func_119(uParam0->f_29, 1))
	{
		func_67(uParam0, 1f);
		fLocal_67 = 1f;
		return 1;
	}
	else
	{
		if (!func_40(&uLocal_73))
		{
			func_36(&uLocal_73, 1);
		}
		if (func_68(&uLocal_73) > 250)
		{
			switch (uParam0->f_118)
			{
				case 0:
					if (uParam0->f_39 > uParam0->f_40)
					{
						fLocal_68 = (fLocal_68 + 1f);
						fLocal_69 = 0f;
					}
					else
					{
						func_67(uParam0, fLocal_69);
						fLocal_68 = 0f;
					}
					if (fLocal_68 > 5f)
					{
						func_187(uParam0);
						uParam0->f_118 = 1;
					}
					func_36(&uLocal_73, 1);
					break;
				case 1:
					if (uParam0->f_40 < 0.1f)
					{
						func_66(uParam0, 5);
						uParam0->f_118 = 2;
					}
					if (uParam0->f_39 < uParam0->f_40)
					{
						uParam0->f_118 = 4;
					}
					break;
				case 2:
					func_31(uParam0, 1);
					uParam0->f_118 = 3;
					break;
				case 3:
					if (func_64(uParam0, "Bathing", 1))
					{
						fLocal_67 = 0f;
						func_42(&uLocal_73);
						uParam0->f_112 = 14;
						uParam0->f_34 = 1;
						uParam0->f_118 = 0;
					}
					break;
				case 4:
					fLocal_68 = 0f;
					func_36(&uLocal_73, 1);
					func_66(uParam0, uParam0->f_114);
					uParam0->f_118 = 0;
					break;
			}
			uParam0->f_39 = uParam0->f_40;
			func_67(uParam0, uParam0->f_39);
		}
	}
	return 0;
}

var func_70(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_71(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;

	if (func_136() == 0)
	{
		func_188(1, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_179(1);
	if (bParam1)
	{
		func_189(fVar0);
	}
	if (bParam2)
	{
		fParam0 = func_190(1, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_180(1, func_191(fParam0, -100f, 100f), bParam1);
}

void func_72(int iParam0)
{
	int iVar0;

	if (func_136() != -1)
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

void func_73(int iParam0, bool bParam1)
{
	struct<2> Var0;
	struct<6> Var22;
	int iVar29;
	float fVar30;
	var uVar31;
	var uVar32;
	float fVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	bool bVar37;
	var uVar38;
	var uVar39;
	bool bVar40;
	bool bVar41;
	int iVar42;

	Var0.f_1 = 20;
	if ((func_155(iParam0, 1573112293) || func_155(iParam0, 672467738)) || func_155(iParam0, -550842268))
	{
		bVar37 = true;
	}
	if (func_192(iParam0) == 2085633299)
	{
		ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iParam0, &Var0);
		ATTRIBUTE::_0xD962F8579D702DB5();
		iVar29 = 0;
		while (iVar29 < Var0)
		{
			if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(&(Var0.f_1[iVar29]), &Var22))
			{
			}
			else if (-943921969 == Var22.f_1)
			{
				fVar30 = func_193(0, Var22.f_2);
				func_194(Var22.f_2, 1);
				func_195(0, 7000);
				bVar41 = true;
			}
			else if (-1104847406 == Var22.f_1)
			{
				uVar31 = func_193(2, Var22.f_2);
				func_196(Var22.f_2);
				func_195(2, 7000);
				bVar40 = true;
			}
			else if (381158954 == Var22.f_1)
			{
				uVar32 = func_193(1, Var22.f_2);
				func_72(Var22.f_2);
				func_195(1, 7000);
			}
			else if (-416929031 == Var22.f_1)
			{
				fVar33 = func_197(Var22.f_2, Var22.f_5);
				if (func_198(&uVar38, &uVar39, fVar33))
				{
					func_199(fVar33, 1, bVar37, bParam1);
					func_195(0, 7000);
				}
				bVar41 = true;
			}
			else if (1857353317 == Var22.f_1)
			{
				fVar34 = func_197(Var22.f_2, Var22.f_5);
				if (func_198(&uVar38, &uVar39, fVar34))
				{
					func_200(fVar34, 1, bVar37, bParam1);
					func_195(2, 7000);
				}
				bVar40 = true;
			}
			else if (1681823811 == Var22.f_1)
			{
				fVar35 = func_197(Var22.f_2, Var22.f_5);
				if (func_198(&uVar38, &uVar39, fVar35))
				{
					func_71(fVar35, 1, bVar37, bParam1);
					func_195(1, 7000);
				}
			}
			else if (2062242710 == Var22.f_1)
			{
				fVar36 = func_201(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_202(19, fVar36);
				bVar41 = true;
			}
			else if (-826379728 == Var22.f_1)
			{
				fVar36 = func_201(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_202(20, fVar36);
				bVar40 = true;
			}
			else if (-1191740624 == Var22.f_1)
			{
				fVar36 = func_201(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_202(18, fVar36);
			}
			else if (1869697234 == Var22.f_1)
			{
				fVar36 = func_201(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_202(0, fVar36);
				bVar41 = true;
			}
			else if (1342237631 == Var22.f_1)
			{
				fVar36 = func_201(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_202(2, fVar36);
				bVar40 = true;
			}
			else if (-1240225157 == Var22.f_1)
			{
				fVar36 = func_201(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_202(1, fVar36);
			}
			else if (-816334026 == Var22.f_1)
			{
				func_203(BUILTIN::TO_FLOAT(Var22.f_2), 1);
			}
			iVar29++;
		}
		if (bVar41)
		{
			if (fVar33 > 0f || fVar30 > 0f)
			{
				iVar42 = 1;
			}
		}
		if (iVar42 || func_155(iParam0, -537818634))
		{
			func_80(func_79(-704089207), 1);
		}
		if (func_155(iParam0, -1457797660))
		{
			func_80(func_79(-1909697259), 1);
		}
		if (bVar40)
		{
			func_80(func_79(704570463), 1);
		}
		PLAYER::_0x0E1DB1F8F5B561DC(fVar30, uVar32, uVar31, BUILTIN::ROUND((fVar33 / 2f)), BUILTIN::ROUND((fVar35 / 2f)), BUILTIN::ROUND((fVar34 / 2f)));
	}
}

void func_74(var uParam0)
{
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_68))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_68);
	}
	iLocal_300 = 0;
}

int func_75()
{
	return func_204(Global_35, &(Global_1946804->f_1735));
}

int func_76()
{
	func_205(131072);
	return func_97(Global_35, &(Global_1946804->f_1735));
}

int func_77()
{
	if (func_136() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == joaat("player_zero"))
	{
		return 1;
	}
	return 0;
}

void func_78(bool bParam0)
{
	int iVar0;

	Global_40.f_7748.f_3 = 1;
	iVar0 = func_206();
	func_208(&iVar0, 0, 0, 0, func_207(bParam0, 5, 2), 0, 0, 0);
	if (func_209(iVar0, Global_40.f_7748, 1))
	{
		Global_40.f_7748 = iVar0;
	}
}

struct<2> func_79(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

void func_80(var uParam0, var uParam1, int iParam2)
{
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

void func_81(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_210(&Global_0, 8);
	}
	if (!func_211() || func_136() != -1)
	{
		return;
	}
	func_210(&Global_0, 1);
}

int func_82(var uParam0)
{
	struct<8> Var0;
	var uVar8;
	var uVar11;

	switch (iLocal_300)
	{
		case 1:
			if (func_123(uParam0->f_119))
			{
				Var0 = { func_212(uParam0) };
				uParam0->f_68 = ANIMSCENE::_CREATE_ANIM_SCENE(&Var0, 0, &(uParam0->f_96), false, true);
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_135))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_68, "FEMALE", uParam0->f_135, 0);
				}
				PED::SET_PED_CAN_LEG_IK(Global_35, false);
				PED::SET_PED_LEG_IK_MODE(Global_35, 0);
				if (func_77())
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_68, "ARTHUR", Global_35, 0);
				}
				else
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_68, "john_Marston", Global_35, 0);
				}
				if (uParam0->f_6 == 115)
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_68, "Door", func_114(1682160693, 0, 0), 0);
				}
				else
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_68, "Door", func_114(uParam0->f_119, 0, 0), 0);
				}
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_68, "BOOTS", iLocal_62, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_68, "CLOTHES", iLocal_63, 0);
				ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_68);
				iLocal_300 = 2;
			}
			break;
		case 2:
			if (ANIMSCENE::_0x25557E324489393C(uParam0->f_68))
			{
				if (ANIMSCENE::_0x477122B8D05E7968(uParam0->f_68, 1, 0))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_68, &(uParam0->f_96));
					iLocal_300 = 3;
				}
				else if (ANIMSCENE::_0x59606519FF9D3EC2(uParam0->f_68, 1))
				{
				}
			}
			break;
		case 3:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_68, &(uParam0->f_96)))
			{
				return 3;
			}
			break;
		case 6:
			func_76();
			func_213(Global_1935630, 2);
			iLocal_81 = 1;
			func_30(uParam0, uParam0->f_119, 0);
			func_25(uParam0->f_14, 1);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, 0, 1);
			ANIMSCENE::START_ANIM_SCENE(uParam0->f_68);
			ANIMSCENE::_0xADF1D53F3B1FE0A7(uParam0->f_68, &uVar8, &uVar11, 2);
			uParam0->f_16 = 1;
			uParam0->f_134 = 0;
			iLocal_300 = 7;
			break;
		case 7:
			if (ANIMSCENE::_0xCDC5512A407CF08D(uParam0->f_68))
			{
				if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_96), "s_Regular_outro"))
				{
					func_58(uParam0);
				}
			}
			if (!uParam0->f_134)
			{
				switch (uParam0->f_6)
				{
					case 5:
						fLocal_326 = 4.96f;
						break;
					case 115:
						fLocal_326 = 4.98f;
						break;
					case 38:
						fLocal_327 = 4.98f;
						break;
					default:
						fLocal_326 = 4f;
						break;
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 613537593))
				{
					if (uParam0->f_16)
					{
						if (iLocal_60 == 0)
						{
							if (func_52(Global_35, 0))
							{
								uParam0->f_16 = 0;
								func_19(1);
								func_214(Global_35, iLocal_325, 1, 1, 0);
								AUDIO::TRIGGER_MUSIC_EVENT("MG_BATHING_START");
								func_215();
								ENTITY::SET_ENTITY_INVINCIBLE(Global_35, true);
								iLocal_60 = 1;
							}
						}
					}
					else
					{
						func_216(2, 64, 2, 0, 0);
						uParam0->f_134 = 1;
					}
				}
			}
			if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_68, 0) || (ANIMSCENE::_0x3FBC3F51BF12DFBF(uParam0->f_68) > 0.95f && ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_68, 0)))
			{
				iLocal_300 = 8;
			}
			break;
	}
	return iLocal_300;
}

int func_83(var uParam0)
{
	struct<8> Var0;

	switch (iLocal_301)
	{
		case 1:
			Var0 = { func_212(uParam0) };
			uParam0->f_69 = ANIMSCENE::_CREATE_ANIM_SCENE(&Var0, 2, &(uParam0->f_104), false, true);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_69, "Female", uParam0->f_144, 0);
			if (func_77())
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_69, "ARTHUR", Global_35, 0);
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_69, "john_Marston", Global_35, 0);
			}
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_69, "Door", func_114(uParam0->f_119, 0, 0), 0);
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_69);
			iLocal_301 = 2;
			break;
		case 2:
			if (ANIMSCENE::_0x477122B8D05E7968(uParam0->f_69, 1, 0))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_69, &(uParam0->f_104));
				iLocal_301 = 3;
			}
			break;
		case 3:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_69, &(uParam0->f_104)))
			{
				if (uParam0->f_112 < 19)
				{
					if (iLocal_53 == 0)
					{
						iLocal_48 = MISC::GET_GAME_TIMER();
					}
				}
				iLocal_301 = 4;
			}
			break;
		case 4:
			if (iLocal_53 == 0)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_48) > 5000)
				{
					ANIMSCENE::START_ANIM_SCENE(uParam0->f_69);
					iLocal_301 = 5;
				}
			}
			else
			{
				AUDIO::PLAY_SOUND_FRONTEND("BATHING_DOOR_KNOCK_MASTER", 0, true, 0);
				iLocal_301 = 5;
				func_24(uParam0, "OFFER_SPECIAL_BATH", 1);
				iLocal_47 = MISC::GET_GAME_TIMER();
			}
			break;
		case 6:
			if ((MISC::GET_GAME_TIMER() - iLocal_47) > 3000 && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35))
			{
				if (iLocal_26 == 1)
				{
					iLocal_26 = 0;
					ANIMSCENE::START_ANIM_SCENE(uParam0->f_69);
				}
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_47) > 5000)
			{
				if (uParam0->f_112 < 19)
				{
					ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam0->f_69, 0);
					iLocal_329 = 0;
				}
				else
				{
					ANIMSCENE::START_ANIM_SCENE(uParam0->f_69);
					iLocal_329 = 1;
				}
				iLocal_301 = 7;
			}
			break;
		case 7:
			if (uParam0->f_15)
			{
				if (iLocal_56 == 0)
				{
					if (CAM::_0x927B810E43E99932(&Local_269))
					{
						iLocal_56 = 1;
						CAM::_0x0A5A4F1979ABB40E(&Local_269);
					}
				}
			}
			if (ANIMSCENE::_0xCDC5512A407CF08D(uParam0->f_68))
			{
				if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_96), "s_Regular_outro"))
				{
					func_58(uParam0);
				}
			}
			if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_69, 0) || (ANIMSCENE::_0x3FBC3F51BF12DFBF(uParam0->f_69) > 0.95f && ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_69, 0)))
			{
				iLocal_301 = 8;
			}
			if (MISC::ARE_STRINGS_EQUAL(&(uParam0->f_104), "s_deluxe_intro") && ANIMSCENE::_0x3FBC3F51BF12DFBF(uParam0->f_69) > 0.05f)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_64))
				{
					OBJECT::DELETE_OBJECT(&iLocal_64);
					func_24(uParam0, "ACCEPT_SPECIAL_BATH", 0);
				}
			}
			if (MISC::ARE_STRINGS_EQUAL(&(uParam0->f_104), "s_deluxe_Outro"))
			{
				if (ANIMSCENE::_0x3FBC3F51BF12DFBF(uParam0->f_69) > 0f && ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_69, 0))
				{
					if (iLocal_28 == 0)
					{
						func_61(uParam0, "END_BATH");
						iLocal_28 = 1;
						iLocal_51 = MISC::GET_GAME_TIMER();
					}
					else if (iLocal_29 == 0)
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_51) > 4000)
						{
							iLocal_29 = 1;
						}
					}
				}
			}
			if (MISC::ARE_STRINGS_EQUAL(&(uParam0->f_104), "s_deluxe_Outro") && (ANIMSCENE::_0x3FBC3F51BF12DFBF(uParam0->f_69) > 0.5f && ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_69, 0)))
			{
				if (iLocal_30 == 0)
				{
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35))
					{
						if (iLocal_44 > 3)
						{
							func_24(uParam0, "FAREWELL_LEVEL2", 0);
						}
						else
						{
							func_24(uParam0, "FAREWELL_LEVEL1", 0);
						}
						iLocal_30 = 1;
					}
				}
			}
			if (!iLocal_329)
			{
				if (ANIMSCENE::_0x3FBC3F51BF12DFBF(uParam0->f_69) > 0.5f && ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_69, 0))
				{
					func_58(uParam0);
					iLocal_329 = 1;
				}
			}
			break;
	}
	return iLocal_301;
}

void func_84(var uParam0)
{
	if (!func_52(Global_35, 0))
	{
		return;
	}
	if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(Global_35))
	{
		TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Global_35, "scrub_freq", fLocal_69);
		TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Global_35, "Cleanliness_Right_Arm", fLocal_69);
		TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Global_35, "Cleanliness_Left_Arm", fLocal_69);
		TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Global_35, "Cleanliness_Left_Leg", fLocal_69);
		TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Global_35, "Cleanliness_Right_Leg", fLocal_69);
		TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Global_35, "Cleanliness_Head", fLocal_69);
		TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(iLocal_64, "scrub_freq", fLocal_69);
		TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(iLocal_64, "Cleanliness_Right_Arm", fLocal_69);
		TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(iLocal_64, "Cleanliness_Left_Arm", fLocal_69);
		TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(iLocal_64, "Cleanliness_Left_Leg", fLocal_69);
		TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(iLocal_64, "Cleanliness_Right_Leg", fLocal_69);
		TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(iLocal_64, "Cleanliness_Head", fLocal_69);
		if (uParam0->f_15)
		{
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(uParam0->f_144, "scrub_freq", fLocal_69);
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(uParam0->f_144, "Cleanliness_Right_Arm", fLocal_69);
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(uParam0->f_144, "Cleanliness_Left_Arm", fLocal_69);
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(uParam0->f_144, "Cleanliness_Left_Leg", fLocal_69);
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(uParam0->f_144, "Cleanliness_Right_Leg", fLocal_69);
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(uParam0->f_144, "Cleanliness_Head", fLocal_69);
		}
	}
	switch (uParam0->f_113)
	{
		case 1:
			if (func_64(uParam0, "Scrub_Idle", 1))
			{
				uParam0->f_47 = -719620017;
				if (uParam0->f_15 == 0)
				{
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Global_35, "Scrub_Head");
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(iLocal_64, "Scrub_Head");
				}
				uParam0->f_113 = 0;
				uParam0->f_115 = 1;
				uParam0->f_114 = 1;
				uParam0->f_117 = 2;
				func_217(uParam0);
			}
			break;
		case 2:
			if (func_64(uParam0, "Scrub_Idle", 1))
			{
				uParam0->f_47 = -473983589;
				if (uParam0->f_15)
				{
					if (iLocal_323 == 0 || iLocal_324 == 0)
					{
						if (iLocal_323 == 0)
						{
							TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Global_35, "Scrub_Left_Arm");
							TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(uParam0->f_144, "Scrub_Left_Arm");
						}
						else
						{
							TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Global_35, "Scrub_Right_Arm");
							TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(uParam0->f_144, "Scrub_Right_Arm");
						}
					}
				}
				else if (uParam0->f_36 == 0)
				{
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Global_35, "Scrub_Right_Arm");
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(iLocal_64, "Scrub_Right_Arm");
				}
				else
				{
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Global_35, "Scrub_Left_Arm");
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(iLocal_64, "Scrub_Left_Arm");
				}
				uParam0->f_113 = 0;
				uParam0->f_115 = 2;
				uParam0->f_114 = 2;
				uParam0->f_117 = 2;
				func_217(uParam0);
			}
			break;
		case 3:
			if (func_64(uParam0, "Scrub_Idle", 1))
			{
				uParam0->f_47 = 1367437629;
				if (uParam0->f_15)
				{
					if (iLocal_321 == 0 || iLocal_322 == 0)
					{
						if (iLocal_321 == 0)
						{
							TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Global_35, "Scrub_Left_Leg");
							TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(uParam0->f_144, "Scrub_Left_Leg");
						}
						else
						{
							TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Global_35, "Scrub_Right_Leg");
							TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(uParam0->f_144, "Scrub_Right_Leg");
						}
					}
				}
				else if (uParam0->f_37 == 0)
				{
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Global_35, "Scrub_Left_Leg");
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(iLocal_64, "Scrub_Left_Leg");
				}
				else
				{
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Global_35, "Scrub_Right_Leg");
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(iLocal_64, "Scrub_Right_Leg");
				}
				uParam0->f_113 = 0;
				uParam0->f_115 = 3;
				uParam0->f_114 = 3;
				uParam0->f_117 = 2;
				func_217(uParam0);
			}
			break;
		case 4:
			if (((((((func_64(uParam0, "Scrub_Head", 1) || func_64(uParam0, "Scrub_Right_Arm", 1)) || func_64(uParam0, "Scrub_Left_Arm", 1)) || func_64(uParam0, "Scrub_Left_Leg", 1)) || func_64(uParam0, "Scrub_Right_Leg", 1)) || func_64(uParam0, "intro", 1)) || func_64(uParam0, "Bathing", 1)) || func_64(uParam0, "Scrub_Idle", 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Global_35, "Scrub_Idle");
				if (uParam0->f_15)
				{
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(uParam0->f_144, "Scrub_Idle");
				}
				else
				{
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(iLocal_64, "Scrub_Idle");
				}
				uParam0->f_117 = 1;
				if (uParam0->f_18)
				{
					uParam0->f_113 = 0;
					uParam0->f_18 = 0;
				}
				else
				{
					uParam0->f_113 = uParam0->f_115;
				}
			}
			break;
		case 5:
			if (func_64(uParam0, "Scrub_Idle", 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Global_35, "Bathing");
				if (uParam0->f_15)
				{
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(uParam0->f_144, "Bathing");
				}
				else
				{
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(iLocal_64, "Bathing");
				}
				uParam0->f_113 = 0;
				uParam0->f_115 = 5;
				uParam0->f_117 = 0;
			}
			break;
	}
}

int func_85(var uParam0)
{
	switch (uParam0->f_116)
	{
		case 0:
			break;
		case 1:
			if (uParam0->f_15)
			{
				uParam0->f_112 = 24;
				if (func_77())
				{
				}
				if (func_64(uParam0, "Bathing", 1) || func_64(uParam0, "Intro", 1))
				{
					uParam0->f_116 = 4;
				}
				else
				{
					func_31(uParam0, 1);
					uParam0->f_116 = 4;
				}
			}
			else
			{
				if (func_77())
				{
				}
				func_31(uParam0, 1);
				uParam0->f_116 = 4;
			}
			break;
		case 5:
			if ((MISC::GET_GAME_TIMER() - iLocal_328) > 500)
			{
				uParam0->f_116 = 6;
				iLocal_328 = MISC::GET_GAME_TIMER();
			}
			break;
		case 6:
			if ((MISC::GET_GAME_TIMER() - iLocal_328) > 300)
			{
				uParam0->f_116 = 4;
			}
			break;
		case 2:
			if (func_64(uParam0, "Bathing", 1))
			{
				uParam0->f_116 = 4;
			}
			else if (func_64(uParam0, "Scrub_Idle", 1))
			{
				func_66(uParam0, 5);
				uParam0->f_116 = 3;
			}
			break;
		case 3:
			if (func_64(uParam0, "Bathing", 1))
			{
				uParam0->f_116 = 4;
			}
			break;
		case 4:
			if (uParam0->f_15)
			{
				STREAMING::_0x57A197AD83F66BBF(sLocal_303);
				STREAMING::REMOVE_ANIM_DICT(sLocal_308);
				STREAMING::REMOVE_ANIM_DICT(sLocal_310);
				STREAMING::REMOVE_CLIP_SET(sLocal_309);
				STREAMING::REMOVE_CLIP_SET(sLocal_311);
				iLocal_80 = 0;
			}
			else
			{
				STREAMING::_0x57A197AD83F66BBF(sLocal_302);
				STREAMING::REMOVE_ANIM_DICT(sLocal_304);
				STREAMING::REMOVE_ANIM_DICT(sLocal_306);
				STREAMING::REMOVE_CLIP_SET(sLocal_305);
				STREAMING::REMOVE_CLIP_SET(sLocal_307);
				iLocal_79 = 0;
			}
			PED::_0x55546004A244302A(Global_35, 0);
			if (uParam0->f_15)
			{
				StringCopy(&(uParam0->f_104), "s_deluxe_Outro", 32);
				iLocal_301 = 1;
				uParam0->f_112 = 19;
			}
			else
			{
				uParam0->f_112 = 20;
			}
			ENTITY::SET_ENTITY_COLLISION(Global_35, true, false);
			ENTITY::SET_ENTITY_DYNAMIC(Global_35, true);
			if (uParam0->f_15)
			{
				ENTITY::SET_ENTITY_COLLISION(uParam0->f_144, true, false);
				ENTITY::SET_ENTITY_DYNAMIC(uParam0->f_144, true);
			}
			else
			{
				ENTITY::SET_ENTITY_COLLISION(uParam0->f_135, true, false);
				ENTITY::SET_ENTITY_DYNAMIC(uParam0->f_135, true);
			}
			uParam0->f_116 = 0;
			return 1;
	}
	return 0;
}

void func_86()
{
	iLocal_18 = MISC::GET_RANDOM_INT_IN_RANGE(1, 6);
	iLocal_21++;
}

void func_87()
{
	iLocal_19 = MISC::GET_RANDOM_INT_IN_RANGE(1, 6);
	if (iLocal_19 != iLocal_18)
	{
		iLocal_21++;
	}
}

void func_88()
{
	iLocal_20 = MISC::GET_RANDOM_INT_IN_RANGE(1, 6);
	if (iLocal_20 != iLocal_18 && iLocal_20 != iLocal_19)
	{
		iLocal_21++;
	}
}

void func_89(var uParam0)
{
	int iVar0;
	vector3 vVar1;

	uParam0->f_1 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_134)
	{
		if (PED::_0x93FFD92F05EC32FD(&(uParam0->f_135[iVar0 /*2*/])))
		{
			PED::_0x13E7320C762F0477(&(uParam0->f_135[iVar0 /*2*/]));
		}
		(uParam0->f_135[iVar0 /*2*/])->f_1 = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*(uParam0->f_1.f_1[iVar0 /*3*/]) = { vVar1 };
		iVar0++;
	}
	func_90(&(uParam0->f_120));
	uParam0->f_134 = 0;
	*uParam0 = 0;
}

void func_90(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_8 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3[0] = 0;
	uParam0->f_3[1] = 0;
	uParam0->f_3[2] = 0;
	uParam0->f_3[3] = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	if (uParam0->f_12)
	{
		PED::_0x13E7320C762F0477(uParam0->f_13);
	}
	uParam0->f_12 = 0;
}

void func_91(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

void func_92(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_218(iParam0, 1) /*11*/])->f_10 = ((Global_1946804->f_57[func_218(iParam0, 1) /*11*/])->f_10 - ((Global_1946804->f_57[func_218(iParam0, 1) /*11*/])->f_10 && iParam1));
}

int func_93(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return 439606975;
		case 6:
			return 1661121390;
		case 7:
			return 1164374808;
		case 8:
			return 1160643979;
		case 9:
			return 624063935;
		case 10:
			return -1476781101;
		case 11:
			return 294553332;
		case 12:
			return 1788874135;
		case 15:
			return 1560492757;
		case 16:
			return -769081407;
		case 17:
			return 1902428294;
		case 18:
			return -2114499732;
		case 19:
			return 800827126;
		case 20:
			return 688004210;
		case 0:
			return 166243423;
		case 1:
			return 1383300684;
		case 2:
			return 2051441678;
		case 3:
			return 162509669;
		case 4:
			return 635948769;
		case 5:
			return 274995506;
		case 24:
			return -1826731591;
		case 25:
			return 2119049229;
		case 26:
			return 1352942778;
		case 27:
			return 1964379549;
		case 28:
			return 1201189539;
		case 21:
			return 1351927599;
		case 22:
			return 2032023096;
		case 23:
			return -291256376;
		case 66:
			return -1243402388;
		case 67:
			return 65931886;
		case 68:
			return 1371678229;
		case 69:
			return 2102263084;
		case 61:
			return -272211555;
		case 64:
			return -55563408;
		case 71:
			return -1914506115;
		case 75:
			return 802495462;
		case 77:
			return 842905332;
		case 78:
			return -1951220140;
		case 79:
			return 1511551084;
		case 81:
			return -1725704631;
		case 83:
			return 1257427489;
		case 85:
			return -659341240;
		case 87:
			return 2038771525;
		case 89:
			return -535599244;
		case 73:
			return -389591806;
		case 70:
			return -1205612021;
		case 93:
			return 890706995;
		case 90:
			return 1156438275;
		case 91:
			return -1611873049;
		case 92:
			return 594312243;
		case 94:
			return -978578725;
		case 13:
			return 1784889667;
		case 62:
			return -361635024;
		case 76:
			return 1460520700;
		case 80:
			return 523337834;
		case 82:
			return -19271249;
		case 84:
			return 214175524;
		case 86:
			return -1303643297;
		case 88:
			return 411856831;
		case 72:
			return -926815459;
		case 74:
			return -1300731953;
		case 65:
			return -409616653;
		case 29:
			return 509954990;
		case 30:
			return -445916744;
		case 31:
			return -866249154;
		case 32:
			return -2077063704;
		case 33:
			return 205207539;
		case 34:
			return -1033657275;
		case 35:
			return 1806002837;
		case 36:
			return 705324896;
		case 37:
			return -1541763703;
		case 38:
			return 387052410;
		case 39:
			return -361288914;
		case 40:
			return -911054515;
		case 41:
			return 1084200963;
		case 42:
			return 1847948074;
		case 43:
			return -1212526764;
		case 44:
			return 1851440270;
		case 45:
			return -2028985700;
		case 46:
			return 1074435214;
		case 47:
			return -883015675;
		case 48:
			return -1047155604;
		case 49:
			return 1123231221;
		case 50:
			return 1866989210;
		case 51:
			return 478183719;
		case 52:
			return -1698955868;
		case 53:
			return -2029378634;
		case 54:
			return 1339864416;
		case 55:
			return 890998115;
		case 56:
			return -1376288999;
		case 57:
			return -1041123771;
		case 58:
			return 1389254668;
		case 59:
			return -346112633;
		case 60:
			return 773309172;
		default:
			break;
	}
	return 0;
}

int func_94()
{
	return Global_1946804->f_1;
}

bool func_95(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = func_219(iParam1);
	func_220(&(Global_1946804->f_964), uVar0, iParam0, -897569541, 1, iParam1);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1946804->f_964));
	return DATAFILE::_0xED4413CEE1BF142C(&(Global_1946804->f_964));
}

bool func_96(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

int func_97(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (uParam1->f_1 == 0)
	{
		return 0;
	}
	if (!func_96(uParam1, 2))
	{
		iVar1 = PED::_GET_METAPED_TYPE(iParam0);
		iVar0 = 0;
		while (iVar0 < 39)
		{
			if (&uParam1->f_1.f_1[iVar0 /*3*/] == &Global_1946804->f_57[iVar0 /*11*/])
			{
			}
			else
			{
				uParam1->f_135[uParam1->f_134 /*2*/] = PED::_0xF6D9E1F3560CBF8E(iVar1, &(uParam1->f_1.f_1[iVar0 /*3*/]), 0, false, 0);
				(uParam1->f_135[uParam1->f_134 /*2*/])->f_1 = iVar0;
				uParam1->f_134++;
			}
			iVar0++;
		}
		func_100(uParam1, 2);
	}
	return func_204(iParam0, uParam1);
}

void func_98(var uParam0)
{
	int iVar0;

	*uParam0 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*(uParam0->f_1[iVar0 /*3*/]) = { *(Global_1946804->f_1497.f_1[iVar0 /*3*/]) };
		iVar0++;
	}
}

int func_99(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (!func_221(uParam0, iParam3, iParam2) && !func_222(uParam0, iParam2, iParam1, 0, bParam4, 0, 0))
	{
		return 0;
	}
	iVar0 = 10;
	if (func_9(32768))
	{
		if (!*iParam1 || (*iParam1 && &uParam0->f_1[iVar0 /*3*/] != &Global_1946804->f_57[iVar0 /*11*/]))
		{
			func_223(1108822547);
		}
		else
		{
			func_224(1108822547);
		}
	}
	func_225(uParam0, 0, 0);
	func_226(iParam5);
	return 1;
}

void func_100(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_101(int iParam0)
{
	return iParam0 != 0;
}

void func_102(var uParam0)
{
	if (uParam0->f_1 == 0)
	{
		return;
	}
	func_205(32768);
	func_224(1108822547);
	Global_1946804->f_2776 = *uParam0;
	Global_1946804->f_2776.f_1 = uParam0->f_1;
	Global_1946804->f_2776.f_8 = uParam0->f_8;
	Global_1946804->f_2776.f_2 = uParam0->f_2;
	Global_1946804->f_2776.f_3[0] = &uParam0->f_3[0];
	Global_1946804->f_2776.f_3[1] = &uParam0->f_3[1];
	Global_1946804->f_2776.f_3[2] = &uParam0->f_3[2];
	Global_1946804->f_2776.f_3[3] = &uParam0->f_3[3];
	Global_1946804->f_2776.f_9 = uParam0->f_9;
	Global_1946804->f_2776.f_10 = uParam0->f_10;
	Global_1946804->f_2776.f_11 = uParam0->f_11;
	Global_1946804->f_2776.f_12 = 1;
	Global_1946804->f_2776.f_13 = PED::_0x3FCBB5FCFD968698(Global_1946804->f_2776.f_1, &(Global_1946804->f_2776.f_3[0]), &(Global_1946804->f_2776.f_3[1]), &(Global_1946804->f_2776.f_3[2]), 0);
}

int func_103(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	bVar0 = false;
	bVar1 = true;
	if (uParam1->f_1 == 0)
	{
		return 0;
	}
	if (!func_204(iParam0, uParam1))
	{
		bVar1 = false;
	}
	iVar3 = uParam1->f_1;
	iVar2 = func_227(iVar3);
	if (iVar2 == -1)
	{
		iVar2 = 0;
	}
	if (iVar2 >= 0 && iVar2 <= 5)
	{
		bVar0 = true;
	}
	Global_1905941 = iVar2;
	func_228(Global_40.f_7729, 4096);
	func_229(&Global_1905941, 4096);
	Global_40.f_7729 = &Global_1905941;
	func_230(&(uParam1->f_1));
	iVar4 = -1;
	if (!bVar0)
	{
		iVar4 = func_231(uParam1->f_1);
	}
	func_232(&(Global_1946804->f_1497), iVar4, 0);
	func_233(iVar3, iParam0, bVar0, 1, bVar1, 0);
	func_234(iParam0);
	if (bParam2)
	{
		func_89(uParam1);
	}
	if (bParam3)
	{
		func_235();
	}
	if (bParam4)
	{
		if (bParam5)
		{
			func_236(0);
		}
		else
		{
			func_236(2048);
		}
	}
	return 1;
}

void func_104(var uParam0)
{
	uParam0->f_7 = { 2638.085f, -1222.06f, 52.3805f };
	uParam0->f_10 = { 2629.204f, -1222.544f, 58.79413f };
	uParam0->f_57 = { 2629.204f, -1222.544f, 58.79413f };
	uParam0->f_60 = { 2629.4f, -1223.33f, 58.57f };
	uParam0->f_63 = -92.66f;
	uParam0->f_64 = { 2632.809f, -1224.521f, 58.6209f };
	uParam0->f_67 = 215.0591f;
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_13))
	{
		uParam0->f_13 = VOLUME::_CREATE_VOLUME_BOX(2637.958f, -1222.703f, 53.34919f, 0f, 0f, 0f, 1.320784f, 1.459122f, 2.322307f);
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_14))
	{
		uParam0->f_14 = VOLUME::_CREATE_VOLUME_BOX(2632.001f, -1223.841f, 59.99991f, 0f, 0f, 0f, 1.308545f, 1.290041f, 1.933383f);
	}
	func_30(uParam0, 779421929, 1);
	uParam0->f_135.f_8 = joaat("a_f_m_sdfancywhore_01");
	uParam0->f_135.f_1 = { 2630.003f, -1220.47f, 58.5874f };
	uParam0->f_135.f_4 = 180.3602f;
	uParam0->f_135.f_5 = { 2633.394f, -1220.905f, 58.6208f };
	uParam0->f_144.f_8 = joaat("cs_bathingladies_01");
	uParam0->f_144.f_1 = { 2630.003f, -1220.47f, 58.5874f };
	uParam0->f_144.f_4 = 180.3602f;
}

void func_105(var uParam0)
{
	uParam0->f_7 = { -325.5526f, 772.9926f, 116.4359f };
	uParam0->f_10 = { -317.4529f, 761.7874f, 116.9925f };
	uParam0->f_57 = { -316.5032f, 761.952f, 117.0856f };
	uParam0->f_60 = { -317.37f, 761.8f, 116.44f };
	uParam0->f_63 = 10.365f;
	uParam0->f_64 = { -320.7008f, 762.7983f, 116.4364f };
	uParam0->f_67 = 27.6598f;
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_13))
	{
		uParam0->f_13 = VOLUME::_CREATE_VOLUME_BOX(-324.5964f, 774.3613f, 117.5638f, 0f, 0f, 10.75094f, 1.171861f, 1.219162f, 2.336554f);
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_14))
	{
		uParam0->f_14 = VOLUME::_CREATE_VOLUME_BOX(-319.7882f, 762.5787f, 117.8969f, 0f, 0f, 10.09051f, 3.165397f, 3.414144f, 3.011062f);
	}
	func_30(uParam0, 142240370, 1);
	uParam0->f_135.f_8 = joaat("a_f_m_valprostitute_01");
	uParam0->f_135.f_1 = { -315.477f, 762.7188f, 116.4363f };
	uParam0->f_135.f_4 = 111.4254f;
	uParam0->f_135.f_5 = { -320.5179f, 760.3262f, 116.4364f };
	uParam0->f_144.f_8 = joaat("cs_bathingladies_01");
	uParam0->f_144.f_1 = { -315.7786f, 763.2852f, 116.4364f };
	uParam0->f_144.f_4 = 151.0521f;
}

void func_106(var uParam0)
{
	uParam0->f_7 = { 2946.603f, 1318.259f, 45.14628f };
	uParam0->f_10 = { 2952.645f, 1334.748f, 43.49384f };
	uParam0->f_57 = { 2952.839f, 1335.296f, 43.84431f };
	uParam0->f_60 = { 2952.65f, 1334.7f, 43.44f };
	uParam0->f_63 = -291.27f;
	uParam0->f_64 = { 2949.637f, 1332.16f, 43.4443f };
	uParam0->f_67 = 73.8945f;
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_13))
	{
		uParam0->f_13 = VOLUME::_CREATE_VOLUME_BOX(2946.439f, 1318.296f, 45.71739f, 0f, 0f, 159.9526f, 1.28246f, 1.493367f, 2.783344f);
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_14))
	{
		uParam0->f_14 = VOLUME::_CREATE_VOLUME_BOX(2950.575f, 1332.514f, 44.5119f, 0f, 0f, -14.29171f, 1.4f, 1.4f, 2.139112f);
	}
	func_30(uParam0, -201071322, 1);
	uParam0->f_135.f_8 = joaat("a_f_m_asbtownfolk_01");
	uParam0->f_135.f_1 = { 2955.49f, 1331.573f, 43.1568f };
	uParam0->f_135.f_4 = 185.3309f;
	uParam0->f_144.f_8 = joaat("cs_bathingladies_01");
	uParam0->f_144.f_1 = { 2952.311f, 1331.225f, 43.4465f };
	uParam0->f_144.f_4 = 185.3309f;
}

void func_107(var uParam0)
{
	uParam0->f_7 = { -1817.711f, -370.8427f, 162.2963f };
	uParam0->f_10 = { -1812.751f, -373.2948f, 166.5692f };
	uParam0->f_57 = { -1812.181f, -372.9395f, 166.7563f };
	uParam0->f_60 = { -1812.83f, -373.23f, 165.5f };
	uParam0->f_63 = 1.206f;
	uParam0->f_64 = { -1817.074f, -372.382f, 165.4968f };
	uParam0->f_67 = 93.9386f;
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_13))
	{
		uParam0->f_13 = VOLUME::_CREATE_VOLUME_BOX(-1817.337f, -370.7124f, 163.2669f, 0f, 0f, 0f, 2.228559f, 1.483667f, 2.042569f);
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_14))
	{
		uParam0->f_14 = VOLUME::_CREATE_VOLUME_BOX(-1816.114f, -372.4831f, 166.5074f, 0f, 0f, 0f, 1f, 1.311546f, 2.179981f);
	}
	func_30(uParam0, 1256786197, 1);
	uParam0->f_135.f_8 = joaat("a_f_m_strtownfolk_01");
	uParam0->f_135.f_1 = { -1810.21f, -372.1555f, 165.4969f };
	uParam0->f_135.f_4 = 127.2134f;
	uParam0->f_135.f_5 = { -1820.372f, -371.0017f, 165.5055f };
	uParam0->f_144.f_8 = joaat("cs_bathingladies_01");
	uParam0->f_144.f_1 = { -1810.21f, -372.1555f, 165.4969f };
	uParam0->f_144.f_4 = 127.2134f;
}

void func_108(var uParam0)
{
	uParam0->f_7 = { -819.2906f, -1316.014f, 42.679f };
	uParam0->f_10 = { -823.8372f, -1318.777f, 42.72203f };
	uParam0->f_57 = { -824.5693f, -1318.995f, 43.08209f };
	uParam0->f_60 = { -823.86f, -1318.84f, 42.68f };
	uParam0->f_63 = -0.459f;
	uParam0->f_64 = { -821.5787f, -1315.662f, 42.6789f };
	uParam0->f_67 = 273.46f;
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_13))
	{
		uParam0->f_13 = VOLUME::_CREATE_VOLUME_BOX(-819.4305f, -1316.255f, 43.76577f, 0f, 0f, 0f, 2.259355f, 1.861202f, 2.249466f);
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_14))
	{
		uParam0->f_14 = VOLUME::_CREATE_VOLUME_BOX(-822.7465f, -1316.428f, 43.76577f, 0f, 0f, 0f, 1.756558f, 1.861202f, 2.249466f);
	}
	func_30(uParam0, 1523300673, 1);
	if (!func_124(815031507))
	{
		func_126(815031507, 1, 0f, 0, 0, 1f, 0, 0);
	}
	uParam0->f_135.f_8 = joaat("a_f_m_blwtownfolk_01");
	uParam0->f_135.f_1 = { -825.1937f, -1322.283f, 42.6788f };
	uParam0->f_135.f_4 = 7.8035f;
	uParam0->f_135.f_5 = { -822.2996f, -1322.037f, 42.6789f };
	uParam0->f_144.f_8 = joaat("cs_bathingladies_01");
	uParam0->f_144.f_1 = { -825.1937f, -1322.283f, 42.6788f };
	uParam0->f_144.f_4 = 7.8035f;
}

void func_109(var uParam0)
{
	uParam0->f_7 = { 2982.66f, 570.2827f, 45.2343f };
	uParam0->f_10 = { 2987.552f, 573.1801f, 47.9211f };
	uParam0->f_57 = { 2987.469f, 573.6002f, 47.37005f };
	uParam0->f_60 = { 2987.62f, 573.21f, 46.86f };
	uParam0->f_63 = 83.841f;
	uParam0->f_64 = { 2985.658f, 568.1716f, 46.8491f };
	uParam0->f_67 = 87.0336f;
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_13))
	{
		uParam0->f_13 = VOLUME::_CREATE_VOLUME_BOX(2982.743f, 570.4231f, 45.01115f, 0f, 0f, -8.056151f, 1.313431f, 1.930706f, 2.590498f);
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_14))
	{
		uParam0->f_14 = VOLUME::_CREATE_VOLUME_BOX(2986.364f, 568.9269f, 48.00531f, 0f, 0f, -10.72722f, 1.419141f, 1.607003f, 2.485681f);
	}
	func_30(uParam0, 1102743282, 1);
	uParam0->f_135.f_8 = joaat("a_f_m_vhtprostitute_01");
	uParam0->f_135.f_1 = { 2981.157f, 571.4192f, 46.7198f };
	uParam0->f_135.f_4 = 79.3133f;
	uParam0->f_135.f_5 = { 2982.519f, 567.5594f, 46.84f };
	uParam0->f_144.f_8 = joaat("cs_vht_bathgirl");
	uParam0->f_144.f_1 = { 2984.119f, 567.6183f, 46.8427f };
	uParam0->f_144.f_4 = 79.3133f;
}

void func_110(var uParam0)
{
	uParam0->f_7 = { 1341.261f, -1376.511f, 79.4836f };
	uParam0->f_10 = { 1337.061f, -1378.161f, 84.3447f };
	uParam0->f_57 = { 1337.098f, -1377.724f, 83.76834f };
	uParam0->f_60 = { 1336.85f, -1378.04f, 83.2897f };
	uParam0->f_63 = 166.469f;
	uParam0->f_64 = { 1339.949f, -1378.94f, 83.2813f };
	uParam0->f_67 = 348.7319f;
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_13))
	{
		uParam0->f_13 = VOLUME::_CREATE_VOLUME_BOX(1341.261f, -1376.511f, 80.12514f, 0f, 0f, 44.7794f, 1.630602f, 1.866527f, 2.368827f);
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_14))
	{
		uParam0->f_14 = VOLUME::_CREATE_VOLUME_BOX(1339.067f, -1379.314f, 84.4303f, 0f, 0f, -10.995f, 2.231479f, 2.405224f, 2.365758f);
	}
	func_30(uParam0, -1847993131, 1);
	uParam0->f_135.f_8 = joaat("a_f_m_rhdprostitute_01");
	uParam0->f_135.f_1 = { 1331.792f, -1372.289f, 83.2976f };
	uParam0->f_135.f_4 = 236.4728f;
	uParam0->f_135.f_5 = { 1341.114f, -1376.192f, 83.2813f };
	uParam0->f_144.f_8 = joaat("cs_bathingladies_01");
	uParam0->f_144.f_1 = { 1336.905f, -1372.9f, 83.2893f };
	uParam0->f_144.f_4 = 236.4728f;
}

void func_111(var uParam0)
{
	uParam0->f_7 = { -5508.501f, -2963.09f, -1.6307f };
	uParam0->f_10 = { -5513.75f, -2972.575f, -1.72857f };
	uParam0->f_57 = { -5512.97f, -2972.266f, -1.35402f };
	uParam0->f_60 = { -5513.76f, -2972.3f, -1.78f };
	uParam0->f_63 = 15f;
	uParam0->f_64 = { -5520.461f, -2973.847f, -1.7623f };
	uParam0->f_67 = 86.7615f;
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_13))
	{
		uParam0->f_13 = VOLUME::_CREATE_VOLUME_BOX(-5508.227f, -2963.033f, -1.169532f, 0f, 0f, 14.7478f, 1.694336f, 1.81908f, 2.241587f);
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_14))
	{
		uParam0->f_14 = VOLUME::_CREATE_VOLUME_BOX(-5518.046f, -2973.222f, -1.7817f, 0f, 0f, 106.1408f, 1.643605f, 1.522556f, 2.447214f);
	}
	func_30(uParam0, 1682160693, 1);
	func_30(uParam0, 1423877126, 0);
	uParam0->f_135.f_8 = joaat("a_f_m_tumtownfolk_01");
	uParam0->f_135.f_1 = { -5512.163f, -2970.712f, -1.7814f };
	uParam0->f_135.f_4 = 171.2193f;
	uParam0->f_135.f_5 = { -5516.737f, -2970.222f, -1.7763f };
	uParam0->f_144.f_8 = joaat("cs_bathingladies_01");
	uParam0->f_144.f_1 = { -5512.163f, -2970.712f, -1.7814f };
	uParam0->f_144.f_4 = 171.2193f;
}

int func_112(bool bParam0, var uParam1, var uParam2)
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

var func_113(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	struct<7> Var0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = sParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_237(uParam0, &Var0);
}

int func_114(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = func_238(iParam0, iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_AN_OBJECT(iVar0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) && !bParam2)
	{
		return 0;
	}
	return iVar0;
}

int func_115(int iParam0, int iParam1)
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

void func_116(bool bParam0)
{
	if (bParam0)
	{
		func_239(4);
	}
	func_239(2);
	MISC::SET_BIT(&(Global_1956578->f_1), 0);
}

void func_117(var uParam0)
{
	if ((((AUDIO::IS_AMBIENT_SPEECH_PLAYING(uParam0->f_144) || AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35)) || iLocal_24) || iLocal_34) || iLocal_77 == 1)
	{
		if (func_28(iLocal_17))
		{
			func_65(iLocal_17, 0, 1);
		}
		if (func_28(iLocal_16))
		{
			func_65(iLocal_16, 0, 1);
		}
	}
	else
	{
		if (func_28(iLocal_17))
		{
			func_65(iLocal_17, 1, 1);
		}
		if (func_28(iLocal_16))
		{
			func_65(iLocal_16, 1, 1);
		}
	}
	if (iLocal_44 > 7)
	{
		if (func_28(iLocal_17))
		{
			func_29(&iLocal_17, 1, 1);
		}
	}
}

int func_118(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
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
		if (func_240(iVar0, 2))
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
		func_241(iVar1, iParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 1065353216, 0, 0, 0, iParam10, bParam11);
		return iVar1;
	}
	return 0;
}

bool func_119(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_28(iParam0))
	{
		return false;
	}
	iVar0 = func_121(iParam0);
	if (HUD::_0xCD072523791DDC1B(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_120(var uParam0)
{
	if (iLocal_34 == 0)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_52) > 18000)
		{
			if (iLocal_44 > 3)
			{
				func_24(uParam0, "CHAT_BATH_LEVEL2", 0);
			}
			else
			{
				func_24(uParam0, "CHAT_BATH_LEVEL1", 0);
			}
			iLocal_52 = MISC::GET_GAME_TIMER();
		}
		if (func_170(iLocal_17, 1))
		{
			func_242();
			iLocal_34 = 1;
			iLocal_35 = 0;
			func_61(uParam0, &Local_36);
			iLocal_52 = MISC::GET_GAME_TIMER();
		}
	}
	else if (iLocal_35 == 0)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_52) > 4000 && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35))
		{
			func_24(uParam0, &Local_40, 0);
			iLocal_52 = MISC::GET_GAME_TIMER();
			iLocal_35 = 1;
			iLocal_44++;
		}
	}
	else if ((MISC::GET_GAME_TIMER() - iLocal_52) > 3500)
	{
		iLocal_34 = 0;
		iLocal_35 = 0;
		func_61(uParam0, "SIGH");
	}
}

int func_121(int iParam0)
{
	return iParam0;
}

void func_122(int iParam0)
{
	if (!func_243(iParam0))
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

bool func_123(int iParam0)
{
	return iParam0 != 0;
}

int func_124(int iParam0)
{
	func_244(iParam0, 0, 0);
	if (func_245(iParam0))
	{
		return (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) == 2 || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) == 1);
	}
	return 0;
}

bool func_125(int iParam0)
{
	return func_246(iParam0, 23);
}

void func_126(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_244(iParam0, 0, 0);
	if (func_245(iParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, iParam2, iParam6);
		if (fParam5 > 0f)
		{
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_247(iParam0, iParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_248(iParam0, 1);
			}
			else
			{
				func_249(iParam0, 1);
			}
		}
		else
		{
			func_250(iParam0, 1);
		}
		if (bParam7)
		{
			OBJECT::_0x276AAF0F1C7F2494(iParam0, 1);
		}
	}
	else if (func_251())
	{
	}
	else if (NETWORK::NETWORK_IS_IN_SESSION())
	{
	}
}

bool func_127(int iParam0, int iParam1)
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

void func_128(int iParam0)
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

void func_129(var uParam0)
{
	func_252(uParam0, 0f);
}

int func_130(int iParam0, bool bParam1, int iParam2)
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
		if (func_253())
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
		iVar0 = func_254(&(Global_1898164->f_1[0 /*5*/]));
		if (func_255(iVar0) && func_256(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_257(&(Global_1898164->f_1[0 /*5*/])))
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

int func_131(int iParam0)
{
	if (!func_257(iParam0))
	{
		return -1;
	}
	return func_258(iParam0);
}

int func_132()
{
	if (func_259(31))
	{
		return 1;
	}
	return 0;
}

bool func_133(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

int func_134(int iParam0)
{
	if (!func_260(iParam0))
	{
		return 0;
	}
	return func_261(iParam0, 33554432);
}

bool func_135(int iParam0, int iParam1)
{
	return PED::_0x34D6AC1157C8226C(iParam0, iParam1);
}

int func_136()
{
	return Global_1572887->f_12;
}

bool func_137(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_138(var uParam0)
{
	return func_137(*uParam0, 2);
}

float func_139()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_140(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

void func_141(int iParam0)
{
	struct<2> Var0;

	if (iParam0 <= 0)
	{
		return;
	}
	if (func_169(1) < iParam0)
	{
		iParam0 = func_169(1);
	}
	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	Var0 = { func_79(1644987397) };
	STATS::_0xBD861AE8A5181ED7(&Var0, iParam0);
}

void func_142(int iParam0, char* sParam1, var uParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_262(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

bool func_143(int iParam0)
{
	return func_192(iParam0) == -1784221369;
}

int func_144(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_136() == 0)
	{
		return 1;
	}
	func_263(&(Global_20709.f_1126), iParam1, iParam0, iParam2);
	iVar0 = func_264(iParam0);
	if (iVar0 >= 25 || iVar0 <= -1)
	{
		return 0;
	}
	func_265(&((Global_20709[iVar0 /*45*/])->f_2), iParam1, iParam0, iParam2);
	return 1;
}

void func_145(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_146(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_266(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

int func_147()
{
	return Global_1310750->f_16037;
}

bool func_148(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

bool func_149(int iParam0, int iParam1)
{
	if (!func_148(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/] && iParam1) != 0;
}

int func_150(int iParam0)
{
	if (!func_148(iParam0))
	{
		return 0;
	}
	if (func_267(64) && func_268(iParam0))
	{
		return 1;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_46;
}

int func_151(int iParam0)
{
	if (!func_148(iParam0))
	{
		return 0;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_47;
}

void func_152(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_148(&(Global_1310750->f_13321[iParam0 /*9*/])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID((Global_1310750->f_13321[iParam0 /*9*/])->f_5, 523);
	((*Global_1310750)[iVar0 /*111*/])->f_48 = 0;
	func_269(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

bool func_153(int iParam0)
{
	int iVar0;

	iVar0 = 6;
	if (func_101(iParam0))
	{
		iVar0 = _NAMESPACE71::_0x59FA676177DBE4C9(iParam0);
	}
	return iVar0 != 6;
}

bool func_154(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_155(int iParam0, int iParam1)
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

int func_156(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	struct<37> Var0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return 0;
	}
	if (!func_159(iParam0, 0))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(iParam0, iParam1, &Var0))
	{
		if (!bParam5)
		{
		}
		return 0;
	}
	if (!bParam5)
	{
	}
	*iParam3 = Var0.f_3;
	iVar47 = 0;
	while (iVar47 < Var0.f_3)
	{
		if (!bParam5)
		{
		}
		*((*uParam2)[iVar47 /*2*/]) = { *(Var0.f_4[iVar47 /*2*/]) };
		iVar47++;
	}
	if (bParam4)
	{
		func_270(iParam0, iParam1, uParam2, *iParam3);
	}
	return 1;
}

int func_157(int iParam0, int iParam1)
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

int func_158(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 < 0)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= ITEMDATABASE::_0xD389A2549C4EFB30(iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	if (!ITEMDATABASE::_0x8750F69A720C2E41(iParam1, iParam0, &iVar0))
	{
		return 0;
	}
	return iVar0;
}

int func_159(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_160(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_161(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == func_271(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (func_272(iParam0))
	{
		if (func_273(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			PHYSICS::_0x0348469DAA17576C(iParam0);
		}
	}
	if (func_154(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_161(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_161(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_154(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 0, 1);
		}
	}
	if (func_154(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			ENTITY::_0x203BEFFDBE12E96A(iParam0, vParam1, fParam4, 1, func_154(iParam5, 32), 1);
		}
		else
		{
			ENTITY::_0x203BEFFDBE12E96A(iParam0, vParam1, fParam4, 1, func_154(iParam5, 32), 1);
			ENTITY::_0x9587913B9E772D29(iParam0, 0);
		}
	}
	else if (func_154(iParam5, 129))
	{
		if (func_154(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0, vParam1, func_154(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
	}
	else
	{
		ENTITY::_0x203BEFFDBE12E96A(iParam0, vParam1, fParam4, 1, func_154(iParam5, 32), 1);
	}
	if (bVar4)
	{
		if (!func_154(iParam5, 16))
		{
			PED::_0x7DE9692C6F64CFE8(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3, 0, 0);
		}
		if (func_272(iParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PHYSICS::_0x0348469DAA17576C(iVar6);
			if (!func_154(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, 1, 0);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PACKAGE_INDEX(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 1);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0) == Global_35 && !func_154(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
}

char* func_162(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

void func_163(int iParam0, bool bParam1, int iParam2, char* sParam3)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_8, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_7, iParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_9, sParam3);
}

void func_164(bool bParam0, bool bParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_274(0, 1, bParam0, bParam1);
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

int func_165(int iParam0)
{
	float fVar0;

	fVar0 = (BUILTIN::TO_FLOAT(iParam0 + 100) / 200f);
	return BUILTIN::CEIL((100f * fVar0));
}

void func_166()
{
	func_275();
	func_276();
	func_277();
}

int func_167(char* sParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, bool bParam16)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_0xBC0884BC590951C7(iParam1, 0))
	{
		return 0;
	}
	if (func_160(vParam2))
	{
		return 0;
	}
	if (fParam5 <= 0f)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_240(iVar0, 2))
		{
			if (func_278(vParam2, ((*Global_1945938)[iVar0 /*18*/])->f_6, 0.01f, 1) && iParam1 == ((*Global_1945938)[iVar0 /*18*/])->f_4)
			{
				iVar2 = iVar0;
				return iVar2;
			}
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_241(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216, 0, 0, 0, iParam15, bParam16);
		return iVar1;
	}
	return 0;
}

void func_168(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	int iVar0;

	if (iParam3 && !func_28(iParam0))
	{
		return;
	}
	iVar0 = func_121(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, MISC::_CREATE_VAR_STRING(2, sParam1, sParam2));
}

int func_169(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

bool func_170(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_28(iParam0))
	{
		return false;
	}
	iVar0 = func_121(iParam0);
	return HUD::_UIPROMPT_IS_JUST_PRESSED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

int func_171(int iParam0, int iParam1)
{
	int iVar0;

	if (func_136() == 0)
	{
		return 1;
	}
	if (!func_159(iParam1, 0))
	{
		return 0;
	}
	iVar0 = func_264(iParam0);
	if (iVar0 >= 25 || iVar0 <= -1)
	{
		return 0;
	}
	Global_20709[iVar0 /*45*/] = iParam1;
	return 1;
}

int func_172(int iParam0, int iParam1)
{
	int iVar0;

	if (func_136() == 0)
	{
		return 1;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_264(iParam0);
	if (iVar0 >= 25 || iVar0 <= -1)
	{
		return 0;
	}
	func_80(func_79(19354810), iParam1);
	(Global_20709[iVar0 /*45*/])->f_43 = ((Global_20709[iVar0 /*45*/])->f_43 + iParam1);
	return 1;
}

int func_173(int iParam0, int iParam1)
{
	int iVar0;

	if (func_136() == 0)
	{
		return 1;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_264(iParam0);
	if (iVar0 >= 25 || iVar0 <= -1)
	{
		return 0;
	}
	(Global_20709[iVar0 /*45*/])->f_44 = ((Global_20709[iVar0 /*45*/])->f_44 + iParam1);
	return 1;
}

int func_174(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1391860027;
		case 3:
			return -2049683567;
		case 4:
			return -1639750081;
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
		case 26:
			return -1433937760;
		case 27:
			return -681691620;
		case 28:
			return -706234936;
		case 29:
			return -282099500;
		case 30:
			return 1450105278;
		case 31:
			return -732027686;
		case 5:
			return 379756162;
		case 15:
			return 2128397741;
		case 17:
			return -924263120;
		case 33:
			return 1915478031;
		case 12:
			return -1775364220;
		case 13:
			return -1504845897;
		case 14:
			return -1227686818;
		case 18:
			return 1442571063;
		case 19:
			return -997221403;
		case 22:
			return 285759500;
		case 20:
			return 1489861748;
		case 32:
			return -2132712788;
		case 34:
			return 1427539511;
		case 23:
			return -967055532;
		case 24:
			return 662159626;
		case 25:
			return 1743191502;
		case 21:
			return -830712656;
		default:
			break;
	}
	return 0;
}

int func_175(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return 443958153;
		case 8:
			return 1035357148;
		case 9:
			return -990591911;
		case 17:
			return 1434435999;
		case 13:
			return 914613127;
		case 14:
			return 277114628;
		case 15:
			return -441298053;
		case 108:
			return 1671261677;
		case 12:
			return -2008988392;
		case 16:
			return -1779570775;
		case 106:
			return 1866591384;
		case 107:
			return -810797676;
		case 6:
			return 1591504033;
		case 10:
			return -1481022983;
		case 11:
			return -200160067;
		case 19:
			return 213861089;
		case 20:
			return 187124199;
		case 21:
			return -1639286351;
		case 18:
			return 1244472740;
		case 105:
			return -1711647719;
		case 22:
			return -184950877;
		case 118:
			return 354888782;
		case 39:
			return -922179383;
		case 42:
			return 877339314;
		case 41:
			return 327042733;
		case 43:
			return -1159824322;
		case 36:
			return 187784199;
		case 37:
			return 156869848;
		case 38:
			return 959980967;
		case 40:
			return 268171375;
		case 44:
			return -605457855;
		case 45:
			return -967272484;
		case 46:
			return 253446434;
		case 47:
			return -24930371;
		case 55:
			return -491616406;
		case 111:
			return 806137889;
		case 48:
			return 683812333;
		case 49:
			return 1055138492;
		case 50:
			return -1673339528;
		case 53:
			return 1428271505;
		case 54:
			return -2132681852;
		case 51:
			return 641024601;
		case 109:
			return 1479356600;
		case 110:
			return -1608228131;
		case 52:
			return 1700741106;
		case 23:
			return -768596287;
		case 24:
			return -1789795772;
		case 28:
			return 986912071;
		case 27:
			return 312948291;
		case 29:
			return 770563571;
		case 30:
			return 288839560;
		case 26:
			return 399352507;
		case 31:
			return -1241147617;
		case 113:
			return 399096998;
		case 32:
			return -483073269;
		case 112:
			return 1576805996;
		case 25:
			return -1427623397;
		case 33:
			return 305555540;
		case 60:
			return 2080716288;
		case 61:
			return 922959422;
		case 62:
			return 1948709075;
		case 63:
			return 599204508;
		case 65:
			return -362796541;
		case 115:
			return -1178912317;
		case 64:
			return -1575046645;
		case 114:
			return -176953214;
		case 66:
			return -1992095599;
		case 73:
			return 646741747;
		case 74:
			return -773037432;
		case 75:
			return 1444751354;
		case 69:
			return 709943351;
		case 77:
			return 731746260;
		case 76:
			return 405856312;
		case 72:
			return -1749578899;
		case 78:
			return 1581089825;
		case 104:
			return -883880335;
		case 71:
			return 1124822890;
		case 81:
			return 1618521465;
		case 80:
			return -1675300716;
		case 79:
			return -442258411;
		case 102:
			return 1665083003;
		case 103:
			return 810431028;
		case 68:
			return 1161446575;
		case 70:
			return -406930559;
		case 35:
			return 1523596125;
		case 86:
			return -372049939;
		case 85:
			return 226213668;
		case 82:
			return 1437804895;
		case 117:
			return 430529746;
		case 84:
			return -1254552445;
		case 83:
			return 1526480524;
		case 116:
			return 644508980;
		case 1:
			return 1628277480;
		case 120:
			return -1985767496;
		case 0:
			return 1117878254;
		case 2:
			return 622553269;
		case 3:
			return -1934358691;
		case 121:
			return 962619556;
		case 89:
			return 94750187;
		case 87:
			return 545745902;
		case 88:
			return 1875117241;
		case 101:
			return -1861588330;
		case 126:
			return -1079912632;
		case 127:
			return -1624899219;
		case 124:
			return 646944986;
		case 149:
			return 1712034773;
		case 150:
			return 1084233913;
		case 151:
			return -1628307596;
		case 152:
			return 1244193358;
		case 128:
			return -268420964;
		case 129:
			return -283845926;
		case 130:
			return 76731659;
		case 131:
			return 2141489518;
		case 59:
			return 1529797091;
		case 132:
			return 1120323763;
		case 133:
			return -1951530479;
		case 134:
			return 2034257465;
		case 135:
			return 278587369;
		case 57:
			return 1388932648;
		case 137:
			return 1467401843;
		case 138:
			return -1049737591;
		case 139:
			return 1175719437;
		case 140:
			return 2115547696;
		case 56:
			return 878376253;
		case 141:
			return -508879537;
		case 142:
			return -654369397;
		case 143:
			return 1573058547;
		case 144:
			return 1753151614;
		case 145:
			return -2113647360;
		case 146:
			return 1337275619;
		case 147:
			return -237650722;
		case 148:
			return 283754781;
		case 58:
			return -2076086367;
		case 136:
			return -487054121;
		case 119:
			return 551011289;
		case 122:
			return -647250101;
		case 95:
			return -1769964380;
		case 97:
			return -1464928880;
		case 96:
			return 1315212395;
		case 90:
			return -1495157302;
		case 93:
			return -2140031237;
		case 91:
			return -1829807698;
		case 92:
			return 186603357;
		case 94:
			return -1575817877;
		case 98:
			return 1087483310;
		case 125:
			return -552506176;
		case 123:
			return -614248279;
		case 99:
			return 441769767;
		case 100:
			return 1318049946;
		case 4:
			return 548657065;
		case 5:
			return 243086140;
		case 34:
			return -305029900;
		case 67:
			return 1008537949;
		default:
			break;
	}
	return 0;
}

int func_176()
{
	if (func_136() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == 11966224)
	{
		return 1;
	}
	return 0;
}

bool func_177(int iParam0, int iParam1)
{
	if (iParam1 && !func_28(iParam0))
	{
		return false;
	}
	return !func_240(iParam0, 4);
}

int func_178(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_28(iParam0))
	{
		return 0;
	}
	iVar0 = func_121(iParam0);
	return HUD::_0xB0E8599243B3F568(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

float func_179(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

void func_180(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;

	if (func_136() != -1)
	{
		return;
	}
	if (!func_279(15))
	{
		return;
	}
	Global_40.f_11095[iParam0] = fParam1;
	iVar0 = func_165(BUILTIN::CEIL(&(Global_40.f_11095[iParam0])));
	ATTRIBUTE::_0xC6258F41D86676E0(Global_35, func_280(iParam0), iVar0);
	func_282(func_281(iParam0), (100f * (BUILTIN::TO_FLOAT(iVar0) / 100f)), 0);
	if (((fParam1 <= func_283(15) && iParam0 == 1) && PED::IS_PED_ON_FOOT(Global_35)) && !PED::IS_PED_SWIMMING(Global_35))
	{
		func_284(84, 1);
	}
	if (fParam1 <= -99.999f)
	{
		func_284(func_285(iParam0), 1);
	}
	sVar1 = func_286(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		PED::_0x437C08DB4FEBE2BD(Global_35, sVar1, BUILTIN::TO_FLOAT(iVar0), -1);
	}
}

void func_181(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 - (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1));
}

void func_182(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		if (((*Global_1945938)[iParam0 /*18*/])->f_5 == 5 && !func_240(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, 0);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
		}
	}
}

void func_183(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
	}
}

void func_184(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 || iParam1);
}

int func_185()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

float func_186(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_28(iParam0))
	{
		return 0f;
	}
	iVar0 = func_121(iParam0);
	if (HUD::_0xCD072523791DDC1B(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return HUD::_UIPROMPT_GET_MASH_MODE_PROGRESS(((*Global_1945938)[iVar0 /*18*/])->f_3);
	}
	return HUD::_0x81801291806DBC50(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_187(var uParam0)
{
	uParam0->f_113 = 4;
	uParam0->f_18 = 1;
}

void func_188(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		fParam1 = func_190(iParam0, fParam1, 1);
	}
	func_288(iParam0, (func_287(iParam0, 2) + fParam1), bParam2, bParam3, 1, 2);
}

void func_189(float fParam0)
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

float func_190(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_206();
	func_289(&iVar0, 0, 0, 0, 1, 0, 0);
	iVar1 = func_290(iParam0, 2);
	if (func_209(iVar0, func_291(iParam0, 2), 1))
	{
		func_292(iParam0, 0, 2);
		iVar1 = 0;
	}
	if (iVar1 >= 2)
	{
		func_284(88, bParam2);
		return 0f;
	}
	func_293(iParam0, func_206(), 2);
	func_292(iParam0, iVar1 + 1, 2);
	return fParam1;
}

float func_191(float fParam0, float fParam1, float fParam2)
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

int func_192(int iParam0)
{
	vector3 vVar0;

	if (!func_159(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

float func_193(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;

	if (iParam1 == -1)
	{
		fVar3 = (fVar2 - fVar1);
		return (fVar3 / 2f);
	}
	switch (iParam0)
	{
		case 0:
			fVar1 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(Global_35));
			fVar2 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, 0));
			iVar0 = 50;
			break;
		case 1:
			fVar1 = PED::_0x775A1CA7893AA8B5(Global_35);
			fVar2 = PED::_0xCB42AFE2B613EE55(Global_35);
			iVar0 = 8;
			break;
		case 2:
			fVar1 = PLAYER::_0xA81D24AE0AF99A5E(PLAYER::GET_PLAYER_INDEX());
			fVar2 = PLAYER::_0x592F58BC4D2A2CF3(PLAYER::GET_PLAYER_INDEX(), 0);
			iVar0 = 14;
			break;
	}
	fVar4 = (IntToFloat((iVar0 * iParam1)) + fVar1);
	if (fVar4 > fVar2)
	{
		fVar3 = (fVar2 - fVar1);
	}
	else
	{
		fVar3 = (fVar4 - fVar1);
	}
	return (fVar3 / 2f);
}

void func_194(int iParam0, int iParam1)
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

void func_195(int iParam0, int iParam1)
{
	Global_1347477->f_9[iParam0 /*2*/] = (MISC::GET_GAME_TIMER() + iParam1);
}

void func_196(int iParam0)
{
	PLAYER::_0x51345AE20F22C261(PLAYER::PLAYER_ID(), BUILTIN::TO_FLOAT(iParam0 * 14), 0, 0, 0);
}

float func_197(int iParam0, float fParam1)
{
	return func_294(BUILTIN::TO_FLOAT(iParam0), fParam1);
}

int func_198(var uParam0, var uParam1, float fParam2)
{
	if (func_136() != -1)
	{
		return 1;
	}
	if (!func_295(0))
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
		func_113(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
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
			func_284(0, 1);
			Global_1347477->f_191.f_2 = (MISC::GET_GAME_TIMER() + 480000);
		}
		func_113(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
		*uParam1 = 1;
		return 0;
	}
	Global_1347477->f_191 = (MISC::GET_GAME_TIMER() + 480000);
	*uParam1 = 0;
	return 1;
}

void func_199(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;

	if (func_136() == 0)
	{
		func_188(0, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_179(0);
	if (bParam1)
	{
		func_189(fVar0);
	}
	if (fVar0 >= (100f - 1f))
	{
		func_296();
	}
	if (bParam2)
	{
		fParam0 = func_190(0, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_180(0, func_191(fParam0, -100f, 100f), bParam1);
}

void func_200(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;

	if (func_136() == 0)
	{
		func_188(2, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_179(2);
	if (bParam1)
	{
		func_189(fVar0);
	}
	if (bParam2)
	{
		fParam0 = func_190(2, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_180(2, func_191(fParam0, -100f, 100f), bParam1);
}

float func_201(float fParam0, int iParam1)
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

void func_202(int iParam0, float fParam1)
{
	int iVar0;
	char* sVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (fParam1 == -1f)
	{
		if (func_297(iParam0))
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
			sVar1 = func_298(iParam0);
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar1))
			{
				GRAPHICS::ANIMPOSTFX_PLAY(sVar1);
			}
			func_299(-1);
			func_300(0);
			ATTRIBUTE::_0xF6A7C08DF2E28B28(iVar0, iParam0, fParam1, 1);
			Global_40.f_11095.f_4[0 /*2*/] = fParam1;
			break;
		case 1:
			sVar1 = func_298(iParam0);
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar1))
			{
				GRAPHICS::ANIMPOSTFX_PLAY(sVar1);
			}
			func_301(-1);
			ATTRIBUTE::_0xF6A7C08DF2E28B28(iVar0, iParam0, fParam1, 1);
			Global_40.f_11095.f_4[1 /*2*/] = fParam1;
			break;
		case 2:
			sVar1 = func_298(iParam0);
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar1))
			{
				GRAPHICS::ANIMPOSTFX_PLAY(sVar1);
			}
			func_302(-1);
			ATTRIBUTE::_0xF6A7C08DF2E28B28(iVar0, iParam0, fParam1, 1);
			Global_40.f_11095.f_4[2 /*2*/] = fParam1;
			break;
		case 19:
			func_303(0, 1, 1);
			ATTRIBUTE::_0xF6A7C08DF2E28B28(iVar0, iParam0, fParam1, 1);
			(Global_40.f_11095.f_4[0 /*2*/])->f_1 = fParam1;
			break;
		case 18:
			func_303(1, 1, 1);
			ATTRIBUTE::_0xF6A7C08DF2E28B28(iVar0, iParam0, fParam1, 1);
			(Global_40.f_11095.f_4[1 /*2*/])->f_1 = fParam1;
			break;
		case 20:
			func_303(2, 1, 1);
			ATTRIBUTE::_0xF6A7C08DF2E28B28(iVar0, iParam0, fParam1, 1);
			(Global_40.f_11095.f_4[2 /*2*/])->f_1 = fParam1;
			break;
		default:
			break;
	}
}

void func_203(float fParam0, bool bParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;

	fVar0 = func_304(13);
	if (fParam0 > 10f)
	{
		fParam0 = 10f;
	}
	if (!func_279(17))
	{
		return;
	}
	if (func_305())
	{
		iVar1 = func_306(fVar0);
		fVar0 = (fVar0 + fParam0);
		iVar2 = func_306(fVar0);
		if (iVar1 != iVar2)
		{
			Global_1347477->f_195 = func_206();
			func_208(&(Global_1347477->f_195), 0, 0, 1, 0, 0, 0, 0);
		}
		func_307(&fVar3, &fVar4);
		func_56(13, func_191(fVar0, fVar3, fVar4));
	}
	if (bParam1)
	{
		Global_40.f_11095.f_66++;
		if (5 == Global_40.f_11095.f_66)
		{
			func_284(94, 0);
		}
	}
}

bool func_204(int iParam0, var uParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return true;
	}
	if (uParam1->f_1 == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < uParam1->f_134)
	{
		if (!PED::_0xB0B2C6D170B0E8E5(&(uParam1->f_135[iVar0 /*2*/])))
		{
			return false;
		}
		iVar0++;
	}
	return PED::_0xA0BC8FAED8CFEB3C(iParam0);
}

void func_205(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

int func_206()
{
	return &Global_1899515;
}

int func_207(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_208(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_308(*iParam0);
	iVar1 = func_309(*iParam0);
	iVar2 = func_310(*iParam0);
	iVar3 = func_311(*iParam0);
	iVar4 = func_312(*iParam0);
	iVar5 = func_313(*iParam0);
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
	iVar6 = func_314(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_314(iVar1, iVar0);
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
	func_315(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_209(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_316(iParam1) || !func_316(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_210(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_211()
{
	return 1;
	if (Global_1572887->f_12 == 0)
	{
		return 1;
	}
	return Global_40.f_1;
}

struct<8> func_212(var uParam0)
{
	switch (uParam0->f_6)
	{
		case 5:
			return func_317("script@mini_game@bathing@BATHING_INTRO_OUTRO_ST_DENIS");
		case 76:
			return func_317("script@mini_game@bathing@BATHING_INTRO_OUTRO_VALENTINE");
		case 78:
			return func_317("script@mini_game@bathing@BATHING_INTRO_OUTRO_ANNESBURG");
		case 26:
			return func_317("script@mini_game@bathing@BATHING_INTRO_OUTRO_STRAWBERRY");
		case 38:
			return func_317("script@mini_game@bathing@BATHING_INTRO_OUTRO_BLACKWATER");
		case 92:
			return func_317("script@mini_game@bathing@BATHING_INTRO_OUTRO_VANHORN");
		case 105:
			return func_317("script@mini_game@bathing@BATHING_INTRO_OUTRO_RHODES");
		case 115:
			return func_317("script@mini_game@bathing@BATHING_INTRO_OUTRO_TUMBLEWEED");
	}
	return func_317("");
}

void func_213(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_214(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar0 = func_93(iParam1);
	if (iParam4 != 0)
	{
		iVar0 = iParam4;
	}
	else if (iParam1 > -1 && iParam1 <= 5)
	{
		iVar0 = func_318(iParam1);
	}
	if ((iParam3 && func_319(iParam1, 4096)) && Global_1946804->f_1497 == iParam4)
	{
		return 1;
	}
	Global_1905941 = iParam1;
	if ((iParam1 > 5 || iParam4 != 0) && !func_95(iVar0, Global_1946804->f_1))
	{
		return 0;
	}
	if (bParam2)
	{
		func_228(Global_40.f_7729, 4096);
		func_229(&Global_1905941, 4096);
		Global_40.f_7729 = &Global_1905941;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		func_320(iParam0);
	}
	func_235();
	if (!func_321(iParam1))
	{
		func_233(iVar0, iParam0, func_322(iParam1), 1, 0, 1);
	}
	func_234(iParam0);
	return 1;
}

void func_215()
{
	iLocal_53 = 0;
	if (func_2() == 92 && &Global_1357513 == 0)
	{
		Global_1357513 = &Global_1357513 + 1;
		iLocal_53 = 1;
	}
	else
	{
		if (func_176())
		{
			if (&Global_1357512 == 0)
			{
				Global_1357512 = &Global_1357512 + 1;
				iLocal_53 = 1;
			}
			else
			{
				Global_1357512 = &Global_1357512 + 1;
				iLocal_53 = 0;
			}
		}
		if (func_77())
		{
			if (&Global_1357511 == 0)
			{
				Global_1357511 = &Global_1357511 + 1;
				iLocal_53 = 1;
			}
			else
			{
				Global_1357511 = &Global_1357511 + 1;
				iLocal_53 = 0;
			}
		}
	}
}

void func_216(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;

	if (bParam4)
	{
		func_205(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_323(Var0);
}

void func_217(var uParam0)
{
	if (uParam0->f_15 == 0)
	{
		switch (uParam0->f_115)
		{
			case 1:
				if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(&(uParam0->f_120[0])))
				{
					uParam0->f_120[0] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_PED_BONE("scr_mg_bathing_foam_head", Global_35, 0f, 0f, 0f, 0f, 0f, 0f, 21030, 0.4f, false, false, false);
				}
				if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(&(uParam0->f_120[5])))
				{
					uParam0->f_120[5] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_PED_BONE("scr_mg_bathing_foam_torso", Global_35, 0f, 0f, 0f, 0f, 0f, 0f, 14412, 0.4f, false, false, false);
				}
				break;
			case 2:
				if (uParam0->f_36 >= 1)
				{
					if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(&(uParam0->f_120[4])))
					{
						uParam0->f_120[4] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_PED_BONE("scr_mg_bathing_foam_forearm", Global_35, 0f, 0f, 0f, 0f, 0f, 0f, 53675, 0.5f, false, false, false);
					}
					if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(&(uParam0->f_120[2])))
					{
						uParam0->f_120[2] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_PED_BONE("scr_mg_bathing_foam_upperarm", Global_35, 0f, 0f, 0f, 0f, 0f, 0f, 37873, 0.6f, false, false, false);
					}
				}
				else
				{
					if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(&(uParam0->f_120[1])))
					{
						uParam0->f_120[1] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_PED_BONE("scr_mg_bathing_foam_upperarm", Global_35, 0f, 0f, 0f, 0f, 0f, 0f, 46065, 0.6f, false, false, false);
					}
					if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(&(uParam0->f_120[3])))
					{
						uParam0->f_120[3] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_PED_BONE("scr_mg_bathing_foam_forearm", Global_35, 0f, 0f, 0f, 0f, 0f, 0f, 54187, 0.5f, false, false, false);
					}
				}
				break;
			case 3:
				if (uParam0->f_37 >= 1)
				{
					if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(&(uParam0->f_120[7])))
					{
						uParam0->f_120[7] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_PED_BONE("scr_mg_bathing_foam_upperarm", Global_35, 0f, 0f, 0f, 0f, 0f, 0f, 6884, 1.5f, false, false, false);
					}
				}
				else if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(&(uParam0->f_120[8])))
				{
					uParam0->f_120[8] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_PED_BONE("scr_mg_bathing_foam_upperarm", Global_35, 0f, 0f, 0f, 0f, 0f, 0f, 65478, 1.5f, false, false, false);
				}
				break;
		}
	}
}

int func_218(int iParam0, int iParam1)
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

int func_219(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_94();
	}
	if (func_136() == -1)
	{
		if (iParam0 == 1160113249)
		{
			iVar0 = 1583685020;
		}
		else
		{
			iVar0 = -572793833;
		}
	}
	else
	{
		iVar0 = -2109211296;
	}
	return iVar0;
}

void func_220(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

int func_221(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam2 != 0 && func_318(iParam1) != iParam2)
	{
		return 0;
	}
	if (func_324(2, iParam1))
	{
		func_325(uParam0, iParam1);
		return 1;
	}
	return 0;
}

int func_222(var uParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<4> Var4;

	Var4 = func_219(iParam6);
	Var4.f_1 = iParam1;
	Var4.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var4);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		return 0;
	}
	DATAFILE::_0xA63CD20F19B961AB(&bVar2, &Var4, -1516819610);
	DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 2049745650);
	*uParam2 = bVar2;
	Global_1946804->f_2652 = 0;
	if (!bVar2 && !bParam3)
	{
		func_232(uParam0, func_326(iVar0), 1);
	}
	while (DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_218(iVar3, 1);
			if (iVar1 < 0 || iVar1 > 39)
			{
			}
			else if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1373051002))
			{
			}
			else
			{
				Global_1946804->f_2612[Global_1946804->f_2652] = iVar1;
				Global_1946804->f_2652++;
				uParam0->f_1[iVar1 /*3*/] = iVar0;
				if (bParam5)
				{
					if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1441384))
					{
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 1155669136;
					}
					else
					{
						Jump @343; //curOff = 278
						if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1194786549))
						{
							if (func_327(iVar3) && func_328(&(uParam0->f_1[iVar1 /*3*/]), iVar3, &iVar0))
							{
								(uParam0->f_1[iVar1 /*3*/])->f_1 = iVar0;
							}
						}
						else
						{
							(uParam0->f_1[iVar1 /*3*/])->f_1 = iVar0;
						}
					}
					if (bVar2)
					{
						iVar1 = 0;
						while (iVar1 < Global_1946804->f_2652)
						{
							func_329(uParam0, &(uParam0->f_1[&Global_1946804->f_2612[iVar1] /*3*/]), &(Global_1946804->f_2612[iVar1]), 0, 0);
							iVar1++;
						}
					}
					if (bParam4)
					{
						*uParam0 = iParam1;
					}
					return 1;
				}
			}
		}
	}

void func_223(int iParam0)
{
	func_92(iParam0, 8, 6);
}

void func_224(int iParam0)
{
	func_330(iParam0, 8, 6);
}

void func_225(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;

	bVar6 = func_136() != -1;
	iVar7 = func_331(0);
	if (func_9(32768))
	{
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 39)
	{
		iVar0 = &Global_1946804->f_57.f_430[iVar2];
		if (iVar0 <= -1 || iVar0 >= 39)
		{
		}
		else
		{
			iVar5 = func_332(iVar0, 1);
			if (func_333(iVar5, 8))
			{
			}
			else if (&(Global_1946804->f_57[iVar0 /*11*/])->f_2[0] == -1802376732 || &uParam0->f_1[iVar0 /*3*/] == 0)
			{
			}
			else if (func_333(iVar5, 6) || &uParam0->f_1[iVar0 /*3*/] == &Global_1946804->f_57[iVar0 /*11*/])
			{
			}
			else
			{
				iVar4 = func_334(&(uParam0->f_1[iVar0 /*3*/]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_335(uParam0);
				if (iVar3 > 0)
				{
					if (!func_9(524288))
					{
						func_205(524288);
						iVar1 = (iVar1 - iVar8);
					}
					iVar2 = iVar3;
					while (iVar2 <= 38)
					{
						iVar0 = &Global_1946804->f_57.f_430[iVar2];
						if (iVar0 <= -1 || iVar0 >= 39)
						{
						}
						else
						{
							iVar5 = func_332(iVar0, 1);
							if (func_333(iVar5, 8))
							{
							}
							else if (&(Global_1946804->f_57[iVar0 /*11*/])->f_2[0] == -1802376732 || &uParam0->f_1[iVar0 /*3*/] == 0)
							{
							}
							else if (func_333(iVar5, 6) || &uParam0->f_1[iVar0 /*3*/] == &Global_1946804->f_57[iVar0 /*11*/])
							{
							}
							else
							{
								iVar4 = func_334(&(uParam0->f_1[iVar0 /*3*/]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
									(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
									if (bParam1)
									{
										func_336(iVar0, iParam2);
									}
								}
								iVar1 = (iVar1 + iVar4);
							}
						}
						iVar2++;
					}
				}
				if ((iVar1 + iVar8) < 31)
				{
					func_91(524288);
				}
			}
		}
	}

void func_226(int iParam0)
{
	Global_1946804->f_978 = iParam0;
}

int func_227(int iParam0)
{
	switch (iParam0)
	{
		case 439606975:
			return 14;
		case 1661121390:
			return 6;
		case 1164374808:
			return 7;
		case 624063935:
			return 9;
		case -1476781101:
			return 10;
		case 1560492757:
			return 15;
		case -769081407:
			return 16;
		case 688004210:
			return 20;
		case 166243423:
			return 0;
		case -1826731591:
			return 24;
		case 2119049229:
			return 25;
		case 1352942778:
			return 26;
		case 1964379549:
			return 27;
		case 1201189539:
			return 28;
		case 1351927599:
			return 21;
		case 2032023096:
			return 22;
		case 1784889667:
			return 13;
		case 1160643979:
			return 8;
		case 1383300684:
			return 1;
		case 2051441678:
			return 2;
		case 162509669:
			return 3;
		case 635948769:
			return 4;
		case 274995506:
			return 5;
		case 1902428294:
			return 17;
		case -2114499732:
			return 18;
		case 800827126:
			return 19;
		case 294553332:
			return 11;
		case 1788874135:
			return 12;
		case -1243402388:
			return 66;
		case 65931886:
			return 67;
		case 1371678229:
			return 68;
		case 2102263084:
			return 69;
		case -272211555:
			return 61;
		case -55563408:
			return 64;
		case -1914506115:
			return 71;
		case 802495462:
			return 75;
		case 842905332:
			return 77;
		case 1511551084:
			return 79;
		case -1725704631:
			return 81;
		case 1257427489:
			return 83;
		case -659341240:
			return 85;
		case 2038771525:
			return 87;
		case -535599244:
			return 89;
		case -389591806:
			return 73;
		case -1205612021:
			return 70;
		case 890706995:
			return 93;
		case 1156438275:
			return 90;
		case -1611873049:
			return 91;
		case 594312243:
			return 92;
		case -978578725:
			return 94;
		case -361635024:
			return 62;
		case -1951220140:
			return 78;
		case 1460520700:
			return 76;
		case 523337834:
			return 80;
		case -19271249:
			return 82;
		case 214175524:
			return 84;
		case -1303643297:
			return 86;
		case 411856831:
			return 88;
		case -926815459:
			return 72;
		case -1300731953:
			return 74;
		case -409616653:
			return 65;
		case 509954990:
			return 29;
		case -445916744:
			return 30;
		case -866249154:
			return 31;
		case -2077063704:
			return 32;
		case 205207539:
			return 33;
		case -1033657275:
			return 34;
		case 1806002837:
			return 35;
		case 705324896:
			return 36;
		case -1541763703:
			return 37;
		case 387052410:
			return 38;
		case -361288914:
			return 39;
		case -911054515:
			return 40;
		case 1084200963:
			return 41;
		case 1847948074:
			return 42;
		case -1212526764:
			return 43;
		case 1851440270:
			return 44;
		case -2028985700:
			return 45;
		case 1074435214:
			return 46;
		case -883015675:
			return 47;
		case -1047155604:
			return 48;
		case 1123231221:
			return 49;
		case 1866989210:
			return 50;
		case 478183719:
			return 51;
		case -1698955868:
			return 52;
		case -2029378634:
			return 53;
		case 1339864416:
			return 54;
		case 890998115:
			return 55;
		case -1376288999:
			return 56;
		case -1041123771:
			return 57;
		case 1389254668:
			return 58;
		case -346112633:
			return 59;
		case 773309172:
			return 60;
		case -291256376:
			return 23;
		default:
			break;
	}
	return -1;
}

void func_228(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_337(iParam0))
	{
		return;
	}
	iVar0 = (Global_40.f_7157[iParam0 /*3*/] && iParam1);
	Global_40.f_7157[iParam0 /*3*/] = (&Global_40.f_7157[iParam0 /*3*/] - iVar0);
}

void func_229(int iParam0, int iParam1)
{
	if (!func_337(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0 /*3*/] = (Global_40.f_7157[iParam0 /*3*/] || iParam1);
}

void func_230(var uParam0)
{
	int iVar0;

	Global_1946804->f_1497 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*(Global_1946804->f_1497.f_1[iVar0 /*3*/]) = { *(uParam0->f_1[iVar0 /*3*/]) };
		iVar0++;
	}
}

int func_231(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = func_219(0);
	func_220(&(Global_1946804->f_964), iVar1, iParam0, 0, 0, 0);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1946804->f_964));
	if (!DATAFILE::_0xED4413CEE1BF142C(&(Global_1946804->f_964)))
	{
		return -1;
	}
	if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &(Global_1946804->f_964), 2049745650))
	{
		return -1;
	}
	return func_326(iVar0);
}

void func_232(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_338(uParam0->f_1[iVar0 /*3*/], 2))
		{
			iVar7 = func_332(iVar0, 1);
			if (func_339(iVar0, iParam1))
			{
				vVar4 = { func_340(iVar0, -1) };
				if ((vVar4.x != &Global_1946804->f_57[iVar0 /*11*/] && vVar4.x != 0) && (&uParam0->f_1[iVar0 /*3*/] != vVar4.x || (uParam0->f_1[iVar0 /*3*/])->f_1 != vVar4.y))
				{
					*(uParam0->f_1[iVar0 /*3*/]) = { vVar4 };
				}
				if (func_333(iVar7, 4))
				{
					func_92(iVar7, 4, 6);
				}
			}
			else
			{
				func_330(iVar7, 4, 6);
				Jump @201; //curOff = 167
				if (bParam2)
				{
					vVar1.x = &Global_1946804->f_57[iVar0 /*11*/];
					*(uParam0->f_1[iVar0 /*3*/]) = { vVar1 };
				}
			}
			iVar0++;
		}
	}

void func_233(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	bVar0 = false;
	iVar1 = 0;
	iVar2 = iParam0;
	iVar3 = -1;
	iVar4 = func_227(iParam0);
	if (iVar4 >= 0 && iVar4 <= 5)
	{
		iVar3 = iVar4;
	}
	if (func_136() != -1)
	{
		return;
	}
	func_341();
	if (bParam5)
	{
		if (!func_99(&(Global_1946804->f_1378), &bVar0, iVar2, iVar3, 1, 0))
		{
			return;
		}
	}
	if (func_9(32768) && &Global_1946804->f_1378.f_1[10 /*3*/] != &Global_1946804->f_57[10 /*11*/])
	{
		func_11();
	}
	func_342(iVar3, 1, 1, 1, 1, 1);
	func_216(31, 0, 0, 0, 0);
	func_236(0);
	if (!bParam3)
	{
		return;
	}
	if (bVar0)
	{
		iVar1 = 8;
	}
	if (!bParam4)
	{
		if (PED::IS_PED_A_PLAYER(iParam1))
		{
			func_216(2, iVar1, 2, 0, 0);
		}
		else
		{
			func_216(2, iVar1, 3, iParam1, 0);
		}
	}
	else
	{
		func_343(&(Global_1946804->f_1497), iParam1, 1, -1, 1, 1, 1);
	}
}

void func_234(int iParam0)
{
	PED::_0xE3144B932DFDFF65(iParam0, 0f, -1, 1, 1);
	PED::CLEAR_PED_ENV_DIRT(iParam0);
	PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 10, "ALL");
	PED::CLEAR_PED_BLOOD_DAMAGE(Global_35);
}

void func_235()
{
	char* sVar0;

	if (PED::IS_PED_RAGDOLL(Global_35))
	{
		return;
	}
	if (CAM::_0xA24C1D341C6E0D53(1, 1, 1))
	{
		return;
	}
	if (!func_9(1))
	{
		return;
	}
	sVar0 = "outfit_change_unarmed";
	switch (Global_1946804->f_859)
	{
		case 1:
			sVar0 = "outfit_change_longarms";
			break;
		case 0:
			sVar0 = "outfit_change_offhand";
			break;
		case 2:
			sVar0 = "outfit_change_unarmed";
			break;
	}
	TASK::TASK_PLAY_ANIM(Global_35, func_344(), sVar0, 1090519040, -1056964608, -1, 67108880, 0, 0, 0, 0, "Satchel_and_ik_hand_helpers_filter", 0);
	func_91(1);
	STREAMING::REMOVE_ANIM_DICT(func_344());
}

void func_236(int iParam0)
{
	struct<4> Var0;

	if (func_345(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_346(Var0);
}

var func_237(var uParam0, var uParam1)
{
	return AUDIO::_PLAY_AMBIENT_SPEECH1(uParam0, uParam1);
}

int func_238(int iParam0, int iParam1)
{
	int iVar0;

	func_244(iParam0, 0, 0);
	if (func_245(iParam0))
	{
		iVar0 = ENTITY::_0xF7424890E4A094C0(iParam0, iParam1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return iVar0;
		}
	}
	return 0;
}

void func_239(int iParam0)
{
	Global_1900383->f_316 = (Global_1900383->f_316 || iParam0);
}

bool func_240(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1) != 0;
}

void func_241(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, var uParam13, int iParam14, var uParam15, var uParam16, int iParam17, var uParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_182(iParam0, 1);
	func_183(iParam0, 1);
	func_184(iParam0, 128);
}

void func_242()
{
	switch (iLocal_44)
	{
		case 1:
			sLocal_45 = func_347(iLocal_18);
			break;
		case 2:
			sLocal_45 = func_347(iLocal_19);
			break;
		case 3:
			sLocal_45 = func_347(iLocal_20);
			break;
		case 4:
			sLocal_45 = func_347(iLocal_18);
			break;
		case 5:
			sLocal_45 = func_347(iLocal_19);
			break;
		case 6:
			sLocal_45 = func_347(iLocal_20);
			break;
	}
	if (iLocal_44 < 7)
	{
		StringCopy(&Local_36, "SMALLTALK_", 32);
		StringConCat(&Local_36, sLocal_45, 32);
		StringCopy(&Local_40, "SMALLTALK_RESPONSE_", 32);
		StringConCat(&Local_40, sLocal_45, 32);
	}
	else
	{
		StringCopy(&Local_36, "CONVO_END", 32);
		StringCopy(&Local_40, "CONVO_END_RESPONSE", 32);
	}
}

bool func_243(int iParam0)
{
	return func_240(iParam0, 2);
}

int func_244(int iParam0, int iParam1, bool bParam2)
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

int func_245(int iParam0)
{
	if (func_123(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return 0;
}

int func_246(int iParam0, int iParam1)
{
	int iVar0;

	if (func_136() == 0)
	{
		return 0;
	}
	func_244(iParam0, 0, 0);
	if (func_245(iParam0))
	{
		iVar0 = ENTITY::_0xF7424890E4A094C0(iParam0, 0);
		if (iVar0 != 0)
		{
			return OBJECT::_0x0943113E02322164(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar0), iParam1);
		}
	}
	return 0;
}

void func_247(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_245(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || iParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, iParam1, iParam3);
	}
}

void func_248(int iParam0, int iParam1)
{
	if (func_245(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 2 || iParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 2);
		}
	}
}

void func_249(int iParam0, int iParam1)
{
	if (func_245(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || iParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
	}
}

void func_250(int iParam0, int iParam1)
{
	if (func_245(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 0 || iParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 0);
		}
	}
}

int func_251()
{
	return 1;
}

void func_252(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_139() - fParam1);
	func_348(uParam0, 1);
	func_349(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_253()
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

int func_254(int iParam0)
{
	if (!func_257(iParam0))
	{
		return -1;
	}
	return func_351(func_350(iParam0));
}

bool func_255(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_256(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_257(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_258(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_352(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

bool func_259(int iParam0)
{
	return (Global_1359489->f_18 && iParam0) != 0;
}

bool func_260(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_261(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23117[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0 /*11*/] && iParam1) != 0;
}

var func_262(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<4> Var0;
	struct<7> Var13;
	var uVar20;

	Var0 = -2;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = _NAMESPACE71::_0xB249EBCB30DD88E0(&Var0, &Var13, iParam8);
	func_353(sParam0, sParam1, iParam2);
	return uVar20;
}

void func_263(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam3 <= 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (iParam2 == -1)
	{
		return;
	}
	iVar0 = func_354(uParam0, iParam1, iParam2);
	if (iVar0 != -1)
	{
		((*uParam0)[iVar0 /*4*/])->f_2 = (((*uParam0)[iVar0 /*4*/])->f_2 + iParam3);
		((*uParam0)[iVar0 /*4*/])->f_1 = func_206();
		func_208(&(((*uParam0)[iVar0 /*4*/])->f_1), 0, 0, 5, 0, 0, 0, 0);
		return;
	}
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 <= (*uParam0 - 1))
	{
		if (uParam0[iVar2 /*4*/] == 0)
		{
			(*uParam0)[iVar2 /*4*/] = iParam1;
			((*uParam0)[iVar2 /*4*/])->f_2 = iParam3;
			((*uParam0)[iVar2 /*4*/])->f_1 = func_206();
			func_208(&(((*uParam0)[iVar2 /*4*/])->f_1), 0, 0, 5, 0, 0, 0, 0);
			((*uParam0)[iVar2 /*4*/])->f_3 = iParam2;
			return;
		}
		if (func_209(((*uParam0)[iVar1 /*4*/])->f_1, ((*uParam0)[iVar2 /*4*/])->f_1, 1))
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	(*uParam0)[iVar1 /*4*/] = iParam1;
	((*uParam0)[iVar1 /*4*/])->f_2 = iParam3;
	((*uParam0)[iVar1 /*4*/])->f_1 = func_206();
	func_208(&(((*uParam0)[iVar1 /*4*/])->f_1), 0, 0, 5, 0, 0, 0, 0);
	((*uParam0)[iVar1 /*4*/])->f_3 = iParam2;
}

int func_264(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 < 153))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 126:
			return 32;
		case 22:
			return 17;
		case 4:
		case 5:
		case 34:
		case 55:
		case 67:
			return 18;
		case 56:
		case 57:
		case 58:
		case 59:
			return 19;
		case 102:
		case 106:
		case 109:
		case 112:
		case 114:
		case 120:
			return 29;
		case 39:
		case 73:
		case 128:
		case 132:
		case 137:
		case 141:
		case 145:
			return 0;
		case 7:
		case 19:
		case 28:
		case 42:
		case 61:
		case 74:
		case 87:
		case 90:
		case 95:
		case 129:
		case 133:
		case 138:
		case 142:
		case 146:
			return 3;
		case 0:
		case 8:
		case 29:
		case 43:
		case 75:
		case 91:
		case 130:
		case 134:
		case 139:
		case 143:
		case 147:
			return 6;
		case 17:
		case 47:
			return 7;
		case 18:
		case 27:
		case 41:
		case 82:
		case 98:
		case 125:
			return 4;
		case 10:
		case 26:
		case 38:
		case 60:
		case 72:
		case 92:
			return 10;
		case 1:
		case 16:
		case 32:
		case 51:
		case 64:
		case 80:
			return 22;
		case 2:
		case 14:
		case 20:
		case 23:
		case 30:
		case 45:
		case 65:
		case 77:
		case 86:
		case 89:
		case 96:
		case 99:
			return 2;
		case 3:
		case 15:
		case 21:
		case 24:
		case 31:
		case 46:
		case 78:
		case 85:
		case 88:
		case 100:
			return 1;
		case 9:
		case 37:
		case 69:
			return 8;
		case 13:
		case 35:
		case 44:
		case 63:
		case 76:
		case 84:
		case 94:
			return 9;
		case 103:
		case 107:
		case 110:
		case 116:
			return 30;
		case 104:
		case 105:
		case 108:
		case 111:
		case 113:
		case 115:
		case 117:
		case 118:
		case 119:
		case 121:
		case 122:
		case 123:
		case 124:
			return 31;
		case 136:
			return 5;
		case 6:
		case 25:
		case 36:
		case 68:
			return 15;
		case 11:
		case 33:
		case 52:
		case 53:
		case 66:
		case 70:
		case 71:
		case 81:
		case 83:
		case 93:
		case 97:
			return 33;
		case 48:
			return 12;
		case 49:
			return 13;
		case 50:
			return 14;
		case 62:
		case 79:
			return 20;
		case 101:
			return 11;
		case 149:
			return 23;
		case 150:
			return 24;
		case 151:
			return 25;
		case 12:
		case 54:
			return 21;
		case 127:
			return 34;
		case 131:
		case 135:
		case 140:
		case 144:
		case 148:
			return 27;
		case 152:
			return 24;
		default:
			break;
	}
	return -1;
}

void func_265(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (iParam1 == 0)
	{
		return;
	}
	if (iParam3 == 0)
	{
		return;
	}
	if (iParam2 == -1)
	{
		return;
	}
	iVar0 = func_354(uParam0, iParam1, iParam2);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = ((*uParam0)[iVar0 /*4*/])->f_2;
	if (iParam3 == -1 || iParam3 >= iVar1)
	{
		(*uParam0)[iVar0 /*4*/] = 0;
		((*uParam0)[iVar0 /*4*/])->f_2 = 0;
		((*uParam0)[iVar0 /*4*/])->f_1 = -15;
		((*uParam0)[iVar0 /*4*/])->f_3 = -1;
	}
	else
	{
		((*uParam0)[iVar0 /*4*/])->f_2 = (((*uParam0)[iVar0 /*4*/])->f_2 - iParam3);
	}
}

void func_266(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_355(iParam1))
		{
			func_356(iParam0, 41788943);
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
			func_357(iParam0, 0, 1);
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
			func_358(iParam0, 0);
			bVar0 = true;
		}
		func_359(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	}
}

bool func_267(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_268(int iParam0)
{
	return func_149(iParam0, Global_1310750->f_16072 | 64);
}

void func_269(int iParam0)
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

void func_270(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	struct<2> Var7;
	struct<2> Var19;
	struct<2> Var21[15];

	if (*uParam2 < 15)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	Var7.f_1 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_GET_ITEM_PRICE_MODIFIERS(iParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		Var21[iVar0 /*2*/] = uParam2[iVar0 /*2*/];
		(Var21[iVar0 /*2*/])->f_1 = 1f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Var7)
	{
		uVar6 = &Var7.f_1[iVar1];
		iVar4 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIED_PRICES(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_MODIFIED_PRICE(uVar6, iVar2) != iParam1)
			{
			}
			else
			{
				iVar5 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIERS(uVar6);
				iVar3 = 0;
				while (iVar3 < iVar5)
				{
					if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_MODIFIER(uVar6, iVar3, &Var19))
					{
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < iParam3)
						{
							if (&Var21[iVar0 /*2*/] == Var19)
							{
								(Var21[iVar0 /*2*/])->f_1 = ((Var21[iVar0 /*2*/])->f_1 - Var19.f_1);
							}
							else
							{
								iVar0++;
							}
						}
					}
					iVar3++;
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if ((Var21[iVar0 /*2*/])->f_1 != 1f)
		{
			((*uParam2)[iVar0 /*2*/])->f_1 = BUILTIN::FLOOR((IntToFloat(((*uParam2)[iVar0 /*2*/])->f_1) * ((Var21[iVar0 /*2*/])->f_1 / 1f)));
		}
		iVar0++;
	}
}

int func_271(var uParam0)
{
	return uParam0;
}

bool func_272(int iParam0)
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

int func_273(int iParam0)
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

char* func_274(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
						return func_162(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_162(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
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

float func_275()
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

	if (func_360())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_179(2);
	}
	if (Global_1347477->f_119)
	{
		return func_179(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_361();
	fVar2 = func_362();
	fVar3 = func_363();
	fVar4 = func_364();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_365()));
	fVar7 = (func_179(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_366(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_367(3, fVar9, fVar9 > 100f);
	return func_191(fVar7, -100f, 100f);
}

float func_276()
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

	if (func_360())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_179(1);
	}
	if (Global_1347477->f_119)
	{
		return func_179(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_361();
	fVar2 = func_362();
	fVar3 = func_363();
	fVar4 = func_364();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_365()));
	fVar7 = (func_179(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_366(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_367(2, fVar9, fVar9 > 100f);
	return func_191(fVar7, -100f, 100f);
}

float func_277()
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

	if (func_360())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_179(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_368())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_369())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_179(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_361();
	fVar2 = func_362();
	fVar3 = func_363();
	fVar4 = func_364();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_365()));
	fVar7 = (func_179(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_366(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_367(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && PLAYER::_0x0317C947D062854E(PLAYER::PLAYER_ID()) < 1f)
	{
		return func_179(0);
	}
	return func_191(fVar7, -100f, 100f);
}

int func_278(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

int func_279(int iParam0)
{
	if (!func_370(iParam0))
	{
		return 0;
	}
	return func_371(iParam0);
}

int func_280(int iParam0)
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

int func_281(int iParam0)
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

void func_282(int iParam0, float fParam1, int iParam2)
{
	char* sVar0;

	sVar0 = func_274(iParam0, 0, 0, 0);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_12[0]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_16[0]), iParam2);
}

float func_283(int iParam0)
{
	float fVar0;

	fVar0 = (BUILTIN::TO_FLOAT(iParam0) / 100f);
	return ((fVar0 * 200f) - 100f);
}

void func_284(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_372(iParam0, &iVar0, &iVar1);
	if (!func_373(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_374(iVar0, iVar1);
}

int func_285(int iParam0)
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

char* func_286(int iParam0)
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

float func_287(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_375();
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

int func_288(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (iParam5 == 2)
	{
		iParam5 = func_375();
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
		func_376(iParam0, 7000, iParam5);
	}
	if (fParam1 > 100f)
	{
		fParam1 = 100f;
	}
	else if (fParam1 < 0f)
	{
		fParam1 = 0f;
	}
	func_377(iVar0, iParam0, fParam1);
	func_378(iParam0, fParam1, bParam4, iParam5);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		ATTRIBUTE::_0xC6258F41D86676E0(iVar0, func_280(iParam0), BUILTIN::CEIL(fParam1));
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_289(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = func_308(*uParam0);
	iVar1 = func_309(*uParam0);
	iVar2 = func_310(*uParam0);
	iVar3 = func_311(*uParam0);
	iVar4 = func_312(*uParam0);
	iVar5 = func_313(*uParam0);
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
		iVar7 = func_314(iVar6, iVar0);
		iVar2 = (iVar2 + iVar7);
	}
	iVar1 = (iVar1 - iParam5);
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 = (iVar0 - iParam6);
	func_315(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_290(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_375();
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

int func_291(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_375();
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

void func_292(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_375();
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

void func_293(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_375();
	}
	switch (iParam2)
	{
		case 0:
			(Global_1955569->f_753.f_5[iParam0 /*3*/])->f_1 = uParam1;
			break;
		case 1:
			(Global_1955569->f_866.f_2.f_5[iParam0 /*3*/])->f_1 = uParam1;
			break;
		default:
			break;
	}
}

float func_294(float fParam0, float fParam1)
{
	if (fParam1 != 0f)
	{
		return ((fParam1 / 100f) * 200f);
	}
	return ((fParam0 / 8f) * 200f);
}

int func_295(int iParam0)
{
	if (func_176())
	{
		return 0;
	}
	return func_379(((*Global_1347702)[58 /*49*/])->f_15, 1);
}

void func_296()
{
	Global_40.f_11095.f_11[14] = 100f;
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, 14, 100);
	Global_40.f_11095.f_42 = 60;
}

int func_297(int iParam0)
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

char* func_298(int iParam0)
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

void func_299(int iParam0)
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
	iVar1 = func_380(2);
	func_381(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_300(bool bParam0)
{
	if (func_136() != -1)
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
		func_284(89, 1);
		ATTRIBUTE::_0xFB6E111908502871(5);
	}
	else
	{
		func_284(90, 1);
		ATTRIBUTE::_0x3FC4C027FD0936F4(5);
	}
	func_382(1, bParam0, 1);
	func_166();
	Global_40.f_11095.f_43 = bParam0;
}

void func_301(int iParam0)
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
	iVar1 = func_383(2);
	func_384(BUILTIN::TO_FLOAT((iParam0 * iVar1)));
}

void func_302(int iParam0)
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
	iVar1 = func_385(2);
	func_386(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_303(int iParam0, bool bParam1, bool bParam2)
{
	func_288(iParam0, 100f, bParam1, bParam2, 1, 2);
}

float func_304(int iParam0)
{
	return &(Global_40.f_11095.f_11[iParam0]);
}

int func_305()
{
	if (func_136() != -1)
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
	return func_387(Global_1347477->f_195, 0);
}

int func_306(float fParam0)
{
	return BUILTIN::ROUND(((fParam0 / 100f) * BUILTIN::TO_FLOAT(10)));
}

void func_307(var uParam0, var uParam1)
{
	if (!func_211())
	{
		*uParam0 = -100f;
		*uParam1 = 100f;
		return;
	}
	*uParam0 = Global_40.f_11095.f_40;
	*uParam1 = Global_40.f_11095.f_41;
}

var func_308(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_207(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_309(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_310(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_311(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_312(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_313(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_314(int iParam0, int iParam1)
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

void func_315(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_388(uParam0, iParam6);
	func_389(uParam0, iParam5);
	func_390(uParam0, iParam4);
	func_391(uParam0, iParam3);
	func_392(uParam0, iParam2);
	func_393(uParam0, iParam1);
}

int func_316(int iParam0)
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
	iVar0 = func_313(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_312(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_311(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_308(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return 0;
	}
	iVar4 = func_309(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_310(iParam0);
	if (iVar5 < 1 || iVar5 > func_314(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

struct<8> func_317(char* sParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, sParam0, 64);
	return cVar0;
}

int func_318(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_394();
	}
	if (func_136() == -1)
	{
		return (Global_26795.f_26[iParam0 /*120*/])->f_1;
	}
	return (Global_36637.f_45.f_350.f_26[iParam0 /*120*/])->f_1;
}

bool func_319(int iParam0, int iParam1)
{
	if (!func_337(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0 /*3*/] && iParam1) != 0;
}

void func_320(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

int func_321(int iParam0)
{
	return 0;
}

int func_322(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 1;
		case 2:
			return 1;
		case 3:
			return 1;
		case 4:
			return 1;
		case 5:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_323(struct<4> Param0)
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
			if (func_395(Param0))
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
			func_396(Param0);
			*(Global_1946804->f_668[Global_1946804->f_856 /*4*/]) = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_205(8);
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
			if (func_395(Param0))
			{
				return;
			}
			func_396(Param0);
			*(Global_1946804->f_567[Global_1946804->f_851 /*4*/]) = { Param0 };
			Global_1946804->f_851++;
			func_205(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_397(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

int func_324(int iParam0, int iParam1)
{
	if (func_136() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			return (Global_26795.f_26[iParam1 /*120*/] && iParam0) != 0;
		}
		return 0;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		return (Global_36637.f_45.f_350.f_26[iParam1 /*120*/] && iParam0) != 0;
	}
	return 0;
}

void func_325(var uParam0, int iParam1)
{
	int iVar0;

	if (func_136() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		*uParam0 = (Global_26795.f_26[iParam1 /*120*/])->f_1;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			*(uParam0->f_1[iVar0 /*3*/]) = { *((Global_26795.f_26[iParam1 /*120*/])->f_1.f_1[iVar0 /*3*/]) };
			iVar0++;
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	*uParam0 = (Global_36637.f_45.f_350.f_26[iParam1 /*120*/])->f_1;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*(uParam0->f_1[iVar0 /*3*/]) = { *((Global_36637.f_45.f_350.f_26[iParam1 /*120*/])->f_1.f_1[iVar0 /*3*/]) };
		iVar0++;
	}
}

int func_326(int iParam0)
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

int func_327(int iParam0)
{
	int iVar0;
	var uVar1;

	Global_1946804->f_964.f_2 = 0;
	if (func_136() == -1)
	{
		iVar0 = -380731322;
	}
	else
	{
		iVar0 = 1226838104;
	}
	func_220(&(Global_1946804->f_964), iVar0, -367421157, 1409451727, 1, iParam0);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1946804->f_964));
	if (!DATAFILE::_0x44B3A36933AC009C(&uVar1, &(Global_1946804->f_964), 1409451727))
	{
		return 0;
	}
	return 1;
}

int func_328(var uParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return 1;
}

void func_329(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 12;
	iVar2 = func_398(&(uParam0->f_1[iParam2 /*3*/]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_339(iParam2, 65536) && &uParam0->f_1[iVar1 /*3*/] == -452402570)
	{
		uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
		(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
		if (bParam4)
		{
			func_336(iVar1, iVar3);
		}
	}
	if (func_399(-1586649372) && func_339(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
		(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
		if (bParam4)
		{
			func_336(iVar1, iVar3);
		}
	}
	switch (iVar2)
	{
		case 698653232:
			if (iParam1 == &Global_1946804->f_57[iParam2 /*11*/])
			{
				iVar1 = 12;
				if (&uParam0->f_1[iVar1 /*3*/] == 1516947474)
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_336(iVar1, iVar3);
					}
				}
			}
			func_400(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_400(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
			iVar1 = 22;
			if (&uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
			{
			}
			else
			{
				iVar0 = 16;
				if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1155669136 || (uParam0->f_1[iVar0 /*3*/])->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_336(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 525
				func_400(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if ((uParam0->f_1[iVar1 /*3*/])->f_1 == 1155669136)
				{
					(uParam0->f_1[iVar1 /*3*/])->f_1 = -1539589426;
					if (bParam4)
					{
						func_336(iVar1, iVar3);
					}
				}
				if ((uParam0->f_1[iVar1 /*3*/])->f_1 == 1530758430)
				{
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 1334603721;
					if (bParam4)
					{
						func_336(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 656
				func_400(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1170; //curOff = 691
				func_400(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_336(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 786
				func_400(uParam0, (1 && bParam4), 0, 1, bParam3);
				Jump @1170; //curOff = 807
				if (iParam1 == &Global_1946804->f_57[iParam2 /*11*/])
				{
					iVar1 = 37;
					if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_336(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_336(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_398(&(uParam0->f_1[iVar1 /*3*/])))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_336(iVar1, iVar3);
						}
					}
				}
				Jump @1170; //curOff = 1025
				iVar1 = 36;
				if (&uParam0->f_1[iParam2 /*3*/] != &Global_1946804->f_57[iParam2 /*11*/] && func_155(&(Global_1946804->f_1497.f_1[iVar1 /*3*/]), -1638171711))
				{
					uParam0->f_1[iParam2 /*3*/] = &Global_1946804->f_57[iParam2 /*11*/];
					(uParam0->f_1[iParam2 /*3*/])->f_1 = 0;
				}
				Jump @1170; //curOff = 1110
				iVar1 = 36;
				if (&uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iParam2 /*3*/] = &Global_1946804->f_57[iParam2 /*11*/];
					(uParam0->f_1[iParam2 /*3*/])->f_1 = 0;
				}
			}
			switch (func_398(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_398(&(uParam0->f_1[iVar1 /*3*/])))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_336(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_398(&(uParam0->f_1[iVar1 /*3*/])) || func_155(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_336(iVar1, iVar3);
						}
					}
					break;
			}
		}

void func_330(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_218(iParam0, 1) /*11*/])->f_10 = ((Global_1946804->f_57[func_218(iParam0, 1) /*11*/])->f_10 || iParam1);
}

int func_331(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_94();
	}
	iVar0 = 0;
	if (iParam0 == 24043185)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_332(int iParam0, int iParam1)
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

bool func_333(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_218(iParam0, 1) /*11*/])->f_10 && iParam1) != 0;
}

int func_334(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam0 == &Global_1946804->f_57[func_218(iParam1, 1) /*11*/])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_9(524288))
	{
		switch (iParam1)
		{
			case 673166414:
				iVar0++;
				break;
			case -207860920:
				iVar0++;
				break;
		}
	}
	iVar0 = (iVar0 + PED::_0x31B2E7F2E3C58B89(iParam0, 1155669136, iParam2, bParam3));
	return iVar0;
}

int func_335(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 25;
	iVar1 = 0;
	if (&uParam0->f_1[iVar0 /*3*/] != &Global_1946804->f_57[iVar0 /*11*/])
	{
		iVar1++;
	}
	iVar0 = 26;
	if (&uParam0->f_1[iVar0 /*3*/] != &Global_1946804->f_57[iVar0 /*11*/])
	{
		iVar1++;
	}
	return iVar1;
}

void func_336(int iParam0, int iParam1)
{
	func_401(&(Global_1946804->f_2589), iParam0, iParam1);
}

int func_337(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return 0;
	}
	return 1;
}

bool func_338(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_339(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[iParam0 /*11*/])->f_9 && iParam1) != 0;
}

Vector3 func_340(int iParam0, int iParam1)
{
	if (func_136() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		return *((Global_26795.f_26[iParam1 /*120*/])->f_1.f_1[iParam0 /*3*/]);
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	return *((Global_36637.f_45.f_350.f_26[iParam1 /*120*/])->f_1.f_1[iParam0 /*3*/]);
}

void func_341()
{
	int iVar0;

	Global_1946804->f_1378 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*(Global_1946804->f_1378.f_1[iVar0 /*3*/]) = { *(Global_1946804->f_1497.f_1[iVar0 /*3*/]) };
		iVar0++;
	}
}

void func_342(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;

	iVar1 = 1;
	if (bParam2)
	{
		if ((iParam0 == -1 || iParam0 == func_394()) || iParam5)
		{
			func_402();
		}
	}
	if (func_136() == -1)
	{
		iVar0 = Global_40.f_7729;
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "playerChangeOutfits") && DECORATOR::DECOR_GET_BOOL(Global_35, "playerChangeOutfits"))
		{
			iVar0 = &Global_1905941;
		}
		if ((iParam4 && iVar0 > 5) && func_403(Global_1946804->f_1497))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = (&Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				iVar0 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= 4096;
				Global_1946804->f_1497 = func_93(Global_40.f_7729);
				Global_1946804->f_1378 = func_93(Global_40.f_7729);
				iParam3 = 1;
			}
		}
		iVar1 = func_322(iVar0);
	}
	if (iParam3 && iVar1)
	{
		func_404(iParam0, 0, 6);
	}
	if (bParam1)
	{
		func_405(0, 1);
	}
	func_226(0);
}

void func_343(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	bVar4 = func_136() != -1;
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
			func_205(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_406(iParam1, 29, bVar4, 1, 0);
			func_406(iParam1, 31, bVar4, 1, 0);
			func_406(iParam1, 30, bVar4, 1, 0);
			func_406(iParam1, 22, bVar4, 1, 0);
			func_406(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_9(32768) && func_333(1108822547, 8)) && func_339(10, iParam3))
	{
		func_407(iParam1, 0, 1);
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
			iVar3 = func_332(iVar1, 1);
			if (func_333(iVar3, 8))
			{
			}
			else if (&(Global_1946804->f_57[iVar1 /*11*/])->f_2[0] == -1802376732 || &uParam0->f_1[iVar1 /*3*/] == 0)
			{
			}
			else
			{
				iVar2 = &uParam0->f_1[iVar1 /*3*/];
				if (!func_339(iVar1, iParam3))
				{
				}
				else if ((func_333(iVar3, 6) || &uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/]) || (uParam0->f_1[iVar1 /*3*/])->f_1 == 289238755)
				{
					if (!func_333(iVar3, 1) || bParam2)
					{
						Global_1946804->f_857++;
						if (!bParam6)
						{
							func_406(iParam1, iVar1, bVar4, 1, 0);
						}
						if ((uParam0->f_1[iVar1 /*3*/])->f_1 == 289238755)
						{
							(Global_1946804->f_2456[iVar1 /*2*/])->f_1 = 289238755;
						}
						func_330(iVar3, 1, 6);
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
								func_406(iParam1, iVar1, bVar4, 1, &(uParam0->f_1[iVar1 /*3*/]));
							}
							Global_1946804->f_2456[iVar1 /*2*/] = &uParam0->f_1[iVar1 /*3*/];
							(Global_1946804->f_2456[iVar1 /*2*/])->f_1 = (uParam0->f_1[iVar1 /*3*/])->f_1;
							if (func_333(iVar3, 1))
							{
								func_92(iVar3, 1, 6);
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

char* func_344()
{
	return "MECH_INVENTORY@CLOTHING@OUTFIT_CHANGE";
}

bool func_345(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_346(struct<4> Param0)
{
	int iVar0;
	int iVar1;

	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_395(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1 /*4*/] == Param0 && (Global_1946804->f_769[iVar1 /*4*/])->f_2 == Param0.f_2) && (Global_1946804->f_769[iVar1 /*4*/])->f_3 == Param0.f_3) && (Global_1946804->f_769[iVar1 /*4*/])->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1 /*4*/] == 34 && func_395(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_396(Param0);
	*(Global_1946804->f_769[Global_1946804->f_854 /*4*/]) = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_205(8);
}

char* func_347(int iParam0)
{
	char* sVar0;

	if (iLocal_44 < 4)
	{
		switch (iParam0)
		{
			case 1:
				sVar0 = "A";
				break;
			case 2:
				sVar0 = "B";
				break;
			case 3:
				sVar0 = "C";
				break;
			case 4:
				sVar0 = "D";
				break;
			case 5:
				sVar0 = "E";
				break;
			default:
				sVar0 = "A";
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1:
				sVar0 = "F";
				break;
			case 2:
				sVar0 = "G";
				break;
			case 3:
				sVar0 = "H";
				break;
			case 4:
				sVar0 = "I";
				break;
			case 5:
				sVar0 = "J";
				break;
			default:
				sVar0 = "F";
				break;
		}
	}
	return sVar0;
}

void func_348(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_349(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_350(int iParam0)
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

int func_351(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

int func_352(int iParam0)
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

void func_353(char* sParam0, char* sParam1, int iParam2)
{
	_NAMESPACE84::_0x74BCCEB233AD95B2(-466562563, MISC::GET_HASH_KEY(sParam0));
	_NAMESPACE84::_0x74BCCEB233AD95B2(1885309238, MISC::GET_HASH_KEY(sParam1));
	_NAMESPACE84::_0x74BCCEB233AD95B2(-826961056, iParam2);
}

int func_354(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam2 == -1)
	{
		return -1;
	}
	if (iParam1 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (uParam0[iVar0 /*4*/] == iParam1 && ((*uParam0)[iVar0 /*4*/])->f_3 == iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_355(int iParam0)
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

void func_356(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_127(iParam0, iParam1))
		{
			if (func_408(iParam0, iParam1))
			{
				if (func_409(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_320(iParam0);
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

void func_357(int iParam0, int iParam1, bool bParam2)
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

void func_358(int iParam0, bool bParam1)
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

void func_359(int iParam0, int iParam1)
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

int func_360()
{
	if (Global_1572887->f_12 != -1)
	{
		return 0;
	}
	return Global_1347477->f_203;
}

float func_361()
{
	float fVar0;
	int iVar1;

	fVar0 = func_304(13);
	iVar1 = func_306(fVar0);
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

float func_362()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_363()
{
	if (func_410())
	{
		if (DLC::_0xA16B4FBA7887D7BA())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_364()
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

float func_365()
{
	return Global_1955565->f_3;
}

void func_366(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;

	sVar0 = func_274(iParam0, 1, 0, 0);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_12[1]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_16[1]), iParam2);
}

void func_367(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_274(iParam0, 2, 0, 0);
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

bool func_368()
{
	return func_304(12) <= -99f;
}

bool func_369()
{
	return func_304(12) >= 99f;
}

int func_370(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_371(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_372(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

int func_373(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return 0;
	}
	if (func_411(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_412(iParam0))
	{
		return 0;
	}
	if (func_413(iParam0))
	{
		return 0;
	}
	if ((Global_1898164->f_163 && !func_414(iParam0, 1)) || func_415(32768))
	{
		if (!func_414(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return 0;
		}
	}
	if (!func_416())
	{
		return 0;
	}
	return 1;
}

void func_374(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

int func_375()
{
	if (func_417())
	{
		return 1;
	}
	return 0;
}

void func_376(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_375();
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

void func_377(int iParam0, int iParam1, float fParam2)
{
	char* sVar0;

	sVar0 = func_286(iParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		PED::_0x437C08DB4FEBE2BD(iParam0, func_418(iParam1), fParam2, -1);
	}
}

void func_378(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (iParam3 == 2)
	{
		iParam3 = func_375();
	}
	iVar0 = MISC::GET_GAME_TIMER();
	func_419(iParam0, fParam1, iParam3);
	if (bParam2)
	{
		func_420(iParam0, iVar0, iParam3);
	}
}

int func_379(int iParam0, bool bParam1)
{
	switch (func_131(iParam0))
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

int func_380(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_375();
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

void func_381(float fParam0, int iParam1)
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

void func_382(int iParam0, bool bParam1, int iParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_6, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_5, iParam2);
}

int func_383(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_375();
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

void func_384(float fParam0)
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

int func_385(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_375();
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

void func_386(float fParam0, bool bParam1)
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

bool func_387(int iParam0, bool bParam1)
{
	return func_209(func_206(), iParam0, bParam1);
}

void func_388(var uParam0, int iParam1)
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

void func_389(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 62914560);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_390(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_309(*uParam0);
	iVar1 = func_308(*uParam0);
	if (iParam1 < 1 || iParam1 > func_314(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4063232);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_391(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 126976);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_392(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4032);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_393(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 63);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

int func_394()
{
	if (func_136() == -1)
	{
		return Global_26795.f_776;
	}
	return Global_36637.f_45.f_350.f_1011;
}

bool func_395(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_396(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

void func_397(var uParam0, var uParam1, var uParam2)
{
	struct<4> Var0;

	Var0.f_1 = uParam2;
	Var0 = uParam0;
	Var0.f_2 = uParam1;
	func_346(Var0);
}

int func_398(int iParam0)
{
	struct<2> Var0;

	if (!func_159(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_399(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_218(iParam0, 1) /*3*/] != &Global_1946804->f_57[func_218(iParam0, 1) /*11*/];
}

void func_400(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 0;
	if (bParam4)
	{
		iVar0 = 3;
	}
	iVar1 = 12;
	iVar2 = 20;
	iVar3 = 16;
	if ((uParam0->f_1[iVar3 /*3*/])->f_1 == 1216705912 || (uParam0->f_1[iVar3 /*3*/])->f_1 == 654181853)
	{
		if (&uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
		{
			(uParam0->f_1[iVar3 /*3*/])->f_1 = 1334603721;
		}
		else
		{
			(uParam0->f_1[iVar3 /*3*/])->f_1 = -1539589426;
			(uParam0->f_1[iVar1 /*3*/])->f_1 = 1155669136;
		}
		if (bParam2)
		{
			func_336(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_336(iVar3, iVar0);
		}
	}
	if ((uParam0->f_1[iVar2 /*3*/])->f_1 == -1333118809 || (uParam0->f_1[iVar2 /*3*/])->f_1 == -1158926300)
	{
		(uParam0->f_1[iVar2 /*3*/])->f_1 = 1155669136;
		if (bParam3)
		{
			func_336(iVar2, iVar0);
		}
	}
}

void func_401(var uParam0, var uParam1, var uParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_421(uParam0, 1))
	{
		func_422(uParam0, 1);
	}
	(uParam0->f_2[*uParam0 /*2*/])->f_1 = uParam2;
	uParam0->f_2[*uParam0 /*2*/] = uParam1;
	*uParam0++;
}

void func_402()
{
	int iVar0;

	Global_1946804->f_1497 = Global_1946804->f_1378;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*(Global_1946804->f_1497.f_1[iVar0 /*3*/]) = { *(Global_1946804->f_1378.f_1[iVar0 /*3*/]) };
		iVar0++;
	}
}

int func_403(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_219(0);
	iVar1 = 0;
	func_220(&(Global_1946804->f_964), iVar0, iParam0, 0, 0, 0);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1946804->f_964));
	if (!DATAFILE::_0xED4413CEE1BF142C(&(Global_1946804->f_964)))
	{
		return 0;
	}
	if (!DATAFILE::_0xA63CD20F19B961AB(&iVar1, &(Global_1946804->f_964), -1516819610))
	{
		return 0;
	}
	return iVar1;
}

void func_404(int iParam0, bool bParam1, int iParam2)
{
	func_423(&(Global_1946804->f_1378), iParam0);
	func_424(2, iParam0, 6);
	if (bParam1)
	{
		func_405(0, 1);
	}
}

void func_405(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_226(0);
	}
	if (bParam0)
	{
		func_205(8);
		func_205(512);
	}
	else
	{
		func_205(8);
		func_205(16);
	}
}

void func_406(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_332(iParam1, 1);
	if (!bParam2 && iVar2 == 1367443060)
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = func_425(iParam4);
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

void func_407(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 10;
	if (func_333(1108822547, 6))
	{
		if (bParam2)
		{
			func_406(iParam0, iVar0, func_136() != -1, 0, 0);
			func_330(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		PED::_0xBC6DF00D7A4A6819(iParam0, Global_1946804->f_2776.f_1, &(Global_1946804->f_2776.f_3[0]), &(Global_1946804->f_2776.f_3[1]), &(Global_1946804->f_2776.f_3[2]), Global_1946804->f_2776.f_8, Global_1946804->f_2776.f_9, Global_1946804->f_2776.f_10, Global_1946804->f_2776.f_11);
		func_92(1108822547, 1, 6);
	}
	Global_1946804->f_857++;
	if (!bParam1)
	{
		return;
	}
	PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
}

int func_408(int iParam0, int iParam1)
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

bool func_409(int iParam0, int iParam1)
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
	if (!func_127(iParam0, iVar0))
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

bool func_410()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797);
}

bool func_411(int iParam0, int iParam1)
{
	if (func_136() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iParam0]), iParam1);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iParam0]), iParam1);
}

int func_412(int iParam0)
{
	if (func_136() != -1)
	{
		if (func_414(iParam0, 4))
		{
			return 0;
		}
	}
	else if (func_414(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

int func_413(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_414(iParam0, 65536) && !func_414(iParam0, 32768))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if ((Global_40.f_7756[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_414(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0 /*3*/] - iVar1);
			if ((Global_40.f_7756[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && func_414(iParam0, 32768))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_414(int iParam0, int iParam1)
{
	return ((Global_1905944->f_22[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

bool func_415(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_416()
{
	return Global_1905944->f_5694;
}

bool func_417()
{
	return Global_1955569->f_866;
}

char* func_418(int iParam0)
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

void func_419(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_375();
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

void func_420(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_375();
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

bool func_421(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_422(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_423(var uParam0, int iParam1)
{
	int iVar0;

	if (func_136() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		(Global_26795.f_26[iParam1 /*120*/])->f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_426(uParam0->f_1[iVar0 /*3*/], iVar0, iParam1);
			iVar0++;
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	(Global_36637.f_45.f_350.f_26[iParam1 /*120*/])->f_1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		func_427(uParam0->f_1[iVar0 /*3*/], iVar0, iParam1);
		iVar0++;
	}
}

void func_424(int iParam0, int iParam1, int iParam2)
{
	if (func_136() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			Global_26795.f_26[iParam1 /*120*/] = (Global_26795.f_26[iParam1 /*120*/] || iParam0);
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		Global_36637.f_45.f_350.f_26[iParam1 /*120*/] = (Global_36637.f_45.f_350.f_26[iParam1 /*120*/] || iParam0);
	}
}

int func_425(int iParam0)
{
	int iVar0;

	iVar0 = func_398(iParam0);
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

void func_426(var uParam0, int iParam1, int iParam2)
{
	*((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/]) = { *uParam0 };
	((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 = (((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 - ((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 & 1);
}

void func_427(var uParam0, int iParam1, int iParam2)
{
	*((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/]) = { *uParam0 };
	((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 = (((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 - ((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 & 1);
}

