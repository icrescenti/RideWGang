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
	char* sLocal_14 = NULL;
	char* sLocal_15 = NULL;
	char* sLocal_16 = NULL;
	char* sLocal_17 = NULL;
	struct<3480> Local_18 = { 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1225574343, 0, 0, 0, 0, 2, 2, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 1056964608, 1055622431, 1050253722, 1022739087, 0, -1116355953, 1055286886, 1055286886, 1049582633, 1049247089, 1032805417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1 } ;
	var uLocal_3498 = 0;
	var uLocal_3499 = 0;
	var uLocal_3500 = 0;
	var uLocal_3501 = 0;
	var uLocal_3502 = 0;
	var uLocal_3503 = 3;
	var uLocal_3504 = 0;
	var uLocal_3505 = 0;
	var uLocal_3506 = 0;
	var uLocal_3507 = 3;
	var uLocal_3508 = 0;
	var uLocal_3509 = 0;
	var uLocal_3510 = 0;
	var uLocal_3511 = 0;
	var uLocal_3512 = 0;
	int iLocal_3513 = 0;
	var uLocal_3514 = 0;
	var uLocal_3515 = 0;
	int iLocal_3516 = 0;
	int iLocal_3517 = 0;
	int iLocal_3518 = 0;
	var uLocal_3519 = 0;
	var uLocal_3520 = 0;
	int iLocal_3521[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3531 = 0;
	int iLocal_3532 = 0;
	int iLocal_3533 = 0;
	var uLocal_3534 = 0;
	var uLocal_3535 = 0;
	var uLocal_3536 = 0;
	struct<4> Local_3537[13];
	var uLocal_3590 = 0;
	var uLocal_3591 = 0;
	var uLocal_3592 = 0;
	var uLocal_3593 = 0;
	var uLocal_3594 = 0;
	int iLocal_3595 = 0;
	int iLocal_3596 = 0;
	int iLocal_3597 = 0;
	vector3 vLocal_3598 = { 0f, 0f, 0f };
	var uLocal_3601[24] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<8> Local_3626[10];
	int iLocal_3707 = 0;
	int iLocal_3708 = 0;
	var uLocal_3709 = 0;
	var uLocal_3710 = 0;
	var uLocal_3711 = 0;
	int iLocal_3712 = 0;
	int iLocal_3713 = 0;
	vector3 vLocal_3714 = { 0f, 0f, 0f };
	vector3 vLocal_3717 = { 0f, 0f, 0f };
	vector3 vLocal_3720 = { 0f, 0f, 0f };
	vector3 vLocal_3723 = { 0f, 0f, 0f };
	vector3 vLocal_3726 = { 0f, 0f, 0f };
	int iLocal_3729 = 0;
	int iLocal_3730 = 0;
	var uLocal_3731 = 0;
	vector3 vLocal_3732 = { 0f, 0f, 0f };
	int iLocal_3735 = 0;
	var uLocal_3736 = 0;
	vector3 vLocal_3737 = { 0f, 0f, 0f };
	int iLocal_3740 = 0;
	var uLocal_3741 = 0;
	vector3 vLocal_3742 = { 0f, 0f, 0f };
	var uLocal_3745 = 0;
	var uLocal_3746 = 0;
	vector3 vLocal_3747 = { 0f, 0f, 0f };
	int iLocal_3750 = 0;
	var uLocal_3751 = 0;
	var uLocal_3752 = 0;
	var uLocal_3753 = 0;
	vector3 vLocal_3754 = { 0f, 0f, 0f };
	int iLocal_3757 = 0;
	var uLocal_3758 = 0;
	var uLocal_3759 = 0;
	var uLocal_3760 = 0;
	vector3 vLocal_3761 = { 0f, 0f, 0f };
	struct<8> Local_3764[3];
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	int iVar1;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	sLocal_14 = "mech_skin@BUCK_BUTCHER";
	sLocal_15 = "PBL_BASE";
	sLocal_16 = "PBL_DUMP";
	sLocal_17 = "PBL_DROP_IN";
	iLocal_3531 = -1;
	iLocal_3532 = -1260703314; /* GXTEntry: @"This is to certify that Marion Williamson is hereby DISHONORABLY DISCHARGED from the military service of the United States by reason of attempted murder and deviancy~n~Dated this 27 day of December 1892~n~Officer in Charge: Colonel Harold T Irving, 15th Infantry" */
	iLocal_3533 = 1119053383;
	vLocal_3598 = { 672.4047f, -1259.892f, 42.9838f };
	iLocal_3707 = -1251050461;
	iLocal_3708 = -1206647372;
	vLocal_3714 = { 682.1702f, -1249.528f, 43.09263f };
	vLocal_3717 = { 672.86f, -1237.54f, 44.13f };
	vLocal_3720 = { 0f, 0f, 28f };
	vLocal_3723 = { 690f, -1252.11f, 44.41f };
	vLocal_3726 = { 0f, 0f, -108f };
	iLocal_3730 = 1918035780; /* GXTEntry: "Larceny~n~~n~12.7.1874" */
	vLocal_3732 = { 651.426f, -1245.099f, 44.0979f };
	iLocal_3735 = -38240335;
	vLocal_3737 = { 651.3523f, -1245.044f, 43.9347f };
	iLocal_3740 = -718577685;
	vLocal_3742 = { 651.7246f, -1245.335f, 43.896f };
	vLocal_3747 = { 674.605f, -1236.566f, 43.14585f };
	iLocal_3750 = -607996270;
	vLocal_3754 = { 668.2988f, -1235.026f, 43.17291f };
	iLocal_3757 = 1010110757;
	vLocal_3761 = { 654.8076f, -1251.45f, 42.84742f };
	Local_18.f_46 = uScriptParam_0;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2698))
	{
		func_1(&Local_18);
	}
	func_2();
	func_3();
	func_4();
	func_5();
	func_6(&(Local_18.f_1721));
	func_7(&(Local_18.f_1797));
	func_8(&(Local_18.f_1869));
	func_9();
	func_10(&Local_18);
	while (func_11())
	{
		BUILTIN::WAIT(0);
		bVar0 = func_12(16);
		func_13(&(Local_18.f_1721));
		func_13(&(Local_18.f_1797));
		func_13(&(Local_18.f_1869));
		func_13(&(Local_18.f_1934));
		func_14();
		func_15();
		func_16();
		if (!bVar0)
		{
			if (func_17())
			{
				func_18(Local_18.f_3054, Local_18.f_3055, Global_1357549->f_1900);
			}
		}
		switch (Local_18)
		{
			case 0:
				if (func_19())
				{
					func_20(1);
				}
				break;
			case 1:
				func_21(&Local_18);
				func_22();
				func_23();
				func_24();
				func_25();
				func_26();
				func_27(&(Local_18.f_2024), &(Global_40.f_4283.f_415));
				if (!bVar0)
				{
					func_28();
					func_29();
					func_30();
				}
				func_31(&Local_18);
				iVar1 = func_32();
				if (!bVar0 && iVar1 == 1)
				{
					func_33(Local_18.f_45, Local_18.f_46);
					if (func_34(Local_18.f_45))
					{
						func_35(Local_18.f_45, &(Local_18.f_2024));
						func_36(0);
						func_37();
						func_39(func_38(4194304));
					}
				}
				else
				{
					func_40(Local_18.f_45);
				}
				func_41(Global_1898004, Local_18.f_46);
				func_42(&Local_18);
				if (!bVar0)
				{
					func_43(&(Local_18.f_51), &(Local_18.f_2024));
				}
				if (func_38(32768))
				{
					func_44(&(Global_1357549->f_3));
					func_45(&Local_18);
					func_46();
					if (func_47(Local_18.f_45, iVar1))
					{
						func_48(&(Global_1357549->f_1691));
					}
					func_49(&Local_18);
					func_50(32768);
				}
				if (func_51() && func_47(Local_18.f_45, iVar1))
				{
					func_52(Local_18.f_45, &(Global_1357549->f_1691));
				}
				else if (Global_1357549->f_1691 != 0)
				{
					func_48(&(Global_1357549->f_1691));
				}
				break;
			case 2:
				func_53(&Local_18, 0);
				func_54("Shutdown camp....", 1, 1);
				SCRIPTS::TERMINATE_THIS_THREAD();
				break;
		}
		func_55();
	}
	func_53(&Local_18, 0);
	if (func_56() == -1)
	{
	}
	else
	{
		func_57();
	}
}

void func_1(var uParam0)
{
	func_53(uParam0, 1);
	func_58(uParam0->f_46, 1);
	if (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
	{
	}
	else
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

void func_2()
{
	int iVar0;

	Local_18.f_40 = 0;
	Local_18.f_41 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		Local_18.f_14[iVar0] = 0;
		iVar0++;
	}
}

void func_3()
{
	func_60(0, 13992/*func_59*/, 0);
	func_60(1, 14349/*func_61*/, 1);
	func_60(2, 14365/*func_62*/, 1);
	func_60(3, 14428/*func_63*/, 1);
	func_60(4, 14459/*func_64*/, 2);
	func_60(5, 14573/*func_65*/, 16);
	func_60(6, 14708/*func_66*/, 1);
	func_60(7, 15322/*func_67*/, 4);
	func_60(8, 15416/*func_68*/, 1);
	func_60(9, 15546/*func_69*/, 128);
	func_60(10, 15555/*func_70*/, 792);
	func_60(11, 15603/*func_71*/, 1024);
}

void func_4()
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_72(32, -1);
		func_73();
		func_74();
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	}
}

void func_5()
{
	func_75(32);
}

void func_6(int* iParam0)
{
	struct<2> Var0;

	Var0.f_1 = 20;
	MISC::_COPY_MEMORY(iParam0, &Var0, 65);
	func_79(iParam0, 0, 16283/*func_76*/, 16389/*func_77*/, 16828/*func_78*/);
	func_79(iParam0, 1, 17116/*func_80*/, 17162/*func_81*/, 17628/*func_82*/);
	func_79(iParam0, 2, 17658/*func_83*/, 17696/*func_84*/, 18124/*func_85*/);
	func_79(iParam0, 3, 18154/*func_86*/, 18180/*func_87*/, 18259/*func_88*/);
	func_79(iParam0, 4, 18267/*func_89*/, 18421/*func_90*/, 18259/*func_88*/);
	func_91(iParam0, 0);
}

void func_7(int* iParam0)
{
	struct<2> Var0;

	Var0.f_1 = 20;
	MISC::_COPY_MEMORY(iParam0, &Var0, 65);
	func_79(iParam0, 0, 18493/*func_92*/, 18571/*func_93*/, 18259/*func_88*/);
	func_79(iParam0, 1, 19727/*func_94*/, 19854/*func_95*/, 18259/*func_88*/);
	func_79(iParam0, 2, 18259/*func_88*/, 20696/*func_96*/, 18259/*func_88*/);
	func_79(iParam0, 3, 20854/*func_97*/, 21400/*func_98*/, 18259/*func_88*/);
	func_79(iParam0, 4, 22028/*func_99*/, 22258/*func_100*/, 18259/*func_88*/);
	func_79(iParam0, 5, 22681/*func_101*/, 22714/*func_102*/, 18259/*func_88*/);
	func_79(iParam0, 6, 23431/*func_103*/, 23516/*func_104*/, 18259/*func_88*/);
	func_91(iParam0, 0);
}

void func_8(int* iParam0)
{
	struct<2> Var0;

	Var0.f_1 = 20;
	MISC::_COPY_MEMORY(iParam0, &Var0, 65);
	func_79(iParam0, 0, 23571/*func_105*/, 23653/*func_106*/, 18259/*func_88*/);
	func_79(iParam0, 1, 23974/*func_107*/, 24010/*func_108*/, 18259/*func_88*/);
	func_79(iParam0, 2, 24479/*func_109*/, 24610/*func_110*/, 25019/*func_111*/);
	func_79(iParam0, 3, 25038/*func_112*/, 25105/*func_113*/, 25509/*func_114*/);
	func_91(iParam0, 0);
}

void func_9()
{
	struct<2> Var0;

	Var0.f_1 = 20;
	MISC::_COPY_MEMORY(&(Local_18.f_1934), &Var0, 65);
	func_79(&(Local_18.f_1934), 0, 25578/*func_115*/, 25615/*func_116*/, 18259/*func_88*/);
	func_79(&(Local_18.f_1934), 1, 25798/*func_117*/, 25821/*func_118*/, 18259/*func_88*/);
	func_79(&(Local_18.f_1934), 2, 26026/*func_119*/, 26073/*func_120*/, 18259/*func_88*/);
	func_79(&(Local_18.f_1934), 3, 26347/*func_121*/, 26398/*func_122*/, 18259/*func_88*/);
	func_79(&(Local_18.f_1934), 4, 26417/*func_123*/, 26473/*func_124*/, 18259/*func_88*/);
	func_91(&(Local_18.f_1934), 0);
}

void func_10(var uParam0)
{
	uParam0->f_45 = 2;
	uParam0->f_47 = 2;
	uParam0->f_1714 = { func_125(uParam0->f_45) };
	uParam0->f_1717 = 235f;
	uParam0->f_49 = 1;
	func_126();
	func_127();
	func_128();
	func_129();
	func_130(Local_3537[0 /*4*/], 461310338, 3, 0);
	func_130(Local_3537[1 /*4*/], 698292842, 0, 0);
	func_130(Local_3537[2 /*4*/], -473821519, 0, 0);
	func_130(Local_3537[3 /*4*/], 1397058998, 0, 0);
	func_130(Local_3537[4 /*4*/], -56704918, 0, 0);
	func_130(Local_3537[5 /*4*/], -281401951, 0, 0);
	if (func_131(6))
	{
		STREAMING::REQUEST_MODEL(924360705, false);
	}
	if (func_131(8))
	{
		iLocal_3729 = func_132();
		STREAMING::REQUEST_MODEL(iLocal_3729, false);
	}
	Global_1357549->f_1713[0] = ANIMSCENE::_CREATE_ANIM_SCENE("script@camp_upgrade@clemens_cove", 0, 0, false, true);
	Global_1357549->f_1713[1] = ANIMSCENE::_CREATE_ANIM_SCENE("script@camp_upgrade@clemens_cove", 0, 0, false, true);
	Global_1357549->f_1713[2] = ANIMSCENE::_CREATE_ANIM_SCENE("script@camp_upgrade@clemens_cove", 0, 0, false, true);
	ANIMSCENE::LOAD_ANIM_SCENE(&(Global_1357549->f_1713[0]));
	ANIMSCENE::LOAD_ANIM_SCENE(&(Global_1357549->f_1713[1]));
	ANIMSCENE::LOAD_ANIM_SCENE(&(Global_1357549->f_1713[2]));
	ANIMSCENE::_0xDF7B5144E25CD3FE(&(Global_1357549->f_1713[2]), "PBL_LEVEL_4");
	ANIMSCENE::_0xDF7B5144E25CD3FE(&(Global_1357549->f_1713[1]), "PBL_LEVEL_3");
	ANIMSCENE::_0xDF7B5144E25CD3FE(&(Global_1357549->f_1713[0]), "PBL_LEVEL_2");
}

int func_11()
{
	return 1;
}

int func_12(int iParam0)
{
	switch (func_56())
	{
		case -1:
			return (Global_1357549->f_1494 && iParam0) != 0;
	}
	return 0;
}

void func_13(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	if (uParam0->f_62 != -1 && uParam0->f_64 == -1)
	{
		Call_Loc((uParam0->f_1[uParam0->f_62 /*3*/])->f_1);
		uParam0->f_64 = StackVal;
	}
	while (uParam0->f_64 != -1)
	{
		if (uParam0->f_62 != -1)
		{
			Call_Loc((uParam0->f_1[uParam0->f_62 /*3*/])->f_2);
		}
		uParam0->f_62 = uParam0->f_64;
		Call_Loc(&uParam0->f_1[uParam0->f_62 /*3*/]);
		Call_Loc((uParam0->f_1[uParam0->f_62 /*3*/])->f_1);
		uParam0->f_64 = StackVal;
		iVar0++;
		if (iVar0 > 10)
		{
		}
	else
	{
		}
	}
}

void func_14()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_38(1) && func_133(0, 0, 1))
	{
		return;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(&(Global_1357549->f_3[0])) || !VOLUME::_0x92A78D0BEDB332A3(&(Global_1357549->f_3[2])))
	{
		return;
	}
	if ((func_134(&Global_1935630, 16384) || func_137(func_136(func_135()), 256)) || STREAMING::_0x99F92061EFE908BA())
	{
		return;
	}
	iVar0 = func_138(Global_1359489->f_10);
	if (func_139(iVar0, Global_1359489->f_10))
	{
		func_140(iVar0);
	}
	iVar1 = Local_18.f_1712;
	if (func_139((Global_1357549->f_1675[iVar1 /*5*/])->f_3, -1))
	{
		func_140((Global_1357549->f_1675[iVar1 /*5*/])->f_3);
	}
	iVar2 = Local_18.f_1712 + 1;
	if (iVar2 >= 3)
	{
		iVar2 = 0;
	}
	Local_18.f_1712 = iVar2;
}

void func_15()
{
	var uVar0;

	if (func_141())
	{
		if (!func_142())
		{
			func_143(1);
			func_144(32);
		}
	}
	else if (func_12(32768))
	{
		if (func_145(&uVar0))
		{
			if (!func_142())
			{
				func_143(1);
			}
			func_146();
			func_147(32);
			func_143(0);
		}
		if (func_142())
		{
			func_143(0);
		}
		if ((func_148() == 7 && func_149()) && !func_150(67))
		{
			if (!func_151(-999503751))
			{
				func_152(-999503751);
			}
			if (!func_151(81053684))
			{
				func_152(81053684);
			}
			if (!func_151(-1719060085))
			{
				func_152(-1719060085);
			}
			if (!func_151(-2061583405))
			{
				func_152(-2061583405);
			}
		}
	}
	else
	{
		if (!func_142())
		{
			func_143(1);
			func_144(32);
		}
		if ((func_148() == 7 && func_149()) && !func_150(67))
		{
			if (func_151(-999503751))
			{
				func_153(-999503751);
			}
			if (func_151(81053684))
			{
				func_153(81053684);
			}
			if (func_151(-1719060085))
			{
				func_153(-1719060085);
			}
			if (func_151(-2061583405))
			{
				func_153(-2061583405);
			}
		}
	}
}

void func_16()
{
	func_154();
}

int func_17()
{
	switch (Local_18.f_51.f_20)
	{
		case 14:
		case 15:
		case 16:
			return 0;
		default:
			break;
	}
	return 1;
}

void func_18(float fParam0, float fParam1, float fParam2)
{
	func_155(fParam0, fParam1, fParam2);
	func_157(func_156());
	func_158(MONEY::_MONEY_GET_CASH_BALANCE());
}

int func_19()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (MISC::IS_BIT_SET(Local_18.f_41, iVar1))
		{
		}
		else
		{
			if (!MISC::IS_BIT_SET(Local_18.f_40, iVar1))
			{
				if (func_159(iVar1))
				{
					MISC::SET_BIT(&(Local_18.f_40), iVar1);
					Local_18.f_27[iVar1] = MISC::GET_GAME_TIMER() + 20000;
				}
			}
			if (MISC::IS_BIT_SET(Local_18.f_40, iVar1))
			{
				Call_Loc(&Local_18.f_1[iVar1]);
				if (StackVal)
				{
					MISC::SET_BIT(&(Local_18.f_41), iVar1);
				}
				else if (MISC::GET_GAME_TIMER() > &Local_18.f_27[iVar1])
				{
					MISC::SET_BIT(&(Local_18.f_41), iVar1);
				}
			}
			if (!MISC::IS_BIT_SET(Local_18.f_41, iVar1))
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	if (iVar0 == 0)
	{
		return 1;
	}
	return 0;
}

void func_20(int iParam0)
{
	Local_18 = iParam0;
}

void func_21(var uParam0)
{
	func_160(uParam0);
	func_161(&(Global_1357549->f_3[0]), &(Global_1357549->f_3[2]), &(Global_1357549->f_3[4]), &(Global_1357549->f_3[5]));
	func_162(&(Global_1357549->f_3[2]));
	func_163(uParam0);
	func_164();
	if (func_12(32768))
	{
		if (FIRE::IS_ENTITY_ON_FIRE(Global_35))
		{
			FIRE::STOP_ENTITY_FIRE(Global_35, 1);
		}
		if (!func_38(2048))
		{
			if (!func_12(64))
			{
				func_165(0);
			}
			PLAYER::_0x9461A8FAB0378E5B(PLAYER::PLAYER_ID(), 1);
			if (!func_38(67108864))
			{
				FIRE::_0x24DB6B9F2B719043(0.1f);
			}
		}
	}
	else if (func_38(2048))
	{
		PLAYER::_0x9461A8FAB0378E5B(PLAYER::PLAYER_ID(), 0);
	}
	if (!func_12(32768) && func_38(2048))
	{
		if (!func_12(64))
		{
			func_165(1);
		}
		if (!func_38(67108864))
		{
			FIRE::_0x24DB6B9F2B719043(-1f);
		}
	}
	if (func_38(512))
	{
		if (!func_38(2))
		{
			PAD::DISABLE_CONTROL_ACTION(0, -1616532217, false);
		}
	}
	if (func_166())
	{
		if (!func_12(1024))
		{
			AUDIO::SET_AUDIO_FLAG("EnableIdleMusic", false);
			func_147(1024);
		}
	}
	else if (func_12(1024))
	{
		AUDIO::SET_AUDIO_FLAG("EnableIdleMusic", true);
		func_144(1024);
	}
	if (MISC::GET_GAME_TIMER() <= Global_1357549->f_1892)
	{
		func_167(4194304);
	}
	else
	{
		func_50(4194304);
	}
	if ((((!func_12(262144) && func_168(&(Global_1357549->f_3[2]), Global_36)) && !func_12(4)) && !func_12(2)) && func_148() != 8)
	{
		CAM::_0x632BE8D84846FA56();
	}
	if (Local_18.f_2019 != 0)
	{
		if (!func_38(16777216))
		{
			MAP::_0x1392105DA88BBFFB(Local_18.f_2019, Local_18.f_2019.f_3, Local_18.f_2019.f_4, Local_18.f_2019.f_2, Local_18.f_2019.f_1);
			func_167(16777216);
		}
	}
	else if (func_38(16777216))
	{
		MAP::_0xE057FEA9A22EB3EE(Local_18.f_2019);
		func_50(16777216);
	}
	if (func_169())
	{
		if (!func_137(Local_18.f_47, 64))
		{
			func_170(Local_18.f_47, 64);
		}
	}
	else if (func_137(Local_18.f_47, 64))
	{
		func_171(Local_18.f_47, 64);
	}
	Global_1357549->f_1484 = MISC::GET_GAME_TIMER();
}

void func_22()
{
	char* sVar0;
	float fVar1;
	int iVar2;

	if (func_166())
	{
		return;
	}
	if (Global_1357549->f_1658 == 0)
	{
		if ((CLOCK::GET_CLOCK_SECONDS() % 20) != 0)
		{
			return;
		}
	}
	Global_1357549->f_1659[0] = 0;
	Global_1357549->f_1659[1] = 1;
	sVar0 = "script@common@cnv_camp@grief@tent@tentgrief";
	fVar1 = 21f;
	iVar2 = 0;
	while (iVar2 < 2)
	{
		if (VOLUME::_0x92A78D0BEDB332A3(&(Global_1357549->f_1663[iVar2])) == 0)
		{
			Global_1357549->f_1663[iVar2] = func_172(&(Global_1357549->f_1659[iVar2]));
		}
		switch (Global_1357549->f_1658)
		{
			case 0:
				if (func_173(iVar2))
				{
					if (func_174(iVar2))
					{
						if (func_175(Global_1357549->f_1651[iVar2 /*3*/]))
						{
							if (func_176(Global_1357549->f_1651[iVar2 /*3*/]) > fVar1)
							{
								if (func_177(&(Global_1357549->f_1659[iVar2]), 1, 1) || func_178(&(Global_1357549->f_1659[iVar2]), 8))
								{
									Global_1357549->f_1666 = 0;
									Global_1357549->f_1667 = 0;
									Global_1357549->f_1658 = 1;
								}
							}
							else if (func_176(Global_1357549->f_1651[iVar2 /*3*/]) > (fVar1 - 5f) && Global_1357549->f_1666 == 0)
							{
								Global_1357549->f_1666 = 1;
								func_180(func_179(&(Global_1357549->f_1659[iVar2])), "EXPLAIN_YOURSELF", 272211449, Global_35, 1, 0, 0, 1);
								TASK::TASK_LOOK_AT_ENTITY(func_179(&(Global_1357549->f_1659[iVar2])), Global_35, 2000, 0, 51, 0);
							}
							else if (func_176(Global_1357549->f_1651[iVar2 /*3*/]) > (fVar1 - 12f) && Global_1357549->f_1667 == 0)
							{
								Global_1357549->f_1667 = 1;
								TASK::TASK_LOOK_AT_ENTITY(func_179(&(Global_1357549->f_1659[iVar2])), Global_35, 2000, 0, 51, 0);
								func_180(func_179(&(Global_1357549->f_1659[iVar2])), "INTRUDED_AGAIN", 272211449, Global_35, 1, 0, 0, 1);
							}
							else if (Global_1357549->f_1668 == 0)
							{
								if (func_181())
								{
									Global_1357549->f_1668 = 1;
									func_180(func_179(&(Global_1357549->f_1659[iVar2])), "ITEM_PICKUP_REACT", -128067431, Global_35, 1, 0, 0, 1);
								}
							}
						}
						else
						{
							func_180(func_179(&(Global_1357549->f_1659[iVar2])), "GET_OUT", 272211449, Global_35, 1, 0, 0, 1);
							func_182(Global_1357549->f_1651[iVar2 /*3*/], 0);
						}
					}
					else if (func_175(Global_1357549->f_1651[iVar2 /*3*/]))
					{
						Global_1357549->f_1666 = 0;
						Global_1357549->f_1667 = 0;
						Global_1357549->f_1668 = 0;
						func_183(Global_1357549->f_1651[iVar2 /*3*/]);
					}
				}
				break;
			case 1:
				if (func_175(Global_1357549->f_1651[iVar2 /*3*/]))
				{
					if (func_184(&(Global_1357549->f_1659[iVar2])))
					{
						Global_1357549->f_1669 = ANIMSCENE::_CREATE_ANIM_SCENE(sVar0, 0, 0, false, true);
						ANIMSCENE::LOAD_ANIM_SCENE(Global_1357549->f_1669);
						ANIMSCENE::_0xDF7B5144E25CD3FE(Global_1357549->f_1669, func_185(&(Global_1357549->f_1659[iVar2])));
						Global_1357549->f_1658 = 5;
					}
					else
					{
						func_186(&(Global_1357549->f_1659[iVar2]), 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
					}
				}
				break;
			case 5:
				if (func_175(Global_1357549->f_1651[iVar2 /*3*/]))
				{
					if (ANIMSCENE::_0x25557E324489393C(Global_1357549->f_1669))
					{
						if (ANIMSCENE::_0x477122B8D05E7968(Global_1357549->f_1669, 1, 0))
						{
							if (ANIMSCENE::_0x23E33CB9F4A3F547(Global_1357549->f_1669, func_185(&(Global_1357549->f_1659[iVar2]))))
							{
								func_187(&(Global_1357549->f_1659[iVar2]));
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Global_1357549->f_1669, func_185(&(Global_1357549->f_1659[iVar2])), true);
								PED::SET_PED_CONFIG_FLAG(Global_35, 174, true);
								ANIMSCENE::START_ANIM_SCENE(Global_1357549->f_1669);
								func_180(func_179(&(Global_1357549->f_1659[iVar2])), "LEAVE_NOW", 272211449, Global_35, 1, 0, 0, 1);
								Global_1357549->f_1658 = 6;
							}
						}
					}
				}
				break;
			case 6:
				if (func_175(Global_1357549->f_1651[iVar2 /*3*/]))
				{
					if (ANIMSCENE::_0xCDC5512A407CF08D(Global_1357549->f_1669))
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1065353216);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						ANIMSCENE::_0xAE6ADA8FE7E84ACC(Global_1357549->f_1669, func_185(&(Global_1357549->f_1659[iVar2])));
						ANIMSCENE::RESET_ANIM_SCENE(Global_1357549->f_1669, 0);
						ANIMSCENE::_DELETE_ANIM_SCENE(Global_1357549->f_1669);
						TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(func_179(&(Global_1357549->f_1659[iVar2])), 1030835986);
						PED::SET_PED_CONFIG_FLAG(func_179(&(Global_1357549->f_1659[iVar2])), 40, false);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
						_NAMESPACE48::_0x631CD2D77FDC0316(_NAMESPACE48::_0x32A1E3B83D501096(func_179(&(Global_1357549->f_1659[iVar2]))));
						func_188(&(Global_1357549->f_1659[iVar2]), 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
						func_189(Global_1357549->f_1651[iVar2 /*3*/]);
						Global_1357549->f_1658 = 7;
					}
				}
				break;
			case 7:
				if (func_175(Global_1357549->f_1651[iVar2 /*3*/]))
				{
					if (func_176(Global_1357549->f_1651[iVar2 /*3*/]) > 1.5f)
					{
						func_183(Global_1357549->f_1651[iVar2 /*3*/]);
						func_190(&(Global_1357549->f_1659[iVar2]));
						PED::SET_PED_CONFIG_FLAG(Global_35, 174, false);
						Global_1357549->f_1658 = 0;
					}
				}
				break;
		}
		iVar2++;
	}
}

void func_23()
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	switch (Global_1357549->f_11)
	{
		case 0:
			func_191();
			Global_1357549->f_11 = 1;
			break;
		case 1:
			func_192();
			break;
		case 2:
			break;
	}
}

void func_24()
{
	int iVar0;

	iVar0 = func_148();
	if (((iVar0 == 0 || iVar0 == 7) || iVar0 == 4) || iVar0 == 5)
	{
		if (!func_193(1024))
		{
			func_194(1024);
			func_167(-2147483648);
		}
		if (!func_193(64))
		{
			func_194(64);
			func_167(-2147483648);
		}
		if (iVar0 == 7)
		{
			if (!func_38(131072))
			{
				func_167(131072);
				func_167(-2147483648);
			}
		}
	}
	else if (func_166() && !func_195())
	{
		if (!func_193(64))
		{
			func_194(64);
			func_167(-2147483648);
		}
	}
	else if (func_38(-2147483648))
	{
		if (func_193(1024))
		{
			func_196(1024);
		}
		if (func_193(64))
		{
			func_196(64);
		}
		if (func_38(131072))
		{
			func_50(131072);
		}
		func_50(-2147483648);
	}
}

void func_25()
{
	if (func_12(32768) && !func_38(2048))
	{
		if (func_38(4096))
		{
			return;
		}
		if (MISC::GET_GAME_TIMER() < Local_18.f_50)
		{
			return;
		}
		if (func_133(0, 0, 1))
		{
			return;
		}
		func_167(4096);
	}
	if (func_38(4096))
	{
		if (MISC::GET_GAME_TIMER() < Local_18.f_50)
		{
			return;
		}
		if (!func_197())
		{
			return;
		}
		if (!func_38(8192))
		{
			func_198();
			Local_18.f_50 = MISC::GET_GAME_TIMER() + 5500;
			func_167(8192);
		}
		else
		{
			func_199();
			func_200();
			Local_18.f_50 = (MISC::GET_GAME_TIMER() + 120000);
		}
	}
}

void func_26()
{
}

void func_27(var uParam0, var uParam1)
{
	if (uParam1->f_5 == -15)
	{
		func_201(&(uParam1->f_5));
	}
	if (func_202(uParam1->f_5) && func_203(uParam1->f_5))
	{
		func_204(uParam0, uParam1);
		func_201(&(uParam1->f_5));
	}
}

void func_28()
{
	if (func_205(2))
	{
		if (func_206())
		{
			if (func_150(15))
			{
				if (func_150(4) && !func_150(37))
				{
					if (!func_207(605) && !func_208(605))
					{
						func_209(605, 0);
					}
				}
				else if (func_150(43))
				{
					if (!func_207(605) && !func_208(605))
					{
						func_209(605, 0);
					}
				}
			}
		}
		if (func_149() && func_150(73))
		{
			if (!func_207(606) && !func_208(606))
			{
				func_209(606, 0);
			}
		}
	}
	if (func_210() && !func_207(538))
	{
		if ((MAP::DOES_BLIP_EXIST(Local_18.f_51.f_14) && MAP::DOES_BLIP_EXIST(Local_18.f_51.f_15)) && MAP::DOES_BLIP_EXIST(Local_18.f_51.f_13))
		{
			func_209(538, 0);
		}
	}
}

void func_29()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (ENTITY::DOES_ENTITY_EXIST(Global_35) && !ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		iVar1 = 0;
		while (iVar1 < 15)
		{
			switch ((Local_18.f_3057[iVar1 /*21*/])->f_3)
			{
				case 0:
					if (func_38(4))
					{
						if (func_211(&(Local_18.f_3057[iVar1 /*21*/])))
						{
							func_212(Local_18.f_3057[iVar1 /*21*/], 1, 1);
						}
					}
					else if (VOLUME::_0x92A78D0BEDB332A3((Local_18.f_3057[iVar1 /*21*/])->f_4))
					{
						if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, (Local_18.f_3057[iVar1 /*21*/])->f_4, false, 0))
						{
							if (!func_213((Local_18.f_3057[iVar1 /*21*/])->f_6))
							{
								if (!func_211(&(Local_18.f_3057[iVar1 /*21*/])))
								{
									Local_18.f_3057[iVar1 /*21*/] = func_215(func_214(), (Local_18.f_3057[iVar1 /*21*/])->f_16, (Local_18.f_3057[iVar1 /*21*/])->f_4, 2, 1, 0, (Local_18.f_3057[iVar1 /*21*/])->f_17, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
									if ((iVar1 == 0 || iVar1 == 8) || iVar1 == 4)
									{
										func_216(&(Local_18.f_3057[iVar1 /*21*/]), 26, 1, 1);
									}
									if ((Local_18.f_3057[iVar1 /*21*/])->f_18 != -1)
									{
										func_217(&(Local_18.f_3057[iVar1 /*21*/]), (Local_18.f_3057[iVar1 /*21*/])->f_18, 0, 1);
									}
								}
								else if (((Local_18.f_3057[iVar1 /*21*/])->f_17 == 0 && func_218(&(Local_18.f_3057[iVar1 /*21*/]), 1)) || ((Local_18.f_3057[iVar1 /*21*/])->f_17 != 0 && func_219(&(Local_18.f_3057[iVar1 /*21*/]), 1)))
								{
									func_212(Local_18.f_3057[iVar1 /*21*/], 1, 1);
									(Local_18.f_3057[iVar1 /*21*/])->f_3 = 1;
								}
							}
						}
					}
					break;
				case 1:
					if (func_220(Global_35, 0, 1, 1) == joaat("weapon_kit_binoculars"))
					{
						WEAPON::_0xFCCC886EDE3C63EC(Global_35, 2, 0);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_LOOK_AT_COORD(0, (Local_18.f_3057[iVar1 /*21*/])->f_6, -1, 1, 51, 1);
					TASK::TASK_PAUSE(0, 400);
					TASK::TASK_TURN_PED_TO_FACE_COORD(0, (Local_18.f_3057[iVar1 /*21*/])->f_6, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
					TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0, 0);
					(Local_18.f_3057[iVar1 /*21*/])->f_3 = 2;
					break;
				case 2:
					if (!CAM::DOES_CAM_EXIST((Local_18.f_3057[iVar1 /*21*/])->f_5))
					{
						if (!func_213((Local_18.f_3057[iVar1 /*21*/])->f_9))
						{
							(Local_18.f_3057[iVar1 /*21*/])->f_5 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, (Local_18.f_3057[iVar1 /*21*/])->f_9, (Local_18.f_3057[iVar1 /*21*/])->f_12, (Local_18.f_3057[iVar1 /*21*/])->f_15, false, 2);
						}
					}
					if ((Local_18.f_3057[iVar1 /*21*/])->f_19 != -1)
					{
						func_221(iVar1);
						if (func_211((Local_18.f_3057[iVar1 /*21*/])->f_1))
						{
							if (func_222(iVar1))
							{
							}
							else
							{
								if (func_213((Local_18.f_3057[iVar1 /*21*/])->f_9))
								{
									if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
									{
										CAM::SET_GAMEPLAY_COORD_HINT((Local_18.f_3057[iVar1 /*21*/])->f_6, -1, 2000, 2000, 0);
									}
								}
								else if (CAM::DOES_CAM_EXIST((Local_18.f_3057[iVar1 /*21*/])->f_5))
								{
									if (!CAM::IS_CAM_RENDERING((Local_18.f_3057[iVar1 /*21*/])->f_5))
									{
										CAM::SET_CAM_ACTIVE((Local_18.f_3057[iVar1 /*21*/])->f_5, true);
										CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
									}
								}
								func_223(iVar1);
								HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, 1f, 2, 1, 799218720, (Local_18.f_3057[iVar1 /*21*/])->f_20, 0);
								if (func_211((Local_18.f_3057[iVar1 /*21*/])->f_2))
								{
									if (func_224((Local_18.f_3057[iVar1 /*21*/])->f_2, 1))
									{
										if ((Local_18.f_3057[iVar1 /*21*/])->f_19 != -1)
										{
											iVar2 = 0;
											while (iVar2 < 15)
											{
												(Local_18.f_3057[iVar2 /*21*/])->f_3 = 0;
												func_212(Local_18.f_3057[iVar2 /*21*/], 1, 1);
												func_212(&((Local_18.f_3057[iVar2 /*21*/])->f_1), 1, 1);
												func_212(&((Local_18.f_3057[iVar2 /*21*/])->f_2), 1, 1);
												iVar2++;
											}
										}
										(Local_18.f_3057[iVar1 /*21*/])->f_3 = 4;
									}
								}
								Jump @1081; //curOff = 1059
								Jump @1081; //curOff = 1062
								func_225(Local_18.f_3057[iVar1 /*21*/]);
							}
							iVar1++;
						}
					}
			}
		}
	}

void func_30()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (func_226(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = PED::GET_MOUNT(PLAYER::PLAYER_PED_ID());
	}
	else
	{
		iVar0 = PED::_0x4C8B59171957BCF7(PLAYER::PLAYER_PED_ID());
	}
	if (func_227(iVar0))
	{
		if (func_228(iVar0) && func_229(iVar0))
		{
			if (Global_1357549->f_1897 != iVar0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1357549->f_1897))
				{
					func_230();
				}
				func_231(iVar0, Local_18.f_45, 1);
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(Global_1357549->f_1897) && Global_1357549->f_1897 == iVar0)
		{
			func_230();
		}
		else if ((ENTITY::DOES_ENTITY_EXIST(Global_1357549->f_1897) && Global_1357549->f_1897 != iVar0) && func_226(PLAYER::PLAYER_PED_ID()))
		{
			iVar1 = func_232(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), 2);
			if (TASK::_0x841475AC96E794D1(iVar1))
			{
				if (func_233(iVar0, TASK::_0xA8452DD321607029(iVar1, 1), 1) < 8f)
				{
					if (!func_207(604))
					{
						func_209(604, 0);
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1357549->f_1897))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_1357549->f_1897) && func_227(Global_1357549->f_1897))
		{
			if (!MAP::DOES_BLIP_EXIST(Global_1357549->f_1897.f_1))
			{
				if (!MAP::_0x9FA00E2FC134A9D0(Global_1357549->f_1897))
				{
					Global_1357549->f_1897.f_1 = MAP::_0x23F74C2FDA6E7C61(-1230993421, Global_1357549->f_1897);
					MAP::_0x662D364ABF16DE2F(Global_1357549->f_1897.f_1, 287169430);
					MAP::_0x662D364ABF16DE2F(Global_1357549->f_1897.f_1, -201249929);
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1357549->f_1897.f_1, "BLIP_CAMP_HORSE");
				}
			}
			else if (MAP::GET_BLIP_FROM_ENTITY(Global_1357549->f_1897) != Global_1357549->f_1897.f_1)
			{
				MAP::REMOVE_BLIP(&(Global_1357549->f_1897.f_1));
			}
		}
		else
		{
			if (MAP::DOES_BLIP_EXIST(Global_1357549->f_1897.f_1))
			{
				MAP::REMOVE_BLIP(&(Global_1357549->f_1897.f_1));
			}
			if (Global_40.f_4283.f_567)
			{
				func_230();
			}
		}
	}
	else if (MAP::DOES_BLIP_EXIST(Global_1357549->f_1897.f_1))
	{
		MAP::REMOVE_BLIP(&(Global_1357549->f_1897.f_1));
	}
}

void func_31(var uParam0)
{
	if (((func_234(-1461741225, 1) || func_234(-404697685, 1)) || func_234(1674863702, 1)) || func_234(-1917134080, 1))
	{
		return;
	}
	if (func_235())
	{
		if (!func_175(&(uParam0->f_3480)))
		{
			func_236();
			func_182(&(uParam0->f_3480), 0);
		}
		if (func_176(&(uParam0->f_3480)) > 10f && !func_166())
		{
			func_237();
		}
	}
}

int func_32()
{
	return Global_40.f_4283.f_4;
}

void func_33(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_238(iParam0);
	if (iVar0 != -1)
	{
		if (!func_239(19, 4))
		{
			if (VOLUME::_0x92A78D0BEDB332A3((Global_1914319->f_3[19 /*446*/])->f_26))
			{
				VOLUME::_0x43F867EF5C463A53((Global_1914319->f_3[19 /*446*/])->f_26);
			}
			switch (iParam0)
			{
				case 1:
					iVar1 = VOLUME::_CREATE_VOLUME_BOX(-142.2027f, -23.89317f, 95.0883f, 0f, 0f, -19.50431f, 2f, 1.8f, 5f);
					break;
				case 2:
					iVar1 = VOLUME::_CREATE_VOLUME_BOX(674.9565f, -1251.201f, 43.0152f, 0f, 0f, -101.9433f, 2f, 1.8f, 5f);
					break;
				case 3:
					iVar1 = VOLUME::_CREATE_VOLUME_BOX(1874.646f, -1859.152f, 41.8f, 0f, 0f, -99.40799f, 2f, 1.8f, 5f);
					break;
				case 6:
					iVar1 = VOLUME::_CREATE_VOLUME_BOX(2365.858f, 1346.675f, 105.1305f, 0f, 0f, -22.49011f, 2f, 1.8f, 5f);
					break;
			}
			func_240(19, 16384);
			func_240(19, 32768);
			func_241(19, -1, &(Global_1357549->f_3[4]), iParam1, iVar1, 0, 12, -1082130432, 0, 0);
		}
		if (func_242(iVar0))
		{
			func_243(iVar0, 19, 0, 1);
		}
	}
}

int func_34(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 6:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_35(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (func_38(8))
	{
		if (!uParam1->f_1029)
		{
			func_244(uParam1);
			uParam1->f_1029 = 1;
		}
		return;
	}
	else if (uParam1->f_1029)
	{
		uParam1->f_1029 = 0;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_245(iParam0, iVar1, (*uParam1)[iVar1 /*257*/], &iVar0);
		iVar1++;
	}
}

void func_36(int iParam0)
{
	if ((MISC::GET_FRAME_COUNT() % 60) == 0 || iParam0)
	{
		Local_18.f_3054 = func_246(Local_18.f_2024[0 /*257*/]);
		Local_18.f_3055 = func_246(Local_18.f_2024[2 /*257*/]);
		Local_18.f_3056 = func_246(Local_18.f_2024[1 /*257*/]);
		Global_1357549->f_1899 = func_247();
		Global_1357549->f_1900 = func_248(Local_18.f_3056, Global_1357549->f_1899);
	}
}

void func_37()
{
	if (func_12(8192) || func_249())
	{
		func_250(1000);
		return;
	}
	if (Local_18.f_51.f_20 != 0)
	{
		func_250(1000);
		return;
	}
	if (func_251(Local_18.f_51.f_1, 1) || func_251(Local_18.f_51.f_6, 1))
	{
		func_250(1000);
		return;
	}
}

int func_38(int iParam0)
{
	switch (func_56())
	{
		case -1:
			return (Global_1357549->f_1495 && iParam0) != 0;
	}
	return 0;
}

void func_39(bool bParam0)
{
	HUD::_0x4CC5F2FC1332577F(-950624750);
	if (bParam0 && func_252())
	{
		func_253();
	}
	else
	{
		func_254();
	}
}

void func_40(int iParam0)
{
	int iVar0;

	iVar0 = func_238(iParam0);
	if (iVar0 != -1)
	{
		if (func_239(19, 4))
		{
			func_255(19);
		}
		if (!func_242(iVar0))
		{
			func_243(iVar0, 19, 1, 1);
		}
	}
}

void func_41(var uParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	if ((BUILTIN::VDIST(Global_36, 0f, 0f, 0f) <= 5f || func_134(&Global_1935630, 16384)) || func_134(&Global_1935630, 8388608))
	{
		return;
	}
	if (func_256(uParam0, 1))
	{
		return;
	}
	uParam0->f_63++;
	if (uParam0->f_63 < 10)
	{
		return;
	}
	uParam0->f_63 = 0;
	bVar0 = false;
	bVar1 = ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADING_OUT());
	bVar2 = func_257();
	iVar3 = 0;
	while (iVar3 < uParam0->f_61)
	{
		switch (((*uParam0)[iVar3 /*3*/])->f_1)
		{
			case 1:
				if (VOLUME::_0x92A78D0BEDB332A3(uParam0[iVar3 /*3*/]))
				{
					if (VOLUME::_0xF256A75210C5C0EB(uParam0[iVar3 /*3*/], Global_36))
					{
						if (!bVar1 && !bVar2)
						{
							if ((!func_258((*uParam0)[iVar3 /*3*/], 1) && func_259(iParam1)) && !func_260(iParam1, 16))
							{
								func_262(iParam1, func_261(), -1, 0, -1, 0);
								func_263((*uParam0)[iVar3 /*3*/], 1);
							}
							func_264(iParam1, 0);
						}
						bVar0 = true;
					}
				}
				break;
			default:
				break;
		}
		iVar3++;
	}
	if (func_56() == -1)
	{
		if (func_265() != bVar0)
		{
			iVar4 = 0;
			if (bVar0)
			{
				iVar4 = 2;
			}
			else
			{
				iVar4 = 1;
			}
			func_266();
			func_267(Global_1310750->f_16071, 0, iVar4, 0, 0);
		}
	}
	func_268(bVar0);
	if (func_56() == -1)
	{
		func_270((iParam1 == func_269() && bVar0));
	}
}

void func_42(var uParam0)
{
	func_271(&Local_3764, 9);
	func_272(0, 0);
	func_273(&uLocal_3591, &uLocal_3746, &uLocal_3745, vLocal_3747, iLocal_3532, 715447956, iLocal_3533);
	func_273(&uLocal_3709, &uLocal_3711, &uLocal_3710, vLocal_3714, iLocal_3707, -1915584842, iLocal_3708);
	func_274(&uLocal_3731, &((Local_3764[0 /*8*/])->f_1), vLocal_3732, iLocal_3730, 1915624693);
	func_274(&uLocal_3741, &((Local_3764[2 /*8*/])->f_1), vLocal_3742, iLocal_3740, -1860765597);
	func_274(&uLocal_3736, &((Local_3764[1 /*8*/])->f_1), vLocal_3737, iLocal_3735, -863091531);
	func_275(&uLocal_3751, &uLocal_3753, &uLocal_3752, vLocal_3754, 1476460788, iLocal_3750);
	func_275(&uLocal_3758, &uLocal_3759, &uLocal_3760, vLocal_3761, -1309546012, iLocal_3757);
	func_276(&uLocal_3534, &uLocal_3535, &uLocal_3536, &uLocal_3514);
	func_277(&uLocal_3535, &uLocal_3514);
	func_278(&uLocal_3519, &uLocal_3520);
	func_279(&Local_3537, &uLocal_3590, &iLocal_3531, 1);
	func_280();
	func_281(0);
	func_282();
	func_283(&(uParam0->f_51), &Local_3626);
	func_284();
	func_285();
}

void func_43(int* iParam0, var uParam1)
{
	if (func_286())
	{
		func_287(iParam0);
		func_288(0, 0);
		func_289();
	}
	func_290(iParam0);
	func_291(iParam0, uParam1);
	func_292(iParam0);
	func_293(iParam0, uParam1);
	if (!func_295(func_294()))
	{
		return;
	}
	func_296(iParam0);
}

void func_44(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = uParam0[2];
	if (VOLUME::_0x92A78D0BEDB332A3(iVar0))
	{
		func_297(iVar0);
		POPULATION::_0x74C2B3DC0B294102(iVar0);
		POPULATION::_0xA1CFB35069D23C23(iVar0);
		COMPANION::_0x7274F84B1501B523(iVar0);
	}
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (VOLUME::_0x92A78D0BEDB332A3(uParam0[iVar1]))
		{
			func_298(uParam0[iVar1]);
		}
		iVar1++;
	}
}

void func_45(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	uParam0->f_1713 = 24;
	iVar0 = 0;
	Global_1357549->f_3[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Clemens volCampAreas[CVA_INNER]");
	func_299(Global_1357549->f_3[0], &iVar0, 0, 681.4077f, -1256.627f, 45f, 0f, 0f, -24f, 13f, 19f, 35f, 665633627, 0);
	func_299(Global_1357549->f_3[0], &iVar0, 0, 659.684f, -1253.208f, 45f, 0f, 0f, 30f, 11f, 18f, 35f, 665633627, 0);
	func_299(Global_1357549->f_3[0], &iVar0, 0, 669.8141f, -1242.698f, 53.68411f, 0f, 0f, -17f, 34f, 17f, 35f, -1612834106, 0);
	Global_1357549->f_3[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Clemens volCampAreas[CVA_WALK]");
	func_299(Global_1357549->f_3[1], &iVar0, 1, 671.1957f, -1249.653f, 61.65944f, 0f, 0f, -54.88453f, 30.06073f, 23.79622f, 21.33633f, 665633627, 0);
	Global_1357549->f_3[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Clemens volCampAreas[CVA_OUTER]");
	Global_1357549->f_3[3] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Clemens volCampAreas[CVA_OUTER_THRESHOLD]");
	func_299(Global_1357549->f_3[2], Global_1357549->f_3[3], 2, 676.1342f, -1244.41f, 60f, 0f, 0f, 0f, 34f, 40f, 35f, 665633627, 0);
	func_299(Global_1357549->f_3[2], Global_1357549->f_3[3], 2, 714.5854f, -1246.16f, 60f, 0f, 0f, 0f, 25f, 25f, 35f, 665633627, 0);
	func_299(Global_1357549->f_3[2], Global_1357549->f_3[3], 2, 668.8077f, -1250.38f, 67.0239f, 0f, 0f, -45f, 74f, 49f, 37f, 665633627, 0);
	func_299(Global_1357549->f_3[2], Global_1357549->f_3[3], 2, 626.6451f, -1193.235f, 69.3287f, 0f, 0f, 24f, 13f, 19f, 40f, 665633627, 0);
	func_299(Global_1357549->f_3[2], Global_1357549->f_3[3], 2, 651.0234f, -1192.038f, 70.30768f, 0f, 0f, -33f, 30f, 10f, 40f, 665633627, 0);
	Global_1357549->f_3[4] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Clemens volCampAreas[CVA_SURROUNDING]");
	Global_1357549->f_3[5] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Clemens volCampAreas[CVA_SURROUNDING_THRESHOLD]");
	func_299(Global_1357549->f_3[4], Global_1357549->f_3[5], 4, 687.9815f, -1224.231f, 68.0941f, 0f, 0f, -24f, 94f, 103f, 34f, 665633627, 0);
	Global_1357549->f_3[6] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(652.9659f, -1245.305f, 43.90106f, 0f, 0f, 51.79757f, 8.125f, 4.6f, 2.65802f, "Clemens volCampAreas[CVA_PROPERTY]");
	iLocal_3516 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(687.8383f, -1237.403f, 44.0555f, 0f, 0f, 150.7247f, 9.113432f, 4.664736f, 3.323739f, "Clemens - m_volMusterFront");
	iLocal_3517 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(696.5735f, -1258.482f, 44.76106f, 0f, 0f, -125.4608f, 15.30894f, 7.055721f, 3.96173f, "Clemens - m_volMusterFrontSide");
	iLocal_3518 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(658.611f, -1263.751f, 44.0555f, 0f, 0f, -106.5222f, 8.476138f, 5.510819f, 3.510776f, "Clemens - m_volMusterBack");
	iVar1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(652.6449f, -1245.957f, 43.90106f, 0f, 0f, 51.79755f, 6.472132f, 4.296463f, 2.65802f, "Clemens - eITEM_CLEMENS_HORSESHOE");
	(Local_18.f_3057[0 /*21*/])->f_4 = iVar1;
	iVar2 = 0;
	func_300(&iVar2, 4);
	func_300(&iVar2, 5);
	func_300(&iVar2, 0);
	func_300(&iVar2, 15);
	COMPANION::_0x3CAAD93FA5B9579A(iLocal_3516, 2, iVar2);
	COMPANION::_0x3CAAD93FA5B9579A(iLocal_3517, 2, iVar2);
	COMPANION::_0x3CAAD93FA5B9579A(iLocal_3518, 2, iVar2);
	func_301();
	if (func_32() == 1)
	{
		func_33(2, uParam0->f_46);
	}
	else
	{
		func_40(2);
	}
}

void func_46()
{
}

int func_47(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 5:
		case 6:
		case 7:
			if (iParam1 == 1)
			{
				return 1;
			}
			break;
		case 8:
			return func_150(73);
	}
	return 0;
}

void func_48(var uParam0)
{
	if (MAP::DOES_BLIP_EXIST(uParam0->f_4))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_4));
	}
	MISC::CLEAR_BIT(&(uParam0->f_1), 2);
	func_302(uParam0);
	func_303(uParam0);
	if (MISC::IS_BIT_SET(uParam0->f_1, 6))
	{
		func_304(1, uParam0);
	}
	if (uParam0->f_6 != -1)
	{
		GRAPHICS::_0x9CF1836C03FB67A2(&(uParam0->f_6), 0);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_5))
	{
		VOLUME::_0x43F867EF5C463A53(uParam0->f_5);
	}
	func_305(uParam0);
}

void func_49(var uParam0)
{
	int iVar0;
	int iVar1;

	VOLUME::_0xFD010A2154B40676(&(Global_1357549->f_3[2]), 1030835986);
	VOLUME::_0xFD010A2154B40676(&(Global_1357549->f_3[3]), 1030835986);
	if (uParam0->f_1713 != 0)
	{
		VOLUME::_0xB469CFD9E065EB99(&(Global_1357549->f_3[4]), uParam0->f_1713);
	}
	iVar0 = &Global_1357549->f_3[2];
	POPULATION::_0x18262CAFEBB5FBE1(iVar0, 0, 4787584, 0, -1, -1, 0);
	POPULATION::_0xB56D41A694E42E86(iVar0, 0, 4787584, 0, -1, -1, 0);
	func_306(iVar0, 0);
	func_307(&(Global_1357549->f_3[4]), 0, 0, 0);
	func_308(iVar0, 0);
	func_309(iVar0, 0, 0);
	iVar1 = 0;
	func_300(&iVar1, 0);
	func_300(&iVar1, 14);
	func_300(&iVar1, 16);
	COMPANION::_0x3CAAD93FA5B9579A(iVar0, 2, iVar1);
	func_310(Local_18.f_47, Local_18.f_1714, Local_18.f_1717, &(Global_1357549->f_3[6]));
}

void func_50(int iParam0)
{
	switch (func_56())
	{
		case -1:
			Global_1357549->f_1495 = (Global_1357549->f_1495 - (Global_1357549->f_1495 && iParam0));
			break;
	}
}

bool func_51()
{
	return Global_40.f_4283.f_322 > 1;
}

void func_52(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	switch (*uParam1)
	{
		case 0:
			if (func_311(iParam0))
			{
				func_312(iParam0, uParam1);
				func_313(uParam1, 2);
			}
			break;
		case 2:
			if (func_311(iParam0))
			{
				if (!MISC::IS_BIT_SET(uParam1->f_1, 2))
				{
					if (MISC::IS_BIT_SET(uParam1->f_1, 5))
					{
						func_303(uParam1);
					}
					if (!MISC::IS_BIT_SET(uParam1->f_1, 3))
					{
						func_314(uParam1);
					}
					if ((!ENTITY::IS_ENTITY_DEAD(Global_35) && VOLUME::_0x92A78D0BEDB332A3(uParam1->f_5)) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam1->f_5, true, 0))
					{
						PAD::DISABLE_CONTROL_ACTION(0, 613911080, false);
					}
					if (!PED::IS_PED_ON_MOUNT(Global_35))
					{
						if (MISC::IS_BIT_SET(uParam1->f_1, 4))
						{
							func_315(uParam1->f_8, 0);
							MISC::CLEAR_BIT(&(uParam1->f_1), 4);
						}
					}
					else if (!MISC::IS_BIT_SET(uParam1->f_1, 4))
					{
						func_315(uParam1->f_8, 1);
						MISC::SET_BIT(&(uParam1->f_1), 4);
					}
				}
				else
				{
					if (MISC::IS_BIT_SET(uParam1->f_1, 3))
					{
						func_302(uParam1);
					}
					if (!MISC::IS_BIT_SET(uParam1->f_1, 5))
					{
						func_316(uParam1);
					}
					if ((ENTITY::IS_ENTITY_DEAD(Global_35) || !VOLUME::_0x92A78D0BEDB332A3(uParam1->f_5)) || !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam1->f_5, true, 0))
					{
						MISC::CLEAR_BIT(&(uParam1->f_1), 2);
					}
					PAD::DISABLE_CONTROL_ACTION(0, 1287709438, false);
					PAD::DISABLE_CONTROL_ACTION(0, -209515122, false);
					PAD::DISABLE_CONTROL_ACTION(0, -2131587435, false);
					PAD::DISABLE_CONTROL_ACTION(0, 255439828, false);
					HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(1842627646, "BLIP_CAMP_HITCH", 1, 0, 0, 0);
				}
			}
			else
			{
				if (MISC::IS_BIT_SET(uParam1->f_1, 5))
				{
					func_303(uParam1);
				}
				if (MISC::IS_BIT_SET(uParam1->f_1, 3))
				{
					func_302(uParam1);
				}
				if (MISC::IS_BIT_SET(uParam1->f_1, 2))
				{
					MISC::CLEAR_BIT(&(uParam1->f_1), 2);
				}
			}
			if (MISC::IS_BIT_SET(uParam1->f_1, 3))
			{
				if (!MISC::IS_BIT_SET(uParam1->f_1, 4))
				{
					if (func_219(uParam1->f_8, 1))
					{
						if (func_317(&iVar0))
						{
							func_318(uParam1->f_8, 1);
							MISC::SET_BIT(&(uParam1->f_1), 2);
						}
						else
						{
							switch (iVar0)
							{
								case -1:
									break;
								case 0:
									if (!func_207(611))
									{
										func_319("TF_CAMP_HITCH_MANAGE_HORSES_NO_HORSES", 10000, 0, 0, 0, 1);
										func_320(611);
									}
									break;
								case 1:
									if (!func_207(612))
									{
										func_319("TF_CAMP_HITCH_MANAGE_HORSES_HORSE_DEAD", 10000, 0, 0, 0, 1);
										func_320(612);
									}
									break;
								case 2:
									if (!func_321())
									{
										if (iParam0 == 7 || iParam0 == 8)
										{
											func_319("TF_CAMP_HITCH_MANAGE_HORSES_UNAVAILABLE_RANCH", 10000, 0, 0, 0, 1);
										}
										else
										{
											func_319("TF_CAMP_HITCH_MANAGE_HORSES_UNAVAILABLE_CAMP", 10000, 0, 0, 0, 1);
										}
									}
									break;
							}
						}
					}
				}
			}
			if (MISC::IS_BIT_SET(uParam1->f_1, 5))
			{
				if (func_224(uParam1->f_10, 1))
				{
					MISC::SET_BIT(&(uParam1->f_1), 7);
					MISC::CLEAR_BIT(&(uParam1->f_1), 2);
					func_304(0, uParam1);
					func_303(uParam1);
					func_313(uParam1, 3);
					return;
				}
				if (func_224(uParam1->f_11, 1))
				{
					uParam1->f_7 = 0;
					MISC::CLEAR_BIT(&(uParam1->f_1), 2);
					MISC::CLEAR_BIT(&(uParam1->f_1), 7);
					func_304(0, uParam1);
					func_303(uParam1);
					func_313(uParam1, 3);
					return;
				}
				iVar1 = 0;
				while (iVar1 < 3)
				{
					if (func_224(&(uParam1->f_12[iVar1]), 1))
					{
						uParam1->f_7 = func_322(iVar1);
						MISC::CLEAR_BIT(&(uParam1->f_1), 2);
						MISC::CLEAR_BIT(&(uParam1->f_1), 7);
						func_304(0, uParam1);
						func_303(uParam1);
						func_313(uParam1, 3);
						return;
					}
					iVar1++;
				}
				if (func_224(uParam1->f_9, 1))
				{
					func_303(uParam1);
					MISC::CLEAR_BIT(&(uParam1->f_1), 2);
				}
			}
			break;
		case 3:
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(800);
				}
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(Global_35, func_323(iParam0), true, false, true, true);
				ENTITY::SET_ENTITY_HEADING(Global_35, func_324(iParam0));
				if (MISC::IS_BIT_SET(uParam1->f_1, 7))
				{
					func_313(uParam1, 6);
				}
				else
				{
					func_313(uParam1, 4);
				}
			}
			break;
		case 4:
			if (!MISC::IS_BIT_SET(uParam1->f_1, 1))
			{
				if (uParam1->f_7 != 0)
				{
					func_325(uParam1->f_7);
				}
				func_327(func_326(iParam0, -1), 0.5f, 1, 1, 0, 0, 0);
				uParam1->f_7 = -1;
				MISC::SET_BIT(&(uParam1->f_1), 1);
				return;
			}
			if (func_328(iParam0, uParam1))
			{
				func_329(0);
				func_330();
				if (func_331(0) == 0)
				{
					func_332(0, 5);
				}
				ENTITY::SET_ENTITY_COORDS(Global_35, func_323(iParam0), true, false, true, true);
				ENTITY::SET_ENTITY_HEADING(Global_35, func_324(iParam0));
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				uParam1->f_2 = MISC::GET_GAME_TIMER() + 500;
				func_313(uParam1, 5);
			}
			break;
		case 6:
			if (!MISC::IS_BIT_SET(uParam1->f_1, 8))
			{
				if (func_333())
				{
					func_334();
				}
				func_335(2);
				func_337(func_336(iParam0));
				PLAYER::_0xD2CB0FB0FDCB473D(PLAYER::PLAYER_ID(), 0);
				MISC::CLEAR_AREA(func_336(iParam0), 0.4f, 2442122);
				MISC::SET_BIT(&(uParam1->f_1), 8);
			}
			if (func_338(func_336(iParam0), 0f, 1))
			{
				PHYSICS::ACTIVATE_PHYSICS(Global_1900383->f_393);
				ENTITY::SET_ENTITY_COORDS(Global_35, func_323(iParam0), true, false, true, true);
				ENTITY::SET_ENTITY_HEADING(Global_35, func_324(iParam0));
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				MISC::CLEAR_BIT(&(uParam1->f_1), 8);
				MISC::CLEAR_BIT(&(uParam1->f_1), 7);
				uParam1->f_2 = MISC::GET_GAME_TIMER() + 500;
				func_313(uParam1, 5);
			}
			break;
		case 5:
			if (MISC::GET_GAME_TIMER() > uParam1->f_2)
			{
				func_304(1, uParam1);
				func_313(uParam1, 7);
			}
			break;
		case 7:
			if (!CAM::IS_SCREEN_FADED_IN())
			{
				if (!CAM::IS_SCREEN_FADING_IN())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
			else
			{
				uParam1->f_3 = 0;
				MISC::CLEAR_BIT(&(uParam1->f_1), 2);
				func_313(uParam1, 2);
			}
			break;
	}
}

void func_53(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 473, false);
	PED::SET_PED_CONFIG_FLAG(Global_35, 474, false);
	PED::SET_PED_CONFIG_FLAG(Global_35, 475, false);
	func_254();
	HUD::_0x8BC7C1F929D07BF3(-950624750);
	if (func_38(2097152) && PED::GET_PED_CONFIG_FLAG(Global_35, 334, true))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 334, false);
		func_50(2097152);
	}
	func_339(uParam0);
	func_340(uParam0);
	func_144(235110816);
	if (!func_166())
	{
		if (!func_12(64))
		{
			func_341(1);
			func_342(0);
		}
		if (bParam1 == 0)
		{
			func_343(1, -1);
		}
		MISC::_0x1096603B519C905F("");
		if (!PED::_0xA911EE21EDF69DAF(PLAYER::PLAYER_PED_ID()) && !(func_344(PED::GET_MOUNT(PLAYER::PLAYER_PED_ID()), 0) && PED::_0xA911EE21EDF69DAF(PED::GET_MOUNT(PLAYER::PLAYER_PED_ID()))))
		{
			PED::_0x9851DE7AEC10B4E1(func_345(func_148()), func_346(), 1, 0);
		}
	}
	if (func_347(4))
	{
		func_348(0);
	}
	PLAYER::_0x9461A8FAB0378E5B(PLAYER::PLAYER_ID(), 0);
	func_349(1, 0, 1103626240);
	if (!func_12(16777216))
	{
		func_350();
		func_144(16777216);
	}
	if (!func_12(2048))
	{
		CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
		func_144(2048);
	}
	if (func_12(32))
	{
		func_143(1);
		func_144(32);
	}
	if (func_38(1073741824))
	{
		func_50(1073741824);
	}
	func_351(&(uParam0->f_51));
	func_352();
	func_353(uParam0->f_46);
	AUDIO::SET_AUDIO_FLAG("EnableIdleMusic", false);
	func_354(uParam0->f_46, 4);
	func_354(uParam0->f_46, 8);
	func_268(0);
	if (func_56() == -1)
	{
		func_270(0);
	}
	if (func_355(32))
	{
		func_144(4);
		func_144(2);
		func_356(32);
		iVar0 = 0;
		while (iVar0 < &Global_1360165)
		{
			if (!func_357(iVar0) && func_358(iVar0, 0))
			{
				func_359(iVar0);
			}
			iVar0++;
		}
	}
	if (Local_18.f_1721.f_62 == 3)
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(0);
		}
		func_89();
		func_360();
	}
	if (func_269() == uParam0->f_46)
	{
		func_361(bParam1);
		func_196(1073741824);
		func_362(0, 0, 0);
	}
	if (func_363(uParam0->f_46, &uVar2, &iVar3, 0, 0))
	{
		iVar1 = uVar2;
		while (iVar1 <= iVar3)
		{
			if (!func_364(iVar1, 0))
			{
				func_365(iVar1);
			}
			iVar1++;
		}
	}
	iVar4 = 0;
	while (iVar4 < 2)
	{
		if (VOLUME::_0x92A78D0BEDB332A3(&(Global_1357549->f_1663[iVar4])))
		{
			VOLUME::_0x43F867EF5C463A53(&(Global_1357549->f_1663[iVar4]));
		}
		iVar4++;
	}
	func_366();
	func_367();
	func_368(uParam0);
	func_369(uParam0);
	func_370();
	func_371();
	func_372();
	func_200();
	func_373(0);
	GRAPHICS::REMOVE_DECALS_IN_RANGE(func_345(func_148()), 100f);
	if (func_355(8))
	{
		func_374(0);
		func_356(8);
	}
	if (!func_12(64))
	{
		func_165(1);
	}
	if (func_375(1))
	{
		TASK::_0x816A3ACD265E2297(1361896662, 1);
		func_376(1);
	}
	if (func_375(8192))
	{
		TASK::_0x816A3ACD265E2297(-2146271366, 1);
		func_376(8192);
	}
	iVar5 = func_377(7);
	if (ENTITY::DOES_ENTITY_EXIST(iVar5))
	{
		PED::SET_PED_CONFIG_FLAG(iVar5, 419, false);
	}
	func_144(229376);
	func_50(2560);
	Global_1357549->f_1896 = 0;
	PED::_0x0ADA3EC589E1736E();
	if (func_378(func_261()))
	{
		func_379(func_261(), 8);
	}
	func_380(&(Local_18.f_2024));
	func_381(&(Local_18.f_2024));
	func_382(&(Local_18.f_2024));
	Local_18.f_43 = 0;
	func_48(&(Global_1357549->f_1691));
	func_383();
	if (Local_18.f_2019 != 0 && func_38(16777216))
	{
		MAP::_0xE057FEA9A22EB3EE(Local_18.f_2019);
		func_50(16777216);
	}
	if (!func_38(67108864))
	{
		FIRE::_0x24DB6B9F2B719043(-1f);
	}
	if (func_38(-2147483648))
	{
		if (func_193(1024))
		{
			func_196(1024);
		}
		if (func_193(64))
		{
			func_196(64);
		}
		if (func_38(131072))
		{
			func_50(131072);
		}
		func_50(-2147483648);
	}
	if (func_148() == 2 || func_148() == 3)
	{
		if (func_384(13, 0) > 1)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("pirogue"));
		}
	}
	func_385(8);
	func_385(16);
	func_386(Global_1935630, 8388608);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
}

void func_54(char* sParam0, int iParam1, int iParam2)
{
}

void func_55()
{
	if (func_12(32768))
	{
		func_167(2048);
	}
	else
	{
		func_50(2048);
	}
	if (func_38(4194304))
	{
		func_167(8388608);
	}
	else
	{
		func_50(8388608);
	}
}

int func_56()
{
	return Global_1572887->f_12;
}

void func_57()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_58(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_56() != -1)
	{
		return 1;
	}
	if (!func_387(iParam0))
	{
		return 1;
	}
	if (func_363(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (Global_1897950->f_1 < iVar0 || Global_1897950->f_1 > iVar1)
		{
			Global_1897950->f_1 = iVar0;
		}
		while (true)
		{
			if (!func_388(Global_1897950->f_1, 16))
			{
				func_389(Global_1897950->f_1, 0);
			}
			Global_1897950->f_1++;
			iVar2++;
			if (Global_1897950->f_1 > iVar1)
			{
				Global_1897950->f_1 = -1;
				return 1;
			}
			if (iVar2 >= 20 && !bParam1)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_59()
{
	int iVar0;
	char cVar1[64];

	MISC::_0x9BF2C0C568C61641(1);
	if (func_378(func_390(Local_18.f_46)))
	{
		func_379(func_390(Local_18.f_46), 4);
	}
	if (func_38(32768))
	{
		func_50(32768);
	}
	func_393(func_392(func_391(Local_18.f_46)));
	iVar0 = func_394(func_148());
	func_395(iVar0, 1137976064, 1120952528, -1, 1, 1, 0);
	func_396(Local_18.f_45, Global_40.f_4283.f_4, &(Local_18.f_2019));
	func_266();
	func_45(&Local_18);
	func_49(&Local_18);
	func_397(Global_1898004);
	func_398(Global_1898004, &(Global_1357549->f_3[2]), 1);
	if ((ENTITY::DOES_ENTITY_EXIST(Global_35) && PED::_0xA911EE21EDF69DAF(Global_35)) || (ENTITY::DOES_ENTITY_EXIST(PED::GET_MOUNT(Global_35)) && PED::_0xA911EE21EDF69DAF(PED::GET_MOUNT(Global_35))))
	{
		func_147(33554432);
		func_399(17, -2147483648, 1, -1);
		StringCopy(&cVar1, func_400(func_148()), 64);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
		{
			func_401(17, cVar1, 2);
		}
	}
	if (func_148() == 2 || func_148() == 3)
	{
		if (func_384(13, 0) > 1)
		{
			STREAMING::REQUEST_MODEL(joaat("pirogue"), false);
		}
	}
	func_402();
	return 1;
}

void func_60(int iParam0, int iParam1, int iParam2)
{
	Local_18.f_1[iParam0] = iParam1;
	Local_18.f_14[iParam0] = iParam2;
}

int func_61()
{
	return func_403(Local_18.f_46);
}

int func_62()
{
	if (func_34(Local_18.f_45))
	{
		if (!MISC::IS_BIT_SET(Local_18.f_43, 1))
		{
			func_404(&(Local_18.f_2024));
			MISC::SET_BIT(&(Local_18.f_43), 1);
		}
		return func_405(&(Local_18.f_2024));
	}
	return 1;
}

int func_63()
{
	if (!MISC::IS_BIT_SET(Local_18.f_43, 4))
	{
		MISC::SET_BIT(&(Local_18.f_43), 4);
	}
	return 1;
}

int func_64()
{
	if (func_148() == 2 || func_148() == 3)
	{
		if (func_384(13, 0) > 1)
		{
			if (!STREAMING::HAS_MODEL_LOADED(joaat("pirogue")))
			{
				return 0;
			}
		}
	}
	if (func_406())
	{
		if (!func_133(0, 0, 1))
		{
			func_407(func_345(func_148()), func_346(), 0);
			func_408(func_345(func_148()), func_346(), 0);
		}
		return 1;
	}
	return 0;
}

int func_65()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Local_18.f_3479 == -1)
	{
		func_409(Local_18.f_45, 1, 1);
		Local_18.f_3479 = 0;
	}
	if (func_410(Local_18.f_45))
	{
		iVar0 = func_411(Local_18.f_45);
		iVar1 = 0;
		while (iVar1 < 6)
		{
			func_412(iVar0, Local_18.f_3479, iVar1, 1, 1);
			iVar1++;
		}
		iVar2 = Local_18.f_3479;
		iVar2++;
		Local_18.f_3479 = iVar2;
		if (Local_18.f_3479 >= 26)
		{
			Local_18.f_3479 = -1;
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_66()
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	int iVar7;
	int iVar8;

	uVar0 = func_413();
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if (func_414(iVar1))
		{
			Local_18.f_3402[iVar1] = _NAMESPACE48::_0xA00DF706C60173D1(func_415(iVar1));
			STREAMING::REQUEST_MODEL(&(Local_18.f_3402[iVar1]), false);
			iVar2++;
			if (uVar0 && func_416(iVar1, 32768, 1))
			{
				Local_18.f_3430[iVar1] = _NAMESPACE48::_0xA00DF706C60173D1(func_417(iVar1, 1));
				Local_18.f_3430[iVar1] = &Local_18.f_3430[iVar1];
				STREAMING::REQUEST_MODEL(&(Local_18.f_3430[iVar1]), false);
				iVar2++;
				if (STREAMING::HAS_MODEL_LOADED(&(Local_18.f_3430[iVar1])) && &Local_18.f_3374[iVar1] == 0)
				{
					iVar3 = func_418(iVar1);
					if (PED::_DOES_METAPED_OUTFIT_EXIST_FOR_PED_MODEL(iVar3, &(Local_18.f_3430[iVar1])))
					{
						Local_18.f_3374[iVar1] = PED::_REQUEST_METAPED_OUTFIT(&(Local_18.f_3430[iVar1]), iVar3);
					}
				}
			}
		}
		if ((iVar2 - Local_18.f_44) > 5)
		{
			Local_18.f_44 = iVar2;
			return 0;
		}
		iVar1++;
	}
	if (Global_40.f_4283.f_567)
	{
		Local_18.f_3478 = func_419();
		if (Local_18.f_3478 != 0)
		{
			STREAMING::REQUEST_MODEL(Local_18.f_3478, false);
			iVar2++;
		}
	}
	if (func_420(Local_18.f_45))
	{
		iVar4 = 0;
		while (iVar4 < 3)
		{
			Global_1357549->f_1675[iVar4 /*5*/] = func_421(iVar4);
			if (&Global_1357549->f_1675[iVar4 /*5*/] == 0)
			{
			}
			else
			{
				Local_18.f_3458[iVar4] = _NAMESPACE48::_0xA00DF706C60173D1(&(Global_1357549->f_1675[iVar4 /*5*/]));
				if (&Local_18.f_3458[iVar4] != 0)
				{
					STREAMING::REQUEST_MODEL(&(Local_18.f_3458[iVar4]), false);
					iVar2++;
					if ((iVar2 - Local_18.f_44) > 5)
					{
						Local_18.f_44 = iVar2;
						return 0;
					}
				}
			}
			iVar4++;
		}
	}
	if (func_363(Local_18.f_46, &uVar6, &iVar7, 0, 1))
	{
		iVar5 = uVar6;
		while (iVar5 <= iVar7)
		{
			if (!func_422(iVar5))
			{
			}
			else if (func_388(iVar5, 32) && Local_18.f_46 != 22)
			{
			}
			else if (iVar8 < 15)
			{
				Local_18.f_3462[iVar8] = _NAMESPACE48::_0xA00DF706C60173D1(func_423(iVar5));
				if (&Local_18.f_3462[iVar8] != 0)
				{
					STREAMING::REQUEST_MODEL(&(Local_18.f_3462[iVar8]), false);
					iVar2++;
					iVar8++;
					if ((iVar2 - Local_18.f_44) > 5)
					{
						Local_18.f_44 = iVar2;
						return 0;
					}
				}
			}
			iVar5++;
		}
	}
	return 1;
}

int func_67()
{
	if (func_34(Local_18.f_45))
	{
		if (!MISC::IS_BIT_SET(Local_18.f_43, 2))
		{
			func_424(Local_18.f_45, &(Local_18.f_2024));
			func_425(&(Local_18.f_2024), &(Global_40.f_4283.f_415));
			MISC::SET_BIT(&(Local_18.f_43), 2);
		}
		return func_426(&(Local_18.f_2024), &(Global_40.f_4283.f_415));
	}
	return 1;
}

int func_68()
{
	bool bVar0;
	int iVar1;

	if (!MISC::IS_BIT_SET(Local_18.f_43, 3))
	{
		Local_18.f_42 = MISC::GET_GAME_TIMER() + 15000;
		Global_1357549->f_2 = 0;
		func_427();
		MISC::SET_BIT(&(Local_18.f_43), 3);
	}
	bVar0 = false;
	if (func_428(&Local_18))
	{
		bVar0 = true;
	}
	else if (MISC::GET_GAME_TIMER() > Local_18.f_42)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_429(Local_18.f_46, 4);
		iVar1 = 0;
		while (iVar1 < 27)
		{
			func_430(iVar1, 4, 1);
			iVar1++;
		}
		return 1;
	}
	return 0;
}

int func_69()
{
	return 1;
}

int func_70()
{
	func_431(&Local_18);
	func_46();
	func_432(&(Local_18.f_51));
	func_433();
	func_434();
	func_36(1);
	func_427();
	func_435();
	return 1;
}

int func_71()
{
	if (func_436(32))
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(500);
		}
		func_437(32);
	}
	func_339(&Local_18);
	func_340(&Local_18);
	if (!func_12(2048))
	{
		CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(4000);
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 473, true);
	PED::SET_PED_CONFIG_FLAG(Global_35, 474, true);
	PED::SET_PED_CONFIG_FLAG(Global_35, 475, true);
	func_438(&(Global_1391438->f_5), 32, 1);
	func_439();
	AUDIO::SET_AUDIO_FLAG("EnableIdleMusic", true);
	func_440(0);
	func_429(Local_18.f_46, 8);
	func_167(1073741824);
	return 1;
}

void func_72(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_57();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
}

int func_73()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	iVar1 = MISC::GET_GAME_TIMER();
	iVar2 = NETWORK::NETWORK_GET_TIMEOUT_TIME();
	if (iVar2 < 50000)
	{
		iVar2 = 50000;
	}
	while (iVar0 != 2)
	{
		if (MISC::GET_GAME_TIMER() - iVar1) > (iVar2 - 5000)
		{
		}
		if ((MISC::GET_GAME_TIMER() - iVar1) > 300000)
		{
			func_57();
		}
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
			{
				case 0:
					break;
				case 1:
					func_57();
					break;
				case 2:
					func_57();
					break;
				case 4:
					func_57();
					break;
				case 3:
					func_57();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_57();
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_57();
		}
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			func_57();
		}
		if (func_56() == 0)
		{
			if (func_441())
			{
				func_57();
			}
		}
		BUILTIN::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_57();
	}
	return 1;
}

void func_74()
{
	int iVar0;
	struct<8> Var1;

	iVar0 = 0;
	Var1 = { Var1 };
	while (true)
	{
		iVar0++;
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
			{
				case 0:
					break;
				case 1:
					func_57();
					break;
				case 2:
					func_57();
					break;
				case 4:
					func_57();
					break;
				case 3:
					func_57();
					break;
				default:
					break;
			}
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			StringCopy(&Var1, "HOST", 64);
		}
		else
		{
			StringCopy(&Var1, "CLIENT", 64);
		}
		if (NETWORK::_0x5D10B3795F3FC886())
		{
			return;
		}
		if (iVar0 >= 3600)
		{
			func_57();
			return;
		}
		BUILTIN::WAIT(0);
	}
}

void func_75(int iParam0)
{
	switch (func_56())
	{
		case -1:
			Global_40.f_4283.f_2 = (Global_40.f_4283.f_2 || iParam0);
			break;
	}
}

void func_76()
{
	if (func_355(8))
	{
		func_374(0);
		func_356(8);
	}
	if (func_355(4))
	{
		func_165(1);
		func_356(4);
	}
	Local_18.f_1718 = 0;
	if (ITEMSET::IS_ITEMSET_VALID(Local_18.f_1718.f_1))
	{
		ITEMSET::DESTROY_ITEMSET(Local_18.f_1718.f_1);
	}
	if (func_355(32))
	{
		func_356(32);
	}
	Local_18.f_1718.f_1 = ITEMSET::CREATE_ITEMSET(false);
}

int func_77()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (func_234(180573150, 1))
	{
		return -1;
	}
	if (func_12(4))
	{
		return -1;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return -1;
	}
	if (PED::_0x5407B7288D0478B7(Global_35, 516) == 0)
	{
		return -1;
	}
	if (PED::_0x336B3D200AB007CB(Global_35, Global_36, 100f, 512) == 0)
	{
		return -1;
	}
	if (func_133(0, 0, 1))
	{
		return -1;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-443368600) > 0)
	{
		return -1;
	}
	bVar0 = ((Local_18.f_45 == 7 || Local_18.f_45 == 8) || Local_18.f_45 == 4);
	if (!func_355(1))
	{
		if (LAW::_0x9D5C9A5A3321B128(PLAYER::PLAYER_ID()))
		{
			if (bVar0)
			{
				func_319("RANCH_LAW_WARN", 10000, 0, 0, 0, 1);
			}
			else
			{
				func_319("CAMP_LAW_WARN", 10000, 0, 0, 0, 1);
			}
		}
		else if (bVar0)
		{
			func_319("RANCH_COMBAT_WARN", 10000, 0, 0, 0, 1);
		}
		else
		{
			func_319("CAMP_COMBAT_WARN", 10000, 0, 0, 0, 1);
		}
		func_442(1);
	}
	if (!bVar0)
	{
		func_443();
	}
	if (func_38(512))
	{
		if (bVar0)
		{
			func_443();
			return 2;
		}
		else
		{
			return 1;
		}
	}
	if (Global_1357549->f_1497 != -1)
	{
		iVar1 = func_179(Global_1357549->f_1497);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			iVar2 = func_444(Local_18.f_1718.f_1);
			iVar3 = 0;
			while (iVar3 < iVar2)
			{
				iVar4 = MISC::_0x3FFB15534067DCD4(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, Local_18.f_1718.f_1));
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iVar1, iVar4, 17))
				{
					if (bVar0)
					{
						func_443();
						return 2;
					}
					else
					{
						return 1;
					}
				}
				iVar3++;
			}
		}
	}
	return -1;
}

void func_78()
{
	if (Local_18.f_45 == 7 || Local_18.f_45 == 8)
	{
		if (LAW::_0x9D5C9A5A3321B128(PLAYER::PLAYER_ID()))
		{
			func_319("RANCH_LAW_GRIEF", 10000, 0, 0, 0, 1);
			func_445(2, 158959085, 0, "RANCH_LAW_HON", 0, 0, 1065353216, 0);
		}
		else
		{
			func_319("RANCH_COMBAT_GRIEF", 10000, 0, 0, 0, 1);
			func_445(2, 158959085, 0, "RANCH_COMBAT_HON", 0, 0, 1065353216, 0);
		}
	}
	else if (LAW::_0x9D5C9A5A3321B128(PLAYER::PLAYER_ID()))
	{
		func_319("CAMP_LAW_GRIEF", 10000, 0, 0, 0, 1);
		func_445(2, 158959085, 0, "CAMP_LAW_HON", 0, 0, 1065353216, 0);
	}
	else
	{
		func_319("CAMP_COMBAT_GRIEF", 10000, 0, 0, 0, 1);
		func_445(2, 158959085, 0, "CAMP_COMBAT_HON", 0, 0, 1065353216, 0);
	}
	func_446();
}

void func_79(int* iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 >= 20)
	{
		return;
	}
	iParam0->f_1[iVar0 /*3*/] = iParam2;
	(iParam0->f_1[iVar0 /*3*/])->f_1 = iParam3;
	(iParam0->f_1[iVar0 /*3*/])->f_2 = iParam4;
}

void func_80()
{
	func_147(4);
	func_147(2);
	func_442(32);
	Local_18.f_1718.f_2 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3000, 5000));
}

int func_81()
{
	int iVar0;
	struct<7> Var1;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	vector3 vVar25;

	func_447();
	func_448();
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return 0;
	}
	if (func_133(0, 0, 1))
	{
		return 0;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-443368600) > 0)
	{
		return 0;
	}
	if (MISC::GET_GAME_TIMER() < Local_18.f_1718.f_2)
	{
		return -1;
	}
	iVar0 = func_444(Local_18.f_1718.f_1);
	if (iVar0 == 0)
	{
		return 3;
	}
	Var1.f_8 = -1082130432;
	iVar21 = 0;
	while (iVar21 < iVar0)
	{
		iVar22 = MISC::_0x3FFB15534067DCD4(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar21, Local_18.f_1718.f_1));
		if (ENTITY::IS_ENTITY_DEAD(iVar22))
		{
		}
		else
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 6))
			{
				case 0:
					iVar23 = 21030;
					break;
				case 1:
					iVar23 = 14284;
					break;
				case 2:
					iVar23 = 65478;
					break;
				case 3:
					iVar23 = 6884;
					break;
				case 4:
					iVar23 = 56200;
					break;
				case 5:
					iVar23 = 0;
					break;
			}
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
			{
				case 0:
					iVar24 = joaat("weapon_repeater_carbine");
					break;
				case 1:
					iVar24 = joaat("weapon_rifle_springfield");
					break;
			}
			vVar25 = { func_449(func_345(func_148()), 50f, 2f) };
			Var1.f_14 = 1;
			Var1.f_13 = 0;
			Var1.f_16 = 1;
			Var1.f_18 = 1;
			Var1.f_19 = 0;
			Var1.f_12 = 1;
			Var1.f_7 = 200f;
			Var1.f_10 = iVar22;
			Var1 = { vVar25 };
			Var1.f_3 = { PED::GET_PED_BONE_COORDS(iVar22, iVar23, 0f, 0f, 0f) };
			Var1.f_6 = iVar24;
			MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Var1);
			ENTITY::_SET_ENTITY_HEALTH(iVar22, 0, 0);
			if (iVar0 <= 1)
			{
				Local_18.f_1718.f_2 = MISC::GET_GAME_TIMER() + 4000;
			}
			else
			{
				Local_18.f_1718.f_2 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3000, 6000));
			}
		}
		else
		{
			iVar21++;
		}
	}
	return -1;
}

void func_82()
{
	Local_18.f_3373 = -1;
	func_144(2);
	func_144(4);
	func_356(32);
}

void func_83()
{
	func_147(4);
	func_147(2);
	func_442(32);
	Local_18.f_1718.f_2 = MISC::GET_GAME_TIMER() + 5000;
}

int func_84()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;
	int iVar20;
	int iVar21;

	func_447();
	func_448();
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return 0;
	}
	if (func_133(0, 0, 1))
	{
		return 0;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-443368600) > 0)
	{
		return 0;
	}
	iVar0 = func_444(Local_18.f_1718.f_1);
	if (iVar0 == 0)
	{
		return 3;
	}
	if (MISC::GET_GAME_TIMER() < Local_18.f_1718.f_2)
	{
		return -1;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iVar2 = MISC::_0x3FFB15534067DCD4(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, Local_18.f_1718.f_1));
		if (ENTITY::IS_ENTITY_DEAD(iVar2))
		{
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_35, iVar2, 1, 1))
		{
			ENTITY::_SET_ENTITY_HEALTH(Global_35, 0, iVar2);
			func_144(4);
			func_144(2);
			return -1;
		}
		iVar1++;
	}
	if (!func_355(16))
	{
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			iVar20 = MISC::_0x3FFB15534067DCD4(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, Local_18.f_1718.f_1));
			if (ENTITY::IS_ENTITY_DEAD(iVar20))
			{
			}
			else
			{
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 6))
				{
					case 0:
						iVar21 = 21030;
						break;
					case 1:
						iVar21 = 14284;
						break;
					case 2:
						iVar21 = 65478;
						break;
					case 3:
						iVar21 = 6884;
						break;
					case 4:
						iVar21 = 56200;
						break;
					case 5:
						iVar21 = 0;
						break;
				}
				Var3.f_14 = 1;
				Var3.f_6 = 0;
				Var3.f_4 = 1500;
				Var3.f_5 = 0;
				Var3.f_7 = 1;
				Var3.f_10 = 1;
				Var3.f_11 = 1f;
				Var3.f_1 = { PED::GET_PED_BONE_COORDS(Global_35, iVar21, 0f, 0f, 0f) };
				Var3.f_15 = 1;
				WEAPON::_0x5230D3F6EE56CFE6(iVar20, 0);
				TASK::TASK_SHOOT_WITH_WEAPON(iVar20, &Var3);
			}
			iVar1++;
		}
		func_442(16);
	}
	return -1;
}

void func_85()
{
	Local_18.f_3373 = -1;
	func_144(2);
	func_144(4);
	func_356(32);
}

void func_86()
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0, 0);
	CAM::DO_SCREEN_FADE_OUT(3000);
}

int func_87()
{
	func_447();
	if (func_133(0, 0, 1) || SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-443368600) > 0)
	{
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		return 0;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 4;
	}
	return -1;
}

void func_88()
{
}

void func_89()
{
	var uVar0;
	var uVar1;
	vector3 vVar2;
	int iVar5;
	int iVar6;

	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		TASK::TASK_DISMOUNT_ANIMAL(Global_35, 16, 0, 0, 0, 0);
	}
	PLAYER::_0x8674D138391FFB1B(PLAYER::GET_PLAYER_INDEX(), 1);
	vVar2 = { func_450(func_148(), &uVar0, &uVar1) };
	func_451(vVar2, uVar1, uVar0, 0);
	func_452(0);
	func_453();
	func_454(6);
	func_455(4096);
	Global_1310720->f_6 = 1;
	Global_1310720->f_17 = 8;
	iVar5 = 0;
	while (iVar5 < 27)
	{
		iVar6 = func_179(iVar5);
		if (ENTITY::DOES_ENTITY_EXIST(iVar6))
		{
			PED::_0x06D26A96CA1BCA75(iVar6, 1, 0f, 0);
		}
		iVar5++;
	}
	func_456();
}

int func_90()
{
	func_447();
	if (func_197())
	{
		func_360();
		return 0;
	}
	return -1;
}

void func_91(int* iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 >= 20)
	{
		return;
	}
	*iParam0 = iVar0;
	func_457(iParam0);
}

void func_92()
{
	Local_18.f_1786 &= 8193;
	Local_18.f_1786.f_1 = 0;
	Local_18.f_1786.f_2 = 0;
	Local_18.f_1786.f_3 = 0;
	Local_18.f_1786.f_5 = 0;
	Local_18.f_1786.f_7 = 0;
	Local_18.f_1786.f_8 = 0;
	Local_18.f_1786.f_10 = -1;
}

int func_93()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	var uVar3;

	if (func_38(64) && func_38(32))
	{
		return -1;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return -1;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(&(Global_1357549->f_3[4])))
	{
		return -1;
	}
	if (func_375(1))
	{
		if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, &(Global_1357549->f_3[4]), false, 0))
		{
			TASK::_0x816A3ACD265E2297(1361896662, 1);
			func_376(1);
		}
	}
	if (func_375(8192))
	{
		if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, &(Global_1357549->f_3[4]), false, 0))
		{
			TASK::_0x816A3ACD265E2297(-2146271366, 1);
			func_376(8192);
		}
	}
	if (func_375(4096))
	{
		if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, &(Global_1357549->f_3[4]), false, 0))
		{
			func_376(4096);
		}
	}
	if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, &(Global_1357549->f_3[5]), false, 0))
	{
		return -1;
	}
	if (func_375(4096))
	{
		func_458(0);
	}
	bVar0 = false;
	if (func_459(Global_35, &(Local_18.f_1786.f_7), &bVar0))
	{
		if (bVar0)
		{
			if (!func_38(64))
			{
				func_460(2);
			}
		}
		else if (!func_38(32))
		{
			func_460(4);
		}
	}
	else if (func_461(Global_35, &(Local_18.f_1786.f_7), &bVar0))
	{
		if (bVar0)
		{
			if (!func_38(64))
			{
				func_460(32);
			}
		}
		else if (!func_38(32))
		{
			func_460(64);
		}
	}
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		Local_18.f_1786.f_5 = PED::GET_MOUNT(Global_35);
		if (func_459(Local_18.f_1786.f_5, &(Local_18.f_1786.f_8), &bVar0))
		{
			if (bVar0)
			{
				if (!func_38(64))
				{
					func_460(8);
				}
			}
			else if (!func_38(32))
			{
				func_460(16);
			}
		}
	}
	else if (TASK::_0xEFC4303DDC6E60D3(Global_35))
	{
		Local_18.f_1786.f_5 = TASK::_0xED1F514AF4732258(Global_35);
		if (func_459(Local_18.f_1786.f_5, &(Local_18.f_1786.f_8), &bVar0))
		{
			if (bVar0)
			{
				if (!func_38(64))
				{
					func_460(8);
				}
			}
			else if (!func_38(32))
			{
				func_460(16);
			}
		}
	}
	else
	{
		Local_18.f_1786.f_5 = func_377(0);
		if (func_344(Local_18.f_1786.f_5, 0) && func_462(Local_18.f_1786.f_5, 2043986356))
		{
			if (func_459(Local_18.f_1786.f_5, &(Local_18.f_1786.f_8), &bVar0))
			{
				if (bVar0)
				{
					if (!func_38(64))
					{
						func_460(8);
					}
				}
				else if (!func_38(32))
				{
					func_460(16);
				}
			}
		}
	}
	bVar1 = false;
	Local_18.f_1786.f_6 = func_377(1);
	if ((func_344(Local_18.f_1786.f_6, 0) && Local_18.f_1786.f_5 != Local_18.f_1786.f_6) && func_462(Local_18.f_1786.f_6, 2043986356))
	{
		bVar1 = true;
	}
	else
	{
		Local_18.f_1786.f_6 = func_377(0);
		if ((func_344(Local_18.f_1786.f_6, 0) && Local_18.f_1786.f_5 != Local_18.f_1786.f_6) && func_462(Local_18.f_1786.f_6, 2043986356))
		{
			bVar1 = true;
		}
	}
	if (bVar1)
	{
		if (func_459(Local_18.f_1786.f_6, &(Local_18.f_1786.f_9), &bVar0))
		{
			if (bVar0)
			{
				func_460(2048);
			}
			else
			{
				func_460(1024);
			}
		}
	}
	if (((((((func_375(2) || func_375(4)) || func_375(8)) || func_375(16)) || func_375(32)) || func_375(64)) || func_375(2048)) || func_375(1024))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256, 0);
		if (func_463())
		{
			return 6;
		}
		else
		{
			return 1;
		}
	}
	if (!func_375(4096) && func_463())
	{
		iVar2 = func_377(1);
		if (func_459(iVar2, &uVar3, &bVar0))
		{
			func_460(4096);
		}
		else
		{
			iVar2 = func_377(0);
			if (func_459(iVar2, &uVar3, &bVar0))
			{
				func_460(4096);
			}
		}
	}
	if ((!func_375(1) && !func_375(4096)) && !func_38(64))
	{
		TASK::_0x816A3ACD265E2297(1361896662, 0);
		func_460(1);
	}
	if ((!func_375(8192) && !func_375(4096)) && !func_38(32))
	{
		TASK::_0x816A3ACD265E2297(-2146271366, 0);
		func_460(8192);
	}
	return -1;
}

void func_94()
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, 0, 0);
	Local_18.f_1786.f_10 = func_464(1, 8);
	Local_18.f_1786.f_2 = MISC::GET_GAME_TIMER() + 3000;
	if ((func_375(2) || func_375(8)) || func_375(32))
	{
		func_209(535, 0);
	}
	if ((func_375(4) || func_375(16)) || func_375(64))
	{
		func_209(536, 0);
	}
}

int func_95()
{
	int iVar0;

	if ((func_375(8) || func_375(16)) || func_375(64))
	{
		func_465(Local_18.f_1786.f_5, &(Local_18.f_1786.f_3), 0, 0, 0, 1084227584, 100, 0, 0);
	}
	if (func_375(2048) || func_375(1024))
	{
		func_465(Local_18.f_1786.f_6, &(Local_18.f_1786.f_4), 0, 0, 0, 1084227584, 100, 0, 0);
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return 5;
	}
	if (Local_18.f_1786.f_10 == -1)
	{
		return 2;
	}
	if (MISC::GET_GAME_TIMER() > Local_18.f_1786.f_2)
	{
		return 2;
	}
	iVar0 = func_179(Local_18.f_1786.f_10);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		Local_18.f_1786.f_10 = func_464(1, 8);
		return -1;
	}
	if (MISC::GET_GAME_TIMER() < Local_18.f_1786.f_1)
	{
		return -1;
	}
	if (!func_375(128))
	{
		if (func_180(iVar0, "GENERIC_ANGRY_REACTION", -1323320425, Global_35, 0, 0, 0, 1))
		{
			func_460(128);
			Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 1500;
		}
		if (func_180(iVar0, "GENERIC_SHOCKED_DISBELIEF", -1323320425, Global_35, 0, 0, 0, 1))
		{
			func_460(128);
			Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 1500;
		}
		if (func_180(iVar0, "STOP_THAT", -1323320425, Global_35, 0, 0, 0, 1))
		{
			func_460(128);
			Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 1500;
		}
		if (func_180(iVar0, "STOP_THAT_ANNOYED", -1323320425, Global_35, 0, 0, 0, 1))
		{
			func_460(128);
			Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 1500;
		}
		if (func_180(iVar0, "CUT_THAT_OUT", -1323320425, Global_35, 0, 0, 0, 1))
		{
			func_460(128);
			Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 1500;
		}
		if (func_180(iVar0, "GENERIC_INTERRUPT", -1323320425, Global_35, 0, 0, 0, 1))
		{
			func_460(128);
			Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 1500;
		}
	}
	else if (!func_375(256))
	{
		if ((func_375(2) || func_375(8)) || func_375(32))
		{
			if (func_180(iVar0, "GREET_PLAYER_DEAD_BODY", -1323320425, Global_35, 0, 0, 0, 1))
			{
				func_460(256);
				return 2;
			}
			if (func_180(iVar0, "GREET_PLAYER_DEAD_BODY_INNOCENT", -1323320425, Global_35, 0, 0, 0, 1))
			{
				func_460(256);
				return 2;
			}
			if (func_180(iVar0, "GREET_PLAYER_DEAD_BODY_LONGTIME", -1323320425, Global_35, 0, 0, 0, 1))
			{
				func_460(256);
				return 2;
			}
		}
		if ((func_375(4) || func_375(16)) || func_375(64))
		{
			if (func_180(iVar0, "GREET_PLAYER_HOGTIED_BODY", -1323320425, Global_35, 0, 0, 0, 1))
			{
				func_460(256);
				return 2;
			}
			if (func_180(iVar0, "GREET_PLAYER_HOGTIED_BODY_INNOCENT", -1323320425, Global_35, 0, 0, 0, 1))
			{
				func_460(256);
				return 2;
			}
		}
		if (func_180(iVar0, "SHAME_ON_YOU", -1323320425, Global_35, 0, 0, 0, 1))
		{
			func_460(256);
			return 2;
		}
		if (func_180(iVar0, "KNOCKOUT_WARNING", -1323320425, Global_35, 0, 0, 0, 1))
		{
			func_460(256);
			return 2;
		}
	}
	return -1;
}

int func_96()
{
	bool bVar0;

	bVar0 = true;
	if ((func_375(8) || func_375(16)) || func_375(64))
	{
		bVar0 = func_465(Local_18.f_1786.f_5, &(Local_18.f_1786.f_3), 0, 0, 0, 1084227584, 100, 0, 0);
	}
	if (func_375(2048) || func_375(1024))
	{
		bVar0 = func_465(Local_18.f_1786.f_6, &(Local_18.f_1786.f_4), 0, 0, 0, 1084227584, 100, 0, 0);
	}
	if (bVar0)
	{
		if (func_466(3072))
		{
			return 4;
		}
		else
		{
			return 3;
		}
	}
	return -1;
}

void func_97()
{
	int iVar0;

	if (((func_375(2) || func_375(4)) || func_375(8)) || func_375(16))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		if (func_375(2) || func_375(4))
		{
			if (PED::_0xA911EE21EDF69DAF(Global_35))
			{
				TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(0, Local_18.f_1786.f_7, 0f, 0f, 0f, 1073741824, 1);
			}
			if (func_375(4))
			{
				if (PED::_0x3AA24CCC0D451379(Local_18.f_1786.f_7))
				{
					ENTITY::_0x18FF3110CF47115D(Local_18.f_1786.f_7, 1, 1);
					TASK::_TASK_CUT_FREE_HOGTIED_TARGET_PED(0, Local_18.f_1786.f_7);
				}
			}
		}
		if (func_375(8) || func_375(16))
		{
			func_465(Local_18.f_1786.f_5, &(Local_18.f_1786.f_3), 0, 0, 0, 1084227584, 100, 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(Local_18.f_1786.f_5) && !ENTITY::IS_ENTITY_DEAD(Local_18.f_1786.f_5))
			{
				if (PED::_0xA911EE21EDF69DAF(Local_18.f_1786.f_5))
				{
					if (TASK::_0xEFC4303DDC6E60D3(Global_35))
					{
						TASK::_0xED27560703F37258(0);
					}
					if (!PED::IS_PED_ON_MOUNT(Global_35))
					{
						TASK::TASK_PICKUP_CARRIABLE_ENTITY(0, Local_18.f_1786.f_8);
						TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(0, Local_18.f_1786.f_8, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_18.f_1786.f_5, 0f, -1.5f, 0f), 1f, 8);
					}
					else
					{
						TASK::TASK_DUMP_CARRIABLE_FROM_PARENT(0, Local_18.f_1786.f_5, Local_18.f_1786.f_8);
						if (func_375(16))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_18.f_1786.f_5, 0f, 3f, 0f), 1f, 20000, 0.25f, false, 40000f);
						}
						TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
					}
				}
			}
			if (func_375(16))
			{
				if (PED::_0x3AA24CCC0D451379(Local_18.f_1786.f_8))
				{
					ENTITY::_0x18FF3110CF47115D(Local_18.f_1786.f_8, 1, 1);
					TASK::_TASK_CUT_FREE_HOGTIED_TARGET_PED(0, Local_18.f_1786.f_8);
				}
			}
		}
		func_467(Global_35, &iVar0, 0, 0, 1, 1);
		Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 1500;
	}
	if (func_375(32) || func_375(64))
	{
		func_465(Local_18.f_1786.f_5, &(Local_18.f_1786.f_3), 0, 0, 0, 1084227584, 100, 0, 0);
		PAD::DISABLE_CONTROL_ACTION(0, -128997553, false);
		PED::SET_PED_RESET_FLAG(Global_35, 295, true);
	}
}

int func_98()
{
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return 5;
	}
	if (func_375(128) || func_375(256))
	{
		if (!func_375(512))
		{
			if (func_180(Global_35, "PLAYER_REACTION_CAUGHT_OUT", 1017772929, 0, 0, 0, 0, 1))
			{
				func_460(512);
			}
		}
	}
	if (func_375(2048) || func_375(1024))
	{
		func_465(Local_18.f_1786.f_6, &(Local_18.f_1786.f_4), 0, 0, 0, 1084227584, 100, 0, 0);
	}
	func_465(Local_18.f_1786.f_5, &(Local_18.f_1786.f_3), 0, 0, 0, 1084227584, 100, 0, 0);
	if ((((Local_18.f_1786.f_1 > MISC::GET_GAME_TIMER() || func_462(Global_35, -208384378)) || func_462(Global_35, -1619621311)) || func_462(Global_35, 724175444)) || func_462(Global_35, 242628503))
	{
		return -1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_18.f_1786.f_7))
	{
		if (TASK::_0x0CCFE72B43C9CF96(Local_18.f_1786.f_7))
		{
			TASK::_0x9EBD34958AB6F824(Local_18.f_1786.f_7);
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_18.f_1786.f_7))
		{
			TASK::TASK_SMART_FLEE_COORD(Local_18.f_1786.f_7, func_468(Local_18.f_45), 999f, -1, false, 1077936128);
		}
		ENTITY::_0x18FF3110CF47115D(Local_18.f_1786.f_7, 0, 0);
		ENTITY::_0x18FF3110CF47115D(Local_18.f_1786.f_7, 2, 0);
		ENTITY::_0x18FF3110CF47115D(Local_18.f_1786.f_7, 3, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_18.f_1786.f_8))
	{
		if (TASK::_0x0CCFE72B43C9CF96(Local_18.f_1786.f_8))
		{
			TASK::TASK_HORSE_ACTION(Local_18.f_1786.f_5, 1, 0, 0);
			TASK::_0x9EBD34958AB6F824(Local_18.f_1786.f_8);
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_18.f_1786.f_8))
		{
			TASK::TASK_SMART_FLEE_COORD(Local_18.f_1786.f_8, func_468(Local_18.f_45), 999f, -1, false, 1077936128);
		}
		ENTITY::_0x18FF3110CF47115D(Local_18.f_1786.f_8, 0, 0);
		ENTITY::_0x18FF3110CF47115D(Local_18.f_1786.f_8, 2, 0);
		ENTITY::_0x18FF3110CF47115D(Local_18.f_1786.f_8, 3, 0);
	}
	if (func_375(2048) || func_375(1024))
	{
		return 4;
	}
	if (!func_375(1) && !func_38(64))
	{
		TASK::_0x816A3ACD265E2297(1361896662, 0);
		func_460(1);
	}
	if (!func_375(8192) && !func_38(32))
	{
		TASK::_0x816A3ACD265E2297(-2146271366, 0);
		func_460(8192);
	}
	return 5;
}

void func_99()
{
	int iVar0;

	func_465(Local_18.f_1786.f_6, &(Local_18.f_1786.f_4), 0, 0, 0, 1084227584, 100, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(Local_18.f_1786.f_6) && !ENTITY::IS_ENTITY_DEAD(Local_18.f_1786.f_6))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_18.f_1786.f_9))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
			}
			TASK::TASK_PICKUP_CARRIABLE_ENTITY(0, Local_18.f_1786.f_9);
			TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(0, Local_18.f_1786.f_9, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_18.f_1786.f_6, 0f, -1.5f, 0f), 1f, 8);
			if (func_375(16))
			{
				if (PED::_0x3AA24CCC0D451379(Local_18.f_1786.f_9))
				{
					ENTITY::_0x18FF3110CF47115D(Local_18.f_1786.f_9, 1, 1);
					TASK::_TASK_CUT_FREE_HOGTIED_TARGET_PED(0, Local_18.f_1786.f_9);
				}
			}
			func_467(Global_35, &iVar0, 0, 0, 1, 1);
			Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 500;
		}
	}
}

int func_100()
{
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return 5;
	}
	func_465(Local_18.f_1786.f_6, &(Local_18.f_1786.f_4), 0, 0, 0, 1084227584, 100, 0, 0);
	if (func_375(128) || func_375(256))
	{
		if (!func_375(512))
		{
			if (func_180(Global_35, "PLAYER_REACTION_CAUGHT_OUT", 1017772929, 0, 0, 0, 0, 1))
			{
				func_460(512);
			}
		}
	}
	if ((((Local_18.f_1786.f_1 > MISC::GET_GAME_TIMER() || func_462(Global_35, -208384378)) || func_462(Global_35, -1619621311)) || func_462(Global_35, 724175444)) || func_462(Global_35, 242628503))
	{
		return -1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_18.f_1786.f_9))
	{
		if (TASK::_0x0CCFE72B43C9CF96(Local_18.f_1786.f_9))
		{
			TASK::TASK_HORSE_ACTION(Local_18.f_1786.f_6, 1, 0, 0);
			TASK::_0x9EBD34958AB6F824(Local_18.f_1786.f_9);
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_18.f_1786.f_9))
		{
			TASK::TASK_SMART_FLEE_COORD(Local_18.f_1786.f_9, func_468(Local_18.f_45), 999f, -1, false, 1077936128);
		}
		ENTITY::_0x18FF3110CF47115D(Local_18.f_1786.f_9, 0, 0);
		ENTITY::_0x18FF3110CF47115D(Local_18.f_1786.f_9, 2, 0);
		ENTITY::_0x18FF3110CF47115D(Local_18.f_1786.f_9, 3, 0);
	}
	if (!func_375(1) && !func_38(64))
	{
		TASK::_0x816A3ACD265E2297(1361896662, 0);
		func_460(1);
	}
	if (!func_375(8192) && !func_38(32))
	{
		TASK::_0x816A3ACD265E2297(-2146271366, 0);
		func_460(8192);
	}
	return 5;
}

void func_101()
{
	Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 2000;
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
}

int func_102()
{
	if (MISC::GET_GAME_TIMER() > Local_18.f_1786.f_1)
	{
		if (func_375(2))
		{
			func_376(2);
			func_445(3, -1972216640, 0, "CAMP_DBODY_HON", 0, 0, 1065353216, 0);
			if (((((func_375(8) || func_375(16)) || func_375(32)) || func_375(64)) || func_375(2048)) || func_375(1024))
			{
				Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 2000;
				return -1;
			}
		}
		if (func_375(4))
		{
			func_376(4);
			func_445(3, -1972216640, 0, "CAMP_HOGT_HON", 0, 0, 1065353216, 0);
			if (((((func_375(8) || func_375(16)) || func_375(32)) || func_375(64)) || func_375(2048)) || func_375(1024))
			{
				Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 2000;
				return -1;
			}
		}
		if (func_375(8))
		{
			func_376(8);
			func_445(3, -1972216640, 0, "CAMP_DBODY_HON", 0, 0, 1065353216, 0);
			if (((func_375(32) || func_375(64)) || func_375(2048)) || func_375(1024))
			{
				Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 2000;
				return -1;
			}
		}
		if (func_375(16))
		{
			func_376(16);
			func_445(3, -1972216640, 0, "CAMP_HOGT_HON", 0, 0, 1065353216, 0);
			if (((func_375(32) || func_375(64)) || func_375(2048)) || func_375(1024))
			{
				Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 2000;
				return -1;
			}
		}
		if (func_375(2048))
		{
			func_376(2048);
			func_445(3, -1972216640, 0, "CAMP_DBODY_HON", 0, 0, 1065353216, 0);
			if (func_375(32) || func_375(64))
			{
				Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 2000;
				return -1;
			}
		}
		if (func_375(1024))
		{
			func_376(1024);
			func_445(3, -1972216640, 0, "CAMP_HOGT_HON", 0, 0, 1065353216, 0);
			if (func_375(32) || func_375(64))
			{
				Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 2000;
				return -1;
			}
		}
		if (func_375(32))
		{
			func_376(32);
			func_445(3, -1972216640, 0, "CAMP_DBODY_HON", 0, 0, 1065353216, 0);
		}
		if (func_375(64))
		{
			func_376(64);
			func_445(3, -1972216640, 0, "CAMP_HOGT_HON", 0, 0, 1065353216, 0);
		}
		return 0;
	}
	return -1;
}

void func_103()
{
	vector3 vVar0;
	vector3 vVar3;

	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256, 0);
	vVar0 = { func_469() };
	vVar0.f_2 = 0f;
	vVar0 = { vVar0 * Vector(20f, 20f, 20f) };
	vVar3 = { Global_36 - vVar0 };
	TASK::TASK_SMART_FLEE_COORD(Global_35, vVar3, 2000f, -1, 8388608, 1f);
}

int func_104()
{
	if (!func_470(Global_35, &(Global_1357549->f_3[4]), 1, 0))
	{
		TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
		return 0;
	}
	return -1;
}

void func_105()
{
	Local_18.f_1862 = 0;
	Local_18.f_1862.f_1 = 0;
	Local_18.f_1862.f_2 = 0;
	Local_18.f_1862.f_3 = -1;
	Local_18.f_1862.f_5 = func_471();
	if (Local_18.f_1862.f_4 != -1)
	{
		func_472(Local_18.f_1862.f_4, 256);
	}
	Local_18.f_1862.f_4 = -1;
}

int func_106()
{
	vector3 vVar0;
	var uVar3;

	if (func_38(1))
	{
		if (func_133(0, 0, 1))
		{
			return -1;
		}
		else
		{
			func_50(1);
		}
	}
	if ((func_134(&Global_1935630, 16384) || func_137(func_136(func_135()), 256)) || STREAMING::_0x99F92061EFE908BA())
	{
		return -1;
	}
	if (Local_18.f_1721.f_62 > 0)
	{
		return -1;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return -1;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(&(Global_1357549->f_3[0])))
	{
		return -1;
	}
	if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, &(Global_1357549->f_3[0]), false, 0))
	{
		return -1;
	}
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (func_473(func_148(), &vVar0, &uVar3) && BUILTIN::VDIST2(vVar0, Global_36) < 4f)
		{
			return -1;
		}
		Local_18.f_1862.f_5 = PED::GET_MOUNT(Global_35);
		func_474(1);
	}
	if (TASK::_0xEFC4303DDC6E60D3(Global_35))
	{
		Local_18.f_1862.f_5 = TASK::_0xED1F514AF4732258(Global_35);
		func_474(2);
	}
	if (!func_475(1) && !func_475(2))
	{
		return -1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_18.f_1862.f_5) || ENTITY::IS_ENTITY_DEAD(Local_18.f_1862.f_5))
	{
		return -1;
	}
	return 1;
}

void func_107()
{
	Local_18.f_1862.f_3 = func_464(1, 8);
	Local_18.f_1862.f_1 = MISC::GET_GAME_TIMER() + 1500;
}

int func_108()
{
	int iVar0;

	PAD::DISABLE_CONTROL_ACTION(0, -1453452184, false);
	if (func_38(1))
	{
		if (func_133(0, 0, 1))
		{
			return 0;
		}
	}
	if (func_134(&Global_1935630, 16384) || STREAMING::_0x99F92061EFE908BA())
	{
		return 0;
	}
	if (Local_18.f_1721.f_62 > 0)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return 0;
	}
	PED::SET_PED_RESET_FLAG(Global_35, 184, true);
	if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, &(Global_1357549->f_3[0]), false, 0))
	{
		return 0;
	}
	if (func_475(1))
	{
		if (!PED::IS_PED_ON_MOUNT(Global_35))
		{
			return 3;
		}
	}
	if (func_475(2))
	{
		if (!TASK::_0xEFC4303DDC6E60D3(Global_35))
		{
			return 3;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_18.f_1862.f_5) || ENTITY::IS_ENTITY_DEAD(Local_18.f_1862.f_5))
	{
		return 0;
	}
	if (Local_18.f_1862.f_3 == -1)
	{
		return 2;
	}
	if (MISC::GET_GAME_TIMER() > Local_18.f_1862.f_1)
	{
		return 2;
	}
	iVar0 = func_179(Local_18.f_1862.f_3);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		Local_18.f_1862.f_3 = func_464(1, 8);
		return -1;
	}
	if (!func_475(4))
	{
		if (func_180(iVar0, "RIDING_HORSE_IN_CAMP", -1323320425, Global_35, 0, 0, 0, 1))
		{
			func_474(4);
			return 2;
		}
		if (func_180(iVar0, "SHAME_ON_YOU", -1323320425, Global_35, 0, 0, 0, 1))
		{
			func_474(4);
			return 2;
		}
		if (func_180(iVar0, "SHAME_ON_YOU_DOWN", -1323320425, Global_35, 0, 0, 0, 1))
		{
			func_474(4);
			return 2;
		}
		if (func_180(iVar0, "PLAYER_ACTING_WEIRD", -1323320425, Global_35, 0, 0, 0, 1))
		{
			func_474(4);
			return 2;
		}
		if (func_180(iVar0, "PLAYER_ACTING_WEIRD_DOWN", -1323320425, Global_35, 0, 0, 0, 1))
		{
			func_474(4);
			return 2;
		}
	}
	return -1;
}

void func_109()
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, 0, 0);
	if (!func_477(func_476(44)) && func_148() != 0)
	{
		func_209(533, 0);
	}
	Local_18.f_1862.f_4 = func_478(Local_18.f_1862.f_5);
	if (Local_18.f_1862.f_4 != -1)
	{
		func_479(Local_18.f_1862.f_4, 256);
	}
	Local_18.f_1862.f_1 = MISC::GET_GAME_TIMER();
	if (func_148() != 0)
	{
		Local_18.f_1862.f_1 += 1200;
	}
}

int func_110()
{
	PAD::DISABLE_CONTROL_ACTION(0, -1453452184, false);
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return 0;
	}
	PED::SET_PED_RESET_FLAG(Global_35, 184, true);
	if (func_134(&Global_1935630, 16384) || STREAMING::_0x99F92061EFE908BA())
	{
		return 0;
	}
	if (!func_475(4))
	{
		if (func_38(1))
		{
			if (func_133(0, 0, 1))
			{
				return 0;
			}
		}
		if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, &(Global_1357549->f_3[0]), false, 0))
		{
			return 0;
		}
	}
	if (func_475(1))
	{
		if (!PED::IS_PED_ON_MOUNT(Global_35))
		{
			PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 3000, 0f, true, false);
			return 3;
		}
	}
	if (func_475(2))
	{
		if (!TASK::_0xEFC4303DDC6E60D3(Global_35))
		{
			return 3;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_18.f_1862.f_5) || ENTITY::IS_ENTITY_DEAD(Local_18.f_1862.f_5))
	{
		return 0;
	}
	func_465(Local_18.f_1862.f_5, &(Local_18.f_1862.f_2), 32, 0, 0, 1084227584, 100, 0, 0);
	if (MISC::GET_GAME_TIMER() < Local_18.f_1862.f_1)
	{
		return -1;
	}
	if (func_475(4))
	{
		if (!func_475(8))
		{
			if (func_180(Global_35, "DEFUSE_ARGUMENT_TOUGH", 1017772929, 0, 0, 0, 0, 1))
			{
				func_474(8);
				Local_18.f_1862.f_1 = MISC::GET_GAME_TIMER() + 1000;
				return -1;
			}
		}
	}
	if (func_475(1))
	{
		if (!func_462(Global_35, 501393341))
		{
			TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
		}
	}
	if (func_475(2))
	{
		if (!func_475(64))
		{
			TASK::_0xED27560703F37258(Global_35);
			func_474(64);
		}
	}
	return -1;
}

void func_111()
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
}

void func_112()
{
	PED::SET_PED_CONFIG_FLAG(Local_18.f_1862.f_5, 419, true);
	PED::SET_PED_CONFIG_FLAG(Local_18.f_1862.f_5, 412, true);
	PED::SET_PED_CONFIG_FLAG(Local_18.f_1862.f_5, 355, true);
	Local_18.f_1862.f_1 = MISC::GET_GAME_TIMER() + 10000;
}

int func_113()
{
	if (func_475(1) && !func_475(32))
	{
		if (func_480(Global_35, Local_18.f_1862.f_5, 1, 1) > 2f || MISC::GET_GAME_TIMER() > Local_18.f_1862.f_1)
		{
			Local_18.f_1862.f_1 = MISC::GET_GAME_TIMER() + 10000;
			func_481(1);
		}
		else
		{
			return -1;
		}
	}
	ENTITY::_0xC3ABCFBC7D74AFA5(Local_18.f_1862.f_5, 6, 1);
	if (func_38(1))
	{
		if (func_133(0, 0, 1))
		{
			return 0;
		}
	}
	if (func_134(&Global_1935630, 16384) || STREAMING::_0x99F92061EFE908BA())
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_18.f_1862.f_5) || ENTITY::IS_ENTITY_DEAD(Local_18.f_1862.f_5))
	{
		return 0;
	}
	PED::SET_PED_RESET_FLAG(Global_35, 184, true);
	if (!func_475(16))
	{
		if (func_180(Global_35, "SPURS_HORSE", 1017772929, 0, 0, 0, 0, 1))
		{
			func_474(16);
		}
	}
	if (MISC::GET_GAME_TIMER() > Local_18.f_1862.f_1)
	{
		return 0;
	}
	if (!TASK::_0x841475AC96E794D1(Local_18.f_1862.f_6))
	{
		Local_18.f_1862.f_6 = func_482();
	}
	if (TASK::_0x841475AC96E794D1(Local_18.f_1862.f_6))
	{
		if (!func_475(32))
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_18.f_1862.f_5, TASK::_0xA8452DD321607029(Local_18.f_1862.f_6, 1), 1.5f, 35000, 0.25f, false, 40000f);
			func_474(32);
		}
		if (ENTITY::IS_ENTITY_AT_COORD(Local_18.f_1862.f_5, TASK::_0xA8452DD321607029(Local_18.f_1862.f_6, 1), 0.5f, 0.5f, 2f, false, true, 0))
		{
			return 0;
		}
	}
	return -1;
}

void func_114()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_18.f_1862.f_5) && !ENTITY::IS_ENTITY_DEAD(Local_18.f_1862.f_5))
	{
		PED::SET_PED_CONFIG_FLAG(Local_18.f_1862.f_5, 419, false);
		PED::SET_PED_CONFIG_FLAG(Local_18.f_1862.f_5, 412, false);
	}
}

void func_115()
{
	Local_18.f_1934.f_65 = 0;
	Local_18.f_1934.f_66 = 0;
	GRAPHICS::_0x5199405EABFBD7F0("CamTransitionBlinkSlow");
	func_483();
}

int func_116()
{
	if (func_484())
	{
		if (ENTITY::GET_ENTITY_SPEED(Global_35) > 0.5f)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 203, true);
		}
	}
	if (!func_485())
	{
		return -1;
	}
	if (!PED::_0xA911EE21EDF69DAF(Global_35))
	{
		return -1;
	}
	Local_18.f_1934.f_66 = PED::_0xD806CD2A4F2C2996(Global_35);
	if ((ENTITY::DOES_ENTITY_EXIST(Local_18.f_1934.f_66) && ENTITY::IS_ENTITY_A_PED(Local_18.f_1934.f_66)) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Local_18.f_1934.f_66)))
	{
		return -1;
	}
	else if (func_486(Local_18.f_1934.f_66))
	{
		Local_18.f_1934.f_83 = 1;
	}
	else if (func_487(Global_35))
	{
		Local_18.f_1934.f_84 = 1;
	}
	return 1;
}

void func_117()
{
	Local_18.f_1934.f_79 = GRAPHICS::_0xB958D97A0DFAA0C2("CamTransitionBlinkSlow");
}

int func_118()
{
	float fVar0;

	if (!func_485())
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_18.f_1934.f_66))
	{
		return 0;
	}
	if (PED::_0xD806CD2A4F2C2996(Global_35) != Local_18.f_1934.f_66)
	{
		return 0;
	}
	if (PED::IS_PED_IN_MELEE_COMBAT(Global_35))
	{
		return -1;
	}
	if (func_484())
	{
		if (ENTITY::GET_ENTITY_SPEED(Global_35) > 0.5f)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 203, true);
		}
	}
	if (!func_488(Global_35))
	{
		return -1;
	}
	if (func_462(Global_35, -208384378))
	{
		return -1;
	}
	PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	fVar0 = BUILTIN::VDIST2(Global_36, func_489(Local_18.f_1934.f_84, Local_18.f_1934.f_67.f_6, Local_18.f_1934.f_67));
	if (fVar0 > 3f)
	{
		return 2;
	}
	return 3;
}

void func_119()
{
	PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
	GRAPHICS::ANIMPOSTFX_PLAY("CamTransitionBlinkSlow");
	func_182(&(Local_18.f_1934.f_80), 1);
}

int func_120()
{
	PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("CamTransitionBlinkSlow") && GRAPHICS::_0xFBF161FCFEC8589E("CamTransitionBlinkSlow", 2, 0, &(Local_18.f_1934.f_79)))
	{
		ENTITY::_0x203BEFFDBE12E96A(PLAYER::PLAYER_PED_ID(), func_489(Local_18.f_1934.f_84, Local_18.f_1934.f_67.f_6, Local_18.f_1934.f_67), func_490(Local_18.f_1934.f_84, Local_18.f_1934.f_67.f_9, Local_18.f_1934.f_67.f_3), 1, 1, 0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(func_490(Local_18.f_1934.f_84, Local_18.f_1934.f_67.f_10, Local_18.f_1934.f_67.f_4), 1065353216);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(func_490(Local_18.f_1934.f_84, Local_18.f_1934.f_67.f_11, Local_18.f_1934.f_67.f_5), 1f);
		TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, Local_18.f_1934.f_66, 0f, 0f, 0f, 1073741824, 33);
		return 4;
	}
	if (func_175(&(Local_18.f_1934.f_80)) && func_491(&(Local_18.f_1934.f_80)) > 5000)
	{
		TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
		return 0;
	}
	return -1;
}

void func_121()
{
	PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
	TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, Local_18.f_1934.f_66, 0f, 0f, 0f, 1073741824, 33);
}

int func_122()
{
	PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	return 4;
}

void func_123()
{
	PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	if (Local_18.f_1934.f_79)
	{
		GRAPHICS::_0xA201A3D0AC087C37("CamTransitionBlinkSlow");
		Local_18.f_1934.f_79 = 0;
	}
	func_182(&(Local_18.f_1934.f_80), 1);
}

int func_124()
{
	float fVar0;
	var uVar1;
	vector3 vVar4;
	vector3 vVar7;
	float fVar10;
	vector3 vVar11;

	PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	if (!PED::_0xA911EE21EDF69DAF(Global_35))
	{
		vVar4 = { ENTITY::GET_ENTITY_COORDS(Local_18.f_1934.f_66, true, false) };
		if (MISC::GET_GROUND_Z_AND_NORMAL_FOR_3D_COORD(vVar4.x, vVar4.y, (vVar4.z + 10f), &fVar0, &uVar1))
		{
			if (vVar4.z < fVar0)
			{
				vVar7 = { func_489(Local_18.f_1934.f_84, Local_18.f_1934.f_67.f_6, Local_18.f_1934.f_67) };
				fVar10 = func_490(Local_18.f_1934.f_84, Local_18.f_1934.f_67.f_9, Local_18.f_1934.f_67.f_3);
				vVar11 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar7, fVar10, 0f, 0.75f, 0f) };
				vVar11.f_2 = fVar0;
				ENTITY::SET_ENTITY_COORDS(Local_18.f_1934.f_66, vVar11, true, false, true, true);
				ENTITY::_0x9587913B9E772D29(Local_18.f_1934.f_66, 0);
			}
		}
		if (!func_488(PLAYER::PLAYER_PED_ID()))
		{
			if (Local_18.f_1934.f_83 && func_295(Local_18.f_45))
			{
				func_209(615, 1);
			}
			else if (Local_18.f_45 == 8 || Local_18.f_45 == 7)
			{
				func_209(617, 1);
			}
			else
			{
				func_209(616, 1);
			}
			Local_18.f_1934.f_83 = 0;
			Local_18.f_1934.f_84 = 0;
			TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
			return 0;
		}
	}
	if (func_175(&(Local_18.f_1934.f_80)) && func_491(&(Local_18.f_1934.f_80)) > 5000)
	{
		TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
		return 0;
	}
	PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	return -1;
}

Vector3 func_125(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1356.339f, 2443.121f, 308.1876f;
		case 1:
			return -125.85f, -39.9599f, 96.0908f;
		case 2:
			return 654.1f, -1245.5f, 43.5f;
		case 3:
			return 1905.086f, -1861.727f, 46.3492f;
		case 5:
			return 2222.172f, -772.852f, 42.662f;
		case 6:
			return 2342.779f, 1359.049f, 106.3936f;
		case 4:
			return 1422.625f, -7332.473f, 80.5977f;
		case 7:
			return -2592.702f, 453.0722f, 146.4588f;
		case 8:
			return -1639.306f, -1361.465f, 83.3963f;
	}
	return 0f, 0f, 0f;
}

void func_126()
{
	func_492(uLocal_3601[0], 656.3932f, -1232.21f, 43.86718f, 4f, 1, 29, 0);
	func_492(uLocal_3601[1], 657.5635f, -1232.771f, 43.37803f, 4f, 2, 18, 0);
	func_492(uLocal_3601[2], 659.1177f, -1228.901f, 43.93859f, 2f, 2, 18, 0);
	func_492(uLocal_3601[3], 666.638f, -1218.673f, 45.03771f, 1f, 1, 2, 0);
	func_492(uLocal_3601[4], 666.638f, -1218.673f, 45.03771f, 3f, 1, 29, 0);
	func_492(uLocal_3601[5], 666.638f, -1218.673f, 45.03771f, 4f, 2, 18, 0);
	func_492(uLocal_3601[12], 663.1995f, -1266.629f, 42.86007f, 3f, 1, 29, 0);
	func_492(uLocal_3601[11], 663.1995f, -1266.629f, 42.86007f, 2f, 2, 18, 0);
	func_492(uLocal_3601[6], 682.9747f, -1245.409f, 42.99231f, 1f, 1, 31, 0);
	func_492(uLocal_3601[7], 682.9747f, -1245.409f, 42.99231f, 3.5f, 2, 18, 0);
	func_492(uLocal_3601[9], 679.2255f, -1248.546f, 43.04386f, 0.5f, 1, 31, 0);
	func_492(uLocal_3601[10], 679.2255f, -1248.546f, 43.04386f, 2f, 2, 18, 0);
	func_492(uLocal_3601[8], 676.3844f, -1251.406f, 43.01526f, 3f, 2, 18, 0);
	func_492(uLocal_3601[13], 653.8909f, -1253.399f, 42.84814f, 3f, 1, 31, 0);
	func_492(uLocal_3601[14], 660.7718f, -1257.453f, 42.71371f, 2.5f, 1, 31, 0);
	func_492(uLocal_3601[15], 673.2725f, -1268.013f, 43.13684f, 2f, 1, 31, 0);
	func_492(uLocal_3601[16], 676.275f, -1265.928f, 43.10801f, 2.5f, 1, 31, 0);
	func_492(uLocal_3601[17], 690.4104f, -1259.118f, 43.7009f, 2f, 1, 31, 0);
	func_492(uLocal_3601[18], 691.861f, -1254.139f, 43.62256f, 2.5f, 1, 31, 0);
	func_492(uLocal_3601[19], 685.9976f, -1240.614f, 43.00195f, 2f, 1, 31, 0);
	func_492(uLocal_3601[20], 673.0549f, -1238.818f, 43.23489f, 3f, 1, 31, 0);
	func_492(uLocal_3601[21], 653.2302f, -1243.668f, 42.68324f, 1.75f, 1, 31, 0);
	func_492(uLocal_3601[22], 672.4307f, -1259.949f, 43.03751f, 0.9f, 1, 31, 0);
	func_492(uLocal_3601[23], 672.4307f, -1259.949f, 43.03751f, 1.5f, 2, 18, 0);
}

int func_127()
{
	vector3 vVar0;
	int iVar3;

	vVar0 = { func_493(func_148()) };
	if (!func_133(0, 0, 1))
	{
		return 0;
	}
	if (func_12(1048576))
	{
		return 0;
	}
	if (func_32() != 1)
	{
		return 0;
	}
	if ((func_234(-558867971, 1) || func_234(180573150, 1)) || func_234(-404697685, 1))
	{
		return 0;
	}
	if (func_494(17, 21))
	{
		iVar3 = 5;
	}
	else if (func_494(5, 10))
	{
		iVar3 = 2;
	}
	else
	{
		iVar3 = 0;
	}
	if (MISC::GET_RANDOM_INT_IN_RANGE(0, 10) > iVar3)
	{
		return 0;
	}
	if (CLOCK::GET_CLOCK_HOURS() < 5 || CLOCK::GET_CLOCK_HOURS() > 22)
	{
		return 0;
	}
	if (func_495(vVar0, 5f, 4, 0))
	{
		return 0;
	}
	func_496(300);
	return 1;
}

void func_128()
{
	(Local_18.f_3057[0 /*21*/])->f_6 = { 651.6099f, -1245.247f, 43.8409f };
	(Local_18.f_3057[0 /*21*/])->f_9 = { 652.1015f, -1245.072f, 43.9123f };
	(Local_18.f_3057[0 /*21*/])->f_12 = { 4.5811f, 0f, 98.7225f };
	(Local_18.f_3057[0 /*21*/])->f_15 = 51.282f;
	(Local_18.f_3057[0 /*21*/])->f_16 = -964815941;
	(Local_18.f_3057[0 /*21*/])->f_18 = 1057677739;
	(Local_18.f_3057[0 /*21*/])->f_19 = 0;
	(Local_18.f_3057[0 /*21*/])->f_20 = "VI_HSHOE";
	(Local_18.f_3057[1 /*21*/])->f_6 = { vLocal_3732 };
	(Local_18.f_3057[1 /*21*/])->f_9 = { 651.6634f, -1244.918f, 44.2157f };
	(Local_18.f_3057[1 /*21*/])->f_12 = { -19.3729f, 0f, 124.3636f };
	(Local_18.f_3057[1 /*21*/])->f_15 = 51.282f;
	(Local_18.f_3057[1 /*21*/])->f_16 = -964815941;
	(Local_18.f_3057[1 /*21*/])->f_19 = 0;
	(Local_18.f_3057[1 /*21*/])->f_20 = "VI_ADAD";
	(Local_18.f_3057[2 /*21*/])->f_6 = { vLocal_3737 };
	(Local_18.f_3057[2 /*21*/])->f_9 = { 651.5223f, -1244.948f, 43.9511f };
	(Local_18.f_3057[2 /*21*/])->f_12 = { -1.7966f, 0f, 125.8308f };
	(Local_18.f_3057[2 /*21*/])->f_15 = 51.282f;
	(Local_18.f_3057[2 /*21*/])->f_16 = -964815941;
	(Local_18.f_3057[2 /*21*/])->f_19 = 0;
	(Local_18.f_3057[2 /*21*/])->f_20 = "VI_ADOG";
	(Local_18.f_3057[3 /*21*/])->f_6 = { 651.6099f, -1245.247f, 43.8409f };
	(Local_18.f_3057[3 /*21*/])->f_9 = { 651.8752f, -1245.167f, 43.9404f };
	(Local_18.f_3057[3 /*21*/])->f_12 = { -10.8361f, 0f, 136.4395f };
	(Local_18.f_3057[3 /*21*/])->f_15 = 51.2794f;
	(Local_18.f_3057[3 /*21*/])->f_16 = -964815941;
	(Local_18.f_3057[3 /*21*/])->f_19 = 0;
	(Local_18.f_3057[3 /*21*/])->f_20 = "VI_HOSEA";
}

void func_129()
{
	(Local_3764[0 /*8*/])->f_6 = joaat("p_cs_photo_4x6");
	(Local_3764[0 /*8*/])->f_3 = { vLocal_3732 };
	(Local_3764[1 /*8*/])->f_6 = joaat("p_cs_photo_4x6");
	(Local_3764[1 /*8*/])->f_3 = { vLocal_3737 };
	(Local_3764[2 /*8*/])->f_6 = joaat("p_cs_photo_5x7");
	(Local_3764[2 /*8*/])->f_3 = { vLocal_3737 };
	iLocal_3513 = 0;
}

void func_130(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	*uParam0 = iParam1;
	uParam0->f_3 = iParam2;
	uParam0->f_1 = _NAMESPACE48::_0x112DDF56300BC6E5(*uParam0);
	if (!_NAMESPACE48::_0x800DF3FC913355F3(uParam0->f_1))
	{
		uParam0->f_1 = _NAMESPACE48::_0x4F76E3676583D951(*uParam0);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		_NAMESPACE48::_0x187D65F3AEC5D679(*uParam0, sParam3);
	}
}

bool func_131(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	return MISC::IS_BIT_SET(Global_40.f_6563.f_271, iVar0);
}

int func_132()
{
	switch (Global_40.f_6563.f_272)
	{
		case 290068603:
			return 1834229301;
		case 1159327003:
			return -455330719;
		case -1487662509:
			return 1938122415;
		case 443610063:
			return 528923193;
		case 1020653842:
			return 739137516;
	}
	return 1938122415;
}

int func_133(int iParam0, bool bParam1, int iParam2)
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
		if (func_497())
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
		iVar0 = func_498(&(Global_1898164->f_1[0 /*5*/]));
		if (func_499(iVar0) && func_500(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_501(&(Global_1898164->f_1[0 /*5*/])))
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

bool func_134(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_135()
{
	return Global_1894899->f_2;
}

int func_136(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return 7;
		case 79:
			return 0;
		case 43:
			return 1;
		case 98:
			return 2;
		case 58:
			return 3;
		case 71:
			return 4;
		case 4:
			return 5;
		case 76:
			return 8;
		case 9:
			return 6;
		case 5:
			return 9;
		case 38:
			return 10;
		case 105:
			return 11;
		case 92:
			return 12;
		case 78:
			return 13;
		case 26:
			return 14;
		case 37:
			return 15;
		case 115:
			return 16;
		default:
			break;
	}
	return -1;
}

bool func_137(int iParam0, int iParam1)
{
	if (!func_502(iParam0))
	{
		return false;
	}
	return (Global_40.f_9384[iParam0 /*2*/] && iParam1) != 0;
}

int func_138(int iParam0)
{
	if (!func_503(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(((*Global_1360165)[iParam0 /*1157*/])->f_70))
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_70 = 0;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_70;
}

int func_139(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!PED::_0x772A1969F649E902(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (func_462(iParam0, 713668775))
	{
		return 0;
	}
	if (((func_462(iParam0, -76381094) || func_462(iParam0, -1098463898)) || func_462(iParam0, 993674639)) || TASK::GET_IS_TASK_ACTIVE(iParam0, 7))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_IN_VOLUME(iParam0, &(Global_1357549->f_3[0]), false, 0))
	{
		return 0;
	}
	if (!PED::_0x2D64376CF437363E(iParam0))
	{
		return 1;
	}
	if (!PED::_IS_MOUNT_SEAT_FREE(iParam0, -1))
	{
		return 0;
	}
	if (iParam1 != -1 && func_504(iParam1))
	{
		return 0;
	}
	return 1;
}

void func_140(int iParam0)
{
	int iVar0;

	iVar0 = func_482();
	if (!TASK::_0x841475AC96E794D1(iVar0))
	{
		return;
	}
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, TASK::_0xA8452DD321607029(iVar0, 1), 1.5f, 20000, 0.25f, false, 40000f);
}

bool func_141()
{
	return Global_1949598->f_1;
}

bool func_142()
{
	return func_505();
}

void func_143(bool bParam0)
{
	if (bParam0 == func_142())
	{
		return;
	}
	if (bParam0)
	{
		func_153(81053684);
		if (!func_507(func_506(0)))
		{
			func_153(-525676072);
		}
	}
	else
	{
		func_152(81053684);
		func_152(-525676072);
	}
	Global_1946804->f_2792 = bParam0;
}

void func_144(int iParam0)
{
	switch (func_56())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 - (Global_1357549->f_1494 && iParam0));
			break;
	}
}

int func_145(var uParam0)
{
	if (-1829635046 == func_508(81053684))
	{
		if (func_509(uParam0))
		{
			return 1;
		}
	}
	else if (func_510(-525676072, uParam0))
	{
		if (func_509(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_146()
{
	int iVar0;

	if (!func_505())
	{
		return 0;
	}
	if (!func_509(&iVar0))
	{
		return 0;
	}
	if (!func_511(iVar0))
	{
		return 0;
	}
	return func_512(iVar0, 0);
}

void func_147(int iParam0)
{
	switch (func_56())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 || iParam0);
			break;
	}
}

int func_148()
{
	return Global_40.f_4283;
}

int func_149()
{
	if (func_56() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == 11966224)
	{
		return 1;
	}
	return 0;
}

bool func_150(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_513(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
	}
	return (UNLOCK::_UNLOCK_IS_UNLOCKED(((*Global_1835011)[iParam0 /*74*/])->f_2) && !UNLOCK::_UNLOCK_IS_VISIBLE(((*Global_1835011)[iParam0 /*74*/])->f_2));
}

bool func_151(int iParam0)
{
	return func_515(func_514(iParam0));
}

void func_152(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_516(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_517(iVar1) == iParam0)
		{
			INVENTORY::_0x766315A564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_518(func_514(iParam0), 6);
}

void func_153(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_516(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_517(iVar1) == iParam0)
		{
			INVENTORY::_0x6A564540FAC12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_519(func_514(iParam0), 6);
}

void func_154()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	bVar0 = func_38(16);
	bVar1 = Global_1357549->f_1485 > BUILTIN::TO_FLOAT(5400);
	bVar2 = func_12(32768);
	if ((!bVar0 && bVar2) && bVar1)
	{
		func_167(16);
		func_445(2, -549508280, 0, 0, 0, 0, 1065353216, 0);
	}
	if (bVar0 && !bVar2)
	{
		func_50(16);
		Global_1357549->f_1485 = 0f;
	}
}

void func_155(float fParam0, float fParam1, float fParam2)
{
	struct<16> Var0;

	Var0 = { func_520(fParam0, fParam1, fParam2) };
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1357549->f_1886.f_1, &Var0);
}

int func_156()
{
	return Global_40.f_4283.f_324;
}

void func_157(int iParam0)
{
	int iVar0;
	int iVar1;

	func_521(iParam0, &iVar0, &iVar1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1357549->f_1886.f_2, iVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1357549->f_1886.f_2.f_1, iVar1);
}

void func_158(int iParam0)
{
	int iVar0;
	int iVar1;

	func_521(iParam0, &iVar0, &iVar1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1357549->f_1886.f_4, iVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1357549->f_1886.f_4.f_1, iVar1);
}

int func_159(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (MISC::IS_BIT_SET(&(Local_18.f_14[iParam0]), iVar0))
		{
			if (!MISC::IS_BIT_SET(Local_18.f_41, iVar0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_160(var uParam0)
{
	func_522(uParam0, &(Global_1357549->f_3[2]), &(Global_1357549->f_3[3]), 0);
	func_523(&(Global_1357549->f_3[2]));
	if (((!func_12(64) && !func_355(4)) && !func_134(&Global_1935630, 4194304)) && VOLUME::_0xF256A75210C5C0EB(&(Global_1357549->f_3[2]), Global_36))
	{
		func_165(0);
	}
	if (uParam0->f_49)
	{
		func_524(uParam0);
	}
	else
	{
		func_525(uParam0);
	}
}

void func_161(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (VOLUME::_0x92A78D0BEDB332A3(iParam0) && VOLUME::_0xF256A75210C5C0EB(iParam0, Global_36))
	{
		if (!func_12(1073741824))
		{
			func_147(1073741824);
		}
	}
	else if (func_12(1073741824))
	{
		func_144(1073741824);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(iParam1) && VOLUME::_0xF256A75210C5C0EB(iParam1, Global_36))
	{
		if (!func_12(32768))
		{
			func_147(32768);
		}
	}
	else if (func_12(32768))
	{
		func_144(32768);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(iParam2) && VOLUME::_0xF256A75210C5C0EB(iParam2, Global_36))
	{
		if (!func_38(512))
		{
			func_167(512);
		}
	}
	else if (func_38(512))
	{
		func_50(512);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(iParam3) && VOLUME::_0xF256A75210C5C0EB(iParam3, Global_36))
	{
		if (!func_38(1024))
		{
			func_167(1024);
		}
	}
	else if (func_38(1024))
	{
		func_50(1024);
	}
}

void func_162(int iParam0)
{
	int iVar0;
	int iVar1[2];
	int iVar4;

	iVar1[0] = 0;
	iVar1[1] = 1;
	iVar4 = 0;
	while (iVar4 < iVar1)
	{
		iVar0 = func_377(&(iVar1[iVar4]));
		if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && VOLUME::_0x92A78D0BEDB332A3(iParam0)) && VOLUME::_0xF256A75210C5C0EB(iParam0, ENTITY::GET_ENTITY_COORDS(iVar0, true, false)))
		{
			func_526(&(iVar1[iVar4]), 1);
		}
		else
		{
			func_526(&(iVar1[iVar4]), 0);
		}
		iVar4++;
	}
}

void func_163(var uParam0)
{
	if (!func_38(33554432))
	{
		if (func_38(1024))
		{
			func_167(33554432);
			POPULATION::_0xC6DCC2A3A8825C85(0);
		}
	}
	else
	{
		POPULATION::_0x8EC7CD701F872F87(0f, 4270208, 0, 0, -1, -1);
		POPULATION::_0x8EC7CD701F872F87(0.3f, 1760, 0, 0, -1, -1);
		if (!func_38(512))
		{
			POPULATION::_0xBC90BDF4E5228EA1();
			func_50(33554432);
		}
	}
}

void func_164()
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;
	int iVar6;

	if (((MISC::GET_FRAME_COUNT() % 15) != 0 || func_527(4)) || func_166())
	{
		return;
	}
	iVar0 = func_148();
	vVar1 = { func_468(iVar0) };
	fVar4 = 50f;
	if ((iVar0 == 7 || iVar0 == 8) || iVar0 == 3)
	{
		fVar4 = 150f;
	}
	iVar5 = _NAMESPACE49::_0xBA2C49EA6A8D24FF(vVar1, fVar4, 0, 1, 0);
	iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar5);
	if (((!ENTITY::DOES_ENTITY_EXIST(iVar5) || !ENTITY::DOES_ENTITY_EXIST(iVar6)) || !MISC::_0x5170DDA6D63ACAAA(iVar6)) || ENTITY::IS_ENTITY_ON_SCREEN(iVar5))
	{
		return;
	}
	PED::SET_PED_CONFIG_FLAG(iVar6, 186, false);
	ENTITY::SET_ENTITY_COORDS(iVar5, 523.9103f, -6.4477f, 110.8692f, false, false, false, true);
	_NAMESPACE49::_0x9D16896F0DBE78A2(523.9103f, -6.4477f, 110.8692f, 2.5f);
}

void func_165(bool bParam0)
{
	func_341(bParam0);
	func_342(!bParam0);
}

bool func_166()
{
	return Global_1898164->f_163;
}

void func_167(int iParam0)
{
	switch (func_56())
	{
		case -1:
			Global_1357549->f_1495 = (Global_1357549->f_1495 || iParam0);
			break;
	}
}

bool func_168(int iParam0, vector3 vParam1)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return false;
	}
	return VOLUME::_0xF256A75210C5C0EB(iParam0, vParam1);
}

bool func_169()
{
	return func_384(10, 0) >= 3;
}

void func_170(int iParam0, int iParam1)
{
	if (!func_502(iParam0))
	{
		return;
	}
	Global_40.f_9384[iParam0 /*2*/] = (Global_40.f_9384[iParam0 /*2*/] || iParam1);
}

void func_171(int iParam0, int iParam1)
{
	if (!func_502(iParam0))
	{
		return;
	}
	Global_40.f_9384[iParam0 /*2*/] = (&Global_40.f_9384[iParam0 /*2*/] - (Global_40.f_9384[iParam0 /*2*/] && iParam1));
}

int func_172(int iParam0)
{
	switch (func_148())
	{
		case 2:
			return func_528(iParam0);
		case 1:
			return func_529(iParam0);
		case 6:
			return func_530(iParam0);
		case 3:
			return func_531(iParam0);
	}
	return 0;
}

int func_173(int iParam0)
{
	if (func_532())
	{
		return 0;
	}
	if (AUDIO::_0x54B187F111D9C6F8(Global_35, 0))
	{
		return 0;
	}
	if (func_344(func_179(&(Global_1357549->f_1659[iParam0])), 0))
	{
		if (PED::_0x9337183FDA2E9035(func_179(&(Global_1357549->f_1659[iParam0])), PLAYER::PLAYER_ID()) || PED::_0xA454D234E45BB6E5(func_179(&(Global_1357549->f_1659[iParam0])), PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	if (func_181())
	{
		return 0;
	}
	return 1;
}

int func_174(int iParam0)
{
	int iVar0;

	iVar0 = func_179(&(Global_1357549->f_1659[iParam0]));
	if (func_344(iVar0, 0) && func_177(&(Global_1357549->f_1659[iParam0]), 1, 1))
	{
		if (VOLUME::_0x92A78D0BEDB332A3(&(Global_1357549->f_1663[iParam0])))
		{
			if (func_470(Global_35, &(Global_1357549->f_1663[iParam0]), 1, 0) && func_470(iVar0, &(Global_1357549->f_1663[iParam0]), 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_175(var uParam0)
{
	return func_533(*uParam0, 1);
}

float func_176(var uParam0)
{
	if (!func_175(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_534(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_535() - uParam0->f_1);
}

int func_177(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_536(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		return func_537(iParam0, 26, 1);
	}
	if (bParam2)
	{
		if (!func_344(func_179(iParam0), 0))
		{
			return 0;
		}
	}
	if (!func_538(iParam0, 1, 0))
	{
		return 0;
	}
	if (func_537(iParam0, 44, 1))
	{
		return 0;
	}
	return 1;
}

int func_178(int iParam0, int iParam1)
{
	if (!func_536(iParam0))
	{
		return 0;
	}
	if ((((*Global_1360165)[iParam0 /*1157*/])->f_140 && iParam1) != 0)
	{
		return 1;
	}
	if ((((*Global_1360165)[iParam0 /*1157*/])->f_141 && iParam1) != 0)
	{
		return 1;
	}
	return 0;
}

int func_179(int iParam0)
{
	if (!func_536(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		(*Global_1360165)[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

bool func_180(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	return func_539(iParam0, &Var0);
}

int func_181()
{
	int iVar0;

	iVar0 = TASK::_0xD04241BBF6D03A5E(Global_35);
	if (TASK::_0x841475AC96E794D1(iVar0))
	{
		return 1;
	}
	return 0;
}

void func_182(var uParam0, int iParam1)
{
	if (iParam1 || !func_175(uParam0))
	{
		func_189(uParam0);
	}
}

void func_183(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_184(int iParam0)
{
	if (!func_503(iParam0))
	{
		return false;
	}
	if (!func_357(iParam0))
	{
		return false;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

char* func_185(int iParam0)
{
	char* sVar0;

	sVar0 = "";
	if (func_148() == 3)
	{
		if (iParam0 == 0)
		{
			sVar0 = "PL_DUTCH";
		}
		else
		{
			sVar0 = "PL_JOHN_SHADY";
		}
	}
	else if (iParam0 == 0)
	{
		sVar0 = "PL_DUTCH";
	}
	else
	{
		sVar0 = "PL_JOHN";
	}
	return sVar0;
}

int func_186(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	int iVar5;

	if (!func_503(iParam0))
	{
		return 0;
	}
	vVar0.x = iParam3;
	vVar0.f_1 = iParam4;
	vVar0.f_2 = iParam5;
	if (((Global_1572864->f_13 || Global_1572864->f_14) || Global_1572864->f_8 != 0) || Global_1391438->f_5 & 8 != 0)
	{
		bVar3 = true;
	}
	switch (((*Global_1360165)[iParam0 /*1157*/])->f_11)
	{
		case 0:
			if (func_537(iParam0, 2, 1))
			{
				func_430(iParam0, 2, 1);
			}
			if (func_416(iParam0, 16, 1))
			{
				if ((*Global_1360165)[iParam0 /*1157*/])->f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD()
				{
					if (bParam14)
					{
						func_540(iParam0, 29, 1);
						return 0;
					}
					if (SCRIPTS::IS_THREAD_ACTIVE(((*Global_1360165)[iParam0 /*1157*/])->f_129, false))
					{
					}
					else
					{
						func_188(iParam0, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (func_344(Global_1360165[iParam0 /*1157*/], 0))
				{
					return Global_1360165[iParam0 /*1157*/];
				}
			}
			if (func_344(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_1360165[iParam0 /*1157*/]))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(Global_1360165[iParam0 /*1157*/]))
				{
					if (bParam1)
					{
						func_541(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				func_540(iParam0, 44, 1);
				((*Global_1360165)[iParam0 /*1157*/])->f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				func_542(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_540(iParam0, 44, 1);
				((*Global_1360165)[iParam0 /*1157*/])->f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				func_542(iParam0, 1);
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
			if (!func_537(iParam0, 44, 0))
			{
				func_540(iParam0, 44, 0);
			}
			if (func_543(iParam0, vVar0, iParam13, 0, 1, bParam17, bParam20, -1, 1, 0))
			{
				func_542(iParam0, 2);
			}
			break;
		case 2:
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 171, true);
			if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1360165[iParam0 /*1157*/]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
			}
			func_430(iParam0, 18, 1);
			ENTITY::SET_ENTITY_VISIBLE(Global_1360165[iParam0 /*1157*/], true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], 1030835986);
			POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/], 0);
			_NAMESPACE48::_0x6759BEE6762E140B(((*Global_1360165)[iParam0 /*1157*/])->f_1);
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 130, false);
			func_544(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				func_545(iParam0, 0, 0, 1);
			}
			func_430(iParam0, 33, 1);
			func_430(iParam0, 34, 1);
			func_430(iParam0, 29, 1);
			if (!func_213(vVar0) && iParam7)
			{
				func_542(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				func_542(iParam0, 4);
			}
			else
			{
				func_542(iParam0, 5);
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
						func_541(iParam0, 1, "Teleporting a stolen companion using a scenario.");
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
				func_546(Global_1360165[iParam0 /*1157*/], vVar0, fParam6, 2, 1073741824);
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
				func_542(iParam0, 4);
			}
			else
			{
				func_542(iParam0, 5);
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
				if (func_547(iParam0, iParam13))
				{
					if (PED::_0xA0BC8FAED8CFEB3C(Global_1360165[iParam0 /*1157*/]))
					{
						func_548(iParam0, iParam13, 0);
						func_549(iParam0, Global_1360165[iParam0 /*1157*/], iParam13, 1);
						if (func_537(iParam0, 25, 0))
						{
							func_430(iParam0, 25, 0);
						}
						func_540(iParam0, 66, 0);
						func_542(iParam0, 5);
						((*Global_1360165)[iParam0 /*1157*/])->f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_542(iParam0, 5);
				}
				func_540(iParam0, 28, 1);
			}
			else
			{
				func_542(iParam0, 5);
			}
			break;
		case 5:
			if (PED::_0xA0BC8FAED8CFEB3C(Global_1360165[iParam0 /*1157*/]))
			{
				func_542(iParam0, 6);
			}
			break;
		case 6:
			if (func_344(Global_1360165[iParam0 /*1157*/], 0))
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
					func_550(iParam0);
				}
				if (bParam21)
				{
					TASK::CLEAR_PED_SECONDARY_TASK(Global_1360165[iParam0 /*1157*/]);
					func_551(Global_1360165[iParam0 /*1157*/], 1);
				}
			}
			func_542(iParam0, 7);
		case 7:
			func_544(iParam0, bParam9, bParam15, 0);
			func_552(iParam0, 4, bParam11);
			func_553(iParam0);
			if (bParam20)
			{
				if (func_554(Global_1360165[iParam0 /*1157*/]))
				{
				}
			}
			func_555(iParam0, Global_1360165[iParam0 /*1157*/]);
			if (!bParam23 && !PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true))
			{
				PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true);
			}
			(Global_40.f_4942[iParam0 /*60*/])->f_4 = (Global_40.f_4942[iParam0 /*60*/])->f_3;
			func_542(iParam0, 0);
			func_556(iParam0, 16, 1);
			func_430(iParam0, 44, 1);
			((*Global_1360165)[iParam0 /*1157*/])->f_1156 = 0;
			((*Global_1360165)[iParam0 /*1157*/])->f_129 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			return Global_1360165[iParam0 /*1157*/];
	}
	return 0;
}

void func_187(int iParam0)
{
	func_557(iParam0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Global_1357549->f_1669, "ARTHUR", Global_35, 0);
	if (iParam0 == 0)
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_179(0), 0, 1);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Global_1357549->f_1669, "DUTCH", func_179(0), 0);
	}
	else
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_179(1), 0, 1);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Global_1357549->f_1669, "JOHN", func_179(1), 0);
	}
	func_558(iParam0);
}

void func_188(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	if (!func_503(iParam0))
	{
		return;
	}
	if (func_357(iParam0))
	{
		if (((*Global_1360165)[iParam0 /*1157*/])->f_129 != 0 && ((*Global_1360165)[iParam0 /*1157*/])->f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_540(iParam0, 56, 1);
		func_182(&(Global_1359489->f_40), 1);
	}
	func_559(iParam0, 0);
	func_552(iParam0, 4, 0);
	func_560(iParam0);
	func_553(iParam0);
	func_430(iParam0, 37, 1);
	bVar0 = func_344(Global_1360165[iParam0 /*1157*/], 0);
	iVar1 = func_561(iParam0, 0);
	bVar2 = _NAMESPACE48::_0x800DF3FC913355F3(iVar1);
	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, false);
	}
	if (func_537(iParam0, 64, 1))
	{
		func_430(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_430(iParam0, 33, 1);
		func_430(iParam0, 34, 1);
		func_562(iParam0, 1056964608, -1, 1061158912);
		func_544(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_540(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_540(iParam0, 35, 1);
			if (bParam8)
			{
				func_540(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_563(iParam0, 0);
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
		func_430(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
		}
		func_540(iParam0, 33, 1);
		func_544(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_133 = fParam4;
			func_182(&(((*Global_1360165)[iParam0 /*1157*/])->f_130), 1);
		}
		else
		{
			func_183(&(((*Global_1360165)[iParam0 /*1157*/])->f_130));
		}
		if (bParam9)
		{
			func_540(iParam0, 34, 1);
		}
	}
	if (iParam1 || bParam2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		{
			func_564(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], false);
	}
	if (func_537(iParam0, 45, 1))
	{
		func_430(iParam0, 45, 1);
	}
	func_565(iParam0, 16, 1);
	func_430(iParam0, 44, 1);
	((*Global_1360165)[iParam0 /*1157*/])->f_129 = 0;
	(Global_40.f_4942[iParam0 /*60*/])->f_4 = 0;
	if (bParam5)
	{
		if (func_344(func_138(iParam0), 0))
		{
			func_566(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

void func_189(var uParam0)
{
	func_567(uParam0, 0f);
}

void func_190(int iParam0)
{
	if (func_148() == 3 && iParam0 == 0)
	{
		OBJECT::_0x1BC47A9DEDC8DF5D(58833085, 0);
		OBJECT::_0x1BC47A9DEDC8DF5D(-629053815, 0);
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(58833085);
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(-629053815);
	}
	if (func_148() == 3 && iParam0 == 1)
	{
		OBJECT::_0x1BC47A9DEDC8DF5D(1163459288, 0);
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(1163459288);
	}
}

void func_191()
{
	Global_1357549->f_12[0 /*14*/] = 1;
	(Global_1357549->f_12[0 /*14*/])->f_1 = 970924250;
	(Global_1357549->f_12[0 /*14*/])->f_2 = { -148.3662f, -26.0562f, 95.8773f };
	(Global_1357549->f_12[0 /*14*/])->f_5 = 1935100224;
	(Global_1357549->f_12[0 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[1 /*14*/] = 1;
	(Global_1357549->f_12[1 /*14*/])->f_1 = 970924250;
	(Global_1357549->f_12[1 /*14*/])->f_2 = { -148.0154f, -13.4206f, 95.314f };
	(Global_1357549->f_12[1 /*14*/])->f_5 = joaat("p_lantern09x");
	(Global_1357549->f_12[1 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[2 /*14*/] = 1;
	(Global_1357549->f_12[2 /*14*/])->f_1 = 970924250;
	(Global_1357549->f_12[2 /*14*/])->f_2 = { -125.0946f, -21.7405f, 95.1253f };
	(Global_1357549->f_12[2 /*14*/])->f_5 = 1935100224;
	(Global_1357549->f_12[2 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[8 /*14*/] = 1;
	(Global_1357549->f_12[8 /*14*/])->f_1 = -1166561064;
	(Global_1357549->f_12[8 /*14*/])->f_2 = { -132.0545f, -31.1304f, 95.9688f };
	(Global_1357549->f_12[8 /*14*/])->f_5 = joaat("p_lantern09x");
	(Global_1357549->f_12[8 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[7 /*14*/] = 1;
	(Global_1357549->f_12[7 /*14*/])->f_1 = 172011504;
	(Global_1357549->f_12[7 /*14*/])->f_2 = { -132.1342f, -30.8928f, 95.6164f };
	(Global_1357549->f_12[7 /*14*/])->f_5 = joaat("p_lantern05x");
	(Global_1357549->f_12[7 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[6 /*14*/] = 1;
	(Global_1357549->f_12[6 /*14*/])->f_1 = -1365193577;
	(Global_1357549->f_12[6 /*14*/])->f_2 = { -132.1342f, -30.8928f, 95.6164f };
	(Global_1357549->f_12[6 /*14*/])->f_5 = joaat("p_lantern05x");
	(Global_1357549->f_12[6 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[4 /*14*/] = 1;
	(Global_1357549->f_12[4 /*14*/])->f_1 = 172011504;
	(Global_1357549->f_12[4 /*14*/])->f_2 = { -129.8749f, -30.5768f, 95.5843f };
	(Global_1357549->f_12[4 /*14*/])->f_5 = -843424619;
	(Global_1357549->f_12[4 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[5 /*14*/] = 1;
	(Global_1357549->f_12[5 /*14*/])->f_1 = -1166561064;
	(Global_1357549->f_12[5 /*14*/])->f_2 = { -129.8767f, -30.3077f, 95.6024f };
	(Global_1357549->f_12[5 /*14*/])->f_5 = -1753113092;
	(Global_1357549->f_12[5 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[9 /*14*/] = 1;
	(Global_1357549->f_12[9 /*14*/])->f_1 = -1166561064;
	(Global_1357549->f_12[9 /*14*/])->f_2 = { -131.4675f, -31.6383f, 97.1984f };
	(Global_1357549->f_12[9 /*14*/])->f_5 = 219115318;
	(Global_1357549->f_12[9 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[12 /*14*/] = 1;
	(Global_1357549->f_12[12 /*14*/])->f_1 = 163126540;
	(Global_1357549->f_12[12 /*14*/])->f_2 = { -116.1046f, -36.3356f, 95.1647f };
	(Global_1357549->f_12[12 /*14*/])->f_5 = -1200234060;
	(Global_1357549->f_12[12 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[13 /*14*/] = 2;
	(Global_1357549->f_12[13 /*14*/])->f_1 = 1802272784;
	(Global_1357549->f_12[13 /*14*/])->f_2 = { 690.5589f, -1253.308f, 43.9556f };
	(Global_1357549->f_12[13 /*14*/])->f_5 = 1935100224;
	(Global_1357549->f_12[13 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[14 /*14*/] = 2;
	(Global_1357549->f_12[14 /*14*/])->f_1 = -1010466481;
	(Global_1357549->f_12[14 /*14*/])->f_2 = { 691.5306f, -1258.313f, 44.2328f };
	(Global_1357549->f_12[14 /*14*/])->f_5 = -843424619;
	(Global_1357549->f_12[14 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[15 /*14*/] = 2;
	(Global_1357549->f_12[15 /*14*/])->f_1 = 1084869405;
	(Global_1357549->f_12[15 /*14*/])->f_2 = { 673.365f, -1269.473f, 44.0022f };
	(Global_1357549->f_12[15 /*14*/])->f_5 = -916457800;
	(Global_1357549->f_12[15 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[16 /*14*/] = 2;
	(Global_1357549->f_12[16 /*14*/])->f_1 = 1802272784;
	(Global_1357549->f_12[16 /*14*/])->f_2 = { 675.5692f, -1269.244f, 45.3696f };
	(Global_1357549->f_12[16 /*14*/])->f_5 = -916457800;
	(Global_1357549->f_12[16 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[17 /*14*/] = 2;
	(Global_1357549->f_12[17 /*14*/])->f_1 = -850189983;
	(Global_1357549->f_12[17 /*14*/])->f_2 = { 676.3393f, -1250.768f, 43.8081f };
	(Global_1357549->f_12[17 /*14*/])->f_5 = 1935100224;
	(Global_1357549->f_12[17 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[18 /*14*/] = 2;
	(Global_1357549->f_12[18 /*14*/])->f_1 = 2108368013;
	(Global_1357549->f_12[18 /*14*/])->f_2 = { 662.1107f, -1256.578f, 42.7845f };
	(Global_1357549->f_12[18 /*14*/])->f_5 = joaat("p_lantern05x");
	(Global_1357549->f_12[18 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[19 /*14*/] = 2;
	(Global_1357549->f_12[19 /*14*/])->f_1 = 2728487;
	(Global_1357549->f_12[19 /*14*/])->f_2 = { 661.0519f, -1259.052f, 43.1332f };
	(Global_1357549->f_12[19 /*14*/])->f_5 = -1200234060;
	(Global_1357549->f_12[19 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[20 /*14*/] = 2;
	(Global_1357549->f_12[20 /*14*/])->f_1 = 1128417383;
	(Global_1357549->f_12[20 /*14*/])->f_2 = { 672.6604f, -1241.364f, 43.4735f };
	(Global_1357549->f_12[20 /*14*/])->f_5 = -843424619;
	(Global_1357549->f_12[20 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[21 /*14*/] = 2;
	(Global_1357549->f_12[21 /*14*/])->f_1 = 1802272784;
	(Global_1357549->f_12[21 /*14*/])->f_2 = { 674.6741f, -1238.333f, 43.6628f };
	(Global_1357549->f_12[21 /*14*/])->f_5 = 1935100224;
	(Global_1357549->f_12[21 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[22 /*14*/] = 2;
	(Global_1357549->f_12[22 /*14*/])->f_1 = 1802272784;
	(Global_1357549->f_12[22 /*14*/])->f_2 = { 656.9509f, -1234.653f, 45.8639f };
	(Global_1357549->f_12[22 /*14*/])->f_5 = 1566690690;
	(Global_1357549->f_12[22 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[23 /*14*/] = 2;
	(Global_1357549->f_12[23 /*14*/])->f_1 = 2108368013;
	(Global_1357549->f_12[23 /*14*/])->f_2 = { 653.0373f, -1246.106f, 44.595f };
	(Global_1357549->f_12[23 /*14*/])->f_5 = 480074467;
	(Global_1357549->f_12[23 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[24 /*14*/] = 2;
	(Global_1357549->f_12[24 /*14*/])->f_1 = 2108368013;
	(Global_1357549->f_12[24 /*14*/])->f_2 = { 650.8378f, -1252.101f, 43.1323f };
	(Global_1357549->f_12[24 /*14*/])->f_5 = 436323736;
	(Global_1357549->f_12[24 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[25 /*14*/] = 2;
	(Global_1357549->f_12[25 /*14*/])->f_1 = 2108368013;
	(Global_1357549->f_12[25 /*14*/])->f_2 = { 650.781f, -1252.204f, 43.132f };
	(Global_1357549->f_12[25 /*14*/])->f_5 = 436323736;
	(Global_1357549->f_12[25 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[26 /*14*/] = 2;
	(Global_1357549->f_12[26 /*14*/])->f_1 = 1049842342;
	(Global_1357549->f_12[26 /*14*/])->f_2 = { 652.8052f, -1253.324f, 43.6418f };
	(Global_1357549->f_12[26 /*14*/])->f_5 = joaat("p_lantern09x");
	(Global_1357549->f_12[26 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[27 /*14*/] = 2;
	(Global_1357549->f_12[27 /*14*/])->f_1 = 1034009086;
	(Global_1357549->f_12[27 /*14*/])->f_2 = { 652.6848f, -1253.207f, 43.2953f };
	(Global_1357549->f_12[27 /*14*/])->f_5 = joaat("p_lantern05x");
	(Global_1357549->f_12[27 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[36 /*14*/] = 3;
	(Global_1357549->f_12[36 /*14*/])->f_1 = 414622870;
	(Global_1357549->f_12[36 /*14*/])->f_2 = { 1878.206f, -1864.335f, 43.5632f };
	(Global_1357549->f_12[36 /*14*/])->f_5 = joaat("p_lantern09x");
	(Global_1357549->f_12[36 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[37 /*14*/] = 3;
	(Global_1357549->f_12[37 /*14*/])->f_1 = 414622870;
	(Global_1357549->f_12[37 /*14*/])->f_2 = { 1872.988f, -1881.333f, 44.1306f };
	(Global_1357549->f_12[37 /*14*/])->f_5 = -916457800;
	(Global_1357549->f_12[37 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[38 /*14*/] = 3;
	(Global_1357549->f_12[38 /*14*/])->f_1 = 414622870;
	(Global_1357549->f_12[38 /*14*/])->f_2 = { 1883.117f, -1885.653f, 43.7719f };
	(Global_1357549->f_12[38 /*14*/])->f_5 = 480074467;
	(Global_1357549->f_12[38 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[39 /*14*/] = 3;
	(Global_1357549->f_12[39 /*14*/])->f_1 = 1079213989;
	(Global_1357549->f_12[39 /*14*/])->f_2 = { 1875.758f, -1881.731f, 42.8273f };
	(Global_1357549->f_12[39 /*14*/])->f_5 = -916457800;
	(Global_1357549->f_12[39 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[28 /*14*/] = 2;
	(Global_1357549->f_12[28 /*14*/])->f_1 = -160392273;
	(Global_1357549->f_12[28 /*14*/])->f_2 = { 652.6238f, -1253.39f, 43.6368f };
	(Global_1357549->f_12[28 /*14*/])->f_5 = joaat("p_lantern05x");
	(Global_1357549->f_12[28 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[29 /*14*/] = 2;
	(Global_1357549->f_12[29 /*14*/])->f_1 = 1049842342;
	(Global_1357549->f_12[29 /*14*/])->f_2 = { 653.7182f, -1253.372f, 44.8718f };
	(Global_1357549->f_12[29 /*14*/])->f_5 = 219115318;
	(Global_1357549->f_12[29 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[31 /*14*/] = 2;
	(Global_1357549->f_12[31 /*14*/])->f_1 = 1034009086;
	(Global_1357549->f_12[31 /*14*/])->f_2 = { 654.2183f, -1251.526f, 43.2551f };
	(Global_1357549->f_12[31 /*14*/])->f_5 = -843424619;
	(Global_1357549->f_12[31 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[34 /*14*/] = 3;
	(Global_1357549->f_12[34 /*14*/])->f_1 = 414622870;
	(Global_1357549->f_12[34 /*14*/])->f_2 = { 1889.558f, -1879.846f, 42.6053f };
	(Global_1357549->f_12[34 /*14*/])->f_5 = 1935100224;
	(Global_1357549->f_12[34 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[35 /*14*/] = 3;
	(Global_1357549->f_12[35 /*14*/])->f_1 = 414622870;
	(Global_1357549->f_12[35 /*14*/])->f_2 = { 1875.46f, -1860.001f, 42.5923f };
	(Global_1357549->f_12[35 /*14*/])->f_5 = joaat("p_lantern09x");
	(Global_1357549->f_12[35 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[32 /*14*/] = 3;
	(Global_1357549->f_12[32 /*14*/])->f_1 = 414622870;
	(Global_1357549->f_12[32 /*14*/])->f_2 = { 1868.881f, -1874.209f, 42.3693f };
	(Global_1357549->f_12[32 /*14*/])->f_5 = 1935100224;
	(Global_1357549->f_12[32 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[33 /*14*/] = 3;
	(Global_1357549->f_12[33 /*14*/])->f_1 = 964593693;
	(Global_1357549->f_12[33 /*14*/])->f_2 = { 1869.735f, -1870.672f, 42.18f };
	(Global_1357549->f_12[33 /*14*/])->f_5 = -843424619;
	(Global_1357549->f_12[33 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[30 /*14*/] = 2;
	(Global_1357549->f_12[30 /*14*/])->f_1 = 1049842342;
	(Global_1357549->f_12[30 /*14*/])->f_2 = { 654.0408f, -1251.324f, 43.2742f };
	(Global_1357549->f_12[30 /*14*/])->f_5 = -1753113092;
	(Global_1357549->f_12[30 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[10 /*14*/] = 1;
	(Global_1357549->f_12[10 /*14*/])->f_1 = -1611076340;
	(Global_1357549->f_12[10 /*14*/])->f_2 = { -118.1006f, -34.2279f, 94.8062f };
	(Global_1357549->f_12[10 /*14*/])->f_5 = joaat("p_lantern05x");
	(Global_1357549->f_12[10 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[11 /*14*/] = 1;
	(Global_1357549->f_12[11 /*14*/])->f_1 = 970924250;
	(Global_1357549->f_12[11 /*14*/])->f_2 = { -108.722f, -41.1198f, 97.1374f };
	(Global_1357549->f_12[11 /*14*/])->f_5 = -916457800;
	(Global_1357549->f_12[11 /*14*/])->f_6 = 0f;
	Global_1357549->f_12[3 /*14*/] = 1;
	(Global_1357549->f_12[3 /*14*/])->f_1 = -1920340119;
	(Global_1357549->f_12[3 /*14*/])->f_2 = { -121.9807f, -22.507f, 95.3463f };
	(Global_1357549->f_12[3 /*14*/])->f_5 = -843424619;
	(Global_1357549->f_12[3 /*14*/])->f_6 = 0f;
}

void func_192()
{
	int iVar0;

	iVar0 = Global_1357549->f_573;
	if (iVar0 >= 0 && iVar0 < 40)
	{
		if (func_148() == &Global_1357549->f_12[iVar0 /*14*/])
		{
			if ((Global_1357549->f_12[iVar0 /*14*/])->f_7 == 0)
			{
				if (STREAMING::_IS_IMAP_ACTIVE((Global_1357549->f_12[iVar0 /*14*/])->f_1) && func_568() == 0)
				{
					(Global_1357549->f_12[iVar0 /*14*/])->f_7 = ENTITY::_0x6F3068258A499E52((Global_1357549->f_12[iVar0 /*14*/])->f_5, (Global_1357549->f_12[iVar0 /*14*/])->f_2, 15);
				}
			}
			if ((Global_1357549->f_12[iVar0 /*14*/])->f_7 != 0)
			{
				if (!(Global_1357549->f_12[iVar0 /*14*/])->f_10)
				{
					(Global_1357549->f_12[iVar0 /*14*/])->f_10 = ENTITY::_0x1FF441D7954F8709((Global_1357549->f_12[iVar0 /*14*/])->f_7);
					if ((Global_1357549->f_12[iVar0 /*14*/])->f_10)
					{
						(Global_1357549->f_12[iVar0 /*14*/])->f_8 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA((Global_1357549->f_12[iVar0 /*14*/])->f_7));
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (Global_1357549->f_573 == iVar0 || (Global_1357549->f_12[iVar0 /*14*/])->f_9)
		{
			if ((Global_1357549->f_12[iVar0 /*14*/])->f_10)
			{
				func_569(iVar0);
			}
		}
		iVar0++;
	}
	Global_1357549->f_573++;
	if (Global_1357549->f_573 >= 40)
	{
		Global_1357549->f_573 = 0;
	}
}

bool func_193(int iParam0)
{
	return (Global_1359489->f_16 && iParam0) != 0;
}

void func_194(int iParam0)
{
	Global_1359489->f_16 = (Global_1359489->f_16 || iParam0);
}

int func_195()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1327590->f_19547)
	{
		if (&Global_1327590->f_19547[iVar0 /*5*/] != -1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_196(int iParam0)
{
	Global_1359489->f_16 = (Global_1359489->f_16 - (Global_1359489->f_16 && iParam0));
}

int func_197()
{
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (!CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		return 0;
	}
	if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
	{
		return 0;
	}
	if (func_141())
	{
		return 0;
	}
	if (func_38(1048576))
	{
		return 0;
	}
	return 1;
}

void func_198()
{
	char* sVar0;
	struct<16> Var1;

	sVar0 = func_570(func_148());
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return;
	}
	Var1 = { func_520(Local_18.f_3054, Local_18.f_3055, Global_1357549->f_1900) };
	func_572(sVar0, MISC::_CREATE_VAR_STRING(10, "CAMP_INFO_SUPPLIES", func_571(&Var1, 109029619)), 4000, 0, 0, 0, 0, 1);
}

void func_199()
{
	char* sVar0;
	int iVar1;
	char* sVar2;

	sVar0 = func_570(func_148());
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return;
	}
	iVar1 = func_156();
	sVar2 = MISC::_0x2B6846401D68E563((BUILTIN::TO_FLOAT(iVar1) * 0.01f), 2);
	func_572(sVar0, MISC::_CREATE_VAR_STRING(10, "CAMP_INFO_FUNDS", func_571(sVar2, 109029619)), 4000, 0, 0, 0, 0, 1);
}

void func_200()
{
	func_50(4096);
	func_50(8192);
}

void func_201(int iParam0)
{
	int iVar1;

	if (*iParam0 == -15)
	{
		*iParam0 = func_573();
	}
	if (func_574())
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(18, 27);
	}
	else
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(7, 21);
	}
	func_575(iParam0, 0, 0, iVar1, 0, 0, 0, 0);
}

bool func_202(int iParam0)
{
	return iParam0 != -15;
}

bool func_203(int iParam0)
{
	return &Global_1899515 > iParam0;
}

void func_204(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	if (!func_576(uParam0, uParam1))
	{
		return;
	}
	iVar1 = 0;
	bVar2 = false;
	while (!bVar2 && iVar1 < 20)
	{
		iVar1++;
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
		if (func_577(iVar0) && func_578((*uParam0)[iVar0 /*257*/], (*uParam1)[iVar0]))
		{
			bVar2 = true;
		}
	}
	if (iVar1 >= 20)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 50)
	{
		iVar1++;
		iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, ((*uParam0)[iVar0 /*257*/])->f_253);
		if (!MISC::IS_BIT_SET(uParam1[iVar0], iVar3))
		{
			MISC::SET_BIT((*uParam1)[iVar0], iVar3);
			return;
		}
	}
	if (iVar1 >= 50)
	{
		return;
	}
}

bool func_205(int iParam0)
{
	return func_579(Global_35, iParam0);
}

int func_206()
{
	if (func_56() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == joaat("player_zero"))
	{
		return 1;
	}
	return 0;
}

bool func_207(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_56() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iVar1]), iVar2);
}

bool func_208(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_580(iParam0, &iVar0, &iVar1);
	iVar2 = Global_1905944[iVar0];
	return MISC::IS_BIT_SET(iVar2, iVar1);
}

void func_209(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_580(iParam0, &iVar0, &iVar1);
	if (!func_581(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_582(iVar0, iVar1);
}

bool func_210()
{
	return func_12(1073741824);
}

bool func_211(int iParam0)
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

void func_212(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 && !func_211(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_583(*uParam0);
	if (((*Global_1945938)[iVar0 /*18*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && iParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_584(iVar0);
	*uParam0 = 0;
}

int func_213(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

char* func_214()
{
	return "INSPECT";
}

int func_215(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13)
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
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_585(iVar0, 2))
		{
			if (iParam2 == ((*Global_1945938)[iVar0 /*18*/])->f_10 && iParam1 == ((*Global_1945938)[iVar0 /*18*/])->f_4)
			{
				return iVar0;
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
		func_586(iVar1, iParam1, sParam0, 2, iParam3, iParam4, 0f, 0f, 0f, 0f, iParam2, 0, 1, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, 1065353216, 0, 0, 0, iParam12, bParam13);
		return iVar1;
	}
	return 0;
}

void func_216(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam3 && !func_211(iParam0))
	{
		return;
	}
	iVar0 = func_583(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam1, iParam2);
}

void func_217(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam3 && !func_211(iParam0))
	{
		return;
	}
	iVar0 = func_583(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_GROUP(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam1, iParam2);
}

bool func_218(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_211(iParam0))
	{
		return false;
	}
	iVar0 = func_583(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

bool func_219(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_211(iParam0))
	{
		return false;
	}
	iVar0 = func_583(iParam0);
	if (HUD::_0xCD072523791DDC1B(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

int func_220(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

void func_221(int iParam0)
{
	if (!func_211((Local_18.f_3057[iParam0 /*21*/])->f_1))
	{
		(Local_18.f_3057[iParam0 /*21*/])->f_1 = func_587(func_214(), -1384133541, 1710877787, 0);
		func_217((Local_18.f_3057[iParam0 /*21*/])->f_1, 799218720, 0, 1);
	}
}

int func_222(int iParam0)
{
	bool bVar0;
	var uVar1;
	int iVar2;
	int iVar3;

	bVar0 = func_588((Local_18.f_3057[iParam0 /*21*/])->f_1, 1, 1);
	uVar1 = func_588((Local_18.f_3057[iParam0 /*21*/])->f_1, 0, 1);
	if (bVar0 || uVar1)
	{
		func_212(&((Local_18.f_3057[iParam0 /*21*/])->f_1), 1, 1);
		iVar2 = iParam0;
		iVar3 = 0;
		while (iVar3 < 15)
		{
			if (bVar0)
			{
				iVar2++;
				if (iVar2 >= 15)
				{
					iVar2 = 0;
				}
			}
			else
			{
				iVar2 = (iVar2 - 1);
				if (iVar2 < 0)
				{
					iVar2 = 14;
				}
			}
			if ((Local_18.f_3057[iVar2 /*21*/])->f_19 == (Local_18.f_3057[iParam0 /*21*/])->f_19)
			{
				func_589(iParam0, iVar2);
				return 1;
			}
			iVar3++;
		}
	}
	return 0;
}

void func_223(int iParam0)
{
	if (!func_211((Local_18.f_3057[iParam0 /*21*/])->f_2))
	{
		(Local_18.f_3057[iParam0 /*21*/])->f_2 = func_591(func_590(), 359624985, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
		func_217((Local_18.f_3057[iParam0 /*21*/])->f_2, 799218720, 0, 1);
	}
}

bool func_224(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_211(iParam0))
	{
		return false;
	}
	iVar0 = func_583(iParam0);
	return HUD::_UIPROMPT_IS_JUST_PRESSED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_225(var uParam0)
{
	if (uParam0->f_3 != 0)
	{
		if (CAM::DOES_CAM_EXIST(uParam0->f_5))
		{
			if (CAM::IS_CAM_RENDERING(uParam0->f_5))
			{
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			}
			CAM::DESTROY_CAM(uParam0->f_5, false);
		}
		if (func_211(uParam0->f_2))
		{
			func_212(&(uParam0->f_2), 1, 1);
		}
		if (func_211(uParam0->f_1))
		{
			func_212(&(uParam0->f_1), 1, 1);
		}
		if (func_211(*uParam0))
		{
			func_212(uParam0, 1, 1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_35) && !ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			TASK::TASK_CLEAR_LOOK_AT(Global_35);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
		}
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(false);
		}
		uParam0->f_3 = 0;
	}
}

int func_226(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iParam0, true);
	}
	return 0;
}

int func_227(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if ((((iParam0 == func_377(0) || iParam0 == func_377(1)) || iParam0 == func_377(2)) || iParam0 == func_377(3)) || iParam0 == func_377(4))
	{
		return 0;
	}
	if (func_592() < 1)
	{
		return 0;
	}
	return 1;
}

bool func_228(int iParam0)
{
	return func_579(iParam0, 2);
}

int func_229(int iParam0)
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

void func_230()
{
	struct<7> Var0;

	Global_40.f_4283.f_567 = { Var0 };
	func_593();
	Global_1357549->f_1897 = 0;
}

void func_231(int iParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_1357549->f_1897 = iParam0;
	}
	Global_40.f_4283.f_567 = 1;
	Global_40.f_4283.f_567.f_1 = uParam1;
	Global_40.f_4283.f_567.f_2 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	Global_40.f_4283.f_567.f_5 = ENTITY::GET_ENTITY_HEADING(iParam0);
	Global_40.f_4283.f_567.f_6 = func_594(iParam0);
	func_595(iParam0);
}

int func_232(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;

	if (func_213(vParam0))
	{
		return 0;
	}
	if (iParam3 == 7)
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = ITEMSET::CREATE_ITEMSET(true);
	TASK::_0xB8E213D02F37947D(&(Global_1357549->f_3[iParam3]), iVar2, -1805387726, 1, 1, 0, 0);
	iVar3 = ITEMSET::GET_ITEMSET_SIZE(iVar2);
	iVar4 = 0;
	fVar5 = 9999.99f;
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		iVar0 = ITEMSET::GET_INDEXED_SCENARIO_POINT_INDEX_IN_ITEMSET(iVar4, iVar2);
		if (TASK::_0x0CC36D4156006509(iVar0))
		{
			vVar7 = { TASK::_0xA8452DD321607029(iVar0, 1) };
			if (!func_213(vVar7))
			{
				fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, vVar7, true);
				if (fVar6 < fVar5)
				{
					fVar5 = fVar6;
					iVar1 = iVar0;
				}
			}
		}
		iVar4++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar2);
	return iVar1;
}

float func_233(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

int func_234(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		return func_596(iParam0);
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

bool func_235()
{
	return &Global_1935436 == 2;
}

void func_236()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1327590->f_19547)
	{
		if (&Global_1327590->f_19547[iVar0 /*5*/] != -1)
		{
			if ((Global_1327590->f_19547[iVar0 /*5*/])->f_1 < 5)
			{
				func_597(iVar0);
			}
		}
		iVar0++;
	}
}

void func_237()
{
	if (!Global_1935436->f_18.f_1)
	{
		Global_1935436->f_18.f_1 = 1;
	}
}

int func_238(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 56;
		case 2:
			return 57;
		case 3:
			return 58;
		case 6:
			return 59;
		default:
			break;
	}
	return -1;
}

bool func_239(int iParam0, int iParam1)
{
	if (!func_598(iParam0))
	{
		return false;
	}
	return ((Global_1914319->f_3[iParam0 /*446*/])->f_7 && iParam1) != 0;
}

void func_240(int iParam0, int iParam1)
{
	func_599(&((Global_1914319->f_3[iParam0 /*446*/])->f_5), iParam1);
}

void func_241(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;

	if (iParam0 == 11)
	{
		return;
	}
	iVar0 = func_600(iParam3, iParam0);
	vVar1 = { func_601(iVar0) };
	vVar4 = { func_602(iVar0) };
	if (func_213(vVar1))
	{
		return;
	}
	if (!func_603(19, 16384))
	{
		if (!func_422(iParam1))
		{
			return;
		}
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam2))
	{
		return;
	}
	VOLUME::_0x748C5F51A18CB8F0(0);
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	func_255(iParam0);
	(Global_1914319->f_3[iParam0 /*446*/])->f_22 = -1;
	(Global_1914319->f_3[iParam0 /*446*/])->f_11 = { vVar1 };
	if (func_213(vVar4))
	{
		(Global_1914319->f_3[iParam0 /*446*/])->f_11 = { vVar1 };
	}
	else
	{
		(Global_1914319->f_15936[iVar0 /*6*/])->f_2 = { vVar4 };
	}
	(Global_1914319->f_3[iParam0 /*446*/])->f_10 = iVar0;
	(Global_1914319->f_3[iParam0 /*446*/])->f_25 = iParam2;
	(Global_1914319->f_3[iParam0 /*446*/])->f_26 = iParam4;
	(Global_1914319->f_3[iParam0 /*446*/])->f_28 = iParam5;
	(Global_1914319->f_3[iParam0 /*446*/])->f_29 = iParam9;
	(Global_1914319->f_3[iParam0 /*446*/])->f_9 = iParam3;
	(Global_1914319->f_3[iParam0 /*446*/])->f_409 = iParam8;
	if (func_604(iVar0) || func_605(iVar0, iParam0))
	{
		switch (iVar0)
		{
			case 29:
				iVar7 = 770563571;
				break;
			case 61:
				iVar7 = 922959422;
				break;
			case 73:
				iVar7 = 646741747;
				break;
			case 43:
				iVar7 = -1159824322;
				break;
			case 41:
				iVar7 = 327042733;
				break;
		}
		(Global_1914319->f_3[iParam0 /*446*/])->f_20 = func_606(5, (Global_1914319->f_3[iParam0 /*446*/])->f_10, 2, iVar7);
	}
	*(Global_1393529->f_114[iParam0 /*3*/]) = { 0f, 0f, 0f };
	Global_1393529->f_220[iParam0] = 0f;
	Global_1393529->f_569[iParam0] = 0;
	StringCopy(Global_1393529->f_288[iParam0 /*8*/], "", 64);
	if (fParam7 <= 0f)
	{
		fParam7 = func_607(iParam0);
	}
	(Global_1914319->f_3[iParam0 /*446*/])->f_19 = fParam7;
	(Global_1914319->f_3[iParam0 /*446*/])->f_8 = iParam6;
	if (!func_608(iParam0, iParam1))
	{
	}
	switch (iParam0)
	{
		case 1:
		case 2:
			func_609(iParam3);
			break;
		case 10:
			func_610(iParam3);
			break;
		case 18:
			func_611();
			break;
		case 9:
			func_612();
			break;
		case 22:
			func_613();
			break;
	}
	func_614((Global_1914319->f_3[iParam0 /*446*/])->f_10);
	func_615(iParam0, 16);
	func_616(iParam0, 4);
	VOLUME::_0x748C5F51A18CB8F0(1);
}

bool func_242(int iParam0)
{
	return func_617(iParam0, 32);
}

void func_243(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!bParam3)
	{
		if (func_618(iParam0))
		{
			return;
		}
	}
	if (bParam2)
	{
		if (!func_619(iParam0, 4))
		{
			func_620(iParam0, 4);
		}
	}
	else
	{
		func_621(iParam0, 4);
	}
	func_622(iParam0);
}

void func_244(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_623((*uParam0)[iVar0 /*257*/]);
		func_624((*uParam0)[iVar0 /*257*/]);
		func_625((*uParam0)[iVar0 /*257*/]);
		MISC::SET_BIT(&(((*uParam0)[iVar0 /*257*/])->f_254), 0);
		iVar0++;
	}
}

void func_245(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (!func_626(iParam0, iParam1))
	{
		if (uParam2->f_255 != 0)
		{
			func_623(uParam2);
			func_624(uParam2);
			func_625(uParam2);
		}
		return;
	}
	iVar0 = func_627(iParam1);
	if (*uParam2 != iParam1 || uParam2->f_1 != iVar0)
	{
		func_623(uParam2);
		func_624(uParam2);
		func_625(uParam2);
		*uParam2 = iParam1;
		uParam2->f_1 = iVar0;
		MISC::SET_BIT(&(uParam2->f_254), 0);
	}
	if (uParam2->f_256 != &Global_40.f_4283.f_415[iParam1])
	{
		MISC::SET_BIT(&(uParam2->f_254), 0);
		MISC::CLEAR_BIT(&(uParam2->f_254), 4);
		uParam2->f_256 = &Global_40.f_4283.f_415[iParam1];
	}
	if (MISC::IS_BIT_SET(uParam2->f_254, 0))
	{
		if (!MISC::IS_BIT_SET(uParam2->f_254, 1))
		{
			func_628(iParam1, uParam2);
		}
		else if (!MISC::IS_BIT_SET(uParam2->f_254, 2))
		{
			if (func_629(uParam2))
			{
				func_630(iParam0, iParam1, iVar0, uParam2);
			}
		}
		else if (!MISC::IS_BIT_SET(uParam2->f_254, 3))
		{
			func_631(uParam2, Global_40.f_4283.f_415[iParam1]);
		}
		else if (!MISC::IS_BIT_SET(uParam2->f_254, 4))
		{
			func_632(uParam2, Global_40.f_4283.f_415[iParam1], iParam3);
		}
		else
		{
			func_624(uParam2);
			func_625(uParam2);
			MISC::CLEAR_BIT(&(uParam2->f_254), 0);
		}
		return;
	}
	iVar1 = 0;
	while (iVar1 < uParam2->f_253)
	{
		if (!MISC::IS_BIT_SET(uParam2->f_255, iVar1) || MISC::IS_BIT_SET(&(Global_40.f_4283.f_415[iParam1]), iVar1))
		{
		}
		else
		{
			if (!ENTITY::DOES_ENTITY_EXIST(&(uParam2->f_9[iVar1 /*9*/])))
			{
				MISC::SET_BIT(Global_40.f_4283.f_415[iParam1], iVar1);
				MISC::CLEAR_BIT(&(uParam2->f_255), iVar1);
				func_250(5000);
			}
			if (OBJECT::HAS_OBJECT_BEEN_BROKEN(&(uParam2->f_9[iVar1 /*9*/])))
			{
				MISC::SET_BIT(Global_40.f_4283.f_415[iParam1], iVar1);
				MISC::CLEAR_BIT(&(uParam2->f_255), iVar1);
				func_250(5000);
			}
		}
		iVar1++;
	}
	uParam2->f_256 = &Global_40.f_4283.f_415[iParam1];
}

float func_246(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	if (*uParam0 == 4)
	{
		return 0f;
	}
	iVar2 = 0;
	while (iVar2 < uParam0->f_253)
	{
		if ((uParam0->f_9[iVar2 /*9*/])->f_8 != 0 && !func_633((uParam0->f_9[iVar2 /*9*/])->f_8))
		{
			iVar1++;
		}
		else if (!MISC::IS_BIT_SET(&(Global_40.f_4283.f_415[*uParam0]), iVar2))
		{
			iVar0++;
		}
		iVar2++;
	}
	fVar3 = (BUILTIN::TO_FLOAT(iVar0) / IntToFloat((uParam0->f_253 - iVar1)));
	return (fVar3 * 100f);
}

float func_247()
{
	int iVar0;

	iVar0 = func_634();
	return func_636((IntToFloat(iVar0) * func_635()), 100f);
}

float func_248(float fParam0, float fParam1)
{
	return ((fParam0 / 2f) + (fParam1 / 2f));
}

int func_249()
{
	if (func_344(Global_35, 0))
	{
		if (PED::_0x34D6AC1157C8226C(Global_35, 1855656219))
		{
			return 1;
		}
	}
	return 0;
}

void func_250(int iParam0)
{
	Global_1357549->f_1892 = (MISC::GET_GAME_TIMER() + iParam0);
}

bool func_251(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_211(iParam0))
	{
		return false;
	}
	iVar0 = func_583(iParam0);
	return HUD::_UIPROMPT_IS_ACTIVE(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

int func_252()
{
	if (HUD::IS_HUD_HIDDEN())
	{
		return 0;
	}
	if (CAM::IS_CINEMATIC_CAM_RENDERING())
	{
		return 0;
	}
	if (func_637())
	{
		return 0;
	}
	if (func_234(180573150, 1))
	{
		return 0;
	}
	if (func_234(-404697685, 1))
	{
		return 0;
	}
	return 1;
}

void func_253()
{
	HUD::_0x4CC5F2FC1332577F(1670279562);
}

void func_254()
{
	HUD::_0x8BC7C1F929D07BF3(1670279562);
}

void func_255(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_422((Global_1914319->f_3[iParam0 /*446*/])->f_21) && func_638((Global_1914319->f_3[iParam0 /*446*/])->f_21))
	{
		func_639((Global_1914319->f_3[iParam0 /*446*/])->f_21, 0, 1, 0, 0);
	}
	(Global_1914319->f_3[iParam0 /*446*/])->f_11 = { 0f, 0f, 0f };
	(Global_1914319->f_3[iParam0 /*446*/])->f_21 = -1;
	(Global_1914319->f_3[iParam0 /*446*/])->f_22 = -1;
	(Global_1914319->f_3[iParam0 /*446*/])->f_17 = 0;
	(Global_1914319->f_3[iParam0 /*446*/])->f_1 = 0;
	if (PED::_0x91A5F9CBEBB9D936((Global_1914319->f_3[iParam0 /*446*/])->f_34))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA((Global_1914319->f_3[iParam0 /*446*/])->f_34, false);
	}
	func_640((Global_1914319->f_3[iParam0 /*446*/])->f_10, 0);
	func_615(iParam0, 536870912);
	iVar1 = func_641(iParam0);
	if (iVar1 >= 15)
	{
		(Global_1914319->f_3[iParam0 /*446*/])->f_408 = 0;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			func_642(&((Global_1914319->f_3[iParam0 /*446*/])->f_317[iVar0 /*6*/]));
			(Global_1914319->f_3[iParam0 /*446*/])->f_317[iVar0 /*6*/] = 0;
			((Global_1914319->f_3[iParam0 /*446*/])->f_317[iVar0 /*6*/])->f_1 = { 0f, 0f, 0f };
			((Global_1914319->f_3[iParam0 /*446*/])->f_317[iVar0 /*6*/])->f_4 = 0f;
			((Global_1914319->f_3[iParam0 /*446*/])->f_317[iVar0 /*6*/])->f_5 = 0;
			iVar0++;
		}
		(Global_1914319->f_3[iParam0 /*446*/])->f_408 = 0;
	}
	if ((Global_1914319->f_3[iParam0 /*446*/])->f_440 != 0)
	{
		_NAMESPACE71::_0x2F901291EF177B02((Global_1914319->f_3[iParam0 /*446*/])->f_440, 0);
	}
	(Global_1914319->f_3[iParam0 /*446*/])->f_23 = 0;
	func_643(iParam0);
	(Global_1914319->f_3[iParam0 /*446*/])->f_10 = -1;
	(Global_1914319->f_3[iParam0 /*446*/])->f_9 = -1;
	func_644(iParam0, 0);
}

bool func_256(var uParam0, int iParam1)
{
	return (uParam0->f_62 && iParam1) != 0;
}

bool func_257()
{
	return func_134(&Global_1935630, 4096);
}

bool func_258(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_259(int iParam0)
{
	if (!func_387(iParam0))
	{
		return false;
	}
	return ((((*Global_1888801)[iParam0 /*35*/])->f_20 == 1 || ((*Global_1888801)[iParam0 /*35*/])->f_20 == 2) && !func_645(iParam0));
}

bool func_260(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 150)
	{
		return false;
	}
	return (((*Global_1888801)[iParam0 /*35*/])->f_21 && iParam1) != 0;
}

int func_261()
{
	return Global_1897952->f_41;
}

void func_262(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	var uVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	char* sVar6;
	float fVar7;
	char* sVar8;
	char* sVar9;
	char* sVar10;

	if (!func_646())
	{
		return;
	}
	sVar1 = func_647(iParam0, iParam1, iParam2, iParam4, iParam5, bParam3, &uVar0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		if (bParam3)
		{
			return;
		}
		sVar1 = "DISTRICT_GRIZZLIES";
	}
	if (!func_648(iParam4))
	{
		if (func_387(iParam0))
		{
			iParam4 = func_649(func_390(iParam0));
		}
		else
		{
			iParam4 = func_649(iParam1);
		}
	}
	if (func_648(iParam4))
	{
		iVar3 = func_650(iParam4);
	}
	if (uVar0 && bParam3)
	{
		sVar2 = func_652(func_651(iParam2));
	}
	else if ((func_653(iParam1, 2) || func_654(iParam4, 2)) && !Global_1894899->f_9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_MALE(PLAYER::PLAYER_PED_ID()))
			{
				sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_FULL_D_OR_A_M");
			}
			else
			{
				sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_FULL_D_OR_A_F");
			}
		}
		Global_1894899->f_9 = 1;
	}
	else if ((func_387(iParam0) && func_655(iParam0, 16777216)) && !Global_1894899->f_9)
	{
		sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_RESTRICTED_AREA");
		Global_1894899->f_9 = 1;
	}
	else if (iVar3 >= 1 && !Global_1894899->f_9)
	{
		sVar2 = MISC::_CREATE_VAR_STRING(2, "REGION_BOUNTY", iVar3);
		Global_1894899->f_9 = 1;
	}
	else
	{
		iVar4 = func_656(func_573());
		iVar5 = func_657(func_573());
		if (iVar5 < 10)
		{
			StringConCat(&sVar6, "0", 8);
		}
		StringIntConCat(&sVar6, iVar5, 8);
		fVar7 = MISC::_GET_TEMPERATURE_AT_COORDS(Global_36);
		if (!MISC::_SHOULD_USE_24_HOUR_CLOCK())
		{
			sVar9 = "AM";
			if (iVar4 >= 12)
			{
				sVar9 = "PM";
				if (iVar4 > 12)
				{
					iVar4 = (iVar4 - 12);
				}
			}
			else if (iVar4 == 0)
			{
				iVar4 = 12;
			}
			sVar8 = "TIME_AND_TEMP_C";
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				fVar7 = func_658(fVar7);
				sVar8 = "TIME_AND_TEMP_F";
			}
			IntToString(&sVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::_CREATE_VAR_STRING(674, sVar8, iVar4, func_571(&sVar6, 109029619), sVar9, func_571(&sVar10, 109029619));
		}
		else
		{
			sVar8 = "TIME_AND_TEMP_C_24";
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				fVar7 = func_658(fVar7);
				sVar8 = "TIME_AND_TEMP_F_24";
			}
			IntToString(&sVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::_CREATE_VAR_STRING(162, sVar8, iVar4, func_571(&sVar6, 109029619), func_571(&sVar10, 109029619));
		}
		Global_1894899->f_9 = 0;
	}
	Global_1934266->f_148 = func_572(sVar1, sVar2, 4000, 0, 0, 0, 0, 1);
}

void func_263(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_264(int iParam0, bool bParam1)
{
	if (Global_1572887->f_10 && func_56() == 0)
	{
		return;
	}
	if (func_659(128))
	{
		return;
	}
	if (!func_660(iParam0))
	{
		return;
	}
	if (func_655(iParam0, 32))
	{
		return;
	}
	func_429(iParam0, 32);
	func_661(Global_1935630, 8192);
	func_663(func_662(-1532769513, -36357794), 1);
	switch (func_390(iParam0))
	{
		case 0:
		case 2:
		case 11:
			func_663(func_662(-1532769513, 213519508), 1);
			break;
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			func_663(func_662(-1532769513, 242571679), 1);
			break;
		case 3:
		case 10:
			func_663(func_662(-1532769513, 1349449307), 1);
			break;
		case 4:
		case 9:
			func_663(func_662(-1532769513, 1140362070), 1);
			break;
		case 8:
			func_663(func_662(-1532769513, -172330899), 1);
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			func_663(func_662(-1532769513, -910218296), 1);
			break;
	}
	switch (iParam0)
	{
		case 0:
			MAP::_0xD8C7162AB2E2AF45(1822876181);
			break;
		case 1:
			MAP::_0xD8C7162AB2E2AF45(1092217275);
			break;
		case 2:
			MAP::_0xD8C7162AB2E2AF45(1855549007);
			MAP::_0xD8C7162AB2E2AF45(1542246539);
			break;
		case 6:
			MAP::_0xD8C7162AB2E2AF45(-237206861);
			break;
		case 7:
			MAP::_0xD8C7162AB2E2AF45(276890716);
			break;
		case 9:
			MAP::_0xD8C7162AB2E2AF45(-353968602);
			break;
		case 10:
			MAP::_0xD8C7162AB2E2AF45(-1354901649);
			MAP::_0xD8C7162AB2E2AF45(-1354901649);
			break;
		case 11:
			MAP::_0xD8C7162AB2E2AF45(-496244122);
			break;
		case 12:
			MAP::_0xD8C7162AB2E2AF45(-678676588);
			break;
		case 15:
			MAP::_0xD8C7162AB2E2AF45(-732274047);
			break;
		case 16:
			MAP::_0xD8C7162AB2E2AF45(-12216052);
			break;
		case 17:
			MAP::_0xD8C7162AB2E2AF45(-1456731677);
			break;
		case 21:
			MAP::_0xD8C7162AB2E2AF45(-2086563810);
			break;
		case 22:
			MAP::_0xD8C7162AB2E2AF45(221661572);
			break;
		case 24:
			MAP::_0xD8C7162AB2E2AF45(222265732);
			break;
		case 25:
			MAP::_0xD8C7162AB2E2AF45(-1484929764);
			break;
		case 26:
			MAP::_0xD8C7162AB2E2AF45(1104975149);
			break;
		case 27:
			MAP::_0xD8C7162AB2E2AF45(235472255);
			break;
		case 28:
			MAP::_0xD8C7162AB2E2AF45(-1337880478);
			break;
		case 29:
			MAP::_0xD8C7162AB2E2AF45(-1813267128);
			break;
		case 30:
			MAP::_0xD8C7162AB2E2AF45(-1941572412);
			break;
		case 31:
			MAP::_0xD8C7162AB2E2AF45(1006072805);
			break;
		case 121:
			MAP::_0xD8C7162AB2E2AF45(929640770);
			break;
		case 122:
			MAP::_0xD8C7162AB2E2AF45(1603579970);
			break;
		case 124:
			MAP::_0xD8C7162AB2E2AF45(-1332669948);
			break;
		case 123:
			MAP::_0xD8C7162AB2E2AF45(-1807212021);
			break;
		case 34:
			MAP::_0xD8C7162AB2E2AF45(-1347759053);
			break;
		case 36:
			MAP::_0xD8C7162AB2E2AF45(-918096609);
			break;
		case 114:
			MAP::_0xD8C7162AB2E2AF45(1728445882);
			break;
		case 37:
			MAP::_0xD8C7162AB2E2AF45(-507075109);
			break;
		case 40:
			MAP::_0xD8C7162AB2E2AF45(462373845);
			break;
		case 42:
			MAP::_0xD8C7162AB2E2AF45(-1727895786);
			break;
		case 43:
			MAP::_0xD8C7162AB2E2AF45(1826504111);
			break;
		case 44:
			MAP::_0xD8C7162AB2E2AF45(1714554710);
			break;
		case 45:
			MAP::_0xD8C7162AB2E2AF45(-91026072);
			break;
		case 54:
			MAP::_0xD8C7162AB2E2AF45(893855320);
			break;
		case 55:
			MAP::_0xD8C7162AB2E2AF45(326709244);
			break;
		case 49:
			MAP::_0xD8C7162AB2E2AF45(653799702);
			break;
		case 62:
			MAP::_0xD8C7162AB2E2AF45(415864829);
			break;
		case 64:
			MAP::_0xD8C7162AB2E2AF45(-1836330842);
			break;
		case 65:
			MAP::_0xD8C7162AB2E2AF45(648073069);
			break;
		case 66:
			MAP::_0xD8C7162AB2E2AF45(770074951);
			break;
		case 68:
			MAP::_0xD8C7162AB2E2AF45(-1276637644);
			break;
		case 71:
			MAP::_0xD8C7162AB2E2AF45(-431488293);
			break;
		case 72:
			MAP::_0xD8C7162AB2E2AF45(-1101810198);
			break;
		case 74:
			MAP::_0xD8C7162AB2E2AF45(-1344767066);
			break;
		case 77:
			MAP::_0xD8C7162AB2E2AF45(1472232821);
			break;
		case 79:
			MAP::_0xD8C7162AB2E2AF45(-1368676121);
			break;
		case 63:
			MAP::_0xD8C7162AB2E2AF45(-33677540);
			break;
		case 80:
			MAP::_0xD8C7162AB2E2AF45(1602161184);
			MAP::_0xD8C7162AB2E2AF45(-443207523);
			MAP::_0xD8C7162AB2E2AF45(-683043834);
			break;
		case 82:
			MAP::_0xD8C7162AB2E2AF45(147256338);
			MAP::_0xD8C7162AB2E2AF45(-134804027);
			MAP::_0xD8C7162AB2E2AF45(2027689141);
			break;
		case 83:
			MAP::_0xD8C7162AB2E2AF45(-161135375);
			break;
		case 85:
			MAP::_0xD8C7162AB2E2AF45(1625008147);
			break;
		case 86:
			MAP::_0xD8C7162AB2E2AF45(121074776);
			break;
		case 87:
			MAP::_0xD8C7162AB2E2AF45(1876184276);
			break;
		case 89:
			MAP::_0xD8C7162AB2E2AF45(458479023);
			break;
		case 91:
			MAP::_0xD8C7162AB2E2AF45(85299473);
			break;
		case 96:
			MAP::_0xD8C7162AB2E2AF45(-1150244084);
			break;
		case 98:
			MAP::_0xD8C7162AB2E2AF45(759314201);
			break;
		case 99:
			MAP::_0xD8C7162AB2E2AF45(2063457042);
			break;
		case 100:
			MAP::_0xD8C7162AB2E2AF45(1877776161);
			break;
		case 102:
			MAP::_0xD8C7162AB2E2AF45(2143316225);
			break;
		case 104:
			MAP::_0xD8C7162AB2E2AF45(-1623232489);
			MAP::_0xD8C7162AB2E2AF45(-1393093729);
			break;
		case 106:
			MAP::_0xD8C7162AB2E2AF45(1354284392);
			break;
		case 107:
			MAP::_0xD8C7162AB2E2AF45(-1430883057);
			break;
		case 109:
			MAP::_0xD8C7162AB2E2AF45(820139809);
			break;
		case 112:
			MAP::_0xD8C7162AB2E2AF45(1561007383);
			MAP::_0xD8C7162AB2E2AF45(-960425936);
			break;
	}
	if (bParam1)
	{
		func_429(iParam0, 64);
	}
}

bool func_265()
{
	return (Global_1894899 & 1 != 0 && func_135() != -1);
}

void func_266()
{
	if (!func_664(&Global_1327479))
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
	func_665(0);
	Global_1327479 = -1;
	Global_1310750->f_16075 = 0;
	Global_1310750->f_16076 = 0;
	Global_1310750->f_16103 = { 0f, 0f, 0f };
}

void func_267(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	if (func_666() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0 /*9*/];
		if (((func_664(iVar1) && !func_667(iVar1, iParam2)) && (!bParam3 || !func_668(iVar1))) && (!bParam4 || !func_669(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_670(iVar0);
			}
		}
		iVar0++;
	}
}

void func_268(bool bParam0)
{
	bool bVar0;

	bVar0 = Global_1894899 & 1 != false;
	if (bVar0 == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		Global_1894899 |= 1;
		STATS::_0xDA26263C07CCE9C2(1);
	}
	else
	{
		Global_1894899 = (&Global_1894899 - Global_1894899 & 1);
		STATS::_0xDA26263C07CCE9C2(0);
	}
}

int func_269()
{
	return Global_40.f_4283.f_1;
}

void func_270(bool bParam0)
{
	if (bParam0)
	{
		Global_1894899 |= 2;
	}
	else
	{
		Global_1894899 = (&Global_1894899 - Global_1894899 & 2);
	}
}

int func_271(var uParam0, int iParam1)
{
	if (func_671(((*uParam0)[iLocal_3513 /*8*/])->f_3))
	{
		if (!((*uParam0)[iLocal_3513 /*8*/])->f_2)
		{
			if (uParam0[iLocal_3513 /*8*/] == 0)
			{
				(*uParam0)[iLocal_3513 /*8*/] = ENTITY::_0x6F3068258A499E52(((*uParam0)[iLocal_3513 /*8*/])->f_6, ((*uParam0)[iLocal_3513 /*8*/])->f_3, iParam1);
				return 0;
			}
			else if (!ENTITY::_0x1FF441D7954F8709(uParam0[iLocal_3513 /*8*/]))
			{
				return 0;
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(((*uParam0)[iLocal_3513 /*8*/])->f_1))
			{
				((*uParam0)[iLocal_3513 /*8*/])->f_1 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(uParam0[iLocal_3513 /*8*/]));
				return 0;
			}
			else if (!((*uParam0)[iLocal_3513 /*8*/])->f_2)
			{
				((*uParam0)[iLocal_3513 /*8*/])->f_2 = 1;
				return 1;
			}
		}
		else
		{
			if (((*uParam0)[iLocal_3513 /*8*/])->f_7 > 5)
			{
				if (!ENTITY::_0x1FF441D7954F8709(uParam0[iLocal_3513 /*8*/]))
				{
					((*uParam0)[iLocal_3513 /*8*/])->f_2 = 0;
				}
				((*uParam0)[iLocal_3513 /*8*/])->f_7 = 0;
			}
			((*uParam0)[iLocal_3513 /*8*/])->f_7++;
		}
	}
	else
	{
		if (((*uParam0)[iLocal_3513 /*8*/])->f_2)
		{
			func_672(uParam0);
			((*uParam0)[iLocal_3513 /*8*/])->f_2 = 0;
		}
		if (uParam0[iLocal_3513 /*8*/] != 0)
		{
			(*uParam0)[iLocal_3513 /*8*/] = 0;
		}
	}
	iLocal_3513++;
	if (iLocal_3513 >= 3)
	{
		iLocal_3513 = 0;
	}
	return 0;
}

void func_272(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_568())
	{
		if (func_673() == 0)
		{
			return;
		}
		bParam0 = true;
	}
	if ((MISC::GET_FRAME_COUNT() % 10) == 0 || bParam0)
	{
		if (func_674() == 0 || bParam0)
		{
			if (func_675() && !func_676(((*Global_1835011)[4 /*74*/])->f_1))
			{
				func_677(0, 1, bParam0);
			}
			else
			{
				func_677(0, 0, bParam0);
			}
		}
	}
	if ((MISC::GET_FRAME_COUNT() % 10) == 0 || bParam0)
	{
		if ((func_678(1, 0) && func_679()) && func_680() == 0)
		{
			func_677(1, 1, bParam0);
		}
		else
		{
			func_677(1, 0, bParam0);
		}
	}
	iVar0 = 0;
	if (func_32() == 1)
	{
		iVar0 = 1;
	}
	iVar1 = func_148();
	if (bParam0)
	{
		if (!func_38(1048576))
		{
			Global_1357549->f_575 = 18;
			Global_1357549->f_575 = 0;
			while (Global_1357549->f_575 < 18)
			{
				func_681(iVar1, 0, 0);
				Global_1357549->f_575++;
			}
			Global_1357549->f_575 = 0;
		}
	}
	else if (func_38(1048576))
	{
		func_681(iVar1, bParam1, 1);
	}
	if (((func_568() && STREAMING::_0xCF45DF50C7775F2A() == 0) && func_506(0) == ((*Global_1835011)[4 /*74*/])->f_1 == 0) && func_682())
	{
		func_683();
		iVar2 = func_684();
		func_686(iVar1, &iVar2, iVar0, func_685(), bParam1);
		if (func_384(10, 0) > 1)
		{
			if (func_234(2057380366, 0))
			{
				func_687(2057380366, 1, 0);
			}
		}
		else if (!func_234(2057380366, 1))
		{
			func_395(2057380366, 1017034651, 1120952528, -1, 1, 1, 0);
		}
		if ((func_384(10, 0) >= 3 && iVar1 == 3) && iVar0)
		{
			func_688(6);
		}
		else
		{
			func_689(6);
		}
		if (func_690(iVar1, iVar0))
		{
			if (((((ANIMSCENE::_0x25557E324489393C(&(Global_1357549->f_1713[0])) && ANIMSCENE::_0x477122B8D05E7968(&(Global_1357549->f_1713[0]), 1, 0)) && ANIMSCENE::_0x25557E324489393C(&(Global_1357549->f_1713[1]))) && ANIMSCENE::_0x477122B8D05E7968(&(Global_1357549->f_1713[1]), 1, 0)) && ANIMSCENE::_0x25557E324489393C(&(Global_1357549->f_1713[2]))) && ANIMSCENE::_0x477122B8D05E7968(&(Global_1357549->f_1713[2]), 1, 0))
			{
				if (((func_691(16) != 1 && !ANIMSCENE::_0xCBFC7725DE6CE2E0(&(Global_1357549->f_1713[0]), 0)) && !ANIMSCENE::_0xCBFC7725DE6CE2E0(&(Global_1357549->f_1713[1]), 0)) && !ANIMSCENE::_0xCBFC7725DE6CE2E0(&(Global_1357549->f_1713[2]), 0))
				{
					if (func_691(16) == 2 && func_692(256) == 0)
					{
						if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
						{
							CAM::DO_SCREEN_FADE_OUT(1);
						}
						if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
						{
							CAM::DO_SCREEN_FADE_IN(7000);
						}
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(&(Global_1357549->f_1713[0]), "PBL_LEVEL_2", true);
						ANIMSCENE::START_ANIM_SCENE(&(Global_1357549->f_1713[0]));
						func_75(256);
					}
					else if (func_691(16) == 3 && func_692(512) == 0)
					{
						if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
						{
							CAM::DO_SCREEN_FADE_OUT(1);
						}
						if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
						{
							CAM::DO_SCREEN_FADE_IN(7000);
						}
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(&(Global_1357549->f_1713[1]), "PBL_LEVEL_3", true);
						ANIMSCENE::START_ANIM_SCENE(&(Global_1357549->f_1713[1]));
						func_75(512);
					}
					else if (func_691(16) == 4 && func_692(1024) == 0)
					{
						if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
						{
							CAM::DO_SCREEN_FADE_OUT(1);
						}
						if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
						{
							CAM::DO_SCREEN_FADE_IN(7000);
						}
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(&(Global_1357549->f_1713[2]), "PBL_LEVEL_4", true);
						ANIMSCENE::START_ANIM_SCENE(&(Global_1357549->f_1713[2]));
						func_75(1024);
					}
				}
			}
		}
	}
	if (func_506(0) == ((*Global_1835011)[4 /*74*/])->f_1)
	{
		if (STREAMING::_IS_IMAP_ACTIVE(825179479) == 0)
		{
			STREAMING::_REQUEST_IMAP(825179479);
		}
	}
}

int func_273(var uParam0, var uParam1, var uParam2, vector3 vParam3, int iParam6, int iParam7, int iParam8)
{
	int iVar0;

	if (func_693(Global_35, vParam3, 1) > 225f)
	{
		return 1;
	}
	if (*uParam0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			if (!DECORATOR::DECOR_EXIST_ON(*uParam1, "letter_item"))
			{
				*uParam0 = 0;
			}
			else
			{
				return 1;
			}
		}
	}
	if (!TASK::_0x841475AC96E794D1(*uParam2))
	{
		*uParam2 = TASK::_0xF533D68FF970D190(vParam3, iParam8, 1f, 0, 0);
		return 0;
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		iVar0 = TASK::_0x295514F198EFD0CA(*uParam2, "PrimaryItem");
		*uParam1 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar0);
		TXD::_0xDB1BD07FB464584D(iParam6, 0);
		return 0;
	}
	else
	{
		if (!TXD::_0xBE72591D1509FFE4(iParam6))
		{
			TXD::_0xDB1BD07FB464584D(iParam6, 0);
			return 0;
		}
		if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			if (!DECORATOR::DECOR_EXIST_ON(*uParam1, "letter_item"))
			{
				DECORATOR::DECOR_SET_INT(*uParam1, "letter_item", iParam7);
				return 0;
			}
			else
			{
				OBJECT::_0xE124889AE0521FCF(*uParam1, iParam6, 0, 0);
				TXD::_0x8232F37DF762ACB2(iParam6);
				*uParam0 = 1;
				return 1;
			}
		}
	}
	return 0;
}

int func_274(var uParam0, var uParam1, vector3 vParam2, int iParam5, int iParam6)
{
	if (func_693(Global_35, vParam2, 1) > 225f)
	{
		return 1;
	}
	if (*uParam0)
	{
		if (!DECORATOR::DECOR_EXIST_ON(*uParam1, "letter_item"))
		{
			*uParam0 = 0;
		}
		else
		{
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		TXD::_0xDB1BD07FB464584D(iParam5, 0);
		if (!TXD::_0xBE72591D1509FFE4(iParam5))
		{
			return 0;
		}
		if (!DECORATOR::DECOR_EXIST_ON(*uParam1, "letter_item"))
		{
			DECORATOR::DECOR_SET_INT(*uParam1, "letter_item", iParam6);
			return 0;
		}
		else
		{
			OBJECT::_0xE124889AE0521FCF(*uParam1, iParam5, 0, 0);
			TXD::_0x8232F37DF762ACB2(iParam5);
			*uParam0 = 1;
			return 1;
		}
	}
	return 0;
}

int func_275(var uParam0, var uParam1, var uParam2, vector3 vParam3, int iParam6, int iParam7)
{
	int iVar0;

	if (func_693(Global_35, vParam3, 1) > 900f)
	{
		return 1;
	}
	if (*uParam0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			if (!DECORATOR::DECOR_EXIST_ON(*uParam1, "letter_item"))
			{
				*uParam0 = 0;
			}
			else
			{
				return 1;
			}
		}
	}
	if (!TASK::_0x841475AC96E794D1(*uParam2))
	{
		*uParam2 = TASK::_0xF533D68FF970D190(vParam3, iParam7, 1f, 0, 0);
		return 0;
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		iVar0 = TASK::_0x295514F198EFD0CA(*uParam2, "PrimaryItem");
		*uParam1 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar0);
		return 0;
	}
	else if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		if (!DECORATOR::DECOR_EXIST_ON(*uParam1, "letter_item"))
		{
			DECORATOR::DECOR_SET_INT(*uParam1, "letter_item", iParam6);
		}
		else
		{
			*uParam0 = 1;
			return 1;
		}
	}
	return 0;
}

void func_276(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;

	iVar0 = joaat("p_kettle03x_noboil");
	iVar1 = joaat("p_kettle03x");
	if (Global_1357549->f_1625 > 1 && Global_1357549->f_1625 != 6)
	{
		if ((!TASK::_0x841475AC96E794D1(*uParam0) || !TASK::_0x841475AC96E794D1(*uParam1)) || !TASK::_0x841475AC96E794D1(*uParam2))
		{
			Global_1357549->f_1625 = 1;
		}
	}
	switch (Global_1357549->f_1625)
	{
		case 0:
			if (func_135() == func_269())
			{
				Global_1357549->f_1625 = 1;
			}
			break;
		case 1:
			if (func_694(uParam0, uParam1, uParam2))
			{
				if (!VOLUME::_0x92A78D0BEDB332A3(*uParam3) && TASK::_0x841475AC96E794D1(*uParam1))
				{
					*uParam3 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(TASK::_0xA8452DD321607029(*uParam1, 1), 0f, 0f, 0f, 1f, 1f, 1f, "StewBlocking");
				}
				Global_1357549->f_1625 = 2;
			}
			else
			{
				Global_1357549->f_1625 = 6;
			}
			break;
		case 2:
			if (MISC::GET_GAME_TIMER() > Global_1357549->f_1631 + 10000)
			{
				Global_1357549->f_1625 = 3;
			}
			break;
		case 3:
			if (func_494(0, 9))
			{
				Global_1357549->f_1629 = 0;
				Global_1357549->f_1630 = 0;
				Global_1357549->f_1627 = 0;
				return;
			}
			bVar3 = OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(TASK::_0xA8452DD321607029(*uParam0, 1), 2f, iVar0, false);
			bVar4 = OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(TASK::_0xA8452DD321607029(*uParam2, 1), 2f, iVar0, false);
			bVar5 = OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(TASK::_0xA8452DD321607029(*uParam1, 1), 2f, iVar1, false);
			if (func_494(9, 12) && !func_234(-558867971, 1))
			{
				Global_1357549->f_1629 = 1;
				Global_1357549->f_1630 = 0;
			}
			else
			{
				Global_1357549->f_1630 = 1;
				Global_1357549->f_1629 = 0;
			}
			if (Global_1357549->f_1629)
			{
				if (!bVar3 && !bVar4)
				{
					bVar2 = true;
				}
				if (bVar5)
				{
					bVar2 = true;
				}
				if (!bVar2)
				{
					Global_1357549->f_1627 = 1;
				}
			}
			Global_1357549->f_1628 = 0;
			if (Global_1357549->f_1630)
			{
				if (!bVar5)
				{
					bVar2 = true;
				}
				if (bVar3 || bVar4)
				{
					bVar2 = true;
				}
				if (!bVar2)
				{
					Global_1357549->f_1628 = 1;
					if (func_208(551))
					{
						func_695(551);
						func_696(551);
					}
					if (func_208(552))
					{
						func_695(552);
						func_696(552);
					}
				}
			}
			if ((bVar2 && CLOCK::GET_CLOCK_HOURS() != 12) && CLOCK::GET_CLOCK_HOURS() != 13)
			{
				Global_1357549->f_1625 = 5;
			}
			else
			{
				Global_1357549->f_1625 = 2;
				Global_1357549->f_1631 = MISC::GET_GAME_TIMER();
			}
			break;
		case 5:
			if ((TASK::_0x5BA659955369B0E2(*uParam0) == 0 && TASK::_0x5BA659955369B0E2(*uParam1) == 0) && TASK::_0x5BA659955369B0E2(*uParam2) == 0)
			{
				TASK::_0x4161648394262FDF(func_697(func_148()), 2f);
				TASK::_0x4161648394262FDF(func_698(func_148()), 3f);
				Global_1357549->f_1631 = MISC::GET_GAME_TIMER();
				Global_1357549->f_1625 = 2;
			}
			break;
		case 6:
			break;
	}
}

void func_277(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;

	if (!TASK::_0x841475AC96E794D1(*uParam0))
	{
		return;
	}
	bVar0 = OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(TASK::_0xA8452DD321607029(*uParam0, 1), 2f, joaat("p_kettle03x"), false);
	if (bVar0)
	{
		iVar1 = func_699(uParam0);
		switch (iVar1)
		{
			case 1:
				if (PED::_0x91A5F9CBEBB9D936(uParam1->f_1) && VOLUME::_0x92A78D0BEDB332A3(*uParam1))
				{
					PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam1->f_1, false);
				}
				if (!MAP::DOES_BLIP_EXIST(Global_1357549->f_1624))
				{
					Global_1357549->f_1624 = MAP::_0x554D9D53F696D002(168093330, func_700(func_148()));
					MAP::SET_BLIP_SPRITE(Global_1357549->f_1624, 935247438, true);
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1357549->f_1624, "BLIP_CAMP_EAT");
					MAP::SET_BLIP_FLASH_TIMER(Global_1357549->f_1624, 65, -1);
					func_701(Global_1357549->f_1624, func_269());
				}
				if (PED::_0x34D6AC1157C8226C(Global_35, 1068879634) && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
				{
					Global_40.f_4283.f_330 = func_573();
					func_575(&(Global_40.f_4283.f_330), 0, 0, 0, 1, 0, 0, 0);
					if (!PED::_0x91A5F9CBEBB9D936(uParam1->f_1))
					{
						uParam1->f_1 = PED::_0x4C39C95AE5DB1329(*uParam1, 0, 2);
					}
					func_320(552);
					if (!func_207(553))
					{
						func_209(553, 0);
					}
				}
				if (func_210())
				{
					if (!func_207(550))
					{
						func_209(550, 0);
					}
				}
				break;
			case 2:
				if (MAP::DOES_BLIP_EXIST(Global_1357549->f_1624))
				{
					MAP::REMOVE_BLIP(&(Global_1357549->f_1624));
				}
				if (!PED::_0x91A5F9CBEBB9D936(uParam1->f_1) && VOLUME::_0x92A78D0BEDB332A3(*uParam1))
				{
					uParam1->f_1 = PED::_0x4C39C95AE5DB1329(*uParam1, 0, 2);
				}
				if (!func_207(552) && !func_208(552))
				{
					if (func_702(Global_36, func_698(func_148())) <= 9f)
					{
						func_703(552, 128);
						func_209(552, 0);
					}
				}
				break;
			case 5:
			case 6:
				if (MAP::DOES_BLIP_EXIST(Global_1357549->f_1624))
				{
					MAP::REMOVE_BLIP(&(Global_1357549->f_1624));
				}
				if (!PED::_0x91A5F9CBEBB9D936(uParam1->f_1) && VOLUME::_0x92A78D0BEDB332A3(*uParam1))
				{
					uParam1->f_1 = PED::_0x4C39C95AE5DB1329(*uParam1, 0, 2);
				}
				break;
		}
	}
	else
	{
		if (MAP::DOES_BLIP_EXIST(Global_1357549->f_1624))
		{
			MAP::REMOVE_BLIP(&(Global_1357549->f_1624));
		}
		if (!func_207(551) && !func_208(551))
		{
			if (func_702(Global_36, func_698(func_148())) <= 9f)
			{
				func_209(551, 0);
			}
		}
	}
}

void func_278(var uParam0, var uParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;

	if ((MISC::GET_FRAME_COUNT() % 50) == 0)
	{
		if (func_704())
		{
			if (func_705(4) == 0)
			{
				func_706(4);
			}
		}
		else if (func_705(4))
		{
			func_707(4);
		}
	}
	if (func_705(4))
	{
		if (!VOLUME::_0x92A78D0BEDB332A3(*uParam0))
		{
			if (!func_166())
			{
				if (func_708(&vVar0, &vVar3, &vVar6))
				{
					*uParam0 = VOLUME::_0x0EB78C2B156635B1(-1612834106, vVar0, vVar3, vVar6);
					VOLUME::_0x5B23DFF8E0948BB2(*uParam0, 1);
				}
			}
		}
		else if (func_166())
		{
			VOLUME::_0x43F867EF5C463A53(*uParam0);
		}
	}
	else if (VOLUME::_0x92A78D0BEDB332A3(*uParam0))
	{
		VOLUME::_0x43F867EF5C463A53(*uParam0);
	}
	if ((MISC::GET_FRAME_COUNT() % 50) == 0)
	{
		if (func_709())
		{
			if (func_705(32) == 0)
			{
				func_706(32);
			}
		}
		else if (func_705(32))
		{
			func_707(32);
		}
	}
	if (func_705(32))
	{
		if (!VOLUME::_0x92A78D0BEDB332A3(*uParam1))
		{
			if (!func_166())
			{
				if (func_710(&vVar0, &vVar3, &vVar6))
				{
					*uParam1 = VOLUME::_0x0EB78C2B156635B1(-1612834106, vVar0, vVar3, vVar6);
					VOLUME::_0x5B23DFF8E0948BB2(*uParam1, 1);
				}
			}
		}
		else if (func_166())
		{
			VOLUME::_0x43F867EF5C463A53(*uParam1);
		}
	}
	else if (VOLUME::_0x92A78D0BEDB332A3(*uParam1))
	{
		VOLUME::_0x43F867EF5C463A53(*uParam1);
	}
}

void func_279(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	iVar1 = func_691(16);
	bVar2 = iVar1 == *iParam2;
	bVar3 = true;
	if (!bVar2)
	{
		*uParam1 = 0;
		iVar0 = 0;
		while (iVar0 < *uParam0)
		{
			if (_NAMESPACE48::_0x800DF3FC913355F3(((*uParam0)[iVar0 /*4*/])->f_1))
			{
				if (iVar1 >= ((*uParam0)[iVar0 /*4*/])->f_3)
				{
					if (bParam3)
					{
						if (func_711(uParam0[iVar0 /*4*/]))
						{
							iVar4++;
							iVar5 = 1;
						}
					}
					if ((bParam3 && iVar5) && iVar4 <= 2)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(((*uParam0)[iVar0 /*4*/])->f_2))
						{
							((*uParam0)[iVar0 /*4*/])->f_2 = _NAMESPACE48::_0x08FC896D2CB31FCC(((*uParam0)[iVar0 /*4*/])->f_1, 0);
							if (!ENTITY::DOES_ENTITY_EXIST(((*uParam0)[iVar0 /*4*/])->f_2))
							{
								bVar3 = false;
							}
						}
					}
					else
					{
						_NAMESPACE48::_0x4F81EAD1DE8FA19B(((*uParam0)[iVar0 /*4*/])->f_1);
					}
				}
				else
				{
					_NAMESPACE48::_0xFCC6DB8DBE709BC8(((*uParam0)[iVar0 /*4*/])->f_1);
				}
			}
			iVar0++;
		}
	}
	if (!*uParam1)
	{
		*uParam1 = 1;
		iVar0 = 0;
		while (iVar0 < *uParam0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(((*uParam0)[iVar0 /*4*/])->f_2))
			{
				if (!DECORATOR::DECOR_EXIST_ON(((*uParam0)[iVar0 /*4*/])->f_2, "CaravanLivestock"))
				{
					DECORATOR::DECOR_SET_BOOL(((*uParam0)[iVar0 /*4*/])->f_2, "CaravanLivestock", true);
				}
			}
			else if (iVar1 >= ((*uParam0)[iVar0 /*4*/])->f_3 && ((*uParam0)[iVar0 /*4*/])->f_1 != 0)
			{
				((*uParam0)[iVar0 /*4*/])->f_2 = _NAMESPACE48::_0x31C70A716CAE1FEE(((*uParam0)[iVar0 /*4*/])->f_1);
				*uParam1 = 0;
			}
			iVar0++;
		}
	}
	if (!bVar3)
	{
		return;
	}
	if (!bVar2)
	{
		*iParam2 = iVar1;
	}
}

void func_280()
{
}

void func_281(bool bParam0)
{
	int iVar0;

	if (bParam0)
	{
		iVar0 = func_179(0);
		if (!func_344(iVar0, 0))
		{
			if (func_12(1048576))
			{
				func_372();
			}
			return;
		}
	}
	if (func_234(-221398783, 1))
	{
		if (!func_234(180573150, 1))
		{
			if (func_12(1048576))
			{
				func_372();
			}
			return;
		}
	}
	if (func_12(1048576))
	{
		if (Global_1357549->f_1832 == -1)
		{
			if (!AUDIO::_0xE368E8422C860BA7(&(Global_1357549->f_1841), &(Global_1357549->f_1833), -2))
			{
			}
			else
			{
				Global_1357549->f_1832 = AUDIO::_0x0556C784FA056628(&(Global_1357549->f_1841), &(Global_1357549->f_1833));
			}
		}
		else
		{
			if (!func_175(&(Global_1357549->f_1845)))
			{
				func_182(&(Global_1357549->f_1845), 1);
				AUDIO::PLAY_STREAM_FROM_POSITION(func_493(func_148()), Global_1357549->f_1832);
			}
			if (func_176(&(Global_1357549->f_1845)) > IntToFloat(Global_1357549->f_1844) || !AUDIO::IS_STREAM_PLAYING(Global_1357549->f_1832))
			{
				func_372();
			}
		}
	}
}

void func_282()
{
	if (func_234(-666548248, 1))
	{
		if (!func_527(8))
		{
			if ((AUDIO::_0x6BFFB7C276866996(Global_35) == -2135639669 || AUDIO::_0x6BFFB7C276866996(Global_35) == -1847174162) || AUDIO::_0x6BFFB7C276866996(Global_35) == -1555693907)
			{
				func_712(-742361552);
				func_713(18, -2092618692);
				func_714(8);
			}
		}
	}
	if (func_234(2071287828, 1))
	{
		if (!func_527(16))
		{
			if ((((AUDIO::_0x6BFFB7C276866996(Global_35) == -96362774 || AUDIO::_0x6BFFB7C276866996(Global_35) == 1007297142) || AUDIO::_0x6BFFB7C276866996(Global_35) == -1899411469) || AUDIO::_0x6BFFB7C276866996(Global_35) == 1616112393) || AUDIO::_0x6BFFB7C276866996(Global_35) == 793577724)
			{
				func_712(249755892);
				func_713(18, -756280889);
				func_714(16);
			}
		}
	}
}

void func_283(var uParam0, var uParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	vector3 vVar5;
	int iVar8;
	bool bVar9;
	bool bVar10;

	if (uParam0->f_1581 != 15 && func_715())
	{
		uParam0->f_1581 = 15;
	}
	if (!func_716(uParam0))
	{
		if (!func_213(uParam0->f_1603) && !CAM::IS_SPHERE_VISIBLE(uParam0->f_1603, 2f))
		{
			func_408(uParam0->f_1603, 5f, 2);
			uParam0->f_1603 = { 0f, 0f, 0f };
		}
		if (!func_717(uParam0->f_1598, 262144) && func_718(14))
		{
			func_408(-107.8019f, -36.5988f, 94.9012f, 5f, 0);
			func_719(&(uParam0->f_1598), 262144);
		}
		if (uParam0->f_1581 > 1 && uParam0->f_1581 < 11)
		{
			if (((*uParam1)[uParam0->f_1645 /*8*/])->f_2 == 2)
			{
				func_720(uParam0, (*uParam1)[uParam0->f_1645 /*8*/]);
				if (!uParam0->f_1617)
				{
					TASK::SET_SCENARIO_GROUP_ENABLED("PLAYER_CAMP_CHORES_WOOD_CHOP", false);
				}
			}
			TASK::SET_SCENARIO_GROUP_ENABLED("PLAYER_CAMP_CHORES", false);
			uParam0->f_1581 = -1;
			func_721(uParam1);
			if (func_211(uParam0->f_1611))
			{
				func_722(func_583(uParam0->f_1611), 0);
			}
			if (func_38(4))
			{
				func_721(uParam1);
				func_212(&(uParam0->f_1610), 1, 1);
				uParam0->f_1581 = -1;
				func_723(uParam0, uParam1, 1, 1, 0);
			}
		}
	}
	else if (uParam0->f_1581 == -1)
	{
		func_724(&(uParam0->f_1598), 262144);
		func_720(uParam0, (*uParam1)[uParam0->f_1645 /*8*/]);
		TASK::SET_SCENARIO_GROUP_ENABLED("PLAYER_CAMP_CHORES_WOOD_CHOP", true);
		TASK::SET_SCENARIO_GROUP_ENABLED("PLAYER_CAMP_CHORES", true);
		func_725(uParam1);
		func_726(uParam0, uParam1);
	}
	if (func_38(4) && (uParam0->f_1581 != 11 || uParam0->f_1581 != -1))
	{
		if (PED::IS_PED_SWIMMING(Global_35) || PED::_0x59643424B68D52B5(Global_35))
		{
			if (func_211(uParam0->f_1610))
			{
				func_212(&(uParam0->f_1610), 1, 1);
			}
			if (func_211(uParam0->f_1610))
			{
				func_318(uParam0->f_1610, 1);
			}
			uParam0->f_1581 = 11;
			func_723(uParam0, uParam1, 0, 1, 1);
		}
	}
	if (func_344(Global_35, 0) && func_727(uParam0))
	{
		PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Global_35, 0, 1);
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Global_35, false);
	}
	if (TASK::_0x841475AC96E794D1(uParam0->f_1616) && !CAM::IS_SPHERE_VISIBLE(TASK::_0xA8452DD321607029(uParam0->f_1616, 1), 1.5f))
	{
		TASK::_0x81948DFE4F5A0283(uParam0->f_1616);
	}
	if (func_717(uParam0->f_1598, 32))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 21, true);
		PED::SET_PED_RESET_FLAG(Global_35, 288, true);
		PED::SET_PED_RESET_FLAG(Global_35, 168, true);
		PED::SET_PED_RESET_FLAG(Global_35, 202, true);
		PAD::_0x2804658EB7D8A50B(6, 855606917);
		if (uParam0->f_1590.f_1 == 14)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 316, true);
		}
	}
	if (!func_727(uParam0) && func_211(uParam0->f_1610))
	{
		func_212(&(uParam0->f_1610), 1, 1);
	}
	if ((uParam0->f_1625 && func_702(Global_36, func_728()) > 25f) && !CAM::IS_SPHERE_VISIBLE(func_728(), 1.5f))
	{
		vVar1 = { 0f, 0f, 0f };
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (!MISC::IS_BIT_SET(uParam0->f_1626, func_729(iVar0)))
			{
				vVar1 = { func_730(iVar0) };
			}
			else
			{
				iVar0++;
			}
		}
		if (!func_213(vVar1))
		{
			if (uParam0->f_1624 == 5)
			{
				uParam0->f_1619[iVar0] = OBJECT::CREATE_OBJECT(joaat("p_milkcan01x"), vVar1, true, true, false, false, true);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(&(uParam0->f_1619[iVar0]), Global_36602, 0, vVar1, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 1, 0);
			}
			else if (uParam0->f_1624 == 6)
			{
				uParam0->f_1619[iVar0] = OBJECT::CREATE_OBJECT(joaat("p_crate03x"), vVar1, true, true, false, false, true);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(&(uParam0->f_1619[iVar0]), Global_36602, 0, vVar1, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 1, 0);
			}
			MISC::SET_BIT(&(uParam0->f_1626), func_729(iVar0));
			TASK::_0x4161648394262FDF(func_728(), 1f);
			uParam0->f_1625 = 0;
		}
	}
	if (func_717(uParam0->f_1598, 524288))
	{
		vVar5 = { 0f, 0f, 0f };
		if (uParam0->f_1630.f_2 > 2)
		{
			iVar8 = 2;
		}
		else
		{
			iVar8 = uParam0->f_1630.f_2;
		}
		iVar4 = 0;
		while (iVar4 < iVar8)
		{
			vVar5 = { 0f, 0f, 0f };
			if (!MISC::IS_BIT_SET(uParam0->f_1626, func_729(iVar4)))
			{
				vVar5 = { func_730(iVar4) };
				if (!func_213(vVar5))
				{
					uParam0->f_1619[iVar4] = OBJECT::CREATE_OBJECT(joaat("p_milkcan01x"), vVar5, true, true, false, false, true);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(&(uParam0->f_1619[iVar4]), Global_36602, 0, vVar5, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 1, 0);
					MISC::SET_BIT(&(uParam0->f_1626), func_729(iVar4));
				}
			}
			iVar4++;
		}
		if (uParam0->f_1630.f_3 > 2)
		{
			iVar8 = 4;
		}
		else
		{
			iVar8 = (iVar8 + uParam0->f_1630.f_3);
		}
		iVar4 = 0;
		iVar4 = 0;
		while (iVar4 < iVar8)
		{
			vVar5 = { 0f, 0f, 0f };
			if (!MISC::IS_BIT_SET(uParam0->f_1626, func_729(iVar4)))
			{
				vVar5 = { func_730(iVar4) };
				if (!func_213(vVar5))
				{
					uParam0->f_1619[iVar4] = OBJECT::CREATE_OBJECT(joaat("p_crate03x"), vVar5, true, true, false, false, true);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(&(uParam0->f_1619[iVar4]), Global_36602, 0, vVar5, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 1, 0);
					MISC::SET_BIT(&(uParam0->f_1626), func_729(iVar4));
				}
			}
			iVar4++;
		}
		func_724(&(uParam0->f_1598), 524288);
	}
	switch (uParam0->f_1581)
	{
		case 0:
			func_731(uParam0, uParam1);
			break;
		case 1:
			if (func_732(uParam0))
			{
				func_733(uParam0, uParam1);
			}
			break;
		case 2:
			func_734(uParam0, uParam1);
			break;
		case 3:
			func_735(uParam0, uParam1);
			break;
		case 8:
			if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
			{
				GRAPHICS::_0x1C6306E5BC25C29C();
			}
			func_736(uParam0, uParam1);
			PED::SET_PED_RESET_FLAG(Global_35, 21, true);
			PED::SET_PED_RESET_FLAG(Global_35, 288, true);
			PED::SET_PED_RESET_FLAG(Global_35, 168, true);
			PED::SET_PED_RESET_FLAG(Global_35, 202, true);
			PAD::_0x2804658EB7D8A50B(6, 855606917);
			if (uParam0->f_1590.f_1 == 14)
			{
				PED::SET_PED_RESET_FLAG(Global_35, 316, true);
			}
			if (func_344(Global_35, 0))
			{
				PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Global_35, 0, 1);
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.35f);
			}
			bVar9 = PED::IS_PED_USING_ANY_SCENARIO(Global_35);
			if ((!func_211(uParam0->f_1610) && !bVar9) && uParam0->f_1582.f_2 != 5)
			{
				uParam0->f_1610 = func_737("EXIT_CHORE", 992265328, Global_35, 0, 0, 0, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
				func_722(func_583(uParam0->f_1610), 0);
			}
			if (bVar9 && func_251(uParam0->f_1610, 1))
			{
				func_722(func_583(uParam0->f_1610), 0);
				PAD::DISABLE_CONTROL_ACTION(0, 992265328, false);
			}
			else if (!bVar9 && !func_251(uParam0->f_1610, 1))
			{
				func_722(func_583(uParam0->f_1610), 1);
			}
			else if (!func_251(uParam0->f_1610, 1))
			{
				PAD::DISABLE_CONTROL_ACTION(0, 992265328, false);
			}
			if (func_148() == 8)
			{
				if (!func_207(297))
				{
					func_738(297);
				}
			}
			else if (!func_207(296))
			{
				func_738(296);
			}
			func_739(uParam0, uParam1);
			break;
		case 4:
			func_736(uParam0, uParam1);
			func_740(uParam0, uParam1);
			func_739(uParam0, uParam1);
			break;
		case 9:
			func_736(uParam0, uParam1);
			CAM::_0x71D71E08A7ED5BD7(1);
			if (func_741())
			{
				uParam0->f_1581 = 5;
			}
			break;
		case 5:
			if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
			{
				GRAPHICS::_0x1C6306E5BC25C29C();
			}
			PED::SET_PED_RESET_FLAG(Global_35, 21, true);
			PED::SET_PED_RESET_FLAG(Global_35, 168, true);
			PED::SET_PED_RESET_FLAG(Global_35, 288, true);
			PED::SET_PED_RESET_FLAG(Global_35, 202, true);
			if (uParam0->f_1590.f_1 == 14)
			{
				PED::SET_PED_RESET_FLAG(Global_35, 316, true);
			}
			PAD::_0x2804658EB7D8A50B(6, 855606917);
			bVar10 = PED::IS_PED_USING_ANY_SCENARIO(Global_35);
			if (uParam0->f_1582.f_1 != 7)
			{
				if ((!func_211(uParam0->f_1610) && !bVar10) && uParam0->f_1582.f_2 != 5)
				{
					uParam0->f_1610 = func_737("EXIT_CHORE", 992265328, Global_35, 0, 0, 0, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
					func_722(func_583(uParam0->f_1610), 0);
				}
				if (bVar9 && func_251(uParam0->f_1610, 1))
				{
					func_722(func_583(uParam0->f_1610), 0);
					PAD::DISABLE_CONTROL_ACTION(0, 992265328, false);
				}
				else if (!bVar10 && !func_251(uParam0->f_1610, 1))
				{
					func_722(func_583(uParam0->f_1610), 1);
				}
				else if (!func_251(uParam0->f_1610, 1))
				{
					PAD::DISABLE_CONTROL_ACTION(0, 992265328, false);
				}
			}
			func_736(uParam0, uParam1);
			if (func_344(Global_35, 0))
			{
				PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Global_35, 0, 1);
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.35f);
			}
			func_742(uParam0, uParam1);
			func_739(uParam0, uParam1);
			break;
		case 6:
			if (func_743(uParam0, uParam1))
			{
				uParam0->f_1581 = 8;
			}
			break;
		case 13:
			if (PED::IS_PED_USING_ANY_SCENARIO(Global_35) == 0)
			{
				uParam0->f_1581 = 14;
			}
			break;
		case 14:
			func_744(uParam0, uParam1, 2);
			break;
		case -1:
			break;
		case 10:
			func_745(uParam0, uParam1);
			break;
		case 11:
			func_723(uParam0, uParam1, 0, 1, 0);
			break;
		case 12:
			func_746(uParam0, uParam1);
			break;
		case 15:
			if (!func_715())
			{
				uParam0->f_1581 = 0;
			}
			break;
	}
}

void func_284()
{
	if (iLocal_3595 == 0)
	{
		iLocal_3595 = ENTITY::_0x6F3068258A499E52(-689630872, vLocal_3598, 11);
	}
	else if (!func_175(&uLocal_3592) || func_176(&uLocal_3592) > 1.1f)
	{
		func_189(&uLocal_3592);
		if (ENTITY::_0x1FF441D7954F8709(iLocal_3595))
		{
			iLocal_3596 = ENTITY::_0x4735E2A4BB83D9DA(iLocal_3595);
			iLocal_3597 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iLocal_3596);
		}
		if (iLocal_3595 != 0 && ENTITY::DOES_ENTITY_EXIST(iLocal_3596))
		{
			func_747(iLocal_3596, iLocal_3597, vLocal_3598);
		}
	}
}

void func_285()
{
	if (func_748(37, 0))
	{
		if (func_693(Global_35, 675.3f, -1217.2f, 45.4f, 1) < 9f)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 195, true);
		}
	}
}

bool func_286()
{
	return Global_1357549->f_1616;
}

void func_287(var uParam0)
{
	uParam0->f_1424 = 0;
}

void func_288(int iParam0, bool bParam1)
{
	Global_1357549->f_1616 = iParam0;
	if (bParam1)
	{
	}
}

void func_289()
{
	if (func_148() != 2 && func_148() != 1)
	{
		return;
	}
}

void func_290(var uParam0)
{
	bool bVar0;

	if ((MISC::GET_FRAME_COUNT() % 30) != 0)
	{
		return;
	}
	bVar0 = false;
	if (((((Global_1357549->f_1672 == -774242862 || Global_1357549->f_1672 == -2100684454) || Global_1357549->f_1672 == -1167047117) || Global_1357549->f_1672 == 396444962) || Global_1357549->f_1672 == -498064062) || Global_1357549->f_1672 == 513694516)
	{
		if (func_234(-666548248, 1) == 0)
		{
			bVar0 = true;
			func_395(-666548248, 1017034651, 1120952528, -1, 1, 1, 0);
		}
	}
	else
	{
		func_687(-666548248, 1, 0);
	}
	if (bVar0)
	{
		if (func_211(uParam0->f_1))
		{
			func_749(uParam0->f_1, "MONEY_LOANSHARK_ALL_DEBTS", 1);
		}
	}
	if (Global_1357549->f_1672 == 0)
	{
		if (func_750(-774242862, 0, 0) >= 1)
		{
			func_751(-774242862, joaat("p_moneystack01x"));
			return;
		}
		if (func_750(-2100684454, 0, 0) >= 1)
		{
			func_751(-2100684454, joaat("p_moneystack01x"));
			return;
		}
		if (func_750(-1167047117, 0, 0) >= 1)
		{
			func_751(-1167047117, joaat("p_moneystack01x"));
			return;
		}
		if (func_750(396444962, 0, 0) >= 1)
		{
			func_751(396444962, joaat("p_moneystack01x"));
			return;
		}
		if (func_750(-498064062, 0, 0) >= 1)
		{
			func_751(-498064062, joaat("p_moneystack01x"));
			return;
		}
		if (func_750(513694516, 0, 0) >= 1)
		{
			func_751(513694516, joaat("p_moneystack01x"));
			return;
		}
	}
}

void func_291(int* iParam0, var uParam1)
{
	vector3 vVar0;
	float fVar3;
	bool bVar4;

	vVar0 = { func_752(func_294()) };
	fVar3 = 5f;
	if (func_213(vVar0))
	{
		return;
	}
	if ((func_753(26) == 0 || func_166()) && !func_12(8))
	{
		func_754(iParam0);
		return;
	}
	if (func_234(-1461741225, 1))
	{
		func_754(iParam0);
		return;
	}
	if (func_32() != 1)
	{
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(*iParam0) && !func_249())
	{
		if (!func_12(8))
		{
			*iParam0 = MAP::_0x554D9D53F696D002(168093330, vVar0);
			MAP::_0x662D364ABF16DE2F(*iParam0, 1046501997);
			MAP::SET_BLIP_SPRITE(*iParam0, -1954662204, true);
			MAP::SET_BLIP_FLASH_TIMER(*iParam0, 66, -1);
			func_701(*iParam0, func_269());
		}
	}
	func_755(iParam0, uParam1);
	if (!TASK::_0x841475AC96E794D1(iParam0->f_863))
	{
		if ((CLOCK::GET_CLOCK_SECONDS() % 15) == 0)
		{
			iParam0->f_863 = TASK::_0xF533D68FF970D190(vVar0, 1855656219, fVar3, 1, 0);
		}
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_866))
	{
		STREAMING::REQUEST_MODEL(joaat("p_moneystack01x"), false);
		if (STREAMING::HAS_MODEL_LOADED(joaat("p_moneystack01x")))
		{
			iParam0->f_866 = TASK::_0x7467165EE97D3C68(iParam0->f_863);
			func_756(iParam0);
			if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_866))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iParam0->f_866, true);
			}
		}
		return;
	}
	if (PED::_0x9C54041BB66BCF9E(Global_35, iParam0->f_863) || func_12(67108864))
	{
		return;
	}
	if (iParam0->f_856 == 0)
	{
		if (func_12(8192) == 0)
		{
			if (!func_211(iParam0->f_1))
			{
				if (Global_1357549->f_1672 == 0)
				{
					iParam0->f_1 = func_759("GIVE_TITHE", -719620017, func_757(func_294()), func_758(), 3, 1, 0, 0, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
					func_217(iParam0->f_1, 736625733, 0, 1);
				}
				else if (func_760())
				{
					iParam0->f_1 = func_759("ITEM_TITHE", -719620017, func_757(func_294()), func_758(), 3, 1, 0, 0, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
					func_749(iParam0->f_1, "MONEY_LOANSHARK_ALL_DEBTS", 1);
					func_217(iParam0->f_1, 736625733, 0, 1);
				}
				else
				{
					iParam0->f_1 = func_759("ITEM_TITHE", -719620017, func_757(func_294()), func_758(), 3, 1, 0, 0, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
					func_762(iParam0->f_1, "ITEM_TITHE", func_761(Global_1357549->f_1672), 1);
					func_217(iParam0->f_1, 736625733, 0, 1);
				}
			}
		}
	}
	if (func_233(Global_35, func_757(func_294()), 1) <= (func_758() + 0.25f))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 1287709438, false);
		HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, 1f, 1, 1, 736625733, func_763(), 0);
	}
	if ((MISC::GET_FRAME_COUNT() % 30) == 0)
	{
		bVar4 = false;
		if ((((func_764() || func_765()) || PED::_0xA911EE21EDF69DAF(Global_35)) || func_487(Global_35)) || func_766())
		{
			bVar4 = true;
		}
		if (func_211(iParam0->f_1))
		{
			func_315(iParam0->f_1, bVar4);
		}
		if (func_211(iParam0->f_6))
		{
			func_315(iParam0->f_6, bVar4);
		}
	}
	if (iParam0->f_856)
	{
		if (func_211(iParam0->f_855) == 0)
		{
			iParam0->f_855 = func_737("BACK_TITHE", 814057702, Global_35, 1, 0, 0, 0, 0, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
		}
		else if (func_224(iParam0->f_855, 1))
		{
			AUDIO::PLAY_SOUND_FRONTEND("Back", "HUD_Camp_Status_Sounds", true, 0);
			func_212(&(iParam0->f_855), 1, 1);
			func_212(&(iParam0->f_883), 1, 1);
			func_212(&(iParam0->f_884), 1, 1);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
			iParam0->f_856 = 0;
		}
	}
	if (func_767(iParam0->f_1, 1) || iParam0->f_2 == 1)
	{
		iParam0->f_2 = 1;
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256, 0);
		if (func_211(iParam0->f_1))
		{
			func_768(iParam0->f_1, 0, 1);
		}
		if (func_211(iParam0->f_6))
		{
			func_768(iParam0->f_6, 0, 1);
		}
		if (func_175(&(iParam0->f_870)) == 0)
		{
			func_182(&(iParam0->f_870), 0);
		}
		if (((func_769(Global_35, 1, 0, 0) == joaat("weapon_unarmed") && func_769(Global_35, 0, 1, 0) == joaat("weapon_unarmed")) && func_770() == 0) && PED::_0xA911EE21EDF69DAF(Global_35) == 0)
		{
			if (PED::_0x9C54041BB66BCF9E(Global_35, iParam0->f_863) == 0)
			{
				if (func_176(&(iParam0->f_870)) > 0f)
				{
					func_147(8192);
					TASK::CLEAR_PED_SECONDARY_TASK(Global_35);
					AUDIO::PLAY_SOUND_FRONTEND("Give_To_Gang", "HUD_Donate_Sounds", true, 0);
					func_771(iParam0);
					iParam0->f_2 = 0;
					func_75(128);
					func_754(iParam0);
				}
			}
		}
		else
		{
			WEAPON::_0xFCCC886EDE3C63EC(Global_35, 2, 1);
			func_567(&(iParam0->f_870), -0.75f);
		}
	}
}

void func_292(int* iParam0)
{
	int iVar0;

	iVar0 = -1;
	if (func_213(func_772(func_294())) == 0)
	{
		if (func_233(Global_35, func_772(func_294()), 1) < 20f && !func_149())
		{
			if (iParam0->f_4 == 1)
			{
				iParam0->f_4 = 0;
				if (func_207(256) == 0)
				{
					func_209(256, 0);
				}
				else if (func_207(257) == 0)
				{
					func_209(257, 0);
				}
			}
		}
	}
	switch (func_148())
	{
		case 1:
			iVar0 = 56;
			break;
		case 2:
			iVar0 = 57;
			break;
		case 6:
			iVar0 = 59;
			break;
		case 3:
			iVar0 = 58;
			break;
	}
	if (iVar0 != -1)
	{
		if (func_12(33554432))
		{
			if (!func_234(-692943180, 1))
			{
				func_395(-692943180, 195285667, 1120952528, 2, 1, 1, 0);
			}
		}
		else if (func_234(-692943180, 1))
		{
			func_687(-692943180, 1, 0);
		}
		if (func_773(iParam0))
		{
			if (func_617(iVar0, 16384))
			{
				func_774(iVar0, 16384);
			}
		}
		else if (func_617(iVar0, 16384) == 0)
		{
			func_775(iVar0, 16384);
		}
	}
}

void func_293(int* iParam0, var uParam1)
{
	if (func_32() == 1)
	{
		func_776(&(iParam0->f_14), ((*uParam1)[2 /*257*/])->f_255);
		func_776(&(iParam0->f_15), ((*uParam1)[0 /*257*/])->f_255);
		func_776(&(iParam0->f_13), ((*uParam1)[1 /*257*/])->f_255);
	}
	else
	{
		func_777(iParam0);
	}
}

int func_294()
{
	switch (func_56())
	{
		case -1:
			return Global_40.f_4283;
	}
	return -1;
}

int func_295(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 6:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_296(int* iParam0)
{
	vector3 vVar0[24];

	if (Global_1357549->f_1671 == -1)
	{
		return;
	}
	switch (Global_1357549->f_1671)
	{
		case 0:
			StringCopy(&cVar0, "DONATE_M_SMALL", 24);
			break;
		case 1:
			StringCopy(&cVar0, "DONATE_M_MID", 24);
			break;
		case 2:
			StringCopy(&cVar0, "DONATE_M_BIG", 24);
			break;
		case 3:
			StringCopy(&cVar0, "DONATE_FOOD", 24);
			break;
		case 4:
			StringCopy(&cVar0, "DONATE_SUPP", 24);
			break;
		case 5:
			StringCopy(&cVar0, "DONATE_REMIND", 24);
			break;
		case 6:
			StringCopy(&cVar0, "DONATE_LOW", 24);
			break;
		case 7:
			StringCopy(&cVar0, "ASK_ABIGAIL", 24);
			func_778(&(iParam0->f_1325), func_179(13), "ABIGAIL", 0);
			break;
		case 8:
			StringCopy(&cVar0, "GIVE_ABIGAIL", 24);
			func_778(&(iParam0->f_1325), func_179(13), "ABIGAIL", 0);
			break;
		case 10:
			StringCopy(&cVar0, "ASK_JACK1", 24);
			func_778(&(iParam0->f_1325), func_179(14), "JACK", 0);
			break;
		case 11:
			StringCopy(&cVar0, "GIVE_JACK1", 24);
			func_778(&(iParam0->f_1325), func_179(14), "JACK", 0);
			break;
		case 13:
			StringCopy(&cVar0, "ASK_JACK2", 24);
			func_778(&(iParam0->f_1325), func_179(14), "JACK", 0);
			break;
		case 14:
			StringCopy(&cVar0, "GIVE_JACK2", 24);
			func_778(&(iParam0->f_1325), func_179(14), "JACK", 0);
			break;
		case 16:
			StringCopy(&cVar0, "ASK_CHARLES1", 24);
			func_778(&(iParam0->f_1325), func_179(7), "CHARLES_SMITH", 0);
			break;
		case 17:
			StringCopy(&cVar0, "GIVE_CHARLES1", 24);
			func_778(&(iParam0->f_1325), func_179(7), "CHARLES_SMITH", 0);
			break;
		case 18:
			StringCopy(&cVar0, "THANK_CHARLES1", 24);
			func_778(&(iParam0->f_1325), func_179(7), "CHARLES_SMITH", 0);
			break;
		case 19:
			StringCopy(&cVar0, "ASK_CHARLES2", 24);
			func_778(&(iParam0->f_1325), func_179(7), "CHARLES_SMITH", 0);
			break;
		case 20:
			StringCopy(&cVar0, "GIVE_CHARLES2", 24);
			func_778(&(iParam0->f_1325), func_179(7), "CHARLES_SMITH", 0);
			break;
		case 21:
			StringCopy(&cVar0, "THANK_CHARLES2", 24);
			func_778(&(iParam0->f_1325), func_179(7), "CHARLES_SMITH", 0);
			break;
		case 22:
			StringCopy(&cVar0, "ASK_CHARLES3", 24);
			func_778(&(iParam0->f_1325), func_179(7), "CHARLES_SMITH", 0);
			break;
		case 23:
			StringCopy(&cVar0, "GIVE_CHARLES3", 24);
			func_778(&(iParam0->f_1325), func_179(7), "CHARLES_SMITH", 0);
			break;
		case 24:
			StringCopy(&cVar0, "THANK_CHARLES3", 24);
			func_778(&(iParam0->f_1325), func_179(7), "CHARLES_SMITH", 0);
			break;
		case 25:
			StringCopy(&cVar0, "ASK_CHARLES4", 24);
			func_778(&(iParam0->f_1325), func_179(7), "CHARLES_SMITH", 0);
			break;
		case 26:
			StringCopy(&cVar0, "GIVE_CHARLES4", 24);
			func_778(&(iParam0->f_1325), func_179(7), "CHARLES_SMITH", 0);
			break;
		case 27:
			StringCopy(&cVar0, "THANK_CHARLES4", 24);
			func_778(&(iParam0->f_1325), func_179(7), "CHARLES_SMITH", 0);
			break;
		case 28:
			StringCopy(&cVar0, "ASK_SUSAN1", 24);
			func_778(&(iParam0->f_1325), func_179(19), "SUSAN", 0);
			break;
		case 29:
			StringCopy(&cVar0, "GIVE_SUSAN1", 24);
			func_778(&(iParam0->f_1325), func_179(19), "SUSAN", 0);
			break;
		case 30:
			StringCopy(&cVar0, "THANK_SUSAN1", 24);
			func_778(&(iParam0->f_1325), func_179(19), "SUSAN", 0);
			break;
		case 31:
			StringCopy(&cVar0, "ASK_SUSAN2", 24);
			func_778(&(iParam0->f_1325), func_179(19), "SUSAN", 0);
			break;
		case 32:
			StringCopy(&cVar0, "GIVE_SUSAN2", 24);
			func_778(&(iParam0->f_1325), func_179(19), "SUSAN", 0);
			break;
		case 33:
			StringCopy(&cVar0, "THANK_SUSAN2", 24);
			func_778(&(iParam0->f_1325), func_179(19), "SUSAN", 0);
			break;
		case 34:
			StringCopy(&cVar0, "ASK_SWANSON", 24);
			func_778(&(iParam0->f_1325), func_179(21), "SWANSON", 0);
			break;
		case 35:
			StringCopy(&cVar0, "GIVE_SWANSON", 24);
			func_778(&(iParam0->f_1325), func_179(21), "SWANSON", 0);
			break;
		case 36:
			StringCopy(&cVar0, "THANK_SWANSON", 24);
			func_778(&(iParam0->f_1325), func_179(21), "SWANSON", 0);
			break;
		case 37:
			StringCopy(&cVar0, "ASK_PEARSON1", 24);
			func_778(&(iParam0->f_1325), func_179(17), "PEARSON", 0);
			break;
		case 38:
			StringCopy(&cVar0, "GIVE_PEARSON1", 24);
			func_778(&(iParam0->f_1325), func_179(17), "PEARSON", 0);
			break;
		case 39:
			StringCopy(&cVar0, "THANK_PEARSON1", 24);
			func_778(&(iParam0->f_1325), func_179(17), "PEARSON", 0);
			break;
		case 40:
			StringCopy(&cVar0, "ASK_PEARSON2", 24);
			func_778(&(iParam0->f_1325), func_179(17), "PEARSON", 0);
			break;
		case 41:
			StringCopy(&cVar0, "GIVE_PEARSON2", 24);
			func_778(&(iParam0->f_1325), func_179(17), "PEARSON", 0);
			break;
		case 42:
			StringCopy(&cVar0, "THANK_PEARSON2", 24);
			func_778(&(iParam0->f_1325), func_179(17), "PEARSON", 0);
			break;
		case 43:
			StringCopy(&cVar0, "ASK_JAVIER", 24);
			func_778(&(iParam0->f_1325), func_179(2), "JAVIER", 0);
			break;
		case 44:
			StringCopy(&cVar0, "GIVE_JAVIER", 24);
			func_778(&(iParam0->f_1325), func_179(2), "JAVIER", 0);
			break;
		case 45:
			StringCopy(&cVar0, "THANK_JAVIER", 24);
			func_778(&(iParam0->f_1325), func_179(2), "JAVIER", 0);
			break;
		case 46:
			StringCopy(&cVar0, "ASK_BILL", 24);
			func_778(&(iParam0->f_1325), func_179(3), "BILL", 0);
			break;
		case 47:
			StringCopy(&cVar0, "GIVE_BILL", 24);
			func_778(&(iParam0->f_1325), func_179(3), "BILL", 0);
			break;
		case 48:
			StringCopy(&cVar0, "THANK_BILL", 24);
			func_778(&(iParam0->f_1325), func_179(3), "BILL", 0);
			break;
		case 49:
			StringCopy(&cVar0, "ASK_SEAN", 24);
			func_778(&(iParam0->f_1325), func_179(8), "SEAN", 0);
			break;
		case 50:
			StringCopy(&cVar0, "GIVE_SEAN", 24);
			func_778(&(iParam0->f_1325), func_179(8), "SEAN", 0);
			break;
		case 51:
			StringCopy(&cVar0, "THANK_SEAN", 24);
			func_778(&(iParam0->f_1325), func_179(8), "SEAN", 0);
			break;
		case 82:
			StringCopy(&cVar0, "ASK_KIERAN", 24);
			func_778(&(iParam0->f_1325), func_179(10), "KIERAN", 0);
			break;
		case 83:
			StringCopy(&cVar0, "GIVE_KIERAN", 24);
			func_778(&(iParam0->f_1325), func_179(10), "KIERAN", 0);
			break;
		case 84:
			StringCopy(&cVar0, "THANK_KIERAN", 24);
			func_778(&(iParam0->f_1325), func_179(10), "KIERAN", 0);
			break;
		case 88:
			StringCopy(&cVar0, "ASK_TILLY", 24);
			func_778(&(iParam0->f_1325), func_179(22), "TILLY", 0);
			break;
		case 89:
			StringCopy(&cVar0, "GIVE_TILLY", 24);
			func_778(&(iParam0->f_1325), func_179(22), "TILLY", 0);
			break;
		case 90:
			StringCopy(&cVar0, "THANK_TILLY", 24);
			func_778(&(iParam0->f_1325), func_179(22), "TILLY", 0);
			break;
		case 52:
			StringCopy(&cVar0, "ASK_LENNY1", 24);
			func_778(&(iParam0->f_1325), func_179(9), "LENNY", 0);
			break;
		case 53:
			StringCopy(&cVar0, "GIVE_LENNY1", 24);
			func_778(&(iParam0->f_1325), func_179(9), "LENNY", 0);
			break;
		case 54:
			StringCopy(&cVar0, "THANK_LENNY1", 24);
			func_778(&(iParam0->f_1325), func_179(9), "LENNY", 0);
			break;
		case 55:
			StringCopy(&cVar0, "ASK_LENNY2", 24);
			func_778(&(iParam0->f_1325), func_179(9), "LENNY", 0);
			break;
		case 56:
			StringCopy(&cVar0, "GIVE_LENNY2", 24);
			func_778(&(iParam0->f_1325), func_179(9), "LENNY", 0);
			break;
		case 57:
			StringCopy(&cVar0, "THANK_LENNY2", 24);
			func_778(&(iParam0->f_1325), func_179(9), "LENNY", 0);
			break;
		case 58:
			StringCopy(&cVar0, "ASK_MARY1", 24);
			func_778(&(iParam0->f_1325), func_179(15), "MARYBETH", 0);
			break;
		case 59:
			StringCopy(&cVar0, "GIVE_MARY1", 24);
			func_778(&(iParam0->f_1325), func_179(15), "MARYBETH", 0);
			break;
		case 60:
			StringCopy(&cVar0, "THANK_MARY1", 24);
			func_778(&(iParam0->f_1325), func_179(15), "MARYBETH", 0);
			break;
		case 61:
			StringCopy(&cVar0, "ASK_MARY2", 24);
			func_778(&(iParam0->f_1325), func_179(15), "MARYBETH", 0);
			break;
		case 62:
			StringCopy(&cVar0, "GIVE_MARY2", 24);
			func_778(&(iParam0->f_1325), func_179(15), "MARYBETH", 0);
			break;
		case 63:
			StringCopy(&cVar0, "THANK_MARY2", 24);
			func_778(&(iParam0->f_1325), func_179(15), "MARYBETH", 0);
			break;
		case 91:
			StringCopy(&cVar0, "ASK_UNCLE", 24);
			func_778(&(iParam0->f_1325), func_179(4), "UNCLE", 0);
			break;
		case 92:
			StringCopy(&cVar0, "GIVE_UNCLE", 24);
			func_778(&(iParam0->f_1325), func_179(4), "UNCLE", 0);
			break;
		case 93:
			StringCopy(&cVar0, "THANK_UNCLE", 24);
			func_778(&(iParam0->f_1325), func_179(4), "UNCLE", 0);
			break;
		case 94:
			StringCopy(&cVar0, "ASK_TRELW", 24);
			func_778(&(iParam0->f_1325), func_179(23), "TRELAWNY", 0);
			break;
		case 95:
			StringCopy(&cVar0, "GIVE_TRELW", 24);
			func_778(&(iParam0->f_1325), func_179(23), "TRELAWNY", 0);
			break;
		case 96:
			StringCopy(&cVar0, "THANK_TRELW", 24);
			func_778(&(iParam0->f_1325), func_179(23), "TRELAWNY", 0);
			break;
		case 64:
			StringCopy(&cVar0, "ASK_HOSEA1", 24);
			func_778(&(iParam0->f_1325), func_179(5), "HOSEA", 0);
			break;
		case 65:
			StringCopy(&cVar0, "GIVE_HOSEA1", 24);
			func_778(&(iParam0->f_1325), func_179(5), "HOSEA", 0);
			break;
		case 66:
			StringCopy(&cVar0, "THANK_HOSEA1", 24);
			func_778(&(iParam0->f_1325), func_179(5), "HOSEA", 0);
			break;
		case 67:
			StringCopy(&cVar0, "ASK_HOSEA2", 24);
			func_778(&(iParam0->f_1325), func_179(5), "HOSEA", 0);
			break;
		case 68:
			StringCopy(&cVar0, "GIVE_HOSEA2", 24);
			func_778(&(iParam0->f_1325), func_179(5), "HOSEA", 0);
			break;
		case 69:
			StringCopy(&cVar0, "THANK_HOSEA2", 24);
			func_778(&(iParam0->f_1325), func_179(5), "HOSEA", 0);
			break;
		case 70:
			StringCopy(&cVar0, "ASK_KAREN", 24);
			func_778(&(iParam0->f_1325), func_179(20), "KAREN", 0);
			break;
		case 71:
			StringCopy(&cVar0, "GIVE_KAREN", 24);
			func_778(&(iParam0->f_1325), func_179(20), "KAREN", 0);
			break;
		case 72:
			StringCopy(&cVar0, "THANK_KAREN", 24);
			func_778(&(iParam0->f_1325), func_179(20), "KAREN", 0);
			break;
		case 73:
			StringCopy(&cVar0, "ASK_DUTCH", 24);
			func_778(&(iParam0->f_1325), func_179(0), "DUTCH", 0);
			break;
		case 74:
			StringCopy(&cVar0, "GIVE_DUTCH", 24);
			func_778(&(iParam0->f_1325), func_179(0), "DUTCH", 0);
			break;
		case 75:
			StringCopy(&cVar0, "THANK_DUTCH", 24);
			func_778(&(iParam0->f_1325), func_179(0), "DUTCH", 0);
			break;
		case 76:
			StringCopy(&cVar0, "ASK_MICAH", 24);
			func_778(&(iParam0->f_1325), func_179(6), "MICAH_BELL", 0);
			break;
		case 77:
			StringCopy(&cVar0, "GIVE_MICAH", 24);
			func_778(&(iParam0->f_1325), func_179(6), "MICAH_BELL", 0);
			break;
		case 78:
			StringCopy(&cVar0, "THANK_MICAH", 24);
			func_778(&(iParam0->f_1325), func_179(6), "MICAH_BELL", 0);
			break;
		case 79:
			StringCopy(&cVar0, "ASK_SADIE", 24);
			func_778(&(iParam0->f_1325), func_179(11), "SADIE_ADLER", 0);
			break;
		case 80:
			StringCopy(&cVar0, "GIVE_SADIE", 24);
			func_778(&(iParam0->f_1325), func_179(11), "SADIE_ADLER", 0);
			break;
		case 81:
			StringCopy(&cVar0, "THANK_SADIE", 24);
			func_778(&(iParam0->f_1325), func_179(11), "SADIE_ADLER", 0);
			break;
		case 85:
			StringCopy(&cVar0, "ASK_MOLLY", 24);
			func_778(&(iParam0->f_1325), func_179(16), "MOLLY", 0);
			break;
		case 86:
			StringCopy(&cVar0, "GIVE_MOLLY", 24);
			func_778(&(iParam0->f_1325), func_179(16), "MOLLY", 0);
			break;
		case 87:
			StringCopy(&cVar0, "THANK_MOLLY", 24);
			func_778(&(iParam0->f_1325), func_179(16), "MOLLY", 0);
			break;
		case 97:
			StringCopy(&cVar0, "CPGEN_DTBOX1", 24);
			func_778(&(iParam0->f_1325), func_179(0), "DUTCH", 0);
			func_779(&(iParam0->f_1325), cVar0, 0, -1, 0, 0);
			Global_1357549->f_1671 = -1;
			return;
	}
	Global_1357549->f_1671 = -1;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		func_779(&(iParam0->f_1325), cVar0, 0, -1, 0, 0);
	}
}

void func_297(int iParam0)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return;
	}
	POPULATION::_0x74C2B3DC0B294102(iParam0);
	POPULATION::_0xA1CFB35069D23C23(iParam0);
}

void func_298(int iParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		VOLUME::_0x43F867EF5C463A53(iParam0);
	}
}

void func_299(var uParam0, int iParam1, int iParam2, vector3 vParam3, vector3 vParam6, vector3 vParam9, int iParam12, int iParam13)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	vector3 vVar8;
	int iVar11;

	if (iParam2 < 0 || iParam2 > 4)
	{
		return;
	}
	iVar0 = func_780(iParam2, 1);
	iVar1 = func_780(iParam2, 0);
	bVar4 = (iParam2 == 0 || iParam2 == 2);
	if (iVar0 != 7)
	{
		if (iVar0 != -1)
		{
			func_781(&iVar2, vParam3, vParam6, vParam9, iVar0, iParam12, iParam13, bVar4);
			VOLUME::_0x6E0D3C3F828DA773(*uParam0, iVar2);
		}
	}
	if (iVar1 != 7)
	{
		if (iVar1 != -1)
		{
			func_781(&iVar3, vParam3, vParam6, vParam9, iVar1, iParam12, iParam13, bVar4);
			VOLUME::_0x6E0D3C3F828DA773(*uParam0, iVar3);
		}
	}
	if (*iParam1 != 0 && VOLUME::_0x92A78D0BEDB332A3(*iParam1))
	{
		fVar5 = func_782(iParam2);
		fVar6 = func_783((vParam9.x - fVar5), 0.1f);
		fVar7 = func_783((vParam9.y - fVar5), 0.1f);
		vVar8 = { fVar6, fVar7, vParam9.z };
		iVar11 = VOLUME::_CREATE_VOLUME_BY_HASH(iParam12, vParam3, vParam6, vVar8);
		VOLUME::_0x6E0D3C3F828DA773(*iParam1, iVar11);
	}
}

void func_300(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(1, iVar0));
}

void func_301()
{
	func_784(0, 653.717f, -1253.369f, 44.30623f, 0f, 0f, 123.268f, 4.089039f, 4.447602f, 3.107987f);
	func_785(iLocal_3521[0], 0, 1);
	func_785(iLocal_3521[0], 16, 0);
	func_784(1, 661.024f, -1257.267f, 44.30623f, 0f, 0f, 163.903f, 4.089039f, 4.447602f, 3.107987f);
	func_785(iLocal_3521[1], 1, 1);
	func_784(2, 676.8243f, -1266.103f, 44.30623f, 0f, 0f, -161.0943f, 3.309491f, 3.887614f, 3.107987f);
	func_785(iLocal_3521[2], 11, 1);
	func_784(3, 673.2542f, -1268.189f, 44.30623f, 0f, 0f, 176.968f, 3.309491f, 2.816824f, 3.107987f);
	func_785(iLocal_3521[3], 20, 1);
	func_785(iLocal_3521[3], 15, 0);
	func_785(iLocal_3521[3], 22, 0);
	func_784(4, 692.1019f, -1254.25f, 44.30623f, 0f, 0f, -72.4903f, 4.153816f, 3.887614f, 3.107987f);
	func_785(iLocal_3521[4], 13, 1);
	func_785(iLocal_3521[4], 14, 0);
	func_784(5, 657.7814f, -1232.627f, 44.30623f, 0f, 0f, 123.268f, 3.211437f, 4.447602f, 3.107987f);
	func_785(iLocal_3521[5], 17, 1);
	func_785(iLocal_3521[5], 19, 0);
	func_785(iLocal_3521[5], 18, 0);
	func_784(6, 673.5869f, -1238.552f, 44.47178f, 0f, 0f, 115.5981f, 4.615707f, 4.447602f, 3.107987f);
	func_785(iLocal_3521[6], 5, 1);
	func_785(iLocal_3521[6], 3, 0);
	func_785(iLocal_3521[6], 7, 0);
	func_784(7, 685.7074f, -1241.031f, 44.30623f, 0f, 0f, -18.04674f, 4.153816f, 2.510912f, 3.107987f);
	func_785(iLocal_3521[7], 6, 1);
	func_785(iLocal_3521[7], 2, 0);
	func_785(iLocal_3521[7], 9, 0);
	func_784(8, 690.1271f, -1258.598f, 44.30623f, 0f, 0f, -126.8046f, 4.153816f, 3.887614f, 3.107987f);
	func_785(iLocal_3521[8], 21, 1);
	func_785(iLocal_3521[8], 8, 0);
}

void func_302(var uParam0)
{
	if (func_211(uParam0->f_8))
	{
		func_212(&(uParam0->f_8), 1, 1);
	}
	MISC::CLEAR_BIT(&(uParam0->f_1), 3);
}

void func_303(var uParam0)
{
	int iVar0;

	if (func_211(uParam0->f_10))
	{
		func_212(&(uParam0->f_10), 1, 1);
	}
	if (func_211(uParam0->f_11))
	{
		func_212(&(uParam0->f_11), 1, 1);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_211(&(uParam0->f_12[iVar0])))
		{
			func_212(uParam0->f_12[iVar0], 1, 1);
		}
		iVar0++;
	}
	if (func_211(uParam0->f_9))
	{
		func_212(&(uParam0->f_9), 1, 1);
	}
	MISC::CLEAR_BIT(&(uParam0->f_1), 5);
}

void func_304(bool bParam0, var uParam1)
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), bParam0, 0, 0);
	if (bParam0)
	{
		MISC::SET_BIT(&(uParam1->f_1), 2);
	}
	else
	{
		MISC::CLEAR_BIT(&(uParam1->f_1), 2);
	}
}

void func_305(var uParam0)
{
	int iVar0;

	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_7 = -1;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_12[iVar0] = 0;
		iVar0++;
	}
}

void func_306(int iParam0, bool bParam1)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, 2228479, 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, 2228479, 16384, 0, -1, -1, 0);
	if (bParam1)
	{
		POPULATION::_0x2161278C6322F740(2228479, 16384, 0, -1, -1, iParam0);
	}
}

void func_307(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		func_786(&iParam1, 8192);
	}
	if (bParam3)
	{
		POPULATION::_0x2161278C6322F740(iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
	}
}

void func_308(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	MISC::_0x2FCD528A397E5C88(iParam0, iVar0);
}

void func_309(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 1048576;
	if (bParam1)
	{
		iVar0 |= 131072;
	}
	if (bParam2)
	{
		iVar0 |= 524288;
	}
	MISC::_0x2FCD528A397E5C88(iParam0, iVar0);
}

void func_310(int iParam0, vector3 vParam1, var uParam4, int iParam5)
{
	if (!func_502(iParam0))
	{
		return;
	}
	if (func_213(vParam1))
	{
		return;
	}
	(Global_1395601->f_5[iParam0 /*28*/])->f_15 = { vParam1 };
	(Global_1395601->f_5[iParam0 /*28*/])->f_18 = uParam4;
	(Global_1395601->f_5[iParam0 /*28*/])->f_23 = iParam5;
	if (VOLUME::_0x92A78D0BEDB332A3(iParam5))
	{
	}
	if (!func_133(242, 1, 1))
	{
		func_787(iParam0, 1);
	}
	func_788(iParam0);
	func_789(iParam0, 1);
	(Global_40.f_9384[iParam0 /*2*/])->f_1 = func_573();
}

int func_311(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (func_133(0, 0, 1))
	{
		return 0;
	}
	if (iParam0 == 7)
	{
		if (!func_150(60))
		{
			return 0;
		}
	}
	return 1;
}

void func_312(int iParam0, var uParam1)
{
	vector3 vVar0;

	func_305(uParam1);
	vVar0 = { func_790(iParam0) };
	uParam1->f_5 = VOLUME::_CREATE_VOLUME_CYLINDER(vVar0, 0f, 0f, 0f, 2.25f, 2.25f, 2f);
	uParam1->f_6 = GRAPHICS::_0xFA50F79257745E74(vVar0, 2f, 1, 36, 0);
	if (MAP::DOES_BLIP_EXIST(uParam1->f_4))
	{
		MAP::REMOVE_BLIP(&(uParam1->f_4));
	}
	uParam1->f_4 = MAP::_0x554D9D53F696D002(1687768444, func_790(iParam0));
	MAP::_0x662D364ABF16DE2F(uParam1->f_4, 287169430);
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam1->f_4, "BLIP_CAMP_HITCH");
	MAP::SET_BLIP_FLASH_TIMER(uParam1->f_4, 68, -1);
	func_701(uParam1->f_4, func_269());
}

void func_313(var uParam0, int iParam1)
{
	if (iParam1 == *uParam0)
	{
		return;
	}
	*uParam0 = iParam1;
	MISC::CLEAR_BIT(&(uParam0->f_1), 1);
}

void func_314(var uParam0)
{
	uParam0->f_8 = func_215("BLIP_CAMP_HITCH", 1940454787, uParam0->f_5, 1, 0, 0, 4, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
	MISC::SET_BIT(&(uParam0->f_1), 3);
}

void func_315(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_211(iParam0))
	{
		return;
	}
	iVar0 = func_583(iParam0);
	HUD::_UIPROMPT_SET_ENABLED(((*Global_1945938)[iVar0 /*18*/])->f_3, !bParam1);
}

void func_316(var uParam0)
{
	if (func_791())
	{
		uParam0->f_11 = func_792(uParam0);
		HUD::_UIPROMPT_SET_GROUP(func_793(uParam0->f_11), 1842627646, 0);
	}
	else if (func_794())
	{
		uParam0->f_10 = func_215("CAMP_HITCH_SADDLE", 1940454787, uParam0->f_5, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
		HUD::_UIPROMPT_SET_GROUP(func_793(uParam0->f_10), 1842627646, 0);
	}
	if (func_795(2) == 2)
	{
		func_796(2, -1384133541, uParam0);
	}
	if (func_795(3) == 2)
	{
		func_796(3, 1710877787, uParam0);
	}
	if (func_795(4) == 2)
	{
		func_796(4, 1141111167, uParam0);
	}
	uParam0->f_9 = func_215("SHOP_EXIT", 992265328, uParam0->f_5, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
	HUD::_UIPROMPT_SET_GROUP(func_793(uParam0->f_9), 1842627646, 0);
	MISC::SET_BIT(&(uParam0->f_1), 5);
}

int func_317(var uParam0)
{
	*uParam0 = -1;
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0;
	}
	if (func_794())
	{
		return 1;
	}
	if (func_795(2) == 2)
	{
		return 1;
	}
	if (func_795(3) == 2)
	{
		return 1;
	}
	if (func_795(4) == 2)
	{
		return 1;
	}
	if (func_791())
	{
		return 1;
	}
	else if (!func_797())
	{
		*uParam0 = 0;
	}
	else if (ENTITY::DOES_ENTITY_EXIST(func_377(0)) && func_228(func_377(0)))
	{
		*uParam0 = 2;
	}
	else if (func_798(0) || (ENTITY::DOES_ENTITY_EXIST(func_377(0)) && ENTITY::IS_ENTITY_DEAD(func_377(0))))
	{
		*uParam0 = 1;
	}
	return 0;
}

void func_318(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_211(iParam0))
	{
		return;
	}
	iVar0 = func_583(iParam0);
	HUD::_UIPROMPT_RESTART_MODES(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

var func_319(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_320(int iParam0)
{
	var uVar0;
	var uVar1;

	if (iParam0 <= -1 || iParam0 >= 630)
	{
		return;
	}
	func_580(iParam0, &uVar0, &uVar1);
	func_799(&uVar0, &uVar1);
}

bool func_321()
{
	int iVar0;

	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && _NAMESPACE71::_0x59FA676177DBE4C9(iVar0) <= 4);
}

int func_322(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 1:
			return 3;
		case 2:
			return 4;
		default:
			break;
	}
	return -1;
}

Vector3 func_323(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -108.5488f, -31.9591f, 94.9533f;
		case 2:
			return 703.402f, -1230.448f, 44.2554f;
		case 3:
			return 1848.78f, -1838.562f, 42.1948f;
		case 5:
			return 2277.974f, -753.376f, 41.0869f;
		case 6:
			return 2370.903f, 1339.88f, 105.1385f;
		case 7:
			return -2591.979f, 464.4913f, 145.3082f;
		case 8:
			if (!func_800())
			{
				return -1663.893f, -1331.753f, 82.9211f;
			}
			else
			{
				return -1642.401f, -1376.996f, 82.9705f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_324(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 302.5949f;
		case 2:
			return 25.2604f;
		case 3:
			return 296.4873f;
		case 5:
			return 318.2845f;
		case 6:
			return 350.6767f;
		case 7:
			return 320.8711f;
		case 8:
			if (!func_800())
			{
				return 102.5146f;
			}
			else
			{
				return 76.6876f;
			}
			break;
	}
	return 0f;
}

void func_325(int iParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_801();
	func_802(0, iParam0);
	func_803(0, 1);
	if (bVar0)
	{
		func_803(iParam0, 2);
		if (func_804(iParam0))
		{
			func_805(iParam0);
		}
	}
	else
	{
		iVar1 = func_377(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			func_806(iVar1);
			PED::_0xCC8CA3E88256E58F(iVar1, 0, 1, 1, 1, 1);
		}
		func_807(iParam0);
		func_808(iParam0);
		func_803(iParam0, 0);
	}
	if (func_809() == 0)
	{
		func_810(0);
		func_335(0);
	}
}

Vector3 func_326(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case -1:
					return -106.1076f, -31.1365f, 94.9429f;
				case 0:
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(-106.1076f, -31.1365f, 94.9429f, func_811(iParam0), 0.75f, 0f, 0f);
				case 1:
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(-106.1076f, -31.1365f, 94.9429f, func_811(iParam0), -0.75f, 0f, 0f);
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case -1:
					return 702.1609f, -1228.529f, 44.1236f;
				case 0:
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(702.1609f, -1228.529f, 44.1236f, func_811(iParam0), 0.75f, 0f, 0f);
				case 1:
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(702.1609f, -1228.529f, 44.1236f, func_811(iParam0), -0.75f, 0f, 0f);
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case -1:
					return 1850.179f, -1838.022f, 42.1198f;
				case 0:
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(1850.179f, -1838.022f, 42.1198f, func_811(iParam0), 0.75f, 0f, 0f);
				case 1:
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(1850.179f, -1838.022f, 42.1198f, func_811(iParam0), -0.75f, 0f, 0f);
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case -1:
					return 2279.944f, -751.8282f, 40.9738f;
				case 0:
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(2279.944f, -751.8282f, 40.9738f, func_811(iParam0), 0.75f, 0f, 0f);
				case 1:
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(2279.944f, -751.8282f, 40.9738f, func_811(iParam0), -0.75f, 0f, 0f);
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case -1:
					return 2371.779f, 1341.602f, 105.1376f;
				case 0:
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(2371.779f, 1341.602f, 105.1376f, func_811(iParam0), 0.75f, 0f, 0f);
				case 1:
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(2371.779f, 1341.602f, 105.1376f, func_811(iParam0), -0.75f, 0f, 0f);
				default:
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case -1:
					return -2590.321f, 464.9799f, 145.1713f;
				case 0:
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(-2590.321f, 464.9799f, 145.1713f, func_811(iParam0), 0.75f, 0f, 0f);
				case 1:
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(-2590.321f, 464.9799f, 145.1713f, func_811(iParam0), -0.75f, 0f, 0f);
				default:
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case -1:
					if (!func_800())
					{
						return -1665.684f, -1332.361f, 82.8786f;
					}
					else
					{
						return -1644.99f, -1376.751f, 82.9679f;
					}
					break;
				case 0:
					if (!func_800())
					{
						return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(-1665.684f, -1332.361f, 82.8786f, func_811(iParam0), 0.75f, 0f, 0f);
					}
					else
					{
						return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(-1644.99f, -1376.751f, 82.9679f, func_811(iParam0), 0.75f, 0f, 0f);
					}
					break;
				case 1:
					if (!func_800())
					{
						return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(-1665.684f, -1332.361f, 82.8786f, func_811(iParam0), -0.75f, 0f, 0f);
					}
					else
					{
						return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(-1644.99f, -1376.751f, 82.9679f, func_811(iParam0), -0.75f, 0f, 0f);
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_327(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 3490746;
	if (bParam4)
	{
		iVar0 |= 1;
	}
	if (bParam5)
	{
		iVar0 |= 72;
	}
	if (bParam6)
	{
		iVar0 |= 6;
	}
	if (bParam7)
	{
		iVar0 |= 524288;
	}
	if (bParam8)
	{
		iVar0 |= 131072;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

int func_328(int iParam0, var uParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	vector3 vVar10;
	vector3 vVar13;
	int iVar16;
	struct<11> Var17;

	if (!func_812())
	{
		return 1;
	}
	vVar0 = { func_326(iParam0, -1) };
	if (func_213(vVar0))
	{
		return 0;
	}
	iVar6 = func_377(0);
	iVar7 = func_377(1);
	bVar8 = false;
	if (ENTITY::DOES_ENTITY_EXIST(iVar7))
	{
		if (func_813(iVar7, vVar0, 2f, 1, 0))
		{
			bVar8 = true;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar6) && PED::_0xA0BC8FAED8CFEB3C(iVar6))
	{
		if (PED::_0xB676EFDA03DADA52(iVar6, 1) != 0 || PED::GET_MOUNT(Global_35) == iVar6)
		{
			return 1;
		}
		func_814();
		func_815();
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar6, 0, 1);
		MISC::CLEAR_AREA(vVar0, 1f, 2442122);
		if (bVar8)
		{
			vVar3 = { func_326(iParam0, 1) };
		}
		else
		{
			vVar3 = { vVar0 };
		}
		ENTITY::SET_ENTITY_COORDS(iVar6, vVar3, true, false, true, true);
		ENTITY::SET_ENTITY_HEADING(iVar6, func_811(iParam0));
		TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iVar6, vVar0, 0.25f, -1, 0, 0, 0, 0);
		iVar9 = TASK::_0xF533D68FF970D190(vVar0, -1805387726, 0.5f, 0, 0);
		if (TASK::_0x841475AC96E794D1(iVar9))
		{
			vVar10 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(TASK::_0x7467165EE97D3C68(iVar9), func_816(2, 1)) };
			PHYSICS::_0x06AADE17334F7A40(iVar6, vVar10);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar7) && bVar8)
		{
			vVar3 = { func_326(iParam0, 0) };
			ENTITY::SET_ENTITY_COORDS(iVar7, vVar3, true, false, true, true);
			ENTITY::SET_ENTITY_HEADING(iVar7, func_811(iParam0));
			TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iVar7, vVar0, 0.25f, -1, 0, 0, 0, 0);
			if (TASK::_0x841475AC96E794D1(iVar9))
			{
				vVar13 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(TASK::_0x7467165EE97D3C68(iVar9), func_816(2, 0)) };
				PHYSICS::_0x06AADE17334F7A40(iVar7, vVar13);
			}
		}
		uParam1->f_3 = iVar6;
		return 1;
	}
	Var17.f_10 = 7;
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_3))
	{
		Var17.f_10 = 0;
		Var17.f_6 = { vVar0 };
		Var17.f_9 = 0f;
		Var17.f_1 = 0;
		Var17 = 1;
		Var17.f_2 = 1;
		iVar6 = func_817(&iVar16, &Var17);
		switch (iVar16)
		{
			case 0:
				return 0;
			case 1:
				return 1;
			case 2:
				break;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_329(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iParam0 = func_818(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_804(iParam0))
	{
		return;
	}
	iVar0 = func_377(iParam0);
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iVar0, iVar1);
	iVar2 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		iVar4 = MISC::_0xEE04C0AFD4EFAF0E(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, iVar1));
		if (!ENTITY::IS_ENTITY_A_PED(iVar4))
		{
		}
		else
		{
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar4);
			if (!PED::IS_PED_HUMAN(iVar5))
			{
			}
			else if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar4))
			{
			}
			else
			{
				ENTITY::_0x0D0DB2B6AF19A987(&iVar4);
			}
		}
		iVar3++;
	}
	if (ITEMSET::IS_ITEMSET_VALID(iVar1))
	{
		ITEMSET::DESTROY_ITEMSET(iVar1);
	}
}

void func_330()
{
	int iVar0;

	iVar0 = func_377(0);
	if (PED::GET_PED_CONFIG_FLAG(iVar0, 136, true))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 136, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iVar0, 312, true))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 312, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iVar0, 113, true))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 113, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iVar0, 301, true))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 301, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iVar0, 367, true))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 367, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iVar0, 72, true))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 72, false);
	}
	if (!PED::_0x2C76FA0E01681F8D(iVar0, 0))
	{
		PED::_0xAE6004120C18DF97(iVar0, 0, 1);
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
	if (FLOCK::GET_ANIMAL_TUNING_BOOL_PARAM(iVar0, 48))
	{
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iVar0, 48, false);
	}
	if (ENTITY::_0x083D497D57B7400F(iVar0))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
	}
	if (!ENTITY::IS_ENTITY_VISIBLE(iVar0))
	{
		ENTITY::SET_ENTITY_VISIBLE(iVar0, true);
	}
	if (!ENTITY::_0x75DF9E73F2F005FD(iVar0))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(iVar0, false);
	}
}

int func_331(int iParam0)
{
	iParam0 = func_818(iParam0);
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

void func_332(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	float fVar7;

	if (iParam1 == -1)
	{
		return;
	}
	iParam0 = func_818(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (iParam0 != 0)
	{
		if (!func_753(43))
		{
			return;
		}
	}
	iVar0 = func_819(iParam0);
	if (func_820(iVar0) || func_821(iVar0))
	{
		return;
	}
	iVar1 = func_331(iParam0);
	if (iVar1 >= func_822(iVar0))
	{
		return;
	}
	if (func_823(iParam0, iParam1))
	{
		return;
	}
	if (func_824(iParam0, iParam1))
	{
		return;
	}
	fVar2 = func_825(iParam0, iParam1);
	fVar3 = func_826(iParam1);
	fVar3 = (fVar3 * (1f + Global_40.f_11095.f_68));
	switch (iParam1)
	{
		case 1:
			iVar4 = func_377(iParam0);
			if (func_827(iVar4, 0))
			{
				fVar3 = (fVar3 * 0.5f);
			}
			(Global_1900383->f_317.f_2[iParam0 /*5*/])->f_2 = ((Global_1900383->f_317.f_2[iParam0 /*5*/])->f_2 + fVar3);
			break;
		case 2:
		case 3:
			if (func_828())
			{
				fVar3 = (fVar3 * 2f);
			}
			(Global_1900383->f_317.f_2[iParam0 /*5*/])->f_2 = ((Global_1900383->f_317.f_2[iParam0 /*5*/])->f_2 + fVar3);
			break;
		case 4:
			(Global_1900383->f_317.f_2[iParam0 /*5*/])->f_4 = ((Global_1900383->f_317.f_2[iParam0 /*5*/])->f_4 + fVar3);
			break;
		case 5:
			if (iVar1 < 1)
			{
				fVar5 = func_829(iParam0);
				fVar6 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar1));
				fVar7 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar1 + 1));
				fVar3 = (fVar7 - (fVar6 + fVar5));
			}
			else
			{
				fVar3 = 0f;
			}
			break;
		default:
			func_830(iParam1, fVar3);
			break;
	}
	func_831(iParam0, fVar3);
	func_832(iParam0, iParam1, (fVar2 + fVar3));
}

int func_333()
{
	int iVar0;

	iVar0 = func_833();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 1;
	}
	return 0;
}

void func_334()
{
	int iVar0;

	iVar0 = func_833();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	OBJECT::DELETE_OBJECT(&iVar0);
	func_834(0);
}

void func_335(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

Vector3 func_336(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -107.3742f, -33.2291f, 94.9708f;
		case 2:
			return 704.5956f, -1229.202f, 44.2563f;
		case 3:
			return 1848.884f, -1836.363f, 42.333f;
		case 5:
			return 2277.335f, -751.5715f, 41.0714f;
		case 6:
			return 2369.604f, 1340.72f, 105.1302f;
		case 7:
			return -2590.858f, 468.7466f, 145.054f;
		case 8:
			if (!func_800())
			{
				return -1664.295f, -1330.149f, 82.9397f;
			}
			else
			{
				return -1646.427f, -1375.833f, 82.9658f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_337(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

int func_338(vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	if (func_333())
	{
		func_835();
		func_334();
	}
	iVar0 = func_836();
	if (!STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		STREAMING::REQUEST_MODEL(iVar0, false);
		return 0;
	}
	iVar1 = OBJECT::CREATE_OBJECT(iVar0, vParam0, true, true, false, false, true);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	func_834(iVar1);
	bVar2 = false;
	if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
	{
		bVar2 = true;
	}
	bVar3 = false;
	if (ENTITY::_0x88AD6CC10D8D35B2(iVar1))
	{
		bVar3 = true;
	}
	if (!bVar2 || !bVar3)
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, true);
	}
	ENTITY::SET_ENTITY_HEADING(iVar1, fParam3);
	if (bParam4)
	{
		ENTITY::_0x9587913B9E772D29(iVar1, 0);
	}
	TASK::_0xF0B4F759F35CC7F5(iVar1, 822715387, 0, 0, 0);
	return 1;
}

void func_339(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (&uParam0->f_3374[iVar0] != 0)
		{
			PED::_RELEASE_METAPED_OUTFIT_REQUEST(&(uParam0->f_3374[iVar0]));
			uParam0->f_3374[iVar0] = 0;
		}
		iVar0++;
	}
}

void func_340(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		func_837(uParam0->f_3402[iVar0]);
		func_837(uParam0->f_3430[iVar0]);
		iVar0++;
	}
	func_837(&(uParam0->f_3478));
	iVar1 = 0;
	while (iVar1 < 3)
	{
		func_837(uParam0->f_3458[iVar1]);
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 15)
	{
		func_837(uParam0->f_3462[iVar2]);
		iVar2++;
	}
}

void func_341(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_386(Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_661(Global_1935630, 4194304);
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

int func_342(bool bParam0)
{
	if (!bParam0 && func_838(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(752193127, bParam0, 0);
	return 1;
}

void func_343(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_839(&Global_0, 8);
	}
	if (!func_840() || func_56() != -1)
	{
		return;
	}
	func_839(&Global_0, 1);
}

int func_344(int iParam0, int iParam1)
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
	if (func_717(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_717(iVar0, 2))
	{
		if (PED::_0x3AA24CCC0D451379(iParam0))
		{
			return 0;
		}
	}
	if (func_717(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_717(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_717(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_717(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return 0;
		}
	}
	if (func_717(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_717(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

Vector3 func_345(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1343.699f, 2429.397f, 307.0626f;
		case 1:
			return -123.1805f, -28.8611f, 94.8478f;
		case 2:
			return 667.9077f, -1252.78f, 42.9221f;
		case 3:
			return 1880.807f, -1873.231f, 41.8094f;
		case 4:
			return 1422.625f, -7332.473f, 80.5977f;
		case 5:
			return 2254.96f, -758.12f, 41.75f;
		case 6:
			return 2351.282f, 1362.077f, 104.9752f;
		case 7:
			return -2593.21f, 453.9533f, 145.9973f;
		case 8:
			return func_841();
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_346()
{
	int iVar0;

	iVar0 = func_269();
	switch (iVar0)
	{
		case 79:
			return 50f;
		case 58:
			return 50f;
		case 71:
			return 50f;
		case 43:
			return 50f;
		case 4:
			return 50f;
		case 9:
			return 50f;
		case 22:
			return 120f;
		case 98:
			return 60f;
		case 37:
			return 120f;
	}
	return 25f;
}

int func_347(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			if ((Global_1898077->f_1 == 1 || Global_1898077->f_1 == 3) || Global_1898077->f_1 == 4)
			{
				return 1;
			}
			break;
		case 2:
			if ((((Global_1898077->f_1 == 2 || Global_1898077->f_1 == 5) || Global_1898077->f_1 == 1) || Global_1898077->f_1 == 3) || Global_1898077->f_1 == 4)
			{
				return 1;
			}
			break;
		case 5:
			if (((Global_1898077->f_1 == 5 || Global_1898077->f_1 == 1) || Global_1898077->f_1 == 3) || Global_1898077->f_1 == 4)
			{
				return 1;
			}
			break;
		case 3:
			if (Global_1898077->f_1 == 3 || Global_1898077->f_1 == 4)
			{
				return 1;
			}
			break;
		case 4:
			if (Global_1898077->f_1 == 4)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_348(bool bParam0)
{
	int iVar0;

	if (Global_1898077->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_56() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077->f_2 == 4 && Global_1898077->f_12 != Global_1898077->f_13) && !bParam0)
	{
		Global_1898077->f_1 = Global_1898077->f_2;
		Global_1898077->f_12 = Global_1898077->f_13;
		func_842(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_843();
		Global_1898077->f_9 = func_844(Global_1894899->f_2);
		func_845(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

void func_349(int iParam0, bool bParam1, float fParam2)
{
	func_846(iParam0, bParam1, fParam2);
}

void func_350()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (&Global_1934765->f_275[iVar0 /*2*/] == SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			Global_1934765->f_286 = (Global_1934765->f_286 + (Global_1934765->f_275[iVar0 /*2*/])->f_1);
			Global_1934765->f_275[iVar0 /*2*/] = 0;
			(Global_1934765->f_275[iVar0 /*2*/])->f_1 = 0;
			func_847();
			return;
		}
		iVar0++;
	}
}

void func_351(int* iParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;

	func_754(iParam0);
	func_848(iParam0);
	func_777(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_11))
	{
		OBJECT::DELETE_OBJECT(&(iParam0->f_11));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_12))
	{
		OBJECT::DELETE_OBJECT(&(iParam0->f_12));
	}
	if (func_849())
	{
		INTERIOR::CLEAR_ROOM_FOR_ENTITY(iParam0->f_864);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_864))
	{
		HUD::RELEASE_NAMED_RENDERTARGET("ledger_ct");
		OBJECT::DELETE_OBJECT(&(iParam0->f_864));
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_33);
	HUD::_0xAA03F130A637D923("CPGENAU");
	func_850(iParam0->f_1426, &iVar0, &uVar1, &uVar2, &uVar3);
	Global_1357549->f_1723 = 0;
	func_552(iVar0, 512, 0);
	if (((func_294() == 1 || func_294() == 2) || func_294() == 3) || func_294() == 6)
	{
		func_851(&(iParam0->f_1428));
	}
}

void func_352()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 40)
	{
		if ((Global_1357549->f_12[iVar0 /*14*/])->f_7 != 0)
		{
			ENTITY::_0xD2B9C78537ED5759((Global_1357549->f_12[iVar0 /*14*/])->f_7);
			(Global_1357549->f_12[iVar0 /*14*/])->f_7 = 0;
			(Global_1357549->f_12[iVar0 /*14*/])->f_10 = 0;
			(Global_1357549->f_12[iVar0 /*14*/])->f_8 = 0;
		}
		iVar0++;
	}
}

void func_353(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if ((Global_1914319->f_3[iVar0 /*446*/])->f_9 == iParam0)
		{
			func_255(iVar0);
		}
		iVar0++;
	}
}

void func_354(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23117[iParam0 /*11*/] = (&Global_23117[iParam0 /*11*/] - (Global_23117[iParam0 /*11*/] && iParam1));
		return;
	}
	Global_1058888->f_40615[iParam0 /*11*/] = (&Global_1058888->f_40615[iParam0 /*11*/] - (Global_1058888->f_40615[iParam0 /*11*/] && iParam1));
}

bool func_355(int iParam0)
{
	return (Local_18.f_1718 && iParam0) == iParam0;
}

void func_356(int iParam0)
{
	Local_18.f_1718 = (Local_18.f_1718 - (Local_18.f_1718 && iParam0));
}

bool func_357(int iParam0)
{
	return func_416(iParam0, 16, 1);
}

bool func_358(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_179(iParam0);
	if (bParam1)
	{
		if (!func_344(iVar0, 0))
		{
			return false;
		}
	}
	return PED::IS_PED_GROUP_MEMBER(iVar0, func_852(), 1);
}

void func_359(int iParam0)
{
	int iVar0;
	struct<15> Var1;

	if (!func_503(iParam0))
	{
		return;
	}
	if (!func_358(iParam0, 0))
	{
	}
	func_853(iParam0);
	Global_1359489->f_15 = func_854(1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1359489[iVar0] == iParam0)
		{
			(*Global_1359489)[iVar0] = -1;
		}
		iVar0++;
	}
	func_855();
	func_430(iParam0, 32, 1);
	if (func_344(Global_1360165[iParam0 /*1157*/], 0))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], 1030835986);
		PED::SET_PED_COMBAT_ATTRIBUTES(Global_1360165[iParam0 /*1157*/], 83, false);
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 152, false);
		Var1 = PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX());
		Var1.f_12 = 8;
		Var1.f_3 = Global_1360165[iParam0 /*1157*/];
		Var1.f_7 = func_135();
		Var1.f_8 = 0;
		Var1.f_11 = 10;
		Var1.f_14 = Global_1360165[iParam0 /*1157*/];
		MISC::_0x88BC5F4AEF77FC4E(&Var1, 17);
	}
}

void func_360()
{
	func_395(-505205920, 1017034651, -469960592, 4, 1, 1, 1);
	func_856(544);
	func_856(595);
	func_856(548);
	func_857(0);
	func_857(19);
	func_858(1, 1, 0);
	func_859();
}

void func_361(bool bParam0)
{
	int iVar0;

	if (func_56() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1360165)
	{
		if ((!func_357(iVar0) && !func_860(iVar0)) && iVar0 != Global_1357549->f_1497)
		{
			if ((!func_537(iVar0, 33, 1) || !ENTITY::DOES_ENTITY_EXIST(Global_1360165[iVar0 /*1157*/])) || !ENTITY::IS_ENTITY_ON_SCREEN(Global_1360165[iVar0 /*1157*/]))
			{
				func_861(iVar0, 0, 0, 1, bParam0);
			}
		}
		iVar0++;
	}
}

void func_362(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (bParam0)
	{
		func_147(4096);
		if (iParam1 && VOLUME::_0x92A78D0BEDB332A3(iParam2))
		{
			iVar0 = 0;
			while (iVar0 < 27)
			{
				if (func_344(func_138(iVar0), 0))
				{
					if (!func_504(iVar0))
					{
						if (func_416(iVar0, 32768, 1))
						{
							_NAMESPACE48::_0x7B204F88F6C3D287(func_862(iVar0, 0));
						}
					}
				}
				iVar0++;
			}
		}
	}
	else
	{
		func_144(4096);
	}
}

int func_363(int iParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	bool bVar0;

	bVar0 = func_56() != -1;
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

int func_364(int iParam0, int iParam1)
{
	if (func_56() != -1)
	{
		return 0;
	}
	if (!func_422(iParam0))
	{
		return 0;
	}
	if (!func_638(iParam0) && iParam1)
	{
		return 0;
	}
	return func_388(iParam0, 1);
}

int func_365(int iParam0)
{
	int iVar0;

	if (!func_422(iParam0))
	{
		return 0;
	}
	if (!func_863(func_423(iParam0)))
	{
		return 1;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(func_864(iParam0)))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(_NAMESPACE48::_0x31C70A716CAE1FEE(func_864(iParam0))))
		{
			return 1;
		}
	}
	iVar0 = _NAMESPACE48::_0x31C70A716CAE1FEE(func_864(iParam0));
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
		}
	}
	_NAMESPACE48::_0x7B204F88F6C3D287(func_864(iParam0));
	return 1;
}

void func_366()
{
	if (func_344(Global_35, 0))
	{
		PED::_0x86F0B6730C32AC14(Global_35, 0);
	}
	if (func_344(func_179(0), 0))
	{
		PED::_0x86F0B6730C32AC14(func_179(0), 0);
	}
	if (func_344(func_179(16), 0))
	{
		PED::_0x86F0B6730C32AC14(func_179(16), 0);
	}
}

void func_367()
{
	int iVar0[3];
	int iVar4;

	iVar0[0] = 67198036;
	iVar0[1] = -1656481590;
	iVar0[2] = -1670262487;
	iVar4 = 0;
	while (iVar4 < 3)
	{
		if (STREAMING::_IS_IMAP_ACTIVE(&(iVar0[iVar4])))
		{
			STREAMING::_REMOVE_IMAP(&(iVar0[iVar4]));
		}
		iVar4++;
	}
}

void func_368(var uParam0)
{
	if (uParam0->f_49 && !ENTITY::IS_ENTITY_DEAD(uParam0->f_48))
	{
		VEHICLE::DELETE_VEHICLE(&(uParam0->f_48));
	}
	func_44(&(Global_1357549->f_3));
}

void func_369(var uParam0)
{
	int iVar0;

	func_865(0.775f, 0.2f, 0.025f, 0f);
	COMPANION::_0x7274F84B1501B523(iLocal_3516);
	COMPANION::_0x7274F84B1501B523(iLocal_3517);
	COMPANION::_0x7274F84B1501B523(iLocal_3518);
	if (MAP::DOES_BLIP_EXIST(Global_1357549->f_1624))
	{
		MAP::REMOVE_BLIP(&(Global_1357549->f_1624));
	}
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (func_866(uLocal_3601[iVar0]))
		{
			GRAPHICS::_0x9CF1836C03FB67A2(uLocal_3601[iVar0], 1);
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3712))
	{
		OBJECT::DELETE_OBJECT(&iLocal_3712);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3713))
	{
		OBJECT::DELETE_OBJECT(&iLocal_3713);
	}
	func_867(&uLocal_3534, &uLocal_3535);
	func_868(&Local_3537);
	func_869();
	func_870(&uLocal_3514);
	func_696(552);
	func_696(551);
	func_871(&(uParam0->f_51), &Local_3626);
	func_672(&Local_3764);
}

void func_370()
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_344((Global_1357549->f_1675[iVar0 /*5*/])->f_3, 0))
		{
			if (!func_872((Global_1357549->f_1675[iVar0 /*5*/])->f_3) && !ENTITY::DOES_ENTITY_EXIST(PED::_0xB676EFDA03DADA52((Global_1357549->f_1675[iVar0 /*5*/])->f_3, 0)))
			{
				bVar1 = false;
				if (!ENTITY::_0x88AD6CC10D8D35B2((Global_1357549->f_1675[iVar0 /*5*/])->f_3))
				{
					PED::_0xF008E0BA1FE1D644(1);
					bVar1 = true;
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY((Global_1357549->f_1675[iVar0 /*5*/])->f_3, true, true);
				}
				_NAMESPACE48::_0x7B204F88F6C3D287((Global_1357549->f_1675[iVar0 /*5*/])->f_4);
				if (bVar1)
				{
					PED::_0x7D4E70A67A651C71(1);
				}
				_NAMESPACE48::_0xFCC6DB8DBE709BC8((Global_1357549->f_1675[iVar0 /*5*/])->f_4);
			}
		}
		iVar0++;
	}
}

void func_371()
{
	if (Global_40.f_4283.f_567)
	{
		func_873(&(Global_1357549->f_1897));
	}
}

void func_372()
{
	if (Global_1357549->f_1832 != -1 && AUDIO::IS_STREAM_PLAYING(Global_1357549->f_1832))
	{
		AUDIO::STOP_STREAM(Global_1357549->f_1832);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1357549->f_1841)))
	{
		AUDIO::_0x9D746964E0CF2C5F(&(Global_1357549->f_1841), &(Global_1357549->f_1833));
	}
	func_183(&(Global_1357549->f_1845));
	Global_1357549->f_1832 = -1;
	func_144(1048576);
}

void func_373(bool bParam0)
{
	if (bParam0)
	{
		HUD::_0x4CC5F2FC1332577F(-1618603322);
		func_147(8388608);
	}
	else
	{
		HUD::_0x8BC7C1F929D07BF3(-1618603322);
		func_144(8388608);
	}
}

void func_374(bool bParam0)
{
	if (bParam0)
	{
	}
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(15, bParam0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(6, bParam0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(1, bParam0);
}

bool func_375(int iParam0)
{
	return (Local_18.f_1786 && iParam0) == iParam0;
}

void func_376(int iParam0)
{
	Local_18.f_1786 = (Local_18.f_1786 - (Local_18.f_1786 && iParam0));
}

int func_377(int iParam0)
{
	iParam0 = func_818(iParam0);
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

bool func_378(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

void func_379(int iParam0, int iParam1)
{
	(*Global_1897952)[iParam0 /*2*/] = (Global_1897952[iParam0 /*2*/] || iParam1);
}

void func_380(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_623((*uParam0)[iVar0 /*257*/]);
		iVar0++;
	}
}

void func_381(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_624((*uParam0)[iVar0 /*257*/]);
		iVar0++;
	}
}

void func_382(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_625((*uParam0)[iVar0 /*257*/]);
		iVar0++;
	}
}

void func_383()
{
	if (!Global_1894899->f_186)
	{
		VEHICLE::_0xF5FFB08976911B50(Global_1894899->f_182, Global_1894899->f_183, Global_1894899->f_184, Global_1894899->f_185);
	}
}

int func_384(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 5:
				return Global_40.f_4283.f_320;
			default:
				break;
		}
	}
	switch (iParam0)
	{
		case 0:
			return Global_40.f_4283.f_313;
		case 1:
			return Global_40.f_4283.f_316;
		case 2:
			return Global_40.f_4283.f_317;
		case 12:
			return Global_40.f_4283.f_315;
		case 13:
			return Global_40.f_4283.f_314;
		case 14:
			return Global_40.f_4283.f_322;
		case 3:
			return Global_40.f_4283.f_318;
		case 4:
			return Global_40.f_4283.f_319;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 15:
			return Global_40.f_4283.f_321;
		default:
			break;
	}
	return 1;
}

void func_385(int iParam0)
{
	switch (func_56())
	{
		case -1:
			Global_1357549->f_1496 = (Global_1357549->f_1496 - (Global_1357549->f_1496 && iParam0));
			break;
	}
}

void func_386(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_387(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_388(int iParam0, int iParam1)
{
	if (func_56() != -1)
	{
		return false;
	}
	if (!func_422(iParam0))
	{
		return false;
	}
	return (Global_24886[iParam0 /*2*/] && iParam1) != 0;
}

int func_389(int iParam0, bool bParam1)
{
	if (!func_422(iParam0))
	{
		return 0;
	}
	if (!func_388(iParam0, 2))
	{
		return 0;
	}
	if (func_423(iParam0) == 0)
	{
		return 1;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(func_864(iParam0)))
	{
		return 1;
	}
	if (func_388(iParam0, 1) && !bParam1)
	{
		func_874(iParam0, 128);
		return 1;
	}
	func_875(iParam0, 129);
	func_876(iParam0);
	_NAMESPACE48::_0xFC77C5B44D5FF7C0(func_864(iParam0));
	func_877(iParam0, 0);
	return 1;
}

int func_390(int iParam0)
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
	else if (iParam0 <= 116)
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

int func_391(int iParam0)
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

int func_392(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return 150;
		case 4:
			return 30;
		case 5:
		case 6:
			return 150;
		case 7:
		case 8:
			return 50;
		default:
			break;
	}
	return 150;
}

void func_393(int iParam0)
{
	int iVar0;

	if (iParam0 > 150)
	{
		iParam0 = 150;
	}
	if (iParam0 > (Global_1934765->f_286 - 150))
	{
	}
	if (func_878(&iVar0))
	{
		if ((Global_1934765->f_275[iVar0 /*2*/])->f_1 != iParam0)
		{
			Global_1934765->f_286 = (Global_1934765->f_286 + (Global_1934765->f_275[iVar0 /*2*/])->f_1);
			(Global_1934765->f_275[iVar0 /*2*/])->f_1 = iParam0;
			Global_1934765->f_286 = (Global_1934765->f_286 - iParam0);
			STREAMING::_0x2F9AC754FE179D58(func_879());
		}
		return;
	}
	iVar0 = func_880();
	if (iVar0 == -1)
	{
		return;
	}
	(Global_1934765->f_275[iVar0 /*2*/])->f_1 = iParam0;
	Global_1934765->f_275[iVar0 /*2*/] = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1934765->f_286 = (Global_1934765->f_286 - iParam0);
	STREAMING::_0x2F9AC754FE179D58(func_879());
}

int func_394(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -850999370;
		case 1:
			return -807742826;
		case 2:
			return 866755445;
		case 3:
			return 2082303678;
		case 4:
			return 1349313303;
		case 5:
			return 1267596926;
		case 6:
			return 676394410;
		case 7:
			return -1190705999;
		case 8:
			return -1802212639;
		default:
			break;
	}
	return 176656832;
}

int func_395(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;

	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar2 = func_881(iParam0);
	uVar3 = func_882(iParam0);
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0 /*5*/] == 176656832)
		{
			Global_40.f_4283.f_6[iVar0 /*5*/] = iParam0;
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_2 = iParam1;
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_3 = uVar3;
			if (iParam3 > 0)
			{
				iVar1 = func_573();
				func_575(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_1 = iVar1;
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_4 = iVar2;
			func_883(iParam0, 1);
			if (func_884(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if ((Global_40.f_4283.f_6[iVar4 /*5*/])->f_4 == iVar2 && &Global_40.f_4283.f_6[iVar4 /*5*/] != iParam0)
					{
						func_885(Global_40.f_4283.f_6[iVar4 /*5*/], 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_886(1, iParam0);
				}
				else
				{
					func_887(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_396(int iParam0, int iParam1, var uParam2)
{
	uParam2->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			*uParam2 = 1442468227;
			uParam2->f_3 = 665f;
			uParam2->f_4 = 2490f;
			uParam2->f_2 = 0;
			break;
		case 1:
			*uParam2 = 297498058;
			uParam2->f_3 = -120f;
			uParam2->f_4 = -30f;
			uParam2->f_2 = 0;
			switch (iParam1)
			{
				case 0:
					uParam2->f_1 = 1;
					break;
				case 2:
					uParam2->f_1 = 2;
					break;
			}
			break;
		case 2:
			*uParam2 = -2041482106;
			uParam2->f_3 = 671.5f;
			uParam2->f_4 = -1250f;
			uParam2->f_2 = 0;
			switch (iParam1)
			{
				case 0:
					uParam2->f_1 = 1;
					break;
				case 2:
					uParam2->f_1 = 2;
					break;
			}
			break;
		case 3:
			*uParam2 = -1322422742;
			uParam2->f_3 = 1881f;
			uParam2->f_4 = -1859.5f;
			uParam2->f_2 = 0;
			switch (iParam1)
			{
				case 0:
					uParam2->f_1 = 1;
					break;
			}
			break;
		case 4:
			*uParam2 = 0;
			uParam2->f_3 = 0f;
			uParam2->f_4 = 0f;
			uParam2->f_2 = 0;
			break;
		case 5:
			*uParam2 = 188702764;
			uParam2->f_3 = 2260f;
			uParam2->f_4 = -780f;
			uParam2->f_2 = 0;
			break;
		case 6:
			*uParam2 = 833544090;
			uParam2->f_3 = 2350f;
			uParam2->f_4 = 1350f;
			uParam2->f_2 = 0;
			switch (iParam1)
			{
				case 0:
					uParam2->f_1 = 1;
					break;
			}
			break;
		case 7:
			*uParam2 = 0;
			uParam2->f_3 = 0f;
			uParam2->f_4 = 0f;
			uParam2->f_2 = 0;
			break;
		case 8:
			*uParam2 = 0;
			uParam2->f_3 = 0f;
			uParam2->f_4 = 0f;
			uParam2->f_2 = 0;
			break;
	}
}

void func_397(var uParam0)
{
	int iVar0;

	if (uParam0->f_61 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		(*uParam0)[iVar0 /*3*/] = 0;
		((*uParam0)[iVar0 /*3*/])->f_1 = 0;
		((*uParam0)[uParam0->f_61 /*3*/])->f_2 = 0;
		iVar0++;
	}
	uParam0->f_61 = 0;
}

void func_398(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_61 >= 20)
	{
		return;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam1))
	{
		return;
	}
	if (!func_888(iParam2))
	{
		return;
	}
	(*uParam0)[uParam0->f_61 /*3*/] = iParam1;
	((*uParam0)[uParam0->f_61 /*3*/])->f_1 = iParam2;
	((*uParam0)[uParam0->f_61 /*3*/])->f_2 = 0;
	uParam0->f_61++;
}

int func_399(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!func_503(iParam0))
	{
		return 0;
	}
	if (!bParam2)
	{
		if (func_889(iParam0, iParam1, 0))
		{
			return 0;
		}
	}
	if (iParam3 == -1)
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_140 = (((*Global_1360165)[iParam0 /*1157*/])->f_140 || iParam1);
	}
	else
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_141 = (((*Global_1360165)[iParam0 /*1157*/])->f_141 || iParam1);
		((*Global_1360165)[iParam0 /*1157*/])->f_142 = &Global_1899515;
		func_575(&(((*Global_1360165)[iParam0 /*1157*/])->f_142), 0, 0, iParam3, 0, 0, 0, 0);
	}
	return 1;
}

char* func_400(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "horseshoeOverlook/hso_animal_pearson";
		case 2:
			return "clemensPoint/clm_animal_pearson";
		case 3:
			return "shadyBelle/shb_animal_pearson";
		case 6:
			return "beaverHollow/bvh_animal_pearson";
		default:
			break;
	}
	return "";
}

int func_401(int iParam0, char[32] cParam1, int iParam9)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(&cParam1))
	{
		return 0;
	}
	if (!func_536(iParam0))
	{
		return 0;
	}
	iVar0 = func_415(iParam0);
	if (iVar0 != 0 && func_890(iParam0))
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_39 = { cParam1 };
		_NAMESPACE48::_0x187D65F3AEC5D679(iVar0, &cParam1);
		func_540(iParam0, 17, 1);
		if (iParam9 != -1)
		{
			iVar1 = func_573();
			func_575(&iVar1, 0, 0, iParam9, 0, 0, 0, 0);
			(Global_40.f_4942[iParam0 /*60*/])->f_46 = iVar1;
			(Global_40.f_4942[iParam0 /*60*/])->f_49 = 4;
		}
		else
		{
			(Global_40.f_4942[iParam0 /*60*/])->f_46 = -15;
			(Global_40.f_4942[iParam0 /*60*/])->f_49 = 0;
		}
		((*Global_1360165)[iParam0 /*1157*/])->f_56 = 1;
		return 1;
	}
	return 0;
}

void func_402()
{
	if (func_891(26))
	{
		MISC::_0x59174F1AFE095B5A(-702816767, false, true, true, 10f, false);
		return;
	}
	if (func_891(59) || func_892(59))
	{
		return;
	}
	if (!func_893(1))
	{
		func_894(-193557170, 1, 0, 1103626240);
	}
}

int func_403(int iParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = func_269();
	if (iParam0 != iVar0)
	{
		return 1;
	}
	vVar1 = { func_895(iParam0, 1) };
	if (func_213(vVar1))
	{
		return 0;
	}
	STREAMING::_0xA8432A14D4DC2101(vVar1);
	if (STREAMING::_0xDA8B2EAF29E872E2(vVar1))
	{
		return 1;
	}
	return 0;
}

void func_404(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		func_628(iVar1, (*uParam0)[iVar0 /*257*/]);
		iVar0++;
	}
}

int func_405(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_629((*uParam0)[iVar0 /*257*/]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_406()
{
	if (func_131(6))
	{
		if (!STREAMING::HAS_MODEL_LOADED(924360705))
		{
			return 0;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3712))
		{
			iLocal_3712 = OBJECT::CREATE_OBJECT(924360705, vLocal_3717, true, true, false, false, true);
			return 0;
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(924360705);
		ENTITY::SET_ENTITY_ROTATION(iLocal_3712, vLocal_3720, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_3712, true);
	}
	if (func_131(8))
	{
		if (!STREAMING::HAS_MODEL_LOADED(iLocal_3729))
		{
			return 0;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3713))
		{
			iLocal_3713 = OBJECT::CREATE_OBJECT(iLocal_3729, vLocal_3723, true, true, false, false, true);
			return 0;
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_3729);
		ENTITY::SET_ENTITY_ROTATION(iLocal_3713, vLocal_3726, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_3713, true);
	}
	return 1;
}

void func_407(vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 16384;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

void func_408(vector3 vParam0, float fParam3, int iParam4)
{
	int iVar0;

	iVar0 = 512;
	if (iParam4 & 1 != 0)
	{
		iVar0 |= 524288;
	}
	if (iParam4 & 2 != 0)
	{
		iVar0 |= 1536;
	}
	if (iParam4 & 4 != 0)
	{
		iVar0 |= 2560;
	}
	if (iParam4 & 8 != 0)
	{
		iVar0 |= 4608;
	}
	if (iParam4 & 16 != 0)
	{
		iVar0 |= 8704;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

void func_409(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	float fVar8;

	func_896(iParam0);
	iVar1 = func_411(iParam0);
	vVar2 = { func_895(iVar1, 1) };
	if (func_148() == iParam0)
	{
		vVar5 = { func_468(iParam0) };
		fVar8 = func_897(iParam0);
		func_898(iParam0, bParam1);
		if (!func_899(vVar5))
		{
			func_900(vVar5, fVar8, "CaravanCamp", 0, 0, 4, 0, -1082130432);
		}
		func_901(iParam0);
		if (func_410(iParam0))
		{
			iVar0 = func_902(iParam0);
			if (func_32() != 2)
			{
				if (func_903(iVar0))
				{
					if (!STREAMING::_IS_IMAP_ACTIVE(iVar0))
					{
						STREAMING::_REQUEST_IMAP(iVar0);
					}
				}
			}
			else if (func_903(iVar0))
			{
				if (STREAMING::_IS_IMAP_ACTIVE(iVar0))
				{
					STREAMING::_REMOVE_IMAP(iVar0);
				}
			}
			func_904(iParam0);
		}
		func_905(iParam0, 1);
		if (!bParam2)
		{
			func_906(iParam0, iVar1, 1, 1);
		}
	}
	else
	{
		func_907(iParam0, &iVar0);
		if (func_899(vVar2))
		{
			func_908(vVar2, 0);
		}
		func_905(iParam0, 0);
		if (!bParam2)
		{
			func_906(iParam0, iVar1, 0, 0);
		}
	}
}

int func_410(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			return 1;
	}
	return 0;
}

int func_411(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 5:
			return 4;
		case 6:
			return 79;
		case 0:
			return 43;
		case 2:
			return 98;
		case 4:
			return 58;
		case 1:
			return 71;
		case 3:
			return 9;
		case 7:
			return 22;
		case 8:
			return 37;
		default:
			break;
	}
	if (iParam0 != -1)
	{
	}
	return -1;
}

void func_412(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	char cVar0[64];
	struct<8> Var8;

	MemCopy(&cVar0, {((*Global_1888801)[iParam0 /*35*/])->f_22}, 8);
	StringConCat(&cVar0, "_", 64);
	StringConCat(&cVar0, func_909(iParam1), 64);
	StringConCat(&cVar0, "_", 64);
	StringConCat(&cVar0, func_910(iParam2), 64);
	Var8 = { cVar0 };
	StringConCat(&Var8, "_setup", 64);
	if (TASK::DOES_SCENARIO_GROUP_EXIST(&Var8))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED(&Var8, bParam4);
	}
	else if (bParam4)
	{
		bParam3 = true;
	}
	if (TASK::DOES_SCENARIO_GROUP_EXIST(&cVar0))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED(&cVar0, bParam3);
	}
}

bool func_413()
{
	return (func_911() && !func_12(4096));
}

int func_414(int iParam0)
{
	if (!func_536(iParam0))
	{
		return 0;
	}
	if (!func_538(iParam0, 1, 0))
	{
		if (func_912(iParam0))
		{
			if (!func_416(iParam0, 512, 1) || !func_913(iParam0))
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_415(int iParam0)
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

bool func_416(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_536(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0 /*60*/] && iParam1) != 0;
}

int func_417(int iParam0, bool bParam1)
{
	if (!func_536(iParam0))
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
		((*Global_1360165)[iParam0 /*1157*/])->f_127 = func_914(iParam0);
		return ((*Global_1360165)[iParam0 /*1157*/])->f_127;
	}
	return 0;
}

int func_418(int iParam0)
{
	return 1268180497;
}

int func_419()
{
	int iVar0;
	struct<15> Var1;
	struct<10> Var30;
	struct<4> Var44;

	iVar0 = -352578118;
	Var1.f_9 = -1591664384;
	Var30.f_9 = -1591664384;
	Var44 = { func_915(0) };
	if (!func_916(Var44, iVar0, &Var30, 0, 0))
	{
		return 0;
	}
	if (!func_917(&Var30, &Var1))
	{
		return 0;
	}
	return Var1.f_14;
}

int func_420(int iParam0)
{
	if (func_12(4096))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 6:
			return 1;
		case 5:
			if (func_150(44))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_421(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -784953535;
		case 1:
			return -543937540;
		case 2:
			return 893704044;
	}
	return 0;
}

bool func_422(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

int func_423(int iParam0)
{
	if (!func_422(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/];
}

void func_424(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		func_630(iParam0, iVar1, func_627(iVar1), (*uParam1)[iVar0 /*257*/]);
		iVar0++;
	}
}

void func_425(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_631((*uParam0)[iVar0 /*257*/], (*uParam1)[iVar0]);
		iVar0++;
	}
}

int func_426(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_918((*uParam0)[iVar0 /*257*/], (*uParam1)[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_427()
{
}

int func_428(var uParam0)
{
	int iVar0;
	int iVar1;

	switch (Global_1357549->f_2)
	{
		case 0:
			if (uParam0->f_46 != func_269())
			{
				return 1;
			}
			if (func_919())
			{
				Global_1357549->f_2 = 1;
			}
			else
			{
				return 0;
			}
		case 1:
			if (func_920(uParam0->f_46, 0))
			{
				Global_1357549->f_2 = 2;
			}
			else
			{
				return 0;
			}
		case 2:
			if (func_921(uParam0->f_46))
			{
				Global_1357549->f_2 = 3;
			}
			else
			{
				return 0;
			}
		case 3:
			if (func_922(uParam0))
			{
				Global_1357549->f_2 = 4;
			}
			else
			{
				return 0;
			}
		case 4:
			if (func_923(uParam0))
			{
				Global_1357549->f_2 = 5;
			}
			else
			{
				return 0;
			}
		case 5:
			iVar0 = 0;
			while (iVar0 < 27)
			{
				func_430(iVar0, 4, 1);
				iVar0++;
			}
			iVar1 = 0;
			while (iVar1 < 3)
			{
				(Global_1357549->f_1675[iVar1 /*5*/])->f_2 = 0;
				iVar1++;
			}
			Global_1357549->f_2 = 0;
			return 1;
		default:
			break;
	}
	return 0;
}

void func_429(int iParam0, int iParam1)
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

void func_430(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_536(iParam0))
		{
			return;
		}
	}
	func_924(iParam1, &iVar0, &iVar1);
	MISC::CLEAR_BIT(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0], iVar1);
}

void func_431(var uParam0)
{
}

void func_432(var uParam0)
{
	var uVar0;
	var uVar1;
	char* sVar2;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	if (func_32() == 1)
	{
		func_925(uParam0);
	}
	uParam0->f_859 = 1;
	if (Global_1357549->f_1721 == 0)
	{
		uVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(Global_1357549->f_1724, "camp_detail");
		uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar1, func_926(0));
		Global_1357549->f_1726[0 /*3*/] = uVar0;
		(Global_1357549->f_1726[0 /*3*/])->f_1 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar0, "label", 1820034266);
		(Global_1357549->f_1726[0 /*3*/])->f_2 = DATABINDING::_DATABINDING_ADD_DATA_INT(uVar0, "value_string", 0);
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1357549->f_1725, 0, "camp_item", uVar0);
		uVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(Global_1357549->f_1724, "camp_detail");
		uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar1, func_926(1));
		Global_1357549->f_1726[1 /*3*/] = uVar0;
		(Global_1357549->f_1726[1 /*3*/])->f_1 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar0, "label", 156970377);
		(Global_1357549->f_1726[1 /*3*/])->f_2 = DATABINDING::_DATABINDING_ADD_DATA_INT(uVar0, "value_string", 0);
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1357549->f_1725, 1, "camp_item", uVar0);
		uVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(Global_1357549->f_1724, "camp_detail");
		uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar1, func_926(2));
		Global_1357549->f_1726[2 /*3*/] = uVar0;
		(Global_1357549->f_1726[2 /*3*/])->f_1 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar0, "label", -609488505);
		(Global_1357549->f_1726[2 /*3*/])->f_2 = DATABINDING::_DATABINDING_ADD_DATA_INT(uVar0, "value_string", 0);
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1357549->f_1725, 2, "camp_item", uVar0);
		uVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(Global_1357549->f_1724, "camp_detail");
		uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar1, func_926(3));
		Global_1357549->f_1726[3 /*3*/] = uVar0;
		(Global_1357549->f_1726[3 /*3*/])->f_1 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar0, "label", 1967383862);
		(Global_1357549->f_1726[3 /*3*/])->f_2 = DATABINDING::_DATABINDING_ADD_DATA_INT(uVar0, "value_string", 0);
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1357549->f_1725, 3, "camp_item", uVar0);
		iVar4 = 0;
		iVar4 = 0;
		while (iVar4 < 31)
		{
			if (&Global_40.f_4283.f_335[iVar4] == 1)
			{
				func_927(&sVar2, iVar4);
				uVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(Global_1357549->f_1724, "camp_detail");
				uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar1, func_926(iVar4 + 4));
				Global_1357549->f_1726[iVar4 + 4 /*3*/] = uVar0;
				(Global_1357549->f_1726[iVar4 + 4 /*3*/])->f_1 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar0, "label", MISC::GET_HASH_KEY(&sVar2));
				(Global_1357549->f_1726[iVar4 + 4 /*3*/])->f_2 = DATABINDING::_DATABINDING_ADD_DATA_INT(uVar0, "value", 0);
				DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1357549->f_1725, iVar4 + 4, "camp_item", uVar0);
			}
			iVar4++;
		}
		Global_1357549->f_1721 = 1;
	}
	iVar7 = 0;
	iVar7 = 0;
	while (iVar7 < 31)
	{
		func_928(iVar7, &iVar5);
		func_929(iVar7, &iVar6);
		if (func_930(uParam0->f_1425, iVar5))
		{
			func_931(&(uParam0->f_1425), iVar5);
		}
		if (func_932(&(((*Global_1360165)[iVar6 /*1157*/])->f_12), 512))
		{
			func_552(iVar6, 512, 0);
		}
		if (func_211(&(uParam0->f_885[uParam0->f_1426])))
		{
			func_212(uParam0->f_885[uParam0->f_1426], 1, 1);
		}
		iVar7++;
	}
	STREAMING::REQUEST_ANIM_DICT("script_common@handover@generic@player_handover@money");
	func_933(128);
	func_778(&(uParam0->f_1325), Global_35, "ARTHUR", 0);
	HUD::_0xF66090013DE648D5("CPGENAU");
	func_289();
	if (func_934(func_148()))
	{
		func_935(&(uParam0->f_35.f_2));
		func_936(&(uParam0->f_35));
	}
	iVar8 = func_937(func_148());
	if (func_169())
	{
		if (!func_137(iVar8, 64))
		{
			func_170(iVar8, 64);
			func_170(iVar8, 262144);
		}
	}
	else if (func_137(iVar8, 64))
	{
		func_171(iVar8, 64);
	}
}

void func_433()
{
	*(Local_3626[0 /*8*/]) = { func_938(7, 0, 0) };
	*(Local_3626[1 /*8*/]) = { func_938(4, 0, 0) };
	*(Local_3626[2 /*8*/]) = { func_938(4, 1, 1) };
	*(Local_3626[3 /*8*/]) = { func_938(0, 0, 0) };
	*(Local_3626[4 /*8*/]) = { func_938(0, 0, 1) };
	*(Local_3626[5 /*8*/]) = { func_938(0, 1, 2) };
	*(Local_3626[6 /*8*/]) = { func_938(0, 1, 3) };
	*(Local_3626[7 /*8*/]) = { func_938(0, 1, 4) };
	*(Local_3626[8 /*8*/]) = { func_938(1, 0, 0) };
	*(Local_3626[9 /*8*/]) = { func_938(10, 0, 0) };
}

void func_434()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (iVar0 < 6 || iVar0 >= 23)
		{
			PED::_0x12F2D161BF4031FC(iVar0, 0.5f);
		}
		else if (iVar0 < 12)
		{
			PED::_0x12F2D161BF4031FC(iVar0, 1.5f);
		}
		else
		{
			PED::_0x12F2D161BF4031FC(iVar0, 1f);
		}
		iVar0++;
	}
}

void func_435()
{
	int iVar0;
	float fVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	func_939(&(Local_18.f_51.f_35));
	func_183(&(Global_1359489->f_52));
	PLAYER::_0xCB61A63AA53D7D22(PLAYER::GET_PLAYER_INDEX(), 0);
	func_687(779383250, 1, 0);
	if (func_940())
	{
		func_395(-1526278254, 195285667, 1120952528, -1, 1, 1, 0);
	}
	else if (func_234(-1526278254, 1))
	{
		func_687(-1526278254, 1, 0);
	}
	if (func_941())
	{
		func_395(-544096309, 195285667, 1120952528, -1, 1, 1, 0);
	}
	else if (func_234(-544096309, 1))
	{
		func_687(-544096309, 1, 0);
	}
	iVar0 = func_942();
	if (iVar0 > Global_40.f_4283.f_323)
	{
		if ((iVar0 - Global_40.f_4283.f_323) > 5)
		{
			func_395(534766068, 195285667, 1120952528, -1, 1, 1, 0);
		}
		if ((iVar0 - Global_40.f_4283.f_323) > 10)
		{
			func_395(13460468, 195285667, 1120952528, -1, 1, 1, 0);
		}
		Global_40.f_4283.f_323 = iVar0;
	}
	if (func_148() == 6)
	{
		if (func_943(25))
		{
		}
	}
	if (ATTRIBUTE::GET_ATTRIBUTE_BASE_RANK(Global_35, 22) >= 40 || ATTRIBUTE::GET_ATTRIBUTE_BASE_RANK(Global_35, 16) >= 40)
	{
		func_395(1618734891, 195285667, 1120952528, -1, 1, 1, 0);
	}
	else if (func_234(1618734891, 1))
	{
		func_687(1618734891, 1, 0);
	}
	if (func_234(443165194, 1))
	{
		func_687(443165194, 1, 0);
	}
	if (func_234(1004978630, 1))
	{
		func_687(1004978630, 1, 0);
	}
	fVar1 = func_944();
	if (fVar1 < 25f)
	{
		if (!func_234(-625309660, 1) && !func_12(33554432))
		{
			func_395(1004978630, 195285667, 1120952528, -1, 1, 1, 0);
		}
	}
	else if (fVar1 > 75f)
	{
		func_395(443165194, 195285667, 1120952528, -1, 1, 1, 0);
	}
	if (func_156() < BUILTIN::ROUND((IntToFloat(func_945(&(Local_18.f_51.f_35))) * 0.2f)) && !func_234(-218211995, 1))
	{
		if (!func_234(397857304, 1))
		{
			func_395(397857304, 195285667, 1120952528, -1, 1, 1, 0);
		}
	}
	if (Global_1357549->f_1610)
	{
		return;
	}
	if (Global_40.f_4283.f_4 != 1)
	{
		return;
	}
	bVar2 = true;
	if (func_234(1004978630, 0) || func_234(397857304, 0))
	{
		if (func_946())
		{
			switch (func_148())
			{
				case 1:
					func_395(-2041153728, 195285667, -469960592, -1, 1, 1, 0);
					bVar2 = false;
					break;
				case 2:
					func_395(-811804990, 195285667, -469960592, -1, 1, 1, 0);
					bVar2 = false;
					break;
				case 3:
					func_395(-1689239424, 195285667, -469960592, -1, 1, 1, 0);
					bVar2 = false;
					break;
			}
		}
	}
	else if (func_947())
	{
		if (func_946())
		{
			switch (func_148())
			{
				case 1:
					func_395(1665139197, 195285667, -469960592, -1, 1, 1, 0);
					break;
				case 2:
					func_395(-1302664729, 195285667, -469960592, -1, 1, 1, 0);
					break;
				case 3:
					func_395(-670201310, 195285667, -469960592, -1, 1, 1, 0);
					break;
			}
		}
	}
	if (bVar2)
	{
		iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
		iVar4 = 176656832;
		iVar5 = 176656832;
		iVar6 = 176656832;
		switch (func_148())
		{
			case 1:
				if (func_177(2, 0, 0))
				{
					iVar4 = -1520159291;
				}
				if (func_177(4, 0, 0))
				{
					iVar5 = -1825730216;
				}
				if (func_177(7, 0, 0))
				{
					iVar6 = -66788599;
				}
				break;
			case 2:
				if (func_177(2, 0, 0))
				{
					iVar4 = 1647502903;
				}
				if (func_177(4, 0, 0))
				{
					iVar5 = -1408927269;
				}
				if (func_177(7, 0, 0))
				{
					iVar6 = -1648173738;
				}
				break;
			case 3:
				if (func_177(2, 0, 0))
				{
					iVar4 = -1143028112;
				}
				if (func_177(4, 0, 0))
				{
					iVar5 = -1211711936;
				}
				if (func_177(7, 0, 0))
				{
					iVar6 = -1483924019;
				}
				break;
			default:
				return;
		}
		switch (iVar3)
		{
			case 0:
				if (iVar4 != 176656832)
				{
					func_395(iVar4, 195285667, 1120952528, -1, 1, 1, 0);
				}
				break;
			case 1:
				if (iVar5 != 176656832)
				{
					func_395(iVar5, 195285667, 1120952528, -1, 1, 1, 0);
				}
				break;
			case 2:
				if (iVar6 != 176656832)
				{
					func_395(iVar6, 195285667, 1120952528, -1, 1, 1, 0);
				}
				break;
		}
	}
}

bool func_436(int iParam0)
{
	return (Global_1894899 && iParam0) != 0;
}

void func_437(int iParam0)
{
	Global_1894899 = (&Global_1894899 - (Global_1894899 && iParam0));
}

void func_438(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		*uParam0 = (*uParam0 || iParam1);
	}
	else
	{
		*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	}
}

void func_439()
{
	if (func_344(Global_35, 0))
	{
		PED::_0x86F0B6730C32AC14(Global_35, 1);
		PED::_0xEF371232BC6053E1(Global_35);
	}
	if (func_344(func_179(0), 0))
	{
		PED::_0x86F0B6730C32AC14(func_179(0), 1);
		PED::_0xEF371232BC6053E1(func_179(0));
	}
	if (func_344(func_179(16), 0))
	{
		PED::_0x86F0B6730C32AC14(func_179(16), 1);
		PED::_0xEF371232BC6053E1(func_179(16));
	}
}

void func_440(int iParam0)
{
	int iVar0;

	if (((Global_1898077->f_1 == 2 || Global_1898077->f_1 == 5) || Global_1898077->f_1 == 3) || Global_1898077->f_1 == 1)
	{
		return;
	}
	iVar0 = 0;
	if (func_56() != -1)
	{
		iVar0 = 1;
	}
	Global_1898077->f_2 = Global_1898077->f_1;
	Global_1898077->f_13 = Global_1898077->f_12;
	Global_1898077->f_1 = 4;
	Global_1898077->f_7 = iVar0;
	Global_1898077->f_12 = iParam0;
	func_842(Global_1898077->f_7, Global_1898077->f_12);
}

bool func_441()
{
	return Global_1051081->f_8;
}

void func_442(int iParam0)
{
	Local_18.f_1718 = (Local_18.f_1718 || iParam0);
}

void func_443()
{
	if (!func_355(8))
	{
		func_374(1);
		func_442(8);
	}
}

int func_444(int iParam0)
{
	vector3 vVar0;
	int iVar3;

	ITEMSET::_0x20A4BF0E09BEE146(iParam0);
	vVar0 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
	PED::_0x7BE607DAFF382FD2(Global_35, iParam0, 512);
	PED::_0x3ACCE14DFA6BA8C2(Global_35, 4, vVar0, 100f, iParam0);
	PED::_0x3ACCE14DFA6BA8C2(Global_35, 6, vVar0, 100f, iParam0);
	PED::_0x3ACCE14DFA6BA8C2(Global_35, 5, vVar0, 100f, iParam0);
	iVar3 = ITEMSET::GET_ITEMSET_SIZE(iParam0);
	return iVar3;
}

void func_445(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_56() != -1)
	{
		return;
	}
	if ((Global_36615 && func_948(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_949(iParam0);
	iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_950(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, iParam7);
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
			func_951(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_950(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

void func_446()
{
	Local_18.f_3373 = 0;
}

void func_447()
{
	Global_1905944->f_5695 = 1;
}

void func_448()
{
	int iVar0;
	int iVar1;

	if (Local_18.f_3373 != -1)
	{
		if (func_416(Local_18.f_3373, 4, 0))
		{
			if (Local_18.f_3373 != 10 || func_943(63))
			{
				iVar0 = func_179(Local_18.f_3373);
				if (!func_952(iVar0, 1))
				{
					if (!func_537(Local_18.f_3373, 3, 0) || func_953(Local_18.f_3373))
					{
						func_954(Local_18.f_3373, 1);
						TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(iVar0, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 200f, 0, 16);
						PED::SET_PED_CONFIG_FLAG(iVar0, 366, true);
					}
					else
					{
						TASK::_TASK_FLEE_FROM_PED(iVar0, Global_35, 0f, 0f, 0f, 200f, 20000, 0, 1077936128, 0);
					}
				}
			}
		}
		iVar1 = Local_18.f_3373;
		iVar1++;
		Local_18.f_3373 = iVar1;
		if (Local_18.f_3373 >= 26)
		{
			Local_18.f_3373 = -1;
		}
	}
}

Vector3 func_449(vector3 vParam0, float fParam3, float fParam4)
{
	vector3 vVar0;
	float fVar3;

	vVar0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), 0f };
	fVar3 = (fParam4 / 2f);
	vVar0 = { func_955(vVar0, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fParam3)) };
	vVar0.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-fVar3, fVar3);
	return vParam0 + vVar0;
}

Vector3 func_450(int iParam0, var uParam1, var uParam2)
{
	vector3 vVar0;

	vVar0 = { func_956(Global_36, uParam1, uParam2, 1, 0, 0, 0, 0, 0, 0, iParam0, 10f) };
	return vVar0;
}

void func_451(vector3 vParam0, var uParam3, var uParam4, int iParam5)
{
	Global_1310720->f_1 = { vParam0 };
	Global_40.f_9.f_10 = uParam4;
	Global_40.f_9.f_11 = uParam3;
	Global_40.f_9.f_12 = iParam5;
}

void func_452(int iParam0)
{
	Global_1310720->f_9 = iParam0;
}

void func_453()
{
	struct<10> Var0;
	struct<16> Var10;

	Global_1310720->f_8 = 0;
	Global_1935630->f_4 = 1;
	Var10 = { Var0 };
	StringCopy(&(Var10.f_10), "respawn_persistence", 32);
	Var10.f_14 = 1024;
	Var10.f_15 = 0;
	func_957(Var10, 0);
}

void func_454(int iParam0)
{
	Global_1572864->f_21 = iParam0;
	Global_1310720->f_4 = MISC::GET_GAME_TIMER();
}

void func_455(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 || iParam0);
}

void func_456()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 26)
	{
		if (func_358(iVar0, 1))
		{
			func_359(iVar0);
		}
		iVar1 = func_179(iVar0);
		if (func_952(iVar1, 1))
		{
		}
		else
		{
			if (PED::GET_PED_CONFIG_FLAG(iVar1, 366, true))
			{
				PED::SET_PED_CONFIG_FLAG(iVar1, 366, false);
			}
			if (!func_416(iVar0, 4, 0))
			{
			}
			else if (func_416(iVar0, 16, 0))
			{
			}
			else
			{
				TASK::TASK_PERSISTENT_CHARACTER(iVar1);
			}
		}
		iVar0++;
	}
}

void func_457(var uParam0)
{
	uParam0->f_62 = -1;
	uParam0->f_64 = *uParam0;
}

void func_458(bool bParam0)
{
	if (bParam0)
	{
		func_958(4);
	}
	func_958(2);
	MISC::SET_BIT(&(Global_1956578->f_1), 0);
}

int func_459(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = PED::_0xD806CD2A4F2C2996(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		return 0;
	}
	iVar1 = iVar0;
	if (!PED::IS_PED_HUMAN(iVar1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		*bParam2 = 1;
		*uParam1 = iVar1;
		return 1;
	}
	if (PED::_0x3AA24CCC0D451379(iVar1))
	{
		*bParam2 = 0;
		*uParam1 = iVar1;
		return 1;
	}
	return 0;
}

void func_460(int iParam0)
{
	Local_18.f_1786 = (Local_18.f_1786 || iParam0);
}

int func_461(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = PED::_0xB65A4DAB460A19BD(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (!PED::IS_PED_HUMAN(iVar0))
	{
		return 0;
	}
	*bParam2 = ENTITY::IS_ENTITY_DEAD(iVar0);
	*uParam1 = iVar0;
	return 1;
}

int func_462(int iParam0, int iParam1)
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

int func_463()
{
	if (Global_1392235->f_4 == 1)
	{
		return 1;
	}
	else if (func_676(((*Global_1835011)[7 /*74*/])->f_1))
	{
		return 1;
	}
	else if (func_676(((*Global_1835011)[69 /*74*/])->f_1))
	{
		return 1;
	}
	else if (func_676(((*Global_1835011)[70 /*74*/])->f_1))
	{
		return 1;
	}
	else if (func_676(((*Global_1835011)[71 /*74*/])->f_1))
	{
		return 1;
	}
	else if (func_676(((*Global_1835011)[72 /*74*/])->f_1))
	{
		return 1;
	}
	else if (func_676(((*Global_1347702)[32 /*49*/])->f_15))
	{
		return 1;
	}
	else if (func_676(((*Global_1347702)[132 /*49*/])->f_15))
	{
		return 1;
	}
	return 0;
}

int func_464(bool bParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	float fVar4;

	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return -1;
	}
	iVar0 = -1;
	fVar1 = 9999999f;
	iVar2 = 0;
	while (iVar2 < 26)
	{
		iVar3 = iVar2;
		if (!func_177(iVar3, 1, 1))
		{
		}
		else if (!bParam0)
		{
			if (Global_1357549->f_1497 == iVar3)
			{
			}
			else if (!func_959(iVar3, 0, iParam1))
			{
			}
			else
			{
				fVar4 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), ENTITY::GET_ENTITY_COORDS(func_179(iVar3), true, false));
				if (fVar4 < fVar1)
				{
					fVar1 = fVar4;
					iVar0 = iVar3;
				}
			}
			iVar2++;
			return iVar0;
		}
	}

int func_465(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, float fParam7, float fParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;

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
	bVar3 = PED::IS_PED_ON_MOUNT(iParam0);
	if (bVar3)
	{
		iVar2 = PED::GET_MOUNT(iParam0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || ENTITY::IS_ENTITY_DEAD(iVar2))
		{
			bVar3 = false;
		}
	}
	if (!bVar3)
	{
		bVar4 = PED::IS_PED_IN_ANY_VEHICLE(iParam0, true);
		if (bVar4)
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, true);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				bVar4 = false;
			}
		}
	}
	if (func_717(*iParam1, 128))
	{
		if (!func_462(iParam0, 1245594896))
		{
			TASK::CLEAR_PED_TASKS(iParam0, 1, 0);
			*iParam1 = 0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (func_717(*iParam1, 2))
	{
		if (bVar3)
		{
			if (!func_960(iVar2))
			{
				return 0;
			}
			if (!func_462(iParam0, 501393341))
			{
				if (fParam7 != 0f && fParam8 != 0f)
				{
					vVar5 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
					vVar5.x = fParam7;
					vVar5.f_1 = fParam8;
					if (func_961(iVar2, vVar5))
					{
						iParam4 = 131072;
					}
					else
					{
						iParam4 = 262144;
					}
					if (!func_717(*iParam1, 4))
					{
						iParam4 |= 32;
					}
				}
				TASK::CLEAR_PED_TASKS(iParam0, 1, 0);
				TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam4, 0, 0, 0, 0);
			}
			return 0;
		}
		else if ((func_962(iParam2, 128) && ENTITY::DOES_ENTITY_EXIST(PED::_0x4C8B59171957BCF7(iParam0))) && ENTITY::DOES_ENTITY_EXIST(PED::_0xD806CD2A4F2C2996(PED::_0x4C8B59171957BCF7(iParam0))))
		{
			TASK::TASK_PICKUP_CARRIABLE_ENTITY(iParam0, PED::_0xD806CD2A4F2C2996(PED::_0x4C8B59171957BCF7(iParam0)));
			func_719(iParam1, 128);
			return 0;
		}
		else
		{
			*iParam1 = 0;
			return 1;
		}
	}
	if (func_717(*iParam1, 4))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
		{
			return 0;
		}
		else
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0, 0, 1);
			*iParam1 = 0;
			return 1;
		}
	}
	if (func_717(*iParam1, 8))
	{
		if (bVar3)
		{
			if (!func_960(iVar2))
			{
				return 0;
			}
		}
		if ((!bVar3 && TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iParam0))) || (bVar3 && TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2))))
		{
			*iParam1 = 0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PED::IS_PED_A_PLAYER(iParam0) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		if (!func_962(iParam2, 2) && PLAYER::_0xB16223CB7DA965F0(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::_0xAE637BB8EF017875(PLAYER::GET_PLAYER_INDEX(), 1);
		}
		if (!func_962(iParam2, 2048))
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, iParam3, 0);
				if (func_962(iParam2, 8192))
				{
					HUD::_0x8BC7C1F929D07BF3(724769646);
				}
			}
		}
	}
	PAD::DISABLE_CONTROL_ACTION(0, -1879280170, false);
	if (bVar3)
	{
		if (ENTITY::IS_ENTITY_IN_AIR(iVar2, 0))
		{
			return 0;
		}
		if (func_717(*iParam1, 2336))
		{
			if (!func_960(iVar2))
			{
			}
			if (func_963(iVar2, *iParam1))
			{
				func_724(iParam1, 32);
				func_724(iParam1, 256);
				func_724(iParam1, 2048);
				func_719(iParam1, 512);
				func_719(iParam1, 1024);
				func_719(iParam1, 4096);
			}
			else
			{
				return 0;
			}
		}
		if (func_717(*iParam1, 64))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 1520437207, false);
			if (!func_960(iVar2))
			{
			}
			if (TASK::IS_PED_WALKING(iVar2))
			{
				return 0;
			}
			else
			{
				func_724(iParam1, 64);
			}
		}
		if (func_962(iParam2, 16))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 2, 0, 0);
			*iParam1 = 0;
			return 1;
		}
		PAD::DISABLE_CONTROL_ACTION(0, 1520437207, false);
		if (((TASK::IS_PED_SPRINTING(iVar2) || (TASK::IS_PED_RUNNING(iVar2) && func_962(iParam2, 1024))) || func_962(iParam2, 8)) && !func_717(*iParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 1, 0, 0);
			func_719(iParam1, 32);
		}
		else if ((TASK::IS_PED_RUNNING(iVar2) && func_962(iParam2, 4096)) && !func_717(*iParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 8, 0, 0);
			func_719(iParam1, 2048);
			func_719(iParam1, 4096);
		}
		else if (((TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2) <= 1.5f && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2) >= 1.001f) && func_962(iParam2, 32)) && !func_717(*iParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 3, 0, 0);
			func_719(iParam1, 256);
			func_719(iParam1, 1024);
		}
		else if (TASK::IS_PED_WALKING(iVar2))
		{
			TASK::TASK_STAND_STILL(iVar2, -1);
			func_719(iParam1, 64);
		}
		else if (!func_962(iParam2, 1))
		{
			if (!func_962(iParam2, 256))
			{
				WEAPON::_0xB832F1A686B9B810(iParam0, 1, 0);
			}
			if (fParam7 != 0f && fParam8 != 0f)
			{
				vVar8.x = fParam7;
				vVar8.f_1 = fParam8;
				vVar8.f_2 = Global_36.f_2;
				if (func_961(iVar2, vVar8))
				{
					iParam4 = 131072;
				}
				else
				{
					iParam4 = 262144;
				}
				if (!func_717(*iParam1, 4))
				{
					iParam4 |= 32;
				}
			}
			TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam4, 0, 0, 0, 0);
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2, 0f);
			func_719(iParam1, 2);
		}
		else
		{
			TASK::TASK_STAND_STILL(iParam0, 1000);
			func_719(iParam1, 8);
		}
	}
	else if (bVar4)
	{
		if (!func_962(iParam2, 1))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_STAND_STILL(0, 250);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			VEHICLE::BRING_VEHICLE_TO_HALT(iVar1, fParam5, iParam6, false);
			func_719(iParam1, 4);
		}
		else
		{
			*iParam1 = 0;
			return 1;
		}
	}
	else if (!func_962(iParam2, 512))
	{
		TASK::TASK_STAND_STILL(iParam0, 200);
		func_719(iParam1, 8);
	}
	return 0;
}

bool func_466(int iParam0)
{
	return (Local_18.f_1786 - iParam0) == 0;
}

void func_467(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

Vector3 func_468(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -127.3136f, -23.7866f, 95.356f;
		case 6:
			return 2334.85f, 1351.68f, 105.11f;
		case 3:
			return 1865.22f, -1887.22f, 41.39f;
		case 5:
			return 2275.63f, -729.34f, 40.43f;
		case 2:
			return 663.0678f, -1181.825f, 92.08381f;
		case 8:
			return -1621.825f, -1377.163f, 76.24816f;
		default:
			break;
	}
	return func_895(func_411(iParam0), 0);
}

Vector3 func_469()
{
	vector3 vVar0;

	vVar0 = { VOLUME::_0xF70F00013A62F866(&(Global_1357549->f_3[5])) };
	return func_964(Global_36 - vVar0);
}

bool func_470(int iParam0, int iParam1, bool bParam2, int iParam3)
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

int func_471()
{
	return -1;
}

void func_472(int iParam0, int iParam1)
{
	iParam0 = func_818(iParam0);
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

int func_473(int iParam0, var uParam1, var uParam2)
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

void func_474(int iParam0)
{
	Local_18.f_1862 = (Local_18.f_1862 || iParam0);
}

bool func_475(int iParam0)
{
	return (Local_18.f_1862 && iParam0) == iParam0;
}

int func_476(int iParam0)
{
	if (!func_965(iParam0))
	{
		return 0;
	}
	return ((*Global_1835011)[iParam0 /*74*/])->f_1;
}

int func_477(int iParam0)
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
		iVar0 = func_966(iParam0);
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

int func_478(int iParam0)
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

void func_479(int iParam0, int iParam1)
{
	iParam0 = func_818(iParam0);
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

float func_480(int iParam0, int iParam1, bool bParam2, int iParam3)
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

void func_481(int iParam0)
{
	Local_18.f_1862 = (Local_18.f_1862 - (Local_18.f_1862 && iParam0));
}

int func_482()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!VOLUME::_0x92A78D0BEDB332A3(&(Global_1357549->f_3[0])) || !VOLUME::_0x92A78D0BEDB332A3(&(Global_1357549->f_3[2])))
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	TASK::_0xB8E213D02F37947D(&(Global_1357549->f_3[2]), iVar1, -1805387726, 1, 1, 0, 0);
	iVar2 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		iVar0 = ITEMSET::GET_INDEXED_SCENARIO_POINT_INDEX_IN_ITEMSET(iVar3, iVar1);
		if (!TASK::_0x841475AC96E794D1(iVar0))
		{
		}
		else if (VOLUME::_0xF256A75210C5C0EB(&(Global_1357549->f_3[0]), TASK::_0xA8452DD321607029(iVar0, 1)))
		{
		}
	else
	{
		}
		else
		{
			iVar3++;
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar1);
	return iVar0;
}

int func_483()
{
	var uVar0;

	MISC::_COPY_MEMORY(&(Local_18.f_1934.f_67), &uVar0, 12);
	switch (func_148())
	{
		case 0:
			Local_18.f_1934.f_67 = { -1356.409f, 2433.987f, 307.1412f };
			Local_18.f_1934.f_67.f_3 = 315.3194f;
			Local_18.f_1934.f_67.f_4 = -92.6032f;
			Local_18.f_1934.f_67.f_5 = 0f;
			Local_18.f_1934.f_67.f_6 = { -1355.259f, 2428.821f, 306.6295f };
			Local_18.f_1934.f_67.f_9 = 137.8667f;
			Local_18.f_1934.f_67.f_10 = 27.6689f;
			Local_18.f_1934.f_67.f_11 = -32.8653f;
			return 1;
		case 1:
			Local_18.f_1934.f_67 = { -92.0169f, -46.8868f, 94.6083f };
			Local_18.f_1934.f_67.f_3 = 290.5712f;
			Local_18.f_1934.f_67.f_4 = -163.5061f;
			Local_18.f_1934.f_67.f_5 = -12.8288f;
			Local_18.f_1934.f_67.f_6 = { -127.8335f, -41.6741f, 94.4926f };
			Local_18.f_1934.f_67.f_9 = 343.9563f;
			Local_18.f_1934.f_67.f_10 = -5.4978f;
			Local_18.f_1934.f_67.f_11 = -9.5034f;
			return 1;
		case 2:
			Local_18.f_1934.f_67 = { 656.9079f, -1217.916f, 45.5739f };
			Local_18.f_1934.f_67.f_3 = 118.549f;
			Local_18.f_1934.f_67.f_4 = 108.4593f;
			Local_18.f_1934.f_67.f_5 = -3.7555f;
			Local_18.f_1934.f_67.f_6 = { 652.0198f, -1241.254f, 42.7896f };
			Local_18.f_1934.f_67.f_9 = 226.1829f;
			Local_18.f_1934.f_67.f_10 = -1.8674f;
			Local_18.f_1934.f_67.f_11 = -5.8606f;
			return 1;
		case 3:
			Local_18.f_1934.f_67 = { 1876.795f, -1819.649f, 41.3889f };
			Local_18.f_1934.f_67.f_3 = 146.2366f;
			Local_18.f_1934.f_67.f_4 = 29.2738f;
			Local_18.f_1934.f_67.f_5 = 0f;
			Local_18.f_1934.f_67.f_6 = { 1891.238f, -1852.065f, 41.5036f };
			Local_18.f_1934.f_67.f_9 = 235.0809f;
			Local_18.f_1934.f_67.f_10 = -4.8707f;
			Local_18.f_1934.f_67.f_11 = -31.7036f;
			return 1;
		case 4:
			Local_18.f_1934.f_67 = { 1430.64f, -7326.889f, 80.462f };
			Local_18.f_1934.f_67.f_3 = 39.9393f;
			Local_18.f_1934.f_67.f_4 = 33.7948f;
			Local_18.f_1934.f_67.f_5 = -2.9747f;
			Local_18.f_1934.f_67.f_6 = { 1425.97f, -7322.658f, 80.4454f };
			Local_18.f_1934.f_67.f_9 = 280.6111f;
			Local_18.f_1934.f_67.f_10 = -2.9136f;
			Local_18.f_1934.f_67.f_11 = -3.5024f;
			return 1;
		case 5:
			Local_18.f_1934.f_67 = { 2247.849f, -763.8032f, 41.9284f };
			Local_18.f_1934.f_67.f_3 = 52.0321f;
			Local_18.f_1934.f_67.f_4 = 48.5302f;
			Local_18.f_1934.f_67.f_5 = 2.8185f;
			Local_18.f_1934.f_67.f_6 = { 2238.481f, -776.7674f, 42.7447f };
			Local_18.f_1934.f_67.f_9 = 267.1989f;
			Local_18.f_1934.f_67.f_10 = -0.4043f;
			Local_18.f_1934.f_67.f_11 = -4.3617f;
			return 1;
		case 6:
			Local_18.f_1934.f_67 = { 2339.874f, 1371.26f, 105.2484f };
			Local_18.f_1934.f_67.f_3 = 221.9975f;
			Local_18.f_1934.f_67.f_4 = 16.3205f;
			Local_18.f_1934.f_67.f_5 = 2.6571f;
			Local_18.f_1934.f_67.f_6 = { 2338.244f, 1360.923f, 105.3035f };
			Local_18.f_1934.f_67.f_9 = 243.8945f;
			Local_18.f_1934.f_67.f_10 = 15.1624f;
			Local_18.f_1934.f_67.f_11 = -6.8075f;
			return 1;
		case 7:
			Local_18.f_1934.f_67 = { -2594.485f, 474.4041f, 144.9143f };
			Local_18.f_1934.f_67.f_3 = 93.6876f;
			Local_18.f_1934.f_67.f_4 = 20.3982f;
			Local_18.f_1934.f_67.f_5 = 0f;
			Local_18.f_1934.f_67.f_6 = { -2590.465f, 463.0091f, 145.2393f };
			Local_18.f_1934.f_67.f_9 = 168.0908f;
			Local_18.f_1934.f_67.f_10 = 1.7979f;
			Local_18.f_1934.f_67.f_11 = -5.3603f;
			return 1;
		case 8:
			Local_18.f_1934.f_67 = { -1610.253f, -1357.077f, 81.7792f };
			Local_18.f_1934.f_67.f_3 = 17.8936f;
			Local_18.f_1934.f_67.f_4 = 63.7332f;
			Local_18.f_1934.f_67.f_5 = -6.9619f;
			Local_18.f_1934.f_67.f_6 = { -1642.565f, -1356.53f, 82.9641f };
			Local_18.f_1934.f_67.f_9 = 200.1213f;
			Local_18.f_1934.f_67.f_10 = 77.8545f;
			Local_18.f_1934.f_67.f_11 = 10.0593f;
			return 1;
		default:
			break;
	}
	return 0;
}

int func_484()
{
	if (!func_12(32768))
	{
		return 0;
	}
	if (func_12(16384))
	{
		return 0;
	}
	if (func_12(4))
	{
		return 0;
	}
	return 1;
}

int func_485()
{
	if (!func_484())
	{
		return 0;
	}
	if (func_134(&Global_1935630, 16384))
	{
		return 0;
	}
	if (func_134(&Global_1935630, 32768))
	{
		return 0;
	}
	if (func_134(&Global_1935630, 8388608))
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_205(3))
	{
		return 0;
	}
	return 1;
}

int func_486(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return !PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0));
	}
	else
	{
		iVar0 = func_967(iParam0);
		iVar1 = 0;
		func_968(iVar0, 761605153, &iVar1);
		if (func_969(iVar0) || iVar1 > 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_487(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar7;
	int iVar8;
	int iVar9;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(false);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar0))
	{
		return 0;
	}
	ITEMSET::_0x20A4BF0E09BEE146(iVar0);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iParam0, iVar0);
	iVar1 = ITEMSET::GET_ITEMSET_SIZE(iVar0);
	if (iVar1 == 0)
	{
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	iVar9 = 0;
	while (iVar9 < 4)
	{
		iVar2 = func_970(iVar9);
		if (!PED::_0x608BC6A6AACD5036(&Var3, iParam0, iVar2, 0))
		{
		}
		else
		{
			iVar7 = Var3.f_3;
			if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
			}
			else
			{
				if (ENTITY::IS_ENTITY_DEAD(iVar7))
				{
				}
				iVar8 = ENTITY::_0x0FD25587BB306C86(iVar7);
				if (iVar8 == -1992418870 || iVar8 == 822715387)
				{
					return 1;
				}
			}
		}
		iVar9++;
	}
	return 0;
}

bool func_488(int iParam0)
{
	return func_971(iParam0, 6);
}

Vector3 func_489(bool bParam0, vector3 vParam1, vector3 vParam4)
{
	if (bParam0)
	{
		return vParam1;
	}
	return vParam4;
}

float func_490(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_491(var uParam0)
{
	if (!func_175(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000f));
	}
	if (func_534(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_972() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

void func_492(var uParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7)
{
	if (!func_866(uParam0))
	{
		*uParam0 = GRAPHICS::_0xFA50F79257745E74(vParam1, fParam4, iParam5, iParam6, iParam7);
		if (func_866(uParam0))
		{
		}
	}
}

Vector3 func_493(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			switch (func_973())
			{
				case 1:
					return -132.3208f, -32.346f, 96.2655f;
				case 2:
				case 3:
					return -132.5762f, -30.9136f, 96.1698f;
				case 4:
					return -132.6248f, -30.9491f, 96.653f;
				default:
					break;
			}
			break;
		case 2:
			return 652.4932f, -1253.537f, 44.3558f;
		case 3:
			return 1889.93f, -1866.695f, 47.658f;
		case 6:
			return 2360.978f, 1377.182f, 107.1004f;
	}
	return 0f, 0f, 0f;
}

bool func_494(int iParam0, int iParam1)
{
	return func_974(CLOCK::GET_CLOCK_HOURS(), iParam0, iParam1);
}

int func_495(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	var uVar0;
	int iVar5[4];

	if (func_213(vParam0))
	{
		return 0;
	}
	uVar0 = 4;
	iVar5[0] = 16384;
	iVar5[1] = iParam4;
	return VOLUME::_0x51E52C9687FCDEEC(vParam0, fParam3, &uVar0, &iVar5, iParam5);
}

void func_496(int iParam0)
{
	func_976(func_975(), iParam0);
}

int func_497()
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

int func_498(int iParam0)
{
	if (!func_501(iParam0))
	{
		return -1;
	}
	return func_978(func_977(iParam0));
}

bool func_499(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_500(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_501(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_502(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

int func_503(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return 0;
	}
	return 1;
}

int func_504(int iParam0)
{
	if (!func_536(iParam0))
	{
		return 0;
	}
	if (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 == 0 || ((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 == ((*Global_1360165)[iParam0 /*1157*/])->f_128)
	{
		return 0;
	}
	return 1;
}

bool func_505()
{
	return Global_1946804->f_2792;
}

int func_506(int iParam0)
{
	return &(Global_1898164->f_1[iParam0 /*5*/]);
}

int func_507(int iParam0)
{
	if (!func_501(iParam0))
	{
		return 0;
	}
	switch (func_979(iParam0))
	{
		case 1:
			switch (func_498(iParam0))
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
			switch (func_498(iParam0))
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

int func_508(int iParam0)
{
	int iVar0;

	iVar0 = func_981(func_980(iParam0), 1);
	if (iVar0 != 39)
	{
		return (Global_1946804->f_1497.f_1[iVar0 /*3*/])->f_1;
	}
	return 0;
}

int func_509(int iParam0)
{
	if (func_510(81053684, iParam0))
	{
		return 1;
	}
	if (func_510(-525676072, iParam0))
	{
		return 1;
	}
	return 0;
}

int func_510(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_981(func_980(iParam0), 1);
	if (iVar1 >= 39)
	{
		return 0;
	}
	if (&Global_1946804->f_1497.f_1[iVar1 /*3*/] != 0 && &Global_1946804->f_1497.f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1 /*3*/];
		if (func_517(iVar0) == iParam0)
		{
			*uParam1 = iVar0;
			return 1;
		}
	}
	*uParam1 = 0;
	return 0;
}

int func_511(int iParam0)
{
	if (func_982())
	{
		return 0;
	}
	if (!func_983(iParam0, 0))
	{
		return 0;
	}
	if (!func_984(iParam0, 1, 0))
	{
		HUD::_0xBFFF81E12A745A5F();
		return 0;
	}
	return 1;
}

int func_512(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;

	bVar3 = func_985(iParam0);
	if (func_986(iParam0, -1303648999))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_145(&iVar2))
		{
			if (bVar1)
			{
				iVar0 = func_987();
			}
			else
			{
				iVar0 = func_988();
			}
		}
		else if (func_717(iParam1, 1))
		{
			iVar0 = 0;
		}
		else if (bVar1)
		{
			iVar0 = func_989();
		}
		else
		{
			iVar0 = func_990();
		}
	}
	else if (func_509(&iVar2))
	{
		if (func_986(iVar2, -1303648999))
		{
			iVar0 = func_987();
		}
		else
		{
			iVar0 = func_988();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_989();
	}
	else
	{
		iVar0 = func_990();
	}
	if (iVar0 != 0)
	{
		Global_1946804->f_2791 = MISC::GET_GAME_TIMER();
		TASK::_TASK_ITEM_INTERACTION(Global_35, iParam0, iVar0, 1, iParam1, -1082130432);
		return 1;
	}
	return 0;
}

int func_513(int iParam0, bool bParam1)
{
	switch (func_991(iParam0))
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

int func_514(int iParam0)
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

bool func_515(var uParam0)
{
	return (Global_1946804->f_2657.f_26.f_6 && uParam0) != 0;
}

int func_516(bool bParam0)
{
	if (func_56() == -1)
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

int func_517(int iParam0)
{
	struct<2> Var0;

	if (!func_983(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

void func_518(var uParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 || uParam0);
}

void func_519(var uParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 - (Global_1946804->f_2657.f_26.f_6 && uParam0));
}

struct<16> func_520(float fParam0, float fParam1, float fParam2)
{
	char cVar0[128];
	struct<2> Var16;

	Var16 = { func_992(fParam0) };
	MemCopy(&cVar0, {Var16}, 16);
	StringConCat(&cVar0, "~BLIP_SUPPLY_ICON_HEALTH~", 128);
	Var16 = { func_992(fParam1) };
	StringConCat(&cVar0, &Var16, 128);
	StringConCat(&cVar0, "~BLIP_SUPPLY_ICON_AMMO~", 128);
	Var16 = { func_992(fParam2) };
	StringConCat(&cVar0, &Var16, 128);
	StringConCat(&cVar0, "~BLIP_SUPPLY_ICON_FOOD~", 128);
	return cVar0;
}

void func_521(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iParam0) / 100f));
	*uParam2 = (iParam0 % 100);
}

int func_522(var uParam0, int iParam1, int iParam2, int iParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	if (!func_344(Global_35, 0))
	{
		return 0;
	}
	bVar2 = ((func_12(4) || Global_1357549->f_1614) || iParam3);
	if (bVar2)
	{
		if (VOLUME::_0x666C2F53ABEFC952(iParam1) == 1030835986)
		{
			VOLUME::_0xFD010A2154B40676(iParam1, 623901053);
			VOLUME::_0xFD010A2154B40676(iParam2, 623901053);
		}
		PED::SET_PED_RESET_FLAG(Global_35, 154, true);
		if (func_12(8388608))
		{
			func_373(0);
		}
		if (func_38(2097152) && PED::GET_PED_CONFIG_FLAG(Global_35, 334, true))
		{
			PED::SET_PED_CONFIG_FLAG(Global_35, 334, false);
			func_50(2097152);
		}
		return 0;
	}
	bVar1 = VOLUME::_0xF256A75210C5C0EB(iParam1, Global_36);
	if (bVar1 && !bVar2)
	{
		bVar0 = PED::IS_PED_IN_MELEE_COMBAT(Global_35);
		if (!bVar0)
		{
			PAD::DISABLE_CONTROL_ACTION(0, -1292666904, false);
		}
		PAD::DISABLE_CONTROL_ACTION(0, 42190210, false);
		PAD::DISABLE_CONTROL_ACTION(0, -562475458, false);
		if (!func_527(1))
		{
			PAD::DISABLE_CONTROL_ACTION(0, -620139643, false);
			if (PED::_0xD5FE956C70FF370B(Global_35))
			{
				PED::_0x7DE9692C6F64CFE8(Global_35, false, 0, 0);
			}
		}
		PAD::DISABLE_CONTROL_ACTION(0, 440314811, false);
		PAD::DISABLE_CONTROL_ACTION(0, 2028806450, false);
		PAD::DISABLE_CONTROL_ACTION(0, 371916472, false);
		if (!PED::GET_PED_CONFIG_FLAG(Global_35, 334, true))
		{
			PED::SET_PED_CONFIG_FLAG(Global_35, 334, true);
			func_167(2097152);
		}
		PED::SET_PED_RESET_FLAG(Global_35, 268, true);
		PED::SET_PED_RESET_FLAG(Global_35, 179, true);
		PED::SET_PED_RESET_FLAG(Global_35, 241, true);
		PED::SET_PED_RESET_FLAG(Global_35, 260, true);
		PED::SET_PED_RESET_FLAG(Global_35, 27, true);
		PED::SET_PED_RESET_FLAG(Global_35, 198, true);
		switch (Global_1935630->f_44)
		{
			case joaat("weapon_unarmed"):
				if (VOLUME::_0x666C2F53ABEFC952(iParam1) != 1030835986)
				{
					VOLUME::_0xFD010A2154B40676(iParam1, 1030835986);
					VOLUME::_0xFD010A2154B40676(iParam2, 1030835986);
				}
				iVar4 = func_220(Global_35, 1, 1, 0);
				if (((!func_12(536870912) && !func_38(4)) && iVar4 != 0) && iVar4 != joaat("weapon_unarmed"))
				{
					WEAPON::_0xFCCC886EDE3C63EC(Global_35, 2, 0);
				}
				break;
			case joaat("weapon_fishingrod"):
			case joaat("weapon_kit_camera"):
			case joaat("weapon_melee_lantern"):
			case joaat("weapon_kit_binoculars"):
			case joaat("weapon_melee_lantern_electric"):
			case 1030402560:
			case joaat("weapon_melee_davy_lantern"):
			case 1549070292:
				bVar3 = true;
				if (VOLUME::_0x666C2F53ABEFC952(iParam1) == 1030835986)
				{
					VOLUME::_0xFD010A2154B40676(iParam1, 623901053);
					VOLUME::_0xFD010A2154B40676(iParam2, 623901053);
				}
				break;
			default:
				if (!func_12(536870912) && !func_38(4))
				{
					WEAPON::_0xFCCC886EDE3C63EC(Global_35, 2, 0);
				}
				if (VOLUME::_0x666C2F53ABEFC952(iParam1) != 1030835986)
				{
					VOLUME::_0xFD010A2154B40676(iParam1, 1030835986);
					VOLUME::_0xFD010A2154B40676(iParam2, 1030835986);
				}
				break;
		}
		if (!bVar3)
		{
			PAD::DISABLE_CONTROL_ACTION(0, -1304887797, false);
			PAD::DISABLE_CONTROL_ACTION(0, -128997553, false);
			PAD::DISABLE_CONTROL_ACTION(0, 130948705, false);
		}
		if (!func_12(8388608))
		{
			func_373(1);
		}
		if (bVar1)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 288, true);
			PED::SET_PED_RESET_FLAG(Global_35, 2, true);
			if (uParam0->f_45 != 8 && uParam0->f_45 != 7)
			{
				iVar5 = PED::GET_MOUNT(Global_35);
				if (ENTITY::DOES_ENTITY_EXIST(iVar5))
				{
					PED::SET_PED_RESET_FLAG(iVar5, 223, true);
					PED::SET_PED_RESET_FLAG(Global_35, 287, true);
				}
			}
		}
	}
	else
	{
		if (func_12(8388608))
		{
			func_373(0);
		}
		if (PED::GET_PED_CONFIG_FLAG(Global_35, 334, true))
		{
			func_50(2097152);
			PED::SET_PED_CONFIG_FLAG(Global_35, 334, false);
		}
		if (VOLUME::_0x666C2F53ABEFC952(iParam1) != 1030835986)
		{
			VOLUME::_0xFD010A2154B40676(iParam1, 1030835986);
			VOLUME::_0xFD010A2154B40676(iParam2, 1030835986);
		}
	}
	if (func_12(2) || bVar2)
	{
		PED::SET_PED_RESET_FLAG(Global_35, 154, true);
	}
	if ((!bVar2 && !bVar3) && func_769(Global_35, 1, 0, 0) != joaat("weapon_unarmed"))
	{
		if (PAD::IS_DISABLED_CONTROL_PRESSED(0, 130948705))
		{
			if (func_149())
			{
				if (!func_207(556))
				{
					func_209(556, 0);
				}
			}
			else if (!func_207(555))
			{
				func_209(555, 0);
			}
		}
	}
	return 1;
}

void func_523(int iParam0)
{
	int iVar0;
	int iVar1[2];
	int iVar4;
	bool bVar5;

	iVar1[0] = 0;
	iVar1[1] = 1;
	iVar4 = 0;
	while (iVar4 < iVar1)
	{
		iVar0 = func_377(&(iVar1[iVar4]));
		if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
		{
		}
		else if (PED::_0xB676EFDA03DADA52(iVar0, 0) != 0)
		{
		}
		else if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
		{
		}
		else if (!VOLUME::_0xF256A75210C5C0EB(iParam0, ENTITY::GET_ENTITY_COORDS(iVar0, true, false)))
		{
		}
		else
		{
			bVar5 = (func_12(4) || Global_1357549->f_1614);
			if (func_12(2) || bVar5)
			{
				PED::SET_PED_RESET_FLAG(iVar0, 154, true);
			}
		}
		iVar4++;
	}
}

void func_524(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;

	switch (uParam0->f_3483.f_1)
	{
		case 0:
			if (func_993(&(uParam0->f_3483)))
			{
				func_994(uParam0, 1);
			}
			break;
		case 1:
			if (!PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) || !VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_3483, 0, 0))
			{
				uParam0->f_3483 = 0;
				func_994(uParam0, 0);
			}
			else
			{
				if (((!func_12(2) && VOLUME::_0x92A78D0BEDB332A3(&(Global_1357549->f_3[4]))) && ENTITY::IS_ENTITY_IN_VOLUME(uParam0->f_3483, &(Global_1357549->f_3[4]), true, 0)) && PED::IS_PED_HEADING_TOWARDS_POSITION(Global_35, VOLUME::_0xF70F00013A62F866(&(Global_1357549->f_3[4])), 75f))
				{
					func_994(uParam0, 2);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256, 0);
				}
				Jump @404; //curOff = 212
				if (func_995(1, 1084227584, 1, 1056964608))
				{
					if (!func_477(func_476(44)))
					{
						func_209(534, 0);
					}
					TASK::TASK_LEAVE_VEHICLE(Global_35, uParam0->f_3483, 0, 0);
					func_994(uParam0, 3);
				}
				Jump @404; //curOff = 277
				if (!PED::IS_PED_IN_VEHICLE(Global_35, uParam0->f_3483, false))
				{
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(uParam0->f_3483, false);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (&uParam0->f_3483.f_2[iVar0] == 0)
						{
							uParam0->f_3483.f_2[iVar0] = uParam0->f_3483;
							uParam0->f_3483.f_6[iVar0] = MISC::GET_GAME_TIMER() + 30000;
						}
						else
						{
							if (iVar0 == 2)
							{
							}
							iVar0++;
						}
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
					func_994(uParam0, 0);
				}
			}
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (&uParam0->f_3483.f_2[iVar0] != 0)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_3483.f_2[iVar0])) || !VEHICLE::IS_VEHICLE_DRIVEABLE(&(uParam0->f_3483.f_2[iVar0]), 0, 0))
					{
						uParam0->f_3483.f_2[iVar0] = 0;
					}
					else if (MISC::GET_GAME_TIMER() > &uParam0->f_3483.f_6[iVar0])
					{
						vVar1 = { ENTITY::GET_ENTITY_COORDS(&(uParam0->f_3483.f_2[iVar0]), false, false) };
						if (BUILTIN::VDIST(Global_36, vVar1) > 80f && !CAM::IS_SPHERE_VISIBLE(vVar1, 10f))
						{
							fVar4 = ENTITY::GET_ENTITY_HEADING(&(uParam0->f_3483.f_2[iVar0]));
							ENTITY::SET_ENTITY_HEADING(&(uParam0->f_3483.f_2[iVar0]), (fVar4 + 180f));
							VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(&(uParam0->f_3483.f_2[iVar0]), true);
							uParam0->f_3483.f_2[iVar0] = 0;
							uParam0->f_3483.f_6[iVar0] = 0;
						}
					}
				}
				iVar0++;
			}
		}

void func_525(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;

	fVar0 = 2.5f;
	if (func_38(512) && !func_12(2))
	{
		fVar0 = 1.25f;
	}
	if (func_993(&(uParam0->f_3483)))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3483) && VEHICLE::_0xEA44E97849E9F3DD(uParam0->f_3483))
		{
			iVar1 = 0;
			while (iVar1 < 6)
			{
				iVar2 = VEHICLE::_0xA8BA0BAE0173457B(uParam0->f_3483, iVar1);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar2, fVar0);
					VEHICLE::_0x0C3F0F7F92CA847C(uParam0->f_3483, PED::_0x46BF2A810679D6E6(iVar2, fVar0));
				}
				iVar1++;
			}
		}
	}
}

void func_526(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				if (!func_12(65536))
				{
					func_147(65536);
				}
			}
			else if (func_12(65536))
			{
				func_144(65536);
			}
			break;
		case 1:
			if (bParam1)
			{
				if (!func_12(131072))
				{
					func_147(131072);
				}
			}
			else if (func_12(131072))
			{
				func_144(131072);
			}
			break;
	}
}

int func_527(int iParam0)
{
	switch (func_56())
	{
		case -1:
			return (Global_1357549->f_1496 && iParam0) != 0;
	}
	return 0;
}

int func_528(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return VOLUME::_CREATE_VOLUME_BOX(653.589f, -1253.396f, 44.461f, 0f, 0f, -54.05f, 3.85f, 4.6f, 5.7f);
		case 1:
			return VOLUME::_CREATE_VOLUME_BOX(660.721f, -1257.044f, 43.797f, 0f, 0f, -14.4f, 2.15f, 3.1f, 5.7f);
	}
	return 0;
}

int func_529(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return VOLUME::_CREATE_VOLUME_BOX(-131.488f, -31.805f, 96.082f, 0f, 0f, -4.35f, 3.9f, 3.45f, 1.9f);
		case 1:
			return VOLUME::_CREATE_VOLUME_BOX(-117.938f, -36.055f, 95.882f, 0f, 0f, -31.4f, 3.65f, 3f, 2.5f);
	}
	return 0;
}

int func_530(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return VOLUME::_CREATE_VOLUME_BOX(2359.789f, 1376.458f, 106.883f, 0f, 0f, -26.9f, 4f, 4.35f, 2.7f);
		case 1:
			return VOLUME::_CREATE_VOLUME_BOX(2343.321f, 1350.422f, 106.762f, 0f, 3.9f, 27.75f, 3.9f, 2.6f, 2.95f);
	}
	return 0;
}

int func_531(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return VOLUME::_CREATE_VOLUME_BOX(1895.776f, -1858.61f, 47.535f, 0f, 0f, -38.85f, 6.3f, 9.9f, 3.55f);
		case 1:
			return VOLUME::_CREATE_VOLUME_BOX(1897.918f, -1870.142f, 48.126f, 0f, 0f, -38.85f, 6.05f, 7.35f, 3.55f);
	}
	return 0;
}

int func_532()
{
	if (SCRIPTS::IS_THREAD_ACTIVE(((*Global_1347702)[66 /*49*/])->f_42, false) && !func_996(((*Global_1347702)[66 /*49*/])->f_13, 4))
	{
		return 1;
	}
	return 0;
}

bool func_533(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_534(var uParam0)
{
	return func_533(*uParam0, 2);
}

float func_535()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_536(int iParam0)
{
	return iParam0 > -1;
}

bool func_537(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_536(iParam0))
		{
			return false;
		}
	}
	func_924(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0]), iVar1);
}

int func_538(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_536(iParam0))
	{
		return 0;
	}
	if (func_416(iParam0, 32, 1))
	{
		return 0;
	}
	if (!func_416(iParam0, 2, 1))
	{
		return 0;
	}
	if (!func_416(iParam0, 4, 1))
	{
		return 0;
	}
	if (func_537(iParam0, 33, 1))
	{
		return 0;
	}
	if (func_357(iParam0))
	{
		return 0;
	}
	if (func_912(iParam0))
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

var func_539(var uParam0, var uParam1)
{
	return AUDIO::_PLAY_AMBIENT_SPEECH1(uParam0, uParam1);
}

void func_540(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_536(iParam0))
		{
			return;
		}
	}
	func_924(iParam1, &iVar0, &iVar1);
	MISC::SET_BIT(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0], iVar1);
}

void func_541(int iParam0, bool bParam1, char* sParam2)
{
	int iVar0;

	iVar0 = func_179(iParam0);
	if (!func_503(iParam0) || ENTITY::IS_ENTITY_DEAD(iVar0))
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

void func_542(int iParam0, int iParam1)
{
	if (!func_536(iParam0))
	{
		return;
	}
	((*Global_1360165)[iParam0 /*1157*/])->f_11 = iParam1;
}

int func_543(int iParam0, vector3 vParam1, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	if (!func_536(iParam0))
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
					iParam4 = func_997(iParam0, iParam9, bParam7, 1);
				}
				else if ((((*Global_1360165)[iParam0 /*1157*/])->f_4.f_2 != 0 && ((*Global_1360165)[iParam0 /*1157*/])->f_4.f_2 == (Global_40.f_4942[iParam0 /*60*/])->f_59) && (func_477(((*Global_1360165)[iParam0 /*1157*/])->f_4.f_2) || func_676(((*Global_1360165)[iParam0 /*1157*/])->f_4.f_2)))
				{
					iParam4 = ((*Global_1360165)[iParam0 /*1157*/])->f_4.f_1;
				}
				else
				{
					iParam4 = func_997(iParam0, Global_40.f_4283, bParam7, 1);
				}
				if (((*Global_1360165)[iParam0 /*1157*/])->f_63 != iParam4 && func_998(((*Global_1360165)[iParam0 /*1157*/])->f_63))
				{
					if (!func_678(iParam0, 0))
					{
						func_540(iParam0, 25, 0);
					}
				}
			}
			((*Global_1360165)[iParam0 /*1157*/])->f_4 = { func_999(iParam0, iParam4, vParam1, bParam5, bParam6, bParam8, (Global_40.f_4942[iParam0 /*60*/])->f_59, bParam11) };
			if (!bParam6)
			{
				func_430(iParam0, 44, 1);
			}
			((*Global_1360165)[iParam0 /*1157*/])->f_3 = 2;
		case 2:
			if (!func_344(func_179(iParam0), 0))
			{
				return 0;
			}
			if (bParam5 && iParam10)
			{
				if (!func_344(func_138(iParam0), 0))
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

void func_544(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_536(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_430(iParam0, 50, 1);
		func_430(iParam0, 48, 1);
		func_430(iParam0, 49, 1);
		func_430(iParam0, 51, 1);
		func_430(iParam0, 52, 1);
		func_430(iParam0, 54, 1);
		func_430(iParam0, 55, 1);
	}
	else
	{
		func_540(iParam0, 50, 1);
		func_540(iParam0, 48, 1);
		func_540(iParam0, 49, 1);
		func_540(iParam0, 51, 1);
		if (bParam3)
		{
			func_540(iParam0, 54, 1);
		}
		else
		{
			func_430(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_540(iParam0, 52, 1);
			if (bParam3)
			{
				func_540(iParam0, 55, 1);
			}
		}
		else
		{
			func_430(iParam0, 52, 1);
			if (!bParam3)
			{
				func_430(iParam0, 55, 1);
			}
		}
	}
}

void func_545(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_503(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_1000(iParam0, bParam3);
	}
	else
	{
		func_1001(iParam0, bParam3);
	}
	if (bParam2)
	{
		func_1002(iParam0, bParam3);
	}
	else
	{
		func_1003(iParam0, bParam3);
	}
}

void func_546(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == func_1004(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (func_1005(iParam0))
	{
		if (func_229(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			PHYSICS::_0x0348469DAA17576C(iParam0);
		}
	}
	if (func_717(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_546(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_546(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_717(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 0, 1);
		}
	}
	if (func_717(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			ENTITY::_0x203BEFFDBE12E96A(iParam0, vParam1, fParam4, 1, func_717(iParam5, 32), 1);
		}
		else
		{
			ENTITY::_0x203BEFFDBE12E96A(iParam0, vParam1, fParam4, 1, func_717(iParam5, 32), 1);
			ENTITY::_0x9587913B9E772D29(iParam0, 0);
		}
	}
	else if (func_717(iParam5, 129))
	{
		if (func_717(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0, vParam1, func_717(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
	}
	else
	{
		ENTITY::_0x203BEFFDBE12E96A(iParam0, vParam1, fParam4, 1, func_717(iParam5, 32), 1);
	}
	if (bVar4)
	{
		if (!func_717(iParam5, 16))
		{
			PED::_0x7DE9692C6F64CFE8(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3, 0, 0);
		}
		if (func_1005(iParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PHYSICS::_0x0348469DAA17576C(iVar6);
			if (!func_717(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, 1, 0);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PACKAGE_INDEX(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 1);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0) == Global_35 && !func_717(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
}

int func_547(int iParam0, int iParam1)
{
	var uVar0;

	if (!func_503(iParam0))
	{
		return 0;
	}
	if (iParam1 == 296923297 || iParam1 == 1237718549)
	{
		return 1;
	}
	uVar0 = func_1006(iParam0, iParam1);
	return uVar0;
}

void func_548(int iParam0, int iParam1, bool bParam2)
{
	if (!func_503(iParam0))
	{
		return;
	}
	if (!func_547(iParam0, iParam1))
	{
		return;
	}
	(Global_40.f_4942[iParam0 /*60*/])->f_3 = iParam1;
	if (bParam2)
	{
		func_540(iParam0, 25, 1);
	}
}

void func_549(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (func_1007(iParam2))
		{
			iVar0 = func_1008(iParam2, -1);
			if (func_1009(iParam1, iVar0))
			{
				if (func_1010(iParam1, iVar0))
				{
					if (func_1011(iParam1, iVar0))
					{
						PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam1, "metaped_outfit_request"), iParam1, true, false);
						func_1012(iParam1);
					}
				}
				else
				{
					PED::_0x1902C4CFCC5BE57C(iParam1, iVar0);
				}
			}
		}
		func_1013(iParam0, iParam1, 0);
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
			func_540(iParam0, 66, 0);
		}
	}
}

void func_550(int iParam0)
{
	func_1014(iParam0);
	func_1015(iParam0, 0);
}

void func_551(int iParam0, int iParam1)
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

void func_552(int iParam0, int iParam1, bool bParam2)
{
	if (!func_536(iParam0))
	{
		return;
	}
	func_1016(&(((*Global_1360165)[iParam0 /*1157*/])->f_13), iParam1, bParam2);
}

void func_553(int iParam0)
{
	func_540(iParam0, 36, 1);
}

int func_554(int iParam0)
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

void func_555(int iParam0, int iParam1)
{
	if (!func_536(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 11:
			if ((Global_40.f_4942[iParam0 /*60*/])->f_3 == -1341683964)
			{
				func_1017(iParam1, joaat("weapon_revolver_cattleman_sadie"), 0, 0, 2, 1, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
				func_1017(iParam1, joaat("weapon_revolver_cattleman_sadie_dualwield"), 0, 0, 3, 1, 1, 1056964608, 1065353216, -1, 0, 1, 0, 0);
			}
			break;
	}
}

void func_556(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_503(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (Global_40.f_4942[iParam0 /*60*/] || iParam1);
}

void func_557(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;

	switch (func_148())
	{
		case 2:
			if (iParam0 == 0)
			{
				vVar0 = { 655.5186f, -1252.901f, 42.8413f };
				vVar3 = { 0f, 0f, 143.2273f };
			}
			if (iParam0 == 1)
			{
				vVar0 = { 660.9746f, -1255.074f, 42.7057f };
				vVar3 = { 0f, 0f, 177.9986f };
			}
			break;
		case 1:
			if (iParam0 == 0)
			{
				vVar0 = { -129.2241f, -32.6858f, 95.083f };
				vVar3 = { 0f, 0f, 87.1887f };
			}
			if (iParam0 == 1)
			{
				vVar0 = { -120.3756f, -35.1044f, 94.7365f };
				vVar3 = { 0f, 0f, 233.7959f };
			}
			break;
		case 6:
			if (iParam0 == 0)
			{
				vVar0 = { 2358.067f, 1375.013f, 105.5566f };
				vVar3 = { 0f, 0f, 328.4377f };
			}
			if (iParam0 == 1)
			{
				vVar0 = { 2344.865f, 1351.729f, 105.1657f };
				vVar3 = { 0f, 0f, 138.0917f };
			}
			break;
		case 3:
			if (iParam0 == 0)
			{
				vVar0 = { 1892.641f, -1862.309f, 46.3347f };
				vVar3 = { 0f, 0f, 333.8364f };
			}
			if (iParam0 == 1)
			{
				vVar0 = { 1902.226f, -1868.772f, 46.3492f };
				vVar3 = { 0f, 0f, 148.4403f };
			}
			break;
	}
	vVar0.f_2 = (vVar0.z + 0.25f);
	MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &(vVar0.f_2), 0);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Global_1357549->f_1669, vVar0, vVar3, 2);
}

void func_558(int iParam0)
{
	if (func_148() == 3 && iParam0 == 1)
	{
		func_1018(1163459288, 0, 0);
		func_1019(1163459288, 0, -1f, 0, 1, 0.4f, 1, 0);
	}
	if (func_148() == 3 && iParam0 == 0)
	{
		func_1018(58833085, 0, 0);
		func_1018(-629053815, 0, 0);
		func_1019(58833085, 0, 1f, 0, 1, 0.4f, 1, 0);
		func_1019(-629053815, 0, -1f, 0, 1, 0.4f, 1, 0);
	}
}

void func_559(int iParam0, bool bParam1)
{
	if (!func_536(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_932(&(((*Global_1360165)[iParam0 /*1157*/])->f_12), 1))
		{
			func_552(iParam0, 1, 0);
		}
	}
	func_552(iParam0, 16, bParam1);
}

void func_560(int iParam0)
{
	func_552(iParam0, 8, 0);
}

int func_561(int iParam0, bool bParam1)
{
	if (!func_503(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_NAMESPACE48::_0x800DF3FC913355F3(((*Global_1360165)[iParam0 /*1157*/])->f_1))
		{
			func_1020(iParam0);
		}
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_1;
}

void func_562(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (func_503(iParam0))
	{
		iVar1 = func_179(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			iVar0 = PED::GET_PED_MAX_HEALTH(iVar1);
			PED::SET_PED_CONFIG_FLAG(iVar1, 179, true);
			func_1021(iParam0);
		}
	}
	if (func_537(iParam0, 5, 1))
	{
		PED::SET_PED_CONFIG_FLAG(func_179(iParam0), 137, true);
	}
}

void func_563(int iParam0, bool bParam1)
{
	if (!func_536(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(func_179(iParam0), 204, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(func_179(iParam0), 204, false);
	}
}

void func_564(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	var uVar0;
	int iVar1;

	if (!func_503(iParam0))
	{
		return;
	}
	if (func_357(iParam0))
	{
		if (!func_184(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_537(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	uVar0 = func_561(iParam0, 0);
	if (!MISC::_0x716F17F8A0419F95(uVar0))
	{
		return;
	}
	iVar1 = func_179(iParam0);
	if (((ENTITY::DOES_ENTITY_EXIST(iVar1) && func_1022(iParam0) < 10000f) && !bParam3) && !CAM::IS_SCREEN_FADED_OUT())
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
		func_540(iParam0, 2, 1);
	}
	else
	{
		func_1023(iParam0);
		func_540(iParam0, 1, 1);
	}
}

void func_565(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_503(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (&Global_40.f_4942[iParam0 /*60*/] - (Global_40.f_4942[iParam0 /*60*/] && iParam1));
}

void func_566(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (!func_536(iParam1))
	{
		return;
	}
	iVar0 = func_138(iParam1);
	if (func_504(iParam1))
	{
		if (!func_1024(iParam1))
		{
			return;
		}
	}
	func_430(iParam1, 39, 1);
	func_1025(iParam1, 64, 0);
	((*Global_1360165)[iParam1 /*1157*/])->f_70.f_11 = 0;
	func_1025(iParam1, 8, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!bParam2)
		{
			func_1025(iParam1, 512, 1);
			PED::SET_PED_KEEP_TASK(iVar0, true);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			func_540(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_1026(iParam1, 0, 1, 1, 1);
		}
	}
}

void func_567(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_535() - fParam1);
	func_1027(uParam0, 1);
	func_1028(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_568()
{
	return func_692(32);
}

void func_569(int iParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	float fVar12;

	fVar0 = 2f;
	iVar1 = 20;
	iVar2 = 0;
	iVar3 = 5;
	iVar4 = CLOCK::GET_CLOCK_HOURS();
	iVar5 = CLOCK::GET_CLOCK_MINUTES();
	func_1029(iParam0, &iVar7, &iVar8, &iVar9, &iVar10);
	if (func_234(180573150, 1) || func_234(-404697685, 1))
	{
		func_1030(iParam0, &iVar7, &iVar8, &iVar9, &iVar10);
	}
	else if (func_234(1305416676, 1))
	{
		func_1031(iParam0, &iVar7, &iVar8, &iVar9, &iVar10);
	}
	else if (func_234(-1837343824, 1))
	{
		func_1032(iParam0, &iVar7, &iVar8, &iVar9, &iVar10);
	}
	if (((func_891(22) || func_892(22)) || func_891(23)) || func_892(23))
	{
		if (((((iParam0 == 26 || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 31)
		{
			iVar9 = 6;
			iVar10 = 0;
		}
	}
	if (iVar7 < iVar9)
	{
		bVar6 = func_1033(iVar7, iVar8, iVar9, iVar10);
	}
	else if (iVar9 < iVar7)
	{
		bVar6 = func_1034(iVar7, iVar8, iVar9, iVar10);
	}
	else
	{
		bVar6 = func_1035(iVar7, iVar8, iVar9, iVar10);
	}
	if (iVar1 == iVar4)
	{
		if (iVar5 < iVar2)
		{
			bVar6 = false;
		}
	}
	if (iVar4 < iVar1 && iVar4 > iVar3)
	{
		bVar6 = false;
	}
	iVar11 = (Global_1357549->f_12[iParam0 /*14*/])->f_8;
	if (OBJECT::_0xFA3B61EC249B4674(iVar11) > 0f)
	{
		if (CLOCK::GET_CLOCK_HOURS() <= 20 && CLOCK::GET_CLOCK_HOURS() >= 7)
		{
			OBJECT::_0xF49574E2332A8F06(iVar11, 0f);
			ENTITY::_0x56E0735D6273B227(iVar11, 1);
		}
	}
	if (bVar6)
	{
		ENTITY::_0x56E0735D6273B227(iVar11, 0);
		if (OBJECT::_0xFA3B61EC249B4674(iVar11) < 1f)
		{
			if ((Global_1357549->f_12[iParam0 /*14*/])->f_9 == 1)
			{
				fVar12 = (func_176(&((Global_1357549->f_12[iParam0 /*14*/])->f_11)) / fVar0);
				if (fVar12 > 1f)
				{
					fVar12 = 1f;
				}
				OBJECT::_0xF49574E2332A8F06(iVar11, fVar12);
				func_1036(iVar11, fVar12);
				if (MISC::ABSF((OBJECT::_0xFA3B61EC249B4674(iVar11) - 1f)) < 0.005f)
				{
					OBJECT::_0xF49574E2332A8F06(iVar11, 1f);
				}
			}
			else
			{
				(Global_1357549->f_12[iParam0 /*14*/])->f_9 = 1;
				func_182(&((Global_1357549->f_12[iParam0 /*14*/])->f_11), 0);
			}
		}
		else if ((Global_1357549->f_12[iParam0 /*14*/])->f_9 == 1)
		{
			(Global_1357549->f_12[iParam0 /*14*/])->f_9 = 0;
			func_183(&((Global_1357549->f_12[iParam0 /*14*/])->f_11));
			OBJECT::_0xF49574E2332A8F06(iVar11, 1f);
			func_1036(iVar11, 1f);
		}
	}
	else if (OBJECT::_0xFA3B61EC249B4674(iVar11) > (Global_1357549->f_12[iParam0 /*14*/])->f_6)
	{
		if ((Global_1357549->f_12[iParam0 /*14*/])->f_9 == 1)
		{
			fVar12 = (1f - (func_176(&((Global_1357549->f_12[iParam0 /*14*/])->f_11)) / fVar0));
			if (fVar12 < 0f)
			{
				fVar12 = 0f;
			}
			OBJECT::_0xF49574E2332A8F06(iVar11, fVar12);
			func_1036(iVar11, fVar12);
			if (MISC::ABSF((OBJECT::_0xFA3B61EC249B4674(iVar11) - (Global_1357549->f_12[iParam0 /*14*/])->f_6)) < 0.005f)
			{
				OBJECT::_0xF49574E2332A8F06(iVar11, (Global_1357549->f_12[iParam0 /*14*/])->f_6);
			}
		}
		else
		{
			(Global_1357549->f_12[iParam0 /*14*/])->f_9 = 1;
			func_182(&((Global_1357549->f_12[iParam0 /*14*/])->f_11), 0);
		}
	}
	else if ((Global_1357549->f_12[iParam0 /*14*/])->f_9 == 1)
	{
		(Global_1357549->f_12[iParam0 /*14*/])->f_9 = 0;
		func_183(&((Global_1357549->f_12[iParam0 /*14*/])->f_11));
		ENTITY::_0x56E0735D6273B227(iVar11, 1);
		OBJECT::_0xF49574E2332A8F06(iVar11, (Global_1357549->f_12[iParam0 /*14*/])->f_6);
		func_1036(iVar11, (Global_1357549->f_12[iParam0 /*14*/])->f_6);
	}
}

char* func_570(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "HIDEOUT_HORSESHOE_OVERLOOK";
		case 2:
			return "HIDEOUT_CLEMENS_POINT";
		case 3:
			return "HIDEOUT_SHADY_BELLE";
		default:
			break;
	}
	return "";
}

char* func_571(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_1037(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

var func_572(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<4> Var0;
	vector3 vVar13;
	var uVar16;

	Var0 = -2;
	Var0 = iParam2;
	Var0.f_1 = iParam3;
	Var0.f_2 = iParam4;
	Var0.f_3 = iParam5;
	vVar13.f_1 = sParam0;
	vVar13.f_2 = sParam1;
	uVar16 = _NAMESPACE71::_0xD05590C1AB38F068(&Var0, &vVar13, iParam6, iParam7);
	return uVar16;
}

int func_573()
{
	return &Global_1899515;
}

bool func_574()
{
	return func_384(10, 0) >= 4;
}

void func_575(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_1038(*iParam0);
	iVar1 = func_1039(*iParam0);
	iVar2 = func_1040(*iParam0);
	iVar3 = func_656(*iParam0);
	iVar4 = func_657(*iParam0);
	iVar5 = func_1041(*iParam0);
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
	iVar6 = func_1042(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_1042(iVar1, iVar0);
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
	func_1043(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_576(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_578((*uParam0)[iVar0 /*257*/], (*uParam1)[iVar0]))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_577(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			return 1;
		case 3:
			return 0;
		default:
			break;
	}
	return 0;
}

int func_578(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_253)
	{
		if (!MISC::IS_BIT_SET(*uParam1, iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_579(int iParam0, int iParam1)
{
	if (iParam1 == 7)
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(&(Global_1357549->f_3[iParam1])))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, &(Global_1357549->f_3[iParam1]), true, 0);
}

void func_580(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

int func_581(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return 0;
	}
	if (func_1044(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_1045(iParam0))
	{
		return 0;
	}
	if (func_1046(iParam0))
	{
		return 0;
	}
	if ((Global_1898164->f_163 && !func_1047(iParam0, 1)) || func_659(32768))
	{
		if (!func_1047(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return 0;
		}
	}
	if (!func_1048())
	{
		return 0;
	}
	return 1;
}

void func_582(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

int func_583(int iParam0)
{
	return iParam0;
}

void func_584(int iParam0)
{
	if (!func_1049(iParam0))
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

bool func_585(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1) != 0;
}

void func_586(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_722(iParam0, 1);
	func_1050(iParam0, 1);
	func_1051(iParam0, 128);
}

int func_587(char* sParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_585(iVar0, 2))
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
		func_586(iVar1, iParam1, sParam0, 0, 3, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam3, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 0, iParam2, 1704213876, 0);
		return iVar1;
	}
	return 0;
}

bool func_588(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam2 && !func_211(iParam0))
	{
		return false;
	}
	iVar0 = func_583(iParam0);
	return HUD::_UIPROMPT_HAS_STANDARD_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam1);
}

void func_589(int iParam0, int iParam1)
{
	if (CAM::DOES_CAM_EXIST((Local_18.f_3057[iParam0 /*21*/])->f_5))
	{
		if (CAM::IS_CAM_RENDERING((Local_18.f_3057[iParam0 /*21*/])->f_5))
		{
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		}
		CAM::DESTROY_CAM((Local_18.f_3057[iParam0 /*21*/])->f_5, false);
	}
	if (!CAM::DOES_CAM_EXIST((Local_18.f_3057[iParam1 /*21*/])->f_5))
	{
		if (!func_213((Local_18.f_3057[iParam1 /*21*/])->f_9))
		{
			(Local_18.f_3057[iParam1 /*21*/])->f_5 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, (Local_18.f_3057[iParam1 /*21*/])->f_9, (Local_18.f_3057[iParam1 /*21*/])->f_12, (Local_18.f_3057[iParam1 /*21*/])->f_15, false, 2);
		}
	}
	if (CAM::DOES_CAM_EXIST((Local_18.f_3057[iParam1 /*21*/])->f_5))
	{
		if (!CAM::IS_CAM_RENDERING((Local_18.f_3057[iParam1 /*21*/])->f_5))
		{
			CAM::SET_CAM_ACTIVE((Local_18.f_3057[iParam1 /*21*/])->f_5, true);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		}
	}
	(Local_18.f_3057[iParam0 /*21*/])->f_3 = 3;
	(Local_18.f_3057[iParam1 /*21*/])->f_3 = 2;
	if (func_211((Local_18.f_3057[iParam0 /*21*/])->f_2))
	{
		func_212(&((Local_18.f_3057[iParam0 /*21*/])->f_2), 1, 1);
	}
	if (func_211((Local_18.f_3057[iParam0 /*21*/])->f_1))
	{
		func_212(&((Local_18.f_3057[iParam0 /*21*/])->f_1), 1, 1);
	}
	func_221(iParam1);
	func_223(iParam1);
	HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, 1f, 2, 1, 799218720, (Local_18.f_3057[iParam1 /*21*/])->f_20, 0);
}

char* func_590()
{
	return "SHOP_BACK";
}

int func_591(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
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
		if (func_585(iVar0, 2))
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
		func_586(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

int func_592()
{
	if (!func_513(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return 0;
	}
	else if (!func_513(((*Global_1347702)[66 /*49*/])->f_15, 1))
	{
		return 1;
	}
	else if (!func_513(((*Global_1347702)[67 /*49*/])->f_15, 1))
	{
		return 2;
	}
	else if (!func_513(((*Global_1835011)[38 /*74*/])->f_1, 1))
	{
		return 3;
	}
	else if (!func_513(((*Global_1347702)[68 /*49*/])->f_15, 1))
	{
		return 4;
	}
	else if (!func_513(((*Global_1835011)[59 /*74*/])->f_1, 1))
	{
		return 5;
	}
	else if (!func_513(((*Global_1835011)[67 /*74*/])->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

int func_593()
{
	int iVar0;
	int iVar1;
	struct<5> Var2;
	struct<4> Var7;

	iVar0 = func_419();
	iVar1 = func_1052(iVar0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return 0;
	}
	if (!func_983(iVar1, 0))
	{
		return 0;
	}
	if (!func_1053(iVar1))
	{
		return 0;
	}
	Var2 = { func_915(0) };
	Var2.f_4 = -352578118;
	Var7 = { func_1054(iVar1, Var2, Var2.f_4, 0) };
	if (!func_1055(iVar1, &Var7, &Var2, -1, -142743235, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_594(int iParam0)
{
	int iVar0;
	float fVar1;

	iVar0 = 1;
	fVar1 = PED::_0xFD1BA1EEF7985BB8(iParam0, 41611);
	if (fVar1 == 1f)
	{
		iVar0 = 2;
	}
	return iVar0;
}

int func_595(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<5> Var2;
	var uVar7;

	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar1 = func_1052(iVar0);
	if (!func_983(iVar1, 0))
	{
		return 0;
	}
	if (!func_1053(iVar1))
	{
		return 0;
	}
	Var2 = { func_915(0) };
	Var2.f_4 = -352578118;
	if (func_1056(iVar1, &Var2, 1, 0, 0))
	{
		return 0;
	}
	if (!func_1057(iVar1, &uVar7, &Var2, 1, 752097756, 0))
	{
		return 0;
	}
	return 1;
}

bool func_596(int iParam0)
{
	int iVar0;
	int iVar1;

	func_1058(iParam0, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(Global_1357549->f_1866[iVar0]), iVar1);
}

void func_597(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_1327590->f_19547)
	{
		(Global_1327590->f_19547[iParam0 /*5*/])->f_4 = 1;
	}
}

bool func_598(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 35);
}

void func_599(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_600(int iParam0, int iParam1)
{
	if (iParam1 == 11)
	{
		return 101;
	}
	else if (iParam1 == 32)
	{
		return 126;
	}
	else if (iParam1 == 34)
	{
		return 127;
	}
	switch (iParam0)
	{
		case 79:
			switch (iParam1)
			{
				case 0:
					return 128;
				case 6:
					return 130;
				case 27:
					return 131;
				case 26:
					return 129;
				case 19:
					return 59;
				default:
					break;
			}
			break;
		case 38:
			switch (iParam1)
			{
				case 15:
					return 6;
				case 33:
					return 11;
				case 29:
					return 106;
				case 30:
					return 107;
				case 3:
					return 7;
				case 8:
					return 9;
				case 10:
					return 10;
				case 9:
					return 13;
				case 2:
					return 14;
				case 1:
					return 15;
				case 31:
					return 108;
				case 22:
					return 16;
				case 7:
					return 17;
				case 21:
					return 12;
				default:
					break;
			}
			break;
		case 98:
			switch (iParam1)
			{
				case 0:
					return 132;
				case 6:
					return 134;
				case 27:
					return 135;
				case 26:
					return 133;
				case 19:
					return 57;
				default:
					break;
			}
			break;
		case 69:
			switch (iParam1)
			{
				case 4:
					return 18;
				case 3:
					return 19;
				case 2:
					return 20;
				case 1:
					return 21;
				case 31:
					return 105;
				default:
					break;
			}
			break;
		case 71:
			switch (iParam1)
			{
				case 0:
					return 137;
				case 6:
					return 139;
				case 27:
					return 140;
				case 26:
					return 138;
				case 19:
					return 56;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 141;
				case 6:
					return 143;
				case 27:
					return 144;
				case 26:
					return 142;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 17:
					return 22;
				case 31:
					return 118;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 15:
					return 36;
				case 8:
					return 37;
				case 33:
					return 52;
				case 29:
					return 109;
				case 10:
					return 38;
				case 30:
					return 110;
				case 0:
					return 39;
				case 4:
					return 41;
				case 3:
					return 42;
				case 6:
					return 43;
				case 9:
					return 44;
				case 2:
					return 45;
				case 1:
					return 46;
				case 31:
					return 111;
				case 22:
					return 51;
				case 7:
					return 47;
				case 12:
					return 48;
				case 13:
					return 49;
				case 14:
					return 50;
				case 18:
					return 55;
				case 21:
					return 54;
				default:
					break;
			}
			break;
		case 105:
			switch (iParam1)
			{
				case 15:
					return 25;
				case 33:
					return 33;
				case 29:
					return 112;
				case 10:
					return 26;
				case 4:
					return 27;
				case 3:
					return 28;
				case 6:
					return 29;
				case 2:
					return 30;
				case 31:
					return 113;
				case 22:
					return 32;
				case 1:
					return 31;
				default:
					break;
			}
			break;
		case 101:
			switch (iParam1)
			{
				case 9:
					return 35;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 18:
					return 4;
				default:
					break;
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 2:
					return 23;
				case 1:
					return 24;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 145;
				case 26:
					return 146;
				case 6:
					return 147;
				case 27:
					return 148;
				case 19:
					return 58;
				default:
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 29:
					return 114;
				case 33:
					return 66;
				case 10:
					return 60;
				case 3:
					return 61;
				case 20:
					return 62;
				case 9:
					return 63;
				case 31:
					return 115;
				case 22:
					return 64;
				case 2:
					return 65;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 18:
					return 5;
				default:
					break;
			}
			break;
		case 76:
			switch (iParam1)
			{
				case 15:
					return 68;
				case 8:
					return 69;
				case 33:
					return 70;
				case 29:
					return 102;
				case 10:
					return 72;
				case 30:
					return 103;
				case 0:
					return 73;
				case 3:
					return 74;
				case 6:
					return 75;
				case 9:
					return 76;
				case 2:
					return 77;
				case 31:
					return 104;
				case 1:
					return 78;
				case 22:
					return 80;
				case 20:
					return 79;
				default:
					break;
			}
			break;
		case 92:
			switch (iParam1)
			{
				case 30:
					return 116;
				case 4:
					return 82;
				case 2:
					return 86;
				case 1:
					return 85;
				case 31:
					return 117;
				case 9:
					return 84;
				default:
					break;
			}
			break;
		case 78:
			switch (iParam1)
			{
				case 29:
					return 120;
				case 6:
					return 0;
				case 2:
					return 2;
				case 31:
					return 121;
				case 22:
					return 1;
				case 1:
					return 3;
				default:
					break;
			}
			break;
		case 90:
		case 128:
			switch (iParam1)
			{
				case 18:
					return 34;
				default:
					break;
			}
			break;
		case 28:
			switch (iParam1)
			{
				case 2:
					return 89;
				case 1:
					return 88;
				case 3:
					return 87;
				default:
					break;
			}
			break;
		case 65:
			switch (iParam1)
			{
				case 31:
					return 119;
				default:
					break;
			}
			break;
		case 82:
			switch (iParam1)
			{
				case 31:
					return 122;
				default:
					break;
			}
			break;
		case 110:
			switch (iParam1)
			{
				case 31:
					return 124;
				default:
					break;
			}
			break;
		case 115:
			switch (iParam1)
			{
				case 33:
					return 93;
				case 3:
					return 90;
				case 6:
					return 91;
				case 9:
					return 94;
				case 10:
					return 92;
				default:
					break;
			}
			break;
		case 120:
			switch (iParam1)
			{
				case 3:
					return 95;
				case 2:
					return 96;
				default:
					break;
			}
			break;
		case 123:
			switch (iParam1)
			{
				case 4:
					return 98;
				default:
					break;
			}
			break;
		case 117:
			switch (iParam1)
			{
				case 31:
					return 123;
				case 2:
					return 99;
				case 1:
					return 100;
				default:
					break;
			}
			break;
		case 113:
			switch (iParam1)
			{
				case 18:
					return 67;
				default:
					break;
			}
			break;
		case 127:
			switch (iParam1)
			{
				case 4:
					return 125;
				default:
					break;
			}
			break;
	}
	return -1;
}

Vector3 func_601(int iParam0)
{
	if (!func_1059(iParam0))
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return 2947.055f, 1320.15f, 43.8203f;
		case 2:
			return 2939.063f, 1287.116f, 43.6529f;
		case 3:
			return 2932.97f, 1282.56f, 43.67f;
		case 1:
			return 2947.64f, 1344.901f, 43.899f;
		case 99:
			return -5227.357f, -3470.067f, -20.49293f;
		case 100:
			return -5228.75f, -3468.28f, -21.57f;
		case 7:
			return -784.49f, -1321.95f, 42.88f;
		case 10:
			return -753.4219f, -1284.24f, 43.20049f;
		case 9:
			return -814.4116f, -1367.243f, 43.7509f;
		case 13:
			return -868.3356f, -1366.207f, 44.75311f;
		case 14:
			return -875.03f, -1327.09f, 42.97f;
		case 15:
			return -875.02f, -1326.71f, 42.97f;
		case 17:
			return -762.0716f, -1293.549f, 42.8355f;
		case 12:
			return -813.6f, -1373.8f, 44.2f;
		case 16:
			return -805.72f, -1330.5f, 42.67f;
		case 18:
			return 1417.288f, 273.5687f, 88.4881f;
		case 20:
			return 1521.91f, 441.15f, 89.68f;
		case 21:
			return 1523.63f, 442.65f, 89.68f;
		case 22:
			return 2161.5f, -618.5f, 43f;
		case 23:
			return -1092.88f, -575.69f, 81.41f;
		case 24:
			return -1094.35f, -577.48f, 81.41f;
		case 25:
			return 1294.084f, -1303.102f, 76.0418f;
		case 26:
			return 1297.423f, -1278.412f, 75.65752f;
		case 27:
			return 1319.43f, -1142.08f, 81.41f;
		case 28:
			return 1329.755f, -1294.218f, 76.0092f;
		case 29:
			return 1323.734f, -1321.775f, 77.8924f;
		case 30:
			return 1226.71f, -1295.08f, 75.9f;
		case 31:
			return 1230.34f, -1298.578f, 75.9027f;
		case 32:
			return 1332.55f, -1298.679f, 75.35602f;
		case 35:
			return 1209.053f, -193.1814f, 101.9785f;
		case 36:
			return 2644.188f, -1292.507f, 51.2496f;
		case 37:
			return 2657.466f, -1180.96f, 53.2785f;
		case 38:
			return 2819.495f, -1331.29f, 45.514f;
		case 39:
			return 2721.24f, -1231.66f, 49.37f;
		case 41:
			return 2859.51f, -1202.16f, 48.59f;
		case 42:
			return 2825.607f, -1318.207f, 45.7557f;
		case 43:
			return 2718f, -1287f, 49.6f;
		case 44:
			return 2508.212f, -1449.654f, 48.41523f;
		case 45:
			return 2748.811f, -1398.277f, 45.18309f;
		case 46:
			return 2747.824f, -1396.384f, 45.18309f;
		case 47:
			return 2555.09f, -1166.97f, 52.68f;
		case 48:
			return 2842.45f, -1227.66f, 46.66f;
		case 49:
			return 2817.64f, -1325.011f, 47.00512f;
		case 50:
			return 2836.992f, -1305.805f, 45.6964f;
		case 55:
			return 2832.02f, -1225.563f, 46.6422f;
		case 54:
			return 2734.174f, -1119.755f, 50.10792f;
		case 51:
			return 2683.84f, -1399.642f, 45.37881f;
		case 60:
			return -1753.404f, -392.557f, 155.2576f;
		case 61:
			return -1790f, -388.27f, 159.33f;
		case 62:
			return -1818.99f, -370.94f, 162.3f;
		case 63:
			return -1819.88f, -561.8194f, 157.2323f;
		case 65:
			return -1763.78f, -385.1118f, 156.7401f;
		case 64:
			return -1773.314f, -393.9122f, 155.5647f;
		case 68:
			return -307.9643f, 773.6048f, 117.7031f;
		case 69:
			return -306.3f, 815.08f, 117.98f;
		case 70:
			return 0f, 0f, 0f;
		case 72:
			return -338.8647f, 767.4334f, 115.5628f;
		case 73:
			return -287.9538f, 804.0544f, 118.3859f;
		case 74:
			return -324f, 803.72f, 116.88f;
		case 75:
			return -281.82f, 778.97f, 118.5f;
		case 76:
			return -369.4457f, 786.6935f, 115.9904f;
		case 77:
			return -178.0316f, 628.0621f, 113.0896f;
		case 78:
			return -175.0377f, 631.7999f, 113.0896f;
		case 80:
			return -272.7182f, 785.6115f, 117.4202f;
		case 79:
			return -325.532f, 773.6285f, 117.5038f;
		case 82:
			return 3025.786f, 562.7253f, 43.7167f;
		case 86:
			return 2986.224f, 569.9468f, 43.62284f;
		case 85:
			return 2986.94f, 574.9f, 43.64f;
		case 84:
			return 2967.273f, 796.7416f, 52.5948f;
		case 87:
			return -1302.951f, 394.6608f, 94.3817f;
		case 89:
			return -1300.83f, 399.7599f, 94.38248f;
		case 88:
			return -1299.891f, 401.3615f, 94.38248f;
		case 93:
			return -5518.071f, -2906.217f, -2.7513f;
		case 90:
			return -5487.197f, -2939.038f, -1.3872f;
		case 91:
			return -5507.993f, -2964.844f, -1.6215f;
		case 92:
			return -5509.019f, -2947.435f, -2.8934f;
		case 94:
			return -5520.701f, -3044.427f, -1.40419f;
		case 95:
			return -3687.3f, -2623.39f, -14.44f;
		case 4:
			return -2842.211f, 137.3398f, 183.8268f;
		case 5:
			return -1005.934f, -540.8262f, 97.9502f;
		case 34:
			return 2076.835f, 1000.829f, 111.4973f;
		case 67:
			return -2251.034f, -1916.911f, 115.9488f;
		case 56:
			return -142.072f, -23.5242f, 95.0883f;
		case 57:
			return 675.3091f, -1251.233f, 43.0152f;
		case 58:
			return 1875.2f, -1859.182f, 41.8f;
		case 59:
			return 2366.084f, 1347.122f, 105.1305f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_602(int iParam0)
{
	if (!func_1059(iParam0))
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return 2941.929f, 1320.927f, 46.2401f;
		case 2:
			return 2936.9f, 1281.7f, 43.6529f;
		case 3:
			return 2931.596f, 1282.839f, 44.6783f;
		case 99:
			return -5227.45f, -3468.19f, -20.49293f;
		case 100:
			return -5228.75f, -3468.28f, -21.57f;
		case 10:
			return -753.4219f, -1285.01f, 43.20049f;
		case 7:
			return -785.1682f, -1324.179f, 46.3505f;
		case 9:
			return -814.4116f, -1367.243f, 43.7509f;
		case 13:
			return -868.3356f, -1366.207f, 44.75311f;
		case 14:
			return -875.0186f, -1328.058f, 44.00846f;
		case 17:
			return -764.2743f, -1292.576f, 44.3442f;
		case 12:
			return -813.7f, -1374.1f, 44.2f;
		case 18:
			return 1417.288f, 273.5687f, 88.4881f;
		case 20:
			return 1522.305f, 442.8598f, 89.6785f;
		case 21:
			return 1525.407f, 442.7721f, 90.6467f;
		case 22:
			return 2161.5f, -618.5f, 43f;
		case 23:
			return -1092.88f, -575.69f, 81.41f;
		case 24:
			return -1094.41f, -577.51f, 81.41f;
		case 25:
			return 1294.084f, -1303.102f, 76.0418f;
		case 26:
			return 1297.423f, -1278.412f, 75.65752f;
		case 27:
			return 1319.43f, -1142.08f, 81.41f;
		case 28:
			return 1327.036f, -1292.386f, 77.2488f;
		case 29:
			return 1326.268f, -1323.129f, 78.1929f;
		case 30:
			return 1228.508f, -1296.796f, 77.6347f;
		case 31:
			return 1232.206f, -1300.197f, 77.8496f;
		case 35:
			return 1209.053f, -193.1814f, 101.9785f;
		case 37:
			return 2657.466f, -1180.96f, 53.2785f;
		case 38:
			return 2819.495f, -1331.29f, 45.514f;
		case 39:
			return 2721.24f, -1231.66f, 49.37f;
		case 41:
			return 2851.2f, -1202.3f, 49.046f;
		case 42:
			return 2828.087f, -1315.179f, 47.4196f;
		case 43:
			return 2714.586f, -1286.893f, 50.3211f;
		case 44:
			return 2508.212f, -1449.654f, 48.41523f;
		case 45:
			return 2747.906f, -1397.089f, 47.1107f;
		case 46:
			return 2746.599f, -1394.278f, 46.918f;
		case 47:
			return 2554.144f, -1166.025f, 54.3474f;
		case 48:
			return 2842.45f, -1227.66f, 46.66f;
		case 49:
			return 2817.64f, -1325.011f, 47.00512f;
		case 50:
			return 2836.992f, -1305.805f, 45.6964f;
		case 55:
			return 2832.02f, -1225.563f, 46.6422f;
		case 54:
			return 2734.174f, -1119.755f, 50.10792f;
		case 60:
			return -1753.404f, -392.557f, 155.2576f;
		case 61:
			return -1792.444f, -385.412f, 160.6924f;
		case 62:
			return -1812.343f, -370.618f, 161.8814f;
		case 63:
			return -1819.88f, -561.8194f, 157.2323f;
		case 65:
			return -1763.78f, -385.1118f, 156.7401f;
		case 68:
			return -307.9643f, 773.6048f, 117.7031f;
		case 69:
			return -308.18f, 812.19f, 117.99f;
		case 70:
			return 0f, 0f, 0f;
		case 72:
			return -338.8647f, 767.4334f, 115.5628f;
		case 73:
			return -286.9307f, 809.6714f, 120.6565f;
		case 74:
			return -323.5066f, 799.6924f, 118.973f;
		case 75:
			return -279.273f, 781.7448f, 118.7954f;
		case 76:
			return -369.4457f, 786.6935f, 115.9904f;
		case 77:
			return -176.3f, 630.1f, 115.331f;
		case 78:
			return -174.0662f, 633.9207f, 115.109f;
		case 80:
			return -272.7182f, 785.6115f, 117.4202f;
		case 79:
			return -326.1232f, 771.9214f, 116.436f;
		case 1:
			return 2947.64f, 1344.901f, 43.899f;
		case 51:
			return 2683.84f, -1399.642f, 45.37881f;
		case 16:
			return -805.72f, -1330.5f, 42.67f;
		case 64:
			return -1773.314f, -393.9122f, 155.5647f;
		case 32:
			return 1332.55f, -1298.679f, 75.35602f;
		case 82:
			return 3023.859f, 561.206f, 46.7352f;
		case 86:
			return 2986.003f, 567.9055f, 45.337f;
		case 84:
			return 2967.273f, 796.7416f, 52.5948f;
		case 87:
			return -1302.951f, 394.6608f, 94.3817f;
		case 89:
			return -1300.283f, 400.4247f, 94.3817f;
		case 88:
			return -1299.608f, 401.5503f, 94.97269f;
		case 93:
			return -5518.071f, -2906.217f, -2.7513f;
		case 90:
			return -5488.293f, -2937.662f, 0.6299f;
		case 91:
			return -5506.691f, -2968.343f, -1.2586f;
		case 92:
			return -5509.019f, -2947.435f, -2.8934f;
		case 94:
			return -5520.701f, -3044.427f, -1.40419f;
		case 95:
			return -3684.342f, -2626.877f, -12.5497f;
		case 4:
			return -2842.211f, 137.3398f, 183.8268f;
		case 5:
			return -1005.934f, -540.8262f, 97.9502f;
		case 34:
			return 2076.835f, 1000.829f, 111.4973f;
		case 67:
			return -2251.034f, -1916.911f, 115.9488f;
		case 56:
			return -142.072f, -23.5242f, 95.0883f;
		case 57:
			return 675.3091f, -1251.233f, 43.0152f;
		case 58:
			return 1875.2f, -1859.182f, 41.8f;
		case 59:
			return 2366.084f, 1347.122f, 105.1305f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_603(int iParam0, int iParam1)
{
	return func_962((Global_1914319->f_3[iParam0 /*446*/])->f_5, iParam1);
}

int func_604(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 43:
		case 61:
		case 73:
			return 1;
	}
	return 0;
}

int func_605(int iParam0, int iParam1)
{
	if (iParam1 > 25)
	{
		return 0;
	}
	switch (iParam1)
	{
		case -1:
		case 1:
		case 2:
		case 5:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
			return 0;
		case 4:
			if (iParam0 == 41)
			{
				return 1;
			}
			return 0;
		default:
			break;
	}
	return 1;
}

int func_606(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar3 = iParam0;
	iVar4 = uParam1;
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
	if (iVar2 >= func_1060())
	{
		iVar2 = func_1060();
	}
	iVar5 = func_1061(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_977(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_977(iVar6) == 0)
			{
				return func_1062(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_977(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_977(iVar6) == 0)
			{
				return func_1062(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_1062(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

float func_607(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 75f;
		case 9:
			return 25f;
		case 10:
			return 25f;
		case 22:
			return 55f;
	}
	return 12.5f;
}

int func_608(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_603(iParam0, 16384) && !func_1063(iParam0, 1))
	{
		return 1;
	}
	if (!func_422(iParam1))
	{
		return 0;
	}
	iVar0 = func_1064(iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
	}
	if (VOLUME::_0x92A78D0BEDB332A3((Global_1914319->f_3[iParam0 /*446*/])->f_25))
	{
		iVar1 = VOLUME::_0x7FD78DFD0C5D7B9B((Global_1914319->f_3[iParam0 /*446*/])->f_25);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (iVar1 != iVar0)
			{
				VOLUME::_0x6D5F9E69BA1BE783((Global_1914319->f_3[iParam0 /*446*/])->f_25);
			}
		}
		func_1065(iParam1, (Global_1914319->f_3[iParam0 /*446*/])->f_25, 1);
		VOLUME::_0x4A8FEFC43FD8AC9B((Global_1914319->f_3[iParam0 /*446*/])->f_25, 1, 1);
	}
	if (VOLUME::_0x92A78D0BEDB332A3((Global_1914319->f_3[iParam0 /*446*/])->f_28))
	{
		iVar2 = VOLUME::_0x7FD78DFD0C5D7B9B((Global_1914319->f_3[iParam0 /*446*/])->f_28);
		if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			if (iVar2 != iVar0)
			{
				VOLUME::_0x6D5F9E69BA1BE783((Global_1914319->f_3[iParam0 /*446*/])->f_28);
			}
		}
		func_1065(iParam1, (Global_1914319->f_3[iParam0 /*446*/])->f_28, 1);
		VOLUME::_0x4A8FEFC43FD8AC9B((Global_1914319->f_3[iParam0 /*446*/])->f_28, 0, 1);
	}
	(Global_1914319->f_3[iParam0 /*446*/])->f_21 = iParam1;
	(Global_1914319->f_3[iParam0 /*446*/])->f_23 = iVar0;
	return 1;
}

void func_609(int iParam0)
{
	int iVar0;
	int iVar1;

	switch (iParam0)
	{
		case 92:
			StringCopy(Global_1393529->f_288[2 /*8*/], "0507_U_M_M_VhtStationClerk_01", 64);
			StringCopy(Global_1393529->f_288[1 /*8*/], "0507_U_M_M_VhtStationClerk_01", 64);
			return;
		case 38:
			StringCopy(Global_1393529->f_288[2 /*8*/], "0078_U_M_M_BlWTrainStationWorker_01", 64);
			StringCopy(Global_1393529->f_288[1 /*8*/], "0078_U_M_M_BlWTrainStationWorker_01", 64);
			return;
		case 26:
			StringCopy(Global_1393529->f_288[2 /*8*/], "0442_U_M_M_StrFreightStationOwner_01", 64);
			StringCopy(Global_1393529->f_288[1 /*8*/], "0442_U_M_M_StrFreightStationOwner_01", 64);
			return;
		case 105:
			StringCopy(Global_1393529->f_288[2 /*8*/], "0406_U_M_M_RhdTrainStationWorker_01", 64);
			StringCopy(Global_1393529->f_288[1 /*8*/], "0406_U_M_M_RhdTrainStationWorker_01", 64);
			return;
		case 76:
			if (!func_892(29))
			{
				if (func_150(29) && func_592() <= func_1066(29))
				{
					StringCopy(Global_1393529->f_288[2 /*8*/], "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
					StringCopy(Global_1393529->f_288[1 /*8*/], "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
					return;
				}
			}
			if (!func_892(3))
			{
				if (func_150(3) && func_592() <= func_1066(3))
				{
					StringCopy(Global_1393529->f_288[2 /*8*/], "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
					StringCopy(Global_1393529->f_288[1 /*8*/], "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
					return;
				}
			}
			if (!func_892(25))
			{
				if (func_150(25) && func_592() <= func_1066(25))
				{
					StringCopy(Global_1393529->f_288[2 /*8*/], "0833_S_M_M_TrainStationWorker_01_WHITE_02", 64);
					StringCopy(Global_1393529->f_288[1 /*8*/], "0833_S_M_M_TrainStationWorker_01_WHITE_02", 64);
					return;
				}
			}
			break;
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(100, 200);
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0);
	if (iVar1 > 80)
	{
		StringCopy(Global_1393529->f_288[2 /*8*/], "0833_S_M_M_TrainStationWorker_01_WHITE_02", 64);
		StringCopy(Global_1393529->f_288[1 /*8*/], "0833_S_M_M_TrainStationWorker_01_WHITE_02", 64);
	}
	else if (iVar1 < 40)
	{
		StringCopy(Global_1393529->f_288[2 /*8*/], "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
		StringCopy(Global_1393529->f_288[1 /*8*/], "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
	}
	else
	{
		StringCopy(Global_1393529->f_288[2 /*8*/], "0832_S_M_M_TrainStationWorker_01_WHITE_01", 64);
		StringCopy(Global_1393529->f_288[1 /*8*/], "0832_S_M_M_TrainStationWorker_01_WHITE_01", 64);
	}
}

void func_610(int iParam0)
{
	if (iParam0 == 76)
	{
		StringCopy(Global_1393529->f_288[10 /*8*/], "1025_U_M_M_ValButcher_01", 64);
	}
	else if (iParam0 == 115)
	{
		StringCopy(Global_1393529->f_288[10 /*8*/], "1086_U_M_M_TumButcher_01", 64);
	}
	else
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 6))
		{
			case 0:
			case 3:
				StringCopy(Global_1393529->f_288[10 /*8*/], "0842_S_M_M_UniButchers_01_WHITE_01", 64);
				break;
			case 1:
			case 4:
				StringCopy(Global_1393529->f_288[10 /*8*/], "0843_S_M_M_UniButchers_01_WHITE_02", 64);
				break;
			case 2:
			case 5:
				StringCopy(Global_1393529->f_288[10 /*8*/], "0844_S_M_M_UniButchers_01_WHITE_03", 64);
				break;
		}
	}
}

void func_611()
{
	StringCopy(Global_1393529->f_288[18 /*8*/], "1035_U_M_M_SDCUSTOMVENDOR_01", 64);
}

void func_612()
{
	int iVar0;
	int iVar1;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(100, 200);
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0);
	if (iVar1 > 80)
	{
		StringCopy(Global_1393529->f_288[9 /*8*/], "0825_S_M_M_LiveryWorker_01_WHITE_01", 64);
	}
	else if (iVar1 < 40)
	{
		StringCopy(Global_1393529->f_288[9 /*8*/], "0826_S_M_M_LiveryWorker_01_WHITE_02", 64);
	}
	else
	{
		StringCopy(Global_1393529->f_288[9 /*8*/], "0827_S_M_M_LiveryWorker_01_WHITE_03", 64);
	}
}

void func_613()
{
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 6))
	{
		case 0:
		case 3:
			StringCopy(Global_1393529->f_288[22 /*8*/], "0829_S_M_Y_NewspaperBoy_01_WHITE_01", 64);
			break;
		case 1:
		case 4:
			StringCopy(Global_1393529->f_288[22 /*8*/], "0830_S_M_Y_NewspaperBoy_01_WHITE_02", 64);
			break;
		case 2:
		case 5:
			StringCopy(Global_1393529->f_288[22 /*8*/], "0831_S_M_Y_NewspaperBoy_01_WHITE_03", 64);
			break;
	}
}

void func_614(int iParam0)
{
	if (!func_1059(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 4:
		case 5:
		case 18:
		case 22:
		case 27:
		case 34:
		case 38:
		case 55:
		case 60:
		case 67:
		case 72:
		case 92:
			if (!func_617(iParam0, 2))
			{
				func_775(iParam0, 2);
			}
			break;
	}
}

void func_615(int iParam0, int iParam1)
{
	if (!func_598(iParam0))
	{
		return;
	}
	(Global_1914319->f_3[iParam0 /*446*/])->f_7 = ((Global_1914319->f_3[iParam0 /*446*/])->f_7 - ((Global_1914319->f_3[iParam0 /*446*/])->f_7 && iParam1));
}

void func_616(int iParam0, int iParam1)
{
	if (!func_598(iParam0))
	{
		return;
	}
	(Global_1914319->f_3[iParam0 /*446*/])->f_7 = ((Global_1914319->f_3[iParam0 /*446*/])->f_7 || iParam1);
}

bool func_617(int iParam0, int iParam1)
{
	if (!func_1059(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_15614[iParam0] && iParam1) != 0;
}

int func_618(int iParam0)
{
	int iVar0;

	if (!func_1059(iParam0))
	{
		return 0;
	}
	if (iParam0 == 41 || iParam0 == 82)
	{
		return 0;
	}
	iVar0 = func_1067(iParam0);
	if ((((((((((iVar0 == 10 || iVar0 == 4) || iVar0 == 17) || iVar0 == 31) || iVar0 == 18) || iVar0 == 19) || iVar0 == 22) || iVar0 == 12) || iVar0 == 13) || iVar0 == 14) || iVar0 == 32)
	{
		return 1;
	}
	return 0;
}

bool func_619(int iParam0, int iParam1)
{
	if (!func_1059(iParam0))
	{
		return false;
	}
	return (Global_20709.f_2246[iParam0] && iParam1) != 0;
}

void func_620(int iParam0, int iParam1)
{
	if (!func_1059(iParam0))
	{
	}
	else
	{
		Global_20709.f_2246[iParam0] = (Global_20709.f_2246[iParam0] || iParam1);
	}
}

void func_621(int iParam0, int iParam1)
{
	if (!func_1059(iParam0))
	{
	}
	else
	{
		Global_20709.f_2246[iParam0] = (&Global_20709.f_2246[iParam0] - (Global_20709.f_2246[iParam0] && iParam1));
	}
}

void func_622(int iParam0)
{
	if (iParam0 != -1)
	{
		Global_1914319->f_15922 = iParam0;
	}
}

void func_623(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_253)
	{
		func_1068(iVar0, uParam0);
		iVar0++;
	}
	MISC::CLEAR_BIT(&(uParam0->f_254), 4);
}

void func_624(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_253)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED((uParam0->f_9[iVar0 /*9*/])->f_1);
		iVar0++;
	}
	MISC::CLEAR_BIT(&(uParam0->f_254), 3);
}

void func_625(var uParam0)
{
	DATAFILE::_DATAFILE_UNLOAD(uParam0->f_2);
	MISC::CLEAR_BIT(&(uParam0->f_254), 1);
	MISC::CLEAR_BIT(&(uParam0->f_254), 2);
}

int func_626(int iParam0, int iParam1)
{
	if (iParam0 == 6)
	{
		if (iParam1 == 0)
		{
			if (!STREAMING::_IS_IMAP_ACTIVE(-1437554707))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_627(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return (func_384(4, 0) - 1);
		case 1:
			return (func_384(3, 0) - 1);
		case 2:
			return (func_384(5, 0) - 1);
		case 3:
			return (func_384(10, 0) - 1);
		default:
			break;
	}
	return 0;
}

void func_628(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = func_1069(iParam0);
	if (!DATAFILE::_0x4F9E3ED7617123AC(iVar0))
	{
		return;
	}
	uParam1->f_2 = DATAFILE::_0xD97D8D905F1562F2(iVar0);
	MISC::SET_BIT(&(uParam1->f_254), 1);
}

bool func_629(var uParam0)
{
	return DATAFILE::_0x603AC35FD4602C76(uParam0->f_2);
}

void func_630(int iParam0, int iParam1, int iParam2, var uParam3)
{
	struct<4> Var0;
	var uVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;

	if (iParam2 < 0)
	{
		return;
	}
	DATAFILE::_DATAFILE_REGISTER_QUERY(uParam3->f_2, 0, "Supplies");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uParam3->f_2, 1, "Camp");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uParam3->f_2, 2, "Camp(%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uParam3->f_2, 3, "UpgradeLevel");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uParam3->f_2, 4, "UpgradeLevel(%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uParam3->f_2, 5, "Item");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uParam3->f_2, 6, "Item(%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uParam3->f_2, 7, ":id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uParam3->f_2, 8, ":rootPosition");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uParam3->f_2, 9, ":rootRotation");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uParam3->f_2, 10, ":model");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uParam3->f_2, 11, ":offset");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uParam3->f_2, 12, ":rotation");
	DATAFILE::_DATAFILE_REGISTER_QUERY(uParam3->f_2, 13, ":unlock");
	Var0 = uParam3->f_2;
	Var0.f_1 = 0;
	Var0.f_2 = 0;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&uVar5, &Var0))
	{
		return;
	}
	Var0.f_1 = uVar5;
	Var0.f_2 = 1;
	iVar6 = DATAFILE::_DATAFILE_GET_NUM_NODES(&Var0);
	if (iVar6 == 0)
	{
		return;
	}
	iVar10 = func_1070(iParam0);
	iVar11 = 0;
	while (iVar11 < iVar6)
	{
		Var0.f_1 = uVar5;
		Var0.f_2 = 2;
		Var0.f_3 = iVar11;
		if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&uVar7, &Var0))
		{
		}
		else
		{
			iVar12 = 0;
			Var0.f_1 = uVar7;
			Var0.f_2 = 7;
			if (!DATAFILE::_DATAFILE_GET_HASH(&iVar12, &Var0))
			{
			}
			else if (iVar12 != iVar10)
			{
			}
			else
			{
				Var0.f_1 = uVar7;
				Var0.f_2 = 8;
				if (!DATAFILE::_DATAFILE_GET_VECTOR(&(uParam3->f_3), &Var0))
				{
				}
				Var0.f_1 = uVar7;
				Var0.f_2 = 9;
				if (!DATAFILE::_DATAFILE_GET_VECTOR(&(uParam3->f_3.f_3), &Var0))
				{
				}
				Var0.f_1 = uVar7;
				Var0.f_2 = 3;
				iVar13 = DATAFILE::_DATAFILE_GET_NUM_NODES(&Var0);
				if (iVar13 <= iParam2)
				{
					return;
				}
				Var0.f_1 = uVar7;
				Var0.f_2 = 4;
				Var0.f_3 = iParam2;
				if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&uVar8, &Var0))
				{
					return;
				}
				Var0.f_1 = uVar8;
				Var0.f_2 = 5;
				iVar14 = DATAFILE::_DATAFILE_GET_NUM_NODES(&Var0);
				if (iVar14 == 0)
				{
				}
				if (iVar14 > 27)
				{
				}
				iVar15 = 0;
				while (iVar15 < iVar14)
				{
					if (iVar15 >= 27)
					{
					}
					else
					{
						Var0.f_1 = uVar8;
						Var0.f_2 = 6;
						Var0.f_3 = iVar15;
						if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&uVar9, &Var0))
						{
							(uParam3->f_9[iVar15 /*9*/])->f_1 = 0;
						}
						else
						{
							iVar16 = 0;
							Var0.f_1 = uVar9;
							Var0.f_2 = 10;
							if (!DATAFILE::_DATAFILE_GET_HASH(&iVar16, &Var0))
							{
							}
							else
							{
								(uParam3->f_9[iVar15 /*9*/])->f_1 = iVar16;
							}
							Var0.f_1 = uVar9;
							Var0.f_2 = 11;
							if (!DATAFILE::_DATAFILE_GET_VECTOR(&((uParam3->f_9[iVar15 /*9*/])->f_2), &Var0))
							{
							}
							Var0.f_1 = uVar9;
							Var0.f_2 = 12;
							if (!DATAFILE::_DATAFILE_GET_VECTOR(&((uParam3->f_9[iVar15 /*9*/])->f_5), &Var0))
							{
							}
							Var0.f_1 = uVar9;
							Var0.f_2 = 13;
							if (DATAFILE::_DATAFILE_GET_HASH(&((uParam3->f_9[iVar15 /*9*/])->f_8), &Var0))
							{
							}
							else
							{
								(uParam3->f_9[iVar15 /*9*/])->f_8 = 0;
							}
						}
						iVar15++;
					}
				}
				*uParam3 = iParam1;
				uParam3->f_1 = iParam2;
				uParam3->f_253 = iVar14;
				MISC::SET_BIT(&(uParam3->f_254), 2);
				MISC::SET_BIT(&(uParam3->f_254), 0);
			}
			else
			{
				iVar11++;
			}
		}
	}

void func_631(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_253)
	{
		if (MISC::IS_BIT_SET(*uParam1, iVar0))
		{
		}
		else if ((uParam0->f_9[iVar0 /*9*/])->f_1 == 0)
		{
		}
		else if ((uParam0->f_9[iVar0 /*9*/])->f_8 != 0)
		{
			if (!func_633((uParam0->f_9[iVar0 /*9*/])->f_8))
			{
			}
			else
			{
				STREAMING::REQUEST_MODEL((uParam0->f_9[iVar0 /*9*/])->f_1, false);
			}
			iVar0++;
			MISC::SET_BIT(&(uParam0->f_254), 3);
		}
	}

void func_632(var uParam0, var uParam1, var uParam2)
{
	bool bVar0;
	int iVar1;

	if (*uParam2)
	{
		return;
	}
	bVar0 = true;
	iVar1 = 0;
	while (iVar1 < uParam0->f_253)
	{
		if (MISC::IS_BIT_SET(*uParam1, iVar1))
		{
		}
		else if (MISC::IS_BIT_SET(uParam0->f_255, iVar1))
		{
		}
		else if ((uParam0->f_9[iVar1 /*9*/])->f_8 != 0)
		{
			if (!func_633((uParam0->f_9[iVar1 /*9*/])->f_8))
			{
			}
			else if ((uParam0->f_9[iVar1 /*9*/])->f_1 == 0)
			{
			}
			else if (!STREAMING::HAS_MODEL_LOADED((uParam0->f_9[iVar1 /*9*/])->f_1))
			{
				STREAMING::REQUEST_MODEL((uParam0->f_9[iVar1 /*9*/])->f_1, false);
				bVar0 = false;
			}
			else
			{
				func_1071(iVar1, uParam0);
				*uParam2 = 1;
				if (iVar1 != (uParam0->f_253 - 1))
				{
					bVar0 = false;
				}
			}
			else
			{
				iVar1++;
			}
			if (bVar0)
			{
				MISC::SET_BIT(&(uParam0->f_254), 4);
				return;
			}
		}
	}

int func_633(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_40.f_4283.f_415.f_24)
	{
		if (iParam0 == &Global_40.f_4283.f_415.f_6[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_634()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<14> Var3;
	struct<12> Var17;
	int iVar31;
	int iVar32;

	Var3 = { func_1072(0, 1426626782, -1591664384, -1591664384, 0, 0) };
	if (func_1073(&Var3, &iVar1, &iVar2, 0))
	{
		Var17.f_9 = -1591664384;
		iVar31 = 0;
		while (iVar31 < iVar2)
		{
			if (func_1074(&Var17, iVar31, iVar1, iVar2))
			{
				if (func_969(Var17.f_4))
				{
					iVar0 = (iVar0 + Var17.f_11);
					if (func_1075(Var17.f_4))
					{
						iVar0 = (iVar0 - 1);
					}
					if (iVar0 > 30)
					{
						iVar32 = (iVar0 - 30);
						func_1076(Var17.f_4, 2, iVar32, -142743235);
						iVar0 = 30;
					}
				}
			}
			iVar31++;
		}
		func_1077(iVar1);
	}
	return iVar0;
}

float func_635()
{
	return 5f;
}

float func_636(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_637()
{
	return (ANIMSCENE::_0x25557E324489393C(Global_43799) && ANIMSCENE::_0xCBFC7725DE6CE2E0(Global_43799, 0));
}

bool func_638(int iParam0)
{
	if (!func_422(iParam0))
	{
		return false;
	}
	return ((*Global_1895087)[iParam0 /*3*/])->f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_639(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_422(iParam0))
	{
		return;
	}
	if (!func_388(iParam0, 1))
	{
		return;
	}
	if (!func_388(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_638(iParam0)) && func_1078(iParam0))
	{
		return;
	}
	func_875(iParam0, 1);
	func_876(iParam0);
	if (func_863(func_423(iParam0)))
	{
		iVar0 = func_864(iParam0);
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
		func_875(iParam0, 16);
	}
	if (func_388(iParam0, 128) && !bParam3)
	{
		func_389(iParam0, 0);
	}
}

void func_640(int iParam0, bool bParam1)
{
	if (!func_1059(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (!func_617(iParam0, 1024))
		{
			func_775(iParam0, 1024);
			INVENTORY::_0x9B4E793B1CB6550A();
		}
	}
	else if (func_617(iParam0, 1024))
	{
		func_774(iParam0, 1024);
		INVENTORY::_0x9B4E793B1CB6550A();
	}
	func_1079(iParam0);
}

var func_641(int iParam0)
{
	return (Global_1914319->f_3[iParam0 /*446*/])->f_408;
}

void func_642(int iParam0)
{
	if (func_1080(iParam0) && func_1081())
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iParam0);
	}
}

void func_643(int iParam0)
{
	(Global_1914319->f_3[iParam0 /*446*/])->f_7 = 0;
}

void func_644(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_598(iParam0))
	{
		return;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	if (bParam1)
	{
		MISC::SET_BIT(Global_1914319->f_15924[iVar1], iVar2);
	}
	else
	{
		MISC::CLEAR_BIT(Global_1914319->f_15924[iVar1], iVar2);
	}
}

int func_645(int iParam0)
{
	if ((iParam0 == 22 || iParam0 == 37) && !func_149())
	{
		return 1;
	}
	if (iParam0 == 61)
	{
		return 1;
	}
	return 0;
}

int func_646()
{
	if (Global_16)
	{
		return 0;
	}
	if (!func_1082())
	{
		return 0;
	}
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1934266->f_78.f_55))
	{
		return 0;
	}
	if (func_133(-1 ^ 9, 0, 1))
	{
		return 0;
	}
	return 1;
}

char* func_647(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5, var uParam6)
{
	char* sVar0;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1894899->f_162)))
	{
		sVar0 = func_1083(Global_1894899->f_162);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && uParam4)
	{
		sVar0 = func_1085(func_1084(Global_36));
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		if (!func_1086(iParam0) || func_753(45))
		{
			switch (iParam0)
			{
				case 2:
					sVar0 = "LANDMARK_MERKINS_WALLER";
					break;
				case 3:
					sVar0 = "SETTLEMENT_LAGRAS";
					break;
				case 4:
					sVar0 = "HIDEOUT_LAKAY";
					break;
				case 1:
					sVar0 = "LANDMARK_MACOMBS_END";
					break;
				case 6:
					sVar0 = "LANDMARK_HAGEN_ORCHARDS";
					break;
				case 5:
					sVar0 = "TOWN_SAINTDENIS";
					break;
				case 8:
					sVar0 = "SETTLEMENT_GRAND_KORRIGAN";
					break;
				case 9:
					sVar0 = "HIDEOUT_SHADY_BELLE";
					break;
				case 10:
					sVar0 = "LANDMARK_SILTWATER_STRAND";
					break;
				case 11:
					sVar0 = "SETTLEMENT_APPLESEED_TIMBER_CO";
					break;
				case 12:
					sVar0 = "LANDMARK_BERYLS_DREAM";
					break;
				case 15:
					sVar0 = "SETTLEMENT_FORT_RIGGS_HOLDING_CAMP";
					break;
				case 16:
					sVar0 = "HIDEOUT_HANGING_DOG_RANCH";
					break;
				case 17:
					sVar0 = "HOMESTEAD_LONE_MULE_STEAD";
					break;
				case 19:
					sVar0 = "LANDMARK_MONTOS_REST";
					break;
				case 20:
					sVar0 = "LANDMARK_OWANJILA_DAM";
					break;
				case 21:
					sVar0 = "HOMESTEAD_PAINTED_SKY";
					break;
				case 22:
					sVar0 = "SETTLEMENT_PRONGHORN_RANCH";
					break;
				case 23:
					sVar0 = "LANDMARK_RIGGS_STATION";
					break;
				case 25:
					sVar0 = "HOMESTEAD_SHEPHERDS_RISE";
					break;
				case 26:
					sVar0 = "TOWN_STRAWBERRY";
					break;
				case 27:
					sVar0 = "LANDMARK_VALLEY_VIEW";
					break;
				case 28:
					sVar0 = "LANDMARK_WALLACE_STATION";
					break;
				case 29:
					sVar0 = "HOMESTEAD_WATSONS_CABIN";
					break;
				case 30:
					sVar0 = "LANDMARK_CANEBREAK_MANOR";
					break;
				case 31:
					sVar0 = "LANDMARK_COPPERHEAD_LANDING";
					break;
				case 32:
					sVar0 = "SETTLEMENT_SISIKA_PENITENTIARY";
					break;
				case 120:
					sVar0 = "TOWN_ARMADILLO";
					break;
				case 121:
					sVar0 = "SETTLEMENT_COOTS_CHAPEL";
					break;
				case 124:
					sVar0 = "SETTLEMENT_RIDGEWOOD_FARM";
					break;
				case 123:
					sVar0 = "LANDMARK_RILEYS_CHARGE";
					break;
				case 125:
					sVar0 = "HIDEOUT_TWIN_ROCKS";
					break;
				case 33:
					sVar0 = "LANDMARK_BACCHUS_BRIDGE";
					break;
				case 34:
					sVar0 = "HOMESTEAD_FIRWOOD_RISE";
					break;
				case 35:
					sVar0 = "SETTLEMENT_FORT_WALLACE";
					break;
				case 36:
					sVar0 = "HIDEOUT_SIX_POINT_CABIN";
					break;
				case 114:
					sVar0 = "HIDEOUT_GAPTOOTH_BREACH";
					break;
				case 116:
					sVar0 = "SETTLEMENT_RATHSKELLER_FORK";
					break;
				case 115:
					sVar0 = "TOWN_TUMBLEWEED";
					break;
				case 37:
					sVar0 = "SETTLEMENT_BEECHERS_HOPE";
					break;
				case 38:
					sVar0 = "TOWN_BLACKWATER";
					break;
				case 39:
					sVar0 = "LANDMARK_QUAKERS_COVE";
					break;
				case 40:
					sVar0 = "HOMESTEAD_ADLER_RANCH";
					break;
				case 50:
					sVar0 = "LANDMARK_CALUMET_RAVINE";
					break;
				case 42:
					sVar0 = "HOMESTEAD_CHEZ_PORTER";
					break;
				case 43:
					sVar0 = "HIDEOUT_COLTER";
					break;
				case 41:
					sVar0 = "LANDMARK_WINDOW_ROCK";
					break;
				case 45:
					sVar0 = "LANDMARK_MILLESANI_CLAIM";
					break;
				case 48:
					sVar0 = "LANDMARK_TEMPEST_RIM";
					break;
				case 54:
					sVar0 = "LANDMARK_THE_LOFT";
					break;
				case 56:
					sVar0 = "SETTLEMENT_WAPITI";
					break;
				case 49:
					sVar0 = "LANDMARK_EWING_BASIN";
					break;
				case 57:
					sVar0 = "SETTLEMENT_AGUASDULCES";
					break;
				case 59:
					sVar0 = "LANDMARK_CINCO_TORRES";
					break;
				case 60:
					sVar0 = "LANDMARK_LA_CAPILLA";
					break;
				case 61:
					sVar0 = "TOWN_MANICATO";
					break;
				case 126:
					sVar0 = "TOWN_MACFARLANES_RANCH";
					break;
				case 127:
					sVar0 = "SETTLEMENT_THIEVES_LANDING";
					break;
				case 62:
					sVar0 = "LANDMARK_OLD_GREENBANK_MILL";
					break;
				case 64:
					sVar0 = "HOMESTEAD_CARMODY_DELL";
					break;
				case 65:
					sVar0 = "SETTLEMENT_CORNWALL_KEROSENE_TAR";
					break;
				case 66:
					sVar0 = "HOMESTEAD_GUTHRIE_FARM";
					break;
				case 67:
					sVar0 = "LANDMARK_CUMBERLAND_FALLS";
					break;
				case 68:
					sVar0 = "HOMESTEAD_DOWNES_RANCH";
					break;
				case 69:
					sVar0 = "SETTLEMENT_EMERALD_RANCH";
					break;
				case 70:
					sVar0 = "LANDMARK_GRANGERS_HOGGERY";
					break;
				case 72:
					sVar0 = "HOMESTEAD_LARNED_SOD";
					break;
				case 74:
					sVar0 = "LANDMARK_LUCKYS_CABIN";
					break;
				case 75:
					sVar0 = "LANDMARK_FLATNECK_STATION";
					break;
				case 76:
					sVar0 = "TOWN_VALENTINE";
					break;
				case 77:
					sVar0 = "HOMESTEAD_ABERDEEN_PIG_FARM";
					break;
				case 78:
					sVar0 = "TOWN_ANNESBURG";
					break;
				case 79:
					sVar0 = "HIDEOUT_BEAVER_HOLLOW";
					break;
				case 82:
					sVar0 = "SETTLEMENT_BUTCHER_CREEK";
					break;
				case 80:
					sVar0 = "LANDMARK_BLACK_BALSAM_RISE";
					break;
				case 81:
					sVar0 = "LANDMARK_BRANDYWINE_DROP";
					break;
				case 83:
					sVar0 = "HOMESTEAD_DOVERHILL";
					break;
				case 86:
					sVar0 = "HOMESTEAD_MACLEANS_HOUSE";
					break;
				case 87:
					sVar0 = "LANDMARK_MOSSY_FLATS";
					break;
				case 88:
					sVar0 = "LANDMARK_ROANOKE_VALLEY";
					break;
				case 89:
					sVar0 = "HOMESTEAD_WILLARDS_REST";
					break;
				case 92:
					sVar0 = "TOWN_VANHORN";
					break;
				case 117:
					sVar0 = "SETTLEMENT_BENEDICT_POINT";
					break;
				case 118:
					sVar0 = "HIDEOUT_FORT_MERCER";
					break;
				case 119:
					sVar0 = "SETTLEMENT_PLAINVIEW";
					break;
				case 93:
					sVar0 = "SETTLEMENT_BRAITHWAITE_MANOR";
					break;
				case 94:
					sVar0 = "LANDMARK_BOLGER_GLADE";
					break;
				case 95:
					sVar0 = "SETTLEMENT_CALIGA_HALL";
					break;
				case 96:
					sVar0 = "HOMESTEAD_CATFISH_JACKSONS";
					break;
				case 98:
					sVar0 = "HIDEOUT_CLEMENS_POINT";
					break;
				case 99:
					sVar0 = "HOMESTEAD_COMPSONS_STEAD";
					break;
				case 100:
					sVar0 = "HOMESTEAD_HILL_HAVEN_RANCH";
					break;
				case 102:
					sVar0 = "HOMESTEAD_LONNIES_SHACK";
					break;
				case 104:
					sVar0 = "LANDMARK_RADLEYS_PASTURE";
					break;
				case 105:
					sVar0 = "TOWN_RHODES";
					break;
				case 108:
					sVar0 = "LANDMARK_BEAR_CLAW";
					break;
				case 110:
					sVar0 = "SETTLEMENT_MANZANITA_POST";
					break;
				case 111:
					sVar0 = "LANDMARK_PACIFIC_UNION_RAILROAD";
					break;
				case 112:
					sVar0 = "LANDMARK_TANNERS_REACH";
					break;
				case 128:
					sVar0 = "SETTLEMENT_CENTRAL_UNION_RAILROAD_CAMP";
					break;
			}
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) || uParam5)
	{
		switch (iParam2)
		{
			case -49694339:
				sVar0 = "WATER_ARROYO_DE_LA_VIBORA";
				*uParam6 = 1;
				break;
			case -196675805:
				sVar0 = "WATER_AURORA_BASIN";
				*uParam6 = 1;
				break;
			case -1168459546:
				sVar0 = "WATER_BAHIA_DE_LA_PAZ";
				*uParam6 = 1;
				break;
			case 795414694:
				sVar0 = "WATER_BARROW_LAGOON";
				*uParam6 = 1;
				break;
			case -557290573:
				sVar0 = "DISTRICT_BAYOU_NWA";
				*uParam6 = 1;
				break;
			case -1073312073:
				sVar0 = "WATER_CAIRN_LAKE";
				*uParam6 = 1;
				break;
			case -804804953:
				sVar0 = "WATER_CATTAIL_POND";
				*uParam6 = 1;
				break;
			case 370072007:
				sVar0 = "WATER_DAKOTA_RIVER";
				*uParam6 = 1;
				break;
			case 1245451421:
				sVar0 = "WATER_DEADBOOT_CREEK";
				*uParam6 = 1;
				break;
			case -105598602:
				sVar0 = "WATER_ELYSIAN_POOL";
				*uParam6 = 1;
				break;
			case -1356490953:
				sVar0 = "WATER_FLAT_IRON_LAKE";
				*uParam6 = 1;
				break;
			case -1276586360:
				sVar0 = "WATER_HAWKS_EYE_CREEK";
				*uParam6 = 1;
				break;
			case 1755369577:
				sVar0 = "LANDMARK_HEARTLAND_OVERFLOW";
				*uParam6 = 1;
				break;
			case 1175365009:
				sVar0 = "WATER_COTORRA_SPRINGS";
				*uParam6 = 1;
				break;
			case -1369817450:
				sVar0 = "WATER_LAKE_DON_JULIO";
				*uParam6 = 1;
				break;
			case 592454541:
				sVar0 = "WATER_LAKE_ISABELLA";
				*uParam6 = 1;
				break;
			case -2040708515:
				sVar0 = "WATER_LANNAHECHEE_RIVER";
				*uParam6 = 1;
				break;
			case -1410384421:
				sVar0 = "WATER_LITTLE_CREEK_RIVER";
				*uParam6 = 1;
				break;
			case -1308233316:
				sVar0 = "WATER_LOWER_MONTANA_RIVER";
				*uParam6 = 1;
				break;
			case 301094150:
				sVar0 = "WATER_MATTOCK_POND";
				*uParam6 = 1;
				break;
			case -811730579:
				sVar0 = "WATER_MOONSTONE_POND";
				*uParam6 = 1;
				break;
			case -1817904483:
				sVar0 = "WATER_OCREAGHS_RUN";
				*uParam6 = 1;
				break;
			case -1300497193:
				sVar0 = "WATER_OWANJILA";
				*uParam6 = 1;
				break;
			case 2005774838:
				sVar0 = "WATER_RINGNECK_CREEK";
				*uParam6 = 1;
				break;
			case -247856387:
				sVar0 = "WATER_SEA_OF_CORONADO";
				*uParam6 = 1;
				break;
			case -823661292:
				sVar0 = "WATER_SOUTHFIELD_FLATS";
				*uParam6 = 1;
				break;
			case -218679770:
				sVar0 = "WATER_SPIDER_GORGE";
				*uParam6 = 1;
				break;
			case -1287619521:
				sVar0 = "WATER_STILLWATER_CREEK";
				*uParam6 = 1;
				break;
			case -1781130443:
				sVar0 = "WATER_UPPER_MONTANA_RIVER";
				*uParam6 = 1;
				break;
			case -261541730:
				sVar0 = "WATER_WHINYARD_STRAIT";
				*uParam6 = 1;
				break;
			case -1229593481:
				if (iParam1 == 10)
				{
					sVar0 = "WATER_KAMASSA_RIVER";
				}
				else if (iParam1 == 2)
				{
					sVar0 = "WATER_KAMASSA_RIVER_BLUEWATER_MARSH";
				}
				else
				{
					sVar0 = "WATER_KAMASSA_RIVER_BAYOU_NWA";
				}
				*uParam6 = 1;
				break;
			case -1504425495:
				if (iParam1 == 4 || iParam1 == 12)
				{
					sVar0 = "WATER_SAN_LUIS_RIVER_WEST_ELIZABETH";
				}
				else
				{
					sVar0 = "WATER_SAN_LUIS_RIVER_NEW_AUSTIN";
				}
				*uParam6 = 1;
				break;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		switch (iParam1)
		{
			case 0:
				sVar0 = "DISTRICT_BAYOU_NWA";
				break;
			case 1:
				sVar0 = "DISTRICT_BIG_VALLEY";
				break;
			case 2:
				sVar0 = "DISTRICT_BLUEWATER_MARSH";
				break;
			case 3:
				sVar0 = "DISTRICT_CUMBERLAND_FOREST";
				break;
			case 4:
				sVar0 = "DISTRICT_GREAT_PLAINS";
				break;
			case 6:
				sVar0 = "DISTRICT_GRIZZLIES";
				break;
			case 7:
				sVar0 = "DISTRICT_GRIZZLIES";
				break;
			case 8:
				sVar0 = "DISTRICT_GUARMA";
				break;
			case 9:
				sVar0 = "DISTRICT_HEARTLANDS";
				break;
			case 10:
				sVar0 = "DISTRICT_ROANOAKE_RIDGE";
				break;
			case 11:
				sVar0 = "DISTRICT_SCARLETT_MEADOWS";
				break;
			case 12:
				sVar0 = "DISTRICT_TALL_TREES";
				break;
			case 13:
				sVar0 = "DISTRICT_GAPTOOTH_RIDGE";
				break;
			case 14:
				sVar0 = "DISTRICT_RIO_BRAVO";
				break;
			case 15:
				sVar0 = "DISTRICT_CHOLLA_SPRINGS";
				break;
			case 16:
				sVar0 = "DISTRICT_HENNIGANS_STEAD";
				break;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		switch (iParam3)
		{
			case 0:
				sVar0 = "STATE_AMBARINO";
				break;
			case 2:
				sVar0 = "STATE_LEMOYNE";
				break;
			case 3:
				sVar0 = "STATE_WEST_ELIZABETH";
				break;
			case 4:
				sVar0 = "STATE_NEW_AUSTIN";
				break;
			case 1:
				sVar0 = "STATE_NEW_HANOVER";
				break;
			case 5:
				sVar0 = "STATE_GUARMA";
				break;
		}
	}
	return sVar0;
}

bool func_648(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

int func_649(int iParam0)
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

int func_650(int iParam0)
{
	if (!func_648(iParam0))
	{
		return -1;
	}
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_40.f_358[iParam0 /*12*/]);
	}
	return &(Global_1058888->f_42266[iParam0 /*12*/]);
}

int func_651(int iParam0)
{
	switch (iParam0)
	{
		case -196675805:
			return 0;
		case 795414694:
			return 0;
		case -557290573:
			return 2;
		case 650214731:
			return 1;
		case -1073312073:
			return 0;
		case 231313522:
			return 0;
		case -804804953:
			return 0;
		case 370072007:
			return 1;
		case 1245451421:
			return 1;
		case 469159176:
			return 1;
		case -105598602:
			return 0;
		case -1356490953:
			return 0;
		case -1276586360:
			return 1;
		case 1755369577:
			return 0;
		case 1175365009:
			return 0;
		case -1229593481:
			return 1;
		case -1369817450:
			return 0;
		case 592454541:
			return 0;
		case -2040708515:
			return 1;
		case -1410384421:
			return 1;
		case -1308233316:
			return 1;
		case 301094150:
			return 0;
		case -811730579:
			return 0;
		case -1817904483:
			return 0;
		case -1300497193:
			return 0;
		case 2005774838:
			return 1;
		case -1504425495:
			return 1;
		case -247856387:
			return 1;
		case -823661292:
			return 0;
		case -218679770:
			return 1;
		case -1287619521:
			return 1;
		case -1781130443:
			return 1;
		case -261541730:
			return 1;
		default:
			break;
	}
	return -1;
}

char* func_652(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "WATER_TYPE_LAKE";
		case 1:
			return "WATER_TYPE_RIVER";
		case 2:
			return "WATER_TYPE_SWAMP";
		default:
			break;
	}
	return "";
}

bool func_653(int iParam0, int iParam1)
{
	if (!func_378(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return (Global_40.f_431[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_42339[iParam0] && iParam1) != 0;
}

bool func_654(int iParam0, int iParam1)
{
	if (!func_648(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return ((Global_40.f_358[iParam0 /*12*/])->f_5 && iParam1) != 0;
	}
	return ((Global_1058888->f_42266[iParam0 /*12*/])->f_5 && iParam1) != 0;
}

bool func_655(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23117[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0 /*11*/] && iParam1) != 0;
}

int func_656(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_657(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

float func_658(float fParam0)
{
	return ((fParam0 * 1.8f) + 32f);
}

bool func_659(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

int func_660(int iParam0)
{
	int iVar0;

	if (func_1086(iParam0))
	{
		if (!func_753(45))
		{
			return 0;
		}
	}
	iVar0 = func_390(iParam0);
	if (func_840())
	{
		if (!func_513(((*Global_1835011)[3 /*74*/])->f_1, 1))
		{
			return (iVar0 == 7 || iVar0 == 6);
		}
	}
	return 1;
}

void func_661(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

struct<2> func_662(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_663(var uParam0, var uParam1, int iParam2)
{
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

bool func_664(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_665(int iParam0)
{
	Global_1327479->f_3 = iParam0;
}

int func_666()
{
	return Global_1310750->f_16037;
}

bool func_667(int iParam0, int iParam1)
{
	if (!func_664(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/] && iParam1) != 0;
}

int func_668(int iParam0)
{
	if (!func_664(iParam0))
	{
		return 0;
	}
	if (func_1087(64) && func_1088(iParam0))
	{
		return 1;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_46;
}

int func_669(int iParam0)
{
	if (!func_664(iParam0))
	{
		return 0;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_47;
}

void func_670(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_664(&(Global_1310750->f_13321[iParam0 /*9*/])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID((Global_1310750->f_13321[iParam0 /*9*/])->f_5, 523);
	((*Global_1310750)[iVar0 /*111*/])->f_48 = 0;
	func_1089(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

int func_671(vector3 vParam0)
{
	if ((func_693(Global_35, vParam0, 1) < 900f && !func_1090()) && CAM::IS_SCREEN_FADED_IN())
	{
		return 1;
	}
	return 0;
}

void func_672(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (uParam0[iVar0 /*8*/] != 0 && ENTITY::_0x1FF441D7954F8709(uParam0[iVar0 /*8*/]))
		{
			ENTITY::_0xD2B9C78537ED5759(uParam0[iVar0 /*8*/]);
		}
		iVar0++;
	}
}

int func_673()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (func_148() == &Global_1357549->f_12[iVar0 /*14*/])
		{
			if ((Global_1357549->f_12[iVar0 /*14*/])->f_7 != 0)
			{
				ENTITY::_0xD2B9C78537ED5759((Global_1357549->f_12[iVar0 /*14*/])->f_7);
				(Global_1357549->f_12[iVar0 /*14*/])->f_7 = 0;
				(Global_1357549->f_12[iVar0 /*14*/])->f_10 = 0;
				(Global_1357549->f_12[iVar0 /*14*/])->f_8 = 0;
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_674()
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	if (func_705(64) || func_705(128))
	{
		return 0;
	}
	switch (func_148())
	{
		case 2:
			if (CAM::IS_SPHERE_VISIBLE(654.7123f, -1252.524f, 42.8435f, 5f))
			{
				return 1;
			}
			break;
		case 1:
			if (CAM::IS_SPHERE_VISIBLE(-131.7905f, -31.7847f, 95.0884f, 5f))
			{
				return 1;
			}
			break;
		case 6:
			if (CAM::IS_SPHERE_VISIBLE(2358.853f, 1375.151f, 105.5556f, 5f))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_675()
{
	if (func_234(180573150, 1) || func_234(-404697685, 1))
	{
		if ((PED::_0x34D6AC1157C8226C(func_179(0), 49488831) && TASK::IS_PED_ACTIVE_IN_SCENARIO(func_179(0), 1)) && func_470(func_179(0), &(Global_1357549->f_1663[0]), 1, 0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	switch (func_148())
	{
		case 6:
			if (CLOCK::GET_CLOCK_HOURS() < 9)
			{
				return 1;
			}
			if (CLOCK::GET_CLOCK_HOURS() == 9)
			{
				if (CLOCK::GET_CLOCK_MINUTES() < 30)
				{
					return 1;
				}
			}
			if (CLOCK::GET_CLOCK_HOURS() >= 19)
			{
				if (CLOCK::GET_CLOCK_MINUTES() > 30)
				{
					return 1;
				}
			}
			if (CLOCK::GET_CLOCK_HOURS() >= 20)
			{
				return 1;
			}
			break;
		default:
			if (CLOCK::GET_CLOCK_HOURS() < 6)
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_676(int iParam0)
{
	int iVar0;

	iVar0 = func_991(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_677(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (STREAMING::_0xCF45DF50C7775F2A())
	{
		return 0;
	}
	iVar1 = func_148();
	iVar0 = func_1091(iVar1, iParam0, bParam1);
	if (!func_903(iVar0))
	{
		return 1;
	}
	return 1;
}

bool func_678(int iParam0, bool bParam1)
{
	if (!func_536(iParam0))
	{
		return false;
	}
	if (!bParam1)
	{
		if (func_357(iParam0) || func_537(iParam0, 44, 1))
		{
			return false;
		}
	}
	return MISC::ARE_STRINGS_EQUAL(&(((*Global_1360165)[iParam0 /*1157*/])->f_48), "Sleep");
}

int func_679()
{
	if (ENTITY::DOES_ENTITY_EXIST(func_179(1)))
	{
		if (VOLUME::_0x92A78D0BEDB332A3(&(Global_1357549->f_1663[1])))
		{
			if (func_470(func_179(1), &(Global_1357549->f_1663[1]), 1, 0))
			{
				if ((PED::_0x34D6AC1157C8226C(func_179(1), 640190094) || PED::_0x34D6AC1157C8226C(func_179(1), 343112864)) || PED::_0x34D6AC1157C8226C(func_179(1), 1774730608))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_680()
{
	if (VOLUME::_0x92A78D0BEDB332A3(&(Global_1357549->f_1663[1])))
	{
		if (func_470(Global_35, &(Global_1357549->f_1663[1]), 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_681(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam1 || iParam0 == 1)
	{
		func_1092(iParam0, 0);
	}
	if (!bParam1 || iParam0 == 2)
	{
		func_1093(iParam0, 0);
	}
	if (!bParam1 || iParam0 == 3)
	{
		func_1094(iParam0, 0);
	}
	if (!bParam1 || iParam0 == 6)
	{
		func_1095(iParam0, 0);
	}
	if (bParam2)
	{
		Global_1357549->f_575++;
		if (Global_1357549->f_575 >= 18)
		{
			Global_1357549->f_575 = 0;
		}
	}
}

int func_682()
{
	if (func_148() == 2 || func_148() == 3)
	{
		if (func_384(13, 0) > 1)
		{
			STREAMING::REQUEST_MODEL(joaat("pirogue"), false);
			if (STREAMING::HAS_MODEL_LOADED(joaat("pirogue")))
			{
				return 1;
			}
			return 0;
		}
	}
	return 1;
}

void func_683()
{
	func_933(32);
}

var func_684()
{
	return Global_1357549->f_1670;
}

int func_685()
{
	if ((SCRIPTS::IS_THREAD_ACTIVE(((*Global_1347702)[134 /*49*/])->f_42, false) && !func_676(((*Global_1347702)[134 /*49*/])->f_15)) && !func_996(((*Global_1347702)[134 /*49*/])->f_13, 4))
	{
		return 1;
	}
	if (func_676(((*Global_1347702)[134 /*49*/])->f_15))
	{
		return 1;
	}
	return 0;
}

void func_686(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	var uVar0;
	float fVar1;

	uVar0 = func_691(16);
	fVar1 = func_944();
	if (!bParam4 || iParam0 == 1)
	{
		func_1096(iParam0, iParam1, iParam2);
		func_1097(iParam0, fVar1, iParam2);
	}
	if (!bParam4 || iParam0 == 2)
	{
		func_1098(iParam0, iParam1, iParam2, bParam3);
		func_1099(iParam0, fVar1, iParam2, bParam3);
	}
	if (!bParam4 || iParam0 == 3)
	{
		func_1100(iParam0, iParam1, iParam2);
		func_1101(iParam0, fVar1, iParam2);
	}
	func_1102(iParam0, Global_40.f_4283.f_314);
	func_1103(iParam0, uVar0);
}

int func_687(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			func_885(Global_40.f_4283.f_6[iVar0 /*5*/], bParam1, bParam2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_688(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::SET_BIT(Global_1934765->f_21[iVar1], iVar2);
}

void func_689(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::CLEAR_BIT(Global_1934765->f_21[iVar1], iVar2);
}

int func_690(int iParam0, int iParam1)
{
	float fVar0;

	fVar0 = func_944();
	if (((iParam0 == 1 && func_1104(fVar0, iParam1)) || (iParam0 == 3 && func_1105(fVar0, iParam1))) || (iParam0 == 2 && func_1106(fVar0, iParam1)))
	{
		return 1;
	}
	return 0;
}

int func_691(int iParam0)
{
	int iVar0;

	iVar0 = 1;
	if (iParam0 == 16)
	{
		iVar0 = Global_40.f_4283.f_312;
	}
	else
	{
		iVar0 = func_384(iParam0, 0);
	}
	return iVar0;
}

int func_692(int iParam0)
{
	switch (func_56())
	{
		case -1:
			return (Global_40.f_4283.f_2 && iParam0) != 0;
	}
	return 0;
}

float func_693(int iParam0, vector3 vParam1, bool bParam4)
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
	return func_702(vVar0, vParam1);
}

int func_694(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = 1;
	*uParam0 = TASK::_0xF533D68FF970D190(func_697(func_148()), -717884433, 3f, 0, 1);
	*uParam2 = TASK::_0xF533D68FF970D190(func_697(func_148()), 1751045490, 5f, 0, 1);
	if (func_234(-558867971, 1))
	{
		*uParam1 = TASK::_0xF533D68FF970D190(func_698(func_148()), -1932609172, 3f, 0, 1);
	}
	else
	{
		*uParam1 = TASK::_0xF533D68FF970D190(func_698(func_148()), 1340532149, 3f, 0, 1);
	}
	if (!TASK::_0x841475AC96E794D1(*uParam0))
	{
		iVar0 = 0;
	}
	if (!TASK::_0x841475AC96E794D1(*uParam1))
	{
		iVar0 = 0;
	}
	if (!TASK::_0x841475AC96E794D1(*uParam2))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_695(int iParam0)
{
	int iVar0;
	int iVar1;

	func_580(iParam0, &iVar0, &iVar1);
	func_1107(iVar0, iVar1);
}

void func_696(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_56() != -1)
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

Vector3 func_697(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -137.545f, -19.582f, 95.088f;
		case 2:
			return 679.883f, -1255.265f, 43.027f;
		case 3:
			return 1879.71f, -1862.96f, 41.81f;
		case 6:
			return 2370.86f, 1350.64f, 105.36f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_698(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -133.95f, -18.69f, 95.13f;
		case 2:
			return 672.765f, -1259.633f, 42.989f;
		case 3:
			return 1877.16f, -1869.53f, 41.81f;
		case 6:
			return 2379.08f, 1348.86f, 105.29f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_699(var uParam0)
{
	if (!func_203(Global_40.f_4283.f_330))
	{
		return 2;
	}
	if (func_166() && !(func_234(-1461741225, 1) || func_234(-404697685, 1)))
	{
		return 5;
	}
	if (!func_344(PLAYER::PLAYER_PED_ID(), 0))
	{
		return 6;
	}
	return 1;
}

Vector3 func_700(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -133.243f, -18.4795f, 95.2772f;
		case 2:
			return 672.3809f, -1260.012f, 43.252f;
		case 3:
			return 1877.107f, -1869.955f, 42.0489f;
		case 6:
			return 2379.597f, 1348.682f, 105.38f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_701(int iParam0, int iParam1)
{
	int iVar0;

	if (func_387(iParam1))
	{
		if (func_1108(Global_1934051->f_33))
		{
			iVar0 = func_1109(iParam1);
			if (iVar0 != 0)
			{
				MAP::_0x662D364ABF16DE2F(iParam0, iVar0);
			}
		}
	}
}

float func_702(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

void func_703(int iParam0, int iParam1)
{
	(Global_1905944->f_22[iParam0 /*9*/])->f_2 = ((Global_1905944->f_22[iParam0 /*9*/])->f_2 || iParam1);
}

int func_704()
{
	if (STREAMING::_IS_IMAP_ACTIVE(1157066259))
	{
		if (TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-561898433))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-561898433, false);
		}
		return 1;
	}
	else if (TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-561898433) == 0)
	{
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-561898433, true);
	}
	if (STREAMING::_IS_IMAP_ACTIVE(1070723367) || STREAMING::_IS_IMAP_ACTIVE(44502487))
	{
		return 1;
	}
	return 0;
}

int func_705(int iParam0)
{
	switch (func_56())
	{
		case -1:
			return (Global_40.f_4283.f_3 && iParam0) != 0;
	}
	return 0;
}

void func_706(int iParam0)
{
	switch (func_56())
	{
		case -1:
			Global_40.f_4283.f_3 = (Global_40.f_4283.f_3 || iParam0);
			break;
	}
}

void func_707(int iParam0)
{
	switch (func_56())
	{
		case -1:
			Global_40.f_4283.f_3 = (Global_40.f_4283.f_3 - (Global_40.f_4283.f_3 && iParam0));
			break;
	}
}

int func_708(var uParam0, var uParam1, var uParam2)
{
	switch (func_148())
	{
		case 1:
			*uParam0 = { -131.492f, -31.606f, 94.33f };
			*uParam1 = { 0f, 0f, -4.423f };
			*uParam2 = { 5.85f, 5.99f, 6.343f };
			return 1;
		case 2:
			*uParam0 = { 653.8757f, -1253.203f, 43.1254f };
			*uParam1 = { 1.355f, 0f, 124.7791f };
			*uParam2 = { 5.85f, 5.59f, 6.343f };
			return 1;
		case 6:
			*uParam0 = { 2359.789f, 1376.458f, 106.883f };
			*uParam1 = { 0f, 0f, -26.9f };
			*uParam2 = { 5.85f, 5.59f, 9.343f };
			return 1;
	}
	return 0;
}

int func_709()
{
	if ((STREAMING::_IS_IMAP_ACTIVE(1261237250) || STREAMING::_IS_IMAP_ACTIVE(1102643191)) || STREAMING::_IS_IMAP_ACTIVE(1475953931))
	{
		return 1;
	}
	return 0;
}

int func_710(var uParam0, var uParam1, var uParam2)
{
	switch (func_148())
	{
		case 1:
			*uParam0 = { -133.3219f, -31.5484f, 94.33f };
			*uParam1 = { 0f, 0f, -4.423f };
			*uParam2 = { 0.75f, 5.9f, 6.343f };
			return 1;
		case 2:
			*uParam0 = { 652.0854f, -1254.513f, 43.1254f };
			*uParam1 = { 1.355f, 0f, 124.7791f };
			*uParam2 = { 5.85f, 0.75f, 6.343f };
			return 1;
		case 6:
			*uParam0 = { 2360.844f, 1378.205f, 106.883f };
			*uParam1 = { 0f, 0f, -26.9f };
			*uParam2 = { 5.85f, 0.75f, 9.343f };
			return 1;
	}
	return 0;
}

int func_711(int iParam0)
{
	switch (iParam0)
	{
		case -473821519:
		case -281401951:
		case -56704918:
		case 461310338:
		case 698292842:
		case 1397058998:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_712(int iParam0)
{
	int iVar0;

	if (!func_1110(iParam0))
	{
		return;
	}
	iVar0 = -1;
	if (func_1111(iParam0, &iVar0))
	{
		func_1112(iVar0);
	}
}

void func_713(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;

	if (!func_536(iParam0))
	{
		return;
	}
	if (!func_1110(iParam1))
	{
		return;
	}
	iVar0 = -1;
	bVar1 = false;
	if (func_1113(iParam0, iParam1, &iVar0, &bVar1))
	{
		if (bVar1)
		{
			func_1114(iParam0, &((Global_40.f_4942[iParam0 /*60*/])->f_8));
		}
		if (iVar0 != -1)
		{
			func_1115(iParam0, iVar0);
		}
	}
}

void func_714(int iParam0)
{
	switch (func_56())
	{
		case -1:
			Global_1357549->f_1496 = (Global_1357549->f_1496 || iParam0);
			break;
	}
}

bool func_715()
{
	return Global_1392040->f_6;
}

int func_716(var uParam0)
{
	if (func_148() == 1)
	{
		if (func_718(14))
		{
			return 0;
		}
	}
	if (func_494(18, 6) && !func_38(4))
	{
		return 0;
	}
	if (func_996(((*Global_1347702)[134 /*49*/])->f_13, 64))
	{
		return 0;
	}
	if (func_12(67108864))
	{
		return 0;
	}
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0;
	}
	switch (func_148())
	{
		case 8:
			if (!func_943(1))
			{
				return 0;
			}
			if (func_32() != 1)
			{
				return 0;
			}
			break;
		default:
			if (func_32() != 1)
			{
				return 0;
			}
			break;
	}
	if (func_133(0, 0, 1))
	{
		return 0;
	}
	if (Global_18 || func_134(&Global_1935630, 32768))
	{
		return 0;
	}
	if (func_1116(0))
	{
		return 0;
	}
	return 1;
}

bool func_717(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_718(int iParam0)
{
	return Global_1327590->f_10 == iParam0;
}

void func_719(int iParam0, int iParam1)
{
	func_1117(iParam0, iParam1);
}

void func_720(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 3)
	{
		switch (iVar1)
		{
			case 0:
				iVar0 = func_1118(1);
				break;
			case 1:
				iVar0 = func_1118(7);
				break;
			case 2:
				iVar0 = func_1118(9);
				break;
		}
		if (PED::_0x34D6AC1157C8226C(iVar0, -1322841316))
		{
			uParam0->f_1617 = 1;
			uParam1->f_2 = 6;
		}
		else if (PED::_0x34D6AC1157C8226C(iVar0, 2012005894))
		{
			uParam0->f_1617 = 1;
		}
		iVar1++;
	}
}

void func_721(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (MAP::DOES_BLIP_EXIST(((*uParam0)[iVar0 /*8*/])->f_4))
		{
			MAP::REMOVE_BLIP(&(((*uParam0)[iVar0 /*8*/])->f_4));
		}
		iVar0++;
	}
}

void func_722(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		if (((*Global_1945938)[iParam0 /*18*/])->f_5 == 5 && !func_585(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, 0);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
		}
	}
}

void func_723(var uParam0, var uParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (!bParam2 && !func_175(&(uParam0->f_1638)))
	{
		func_182(&(uParam0->f_1638), 1);
		GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
		uParam0->f_1603 = { 0f, 0f, 0f };
		uParam0->f_1618 = 1;
		if (iParam3 && !func_133(0, 0, 1))
		{
			if (bParam4)
			{
				func_1119("FINISH_CAMP_CHORE_CANCELED", 7500, 1, 0, 0, 0, -1, -1, 0);
			}
			else
			{
				func_1119("FINISH_CAMP_CHORE_FAILED", 7500, 1, 0, 0, 0, -1, -1, 0);
			}
		}
		return;
	}
	if (uParam0->f_1618 && GRAPHICS::ANIMPOSTFX_IS_RUNNING("CamTransition01"))
	{
		uParam0->f_1627 = VOLUME::_CREATE_VOLUME_CYLINDER(Global_36, 0f, 0f, 0f, 1f, 1f, 3f);
		if (uParam0->f_1582.f_1 == 7)
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, 0, 1);
		}
		uParam0->f_1615 = 0;
		TASK::_0x4161648394262FDF(func_1120(&(uParam0->f_1582)), 0.05f);
		uParam0->f_1618 = 0;
		return;
	}
	if (bParam2)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), false, 0, false, false);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), false, 1, false, false);
		TASK::_0x4161648394262FDF(func_1120(&(uParam0->f_1582)), 0.05f);
		TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
		TASK::CLEAR_PED_SECONDARY_TASK(Global_35);
		uParam0->f_1603 = { Global_36 };
	}
	if (bParam2 || (func_175(&(uParam0->f_1638)) && func_491(&(uParam0->f_1638)) > 2))
	{
		if (!uParam0->f_1615)
		{
			uParam0->f_1642 = 0;
			if (func_211(uParam0->f_1610))
			{
				func_212(&(uParam0->f_1610), 1, 1);
			}
			func_721(uParam1);
			if (uParam0->f_1643 != -1)
			{
				if (MAP::DOES_BLIP_EXIST(uParam0->f_1582.f_4))
				{
					MAP::REMOVE_BLIP(&(uParam0->f_1582.f_4));
				}
				if (uParam0->f_1582.f_1 == 7)
				{
					func_408(Global_36, 3f, 0);
				}
				func_1121(uParam1, &(uParam0->f_1582));
				func_1122(&(uParam0->f_1582));
				((*uParam1)[uParam0->f_1643 /*8*/])->f_2 = 2;
				uParam0->f_1643 = -1;
			}
			if (func_717(uParam0->f_1598, 32) && uParam0->f_1644 != -1)
			{
				if (MAP::DOES_BLIP_EXIST(uParam0->f_1590.f_4))
				{
					MAP::REMOVE_BLIP(&(uParam0->f_1590.f_4));
				}
				func_724(&(((*uParam1)[uParam0->f_1644 /*8*/])->f_3), 1);
				uParam0->f_1599 = 0;
				func_724(&(uParam0->f_1598), 32);
				TASK::_0x4161648394262FDF(func_1120(&(uParam0->f_1590)), 0.05f);
				func_1122(&(uParam0->f_1590));
				((*uParam1)[uParam0->f_1644 /*8*/])->f_2 = 2;
				func_719(&iVar0, 1798);
				func_1123(uParam1, iVar0, 0);
				uParam0->f_1644 = -1;
			}
			if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_1649))
			{
				POPULATION::_0x74C2B3DC0B294102(uParam0->f_1649);
				POPULATION::_0xA1CFB35069D23C23(uParam0->f_1649);
				VOLUME::_0x43F867EF5C463A53(uParam0->f_1649);
			}
			func_1124();
			func_1125(1073741824);
			func_171(func_136(func_135()), 2097152);
			func_171(func_136(func_135()), 2048);
			func_171(func_136(func_135()), 128);
			func_50(4);
			PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 3, 2, 0);
			PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 4, 2, 0);
			PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
			func_1126(1);
			if (!bParam2)
			{
				TASK::_0xFDECCA06E8B81346(Global_35);
				PED::_0x2208438012482A1A(Global_35, false, true);
			}
			if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_1627))
			{
				VOLUME::_0x43F867EF5C463A53(uParam0->f_1627);
			}
			uParam0->f_1615 = 1;
		}
		if (bParam2)
		{
			uParam0->f_1581 = -1;
			func_183(&(uParam0->f_1638));
			return;
		}
		if (uParam0->f_1615 && !bParam2)
		{
			if (!func_494(18, 6))
			{
				TASK::SET_SCENARIO_GROUP_ENABLED("PLAYER_CAMP_CHORES", false);
				uParam0->f_1581 = -1;
				func_721(uParam1);
				if (func_211(uParam0->f_1611))
				{
					func_722(func_583(uParam0->f_1611), 0);
				}
			}
			else
			{
				func_726(uParam0, uParam1);
			}
			func_183(&(uParam0->f_1638));
		}
	}
}

void func_724(int iParam0, int iParam1)
{
	func_931(iParam0, iParam1);
}

void func_725(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (((((*uParam0)[iVar0 /*8*/])->f_2 == 5 || ((*uParam0)[iVar0 /*8*/])->f_2 == -2) || ((*uParam0)[iVar0 /*8*/])->f_2 == 0) || ((*uParam0)[iVar0 /*8*/])->f_2 == 6)
		{
		}
		else
		{
			((*uParam0)[iVar0 /*8*/])->f_2 = -1;
			if (MAP::DOES_BLIP_EXIST(((*uParam0)[iVar0 /*8*/])->f_4))
			{
				MAP::REMOVE_BLIP(&(((*uParam0)[iVar0 /*8*/])->f_4));
			}
		}
		iVar0++;
	}
}

void func_726(var uParam0, var uParam1)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	TASK::SET_SCENARIO_GROUP_ENABLED("BCH_BASE_CHORES", true);
	func_1127(&iVar0, 331);
	if (func_38(268435456))
	{
		vVar1 = -1;
		vVar1.f_1 = -1;
		vVar1.f_2 = -1;
		func_1128(21, &vVar1, 1);
		func_1129(&vVar1, 1, 1);
	}
	if (func_717(uParam0->f_1598, 256))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("BCH_GATHER_MILK_CHORES", true);
		func_1127(&iVar0, 16);
	}
	if (func_717(uParam0->f_1598, 512))
	{
		func_1127(&iVar0, 16384);
	}
	if (func_717(uParam0->f_1598, 64))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("BCH_GATHER_EGGS_CHORES", true);
		func_1127(&iVar0, 32);
	}
	if (iVar0 != 0)
	{
		func_1123(uParam1, iVar0, 1);
	}
	uParam0->f_1581 = 2;
}

int func_727(var uParam0)
{
	if (uParam0->f_1582.f_2 == 4 || uParam0->f_1582.f_2 == 3)
	{
		return 1;
	}
	if (uParam0->f_1590.f_2 == 0)
	{
		return 1;
	}
	return 0;
}

Vector3 func_728()
{
	return ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_36602, -0.066579f, -2.72744f, -0.856272f);
}

int func_729(int iParam0)
{
	return BUILTIN::FLOOR(BUILTIN::POW(2f, BUILTIN::TO_FLOAT(iParam0)));
}

Vector3 func_730(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -0.414f, -0.954f, 0.18f;
		case 1:
			return 0.315f, -0.901f, 0.18f;
		case 2:
			return 0.366f, -1.436f, 0.18f;
		case 3:
			return -0.413f, -1.595f, 0.18f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_731(var uParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;

	uParam0->f_1642 = 0;
	uParam0->f_1626 = 0;
	func_1122(&(uParam0->f_1582));
	func_1122(&(uParam0->f_1590));
	if (func_148() == 8)
	{
		if (func_943(1) || func_1130(1))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("PLAYER_CAMP_CHORES_WOOD_CHOP", true);
			TASK::SET_SCENARIO_GROUP_ENABLED("PLAYER_CAMP_CHORES", true);
		}
	}
	else if (func_148() == 1)
	{
		if (!func_718(14))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("PLAYER_CAMP_CHORES_WOOD_CHOP", true);
			TASK::SET_SCENARIO_GROUP_ENABLED("PLAYER_CAMP_CHORES", true);
		}
	}
	else
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("PLAYER_CAMP_CHORES_WOOD_CHOP", true);
		TASK::SET_SCENARIO_GROUP_ENABLED("PLAYER_CAMP_CHORES", true);
	}
	Global_40.f_4283.f_408.f_3 = 0f;
	Global_40.f_4283.f_408.f_2 = 0f;
	uParam0->f_1606 = { 0f, 0f, 0f };
	uParam0->f_1598 = 0;
	GRAPHICS::_0x5199405EABFBD7F0("CamTransition01");
	uParam0->f_1612 = ANIMSCENE::_CREATE_ANIM_SCENE("script@respawn@sky@SkyTL_1500_03Clouds", 0, 0, false, true);
	ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_1612);
	STREAMING::_0xB223249B7798EEED(Global_35, -1322841316, 4, 569025729);
	STREAMING::_0x19A6BE7D9C6884D3(889687128, 2051, 0, 0);
	STREAMING::_0x19A6BE7D9C6884D3(1051161193, 2051, 0, 0);
	if (func_202(Global_40.f_4283.f_408.f_1))
	{
		func_1131(Global_40.f_4283.f_408.f_1, &uVar5, &uVar4, &uVar3, &iVar2, &uVar1, &uVar0);
		iVar6 = func_1132(func_573());
		iVar7 = func_1132(Global_40.f_4283.f_408.f_1);
		if (iVar6 == iVar7 && iVar2 <= 0)
		{
			func_1133(uParam0, uParam1);
			func_733(uParam0, uParam1);
		}
		else
		{
			func_1134(uParam0);
			func_1135(uParam1);
			func_1136(uParam1);
		}
	}
	else
	{
		func_1134(uParam0);
		func_1135(uParam1);
		func_1136(uParam1);
	}
	STREAMING::REQUEST_MODEL(1077976463, false);
	uParam0->f_1581 = 1;
}

int func_732(var uParam0)
{
	if (!STREAMING::HAS_MODEL_LOADED(1077976463))
	{
		return 0;
	}
	if (!AUDIO::_0xD9130842D7226045("Chore_Water_Pump_Sounds", 0))
	{
		return 0;
	}
	else if (!AUDIO::_0x4AD019591E94C064("Pour_Water_Onto_Water", Global_35, "Chore_Water_Pump_Sounds", -2))
	{
		return 0;
	}
	if (GRAPHICS::_0xBF2DD155B2ADCD0A("CamTransition01"))
	{
		return 0;
	}
	return 1;
}

void func_733(var uParam0, var uParam1)
{
	if (func_148() == 8)
	{
		if (func_38(134217728))
		{
			if (Global_40.f_4283.f_408.f_5 < 2)
			{
				func_319("FINISH_CAMP_UNLOCKED_COW_MILKING", 10000, 0, 0, 0, 1);
			}
			func_50(134217728);
			func_719(&(uParam0->f_1598), 16384);
			Global_40.f_4283.f_408.f_6 = 1;
		}
		if (Global_40.f_4283.f_408.f_6)
		{
			func_1137(3, 1);
			func_719(&(uParam0->f_1598), 16384);
			func_719(&(uParam0->f_1598), 128);
		}
		if (uParam0->f_1630.f_4 >= 1 && !func_717(uParam0->f_1598, 512))
		{
			if (uParam0->f_1630.f_1 < 1)
			{
				func_319("FINISH_CAMP_UNLOCKED_FEED_CHICKENS", 10000, 0, 0, 0, 1);
			}
			func_719(&(uParam0->f_1598), 8192);
			func_719(&(uParam0->f_1598), 512);
		}
		if (func_38(268435456))
		{
			Global_40.f_4283.f_408.f_5++;
		}
		if (Global_40.f_4283.f_408.f_5 >= 2)
		{
			if (!func_717(uParam0->f_1598, 256))
			{
				if (!func_717(uParam0->f_1598, 1048576))
				{
					func_319("FINISH_CAMP_UNLOCKED_MILK", 10000, 0, 0, 0, 1);
					func_719(&(uParam0->f_1598), 1048576);
				}
				func_719(&(uParam0->f_1598), 256);
				func_719(&(uParam0->f_1598), 65536);
			}
			func_50(268435456);
		}
		else
		{
			func_50(268435456);
		}
		if (uParam0->f_1630.f_1 >= 1 && !func_717(uParam0->f_1598, 64))
		{
			if (!func_717(uParam0->f_1598, 2097152))
			{
				func_319("FINISH_CAMP_UNLOCKED_EGGS", 10000, 0, 0, 0, 1);
				func_719(&(uParam0->f_1598), 2097152);
			}
			func_719(&(uParam0->f_1598), 64);
			func_719(&(uParam0->f_1598), 32768);
		}
		if ((uParam0->f_1630.f_2 >= 2 && uParam0->f_1630.f_3 >= 2) && !func_692(262144))
		{
			func_719(&(uParam0->f_1598), 2048);
		}
	}
	func_1138(uParam0, uParam1);
	uParam0->f_1581 = 2;
}

void func_734(var uParam0, var uParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = uParam0->f_1642;
	if (((*uParam1)[iVar0 /*8*/])->f_1 == 7)
	{
		uParam0->f_1645 = iVar0;
	}
	vVar1 = { func_1120((*uParam1)[iVar0 /*8*/]) };
	if (func_1139((*uParam1)[iVar0 /*8*/], 1) && ((*uParam1)[iVar0 /*8*/])->f_2 != 6)
	{
		if (!func_213(vVar1))
		{
			if (func_717(uParam0->f_1598, 32))
			{
				if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_1649))
				{
					VOLUME::_0x39816F6F94F385AD(uParam0->f_1649, vVar1, 0f, 0f, 0f, 2f, 2f, 3f);
				}
				func_1140(uParam0, uParam1, vVar1, iVar0, 408396114, -570710357, 0);
			}
			else
			{
				func_1140(uParam0, uParam1, vVar1, iVar0, func_1141(((*uParam1)[iVar0 /*8*/])->f_1), func_1142(((*uParam1)[iVar0 /*8*/])->f_1), 1);
			}
			if (((*uParam1)[iVar0 /*8*/])->f_1 == 7)
			{
				TASK::SET_SCENARIO_GROUP_ENABLED("PLAYER_CAMP_CHORES_WOOD_CHOP", true);
				if (TASK::IS_SCENARIO_OCCUPIED(vVar1, 0.25f, true))
				{
					((*uParam1)[iVar0 /*8*/])->f_2 = 6;
					if (MAP::DOES_BLIP_EXIST(((*uParam1)[iVar0 /*8*/])->f_4))
					{
						MAP::REMOVE_BLIP(&(((*uParam1)[iVar0 /*8*/])->f_4));
					}
				}
			}
			else if (uParam1[iVar0 /*8*/] != 0)
			{
				iVar4 = TASK::_0xF533D68FF970D190(vVar1, uParam1[iVar0 /*8*/], func_1143((*uParam1)[iVar0 /*8*/]), 0, 1);
				if (TASK::_0x841475AC96E794D1(iVar4))
				{
					if (!TASK::_0x0CC36D4156006509(iVar4))
					{
						TASK::_0xEEE4829304F93EEE(iVar4, 1);
					}
				}
			}
		}
		else if (MAP::DOES_BLIP_EXIST(((*uParam1)[iVar0 /*8*/])->f_4))
		{
			MAP::REMOVE_BLIP(&(((*uParam1)[iVar0 /*8*/])->f_4));
		}
	}
	else
	{
		if (func_717(uParam0->f_1598, 32))
		{
			if (uParam0->f_1590.f_1 == 14)
			{
				if (((*uParam1)[iVar0 /*8*/])->f_1 == 8)
				{
					uParam0->f_1599++;
				}
			}
			else if (uParam0->f_1590.f_1 == 9)
			{
				if (((*uParam1)[iVar0 /*8*/])->f_1 == 2)
				{
					uParam0->f_1599++;
				}
			}
		}
		if (MAP::DOES_BLIP_EXIST(((*uParam1)[iVar0 /*8*/])->f_4))
		{
			MAP::REMOVE_BLIP(&(((*uParam1)[iVar0 /*8*/])->f_4));
		}
		if (((*uParam1)[iVar0 /*8*/])->f_2 != 0)
		{
			if (((*uParam1)[iVar0 /*8*/])->f_1 == 7)
			{
				if (!uParam0->f_1617)
				{
					TASK::SET_SCENARIO_GROUP_ENABLED("PLAYER_CAMP_CHORES_WOOD_CHOP", false);
					if (((*uParam1)[iVar0 /*8*/])->f_2 == 6 && !CAM::IS_SPHERE_VISIBLE(vVar1, 1.5f))
					{
						func_408(vVar1, 0.5f, 2);
					}
				}
				else
				{
					((*uParam1)[iVar0 /*8*/])->f_2 = 6;
				}
			}
			else if (uParam1[iVar0 /*8*/] != 0)
			{
				if (!func_213(vVar1))
				{
					if (((*uParam1)[iVar0 /*8*/])->f_2 == 6)
					{
						iVar5 = TASK::_0xF533D68FF970D190(vVar1, uParam1[iVar0 /*8*/], func_1143((*uParam1)[iVar0 /*8*/]), 0, 1);
						if (TASK::_0x841475AC96E794D1(iVar5))
						{
							TASK::_0xEEE4829304F93EEE(iVar5, 0);
							TASK::_0x4161648394262FDF(vVar1, 0.05f);
						}
					}
					else if (((*uParam1)[iVar0 /*8*/])->f_2 == -1)
					{
						iVar6 = TASK::_0xF533D68FF970D190(vVar1, uParam1[iVar0 /*8*/], func_1143((*uParam1)[iVar0 /*8*/]), 0, 1);
						if (TASK::_0x841475AC96E794D1(iVar6))
						{
							TASK::_0xEEE4829304F93EEE(iVar6, 0);
						}
					}
				}
			}
		}
	}
	uParam0->f_1642++;
	if (uParam0->f_1642 >= *uParam1)
	{
		if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_1649))
		{
			POPULATION::_0xB56D41A694E42E86(uParam0->f_1649, 10208, 0, 0, -1, -1, 0);
		}
		uParam0->f_1642 = 0;
		uParam0->f_1609 = 0;
		uParam0->f_1606 = { 0f, 0f, 0f };
		uParam0->f_1581 = 4;
	}
}

void func_735(var uParam0, var uParam1)
{
	int iVar0;

	func_725(uParam1);
	uParam0->f_1642 = 0;
	uParam0->f_1606 = { 0f, 0f, 0f };
	uParam0->f_1609 = 0;
	switch (uParam0->f_1590.f_1)
	{
		case 1:
		case 9:
			func_719(&iVar0, 1798);
			func_1123(uParam1, iVar0, 1);
			uParam0->f_1590 = 889687128;
			if (MAP::DOES_BLIP_EXIST(uParam0->f_1590.f_4))
			{
				MAP::REMOVE_BLIP(&(uParam0->f_1590.f_4));
			}
			break;
		case 14:
			func_719(&iVar0, 16512);
			func_1123(uParam1, iVar0, 1);
			uParam0->f_1590 = 1051161193;
			if (MAP::DOES_BLIP_EXIST(uParam0->f_1590.f_4))
			{
				MAP::REMOVE_BLIP(&(uParam0->f_1590.f_4));
			}
			break;
	}
	uParam0->f_1581 = 2;
}

void func_736(var uParam0, var uParam1)
{
	if (uParam0->f_1614)
	{
		return;
	}
	if (func_344(Global_35, 0))
	{
		if (uParam0->f_1582.f_2 > 2 && uParam0->f_1582.f_2 < 5)
		{
			if (TASK::_0x0C3CB2E600C8977D(Global_35, 0) && PED::_0x34D6AC1157C8226C(Global_35, uParam0->f_1582))
			{
				if (uParam0->f_1582.f_2 == 4)
				{
					uParam0->f_1600 = { TASK::_0xA8452DD321607029(TASK::_0xDF7993356F52359A(Global_35, 0), 1) };
					if (!func_1144(&(uParam0->f_1582)))
					{
						uParam0->f_1582.f_2 = 5;
						func_212(&(uParam0->f_1610), 1, 1);
					}
					else
					{
						uParam0->f_1582.f_2 = 0;
						func_719(&(uParam0->f_1598), 32);
						((*uParam1)[uParam0->f_1643 /*8*/])->f_2 = 0;
						uParam0->f_1590 = { uParam0->f_1582 };
						uParam0->f_1644 = uParam0->f_1643;
						func_1122(&(uParam0->f_1582));
						uParam0->f_1643 = -1;
						uParam0->f_1581 = 3;
						return;
					}
				}
			}
		}
		if (func_38(4) && func_702(Global_36, uParam0->f_1646) > 10000f)
		{
			uParam0->f_1581 = 11;
			func_723(uParam0, uParam1, 0, 1, 1);
			return;
		}
		if (func_717(uParam0->f_1598, 32))
		{
			if ((!func_741() && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1)) && !TASK::_0x0C3CB2E600C8977D(Global_35, 0))
			{
				uParam0->f_1581 = 11;
				func_723(uParam0, uParam1, 0, 1, 1);
			}
			if (uParam0->f_1582.f_2 == 5 && !PED::IS_PED_USING_ANY_SCENARIO(Global_35))
			{
				uParam0->f_1581 = 14;
				return;
			}
		}
		else if (uParam0->f_1581 > 4)
		{
			if (!func_741() && !PED::IS_PED_USING_ANY_SCENARIO(Global_35))
			{
				if (uParam0->f_1582.f_2 == 5)
				{
					uParam0->f_1581 = 14;
				}
				else
				{
					uParam0->f_1581 = 11;
					func_723(uParam0, uParam1, 0, 1, 1);
				}
			}
		}
	}
}

int func_737(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_585(iVar0, 2))
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
				func_586(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}

void func_738(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = Global_1905944[iVar1];
	MISC::SET_BIT(&uVar3, iVar2);
	(*Global_1905944)[iVar1] = uVar3;
}

void func_739(var uParam0, var uParam1)
{
	if (uParam0->f_1582.f_2 > 0 || func_717(uParam0->f_1598, 32))
	{
		if (func_219(uParam0->f_1610, 1))
		{
			if (func_211(uParam0->f_1610))
			{
				func_212(&(uParam0->f_1610), 1, 1);
			}
			if (func_211(uParam0->f_1610))
			{
				func_318(uParam0->f_1610, 1);
			}
			uParam0->f_1581 = 11;
			func_723(uParam0, uParam1, 0, 1, 1);
		}
	}
}

void func_740(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (func_38(134217728) || func_38(268435456))
	{
		func_733(uParam0, uParam1);
	}
	func_1145(uParam0, (*uParam1)[uParam0->f_1645 /*8*/]);
	bVar0 = PED::IS_PED_USING_ANY_SCENARIO(Global_35);
	if (!func_727(uParam0) && func_211(uParam0->f_1610))
	{
		func_212(&(uParam0->f_1610), 1, 1);
	}
	if (func_38(4))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 21, true);
		PED::SET_PED_RESET_FLAG(Global_35, 168, true);
		PED::SET_PED_RESET_FLAG(Global_35, 288, true);
		PAD::_0x2804658EB7D8A50B(6, 855606917);
		PED::SET_PED_RESET_FLAG(Global_35, 202, true);
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.35f);
		if (uParam0->f_1590.f_1 == 14)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 316, true);
		}
		if (!func_211(uParam0->f_1610) && !bVar0)
		{
			uParam0->f_1610 = func_737("EXIT_CHORE", 992265328, Global_35, 0, 0, 0, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
			func_722(func_583(uParam0->f_1610), 0);
		}
		if (bVar0 && func_251(uParam0->f_1610, 1))
		{
			func_722(func_583(uParam0->f_1610), 0);
			PAD::DISABLE_CONTROL_ACTION(0, 992265328, false);
		}
		else if (!bVar0 && !func_251(uParam0->f_1610, 1))
		{
			func_722(func_583(uParam0->f_1610), 1);
		}
		else if (!func_251(uParam0->f_1610, 1))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 992265328, false);
		}
	}
	if (func_148() == 8)
	{
		func_1146(uParam0, uParam1);
	}
	if (func_344(Global_35, 0))
	{
		if (uParam0->f_1643 == -1 && ((bVar0 || PAD::IS_CONTROL_PRESSED(0, 782960533)) || func_462(Global_35, -76381094)))
		{
			iVar1 = TASK::_0xDF7993356F52359A(Global_35, 0);
			if (!TASK::_0x841475AC96E794D1(iVar1))
			{
				return;
			}
			iVar3 = TASK::_0xA92450B5AE687AAF(iVar1);
			uParam0->f_1646 = { TASK::_0xA8452DD321607029(iVar1, 1) };
			iVar2 = 0;
			while (iVar2 < *uParam1)
			{
				if (func_1139((*uParam1)[iVar2 /*8*/], 1))
				{
					if (iVar3 == uParam1[iVar2 /*8*/] && func_702(uParam0->f_1646, func_1120((*uParam1)[iVar2 /*8*/])) < func_1147((*uParam1)[iVar2 /*8*/]))
					{
						if (iVar3 == -1287936009)
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, 256, 0);
						}
						func_167(4);
						uParam0->f_1643 = iVar2;
						return;
					}
				}
				iVar2++;
			}
		}
		else if ((func_38(4) && !func_717(uParam0->f_1598, 32)) && !PED::IS_PED_USING_ANY_SCENARIO(Global_35))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
			func_50(4);
			uParam0->f_1643 = -1;
		}
		if (uParam0->f_1643 != -1 && (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -898657814)))
		{
			if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
			{
				GRAPHICS::_0x1C6306E5BC25C29C();
			}
			uParam0->f_1582 = { *((*uParam1)[uParam0->f_1643 /*8*/]) };
			func_719(&(((*uParam1)[uParam0->f_1643 /*8*/])->f_3), 1);
			func_1148(uParam1, &(uParam0->f_1582));
			func_1149(1);
			if (uParam0->f_1582.f_1 == 2 || uParam0->f_1582.f_1 == 10)
			{
				AUDIO::_0x6FB1DA3CA9DA7D90("Pour_Water_Onto_Water", Global_35, "Chore_Water_Pump_Sounds", 0, 0, 0);
			}
			uParam0->f_1581 = 5;
			if (func_1150((*uParam1)[uParam0->f_1643 /*8*/]))
			{
				func_721(uParam1);
			}
			if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_1649))
			{
				uParam0->f_1649 = VOLUME::_CREATE_VOLUME_AGGREGATE();
			}
			VOLUME::_0x39816F6F94F385AD(uParam0->f_1649, uParam0->f_1646, 0f, 0f, 0f, 2f, 2f, 3f);
			if (func_717(uParam0->f_1598, 32))
			{
				func_1151();
				func_1124();
			}
			if (!func_211(uParam0->f_1610) && uParam0->f_1582.f_1 == 7)
			{
				uParam0->f_1610 = func_737("EXIT_CHORE", 992265328, Global_35, 0, 0, 0, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
			}
			func_1152(1073741824);
			func_170(func_136(func_135()), 2048);
			func_170(func_136(func_135()), 2097152);
			func_170(func_136(func_135()), 128);
			PED::SET_PED_CONFIG_FLAG(Global_35, 43, true);
			PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 3, 2, 1);
			PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 4, 2, 1);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
			uParam0->f_1642 = 0;
			uParam0->f_1582.f_2 = 3;
		}
	}
}

int func_741()
{
	int iVar0;
	int iVar1;

	iVar0 = func_769(Global_35, 1, 0, 0);
	iVar1 = func_769(Global_35, 1, 1, 0);
	if (((iVar0 == 1549070292 || iVar0 == 1030402560) || iVar1 == 1549070292) || iVar1 == 1030402560)
	{
		return 1;
	}
	return 0;
}

void func_742(var uParam0, var uParam1)
{
	switch (uParam0->f_1582.f_1)
	{
		case 4:
			func_1153(uParam0, uParam1);
			break;
		case 0:
			func_1154(uParam0, uParam1);
			break;
		case 1:
			func_1155(uParam0, uParam1);
			break;
		case 9:
			func_1156(uParam0, uParam1);
			break;
		case 5:
			func_1157(uParam0, uParam1);
			break;
		case 6:
			func_1158(uParam0, uParam1);
			break;
		case 7:
			func_1159(uParam0, uParam1);
			break;
		case 2:
		case 3:
			func_1160(uParam0, uParam1);
			break;
		case 10:
			func_1160(uParam0, uParam1);
			break;
		case 14:
			func_1161(uParam0, uParam1);
			break;
		case 8:
			func_1162(uParam0, uParam1);
			break;
	}
}

int func_743(var uParam0, var uParam1)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = uParam0->f_1642;
	vVar1 = { func_1163((*uParam1)[iVar0 /*8*/]) };
	if (func_1139((*uParam1)[iVar0 /*8*/], 2))
	{
		if (uParam0->f_1582.f_1 == ((*uParam1)[iVar0 /*8*/])->f_1 && !func_213(vVar1))
		{
			if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_1649))
			{
				VOLUME::_0x39816F6F94F385AD(uParam0->f_1649, vVar1, 0f, 0f, 0f, 2f, 2f, 3f);
			}
			func_1140(uParam0, uParam1, vVar1, iVar0, 408396114, -570710357, 0);
		}
		else if (MAP::DOES_BLIP_EXIST(((*uParam1)[iVar0 /*8*/])->f_4))
		{
			MAP::REMOVE_BLIP(&(((*uParam1)[iVar0 /*8*/])->f_4));
		}
	}
	uParam0->f_1642++;
	if (uParam0->f_1642 >= *uParam1)
	{
		uParam0->f_1606 = { 0f, 0f, 0f };
		uParam0->f_1609 = 0;
		uParam0->f_1642 = 0;
		if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_1649))
		{
			POPULATION::_0xB56D41A694E42E86(uParam0->f_1649, 10208, 0, 0, -1, -1, 0);
		}
		return 1;
	}
	return 0;
}

void func_744(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (func_1164(&(uParam0->f_1582)))
	{
		iVar0 = func_1165(&(uParam0->f_1582));
		if (iVar0 != 0)
		{
			iVar1 = TASK::_0xF533D68FF970D190(uParam0->f_1600, iVar0, 0.15f, 0, 1);
			if (!TASK::_0xEA31F199A73801D3(iVar1))
			{
				uParam0->f_1582.f_2 = 4;
				uParam0->f_1581 = 8;
				return;
			}
		}
	}
	uParam0->f_1630++;
	Global_40.f_4283.f_408.f_4++;
	MISC::SET_BIT(&(Global_40.f_4283.f_408), uParam0->f_1643);
	Global_40.f_4283.f_408.f_1 = func_573();
	if (func_717(uParam0->f_1598, 32))
	{
		if (MAP::DOES_BLIP_EXIST(uParam0->f_1582.f_4))
		{
			MAP::REMOVE_BLIP(&(uParam0->f_1582.f_4));
		}
		if (uParam0->f_1582.f_1 == 8)
		{
			uParam0->f_1630.f_1++;
		}
		func_1166(45);
		func_445(10, 0, 0, 0, 0, 0, 1065353216, 0);
		func_721(uParam1);
		uParam0->f_1599++;
		if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_1649))
		{
			VOLUME::_0x43F867EF5C463A53(uParam0->f_1649);
		}
		((*uParam1)[uParam0->f_1643 /*8*/])->f_2 = 6;
		func_1122(&(uParam0->f_1582));
		uParam0->f_1643 = -1;
		func_733(uParam0, uParam1);
		if (uParam0->f_1599 >= func_1167(uParam0->f_1590.f_1))
		{
			uParam0->f_1581 = 12;
			uParam0->f_1599 = 0;
			if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_1649))
			{
				POPULATION::_0x74C2B3DC0B294102(uParam0->f_1649);
				POPULATION::_0xA1CFB35069D23C23(uParam0->f_1649);
				VOLUME::_0x43F867EF5C463A53(uParam0->f_1649);
			}
			func_746(uParam0, uParam1);
			return;
		}
		else if (func_148() == 8 && uParam0->f_1590.f_1 == 9)
		{
			func_1119("FINISH_CAMP_CHORE_WATER_BUCKET_BEECHERS_PART_1", 7500, 0, 1, 0, 0, -1, -1, 0);
			uParam0->f_1599 = (uParam0->f_1599 - 1);
			uParam0->f_1590 = -1287936009;
			uParam0->f_1581 = 5;
			uParam0->f_1582 = { uParam0->f_1590 };
			uParam0->f_1643 = uParam0->f_1644;
			uParam0->f_1582.f_4 = MAP::_0x554D9D53F696D002(408396114, func_1120(&(uParam0->f_1582)));
			MAP::SET_BLIP_SPRITE(uParam0->f_1590.f_4, -570710357, false);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_1590.f_4, "BLIP_CAMP_CHORE");
			return;
		}
		uParam0->f_1581 = iParam2;
		return;
	}
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_1649))
	{
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_1649);
		POPULATION::_0xA1CFB35069D23C23(uParam0->f_1649);
		VOLUME::_0x43F867EF5C463A53(uParam0->f_1649);
	}
	if (uParam0->f_1582.f_1 == 6)
	{
		uParam0->f_1625 = 1;
		uParam0->f_1624 = 6;
		uParam0->f_1630.f_3++;
		Global_40.f_4283.f_408.f_3 = (Global_40.f_4283.f_408.f_3 + 0.25f);
		func_1168(uParam0, &(uParam0->f_1582), uParam1);
	}
	else if (uParam0->f_1582.f_1 == 5)
	{
		uParam0->f_1625 = 1;
		uParam0->f_1624 = 5;
		uParam0->f_1630.f_2++;
		Global_40.f_4283.f_408.f_2 = (Global_40.f_4283.f_408.f_2 + 0.25f);
		func_1168(uParam0, &(uParam0->f_1582), uParam1);
	}
	else if (uParam0->f_1582.f_1 == 4)
	{
		uParam0->f_1630.f_4++;
		func_1168(uParam0, &(uParam0->f_1582), uParam1);
	}
	else if (uParam0->f_1582.f_1 != 7)
	{
		func_1168(uParam0, &(uParam0->f_1582), uParam1);
	}
	if (uParam0->f_1643 != -1)
	{
		((*uParam1)[uParam0->f_1643 /*8*/])->f_2 = 6;
		uParam0->f_1643 = -1;
		func_1122(&(uParam0->f_1582));
	}
	if (func_211(uParam0->f_1610))
	{
		func_212(&(uParam0->f_1610), 1, 1);
	}
	func_1126(1);
	func_1151();
	func_1124();
	PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 3, 2, 0);
	PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 4, 2, 0);
	func_1125(1073741824);
	func_171(func_136(func_135()), 2097152);
	func_171(func_136(func_135()), 2048);
	func_171(func_136(func_135()), 128);
	func_50(4);
	func_1166(45);
	PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
	func_445(10, 0, 0, 0, 0, 0, 1065353216, 0);
	func_721(uParam1);
	func_733(uParam0, uParam1);
}

void func_745(var uParam0, var uParam1)
{
	int iVar0;
	float fVar1;

	if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_1612, 0) && !uParam0->f_1613)
	{
		MAP::DISPLAY_RADAR(false);
		uParam0->f_1581 = 10;
		func_724(&(uParam0->f_1598), 2048);
		func_719(&(uParam0->f_1598), 4096);
		func_75(262144);
		uParam0->f_1618 = 1;
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_1612);
		uParam0->f_1613 = 1;
		return;
	}
	if (ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_1612, 0) && uParam0->f_1618)
	{
		if (CLOCK::GET_CLOCK_HOURS() < 16)
		{
			CLOCK::ADVANCE_CLOCK_TIME_TO(16, 0, 0);
		}
		func_859();
		if ((!func_357(13) || func_537(13, 45, 1)) || func_537(13, 46, 1))
		{
			_NAMESPACE48::_0xD4B614179BCD0654(func_561(13, 0));
		}
		if ((!func_357(4) || func_537(4, 45, 1)) || func_537(4, 46, 1))
		{
			_NAMESPACE48::_0xD4B614179BCD0654(func_561(4, 0));
		}
		if ((!func_357(14) || func_537(14, 45, 1)) || func_537(14, 46, 1))
		{
			_NAMESPACE48::_0xD4B614179BCD0654(func_561(14, 0));
		}
		if ((!func_357(7) || func_537(7, 45, 1)) || func_537(7, 46, 1))
		{
			_NAMESPACE48::_0xD4B614179BCD0654(func_561(7, 0));
		}
		ENTITY::SET_ENTITY_COORDS(Global_35, -1621.328f, -1390.344f, 81.839f, true, false, true, true);
		ENTITY::SET_ENTITY_HEADING(Global_35, 75.2354f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(-39.9676f, 1065353216);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-1.0538f, 1f);
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_1619[iVar0])))
			{
				OBJECT::DELETE_OBJECT(uParam0->f_1619[iVar0]);
			}
			iVar0++;
		}
		TASK::_0x4161648394262FDF(func_728(), 2f);
		uParam0->f_1618 = 0;
	}
	if (ANIMSCENE::_0xD8254CB2C586412B(uParam0->f_1612, 0))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_1612, 0);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_1612);
		fVar1 = 0f;
		fVar1 = (2.5f * IntToFloat(func_1169(Global_40.f_4283.f_408.f_2)));
		Global_40.f_4283.f_408.f_2 = 0f;
		fVar1 = (fVar1 + (1.5f * IntToFloat(func_1169(Global_40.f_4283.f_408.f_3))));
		Global_40.f_4283.f_408.f_3 = 0f;
		func_319(MISC::_CREATE_VAR_STRING(2, "CAMP_CHORE_DEMO_SOLD_PRODUCT", BUILTIN::CEIL((fVar1 * 100f))), 10000, 0, 0, 0, 1);
		MAP::DISPLAY_RADAR(true);
		func_1170(BUILTIN::CEIL((fVar1 * 100f)), 0, 1065353216, 1, 0, 0, 1, 752097756);
		uParam0->f_1581 = 4;
		return;
	}
}

void func_746(var uParam0, var uParam1)
{
	vector3 vVar0;

	if ((!TASK::_0x0C3CB2E600C8977D(Global_35, 0) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1)) && !func_462(Global_35, -76381094))
	{
		vVar0 = { func_1171() };
		uParam0->f_1582.f_2 = 5;
		uParam0->f_1614 = 1;
		if (!func_213(vVar0))
		{
			uParam0->f_1616 = TASK::CREATE_SCENARIO_POINT(func_1165(&(uParam0->f_1590)), func_1171(), func_1172(), 0f, 0f, 0);
			TASK::_TASK_USE_SCENARIO_POINT(Global_35, uParam0->f_1616, 0, 0, 1, 0, 0, 0, -1082130432, 0);
		}
		else
		{
			uParam0->f_1616 = TASK::CREATE_SCENARIO_POINT(func_1165(&(uParam0->f_1590)), Global_36, (ENTITY::GET_ENTITY_HEADING(Global_35) - 90f), 0f, 0f, 0);
			TASK::_TASK_USE_SCENARIO_POINT(Global_35, uParam0->f_1616, 0, 0, 1, 0, 0, 0, -1082130432, 0);
		}
		if (func_211(uParam0->f_1610))
		{
			func_212(&(uParam0->f_1610), 1, 1);
		}
	}
	if ((func_462(Global_35, 993674639) || func_462(Global_35, -76381094)) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256, 0);
	}
	if ((TASK::_0x841475AC96E794D1(uParam0->f_1616) && PED::_0x9C54041BB66BCF9E(Global_35, uParam0->f_1616)) && TASK::_0x0C3CB2E600C8977D(Global_35, 0))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
		func_1151();
		func_1124();
		func_1173(uParam0, uParam1);
		if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_1649))
		{
			VOLUME::_0x43F867EF5C463A53(uParam0->f_1649);
		}
		uParam0->f_1614 = 0;
	}
}

void func_747(int iParam0, int iParam1, vector3 vParam2)
{
	int iVar0;

	if (!CAM::IS_SPHERE_VISIBLE(vParam2, 0.5f))
	{
		iVar0 = CLOCK::GET_CLOCK_HOURS();
		if (iVar0 >= 7 && iVar0 < 10)
		{
			ENTITY::_0x56E0735D6273B227(iParam0, 0);
			func_1174(iParam1, 0.33f, 0.2f, 0.2f);
		}
		else if (iVar0 >= 10 && iVar0 < 12)
		{
			ENTITY::_0x56E0735D6273B227(iParam0, 0);
			func_1174(iParam1, 0.33f, 0.33f, 0.33f);
		}
		else if (iVar0 >= 12 && iVar0 < 20)
		{
			ENTITY::_0x56E0735D6273B227(iParam0, 0);
			func_1174(iParam1, 0.75f, 0.5f, 0.5f);
		}
		else if (iVar0 >= 20 && iVar0 < 21)
		{
			ENTITY::_0x56E0735D6273B227(iParam0, 1);
			func_1174(iParam1, 0.33f, 0.1f, 0.1f);
		}
		else if (iVar0 >= 21 && iVar0 < 22)
		{
			ENTITY::_0x56E0735D6273B227(iParam0, 1);
			func_1174(iParam1, 0.01f, 0.005f, 0.005f);
		}
		else
		{
			ENTITY::_0x56E0735D6273B227(iParam0, 1);
			func_1174(iParam1, 0f, 0f, 0f);
		}
	}
}

int func_748(int iParam0, bool bParam1)
{
	int iVar0;

	if (func_56() != -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_40.f_1094 - 1))
	{
		if (&Global_40.f_450[iVar0] == iParam0)
		{
			if (!bParam1 || ((*Global_1347702)[iVar0 /*49*/])->f_13 & 16384 == 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_749(int iParam0, char* sParam1, int iParam2)
{
	int iVar0;

	if (iParam2 && !func_211(iParam0))
	{
		return;
	}
	iVar0 = func_583(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, sParam1);
}

int func_750(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_983(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_1175(iParam0);
	if (iVar0 == 307971639 || (iParam1 && iVar0 == -427144552))
	{
		iVar1 = func_1176(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_1177(iParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_516(bParam2), iParam0, 0);
	return iVar2;
}

void func_751(int iParam0, int iParam1)
{
	Global_1357549->f_1672 = iParam0;
	Global_1357549->f_1673 = iParam1;
}

Vector3 func_752(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -135.483f, -34.0573f, 95.0734f;
		case 2:
			return 651.8384f, -1257.425f, 42.7455f;
		case 3:
			return 1889.356f, -1866.249f, 47.2413f;
	}
	return 0f, 0f, 0f;
}

int func_753(int iParam0)
{
	if (!func_1178(iParam0))
	{
		return 0;
	}
	return func_1179(iParam0);
}

void func_754(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
	if (func_211(iParam0->f_6))
	{
		func_212(&(iParam0->f_6), 1, 1);
	}
	if (func_211(iParam0->f_1))
	{
		func_212(&(iParam0->f_1), 1, 1);
	}
}

void func_755(int* iParam0, var uParam1)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	char* sVar6;
	char* sVar7;
	int iVar8;

	if (func_213(func_1180()) || func_1181(1) == 0)
	{
		return;
	}
	sVar0 = "script@ambient@shop@CATALOG_PLAYER";
	sVar1 = "PBL_ENTER";
	sVar2 = "PBL_FLIP_L1";
	sVar3 = "PBL_FLIP_R1";
	if (MISC::IS_BIT_SET(Global_1357549->f_1893, 4))
	{
		sVar4 = "PBL_EXIT_SECTION";
	}
	else
	{
		sVar4 = "PBL_EXIT_INDEX";
	}
	sVar5 = "ledger_ct";
	sVar6 = func_1182();
	sVar7 = func_1183(iParam0->f_35.f_491.f_1);
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_864))
	{
		STREAMING::REQUEST_MODEL(iParam0->f_33, false);
		if (STREAMING::HAS_MODEL_LOADED(iParam0->f_33))
		{
			iParam0->f_864 = OBJECT::CREATE_OBJECT(iParam0->f_33, func_1180(), true, true, false, false, true);
			ENTITY::SET_ENTITY_COORDS(iParam0->f_864, func_1180(), true, false, true, true);
			ENTITY::SET_ENTITY_ROTATION(iParam0->f_864, func_1184(), 2, true);
			ENTITY::FREEZE_ENTITY_POSITION(iParam0->f_864, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_33);
		}
	}
	else if (HUD::IS_NAMED_RENDERTARGET_REGISTERED(sVar5) == 0)
	{
		HUD::REGISTER_NAMED_RENDERTARGET(sVar5, false);
		HUD::LINK_NAMED_RENDERTARGET(iParam0->f_33);
		if (HUD::IS_NAMED_RENDERTARGET_LINKED(iParam0->f_33))
		{
		}
		else
		{
			if (HUD::IS_NAMED_RENDERTARGET_REGISTERED(sVar5))
			{
				HUD::RELEASE_NAMED_RENDERTARGET(sVar5);
			}
			return;
		}
		iVar8 = HUD::GET_NAMED_RENDERTARGET_RENDER_ID(sVar5);
		HUD::SET_TEXT_RENDER_ID(iVar8);
	}
	if (iParam0->f_20 != 0)
	{
		if (func_344(Global_35, 0))
		{
			PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Global_35, 0, 1);
			PED::SET_PED_RESET_FLAG(Global_35, 258, true);
		}
		func_458(0);
	}
	if (iParam0->f_20 >= 4)
	{
		PAD::_0x2804658EB7D8A50B(4, 1492915442);
	}
	func_1185(iParam0, uParam1);
	func_1186(&(iParam0->f_35), iParam0->f_20);
	switch (iParam0->f_20)
	{
		case 0:
			if (func_211(iParam0->f_6))
			{
				if (func_224(iParam0->f_6, 1))
				{
					if (func_849())
					{
						INTERIOR::FORCE_ROOM_FOR_ENTITY(iParam0->f_864, INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35), INTERIOR::GET_ROOM_KEY_FROM_ENTITY(Global_35));
					}
					func_147(8192);
					func_147(67108864);
					iParam0->f_858 = 0;
					func_754(iParam0);
					func_1187(0);
					if (ANIMSCENE::_0x25557E324489393C(iParam0->f_18))
					{
						ANIMSCENE::RESET_ANIM_SCENE(iParam0->f_18, 0);
					}
					iParam0->f_18 = ANIMSCENE::_CREATE_ANIM_SCENE(sVar0, 0, sVar1, false, true);
					ANIMSCENE::LOAD_ANIM_SCENE(iParam0->f_18);
					func_1188(&(iParam0->f_35), 0);
					Global_1357549->f_1894 = 0;
					func_1189(&(iParam0->f_35.f_2), func_148());
					func_1190(&(iParam0->f_35));
					func_1191();
					MAP::DISPLAY_RADAR(false);
					WEAPON::_0xFCCC886EDE3C63EC(Global_35, 2, 1);
					MISC::SET_BIT(&(Global_1357549->f_1893), 0);
					func_1192(iParam0, 2);
				}
			}
			else if (func_12(8192) == 0)
			{
				if ((func_148() == 1 || func_148() == 2) || func_148() == 3)
				{
					if (func_1181(0))
					{
						iParam0->f_6 = func_759("LDGR_TITHE", -473983589, func_757(func_294()), func_758(), 3, 1, 0, 0, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
						func_217(iParam0->f_6, 736625733, 0, 1);
					}
				}
			}
			break;
		case 2:
			if ((((ANIMSCENE::_0x477122B8D05E7968(iParam0->f_18, 1, 0) && ANIMSCENE::_0x95531A4A20CCE7BC(iParam0->f_18, 0)) && func_1193(&(iParam0->f_35))) && func_1194()) && func_1187(1))
			{
				iParam0->f_5 = func_156();
				func_939(&(iParam0->f_35));
				func_1195(iParam0->f_35.f_2.f_1[0 /*237*/], iParam0->f_35.f_498[Global_1357549->f_1894 /*8*/], &(iParam0->f_35.f_531));
				if (func_1196(*(iParam0->f_35.f_498[Global_1357549->f_1894 /*8*/]), 0, &(iParam0->f_35.f_2), &(iParam0->f_35.f_491)) && iParam0->f_35.f_491.f_1 != -1)
				{
					func_1188(&(iParam0->f_35), 1);
					if (iParam0->f_35.f_491.f_5)
					{
						func_1197(&(iParam0->f_35.f_2.f_476), iParam0->f_35.f_491.f_1, *(iParam0->f_35.f_531[iParam0->f_35.f_491.f_1 /*30*/]));
					}
					else
					{
						func_1198(&(iParam0->f_35.f_2.f_476), iParam0->f_35.f_491.f_1, *(iParam0->f_35.f_531[iParam0->f_35.f_491.f_1 /*30*/]));
					}
				}
				else
				{
					func_1188(&(iParam0->f_35), 0);
				}
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_18, "player", Global_35, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_18, "CATALOG", iParam0->f_864, 0);
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iParam0->f_18, func_1199(iParam0->f_864), func_1184(), 2);
				ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0->f_18, sVar1);
				ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iParam0->f_18, "player", &(iParam0->f_21), false, 0, 2);
				func_1192(iParam0, 1);
			}
			break;
		case 1:
			if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, 713668775, 1) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Global_35, -208384378, 1) != 1)
			{
				func_1192(iParam0, 3);
			}
			break;
		case 3:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_18, sVar1))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0->f_18, sVar1, true);
				func_1192(iParam0, 4);
			}
			break;
		case 4:
			if (func_344(Global_35, 0))
			{
				TASK::CLEAR_PED_SECONDARY_TASK(Global_35);
				TASK::TASK_ENTER_ANIM_SCENE(Global_35, iParam0->f_18, "player", sVar1, 1069379748, 1, 128, 20000, -1082130432);
			}
			func_1200(&(iParam0->f_35));
			if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
			{
				iParam0->f_3 = 1;
				func_1201(&(iParam0->f_816), func_148(), 0, 1065353216);
			}
			else
			{
				iParam0->f_3 = 0;
			}
			func_1192(iParam0, 5);
			func_189(&(iParam0->f_813));
			break;
		case 5:
			if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, 1369124074, 1) != 1)
			{
				if (ANIMSCENE::_0x3FBC3F51BF12DFBF(iParam0->f_18) > 0.36f)
				{
					if (!iParam0->f_3)
					{
						func_1201(&(iParam0->f_816), func_148(), 0, 1065353216);
					}
					func_1202(&(iParam0->f_35), 0);
					MISC::SET_BIT(&(Global_1357549->f_1893), 1);
					func_1192(iParam0, 6);
					return;
				}
			}
			if (func_491(&(iParam0->f_813)) > 6000)
			{
				func_848(iParam0);
				func_1192(iParam0, 7);
			}
			break;
		case 6:
			func_1203(&(iParam0->f_816));
			HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-2019190071, "LDGR_TITHE", 1, 0, 0, 0);
			if (func_1204(iParam0))
			{
				return;
			}
			if (iParam0->f_35.f_772 && func_211(iParam0->f_35.f_1))
			{
				if (!func_1205(iParam0))
				{
					func_1207(&(iParam0->f_816), func_1206(func_148(), 1), 1);
				}
			}
			else if (func_1205(iParam0))
			{
				func_1207(&(iParam0->f_816), func_1206(func_148(), 0), 1);
			}
			func_1208(iParam0);
			if (func_224(iParam0->f_7, 1) && Global_1357549->f_1894 < 3)
			{
				func_1188(&(iParam0->f_35), 0);
				ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0->f_18, sVar2);
				func_1192(iParam0, 9);
			}
			if (func_224(iParam0->f_8, 1) && Global_1357549->f_1894 > 0)
			{
				func_1188(&(iParam0->f_35), 0);
				ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0->f_18, sVar3);
				func_1192(iParam0, 11);
			}
			if (func_224(iParam0->f_35.f_1, 1))
			{
				func_1209(&(iParam0->f_35), 1);
			}
			if (func_224(iParam0->f_9, 1))
			{
				func_1188(&(iParam0->f_35), 0);
				func_182(&(iParam0->f_810), 0);
				MISC::CLEAR_BIT(&(Global_1357549->f_1893), 1);
				ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0->f_18, sVar4);
				func_1192(iParam0, 8);
			}
			break;
		case 9:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_18, sVar2))
			{
				Global_1357549->f_1894++;
				func_1195(iParam0->f_35.f_2.f_1[1 /*237*/], iParam0->f_35.f_498[Global_1357549->f_1894 /*8*/], &(iParam0->f_35.f_531));
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0->f_18, sVar2, true);
				MISC::SET_BIT(&(Global_1357549->f_1893), 2);
				MISC::SET_BIT(&(Global_1357549->f_1893), 4);
				MISC::CLEAR_BIT(&(Global_1357549->f_1893), 1);
				func_1192(iParam0, 10);
			}
			break;
		case 11:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_18, sVar3))
			{
				Global_1357549->f_1894 = (Global_1357549->f_1894 - 1);
				func_1195(iParam0->f_35.f_2.f_1[0 /*237*/], iParam0->f_35.f_498[Global_1357549->f_1894 /*8*/], &(iParam0->f_35.f_531));
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0->f_18, sVar3, true);
				MISC::SET_BIT(&(Global_1357549->f_1893), 2);
				MISC::SET_BIT(&(Global_1357549->f_1893), 4);
				MISC::CLEAR_BIT(&(Global_1357549->f_1893), 1);
				func_1192(iParam0, 12);
			}
			break;
		case 10:
			if (ANIMSCENE::_0x3FBC3F51BF12DFBF(iParam0->f_18) > 0.09f)
			{
				func_1195(iParam0->f_35.f_2.f_1[0 /*237*/], iParam0->f_35.f_498[Global_1357549->f_1894 /*8*/], &(iParam0->f_35.f_531));
				iParam0->f_35.f_491.f_2 = 1;
				if (func_1196(*(iParam0->f_35.f_498[Global_1357549->f_1894 /*8*/]), iParam0->f_35.f_491.f_2, &(iParam0->f_35.f_2), &(iParam0->f_35.f_491)) && iParam0->f_35.f_491.f_1 != -1)
				{
					func_1188(&(iParam0->f_35), 1);
					if (iParam0->f_35.f_491.f_5)
					{
						func_1197(&(iParam0->f_35.f_2.f_476), iParam0->f_35.f_491.f_1, *(iParam0->f_35.f_531[iParam0->f_35.f_491.f_1 /*30*/]));
					}
					else
					{
						func_1198(&(iParam0->f_35.f_2.f_476), iParam0->f_35.f_491.f_1, *(iParam0->f_35.f_531[iParam0->f_35.f_491.f_1 /*30*/]));
					}
				}
				else
				{
					func_1188(&(iParam0->f_35), 0);
				}
				func_1192(iParam0, 13);
			}
			break;
		case 12:
			if (ANIMSCENE::_0x3FBC3F51BF12DFBF(iParam0->f_18) > 0.09f)
			{
				func_1195(iParam0->f_35.f_2.f_1[1 /*237*/], iParam0->f_35.f_498[Global_1357549->f_1894 /*8*/], &(iParam0->f_35.f_531));
				iParam0->f_35.f_491.f_2 = 0;
				if (func_1196(*(iParam0->f_35.f_498[Global_1357549->f_1894 /*8*/]), iParam0->f_35.f_491.f_2, &(iParam0->f_35.f_2), &(iParam0->f_35.f_491)) && iParam0->f_35.f_491.f_1 != -1)
				{
					func_1188(&(iParam0->f_35), 1);
					if (iParam0->f_35.f_491.f_5)
					{
						func_1197(&(iParam0->f_35.f_2.f_476), iParam0->f_35.f_491.f_1, *(iParam0->f_35.f_531[iParam0->f_35.f_491.f_1 /*30*/]));
					}
					else
					{
						func_1198(&(iParam0->f_35.f_2.f_476), iParam0->f_35.f_491.f_1, *(iParam0->f_35.f_531[iParam0->f_35.f_491.f_1 /*30*/]));
					}
				}
				else
				{
					func_1188(&(iParam0->f_35), 0);
				}
				func_1192(iParam0, 13);
			}
			break;
		case 13:
			if (ANIMSCENE::_0x3FBC3F51BF12DFBF(iParam0->f_18) > 0.15f)
			{
				MISC::CLEAR_BIT(&(Global_1357549->f_1893), 2);
				MISC::SET_BIT(&(Global_1357549->f_1893), 1);
				func_1192(iParam0, 6);
			}
			break;
		case 14:
			if (!func_175(&(iParam0->f_810)))
			{
				func_182(&(iParam0->f_810), 0);
			}
			if (func_491(&(iParam0->f_810)) > 2500)
			{
				if (ANIMSCENE::_0x25557E324489393C(iParam0->f_16))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(iParam0->f_16);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar6) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar7))
				{
					iParam0->f_16 = ANIMSCENE::_CREATE_ANIM_SCENE(sVar6, 0, sVar7, false, true);
					ANIMSCENE::LOAD_ANIM_SCENE(iParam0->f_16);
					iParam0->f_17 = iParam0->f_35.f_491.f_1;
					func_1192(iParam0, 15);
				}
			}
			break;
		case 15:
			if (ANIMSCENE::_0x477122B8D05E7968(iParam0->f_16, 1, 0) && ANIMSCENE::_0x95531A4A20CCE7BC(iParam0->f_16, 0))
			{
				if (ANIMSCENE::_0xCBFC7725DE6CE2E0(iParam0->f_16, 0))
				{
					func_1210(&(iParam0->f_816));
					MISC::SET_BIT(&(Global_1357549->f_1893), 3);
					MISC::CLEAR_BIT(&(Global_1357549->f_1893), 1);
					func_1195(iParam0->f_35.f_2.f_1[iParam0->f_35.f_491.f_2 /*237*/], iParam0->f_35.f_498[Global_1357549->f_1894 /*8*/], &(iParam0->f_35.f_531));
					if (func_1196(*(iParam0->f_35.f_498[Global_1357549->f_1894 /*8*/]), iParam0->f_35.f_491.f_2, &(iParam0->f_35.f_2), &(iParam0->f_35.f_491)) && iParam0->f_35.f_491.f_1 != -1)
					{
						if (iParam0->f_35.f_491.f_5)
						{
							func_1197(&(iParam0->f_35.f_2.f_476), iParam0->f_35.f_491.f_1, *(iParam0->f_35.f_531[iParam0->f_35.f_491.f_1 /*30*/]));
						}
						else
						{
							func_1198(&(iParam0->f_35.f_2.f_476), iParam0->f_35.f_491.f_1, *(iParam0->f_35.f_531[iParam0->f_35.f_491.f_1 /*30*/]));
						}
					}
					func_1192(iParam0, 16);
				}
				else
				{
					ANIMSCENE::START_ANIM_SCENE(iParam0->f_16);
					func_1211();
				}
			}
			break;
		case 16:
			if (func_1212(iParam0, 0) && ANIMSCENE::_0xCDC5512A407CF08D(iParam0->f_16))
			{
				ANIMSCENE::ABORT_ANIM_SCENE(iParam0->f_18, false);
				MISC::CLEAR_BIT(&(Global_1357549->f_1893), 3);
				iParam0->f_17 = -1;
				func_183(&(iParam0->f_810));
				if (ANIMSCENE::_0x25557E324489393C(iParam0->f_16))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(iParam0->f_16);
				}
				func_756(iParam0);
				func_848(iParam0);
				func_1192(iParam0, 7);
			}
			if (ANIMSCENE::_0x25557E324489393C(iParam0->f_16) && ANIMSCENE::_0xD8254CB2C586412B(iParam0->f_16, 0))
			{
				func_144(134217728);
				func_1188(&(iParam0->f_35), iParam0->f_35.f_491);
				if (iParam0->f_35.f_773 && iParam0->f_35.f_772)
				{
					func_1201(&(iParam0->f_816), func_148(), 1, 1065353216);
				}
				else
				{
					func_1201(&(iParam0->f_816), func_148(), 0, 1065353216);
				}
				MISC::CLEAR_BIT(&(Global_1357549->f_1893), 3);
				MISC::SET_BIT(&(Global_1357549->f_1893), 1);
				iParam0->f_17 = -1;
				func_183(&(iParam0->f_810));
				if (ANIMSCENE::_0x25557E324489393C(iParam0->f_16))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(iParam0->f_16);
				}
				func_1192(iParam0, 6);
			}
			break;
		case 7:
			ENTITY::SET_ENTITY_COORDS(iParam0->f_864, func_1180(), true, false, true, true);
			ENTITY::SET_ENTITY_ROTATION(iParam0->f_864, func_1184(), 2, true);
			func_1192(iParam0, 0);
			break;
		case 8:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_18, sVar4))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0->f_18, sVar4, true);
				func_1213(&(iParam0->f_35), 0);
				if (func_705(64))
				{
					func_707(64);
					func_706(128);
				}
				func_1192(iParam0, 17);
			}
			break;
		case 17:
			if (func_176(&(iParam0->f_810)) > 0.75f)
			{
				func_183(&(iParam0->f_810));
				if (!iParam0->f_3)
				{
					func_1210(&(iParam0->f_816));
				}
			}
			if (ANIMSCENE::_0xCDC5512A407CF08D(iParam0->f_18))
			{
				func_756(iParam0);
				func_848(iParam0);
			}
			break;
	}
}

void func_756(int* iParam0)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_ROTATION(iParam0->f_866, 2) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam0->f_866, true, false) };
	if (func_156() > 1000)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_11) == 0)
		{
			iParam0->f_11 = OBJECT::CREATE_OBJECT(joaat("p_moneystack01x"), vVar3.x, vVar3.y, (vVar3.z + 0.03f), true, true, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(iParam0->f_11, vVar0.x, vVar0.y, (vVar0.z + 100f), 2, true);
			ENTITY::FREEZE_ENTITY_POSITION(iParam0->f_11, true);
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_11))
	{
		OBJECT::DELETE_OBJECT(&(iParam0->f_11));
	}
	if (func_156() > 10000)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_12) == 0)
		{
			iParam0->f_12 = OBJECT::CREATE_OBJECT(joaat("p_moneystack01x"), vVar3.x, vVar3.y, (vVar3.z + 0.06f), true, true, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(iParam0->f_12, vVar0.x, vVar0.y, (vVar0.z + 90f), 2, true);
			ENTITY::FREEZE_ENTITY_POSITION(iParam0->f_12, true);
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_12))
	{
		OBJECT::DELETE_OBJECT(&(iParam0->f_12));
	}
}

Vector3 func_757(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -136.1656f, -33.9941f, 95.0068f;
		case 2:
			return 651.7131f, -1258.331f, 42.7264f;
		case 3:
			return 1890.439f, -1865.85f, 46.3426f;
		case 8:
			return -1634.48f, -1356.272f, 83.3963f;
	}
	return 0f, 0f, 0f;
}

float func_758()
{
	if (func_148() == 3)
	{
		return 0.95f;
	}
	return 1.35f;
}

int func_759(char* sParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, bool bParam16)
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
	if (func_213(vParam2))
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
		if (func_585(iVar0, 2))
		{
			if (func_1214(vParam2, ((*Global_1945938)[iVar0 /*18*/])->f_6, 0.01f, 1) && iParam1 == ((*Global_1945938)[iVar0 /*18*/])->f_4)
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
		func_586(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216, 0, 0, 0, iParam15, bParam16);
		return iVar1;
	}
	return 0;
}

int func_760()
{
	if (((((Global_1357549->f_1672 == -774242862 || Global_1357549->f_1672 == -2100684454) || Global_1357549->f_1672 == -1167047117) || Global_1357549->f_1672 == 396444962) || Global_1357549->f_1672 == -498064062) || Global_1357549->f_1672 == 513694516)
	{
		return 1;
	}
	return 0;
}

int func_761(int iParam0)
{
	if (!func_983(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_762(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	int iVar0;

	if (iParam3 && !func_211(iParam0))
	{
		return;
	}
	iVar0 = func_583(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, MISC::_CREATE_VAR_STRING(10, sParam1, MISC::_CREATE_VAR_STRING(0, sParam2)));
}

char* func_763()
{
	switch (func_148())
	{
		case 1:
			return "HSO";
		case 2:
			return "CLP";
		case 3:
			return "SHB";
		default:
			break;
	}
	return "";
}

int func_764()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1327590->f_19547)
	{
		if ((Global_1327590->f_19547[iVar0 /*5*/])->f_1 >= 5)
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_757(func_294()), func_1215(&(Global_1327590->f_19547[iVar0 /*5*/])), true) < 3.25f)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_765()
{
	return Global_1327590->f_19745;
}

int func_766()
{
	switch (Global_1935630->f_44)
	{
		case joaat("weapon_fishingrod"):
		case joaat("weapon_kit_camera"):
		case joaat("weapon_kit_binoculars"):
		case 1030402560:
		case 1549070292:
			return 1;
	}
	if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_44))
	{
		if (WEAPON::_0x79407D33328286C6(Global_1935630->f_44))
		{
			return 1;
		}
	}
	return 0;
}

bool func_767(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_211(iParam0))
	{
		return false;
	}
	iVar0 = func_583(iParam0);
	return HUD::_UIPROMPT_IS_RELEASED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_768(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam2 && !func_211(iParam0))
	{
		return;
	}
	iVar0 = func_583(iParam0);
	func_722(iVar0, iParam1);
}

int func_769(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_770()
{
	int iVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false);
	if (iVar0 == 1549070292 || iVar0 == 1030402560)
	{
		return 1;
	}
	return 0;
}

void func_771(int* iParam0)
{
	func_756(iParam0);
	if (func_344(Global_35, 0))
	{
		if (PED::_0xD5FE956C70FF370B(Global_35))
		{
			PED::_0x7DE9692C6F64CFE8(Global_35, false, 0, 0);
		}
		TASK::_TASK_USE_SCENARIO_POINT(Global_35, iParam0->f_863, 0, 0, 1, 0, 0, 0, -1082130432, 0);
	}
}

Vector3 func_772(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -141.9612f, -23.6935f, 95.5885f;
		case 2:
			return 675.319f, -1251.379f, 43.0152f;
		case 3:
			return 1875.195f, -1859.172f, 41.8f;
		case 6:
			return 2366.094f, 1347.076f, 105.6301f;
		case 8:
			return -1646.82f, -1348.768f, 83.0685f;
	}
	return 0f, 0f, 0f;
}

int func_773(var uParam0)
{
	if (func_32() == 1)
	{
		if (func_213(func_772(func_294())) == 0)
		{
			if (func_765() == 0)
			{
				if (func_753(27))
				{
					if (func_166() == 0)
					{
						if (func_1216(uParam0))
						{
							return 1;
						}
					}
					else
					{
						func_1217("Camp Butcher: mission running", uParam0);
					}
				}
				else
				{
					func_1217("Camp Butcher: locked feature", uParam0);
				}
			}
			else
			{
				func_1217("Camp Butcher: walk n talk vig active", uParam0);
			}
		}
		else
		{
			func_1217("Camp Butcher: no donation point", uParam0);
		}
	}
	else
	{
		func_1217("Camp Butcher: not in running state", uParam0);
	}
	return 0;
}

void func_774(int iParam0, int iParam1)
{
	if (!func_1059(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (&Global_1914319->f_15614[iParam0] - (Global_1914319->f_15614[iParam0] && iParam1));
}

void func_775(int iParam0, int iParam1)
{
	if (!func_1059(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (Global_1914319->f_15614[iParam0] || iParam1);
}

void func_776(var uParam0, int iParam1)
{
	if (MAP::DOES_BLIP_EXIST(*uParam0))
	{
		if (iParam1 == 0)
		{
			MAP::_0x662D364ABF16DE2F(*uParam0, 1191951699);
			MAP::_0x662D364ABF16DE2F(*uParam0, 37805592);
		}
		else
		{
			MAP::_0xB059D7BD3D78C16F(*uParam0, 1191951699);
			MAP::_0xB059D7BD3D78C16F(*uParam0, 37805592);
		}
	}
}

void func_777(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(iParam0->f_14))
	{
		MAP::REMOVE_BLIP(&(iParam0->f_14));
	}
	if (MAP::DOES_BLIP_EXIST(iParam0->f_15))
	{
		MAP::REMOVE_BLIP(&(iParam0->f_15));
	}
	if (MAP::DOES_BLIP_EXIST(iParam0->f_13))
	{
		MAP::REMOVE_BLIP(&(iParam0->f_13));
	}
	func_1218(538);
}

void func_778(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_1219(uParam0, iParam1, sParam2))
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

bool func_779(var uParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!AUDIO::_0xD89504D9D7D5057D(&cParam1))
	{
		bVar0 = AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION(&cParam1);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_1220(cParam1, uParam0);
		if (bParam6)
		{
			AUDIO::PRELOAD_SCRIPT_CONVERSATION(&cParam1, true, true, bParam7);
		}
		else
		{
			AUDIO::START_SCRIPT_CONVERSATION(&cParam1, true, true, bParam7);
		}
		if (bParam4)
		{
			AUDIO::_0x40CA665AB9D8D505(&cParam1, iParam5);
		}
	}
	return bVar0;
}

int func_780(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 1:
			if (bParam1)
			{
				return 0;
			}
			else
			{
				return 7;
			}
			break;
		case 0:
			if (bParam1)
			{
				return 7;
			}
			else
			{
				return 3;
			}
			break;
		case 2:
			if (bParam1)
			{
				return 7;
			}
			else if (func_38(262144))
			{
				return 6;
			}
			else
			{
				return 5;
			}
			break;
		case 4:
			if (bParam1)
			{
				return 7;
			}
			else
			{
				return 6;
			}
			break;
	}
	return -1;
}

void func_781(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, int iParam10, var uParam11, var uParam12, bool bParam13)
{
	float fVar0[4];
	int iVar5;
	int iVar6;

	if (VOLUME::_0x92A78D0BEDB332A3(*uParam0))
	{
		return;
	}
	iVar5 = 0;
	iVar6 = 0;
	switch (iParam10)
	{
		case 0:
			fVar0[0] = 1f;
			fVar0[1] = 1f;
			fVar0[2] = 0f;
			fVar0[3] = 0f;
			iVar5 = 1;
			break;
		case 1:
			fVar0[0] = 1f;
			fVar0[1] = 1f;
			fVar0[2] = 0f;
			fVar0[3] = 0f;
			iVar5 = 1;
			break;
		case 2:
			fVar0[0] = 1f;
			fVar0[1] = 1f;
			fVar0[2] = 1f;
			fVar0[3] = 1f;
			iVar5 = 1;
			break;
		case 3:
			fVar0[0] = 0.35f;
			fVar0[1] = 0f;
			fVar0[2] = 0f;
			fVar0[3] = 0f;
			iVar6 = 1;
			break;
		case 4:
			fVar0[0] = 0.45f;
			fVar0[1] = 0.2f;
			fVar0[2] = 0f;
			fVar0[3] = 0f;
			iVar6 = 1;
			break;
		case 5:
			fVar0[0] = 1f;
			fVar0[1] = 1f;
			fVar0[2] = 0f;
			fVar0[3] = 0f;
			iVar6 = 1;
			break;
		case 6:
			fVar0[0] = 1f;
			fVar0[1] = 1f;
			fVar0[2] = 1f;
			fVar0[3] = 1f;
			iVar6 = 1;
			break;
	}
	*uParam0 = VOLUME::_0xBBE768E3AE76E07C(uParam11, vParam1, vParam4, vParam7, iVar5, iVar6, &fVar0, uParam12, bParam13);
}

float func_782(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 1.75f;
		case 4:
			return 4f;
		default:
			break;
	}
	return 0f;
}

float func_783(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

void func_784(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(&(iLocal_3521[iParam0])))
	{
		iLocal_3521[iParam0] = VOLUME::_CREATE_VOLUME_BOX(vParam1, vParam4, vParam7);
	}
}

void func_785(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_344(func_179(iParam1), 0))
	{
		return;
	}
	if (!bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(VOLUME::_0x7FD78DFD0C5D7B9B(*uParam0)))
		{
			bParam2 = true;
		}
	}
	if (VOLUME::_0x92A78D0BEDB332A3(*uParam0))
	{
		iVar0 = func_561(iParam1, 0);
		if (_NAMESPACE48::_0x800DF3FC913355F3(iVar0))
		{
			VOLUME::_0xE2BE6FFA4A13CBB0(*uParam0, iVar0, bParam2);
			VOLUME::_0x4A8FEFC43FD8AC9B(*uParam0, 0, 1);
		}
	}
}

void func_786(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_787(int iParam0, bool bParam1)
{
	if (VOLUME::_0x92A78D0BEDB332A3((Global_1395601->f_5[iParam0 /*28*/])->f_23) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, (Global_1395601->f_5[iParam0 /*28*/])->f_23, true, 0))
	{
		return;
	}
	if (func_133(242, 1, 1))
	{
		bParam1 = false;
	}
	switch (iParam0)
	{
		case 8:
			func_1221(238680582, bParam1);
			break;
		case 9:
			func_1221(1555588463, bParam1);
			func_1221(1275780106, bParam1);
			func_1221(-833560428, bParam1);
			func_1221(-1601174253, bParam1);
			func_1221(-1295111793, bParam1);
			break;
		case 11:
			func_1221(-1482639045, bParam1);
			break;
		case 10:
			func_1221(254520182, bParam1);
			break;
		case 12:
			func_1221(1997650502, bParam1);
			break;
		case 13:
			func_1221(1335986638, bParam1);
			break;
		case 14:
			func_1221(1407130373, bParam1);
			break;
		case 16:
			func_1221(-1335647241, bParam1);
			break;
		case 15:
			func_1221(1731691513, !func_150(70));
			break;
	}
}

void func_788(int iParam0)
{
	if (!func_502(iParam0))
	{
		return;
	}
	Global_40.f_9384[iParam0 /*2*/] = 0;
}

void func_789(int iParam0, int iParam1)
{
	if (!func_502(iParam0))
	{
		return;
	}
	(Global_1395601->f_5[iParam0 /*28*/])->f_20 = iParam1;
}

Vector3 func_790(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -107.0047f, -32.0697f, 94.9574f;
		case 2:
			return 703.7057f, -1228.871f, 44.2991f;
		case 3:
			return 1849.943f, -1837.089f, 42.2036f;
		case 5:
			return 2278.213f, -751.9426f, 41.0419f;
		case 6:
			return 2370.389f, 1340.97f, 105.1306f;
		case 7:
			return -2591.632f, 466.4086f, 145.2065f;
		case 8:
			if (!func_800())
			{
				return -1665.274f, -1330.899f, 82.9343f;
			}
			else
			{
				return -1643.673f, -1375.62f, 82.9683f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_791()
{
	int iVar0;

	if (!func_801())
	{
		return 0;
	}
	iVar0 = func_377(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (func_228(iVar0))
	{
		return 0;
	}
	return 1;
}

int func_792(var uParam0)
{
	char* sVar0;
	int iVar1;

	sVar0 = func_1223(func_1222(0));
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return func_215(MISC::_CREATE_VAR_STRING(10, "CAMP_HITCH_MAIN_NAME", sVar0), 1940454787, uParam0->f_5, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
	}
	iVar1 = func_1224(0);
	sVar0 = HUD::_GET_LABEL_TEXT_BY_HASH(MISC::GET_HASH_KEY(func_1225(iVar1)));
	return func_215(MISC::_CREATE_VAR_STRING(10, "CAMP_HITCH_STABLE", sVar0), 1940454787, uParam0->f_5, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
}

int func_793(int iParam0)
{
	int iVar0;

	iVar0 = func_583(iParam0);
	if (iVar0 < 0 || iVar0 >= 48)
	{
		return 0;
	}
	return ((*Global_1945938)[iVar0 /*18*/])->f_3;
}

int func_794()
{
	if (!func_1226())
	{
		return 0;
	}
	if (func_1228(func_1227()))
	{
		return 0;
	}
	switch (func_809())
	{
		case 0:
			if (func_1229() != 5)
			{
				return 0;
			}
			break;
		case 1:
			return 0;
	}
	return 1;
}

int func_795(int iParam0)
{
	iParam0 = func_818(iParam0);
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

void func_796(int iParam0, int iParam1, var uParam2)
{
	char* sVar0;
	int iVar1;
	int iVar2;

	sVar0 = func_1223(func_1222(iParam0));
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		iVar1 = func_1224(iParam0);
		sVar0 = HUD::_GET_LABEL_TEXT_BY_HASH(MISC::GET_HASH_KEY(func_1225(iVar1)));
	}
	iVar2 = func_1230(iParam0);
	if (iVar2 == -1 || iVar2 == 3)
	{
		return;
	}
	uParam2->f_12[iVar2] = func_215(MISC::_CREATE_VAR_STRING(10, "CAMP_HITCH_STABLE", sVar0), iParam1, uParam2->f_5, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
	HUD::_UIPROMPT_SET_GROUP(func_793(&(uParam2->f_12[iVar2])), 1842627646, 0);
}

int func_797()
{
	if (((func_795(0) != 0 || func_795(2) != 0) || func_795(3) != 0) || func_795(4) != 0)
	{
		return 1;
	}
	return 0;
}

int func_798(int iParam0)
{
	int iVar0;

	iParam0 = func_818(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_804(iParam0))
	{
		return 0;
	}
	iVar0 = func_377(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return 1;
	}
	return 0;
}

void func_799(var uParam0, var uParam1)
{
	var uVar0;
	var uVar1;

	if (func_56() != -1)
	{
		uVar0 = &Global_36637.f_1444[*uParam0];
		MISC::SET_BIT(&uVar0, *uParam1);
		Global_36637.f_1444[*uParam0] = uVar0;
		return;
	}
	uVar1 = &Global_40.f_7832[*uParam0];
	MISC::SET_BIT(&uVar1, *uParam1);
	Global_40.f_7832[*uParam0] = uVar1;
}

bool func_800()
{
	return func_150(70);
}

int func_801()
{
	if (!func_812())
	{
		return 0;
	}
	if (func_798(0))
	{
		return 0;
	}
	if (func_1231(0))
	{
		return 0;
	}
	return 1;
}

void func_802(int iParam0, int iParam1)
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
	func_1232(iParam0);
	func_1232(iParam0);
	func_1233(iParam0, iParam1);
	func_1234(iParam0, iParam1);
	func_1235(iParam0, iParam1);
	iVar1 = func_377(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_1236(iVar1);
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
	iVar3 = func_377(iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_1236(iVar3);
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
	func_815();
}

void func_803(int iParam0, int iParam1)
{
	iParam0 = func_818(iParam0);
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

int func_804(int iParam0)
{
	iParam0 = func_818(iParam0);
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

void func_805(int iParam0)
{
	int iVar0;
	int iVar1;

	iParam0 = func_818(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_804(iParam0))
	{
		return;
	}
	iVar0 = func_377(iParam0);
	func_1237(iParam0);
	if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
	if (PED::_0xAA9F048DCF69B6DC(iVar1))
	{
		if (!func_1238(iVar1))
		{
			PED::SET_PED_MODEL_IS_SUPPRESSED(iVar1, false);
		}
	}
	PED::DELETE_PED(&iVar0);
	func_1239(iParam0, 0);
	func_1240(iParam0);
}

void func_806(int iParam0)
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

void func_807(int iParam0)
{
	iParam0 = func_818(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1241(iParam0);
	func_1242(iParam0, 0);
	func_1243(iParam0, 0f);
}

void func_808(int iParam0)
{
	struct<2> Var0;
	int iVar2;
	int iVar3;

	iParam0 = func_818(iParam0);
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
	func_1244(&Var0);
	func_1245(iParam0, Var0);
	func_1246(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_15));
	func_1247(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_298));
	func_1248(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_356));
	func_1249(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_1250(iVar2, (Global_40.f_1095.f_1[iParam0 /*436*/])->f_398[iVar2 /*4*/]);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_1251(iVar3, (Global_40.f_1095.f_1[iParam0 /*436*/])->f_407[iVar3 /*4*/]);
		iVar3++;
	}
	func_1252(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_420));
	func_1253(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_422));
	func_1254(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_425));
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

int func_809()
{
	return Global_40.f_1095.f_3054.f_1;
}

void func_810(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

float func_811(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 164.6267f;
		case 2:
			return 253.0561f;
		case 3:
			return 46.2992f;
		case 5:
			return 70.2681f;
		case 6:
			return 109.4813f;
		case 7:
			return 81.6192f;
		case 8:
			if (!func_800())
			{
				return 21.0508f;
			}
			else
			{
				return 329.6172f;
			}
			break;
	}
	return 0f;
}

int func_812()
{
	if (func_795(0) == 1)
	{
		return 1;
	}
	return 0;
}

int func_813(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (bParam6)
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
		{
			return 1;
		}
	}
	else if (func_702(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return 1;
	}
	return 0;
}

void func_814()
{
	int iVar0;
	struct<2> Var1;
	struct<6> Var3;

	iVar0 = func_377(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383->f_393))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1900383->f_393))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1900383->f_393, false, true);
		}
		OBJECT::DELETE_OBJECT(&(Global_1900383->f_393));
	}
	Var1 = { func_1255(0) };
	Var3 = { func_1256() };
	func_1257(iVar0, &Var1, &Var3, 0);
	PLAYER::_0xD2CB0FB0FDCB473D(PLAYER::GET_PLAYER_INDEX(), iVar0);
	func_810(0);
	func_335(0);
}

void func_815()
{
	if (func_804(0))
	{
		func_1258(0);
	}
	if (func_804(1))
	{
		func_1258(1);
	}
	if (func_804(5))
	{
		func_1258(5);
	}
	if (func_804(6))
	{
		func_1232(6);
	}
}

Vector3 func_816(int iParam0, int iParam1)
{
	if (iParam0 == 1)
	{
		return 0f, 0f, 0.6f;
	}
	else if (iParam0 == 2)
	{
		if (iParam1 == 0)
		{
			return -0.26f, -0.069f, 0.919f;
		}
		else
		{
			return 0.487f, -0.066f, 0.935f;
		}
	}
	else if (iParam0 == 3)
	{
		if (iParam1 == 0)
		{
			return 0.42f, 0f, 0.88f;
		}
		else if (iParam1 == 1)
		{
			return -0.42f, 0f, 0.88f;
		}
		else if (iParam1 == 2)
		{
			return 0f, 0f, 0.88f;
		}
	}
	return 0f, 0f, 0f;
}

int func_817(var uParam0, var uParam1)
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

	uParam1->f_10 = func_818(uParam1->f_10);
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
	bVar0 = func_840();
	if (*uParam1)
	{
		if (bVar0 && !func_513(((*Global_1835011)[4 /*74*/])->f_1, 1))
		{
			if (func_1259(5))
			{
				func_805(5);
				func_808(5);
				func_810(0);
				func_335(0);
			}
		}
	}
	if (func_1260(Global_36) == 8)
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_513(((*Global_1835011)[37 /*74*/])->f_1, 1)) && !func_513(((*Global_1835011)[43 /*74*/])->f_1, 1))
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_513(((*Global_1835011)[43 /*74*/])->f_1, 1)) && !func_513(((*Global_1835011)[44 /*74*/])->f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*uParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_377(iVar1);
	bVar3 = false;
	bVar4 = false;
	iVar5 = 0;
	if (func_804(iVar1))
	{
		bVar3 = true;
		if (func_798(iVar1))
		{
			bVar4 = true;
		}
		if (func_1231(iVar1))
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
				func_1261(uParam1->f_10);
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
			if (!func_1259(0) && func_1259(1))
			{
				func_802(1, 0);
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_333())
			{
				func_334();
			}
			func_810(0);
			func_335(0);
			func_337(uParam1->f_6);
		}
	}
	if (!func_804(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_819(uParam1->f_10) == 0 || func_1224(uParam1->f_10) == 0) || func_795(uParam1->f_10) == 0)
			{
				func_1262(uParam1->f_10);
			}
			func_1263(uParam1->f_10);
			func_1264(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*uParam0 = 0;
			return 0;
		}
		*uParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_377(iVar1);
	bVar3 = false;
	bVar4 = false;
	iVar5 = 0;
	if (func_804(iVar1))
	{
		bVar3 = true;
		if (func_798(iVar1))
		{
			bVar4 = true;
		}
		if (func_1231(iVar1))
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
	if (func_1265(uParam1->f_10))
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
			Var8 = { func_1255(uParam1->f_10) };
			Var10 = { func_1256() };
			func_1257(iVar2, &Var8, &Var10, 0);
			PLAYER::_0xD2CB0FB0FDCB473D(iVar6, iVar2);
			PED::SET_PED_CONFIG_FLAG(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*uParam0 = 2;
		return iVar2;
	}
	if (!func_1266(uParam1->f_10))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, true, true);
		func_1267(uParam1->f_10);
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
	func_1268(uParam1->f_10);
	if (func_1266(uParam1->f_10))
	{
		iVar16 = func_1269(uParam1->f_10);
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

int func_818(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_819(int iParam0)
{
	iParam0 = func_818(iParam0);
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

int func_820(int iParam0)
{
	switch (iParam0)
	{
		case joaat("a_c_donkey_01"):
			return 1;
	}
	return 0;
}

int func_821(int iParam0)
{
	switch (iParam0)
	{
		case joaat("a_c_horsemule_01"):
		case joaat("a_c_horsemulepainted_01"):
			return 1;
	}
	return 0;
}

int func_822(int iParam0)
{
	var uVar0;

	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		iParam0 = 1074477367;
	}
	uVar0 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iParam0, 7);
	return uVar0;
}

int func_823(int iParam0, int iParam1)
{
	float fVar0;

	if (iParam1 == -1)
	{
		return 0;
	}
	iParam0 = func_818(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	fVar0 = func_1270(iParam1);
	if (fVar0 == 1E+09f)
	{
		return 0;
	}
	if (func_825(iParam0, iParam1) >= fVar0)
	{
		return 1;
	}
	return 0;
}

int func_824(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;

	if (iParam1 == -1)
	{
		return 0;
	}
	iParam0 = func_818(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
		case 5:
		case 6:
		case 7:
		case 9:
			return 0;
	}
	iVar0 = func_377(iParam0);
	fVar1 = func_1271(iVar0);
	if (fVar1 >= 0.1f)
	{
		return 1;
	}
	return 0;
}

float func_825(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return 0f;
	}
	iParam0 = func_818(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	return &((Global_40.f_1095.f_1[iParam0 /*436*/])->f_372.f_2[iParam1]);
}

float func_826(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15f;
		case 4:
			return 4f;
		case 1:
			return 2f;
		case 2:
			return 1f;
		case 3:
			return 1f;
		case 5:
			return 100f;
		case 6:
			return 25f;
		case 7:
			return 5f;
		case 8:
			return 1f;
		case 9:
			return 15f;
		case 10:
			return 1f;
		case 11:
			return 15f;
		case 12:
			return 1f;
		case 13:
			return 15f;
		case 14:
			return 5f;
		case 15:
			return 1f;
		case 16:
			return 5f;
		case 17:
			return 15f;
		case 18:
			return 5f;
		case 19:
			return 1f;
		case 20:
			return 5f;
		case 21:
			return 15f;
		case 22:
			return 1f;
	}
	return 0f;
}

int func_827(int iParam0, int iParam1)
{
	int iVar0;
	struct<4> Var1;
	int iVar5;

	if (iParam1 == -1)
	{
		return 0;
	}
	iVar0 = func_1272(iParam1);
	if (!PED::_0x608BC6A6AACD5036(&Var1, iParam0, iVar0, 0))
	{
		return 0;
	}
	iVar5 = Var1.f_3;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
	{
		return 0;
	}
	return 1;
}

bool func_828()
{
	return Global_40.f_1095.f_3140;
}

float func_829(int iParam0)
{
	iParam0 = func_818(iParam0);
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

void func_830(int iParam0, float fParam1)
{
	char* sVar0;
	bool bVar1;

	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "HORSE_XP_TRUST_EARNED";
			break;
		case 1:
		case 2:
		case 3:
			return;
		case 4:
			sVar0 = "HORSE_XP_LEADING";
			break;
		case 11:
		case 12:
			sVar0 = "HORSE_XP_HITCH";
			break;
		case 5:
			return;
		case 6:
			sVar0 = "HORSE_XP_BREAK_HORSE";
			break;
		case 13:
		case 14:
		case 15:
			sVar0 = "HORSE_XP_FED";
			break;
		case 16:
			sVar0 = "HORSE_XP_TREAT";
			break;
		case 17:
		case 18:
		case 19:
			sVar0 = "HORSE_XP_GROOM";
			break;
		case 20:
			sVar0 = "HORSE_XP_OINTMENT";
			break;
		case 7:
		case 8:
			sVar0 = "HORSE_XP_PATTED";
			break;
		case 9:
		case 10:
			sVar0 = "HORSE_XP_CALM";
			break;
		case 21:
		case 22:
			sVar0 = "HORSE_XP_LIGHT_LOAD";
			break;
		default:
			return;
	}
	bVar1 = false;
	if (bVar1)
	{
		sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, BUILTIN::FLOOR(fParam1));
	}
	else
	{
		sVar0 = MISC::_CREATE_VAR_STRING(2, "HORSE_XP_GENERIC_EARNED");
	}
	func_1273(sVar0, "ITEMTYPE_TEXTURES", 48560695, 0, 109029619, 0, 0, 0, 1);
}

void func_831(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	iParam0 = func_818(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_819(iParam0);
	iVar1 = func_331(iParam0);
	iVar2 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	if (iVar1 >= iVar2)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_372.f_1 = ((Global_40.f_1095.f_1[iParam0 /*436*/])->f_372.f_1 + fParam1);
	iVar3 = func_377(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar3) || PED::IS_PED_INJURED(iVar3))
	{
		return;
	}
	func_1274(iVar3, BUILTIN::FLOOR((Global_40.f_1095.f_1[iParam0 /*436*/])->f_372.f_1));
	iVar4 = func_1275(iVar3);
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_372 = iVar4;
	PED::_0xA69899995997A63B(iVar3, iVar4);
	func_1276(iVar4);
	if (iVar4 > iVar1)
	{
		func_1277(iParam0, iVar4);
		if (iParam0 == 6)
		{
			if (iVar4 == 1)
			{
				if (func_753(42))
				{
					func_209(19, 1);
				}
				else
				{
					func_209(20, 1);
				}
			}
		}
		if (iVar4 == 2)
		{
			func_209(21, 1);
		}
		else if (iVar4 == 3)
		{
			func_209(22, 1);
		}
		else if (iVar4 == 4)
		{
			func_209(23, 1);
		}
		if (iVar4 >= 2)
		{
			iVar5 = func_1278(iVar3);
			iVar6 = func_1279();
			func_1280(iVar6, iVar5 + 1);
			iVar7 = func_1281(iVar3);
			iVar8 = func_1282();
			func_1280(iVar8, iVar7 + 1);
		}
		COMPENDIUM::COMPENDIUM_HORSE_BONDING(iVar3, iVar4);
		func_663(func_1283(352983236), 1);
		if (iVar4 == iVar2)
		{
			func_663(func_1283(-2116919750), 1);
		}
		func_343(0, -1);
	}
}

void func_832(int iParam0, int iParam1, float fParam2)
{
	if (iParam1 == -1)
	{
		return;
	}
	iParam0 = func_818(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_372.f_2[iParam1] = fParam2;
}

var func_833()
{
	return Global_1900383->f_393;
}

void func_834(int iParam0)
{
	Global_1900383->f_393 = iParam0;
}

void func_835()
{
	var uVar0;

	if (func_1284())
	{
		uVar0 = func_1285();
		MAP::REMOVE_BLIP(&uVar0);
		func_1286(0);
	}
}

int func_836()
{
	int iVar0;

	iVar0 = -1427204870;
	return iVar0;
}

void func_837(var uParam0)
{
	if (*uParam0 != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(*uParam0);
		*uParam0 = 0;
	}
}

bool func_838(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_1287(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return MISC::IS_BIT_SET(&(Global_40.f_283[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_1058888->f_40567[iVar1]), iVar2);
}

void func_839(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_840()
{
	return 1;
	if (Global_1572887->f_12 == 0)
	{
		return 1;
	}
	return Global_40.f_1;
}

Vector3 func_841()
{
	if (func_150(70))
	{
		return -1634.252f, -1358.577f, 83.9077f;
	}
	if (func_150(73))
	{
		return -1665.419f, -1346.258f, 84.11175f;
	}
	return -1641.1f, -1359.979f, 83.4932f;
}

void func_842(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &Var0, 2, 2);
}

int func_843()
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

int func_844(int iParam0)
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

void func_845(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;

	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

void func_846(int iParam0, bool bParam1, float fParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = func_1288(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	func_1289(iVar0);
	if (iVar0 == Global_1934765->f_338)
	{
		if (Global_1934765->f_337 == 0)
		{
			func_1290();
		}
		else
		{
			func_1291(bParam1, fParam2);
		}
	}
	else
	{
		uVar1 = Global_1934765->f_338;
		Global_1934765->f_338 = func_1292();
	}
}

void func_847()
{
	if (Global_1934765->f_286 > 300)
	{
		Global_1934765->f_286 = 300;
	}
	STREAMING::_0x2F9AC754FE179D58(func_879());
}

void func_848(int* iParam0)
{
	if (MISC::IS_BIT_SET(Global_1357549->f_1893, 0))
	{
		if (iParam0->f_3)
		{
			func_1210(&(iParam0->f_816));
		}
		MAP::DISPLAY_RADAR(true);
		Global_1357549->f_1894 = 0;
		ANIMSCENE::RESET_ANIM_SCENE(iParam0->f_18, 0);
		ANIMSCENE::_DELETE_ANIM_SCENE(iParam0->f_18);
		func_144(8192);
		func_144(67108864);
		func_1293();
		func_1294(&(iParam0->f_35));
		func_1295(&(iParam0->f_35));
		func_1296();
		func_1187(2);
		if (func_705(128))
		{
			func_707(128);
		}
		ENTITY::SET_ENTITY_COORDS(iParam0->f_864, func_1180(), true, false, true, true);
		ENTITY::SET_ENTITY_ROTATION(iParam0->f_864, func_1184(), 2, true);
		MISC::CLEAR_BIT(&(Global_1357549->f_1893), 0);
		MISC::CLEAR_BIT(&(Global_1357549->f_1893), 4);
		func_1192(iParam0, 0);
	}
}

int func_849()
{
	if (func_148() == 3)
	{
		return 1;
	}
	return 0;
}

void func_850(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 13;
			*uParam2 = 7;
			*uParam3 = 8;
			*uParam4 = 9;
			break;
		case 1:
			*uParam1 = 14;
			*uParam2 = 10;
			*uParam3 = 11;
			*uParam4 = 12;
			break;
		case 2:
			*uParam1 = 14;
			*uParam2 = 13;
			*uParam3 = 14;
			*uParam4 = 15;
			break;
		case 3:
			*uParam1 = 7;
			*uParam2 = 16;
			*uParam3 = 17;
			*uParam4 = 18;
			break;
		case 4:
			*uParam1 = 7;
			*uParam2 = 19;
			*uParam3 = 20;
			*uParam4 = 21;
			break;
		case 5:
			*uParam1 = 7;
			*uParam2 = 22;
			*uParam3 = 23;
			*uParam4 = 24;
			break;
		case 6:
			*uParam1 = 7;
			*uParam2 = 25;
			*uParam3 = 26;
			*uParam4 = 27;
			break;
		case 7:
			*uParam1 = 19;
			*uParam2 = 28;
			*uParam3 = 29;
			*uParam4 = 30;
			break;
		case 8:
			*uParam1 = 19;
			*uParam2 = 31;
			*uParam3 = 32;
			*uParam4 = 33;
			break;
		case 9:
			*uParam1 = 21;
			*uParam2 = 34;
			*uParam3 = 35;
			*uParam4 = 36;
			break;
		case 10:
			*uParam1 = 17;
			*uParam2 = 37;
			*uParam3 = 38;
			*uParam4 = 39;
			break;
		case 11:
			*uParam1 = 17;
			*uParam2 = 40;
			*uParam3 = 41;
			*uParam4 = 42;
			break;
		case 12:
			*uParam1 = 2;
			*uParam2 = 43;
			*uParam3 = 44;
			*uParam4 = 45;
			break;
		case 13:
			*uParam1 = 3;
			*uParam2 = 46;
			*uParam3 = 47;
			*uParam4 = 48;
			break;
		case 14:
			*uParam1 = 8;
			*uParam2 = 49;
			*uParam3 = 50;
			*uParam4 = 51;
			break;
		case 15:
			*uParam1 = 10;
			*uParam2 = 82;
			*uParam3 = 83;
			*uParam4 = 84;
			break;
		case 16:
			*uParam1 = 22;
			*uParam2 = 88;
			*uParam3 = 89;
			*uParam4 = 90;
			break;
		case 17:
			*uParam1 = 5;
			*uParam2 = 64;
			*uParam3 = 65;
			*uParam4 = 66;
			break;
		case 18:
			*uParam1 = 5;
			*uParam2 = 67;
			*uParam3 = 68;
			*uParam4 = 69;
			break;
		case 19:
			*uParam1 = 9;
			*uParam2 = 52;
			*uParam3 = 53;
			*uParam4 = 54;
			break;
		case 20:
			*uParam1 = 9;
			*uParam2 = 55;
			*uParam3 = 56;
			*uParam4 = 57;
			break;
		case 21:
			*uParam1 = 4;
			*uParam2 = 91;
			*uParam3 = 92;
			*uParam4 = 93;
			break;
		case 22:
			*uParam1 = 15;
			*uParam2 = 58;
			*uParam3 = 59;
			*uParam4 = 60;
			break;
		case 23:
			*uParam1 = 15;
			*uParam2 = 61;
			*uParam3 = 62;
			*uParam4 = 63;
			break;
		case 24:
			*uParam1 = 23;
			*uParam2 = 94;
			*uParam3 = 95;
			*uParam4 = 96;
			break;
		case 25:
			*uParam1 = 16;
			*uParam2 = 85;
			*uParam3 = 86;
			*uParam4 = 87;
			break;
		case 27:
			*uParam1 = 20;
			*uParam2 = 70;
			*uParam3 = 71;
			*uParam4 = 72;
			break;
		case 28:
			*uParam1 = 0;
			*uParam2 = 73;
			*uParam3 = 74;
			*uParam4 = 75;
			break;
		case 29:
			*uParam1 = 11;
			*uParam2 = 79;
			*uParam3 = 80;
			*uParam4 = 81;
			break;
		case 30:
			*uParam1 = 6;
			*uParam2 = 76;
			*uParam3 = 77;
			*uParam4 = 78;
			break;
	}
}

void func_851(var uParam0)
{
	func_183(&(uParam0->f_101));
	if (func_184(17))
	{
		func_188(17, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_179(17), false);
	}
}

int func_852()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

void func_853(int iParam0)
{
	int iVar0;

	iVar0 = Global_1360165[iParam0 /*1157*/];
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	if (!func_503(iParam0))
	{
		return;
	}
	if (!PED::IS_PED_IN_GROUP(iVar0))
	{
		return;
	}
	if (PED::GET_PED_GROUP_INDEX(iVar0) != PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX()))
	{
		return;
	}
	if (PED::_0x917760CFE7A0E0F1(iVar0))
	{
		COMPANION::_0xD747979C053EFA7A(func_852());
	}
	PED::SET_PED_CONFIG_FLAG(iVar0, 279, false);
	PED::REMOVE_PED_FROM_GROUP(iVar0);
	func_1297(iParam0, 0, 0);
}

int func_854(bool bParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam0)
	{
		return func_1298(Global_1359489->f_4);
	}
	PED::GET_GROUP_SIZE(func_852(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = PED::GET_PED_AS_GROUP_MEMBER(func_852(), iVar3);
		if (func_1299(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

void func_855()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = func_1300(iVar0);
		iVar2 = func_1300(iVar0 + 1);
		if (!func_503(iVar1))
		{
			if (func_503(iVar2))
			{
				(*Global_1359489)[iVar0] = iVar2;
				(*Global_1359489)[iVar0 + 1] = -1;
			}
		}
		iVar0++;
	}
}

void func_856(int iParam0)
{
	(Global_1327590->f_11465[iParam0 /*10*/])->f_5 = func_1301();
}

void func_857(int iParam0)
{
	Global_1327590->f_19692[iParam0] = func_1301();
}

void func_858(int iParam0, bool bParam1, int iParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	(Global_1327590->f_19622[iParam0 /*14*/])->f_9 = func_1301();
	if (bParam1)
	{
		(Global_1327590->f_19622[iParam0 /*14*/])->f_10 = (Global_1327590->f_19622[iParam0 /*14*/])->f_11;
	}
	if (iParam2 > 0)
	{
		func_575(&((Global_1327590->f_19622[iParam0 /*14*/])->f_9), 0, iParam2, 0, 0, 0, 0, 0);
	}
}

void func_859()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1327590->f_19547)
	{
		if (&Global_1327590->f_19547[iVar0 /*5*/] != -1)
		{
			func_597(iVar0);
		}
		iVar0++;
	}
}

bool func_860(int iParam0)
{
	return func_537(iParam0, 32, 1);
}

void func_861(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(func_179(iParam0)))
	{
		func_430(iParam0, 4, 1);
		func_430(iParam0, 17, 1);
		func_430(iParam0, 1, 1);
		func_430(iParam0, 2, 1);
		return;
	}
	if (!func_503(iParam0))
	{
		return;
	}
	if (func_860(iParam0) && !bParam2)
	{
		return;
	}
	if (func_357(iParam0) && !bParam2)
	{
		return;
	}
	if (iParam0 == Global_1357549->f_1497 && !bParam2)
	{
		return;
	}
	if (((!bParam3 && ENTITY::DOES_ENTITY_EXIST(func_179(iParam0))) && func_1022(iParam0) < 5000f) && !CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	func_430(iParam0, 4, 1);
	func_430(iParam0, 17, 1);
	func_430(iParam0, 1, 1);
	func_430(iParam0, 2, 1);
	func_1302(iParam0, func_179(iParam0));
	func_564(iParam0, 1, 1, 1, bParam4);
}

int func_862(int iParam0, int iParam1)
{
	if (!func_536(iParam0))
	{
		return 0;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(((*Global_1360165)[iParam0 /*1157*/])->f_126) && iParam1)
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_126 = func_1303(iParam0);
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_126;
}

bool func_863(int iParam0)
{
	return iParam0 != 0;
}

int func_864(int iParam0)
{
	if (!func_422(iParam0))
	{
		return 0;
	}
	return ((*Global_1895087)[iParam0 /*3*/])->f_1;
}

void func_865(float fParam0, float fParam1, float fParam2, float fParam3)
{
	Global_1894899->f_182 = fParam0;
	Global_1894899->f_183 = fParam1;
	Global_1894899->f_184 = fParam2;
	Global_1894899->f_185 = fParam3;
}

bool func_866(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

void func_867(var uParam0, var uParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_1357549->f_1626))
	{
		OBJECT::DELETE_OBJECT(&(Global_1357549->f_1626));
	}
	*uParam0 = 0;
	*uParam1 = 0;
	Global_1357549->f_1625 = 0;
}

void func_868(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (_NAMESPACE48::_0x800DF3FC913355F3(((*uParam0)[iVar0 /*4*/])->f_1))
		{
			_NAMESPACE48::_0xFCC6DB8DBE709BC8(((*uParam0)[iVar0 /*4*/])->f_1);
		}
		iVar0++;
	}
}

void func_869()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (VOLUME::_0x92A78D0BEDB332A3(&(iLocal_3521[iVar0])))
		{
			VOLUME::_0x998202B206872672(&(iLocal_3521[iVar0]));
			VOLUME::_0x6D5F9E69BA1BE783(&(iLocal_3521[iVar0]));
			VOLUME::_0x43F867EF5C463A53(&(iLocal_3521[iVar0]));
		}
		iVar0++;
	}
}

void func_870(var uParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(*uParam0))
	{
		VOLUME::_0x43F867EF5C463A53(*uParam0);
	}
	if (PED::_0x91A5F9CBEBB9D936(uParam0->f_1))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_1, false);
	}
}

void func_871(var uParam0, var uParam1)
{
	func_1135(uParam1);
	if (func_38(4))
	{
		func_212(&(uParam0->f_1610), 1, 1);
		uParam0->f_1581 = 11;
		func_723(uParam0, uParam1, 1, 1, 0);
	}
	if (TASK::_0x841475AC96E794D1(uParam0->f_1616))
	{
		TASK::_0x81948DFE4F5A0283(uParam0->f_1616);
	}
	GRAPHICS::_0x37D7BDBA89F13959("CamTransition01");
	uParam0->f_1581 = 0;
}

int func_872(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = func_478(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	return 1;
}

void func_873(int* iParam0)
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

void func_874(int iParam0, int iParam1)
{
	if (func_56() != -1)
	{
		return;
	}
	if (!func_422(iParam0))
	{
		return;
	}
	Global_24886[iParam0 /*2*/] = (Global_24886[iParam0 /*2*/] || iParam1);
}

void func_875(int iParam0, int iParam1)
{
	if (func_56() != -1)
	{
		return;
	}
	if (!func_422(iParam0))
	{
		return;
	}
	Global_24886[iParam0 /*2*/] = (&Global_24886[iParam0 /*2*/] - (Global_24886[iParam0 /*2*/] && iParam1));
}

void func_876(int iParam0)
{
	int iVar0;

	if (!func_422(iParam0))
	{
		return;
	}
	iVar0 = func_1064(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
	((*Global_1895087)[iParam0 /*3*/])->f_2 = 0;
}

void func_877(int iParam0, int iParam1)
{
	if (!func_422(iParam0))
	{
		return;
	}
	((*Global_1895087)[iParam0 /*3*/])->f_1 = iParam1;
}

int func_878(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(&(Global_1934765->f_275[iVar0 /*2*/]), false) && &Global_1934765->f_275[iVar0 /*2*/] == SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			*uParam0 = iVar0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

float func_879()
{
	return (func_783(150f, BUILTIN::TO_FLOAT(Global_1934765->f_286)) / BUILTIN::TO_FLOAT(300));
}

int func_880()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!SCRIPTS::IS_THREAD_ACTIVE(&(Global_1934765->f_275[iVar0 /*2*/]), false))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_881(int iParam0)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 0;
	if (func_1304(Var0, 70005598, &iVar6, 0))
	{
		iVar5 = func_1305(iVar6);
	}
	return iVar5;
}

int func_882(int iParam0)
{
	struct<5> Var0;
	int iVar5;

	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 1;
	if (func_1306(Var0, -1875502208, &iVar5, 0))
	{
	}
	return iVar5;
}

void func_883(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_1058(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		MISC::SET_BIT(Global_1357549->f_1848[iVar0], iVar1);
	}
	else
	{
		MISC::CLEAR_BIT(Global_1357549->f_1848[iVar0], iVar1);
	}
}

int func_884(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 1;
		case 3:
			return 1;
		case 4:
			return 1;
		case 5:
			return 0;
		case 7:
			return 0;
		case 9:
			return 1;
		case 10:
			return 0;
		case 11:
			return 1;
		case 8:
			return 1;
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
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
			return 0;
		default:
			break;
	}
	return 0;
}

void func_885(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_883(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_886(2, *uParam0);
		}
		else
		{
			func_887(2, *uParam0);
		}
	}
	func_1307(uParam0);
}

void func_886(int iParam0, int iParam1)
{
	if (Global_1357549->f_1483 >= 25)
	{
		Global_1357549->f_1483 = 0;
	}
	Global_1357549->f_1407[Global_1357549->f_1483 /*3*/] = iParam0;
	(Global_1357549->f_1407[Global_1357549->f_1483 /*3*/])->f_1 = iParam1;
	(Global_1357549->f_1407[Global_1357549->f_1483 /*3*/])->f_2 = 0;
	Global_1357549->f_1483++;
}

void func_887(int iParam0, int iParam1)
{
	if (Global_1357549->f_1406 >= 50)
	{
		return;
	}
	if (&Global_1357549->f_1252[Global_1357549->f_1406 /*3*/] != 0)
	{
		return;
	}
	Global_1357549->f_1252[Global_1357549->f_1406 /*3*/] = iParam0;
	(Global_1357549->f_1252[Global_1357549->f_1406 /*3*/])->f_1 = iParam1;
	(Global_1357549->f_1252[Global_1357549->f_1406 /*3*/])->f_2 = 0;
	Global_1357549->f_1403++;
	Global_1357549->f_1406++;
}

bool func_888(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 12);
}

int func_889(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_536(iParam0))
	{
		return 0;
	}
	if (!func_1308(iParam0))
	{
		return 0;
	}
	if (func_178(iParam0, -2147483648))
	{
		return 1;
	}
	if (func_178(iParam0, 1073741824))
	{
		return 1;
	}
	iVar0 = func_1309(iParam1);
	if (iVar0 < ((*Global_1360165)[iParam0 /*1157*/])->f_22)
	{
		return 1;
	}
	if (iVar0 == ((*Global_1360165)[iParam0 /*1157*/])->f_22)
	{
		if (bParam2)
		{
			return 1;
		}
		if (!func_178(iParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

bool func_890(int iParam0)
{
	return func_416(iParam0, 2, 1);
}

int func_891(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_477(((*Global_1835011)[iParam0 /*74*/])->f_1);
}

int func_892(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_676(((*Global_1835011)[iParam0 /*74*/])->f_1);
}

bool func_893(int iParam0)
{
	int iVar0;

	if (Global_1934765->f_337 == 0)
	{
		return false;
	}
	iVar0 = func_1288(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return iVar0 == Global_1934765->f_338;
}

void func_894(int iParam0, int iParam1, bool bParam2, float fParam3)
{
	func_1310(iParam0, iParam1, bParam2, fParam3);
}

Vector3 func_895(int iParam0, bool bParam1)
{
	vector3 vVar0;
	var uVar3;

	vVar0 = { 0f, 0f, 0f };
	if (!func_387(iParam0))
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

void func_896(int iParam0)
{
	int iVar0;
	int iVar1[10];
	int iVar12[10];
	int iVar23;

	iVar0 = func_32();
	switch (iParam0)
	{
		case 1:
			if (iParam0 != func_148())
			{
				iVar1[0] = 633503129;
				iVar12[0] = -697307430;
				iVar12[1] = -1873685184;
				iVar12[2] = -1536198599;
			}
			else
			{
				iVar12[0] = 633503129;
				switch (iVar0)
				{
					case 0:
						iVar1[0] = -697307430;
						iVar12[1] = -1873685184;
						iVar12[2] = -1536198599;
						break;
					case 1:
						iVar1[0] = -1873685184;
						iVar12[1] = -697307430;
						iVar12[2] = -1536198599;
						break;
					case 2:
						iVar1[0] = -1536198599;
						iVar12[1] = -697307430;
						iVar12[2] = -1873685184;
						break;
				}
			}
			break;
		case 3:
			if (iParam0 != func_148())
			{
				if (!func_838(282809459) && !func_838(1626481264))
				{
					iVar1[0] = 2113454609;
					iVar12[0] = func_1311();
				}
				else
				{
					iVar1[0] = func_1311();
					iVar12[0] = 2113454609;
				}
				iVar12[1] = func_1311();
			}
			else
			{
				iVar12[0] = 2113454609;
				switch (iVar0)
				{
					case 0:
						iVar1[0] = func_1311();
						iVar12[1] = func_1311();
						break;
					case 1:
						iVar1[0] = func_1311();
						iVar12[1] = func_1311();
						break;
				}
			}
			break;
		case 2:
			if (iParam0 != func_148())
			{
				iVar1[0] = 1764814553;
				iVar12[0] = 519091847;
				iVar12[1] = -1874720370;
				iVar12[2] = -376056363;
				if (func_148() == 0 || func_148() == 1)
				{
					iVar1[1] = -1225606266;
					iVar1[2] = -648893593;
					iVar1[3] = -1496619689;
					iVar12[3] = -1936937394;
					iVar12[4] = -61896664;
				}
				else
				{
					iVar1[1] = -1936937394;
					iVar1[2] = -61896664;
					iVar12[3] = -1496619689;
					iVar12[4] = -648893593;
					iVar12[5] = -1225606266;
				}
			}
			else
			{
				iVar12[0] = 1764814553;
				switch (iVar0)
				{
					case 0:
						iVar1[0] = 519091847;
						iVar12[1] = -1874720370;
						iVar12[2] = -376056363;
						break;
					case 1:
						iVar1[0] = -1874720370;
						iVar1[1] = -61896664;
						iVar12[1] = 519091847;
						iVar12[2] = -376056363;
						iVar12[3] = -648893593;
						iVar12[4] = -1225606266;
						iVar12[5] = -1496619689;
						break;
					case 2:
						iVar1[0] = -376056363;
						iVar12[1] = 519091847;
						iVar12[2] = -1874720370;
						break;
				}
			}
			break;
		case 6:
			if (iParam0 != func_148())
			{
				if (func_513(((*Global_1347702)[68 /*49*/])->f_15, 1))
				{
					iVar1[0] = 753181111;
					iVar12[0] = 1475089455;
				}
				else
				{
					iVar1[0] = 1475089455;
					iVar12[0] = 753181111;
				}
				iVar12[1] = 702867922;
				iVar12[2] = 913170302;
				iVar12[3] = 637861796;
			}
			else
			{
				switch (iVar0)
				{
					case 0:
						iVar1[0] = 913170302;
						iVar12[0] = 753181111;
						iVar12[1] = 1475089455;
						iVar12[2] = 702867922;
						iVar12[3] = 637861796;
						break;
					case 1:
						iVar1[0] = 637861796;
						iVar12[0] = 753181111;
						iVar12[1] = 1475089455;
						iVar12[2] = 913170302;
						iVar12[3] = 702867922;
						break;
					case 2:
						iVar1[0] = 702867922;
						iVar12[0] = 753181111;
						iVar12[1] = 1475089455;
						iVar12[2] = 913170302;
						iVar12[3] = 637861796;
						break;
				}
			}
			break;
	}
	iVar23 = 0;
	while (iVar23 < iVar1)
	{
		if (func_903(&(iVar1[iVar23])))
		{
			if (!STREAMING::_IS_IMAP_ACTIVE(&(iVar1[iVar23])))
			{
				STREAMING::_REQUEST_IMAP(&(iVar1[iVar23]));
			}
		}
		iVar23++;
	}
	iVar23 = 0;
	while (iVar23 < iVar12)
	{
		if (func_903(&(iVar12[iVar23])))
		{
			if (STREAMING::_IS_IMAP_ACTIVE(&(iVar12[iVar23])))
			{
				STREAMING::_REMOVE_IMAP(&(iVar12[iVar23]));
			}
		}
		iVar23++;
	}
}

float func_897(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 40f;
		case 2:
			return 170f;
		case 4:
			return 50f;
		case 6:
			return 50f;
		case 3:
			return 260.5f;
		case 7:
			return 220f;
		case 5:
			return 157.25f;
		case 8:
			return 175f;
		default:
			break;
	}
	return 250f;
}

void func_898(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;

	if (bParam1 && STREAMING::_0xCF45DF50C7775F2A())
	{
		return;
	}
	Var2 = 9;
	Var2.f_1 = 12;
	Var2.f_1.f_13 = 12;
	Var2.f_1.f_13.f_13 = 12;
	Var2.f_1.f_13.f_13.f_13 = 12;
	Var2.f_1.f_13.f_13.f_13.f_13 = 12;
	Var2.f_1.f_13.f_13.f_13.f_13.f_13 = 12;
	Var2.f_1.f_13.f_13.f_13.f_13.f_13.f_13 = 12;
	Var2.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = 12;
	Var2.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = 12;
	(*Var2[5 /*13*/])[0] = func_1311();
	(*Var2[5 /*13*/])[1] = func_1311();
	(*Var2[5 /*13*/])[2] = func_1311();
	(*Var2[5 /*13*/])[3] = func_1311();
	(*Var2[5 /*13*/])[4] = func_1311();
	(*Var2[5 /*13*/])[5] = func_1311();
	(*Var2[5 /*13*/])[6] = func_1311();
	(*Var2[5 /*13*/])[7] = func_1311();
	(*Var2[5 /*13*/])[8] = func_1311();
	(*Var2[5 /*13*/])[9] = func_1311();
	(*Var2[5 /*13*/])[10] = func_1311();
	(*Var2[5 /*13*/])[11] = func_1311();
	if (func_676(((*Global_1835011)[59 /*74*/])->f_1))
	{
		(*Var2[6 /*13*/])[0] = func_1311();
	}
	else
	{
		(*Var2[6 /*13*/])[0] = -828094297;
	}
	(*Var2[6 /*13*/])[1] = 1561231200;
	(*Var2[6 /*13*/])[2] = -407402757;
	(*Var2[6 /*13*/])[3] = -1849681615;
	(*Var2[6 /*13*/])[4] = -981684452;
	(*Var2[6 /*13*/])[5] = 1547347496;
	(*Var2[6 /*13*/])[6] = -1966238128;
	if ((func_477(((*Global_1835011)[58 /*74*/])->f_1) || func_676(((*Global_1835011)[58 /*74*/])->f_1)) || func_513(((*Global_1835011)[58 /*74*/])->f_1, 1))
	{
		(*Var2[6 /*13*/])[7] = func_1311();
		if (STREAMING::_IS_IMAP_ACTIVE(-1437554707))
		{
			STREAMING::_REMOVE_IMAP(-1437554707);
		}
	}
	else
	{
		(*Var2[6 /*13*/])[7] = -1437554707;
	}
	if (func_676(((*Global_1835011)[58 /*74*/])->f_1) || func_477(((*Global_1835011)[58 /*74*/])->f_1))
	{
		if (STREAMING::_IS_IMAP_ACTIVE(-1310355638))
		{
			STREAMING::_REMOVE_IMAP(-1310355638);
		}
		(*Var2[6 /*13*/])[8] = 1387226336;
	}
	else
	{
		if (STREAMING::_IS_IMAP_ACTIVE(1387226336))
		{
			STREAMING::_REMOVE_IMAP(1387226336);
		}
		(*Var2[6 /*13*/])[8] = -1310355638;
	}
	(*Var2[6 /*13*/])[9] = -149795084;
	(*Var2[6 /*13*/])[10] = -419935200;
	(*Var2[6 /*13*/])[11] = -1496155572;
	(*Var2[0 /*13*/])[0] = 1289304923;
	(*Var2[0 /*13*/])[1] = -584714922;
	(*Var2[0 /*13*/])[2] = func_1311();
	(*Var2[0 /*13*/])[3] = func_1311();
	(*Var2[0 /*13*/])[4] = func_1311();
	(*Var2[0 /*13*/])[5] = func_1311();
	(*Var2[0 /*13*/])[6] = func_1311();
	(*Var2[0 /*13*/])[7] = func_1311();
	(*Var2[0 /*13*/])[8] = func_1311();
	(*Var2[0 /*13*/])[9] = func_1311();
	(*Var2[0 /*13*/])[10] = func_1311();
	(*Var2[0 /*13*/])[11] = func_1311();
	(*Var2[2 /*13*/])[0] = 1706275010;
	(*Var2[2 /*13*/])[1] = 1290371072;
	(*Var2[2 /*13*/])[2] = 1734859244;
	(*Var2[2 /*13*/])[3] = 1309652195;
	(*Var2[2 /*13*/])[4] = -1291679096;
	(*Var2[2 /*13*/])[5] = 1676971154;
	(*Var2[2 /*13*/])[6] = func_1312();
	(*Var2[2 /*13*/])[7] = -1841279810;
	(*Var2[2 /*13*/])[8] = func_1313();
	(*Var2[2 /*13*/])[9] = func_1314();
	(*Var2[2 /*13*/])[10] = func_1315();
	(*Var2[2 /*13*/])[11] = func_1316();
	(*Var2[4 /*13*/])[0] = func_1311();
	(*Var2[4 /*13*/])[1] = func_1311();
	(*Var2[4 /*13*/])[2] = func_1311();
	(*Var2[4 /*13*/])[3] = func_1311();
	(*Var2[4 /*13*/])[4] = func_1311();
	(*Var2[4 /*13*/])[5] = func_1311();
	(*Var2[4 /*13*/])[6] = func_1311();
	(*Var2[4 /*13*/])[7] = func_1311();
	(*Var2[4 /*13*/])[8] = func_1311();
	(*Var2[4 /*13*/])[9] = func_1311();
	(*Var2[4 /*13*/])[10] = func_1311();
	(*Var2[4 /*13*/])[11] = func_1311();
	(*Var2[1 /*13*/])[0] = 288413571;
	(*Var2[1 /*13*/])[1] = -441619793;
	(*Var2[1 /*13*/])[2] = -1916602073;
	(*Var2[1 /*13*/])[3] = func_1317();
	(*Var2[1 /*13*/])[4] = -80564929;
	(*Var2[1 /*13*/])[5] = -676881895;
	(*Var2[1 /*13*/])[6] = -1445186253;
	(*Var2[1 /*13*/])[7] = -1893724593;
	(*Var2[1 /*13*/])[8] = func_1318();
	(*Var2[1 /*13*/])[9] = func_1319();
	(*Var2[1 /*13*/])[10] = func_1311();
	(*Var2[1 /*13*/])[11] = func_1311();
	(*Var2[3 /*13*/])[0] = 923572416;
	(*Var2[3 /*13*/])[1] = -555683060;
	(*Var2[3 /*13*/])[2] = -1828030290;
	(*Var2[3 /*13*/])[3] = -960337247;
	(*Var2[3 /*13*/])[4] = -299265919;
	(*Var2[3 /*13*/])[5] = func_1311();
	(*Var2[3 /*13*/])[6] = func_1311();
	(*Var2[3 /*13*/])[7] = func_1311();
	(*Var2[3 /*13*/])[8] = func_1311();
	(*Var2[3 /*13*/])[9] = func_1311();
	(*Var2[3 /*13*/])[10] = func_1311();
	(*Var2[3 /*13*/])[11] = func_1311();
	(*Var2[7 /*13*/])[0] = func_1320();
	(*Var2[7 /*13*/])[1] = 764025611;
	(*Var2[7 /*13*/])[2] = func_1311();
	(*Var2[7 /*13*/])[3] = func_1311();
	(*Var2[7 /*13*/])[4] = func_1311();
	(*Var2[7 /*13*/])[5] = func_1311();
	(*Var2[7 /*13*/])[6] = func_1311();
	(*Var2[7 /*13*/])[7] = func_1311();
	(*Var2[7 /*13*/])[8] = func_1311();
	(*Var2[7 /*13*/])[9] = func_1311();
	(*Var2[7 /*13*/])[10] = func_1311();
	(*Var2[7 /*13*/])[11] = func_1311();
	(*Var2[8 /*13*/])[0] = func_1311();
	(*Var2[8 /*13*/])[1] = func_1311();
	(*Var2[8 /*13*/])[2] = func_1311();
	(*Var2[8 /*13*/])[3] = func_1311();
	(*Var2[8 /*13*/])[4] = func_1311();
	(*Var2[8 /*13*/])[5] = func_1311();
	(*Var2[8 /*13*/])[6] = func_1311();
	(*Var2[8 /*13*/])[7] = func_1311();
	(*Var2[8 /*13*/])[8] = func_1311();
	(*Var2[8 /*13*/])[9] = func_1311();
	(*Var2[8 /*13*/])[10] = func_1311();
	(*Var2[8 /*13*/])[11] = func_1311();
	if (iParam0 != 0)
	{
		func_1321(-1170496998, 0, 0);
	}
	if (iParam0 == 7)
	{
		if (!func_527(2))
		{
			if (func_416(13, 4, 1))
			{
				func_689(128);
				func_688(126);
			}
			else
			{
				func_689(126);
				func_688(128);
			}
		}
		func_688(129);
	}
	else
	{
		func_689(127);
		func_689(126);
		func_689(128);
		func_689(129);
	}
	if (func_150(44))
	{
		func_688(28);
		func_689(27);
	}
	else
	{
		func_688(27);
		func_689(28);
	}
	func_272(1, bParam1);
	if (iParam0 == 3)
	{
		if (STREAMING::_IS_IMAP_ACTIVE(809554858))
		{
			STREAMING::_REMOVE_IMAP(809554858);
		}
		func_688(2);
		func_688(7);
		func_688(8);
		func_689(1);
	}
	else
	{
		func_689(2);
		func_689(7);
		func_689(8);
	}
	if (iParam0 == 3 && func_984(-1515028452, 1, 0) == 0)
	{
		func_688(10);
	}
	else
	{
		func_689(10);
	}
	if (iParam0 == 3 && func_984(-520532433, 1, 0) == 0)
	{
		func_688(9);
	}
	else
	{
		func_689(9);
	}
	if ((((iParam0 == 5 || iParam0 == 6) || iParam0 == 4) || iParam0 == 7) || iParam0 == 8)
	{
		if (func_513(((*Global_1347702)[83 /*49*/])->f_15, 1))
		{
			func_688(4);
		}
	}
	else
	{
		func_689(4);
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		while (iVar1 < 12)
		{
			if (Var2[iVar0 /*13*/][iVar1] != func_1311())
			{
				if (iParam0 == iVar0 && func_32() == 1)
				{
					if (!STREAMING::_IS_IMAP_ACTIVE(Var2[iVar0 /*13*/][iVar1]))
					{
						STREAMING::_REQUEST_IMAP(Var2[iVar0 /*13*/][iVar1]);
					}
				}
				else if (STREAMING::_IS_IMAP_ACTIVE(Var2[iVar0 /*13*/][iVar1]))
				{
					STREAMING::_REMOVE_IMAP(Var2[iVar0 /*13*/][iVar1]);
				}
			}
			iVar1++;
		}
		iVar0++;
	}
}

bool func_899(vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, 16384);
}

int func_900(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, int iParam7, bool bParam8, float fParam9)
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
		if (func_899(vParam0))
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
	func_1322(iVar0, bParam8);
	return iVar0;
}

void func_901(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			if (func_891(58) || func_150(58))
			{
				AUDIO::_0x3743CE6948194349("AZ_camp_dark_mood_zone", 2358f, 1360f, 108f, 0f);
			}
			break;
	}
}

int func_902(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return -1395712024;
		case 1:
			return -1611076340;
		case 2:
			return 2108368013;
		case 6:
			return -1162254606;
		case 3:
			return -412827149;
		default:
			break;
	}
	return func_1311();
}

bool func_903(int iParam0)
{
	return iParam0 != 0;
}

void func_904(int iParam0)
{
	struct<8> Var0;
	int iVar8;
	int iVar9;

	func_1323(iParam0);
	iVar9 = 0;
	while (iVar9 <= 2)
	{
		if (func_1324(iParam0, iVar9))
		{
			func_1325(iParam0);
			Var0 = { func_1326(iParam0, iVar9) };
			iVar8 = func_1327(iParam0, iVar9);
			func_1328(iVar8, 1);
			if (func_32() == iVar9)
			{
				if (!PATHFIND::_0x5AC0944C156E5F44(&Var0))
				{
					PATHFIND::_0x7C334FF4D9215912(&Var0);
				}
				if (!STREAMING::_IS_IMAP_ACTIVE(iVar8))
				{
					STREAMING::_REQUEST_IMAP(iVar8);
				}
			}
			else
			{
				if (PATHFIND::_0x5AC0944C156E5F44(&Var0))
				{
					PATHFIND::_0x527B97C203BB8606(&Var0);
				}
				if (STREAMING::_IS_IMAP_ACTIVE(iVar8))
				{
					STREAMING::_REMOVE_IMAP(iVar8);
				}
			}
		}
		iVar9++;
	}
}

void func_905(int iParam0, bool bParam1)
{
	char* sVar0;

	sVar0 = "";
	switch (iParam0)
	{
		case 1:
			sVar0 = "HSO_PLAYER_CHORES";
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) == 0)
	{
		if (bParam1)
		{
			if (TASK::DOES_SCENARIO_GROUP_EXIST(sVar0) && !TASK::IS_SCENARIO_GROUP_ENABLED(sVar0))
			{
				TASK::SET_SCENARIO_GROUP_ENABLED(sVar0, true);
			}
		}
		else if (TASK::IS_SCENARIO_GROUP_ENABLED(sVar0))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED(sVar0, false);
		}
	}
}

void func_906(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	if (func_410(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 27)
		{
			iVar1 = 0;
			while (iVar1 < 6)
			{
				func_412(iParam1, iVar0, iVar1, bParam2, bParam3);
				iVar1++;
			}
			iVar0++;
		}
	}
}

void func_907(int iParam0, int iParam1)
{
	int iVar0;
	struct<8> Var1;
	int iVar9;
	int iVar10;
	int iVar11;

	if (func_410(iParam0))
	{
		*iParam1 = func_902(iParam0);
		if (func_903(*iParam1))
		{
			if (STREAMING::_IS_IMAP_ACTIVE(*iParam1))
			{
				STREAMING::_REMOVE_IMAP(*iParam1);
			}
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_1324(iParam0, iVar0))
			{
				Var1 = { func_1326(iParam0, iVar0) };
				*iParam1 = func_1327(iParam0, iVar0);
				func_1328(*iParam1, 0);
				if (PATHFIND::_0x5AC0944C156E5F44(&Var1))
				{
					PATHFIND::_0x527B97C203BB8606(&Var1);
				}
				if (func_903(*iParam1))
				{
					if (STREAMING::_IS_IMAP_ACTIVE(*iParam1))
					{
						STREAMING::_REMOVE_IMAP(*iParam1);
					}
				}
			}
			iVar0++;
		}
		iVar11 = 0;
		while (iVar11 < 27)
		{
			iVar9 = func_1091(iParam0, iVar11, 0);
			iVar10 = func_1091(iParam0, iVar11, 1);
			if (func_903(iVar9))
			{
				if (STREAMING::_IS_IMAP_ACTIVE(iVar9))
				{
					STREAMING::_REMOVE_IMAP(iVar9);
				}
			}
			if (func_903(iVar10))
			{
				if (STREAMING::_IS_IMAP_ACTIVE(iVar10))
				{
					STREAMING::_REMOVE_IMAP(iVar10);
				}
			}
			iVar11++;
		}
	}
}

void func_908(vector3 vParam0, int iParam3)
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
			if (func_1214(vVar2, vParam0, 2f, 1))
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

char* func_909(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "DUTCH";
		case 3:
			return "BILL";
		case 1:
			return "JOHN";
		case 2:
			return "JAVIER";
		case 4:
			return "UNCLE";
		case 5:
			return "HOSEA";
		case 6:
			return "MICAH";
		case 7:
			return "CHARLES";
		case 8:
			return "SEAN";
		case 9:
			return "LENNY";
		case 13:
			return "ABIGAIL";
		case 10:
			return "KIERAN";
		case 14:
			return "JACK";
		case 15:
			return "MARYBETH";
		case 16:
			return "MOLLY";
		case 17:
			return "PEARSON";
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
			return "EAGLEFLIES";
		case 12:
			return "DOG";
		default:
			break;
	}
	return "Companion unknown";
}

char* func_910(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Morning";
		case 1:
			return "Day";
		case 2:
			return "LongDay";
		case 3:
			return "Afternoon";
		case 4:
			return "Evening";
		case 5:
			return "Night";
		default:
			break;
	}
	return "";
}

int func_911()
{
	int iVar0;

	iVar0 = Global_40.f_4283;
	if (iVar0 == 4 || iVar0 == 7)
	{
		return 0;
	}
	if (iVar0 == 0 && Global_40.f_4283.f_4 == 2)
	{
		return 0;
	}
	if (iVar0 == 5)
	{
		if (!func_513(((*Global_1835011)[44 /*74*/])->f_1, 1))
		{
			return 0;
		}
	}
	return 1;
}

int func_912(int iParam0)
{
	if ((Global_40.f_4942[iParam0 /*60*/])->f_59 != 0)
	{
		return 1;
	}
	return 0;
}

bool func_913(int iParam0)
{
	return func_416(iParam0, 4, 1);
}

int func_914(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (!func_536(iParam0))
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
	if (!func_536(iParam0))
	{
		if (iVar0 != 0)
		{
			(Global_1357549->f_1675[iVar1 /*5*/])->f_1 = iParam0;
			((*Global_1360165)[iParam0 /*1157*/])->f_126 = (Global_1357549->f_1675[iVar1 /*5*/])->f_4;
		}
	}
	return iVar0;
}

struct<4> func_915(bool bParam0)
{
	return func_1054(1328661203, func_1329(), -1591664384, bParam0);
}

int func_916(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	int iVar0;

	iVar0 = func_516(bParam7);
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

int func_917(var uParam0, var uParam1)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_516(0), uParam0, uParam1, 29, 1))
	{
		return 0;
	}
	return 1;
}

int func_918(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_253)
	{
		if (MISC::IS_BIT_SET(*uParam1, iVar0))
		{
		}
		else if (MISC::IS_BIT_SET(uParam0->f_255, iVar0))
		{
		}
		else if ((uParam0->f_9[iVar0 /*9*/])->f_8 != 0)
		{
			if (!func_633((uParam0->f_9[iVar0 /*9*/])->f_8))
			{
			}
			else if ((uParam0->f_9[iVar0 /*9*/])->f_1 == 0)
			{
			}
			else if (!STREAMING::HAS_MODEL_LOADED((uParam0->f_9[iVar0 /*9*/])->f_1))
			{
				return 0;
			}
			iVar0++;
			return 1;
		}
	}

int func_919()
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (&Global_1879534)
	{
		return 0;
	}
	if (func_133(0, 1, 0))
	{
		return 1;
	}
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if ((Global_40.f_4942[iVar1 /*60*/])->f_59 != 0)
		{
			iVar0 = func_979((Global_40.f_4942[iVar1 /*60*/])->f_59);
			bVar2 = false;
			switch (iVar0)
			{
				case 8:
					if (!func_748(func_1330((Global_40.f_4942[iVar1 /*60*/])->f_59), 0))
					{
						bVar2 = true;
					}
					break;
				default:
					if (!func_477((Global_40.f_4942[iVar1 /*60*/])->f_59))
					{
						bVar2 = true;
					}
					break;
			}
			if (bVar2)
			{
				(Global_40.f_4942[iVar1 /*60*/])->f_59 = 0;
				func_565(iVar1, 512, 1);
			}
		}
		iVar1++;
	}
	return 1;
}

int func_920(int iParam0, bool bParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	iVar0 = 1;
	uVar1 = func_413();
	iVar2 = func_391(iParam0);
	iVar3 = 0;
	while (iVar3 < 27)
	{
		if (!func_537(iVar3, 4, 1))
		{
			if (func_414(iVar3))
			{
				bVar4 = false;
				if (uVar1 && func_416(iVar3, 32768, 1))
				{
					bVar4 = true;
				}
				if (!func_1331(iVar3, bVar4, iVar2, 0, bParam1))
				{
					iVar0 = 0;
				}
				else if (bParam1 && !func_357(iVar3))
				{
					if (func_186(iVar3, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 1, 0, 1, 0, 1) != 0)
					{
						func_540(iVar3, 4, 1);
					}
				}
				else
				{
					func_540(iVar3, 4, 1);
				}
			}
			else
			{
				if (((func_1332(iVar3) && !func_357(iVar3)) && !func_912(iVar3)) && iVar3 != Global_1357549->f_1497)
				{
					func_861(iVar3, 0, 0, 0, 0);
				}
				func_540(iVar3, 4, 1);
			}
		}
		iVar3++;
	}
	return iVar0;
}

int func_921(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	bool bVar4;
	int iVar5;

	iVar0 = 1;
	if (!func_363(iParam0, &uVar2, &iVar3, 0, 1))
	{
		return 1;
	}
	bVar4 = iParam0 == 22;
	iVar1 = uVar2;
	while (iVar1 <= iVar3)
	{
		if (!func_422(iVar1))
		{
		}
		else if (func_388(iVar1, 32) && iParam0 != 22)
		{
		}
		else
		{
			iVar5 = func_1064(iVar1);
			if (!func_344(iVar5, 0))
			{
				func_1333(iVar1, 0);
				_NAMESPACE48::_0x6759BEE6762E140B(func_864(iVar1));
				if (func_1334(iVar1, 0, 0, 0, 0, 1))
				{
					return 0;
				}
				iVar0 = 0;
			}
			else
			{
				if (bVar4 && func_1335(iVar5))
				{
					if (!DECORATOR::DECOR_EXIST_ON(iVar5, "CaravanLivestock"))
					{
						DECORATOR::DECOR_SET_BOOL(iVar5, "CaravanLivestock", true);
					}
				}
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar5, -1538724068);
				func_875(iVar1, 128);
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_922(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!func_420(uParam0->f_45))
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		Global_1357549->f_1675[iVar1 /*5*/] = func_421(iVar1);
		if (&Global_1357549->f_1675[iVar1 /*5*/] == 0)
		{
		}
		else if (!func_1336(iVar1))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

int func_923(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;
	int iVar6;

	iVar0 = 1;
	if (Global_40.f_4283.f_567)
	{
		vVar1 = { 0f, 0f, 0f };
		iVar6 = 0;
		if (uParam0->f_45 == Global_40.f_4283.f_567.f_1)
		{
			vVar1 = { Global_40.f_4283.f_567.f_2 };
			fVar4 = Global_40.f_4283.f_567.f_5;
			iVar5 = func_232(vVar1, 2);
		}
		else
		{
			iVar5 = func_482();
			if (!func_213(TASK::_0xA8452DD321607029(iVar5, 1)))
			{
				vVar1 = { TASK::_0xA8452DD321607029(iVar5, 1) };
			}
		}
		if (!func_213(vVar1))
		{
			iVar6 = func_419();
			if (!ENTITY::DOES_ENTITY_EXIST(Global_1357549->f_1897))
			{
				if (iVar6 != 0)
				{
					if (STREAMING::HAS_MODEL_LOADED(iVar6))
					{
						Global_1357549->f_1897 = func_1337(iVar6, vVar1, fVar4, 1, 1, Global_40.f_4283.f_567.f_6, 1, 0, 1, 0, 0, 0, 0);
					}
					else
					{
						STREAMING::REQUEST_MODEL(iVar6, false);
					}
				}
				iVar0 = 0;
			}
			else
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar6);
				PED::_0xC9151483CC06A414(Global_1357549->f_1897);
				TASK::_TASK_USE_SCENARIO_POINT(Global_1357549->f_1897, iVar5, 0, 0, 0, 1, 0, 0, -1082130432, 0);
			}
		}
		else
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_924(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
	return 1;
}

void func_925(var uParam0)
{
	switch (func_148())
	{
		case 1:
			uParam0->f_14 = MAP::_0x554D9D53F696D002(168093330, -125.3398f, -43.2379f, 94.3833f);
			uParam0->f_15 = MAP::_0x554D9D53F696D002(168093330, -149.5986f, -20.2218f, 95.1022f);
			uParam0->f_13 = MAP::_0x554D9D53F696D002(168093330, -138.8856f, -21.4424f, 95.0883f);
			break;
		case 2:
			uParam0->f_14 = MAP::_0x554D9D53F696D002(168093330, 647.7324f, -1245.42f, 42.7703f);
			uParam0->f_15 = MAP::_0x554D9D53F696D002(168093330, 658.9856f, -1229.287f, 43.2276f);
			uParam0->f_13 = MAP::_0x554D9D53F696D002(168093330, 677.5646f, -1254.409f, 43.0152f);
			break;
		case 3:
			uParam0->f_14 = MAP::_0x554D9D53F696D002(168093330, 1906.91f, -1862.294f, 46.3492f);
			uParam0->f_15 = MAP::_0x554D9D53F696D002(168093330, 1886.88f, -1884.633f, 41.8302f);
			uParam0->f_13 = MAP::_0x554D9D53F696D002(168093330, 1877.423f, -1861.41f, 41.8078f);
			break;
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_14))
	{
		MAP::SET_BLIP_SPRITE(uParam0->f_14, 1576459965, true);
		MAP::SET_BLIP_FLASH_TIMER(uParam0->f_14, 69, -1);
		func_701(uParam0->f_14, func_269());
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_15))
	{
		MAP::SET_BLIP_SPRITE(uParam0->f_15, -695368421, true);
		MAP::SET_BLIP_FLASH_TIMER(uParam0->f_15, 70, -1);
		func_701(uParam0->f_15, func_269());
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_13))
	{
		MAP::SET_BLIP_SPRITE(uParam0->f_13, -1852063472, true);
		MAP::SET_BLIP_FLASH_TIMER(uParam0->f_13, 71, -1);
		func_701(uParam0->f_13, func_269());
	}
}

char* func_926(int iParam0)
{
	return MISC::_0x2B6846401D68E563(BUILTIN::TO_FLOAT(iParam0), 0);
}

void func_927(char* sParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			StringCopy(sParam0, "ABI_TITHE", 16);
			break;
		case 1:
			StringCopy(sParam0, "JACK1_TITHE", 16);
			break;
		case 2:
			StringCopy(sParam0, "JACK2_TITHE", 16);
			break;
		case 3:
			StringCopy(sParam0, "CHAR1_TITHE", 16);
			break;
		case 4:
			StringCopy(sParam0, "CHAR2_TITHE", 16);
			break;
		case 5:
			StringCopy(sParam0, "CHAR3_TITHE", 16);
			break;
		case 6:
			StringCopy(sParam0, "CHAR4_TITHE", 16);
			break;
		case 7:
			StringCopy(sParam0, "SUSAN1_TITHE", 16);
			break;
		case 8:
			StringCopy(sParam0, "SUSAN2_TITHE", 16);
			break;
		case 9:
			StringCopy(sParam0, "SWANS_TITHE", 16);
			break;
		case 10:
			StringCopy(sParam0, "PEARS1_TITHE", 16);
			break;
		case 11:
			StringCopy(sParam0, "PEARS2_TITHE", 16);
			break;
		case 12:
			StringCopy(sParam0, "JAVIER_TITHE", 16);
			break;
		case 13:
			StringCopy(sParam0, "BILL_TITHE", 16);
			break;
		case 14:
			StringCopy(sParam0, "SEAN_TITHE", 16);
			break;
		case 15:
			StringCopy(sParam0, "KIER_TITHE", 16);
			break;
		case 16:
			StringCopy(sParam0, "TILLY_TITHE", 16);
			break;
		case 17:
			StringCopy(sParam0, "HOSEA1_TITHE", 16);
			break;
		case 18:
			StringCopy(sParam0, "HOSEA2_TITHE", 16);
			break;
		case 19:
			StringCopy(sParam0, "LENNY1_TITHE", 16);
			break;
		case 20:
			StringCopy(sParam0, "LENNY2_TITHE", 16);
			break;
		case 21:
			StringCopy(sParam0, "UNCLE_TITHE", 16);
			break;
		case 22:
			StringCopy(sParam0, "MARY1_TITHE", 16);
			break;
		case 23:
			StringCopy(sParam0, "MARY2_TITHE", 16);
			break;
		case 24:
			StringCopy(sParam0, "TREWL_TITHE", 16);
			break;
		case 25:
			StringCopy(sParam0, "MOLLY_TITHE", 16);
			break;
		case 26:
			StringCopy(sParam0, "STRAU_TITHE", 16);
			break;
		case 27:
			StringCopy(sParam0, "KAREN_TITHE", 16);
			break;
		case 28:
			StringCopy(sParam0, "DUTCH_TITHE", 16);
			break;
		case 29:
			StringCopy(sParam0, "SADIE_TITHE", 16);
			break;
		case 30:
			StringCopy(sParam0, "MICAH_TITHE", 16);
			break;
	}
}

void func_928(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 1;
			break;
		case 1:
			*uParam1 = 2;
			break;
		case 2:
			*uParam1 = 4;
			break;
		case 3:
			*uParam1 = 8;
			break;
		case 4:
			*uParam1 = 16;
			break;
		case 5:
			*uParam1 = 32;
			break;
		case 6:
			*uParam1 = 64;
			break;
		case 7:
			*uParam1 = 128;
			break;
		case 8:
			*uParam1 = 256;
			break;
		case 9:
			*uParam1 = 512;
			break;
		case 10:
			*uParam1 = 1024;
			break;
		case 11:
			*uParam1 = 2048;
			break;
		case 12:
			*uParam1 = 4096;
			break;
		case 13:
			*uParam1 = 8192;
			break;
		case 14:
			*uParam1 = 16384;
			break;
		case 15:
			*uParam1 = 32768;
			break;
		case 16:
			*uParam1 = 65536;
			break;
		case 17:
			*uParam1 = 131072;
			break;
		case 18:
			*uParam1 = 262144;
			break;
		case 19:
			*uParam1 = 524288;
			break;
		case 20:
			*uParam1 = 1048576;
			break;
		case 21:
			*uParam1 = 2097152;
			break;
		case 22:
			*uParam1 = 4194304;
			break;
		case 23:
			*uParam1 = 8388608;
			break;
		case 24:
			*uParam1 = 16777216;
			break;
		case 25:
			*uParam1 = 33554432;
			break;
		case 26:
			*uParam1 = 67108864;
			break;
		case 27:
			*uParam1 = 134217728;
			break;
		case 28:
			*uParam1 = 268435456;
			break;
		case 29:
			*uParam1 = 536870912;
			break;
		case 30:
			*uParam1 = 1073741824;
			break;
	}
}

void func_929(int iParam0, var uParam1)
{
	*uParam1 = -1;
	switch (iParam0)
	{
		case 0:
			*uParam1 = 13;
			break;
		case 1:
			*uParam1 = 14;
			break;
		case 2:
			*uParam1 = 14;
			break;
		case 3:
			*uParam1 = 7;
			break;
		case 4:
			*uParam1 = 7;
			break;
		case 5:
			*uParam1 = 7;
			break;
		case 6:
			*uParam1 = 7;
			break;
		case 7:
			*uParam1 = 19;
			break;
		case 8:
			*uParam1 = 19;
			break;
		case 9:
			*uParam1 = 21;
			break;
		case 10:
			*uParam1 = 17;
			break;
		case 11:
			*uParam1 = 17;
			break;
		case 12:
			*uParam1 = 2;
			break;
		case 13:
			*uParam1 = 3;
			break;
		case 14:
			*uParam1 = 8;
			break;
		case 15:
			*uParam1 = 10;
			break;
		case 16:
			*uParam1 = 22;
			break;
		case 17:
			*uParam1 = 5;
			break;
		case 18:
			*uParam1 = 5;
			break;
		case 19:
			*uParam1 = 9;
			break;
		case 20:
			*uParam1 = 9;
			break;
		case 21:
			*uParam1 = 4;
			break;
		case 22:
			*uParam1 = 15;
			break;
		case 23:
			*uParam1 = 15;
			break;
		case 24:
			*uParam1 = 23;
			break;
		case 25:
			*uParam1 = 16;
			break;
		case 26:
			*uParam1 = 18;
			break;
		case 27:
			*uParam1 = 20;
			break;
		case 28:
			*uParam1 = 0;
			break;
		case 29:
			*uParam1 = 11;
			break;
		case 30:
			*uParam1 = 6;
			break;
	}
}

bool func_930(var uParam0, var uParam1)
{
	return (uParam0 && uParam1) != 0;
}

void func_931(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

bool func_932(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_933(int iParam0)
{
	switch (func_56())
	{
		case -1:
			Global_40.f_4283.f_2 = (Global_40.f_4283.f_2 - (Global_40.f_4283.f_2 && iParam0));
			break;
	}
}

int func_934(int iParam0)
{
	vector3 vVar0;

	vVar0 = { func_752(iParam0) };
	if (func_213(vVar0))
	{
		return 0;
	}
	return 1;
}

void func_935(var uParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;

	uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Ledger");
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_INT(uVar0, "CampId", 1);
	uVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar0, "RtSpreadTop");
	func_1338(uVar1, uParam0->f_1[0 /*237*/]);
	uVar2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar0, "RtSpreadBottom");
	func_1338(uVar2, uParam0->f_1[1 /*237*/]);
	uVar3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "DynamicCatalogItems");
	uVar3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar3, "CatalogItemInspection");
	func_1339(uVar3, &(uParam0->f_476));
	uParam0->f_487 = DATABINDING::_DATABINDING_ADD_DATA_INT(uVar0, "CampMoneyDonated", func_156());
	uParam0->f_488 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar0, "CampMoneyLevel", "");
}

void func_936(var uParam0)
{
	int iVar0;

	iVar0 = func_148();
	uParam0->f_498[0 /*8*/] = 0;
	(uParam0->f_498[0 /*8*/])->f_1 = -1;
	(uParam0->f_498[0 /*8*/])->f_2 = -1;
	(uParam0->f_498[0 /*8*/])->f_3 = -1;
	(uParam0->f_498[0 /*8*/])->f_4 = 1;
	(uParam0->f_498[0 /*8*/])->f_5 = -1;
	(uParam0->f_498[0 /*8*/])->f_6 = -1;
	(uParam0->f_498[0 /*8*/])->f_7 = -1;
	uParam0->f_498[1 /*8*/] = -1;
	(uParam0->f_498[1 /*8*/])->f_1 = 1;
	(uParam0->f_498[1 /*8*/])->f_2 = -1;
	(uParam0->f_498[1 /*8*/])->f_3 = -1;
	(uParam0->f_498[1 /*8*/])->f_4 = -1;
	(uParam0->f_498[1 /*8*/])->f_5 = 0;
	(uParam0->f_498[1 /*8*/])->f_6 = -1;
	(uParam0->f_498[1 /*8*/])->f_7 = -1;
	uParam0->f_498[2 /*8*/] = -1;
	(uParam0->f_498[2 /*8*/])->f_1 = 2;
	(uParam0->f_498[2 /*8*/])->f_2 = -1;
	(uParam0->f_498[2 /*8*/])->f_3 = -1;
	(uParam0->f_498[2 /*8*/])->f_4 = -1;
	(uParam0->f_498[2 /*8*/])->f_5 = 3;
	(uParam0->f_498[2 /*8*/])->f_6 = -1;
	(uParam0->f_498[2 /*8*/])->f_7 = -1;
	uParam0->f_498[3 /*8*/] = -1;
	(uParam0->f_498[3 /*8*/])->f_1 = -1;
	(uParam0->f_498[3 /*8*/])->f_2 = 7;
	(uParam0->f_498[3 /*8*/])->f_3 = 5;
	(uParam0->f_498[3 /*8*/])->f_4 = -1;
	(uParam0->f_498[3 /*8*/])->f_5 = -1;
	(uParam0->f_498[3 /*8*/])->f_6 = 6;
	if (iVar0 == 1)
	{
		(uParam0->f_498[3 /*8*/])->f_7 = -1;
	}
	else
	{
		(uParam0->f_498[3 /*8*/])->f_7 = 4;
	}
}

int func_937(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 4;
		case 2:
			return 2;
		case 3:
			return 6;
		case 5:
			return 5;
		case 6:
			return 0;
		case 4:
			return 3;
		case 7:
			return 7;
		case 8:
			return 15;
	}
	return -1;
}

struct<8> func_938(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;

	Var0.f_5 = 2;
	switch (iParam0)
	{
		case 0:
			Var0 = -152894290;
			break;
		case 4:
			Var0 = -739512309;
			break;
		case 2:
		case 3:
			Var0 = 344111076;
			break;
		case 10:
			Var0 = -634535025;
			break;
		case 6:
			Var0 = 637951816;
			break;
		case 5:
			Var0 = 1371343903;
			break;
		case 7:
			Var0 = -1816442556;
			break;
		case 1:
			if (func_148() == 1)
			{
				Var0 = 1442242084;
			}
			else
			{
				Var0 = -1239305634;
			}
			break;
		case 9:
			Var0 = -1287936009;
			break;
		case 8:
			Var0 = -1750328455;
			break;
		case 14:
			Var0 = -665966576;
			break;
	}
	Var0.f_2 = -1;
	Var0.f_1 = iParam0;
	Var0.f_5[0] = iParam1;
	Var0.f_5[1] = iParam2;
	return Var0;
}

void func_939(var uParam0)
{
	uParam0->f_531[1 /*30*/] = 1259027903; /* GXTEntry: "Strauss\'s Medicine Wagon" */
	(uParam0->f_531[1 /*30*/])->f_1 = 0;
	(uParam0->f_531[1 /*30*/])->f_2[0 /*4*/] = -371380166; /* GXTEntry: "Basics" */
	((uParam0->f_531[1 /*30*/])->f_2[0 /*4*/])->f_1 = 1185646829; /* GXTEntry: "- Basic liquor, health cures & bitters." */
	((uParam0->f_531[1 /*30*/])->f_2[0 /*4*/])->f_2 = 0;
	((uParam0->f_531[1 /*30*/])->f_2[0 /*4*/])->f_3 = -1;
	(uParam0->f_531[1 /*30*/])->f_2[1 /*4*/] = -681440444; /* GXTEntry: "Sharpen the senses" */
	((uParam0->f_531[1 /*30*/])->f_2[1 /*4*/])->f_1 = 2020699256; /* GXTEntry: "- Snake oil & potent bitters." */
	((uParam0->f_531[1 /*30*/])->f_2[1 /*4*/])->f_2 = 525024705; /* GXTEntry: "Increases total supplies, includes snake oil to restore Dead Eye and bitters to r" +
    "estore Stamina." */
	((uParam0->f_531[1 /*30*/])->f_2[1 /*4*/])->f_3 = func_1340(30);
	(uParam0->f_531[1 /*30*/])->f_2[2 /*4*/] = 125037415; /* GXTEntry: "Something with kick" */
	((uParam0->f_531[1 /*30*/])->f_2[2 /*4*/])->f_1 = -1412836568; /* GXTEntry: "- Tonics & premium liquor." */
	((uParam0->f_531[1 /*30*/])->f_2[2 /*4*/])->f_2 = 682446981; /* GXTEntry: "Increases total supplies, includes tonics to refill all stats as well as higher q" +
    "uality liquors." */
	((uParam0->f_531[1 /*30*/])->f_2[2 /*4*/])->f_3 = func_1340(50);
	(uParam0->f_531[1 /*30*/])->f_2[3 /*4*/] = -105033734; /* GXTEntry: "The good stuff" */
	((uParam0->f_531[1 /*30*/])->f_2[3 /*4*/])->f_1 = 1568913053; /* GXTEntry: "- Potent health cures & tonics." */
	((uParam0->f_531[1 /*30*/])->f_2[3 /*4*/])->f_2 = 1181715465; /* GXTEntry: "Increases total supplies, includes more effective healing items and tonics." */
	((uParam0->f_531[1 /*30*/])->f_2[3 /*4*/])->f_3 = func_1340(75);
	(uParam0->f_531[1 /*30*/])->f_2[4 /*4*/] = 0;
	((uParam0->f_531[1 /*30*/])->f_2[4 /*4*/])->f_1 = 0;
	((uParam0->f_531[1 /*30*/])->f_2[4 /*4*/])->f_2 = 2099654106; /* GXTEntry: "This area of camp is fully upgraded." */
	((uParam0->f_531[1 /*30*/])->f_2[4 /*4*/])->f_3 = -1;
	(uParam0->f_531[1 /*30*/])->f_23 = 1;
	(uParam0->f_531[1 /*30*/])->f_24[0] = func_1340(15);
	(uParam0->f_531[1 /*30*/])->f_24[1] = func_1340(25);
	(uParam0->f_531[1 /*30*/])->f_24[2] = func_1340(45);
	(uParam0->f_531[1 /*30*/])->f_24[3] = func_1340(75);
	uParam0->f_531[0 /*30*/] = 1069539174; /* GXTEntry: "Pearson\'s Provisions Wagon" */
	(uParam0->f_531[0 /*30*/])->f_1 = 0;
	(uParam0->f_531[0 /*30*/])->f_2[0 /*4*/] = -1163134641; /* GXTEntry: "Essentials" */
	((uParam0->f_531[0 /*30*/])->f_2[0 /*4*/])->f_1 = -57804606; /* GXTEntry: "- The basics, bread & biscuits." */
	((uParam0->f_531[0 /*30*/])->f_2[0 /*4*/])->f_2 = 0;
	((uParam0->f_531[0 /*30*/])->f_2[0 /*4*/])->f_3 = -1;
	(uParam0->f_531[0 /*30*/])->f_2[1 /*4*/] = -1946608662; /* GXTEntry: "Less bland" */
	((uParam0->f_531[0 /*30*/])->f_2[1 /*4*/])->f_1 = 926019081; /* GXTEntry: "- Fresh fruit & basic canned goods." */
	((uParam0->f_531[0 /*30*/])->f_2[1 /*4*/])->f_2 = 482064073; /* GXTEntry: "Increases total provisions, adds fresh fruit and basic canned goods." */
	((uParam0->f_531[0 /*30*/])->f_2[1 /*4*/])->f_3 = func_1340(30);
	(uParam0->f_531[0 /*30*/])->f_2[2 /*4*/] = -1651982583; /* GXTEntry: "Some real variety" */
	((uParam0->f_531[0 /*30*/])->f_2[2 /*4*/])->f_1 = 552518019; /* GXTEntry: "- Chewing tobacco & premium canned goods." */
	((uParam0->f_531[0 /*30*/])->f_2[2 /*4*/])->f_2 = 905767243; /* GXTEntry: "Increases total provisions, adds chewing tobacco and premium canned goods." */
	((uParam0->f_531[0 /*30*/])->f_2[2 /*4*/])->f_3 = func_1340(45);
	(uParam0->f_531[0 /*30*/])->f_2[3 /*4*/] = -542883057; /* GXTEntry: "Treat ourselves!" */
	((uParam0->f_531[0 /*30*/])->f_2[3 /*4*/])->f_1 = 1002010396; /* GXTEntry: "- Cocaine chewing gum & assorted sweets." */
	((uParam0->f_531[0 /*30*/])->f_2[3 /*4*/])->f_2 = 432025806; /* GXTEntry: "Increases total provisions, adds cocaine chewing gum and sweets." */
	((uParam0->f_531[0 /*30*/])->f_2[3 /*4*/])->f_3 = func_1340(55);
	(uParam0->f_531[0 /*30*/])->f_2[4 /*4*/] = 0;
	((uParam0->f_531[0 /*30*/])->f_2[4 /*4*/])->f_1 = 0;
	((uParam0->f_531[0 /*30*/])->f_2[4 /*4*/])->f_2 = 2099654106; /* GXTEntry: "This area of camp is fully upgraded." */
	((uParam0->f_531[0 /*30*/])->f_2[4 /*4*/])->f_3 = -1;
	(uParam0->f_531[0 /*30*/])->f_23 = 1;
	(uParam0->f_531[0 /*30*/])->f_24[0] = func_1340(15);
	(uParam0->f_531[0 /*30*/])->f_24[1] = func_1340(25);
	(uParam0->f_531[0 /*30*/])->f_24[2] = func_1340(40);
	(uParam0->f_531[0 /*30*/])->f_24[3] = func_1340(50);
	uParam0->f_531[2 /*30*/] = -2146471150; /* GXTEntry: "Arthur\'s Munitions" */
	(uParam0->f_531[2 /*30*/])->f_1 = 0;
	(uParam0->f_531[2 /*30*/])->f_2[0 /*4*/] = 1973763900; /* GXTEntry: "Start simple" */
	((uParam0->f_531[2 /*30*/])->f_2[0 /*4*/])->f_1 = 1507459390; /* GXTEntry: "- Revolver & pistol ammo." */
	((uParam0->f_531[2 /*30*/])->f_2[0 /*4*/])->f_2 = 0;
	((uParam0->f_531[2 /*30*/])->f_2[0 /*4*/])->f_3 = -1;
	(uParam0->f_531[2 /*30*/])->f_2[1 /*4*/] = 1201857340; /* GXTEntry: "Improve our offense" */
	((uParam0->f_531[2 /*30*/])->f_2[1 /*4*/])->f_1 = 1813751233; /* GXTEntry: "- Repeater ammo & arrows." */
	((uParam0->f_531[2 /*30*/])->f_2[1 /*4*/])->f_2 = -1620504213; /* GXTEntry: "Increases armory supplies, adds repeater ammo and arrows." */
	((uParam0->f_531[2 /*30*/])->f_2[1 /*4*/])->f_3 = func_1340(60);
	(uParam0->f_531[2 /*30*/])->f_2[2 /*4*/] = 374407321; /* GXTEntry: "Some real firepower" */
	((uParam0->f_531[2 /*30*/])->f_2[2 /*4*/])->f_1 = 2101200901; /* GXTEntry: "- Throwing knives, shotgun & rifle ammo." */
	((uParam0->f_531[2 /*30*/])->f_2[2 /*4*/])->f_2 = -1314015756; /* GXTEntry: "Increases armory supplies, adds throwing knives, shotgun and rifle ammo." */
	((uParam0->f_531[2 /*30*/])->f_2[2 /*4*/])->f_3 = func_1340(90);
	(uParam0->f_531[2 /*30*/])->f_2[3 /*4*/] = 679585018; /* GXTEntry: "Let\'s have some fun" */
	((uParam0->f_531[2 /*30*/])->f_2[3 /*4*/])->f_1 = -1884656418; /* GXTEntry: "- Fire bottles & high velocity repeater ammo." */
	((uParam0->f_531[2 /*30*/])->f_2[3 /*4*/])->f_2 = 2137248097;
	((uParam0->f_531[2 /*30*/])->f_2[3 /*4*/])->f_3 = func_1340(110);
	(uParam0->f_531[2 /*30*/])->f_2[4 /*4*/] = 0;
	((uParam0->f_531[2 /*30*/])->f_2[4 /*4*/])->f_1 = 0;
	((uParam0->f_531[2 /*30*/])->f_2[4 /*4*/])->f_2 = 2099654106; /* GXTEntry: "This area of camp is fully upgraded." */
	((uParam0->f_531[2 /*30*/])->f_2[4 /*4*/])->f_3 = -1;
	(uParam0->f_531[2 /*30*/])->f_23 = 1;
	(uParam0->f_531[2 /*30*/])->f_24[0] = func_1340(8);
	(uParam0->f_531[2 /*30*/])->f_24[1] = func_1340(10);
	(uParam0->f_531[2 /*30*/])->f_24[2] = func_1340(15);
	(uParam0->f_531[2 /*30*/])->f_24[3] = func_1340(20);
	uParam0->f_531[3 /*30*/] = -2087690276; /* GXTEntry: "Camp Lodging" */
	(uParam0->f_531[3 /*30*/])->f_1 = 0;
	(uParam0->f_531[3 /*30*/])->f_2[0 /*4*/] = 840935239; /* GXTEntry: "Bare-bone shelter" */
	((uParam0->f_531[3 /*30*/])->f_2[0 /*4*/])->f_1 = 1470166745; /* GXTEntry: "- Basic canvas. Old fur for warmth." */
	((uParam0->f_531[3 /*30*/])->f_2[0 /*4*/])->f_2 = 0;
	((uParam0->f_531[3 /*30*/])->f_2[0 /*4*/])->f_3 = -1;
	(uParam0->f_531[3 /*30*/])->f_2[1 /*4*/] = 2020258780; /* GXTEntry: "First things first" */
	((uParam0->f_531[3 /*30*/])->f_2[1 /*4*/])->f_1 = 1123011959; /* GXTEntry: "- Dutch wants something comfier." */
	((uParam0->f_531[3 /*30*/])->f_2[1 /*4*/])->f_2 = 548799892; /* GXTEntry: "Upgrade Dutch\'s lodging. Encourages others to donate." */
	((uParam0->f_531[3 /*30*/])->f_2[1 /*4*/])->f_3 = func_1340(220);
	(uParam0->f_531[3 /*30*/])->f_2[2 /*4*/] = 1187500183; /* GXTEntry: "Next in line" */
	((uParam0->f_531[3 /*30*/])->f_2[2 /*4*/])->f_1 = 742826021; /* GXTEntry: "- Arthur wants a map to help plan journeys." */
	((uParam0->f_531[3 /*30*/])->f_2[2 /*4*/])->f_2 = 1316282641; /* GXTEntry: "Upgrade Arthur\'s lodging. Unlocks the fast travel map, allowing you to quickly tr" +
    "avel to previously discovered locations. Also unlocks grooming supplies." */
	((uParam0->f_531[3 /*30*/])->f_2[2 /*4*/])->f_3 = func_1340(325);
	(uParam0->f_531[3 /*30*/])->f_2[3 /*4*/] = 181229727; /* GXTEntry: "For everyone!" */
	((uParam0->f_531[3 /*30*/])->f_2[3 /*4*/])->f_1 = -1952031021; /* GXTEntry: "- Improve the rest of the tents in camp." */
	((uParam0->f_531[3 /*30*/])->f_2[3 /*4*/])->f_2 = -2076291933; /* GXTEntry: "Upgrade all remaining lodgings. Improves overall mood of camp." */
	((uParam0->f_531[3 /*30*/])->f_2[3 /*4*/])->f_3 = func_1340(300);
	(uParam0->f_531[3 /*30*/])->f_2[4 /*4*/] = 0;
	((uParam0->f_531[3 /*30*/])->f_2[4 /*4*/])->f_1 = 0;
	((uParam0->f_531[3 /*30*/])->f_2[4 /*4*/])->f_2 = 2099654106; /* GXTEntry: "This area of camp is fully upgraded." */
	((uParam0->f_531[3 /*30*/])->f_2[4 /*4*/])->f_3 = -1;
	(uParam0->f_531[3 /*30*/])->f_23 = 0;
	uParam0->f_531[4 /*30*/] = 2108789685; /* GXTEntry: "Camp Boat" */
	(uParam0->f_531[4 /*30*/])->f_1 = 0;
	((uParam0->f_531[4 /*30*/])->f_2[1 /*4*/])->f_1 = -912712840; /* GXTEntry: "- Met a traveler selling an old boat. Useful?" */
	((uParam0->f_531[4 /*30*/])->f_2[1 /*4*/])->f_2 = -1497934411; /* GXTEntry: "Buy a boat for the camp. Easy transport and access to fishing holes." */
	((uParam0->f_531[4 /*30*/])->f_2[1 /*4*/])->f_3 = func_1340(450);
	((uParam0->f_531[4 /*30*/])->f_2[2 /*4*/])->f_1 = 0;
	((uParam0->f_531[4 /*30*/])->f_2[2 /*4*/])->f_2 = 2099654106; /* GXTEntry: "This area of camp is fully upgraded." */
	((uParam0->f_531[4 /*30*/])->f_2[2 /*4*/])->f_3 = -1;
	(uParam0->f_531[4 /*30*/])->f_23 = 0;
	uParam0->f_531[5 /*30*/] = -480748016; /* GXTEntry: "Chicken Coop" */
	(uParam0->f_531[5 /*30*/])->f_1 = 0;
	((uParam0->f_531[5 /*30*/])->f_2[1 /*4*/])->f_1 = -1503751759; /* GXTEntry: "- Some local farms are selling off old coops." */
	((uParam0->f_531[5 /*30*/])->f_2[1 /*4*/])->f_2 = -492500419; /* GXTEntry: "Buy a chicken coop for camp. Add nutrition to all camp stews. Dead Eye boost when" +
    " consuming stew." */
	((uParam0->f_531[5 /*30*/])->f_2[1 /*4*/])->f_3 = func_1340(175);
	((uParam0->f_531[5 /*30*/])->f_2[2 /*4*/])->f_1 = 0;
	((uParam0->f_531[5 /*30*/])->f_2[2 /*4*/])->f_2 = 2099654106; /* GXTEntry: "This area of camp is fully upgraded." */
	((uParam0->f_531[5 /*30*/])->f_2[2 /*4*/])->f_3 = -1;
	(uParam0->f_531[5 /*30*/])->f_23 = 0;
	uParam0->f_531[6 /*30*/] = 2011014118; /* GXTEntry: "Leather Working Tools" */
	(uParam0->f_531[6 /*30*/])->f_1 = 0;
	((uParam0->f_531[6 /*30*/])->f_2[1 /*4*/])->f_1 = 2107034732; /* GXTEntry: "- If we get Pearson better tools he can make extra gear." */
	((uParam0->f_531[6 /*30*/])->f_2[1 /*4*/])->f_2 = 351632167; /* GXTEntry: "Buy some leather working tools for Pearson. Gain access to extra crafting options" +
    "." */
	((uParam0->f_531[6 /*30*/])->f_2[1 /*4*/])->f_3 = func_1340(225);
	((uParam0->f_531[6 /*30*/])->f_2[2 /*4*/])->f_1 = 0;
	((uParam0->f_531[6 /*30*/])->f_2[2 /*4*/])->f_2 = 2099654106; /* GXTEntry: "This area of camp is fully upgraded." */
	((uParam0->f_531[6 /*30*/])->f_2[2 /*4*/])->f_3 = -1;
	(uParam0->f_531[6 /*30*/])->f_23 = 0;
	uParam0->f_531[7 /*30*/] = -594525626; /* GXTEntry: "Camp Horse Station" */
	(uParam0->f_531[7 /*30*/])->f_1 = 0;
	((uParam0->f_531[7 /*30*/])->f_2[1 /*4*/])->f_1 = 2006016232; /* GXTEntry: "- It would be great to have more room to hitch." */
	((uParam0->f_531[7 /*30*/])->f_2[1 /*4*/])->f_2 = 385851330; /* GXTEntry: "Buy a horse station. A place to retrieve horses from the stables or recall your m" +
    "ain horse to camp." */
	((uParam0->f_531[7 /*30*/])->f_2[1 /*4*/])->f_3 = func_1340(300);
	((uParam0->f_531[7 /*30*/])->f_2[2 /*4*/])->f_1 = 0;
	((uParam0->f_531[7 /*30*/])->f_2[2 /*4*/])->f_2 = 2099654106; /* GXTEntry: "This area of camp is fully upgraded." */
	((uParam0->f_531[7 /*30*/])->f_2[2 /*4*/])->f_3 = -1;
	(uParam0->f_531[7 /*30*/])->f_23 = 0;
}

bool func_940()
{
	int iVar0;

	iVar0 = func_1341();
	return iVar0 <= -160;
}

bool func_941()
{
	int iVar0;

	iVar0 = func_1341();
	return iVar0 >= 160;
}

var func_942()
{
	return Global_23117.f_1768;
}

int func_943(int iParam0)
{
	if (func_56() != -1)
	{
		return 0;
	}
	if (!func_499(iParam0))
	{
		return 0;
	}
	return func_513(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
}

var func_944()
{
	return Global_1357549->f_1900;
}

int func_945(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (((uParam0->f_531[iVar0 /*30*/])->f_2[iVar1 /*4*/])->f_3 != -1)
			{
				iVar2 = (iVar2 + ((uParam0->f_531[iVar0 /*30*/])->f_2[iVar1 /*4*/])->f_3);
			}
			iVar1++;
		}
		iVar0++;
	}
	return iVar2 * 100;
}

int func_946()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
	{
		return 1;
	}
	return 0;
}

int func_947()
{
	int iVar0;

	iVar0 = func_148();
	if (iVar0 == 6 || iVar0 == 5)
	{
		return 0;
	}
	if (iVar0 == 3 && !func_150(28))
	{
		return 0;
	}
	if ((((func_234(-625309660, 0) || func_234(-218211995, 0)) || func_234(443165194, 0)) || func_234(1685749736, 0)) || func_946())
	{
		return 1;
	}
	return 0;
}

int func_948(int iParam0)
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

int func_949(int iParam0)
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

void func_950(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
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

	iVar0 = func_1341();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_1342(iParam0);
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
	if (func_753(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_149())
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
	Global_40.f_11095.f_35 = func_1343(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_1341();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || iParam7)
	{
		iVar6 = func_1344(iVar1);
		func_1346(func_1345(), 0, 4000);
		func_1347(Global_40.f_11095.f_35);
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
		func_1348(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_663(func_1349(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(iParam5))
			{
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_949(14))
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
					sParam4 = func_1350(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_1273(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_1273(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_663(func_1349(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_949(4))
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
					sParam4 = func_1350(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_1273(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_1273(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_1349(-1990689970) };
	STATS::STAT_ID_SET_INT(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_0xE6B763C7F4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_1351(10, 1);
	}
}

void func_951(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0 /*6*/] = iParam1;
	(Global_1347477->f_155[iParam0 /*6*/])->f_2 = iParam2;
	(Global_1347477->f_155[iParam0 /*6*/])->f_3 = iParam3;
	(Global_1347477->f_155[iParam0 /*6*/])->f_4 = iParam4;
	(Global_1347477->f_155[iParam0 /*6*/])->f_5 = bParam5;
	(Global_1347477->f_155[iParam0 /*6*/])->f_1 = MISC::GET_GAME_TIMER() + 500;
}

int func_952(int iParam0, bool bParam1)
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

bool func_953(int iParam0)
{
	return ((iParam0 == Global_1357549->f_1497 && Global_1357549->f_1497.f_5 >= 4) && Global_1357549->f_1497.f_5 < 11);
}

int func_954(int iParam0, bool bParam1)
{
	int iVar0;
	struct<15> Var1;

	if (!func_503(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_1360165[iParam0 /*1157*/]))
	{
		return 0;
	}
	if (func_358(iParam0, 0))
	{
		func_1352(iParam0, 1);
		return 1;
	}
	if (!func_1353())
	{
		return 0;
	}
	if (bParam1)
	{
		func_541(iParam0, 0, "Adding to Group");
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1359489[iVar0] == -1)
		{
			(*Global_1359489)[iVar0] = iParam0;
		}
		else
		{
			iVar0++;
		}
	}
	func_1352(iParam0, 1);
	Global_1359489->f_15 = func_854(1);
	func_540(iParam0, 32, 1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], -1247684992);
	PED::SET_PED_COMBAT_ATTRIBUTES(Global_1360165[iParam0 /*1157*/], 83, true);
	PED::_0x9238A3D970BBB0A9(Global_1360165[iParam0 /*1157*/], -1972074710);
	PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 152, true);
	if (COMPANION::_0xB7E0590C86E1711F(PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX())) != 234527101)
	{
		COMPANION::_0x0DE02DA3C0F66955(func_179(iParam0), COMPANION::_0xB7E0590C86E1711F(PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX())));
		COMPANION::_0x61BDA07407754A5C(func_179(iParam0), Global_1391438->f_414.f_37);
	}
	PED::_0x89E59DBD15E21177(func_852(), 0);
	func_1354(iParam0);
	Var1 = PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX());
	Var1.f_12 = 3;
	Var1.f_3 = Global_1360165[iParam0 /*1157*/];
	Var1.f_7 = func_135();
	Var1.f_8 = 0;
	Var1.f_11 = 10;
	Var1.f_14 = Global_1360165[iParam0 /*1157*/];
	MISC::_0x88BC5F4AEF77FC4E(&Var1, 17);
	return 1;
}

Vector3 func_955(vector3 vParam0, float fParam3)
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

Vector3 func_956(vector3 vParam0, var uParam3, var uParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, float fParam10, int iParam11, int iParam12, float fParam13)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	vector3 vVar7;
	int iVar10;
	bool bVar11;
	bool bVar12;
	var uVar13;
	bool bVar14;
	struct<5> Var15;
	struct<5> Var20;
	var uVar25;
	var uVar26;

	fVar2 = 9999999f;
	func_1355(&bVar12, &uVar13);
	bVar14 = false;
	if (bVar12)
	{
		if (func_1229() == 0 && !func_1356(0))
		{
			bVar14 = true;
		}
	}
	if (!func_1357(15, &Var15))
	{
		return 0f, 0f, 0f;
	}
	VOLUME::_0x748C5F51A18CB8F0(0);
	Var20 = { Var15 };
	if (bParam7)
	{
		iVar10 = func_1358();
		if (VOLUME::_0x92A78D0BEDB332A3(iVar10))
		{
		}
	}
	if (!func_259(Global_1310720->f_21))
	{
		fParam10 = iParam11;
	}
	Var15.f_2 = 723128514;
	DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&uVar25, &Var15);
	while (DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var15, uVar25) > iVar0)
	{
		iVar1 = 0;
		Var20.f_2 = -1148748386;
		Var20.f_3 = iVar0;
		DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&uVar26, &Var20);
		while (DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var20, uVar26) > iVar1)
		{
			vVar7 = { func_1359(iVar0, iVar1) };
			bVar11 = func_1360(iVar0, iVar1);
			fVar3 = BUILTIN::VDIST(vParam0, vVar7);
			if (((((fVar3 < fVar2 && fVar3 > fParam10) && !func_213(vVar7)) && func_1361(iVar0, iParam8, iParam12)) && !func_1362(iVar0)) || bVar11)
			{
				if (func_1363(vVar7, iVar0, iVar1, bParam5, bParam6, bVar14, iVar10, bParam9, fParam13))
				{
					vVar4 = { vVar7 };
					fVar2 = BUILTIN::VDIST(vParam0, vVar7);
					*uParam3 = iVar0;
					*uParam4 = iVar1;
					if (bVar11)
					{
					}
					else
					{
						iVar1++;
					}
					iVar0++;
					VOLUME::_0x748C5F51A18CB8F0(1);
					return vVar4;
				}
			}
		}
	}

void func_957(struct<16> Param0, int iParam16)
{
	int iVar0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1934603->f_161 >= 10)
	{
		return;
	}
	if (!func_1364(iParam16, 2))
	{
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(Param0.f_10))) > 0 || func_1365(&(Param0.f_10)))
		{
			return;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(((*Global_1934603)[iVar0 /*16*/])->f_10)))
		{
			*((*Global_1934603)[iVar0 /*16*/]) = { Param0 };
			Global_1934603->f_161++;
			func_1366(iParam16);
			return;
		}
		iVar0++;
	}
}

void func_958(int iParam0)
{
	Global_1900383->f_316 = (Global_1900383->f_316 || iParam0);
}

int func_959(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (!func_503(iParam0))
	{
		return 0;
	}
	if (iParam1 && !func_1332(iParam0))
	{
		return 0;
	}
	if (iParam2 == -1)
	{
		return 1;
	}
	iVar0 = iParam2;
	if (func_717(iVar0, 1))
	{
		if (func_1367(iParam0) && !func_1368(iParam0))
		{
			return 1;
		}
	}
	if (func_717(iVar0, 2))
	{
		if (!func_1367(iParam0))
		{
			return 1;
		}
	}
	if (func_717(iVar0, 4))
	{
		if (func_1368(iParam0))
		{
			return 1;
		}
	}
	if (func_717(iVar0, 8))
	{
		if (func_1369(iParam0) && !func_1368(iParam0))
		{
			return 1;
		}
	}
	if (func_717(iVar0, 16))
	{
		if (!func_1369(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_960(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_35) && !PED::IS_PED_INJURED(Global_35))
		{
			if (PED::_0xB676EFDA03DADA52(iParam0, 0) == Global_35)
			{
				PAD::DISABLE_CONTROL_ACTION(0, 308778731, false);
				PAD::DISABLE_CONTROL_ACTION(0, 1002303471, false);
				PAD::DISABLE_CONTROL_ACTION(0, 1520437207, false);
			}
		}
	}
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 0f);
	if (func_462(iParam0, 1041577989))
	{
		return 0;
	}
	if (TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iParam0)))
	{
		return 1;
	}
	return 0;
}

bool func_961(int iParam0, vector3 vParam1)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	vVar3 = { vVar0 + ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	return func_1370(vVar0, vVar3, vParam1);
}

bool func_962(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_963(int iParam0, int iParam1)
{
	float fVar0;

	if (!func_462(iParam0, 1041577989))
	{
		return 1;
	}
	fVar0 = TASK::_0xA710DC5D25F8B942(iParam0, 1041577989);
	if (func_717(iParam1, 32))
	{
		if (fVar0 >= 1.85f)
		{
			return 1;
		}
		return 0;
	}
	if (func_717(iParam1, 256))
	{
		if (fVar0 >= 1f)
		{
			return 1;
		}
		return 0;
	}
	if (func_717(iParam1, 2048))
	{
		if (fVar0 >= 1.5f)
		{
			return 1;
		}
		return 0;
	}
	return 1;
}

Vector3 func_964(vector3 vParam0)
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

bool func_965(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

int func_966(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_1371(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

int func_967(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::_0x9A100F1CF4546629(iParam0) || ENTITY::_0xC346A546612C49A9(iParam0))
	{
		iVar0 = func_1372(iParam0);
		if (!func_983(iVar0, 0))
		{
			iVar0 = func_1373(iParam0);
		}
	}
	else
	{
		iVar0 = func_1373(iParam0);
	}
	return iVar0;
}

int func_968(int iParam0, int iParam1, int iParam2)
{
	struct<10> Var0;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	struct<2> Var14[15];
	int iVar45;
	int iVar46;

	if (!func_983(iParam0, 0))
	{
		return 0;
	}
	*iParam2 = 0;
	Var0 = { func_1374(-1591664384, -1591664384, 0, 0, iParam1, 0, -1, 0, 0) };
	iVar11 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&Var0, &iVar10, 1);
	if (iVar11 != -1)
	{
		iVar12 = 0;
		while (iVar12 < iVar10)
		{
			if (ITEMDATABASE::_0x8750F69A720C2E41(iVar11, iVar12, &iVar13))
			{
				if (func_1375(iVar13, iParam1, &Var14, &iVar45, 1, 0))
				{
					iVar46 = 0;
					while (iVar46 < iVar45)
					{
						if (iParam0 == &Var14[iVar46 /*2*/])
						{
							*iParam2 = (*iParam2 + (Var14[iVar46 /*2*/])->f_1);
						}
						iVar46++;
					}
				}
			}
			iVar12++;
		}
		ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar11);
	}
	return 1;
}

int func_969(int iParam0)
{
	if ((func_986(iParam0, -839724752) || func_986(iParam0, -887064662)) || func_986(iParam0, 1286414894))
	{
		return 1;
	}
	return 0;
}

int func_970(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 3;
	}
	return 0;
}

int func_971(int iParam0, int iParam1)
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

int func_972()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

int func_973()
{
	if (func_148() == -1)
	{
		return 1;
	}
	return func_691(16);
}

int func_974(int iParam0, int iParam1, int iParam2)
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

int func_975()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5 + 1);
	return iVar0;
}

void func_976(int iParam0, var uParam1)
{
	if (func_12(1048576))
	{
		return;
	}
	Global_1357549->f_1833 = { func_1376(iParam0) };
	Global_1357549->f_1841 = { func_1377(iParam0) };
	Global_1357549->f_1844 = uParam1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1357549->f_1833)) || MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1357549->f_1841)))
	{
		return;
	}
	func_147(1048576);
}

int func_977(int iParam0)
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

int func_978(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

int func_979(int iParam0)
{
	if (!func_501(iParam0))
	{
		return 0;
	}
	return func_1378(func_977(iParam0));
}

int func_980(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_1379(iVar0);
}

int func_981(int iParam0, int iParam1)
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

int func_982()
{
	if (Global_1946804->f_2793)
	{
		return 1;
	}
	if (MISC::ABSI((MISC::GET_GAME_TIMER() - Global_1946804->f_2791)) < 1250)
	{
		return 1;
	}
	if (func_1380())
	{
		return 1;
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_35))
	{
		return 1;
	}
	return 0;
}

int func_983(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

bool func_984(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_983(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_1175(iParam0);
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
		if (!func_1381(iParam0, 1))
		{
			return false;
		}
	}
	return func_750(iParam0, 0, bParam2) >= iParam1;
}

int func_985(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (func_509(&iVar0))
	{
		if (iParam0 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_986(int iParam0, int iParam1)
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

int func_987()
{
	int iVar0;

	iVar0 = 1549701178;
	switch (func_1382())
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

int func_988()
{
	int iVar0;

	iVar0 = 614608656;
	switch (func_1382())
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

int func_989()
{
	int iVar0;

	iVar0 = -1832677570;
	switch (func_1382())
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

int func_990()
{
	int iVar0;

	iVar0 = 1623252156;
	switch (func_1382())
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

int func_991(int iParam0)
{
	if (!func_501(iParam0))
	{
		return -1;
	}
	return func_966(iParam0);
}

struct<2> func_992(float fParam0)
{
	char cVar0[16];

	if (fParam0 <= 30f)
	{
		StringCopy(&cVar0, "~COLOR_RED~", 16);
	}
	else if (fParam0 <= 75f)
	{
		StringCopy(&cVar0, "~COLOR_WHITE~", 16);
	}
	else
	{
		StringCopy(&cVar0, "~COLOR_YELLOW~", 16);
	}
	return cVar0;
}

int func_993(var uParam0)
{
	if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_IN_ANY_BOAT(Global_35)) && PED::_0x4E76CB57222A00E5(Global_35) == -1)
	{
		*uParam0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

void func_994(var uParam0, int iParam1)
{
	if (uParam0->f_3483.f_1 != iParam1)
	{
		uParam0->f_3483.f_1 = iParam1;
	}
}

int func_995(bool bParam0, float fParam1, int iParam2, float fParam3)
{
	int iVar0;
	float fVar1;

	if (!PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		return 1;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(Global_35, false);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 1;
	}
	func_1383(1);
	if (!VEHICLE::IS_VEHICLE_STOPPED(iVar0) && !VEHICLE::_0x404527BC03DA0E6C(iVar0))
	{
		VEHICLE::BRING_VEHICLE_TO_HALT(iVar0, fParam1, iParam2, false);
	}
	else
	{
		fVar1 = ENTITY::GET_ENTITY_SPEED(iVar0);
		if (MISC::ABSF(fVar1) <= fParam3)
		{
			func_1384(&iVar0);
			if (!bParam0)
			{
				return 1;
			}
			else if (!func_462(Global_35, -828834893))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(Global_35, 0, 0);
			}
		}
	}
	return 0;
}

bool func_996(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_997(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1[5];
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;

	if (!func_536(iParam0))
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
					if (func_513(((*Global_1835011)[4 /*74*/])->f_1, 1))
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
					if (func_974(iVar0, 9, 11))
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
					if (func_513(((*Global_1347702)[63 /*49*/])->f_15, 1) || func_676(((*Global_1347702)[63 /*49*/])->f_15))
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
					if (func_974(iVar0, 9, 12))
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
					if (!func_513(((*Global_1835011)[14 /*74*/])->f_1, 1))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar7 = 2;
					}
					else if (func_416(18, 134217728, 1))
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
					if (func_974(iVar0, 9, 11))
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
					if (func_513(((*Global_1347702)[134 /*49*/])->f_15, 1) || func_676(((*Global_1347702)[134 /*49*/])->f_15))
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
					if (func_513(((*Global_1835011)[38 /*74*/])->f_1, 1))
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
					if (func_974(iVar0, 9, 11))
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
					if (func_234(747937920, 1) && !func_513(((*Global_1347702)[1 /*49*/])->f_15, 1))
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
	if (iParam3 && ENTITY::DOES_ENTITY_EXIST(func_179(iParam0)))
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
	if (!func_547(iParam0, iVar8))
	{
		iVar8 = (Global_40.f_4942[iParam0 /*60*/])->f_3;
	}
	return iVar8;
}

int func_998(int iParam0)
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

struct<7> func_999(int iParam0, int iParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, var uParam8, bool bParam9)
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

void func_1000(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_536(iParam0))
	{
		return;
	}
	iVar0 = func_179(iParam0);
	func_1385(iVar0);
	func_540(iParam0, 60, 1);
	if (bParam1)
	{
		func_1386(iParam0);
	}
}

void func_1001(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_536(iParam0))
	{
		return;
	}
	iVar0 = func_179(iParam0);
	func_1387(iVar0);
	func_430(iParam0, 60, 1);
	if (bParam1)
	{
		func_1388(iParam0);
	}
}

void func_1002(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_536(iParam0))
	{
		return;
	}
	iVar0 = func_179(iParam0);
	func_1389(iVar0);
	if (iParam0 == 14)
	{
		func_1390(iVar0);
	}
	func_540(iParam0, 61, 1);
	if (bParam1)
	{
		func_1391(iParam0);
	}
}

void func_1003(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_536(iParam0))
	{
		return;
	}
	iVar0 = func_179(iParam0);
	func_1392(iVar0);
	func_430(iParam0, 61, 1);
	if (bParam1)
	{
		func_1393(iParam0);
	}
}

int func_1004(var uParam0)
{
	return uParam0;
}

bool func_1005(int iParam0)
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

bool func_1006(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_536(iParam0))
	{
		return false;
	}
	func_1394(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(((*Global_1360165)[iParam0 /*1157*/])->f_65[iVar0]), iVar1);
}

int func_1007(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

int func_1008(int iParam0, int iParam1)
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
			iVar0 = func_1395(296923297, iParam1);
			return func_1396(iVar0);
		case -2040275819:
			return 464906090;
		case -1114682645:
			return 744097966;
		case -1414977761:
			return 1059434053;
		case 1237718549:
			iVar0 = func_1395(1237718549, iParam1);
			return func_1396(iVar0);
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

bool func_1009(int iParam0, int iParam1)
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

int func_1010(int iParam0, int iParam1)
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

bool func_1011(int iParam0, int iParam1)
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
	if (!func_1009(iParam0, iVar0))
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

void func_1012(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

void func_1013(int iParam0, int iParam1, bool bParam2)
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
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 1 > 0 && func_1009(iParam1, 860729266))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 860729266);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 4096 > 0 && func_1009(iParam1, 879715242))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 879715242);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 128 > 0 && func_1009(iParam1, 1606325429))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1606325429);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 256 > 0 && func_1009(iParam1, 1743550585))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1743550585);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 512 > 0 && func_1009(iParam1, 1064646155))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1064646155);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 1024 > 0 && func_1009(iParam1, -536694793))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -536694793);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 2048 > 0 && func_1009(iParam1, -1304053509))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -1304053509);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & -2147483648 > 0 && func_1009(iParam1, 718939204))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 718939204);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 65536 > 0 && func_1009(iParam1, -972364774))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -972364774);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 16384 > 0 && func_1009(iParam1, -1100875244))
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
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 262144 > 0 && func_1009(iParam1, 1153596794))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1153596794);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 524288 > 0 && func_1009(iParam1, 1016389820))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1016389820);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 1048576 > 0 && func_1009(iParam1, -726966617))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -726966617);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 2097152 > 0 && func_1009(iParam1, 1365901568))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1365901568);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 32768 > 0 && func_1009(iParam1, -1658942149))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -1658942149);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 131072 > 0 && func_1009(iParam1, -1980913856))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -1980913856);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 4194304 > 0 && func_1009(iParam1, 491764525))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 491764525);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 8388608 > 0 && func_1009(iParam1, -76015264))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -76015264);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 16777216 > 0 && func_1009(iParam1, 622113465))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 622113465);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 33554432 > 0 && func_1009(iParam1, 781533162))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 781533162);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 67108864 > 0 && func_1009(iParam1, -271415321))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -271415321);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 134217728 > 0 && func_1009(iParam1, -1683207356))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -1683207356);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 268435456 > 0 && func_1009(iParam1, -254794762))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -254794762);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 536870912 > 0 && func_1009(iParam1, 609066278))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 609066278);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 1073741824 > 0 && func_1009(iParam1, -1712783565))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -1712783565);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 8192 > 0 && func_1009(iParam1, 1544915253))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1544915253);
	}
	if (bParam2)
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_57 = 1;
	}
}

void func_1014(int iParam0)
{
	func_1397(iParam0, 1);
	func_1397(iParam0, 128);
	func_1397(iParam0, 256);
	func_1397(iParam0, 512);
	func_1397(iParam0, 1024);
	func_1397(iParam0, 2048);
	func_1397(iParam0, 4096);
	func_1397(iParam0, 65536);
	func_1397(iParam0, 16384);
	func_1397(iParam0, 262144);
	func_1397(iParam0, 524288);
	func_1397(iParam0, 1048576);
	func_1397(iParam0, 2097152);
	func_1397(iParam0, 32768);
	func_1397(iParam0, 131072);
	func_1397(iParam0, 134217728);
	func_1397(iParam0, 1073741824);
}

void func_1015(int iParam0, bool bParam1)
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

void func_1016(var uParam0, var uParam1, bool bParam2)
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

bool func_1017(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_1398(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
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
							if (func_1398(iVar4) && iVar4 != bVar0)
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
	if (func_56() == -1 && !func_1399(bVar0))
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
				if (func_1399(joaat("weapon_repeater_carbine")))
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
		if (iParam0 != Global_35 && func_1398(bVar0))
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
		func_1400(bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_1401(iParam0, &bVar0, &fVar25);
		bVar0 = WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_1402(bVar0))
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

int func_1018(int iParam0, int iParam1, bool bParam2)
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

void func_1019(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_1018(iParam0, 0, 0);
	if (func_1080(iParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, iParam2, iParam6);
		if (fParam5 > 0f)
		{
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_1403(iParam0, iParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_1404(iParam0, 1);
			}
			else
			{
				func_1405(iParam0, 1);
			}
		}
		else
		{
			func_1406(iParam0, 1);
		}
		if (bParam7)
		{
			OBJECT::_0x276AAF0F1C7F2494(iParam0, 1);
		}
	}
	else if (func_1407())
	{
	}
	else if (NETWORK::NETWORK_IS_IN_SESSION())
	{
	}
}

void func_1020(int iParam0)
{
	int iVar0;

	if (!func_536(iParam0))
	{
		return;
	}
	if (!MISC::_0x716F17F8A0419F95(((*Global_1360165)[iParam0 /*1157*/])->f_1))
	{
		iVar0 = func_415(iParam0);
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

void func_1021(int iParam0)
{
	if (func_503(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_179(iParam0)))
		{
			func_556(iParam0, 67108864, 1);
			func_430(iParam0, 19, 1);
		}
	}
}

float func_1022(int iParam0)
{
	if (!func_536(iParam0))
	{
		return 0f;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_134;
}

void func_1023(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = func_179(iParam0);
	iVar1 = func_561(iParam0, 0);
	func_1302(iParam0, iVar0);
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

bool func_1024(int iParam0)
{
	if (!func_536(iParam0))
	{
		return false;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_1025(int iParam0, int iParam1, bool bParam2)
{
	if (!func_536(iParam0))
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

int func_1026(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_536(iParam0))
	{
		return 0;
	}
	iVar0 = func_138(iParam0);
	if (func_344(iVar0, 0))
	{
		if (func_344(PED::_0xB676EFDA03DADA52(iVar0, 0), 0) && !bParam4)
		{
			return 0;
		}
		if ((iParam1 || !func_504(iParam0)) || func_1024(iParam0))
		{
			if (iParam2 || !(ENTITY::IS_ENTITY_ON_SCREEN(iVar0) && func_1408(PLAYER::PLAYER_PED_ID(), iVar0, 1) < 10000f))
			{
				iVar1 = func_417(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
					}
					func_1409(iParam0);
					_NAMESPACE48::_0x7B204F88F6C3D287(func_862(iParam0, 0));
					_NAMESPACE48::_0xFCC6DB8DBE709BC8(func_862(iParam0, 0));
					func_1410(iParam0);
				}
			}
			else
			{
				if (func_416(iParam0, 32768, 1))
				{
					iVar2 = func_862(iParam0, 0);
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
		if (func_344(((*Global_1360165)[iParam0 /*1157*/])->f_124, 0))
		{
			if (func_416(iParam0, 32768, 1))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(((*Global_1360165)[iParam0 /*1157*/])->f_124))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(((*Global_1360165)[iParam0 /*1157*/])->f_124, true, true);
				}
				func_1409(iParam0);
				_NAMESPACE48::_0x7B204F88F6C3D287(func_862(iParam0, 0));
				_NAMESPACE48::_0xFCC6DB8DBE709BC8(func_862(iParam0, 0));
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(((*Global_1360165)[iParam0 /*1157*/])->f_124, true, true);
				func_1409(iParam0);
				PED::DELETE_PED(&(((*Global_1360165)[iParam0 /*1157*/])->f_124));
			}
		}
	}
	((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 = 0;
	func_1411(iParam0, 0);
	return 1;
}

void func_1027(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_1028(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_1029(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam1 = 19;
	*uParam2 = 30;
	switch (iParam0)
	{
		case 0:
			*uParam3 = 22;
			*uParam4 = 20;
			break;
		case 1:
			*uParam3 = 22;
			*uParam4 = 55;
			break;
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam3 = 23;
			*uParam4 = 30;
			break;
		case 11:
			*uParam3 = 22;
			*uParam4 = 30;
			break;
		case 10:
		case 12:
			*uParam3 = 2;
			*uParam4 = 55;
			break;
		case 13:
			*uParam3 = 22;
			*uParam4 = 0;
			break;
		case 14:
			*uParam3 = 0;
			*uParam4 = 50;
			break;
		case 15:
		case 16:
			*uParam3 = 23;
			*uParam4 = 50;
			break;
		case 17:
			*uParam3 = 6;
			*uParam4 = 0;
			break;
		case 18:
		case 19:
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		case 20:
		case 21:
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		case 22:
			*uParam3 = 22;
			*uParam4 = 0;
			break;
		case 23:
			*uParam3 = 6;
			*uParam4 = 0;
			break;
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
			*uParam3 = 22;
			*uParam4 = 30;
			break;
		case 34:
			*uParam3 = 22;
			*uParam4 = 0;
			break;
		case 35:
		case 36:
			*uParam3 = 6;
			*uParam4 = 0;
			break;
		case 37:
		case 38:
		case 39:
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		case 32:
		case 33:
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		case 2:
		case 3:
			*uParam3 = 23;
			*uParam4 = 5;
			break;
	}
}

void func_1030(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam1 = 19;
	*uParam2 = 30;
	switch (iParam0)
	{
		case 0:
			*uParam3 = 23;
			*uParam4 = 30;
			break;
		case 1:
			*uParam3 = 22;
			*uParam4 = 55;
			break;
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam3 = 3;
			*uParam4 = 40;
			break;
		case 10:
		case 12:
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		case 11:
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		case 13:
			*uParam3 = 22;
			*uParam4 = 0;
			break;
		case 14:
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		case 15:
		case 16:
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		case 17:
			*uParam3 = 6;
			*uParam4 = 0;
			break;
		case 18:
		case 19:
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		case 20:
		case 21:
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		case 22:
			*uParam3 = 22;
			*uParam4 = 0;
			break;
		case 23:
			*uParam3 = 6;
			*uParam4 = 0;
			break;
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		case 34:
			*uParam3 = 22;
			*uParam4 = 0;
			break;
		case 35:
		case 36:
			*uParam3 = 6;
			*uParam4 = 0;
			break;
		case 37:
		case 38:
		case 39:
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		case 32:
		case 33:
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		case 2:
		case 3:
			*uParam3 = 3;
			*uParam4 = 0;
			break;
	}
}

void func_1031(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam1 = 19;
	*uParam2 = 30;
	switch (iParam0)
	{
		case 0:
			*uParam3 = 22;
			*uParam4 = 20;
			break;
		case 1:
			*uParam3 = 22;
			*uParam4 = 55;
			break;
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam3 = 23;
			*uParam4 = 30;
			break;
		case 10:
		case 12:
			*uParam3 = 2;
			*uParam4 = 55;
			break;
		case 13:
			*uParam3 = 22;
			*uParam4 = 0;
			break;
		case 14:
			*uParam3 = 0;
			*uParam4 = 50;
			break;
		case 15:
		case 16:
			*uParam3 = 23;
			*uParam4 = 50;
			break;
		case 17:
			*uParam3 = 6;
			*uParam4 = 0;
			break;
		case 18:
		case 19:
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		case 20:
		case 21:
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		case 22:
			*uParam3 = 22;
			*uParam4 = 0;
			break;
		case 23:
			*uParam3 = 6;
			*uParam4 = 0;
			break;
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
			*uParam3 = 22;
			*uParam4 = 30;
			break;
		case 34:
			*uParam3 = 22;
			*uParam4 = 0;
			break;
		case 35:
		case 36:
			*uParam3 = 6;
			*uParam4 = 0;
			break;
		case 37:
		case 38:
		case 39:
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		case 32:
		case 33:
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		case 11:
			*uParam3 = 22;
			*uParam4 = 30;
			break;
		case 2:
		case 3:
			*uParam3 = 23;
			*uParam4 = 5;
			break;
	}
}

void func_1032(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam1 = 19;
	*uParam2 = 30;
	switch (iParam0)
	{
		case 0:
			*uParam3 = 22;
			*uParam4 = 0;
			break;
		case 1:
			*uParam3 = 22;
			*uParam4 = 0;
			break;
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam3 = 22;
			*uParam4 = 0;
			break;
		case 11:
			*uParam3 = 22;
			*uParam4 = 0;
			break;
		case 10:
		case 12:
			*uParam3 = 0;
			*uParam4 = 0;
			break;
		case 13:
			*uParam3 = 22;
			*uParam4 = 0;
			break;
		case 14:
			*uParam3 = 0;
			*uParam4 = 50;
			break;
		case 15:
		case 16:
			*uParam3 = 23;
			*uParam4 = 50;
			break;
		case 17:
			*uParam3 = 6;
			*uParam4 = 0;
			break;
		case 18:
		case 19:
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		case 20:
		case 21:
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		case 22:
			*uParam3 = 22;
			*uParam4 = 0;
			break;
		case 23:
			*uParam3 = 6;
			*uParam4 = 0;
			break;
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
			*uParam3 = 22;
			*uParam4 = 30;
			break;
		case 34:
			*uParam3 = 22;
			*uParam4 = 0;
			break;
		case 35:
		case 36:
			*uParam3 = 6;
			*uParam4 = 0;
			break;
		case 37:
		case 38:
		case 39:
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		case 32:
		case 33:
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		case 2:
		case 3:
			*uParam3 = 0;
			*uParam4 = 0;
			break;
	}
}

int func_1033(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = CLOCK::GET_CLOCK_HOURS();
	iVar1 = CLOCK::GET_CLOCK_MINUTES();
	if (iVar0 == iParam0)
	{
		if (iVar1 < iParam1)
		{
			return 0;
		}
	}
	if (iVar0 == iParam2)
	{
		if (iVar1 > iParam3)
		{
			return 0;
		}
	}
	if (iVar0 < iParam0)
	{
		return 0;
	}
	if (iVar0 > iParam2)
	{
		return 0;
	}
	return 1;
}

int func_1034(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = CLOCK::GET_CLOCK_HOURS();
	iVar1 = CLOCK::GET_CLOCK_MINUTES();
	if (iVar0 < iParam0 && iVar0 > iParam2)
	{
		return 0;
	}
	if (iVar0 == iParam0)
	{
		if (iVar1 < iParam1)
		{
			return 0;
		}
	}
	if (iVar0 == iParam2)
	{
		if (iVar1 > iParam3)
		{
			return 0;
		}
	}
	return 1;
}

int func_1035(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = CLOCK::GET_CLOCK_MINUTES();
	if (iVar0 > iParam3)
	{
		return 0;
	}
	if (iVar0 < iParam1)
	{
		return 0;
	}
	return 1;
}

void func_1036(int iParam0, float fParam1)
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case -1279776992:
		case -1179266405:
		case -689630872:
		case joaat("p_campfire02xb"):
			OBJECT::_0xC8E21C1677DC5E6F(iParam0, fParam1);
			break;
	}
}

char* func_1037(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_1038(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_1412(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_1039(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_1040(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_1041(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_1042(int iParam0, int iParam1)
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

void func_1043(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1413(uParam0, iParam6);
	func_1414(uParam0, iParam5);
	func_1415(uParam0, iParam4);
	func_1416(uParam0, iParam3);
	func_1417(uParam0, iParam2);
	func_1418(uParam0, iParam1);
}

bool func_1044(int iParam0, int iParam1)
{
	if (func_56() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iParam0]), iParam1);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iParam0]), iParam1);
}

int func_1045(int iParam0)
{
	if (func_56() != -1)
	{
		if (func_1047(iParam0, 4))
		{
			return 0;
		}
	}
	else if (func_1047(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

int func_1046(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_1047(iParam0, 65536) && !func_1047(iParam0, 32768))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if ((Global_40.f_7756[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_1047(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0 /*3*/] - iVar1);
			if ((Global_40.f_7756[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && func_1047(iParam0, 32768))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_1047(int iParam0, int iParam1)
{
	return ((Global_1905944->f_22[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

bool func_1048()
{
	return Global_1905944->f_5694;
}

bool func_1049(int iParam0)
{
	return func_585(iParam0, 2);
}

void func_1050(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
	}
}

void func_1051(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 || iParam1);
}

int func_1052(int iParam0)
{
	if (iParam0 == 808655744)
	{
		return 559905966;
	}
	switch (iParam0)
	{
		case joaat("a_c_horse_americanpaint_overo"):
			return 1538827865;
		case joaat("a_c_horse_americanpaint_tobiano"):
			return -1792561227;
		case 1792770814:
			return 1033678910;
		case -1963397600:
			return -1942141178;
		case -1250098797:
			return 671599957;
		case -318278790:
			return -1554935503;
		case 55096099:
			return 694610769;
		case -458397856:
			return 1941463607;
		case -444610976:
			return -887316537;
		case 746627200:
			return 1762474047;
		case 705691988:
			return -828859553;
		case joaat("a_c_horse_appaloosa_blanket"):
			return 1410237043;
		case -1554827654:
			return -2026073756;
		case 604357666:
			return 729407854;
		case -1029277326:
			return 2002245664;
		case joaat("a_c_horse_appaloosa_leopard"):
			return -1120227140;
		case joaat("a_c_horse_arabian_black"):
			return 1142681594;
		case 1496579364:
			return 1214981718;
		case -1523757120:
			return -845373950;
		case -403470324:
			return -864588185;
		case 1576849913:
			return 1482814085;
		case joaat("a_c_horse_arabian_white"):
			return -1040918754;
		case joaat("a_c_horse_ardennes_bayroan"):
			return 535545841;
		case -635239558:
			return 1686036388;
		case joaat("a_c_horse_ardennes_irongreyroan"):
			return -621245377;
		case joaat("a_c_horse_belgian_blondchestnut"):
			return 2125477381;
		case joaat("a_c_horse_belgian_mealychestnut"):
			return 1808724704;
		case 1593035738:
			return -1745871311;
		case 861505058:
			return -1366099125;
		case 687445866:
			return -1900776854;
		case 1705182311:
			return 1381855825;
		case -78273782:
			return -470894301;
		case -819697512:
			return -58297715;
		case -247265944:
			return 919533729;
		case -1516219602:
			return -1158763155;
		case -1265030920:
			return 1112812928;
		case 2024948086:
			return 753764318;
		case 1696286663:
			return 2100045093;
		case -1342159303:
			return 1097965086;
		case joaat("a_c_horse_missourifoxtrotter_silverdapplepinto"):
			return -2136667309;
		case 2030804811:
			return -376463594;
		case 1230359523:
			return -1917318030;
		case -1038436471:
			return 1631640006;
		case -1063137731:
			return -1565311117;
		case 96930969:
			return 1714576673;
		case -1180427609:
			return 210760725;
		case joaat("a_c_horse_mustang_wildbay"):
			return 2051021144;
		case 43825738:
			return 1924406350;
		case joaat("a_c_horse_nokota_blueroan"):
			return -1990143531;
		case -1261814606:
			return 1741899492;
		case 107013696:
			return -1629575335;
		case 1066034872:
			return 1096294193;
		case 36009259:
			return -1162498792;
		case -1599683008:
			return -212500005;
		case -1693870200:
			return -538557079;
		case 1072019803:
			return 171150858;
		case 1074477367:
			return 67538819;
		case -85890205:
			return -126472599;
		case 1048964673:
			return -1219957736;
		case -727455979:
			return -332060056;
		case -1667789645:
			return 1917500091;
		case -1924405794:
			return -1043453945;
		case joaat("a_c_horse_thoroughbred_dapplegrey"):
			return 1723487083;
		case -526169133:
			return 2044230644;
		case 900144280:
			return 1680713143;
		case 1133837220:
			return 344528703;
		case joaat("a_c_horse_turkoman_gold"):
			return -1674873797;
		case -1604180548:
			return 281852151;
		case joaat("a_c_donkey_01"):
			return -285185056;
		case -1028075925:
			return -1692268955;
		case 84224102:
			return 2130706226;
		case -1896838685:
			return -1754375530;
		case -420599285:
			return -71211764;
		case 478986344:
			return -1390353518;
		case 446670976:
			return 330935532;
		case joaat("a_c_horse_shire_ravenblack"):
			return -935042458;
		case 549900435:
			return -41062704;
		case -2063289686:
			return 887669186;
		case 917402668:
			return 2102774612;
		case -914712122:
			return -2011111190;
		case -598917269:
			return -535752499;
		default:
			break;
	}
	return 0;
}

bool func_1053(int iParam0)
{
	return func_1175(iParam0) == -1784221369;
}

struct<4> func_1054(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_983(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_516(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_1055(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (func_1419(iParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_1420(*uParam1, &Var0, bParam6, 0))
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
	if (!func_1421(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_516(bParam6), uParam1, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_1056(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<4> Var0;
	struct<10> Var4;
	var uVar26;
	int iVar27;
	int iVar28;

	func_1422(&iParam0);
	if (!func_983(iParam0, 0))
	{
		return 0;
	}
	if (!func_1421(0))
	{
		bParam3 = true;
	}
	if (func_1423(iParam0) && WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
		{
			Var0 = { func_1424(0) };
			Var4.f_9 = -1591664384;
			if (!func_1425(iParam0, &Var0, 1728382685, 0))
			{
				return 0;
			}
			else if (func_1426(iParam0, &Var4, 1728382685))
			{
				return 0;
			}
			if (func_1427(iParam0, 1))
			{
				if (!func_1425(iParam0, &Var0, -649335959, 0))
				{
					return 0;
				}
				else if (func_1426(iParam0, &Var4, -649335959))
				{
					return 0;
				}
			}
		}
		else if (!func_1428(iParam0, &uVar26, 0))
		{
			return 0;
		}
		return 1;
	}
	iVar27 = func_1429(iParam0, uParam1, bParam3, bParam4);
	if (iVar27 < 0)
	{
		return 0;
	}
	else if (iVar27 == 0)
	{
		return 1;
	}
	if (bParam3)
	{
		iVar28 = func_1430(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = INVENTORY::_0xE787F05DFC977BDE(func_516(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return 1;
	}
	return 0;
}

int func_1057(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_983(iParam0, 0))
	{
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return 0;
	}
	if (func_1056(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return 0;
	}
	if (!func_1421(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_516(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_1058(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = func_1431(iParam0, 1);
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
	return 1;
}

bool func_1059(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

int func_1060()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

var func_1061(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || BUILTIN::SHIFT_LEFT(iParam0 & 1023, 5)) || BUILTIN::SHIFT_LEFT(iParam1 & 16383, 15));
}

int func_1062(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	int iVar1;

	if (!func_1432(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_1060())
	{
		return -1;
	}
	uVar0 = func_1061(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_1433(iVar1, 0);
	func_1434(iVar1, 0);
	func_1435(iVar1, 0);
	func_1436(iVar1, 0);
	func_1437(iVar1, uVar0);
	if (iParam4 != 0)
	{
		func_1438(iVar1, iParam4);
	}
	return iVar1;
}

bool func_1063(int iParam0, int iParam1)
{
	return func_962((Global_1914319->f_3[iParam0 /*446*/])->f_6, iParam1);
}

int func_1064(int iParam0)
{
	int iVar0;

	iVar0 = func_864(iParam0);
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

int func_1065(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_56() != -1)
	{
		return 0;
	}
	if (!func_1439(iParam0, 0))
	{
		return 0;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam1))
	{
		return 0;
	}
	iVar0 = func_864(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	VOLUME::_0xE2BE6FFA4A13CBB0(iParam1, iVar0, iParam2);
	return 1;
}

int func_1066(int iParam0)
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

int func_1067(int iParam0)
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

void func_1068(int iParam0, var uParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(&(uParam1->f_9[iParam0 /*9*/])))
	{
		OBJECT::DELETE_OBJECT(uParam1->f_9[iParam0 /*9*/]);
	}
	MISC::CLEAR_BIT(&(uParam1->f_255), iParam0);
}

int func_1069(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1487530998;
		case 1:
			return -2107109207;
		case 2:
			return -74563350;
		case 3:
			return -74166807;
		default:
			break;
	}
	return 0;
}

int func_1070(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1942842017;
		case 2:
			return -1562525601;
		case 3:
			return -1474583373;
		case 6:
			return 1273085440;
		default:
			break;
	}
	return 0;
}

void func_1071(int iParam0, var uParam1)
{
	vector3 vVar0;

	vVar0 = { func_1440(uParam1->f_3, uParam1->f_3.f_3, (uParam1->f_9[iParam0 /*9*/])->f_2) };
	uParam1->f_9[iParam0 /*9*/] = OBJECT::CREATE_OBJECT((uParam1->f_9[iParam0 /*9*/])->f_1, vVar0, false, true, false, false, true);
	ENTITY::SET_ENTITY_ROTATION(&(uParam1->f_9[iParam0 /*9*/]), (uParam1->f_9[iParam0 /*9*/])->f_5, 2, true);
	ENTITY::SET_ENTITY_HAS_GRAVITY(&(uParam1->f_9[iParam0 /*9*/]), true);
	ENTITY::SET_ENTITY_COLLISION(&(uParam1->f_9[iParam0 /*9*/]), true, false);
	func_1441(iParam0, uParam1);
	MISC::SET_BIT(&(uParam1->f_255), iParam0);
}

struct<14> func_1072(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_1073(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	*uParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_516(bParam3), uParam0, uParam2);
	if (*uParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_1074(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_1075(int iParam0)
{
	switch (iParam0)
	{
		case 1846915545:
			if (func_1442(-1329287819, 3) == 0)
			{
				return 1;
			}
			break;
		case 1641833719:
			if (func_1442(765991018, 3) == 0)
			{
				return 1;
			}
			break;
		case -1188120304:
			if (func_1442(-837651311, 3) == 0)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_1076(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<5> Var0;
	struct<4> Var5;

	if (func_56() == 0)
	{
		return 0;
	}
	if (!func_983(iParam0, 0))
	{
		return 0;
	}
	if (iParam2 < 1)
	{
		return 0;
	}
	Var0 = { func_915(0) };
	Var0.f_4 = func_1443(iParam1);
	Var5 = { func_1054(iParam0, Var0, Var0.f_4, 0) };
	if (!func_1055(iParam0, &Var5, &Var0, iParam2, iParam3, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_1077(int iParam0)
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

bool func_1078(int iParam0)
{
	if (!func_422(iParam0))
	{
		return false;
	}
	return SCRIPTS::_DOES_THREAD_EXIST(((*Global_1895087)[iParam0 /*3*/])->f_2);
}

void func_1079(int iParam0)
{
	func_1444(func_1067(iParam0));
}

int func_1080(int iParam0)
{
	if (func_1445(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return 0;
}

int func_1081()
{
	return 1;
}

int func_1082()
{
	if (func_56() != 0)
	{
		return 1;
	}
	return 1;
}

var func_1083(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_1084(vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 51)
	{
		if (func_1446(vParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

char* func_1085(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LANDMARK_MOUNT_HAGEN";
		case 1:
			return "LANDMARK_SCRATCHING_POST";
		case 2:
			return "LANDMARK_JORGES_GAP";
		case 3:
			return "LANDMARK_MERCER_STATION";
		case 4:
			return "LANDMARK_ODDFELLOWS_REST";
		case 5:
			return "LANDMARK_RATTLESNAKE_HOLLOW";
		case 6:
			return "LANDMARK_SILENT_STEAD";
		case 7:
			return "LANDMARK_THE_HANGING_ROCK";
		case 8:
			return "LANDMARK_THE_OLD_BACCHUS_PLACE";
		case 9:
			return "LANDMARK_TWO_CROWS";
		case 10:
			return "LANDMARK_REPENTANCE";
		case 11:
			return "LANDMARK_BENEDICT_PASS";
		case 12:
			return "WATER_MANTECA_FALLS";
		case 13:
			return "SETTLEMENT_LIMPANY";
		case 14:
			return "WATER_MOUNT_SHANN";
		case 15:
			return "LANDMARK_THREE_SISTERS";
		case 16:
			return "HIDEOUT_PIKES_BASIN";
		case 17:
			return "SETTLEMENT_EL_NIDO";
		case 18:
			return "LANDMARK_BRITTLEBUSH_TRAWL";
		case 19:
			return "LANDMARK_ERIS_FIELD";
		case 20:
			return "LANDMARK_GRANITE_PASS";
		case 21:
			return "LANDMARK_VENTERS_PLACE";
		case 22:
			return "LANDMARK_PLEASANCE_HOUSE";
		case 23:
			return "HOMESTEAD_CHADWICK_FARM";
		case 24:
			return "LANDMARK_BLACK_BONE_FOREST";
		case 25:
			return "LANDMARK_CITADEL_ROCK";
		case 26:
			return "LANDMARK_CUEVA_SECA";
		case 27:
			return "LANDMARK_DEWBERRY_CREEK";
		case 28:
			return "LANDMARK_DIABLO_RIDGE";
		case 29:
			return "LANDMARK_DONNER_FALLS";
		case 31:
			return "HIDEOUT_SOLOMONS_FOLLY";
		case 32:
			return "LANDMARK_FORT_BRENNAND";
		case 33:
			return "LANDMARK_CALIBANS_SEAT";
		case 34:
			return "HIDEOUT_HORSESHOE_OVERLOOK";
		case 35:
			return "LANDMARK_MESCALERO";
		case 36:
			return "LANDMARK_RIO_DEL_LOBO_HOUSE";
		case 37:
			return "LANDMARK_RIO_DEL_LOBO_ROCK";
		case 38:
			return "LANDMARK_BROKEN_TREE";
		case 39:
			return "LANDMARK_BARDS_CROSSING";
		case 40:
			return "LANDMARK_FACE_ROCK";
		case 50:
			return "LANDMARK_NEKOTI_ROCK";
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
			return "";
	}
	return "";
}

int func_1086(int iParam0)
{
	switch (iParam0)
	{
		case 22:
		case 25:
		case 63:
			return 1;
	}
	return 0;
}

bool func_1087(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_1088(int iParam0)
{
	return func_667(iParam0, Global_1310750->f_16072 | 64);
}

void func_1089(int iParam0)
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

int func_1090()
{
	if ((Global_16 && func_148() == 3) && func_892(33) == 0)
	{
		return 1;
	}
	return 0;
}

int func_1091(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 1:
			return func_1447(iParam1, bParam2);
		case 2:
			return func_1448(iParam1, bParam2);
		case 6:
			return func_1449(iParam1, bParam2);
	}
	return func_1311();
}

void func_1092(int iParam0, int iParam1)
{
	int iVar0[18];
	int iVar19[18];
	int iVar38[18];
	int iVar57;
	var uVar58;
	bool bVar59;

	iVar0[0] = -224845272; /* GXTEntry: "Campfire Log Seat Cover" */
	iVar19[0] = -268335331;
	iVar38[0] = func_1450();
	iVar0[1] = -147867326; /* GXTEntry: "Cougar Pelt Covered Chest" */
	iVar19[1] = 1546110128;
	iVar38[1] = -855912354;
	iVar0[2] = -1262979941; /* GXTEntry: "Ox Hide Rug" */
	iVar19[2] = 324486076;
	iVar38[2] = func_1450();
	iVar0[3] = -2119627968; /* GXTEntry: "Boar Skin Table Cover" */
	iVar19[3] = -2052582076;
	iVar38[3] = -402976431;
	iVar0[4] = -837651311; /* GXTEntry: "Big Horn Ram Skull" */
	iVar19[4] = 1029525997;
	iVar38[4] = func_1450();
	iVar0[5] = -2089261255; /* GXTEntry: "Alligator Skull" */
	iVar19[5] = -1472352094;
	iVar38[5] = func_1450();
	iVar0[6] = -1145367359; /* GXTEntry: "Pronghorn Leather Table Tops" */
	iVar19[6] = -745860880;
	iVar38[6] = func_1450();
	iVar0[7] = -1145367359; /* GXTEntry: "Pronghorn Leather Table Tops" */
	iVar19[7] = 1219276914;
	iVar38[7] = func_1450();
	iVar0[8] = -1608451354; /* GXTEntry: "Boar Skin Rug" */
	iVar19[8] = -2104773585;
	iVar38[8] = func_1450();
	iVar0[9] = 2137149309;
	iVar19[9] = -302735166;
	iVar38[9] = func_1450();
	iVar0[10] = -1329287819; /* GXTEntry: "Pronghorn Skull" */
	iVar19[10] = -2077690059;
	iVar38[10] = func_1450();
	iVar0[11] = -848232571; /* GXTEntry: "Elk Antlers" */
	iVar19[11] = 1548546221;
	iVar38[11] = func_1450();
	iVar0[12] = -804860583; /* GXTEntry: "Scout Fire Ground Cover" */
	iVar19[12] = 2101101756;
	iVar38[12] = func_1450();
	iVar0[13] = -7810518; /* GXTEntry: "Hanging Bones" */
	iVar19[13] = 1560807181;
	iVar38[13] = func_1450();
	iVar0[14] = 1510372288; /* GXTEntry: "Moose Antlers" */
	iVar19[14] = 106249677;
	iVar38[14] = func_1450();
	iVar0[15] = 858182906; /* GXTEntry: "Campfire Seat Cover" */
	iVar19[15] = -723982773;
	iVar38[15] = func_1450();
	iVar0[16] = 708084994; /* GXTEntry: "Snake Skin Banjo Head" */
	iVar19[16] = 327932996;
	iVar38[16] = func_1450();
	iVar0[17] = 765991018; /* GXTEntry: "Wolf Skull" */
	iVar19[17] = -15722296;
	iVar38[17] = func_1450();
	bVar59 = false;
	if (iParam0 == 1)
	{
		iVar57 = func_1442(&(iVar0[Global_1357549->f_575]), 3);
		uVar58 = func_1451(&(iVar0[Global_1357549->f_575]));
		bVar59 = (iVar57 > 0 || uVar58);
		if (bVar59 || iParam1)
		{
			if (func_903(&(iVar19[Global_1357549->f_575])))
			{
				if (!STREAMING::_IS_IMAP_ACTIVE(&(iVar19[Global_1357549->f_575])))
				{
					func_1328(&(iVar19[Global_1357549->f_575]), 1);
					func_1452(&(iVar19[Global_1357549->f_575]));
				}
				if (func_903(&(iVar38[Global_1357549->f_575])))
				{
					if (STREAMING::_IS_IMAP_ACTIVE(&(iVar38[Global_1357549->f_575])))
					{
						STREAMING::_REMOVE_IMAP(&(iVar38[Global_1357549->f_575]));
					}
				}
			}
		}
		else
		{
			if (func_903(&(iVar19[Global_1357549->f_575])))
			{
				if (STREAMING::_IS_IMAP_ACTIVE(&(iVar19[Global_1357549->f_575])))
				{
					func_1328(&(iVar19[Global_1357549->f_575]), 0);
					STREAMING::_REMOVE_IMAP(&(iVar19[Global_1357549->f_575]));
				}
			}
			if (func_903(&(iVar38[Global_1357549->f_575])))
			{
				if (STREAMING::_IS_IMAP_ACTIVE(&(iVar38[Global_1357549->f_575])) == 0)
				{
					STREAMING::_REQUEST_IMAP(&(iVar38[Global_1357549->f_575]));
				}
			}
		}
	}
	if (iParam0 != 1 || func_32() == 2)
	{
		if (func_903(&(iVar38[Global_1357549->f_575])))
		{
			if (STREAMING::_IS_IMAP_ACTIVE(&(iVar38[Global_1357549->f_575])))
			{
				STREAMING::_REMOVE_IMAP(&(iVar38[Global_1357549->f_575]));
			}
		}
		if (func_903(&(iVar19[Global_1357549->f_575])))
		{
			if (STREAMING::_IS_IMAP_ACTIVE(&(iVar19[Global_1357549->f_575])))
			{
				func_1328(&(iVar19[Global_1357549->f_575]), 0);
				STREAMING::_REMOVE_IMAP(&(iVar19[Global_1357549->f_575]));
			}
		}
	}
}

void func_1093(int iParam0, int iParam1)
{
	int iVar0[18];
	int iVar19[18];
	int iVar38[18];

	iVar0[0] = 2137149309;
	iVar19[0] = -1999825729;
	iVar38[0] = func_1450();
	iVar0[1] = -147867326; /* GXTEntry: "Cougar Pelt Covered Chest" */
	iVar19[1] = -1774140220;
	iVar38[1] = -262271608;
	iVar0[2] = -1262979941; /* GXTEntry: "Ox Hide Rug" */
	iVar19[2] = 1601820048;
	iVar38[2] = func_1450();
	iVar0[3] = -2119627968; /* GXTEntry: "Boar Skin Table Cover" */
	iVar19[3] = 2025485344;
	iVar38[3] = 901520480;
	iVar0[4] = -837651311; /* GXTEntry: "Big Horn Ram Skull" */
	iVar19[4] = -1999465365;
	iVar38[4] = func_1450();
	iVar0[5] = -2089261255; /* GXTEntry: "Alligator Skull" */
	iVar19[5] = 853723410;
	iVar38[5] = func_1450();
	iVar0[6] = -1145367359; /* GXTEntry: "Pronghorn Leather Table Tops" */
	iVar19[6] = 1169958167;
	iVar38[6] = func_1450();
	iVar0[7] = -1145367359; /* GXTEntry: "Pronghorn Leather Table Tops" */
	iVar19[7] = -792944828;
	iVar38[7] = func_1450();
	iVar0[8] = -1608451354; /* GXTEntry: "Boar Skin Rug" */
	iVar19[8] = -2001921071;
	iVar38[8] = func_1450();
	iVar0[9] = -7810518; /* GXTEntry: "Hanging Bones" */
	iVar19[9] = 157361403;
	iVar38[9] = func_1450();
	iVar0[10] = -1329287819; /* GXTEntry: "Pronghorn Skull" */
	iVar19[10] = -492479795;
	iVar38[10] = func_1450();
	iVar0[11] = -848232571; /* GXTEntry: "Elk Antlers" */
	iVar19[11] = -1284301817;
	iVar38[11] = func_1450();
	iVar0[12] = -804860583; /* GXTEntry: "Scout Fire Ground Cover" */
	iVar19[12] = -1045282549;
	iVar38[12] = func_1450();
	iVar0[13] = 1510372288; /* GXTEntry: "Moose Antlers" */
	iVar19[13] = -989202374;
	iVar38[13] = func_1450();
	iVar0[14] = -224845272; /* GXTEntry: "Campfire Log Seat Cover" */
	iVar19[14] = 1538837441;
	iVar38[14] = func_1450();
	iVar0[15] = 858182906; /* GXTEntry: "Campfire Seat Cover" */
	iVar19[15] = 530288130;
	iVar38[15] = func_1450();
	iVar0[16] = 708084994; /* GXTEntry: "Snake Skin Banjo Head" */
	iVar19[16] = -1887167048;
	iVar38[16] = func_1450();
	iVar0[17] = 765991018; /* GXTEntry: "Wolf Skull" */
	iVar19[17] = -347518940;
	iVar38[17] = func_1450();
	if (iParam0 == 2)
	{
		if ((func_1442(&(iVar0[Global_1357549->f_575]), 3) > 0 || func_1451(&(iVar0[Global_1357549->f_575]))) || iParam1)
		{
			if (func_903(&(iVar19[Global_1357549->f_575])))
			{
				if (!STREAMING::_IS_IMAP_ACTIVE(&(iVar19[Global_1357549->f_575])))
				{
					func_1328(&(iVar19[Global_1357549->f_575]), 1);
					func_1452(&(iVar19[Global_1357549->f_575]));
				}
			}
			if (func_903(&(iVar38[Global_1357549->f_575])))
			{
				if (STREAMING::_IS_IMAP_ACTIVE(&(iVar38[Global_1357549->f_575])))
				{
					STREAMING::_REMOVE_IMAP(&(iVar38[Global_1357549->f_575]));
				}
			}
		}
		else
		{
			if (func_903(&(iVar19[Global_1357549->f_575])))
			{
				if (STREAMING::_IS_IMAP_ACTIVE(&(iVar19[Global_1357549->f_575])))
				{
					func_1328(&(iVar19[Global_1357549->f_575]), 0);
					STREAMING::_REMOVE_IMAP(&(iVar19[Global_1357549->f_575]));
				}
			}
			if (func_903(&(iVar38[Global_1357549->f_575])))
			{
				if (STREAMING::_IS_IMAP_ACTIVE(&(iVar38[Global_1357549->f_575])) == 0)
				{
					STREAMING::_REQUEST_IMAP(&(iVar38[Global_1357549->f_575]));
				}
			}
		}
	}
	if (iParam0 != 2 || func_32() != 1)
	{
		if (func_903(&(iVar38[Global_1357549->f_575])))
		{
			if (STREAMING::_IS_IMAP_ACTIVE(&(iVar38[Global_1357549->f_575])))
			{
				STREAMING::_REMOVE_IMAP(&(iVar38[Global_1357549->f_575]));
			}
		}
		if (func_903(&(iVar19[Global_1357549->f_575])))
		{
			if (STREAMING::_IS_IMAP_ACTIVE(&(iVar19[Global_1357549->f_575])))
			{
				func_1328(&(iVar19[Global_1357549->f_575]), 0);
				STREAMING::_REMOVE_IMAP(&(iVar19[Global_1357549->f_575]));
			}
		}
	}
}

void func_1094(int iParam0, int iParam1)
{
	int iVar0[18];
	int iVar19[18];
	int iVar38[6];
	int iVar45[6];
	int iVar52;
	int iVar53;
	var uVar54;
	bool bVar55;

	iVar0[0] = 2137149309;
	iVar19[0] = -134624703;
	iVar0[1] = -147867326; /* GXTEntry: "Cougar Pelt Covered Chest" */
	iVar19[1] = func_1311();
	iVar0[2] = -1262979941; /* GXTEntry: "Ox Hide Rug" */
	iVar19[2] = func_1311();
	iVar0[3] = -2119627968; /* GXTEntry: "Boar Skin Table Cover" */
	iVar19[3] = func_1311();
	iVar0[4] = -837651311; /* GXTEntry: "Big Horn Ram Skull" */
	iVar19[4] = func_1311();
	iVar0[5] = -2089261255; /* GXTEntry: "Alligator Skull" */
	iVar19[5] = func_1311();
	iVar0[6] = -1145367359; /* GXTEntry: "Pronghorn Leather Table Tops" */
	iVar19[6] = -1535722316;
	iVar0[7] = -1145367359; /* GXTEntry: "Pronghorn Leather Table Tops" */
	iVar19[7] = 1547994518;
	iVar0[8] = -1608451354; /* GXTEntry: "Boar Skin Rug" */
	iVar19[8] = func_1311();
	iVar0[9] = -1329287819; /* GXTEntry: "Pronghorn Skull" */
	iVar19[9] = -910918420;
	iVar0[10] = -848232571; /* GXTEntry: "Elk Antlers" */
	iVar19[10] = 495480888;
	iVar0[11] = -804860583; /* GXTEntry: "Scout Fire Ground Cover" */
	iVar19[11] = 2004706822;
	iVar0[12] = 1510372288; /* GXTEntry: "Moose Antlers" */
	iVar19[12] = 884576413;
	iVar0[13] = -7810518; /* GXTEntry: "Hanging Bones" */
	iVar19[13] = 778703691;
	iVar0[14] = -224845272; /* GXTEntry: "Campfire Log Seat Cover" */
	iVar19[14] = -421730990;
	iVar0[15] = 858182906; /* GXTEntry: "Campfire Seat Cover" */
	iVar19[15] = 514406510;
	iVar0[16] = 765991018; /* GXTEntry: "Wolf Skull" */
	iVar19[16] = -327708229;
	iVar0[17] = 708084994; /* GXTEntry: "Snake Skin Banjo Head" */
	iVar19[17] = 1048845581;
	if (iParam0 == 3 && ((func_984(&(iVar0[Global_1357549->f_575]), 1, 0) || func_1451(&(iVar0[Global_1357549->f_575]))) || iParam1))
	{
		if (func_903(&(iVar19[Global_1357549->f_575])))
		{
			if (!STREAMING::_IS_IMAP_ACTIVE(&(iVar19[Global_1357549->f_575])))
			{
				func_1328(&(iVar19[Global_1357549->f_575]), 1);
				func_1452(&(iVar19[Global_1357549->f_575]));
			}
		}
	}
	else if (func_903(&(iVar19[Global_1357549->f_575])))
	{
		if (STREAMING::_IS_IMAP_ACTIVE(&(iVar19[Global_1357549->f_575])))
		{
			func_1328(&(iVar19[Global_1357549->f_575]), 0);
			STREAMING::_REMOVE_IMAP(&(iVar19[Global_1357549->f_575]));
		}
	}
	iVar38[0] = -1608451354; /* GXTEntry: "Boar Skin Rug" */
	iVar45[0] = 11;
	iVar38[1] = -147867326; /* GXTEntry: "Cougar Pelt Covered Chest" */
	iVar45[1] = 12;
	iVar38[2] = -1262979941; /* GXTEntry: "Ox Hide Rug" */
	iVar45[2] = 13;
	iVar38[3] = -837651311; /* GXTEntry: "Big Horn Ram Skull" */
	iVar45[3] = 14;
	iVar38[4] = -2119627968; /* GXTEntry: "Boar Skin Table Cover" */
	iVar45[4] = 16;
	iVar38[5] = -2089261255; /* GXTEntry: "Alligator Skull" */
	iVar45[5] = 15;
	bVar55 = false;
	iVar52 = 0;
	while (iVar52 < 6)
	{
		if (iParam0 == 3)
		{
			iVar53 = func_1442(&(iVar38[iVar52]), 3);
			uVar54 = func_1451(&(iVar38[iVar52]));
			bVar55 = (iVar53 > 0 || uVar54);
		}
		if (bVar55 || iParam1)
		{
			if (func_1453(&(iVar45[iVar52])) == 0)
			{
				func_688(&(iVar45[iVar52]));
			}
		}
		else if (func_1453(&(iVar45[iVar52])))
		{
			func_689(&(iVar45[iVar52]));
		}
		iVar52++;
	}
}

void func_1095(int iParam0, int iParam1)
{
	int iVar0[18];
	int iVar19[18];
	int iVar38[18];
	int iVar57;
	var uVar58;
	bool bVar59;

	iVar0[0] = 2137149309;
	iVar19[0] = 1104800593;
	iVar38[0] = func_1450();
	iVar0[1] = -1145367359; /* GXTEntry: "Pronghorn Leather Table Tops" */
	iVar19[1] = 968084866;
	iVar38[1] = func_1450();
	iVar0[2] = -1145367359; /* GXTEntry: "Pronghorn Leather Table Tops" */
	iVar19[2] = -696422730;
	iVar38[2] = func_1450();
	iVar0[3] = -1329287819; /* GXTEntry: "Pronghorn Skull" */
	iVar19[3] = 1423158124;
	iVar38[3] = func_1450();
	iVar0[4] = -1608451354; /* GXTEntry: "Boar Skin Rug" */
	iVar19[4] = -1063259251;
	iVar38[4] = func_1450();
	iVar0[5] = -147867326; /* GXTEntry: "Cougar Pelt Covered Chest" */
	iVar19[5] = -317096325;
	iVar38[5] = 1025787994;
	iVar0[6] = -1262979941; /* GXTEntry: "Ox Hide Rug" */
	iVar19[6] = -1255331540;
	iVar38[6] = func_1450();
	iVar0[7] = -2119627968; /* GXTEntry: "Boar Skin Table Cover" */
	iVar19[7] = -1063926197;
	iVar38[7] = 629519239;
	iVar0[8] = -837651311; /* GXTEntry: "Big Horn Ram Skull" */
	iVar19[8] = 360408116;
	iVar38[8] = func_1450();
	iVar0[9] = -2089261255; /* GXTEntry: "Alligator Skull" */
	iVar19[9] = -408234235;
	iVar38[9] = func_1450();
	iVar0[10] = -848232571; /* GXTEntry: "Elk Antlers" */
	iVar19[10] = -1016007592;
	iVar38[10] = func_1450();
	iVar0[11] = -804860583; /* GXTEntry: "Scout Fire Ground Cover" */
	iVar19[11] = -763678874;
	iVar38[11] = func_1450();
	iVar0[12] = 1510372288; /* GXTEntry: "Moose Antlers" */
	iVar19[12] = -1361342903;
	iVar38[12] = func_1450();
	iVar0[13] = -7810518; /* GXTEntry: "Hanging Bones" */
	iVar19[13] = -483001024;
	iVar38[13] = func_1450();
	iVar0[14] = -224845272; /* GXTEntry: "Campfire Log Seat Cover" */
	iVar19[14] = 255767990;
	iVar38[14] = func_1450();
	iVar0[15] = 858182906; /* GXTEntry: "Campfire Seat Cover" */
	iVar19[15] = -2048221620;
	iVar38[15] = func_1450();
	iVar0[16] = 765991018; /* GXTEntry: "Wolf Skull" */
	iVar19[16] = 339295570;
	iVar38[16] = func_1450();
	iVar0[17] = 708084994; /* GXTEntry: "Snake Skin Banjo Head" */
	iVar19[17] = 668976634;
	iVar38[17] = func_1450();
	bVar59 = false;
	if (iParam0 == 6)
	{
		iVar57 = func_1442(&(iVar0[Global_1357549->f_575]), 3);
		uVar58 = func_1451(&(iVar0[Global_1357549->f_575]));
		bVar59 = (iVar57 > 0 || uVar58);
		if (bVar59 || iParam1)
		{
			if (func_903(&(iVar19[Global_1357549->f_575])))
			{
				if (!STREAMING::_IS_IMAP_ACTIVE(&(iVar19[Global_1357549->f_575])))
				{
					func_1328(&(iVar19[Global_1357549->f_575]), 1);
					func_1452(&(iVar19[Global_1357549->f_575]));
				}
			}
			if (func_903(&(iVar38[Global_1357549->f_575])))
			{
				if (STREAMING::_IS_IMAP_ACTIVE(&(iVar38[Global_1357549->f_575])))
				{
					STREAMING::_REMOVE_IMAP(&(iVar38[Global_1357549->f_575]));
				}
			}
		}
		else
		{
			if (func_903(&(iVar19[Global_1357549->f_575])))
			{
				if (STREAMING::_IS_IMAP_ACTIVE(&(iVar19[Global_1357549->f_575])))
				{
					func_1328(&(iVar19[Global_1357549->f_575]), 0);
					STREAMING::_REMOVE_IMAP(&(iVar19[Global_1357549->f_575]));
				}
			}
			if (func_903(&(iVar38[Global_1357549->f_575])))
			{
				if (STREAMING::_IS_IMAP_ACTIVE(&(iVar38[Global_1357549->f_575])) == 0)
				{
					STREAMING::_REQUEST_IMAP(&(iVar38[Global_1357549->f_575]));
				}
			}
		}
	}
	if (iParam0 != 6 || func_32() != 1)
	{
		if (func_903(&(iVar38[Global_1357549->f_575])))
		{
			if (STREAMING::_IS_IMAP_ACTIVE(&(iVar38[Global_1357549->f_575])))
			{
				STREAMING::_REMOVE_IMAP(&(iVar38[Global_1357549->f_575]));
			}
		}
		if (func_903(&(iVar19[Global_1357549->f_575])))
		{
			if (STREAMING::_IS_IMAP_ACTIVE(&(iVar19[Global_1357549->f_575])))
			{
				func_1328(&(iVar19[Global_1357549->f_575]), 0);
				STREAMING::_REMOVE_IMAP(&(iVar19[Global_1357549->f_575]));
			}
		}
	}
}

void func_1096(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar86;
	int iVar87;

	Var0 = 17;
	Var0.f_1 = 4;
	Var0.f_1.f_5 = 4;
	Var0.f_1.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	(*Var0[15 /*5*/])[0] = func_1450();
	(*Var0[15 /*5*/])[1] = func_1450();
	(*Var0[15 /*5*/])[2] = 1079303588;
	(*Var0[15 /*5*/])[3] = 1079303588;
	(*Var0[10 /*5*/])[0] = -937893311;
	(*Var0[10 /*5*/])[1] = -937893311;
	(*Var0[10 /*5*/])[2] = -937893311;
	(*Var0[10 /*5*/])[3] = 394987827;
	(*Var0[11 /*5*/])[0] = func_1450();
	(*Var0[11 /*5*/])[1] = func_1450();
	(*Var0[11 /*5*/])[2] = func_1450();
	(*Var0[11 /*5*/])[3] = func_1450();
	(*Var0[12 /*5*/])[0] = func_1450();
	(*Var0[12 /*5*/])[1] = func_1450();
	(*Var0[12 /*5*/])[2] = func_1450();
	(*Var0[12 /*5*/])[3] = func_1450();
	(*Var0[13 /*5*/])[0] = func_1450();
	(*Var0[13 /*5*/])[1] = func_1450();
	(*Var0[13 /*5*/])[2] = func_1450();
	(*Var0[13 /*5*/])[3] = func_1450();
	(*Var0[9 /*5*/])[0] = -1365193577;
	(*Var0[9 /*5*/])[1] = -1166561064;
	(*Var0[9 /*5*/])[2] = -1166561064;
	(*Var0[9 /*5*/])[3] = -1166561064;
	(*Var0[8 /*5*/])[0] = -1620486708;
	(*Var0[8 /*5*/])[1] = -1620486708;
	(*Var0[8 /*5*/])[2] = -1620486708;
	(*Var0[8 /*5*/])[3] = 163126540;
	(*Var0[7 /*5*/])[0] = 1808508475;
	(*Var0[7 /*5*/])[1] = 1808508475;
	(*Var0[7 /*5*/])[2] = 1808508475;
	(*Var0[7 /*5*/])[3] = 2015311123;
	(*Var0[6 /*5*/])[0] = -1576393943;
	(*Var0[6 /*5*/])[1] = -1576393943;
	(*Var0[6 /*5*/])[2] = -1576393943;
	(*Var0[6 /*5*/])[3] = -1920340119;
	(*Var0[5 /*5*/])[0] = -1563072795;
	(*Var0[5 /*5*/])[1] = -1563072795;
	(*Var0[5 /*5*/])[2] = 607574432;
	(*Var0[5 /*5*/])[3] = 607574432;
	(*Var0[4 /*5*/])[0] = -1987982797;
	(*Var0[4 /*5*/])[1] = -1987982797;
	(*Var0[4 /*5*/])[2] = -1987982797;
	(*Var0[4 /*5*/])[3] = -1933895237;
	(*Var0[3 /*5*/])[0] = -182995231;
	(*Var0[3 /*5*/])[1] = -182995231;
	(*Var0[3 /*5*/])[2] = 1267297807;
	(*Var0[3 /*5*/])[3] = 1267297807;
	(*Var0[0 /*5*/])[0] = func_1450();
	(*Var0[0 /*5*/])[1] = -1150137955;
	(*Var0[0 /*5*/])[2] = -1150137955;
	(*Var0[0 /*5*/])[3] = -1150137955;
	(*Var0[1 /*5*/])[0] = func_1450();
	(*Var0[1 /*5*/])[1] = func_1450();
	(*Var0[1 /*5*/])[2] = func_1450();
	(*Var0[1 /*5*/])[3] = func_1450();
	(*Var0[2 /*5*/])[0] = func_1450();
	(*Var0[2 /*5*/])[1] = func_1450();
	(*Var0[2 /*5*/])[2] = func_1450();
	(*Var0[2 /*5*/])[3] = func_1450();
	iVar87 = 0;
	while (iVar87 < 17)
	{
		iVar86 = 0;
		while (iVar86 < 4)
		{
			if (Var0[iVar87 /*5*/][iVar86] != func_1450())
			{
				if ((iVar86 + 1 == func_384(iVar87, 1) && iParam0 == 1) && iParam2)
				{
					if (!STREAMING::_IS_IMAP_ACTIVE(Var0[iVar87 /*5*/][iVar86]))
					{
						STREAMING::_REQUEST_IMAP(Var0[iVar87 /*5*/][iVar86]);
						func_1454(Var0[iVar87 /*5*/][iVar86], 1, iParam1);
					}
				}
				else if ((Var0[iVar87 /*5*/][(func_384(iVar87, 1) - 1)] != Var0[iVar87 /*5*/][iVar86] || iParam0 != 1) || iParam2 == 0)
				{
					if (STREAMING::_IS_IMAP_ACTIVE(Var0[iVar87 /*5*/][iVar86]))
					{
						STREAMING::_REMOVE_IMAP(Var0[iVar87 /*5*/][iVar86]);
						func_1454(Var0[iVar87 /*5*/][iVar86], 0, iParam1);
					}
				}
			}
			iVar86++;
		}
		iVar87++;
	}
}

void func_1097(int iParam0, float fParam1, int iParam2)
{
	int iVar0;
	struct<16> Var1;
	int iVar50;
	int iVar51;
	int iVar52;

	if (fParam1 < 30f)
	{
		iVar0 = 0;
	}
	else if (fParam1 < 75f)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 2;
	}
	Var1 = 3;
	Var1.f_1 = 3;
	Var1.f_1.f_1 = 4;
	Var1.f_1.f_1.f_5 = 4;
	Var1.f_1.f_1.f_5.f_5 = 4;
	Var1.f_1.f_16 = 3;
	Var1.f_1.f_16.f_1 = 4;
	Var1.f_1.f_16.f_1.f_5 = 4;
	Var1.f_1.f_16.f_1.f_5.f_5 = 4;
	Var1.f_1.f_16.f_16 = 3;
	Var1.f_1.f_16.f_16.f_1 = 4;
	Var1.f_1.f_16.f_16.f_1.f_5 = 4;
	Var1.f_1.f_16.f_16.f_1.f_5.f_5 = 4;
	(*(*Var1[0 /*16*/])[0 /*5*/])[0] = func_1450();
	(*(*Var1[1 /*16*/])[0 /*5*/])[0] = func_1450();
	(*(*Var1[2 /*16*/])[0 /*5*/])[0] = func_1450();
	(*(*Var1[0 /*16*/])[0 /*5*/])[1] = -710911638;
	(*(*Var1[1 /*16*/])[0 /*5*/])[1] = -710911638;
	(*(*Var1[2 /*16*/])[0 /*5*/])[1] = -710911638;
	(*(*Var1[0 /*16*/])[0 /*5*/])[2] = -942555699;
	(*(*Var1[1 /*16*/])[0 /*5*/])[2] = -942555699;
	(*(*Var1[2 /*16*/])[0 /*5*/])[2] = -942555699;
	(*(*Var1[0 /*16*/])[0 /*5*/])[3] = -760097927;
	(*(*Var1[1 /*16*/])[0 /*5*/])[3] = -760097927;
	(*(*Var1[2 /*16*/])[0 /*5*/])[3] = -760097927;
	(*(*Var1[0 /*16*/])[1 /*5*/])[0] = func_1450();
	(*(*Var1[1 /*16*/])[1 /*5*/])[0] = func_1450();
	(*(*Var1[2 /*16*/])[1 /*5*/])[0] = func_1450();
	(*(*Var1[0 /*16*/])[1 /*5*/])[1] = 2047954825;
	(*(*Var1[1 /*16*/])[1 /*5*/])[1] = 2047954825;
	(*(*Var1[2 /*16*/])[1 /*5*/])[1] = 2047954825;
	(*(*Var1[0 /*16*/])[1 /*5*/])[2] = -2085723453;
	(*(*Var1[1 /*16*/])[1 /*5*/])[2] = -2085723453;
	(*(*Var1[2 /*16*/])[1 /*5*/])[2] = -2085723453;
	(*(*Var1[0 /*16*/])[1 /*5*/])[3] = 1434945142;
	(*(*Var1[1 /*16*/])[1 /*5*/])[3] = 1434945142;
	(*(*Var1[2 /*16*/])[1 /*5*/])[3] = 1434945142;
	(*(*Var1[0 /*16*/])[2 /*5*/])[0] = 1924209179;
	(*(*Var1[1 /*16*/])[2 /*5*/])[0] = 1924209179;
	(*(*Var1[2 /*16*/])[2 /*5*/])[0] = 1924209179;
	(*(*Var1[0 /*16*/])[2 /*5*/])[1] = -2084193212;
	(*(*Var1[1 /*16*/])[2 /*5*/])[1] = -2084193212;
	(*(*Var1[2 /*16*/])[2 /*5*/])[1] = -2084193212;
	(*(*Var1[0 /*16*/])[2 /*5*/])[2] = -838184752;
	(*(*Var1[1 /*16*/])[2 /*5*/])[2] = -838184752;
	(*(*Var1[2 /*16*/])[2 /*5*/])[2] = -838184752;
	(*(*Var1[0 /*16*/])[2 /*5*/])[3] = -1433138716;
	(*(*Var1[1 /*16*/])[2 /*5*/])[3] = -1433138716;
	(*(*Var1[2 /*16*/])[2 /*5*/])[3] = -1433138716;
	iVar52 = 0;
	while (iVar52 < 3)
	{
		iVar51 = 0;
		while (iVar51 < 3)
		{
			iVar50 = 0;
			while (iVar50 < 4)
			{
				if (*Var1[iVar52 /*16*/])[iVar51 /*5*/][iVar50] != func_1450()
				{
					if (((iVar52 == iVar0 && iVar50 + 1 == func_1455(iVar51)) && iParam0 == 1) && iParam2)
					{
						if (!STREAMING::_IS_IMAP_ACTIVE((*Var1[iVar52 /*16*/])[iVar51 /*5*/][iVar50]))
						{
							STREAMING::_REQUEST_IMAP((*Var1[iVar52 /*16*/])[iVar51 /*5*/][iVar50]);
						}
					}
					else if (((*Var1[iVar0 /*16*/])[iVar51 /*5*/][(func_1455(iVar51) - 1)] != (*Var1[iVar52 /*16*/])[iVar51 /*5*/][iVar50] || iParam0 != 1) || iParam2 == 0)
					{
						if (STREAMING::_IS_IMAP_ACTIVE((*Var1[iVar52 /*16*/])[iVar51 /*5*/][iVar50]))
						{
							STREAMING::_REMOVE_IMAP((*Var1[iVar52 /*16*/])[iVar51 /*5*/][iVar50]);
						}
					}
				}
				iVar50++;
			}
			iVar51++;
		}
		iVar52++;
	}
}

void func_1098(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<5> Var0;
	int iVar86;
	int iVar87;

	Var0 = 17;
	Var0.f_1 = 4;
	Var0.f_1.f_5 = 4;
	Var0.f_1.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	(*Var0[15 /*5*/])[0] = func_1450();
	(*Var0[15 /*5*/])[1] = func_1450();
	(*Var0[15 /*5*/])[2] = -1147256587;
	(*Var0[15 /*5*/])[3] = -1147256587;
	(*Var0[10 /*5*/])[0] = -1247551347;
	(*Var0[10 /*5*/])[1] = -1247551347;
	(*Var0[10 /*5*/])[2] = -1247551347;
	(*Var0[10 /*5*/])[3] = -1010466481;
	(*Var0[11 /*5*/])[0] = func_1450();
	(*Var0[11 /*5*/])[1] = func_1450();
	(*Var0[11 /*5*/])[2] = func_1450();
	(*Var0[11 /*5*/])[3] = func_1450();
	(*Var0[12 /*5*/])[0] = func_1450();
	(*Var0[12 /*5*/])[1] = func_1450();
	(*Var0[12 /*5*/])[2] = func_1450();
	(*Var0[12 /*5*/])[3] = func_1450();
	(*Var0[13 /*5*/])[0] = func_1450();
	(*Var0[13 /*5*/])[1] = func_1450();
	(*Var0[13 /*5*/])[2] = func_1450();
	(*Var0[13 /*5*/])[3] = func_1450();
	(*Var0[9 /*5*/])[0] = -160392273;
	(*Var0[9 /*5*/])[1] = 1049842342;
	(*Var0[9 /*5*/])[2] = 1049842342;
	(*Var0[9 /*5*/])[3] = 1049842342;
	(*Var0[8 /*5*/])[0] = 1674800958;
	(*Var0[8 /*5*/])[1] = 1674800958;
	(*Var0[8 /*5*/])[2] = 1674800958;
	(*Var0[8 /*5*/])[3] = 2728487;
	(*Var0[7 /*5*/])[0] = 1636281938;
	(*Var0[7 /*5*/])[1] = 1636281938;
	(*Var0[7 /*5*/])[2] = 1636281938;
	(*Var0[7 /*5*/])[3] = 1084869405;
	(*Var0[6 /*5*/])[0] = -1451784475;
	(*Var0[6 /*5*/])[1] = -1451784475;
	(*Var0[6 /*5*/])[2] = -1451784475;
	(*Var0[6 /*5*/])[3] = 1128417383;
	(*Var0[5 /*5*/])[0] = -2016771661;
	(*Var0[5 /*5*/])[1] = -2016771661;
	(*Var0[5 /*5*/])[2] = 202127432;
	(*Var0[5 /*5*/])[3] = 202127432;
	(*Var0[4 /*5*/])[0] = -546137515;
	(*Var0[4 /*5*/])[1] = -546137515;
	(*Var0[4 /*5*/])[2] = -546137515;
	(*Var0[4 /*5*/])[3] = 1679038623;
	if (bParam3)
	{
		func_1456(1);
	}
	else
	{
		func_1456(0);
	}
	(*Var0[3 /*5*/])[0] = 1742990618;
	(*Var0[3 /*5*/])[1] = 1742990618;
	(*Var0[3 /*5*/])[2] = -751959361;
	(*Var0[3 /*5*/])[3] = -751959361;
	(*Var0[0 /*5*/])[0] = func_1450();
	(*Var0[0 /*5*/])[1] = func_1450();
	(*Var0[0 /*5*/])[2] = -2000080725;
	(*Var0[0 /*5*/])[3] = -2000080725;
	(*Var0[1 /*5*/])[0] = 2123887232;
	(*Var0[1 /*5*/])[1] = 2123887232;
	(*Var0[1 /*5*/])[2] = 2123887232;
	(*Var0[1 /*5*/])[3] = 2123887232;
	(*Var0[2 /*5*/])[0] = 102652153;
	(*Var0[2 /*5*/])[1] = 102652153;
	(*Var0[2 /*5*/])[2] = 102652153;
	(*Var0[2 /*5*/])[3] = 102652153;
	iVar87 = 0;
	while (iVar87 < 17)
	{
		iVar86 = 0;
		while (iVar86 < 4)
		{
			if (Var0[iVar87 /*5*/][iVar86] != func_1450())
			{
				if ((iVar86 + 1 == func_384(iVar87, 1) && iParam0 == 2) && iParam2)
				{
					if (!STREAMING::_IS_IMAP_ACTIVE(Var0[iVar87 /*5*/][iVar86]))
					{
						STREAMING::_REQUEST_IMAP(Var0[iVar87 /*5*/][iVar86]);
						func_1454(Var0[iVar87 /*5*/][iVar86], 1, iParam1);
					}
				}
				else if ((Var0[iVar87 /*5*/][(func_384(iVar87, 1) - 1)] != Var0[iVar87 /*5*/][iVar86] || iParam0 != 2) || iParam2 == 0)
				{
					if (STREAMING::_IS_IMAP_ACTIVE(Var0[iVar87 /*5*/][iVar86]))
					{
						STREAMING::_REMOVE_IMAP(Var0[iVar87 /*5*/][iVar86]);
						func_1454(Var0[iVar87 /*5*/][iVar86], 0, iParam1);
					}
				}
			}
			iVar86++;
		}
		iVar87++;
	}
}

void func_1099(int iParam0, float fParam1, int iParam2, bool bParam3)
{
	int iVar0;
	struct<16> Var1;
	int iVar50;
	int iVar51;
	int iVar52;

	if (fParam1 < 30f)
	{
		iVar0 = 0;
	}
	else if (fParam1 < 75f)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 2;
	}
	Var1 = 3;
	Var1.f_1 = 3;
	Var1.f_1.f_1 = 4;
	Var1.f_1.f_1.f_5 = 4;
	Var1.f_1.f_1.f_5.f_5 = 4;
	Var1.f_1.f_16 = 3;
	Var1.f_1.f_16.f_1 = 4;
	Var1.f_1.f_16.f_1.f_5 = 4;
	Var1.f_1.f_16.f_1.f_5.f_5 = 4;
	Var1.f_1.f_16.f_16 = 3;
	Var1.f_1.f_16.f_16.f_1 = 4;
	Var1.f_1.f_16.f_16.f_1.f_5 = 4;
	Var1.f_1.f_16.f_16.f_1.f_5.f_5 = 4;
	(*(*Var1[0 /*16*/])[0 /*5*/])[0] = func_1450();
	(*(*Var1[1 /*16*/])[0 /*5*/])[0] = func_1450();
	(*(*Var1[2 /*16*/])[0 /*5*/])[0] = func_1450();
	(*(*Var1[0 /*16*/])[0 /*5*/])[1] = 626928579;
	(*(*Var1[1 /*16*/])[0 /*5*/])[1] = 626928579;
	(*(*Var1[2 /*16*/])[0 /*5*/])[1] = 626928579;
	(*(*Var1[0 /*16*/])[0 /*5*/])[2] = 313722477;
	(*(*Var1[1 /*16*/])[0 /*5*/])[2] = 313722477;
	(*(*Var1[2 /*16*/])[0 /*5*/])[2] = 313722477;
	(*(*Var1[0 /*16*/])[0 /*5*/])[3] = 976082270;
	(*(*Var1[1 /*16*/])[0 /*5*/])[3] = 976082270;
	(*(*Var1[2 /*16*/])[0 /*5*/])[3] = 976082270;
	if (bParam3)
	{
		(*(*Var1[0 /*16*/])[1 /*5*/])[0] = func_1450();
		(*(*Var1[1 /*16*/])[1 /*5*/])[0] = func_1450();
		(*(*Var1[2 /*16*/])[1 /*5*/])[0] = func_1450();
		(*(*Var1[0 /*16*/])[1 /*5*/])[1] = -1370620659;
		(*(*Var1[1 /*16*/])[1 /*5*/])[1] = -1370620659;
		(*(*Var1[2 /*16*/])[1 /*5*/])[1] = -1370620659;
		(*(*Var1[0 /*16*/])[1 /*5*/])[2] = -624219879;
		(*(*Var1[1 /*16*/])[1 /*5*/])[2] = -624219879;
		(*(*Var1[2 /*16*/])[1 /*5*/])[2] = -624219879;
		(*(*Var1[0 /*16*/])[1 /*5*/])[3] = 715730031;
		(*(*Var1[1 /*16*/])[1 /*5*/])[3] = 715730031;
		(*(*Var1[2 /*16*/])[1 /*5*/])[3] = 715730031;
		func_1457(1);
	}
	else
	{
		(*(*Var1[0 /*16*/])[1 /*5*/])[0] = func_1450();
		(*(*Var1[1 /*16*/])[1 /*5*/])[0] = func_1450();
		(*(*Var1[2 /*16*/])[1 /*5*/])[0] = func_1450();
		(*(*Var1[0 /*16*/])[1 /*5*/])[1] = 5585502;
		(*(*Var1[1 /*16*/])[1 /*5*/])[1] = 5585502;
		(*(*Var1[2 /*16*/])[1 /*5*/])[1] = 5585502;
		(*(*Var1[0 /*16*/])[1 /*5*/])[2] = -1362716862;
		(*(*Var1[1 /*16*/])[1 /*5*/])[2] = -1362716862;
		(*(*Var1[2 /*16*/])[1 /*5*/])[2] = -1362716862;
		(*(*Var1[0 /*16*/])[1 /*5*/])[3] = 482931525;
		(*(*Var1[1 /*16*/])[1 /*5*/])[3] = 482931525;
		(*(*Var1[2 /*16*/])[1 /*5*/])[3] = 482931525;
		func_1457(0);
	}
	(*(*Var1[0 /*16*/])[2 /*5*/])[0] = -462274808;
	(*(*Var1[1 /*16*/])[2 /*5*/])[0] = -462274808;
	(*(*Var1[2 /*16*/])[2 /*5*/])[0] = -462274808;
	(*(*Var1[0 /*16*/])[2 /*5*/])[1] = -1906732332;
	(*(*Var1[1 /*16*/])[2 /*5*/])[1] = -1906732332;
	(*(*Var1[2 /*16*/])[2 /*5*/])[1] = -1906732332;
	(*(*Var1[0 /*16*/])[2 /*5*/])[2] = -526829;
	(*(*Var1[1 /*16*/])[2 /*5*/])[2] = -526829;
	(*(*Var1[2 /*16*/])[2 /*5*/])[2] = -526829;
	(*(*Var1[0 /*16*/])[2 /*5*/])[3] = -1754422016;
	(*(*Var1[1 /*16*/])[2 /*5*/])[3] = -1754422016;
	(*(*Var1[2 /*16*/])[2 /*5*/])[3] = -1754422016;
	iVar52 = 0;
	while (iVar52 < 3)
	{
		iVar51 = 0;
		while (iVar51 < 3)
		{
			iVar50 = 0;
			while (iVar50 < 4)
			{
				if (*Var1[iVar52 /*16*/])[iVar51 /*5*/][iVar50] != func_1450()
				{
					if (((iVar52 == iVar0 && iVar50 + 1 == func_1455(iVar51)) && iParam0 == 2) && iParam2)
					{
						if (!STREAMING::_IS_IMAP_ACTIVE((*Var1[iVar52 /*16*/])[iVar51 /*5*/][iVar50]))
						{
							STREAMING::_REQUEST_IMAP((*Var1[iVar52 /*16*/])[iVar51 /*5*/][iVar50]);
						}
					}
					else if (((*Var1[iVar0 /*16*/])[iVar51 /*5*/][(func_1455(iVar51) - 1)] != (*Var1[iVar52 /*16*/])[iVar51 /*5*/][iVar50] || iParam0 != 2) || iParam2 == 0)
					{
						if (STREAMING::_IS_IMAP_ACTIVE((*Var1[iVar52 /*16*/])[iVar51 /*5*/][iVar50]))
						{
							STREAMING::_REMOVE_IMAP((*Var1[iVar52 /*16*/])[iVar51 /*5*/][iVar50]);
						}
					}
				}
				iVar50++;
			}
			iVar51++;
		}
		iVar52++;
	}
}

void func_1100(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar86;
	int iVar87;

	Var0 = 17;
	Var0.f_1 = 4;
	Var0.f_1.f_5 = 4;
	Var0.f_1.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	Var0.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = 4;
	(*Var0[10 /*5*/])[0] = 2036492390;
	(*Var0[10 /*5*/])[1] = 2036492390;
	(*Var0[10 /*5*/])[2] = 2036492390;
	(*Var0[10 /*5*/])[3] = 1865439665;
	(*Var0[11 /*5*/])[0] = func_1450();
	(*Var0[11 /*5*/])[1] = func_1450();
	(*Var0[11 /*5*/])[2] = func_1450();
	(*Var0[11 /*5*/])[3] = func_1450();
	(*Var0[12 /*5*/])[0] = func_1450();
	(*Var0[12 /*5*/])[1] = func_1450();
	(*Var0[12 /*5*/])[2] = func_1450();
	(*Var0[12 /*5*/])[3] = func_1450();
	(*Var0[13 /*5*/])[0] = func_1450();
	(*Var0[13 /*5*/])[1] = func_1450();
	(*Var0[13 /*5*/])[2] = func_1450();
	(*Var0[13 /*5*/])[3] = func_1450();
	(*Var0[9 /*5*/])[0] = func_1450();
	(*Var0[9 /*5*/])[1] = func_1450();
	(*Var0[9 /*5*/])[2] = func_1450();
	(*Var0[9 /*5*/])[3] = func_1450();
	(*Var0[8 /*5*/])[0] = func_1450();
	(*Var0[8 /*5*/])[1] = func_1450();
	(*Var0[8 /*5*/])[2] = func_1450();
	(*Var0[8 /*5*/])[3] = func_1450();
	(*Var0[7 /*5*/])[0] = -621187540;
	(*Var0[7 /*5*/])[1] = -621187540;
	(*Var0[7 /*5*/])[2] = -621187540;
	(*Var0[7 /*5*/])[3] = 1079213989;
	(*Var0[6 /*5*/])[0] = -882188392;
	(*Var0[6 /*5*/])[1] = -882188392;
	(*Var0[6 /*5*/])[2] = -882188392;
	(*Var0[6 /*5*/])[3] = 964593693;
	(*Var0[5 /*5*/])[0] = func_1450();
	(*Var0[5 /*5*/])[1] = func_1450();
	(*Var0[5 /*5*/])[2] = func_1450();
	(*Var0[5 /*5*/])[3] = func_1450();
	(*Var0[4 /*5*/])[0] = -997495998;
	(*Var0[4 /*5*/])[1] = -997495998;
	(*Var0[4 /*5*/])[2] = -997495998;
	(*Var0[4 /*5*/])[3] = -2147051362;
	(*Var0[3 /*5*/])[0] = -1115840558;
	(*Var0[3 /*5*/])[1] = -1115840558;
	(*Var0[3 /*5*/])[2] = 1674493966;
	(*Var0[3 /*5*/])[3] = 1674493966;
	(*Var0[0 /*5*/])[0] = func_1450();
	(*Var0[0 /*5*/])[1] = -1618574684;
	(*Var0[0 /*5*/])[2] = -1618574684;
	(*Var0[0 /*5*/])[3] = -1618574684;
	(*Var0[1 /*5*/])[0] = func_1450();
	(*Var0[1 /*5*/])[1] = func_1450();
	(*Var0[1 /*5*/])[2] = func_1450();
	(*Var0[1 /*5*/])[3] = func_1450();
	(*Var0[2 /*5*/])[0] = func_1450();
	(*Var0[2 /*5*/])[1] = func_1450();
	(*Var0[2 /*5*/])[2] = func_1450();
	(*Var0[2 /*5*/])[3] = func_1450();
	iVar87 = 0;
	while (iVar87 < 17)
	{
		iVar86 = 0;
		while (iVar86 < 4)
		{
			if (Var0[iVar87 /*5*/][iVar86] != func_1450())
			{
				if ((iVar86 + 1 == func_384(iVar87, 1) && iParam0 == 3) && iParam2)
				{
					if (!STREAMING::_IS_IMAP_ACTIVE(Var0[iVar87 /*5*/][iVar86]))
					{
						STREAMING::_REQUEST_IMAP(Var0[iVar87 /*5*/][iVar86]);
						func_1454(Var0[iVar87 /*5*/][iVar86], 1, iParam1);
					}
				}
				else if ((Var0[iVar87 /*5*/][(func_384(iVar87, 1) - 1)] != Var0[iVar87 /*5*/][iVar86] || iParam0 != 3) || iParam2 == 0)
				{
					if (STREAMING::_IS_IMAP_ACTIVE(Var0[iVar87 /*5*/][iVar86]))
					{
						STREAMING::_REMOVE_IMAP(Var0[iVar87 /*5*/][iVar86]);
						func_1454(Var0[iVar87 /*5*/][iVar86], 0, iParam1);
					}
				}
			}
			iVar86++;
		}
		iVar87++;
	}
}

void func_1101(int iParam0, float fParam1, int iParam2)
{
	int iVar0;
	struct<16> Var1;
	int iVar50;
	int iVar51;
	int iVar52;
	char* sVar53[4];
	int iVar58;

	if (fParam1 < 30f)
	{
		iVar0 = 0;
	}
	else if (fParam1 < 75f)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 2;
	}
	Var1 = 3;
	Var1.f_1 = 3;
	Var1.f_1.f_1 = 4;
	Var1.f_1.f_1.f_5 = 4;
	Var1.f_1.f_1.f_5.f_5 = 4;
	Var1.f_1.f_16 = 3;
	Var1.f_1.f_16.f_1 = 4;
	Var1.f_1.f_16.f_1.f_5 = 4;
	Var1.f_1.f_16.f_1.f_5.f_5 = 4;
	Var1.f_1.f_16.f_16 = 3;
	Var1.f_1.f_16.f_16.f_1 = 4;
	Var1.f_1.f_16.f_16.f_1.f_5 = 4;
	Var1.f_1.f_16.f_16.f_1.f_5.f_5 = 4;
	(*(*Var1[0 /*16*/])[0 /*5*/])[0] = func_1450();
	(*(*Var1[1 /*16*/])[0 /*5*/])[0] = func_1450();
	(*(*Var1[2 /*16*/])[0 /*5*/])[0] = func_1450();
	(*(*Var1[0 /*16*/])[0 /*5*/])[1] = func_1450();
	(*(*Var1[1 /*16*/])[0 /*5*/])[1] = func_1450();
	(*(*Var1[2 /*16*/])[0 /*5*/])[1] = func_1450();
	(*(*Var1[0 /*16*/])[0 /*5*/])[2] = func_1450();
	(*(*Var1[1 /*16*/])[0 /*5*/])[2] = func_1450();
	(*(*Var1[2 /*16*/])[0 /*5*/])[2] = func_1450();
	(*(*Var1[0 /*16*/])[0 /*5*/])[3] = func_1450();
	(*(*Var1[1 /*16*/])[0 /*5*/])[3] = func_1450();
	(*(*Var1[2 /*16*/])[0 /*5*/])[3] = func_1450();
	(*(*Var1[0 /*16*/])[1 /*5*/])[0] = func_1450();
	(*(*Var1[1 /*16*/])[1 /*5*/])[0] = func_1450();
	(*(*Var1[2 /*16*/])[1 /*5*/])[0] = func_1450();
	(*(*Var1[0 /*16*/])[1 /*5*/])[1] = 1155877447;
	(*(*Var1[1 /*16*/])[1 /*5*/])[1] = 1155877447;
	(*(*Var1[2 /*16*/])[1 /*5*/])[1] = 1155877447;
	(*(*Var1[0 /*16*/])[1 /*5*/])[2] = 928165666;
	(*(*Var1[1 /*16*/])[1 /*5*/])[2] = 928165666;
	(*(*Var1[2 /*16*/])[1 /*5*/])[2] = 928165666;
	(*(*Var1[0 /*16*/])[1 /*5*/])[3] = 2048341166;
	(*(*Var1[1 /*16*/])[1 /*5*/])[3] = 2048341166;
	(*(*Var1[2 /*16*/])[1 /*5*/])[3] = 2048341166;
	(*(*Var1[0 /*16*/])[2 /*5*/])[0] = -414377604;
	(*(*Var1[1 /*16*/])[2 /*5*/])[0] = -414377604;
	(*(*Var1[2 /*16*/])[2 /*5*/])[0] = -414377604;
	(*(*Var1[0 /*16*/])[2 /*5*/])[1] = -109593135;
	(*(*Var1[1 /*16*/])[2 /*5*/])[1] = -109593135;
	(*(*Var1[2 /*16*/])[2 /*5*/])[1] = -109593135;
	(*(*Var1[0 /*16*/])[2 /*5*/])[2] = 990134505;
	(*(*Var1[1 /*16*/])[2 /*5*/])[2] = 990134505;
	(*(*Var1[2 /*16*/])[2 /*5*/])[2] = 990134505;
	(*(*Var1[0 /*16*/])[2 /*5*/])[3] = 1279910772;
	(*(*Var1[1 /*16*/])[2 /*5*/])[3] = 1279910772;
	(*(*Var1[2 /*16*/])[2 /*5*/])[3] = 1279910772;
	iVar52 = 0;
	while (iVar52 < 3)
	{
		iVar51 = 0;
		while (iVar51 < 3)
		{
			iVar50 = 0;
			while (iVar50 < 4)
			{
				if (*Var1[iVar52 /*16*/])[iVar51 /*5*/][iVar50] != func_1450()
				{
					if (((iVar52 == iVar0 && iVar50 + 1 == func_1455(iVar51)) && iParam0 == 3) && iParam2)
					{
						if (!STREAMING::_IS_IMAP_ACTIVE((*Var1[iVar52 /*16*/])[iVar51 /*5*/][iVar50]))
						{
							STREAMING::_REQUEST_IMAP((*Var1[iVar52 /*16*/])[iVar51 /*5*/][iVar50]);
						}
					}
					else if (((*Var1[iVar0 /*16*/])[iVar51 /*5*/][(func_1455(iVar51) - 1)] != (*Var1[iVar52 /*16*/])[iVar51 /*5*/][iVar50] || iParam0 != 3) || iParam2 == 0)
					{
						if (STREAMING::_IS_IMAP_ACTIVE((*Var1[iVar52 /*16*/])[iVar51 /*5*/][iVar50]))
						{
							STREAMING::_REMOVE_IMAP((*Var1[iVar52 /*16*/])[iVar51 /*5*/][iVar50]);
						}
					}
				}
				iVar50++;
			}
			iVar51++;
		}
		iVar52++;
	}
	sVar53[0] = "";
	sVar53[1] = "shb_p_ammo01";
	sVar53[2] = "shb_p_ammo02";
	sVar53[3] = "shb_p_ammo03";
	iVar58 = INTERIOR::GET_INTERIOR_AT_COORDS(1906.472f, -1862.567f, 46.362f);
	iVar50 = 0;
	while (iVar50 < 4)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(sVar53[iVar50])) == 0)
		{
			if (((iVar50 + 1 == func_1455(0) && iParam0 == 3) && iParam2) && Global_1357549->f_1495 & 8 != 0 == 0)
			{
				if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar58, &(sVar53[iVar50])) == 0)
				{
					INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar58, &(sVar53[iVar50]), 0);
				}
			}
			else if (((iParam0 != 3 || iVar50 + 1 != func_1455(0)) || iParam2 == 0) || Global_1357549->f_1495 & 8 != 0)
			{
				if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar58, &(sVar53[iVar50])))
				{
					INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar58, &(sVar53[iVar50]), 1);
				}
			}
		}
		iVar50++;
	}
}

void func_1102(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar6;
	int iVar7;
	float fVar8;

	fVar8 = 25f;
	switch (iParam0)
	{
		case 2:
			iVar0 = joaat("pirogue");
			iVar1 = 4;
			vVar3 = { 623.54f, -1251.056f, 40.2502f };
			fVar6 = 137.4389f;
			iVar2 = 8194;
			break;
		case 3:
			iVar0 = joaat("pirogue");
			iVar1 = 4;
			vVar3 = { 1908.325f, -1816.88f, 40.456f };
			fVar6 = 251.3719f;
			iVar2 = 8194;
			break;
		default:
			iVar0 = 0;
			iVar1 = 100;
			vVar3 = { 0f, 0f, 0f };
			fVar6 = 0f;
			iVar2 = 0;
			break;
	}
	iVar7 = VEHICLE::GET_CLOSEST_VEHICLE(vVar3, fVar8, iVar0, iVar2);
	if (ENTITY::DOES_ENTITY_EXIST(iVar7))
	{
		Global_1357549->f_1674 = iVar7;
		ENTITY::SET_ENTITY_COORDS(iVar7, vVar3, true, false, true, true);
		ENTITY::SET_ENTITY_HEADING(iVar7, fVar6);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1357549->f_1674, true, true);
	}
	if (iParam1 >= iVar1 && iVar0 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1357549->f_1674) == 0 && ENTITY::DOES_ENTITY_EXIST(iVar7) == 0)
		{
			STREAMING::REQUEST_MODEL(iVar0, false);
			if (STREAMING::HAS_MODEL_LOADED(iVar0))
			{
				Global_1357549->f_1674 = VEHICLE::CREATE_VEHICLE(iVar0, vVar3, fVar6, true, true, false, false);
			}
		}
		else
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		}
	}
	else
	{
		func_1458();
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1357549->f_1674))
	{
		if (iParam0 == 3 || iParam0 == 2)
		{
			VEHICLE::SET_BOAT_ANCHOR(Global_1357549->f_1674, true);
			VEHICLE::_0x6B53F4B811E583D2(Global_1357549->f_1674, 1);
		}
		if (ENTITY::GET_ENTITY_MODEL(Global_1357549->f_1674) != iVar0)
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_1357549->f_1674));
		}
	}
}

void func_1103(int iParam0, var uParam1)
{
	func_1459(iParam0);
}

int func_1104(float fParam0, var uParam1)
{
	int iVar0;
	struct<16> Var1;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;

	if (fParam0 < 30f)
	{
		iVar0 = 0;
	}
	else if (fParam0 < 75f)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 2;
	}
	Var1 = 3;
	Var1.f_1 = 3;
	Var1.f_1.f_1 = 4;
	Var1.f_1.f_1.f_5 = 4;
	Var1.f_1.f_1.f_5.f_5 = 4;
	Var1.f_1.f_16 = 3;
	Var1.f_1.f_16.f_1 = 4;
	Var1.f_1.f_16.f_1.f_5 = 4;
	Var1.f_1.f_16.f_1.f_5.f_5 = 4;
	Var1.f_1.f_16.f_16 = 3;
	Var1.f_1.f_16.f_16.f_1 = 4;
	Var1.f_1.f_16.f_16.f_1.f_5 = 4;
	Var1.f_1.f_16.f_16.f_1.f_5.f_5 = 4;
	(*(*Var1[0 /*16*/])[0 /*5*/])[0] = func_1450();
	(*(*Var1[1 /*16*/])[0 /*5*/])[0] = func_1450();
	(*(*Var1[2 /*16*/])[0 /*5*/])[0] = func_1450();
	(*(*Var1[0 /*16*/])[0 /*5*/])[1] = -710911638;
	(*(*Var1[1 /*16*/])[0 /*5*/])[1] = -710911638;
	(*(*Var1[2 /*16*/])[0 /*5*/])[1] = -710911638;
	(*(*Var1[0 /*16*/])[0 /*5*/])[2] = -942555699;
	(*(*Var1[1 /*16*/])[0 /*5*/])[2] = -942555699;
	(*(*Var1[2 /*16*/])[0 /*5*/])[2] = -942555699;
	(*(*Var1[0 /*16*/])[0 /*5*/])[3] = -760097927;
	(*(*Var1[1 /*16*/])[0 /*5*/])[3] = -760097927;
	(*(*Var1[2 /*16*/])[0 /*5*/])[3] = -760097927;
	(*(*Var1[0 /*16*/])[1 /*5*/])[0] = func_1450();
	(*(*Var1[1 /*16*/])[1 /*5*/])[0] = func_1450();
	(*(*Var1[2 /*16*/])[1 /*5*/])[0] = func_1450();
	(*(*Var1[0 /*16*/])[1 /*5*/])[1] = 2047954825;
	(*(*Var1[1 /*16*/])[1 /*5*/])[1] = 2047954825;
	(*(*Var1[2 /*16*/])[1 /*5*/])[1] = 2047954825;
	(*(*Var1[0 /*16*/])[1 /*5*/])[2] = -2085723453;
	(*(*Var1[1 /*16*/])[1 /*5*/])[2] = -2085723453;
	(*(*Var1[2 /*16*/])[1 /*5*/])[2] = -2085723453;
	(*(*Var1[0 /*16*/])[1 /*5*/])[3] = 1434945142;
	(*(*Var1[1 /*16*/])[1 /*5*/])[3] = 1434945142;
	(*(*Var1[2 /*16*/])[1 /*5*/])[3] = 1434945142;
	(*(*Var1[0 /*16*/])[2 /*5*/])[0] = 1924209179;
	(*(*Var1[1 /*16*/])[2 /*5*/])[0] = 1924209179;
	(*(*Var1[2 /*16*/])[2 /*5*/])[0] = 1924209179;
	(*(*Var1[0 /*16*/])[2 /*5*/])[1] = -2084193212;
	(*(*Var1[1 /*16*/])[2 /*5*/])[1] = -2084193212;
	(*(*Var1[2 /*16*/])[2 /*5*/])[1] = -2084193212;
	(*(*Var1[0 /*16*/])[2 /*5*/])[2] = -838184752;
	(*(*Var1[1 /*16*/])[2 /*5*/])[2] = -838184752;
	(*(*Var1[2 /*16*/])[2 /*5*/])[2] = -838184752;
	(*(*Var1[0 /*16*/])[2 /*5*/])[3] = -1433138716;
	(*(*Var1[1 /*16*/])[2 /*5*/])[3] = -1433138716;
	(*(*Var1[2 /*16*/])[2 /*5*/])[3] = -1433138716;
	iVar50 = 0;
	iVar53 = 0;
	while (iVar53 < 3)
	{
		iVar52 = 0;
		while (iVar52 < 3)
		{
			iVar51 = 0;
			while (iVar51 < 4)
			{
				if (*Var1[iVar53 /*16*/])[iVar52 /*5*/][iVar51] != func_1450()
				{
					if ((iVar53 == iVar0 && iVar51 + 1 == func_1455(iVar52)) && uParam1)
					{
						if (STREAMING::_IS_IMAP_ACTIVE((*Var1[iVar53 /*16*/])[iVar52 /*5*/][iVar51]))
						{
							iVar50++;
						}
					}
				}
				iVar51++;
			}
			iVar52++;
		}
		iVar53++;
	}
	if (iVar50 == 3)
	{
		return 1;
	}
	return 0;
}

int func_1105(float fParam0, var uParam1)
{
	int iVar0;
	struct<16> Var1;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;

	if (fParam0 < 30f)
	{
		iVar0 = 0;
	}
	else if (fParam0 < 75f)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 2;
	}
	Var1 = 3;
	Var1.f_1 = 3;
	Var1.f_1.f_1 = 4;
	Var1.f_1.f_1.f_5 = 4;
	Var1.f_1.f_1.f_5.f_5 = 4;
	Var1.f_1.f_16 = 3;
	Var1.f_1.f_16.f_1 = 4;
	Var1.f_1.f_16.f_1.f_5 = 4;
	Var1.f_1.f_16.f_1.f_5.f_5 = 4;
	Var1.f_1.f_16.f_16 = 3;
	Var1.f_1.f_16.f_16.f_1 = 4;
	Var1.f_1.f_16.f_16.f_1.f_5 = 4;
	Var1.f_1.f_16.f_16.f_1.f_5.f_5 = 4;
	(*(*Var1[0 /*16*/])[0 /*5*/])[0] = func_1450();
	(*(*Var1[1 /*16*/])[0 /*5*/])[0] = func_1450();
	(*(*Var1[2 /*16*/])[0 /*5*/])[0] = func_1450();
	(*(*Var1[0 /*16*/])[0 /*5*/])[1] = func_1450();
	(*(*Var1[1 /*16*/])[0 /*5*/])[1] = func_1450();
	(*(*Var1[2 /*16*/])[0 /*5*/])[1] = func_1450();
	(*(*Var1[0 /*16*/])[0 /*5*/])[2] = func_1450();
	(*(*Var1[1 /*16*/])[0 /*5*/])[2] = func_1450();
	(*(*Var1[2 /*16*/])[0 /*5*/])[2] = func_1450();
	(*(*Var1[0 /*16*/])[0 /*5*/])[3] = func_1450();
	(*(*Var1[1 /*16*/])[0 /*5*/])[3] = func_1450();
	(*(*Var1[2 /*16*/])[0 /*5*/])[3] = func_1450();
	(*(*Var1[0 /*16*/])[1 /*5*/])[0] = func_1450();
	(*(*Var1[1 /*16*/])[1 /*5*/])[0] = func_1450();
	(*(*Var1[2 /*16*/])[1 /*5*/])[0] = func_1450();
	(*(*Var1[0 /*16*/])[1 /*5*/])[1] = 1155877447;
	(*(*Var1[1 /*16*/])[1 /*5*/])[1] = 1155877447;
	(*(*Var1[2 /*16*/])[1 /*5*/])[1] = 1155877447;
	(*(*Var1[0 /*16*/])[1 /*5*/])[2] = 928165666;
	(*(*Var1[1 /*16*/])[1 /*5*/])[2] = 928165666;
	(*(*Var1[2 /*16*/])[1 /*5*/])[2] = 928165666;
	(*(*Var1[0 /*16*/])[1 /*5*/])[3] = 2048341166;
	(*(*Var1[1 /*16*/])[1 /*5*/])[3] = 2048341166;
	(*(*Var1[2 /*16*/])[1 /*5*/])[3] = 2048341166;
	(*(*Var1[0 /*16*/])[2 /*5*/])[0] = -414377604;
	(*(*Var1[1 /*16*/])[2 /*5*/])[0] = -414377604;
	(*(*Var1[2 /*16*/])[2 /*5*/])[0] = -414377604;
	(*(*Var1[0 /*16*/])[2 /*5*/])[1] = -109593135;
	(*(*Var1[1 /*16*/])[2 /*5*/])[1] = -109593135;
	(*(*Var1[2 /*16*/])[2 /*5*/])[1] = -109593135;
	(*(*Var1[0 /*16*/])[2 /*5*/])[2] = 990134505;
	(*(*Var1[1 /*16*/])[2 /*5*/])[2] = 990134505;
	(*(*Var1[2 /*16*/])[2 /*5*/])[2] = 990134505;
	(*(*Var1[0 /*16*/])[2 /*5*/])[3] = 1279910772;
	(*(*Var1[1 /*16*/])[2 /*5*/])[3] = 1279910772;
	(*(*Var1[2 /*16*/])[2 /*5*/])[3] = 1279910772;
	iVar50 = 0;
	iVar53 = 0;
	while (iVar53 < 3)
	{
		iVar52 = 0;
		while (iVar52 < 3)
		{
			iVar51 = 0;
			while (iVar51 < 4)
			{
				if (*Var1[iVar53 /*16*/])[iVar52 /*5*/][iVar51] != func_1450()
				{
					if ((iVar53 == iVar0 && iVar51 + 1 == func_1455(iVar52)) && uParam1)
					{
						if (STREAMING::_IS_IMAP_ACTIVE((*Var1[iVar53 /*16*/])[iVar52 /*5*/][iVar51]))
						{
							iVar50++;
						}
					}
				}
				iVar51++;
			}
			iVar52++;
		}
		iVar53++;
	}
	if (iVar50 == 2)
	{
		return 1;
	}
	return 0;
}

int func_1106(float fParam0, var uParam1)
{
	int iVar0;
	struct<16> Var1;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;

	if (fParam0 < 30f)
	{
		iVar0 = 0;
	}
	else if (fParam0 < 75f)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 2;
	}
	Var1 = 3;
	Var1.f_1 = 3;
	Var1.f_1.f_1 = 4;
	Var1.f_1.f_1.f_5 = 4;
	Var1.f_1.f_1.f_5.f_5 = 4;
	Var1.f_1.f_16 = 3;
	Var1.f_1.f_16.f_1 = 4;
	Var1.f_1.f_16.f_1.f_5 = 4;
	Var1.f_1.f_16.f_1.f_5.f_5 = 4;
	Var1.f_1.f_16.f_16 = 3;
	Var1.f_1.f_16.f_16.f_1 = 4;
	Var1.f_1.f_16.f_16.f_1.f_5 = 4;
	Var1.f_1.f_16.f_16.f_1.f_5.f_5 = 4;
	(*(*Var1[0 /*16*/])[0 /*5*/])[0] = func_1450();
	(*(*Var1[1 /*16*/])[0 /*5*/])[0] = func_1450();
	(*(*Var1[2 /*16*/])[0 /*5*/])[0] = func_1450();
	(*(*Var1[0 /*16*/])[0 /*5*/])[1] = 626928579;
	(*(*Var1[1 /*16*/])[0 /*5*/])[1] = 626928579;
	(*(*Var1[2 /*16*/])[0 /*5*/])[1] = 626928579;
	(*(*Var1[0 /*16*/])[0 /*5*/])[2] = 313722477;
	(*(*Var1[1 /*16*/])[0 /*5*/])[2] = 313722477;
	(*(*Var1[2 /*16*/])[0 /*5*/])[2] = 313722477;
	(*(*Var1[0 /*16*/])[0 /*5*/])[3] = 976082270;
	(*(*Var1[1 /*16*/])[0 /*5*/])[3] = 976082270;
	(*(*Var1[2 /*16*/])[0 /*5*/])[3] = 976082270;
	(*(*Var1[0 /*16*/])[1 /*5*/])[0] = func_1450();
	(*(*Var1[1 /*16*/])[1 /*5*/])[0] = func_1450();
	(*(*Var1[2 /*16*/])[1 /*5*/])[0] = func_1450();
	(*(*Var1[0 /*16*/])[1 /*5*/])[1] = 5585502;
	(*(*Var1[1 /*16*/])[1 /*5*/])[1] = 5585502;
	(*(*Var1[2 /*16*/])[1 /*5*/])[1] = 5585502;
	(*(*Var1[0 /*16*/])[1 /*5*/])[2] = -1362716862;
	(*(*Var1[1 /*16*/])[1 /*5*/])[2] = -1362716862;
	(*(*Var1[2 /*16*/])[1 /*5*/])[2] = -1362716862;
	(*(*Var1[0 /*16*/])[1 /*5*/])[3] = 482931525;
	(*(*Var1[1 /*16*/])[1 /*5*/])[3] = 482931525;
	(*(*Var1[2 /*16*/])[1 /*5*/])[3] = 482931525;
	(*(*Var1[0 /*16*/])[2 /*5*/])[0] = -462274808;
	(*(*Var1[1 /*16*/])[2 /*5*/])[0] = -462274808;
	(*(*Var1[2 /*16*/])[2 /*5*/])[0] = -462274808;
	(*(*Var1[0 /*16*/])[2 /*5*/])[1] = -1906732332;
	(*(*Var1[1 /*16*/])[2 /*5*/])[1] = -1906732332;
	(*(*Var1[2 /*16*/])[2 /*5*/])[1] = -1906732332;
	(*(*Var1[0 /*16*/])[2 /*5*/])[2] = -526829;
	(*(*Var1[1 /*16*/])[2 /*5*/])[2] = -526829;
	(*(*Var1[2 /*16*/])[2 /*5*/])[2] = -526829;
	(*(*Var1[0 /*16*/])[2 /*5*/])[3] = -1754422016;
	(*(*Var1[1 /*16*/])[2 /*5*/])[3] = -1754422016;
	(*(*Var1[2 /*16*/])[2 /*5*/])[3] = -1754422016;
	iVar50 = 0;
	iVar53 = 0;
	while (iVar53 < 3)
	{
		iVar52 = 0;
		while (iVar52 < 3)
		{
			iVar51 = 0;
			while (iVar51 < 4)
			{
				if (*Var1[iVar53 /*16*/])[iVar52 /*5*/][iVar51] != func_1450()
				{
					if ((iVar53 == iVar0 && iVar51 + 1 == func_1455(iVar52)) && uParam1)
					{
						if (STREAMING::_IS_IMAP_ACTIVE((*Var1[iVar53 /*16*/])[iVar52 /*5*/][iVar51]))
						{
							iVar50++;
						}
					}
				}
				iVar51++;
			}
			iVar52++;
		}
		iVar53++;
	}
	if (iVar50 == 3)
	{
		return 1;
	}
	return 0;
}

void func_1107(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::CLEAR_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

int func_1108(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_36307)
	{
		return MAP::DOES_BLIP_EXIST(&(Global_36307[iParam0]));
	}
	return 0;
}

int func_1109(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return -160705043;
		case 5:
			return -726606177;
		case 26:
			return -49572609;
		case 38:
			return 417546980;
		case 69:
			return -117334654;
		case 76:
			return -357010019;
		case 78:
			return 719613628;
		case 92:
			return 1459616333;
		case 105:
			return 1607757565;
		case 115:
			return -161326102;
		case 120:
			return -1909997854;
		case 4:
		case 9:
		case 22:
		case 37:
		case 43:
		case 58:
		case 71:
		case 79:
		case 98:
			return -1025871137;
		default:
			break;
	}
	return 0;
}

bool func_1110(int iParam0)
{
	return iParam0 != 0;
}

int func_1111(int iParam0, int iParam1)
{
	*iParam1 = 0;
	while (*iParam1 < 15)
	{
		if (&Global_40.f_4237[*iParam1 /*3*/] == iParam0)
		{
			return 1;
		}
		*iParam1++;
	}
	*iParam1 = -1;
	return 0;
}

void func_1112(int iParam0)
{
	int iVar0;

	func_1460(Global_40.f_4237[iParam0 /*3*/]);
	if (func_1110(&(Global_40.f_4237[iParam0 /*3*/])))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (iVar0 < iParam0)
		{
		}
		else if (iVar0 < 14 && func_1110(&(Global_40.f_4237[iVar0 + 1 /*3*/])))
		{
			Global_40.f_4237[iVar0 /*3*/] = &Global_40.f_4237[iVar0 + 1 /*3*/];
			(Global_40.f_4237[iVar0 /*3*/])->f_1 = (Global_40.f_4237[iVar0 + 1 /*3*/])->f_1;
			(Global_40.f_4237[iVar0 /*3*/])->f_2 = (Global_40.f_4237[iVar0 + 1 /*3*/])->f_2;
			func_1462(iVar0, func_1461(iVar0 + 1));
			func_1463(Global_40.f_4237[iVar0 + 1 /*3*/]);
			func_1462(iVar0 + 1, 0);
		}
		iVar0++;
	}
}

int func_1113(int iParam0, int iParam1, int iParam2, int iParam3)
{
	*iParam3 = 0;
	*iParam2 = 0;
	if (func_1464(iParam0, iParam1))
	{
		*iParam3 = 1;
	}
	if (func_1465(iParam0, iParam1, iParam2))
	{
		return 1;
	}
	*iParam2 = -1;
	return *iParam3;
}

void func_1114(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = func_179(iParam0);
	if ((func_344(iVar0, 0) && func_1466(iParam0, *uParam1)) && PED::_0x7C8AA850617651D9(iVar0, *uParam1))
	{
		func_1467(iParam0, *uParam1);
	}
	if ((!func_344(iVar0, 0) || !func_1466(iParam0, *uParam1)) || !PED::_0x7C8AA850617651D9(iVar0, *uParam1))
	{
		func_1463(uParam1);
	}
}

void func_1115(int iParam0, int iParam1)
{
	int iVar0;

	func_1114(iParam0, (Global_40.f_4942[iParam0 /*60*/])->f_11[iParam1 /*3*/]);
	if (func_1110(&((Global_40.f_4942[iParam0 /*60*/])->f_11[iParam1 /*3*/])))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iVar0 < iParam1)
		{
		}
		else if (iVar0 < 9 && func_1110(&((Global_40.f_4942[iParam0 /*60*/])->f_11[iVar0 + 1 /*3*/])))
		{
			(Global_40.f_4942[iParam0 /*60*/])->f_11[iVar0 /*3*/] = &(Global_40.f_4942[iParam0 /*60*/])->f_11[iVar0 + 1 /*3*/];
			((Global_40.f_4942[iParam0 /*60*/])->f_11[iVar0 /*3*/])->f_1 = ((Global_40.f_4942[iParam0 /*60*/])->f_11[iVar0 + 1 /*3*/])->f_1;
			((Global_40.f_4942[iParam0 /*60*/])->f_11[iVar0 /*3*/])->f_2 = ((Global_40.f_4942[iParam0 /*60*/])->f_11[iVar0 + 1 /*3*/])->f_2;
			func_1469(iParam0, iVar0, func_1468(iParam0, iVar0 + 1));
			func_1463((Global_40.f_4942[iParam0 /*60*/])->f_11[iVar0 + 1 /*3*/]);
			func_1469(iParam0, iVar0 + 1, 0);
		}
		iVar0++;
	}
}

bool func_1116(int iParam0)
{
	return (Global_1935630 && (-1 - iParam0) & 40959) != 0;
}

void func_1117(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_1118(int iParam0)
{
	if (func_503(iParam0))
	{
		return Global_1360165[iParam0 /*1157*/];
	}
	return 0;
}

var func_1119(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	char* sVar0;

	if (bParam2)
	{
		_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_1470(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_1471(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(sVar0);
	}
	return func_1470(sVar0, iParam1, 0, 0, 1, 1);
}

Vector3 func_1120(var uParam0)
{
	switch (func_148())
	{
		case 8:
			return func_1472(uParam0);
		case 1:
			return func_1473(uParam0);
		case 3:
			return func_1474(uParam0);
		case 6:
			return func_1475(uParam0);
		case 2:
			return func_1476(uParam0);
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_1121(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (uParam1->f_1 == ((*uParam0)[iVar0 /*8*/])->f_1 && &uParam1->f_5[0] == &((*uParam0)[iVar0 /*8*/])->f_5[0])
		{
			func_724(&(((*uParam0)[iVar0 /*8*/])->f_3), 1);
		}
		iVar0++;
	}
}

void func_1122(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 0:
			*uParam0 = -152894290;
			break;
		case 4:
			*uParam0 = -739512309;
			break;
		case 2:
		case 3:
			*uParam0 = 344111076;
			break;
		case 10:
			*uParam0 = -634535025;
			break;
		case 6:
			*uParam0 = 637951816;
			break;
		case 5:
			*uParam0 = 1371343903;
			break;
		case 7:
			*uParam0 = -1816442556;
			break;
		case 1:
			if (func_148() == 1)
			{
				*uParam0 = 1442242084;
			}
			else
			{
				*uParam0 = -1239305634;
			}
			break;
		case 9:
			*uParam0 = -1287936009;
			break;
		case 8:
			*uParam0 = -1750328455;
			break;
		case 14:
			*uParam0 = -665966576;
			break;
	}
	uParam0->f_2 = -3;
	uParam0->f_3 = 0;
	if (MAP::DOES_BLIP_EXIST(uParam0->f_4))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_4));
	}
}

void func_1123(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_717(iParam1, func_1477(((*uParam0)[iVar0 /*8*/])->f_1)))
		{
			if (((((*uParam0)[iVar0 /*8*/])->f_2 == 5 || ((*uParam0)[iVar0 /*8*/])->f_2 == -2) || ((*uParam0)[iVar0 /*8*/])->f_2 == 0) || ((*uParam0)[iVar0 /*8*/])->f_2 == 6)
			{
			}
			else if (bParam2)
			{
				((*uParam0)[iVar0 /*8*/])->f_2 = 2;
			}
			else
			{
				((*uParam0)[iVar0 /*8*/])->f_2 = -1;
			}
		}
		iVar0++;
	}
}

void func_1124()
{
	UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
}

void func_1125(int iParam0)
{
	if (func_1478(iParam0))
	{
		Global_1392040 = (&Global_1392040 - (Global_1392040 && iParam0));
	}
}

void func_1126(int iParam0)
{
	int iVar0;

	if (Global_1899528->f_213 && iParam0 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_36307)
	{
		if (func_1480(func_1479(iVar0)))
		{
			if (!func_1481(iVar0) == -1)
			{
				if (func_1482(iVar0) != 0)
				{
					if (MAP::DOES_BLIP_EXIST(&(Global_36307[iVar0])))
					{
						if (MAP::_0xB059D7BD3D78C16F(&(Global_36307[iVar0]), -1186550032))
						{
						}
					}
				}
			}
		}
		iVar0++;
	}
	Global_1899528->f_213 = 1;
}

void func_1127(int iParam0, int iParam1)
{
	func_719(iParam0, iParam1);
}

int func_1128(int iParam0, var uParam1, int iParam2)
{
	*uParam1 = iParam0;
	switch (iParam0)
	{
		case 0:
			uParam1->f_1 = 0;
			uParam1->f_2 = 38;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { -813.2971f, -1324.285f, 46.89f };
			uParam1->f_8 = 0.29f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 1:
			uParam1->f_1 = 0;
			uParam1->f_2 = 105;
			uParam1->f_3 = 0;
			uParam1->f_4 = 400f;
			uParam1->f_5 = { 1339.562f, -1372.173f, 83.2967f };
			uParam1->f_8 = 80f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 2:
			uParam1->f_1 = 0;
			uParam1->f_2 = 92;
			uParam1->f_3 = 0;
			uParam1->f_4 = 300f;
			uParam1->f_5 = { 2938.582f, 520.6577f, 44.3412f };
			uParam1->f_8 = 126.9f;
			uParam1->f_9 = 2f;
			return 1;
		case 3:
			uParam1->f_1 = 5;
			uParam1->f_2 = 37;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			if (Global_1899848->f_3 < 0 || Global_1899848->f_3 >= 6)
			{
				Global_1899848->f_3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
			}
			if (Global_1899848->f_3 == 0 || Global_1899848->f_3 == 1)
			{
				uParam1->f_5 = { -1604f, -1419.09f, 80.92f };
			}
			else if (Global_1899848->f_3 == 2 || Global_1899848->f_3 == 3)
			{
				uParam1->f_5 = { -1604f, -1419.09f, 80.92f };
			}
			else
			{
				uParam1->f_5 = { -1603.35f, -1409f, 80.92f };
			}
			uParam1->f_8 = 0f;
			uParam1->f_9 = 1f;
			return 1;
		case 4:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 5;
				uParam1->f_2 = 71;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { -63.25864f, -404.9262f, 69.9287f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 1f;
				return 1;
			}
			return 0;
		case 5:
			uParam1->f_1 = 5;
			uParam1->f_2 = 22;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -2552.997f, 397.415f, 147.1629f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 1f;
			return 1;
		case 6:
			uParam1->f_1 = 1;
			uParam1->f_2 = 38;
			uParam1->f_3 = 0;
			uParam1->f_4 = 200f;
			uParam1->f_5 = { -936.9756f, -1390.084f, 49.5777f };
			uParam1->f_8 = -174.39f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 7:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = -1;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { 0f, 0f, 0f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 8:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = 98;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { 665.5017f, -1243.862f, 43.1442f };
				uParam1->f_8 = 134.74f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 9:
			uParam1->f_1 = 1;
			uParam1->f_2 = 69;
			uParam1->f_3 = 0;
			uParam1->f_4 = 100f;
			uParam1->f_5 = { 1522.005f, 431.2095f, 89.679f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 10:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = 71;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { -118.0872f, -27.6725f, 94.805f };
				uParam1->f_8 = -103.99f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 11:
			uParam1->f_1 = 1;
			uParam1->f_2 = 5;
			uParam1->f_3 = 0;
			uParam1->f_4 = 150f;
			uParam1->f_5 = { 2515.659f, -1245.743f, 49.5757f };
			uParam1->f_8 = -45f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 12:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = 9;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { 1881.669f, -1874.046f, 41.7769f };
				uParam1->f_8 = 77.47f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 13:
			uParam1->f_1 = 6;
			uParam1->f_2 = 22;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -2594.942f, 410.063f, 148.7582f };
			uParam1->f_8 = 88.6423f;
			uParam1->f_9 = 2f;
			return 1;
		case 14:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = -1;
				uParam1->f_3 = 0;
				uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325->f_24);
				uParam1->f_5 = { 0f, 0f, 0f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 15:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = 98;
				uParam1->f_3 = 0;
				uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325->f_24);
				uParam1->f_5 = { 665.5322f, -1243.902f, 43.94809f };
				uParam1->f_8 = 225.55f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 16:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = 71;
				uParam1->f_3 = 0;
				uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325->f_24);
				uParam1->f_5 = { -118.119f, -27.6134f, 95.57291f };
				uParam1->f_8 = 166.84f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 17:
			uParam1->f_1 = 3;
			uParam1->f_2 = 26;
			uParam1->f_3 = 0;
			uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325->f_24);
			uParam1->f_5 = { -1826.215f, -433.9676f, 159.7386f };
			uParam1->f_8 = 157.4f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 18:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = 9;
				uParam1->f_3 = 0;
				uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325->f_24);
				uParam1->f_5 = { 1881.669f, -1874.046f, 42.58081f };
				uParam1->f_8 = 167.47f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 19:
			uParam1->f_1 = 3;
			uParam1->f_2 = 76;
			uParam1->f_3 = 0;
			uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325->f_24);
			uParam1->f_5 = { -243.7256f, 771.2707f, 117.8849f };
			uParam1->f_8 = -69.92f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 20:
			uParam1->f_1 = 3;
			uParam1->f_2 = 92;
			uParam1->f_3 = 0;
			uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325->f_24);
			uParam1->f_5 = { 2946.444f, 500.1154f, 45.53999f };
			uParam1->f_8 = -84.13f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 21:
			uParam1->f_1 = 4;
			uParam1->f_2 = 37;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -1603.485f, -1414.838f, 81.1f };
			uParam1->f_8 = -14.4f;
			uParam1->f_9 = 1.5f;
			return 1;
		case 22:
			uParam1->f_1 = 4;
			uParam1->f_2 = 22;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -2514.944f, 432.25f, 147f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 1.5f;
			return 1;
		case 23:
			uParam1->f_1 = 2;
			uParam1->f_2 = 38;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { -813.2148f, -1316.547f, 42.6787f };
			uParam1->f_8 = 60f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 24:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 2;
				uParam1->f_2 = -1;
				uParam1->f_3 = 0;
				uParam1->f_4 = 100f;
				uParam1->f_5 = { 0f, 0f, 0f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 25:
			return 0;
		case 26:
			uParam1->f_1 = 2;
			uParam1->f_2 = 71;
			uParam1->f_3 = 0;
			uParam1->f_4 = 100f;
			uParam1->f_5 = { -138.7686f, -27.4923f, 95.0878f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 27:
			uParam1->f_1 = 2;
			uParam1->f_2 = 5;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { 2630.74f, -1226.25f, 52.3794f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 28:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 2;
				uParam1->f_2 = 8;
				uParam1->f_3 = 0;
				uParam1->f_4 = 1000f;
				uParam1->f_5 = { 3288.448f, -1318.004f, 41.7734f };
				uParam1->f_8 = 60f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 29:
			return 0;
		case 30:
			uParam1->f_1 = 2;
			uParam1->f_2 = 75;
			uParam1->f_3 = 0;
			uParam1->f_4 = 250f;
			uParam1->f_5 = { -327.6681f, -357.796f, 87.055f };
			uParam1->f_8 = -63f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 31:
			uParam1->f_1 = 2;
			uParam1->f_2 = 115;
			uParam1->f_3 = 0;
			uParam1->f_4 = 200f;
			uParam1->f_5 = { -5510.395f, -2913.764f, 0.6353f };
			uParam1->f_8 = 90f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 32:
			uParam1->f_1 = 2;
			uParam1->f_2 = 76;
			uParam1->f_3 = 0;
			uParam1->f_4 = 250f;
			uParam1->f_5 = { -304.5352f, 801.1352f, 117.9785f };
			uParam1->f_8 = 135f;
			uParam1->f_9 = 2.5f;
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1129(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if (func_56() != -1)
	{
		return -1;
	}
	if (Global_1899528->f_211)
	{
		return -1;
	}
	iVar2 = -1;
	if (uParam0->f_2 == -1)
	{
		return -1;
	}
	if (uParam0->f_2 != func_135())
	{
		return -1;
	}
	if (!func_1483(uParam0->f_1))
	{
		return -1;
	}
	if (func_1484(uParam0->f_2))
	{
		return -1;
	}
	iVar2 = func_1485(*uParam0);
	if (iVar2 == -1)
	{
		if (!func_1486(&iVar2))
		{
			return -1;
		}
	}
	func_1487(*uParam0, iVar2);
	bVar1 = func_1488(uParam0->f_1, 131072);
	func_1489(uParam0->f_1);
	iVar3 = func_1490(uParam0->f_1, *uParam0);
	(*Global_1392915)[iVar2 /*12*/] = *uParam0;
	((*Global_1392915)[iVar2 /*12*/])->f_1 = uParam0->f_1;
	((*Global_1392915)[iVar2 /*12*/])->f_2 = uParam0->f_2;
	((*Global_1392915)[iVar2 /*12*/])->f_3 = uParam0->f_3;
	((*Global_1392915)[iVar2 /*12*/])->f_4 = iVar3;
	((*Global_1392915)[iVar2 /*12*/])->f_5 = uParam0->f_9;
	((*Global_1392915)[iVar2 /*12*/])->f_6 = { uParam0->f_5 };
	((*Global_1392915)[iVar2 /*12*/])->f_9 = uParam0->f_8;
	((*Global_1392915)[iVar2 /*12*/])->f_10 = BUILTIN::FLOOR(uParam0->f_4);
	((*Global_1392915)[iVar2 /*12*/])->f_11 = iVar2;
	Global_1392915->f_121[iVar2 /*20*/] = 0;
	(Global_1392915->f_121[iVar2 /*20*/])->f_2 = bParam1;
	(Global_1392915->f_121[iVar2 /*20*/])->f_17 = iParam2;
	(Global_1392915->f_121[iVar2 /*20*/])->f_1 = 0;
	(Global_1392915->f_121[iVar2 /*20*/])->f_6 = 0;
	(Global_1392915->f_121[iVar2 /*20*/])->f_12 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_5);
	(Global_1392915->f_121[iVar2 /*20*/])->f_16 = 0;
	if ((Global_1392915->f_121[iVar2 /*20*/])->f_12 != 0)
	{
		(Global_1392915->f_121[iVar2 /*20*/])->f_9 = { INTERIOR::_0x2C9746D0CA15BE1C((Global_1392915->f_121[iVar2 /*20*/])->f_12) };
	}
	else
	{
		(Global_1392915->f_121[iVar2 /*20*/])->f_9 = { 0f, 0f, 0f };
	}
	if (bParam1)
	{
		func_1491(uParam0->f_1, 65536);
		if ((uParam0->f_1 == 1 || uParam0->f_1 == 2) || uParam0->f_1 == 0)
		{
			func_1491(uParam0->f_1, 2097152);
		}
	}
	if (bVar1)
	{
		func_1491(uParam0->f_1, 131072);
	}
	if (func_1492(iVar3) || (!func_477(iVar3) && func_506(0) != iVar3))
	{
		iVar0 = func_1493(iVar3);
		if (iVar0 == -1)
		{
			func_1494(iVar3);
		}
	}
	return iVar2;
}

int func_1130(int iParam0)
{
	if (func_56() != -1)
	{
		return 0;
	}
	if (!func_499(iParam0))
	{
		return 0;
	}
	return func_676(((*Global_1347702)[iParam0 /*49*/])->f_15);
}

void func_1131(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_1495(func_573(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

int func_1132(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (iParam0 == -15 || iParam0 == 0)
	{
		return 0;
	}
	iVar0 = func_1040(iParam0);
	switch (func_1039(iParam0))
	{
		case 0:
			iVar1 = 11;
			break;
		case 1:
			iVar1 = 12;
			break;
		case 2:
			iVar1 = 1;
			break;
		case 3:
			iVar1 = 2;
			break;
		case 4:
			iVar1 = 3;
			break;
		case 5:
			iVar1 = 4;
			break;
		case 6:
			iVar1 = 5;
			break;
		case 7:
			iVar1 = 6;
			break;
		case 8:
			iVar1 = 7;
			break;
		case 9:
			iVar1 = 8;
			break;
		case 10:
			iVar1 = 9;
			break;
		case 11:
			iVar1 = 10;
			break;
	}
	iVar2 = func_1038(iParam0);
	iVar3 = (iVar2 % 100);
	iVar4 = (iVar2 / 100);
	iVar5 = (((((iVar0 + (((13 * iVar1) - 1) / 5)) + iVar3) + (iVar3 / 4)) + (iVar4 / 4)) - (2 * iVar4));
	iVar6 = (iVar5 % 7);
	if (iVar6 < 0)
	{
		iVar6 += 7;
	}
	switch (iVar6)
	{
		case 0:
			iVar7 = 0;
			break;
		case 1:
			iVar7 = 1;
			break;
		case 2:
			iVar7 = 2;
			break;
		case 3:
			iVar7 = 3;
			break;
		case 4:
			iVar7 = 4;
			break;
		case 5:
			iVar7 = 5;
			break;
		case 6:
			iVar7 = 6;
			break;
	}
	return iVar7;
}

void func_1133(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (!MISC::IS_BIT_SET(Global_40.f_4283.f_408, iVar0))
		{
		}
		else
		{
			uParam0->f_1630++;
			if (((*uParam1)[iVar0 /*8*/])->f_1 == 8)
			{
				uParam0->f_1630.f_1++;
			}
			if (((*uParam1)[iVar0 /*8*/])->f_1 == 6)
			{
				uParam0->f_1630.f_3++;
				Global_40.f_4283.f_408.f_3 = (Global_40.f_4283.f_408.f_3 + 0.25f);
			}
			if (((*uParam1)[iVar0 /*8*/])->f_1 == 5)
			{
				uParam0->f_1630.f_2++;
				Global_40.f_4283.f_408.f_2 = (Global_40.f_4283.f_408.f_2 + 0.25f);
			}
			if (((*uParam1)[iVar0 /*8*/])->f_1 == 4)
			{
				uParam0->f_1630.f_4++;
			}
			((*uParam1)[iVar0 /*8*/])->f_2 = 6;
		}
		iVar0++;
	}
	if ((uParam0->f_1630.f_2 > 0 || uParam0->f_1630.f_3 > 0) && !func_692(262144))
	{
		func_719(&(uParam0->f_1598), 524288);
	}
	if (uParam0->f_1630.f_2 >= 2)
	{
		func_719(&(uParam0->f_1598), 1048576);
	}
	if (uParam0->f_1630.f_3 >= 2)
	{
		func_719(&(uParam0->f_1598), 2097152);
	}
	if (Global_40.f_4283.f_408.f_5 >= 2)
	{
		func_719(&(uParam0->f_1598), 256);
		func_50(268435456);
	}
	if (Global_40.f_4283.f_408.f_6)
	{
		func_50(134217728);
		func_1137(3, 1);
	}
}

void func_1134(var uParam0)
{
	int iVar0;
	vector3 vVar1;

	uParam0->f_1630 = 0;
	uParam0->f_1630.f_1 = 0;
	uParam0->f_1598 = 0;
	Global_40.f_4283.f_408.f_6 = 0;
	Global_40.f_4283.f_408.f_5 = 0;
	Global_40.f_4283.f_408 = 0;
	func_933(262144);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_1619[iVar0])))
		{
			OBJECT::DELETE_OBJECT(uParam0->f_1619[iVar0]);
		}
		iVar0++;
	}
	vVar1 = -1;
	vVar1.f_1 = -1;
	vVar1.f_2 = -1;
	Global_1899848->f_3 = MISC::GET_RANDOM_INT_IN_RANGE(4, 6);
	func_1128(3, &vVar1, 1);
	func_1129(&vVar1, 1, 1);
	func_1137(21, 1);
}

void func_1135(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_1122((*uParam0)[iVar0 /*8*/]);
		iVar0++;
	}
}

void func_1136(var uParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		vVar1 = { func_1163((*uParam0)[iVar0 /*8*/]) };
		if (!func_213(vVar1))
		{
			TASK::_0x4161648394262FDF(vVar1, 0.05f);
		}
		iVar0++;
	}
}

int func_1137(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_1485(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	func_1496(iParam0, 1);
	func_1497(iVar0);
	if (bParam1)
	{
		func_1498(Global_1899778, iVar0);
	}
	func_1499(iVar0);
	return 1;
}

void func_1138(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	iVar0 = 0;
	iVar1 = 0;
	if (func_717(uParam0->f_1598, 32))
	{
		return;
	}
	func_1126(1);
	if (!func_717(uParam0->f_1598, 1))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("BCH_BASE_CHORES", true);
		func_1127(&iVar0, 331);
		func_719(&(uParam0->f_1598), 1);
	}
	if (func_717(uParam0->f_1598, 128) && !func_717(uParam0->f_1598, 8))
	{
		vVar2 = -1;
		vVar2.f_1 = -1;
		vVar2.f_2 = -1;
		func_1128(21, &vVar2, 1);
		func_1129(&vVar2, 1, 1);
		func_719(&(uParam0->f_1598), 8);
	}
	else if (!func_717(uParam0->f_1598, 128) && func_717(uParam0->f_1598, 8))
	{
		func_1137(21, 1);
		func_724(&(uParam0->f_1598), 8);
	}
	if (func_717(uParam0->f_1598, 256) && !func_717(uParam0->f_1598, 16))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("BCH_GATHER_MILK_CHORES", true);
		func_1127(&iVar0, 16);
		func_719(&(uParam0->f_1598), 16);
	}
	else if (!func_717(uParam0->f_1598, 256) && func_717(uParam0->f_1598, 16))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("BCH_GATHER_MILK_CHORES", false);
		func_1127(&iVar1, 16);
		func_724(&(uParam0->f_1598), 16);
	}
	if (func_717(uParam0->f_1598, 512) && !func_717(uParam0->f_1598, 2))
	{
		func_1127(&iVar0, 16384);
		func_719(&(uParam0->f_1598), 2);
	}
	else if (!func_717(uParam0->f_1598, 512) && func_717(uParam0->f_1598, 2))
	{
		func_1127(&iVar1, 16384);
		func_724(&(uParam0->f_1598), 2);
	}
	if (func_717(uParam0->f_1598, 64) && !func_717(uParam0->f_1598, 4))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("BCH_GATHER_EGGS_CHORES", true);
		func_1127(&iVar0, 32);
		func_719(&(uParam0->f_1598), 4);
	}
	else if (!func_717(uParam0->f_1598, 64) && func_717(uParam0->f_1598, 4))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("BCH_GATHER_EGGS_CHORES", false);
		func_1127(&iVar1, 32);
		func_724(&(uParam0->f_1598), 4);
	}
	if (iVar0 != 0)
	{
		func_1123(uParam1, iVar0, 1);
	}
	if (iVar1 != 0)
	{
		func_1123(uParam1, iVar1, 0);
	}
}

int func_1139(var uParam0, int iParam1)
{
	if (uParam0->f_2 > 0 && !func_717(uParam0->f_3, iParam1))
	{
		return 1;
	}
	if (!func_717(uParam0->f_3, iParam1))
	{
	}
	return 0;
}

void func_1140(var uParam0, var uParam1, vector3 vParam2, int iParam5, int iParam6, int iParam7, int iParam8)
{
	bool bVar0;
	vector3 vVar1;

	bVar0 = false;
	if (!func_213(uParam0->f_1606) && iParam8)
	{
		if (func_702(uParam0->f_1606, vParam2) < 16f)
		{
			bVar0 = true;
		}
		else
		{
			uParam0->f_1606 = { vParam2 };
			uParam0->f_1609 = iParam5;
		}
	}
	else
	{
		uParam0->f_1606 = { vParam2 };
		uParam0->f_1609 = iParam5;
	}
	if (!bVar0)
	{
		if (MAP::DOES_BLIP_EXIST(((*uParam1)[uParam0->f_1609 /*8*/])->f_4))
		{
			MAP::REMOVE_BLIP(&(((*uParam1)[uParam0->f_1609 /*8*/])->f_4));
		}
		((*uParam1)[iParam5 /*8*/])->f_4 = MAP::_0x554D9D53F696D002(iParam6, vParam2);
		MAP::SET_BLIP_SPRITE(((*uParam1)[iParam5 /*8*/])->f_4, iParam7, false);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(((*uParam1)[iParam5 /*8*/])->f_4, "BLIP_CAMP_CHORE");
		func_701(((*uParam1)[iParam5 /*8*/])->f_4, func_269());
	}
	else
	{
		vVar1 = { func_1500(vParam2, uParam0->f_1606) };
		if (MAP::DOES_BLIP_EXIST(((*uParam1)[uParam0->f_1609 /*8*/])->f_4))
		{
			MAP::REMOVE_BLIP(&(((*uParam1)[uParam0->f_1609 /*8*/])->f_4));
		}
		((*uParam1)[uParam0->f_1609 /*8*/])->f_4 = MAP::_0x554D9D53F696D002(iParam6, vVar1);
		MAP::SET_BLIP_SPRITE(((*uParam1)[uParam0->f_1609 /*8*/])->f_4, iParam7, false);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(((*uParam1)[uParam0->f_1609 /*8*/])->f_4, "BLIP_CAMP_CHORE");
		func_701(((*uParam1)[uParam0->f_1609 /*8*/])->f_4, func_269());
	}
}

int func_1141(var uParam0)
{
	if (func_148() == 8)
	{
		return 1560611276;
	}
	return -674883803;
}

int func_1142(int iParam0)
{
	if (func_148() == 8)
	{
		switch (iParam0)
		{
			case 3:
			case 4:
			case 5:
			case 6:
			case 8:
			case 9:
			case 14:
				return 1321928545;
			default:
				break;
		}
	}
	return 1321928545;
}

float func_1143(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 7:
			return 0.5f;
		case 10:
			return 0.05f;
		default:
			break;
	}
	return 0.05f;
}

int func_1144(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 1:
		case 9:
		case 14:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_1145(var uParam0, var uParam1)
{
	vector3 vVar0;
	int iVar3;

	if (uParam1->f_2 == 2)
	{
		vVar0 = { func_1120(uParam1) };
		switch (uParam0->f_1641)
		{
			case 0:
				iVar3 = func_1118(1);
				break;
			case 1:
				iVar3 = func_1118(7);
				break;
			case 2:
				iVar3 = func_1118(9);
				break;
		}
		if (PED::_0x34D6AC1157C8226C(iVar3, -1322841316))
		{
			uParam0->f_1617 = 1;
			uParam1->f_2 = 6;
			if (MAP::DOES_BLIP_EXIST(uParam1->f_4))
			{
				MAP::REMOVE_BLIP(&(uParam1->f_4));
			}
		}
		else if (PED::_0x34D6AC1157C8226C(iVar3, 2012005894))
		{
			uParam0->f_1617 = 1;
			if (MAP::DOES_BLIP_EXIST(uParam1->f_4))
			{
				MAP::REMOVE_BLIP(&(uParam1->f_4));
			}
		}
		else if (PED::_0x34D6AC1157C8226C(iVar3, -772874922) && func_702(ENTITY::GET_ENTITY_COORDS(iVar3, true, false), vVar0) < 1f)
		{
			if (MAP::DOES_BLIP_EXIST(uParam1->f_4))
			{
				MAP::REMOVE_BLIP(&(uParam1->f_4));
			}
		}
		else if (!uParam0->f_1617)
		{
			uParam0->f_1617 = 0;
			if (!MAP::DOES_BLIP_EXIST(uParam1->f_4))
			{
				uParam1->f_4 = MAP::_0x554D9D53F696D002(-674883803, vVar0);
				MAP::SET_BLIP_SPRITE(uParam1->f_4, 1321928545, false);
			}
		}
		uParam0->f_1641++;
		if (uParam0->f_1641 > 2)
		{
			uParam0->f_1641 = 0;
		}
		if (func_1501(52) && func_1502(52) < 7)
		{
			if (MAP::DOES_BLIP_EXIST(uParam1->f_4))
			{
				MAP::REMOVE_BLIP(&(uParam1->f_4));
			}
		}
		else if (!uParam0->f_1617)
		{
			if (!MAP::DOES_BLIP_EXIST(uParam1->f_4))
			{
				uParam1->f_4 = MAP::_0x554D9D53F696D002(-674883803, vVar0);
				MAP::SET_BLIP_SPRITE(uParam1->f_4, 1321928545, false);
			}
			if (!TASK::IS_SCENARIO_GROUP_ENABLED("PLAYER_CAMP_CHORES_WOOD_CHOP"))
			{
				TASK::SET_SCENARIO_GROUP_ENABLED("PLAYER_CAMP_CHORES_WOOD_CHOP", true);
			}
		}
	}
}

void func_1146(var uParam0, var uParam1)
{
	if (func_692(262144))
	{
		return;
	}
	if (!func_717(uParam0->f_1598, 8192) && !func_717(uParam0->f_1598, 2))
	{
		if (func_702(Global_36, func_1503(8)) <= 3f && _NAMESPACE71::_0xC17F69E1418CD11F(1) == 0)
		{
			func_319("CAMP_CHORE_FEED_LOCKED_MESSAGE", 10000, 0, 0, 0, 1);
			func_719(&(uParam0->f_1598), 8192);
		}
	}
	if ((!func_717(uParam0->f_1598, 32768) && func_717(uParam0->f_1598, 2)) && !func_717(uParam0->f_1598, 4))
	{
		if (func_702(Global_36, func_1503(6)) <= 3f && _NAMESPACE71::_0xC17F69E1418CD11F(1) == 0)
		{
			func_319("CAMP_CHORE_EGGS_LOCKED_MESSAGE", 10000, 0, 0, 0, 1);
			func_719(&(uParam0->f_1598), 32768);
		}
	}
	if (!func_717(uParam0->f_1598, 16384) && !func_717(uParam0->f_1598, 8))
	{
		if (func_702(Global_36, -1603.485f, -1414.838f, 81.1f) <= 3f && _NAMESPACE71::_0xC17F69E1418CD11F(1) == 0)
		{
			func_319("CAMP_CHORE_COW_LOCKED_MESSAGE", 10000, 0, 0, 0, 1);
			func_719(&(uParam0->f_1598), 16384);
		}
	}
	if ((!func_717(uParam0->f_1598, 65536) && !Global_40.f_4283.f_408.f_6) && !func_717(uParam0->f_1598, 16))
	{
		if (func_702(Global_36, func_1503(5)) <= 3f && _NAMESPACE71::_0xC17F69E1418CD11F(1) == 0)
		{
			func_319("CAMP_CHORE_MILK_LOCKED_MESSAGE", 10000, 0, 0, 0, 1);
			func_719(&(uParam0->f_1598), 65536);
		}
	}
}

float func_1147(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 7:
			return 0.75f;
		case 9:
			return 0.25f;
		case 8:
			return 0.05f;
		case 14:
			return 0.45f;
		default:
			break;
	}
	return 0.05f;
}

void func_1148(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (uParam1->f_1 == ((*uParam0)[iVar0 /*8*/])->f_1 && &uParam1->f_5[0] == &((*uParam0)[iVar0 /*8*/])->f_5[0])
		{
			func_719(&(((*uParam0)[iVar0 /*8*/])->f_3), 1);
		}
		iVar0++;
	}
}

void func_1149(int iParam0)
{
	int iVar0;

	if (Global_1899528->f_213 == 0 && iParam0 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_36307)
	{
		if (func_1480(func_1479(iVar0)))
		{
			if (!func_1481(iVar0) == -1)
			{
				if (func_1482(iVar0) != 0)
				{
					if (MAP::DOES_BLIP_EXIST(&(Global_36307[iVar0])))
					{
						if (MAP::_0x662D364ABF16DE2F(&(Global_36307[iVar0]), -1186550032))
						{
						}
					}
				}
			}
		}
		iVar0++;
	}
	Global_1899528->f_213 = 0;
}

int func_1150(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 2:
		case 3:
		case 8:
		case 10:
			return 0;
		default:
			break;
	}
	return 1;
}

void func_1151()
{
	if (func_1504())
	{
		_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
	}
}

void func_1152(int iParam0)
{
	if (!func_1478(iParam0))
	{
		Global_1392040 = (Global_1392040 || iParam0);
	}
}

void func_1153(var uParam0, var uParam1)
{
	func_1119(func_1505(&(uParam0->f_1582)), 7500, 0, 1, 0, 0, -1, -1, 0);
	uParam0->f_1582 = -1054146539;
	uParam0->f_1582.f_2 = 4;
	uParam0->f_1581 = 6;
}

void func_1154(var uParam0, var uParam1)
{
	func_1119(func_1505(&(uParam0->f_1582)), 7500, 0, 1, 0, 0, -1, -1, 0);
	uParam0->f_1582 = 1530128623;
	uParam0->f_1582.f_2 = 4;
	uParam0->f_1581 = 6;
}

void func_1155(var uParam0, var uParam1)
{
	bool bVar0;

	bVar0 = PED::IS_PED_USING_ANY_SCENARIO(Global_35);
	if (!func_211(uParam0->f_1610) && !bVar0)
	{
		uParam0->f_1610 = func_737("EXIT_CHORE", 992265328, Global_35, 0, 0, 0, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
		func_722(func_583(uParam0->f_1610), 0);
	}
	if (bVar0 && func_251(uParam0->f_1610, 1))
	{
		func_722(func_583(uParam0->f_1610), 0);
		PAD::DISABLE_CONTROL_ACTION(0, 992265328, false);
	}
	else if (!bVar0 && !func_251(uParam0->f_1610, 1))
	{
		func_722(func_583(uParam0->f_1610), 1);
	}
	else if (!func_251(uParam0->f_1610, 1))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 992265328, false);
	}
	switch (uParam0->f_1582)
	{
		case 1442242084:
			if (func_148() == 1)
			{
				if (TASK::_0x0C3CB2E600C8977D(Global_35, 1))
				{
					func_1119(func_1505(&(uParam0->f_1582)), 7500, 0, 1, 0, 0, -1, -1, 0);
					uParam0->f_1582.f_2 = 4;
					uParam0->f_1581 = 8;
				}
			}
			else if (TASK::_0x0C3CB2E600C8977D(Global_35, 1))
			{
				func_1119("FINISH_CAMP_CHORE_WATER_PART_1", 7500, 0, 1, 0, 0, -1, -1, 0);
				uParam0->f_1582 = 122300240;
				if (MAP::DOES_BLIP_EXIST(uParam0->f_1582.f_4))
				{
					MAP::REMOVE_BLIP(&(uParam0->f_1582.f_4));
				}
				uParam0->f_1582.f_4 = MAP::_0x554D9D53F696D002(408396114, func_1506());
				MAP::SET_BLIP_SPRITE(uParam0->f_1590.f_4, -570710357, false);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_1590.f_4, "BLIP_CAMP_CHORE");
			}
			break;
		case -1239305634:
			if (TASK::_0x0C3CB2E600C8977D(Global_35, 1))
			{
				func_1119(func_1505(&(uParam0->f_1582)), 7500, 0, 1, 0, 0, -1, -1, 0);
				uParam0->f_1582 = 122300240;
				if (MAP::DOES_BLIP_EXIST(uParam0->f_1582.f_4))
				{
					MAP::REMOVE_BLIP(&(uParam0->f_1582.f_4));
				}
				uParam0->f_1582.f_4 = MAP::_0x554D9D53F696D002(408396114, func_1506());
				MAP::SET_BLIP_SPRITE(uParam0->f_1590.f_4, -570710357, false);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_1590.f_4, "BLIP_CAMP_CHORE");
			}
			break;
		case 122300240:
			if (TASK::_0x0C3CB2E600C8977D(Global_35, 1) && PED::_0x34D6AC1157C8226C(Global_35, 122300240))
			{
				func_1119("FINISH_CAMP_CHORE_WATER_PART_2", 7500, 0, 1, 0, 0, -1, -1, 0);
				uParam0->f_1582.f_2 = 4;
				uParam0->f_1581 = 8;
				if (MAP::DOES_BLIP_EXIST(uParam0->f_1582.f_4))
				{
					MAP::REMOVE_BLIP(&(uParam0->f_1582.f_4));
				}
			}
			break;
	}
}

void func_1156(var uParam0, var uParam1)
{
	if (TASK::_0x0C3CB2E600C8977D(Global_35, 1))
	{
		func_1119(func_1505(&(uParam0->f_1582)), 7500, 0, 1, 0, 0, -1, -1, 0);
		uParam0->f_1582.f_2 = 4;
		uParam0->f_1581 = 8;
	}
}

void func_1157(var uParam0, var uParam1)
{
	func_1119(func_1505(&(uParam0->f_1582)), 7500, 0, 1, 0, 0, -1, -1, 0);
	uParam0->f_1582 = -1303868905;
	uParam0->f_1582.f_2 = 4;
	uParam0->f_1581 = 6;
}

void func_1158(var uParam0, var uParam1)
{
	func_1119(func_1505(&(uParam0->f_1582)), 7500, 0, 1, 0, 0, -1, -1, 0);
	uParam0->f_1582 = 1370907804;
	uParam0->f_1582.f_2 = 4;
	uParam0->f_1581 = 6;
}

void func_1159(var uParam0, var uParam1)
{
	PAD::DISABLE_CONTROL_ACTION(0, -124244224, false);
	CAM::_0x05AB44D906738426();
	if (TASK::_0x0C3CB2E600C8977D(Global_35, 1))
	{
		uParam0->f_1582.f_2 = 4;
		if (func_211(uParam0->f_1610))
		{
			func_212(&(uParam0->f_1610), 1, 1);
		}
		uParam0->f_1581 = 8;
		return;
	}
}

void func_1160(var uParam0, var uParam1)
{
	if (TASK::_0x0C3CB2E600C8977D(Global_35, 1))
	{
		uParam0->f_1582.f_2 = 4;
		uParam0->f_1581 = 8;
	}
}

void func_1161(var uParam0, var uParam1)
{
	if (TASK::_0x0C3CB2E600C8977D(Global_35, 1))
	{
		func_1119(func_1505(&(uParam0->f_1582)), 7500, 0, 1, 0, 0, -1, -1, 0);
		uParam0->f_1582.f_2 = 4;
		uParam0->f_1581 = 8;
	}
}

void func_1162(var uParam0, var uParam1)
{
	if (TASK::_0x0C3CB2E600C8977D(Global_35, 1))
	{
		uParam0->f_1582.f_2 = 5;
		uParam0->f_1581 = 8;
	}
}

Vector3 func_1163(var uParam0)
{
	switch (func_148())
	{
		case 8:
			return func_1507(uParam0);
		case 1:
			return func_1508(uParam0);
		case 3:
			return func_1509(uParam0);
		case 6:
			return func_1510(uParam0);
		case 2:
			return func_1511(uParam0);
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_1164(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 0:
		case 4:
		case 6:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1165(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 0:
			return 1530128623;
		case 4:
			return -1054146539;
		case 2:
		case 3:
		case 10:
			return 889687128;
		case 6:
			return 1824659383;
		case 5:
			return -921539205;
		case 1:
		case 9:
			return 889687128;
		case 8:
			return -1750328455;
		case 14:
			return 1051161193;
		default:
			break;
	}
	return 0;
}

void func_1166(int iParam0)
{
	int iVar0;
	float fVar1;

	if (func_56() != -1)
	{
		return;
	}
	iVar0 = func_1512(iParam0);
	fVar1 = func_1513(iParam0);
	if ((Global_1347477->f_117 || !func_753(31)) || !func_1514(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_1515(iVar0) >= 7)
	{
		return;
	}
	if (iVar0 == 1)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_57));
	}
	else if (iVar0 == 0)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_55));
	}
	else if (iVar0 == 2)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_56));
	}
	fVar1 = (fVar1 * IntToFloat(Global_1347477->f_182));
	fVar1 = BUILTIN::TO_FLOAT(BUILTIN::ROUND(fVar1));
	func_1516(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_1273(MISC::_CREATE_VAR_STRING(6, func_1517(iParam0), fVar1), "itemtype_textures", func_1518(iVar0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

int func_1167(int iParam0)
{
	switch (func_148())
	{
		case 8:
			return func_1519(iParam0);
		default:
			break;
	}
	return 1;
}

void func_1168(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (((*uParam2)[iVar0 /*8*/])->f_1 != uParam1->f_1)
		{
		}
		else if (((*uParam2)[iVar0 /*8*/])->f_2 != -1 && ((*uParam2)[iVar0 /*8*/])->f_2 != -3)
		{
			if (func_702(uParam0->f_1600, func_1163((*uParam2)[iVar0 /*8*/])) < func_1147((*uParam2)[iVar0 /*8*/]))
			{
				func_719(&(((*uParam2)[iVar0 /*8*/])->f_3), 2);
				return;
			}
		}
		iVar0++;
	}
}

int func_1169(float fParam0)
{
	return BUILTIN::FLOOR((fParam0 / 0.25f));
}

void func_1170(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_1520(iParam0, sParam4, iParam5);
	}
	func_1521(iParam0, bParam1, fParam2, iParam3, iParam7);
}

Vector3 func_1171()
{
	switch (func_148())
	{
		case 2:
			return 681.63f, -1252.7f, 43.02f;
		case 3:
			return 1881.47f, -1859.8f, 41.81f;
		case 1:
			return -139.89f, -17.71f, 95.09f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_1172()
{
	switch (func_148())
	{
		case 2:
			return 71.322f;
		case 3:
			return 96.059f;
		case 1:
			return 142.428f;
		default:
			break;
	}
	return 0f;
}

void func_1173(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (func_1164(&(uParam0->f_1590)))
	{
		iVar0 = func_1165(&(uParam0->f_1590));
		if (iVar0 != 0)
		{
			iVar1 = TASK::_0xF533D68FF970D190(uParam0->f_1600, iVar0, 0.15f, 0, 1);
			if (!TASK::_0xEA31F199A73801D3(iVar1))
			{
				uParam0->f_1581 = 8;
				uParam0->f_1590.f_2 = 0;
				return;
			}
		}
	}
	MISC::SET_BIT(&(Global_40.f_4283.f_408), uParam0->f_1644);
	Global_40.f_4283.f_408.f_1 = func_573();
	func_721(uParam1);
	func_1122(&(uParam0->f_1590));
	if (uParam0->f_1644 != -1)
	{
		*((*uParam1)[uParam0->f_1644 /*8*/]) = { uParam0->f_1590 };
		((*uParam1)[uParam0->f_1644 /*8*/])->f_2 = 6;
		uParam0->f_1644 = -1;
	}
	func_725(uParam1);
	if (func_211(uParam0->f_1610))
	{
		func_212(&(uParam0->f_1610), 1, 1);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_1649))
	{
		VOLUME::_0x43F867EF5C463A53(uParam0->f_1649);
	}
	func_1126(1);
	func_1151();
	func_1124();
	func_1125(1073741824);
	func_171(func_136(func_135()), 2097152);
	func_171(func_136(func_135()), 2048);
	func_171(func_136(func_135()), 128);
	func_50(4);
	func_726(uParam0, uParam1);
	func_724(&(uParam0->f_1598), 32);
	PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 3, 2, 0);
	PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 4, 2, 0);
	PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
	uParam0->f_1642 = 0;
	uParam0->f_1581 = 2;
}

void func_1174(int iParam0, float fParam1, float fParam2, float fParam3)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		OBJECT::_0xF49574E2332A8F06(iParam0, fParam1);
		OBJECT::_0xC8E21C1677DC5E6F(iParam0, fParam2);
		OBJECT::_0xCBFBD38F2E0A263B(iParam0, fParam3);
	}
}

int func_1175(int iParam0)
{
	vector3 vVar0;

	if (!func_983(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_1176(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_983(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_1175(iParam0);
	if (iVar0 == -427144552 && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_0x5C2EA6C44F515F34(iParam0);
	}
	else if (iVar0 == 307971639 && WEAPON::_0x1F7977C9101F807F(iParam0))
	{
		return iParam0;
	}
	if (func_986(iParam0, 1399091007))
	{
		func_1522(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_1177(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_1072(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_1523(&Var0, func_1424(0));
	}
	if (!func_1073(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_1077(iVar14);
	return uVar15;
}

int func_1178(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_1179(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_40.f_7857[iVar1]), iVar2);
}

Vector3 func_1180()
{
	switch (func_148())
	{
		case 1:
			return -134.29f, -34.339f, 96.1221f;
		case 2:
			return 653.431f, -1257.437f, 43.7682f;
		case 3:
			return 1889.412f, -1866.691f, 47.403f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_1181(bool bParam0)
{
	if (bParam0)
	{
		if (((((Global_1357549->f_1672 == -774242862 || Global_1357549->f_1672 == -2100684454) || Global_1357549->f_1672 == -1167047117) || Global_1357549->f_1672 == 396444962) || Global_1357549->f_1672 == -498064062) || Global_1357549->f_1672 == 513694516)
		{
			return 1;
		}
	}
	if (func_513(((*Global_1347702)[61 /*49*/])->f_15, 1) || (func_676(((*Global_1347702)[61 /*49*/])->f_15) && func_38(16384)))
	{
		return 1;
	}
	return 0;
}

char* func_1182()
{
	switch (func_148())
	{
		case 1:
			return "script@camp_upgrade@horseshoe_overlook";
		case 2:
			return "script@camp_upgrade@clemens_cove";
		case 3:
			return "script@camp_upgrade@shady_bell";
		default:
			break;
	}
	return "";
}

char* func_1183(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pl_PEARSON_FOOD";
		case 1:
			return "pl_STRAUSS";
		case 2:
			return "pl_ARTHUR_AMMO";
		case 3:
			switch (func_384(10, 0))
			{
				case 2:
					return "pl_DUTCH_TENT";
				case 3:
					return "pl_ARTHUR_FT";
				case 4:
					return "pl_MISC_TENTS";
				default:
					break;
			}
			break;
		case 4:
			return "pl_BOAT";
		case 5:
			return "pl_CHICKEN_COOP";
		case 6:
			return "pl_PEARSON_TOOLS";
		case 7:
			return "pl_HITCHING_POST";
	}
	return "";
}

Vector3 func_1184()
{
	switch (func_148())
	{
		case 1:
			return 0f, 0f, -120.79f;
		case 2:
			return 0f, 0f, -71.11f;
		case 3:
			return 0f, 0f, 135f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_1185(var uParam0, var uParam1)
{
	switch (uParam0->f_20)
	{
		case 6:
			func_1524(uParam0);
			func_1525(&(uParam0->f_35));
			func_1526(uParam0, uParam1);
			func_1527(uParam0);
			break;
		default:
			func_1528(uParam0);
			func_1529(&(uParam0->f_35));
			func_1530(uParam0);
			func_1531(uParam0);
			break;
	}
}

void func_1186(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	if (uParam0->f_773 && uParam0->f_772)
	{
		if (!UIAPPS::_IS_APP_ACTIVE(1749944028))
		{
			UIAPPS::_LAUNCH_APP_BY_HASH_WITH_ENTRY(1749944028, -702860656);
		}
	}
	else if (UIAPPS::_IS_APP_ACTIVE(1749944028))
	{
		UIAPPS::_CLOSE_APP_BY_HASH(1749944028);
	}
}

int func_1187(int iParam0)
{
	int iVar0[1];
	int iVar2;

	iVar0[0] = joaat("pirogue");
	switch (iParam0)
	{
		case 0:
			iVar2 = 0;
			while (iVar2 < iVar0)
			{
				STREAMING::REQUEST_MODEL(&(iVar0[iVar2]), false);
				iVar2++;
			}
			break;
		case 1:
			iVar2 = 0;
			while (iVar2 < iVar0)
			{
				if (STREAMING::HAS_MODEL_LOADED(&(iVar0[iVar2])) == 0)
				{
					return 0;
				}
				iVar2++;
			}
			break;
		case 2:
			iVar2 = 0;
			while (iVar2 < iVar0)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(&(iVar0[iVar2]));
				iVar2++;
			}
			break;
	}
	return 1;
}

void func_1188(var uParam0, int iParam1)
{
	uParam0->f_773 = iParam1;
}

void func_1189(var uParam0, int iParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_INT(*uParam0, iParam1);
}

void func_1190(var uParam0)
{
	*uParam0 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(196480927);
}

void func_1191()
{
	AUDIO::_0xD9130842D7226045("Ledger_Sounds", 0);
}

void func_1192(int* iParam0, int iParam1)
{
	if (iParam0->f_20 != iParam1)
	{
		if (func_344(Global_35, 0))
		{
			switch (iParam1)
			{
				case 6:
				case 9:
				case 10:
				case 11:
				case 12:
				case 13:
				case 14:
				case 15:
					if (func_1532(&Global_35) && func_1533(-1406972469) == -1)
					{
						func_1534(-1406972469, Global_35, 0, 1);
					}
					break;
				default:
					func_1535(Global_35, -1406972469, 1);
					break;
			}
		}
	}
	iParam0->f_20 = iParam1;
}

bool func_1193(var uParam0)
{
	return UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(*uParam0);
}

bool func_1194()
{
	return AUDIO::_0xD9130842D7226045("Ledger_Sounds", 0);
}

void func_1195(var uParam0, var uParam1, var uParam2)
{
	func_1536((*uParam0)[0 /*118*/]);
	func_1536((*uParam0)[1 /*118*/]);
	func_1537(*uParam1, (*uParam0)[0 /*118*/]);
	func_1538(uParam1->f_1, &(((*uParam0)[0 /*118*/])->f_55), uParam2);
	func_1539(uParam1->f_2, &(((*uParam0)[0 /*118*/])->f_102), uParam2);
	func_1539(uParam1->f_3, &(((*uParam0)[0 /*118*/])->f_110), uParam2);
	func_1537(uParam1->f_4, (*uParam0)[1 /*118*/]);
	func_1538(uParam1->f_5, &(((*uParam0)[1 /*118*/])->f_55), uParam2);
	func_1539(uParam1->f_6, &(((*uParam0)[1 /*118*/])->f_102), uParam2);
	func_1539(uParam1->f_7, &(((*uParam0)[1 /*118*/])->f_110), uParam2);
}

int func_1196(struct<8> Param0, int iParam8, var uParam9, var uParam10)
{
	if (func_1540((*uParam9->f_1[iParam8 /*237*/])[0 /*118*/], uParam10))
	{
		switch (uParam10->f_4)
		{
			case 0:
				uParam10->f_1 = Param0.f_1;
				break;
			case 1:
				uParam10->f_1 = Param0.f_2;
				break;
			case 2:
				uParam10->f_1 = Param0.f_3;
				break;
		}
		uParam10->f_2 = iParam8;
		uParam10->f_3 = 0;
		*uParam10 = 1;
		return 1;
	}
	if (func_1540((*uParam9->f_1[iParam8 /*237*/])[1 /*118*/], uParam10))
	{
		switch (uParam10->f_4)
		{
			case 0:
				uParam10->f_1 = Param0.f_5;
				break;
			case 1:
				uParam10->f_1 = Param0.f_6;
				break;
			case 2:
				uParam10->f_1 = Param0.f_7;
				break;
		}
		uParam10->f_2 = iParam8;
		uParam10->f_3 = 1;
		*uParam10 = 1;
		return 1;
	}
	*uParam10 = 0;
	return 0;
}

void func_1197(var uParam0, int iParam1, vector3 vParam2, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31)
{
	int iVar0;
	int iVar1;

	iVar0 = func_1541(iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(*uParam0, vParam2.x);
	iVar1 = func_384(iVar0, 0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_1, MISC::_CREATE_VAR_STRING(0, (vParam2.f_2[iVar1 /*4*/])->f_2));
	if ((vParam2.f_2[iVar1 /*4*/])->f_3 > 0)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_2, MISC::_CREATE_VAR_STRING(2, "LDGR_INFO_PRICE"));
		DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_3, (vParam2.f_2[iVar1 /*4*/])->f_3 * 100);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_2, "");
	}
}

void func_1198(var uParam0, int iParam1, struct<25> Param2, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31)
{
	int iVar0;
	int iVar1;

	iVar0 = func_1541(iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(*uParam0, Param2);
	iVar1 = (func_384(iVar0, 0) - 1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_1, MISC::_CREATE_VAR_STRING(2, "RESUPPLY_INFO_PANEL"));
	if (&Param2.f_24[iVar1] > 0)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_2, MISC::_CREATE_VAR_STRING(2, "LDGR_INFO_PRICE"));
		DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_3, &Param2.f_24[iVar1] * 100);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_2, "");
		DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_3, 0);
	}
}

Vector3 func_1199(int iParam0)
{
	return ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 0f, -1.066f);
}

void func_1200(var uParam0)
{
	if (!UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(*uParam0))
	{
		return;
	}
	UISTATEMACHINE::_UIFLOWBLOCK_ENTER(*uParam0, 0);
	UISTATEMACHINE::_UISTATEMACHINE_CREATE(func_1542(), *uParam0);
}

void func_1201(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 20;
	iVar1 = 10;
	if (MISC::IS_PC_VERSION())
	{
		iVar0 = 10;
		iVar1 = 2;
	}
	func_1544(uParam0, func_1206(iParam1, bParam2), func_1543(iParam1), 55f, iVar0, iVar1, 0.001f, 15f, 0, 0, -1082130432, 1, 0, 1044549468);
	uParam0->f_11 = iParam3;
}

void func_1202(var uParam0, bool bParam1)
{
	uParam0->f_772 = 1;
	uParam0->f_774 = MISC::GET_GAME_TIMER() + 250;
	if (bParam1)
	{
		AUDIO::PLAY_SOUND_FRONTEND("INFO_SHOW", "Ledger_Sounds", true, 0);
	}
}

void func_1203(var uParam0)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	float fVar5;

	if (!CAM::DOES_CAM_EXIST(*uParam0))
	{
		return;
	}
	uParam0->f_29[2] = BUILTIN::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(1, -1450761377) * 127f));
	uParam0->f_29[3] = BUILTIN::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(1, -771458680) * 127f));
	if (PAD::IS_LOOK_INVERTED())
	{
		uParam0->f_29[3] = (&uParam0->f_29[3] * -1);
	}
	if (uParam0->f_34 == &uParam0->f_29[2] && uParam0->f_35 == &uParam0->f_29[3])
	{
		if (uParam0->f_37 < MISC::GET_GAME_TIMER())
		{
			uParam0->f_34 = 0;
			uParam0->f_35 = 0;
		}
	}
	else
	{
		uParam0->f_34 = &uParam0->f_29[2];
		uParam0->f_35 = &uParam0->f_29[3];
		uParam0->f_37 = MISC::GET_GAME_TIMER() + 4000;
	}
	uParam0->f_13.f_2 = (-(BUILTIN::TO_FLOAT(&(uParam0->f_29[2])) / 127f) * IntToFloat(uParam0->f_25));
	uParam0->f_13.f_1 = ((-uParam0->f_13.f_2 * uParam0->f_27) / IntToFloat(uParam0->f_25));
	if (PAD::IS_LOOK_INVERTED())
	{
		uParam0->f_13 = ((BUILTIN::TO_FLOAT(&(uParam0->f_29[3])) / 127f) * IntToFloat(uParam0->f_26));
	}
	else
	{
		uParam0->f_13 = (-(BUILTIN::TO_FLOAT(&(uParam0->f_29[3])) / 127f) * IntToFloat(uParam0->f_26));
	}
	fVar0 = (30f * BUILTIN::TIMESTEP());
	if (!func_1545(uParam0->f_1, uParam0->f_8))
	{
		uParam0->f_12 = (uParam0->f_12 + MISC::GET_FRAME_TIME());
		if (uParam0->f_12 > uParam0->f_11)
		{
			uParam0->f_12 = uParam0->f_11;
		}
		fVar1 = (uParam0->f_12 / uParam0->f_11);
		uParam0->f_1 = { func_1546(uParam0->f_1, uParam0->f_8, fVar1) };
	}
	vVar2 = { uParam0->f_13 + uParam0->f_16 };
	uParam0->f_19 = (uParam0->f_19 + func_1547((((vVar2.x - uParam0->f_19) * 0.05f) * fVar0), -3f, 3f));
	uParam0->f_19.f_1 = (uParam0->f_19.f_1 + func_1547((((vVar2.y - uParam0->f_19.f_1) * 0.05f) * fVar0), -3f, 3f));
	uParam0->f_19.f_2 = (uParam0->f_19.f_2 + func_1547((((vVar2.z - uParam0->f_19.f_2) * 0.05f) * fVar0), -3f, 3f));
	if (uParam0->f_36)
	{
		uParam0->f_19 = func_1547(uParam0->f_19, BUILTIN::TO_FLOAT(-uParam0->f_26), BUILTIN::TO_FLOAT(uParam0->f_26));
		uParam0->f_19.f_1 = func_1547(uParam0->f_19.f_1, -uParam0->f_27, uParam0->f_27);
		uParam0->f_19.f_2 = func_1547(uParam0->f_19.f_2, BUILTIN::TO_FLOAT(-uParam0->f_25), BUILTIN::TO_FLOAT(uParam0->f_25));
	}
	uParam0->f_22 = uParam0->f_7;
	fVar5 = PAD::GET_CONTROL_UNBOUND_NORMAL(0, 1395223413);
	if (fVar5 > 0f)
	{
		uParam0->f_22 = (uParam0->f_22 - IntToFloat(BUILTIN::ROUND((fVar5 * uParam0->f_24))));
	}
	uParam0->f_23 = (uParam0->f_23 + (((uParam0->f_22 - uParam0->f_23) * MISC::GET_FRAME_TIME()) * (2.5f / 0.65f)));
	CAM::SET_CAM_PARAMS(*uParam0, uParam0->f_1, uParam0->f_4 + uParam0->f_19, uParam0->f_23, 0, 1, 1, 2, 1, 0);
}

bool func_1204(int* iParam0)
{
	return !func_1545(iParam0->f_816.f_1, iParam0->f_816.f_8);
}

int func_1205(int* iParam0)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { CAM::GET_CAM_COORD(iParam0->f_816) };
	vVar3 = { func_1206(func_148(), 1) };
	if (vVar0.z == vVar3.z)
	{
		return 1;
	}
	return 0;
}

Vector3 func_1206(int iParam0, bool bParam1)
{
	vector3 vVar0;

	if (bParam1)
	{
		switch (iParam0)
		{
			case 1:
				vVar0 = { -134.6045f, -34.2293f, 96.5638f };
				break;
			case 2:
				vVar0 = { 653.1854f, -1257.589f, 44.2421f };
				break;
			case 3:
				vVar0 = { 1889.572f, -1866.438f, 47.8536f };
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1:
				vVar0 = { -134.6193f, -34.3059f, 96.5245f };
				break;
			case 2:
				vVar0 = { 653.2174f, -1257.633f, 44.1706f };
				break;
			case 3:
				vVar0 = { 1889.519f, -1866.399f, 47.8054f };
				break;
		}
	}
	return vVar0;
}

void func_1207(var uParam0, vector3 vParam1, bool bParam4)
{
	if (!bParam4)
	{
		uParam0->f_1 = { vParam1 };
	}
	uParam0->f_8 = { vParam1 };
	uParam0->f_12 = 0f;
}

void func_1208(int* iParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	if (MISC::GET_GAME_TIMER() < iParam0->f_19)
	{
		return;
	}
	bVar0 = false;
	if (PAD::IS_CONTROL_JUST_PRESSED(2, -1860390754) || PAD::IS_CONTROL_JUST_PRESSED(2, -1666616423))
	{
		bVar0 = true;
		iVar1 = 0;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 1141111167) || PAD::IS_CONTROL_JUST_PRESSED(2, 1669958966))
	{
		bVar0 = true;
		iVar1 = 1;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2, -1384133541) || PAD::IS_CONTROL_JUST_PRESSED(2, 113281492))
	{
		bVar0 = true;
		iVar1 = 2;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 1710877787) || PAD::IS_CONTROL_JUST_PRESSED(2, 1541138497))
	{
		bVar0 = true;
		iVar1 = 3;
	}
	if (PAD::IS_CONTROL_JUST_RELEASED(2, 1138488863))
	{
		iParam0->f_860 = 1;
	}
	if (bVar0)
	{
		if (func_1548(iVar1, &(iParam0->f_35.f_491), *(iParam0->f_35.f_498[Global_1357549->f_1894 /*8*/]), iParam0->f_35.f_2.f_1[iParam0->f_35.f_491.f_2 /*237*/]))
		{
			if (iParam0->f_35.f_491.f_1 != -1)
			{
				if (iParam0->f_35.f_491.f_5)
				{
					func_1197(&(iParam0->f_35.f_2.f_476), iParam0->f_35.f_491.f_1, *(iParam0->f_35.f_531[iParam0->f_35.f_491.f_1 /*30*/]));
				}
				else
				{
					func_1198(&(iParam0->f_35.f_2.f_476), iParam0->f_35.f_491.f_1, *(iParam0->f_35.f_531[iParam0->f_35.f_491.f_1 /*30*/]));
				}
			}
			if (Global_1357549->f_1894 > 0)
			{
				func_1549(iVar1);
			}
			iParam0->f_19 = MISC::GET_GAME_TIMER() + 250;
		}
	}
	if (func_219(iParam0->f_10, 1))
	{
		bVar2 = false;
		if (iParam0->f_35.f_491.f_5)
		{
			switch (iParam0->f_35.f_491.f_1)
			{
				case 1:
					func_1550(iParam0, 1, 4, 1, &bVar2);
					if (bVar2)
					{
						func_1551(0);
					}
					break;
				case 0:
					func_1550(iParam0, 0, 3, 1, &bVar2);
					if (bVar2)
					{
						func_1551(1);
					}
					break;
				case 2:
					func_1550(iParam0, 2, 5, 1, &bVar2);
					if (bVar2)
					{
						func_1551(2);
					}
					break;
				case 3:
					func_1550(iParam0, 3, 10, 1, &bVar2);
					break;
				case 4:
					if (func_148() == 2 || func_148() == 3)
					{
						func_1550(iParam0, 4, 13, 3, &bVar2);
					}
					break;
				case 5:
					func_1550(iParam0, 5, 0, 3, &bVar2);
					break;
				case 7:
					func_1550(iParam0, 7, 14, 1, &bVar2);
					break;
				case 6:
					func_1550(iParam0, 6, 12, 3, &bVar2);
					break;
			}
		}
		else
		{
			switch (iParam0->f_35.f_491.f_1)
			{
				case 1:
					func_1552(iParam0, 1, 4, &bVar2);
					break;
				case 0:
					func_1552(iParam0, 0, 3, &bVar2);
					break;
				case 2:
					func_1552(iParam0, 2, 5, &bVar2);
					break;
				default:
					break;
			}
		}
		if (bVar2)
		{
			if (iParam0->f_860)
			{
				func_1553();
				iParam0->f_860 = 0;
			}
			iParam0->f_19 = MISC::GET_GAME_TIMER() + 250;
		}
		else if (iParam0->f_860)
		{
			func_1554();
			iParam0->f_860 = 0;
		}
	}
}

void func_1209(var uParam0, bool bParam1)
{
	if (MISC::GET_GAME_TIMER() > uParam0->f_774)
	{
		if (uParam0->f_772)
		{
			func_1213(uParam0, bParam1);
		}
		else
		{
			func_1202(uParam0, bParam1);
		}
	}
}

void func_1210(var uParam0)
{
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		if (CAM::IS_CAM_ACTIVE(*uParam0))
		{
			CAM::SET_CAM_ACTIVE(*uParam0, false);
		}
		CAM::DESTROY_CAM(*uParam0, false);
	}
	if (uParam0->f_28)
	{
		MAP::UNLOCK_MINIMAP_ANGLE();
		uParam0->f_28 = 0;
	}
	uParam0->f_1 = { 0f, 0f, 0f };
	uParam0->f_4 = { 0f, 0f, 0f };
	uParam0->f_7 = 0f;
	uParam0->f_25 = 0;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0f;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = 0f;
	uParam0->f_12 = 0f;
	uParam0->f_13 = { 0f, 0f, 0f };
	uParam0->f_16 = { 0f, 0f, 0f };
	uParam0->f_19 = { 0f, 0f, 0f };
	uParam0->f_22 = 0f;
	uParam0->f_23 = 0f;
}

void func_1211()
{
	AUDIO::PLAY_SOUND_FRONTEND("upgrade_cam_pan", "Ledger_Sounds", true, 0);
}

int func_1212(int* iParam0, bool bParam1)
{
	if (func_676(((*Global_1347702)[61 /*49*/])->f_15))
	{
		if (bParam1)
		{
			if (func_156() < iParam0->f_5)
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_1213(var uParam0, bool bParam1)
{
	uParam0->f_772 = 0;
	uParam0->f_774 = MISC::GET_GAME_TIMER() + 250;
	if (bParam1)
	{
		AUDIO::PLAY_SOUND_FRONTEND("INFO_HIDE", "Ledger_Sounds", true, 0);
	}
}

int func_1214(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

Vector3 func_1215(int iParam0)
{
	return (Global_1327590->f_11465[iParam0 /*10*/])->f_1;
}

int func_1216(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 1;
	iVar1 = func_1555();
	if (ENTITY::DOES_ENTITY_EXIST(func_179(iVar1)) == 0)
	{
		func_1217("Camp Butcher: companion does not exist (check if he's locked)", uParam0);
		iVar0 = 0;
	}
	if (func_357(iVar1))
	{
		if (((((func_184(iVar1) == 0 && func_178(iVar1, 8) == 0) && func_178(iVar1, 16) == 0) && func_178(iVar1, 32) == 0) && func_178(iVar1, 2) == 0) && func_178(iVar1, 2048) == 0)
		{
			if (func_178(iVar1, -2147483648) && func_12(33554432) == 0)
			{
				func_1217("Camp Butcher: stolen (mission critical)", uParam0);
				iVar0 = 0;
			}
			else
			{
				func_1217("Camp Butcher: stolen", uParam0);
				iVar0 = 0;
			}
		}
	}
	iVar2 = 0;
	while (iVar2 < Global_1327590->f_19547)
	{
		if ((Global_1327590->f_19547[iVar2 /*5*/])->f_1 >= 5)
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_772(func_294()), func_1215(&(Global_1327590->f_19547[iVar2 /*5*/])), true) < 2.25f)
			{
				func_1217("Camp Butcher: vignette running", uParam0);
				iVar0 = 0;
			}
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < Global_1327590->f_19547)
	{
		if (&Global_1327590->f_19547[iVar2 /*5*/] == 486)
		{
			func_1217("Camp Butcher: special Pearson vig running", uParam0);
			iVar0 = 0;
		}
		iVar2++;
	}
	if (iVar0 == 0)
	{
		if (MAP::DOES_BLIP_EXIST(uParam0->f_879))
		{
			MAP::REMOVE_BLIP(&(uParam0->f_879));
		}
	}
	if (iVar0 == 1)
	{
		func_1217("Camp Butcher: Available", uParam0);
	}
	return iVar0;
}

void func_1217(char* sParam0, var uParam1)
{
}

void func_1218(int iParam0)
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

bool func_1219(var uParam0, int iParam1, char* sParam2)
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

void func_1220(var uParam0, var uParam1, var uParam2, var uParam3)
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

void func_1221(int iParam0, bool bParam1)
{
	if (func_1445(iParam0))
	{
		if (bParam1)
		{
			if (!func_1556(iParam0))
			{
				func_1019(iParam0, 1, 0f, 0, 0, 1f, 0, 0);
			}
		}
		else if (func_1556(iParam0))
		{
			func_1557(iParam0, 1);
		}
	}
}

struct<8> func_1222(int iParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, "", 64);
	iParam0 = func_818(iParam0);
	if (iParam0 == -1)
	{
		return cVar0;
	}
	if (iParam0 >= 7)
	{
		return cVar0;
	}
	return *(Global_40.f_1095.f_1[iParam0 /*436*/]);
}

var func_1223(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_1224(int iParam0)
{
	iParam0 = func_818(iParam0);
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

char* func_1225(int iParam0)
{
	switch (iParam0)
	{
		case -974145463:
		case -842044823:
		case 92296905:
		case 1432602132:
			return "BREED_AMERICANPAINT";
		case -1943445834:
		case -783061276:
		case -745453539:
		case 1371398552:
		case 1583029039:
			return "BREED_AMERICANSTANDARDBRED";
		case -1322521536:
		case 728055838:
		case 1100711204:
			return "BREED_ANDALUSIAN";
		case -1782334639:
		case -1266863668:
		case -1181052732:
		case -635244104:
		case -540812301:
		case -179102320:
			return "BREED_APPALOOSA";
		case -2105447887:
		case -2078767648:
		case -2055655009:
		case -1506685618:
		case -1427377767:
		case -852553462:
		case -80004868:
			return "BREED_ARABIAN";
		case 153881023:
		case 836323303:
		case 1813208211:
			return "BREED_ARDENNES";
		case -1256798240:
		case 2118089359:
			return "BREED_BELGIAN";
		case -1537586382:
		case 697143532:
		case 1440692746:
			return "BREED_DUTCHWARMBLOOD";
		case -1376299681:
		case -1293672675:
		case 281128160:
		case 1854519167:
			return "BREED_HUNGARIANHALFBRED";
		case -1955947684:
		case 545109431:
		case 1361788230:
		case 1427053849:
		case 1974379573:
			return "BREED_KENTUCKYSADDLE";
		case -1179079660:
		case 1275638003:
		case 2083573823:
			return "BREED_MISSOURIFOXTROTTER";
		case 648301150:
		case 892601357:
		case 955937750:
		case 1224695367:
		case 1235275977:
			return "BREED_MORGAN";
		case -1597490733:
		case -1428527735:
		case 805526368:
		case 2000205872:
			return "BREED_MUSTANG";
		case -1714171692:
		case -742726637:
		case 170010697:
			return "BREED_NOKOTA";
		case -1999094324:
		case -126555855:
		case -103101636:
			return "BREED_SHIRE";
		case 237935328:
		case 1724200240:
			return "BREED_SUFFOLKPUNCH";
		case -887362763:
		case -868094182:
		case -847714194:
		case 120848852:
		case 1342496140:
		case 1756765331:
		case 2059232991:
			return "BREED_TENNESSEEWALKER";
		case -1900569233:
		case -1262715164:
		case -813071670:
		case 1688250187:
		case 2010625508:
			return "BREED_THOROUGHBRED";
		case -1882436593:
		case -225011104:
		case -136225010:
			return "BREED_TURKOMAN";
		case -1331210307:
			return "BREED_DONKEY";
		case -1784502482:
		case 122449722:
			return "BREED_MULE";
		case 294243421:
			return "BREED_DUTCHWARMBLOOD";
		case -997197050:
			return "BREED_THOROUGHBRED";
		case -235714362:
			return "BREED_APPALOOSA";
		case -1678164:
			return "BREED_NOKOTA";
		case -977833913:
			return "BREED_TENNESSEEWALKER";
		case 1589164943:
			return "BREED_THOROUGHBRED";
		case -1087523615:
			return "BREED_AMERICANPAINT";
		case -496814209:
			return "BREED_ARDENNES";
		case 2109055751:
			return "BREED_APPALOOSA";
		case -776673611:
			return "BREED_NOKOTA";
		case 1764402253:
			return "BREED_ARABIAN";
		case -1417310078:
			return "BREED_TURKOMAN";
		case 1096273915:
			return "BREED_AMERICANPAINT";
		case 772751081:
			return "BREED_HUNGARIANHALFBRED";
		case -1140435723:
			return "BREED_NOKOTA";
		case 2002524329:
			return "BREED_TENNESSEEWALKER";
		case 1151530184:
			return "BREED_MUSTANG";
		case -1266525037:
			return "BREED_MISSOURIFOXTROTTER";
		case -2018137175:
			return "BREED_TURKOMAN";
		case -574151692:
			return "BREED_MUSTANG";
		case 649786380:
			return "BREED_AMERICANSTANDARDBRED";
		case -1921328920:
			return "BREED_APPALOOSA";
		case -837607790:
			return "BREED_KENTUCKYSADDLE";
		case 370424594:
			return "BREED_APPALOOSA";
		case -364764277:
			return "BREED_MANGY_BACKUP";
		default:
			break;
	}
	return "BREED_INVALID";
}

int func_1226()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	if (PED::GET_PED_CONFIG_FLAG(Global_35, 367, true))
	{
		return 0;
	}
	return 1;
}

Vector3 func_1227()
{
	return Global_40.f_1095.f_3054.f_77;
}

bool func_1228(vector3 vParam0)
{
	return func_1558(vParam0, 2);
}

int func_1229()
{
	return Global_40.f_1095.f_3054;
}

int func_1230(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 0;
		case 3:
			return 1;
		case 4:
			return 2;
		default:
			break;
	}
	return -1;
}

int func_1231(int iParam0)
{
	int iVar0;

	iParam0 = func_818(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_804(iParam0))
	{
		return 0;
	}
	iVar0 = func_377(iParam0);
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

void func_1232(int iParam0)
{
	iParam0 = func_818(iParam0);
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

void func_1233(int iParam0, int iParam1)
{
	MISC::_COPY_MEMORY(&(Global_1900383->f_508), Global_40.f_1095.f_1[iParam1 /*436*/], 436);
	MISC::_COPY_MEMORY(Global_40.f_1095.f_1[iParam1 /*436*/], Global_40.f_1095.f_1[iParam0 /*436*/], 436);
	MISC::_COPY_MEMORY(Global_40.f_1095.f_1[iParam0 /*436*/], &(Global_1900383->f_508), 436);
}

void func_1234(int iParam0, int iParam1)
{
	MISC::_COPY_MEMORY(&(Global_1900383->f_463), (*Global_1900383)[iParam1 /*45*/], 45);
	MISC::_COPY_MEMORY((*Global_1900383)[iParam1 /*45*/], (*Global_1900383)[iParam0 /*45*/], 45);
	MISC::_COPY_MEMORY((*Global_1900383)[iParam0 /*45*/], &(Global_1900383->f_463), 45);
}

int func_1235(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<4> Var29;
	bool bVar58;
	int iVar59;

	Var0.f_9 = -1591664384;
	Var29.f_9 = -1591664384;
	if (!func_1559(iParam0, &Var0))
	{
		return 0;
	}
	bVar58 = false;
	if (!func_1559(iParam1, &Var29))
	{
		bVar58 = true;
	}
	if (bVar58)
	{
		iVar59 = func_1560(iParam1);
		if (iVar59 == 0)
		{
			return 0;
		}
		if (!func_1561(Var0, Var0.f_5, iVar59, 0, 0))
		{
			return 0;
		}
	}
	else if (!func_1562(Var0, Var29, 0, 0))
	{
		return 0;
	}
	return 1;
}

void func_1236(int iParam0)
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
	if (func_1563(iParam0))
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
	if (func_872(iParam0))
	{
		uVar3 = func_478(iParam0);
		if (func_1564(uVar3))
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

void func_1237(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;

	iParam0 = func_818(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_377(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_1272(iVar6);
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

int func_1238(int iParam0)
{
	if (!func_1565(iParam0))
	{
		return 0;
	}
	if (!func_1566())
	{
		return 1;
	}
	return 0;
}

void func_1239(int iParam0, int iParam1)
{
	iParam0 = func_818(iParam0);
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

void func_1240(int iParam0)
{
	iParam0 = func_818(iParam0);
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

void func_1241(int iParam0)
{
	int iVar0;

	iParam0 = func_818(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 23)
	{
		if (iVar0 == -1)
		{
		}
		else
		{
			(Global_40.f_1095.f_1[iParam0 /*436*/])->f_372.f_2[iVar0] = 0f;
		}
		iVar0++;
	}
}

void func_1242(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iParam0 = func_818(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_819(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		func_1567(&uVar1, &iVar0, &uVar2);
	}
	iVar3 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	if (iParam1 > iVar3)
	{
		return;
	}
	fVar4 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iParam1));
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_372 = iParam1;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_372.f_1 = fVar4;
	func_1276(iParam1);
	iVar5 = func_377(iParam0);
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

void func_1243(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iParam0 = func_818(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_372.f_1 = fParam1;
	iVar0 = func_377(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return;
	}
	iVar1 = BUILTIN::FLOOR((Global_40.f_1095.f_1[iParam0 /*436*/])->f_372.f_1);
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(iVar0, 7, iVar1);
	iVar2 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iVar0, 7);
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_372 = iVar2;
	PED::_0xA69899995997A63B(iVar0, iVar2);
	func_1276(iVar2);
}

void func_1244(var uParam0)
{
	*uParam0 = -377364164; /* GXTEntry: "Natural" */
	uParam0->f_1 = 357708345; /* GXTEntry: "Natural" */
}

void func_1245(int iParam0, struct<2> Param1)
{
	iParam0 = func_818(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_1568(iParam0, Param1))
	{
	}
	if (!func_1569(iParam0, Param1.f_1))
	{
	}
}

void func_1246(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_1570((*uParam0)[iVar0 /*94*/]);
		iVar0++;
	}
}

void func_1247(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 57)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_1248(var uParam0)
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

void func_1249(var uParam0)
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

void func_1250(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 100;
	*uParam1 = iVar0;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
}

void func_1251(int iParam0, var uParam1)
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

void func_1252(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1f;
}

void func_1253(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -15;
}

void func_1254(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
}

struct<2> func_1255(int iParam0)
{
	struct<2> Var0;
	var uVar2;
	var uVar3;

	iParam0 = func_818(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!func_1571(iParam0, &uVar2))
	{
	}
	if (!func_1572(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<6> func_1256()
{
	struct<6> Var0;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;

	if (func_1573(-997150586, &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_1573(-1189569496, &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_1573(325139909, &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_1573(1310070322, &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_1573(986998820, &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_1573(-415648720, &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

void func_1257(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_1574(iParam0);
	func_1575(iParam0, uParam1);
	func_806(iParam0);
	func_1576(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_1577(iParam0, iParam3, 0);
	}
	PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 1);
}

void func_1258(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
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
	iVar0 = func_377(iParam0);
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
	if (func_1578(iParam0, 64))
	{
		func_1232(iParam0);
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
	bVar3 = func_753(42);
	if (bVar1)
	{
		if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
		{
			MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_26));
		}
		if (iVar0 == PLAYER::_0xB48050D326E9A2F3(PLAYER::PLAYER_ID()) && bVar3)
		{
			if (!MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_27))
			{
				((*Global_1900383)[iParam0 /*45*/])->f_27 = MAP::_0x23F74C2FDA6E7C61(-515518185, iVar0);
				MAP::SET_BLIP_SPRITE(((*Global_1900383)[iParam0 /*45*/])->f_27, -1327110633, true);
				func_1579(&(((*Global_1900383)[iParam0 /*45*/])->f_27));
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
		func_1232(iParam0);
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
		if (func_331(1) < 1)
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
		func_1580(&(((*Global_1900383)[iParam0 /*45*/])->f_26), bVar6);
	}
	if (!MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_1578(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = TASK::IS_PED_IN_WRITHE(iVar0);
	bVar10 = false;
	iVar11 = func_1581(iParam0);
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
	fVar15 = func_1582(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_1583(iParam0))
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
		func_1584(((*Global_1900383)[iParam0 /*45*/])->f_26);
		func_1585(((*Global_1900383)[iParam0 /*45*/])->f_26);
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
	if ((PLAYER::_0xB48050D326E9A2F3(PLAYER::PLAYER_ID()) == iVar0 && bVar3) && !bVar9)
	{
		MAP::_0x662D364ABF16DE2F(((*Global_1900383)[iParam0 /*45*/])->f_26, 673950256);
	}
	else
	{
		MAP::_0xB059D7BD3D78C16F(((*Global_1900383)[iParam0 /*45*/])->f_26, 673950256);
	}
	if (func_229(iVar0) && !bVar9)
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
	iVar21 = func_331(iParam0);
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

int func_1259(int iParam0)
{
	iParam0 = func_818(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (func_795(iParam0) == 0)
	{
		return 0;
	}
	return 1;
}

int func_1260(vector3 vParam0)
{
	return func_1586(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

void func_1261(int iParam0)
{
	int iVar0;

	iParam0 = func_818(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_804(iParam0))
	{
		return;
	}
	iVar0 = func_377(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	ENTITY::_SET_ENTITY_HEALTH(iVar0, 0, 0);
}

void func_1262(int iParam0)
{
	var uVar0;
	int iVar1;
	var uVar2;

	iParam0 = func_818(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1567(&uVar0, &iVar1, &uVar2);
	func_1587(iParam0, uVar0);
	func_1588(iParam0, iVar1);
	func_1589(iParam0, uVar2);
	func_803(iParam0, 1);
	func_1242(iParam0, 1);
}

void func_1263(int iParam0)
{
	iParam0 = func_818(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_479(iParam0, 1);
}

void func_1264(int iParam0, vector3 vParam1, var uParam4)
{
	iParam0 = func_818(iParam0);
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

int func_1265(int iParam0)
{
	iParam0 = func_818(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return func_1578(iParam0, 1);
}

int func_1266(int iParam0)
{
	iParam0 = func_818(iParam0);
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

void func_1267(int iParam0)
{
	iParam0 = func_818(iParam0);
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

void func_1268(int iParam0)
{
	int iVar0;

	iParam0 = func_818(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_1269(iParam0);
	if (!SCRIPTS::_DOES_THREAD_EXIST(iVar0))
	{
		func_1240(iParam0);
	}
	else if (!SCRIPTS::IS_THREAD_ACTIVE(iVar0, false))
	{
		func_1240(iParam0);
	}
}

int func_1269(int iParam0)
{
	iParam0 = func_818(iParam0);
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

float func_1270(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15f;
		case 4:
			return 1E+09f;
		case 1:
			return 1E+09f;
		case 2:
			return 1E+09f;
		case 3:
			return 1E+09f;
		case 5:
			return 100f;
		case 6:
			return 30f;
		case 7:
			return 1E+09f;
		case 8:
			return 1E+09f;
		case 9:
			return 1E+09f;
		case 10:
			return 1E+09f;
		case 11:
			return 1E+09f;
		case 12:
			return 1E+09f;
		case 13:
			return 1E+09f;
		case 14:
			return 1E+09f;
		case 15:
			return 1E+09f;
		case 16:
			return 1E+09f;
		case 17:
			return 1E+09f;
		case 18:
			return 1E+09f;
		case 19:
			return 1E+09f;
		case 20:
			return 1E+09f;
		case 21:
			return 1E+09f;
		case 22:
			return 1E+09f;
	}
	return 1E+09f;
}

float func_1271(int iParam0)
{
	float fVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0f;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0f;
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
		return 0f;
	}
	fVar0 = PED::_0x42688E94E96FD9B4(iParam0, 3, 0);
	return fVar0;
}

int func_1272(int iParam0)
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

var func_1273(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_1590(sParam0, sParam1, iParam2);
	return uVar20;
}

void func_1274(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(iParam0, 7, iParam1);
}

int func_1275(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iParam0, 7);
	return iVar0;
}

void func_1276(int iParam0)
{
	if (func_1591() < iParam0)
	{
		func_1592(iParam0);
	}
}

void func_1277(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	iParam0 = func_818(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_819(iParam0);
	iVar1 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	if (iParam1 == 1)
	{
		sVar2 = "HORSE_BONDED";
	}
	else if (iParam1 == iVar1)
	{
		sVar2 = "HORSE_BONDING_MAXIMUM";
	}
	else
	{
		sVar2 = "HORSE_BONDING_LEVELUP";
	}
	func_1593(sVar2, MISC::_CREATE_VAR_STRING(2, "HORSE_BONDING_LEVEL", iParam1), 908516622, -961843223, -2, "HUD_Toast_Soundset", "horse_bonding", 0, 0, 1, 1);
}

int func_1278(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	iVar0 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iParam0, func_1279());
	return iVar0;
}

int func_1279()
{
	return 0;
}

void func_1280(int iParam0, int iParam1)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	char* sVar6;
	char* sVar7;

	sVar0 = "RPG_LEVEL_PROGRESS_TOAST";
	switch (iParam0)
	{
		case 0:
			sVar1 = "RPG_HEALTH";
			break;
		case 1:
			sVar1 = "RPG_STAMINA";
			break;
		default:
			return;
	}
	sVar2 = MISC::_CREATE_VAR_STRING(2, "HORSE_RPG_LEVEL_PROGRESS", iParam1);
	switch (iParam0)
	{
		case 0:
			iVar3 = -1114634884;
			break;
		case 1:
			iVar3 = 1944692767;
			break;
		default:
			return;
	}
	sVar4 = func_1595(func_1594(iParam1));
	iVar5 = MISC::GET_HASH_KEY(sVar4);
	sVar6 = "";
	sVar7 = "HUD_Toast_Soundset";
	func_1593(MISC::_CREATE_VAR_STRING(10, sVar0, sVar1), sVar2, iVar3, iVar5, -2, sVar7, sVar6, 0, 0, 1, 1);
}

int func_1281(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	iVar0 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iParam0, func_1282());
	return iVar0;
}

int func_1282()
{
	return 1;
}

struct<2> func_1283(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

int func_1284()
{
	int iVar0;

	iVar0 = func_1285();
	if (MAP::DOES_BLIP_EXIST(iVar0))
	{
		return 1;
	}
	return 0;
}

var func_1285()
{
	return Global_1900383->f_393.f_1;
}

void func_1286(int iParam0)
{
	Global_1900383->f_393.f_1 = iParam0;
}

int func_1287(int iParam0, int iParam1)
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

int func_1288(int iParam0)
{
	int iVar0;

	if (Global_1934765->f_337 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < Global_1934765->f_337)
	{
		if ((Global_1934765->f_318[iVar0 /*3*/])->f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1289(int iParam0)
{
	int iVar0;

	if (Global_1934765->f_337 == 0)
	{
		return;
	}
	if (Global_1934765->f_337 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_1934765->f_337 - 2))
		{
			MISC::_COPY_MEMORY(Global_1934765->f_318[iVar0 /*3*/], Global_1934765->f_318[iVar0 + 1 /*3*/], 3);
			iVar0++;
		}
	}
	Global_1934765->f_337 = (Global_1934765->f_337 - 1);
}

void func_1290()
{
	MISC::_0x243CEDE8F916B994();
	Global_1934765->f_338 = -1;
}

void func_1291(bool bParam0, float fParam1)
{
	int iVar0;

	if (MISC::IS_BIT_SET(Global_1934765->f_301, 1))
	{
		return;
	}
	iVar0 = func_1292();
	if (iVar0 < 0)
	{
		return;
	}
	if (iVar0 >= 6)
	{
		return;
	}
	if (iVar0 == Global_1934765->f_338)
	{
		return;
	}
	if (func_1596(&(Global_1934765->f_318[iVar0 /*3*/]), bParam0, fParam1))
	{
		Global_1934765->f_338 = iVar0;
	}
}

int func_1292()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = -1;
	iVar1 = -1;
	if (Global_1934765->f_337 <= 0)
	{
		return -1;
	}
	iVar2 = (Global_1934765->f_337 - 1);
	while (iVar2 >= 0)
	{
		iVar3 = func_1597((Global_1934765->f_318[iVar2 /*3*/])->f_1);
		if (iVar3 > iVar0)
		{
			iVar0 = iVar3;
			iVar1 = iVar2;
		}
		iVar2 = (iVar2 + -1);
	}
	return iVar1;
}

void func_1293()
{
	if (UISTATEMACHINE::_UISTATEMACHINE_EXISTS(func_1542()))
	{
		UISTATEMACHINE::_UISTATEMACHINE_DESTROY(func_1542());
	}
}

void func_1294(var uParam0)
{
	if (UIAPPS::_IS_APP_ACTIVE(1749944028))
	{
		UIAPPS::_CLOSE_APP_BY_HASH(1749944028);
	}
	if (func_211(uParam0->f_1))
	{
		func_212(&(uParam0->f_1), 1, 1);
	}
	uParam0->f_772 = 0;
	uParam0->f_773 = 0;
}

void func_1295(var uParam0)
{
	if (*uParam0 != 0)
	{
		UISTATEMACHINE::_UIFLOWBLOCK_RELEASE(uParam0);
	}
}

void func_1296()
{
	AUDIO::_0x531A78D6BF27014B("Ledger_Sounds");
}

void func_1297(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!func_503(iParam0))
	{
		return;
	}
	if (!func_1332(iParam0))
	{
		return;
	}
	if (bParam1 && !ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return;
	}
	if (bParam1 && ENTITY::IS_ENTITY_DEAD(iParam2))
	{
		return;
	}
	iVar0 = func_179(iParam0);
	if (bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(iParam2, 155, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
	}
	else
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
	}
	PED::SET_PED_CONFIG_FLAG(iVar0, 152, bParam1);
	PED::SET_PED_CONFIG_FLAG(iVar0, 154, bParam1);
	PED::SET_PED_CONFIG_FLAG(iVar0, 156, bParam1);
	PED::SET_PED_CONFIG_FLAG(iVar0, 25, bParam1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 87, bParam1);
	if (bParam1)
	{
		COMPANION::_0xD428C3F92FC3F6F8(iVar0, func_909(iParam0));
		PED::_0x9238A3D970BBB0A9(iVar0, -1972074710);
		PED::_0x9238A3D970BBB0A9(Global_35, -1972074710);
	}
	else
	{
		PED::_0x9A4AC116CC1EEE14(iVar0);
		if (!func_1598())
		{
			PED::_0x9A4AC116CC1EEE14(Global_35);
		}
	}
}

int func_1298(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = uParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_931(&iVar1, -2147483648);
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

int func_1299(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (func_56() != -1)
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

int func_1300(int iParam0)
{
	if (!func_536(iParam0))
	{
		return -1;
	}
	if (iParam0 >= func_854(1))
	{
		return -1;
	}
	if (iParam0 >= 3 || iParam0 < 0)
	{
		return -1;
	}
	return Global_1359489[iParam0];
}

var func_1301()
{
	return &Global_1899515;
}

void func_1302(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		func_1599(iParam1);
	}
}

int func_1303(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_536(iParam0))
	{
		return 0;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(((*Global_1360165)[iParam0 /*1157*/])->f_126))
	{
		iVar0 = func_417(iParam0, 1);
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

int func_1304(vector3 vParam0, var uParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
{
	var uVar0;

	vParam0.f_2 = iParam5;
	uVar0 = *uParam6;
	if (DATAFILE::_DATAFILE_GET_HASH(&uVar0, &vParam0))
	{
		*uParam6 = uVar0;
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_1305(int iParam0)
{
	switch (iParam0)
	{
		case 1928985868:
			return 7;
		case 1784174017:
			return 8;
		case 1763160914:
			return 10;
		case 2051438686:
			return 11;
		case 1155669136:
			return 1;
		case 1871598:
			return 9;
		case -1379218218:
			return 6;
		case 1059981727:
			return 2;
		case -1216736853:
			return 4;
		case 1191674135:
			return 3;
		case -112322057:
			return 12;
		case -823778732:
			return 25;
		case 1338623152:
			return 16;
		case 1401247110:
			return 20;
		case 1007627076:
			return 13;
		case 864606355:
			return 31;
		case 1338525796:
			return 18;
		case -2076625074:
			return 26;
		case -288774278:
			return 15;
		case 1934998953:
			return 14;
		case -1148482643:
			return 32;
		case 603776282:
			return 22;
		case 1339344423:
			return 27;
		case 1562395675:
			return 19;
		case 1316832864:
			return 28;
		case -1619448191:
			return 29;
		case -520130198:
			return 24;
		case 1418253584:
			return 30;
		case -348149883:
			return 33;
		case 814591385:
			return 34;
		case 981348373:
			return 17;
		case -1100417366:
			return 35;
		case 1438856241:
			return 23;
		case -1989143022:
			return 21;
		default:
			break;
	}
	return 0;
}

int func_1306(vector3 vParam0, var uParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_INT(iParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

void func_1307(var uParam0)
{
	*uParam0 = 176656832;
	uParam0->f_1 = -15;
	uParam0->f_2 = 1017034651;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

int func_1308(int iParam0)
{
	if (!func_536(iParam0))
	{
		return 0;
	}
	if (((*Global_1360165)[iParam0 /*1157*/])->f_140 != 0 || ((*Global_1360165)[iParam0 /*1157*/])->f_141 != 0)
	{
		return 1;
	}
	return 0;
}

int func_1309(int iParam0)
{
	switch (iParam0)
	{
		case -2147483648:
		case 2048:
		case 8192:
			return 5;
		case 1:
		case 16:
		case 32:
		case 1024:
		case 4096:
			return 4;
		case 2:
		case 64:
			return 3;
		case 4:
		case 8:
		case 128:
			return 2;
		case 512:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_1310(int iParam0, int iParam1, bool bParam2, float fParam3)
{
	int iVar0;

	iVar0 = func_1288(iParam1);
	if (iVar0 == -1)
	{
		func_1600(iParam0, iParam1, fParam3);
		func_1291(bParam2, fParam3);
		return;
	}
	if (iParam0 != &Global_1934765->f_318[iVar0 /*3*/])
	{
		func_1289(iVar0);
		func_1600(iParam0, iParam1, fParam3);
		Global_1934765->f_338 = -1;
		func_1291(bParam2, fParam3);
		return;
	}
}

int func_1311()
{
	return 0;
}

int func_1312()
{
	int iVar0;

	if (func_685())
	{
		if (STREAMING::_IS_IMAP_ACTIVE(-850189983))
		{
			STREAMING::_REMOVE_IMAP(-850189983);
		}
		iVar0 = -172246728;
	}
	else
	{
		if (STREAMING::_IS_IMAP_ACTIVE(-172246728))
		{
			STREAMING::_REMOVE_IMAP(-172246728);
		}
		iVar0 = -850189983;
	}
	return iVar0;
}

int func_1313()
{
	int iVar0;

	if (func_676(((*Global_1347702)[134 /*49*/])->f_15))
	{
		iVar0 = func_1450();
		if (STREAMING::_IS_IMAP_ACTIVE(-387018143))
		{
			STREAMING::_REMOVE_IMAP(-387018143);
		}
	}
	else
	{
		iVar0 = -387018143;
	}
	return iVar0;
}

int func_1314()
{
	if (func_477(((*Global_1347702)[134 /*49*/])->f_15))
	{
		if (STREAMING::_IS_IMAP_ACTIVE(126970802))
		{
			STREAMING::_REMOVE_IMAP(126970802);
		}
		return func_1311();
	}
	return 126970802;
}

int func_1315()
{
	if (func_984(-520532433, 1, 0))
	{
		if (STREAMING::_IS_IMAP_ACTIVE(-1739164071))
		{
			STREAMING::_REMOVE_IMAP(-1739164071);
		}
		return func_1311();
	}
	return -1739164071;
}

int func_1316()
{
	if (func_984(-1515028452, 1, 0))
	{
		if (STREAMING::_IS_IMAP_ACTIVE(-1331617405))
		{
			STREAMING::_REMOVE_IMAP(-1331617405);
		}
		return func_1311();
	}
	return -1331617405;
}

int func_1317()
{
	if (func_477(((*Global_1835011)[6 /*74*/])->f_1) || func_676(((*Global_1835011)[6 /*74*/])->f_1))
	{
		return 1998041523;
	}
	else if (STREAMING::_IS_IMAP_ACTIVE(1998041523))
	{
		STREAMING::_REMOVE_IMAP(1998041523);
	}
	return func_1450();
}

int func_1318()
{
	if (func_984(-1515028452, 1, 0))
	{
		if (STREAMING::_IS_IMAP_ACTIVE(-539928451))
		{
			STREAMING::_REMOVE_IMAP(-539928451);
		}
		return func_1311();
	}
	return -539928451;
}

int func_1319()
{
	if (func_984(-520532433, 1, 0))
	{
		if (STREAMING::_IS_IMAP_ACTIVE(-293283707))
		{
			STREAMING::_REMOVE_IMAP(-293283707);
		}
		return func_1311();
	}
	return -293283707;
}

int func_1320()
{
	if (func_416(13, 4, 1))
	{
		return 1036815507;
	}
	if (STREAMING::_IS_IMAP_ACTIVE(1036815507))
	{
		STREAMING::_REMOVE_IMAP(1036815507);
	}
	return func_1450();
}

void func_1321(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_1601(1497516462);
			func_1602(2016141805);
			func_1602(1010885152);
			func_1602(-502324015);
			break;
		case 2016141805:
			func_1602(1497516462);
			func_1601(2016141805);
			func_1602(1010885152);
			func_1602(-502324015);
			break;
		case 1010885152:
			func_1602(1497516462);
			func_1602(2016141805);
			func_1601(1010885152);
			func_1602(-502324015);
			break;
		case -502324015:
			func_1602(1497516462);
			func_1602(2016141805);
			func_1602(1010885152);
			func_1601(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_1602(-538889627);
			func_1602(-538880323);
			func_1602(-1056767524);
			func_1601(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_1603();
			func_1601(iParam0);
			break;
		case -639037538:
		case -618620429:
		case -491981251:
		case 168171957:
		case 227918160:
		case 588987611:
		case 704802028:
		case 1193080109:
		case 1649996811:
		case 2008888900:
			func_1604();
			func_1601(iParam0);
			break;
		case 2019386373:
			func_1602(-664252410);
			func_1602(2109952320);
			func_1601(2019386373);
			break;
		case -664252410:
			func_1602(2019386373);
			func_1602(2109952320);
			func_1601(-664252410);
			break;
		case 2109952320:
			func_1602(2019386373);
			func_1602(-664252410);
			func_1601(2109952320);
			break;
		case -1674179981:
			func_1602(-1835851517);
			func_1602(-1838352012);
			func_1601(-1674179981);
			break;
		case -1835851517:
			func_1602(-1674179981);
			func_1602(-1838352012);
			func_1601(-1835851517);
			break;
		case -1838352012:
			func_1602(-1674179981);
			func_1602(-1835851517);
			func_1601(-1838352012);
			break;
		case -1717960576:
			func_1602(210001842);
			func_1601(-1717960576);
			break;
		case 210001842:
			func_1602(-1717960576);
			func_1601(210001842);
			break;
		case -150493654:
			func_1602(-1271608261);
			func_1602(1846061697);
			func_1602(-1145519186);
			func_1601(-150493654);
			break;
		case -1271608261:
			func_1602(-150493654);
			func_1602(1846061697);
			func_1602(-1145519186);
			func_1601(-1271608261);
			break;
		case 1846061697:
			func_1602(-150493654);
			func_1602(-1271608261);
			func_1602(-1145519186);
			func_1601(1846061697);
			break;
		case -1145519186:
			func_1602(-150493654);
			func_1602(-1271608261);
			func_1602(1846061697);
			func_1601(-1145519186);
			break;
		case 1766284049:
			func_1602(280705402);
			func_1602(1926308480);
			func_1601(1766284049);
			break;
		case 280705402:
			func_1602(1766284049);
			func_1602(1926308480);
			func_1601(280705402);
			break;
		case 1926308480:
			func_1602(1766284049);
			func_1602(280705402);
			func_1601(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_1602(439465264);
				func_1601(1609506757);
			}
			else
			{
				func_1602(1609506757);
				func_1602(439465264);
			}
			break;
		case 439465264:
			if (func_838(1609506757))
			{
				if (bParam1)
				{
					func_1601(439465264);
				}
				else
				{
					func_1602(439465264);
				}
			}
			break;
		case 1822001510:
			func_1602(-1612662716);
			func_1601(1822001510);
			break;
		case -1612662716:
			func_1602(1822001510);
			func_1601(-1612662716);
			break;
		case 1306158345:
			func_1602(1952610440);
			func_1602(-223469678);
			func_1602(-404698347);
			func_1602(1517904467);
			func_1601(1306158345);
			break;
		case 1952610440:
			func_1602(1306158345);
			func_1602(-223469678);
			func_1602(-404698347);
			func_1602(1517904467);
			func_1601(1952610440);
			break;
		case -223469678:
			func_1602(1306158345);
			func_1602(1952610440);
			func_1602(-404698347);
			func_1602(1517904467);
			func_1601(-223469678);
			break;
		case -404698347:
			func_1602(1306158345);
			func_1602(1952610440);
			func_1602(-223469678);
			func_1602(1517904467);
			func_1601(-404698347);
			break;
		case 1517904467:
			func_1602(1306158345);
			func_1602(1952610440);
			func_1602(-223469678);
			func_1602(-404698347);
			func_1601(1517904467);
			break;
		case 1376646519:
			func_1602(931649776);
			func_1602(-434590080);
			func_1602(1743048395);
			func_1602(449774763);
			func_1601(1376646519);
			break;
		case 931649776:
			func_1602(1376646519);
			func_1602(-434590080);
			func_1602(1743048395);
			func_1602(449774763);
			func_1601(931649776);
			break;
		case -434590080:
			func_1602(1376646519);
			func_1602(931649776);
			func_1602(1743048395);
			func_1602(449774763);
			func_1601(-434590080);
			break;
		case 1743048395:
			func_1602(1376646519);
			func_1602(931649776);
			func_1602(-434590080);
			func_1602(449774763);
			func_1601(1743048395);
			break;
		case 449774763:
			func_1602(1376646519);
			func_1602(931649776);
			func_1602(-434590080);
			func_1602(1743048395);
			func_1601(449774763);
			break;
		case -1414537028:
			func_1602(38162571);
			func_1602(1350391819);
			func_1602(54073871);
			func_1601(-1414537028);
			break;
		case 38162571:
			func_1602(-1414537028);
			func_1602(1350391819);
			func_1602(54073871);
			func_1601(38162571);
			break;
		case 1350391819:
			func_1602(-1414537028);
			func_1602(38162571);
			func_1602(54073871);
			func_1601(1350391819);
			break;
		case 54073871:
			func_1602(-1414537028);
			func_1602(38162571);
			func_1602(1350391819);
			func_1601(54073871);
			break;
		case 198200492:
			func_1601(198200492);
			func_1602(-1124061431);
			func_1602(52706132);
			func_1602(-259123672);
			break;
		case -1124061431:
			func_1602(198200492);
			func_1601(-1124061431);
			func_1602(52706132);
			func_1602(-259123672);
			break;
		case 52706132:
			func_1602(198200492);
			func_1602(-1124061431);
			func_1601(52706132);
			func_1602(-259123672);
			break;
		case -259123672:
			func_1602(198200492);
			func_1602(-1124061431);
			func_1602(52706132);
			func_1601(-259123672);
			break;
		case -919512195:
			func_1601(-919512195);
			func_1602(-1925798111);
			func_1602(420709909);
			func_1602(1703426636);
			break;
		case -1925798111:
			func_1601(-1925798111);
			func_1602(-919512195);
			func_1602(420709909);
			func_1602(1703426636);
			break;
		case 420709909:
			func_1601(420709909);
			func_1602(-919512195);
			func_1602(-1925798111);
			func_1602(1703426636);
			break;
		case 1703426636:
			func_1601(1703426636);
			func_1602(-919512195);
			func_1602(-1925798111);
			func_1602(420709909);
			break;
		case -1223121209:
			func_1601(-1223121209);
			func_1602(630808005);
			break;
		case 630808005:
			func_1601(630808005);
			func_1602(-1223121209);
			break;
		case 1453909576:
			func_1601(1453909576);
			func_1602(1643531967);
			break;
		case 1643531967:
			func_1601(1643531967);
			func_1602(1453909576);
			break;
		case 0:
			func_1601(0);
			func_1602(473295046);
			func_1602(-1738165526);
			break;
		case 473295046:
			func_1601(473295046);
			func_1602(0);
			func_1602(-1738165526);
			break;
		case -1738165526:
			func_1601(-1738165526);
			func_1602(0);
			func_1602(473295046);
			break;
		case 932909855:
			func_1601(932909855);
			func_1602(2051822093);
			break;
		case 2051822093:
			func_1601(2051822093);
			func_1602(932909855);
			break;
		case 405586984:
			func_1601(405586984);
			func_1602(1509509592);
			func_1602(-959357075);
			func_1602(-1311865656);
			break;
		case 1509509592:
			func_1601(1509509592);
			func_1602(405586984);
			func_1602(-959357075);
			func_1602(-1311865656);
			break;
		case -959357075:
			func_1601(-959357075);
			func_1602(1509509592);
			func_1602(405586984);
			func_1602(-1311865656);
			break;
		case -1311865656:
			func_1601(-1311865656);
			func_1602(1509509592);
			func_1602(-959357075);
			func_1602(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_1601(-524145696);
			}
			else
			{
				func_1602(-524145696);
			}
			func_1602(1626481264);
			func_1602(282809459);
			break;
		case 282809459:
			func_1601(282809459);
			func_1602(1626481264);
			func_1602(-524145696);
			break;
		case 1626481264:
			func_1601(1626481264);
			func_1602(-524145696);
			func_1602(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_1601(885203519);
			}
			else
			{
				func_1602(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_1601(-1080627546);
			}
			else
			{
				func_1602(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_838(iParam0))
				{
					func_1601(iParam0);
				}
			}
			else if (func_838(iParam0))
			{
				func_1602(iParam0);
			}
			break;
	}
}

int func_1322(int iParam0, bool bParam1)
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

void func_1323(int iParam0)
{
	if (iParam0 == 1)
	{
		func_1605("hso_post_caravan");
	}
	if (iParam0 == 2)
	{
		func_1605("dewclm_post_caravan");
	}
	if (iParam0 == 6)
	{
		func_1605("bvh_nav_endless_summer");
	}
}

int func_1324(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 7:
		case 8:
			return 0;
		case 3:
		case 5:
			switch (iParam1)
			{
				case 0:
					return 0;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 0;
			}
			break;
	}
	return 1;
}

void func_1325(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			func_1605("shb_nav_camp_00");
			func_1605("shb_nav_camp_01");
			break;
	}
}

struct<8> func_1326(int iParam0, int iParam1)
{
	char cVar0[64];

	StringCopy(&cVar0, func_1606(iParam0), 64);
	StringConCat(&cVar0, "_nav_camp_", 64);
	StringConCat(&cVar0, func_1607(iParam1), 64);
	return cVar0;
}

int func_1327(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			switch (iParam1)
			{
				case 0:
					return func_1311();
				case 1:
					return -1232260252;
				case 2:
					return 1404611977;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 2022451711;
				case 1:
					return 970924250;
				case 2:
					return -1177590512;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1402472902;
				case 1:
					return 1802272784;
				case 2:
					return -1458944281;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return func_1311();
				case 1:
					return -1869016398;
				case 2:
					if (func_12(268435456))
					{
						if (STREAMING::_IS_IMAP_ACTIVE(806681228))
						{
							STREAMING::_REMOVE_IMAP(806681228);
						}
						return 1311984381;
					}
					else
					{
						if (STREAMING::_IS_IMAP_ACTIVE(1311984381))
						{
							STREAMING::_REMOVE_IMAP(1311984381);
						}
						return 806681228;
					}
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return func_1311();
				case 1:
					return 414622870;
				case 2:
					return 557551306;
				default:
					break;
			}
			break;
	}
	return func_1311();
}

void func_1328(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = -1;
	switch (iParam0)
	{
		case -1999825729:
			iVar0 = -1999825729;
			break;
		case 414622870:
			iVar0 = 414622870;
			break;
		case 1802272784:
			iVar0 = 1802272784;
			break;
		case 970924250:
			iVar0 = 446964392;
			break;
	}
	if (iVar0 != -1)
	{
		if (bParam1)
		{
			if (GRAPHICS::_0xDE9BAD3292AA6D5E(iVar0) == 0)
			{
				GRAPHICS::_0xDFEA23EC90113657(iVar0);
			}
		}
		else if (GRAPHICS::_0xDE9BAD3292AA6D5E(iVar0))
		{
			GRAPHICS::_0xDD0BC0EDCB2162F6(iVar0);
		}
	}
}

struct<4> func_1329()
{
	struct<4> Var0;

	return Var0;
}

int func_1330(int iParam0)
{
	if (func_979(iParam0) == 8)
	{
		return func_498(iParam0);
	}
	return -1;
}

int func_1331(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	if (!func_543(iParam0, 0f, 0f, 0f, 0, bParam1, bParam4, 1, 1, iParam2, iParam3, 1))
	{
		return 0;
	}
	return 1;
}

int func_1332(int iParam0)
{
	if (func_503(iParam0))
	{
		if (func_344(Global_1360165[iParam0 /*1157*/], 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_1333(int iParam0, bool bParam1)
{
	if (!func_422(iParam0))
	{
		return 0;
	}
	if (!func_388(iParam0, 2))
	{
		return 0;
	}
	if (func_388(iParam0, 32) && !bParam1)
	{
		func_877(iParam0, _NAMESPACE48::_0x4F76E3676583D951(func_423(iParam0)));
		if (func_56() == -1)
		{
			if (func_388(iParam0, 2048))
			{
				_NAMESPACE48::_0x49A8C2CD97815215(func_864(iParam0));
				func_875(iParam0, 2048);
			}
			_NAMESPACE48::_0xFCC6DB8DBE709BC8(func_864(iParam0));
		}
		return 0;
	}
	if (!func_1608(iParam0) && func_56() == -1)
	{
		return 0;
	}
	if (_NAMESPACE48::_0x800DF3FC913355F3(func_864(iParam0)))
	{
		func_875(iParam0, 128);
		return 1;
	}
	func_877(iParam0, _NAMESPACE48::_0x4F76E3676583D951(func_423(iParam0)));
	_NAMESPACE48::_0x4F81EAD1DE8FA19B(func_864(iParam0));
	if (func_388(iParam0, 2048))
	{
		_NAMESPACE48::_0x49A8C2CD97815215(func_864(iParam0));
		func_875(iParam0, 2048);
	}
	return 1;
}

int func_1334(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	vector3 vVar0;
	int iVar3;

	if (!func_422(iParam0))
	{
		return 0;
	}
	if (!func_863(func_423(iParam0)))
	{
		return 1;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(func_864(iParam0)))
	{
		func_1333(iParam0, 0);
		return 0;
	}
	vVar0 = { iParam2, iParam3, iParam4 };
	if (!func_1439(iParam0, 0))
	{
		if (bParam1)
		{
			if (!func_1609(iParam0))
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (!func_213(vVar0))
	{
		_NAMESPACE48::_0x59C7AD6FEA2AC449(func_864(iParam0), vVar0);
	}
	if (bParam5)
	{
		iVar3 = _NAMESPACE48::_0x08FC896D2CB31FCC(func_864(iParam0), 0);
	}
	else
	{
		iVar3 = _NAMESPACE48::_0x0CADC3A977997472(func_864(iParam0), 0);
	}
	if (!func_213(vVar0))
	{
		_NAMESPACE48::_0xBB68908CD11AEBDC(func_864(iParam0));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		return 1;
	}
	return 0;
}

int func_1335(int iParam0)
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

int func_1336(int iParam0)
{
	switch ((Global_1357549->f_1675[iParam0 /*5*/])->f_2)
	{
		case 0:
			if (!_NAMESPACE48::_0x800DF3FC913355F3((Global_1357549->f_1675[iParam0 /*5*/])->f_4))
			{
				(Global_1357549->f_1675[iParam0 /*5*/])->f_4 = _NAMESPACE48::_0x4F76E3676583D951(&(Global_1357549->f_1675[iParam0 /*5*/]));
				_NAMESPACE48::_0x187D65F3AEC5D679(&(Global_1357549->f_1675[iParam0 /*5*/]), func_1610(func_148()));
				_NAMESPACE48::_0xFCC6DB8DBE709BC8((Global_1357549->f_1675[iParam0 /*5*/])->f_4);
				return 0;
			}
			(Global_1357549->f_1675[iParam0 /*5*/])->f_2 = 1;
		case 1:
			if (!_NAMESPACE48::_0xA8120EBEAF290C7A((Global_1357549->f_1675[iParam0 /*5*/])->f_4))
			{
				return 0;
			}
			if (_NAMESPACE48::_0xEB98B38CA60742D7((Global_1357549->f_1675[iParam0 /*5*/])->f_4))
			{
				_NAMESPACE48::_0x49A8C2CD97815215((Global_1357549->f_1675[iParam0 /*5*/])->f_4);
			}
			if (func_344((Global_1357549->f_1675[iParam0 /*5*/])->f_3, 0))
			{
				Global_1359489->f_12 = 1;
				(Global_1357549->f_1675[iParam0 /*5*/])->f_2 = 2;
			}
			else
			{
				if (!Global_1359489->f_12)
				{
					_NAMESPACE48::_0x4F81EAD1DE8FA19B((Global_1357549->f_1675[iParam0 /*5*/])->f_4);
					(Global_1357549->f_1675[iParam0 /*5*/])->f_3 = _NAMESPACE48::_0x0CADC3A977997472((Global_1357549->f_1675[iParam0 /*5*/])->f_4, 0);
					_NAMESPACE48::_0x6759BEE6762E140B((Global_1357549->f_1675[iParam0 /*5*/])->f_4);
				}
				return 0;
			}
		case 2:
			func_1611((Global_1357549->f_1675[iParam0 /*5*/])->f_3);
			(Global_1357549->f_1675[iParam0 /*5*/])->f_2 = 3;
		case 3:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1337(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_1612(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_1338(var uParam0, var uParam1)
{
	var uVar0;
	var uVar1;

	uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0, "PageLeft");
	func_1613(uVar0, (*uParam1)[0 /*118*/]);
	uVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0, "PageRight");
	func_1613(uVar1, (*uParam1)[1 /*118*/]);
}

void func_1339(var uParam0, var uParam1)
{
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0, "itemLabel", 0);
	uParam1->f_1 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0, "itemDescription", "");
	uParam1->f_2 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0, "purchaseLabel", "");
	uParam1->f_3 = DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0, "purchasePrice", 0);
	uParam1->f_4 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0, "isGoldPrice", 0);
	INVENTORY::_0x9D21B185ABC2DBC4(uParam0, "effects", 0, 0);
}

int func_1340(int iParam0)
{
	int iVar0;

	if (!DLC::_0x1DB9D61E505AE3FC())
	{
		return iParam0;
	}
	if (!func_1614())
	{
		return iParam0;
	}
	iVar0 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(iParam0) * 0.8f));
	return iVar0;
}

int func_1341()
{
	int iVar0;

	iVar0 = func_1615();
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

int func_1342(int iParam0)
{
	float fVar0;
	float fVar1;

	if (func_56() != -1)
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
	fVar1 = func_490(MISC::ABSF(fVar1) < 1f, func_490(fVar1 < 0f, -1f, 1f), fVar1);
	return BUILTIN::CEIL(fVar1);
}

int func_1343(int iParam0, int iParam1, int iParam2)
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

int func_1344(int iParam0)
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

int func_1345()
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

void func_1346(int iParam0, bool bParam1, int iParam2)
{
	func_1616((MISC::GET_GAME_TIMER() + iParam2), !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1955569->f_1.f_2.f_1, iParam0);
	func_1617(iParam0);
}

void func_1347(int iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_16[2]), 0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[2]), 1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_20[2]), func_1618(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_24[2]), "pausemenu_player");
}

void func_1348(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	bVar3 = false;
	if (func_1619(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_1620(iVar5, &iVar2, &iVar0))
			{
				if (!func_983(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_1621(iVar2);
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
							if (func_1175(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_1341() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_1341() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_1622();
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

struct<2> func_1349(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

char* func_1350(int iParam0)
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

int func_1351(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_1623(iParam0))
	{
		return 0;
	}
	if (!func_840())
	{
		return 0;
	}
	if (!func_1624(iParam0, &iVar0, &iVar1))
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

void func_1352(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = Global_1360165[iParam0 /*1157*/];
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	if (!func_503(iParam0))
	{
		return;
	}
	iVar1 = PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
	if (PED::IS_PED_GROUP_MEMBER(iVar0, iVar1, 0))
	{
		return;
	}
	COMPANION::_0xCBD9EC60495C728C(func_852());
	PED::SET_PED_CONFIG_FLAG(iVar0, 279, true);
	PED::SET_PED_AS_GROUP_MEMBER(iVar0, iVar1);
	if (bParam1)
	{
		func_1297(iParam0, 1, Global_35);
	}
}

bool func_1353()
{
	return func_854(1) < 3;
}

void func_1354(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_503(iParam0))
	{
		iVar0 = 0;
		iVar1 = 0;
		switch (iParam0)
		{
			case 2:
				func_1625(&iVar0, 1);
				break;
			case 14:
				func_1625(&iVar0, 8);
				func_1625(&iVar1, 4);
				func_1625(&iVar1, 5);
				func_1625(&iVar1, 0);
				break;
			case 13:
			case 15:
			case 16:
			case 17:
			case 18:
			case 19:
			case 20:
			case 22:
				func_1625(&iVar0, 8);
				func_1625(&iVar0, 5);
				func_1625(&iVar1, 4);
				func_1625(&iVar1, 0);
				break;
		}
		COMPANION::_0xDEB369F6AD168C58(func_179(iParam0), iVar0);
		COMPANION::_0x1740E3DEE0AE4D27(func_179(iParam0), iVar1);
	}
}

int func_1355(var uParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	*uParam0 = 0;
	*uParam1 = 0;
	bVar0 = func_840();
	bVar1 = false;
	if (bVar0 && !func_150(4))
	{
		bVar1 = true;
	}
	if ((bVar0 && func_150(37)) && !func_150(43))
	{
		*uParam0 = 0;
		*uParam1 = 0;
		return 0;
	}
	bVar2 = false;
	if ((bVar0 && func_150(43)) && !func_150(44))
	{
		bVar2 = true;
	}
	if (bVar1)
	{
		*uParam0 = 1;
		return 1;
	}
	if (!bVar1 && !bVar2)
	{
		if (func_795(0) == 1)
		{
			*uParam0 = 1;
		}
		if (func_795(1) == 1)
		{
			*uParam1 = 1;
		}
	}
	if (*uParam0 || *uParam1)
	{
		return 1;
	}
	return 0;
}

int func_1356(int iParam0)
{
	iParam0 = func_818(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_420;
}

int func_1357(int iParam0, var uParam1)
{
	if (!func_1626(iParam0))
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

int func_1358()
{
	if (func_840())
	{
		if (!func_150(3))
		{
			return func_1627(43);
		}
		if (func_150(38) && !func_150(43))
		{
			return func_1628(8);
		}
	}
	return 0;
}

Vector3 func_1359(int iParam0, int iParam1)
{
	struct<5> Var0;
	vector3 vVar5;

	func_1357(15, &Var0);
	Var0.f_2 = -1999103282;
	Var0.f_3 = iParam0;
	Var0.f_4 = iParam1;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = -495185473;
		DATAFILE::_DATAFILE_GET_VECTOR(&vVar5, &Var0);
	}
	return vVar5;
}

int func_1360(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;
	int iVar6;

	if (LAW::_0x54310AAB97B92816(PLAYER::PLAYER_ID()) <= 0)
	{
		return 0;
	}
	if (Global_1310720->f_21 == -1)
	{
		return 0;
	}
	if (Global_1310720->f_23 >= 3)
	{
		return 0;
	}
	iVar0 = func_600(Global_1310720->f_21, 2);
	if (iVar0 == -1)
	{
		return 0;
	}
	func_1357(15, &Var1);
	Var1.f_2 = -1999103282;
	Var1.f_3 = iParam0;
	Var1.f_4 = iParam1;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var1.f_1), &Var1))
	{
		Var1.f_2 = 383290544;
		DATAFILE::_DATAFILE_GET_HASH(&iVar6, &Var1);
		if (func_1629(iVar0) == iVar6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1361(int iParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_1630(iParam0);
	if (func_838(373691918) && Global_1310720->f_12)
	{
		return iVar0 == 4;
	}
	if (iParam2 != -1)
	{
		return iVar0 == iParam2;
	}
	return (uParam1 || iVar0 == -1);
}

int func_1362(int iParam0)
{
	struct<4> Var0;
	var uVar5;

	if (!func_1357(15, &Var0))
	{
		return 0;
	}
	Var0.f_3 = iParam0;
	Var0.f_2 = 303248275;
	if (DATAFILE::_DATAFILE_GET_BOOL(&uVar5, &Var0))
	{
	}
	return uVar5;
}

int func_1363(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, float fParam10)
{
	int iVar0;
	int iVar1;

	if (bParam5)
	{
		if (func_1631(iParam3, iParam4))
		{
			return 0;
		}
	}
	if (!bParam7 || func_1632(5))
	{
		if (func_1633(iParam3, iParam4))
		{
			return 0;
		}
	}
	iVar0 = func_1260(vParam0);
	if (bParam6)
	{
		iVar1 = func_1634(vParam0, 1);
		if (func_1484(iVar1) || func_1635(iVar0, 1))
		{
			return 0;
		}
	}
	if (!func_1636(iParam3, iParam4))
	{
		return 0;
	}
	if (!func_1637())
	{
		if (func_1638(iParam3, iParam4))
		{
			return 0;
		}
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam8))
	{
		if (!func_1639(iVar0))
		{
			return 0;
		}
		if (Global_1310720->f_23 >= 3)
		{
			if (Global_1310720->f_21 != -1)
			{
				if (Global_1310720->f_21 == func_1634(vParam0, 0))
				{
					return 0;
				}
			}
		}
	}
	if (!func_1640(iParam3, iParam4))
	{
		return 0;
	}
	if (func_1641(0) == 3)
	{
		if (((vParam0.x > -1480f && vParam0.x < -1475f) && vParam0.y > -359f) && vParam0.y < -354f)
		{
			return 0;
		}
	}
	if (!func_1642(65536, 2))
	{
		if (((vParam0.x > 1673f && vParam0.x < 1676f) && vParam0.y > -1888f) && vParam0.y < -1885f)
		{
			return 0;
		}
	}
	if (func_840())
	{
		if (VOLUME::_0x92A78D0BEDB332A3(iParam8))
		{
			if (!VOLUME::_0xF256A75210C5C0EB(iParam8, vParam0))
			{
				return 0;
			}
		}
		if (func_1643(vParam0, fParam10) || func_1644(vParam0, fParam10))
		{
			return 0;
		}
	}
	else if (bParam9)
	{
		if (vParam0.x < -450f && vParam0.y < -600f)
		{
			return 0;
		}
	}
	return 1;
}

bool func_1364(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_1365(char* sParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(((*Global_1934603)[iVar0 /*16*/])->f_10), sParam0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_1366(var uParam0)
{
	if (func_1364(uParam0, 1))
	{
		func_1645(1);
	}
}

int func_1367(int iParam0)
{
	if ((((((iParam0 == 11 || iParam0 == 13) || iParam0 == 15) || iParam0 == 16) || iParam0 == 19) || iParam0 == 20) || iParam0 == 22)
	{
		return 0;
	}
	return 1;
}

bool func_1368(int iParam0)
{
	return func_537(iParam0, 5, 1);
}

int func_1369(int iParam0)
{
	if (iParam0 == 14)
	{
		return 0;
	}
	return 1;
}

bool func_1370(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

int func_1371(int iParam0)
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

int func_1372(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_1646(iVar0, &uVar2, &uVar3, &iVar1, &uVar4);
	if (func_1647(&uVar5, iVar0, iVar1, uVar2))
	{
	}
	return uVar5;
}

int func_1373(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::_0x31FEF6A20F00B963(iParam0);
	if (iVar0 == 0)
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			iVar0 = func_1648(iVar1);
		}
	}
	return iVar0;
}

struct<10> func_1374(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<10> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	if (iParam0 != 0 && iParam0 != -1591664384)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0)
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
	if (iParam6 != -1)
	{
		Var0.f_6 = iParam6;
	}
	if (iParam7 != 0)
	{
		Var0.f_8 = iParam7;
	}
	if (iParam8 != 0)
	{
		Var0.f_7 = iParam8;
	}
	return Var0;
}

int func_1375(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<37> Var0;
	int iVar47;

	*uParam3 = 0;
	if (*uParam2 < 15)
	{
		return 0;
	}
	if (!func_983(iParam0, 0))
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
	*uParam3 = Var0.f_3;
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
		func_1649(iParam0, iParam1, uParam2, *uParam3);
	}
	return 1;
}

struct<8> func_1376(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			return func_1650("inworld_music_wax_cylinder");
		case 6:
			return func_1650("inworld_music_wax_cylinder_camp_dancing");
		default:
			break;
	}
	return func_1650("");
}

Vector3 func_1377(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_1651("1");
		case 1:
			return func_1651("2");
		case 2:
			return func_1651("3");
		case 3:
			return func_1651("4");
		case 4:
			return func_1651("5");
		case 5:
			return func_1651("6");
		case 6:
			return func_1651("1");
		default:
			break;
	}
	return func_1651("");
}

int func_1378(var uParam0)
{
	return uParam0 & 31;
}

int func_1379(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if ((Global_1946804->f_57[iVar0 /*11*/])->f_8 == iParam0)
		{
			return func_1652(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

bool func_1380()
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

int func_1381(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_983(iParam0, 0))
	{
		return 0;
	}
	if (Global_1935630->f_12)
	{
		return 0;
	}
	iVar0 = func_1176(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_1653("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1074(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_1398(Var4.f_4))
			{
			}
			else if (WEAPON::_0x5C2EA6C44F515F34(Var4.f_4) == iVar0)
			{
				func_1077(iVar1);
				return 1;
			}
			iVar3++;
		}
		func_1077(iVar1);
	}
	return 0;
}

int func_1382()
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
		else if ((((WEAPON::IS_WEAPON_VALID(iVar0) && WEAPON::_0x0556E9D2ECF39D01(iVar0)) && !func_1654(iVar0)) && !PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true)) && !(PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && !CAM::_0xA24C1D341C6E0D53(1, 0, 0)))
		{
			return 3;
		}
		else if (iVar0 == joaat("weapon_kit_binoculars"))
		{
			return 1;
		}
		else if ((WEAPON::IS_WEAPON_VALID(iVar0) && func_1654(iVar0)) || iVar0 == joaat("weapon_lasso"))
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

void func_1383(int iParam0)
{
	PAD::DISABLE_CONTROL_ACTION(0, -236813012, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1971208180, false);
	PAD::DISABLE_CONTROL_ACTION(0, -558006538, false);
	PAD::DISABLE_CONTROL_ACTION(0, 383204893, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1644869882, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1750532712, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1228478939, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1225530114, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1210409198, false);
	PAD::DISABLE_CONTROL_ACTION(0, -674562833, false);
	PAD::DISABLE_CONTROL_ACTION(0, -197984200, false);
	PAD::DISABLE_CONTROL_ACTION(0, -238861894, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1537201378, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1847550875, false);
	PAD::DISABLE_CONTROL_ACTION(0, -248506778, false);
	PAD::DISABLE_CONTROL_ACTION(0, -17122892, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1708280984, false);
	PAD::DISABLE_CONTROL_ACTION(0, -890654697, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1644850270, false);
	PAD::DISABLE_CONTROL_ACTION(0, 585168871, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1752838637, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1226157066, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1671483992, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1915927219, false);
	PAD::DISABLE_CONTROL_ACTION(0, 139329429, false);
	PAD::DISABLE_CONTROL_ACTION(0, 827890385, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1122746426, false);
	PAD::DISABLE_CONTROL_ACTION(0, -299367216, false);
	PAD::DISABLE_CONTROL_ACTION(0, 665666611, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1589851512, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1252087310, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2074653976, false);
	PAD::DISABLE_CONTROL_ACTION(0, -271587657, false);
	PAD::DISABLE_CONTROL_ACTION(0, 598619298, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1808336124, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2003148177, false);
	PAD::DISABLE_CONTROL_ACTION(0, 211270343, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1048377764, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1437157082, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1182422434, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1652311577, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1156046995, false);
	PAD::DISABLE_CONTROL_ACTION(0, -410363332, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1184686705, false);
	PAD::DISABLE_CONTROL_ACTION(0, -101775574, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1171447126, false);
	PAD::DISABLE_CONTROL_ACTION(0, -762559377, false);
	PAD::DISABLE_CONTROL_ACTION(0, -172830981, false);
	PAD::DISABLE_CONTROL_ACTION(0, -677830796, false);
	PAD::DISABLE_CONTROL_ACTION(0, 2102517284, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1679904073, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1538519165, false);
	PAD::DISABLE_CONTROL_ACTION(0, -41065305, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1482593325, false);
	PAD::DISABLE_CONTROL_ACTION(0, 308778731, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1002303471, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1771341755, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1459101765, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2032700426, false);
	PAD::DISABLE_CONTROL_ACTION(0, 2120975890, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1879610457, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1033498310, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1074497799, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1623727326, false);
	PAD::DISABLE_CONTROL_ACTION(0, -922478227, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1520437207, false);
	PAD::DISABLE_CONTROL_ACTION(0, -513041747, false);
	PAD::DISABLE_CONTROL_ACTION(0, -874806616, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2128083607, false);
	PAD::DISABLE_CONTROL_ACTION(0, -128997553, false);
	PAD::DISABLE_CONTROL_ACTION(0, 130948705, false);
	PAD::DISABLE_CONTROL_ACTION(0, -640622144, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1879280170, false);
	PAD::DISABLE_CONTROL_ACTION(0, -485697785, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1938056823, false);
	PAD::DISABLE_CONTROL_ACTION(0, -822242784, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1301263553, false);
	PAD::DISABLE_CONTROL_ACTION(0, -39308912, false);
	if (iParam0 == 1)
	{
		PAD::DISABLE_CONTROL_ACTION(0, -1450761377, false);
		PAD::DISABLE_CONTROL_ACTION(0, -771458680, false);
	}
}

void func_1384(int iParam0)
{
	int iVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		return;
	}
	if (!VEHICLE::_0xEA44E97849E9F3DD(*iParam0))
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = VEHICLE::_0xA8BA0BAE0173457B(*iParam0, iVar0);
		if (func_344(iVar1, 1))
		{
			TASK::CLEAR_PED_TASKS(iVar1, 1, 0);
			TASK::TASK_STAND_STILL(iVar1, -1);
		}
		iVar0++;
	}
}

void func_1385(int iParam0)
{
	if (func_952(iParam0, 0))
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

void func_1386(int iParam0)
{
	int iVar0;

	if (!func_536(iParam0))
	{
		return;
	}
	if (func_417(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_138(iParam0);
	func_1385(iVar0);
	func_1025(iParam0, 8192, 1);
}

void func_1387(int iParam0)
{
	if (func_952(iParam0, 0))
	{
		return;
	}
	ENTITY::SET_ENTITY_INVINCIBLE(iParam0, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 179, false);
	ENTITY::SET_ENTITY_PROOFS(iParam0, 0, false);
}

void func_1388(int iParam0)
{
	int iVar0;

	if (!func_536(iParam0))
	{
		return;
	}
	if (func_417(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_138(iParam0);
	func_1387(iVar0);
	func_1025(iParam0, 8192, 0);
}

void func_1389(int iParam0)
{
	if (func_952(iParam0, 0))
	{
		return;
	}
	PED::SET_PED_CAN_RAGDOLL(iParam0, true);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iParam0, 1048575);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 8229);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iParam0, false);
}

void func_1390(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (func_357(14))
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

void func_1391(int iParam0)
{
	int iVar0;

	if (!func_536(iParam0))
	{
		return;
	}
	if (func_417(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_138(iParam0);
	func_1389(iVar0);
	func_1025(iParam0, 16384, 1);
}

void func_1392(int iParam0)
{
	if (func_952(iParam0, 0))
	{
		return;
	}
	PED::SET_PED_CAN_RAGDOLL(iParam0, true);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iParam0, 1048575);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 1);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iParam0, true);
}

void func_1393(int iParam0)
{
	int iVar0;

	if (!func_536(iParam0))
	{
		return;
	}
	if (func_417(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_138(iParam0);
	func_1392(iVar0);
	func_1025(iParam0, 16384, 0);
}

int func_1394(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = func_1655(iParam0, 1);
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
	return 1;
}

int func_1395(int iParam0, int iParam1)
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
		if (func_547(iParam1, iVar1))
		{
			iVar2 = iVar1;
		}
	}
	return iVar2;
}

int func_1396(int iParam0)
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

void func_1397(int iParam0, int iParam1)
{
	(Global_40.f_4942[iParam0 /*60*/])->f_5 = ((Global_40.f_4942[iParam0 /*60*/])->f_5 - ((Global_40.f_4942[iParam0 /*60*/])->f_5 && iParam1));
}

bool func_1398(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("weapon_unarmed"));
}

int func_1399(int iParam0)
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

int func_1400(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_1656(iParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_1657((375 + iVar28), 1);
			if (func_1425(iParam0, &Var0, iVar5, 0))
			{
				if (func_1426(iParam0, &Var6, iVar5))
				{
					Var29 = { func_1054(iParam0, Var0, iVar5, 0) };
					func_1055(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_1421(0))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
					{
						return 0;
					}
					func_1658(WEAPON::_0x5C2EA6C44F515F34(iParam0), iParam1, iParam6);
					func_1659(iParam0, iParam1);
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

void func_1401(int iParam0, int iParam1, float fParam2)
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

bool func_1402(bool bParam0)
{
	return WEAPON::_0x1F7977C9101F807F(WEAPON::_0x5C2EA6C44F515F34(bParam0));
}

void func_1403(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_1080(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || iParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, iParam1, iParam3);
	}
}

void func_1404(int iParam0, int iParam1)
{
	if (func_1080(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 2 || iParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 2);
		}
	}
}

void func_1405(int iParam0, int iParam1)
{
	if (func_1080(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || iParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
	}
}

void func_1406(int iParam0, int iParam1)
{
	if (func_1080(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 0 || iParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 0);
		}
	}
}

int func_1407()
{
	return 1;
}

float func_1408(int iParam0, int iParam1, bool bParam2)
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
	return func_702(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
}

void func_1409(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_138(iParam0);
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

void func_1410(int iParam0)
{
	int iVar0;

	if (!func_536(iParam0))
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

void func_1411(int iParam0, int iParam1)
{
	if (!func_536(iParam0))
	{
		return;
	}
	((*Global_1360165)[iParam0 /*1157*/])->f_70.f_12 = iParam1;
}

int func_1412(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_1413(var uParam0, int iParam1)
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

void func_1414(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 62914560);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_1415(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_1039(*uParam0);
	iVar1 = func_1038(*uParam0);
	if (iParam1 < 1 || iParam1 > func_1042(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4063232);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_1416(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 126976);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_1417(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4032);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_1418(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 63);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

int func_1419(var uParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_1420(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(func_516(bParam5), &uParam0, uParam4, !bParam6))
	{
		return 0;
	}
	return 1;
}

int func_1421(bool bParam0)
{
	if (func_56() == -1)
	{
		return 1;
	}
	return INVENTORY::_0x0FBBFFC891A97C81(func_516(bParam0));
}

int func_1422(var uParam0)
{
	if (!func_983(*uParam0, 0))
	{
		return 0;
	}
	switch (*uParam0)
	{
		case -1073808995:
			*uParam0 = -1753819339; /* GXTEntry: "Cricket Bait" */
			return 1;
		case 1903483453:
			*uParam0 = -1527293029; /* GXTEntry: "Worm Bait" */
			return 1;
		case -541584777:
			*uParam0 = 206762213; /* GXTEntry: "Cocaine Gum" */
			return 1;
		case 998010398:
			*uParam0 = -324053813; /* GXTEntry: "Chewing Tobacco" */
			return 1;
		case -1424823393:
			*uParam0 = -885810591; /* GXTEntry: "Premium Cigarettes" */
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_1423(int iParam0)
{
	return func_1175(iParam0) == -427144552;
}

struct<4> func_1424(bool bParam0)
{
	int iVar0;

	iVar0 = func_516(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224214))
		{
			*Global_1224214 = { func_1054(923904168, func_915(bParam0), -740156546, bParam0) };
		}
		return *Global_1224214;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224222))
		{
			*Global_1224222 = { func_1054(923904168, func_915(bParam0), -740156546, 0) };
		}
		return *Global_1224222;
	}
	return func_1054(923904168, func_915(bParam0), -740156546, 0);
}

bool func_1425(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_1430(iParam0, *uParam1, iParam2, bParam3) > 0;
}

int func_1426(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_1660(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

int func_1427(int iParam0, bool bParam1)
{
	if (func_517(iParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
	{
		if (bParam1)
		{
			return func_1661(-1185145312, 0) > 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_1428(int iParam0, var uParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	bool bVar28;
	int iVar29;

	if (!func_983(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_1656(iParam0, 0, 1) };
	iVar5 = 1728382685; /* GXTEntry: "Right" */
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_1657((375 + iVar29), 1);
		if (func_1425(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_1426(iParam0, &Var6, iVar5);
			if ((iParam2 && bVar28) || !bVar28)
			{
				*uParam1 = iVar5;
				return 1;
			}
		}
		iVar29++;
	}
	return 0;
}

int func_1429(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_983(iParam0, 0))
	{
		return 0;
	}
	if (!func_1421(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_0xE80E50BEE276A54A(iParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_516(bParam3), iParam0);
}

int func_1430(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;

	if (!func_983(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_1054(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_516(bParam6), &Var0, 0);
	return uVar4;
}

int func_1431(int iParam0, int iParam1)
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

bool func_1432(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_1433(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_12105[iParam0 /*7*/])->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_1662(iParam0);
	}
	else
	{
		func_1663(iParam0, iParam1);
	}
	func_1664();
}

void func_1434(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_2 = iParam1;
}

void func_1435(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_3 = iParam1;
}

void func_1436(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_4 = iParam1;
}

void func_1437(int iParam0, var uParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12105[iParam0 /*7*/] = uParam1;
		return;
	}
	Global_1058888->f_498[iParam0 /*2*/] = uParam1;
}

void func_1438(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_12105[iParam0 /*7*/])->f_5 = iParam1;
		return;
	}
	(Global_1058888->f_498[iParam0 /*2*/])->f_1 = iParam1;
}

bool func_1439(int iParam0, int iParam1)
{
	if (func_56() != -1)
	{
		return false;
	}
	if (!func_422(iParam0))
	{
		return false;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(func_864(iParam0)))
	{
		return false;
	}
	if (iParam1 && !ENTITY::DOES_ENTITY_EXIST(func_1064(iParam0)))
	{
		return false;
	}
	return !_NAMESPACE48::_0xEB98B38CA60742D7(func_864(iParam0));
}

Vector3 func_1440(vector3 vParam0, vector3 vParam3, vector3 vParam6)
{
	vector3 vVar0;

	vVar0 = { func_1665(vParam6, vParam3) };
	return vParam0 + vVar0;
}

void func_1441(int iParam0, var uParam1)
{
	if (Global_40.f_4283 == 3)
	{
		if (*uParam1 == 3)
		{
			INTERIOR::FORCE_ROOM_FOR_ENTITY(&(uParam1->f_9[iParam0 /*9*/]), INTERIOR::GET_INTERIOR_AT_COORDS(uParam1->f_3), -1289461573);
		}
	}
}

int func_1442(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	var uVar9;

	if (!func_983(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_915(0) };
	Var0.f_4 = func_1443(iParam1);
	Var5 = { func_1054(iParam0, Var0, Var0.f_4, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var5))
	{
		return 0;
	}
	uVar9 = INVENTORY::_0xC97E0D2302382211(func_516(0), &Var5, 0);
	return uVar9;
}

int func_1443(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1084182731;
		case 1:
			return -1360128126;
		case 2:
			return 1426626782;
		case 3:
			return 1227915917;
		default:
			break;
	}
	return 1084182731;
}

void func_1444(var uParam0)
{
	Global_1914319->f_15923 = uParam0;
}

bool func_1445(int iParam0)
{
	return iParam0 != 0;
}

int func_1446(vector3 vParam0, int iParam3)
{
	vector3 vVar0;
	struct<2> Var3;
	float fVar6;

	func_1666(iParam3, &vVar0, &Var3, &fVar6);
	if (func_1667(vParam0, vVar0, Var3, Var3.f_1, fVar6))
	{
		return 1;
	}
	return 0;
}

int func_1447(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1[3];
	int iVar5[3];
	int iVar9[3];
	int iVar13[3];
	int iVar17;

	uVar0 = func_1311();
	iVar1[0] = -1687561002;
	iVar1[1] = 1957225320;
	iVar1[2] = -860696938;
	iVar5[0] = -1971474291;
	iVar5[1] = -1425946870;
	iVar5[2] = -1114426126;
	iVar9[0] = -316909020;
	iVar9[1] = -1962893335;
	iVar9[2] = 1351589798;
	iVar13[0] = 300868838;
	iVar13[1] = -1788578071;
	iVar13[2] = 1157066259;
	if (((func_1668() || func_676(((*Global_1347702)[59 /*49*/])->f_15)) || func_676(((*Global_1347702)[0 /*49*/])->f_15)) || func_705(64))
	{
		iVar13[0] = -316909020;
		iVar13[1] = -1962893335;
		iVar13[2] = 1351589798;
		if (iParam0 == 0)
		{
			if (STREAMING::_IS_IMAP_ACTIVE(300868838))
			{
				STREAMING::_REMOVE_IMAP(300868838);
			}
			if (STREAMING::_IS_IMAP_ACTIVE(-1788578071))
			{
				STREAMING::_REMOVE_IMAP(-1788578071);
			}
			if (STREAMING::_IS_IMAP_ACTIVE(1157066259))
			{
				STREAMING::_REMOVE_IMAP(1157066259);
			}
		}
		if (func_477(((*Global_1835011)[9 /*74*/])->f_1) == 0 && func_676(((*Global_1835011)[9 /*74*/])->f_1) == 0)
		{
			if (iParam0 == 0)
			{
				if (STREAMING::_IS_IMAP_ACTIVE(1475953931))
				{
					STREAMING::_REMOVE_IMAP(1475953931);
				}
				if (STREAMING::_IS_IMAP_ACTIVE(1475953931))
				{
					STREAMING::_REMOVE_IMAP(1475953931);
				}
				if (STREAMING::_IS_IMAP_ACTIVE(1475953931))
				{
					STREAMING::_REMOVE_IMAP(1475953931);
				}
			}
		}
	}
	if (((((func_477(((*Global_1835011)[9 /*74*/])->f_1) || func_676(((*Global_1835011)[9 /*74*/])->f_1)) || func_532()) || func_32() == 2) || func_676(((*Global_1347702)[66 /*49*/])->f_15)) || ((func_676(((*Global_1835011)[10 /*74*/])->f_1) && func_150(11)) && func_705(64) == 0))
	{
		iVar9[0] = 1475953931;
		iVar9[1] = 1475953931;
		iVar9[2] = 1475953931;
		iVar13[0] = 1475953931;
		iVar13[1] = 1475953931;
		iVar13[2] = 1475953931;
	}
	else
	{
		iVar9[0] = -316909020;
		iVar9[1] = -1962893335;
		iVar9[2] = 1351589798;
	}
	if (func_680() || func_676(((*Global_1835011)[4 /*74*/])->f_1))
	{
		iVar5[0] = &iVar1[0];
		iVar5[1] = &iVar1[1];
		iVar5[2] = &iVar1[2];
	}
	if (func_1669(1) && iParam0 == 1)
	{
		iVar1[0] = -1971474291;
		iVar1[1] = -1425946870;
		iVar1[2] = -1114426126;
		iVar5[0] = -1687561002;
		iVar5[1] = 1957225320;
		iVar5[2] = -860696938;
		iVar17 = 0;
		while (iVar17 < 3)
		{
			if (STREAMING::_IS_IMAP_ACTIVE(&(iVar1[iVar17])))
			{
				STREAMING::_REMOVE_IMAP(&(iVar1[iVar17]));
			}
			if (STREAMING::_IS_IMAP_ACTIVE(&(iVar5[iVar17])))
			{
				STREAMING::_REMOVE_IMAP(&(iVar5[iVar17]));
			}
			iVar17++;
		}
		return func_1450();
	}
	switch (iParam0)
	{
		case 1:
			uVar0 = func_1670(&iVar1, &iVar5, bParam1);
			break;
		case 0:
			uVar0 = func_1670(&iVar9, &iVar13, bParam1);
			break;
	}
	return uVar0;
}

var func_1448(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1[3];
	int iVar5[3];
	int iVar9[3];
	int iVar13[3];

	uVar0 = func_1311();
	iVar1[0] = 1209017192;
	iVar1[1] = -2143243848;
	iVar1[2] = 510052409;
	iVar5[0] = -644575724;
	iVar5[1] = 291770965;
	iVar5[2] = 1700661865;
	iVar9[0] = 1070723367;
	iVar9[1] = 1070723367;
	iVar9[2] = 1070723367;
	if ((((((func_477(((*Global_1835011)[22 /*74*/])->f_1) || func_676(((*Global_1835011)[22 /*74*/])->f_1)) || func_477(((*Global_1835011)[26 /*74*/])->f_1)) || func_676(((*Global_1835011)[26 /*74*/])->f_1)) || ((func_676(((*Global_1835011)[20 /*74*/])->f_1) || func_150(20)) && func_150(22) == 0)) || (((func_676(((*Global_1835011)[19 /*74*/])->f_1) || (func_498(&Global_1898437) == 19 && func_1671())) || func_150(19)) && func_150(22) == 0)) && func_705(64) == 0)
	{
		if (iParam0 == 0)
		{
			if (STREAMING::_IS_IMAP_ACTIVE(-109425099))
			{
				STREAMING::_REMOVE_IMAP(-109425099);
			}
		}
		iVar13[0] = 1261237250;
		iVar13[1] = 1261237250;
		iVar13[2] = 1261237250;
		iVar9[0] = 1261237250;
		iVar9[1] = 1261237250;
		iVar9[2] = 1261237250;
	}
	else
	{
		if (iParam0 == 0)
		{
			if (STREAMING::_IS_IMAP_ACTIVE(1261237250))
			{
				STREAMING::_REMOVE_IMAP(1261237250);
			}
		}
		iVar13[0] = -109425099;
		iVar13[1] = -109425099;
		iVar13[2] = -109425099;
	}
	if ((((func_477(((*Global_1835011)[23 /*74*/])->f_1) || func_676(((*Global_1835011)[23 /*74*/])->f_1)) || (((func_150(22) && func_150(23) == 0) && func_150(24)) && (func_892(20) || func_150(20)))) || (((func_150(22) && func_150(23) == 0) && func_150(20)) && (func_892(24) || func_150(24)))) || func_705(64))
	{
		if (iParam0 == 0)
		{
			if (STREAMING::_IS_IMAP_ACTIVE(1070723367))
			{
				STREAMING::_REMOVE_IMAP(1070723367);
			}
		}
		iVar9[0] = -109425099;
		iVar9[1] = -109425099;
		iVar9[2] = -109425099;
	}
	if (func_680())
	{
		iVar5[0] = &iVar1[0];
		iVar5[1] = &iVar1[1];
		iVar5[2] = &iVar1[2];
	}
	switch (iParam0)
	{
		case 1:
			uVar0 = func_1670(&iVar1, &iVar5, bParam1);
			break;
		case 0:
			uVar0 = func_1670(&iVar13, &iVar9, bParam1);
			break;
	}
	return uVar0;
}

var func_1449(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1[3];
	int iVar5[3];
	int iVar9[3];
	int iVar13[3];

	uVar0 = func_1311();
	iVar1[0] = 531106429;
	iVar1[1] = 531106429;
	iVar1[2] = 531106429;
	iVar5[0] = 1069611813;
	iVar5[1] = 1069611813;
	iVar5[2] = 1069611813;
	iVar9[0] = 1102643191;
	iVar9[1] = 1102643191;
	iVar9[2] = 1102643191;
	iVar13[0] = 44502487;
	iVar13[1] = 44502487;
	iVar13[2] = 44502487;
	if ((((((func_477(((*Global_1835011)[57 /*74*/])->f_1) || func_676(((*Global_1835011)[57 /*74*/])->f_1)) || func_477(((*Global_1835011)[59 /*74*/])->f_1)) || func_676(((*Global_1835011)[59 /*74*/])->f_1)) || func_477(((*Global_1835011)[58 /*74*/])->f_1)) || func_676(((*Global_1835011)[58 /*74*/])->f_1)) || func_1672())
	{
		iVar13[0] = 1102643191;
		iVar13[1] = 1102643191;
		iVar13[2] = 1102643191;
		if (iParam0 == 0)
		{
			if (STREAMING::_IS_IMAP_ACTIVE(44502487))
			{
				STREAMING::_REMOVE_IMAP(44502487);
			}
		}
	}
	if (func_680())
	{
		iVar5[0] = &iVar1[0];
		iVar5[1] = &iVar1[1];
		iVar5[2] = &iVar1[2];
	}
	switch (iParam0)
	{
		case 1:
			uVar0 = func_1670(&iVar1, &iVar5, bParam1);
			break;
		case 0:
			uVar0 = func_1670(&iVar9, &iVar13, bParam1);
			break;
	}
	return uVar0;
}

int func_1450()
{
	return 0;
}

bool func_1451(int iParam0)
{
	return (Global_1357549->f_1885 == iParam0 && !func_1673(&(Global_1357549->f_1901)));
}

void func_1452(int iParam0)
{
	STREAMING::_REQUEST_IMAP(iParam0);
}

bool func_1453(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = uParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_1934765->f_21[iVar1]), iVar2);
}

void func_1454(int iParam0, bool bParam1, int iParam2)
{
	switch (iParam0)
	{
		case -2000080725:
			if (bParam1)
			{
				*iParam2 = GRAPHICS::_0xFA50F79257745E74(701.0167f, -1247.185f, 43.9899f, 3f, 2, -1, 0);
			}
			else
			{
				GRAPHICS::_0x9CF1836C03FB67A2(iParam2, 0);
			}
			break;
	}
	switch (iParam0)
	{
		case -1563072795:
		case 607574432:
		case 825179479:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(-125.9479f, -39.4579f, 94.6035f, 4f);
			break;
		case -2016771661:
		case 202127432:
		case 2072112547:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(653.7093f, -1244.043f, 42.6971f, 4f);
			break;
		case -782359587:
		case 2728487:
		case 1674800958:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(660.9469f, -1255.986f, 42.7088f, 4f);
			break;
		case -1642249622:
		case 1084869405:
		case 1636281938:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(674.1929f, -1266.091f, 42.984f, 4f);
			break;
		case -1451784475:
		case 1028224932:
		case 1128417383:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(673.2328f, -1239.627f, 43.1471f, 4f);
			break;
		case -1123811713:
		case -546137515:
		case 1679038623:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(658.2036f, -1233.099f, 43.2507f, 4f);
			break;
		case -1279618207:
		case -751959361:
		case 1742990618:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(678.267f, -1251.873f, 43.0153f, 4f);
			break;
		case -1620486708:
		case -223906810:
		case 163126540:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(-118.3392f, -35.8852f, 94.7422f, 4f);
			break;
		case -379409079:
		case 1808508475:
		case 2015311123:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(-111.4885f, -39.7478f, 94.8525f, 4f);
			break;
		case -1920340119:
		case -1576393943:
		case -413795019:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(-123.9274f, -22.8559f, 95.0845f, 4f);
			break;
		case -1987982797:
		case -1933895237:
		case -104137172:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(-147.6751f, -24.5264f, 95.2101f, 4f);
			break;
		case -1426249148:
		case -182995231:
		case 1267297807:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(-142.3644f, -21.2133f, 95.0883f, 4f);
			break;
		case -638481378:
		case -621187540:
		case 1079213989:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(1880.102f, -1880.512f, 41.9323f, 4f);
			break;
		case -882188392:
		case 773757120:
		case 964593693:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(1870.625f, -1872.112f, 41.8191f, 4f);
			break;
		case -2147051362:
		case -997495998:
		case 266022415:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(1887.52f, -1880.757f, 41.9442f, 4f);
			break;
		case -1910456812:
		case -1115840558:
		case 1674493966:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(1877.485f, -1861f, 41.8078f, 4f);
			break;
	}
}

int func_1455(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_40.f_4283.f_320;
		case 1:
			return Global_40.f_4283.f_318;
		case 2:
			return Global_40.f_4283.f_319;
	}
	return 1;
}

void func_1456(bool bParam0)
{
	int iVar0;
	int iVar1[4];
	int iVar6;
	int iVar7;

	iVar0 = (func_384(3, 0) - 1);
	iVar1[0] = -916538063;
	iVar1[1] = -916538063;
	iVar1[2] = 110400393;
	iVar1[3] = 110400393;
	iVar6 = &iVar1[iVar0];
	if (bParam0)
	{
		if (STREAMING::_IS_IMAP_ACTIVE(iVar6) == 0)
		{
			STREAMING::_REQUEST_IMAP(iVar6);
		}
		iVar7 = 0;
		while (iVar7 < 4)
		{
			if (STREAMING::_IS_IMAP_ACTIVE(&(iVar1[iVar7])))
			{
				if (&iVar1[iVar7] != iVar6)
				{
					STREAMING::_REMOVE_IMAP(&(iVar1[iVar7]));
				}
			}
			iVar7++;
		}
	}
	else
	{
		iVar7 = 0;
		while (iVar7 < 4)
		{
			if (STREAMING::_IS_IMAP_ACTIVE(&(iVar1[iVar7])))
			{
				STREAMING::_REMOVE_IMAP(&(iVar1[iVar7]));
			}
			iVar7++;
		}
	}
}

void func_1457(bool bParam0)
{
	int iVar0[3];
	int iVar4;

	if (bParam0)
	{
		iVar0[0] = -1370620659;
		iVar0[1] = -624219879;
		iVar0[2] = 715730031;
	}
	else
	{
		iVar0[0] = 5585502;
		iVar0[1] = -1362716862;
		iVar0[2] = 482931525;
	}
	iVar4 = 0;
	while (iVar4 < 3)
	{
		if (STREAMING::_IS_IMAP_ACTIVE(&(iVar0[iVar4])))
		{
			if (&iVar0[iVar4] != func_1450())
			{
				STREAMING::_REMOVE_IMAP(&(iVar0[iVar4]));
			}
		}
		iVar4++;
	}
}

void func_1458()
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_1357549->f_1674))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1357549->f_1674))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1357549->f_1674, true, false);
		}
		if (ENTITY::IS_ENTITY_DEAD(Global_1357549->f_1674) == 0)
		{
			VEHICLE::DELETE_VEHICLE(&(Global_1357549->f_1674));
		}
	}
}

void func_1459(var uParam0)
{
}

void func_1460(var uParam0)
{
	if ((func_344(Global_35, 0) && func_1674(*uParam0)) && PED::_0x7C8AA850617651D9(Global_35, *uParam0))
	{
		func_1675(*uParam0);
	}
	if ((!func_344(Global_35, 0) || !func_1674(*uParam0)) || !PED::_0x7C8AA850617651D9(Global_35, *uParam0))
	{
		func_1463(uParam0);
	}
}

bool func_1461(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return false;
	}
	return MISC::IS_BIT_SET(&Global_1347701, iParam0);
}

void func_1462(int iParam0, bool bParam1)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return;
	}
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(&Global_1347701, iParam0))
		{
			MISC::SET_BIT(Global_1347701, iParam0);
		}
	}
	else if (MISC::IS_BIT_SET(&Global_1347701, iParam0))
	{
		MISC::CLEAR_BIT(Global_1347701, iParam0);
	}
}

void func_1463(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
	uParam0->f_2 = 0;
}

bool func_1464(int iParam0, int iParam1)
{
	return (Global_40.f_4942[iParam0 /*60*/])->f_8 == iParam1;
}

int func_1465(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 0;
	while (*iParam2 < 10)
	{
		if (&(Global_40.f_4942[iParam0 /*60*/])->f_11[*iParam2 /*3*/] == iParam1)
		{
			return 1;
		}
		*iParam2++;
	}
	*iParam2 = -1;
	return 0;
}

int func_1466(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_536(iParam0))
	{
		return 0;
	}
	if (func_1464(iParam0, iParam1))
	{
		return func_1676(iParam0);
	}
	iVar0 = -1;
	if (func_1465(iParam0, iParam1, &iVar0))
	{
		return func_1468(iParam0, iVar0);
	}
	return 0;
}

void func_1467(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_179(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		PED::_0x2B4CE170DE09F346(iVar0, iParam1);
	}
	func_1677(iParam0, iParam1, 0);
}

bool func_1468(int iParam0, int iParam1)
{
	if ((!func_536(iParam0) || iParam1 < 0) || iParam1 >= 10)
	{
		return false;
	}
	return MISC::IS_BIT_SET(((*Global_1360165)[iParam0 /*1157*/])->f_1155, iParam1);
}

void func_1469(int iParam0, int iParam1, bool bParam2)
{
	if ((!func_536(iParam0) || iParam1 < 0) || iParam1 >= 10)
	{
		return;
	}
	if (bParam2)
	{
		if (!MISC::IS_BIT_SET(((*Global_1360165)[iParam0 /*1157*/])->f_1155, iParam1))
		{
			MISC::SET_BIT(&(((*Global_1360165)[iParam0 /*1157*/])->f_1155), iParam1);
		}
	}
	else if (MISC::IS_BIT_SET(((*Global_1360165)[iParam0 /*1157*/])->f_1155, iParam1))
	{
		MISC::CLEAR_BIT(&(((*Global_1360165)[iParam0 /*1157*/])->f_1155), iParam1);
	}
}

var func_1470(char* sParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_1471(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
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
	return MISC::_CREATE_VAR_STRING(2, func_1678(sParam1));
}

Vector3 func_1472(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 0:
			switch (&uParam0->f_5[0])
			{
				case 0:
					return -1638.25f, -1382.69f, 82.78f;
				case 1:
					return -1636.39f, -1381.87f, 82.76f;
				case 2:
					return -1636.6f, -1382.7f, 82.71f;
				case 3:
					return -1635.53f, -1381.75f, 82.73f;
				default:
					break;
			}
			break;
		case 4:
			switch (&uParam0->f_5[0])
			{
				case 0:
					return -1650.74f, -1366.61f, 82.96f;
				case 1:
					return -1650.25f, -1367.01f, 82.96f;
				default:
					break;
			}
			break;
		case 2:
			switch (&uParam0->f_5[0])
			{
				case 0:
					return -1607.25f, -1417.54f, 80.96f;
				case 1:
					return -1563.83f, -1424.21f, 81.2f;
				case 2:
					return -1581.57f, -1406.39f, 80.25f;
				default:
					break;
			}
			break;
		case 3:
			switch (&uParam0->f_5[0])
			{
				case 0:
					return -1640.1f, -1427.11f, 81.76f;
				case 1:
					return -1628.33f, -1433.02f, 81.46f;
				case 2:
					return -1620.52f, -1436.23f, 81.19f;
				default:
					break;
			}
			break;
		case 10:
			if (func_150(76))
			{
				switch (&uParam0->f_5[0])
				{
					case 0:
						return -1641.07f, -1354.04f, 83.4f;
					default:
						break;
				}
			}
			else
			{
				switch (&uParam0->f_5[0])
				{
					case 0:
						return -1641.4f, -1354.87f, 83.4f;
					default:
						break;
				}
			}
			break;
		case 14:
			switch (&uParam0->f_5[0])
			{
				case 0:
					return -1587.35f, -1393.41f, 80.33f;
				default:
					break;
			}
			break;
		case 6:
			switch (&uParam0->f_5[0])
			{
				case 0:
					return -1585.48f, -1389.92f, 80.23f;
				case 1:
					return -1586f, -1390.68f, 80.25f;
				default:
					break;
			}
			break;
		case 5:
			switch (&uParam0->f_5[0])
			{
				case 0:
					return -1608.26f, -1412.23f, 80.94f;
				case 1:
					return -1608.64f, -1412.9f, 80.94f;
				default:
					break;
			}
			break;
		case 9:
			switch (&uParam0->f_5[0])
			{
				case 0:
					return -1626.92f, -1416.33f, 82.27f;
				default:
					break;
			}
			break;
		case 8:
			switch (&uParam0->f_5[0])
			{
				case 0:
					return -1584.08f, -1398.66f, 80.27f;
				case 1:
					return -1586.557f, -1398.762f, 80.32503f;
				case 2:
					return -1584.359f, -1397.728f, 80.26461f;
				case 3:
					return -1584.211f, -1399.771f, 80.27618f;
				default:
					break;
			}
			break;
		case 7:
			switch (&uParam0->f_5[0])
			{
				case 0:
					return -1655.76f, -1339.93f, 82.97f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_1473(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 0:
			switch (&uParam0->f_5[0])
			{
				case 0:
					return -109.76f, -35.51f, 94.73f;
				case 1:
					return -108.44f, -35.57f, 94.79f;
				default:
					break;
			}
			break;
		case 10:
			switch (&uParam0->f_5[0])
			{
				case 0:
					return -139.6f, -17.75f, 95.09f;
				case 1:
					return -142.41f, -15.92f, 95.09f;
				case 2:
					return -141.64f, -15.97f, 95.09f;
				default:
					break;
			}
			break;
		case 4:
			switch (&uParam0->f_5[0])
			{
				case 0:
					return -107.62f, -34.93f, 94.97f;
				case 1:
					return -106.74f, -35.41f, 94.97f;
				default:
					break;
			}
			break;
		case 1:
			switch (&uParam0->f_5[0])
			{
				case 0:
					return -106.51f, -38.71f, 94.88f;
				default:
					break;
			}
			break;
		case 7:
			switch (&uParam0->f_5[0])
			{
				case 0:
					return -150.02f, -30.87f, 94.83f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_1474(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 0:
			switch (&uParam0->f_5[0])
			{
				case 0:
					return 1879.567f, -1886.123f, 41.58812f;
				case 1:
					return 1878.288f, -1885.277f, 41.66319f;
				default:
					break;
			}
			break;
		case 10:
			switch (&uParam0->f_5[0])
			{
				case 0:
					return 1882.005f, -1858.675f, 41.8089f;
				case 1:
					return 1882.48f, -1857.71f, 41.81f;
				case 2:
					return 1881.248f, -1860.608f, 41.80964f;
				default:
					break;
			}
			break;
		case 4:
			switch (&uParam0->f_5[0])
			{
				case 0:
					return 1845.34f, -1832.412f, 42.98955f;
				case 1:
					return 1845.376f, -1831.756f, 43.03001f;
				default:
					break;
			}
			break;
		case 1:
			switch (&uParam0->f_5[0])
			{
				case 0:
					return 1877.948f, -1858.837f, 41.80896f;
				default:
					break;
			}
			break;
		case 7:
			switch (&uParam0->f_5[0])
			{
				case 0:
					return 1871.9f, -1888.35f, 41.68f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_1475(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 7:
			switch (&uParam0->f_5[0])
			{
				case 0:
					return 2349.12f, 1353.44f, 104.82f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_1476(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 0:
			switch (&uParam0->f_5[0])
			{
				case 0:
					return 663.8027f, -1258.995f, 42.79f;
				case 1:
					return 664.1801f, -1257.64f, 42.79277f;
				default:
					break;
			}
			break;
		case 10:
			switch (&uParam0->f_5[0])
			{
				case 0:
					return 681.6353f, -1253.254f, 43.01525f;
				default:
					break;
			}
			break;
		case 4:
			switch (&uParam0->f_5[0])
			{
				case 0:
					return 680.56f, -1268.37f, 42.98f;
				case 1:
					return 680.24f, -1268.22f, 42.98f;
				default:
					break;
			}
			break;
		case 1:
			switch (&uParam0->f_5[0])
			{
				case 0:
					return 678.2181f, -1251.228f, 43.0152f;
				default:
					break;
			}
			break;
		case 7:
			switch (&uParam0->f_5[0])
			{
				case 0:
					return 667.0524f, -1274.733f, 43.10425f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_1477(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 4;
		case 4:
			return 8;
		case 5:
			return 16;
		case 6:
			return 32;
		case 7:
			return 64;
		case 8:
			return 128;
		case 9:
			return 256;
		case 3:
			return 512;
		case 10:
			return 1024;
		case 11:
			return 2048;
		case 12:
			return 4096;
		case 13:
			return 8192;
		case 14:
			return 16384;
		default:
			break;
	}
	return 32768;
}

bool func_1478(var uParam0)
{
	return (Global_1392040 && uParam0) != 0;
}

int func_1479(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_40.f_7862[iParam0 /*4*/])->f_1;
	}
	return (Global_42605[iParam0 /*4*/])->f_1;
}

bool func_1480(int iParam0)
{
	return (iParam0 >= 1 && iParam0 < 13);
}

int func_1481(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_40.f_7862[iParam0 /*4*/]);
	}
	return &(Global_42605[iParam0 /*4*/]);
}

int func_1482(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_40.f_7862[iParam0 /*4*/])->f_2;
	}
	return (Global_42605[iParam0 /*4*/])->f_2;
}

bool func_1483(int iParam0)
{
	if (!func_1679(iParam0))
	{
		return false;
	}
	return (!func_840() || MISC::IS_BIT_SET(Global_40.f_7854, iParam0));
}

int func_1484(int iParam0)
{
	if (!func_387(iParam0))
	{
		return 0;
	}
	return func_655(iParam0, 33554432);
}

int func_1485(int iParam0)
{
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return -1;
	}
	return &(Global_1899528->f_11[iParam0]);
}

int func_1486(int iParam0)
{
	int iVar0;

	*iParam0 = -1;
	iVar0 = 0;
	while (iVar0 < &Global_1392915)
	{
		if (func_1680(iVar0))
		{
			*iParam0 = iVar0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_1487(int iParam0, int iParam1)
{
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return;
	}
	Global_1899528->f_11[iParam0] = iParam1;
}

bool func_1488(int iParam0, int iParam1)
{
	return (Global_1899528->f_3[iParam0] && iParam1) != 0;
}

void func_1489(int iParam0)
{
	Global_1899528->f_3[iParam0] = 0;
}

int func_1490(int iParam0, int iParam1)
{
	return func_606(iParam0, iParam1, 4, MISC::GET_HASH_KEY(func_1681(iParam1)));
}

void func_1491(int iParam0, int iParam1)
{
	if (!func_1488(iParam0, iParam1))
	{
	}
	Global_1899528->f_3[iParam0] = (Global_1899528->f_3[iParam0] || iParam1);
}

bool func_1492(int iParam0)
{
	return func_991(iParam0) == 0;
}

int func_1493(int iParam0)
{
	int iVar0;

	if (&Global_1898329 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (&Global_1898329 - 1))
	{
		if (Global_1898330[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1494(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<6> Var3;

	if (&Global_1898329 == 15)
	{
		return -1;
	}
	if (!func_1492(iParam0))
	{
		return -1;
	}
	if (func_56() != -1)
	{
		iVar2 = func_1493(iParam0);
		if (iVar2 >= 0)
		{
			func_1682(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar1 = &Global_1898329;
			(*Global_1898330)[iVar1] = iParam0;
			*((*Global_1898346)[iVar1 /*6*/]) = { Var3 };
			func_1683(iVar1, 1);
			func_1682(iParam0, 1);
			Global_1898329 = &Global_1898329 + 1;
			if (&Global_1898329 > 15)
			{
				Global_1898329 = 15;
			}
			return iVar1;
		}
	}
	else
	{
		iVar2 = func_1493(iParam0);
		if (iVar2 >= 0)
		{
			func_1682(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < &Global_1898330)
			{
				if (!func_501(Global_1898330[iVar0]))
				{
					(*Global_1898330)[iVar0] = iParam0;
					*((*Global_1898346)[iVar0 /*6*/]) = { Var3 };
					func_1683(iVar0, 1);
					func_1682(iParam0, 1);
					Global_1898329 = &Global_1898329 + 1;
					if (&Global_1898329 > 15)
					{
						Global_1898329 = 15;
					}
					return iVar0;
				}
				iVar0++;
			}
		}
	}
	return -1;
}

void func_1495(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (func_1684(iParam0, iParam1, 1))
	{
		iVar0 = func_1039(iParam1);
		iVar1 = func_1038(iParam0);
		iVar2 = (func_1038(iParam0) - func_1038(iParam1));
		iVar3 = (func_1039(iParam0) - func_1039(iParam1));
		iVar4 = (func_1040(iParam0) - func_1040(iParam1));
		iVar5 = (func_656(iParam0) - func_656(iParam1));
		iVar6 = (func_657(iParam0) - func_657(iParam1));
		iVar7 = (func_1041(iParam0) - func_1041(iParam1));
	}
	else
	{
		iVar0 = func_1039(iParam0);
		iVar1 = func_1038(iParam1);
		iVar2 = (func_1038(iParam1) - func_1038(iParam0));
		iVar3 = (func_1039(iParam1) - func_1039(iParam0));
		iVar4 = (func_1040(iParam1) - func_1040(iParam0));
		iVar5 = (func_656(iParam1) - func_656(iParam0));
		iVar6 = (func_657(iParam1) - func_657(iParam0));
		iVar7 = (func_1041(iParam1) - func_1041(iParam0));
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
		iVar4 = (iVar4 + func_1042(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = BUILTIN::ROUND(func_1685(BUILTIN::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

int func_1496(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_1485(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	iVar1 = func_1686(iVar0);
	if (iVar1 == -1)
	{
		return 0;
	}
	if (func_1687(iParam0))
	{
		return 1;
	}
	func_1688(iParam0);
	if (VOLUME::_0x92A78D0BEDB332A3((Global_1392915->f_121[iVar0 /*20*/])->f_7))
	{
		VOLUME::_0x43F867EF5C463A53((Global_1392915->f_121[iVar0 /*20*/])->f_7);
	}
	if (VOLUME::_0x92A78D0BEDB332A3((Global_1392915->f_121[iVar0 /*20*/])->f_8))
	{
		VOLUME::_0x43F867EF5C463A53((Global_1392915->f_121[iVar0 /*20*/])->f_8);
	}
	(Global_1392915->f_121[iVar0 /*20*/])->f_1 = 0;
	func_1689(iVar0);
	iVar2 = func_1493(((*Global_1392915)[iVar0 /*12*/])->f_4);
	if (iVar2 != -1)
	{
		if (iParam1 == 1)
		{
			func_1690(((*Global_1392915)[iVar0 /*12*/])->f_4);
		}
		if (MAP::DOES_BLIP_EXIST(Global_1898346[iVar2 /*6*/]))
		{
			MAP::REMOVE_BLIP((*Global_1898346)[iVar2 /*6*/]);
		}
		func_1691(iVar2, 0);
		return 1;
	}
	return 0;
}

void func_1497(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = Global_1392915[iParam0 /*12*/];
	if (func_1680(iParam0))
	{
		return;
	}
	if (func_501(((*Global_1392915)[iParam0 /*12*/])->f_4))
	{
		func_1692(((*Global_1392915)[iParam0 /*12*/])->f_4, 1, 2);
	}
	((*Global_1392915)[iParam0 /*12*/])->f_1 = -1;
	func_1487(iVar0, -1);
}

void func_1498(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = Global_1392915[iParam1 /*12*/];
	if (!func_1693(iVar0))
	{
		return;
	}
	if (func_1108(&(uParam0->f_34[iVar0])))
	{
		func_1694(uParam0->f_34[iVar0], 1);
		uParam0->f_34[iVar0] = -1;
		(*uParam0)[iVar0] = 0;
	}
}

void func_1499(int iParam0)
{
	func_1695((*Global_1392915)[iParam0 /*12*/]);
	func_1696(Global_1392915->f_121[iParam0 /*20*/]);
}

Vector3 func_1500(vector3 vParam0, vector3 vParam3)
{
	vector3 vVar0;

	vVar0.x = ((vParam0.x + vParam3.x) * 0.5f);
	vVar0.f_1 = ((vParam0.y + vParam3.y) * 0.5f);
	vVar0.f_2 = ((vParam0.z + vParam3.z) * 0.5f);
	return vVar0;
}

int func_1501(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1327590->f_19547)
	{
		if (&Global_1327590->f_19547[iVar0 /*5*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1502(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1327590->f_19547)
	{
		if (&Global_1327590->f_19547[iVar0 /*5*/] == iParam0)
		{
			return (Global_1327590->f_19547[iVar0 /*5*/])->f_1;
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_1503(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return -1587.35f, -1393.41f, 80.33f;
		case 6:
			return -1585.48f, -1389.92f, 80.23f;
		case 5:
			return -1608.43f, -1412.61f, 80.94f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_1504()
{
	return func_1697(_NAMESPACE71::_0xC17F69E1418CD11F(3));
}

char* func_1505(var uParam0)
{
	switch (func_148())
	{
		case 8:
			return func_1698(uParam0);
		default:
			break;
	}
	return func_1699(uParam0);
	return "FINISH_CAMP_CHORE";
}

Vector3 func_1506()
{
	switch (func_148())
	{
		case 3:
			return 1899.39f, -1812.21f, 40.5f;
		case 2:
			return 647.92f, -1287.89f, 40.5f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_1507(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 0:
			switch (&uParam0->f_5[1])
			{
				case 0:
					return -1601.94f, -1431.2f, 80.41f;
				case 1:
					return -1596.57f, -1409.89f, 80.95f;
				case 2:
					return -1599.88f, -1417.56f, 80.94f;
				case 3:
					return -1576.5f, -1422.16f, 80.67f;
				default:
					break;
			}
			break;
		case 4:
			switch (&uParam0->f_5[1])
			{
				case 0:
					return -1578.51f, -1393.98f, 80.02f;
				case 1:
					return -1578.16f, -1393.13f, 80f;
				default:
					break;
			}
			break;
		case 6:
			switch (&uParam0->f_5[1])
			{
				case 0:
					return func_728();
				case 1:
					return func_728();
				default:
					break;
			}
			break;
		case 14:
			switch (&uParam0->f_5[1])
			{
				case 0:
					return -1587.35f, -1393.41f, 80.33f;
				default:
					break;
			}
			break;
		case 5:
			switch (&uParam0->f_5[1])
			{
				case 0:
					return func_728();
				case 1:
					return func_728();
				default:
					break;
			}
			break;
		case 9:
			switch (&uParam0->f_5[1])
			{
				case 0:
					return -1628.88f, -1413.65f, 81.41f;
				default:
					break;
			}
			break;
		case 7:
			switch (&uParam0->f_5[1])
			{
				case 0:
					return -1655.68f, -1341.21f, 82.96f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_1508(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 0:
			switch (&uParam0->f_5[1])
			{
				case 0:
					return -92.02f, -32.22f, 94.89f;
				case 1:
					return -120f, -2.86f, 94.61f;
				default:
					break;
			}
			break;
		case 4:
			switch (&uParam0->f_5[1])
			{
				case 0:
					return -144.04f, -20.66f, 95.09f;
				case 1:
					return -143.85f, -15.71f, 95.1f;
				default:
					break;
			}
			break;
		case 1:
			switch (&uParam0->f_5[1])
			{
				case 0:
					return -111.01f, -35.73f, 94.73f;
				default:
					break;
			}
			break;
		case 7:
			switch (&uParam0->f_5[0])
			{
				case 0:
					return -148.3f, -31.53f, 94.83f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_1509(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 0:
			switch (&uParam0->f_5[1])
			{
				case 0:
					return 1846.342f, -1845.074f, 42.06758f;
				case 1:
					return 1844.333f, -1846.551f, 42.22015f;
				case 2:
					return 1843.92f, -1843.816f, 42.36208f;
				default:
					break;
			}
			break;
		case 4:
			switch (&uParam0->f_5[1])
			{
				case 0:
					return 1881.256f, -1856.487f, 41.80985f;
				case 1:
					return 1880.758f, -1855.836f, 41.80937f;
				default:
					break;
			}
			break;
		case 1:
			switch (&uParam0->f_5[1])
			{
				case 0:
					return 1877.955f, -1858.856f, 41.80895f;
				default:
					break;
			}
			break;
		case 7:
			switch (&uParam0->f_5[1])
			{
				case 0:
					return 1873.32f, -1798.33f, 41.19f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_1510(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 7:
			switch (&uParam0->f_5[1])
			{
				case 0:
					return 2349.91f, 1355.19f, 104.77f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_1511(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 0:
			switch (&uParam0->f_5[1])
			{
				case 0:
					return 665.99f, -1205.8f, 45.44f;
				case 1:
					return 666.86f, -1205.71f, 45.4f;
				case 3:
					return 671.08f, -1205.93f, 45.36f;
				case 4:
					return 714.82f, -1250.56f, 44.09f;
				case 2:
					return 712.4f, -1251f, 44.1f;
					Jump @323; //curOff = 176
					switch (&uParam0->f_5[1])
					{
						case 0:
							return 679.32f, -1246.59f, 42.99f;
						case 1:
							return 678.38f, -1249.08f, 43.01f;
						default:
							break;
					}
					Jump @323; //curOff = 240
					switch (&uParam0->f_5[1])
					{
						case 0:
							return 678.1966f, -1251.232f, 43.0152f;
						default:
							break;
					}
					Jump @323; //curOff = 280
					switch (&uParam0->f_5[1])
					{
						case 0:
							return 667.7363f, -1273.373f, 42.98447f;
						default:
							break;
					}
					return 0f, 0f, 0f;
				}

int func_1512(var uParam0)
{
	int iVar0;

	iVar0 = uParam0;
	if (iVar0 >= 1 && iVar0 <= 23)
	{
		return 0;
	}
	else if (iVar0 >= 24 && iVar0 <= 34)
	{
		return 1;
	}
	else if (iVar0 >= 35 && iVar0 <= 55)
	{
		return 2;
	}
	return 0;
}

float func_1513(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 5f;
		case 2:
			return 20f;
		case 3:
			return 10f;
		case 4:
			return 10f;
		case 5:
			return 20f;
		case 6:
			return 10f;
		case 7:
			return 15f;
		case 8:
			return 15f;
		case 9:
			return 20f;
		case 10:
			return 5f;
		case 11:
			return 5f;
		case 12:
			return 10f;
		case 13:
			return 20f;
		case 14:
			return 30f;
		case 15:
			return 5f;
		case 16:
			return 5f;
		case 17:
			return 3f;
		case 18:
			return 20f;
		case 19:
			return func_1700(iParam0);
		case 20:
			return 25f;
		case 21:
			return 50f;
		case 22:
			return 100f;
		case 23:
			return 150f;
		case 24:
			return 20f;
		case 25:
			return 10f;
		case 26:
			return 20f;
		case 27:
			return 20f;
		case 28:
			return 20f;
		case 29:
			return 20f;
		case 30:
			return func_1700(iParam0);
		case 31:
			return 25f;
		case 32:
			return 50f;
		case 33:
			return 100f;
		case 34:
			return 150f;
		case 35:
			return 1f;
		case 36:
			return 5f;
		case 37:
			return 1f;
		case 38:
			return 3f;
		case 39:
			return 1f;
		case 40:
			return 1f;
		case 41:
			return 1f;
		case 42:
			return 5f;
		case 43:
			return 10f;
		case 49:
			return 20f;
		case 44:
			return 5f;
		case 45:
			return 5f;
		case 46:
			return 10f;
		case 47:
			return 10f;
		case 48:
			return 5f;
		case 50:
			return func_1700(iParam0);
		case 51:
			return 25f;
		case 52:
			return 50f;
		case 53:
			return 100f;
		case 54:
			return 150f;
		case 55:
			return 5f;
		default:
			break;
	}
	return 0f;
}

int func_1514(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_753(18);
		case 2:
			return func_753(20);
		case 1:
			return func_753(19);
		default:
			break;
	}
	return 1;
}

int func_1515(int iParam0)
{
	return func_1701(&(Global_40.f_11095.f_11[iParam0]));
}

void func_1516(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	if (func_56() != -1)
	{
		return;
	}
	if (Global_1347477->f_117 || !func_753(31))
	{
		return;
	}
	iVar0 = func_1515(iParam0);
	fVar1 = &Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_1515(iParam0);
	if (func_1702(iParam0) && func_1703(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_1704(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_1705(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_209(func_1706(iParam0), 0);
					}
					func_1707(iParam0, iVar2, iVar3);
					func_1708(iParam0, 7000);
				}
				Global_1347477->f_8 = 1;
			}
		}
	}
	Global_1347477->f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
}

char* func_1517(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_1518(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 837097462;
		case 0:
			return 2001720289;
		case 2:
			return 234329797;
		default:
			break;
	}
	return 0;
}

int func_1519(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 9:
			return 3;
		case 14:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_1520(int iParam0, char* sParam1, var uParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_1273(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_1521(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
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
		if (func_1709())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_1273(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_1710(iVar0);
			func_1711(iVar0, 0, 0);
		}
		func_1273(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, iParam4);
		func_663(func_1349(1644987397), iVar1);
	}
}

void func_1522(int iParam0, var uParam1, var uParam2)
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

void func_1523(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

void func_1524(var uParam0)
{
	if (Global_1357549->f_1894 > 0)
	{
		if (!func_211(uParam0->f_8))
		{
			uParam0->f_8 = func_591("SHOP_PREV_PAGE", -875187602, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			func_217(uParam0->f_8, -2019190071, 0, 1);
		}
	}
	else
	{
		func_212(&(uParam0->f_8), 1, 1);
	}
	if (Global_1357549->f_1894 < 3)
	{
		if (!func_211(uParam0->f_7))
		{
			uParam0->f_7 = func_591("SHOP_NEXT_PAGE", 285921746, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			func_217(uParam0->f_7, -2019190071, 0, 1);
		}
	}
	else
	{
		func_212(&(uParam0->f_7), 1, 1);
	}
	if (func_1712(uParam0->f_10, 1) > 0f)
	{
		if (func_1713(uParam0->f_8, 1))
		{
			func_1714(uParam0->f_8, 0, 0);
		}
		if (func_1713(uParam0->f_7, 1))
		{
			func_1714(uParam0->f_7, 0, 0);
		}
	}
	else
	{
		if (func_211(uParam0->f_8) && !func_1713(uParam0->f_8, 0))
		{
			func_1714(uParam0->f_8, 1, 0);
		}
		if (func_211(uParam0->f_7) && !func_1713(uParam0->f_7, 0))
		{
			func_1714(uParam0->f_7, 1, 0);
		}
	}
}

void func_1525(var uParam0)
{
	if (uParam0->f_773)
	{
		func_1715(uParam0);
		if (uParam0->f_772)
		{
			func_749(uParam0->f_1, "JOURNAL_INFO_HIDE", 1);
		}
		else
		{
			func_749(uParam0->f_1, "JOURNAL_INFO_SHOW", 1);
		}
	}
	else
	{
		func_1529(uParam0);
	}
}

void func_1526(var uParam0, var uParam1)
{
	bool bVar0;

	if (uParam0->f_35.f_491)
	{
		if (!func_211(uParam0->f_10))
		{
			uParam0->f_10 = func_591("PURCHASE_UPGRADE", 1138488863, 5, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			func_217(uParam0->f_10, -2019190071, 0, 1);
			func_1714(uParam0->f_10, 0, 1);
		}
		if (uParam0->f_35.f_491.f_5)
		{
			if (func_211(uParam0->f_10) && !func_1713(uParam0->f_10, 0))
			{
				func_1714(uParam0->f_10, 1, 0);
			}
		}
		else
		{
			bVar0 = true;
			if (func_1212(uParam0, 0))
			{
				bVar0 = false;
			}
			else if (uParam0->f_35.f_491.f_1 == 2 && func_1716(2, uParam1, 1120403456))
			{
				bVar0 = false;
			}
			else if (uParam0->f_35.f_491.f_1 == 1 && func_1716(0, uParam1, 1120403456))
			{
				bVar0 = false;
			}
			else if (uParam0->f_35.f_491.f_1 == 0 && func_1716(1, uParam1, 1120403456))
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				if (func_211(uParam0->f_10) && !func_1713(uParam0->f_10, 0))
				{
					func_1714(uParam0->f_10, 1, 0);
				}
			}
			else if (func_1713(uParam0->f_10, 1))
			{
				func_1714(uParam0->f_10, 0, 0);
			}
		}
	}
}

void func_1527(var uParam0)
{
	if (!func_1212(uParam0, 1) && !func_211(uParam0->f_9))
	{
		uParam0->f_9 = func_591("BUTCH_DONE", 814057702, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
		func_217(uParam0->f_9, -2019190071, 0, 1);
	}
}

void func_1528(var uParam0)
{
	func_212(&(uParam0->f_8), 1, 1);
	func_212(&(uParam0->f_7), 1, 1);
}

void func_1529(var uParam0)
{
	if (func_211(uParam0->f_1))
	{
		func_212(&(uParam0->f_1), 1, 1);
	}
}

void func_1530(var uParam0)
{
	func_212(&(uParam0->f_10), 1, 1);
}

void func_1531(var uParam0)
{
	func_212(&(uParam0->f_9), 1, 1);
}

int func_1532(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0) || ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return 0;
	}
	if (func_1717(*uParam0, -1725579161, 0))
	{
		return 1;
	}
	return 0;
}

int func_1533(int iParam0)
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

int func_1534(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	return func_1718(iParam0, iParam1, bParam2, bParam3);
}

void func_1535(int iParam0, int iParam1, bool bParam2)
{
	func_1719(iParam0, iParam1, bParam2, 1);
}

void func_1536(var uParam0)
{
	int iVar0;

	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_102.f_7, 0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_110.f_7, 0);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam0->f_55.f_5[iVar0 /*6*/])->f_5, 0);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam0->f_55.f_30[iVar0 /*4*/])->f_3, 0);
		iVar0++;
	}
}

void func_1537(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	if (iParam0 == -1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(*uParam1, 0);
		return;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(*uParam1, 1);
	if (iParam0 == 0)
	{
		switch (func_148())
		{
			case 1:
				DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_1, 160827397);
				break;
			case 2:
				DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_1, 1003809922);
				break;
			case 3:
				DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_1, -518834432);
				break;
		}
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_1, 0);
	}
	if (&Global_40.f_4283.f_440[iParam0 /*63*/] > 0)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_2, 1);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam1->f_2.f_1, MISC::_CREATE_VAR_STRING(2, "CASH_STRING", &(Global_40.f_4283.f_440[iParam0 /*63*/])));
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_2, 0);
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_1720(iParam0, iVar0, uParam1->f_4[iVar0 /*4*/]);
		iVar0++;
	}
	switch (iParam0)
	{
		case 0:
			if ((Global_40.f_4283.f_440[1 /*63*/])->f_62 == 0)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_53, 1);
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_53, 0);
			}
			break;
		case 1:
			if ((Global_40.f_4283.f_440[1 /*63*/])->f_62 > 0)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_53, 1);
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_53, 0);
			}
			break;
	}
	iVar1 = func_1721(Global_40.f_4283.f_440[iParam0 /*63*/]);
	sVar2 = "CASH_STRING";
	if (iVar1 < 0)
	{
		sVar2 = "CASH_STRING_NEG";
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam1->f_53.f_1, MISC::_CREATE_VAR_STRING(2, sVar2, iVar1));
}

void func_1538(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	if (iParam0 == -1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(*uParam1, 0);
		return;
	}
	iVar0 = (func_384(func_1541(iParam0), 0) - 1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(*uParam1, 1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_4, ((*uParam2)[iParam0 /*30*/])->f_23);
	iVar1 = 0;
	while (iVar1 < 4)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING((uParam1->f_5[iVar1 /*6*/])->f_1, &(((*uParam2)[iParam0 /*30*/])->f_2[iVar1 /*4*/]));
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING((uParam1->f_5[iVar1 /*6*/])->f_2, (((*uParam2)[iParam0 /*30*/])->f_2[iVar1 /*4*/])->f_1);
		if ((((*uParam2)[iParam0 /*30*/])->f_2[iVar1 /*4*/])->f_3 != -1)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING((uParam1->f_5[iVar1 /*6*/])->f_3, MISC::_CREATE_VAR_STRING(2, "LDGR_PRICE", (((*uParam2)[iParam0 /*30*/])->f_2[iVar1 /*4*/])->f_3));
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING((uParam1->f_5[iVar1 /*6*/])->f_3, "");
		}
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&(uParam1->f_5[iVar1 /*6*/]), iVar1 <= iVar0 + 1);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam1->f_5[iVar1 /*6*/])->f_4, iVar1 <= iVar0);
		if (((*uParam2)[iParam0 /*30*/])->f_23)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING((uParam1->f_30[iVar1 /*4*/])->f_1, MISC::_CREATE_VAR_STRING(2, "LDGR_PRICE", &(((*uParam2)[iParam0 /*30*/])->f_24[iVar1])));
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&(uParam1->f_30[iVar1 /*4*/]), iVar1 <= iVar0);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam1->f_30[iVar1 /*4*/])->f_2, iVar1 < iVar0);
		}
		iVar1++;
	}
	switch (iParam0)
	{
		case 0:
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_1, -393102324);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_2, 2011573789);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_3, -1557506224);
			break;
		case 1:
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_1, -528257027);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_2, 1071167867);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_3, -1627564647);
			break;
		case 2:
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_1, 283666457);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_2, 1013492974);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_3, -1468577886);
			break;
		case 3:
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_1, -803999078);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_2, 0);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_3, -1952675429);
			break;
		default:
			break;
	}
}

void func_1539(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	if (iParam0 == -1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(*uParam1, 0);
		return;
	}
	iVar0 = (func_384(func_1541(iParam0), 0) - 1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(*uParam1, 1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_5, iVar0 > 0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_6, iVar0 > 0);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_2, (((*uParam2)[iParam0 /*30*/])->f_2[1 /*4*/])->f_1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam1->f_4, MISC::_CREATE_VAR_STRING(2, "LDGR_PRICE", (((*uParam2)[iParam0 /*30*/])->f_2[1 /*4*/])->f_3));
	switch (iParam0)
	{
		case 4:
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_1, 61188257);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_3, -492089529);
			break;
		case 5:
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_1, -593314660);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_3, 1084624964);
			break;
		case 7:
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_1, -1156421435);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_3, 1642689245);
			break;
		case 6:
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_1, -1477784184);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_3, -1832854507);
			break;
		default:
			break;
	}
}

int func_1540(var uParam0, var uParam1)
{
	if (func_1722(&(uParam0->f_55), uParam1))
	{
		uParam1->f_4 = 0;
		return 1;
	}
	if (func_1723(&(uParam0->f_102), uParam1))
	{
		uParam1->f_4 = 1;
		return 1;
	}
	if (func_1723(&(uParam0->f_110), uParam1))
	{
		uParam1->f_4 = 2;
		return 1;
	}
	return 0;
}

int func_1541(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 4;
		case 2:
			return 5;
		case 3:
			return 10;
		case 4:
			return 13;
		case 5:
			return 0;
		case 6:
			return 12;
		case 7:
			return 14;
		default:
			break;
	}
	return -1;
}

int func_1542()
{
	return -1802590239;
}

Vector3 func_1543(int iParam0)
{
	vector3 vVar0;

	switch (iParam0)
	{
		case 1:
			vVar0 = { -72.4089f, 2.8532f, -117.5962f };
			break;
		case 2:
			vVar0 = { -77.3119f, -0.0017f, -71.347f };
			break;
		case 3:
			vVar0 = { -73.0725f, -0.1101f, 134.3503f };
			break;
	}
	return vVar0;
}

void func_1544(var uParam0, vector3 vParam1, vector3 vParam4, float fParam7, int iParam8, int iParam9, float fParam10, float fParam11, int iParam12, int iParam13, float fParam14, bool bParam15, float fParam16, float fParam17)
{
	uParam0->f_1 = { vParam1 };
	uParam0->f_4 = { vParam4 };
	uParam0->f_7 = fParam7;
	uParam0->f_25 = iParam8;
	uParam0->f_26 = iParam9;
	uParam0->f_27 = fParam10;
	uParam0->f_8 = { vParam1 };
	uParam0->f_11 = 1f;
	uParam0->f_12 = 0f;
	uParam0->f_13 = { 0f, 0f, 0f };
	uParam0->f_16 = { 0f, 0f, 0f };
	uParam0->f_19 = { 0f, 0f, 0f };
	uParam0->f_22 = fParam7;
	uParam0->f_23 = (fParam7 + fParam16);
	uParam0->f_28 = iParam12;
	uParam0->f_24 = fParam11;
	*uParam0 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
	CAM::SET_CAM_ACTIVE(*uParam0, true);
	CAM::SET_CAM_PARAMS(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_23, 0, 1, 1, 2, 1, 0);
	if (!bParam15)
	{
		CAM::SHAKE_CAM(*uParam0, "HAND_SHAKE", fParam17);
	}
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	if (fParam14 > 0f)
	{
		CAM::SET_CAM_NEAR_CLIP(*uParam0, fParam14);
	}
	if (uParam0->f_28)
	{
		MAP::LOCK_MINIMAP_ANGLE(iParam13);
	}
	uParam0->f_34 = 0;
	uParam0->f_35 = 0;
	uParam0->f_36 = 0;
	uParam0->f_38 = 0;
	uParam0->f_37 = 0;
}

bool func_1545(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

Vector3 func_1546(vector3 vParam0, vector3 vParam3, float fParam6)
{
	return FtoV((1f - fParam6)) * vParam0 + Vector(fParam6, fParam6, fParam6) * vParam3;
}

float func_1547(float fParam0, float fParam1, float fParam2)
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

int func_1548(int iParam0, var uParam1, struct<8> Param2, var uParam10)
{
	int iVar0;

	if (!*uParam1)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			switch (uParam1->f_4)
			{
				case 1:
					return 0;
				case 2:
					if (uParam1->f_3 == 0 && Param2.f_2 == -1)
					{
						return 0;
					}
					if (uParam1->f_3 == 1 && Param2.f_6 == -1)
					{
						return 0;
					}
					if (!func_1724(&(((*uParam10)[uParam1->f_3 /*118*/])->f_102)))
					{
						return 0;
					}
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(((*uParam10)[uParam1->f_3 /*118*/])->f_110.f_7, 0);
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(((*uParam10)[uParam1->f_3 /*118*/])->f_102.f_7, 1);
					if (uParam1->f_3 == 1)
					{
						uParam1->f_1 = Param2.f_6;
					}
					else
					{
						uParam1->f_1 = Param2.f_2;
					}
					uParam1->f_4 = 1;
					uParam1->f_5 = 1;
					uParam1->f_6 = -1;
					return 1;
				case 0:
					if (uParam1->f_5)
					{
						return 0;
					}
					iVar0 = func_1725(&(((*uParam10)[uParam1->f_3 /*118*/])->f_55));
					if (iVar0 == -1)
					{
						return 0;
					}
					func_1536((*uParam10)[uParam1->f_3 /*118*/]);
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL((((*uParam10)[uParam1->f_3 /*118*/])->f_55.f_5[iVar0 /*6*/])->f_5, 1);
					uParam1->f_5 = 1;
					uParam1->f_6 = iVar0;
					return 1;
				default:
					break;
			}
			break;
		case 1:
			switch (uParam1->f_4)
			{
				case 2:
					return 0;
				case 1:
					if (uParam1->f_3 == 0 && Param2.f_3 == -1)
					{
						return 0;
					}
					if (uParam1->f_3 == 1 && Param2.f_7 == -1)
					{
						return 0;
					}
					if (!func_1724(&(((*uParam10)[uParam1->f_3 /*118*/])->f_110)))
					{
						return 0;
					}
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(((*uParam10)[uParam1->f_3 /*118*/])->f_102.f_7, 0);
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(((*uParam10)[uParam1->f_3 /*118*/])->f_110.f_7, 1);
					if (uParam1->f_3 == 1)
					{
						uParam1->f_1 = Param2.f_7;
					}
					else
					{
						uParam1->f_1 = Param2.f_3;
					}
					uParam1->f_4 = 2;
					uParam1->f_5 = 1;
					uParam1->f_6 = -1;
					return 1;
				case 0:
					if (!uParam1->f_5)
					{
						return 0;
					}
					iVar0 = func_1726(&(((*uParam10)[uParam1->f_3 /*118*/])->f_55));
					if (iVar0 == -1)
					{
						return 0;
					}
					func_1536((*uParam10)[uParam1->f_3 /*118*/]);
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL((((*uParam10)[uParam1->f_3 /*118*/])->f_55.f_30[iVar0 /*4*/])->f_3, 1);
					uParam1->f_5 = 0;
					uParam1->f_6 = iVar0;
					return 1;
				default:
					break;
			}
			break;
		case 2:
			if (uParam1->f_3 == 0)
			{
				return 0;
			}
			switch (uParam1->f_4)
			{
				case 2:
					if (Param2.f_3 != -1 && func_1724(&(((*uParam10)[0 /*118*/])->f_110)))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(((*uParam10)[1 /*118*/])->f_110.f_7, 0);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(((*uParam10)[0 /*118*/])->f_110.f_7, 1);
						uParam1->f_1 = Param2.f_3;
						uParam1->f_3 = 0;
						uParam1->f_4 = 2;
						uParam1->f_5 = 1;
						uParam1->f_6 = -1;
						return 1;
					}
					else if (Param2.f_2 != -1 && func_1724(&(((*uParam10)[0 /*118*/])->f_102)))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(((*uParam10)[1 /*118*/])->f_110.f_7, 0);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(((*uParam10)[0 /*118*/])->f_102.f_7, 1);
						uParam1->f_1 = Param2.f_2;
						uParam1->f_3 = 0;
						uParam1->f_4 = 1;
						uParam1->f_5 = 1;
						uParam1->f_6 = -1;
						return 1;
					}
					return 0;
				case 1:
					if (Param2.f_2 != -1 && func_1724(&(((*uParam10)[0 /*118*/])->f_102)))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(((*uParam10)[1 /*118*/])->f_102.f_7, 0);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(((*uParam10)[0 /*118*/])->f_102.f_7, 1);
						uParam1->f_1 = Param2.f_2;
						uParam1->f_3 = 0;
						uParam1->f_4 = 1;
						uParam1->f_5 = 1;
						uParam1->f_6 = -1;
						return 1;
					}
					else if (Param2.f_3 != -1 && func_1724(&(((*uParam10)[0 /*118*/])->f_110)))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(((*uParam10)[1 /*118*/])->f_102.f_7, 0);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(((*uParam10)[0 /*118*/])->f_110.f_7, 1);
						uParam1->f_1 = Param2.f_3;
						uParam1->f_3 = 0;
						uParam1->f_4 = 2;
						uParam1->f_5 = 1;
						uParam1->f_6 = -1;
						return 1;
					}
					return 0;
				case 0:
					if (Param2.f_1 == -1)
					{
						return 0;
					}
					if (uParam1->f_5)
					{
						iVar0 = func_1725(&(((*uParam10)[0 /*118*/])->f_55));
						if (iVar0 != -1)
						{
							func_1536((*uParam10)[1 /*118*/]);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL((((*uParam10)[0 /*118*/])->f_55.f_5[iVar0 /*6*/])->f_5, 1);
							uParam1->f_1 = Param2.f_1;
							uParam1->f_3 = 0;
							uParam1->f_4 = 0;
							uParam1->f_5 = 1;
							uParam1->f_6 = iVar0;
							return 1;
						}
						iVar0 = func_1726(&(((*uParam10)[0 /*118*/])->f_55));
						if (iVar0 != -1)
						{
							func_1536((*uParam10)[1 /*118*/]);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL((((*uParam10)[0 /*118*/])->f_55.f_30[iVar0 /*4*/])->f_3, 1);
							uParam1->f_1 = Param2.f_1;
							uParam1->f_3 = 0;
							uParam1->f_4 = 0;
							uParam1->f_5 = 0;
							uParam1->f_6 = iVar0;
							return 1;
						}
					}
					else
					{
						iVar0 = func_1726(&(((*uParam10)[0 /*118*/])->f_55));
						if (iVar0 != -1)
						{
							func_1536((*uParam10)[1 /*118*/]);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL((((*uParam10)[0 /*118*/])->f_55.f_30[iVar0 /*4*/])->f_3, 1);
							uParam1->f_1 = Param2.f_1;
							uParam1->f_3 = 0;
							uParam1->f_4 = 0;
							uParam1->f_5 = 0;
							uParam1->f_6 = iVar0;
							return 1;
						}
						iVar0 = func_1725(&(((*uParam10)[0 /*118*/])->f_55));
						if (iVar0 != -1)
						{
							func_1536((*uParam10)[1 /*118*/]);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL((((*uParam10)[0 /*118*/])->f_55.f_5[iVar0 /*6*/])->f_5, 1);
							uParam1->f_1 = Param2.f_1;
							uParam1->f_3 = 0;
							uParam1->f_4 = 0;
							uParam1->f_5 = 1;
							uParam1->f_6 = iVar0;
							return 1;
						}
					}
					return 0;
				default:
					break;
			}
			break;
		case 3:
			if (uParam1->f_3 == 1)
			{
				return 0;
			}
			switch (uParam1->f_4)
			{
				case 2:
					if (Param2.f_7 != -1 && func_1724(&(((*uParam10)[1 /*118*/])->f_110)))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(((*uParam10)[0 /*118*/])->f_110.f_7, 0);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(((*uParam10)[1 /*118*/])->f_110.f_7, 1);
						uParam1->f_1 = Param2.f_7;
						uParam1->f_3 = 1;
						uParam1->f_4 = 2;
						uParam1->f_5 = 1;
						uParam1->f_6 = -1;
						return 1;
					}
					else if (Param2.f_6 != -1 && func_1724(&(((*uParam10)[1 /*118*/])->f_102)))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(((*uParam10)[0 /*118*/])->f_110.f_7, 0);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(((*uParam10)[1 /*118*/])->f_102.f_7, 1);
						uParam1->f_1 = Param2.f_6;
						uParam1->f_3 = 1;
						uParam1->f_4 = 1;
						uParam1->f_5 = 1;
						uParam1->f_6 = -1;
						return 1;
					}
					return 0;
				case 1:
					if (Param2.f_6 != -1 && func_1724(&(((*uParam10)[1 /*118*/])->f_102)))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(((*uParam10)[0 /*118*/])->f_102.f_7, 0);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(((*uParam10)[1 /*118*/])->f_102.f_7, 1);
						uParam1->f_1 = Param2.f_6;
						uParam1->f_3 = 1;
						uParam1->f_4 = 1;
						uParam1->f_5 = 1;
						uParam1->f_6 = -1;
						return 1;
					}
					else if (Param2.f_7 != -1 && func_1724(&(((*uParam10)[1 /*118*/])->f_110)))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(((*uParam10)[0 /*118*/])->f_102.f_7, 0);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(((*uParam10)[1 /*118*/])->f_110.f_7, 1);
						uParam1->f_1 = Param2.f_7;
						uParam1->f_3 = 1;
						uParam1->f_4 = 2;
						uParam1->f_5 = 1;
						uParam1->f_6 = -1;
						return 1;
					}
					return 0;
				case 0:
					if (Param2.f_5 == -1)
					{
						return 0;
					}
					if (uParam1->f_5)
					{
						iVar0 = func_1725(&(((*uParam10)[1 /*118*/])->f_55));
						if (iVar0 != -1)
						{
							func_1536((*uParam10)[0 /*118*/]);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL((((*uParam10)[1 /*118*/])->f_55.f_5[iVar0 /*6*/])->f_5, 1);
							uParam1->f_1 = Param2.f_5;
							uParam1->f_3 = 1;
							uParam1->f_4 = 0;
							uParam1->f_5 = 1;
							uParam1->f_6 = iVar0;
							return 1;
						}
						iVar0 = func_1726(&(((*uParam10)[1 /*118*/])->f_55));
						if (iVar0 != -1)
						{
							func_1536((*uParam10)[0 /*118*/]);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL((((*uParam10)[1 /*118*/])->f_55.f_30[iVar0 /*4*/])->f_3, 1);
							uParam1->f_1 = Param2.f_5;
							uParam1->f_3 = 1;
							uParam1->f_4 = 0;
							uParam1->f_5 = 0;
							uParam1->f_6 = iVar0;
							return 1;
						}
					}
					else
					{
						iVar0 = func_1726(&(((*uParam10)[1 /*118*/])->f_55));
						if (iVar0 != -1)
						{
							func_1536((*uParam10)[0 /*118*/]);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL((((*uParam10)[1 /*118*/])->f_55.f_30[iVar0 /*4*/])->f_3, 1);
							uParam1->f_1 = Param2.f_5;
							uParam1->f_3 = 1;
							uParam1->f_4 = 0;
							uParam1->f_5 = 0;
							uParam1->f_6 = iVar0;
							return 1;
						}
						iVar0 = func_1725(&(((*uParam10)[1 /*118*/])->f_55));
						if (iVar0 != -1)
						{
							func_1536((*uParam10)[0 /*118*/]);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL((((*uParam10)[1 /*118*/])->f_55.f_5[iVar0 /*6*/])->f_5, 1);
							uParam1->f_1 = Param2.f_5;
							uParam1->f_3 = 1;
							uParam1->f_4 = 0;
							uParam1->f_5 = 1;
							uParam1->f_6 = iVar0;
							return 1;
						}
					}
					break;
			}
			break;
	}
	return 0;
}

void func_1549(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			AUDIO::PLAY_SOUND_FRONTEND("NAV_UP", "Ledger_Sounds", true, 0);
			break;
		case 1:
			AUDIO::PLAY_SOUND_FRONTEND("NAV_DOWN", "Ledger_Sounds", true, 0);
			break;
		case 2:
			AUDIO::PLAY_SOUND_FRONTEND("NAV_LEFT", "Ledger_Sounds", true, 0);
			break;
		case 3:
			AUDIO::PLAY_SOUND_FRONTEND("NAV_RIGHT", "Ledger_Sounds", true, 0);
			break;
	}
}

void func_1550(int* iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	var uVar5;

	if (func_384(iParam2, 0) < func_1727(iParam2))
	{
		iVar0 = func_1728(iParam0, iParam2);
		if (func_156() < iVar0)
		{
			iVar1 = (iVar0 - func_156());
			if (func_1729(1) >= iVar1)
			{
				func_1730(iVar1, 0, 0, 1, 1);
				func_1731(iVar1);
			}
		}
		if (func_156() >= iVar0)
		{
			*bParam4 = 1;
			if (iParam1 == 3)
			{
				if (func_384(10, 0) == 1)
				{
					func_706(64);
				}
			}
			func_1732(iParam1, 0, iVar0);
			iVar2 = (func_384(iParam2, 0) + iParam3);
			if (iParam2 == 10)
			{
				if (iVar2 >= 3)
				{
					iVar3 = func_937(func_148());
					if (!func_137(iVar3, 64))
					{
						func_170(iVar3, 64);
						func_170(iVar3, 262144);
					}
				}
			}
			func_1733(iParam2, iVar2);
			func_5();
			func_147(134217728);
			if (iParam1 == 5)
			{
				func_1734(&(Global_1357549->f_1492));
			}
			if (iParam1 == 2)
			{
				if (iVar2 >= 3 && !func_1399(joaat("weapon_thrown_throwing_knives")))
				{
					func_1735(joaat("weapon_thrown_throwing_knives"));
				}
				if (iVar2 >= 4 && !func_1399(joaat("weapon_thrown_molotov")))
				{
					func_1735(joaat("weapon_thrown_molotov"));
				}
			}
			func_212(&(iParam0->f_7), 1, 1);
			func_212(&(iParam0->f_8), 1, 1);
			func_212(&(iParam0->f_35.f_1), 1, 1);
			func_212(&(iParam0->f_10), 1, 1);
			func_212(&(iParam0->f_9), 1, 1);
			func_1188(&(iParam0->f_35), 0);
			func_182(&(iParam0->f_810), 0);
			sVar4 = func_1736(iParam2, iVar2);
			if (MISC::IS_STRING_NULL_OR_EMPTY(sVar4) == 0)
			{
				func_319(sVar4, 14500, 0, 0, 0, 1);
			}
			func_1192(iParam0, 14);
			uVar5 = func_1737(func_148());
			TELEMETRY::_0x217F47761376E16E(uVar5, iParam1, iVar2, iVar0, 0);
		}
		else
		{
			func_319("CAMP_UPG_BROKE", 9000, 0, 0, 0, 1);
		}
	}
}

void func_1551(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 4)
	{
		return;
	}
	Global_40.f_4283.f_415[iParam0] = 0;
}

void func_1552(int* iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;

	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
			break;
		default:
			return;
	}
	iVar0 = func_1738(iParam0, iParam2);
	if (func_156() < iVar0)
	{
		iVar1 = (iVar0 - func_156());
		if (func_1729(1) >= iVar1)
		{
			func_1730(iVar1, 0, 0, 1, 1);
			func_1731(iVar1);
		}
	}
	if (func_156() >= iVar0)
	{
		*bParam3 = 1;
		func_1714(iParam0->f_10, 0, 1);
		func_1551(func_1739(iParam1));
		func_1551(3);
		func_1732(iParam1, 1, iVar0);
		uVar2 = func_1737(func_148());
		TELEMETRY::_0x217F47761376E16E(uVar2, iParam1, func_384(iParam2, 0), iVar0, 1);
	}
	else
	{
		func_319("CAMP_UPG_BROKE", 9000, 0, 0, 0, 1);
	}
}

void func_1553()
{
	AUDIO::PLAY_SOUND_FRONTEND("PURCHASE", "Ledger_Sounds", true, 0);
}

void func_1554()
{
	AUDIO::PLAY_SOUND_FRONTEND("UNAFFORDABLE", "Ledger_Sounds", true, 0);
}

int func_1555()
{
	if (func_148() == 8)
	{
		return 4;
	}
	return 17;
}

int func_1556(int iParam0)
{
	func_1018(iParam0, 0, 0);
	if (func_1080(iParam0))
	{
		return (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) == 2 || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) == 1);
	}
	return 0;
}

void func_1557(int iParam0, int iParam1)
{
	func_1019(iParam0, 0, 0, 0, 1, 0, 0, 0);
}

bool func_1558(vector3 vParam0, int iParam3)
{
	if (iParam3 == 7)
	{
		return false;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(&(Global_1357549->f_3[iParam3])))
	{
		return false;
	}
	return VOLUME::_0xF256A75210C5C0EB(&(Global_1357549->f_3[iParam3]), vParam0);
}

int func_1559(int iParam0, var uParam1)
{
	int iVar0;
	struct<10> Var1;
	struct<4> Var15;

	if (!func_1740(iParam0))
	{
		return 0;
	}
	iVar0 = func_1560(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1.f_9 = -1591664384;
	Var15 = { func_915(0) };
	if (!func_916(Var15, iVar0, &Var1, 0, 0))
	{
		return 0;
	}
	if (!func_917(&Var1, uParam1))
	{
		return 0;
	}
	return 1;
}

int func_1560(int iParam0)
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

int func_1561(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10)
{
	struct<12> Var0;
	struct<4> Var14;

	if (!func_1421(bParam10))
	{
		return func_1741(Param0, Param4, iParam8, 1, bParam9, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0) || !INVENTORY::_0xB881CA836CC4B6D4(&Param4))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_1420(Param0, &Var0, 0, 0))
	{
		return 0;
	}
	if (func_1742(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return 1;
	}
	if (!INVENTORY::_0x780C5B9AE2819807(Var0.f_4, iParam8))
	{
		return 0;
	}
	if (!INVENTORY::_0xDCCAA7C3BFD88862(func_516(0), &Param0, &Param4, iParam8, Var0.f_11, &Var14))
	{
		return 0;
	}
	if (bParam9)
	{
		if (!func_1743(Var14, 1))
		{
		}
	}
	return 1;
}

int func_1562(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9)
{
	struct<11> Var0;
	struct<11> Var14;
	int iVar28;

	if (!func_1421(bParam9))
	{
		return func_1744(Param0, Param4, iParam8, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0) || !INVENTORY::_0xB881CA836CC4B6D4(&Param4))
	{
		return 0;
	}
	if (func_1742(&Param0, &Param4))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_1420(Param0, &Var0, bParam9, 1) || !func_1420(Param4, &Var14, bParam9, 1))
	{
		return 0;
	}
	if (func_1742(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return 0;
	}
	if (!INVENTORY::_0x780C5B9AE2819807(Var0.f_4, Var14.f_9) || !INVENTORY::_0x780C5B9AE2819807(Var14.f_4, Var0.f_9))
	{
		return 0;
	}
	iVar28 = func_516(0);
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

int func_1563(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (func_1745(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		return 1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseCompanion"))
	{
		return 1;
	}
	return 0;
}

int func_1564(var uParam0)
{
	int iVar0;

	iVar0 = uParam0;
	if (iVar0 >= 0 && iVar0 < 5)
	{
		return 1;
	}
	return 0;
}

int func_1565(int iParam0)
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

bool func_1566()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(99890643);
}

int func_1567(var uParam0, int iParam1, var uParam2)
{
	bool bVar0;

	*uParam0 = 0;
	*iParam1 = 0;
	*uParam2 = 0;
	if (func_840())
	{
		if (func_206())
		{
			bVar0 = false;
			if (!func_513(((*Global_1835011)[15 /*74*/])->f_1, 1) && !func_753(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*uParam0 = func_1746();
				*iParam1 = func_1747();
				*uParam2 = func_1748();
				return 1;
			}
			else
			{
				*uParam0 = func_1749();
				*iParam1 = func_1750();
				*uParam2 = func_1751();
				return 1;
			}
		}
		else if (func_149())
		{
			if (!func_513(((*Global_1835011)[60 /*74*/])->f_1, 1))
			{
				*uParam0 = func_1752();
				*iParam1 = func_1753();
				*uParam2 = func_1754();
				return 1;
			}
			else
			{
				*uParam0 = func_1755();
				*iParam1 = func_1756();
				*uParam2 = func_1757();
				return 1;
			}
		}
	}
	else if (func_206())
	{
		*uParam0 = func_1758();
		*iParam1 = func_1759();
		*uParam2 = func_1760();
		return 1;
	}
	else if (func_149())
	{
		*uParam0 = func_1761();
		*iParam1 = func_1762();
		*uParam2 = func_1763();
		return 1;
	}
	return 0;
}

int func_1568(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<4> Var29;

	Var0.f_9 = -1591664384;
	if (!func_1559(iParam0, &Var0))
	{
		return 0;
	}
	Var29 = { func_1054(iParam1, Var0, 1415981582, 0) };
	return func_1743(Var29, 1);
}

int func_1569(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<4> Var29;

	Var0.f_9 = -1591664384;
	if (!func_1559(iParam0, &Var0))
	{
		return 0;
	}
	Var29 = { func_1054(iParam1, Var0, -2119169513, 0) };
	return func_1743(Var29, 1);
}

void func_1570(var uParam0)
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

int func_1571(int iParam0, var uParam1)
{
	struct<4> Var0;

	Var0.f_9 = -1591664384;
	if (!func_1559(iParam0, &Var0))
	{
		return 0;
	}
	*uParam1 = func_1764(Var0, 1415981582, 0);
	if (!func_983(*uParam1, 0))
	{
		return 0;
	}
	return 1;
}

int func_1572(int iParam0, var uParam1)
{
	struct<4> Var0;

	Var0.f_9 = -1591664384;
	if (!func_1559(iParam0, &Var0))
	{
		return 0;
	}
	*uParam1 = func_1764(Var0, -2119169513, 0);
	if (!func_983(*uParam1, 0))
	{
		return 0;
	}
	return 1;
}

int func_1573(int iParam0, var uParam1)
{
	struct<4> Var0;

	if (!func_1765(856287005, iParam0))
	{
		return 0;
	}
	Var0 = { func_1766() };
	*uParam1 = func_1764(Var0, iParam0, 0);
	if (!func_983(*uParam1, 0))
	{
		return 0;
	}
	return 1;
}

void func_1574(int iParam0)
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

void func_1575(int iParam0, var uParam1)
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
	func_1767(iParam0, *uParam1);
	func_1767(iParam0, uParam1->f_1);
}

void func_1576(int iParam0, var uParam1)
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
	func_1767(iParam0, *uParam1);
	func_1767(iParam0, uParam1->f_1);
	func_1767(iParam0, uParam1->f_2);
	func_1767(iParam0, uParam1->f_3);
	func_1767(iParam0, uParam1->f_4);
	func_1767(iParam0, uParam1->f_5);
}

int func_1577(int iParam0, int iParam1, bool bParam2)
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

bool func_1578(int iParam0, int iParam1)
{
	iParam0 = func_818(iParam0);
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

void func_1579(var uParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_0x9CB1A1623062F402(*uParam0, func_1769(func_1768(255), 109029619));
	}
	else if (func_206())
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_149();
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

void func_1580(var uParam0, bool bParam1)
{
	char* sVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_0x9CB1A1623062F402(*uParam0, func_1769(func_1768(255), 109029619));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_206())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_149())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (MISC::COMPARE_STRINGS(sVar0, "", false, -1) != 0)
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, sVar0);
		}
	}
}

int func_1581(int iParam0)
{
	iParam0 = func_818(iParam0);
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

float func_1582(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

float func_1583(int iParam0)
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

	iParam0 = func_818(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_819(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return -1f;
	}
	iVar1 = func_331(iParam0);
	iVar2 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	fVar3 = TASK::_0xEB67D4E056C85A81(iVar1);
	fVar4 = TASK::_0x78D8C1D4EB80C588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_331(iParam0) + 1;
	fVar6 = func_829(iParam0);
	fVar7 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar1));
	fVar8 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	uVar12 = func_1770(fVar3, fVar4, fVar11);
	return uVar12;
}

void func_1584(int iParam0)
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

void func_1585(int iParam0)
{
	MAP::_0xB059D7BD3D78C16F(iParam0, 673950256);
	MAP::_0xB059D7BD3D78C16F(iParam0, 561559387);
	MAP::_0xB059D7BD3D78C16F(iParam0, -201249929);
}

int func_1586(int iParam0)
{
	switch (iParam0)
	{
		case 2025841068:
	}
}
