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
	var uLocal_3513 = 0;
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
	func_60(0, 12637/*func_59*/, 0);
	func_60(1, 12994/*func_61*/, 1);
	func_60(2, 13010/*func_62*/, 1);
	func_60(3, 13073/*func_63*/, 1);
	func_60(4, 13104/*func_64*/, 2);
	func_60(5, 13218/*func_65*/, 16);
	func_60(6, 13353/*func_66*/, 1);
	func_60(7, 13967/*func_67*/, 4);
	func_60(8, 14061/*func_68*/, 1);
	func_60(9, 14191/*func_69*/, 128);
	func_60(10, 14200/*func_70*/, 792);
	func_60(11, 14248/*func_71*/, 1024);
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
	func_79(iParam0, 0, 14928/*func_76*/, 15032/*func_77*/, 15471/*func_78*/);
	func_79(iParam0, 1, 15759/*func_80*/, 15805/*func_81*/, 16271/*func_82*/);
	func_79(iParam0, 2, 16301/*func_83*/, 16339/*func_84*/, 16771/*func_85*/);
	func_79(iParam0, 3, 16801/*func_86*/, 16827/*func_87*/, 16906/*func_88*/);
	func_79(iParam0, 4, 16914/*func_89*/, 17068/*func_90*/, 16906/*func_88*/);
	func_91(iParam0, 0);
}

void func_7(int* iParam0)
{
	struct<2> Var0;

	Var0.f_1 = 20;
	MISC::_COPY_MEMORY(iParam0, &Var0, 65);
	func_79(iParam0, 0, 17140/*func_92*/, 17218/*func_93*/, 16906/*func_88*/);
	func_79(iParam0, 1, 18374/*func_94*/, 18501/*func_95*/, 16906/*func_88*/);
	func_79(iParam0, 2, 16906/*func_88*/, 19343/*func_96*/, 16906/*func_88*/);
	func_79(iParam0, 3, 19501/*func_97*/, 20047/*func_98*/, 16906/*func_88*/);
	func_79(iParam0, 4, 20675/*func_99*/, 20905/*func_100*/, 16906/*func_88*/);
	func_79(iParam0, 5, 21328/*func_101*/, 21361/*func_102*/, 16906/*func_88*/);
	func_79(iParam0, 6, 22078/*func_103*/, 22163/*func_104*/, 16906/*func_88*/);
	func_91(iParam0, 0);
}

void func_8(int* iParam0)
{
	struct<2> Var0;

	Var0.f_1 = 20;
	MISC::_COPY_MEMORY(iParam0, &Var0, 65);
	func_79(iParam0, 0, 22218/*func_105*/, 22300/*func_106*/, 16906/*func_88*/);
	func_79(iParam0, 1, 22621/*func_107*/, 22657/*func_108*/, 16906/*func_88*/);
	func_79(iParam0, 2, 23126/*func_109*/, 23257/*func_110*/, 23666/*func_111*/);
	func_79(iParam0, 3, 23685/*func_112*/, 23752/*func_113*/, 24156/*func_114*/);
	func_91(iParam0, 0);
}

void func_9()
{
	struct<2> Var0;

	Var0.f_1 = 20;
	MISC::_COPY_MEMORY(&(Local_18.f_1934), &Var0, 65);
	func_79(&(Local_18.f_1934), 0, 24225/*func_115*/, 24262/*func_116*/, 16906/*func_88*/);
	func_79(&(Local_18.f_1934), 1, 24445/*func_117*/, 24468/*func_118*/, 16906/*func_88*/);
	func_79(&(Local_18.f_1934), 2, 24673/*func_119*/, 24720/*func_120*/, 16906/*func_88*/);
	func_79(&(Local_18.f_1934), 3, 24994/*func_121*/, 25045/*func_122*/, 16906/*func_88*/);
	func_79(&(Local_18.f_1934), 4, 25064/*func_123*/, 25120/*func_124*/, 16906/*func_88*/);
	func_91(&(Local_18.f_1934), 0);
}

void func_10(var uParam0)
{
	uParam0->f_45 = 4;
	uParam0->f_47 = 3;
	uParam0->f_1714 = { func_125(uParam0->f_45) };
	uParam0->f_1717 = 0f;
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

	if (func_38(1) && func_126(0, 0, 1))
	{
		return;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(&(Global_1357549->f_3[0])) || !VOLUME::_0x92A78D0BEDB332A3(&(Global_1357549->f_3[2])))
	{
		return;
	}
	if ((func_127(&Global_1935630, 16384) || func_130(func_129(func_128()), 256)) || STREAMING::_0x99F92061EFE908BA())
	{
		return;
	}
	iVar0 = func_131(Global_1359489->f_10);
	if (func_132(iVar0, Global_1359489->f_10))
	{
		func_133(iVar0);
	}
	iVar1 = Local_18.f_1712;
	if (func_132((Global_1357549->f_1675[iVar1 /*5*/])->f_3, -1))
	{
		func_133((Global_1357549->f_1675[iVar1 /*5*/])->f_3);
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

	if (func_134())
	{
		if (!func_135())
		{
			func_136(1);
			func_137(32);
		}
	}
	else if (func_12(32768))
	{
		if (func_138(&uVar0))
		{
			if (!func_135())
			{
				func_136(1);
			}
			func_139();
			func_140(32);
			func_136(0);
		}
		if (func_135())
		{
			func_136(0);
		}
		if ((func_141() == 7 && func_142()) && !func_143(67))
		{
			if (!func_144(-999503751))
			{
				func_145(-999503751);
			}
			if (!func_144(81053684))
			{
				func_145(81053684);
			}
			if (!func_144(-1719060085))
			{
				func_145(-1719060085);
			}
			if (!func_144(-2061583405))
			{
				func_145(-2061583405);
			}
		}
	}
	else
	{
		if (!func_135())
		{
			func_136(1);
			func_137(32);
		}
		if ((func_141() == 7 && func_142()) && !func_143(67))
		{
			if (func_144(-999503751))
			{
				func_146(-999503751);
			}
			if (func_144(81053684))
			{
				func_146(81053684);
			}
			if (func_144(-1719060085))
			{
				func_146(-1719060085);
			}
			if (func_144(-2061583405))
			{
				func_146(-2061583405);
			}
		}
	}
}

void func_16()
{
	func_147();
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
	func_148(fParam0, fParam1, fParam2);
	func_150(func_149());
	func_151(MONEY::_MONEY_GET_CASH_BALANCE());
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
				if (func_152(iVar1))
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
	func_153(uParam0);
	func_154(&(Global_1357549->f_3[0]), &(Global_1357549->f_3[2]), &(Global_1357549->f_3[4]), &(Global_1357549->f_3[5]));
	func_155(&(Global_1357549->f_3[2]));
	func_156(uParam0);
	func_157();
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
				func_158(0);
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
			func_158(1);
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
	if (func_159())
	{
		if (!func_12(1024))
		{
			AUDIO::SET_AUDIO_FLAG("EnableIdleMusic", false);
			func_140(1024);
		}
	}
	else if (func_12(1024))
	{
		AUDIO::SET_AUDIO_FLAG("EnableIdleMusic", true);
		func_137(1024);
	}
	if (MISC::GET_GAME_TIMER() <= Global_1357549->f_1892)
	{
		func_160(4194304);
	}
	else
	{
		func_50(4194304);
	}
	if ((((!func_12(262144) && func_161(&(Global_1357549->f_3[2]), Global_36)) && !func_12(4)) && !func_12(2)) && func_141() != 8)
	{
		CAM::_0x632BE8D84846FA56();
	}
	if (Local_18.f_2019 != 0)
	{
		if (!func_38(16777216))
		{
			MAP::_0x1392105DA88BBFFB(Local_18.f_2019, Local_18.f_2019.f_3, Local_18.f_2019.f_4, Local_18.f_2019.f_2, Local_18.f_2019.f_1);
			func_160(16777216);
		}
	}
	else if (func_38(16777216))
	{
		MAP::_0xE057FEA9A22EB3EE(Local_18.f_2019);
		func_50(16777216);
	}
	if (func_162())
	{
		if (!func_130(Local_18.f_47, 64))
		{
			func_163(Local_18.f_47, 64);
		}
	}
	else if (func_130(Local_18.f_47, 64))
	{
		func_164(Local_18.f_47, 64);
	}
	Global_1357549->f_1484 = MISC::GET_GAME_TIMER();
}

void func_22()
{
	char* sVar0;
	float fVar1;
	int iVar2;

	if (func_159())
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
			Global_1357549->f_1663[iVar2] = func_165(&(Global_1357549->f_1659[iVar2]));
		}
		switch (Global_1357549->f_1658)
		{
			case 0:
				if (func_166(iVar2))
				{
					if (func_167(iVar2))
					{
						if (func_168(Global_1357549->f_1651[iVar2 /*3*/]))
						{
							if (func_169(Global_1357549->f_1651[iVar2 /*3*/]) > fVar1)
							{
								if (func_170(&(Global_1357549->f_1659[iVar2]), 1, 1) || func_171(&(Global_1357549->f_1659[iVar2]), 8))
								{
									Global_1357549->f_1666 = 0;
									Global_1357549->f_1667 = 0;
									Global_1357549->f_1658 = 1;
								}
							}
							else if (func_169(Global_1357549->f_1651[iVar2 /*3*/]) > (fVar1 - 5f) && Global_1357549->f_1666 == 0)
							{
								Global_1357549->f_1666 = 1;
								func_173(func_172(&(Global_1357549->f_1659[iVar2])), "EXPLAIN_YOURSELF", 272211449, Global_35, 1, 0, 0, 1);
								TASK::TASK_LOOK_AT_ENTITY(func_172(&(Global_1357549->f_1659[iVar2])), Global_35, 2000, 0, 51, 0);
							}
							else if (func_169(Global_1357549->f_1651[iVar2 /*3*/]) > (fVar1 - 12f) && Global_1357549->f_1667 == 0)
							{
								Global_1357549->f_1667 = 1;
								TASK::TASK_LOOK_AT_ENTITY(func_172(&(Global_1357549->f_1659[iVar2])), Global_35, 2000, 0, 51, 0);
								func_173(func_172(&(Global_1357549->f_1659[iVar2])), "INTRUDED_AGAIN", 272211449, Global_35, 1, 0, 0, 1);
							}
							else if (Global_1357549->f_1668 == 0)
							{
								if (func_174())
								{
									Global_1357549->f_1668 = 1;
									func_173(func_172(&(Global_1357549->f_1659[iVar2])), "ITEM_PICKUP_REACT", -128067431, Global_35, 1, 0, 0, 1);
								}
							}
						}
						else
						{
							func_173(func_172(&(Global_1357549->f_1659[iVar2])), "GET_OUT", 272211449, Global_35, 1, 0, 0, 1);
							func_175(Global_1357549->f_1651[iVar2 /*3*/], 0);
						}
					}
					else if (func_168(Global_1357549->f_1651[iVar2 /*3*/]))
					{
						Global_1357549->f_1666 = 0;
						Global_1357549->f_1667 = 0;
						Global_1357549->f_1668 = 0;
						func_176(Global_1357549->f_1651[iVar2 /*3*/]);
					}
				}
				break;
			case 1:
				if (func_168(Global_1357549->f_1651[iVar2 /*3*/]))
				{
					if (func_177(&(Global_1357549->f_1659[iVar2])))
					{
						Global_1357549->f_1669 = ANIMSCENE::_CREATE_ANIM_SCENE(sVar0, 0, 0, false, true);
						ANIMSCENE::LOAD_ANIM_SCENE(Global_1357549->f_1669);
						ANIMSCENE::_0xDF7B5144E25CD3FE(Global_1357549->f_1669, func_178(&(Global_1357549->f_1659[iVar2])));
						Global_1357549->f_1658 = 5;
					}
					else
					{
						func_179(&(Global_1357549->f_1659[iVar2]), 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
					}
				}
				break;
			case 5:
				if (func_168(Global_1357549->f_1651[iVar2 /*3*/]))
				{
					if (ANIMSCENE::_0x25557E324489393C(Global_1357549->f_1669))
					{
						if (ANIMSCENE::_0x477122B8D05E7968(Global_1357549->f_1669, 1, 0))
						{
							if (ANIMSCENE::_0x23E33CB9F4A3F547(Global_1357549->f_1669, func_178(&(Global_1357549->f_1659[iVar2]))))
							{
								func_180(&(Global_1357549->f_1659[iVar2]));
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Global_1357549->f_1669, func_178(&(Global_1357549->f_1659[iVar2])), true);
								PED::SET_PED_CONFIG_FLAG(Global_35, 174, true);
								ANIMSCENE::START_ANIM_SCENE(Global_1357549->f_1669);
								func_173(func_172(&(Global_1357549->f_1659[iVar2])), "LEAVE_NOW", 272211449, Global_35, 1, 0, 0, 1);
								Global_1357549->f_1658 = 6;
							}
						}
					}
				}
				break;
			case 6:
				if (func_168(Global_1357549->f_1651[iVar2 /*3*/]))
				{
					if (ANIMSCENE::_0xCDC5512A407CF08D(Global_1357549->f_1669))
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1065353216);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						ANIMSCENE::_0xAE6ADA8FE7E84ACC(Global_1357549->f_1669, func_178(&(Global_1357549->f_1659[iVar2])));
						ANIMSCENE::RESET_ANIM_SCENE(Global_1357549->f_1669, 0);
						ANIMSCENE::_DELETE_ANIM_SCENE(Global_1357549->f_1669);
						TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(func_172(&(Global_1357549->f_1659[iVar2])), 1030835986);
						PED::SET_PED_CONFIG_FLAG(func_172(&(Global_1357549->f_1659[iVar2])), 40, false);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
						_NAMESPACE48::_0x631CD2D77FDC0316(_NAMESPACE48::_0x32A1E3B83D501096(func_172(&(Global_1357549->f_1659[iVar2]))));
						func_181(&(Global_1357549->f_1659[iVar2]), 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
						func_182(Global_1357549->f_1651[iVar2 /*3*/]);
						Global_1357549->f_1658 = 7;
					}
				}
				break;
			case 7:
				if (func_168(Global_1357549->f_1651[iVar2 /*3*/]))
				{
					if (func_169(Global_1357549->f_1651[iVar2 /*3*/]) > 1.5f)
					{
						func_176(Global_1357549->f_1651[iVar2 /*3*/]);
						func_183(&(Global_1357549->f_1659[iVar2]));
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
			func_184();
			Global_1357549->f_11 = 1;
			break;
		case 1:
			func_185();
			break;
		case 2:
			break;
	}
}

void func_24()
{
	int iVar0;

	iVar0 = func_141();
	if (((iVar0 == 0 || iVar0 == 7) || iVar0 == 4) || iVar0 == 5)
	{
		if (!func_186(1024))
		{
			func_187(1024);
			func_160(-2147483648);
		}
		if (!func_186(64))
		{
			func_187(64);
			func_160(-2147483648);
		}
		if (iVar0 == 7)
		{
			if (!func_38(131072))
			{
				func_160(131072);
				func_160(-2147483648);
			}
		}
	}
	else if (func_159() && !func_188())
	{
		if (!func_186(64))
		{
			func_187(64);
			func_160(-2147483648);
		}
	}
	else if (func_38(-2147483648))
	{
		if (func_186(1024))
		{
			func_189(1024);
		}
		if (func_186(64))
		{
			func_189(64);
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
		if (func_126(0, 0, 1))
		{
			return;
		}
		func_160(4096);
	}
	if (func_38(4096))
	{
		if (MISC::GET_GAME_TIMER() < Local_18.f_50)
		{
			return;
		}
		if (!func_190())
		{
			return;
		}
		if (!func_38(8192))
		{
			func_191();
			Local_18.f_50 = MISC::GET_GAME_TIMER() + 5500;
			func_160(8192);
		}
		else
		{
			func_192();
			func_193();
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
		func_194(&(uParam1->f_5));
	}
	if (func_195(uParam1->f_5) && func_196(uParam1->f_5))
	{
		func_197(uParam0, uParam1);
		func_194(&(uParam1->f_5));
	}
}

void func_28()
{
	if (func_198(2))
	{
		if (func_199())
		{
			if (func_143(15))
			{
				if (func_143(4) && !func_143(37))
				{
					if (!func_200(605) && !func_201(605))
					{
						func_202(605, 0);
					}
				}
				else if (func_143(43))
				{
					if (!func_200(605) && !func_201(605))
					{
						func_202(605, 0);
					}
				}
			}
		}
		if (func_142() && func_143(73))
		{
			if (!func_200(606) && !func_201(606))
			{
				func_202(606, 0);
			}
		}
	}
	if (func_203() && !func_200(538))
	{
		if ((MAP::DOES_BLIP_EXIST(Local_18.f_51.f_14) && MAP::DOES_BLIP_EXIST(Local_18.f_51.f_15)) && MAP::DOES_BLIP_EXIST(Local_18.f_51.f_13))
		{
			func_202(538, 0);
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
						if (func_204(&(Local_18.f_3057[iVar1 /*21*/])))
						{
							func_205(Local_18.f_3057[iVar1 /*21*/], 1, 1);
						}
					}
					else if (VOLUME::_0x92A78D0BEDB332A3((Local_18.f_3057[iVar1 /*21*/])->f_4))
					{
						if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, (Local_18.f_3057[iVar1 /*21*/])->f_4, false, 0))
						{
							if (!func_206((Local_18.f_3057[iVar1 /*21*/])->f_6))
							{
								if (!func_204(&(Local_18.f_3057[iVar1 /*21*/])))
								{
									Local_18.f_3057[iVar1 /*21*/] = func_208(func_207(), (Local_18.f_3057[iVar1 /*21*/])->f_16, (Local_18.f_3057[iVar1 /*21*/])->f_4, 2, 1, 0, (Local_18.f_3057[iVar1 /*21*/])->f_17, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
									if ((iVar1 == 0 || iVar1 == 8) || iVar1 == 4)
									{
										func_209(&(Local_18.f_3057[iVar1 /*21*/]), 26, 1, 1);
									}
									if ((Local_18.f_3057[iVar1 /*21*/])->f_18 != -1)
									{
										func_210(&(Local_18.f_3057[iVar1 /*21*/]), (Local_18.f_3057[iVar1 /*21*/])->f_18, 0, 1);
									}
								}
								else if (((Local_18.f_3057[iVar1 /*21*/])->f_17 == 0 && func_211(&(Local_18.f_3057[iVar1 /*21*/]), 1)) || ((Local_18.f_3057[iVar1 /*21*/])->f_17 != 0 && func_212(&(Local_18.f_3057[iVar1 /*21*/]), 1)))
								{
									func_205(Local_18.f_3057[iVar1 /*21*/], 1, 1);
									(Local_18.f_3057[iVar1 /*21*/])->f_3 = 1;
								}
							}
						}
					}
					break;
				case 1:
					if (func_213(Global_35, 0, 1, 1) == joaat("weapon_kit_binoculars"))
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
						if (!func_206((Local_18.f_3057[iVar1 /*21*/])->f_9))
						{
							(Local_18.f_3057[iVar1 /*21*/])->f_5 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, (Local_18.f_3057[iVar1 /*21*/])->f_9, (Local_18.f_3057[iVar1 /*21*/])->f_12, (Local_18.f_3057[iVar1 /*21*/])->f_15, false, 2);
						}
					}
					if ((Local_18.f_3057[iVar1 /*21*/])->f_19 != -1)
					{
						func_214(iVar1);
						if (func_204((Local_18.f_3057[iVar1 /*21*/])->f_1))
						{
							if (func_215(iVar1))
							{
							}
							else
							{
								if (func_206((Local_18.f_3057[iVar1 /*21*/])->f_9))
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
								func_216(iVar1);
								HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, 1f, 2, 1, 799218720, (Local_18.f_3057[iVar1 /*21*/])->f_20, 0);
								if (func_204((Local_18.f_3057[iVar1 /*21*/])->f_2))
								{
									if (func_217((Local_18.f_3057[iVar1 /*21*/])->f_2, 1))
									{
										if ((Local_18.f_3057[iVar1 /*21*/])->f_19 != -1)
										{
											iVar2 = 0;
											while (iVar2 < 15)
											{
												(Local_18.f_3057[iVar2 /*21*/])->f_3 = 0;
												func_205(Local_18.f_3057[iVar2 /*21*/], 1, 1);
												func_205(&((Local_18.f_3057[iVar2 /*21*/])->f_1), 1, 1);
												func_205(&((Local_18.f_3057[iVar2 /*21*/])->f_2), 1, 1);
												iVar2++;
											}
										}
										(Local_18.f_3057[iVar1 /*21*/])->f_3 = 4;
									}
								}
								Jump @1081; //curOff = 1059
								Jump @1081; //curOff = 1062
								func_218(Local_18.f_3057[iVar1 /*21*/]);
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
	if (func_219(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = PED::GET_MOUNT(PLAYER::PLAYER_PED_ID());
	}
	else
	{
		iVar0 = PED::_0x4C8B59171957BCF7(PLAYER::PLAYER_PED_ID());
	}
	if (func_220(iVar0))
	{
		if (func_221(iVar0) && func_222(iVar0))
		{
			if (Global_1357549->f_1897 != iVar0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1357549->f_1897))
				{
					func_223();
				}
				func_224(iVar0, Local_18.f_45, 1);
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(Global_1357549->f_1897) && Global_1357549->f_1897 == iVar0)
		{
			func_223();
		}
		else if ((ENTITY::DOES_ENTITY_EXIST(Global_1357549->f_1897) && Global_1357549->f_1897 != iVar0) && func_219(PLAYER::PLAYER_PED_ID()))
		{
			iVar1 = func_225(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), 2);
			if (TASK::_0x841475AC96E794D1(iVar1))
			{
				if (func_226(iVar0, TASK::_0xA8452DD321607029(iVar1, 1), 1) < 8f)
				{
					if (!func_200(604))
					{
						func_202(604, 0);
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1357549->f_1897))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_1357549->f_1897) && func_220(Global_1357549->f_1897))
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
				func_223();
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
	if (((func_227(-1461741225, 1) || func_227(-404697685, 1)) || func_227(1674863702, 1)) || func_227(-1917134080, 1))
	{
		return;
	}
	if (func_228())
	{
		if (!func_168(&(uParam0->f_3480)))
		{
			func_229();
			func_175(&(uParam0->f_3480), 0);
		}
		if (func_169(&(uParam0->f_3480)) > 10f && !func_159())
		{
			func_230();
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

	iVar0 = func_231(iParam0);
	if (iVar0 != -1)
	{
		if (!func_232(19, 4))
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
			func_233(19, 16384);
			func_233(19, 32768);
			func_234(19, -1, &(Global_1357549->f_3[4]), iParam1, iVar1, 0, 12, -1082130432, 0, 0);
		}
		if (func_235(iVar0))
		{
			func_236(iVar0, 19, 0, 1);
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
			func_237(uParam1);
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
		func_238(iParam0, iVar1, (*uParam1)[iVar1 /*257*/], &iVar0);
		iVar1++;
	}
}

void func_36(int iParam0)
{
	if ((MISC::GET_FRAME_COUNT() % 60) == 0 || iParam0)
	{
		Local_18.f_3054 = func_239(Local_18.f_2024[0 /*257*/]);
		Local_18.f_3055 = func_239(Local_18.f_2024[2 /*257*/]);
		Local_18.f_3056 = func_239(Local_18.f_2024[1 /*257*/]);
		Global_1357549->f_1899 = func_240();
		Global_1357549->f_1900 = func_241(Local_18.f_3056, Global_1357549->f_1899);
	}
}

void func_37()
{
	if (func_12(8192) || func_242())
	{
		func_243(1000);
		return;
	}
	if (Local_18.f_51.f_20 != 0)
	{
		func_243(1000);
		return;
	}
	if (func_244(Local_18.f_51.f_1, 1) || func_244(Local_18.f_51.f_6, 1))
	{
		func_243(1000);
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
	if (bParam0 && func_245())
	{
		func_246();
	}
	else
	{
		func_247();
	}
}

void func_40(int iParam0)
{
	int iVar0;

	iVar0 = func_231(iParam0);
	if (iVar0 != -1)
	{
		if (func_232(19, 4))
		{
			func_248(19);
		}
		if (!func_235(iVar0))
		{
			func_236(iVar0, 19, 1, 1);
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

	if ((BUILTIN::VDIST(Global_36, 0f, 0f, 0f) <= 5f || func_127(&Global_1935630, 16384)) || func_127(&Global_1935630, 8388608))
	{
		return;
	}
	if (func_249(uParam0, 1))
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
	bVar2 = func_250();
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
							if ((!func_251((*uParam0)[iVar3 /*3*/], 1) && func_252(iParam1)) && !func_253(iParam1, 16))
							{
								func_255(iParam1, func_254(), -1, 0, -1, 0);
								func_256((*uParam0)[iVar3 /*3*/], 1);
							}
							func_257(iParam1, 0);
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
		if (func_258() != bVar0)
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
			func_259();
			func_260(Global_1310750->f_16071, 0, iVar4, 0, 0);
		}
	}
	func_261(bVar0);
	if (func_56() == -1)
	{
		func_263((iParam1 == func_262() && bVar0));
	}
}

void func_42(var uParam0)
{
	if (!func_264(4096))
	{
		if (!OBJECT::DOES_PICKUP_EXIST(uParam0->f_3493))
		{
			uParam0->f_3493 = OBJECT::CREATE_PICKUP_ROTATE(-1141160886, 1432.942f, -7331.263f, 81.3949f, 90f, 0f, 180f, 8192, -1, 2, 1, 0, 0, 0, 0);
		}
		else if (OBJECT::HAS_PICKUP_BEEN_COLLECTED(uParam0->f_3493))
		{
			func_265(joaat("ammo_shotgun"), 10, 1, 0, 0, 752097756, 0, 0, 0, 0);
			func_75(4096);
		}
	}
	if (!func_264(2048))
	{
		if (!OBJECT::DOES_PICKUP_EXIST(uParam0->f_3493.f_1))
		{
			uParam0->f_3493.f_1 = OBJECT::CREATE_PICKUP_ROTATE(493518845, 1432.168f, -7330.875f, 81.37f, 90f, 150f, 135f, 0, -1, 2, 1, 0, 0, 0, 0);
		}
		else if (OBJECT::HAS_PICKUP_BEEN_COLLECTED(uParam0->f_3493.f_1))
		{
			func_265(joaat("ammo_pistol"), 24, 1, 0, 0, 752097756, 0, 0, 0, 0);
			func_75(2048);
			func_266(joaat("weapon_pistol_volcanic"));
		}
	}
}

void func_43(int* iParam0, var uParam1)
{
	if (func_267())
	{
		func_268(iParam0);
		func_269(0, 0);
		func_270();
	}
	func_271(iParam0);
	func_272(iParam0, uParam1);
	func_273(iParam0);
	func_274(iParam0, uParam1);
	if (!func_276(func_275()))
	{
		return;
	}
	func_277(iParam0);
}

void func_44(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = uParam0[2];
	if (VOLUME::_0x92A78D0BEDB332A3(iVar0))
	{
		func_278(iVar0);
		POPULATION::_0x74C2B3DC0B294102(iVar0);
		POPULATION::_0xA1CFB35069D23C23(iVar0);
		COMPANION::_0x7274F84B1501B523(iVar0);
	}
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (VOLUME::_0x92A78D0BEDB332A3(uParam0[iVar1]))
		{
			func_279(uParam0[iVar1]);
		}
		iVar1++;
	}
}

void func_45(var uParam0)
{
	int iVar0;

	uParam0->f_1713 = 30;
	iVar0 = 0;
	Global_1357549->f_3[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("GuarmaCamp volCampAreas[CVA_INNER]");
	func_280(Global_1357549->f_3[0], &iVar0, 0, 1429.294f, -7330.202f, 81.1644f, 0f, 0f, 4f, 30f, 14f, 30f, -1612834106, 0);
	Global_1357549->f_3[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("GuarmaCamp volCampAreas[CVA_WALK]");
	func_280(Global_1357549->f_3[1], &iVar0, 1, 1424.286f, -7330.554f, 81.1644f, 0f, 0f, 3.999998f, 20f, 14f, 30f, -1612834106, 0);
	Global_1357549->f_3[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("GuarmaCamp volCampAreas[CVA_OUTER]");
	Global_1357549->f_3[3] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("GuarmaCamp volCampAreas[CVA_OUTER_THRESHOLD]");
	func_280(Global_1357549->f_3[2], Global_1357549->f_3[3], 2, 1426.303f, -7331.687f, 81.2681f, 0f, 0f, 0f, 40f, 40f, 30f, 665633627, 0);
	Global_1357549->f_3[4] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("GuarmaCamp volCampAreas[CVA_SURROUNDING]");
	Global_1357549->f_3[5] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("GuarmaCamp volCampAreas[CVA_SURROUNDING_THRESHOLD]");
	func_280(Global_1357549->f_3[4], Global_1357549->f_3[5], 4, 1426.133f, -7332.54f, 85.9713f, 0f, 0f, 6f, 91f, 55f, 31f, 665633627, 0);
	Global_1357549->f_3[6] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1422.485f, -7331.637f, 82.05434f, 0f, 0f, -175.6361f, 3.167241f, 4.300028f, 3.235584f, "GuarmaCamp volCampAreas[CVA_PROPERTY]");
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
			return func_143(73);
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
	func_281(uParam0);
	func_282(uParam0);
	if (MISC::IS_BIT_SET(uParam0->f_1, 6))
	{
		func_283(1, uParam0);
	}
	if (uParam0->f_6 != -1)
	{
		GRAPHICS::_0x9CF1836C03FB67A2(&(uParam0->f_6), 0);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_5))
	{
		VOLUME::_0x43F867EF5C463A53(uParam0->f_5);
	}
	func_284(uParam0);
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
	func_285(iVar0, 0);
	func_286(&(Global_1357549->f_3[4]), 0, 0, 0);
	func_287(iVar0, 0);
	func_288(iVar0, 0, 0);
	iVar1 = 0;
	func_289(&iVar1, 0);
	func_289(&iVar1, 14);
	func_289(&iVar1, 16);
	COMPANION::_0x3CAAD93FA5B9579A(iVar0, 2, iVar1);
	func_290(Local_18.f_47, Local_18.f_1714, Local_18.f_1717, &(Global_1357549->f_3[6]));
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
			if (func_291(iParam0))
			{
				func_292(iParam0, uParam1);
				func_293(uParam1, 2);
			}
			break;
		case 2:
			if (func_291(iParam0))
			{
				if (!MISC::IS_BIT_SET(uParam1->f_1, 2))
				{
					if (MISC::IS_BIT_SET(uParam1->f_1, 5))
					{
						func_282(uParam1);
					}
					if (!MISC::IS_BIT_SET(uParam1->f_1, 3))
					{
						func_294(uParam1);
					}
					if ((!ENTITY::IS_ENTITY_DEAD(Global_35) && VOLUME::_0x92A78D0BEDB332A3(uParam1->f_5)) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam1->f_5, true, 0))
					{
						PAD::DISABLE_CONTROL_ACTION(0, 613911080, false);
					}
					if (!PED::IS_PED_ON_MOUNT(Global_35))
					{
						if (MISC::IS_BIT_SET(uParam1->f_1, 4))
						{
							func_295(uParam1->f_8, 0);
							MISC::CLEAR_BIT(&(uParam1->f_1), 4);
						}
					}
					else if (!MISC::IS_BIT_SET(uParam1->f_1, 4))
					{
						func_295(uParam1->f_8, 1);
						MISC::SET_BIT(&(uParam1->f_1), 4);
					}
				}
				else
				{
					if (MISC::IS_BIT_SET(uParam1->f_1, 3))
					{
						func_281(uParam1);
					}
					if (!MISC::IS_BIT_SET(uParam1->f_1, 5))
					{
						func_296(uParam1);
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
					func_282(uParam1);
				}
				if (MISC::IS_BIT_SET(uParam1->f_1, 3))
				{
					func_281(uParam1);
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
					if (func_212(uParam1->f_8, 1))
					{
						if (func_297(&iVar0))
						{
							func_298(uParam1->f_8, 1);
							MISC::SET_BIT(&(uParam1->f_1), 2);
						}
						else
						{
							switch (iVar0)
							{
								case -1:
									break;
								case 0:
									if (!func_200(611))
									{
										func_299("TF_CAMP_HITCH_MANAGE_HORSES_NO_HORSES", 10000, 0, 0, 0, 1);
										func_300(611);
									}
									break;
								case 1:
									if (!func_200(612))
									{
										func_299("TF_CAMP_HITCH_MANAGE_HORSES_HORSE_DEAD", 10000, 0, 0, 0, 1);
										func_300(612);
									}
									break;
								case 2:
									if (!func_301())
									{
										if (iParam0 == 7 || iParam0 == 8)
										{
											func_299("TF_CAMP_HITCH_MANAGE_HORSES_UNAVAILABLE_RANCH", 10000, 0, 0, 0, 1);
										}
										else
										{
											func_299("TF_CAMP_HITCH_MANAGE_HORSES_UNAVAILABLE_CAMP", 10000, 0, 0, 0, 1);
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
				if (func_217(uParam1->f_10, 1))
				{
					MISC::SET_BIT(&(uParam1->f_1), 7);
					MISC::CLEAR_BIT(&(uParam1->f_1), 2);
					func_283(0, uParam1);
					func_282(uParam1);
					func_293(uParam1, 3);
					return;
				}
				if (func_217(uParam1->f_11, 1))
				{
					uParam1->f_7 = 0;
					MISC::CLEAR_BIT(&(uParam1->f_1), 2);
					MISC::CLEAR_BIT(&(uParam1->f_1), 7);
					func_283(0, uParam1);
					func_282(uParam1);
					func_293(uParam1, 3);
					return;
				}
				iVar1 = 0;
				while (iVar1 < 3)
				{
					if (func_217(&(uParam1->f_12[iVar1]), 1))
					{
						uParam1->f_7 = func_302(iVar1);
						MISC::CLEAR_BIT(&(uParam1->f_1), 2);
						MISC::CLEAR_BIT(&(uParam1->f_1), 7);
						func_283(0, uParam1);
						func_282(uParam1);
						func_293(uParam1, 3);
						return;
					}
					iVar1++;
				}
				if (func_217(uParam1->f_9, 1))
				{
					func_282(uParam1);
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
				ENTITY::SET_ENTITY_COORDS(Global_35, func_303(iParam0), true, false, true, true);
				ENTITY::SET_ENTITY_HEADING(Global_35, func_304(iParam0));
				if (MISC::IS_BIT_SET(uParam1->f_1, 7))
				{
					func_293(uParam1, 6);
				}
				else
				{
					func_293(uParam1, 4);
				}
			}
			break;
		case 4:
			if (!MISC::IS_BIT_SET(uParam1->f_1, 1))
			{
				if (uParam1->f_7 != 0)
				{
					func_305(uParam1->f_7);
				}
				func_307(func_306(iParam0, -1), 0.5f, 1, 1, 0, 0, 0);
				uParam1->f_7 = -1;
				MISC::SET_BIT(&(uParam1->f_1), 1);
				return;
			}
			if (func_308(iParam0, uParam1))
			{
				func_309(0);
				func_310();
				if (func_311(0) == 0)
				{
					func_312(0, 5);
				}
				ENTITY::SET_ENTITY_COORDS(Global_35, func_303(iParam0), true, false, true, true);
				ENTITY::SET_ENTITY_HEADING(Global_35, func_304(iParam0));
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				uParam1->f_2 = MISC::GET_GAME_TIMER() + 500;
				func_293(uParam1, 5);
			}
			break;
		case 6:
			if (!MISC::IS_BIT_SET(uParam1->f_1, 8))
			{
				if (func_313())
				{
					func_314();
				}
				func_315(2);
				func_317(func_316(iParam0));
				PLAYER::_0xD2CB0FB0FDCB473D(PLAYER::PLAYER_ID(), 0);
				MISC::CLEAR_AREA(func_316(iParam0), 0.4f, 2442122);
				MISC::SET_BIT(&(uParam1->f_1), 8);
			}
			if (func_318(func_316(iParam0), 0f, 1))
			{
				PHYSICS::ACTIVATE_PHYSICS(Global_1900383->f_393);
				ENTITY::SET_ENTITY_COORDS(Global_35, func_303(iParam0), true, false, true, true);
				ENTITY::SET_ENTITY_HEADING(Global_35, func_304(iParam0));
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				MISC::CLEAR_BIT(&(uParam1->f_1), 8);
				MISC::CLEAR_BIT(&(uParam1->f_1), 7);
				uParam1->f_2 = MISC::GET_GAME_TIMER() + 500;
				func_293(uParam1, 5);
			}
			break;
		case 5:
			if (MISC::GET_GAME_TIMER() > uParam1->f_2)
			{
				func_283(1, uParam1);
				func_293(uParam1, 7);
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
				func_293(uParam1, 2);
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
	func_247();
	HUD::_0x8BC7C1F929D07BF3(-950624750);
	if (func_38(2097152) && PED::GET_PED_CONFIG_FLAG(Global_35, 334, true))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 334, false);
		func_50(2097152);
	}
	func_319(uParam0);
	func_320(uParam0);
	func_137(235110816);
	if (!func_159())
	{
		if (!func_12(64))
		{
			func_321(1);
			func_322(0);
		}
		if (bParam1 == 0)
		{
			func_323(1, -1);
		}
		MISC::_0x1096603B519C905F("");
		if (!PED::_0xA911EE21EDF69DAF(PLAYER::PLAYER_PED_ID()) && !(func_324(PED::GET_MOUNT(PLAYER::PLAYER_PED_ID()), 0) && PED::_0xA911EE21EDF69DAF(PED::GET_MOUNT(PLAYER::PLAYER_PED_ID()))))
		{
			PED::_0x9851DE7AEC10B4E1(func_325(func_141()), func_326(), 1, 0);
		}
	}
	if (func_327(4))
	{
		func_328(0);
	}
	PLAYER::_0x9461A8FAB0378E5B(PLAYER::PLAYER_ID(), 0);
	func_329(1, 0, 1103626240);
	if (!func_12(16777216))
	{
		func_330();
		func_137(16777216);
	}
	if (!func_12(2048))
	{
		CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
		func_137(2048);
	}
	if (func_12(32))
	{
		func_136(1);
		func_137(32);
	}
	if (func_38(1073741824))
	{
		func_50(1073741824);
	}
	func_331(&(uParam0->f_51));
	func_332();
	func_333(uParam0->f_46);
	AUDIO::SET_AUDIO_FLAG("EnableIdleMusic", false);
	func_334(uParam0->f_46, 4);
	func_334(uParam0->f_46, 8);
	func_261(0);
	if (func_56() == -1)
	{
		func_263(0);
	}
	if (func_335(32))
	{
		func_137(4);
		func_137(2);
		func_336(32);
		iVar0 = 0;
		while (iVar0 < &Global_1360165)
		{
			if (!func_337(iVar0) && func_338(iVar0, 0))
			{
				func_339(iVar0);
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
		func_340();
	}
	if (func_262() == uParam0->f_46)
	{
		func_341(bParam1);
		func_189(1073741824);
		func_342(0, 0, 0);
	}
	if (func_343(uParam0->f_46, &uVar2, &iVar3, 0, 0))
	{
		iVar1 = uVar2;
		while (iVar1 <= iVar3)
		{
			if (!func_344(iVar1, 0))
			{
				func_345(iVar1);
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
	func_346();
	func_347();
	func_348(uParam0);
	func_349(uParam0);
	func_350();
	func_351();
	func_352();
	func_193();
	func_353(0);
	GRAPHICS::REMOVE_DECALS_IN_RANGE(func_325(func_141()), 100f);
	if (func_335(8))
	{
		func_354(0);
		func_336(8);
	}
	if (!func_12(64))
	{
		func_158(1);
	}
	if (func_355(1))
	{
		TASK::_0x816A3ACD265E2297(1361896662, 1);
		func_356(1);
	}
	if (func_355(8192))
	{
		TASK::_0x816A3ACD265E2297(-2146271366, 1);
		func_356(8192);
	}
	iVar5 = func_357(7);
	if (ENTITY::DOES_ENTITY_EXIST(iVar5))
	{
		PED::SET_PED_CONFIG_FLAG(iVar5, 419, false);
	}
	func_137(229376);
	func_50(2560);
	Global_1357549->f_1896 = 0;
	PED::_0x0ADA3EC589E1736E();
	if (func_358(func_254()))
	{
		func_359(func_254(), 8);
	}
	func_360(&(Local_18.f_2024));
	func_361(&(Local_18.f_2024));
	func_362(&(Local_18.f_2024));
	Local_18.f_43 = 0;
	func_48(&(Global_1357549->f_1691));
	func_363();
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
		if (func_186(1024))
		{
			func_189(1024);
		}
		if (func_186(64))
		{
			func_189(64);
		}
		if (func_38(131072))
		{
			func_50(131072);
		}
		func_50(-2147483648);
	}
	if (func_141() == 2 || func_141() == 3)
	{
		if (func_364(13, 0) > 1)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("pirogue"));
		}
	}
	func_365(8);
	func_365(16);
	func_366(Global_1935630, 8388608);
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
		func_160(2048);
	}
	else
	{
		func_50(2048);
	}
	if (func_38(4194304))
	{
		func_160(8388608);
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
	if (!func_367(iParam0))
	{
		return 1;
	}
	if (func_343(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (Global_1897950->f_1 < iVar0 || Global_1897950->f_1 > iVar1)
		{
			Global_1897950->f_1 = iVar0;
		}
		while (true)
		{
			if (!func_368(Global_1897950->f_1, 16))
			{
				func_369(Global_1897950->f_1, 0);
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
	if (func_358(func_370(Local_18.f_46)))
	{
		func_359(func_370(Local_18.f_46), 4);
	}
	if (func_38(32768))
	{
		func_50(32768);
	}
	func_373(func_372(func_371(Local_18.f_46)));
	iVar0 = func_374(func_141());
	func_375(iVar0, 1137976064, 1120952528, -1, 1, 1, 0);
	func_376(Local_18.f_45, Global_40.f_4283.f_4, &(Local_18.f_2019));
	func_259();
	func_45(&Local_18);
	func_49(&Local_18);
	func_377(Global_1898004);
	func_378(Global_1898004, &(Global_1357549->f_3[2]), 1);
	if ((ENTITY::DOES_ENTITY_EXIST(Global_35) && PED::_0xA911EE21EDF69DAF(Global_35)) || (ENTITY::DOES_ENTITY_EXIST(PED::GET_MOUNT(Global_35)) && PED::_0xA911EE21EDF69DAF(PED::GET_MOUNT(Global_35))))
	{
		func_140(33554432);
		func_379(17, -2147483648, 1, -1);
		StringCopy(&cVar1, func_380(func_141()), 64);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
		{
			func_381(17, cVar1, 2);
		}
	}
	if (func_141() == 2 || func_141() == 3)
	{
		if (func_364(13, 0) > 1)
		{
			STREAMING::REQUEST_MODEL(joaat("pirogue"), false);
		}
	}
	func_382();
	return 1;
}

void func_60(int iParam0, int iParam1, int iParam2)
{
	Local_18.f_1[iParam0] = iParam1;
	Local_18.f_14[iParam0] = iParam2;
}

int func_61()
{
	return func_383(Local_18.f_46);
}

int func_62()
{
	if (func_34(Local_18.f_45))
	{
		if (!MISC::IS_BIT_SET(Local_18.f_43, 1))
		{
			func_384(&(Local_18.f_2024));
			MISC::SET_BIT(&(Local_18.f_43), 1);
		}
		return func_385(&(Local_18.f_2024));
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
	if (func_141() == 2 || func_141() == 3)
	{
		if (func_364(13, 0) > 1)
		{
			if (!STREAMING::HAS_MODEL_LOADED(joaat("pirogue")))
			{
				return 0;
			}
		}
	}
	if (func_386())
	{
		if (!func_126(0, 0, 1))
		{
			func_387(func_325(func_141()), func_326(), 0);
			func_388(func_325(func_141()), func_326(), 0);
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
		func_389(Local_18.f_45, 1, 1);
		Local_18.f_3479 = 0;
	}
	if (func_390(Local_18.f_45))
	{
		iVar0 = func_391(Local_18.f_45);
		iVar1 = 0;
		while (iVar1 < 6)
		{
			func_392(iVar0, Local_18.f_3479, iVar1, 1, 1);
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

	uVar0 = func_393();
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if (func_394(iVar1))
		{
			Local_18.f_3402[iVar1] = _NAMESPACE48::_0xA00DF706C60173D1(func_395(iVar1));
			STREAMING::REQUEST_MODEL(&(Local_18.f_3402[iVar1]), false);
			iVar2++;
			if (uVar0 && func_396(iVar1, 32768, 1))
			{
				Local_18.f_3430[iVar1] = _NAMESPACE48::_0xA00DF706C60173D1(func_397(iVar1, 1));
				Local_18.f_3430[iVar1] = &Local_18.f_3430[iVar1];
				STREAMING::REQUEST_MODEL(&(Local_18.f_3430[iVar1]), false);
				iVar2++;
				if (STREAMING::HAS_MODEL_LOADED(&(Local_18.f_3430[iVar1])) && &Local_18.f_3374[iVar1] == 0)
				{
					iVar3 = func_398(iVar1);
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
		Local_18.f_3478 = func_399();
		if (Local_18.f_3478 != 0)
		{
			STREAMING::REQUEST_MODEL(Local_18.f_3478, false);
			iVar2++;
		}
	}
	if (func_400(Local_18.f_45))
	{
		iVar4 = 0;
		while (iVar4 < 3)
		{
			Global_1357549->f_1675[iVar4 /*5*/] = func_401(iVar4);
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
	if (func_343(Local_18.f_46, &uVar6, &iVar7, 0, 1))
	{
		iVar5 = uVar6;
		while (iVar5 <= iVar7)
		{
			if (!func_402(iVar5))
			{
			}
			else if (func_368(iVar5, 32) && Local_18.f_46 != 22)
			{
			}
			else if (iVar8 < 15)
			{
				Local_18.f_3462[iVar8] = _NAMESPACE48::_0xA00DF706C60173D1(func_403(iVar5));
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
			func_404(Local_18.f_45, &(Local_18.f_2024));
			func_405(&(Local_18.f_2024), &(Global_40.f_4283.f_415));
			MISC::SET_BIT(&(Local_18.f_43), 2);
		}
		return func_406(&(Local_18.f_2024), &(Global_40.f_4283.f_415));
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
		func_407();
		MISC::SET_BIT(&(Local_18.f_43), 3);
	}
	bVar0 = false;
	if (func_408(&Local_18))
	{
		bVar0 = true;
	}
	else if (MISC::GET_GAME_TIMER() > Local_18.f_42)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_409(Local_18.f_46, 4);
		iVar1 = 0;
		while (iVar1 < 27)
		{
			func_410(iVar1, 4, 1);
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
	func_411(&Local_18);
	func_46();
	func_412(&(Local_18.f_51));
	func_413();
	func_414();
	func_36(1);
	func_407();
	func_415();
	return 1;
}

int func_71()
{
	if (func_416(32))
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(500);
		}
		func_417(32);
	}
	func_319(&Local_18);
	func_320(&Local_18);
	if (!func_12(2048))
	{
		CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(4000);
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 473, true);
	PED::SET_PED_CONFIG_FLAG(Global_35, 474, true);
	PED::SET_PED_CONFIG_FLAG(Global_35, 475, true);
	func_418(&(Global_1391438->f_5), 32, 1);
	func_419();
	AUDIO::SET_AUDIO_FLAG("EnableIdleMusic", true);
	func_420(0);
	func_409(Local_18.f_46, 8);
	func_160(1073741824);
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
			if (func_421())
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
	if (func_335(8))
	{
		func_354(0);
		func_336(8);
	}
	if (func_335(4))
	{
		func_158(1);
		func_336(4);
	}
	Local_18.f_1718 = 0;
	if (ITEMSET::IS_ITEMSET_VALID(Local_18.f_1718.f_1))
	{
		ITEMSET::DESTROY_ITEMSET(Local_18.f_1718.f_1);
	}
	if (func_335(32))
	{
		func_336(32);
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

	if (func_227(180573150, 1))
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
	if (func_126(0, 0, 1))
	{
		return -1;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-443368600) > 0)
	{
		return -1;
	}
	bVar0 = ((Local_18.f_45 == 7 || Local_18.f_45 == 8) || Local_18.f_45 == 4);
	if (!func_335(1))
	{
		if (LAW::_0x9D5C9A5A3321B128(PLAYER::PLAYER_ID()))
		{
			if (bVar0)
			{
				func_299("RANCH_LAW_WARN", 10000, 0, 0, 0, 1);
			}
			else
			{
				func_299("CAMP_LAW_WARN", 10000, 0, 0, 0, 1);
			}
		}
		else if (bVar0)
		{
			func_299("RANCH_COMBAT_WARN", 10000, 0, 0, 0, 1);
		}
		else
		{
			func_299("CAMP_COMBAT_WARN", 10000, 0, 0, 0, 1);
		}
		func_422(1);
	}
	if (!bVar0)
	{
		func_423();
	}
	if (func_38(512))
	{
		if (bVar0)
		{
			func_423();
			return 2;
		}
		else
		{
			return 1;
		}
	}
	if (Global_1357549->f_1497 != -1)
	{
		iVar1 = func_172(Global_1357549->f_1497);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			iVar2 = func_424(Local_18.f_1718.f_1);
			iVar3 = 0;
			while (iVar3 < iVar2)
			{
				iVar4 = MISC::_0x3FFB15534067DCD4(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, Local_18.f_1718.f_1));
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iVar1, iVar4, 17))
				{
					if (bVar0)
					{
						func_423();
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
			func_299("RANCH_LAW_GRIEF", 10000, 0, 0, 0, 1);
			func_425(2, 158959085, 0, "RANCH_LAW_HON", 0, 0, 1065353216, 0);
		}
		else
		{
			func_299("RANCH_COMBAT_GRIEF", 10000, 0, 0, 0, 1);
			func_425(2, 158959085, 0, "RANCH_COMBAT_HON", 0, 0, 1065353216, 0);
		}
	}
	else if (LAW::_0x9D5C9A5A3321B128(PLAYER::PLAYER_ID()))
	{
		func_299("CAMP_LAW_GRIEF", 10000, 0, 0, 0, 1);
		func_425(2, 158959085, 0, "CAMP_LAW_HON", 0, 0, 1065353216, 0);
	}
	else
	{
		func_299("CAMP_COMBAT_GRIEF", 10000, 0, 0, 0, 1);
		func_425(2, 158959085, 0, "CAMP_COMBAT_HON", 0, 0, 1065353216, 0);
	}
	func_426();
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
	func_140(4);
	func_140(2);
	func_422(32);
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

	func_427();
	func_428();
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return 0;
	}
	if (func_126(0, 0, 1))
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
	iVar0 = func_424(Local_18.f_1718.f_1);
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
			vVar25 = { func_429(func_325(func_141()), 50f, 2f) };
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
	func_137(2);
	func_137(4);
	func_336(32);
}

void func_83()
{
	func_140(4);
	func_140(2);
	func_422(32);
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

	func_427();
	func_428();
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return 0;
	}
	if (func_126(0, 0, 1))
	{
		return 0;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-443368600) > 0)
	{
		return 0;
	}
	iVar0 = func_424(Local_18.f_1718.f_1);
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
			func_137(4);
			func_137(2);
			return -1;
		}
		iVar1++;
	}
	if (!func_335(16))
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
		func_422(16);
	}
	return -1;
}

void func_85()
{
	Local_18.f_3373 = -1;
	func_137(2);
	func_137(4);
	func_336(32);
}

void func_86()
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0, 0);
	CAM::DO_SCREEN_FADE_OUT(3000);
}

int func_87()
{
	func_427();
	if (func_126(0, 0, 1) || SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-443368600) > 0)
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
	vVar2 = { func_430(func_141(), &uVar0, &uVar1) };
	func_431(vVar2, uVar1, uVar0, 0);
	func_432(0);
	func_433();
	func_434(6);
	func_435(4096);
	Global_1310720->f_6 = 1;
	Global_1310720->f_17 = 8;
	iVar5 = 0;
	while (iVar5 < 27)
	{
		iVar6 = func_172(iVar5);
		if (ENTITY::DOES_ENTITY_EXIST(iVar6))
		{
			PED::_0x06D26A96CA1BCA75(iVar6, 1, 0f, 0);
		}
		iVar5++;
	}
	func_436();
}

int func_90()
{
	func_427();
	if (func_190())
	{
		func_340();
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
	func_437(iParam0);
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
	if (func_355(1))
	{
		if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, &(Global_1357549->f_3[4]), false, 0))
		{
			TASK::_0x816A3ACD265E2297(1361896662, 1);
			func_356(1);
		}
	}
	if (func_355(8192))
	{
		if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, &(Global_1357549->f_3[4]), false, 0))
		{
			TASK::_0x816A3ACD265E2297(-2146271366, 1);
			func_356(8192);
		}
	}
	if (func_355(4096))
	{
		if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, &(Global_1357549->f_3[4]), false, 0))
		{
			func_356(4096);
		}
	}
	if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, &(Global_1357549->f_3[5]), false, 0))
	{
		return -1;
	}
	if (func_355(4096))
	{
		func_438(0);
	}
	bVar0 = false;
	if (func_439(Global_35, &(Local_18.f_1786.f_7), &bVar0))
	{
		if (bVar0)
		{
			if (!func_38(64))
			{
				func_440(2);
			}
		}
		else if (!func_38(32))
		{
			func_440(4);
		}
	}
	else if (func_441(Global_35, &(Local_18.f_1786.f_7), &bVar0))
	{
		if (bVar0)
		{
			if (!func_38(64))
			{
				func_440(32);
			}
		}
		else if (!func_38(32))
		{
			func_440(64);
		}
	}
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		Local_18.f_1786.f_5 = PED::GET_MOUNT(Global_35);
		if (func_439(Local_18.f_1786.f_5, &(Local_18.f_1786.f_8), &bVar0))
		{
			if (bVar0)
			{
				if (!func_38(64))
				{
					func_440(8);
				}
			}
			else if (!func_38(32))
			{
				func_440(16);
			}
		}
	}
	else if (TASK::_0xEFC4303DDC6E60D3(Global_35))
	{
		Local_18.f_1786.f_5 = TASK::_0xED1F514AF4732258(Global_35);
		if (func_439(Local_18.f_1786.f_5, &(Local_18.f_1786.f_8), &bVar0))
		{
			if (bVar0)
			{
				if (!func_38(64))
				{
					func_440(8);
				}
			}
			else if (!func_38(32))
			{
				func_440(16);
			}
		}
	}
	else
	{
		Local_18.f_1786.f_5 = func_357(0);
		if (func_324(Local_18.f_1786.f_5, 0) && func_442(Local_18.f_1786.f_5, 2043986356))
		{
			if (func_439(Local_18.f_1786.f_5, &(Local_18.f_1786.f_8), &bVar0))
			{
				if (bVar0)
				{
					if (!func_38(64))
					{
						func_440(8);
					}
				}
				else if (!func_38(32))
				{
					func_440(16);
				}
			}
		}
	}
	bVar1 = false;
	Local_18.f_1786.f_6 = func_357(1);
	if ((func_324(Local_18.f_1786.f_6, 0) && Local_18.f_1786.f_5 != Local_18.f_1786.f_6) && func_442(Local_18.f_1786.f_6, 2043986356))
	{
		bVar1 = true;
	}
	else
	{
		Local_18.f_1786.f_6 = func_357(0);
		if ((func_324(Local_18.f_1786.f_6, 0) && Local_18.f_1786.f_5 != Local_18.f_1786.f_6) && func_442(Local_18.f_1786.f_6, 2043986356))
		{
			bVar1 = true;
		}
	}
	if (bVar1)
	{
		if (func_439(Local_18.f_1786.f_6, &(Local_18.f_1786.f_9), &bVar0))
		{
			if (bVar0)
			{
				func_440(2048);
			}
			else
			{
				func_440(1024);
			}
		}
	}
	if (((((((func_355(2) || func_355(4)) || func_355(8)) || func_355(16)) || func_355(32)) || func_355(64)) || func_355(2048)) || func_355(1024))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256, 0);
		if (func_443())
		{
			return 6;
		}
		else
		{
			return 1;
		}
	}
	if (!func_355(4096) && func_443())
	{
		iVar2 = func_357(1);
		if (func_439(iVar2, &uVar3, &bVar0))
		{
			func_440(4096);
		}
		else
		{
			iVar2 = func_357(0);
			if (func_439(iVar2, &uVar3, &bVar0))
			{
				func_440(4096);
			}
		}
	}
	if ((!func_355(1) && !func_355(4096)) && !func_38(64))
	{
		TASK::_0x816A3ACD265E2297(1361896662, 0);
		func_440(1);
	}
	if ((!func_355(8192) && !func_355(4096)) && !func_38(32))
	{
		TASK::_0x816A3ACD265E2297(-2146271366, 0);
		func_440(8192);
	}
	return -1;
}

void func_94()
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, 0, 0);
	Local_18.f_1786.f_10 = func_444(1, 8);
	Local_18.f_1786.f_2 = MISC::GET_GAME_TIMER() + 3000;
	if ((func_355(2) || func_355(8)) || func_355(32))
	{
		func_202(535, 0);
	}
	if ((func_355(4) || func_355(16)) || func_355(64))
	{
		func_202(536, 0);
	}
}

int func_95()
{
	int iVar0;

	if ((func_355(8) || func_355(16)) || func_355(64))
	{
		func_445(Local_18.f_1786.f_5, &(Local_18.f_1786.f_3), 0, 0, 0, 1084227584, 100, 0, 0);
	}
	if (func_355(2048) || func_355(1024))
	{
		func_445(Local_18.f_1786.f_6, &(Local_18.f_1786.f_4), 0, 0, 0, 1084227584, 100, 0, 0);
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
	iVar0 = func_172(Local_18.f_1786.f_10);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		Local_18.f_1786.f_10 = func_444(1, 8);
		return -1;
	}
	if (MISC::GET_GAME_TIMER() < Local_18.f_1786.f_1)
	{
		return -1;
	}
	if (!func_355(128))
	{
		if (func_173(iVar0, "GENERIC_ANGRY_REACTION", -1323320425, Global_35, 0, 0, 0, 1))
		{
			func_440(128);
			Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 1500;
		}
		if (func_173(iVar0, "GENERIC_SHOCKED_DISBELIEF", -1323320425, Global_35, 0, 0, 0, 1))
		{
			func_440(128);
			Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 1500;
		}
		if (func_173(iVar0, "STOP_THAT", -1323320425, Global_35, 0, 0, 0, 1))
		{
			func_440(128);
			Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 1500;
		}
		if (func_173(iVar0, "STOP_THAT_ANNOYED", -1323320425, Global_35, 0, 0, 0, 1))
		{
			func_440(128);
			Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 1500;
		}
		if (func_173(iVar0, "CUT_THAT_OUT", -1323320425, Global_35, 0, 0, 0, 1))
		{
			func_440(128);
			Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 1500;
		}
		if (func_173(iVar0, "GENERIC_INTERRUPT", -1323320425, Global_35, 0, 0, 0, 1))
		{
			func_440(128);
			Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 1500;
		}
	}
	else if (!func_355(256))
	{
		if ((func_355(2) || func_355(8)) || func_355(32))
		{
			if (func_173(iVar0, "GREET_PLAYER_DEAD_BODY", -1323320425, Global_35, 0, 0, 0, 1))
			{
				func_440(256);
				return 2;
			}
			if (func_173(iVar0, "GREET_PLAYER_DEAD_BODY_INNOCENT", -1323320425, Global_35, 0, 0, 0, 1))
			{
				func_440(256);
				return 2;
			}
			if (func_173(iVar0, "GREET_PLAYER_DEAD_BODY_LONGTIME", -1323320425, Global_35, 0, 0, 0, 1))
			{
				func_440(256);
				return 2;
			}
		}
		if ((func_355(4) || func_355(16)) || func_355(64))
		{
			if (func_173(iVar0, "GREET_PLAYER_HOGTIED_BODY", -1323320425, Global_35, 0, 0, 0, 1))
			{
				func_440(256);
				return 2;
			}
			if (func_173(iVar0, "GREET_PLAYER_HOGTIED_BODY_INNOCENT", -1323320425, Global_35, 0, 0, 0, 1))
			{
				func_440(256);
				return 2;
			}
		}
		if (func_173(iVar0, "SHAME_ON_YOU", -1323320425, Global_35, 0, 0, 0, 1))
		{
			func_440(256);
			return 2;
		}
		if (func_173(iVar0, "KNOCKOUT_WARNING", -1323320425, Global_35, 0, 0, 0, 1))
		{
			func_440(256);
			return 2;
		}
	}
	return -1;
}

int func_96()
{
	bool bVar0;

	bVar0 = true;
	if ((func_355(8) || func_355(16)) || func_355(64))
	{
		bVar0 = func_445(Local_18.f_1786.f_5, &(Local_18.f_1786.f_3), 0, 0, 0, 1084227584, 100, 0, 0);
	}
	if (func_355(2048) || func_355(1024))
	{
		bVar0 = func_445(Local_18.f_1786.f_6, &(Local_18.f_1786.f_4), 0, 0, 0, 1084227584, 100, 0, 0);
	}
	if (bVar0)
	{
		if (func_446(3072))
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

	if (((func_355(2) || func_355(4)) || func_355(8)) || func_355(16))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		if (func_355(2) || func_355(4))
		{
			if (PED::_0xA911EE21EDF69DAF(Global_35))
			{
				TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(0, Local_18.f_1786.f_7, 0f, 0f, 0f, 1073741824, 1);
			}
			if (func_355(4))
			{
				if (PED::_0x3AA24CCC0D451379(Local_18.f_1786.f_7))
				{
					ENTITY::_0x18FF3110CF47115D(Local_18.f_1786.f_7, 1, 1);
					TASK::_TASK_CUT_FREE_HOGTIED_TARGET_PED(0, Local_18.f_1786.f_7);
				}
			}
		}
		if (func_355(8) || func_355(16))
		{
			func_445(Local_18.f_1786.f_5, &(Local_18.f_1786.f_3), 0, 0, 0, 1084227584, 100, 0, 0);
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
						if (func_355(16))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_18.f_1786.f_5, 0f, 3f, 0f), 1f, 20000, 0.25f, false, 40000f);
						}
						TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
					}
				}
			}
			if (func_355(16))
			{
				if (PED::_0x3AA24CCC0D451379(Local_18.f_1786.f_8))
				{
					ENTITY::_0x18FF3110CF47115D(Local_18.f_1786.f_8, 1, 1);
					TASK::_TASK_CUT_FREE_HOGTIED_TARGET_PED(0, Local_18.f_1786.f_8);
				}
			}
		}
		func_447(Global_35, &iVar0, 0, 0, 1, 1);
		Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 1500;
	}
	if (func_355(32) || func_355(64))
	{
		func_445(Local_18.f_1786.f_5, &(Local_18.f_1786.f_3), 0, 0, 0, 1084227584, 100, 0, 0);
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
	if (func_355(128) || func_355(256))
	{
		if (!func_355(512))
		{
			if (func_173(Global_35, "PLAYER_REACTION_CAUGHT_OUT", 1017772929, 0, 0, 0, 0, 1))
			{
				func_440(512);
			}
		}
	}
	if (func_355(2048) || func_355(1024))
	{
		func_445(Local_18.f_1786.f_6, &(Local_18.f_1786.f_4), 0, 0, 0, 1084227584, 100, 0, 0);
	}
	func_445(Local_18.f_1786.f_5, &(Local_18.f_1786.f_3), 0, 0, 0, 1084227584, 100, 0, 0);
	if ((((Local_18.f_1786.f_1 > MISC::GET_GAME_TIMER() || func_442(Global_35, -208384378)) || func_442(Global_35, -1619621311)) || func_442(Global_35, 724175444)) || func_442(Global_35, 242628503))
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
			TASK::TASK_SMART_FLEE_COORD(Local_18.f_1786.f_7, func_448(Local_18.f_45), 999f, -1, false, 1077936128);
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
			TASK::TASK_SMART_FLEE_COORD(Local_18.f_1786.f_8, func_448(Local_18.f_45), 999f, -1, false, 1077936128);
		}
		ENTITY::_0x18FF3110CF47115D(Local_18.f_1786.f_8, 0, 0);
		ENTITY::_0x18FF3110CF47115D(Local_18.f_1786.f_8, 2, 0);
		ENTITY::_0x18FF3110CF47115D(Local_18.f_1786.f_8, 3, 0);
	}
	if (func_355(2048) || func_355(1024))
	{
		return 4;
	}
	if (!func_355(1) && !func_38(64))
	{
		TASK::_0x816A3ACD265E2297(1361896662, 0);
		func_440(1);
	}
	if (!func_355(8192) && !func_38(32))
	{
		TASK::_0x816A3ACD265E2297(-2146271366, 0);
		func_440(8192);
	}
	return 5;
}

void func_99()
{
	int iVar0;

	func_445(Local_18.f_1786.f_6, &(Local_18.f_1786.f_4), 0, 0, 0, 1084227584, 100, 0, 0);
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
			if (func_355(16))
			{
				if (PED::_0x3AA24CCC0D451379(Local_18.f_1786.f_9))
				{
					ENTITY::_0x18FF3110CF47115D(Local_18.f_1786.f_9, 1, 1);
					TASK::_TASK_CUT_FREE_HOGTIED_TARGET_PED(0, Local_18.f_1786.f_9);
				}
			}
			func_447(Global_35, &iVar0, 0, 0, 1, 1);
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
	func_445(Local_18.f_1786.f_6, &(Local_18.f_1786.f_4), 0, 0, 0, 1084227584, 100, 0, 0);
	if (func_355(128) || func_355(256))
	{
		if (!func_355(512))
		{
			if (func_173(Global_35, "PLAYER_REACTION_CAUGHT_OUT", 1017772929, 0, 0, 0, 0, 1))
			{
				func_440(512);
			}
		}
	}
	if ((((Local_18.f_1786.f_1 > MISC::GET_GAME_TIMER() || func_442(Global_35, -208384378)) || func_442(Global_35, -1619621311)) || func_442(Global_35, 724175444)) || func_442(Global_35, 242628503))
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
			TASK::TASK_SMART_FLEE_COORD(Local_18.f_1786.f_9, func_448(Local_18.f_45), 999f, -1, false, 1077936128);
		}
		ENTITY::_0x18FF3110CF47115D(Local_18.f_1786.f_9, 0, 0);
		ENTITY::_0x18FF3110CF47115D(Local_18.f_1786.f_9, 2, 0);
		ENTITY::_0x18FF3110CF47115D(Local_18.f_1786.f_9, 3, 0);
	}
	if (!func_355(1) && !func_38(64))
	{
		TASK::_0x816A3ACD265E2297(1361896662, 0);
		func_440(1);
	}
	if (!func_355(8192) && !func_38(32))
	{
		TASK::_0x816A3ACD265E2297(-2146271366, 0);
		func_440(8192);
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
		if (func_355(2))
		{
			func_356(2);
			func_425(3, -1972216640, 0, "CAMP_DBODY_HON", 0, 0, 1065353216, 0);
			if (((((func_355(8) || func_355(16)) || func_355(32)) || func_355(64)) || func_355(2048)) || func_355(1024))
			{
				Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 2000;
				return -1;
			}
		}
		if (func_355(4))
		{
			func_356(4);
			func_425(3, -1972216640, 0, "CAMP_HOGT_HON", 0, 0, 1065353216, 0);
			if (((((func_355(8) || func_355(16)) || func_355(32)) || func_355(64)) || func_355(2048)) || func_355(1024))
			{
				Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 2000;
				return -1;
			}
		}
		if (func_355(8))
		{
			func_356(8);
			func_425(3, -1972216640, 0, "CAMP_DBODY_HON", 0, 0, 1065353216, 0);
			if (((func_355(32) || func_355(64)) || func_355(2048)) || func_355(1024))
			{
				Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 2000;
				return -1;
			}
		}
		if (func_355(16))
		{
			func_356(16);
			func_425(3, -1972216640, 0, "CAMP_HOGT_HON", 0, 0, 1065353216, 0);
			if (((func_355(32) || func_355(64)) || func_355(2048)) || func_355(1024))
			{
				Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 2000;
				return -1;
			}
		}
		if (func_355(2048))
		{
			func_356(2048);
			func_425(3, -1972216640, 0, "CAMP_DBODY_HON", 0, 0, 1065353216, 0);
			if (func_355(32) || func_355(64))
			{
				Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 2000;
				return -1;
			}
		}
		if (func_355(1024))
		{
			func_356(1024);
			func_425(3, -1972216640, 0, "CAMP_HOGT_HON", 0, 0, 1065353216, 0);
			if (func_355(32) || func_355(64))
			{
				Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 2000;
				return -1;
			}
		}
		if (func_355(32))
		{
			func_356(32);
			func_425(3, -1972216640, 0, "CAMP_DBODY_HON", 0, 0, 1065353216, 0);
		}
		if (func_355(64))
		{
			func_356(64);
			func_425(3, -1972216640, 0, "CAMP_HOGT_HON", 0, 0, 1065353216, 0);
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
	vVar0 = { func_449() };
	vVar0.f_2 = 0f;
	vVar0 = { vVar0 * Vector(20f, 20f, 20f) };
	vVar3 = { Global_36 - vVar0 };
	TASK::TASK_SMART_FLEE_COORD(Global_35, vVar3, 2000f, -1, 8388608, 1f);
}

int func_104()
{
	if (!func_450(Global_35, &(Global_1357549->f_3[4]), 1, 0))
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
	Local_18.f_1862.f_5 = func_451();
	if (Local_18.f_1862.f_4 != -1)
	{
		func_452(Local_18.f_1862.f_4, 256);
	}
	Local_18.f_1862.f_4 = -1;
}

int func_106()
{
	vector3 vVar0;
	var uVar3;

	if (func_38(1))
	{
		if (func_126(0, 0, 1))
		{
			return -1;
		}
		else
		{
			func_50(1);
		}
	}
	if ((func_127(&Global_1935630, 16384) || func_130(func_129(func_128()), 256)) || STREAMING::_0x99F92061EFE908BA())
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
		if (func_453(func_141(), &vVar0, &uVar3) && BUILTIN::VDIST2(vVar0, Global_36) < 4f)
		{
			return -1;
		}
		Local_18.f_1862.f_5 = PED::GET_MOUNT(Global_35);
		func_454(1);
	}
	if (TASK::_0xEFC4303DDC6E60D3(Global_35))
	{
		Local_18.f_1862.f_5 = TASK::_0xED1F514AF4732258(Global_35);
		func_454(2);
	}
	if (!func_455(1) && !func_455(2))
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
	Local_18.f_1862.f_3 = func_444(1, 8);
	Local_18.f_1862.f_1 = MISC::GET_GAME_TIMER() + 1500;
}

int func_108()
{
	int iVar0;

	PAD::DISABLE_CONTROL_ACTION(0, -1453452184, false);
	if (func_38(1))
	{
		if (func_126(0, 0, 1))
		{
			return 0;
		}
	}
	if (func_127(&Global_1935630, 16384) || STREAMING::_0x99F92061EFE908BA())
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
	if (func_455(1))
	{
		if (!PED::IS_PED_ON_MOUNT(Global_35))
		{
			return 3;
		}
	}
	if (func_455(2))
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
	iVar0 = func_172(Local_18.f_1862.f_3);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		Local_18.f_1862.f_3 = func_444(1, 8);
		return -1;
	}
	if (!func_455(4))
	{
		if (func_173(iVar0, "RIDING_HORSE_IN_CAMP", -1323320425, Global_35, 0, 0, 0, 1))
		{
			func_454(4);
			return 2;
		}
		if (func_173(iVar0, "SHAME_ON_YOU", -1323320425, Global_35, 0, 0, 0, 1))
		{
			func_454(4);
			return 2;
		}
		if (func_173(iVar0, "SHAME_ON_YOU_DOWN", -1323320425, Global_35, 0, 0, 0, 1))
		{
			func_454(4);
			return 2;
		}
		if (func_173(iVar0, "PLAYER_ACTING_WEIRD", -1323320425, Global_35, 0, 0, 0, 1))
		{
			func_454(4);
			return 2;
		}
		if (func_173(iVar0, "PLAYER_ACTING_WEIRD_DOWN", -1323320425, Global_35, 0, 0, 0, 1))
		{
			func_454(4);
			return 2;
		}
	}
	return -1;
}

void func_109()
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, 0, 0);
	if (!func_457(func_456(44)) && func_141() != 0)
	{
		func_202(533, 0);
	}
	Local_18.f_1862.f_4 = func_458(Local_18.f_1862.f_5);
	if (Local_18.f_1862.f_4 != -1)
	{
		func_459(Local_18.f_1862.f_4, 256);
	}
	Local_18.f_1862.f_1 = MISC::GET_GAME_TIMER();
	if (func_141() != 0)
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
	if (func_127(&Global_1935630, 16384) || STREAMING::_0x99F92061EFE908BA())
	{
		return 0;
	}
	if (!func_455(4))
	{
		if (func_38(1))
		{
			if (func_126(0, 0, 1))
			{
				return 0;
			}
		}
		if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, &(Global_1357549->f_3[0]), false, 0))
		{
			return 0;
		}
	}
	if (func_455(1))
	{
		if (!PED::IS_PED_ON_MOUNT(Global_35))
		{
			PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 3000, 0f, true, false);
			return 3;
		}
	}
	if (func_455(2))
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
	func_445(Local_18.f_1862.f_5, &(Local_18.f_1862.f_2), 32, 0, 0, 1084227584, 100, 0, 0);
	if (MISC::GET_GAME_TIMER() < Local_18.f_1862.f_1)
	{
		return -1;
	}
	if (func_455(4))
	{
		if (!func_455(8))
		{
			if (func_173(Global_35, "DEFUSE_ARGUMENT_TOUGH", 1017772929, 0, 0, 0, 0, 1))
			{
				func_454(8);
				Local_18.f_1862.f_1 = MISC::GET_GAME_TIMER() + 1000;
				return -1;
			}
		}
	}
	if (func_455(1))
	{
		if (!func_442(Global_35, 501393341))
		{
			TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
		}
	}
	if (func_455(2))
	{
		if (!func_455(64))
		{
			TASK::_0xED27560703F37258(Global_35);
			func_454(64);
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
	if (func_455(1) && !func_455(32))
	{
		if (func_460(Global_35, Local_18.f_1862.f_5, 1, 1) > 2f || MISC::GET_GAME_TIMER() > Local_18.f_1862.f_1)
		{
			Local_18.f_1862.f_1 = MISC::GET_GAME_TIMER() + 10000;
			func_461(1);
		}
		else
		{
			return -1;
		}
	}
	ENTITY::_0xC3ABCFBC7D74AFA5(Local_18.f_1862.f_5, 6, 1);
	if (func_38(1))
	{
		if (func_126(0, 0, 1))
		{
			return 0;
		}
	}
	if (func_127(&Global_1935630, 16384) || STREAMING::_0x99F92061EFE908BA())
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_18.f_1862.f_5) || ENTITY::IS_ENTITY_DEAD(Local_18.f_1862.f_5))
	{
		return 0;
	}
	PED::SET_PED_RESET_FLAG(Global_35, 184, true);
	if (!func_455(16))
	{
		if (func_173(Global_35, "SPURS_HORSE", 1017772929, 0, 0, 0, 0, 1))
		{
			func_454(16);
		}
	}
	if (MISC::GET_GAME_TIMER() > Local_18.f_1862.f_1)
	{
		return 0;
	}
	if (!TASK::_0x841475AC96E794D1(Local_18.f_1862.f_6))
	{
		Local_18.f_1862.f_6 = func_462();
	}
	if (TASK::_0x841475AC96E794D1(Local_18.f_1862.f_6))
	{
		if (!func_455(32))
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_18.f_1862.f_5, TASK::_0xA8452DD321607029(Local_18.f_1862.f_6, 1), 1.5f, 35000, 0.25f, false, 40000f);
			func_454(32);
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
	func_463();
}

int func_116()
{
	if (func_464())
	{
		if (ENTITY::GET_ENTITY_SPEED(Global_35) > 0.5f)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 203, true);
		}
	}
	if (!func_465())
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
	else if (func_466(Local_18.f_1934.f_66))
	{
		Local_18.f_1934.f_83 = 1;
	}
	else if (func_467(Global_35))
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

	if (!func_465())
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
	if (func_464())
	{
		if (ENTITY::GET_ENTITY_SPEED(Global_35) > 0.5f)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 203, true);
		}
	}
	if (!func_468(Global_35))
	{
		return -1;
	}
	if (func_442(Global_35, -208384378))
	{
		return -1;
	}
	PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	fVar0 = BUILTIN::VDIST2(Global_36, func_469(Local_18.f_1934.f_84, Local_18.f_1934.f_67.f_6, Local_18.f_1934.f_67));
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
	func_175(&(Local_18.f_1934.f_80), 1);
}

int func_120()
{
	PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("CamTransitionBlinkSlow") && GRAPHICS::_0xFBF161FCFEC8589E("CamTransitionBlinkSlow", 2, 0, &(Local_18.f_1934.f_79)))
	{
		ENTITY::_0x203BEFFDBE12E96A(PLAYER::PLAYER_PED_ID(), func_469(Local_18.f_1934.f_84, Local_18.f_1934.f_67.f_6, Local_18.f_1934.f_67), func_470(Local_18.f_1934.f_84, Local_18.f_1934.f_67.f_9, Local_18.f_1934.f_67.f_3), 1, 1, 0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(func_470(Local_18.f_1934.f_84, Local_18.f_1934.f_67.f_10, Local_18.f_1934.f_67.f_4), 1065353216);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(func_470(Local_18.f_1934.f_84, Local_18.f_1934.f_67.f_11, Local_18.f_1934.f_67.f_5), 1f);
		TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, Local_18.f_1934.f_66, 0f, 0f, 0f, 1073741824, 33);
		return 4;
	}
	if (func_168(&(Local_18.f_1934.f_80)) && func_471(&(Local_18.f_1934.f_80)) > 5000)
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
	func_175(&(Local_18.f_1934.f_80), 1);
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
				vVar7 = { func_469(Local_18.f_1934.f_84, Local_18.f_1934.f_67.f_6, Local_18.f_1934.f_67) };
				fVar10 = func_470(Local_18.f_1934.f_84, Local_18.f_1934.f_67.f_9, Local_18.f_1934.f_67.f_3);
				vVar11 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar7, fVar10, 0f, 0.75f, 0f) };
				vVar11.f_2 = fVar0;
				ENTITY::SET_ENTITY_COORDS(Local_18.f_1934.f_66, vVar11, true, false, true, true);
				ENTITY::_0x9587913B9E772D29(Local_18.f_1934.f_66, 0);
			}
		}
		if (!func_468(PLAYER::PLAYER_PED_ID()))
		{
			if (Local_18.f_1934.f_83 && func_276(Local_18.f_45))
			{
				func_202(615, 1);
			}
			else if (Local_18.f_45 == 8 || Local_18.f_45 == 7)
			{
				func_202(617, 1);
			}
			else
			{
				func_202(616, 1);
			}
			Local_18.f_1934.f_83 = 0;
			Local_18.f_1934.f_84 = 0;
			TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
			return 0;
		}
	}
	if (func_168(&(Local_18.f_1934.f_80)) && func_471(&(Local_18.f_1934.f_80)) > 5000)
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

int func_126(int iParam0, bool bParam1, int iParam2)
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
		if (func_472())
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
		iVar0 = func_473(&(Global_1898164->f_1[0 /*5*/]));
		if (func_474(iVar0) && func_475(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_476(&(Global_1898164->f_1[0 /*5*/])))
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

bool func_127(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_128()
{
	return Global_1894899->f_2;
}

int func_129(int iParam0)
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

bool func_130(int iParam0, int iParam1)
{
	if (!func_477(iParam0))
	{
		return false;
	}
	return (Global_40.f_9384[iParam0 /*2*/] && iParam1) != 0;
}

int func_131(int iParam0)
{
	if (!func_478(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(((*Global_1360165)[iParam0 /*1157*/])->f_70))
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_70 = 0;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_70;
}

int func_132(int iParam0, int iParam1)
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
	if (func_442(iParam0, 713668775))
	{
		return 0;
	}
	if (((func_442(iParam0, -76381094) || func_442(iParam0, -1098463898)) || func_442(iParam0, 993674639)) || TASK::GET_IS_TASK_ACTIVE(iParam0, 7))
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
	if (iParam1 != -1 && func_479(iParam1))
	{
		return 0;
	}
	return 1;
}

void func_133(int iParam0)
{
	int iVar0;

	iVar0 = func_462();
	if (!TASK::_0x841475AC96E794D1(iVar0))
	{
		return;
	}
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, TASK::_0xA8452DD321607029(iVar0, 1), 1.5f, 20000, 0.25f, false, 40000f);
}

bool func_134()
{
	return Global_1949598->f_1;
}

bool func_135()
{
	return func_480();
}

void func_136(bool bParam0)
{
	if (bParam0 == func_135())
	{
		return;
	}
	if (bParam0)
	{
		func_146(81053684);
		if (!func_482(func_481(0)))
		{
			func_146(-525676072);
		}
	}
	else
	{
		func_145(81053684);
		func_145(-525676072);
	}
	Global_1946804->f_2792 = bParam0;
}

void func_137(int iParam0)
{
	switch (func_56())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 - (Global_1357549->f_1494 && iParam0));
			break;
	}
}

int func_138(var uParam0)
{
	if (-1829635046 == func_483(81053684))
	{
		if (func_484(uParam0))
		{
			return 1;
		}
	}
	else if (func_485(-525676072, uParam0))
	{
		if (func_484(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_139()
{
	int iVar0;

	if (!func_480())
	{
		return 0;
	}
	if (!func_484(&iVar0))
	{
		return 0;
	}
	if (!func_486(iVar0))
	{
		return 0;
	}
	return func_487(iVar0, 0);
}

void func_140(int iParam0)
{
	switch (func_56())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 || iParam0);
			break;
	}
}

int func_141()
{
	return Global_40.f_4283;
}

int func_142()
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

bool func_143(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_488(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
	}
	return (UNLOCK::_UNLOCK_IS_UNLOCKED(((*Global_1835011)[iParam0 /*74*/])->f_2) && !UNLOCK::_UNLOCK_IS_VISIBLE(((*Global_1835011)[iParam0 /*74*/])->f_2));
}

bool func_144(int iParam0)
{
	return func_490(func_489(iParam0));
}

void func_145(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_491(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_492(iVar1) == iParam0)
		{
			INVENTORY::_0x766315A564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_493(func_489(iParam0), 6);
}

void func_146(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_491(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_492(iVar1) == iParam0)
		{
			INVENTORY::_0x6A564540FAC12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_494(func_489(iParam0), 6);
}

void func_147()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	bVar0 = func_38(16);
	bVar1 = Global_1357549->f_1485 > BUILTIN::TO_FLOAT(5400);
	bVar2 = func_12(32768);
	if ((!bVar0 && bVar2) && bVar1)
	{
		func_160(16);
		func_425(2, -549508280, 0, 0, 0, 0, 1065353216, 0);
	}
	if (bVar0 && !bVar2)
	{
		func_50(16);
		Global_1357549->f_1485 = 0f;
	}
}

void func_148(float fParam0, float fParam1, float fParam2)
{
	struct<16> Var0;

	Var0 = { func_495(fParam0, fParam1, fParam2) };
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1357549->f_1886.f_1, &Var0);
}

int func_149()
{
	return Global_40.f_4283.f_324;
}

void func_150(int iParam0)
{
	int iVar0;
	int iVar1;

	func_496(iParam0, &iVar0, &iVar1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1357549->f_1886.f_2, iVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1357549->f_1886.f_2.f_1, iVar1);
}

void func_151(int iParam0)
{
	int iVar0;
	int iVar1;

	func_496(iParam0, &iVar0, &iVar1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1357549->f_1886.f_4, iVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1357549->f_1886.f_4.f_1, iVar1);
}

int func_152(int iParam0)
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

void func_153(var uParam0)
{
	func_497(uParam0, &(Global_1357549->f_3[2]), &(Global_1357549->f_3[3]), 0);
	func_498(&(Global_1357549->f_3[2]));
	if (((!func_12(64) && !func_335(4)) && !func_127(&Global_1935630, 4194304)) && VOLUME::_0xF256A75210C5C0EB(&(Global_1357549->f_3[2]), Global_36))
	{
		func_158(0);
	}
	if (uParam0->f_49)
	{
		func_499(uParam0);
	}
	else
	{
		func_500(uParam0);
	}
}

void func_154(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (VOLUME::_0x92A78D0BEDB332A3(iParam0) && VOLUME::_0xF256A75210C5C0EB(iParam0, Global_36))
	{
		if (!func_12(1073741824))
		{
			func_140(1073741824);
		}
	}
	else if (func_12(1073741824))
	{
		func_137(1073741824);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(iParam1) && VOLUME::_0xF256A75210C5C0EB(iParam1, Global_36))
	{
		if (!func_12(32768))
		{
			func_140(32768);
		}
	}
	else if (func_12(32768))
	{
		func_137(32768);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(iParam2) && VOLUME::_0xF256A75210C5C0EB(iParam2, Global_36))
	{
		if (!func_38(512))
		{
			func_160(512);
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
			func_160(1024);
		}
	}
	else if (func_38(1024))
	{
		func_50(1024);
	}
}

void func_155(int iParam0)
{
	int iVar0;
	int iVar1[2];
	int iVar4;

	iVar1[0] = 0;
	iVar1[1] = 1;
	iVar4 = 0;
	while (iVar4 < iVar1)
	{
		iVar0 = func_357(&(iVar1[iVar4]));
		if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && VOLUME::_0x92A78D0BEDB332A3(iParam0)) && VOLUME::_0xF256A75210C5C0EB(iParam0, ENTITY::GET_ENTITY_COORDS(iVar0, true, false)))
		{
			func_501(&(iVar1[iVar4]), 1);
		}
		else
		{
			func_501(&(iVar1[iVar4]), 0);
		}
		iVar4++;
	}
}

void func_156(var uParam0)
{
	if (!func_38(33554432))
	{
		if (func_38(1024))
		{
			func_160(33554432);
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

void func_157()
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;
	int iVar6;

	if (((MISC::GET_FRAME_COUNT() % 15) != 0 || func_502(4)) || func_159())
	{
		return;
	}
	iVar0 = func_141();
	vVar1 = { func_448(iVar0) };
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

void func_158(bool bParam0)
{
	func_321(bParam0);
	func_322(!bParam0);
}

bool func_159()
{
	return Global_1898164->f_163;
}

void func_160(int iParam0)
{
	switch (func_56())
	{
		case -1:
			Global_1357549->f_1495 = (Global_1357549->f_1495 || iParam0);
			break;
	}
}

bool func_161(int iParam0, vector3 vParam1)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return false;
	}
	return VOLUME::_0xF256A75210C5C0EB(iParam0, vParam1);
}

bool func_162()
{
	return func_364(10, 0) >= 3;
}

void func_163(int iParam0, int iParam1)
{
	if (!func_477(iParam0))
	{
		return;
	}
	Global_40.f_9384[iParam0 /*2*/] = (Global_40.f_9384[iParam0 /*2*/] || iParam1);
}

void func_164(int iParam0, int iParam1)
{
	if (!func_477(iParam0))
	{
		return;
	}
	Global_40.f_9384[iParam0 /*2*/] = (&Global_40.f_9384[iParam0 /*2*/] - (Global_40.f_9384[iParam0 /*2*/] && iParam1));
}

int func_165(int iParam0)
{
	switch (func_141())
	{
		case 2:
			return func_503(iParam0);
		case 1:
			return func_504(iParam0);
		case 6:
			return func_505(iParam0);
		case 3:
			return func_506(iParam0);
	}
	return 0;
}

int func_166(int iParam0)
{
	if (func_507())
	{
		return 0;
	}
	if (AUDIO::_0x54B187F111D9C6F8(Global_35, 0))
	{
		return 0;
	}
	if (func_324(func_172(&(Global_1357549->f_1659[iParam0])), 0))
	{
		if (PED::_0x9337183FDA2E9035(func_172(&(Global_1357549->f_1659[iParam0])), PLAYER::PLAYER_ID()) || PED::_0xA454D234E45BB6E5(func_172(&(Global_1357549->f_1659[iParam0])), PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	if (func_174())
	{
		return 0;
	}
	return 1;
}

int func_167(int iParam0)
{
	int iVar0;

	iVar0 = func_172(&(Global_1357549->f_1659[iParam0]));
	if (func_324(iVar0, 0) && func_170(&(Global_1357549->f_1659[iParam0]), 1, 1))
	{
		if (VOLUME::_0x92A78D0BEDB332A3(&(Global_1357549->f_1663[iParam0])))
		{
			if (func_450(Global_35, &(Global_1357549->f_1663[iParam0]), 1, 0) && func_450(iVar0, &(Global_1357549->f_1663[iParam0]), 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_168(var uParam0)
{
	return func_508(*uParam0, 1);
}

float func_169(var uParam0)
{
	if (!func_168(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_509(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_510() - uParam0->f_1);
}

int func_170(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_511(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		return func_512(iParam0, 26, 1);
	}
	if (bParam2)
	{
		if (!func_324(func_172(iParam0), 0))
		{
			return 0;
		}
	}
	if (!func_513(iParam0, 1, 0))
	{
		return 0;
	}
	if (func_512(iParam0, 44, 1))
	{
		return 0;
	}
	return 1;
}

int func_171(int iParam0, int iParam1)
{
	if (!func_511(iParam0))
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

int func_172(int iParam0)
{
	if (!func_511(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		(*Global_1360165)[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

bool func_173(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	return func_514(iParam0, &Var0);
}

int func_174()
{
	int iVar0;

	iVar0 = TASK::_0xD04241BBF6D03A5E(Global_35);
	if (TASK::_0x841475AC96E794D1(iVar0))
	{
		return 1;
	}
	return 0;
}

void func_175(var uParam0, int iParam1)
{
	if (iParam1 || !func_168(uParam0))
	{
		func_182(uParam0);
	}
}

void func_176(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_177(int iParam0)
{
	if (!func_478(iParam0))
	{
		return false;
	}
	if (!func_337(iParam0))
	{
		return false;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

char* func_178(int iParam0)
{
	char* sVar0;

	sVar0 = "";
	if (func_141() == 3)
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

int func_179(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	int iVar5;

	if (!func_478(iParam0))
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
			if (func_512(iParam0, 2, 1))
			{
				func_410(iParam0, 2, 1);
			}
			if (func_396(iParam0, 16, 1))
			{
				if ((*Global_1360165)[iParam0 /*1157*/])->f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD()
				{
					if (bParam14)
					{
						func_515(iParam0, 29, 1);
						return 0;
					}
					if (SCRIPTS::IS_THREAD_ACTIVE(((*Global_1360165)[iParam0 /*1157*/])->f_129, false))
					{
					}
					else
					{
						func_181(iParam0, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (func_324(Global_1360165[iParam0 /*1157*/], 0))
				{
					return Global_1360165[iParam0 /*1157*/];
				}
			}
			if (func_324(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_1360165[iParam0 /*1157*/]))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(Global_1360165[iParam0 /*1157*/]))
				{
					if (bParam1)
					{
						func_516(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				func_515(iParam0, 44, 1);
				((*Global_1360165)[iParam0 /*1157*/])->f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				func_517(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_515(iParam0, 44, 1);
				((*Global_1360165)[iParam0 /*1157*/])->f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				func_517(iParam0, 1);
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
			if (!func_512(iParam0, 44, 0))
			{
				func_515(iParam0, 44, 0);
			}
			if (func_518(iParam0, vVar0, iParam13, 0, 1, bParam17, bParam20, -1, 1, 0))
			{
				func_517(iParam0, 2);
			}
			break;
		case 2:
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 171, true);
			if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1360165[iParam0 /*1157*/]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
			}
			func_410(iParam0, 18, 1);
			ENTITY::SET_ENTITY_VISIBLE(Global_1360165[iParam0 /*1157*/], true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], 1030835986);
			POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/], 0);
			_NAMESPACE48::_0x6759BEE6762E140B(((*Global_1360165)[iParam0 /*1157*/])->f_1);
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 130, false);
			func_519(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				func_520(iParam0, 0, 0, 1);
			}
			func_410(iParam0, 33, 1);
			func_410(iParam0, 34, 1);
			func_410(iParam0, 29, 1);
			if (!func_206(vVar0) && iParam7)
			{
				func_517(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				func_517(iParam0, 4);
			}
			else
			{
				func_517(iParam0, 5);
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
						func_516(iParam0, 1, "Teleporting a stolen companion using a scenario.");
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
				func_521(Global_1360165[iParam0 /*1157*/], vVar0, fParam6, 2, 1073741824);
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
				func_517(iParam0, 4);
			}
			else
			{
				func_517(iParam0, 5);
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
				if (func_522(iParam0, iParam13))
				{
					if (PED::_0xA0BC8FAED8CFEB3C(Global_1360165[iParam0 /*1157*/]))
					{
						func_523(iParam0, iParam13, 0);
						func_524(iParam0, Global_1360165[iParam0 /*1157*/], iParam13, 1);
						if (func_512(iParam0, 25, 0))
						{
							func_410(iParam0, 25, 0);
						}
						func_515(iParam0, 66, 0);
						func_517(iParam0, 5);
						((*Global_1360165)[iParam0 /*1157*/])->f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_517(iParam0, 5);
				}
				func_515(iParam0, 28, 1);
			}
			else
			{
				func_517(iParam0, 5);
			}
			break;
		case 5:
			if (PED::_0xA0BC8FAED8CFEB3C(Global_1360165[iParam0 /*1157*/]))
			{
				func_517(iParam0, 6);
			}
			break;
		case 6:
			if (func_324(Global_1360165[iParam0 /*1157*/], 0))
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
					func_525(iParam0);
				}
				if (bParam21)
				{
					TASK::CLEAR_PED_SECONDARY_TASK(Global_1360165[iParam0 /*1157*/]);
					func_526(Global_1360165[iParam0 /*1157*/], 1);
				}
			}
			func_517(iParam0, 7);
		case 7:
			func_519(iParam0, bParam9, bParam15, 0);
			func_527(iParam0, 4, bParam11);
			func_528(iParam0);
			if (bParam20)
			{
				if (func_529(Global_1360165[iParam0 /*1157*/]))
				{
				}
			}
			func_530(iParam0, Global_1360165[iParam0 /*1157*/]);
			if (!bParam23 && !PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true))
			{
				PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true);
			}
			(Global_40.f_4942[iParam0 /*60*/])->f_4 = (Global_40.f_4942[iParam0 /*60*/])->f_3;
			func_517(iParam0, 0);
			func_531(iParam0, 16, 1);
			func_410(iParam0, 44, 1);
			((*Global_1360165)[iParam0 /*1157*/])->f_1156 = 0;
			((*Global_1360165)[iParam0 /*1157*/])->f_129 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			return Global_1360165[iParam0 /*1157*/];
	}
	return 0;
}

void func_180(int iParam0)
{
	func_532(iParam0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Global_1357549->f_1669, "ARTHUR", Global_35, 0);
	if (iParam0 == 0)
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_172(0), 0, 1);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Global_1357549->f_1669, "DUTCH", func_172(0), 0);
	}
	else
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_172(1), 0, 1);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Global_1357549->f_1669, "JOHN", func_172(1), 0);
	}
	func_533(iParam0);
}

void func_181(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	if (!func_478(iParam0))
	{
		return;
	}
	if (func_337(iParam0))
	{
		if (((*Global_1360165)[iParam0 /*1157*/])->f_129 != 0 && ((*Global_1360165)[iParam0 /*1157*/])->f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_515(iParam0, 56, 1);
		func_175(&(Global_1359489->f_40), 1);
	}
	func_534(iParam0, 0);
	func_527(iParam0, 4, 0);
	func_535(iParam0);
	func_528(iParam0);
	func_410(iParam0, 37, 1);
	bVar0 = func_324(Global_1360165[iParam0 /*1157*/], 0);
	iVar1 = func_536(iParam0, 0);
	bVar2 = _NAMESPACE48::_0x800DF3FC913355F3(iVar1);
	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, false);
	}
	if (func_512(iParam0, 64, 1))
	{
		func_410(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_410(iParam0, 33, 1);
		func_410(iParam0, 34, 1);
		func_537(iParam0, 1056964608, -1, 1061158912);
		func_519(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_515(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_515(iParam0, 35, 1);
			if (bParam8)
			{
				func_515(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_538(iParam0, 0);
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
		func_410(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
		}
		func_515(iParam0, 33, 1);
		func_519(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_133 = fParam4;
			func_175(&(((*Global_1360165)[iParam0 /*1157*/])->f_130), 1);
		}
		else
		{
			func_176(&(((*Global_1360165)[iParam0 /*1157*/])->f_130));
		}
		if (bParam9)
		{
			func_515(iParam0, 34, 1);
		}
	}
	if (iParam1 || bParam2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		{
			func_539(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], false);
	}
	if (func_512(iParam0, 45, 1))
	{
		func_410(iParam0, 45, 1);
	}
	func_540(iParam0, 16, 1);
	func_410(iParam0, 44, 1);
	((*Global_1360165)[iParam0 /*1157*/])->f_129 = 0;
	(Global_40.f_4942[iParam0 /*60*/])->f_4 = 0;
	if (bParam5)
	{
		if (func_324(func_131(iParam0), 0))
		{
			func_541(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

void func_182(var uParam0)
{
	func_542(uParam0, 0f);
}

void func_183(int iParam0)
{
	if (func_141() == 3 && iParam0 == 0)
	{
		OBJECT::_0x1BC47A9DEDC8DF5D(58833085, 0);
		OBJECT::_0x1BC47A9DEDC8DF5D(-629053815, 0);
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(58833085);
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(-629053815);
	}
	if (func_141() == 3 && iParam0 == 1)
	{
		OBJECT::_0x1BC47A9DEDC8DF5D(1163459288, 0);
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(1163459288);
	}
}

void func_184()
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

void func_185()
{
	int iVar0;

	iVar0 = Global_1357549->f_573;
	if (iVar0 >= 0 && iVar0 < 40)
	{
		if (func_141() == &Global_1357549->f_12[iVar0 /*14*/])
		{
			if ((Global_1357549->f_12[iVar0 /*14*/])->f_7 == 0)
			{
				if (STREAMING::_IS_IMAP_ACTIVE((Global_1357549->f_12[iVar0 /*14*/])->f_1) && func_543() == 0)
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
				func_544(iVar0);
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

bool func_186(int iParam0)
{
	return (Global_1359489->f_16 && iParam0) != 0;
}

void func_187(int iParam0)
{
	Global_1359489->f_16 = (Global_1359489->f_16 || iParam0);
}

int func_188()
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

void func_189(int iParam0)
{
	Global_1359489->f_16 = (Global_1359489->f_16 - (Global_1359489->f_16 && iParam0));
}

int func_190()
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
	if (func_134())
	{
		return 0;
	}
	if (func_38(1048576))
	{
		return 0;
	}
	return 1;
}

void func_191()
{
	char* sVar0;
	struct<16> Var1;

	sVar0 = func_545(func_141());
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return;
	}
	Var1 = { func_495(Local_18.f_3054, Local_18.f_3055, Global_1357549->f_1900) };
	func_547(sVar0, MISC::_CREATE_VAR_STRING(10, "CAMP_INFO_SUPPLIES", func_546(&Var1, 109029619)), 4000, 0, 0, 0, 0, 1);
}

void func_192()
{
	char* sVar0;
	int iVar1;
	char* sVar2;

	sVar0 = func_545(func_141());
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return;
	}
	iVar1 = func_149();
	sVar2 = MISC::_0x2B6846401D68E563((BUILTIN::TO_FLOAT(iVar1) * 0.01f), 2);
	func_547(sVar0, MISC::_CREATE_VAR_STRING(10, "CAMP_INFO_FUNDS", func_546(sVar2, 109029619)), 4000, 0, 0, 0, 0, 1);
}

void func_193()
{
	func_50(4096);
	func_50(8192);
}

void func_194(int iParam0)
{
	int iVar1;

	if (*iParam0 == -15)
	{
		*iParam0 = func_548();
	}
	if (func_549())
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(18, 27);
	}
	else
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(7, 21);
	}
	func_550(iParam0, 0, 0, iVar1, 0, 0, 0, 0);
}

bool func_195(int iParam0)
{
	return iParam0 != -15;
}

bool func_196(int iParam0)
{
	return &Global_1899515 > iParam0;
}

void func_197(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	if (!func_551(uParam0, uParam1))
	{
		return;
	}
	iVar1 = 0;
	bVar2 = false;
	while (!bVar2 && iVar1 < 20)
	{
		iVar1++;
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
		if (func_552(iVar0) && func_553((*uParam0)[iVar0 /*257*/], (*uParam1)[iVar0]))
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

bool func_198(int iParam0)
{
	return func_554(Global_35, iParam0);
}

int func_199()
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

bool func_200(int iParam0)
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

bool func_201(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_555(iParam0, &iVar0, &iVar1);
	iVar2 = Global_1905944[iVar0];
	return MISC::IS_BIT_SET(iVar2, iVar1);
}

void func_202(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_555(iParam0, &iVar0, &iVar1);
	if (!func_556(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_557(iVar0, iVar1);
}

int func_203()
{
	return func_12(1073741824);
}

bool func_204(int iParam0)
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

void func_205(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 && !func_204(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_558(*uParam0);
	if (((*Global_1945938)[iVar0 /*18*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && iParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_559(iVar0);
	*uParam0 = 0;
}

int func_206(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

char* func_207()
{
	return "INSPECT";
}

int func_208(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13)
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
		if (func_560(iVar0, 2))
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
		func_561(iVar1, iParam1, sParam0, 2, iParam3, iParam4, 0f, 0f, 0f, 0f, iParam2, 0, 1, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, 1065353216, 0, 0, 0, iParam12, bParam13);
		return iVar1;
	}
	return 0;
}

void func_209(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam3 && !func_204(iParam0))
	{
		return;
	}
	iVar0 = func_558(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam1, iParam2);
}

void func_210(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam3 && !func_204(iParam0))
	{
		return;
	}
	iVar0 = func_558(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_GROUP(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam1, iParam2);
}

bool func_211(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_204(iParam0))
	{
		return false;
	}
	iVar0 = func_558(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

bool func_212(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_204(iParam0))
	{
		return false;
	}
	iVar0 = func_558(iParam0);
	if (HUD::_0xCD072523791DDC1B(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

int func_213(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

void func_214(int iParam0)
{
	if (!func_204((Local_18.f_3057[iParam0 /*21*/])->f_1))
	{
		(Local_18.f_3057[iParam0 /*21*/])->f_1 = func_562(func_207(), -1384133541, 1710877787, 0);
		func_210((Local_18.f_3057[iParam0 /*21*/])->f_1, 799218720, 0, 1);
	}
}

int func_215(int iParam0)
{
	bool bVar0;
	var uVar1;
	int iVar2;
	int iVar3;

	bVar0 = func_563((Local_18.f_3057[iParam0 /*21*/])->f_1, 1, 1);
	uVar1 = func_563((Local_18.f_3057[iParam0 /*21*/])->f_1, 0, 1);
	if (bVar0 || uVar1)
	{
		func_205(&((Local_18.f_3057[iParam0 /*21*/])->f_1), 1, 1);
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
				func_564(iParam0, iVar2);
				return 1;
			}
			iVar3++;
		}
	}
	return 0;
}

void func_216(int iParam0)
{
	if (!func_204((Local_18.f_3057[iParam0 /*21*/])->f_2))
	{
		(Local_18.f_3057[iParam0 /*21*/])->f_2 = func_566(func_565(), 359624985, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
		func_210((Local_18.f_3057[iParam0 /*21*/])->f_2, 799218720, 0, 1);
	}
}

bool func_217(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_204(iParam0))
	{
		return false;
	}
	iVar0 = func_558(iParam0);
	return HUD::_UIPROMPT_IS_JUST_PRESSED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_218(var uParam0)
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
		if (func_204(uParam0->f_2))
		{
			func_205(&(uParam0->f_2), 1, 1);
		}
		if (func_204(uParam0->f_1))
		{
			func_205(&(uParam0->f_1), 1, 1);
		}
		if (func_204(*uParam0))
		{
			func_205(uParam0, 1, 1);
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

int func_219(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iParam0, true);
	}
	return 0;
}

int func_220(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if ((((iParam0 == func_357(0) || iParam0 == func_357(1)) || iParam0 == func_357(2)) || iParam0 == func_357(3)) || iParam0 == func_357(4))
	{
		return 0;
	}
	if (func_567() < 1)
	{
		return 0;
	}
	return 1;
}

bool func_221(int iParam0)
{
	return func_554(iParam0, 2);
}

int func_222(int iParam0)
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

void func_223()
{
	struct<7> Var0;

	Global_40.f_4283.f_567 = { Var0 };
	func_568();
	Global_1357549->f_1897 = 0;
}

void func_224(int iParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_1357549->f_1897 = iParam0;
	}
	Global_40.f_4283.f_567 = 1;
	Global_40.f_4283.f_567.f_1 = uParam1;
	Global_40.f_4283.f_567.f_2 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	Global_40.f_4283.f_567.f_5 = ENTITY::GET_ENTITY_HEADING(iParam0);
	Global_40.f_4283.f_567.f_6 = func_569(iParam0);
	func_570(iParam0);
}

int func_225(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;

	if (func_206(vParam0))
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
			if (!func_206(vVar7))
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

float func_226(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

int func_227(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		return func_571(iParam0);
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

bool func_228()
{
	return &Global_1935436 == 2;
}

void func_229()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1327590->f_19547)
	{
		if (&Global_1327590->f_19547[iVar0 /*5*/] != -1)
		{
			if ((Global_1327590->f_19547[iVar0 /*5*/])->f_1 < 5)
			{
				func_572(iVar0);
			}
		}
		iVar0++;
	}
}

void func_230()
{
	if (!Global_1935436->f_18.f_1)
	{
		Global_1935436->f_18.f_1 = 1;
	}
}

int func_231(int iParam0)
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

bool func_232(int iParam0, int iParam1)
{
	if (!func_573(iParam0))
	{
		return false;
	}
	return ((Global_1914319->f_3[iParam0 /*446*/])->f_7 && iParam1) != 0;
}

void func_233(int iParam0, int iParam1)
{
	func_574(&((Global_1914319->f_3[iParam0 /*446*/])->f_5), iParam1);
}

void func_234(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;

	if (iParam0 == 11)
	{
		return;
	}
	iVar0 = func_575(iParam3, iParam0);
	vVar1 = { func_576(iVar0) };
	vVar4 = { func_577(iVar0) };
	if (func_206(vVar1))
	{
		return;
	}
	if (!func_578(19, 16384))
	{
		if (!func_402(iParam1))
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
	func_248(iParam0);
	(Global_1914319->f_3[iParam0 /*446*/])->f_22 = -1;
	(Global_1914319->f_3[iParam0 /*446*/])->f_11 = { vVar1 };
	if (func_206(vVar4))
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
	if (func_579(iVar0) || func_580(iVar0, iParam0))
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
		(Global_1914319->f_3[iParam0 /*446*/])->f_20 = func_581(5, (Global_1914319->f_3[iParam0 /*446*/])->f_10, 2, iVar7);
	}
	*(Global_1393529->f_114[iParam0 /*3*/]) = { 0f, 0f, 0f };
	Global_1393529->f_220[iParam0] = 0f;
	Global_1393529->f_569[iParam0] = 0;
	StringCopy(Global_1393529->f_288[iParam0 /*8*/], "", 64);
	if (fParam7 <= 0f)
	{
		fParam7 = func_582(iParam0);
	}
	(Global_1914319->f_3[iParam0 /*446*/])->f_19 = fParam7;
	(Global_1914319->f_3[iParam0 /*446*/])->f_8 = iParam6;
	if (!func_583(iParam0, iParam1))
	{
	}
	switch (iParam0)
	{
		case 1:
		case 2:
			func_584(iParam3);
			break;
		case 10:
			func_585(iParam3);
			break;
		case 18:
			func_586();
			break;
		case 9:
			func_587();
			break;
		case 22:
			func_588();
			break;
	}
	func_589((Global_1914319->f_3[iParam0 /*446*/])->f_10);
	func_590(iParam0, 16);
	func_591(iParam0, 4);
	VOLUME::_0x748C5F51A18CB8F0(1);
}

bool func_235(int iParam0)
{
	return func_592(iParam0, 32);
}

void func_236(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!bParam3)
	{
		if (func_593(iParam0))
		{
			return;
		}
	}
	if (bParam2)
	{
		if (!func_594(iParam0, 4))
		{
			func_595(iParam0, 4);
		}
	}
	else
	{
		func_596(iParam0, 4);
	}
	func_597(iParam0);
}

void func_237(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_598((*uParam0)[iVar0 /*257*/]);
		func_599((*uParam0)[iVar0 /*257*/]);
		func_600((*uParam0)[iVar0 /*257*/]);
		MISC::SET_BIT(&(((*uParam0)[iVar0 /*257*/])->f_254), 0);
		iVar0++;
	}
}

void func_238(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (!func_601(iParam0, iParam1))
	{
		if (uParam2->f_255 != 0)
		{
			func_598(uParam2);
			func_599(uParam2);
			func_600(uParam2);
		}
		return;
	}
	iVar0 = func_602(iParam1);
	if (*uParam2 != iParam1 || uParam2->f_1 != iVar0)
	{
		func_598(uParam2);
		func_599(uParam2);
		func_600(uParam2);
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
			func_603(iParam1, uParam2);
		}
		else if (!MISC::IS_BIT_SET(uParam2->f_254, 2))
		{
			if (func_604(uParam2))
			{
				func_605(iParam0, iParam1, iVar0, uParam2);
			}
		}
		else if (!MISC::IS_BIT_SET(uParam2->f_254, 3))
		{
			func_606(uParam2, Global_40.f_4283.f_415[iParam1]);
		}
		else if (!MISC::IS_BIT_SET(uParam2->f_254, 4))
		{
			func_607(uParam2, Global_40.f_4283.f_415[iParam1], iParam3);
		}
		else
		{
			func_599(uParam2);
			func_600(uParam2);
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
				func_243(5000);
			}
			if (OBJECT::HAS_OBJECT_BEEN_BROKEN(&(uParam2->f_9[iVar1 /*9*/])))
			{
				MISC::SET_BIT(Global_40.f_4283.f_415[iParam1], iVar1);
				MISC::CLEAR_BIT(&(uParam2->f_255), iVar1);
				func_243(5000);
			}
		}
		iVar1++;
	}
	uParam2->f_256 = &Global_40.f_4283.f_415[iParam1];
}

float func_239(var uParam0)
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
		if ((uParam0->f_9[iVar2 /*9*/])->f_8 != 0 && !func_608((uParam0->f_9[iVar2 /*9*/])->f_8))
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

float func_240()
{
	int iVar0;

	iVar0 = func_609();
	return func_611((IntToFloat(iVar0) * func_610()), 100f);
}

float func_241(float fParam0, float fParam1)
{
	return ((fParam0 / 2f) + (fParam1 / 2f));
}

int func_242()
{
	if (func_324(Global_35, 0))
	{
		if (PED::_0x34D6AC1157C8226C(Global_35, 1855656219))
		{
			return 1;
		}
	}
	return 0;
}

void func_243(int iParam0)
{
	Global_1357549->f_1892 = (MISC::GET_GAME_TIMER() + iParam0);
}

bool func_244(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_204(iParam0))
	{
		return false;
	}
	iVar0 = func_558(iParam0);
	return HUD::_UIPROMPT_IS_ACTIVE(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

int func_245()
{
	if (HUD::IS_HUD_HIDDEN())
	{
		return 0;
	}
	if (CAM::IS_CINEMATIC_CAM_RENDERING())
	{
		return 0;
	}
	if (func_612())
	{
		return 0;
	}
	if (func_227(180573150, 1))
	{
		return 0;
	}
	if (func_227(-404697685, 1))
	{
		return 0;
	}
	return 1;
}

void func_246()
{
	HUD::_0x4CC5F2FC1332577F(1670279562);
}

void func_247()
{
	HUD::_0x8BC7C1F929D07BF3(1670279562);
}

void func_248(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_402((Global_1914319->f_3[iParam0 /*446*/])->f_21) && func_613((Global_1914319->f_3[iParam0 /*446*/])->f_21))
	{
		func_614((Global_1914319->f_3[iParam0 /*446*/])->f_21, 0, 1, 0, 0);
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
	func_615((Global_1914319->f_3[iParam0 /*446*/])->f_10, 0);
	func_590(iParam0, 536870912);
	iVar1 = func_616(iParam0);
	if (iVar1 >= 15)
	{
		(Global_1914319->f_3[iParam0 /*446*/])->f_408 = 0;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			func_617(&((Global_1914319->f_3[iParam0 /*446*/])->f_317[iVar0 /*6*/]));
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
	func_618(iParam0);
	(Global_1914319->f_3[iParam0 /*446*/])->f_10 = -1;
	(Global_1914319->f_3[iParam0 /*446*/])->f_9 = -1;
	func_619(iParam0, 0);
}

bool func_249(var uParam0, int iParam1)
{
	return (uParam0->f_62 && iParam1) != 0;
}

bool func_250()
{
	return func_127(&Global_1935630, 4096);
}

bool func_251(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_252(int iParam0)
{
	if (!func_367(iParam0))
	{
		return false;
	}
	return ((((*Global_1888801)[iParam0 /*35*/])->f_20 == 1 || ((*Global_1888801)[iParam0 /*35*/])->f_20 == 2) && !func_620(iParam0));
}

bool func_253(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 150)
	{
		return false;
	}
	return (((*Global_1888801)[iParam0 /*35*/])->f_21 && iParam1) != 0;
}

int func_254()
{
	return Global_1897952->f_41;
}

void func_255(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
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

	if (!func_621())
	{
		return;
	}
	sVar1 = func_622(iParam0, iParam1, iParam2, iParam4, iParam5, bParam3, &uVar0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		if (bParam3)
		{
			return;
		}
		sVar1 = "DISTRICT_GRIZZLIES";
	}
	if (!func_623(iParam4))
	{
		if (func_367(iParam0))
		{
			iParam4 = func_624(func_370(iParam0));
		}
		else
		{
			iParam4 = func_624(iParam1);
		}
	}
	if (func_623(iParam4))
	{
		iVar3 = func_625(iParam4);
	}
	if (uVar0 && bParam3)
	{
		sVar2 = func_627(func_626(iParam2));
	}
	else if ((func_628(iParam1, 2) || func_629(iParam4, 2)) && !Global_1894899->f_9)
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
	else if ((func_367(iParam0) && func_630(iParam0, 16777216)) && !Global_1894899->f_9)
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
		iVar4 = func_631(func_548());
		iVar5 = func_632(func_548());
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
				fVar7 = func_633(fVar7);
				sVar8 = "TIME_AND_TEMP_F";
			}
			IntToString(&sVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::_CREATE_VAR_STRING(674, sVar8, iVar4, func_546(&sVar6, 109029619), sVar9, func_546(&sVar10, 109029619));
		}
		else
		{
			sVar8 = "TIME_AND_TEMP_C_24";
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				fVar7 = func_633(fVar7);
				sVar8 = "TIME_AND_TEMP_F_24";
			}
			IntToString(&sVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::_CREATE_VAR_STRING(162, sVar8, iVar4, func_546(&sVar6, 109029619), func_546(&sVar10, 109029619));
		}
		Global_1894899->f_9 = 0;
	}
	Global_1934266->f_148 = func_547(sVar1, sVar2, 4000, 0, 0, 0, 0, 1);
}

void func_256(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_257(int iParam0, bool bParam1)
{
	if (Global_1572887->f_10 && func_56() == 0)
	{
		return;
	}
	if (func_634(128))
	{
		return;
	}
	if (!func_635(iParam0))
	{
		return;
	}
	if (func_630(iParam0, 32))
	{
		return;
	}
	func_409(iParam0, 32);
	func_636(Global_1935630, 8192);
	func_638(func_637(-1532769513, -36357794), 1);
	switch (func_370(iParam0))
	{
		case 0:
		case 2:
		case 11:
			func_638(func_637(-1532769513, 213519508), 1);
			break;
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			func_638(func_637(-1532769513, 242571679), 1);
			break;
		case 3:
		case 10:
			func_638(func_637(-1532769513, 1349449307), 1);
			break;
		case 4:
		case 9:
			func_638(func_637(-1532769513, 1140362070), 1);
			break;
		case 8:
			func_638(func_637(-1532769513, -172330899), 1);
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			func_638(func_637(-1532769513, -910218296), 1);
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
		func_409(iParam0, 64);
	}
}

bool func_258()
{
	return (Global_1894899 & 1 != 0 && func_128() != -1);
}

void func_259()
{
	if (!func_639(&Global_1327479))
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
	func_640(0);
	Global_1327479 = -1;
	Global_1310750->f_16075 = 0;
	Global_1310750->f_16076 = 0;
	Global_1310750->f_16103 = { 0f, 0f, 0f };
}

void func_260(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	if (func_641() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0 /*9*/];
		if (((func_639(iVar1) && !func_642(iVar1, iParam2)) && (!bParam3 || !func_643(iVar1))) && (!bParam4 || !func_644(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_645(iVar0);
			}
		}
		iVar0++;
	}
}

void func_261(bool bParam0)
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

int func_262()
{
	return Global_40.f_4283.f_1;
}

void func_263(bool bParam0)
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

int func_264(int iParam0)
{
	switch (func_56())
	{
		case -1:
			return (Global_40.f_4283.f_2 && iParam0) != 0;
	}
	return 0;
}

int func_265(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, char* sParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	struct<13> Var11;
	int iVar34;
	struct<2> Var35;
	bool bVar37;

	if (!func_646(iParam0, 0))
	{
		return 0;
	}
	if (!func_647(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_648(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_649(iParam0, bParam2);
	iVar2 = 0;
	if (func_650(iParam0, 0, 0) == 0)
	{
		if (func_651(iParam0))
		{
			iVar5 = func_652(iParam0);
			iVar6 = func_653(iVar5);
			iVar7 = func_654(iVar6) + 1;
			func_655(iVar5);
			if (func_656(38))
			{
				func_202(483, 0);
			}
			else
			{
				func_202(482, 0);
			}
			if (iVar7 == func_657(iVar6))
			{
				func_265(func_658(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_659() && func_660(4))
				{
					if (func_659() && (func_661(38) || func_656(38)))
					{
						func_663(38, func_658(iVar6), 0, 0, func_662(), 0, -1, 0);
						func_664(2);
					}
					else
					{
						func_663(38, func_658(iVar6), 0, 0, func_662(), 0, -1, 0);
						func_664(1);
					}
				}
			}
			else if (func_659() && func_660(4))
			{
				if (func_659() && (func_661(38) || func_656(38)))
				{
					func_663(38, 0, 0, 0, func_662(), 0, -1, 0);
					func_664(2);
				}
				else
				{
					func_663(38, 0, 0, 0, func_662(), 0, -1, 0);
					func_664(1);
				}
			}
			if (func_659() && func_660(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_659() && (func_661(38) || func_656(38)))
					{
						func_665(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_665(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_666(iParam0) == -1037537535)
	{
		if ((!func_667(iParam0, 866047851) && !func_667(iParam0, -1979000645)) && !func_667(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_668(iParam0, 8388608) && !func_669(28))
	{
		func_670(28);
	}
	if (!bVar3)
	{
		if (func_667(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_492(iParam0) == -1447088266)
			{
				iVar1 = func_672(func_671(iParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar1))
				{
					if (func_56() == -1)
					{
						func_266(iVar1);
					}
					if (func_673(0) && func_674(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_675(iParam0, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
			else
			{
				iVar1 = WEAPON::_0x5C2EA6C44F515F34(iParam0);
				if (WEAPON::_0x1F7977C9101F807F(iVar1))
				{
					if (func_56() == -1)
					{
						func_266(iParam0);
					}
					if (func_673(0) && func_674(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_675(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_666(iParam0) == -427144552)
		{
			if (!func_676(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_666(iParam0) == 307971639 && func_677(iParam0))
		{
			if (!func_678(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_667(iParam0, 866047851))
		{
			func_679(iParam0);
		}
		else if (func_667(iParam0, 2000026003))
		{
			func_680(iParam0);
		}
		else if (func_667(iParam0, -103750053))
		{
			func_638(func_681(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_638(func_637(-717883113, 2091222383), iVar0);
		}
		else if (func_667(iParam0, -121341956) && !func_667(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_488(((*Global_1835011)[4 /*74*/])->f_1, 1))
				{
					func_202(498, 0);
				}
			}
			if (func_667(iParam0, -2017733358) || func_667(iParam0, -1369131378))
			{
				func_682(iParam0);
			}
		}
		else if (func_667(iParam0, -136654233))
		{
			if (func_667(iParam0, -1021472396))
			{
			}
		}
		else if (func_667(iParam0, -1466706512) && func_667(iParam0, 1147021565))
		{
			func_202(484, 0);
		}
		else if (func_667(iParam0, 1147021565) && func_667(iParam0, -524514947))
		{
		}
		else if (func_667(iParam0, 554195525))
		{
		}
		else if (func_667(iParam0, 589988438))
		{
			if (func_683())
			{
				func_684(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_667(iParam0, 787083290) && func_667(iParam0, 949916894))
		{
			func_685(iParam0);
		}
		else if (func_667(iParam0, -1718133314))
		{
			func_686(iParam0);
		}
		else if (func_667(iParam0, -1738650224))
		{
			func_687(iParam0);
		}
		else if (func_667(iParam0, -1112814642) && func_667(iParam0, 949916894))
		{
			func_688(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_667(iParam0, 1841149704))
		{
			func_689();
		}
		else if (func_667(iParam0, 606799272))
		{
			func_690(iParam0, iParam1);
			func_691(iParam0);
		}
		else if (func_667(iParam0, -1112814642) && func_667(iParam0, -1697809989))
		{
			func_692(iParam0, 0, 0, 0);
		}
		else if (func_667(iParam0, -2017733358) || func_667(iParam0, -1369131378))
		{
			func_682(iParam0);
		}
		else if (func_667(iParam0, -1921346699))
		{
			if (func_56() != -1)
			{
				return 0;
			}
			func_693(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_667(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_694(215778062, 1, 0))
					{
						func_265(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_694(670273567, 1, 0))
					{
						func_265(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_694(-967317137, 1, 0))
					{
						func_265(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_694(526074061, 1, 0))
					{
						func_265(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_694(-1045488665, 1, 0))
					{
						func_265(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_694(471514780, 1, 0))
					{
						func_265(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_667(iParam0, -839724752) && func_668(iParam0, 4))
		{
			if (!func_656(42))
			{
				func_695(iParam0);
			}
		}
		else if (func_667(iParam0, 1399091007))
		{
			func_696(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_667(iParam0, 1248798204))
		{
			iVar8 = 0;
			switch (iParam0)
			{
				case -593948563:
					iVar8 = -1281487556; /* GXTEntry: "Legend of the East Satchel" */
					break;
				case -1421669656:
					iVar8 = -59585102; /* GXTEntry: "Tonics Satchel" */
					break;
				case -830181022:
					iVar8 = 1018123892; /* GXTEntry: "Ingredients Satchel" */
					break;
				case 917695895:
					iVar8 = -1455768246; /* GXTEntry: "Kit Satchel" */
					break;
				case -1580595448:
					iVar8 = -921879912; /* GXTEntry: "Provisions Satchel" */
					break;
				case 1309992709:
					iVar8 = 982182330; /* GXTEntry: "Materials Satchel" */
					break;
				case 1541618973:
					iVar8 = -1406390556; /* GXTEntry: "Valuables Satchel" */
					break;
			}
			if (iVar8 != 0)
			{
				func_265(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		switch (iParam0)
		{
			case 990323211:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1930309310;
				break;
			case 1143540373:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1372580021;
				break;
			case -1073808995:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1557306571;
				break;
			case 1903483453:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 306085243;
				break;
			case 224572565:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 627131028;
				break;
			case -13395913:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 627131028;
				break;
			case 1859340712:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 239008065;
				break;
			case -1614861441:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 239008065;
				break;
			case -1336735809:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1930727055;
				break;
			case -1109613870:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1930727055;
				break;
			case 637788839:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2118798877;
				break;
			case -1161163727:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2118798877;
				break;
			case 648503798:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -978517238;
				break;
			case -1434556002:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -978517238;
				break;
			case -843069275:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1367906801;
				break;
			case 1356680930:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1367906801;
				break;
			case -1185145312:
				func_670(24);
				if (&Global_1946804->f_1497.f_1[27 /*3*/] == &Global_1946804->f_57[27 /*11*/])
				{
					func_697(PLAYER::PLAYER_PED_ID(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_698(&bVar9, 0))
				{
					func_674(bVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303:
				if (func_56() == -1 && &Global_1946804->f_1497.f_1[25 /*3*/] == &Global_1946804->f_57[25 /*11*/])
				{
					func_697(PLAYER::PLAYER_PED_ID(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case joaat("weapon_kit_binoculars"):
				break;
			case 2131771850:
				func_202(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_699();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_700();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_701();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_702();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_703();
				break;
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584:
				func_704(499813453, 854119837, 0);
				func_705(499813453, 0);
				func_706(1);
				break;
			case 2127812557:
				func_704(499813453, -1292544588, 0);
				func_705(499813453, 0);
				func_706(2);
				break;
			case 808991383:
				func_704(499813453, -1003325394, 0);
				func_705(499813453, 0);
				func_706(4);
				break;
			case 1134518629:
				func_704(666607663, -335460405, 0);
				func_705(666607663, 0);
				func_707(1);
				break;
			case 902940106:
				func_704(666607663, 903797617, 0);
				func_705(666607663, 0);
				func_707(2);
				break;
			case -418174898:
				func_704(666607663, 669728650, 0);
				func_705(666607663, 0);
				func_707(4);
				break;
			case -648114971:
				func_704(-220219788, 1214120047, 0);
				func_705(-220219788, 0);
				func_708(1);
				break;
			case 211153747:
				func_704(-220219788, 655769340, 0);
				func_705(-220219788, 0);
				func_708(2);
				break;
			case -32876996:
				func_704(-220219788, 885316185, 0);
				func_705(-220219788, 0);
				func_708(4);
				break;
			case 1191437462:
				func_704(218622660, -1491419385, 0);
				func_705(218622660, 0);
				func_709(1);
				break;
			case 1119149048:
				func_704(218622660, 1809565830, 0);
				func_705(218622660, 0);
				func_709(2);
				break;
			case 506073827:
				func_704(390004462, -628873767, 0);
				func_705(390004462, 0);
				func_710(1);
				break;
			case -1876986168:
				func_704(390004462, -405421956, 0);
				func_705(390004462, 0);
				func_710(2);
				break;
			case 2142623221:
				func_704(390004462, -1108972386, 0);
				func_705(390004462, 0);
				func_710(4);
				break;
			case 1508215381:
				func_704(6410548, 1053716392, 0);
				func_705(6410548, 0);
				func_711(1);
				break;
			case -888935280:
				func_704(6410548, 806507056, 0);
				func_705(6410548, 0);
				func_711(2);
				break;
			case -1252474566:
				func_704(6410548, 1571925350, 0);
				func_705(6410548, 0);
				func_711(4);
				break;
			case -1465702449:
				func_704(6410548, 1330352282, 0);
				func_705(6410548, 0);
				func_711(8);
				break;
			case -21093309:
				func_713(242, func_712(-21093309), 0);
				break;
			case 204375141:
				func_713(240, func_712(204375141), 0);
				break;
			case -417963070:
				func_713(241, func_712(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_714(594, 1934060482, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1067476102:
			case -541584777:
			case 206762213:
			case 1566032147:
			case 1973952589:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_714(594, 1110018439, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -653299524:
			case -486559882:
			case -324053813:
			case -223790555:
			case 998010398:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_714(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_714(594, -1228016946, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -2034071102:
			case -1939600995:
			case -1760041550:
			case -1708424762:
			case -1598782722:
			case -1505924449:
			case -1403873319:
			case -1335566375:
			case -1192685521:
			case 144810727:
			case 567164682:
			case 1174625611:
			case 1955751248:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_714(595, -103579, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1977068039:
			case -399865011:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_714(595, -1531530025, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case 80178851:
				func_202(488, 0);
				break;
			case 1613651027:
				func_202(491, 0);
				break;
			case -885810591:
				func_202(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_265(func_715(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_265(func_716(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535:
				if (func_669(1))
				{
					func_202(487, 0);
				}
				break;
			case -898386032:
				func_202(486, 0);
				break;
			case -2035110427:
				if (func_56() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case 1510719693:
				func_202(496, 0);
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
		iVar10 = iParam0;
		func_717(&iVar10);
		if (!func_718(iVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_673(0))
		{
			return 1;
		}
		if (func_666(iParam0) == -1037537535)
		{
			func_719(iParam0);
		}
		if (func_667(iParam0, -1979000645))
		{
			func_720(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_673(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_265(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_721(iVar2, 0);
		}
	}
	Var35 = { func_722(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var35))
	{
		STATS::_0x6A0184E904CDF25E(&Var35, iVar0);
	}
	func_723(iParam0);
	if (sParam6 > 0f)
	{
		if (func_667(iParam0, -839724752))
		{
			func_724(iParam0, sParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_725(iParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

void func_266(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_726(iParam0))
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

bool func_267()
{
	return Global_1357549->f_1616;
}

void func_268(var uParam0)
{
	uParam0->f_1424 = 0;
}

void func_269(int iParam0, bool bParam1)
{
	Global_1357549->f_1616 = iParam0;
	if (bParam1)
	{
	}
}

void func_270()
{
	if (func_141() != 2 && func_141() != 1)
	{
		return;
	}
}

void func_271(var uParam0)
{
	bool bVar0;

	if ((MISC::GET_FRAME_COUNT() % 30) != 0)
	{
		return;
	}
	bVar0 = false;
	if (((((Global_1357549->f_1672 == -774242862 || Global_1357549->f_1672 == -2100684454) || Global_1357549->f_1672 == -1167047117) || Global_1357549->f_1672 == 396444962) || Global_1357549->f_1672 == -498064062) || Global_1357549->f_1672 == 513694516)
	{
		if (func_227(-666548248, 1) == 0)
		{
			bVar0 = true;
			func_375(-666548248, 1017034651, 1120952528, -1, 1, 1, 0);
		}
	}
	else
	{
		func_727(-666548248, 1, 0);
	}
	if (bVar0)
	{
		if (func_204(uParam0->f_1))
		{
			func_728(uParam0->f_1, "MONEY_LOANSHARK_ALL_DEBTS", 1);
		}
	}
	if (Global_1357549->f_1672 == 0)
	{
		if (func_650(-774242862, 0, 0) >= 1)
		{
			func_729(-774242862, joaat("p_moneystack01x"));
			return;
		}
		if (func_650(-2100684454, 0, 0) >= 1)
		{
			func_729(-2100684454, joaat("p_moneystack01x"));
			return;
		}
		if (func_650(-1167047117, 0, 0) >= 1)
		{
			func_729(-1167047117, joaat("p_moneystack01x"));
			return;
		}
		if (func_650(396444962, 0, 0) >= 1)
		{
			func_729(396444962, joaat("p_moneystack01x"));
			return;
		}
		if (func_650(-498064062, 0, 0) >= 1)
		{
			func_729(-498064062, joaat("p_moneystack01x"));
			return;
		}
		if (func_650(513694516, 0, 0) >= 1)
		{
			func_729(513694516, joaat("p_moneystack01x"));
			return;
		}
	}
}

void func_272(int* iParam0, var uParam1)
{
	vector3 vVar0;
	float fVar3;
	bool bVar4;

	vVar0 = { func_730(func_275()) };
	fVar3 = 5f;
	if (func_206(vVar0))
	{
		return;
	}
	if ((func_669(26) == 0 || func_159()) && !func_12(8))
	{
		func_731(iParam0);
		return;
	}
	if (func_227(-1461741225, 1))
	{
		func_731(iParam0);
		return;
	}
	if (func_32() != 1)
	{
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(*iParam0) && !func_242())
	{
		if (!func_12(8))
		{
			*iParam0 = MAP::_0x554D9D53F696D002(168093330, vVar0);
			MAP::_0x662D364ABF16DE2F(*iParam0, 1046501997);
			MAP::SET_BLIP_SPRITE(*iParam0, -1954662204, true);
			MAP::SET_BLIP_FLASH_TIMER(*iParam0, 66, -1);
			func_732(*iParam0, func_262());
		}
	}
	func_733(iParam0, uParam1);
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
			func_734(iParam0);
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
			if (!func_204(iParam0->f_1))
			{
				if (Global_1357549->f_1672 == 0)
				{
					iParam0->f_1 = func_737("GIVE_TITHE", -719620017, func_735(func_275()), func_736(), 3, 1, 0, 0, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
					func_210(iParam0->f_1, 736625733, 0, 1);
				}
				else if (func_738())
				{
					iParam0->f_1 = func_737("ITEM_TITHE", -719620017, func_735(func_275()), func_736(), 3, 1, 0, 0, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
					func_728(iParam0->f_1, "MONEY_LOANSHARK_ALL_DEBTS", 1);
					func_210(iParam0->f_1, 736625733, 0, 1);
				}
				else
				{
					iParam0->f_1 = func_737("ITEM_TITHE", -719620017, func_735(func_275()), func_736(), 3, 1, 0, 0, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
					func_739(iParam0->f_1, "ITEM_TITHE", func_712(Global_1357549->f_1672), 1);
					func_210(iParam0->f_1, 736625733, 0, 1);
				}
			}
		}
	}
	if (func_226(Global_35, func_735(func_275()), 1) <= (func_736() + 0.25f))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 1287709438, false);
		HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, 1f, 1, 1, 736625733, func_740(), 0);
	}
	if ((MISC::GET_FRAME_COUNT() % 30) == 0)
	{
		bVar4 = false;
		if ((((func_741() || func_742()) || PED::_0xA911EE21EDF69DAF(Global_35)) || func_467(Global_35)) || func_743())
		{
			bVar4 = true;
		}
		if (func_204(iParam0->f_1))
		{
			func_295(iParam0->f_1, bVar4);
		}
		if (func_204(iParam0->f_6))
		{
			func_295(iParam0->f_6, bVar4);
		}
	}
	if (iParam0->f_856)
	{
		if (func_204(iParam0->f_855) == 0)
		{
			iParam0->f_855 = func_744("BACK_TITHE", 814057702, Global_35, 1, 0, 0, 0, 0, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
		}
		else if (func_217(iParam0->f_855, 1))
		{
			AUDIO::PLAY_SOUND_FRONTEND("Back", "HUD_Camp_Status_Sounds", true, 0);
			func_205(&(iParam0->f_855), 1, 1);
			func_205(&(iParam0->f_883), 1, 1);
			func_205(&(iParam0->f_884), 1, 1);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
			iParam0->f_856 = 0;
		}
	}
	if (func_745(iParam0->f_1, 1) || iParam0->f_2 == 1)
	{
		iParam0->f_2 = 1;
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256, 0);
		if (func_204(iParam0->f_1))
		{
			func_746(iParam0->f_1, 0, 1);
		}
		if (func_204(iParam0->f_6))
		{
			func_746(iParam0->f_6, 0, 1);
		}
		if (func_168(&(iParam0->f_870)) == 0)
		{
			func_175(&(iParam0->f_870), 0);
		}
		if (((func_747(Global_35, 1, 0, 0) == joaat("weapon_unarmed") && func_747(Global_35, 0, 1, 0) == joaat("weapon_unarmed")) && func_748() == 0) && PED::_0xA911EE21EDF69DAF(Global_35) == 0)
		{
			if (PED::_0x9C54041BB66BCF9E(Global_35, iParam0->f_863) == 0)
			{
				if (func_169(&(iParam0->f_870)) > 0f)
				{
					func_140(8192);
					TASK::CLEAR_PED_SECONDARY_TASK(Global_35);
					AUDIO::PLAY_SOUND_FRONTEND("Give_To_Gang", "HUD_Donate_Sounds", true, 0);
					func_749(iParam0);
					iParam0->f_2 = 0;
					func_75(128);
					func_731(iParam0);
				}
			}
		}
		else
		{
			WEAPON::_0xFCCC886EDE3C63EC(Global_35, 2, 1);
			func_542(&(iParam0->f_870), -0.75f);
		}
	}
}

void func_273(int* iParam0)
{
	int iVar0;

	iVar0 = -1;
	if (func_206(func_750(func_275())) == 0)
	{
		if (func_226(Global_35, func_750(func_275()), 1) < 20f && !func_142())
		{
			if (iParam0->f_4 == 1)
			{
				iParam0->f_4 = 0;
				if (func_200(256) == 0)
				{
					func_202(256, 0);
				}
				else if (func_200(257) == 0)
				{
					func_202(257, 0);
				}
			}
		}
	}
	switch (func_141())
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
			if (!func_227(-692943180, 1))
			{
				func_375(-692943180, 195285667, 1120952528, 2, 1, 1, 0);
			}
		}
		else if (func_227(-692943180, 1))
		{
			func_727(-692943180, 1, 0);
		}
		if (func_751(iParam0))
		{
			if (func_592(iVar0, 16384))
			{
				func_752(iVar0, 16384);
			}
		}
		else if (func_592(iVar0, 16384) == 0)
		{
			func_753(iVar0, 16384);
		}
	}
}

void func_274(int* iParam0, var uParam1)
{
	if (func_32() == 1)
	{
		func_754(&(iParam0->f_14), ((*uParam1)[2 /*257*/])->f_255);
		func_754(&(iParam0->f_15), ((*uParam1)[0 /*257*/])->f_255);
		func_754(&(iParam0->f_13), ((*uParam1)[1 /*257*/])->f_255);
	}
	else
	{
		func_755(iParam0);
	}
}

int func_275()
{
	switch (func_56())
	{
		case -1:
			return Global_40.f_4283;
	}
	return -1;
}

int func_276(int iParam0)
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

void func_277(int* iParam0)
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
			func_756(&(iParam0->f_1325), func_172(13), "ABIGAIL", 0);
			break;
		case 8:
			StringCopy(&cVar0, "GIVE_ABIGAIL", 24);
			func_756(&(iParam0->f_1325), func_172(13), "ABIGAIL", 0);
			break;
		case 10:
			StringCopy(&cVar0, "ASK_JACK1", 24);
			func_756(&(iParam0->f_1325), func_172(14), "JACK", 0);
			break;
		case 11:
			StringCopy(&cVar0, "GIVE_JACK1", 24);
			func_756(&(iParam0->f_1325), func_172(14), "JACK", 0);
			break;
		case 13:
			StringCopy(&cVar0, "ASK_JACK2", 24);
			func_756(&(iParam0->f_1325), func_172(14), "JACK", 0);
			break;
		case 14:
			StringCopy(&cVar0, "GIVE_JACK2", 24);
			func_756(&(iParam0->f_1325), func_172(14), "JACK", 0);
			break;
		case 16:
			StringCopy(&cVar0, "ASK_CHARLES1", 24);
			func_756(&(iParam0->f_1325), func_172(7), "CHARLES_SMITH", 0);
			break;
		case 17:
			StringCopy(&cVar0, "GIVE_CHARLES1", 24);
			func_756(&(iParam0->f_1325), func_172(7), "CHARLES_SMITH", 0);
			break;
		case 18:
			StringCopy(&cVar0, "THANK_CHARLES1", 24);
			func_756(&(iParam0->f_1325), func_172(7), "CHARLES_SMITH", 0);
			break;
		case 19:
			StringCopy(&cVar0, "ASK_CHARLES2", 24);
			func_756(&(iParam0->f_1325), func_172(7), "CHARLES_SMITH", 0);
			break;
		case 20:
			StringCopy(&cVar0, "GIVE_CHARLES2", 24);
			func_756(&(iParam0->f_1325), func_172(7), "CHARLES_SMITH", 0);
			break;
		case 21:
			StringCopy(&cVar0, "THANK_CHARLES2", 24);
			func_756(&(iParam0->f_1325), func_172(7), "CHARLES_SMITH", 0);
			break;
		case 22:
			StringCopy(&cVar0, "ASK_CHARLES3", 24);
			func_756(&(iParam0->f_1325), func_172(7), "CHARLES_SMITH", 0);
			break;
		case 23:
			StringCopy(&cVar0, "GIVE_CHARLES3", 24);
			func_756(&(iParam0->f_1325), func_172(7), "CHARLES_SMITH", 0);
			break;
		case 24:
			StringCopy(&cVar0, "THANK_CHARLES3", 24);
			func_756(&(iParam0->f_1325), func_172(7), "CHARLES_SMITH", 0);
			break;
		case 25:
			StringCopy(&cVar0, "ASK_CHARLES4", 24);
			func_756(&(iParam0->f_1325), func_172(7), "CHARLES_SMITH", 0);
			break;
		case 26:
			StringCopy(&cVar0, "GIVE_CHARLES4", 24);
			func_756(&(iParam0->f_1325), func_172(7), "CHARLES_SMITH", 0);
			break;
		case 27:
			StringCopy(&cVar0, "THANK_CHARLES4", 24);
			func_756(&(iParam0->f_1325), func_172(7), "CHARLES_SMITH", 0);
			break;
		case 28:
			StringCopy(&cVar0, "ASK_SUSAN1", 24);
			func_756(&(iParam0->f_1325), func_172(19), "SUSAN", 0);
			break;
		case 29:
			StringCopy(&cVar0, "GIVE_SUSAN1", 24);
			func_756(&(iParam0->f_1325), func_172(19), "SUSAN", 0);
			break;
		case 30:
			StringCopy(&cVar0, "THANK_SUSAN1", 24);
			func_756(&(iParam0->f_1325), func_172(19), "SUSAN", 0);
			break;
		case 31:
			StringCopy(&cVar0, "ASK_SUSAN2", 24);
			func_756(&(iParam0->f_1325), func_172(19), "SUSAN", 0);
			break;
		case 32:
			StringCopy(&cVar0, "GIVE_SUSAN2", 24);
			func_756(&(iParam0->f_1325), func_172(19), "SUSAN", 0);
			break;
		case 33:
			StringCopy(&cVar0, "THANK_SUSAN2", 24);
			func_756(&(iParam0->f_1325), func_172(19), "SUSAN", 0);
			break;
		case 34:
			StringCopy(&cVar0, "ASK_SWANSON", 24);
			func_756(&(iParam0->f_1325), func_172(21), "SWANSON", 0);
			break;
		case 35:
			StringCopy(&cVar0, "GIVE_SWANSON", 24);
			func_756(&(iParam0->f_1325), func_172(21), "SWANSON", 0);
			break;
		case 36:
			StringCopy(&cVar0, "THANK_SWANSON", 24);
			func_756(&(iParam0->f_1325), func_172(21), "SWANSON", 0);
			break;
		case 37:
			StringCopy(&cVar0, "ASK_PEARSON1", 24);
			func_756(&(iParam0->f_1325), func_172(17), "PEARSON", 0);
			break;
		case 38:
			StringCopy(&cVar0, "GIVE_PEARSON1", 24);
			func_756(&(iParam0->f_1325), func_172(17), "PEARSON", 0);
			break;
		case 39:
			StringCopy(&cVar0, "THANK_PEARSON1", 24);
			func_756(&(iParam0->f_1325), func_172(17), "PEARSON", 0);
			break;
		case 40:
			StringCopy(&cVar0, "ASK_PEARSON2", 24);
			func_756(&(iParam0->f_1325), func_172(17), "PEARSON", 0);
			break;
		case 41:
			StringCopy(&cVar0, "GIVE_PEARSON2", 24);
			func_756(&(iParam0->f_1325), func_172(17), "PEARSON", 0);
			break;
		case 42:
			StringCopy(&cVar0, "THANK_PEARSON2", 24);
			func_756(&(iParam0->f_1325), func_172(17), "PEARSON", 0);
			break;
		case 43:
			StringCopy(&cVar0, "ASK_JAVIER", 24);
			func_756(&(iParam0->f_1325), func_172(2), "JAVIER", 0);
			break;
		case 44:
			StringCopy(&cVar0, "GIVE_JAVIER", 24);
			func_756(&(iParam0->f_1325), func_172(2), "JAVIER", 0);
			break;
		case 45:
			StringCopy(&cVar0, "THANK_JAVIER", 24);
			func_756(&(iParam0->f_1325), func_172(2), "JAVIER", 0);
			break;
		case 46:
			StringCopy(&cVar0, "ASK_BILL", 24);
			func_756(&(iParam0->f_1325), func_172(3), "BILL", 0);
			break;
		case 47:
			StringCopy(&cVar0, "GIVE_BILL", 24);
			func_756(&(iParam0->f_1325), func_172(3), "BILL", 0);
			break;
		case 48:
			StringCopy(&cVar0, "THANK_BILL", 24);
			func_756(&(iParam0->f_1325), func_172(3), "BILL", 0);
			break;
		case 49:
			StringCopy(&cVar0, "ASK_SEAN", 24);
			func_756(&(iParam0->f_1325), func_172(8), "SEAN", 0);
			break;
		case 50:
			StringCopy(&cVar0, "GIVE_SEAN", 24);
			func_756(&(iParam0->f_1325), func_172(8), "SEAN", 0);
			break;
		case 51:
			StringCopy(&cVar0, "THANK_SEAN", 24);
			func_756(&(iParam0->f_1325), func_172(8), "SEAN", 0);
			break;
		case 82:
			StringCopy(&cVar0, "ASK_KIERAN", 24);
			func_756(&(iParam0->f_1325), func_172(10), "KIERAN", 0);
			break;
		case 83:
			StringCopy(&cVar0, "GIVE_KIERAN", 24);
			func_756(&(iParam0->f_1325), func_172(10), "KIERAN", 0);
			break;
		case 84:
			StringCopy(&cVar0, "THANK_KIERAN", 24);
			func_756(&(iParam0->f_1325), func_172(10), "KIERAN", 0);
			break;
		case 88:
			StringCopy(&cVar0, "ASK_TILLY", 24);
			func_756(&(iParam0->f_1325), func_172(22), "TILLY", 0);
			break;
		case 89:
			StringCopy(&cVar0, "GIVE_TILLY", 24);
			func_756(&(iParam0->f_1325), func_172(22), "TILLY", 0);
			break;
		case 90:
			StringCopy(&cVar0, "THANK_TILLY", 24);
			func_756(&(iParam0->f_1325), func_172(22), "TILLY", 0);
			break;
		case 52:
			StringCopy(&cVar0, "ASK_LENNY1", 24);
			func_756(&(iParam0->f_1325), func_172(9), "LENNY", 0);
			break;
		case 53:
			StringCopy(&cVar0, "GIVE_LENNY1", 24);
			func_756(&(iParam0->f_1325), func_172(9), "LENNY", 0);
			break;
		case 54:
			StringCopy(&cVar0, "THANK_LENNY1", 24);
			func_756(&(iParam0->f_1325), func_172(9), "LENNY", 0);
			break;
		case 55:
			StringCopy(&cVar0, "ASK_LENNY2", 24);
			func_756(&(iParam0->f_1325), func_172(9), "LENNY", 0);
			break;
		case 56:
			StringCopy(&cVar0, "GIVE_LENNY2", 24);
			func_756(&(iParam0->f_1325), func_172(9), "LENNY", 0);
			break;
		case 57:
			StringCopy(&cVar0, "THANK_LENNY2", 24);
			func_756(&(iParam0->f_1325), func_172(9), "LENNY", 0);
			break;
		case 58:
			StringCopy(&cVar0, "ASK_MARY1", 24);
			func_756(&(iParam0->f_1325), func_172(15), "MARYBETH", 0);
			break;
		case 59:
			StringCopy(&cVar0, "GIVE_MARY1", 24);
			func_756(&(iParam0->f_1325), func_172(15), "MARYBETH", 0);
			break;
		case 60:
			StringCopy(&cVar0, "THANK_MARY1", 24);
			func_756(&(iParam0->f_1325), func_172(15), "MARYBETH", 0);
			break;
		case 61:
			StringCopy(&cVar0, "ASK_MARY2", 24);
			func_756(&(iParam0->f_1325), func_172(15), "MARYBETH", 0);
			break;
		case 62:
			StringCopy(&cVar0, "GIVE_MARY2", 24);
			func_756(&(iParam0->f_1325), func_172(15), "MARYBETH", 0);
			break;
		case 63:
			StringCopy(&cVar0, "THANK_MARY2", 24);
			func_756(&(iParam0->f_1325), func_172(15), "MARYBETH", 0);
			break;
		case 91:
			StringCopy(&cVar0, "ASK_UNCLE", 24);
			func_756(&(iParam0->f_1325), func_172(4), "UNCLE", 0);
			break;
		case 92:
			StringCopy(&cVar0, "GIVE_UNCLE", 24);
			func_756(&(iParam0->f_1325), func_172(4), "UNCLE", 0);
			break;
		case 93:
			StringCopy(&cVar0, "THANK_UNCLE", 24);
			func_756(&(iParam0->f_1325), func_172(4), "UNCLE", 0);
			break;
		case 94:
			StringCopy(&cVar0, "ASK_TRELW", 24);
			func_756(&(iParam0->f_1325), func_172(23), "TRELAWNY", 0);
			break;
		case 95:
			StringCopy(&cVar0, "GIVE_TRELW", 24);
			func_756(&(iParam0->f_1325), func_172(23), "TRELAWNY", 0);
			break;
		case 96:
			StringCopy(&cVar0, "THANK_TRELW", 24);
			func_756(&(iParam0->f_1325), func_172(23), "TRELAWNY", 0);
			break;
		case 64:
			StringCopy(&cVar0, "ASK_HOSEA1", 24);
			func_756(&(iParam0->f_1325), func_172(5), "HOSEA", 0);
			break;
		case 65:
			StringCopy(&cVar0, "GIVE_HOSEA1", 24);
			func_756(&(iParam0->f_1325), func_172(5), "HOSEA", 0);
			break;
		case 66:
			StringCopy(&cVar0, "THANK_HOSEA1", 24);
			func_756(&(iParam0->f_1325), func_172(5), "HOSEA", 0);
			break;
		case 67:
			StringCopy(&cVar0, "ASK_HOSEA2", 24);
			func_756(&(iParam0->f_1325), func_172(5), "HOSEA", 0);
			break;
		case 68:
			StringCopy(&cVar0, "GIVE_HOSEA2", 24);
			func_756(&(iParam0->f_1325), func_172(5), "HOSEA", 0);
			break;
		case 69:
			StringCopy(&cVar0, "THANK_HOSEA2", 24);
			func_756(&(iParam0->f_1325), func_172(5), "HOSEA", 0);
			break;
		case 70:
			StringCopy(&cVar0, "ASK_KAREN", 24);
			func_756(&(iParam0->f_1325), func_172(20), "KAREN", 0);
			break;
		case 71:
			StringCopy(&cVar0, "GIVE_KAREN", 24);
			func_756(&(iParam0->f_1325), func_172(20), "KAREN", 0);
			break;
		case 72:
			StringCopy(&cVar0, "THANK_KAREN", 24);
			func_756(&(iParam0->f_1325), func_172(20), "KAREN", 0);
			break;
		case 73:
			StringCopy(&cVar0, "ASK_DUTCH", 24);
			func_756(&(iParam0->f_1325), func_172(0), "DUTCH", 0);
			break;
		case 74:
			StringCopy(&cVar0, "GIVE_DUTCH", 24);
			func_756(&(iParam0->f_1325), func_172(0), "DUTCH", 0);
			break;
		case 75:
			StringCopy(&cVar0, "THANK_DUTCH", 24);
			func_756(&(iParam0->f_1325), func_172(0), "DUTCH", 0);
			break;
		case 76:
			StringCopy(&cVar0, "ASK_MICAH", 24);
			func_756(&(iParam0->f_1325), func_172(6), "MICAH_BELL", 0);
			break;
		case 77:
			StringCopy(&cVar0, "GIVE_MICAH", 24);
			func_756(&(iParam0->f_1325), func_172(6), "MICAH_BELL", 0);
			break;
		case 78:
			StringCopy(&cVar0, "THANK_MICAH", 24);
			func_756(&(iParam0->f_1325), func_172(6), "MICAH_BELL", 0);
			break;
		case 79:
			StringCopy(&cVar0, "ASK_SADIE", 24);
			func_756(&(iParam0->f_1325), func_172(11), "SADIE_ADLER", 0);
			break;
		case 80:
			StringCopy(&cVar0, "GIVE_SADIE", 24);
			func_756(&(iParam0->f_1325), func_172(11), "SADIE_ADLER", 0);
			break;
		case 81:
			StringCopy(&cVar0, "THANK_SADIE", 24);
			func_756(&(iParam0->f_1325), func_172(11), "SADIE_ADLER", 0);
			break;
		case 85:
			StringCopy(&cVar0, "ASK_MOLLY", 24);
			func_756(&(iParam0->f_1325), func_172(16), "MOLLY", 0);
			break;
		case 86:
			StringCopy(&cVar0, "GIVE_MOLLY", 24);
			func_756(&(iParam0->f_1325), func_172(16), "MOLLY", 0);
			break;
		case 87:
			StringCopy(&cVar0, "THANK_MOLLY", 24);
			func_756(&(iParam0->f_1325), func_172(16), "MOLLY", 0);
			break;
		case 97:
			StringCopy(&cVar0, "CPGEN_DTBOX1", 24);
			func_756(&(iParam0->f_1325), func_172(0), "DUTCH", 0);
			func_757(&(iParam0->f_1325), cVar0, 0, -1, 0, 0);
			Global_1357549->f_1671 = -1;
			return;
	}
	Global_1357549->f_1671 = -1;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		func_757(&(iParam0->f_1325), cVar0, 0, -1, 0, 0);
	}
}

void func_278(int iParam0)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return;
	}
	POPULATION::_0x74C2B3DC0B294102(iParam0);
	POPULATION::_0xA1CFB35069D23C23(iParam0);
}

void func_279(int iParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		VOLUME::_0x43F867EF5C463A53(iParam0);
	}
}

void func_280(var uParam0, int iParam1, int iParam2, vector3 vParam3, vector3 vParam6, vector3 vParam9, int iParam12, int iParam13)
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
	iVar0 = func_758(iParam2, 1);
	iVar1 = func_758(iParam2, 0);
	bVar4 = (iParam2 == 0 || iParam2 == 2);
	if (iVar0 != 7)
	{
		if (iVar0 != -1)
		{
			func_759(&iVar2, vParam3, vParam6, vParam9, iVar0, iParam12, iParam13, bVar4);
			VOLUME::_0x6E0D3C3F828DA773(*uParam0, iVar2);
		}
	}
	if (iVar1 != 7)
	{
		if (iVar1 != -1)
		{
			func_759(&iVar3, vParam3, vParam6, vParam9, iVar1, iParam12, iParam13, bVar4);
			VOLUME::_0x6E0D3C3F828DA773(*uParam0, iVar3);
		}
	}
	if (*iParam1 != 0 && VOLUME::_0x92A78D0BEDB332A3(*iParam1))
	{
		fVar5 = func_760(iParam2);
		fVar6 = func_761((vParam9.x - fVar5), 0.1f);
		fVar7 = func_761((vParam9.y - fVar5), 0.1f);
		vVar8 = { fVar6, fVar7, vParam9.z };
		iVar11 = VOLUME::_CREATE_VOLUME_BY_HASH(iParam12, vParam3, vParam6, vVar8);
		VOLUME::_0x6E0D3C3F828DA773(*iParam1, iVar11);
	}
}

void func_281(var uParam0)
{
	if (func_204(uParam0->f_8))
	{
		func_205(&(uParam0->f_8), 1, 1);
	}
	MISC::CLEAR_BIT(&(uParam0->f_1), 3);
}

void func_282(var uParam0)
{
	int iVar0;

	if (func_204(uParam0->f_10))
	{
		func_205(&(uParam0->f_10), 1, 1);
	}
	if (func_204(uParam0->f_11))
	{
		func_205(&(uParam0->f_11), 1, 1);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_204(&(uParam0->f_12[iVar0])))
		{
			func_205(uParam0->f_12[iVar0], 1, 1);
		}
		iVar0++;
	}
	if (func_204(uParam0->f_9))
	{
		func_205(&(uParam0->f_9), 1, 1);
	}
	MISC::CLEAR_BIT(&(uParam0->f_1), 5);
}

void func_283(bool bParam0, var uParam1)
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

void func_284(var uParam0)
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

void func_285(int iParam0, bool bParam1)
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

void func_286(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		func_762(&iParam1, 8192);
	}
	if (bParam3)
	{
		POPULATION::_0x2161278C6322F740(iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
	}
}

void func_287(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	MISC::_0x2FCD528A397E5C88(iParam0, iVar0);
}

void func_288(int iParam0, bool bParam1, bool bParam2)
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

void func_289(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(1, iVar0));
}

void func_290(int iParam0, vector3 vParam1, var uParam4, int iParam5)
{
	if (!func_477(iParam0))
	{
		return;
	}
	if (func_206(vParam1))
	{
		return;
	}
	(Global_1395601->f_5[iParam0 /*28*/])->f_15 = { vParam1 };
	(Global_1395601->f_5[iParam0 /*28*/])->f_18 = uParam4;
	(Global_1395601->f_5[iParam0 /*28*/])->f_23 = iParam5;
	if (VOLUME::_0x92A78D0BEDB332A3(iParam5))
	{
	}
	if (!func_126(242, 1, 1))
	{
		func_763(iParam0, 1);
	}
	func_764(iParam0);
	func_765(iParam0, 1);
	(Global_40.f_9384[iParam0 /*2*/])->f_1 = func_548();
}

int func_291(int iParam0)
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
	if (func_126(0, 0, 1))
	{
		return 0;
	}
	if (iParam0 == 7)
	{
		if (!func_143(60))
		{
			return 0;
		}
	}
	return 1;
}

void func_292(int iParam0, var uParam1)
{
	vector3 vVar0;

	func_284(uParam1);
	vVar0 = { func_766(iParam0) };
	uParam1->f_5 = VOLUME::_CREATE_VOLUME_CYLINDER(vVar0, 0f, 0f, 0f, 2.25f, 2.25f, 2f);
	uParam1->f_6 = GRAPHICS::_0xFA50F79257745E74(vVar0, 2f, 1, 36, 0);
	if (MAP::DOES_BLIP_EXIST(uParam1->f_4))
	{
		MAP::REMOVE_BLIP(&(uParam1->f_4));
	}
	uParam1->f_4 = MAP::_0x554D9D53F696D002(1687768444, func_766(iParam0));
	MAP::_0x662D364ABF16DE2F(uParam1->f_4, 287169430);
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam1->f_4, "BLIP_CAMP_HITCH");
	MAP::SET_BLIP_FLASH_TIMER(uParam1->f_4, 68, -1);
	func_732(uParam1->f_4, func_262());
}

void func_293(var uParam0, int iParam1)
{
	if (iParam1 == *uParam0)
	{
		return;
	}
	*uParam0 = iParam1;
	MISC::CLEAR_BIT(&(uParam0->f_1), 1);
}

void func_294(var uParam0)
{
	uParam0->f_8 = func_208("BLIP_CAMP_HITCH", 1940454787, uParam0->f_5, 1, 0, 0, 4, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
	MISC::SET_BIT(&(uParam0->f_1), 3);
}

void func_295(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_204(iParam0))
	{
		return;
	}
	iVar0 = func_558(iParam0);
	HUD::_UIPROMPT_SET_ENABLED(((*Global_1945938)[iVar0 /*18*/])->f_3, !bParam1);
}

void func_296(var uParam0)
{
	if (func_767())
	{
		uParam0->f_11 = func_768(uParam0);
		HUD::_UIPROMPT_SET_GROUP(func_769(uParam0->f_11), 1842627646, 0);
	}
	else if (func_770())
	{
		uParam0->f_10 = func_208("CAMP_HITCH_SADDLE", 1940454787, uParam0->f_5, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
		HUD::_UIPROMPT_SET_GROUP(func_769(uParam0->f_10), 1842627646, 0);
	}
	if (func_771(2) == 2)
	{
		func_772(2, -1384133541, uParam0);
	}
	if (func_771(3) == 2)
	{
		func_772(3, 1710877787, uParam0);
	}
	if (func_771(4) == 2)
	{
		func_772(4, 1141111167, uParam0);
	}
	uParam0->f_9 = func_208("SHOP_EXIT", 992265328, uParam0->f_5, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
	HUD::_UIPROMPT_SET_GROUP(func_769(uParam0->f_9), 1842627646, 0);
	MISC::SET_BIT(&(uParam0->f_1), 5);
}

int func_297(var uParam0)
{
	*uParam0 = -1;
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0;
	}
	if (func_770())
	{
		return 1;
	}
	if (func_771(2) == 2)
	{
		return 1;
	}
	if (func_771(3) == 2)
	{
		return 1;
	}
	if (func_771(4) == 2)
	{
		return 1;
	}
	if (func_767())
	{
		return 1;
	}
	else if (!func_773())
	{
		*uParam0 = 0;
	}
	else if (ENTITY::DOES_ENTITY_EXIST(func_357(0)) && func_221(func_357(0)))
	{
		*uParam0 = 2;
	}
	else if (func_774(0) || (ENTITY::DOES_ENTITY_EXIST(func_357(0)) && ENTITY::IS_ENTITY_DEAD(func_357(0))))
	{
		*uParam0 = 1;
	}
	return 0;
}

void func_298(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_204(iParam0))
	{
		return;
	}
	iVar0 = func_558(iParam0);
	HUD::_UIPROMPT_RESTART_MODES(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

var func_299(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_300(int iParam0)
{
	var uVar0;
	var uVar1;

	if (iParam0 <= -1 || iParam0 >= 630)
	{
		return;
	}
	func_555(iParam0, &uVar0, &uVar1);
	func_775(&uVar0, &uVar1);
}

bool func_301()
{
	int iVar0;

	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && _NAMESPACE71::_0x59FA676177DBE4C9(iVar0) <= 4);
}

int func_302(int iParam0)
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

Vector3 func_303(int iParam0)
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
			if (!func_776())
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

float func_304(int iParam0)
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
			if (!func_776())
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

void func_305(int iParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_777();
	func_778(0, iParam0);
	func_779(0, 1);
	if (bVar0)
	{
		func_779(iParam0, 2);
		if (func_780(iParam0))
		{
			func_781(iParam0);
		}
	}
	else
	{
		iVar1 = func_357(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			func_782(iVar1);
			PED::_0xCC8CA3E88256E58F(iVar1, 0, 1, 1, 1, 1);
		}
		func_783(iParam0);
		func_784(iParam0);
		func_779(iParam0, 0);
	}
	if (func_785() == 0)
	{
		func_786(0);
		func_315(0);
	}
}

Vector3 func_306(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case -1:
					return -106.1076f, -31.1365f, 94.9429f;
				case 0:
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(-106.1076f, -31.1365f, 94.9429f, func_787(iParam0), 0.75f, 0f, 0f);
				case 1:
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(-106.1076f, -31.1365f, 94.9429f, func_787(iParam0), -0.75f, 0f, 0f);
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
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(702.1609f, -1228.529f, 44.1236f, func_787(iParam0), 0.75f, 0f, 0f);
				case 1:
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(702.1609f, -1228.529f, 44.1236f, func_787(iParam0), -0.75f, 0f, 0f);
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
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(1850.179f, -1838.022f, 42.1198f, func_787(iParam0), 0.75f, 0f, 0f);
				case 1:
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(1850.179f, -1838.022f, 42.1198f, func_787(iParam0), -0.75f, 0f, 0f);
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
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(2279.944f, -751.8282f, 40.9738f, func_787(iParam0), 0.75f, 0f, 0f);
				case 1:
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(2279.944f, -751.8282f, 40.9738f, func_787(iParam0), -0.75f, 0f, 0f);
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
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(2371.779f, 1341.602f, 105.1376f, func_787(iParam0), 0.75f, 0f, 0f);
				case 1:
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(2371.779f, 1341.602f, 105.1376f, func_787(iParam0), -0.75f, 0f, 0f);
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
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(-2590.321f, 464.9799f, 145.1713f, func_787(iParam0), 0.75f, 0f, 0f);
				case 1:
					return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(-2590.321f, 464.9799f, 145.1713f, func_787(iParam0), -0.75f, 0f, 0f);
				default:
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case -1:
					if (!func_776())
					{
						return -1665.684f, -1332.361f, 82.8786f;
					}
					else
					{
						return -1644.99f, -1376.751f, 82.9679f;
					}
					break;
				case 0:
					if (!func_776())
					{
						return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(-1665.684f, -1332.361f, 82.8786f, func_787(iParam0), 0.75f, 0f, 0f);
					}
					else
					{
						return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(-1644.99f, -1376.751f, 82.9679f, func_787(iParam0), 0.75f, 0f, 0f);
					}
					break;
				case 1:
					if (!func_776())
					{
						return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(-1665.684f, -1332.361f, 82.8786f, func_787(iParam0), -0.75f, 0f, 0f);
					}
					else
					{
						return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(-1644.99f, -1376.751f, 82.9679f, func_787(iParam0), -0.75f, 0f, 0f);
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_307(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
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

int func_308(int iParam0, var uParam1)
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

	if (!func_788())
	{
		return 1;
	}
	vVar0 = { func_306(iParam0, -1) };
	if (func_206(vVar0))
	{
		return 0;
	}
	iVar6 = func_357(0);
	iVar7 = func_357(1);
	bVar8 = false;
	if (ENTITY::DOES_ENTITY_EXIST(iVar7))
	{
		if (func_789(iVar7, vVar0, 2f, 1, 0))
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
		func_790();
		func_791();
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar6, 0, 1);
		MISC::CLEAR_AREA(vVar0, 1f, 2442122);
		if (bVar8)
		{
			vVar3 = { func_306(iParam0, 1) };
		}
		else
		{
			vVar3 = { vVar0 };
		}
		ENTITY::SET_ENTITY_COORDS(iVar6, vVar3, true, false, true, true);
		ENTITY::SET_ENTITY_HEADING(iVar6, func_787(iParam0));
		TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iVar6, vVar0, 0.25f, -1, 0, 0, 0, 0);
		iVar9 = TASK::_0xF533D68FF970D190(vVar0, -1805387726, 0.5f, 0, 0);
		if (TASK::_0x841475AC96E794D1(iVar9))
		{
			vVar10 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(TASK::_0x7467165EE97D3C68(iVar9), func_792(2, 1)) };
			PHYSICS::_0x06AADE17334F7A40(iVar6, vVar10);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar7) && bVar8)
		{
			vVar3 = { func_306(iParam0, 0) };
			ENTITY::SET_ENTITY_COORDS(iVar7, vVar3, true, false, true, true);
			ENTITY::SET_ENTITY_HEADING(iVar7, func_787(iParam0));
			TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iVar7, vVar0, 0.25f, -1, 0, 0, 0, 0);
			if (TASK::_0x841475AC96E794D1(iVar9))
			{
				vVar13 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(TASK::_0x7467165EE97D3C68(iVar9), func_792(2, 0)) };
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
		iVar6 = func_793(&iVar16, &Var17);
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

void func_309(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iParam0 = func_794(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_780(iParam0))
	{
		return;
	}
	iVar0 = func_357(iParam0);
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

void func_310()
{
	int iVar0;

	iVar0 = func_357(0);
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

int func_311(int iParam0)
{
	iParam0 = func_794(iParam0);
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

void func_312(int iParam0, int iParam1)
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
	iParam0 = func_794(iParam0);
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
		if (!func_669(43))
		{
			return;
		}
	}
	iVar0 = func_795(iParam0);
	if (func_796(iVar0) || func_797(iVar0))
	{
		return;
	}
	iVar1 = func_311(iParam0);
	if (iVar1 >= func_798(iVar0))
	{
		return;
	}
	if (func_799(iParam0, iParam1))
	{
		return;
	}
	if (func_800(iParam0, iParam1))
	{
		return;
	}
	fVar2 = func_801(iParam0, iParam1);
	fVar3 = func_802(iParam1);
	fVar3 = (fVar3 * (1f + Global_40.f_11095.f_68));
	switch (iParam1)
	{
		case 1:
			iVar4 = func_357(iParam0);
			if (func_803(iVar4, 0))
			{
				fVar3 = (fVar3 * 0.5f);
			}
			(Global_1900383->f_317.f_2[iParam0 /*5*/])->f_2 = ((Global_1900383->f_317.f_2[iParam0 /*5*/])->f_2 + fVar3);
			break;
		case 2:
		case 3:
			if (func_804())
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
				fVar5 = func_805(iParam0);
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
			func_806(iParam1, fVar3);
			break;
	}
	func_807(iParam0, fVar3);
	func_808(iParam0, iParam1, (fVar2 + fVar3));
}

int func_313()
{
	int iVar0;

	iVar0 = func_809();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 1;
	}
	return 0;
}

void func_314()
{
	int iVar0;

	iVar0 = func_809();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	OBJECT::DELETE_OBJECT(&iVar0);
	func_810(0);
}

void func_315(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

Vector3 func_316(int iParam0)
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
			if (!func_776())
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

void func_317(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

int func_318(vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	if (func_313())
	{
		func_811();
		func_314();
	}
	iVar0 = func_812();
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
	func_810(iVar1);
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

void func_319(var uParam0)
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

void func_320(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		func_813(uParam0->f_3402[iVar0]);
		func_813(uParam0->f_3430[iVar0]);
		iVar0++;
	}
	func_813(&(uParam0->f_3478));
	iVar1 = 0;
	while (iVar1 < 3)
	{
		func_813(uParam0->f_3458[iVar1]);
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 15)
	{
		func_813(uParam0->f_3462[iVar2]);
		iVar2++;
	}
}

void func_321(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_366(Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_636(Global_1935630, 4194304);
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

int func_322(bool bParam0)
{
	if (!bParam0 && func_814(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(752193127, bParam0, 0);
	return 1;
}

void func_323(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_815(&Global_0, 8);
	}
	if (!func_659() || func_56() != -1)
	{
		return;
	}
	func_815(&Global_0, 1);
}

int func_324(int iParam0, int iParam1)
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
	if (func_816(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_816(iVar0, 2))
	{
		if (PED::_0x3AA24CCC0D451379(iParam0))
		{
			return 0;
		}
	}
	if (func_816(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_816(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_816(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_816(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return 0;
		}
	}
	if (func_816(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_816(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

Vector3 func_325(int iParam0)
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
			return func_817();
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_326()
{
	int iVar0;

	iVar0 = func_262();
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

int func_327(int iParam0)
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

void func_328(bool bParam0)
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
		func_818(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_819();
		Global_1898077->f_9 = func_820(Global_1894899->f_2);
		func_821(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

void func_329(int iParam0, bool bParam1, float fParam2)
{
	func_822(iParam0, bParam1, fParam2);
}

void func_330()
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
			func_823();
			return;
		}
		iVar0++;
	}
}

void func_331(int* iParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;

	func_731(iParam0);
	func_824(iParam0);
	func_755(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_11))
	{
		OBJECT::DELETE_OBJECT(&(iParam0->f_11));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_12))
	{
		OBJECT::DELETE_OBJECT(&(iParam0->f_12));
	}
	if (func_825())
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
	func_826(iParam0->f_1426, &iVar0, &uVar1, &uVar2, &uVar3);
	Global_1357549->f_1723 = 0;
	func_527(iVar0, 512, 0);
	if (((func_275() == 1 || func_275() == 2) || func_275() == 3) || func_275() == 6)
	{
		func_827(&(iParam0->f_1428));
	}
}

void func_332()
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

void func_333(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if ((Global_1914319->f_3[iVar0 /*446*/])->f_9 == iParam0)
		{
			func_248(iVar0);
		}
		iVar0++;
	}
}

void func_334(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23117[iParam0 /*11*/] = (&Global_23117[iParam0 /*11*/] - (Global_23117[iParam0 /*11*/] && iParam1));
		return;
	}
	Global_1058888->f_40615[iParam0 /*11*/] = (&Global_1058888->f_40615[iParam0 /*11*/] - (Global_1058888->f_40615[iParam0 /*11*/] && iParam1));
}

bool func_335(int iParam0)
{
	return (Local_18.f_1718 && iParam0) == iParam0;
}

void func_336(int iParam0)
{
	Local_18.f_1718 = (Local_18.f_1718 - (Local_18.f_1718 && iParam0));
}

bool func_337(int iParam0)
{
	return func_396(iParam0, 16, 1);
}

bool func_338(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_172(iParam0);
	if (bParam1)
	{
		if (!func_324(iVar0, 0))
		{
			return false;
		}
	}
	return PED::IS_PED_GROUP_MEMBER(iVar0, func_828(), 1);
}

void func_339(int iParam0)
{
	int iVar0;
	struct<15> Var1;

	if (!func_478(iParam0))
	{
		return;
	}
	if (!func_338(iParam0, 0))
	{
	}
	func_829(iParam0);
	Global_1359489->f_15 = func_830(1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1359489[iVar0] == iParam0)
		{
			(*Global_1359489)[iVar0] = -1;
		}
		iVar0++;
	}
	func_831();
	func_410(iParam0, 32, 1);
	if (func_324(Global_1360165[iParam0 /*1157*/], 0))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], 1030835986);
		PED::SET_PED_COMBAT_ATTRIBUTES(Global_1360165[iParam0 /*1157*/], 83, false);
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 152, false);
		Var1 = PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX());
		Var1.f_12 = 8;
		Var1.f_3 = Global_1360165[iParam0 /*1157*/];
		Var1.f_7 = func_128();
		Var1.f_8 = 0;
		Var1.f_11 = 10;
		Var1.f_14 = Global_1360165[iParam0 /*1157*/];
		MISC::_0x88BC5F4AEF77FC4E(&Var1, 17);
	}
}

void func_340()
{
	func_375(-505205920, 1017034651, -469960592, 4, 1, 1, 1);
	func_832(544);
	func_832(595);
	func_832(548);
	func_833(0);
	func_833(19);
	func_834(1, 1, 0);
	func_835();
}

void func_341(bool bParam0)
{
	int iVar0;

	if (func_56() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1360165)
	{
		if ((!func_337(iVar0) && !func_836(iVar0)) && iVar0 != Global_1357549->f_1497)
		{
			if ((!func_512(iVar0, 33, 1) || !ENTITY::DOES_ENTITY_EXIST(Global_1360165[iVar0 /*1157*/])) || !ENTITY::IS_ENTITY_ON_SCREEN(Global_1360165[iVar0 /*1157*/]))
			{
				func_837(iVar0, 0, 0, 1, bParam0);
			}
		}
		iVar0++;
	}
}

void func_342(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (bParam0)
	{
		func_140(4096);
		if (iParam1 && VOLUME::_0x92A78D0BEDB332A3(iParam2))
		{
			iVar0 = 0;
			while (iVar0 < 27)
			{
				if (func_324(func_131(iVar0), 0))
				{
					if (!func_479(iVar0))
					{
						if (func_396(iVar0, 32768, 1))
						{
							_NAMESPACE48::_0x7B204F88F6C3D287(func_838(iVar0, 0));
						}
					}
				}
				iVar0++;
			}
		}
	}
	else
	{
		func_137(4096);
	}
}

int func_343(int iParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
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

int func_344(int iParam0, int iParam1)
{
	if (func_56() != -1)
	{
		return 0;
	}
	if (!func_402(iParam0))
	{
		return 0;
	}
	if (!func_613(iParam0) && iParam1)
	{
		return 0;
	}
	return func_368(iParam0, 1);
}

int func_345(int iParam0)
{
	int iVar0;

	if (!func_402(iParam0))
	{
		return 0;
	}
	if (!func_839(func_403(iParam0)))
	{
		return 1;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(func_840(iParam0)))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(_NAMESPACE48::_0x31C70A716CAE1FEE(func_840(iParam0))))
		{
			return 1;
		}
	}
	iVar0 = _NAMESPACE48::_0x31C70A716CAE1FEE(func_840(iParam0));
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
		}
	}
	_NAMESPACE48::_0x7B204F88F6C3D287(func_840(iParam0));
	return 1;
}

void func_346()
{
	if (func_324(Global_35, 0))
	{
		PED::_0x86F0B6730C32AC14(Global_35, 0);
	}
	if (func_324(func_172(0), 0))
	{
		PED::_0x86F0B6730C32AC14(func_172(0), 0);
	}
	if (func_324(func_172(16), 0))
	{
		PED::_0x86F0B6730C32AC14(func_172(16), 0);
	}
}

void func_347()
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

void func_348(var uParam0)
{
	if (uParam0->f_49 && !ENTITY::IS_ENTITY_DEAD(uParam0->f_48))
	{
		VEHICLE::DELETE_VEHICLE(&(uParam0->f_48));
	}
	func_44(&(Global_1357549->f_3));
}

void func_349(var uParam0)
{
	if (func_841(&uLocal_3513))
	{
		GRAPHICS::_0x9CF1836C03FB67A2(&uLocal_3513, 1);
	}
}

void func_350()
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_324((Global_1357549->f_1675[iVar0 /*5*/])->f_3, 0))
		{
			if (!func_842((Global_1357549->f_1675[iVar0 /*5*/])->f_3) && !ENTITY::DOES_ENTITY_EXIST(PED::_0xB676EFDA03DADA52((Global_1357549->f_1675[iVar0 /*5*/])->f_3, 0)))
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

void func_351()
{
	if (Global_40.f_4283.f_567)
	{
		func_843(&(Global_1357549->f_1897));
	}
}

void func_352()
{
	if (Global_1357549->f_1832 != -1 && AUDIO::IS_STREAM_PLAYING(Global_1357549->f_1832))
	{
		AUDIO::STOP_STREAM(Global_1357549->f_1832);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1357549->f_1841)))
	{
		AUDIO::_0x9D746964E0CF2C5F(&(Global_1357549->f_1841), &(Global_1357549->f_1833));
	}
	func_176(&(Global_1357549->f_1845));
	Global_1357549->f_1832 = -1;
	func_137(1048576);
}

void func_353(bool bParam0)
{
	if (bParam0)
	{
		HUD::_0x4CC5F2FC1332577F(-1618603322);
		func_140(8388608);
	}
	else
	{
		HUD::_0x8BC7C1F929D07BF3(-1618603322);
		func_137(8388608);
	}
}

void func_354(bool bParam0)
{
	if (bParam0)
	{
	}
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(15, bParam0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(6, bParam0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(1, bParam0);
}

bool func_355(int iParam0)
{
	return (Local_18.f_1786 && iParam0) == iParam0;
}

void func_356(int iParam0)
{
	Local_18.f_1786 = (Local_18.f_1786 - (Local_18.f_1786 && iParam0));
}

int func_357(int iParam0)
{
	iParam0 = func_794(iParam0);
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

bool func_358(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

void func_359(int iParam0, int iParam1)
{
	(*Global_1897952)[iParam0 /*2*/] = (Global_1897952[iParam0 /*2*/] || iParam1);
}

void func_360(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_598((*uParam0)[iVar0 /*257*/]);
		iVar0++;
	}
}

void func_361(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_599((*uParam0)[iVar0 /*257*/]);
		iVar0++;
	}
}

void func_362(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_600((*uParam0)[iVar0 /*257*/]);
		iVar0++;
	}
}

void func_363()
{
	if (!Global_1894899->f_186)
	{
		VEHICLE::_0xF5FFB08976911B50(Global_1894899->f_182, Global_1894899->f_183, Global_1894899->f_184, Global_1894899->f_185);
	}
}

int func_364(int iParam0, int iParam1)
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

void func_365(int iParam0)
{
	switch (func_56())
	{
		case -1:
			Global_1357549->f_1496 = (Global_1357549->f_1496 - (Global_1357549->f_1496 && iParam0));
			break;
	}
}

void func_366(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_367(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_368(int iParam0, int iParam1)
{
	if (func_56() != -1)
	{
		return false;
	}
	if (!func_402(iParam0))
	{
		return false;
	}
	return (Global_24886[iParam0 /*2*/] && iParam1) != 0;
}

int func_369(int iParam0, bool bParam1)
{
	if (!func_402(iParam0))
	{
		return 0;
	}
	if (!func_368(iParam0, 2))
	{
		return 0;
	}
	if (func_403(iParam0) == 0)
	{
		return 1;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(func_840(iParam0)))
	{
		return 1;
	}
	if (func_368(iParam0, 1) && !bParam1)
	{
		func_844(iParam0, 128);
		return 1;
	}
	func_845(iParam0, 129);
	func_846(iParam0);
	_NAMESPACE48::_0xFC77C5B44D5FF7C0(func_840(iParam0));
	func_847(iParam0, 0);
	return 1;
}

int func_370(int iParam0)
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

int func_371(int iParam0)
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

int func_372(int iParam0)
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

void func_373(int iParam0)
{
	int iVar0;

	if (iParam0 > 150)
	{
		iParam0 = 150;
	}
	if (iParam0 > (Global_1934765->f_286 - 150))
	{
	}
	if (func_848(&iVar0))
	{
		if ((Global_1934765->f_275[iVar0 /*2*/])->f_1 != iParam0)
		{
			Global_1934765->f_286 = (Global_1934765->f_286 + (Global_1934765->f_275[iVar0 /*2*/])->f_1);
			(Global_1934765->f_275[iVar0 /*2*/])->f_1 = iParam0;
			Global_1934765->f_286 = (Global_1934765->f_286 - iParam0);
			STREAMING::_0x2F9AC754FE179D58(func_849());
		}
		return;
	}
	iVar0 = func_850();
	if (iVar0 == -1)
	{
		return;
	}
	(Global_1934765->f_275[iVar0 /*2*/])->f_1 = iParam0;
	Global_1934765->f_275[iVar0 /*2*/] = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1934765->f_286 = (Global_1934765->f_286 - iParam0);
	STREAMING::_0x2F9AC754FE179D58(func_849());
}

int func_374(int iParam0)
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

int func_375(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
	iVar2 = func_851(iParam0);
	uVar3 = func_852(iParam0);
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
				iVar1 = func_548();
				func_550(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_1 = iVar1;
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_4 = iVar2;
			func_853(iParam0, 1);
			if (func_854(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if ((Global_40.f_4283.f_6[iVar4 /*5*/])->f_4 == iVar2 && &Global_40.f_4283.f_6[iVar4 /*5*/] != iParam0)
					{
						func_855(Global_40.f_4283.f_6[iVar4 /*5*/], 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_856(1, iParam0);
				}
				else
				{
					func_857(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_376(int iParam0, int iParam1, var uParam2)
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

void func_377(var uParam0)
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

void func_378(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_61 >= 20)
	{
		return;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam1))
	{
		return;
	}
	if (!func_858(iParam2))
	{
		return;
	}
	(*uParam0)[uParam0->f_61 /*3*/] = iParam1;
	((*uParam0)[uParam0->f_61 /*3*/])->f_1 = iParam2;
	((*uParam0)[uParam0->f_61 /*3*/])->f_2 = 0;
	uParam0->f_61++;
}

int func_379(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!func_478(iParam0))
	{
		return 0;
	}
	if (!bParam2)
	{
		if (func_859(iParam0, iParam1, 0))
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
		func_550(&(((*Global_1360165)[iParam0 /*1157*/])->f_142), 0, 0, iParam3, 0, 0, 0, 0);
	}
	return 1;
}

char* func_380(int iParam0)
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

int func_381(int iParam0, char[32] cParam1, int iParam9)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(&cParam1))
	{
		return 0;
	}
	if (!func_511(iParam0))
	{
		return 0;
	}
	iVar0 = func_395(iParam0);
	if (iVar0 != 0 && func_860(iParam0))
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_39 = { cParam1 };
		_NAMESPACE48::_0x187D65F3AEC5D679(iVar0, &cParam1);
		func_515(iParam0, 17, 1);
		if (iParam9 != -1)
		{
			iVar1 = func_548();
			func_550(&iVar1, 0, 0, iParam9, 0, 0, 0, 0);
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

void func_382()
{
	if (func_861(26))
	{
		MISC::_0x59174F1AFE095B5A(-702816767, false, true, true, 10f, false);
		return;
	}
	if (func_861(59) || func_862(59))
	{
		return;
	}
	if (!func_863(1))
	{
		func_864(-193557170, 1, 0, 1103626240);
	}
}

int func_383(int iParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = func_262();
	if (iParam0 != iVar0)
	{
		return 1;
	}
	vVar1 = { func_865(iParam0, 1) };
	if (func_206(vVar1))
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

void func_384(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		func_603(iVar1, (*uParam0)[iVar0 /*257*/]);
		iVar0++;
	}
}

int func_385(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_604((*uParam0)[iVar0 /*257*/]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_386()
{
	return 1;
}

void func_387(vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 16384;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

void func_388(vector3 vParam0, float fParam3, int iParam4)
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

void func_389(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	float fVar8;

	func_866(iParam0);
	iVar1 = func_391(iParam0);
	vVar2 = { func_865(iVar1, 1) };
	if (func_141() == iParam0)
	{
		vVar5 = { func_448(iParam0) };
		fVar8 = func_867(iParam0);
		func_868(iParam0, bParam1);
		if (!func_869(vVar5))
		{
			func_870(vVar5, fVar8, "CaravanCamp", 0, 0, 4, 0, -1082130432);
		}
		func_871(iParam0);
		if (func_390(iParam0))
		{
			iVar0 = func_872(iParam0);
			if (func_32() != 2)
			{
				if (func_873(iVar0))
				{
					if (!STREAMING::_IS_IMAP_ACTIVE(iVar0))
					{
						STREAMING::_REQUEST_IMAP(iVar0);
					}
				}
			}
			else if (func_873(iVar0))
			{
				if (STREAMING::_IS_IMAP_ACTIVE(iVar0))
				{
					STREAMING::_REMOVE_IMAP(iVar0);
				}
			}
			func_874(iParam0);
		}
		func_875(iParam0, 1);
		if (!bParam2)
		{
			func_876(iParam0, iVar1, 1, 1);
		}
	}
	else
	{
		func_877(iParam0, &iVar0);
		if (func_869(vVar2))
		{
			func_878(vVar2, 0);
		}
		func_875(iParam0, 0);
		if (!bParam2)
		{
			func_876(iParam0, iVar1, 0, 0);
		}
	}
}

int func_390(int iParam0)
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

int func_391(int iParam0)
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

void func_392(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	char cVar0[64];
	struct<8> Var8;

	MemCopy(&cVar0, {((*Global_1888801)[iParam0 /*35*/])->f_22}, 8);
	StringConCat(&cVar0, "_", 64);
	StringConCat(&cVar0, func_879(iParam1), 64);
	StringConCat(&cVar0, "_", 64);
	StringConCat(&cVar0, func_880(iParam2), 64);
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

bool func_393()
{
	return (func_881() && !func_12(4096));
}

int func_394(int iParam0)
{
	if (!func_511(iParam0))
	{
		return 0;
	}
	if (!func_513(iParam0, 1, 0))
	{
		if (func_882(iParam0))
		{
			if (!func_396(iParam0, 512, 1) || !func_883(iParam0))
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

int func_395(int iParam0)
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

bool func_396(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_511(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0 /*60*/] && iParam1) != 0;
}

int func_397(int iParam0, bool bParam1)
{
	if (!func_511(iParam0))
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
		((*Global_1360165)[iParam0 /*1157*/])->f_127 = func_884(iParam0);
		return ((*Global_1360165)[iParam0 /*1157*/])->f_127;
	}
	return 0;
}

int func_398(int iParam0)
{
	return 1268180497;
}

int func_399()
{
	int iVar0;
	struct<15> Var1;
	struct<10> Var30;
	struct<4> Var44;

	iVar0 = -352578118;
	Var1.f_9 = -1591664384;
	Var30.f_9 = -1591664384;
	Var44 = { func_885(0) };
	if (!func_886(Var44, iVar0, &Var30, 0, 0))
	{
		return 0;
	}
	if (!func_887(&Var30, &Var1))
	{
		return 0;
	}
	return Var1.f_14;
}

int func_400(int iParam0)
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
			if (func_143(44))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_401(int iParam0)
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

bool func_402(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

int func_403(int iParam0)
{
	if (!func_402(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/];
}

void func_404(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		func_605(iParam0, iVar1, func_602(iVar1), (*uParam1)[iVar0 /*257*/]);
		iVar0++;
	}
}

void func_405(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_606((*uParam0)[iVar0 /*257*/], (*uParam1)[iVar0]);
		iVar0++;
	}
}

int func_406(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_888((*uParam0)[iVar0 /*257*/], (*uParam1)[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_407()
{
}

int func_408(var uParam0)
{
	int iVar0;
	int iVar1;

	switch (Global_1357549->f_2)
	{
		case 0:
			if (uParam0->f_46 != func_262())
			{
				return 1;
			}
			if (func_889())
			{
				Global_1357549->f_2 = 1;
			}
			else
			{
				return 0;
			}
		case 1:
			if (func_890(uParam0->f_46, 0))
			{
				Global_1357549->f_2 = 2;
			}
			else
			{
				return 0;
			}
		case 2:
			if (func_891(uParam0->f_46))
			{
				Global_1357549->f_2 = 3;
			}
			else
			{
				return 0;
			}
		case 3:
			if (func_892(uParam0))
			{
				Global_1357549->f_2 = 4;
			}
			else
			{
				return 0;
			}
		case 4:
			if (func_893(uParam0))
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
				func_410(iVar0, 4, 1);
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

void func_409(int iParam0, int iParam1)
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

void func_410(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_511(iParam0))
		{
			return;
		}
	}
	func_894(iParam1, &iVar0, &iVar1);
	MISC::CLEAR_BIT(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0], iVar1);
}

void func_411(var uParam0)
{
}

void func_412(var uParam0)
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
		func_895(uParam0);
	}
	uParam0->f_859 = 1;
	if (Global_1357549->f_1721 == 0)
	{
		uVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(Global_1357549->f_1724, "camp_detail");
		uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar1, func_896(0));
		Global_1357549->f_1726[0 /*3*/] = uVar0;
		(Global_1357549->f_1726[0 /*3*/])->f_1 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar0, "label", 1820034266);
		(Global_1357549->f_1726[0 /*3*/])->f_2 = DATABINDING::_DATABINDING_ADD_DATA_INT(uVar0, "value_string", 0);
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1357549->f_1725, 0, "camp_item", uVar0);
		uVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(Global_1357549->f_1724, "camp_detail");
		uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar1, func_896(1));
		Global_1357549->f_1726[1 /*3*/] = uVar0;
		(Global_1357549->f_1726[1 /*3*/])->f_1 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar0, "label", 156970377);
		(Global_1357549->f_1726[1 /*3*/])->f_2 = DATABINDING::_DATABINDING_ADD_DATA_INT(uVar0, "value_string", 0);
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1357549->f_1725, 1, "camp_item", uVar0);
		uVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(Global_1357549->f_1724, "camp_detail");
		uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar1, func_896(2));
		Global_1357549->f_1726[2 /*3*/] = uVar0;
		(Global_1357549->f_1726[2 /*3*/])->f_1 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar0, "label", -609488505);
		(Global_1357549->f_1726[2 /*3*/])->f_2 = DATABINDING::_DATABINDING_ADD_DATA_INT(uVar0, "value_string", 0);
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1357549->f_1725, 2, "camp_item", uVar0);
		uVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(Global_1357549->f_1724, "camp_detail");
		uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar1, func_896(3));
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
				func_897(&sVar2, iVar4);
				uVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(Global_1357549->f_1724, "camp_detail");
				uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar1, func_896(iVar4 + 4));
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
		func_898(iVar7, &iVar5);
		func_899(iVar7, &iVar6);
		if (func_900(uParam0->f_1425, iVar5))
		{
			func_901(&(uParam0->f_1425), iVar5);
		}
		if (func_902(&(((*Global_1360165)[iVar6 /*1157*/])->f_12), 512))
		{
			func_527(iVar6, 512, 0);
		}
		if (func_204(&(uParam0->f_885[uParam0->f_1426])))
		{
			func_205(uParam0->f_885[uParam0->f_1426], 1, 1);
		}
		iVar7++;
	}
	STREAMING::REQUEST_ANIM_DICT("script_common@handover@generic@player_handover@money");
	func_903(128);
	func_756(&(uParam0->f_1325), Global_35, "ARTHUR", 0);
	HUD::_0xF66090013DE648D5("CPGENAU");
	func_270();
	if (func_904(func_141()))
	{
		func_905(&(uParam0->f_35.f_2));
		func_906(&(uParam0->f_35));
	}
	iVar8 = func_907(func_141());
	if (func_162())
	{
		if (!func_130(iVar8, 64))
		{
			func_163(iVar8, 64);
			func_163(iVar8, 262144);
		}
	}
	else if (func_130(iVar8, 64))
	{
		func_164(iVar8, 64);
	}
}

void func_413()
{
}

void func_414()
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

void func_415()
{
	int iVar0;
	float fVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	func_908(&(Local_18.f_51.f_35));
	func_176(&(Global_1359489->f_52));
	PLAYER::_0xCB61A63AA53D7D22(PLAYER::GET_PLAYER_INDEX(), 0);
	func_727(779383250, 1, 0);
	if (func_909())
	{
		func_375(-1526278254, 195285667, 1120952528, -1, 1, 1, 0);
	}
	else if (func_227(-1526278254, 1))
	{
		func_727(-1526278254, 1, 0);
	}
	if (func_910())
	{
		func_375(-544096309, 195285667, 1120952528, -1, 1, 1, 0);
	}
	else if (func_227(-544096309, 1))
	{
		func_727(-544096309, 1, 0);
	}
	iVar0 = func_911();
	if (iVar0 > Global_40.f_4283.f_323)
	{
		if ((iVar0 - Global_40.f_4283.f_323) > 5)
		{
			func_375(534766068, 195285667, 1120952528, -1, 1, 1, 0);
		}
		if ((iVar0 - Global_40.f_4283.f_323) > 10)
		{
			func_375(13460468, 195285667, 1120952528, -1, 1, 1, 0);
		}
		Global_40.f_4283.f_323 = iVar0;
	}
	if (func_141() == 6)
	{
		if (func_912(25))
		{
		}
	}
	if (ATTRIBUTE::GET_ATTRIBUTE_BASE_RANK(Global_35, 22) >= 40 || ATTRIBUTE::GET_ATTRIBUTE_BASE_RANK(Global_35, 16) >= 40)
	{
		func_375(1618734891, 195285667, 1120952528, -1, 1, 1, 0);
	}
	else if (func_227(1618734891, 1))
	{
		func_727(1618734891, 1, 0);
	}
	if (func_227(443165194, 1))
	{
		func_727(443165194, 1, 0);
	}
	if (func_227(1004978630, 1))
	{
		func_727(1004978630, 1, 0);
	}
	fVar1 = func_913();
	if (fVar1 < 25f)
	{
		if (!func_227(-625309660, 1) && !func_12(33554432))
		{
			func_375(1004978630, 195285667, 1120952528, -1, 1, 1, 0);
		}
	}
	else if (fVar1 > 75f)
	{
		func_375(443165194, 195285667, 1120952528, -1, 1, 1, 0);
	}
	if (func_149() < BUILTIN::ROUND((IntToFloat(func_914(&(Local_18.f_51.f_35))) * 0.2f)) && !func_227(-218211995, 1))
	{
		if (!func_227(397857304, 1))
		{
			func_375(397857304, 195285667, 1120952528, -1, 1, 1, 0);
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
	if (func_227(1004978630, 0) || func_227(397857304, 0))
	{
		if (func_915())
		{
			switch (func_141())
			{
				case 1:
					func_375(-2041153728, 195285667, -469960592, -1, 1, 1, 0);
					bVar2 = false;
					break;
				case 2:
					func_375(-811804990, 195285667, -469960592, -1, 1, 1, 0);
					bVar2 = false;
					break;
				case 3:
					func_375(-1689239424, 195285667, -469960592, -1, 1, 1, 0);
					bVar2 = false;
					break;
			}
		}
	}
	else if (func_916())
	{
		if (func_915())
		{
			switch (func_141())
			{
				case 1:
					func_375(1665139197, 195285667, -469960592, -1, 1, 1, 0);
					break;
				case 2:
					func_375(-1302664729, 195285667, -469960592, -1, 1, 1, 0);
					break;
				case 3:
					func_375(-670201310, 195285667, -469960592, -1, 1, 1, 0);
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
		switch (func_141())
		{
			case 1:
				if (func_170(2, 0, 0))
				{
					iVar4 = -1520159291;
				}
				if (func_170(4, 0, 0))
				{
					iVar5 = -1825730216;
				}
				if (func_170(7, 0, 0))
				{
					iVar6 = -66788599;
				}
				break;
			case 2:
				if (func_170(2, 0, 0))
				{
					iVar4 = 1647502903;
				}
				if (func_170(4, 0, 0))
				{
					iVar5 = -1408927269;
				}
				if (func_170(7, 0, 0))
				{
					iVar6 = -1648173738;
				}
				break;
			case 3:
				if (func_170(2, 0, 0))
				{
					iVar4 = -1143028112;
				}
				if (func_170(4, 0, 0))
				{
					iVar5 = -1211711936;
				}
				if (func_170(7, 0, 0))
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
					func_375(iVar4, 195285667, 1120952528, -1, 1, 1, 0);
				}
				break;
			case 1:
				if (iVar5 != 176656832)
				{
					func_375(iVar5, 195285667, 1120952528, -1, 1, 1, 0);
				}
				break;
			case 2:
				if (iVar6 != 176656832)
				{
					func_375(iVar6, 195285667, 1120952528, -1, 1, 1, 0);
				}
				break;
		}
	}
}

bool func_416(int iParam0)
{
	return (Global_1894899 && iParam0) != 0;
}

void func_417(int iParam0)
{
	Global_1894899 = (&Global_1894899 - (Global_1894899 && iParam0));
}

void func_418(var uParam0, int iParam1, bool bParam2)
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

void func_419()
{
	if (func_324(Global_35, 0))
	{
		PED::_0x86F0B6730C32AC14(Global_35, 1);
		PED::_0xEF371232BC6053E1(Global_35);
	}
	if (func_324(func_172(0), 0))
	{
		PED::_0x86F0B6730C32AC14(func_172(0), 1);
		PED::_0xEF371232BC6053E1(func_172(0));
	}
	if (func_324(func_172(16), 0))
	{
		PED::_0x86F0B6730C32AC14(func_172(16), 1);
		PED::_0xEF371232BC6053E1(func_172(16));
	}
}

void func_420(int iParam0)
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
	func_818(Global_1898077->f_7, Global_1898077->f_12);
}

bool func_421()
{
	return Global_1051081->f_8;
}

void func_422(int iParam0)
{
	Local_18.f_1718 = (Local_18.f_1718 || iParam0);
}

void func_423()
{
	if (!func_335(8))
	{
		func_354(1);
		func_422(8);
	}
}

int func_424(int iParam0)
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

void func_425(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_56() != -1)
	{
		return;
	}
	if ((Global_36615 && func_917(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_918(iParam0);
	iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_919(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, iParam7);
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
			func_920(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_919(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

void func_426()
{
	Local_18.f_3373 = 0;
}

void func_427()
{
	Global_1905944->f_5695 = 1;
}

void func_428()
{
	int iVar0;
	int iVar1;

	if (Local_18.f_3373 != -1)
	{
		if (func_396(Local_18.f_3373, 4, 0))
		{
			if (Local_18.f_3373 != 10 || func_912(63))
			{
				iVar0 = func_172(Local_18.f_3373);
				if (!func_921(iVar0, 1))
				{
					if (!func_512(Local_18.f_3373, 3, 0) || func_922(Local_18.f_3373))
					{
						func_923(Local_18.f_3373, 1);
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

Vector3 func_429(vector3 vParam0, float fParam3, float fParam4)
{
	vector3 vVar0;
	float fVar3;

	vVar0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), 0f };
	fVar3 = (fParam4 / 2f);
	vVar0 = { func_924(vVar0, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fParam3)) };
	vVar0.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-fVar3, fVar3);
	return vParam0 + vVar0;
}

Vector3 func_430(int iParam0, var uParam1, var uParam2)
{
	vector3 vVar0;

	vVar0 = { func_925(Global_36, uParam1, uParam2, 1, 0, 0, 0, 0, 0, 0, iParam0, 10f) };
	return vVar0;
}

void func_431(vector3 vParam0, var uParam3, var uParam4, int iParam5)
{
	Global_1310720->f_1 = { vParam0 };
	Global_40.f_9.f_10 = uParam4;
	Global_40.f_9.f_11 = uParam3;
	Global_40.f_9.f_12 = iParam5;
}

void func_432(int iParam0)
{
	Global_1310720->f_9 = iParam0;
}

void func_433()
{
	struct<10> Var0;
	struct<16> Var10;

	Global_1310720->f_8 = 0;
	Global_1935630->f_4 = 1;
	Var10 = { Var0 };
	StringCopy(&(Var10.f_10), "respawn_persistence", 32);
	Var10.f_14 = 1024;
	Var10.f_15 = 0;
	func_926(Var10, 0);
}

void func_434(int iParam0)
{
	Global_1572864->f_21 = iParam0;
	Global_1310720->f_4 = MISC::GET_GAME_TIMER();
}

void func_435(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 || iParam0);
}

void func_436()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 26)
	{
		if (func_338(iVar0, 1))
		{
			func_339(iVar0);
		}
		iVar1 = func_172(iVar0);
		if (func_921(iVar1, 1))
		{
		}
		else
		{
			if (PED::GET_PED_CONFIG_FLAG(iVar1, 366, true))
			{
				PED::SET_PED_CONFIG_FLAG(iVar1, 366, false);
			}
			if (!func_396(iVar0, 4, 0))
			{
			}
			else if (func_396(iVar0, 16, 0))
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

void func_437(var uParam0)
{
	uParam0->f_62 = -1;
	uParam0->f_64 = *uParam0;
}

void func_438(bool bParam0)
{
	if (bParam0)
	{
		func_927(4);
	}
	func_927(2);
	MISC::SET_BIT(&(Global_1956578->f_1), 0);
}

int func_439(int iParam0, var uParam1, bool bParam2)
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

void func_440(int iParam0)
{
	Local_18.f_1786 = (Local_18.f_1786 || iParam0);
}

int func_441(int iParam0, var uParam1, bool bParam2)
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

int func_442(int iParam0, int iParam1)
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

int func_443()
{
	if (Global_1392235->f_4 == 1)
	{
		return 1;
	}
	else if (func_928(((*Global_1835011)[7 /*74*/])->f_1))
	{
		return 1;
	}
	else if (func_928(((*Global_1835011)[69 /*74*/])->f_1))
	{
		return 1;
	}
	else if (func_928(((*Global_1835011)[70 /*74*/])->f_1))
	{
		return 1;
	}
	else if (func_928(((*Global_1835011)[71 /*74*/])->f_1))
	{
		return 1;
	}
	else if (func_928(((*Global_1835011)[72 /*74*/])->f_1))
	{
		return 1;
	}
	else if (func_928(((*Global_1347702)[32 /*49*/])->f_15))
	{
		return 1;
	}
	else if (func_928(((*Global_1347702)[132 /*49*/])->f_15))
	{
		return 1;
	}
	return 0;
}

int func_444(bool bParam0, int iParam1)
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
		if (!func_170(iVar3, 1, 1))
		{
		}
		else if (!bParam0)
		{
			if (Global_1357549->f_1497 == iVar3)
			{
			}
			else if (!func_929(iVar3, 0, iParam1))
			{
			}
			else
			{
				fVar4 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), ENTITY::GET_ENTITY_COORDS(func_172(iVar3), true, false));
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

int func_445(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, float fParam7, float fParam8)
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
	if (func_816(*iParam1, 128))
	{
		if (!func_442(iParam0, 1245594896))
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
	if (func_816(*iParam1, 2))
	{
		if (bVar3)
		{
			if (!func_930(iVar2))
			{
				return 0;
			}
			if (!func_442(iParam0, 501393341))
			{
				if (fParam7 != 0f && fParam8 != 0f)
				{
					vVar5 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
					vVar5.x = fParam7;
					vVar5.f_1 = fParam8;
					if (func_931(iVar2, vVar5))
					{
						iParam4 = 131072;
					}
					else
					{
						iParam4 = 262144;
					}
					if (!func_816(*iParam1, 4))
					{
						iParam4 |= 32;
					}
				}
				TASK::CLEAR_PED_TASKS(iParam0, 1, 0);
				TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam4, 0, 0, 0, 0);
			}
			return 0;
		}
		else if ((func_932(iParam2, 128) && ENTITY::DOES_ENTITY_EXIST(PED::_0x4C8B59171957BCF7(iParam0))) && ENTITY::DOES_ENTITY_EXIST(PED::_0xD806CD2A4F2C2996(PED::_0x4C8B59171957BCF7(iParam0))))
		{
			TASK::TASK_PICKUP_CARRIABLE_ENTITY(iParam0, PED::_0xD806CD2A4F2C2996(PED::_0x4C8B59171957BCF7(iParam0)));
			func_933(iParam1, 128);
			return 0;
		}
		else
		{
			*iParam1 = 0;
			return 1;
		}
	}
	if (func_816(*iParam1, 4))
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
	if (func_816(*iParam1, 8))
	{
		if (bVar3)
		{
			if (!func_930(iVar2))
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
		if (!func_932(iParam2, 2) && PLAYER::_0xB16223CB7DA965F0(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::_0xAE637BB8EF017875(PLAYER::GET_PLAYER_INDEX(), 1);
		}
		if (!func_932(iParam2, 2048))
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, iParam3, 0);
				if (func_932(iParam2, 8192))
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
		if (func_816(*iParam1, 2336))
		{
			if (!func_930(iVar2))
			{
			}
			if (func_934(iVar2, *iParam1))
			{
				func_935(iParam1, 32);
				func_935(iParam1, 256);
				func_935(iParam1, 2048);
				func_933(iParam1, 512);
				func_933(iParam1, 1024);
				func_933(iParam1, 4096);
			}
			else
			{
				return 0;
			}
		}
		if (func_816(*iParam1, 64))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 1520437207, false);
			if (!func_930(iVar2))
			{
			}
			if (TASK::IS_PED_WALKING(iVar2))
			{
				return 0;
			}
			else
			{
				func_935(iParam1, 64);
			}
		}
		if (func_932(iParam2, 16))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 2, 0, 0);
			*iParam1 = 0;
			return 1;
		}
		PAD::DISABLE_CONTROL_ACTION(0, 1520437207, false);
		if (((TASK::IS_PED_SPRINTING(iVar2) || (TASK::IS_PED_RUNNING(iVar2) && func_932(iParam2, 1024))) || func_932(iParam2, 8)) && !func_816(*iParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 1, 0, 0);
			func_933(iParam1, 32);
		}
		else if ((TASK::IS_PED_RUNNING(iVar2) && func_932(iParam2, 4096)) && !func_816(*iParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 8, 0, 0);
			func_933(iParam1, 2048);
			func_933(iParam1, 4096);
		}
		else if (((TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2) <= 1.5f && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2) >= 1.001f) && func_932(iParam2, 32)) && !func_816(*iParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 3, 0, 0);
			func_933(iParam1, 256);
			func_933(iParam1, 1024);
		}
		else if (TASK::IS_PED_WALKING(iVar2))
		{
			TASK::TASK_STAND_STILL(iVar2, -1);
			func_933(iParam1, 64);
		}
		else if (!func_932(iParam2, 1))
		{
			if (!func_932(iParam2, 256))
			{
				WEAPON::_0xB832F1A686B9B810(iParam0, 1, 0);
			}
			if (fParam7 != 0f && fParam8 != 0f)
			{
				vVar8.x = fParam7;
				vVar8.f_1 = fParam8;
				vVar8.f_2 = Global_36.f_2;
				if (func_931(iVar2, vVar8))
				{
					iParam4 = 131072;
				}
				else
				{
					iParam4 = 262144;
				}
				if (!func_816(*iParam1, 4))
				{
					iParam4 |= 32;
				}
			}
			TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam4, 0, 0, 0, 0);
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2, 0f);
			func_933(iParam1, 2);
		}
		else
		{
			TASK::TASK_STAND_STILL(iParam0, 1000);
			func_933(iParam1, 8);
		}
	}
	else if (bVar4)
	{
		if (!func_932(iParam2, 1))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_STAND_STILL(0, 250);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			VEHICLE::BRING_VEHICLE_TO_HALT(iVar1, fParam5, iParam6, false);
			func_933(iParam1, 4);
		}
		else
		{
			*iParam1 = 0;
			return 1;
		}
	}
	else if (!func_932(iParam2, 512))
	{
		TASK::TASK_STAND_STILL(iParam0, 200);
		func_933(iParam1, 8);
	}
	return 0;
}

bool func_446(int iParam0)
{
	return (Local_18.f_1786 - iParam0) == 0;
}

void func_447(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

Vector3 func_448(int iParam0)
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
	return func_865(func_391(iParam0), 0);
}

Vector3 func_449()
{
	vector3 vVar0;

	vVar0 = { VOLUME::_0xF70F00013A62F866(&(Global_1357549->f_3[5])) };
	return func_936(Global_36 - vVar0);
}

bool func_450(int iParam0, int iParam1, bool bParam2, int iParam3)
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

int func_451()
{
	return -1;
}

void func_452(int iParam0, int iParam1)
{
	iParam0 = func_794(iParam0);
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

int func_453(int iParam0, var uParam1, var uParam2)
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

void func_454(int iParam0)
{
	Local_18.f_1862 = (Local_18.f_1862 || iParam0);
}

bool func_455(int iParam0)
{
	return (Local_18.f_1862 && iParam0) == iParam0;
}

int func_456(int iParam0)
{
	if (!func_937(iParam0))
	{
		return 0;
	}
	return ((*Global_1835011)[iParam0 /*74*/])->f_1;
}

int func_457(int iParam0)
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
		iVar0 = func_938(iParam0);
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

int func_458(int iParam0)
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

void func_459(int iParam0, int iParam1)
{
	iParam0 = func_794(iParam0);
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

float func_460(int iParam0, int iParam1, bool bParam2, int iParam3)
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

void func_461(int iParam0)
{
	Local_18.f_1862 = (Local_18.f_1862 - (Local_18.f_1862 && iParam0));
}

int func_462()
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

int func_463()
{
	var uVar0;

	MISC::_COPY_MEMORY(&(Local_18.f_1934.f_67), &uVar0, 12);
	switch (func_141())
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

int func_464()
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

int func_465()
{
	if (!func_464())
	{
		return 0;
	}
	if (func_127(&Global_1935630, 16384))
	{
		return 0;
	}
	if (func_127(&Global_1935630, 32768))
	{
		return 0;
	}
	if (func_127(&Global_1935630, 8388608))
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_198(3))
	{
		return 0;
	}
	return 1;
}

int func_466(int iParam0)
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
		iVar0 = func_939(iParam0);
		iVar1 = 0;
		func_940(iVar0, 761605153, &iVar1);
		if (func_941(iVar0) || iVar1 > 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_467(int iParam0)
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
		iVar2 = func_942(iVar9);
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

bool func_468(int iParam0)
{
	return func_943(iParam0, 6);
}

Vector3 func_469(bool bParam0, vector3 vParam1, vector3 vParam4)
{
	if (bParam0)
	{
		return vParam1;
	}
	return vParam4;
}

float func_470(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_471(var uParam0)
{
	if (!func_168(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000f));
	}
	if (func_509(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_944() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

int func_472()
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

int func_473(int iParam0)
{
	if (!func_476(iParam0))
	{
		return -1;
	}
	return func_946(func_945(iParam0));
}

bool func_474(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_475(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_476(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_477(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

int func_478(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return 0;
	}
	return 1;
}

int func_479(int iParam0)
{
	if (!func_511(iParam0))
	{
		return 0;
	}
	if (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 == 0 || ((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 == ((*Global_1360165)[iParam0 /*1157*/])->f_128)
	{
		return 0;
	}
	return 1;
}

bool func_480()
{
	return Global_1946804->f_2792;
}

int func_481(int iParam0)
{
	return &(Global_1898164->f_1[iParam0 /*5*/]);
}

int func_482(int iParam0)
{
	if (!func_476(iParam0))
	{
		return 0;
	}
	switch (func_947(iParam0))
	{
		case 1:
			switch (func_473(iParam0))
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
			switch (func_473(iParam0))
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

int func_483(int iParam0)
{
	int iVar0;

	iVar0 = func_949(func_948(iParam0), 1);
	if (iVar0 != 39)
	{
		return (Global_1946804->f_1497.f_1[iVar0 /*3*/])->f_1;
	}
	return 0;
}

int func_484(int iParam0)
{
	if (func_485(81053684, iParam0))
	{
		return 1;
	}
	if (func_485(-525676072, iParam0))
	{
		return 1;
	}
	return 0;
}

int func_485(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_949(func_948(iParam0), 1);
	if (iVar1 >= 39)
	{
		return 0;
	}
	if (&Global_1946804->f_1497.f_1[iVar1 /*3*/] != 0 && &Global_1946804->f_1497.f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1 /*3*/];
		if (func_492(iVar0) == iParam0)
		{
			*uParam1 = iVar0;
			return 1;
		}
	}
	*uParam1 = 0;
	return 0;
}

int func_486(int iParam0)
{
	if (func_950())
	{
		return 0;
	}
	if (!func_646(iParam0, 0))
	{
		return 0;
	}
	if (!func_694(iParam0, 1, 0))
	{
		HUD::_0xBFFF81E12A745A5F();
		return 0;
	}
	return 1;
}

int func_487(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;

	bVar3 = func_951(iParam0);
	if (func_667(iParam0, -1303648999))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_138(&iVar2))
		{
			if (bVar1)
			{
				iVar0 = func_952();
			}
			else
			{
				iVar0 = func_953();
			}
		}
		else if (func_816(iParam1, 1))
		{
			iVar0 = 0;
		}
		else if (bVar1)
		{
			iVar0 = func_954();
		}
		else
		{
			iVar0 = func_955();
		}
	}
	else if (func_484(&iVar2))
	{
		if (func_667(iVar2, -1303648999))
		{
			iVar0 = func_952();
		}
		else
		{
			iVar0 = func_953();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_954();
	}
	else
	{
		iVar0 = func_955();
	}
	if (iVar0 != 0)
	{
		Global_1946804->f_2791 = MISC::GET_GAME_TIMER();
		TASK::_TASK_ITEM_INTERACTION(Global_35, iParam0, iVar0, 1, iParam1, -1082130432);
		return 1;
	}
	return 0;
}

int func_488(int iParam0, bool bParam1)
{
	switch (func_956(iParam0))
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

int func_489(int iParam0)
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

bool func_490(var uParam0)
{
	return (Global_1946804->f_2657.f_26.f_6 && uParam0) != 0;
}

int func_491(bool bParam0)
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

int func_492(int iParam0)
{
	struct<2> Var0;

	if (!func_646(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

void func_493(var uParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 || uParam0);
}

void func_494(var uParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 - (Global_1946804->f_2657.f_26.f_6 && uParam0));
}

struct<16> func_495(float fParam0, float fParam1, float fParam2)
{
	char cVar0[128];
	struct<2> Var16;

	Var16 = { func_957(fParam0) };
	MemCopy(&cVar0, {Var16}, 16);
	StringConCat(&cVar0, "~BLIP_SUPPLY_ICON_HEALTH~", 128);
	Var16 = { func_957(fParam1) };
	StringConCat(&cVar0, &Var16, 128);
	StringConCat(&cVar0, "~BLIP_SUPPLY_ICON_AMMO~", 128);
	Var16 = { func_957(fParam2) };
	StringConCat(&cVar0, &Var16, 128);
	StringConCat(&cVar0, "~BLIP_SUPPLY_ICON_FOOD~", 128);
	return cVar0;
}

void func_496(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iParam0) / 100f));
	*uParam2 = (iParam0 % 100);
}

int func_497(var uParam0, int iParam1, int iParam2, int iParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	if (!func_324(Global_35, 0))
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
			func_353(0);
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
		if (!func_502(1))
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
			func_160(2097152);
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
				iVar4 = func_213(Global_35, 1, 1, 0);
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
			func_353(1);
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
			func_353(0);
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
	if ((!bVar2 && !bVar3) && func_747(Global_35, 1, 0, 0) != joaat("weapon_unarmed"))
	{
		if (PAD::IS_DISABLED_CONTROL_PRESSED(0, 130948705))
		{
			if (func_142())
			{
				if (!func_200(556))
				{
					func_202(556, 0);
				}
			}
			else if (!func_200(555))
			{
				func_202(555, 0);
			}
		}
	}
	return 1;
}

void func_498(int iParam0)
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
		iVar0 = func_357(&(iVar1[iVar4]));
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

void func_499(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;

	switch (uParam0->f_3483.f_1)
	{
		case 0:
			if (func_958(&(uParam0->f_3483)))
			{
				func_959(uParam0, 1);
			}
			break;
		case 1:
			if (!PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) || !VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_3483, 0, 0))
			{
				uParam0->f_3483 = 0;
				func_959(uParam0, 0);
			}
			else
			{
				if (((!func_12(2) && VOLUME::_0x92A78D0BEDB332A3(&(Global_1357549->f_3[4]))) && ENTITY::IS_ENTITY_IN_VOLUME(uParam0->f_3483, &(Global_1357549->f_3[4]), true, 0)) && PED::IS_PED_HEADING_TOWARDS_POSITION(Global_35, VOLUME::_0xF70F00013A62F866(&(Global_1357549->f_3[4])), 75f))
				{
					func_959(uParam0, 2);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256, 0);
				}
				Jump @404; //curOff = 212
				if (func_960(1, 1084227584, 1, 1056964608))
				{
					if (!func_457(func_456(44)))
					{
						func_202(534, 0);
					}
					TASK::TASK_LEAVE_VEHICLE(Global_35, uParam0->f_3483, 0, 0);
					func_959(uParam0, 3);
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
					func_959(uParam0, 0);
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

void func_500(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;

	fVar0 = 2.5f;
	if (func_38(512) && !func_12(2))
	{
		fVar0 = 1.25f;
	}
	if (func_958(&(uParam0->f_3483)))
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

void func_501(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				if (!func_12(65536))
				{
					func_140(65536);
				}
			}
			else if (func_12(65536))
			{
				func_137(65536);
			}
			break;
		case 1:
			if (bParam1)
			{
				if (!func_12(131072))
				{
					func_140(131072);
				}
			}
			else if (func_12(131072))
			{
				func_137(131072);
			}
			break;
	}
}

int func_502(int iParam0)
{
	switch (func_56())
	{
		case -1:
			return (Global_1357549->f_1496 && iParam0) != 0;
	}
	return 0;
}

int func_503(int iParam0)
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

int func_504(int iParam0)
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

int func_505(int iParam0)
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

int func_506(int iParam0)
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

int func_507()
{
	if (SCRIPTS::IS_THREAD_ACTIVE(((*Global_1347702)[66 /*49*/])->f_42, false) && !func_961(((*Global_1347702)[66 /*49*/])->f_13, 4))
	{
		return 1;
	}
	return 0;
}

bool func_508(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_509(var uParam0)
{
	return func_508(*uParam0, 2);
}

float func_510()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_511(int iParam0)
{
	return iParam0 > -1;
}

bool func_512(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_511(iParam0))
		{
			return false;
		}
	}
	func_894(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0]), iVar1);
}

int func_513(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_511(iParam0))
	{
		return 0;
	}
	if (func_396(iParam0, 32, 1))
	{
		return 0;
	}
	if (!func_396(iParam0, 2, 1))
	{
		return 0;
	}
	if (!func_396(iParam0, 4, 1))
	{
		return 0;
	}
	if (func_512(iParam0, 33, 1))
	{
		return 0;
	}
	if (func_337(iParam0))
	{
		return 0;
	}
	if (func_882(iParam0))
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

var func_514(var uParam0, var uParam1)
{
	return AUDIO::_PLAY_AMBIENT_SPEECH1(uParam0, uParam1);
}

void func_515(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_511(iParam0))
		{
			return;
		}
	}
	func_894(iParam1, &iVar0, &iVar1);
	MISC::SET_BIT(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0], iVar1);
}

void func_516(int iParam0, bool bParam1, char* sParam2)
{
	int iVar0;

	iVar0 = func_172(iParam0);
	if (!func_478(iParam0) || ENTITY::IS_ENTITY_DEAD(iVar0))
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

void func_517(int iParam0, int iParam1)
{
	if (!func_511(iParam0))
	{
		return;
	}
	((*Global_1360165)[iParam0 /*1157*/])->f_11 = iParam1;
}

int func_518(int iParam0, vector3 vParam1, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	if (!func_511(iParam0))
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
					iParam4 = func_962(iParam0, iParam9, bParam7, 1);
				}
				else if ((((*Global_1360165)[iParam0 /*1157*/])->f_4.f_2 != 0 && ((*Global_1360165)[iParam0 /*1157*/])->f_4.f_2 == (Global_40.f_4942[iParam0 /*60*/])->f_59) && (func_457(((*Global_1360165)[iParam0 /*1157*/])->f_4.f_2) || func_928(((*Global_1360165)[iParam0 /*1157*/])->f_4.f_2)))
				{
					iParam4 = ((*Global_1360165)[iParam0 /*1157*/])->f_4.f_1;
				}
				else
				{
					iParam4 = func_962(iParam0, Global_40.f_4283, bParam7, 1);
				}
				if (((*Global_1360165)[iParam0 /*1157*/])->f_63 != iParam4 && func_963(((*Global_1360165)[iParam0 /*1157*/])->f_63))
				{
					if (!func_964(iParam0, 0))
					{
						func_515(iParam0, 25, 0);
					}
				}
			}
			((*Global_1360165)[iParam0 /*1157*/])->f_4 = { func_965(iParam0, iParam4, vParam1, bParam5, bParam6, bParam8, (Global_40.f_4942[iParam0 /*60*/])->f_59, bParam11) };
			if (!bParam6)
			{
				func_410(iParam0, 44, 1);
			}
			((*Global_1360165)[iParam0 /*1157*/])->f_3 = 2;
		case 2:
			if (!func_324(func_172(iParam0), 0))
			{
				return 0;
			}
			if (bParam5 && iParam10)
			{
				if (!func_324(func_131(iParam0), 0))
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

void func_519(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_511(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_410(iParam0, 50, 1);
		func_410(iParam0, 48, 1);
		func_410(iParam0, 49, 1);
		func_410(iParam0, 51, 1);
		func_410(iParam0, 52, 1);
		func_410(iParam0, 54, 1);
		func_410(iParam0, 55, 1);
	}
	else
	{
		func_515(iParam0, 50, 1);
		func_515(iParam0, 48, 1);
		func_515(iParam0, 49, 1);
		func_515(iParam0, 51, 1);
		if (bParam3)
		{
			func_515(iParam0, 54, 1);
		}
		else
		{
			func_410(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_515(iParam0, 52, 1);
			if (bParam3)
			{
				func_515(iParam0, 55, 1);
			}
		}
		else
		{
			func_410(iParam0, 52, 1);
			if (!bParam3)
			{
				func_410(iParam0, 55, 1);
			}
		}
	}
}

void func_520(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_478(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_966(iParam0, bParam3);
	}
	else
	{
		func_967(iParam0, bParam3);
	}
	if (bParam2)
	{
		func_968(iParam0, bParam3);
	}
	else
	{
		func_969(iParam0, bParam3);
	}
}

void func_521(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == func_970(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (func_971(iParam0))
	{
		if (func_222(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			PHYSICS::_0x0348469DAA17576C(iParam0);
		}
	}
	if (func_816(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_521(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_521(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_816(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 0, 1);
		}
	}
	if (func_816(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			ENTITY::_0x203BEFFDBE12E96A(iParam0, vParam1, fParam4, 1, func_816(iParam5, 32), 1);
		}
		else
		{
			ENTITY::_0x203BEFFDBE12E96A(iParam0, vParam1, fParam4, 1, func_816(iParam5, 32), 1);
			ENTITY::_0x9587913B9E772D29(iParam0, 0);
		}
	}
	else if (func_816(iParam5, 129))
	{
		if (func_816(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0, vParam1, func_816(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
	}
	else
	{
		ENTITY::_0x203BEFFDBE12E96A(iParam0, vParam1, fParam4, 1, func_816(iParam5, 32), 1);
	}
	if (bVar4)
	{
		if (!func_816(iParam5, 16))
		{
			PED::_0x7DE9692C6F64CFE8(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3, 0, 0);
		}
		if (func_971(iParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PHYSICS::_0x0348469DAA17576C(iVar6);
			if (!func_816(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, 1, 0);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PACKAGE_INDEX(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 1);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0) == Global_35 && !func_816(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
}

int func_522(int iParam0, int iParam1)
{
	var uVar0;

	if (!func_478(iParam0))
	{
		return 0;
	}
	if (iParam1 == 296923297 || iParam1 == 1237718549)
	{
		return 1;
	}
	uVar0 = func_972(iParam0, iParam1);
	return uVar0;
}

void func_523(int iParam0, int iParam1, bool bParam2)
{
	if (!func_478(iParam0))
	{
		return;
	}
	if (!func_522(iParam0, iParam1))
	{
		return;
	}
	(Global_40.f_4942[iParam0 /*60*/])->f_3 = iParam1;
	if (bParam2)
	{
		func_515(iParam0, 25, 1);
	}
}

void func_524(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (func_973(iParam2))
		{
			iVar0 = func_974(iParam2, -1);
			if (func_975(iParam1, iVar0))
			{
				if (func_976(iParam1, iVar0))
				{
					if (func_977(iParam1, iVar0))
					{
						PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam1, "metaped_outfit_request"), iParam1, true, false);
						func_978(iParam1);
					}
				}
				else
				{
					PED::_0x1902C4CFCC5BE57C(iParam1, iVar0);
				}
			}
		}
		func_979(iParam0, iParam1, 0);
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
			func_515(iParam0, 66, 0);
		}
	}
}

void func_525(int iParam0)
{
	func_980(iParam0);
	func_981(iParam0, 0);
}

void func_526(int iParam0, int iParam1)
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

void func_527(int iParam0, int iParam1, bool bParam2)
{
	if (!func_511(iParam0))
	{
		return;
	}
	func_982(&(((*Global_1360165)[iParam0 /*1157*/])->f_13), iParam1, bParam2);
}

void func_528(int iParam0)
{
	func_515(iParam0, 36, 1);
}

int func_529(int iParam0)
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

void func_530(int iParam0, int iParam1)
{
	if (!func_511(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 11:
			if ((Global_40.f_4942[iParam0 /*60*/])->f_3 == -1341683964)
			{
				func_983(iParam1, joaat("weapon_revolver_cattleman_sadie"), 0, 0, 2, 1, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
				func_983(iParam1, joaat("weapon_revolver_cattleman_sadie_dualwield"), 0, 0, 3, 1, 1, 1056964608, 1065353216, -1, 0, 1, 0, 0);
			}
			break;
	}
}

void func_531(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_478(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (Global_40.f_4942[iParam0 /*60*/] || iParam1);
}

void func_532(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;

	switch (func_141())
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

void func_533(int iParam0)
{
	if (func_141() == 3 && iParam0 == 1)
	{
		func_984(1163459288, 0, 0);
		func_985(1163459288, 0, -1f, 0, 1, 0.4f, 1, 0);
	}
	if (func_141() == 3 && iParam0 == 0)
	{
		func_984(58833085, 0, 0);
		func_984(-629053815, 0, 0);
		func_985(58833085, 0, 1f, 0, 1, 0.4f, 1, 0);
		func_985(-629053815, 0, -1f, 0, 1, 0.4f, 1, 0);
	}
}

void func_534(int iParam0, bool bParam1)
{
	if (!func_511(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_902(&(((*Global_1360165)[iParam0 /*1157*/])->f_12), 1))
		{
			func_527(iParam0, 1, 0);
		}
	}
	func_527(iParam0, 16, bParam1);
}

void func_535(int iParam0)
{
	func_527(iParam0, 8, 0);
}

int func_536(int iParam0, bool bParam1)
{
	if (!func_478(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_NAMESPACE48::_0x800DF3FC913355F3(((*Global_1360165)[iParam0 /*1157*/])->f_1))
		{
			func_986(iParam0);
		}
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_1;
}

void func_537(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (func_478(iParam0))
	{
		iVar1 = func_172(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			iVar0 = PED::GET_PED_MAX_HEALTH(iVar1);
			PED::SET_PED_CONFIG_FLAG(iVar1, 179, true);
			func_987(iParam0);
		}
	}
	if (func_512(iParam0, 5, 1))
	{
		PED::SET_PED_CONFIG_FLAG(func_172(iParam0), 137, true);
	}
}

void func_538(int iParam0, bool bParam1)
{
	if (!func_511(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(func_172(iParam0), 204, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(func_172(iParam0), 204, false);
	}
}

void func_539(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	var uVar0;
	int iVar1;

	if (!func_478(iParam0))
	{
		return;
	}
	if (func_337(iParam0))
	{
		if (!func_177(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_512(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	uVar0 = func_536(iParam0, 0);
	if (!MISC::_0x716F17F8A0419F95(uVar0))
	{
		return;
	}
	iVar1 = func_172(iParam0);
	if (((ENTITY::DOES_ENTITY_EXIST(iVar1) && func_988(iParam0) < 10000f) && !bParam3) && !CAM::IS_SCREEN_FADED_OUT())
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
		func_515(iParam0, 2, 1);
	}
	else
	{
		func_989(iParam0);
		func_515(iParam0, 1, 1);
	}
}

void func_540(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_478(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (&Global_40.f_4942[iParam0 /*60*/] - (Global_40.f_4942[iParam0 /*60*/] && iParam1));
}

void func_541(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (!func_511(iParam1))
	{
		return;
	}
	iVar0 = func_131(iParam1);
	if (func_479(iParam1))
	{
		if (!func_990(iParam1))
		{
			return;
		}
	}
	func_410(iParam1, 39, 1);
	func_991(iParam1, 64, 0);
	((*Global_1360165)[iParam1 /*1157*/])->f_70.f_11 = 0;
	func_991(iParam1, 8, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!bParam2)
		{
			func_991(iParam1, 512, 1);
			PED::SET_PED_KEEP_TASK(iVar0, true);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			func_515(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_992(iParam1, 0, 1, 1, 1);
		}
	}
}

void func_542(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_510() - fParam1);
	func_993(uParam0, 1);
	func_994(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_543()
{
	return func_264(32);
}

void func_544(int iParam0)
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
	func_995(iParam0, &iVar7, &iVar8, &iVar9, &iVar10);
	if (func_227(180573150, 1) || func_227(-404697685, 1))
	{
		func_996(iParam0, &iVar7, &iVar8, &iVar9, &iVar10);
	}
	else if (func_227(1305416676, 1))
	{
		func_997(iParam0, &iVar7, &iVar8, &iVar9, &iVar10);
	}
	else if (func_227(-1837343824, 1))
	{
		func_998(iParam0, &iVar7, &iVar8, &iVar9, &iVar10);
	}
	if (((func_861(22) || func_862(22)) || func_861(23)) || func_862(23))
	{
		if (((((iParam0 == 26 || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 31)
		{
			iVar9 = 6;
			iVar10 = 0;
		}
	}
	if (iVar7 < iVar9)
	{
		bVar6 = func_999(iVar7, iVar8, iVar9, iVar10);
	}
	else if (iVar9 < iVar7)
	{
		bVar6 = func_1000(iVar7, iVar8, iVar9, iVar10);
	}
	else
	{
		bVar6 = func_1001(iVar7, iVar8, iVar9, iVar10);
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
				fVar12 = (func_169(&((Global_1357549->f_12[iParam0 /*14*/])->f_11)) / fVar0);
				if (fVar12 > 1f)
				{
					fVar12 = 1f;
				}
				OBJECT::_0xF49574E2332A8F06(iVar11, fVar12);
				func_1002(iVar11, fVar12);
				if (MISC::ABSF((OBJECT::_0xFA3B61EC249B4674(iVar11) - 1f)) < 0.005f)
				{
					OBJECT::_0xF49574E2332A8F06(iVar11, 1f);
				}
			}
			else
			{
				(Global_1357549->f_12[iParam0 /*14*/])->f_9 = 1;
				func_175(&((Global_1357549->f_12[iParam0 /*14*/])->f_11), 0);
			}
		}
		else if ((Global_1357549->f_12[iParam0 /*14*/])->f_9 == 1)
		{
			(Global_1357549->f_12[iParam0 /*14*/])->f_9 = 0;
			func_176(&((Global_1357549->f_12[iParam0 /*14*/])->f_11));
			OBJECT::_0xF49574E2332A8F06(iVar11, 1f);
			func_1002(iVar11, 1f);
		}
	}
	else if (OBJECT::_0xFA3B61EC249B4674(iVar11) > (Global_1357549->f_12[iParam0 /*14*/])->f_6)
	{
		if ((Global_1357549->f_12[iParam0 /*14*/])->f_9 == 1)
		{
			fVar12 = (1f - (func_169(&((Global_1357549->f_12[iParam0 /*14*/])->f_11)) / fVar0));
			if (fVar12 < 0f)
			{
				fVar12 = 0f;
			}
			OBJECT::_0xF49574E2332A8F06(iVar11, fVar12);
			func_1002(iVar11, fVar12);
			if (MISC::ABSF((OBJECT::_0xFA3B61EC249B4674(iVar11) - (Global_1357549->f_12[iParam0 /*14*/])->f_6)) < 0.005f)
			{
				OBJECT::_0xF49574E2332A8F06(iVar11, (Global_1357549->f_12[iParam0 /*14*/])->f_6);
			}
		}
		else
		{
			(Global_1357549->f_12[iParam0 /*14*/])->f_9 = 1;
			func_175(&((Global_1357549->f_12[iParam0 /*14*/])->f_11), 0);
		}
	}
	else if ((Global_1357549->f_12[iParam0 /*14*/])->f_9 == 1)
	{
		(Global_1357549->f_12[iParam0 /*14*/])->f_9 = 0;
		func_176(&((Global_1357549->f_12[iParam0 /*14*/])->f_11));
		ENTITY::_0x56E0735D6273B227(iVar11, 1);
		OBJECT::_0xF49574E2332A8F06(iVar11, (Global_1357549->f_12[iParam0 /*14*/])->f_6);
		func_1002(iVar11, (Global_1357549->f_12[iParam0 /*14*/])->f_6);
	}
}

char* func_545(int iParam0)
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

char* func_546(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_1003(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

var func_547(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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

int func_548()
{
	return &Global_1899515;
}

bool func_549()
{
	return func_364(10, 0) >= 4;
}

void func_550(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_1004(*iParam0);
	iVar1 = func_1005(*iParam0);
	iVar2 = func_1006(*iParam0);
	iVar3 = func_631(*iParam0);
	iVar4 = func_632(*iParam0);
	iVar5 = func_1007(*iParam0);
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
	iVar6 = func_1008(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_1008(iVar1, iVar0);
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
	func_1009(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_551(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_553((*uParam0)[iVar0 /*257*/], (*uParam1)[iVar0]))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_552(int iParam0)
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

int func_553(var uParam0, var uParam1)
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

bool func_554(int iParam0, int iParam1)
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

void func_555(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

int func_556(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return 0;
	}
	if (func_1010(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_1011(iParam0))
	{
		return 0;
	}
	if (func_1012(iParam0))
	{
		return 0;
	}
	if ((Global_1898164->f_163 && !func_1013(iParam0, 1)) || func_634(32768))
	{
		if (!func_1013(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return 0;
		}
	}
	if (!func_1014())
	{
		return 0;
	}
	return 1;
}

void func_557(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

int func_558(int iParam0)
{
	return iParam0;
}

void func_559(int iParam0)
{
	if (!func_1015(iParam0))
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

bool func_560(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1) != 0;
}

void func_561(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_1016(iParam0, 1);
	func_1017(iParam0, 1);
	func_1018(iParam0, 128);
}

int func_562(char* sParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_560(iVar0, 2))
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
		func_561(iVar1, iParam1, sParam0, 0, 3, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam3, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 0, iParam2, 1704213876, 0);
		return iVar1;
	}
	return 0;
}

bool func_563(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam2 && !func_204(iParam0))
	{
		return false;
	}
	iVar0 = func_558(iParam0);
	return HUD::_UIPROMPT_HAS_STANDARD_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam1);
}

void func_564(int iParam0, int iParam1)
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
		if (!func_206((Local_18.f_3057[iParam1 /*21*/])->f_9))
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
	if (func_204((Local_18.f_3057[iParam0 /*21*/])->f_2))
	{
		func_205(&((Local_18.f_3057[iParam0 /*21*/])->f_2), 1, 1);
	}
	if (func_204((Local_18.f_3057[iParam0 /*21*/])->f_1))
	{
		func_205(&((Local_18.f_3057[iParam0 /*21*/])->f_1), 1, 1);
	}
	func_214(iParam1);
	func_216(iParam1);
	HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, 1f, 2, 1, 799218720, (Local_18.f_3057[iParam1 /*21*/])->f_20, 0);
}

char* func_565()
{
	return "SHOP_BACK";
}

int func_566(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
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
		if (func_560(iVar0, 2))
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
		func_561(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

int func_567()
{
	if (!func_488(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return 0;
	}
	else if (!func_488(((*Global_1347702)[66 /*49*/])->f_15, 1))
	{
		return 1;
	}
	else if (!func_488(((*Global_1347702)[67 /*49*/])->f_15, 1))
	{
		return 2;
	}
	else if (!func_488(((*Global_1835011)[38 /*74*/])->f_1, 1))
	{
		return 3;
	}
	else if (!func_488(((*Global_1347702)[68 /*49*/])->f_15, 1))
	{
		return 4;
	}
	else if (!func_488(((*Global_1835011)[59 /*74*/])->f_1, 1))
	{
		return 5;
	}
	else if (!func_488(((*Global_1835011)[67 /*74*/])->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

int func_568()
{
	int iVar0;
	int iVar1;
	struct<5> Var2;
	struct<4> Var7;

	iVar0 = func_399();
	iVar1 = func_1019(iVar0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return 0;
	}
	if (!func_646(iVar1, 0))
	{
		return 0;
	}
	if (!func_1020(iVar1))
	{
		return 0;
	}
	Var2 = { func_885(0) };
	Var2.f_4 = -352578118;
	Var7 = { func_1021(iVar1, Var2, Var2.f_4, 0) };
	if (!func_1022(iVar1, &Var7, &Var2, -1, -142743235, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_569(int iParam0)
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

int func_570(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<5> Var2;
	var uVar7;

	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar1 = func_1019(iVar0);
	if (!func_646(iVar1, 0))
	{
		return 0;
	}
	if (!func_1020(iVar1))
	{
		return 0;
	}
	Var2 = { func_885(0) };
	Var2.f_4 = -352578118;
	if (func_1023(iVar1, &Var2, 1, 0, 0))
	{
		return 0;
	}
	if (!func_1024(iVar1, &uVar7, &Var2, 1, 752097756, 0))
	{
		return 0;
	}
	return 1;
}

bool func_571(int iParam0)
{
	int iVar0;
	int iVar1;

	func_1025(iParam0, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(Global_1357549->f_1866[iVar0]), iVar1);
}

void func_572(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_1327590->f_19547)
	{
		(Global_1327590->f_19547[iParam0 /*5*/])->f_4 = 1;
	}
}

bool func_573(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 35);
}

void func_574(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_575(int iParam0, int iParam1)
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

Vector3 func_576(int iParam0)
{
	if (!func_1026(iParam0))
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

Vector3 func_577(int iParam0)
{
	if (!func_1026(iParam0))
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return 2941.929f, 1320.927f, 46.2401f;
			return 2936.9f, 1281.7f, 43.6529f;
			return 2931.596f, 1282.839f, 44.6783f;
			return -5227.45f, -3468.19f, -20.49293f;
			return -5228.75f, -3468.28f, -21.57f;
			return -753.4219f, -1285.01f, 43.20049f;
			return -785.1682f, -1324.179f, 46.3505f;
			return -814.4116f, -1367.243f, 43.7509f;
			return -868.3356f, -1366.207f, 44.75311f;
			return -875.0186f, -1328.058f, 44.00846f;
			return -764.2743f, -1292.576f, 44.3442f;
			return -813.7f, -1374.1f, 44.2f;
			return 1417.288f, 273.5687f, 88.4881f;
			return 1522.305f, 442.8598f, 89.6785f;
			return 1525.407f, 442.7721f, 90.6467f;
			return 2161.5f, -618.5f, 43f;
			return -1092.88f, -575.69f, 81.41f;
			return -1094.41f, -577.51f, 81.41f;
			return 1294.084f, -1303.102f, 76.0418f;
			return 1297.423f, -1278.412f, 75.65752f;
			return 1319.43f, -1142.08f, 81.41f;
			return 1327.036f, -1292.386f, 77.2488f;
			return 1326.268f, -1323.129f, 78.1929f;
			return 1228.508f, -1296.796f, 77.6347f;
			return 1232.206f, -1300.197f, 77.8496f;
			return 1209.053f, -193.1814f, 101.9785f;
			return 2657.466f, -1180.96f, 53.2785f;
			return 2819.495f, -1331.29f, 45.514f;
			return 2721.24f, -1231.66f, 49.37f;
			return 2851.2f, -1202.3f, 49.046f;
			return 2828.087f, -1315.179f, 47.4196f;
			return 2714.586f, -1286.893f, 50.3211f;
			return 2508.212f, -1449.654f, 48.41523f;
			return 2747.906f, -1397.089f, 47.1107f;
			return 2746.599f, -1394.278f, 46.918f;
			return 2554.144f, -1166.025f, 54.3474f;
			return 2842.45f, -1227.66f, 46.66f;
			return 2817.64f, -1325.011f, 47.00512f;
			return 2836.992f, -1305.805f, 45.6964f;
			return 2832.02f, -1225.563f, 46.6422f;
			return 2734.174f, -1119.755f, 50.10792f;
			return -1753.404f, -392.557f, 155.2576f;
			return -1792.444f, -385.412f, 160.6924f;
			return -1812.343f, -370.618f, 161.8814f;
			return -1819.88f, -561.8194f, 157.2323f;
			return -1763.78f, -385.1118f, 156.7401f;
			return -307.9643f, 773.6048f, 117.7031f;
			return -308.18f, 812.19f, 117.99f;
			return 0f, 0f, 0f;
			return -338.8647f, 767.4334f, 115.5628f;
			return -286.9307f, 809.6714f, 120.6565f;
			return -323.5066f, 799.6924f, 118.973f;
			return -279.273f, 781.7448f, 118.7954f;
			return -369.4457f, 786.6935f, 115.9904f;
			return -176.3f, 630.1f, 115.331f;
			return -174.0662f, 633.9207f, 115.109f;
			return -272.7182f, 785.6115f, 117.4202f;
			return -326.1232f, 771.9214f, 116.436f;
			return 2947.64f, 1344.901f, 43.899f;
			return 2683.84f, -1399.642f, 45.37881f;
			return -805.72f, -1330.5f, 42.67f;
			return -1773.314f, -393.9122f, 155.5647f;
			return 1332.55f, -1298.679f, 75.35602f;
			return 3023.859f, 561.206f, 46.7352f;
			return 2986.003f, 567.9055f, 45.337f;
			return 2967.273f, 796.7416f, 52.5948f;
			return -1302.951f, 394.6608f, 94.3817f;
			return -1300.283f, 400.4247f, 94.3817f;
			return -1299.608f, 401.5503f, 94.97269f;
			return -5518.071f, -2906.217f, -2.7513f;
			return -5488.293f, -2937.662f, 0.6299f;
			return -5506.691f, -2968.343f, -1.2586f;
			return -5509.019f, -2947.435f, -2.8934f;
			return -5520.701f, -3044.427f, -1.40419f;
			return -3684.342f, -2626.877f, -12.5497f;
			return -2842.211f, 137.3398f, 183.8268f;
			return -1005.934f, -540.8262f, 97.9502f;
			return 2076.835f, 1000.829f, 111.4973f;
			return -2251.034f, -1916.911f, 115.9488f;
			return -142.072f, -23.5242f, 95.0883f;
			return 675.3091f, -1251.233f, 43.0152f;
			return 1875.2f, -1859.182f, 41.8f;
			return 2366.084f, 1347.122f, 105.1305f;
			return 0f, 0f, 0f;
		}

bool func_578(int iParam0, int iParam1)
{
	return func_932((Global_1914319->f_3[iParam0 /*446*/])->f_5, iParam1);
}

int func_579(int iParam0)
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

int func_580(int iParam0, int iParam1)
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

int func_581(int iParam0, var uParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_1027())
	{
		iVar2 = func_1027();
	}
	iVar5 = func_1028(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_945(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_945(iVar6) == 0)
			{
				return func_1029(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_945(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_945(iVar6) == 0)
			{
				return func_1029(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_1029(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

float func_582(int iParam0)
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

int func_583(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_578(iParam0, 16384) && !func_1030(iParam0, 1))
	{
		return 1;
	}
	if (!func_402(iParam1))
	{
		return 0;
	}
	iVar0 = func_1031(iParam1);
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
		func_1032(iParam1, (Global_1914319->f_3[iParam0 /*446*/])->f_25, 1);
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
		func_1032(iParam1, (Global_1914319->f_3[iParam0 /*446*/])->f_28, 1);
		VOLUME::_0x4A8FEFC43FD8AC9B((Global_1914319->f_3[iParam0 /*446*/])->f_28, 0, 1);
	}
	(Global_1914319->f_3[iParam0 /*446*/])->f_21 = iParam1;
	(Global_1914319->f_3[iParam0 /*446*/])->f_23 = iVar0;
	return 1;
}

void func_584(int iParam0)
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
			if (!func_862(29))
			{
				if (func_143(29) && func_567() <= func_1033(29))
				{
					StringCopy(Global_1393529->f_288[2 /*8*/], "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
					StringCopy(Global_1393529->f_288[1 /*8*/], "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
					return;
				}
			}
			if (!func_862(3))
			{
				if (func_143(3) && func_567() <= func_1033(3))
				{
					StringCopy(Global_1393529->f_288[2 /*8*/], "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
					StringCopy(Global_1393529->f_288[1 /*8*/], "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
					return;
				}
			}
			if (!func_862(25))
			{
				if (func_143(25) && func_567() <= func_1033(25))
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

void func_585(int iParam0)
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

void func_586()
{
	StringCopy(Global_1393529->f_288[18 /*8*/], "1035_U_M_M_SDCUSTOMVENDOR_01", 64);
}

void func_587()
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

void func_588()
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

void func_589(int iParam0)
{
	if (!func_1026(iParam0))
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
			if (!func_592(iParam0, 2))
			{
				func_753(iParam0, 2);
			}
			break;
	}
}

void func_590(int iParam0, int iParam1)
{
	if (!func_573(iParam0))
	{
		return;
	}
	(Global_1914319->f_3[iParam0 /*446*/])->f_7 = ((Global_1914319->f_3[iParam0 /*446*/])->f_7 - ((Global_1914319->f_3[iParam0 /*446*/])->f_7 && iParam1));
}

void func_591(int iParam0, int iParam1)
{
	if (!func_573(iParam0))
	{
		return;
	}
	(Global_1914319->f_3[iParam0 /*446*/])->f_7 = ((Global_1914319->f_3[iParam0 /*446*/])->f_7 || iParam1);
}

bool func_592(int iParam0, int iParam1)
{
	if (!func_1026(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_15614[iParam0] && iParam1) != 0;
}

int func_593(int iParam0)
{
	int iVar0;

	if (!func_1026(iParam0))
	{
		return 0;
	}
	if (iParam0 == 41 || iParam0 == 82)
	{
		return 0;
	}
	iVar0 = func_1034(iParam0);
	if ((((((((((iVar0 == 10 || iVar0 == 4) || iVar0 == 17) || iVar0 == 31) || iVar0 == 18) || iVar0 == 19) || iVar0 == 22) || iVar0 == 12) || iVar0 == 13) || iVar0 == 14) || iVar0 == 32)
	{
		return 1;
	}
	return 0;
}

bool func_594(int iParam0, int iParam1)
{
	if (!func_1026(iParam0))
	{
		return false;
	}
	return (Global_20709.f_2246[iParam0] && iParam1) != 0;
}

void func_595(int iParam0, int iParam1)
{
	if (!func_1026(iParam0))
	{
	}
	else
	{
		Global_20709.f_2246[iParam0] = (Global_20709.f_2246[iParam0] || iParam1);
	}
}

void func_596(int iParam0, int iParam1)
{
	if (!func_1026(iParam0))
	{
	}
	else
	{
		Global_20709.f_2246[iParam0] = (&Global_20709.f_2246[iParam0] - (Global_20709.f_2246[iParam0] && iParam1));
	}
}

void func_597(int iParam0)
{
	if (iParam0 != -1)
	{
		Global_1914319->f_15922 = iParam0;
	}
}

void func_598(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_253)
	{
		func_1035(iVar0, uParam0);
		iVar0++;
	}
	MISC::CLEAR_BIT(&(uParam0->f_254), 4);
}

void func_599(var uParam0)
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

void func_600(var uParam0)
{
	DATAFILE::_DATAFILE_UNLOAD(uParam0->f_2);
	MISC::CLEAR_BIT(&(uParam0->f_254), 1);
	MISC::CLEAR_BIT(&(uParam0->f_254), 2);
}

int func_601(int iParam0, int iParam1)
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

int func_602(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return (func_364(4, 0) - 1);
		case 1:
			return (func_364(3, 0) - 1);
		case 2:
			return (func_364(5, 0) - 1);
		case 3:
			return (func_364(10, 0) - 1);
		default:
			break;
	}
	return 0;
}

void func_603(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = func_1036(iParam0);
	if (!DATAFILE::_0x4F9E3ED7617123AC(iVar0))
	{
		return;
	}
	uParam1->f_2 = DATAFILE::_0xD97D8D905F1562F2(iVar0);
	MISC::SET_BIT(&(uParam1->f_254), 1);
}

bool func_604(var uParam0)
{
	return DATAFILE::_0x603AC35FD4602C76(uParam0->f_2);
}

void func_605(int iParam0, int iParam1, int iParam2, var uParam3)
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
	iVar10 = func_1037(iParam0);
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

void func_606(var uParam0, var uParam1)
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
			if (!func_608((uParam0->f_9[iVar0 /*9*/])->f_8))
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

void func_607(var uParam0, var uParam1, var uParam2)
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
			if (!func_608((uParam0->f_9[iVar1 /*9*/])->f_8))
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
				func_1038(iVar1, uParam0);
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

int func_608(int iParam0)
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

int func_609()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<14> Var3;
	struct<12> Var17;
	int iVar31;
	int iVar32;

	Var3 = { func_1039(0, 1426626782, -1591664384, -1591664384, 0, 0) };
	if (func_1040(&Var3, &iVar1, &iVar2, 0))
	{
		Var17.f_9 = -1591664384;
		iVar31 = 0;
		while (iVar31 < iVar2)
		{
			if (func_1041(&Var17, iVar31, iVar1, iVar2))
			{
				if (func_941(Var17.f_4))
				{
					iVar0 = (iVar0 + Var17.f_11);
					if (func_1042(Var17.f_4))
					{
						iVar0 = (iVar0 - 1);
					}
					if (iVar0 > 30)
					{
						iVar32 = (iVar0 - 30);
						func_1043(Var17.f_4, 2, iVar32, -142743235);
						iVar0 = 30;
					}
				}
			}
			iVar31++;
		}
		func_1044(iVar1);
	}
	return iVar0;
}

float func_610()
{
	return 5f;
}

float func_611(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_612()
{
	return (ANIMSCENE::_0x25557E324489393C(Global_43799) && ANIMSCENE::_0xCBFC7725DE6CE2E0(Global_43799, 0));
}

bool func_613(int iParam0)
{
	if (!func_402(iParam0))
	{
		return false;
	}
	return ((*Global_1895087)[iParam0 /*3*/])->f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_614(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_402(iParam0))
	{
		return;
	}
	if (!func_368(iParam0, 1))
	{
		return;
	}
	if (!func_368(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_613(iParam0)) && func_1045(iParam0))
	{
		return;
	}
	func_845(iParam0, 1);
	func_846(iParam0);
	if (func_839(func_403(iParam0)))
	{
		iVar0 = func_840(iParam0);
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
		func_845(iParam0, 16);
	}
	if (func_368(iParam0, 128) && !bParam3)
	{
		func_369(iParam0, 0);
	}
}

void func_615(int iParam0, bool bParam1)
{
	if (!func_1026(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (!func_592(iParam0, 1024))
		{
			func_753(iParam0, 1024);
			INVENTORY::_0x9B4E793B1CB6550A();
		}
	}
	else if (func_592(iParam0, 1024))
	{
		func_752(iParam0, 1024);
		INVENTORY::_0x9B4E793B1CB6550A();
	}
	func_1046(iParam0);
}

var func_616(int iParam0)
{
	return (Global_1914319->f_3[iParam0 /*446*/])->f_408;
}

void func_617(int iParam0)
{
	if (func_1047(iParam0) && func_1048())
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iParam0);
	}
}

void func_618(int iParam0)
{
	(Global_1914319->f_3[iParam0 /*446*/])->f_7 = 0;
}

void func_619(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_573(iParam0))
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

int func_620(int iParam0)
{
	if ((iParam0 == 22 || iParam0 == 37) && !func_142())
	{
		return 1;
	}
	if (iParam0 == 61)
	{
		return 1;
	}
	return 0;
}

int func_621()
{
	if (Global_16)
	{
		return 0;
	}
	if (!func_1049())
	{
		return 0;
	}
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1934266->f_78.f_55))
	{
		return 0;
	}
	if (func_126(-1 ^ 9, 0, 1))
	{
		return 0;
	}
	return 1;
}

char* func_622(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5, var uParam6)
{
	char* sVar0;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1894899->f_162)))
	{
		sVar0 = func_1050(Global_1894899->f_162);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && uParam4)
	{
		sVar0 = func_1052(func_1051(Global_36));
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		if (!func_1053(iParam0) || func_669(45))
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

bool func_623(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

int func_624(int iParam0)
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

int func_625(int iParam0)
{
	if (!func_623(iParam0))
	{
		return -1;
	}
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_40.f_358[iParam0 /*12*/]);
	}
	return &(Global_1058888->f_42266[iParam0 /*12*/]);
}

int func_626(int iParam0)
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

char* func_627(int iParam0)
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

bool func_628(int iParam0, int iParam1)
{
	if (!func_358(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return (Global_40.f_431[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_42339[iParam0] && iParam1) != 0;
}

bool func_629(int iParam0, int iParam1)
{
	if (!func_623(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return ((Global_40.f_358[iParam0 /*12*/])->f_5 && iParam1) != 0;
	}
	return ((Global_1058888->f_42266[iParam0 /*12*/])->f_5 && iParam1) != 0;
}

bool func_630(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23117[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0 /*11*/] && iParam1) != 0;
}

int func_631(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_632(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

float func_633(float fParam0)
{
	return ((fParam0 * 1.8f) + 32f);
}

bool func_634(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

int func_635(int iParam0)
{
	int iVar0;

	if (func_1053(iParam0))
	{
		if (!func_669(45))
		{
			return 0;
		}
	}
	iVar0 = func_370(iParam0);
	if (func_659())
	{
		if (!func_488(((*Global_1835011)[3 /*74*/])->f_1, 1))
		{
			return (iVar0 == 7 || iVar0 == 6);
		}
	}
	return 1;
}

void func_636(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

struct<2> func_637(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_638(var uParam0, var uParam1, int iParam2)
{
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

bool func_639(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_640(int iParam0)
{
	Global_1327479->f_3 = iParam0;
}

int func_641()
{
	return Global_1310750->f_16037;
}

bool func_642(int iParam0, int iParam1)
{
	if (!func_639(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/] && iParam1) != 0;
}

int func_643(int iParam0)
{
	if (!func_639(iParam0))
	{
		return 0;
	}
	if (func_1054(64) && func_1055(iParam0))
	{
		return 1;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_46;
}

int func_644(int iParam0)
{
	if (!func_639(iParam0))
	{
		return 0;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_47;
}

void func_645(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_639(&(Global_1310750->f_13321[iParam0 /*9*/])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID((Global_1310750->f_13321[iParam0 /*9*/])->f_5, 523);
	((*Global_1310750)[iVar0 /*111*/])->f_48 = 0;
	func_1056(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

int func_646(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_647(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_56() == -1)
	{
		if (func_1057(iParam0) && func_1058(iParam0))
		{
			func_1059(iParam0, iParam1, 1, &iParam2, iParam3);
			return 0;
		}
	}
	else if (iParam0 == 1259508039)
	{
		iParam2 = 1;
	}
	else if (iParam0 == joaat("weapon_unarmed"))
	{
		return 0;
	}
	return 1;
}

int func_648(int iParam0, var uParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	*uParam1 = iParam2;
	func_1060(iParam0, uParam1);
	Var0 = { func_1061(iParam0, 0, 1) };
	iVar5 = func_1062(iParam0, &Var0, 0, 0);
	iVar6 = func_1063(iParam0, 0);
	if ((iVar5 > 1 && !func_1064()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_667(iParam0, -2051813666))
		{
			func_202(583, 1);
		}
		else
		{
			func_202(582, 0);
		}
	}
	if (func_1023(iParam0, &Var0, *uParam1, 0, 0))
	{
		if (iVar6 < iVar5)
		{
			*uParam1 = (iVar5 - iVar6);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_649(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_1065(iParam0, -949239683))
	{
		case -1565009253:
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
			Global_1935496->f_59.f_6 = 1;
			Global_1935496->f_59.f_7 = 0;
			Global_1935496->f_59.f_1 = iParam0;
			Global_1935496->f_59.f_5 = MISC::GET_GAME_TIMER();
			break;
	}
}

int func_650(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_646(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_666(iParam0);
	if (iVar0 == 307971639 || (iParam1 && iVar0 == -427144552))
	{
		iVar1 = func_1066(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_1067(iParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_491(bParam2), iParam0, 0);
	return iVar2;
}

bool func_651(int iParam0)
{
	if (func_56() != -1)
	{
		return false;
	}
	return func_652(iParam0) != 0;
}

int func_652(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < func_1068())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_1069(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_653(int iParam0)
{
	return COLLECTION::_0x6052B4DE6657684F(iParam0);
}

int func_654(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < func_1068())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_653(iVar0))
		{
			if (func_694(func_1069(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_655(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	func_1070(48);
	func_323(0, -1);
}

int func_656(int iParam0)
{
	if (func_56() != -1)
	{
		return 0;
	}
	return func_488(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
}

int func_657(int iParam0)
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, iParam0);
}

int func_658(int iParam0)
{
	return COLLECTION::_0x93F2E7B5DB85657B(-2076669067, iParam0);
}

int func_659()
{
	return 1;
	if (Global_1572887->f_12 == 0)
	{
		return 1;
	}
	return Global_40.f_1;
}

int func_660(int iParam0)
{
	if (func_56() != -1)
	{
		return 0;
	}
	return func_488(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
}

int func_661(int iParam0)
{
	if (func_56() != -1)
	{
		return 0;
	}
	if (!func_474(iParam0))
	{
		return 0;
	}
	return func_928(((*Global_1347702)[iParam0 /*49*/])->f_15);
}

int func_662()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_694(func_1071(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_663(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	vector3 vVar6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;

	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_659() && (func_661(38) || func_656(38)))
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_02";
				sVar5 = "COL_CC_INTRO";
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
				iVar13 = 38816757; /* GXTEntry: "Smoking and Other Hobbies" */
			}
			else
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_01";
				sVar5 = "COL_CC_INTRO_PRE";
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
				iVar13 = 578982838; /* GXTEntry: "A New Hobby" */
			}
			sVar4 = "COL_CC_TITLE";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = 12;
			iVar14 = -2076669067;
			break;
		case 39:
			if (func_659() && (func_661(39) || func_656(39)))
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_02";
				sVar5 = "COL_DB_INTRO";
				iVar9 = 3;
				iVar11 = 1162303770; /* GXTEntry: "Deborah MacGuiness" */
				iVar13 = -1223580455; /* GXTEntry: "A Test of Faith" */
			}
			else
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_01";
				sVar5 = "COL_DB_INTRO_PRE";
				iVar9 = 1;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
				iVar13 = 349797279; /* GXTEntry: "Digging up the Past" */
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_DB_TITLE";
			vVar6 = { 122.7758f, -185.4978f, 116.4383f };
			iVar10 = 30;
			iVar14 = -440187297;
			break;
		case 43:
			if (iParam3 == -1791518714)
			{
				sVar0 = "MISSION_RCEXO1";
				sVar3 = "RCEXO1_DESC";
				iVar10 = 30;
			}
			else if (iParam3 == -2087881550)
			{
				sVar0 = "MISSION_RCEXO2";
				sVar3 = "RCEXO2_DESC";
				iVar10 = 37;
			}
			else if (iParam3 == 1908068621)
			{
				sVar0 = "MISSION_RCEXO3";
				sVar3 = "RCEXO3_DESC";
				iVar10 = 40;
			}
			else if (iParam3 == 1611247019)
			{
				sVar0 = "MISSION_RCEXO4";
				sVar3 = "RCEXO4_DESC";
				iVar10 = 50;
			}
			else if (iParam3 == 1319635688)
			{
				sVar0 = "MISSION_RCEXO5";
				sVar3 = "RCEXO5_DESC";
				iVar10 = 25;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_EX_TITLE";
			sVar5 = "COL_EX_INTRO";
			vVar6 = { 2585.668f, -1009.616f, 44.97972f };
			iVar9 = func_1072(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963; /* GXTEntry: "Duchesses and Other Animals" */
			break;
		case 41:
			if (func_659() && (func_661(41) || func_656(41)))
			{
				sVar0 = "MISSION_RCFSH2";
			}
			else
			{
				sVar0 = "MISSION_RCFSH1";
			}
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_RARE_FISH_01";
			sVar4 = "COL_LF_TITLE";
			sVar5 = "COL_LF_INTRO";
			vVar6 = { 337.3075f, -684.5404f, 41.8362f };
			iVar9 = 13;
			iVar14 = 1995362678;
			iVar11 = -273196610; /* GXTEntry: "Jeremy Gill" */
			iVar13 = -1666208710; /* GXTEntry: "A Fisher of Fish" */
			break;
		case 49:
			if (func_659() && (func_661(49) || func_656(49)))
			{
				sVar0 = "MISSION_RCRKF2";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_02";
				sVar5 = "COL_RC_INTRO";
				iVar9 = 3;
				iVar11 = -781551276; /* GXTEntry: "Francis Sinclair" */
				iVar13 = -170865073; /* GXTEntry: "Geology for Beginners" */
			}
			else
			{
				sVar0 = "MISSION_RCRKF1";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_01";
				sVar5 = "COL_RC_INTRO_PRE";
				iVar9 = 1;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
				iVar13 = 1974744712; /* GXTEntry: "Rock Carvings" */
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_RC_TITLE";
			vVar6 = { -2178.646f, -245.6886f, 191.1569f };
			iVar10 = 10;
			iVar14 = 2103522376;
			break;
		case 51:
			sVar0 = "MISSION_RCTAX1";
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_TAXIDERMY_01";
			sVar4 = "COL_TX_TITLE";
			sVar5 = "COL_TX_INTRO";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = func_1072(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931; /* GXTEntry: "Ms. L Hobbs" */
			iVar13 = -1424865411; /* GXTEntry: "A Better World, A New Friend" */
			break;
	}
	sVar2 = func_1073(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar12 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar12 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (func_1074(iParam0, iVar13, iVar14))
	{
	}
	if (func_1075(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_1076(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_1077(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_1078(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_1079(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_664(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_665(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_659() && (func_661(38) || func_656(38)))
			{
				sVar1 = "COL_CC_INTRO";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
			}
			else
			{
				sVar1 = "COL_CC_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
			}
			iVar6 = 38816757; /* GXTEntry: "Smoking and Other Hobbies" */
			break;
		case 39:
			sVar0 = "COL_DB_TITLE";
			sVar3 = "COL_DB_FOUND";
			iVar7 = -440187297;
			if (func_659() && (func_661(39) || func_656(39)))
			{
				sVar1 = "COL_DB_INTRO";
				iVar4 = 1162303770; /* GXTEntry: "Deborah MacGuiness" */
			}
			else
			{
				sVar1 = "COL_DB_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
			}
			iVar6 = -1223580455; /* GXTEntry: "A Test of Faith" */
			break;
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			sVar0 = "COL_EX_TITLE";
			sVar3 = "COL_EX_ITEMS_COLLECTED";
			sVar1 = "COL_EX_INTRO";
			iVar7 = -1531394072;
			iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar6 = 911890963; /* GXTEntry: "Duchesses and Other Animals" */
			break;
		case 41:
			sVar0 = "COL_LF_TITLE";
			sVar3 = "COL_LF_CAUGHT";
			sVar1 = "COL_LF_INTRO";
			iVar7 = 1995362678;
			iVar4 = -273196610; /* GXTEntry: "Jeremy Gill" */
			iVar6 = -1666208710; /* GXTEntry: "A Fisher of Fish" */
			break;
		case 49:
			sVar0 = "COL_RC_TITLE";
			sVar3 = "COL_RC_FOUND";
			iVar7 = 2103522376;
			if (func_659() && (func_661(49) || func_656(49)))
			{
				sVar1 = "COL_RC_INTRO";
				iVar4 = -781551276; /* GXTEntry: "Francis Sinclair" */
			}
			else
			{
				sVar1 = "COL_RC_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
			}
			iVar6 = -170865073; /* GXTEntry: "Geology for Beginners" */
			break;
		case 51:
			sVar0 = "COL_TX_TITLE";
			sVar3 = "COL_TX_CARCASS_COLLECTED";
			sVar1 = "COL_TX_INTRO";
			iVar7 = 678508515;
			iVar4 = 1986498931; /* GXTEntry: "Ms. L Hobbs" */
			iVar6 = -1424865411; /* GXTEntry: "A Better World, A New Friend" */
			break;
	}
	if (iParam5 == 2)
	{
		sVar0 = "MISSION_COMPLETE";
		iVar4 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar5 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar5 = MISC::GET_HASH_KEY("toast_log_blips");
		sVar1 = "COL_ALL_LOG_UPDATED";
	}
	sVar2 = "COL_CTX_PLAYER_LOG";
	if (iVar7 == -2076669067)
	{
		if (func_659() && (func_661(38) || func_656(38)))
		{
			iVar6 = 38816757; /* GXTEntry: "Smoking and Other Hobbies" */
		}
		else
		{
			iVar6 = 578982838; /* GXTEntry: "A New Hobby" */
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 0)
		{
			iVar5 = iParam1;
			iVar4 = iParam2;
		}
		if (iParam5 == 2)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			iParam3 = 12;
			iParam4 = 12;
			func_1080(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_1080(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_1082(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, func_1081(func_658(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_1080(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_1080(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_659() && (func_661(39) || func_656(39)))
		{
			iVar6 = -1223580455; /* GXTEntry: "A Test of Faith" */
		}
		else
		{
			iVar6 = 349797279; /* GXTEntry: "Digging up the Past" */
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_1080(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1080(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_659() && (func_661(49) || func_656(49)))
		{
			iVar6 = -170865073; /* GXTEntry: "Geology for Beginners" */
		}
		else
		{
			iVar6 = 1974744712; /* GXTEntry: "Rock Carvings" */
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_1080(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1080(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_1080(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1080(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_666(int iParam0)
{
	vector3 vVar0;

	if (!func_646(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_667(int iParam0, int iParam1)
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

int func_668(int iParam0, int iParam1)
{
	if (!func_646(iParam0, 0))
	{
		return 0;
	}
	return INVENTORY::_0x245D07651B1D183B(iParam0, iParam1);
}

int func_669(int iParam0)
{
	if (!func_1083(iParam0))
	{
		return 0;
	}
	return func_1084(iParam0);
}

void func_670(int iParam0)
{
	if (!func_1083(iParam0))
	{
		return;
	}
	func_1085(iParam0);
	func_1086(iParam0);
}

int func_671(int iParam0, bool bParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case -1639263599:
			iVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case 1222378998:
			iVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case 2074469742:
			iVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case 480079517:
			iVar0 = joaat("weapon_thrown_dynamite");
			break;
		case 840671577:
			iVar0 = joaat("weapon_thrown_dynamite");
			break;
		case joaat("ammo_molotov"):
			iVar0 = joaat("weapon_thrown_molotov");
			break;
		case -2006166057:
			iVar0 = joaat("weapon_thrown_molotov");
			break;
		case 1235846615:
			iVar0 = joaat("weapon_thrown_tomahawk");
			break;
		case -228768324:
			iVar0 = joaat("weapon_thrown_tomahawk_ancient");
			break;
		case -1411922943:
			iVar0 = joaat("weapon_thrown_tomahawk");
			break;
		case -834103244:
			iVar0 = joaat("weapon_thrown_tomahawk");
			break;
		case 424030678:
			iVar0 = joaat("weapon_melee_hatchet");
			break;
		case 446901936:
			iVar0 = joaat("weapon_melee_hatchet_hunter");
			break;
		case -1092841802:
			iVar0 = joaat("weapon_melee_hatchet_hunter_rusted");
			break;
		case -1452241321:
			iVar0 = joaat("weapon_melee_ancient_hatchet");
			break;
		case -1188697038:
			iVar0 = joaat("weapon_melee_cleaver");
			break;
		case 1671758975:
			iVar0 = joaat("weapon_melee_hatchet_double_bit");
			break;
		case -893514737:
			iVar0 = joaat("weapon_melee_hatchet_double_bit_rusted");
			break;
		case -2063089161:
			iVar0 = joaat("weapon_melee_hatchet_hewing");
			break;
		case -452897925:
			iVar0 = joaat("weapon_melee_hatchet_viking");
			break;
		default:
			break;
	}
	if (func_646(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_1087(iVar0) || func_1088(iVar0))
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

int func_672(int iParam0, bool bParam1)
{
	if (!func_646(iParam0, 0))
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

int func_673(bool bParam0)
{
	if (func_56() == -1)
	{
		return 1;
	}
	return INVENTORY::_0x0FBBFFC891A97C81(func_491(bParam0));
}

int func_674(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> Var0;
	int iVar5;
	struct<10> Var6;
	int iVar28;
	struct<4> Var29;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	if (WEAPON::_0x959383DCD42040DA(bParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, 0))
	{
		Var0 = { func_1061(bParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_1089((375 + iVar28), 1);
			if (func_1090(bParam0, &Var0, iVar5, 0))
			{
				if (func_1091(bParam0, &Var6, iVar5))
				{
					Var29 = { func_1021(bParam0, Var0, iVar5, 0) };
					func_1022(bParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_673(0))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, 0))
					{
						return 0;
					}
					func_675(WEAPON::_0x5C2EA6C44F515F34(bParam0), iParam1, iParam6);
					func_1092(bParam0, iParam1);
					return 1;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, 0))
				{
					return 0;
				}
				if (iParam1 > 0)
				{
				}
				WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return 1;
			}
		}
	}

int func_675(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_677(iParam0))
	{
		return 0;
	}
	if (!func_673(0))
	{
		return 0;
	}
	WEAPON::_0x106A811C6D3035F3(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

int func_676(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	var uVar1;
	int iVar6;
	int iVar7;

	bVar0 = func_672(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(bVar0))
	{
		if (func_56() == -1)
		{
			func_266(bVar0);
			if (iParam1 == 1248274121)
			{
				func_1093(bVar0);
			}
		}
		if (!func_1023(iParam0, &uVar1, 1, 0, 0))
		{
			func_1059(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_1094(bVar0);
			if (WEAPON::_0x6AD66548840472E5(bVar0))
			{
				func_674(bVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (bVar0 == joaat("weapon_fishingrod") || bVar0 == joaat("weapon_kit_binoculars"))
			{
				func_674(bVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (bVar0 == joaat("weapon_lasso"))
			{
				func_674(bVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_0x959383DCD42040DA(bVar0))
			{
				if (bVar0 == joaat("weapon_melee_knife_john") && !func_142())
				{
					return 0;
				}
				if (WEAPON::_0x2C83212A7AA51D3D(iParam0))
				{
				}
				else if (!func_1095(bVar0))
				{
					func_674(bVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_674(bVar0, WEAPON::_0xD3750CCC00635FC2(bVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_0xD955FEE4B87AFA07(bVar0))
			{
				iVar7 = func_213(Global_35, 2, 0, 1);
				if ((((func_726(iVar7) && !Global_43890) && iVar7 != bVar0) && !func_694(-1185145312, 1, 0)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_35, iVar7);
				}
				if (func_726(iVar7) && func_694(-1185145312, 1, 0))
				{
					if (!func_674(bVar0, iVar6, bParam3, bParam4, 3, 1, iParam1, 0))
					{
						return 0;
					}
				}
				else if (!func_674(bVar0, iVar6, bParam3, bParam4, 0, 1, iParam1, 0))
				{
					return 0;
				}
			}
			else if (!func_674(bVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_202(480, 1);
	}
	return 1;
}

bool func_677(int iParam0)
{
	return WEAPON::_0x1F7977C9101F807F(iParam0);
}

int func_678(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_677(iParam0))
	{
		return 0;
	}
	iVar4 = WEAPON::_0x7AA043F6C41D151E(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	if (func_726(iVar4))
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
	if (func_694(611073244, 1, 0) && iParam2 == -897553835)
	{
		iVar6 = BUILTIN::CEIL((IntToFloat(iVar6) * 1.1f));
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
		func_713(func_1096(iParam0), func_712(iParam0), 1);
		return 0;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_56() == -1)
		{
			if (func_488(((*Global_1835011)[14 /*74*/])->f_1, 1))
			{
				func_202(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_673(0))
	{
		if (func_675(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return 1;
		}
	}
	else
	{
		return func_718(iParam0, *iParam1, iParam2);
	}
	return 0;
}

void func_679(int iParam0)
{
	var uVar0;

	if ((iParam0 == -615217896 && !func_1097()) || iParam0 != -615217896)
	{
		if (func_1098(Global_35, iParam0, &uVar0))
		{
			func_697(PLAYER::PLAYER_PED_ID(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415:
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_703();
			break;
		case -832719552:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_703();
			break;
		case -1941112926:
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_703();
			break;
		case -615217896:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_701();
			break;
		case -121629511:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_699();
			break;
	}
}

void func_680(int iParam0)
{
	switch (iParam0)
	{
		case -224110471:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_699();
			break;
		case 1289585739:
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_700();
			break;
		case 1441506783:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 780305678:
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case -935153695:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_701();
			break;
		case 655868243:
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_702();
			break;
		case 1299744282:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 1631240196:
			Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
			break;
		case 1768869276:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.15f);
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.15f);
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.15f);
			func_703();
			break;
		case -569248339:
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_1099();
			break;
		case -1196089647:
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case -982895431:
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_1100();
			break;
		case -1056342069:
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_681(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

void func_682(int iParam0)
{
	bool bVar0;

	bVar0 = func_667(iParam0, -2017733358);
	if (func_1101() < 3)
	{
		if (bVar0)
		{
			if (func_1103(func_1102(iParam0), iParam0))
			{
				func_713(79, func_712(func_1102(iParam0)), 1);
			}
			else
			{
				func_713(78, func_712(func_1102(iParam0)), 1);
			}
		}
		else
		{
			func_713(80, func_712(func_1104(iParam0)), 1);
		}
	}
}

int func_683()
{
	if (((((func_1105(839908568, 400) || func_1105(-1134030454, 400)) || func_1105(623353496, 400)) || func_1105(-344413337, 400)) || func_1105(-1664948962, 400)) || func_1105(1795228059, 400))
	{
		return 1;
	}
	return 0;
}

int func_684(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;

	iVar0 = func_1106(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_1107(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_1108(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_685(int iParam0)
{
	switch (iParam0)
	{
		case -625427311:
			func_663(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_665(51, 0, 0, 0, 0, -1, 0);
			func_1109(8192);
			break;
		case 581047644:
			func_663(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_665(51, 0, 0, 0, 0, -1, 0);
			func_1109(524288);
			break;
		case -644199619:
			func_663(39, 0, 0, 0, 0, 0, 1, 0);
			func_665(39, 0, 0, 0, 0, -1, 0);
			func_1110(16);
			break;
		case 684296857:
			func_663(41, 0, 0, 0, 0, 0, 1, 0);
			func_665(41, 0, 0, 0, 0, -1, 0);
			func_1111(8);
			break;
		case 466137807:
			func_663(49, 0, 0, 0, 0, 0, 1, 0);
			func_665(49, 0, 0, 0, 0, -1, 0);
			func_1112(16);
			break;
		case -1087522507:
			func_663(43, 0, 0, -1791518714, func_1113(1), 0, -1, 0);
			func_1114(1);
			break;
		case -405829000:
			func_663(43, 0, 0, -2087881550, func_1113(2), 0, -1, 0);
			func_1114(2);
			break;
		case 378660860:
			func_663(43, 0, 0, 1908068621, func_1113(4), 0, -1, 0);
			func_1114(4);
			break;
		case 1566111097:
			func_663(43, 0, 0, 1611247019, func_1113(8), 0, -1, 0);
			func_1114(8);
			break;
		case 1276007140:
			func_663(43, 0, 0, 1319635688, func_1113(16), 0, -1, 0);
			func_1114(16);
			break;
	}
}

void func_686(int iParam0)
{
	if (func_1115() == 1)
	{
		if (func_656(39))
		{
			func_202(342, 0);
		}
		else
		{
			func_202(343, 0);
			func_1110(1);
		}
	}
	if (func_1115() >= 30)
	{
		func_202(344, 0);
	}
	func_663(39, 0, 0, 0, 0, 0, -1, 0);
	func_665(39, 0, 0, func_1115(), 30, 1, 0);
}

void func_687(int iParam0)
{
	if (func_1116() == 1)
	{
		if (func_656(49))
		{
			func_202(409, 0);
		}
		else
		{
			func_202(410, 0);
			func_1112(1);
		}
	}
	if (func_1116() >= 10)
	{
		func_202(411, 0);
	}
	func_663(49, 0, 0, 0, 0, 0, -1, 0);
	func_665(49, 0, 0, func_1116(), 10, 1, 0);
}

void func_688(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 1369162587:
			COLLECTION::_0x3EA62E56F386C997(-949689219, 1);
			func_202(437, 0);
			func_202(440, 0);
			func_1117(-949689219, 444160793, &iVar0, 1, 0, 0);
			func_663(51, 0, 0, -949689219, iVar0, 0, -1, 0);
			func_665(51, 0, 0, iVar0, func_1072(-949689219, 20), 1, 0);
			func_1109(1);
			func_1118(-748969569, 0, 0);
			break;
		case 1610047510:
			COLLECTION::_0x3EA62E56F386C997(-1248968496, 1);
			func_1117(-1248968496, -1969404854, &iVar0, 1, 0, 0);
			func_663(51, 0, 0, -1248968496, iVar0, 0, -1, 0);
			func_665(51, 0, 0, iVar0, func_1072(-1248968496, 20), 1, 0);
			func_1109(8);
			break;
		case 1317879106:
			COLLECTION::_0x3EA62E56F386C997(1706369307, 1);
			func_1117(1706369307, -832850511, &iVar0, 1, 0, 0);
			func_663(51, 0, 0, 1706369307, iVar0, 0, -1, 0);
			func_665(51, 0, 0, iVar0, func_1072(1706369307, 20), 1, 0);
			func_1109(64);
			break;
		case 1062444751:
			COLLECTION::_0x3EA62E56F386C997(1520110311, 1);
			func_1117(1520110311, -100913452, &iVar0, 1, 0, 0);
			func_663(51, 0, 0, 1520110311, iVar0, 0, -1, 0);
			func_665(51, 0, 0, iVar0, func_1072(1520110311, 20), 1, 0);
			func_1109(512);
			break;
		case 754186760:
			COLLECTION::_0x3EA62E56F386C997(-1992824800, 1);
			func_202(438, 0);
			func_1117(-1992824800, 905173572, &iVar0, 1, 0, 0);
			func_663(51, 0, 0, -1992824800, iVar0, 0, -1, 0);
			func_665(51, 0, 0, iVar0, func_1072(-1992824800, 20), 1, 0);
			func_1109(32768);
			break;
		default:
			func_202(439, 0);
			break;
	}
}

void func_689()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(-1278339625) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(-1278339625, -1316535105, 1);
	}
}

void func_690(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (func_56() == -1)
	{
		if (!func_656(43))
		{
			if (iParam0 == 281887510)
			{
				func_202(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_202(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_202(352, 0);
			}
			else if (iParam0 == 728781265)
			{
				func_202(400, 0);
			}
		}
		else if (func_667(iParam0, 412399755))
		{
			func_1119(-1791518714);
			if (func_1120() == 0)
			{
				func_323(0, 10);
				iVar1 = func_1121(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_1122(iParam0) < func_1123(iParam0))
					{
						func_663(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_665(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_656(44))
		{
			if (iParam0 == -222563712)
			{
				func_202(354, 0);
			}
			else if (iParam0 == 1794857344)
			{
				func_202(399, 0);
			}
			else if (iParam0 == 1952409553)
			{
				func_202(401, 0);
			}
		}
		else if (func_667(iParam0, 709057512))
		{
			func_1119(-2087881550);
			if (func_1120() == 1)
			{
				func_323(0, 10);
				iVar1 = func_1121(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_1122(iParam0) < func_1123(iParam0))
					{
						func_663(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_665(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_656(45))
		{
			if (iParam0 == 2116770557)
			{
				func_202(359, 0);
			}
			else if (iParam0 == -651064726)
			{
				func_202(394, 0);
			}
			else if (iParam0 == -404270094)
			{
				func_202(395, 0);
			}
			else if (iParam0 == 2093126853)
			{
				func_202(398, 0);
			}
		}
		else if (func_667(iParam0, -1478961327))
		{
			func_1119(1908068621);
			if (func_1120() == 2)
			{
				func_323(0, 10);
				iVar1 = func_1121(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_1124(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0)) >= 25)
					{
						func_1125(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0), 1);
						func_1070(48);
					}
					if (func_1122(iParam0) < func_1123(iParam0))
					{
						func_663(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_665(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_1122(iParam0) < func_1123(iParam0))
					{
						func_663(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_665(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_656(46))
		{
			if (iParam0 == 2085530337)
			{
				func_202(356, 0);
			}
			else if (iParam0 == -150591160)
			{
				func_202(402, 0);
			}
			else if (iParam0 == -323969289)
			{
				func_202(404, 0);
			}
			else if (iParam0 == 1504361882)
			{
				func_202(406, 0);
			}
		}
		else if (func_667(iParam0, -1238404098))
		{
			func_1119(1611247019);
			if (func_1120() == 3)
			{
				func_323(0, 10);
				iVar1 = func_1121(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_1122(iParam0) < func_1123(iParam0))
					{
						func_663(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_665(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_656(47))
		{
			if (iParam0 == -1521783510)
			{
				func_202(396, 0);
			}
			else if (iParam0 == 1714875242)
			{
				func_202(397, 0);
			}
			else if (iParam0 == 927763737)
			{
				func_202(405, 0);
			}
			else if (iParam0 == 1019229063)
			{
				func_202(403, 0);
			}
		}
		else if (func_667(iParam0, 1160548794))
		{
			func_1119(1319635688);
			if (func_1120() == 4)
			{
				func_323(0, 10);
				iVar1 = func_1121(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_1122(iParam0) < func_1123(iParam0))
					{
						func_663(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_665(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_691(int iParam0)
{
	int iVar0;

	if (iParam0 == 2116770557)
	{
		if (!func_1124(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0)) >= 25)
		{
			func_1125(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0), 1);
			func_1070(48);
		}
	}
}

void func_692(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, 678508515, -1160144609);
		if (func_694(func_1126(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_1127(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_1128(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_693(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_56() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			iVar0 = MISC::_0x6F02B5E50511721E(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_684(0, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255:
			func_684(-949580860, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493:
			func_684(-1171997683, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627:
			func_684(-2140931002, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377:
			func_684(-1116228267, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086:
			func_684(2112896861, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -2001202686:
			func_684(-1915150712, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1111063991:
			func_684(994220262, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1576210101:
			func_684(-1388440107, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 675090918:
			func_684(-1531790128, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 355838765:
			func_684(1351791770, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -343824903:
			func_684(-161493966, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1142684684:
			func_684(668131102, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1243851340:
			if (!func_1129())
			{
				func_684(1330954593, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case -525490740:
			func_684(817681514, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1736635264:
			func_684(1404311868, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970:
			func_684(-175152067, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1027115192:
			func_684(-526915387, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1064332555:
			func_684(101362741, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1954478446:
			func_684(1458818027, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -518592739:
			func_684(-1957208512, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -2010073778:
			func_684(2066857461, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -700133011:
			func_684(803940201, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1415414735:
			func_684(-1717765429, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 2045548742:
			func_684(1379920914, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 830381058:
			func_684(447209691, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

bool func_694(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_646(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_666(iParam0);
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
		if (!func_1130(iParam0, 1))
		{
			return false;
		}
	}
	return func_650(iParam0, 0, bParam2) >= iParam1;
}

void func_695(int iParam0)
{
	if (func_656(41))
	{
		func_202(363, 0);
	}
	else
	{
		func_202(362, 0);
	}
	switch (iParam0)
	{
		case 323124696:
			func_1131(-1865241121);
			func_1132(-642026005);
			func_1133(-642026005);
			func_323(0, 10);
			break;
		case -2108314374:
			func_1131(2117142684);
			func_1132(-940584364);
			func_1133(-940584364);
			func_323(0, 10);
			break;
		case -1193798153:
			func_1131(-1409326024);
			func_1132(1972645282);
			func_1133(1972645282);
			func_323(0, 10);
			break;
		case -787702678:
			func_1131(-641744968);
			func_1132(1667205433);
			func_1133(1667205433);
			func_323(0, 10);
			break;
		case -804542901:
			func_1131(-946988203);
			func_1132(1362715885);
			func_1133(1362715885);
			func_323(0, 10);
			break;
		case -1696275132:
			func_1131(-646136018);
			func_1132(1053540370);
			func_1133(1053540370);
			func_323(0, 10);
			break;
		case -161595323:
			func_1131(-955835837);
			func_1132(-1100103852);
			func_1133(-1100103852);
			func_323(0, 10);
			break;
		case -1114363619:
			func_1131(-179276075);
			func_1132(-1409869209);
			func_1133(-1409869209);
			func_323(0, 10);
			break;
		case -368407134:
			func_1131(-492711560);
			func_1132(-1760235357);
			func_1133(-1760235357);
			func_323(0, 10);
			break;
		case 1997759228:
			func_1131(1764383959);
			func_1132(-138366827);
			func_1133(-138366827);
			func_323(0, 10);
			break;
		case 1265573293:
			func_1131(317501533);
			func_1132(-1261163843);
			func_1133(-1261163843);
			func_323(0, 10);
			break;
		case -1030441283:
			func_1131(817753087);
			func_1132(-963523016);
			func_1133(-963523016);
			func_323(0, 10);
			break;
		case -1490884871:
			func_1131(576606016);
			func_1132(560825326);
			func_1133(560825326);
			func_323(0, 10);
			break;
		case -395458616:
			func_1131(814934957);
			func_1132(858269539);
			func_1133(858269539);
			break;
	}
}

void func_696(int iParam0, int iParam1)
{
	var uVar0;

	func_1134(iParam0, iParam1, &uVar0);
}

int func_697(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;

	if (iParam3 == -358215195)
	{
		Var0 = { func_1061(iParam1, 1, 0) };
		iParam3 = func_1135(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_1136(iParam1, iParam2, func_949(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_1137(1, (func_56() == -1 && iParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (iParam8 && iParam1 != &Global_1946804->f_57[func_949(iParam3, 1) /*11*/])
			{
				func_1138(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_1139(32768) && iParam1 != &Global_1946804->f_57[func_949(iParam3, 1) /*11*/])
			{
				func_1140();
				func_1138(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_1138(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_1141(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_1138(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_1142(0);
			func_1143(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_1138(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

int func_698(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	bool bVar17;
	int iVar18;
	int iVar19;

	Var3.f_9 = -1591664384;
	bVar17 = false;
	*uParam0 = 0;
	iVar18 = func_213(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, 1, 0);
	iVar19 = func_213(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, 1, 0);
	if (func_1144("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_1041(&Var3, iVar2, iVar0, iVar1))
			{
				if (WEAPON::_0xD955FEE4B87AFA07(Var3.f_4))
				{
					if (!bParam1)
					{
						if (Var3.f_4 == iVar18 || Var3.f_4 == iVar19)
						{
						}
						else
						{
							if (!bVar17)
							{
								*uParam0 = Var3.f_4;
								bVar17 = true;
							}
						}
						iVar2++;
						func_1044(iVar0);
						if (*uParam0 != 0)
						{
							return 1;
						}
						return 0;
					}
				}
			}
		}
	}

void func_699()
{
	PLAYER::_0x11A7FF918EF6BC66(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_60));
}

void func_700()
{
	float fVar0;
	float fVar1;

	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	PLAYER::_0x497A6539BB0E8787(PLAYER::PLAYER_ID(), (1f - fVar0), (1f - fVar1));
}

void func_701()
{
	PLAYER::_0xE0D6C2A146A5C993(PLAYER::PLAYER_ID(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_702()
{
	PLAYER::_0xB427911EA6DFFEF3(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_63));
}

void func_703()
{
	func_1145();
	func_1146();
	func_1147();
}

void func_704(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	vector3 vVar4;

	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_JACK_HALL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -293111728; /* GXTEntry: "Jack Hall Gang Treasure" */
			break;
		case 666607663:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_HIGH_STAKES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = 1406403390; /* GXTEntry: "High Stakes Treasure" */
			break;
		case -220219788:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_POISONOUS_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = 917780075; /* GXTEntry: "The Poisonous Trail Treasure" */
			break;
		case 218622660:
			sVar3 = "COL_TH_SUB_TRESOR_DES_MORTS";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -857004026; /* GXTEntry: "Le Tresor des Morts Treasure" */
			break;
		case 390004462:
			sVar3 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -1108821735; /* GXTEntry: "The Elemental Trail Treasure" */
			break;
		case 6410548:
			sVar3 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -208135085; /* GXTEntry: "Landmarks Of Riches Treasure" */
			break;
	}
	switch (iParam1)
	{
		case 854119837:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_01";
			break;
		case -1292544588:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_02";
			break;
		case -1003325394:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_03";
			break;
		case -696705861:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_04";
			break;
		case -335460405:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_01";
			break;
		case 903797617:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_02";
			break;
		case 669728650:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_03";
			break;
		case 1595354593:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_04";
			break;
		case 1214120047:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_01";
			break;
		case 655769340:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_02";
			break;
		case 885316185:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_03";
			break;
		case -2016706455:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_04";
			break;
		case -1491419385:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_01";
			break;
		case 1809565830:
			sVar1 = "COL_TH_OBJ_RDL";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_02";
			break;
		case 2056119786:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_03";
			break;
		case -628873767:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_01";
			break;
		case -405421956:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_02";
			break;
		case -1108972386:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_03";
			break;
		case -878376933:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_04";
			break;
		case 1053716392:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_01";
			break;
		case 806507056:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_02";
			break;
		case 1571925350:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_03";
			break;
		case 1330352282:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_04";
			break;
		case 975496781:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_05";
			break;
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar0))
	{
		UILOG::_UILOG_REMOVE_ENTRY(3, iVar0);
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar0))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iVar0, vVar4, MISC::GET_HASH_KEY("COL_TH_TITLE"), MISC::GET_HASH_KEY(sVar2), 0);
	}
	if (bParam2)
	{
		switch (iParam0)
		{
			case 499813453:
				sVar1 = "COL_TH_JACK_HALL_COMPLETE";
				break;
			case 666607663:
				sVar1 = "COL_TH_HIGH_STAKES_COMPLETE";
				break;
			case -220219788:
				sVar1 = "COL_TH_POISONOUS_TRAIL_COMPLETE";
				break;
			case 218622660:
				sVar1 = "COL_TH_TRESOR_DES_MORTS_COMPLETE";
				break;
			case 390004462:
				sVar1 = "COL_TH_ELEMENTAL_TRAIL_COMPLETE";
				break;
			case 6410548:
				sVar1 = "COL_TH_LANDMARKS_OF_RICHES_COMPLETE";
				break;
		}
	}
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iVar0, MISC::GET_HASH_KEY(sVar1), sVar1, 0, 0, 0);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iVar0, 1);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iVar0, MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), MISC::GET_HASH_KEY("toast_log_blips"));
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iVar0, MISC::GET_HASH_KEY("MISSION_RETH"), MISC::GET_HASH_KEY("SP_MISSIONS_19"));
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iVar0, MISC::_CREATE_VAR_STRING(2, sVar3));
}

void func_705(int iParam0, bool bParam1)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;

	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_JACK_HALL";
			iVar0 = -293111728; /* GXTEntry: "Jack Hall Gang Treasure" */
			break;
		case 666607663:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_HIGH_STAKES";
			iVar0 = 1406403390; /* GXTEntry: "High Stakes Treasure" */
			break;
		case -220219788:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_POISONOUS_TRAIL";
			iVar0 = 917780075; /* GXTEntry: "The Poisonous Trail Treasure" */
			break;
		case 218622660:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_TRESOR_DES_MORTS";
			iVar0 = -857004026; /* GXTEntry: "Le Tresor des Morts Treasure" */
			break;
		case 390004462:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			iVar0 = -1108821735; /* GXTEntry: "The Elemental Trail Treasure" */
			break;
		case 6410548:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			iVar0 = -208135085; /* GXTEntry: "Landmarks Of Riches Treasure" */
			break;
	}
	sVar3 = "COL_CTX_PLAYER_LOG";
	if (bParam1)
	{
		sVar1 = "MISSION_COMPLETE";
	}
	UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar0);
	func_1080(MISC::_CREATE_VAR_STRING(2, sVar1), MISC::_CREATE_VAR_STRING(2, sVar2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), 1433015236, MISC::_CREATE_VAR_STRING(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_706(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_707(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_708(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_709(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_710(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_711(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_712(int iParam0)
{
	if (!func_646(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_713(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_555(iParam0, &iVar0, &iVar1);
	if (!func_556(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1013(iParam0, 1024))
	{
		return;
	}
	func_557(iVar0, iVar1);
	(Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/] = uParam1;
	((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 2;
}

void func_714(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_555(iParam0, &iVar0, &iVar1);
	if (!func_556(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1013(iParam0, 1024))
	{
		return;
	}
	func_557(iVar0, iVar1);
	(Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/] = iParam1;
	if (!bParam3)
	{
		((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 1;
	}
	else
	{
		((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 5;
	}
}

int func_715()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = COLLECTION::_0x5461C821D00FE15A(-2076669067, 0);
	if (iVar0 == func_1068())
	{
		return func_716();
	}
	iVar4 = (func_1068() - iVar0);
	iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_1068())
	{
		iVar1 = COLLECTION::_0x126CBEBBA46693CF(iVar2, -2076669067, 0);
		if (!func_1148(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_1069(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_716()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_1068());
	return func_1069(COLLECTION::_0x126CBEBBA46693CF(iVar0, -2076669067, 0));
}

void func_717(int iParam0)
{
	switch (*iParam0)
	{
		case -1424823393:
			*iParam0 = -885810591; /* GXTEntry: "Premium Cigarettes" */
			break;
		case 998010398:
			*iParam0 = -324053813; /* GXTEntry: "Chewing Tobacco" */
			break;
		case 1358243310:
			*iParam0 = 1463786584; /* GXTEntry: "Cigarettes" */
			break;
		case -541584777:
			*iParam0 = 206762213; /* GXTEntry: "Cocaine Gum" */
			break;
	}
}

int func_718(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_646(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_1061(iParam0, 0, 1) };
	Var5 = { func_1021(iParam0, Var0, Var0.f_4, 0) };
	return func_1024(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_719(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (func_56() != -1)
	{
		return;
	}
	switch (func_492(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_1149(81053684, 0) <= 0)
			{
				func_1138(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_1138(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_1150(iParam0);
			if (func_1151(iVar0))
			{
				func_1152(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_1138(30, iParam0, 0, 0, 0);
			}
			if (func_1153() == -2125499975 || func_1153() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_1138(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_1153() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024:
						func_1138(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_1154(-525676072, 0))
			{
				if (func_1155(-525676072, &iVar1))
				{
					func_1138(33, iVar1, 0, 0, 0);
				}
			}
			func_1138(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_1156(99217379))
		{
			func_697(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_670(24);
		if (func_698(&bVar2, 0))
		{
			func_674(bVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_720(int iParam0)
{
	if (func_667(iParam0, 943695443))
	{
		func_1157(0, iParam0);
	}
	else if (func_667(iParam0, -2096528786))
	{
		func_1157(1, iParam0);
	}
	else if (func_667(iParam0, -1094167013))
	{
		func_1157(2, iParam0);
	}
	else if (func_667(iParam0, 1936654645))
	{
		func_1157(3, iParam0);
	}
	else if (func_667(iParam0, 1306489306))
	{
		func_1157(4, iParam0);
	}
	else if (func_667(iParam0, 435762317))
	{
		func_1157(5, iParam0);
	}
	else if (func_667(iParam0, 1259363210))
	{
		func_1157(6, iParam0);
	}
	else if (func_667(iParam0, 881398259))
	{
		func_1157(7, iParam0);
	}
	else if (func_667(iParam0, -541549214))
	{
		func_1157(8, iParam0);
	}
	else if (func_667(iParam0, 130796156))
	{
		func_1157(-1, iParam0);
	}
}

int func_721(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;

	Var4.f_1 = 10;
	func_1158(&Var4, 1356624740);
	return func_1159(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_722(int iParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_646(iParam0, 0))
	{
		return Var0;
	}
	if (func_667(iParam0, -305066475))
	{
		if (func_56() == -1)
		{
			if (func_667(iParam0, -537818634))
			{
				return func_1160(189951448);
			}
			else
			{
				return func_1160(1176172851);
			}
		}
	}
	else if (func_667(iParam0, -537818634))
	{
		return func_1160(-963660207);
	}
	if (func_667(iParam0, 2084895747))
	{
		return func_1160(1694039471);
	}
	return Var2;
}

void func_723(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			if (func_56() == -1)
			{
				if (func_488(((*Global_1835011)[4 /*74*/])->f_1, 1))
				{
					func_202(109, 1);
				}
			}
			break;
	}
}

void func_724(int iParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_1162(func_1161(0));
	func_1164(MISC::_CREATE_VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_1163(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_725(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	char cVar2[32];
	int iVar6;
	struct<2> Var7;
	int iVar10;
	int iVar11;
	int iVar12;
	char* sVar13;
	int iVar14;
	char* sVar15;

	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_646(iParam0, 0))
	{
		return;
	}
	if (iParam0 == 1807503187)
	{
		return;
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (!func_1165())
	{
		func_1166(iParam0, iParam1, bParam2, iParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_1167(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || iParam4)
		{
			StringCopy(&cVar2, func_1167(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_668(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_666(iParam0);
	iVar10 = 0;
	iVar11 = 805880880;
	if ((iVar6 == 307971639 && iParam0 != 424030678) && iParam0 != -1188697038)
	{
		iVar10 = 622449822;
		iVar11 = 622449822;
	}
	if (iVar6 == -1013984273 || iVar6 == 658570475)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_1168(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (MISC::GET_HASH_KEY(Var7) == 121560594)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Var7))
	{
		return;
	}
	iVar12 = 109029619;
	sVar13 = "Transaction_Positive";
	iVar14 = 0;
	if (bVar0)
	{
		iVar12 = 619977481;
		sVar13 = "Transaction_Negative";
		iVar14 = 1;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_IS_OVERPOWERED_ITEM(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar12 = -856358433;
		}
		else
		{
			iVar12 = -1905433004;
		}
	}
	sVar15 = func_1003(MISC::_CREATE_VAR_STRING(10, &cVar2, MISC::_CREATE_VAR_STRING(0, func_712(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_667(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = MISC::_CREATE_VAR_STRING(0, func_712(iParam0));
	}
	func_1164(sVar15, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

bool func_726(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("weapon_unarmed"));
}

int func_727(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			func_855(Global_40.f_4283.f_6[iVar0 /*5*/], bParam1, bParam2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_728(int iParam0, char* sParam1, int iParam2)
{
	int iVar0;

	if (iParam2 && !func_204(iParam0))
	{
		return;
	}
	iVar0 = func_558(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, sParam1);
}

void func_729(int iParam0, int iParam1)
{
	Global_1357549->f_1672 = iParam0;
	Global_1357549->f_1673 = iParam1;
}

Vector3 func_730(int iParam0)
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

void func_731(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
	if (func_204(iParam0->f_6))
	{
		func_205(&(iParam0->f_6), 1, 1);
	}
	if (func_204(iParam0->f_1))
	{
		func_205(&(iParam0->f_1), 1, 1);
	}
}

void func_732(int iParam0, int iParam1)
{
	int iVar0;

	if (func_367(iParam1))
	{
		if (func_1169(Global_1934051->f_33))
		{
			iVar0 = func_1170(iParam1);
			if (iVar0 != 0)
			{
				MAP::_0x662D364ABF16DE2F(iParam0, iVar0);
			}
		}
	}
}

void func_733(int* iParam0, var uParam1)
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

	if (func_206(func_1171()) || func_1172(1) == 0)
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
	sVar6 = func_1173();
	sVar7 = func_1174(iParam0->f_35.f_491.f_1);
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_864))
	{
		STREAMING::REQUEST_MODEL(iParam0->f_33, false);
		if (STREAMING::HAS_MODEL_LOADED(iParam0->f_33))
		{
			iParam0->f_864 = OBJECT::CREATE_OBJECT(iParam0->f_33, func_1171(), true, true, false, false, true);
			ENTITY::SET_ENTITY_COORDS(iParam0->f_864, func_1171(), true, false, true, true);
			ENTITY::SET_ENTITY_ROTATION(iParam0->f_864, func_1175(), 2, true);
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
		if (func_324(Global_35, 0))
		{
			PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Global_35, 0, 1);
			PED::SET_PED_RESET_FLAG(Global_35, 258, true);
		}
		func_438(0);
	}
	if (iParam0->f_20 >= 4)
	{
		PAD::_0x2804658EB7D8A50B(4, 1492915442);
	}
	func_1176(iParam0, uParam1);
	func_1177(&(iParam0->f_35), iParam0->f_20);
	switch (iParam0->f_20)
	{
		case 0:
			if (func_204(iParam0->f_6))
			{
				if (func_217(iParam0->f_6, 1))
				{
					if (func_825())
					{
						INTERIOR::FORCE_ROOM_FOR_ENTITY(iParam0->f_864, INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35), INTERIOR::GET_ROOM_KEY_FROM_ENTITY(Global_35));
					}
					func_140(8192);
					func_140(67108864);
					iParam0->f_858 = 0;
					func_731(iParam0);
					func_1178(0);
					if (ANIMSCENE::_0x25557E324489393C(iParam0->f_18))
					{
						ANIMSCENE::RESET_ANIM_SCENE(iParam0->f_18, 0);
					}
					iParam0->f_18 = ANIMSCENE::_CREATE_ANIM_SCENE(sVar0, 0, sVar1, false, true);
					ANIMSCENE::LOAD_ANIM_SCENE(iParam0->f_18);
					func_1179(&(iParam0->f_35), 0);
					Global_1357549->f_1894 = 0;
					func_1180(&(iParam0->f_35.f_2), func_141());
					func_1181(&(iParam0->f_35));
					func_1182();
					MAP::DISPLAY_RADAR(false);
					WEAPON::_0xFCCC886EDE3C63EC(Global_35, 2, 1);
					MISC::SET_BIT(&(Global_1357549->f_1893), 0);
					func_1183(iParam0, 2);
				}
			}
			else if (func_12(8192) == 0)
			{
				if ((func_141() == 1 || func_141() == 2) || func_141() == 3)
				{
					if (func_1172(0))
					{
						iParam0->f_6 = func_737("LDGR_TITHE", -473983589, func_735(func_275()), func_736(), 3, 1, 0, 0, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
						func_210(iParam0->f_6, 736625733, 0, 1);
					}
				}
			}
			break;
		case 2:
			if ((((ANIMSCENE::_0x477122B8D05E7968(iParam0->f_18, 1, 0) && ANIMSCENE::_0x95531A4A20CCE7BC(iParam0->f_18, 0)) && func_1184(&(iParam0->f_35))) && func_1185()) && func_1178(1))
			{
				iParam0->f_5 = func_149();
				func_908(&(iParam0->f_35));
				func_1186(iParam0->f_35.f_2.f_1[0 /*237*/], iParam0->f_35.f_498[Global_1357549->f_1894 /*8*/], &(iParam0->f_35.f_531));
				if (func_1187(*(iParam0->f_35.f_498[Global_1357549->f_1894 /*8*/]), 0, &(iParam0->f_35.f_2), &(iParam0->f_35.f_491)) && iParam0->f_35.f_491.f_1 != -1)
				{
					func_1179(&(iParam0->f_35), 1);
					if (iParam0->f_35.f_491.f_5)
					{
						func_1188(&(iParam0->f_35.f_2.f_476), iParam0->f_35.f_491.f_1, *(iParam0->f_35.f_531[iParam0->f_35.f_491.f_1 /*30*/]));
					}
					else
					{
						func_1189(&(iParam0->f_35.f_2.f_476), iParam0->f_35.f_491.f_1, *(iParam0->f_35.f_531[iParam0->f_35.f_491.f_1 /*30*/]));
					}
				}
				else
				{
					func_1179(&(iParam0->f_35), 0);
				}
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_18, "player", Global_35, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_18, "CATALOG", iParam0->f_864, 0);
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iParam0->f_18, func_1190(iParam0->f_864), func_1175(), 2);
				ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0->f_18, sVar1);
				ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iParam0->f_18, "player", &(iParam0->f_21), false, 0, 2);
				func_1183(iParam0, 1);
			}
			break;
		case 1:
			if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, 713668775, 1) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Global_35, -208384378, 1) != 1)
			{
				func_1183(iParam0, 3);
			}
			break;
		case 3:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_18, sVar1))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0->f_18, sVar1, true);
				func_1183(iParam0, 4);
			}
			break;
		case 4:
			if (func_324(Global_35, 0))
			{
				TASK::CLEAR_PED_SECONDARY_TASK(Global_35);
				TASK::TASK_ENTER_ANIM_SCENE(Global_35, iParam0->f_18, "player", sVar1, 1069379748, 1, 128, 20000, -1082130432);
			}
			func_1191(&(iParam0->f_35));
			if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
			{
				iParam0->f_3 = 1;
				func_1192(&(iParam0->f_816), func_141(), 0, 1065353216);
			}
			else
			{
				iParam0->f_3 = 0;
			}
			func_1183(iParam0, 5);
			func_182(&(iParam0->f_813));
			break;
		case 5:
			if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, 1369124074, 1) != 1)
			{
				if (ANIMSCENE::_0x3FBC3F51BF12DFBF(iParam0->f_18) > 0.36f)
				{
					if (!iParam0->f_3)
					{
						func_1192(&(iParam0->f_816), func_141(), 0, 1065353216);
					}
					func_1193(&(iParam0->f_35), 0);
					MISC::SET_BIT(&(Global_1357549->f_1893), 1);
					func_1183(iParam0, 6);
					return;
				}
			}
			if (func_471(&(iParam0->f_813)) > 6000)
			{
				func_824(iParam0);
				func_1183(iParam0, 7);
			}
			break;
		case 6:
			func_1194(&(iParam0->f_816));
			HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-2019190071, "LDGR_TITHE", 1, 0, 0, 0);
			if (func_1195(iParam0))
			{
				return;
			}
			if (iParam0->f_35.f_772 && func_204(iParam0->f_35.f_1))
			{
				if (!func_1196(iParam0))
				{
					func_1198(&(iParam0->f_816), func_1197(func_141(), 1), 1);
				}
			}
			else if (func_1196(iParam0))
			{
				func_1198(&(iParam0->f_816), func_1197(func_141(), 0), 1);
			}
			func_1199(iParam0);
			if (func_217(iParam0->f_7, 1) && Global_1357549->f_1894 < 3)
			{
				func_1179(&(iParam0->f_35), 0);
				ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0->f_18, sVar2);
				func_1183(iParam0, 9);
			}
			if (func_217(iParam0->f_8, 1) && Global_1357549->f_1894 > 0)
			{
				func_1179(&(iParam0->f_35), 0);
				ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0->f_18, sVar3);
				func_1183(iParam0, 11);
			}
			if (func_217(iParam0->f_35.f_1, 1))
			{
				func_1200(&(iParam0->f_35), 1);
			}
			if (func_217(iParam0->f_9, 1))
			{
				func_1179(&(iParam0->f_35), 0);
				func_175(&(iParam0->f_810), 0);
				MISC::CLEAR_BIT(&(Global_1357549->f_1893), 1);
				ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0->f_18, sVar4);
				func_1183(iParam0, 8);
			}
			break;
		case 9:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_18, sVar2))
			{
				Global_1357549->f_1894++;
				func_1186(iParam0->f_35.f_2.f_1[1 /*237*/], iParam0->f_35.f_498[Global_1357549->f_1894 /*8*/], &(iParam0->f_35.f_531));
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0->f_18, sVar2, true);
				MISC::SET_BIT(&(Global_1357549->f_1893), 2);
				MISC::SET_BIT(&(Global_1357549->f_1893), 4);
				MISC::CLEAR_BIT(&(Global_1357549->f_1893), 1);
				func_1183(iParam0, 10);
			}
			break;
		case 11:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_18, sVar3))
			{
				Global_1357549->f_1894 = (Global_1357549->f_1894 - 1);
				func_1186(iParam0->f_35.f_2.f_1[0 /*237*/], iParam0->f_35.f_498[Global_1357549->f_1894 /*8*/], &(iParam0->f_35.f_531));
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0->f_18, sVar3, true);
				MISC::SET_BIT(&(Global_1357549->f_1893), 2);
				MISC::SET_BIT(&(Global_1357549->f_1893), 4);
				MISC::CLEAR_BIT(&(Global_1357549->f_1893), 1);
				func_1183(iParam0, 12);
			}
			break;
		case 10:
			if (ANIMSCENE::_0x3FBC3F51BF12DFBF(iParam0->f_18) > 0.09f)
			{
				func_1186(iParam0->f_35.f_2.f_1[0 /*237*/], iParam0->f_35.f_498[Global_1357549->f_1894 /*8*/], &(iParam0->f_35.f_531));
				iParam0->f_35.f_491.f_2 = 1;
				if (func_1187(*(iParam0->f_35.f_498[Global_1357549->f_1894 /*8*/]), iParam0->f_35.f_491.f_2, &(iParam0->f_35.f_2), &(iParam0->f_35.f_491)) && iParam0->f_35.f_491.f_1 != -1)
				{
					func_1179(&(iParam0->f_35), 1);
					if (iParam0->f_35.f_491.f_5)
					{
						func_1188(&(iParam0->f_35.f_2.f_476), iParam0->f_35.f_491.f_1, *(iParam0->f_35.f_531[iParam0->f_35.f_491.f_1 /*30*/]));
					}
					else
					{
						func_1189(&(iParam0->f_35.f_2.f_476), iParam0->f_35.f_491.f_1, *(iParam0->f_35.f_531[iParam0->f_35.f_491.f_1 /*30*/]));
					}
				}
				else
				{
					func_1179(&(iParam0->f_35), 0);
				}
				func_1183(iParam0, 13);
			}
			break;
		case 12:
			if (ANIMSCENE::_0x3FBC3F51BF12DFBF(iParam0->f_18) > 0.09f)
			{
				func_1186(iParam0->f_35.f_2.f_1[1 /*237*/], iParam0->f_35.f_498[Global_1357549->f_1894 /*8*/], &(iParam0->f_35.f_531));
				iParam0->f_35.f_491.f_2 = 0;
				if (func_1187(*(iParam0->f_35.f_498[Global_1357549->f_1894 /*8*/]), iParam0->f_35.f_491.f_2, &(iParam0->f_35.f_2), &(iParam0->f_35.f_491)) && iParam0->f_35.f_491.f_1 != -1)
				{
					func_1179(&(iParam0->f_35), 1);
					if (iParam0->f_35.f_491.f_5)
					{
						func_1188(&(iParam0->f_35.f_2.f_476), iParam0->f_35.f_491.f_1, *(iParam0->f_35.f_531[iParam0->f_35.f_491.f_1 /*30*/]));
					}
					else
					{
						func_1189(&(iParam0->f_35.f_2.f_476), iParam0->f_35.f_491.f_1, *(iParam0->f_35.f_531[iParam0->f_35.f_491.f_1 /*30*/]));
					}
				}
				else
				{
					func_1179(&(iParam0->f_35), 0);
				}
				func_1183(iParam0, 13);
			}
			break;
		case 13:
			if (ANIMSCENE::_0x3FBC3F51BF12DFBF(iParam0->f_18) > 0.15f)
			{
				MISC::CLEAR_BIT(&(Global_1357549->f_1893), 2);
				MISC::SET_BIT(&(Global_1357549->f_1893), 1);
				func_1183(iParam0, 6);
			}
			break;
		case 14:
			if (!func_168(&(iParam0->f_810)))
			{
				func_175(&(iParam0->f_810), 0);
			}
			if (func_471(&(iParam0->f_810)) > 2500)
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
					func_1183(iParam0, 15);
				}
			}
			break;
		case 15:
			if (ANIMSCENE::_0x477122B8D05E7968(iParam0->f_16, 1, 0) && ANIMSCENE::_0x95531A4A20CCE7BC(iParam0->f_16, 0))
			{
				if (ANIMSCENE::_0xCBFC7725DE6CE2E0(iParam0->f_16, 0))
				{
					func_1201(&(iParam0->f_816));
					MISC::SET_BIT(&(Global_1357549->f_1893), 3);
					MISC::CLEAR_BIT(&(Global_1357549->f_1893), 1);
					func_1186(iParam0->f_35.f_2.f_1[iParam0->f_35.f_491.f_2 /*237*/], iParam0->f_35.f_498[Global_1357549->f_1894 /*8*/], &(iParam0->f_35.f_531));
					if (func_1187(*(iParam0->f_35.f_498[Global_1357549->f_1894 /*8*/]), iParam0->f_35.f_491.f_2, &(iParam0->f_35.f_2), &(iParam0->f_35.f_491)) && iParam0->f_35.f_491.f_1 != -1)
					{
						if (iParam0->f_35.f_491.f_5)
						{
							func_1188(&(iParam0->f_35.f_2.f_476), iParam0->f_35.f_491.f_1, *(iParam0->f_35.f_531[iParam0->f_35.f_491.f_1 /*30*/]));
						}
						else
						{
							func_1189(&(iParam0->f_35.f_2.f_476), iParam0->f_35.f_491.f_1, *(iParam0->f_35.f_531[iParam0->f_35.f_491.f_1 /*30*/]));
						}
					}
					func_1183(iParam0, 16);
				}
				else
				{
					ANIMSCENE::START_ANIM_SCENE(iParam0->f_16);
					func_1202();
				}
			}
			break;
		case 16:
			if (func_1203(iParam0, 0) && ANIMSCENE::_0xCDC5512A407CF08D(iParam0->f_16))
			{
				ANIMSCENE::ABORT_ANIM_SCENE(iParam0->f_18, false);
				MISC::CLEAR_BIT(&(Global_1357549->f_1893), 3);
				iParam0->f_17 = -1;
				func_176(&(iParam0->f_810));
				if (ANIMSCENE::_0x25557E324489393C(iParam0->f_16))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(iParam0->f_16);
				}
				func_734(iParam0);
				func_824(iParam0);
				func_1183(iParam0, 7);
			}
			if (ANIMSCENE::_0x25557E324489393C(iParam0->f_16) && ANIMSCENE::_0xD8254CB2C586412B(iParam0->f_16, 0))
			{
				func_137(134217728);
				func_1179(&(iParam0->f_35), iParam0->f_35.f_491);
				if (iParam0->f_35.f_773 && iParam0->f_35.f_772)
				{
					func_1192(&(iParam0->f_816), func_141(), 1, 1065353216);
				}
				else
				{
					func_1192(&(iParam0->f_816), func_141(), 0, 1065353216);
				}
				MISC::CLEAR_BIT(&(Global_1357549->f_1893), 3);
				MISC::SET_BIT(&(Global_1357549->f_1893), 1);
				iParam0->f_17 = -1;
				func_176(&(iParam0->f_810));
				if (ANIMSCENE::_0x25557E324489393C(iParam0->f_16))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(iParam0->f_16);
				}
				func_1183(iParam0, 6);
			}
			break;
		case 7:
			ENTITY::SET_ENTITY_COORDS(iParam0->f_864, func_1171(), true, false, true, true);
			ENTITY::SET_ENTITY_ROTATION(iParam0->f_864, func_1175(), 2, true);
			func_1183(iParam0, 0);
			break;
		case 8:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_18, sVar4))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0->f_18, sVar4, true);
				func_1204(&(iParam0->f_35), 0);
				if (func_1205(64))
				{
					func_1206(64);
					func_1207(128);
				}
				func_1183(iParam0, 17);
			}
			break;
		case 17:
			if (func_169(&(iParam0->f_810)) > 0.75f)
			{
				func_176(&(iParam0->f_810));
				if (!iParam0->f_3)
				{
					func_1201(&(iParam0->f_816));
				}
			}
			if (ANIMSCENE::_0xCDC5512A407CF08D(iParam0->f_18))
			{
				func_734(iParam0);
				func_824(iParam0);
			}
			break;
	}
}

void func_734(int* iParam0)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_ROTATION(iParam0->f_866, 2) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam0->f_866, true, false) };
	if (func_149() > 1000)
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
	if (func_149() > 10000)
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

Vector3 func_735(int iParam0)
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

float func_736()
{
	if (func_141() == 3)
	{
		return 0.95f;
	}
	return 1.35f;
}

int func_737(char* sParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, bool bParam16)
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
	if (func_206(vParam2))
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
		if (func_560(iVar0, 2))
		{
			if (func_1208(vParam2, ((*Global_1945938)[iVar0 /*18*/])->f_6, 0.01f, 1) && iParam1 == ((*Global_1945938)[iVar0 /*18*/])->f_4)
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
		func_561(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216, 0, 0, 0, iParam15, bParam16);
		return iVar1;
	}
	return 0;
}

int func_738()
{
	if (((((Global_1357549->f_1672 == -774242862 || Global_1357549->f_1672 == -2100684454) || Global_1357549->f_1672 == -1167047117) || Global_1357549->f_1672 == 396444962) || Global_1357549->f_1672 == -498064062) || Global_1357549->f_1672 == 513694516)
	{
		return 1;
	}
	return 0;
}

void func_739(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	int iVar0;

	if (iParam3 && !func_204(iParam0))
	{
		return;
	}
	iVar0 = func_558(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, MISC::_CREATE_VAR_STRING(10, sParam1, MISC::_CREATE_VAR_STRING(0, sParam2)));
}

char* func_740()
{
	switch (func_141())
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

int func_741()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1327590->f_19547)
	{
		if ((Global_1327590->f_19547[iVar0 /*5*/])->f_1 >= 5)
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_735(func_275()), func_1209(&(Global_1327590->f_19547[iVar0 /*5*/])), true) < 3.25f)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_742()
{
	return Global_1327590->f_19745;
}

int func_743()
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

int func_744(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_560(iVar0, 2))
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
				func_561(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}

bool func_745(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_204(iParam0))
	{
		return false;
	}
	iVar0 = func_558(iParam0);
	return HUD::_UIPROMPT_IS_RELEASED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_746(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam2 && !func_204(iParam0))
	{
		return;
	}
	iVar0 = func_558(iParam0);
	func_1016(iVar0, iParam1);
}

int func_747(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_748()
{
	int iVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false);
	if (iVar0 == 1549070292 || iVar0 == 1030402560)
	{
		return 1;
	}
	return 0;
}

void func_749(int* iParam0)
{
	func_734(iParam0);
	if (func_324(Global_35, 0))
	{
		if (PED::_0xD5FE956C70FF370B(Global_35))
		{
			PED::_0x7DE9692C6F64CFE8(Global_35, false, 0, 0);
		}
		TASK::_TASK_USE_SCENARIO_POINT(Global_35, iParam0->f_863, 0, 0, 1, 0, 0, 0, -1082130432, 0);
	}
}

Vector3 func_750(int iParam0)
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

int func_751(var uParam0)
{
	if (func_32() == 1)
	{
		if (func_206(func_750(func_275())) == 0)
		{
			if (func_742() == 0)
			{
				if (func_669(27))
				{
					if (func_159() == 0)
					{
						if (func_1210(uParam0))
						{
							return 1;
						}
					}
					else
					{
						func_1211("Camp Butcher: mission running", uParam0);
					}
				}
				else
				{
					func_1211("Camp Butcher: locked feature", uParam0);
				}
			}
			else
			{
				func_1211("Camp Butcher: walk n talk vig active", uParam0);
			}
		}
		else
		{
			func_1211("Camp Butcher: no donation point", uParam0);
		}
	}
	else
	{
		func_1211("Camp Butcher: not in running state", uParam0);
	}
	return 0;
}

void func_752(int iParam0, int iParam1)
{
	if (!func_1026(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (&Global_1914319->f_15614[iParam0] - (Global_1914319->f_15614[iParam0] && iParam1));
}

void func_753(int iParam0, int iParam1)
{
	if (!func_1026(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (Global_1914319->f_15614[iParam0] || iParam1);
}

void func_754(var uParam0, int iParam1)
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

void func_755(int* iParam0)
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
	func_1212(538);
}

void func_756(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_1213(uParam0, iParam1, sParam2))
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

bool func_757(var uParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_1214(cParam1, uParam0);
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

int func_758(int iParam0, bool bParam1)
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

void func_759(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, int iParam10, var uParam11, var uParam12, bool bParam13)
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

float func_760(int iParam0)
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

float func_761(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

void func_762(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_763(int iParam0, bool bParam1)
{
	if (VOLUME::_0x92A78D0BEDB332A3((Global_1395601->f_5[iParam0 /*28*/])->f_23) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, (Global_1395601->f_5[iParam0 /*28*/])->f_23, true, 0))
	{
		return;
	}
	if (func_126(242, 1, 1))
	{
		bParam1 = false;
	}
	switch (iParam0)
	{
		case 8:
			func_1215(238680582, bParam1);
			break;
		case 9:
			func_1215(1555588463, bParam1);
			func_1215(1275780106, bParam1);
			func_1215(-833560428, bParam1);
			func_1215(-1601174253, bParam1);
			func_1215(-1295111793, bParam1);
			break;
		case 11:
			func_1215(-1482639045, bParam1);
			break;
		case 10:
			func_1215(254520182, bParam1);
			break;
		case 12:
			func_1215(1997650502, bParam1);
			break;
		case 13:
			func_1215(1335986638, bParam1);
			break;
		case 14:
			func_1215(1407130373, bParam1);
			break;
		case 16:
			func_1215(-1335647241, bParam1);
			break;
		case 15:
			func_1215(1731691513, !func_143(70));
			break;
	}
}

void func_764(int iParam0)
{
	if (!func_477(iParam0))
	{
		return;
	}
	Global_40.f_9384[iParam0 /*2*/] = 0;
}

void func_765(int iParam0, int iParam1)
{
	if (!func_477(iParam0))
	{
		return;
	}
	(Global_1395601->f_5[iParam0 /*28*/])->f_20 = iParam1;
}

Vector3 func_766(int iParam0)
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
			if (!func_776())
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

int func_767()
{
	int iVar0;

	if (!func_777())
	{
		return 0;
	}
	iVar0 = func_357(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (func_221(iVar0))
	{
		return 0;
	}
	return 1;
}

int func_768(var uParam0)
{
	char* sVar0;
	int iVar1;

	sVar0 = func_1217(func_1216(0));
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return func_208(MISC::_CREATE_VAR_STRING(10, "CAMP_HITCH_MAIN_NAME", sVar0), 1940454787, uParam0->f_5, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
	}
	iVar1 = func_1218(0);
	sVar0 = HUD::_GET_LABEL_TEXT_BY_HASH(MISC::GET_HASH_KEY(func_1219(iVar1)));
	return func_208(MISC::_CREATE_VAR_STRING(10, "CAMP_HITCH_STABLE", sVar0), 1940454787, uParam0->f_5, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
}

int func_769(int iParam0)
{
	int iVar0;

	iVar0 = func_558(iParam0);
	if (iVar0 < 0 || iVar0 >= 48)
	{
		return 0;
	}
	return ((*Global_1945938)[iVar0 /*18*/])->f_3;
}

int func_770()
{
	if (!func_1220())
	{
		return 0;
	}
	if (func_1222(func_1221()))
	{
		return 0;
	}
	switch (func_785())
	{
		case 0:
			if (func_1223() != 5)
			{
				return 0;
			}
			break;
		case 1:
			return 0;
	}
	return 1;
}

int func_771(int iParam0)
{
	iParam0 = func_794(iParam0);
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

void func_772(int iParam0, int iParam1, var uParam2)
{
	char* sVar0;
	int iVar1;
	int iVar2;

	sVar0 = func_1217(func_1216(iParam0));
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		iVar1 = func_1218(iParam0);
		sVar0 = HUD::_GET_LABEL_TEXT_BY_HASH(MISC::GET_HASH_KEY(func_1219(iVar1)));
	}
	iVar2 = func_1224(iParam0);
	if (iVar2 == -1 || iVar2 == 3)
	{
		return;
	}
	uParam2->f_12[iVar2] = func_208(MISC::_CREATE_VAR_STRING(10, "CAMP_HITCH_STABLE", sVar0), iParam1, uParam2->f_5, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
	HUD::_UIPROMPT_SET_GROUP(func_769(&(uParam2->f_12[iVar2])), 1842627646, 0);
}

int func_773()
{
	if (((func_771(0) != 0 || func_771(2) != 0) || func_771(3) != 0) || func_771(4) != 0)
	{
		return 1;
	}
	return 0;
}

int func_774(int iParam0)
{
	int iVar0;

	iParam0 = func_794(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_780(iParam0))
	{
		return 0;
	}
	iVar0 = func_357(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return 1;
	}
	return 0;
}

void func_775(var uParam0, var uParam1)
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

bool func_776()
{
	return func_143(70);
}

int func_777()
{
	if (!func_788())
	{
		return 0;
	}
	if (func_774(0))
	{
		return 0;
	}
	if (func_1225(0))
	{
		return 0;
	}
	return 1;
}

void func_778(int iParam0, int iParam1)
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
	func_1226(iParam0);
	func_1226(iParam0);
	func_1227(iParam0, iParam1);
	func_1228(iParam0, iParam1);
	func_1229(iParam0, iParam1);
	iVar1 = func_357(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_1230(iVar1);
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
	iVar3 = func_357(iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_1230(iVar3);
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
	func_791();
}

void func_779(int iParam0, int iParam1)
{
	iParam0 = func_794(iParam0);
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

int func_780(int iParam0)
{
	iParam0 = func_794(iParam0);
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

void func_781(int iParam0)
{
	int iVar0;
	int iVar1;

	iParam0 = func_794(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_780(iParam0))
	{
		return;
	}
	iVar0 = func_357(iParam0);
	func_1231(iParam0);
	if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
	if (PED::_0xAA9F048DCF69B6DC(iVar1))
	{
		if (!func_1232(iVar1))
		{
			PED::SET_PED_MODEL_IS_SUPPRESSED(iVar1, false);
		}
	}
	PED::DELETE_PED(&iVar0);
	func_1233(iParam0, 0);
	func_1234(iParam0);
}

void func_782(int iParam0)
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

void func_783(int iParam0)
{
	iParam0 = func_794(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1235(iParam0);
	func_1236(iParam0, 0);
	func_1237(iParam0, 0f);
}

void func_784(int iParam0)
{
	struct<2> Var0;
	int iVar2;
	int iVar3;

	iParam0 = func_794(iParam0);
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
	func_1238(&Var0);
	func_1239(iParam0, Var0);
	func_1240(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_15));
	func_1241(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_298));
	func_1242(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_356));
	func_1243(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_1244(iVar2, (Global_40.f_1095.f_1[iParam0 /*436*/])->f_398[iVar2 /*4*/]);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_1245(iVar3, (Global_40.f_1095.f_1[iParam0 /*436*/])->f_407[iVar3 /*4*/]);
		iVar3++;
	}
	func_1246(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_420));
	func_1247(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_422));
	func_1248(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_425));
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

int func_785()
{
	return Global_40.f_1095.f_3054.f_1;
}

void func_786(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

float func_787(int iParam0)
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
			if (!func_776())
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

int func_788()
{
	if (func_771(0) == 1)
	{
		return 1;
	}
	return 0;
}

int func_789(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_1249(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return 1;
	}
	return 0;
}

void func_790()
{
	int iVar0;
	struct<2> Var1;
	struct<6> Var3;

	iVar0 = func_357(0);
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
	Var1 = { func_1250(0) };
	Var3 = { func_1251() };
	func_1252(iVar0, &Var1, &Var3, 0);
	PLAYER::_0xD2CB0FB0FDCB473D(PLAYER::GET_PLAYER_INDEX(), iVar0);
	func_786(0);
	func_315(0);
}

void func_791()
{
	if (func_780(0))
	{
		func_1253(0);
	}
	if (func_780(1))
	{
		func_1253(1);
	}
	if (func_780(5))
	{
		func_1253(5);
	}
	if (func_780(6))
	{
		func_1226(6);
	}
}

Vector3 func_792(int iParam0, int iParam1)
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

int func_793(var uParam0, var uParam1)
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

	uParam1->f_10 = func_794(uParam1->f_10);
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
		if (func_206(uParam1->f_6))
		{
		}
	}
	bVar0 = func_659();
	if (*uParam1)
	{
		if (bVar0 && !func_488(((*Global_1835011)[4 /*74*/])->f_1, 1))
		{
			if (func_1254(5))
			{
				func_781(5);
				func_784(5);
				func_786(0);
				func_315(0);
			}
		}
	}
	if (func_1255(Global_36) == 8)
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_488(((*Global_1835011)[37 /*74*/])->f_1, 1)) && !func_488(((*Global_1835011)[43 /*74*/])->f_1, 1))
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_488(((*Global_1835011)[43 /*74*/])->f_1, 1)) && !func_488(((*Global_1835011)[44 /*74*/])->f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*uParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_357(iVar1);
	bVar3 = false;
	bVar4 = false;
	iVar5 = 0;
	if (func_780(iVar1))
	{
		bVar3 = true;
		if (func_774(iVar1))
		{
			bVar4 = true;
		}
		if (func_1225(iVar1))
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
				func_1256(uParam1->f_10);
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
			if (!func_1254(0) && func_1254(1))
			{
				func_778(1, 0);
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_313())
			{
				func_314();
			}
			func_786(0);
			func_315(0);
			func_317(uParam1->f_6);
		}
	}
	if (!func_780(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_795(uParam1->f_10) == 0 || func_1218(uParam1->f_10) == 0) || func_771(uParam1->f_10) == 0)
			{
				func_1257(uParam1->f_10);
			}
			func_1258(uParam1->f_10);
			func_1259(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*uParam0 = 0;
			return 0;
		}
		*uParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_357(iVar1);
	bVar3 = false;
	bVar4 = false;
	iVar5 = 0;
	if (func_780(iVar1))
	{
		bVar3 = true;
		if (func_774(iVar1))
		{
			bVar4 = true;
		}
		if (func_1225(iVar1))
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
			if (!func_206(uParam1->f_6))
			{
				ENTITY::SET_ENTITY_COORDS(iVar2, uParam1->f_6, false, true, true, true);
				ENTITY::SET_ENTITY_HEADING(iVar2, uParam1->f_9);
				ENTITY::_0x9587913B9E772D29(iVar2, 0);
			}
		}
	}
	if (func_1260(uParam1->f_10))
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
			Var8 = { func_1250(uParam1->f_10) };
			Var10 = { func_1251() };
			func_1252(iVar2, &Var8, &Var10, 0);
			PLAYER::_0xD2CB0FB0FDCB473D(iVar6, iVar2);
			PED::SET_PED_CONFIG_FLAG(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*uParam0 = 2;
		return iVar2;
	}
	if (!func_1261(uParam1->f_10))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, true, true);
		func_1262(uParam1->f_10);
		if (uParam1->f_2 && !func_206(uParam1->f_6))
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
	func_1263(uParam1->f_10);
	if (func_1261(uParam1->f_10))
	{
		iVar16 = func_1264(uParam1->f_10);
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

int func_794(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_795(int iParam0)
{
	iParam0 = func_794(iParam0);
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

int func_796(int iParam0)
{
	switch (iParam0)
	{
		case joaat("a_c_donkey_01"):
			return 1;
	}
	return 0;
}

int func_797(int iParam0)
{
	switch (iParam0)
	{
		case joaat("a_c_horsemule_01"):
		case joaat("a_c_horsemulepainted_01"):
			return 1;
	}
	return 0;
}

int func_798(int iParam0)
{
	var uVar0;

	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		iParam0 = 1074477367;
	}
	uVar0 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iParam0, 7);
	return uVar0;
}

int func_799(int iParam0, int iParam1)
{
	float fVar0;

	if (iParam1 == -1)
	{
		return 0;
	}
	iParam0 = func_794(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	fVar0 = func_1265(iParam1);
	if (fVar0 == 1E+09f)
	{
		return 0;
	}
	if (func_801(iParam0, iParam1) >= fVar0)
	{
		return 1;
	}
	return 0;
}

int func_800(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;

	if (iParam1 == -1)
	{
		return 0;
	}
	iParam0 = func_794(iParam0);
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
	iVar0 = func_357(iParam0);
	fVar1 = func_1266(iVar0);
	if (fVar1 >= 0.1f)
	{
		return 1;
	}
	return 0;
}

float func_801(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return 0f;
	}
	iParam0 = func_794(iParam0);
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

float func_802(int iParam0)
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

int func_803(int iParam0, int iParam1)
{
	int iVar0;
	struct<4> Var1;
	int iVar5;

	if (iParam1 == -1)
	{
		return 0;
	}
	iVar0 = func_1267(iParam1);
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

bool func_804()
{
	return Global_40.f_1095.f_3140;
}

float func_805(int iParam0)
{
	iParam0 = func_794(iParam0);
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

void func_806(int iParam0, float fParam1)
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
	func_1164(sVar0, "ITEMTYPE_TEXTURES", 48560695, 0, 109029619, 0, 0, 0, 1);
}

void func_807(int iParam0, float fParam1)
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

	iParam0 = func_794(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_795(iParam0);
	iVar1 = func_311(iParam0);
	iVar2 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	if (iVar1 >= iVar2)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_372.f_1 = ((Global_40.f_1095.f_1[iParam0 /*436*/])->f_372.f_1 + fParam1);
	iVar3 = func_357(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar3) || PED::IS_PED_INJURED(iVar3))
	{
		return;
	}
	func_1268(iVar3, BUILTIN::FLOOR((Global_40.f_1095.f_1[iParam0 /*436*/])->f_372.f_1));
	iVar4 = func_1269(iVar3);
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_372 = iVar4;
	PED::_0xA69899995997A63B(iVar3, iVar4);
	func_1270(iVar4);
	if (iVar4 > iVar1)
	{
		func_1271(iParam0, iVar4);
		if (iParam0 == 6)
		{
			if (iVar4 == 1)
			{
				if (func_669(42))
				{
					func_202(19, 1);
				}
				else
				{
					func_202(20, 1);
				}
			}
		}
		if (iVar4 == 2)
		{
			func_202(21, 1);
		}
		else if (iVar4 == 3)
		{
			func_202(22, 1);
		}
		else if (iVar4 == 4)
		{
			func_202(23, 1);
		}
		if (iVar4 >= 2)
		{
			iVar5 = func_1272(iVar3);
			iVar6 = func_1273();
			func_1274(iVar6, iVar5 + 1);
			iVar7 = func_1275(iVar3);
			iVar8 = func_1276();
			func_1274(iVar8, iVar7 + 1);
		}
		COMPENDIUM::COMPENDIUM_HORSE_BONDING(iVar3, iVar4);
		func_638(func_681(352983236), 1);
		if (iVar4 == iVar2)
		{
			func_638(func_681(-2116919750), 1);
		}
		func_323(0, -1);
	}
}

void func_808(int iParam0, int iParam1, float fParam2)
{
	if (iParam1 == -1)
	{
		return;
	}
	iParam0 = func_794(iParam0);
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

var func_809()
{
	return Global_1900383->f_393;
}

void func_810(int iParam0)
{
	Global_1900383->f_393 = iParam0;
}

void func_811()
{
	var uVar0;

	if (func_1277())
	{
		uVar0 = func_1278();
		MAP::REMOVE_BLIP(&uVar0);
		func_1279(0);
	}
}

int func_812()
{
	int iVar0;

	iVar0 = -1427204870;
	return iVar0;
}

void func_813(var uParam0)
{
	if (*uParam0 != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(*uParam0);
		*uParam0 = 0;
	}
}

bool func_814(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_1280(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return MISC::IS_BIT_SET(&(Global_40.f_283[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_1058888->f_40567[iVar1]), iVar2);
}

void func_815(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_816(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

Vector3 func_817()
{
	if (func_143(70))
	{
		return -1634.252f, -1358.577f, 83.9077f;
	}
	if (func_143(73))
	{
		return -1665.419f, -1346.258f, 84.11175f;
	}
	return -1641.1f, -1359.979f, 83.4932f;
}

void func_818(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &Var0, 2, 2);
}

int func_819()
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

int func_820(int iParam0)
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

void func_821(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;

	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

void func_822(int iParam0, bool bParam1, float fParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = func_1281(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	func_1282(iVar0);
	if (iVar0 == Global_1934765->f_338)
	{
		if (Global_1934765->f_337 == 0)
		{
			func_1283();
		}
		else
		{
			func_1284(bParam1, fParam2);
		}
	}
	else
	{
		uVar1 = Global_1934765->f_338;
		Global_1934765->f_338 = func_1285();
	}
}

void func_823()
{
	if (Global_1934765->f_286 > 300)
	{
		Global_1934765->f_286 = 300;
	}
	STREAMING::_0x2F9AC754FE179D58(func_849());
}

void func_824(int* iParam0)
{
	if (MISC::IS_BIT_SET(Global_1357549->f_1893, 0))
	{
		if (iParam0->f_3)
		{
			func_1201(&(iParam0->f_816));
		}
		MAP::DISPLAY_RADAR(true);
		Global_1357549->f_1894 = 0;
		ANIMSCENE::RESET_ANIM_SCENE(iParam0->f_18, 0);
		ANIMSCENE::_DELETE_ANIM_SCENE(iParam0->f_18);
		func_137(8192);
		func_137(67108864);
		func_1286();
		func_1287(&(iParam0->f_35));
		func_1288(&(iParam0->f_35));
		func_1289();
		func_1178(2);
		if (func_1205(128))
		{
			func_1206(128);
		}
		ENTITY::SET_ENTITY_COORDS(iParam0->f_864, func_1171(), true, false, true, true);
		ENTITY::SET_ENTITY_ROTATION(iParam0->f_864, func_1175(), 2, true);
		MISC::CLEAR_BIT(&(Global_1357549->f_1893), 0);
		MISC::CLEAR_BIT(&(Global_1357549->f_1893), 4);
		func_1183(iParam0, 0);
	}
}

int func_825()
{
	if (func_141() == 3)
	{
		return 1;
	}
	return 0;
}

void func_826(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
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

void func_827(var uParam0)
{
	func_176(&(uParam0->f_101));
	if (func_177(17))
	{
		func_181(17, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_172(17), false);
	}
}

int func_828()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

void func_829(int iParam0)
{
	int iVar0;

	iVar0 = Global_1360165[iParam0 /*1157*/];
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	if (!func_478(iParam0))
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
		COMPANION::_0xD747979C053EFA7A(func_828());
	}
	PED::SET_PED_CONFIG_FLAG(iVar0, 279, false);
	PED::REMOVE_PED_FROM_GROUP(iVar0);
	func_1290(iParam0, 0, 0);
}

int func_830(bool bParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam0)
	{
		return func_1291(Global_1359489->f_4);
	}
	PED::GET_GROUP_SIZE(func_828(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = PED::GET_PED_AS_GROUP_MEMBER(func_828(), iVar3);
		if (func_1292(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

void func_831()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = func_1293(iVar0);
		iVar2 = func_1293(iVar0 + 1);
		if (!func_478(iVar1))
		{
			if (func_478(iVar2))
			{
				(*Global_1359489)[iVar0] = iVar2;
				(*Global_1359489)[iVar0 + 1] = -1;
			}
		}
		iVar0++;
	}
}

void func_832(int iParam0)
{
	(Global_1327590->f_11465[iParam0 /*10*/])->f_5 = func_1294();
}

void func_833(int iParam0)
{
	Global_1327590->f_19692[iParam0] = func_1294();
}

void func_834(int iParam0, bool bParam1, int iParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	(Global_1327590->f_19622[iParam0 /*14*/])->f_9 = func_1294();
	if (bParam1)
	{
		(Global_1327590->f_19622[iParam0 /*14*/])->f_10 = (Global_1327590->f_19622[iParam0 /*14*/])->f_11;
	}
	if (iParam2 > 0)
	{
		func_550(&((Global_1327590->f_19622[iParam0 /*14*/])->f_9), 0, iParam2, 0, 0, 0, 0, 0);
	}
}

void func_835()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1327590->f_19547)
	{
		if (&Global_1327590->f_19547[iVar0 /*5*/] != -1)
		{
			func_572(iVar0);
		}
		iVar0++;
	}
}

bool func_836(int iParam0)
{
	return func_512(iParam0, 32, 1);
}

void func_837(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(func_172(iParam0)))
	{
		func_410(iParam0, 4, 1);
		func_410(iParam0, 17, 1);
		func_410(iParam0, 1, 1);
		func_410(iParam0, 2, 1);
		return;
	}
	if (!func_478(iParam0))
	{
		return;
	}
	if (func_836(iParam0) && !bParam2)
	{
		return;
	}
	if (func_337(iParam0) && !bParam2)
	{
		return;
	}
	if (iParam0 == Global_1357549->f_1497 && !bParam2)
	{
		return;
	}
	if (((!bParam3 && ENTITY::DOES_ENTITY_EXIST(func_172(iParam0))) && func_988(iParam0) < 5000f) && !CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	func_410(iParam0, 4, 1);
	func_410(iParam0, 17, 1);
	func_410(iParam0, 1, 1);
	func_410(iParam0, 2, 1);
	func_1295(iParam0, func_172(iParam0));
	func_539(iParam0, 1, 1, 1, bParam4);
}

int func_838(int iParam0, int iParam1)
{
	if (!func_511(iParam0))
	{
		return 0;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(((*Global_1360165)[iParam0 /*1157*/])->f_126) && iParam1)
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_126 = func_1296(iParam0);
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_126;
}

bool func_839(int iParam0)
{
	return iParam0 != 0;
}

int func_840(int iParam0)
{
	if (!func_402(iParam0))
	{
		return 0;
	}
	return ((*Global_1895087)[iParam0 /*3*/])->f_1;
}

bool func_841(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

int func_842(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = func_458(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	return 1;
}

void func_843(int* iParam0)
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

void func_844(int iParam0, int iParam1)
{
	if (func_56() != -1)
	{
		return;
	}
	if (!func_402(iParam0))
	{
		return;
	}
	Global_24886[iParam0 /*2*/] = (Global_24886[iParam0 /*2*/] || iParam1);
}

void func_845(int iParam0, int iParam1)
{
	if (func_56() != -1)
	{
		return;
	}
	if (!func_402(iParam0))
	{
		return;
	}
	Global_24886[iParam0 /*2*/] = (&Global_24886[iParam0 /*2*/] - (Global_24886[iParam0 /*2*/] && iParam1));
}

void func_846(int iParam0)
{
	int iVar0;

	if (!func_402(iParam0))
	{
		return;
	}
	iVar0 = func_1031(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
	((*Global_1895087)[iParam0 /*3*/])->f_2 = 0;
}

void func_847(int iParam0, int iParam1)
{
	if (!func_402(iParam0))
	{
		return;
	}
	((*Global_1895087)[iParam0 /*3*/])->f_1 = iParam1;
}

int func_848(var uParam0)
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

float func_849()
{
	return (func_761(150f, BUILTIN::TO_FLOAT(Global_1934765->f_286)) / BUILTIN::TO_FLOAT(300));
}

int func_850()
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

int func_851(int iParam0)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 0;
	if (func_1297(Var0, 70005598, &iVar6, 0))
	{
		iVar5 = func_1298(iVar6);
	}
	return iVar5;
}

int func_852(int iParam0)
{
	struct<5> Var0;
	int iVar5;

	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 1;
	if (func_1299(Var0, -1875502208, &iVar5, 0))
	{
	}
	return iVar5;
}

void func_853(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_1025(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		MISC::SET_BIT(Global_1357549->f_1848[iVar0], iVar1);
	}
	else
	{
		MISC::CLEAR_BIT(Global_1357549->f_1848[iVar0], iVar1);
	}
}

int func_854(int iParam0)
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

void func_855(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_853(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_856(2, *uParam0);
		}
		else
		{
			func_857(2, *uParam0);
		}
	}
	func_1300(uParam0);
}

void func_856(int iParam0, int iParam1)
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

void func_857(int iParam0, int iParam1)
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

bool func_858(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 12);
}

int func_859(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_511(iParam0))
	{
		return 0;
	}
	if (!func_1301(iParam0))
	{
		return 0;
	}
	if (func_171(iParam0, -2147483648))
	{
		return 1;
	}
	if (func_171(iParam0, 1073741824))
	{
		return 1;
	}
	iVar0 = func_1302(iParam1);
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
		if (!func_171(iParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

bool func_860(int iParam0)
{
	return func_396(iParam0, 2, 1);
}

int func_861(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_457(((*Global_1835011)[iParam0 /*74*/])->f_1);
}

int func_862(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_928(((*Global_1835011)[iParam0 /*74*/])->f_1);
}

bool func_863(int iParam0)
{
	int iVar0;

	if (Global_1934765->f_337 == 0)
	{
		return false;
	}
	iVar0 = func_1281(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return iVar0 == Global_1934765->f_338;
}

void func_864(int iParam0, int iParam1, bool bParam2, float fParam3)
{
	func_1303(iParam0, iParam1, bParam2, fParam3);
}

Vector3 func_865(int iParam0, bool bParam1)
{
	vector3 vVar0;
	var uVar3;

	vVar0 = { 0f, 0f, 0f };
	if (!func_367(iParam0))
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

void func_866(int iParam0)
{
	int iVar0;
	int iVar1[10];
	int iVar12[10];
	int iVar23;

	iVar0 = func_32();
	switch (iParam0)
	{
		case 1:
			if (iParam0 != func_141())
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
			if (iParam0 != func_141())
			{
				if (!func_814(282809459) && !func_814(1626481264))
				{
					iVar1[0] = 2113454609;
					iVar12[0] = func_1304();
				}
				else
				{
					iVar1[0] = func_1304();
					iVar12[0] = 2113454609;
				}
				iVar12[1] = func_1304();
			}
			else
			{
				iVar12[0] = 2113454609;
				switch (iVar0)
				{
					case 0:
						iVar1[0] = func_1304();
						iVar12[1] = func_1304();
						break;
					case 1:
						iVar1[0] = func_1304();
						iVar12[1] = func_1304();
						break;
				}
			}
			break;
		case 2:
			if (iParam0 != func_141())
			{
				iVar1[0] = 1764814553;
				iVar12[0] = 519091847;
				iVar12[1] = -1874720370;
				iVar12[2] = -376056363;
				if (func_141() == 0 || func_141() == 1)
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
			if (iParam0 != func_141())
			{
				if (func_488(((*Global_1347702)[68 /*49*/])->f_15, 1))
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
		if (func_873(&(iVar1[iVar23])))
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
		if (func_873(&(iVar12[iVar23])))
		{
			if (STREAMING::_IS_IMAP_ACTIVE(&(iVar12[iVar23])))
			{
				STREAMING::_REMOVE_IMAP(&(iVar12[iVar23]));
			}
		}
		iVar23++;
	}
}

float func_867(int iParam0)
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

void func_868(int iParam0, bool bParam1)
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
	(*Var2[5 /*13*/])[0] = func_1304();
	(*Var2[5 /*13*/])[1] = func_1304();
	(*Var2[5 /*13*/])[2] = func_1304();
	(*Var2[5 /*13*/])[3] = func_1304();
	(*Var2[5 /*13*/])[4] = func_1304();
	(*Var2[5 /*13*/])[5] = func_1304();
	(*Var2[5 /*13*/])[6] = func_1304();
	(*Var2[5 /*13*/])[7] = func_1304();
	(*Var2[5 /*13*/])[8] = func_1304();
	(*Var2[5 /*13*/])[9] = func_1304();
	(*Var2[5 /*13*/])[10] = func_1304();
	(*Var2[5 /*13*/])[11] = func_1304();
	if (func_928(((*Global_1835011)[59 /*74*/])->f_1))
	{
		(*Var2[6 /*13*/])[0] = func_1304();
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
	if ((func_457(((*Global_1835011)[58 /*74*/])->f_1) || func_928(((*Global_1835011)[58 /*74*/])->f_1)) || func_488(((*Global_1835011)[58 /*74*/])->f_1, 1))
	{
		(*Var2[6 /*13*/])[7] = func_1304();
		if (STREAMING::_IS_IMAP_ACTIVE(-1437554707))
		{
			STREAMING::_REMOVE_IMAP(-1437554707);
		}
	}
	else
	{
		(*Var2[6 /*13*/])[7] = -1437554707;
	}
	if (func_928(((*Global_1835011)[58 /*74*/])->f_1) || func_457(((*Global_1835011)[58 /*74*/])->f_1))
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
	(*Var2[0 /*13*/])[2] = func_1304();
	(*Var2[0 /*13*/])[3] = func_1304();
	(*Var2[0 /*13*/])[4] = func_1304();
	(*Var2[0 /*13*/])[5] = func_1304();
	(*Var2[0 /*13*/])[6] = func_1304();
	(*Var2[0 /*13*/])[7] = func_1304();
	(*Var2[0 /*13*/])[8] = func_1304();
	(*Var2[0 /*13*/])[9] = func_1304();
	(*Var2[0 /*13*/])[10] = func_1304();
	(*Var2[0 /*13*/])[11] = func_1304();
	(*Var2[2 /*13*/])[0] = 1706275010;
	(*Var2[2 /*13*/])[1] = 1290371072;
	(*Var2[2 /*13*/])[2] = 1734859244;
	(*Var2[2 /*13*/])[3] = 1309652195;
	(*Var2[2 /*13*/])[4] = -1291679096;
	(*Var2[2 /*13*/])[5] = 1676971154;
	(*Var2[2 /*13*/])[6] = func_1305();
	(*Var2[2 /*13*/])[7] = -1841279810;
	(*Var2[2 /*13*/])[8] = func_1306();
	(*Var2[2 /*13*/])[9] = func_1307();
	(*Var2[2 /*13*/])[10] = func_1308();
	(*Var2[2 /*13*/])[11] = func_1309();
	(*Var2[4 /*13*/])[0] = func_1304();
	(*Var2[4 /*13*/])[1] = func_1304();
	(*Var2[4 /*13*/])[2] = func_1304();
	(*Var2[4 /*13*/])[3] = func_1304();
	(*Var2[4 /*13*/])[4] = func_1304();
	(*Var2[4 /*13*/])[5] = func_1304();
	(*Var2[4 /*13*/])[6] = func_1304();
	(*Var2[4 /*13*/])[7] = func_1304();
	(*Var2[4 /*13*/])[8] = func_1304();
	(*Var2[4 /*13*/])[9] = func_1304();
	(*Var2[4 /*13*/])[10] = func_1304();
	(*Var2[4 /*13*/])[11] = func_1304();
	(*Var2[1 /*13*/])[0] = 288413571;
	(*Var2[1 /*13*/])[1] = -441619793;
	(*Var2[1 /*13*/])[2] = -1916602073;
	(*Var2[1 /*13*/])[3] = func_1310();
	(*Var2[1 /*13*/])[4] = -80564929;
	(*Var2[1 /*13*/])[5] = -676881895;
	(*Var2[1 /*13*/])[6] = -1445186253;
	(*Var2[1 /*13*/])[7] = -1893724593;
	(*Var2[1 /*13*/])[8] = func_1311();
	(*Var2[1 /*13*/])[9] = func_1312();
	(*Var2[1 /*13*/])[10] = func_1304();
	(*Var2[1 /*13*/])[11] = func_1304();
	(*Var2[3 /*13*/])[0] = 923572416;
	(*Var2[3 /*13*/])[1] = -555683060;
	(*Var2[3 /*13*/])[2] = -1828030290;
	(*Var2[3 /*13*/])[3] = -960337247;
	(*Var2[3 /*13*/])[4] = -299265919;
	(*Var2[3 /*13*/])[5] = func_1304();
	(*Var2[3 /*13*/])[6] = func_1304();
	(*Var2[3 /*13*/])[7] = func_1304();
	(*Var2[3 /*13*/])[8] = func_1304();
	(*Var2[3 /*13*/])[9] = func_1304();
	(*Var2[3 /*13*/])[10] = func_1304();
	(*Var2[3 /*13*/])[11] = func_1304();
	(*Var2[7 /*13*/])[0] = func_1313();
	(*Var2[7 /*13*/])[1] = 764025611;
	(*Var2[7 /*13*/])[2] = func_1304();
	(*Var2[7 /*13*/])[3] = func_1304();
	(*Var2[7 /*13*/])[4] = func_1304();
	(*Var2[7 /*13*/])[5] = func_1304();
	(*Var2[7 /*13*/])[6] = func_1304();
	(*Var2[7 /*13*/])[7] = func_1304();
	(*Var2[7 /*13*/])[8] = func_1304();
	(*Var2[7 /*13*/])[9] = func_1304();
	(*Var2[7 /*13*/])[10] = func_1304();
	(*Var2[7 /*13*/])[11] = func_1304();
	(*Var2[8 /*13*/])[0] = func_1304();
	(*Var2[8 /*13*/])[1] = func_1304();
	(*Var2[8 /*13*/])[2] = func_1304();
	(*Var2[8 /*13*/])[3] = func_1304();
	(*Var2[8 /*13*/])[4] = func_1304();
	(*Var2[8 /*13*/])[5] = func_1304();
	(*Var2[8 /*13*/])[6] = func_1304();
	(*Var2[8 /*13*/])[7] = func_1304();
	(*Var2[8 /*13*/])[8] = func_1304();
	(*Var2[8 /*13*/])[9] = func_1304();
	(*Var2[8 /*13*/])[10] = func_1304();
	(*Var2[8 /*13*/])[11] = func_1304();
	if (iParam0 != 0)
	{
		func_1118(-1170496998, 0, 0);
	}
	if (iParam0 == 7)
	{
		if (!func_502(2))
		{
			if (func_396(13, 4, 1))
			{
				func_1314(128);
				func_1315(126);
			}
			else
			{
				func_1314(126);
				func_1315(128);
			}
		}
		func_1315(129);
	}
	else
	{
		func_1314(127);
		func_1314(126);
		func_1314(128);
		func_1314(129);
	}
	if (func_143(44))
	{
		func_1315(28);
		func_1314(27);
	}
	else
	{
		func_1315(27);
		func_1314(28);
	}
	func_1316(1, bParam1);
	if (iParam0 == 3)
	{
		if (STREAMING::_IS_IMAP_ACTIVE(809554858))
		{
			STREAMING::_REMOVE_IMAP(809554858);
		}
		func_1315(2);
		func_1315(7);
		func_1315(8);
		func_1314(1);
	}
	else
	{
		func_1314(2);
		func_1314(7);
		func_1314(8);
	}
	if (iParam0 == 3 && func_694(-1515028452, 1, 0) == 0)
	{
		func_1315(10);
	}
	else
	{
		func_1314(10);
	}
	if (iParam0 == 3 && func_694(-520532433, 1, 0) == 0)
	{
		func_1315(9);
	}
	else
	{
		func_1314(9);
	}
	if ((((iParam0 == 5 || iParam0 == 6) || iParam0 == 4) || iParam0 == 7) || iParam0 == 8)
	{
		if (func_488(((*Global_1347702)[83 /*49*/])->f_15, 1))
		{
			func_1315(4);
		}
	}
	else
	{
		func_1314(4);
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		while (iVar1 < 12)
		{
			if (Var2[iVar0 /*13*/][iVar1] != func_1304())
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

bool func_869(vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, 16384);
}

int func_870(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, int iParam7, bool bParam8, float fParam9)
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
	if (func_206(vParam0))
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
		if (func_869(vParam0))
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
	func_1317(iVar0, bParam8);
	return iVar0;
}

void func_871(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			if (func_861(58) || func_143(58))
			{
				AUDIO::_0x3743CE6948194349("AZ_camp_dark_mood_zone", 2358f, 1360f, 108f, 0f);
			}
			break;
	}
}

int func_872(int iParam0)
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
	return func_1304();
}

bool func_873(int iParam0)
{
	return iParam0 != 0;
}

void func_874(int iParam0)
{
	struct<8> Var0;
	int iVar8;
	int iVar9;

	func_1318(iParam0);
	iVar9 = 0;
	while (iVar9 <= 2)
	{
		if (func_1319(iParam0, iVar9))
		{
			func_1320(iParam0);
			Var0 = { func_1321(iParam0, iVar9) };
			iVar8 = func_1322(iParam0, iVar9);
			func_1323(iVar8, 1);
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

void func_875(int iParam0, bool bParam1)
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

void func_876(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	if (func_390(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 27)
		{
			iVar1 = 0;
			while (iVar1 < 6)
			{
				func_392(iParam1, iVar0, iVar1, bParam2, bParam3);
				iVar1++;
			}
			iVar0++;
		}
	}
}

void func_877(int iParam0, int iParam1)
{
	int iVar0;
	struct<8> Var1;
	int iVar9;
	int iVar10;
	int iVar11;

	if (func_390(iParam0))
	{
		*iParam1 = func_872(iParam0);
		if (func_873(*iParam1))
		{
			if (STREAMING::_IS_IMAP_ACTIVE(*iParam1))
			{
				STREAMING::_REMOVE_IMAP(*iParam1);
			}
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_1319(iParam0, iVar0))
			{
				Var1 = { func_1321(iParam0, iVar0) };
				*iParam1 = func_1322(iParam0, iVar0);
				func_1323(*iParam1, 0);
				if (PATHFIND::_0x5AC0944C156E5F44(&Var1))
				{
					PATHFIND::_0x527B97C203BB8606(&Var1);
				}
				if (func_873(*iParam1))
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
			iVar9 = func_1324(iParam0, iVar11, 0);
			iVar10 = func_1324(iParam0, iVar11, 1);
			if (func_873(iVar9))
			{
				if (STREAMING::_IS_IMAP_ACTIVE(iVar9))
				{
					STREAMING::_REMOVE_IMAP(iVar9);
				}
			}
			if (func_873(iVar10))
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

void func_878(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_206(vParam0))
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
			if (func_1208(vVar2, vParam0, 2f, 1))
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

char* func_879(int iParam0)
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

char* func_880(int iParam0)
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

int func_881()
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
		if (!func_488(((*Global_1835011)[44 /*74*/])->f_1, 1))
		{
			return 0;
		}
	}
	return 1;
}

int func_882(int iParam0)
{
	if ((Global_40.f_4942[iParam0 /*60*/])->f_59 != 0)
	{
		return 1;
	}
	return 0;
}

bool func_883(int iParam0)
{
	return func_396(iParam0, 4, 1);
}

int func_884(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (!func_511(iParam0))
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
	if (!func_511(iParam0))
	{
		if (iVar0 != 0)
		{
			(Global_1357549->f_1675[iVar1 /*5*/])->f_1 = iParam0;
			((*Global_1360165)[iParam0 /*1157*/])->f_126 = (Global_1357549->f_1675[iVar1 /*5*/])->f_4;
		}
	}
	return iVar0;
}

struct<4> func_885(bool bParam0)
{
	return func_1021(1328661203, func_1325(), -1591664384, bParam0);
}

int func_886(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	int iVar0;

	iVar0 = func_491(bParam7);
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

int func_887(var uParam0, var uParam1)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_491(0), uParam0, uParam1, 29, 1))
	{
		return 0;
	}
	return 1;
}

int func_888(var uParam0, var uParam1)
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
			if (!func_608((uParam0->f_9[iVar0 /*9*/])->f_8))
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

int func_889()
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (&Global_1879534)
	{
		return 0;
	}
	if (func_126(0, 1, 0))
	{
		return 1;
	}
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if ((Global_40.f_4942[iVar1 /*60*/])->f_59 != 0)
		{
			iVar0 = func_947((Global_40.f_4942[iVar1 /*60*/])->f_59);
			bVar2 = false;
			switch (iVar0)
			{
				case 8:
					if (!func_1327(func_1326((Global_40.f_4942[iVar1 /*60*/])->f_59), 0))
					{
						bVar2 = true;
					}
					break;
				default:
					if (!func_457((Global_40.f_4942[iVar1 /*60*/])->f_59))
					{
						bVar2 = true;
					}
					break;
			}
			if (bVar2)
			{
				(Global_40.f_4942[iVar1 /*60*/])->f_59 = 0;
				func_540(iVar1, 512, 1);
			}
		}
		iVar1++;
	}
	return 1;
}

int func_890(int iParam0, bool bParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	iVar0 = 1;
	uVar1 = func_393();
	iVar2 = func_371(iParam0);
	iVar3 = 0;
	while (iVar3 < 27)
	{
		if (!func_512(iVar3, 4, 1))
		{
			if (func_394(iVar3))
			{
				bVar4 = false;
				if (uVar1 && func_396(iVar3, 32768, 1))
				{
					bVar4 = true;
				}
				if (!func_1328(iVar3, bVar4, iVar2, 0, bParam1))
				{
					iVar0 = 0;
				}
				else if (bParam1 && !func_337(iVar3))
				{
					if (func_179(iVar3, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 1, 0, 1, 0, 1) != 0)
					{
						func_515(iVar3, 4, 1);
					}
				}
				else
				{
					func_515(iVar3, 4, 1);
				}
			}
			else
			{
				if (((func_1329(iVar3) && !func_337(iVar3)) && !func_882(iVar3)) && iVar3 != Global_1357549->f_1497)
				{
					func_837(iVar3, 0, 0, 0, 0);
				}
				func_515(iVar3, 4, 1);
			}
		}
		iVar3++;
	}
	return iVar0;
}

int func_891(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	bool bVar4;
	int iVar5;

	iVar0 = 1;
	if (!func_343(iParam0, &uVar2, &iVar3, 0, 1))
	{
		return 1;
	}
	bVar4 = iParam0 == 22;
	iVar1 = uVar2;
	while (iVar1 <= iVar3)
	{
		if (!func_402(iVar1))
		{
		}
		else if (func_368(iVar1, 32) && iParam0 != 22)
		{
		}
		else
		{
			iVar5 = func_1031(iVar1);
			if (!func_324(iVar5, 0))
			{
				func_1330(iVar1, 0);
				_NAMESPACE48::_0x6759BEE6762E140B(func_840(iVar1));
				if (func_1331(iVar1, 0, 0, 0, 0, 1))
				{
					return 0;
				}
				iVar0 = 0;
			}
			else
			{
				if (bVar4 && func_1332(iVar5))
				{
					if (!DECORATOR::DECOR_EXIST_ON(iVar5, "CaravanLivestock"))
					{
						DECORATOR::DECOR_SET_BOOL(iVar5, "CaravanLivestock", true);
					}
				}
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar5, -1538724068);
				func_845(iVar1, 128);
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_892(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!func_400(uParam0->f_45))
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		Global_1357549->f_1675[iVar1 /*5*/] = func_401(iVar1);
		if (&Global_1357549->f_1675[iVar1 /*5*/] == 0)
		{
		}
		else if (!func_1333(iVar1))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

int func_893(var uParam0)
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
			iVar5 = func_225(vVar1, 2);
		}
		else
		{
			iVar5 = func_462();
			if (!func_206(TASK::_0xA8452DD321607029(iVar5, 1)))
			{
				vVar1 = { TASK::_0xA8452DD321607029(iVar5, 1) };
			}
		}
		if (!func_206(vVar1))
		{
			iVar6 = func_399();
			if (!ENTITY::DOES_ENTITY_EXIST(Global_1357549->f_1897))
			{
				if (iVar6 != 0)
				{
					if (STREAMING::HAS_MODEL_LOADED(iVar6))
					{
						Global_1357549->f_1897 = func_1334(iVar6, vVar1, fVar4, 1, 1, Global_40.f_4283.f_567.f_6, 1, 0, 1, 0, 0, 0, 0);
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

int func_894(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
	return 1;
}

void func_895(var uParam0)
{
	switch (func_141())
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
		func_732(uParam0->f_14, func_262());
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_15))
	{
		MAP::SET_BLIP_SPRITE(uParam0->f_15, -695368421, true);
		MAP::SET_BLIP_FLASH_TIMER(uParam0->f_15, 70, -1);
		func_732(uParam0->f_15, func_262());
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_13))
	{
		MAP::SET_BLIP_SPRITE(uParam0->f_13, -1852063472, true);
		MAP::SET_BLIP_FLASH_TIMER(uParam0->f_13, 71, -1);
		func_732(uParam0->f_13, func_262());
	}
}

char* func_896(int iParam0)
{
	return MISC::_0x2B6846401D68E563(BUILTIN::TO_FLOAT(iParam0), 0);
}

void func_897(char* sParam0, int iParam1)
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

void func_898(int iParam0, var uParam1)
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

void func_899(int iParam0, var uParam1)
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

bool func_900(var uParam0, var uParam1)
{
	return (uParam0 && uParam1) != 0;
}

void func_901(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

bool func_902(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_903(int iParam0)
{
	switch (func_56())
	{
		case -1:
			Global_40.f_4283.f_2 = (Global_40.f_4283.f_2 - (Global_40.f_4283.f_2 && iParam0));
			break;
	}
}

int func_904(int iParam0)
{
	vector3 vVar0;

	vVar0 = { func_730(iParam0) };
	if (func_206(vVar0))
	{
		return 0;
	}
	return 1;
}

void func_905(var uParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;

	uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Ledger");
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_INT(uVar0, "CampId", 1);
	uVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar0, "RtSpreadTop");
	func_1335(uVar1, uParam0->f_1[0 /*237*/]);
	uVar2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar0, "RtSpreadBottom");
	func_1335(uVar2, uParam0->f_1[1 /*237*/]);
	uVar3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "DynamicCatalogItems");
	uVar3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar3, "CatalogItemInspection");
	func_1336(uVar3, &(uParam0->f_476));
	uParam0->f_487 = DATABINDING::_DATABINDING_ADD_DATA_INT(uVar0, "CampMoneyDonated", func_149());
	uParam0->f_488 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar0, "CampMoneyLevel", "");
}

void func_906(var uParam0)
{
	int iVar0;

	iVar0 = func_141();
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

int func_907(int iParam0)
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

void func_908(var uParam0)
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
	((uParam0->f_531[1 /*30*/])->f_2[1 /*4*/])->f_3 = func_1337(30);
	(uParam0->f_531[1 /*30*/])->f_2[2 /*4*/] = 125037415; /* GXTEntry: "Something with kick" */
	((uParam0->f_531[1 /*30*/])->f_2[2 /*4*/])->f_1 = -1412836568; /* GXTEntry: "- Tonics & premium liquor." */
	((uParam0->f_531[1 /*30*/])->f_2[2 /*4*/])->f_2 = 682446981; /* GXTEntry: "Increases total supplies, includes tonics to refill all stats as well as higher q" +
    "uality liquors." */
	((uParam0->f_531[1 /*30*/])->f_2[2 /*4*/])->f_3 = func_1337(50);
	(uParam0->f_531[1 /*30*/])->f_2[3 /*4*/] = -105033734; /* GXTEntry: "The good stuff" */
	((uParam0->f_531[1 /*30*/])->f_2[3 /*4*/])->f_1 = 1568913053; /* GXTEntry: "- Potent health cures & tonics." */
	((uParam0->f_531[1 /*30*/])->f_2[3 /*4*/])->f_2 = 1181715465; /* GXTEntry: "Increases total supplies, includes more effective healing items and tonics." */
	((uParam0->f_531[1 /*30*/])->f_2[3 /*4*/])->f_3 = func_1337(75);
	(uParam0->f_531[1 /*30*/])->f_2[4 /*4*/] = 0;
	((uParam0->f_531[1 /*30*/])->f_2[4 /*4*/])->f_1 = 0;
	((uParam0->f_531[1 /*30*/])->f_2[4 /*4*/])->f_2 = 2099654106; /* GXTEntry: "This area of camp is fully upgraded." */
	((uParam0->f_531[1 /*30*/])->f_2[4 /*4*/])->f_3 = -1;
	(uParam0->f_531[1 /*30*/])->f_23 = 1;
	(uParam0->f_531[1 /*30*/])->f_24[0] = func_1337(15);
	(uParam0->f_531[1 /*30*/])->f_24[1] = func_1337(25);
	(uParam0->f_531[1 /*30*/])->f_24[2] = func_1337(45);
	(uParam0->f_531[1 /*30*/])->f_24[3] = func_1337(75);
	uParam0->f_531[0 /*30*/] = 1069539174; /* GXTEntry: "Pearson\'s Provisions Wagon" */
	(uParam0->f_531[0 /*30*/])->f_1 = 0;
	(uParam0->f_531[0 /*30*/])->f_2[0 /*4*/] = -1163134641; /* GXTEntry: "Essentials" */
	((uParam0->f_531[0 /*30*/])->f_2[0 /*4*/])->f_1 = -57804606; /* GXTEntry: "- The basics, bread & biscuits." */
	((uParam0->f_531[0 /*30*/])->f_2[0 /*4*/])->f_2 = 0;
	((uParam0->f_531[0 /*30*/])->f_2[0 /*4*/])->f_3 = -1;
	(uParam0->f_531[0 /*30*/])->f_2[1 /*4*/] = -1946608662; /* GXTEntry: "Less bland" */
	((uParam0->f_531[0 /*30*/])->f_2[1 /*4*/])->f_1 = 926019081; /* GXTEntry: "- Fresh fruit & basic canned goods." */
	((uParam0->f_531[0 /*30*/])->f_2[1 /*4*/])->f_2 = 482064073; /* GXTEntry: "Increases total provisions, adds fresh fruit and basic canned goods." */
	((uParam0->f_531[0 /*30*/])->f_2[1 /*4*/])->f_3 = func_1337(30);
	(uParam0->f_531[0 /*30*/])->f_2[2 /*4*/] = -1651982583; /* GXTEntry: "Some real variety" */
	((uParam0->f_531[0 /*30*/])->f_2[2 /*4*/])->f_1 = 552518019; /* GXTEntry: "- Chewing tobacco & premium canned goods." */
	((uParam0->f_531[0 /*30*/])->f_2[2 /*4*/])->f_2 = 905767243; /* GXTEntry: "Increases total provisions, adds chewing tobacco and premium canned goods." */
	((uParam0->f_531[0 /*30*/])->f_2[2 /*4*/])->f_3 = func_1337(45);
	(uParam0->f_531[0 /*30*/])->f_2[3 /*4*/] = -542883057; /* GXTEntry: "Treat ourselves!" */
	((uParam0->f_531[0 /*30*/])->f_2[3 /*4*/])->f_1 = 1002010396; /* GXTEntry: "- Cocaine chewing gum & assorted sweets." */
	((uParam0->f_531[0 /*30*/])->f_2[3 /*4*/])->f_2 = 432025806; /* GXTEntry: "Increases total provisions, adds cocaine chewing gum and sweets." */
	((uParam0->f_531[0 /*30*/])->f_2[3 /*4*/])->f_3 = func_1337(55);
	(uParam0->f_531[0 /*30*/])->f_2[4 /*4*/] = 0;
	((uParam0->f_531[0 /*30*/])->f_2[4 /*4*/])->f_1 = 0;
	((uParam0->f_531[0 /*30*/])->f_2[4 /*4*/])->f_2 = 2099654106; /* GXTEntry: "This area of camp is fully upgraded." */
	((uParam0->f_531[0 /*30*/])->f_2[4 /*4*/])->f_3 = -1;
	(uParam0->f_531[0 /*30*/])->f_23 = 1;
	(uParam0->f_531[0 /*30*/])->f_24[0] = func_1337(15);
	(uParam0->f_531[0 /*30*/])->f_24[1] = func_1337(25);
	(uParam0->f_531[0 /*30*/])->f_24[2] = func_1337(40);
	(uParam0->f_531[0 /*30*/])->f_24[3] = func_1337(50);
	uParam0->f_531[2 /*30*/] = -2146471150; /* GXTEntry: "Arthur\'s Munitions" */
	(uParam0->f_531[2 /*30*/])->f_1 = 0;
	(uParam0->f_531[2 /*30*/])->f_2[0 /*4*/] = 1973763900; /* GXTEntry: "Start simple" */
	((uParam0->f_531[2 /*30*/])->f_2[0 /*4*/])->f_1 = 1507459390; /* GXTEntry: "- Revolver & pistol ammo." */
	((uParam0->f_531[2 /*30*/])->f_2[0 /*4*/])->f_2 = 0;
	((uParam0->f_531[2 /*30*/])->f_2[0 /*4*/])->f_3 = -1;
	(uParam0->f_531[2 /*30*/])->f_2[1 /*4*/] = 1201857340; /* GXTEntry: "Improve our offense" */
	((uParam0->f_531[2 /*30*/])->f_2[1 /*4*/])->f_1 = 1813751233; /* GXTEntry: "- Repeater ammo & arrows." */
	((uParam0->f_531[2 /*30*/])->f_2[1 /*4*/])->f_2 = -1620504213; /* GXTEntry: "Increases armory supplies, adds repeater ammo and arrows." */
	((uParam0->f_531[2 /*30*/])->f_2[1 /*4*/])->f_3 = func_1337(60);
	(uParam0->f_531[2 /*30*/])->f_2[2 /*4*/] = 374407321; /* GXTEntry: "Some real firepower" */
	((uParam0->f_531[2 /*30*/])->f_2[2 /*4*/])->f_1 = 2101200901; /* GXTEntry: "- Throwing knives, shotgun & rifle ammo." */
	((uParam0->f_531[2 /*30*/])->f_2[2 /*4*/])->f_2 = -1314015756; /* GXTEntry: "Increases armory supplies, adds throwing knives, shotgun and rifle ammo." */
	((uParam0->f_531[2 /*30*/])->f_2[2 /*4*/])->f_3 = func_1337(90);
	(uParam0->f_531[2 /*30*/])->f_2[3 /*4*/] = 679585018; /* GXTEntry: "Let\'s have some fun" */
	((uParam0->f_531[2 /*30*/])->f_2[3 /*4*/])->f_1 = -1884656418; /* GXTEntry: "- Fire bottles & high velocity repeater ammo." */
	((uParam0->f_531[2 /*30*/])->f_2[3 /*4*/])->f_2 = 2137248097;
	((uParam0->f_531[2 /*30*/])->f_2[3 /*4*/])->f_3 = func_1337(110);
	(uParam0->f_531[2 /*30*/])->f_2[4 /*4*/] = 0;
	((uParam0->f_531[2 /*30*/])->f_2[4 /*4*/])->f_1 = 0;
	((uParam0->f_531[2 /*30*/])->f_2[4 /*4*/])->f_2 = 2099654106; /* GXTEntry: "This area of camp is fully upgraded." */
	((uParam0->f_531[2 /*30*/])->f_2[4 /*4*/])->f_3 = -1;
	(uParam0->f_531[2 /*30*/])->f_23 = 1;
	(uParam0->f_531[2 /*30*/])->f_24[0] = func_1337(8);
	(uParam0->f_531[2 /*30*/])->f_24[1] = func_1337(10);
	(uParam0->f_531[2 /*30*/])->f_24[2] = func_1337(15);
	(uParam0->f_531[2 /*30*/])->f_24[3] = func_1337(20);
	uParam0->f_531[3 /*30*/] = -2087690276; /* GXTEntry: "Camp Lodging" */
	(uParam0->f_531[3 /*30*/])->f_1 = 0;
	(uParam0->f_531[3 /*30*/])->f_2[0 /*4*/] = 840935239; /* GXTEntry: "Bare-bone shelter" */
	((uParam0->f_531[3 /*30*/])->f_2[0 /*4*/])->f_1 = 1470166745; /* GXTEntry: "- Basic canvas. Old fur for warmth." */
	((uParam0->f_531[3 /*30*/])->f_2[0 /*4*/])->f_2 = 0;
	((uParam0->f_531[3 /*30*/])->f_2[0 /*4*/])->f_3 = -1;
	(uParam0->f_531[3 /*30*/])->f_2[1 /*4*/] = 2020258780; /* GXTEntry: "First things first" */
	((uParam0->f_531[3 /*30*/])->f_2[1 /*4*/])->f_1 = 1123011959; /* GXTEntry: "- Dutch wants something comfier." */
	((uParam0->f_531[3 /*30*/])->f_2[1 /*4*/])->f_2 = 548799892; /* GXTEntry: "Upgrade Dutch\'s lodging. Encourages others to donate." */
	((uParam0->f_531[3 /*30*/])->f_2[1 /*4*/])->f_3 = func_1337(220);
	(uParam0->f_531[3 /*30*/])->f_2[2 /*4*/] = 1187500183; /* GXTEntry: "Next in line" */
	((uParam0->f_531[3 /*30*/])->f_2[2 /*4*/])->f_1 = 742826021; /* GXTEntry: "- Arthur wants a map to help plan journeys." */
	((uParam0->f_531[3 /*30*/])->f_2[2 /*4*/])->f_2 = 1316282641; /* GXTEntry: "Upgrade Arthur\'s lodging. Unlocks the fast travel map, allowing you to quickly tr" +
    "avel to previously discovered locations. Also unlocks grooming supplies." */
	((uParam0->f_531[3 /*30*/])->f_2[2 /*4*/])->f_3 = func_1337(325);
	(uParam0->f_531[3 /*30*/])->f_2[3 /*4*/] = 181229727; /* GXTEntry: "For everyone!" */
	((uParam0->f_531[3 /*30*/])->f_2[3 /*4*/])->f_1 = -1952031021; /* GXTEntry: "- Improve the rest of the tents in camp." */
	((uParam0->f_531[3 /*30*/])->f_2[3 /*4*/])->f_2 = -2076291933; /* GXTEntry: "Upgrade all remaining lodgings. Improves overall mood of camp." */
	((uParam0->f_531[3 /*30*/])->f_2[3 /*4*/])->f_3 = func_1337(300);
	(uParam0->f_531[3 /*30*/])->f_2[4 /*4*/] = 0;
	((uParam0->f_531[3 /*30*/])->f_2[4 /*4*/])->f_1 = 0;
	((uParam0->f_531[3 /*30*/])->f_2[4 /*4*/])->f_2 = 2099654106; /* GXTEntry: "This area of camp is fully upgraded." */
	((uParam0->f_531[3 /*30*/])->f_2[4 /*4*/])->f_3 = -1;
	(uParam0->f_531[3 /*30*/])->f_23 = 0;
	uParam0->f_531[4 /*30*/] = 2108789685; /* GXTEntry: "Camp Boat" */
	(uParam0->f_531[4 /*30*/])->f_1 = 0;
	((uParam0->f_531[4 /*30*/])->f_2[1 /*4*/])->f_1 = -912712840; /* GXTEntry: "- Met a traveler selling an old boat. Useful?" */
	((uParam0->f_531[4 /*30*/])->f_2[1 /*4*/])->f_2 = -1497934411; /* GXTEntry: "Buy a boat for the camp. Easy transport and access to fishing holes." */
	((uParam0->f_531[4 /*30*/])->f_2[1 /*4*/])->f_3 = func_1337(450);
	((uParam0->f_531[4 /*30*/])->f_2[2 /*4*/])->f_1 = 0;
	((uParam0->f_531[4 /*30*/])->f_2[2 /*4*/])->f_2 = 2099654106; /* GXTEntry: "This area of camp is fully upgraded." */
	((uParam0->f_531[4 /*30*/])->f_2[2 /*4*/])->f_3 = -1;
	(uParam0->f_531[4 /*30*/])->f_23 = 0;
	uParam0->f_531[5 /*30*/] = -480748016; /* GXTEntry: "Chicken Coop" */
	(uParam0->f_531[5 /*30*/])->f_1 = 0;
	((uParam0->f_531[5 /*30*/])->f_2[1 /*4*/])->f_1 = -1503751759; /* GXTEntry: "- Some local farms are selling off old coops." */
	((uParam0->f_531[5 /*30*/])->f_2[1 /*4*/])->f_2 = -492500419; /* GXTEntry: "Buy a chicken coop for camp. Add nutrition to all camp stews. Dead Eye boost when" +
    " consuming stew." */
	((uParam0->f_531[5 /*30*/])->f_2[1 /*4*/])->f_3 = func_1337(175);
	((uParam0->f_531[5 /*30*/])->f_2[2 /*4*/])->f_1 = 0;
	((uParam0->f_531[5 /*30*/])->f_2[2 /*4*/])->f_2 = 2099654106; /* GXTEntry: "This area of camp is fully upgraded." */
	((uParam0->f_531[5 /*30*/])->f_2[2 /*4*/])->f_3 = -1;
	(uParam0->f_531[5 /*30*/])->f_23 = 0;
	uParam0->f_531[6 /*30*/] = 2011014118; /* GXTEntry: "Leather Working Tools" */
	(uParam0->f_531[6 /*30*/])->f_1 = 0;
	((uParam0->f_531[6 /*30*/])->f_2[1 /*4*/])->f_1 = 2107034732; /* GXTEntry: "- If we get Pearson better tools he can make extra gear." */
	((uParam0->f_531[6 /*30*/])->f_2[1 /*4*/])->f_2 = 351632167; /* GXTEntry: "Buy some leather working tools for Pearson. Gain access to extra crafting options" +
    "." */
	((uParam0->f_531[6 /*30*/])->f_2[1 /*4*/])->f_3 = func_1337(225);
	((uParam0->f_531[6 /*30*/])->f_2[2 /*4*/])->f_1 = 0;
	((uParam0->f_531[6 /*30*/])->f_2[2 /*4*/])->f_2 = 2099654106; /* GXTEntry: "This area of camp is fully upgraded." */
	((uParam0->f_531[6 /*30*/])->f_2[2 /*4*/])->f_3 = -1;
	(uParam0->f_531[6 /*30*/])->f_23 = 0;
	uParam0->f_531[7 /*30*/] = -594525626; /* GXTEntry: "Camp Horse Station" */
	(uParam0->f_531[7 /*30*/])->f_1 = 0;
	((uParam0->f_531[7 /*30*/])->f_2[1 /*4*/])->f_1 = 2006016232; /* GXTEntry: "- It would be great to have more room to hitch." */
	((uParam0->f_531[7 /*30*/])->f_2[1 /*4*/])->f_2 = 385851330; /* GXTEntry: "Buy a horse station. A place to retrieve horses from the stables or recall your m" +
    "ain horse to camp." */
	((uParam0->f_531[7 /*30*/])->f_2[1 /*4*/])->f_3 = func_1337(300);
	((uParam0->f_531[7 /*30*/])->f_2[2 /*4*/])->f_1 = 0;
	((uParam0->f_531[7 /*30*/])->f_2[2 /*4*/])->f_2 = 2099654106; /* GXTEntry: "This area of camp is fully upgraded." */
	((uParam0->f_531[7 /*30*/])->f_2[2 /*4*/])->f_3 = -1;
	(uParam0->f_531[7 /*30*/])->f_23 = 0;
}

bool func_909()
{
	int iVar0;

	iVar0 = func_1338();
	return iVar0 <= -160;
}

bool func_910()
{
	int iVar0;

	iVar0 = func_1338();
	return iVar0 >= 160;
}

var func_911()
{
	return Global_23117.f_1768;
}

int func_912(int iParam0)
{
	if (func_56() != -1)
	{
		return 0;
	}
	if (!func_474(iParam0))
	{
		return 0;
	}
	return func_488(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
}

var func_913()
{
	return Global_1357549->f_1900;
}

int func_914(var uParam0)
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

int func_915()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
	{
		return 1;
	}
	return 0;
}

int func_916()
{
	int iVar0;

	iVar0 = func_141();
	if (iVar0 == 6 || iVar0 == 5)
	{
		return 0;
	}
	if (iVar0 == 3 && !func_143(28))
	{
		return 0;
	}
	if ((((func_227(-625309660, 0) || func_227(-218211995, 0)) || func_227(443165194, 0)) || func_227(1685749736, 0)) || func_915())
	{
		return 1;
	}
	return 0;
}

int func_917(int iParam0)
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

int func_918(int iParam0)
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

void func_919(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
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

	iVar0 = func_1338();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_1339(iParam0);
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
	if (func_669(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_142())
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
	Global_40.f_11095.f_35 = func_1340(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_1338();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || iParam7)
	{
		iVar6 = func_1341(iVar1);
		func_1343(func_1342(), 0, 4000);
		func_1344(Global_40.f_11095.f_35);
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
		func_1345(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_638(func_1160(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(iParam5))
			{
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_918(14))
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
					sParam4 = func_1346(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_1164(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_1164(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_638(func_1160(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_918(4))
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
					sParam4 = func_1346(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_1164(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_1164(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_1160(-1990689970) };
	STATS::STAT_ID_SET_INT(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_0xE6B763C7F4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_1347(10, 1);
	}
}

void func_920(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0 /*6*/] = iParam1;
	(Global_1347477->f_155[iParam0 /*6*/])->f_2 = iParam2;
	(Global_1347477->f_155[iParam0 /*6*/])->f_3 = iParam3;
	(Global_1347477->f_155[iParam0 /*6*/])->f_4 = iParam4;
	(Global_1347477->f_155[iParam0 /*6*/])->f_5 = bParam5;
	(Global_1347477->f_155[iParam0 /*6*/])->f_1 = MISC::GET_GAME_TIMER() + 500;
}

int func_921(int iParam0, bool bParam1)
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

bool func_922(int iParam0)
{
	return ((iParam0 == Global_1357549->f_1497 && Global_1357549->f_1497.f_5 >= 4) && Global_1357549->f_1497.f_5 < 11);
}

int func_923(int iParam0, bool bParam1)
{
	int iVar0;
	struct<15> Var1;

	if (!func_478(iParam0))
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
	if (func_338(iParam0, 0))
	{
		func_1348(iParam0, 1);
		return 1;
	}
	if (!func_1349())
	{
		return 0;
	}
	if (bParam1)
	{
		func_516(iParam0, 0, "Adding to Group");
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
	func_1348(iParam0, 1);
	Global_1359489->f_15 = func_830(1);
	func_515(iParam0, 32, 1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], -1247684992);
	PED::SET_PED_COMBAT_ATTRIBUTES(Global_1360165[iParam0 /*1157*/], 83, true);
	PED::_0x9238A3D970BBB0A9(Global_1360165[iParam0 /*1157*/], -1972074710);
	PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 152, true);
	if (COMPANION::_0xB7E0590C86E1711F(PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX())) != 234527101)
	{
		COMPANION::_0x0DE02DA3C0F66955(func_172(iParam0), COMPANION::_0xB7E0590C86E1711F(PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX())));
		COMPANION::_0x61BDA07407754A5C(func_172(iParam0), Global_1391438->f_414.f_37);
	}
	PED::_0x89E59DBD15E21177(func_828(), 0);
	func_1350(iParam0);
	Var1 = PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX());
	Var1.f_12 = 3;
	Var1.f_3 = Global_1360165[iParam0 /*1157*/];
	Var1.f_7 = func_128();
	Var1.f_8 = 0;
	Var1.f_11 = 10;
	Var1.f_14 = Global_1360165[iParam0 /*1157*/];
	MISC::_0x88BC5F4AEF77FC4E(&Var1, 17);
	return 1;
}

Vector3 func_924(vector3 vParam0, float fParam3)
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

Vector3 func_925(vector3 vParam0, var uParam3, var uParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, float fParam10, int iParam11, int iParam12, float fParam13)
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
	func_1351(&bVar12, &uVar13);
	bVar14 = false;
	if (bVar12)
	{
		if (func_1223() == 0 && !func_1352(0))
		{
			bVar14 = true;
		}
	}
	if (!func_1353(15, &Var15))
	{
		return 0f, 0f, 0f;
	}
	VOLUME::_0x748C5F51A18CB8F0(0);
	Var20 = { Var15 };
	if (bParam7)
	{
		iVar10 = func_1354();
		if (VOLUME::_0x92A78D0BEDB332A3(iVar10))
		{
		}
	}
	if (!func_252(Global_1310720->f_21))
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
			vVar7 = { func_1355(iVar0, iVar1) };
			bVar11 = func_1356(iVar0, iVar1);
			fVar3 = BUILTIN::VDIST(vParam0, vVar7);
			if (((((fVar3 < fVar2 && fVar3 > fParam10) && !func_206(vVar7)) && func_1357(iVar0, iParam8, iParam12)) && !func_1358(iVar0)) || bVar11)
			{
				if (func_1359(vVar7, iVar0, iVar1, bParam5, bParam6, bVar14, iVar10, bParam9, fParam13))
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

void func_926(struct<16> Param0, int iParam16)
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
	if (!func_1360(iParam16, 2))
	{
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(Param0.f_10))) > 0 || func_1361(&(Param0.f_10)))
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
			func_1362(iParam16);
			return;
		}
		iVar0++;
	}
}

void func_927(int iParam0)
{
	Global_1900383->f_316 = (Global_1900383->f_316 || iParam0);
}

bool func_928(int iParam0)
{
	int iVar0;

	iVar0 = func_956(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_929(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (!func_478(iParam0))
	{
		return 0;
	}
	if (iParam1 && !func_1329(iParam0))
	{
		return 0;
	}
	if (iParam2 == -1)
	{
		return 1;
	}
	iVar0 = iParam2;
	if (func_816(iVar0, 1))
	{
		if (func_1363(iParam0) && !func_1364(iParam0))
		{
			return 1;
		}
	}
	if (func_816(iVar0, 2))
	{
		if (!func_1363(iParam0))
		{
			return 1;
		}
	}
	if (func_816(iVar0, 4))
	{
		if (func_1364(iParam0))
		{
			return 1;
		}
	}
	if (func_816(iVar0, 8))
	{
		if (func_1365(iParam0) && !func_1364(iParam0))
		{
			return 1;
		}
	}
	if (func_816(iVar0, 16))
	{
		if (!func_1365(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_930(int iParam0)
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
	if (func_442(iParam0, 1041577989))
	{
		return 0;
	}
	if (TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iParam0)))
	{
		return 1;
	}
	return 0;
}

bool func_931(int iParam0, vector3 vParam1)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	vVar3 = { vVar0 + ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	return func_1366(vVar0, vVar3, vParam1);
}

bool func_932(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_933(int iParam0, int iParam1)
{
	func_1367(iParam0, iParam1);
}

int func_934(int iParam0, int iParam1)
{
	float fVar0;

	if (!func_442(iParam0, 1041577989))
	{
		return 1;
	}
	fVar0 = TASK::_0xA710DC5D25F8B942(iParam0, 1041577989);
	if (func_816(iParam1, 32))
	{
		if (fVar0 >= 1.85f)
		{
			return 1;
		}
		return 0;
	}
	if (func_816(iParam1, 256))
	{
		if (fVar0 >= 1f)
		{
			return 1;
		}
		return 0;
	}
	if (func_816(iParam1, 2048))
	{
		if (fVar0 >= 1.5f)
		{
			return 1;
		}
		return 0;
	}
	return 1;
}

void func_935(int iParam0, int iParam1)
{
	func_901(iParam0, iParam1);
}

Vector3 func_936(vector3 vParam0)
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

bool func_937(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

int func_938(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_1368(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

int func_939(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::_0x9A100F1CF4546629(iParam0) || ENTITY::_0xC346A546612C49A9(iParam0))
	{
		iVar0 = func_1369(iParam0);
		if (!func_646(iVar0, 0))
		{
			iVar0 = func_1370(iParam0);
		}
	}
	else
	{
		iVar0 = func_1370(iParam0);
	}
	return iVar0;
}

int func_940(int iParam0, int iParam1, int iParam2)
{
	struct<10> Var0;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	struct<2> Var14[15];
	int iVar45;
	int iVar46;

	if (!func_646(iParam0, 0))
	{
		return 0;
	}
	*iParam2 = 0;
	Var0 = { func_1371(-1591664384, -1591664384, 0, 0, iParam1, 0, -1, 0, 0) };
	iVar11 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&Var0, &iVar10, 1);
	if (iVar11 != -1)
	{
		iVar12 = 0;
		while (iVar12 < iVar10)
		{
			if (ITEMDATABASE::_0x8750F69A720C2E41(iVar11, iVar12, &iVar13))
			{
				if (func_1372(iVar13, iParam1, &Var14, &iVar45, 1, 0))
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

int func_941(int iParam0)
{
	if ((func_667(iParam0, -839724752) || func_667(iParam0, -887064662)) || func_667(iParam0, 1286414894))
	{
		return 1;
	}
	return 0;
}

int func_942(int iParam0)
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

int func_943(int iParam0, int iParam1)
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

int func_944()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

int func_945(int iParam0)
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

int func_946(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

int func_947(int iParam0)
{
	if (!func_476(iParam0))
	{
		return 0;
	}
	return func_1373(func_945(iParam0));
}

int func_948(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_1135(iVar0);
}

int func_949(int iParam0, int iParam1)
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

int func_950()
{
	if (Global_1946804->f_2793)
	{
		return 1;
	}
	if (MISC::ABSI((MISC::GET_GAME_TIMER() - Global_1946804->f_2791)) < 1250)
	{
		return 1;
	}
	if (func_1374())
	{
		return 1;
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_35))
	{
		return 1;
	}
	return 0;
}

int func_951(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (func_484(&iVar0))
	{
		if (iParam0 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_952()
{
	int iVar0;

	iVar0 = 1549701178;
	switch (func_1375())
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

int func_953()
{
	int iVar0;

	iVar0 = 614608656;
	switch (func_1375())
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

int func_954()
{
	int iVar0;

	iVar0 = -1832677570;
	switch (func_1375())
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

int func_955()
{
	int iVar0;

	iVar0 = 1623252156;
	switch (func_1375())
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

int func_956(int iParam0)
{
	if (!func_476(iParam0))
	{
		return -1;
	}
	return func_938(iParam0);
}

struct<2> func_957(float fParam0)
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

int func_958(var uParam0)
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

void func_959(var uParam0, int iParam1)
{
	if (uParam0->f_3483.f_1 != iParam1)
	{
		uParam0->f_3483.f_1 = iParam1;
	}
}

int func_960(bool bParam0, float fParam1, int iParam2, float fParam3)
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
	func_1376(1);
	if (!VEHICLE::IS_VEHICLE_STOPPED(iVar0) && !VEHICLE::_0x404527BC03DA0E6C(iVar0))
	{
		VEHICLE::BRING_VEHICLE_TO_HALT(iVar0, fParam1, iParam2, false);
	}
	else
	{
		fVar1 = ENTITY::GET_ENTITY_SPEED(iVar0);
		if (MISC::ABSF(fVar1) <= fParam3)
		{
			func_1377(&iVar0);
			if (!bParam0)
			{
				return 1;
			}
			else if (!func_442(Global_35, -828834893))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(Global_35, 0, 0);
			}
		}
	}
	return 0;
}

bool func_961(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_962(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1[5];
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;

	if (!func_511(iParam0))
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
					if (func_488(((*Global_1835011)[4 /*74*/])->f_1, 1))
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
					if (func_1378(iVar0, 9, 11))
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
					if (func_488(((*Global_1347702)[63 /*49*/])->f_15, 1) || func_928(((*Global_1347702)[63 /*49*/])->f_15))
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
					if (func_1378(iVar0, 9, 12))
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
					if (!func_488(((*Global_1835011)[14 /*74*/])->f_1, 1))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar7 = 2;
					}
					else if (func_396(18, 134217728, 1))
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
					if (func_1378(iVar0, 9, 11))
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
					if (func_488(((*Global_1347702)[134 /*49*/])->f_15, 1) || func_928(((*Global_1347702)[134 /*49*/])->f_15))
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
					if (func_488(((*Global_1835011)[38 /*74*/])->f_1, 1))
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
					if (func_1378(iVar0, 9, 11))
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
					if (func_227(747937920, 1) && !func_488(((*Global_1347702)[1 /*49*/])->f_15, 1))
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
	if (iParam3 && ENTITY::DOES_ENTITY_EXIST(func_172(iParam0)))
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
	if (!func_522(iParam0, iVar8))
	{
		iVar8 = (Global_40.f_4942[iParam0 /*60*/])->f_3;
	}
	return iVar8;
}

int func_963(int iParam0)
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

bool func_964(int iParam0, bool bParam1)
{
	if (!func_511(iParam0))
	{
		return false;
	}
	if (!bParam1)
	{
		if (func_337(iParam0) || func_512(iParam0, 44, 1))
		{
			return false;
		}
	}
	return MISC::ARE_STRINGS_EQUAL(&(((*Global_1360165)[iParam0 /*1157*/])->f_48), "Sleep");
}

struct<7> func_965(int iParam0, int iParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, var uParam8, bool bParam9)
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

void func_966(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_511(iParam0))
	{
		return;
	}
	iVar0 = func_172(iParam0);
	func_1379(iVar0);
	func_515(iParam0, 60, 1);
	if (bParam1)
	{
		func_1380(iParam0);
	}
}

void func_967(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_511(iParam0))
	{
		return;
	}
	iVar0 = func_172(iParam0);
	func_1381(iVar0);
	func_410(iParam0, 60, 1);
	if (bParam1)
	{
		func_1382(iParam0);
	}
}

void func_968(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_511(iParam0))
	{
		return;
	}
	iVar0 = func_172(iParam0);
	func_1383(iVar0);
	if (iParam0 == 14)
	{
		func_1384(iVar0);
	}
	func_515(iParam0, 61, 1);
	if (bParam1)
	{
		func_1385(iParam0);
	}
}

void func_969(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_511(iParam0))
	{
		return;
	}
	iVar0 = func_172(iParam0);
	func_1386(iVar0);
	func_410(iParam0, 61, 1);
	if (bParam1)
	{
		func_1387(iParam0);
	}
}

int func_970(var uParam0)
{
	return uParam0;
}

bool func_971(int iParam0)
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

bool func_972(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_511(iParam0))
	{
		return false;
	}
	func_1388(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(((*Global_1360165)[iParam0 /*1157*/])->f_65[iVar0]), iVar1);
}

int func_973(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

int func_974(int iParam0, int iParam1)
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
			iVar0 = func_1389(296923297, iParam1);
			return func_1390(iVar0);
		case -2040275819:
			return 464906090;
		case -1114682645:
			return 744097966;
		case -1414977761:
			return 1059434053;
		case 1237718549:
			iVar0 = func_1389(1237718549, iParam1);
			return func_1390(iVar0);
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

bool func_975(int iParam0, int iParam1)
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

int func_976(int iParam0, int iParam1)
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

bool func_977(int iParam0, int iParam1)
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
	if (!func_975(iParam0, iVar0))
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

void func_978(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

void func_979(int iParam0, int iParam1, bool bParam2)
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
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 1 > 0 && func_975(iParam1, 860729266))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 860729266);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 4096 > 0 && func_975(iParam1, 879715242))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 879715242);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 128 > 0 && func_975(iParam1, 1606325429))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1606325429);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 256 > 0 && func_975(iParam1, 1743550585))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1743550585);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 512 > 0 && func_975(iParam1, 1064646155))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1064646155);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 1024 > 0 && func_975(iParam1, -536694793))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -536694793);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 2048 > 0 && func_975(iParam1, -1304053509))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -1304053509);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & -2147483648 > 0 && func_975(iParam1, 718939204))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 718939204);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 65536 > 0 && func_975(iParam1, -972364774))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -972364774);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 16384 > 0 && func_975(iParam1, -1100875244))
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
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 262144 > 0 && func_975(iParam1, 1153596794))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1153596794);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 524288 > 0 && func_975(iParam1, 1016389820))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1016389820);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 1048576 > 0 && func_975(iParam1, -726966617))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -726966617);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 2097152 > 0 && func_975(iParam1, 1365901568))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1365901568);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 32768 > 0 && func_975(iParam1, -1658942149))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -1658942149);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 131072 > 0 && func_975(iParam1, -1980913856))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -1980913856);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 4194304 > 0 && func_975(iParam1, 491764525))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 491764525);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 8388608 > 0 && func_975(iParam1, -76015264))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -76015264);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 16777216 > 0 && func_975(iParam1, 622113465))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 622113465);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 33554432 > 0 && func_975(iParam1, 781533162))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 781533162);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 67108864 > 0 && func_975(iParam1, -271415321))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -271415321);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 134217728 > 0 && func_975(iParam1, -1683207356))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -1683207356);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 268435456 > 0 && func_975(iParam1, -254794762))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -254794762);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 536870912 > 0 && func_975(iParam1, 609066278))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 609066278);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 1073741824 > 0 && func_975(iParam1, -1712783565))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -1712783565);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 8192 > 0 && func_975(iParam1, 1544915253))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1544915253);
	}
	if (bParam2)
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_57 = 1;
	}
}

void func_980(int iParam0)
{
	func_1391(iParam0, 1);
	func_1391(iParam0, 128);
	func_1391(iParam0, 256);
	func_1391(iParam0, 512);
	func_1391(iParam0, 1024);
	func_1391(iParam0, 2048);
	func_1391(iParam0, 4096);
	func_1391(iParam0, 65536);
	func_1391(iParam0, 16384);
	func_1391(iParam0, 262144);
	func_1391(iParam0, 524288);
	func_1391(iParam0, 1048576);
	func_1391(iParam0, 2097152);
	func_1391(iParam0, 32768);
	func_1391(iParam0, 131072);
	func_1391(iParam0, 134217728);
	func_1391(iParam0, 1073741824);
}

void func_981(int iParam0, bool bParam1)
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

void func_982(var uParam0, var uParam1, bool bParam2)
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

bool func_983(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_726(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
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
							if (func_726(iVar4) && iVar4 != bVar0)
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
	if (func_56() == -1 && !func_1088(bVar0))
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
				if (func_1088(joaat("weapon_repeater_carbine")))
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
		if (iParam0 != Global_35 && func_726(bVar0))
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
		func_674(bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_1392(iParam0, &bVar0, &fVar25);
		bVar0 = WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_1095(bVar0))
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

int func_984(int iParam0, int iParam1, bool bParam2)
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

void func_985(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_984(iParam0, 0, 0);
	if (func_1047(iParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, iParam2, iParam6);
		if (fParam5 > 0f)
		{
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_1393(iParam0, iParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_1394(iParam0, 1);
			}
			else
			{
				func_1395(iParam0, 1);
			}
		}
		else
		{
			func_1396(iParam0, 1);
		}
		if (bParam7)
		{
			OBJECT::_0x276AAF0F1C7F2494(iParam0, 1);
		}
	}
	else if (func_1397())
	{
	}
	else if (NETWORK::NETWORK_IS_IN_SESSION())
	{
	}
}

void func_986(int iParam0)
{
	int iVar0;

	if (!func_511(iParam0))
	{
		return;
	}
	if (!MISC::_0x716F17F8A0419F95(((*Global_1360165)[iParam0 /*1157*/])->f_1))
	{
		iVar0 = func_395(iParam0);
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

void func_987(int iParam0)
{
	if (func_478(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_172(iParam0)))
		{
			func_531(iParam0, 67108864, 1);
			func_410(iParam0, 19, 1);
		}
	}
}

float func_988(int iParam0)
{
	if (!func_511(iParam0))
	{
		return 0f;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_134;
}

void func_989(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = func_172(iParam0);
	iVar1 = func_536(iParam0, 0);
	func_1295(iParam0, iVar0);
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

bool func_990(int iParam0)
{
	if (!func_511(iParam0))
	{
		return false;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_991(int iParam0, int iParam1, bool bParam2)
{
	if (!func_511(iParam0))
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

int func_992(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_511(iParam0))
	{
		return 0;
	}
	iVar0 = func_131(iParam0);
	if (func_324(iVar0, 0))
	{
		if (func_324(PED::_0xB676EFDA03DADA52(iVar0, 0), 0) && !bParam4)
		{
			return 0;
		}
		if ((iParam1 || !func_479(iParam0)) || func_990(iParam0))
		{
			if (iParam2 || !(ENTITY::IS_ENTITY_ON_SCREEN(iVar0) && func_1398(PLAYER::PLAYER_PED_ID(), iVar0, 1) < 10000f))
			{
				iVar1 = func_397(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
					}
					func_1399(iParam0);
					_NAMESPACE48::_0x7B204F88F6C3D287(func_838(iParam0, 0));
					_NAMESPACE48::_0xFCC6DB8DBE709BC8(func_838(iParam0, 0));
					func_1400(iParam0);
				}
			}
			else
			{
				if (func_396(iParam0, 32768, 1))
				{
					iVar2 = func_838(iParam0, 0);
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
		if (func_324(((*Global_1360165)[iParam0 /*1157*/])->f_124, 0))
		{
			if (func_396(iParam0, 32768, 1))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(((*Global_1360165)[iParam0 /*1157*/])->f_124))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(((*Global_1360165)[iParam0 /*1157*/])->f_124, true, true);
				}
				func_1399(iParam0);
				_NAMESPACE48::_0x7B204F88F6C3D287(func_838(iParam0, 0));
				_NAMESPACE48::_0xFCC6DB8DBE709BC8(func_838(iParam0, 0));
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(((*Global_1360165)[iParam0 /*1157*/])->f_124, true, true);
				func_1399(iParam0);
				PED::DELETE_PED(&(((*Global_1360165)[iParam0 /*1157*/])->f_124));
			}
		}
	}
	((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 = 0;
	func_1401(iParam0, 0);
	return 1;
}

void func_993(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_994(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_995(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
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

void func_996(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
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

void func_997(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
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

void func_998(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
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

int func_999(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_1000(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_1001(int iParam0, int iParam1, int iParam2, int iParam3)
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

void func_1002(int iParam0, float fParam1)
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

char* func_1003(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

var func_1004(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_1402(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_1005(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_1006(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_1007(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_1008(int iParam0, int iParam1)
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

void func_1009(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1403(uParam0, iParam6);
	func_1404(uParam0, iParam5);
	func_1405(uParam0, iParam4);
	func_1406(uParam0, iParam3);
	func_1407(uParam0, iParam2);
	func_1408(uParam0, iParam1);
}

bool func_1010(int iParam0, int iParam1)
{
	if (func_56() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iParam0]), iParam1);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iParam0]), iParam1);
}

int func_1011(int iParam0)
{
	if (func_56() != -1)
	{
		if (func_1013(iParam0, 4))
		{
			return 0;
		}
	}
	else if (func_1013(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

int func_1012(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_1013(iParam0, 65536) && !func_1013(iParam0, 32768))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if ((Global_40.f_7756[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_1013(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0 /*3*/] - iVar1);
			if ((Global_40.f_7756[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && func_1013(iParam0, 32768))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_1013(int iParam0, int iParam1)
{
	return ((Global_1905944->f_22[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

bool func_1014()
{
	return Global_1905944->f_5694;
}

bool func_1015(int iParam0)
{
	return func_560(iParam0, 2);
}

void func_1016(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		if (((*Global_1945938)[iParam0 /*18*/])->f_5 == 5 && !func_560(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, 0);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
		}
	}
}

void func_1017(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
	}
}

void func_1018(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 || iParam1);
}

int func_1019(int iParam0)
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

bool func_1020(int iParam0)
{
	return func_666(iParam0) == -1784221369;
}

struct<4> func_1021(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_646(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_491(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_1022(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (func_1409(iParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_1410(*uParam1, &Var0, bParam6, 0))
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
	if (!func_673(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_491(bParam6), uParam1, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_1023(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<4> Var0;
	struct<10> Var4;
	var uVar26;
	int iVar27;
	int iVar28;

	func_1411(&iParam0);
	if (!func_646(iParam0, 0))
	{
		return 0;
	}
	if (!func_673(0))
	{
		bParam3 = true;
	}
	if (func_1057(iParam0) && WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
		{
			Var0 = { func_1412(0) };
			Var4.f_9 = -1591664384;
			if (!func_1090(iParam0, &Var0, 1728382685, 0))
			{
				return 0;
			}
			else if (func_1091(iParam0, &Var4, 1728382685))
			{
				return 0;
			}
			if (func_1413(iParam0, 1))
			{
				if (!func_1090(iParam0, &Var0, -649335959, 0))
				{
					return 0;
				}
				else if (func_1091(iParam0, &Var4, -649335959))
				{
					return 0;
				}
			}
		}
		else if (!func_1414(iParam0, &uVar26, 0))
		{
			return 0;
		}
		return 1;
	}
	iVar27 = func_1062(iParam0, uParam1, bParam3, bParam4);
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
		iVar28 = func_1415(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = INVENTORY::_0xE787F05DFC977BDE(func_491(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return 1;
	}
	return 0;
}

int func_1024(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_646(iParam0, 0))
	{
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return 0;
	}
	if (func_1023(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return 0;
	}
	if (!func_673(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_491(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_1025(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = func_1416(iParam0, 1);
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
	return 1;
}

bool func_1026(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

int func_1027()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

var func_1028(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || BUILTIN::SHIFT_LEFT(iParam0 & 1023, 5)) || BUILTIN::SHIFT_LEFT(iParam1 & 16383, 15));
}

int func_1029(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	int iVar1;

	if (!func_1417(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_1027())
	{
		return -1;
	}
	uVar0 = func_1028(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_1418(iVar1, 0);
	func_1419(iVar1, 0);
	func_1420(iVar1, 0);
	func_1421(iVar1, 0);
	func_1422(iVar1, uVar0);
	if (iParam4 != 0)
	{
		func_1423(iVar1, iParam4);
	}
	return iVar1;
}

bool func_1030(int iParam0, int iParam1)
{
	return func_932((Global_1914319->f_3[iParam0 /*446*/])->f_6, iParam1);
}

int func_1031(int iParam0)
{
	int iVar0;

	iVar0 = func_840(iParam0);
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

int func_1032(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_56() != -1)
	{
		return 0;
	}
	if (!func_1424(iParam0, 0))
	{
		return 0;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam1))
	{
		return 0;
	}
	iVar0 = func_840(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	VOLUME::_0xE2BE6FFA4A13CBB0(iParam1, iVar0, iParam2);
	return 1;
}

int func_1033(int iParam0)
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

int func_1034(int iParam0)
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

void func_1035(int iParam0, var uParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(&(uParam1->f_9[iParam0 /*9*/])))
	{
		OBJECT::DELETE_OBJECT(uParam1->f_9[iParam0 /*9*/]);
	}
	MISC::CLEAR_BIT(&(uParam1->f_255), iParam0);
}

int func_1036(int iParam0)
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

int func_1037(int iParam0)
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

void func_1038(int iParam0, var uParam1)
{
	vector3 vVar0;

	vVar0 = { func_1425(uParam1->f_3, uParam1->f_3.f_3, (uParam1->f_9[iParam0 /*9*/])->f_2) };
	uParam1->f_9[iParam0 /*9*/] = OBJECT::CREATE_OBJECT((uParam1->f_9[iParam0 /*9*/])->f_1, vVar0, false, true, false, false, true);
	ENTITY::SET_ENTITY_ROTATION(&(uParam1->f_9[iParam0 /*9*/]), (uParam1->f_9[iParam0 /*9*/])->f_5, 2, true);
	ENTITY::SET_ENTITY_HAS_GRAVITY(&(uParam1->f_9[iParam0 /*9*/]), true);
	ENTITY::SET_ENTITY_COLLISION(&(uParam1->f_9[iParam0 /*9*/]), true, false);
	func_1426(iParam0, uParam1);
	MISC::SET_BIT(&(uParam1->f_255), iParam0);
}

struct<14> func_1039(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_1040(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	*uParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_491(bParam3), uParam0, uParam2);
	if (*uParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_1041(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_1042(int iParam0)
{
	switch (iParam0)
	{
		case 1846915545:
			if (func_1427(-1329287819, 3) == 0)
			{
				return 1;
			}
			break;
		case 1641833719:
			if (func_1427(765991018, 3) == 0)
			{
				return 1;
			}
			break;
		case -1188120304:
			if (func_1427(-837651311, 3) == 0)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_1043(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<5> Var0;
	struct<4> Var5;

	if (func_56() == 0)
	{
		return 0;
	}
	if (!func_646(iParam0, 0))
	{
		return 0;
	}
	if (iParam2 < 1)
	{
		return 0;
	}
	Var0 = { func_885(0) };
	Var0.f_4 = func_1428(iParam1);
	Var5 = { func_1021(iParam0, Var0, Var0.f_4, 0) };
	if (!func_1022(iParam0, &Var5, &Var0, iParam2, iParam3, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_1044(int iParam0)
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

bool func_1045(int iParam0)
{
	if (!func_402(iParam0))
	{
		return false;
	}
	return SCRIPTS::_DOES_THREAD_EXIST(((*Global_1895087)[iParam0 /*3*/])->f_2);
}

void func_1046(int iParam0)
{
	func_1429(func_1034(iParam0));
}

int func_1047(int iParam0)
{
	if (func_1430(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return 0;
}

int func_1048()
{
	return 1;
}

int func_1049()
{
	if (func_56() != 0)
	{
		return 1;
	}
	return 1;
}

var func_1050(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_1051(vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 51)
	{
		if (func_1431(vParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

char* func_1052(int iParam0)
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

int func_1053(int iParam0)
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

bool func_1054(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_1055(int iParam0)
{
	return func_642(iParam0, Global_1310750->f_16072 | 64);
}

void func_1056(int iParam0)
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

bool func_1057(int iParam0)
{
	return func_666(iParam0) == -427144552;
}

int func_1058(int iParam0)
{
	var uVar0;

	if (func_56() != -1)
	{
		return 0;
	}
	if (func_668(iParam0, 1048576))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return func_1023(iParam0, &uVar0, 1, 0, 0);
	}
	return func_694(iParam0, 1, 0);
}

void func_1059(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4)
{
	int iVar0;

	if (func_666(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_672(iParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return;
	}
	if (iParam2 || !func_1088(iVar0))
	{
		if (func_56() == -1)
		{
			func_266(iVar0);
		}
		if (iParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, 0) && func_650(iParam0, 0, 0) == 0))
		{
			if (!*uParam3 && !iParam4 == 1248274121)
			{
				func_725(iParam0, iParam1, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*uParam3 = 1;
			}
		}
	}
}

void func_1060(int iParam0, var uParam1)
{
	int iVar0;

	if (func_667(iParam0, 58855631))
	{
		func_1432(iParam0, -915411861, &iVar0, 1);
		*uParam1 = (*uParam1 * iVar0);
	}
}

struct<5> func_1061(int iParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;

	Var0 = { func_885(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_666(iParam0))
	{
		case -1037537535:
			if (!INVENTORY::_0x780C5B9AE2819807(iParam0, 1034665895))
			{
				Var0 = { func_1021(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_1412(bParam1) };
			if (iParam2 && func_1413(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_1090(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_1090(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_1091(iParam0, &Var5, 1728382685))
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
			Var0 = { func_1433(bParam1) };
			switch (func_492(iParam0))
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
			if (func_1434(iParam0, -1823706425))
			{
				Var0 = { func_1021(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, -1838434463);
			}
			else if (func_1434(iParam0, -1483207246))
			{
				Var0 = { func_1021(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_1410(Var0, &Var27, bParam1, 0))
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

int func_1062(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_646(iParam0, 0))
	{
		return 0;
	}
	if (!func_673(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_0xE80E50BEE276A54A(iParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_491(bParam3), iParam0);
}

int func_1063(int iParam0, bool bParam1)
{
	if (func_677(iParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_491(bParam1), iParam0, 0);
}

int func_1064()
{
	if (func_56() != -1)
	{
		return 0;
	}
	if (!func_659())
	{
		return 0;
	}
	if (!func_488(((*Global_1835011)[1 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_488(((*Global_1835011)[2 /*74*/])->f_1, 1) && func_488(((*Global_1347702)[120 /*49*/])->f_15, 1)) && !func_488(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_488(((*Global_1835011)[37 /*74*/])->f_1, 1) && !func_488(((*Global_1835011)[39 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_488(((*Global_1835011)[57 /*74*/])->f_1, 1) && !func_488(((*Global_1835011)[60 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_488(((*Global_1835011)[26 /*74*/])->f_1, 1) && !func_488(((*Global_1347702)[67 /*49*/])->f_15, 1))
	{
		return 1;
	}
	if ((func_488(((*Global_1835011)[62 /*74*/])->f_1, 1) && func_488(((*Global_1835011)[63 /*74*/])->f_1, 1)) && !func_488(((*Global_1835011)[64 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_488(((*Global_1835011)[75 /*74*/])->f_1, 1) && !func_488(((*Global_1347702)[1 /*49*/])->f_15, 1))
	{
		return 1;
	}
	if (func_488(((*Global_1835011)[76 /*74*/])->f_1, 1) && !func_488(((*Global_1835011)[77 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_488(((*Global_1835011)[40 /*74*/])->f_1, 1) && func_488(((*Global_1835011)[41 /*74*/])->f_1, 1)) && !func_488(((*Global_1835011)[44 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_488(((*Global_1835011)[62 /*74*/])->f_1, 1) && func_488(((*Global_1835011)[63 /*74*/])->f_1, 1)) && !func_488(((*Global_1835011)[64 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_488(((*Global_1835011)[65 /*74*/])->f_1, 1) && func_488(((*Global_1835011)[66 /*74*/])->f_1, 1)) && !func_488(((*Global_1835011)[67 /*74*/])->f_1, 1))
	{
		return 1;
	}
	return 0;
}

int func_1065(int iParam0, int iParam1)
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

int func_1066(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_646(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_666(iParam0);
	if (iVar0 == -427144552 && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_0x5C2EA6C44F515F34(iParam0);
	}
	else if (iVar0 == 307971639 && WEAPON::_0x1F7977C9101F807F(iParam0))
	{
		return iParam0;
	}
	if (func_667(iParam0, 1399091007))
	{
		func_1134(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_1067(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_1039(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_1435(&Var0, func_1412(0));
	}
	if (!func_1040(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_1044(iVar14);
	return uVar15;
}

int func_1068()
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 0);
}

int func_1069(int iParam0)
{
	return COLLECTION::_0xEC3959E9950BF56B(iParam0);
}

void func_1070(int iParam0)
{
	int iVar0;
	float fVar1;

	if (func_56() != -1)
	{
		return;
	}
	iVar0 = func_1436(iParam0);
	fVar1 = func_1437(iParam0);
	if ((Global_1347477->f_117 || !func_669(31)) || !func_1438(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_1439(iVar0) >= 7)
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
	func_1440(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_1164(MISC::_CREATE_VAR_STRING(6, func_1441(iParam0), fVar1), "itemtype_textures", func_1442(iVar0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

int func_1071(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 554799588;
		case 1:
			return -1021394391;
		case 2:
			return -987306668;
		case 3:
			return -1028735103;
		case 4:
			return 515229791;
		case 5:
			return -1230863414;
		case 6:
			return 232875659;
		case 7:
			return 1423129537;
		case 8:
			return -435742319;
		case 9:
			return -1854702679;
		case 10:
			return 1265323898;
		case 11:
			return -479775696;
		default:
			break;
	}
	return 0;
}

int func_1072(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;

	if (!func_1353(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_INT(&uVar5, &Var0);
	return uVar5;
}

char* func_1073(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
{
	switch (iParam1)
	{
		case -2076669067:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_CC_COMPLETE";
			}
			else if (func_662() >= 12)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", func_1443(), 12);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_1444(), 12);
			}
			break;
		case -440187297:
			if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_DB_COMPLETE";
			}
			else if (func_1115() >= 30)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_POSTED_OBJ", func_1445(), 30);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_FOUND_OBJ", func_1115(), 30);
			}
			break;
		case -1531394072:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_EX_COMPLETE";
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_EX_ITEMS_COLLECTED_OBJ", sParam4, sParam5);
			}
			break;
		case 1995362678:
			if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_LF_COMPLETE";
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_CAUGHT_OBJ", func_1446(), 13);
			}
			break;
		case 2103522376:
			if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_RC_COMPLETE";
			}
			else if (func_1116() >= 10)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_POSTED_OBJ", func_1447(), 10);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_FOUND_OBJ", func_1116(), 10);
			}
			break;
		case 678508515:
			if (iParam2 == 3)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 4)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_READ_VACATION");
			}
			else if (iParam2 == 5)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_ON_VACATION");
			}
			else if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_RETURN_POST_OFFICE";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_TX_COMPLETE";
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_1072(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

int func_1074(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -2076669067)
	{
		if (iParam1 == 38816757)
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, 578982838))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, 578982838);
			}
		}
	}
	else if (iParam2 == -440187297)
	{
		if (iParam1 == -1223580455)
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, 349797279))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, 349797279);
			}
		}
	}
	else if (iParam2 == 2103522376)
	{
		if (iParam1 == -170865073)
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, 1974744712))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, 1974744712);
			}
		}
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_REMOVE_ENTRY(3, iParam1);
	}
	return 1;
}

int func_1075(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);
	}
	return 1;
}

int func_1076(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(sParam2), sParam2, 0, 0, 0);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iParam1, 1);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iParam1, iParam6, iParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iParam1, MISC::_CREATE_VAR_STRING(2, sParam3));
	return 1;
}

int func_1077(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_1448(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_694(iVar2, 1, 0) || func_1450(func_1449(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1081(func_1448(iVar0))), func_1081(func_1448(iVar0)), bVar1, 1, 0);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1115() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1451(iVar0)), func_1451(iVar0), bVar1, 1, 0);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1445() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1451(iVar0)), func_1451(iVar0), bVar1, 1, 0);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1451(iVar0)), func_1451(iVar0), bVar1, 1, 0);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_1126(iParam3, func_1452(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1122(iVar2) - iParam7) >= func_1072(iParam3, func_1453(iVar0));
				}
				else
				{
					bVar1 = func_1122(iVar2) >= func_1072(iParam3, func_1453(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_1122(iVar2) + iParam7) >= func_1072(iParam3, func_1453(iVar0));
			}
			else
			{
				bVar1 = func_1122(iVar2) >= func_1072(iParam3, func_1453(iVar0));
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1454(iVar2)), func_1454(iVar2), bVar1, 1, 0);
		}
		if (iParam2 == 1995362678)
		{
			if (func_1455(COLLECTION::_0x126CBEBBA46693CF(iVar0, 1995362678, 0)))
			{
				bVar1 = true;
			}
			else if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = false;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1456(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0))), func_1456(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0)), bVar1, 1, 0);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1116() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1457(iVar0)), func_1457(iVar0), bVar1, 1, 0);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1447() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1457(iVar0)), func_1457(iVar0), bVar1, 1, 0);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1457(iVar0)), func_1457(iVar0), bVar1, 1, 0);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_1126(iParam3, func_1452(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1122(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_1458(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_1458(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1459(iVar2)), func_1459(iVar2), bVar1, 1, 0);
		}
		iVar0++;
	}
	return 1;
}

int func_1078(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = 0;
	if (iParam3 == 8)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	if (iParam2 == -2076669067)
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_CC_ITEMS_DELIVERED"), "COL_CC_ITEMS_DELIVERED", iVar0, 1, 0);
	}
	if (iParam2 == -1531394072)
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_EX_ITEMS_DELIVERED"), "COL_EX_ITEMS_DELIVERED", iVar0, 1, 0);
	}
	if (iParam2 == 1995362678)
	{
		if (func_1446() >= 13)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 0;
		}
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_LF_ITEMS_DELIVERED"), "COL_LF_ITEMS_DELIVERED", iVar0, 1, 0);
	}
	if (((((((iParam3 == 7 || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 0) || iParam3 == 1) || iParam3 == 2) || iParam3 == 8)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	if (iParam2 == 678508515)
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_TX_CARCASSES_MAILED"), "COL_TX_CARCASSES_MAILED", iVar0, 1, 0);
	}
	return 1;
}

int func_1079(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_476(func_481(0)) && ((func_1460(0) == 1 || func_1460(0) == 8) || func_1460(0) == 6))
	{
		iParam3 = 7;
	}
	if ((iParam2 == -440187297 || iParam2 == 1995362678) || iParam2 == 2103522376)
	{
		if (iParam3 == 7)
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(3, iParam1, 1, "");
		}
	}
	else if (iParam2 == 678508515)
	{
		if (iParam3 == 7)
		{
			if (bParam4)
			{
			}
			else
			{
				UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(3, iParam1, 1, "");
			}
		}
	}
	return 1;
}

var func_1080(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	struct<5> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = iParam7;
	Var0.f_1 = sParam8;
	Var0.f_2 = sParam9;
	Var0.f_3 = iParam11;
	Var0.f_4 = iParam4;
	Var0.f_4.f_1 = iParam6;
	Var0.f_4.f_2 = sParam5;
	Var13.f_7 = 1;
	Var13 = iParam10;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = _NAMESPACE71::_0x26E87218390E6729(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

char* func_1081(int iParam0)
{
	switch (iParam0)
	{
		case 554799588:
			return "COL_CC_GUN_SET";
		case -1021394391:
			return "COL_CC_ART_SET";
		case -987306668:
			return "COL_CC_LND_SET";
		case -1028735103:
			return "COL_CC_GRL_SET";
		case 515229791:
			return "COL_CC_PLT_SET";
		case -1230863414:
			return "COL_CC_ACT_SET";
		case 232875659:
			return "COL_CC_AML_SET";
		case 1423129537:
			return "COL_CC_VEH_SET";
		case -435742319:
			return "COL_CC_SPT_SET";
		case -1854702679:
			return "COL_CC_INV_SET";
		case 1265323898:
			return "COL_CC_HOR_SET";
		case -479775696:
			return "COL_CC_PAM_SET";
		default:
			break;
	}
	return "";
}

var func_1082(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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
	uVar21 = _NAMESPACE71::_0x26E87218390E6729(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

int func_1083(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_1084(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_1085(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	MISC::SET_BIT(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_1086(int iParam0)
{
	int iVar0;

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
			func_1461(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			break;
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			func_1462(1);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_1462(2);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_1462(3);
			break;
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
		case 22:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			break;
		case 31:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 32:
			break;
		case 33:
			func_1463(1);
			break;
		case 34:
			func_1464(1);
			break;
		case 35:
			func_1465(1);
			break;
		case 36:
			break;
		case 37:
			func_1466(0);
			break;
		case 38:
			func_1467(0);
			break;
		case 39:
			func_1468(0);
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 43:
			break;
		case 1:
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 2:
			if ((!&Global_1879534 && func_659()) && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_1082("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 2);
			func_202(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_659()) && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_1082("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 3);
			func_202(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_659()) && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_1082("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 4, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 4);
			func_202(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_659()) && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_1082("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 4, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 5, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 5);
			func_202(589, 0);
			break;
		case 24:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-200143754, true);
			UNLOCK::_UNLOCK_SET_VISIBLE(-200143754, true);
			WEAPON::_0x83B8D50EB9446BBA(PLAYER::PLAYER_PED_ID(), 1);
			if (func_56() == -1)
			{
				if (!func_1156(99217379) || func_1469(99217379) == 2110595215)
				{
					if (func_142())
					{
						iVar0 = -1515874150; /* GXTEntry: "John\'s Off-Hand Holster" */
					}
					else
					{
						iVar0 = 899611344; /* GXTEntry: "Off-Hand Holster" */
					}
					if (!func_694(iVar0, 1, 0))
					{
						func_718(iVar0, 1, 752097756);
					}
					func_697(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_56() == -1)
			{
				if (!func_694(1013902307, 1, 0))
				{
					func_718(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_56() == -1)
			{
				if (!func_694(1013902307, 1, 0))
				{
					func_718(1013902307, 1, 752097756);
				}
				if (!func_694(142640135, 1, 0))
				{
					func_718(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_56() == -1)
			{
				if (!func_694(786809402, 1, 0))
				{
					func_718(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_56() == -1)
			{
				if (!func_694(786809402, 1, 0))
				{
					func_718(786809402, 1, 752097756);
				}
				if (!func_694(-518019409, 1, 0))
				{
					func_718(-518019409, 1, 752097756);
				}
			}
			break;
		case 23:
			PLAYER::_0x5B9813ECF7633FE8(0);
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
		case 30:
			break;
		case 44:
			break;
		case 45:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-843169622, true);
			Global_1935630->f_47 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 46:
			func_1470();
			break;
		case 47:
			PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 52:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-78935213, true);
			break;
		case 53:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-384786155, true);
			break;
		case 54:
			UNLOCK::_UNLOCK_SET_UNLOCKED(296662302, true);
			break;
		case 55:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-1871453000, true);
			break;
		case 56:
			UNLOCK::_UNLOCK_SET_UNLOCKED(1397349651, true);
			break;
	}
}

int func_1087(int iParam0)
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

int func_1088(int iParam0)
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

int func_1089(int iParam0, int iParam1)
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

bool func_1090(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_1415(iParam0, *uParam1, iParam2, bParam3) > 0;
}

int func_1091(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_1471(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

void func_1092(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::_0xD3750CCC00635FC2(iParam0))
	{
		iVar1 = func_1472(WEAPON::_0xD3750CCC00635FC2(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

void func_1093(int iParam0)
{
	char* sVar0;
	char* sVar1;
	int iVar2;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630->f_12)
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
	iVar2 = func_548();
	func_550(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_35, sVar1, iVar2);
}

int func_1094(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_1473(iParam0))
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

bool func_1095(bool bParam0)
{
	return WEAPON::_0x1F7977C9101F807F(WEAPON::_0x5C2EA6C44F515F34(bParam0));
}

int func_1096(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_0x7AA043F6C41D151E(iParam0);
	if (WEAPON::_0x705BE297EEBDB95D(iVar0))
	{
		if (WEAPON::_0x0556E9D2ECF39D01(iVar0))
		{
			if (!func_669(50))
			{
				if (!func_669(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (WEAPON::_0xD955FEE4B87AFA07(iVar0))
		{
			if (!func_669(51))
			{
				if (!func_669(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_1097()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797);
}

int func_1098(int iParam0, int iParam1, var uParam2)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	if (!func_646(iParam1, 0))
	{
		return 0;
	}
	if (func_666(iParam1) != -1037537535)
	{
		return 0;
	}
	bVar1 = func_56() != -1;
	iVar2 = PED::_GET_METAPED_TYPE(iParam0);
	if (func_492(iParam1) == -999503751)
	{
		return 1;
	}
	iVar4 = func_1474(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return 0;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_667(iParam1, 866047851))
	{
		iVar5 = func_949(iVar4, 1);
		if (func_1475(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5 /*3*/] != iVar8)
		{
			*uParam2 = -265166256; /* GXTEntry: "You are wearing too many of this item. Remove some before equipping more." */
			return 0;
		}
		bVar7 = true;
	}
	switch (iVar4)
	{
		case 1742327865:
			if (PED::_0x5FF9A878C3D115B8(iVar8, iVar2, bVar1) == 2056714954 && PED::_0xFB4891BD7578CDC1(iParam0, -1455751347))
			{
				*uParam2 = 111371848; /* GXTEntry: "Your shirt does not support this type of neckwear." */
				return 0;
			}
			iVar5 = 10;
			iVar3 = func_492(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745; /* GXTEntry: "Your neckwear does not allow for changing your collar." */
				return 0;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5 /*3*/] != &Global_1946804->f_57[iVar5 /*11*/] && func_667(iParam1, -1638171711))
			{
				*uParam2 = 187275271; /* GXTEntry: "Your chaps do not support this." */
				return 0;
			}
			break;
		case 1900541263:
			iVar5 = 36;
			if (&Global_1946804->f_1497.f_1[iVar5 /*3*/] == &Global_1946804->f_57[iVar5 /*11*/])
			{
				*uParam2 = 2143522536;
				return 0;
			}
			if (PED::_0xFB4891BD7578CDC1(iParam0, -1968556728))
			{
				*uParam2 = -849690042; /* GXTEntry: "Your boots do not support having spurs." */
				return 0;
			}
			break;
		case -1505978566:
			if (func_485(1868067663, &uVar0))
			{
				*uParam2 = 939463734; /* GXTEntry: "Item cannot be worn with coats." */
				return 0;
			}
		case -1130865351:
		case -426430150:
		case 1788623170:
			if (!bVar7)
			{
			}
			else
			{
				iVar11 = PED::_0x90403E8107B60E81(iParam0);
				iVar10 = func_1476(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_1476(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763; /* GXTEntry: "You are wearing too many items. Something must be removed to preview other items." +
    "" */
					return 0;
				}
				Jump @726; //curOff = 583
				iVar3 = func_492(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6 /*11*/] && func_667(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]), -1638171711))
				{
					*uParam2 = -357399012; /* GXTEntry: "Your boots do not support this." */
					return 0;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (&Global_1946804->f_1497.f_1[iVar5 /*3*/] == &Global_1946804->f_57[iVar5 /*11*/])
					{
						*uParam2 = 2143522536;
						return 0;
					}
				}
			}
			*uParam2 = 0;
			return 1;
		}

void func_1099()
{
	PLAYER::_0xFE7C9CF376D23342(PLAYER::PLAYER_ID(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_1100()
{
	float fVar0;
	float fVar1;

	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	PLAYER::SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(PLAYER::PLAYER_ID(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	PLAYER::_0x08E22898A6AF4905(PLAYER::PLAYER_ID(), (1f - fVar0));
	PLAYER::_0xFECA17CF3343694B(PLAYER::PLAYER_ID(), (1f - fVar0));
	PLAYER::_0xBBADFB5E5E5766FB(PLAYER::PLAYER_ID(), (1f - fVar1));
}

int func_1101()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_694(func_1477(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1102(int iParam0)
{
	switch (iParam0)
	{
		case -1217729597:
		case 363594903:
		case 425319238:
			return -62615415;
		case -1540119664:
		case 446659922:
		case 2100194981:
			return -832719552;
		case -1018798851:
		case -757567246:
		case -390982951:
			return -184823984;
		case -2054602073:
		case -585121677:
		case -378441099:
			return -1941112926;
		case 1566949660:
			return -121629511;
	}
	return 0;
}

int func_1103(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	switch (iParam0)
	{
		case -62615415:
			if (iParam1 == 425319238)
			{
				iVar0 = 363594903; /* GXTEntry: "Vintage Civil War Handcuffs" */
				iVar1 = -1217729597; /* GXTEntry: "Gold Jointed Bracelet" */
			}
			else if (iParam1 == 363594903)
			{
				iVar0 = 425319238; /* GXTEntry: "Legendary Alligator Tooth" */
				iVar1 = -1217729597; /* GXTEntry: "Gold Jointed Bracelet" */
			}
			else
			{
				iVar0 = 425319238; /* GXTEntry: "Legendary Alligator Tooth" */
				iVar1 = 363594903; /* GXTEntry: "Vintage Civil War Handcuffs" */
			}
			break;
		case -832719552:
			if (iParam1 == -1540119664)
			{
				iVar0 = 2100194981; /* GXTEntry: "Quartz Chunk" */
				iVar1 = 446659922; /* GXTEntry: "Silver Chain Bracelet" */
			}
			else if (iParam1 == 2100194981)
			{
				iVar0 = -1540119664; /* GXTEntry: "Legendary Bear Claw" */
				iVar1 = 446659922; /* GXTEntry: "Silver Chain Bracelet" */
			}
			else
			{
				iVar0 = -1540119664; /* GXTEntry: "Legendary Bear Claw" */
				iVar1 = 2100194981; /* GXTEntry: "Quartz Chunk" */
			}
			break;
		case -184823984:
			if (iParam1 == -390982951)
			{
				iVar0 = -1018798851; /* GXTEntry: "Cobalt Petrified Wood" */
				iVar1 = -757567246; /* GXTEntry: "Gold Earring" */
			}
			else if (iParam1 == -1018798851)
			{
				iVar0 = -390982951; /* GXTEntry: "Legendary Boar Tusk" */
				iVar1 = -757567246; /* GXTEntry: "Gold Earring" */
			}
			else
			{
				iVar0 = -390982951; /* GXTEntry: "Legendary Boar Tusk" */
				iVar1 = -1018798851; /* GXTEntry: "Cobalt Petrified Wood" */
			}
			break;
		case -1941112926:
			if (iParam1 == -2054602073)
			{
				iVar0 = -378441099; /* GXTEntry: "Abalone Shell Fragment" */
				iVar1 = -585121677; /* GXTEntry: "Silver Earring" */
			}
			else if (iParam1 == -378441099)
			{
				iVar0 = -2054602073; /* GXTEntry: "Legendary Bison Horn" */
				iVar1 = -585121677; /* GXTEntry: "Silver Earring" */
			}
			else
			{
				iVar0 = -2054602073; /* GXTEntry: "Legendary Bison Horn" */
				iVar1 = -378441099; /* GXTEntry: "Abalone Shell Fragment" */
			}
			break;
	}
	if (func_694(iVar0, 1, 0) && func_694(iVar1, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_1104(int iParam0)
{
	switch (iParam0)
	{
		case 968830139:
			return -224110471;
		case -649219937:
			return 1289585739;
		case -858567048:
			return -269048282;
		case -718162726:
			return 1441506783;
		case -1284282080:
			return 780305678;
		case -725003445:
			return 1811977508;
		case -1445630104:
			return -935153695;
		case 580970876:
			return 1299744282;
		case 967601061:
			return 1631240196;
		case 1946030891:
			return 517396587;
		case -1511404982:
			return 1620353486;
		case -944465290:
			return 1816443627;
		case -1701098855:
			return -127011478;
		default:
			break;
	}
	return 0;
}

int func_1105(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_1478(iParam0);
	if (iVar0 != -15)
	{
		func_550(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_1479(iVar0, 1);
	}
	return 0;
}

int func_1106(int iParam0, var uParam1, int iParam2)
{
	float fVar0;
	struct<13> Var1;
	int iVar24;
	int iVar25;

	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (uParam1 && func_694(1811977508, 1, 0))
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
			if (func_646(iVar25, 0) && func_667(iVar25, -1921346699))
			{
				return BUILTIN::CEIL((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_1107(int iParam0, char* sParam1, var uParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_1164(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_1108(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
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
		if (func_1480())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_1164(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_1481(iVar0);
			func_1482(iVar0, 0, 0);
		}
		func_1164(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, iParam4);
		func_638(func_1160(1644987397), iVar1);
	}
}

void func_1109(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_1110(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_1111(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_1112(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_1113(int iParam0)
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
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;

	iVar0 = 0;
	switch (iParam0)
	{
		case 1:
			iVar9 = 281887510; /* GXTEntry: "Little Egret Plume" */
			iVar10 = -164081697; /* GXTEntry: "Reddish Egret Plume" */
			iVar11 = -1161319399; /* GXTEntry: "Snowy Egret Plume" */
			iVar12 = 728781265; /* GXTEntry: "Lady of the Night Orchid" */
			break;
		case 2:
			iVar9 = -222563712; /* GXTEntry: "Heron Plume" */
			iVar10 = 1794857344; /* GXTEntry: "Lady Slipper Orchid" */
			iVar11 = 1952409553; /* GXTEntry: "Moccasin Flower Orchid" */
			break;
		case 4:
			iVar9 = 2116770557;
			iVar10 = -651064726; /* GXTEntry: "Acuna\'s Star Orchid" */
			iVar11 = -404270094; /* GXTEntry: "Cigar Orchid" */
			iVar12 = 2093126853; /* GXTEntry: "Ghost Orchid" */
			break;
		case 8:
			iVar9 = 2085530337; /* GXTEntry: "Spoonbill Plume" */
			iVar10 = -150591160; /* GXTEntry: "Night Scented Orchid" */
			iVar11 = -323969289; /* GXTEntry: "Rat Tail Orchid" */
			iVar12 = 1504361882; /* GXTEntry: "Spider Orchid" */
			break;
		case 16:
			iVar9 = -1521783510; /* GXTEntry: "Clamshell Orchid" */
			iVar10 = 1714875242; /* GXTEntry: "Dragon\'s Mouth Orchid" */
			iVar11 = 1019229063; /* GXTEntry: "Queen\'s Orchid" */
			iVar12 = 927763737; /* GXTEntry: "Sparrow\'s Egg Orchid" */
			break;
	}
	iVar1 = func_1122(iVar9);
	iVar2 = func_1122(iVar10);
	iVar3 = func_1122(iVar11);
	iVar5 = func_1123(iVar9);
	iVar6 = func_1123(iVar10);
	iVar7 = func_1123(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_1122(iVar12);
		iVar8 = func_1123(iVar12);
	}
	if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam0 != 2)
	{
		if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

void func_1114(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_1115()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1483(COLLECTION::_0x126CBEBBA46693CF(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1116()
{
	return COLLECTION::_0x5461C821D00FE15A(2103522376, 0);
}

int func_1117(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	switch (iParam0)
	{
		case -949689219:
			if (iParam1 == -1866642239)
			{
				iVar0 = 444160793; /* GXTEntry: "Perfect Squirrel Carcass" */
			}
			else if (iParam1 == 444160793)
			{
				iVar0 = -1866642239; /* GXTEntry: "Perfect Rabbit Carcass" */
			}
			break;
		case -1248968496:
			if (iParam1 == -1969404854)
			{
				iVar0 = 1761263432; /* GXTEntry: "Perfect Rat Carcass" */
				iVar1 = -843795569; /* GXTEntry: "Perfect Woodpecker Carcass" */
			}
			else if (iParam1 == 1761263432)
			{
				iVar0 = -1969404854; /* GXTEntry: "Perfect Cardinal Carcass" */
				iVar1 = -843795569; /* GXTEntry: "Perfect Woodpecker Carcass" */
			}
			else if (iParam1 == -843795569)
			{
				iVar0 = -1969404854; /* GXTEntry: "Perfect Cardinal Carcass" */
				iVar1 = 1761263432; /* GXTEntry: "Perfect Rat Carcass" */
			}
			break;
		case 1706369307:
			if (iParam1 == -832850511)
			{
				iVar0 = -935543049; /* GXTEntry: "Perfect Opossum Carcass" */
				iVar1 = -1464585113; /* GXTEntry: "Perfect Oriole Carcass" */
				iVar2 = -1290897778; /* GXTEntry: "Perfect Robin Carcass" */
			}
			else if (iParam1 == -935543049)
			{
				iVar0 = -832850511; /* GXTEntry: "Perfect Chipmunk Carcass" */
				iVar1 = -1464585113; /* GXTEntry: "Perfect Oriole Carcass" */
				iVar2 = -1290897778; /* GXTEntry: "Perfect Robin Carcass" */
			}
			else if (iParam1 == -1464585113)
			{
				iVar0 = -832850511; /* GXTEntry: "Perfect Chipmunk Carcass" */
				iVar1 = -935543049; /* GXTEntry: "Perfect Opossum Carcass" */
				iVar2 = -1290897778; /* GXTEntry: "Perfect Robin Carcass" */
			}
			else if (iParam1 == -1290897778)
			{
				iVar0 = -832850511; /* GXTEntry: "Perfect Chipmunk Carcass" */
				iVar1 = -935543049; /* GXTEntry: "Perfect Opossum Carcass" */
				iVar2 = -1464585113; /* GXTEntry: "Perfect Oriole Carcass" */
			}
			break;
		case 1520110311:
			if (iParam1 == -100913452)
			{
				iVar0 = 313332607; /* GXTEntry: "Perfect Sparrow Carcass" */
				iVar1 = -124539232; /* GXTEntry: "Perfect Toad Carcass" */
				iVar2 = 102446365; /* GXTEntry: "Perfect Skunk Carcass" */
				iVar3 = -1882344824; /* GXTEntry: "Perfect Bullfrog Carcass" */
			}
			else if (iParam1 == 313332607)
			{
				iVar0 = -100913452; /* GXTEntry: "Perfect Songbird Carcass" */
				iVar1 = -124539232; /* GXTEntry: "Perfect Toad Carcass" */
				iVar2 = 102446365; /* GXTEntry: "Perfect Skunk Carcass" */
				iVar3 = -1882344824; /* GXTEntry: "Perfect Bullfrog Carcass" */
			}
			else if (iParam1 == -124539232)
			{
				iVar0 = -100913452; /* GXTEntry: "Perfect Songbird Carcass" */
				iVar1 = 313332607; /* GXTEntry: "Perfect Sparrow Carcass" */
				iVar2 = 102446365; /* GXTEntry: "Perfect Skunk Carcass" */
				iVar3 = -1882344824; /* GXTEntry: "Perfect Bullfrog Carcass" */
			}
			else if (iParam1 == 102446365)
			{
				iVar0 = -100913452; /* GXTEntry: "Perfect Songbird Carcass" */
				iVar1 = 313332607; /* GXTEntry: "Perfect Sparrow Carcass" */
				iVar2 = -124539232; /* GXTEntry: "Perfect Toad Carcass" */
				iVar3 = -1882344824; /* GXTEntry: "Perfect Bullfrog Carcass" */
			}
			else if (iParam1 == -1882344824)
			{
				iVar0 = -100913452; /* GXTEntry: "Perfect Songbird Carcass" */
				iVar1 = 313332607; /* GXTEntry: "Perfect Sparrow Carcass" */
				iVar2 = -124539232; /* GXTEntry: "Perfect Toad Carcass" */
				iVar3 = 102446365; /* GXTEntry: "Perfect Skunk Carcass" */
			}
			break;
		case -1992824800:
			if (iParam1 == 905173572)
			{
				iVar0 = 1432949803; /* GXTEntry: "Perfect Bat Carcass" */
				iVar1 = -983831788; /* GXTEntry: "Perfect Blue Jay Carcass" */
				iVar2 = 59384454; /* GXTEntry: "Perfect Crow Carcass" */
				iVar3 = 924882045; /* GXTEntry: "Perfect Beaver Carcass" */
			}
			else if (iParam1 == 1432949803)
			{
				iVar0 = 905173572; /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
				iVar1 = -983831788; /* GXTEntry: "Perfect Blue Jay Carcass" */
				iVar2 = 59384454; /* GXTEntry: "Perfect Crow Carcass" */
				iVar3 = 924882045; /* GXTEntry: "Perfect Beaver Carcass" */
			}
			else if (iParam1 == -983831788)
			{
				iVar0 = 905173572; /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
				iVar1 = 1432949803; /* GXTEntry: "Perfect Bat Carcass" */
				iVar2 = 59384454; /* GXTEntry: "Perfect Crow Carcass" */
				iVar3 = 924882045; /* GXTEntry: "Perfect Beaver Carcass" */
			}
			else if (iParam1 == 59384454)
			{
				iVar0 = 905173572; /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
				iVar1 = 1432949803; /* GXTEntry: "Perfect Bat Carcass" */
				iVar2 = -983831788; /* GXTEntry: "Perfect Blue Jay Carcass" */
				iVar3 = 924882045; /* GXTEntry: "Perfect Beaver Carcass" */
			}
			else if (iParam1 == 924882045)
			{
				iVar0 = 905173572; /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
				iVar1 = 1432949803; /* GXTEntry: "Perfect Bat Carcass" */
				iVar2 = -983831788; /* GXTEntry: "Perfect Blue Jay Carcass" */
				iVar3 = 59384454; /* GXTEntry: "Perfect Crow Carcass" */
			}
			break;
	}
	if (iParam0 == -949689219)
	{
		if (bParam3)
		{
			if (func_1458(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1458(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1458(iVar0))
		{
			*iParam2++;
		}
		if (func_1458(iVar0))
		{
			return 1;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_1458(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1458(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1458(iVar0))
		{
			*iParam2++;
		}
		if (func_1458(iVar1))
		{
			*iParam2++;
		}
		if (func_1458(iVar0) && func_1458(iVar1))
		{
			return 1;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_1458(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1458(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1458(iVar0))
		{
			*iParam2++;
		}
		if (func_1458(iVar1))
		{
			*iParam2++;
		}
		if (func_1458(iVar2))
		{
			*iParam2++;
		}
		if ((func_1458(iVar0) && func_1458(iVar1)) && func_1458(iVar2))
		{
			return 1;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_1458(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1458(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1458(iVar0))
		{
			*iParam2++;
		}
		if (func_1458(iVar1))
		{
			*iParam2++;
		}
		if (func_1458(iVar2))
		{
			*iParam2++;
		}
		if (func_1458(iVar3))
		{
			*iParam2++;
		}
		if (((func_1458(iVar0) && func_1458(iVar1)) && func_1458(iVar2)) && func_1458(iVar3))
		{
			return 1;
		}
	}
	return 0;
}

void func_1118(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_1484(1497516462);
			func_1485(2016141805);
			func_1485(1010885152);
			func_1485(-502324015);
			break;
		case 2016141805:
			func_1485(1497516462);
			func_1484(2016141805);
			func_1485(1010885152);
			func_1485(-502324015);
			break;
		case 1010885152:
			func_1485(1497516462);
			func_1485(2016141805);
			func_1484(1010885152);
			func_1485(-502324015);
			break;
		case -502324015:
			func_1485(1497516462);
			func_1485(2016141805);
			func_1485(1010885152);
			func_1484(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_1485(-538889627);
			func_1485(-538880323);
			func_1485(-1056767524);
			func_1484(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_1486();
			func_1484(iParam0);
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
			func_1487();
			func_1484(iParam0);
			break;
		case 2019386373:
			func_1485(-664252410);
			func_1485(2109952320);
			func_1484(2019386373);
			break;
		case -664252410:
			func_1485(2019386373);
			func_1485(2109952320);
			func_1484(-664252410);
			break;
		case 2109952320:
			func_1485(2019386373);
			func_1485(-664252410);
			func_1484(2109952320);
			break;
		case -1674179981:
			func_1485(-1835851517);
			func_1485(-1838352012);
			func_1484(-1674179981);
			break;
		case -1835851517:
			func_1485(-1674179981);
			func_1485(-1838352012);
			func_1484(-1835851517);
			break;
		case -1838352012:
			func_1485(-1674179981);
			func_1485(-1835851517);
			func_1484(-1838352012);
			break;
		case -1717960576:
			func_1485(210001842);
			func_1484(-1717960576);
			break;
		case 210001842:
			func_1485(-1717960576);
			func_1484(210001842);
			break;
		case -150493654:
			func_1485(-1271608261);
			func_1485(1846061697);
			func_1485(-1145519186);
			func_1484(-150493654);
			break;
		case -1271608261:
			func_1485(-150493654);
			func_1485(1846061697);
			func_1485(-1145519186);
			func_1484(-1271608261);
			break;
		case 1846061697:
			func_1485(-150493654);
			func_1485(-1271608261);
			func_1485(-1145519186);
			func_1484(1846061697);
			break;
		case -1145519186:
			func_1485(-150493654);
			func_1485(-1271608261);
			func_1485(1846061697);
			func_1484(-1145519186);
			break;
		case 1766284049:
			func_1485(280705402);
			func_1485(1926308480);
			func_1484(1766284049);
			break;
		case 280705402:
			func_1485(1766284049);
			func_1485(1926308480);
			func_1484(280705402);
			break;
		case 1926308480:
			func_1485(1766284049);
			func_1485(280705402);
			func_1484(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_1485(439465264);
				func_1484(1609506757);
			}
			else
			{
				func_1485(1609506757);
				func_1485(439465264);
			}
			break;
		case 439465264:
			if (func_814(1609506757))
			{
				if (bParam1)
				{
					func_1484(439465264);
				}
				else
				{
					func_1485(439465264);
				}
			}
			break;
		case 1822001510:
			func_1485(-1612662716);
			func_1484(1822001510);
			break;
		case -1612662716:
			func_1485(1822001510);
			func_1484(-1612662716);
			break;
		case 1306158345:
			func_1485(1952610440);
			func_1485(-223469678);
			func_1485(-404698347);
			func_1485(1517904467);
			func_1484(1306158345);
			break;
		case 1952610440:
			func_1485(1306158345);
			func_1485(-223469678);
			func_1485(-404698347);
			func_1485(1517904467);
			func_1484(1952610440);
			break;
		case -223469678:
			func_1485(1306158345);
			func_1485(1952610440);
			func_1485(-404698347);
			func_1485(1517904467);
			func_1484(-223469678);
			break;
		case -404698347:
			func_1485(1306158345);
			func_1485(1952610440);
			func_1485(-223469678);
			func_1485(1517904467);
			func_1484(-404698347);
			break;
		case 1517904467:
			func_1485(1306158345);
			func_1485(1952610440);
			func_1485(-223469678);
			func_1485(-404698347);
			func_1484(1517904467);
			break;
		case 1376646519:
			func_1485(931649776);
			func_1485(-434590080);
			func_1485(1743048395);
			func_1485(449774763);
			func_1484(1376646519);
			break;
		case 931649776:
			func_1485(1376646519);
			func_1485(-434590080);
			func_1485(1743048395);
			func_1485(449774763);
			func_1484(931649776);
			break;
		case -434590080:
			func_1485(1376646519);
			func_1485(931649776);
			func_1485(1743048395);
			func_1485(449774763);
			func_1484(-434590080);
			break;
		case 1743048395:
			func_1485(1376646519);
			func_1485(931649776);
			func_1485(-434590080);
			func_1485(449774763);
			func_1484(1743048395);
			break;
		case 449774763:
			func_1485(1376646519);
			func_1485(931649776);
			func_1485(-434590080);
			func_1485(1743048395);
			func_1484(449774763);
			break;
		case -1414537028:
			func_1485(38162571);
			func_1485(1350391819);
			func_1485(54073871);
			func_1484(-1414537028);
			break;
		case 38162571:
			func_1485(-1414537028);
			func_1485(1350391819);
			func_1485(54073871);
			func_1484(38162571);
			break;
		case 1350391819:
			func_1485(-1414537028);
			func_1485(38162571);
			func_1485(54073871);
			func_1484(1350391819);
			break;
		case 54073871:
			func_1485(-1414537028);
			func_1485(38162571);
			func_1485(1350391819);
			func_1484(54073871);
			break;
		case 198200492:
			func_1484(198200492);
			func_1485(-1124061431);
			func_1485(52706132);
			func_1485(-259123672);
			break;
		case -1124061431:
			func_1485(198200492);
			func_1484(-1124061431);
			func_1485(52706132);
			func_1485(-259123672);
			break;
		case 52706132:
			func_1485(198200492);
			func_1485(-1124061431);
			func_1484(52706132);
			func_1485(-259123672);
			break;
		case -259123672:
			func_1485(198200492);
			func_1485(-1124061431);
			func_1485(52706132);
			func_1484(-259123672);
			break;
		case -919512195:
			func_1484(-919512195);
			func_1485(-1925798111);
			func_1485(420709909);
			func_1485(1703426636);
			break;
		case -1925798111:
			func_1484(-1925798111);
			func_1485(-919512195);
			func_1485(420709909);
			func_1485(1703426636);
			break;
		case 420709909:
			func_1484(420709909);
			func_1485(-919512195);
			func_1485(-1925798111);
			func_1485(1703426636);
			break;
		case 1703426636:
			func_1484(1703426636);
			func_1485(-919512195);
			func_1485(-1925798111);
			func_1485(420709909);
			break;
		case -1223121209:
			func_1484(-1223121209);
			func_1485(630808005);
			break;
		case 630808005:
			func_1484(630808005);
			func_1485(-1223121209);
			break;
		case 1453909576:
			func_1484(1453909576);
			func_1485(1643531967);
			break;
		case 1643531967:
			func_1484(1643531967);
			func_1485(1453909576);
			break;
		case 0:
			func_1484(0);
			func_1485(473295046);
			func_1485(-1738165526);
			break;
		case 473295046:
			func_1484(473295046);
			func_1485(0);
			func_1485(-1738165526);
			break;
		case -1738165526:
			func_1484(-1738165526);
			func_1485(0);
			func_1485(473295046);
			break;
		case 932909855:
			func_1484(932909855);
			func_1485(2051822093);
			break;
		case 2051822093:
			func_1484(2051822093);
			func_1485(932909855);
			break;
		case 405586984:
			func_1484(405586984);
			func_1485(1509509592);
			func_1485(-959357075);
			func_1485(-1311865656);
			break;
		case 1509509592:
			func_1484(1509509592);
			func_1485(405586984);
			func_1485(-959357075);
			func_1485(-1311865656);
			break;
		case -959357075:
			func_1484(-959357075);
			func_1485(1509509592);
			func_1485(405586984);
			func_1485(-1311865656);
			break;
		case -1311865656:
			func_1484(-1311865656);
			func_1485(1509509592);
			func_1485(-959357075);
			func_1485(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_1484(-524145696);
			}
			else
			{
				func_1485(-524145696);
			}
			func_1485(1626481264);
			func_1485(282809459);
			break;
		case 282809459:
			func_1484(282809459);
			func_1485(1626481264);
			func_1485(-524145696);
			break;
		case 1626481264:
			func_1484(1626481264);
			func_1485(-524145696);
			func_1485(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_1484(885203519);
			}
			else
			{
				func_1485(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_1484(-1080627546);
			}
			else
			{
				func_1485(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_814(iParam0))
				{
					func_1484(iParam0);
				}
			}
			else if (func_814(iParam0))
			{
				func_1485(iParam0);
			}
			break;
	}
}

void func_1119(int iParam0)
{
	if (!func_1488(iParam0))
	{
		func_1490(func_1489(iParam0));
	}
}

int func_1120()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_1488(COLLECTION::_0x126CBEBBA46693CF(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1121(int iParam0, int iParam1, int iParam2)
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
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;

	iVar0 = 0;
	switch (iParam2)
	{
		case 1:
			iVar9 = 281887510; /* GXTEntry: "Little Egret Plume" */
			iVar10 = -164081697; /* GXTEntry: "Reddish Egret Plume" */
			iVar11 = -1161319399; /* GXTEntry: "Snowy Egret Plume" */
			iVar12 = 728781265; /* GXTEntry: "Lady of the Night Orchid" */
			break;
		case 2:
			iVar9 = -222563712; /* GXTEntry: "Heron Plume" */
			iVar10 = 1794857344; /* GXTEntry: "Lady Slipper Orchid" */
			iVar11 = 1952409553; /* GXTEntry: "Moccasin Flower Orchid" */
			break;
		case 4:
			iVar9 = 2116770557;
			iVar10 = -651064726; /* GXTEntry: "Acuna\'s Star Orchid" */
			iVar11 = -404270094; /* GXTEntry: "Cigar Orchid" */
			iVar12 = 2093126853; /* GXTEntry: "Ghost Orchid" */
			break;
		case 8:
			iVar9 = 2085530337; /* GXTEntry: "Spoonbill Plume" */
			iVar10 = -150591160; /* GXTEntry: "Night Scented Orchid" */
			iVar11 = -323969289; /* GXTEntry: "Rat Tail Orchid" */
			iVar12 = 1504361882; /* GXTEntry: "Spider Orchid" */
			break;
		case 16:
			iVar9 = -1521783510; /* GXTEntry: "Clamshell Orchid" */
			iVar10 = 1714875242; /* GXTEntry: "Dragon\'s Mouth Orchid" */
			iVar11 = 1019229063; /* GXTEntry: "Queen\'s Orchid" */
			iVar12 = 927763737; /* GXTEntry: "Sparrow\'s Egg Orchid" */
			break;
	}
	iVar1 = func_1122(iVar9);
	iVar2 = func_1122(iVar10);
	iVar3 = func_1122(iVar11);
	iVar5 = func_1123(iVar9);
	iVar6 = func_1123(iVar10);
	iVar7 = func_1123(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_1122(iVar12);
		iVar8 = func_1123(iVar12);
	}
	if (iParam0 == iVar9)
	{
		if ((iVar1 + iParam1) >= iVar5)
		{
			iVar0 = (iVar0 + iVar5);
		}
		else
		{
			iVar0 = (iVar0 + (iVar1 + iParam1));
		}
	}
	else if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iParam0 == iVar10)
	{
		if ((iVar2 + iParam1) >= iVar6)
		{
			iVar0 = (iVar0 + iVar6);
		}
		else
		{
			iVar0 = (iVar0 + (iVar2 + iParam1));
		}
	}
	else if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iParam0 == iVar11)
	{
		if ((iVar3 + iParam1) >= iVar7)
		{
			iVar0 = (iVar0 + iVar7);
		}
		else
		{
			iVar0 = (iVar0 + (iVar3 + iParam1));
		}
	}
	else if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam2 != 2)
	{
		if (iParam0 == iVar12)
		{
			if ((iVar4 + iParam1) >= iVar8)
			{
				iVar0 = (iVar0 + iVar8);
			}
			else
			{
				iVar0 = (iVar0 + (iVar4 + iParam1));
			}
		}
		else if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

int func_1122(int iParam0)
{
	int iVar0;

	if (func_694(iParam0, 1, 0))
	{
		iVar0 = func_650(iParam0, 0, 0);
	}
	return iVar0;
}

int func_1123(int iParam0)
{
	switch (iParam0)
	{
		case 281887510:
			return 5;
		case -164081697:
			return 5;
		case -1161319399:
			return 5;
		case 728781265:
			return 15;
		case -222563712:
			return 20;
		case 1794857344:
			return 7;
		case 1952409553:
			return 10;
		case 2116770557:
			return 25;
		case -651064726:
			return 3;
		case -404270094:
			return 7;
		case 2093126853:
			return 5;
		case 2085530337:
			return 30;
		case -150591160:
			return 5;
		case -323969289:
			return 10;
		case 1504361882:
			return 5;
		case -1521783510:
			return 5;
		case 1714875242:
			return 5;
		case 1019229063:
			return 5;
		case 927763737:
			return 10;
		default:
			break;
	}
	return 0;
}

int func_1124(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0);
}

void func_1125(int iParam0, int iParam1)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, iParam1);
}

int func_1126(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;

	if (!func_1353(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
	return uVar5;
}

void func_1127(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_1126(iParam1, 5) || iParam0 == func_1126(iParam1, 6)) || iParam0 == func_1126(iParam1, 7)) || iParam0 == func_1126(iParam1, 8)) || iParam0 == func_1126(iParam1, 9))
	{
		func_1117(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_663(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_665(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_1128(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 1;
	if ((((iParam0 == func_1126(iParam1, 5) || iParam0 == func_1126(iParam1, 6)) || iParam0 == func_1126(iParam1, 7)) || iParam0 == func_1126(iParam1, 8)) || iParam0 == func_1126(iParam1, 9))
	{
		if (func_1117(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_663(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_665(51, 0, 0, iVar0, func_1072(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_663(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_665(51, 0, 0, iVar0, func_1072(iParam1, 20), 1, 0);
			}
		}
	}
}

int func_1129()
{
	if (func_928(((*Global_1347702)[37 /*49*/])->f_15) && Global_1392388->f_7)
	{
		return 1;
	}
	return 0;
}

int func_1130(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_646(iParam0, 0))
	{
		return 0;
	}
	if (Global_1935630->f_12)
	{
		return 0;
	}
	iVar0 = func_1066(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_1144("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1041(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_726(Var4.f_4))
			{
			}
			else if (WEAPON::_0x5C2EA6C44F515F34(Var4.f_4) == iVar0)
			{
				func_1044(iVar1);
				return 1;
			}
			iVar3++;
		}
		func_1044(iVar1);
	}
	return 0;
}

void func_1131(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
}

void func_1132(int iParam0)
{
	if (!func_1491(iParam0))
	{
		COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	}
}

void func_1133(int iParam0)
{
	COLLECTION::_0x398FAB9C96A81924(iParam0, 1);
}

void func_1134(int iParam0, var uParam1, var uParam2)
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

int func_1135(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if ((Global_1946804->f_57[iVar0 /*11*/])->f_8 == iParam0)
		{
			return func_1492(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_1136(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	func_1493();
	if (iParam2 == 39)
	{
		Var0 = { func_1061(iParam0, 1, 0) };
		iParam2 = func_949(func_1135(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return 0;
	}
	if (func_667(iParam0, 866047851) && func_1475(&(Global_1946804->f_1378)) >= 2)
	{
		return 0;
	}
	if ((func_1139(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2 /*11*/])
	{
		func_1494(func_1492(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_1495(iParam2);
	func_1496(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2 /*3*/] != &Global_1946804->f_57[iParam2 /*11*/] && (Global_1946804->f_57[iParam2 /*11*/])->f_1 > 1)
	{
		func_1497(Global_1946804->f_1378.f_1[iParam2 /*3*/], 4, 6);
		func_1497(Global_1946804->f_1497.f_1[iParam2 /*3*/], 4, 6);
	}
	func_1498(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = (Global_1946804->f_1378.f_1[iParam2 /*3*/])->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2 /*3*/] = iParam0;
	(Global_1946804->f_1378.f_1[iParam2 /*3*/])->f_1 = func_1499(iParam0, iParam2, iParam1, func_56() != -1);
	if (bParam4)
	{
		func_1500(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_1500(&(Global_1946804->f_1378), 1, 0);
	}
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1946804->f_2589)
		{
			if (&Global_1946804->f_2589.f_2[iVar6 /*2*/] >= 0 && &Global_1946804->f_2589.f_2[iVar6 /*2*/] < 39)
			{
				Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar6 /*2*/] /*2*/] = 0;
				(Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar6 /*2*/] /*2*/])->f_1 = 0;
				func_1501(func_1492(&(Global_1946804->f_2589.f_2[iVar6 /*2*/]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return 1;
}

void func_1137(bool bParam0, bool bParam1, bool bParam2)
{
	func_1502(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

void func_1138(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;

	if (bParam4)
	{
		func_1503(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_1504(Var0);
}

bool func_1139(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_1140()
{
	func_1505(&(Global_1946804->f_2776));
	func_1506(32768);
	func_1501(1108822547, 8, 6);
}

int func_1141(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_949(iParam0, 1);
	switch (iParam0)
	{
		case 1108822547:
			if (&Global_1946804->f_1497.f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/] || &Global_1946804->f_1378.f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
			{
				iVar0 = 48;
			}
			break;
	}
	return iVar0;
}

void func_1142(int iParam0)
{
	struct<4> Var0;

	if (func_1507(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_1508(Var0);
}

void func_1143(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;

	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_1508(Var0);
}

int func_1144(char* sParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	*uParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_491(bParam4), sParam0, iParam3, uParam2);
	if (*uParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

float func_1145()
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

	if (func_1509())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_1510(2);
	}
	if (Global_1347477->f_119)
	{
		return func_1510(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_1511();
	fVar2 = func_1512();
	fVar3 = func_1513();
	fVar4 = func_1514();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1515()));
	fVar7 = (func_1510(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1516(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1517(3, fVar9, fVar9 > 100f);
	return func_1518(fVar7, -100f, 100f);
}

float func_1146()
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

	if (func_1509())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_1510(1);
	}
	if (Global_1347477->f_119)
	{
		return func_1510(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_1511();
	fVar2 = func_1512();
	fVar3 = func_1513();
	fVar4 = func_1514();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1515()));
	fVar7 = (func_1510(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1516(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1517(2, fVar9, fVar9 > 100f);
	return func_1518(fVar7, -100f, 100f);
}

float func_1147()
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

	if (func_1509())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_1510(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_1519())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_1520())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_1510(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_1511();
	fVar2 = func_1512();
	fVar3 = func_1513();
	fVar4 = func_1514();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1515()));
	fVar7 = (func_1510(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1516(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1517(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && PLAYER::_0x0317C947D062854E(PLAYER::PLAYER_ID()) < 1f)
	{
		return func_1510(0);
	}
	return func_1518(fVar7, -100f, 100f);
}

bool func_1148(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_1149(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -2061583405:
			return Global_1946804->f_2657.f_21;
		case 81053684:
			return Global_1946804->f_2657.f_23;
		case -525676072:
			return Global_1946804->f_2657.f_22;
		case -1719060085:
			return Global_1946804->f_2657.f_24;
		case -413129408:
			return Global_1946804->f_2657.f_25;
		case -999503751:
			if (bParam1)
			{
				return Global_1946804->f_2657.f_20;
			}
			else
			{
				return func_1521();
			}
			break;
	}
	return 0;
}

int func_1150(int iParam0)
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

int func_1151(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return 0;
	}
	return 1;
}

void func_1152(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!func_1151(iParam0))
	{
		return;
	}
	if (func_1522(iParam0))
	{
		return;
	}
	if (!func_1523(iParam0))
	{
		func_1524(iParam0, 1, 0);
	}
	iVar0 = func_1525(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_1526(iParam0, 512))
		{
			func_1138(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_1527() && !bParam1) && !func_126(0, 0, 1))
	{
		func_299(MISC::_CREATE_VAR_STRING(10, "OUT_JOURN_DONE", MISC::_CREATE_VAR_STRING(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_1528(iParam0, 6);
	if (bParam2)
	{
		if (!func_126(0, 0, 1))
		{
			func_323(1, 4);
		}
	}
}

int func_1153()
{
	return Global_1946804->f_1;
}

bool func_1154(int iParam0, bool bParam1)
{
	return func_1149(iParam0, 0) < func_1529(iParam0, bParam1);
}

int func_1155(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_492(iVar1) == iParam0)
		{
			*uParam1 = iVar1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_1156(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_949(iParam0, 1) /*3*/] != &Global_1946804->f_57[func_949(iParam0, 1) /*11*/];
}

void func_1157(int iParam0, int iParam1)
{
	if (func_667(iParam1, 130796156))
	{
		func_1530(iParam1, 0);
	}
	else if (func_667(iParam1, 930141731))
	{
		func_1530(iParam1, 1);
		func_1531(iParam0);
	}
}

void func_1158(var uParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (&uParam0->f_1[iVar0] == iParam1)
		{
			return;
		}
		if ((((iParam1 == 617531372 && &uParam0->f_1[iVar0] == 291123060) || (iParam1 == 291123060 && &uParam0->f_1[iVar0] == 617531372)) || (iParam1 == 1356624740 && &uParam0->f_1[iVar0] == 1884295263)) || (iParam1 == 1884295263 && &uParam0->f_1[iVar0] == 1356624740))
		{
			uParam0->f_1[iVar0] = iParam1;
			return;
		}
		iVar0++;
	}
	if (*uParam0 >= 10)
	{
		return;
	}
	uParam0->f_1[*uParam0] = iParam1;
	*uParam0++;
}

int func_1159(int iParam0, var uParam1, var uParam2, var uParam3)
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
	func_1532(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = uParam3;
	Var1.f_2 = { *uParam1 };
	func_1533(uParam2, iParam0, Var1);
	return 1;
}

struct<2> func_1160(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

int func_1161(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_1162(int iParam0)
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

int func_1163(int iParam0)
{
	var uVar0;

	if (!func_1534(iParam0, &uVar0, 805880880, 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

var func_1164(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_1535(sParam0, sParam1, iParam2);
	return uVar20;
}

bool func_1165()
{
	return !&Global_1911774;
}

void func_1166(int iParam0, int iParam1, var uParam2, var uParam3)
{
	Global_1911774->f_4[Global_1911774->f_3 /*4*/] = iParam0;
	(Global_1911774->f_4[Global_1911774->f_3 /*4*/])->f_1 = iParam1;
	(Global_1911774->f_4[Global_1911774->f_3 /*4*/])->f_2 = uParam2;
	(Global_1911774->f_4[Global_1911774->f_3 /*4*/])->f_3 = uParam3;
	if (Global_1911774->f_3 < 20)
	{
		Global_1911774->f_3++;
	}
}

char* func_1167(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_1168(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_1169(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_36307)
	{
		return MAP::DOES_BLIP_EXIST(&(Global_36307[iParam0]));
	}
	return 0;
}

int func_1170(int iParam0)
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

Vector3 func_1171()
{
	switch (func_141())
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

int func_1172(bool bParam0)
{
	if (bParam0)
	{
		if (((((Global_1357549->f_1672 == -774242862 || Global_1357549->f_1672 == -2100684454) || Global_1357549->f_1672 == -1167047117) || Global_1357549->f_1672 == 396444962) || Global_1357549->f_1672 == -498064062) || Global_1357549->f_1672 == 513694516)
		{
			return 1;
		}
	}
	if (func_488(((*Global_1347702)[61 /*49*/])->f_15, 1) || (func_928(((*Global_1347702)[61 /*49*/])->f_15) && func_38(16384)))
	{
		return 1;
	}
	return 0;
}

char* func_1173()
{
	switch (func_141())
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

char* func_1174(int iParam0)
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
			switch (func_364(10, 0))
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

Vector3 func_1175()
{
	switch (func_141())
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

void func_1176(var uParam0, var uParam1)
{
	switch (uParam0->f_20)
	{
		case 6:
			func_1536(uParam0);
			func_1537(&(uParam0->f_35));
			func_1538(uParam0, uParam1);
			func_1539(uParam0);
			break;
		default:
			func_1540(uParam0);
			func_1541(&(uParam0->f_35));
			func_1542(uParam0);
			func_1543(uParam0);
			break;
	}
}

void func_1177(var uParam0, int iParam1)
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

int func_1178(int iParam0)
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

void func_1179(var uParam0, int iParam1)
{
	uParam0->f_773 = iParam1;
}

void func_1180(var uParam0, int iParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_INT(*uParam0, iParam1);
}

void func_1181(var uParam0)
{
	*uParam0 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(196480927);
}

void func_1182()
{
	AUDIO::_0xD9130842D7226045("Ledger_Sounds", 0);
}

void func_1183(int* iParam0, int iParam1)
{
	if (iParam0->f_20 != iParam1)
	{
		if (func_324(Global_35, 0))
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
					if (func_1544(&Global_35) && func_1545(-1406972469) == -1)
					{
						func_1546(-1406972469, Global_35, 0, 1);
					}
					break;
				default:
					func_1547(Global_35, -1406972469, 1);
					break;
			}
		}
	}
	iParam0->f_20 = iParam1;
}

bool func_1184(var uParam0)
{
	return UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(*uParam0);
}

bool func_1185()
{
	return AUDIO::_0xD9130842D7226045("Ledger_Sounds", 0);
}

void func_1186(var uParam0, var uParam1, var uParam2)
{
	func_1548((*uParam0)[0 /*118*/]);
	func_1548((*uParam0)[1 /*118*/]);
	func_1549(*uParam1, (*uParam0)[0 /*118*/]);
	func_1550(uParam1->f_1, &(((*uParam0)[0 /*118*/])->f_55), uParam2);
	func_1551(uParam1->f_2, &(((*uParam0)[0 /*118*/])->f_102), uParam2);
	func_1551(uParam1->f_3, &(((*uParam0)[0 /*118*/])->f_110), uParam2);
	func_1549(uParam1->f_4, (*uParam0)[1 /*118*/]);
	func_1550(uParam1->f_5, &(((*uParam0)[1 /*118*/])->f_55), uParam2);
	func_1551(uParam1->f_6, &(((*uParam0)[1 /*118*/])->f_102), uParam2);
	func_1551(uParam1->f_7, &(((*uParam0)[1 /*118*/])->f_110), uParam2);
}

int func_1187(struct<8> Param0, int iParam8, var uParam9, var uParam10)
{
	if (func_1552((*uParam9->f_1[iParam8 /*237*/])[0 /*118*/], uParam10))
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
	if (func_1552((*uParam9->f_1[iParam8 /*237*/])[1 /*118*/], uParam10))
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

void func_1188(var uParam0, int iParam1, vector3 vParam2, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31)
{
	int iVar0;
	int iVar1;

	iVar0 = func_1553(iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(*uParam0, vParam2.x);
	iVar1 = func_364(iVar0, 0);
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

void func_1189(var uParam0, int iParam1, struct<25> Param2, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31)
{
	int iVar0;
	int iVar1;

	iVar0 = func_1553(iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(*uParam0, Param2);
	iVar1 = (func_364(iVar0, 0) - 1);
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

Vector3 func_1190(int iParam0)
{
	return ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 0f, -1.066f);
}

void func_1191(var uParam0)
{
	if (!UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(*uParam0))
	{
		return;
	}
	UISTATEMACHINE::_UIFLOWBLOCK_ENTER(*uParam0, 0);
	UISTATEMACHINE::_UISTATEMACHINE_CREATE(func_1554(), *uParam0);
}

void func_1192(var uParam0, int iParam1, bool bParam2, int iParam3)
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
	func_1556(uParam0, func_1197(iParam1, bParam2), func_1555(iParam1), 55f, iVar0, iVar1, 0.001f, 15f, 0, 0, -1082130432, 1, 0, 1044549468);
	uParam0->f_11 = iParam3;
}

void func_1193(var uParam0, bool bParam1)
{
	uParam0->f_772 = 1;
	uParam0->f_774 = MISC::GET_GAME_TIMER() + 250;
	if (bParam1)
	{
		AUDIO::PLAY_SOUND_FRONTEND("INFO_SHOW", "Ledger_Sounds", true, 0);
	}
}

void func_1194(var uParam0)
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
	if (!func_1557(uParam0->f_1, uParam0->f_8))
	{
		uParam0->f_12 = (uParam0->f_12 + MISC::GET_FRAME_TIME());
		if (uParam0->f_12 > uParam0->f_11)
		{
			uParam0->f_12 = uParam0->f_11;
		}
		fVar1 = (uParam0->f_12 / uParam0->f_11);
		uParam0->f_1 = { func_1558(uParam0->f_1, uParam0->f_8, fVar1) };
	}
	vVar2 = { uParam0->f_13 + uParam0->f_16 };
	uParam0->f_19 = (uParam0->f_19 + func_1518((((vVar2.x - uParam0->f_19) * 0.05f) * fVar0), -3f, 3f));
	uParam0->f_19.f_1 = (uParam0->f_19.f_1 + func_1518((((vVar2.y - uParam0->f_19.f_1) * 0.05f) * fVar0), -3f, 3f));
	uParam0->f_19.f_2 = (uParam0->f_19.f_2 + func_1518((((vVar2.z - uParam0->f_19.f_2) * 0.05f) * fVar0), -3f, 3f));
	if (uParam0->f_36)
	{
		uParam0->f_19 = func_1518(uParam0->f_19, BUILTIN::TO_FLOAT(-uParam0->f_26), BUILTIN::TO_FLOAT(uParam0->f_26));
		uParam0->f_19.f_1 = func_1518(uParam0->f_19.f_1, -uParam0->f_27, uParam0->f_27);
		uParam0->f_19.f_2 = func_1518(uParam0->f_19.f_2, BUILTIN::TO_FLOAT(-uParam0->f_25), BUILTIN::TO_FLOAT(uParam0->f_25));
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

bool func_1195(int* iParam0)
{
	return !func_1557(iParam0->f_816.f_1, iParam0->f_816.f_8);
}

int func_1196(int* iParam0)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { CAM::GET_CAM_COORD(iParam0->f_816) };
	vVar3 = { func_1197(func_141(), 1) };
	if (vVar0.z == vVar3.z)
	{
		return 1;
	}
	return 0;
}

Vector3 func_1197(int iParam0, bool bParam1)
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

void func_1198(var uParam0, vector3 vParam1, bool bParam4)
{
	if (!bParam4)
	{
		uParam0->f_1 = { vParam1 };
	}
	uParam0->f_8 = { vParam1 };
	uParam0->f_12 = 0f;
}

void func_1199(int* iParam0)
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
		if (func_1559(iVar1, &(iParam0->f_35.f_491), *(iParam0->f_35.f_498[Global_1357549->f_1894 /*8*/]), iParam0->f_35.f_2.f_1[iParam0->f_35.f_491.f_2 /*237*/]))
		{
			if (iParam0->f_35.f_491.f_1 != -1)
			{
				if (iParam0->f_35.f_491.f_5)
				{
					func_1188(&(iParam0->f_35.f_2.f_476), iParam0->f_35.f_491.f_1, *(iParam0->f_35.f_531[iParam0->f_35.f_491.f_1 /*30*/]));
				}
				else
				{
					func_1189(&(iParam0->f_35.f_2.f_476), iParam0->f_35.f_491.f_1, *(iParam0->f_35.f_531[iParam0->f_35.f_491.f_1 /*30*/]));
				}
			}
			if (Global_1357549->f_1894 > 0)
			{
				func_1560(iVar1);
			}
			iParam0->f_19 = MISC::GET_GAME_TIMER() + 250;
		}
	}
	if (func_212(iParam0->f_10, 1))
	{
		bVar2 = false;
		if (iParam0->f_35.f_491.f_5)
		{
			switch (iParam0->f_35.f_491.f_1)
			{
				case 1:
					func_1561(iParam0, 1, 4, 1, &bVar2);
					if (bVar2)
					{
						func_1562(0);
					}
					break;
				case 0:
					func_1561(iParam0, 0, 3, 1, &bVar2);
					if (bVar2)
					{
						func_1562(1);
					}
					break;
				case 2:
					func_1561(iParam0, 2, 5, 1, &bVar2);
					if (bVar2)
					{
						func_1562(2);
					}
					break;
				case 3:
					func_1561(iParam0, 3, 10, 1, &bVar2);
					break;
				case 4:
					if (func_141() == 2 || func_141() == 3)
					{
						func_1561(iParam0, 4, 13, 3, &bVar2);
					}
					break;
				case 5:
					func_1561(iParam0, 5, 0, 3, &bVar2);
					break;
				case 7:
					func_1561(iParam0, 7, 14, 1, &bVar2);
					break;
				case 6:
					func_1561(iParam0, 6, 12, 3, &bVar2);
					break;
			}
		}
		else
		{
			switch (iParam0->f_35.f_491.f_1)
			{
				case 1:
					func_1563(iParam0, 1, 4, &bVar2);
					break;
				case 0:
					func_1563(iParam0, 0, 3, &bVar2);
					break;
				case 2:
					func_1563(iParam0, 2, 5, &bVar2);
					break;
				default:
					break;
			}
		}
		if (bVar2)
		{
			if (iParam0->f_860)
			{
				func_1564();
				iParam0->f_860 = 0;
			}
			iParam0->f_19 = MISC::GET_GAME_TIMER() + 250;
		}
		else if (iParam0->f_860)
		{
			func_1565();
			iParam0->f_860 = 0;
		}
	}
}

void func_1200(var uParam0, bool bParam1)
{
	if (MISC::GET_GAME_TIMER() > uParam0->f_774)
	{
		if (uParam0->f_772)
		{
			func_1204(uParam0, bParam1);
		}
		else
		{
			func_1193(uParam0, bParam1);
		}
	}
}

void func_1201(var uParam0)
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

void func_1202()
{
	AUDIO::PLAY_SOUND_FRONTEND("upgrade_cam_pan", "Ledger_Sounds", true, 0);
}

int func_1203(int* iParam0, bool bParam1)
{
	if (func_928(((*Global_1347702)[61 /*49*/])->f_15))
	{
		if (bParam1)
		{
			if (func_149() < iParam0->f_5)
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_1204(var uParam0, bool bParam1)
{
	uParam0->f_772 = 0;
	uParam0->f_774 = MISC::GET_GAME_TIMER() + 250;
	if (bParam1)
	{
		AUDIO::PLAY_SOUND_FRONTEND("INFO_HIDE", "Ledger_Sounds", true, 0);
	}
}

int func_1205(int iParam0)
{
	switch (func_56())
	{
		case -1:
			return (Global_40.f_4283.f_3 && iParam0) != 0;
	}
	return 0;
}

void func_1206(int iParam0)
{
	switch (func_56())
	{
		case -1:
			Global_40.f_4283.f_3 = (Global_40.f_4283.f_3 - (Global_40.f_4283.f_3 && iParam0));
			break;
	}
}

void func_1207(int iParam0)
{
	switch (func_56())
	{
		case -1:
			Global_40.f_4283.f_3 = (Global_40.f_4283.f_3 || iParam0);
			break;
	}
}

int func_1208(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

Vector3 func_1209(int iParam0)
{
	return (Global_1327590->f_11465[iParam0 /*10*/])->f_1;
}

int func_1210(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 1;
	iVar1 = func_1566();
	if (ENTITY::DOES_ENTITY_EXIST(func_172(iVar1)) == 0)
	{
		func_1211("Camp Butcher: companion does not exist (check if he's locked)", uParam0);
		iVar0 = 0;
	}
	if (func_337(iVar1))
	{
		if (((((func_177(iVar1) == 0 && func_171(iVar1, 8) == 0) && func_171(iVar1, 16) == 0) && func_171(iVar1, 32) == 0) && func_171(iVar1, 2) == 0) && func_171(iVar1, 2048) == 0)
		{
			if (func_171(iVar1, -2147483648) && func_12(33554432) == 0)
			{
				func_1211("Camp Butcher: stolen (mission critical)", uParam0);
				iVar0 = 0;
			}
			else
			{
				func_1211("Camp Butcher: stolen", uParam0);
				iVar0 = 0;
			}
		}
	}
	iVar2 = 0;
	while (iVar2 < Global_1327590->f_19547)
	{
		if ((Global_1327590->f_19547[iVar2 /*5*/])->f_1 >= 5)
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_750(func_275()), func_1209(&(Global_1327590->f_19547[iVar2 /*5*/])), true) < 2.25f)
			{
				func_1211("Camp Butcher: vignette running", uParam0);
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
			func_1211("Camp Butcher: special Pearson vig running", uParam0);
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
		func_1211("Camp Butcher: Available", uParam0);
	}
	return iVar0;
}

void func_1211(char* sParam0, var uParam1)
{
}

void func_1212(int iParam0)
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

bool func_1213(var uParam0, int iParam1, char* sParam2)
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

void func_1214(var uParam0, var uParam1, var uParam2, var uParam3)
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

void func_1215(int iParam0, bool bParam1)
{
	if (func_1430(iParam0))
	{
		if (bParam1)
		{
			if (!func_1567(iParam0))
			{
				func_985(iParam0, 1, 0f, 0, 0, 1f, 0, 0);
			}
		}
		else if (func_1567(iParam0))
		{
			func_1568(iParam0, 1);
		}
	}
}

struct<8> func_1216(int iParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, "", 64);
	iParam0 = func_794(iParam0);
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

var func_1217(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_1218(int iParam0)
{
	iParam0 = func_794(iParam0);
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

char* func_1219(int iParam0)
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

int func_1220()
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

Vector3 func_1221()
{
	return Global_40.f_1095.f_3054.f_77;
}

bool func_1222(vector3 vParam0)
{
	return func_1569(vParam0, 2);
}

int func_1223()
{
	return Global_40.f_1095.f_3054;
}

int func_1224(int iParam0)
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

int func_1225(int iParam0)
{
	int iVar0;

	iParam0 = func_794(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_780(iParam0))
	{
		return 0;
	}
	iVar0 = func_357(iParam0);
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

void func_1226(int iParam0)
{
	iParam0 = func_794(iParam0);
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

void func_1227(int iParam0, int iParam1)
{
	MISC::_COPY_MEMORY(&(Global_1900383->f_508), Global_40.f_1095.f_1[iParam1 /*436*/], 436);
	MISC::_COPY_MEMORY(Global_40.f_1095.f_1[iParam1 /*436*/], Global_40.f_1095.f_1[iParam0 /*436*/], 436);
	MISC::_COPY_MEMORY(Global_40.f_1095.f_1[iParam0 /*436*/], &(Global_1900383->f_508), 436);
}

void func_1228(int iParam0, int iParam1)
{
	MISC::_COPY_MEMORY(&(Global_1900383->f_463), (*Global_1900383)[iParam1 /*45*/], 45);
	MISC::_COPY_MEMORY((*Global_1900383)[iParam1 /*45*/], (*Global_1900383)[iParam0 /*45*/], 45);
	MISC::_COPY_MEMORY((*Global_1900383)[iParam0 /*45*/], &(Global_1900383->f_463), 45);
}

int func_1229(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<4> Var29;
	bool bVar58;
	int iVar59;

	Var0.f_9 = -1591664384;
	Var29.f_9 = -1591664384;
	if (!func_1570(iParam0, &Var0))
	{
		return 0;
	}
	bVar58 = false;
	if (!func_1570(iParam1, &Var29))
	{
		bVar58 = true;
	}
	if (bVar58)
	{
		iVar59 = func_1571(iParam1);
		if (iVar59 == 0)
		{
			return 0;
		}
		if (!func_1572(Var0, Var0.f_5, iVar59, 0, 0))
		{
			return 0;
		}
	}
	else if (!func_1573(Var0, Var29, 0, 0))
	{
		return 0;
	}
	return 1;
}

void func_1230(int iParam0)
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
	if (func_1574(iParam0))
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
	if (func_842(iParam0))
	{
		uVar3 = func_458(iParam0);
		if (func_1575(uVar3))
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

void func_1231(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;

	iParam0 = func_794(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_357(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_1267(iVar6);
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

int func_1232(int iParam0)
{
	if (!func_1576(iParam0))
	{
		return 0;
	}
	if (!func_1577())
	{
		return 1;
	}
	return 0;
}

void func_1233(int iParam0, int iParam1)
{
	iParam0 = func_794(iParam0);
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

void func_1234(int iParam0)
{
	iParam0 = func_794(iParam0);
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

void func_1235(int iParam0)
{
	int iVar0;

	iParam0 = func_794(iParam0);
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

void func_1236(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iParam0 = func_794(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_795(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		func_1578(&uVar1, &iVar0, &uVar2);
	}
	iVar3 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	if (iParam1 > iVar3)
	{
		return;
	}
	fVar4 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iParam1));
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_372 = iParam1;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_372.f_1 = fVar4;
	func_1270(iParam1);
	iVar5 = func_357(iParam0);
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

void func_1237(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iParam0 = func_794(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_372.f_1 = fParam1;
	iVar0 = func_357(iParam0);
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
	func_1270(iVar2);
}

void func_1238(var uParam0)
{
	*uParam0 = -377364164; /* GXTEntry: "Natural" */
	uParam0->f_1 = 357708345; /* GXTEntry: "Natural" */
}

void func_1239(int iParam0, struct<2> Param1)
{
	iParam0 = func_794(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_1579(iParam0, Param1))
	{
	}
	if (!func_1580(iParam0, Param1.f_1))
	{
	}
}

void func_1240(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_1581((*uParam0)[iVar0 /*94*/]);
		iVar0++;
	}
}

void func_1241(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 57)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_1242(var uParam0)
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

void func_1243(var uParam0)
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

void func_1244(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 100;
	*uParam1 = iVar0;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
}

void func_1245(int iParam0, var uParam1)
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

void func_1246(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1f;
}

void func_1247(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -15;
}

void func_1248(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
}

float func_1249(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

struct<2> func_1250(int iParam0)
{
	struct<2> Var0;
	var uVar2;
	var uVar3;

	iParam0 = func_794(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!func_1582(iParam0, &uVar2))
	{
	}
	if (!func_1583(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<6> func_1251()
{
	struct<6> Var0;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;

	if (func_1584(-997150586, &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_1584(-1189569496, &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_1584(325139909, &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_1584(1310070322, &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_1584(986998820, &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_1584(-415648720, &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

void func_1252(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_1585(iParam0);
	func_1586(iParam0, uParam1);
	func_782(iParam0);
	func_1587(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_1588(iParam0, iParam3, 0);
	}
	PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 1);
}

void func_1253(int iParam0)
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
	iVar0 = func_357(iParam0);
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
	if (func_1589(iParam0, 64))
	{
		func_1226(iParam0);
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
	bVar3 = func_669(42);
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
				func_1590(&(((*Global_1900383)[iParam0 /*45*/])->f_27));
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
		func_1226(iParam0);
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
		if (func_311(1) < 1)
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
		func_1591(&(((*Global_1900383)[iParam0 /*45*/])->f_26), bVar6);
	}
	if (!MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_1589(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = TASK::IS_PED_IN_WRITHE(iVar0);
	bVar10 = false;
	iVar11 = func_1592(iParam0);
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
	fVar15 = func_1593(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_1594(iParam0))
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
		func_1595(((*Global_1900383)[iParam0 /*45*/])->f_26);
		func_1596(((*Global_1900383)[iParam0 /*45*/])->f_26);
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
	if (func_222(iVar0) && !bVar9)
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
	iVar21 = func_311(iParam0);
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

int func_1254(int iParam0)
{
	iParam0 = func_794(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (func_771(iParam0) == 0)
	{
		return 0;
	}
	return 1;
}

int func_1255(vector3 vParam0)
{
	return func_1597(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

void func_1256(int iParam0)
{
	int iVar0;

	iParam0 = func_794(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_780(iParam0))
	{
		return;
	}
	iVar0 = func_357(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	ENTITY::_SET_ENTITY_HEALTH(iVar0, 0, 0);
}

void func_1257(int iParam0)
{
	var uVar0;
	int iVar1;
	var uVar2;

	iParam0 = func_794(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1578(&uVar0, &iVar1, &uVar2);
	func_1598(iParam0, uVar0);
	func_1599(iParam0, iVar1);
	func_1600(iParam0, uVar2);
	func_779(iParam0, 1);
	func_1236(iParam0, 1);
}

void func_1258(int iParam0)
{
	iParam0 = func_794(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_459(iParam0, 1);
}

void func_1259(int iParam0, vector3 vParam1, var uParam4)
{
	iParam0 = func_794(iParam0);
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

int func_1260(int iParam0)
{
	iParam0 = func_794(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return func_1589(iParam0, 1);
}

int func_1261(int iParam0)
{
	iParam0 = func_794(iParam0);
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

void func_1262(int iParam0)
{
	iParam0 = func_794(iParam0);
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

void func_1263(int iParam0)
{
	int iVar0;

	iParam0 = func_794(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_1264(iParam0);
	if (!SCRIPTS::_DOES_THREAD_EXIST(iVar0))
	{
		func_1234(iParam0);
	}
	else if (!SCRIPTS::IS_THREAD_ACTIVE(iVar0, false))
	{
		func_1234(iParam0);
	}
}

int func_1264(int iParam0)
{
	iParam0 = func_794(iParam0);
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

float func_1265(int iParam0)
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

float func_1266(int iParam0)
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

int func_1267(int iParam0)
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

void func_1268(int iParam0, int iParam1)
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

int func_1269(int iParam0)
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

void func_1270(int iParam0)
{
	if (func_1601() < iParam0)
	{
		func_1602(iParam0);
	}
}

void func_1271(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	iParam0 = func_794(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_795(iParam0);
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
	func_1082(sVar2, MISC::_CREATE_VAR_STRING(2, "HORSE_BONDING_LEVEL", iParam1), 908516622, -961843223, -2, "HUD_Toast_Soundset", "horse_bonding", 0, 0, 1, 1);
}

int func_1272(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	iVar0 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iParam0, func_1273());
	return iVar0;
}

int func_1273()
{
	return 0;
}

void func_1274(int iParam0, int iParam1)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	int iVar6;
	int iVar7;

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
	sVar4 = func_1604(func_1603(iParam1));
	iVar5 = MISC::GET_HASH_KEY(sVar4);
	iVar6 = "";
	iVar7 = "HUD_Toast_Soundset";
	func_1082(MISC::_CREATE_VAR_STRING(10, sVar0, sVar1), sVar2, iVar3, iVar5, -2, iVar7, iVar6, 0, 0, 1, 1);
}

int func_1275(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	iVar0 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iParam0, func_1276());
	return iVar0;
}

int func_1276()
{
	return 1;
}

int func_1277()
{
	int iVar0;

	iVar0 = func_1278();
	if (MAP::DOES_BLIP_EXIST(iVar0))
	{
		return 1;
	}
	return 0;
}

var func_1278()
{
	return Global_1900383->f_393.f_1;
}

void func_1279(int iParam0)
{
	Global_1900383->f_393.f_1 = iParam0;
}

int func_1280(int iParam0, int iParam1)
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

int func_1281(int iParam0)
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

void func_1282(int iParam0)
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

void func_1283()
{
	MISC::_0x243CEDE8F916B994();
	Global_1934765->f_338 = -1;
}

void func_1284(bool bParam0, float fParam1)
{
	int iVar0;

	if (MISC::IS_BIT_SET(Global_1934765->f_301, 1))
	{
		return;
	}
	iVar0 = func_1285();
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
	if (func_1605(&(Global_1934765->f_318[iVar0 /*3*/]), bParam0, fParam1))
	{
		Global_1934765->f_338 = iVar0;
	}
}

int func_1285()
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
		iVar3 = func_1606((Global_1934765->f_318[iVar2 /*3*/])->f_1);
		if (iVar3 > iVar0)
		{
			iVar0 = iVar3;
			iVar1 = iVar2;
		}
		iVar2 = (iVar2 + -1);
	}
	return iVar1;
}

void func_1286()
{
	if (UISTATEMACHINE::_UISTATEMACHINE_EXISTS(func_1554()))
	{
		UISTATEMACHINE::_UISTATEMACHINE_DESTROY(func_1554());
	}
}

void func_1287(var uParam0)
{
	if (UIAPPS::_IS_APP_ACTIVE(1749944028))
	{
		UIAPPS::_CLOSE_APP_BY_HASH(1749944028);
	}
	if (func_204(uParam0->f_1))
	{
		func_205(&(uParam0->f_1), 1, 1);
	}
	uParam0->f_772 = 0;
	uParam0->f_773 = 0;
}

void func_1288(var uParam0)
{
	if (*uParam0 != 0)
	{
		UISTATEMACHINE::_UIFLOWBLOCK_RELEASE(uParam0);
	}
}

void func_1289()
{
	AUDIO::_0x531A78D6BF27014B("Ledger_Sounds");
}

void func_1290(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!func_478(iParam0))
	{
		return;
	}
	if (!func_1329(iParam0))
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
	iVar0 = func_172(iParam0);
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
		COMPANION::_0xD428C3F92FC3F6F8(iVar0, func_879(iParam0));
		PED::_0x9238A3D970BBB0A9(iVar0, -1972074710);
		PED::_0x9238A3D970BBB0A9(Global_35, -1972074710);
	}
	else
	{
		PED::_0x9A4AC116CC1EEE14(iVar0);
		if (!func_1607())
		{
			PED::_0x9A4AC116CC1EEE14(Global_35);
		}
	}
}

int func_1291(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = uParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_901(&iVar1, -2147483648);
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

int func_1292(int iParam0)
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

int func_1293(int iParam0)
{
	if (!func_511(iParam0))
	{
		return -1;
	}
	if (iParam0 >= func_830(1))
	{
		return -1;
	}
	if (iParam0 >= 3 || iParam0 < 0)
	{
		return -1;
	}
	return Global_1359489[iParam0];
}

var func_1294()
{
	return &Global_1899515;
}

void func_1295(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		func_1608(iParam1);
	}
}

int func_1296(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_511(iParam0))
	{
		return 0;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(((*Global_1360165)[iParam0 /*1157*/])->f_126))
	{
		iVar0 = func_397(iParam0, 1);
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

int func_1297(vector3 vParam0, var uParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
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

int func_1298(int iParam0)
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

int func_1299(vector3 vParam0, var uParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

void func_1300(var uParam0)
{
	*uParam0 = 176656832;
	uParam0->f_1 = -15;
	uParam0->f_2 = 1017034651;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

int func_1301(int iParam0)
{
	if (!func_511(iParam0))
	{
		return 0;
	}
	if (((*Global_1360165)[iParam0 /*1157*/])->f_140 != 0 || ((*Global_1360165)[iParam0 /*1157*/])->f_141 != 0)
	{
		return 1;
	}
	return 0;
}

int func_1302(int iParam0)
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

void func_1303(int iParam0, int iParam1, bool bParam2, float fParam3)
{
	int iVar0;

	iVar0 = func_1281(iParam1);
	if (iVar0 == -1)
	{
		func_1609(iParam0, iParam1, fParam3);
		func_1284(bParam2, fParam3);
		return;
	}
	if (iParam0 != &Global_1934765->f_318[iVar0 /*3*/])
	{
		func_1282(iVar0);
		func_1609(iParam0, iParam1, fParam3);
		Global_1934765->f_338 = -1;
		func_1284(bParam2, fParam3);
		return;
	}
}

int func_1304()
{
	return 0;
}

int func_1305()
{
	int iVar0;

	if (func_1610())
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

int func_1306()
{
	int iVar0;

	if (func_928(((*Global_1347702)[134 /*49*/])->f_15))
	{
		iVar0 = func_1611();
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

int func_1307()
{
	if (func_457(((*Global_1347702)[134 /*49*/])->f_15))
	{
		if (STREAMING::_IS_IMAP_ACTIVE(126970802))
		{
			STREAMING::_REMOVE_IMAP(126970802);
		}
		return func_1304();
	}
	return 126970802;
}

int func_1308()
{
	if (func_694(-520532433, 1, 0))
	{
		if (STREAMING::_IS_IMAP_ACTIVE(-1739164071))
		{
			STREAMING::_REMOVE_IMAP(-1739164071);
		}
		return func_1304();
	}
	return -1739164071;
}

int func_1309()
{
	if (func_694(-1515028452, 1, 0))
	{
		if (STREAMING::_IS_IMAP_ACTIVE(-1331617405))
		{
			STREAMING::_REMOVE_IMAP(-1331617405);
		}
		return func_1304();
	}
	return -1331617405;
}

int func_1310()
{
	if (func_457(((*Global_1835011)[6 /*74*/])->f_1) || func_928(((*Global_1835011)[6 /*74*/])->f_1))
	{
		return 1998041523;
	}
	else if (STREAMING::_IS_IMAP_ACTIVE(1998041523))
	{
		STREAMING::_REMOVE_IMAP(1998041523);
	}
	return func_1611();
}

int func_1311()
{
	if (func_694(-1515028452, 1, 0))
	{
		if (STREAMING::_IS_IMAP_ACTIVE(-539928451))
		{
			STREAMING::_REMOVE_IMAP(-539928451);
		}
		return func_1304();
	}
	return -539928451;
}

int func_1312()
{
	if (func_694(-520532433, 1, 0))
	{
		if (STREAMING::_IS_IMAP_ACTIVE(-293283707))
		{
			STREAMING::_REMOVE_IMAP(-293283707);
		}
		return func_1304();
	}
	return -293283707;
}

int func_1313()
{
	if (func_396(13, 4, 1))
	{
		return 1036815507;
	}
	if (STREAMING::_IS_IMAP_ACTIVE(1036815507))
	{
		STREAMING::_REMOVE_IMAP(1036815507);
	}
	return func_1611();
}

void func_1314(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::CLEAR_BIT(Global_1934765->f_21[iVar1], iVar2);
}

void func_1315(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::SET_BIT(Global_1934765->f_21[iVar1], iVar2);
}

void func_1316(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_543())
	{
		if (func_1612() == 0)
		{
			return;
		}
		bParam0 = true;
	}
	if ((MISC::GET_FRAME_COUNT() % 10) == 0 || bParam0)
	{
		if (func_1613() == 0 || bParam0)
		{
			if (func_1614() && !func_928(((*Global_1835011)[4 /*74*/])->f_1))
			{
				func_1615(0, 1, bParam0);
			}
			else
			{
				func_1615(0, 0, bParam0);
			}
		}
	}
	if ((MISC::GET_FRAME_COUNT() % 10) == 0 || bParam0)
	{
		if ((func_964(1, 0) && func_1616()) && func_1617() == 0)
		{
			func_1615(1, 1, bParam0);
		}
		else
		{
			func_1615(1, 0, bParam0);
		}
	}
	iVar0 = 0;
	if (func_32() == 1)
	{
		iVar0 = 1;
	}
	iVar1 = func_141();
	if (bParam0)
	{
		if (!func_38(1048576))
		{
			Global_1357549->f_575 = 18;
			Global_1357549->f_575 = 0;
			while (Global_1357549->f_575 < 18)
			{
				func_1618(iVar1, 0, 0);
				Global_1357549->f_575++;
			}
			Global_1357549->f_575 = 0;
		}
	}
	else if (func_38(1048576))
	{
		func_1618(iVar1, bParam1, 1);
	}
	if (((func_543() && STREAMING::_0xCF45DF50C7775F2A() == 0) && func_481(0) == ((*Global_1835011)[4 /*74*/])->f_1 == 0) && func_1619())
	{
		func_1620();
		iVar2 = func_1621();
		func_1622(iVar1, &iVar2, iVar0, func_1610(), bParam1);
		if (func_364(10, 0) > 1)
		{
			if (func_227(2057380366, 0))
			{
				func_727(2057380366, 1, 0);
			}
		}
		else if (!func_227(2057380366, 1))
		{
			func_375(2057380366, 1017034651, 1120952528, -1, 1, 1, 0);
		}
		if ((func_364(10, 0) >= 3 && iVar1 == 3) && iVar0)
		{
			func_1315(6);
		}
		else
		{
			func_1314(6);
		}
		if (func_1623(iVar1, iVar0))
		{
			if (((((ANIMSCENE::_0x25557E324489393C(&(Global_1357549->f_1713[0])) && ANIMSCENE::_0x477122B8D05E7968(&(Global_1357549->f_1713[0]), 1, 0)) && ANIMSCENE::_0x25557E324489393C(&(Global_1357549->f_1713[1]))) && ANIMSCENE::_0x477122B8D05E7968(&(Global_1357549->f_1713[1]), 1, 0)) && ANIMSCENE::_0x25557E324489393C(&(Global_1357549->f_1713[2]))) && ANIMSCENE::_0x477122B8D05E7968(&(Global_1357549->f_1713[2]), 1, 0))
			{
				if (((func_1624(16) != 1 && !ANIMSCENE::_0xCBFC7725DE6CE2E0(&(Global_1357549->f_1713[0]), 0)) && !ANIMSCENE::_0xCBFC7725DE6CE2E0(&(Global_1357549->f_1713[1]), 0)) && !ANIMSCENE::_0xCBFC7725DE6CE2E0(&(Global_1357549->f_1713[2]), 0))
				{
					if (func_1624(16) == 2 && func_264(256) == 0)
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
					else if (func_1624(16) == 3 && func_264(512) == 0)
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
					else if (func_1624(16) == 4 && func_264(1024) == 0)
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
	if (func_481(0) == ((*Global_1835011)[4 /*74*/])->f_1)
	{
		if (STREAMING::_IS_IMAP_ACTIVE(825179479) == 0)
		{
			STREAMING::_REQUEST_IMAP(825179479);
		}
	}
}

int func_1317(int iParam0, bool bParam1)
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

void func_1318(int iParam0)
{
	if (iParam0 == 1)
	{
		func_1625("hso_post_caravan");
	}
	if (iParam0 == 2)
	{
		func_1625("dewclm_post_caravan");
	}
	if (iParam0 == 6)
	{
		func_1625("bvh_nav_endless_summer");
	}
}

int func_1319(int iParam0, int iParam1)
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

void func_1320(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			func_1625("shb_nav_camp_00");
			func_1625("shb_nav_camp_01");
			break;
	}
}

struct<8> func_1321(int iParam0, int iParam1)
{
	char cVar0[64];

	StringCopy(&cVar0, func_1626(iParam0), 64);
	StringConCat(&cVar0, "_nav_camp_", 64);
	StringConCat(&cVar0, func_1627(iParam1), 64);
	return cVar0;
}

int func_1322(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			switch (iParam1)
			{
				case 0:
					return func_1304();
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
					return func_1304();
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
					return func_1304();
				case 1:
					return 414622870;
				case 2:
					return 557551306;
				default:
					break;
			}
			break;
	}
	return func_1304();
}

void func_1323(int iParam0, bool bParam1)
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

int func_1324(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 1:
			return func_1628(iParam1, bParam2);
		case 2:
			return func_1629(iParam1, bParam2);
		case 6:
			return func_1630(iParam1, bParam2);
	}
	return func_1304();
}

struct<4> func_1325()
{
	struct<4> Var0;

	return Var0;
}

int func_1326(int iParam0)
{
	if (func_947(iParam0) == 8)
	{
		return func_473(iParam0);
	}
	return -1;
}

int func_1327(int iParam0, bool bParam1)
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

int func_1328(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	if (!func_518(iParam0, 0f, 0f, 0f, 0, bParam1, bParam4, 1, 1, iParam2, iParam3, 1))
	{
		return 0;
	}
	return 1;
}

int func_1329(int iParam0)
{
	if (func_478(iParam0))
	{
		if (func_324(Global_1360165[iParam0 /*1157*/], 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_1330(int iParam0, bool bParam1)
{
	if (!func_402(iParam0))
	{
		return 0;
	}
	if (!func_368(iParam0, 2))
	{
		return 0;
	}
	if (func_368(iParam0, 32) && !bParam1)
	{
		func_847(iParam0, _NAMESPACE48::_0x4F76E3676583D951(func_403(iParam0)));
		if (func_56() == -1)
		{
			if (func_368(iParam0, 2048))
			{
				_NAMESPACE48::_0x49A8C2CD97815215(func_840(iParam0));
				func_845(iParam0, 2048);
			}
			_NAMESPACE48::_0xFCC6DB8DBE709BC8(func_840(iParam0));
		}
		return 0;
	}
	if (!func_1631(iParam0) && func_56() == -1)
	{
		return 0;
	}
	if (_NAMESPACE48::_0x800DF3FC913355F3(func_840(iParam0)))
	{
		func_845(iParam0, 128);
		return 1;
	}
	func_847(iParam0, _NAMESPACE48::_0x4F76E3676583D951(func_403(iParam0)));
	_NAMESPACE48::_0x4F81EAD1DE8FA19B(func_840(iParam0));
	if (func_368(iParam0, 2048))
	{
		_NAMESPACE48::_0x49A8C2CD97815215(func_840(iParam0));
		func_845(iParam0, 2048);
	}
	return 1;
}

int func_1331(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	vector3 vVar0;
	int iVar3;

	if (!func_402(iParam0))
	{
		return 0;
	}
	if (!func_839(func_403(iParam0)))
	{
		return 1;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(func_840(iParam0)))
	{
		func_1330(iParam0, 0);
		return 0;
	}
	vVar0 = { iParam2, iParam3, iParam4 };
	if (!func_1424(iParam0, 0))
	{
		if (bParam1)
		{
			if (!func_1632(iParam0))
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (!func_206(vVar0))
	{
		_NAMESPACE48::_0x59C7AD6FEA2AC449(func_840(iParam0), vVar0);
	}
	if (bParam5)
	{
		iVar3 = _NAMESPACE48::_0x08FC896D2CB31FCC(func_840(iParam0), 0);
	}
	else
	{
		iVar3 = _NAMESPACE48::_0x0CADC3A977997472(func_840(iParam0), 0);
	}
	if (!func_206(vVar0))
	{
		_NAMESPACE48::_0xBB68908CD11AEBDC(func_840(iParam0));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		return 1;
	}
	return 0;
}

int func_1332(int iParam0)
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

int func_1333(int iParam0)
{
	switch ((Global_1357549->f_1675[iParam0 /*5*/])->f_2)
	{
		case 0:
			if (!_NAMESPACE48::_0x800DF3FC913355F3((Global_1357549->f_1675[iParam0 /*5*/])->f_4))
			{
				(Global_1357549->f_1675[iParam0 /*5*/])->f_4 = _NAMESPACE48::_0x4F76E3676583D951(&(Global_1357549->f_1675[iParam0 /*5*/]));
				_NAMESPACE48::_0x187D65F3AEC5D679(&(Global_1357549->f_1675[iParam0 /*5*/]), func_1633(func_141()));
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
			if (func_324((Global_1357549->f_1675[iParam0 /*5*/])->f_3, 0))
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
			func_1634((Global_1357549->f_1675[iParam0 /*5*/])->f_3);
			(Global_1357549->f_1675[iParam0 /*5*/])->f_2 = 3;
		case 3:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1334(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_1635(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_1335(var uParam0, var uParam1)
{
	var uVar0;
	var uVar1;

	uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0, "PageLeft");
	func_1636(uVar0, (*uParam1)[0 /*118*/]);
	uVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0, "PageRight");
	func_1636(uVar1, (*uParam1)[1 /*118*/]);
}

void func_1336(var uParam0, var uParam1)
{
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0, "itemLabel", 0);
	uParam1->f_1 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0, "itemDescription", "");
	uParam1->f_2 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0, "purchaseLabel", "");
	uParam1->f_3 = DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0, "purchasePrice", 0);
	uParam1->f_4 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0, "isGoldPrice", 0);
	INVENTORY::_0x9D21B185ABC2DBC4(uParam0, "effects", 0, 0);
}

int func_1337(int iParam0)
{
	int iVar0;

	if (!DLC::_0x1DB9D61E505AE3FC())
	{
		return iParam0;
	}
	if (!func_1097())
	{
		return iParam0;
	}
	iVar0 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(iParam0) * 0.8f));
	return iVar0;
}

int func_1338()
{
	int iVar0;

	iVar0 = func_1637();
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

int func_1339(int iParam0)
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
	fVar1 = func_470(MISC::ABSF(fVar1) < 1f, func_470(fVar1 < 0f, -1f, 1f), fVar1);
	return BUILTIN::CEIL(fVar1);
}

int func_1340(int iParam0, int iParam1, int iParam2)
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

int func_1341(int iParam0)
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

int func_1342()
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

void func_1343(int iParam0, bool bParam1, int iParam2)
{
	func_1638((MISC::GET_GAME_TIMER() + iParam2), !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1955569->f_1.f_2.f_1, iParam0);
	func_1639(iParam0);
}

void func_1344(int iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_16[2]), 0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[2]), 1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_20[2]), func_1640(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_24[2]), "pausemenu_player");
}

void func_1345(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	bVar3 = false;
	if (func_1641(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_1642(iVar5, &iVar2, &iVar0))
			{
				if (!func_646(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_1643(iVar2);
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
							if (func_666(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_1338() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_1338() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_1644();
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

char* func_1346(int iParam0)
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

int func_1347(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_1645(iParam0))
	{
		return 0;
	}
	if (!func_659())
	{
		return 0;
	}
	if (!func_1646(iParam0, &iVar0, &iVar1))
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

void func_1348(int iParam0, bool bParam1)
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
	if (!func_478(iParam0))
	{
		return;
	}
	iVar1 = PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
	if (PED::IS_PED_GROUP_MEMBER(iVar0, iVar1, 0))
	{
		return;
	}
	COMPANION::_0xCBD9EC60495C728C(func_828());
	PED::SET_PED_CONFIG_FLAG(iVar0, 279, true);
	PED::SET_PED_AS_GROUP_MEMBER(iVar0, iVar1);
	if (bParam1)
	{
		func_1290(iParam0, 1, Global_35);
	}
}

bool func_1349()
{
	return func_830(1) < 3;
}

void func_1350(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_478(iParam0))
	{
		iVar0 = 0;
		iVar1 = 0;
		switch (iParam0)
		{
			case 2:
				func_1647(&iVar0, 1);
				break;
			case 14:
				func_1647(&iVar0, 8);
				func_1647(&iVar1, 4);
				func_1647(&iVar1, 5);
				func_1647(&iVar1, 0);
				break;
			case 13:
			case 15:
			case 16:
			case 17:
			case 18:
			case 19:
			case 20:
			case 22:
				func_1647(&iVar0, 8);
				func_1647(&iVar0, 5);
				func_1647(&iVar1, 4);
				func_1647(&iVar1, 0);
				break;
		}
		COMPANION::_0xDEB369F6AD168C58(func_172(iParam0), iVar0);
		COMPANION::_0x1740E3DEE0AE4D27(func_172(iParam0), iVar1);
	}
}

int func_1351(var uParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	*uParam0 = 0;
	*uParam1 = 0;
	bVar0 = func_659();
	bVar1 = false;
	if (bVar0 && !func_143(4))
	{
		bVar1 = true;
	}
	if ((bVar0 && func_143(37)) && !func_143(43))
	{
		*uParam0 = 0;
		*uParam1 = 0;
		return 0;
	}
	bVar2 = false;
	if ((bVar0 && func_143(43)) && !func_143(44))
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
		if (func_771(0) == 1)
		{
			*uParam0 = 1;
		}
		if (func_771(1) == 1)
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

int func_1352(int iParam0)
{
	iParam0 = func_794(iParam0);
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

int func_1353(int iParam0, var uParam1)
{
	if (!func_1648(iParam0))
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

int func_1354()
{
	if (func_659())
	{
		if (!func_143(3))
		{
			return func_1649(43);
		}
		if (func_143(38) && !func_143(43))
		{
			return func_1650(8);
		}
	}
	return 0;
}

Vector3 func_1355(int iParam0, int iParam1)
{
	struct<5> Var0;
	vector3 vVar5;

	func_1353(15, &Var0);
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

int func_1356(int iParam0, int iParam1)
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
	iVar0 = func_575(Global_1310720->f_21, 2);
	if (iVar0 == -1)
	{
		return 0;
	}
	func_1353(15, &Var1);
	Var1.f_2 = -1999103282;
	Var1.f_3 = iParam0;
	Var1.f_4 = iParam1;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var1.f_1), &Var1))
	{
		Var1.f_2 = 383290544;
		DATAFILE::_DATAFILE_GET_HASH(&iVar6, &Var1);
		if (func_1651(iVar0) == iVar6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1357(int iParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_1652(iParam0);
	if (func_814(373691918) && Global_1310720->f_12)
	{
		return iVar0 == 4;
	}
	if (iParam2 != -1)
	{
		return iVar0 == iParam2;
	}
	return (uParam1 || iVar0 == -1);
}

int func_1358(int iParam0)
{
	struct<4> Var0;
	var uVar5;

	if (!func_1353(15, &Var0))
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

int func_1359(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, float fParam10)
{
	int iVar0;
	int iVar1;

	if (bParam5)
	{
		if (func_1653(iParam3, iParam4))
		{
			return 0;
		}
	}
	if (!bParam7 || func_1654(5))
	{
		if (func_1655(iParam3, iParam4))
		{
			return 0;
		}
	}
	iVar0 = func_1255(vParam0);
	if (bParam6)
	{
		iVar1 = func_1656(vParam0, 1);
		if (func_1657(iVar1) || func_1658(iVar0, 1))
		{
			return 0;
		}
	}
	if (!func_1659(iParam3, iParam4))
	{
		return 0;
	}
	if (!func_1660())
	{
		if (func_1661(iParam3, iParam4))
		{
			return 0;
		}
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam8))
	{
		if (!func_1662(iVar0))
		{
			return 0;
		}
		if (Global_1310720->f_23 >= 3)
		{
			if (Global_1310720->f_21 != -1)
			{
				if (Global_1310720->f_21 == func_1656(vParam0, 0))
				{
					return 0;
				}
			}
		}
	}
	if (!func_1663(iParam3, iParam4))
	{
		return 0;
	}
	if (func_1664(0) == 3)
	{
		if (((vParam0.x > -1480f && vParam0.x < -1475f) && vParam0.y > -359f) && vParam0.y < -354f)
		{
			return 0;
		}
	}
	if (!func_1665(65536, 2))
	{
		if (((vParam0.x > 1673f && vParam0.x < 1676f) && vParam0.y > -1888f) && vParam0.y < -1885f)
		{
			return 0;
		}
	}
	if (func_659())
	{
		if (VOLUME::_0x92A78D0BEDB332A3(iParam8))
		{
			if (!VOLUME::_0xF256A75210C5C0EB(iParam8, vParam0))
			{
				return 0;
			}
		}
		if (func_1666(vParam0, fParam10) || func_1667(vParam0, fParam10))
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

bool func_1360(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_1361(char* sParam0)
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

void func_1362(var uParam0)
{
	if (func_1360(uParam0, 1))
	{
		func_1668(1);
	}
}

int func_1363(int iParam0)
{
	if ((((((iParam0 == 11 || iParam0 == 13) || iParam0 == 15) || iParam0 == 16) || iParam0 == 19) || iParam0 == 20) || iParam0 == 22)
	{
		return 0;
	}
	return 1;
}

bool func_1364(int iParam0)
{
	return func_512(iParam0, 5, 1);
}

int func_1365(int iParam0)
{
	if (iParam0 == 14)
	{
		return 0;
	}
	return 1;
}

bool func_1366(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

void func_1367(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_1368(int iParam0)
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

int func_1369(int iParam0)
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
	func_1669(iVar0, &uVar2, &uVar3, &iVar1, &uVar4);
	if (func_1670(&uVar5, iVar0, iVar1, uVar2))
	{
	}
	return uVar5;
}

int func_1370(int iParam0)
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
			iVar0 = func_1671(iVar1);
		}
	}
	return iVar0;
}

struct<10> func_1371(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

int func_1372(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<37> Var0;
	int iVar47;

	*uParam3 = 0;
	if (*uParam2 < 15)
	{
		return 0;
	}
	if (!func_646(iParam0, 0))
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
		func_1672(iParam0, iParam1, uParam2, *uParam3);
	}
	return 1;
}

int func_1373(var uParam0)
{
	return uParam0 & 31;
}

bool func_1374()
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

int func_1375()
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
		else if ((((WEAPON::IS_WEAPON_VALID(iVar0) && WEAPON::_0x0556E9D2ECF39D01(iVar0)) && !func_1473(iVar0)) && !PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true)) && !(PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && !CAM::_0xA24C1D341C6E0D53(1, 0, 0)))
		{
			return 3;
		}
		else if (iVar0 == joaat("weapon_kit_binoculars"))
		{
			return 1;
		}
		else if ((WEAPON::IS_WEAPON_VALID(iVar0) && func_1473(iVar0)) || iVar0 == joaat("weapon_lasso"))
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

void func_1376(int iParam0)
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

void func_1377(int iParam0)
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
		if (func_324(iVar1, 1))
		{
			TASK::CLEAR_PED_TASKS(iVar1, 1, 0);
			TASK::TASK_STAND_STILL(iVar1, -1);
		}
		iVar0++;
	}
}

int func_1378(int iParam0, int iParam1, int iParam2)
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

void func_1379(int iParam0)
{
	if (func_921(iParam0, 0))
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

void func_1380(int iParam0)
{
	int iVar0;

	if (!func_511(iParam0))
	{
		return;
	}
	if (func_397(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_131(iParam0);
	func_1379(iVar0);
	func_991(iParam0, 8192, 1);
}

void func_1381(int iParam0)
{
	if (func_921(iParam0, 0))
	{
		return;
	}
	ENTITY::SET_ENTITY_INVINCIBLE(iParam0, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 179, false);
	ENTITY::SET_ENTITY_PROOFS(iParam0, 0, false);
}

void func_1382(int iParam0)
{
	int iVar0;

	if (!func_511(iParam0))
	{
		return;
	}
	if (func_397(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_131(iParam0);
	func_1381(iVar0);
	func_991(iParam0, 8192, 0);
}

void func_1383(int iParam0)
{
	if (func_921(iParam0, 0))
	{
		return;
	}
	PED::SET_PED_CAN_RAGDOLL(iParam0, true);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iParam0, 1048575);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 8229);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iParam0, false);
}

void func_1384(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (func_337(14))
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

void func_1385(int iParam0)
{
	int iVar0;

	if (!func_511(iParam0))
	{
		return;
	}
	if (func_397(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_131(iParam0);
	func_1383(iVar0);
	func_991(iParam0, 16384, 1);
}

void func_1386(int iParam0)
{
	if (func_921(iParam0, 0))
	{
		return;
	}
	PED::SET_PED_CAN_RAGDOLL(iParam0, true);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iParam0, 1048575);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 1);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iParam0, true);
}

void func_1387(int iParam0)
{
	int iVar0;

	if (!func_511(iParam0))
	{
		return;
	}
	if (func_397(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_131(iParam0);
	func_1386(iVar0);
	func_991(iParam0, 16384, 0);
}

int func_1388(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = func_1673(iParam0, 1);
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
	return 1;
}

int func_1389(int iParam0, int iParam1)
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
		if (func_522(iParam1, iVar1))
		{
			iVar2 = iVar1;
		}
	}
	return iVar2;
}

int func_1390(int iParam0)
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

void func_1391(int iParam0, int iParam1)
{
	(Global_40.f_4942[iParam0 /*60*/])->f_5 = ((Global_40.f_4942[iParam0 /*60*/])->f_5 - ((Global_40.f_4942[iParam0 /*60*/])->f_5 && iParam1));
}

void func_1392(int iParam0, int iParam1, float fParam2)
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

void func_1393(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_1047(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || iParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, iParam1, iParam3);
	}
}

void func_1394(int iParam0, int iParam1)
{
	if (func_1047(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 2 || iParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 2);
		}
	}
}

void func_1395(int iParam0, int iParam1)
{
	if (func_1047(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || iParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
	}
}

void func_1396(int iParam0, int iParam1)
{
	if (func_1047(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 0 || iParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 0);
		}
	}
}

int func_1397()
{
	return 1;
}

float func_1398(int iParam0, int iParam1, bool bParam2)
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
	return func_1249(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
}

void func_1399(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_131(iParam0);
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

void func_1400(int iParam0)
{
	int iVar0;

	if (!func_511(iParam0))
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

void func_1401(int iParam0, int iParam1)
{
	if (!func_511(iParam0))
	{
		return;
	}
	((*Global_1360165)[iParam0 /*1157*/])->f_70.f_12 = iParam1;
}

int func_1402(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_1403(var uParam0, int iParam1)
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

void func_1404(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 62914560);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_1405(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_1005(*uParam0);
	iVar1 = func_1004(*uParam0);
	if (iParam1 < 1 || iParam1 > func_1008(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4063232);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_1406(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 126976);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_1407(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4032);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_1408(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 63);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

int func_1409(var uParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_1410(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(func_491(bParam5), &uParam0, uParam4, !bParam6))
	{
		return 0;
	}
	return 1;
}

int func_1411(var uParam0)
{
	if (!func_646(*uParam0, 0))
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

struct<4> func_1412(bool bParam0)
{
	int iVar0;

	iVar0 = func_491(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224214))
		{
			*Global_1224214 = { func_1021(923904168, func_885(bParam0), -740156546, bParam0) };
		}
		return *Global_1224214;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224222))
		{
			*Global_1224222 = { func_1021(923904168, func_885(bParam0), -740156546, 0) };
		}
		return *Global_1224222;
	}
	return func_1021(923904168, func_885(bParam0), -740156546, 0);
}

int func_1413(int iParam0, bool bParam1)
{
	if (func_492(iParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
	{
		if (bParam1)
		{
			return func_1063(-1185145312, 0) > 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_1414(int iParam0, var uParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	bool bVar28;
	int iVar29;

	if (!func_646(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_1061(iParam0, 0, 1) };
	iVar5 = 1728382685; /* GXTEntry: "Right" */
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_1089((375 + iVar29), 1);
		if (func_1090(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_1091(iParam0, &Var6, iVar5);
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

int func_1415(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;

	if (!func_646(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_1021(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_491(bParam6), &Var0, 0);
	return uVar4;
}

int func_1416(int iParam0, int iParam1)
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

bool func_1417(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_1418(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_12105[iParam0 /*7*/])->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_1674(iParam0);
	}
	else
	{
		func_1675(iParam0, iParam1);
	}
	func_1676();
}

void func_1419(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_2 = iParam1;
}

void func_1420(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_3 = iParam1;
}

void func_1421(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_4 = iParam1;
}

void func_1422(int iParam0, var uParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12105[iParam0 /*7*/] = uParam1;
		return;
	}
	Global_1058888->f_498[iParam0 /*2*/] = uParam1;
}

void func_1423(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_12105[iParam0 /*7*/])->f_5 = iParam1;
		return;
	}
	(Global_1058888->f_498[iParam0 /*2*/])->f_1 = iParam1;
}

bool func_1424(int iParam0, int iParam1)
{
	if (func_56() != -1)
	{
		return false;
	}
	if (!func_402(iParam0))
	{
		return false;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(func_840(iParam0)))
	{
		return false;
	}
	if (iParam1 && !ENTITY::DOES_ENTITY_EXIST(func_1031(iParam0)))
	{
		return false;
	}
	return !_NAMESPACE48::_0xEB98B38CA60742D7(func_840(iParam0));
}

Vector3 func_1425(vector3 vParam0, vector3 vParam3, vector3 vParam6)
{
	vector3 vVar0;

	vVar0 = { func_1677(vParam6, vParam3) };
	return vParam0 + vVar0;
}

void func_1426(int iParam0, var uParam1)
{
	if (Global_40.f_4283 == 3)
	{
		if (*uParam1 == 3)
		{
			INTERIOR::FORCE_ROOM_FOR_ENTITY(&(uParam1->f_9[iParam0 /*9*/]), INTERIOR::GET_INTERIOR_AT_COORDS(uParam1->f_3), -1289461573);
		}
	}
}

int func_1427(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	var uVar9;

	if (!func_646(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_885(0) };
	Var0.f_4 = func_1428(iParam1);
	Var5 = { func_1021(iParam0, Var0, Var0.f_4, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var5))
	{
		return 0;
	}
	uVar9 = INVENTORY::_0xC97E0D2302382211(func_491(0), &Var5, 0);
	return uVar9;
}

int func_1428(int iParam0)
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

void func_1429(var uParam0)
{
	Global_1914319->f_15923 = uParam0;
}

bool func_1430(int iParam0)
{
	return iParam0 != 0;
}

int func_1431(vector3 vParam0, int iParam3)
{
	vector3 vVar0;
	struct<2> Var3;
	float fVar6;

	func_1678(iParam3, &vVar0, &Var3, &fVar6);
	if (func_1679(vParam0, vVar0, Var3, Var3.f_1, fVar6))
	{
		return 1;
	}
	return 0;
}

int func_1432(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_646(iParam0, 0))
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
	*uParam2 = Var0.f_1;
	return 1;
}

struct<4> func_1433(bool bParam0)
{
	int iVar0;

	iVar0 = func_491(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224218))
		{
			*Global_1224218 = { func_1021(271701509, func_885(bParam0), 12999093, 0) };
		}
		return *Global_1224218;
	}
	return func_1021(271701509, func_885(bParam0), 12999093, 0);
}

int func_1434(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_492(iParam0);
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

void func_1435(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_1436(var uParam0)
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

float func_1437(int iParam0)
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
			return func_1680(iParam0);
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
			return func_1680(iParam0);
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
			return func_1680(iParam0);
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

int func_1438(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_669(18);
		case 2:
			return func_669(20);
		case 1:
			return func_669(19);
		default:
			break;
	}
	return 1;
}

int func_1439(int iParam0)
{
	return func_1681(&(Global_40.f_11095.f_11[iParam0]));
}

void func_1440(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	if (func_56() != -1)
	{
		return;
	}
	if (Global_1347477->f_117 || !func_669(31))
	{
		return;
	}
	iVar0 = func_1439(iParam0);
	fVar1 = &Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_1439(iParam0);
	if (func_1682(iParam0) && func_1683(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_1684(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_1685(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_202(func_1686(iParam0), 0);
					}
					func_1687(iParam0, iVar2, iVar3);
					func_1688(iParam0, 7000);
				}
				Global_1347477->f_8 = 1;
			}
		}
	}
	Global_1347477->f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
}

char* func_1441(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_1442(int iParam0)
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

int func_1443()
{
	return func_1689(Global_40.f_12018);
}

int func_1444()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_1071(iVar1);
		if (func_694(iVar2, 1, 0) || func_1450(func_1449(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1445()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1690(COLLECTION::_0x126CBEBBA46693CF(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1446()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_1455(COLLECTION::_0x126CBEBBA46693CF(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1447()
{
	return COLLECTION::_0x3A65F4844913A047(2103522376, 0);
}

int func_1448(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 554799588;
		case 1:
			return -1021394391;
		case 2:
			return -987306668;
		case 3:
			return -1028735103;
		case 4:
			return 515229791;
		case 5:
			return -1230863414;
		case 6:
			return 232875659;
		case 7:
			return 1423129537;
		case 8:
			return -435742319;
		case 9:
			return -1854702679;
		case 10:
			return 1265323898;
		case 11:
			return -479775696;
		default:
			break;
	}
	return 0;
}

int func_1449(int iParam0)
{
	switch (iParam0)
	{
		case -1230863414:
			return 1;
		case -1021394391:
			return 8;
		case 232875659:
			return 4;
		case -1028735103:
			return 16;
		case 554799588:
			return 32;
		case 1265323898:
			return 64;
		case -1854702679:
			return 128;
		case -987306668:
			return 256;
		case -479775696:
			return 2;
		case 515229791:
			return 512;
		case -435742319:
			return 1024;
		case 1423129537:
			return 2048;
		default:
			break;
	}
	return 0;
}

bool func_1450(var uParam0)
{
	return (Global_40.f_12018 && uParam0) != 0;
}

char* func_1451(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_DB_DINO_BONES_FOUND";
		case 1:
			return "COL_DB_SEND";
		case 2:
			return "COL_DB_COLLECT";
		default:
			break;
	}
	return "";
}

int func_1452(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		case 1:
			return 6;
		case 2:
			return 7;
		case 3:
			return 8;
		case 4:
			return 9;
		default:
			break;
	}
	return 5;
}

int func_1453(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15;
		case 1:
			return 16;
		case 2:
			return 17;
		case 3:
			return 18;
		case 4:
			return 19;
		default:
			break;
	}
	return 15;
}

char* func_1454(int iParam0)
{
	switch (iParam0)
	{
		case 281887510:
			return "COL_EP_LITTLE_FOUND";
		case -164081697:
			return "COL_EP_REDDISH_FOUND";
		case -1161319399:
			return "COL_EP_SNOWY_FOUND";
		case 728781265:
			return "COL_RO_LADY_OF_NIGHT_FOUND";
		case -222563712:
			return "COL_HF_FOUND";
		case 1794857344:
			return "COL_RO_LADY_SLIPPER_FOUND";
		case 1952409553:
			return "COL_RO_MOCCASIN_FOUND";
		case 2116770557:
			return "COL_GF_FOUND";
		case -651064726:
			return "COL_RO_ACUNAS_STAR_FOUND";
		case -404270094:
			return "COL_RO_CIGAR_FOUND";
		case 2093126853:
			return "COL_RO_GHOST_FOUND";
		case 2085530337:
			return "COL_SF_FOUND";
		case -150591160:
			return "COL_RO_NIGHT_SCENTED_FOUND";
		case -323969289:
			return "COL_RO_RAT_TAIL_FOUND";
		case 1504361882:
			return "COL_RO_SPIDER_FOUND";
		case -1521783510:
			return "COL_RO_CLAMSHELL_FOUND";
		case 1714875242:
			return "COL_RO_DRAGONS_FOUND";
		case 1019229063:
			return "COL_RO_QUEENS_FOUND";
		case 927763737:
			return "COL_RO_SPARROWS_FOUND";
		default:
			break;
	}
	return "";
}

bool func_1455(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

char* func_1456(int iParam0)
{
	switch (iParam0)
	{
		case -1865241121:
			return "PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY";
		case 2117142684:
			return "PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY";
		case -1409326024:
			return "PROVISION_FISH_LAKE_STURGEON_LEGENDARY";
		case -641744968:
			return "PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY";
		case -946988203:
			return "PROVISION_FISH_LONGNOSE_GAR_LEGENDARY";
		case -646136018:
			return "PROVISION_FISH_MUSKIE_LEGENDARY";
		case -955835837:
			return "PROVISION_FISH_PERCH_LEGENDARY";
		case -179276075:
			return "PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY";
		case -492711560:
			return "PROVISION_FISH_ROCK_BASS_LEGENDARY";
		case 1764383959:
			return "PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY";
		case 317501533:
			return "PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY";
		case 817753087:
			return "PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY";
		case 576606016:
			return "PROVISION_FISH_BLUEGILL_LEGENDARY";
		default:
			break;
	}
	return "";
}

char* func_1457(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_RC_ROCK_FACES_FOUND";
		case 1:
			return "COL_RC_SEND";
		case 2:
			return "COL_RC_COLLECT";
		default:
			break;
	}
	return "";
}

int func_1458(int iParam0)
{
	if (func_1691(iParam0) && func_694(iParam0, 1, 0))
	{
		return 1;
	}
	else if (func_1692(iParam0) && func_1693(iParam0))
	{
		return 1;
	}
	return 0;
}

char* func_1459(int iParam0)
{
	if (!func_646(iParam0, 0))
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(func_712(iParam0));
}

int func_1460(int iParam0)
{
	return (Global_1898164->f_1[iParam0 /*5*/])->f_2;
}

void func_1461(bool bParam0)
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

void func_1462(int iParam0)
{
	int iVar0;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1955569->f_5.f_1))
	{
		return;
	}
	if (DATABINDING::_DATABDING_GET_ARRAY_COUNT(Global_1955569->f_5.f_1) > iParam0)
	{
		iVar0 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(Global_1955569->f_5.f_1, iParam0);
		if (iVar0 == &Global_1955569->f_5.f_2[iParam0 /*36*/])
		{
			return;
		}
	}
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1955569->f_5.f_1, iParam0, "pause_info_panel_list", &(Global_1955569->f_5.f_2[iParam0 /*36*/]));
}

void func_1463(bool bParam0)
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

void func_1464(bool bParam0)
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

void func_1465(bool bParam0)
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

void func_1466(bool bParam0)
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

void func_1467(bool bParam0)
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

void func_1468(bool bParam0)
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

int func_1469(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return &(Global_1946804->f_1497.f_1[func_949(iParam0, 1) /*3*/]);
}

void func_1470()
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-1526891582))
	{
		func_1694();
		UNLOCK::_UNLOCK_SET_UNLOCKED(-1526891582, true);
		func_266(joaat("weapon_revolver_cattleman_john"));
		func_718(joaat("weapon_revolver_cattleman_john"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_revolver_cattleman_john"), true, 2, false, false);
		func_266(joaat("weapon_melee_knife_john"));
		func_718(joaat("weapon_melee_knife_john"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_melee_knife_john"), true, 4, false, false);
	}
}

int func_1471(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_491(0);
	*uParam1 = { func_1021(iParam0, func_1412(0), iParam3, 0) };
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

int func_1472(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_1473(int iParam0)
{
	return WEAPON::_0xC4DEC3CA8C365A5D(iParam0);
}

int func_1474(int iParam0)
{
	struct<5> Var0;

	Var0 = { func_1061(iParam0, 1, 0) };
	return func_1135(Var0.f_4);
}

int func_1475(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_667(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_667(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_667(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_667(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_667(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_667(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

int func_1476(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam0 == &Global_1946804->f_57[func_949(iParam1, 1) /*11*/])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_1139(524288))
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

int func_1477(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 968830139;
		case 1:
			return -649219937;
		case 2:
			return -858567048;
		case 3:
			return -718162726;
		case 4:
			return -1284282080;
		case 5:
			return -725003445;
		case 6:
			return -1445630104;
		case 7:
			return 580970876;
		case 8:
			return 967601061;
		case 9:
			return 1946030891;
		case 10:
			return -1511404982;
		case 11:
			return -944465290;
		case 12:
			return -1701098855;
		case 13:
			return 425319238;
		case 14:
			return 363594903;
		case 15:
			return -1217729597;
		case 16:
			return -1540119664;
		case 17:
			return 2100194981;
		case 18:
			return 446659922;
		case 19:
			return -390982951;
		case 20:
			return -1018798851;
		case 21:
			return -757567246;
		case 22:
			return -2054602073;
		case 23:
			return -378441099;
		case 24:
			return -585121677;
		case 25:
			return 1566949660;
		default:
			break;
	}
	return 0;
}

int func_1478(var uParam0)
{
	return func_1695(uParam0, -1);
}

bool func_1479(int iParam0, bool bParam1)
{
	return func_1696(func_548(), iParam0, bParam1);
}

int func_1480()
{
	if (func_1097())
	{
		return DLC::_0x1DB9D61E505AE3FC();
	}
	return 0;
}

void func_1481(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_1697((Global_40.f_4283.f_325 + iParam0));
}

void func_1482(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_1480())
	{
		func_1164(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_1164(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

bool func_1483(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

void func_1484(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_1280(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		MISC::SET_BIT(Global_40.f_283[iVar1], iVar2);
	}
	else
	{
		iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (iVar3 == 255)
		{
			Global_1058888->f_40567.f_46 = 1;
			MISC::SET_BIT(Global_1058888->f_40567.f_14[iVar1], iVar2);
		}
		else
		{
			MISC::SET_BIT(((*Global_1055058)[iVar3 /*116*/])->f_72[iVar1], iVar2);
		}
		MISC::SET_BIT(Global_1058888->f_40567[iVar1], iVar2);
	}
	Global_1934765 = 0;
}

void func_1485(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_1280(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		MISC::CLEAR_BIT(Global_40.f_283[iVar1], iVar2);
	}
	else
	{
		iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (iVar3 == 255)
		{
			Global_1058888->f_40567.f_46 = 1;
			MISC::CLEAR_BIT(Global_1058888->f_40567.f_14[iVar1], iVar2);
		}
		else
		{
			MISC::CLEAR_BIT(((*Global_1055058)[iVar3 /*116*/])->f_72[iVar1], iVar2);
		}
	}
	Global_1934765 = 0;
}

void func_1486()
{
	func_1485(-939420910);
	func_1485(-1187950766);
	func_1485(356365161);
	func_1485(753127042);
	func_1485(-2038424081);
	func_1485(1884271742);
	func_1485(459290420);
}

void func_1487()
{
	func_1485(704802028);
	func_1485(588987611);
	func_1485(2008888900);
	func_1485(1649996811);
	func_1485(227918160);
	func_1485(168171957);
	func_1485(1193080109);
	func_1485(-491981251);
	func_1485(-639037538);
	func_1485(-618620429);
}

bool func_1488(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_1489(int iParam0)
{
	switch (iParam0)
	{
		case -1791518714:
			return 1;
		case -2087881550:
			return 2;
		case 1908068621:
			return 4;
		case 1611247019:
			return 8;
		case 1319635688:
			return 16;
		default:
			break;
	}
	return 0;
}

void func_1490(var uParam0)
{
	Global_40.f_12018.f_43 = (Global_40.f_12018.f_43 || uParam0);
}

bool func_1491(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_1492(int iParam0, int iParam1)
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

void func_1493()
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

void func_1494(int iParam0)
{
	func_1501(iParam0, 8, 6);
}

void func_1495(int iParam0)
{
	func_1698(&(Global_1946804->f_2589), iParam0);
}

void func_1496(int iParam0, int iParam1)
{
	func_1699(&(Global_1946804->f_2589), iParam0, iParam1);
}

void func_1497(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_1498(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 12;
	iVar2 = func_492(&(uParam0->f_1[iParam2 /*3*/]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_1700(iParam2, 65536) && &uParam0->f_1[iVar1 /*3*/] == -452402570)
	{
		uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
		(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
		if (bParam4)
		{
			func_1496(iVar1, iVar3);
		}
	}
	if (func_1156(-1586649372) && func_1700(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
		(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
		if (bParam4)
		{
			func_1496(iVar1, iVar3);
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
						func_1496(iVar1, iVar3);
					}
				}
			}
			func_1701(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_1701(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_1496(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 525
				func_1701(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if ((uParam0->f_1[iVar1 /*3*/])->f_1 == 1155669136)
				{
					(uParam0->f_1[iVar1 /*3*/])->f_1 = -1539589426;
					if (bParam4)
					{
						func_1496(iVar1, iVar3);
					}
				}
				if ((uParam0->f_1[iVar1 /*3*/])->f_1 == 1530758430)
				{
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 1334603721;
					if (bParam4)
					{
						func_1496(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 656
				func_1701(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1170; //curOff = 691
				func_1701(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_1496(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 786
				func_1701(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_1496(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_1496(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_492(&(uParam0->f_1[iVar1 /*3*/])))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_1496(iVar1, iVar3);
						}
					}
				}
				Jump @1170; //curOff = 1025
				iVar1 = 36;
				if (&uParam0->f_1[iParam2 /*3*/] != &Global_1946804->f_57[iParam2 /*11*/] && func_667(&(Global_1946804->f_1497.f_1[iVar1 /*3*/]), -1638171711))
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
			switch (func_492(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_492(&(uParam0->f_1[iVar1 /*3*/])))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_1496(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_492(&(uParam0->f_1[iVar1 /*3*/])) || func_667(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_1496(iVar1, iVar3);
						}
					}
					break;
			}
		}

int func_1499(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;

	uVar0 = func_1702(0);
	if (iParam2 != 0 && func_1703(iParam0, uVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_1704(iParam0, func_1492(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_1500(var uParam0, bool bParam1, int iParam2)
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

	bVar6 = func_56() != -1;
	iVar7 = func_1702(0);
	if (func_1139(32768))
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
			iVar5 = func_1492(iVar0, 1);
			if (func_1705(iVar5, 8))
			{
			}
			else if (&(Global_1946804->f_57[iVar0 /*11*/])->f_2[0] == -1802376732 || &uParam0->f_1[iVar0 /*3*/] == 0)
			{
			}
			else if (func_1705(iVar5, 6) || &uParam0->f_1[iVar0 /*3*/] == &Global_1946804->f_57[iVar0 /*11*/])
			{
			}
			else
			{
				iVar4 = func_1476(&(uParam0->f_1[iVar0 /*3*/]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_1706(uParam0);
				if (iVar3 > 0)
				{
					if (!func_1139(524288))
					{
						func_1503(524288);
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
							iVar5 = func_1492(iVar0, 1);
							if (func_1705(iVar5, 8))
							{
							}
							else if (&(Global_1946804->f_57[iVar0 /*11*/])->f_2[0] == -1802376732 || &uParam0->f_1[iVar0 /*3*/] == 0)
							{
							}
							else if (func_1705(iVar5, 6) || &uParam0->f_1[iVar0 /*3*/] == &Global_1946804->f_57[iVar0 /*11*/])
							{
							}
							else
							{
								iVar4 = func_1476(&(uParam0->f_1[iVar0 /*3*/]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
									(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
									if (bParam1)
									{
										func_1496(iVar0, iParam2);
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
					func_1506(524288);
				}
			}
		}
	}

void func_1501(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_949(iParam0, 1) /*11*/])->f_10 = ((Global_1946804->f_57[func_949(iParam0, 1) /*11*/])->f_10 - ((Global_1946804->f_57[func_949(iParam0, 1) /*11*/])->f_10 && iParam1));
}

void func_1502(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_1707(&(uParam0->f_2[iVar0 /*2*/]), bParam1, bParam2);
		iVar0++;
	}
	if (func_56() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_1708(2, Global_26795.f_776)) || Global_1946804->f_1497 != func_1525(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = (&Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= 4096;
				Global_1946804->f_1497 = func_1525(Global_40.f_7729);
				Global_1946804->f_1378 = func_1525(Global_40.f_7729);
				Global_26795.f_776 = 0;
				func_1709(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_1710(0, 1);
	}
}

void func_1503(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_1504(struct<4> Param0)
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
			if (func_1711(Param0))
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
			func_1712(Param0);
			*(Global_1946804->f_668[Global_1946804->f_856 /*4*/]) = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_1503(8);
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
			if (func_1711(Param0))
			{
				return;
			}
			func_1712(Param0);
			*(Global_1946804->f_567[Global_1946804->f_851 /*4*/]) = { Param0 };
			Global_1946804->f_851++;
			func_1503(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_1143(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

void func_1505(var uParam0)
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

void func_1506(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

bool func_1507(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_1508(struct<4> Param0)
{
	int iVar0;
	int iVar1;

	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_1711(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1 /*4*/] == Param0 && (Global_1946804->f_769[iVar1 /*4*/])->f_2 == Param0.f_2) && (Global_1946804->f_769[iVar1 /*4*/])->f_3 == Param0.f_3) && (Global_1946804->f_769[iVar1 /*4*/])->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1 /*4*/] == 34 && func_1711(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_1712(Param0);
	*(Global_1946804->f_769[Global_1946804->f_854 /*4*/]) = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_1503(8);
}

int func_1509()
{
	if (Global_1572887->f_12 != -1)
	{
		return 0;
	}
	return Global_1347477->f_203;
}

float func_1510(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

float func_1511()
{
	float fVar0;
	int iVar1;

	fVar0 = func_1713(13);
	iVar1 = func_1714(fVar0);
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

float func_1512()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_1513()
{
	if (func_1097())
	{
		if (DLC::_0xA16B4FBA7887D7BA())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_1514()
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

float func_1515()
{
	return Global_1955565->f_3;
}

void func_1516(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;

	sVar0 = func_1715(iParam0, 1, 0, 0);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_12[1]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_16[1]), iParam2);
}

void func_1517(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_1715(iParam0, 2, 0, 0);
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

float func_1518(float fParam0, float fParam1, float fParam2)
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

bool func_1519()
{
	return func_1713(12) <= -99f;
}

bool func_1520()
{
	return func_1713(12) >= 99f;
}

int func_1521()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_492(iVar1) == -999503751)
		{
			if (func_1716() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

int func_1522(int iParam0)
{
	if (!func_1151(iParam0))
	{
		return 0;
	}
	if (func_1526(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

int func_1523(int iParam0)
{
	if (!func_1151(iParam0))
	{
		return 0;
	}
	if (func_1526(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

void func_1524(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1151(iParam0))
	{
		return;
	}
	if (!func_1523(iParam0))
	{
		func_1528(iParam0, 2);
		if (bParam2)
		{
			if (!func_126(0, 0, 1))
			{
				func_323(1, 4);
			}
		}
		if ((!func_1527() && !bParam1) && !func_126(0, 0, 1))
		{
			func_299(MISC::_CREATE_VAR_STRING(10, "OUT_JOURN_ADD", func_1717(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

int func_1525(int iParam0)
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

bool func_1526(int iParam0, int iParam1)
{
	if (!func_1151(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0 /*3*/] && iParam1) != 0;
}

bool func_1527()
{
	int iVar0;

	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && _NAMESPACE71::_0x59FA676177DBE4C9(iVar0) == 4);
}

void func_1528(int iParam0, int iParam1)
{
	if (!func_1151(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0 /*3*/] = (Global_40.f_7157[iParam0 /*3*/] || iParam1);
}

int func_1529(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case -2061583405:
			iVar0 = Global_1946804->f_2657.f_26.f_1;
			break;
		case 81053684:
			iVar0 = 1;
			break;
		case -525676072:
			iVar0 = Global_1946804->f_2657.f_26.f_2;
			break;
		case -1719060085:
			iVar0 = 1;
			break;
		case -999503751:
			iVar0 = Global_1946804->f_2657.f_26;
			break;
		case -413129408:
			iVar0 = 1;
			break;
		default:
			return 0;
	}
	switch (iParam0)
	{
		case -999503751:
			if (iVar0 > 0 && !bParam1)
			{
				iVar0 = (iVar0 - 1);
			}
			break;
	}
	return iVar0;
}

void func_1530(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_1718(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_670(50);
			}
			else
			{
				func_670(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_670(51);
			}
			else
			{
				func_670(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_1719(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_699();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_699();
			}
			break;
		case 3:
			func_670(24);
			if (bParam1)
			{
				if (!func_1719(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_699();
				}
			}
			break;
	}
}

void func_1531(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_1720(0))
			{
				iVar0++;
			}
			if (func_1720(2))
			{
				iVar0++;
			}
			if (func_1720(4))
			{
				iVar0++;
			}
			if (!func_1721(16))
			{
				if (iVar0 == 1)
				{
					func_1722();
					func_202(456, 1);
					func_1723(16);
				}
			}
			if (!func_1721(32))
			{
				if (iVar0 >= 3)
				{
					func_1722();
					func_202(456, 1);
					func_1723(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_1720(1))
			{
				iVar0++;
			}
			if (func_1720(3))
			{
				iVar0++;
			}
			if (func_1720(7))
			{
				iVar0++;
			}
			if (!func_1721(1))
			{
				if (iVar0 == 1)
				{
					func_1724();
					func_202(457, 1);
					func_1723(1);
				}
			}
			if (!func_1721(2))
			{
				if (iVar0 >= 3)
				{
					func_1724();
					func_202(457, 1);
					func_1723(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_1720(5))
			{
				iVar0++;
			}
			if (func_1720(6))
			{
				iVar0++;
			}
			if (func_1720(8))
			{
				iVar0++;
			}
			if (!func_1721(4))
			{
				if (iVar0 == 1)
				{
					func_1725();
					func_202(455, 1);
					func_1723(4);
				}
			}
			if (!func_1721(8))
			{
				if (iVar0 >= 3)
				{
					func_1725();
					func_202(455, 1);
					func_1723(8);
				}
			}
			break;
	}
}

void func_1532(var uParam0)
{
	func_1158(uParam0, 143479330);
	if (Global_1946804->f_1 == 2026485318)
	{
		func_1158(uParam0, 617531372);
	}
	else
	{
		func_1158(uParam0, 291123060);
	}
}

void func_1533(var uParam0, int iParam1, struct<14> Param2)
{
	int iVar0;
	struct<21> Var1;

	if (!func_1726(uParam0))
	{
		return;
	}
	if (&Global_1224865 < 20)
	{
		Global_1224865 = &Global_1224865 + 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*(Global_1224865->f_1[iVar0 /*21*/]) = { *(Global_1224865->f_1[iVar0 + 1 /*21*/]) };
			iVar0++;
		}
	}
	Var1.f_7.f_2.f_1 = 10;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_6 = 1;
	Var1.f_7 = { Param2 };
	*(Global_1224865->f_1[(&Global_1224865 - 1) /*21*/]) = { Var1 };
}

int func_1534(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
					*uParam1 = iVar1;
					uParam1->f_1 = iVar2;
					uParam1->f_2 = iParam2;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_1535(char* sParam0, char* sParam1, int iParam2)
{
	_NAMESPACE84::_0x74BCCEB233AD95B2(-466562563, MISC::GET_HASH_KEY(sParam0));
	_NAMESPACE84::_0x74BCCEB233AD95B2(1885309238, MISC::GET_HASH_KEY(sParam1));
	_NAMESPACE84::_0x74BCCEB233AD95B2(-826961056, iParam2);
}

void func_1536(var uParam0)
{
	if (Global_1357549->f_1894 > 0)
	{
		if (!func_204(uParam0->f_8))
		{
			uParam0->f_8 = func_566("SHOP_PREV_PAGE", -875187602, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			func_210(uParam0->f_8, -2019190071, 0, 1);
		}
	}
	else
	{
		func_205(&(uParam0->f_8), 1, 1);
	}
	if (Global_1357549->f_1894 < 3)
	{
		if (!func_204(uParam0->f_7))
		{
			uParam0->f_7 = func_566("SHOP_NEXT_PAGE", 285921746, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			func_210(uParam0->f_7, -2019190071, 0, 1);
		}
	}
	else
	{
		func_205(&(uParam0->f_7), 1, 1);
	}
	if (func_1727(uParam0->f_10, 1) > 0f)
	{
		if (func_1728(uParam0->f_8, 1))
		{
			func_1729(uParam0->f_8, 0, 0);
		}
		if (func_1728(uParam0->f_7, 1))
		{
			func_1729(uParam0->f_7, 0, 0);
		}
	}
	else
	{
		if (func_204(uParam0->f_8) && !func_1728(uParam0->f_8, 0))
		{
			func_1729(uParam0->f_8, 1, 0);
		}
		if (func_204(uParam0->f_7) && !func_1728(uParam0->f_7, 0))
		{
			func_1729(uParam0->f_7, 1, 0);
		}
	}
}

void func_1537(var uParam0)
{
	if (uParam0->f_773)
	{
		func_1730(uParam0);
		if (uParam0->f_772)
		{
			func_728(uParam0->f_1, "JOURNAL_INFO_HIDE", 1);
		}
		else
		{
			func_728(uParam0->f_1, "JOURNAL_INFO_SHOW", 1);
		}
	}
	else
	{
		func_1541(uParam0);
	}
}

void func_1538(var uParam0, var uParam1)
{
	bool bVar0;

	if (uParam0->f_35.f_491)
	{
		if (!func_204(uParam0->f_10))
		{
			uParam0->f_10 = func_566("PURCHASE_UPGRADE", 1138488863, 5, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			func_210(uParam0->f_10, -2019190071, 0, 1);
			func_1729(uParam0->f_10, 0, 1);
		}
		if (uParam0->f_35.f_491.f_5)
		{
			if (func_204(uParam0->f_10) && !func_1728(uParam0->f_10, 0))
			{
				func_1729(uParam0->f_10, 1, 0);
			}
		}
		else
		{
			bVar0 = true;
			if (func_1203(uParam0, 0))
			{
				bVar0 = false;
			}
			else if (uParam0->f_35.f_491.f_1 == 2 && func_1731(2, uParam1, 1120403456))
			{
				bVar0 = false;
			}
			else if (uParam0->f_35.f_491.f_1 == 1 && func_1731(0, uParam1, 1120403456))
			{
				bVar0 = false;
			}
			else if (uParam0->f_35.f_491.f_1 == 0 && func_1731(1, uParam1, 1120403456))
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				if (func_204(uParam0->f_10) && !func_1728(uParam0->f_10, 0))
				{
					func_1729(uParam0->f_10, 1, 0);
				}
			}
			else if (func_1728(uParam0->f_10, 1))
			{
				func_1729(uParam0->f_10, 0, 0);
			}
		}
	}
}

void func_1539(var uParam0)
{
	if (!func_1203(uParam0, 1) && !func_204(uParam0->f_9))
	{
		uParam0->f_9 = func_566("BUTCH_DONE", 814057702, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
		func_210(uParam0->f_9, -2019190071, 0, 1);
	}
}

void func_1540(var uParam0)
{
	func_205(&(uParam0->f_8), 1, 1);
	func_205(&(uParam0->f_7), 1, 1);
}

void func_1541(var uParam0)
{
	if (func_204(uParam0->f_1))
	{
		func_205(&(uParam0->f_1), 1, 1);
	}
}

void func_1542(var uParam0)
{
	func_205(&(uParam0->f_10), 1, 1);
}

void func_1543(var uParam0)
{
	func_205(&(uParam0->f_9), 1, 1);
}

int func_1544(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0) || ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return 0;
	}
	if (func_1732(*uParam0, -1725579161, 0))
	{
		return 1;
	}
	return 0;
}

int func_1545(int iParam0)
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

int func_1546(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	return func_1733(iParam0, iParam1, bParam2, bParam3);
}

void func_1547(int iParam0, int iParam1, bool bParam2)
{
	func_1734(iParam0, iParam1, bParam2, 1);
}

void func_1548(var uParam0)
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

void func_1549(int iParam0, var uParam1)
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
		switch (func_141())
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
		func_1735(iParam0, iVar0, uParam1->f_4[iVar0 /*4*/]);
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
	iVar1 = func_1736(Global_40.f_4283.f_440[iParam0 /*63*/]);
	sVar2 = "CASH_STRING";
	if (iVar1 < 0)
	{
		sVar2 = "CASH_STRING_NEG";
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam1->f_53.f_1, MISC::_CREATE_VAR_STRING(2, sVar2, iVar1));
}

void func_1550(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	if (iParam0 == -1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(*uParam1, 0);
		return;
	}
	iVar0 = (func_364(func_1553(iParam0), 0) - 1);
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

void func_1551(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	if (iParam0 == -1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(*uParam1, 0);
		return;
	}
	iVar0 = (func_364(func_1553(iParam0), 0) - 1);
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

int func_1552(var uParam0, var uParam1)
{
	if (func_1737(&(uParam0->f_55), uParam1))
	{
		uParam1->f_4 = 0;
		return 1;
	}
	if (func_1738(&(uParam0->f_102), uParam1))
	{
		uParam1->f_4 = 1;
		return 1;
	}
	if (func_1738(&(uParam0->f_110), uParam1))
	{
		uParam1->f_4 = 2;
		return 1;
	}
	return 0;
}

int func_1553(int iParam0)
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

int func_1554()
{
	return -1802590239;
}

Vector3 func_1555(int iParam0)
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

void func_1556(var uParam0, vector3 vParam1, vector3 vParam4, float fParam7, int iParam8, int iParam9, float fParam10, float fParam11, int iParam12, int iParam13, float fParam14, bool bParam15, float fParam16, float fParam17)
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

bool func_1557(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

Vector3 func_1558(vector3 vParam0, vector3 vParam3, float fParam6)
{
	return FtoV((1f - fParam6)) * vParam0 + Vector(fParam6, fParam6, fParam6) * vParam3;
}

int func_1559(int iParam0, var uParam1, struct<8> Param2, var uParam10)
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
					if (!func_1739(&(((*uParam10)[uParam1->f_3 /*118*/])->f_102)))
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
					iVar0 = func_1740(&(((*uParam10)[uParam1->f_3 /*118*/])->f_55));
					if (iVar0 == -1)
					{
						return 0;
					}
					func_1548((*uParam10)[uParam1->f_3 /*118*/]);
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
					if (!func_1739(&(((*uParam10)[uParam1->f_3 /*118*/])->f_110)))
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
					iVar0 = func_1741(&(((*uParam10)[uParam1->f_3 /*118*/])->f_55));
					if (iVar0 == -1)
					{
						return 0;
					}
					func_1548((*uParam10)[uParam1->f_3 /*118*/]);
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
					if (Param2.f_3 != -1 && func_1739(&(((*uParam10)[0 /*118*/])->f_110)))
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
					else if (Param2.f_2 != -1 && func_1739(&(((*uParam10)[0 /*118*/])->f_102)))
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
					if (Param2.f_2 != -1 && func_1739(&(((*uParam10)[0 /*118*/])->f_102)))
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
					else if (Param2.f_3 != -1 && func_1739(&(((*uParam10)[0 /*118*/])->f_110)))
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
						iVar0 = func_1740(&(((*uParam10)[0 /*118*/])->f_55));
						if (iVar0 != -1)
						{
							func_1548((*uParam10)[1 /*118*/]);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL((((*uParam10)[0 /*118*/])->f_55.f_5[iVar0 /*6*/])->f_5, 1);
							uParam1->f_1 = Param2.f_1;
							uParam1->f_3 = 0;
							uParam1->f_4 = 0;
							uParam1->f_5 = 1;
							uParam1->f_6 = iVar0;
							return 1;
						}
						iVar0 = func_1741(&(((*uParam10)[0 /*118*/])->f_55));
						if (iVar0 != -1)
						{
							func_1548((*uParam10)[1 /*118*/]);
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
						iVar0 = func_1741(&(((*uParam10)[0 /*118*/])->f_55));
						if (iVar0 != -1)
						{
							func_1548((*uParam10)[1 /*118*/]);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL((((*uParam10)[0 /*118*/])->f_55.f_30[iVar0 /*4*/])->f_3, 1);
							uParam1->f_1 = Param2.f_1;
							uParam1->f_3 = 0;
							uParam1->f_4 = 0;
							uParam1->f_5 = 0;
							uParam1->f_6 = iVar0;
							return 1;
						}
						iVar0 = func_1740(&(((*uParam10)[0 /*118*/])->f_55));
						if (iVar0 != -1)
						{
							func_1548((*uParam10)[1 /*118*/]);
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
					if (Param2.f_7 != -1 && func_1739(&(((*uParam10)[1 /*118*/])->f_110)))
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
					else if (Param2.f_6 != -1 && func_1739(&(((*uParam10)[1 /*118*/])->f_102)))
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
					if (Param2.f_6 != -1 && func_1739(&(((*uParam10)[1 /*118*/])->f_102)))
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
					else if (Param2.f_7 != -1 && func_1739(&(((*uParam10)[1 /*118*/])->f_110)))
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
						iVar0 = func_1740(&(((*uParam10)[1 /*118*/])->f_55));
						if (iVar0 != -1)
						{
							func_1548((*uParam10)[0 /*118*/]);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL((((*uParam10)[1 /*118*/])->f_55.f_5[iVar0 /*6*/])->f_5, 1);
							uParam1->f_1 = Param2.f_5;
							uParam1->f_3 = 1;
							uParam1->f_4 = 0;
							uParam1->f_5 = 1;
							uParam1->f_6 = iVar0;
							return 1;
						}
						iVar0 = func_1741(&(((*uParam10)[1 /*118*/])->f_55));
						if (iVar0 != -1)
						{
							func_1548((*uParam10)[0 /*118*/]);
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
						iVar0 = func_1741(&(((*uParam10)[1 /*118*/])->f_55));
						if (iVar0 != -1)
						{
							func_1548((*uParam10)[0 /*118*/]);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL((((*uParam10)[1 /*118*/])->f_55.f_30[iVar0 /*4*/])->f_3, 1);
							uParam1->f_1 = Param2.f_5;
							uParam1->f_3 = 1;
							uParam1->f_4 = 0;
							uParam1->f_5 = 0;
							uParam1->f_6 = iVar0;
							return 1;
						}
						iVar0 = func_1740(&(((*uParam10)[1 /*118*/])->f_55));
						if (iVar0 != -1)
						{
							func_1548((*uParam10)[0 /*118*/]);
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

void func_1560(int iParam0)
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

void func_1561(int* iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	var uVar5;

	if (func_364(iParam2, 0) < func_1742(iParam2))
	{
		iVar0 = func_1743(iParam0, iParam2);
		if (func_149() < iVar0)
		{
			iVar1 = (iVar0 - func_149());
			if (func_1744(1) >= iVar1)
			{
				func_1745(iVar1, 0, 0, 1, 1);
				func_1746(iVar1);
			}
		}
		if (func_149() >= iVar0)
		{
			*bParam4 = 1;
			if (iParam1 == 3)
			{
				if (func_364(10, 0) == 1)
				{
					func_1207(64);
				}
			}
			func_1747(iParam1, 0, iVar0);
			iVar2 = (func_364(iParam2, 0) + iParam3);
			if (iParam2 == 10)
			{
				if (iVar2 >= 3)
				{
					iVar3 = func_907(func_141());
					if (!func_130(iVar3, 64))
					{
						func_163(iVar3, 64);
						func_163(iVar3, 262144);
					}
				}
			}
			func_1748(iParam2, iVar2);
			func_5();
			func_140(134217728);
			if (iParam1 == 5)
			{
				func_1749(&(Global_1357549->f_1492));
			}
			if (iParam1 == 2)
			{
				if (iVar2 >= 3 && !func_1088(joaat("weapon_thrown_throwing_knives")))
				{
					func_266(joaat("weapon_thrown_throwing_knives"));
				}
				if (iVar2 >= 4 && !func_1088(joaat("weapon_thrown_molotov")))
				{
					func_266(joaat("weapon_thrown_molotov"));
				}
			}
			func_205(&(iParam0->f_7), 1, 1);
			func_205(&(iParam0->f_8), 1, 1);
			func_205(&(iParam0->f_35.f_1), 1, 1);
			func_205(&(iParam0->f_10), 1, 1);
			func_205(&(iParam0->f_9), 1, 1);
			func_1179(&(iParam0->f_35), 0);
			func_175(&(iParam0->f_810), 0);
			sVar4 = func_1750(iParam2, iVar2);
			if (MISC::IS_STRING_NULL_OR_EMPTY(sVar4) == 0)
			{
				func_299(sVar4, 14500, 0, 0, 0, 1);
			}
			func_1183(iParam0, 14);
			uVar5 = func_1751(func_141());
			TELEMETRY::_0x217F47761376E16E(uVar5, iParam1, iVar2, iVar0, 0);
		}
		else
		{
			func_299("CAMP_UPG_BROKE", 9000, 0, 0, 0, 1);
		}
	}
}

void func_1562(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 4)
	{
		return;
	}
	Global_40.f_4283.f_415[iParam0] = 0;
}

void func_1563(int* iParam0, int iParam1, int iParam2, bool bParam3)
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
	iVar0 = func_1752(iParam0, iParam2);
	if (func_149() < iVar0)
	{
		iVar1 = (iVar0 - func_149());
		if (func_1744(1) >= iVar1)
		{
			func_1745(iVar1, 0, 0, 1, 1);
			func_1746(iVar1);
		}
	}
	if (func_149() >= iVar0)
	{
		*bParam3 = 1;
		func_1729(iParam0->f_10, 0, 1);
		func_1562(func_1753(iParam1));
		func_1562(3);
		func_1747(iParam1, 1, iVar0);
		uVar2 = func_1751(func_141());
		TELEMETRY::_0x217F47761376E16E(uVar2, iParam1, func_364(iParam2, 0), iVar0, 1);
	}
	else
	{
		func_299("CAMP_UPG_BROKE", 9000, 0, 0, 0, 1);
	}
}

void func_1564()
{
	AUDIO::PLAY_SOUND_FRONTEND("PURCHASE", "Ledger_Sounds", true, 0);
}

void func_1565()
{
	AUDIO::PLAY_SOUND_FRONTEND("UNAFFORDABLE", "Ledger_Sounds", true, 0);
}

int func_1566()
{
	if (func_141() == 8)
	{
		return 4;
	}
	return 17;
}

int func_1567(int iParam0)
{
	func_984(iParam0, 0, 0);
	if (func_1047(iParam0))
	{
		return (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) == 2 || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) == 1);
	}
	return 0;
}

void func_1568(int iParam0, int iParam1)
{
	func_985(iParam0, 0, 0, 0, 1, 0, 0, 0);
}

bool func_1569(vector3 vParam0, int iParam3)
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

int func_1570(int iParam0, var uParam1)
{
	int iVar0;
	struct<10> Var1;
	struct<4> Var15;

	if (!func_1754(iParam0))
	{
		return 0;
	}
	iVar0 = func_1571(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1.f_9 = -1591664384;
	Var15 = { func_885(0) };
	if (!func_886(Var15, iVar0, &Var1, 0, 0))
	{
		return 0;
	}
	if (!func_887(&Var1, uParam1))
	{
		return 0;
	}
	return 1;
}

int func_1571(int iParam0)
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

int func_1572(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10)
{
	struct<12> Var0;
	struct<4> Var14;

	if (!func_673(bParam10))
	{
		return func_1755(Param0, Param4, iParam8, 1, bParam9, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0) || !INVENTORY::_0xB881CA836CC4B6D4(&Param4))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_1410(Param0, &Var0, 0, 0))
	{
		return 0;
	}
	if (func_1756(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return 1;
	}
	if (!INVENTORY::_0x780C5B9AE2819807(Var0.f_4, iParam8))
	{
		return 0;
	}
	if (!INVENTORY::_0xDCCAA7C3BFD88862(func_491(0), &Param0, &Param4, iParam8, Var0.f_11, &Var14))
	{
		return 0;
	}
	if (bParam9)
	{
		if (!func_1757(Var14, 1))
		{
		}
	}
	return 1;
}

int func_1573(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9)
{
	struct<11> Var0;
	struct<11> Var14;
	int iVar28;

	if (!func_673(bParam9))
	{
		return func_1758(Param0, Param4, iParam8, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0) || !INVENTORY::_0xB881CA836CC4B6D4(&Param4))
	{
		return 0;
	}
	if (func_1756(&Param0, &Param4))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_1410(Param0, &Var0, bParam9, 1) || !func_1410(Param4, &Var14, bParam9, 1))
	{
		return 0;
	}
	if (func_1756(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return 0;
	}
	if (!INVENTORY::_0x780C5B9AE2819807(Var0.f_4, Var14.f_9) || !INVENTORY::_0x780C5B9AE2819807(Var14.f_4, Var0.f_9))
	{
		return 0;
	}
	iVar28 = func_491(0);
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

int func_1574(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (func_1759(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		return 1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseCompanion"))
	{
		return 1;
	}
	return 0;
}

int func_1575(var uParam0)
{
	int iVar0;

	iVar0 = uParam0;
	if (iVar0 >= 0 && iVar0 < 5)
	{
		return 1;
	}
	return 0;
}

int func_1576(int iParam0)
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

bool func_1577()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(99890643);
}

int func_1578(var uParam0, int iParam1, var uParam2)
{
	bool bVar0;

	*uParam0 = 0;
	*iParam1 = 0;
	*uParam2 = 0;
	if (func_659())
	{
		if (func_199())
		{
			bVar0 = false;
			if (!func_488(((*Global_1835011)[15 /*74*/])->f_1, 1) && !func_669(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*uParam0 = func_1760();
				*iParam1 = func_1761();
				*uParam2 = func_1762();
				return 1;
			}
			else
			{
				*uParam0 = func_1763();
				*iParam1 = func_1764();
				*uParam2 = func_1765();
				return 1;
			}
		}
		else if (func_142())
		{
			if (!func_488(((*Global_1835011)[60 /*74*/])->f_1, 1))
			{
				*uParam0 = func_1766();
				*iParam1 = func_1767();
				*uParam2 = func_1768();
				return 1;
			}
			else
			{
				*uParam0 = func_1769();
				*iParam1 = func_1770();
				*uParam2 = func_1771();
				return 1;
			}
		}
	}
	else if (func_199())
	{
		*uParam0 = func_1772();
		*iParam1 = func_1773();
		*uParam2 = func_1774();
		return 1;
	}
	else if (func_142())
	{
		*uParam0 = func_1775();
		*iParam1 = func_1776();
		*uParam2 = func_1777();
		return 1;
	}
	return 0;
}

int func_1579(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<4> Var29;

	Var0.f_9 = -1591664384;
	if (!func_1570(iParam0, &Var0))
	{
		return 0;
	}
	Var29 = { func_1021(iParam1, Var0, 1415981582, 0) };
	return func_1757(Var29, 1);
}

int func_1580(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<4> Var29;

	Var0.f_9 = -1591664384;
	if (!func_1570(iParam0, &Var0))
	{
		return 0;
	}
	Var29 = { func_1021(iParam1, Var0, -2119169513, 0) };
	return func_1757(Var29, 1);
}

void func_1581(var uParam0)
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

int func_1582(int iParam0, var uParam1)
{
	struct<4> Var0;

	Var0.f_9 = -1591664384;
	if (!func_1570(iParam0, &Var0))
	{
		return 0;
	}
	*uParam1 = func_1778(Var0, 1415981582, 0);
	if (!func_646(*uParam1, 0))
	{
		return 0;
	}
	return 1;
}

int func_1583(int iParam0, var uParam1)
{
	struct<4> Var0;

	Var0.f_9 = -1591664384;
	if (!func_1570(iParam0, &Var0))
	{
		return 0;
	}
	*uParam1 = func_1778(Var0, -2119169513, 0);
	if (!func_646(*uParam1, 0))
	{
		return 0;
	}
	return 1;
}

int func_1584(int iParam0, var uParam1)
{
	struct<4> Var0;

	if (!func_1779(856287005, iParam0))
	{
		return 0;
	}
	Var0 = { func_1780() };
	*uParam1 = func_1778(Var0, iParam0, 0);
	if (!func_646(*uParam1, 0))
	{
		return 0;
	}
	return 1;
}

void func_1585(int iParam0)
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

void func_1586(int iParam0, var uParam1)
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
	func_1781(iParam0, *uParam1);
	func_1781(iParam0, uParam1->f_1);
}

void func_1587(int iParam0, var uParam1)
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
	func_1781(iParam0, *uParam1);
	func_1781(iParam0, uParam1->f_1);
	func_1781(iParam0, uParam1->f_2);
	func_1781(iParam0, uParam1->f_3);
	func_1781(iParam0, uParam1->f_4);
	func_1781(iParam0, uParam1->f_5);
}

int func_1588(int iParam0, int iParam1, bool bParam2)
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

bool func_1589(int iParam0, int iParam1)
{
	iParam0 = func_794(iParam0);
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

void func_1590(var uParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_0x9CB1A1623062F402(*uParam0, func_1783(func_1782(255), 109029619));
	}
	else if (func_199())
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_142();
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

void func_1591(var uParam0, bool bParam1)
{
	char* sVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_0x9CB1A1623062F402(*uParam0, func_1783(func_1782(255), 109029619));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_199())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_142())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (MISC::COMPARE_STRINGS(sVar0, "", false, -1) != 0)
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, sVar0);
		}
	}
}

int func_1592(int iParam0)
{
	iParam0 = func_794(iParam0);
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

float func_1593(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

float func_1594(int iParam0)
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

	iParam0 = func_794(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_795(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return -1f;
	}
	iVar1 = func_311(iParam0);
	iVar2 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	fVar3 = TASK::_0xEB67D4E056C85A81(iVar1);
	fVar4 = TASK::_0x78D8C1D4EB80C588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_311(iParam0) + 1;
	fVar6 = func_805(iParam0);
	fVar7 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar1));
	fVar8 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	uVar12 = func_1784(fVar3, fVar4, fVar11);
	return uVar12;
}

void func_1595(int iParam0)
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

void func_1596(int iParam0)
{
	MAP::_0xB059D7BD3D78C16F(iParam0, 673950256);
	MAP::_0xB059D7BD3D78C16F(iParam0, 561559387);
	MAP::_0xB059D7BD3D78C16F(iParam0, -201249929);
}

int func_1597(int iParam0)
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

void func_1598(int iParam0, var uParam1)
{
	iParam0 = func_794(iParam0);
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

void func_1599(int iParam0, int iParam1)
{
	iParam0 = func_794(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_9 = iParam1;
}

void func_1600(int iParam0, var uParam1)
{
	iParam0 = func_794(iParam0);
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

int func_1601()
{
	return Global_40.f_1095.f_3135;
}

void func_1602(int iParam0)
{
	Global_40.f_1095.f_3135 = iParam0;
}

struct<4> func_1603(int iParam0)
{
	char cVar0[32];

	StringCopy(&cVar0, "TOAST_RPG_LEVEL_", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	StringConCat(&cVar0, "_", 32);
	StringIntConCat(&cVar0, 0, 32);
	return cVar0;
}

var func_1604(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_1605(int iParam0, bool bParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!MISC::IS_BIT_SET(Global_1934765->f_301, 0))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1934765->f_301, 1))
	{
		return 0;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	if (iParam0 == 0)
	{
		MISC::_0x243CEDE8F916B994();
		return 0;
	}
	iVar0 = func_1785(iParam0, 1);
	iVar1 = 0;
	while (iVar1 < 24)
	{
		iVar2 = func_1786(iVar1, 1);
		if (iVar2 == 0 || iVar2 == -1439599467)
		{
		}
		else if (MISC::IS_BIT_SET(&(Global_1934765->f_302[iVar0]), iVar1))
		{
			MISC::_0xD3F943B88F55376A(iVar2);
		}
		else
		{
			MISC::_0x2916B30DC6C41179(iVar2);
		}
		iVar1++;
	}
	return func_1787(iParam0, bParam1, fParam2);
}

int func_1606(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		case 1:
			return 5;
		case 2:
			return 4;
		case 3:
			return 3;
		case 4:
			return 2;
		case 5:
			return 1;
		default:
			break;
	}
	return -1;
}

bool func_1607()
{
	if (func_56() != -1)
	{
		return false;
	}
	return func_830(1) > 0;
}

void func_1608(int iParam0)
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

void func_1609(int iParam0, int iParam1, float fParam2)
{
	if (iParam1 == -1)
	{
		return;
	}
	if (Global_1934765->f_337 >= 6)
	{
		return;
	}
	Global_1934765->f_318[Global_1934765->f_337 /*3*/] = iParam0;
	(Global_1934765->f_318[Global_1934765->f_337 /*3*/])->f_1 = iParam1;
	(Global_1934765->f_318[Global_1934765->f_337 /*3*/])->f_2 = fParam2;
	Global_1934765->f_337++;
}

int func_1610()
{
	if ((SCRIPTS::IS_THREAD_ACTIVE(((*Global_1347702)[134 /*49*/])->f_42, false) && !func_928(((*Global_1347702)[134 /*49*/])->f_15)) && !func_961(((*Global_1347702)[134 /*49*/])->f_13, 4))
	{
		return 1;
	}
	{
		return 1;
	}
	return 0;