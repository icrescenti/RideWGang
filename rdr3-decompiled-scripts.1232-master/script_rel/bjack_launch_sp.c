#region Local Var
	int iLocal_0 = 0;
	struct<301> Local_1 = { 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_302 = -1;
	var uLocal_303 = 0;
	var uLocal_304 = -1;
	var uLocal_305 = 0;
	struct<2889> Local_306 = { 0, -1, -1, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, -1, 92, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, -1, 92, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, -1, 92, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, -1, 92, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, -1, 92, -1, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 18, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 1082130432, 0, 0 } ;
	var uLocal_3195 = 0;
	var uLocal_3196 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = -1;
	var uScriptParam_2 = -1;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = -1;
	var uScriptParam_8 = -1;
	var uScriptParam_9 = 0;
#endregion

void __EntryFunction__()
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(546))
	{
		func_1(Local_306.f_2);
		if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 32)
		{
			func_2(0);
		}
		else
		{
			func_3(&Local_306, 0, 0);
			func_2(1);
		}
	}
	func_4(&Local_306, &uScriptParam_0);
	while (Local_306.f_2888 == 0)
	{
		if (func_5(&Local_306))
		{
			func_2(0);
		}
		BUILTIN::WAIT(0);
	}
	func_2(0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(int iParam0)
{
	int iVar0;

	if (func_6() != -1)
	{
		return;
	}
	if (!func_7(iParam0, &iVar0))
	{
		return;
	}
	if ((Global_1392915->f_121[iVar0 /*20*/])->f_15 == 1)
	{
	}
	(Global_1392915->f_121[iVar0 /*20*/])->f_15 = 0;
}

void func_2(bool bParam0)
{
	func_8(&Local_306, bParam0);
	SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME());
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_3(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_94)
	{
		if (bParam2)
		{
			func_9(uParam0, uParam0->f_94[iVar0 /*29*/], 0);
		}
		else
		{
			func_10(uParam0, uParam0->f_94[iVar0 /*29*/], 0, 1, 0, 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_2353)
	{
		func_11(uParam0->f_2353[iVar0 /*29*/]);
		iVar0++;
	}
	if (bParam1)
	{
		func_12(uParam0);
	}
	else
	{
		func_13(uParam0, 0);
	}
}

void func_4(var uParam0, var uParam1)
{
	int iVar0;
	char cVar1[64];

	*uParam0 = { *uParam1 };
	if (func_6() == -1)
	{
		func_1(uParam0->f_2);
	}
	StringCopy(&cVar1, func_14(uParam1->f_1), 64);
	StringConCat(&cVar1, "_BlkVol", 64);
	uParam0->f_20 = VOLUME::_0x10157BC3247FF3BA(uParam1->f_3, 0f, 0f, 0f, 1.5f, 1.5f, 1.5f, &cVar1);
	StringConCat(&cVar1, "_AmbBlockVol", 64);
	uParam0->f_19 = VOLUME::_0x10157BC3247FF3BA(uParam1->f_3, 0f, 0f, 0f, 2.5f, 2.5f, 2.5f, &cVar1);
	func_15(uParam1->f_3, 1.5f, 0);
	func_16(uParam1->f_3, 2f, 0);
	uParam0->f_22 = PED::_0x4C39C95AE5DB1329(uParam0->f_20, 0, 15);
	POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_20, 10208, 0, 0, -1, -1, 0);
	POPULATION::_0xB56D41A694E42E86(uParam0->f_19, 266208, 0, 0, -1, -1, 12);
	if (func_17(uParam0->f_2))
	{
		uParam0->f_21 = VOLUME::_0x0EB78C2B156635B1(-432403087, uParam1->f_3, 0f, 0f, 0f, 4f, 4f, 4f);
		VOLUME::_0xBE551C2CC421185D(uParam0->f_21, 1);
		VOLUME::_0x5B23DFF8E0948BB2(uParam0->f_21, 0);
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		uParam0->f_84[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 18)
	{
		func_18(uParam0->f_2353[iVar0 /*29*/], iVar0);
		iVar0++;
	}
	func_19(uParam0);
	uParam0->f_92 = func_20(uParam0);
	PED::_0xED9582B3DA8F02B4(uParam0->f_92);
	func_21(uParam0, 0);
}

bool func_5(var uParam0)
{
	int iVar0;
	bool bVar1;

	uParam0->f_15++;
	uParam0->f_2889 = func_22(uParam0->f_8);
	if (uParam0->f_1 == 2)
	{
		bVar1 = (uParam0->f_2889 || func_23(uParam0->f_1));
	}
	else
	{
		bVar1 = uParam0->f_2889;
	}
	uParam0->f_79 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_3, false);
	uParam0->f_80 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_3, true);
	uParam0->f_2890 = 0;
	uParam0->f_2879 = 0;
	uParam0->f_2880 = (uParam0->f_16 && INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) == uParam0->f_18);
	uParam0->f_2881 = (func_24(uParam0) || uParam0->f_2880);
	uParam0->f_2878 = CAM::IS_SPHERE_VISIBLE(uParam0->f_3, 2f);
	if (func_17(uParam0->f_2))
	{
		uParam0->f_2879 = uParam0->f_80 < 8f;
	}
	else if (uParam0->f_2880)
	{
		uParam0->f_2879 = uParam0->f_80 < 5f;
	}
	if (func_17(uParam0->f_2))
	{
		uParam0->f_2879 = uParam0->f_79 < 8f;
	}
	else if (uParam0->f_2881)
	{
		uParam0->f_2879 = uParam0->f_79 < 5f;
	}
	uParam0->f_91 = 0;
	if (uParam0->f_10 == 13 && func_25(&(uParam0->f_12)) > 2f)
	{
		func_26(uParam0);
		return func_27(uParam0);
	}
	func_28(uParam0);
	if (uParam0->f_10 >= 3)
	{
		func_29(uParam0);
	}
	uParam0->f_91 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if ((uParam0->f_94[iVar0 /*29*/])->f_1 != 0)
		{
			func_30(uParam0, uParam0->f_94[iVar0 /*29*/]);
		}
		iVar0++;
	}
	func_26(uParam0);
	if (uParam0->f_10 == 7 || uParam0->f_10 == 8)
	{
		if (func_31(uParam0, 0))
		{
			func_32(uParam0->f_1, uParam0->f_3, 1073741824, 0);
			func_1(uParam0->f_2);
			func_21(uParam0, 9);
		}
	}
	if (func_6() == -1)
	{
		if (!func_33(uParam0) || func_34(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			func_1(uParam0->f_2);
		}
		else
		{
			func_35(uParam0->f_2);
		}
	}
	switch (uParam0->f_10)
	{
		case 0:
			if (func_36(uParam0) == 1)
			{
				func_21(uParam0, 1);
			}
			break;
		case 1:
			if (!func_37(uParam0->f_3, 2f))
			{
				func_21(uParam0, 2);
			}
			break;
		case 2:
			if (func_38(uParam0) == 1)
			{
				iVar0 = 0;
				while (iVar0 < 5)
				{
					func_39(uParam0, iVar0);
					iVar0++;
				}
				func_21(uParam0, 3);
			}
			break;
		case 3:
			if (func_40(uParam0) == 1)
			{
				uParam0->f_17 = GRAPHICS::CREATE_TRACKED_POINT();
				if (GRAPHICS::_0xF2FDDCC8C6BAE1B3(uParam0->f_17))
				{
					GRAPHICS::SET_TRACKED_POINT_INFO(uParam0->f_17, uParam0->f_3, 1.5f);
				}
				uParam0->f_2887 = 0f;
				func_21(uParam0, 4);
			}
			break;
		case 4:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				PED::_0x9851DE7AEC10B4E1(uParam0->f_3, 2f, 1, 0);
				func_21(uParam0, 5);
			}
			else if (uParam0->f_91 > 0)
			{
				if (GRAPHICS::_0xF2FDDCC8C6BAE1B3(uParam0->f_17))
				{
					GRAPHICS::DESTROY_TRACKED_POINT(uParam0->f_17);
				}
				uParam0->f_17 = 0;
				func_21(uParam0, 6);
			}
			else if (uParam0->f_2 == 9 && uParam0->f_79 > 70f)
			{
				func_21(uParam0, 5);
			}
			else if (uParam0->f_2 == 30 && uParam0->f_79 > 18f)
			{
				func_21(uParam0, 5);
			}
			else if (uParam0->f_79 > uParam0->f_2886)
			{
				if (GRAPHICS::_0xF2FDDCC8C6BAE1B3(uParam0->f_17))
				{
					if (GRAPHICS::IS_TRACKED_POINT_VISIBLE(uParam0->f_17))
					{
						uParam0->f_2887 = 0f;
					}
				}
				else if (ENTITY::WOULD_ENTITY_BE_OCCLUDED(ENTITY::GET_ENTITY_MODEL(Global_35), uParam0->f_3, true))
				{
					uParam0->f_2887 = 0f;
				}
				uParam0->f_2887 = (uParam0->f_2887 + MISC::GET_FRAME_TIME());
				if (uParam0->f_2887 > 1f)
				{
					func_21(uParam0, 5);
				}
				else if (uParam0->f_16 && INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) != uParam0->f_18)
				{
					func_21(uParam0, 5);
				}
			}
			break;
		case 5:
			iVar0 = 0;
			while (iVar0 < 5)
			{
				func_41(uParam0, iVar0, 0, iVar0);
				iVar0++;
			}
			if (GRAPHICS::_0xF2FDDCC8C6BAE1B3(uParam0->f_17))
			{
				GRAPHICS::DESTROY_TRACKED_POINT(uParam0->f_17);
			}
			uParam0->f_17 = 0;
			func_42(uParam0->f_2);
			func_43(uParam0->f_1, 16);
			func_44(uParam0->f_1, 4194304);
			func_21(uParam0, 6);
			break;
		case 6:
			func_45(uParam0->f_2);
			if (uParam0->f_79 < 7f)
			{
				func_46(uParam0);
				func_21(uParam0, 7);
			}
			else if (uParam0->f_79 < 12f && PED::IS_PED_ON_FOOT(Global_35))
			{
				func_46(uParam0);
				func_21(uParam0, 7);
			}
			break;
		case 7:
			if (func_47(uParam0))
			{
				func_48(uParam0->f_2);
				func_21(uParam0, 8);
			}
			break;
		case 8:
			func_49(uParam0);
			if (bVar1 == 0)
			{
				if (uParam0->f_82 == 0)
				{
					func_21(uParam0, 11);
				}
			}
			break;
		case 10:
			PED::SET_PED_RESET_FLAG(Global_35, 184, true);
			if (!bVar1 || func_50() == 7)
			{
				if (uParam0->f_1 == 2)
				{
					if (func_51(uParam0))
					{
						func_52();
						func_21(uParam0, 8);
					}
				}
				else
				{
					func_53(uParam0);
					if (func_51(uParam0))
					{
						func_52();
						func_21(uParam0, 8);
					}
				}
			}
			break;
		case 11:
			func_21(uParam0, 12);
			break;
		case 12:
			func_13(uParam0, 1);
			func_21(uParam0, 13);
			break;
	}
	func_54(uParam0);
	return func_27(uParam0);
}

int func_6()
{
	return Global_1572887->f_12;
}

bool func_7(int iParam0, var uParam1)
{
	*uParam1 = -1;
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return false;
	}
	*uParam1 = &Global_1899528->f_11[iParam0];
	return *uParam1 != -1;
}

void func_8(var uParam0, bool bParam1)
{
	int iVar0;
	char* sVar1;

	func_55(uParam0);
	func_1(uParam0->f_2);
	if (GRAPHICS::_0xF2FDDCC8C6BAE1B3(uParam0->f_17))
	{
		GRAPHICS::DESTROY_TRACKED_POINT(uParam0->f_17);
	}
	uParam0->f_17 = 0;
	uParam0->f_18 = 0;
	if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_3)))
	{
		INTERIOR::UNPIN_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_3));
	}
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_20))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_22, false);
		POPULATION::_0xA1CFB35069D23C23(uParam0->f_20);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_19))
	{
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_19);
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			func_56(uParam0, (uParam0->f_94[iVar0 /*29*/])->f_11, 0);
			func_9(uParam0, uParam0->f_94[iVar0 /*29*/], 1);
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			func_57(uParam0, uParam0->f_94[iVar0 /*29*/]);
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < 18)
	{
		func_11(uParam0->f_2353[iVar0 /*29*/]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (&uParam0->f_23[iVar0 /*11*/] == 1)
		{
			if (TASK::_0x841475AC96E794D1((uParam0->f_23[iVar0 /*11*/])->f_10))
			{
				TASK::_0x81948DFE4F5A0283((uParam0->f_23[iVar0 /*11*/])->f_10);
			}
		}
		uParam0->f_23[iVar0 /*11*/] = 0;
		(uParam0->f_23[iVar0 /*11*/])->f_10 = 0;
		iVar0++;
	}
	if (!func_22(uParam0->f_8))
	{
		if (uParam0->f_2884)
		{
			sVar1 = func_58(uParam0);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
			{
				AUDIO::_0x531A78D6BF27014B(sVar1);
				uParam0->f_2884 = 0;
			}
		}
	}
	func_12(uParam0);
	PED::_0x7D4E70A67A651C71(uParam0->f_92);
	func_59(uParam0->f_20);
	func_59(uParam0->f_19);
	func_59(uParam0->f_21);
}

void func_9(var uParam0, var uParam1, bool bParam2)
{
	if (*uParam1 == 0)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_11))
	{
		func_60(uParam0, uParam1, 1);
		if (func_61(uParam0->f_2) == uParam1->f_11)
		{
			func_62(uParam0->f_2, 0);
		}
		ANIMSCENE::_0xBC781D24AA11F179(uParam1->f_11);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_11, false);
		PED::SET_PED_CONFIG_FLAG(uParam1->f_11, 26, false);
		PED::_0x949B2F9ED2917F5D(uParam1->f_11, 0);
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(uParam1->f_11, 319488);
		if (bParam2)
		{
			func_63(&(uParam1->f_11), 1, 0, 1);
		}
	}
	if (uParam1->f_12 != -1)
	{
		uParam0->f_84[uParam1->f_12] = -1;
		MISC::CLEAR_BIT(&(uParam0->f_82), uParam1->f_12);
	}
	uParam0->f_81 = (uParam0->f_81 - 1);
	uParam1->f_1 = 0;
	uParam1->f_20 = 0;
	uParam1->f_14 = 0;
	uParam1->f_13 = -1;
	uParam1->f_11 = 0;
	*uParam1 = 0;
}

void func_10(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	if (*uParam1 == 0)
	{
		return;
	}
	if (iParam4 == 0)
	{
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_11))
	{
		if (func_61(uParam0->f_2) == uParam1->f_11)
		{
			func_62(uParam0->f_2, 0);
		}
		PED::SET_PED_CONFIG_FLAG(uParam1->f_11, 26, false);
		PED::_0x949B2F9ED2917F5D(uParam1->f_11, 0);
		ANIMSCENE::_0xBC781D24AA11F179(uParam1->f_11);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_11, false);
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(uParam1->f_11, 319488);
		if (PED::IS_PED_A_PLAYER(uParam1->f_11))
		{
			PED::SET_PED_LEG_IK_MODE(uParam1->f_11, 2);
		}
		else
		{
			PED::SET_PED_LEG_IK_MODE(uParam1->f_11, 1);
		}
		if (iParam2 == 0)
		{
			if (bParam5)
			{
				func_63(&(uParam1->f_11), bParam3, 0, 1);
			}
		}
		else
		{
			uParam0->f_93 = (uParam0->f_93 - 1);
			func_64(&(uParam1->f_11));
		}
	}
	if (uParam1->f_12 != -1)
	{
		uParam0->f_84[uParam1->f_12] = -1;
		MISC::CLEAR_BIT(&(uParam0->f_82), uParam1->f_12);
	}
	uParam0->f_81 = (uParam0->f_81 - 1);
	uParam1->f_1 = 0;
	uParam1->f_20 = 0;
	uParam1->f_14 = 0;
	uParam1->f_13 = -1;
	uParam1->f_11 = 0;
	*uParam1 = 0;
}

void func_11(var uParam0)
{
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_1))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_1);
	}
	func_18(uParam0, uParam0->f_28);
}

void func_12(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 88)
	{
		if (&uParam0->f_240[iVar0 /*24*/] != 0)
		{
			func_65(uParam0, iVar0);
		}
		iVar0++;
	}
}

void func_13(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 88)
	{
		if (&uParam0->f_240[iVar0 /*24*/] != 0)
		{
			func_66(uParam0, iVar0, bParam1);
		}
		iVar0++;
	}
}

char* func_14(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MG_BJACK";
		case 1:
			return "MG_DOMIN";
		case 2:
			return "MG_POKER";
		case 3:
			return "MG_FILLET";
		case 4:
			return "MG_MILKING_COW";
		case 5:
			return "MG_CLEAN_STALLS";
		case 6:
			return "MG_FENCE_BUILDING";
	}
	return "Unknown Minigame";
}

void func_15(vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 1;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

void func_16(vector3 vParam0, float fParam3, int iParam4)
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

int func_17(int iParam0)
{
	switch (iParam0)
	{
		case 6:
		case 9:
		case 11:
		case 17:
		case 20:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_18(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_2 = 0f;
	uParam0->f_1 = -1;
	uParam0->f_3 = 0;
	StringCopy(&(uParam0->f_20), "", 64);
	StringCopy(&(uParam0->f_12), "", 64);
	StringCopy(&(uParam0->f_4), "", 64);
	uParam0->f_28 = iParam1;
}

void func_19(var uParam0)
{
	int iVar0;
	int iVar1;

	func_67(uParam0, -1473436841, 0);
	switch (func_68())
	{
		case 38:
			iLocal_0 = 0;
			break;
		case 8:
			iLocal_0 = 2;
			break;
		case 105:
			iLocal_0 = 3;
			break;
		case 75:
			iLocal_0 = 4;
			break;
		case 5:
			iLocal_0 = 5;
			break;
		case 76:
			iLocal_0 = 7;
			break;
		case 92:
			iLocal_0 = 8;
			break;
		case 115:
			iLocal_0 = 6;
			break;
		default:
			iLocal_0 = 1;
			break;
	}
	func_69(uParam0);
	func_70(uParam0, 4, 0);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_BIT_SET(uParam0->f_83, iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == 0)
	{
		func_70(uParam0, 1, 1);
	}
	func_71(&Local_1);
}

int func_20(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!MISC::IS_BIT_SET(uParam0->f_83, iVar0) && !MISC::IS_BIT_SET(uParam0->f_82, iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_21(var uParam0, int iParam1)
{
	if (uParam0->f_10 != iParam1)
	{
	}
	uParam0->f_10 = iParam1;
	uParam0->f_11 = 0;
	func_72(&(uParam0->f_12));
}

bool func_22(int iParam0)
{
	int iVar0;

	iVar0 = func_73(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_23(int iParam0)
{
	int iVar0;

	iVar0 = func_74(iParam0, 0);
	return SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(iVar0) > 0;
}

int func_24(var uParam0)
{
	if (uParam0->f_2880)
	{
		return 1;
	}
	switch (uParam0->f_2)
	{
		case 2:
			return ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, 2955.036f, 523.2607f, 41.28577f, 2926.294f, 522.7525f, 56.23881f, 18.5f, false, true, 0);
		case 0:
		case 23:
			return ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, -803.2272f, -1319.447f, 42.55078f, -834.1096f, -1319.633f, 50.82779f, 19.75f, false, true, 0);
		case 32:
			return ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, -306.259f, 792.0828f, 116.4818f, -312.7949f, 826.4695f, 126.7013f, 19.75f, false, true, 0);
		case 27:
			return ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, 2644.131f, -1227.63f, 52.23838f, 2622.243f, -1227.719f, 85.54826f, 18f, false, true, 0);
		default:
			break;
	}
	return 0;
}

float func_25(var uParam0)
{
	if (!func_75(uParam0))
	{
		return 0f;
	}
	if (func_76(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_77() - uParam0->f_1);
}

void func_26(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 18)
	{
		if (&uParam0->f_2353[iVar0 /*29*/] == 2)
		{
			func_78(uParam0->f_2353[iVar0 /*29*/], 0);
			Jump @125; //curOff = 43
		}
		else if (&uParam0->f_2353[iVar0 /*29*/] == 5)
		{
			(uParam0->f_2353[iVar0 /*29*/])->f_2 = ANIMSCENE::_0x3FBC3F51BF12DFBF((uParam0->f_2353[iVar0 /*29*/])->f_1);
			Jump @125; //curOff = 88
		}
		else if (&uParam0->f_2353[iVar0 /*29*/] == 3)
		{
			func_79(uParam0, (uParam0->f_2353[iVar0 /*29*/])->f_28, 1);
		}
		iVar0++;
	}
}

int func_27(var uParam0)
{
	int iVar0;
	float fVar1;

	fVar1 = func_80(uParam0->f_1);
	if (uParam0->f_9 != 0f)
	{
		fVar1 = uParam0->f_9;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || Global_1935630->f_22)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			func_1(uParam0->f_2);
			return 1;
		}
		return 0;
	}
	if (Global_1394141->f_1328)
	{
		func_1(uParam0->f_2);
		return 1;
	}
	if (func_81(uParam0->f_1, 262144))
	{
		func_12(uParam0);
		func_3(uParam0, 1, 0);
		return 1;
	}
	if (!func_82(uParam0->f_1))
	{
		func_1(uParam0->f_2);
		return 1;
	}
	if (uParam0->f_7 != -1)
	{
		if (func_83(uParam0->f_7, 4194304))
		{
			func_1(uParam0->f_2);
			return 1;
		}
		if (func_68() != uParam0->f_7)
		{
			func_1(uParam0->f_2);
			return 1;
		}
	}
	if (!func_84(uParam0->f_8) && !func_22(uParam0->f_8))
	{
		func_1(uParam0->f_2);
		return 1;
	}
	if ((uParam0->f_1 == 2 && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(19547436) == 0) || uParam0->f_1 != 2)
	{
		if (uParam0->f_79 > fVar1)
		{
			func_12(uParam0);
			iVar0 = 0;
			while (iVar0 < 5)
			{
				func_9(uParam0, uParam0->f_94[iVar0 /*29*/], 1);
				iVar0++;
			}
			func_1(uParam0->f_2);
			return 1;
		}
	}
	if (!uParam0->f_2889)
	{
		if (func_85())
		{
			if (!func_86(uParam0->f_2))
			{
				if (func_87())
				{
					if (uParam0->f_2 == 0 && SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME() == 1121120602)
					{
						return 0;
					}
					if (uParam0->f_79 < 10f)
					{
						func_3(uParam0, 1, 1);
					}
					return 1;
				}
				else if (func_88(269, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_28(var uParam0)
{
	char* sVar0;

	if ((MISC::GET_FRAME_COUNT() % 25) != 0)
	{
		return;
	}
	if (uParam0->f_79 < 15f)
	{
		if (uParam0->f_2884 == 0)
		{
			sVar0 = func_58(uParam0);
			if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
			{
				return;
			}
			AUDIO::_0xD9130842D7226045(sVar0, 1);
			uParam0->f_2884 = 1;
		}
		return;
	}
	if (uParam0->f_79 > 25f)
	{
		if (uParam0->f_2884)
		{
			sVar0 = func_58(uParam0);
			if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
			{
				return;
			}
			AUDIO::_0x531A78D6BF27014B(sVar0);
			uParam0->f_2884 = 0;
		}
	}
}

void func_29(var uParam0)
{
	int iVar0;
	float fVar1;

	if (uParam0->f_10 == 13)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 88)
	{
		if (&uParam0->f_240[iVar0 /*24*/] == 5 && (uParam0->f_240[iVar0 /*24*/])->f_22 == 0f)
		{
			Jump @988; //curOff = 57
		}
		else if (&uParam0->f_240[iVar0 /*24*/] == 1)
		{
			if (MISC::GET_FRAME_COUNT() > (uParam0->f_240[iVar0 /*24*/])->f_2)
			{
				uParam0->f_240[iVar0 /*24*/] = 2;
			}
			Jump @988; //curOff = 101
		}
		else if (&uParam0->f_240[iVar0 /*24*/] == 2)
		{
			STREAMING::REQUEST_MODEL((uParam0->f_240[iVar0 /*24*/])->f_1, false);
			if (STREAMING::HAS_MODEL_LOADED((uParam0->f_240[iVar0 /*24*/])->f_1))
			{
				if (func_89((uParam0->f_240[iVar0 /*24*/])->f_16))
				{
					(uParam0->f_240[iVar0 /*24*/])->f_16 = { uParam0->f_3 - Vector(0.1f, 0f, 0f) };
				}
				(uParam0->f_240[iVar0 /*24*/])->f_23 = 255f;
				(uParam0->f_240[iVar0 /*24*/])->f_4 = OBJECT::CREATE_OBJECT_NO_OFFSET((uParam0->f_240[iVar0 /*24*/])->f_1, (uParam0->f_240[iVar0 /*24*/])->f_16, false, true, false, false);
				ENTITY::SET_ENTITY_ROTATION((uParam0->f_240[iVar0 /*24*/])->f_4, (uParam0->f_240[iVar0 /*24*/])->f_19, 2, true);
				uParam0->f_240[iVar0 /*24*/] = 5;
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED((uParam0->f_240[iVar0 /*24*/])->f_1);
				if ((uParam0->f_240[iVar0 /*24*/])->f_13)
				{
					ENTITY::SET_ENTITY_VISIBLE((uParam0->f_240[iVar0 /*24*/])->f_4, false);
				}
				if (!DECORATOR::DECOR_EXIST_ON((uParam0->f_240[iVar0 /*24*/])->f_4, "MinigameObject"))
				{
					DECORATOR::DECOR_SET_BOOL((uParam0->f_240[iVar0 /*24*/])->f_4, "MinigameObject", true);
				}
			}
			Jump @988; //curOff = 370
		}
		else if (&uParam0->f_240[iVar0 /*24*/] == 4)
		{
			STREAMING::REQUEST_MODEL((uParam0->f_240[iVar0 /*24*/])->f_1, false);
			if (STREAMING::HAS_MODEL_LOADED((uParam0->f_240[iVar0 /*24*/])->f_1))
			{
				if (ENTITY::DOES_ENTITY_EXIST((uParam0->f_240[iVar0 /*24*/])->f_4))
				{
					(uParam0->f_240[iVar0 /*24*/])->f_16 = { ENTITY::GET_ENTITY_COORDS((uParam0->f_240[iVar0 /*24*/])->f_4, true, false) };
					(uParam0->f_240[iVar0 /*24*/])->f_19 = { ENTITY::GET_ENTITY_ROTATION((uParam0->f_240[iVar0 /*24*/])->f_4, 2) };
					func_90(&((uParam0->f_240[iVar0 /*24*/])->f_4));
				}
				if (func_89((uParam0->f_240[iVar0 /*24*/])->f_16))
				{
					(uParam0->f_240[iVar0 /*24*/])->f_16 = { uParam0->f_3 - Vector(0.1f, 0f, 0f) };
				}
				(uParam0->f_240[iVar0 /*24*/])->f_4 = OBJECT::CREATE_OBJECT_NO_OFFSET((uParam0->f_240[iVar0 /*24*/])->f_1, (uParam0->f_240[iVar0 /*24*/])->f_16, false, true, false, false);
				ENTITY::SET_ENTITY_ROTATION((uParam0->f_240[iVar0 /*24*/])->f_4, (uParam0->f_240[iVar0 /*24*/])->f_19, 2, true);
				uParam0->f_240[iVar0 /*24*/] = 5;
				(uParam0->f_240[iVar0 /*24*/])->f_23 = 255f;
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED((uParam0->f_240[iVar0 /*24*/])->f_1);
				if ((uParam0->f_240[iVar0 /*24*/])->f_13)
				{
					ENTITY::SET_ENTITY_VISIBLE((uParam0->f_240[iVar0 /*24*/])->f_4, false);
				}
				if (!DECORATOR::DECOR_EXIST_ON((uParam0->f_240[iVar0 /*24*/])->f_4, "MinigameObject"))
				{
					DECORATOR::DECOR_SET_BOOL((uParam0->f_240[iVar0 /*24*/])->f_4, "MinigameObject", true);
				}
			}
			Jump @988; //curOff = 725
		}
		else if (&uParam0->f_240[iVar0 /*24*/] == 5 && (uParam0->f_240[iVar0 /*24*/])->f_22 != 0f)
		{
			if (ENTITY::DOES_ENTITY_EXIST((uParam0->f_240[iVar0 /*24*/])->f_4))
			{
				fVar1 = (MISC::GET_FRAME_TIME() / (uParam0->f_240[iVar0 /*24*/])->f_22);
				(uParam0->f_240[iVar0 /*24*/])->f_23 = ((uParam0->f_240[iVar0 /*24*/])->f_23 + (fVar1 * 255f));
				if ((uParam0->f_240[iVar0 /*24*/])->f_23 <= 0f)
				{
					func_65(uParam0, iVar0);
				}
				else if ((uParam0->f_240[iVar0 /*24*/])->f_23 >= 255f)
				{
					(uParam0->f_240[iVar0 /*24*/])->f_23 = 255f;
					ENTITY::RESET_ENTITY_ALPHA((uParam0->f_240[iVar0 /*24*/])->f_4);
					(uParam0->f_240[iVar0 /*24*/])->f_22 = 0f;
				}
				else if ((uParam0->f_240[iVar0 /*24*/])->f_22 < 0f)
				{
					ENTITY::SET_ENTITY_ALPHA((uParam0->f_240[iVar0 /*24*/])->f_4, BUILTIN::FLOOR((uParam0->f_240[iVar0 /*24*/])->f_23), true);
				}
				else
				{
					ENTITY::SET_ENTITY_ALPHA((uParam0->f_240[iVar0 /*24*/])->f_4, BUILTIN::CEIL((uParam0->f_240[iVar0 /*24*/])->f_23), true);
				}
			}
		}
		iVar0++;
	}
}

void func_30(var uParam0, var uParam1)
{
	var uVar0;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;

	uVar0 = 5;
	iVar10 = 0;
	if (uParam1->f_1 == 0)
	{
		return;
	}
	if (uParam1->f_1 > 1)
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam1->f_11))
		{
			func_10(uParam0, uParam1, 0, 1, 0, 1);
			return;
		}
		uParam1->f_16 = ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uParam1->f_11, -1);
		PED::SET_PED_RESET_FLAG(uParam1->f_11, 49, true);
	}
	switch (uParam1->f_1)
	{
		case 1:
			STREAMING::REQUEST_MODEL(uParam1->f_2, false);
			if ((STREAMING::HAS_MODEL_LOADED(uParam1->f_2) && MISC::GET_FRAME_COUNT() > uParam1->f_17) && !uParam0->f_2890)
			{
				uParam1->f_11 = func_91(uParam1->f_2, uParam1->f_7, uParam1->f_10, 0, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				ENTITY::SET_ENTITY_HEADING(uParam1->f_11, uParam1->f_10);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam1->f_2);
				uParam1->f_12 = -1;
				func_92(uParam1->f_11, 0);
				iVar7 = -1;
				if ((uParam0->f_1 == 2 || (uParam0->f_1 == 0 && uParam1->f_13 != 4)) || uParam0->f_1 == 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_11))
					{
						iVar7 = func_94(uParam0->f_1, func_93(uParam0));
						iVar10 = func_95(uParam1->f_11, uParam0->f_1, uParam0->f_7, iVar7);
					}
				}
				func_96(uParam0, &uVar0, &iVar6);
				if ((uParam0->f_1 == 1 || uParam0->f_1 == 0) || uParam0->f_1 == 2)
				{
					if (func_97(uParam1->f_11, uParam0->f_1, iVar10, &uVar0, iVar6, &iVar8))
					{
						AUDIO::SET_AMBIENT_VOICE_NAME(uParam1->f_11, func_98(iVar8));
					}
					else if (func_99(uParam1->f_11, uParam0->f_1, &uVar0, iVar6, &iVar8))
					{
						AUDIO::SET_AMBIENT_VOICE_NAME(uParam1->f_11, func_98(iVar8));
					}
					else
					{
						iVar8 = 92;
					}
				}
				else if (func_99(uParam1->f_11, uParam0->f_1, &uVar0, iVar6, &iVar8))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(uParam1->f_11, func_98(iVar8));
				}
				else
				{
					iVar8 = 92;
				}
				func_100(uParam0, uParam1, uParam1->f_11, uParam1->f_13, uParam1->f_15, 1, iVar7, iVar8);
				if (uParam1->f_15 && uParam1->f_12 != -1)
				{
					if (TASK::_0x841475AC96E794D1((uParam0->f_23[uParam1->f_12 /*11*/])->f_10))
					{
						TASK::_TASK_USE_SCENARIO_POINT(uParam1->f_11, (uParam0->f_23[uParam1->f_12 /*11*/])->f_10, &((uParam0->f_23[uParam1->f_12 /*11*/])->f_2), 0, 0, 1, 0, 0, -1082130432, 0);
					}
				}
				uParam0->f_2890 = 1;
			}
			break;
		case 3:
			func_101(uParam0, uParam1);
			break;
		case 4:
			if (func_102(uParam0, uParam1) == 1)
			{
				uParam1->f_14 = 0;
				func_103(uParam1, 5);
			}
			break;
		case 5:
			uParam0->f_91++;
			if (!PED::IS_PED_INJURED(uParam1->f_11))
			{
				PED::SET_PED_CAN_LEG_IK(uParam1->f_11, false);
			}
			bVar9 = func_104(uParam1);
			if (uParam1->f_14 && !bVar9)
			{
				func_105(uParam0, uParam1, 0);
			}
			else
			{
				func_106(uParam0, uParam1);
			}
			uParam1->f_14 = bVar9;
			break;
		case 6:
			func_107(uParam0, uParam1);
			break;
		case 7:
			if (!PED::IS_PED_USING_ANY_SCENARIO(uParam1->f_11) || TASK::_0x0C3CB2E600C8977D(uParam1->f_11, 0))
			{
				ANIMSCENE::_0xBC781D24AA11F179(uParam1->f_11);
				func_10(uParam0, uParam1, 0, 1, 0, 1);
			}
			break;
	}
}

bool func_31(var uParam0, bool bParam1)
{
	float fVar0;

	fVar0 = 1.5f;
	if (uParam0->f_1 == 2 || uParam0->f_1 == 0)
	{
		fVar0 = 2.5f;
	}
	return func_108(uParam0->f_3, fVar0, bParam1);
}

void func_32(int iParam0, vector3 vParam1, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar4 = 0;
	func_109(&iVar0, vParam1, 0f, 0f, 0f, iParam4, iParam4, iParam4);
	if (!VOLUME::_0x92A78D0BEDB332A3(iVar0))
	{
		return;
	}
	iVar5 = ITEMSET::CREATE_ITEMSET(true);
	if (ITEMSET::IS_ITEMSET_VALID(iVar5))
	{
		iVar2 = ENTITY::_0x886171A12F400B89(iVar0, iVar5, 3);
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			iVar1 = MISC::_0x18013392501CE5DC(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, iVar5));
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (func_110(iParam0, ENTITY::GET_ENTITY_MODEL(iVar1)))
				{
					if (!ENTITY::IS_ENTITY_ATTACHED(iVar1))
					{
						if ((func_6() != -1 && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1)) || func_6() == -1)
						{
							iVar4++;
							if (iParam5 == 1 && ENTITY::IS_ENTITY_UPRIGHT(iVar1, 90f))
							{
								ENTITY::FREEZE_ENTITY_POSITION(iVar1, true);
								ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar1, false);
							}
							else
							{
								ENTITY::FREEZE_ENTITY_POSITION(iVar1, false);
								ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar1, true);
							}
						}
					}
				}
			}
			iVar3++;
		}
		ITEMSET::_0x20A4BF0E09BEE146(iVar5);
		ITEMSET::DESTROY_ITEMSET(iVar5);
	}
	if (iVar4 > 0)
	{
	}
	func_59(iVar0);
}

int func_33(var uParam0)
{
	int iVar0;

	if (uParam0->f_1 == 0)
	{
		return func_111(uParam0, 4);
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_111(uParam0, iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_34(int iParam0, bool bParam1, int iParam2, int iParam3)
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

void func_35(int iParam0)
{
	int iVar0;

	if (func_6() != -1)
	{
		return;
	}
	if (!func_7(iParam0, &iVar0))
	{
		return;
	}
	if ((Global_1392915->f_121[iVar0 /*20*/])->f_15 == 0)
	{
		(Global_1392915->f_121[iVar0 /*20*/])->f_15 = 1;
	}
}

int func_36(var uParam0)
{
	switch (uParam0->f_11)
	{
		case 0:
			if (func_17(uParam0->f_2))
			{
				return 1;
			}
			if (func_113())
			{
				return 0;
			}
			if (!INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_3)))
			{
				return 1;
			}
			uParam0->f_18 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_3);
			INTERIOR::PIN_INTERIOR_IN_MEMORY(uParam0->f_18);
			uParam0->f_16 = 1;
			func_114(uParam0);
			break;
		case 1:
			if (INTERIOR::IS_INTERIOR_READY(uParam0->f_18))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_37(vector3 vParam0, float fParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar1))
	{
		return 0;
	}
	vParam0.f_2 = (vParam0.z + 0.9f);
	func_115(&iVar2, vParam0, 0f, 0f, 0f, fParam3, fParam3, 1.8f);
	iVar3 = ENTITY::_0x886171A12F400B89(iVar2, iVar1, 1);
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		iVar0 = MISC::_0x3FFB15534067DCD4(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar1));
		if (ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			if (PED::_0x79443D56C8DF45EE(iVar0) != Global_35)
			{
				func_59(iVar2);
				ITEMSET::_0x20A4BF0E09BEE146(iVar1);
				ITEMSET::DESTROY_ITEMSET(iVar1);
				return 1;
			}
		}
		iVar4++;
	}
	func_59(iVar2);
	ITEMSET::_0x20A4BF0E09BEE146(iVar1);
	ITEMSET::DESTROY_ITEMSET(iVar1);
	return 0;
}

int func_38(var uParam0)
{
	func_53(uParam0);
	func_32(uParam0->f_1, uParam0->f_3, 3f, 1);
	return 1;
}

void func_39(var uParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;

	iVar9 = func_116(uParam0->f_1, uParam0->f_3, uParam0->f_6, iParam1, 1051931443);
	func_117(uParam0->f_1, uParam0->f_3, uParam0->f_6, iParam1, &vVar0, &fVar6);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar9))
	{
		MISC::SET_BIT(&(uParam0->f_83), iParam1);
		return;
	}
	iVar8 = TASK::_0xF533D68FF970D190(vVar0, (uParam0->f_23[iParam1 /*11*/])->f_1, 0.5f, 0, 0);
	if (TASK::_0x841475AC96E794D1(iVar8))
	{
		(uParam0->f_23[iParam1 /*11*/])->f_10 = iVar8;
		uParam0->f_23[iParam1 /*11*/] = 0;
		vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iVar9, vVar0) };
		fVar7 = (ENTITY::GET_ENTITY_HEADING(iVar9) - fVar6);
		TASK::_0x2056AB38DF06825C(iVar8, vVar3, 0);
		TASK::_0xD3A0DA8F91612C6E(iVar8, fVar7, 0);
		return;
	}
	if (uParam0->f_1 == 2)
	{
		iVar8 = TASK::_0xF533D68FF970D190(vVar0, -2043611403, 0.5f, 0, 0);
		if (TASK::_0x841475AC96E794D1(iVar8))
		{
			(uParam0->f_23[iParam1 /*11*/])->f_10 = iVar8;
			uParam0->f_23[iParam1 /*11*/] = 0;
			vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iVar9, vVar0) };
			fVar7 = (ENTITY::GET_ENTITY_HEADING(iVar9) - fVar6);
			TASK::_0x2056AB38DF06825C(iVar8, vVar3, 0);
			TASK::_0xD3A0DA8F91612C6E(iVar8, fVar7, 0);
			return;
		}
	}
	if (!TASK::_0x841475AC96E794D1((uParam0->f_23[iParam1 /*11*/])->f_10))
	{
		vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iVar9, vVar0) };
		fVar7 = (ENTITY::GET_ENTITY_HEADING(iVar9) - fVar6);
		(uParam0->f_23[iParam1 /*11*/])->f_10 = TASK::CREATE_SCENARIO_POINT_ATTACHED_TO_ENTITY(iVar9, (uParam0->f_23[iParam1 /*11*/])->f_1, vVar3, fVar7, 0, 0, 0);
		uParam0->f_23[iParam1 /*11*/] = 1;
		if (TASK::_0x841475AC96E794D1((uParam0->f_23[iParam1 /*11*/])->f_10))
		{
		}
	}
}

int func_40(var uParam0)
{
	switch (uParam0->f_11)
	{
		case 0:
			func_118(uParam0);
			func_114(uParam0);
			break;
		case 1:
			func_118(uParam0);
			if (!func_119(uParam0))
			{
				return 2;
			}
			func_114(uParam0);
			break;
		case 2:
			if (PED::_0x5C16855277819BBF() < uParam0->f_92)
			{
				return 2;
			}
			func_114(uParam0);
			break;
		case 3:
			return 1;
	}
	return 0;
}

int func_41(var uParam0, int iParam1, int iParam2, int iParam3)
{
	func_10(uParam0, uParam0->f_94[iParam1 /*29*/], 1, 1, 0, 1);
	if (MISC::IS_BIT_SET(uParam0->f_83, iParam1))
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		iParam2 = func_120(uParam0->f_1, uParam0->f_7, -1);
	}
	if (uParam0->f_1 == 0 && iParam1 == 4)
	{
		iParam2 = func_121(uParam0->f_7);
	}
	(uParam0->f_94[iParam1 /*29*/])->f_2 = iParam2;
	func_122(uParam0->f_1, uParam0->f_3, uParam0->f_6, iParam1, 0f, -MISC::GET_RANDOM_FLOAT_IN_RANGE(0.25f, 1.25f), 0f, &((uParam0->f_94[iParam1 /*29*/])->f_7), 0);
	(uParam0->f_94[iParam1 /*29*/])->f_7.f_2 = (uParam0->f_3.f_2 - 0.5f);
	func_123(uParam0->f_1, uParam0->f_6, iParam1, &((uParam0->f_94[iParam1 /*29*/])->f_10));
	(uParam0->f_94[iParam1 /*29*/])->f_13 = iParam1;
	(uParam0->f_94[iParam1 /*29*/])->f_15 = 1;
	(uParam0->f_94[iParam1 /*29*/])->f_12 = iParam1;
	uParam0->f_84[iParam1] = iParam1;
	uParam0->f_93++;
	MISC::SET_BIT(&(uParam0->f_82), iParam1);
	func_103(uParam0->f_94[iParam1 /*29*/], 1);
	if (iParam3 > 0)
	{
		(uParam0->f_94[iParam1 /*29*/])->f_17 = (MISC::GET_FRAME_COUNT() + iParam3);
	}
	return 1;
}

int func_42(int iParam0)
{
	int iVar0;

	if (func_6() != -1)
	{
		return 1;
	}
	if (!func_7(iParam0, &iVar0))
	{
		return 0;
	}
	if (((*Global_1392915)[iVar0 /*12*/])->f_1 == 3 && Global_1900325->f_24 == 0)
	{
		(Global_1392915->f_121[iVar0 /*20*/])->f_15 = 1;
	}
	return (Global_1392915->f_121[iVar0 /*20*/])->f_15;
}

void func_43(int iParam0, int iParam1)
{
	if (func_81(iParam0, iParam1))
	{
	}
	Global_1899528->f_3[iParam0] = (&Global_1899528->f_3[iParam0] - (Global_1899528->f_3[iParam0] && iParam1));
}

void func_44(int iParam0, int iParam1)
{
	if (!func_81(iParam0, iParam1))
	{
	}
	Global_1899528->f_3[iParam0] = (Global_1899528->f_3[iParam0] || iParam1);
}

void func_45(int iParam0)
{
	int iVar0;

	if (func_6() != -1)
	{
		return;
	}
	if (!func_7(iParam0, &iVar0))
	{
		return;
	}
	if ((Global_1392915->f_121[iVar0 /*20*/])->f_16 == 0)
	{
		(Global_1392915->f_121[iVar0 /*20*/])->f_16 = 1;
	}
}

void func_46(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;

	func_124(uParam0, &vVar1, &vVar4, 1);
	func_125(uParam0, 62, 1598471465, vVar1, vVar4, 0, 0);
	func_126(uParam0, &vVar1, &vVar4, 1);
	func_125(uParam0, 61, func_127(61, 0), vVar1, vVar4, 0, 0);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_128(uParam0, iVar0, &vVar1, &vVar4, 1);
		func_125(uParam0, (63 + iVar0), func_129(), vVar1, vVar4, iVar0, 0);
		iVar0++;
	}
}

int func_47(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 88)
	{
		if (&uParam0->f_240[iVar0 /*24*/] != 0 && &uParam0->f_240[iVar0 /*24*/] != 5)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_48(int iParam0)
{
	int iVar0;

	if (func_6() != -1)
	{
		return;
	}
	if (!func_7(iParam0, &iVar0))
	{
		return;
	}
	if ((Global_1392915->f_121[iVar0 /*20*/])->f_16 == 1)
	{
	}
	(Global_1392915->f_121[iVar0 /*20*/])->f_16 = 0;
}

void func_49(var uParam0)
{
	int iVar0;

	if (Local_1 < 9)
	{
		if (func_22(uParam0->f_8))
		{
			func_130(&Local_1, 9);
		}
	}
	if (func_111(uParam0, 4))
	{
		if (func_6() == -1)
		{
			func_62(uParam0->f_2, (uParam0->f_94[4 /*29*/])->f_11);
		}
		else
		{
			func_62(uParam0->f_2, 0);
		}
		if (uParam0->f_2885 == 1)
		{
			func_130(&Local_1, 7);
			uParam0->f_2885 = 0;
		}
	}
	switch (Local_1)
	{
		case 0:
			func_130(&Local_1, 1);
			break;
		case 1:
			if (uParam0->f_2885 == 1)
			{
				return;
			}
			if (!func_111(uParam0, 4))
			{
				return;
			}
			if (func_131(uParam0, 5) <= 1)
			{
				return;
			}
			uParam0->f_2883 = 1;
			func_132(uParam0, (uParam0->f_94[4 /*29*/])->f_11, "MINIGAME_DEALER_PLACE_BET");
			func_130(&Local_1, 2);
			break;
		case 2:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (func_111(uParam0, iVar0))
				{
					func_133(Local_1.f_5[iVar0 /*37*/], 2, MISC::GET_RANDOM_FLOAT_IN_RANGE(1f, 2f), 0);
				}
				iVar0++;
			}
			func_130(&Local_1, 3);
			break;
		case 3:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (func_111(uParam0, iVar0))
				{
					if (!func_134(Local_1.f_5[iVar0 /*37*/]))
					{
						return;
					}
				}
				iVar0++;
			}
			func_130(&Local_1, 4);
			break;
		case 4:
			if (!func_135(&Local_1, uParam0))
			{
				return;
			}
			func_130(&Local_1, 5);
			break;
		case 5:
			func_136(&Local_1, uParam0);
			break;
		case 6:
			func_137(&Local_1, uParam0);
			break;
		case 7:
			func_138(&Local_1, uParam0);
			break;
		case 9:
			func_139(&Local_1, uParam0);
			break;
	}
}

int func_50()
{
	return Global_1899528->f_61;
}

int func_51(var uParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar5 = func_140(uParam0->f_1, iVar0, &uVar1, &uVar2, &iVar3, &iVar4);
		if (!ENTITY::IS_ENTITY_DEAD(iVar5))
		{
			(Local_1.f_5[iVar0 /*37*/])->f_10 = uVar1;
			func_70(uParam0, iVar0, 0);
			(Local_1.f_5[iVar0 /*37*/])->f_1 = uVar2;
			func_100(uParam0, uParam0->f_94[iVar0 /*29*/], iVar5, iVar0, 1, 1, iVar3, iVar4);
		}
		iVar0++;
	}
	func_46(uParam0);
	func_141();
	return 1;
}

void func_52()
{
	func_141();
	func_142();
	func_143(-1);
	func_144(-1);
}

bool func_53(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	int iVar6;

	bVar2 = false;
	if (func_145() == uParam0->f_1)
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (!func_146(uParam0->f_94[iVar0 /*29*/]))
			{
				iVar1 = func_140(uParam0->f_1, iVar0, &uVar3, &uVar4, &iVar5, &iVar6);
				if (!ENTITY::IS_ENTITY_DEAD(iVar1) && !DECORATOR::DECOR_EXIST_ON(iVar1, "DontGrabThisPedForMinigame"))
				{
					if (func_100(uParam0, uParam0->f_94[iVar0 /*29*/], iVar1, iVar0, 1, 0, iVar5, iVar6))
					{
						func_70(uParam0, iVar0, 0);
						bVar2 = true;
					}
				}
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!func_146(uParam0->f_94[iVar0 /*29*/]))
		{
			if (func_147(uParam0->f_1, uParam0->f_3, uParam0->f_6, iVar0, &iVar1, 1, 0))
			{
				if (!DECORATOR::DECOR_EXIST_ON(iVar1, "DontGrabThisPedForMinigame"))
				{
					if (func_100(uParam0, uParam0->f_94[iVar0 /*29*/], iVar1, iVar0, 1, 0, -1, 92))
					{
						func_70(uParam0, iVar0, 0);
						bVar2 = true;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar2)
	{
		if (uParam0->f_1 == 0)
		{
			if (func_148(uParam0, 4))
			{
				func_35(uParam0->f_2);
			}
			else
			{
				func_1(uParam0->f_2);
			}
		}
		else
		{
			func_35(uParam0->f_2);
		}
	}
	return bVar2;
}

void func_54(var uParam0)
{
}

void func_55(var uParam0)
{
}

void func_56(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 18)
	{
		if (func_149(uParam0, iVar0))
		{
			if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iParam1, (uParam0->f_2353[iVar0 /*29*/])->f_1))
			{
				func_79(uParam0, iVar0, bParam2);
			}
		}
		iVar0++;
	}
}

void func_57(var uParam0, var uParam1)
{
	if (*uParam1 == 1)
	{
		func_10(uParam0, uParam1, 0, 1, 0, 1);
	}
}

char* func_58(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 0:
		case 2:
			return "MGBLK_Sounds";
		case 1:
			return "MGDOM_Sounds";
		default:
			break;
	}
	return "";
}

void func_59(int iParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		VOLUME::_0x43F867EF5C463A53(iParam0);
	}
}

void func_60(var uParam0, var uParam1, int iParam2)
{
	if (uParam1->f_20 == -1)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_21)))
	{
		return;
	}
	if (iParam2 == 1 && ANIMSCENE::_0x25557E324489393C((uParam0->f_2353[uParam1->f_20 /*29*/])->f_1))
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY((uParam0->f_2353[uParam1->f_20 /*29*/])->f_1, &(uParam1->f_21), uParam1->f_11);
	}
	ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_11, false);
	MISC::CLEAR_BIT(&((uParam0->f_2353[uParam1->f_20 /*29*/])->f_3), uParam1->f_13);
	if ((uParam0->f_2353[uParam1->f_20 /*29*/])->f_3 == 0)
	{
		func_150(uParam0->f_2353[uParam1->f_20 /*29*/], 3);
	}
	StringCopy(&(uParam1->f_21), "", 64);
	uParam1->f_20 = -1;
}

int func_61(int iParam0)
{
	int iVar0;

	if (func_6() != -1)
	{
		return 0;
	}
	iVar0 = func_151(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	return (Global_1392915->f_121[iVar0 /*20*/])->f_6;
}

void func_62(int iParam0, int iParam1)
{
	int iVar0;

	if (func_6() != -1)
	{
		return;
	}
	iVar0 = func_151(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	(Global_1392915->f_121[iVar0 /*20*/])->f_6 = iParam1;
}

void func_63(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
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

void func_64(int* iParam0)
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

void func_65(var uParam0, int iParam1)
{
	uParam0->f_240[iParam1 /*24*/] = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&((uParam0->f_240[iParam1 /*24*/])->f_5)) && (uParam0->f_240[iParam1 /*24*/])->f_3 != -1)
	{
		func_152(uParam0, iParam1, 0);
	}
	(uParam0->f_240[iParam1 /*24*/])->f_23 = 0f;
	(uParam0->f_240[iParam1 /*24*/])->f_22 = 0f;
	StringCopy(&((uParam0->f_240[iParam1 /*24*/])->f_5), "", 64);
	(uParam0->f_240[iParam1 /*24*/])->f_3 = -1;
	(uParam0->f_240[iParam1 /*24*/])->f_14 = 0;
	func_90(&((uParam0->f_240[iParam1 /*24*/])->f_4));
	(uParam0->f_240[iParam1 /*24*/])->f_4 = 0;
}

void func_66(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_240[iParam1 /*24*/] = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&((uParam0->f_240[iParam1 /*24*/])->f_5)) && (uParam0->f_240[iParam1 /*24*/])->f_3 != -1)
	{
		func_152(uParam0, iParam1, bParam2);
	}
	if (bParam2)
	{
		func_153(uParam0, iParam1);
	}
	StringCopy(&((uParam0->f_240[iParam1 /*24*/])->f_5), "", 64);
	(uParam0->f_240[iParam1 /*24*/])->f_3 = -1;
	(uParam0->f_240[iParam1 /*24*/])->f_23 = 0f;
	if ((uParam0->f_240[iParam1 /*24*/])->f_15)
	{
		if (ENTITY::DOES_ENTITY_EXIST((uParam0->f_240[iParam1 /*24*/])->f_4))
		{
			ANIMSCENE::_0xC1193521E3B9FADD((uParam0->f_240[iParam1 /*24*/])->f_4, 0);
		}
	}
	(uParam0->f_240[iParam1 /*24*/])->f_15 = 0;
	(uParam0->f_240[iParam1 /*24*/])->f_14 = 0;
	func_154(&((uParam0->f_240[iParam1 /*24*/])->f_4), 1, 1);
	(uParam0->f_240[iParam1 /*24*/])->f_4 = 0;
}

void func_67(var uParam0, int iParam1, char* sParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_155(uParam0, iVar0, iParam1, sParam2);
		iVar0++;
	}
}

int func_68()
{
	return Global_1894899->f_2;
}

void func_69(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = 0;
	iVar1 = 0;
	iVar4 = 5;
	if (uParam0->f_1 == 0)
	{
		iVar4 = (iVar4 - 1);
	}
	if (uParam0->f_1 == 2)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(3, iVar4);
	}
	else
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, iVar4);
	}
	if ((uParam0->f_1 == 2 && uParam0->f_7 == 75) || (uParam0->f_1 == 1 && uParam0->f_7 == 38))
	{
		MISC::SET_BIT(&iVar0, 0);
		iVar1 = (iVar1 - 1);
	}
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
		while (MISC::IS_BIT_SET(iVar0, iVar3))
		{
			iVar3 = (iVar3 + 1 % iVar4);
		}
		MISC::SET_BIT(&iVar0, iVar3);
		iVar2++;
	}
	uParam0->f_83 = 0;
	iVar2 = 0;
	while (iVar2 < iVar4)
	{
		if (!MISC::IS_BIT_SET(iVar0, iVar2))
		{
			MISC::SET_BIT(&(uParam0->f_83), iVar2);
		}
		iVar2++;
	}
}

void func_70(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		MISC::SET_BIT(&(uParam0->f_83), iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(uParam0->f_83), iParam1);
	}
}

void func_71(int iParam0)
{
	int iVar0;

	func_130(iParam0, 0);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		(iParam0->f_5[iVar0 /*37*/])->f_7 = iVar0;
		(iParam0->f_5[iVar0 /*37*/])->f_8 = 0;
		(iParam0->f_5[iVar0 /*37*/])->f_9 = 0;
		func_133(iParam0->f_5[iVar0 /*37*/], 1, 0, 0);
		iVar0++;
	}
}

void func_72(var uParam0)
{
	func_156(uParam0, 0f);
}

int func_73(int iParam0)
{
	if (!func_157(iParam0))
	{
		return -1;
	}
	return func_158(iParam0);
}

int func_74(int iParam0, int iParam1)
{
	if (iParam1 == 1 && iParam0 == 2)
	{
		return 19547436;
	}
	switch (iParam0)
	{
		case 2:
			return 19547436;
		case 0:
			return 648454729;
		case 1:
			return 639632500;
		case 3:
			return 504839342;
		case 4:
			return 1221273613;
		case 5:
			return 1966390672;
		case 6:
			return -761450110;
		default:
			break;
	}
	return 0;
}

bool func_75(var uParam0)
{
	return func_159(*uParam0, 1);
}

bool func_76(var uParam0)
{
	return func_159(*uParam0, 2);
}

float func_77()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

int func_78(var uParam0, bool bParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_4)))
	{
		return 0;
	}
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_1))
	{
		return 0;
	}
	if (!ANIMSCENE::_0x477122B8D05E7968(uParam0->f_1, 1, 0))
	{
		return 0;
	}
	if (!ANIMSCENE::_0x95531A4A20CCE7BC(uParam0->f_1, 0))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_12)))
	{
		return 1;
	}
	if (!ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_1, &(uParam0->f_12)))
	{
		return 0;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_1, &(uParam0->f_12)))
	{
		return 0;
	}
	if (bParam1)
	{
	}
	uParam0->f_2 = 0f;
	func_150(uParam0, 4);
	return 1;
}

void func_79(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (iParam1 < 0 || iParam1 >= 18)
	{
		return;
	}
	if (&uParam0->f_2353[iParam1 /*29*/] > 4)
	{
		iVar0 = 0;
		while (iVar0 < 88)
		{
			if ((uParam0->f_240[iVar0 /*24*/])->f_3 == (uParam0->f_2353[iParam1 /*29*/])->f_1)
			{
				func_152(uParam0, iVar0, bParam2);
			}
			iVar0++;
		}
		ANIMSCENE::_DELETE_ANIM_SCENE((uParam0->f_2353[iParam1 /*29*/])->f_1);
	}
	func_11(uParam0->f_2353[iParam1 /*29*/]);
}

float func_80(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 70f;
		case 2:
			return 45f;
		case 0:
			return 40f;
		case 3:
			return 90f;
		case 5:
			return 90f;
		case 4:
			return 50f;
		case 6:
			return 90f;
		default:
			break;
	}
	return 70f;
}

bool func_81(int iParam0, int iParam1)
{
	return (Global_1899528->f_3[iParam0] && iParam1) != 0;
}

bool func_82(int iParam0)
{
	if (!func_160(iParam0))
	{
		return false;
	}
	return (!func_161() || MISC::IS_BIT_SET(Global_40.f_7854, iParam0));
}

bool func_83(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23117[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0 /*11*/] && iParam1) != 0;
}

int func_84(int iParam0)
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
		iVar0 = func_158(iParam0);
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

bool func_85()
{
	return Global_1898164->f_163;
}

int func_86(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_151(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	iVar1 = func_162(iVar0);
	if (iVar1 == -1)
	{
		return 0;
	}
	return (Global_1392915->f_121[iVar0 /*20*/])->f_19;
}

int func_87()
{
	int iVar0;

	if (func_6() == -1)
	{
		if (SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(5))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (((*Global_1392915)[iVar0 /*12*/])->f_1 != -1)
				{
					if (func_22(((*Global_1392915)[iVar0 /*12*/])->f_4))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		return 0;
	}
	return 0;
}

int func_88(int iParam0, bool bParam1)
{
	if (func_163(iParam0))
	{
		return 1;
	}
	if (!bParam1)
	{
		if (func_164(5000))
		{
			return 1;
		}
	}
	switch (func_165(0))
	{
		case 0:
			return 0;
		case 1:
			if (iParam0 & 1 != 0)
			{
				return 1;
			}
			break;
		case 4:
			if (iParam0 & 2 != 0)
			{
				return 1;
			}
			break;
		case 6:
			if (iParam0 & 4 != 0)
			{
				return 1;
			}
			break;
		case 2:
			if (iParam0 & 16 != 0)
			{
				return 1;
			}
			break;
		case 5:
			if (iParam0 & 32 != 0)
			{
				return 1;
			}
			break;
		case 9:
			if (iParam0 & 64 != 0)
			{
				return 1;
			}
			break;
		case 8:
			if (iParam0 & 8 != 0)
			{
				return 1;
			}
			break;
		case 10:
			if (iParam0 & 512 != 0)
			{
				return 1;
			}
			break;
		case 3:
			if (iParam0 & 128 != 0)
			{
				return 1;
			}
			break;
		case 11:
			if (iParam0 & 256 != 0)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_89(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_90(int* iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
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
	if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*iParam0))
	{
		ENTITY::DETACH_ENTITY(*iParam0, true, true);
	}
	OBJECT::DELETE_OBJECT(iParam0);
}

int func_91(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_166(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_92(int iParam0, int iParam1)
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

int func_93(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar2 = 0;
	while (iVar2 < uParam0->f_94)
	{
		if (&uParam0->f_94[iVar2 /*29*/])
		{
			iVar1 = (uParam0->f_94[iVar2 /*29*/])->f_18;
			if (iVar1 != -1)
			{
				MISC::SET_BIT(&iVar0, iVar1);
			}
		}
		iVar2++;
	}
	return iVar0;
}

int func_94(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_167(iParam0);
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0);
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		if (!MISC::IS_BIT_SET(iParam1, iVar1))
		{
			return iVar1;
		}
		iVar1 = (iVar1 + 1 % iVar0);
		iVar2++;
	}
	return iVar1;
}

int func_95(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_168(iParam1, iParam2, iParam3);
	PED::_0x1902C4CFCC5BE57C(iParam0, iVar0);
	PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	return iVar0;
}

void func_96(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	*uParam2 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_94)
	{
		if (&uParam0->f_94[iVar0 /*29*/])
		{
			(*uParam1)[*uParam2] = (uParam0->f_94[iVar0 /*29*/])->f_19;
			*uParam2++;
		}
		iVar0++;
	}
}

int func_97(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, var uParam5)
{
	var uVar0;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;

	uVar0 = 3;
	iVar4 = 0;
	if (func_169(iParam0))
	{
		return 0;
	}
	func_170(ENTITY::GET_ENTITY_MODEL(iParam0), iParam1, iParam2, &uVar0, &iVar4);
	if (iVar4 == 0)
	{
		return 0;
	}
	iVar5 = iParam4;
	iVar7 = 0;
	while (iVar7 < iParam4)
	{
		iVar6 = uParam3[iVar7];
		if (!func_171(&uVar0, iVar6))
		{
			iVar5 = (iVar5 - 1);
		}
		else
		{
			iVar8 = 0;
			while (iVar8 < iVar7)
			{
				if (uParam3[iVar8] == iVar6)
				{
					iVar5 = (iVar5 - 1);
				}
				else
				{
					iVar8++;
				}
			}
		}
		iVar7++;
	}
	if (iVar4 > iVar5)
	{
		iVar10 = 0;
		iVar9 = (iVar4 - iVar5);
	}
	else
	{
		iVar10 = -1;
		iVar9 = 0;
		iVar7 = 0;
		while (iVar7 < iParam4)
		{
			iVar6 = uParam3[iVar7];
			if (func_171(&uVar0, iVar6))
			{
				iVar11 = 0;
				iVar8 = 0;
				while (iVar8 < iParam4)
				{
					if (uParam3[iVar8] == iVar6)
					{
						iVar11++;
					}
					iVar8++;
				}
				if (iVar10 == -1 || iVar10 > iVar11)
				{
					iVar10 = iVar11;
					iVar9 = 1;
				}
				else if (iVar10 == iVar11)
				{
					iVar9++;
				}
			}
			iVar7++;
		}
	}
	if (iVar9 == 0)
	{
		return 0;
	}
	iVar12 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar9);
	iVar13 = 0;
	iVar6 = 0;
	while (iVar6 < 92)
	{
		if (func_171(&uVar0, iVar6))
		{
			iVar11 = 0;
			iVar7 = 0;
			while (iVar7 < iParam4)
			{
				if (uParam3[iVar7] == iVar6)
				{
					iVar11++;
				}
				iVar7++;
			}
			if (iVar11 == iVar10)
			{
				if (iVar13 == iVar12)
				{
					*uParam5 = iVar6;
					return 1;
				}
				iVar13++;
			}
		}
		iVar6++;
	}
	return 0;
}

char* func_98(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "0880_A_M_M_Civ_Poor_Asian_AVOID_04";
		case 1:
			return "0944_A_M_M_Foreman_White_AVOID_04";
		case 2:
			return "0945_A_M_M_Foreman_White_AVOID_05";
		case 3:
			return "0952_A_M_M_Guard_White_AGGRESSIVE_07";
		case 4:
			return "0953_A_M_M_Guard_White_AGGRESSIVE_08";
		case 5:
			return "0954_A_M_M_Guard_White_AGGRESSIVE_09";
		case 6:
			return "0955_A_M_M_Guard_White_AGGRESSIVE_10";
		case 7:
			return "0956_A_M_M_Rancher_White_01";
		case 8:
			return "0957_A_M_M_Rancher_White_02";
		case 9:
			return "0958_A_M_M_Rancher_White_03";
		case 10:
			return "0959_A_M_M_Rancher_White_04";
		case 11:
			return "0960_A_M_M_Rancher_White_05";
		case 12:
			return "0961_A_M_M_Rancher_White_06";
		case 13:
			return "0962_A_M_M_Rancher_White_07";
		case 14:
			return "0966_A_M_M_RoughTravellers_Black_04";
		case 15:
			return "0985_S_M_M_AmbientLawRural_White_08";
		case 16:
			return "0994_S_M_M_DispatchLawRural_White_09";
		case 17:
			return "0882_A_M_M_Civ_Poor_Black_AGGRESSIVE_02";
		case 18:
			return "0989_S_M_M_DispatchLawRural_White_04";
		case 19:
			return "0847_A_F_M_Civ_Black_AVOID_02";
		case 20:
			return "0850_A_F_M_Civ_Hispanic_AVOID_03";
		case 21:
			return "0854_A_F_M_Civ_Poor_Black_AVOID_04";
		case 22:
			return "0858_A_F_M_Civ_Poor_Black_TIMID_04";
		case 23:
			return "0861_A_F_M_Civ_Poor_White_AGGRESSIVE_03";
		case 24:
			return "0868_A_F_M_Civ_Poor_White_AVOID_06";
		case 25:
			return "0876_A_F_M_Civ_White_TIMID_05";
		case 26:
			return "0702_A_M_M_RhdUpperClass_01_WHITE_02";
		case 27:
			return "0785_A_F_M_MiddleSDTownfolk_01_WHITE_01";
		case 28:
			return "0805_A_M_M_SDDockForeman_01_WHITE_01";
		case 29:
			return "0813_G_M_M_UniBraithwaites_01_WHITE_02";
		case 30:
			return "1004_S_M_M_AmbientBlWPolice_White_03";
		case 31:
			return "1011_S_M_M_DispatchPolice_White_07";
		case 32:
			return "0561_A_F_M_Prostitute_Black_05";
		case 33:
			return "0566_A_F_M_Prostitute_White_05";
		case 34:
			return "0792_A_M_M_MiddleSDTownfolk_02_BLACK_01";
		case 35:
			return "0808_S_M_M_Army_01_WHITE_03";
		case 36:
			return "0811_S_M_Y_Army_01_WHITE_03";
		case 37:
			return "0835_S_M_M_GenConductor_01_WHITE_01";
		case 38:
			return "0836_S_M_M_GenConductor_01_WHITE_02";
		case 39:
			return "0844_S_M_M_UniButchers_01_WHITE_03";
		case 40:
			return "0782_A_F_M_LowerSDTownfolk_01_WHITE_01";
		case 41:
			return "0803_A_M_O_SDUpperClass_01_WHITE_02";
		case 42:
			return "1015_A_F_M_MiddleSDTownfolk_04_WHITE_01";
		case 43:
			return "0842_S_M_M_UniButchers_01_WHITE_01";
		case 44:
			return "0843_S_M_M_UniButchers_01_WHITE_02";
		case 45:
			return "0817_A_M_M_VhtThug_01_WHITE_01";
		case 46:
			return "0818_A_M_M_VhtThug_01_WHITE_02";
		case 47:
			return "0819_A_M_M_VhtThug_01_WHITE_03";
		case 48:
			return "0429_A_M_M_StrTownfolk_01_WHITE_01";
		case 49:
			return "0594_A_M_M_Civ_Poor_White_AVOID_14";
		case 50:
			return "0595_A_M_M_Civ_White_AVOID_11";
		case 51:
			return "0644_A_M_M_Civ_Poor_White_AGGRESSIVE_19";
		case 52:
			return "0650_A_M_M_Civ_Poor_White_AGGRESSIVE_20";
		case 53:
			return "0657_A_M_M_Civ_Poor_White_AGGRESSIVE_18";
		case 54:
			return "0913_A_M_M_Civ_Poor_White_AGGRESSIVE_13";
		case 55:
			return "0130_G_M_M_UniCriminals_01_WHITE_01";
		case 56:
			return "0131_G_M_M_UniCriminals_01_WHITE_02";
		case 57:
			return "0132_G_M_M_UniCriminals_01_BLACK_01";
		case 58:
			return "0133_G_M_M_UniCriminals_01_BLACK_02";
		case 59:
			return "0134_G_M_M_UniCriminals_01_HISPANIC_01";
		case 60:
			return "0278_A_F_M_NbxWhore_01_BLACK_01";
		case 61:
			return "0894_A_M_M_Civ_Poor_Black_AVOID_09";
		case 62:
			return "0915_A_M_M_Civ_Poor_White_AGGRESSIVE_15";
		case 63:
			return "1052_G_M_M_UniGrays_01_WHITE_03";
		case 64:
			return "1053_G_M_M_UniGrays_01_WHITE_04";
		case 65:
			return "1056_G_M_M_UniCriminals_01_WHITE_03";
		case 66:
			return "1058_G_M_M_UniCriminals_01_WHITE_05";
		case 67:
			return "1059_G_M_M_UniCriminals_01_WHITE_06";
		case 68:
			return "1060_G_M_M_UniCriminals_01_WHITE_07";
		case 69:
			return "1061_G_M_M_UniCriminals_01_WHITE_08";
		case 70:
			return "1062_G_M_M_UniCriminals_01_WHITE_09";
		case 71:
			return "1063_G_M_M_UniCriminals_01_WHITE_10";
		case 72:
			return "1064_G_M_M_UniCriminals_01_BLACK_03";
		case 73:
			return "1065_G_M_M_UniCriminals_01_BLACK_04";
		case 74:
			return "1086_U_M_M_TumButcher_01";
		case 75:
			return "1093_A_M_M_TumTownfolk_01_WHITE_01";
		case 76:
			return "1094_A_M_M_TumTownfolk_02_BLACK_01";
		case 77:
			return "1097_A_F_M_TumTownfolk_01_WHITE_01";
		case 78:
			return "1098_A_F_M_TumTownfolk_02_BLACK_01";
		case 79:
			return "0135_G_M_M_UniCriminals_01_HISPANIC_02";
		case 80:
			return "0400_U_M_M_RhdGenStoreOwner_01";
		case 81:
			return "0401_U_M_M_RhdGunsmith_01";
		case 82:
			return "0477_U_M_M_ValDoctor_01";
		case 83:
			return "0478_U_M_M_ValGenStoreOwner_01";
		case 84:
			return "0479_U_M_M_ValGunsmith_01";
		case 85:
			return "1085_U_M_M_TumGunsmith_01";
		case 86:
			return "0083_U_M_O_BlWGeneralStoreOwner_01";
		case 87:
			return "0832_S_M_M_TrainStationWorker_01_WHITE_01";
		case 88:
			return "CS_ValAuctionBoss_01";
		case 89:
			return "AS_TOWNDEALER";
		case 90:
			return "JS_TOWNDEALER";
		case 91:
			return "FH_TOWNDEALER";
		case 92:
			return "MAX";
		default:
			break;
	}
	return "unknown";
}

int func_99(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	var uVar0;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;

	uVar0 = 3;
	iVar4 = 0;
	func_172(ENTITY::GET_ENTITY_MODEL(iParam0), iParam1, &uVar0, &iVar4);
	if (iVar4 == 0)
	{
		return 0;
	}
	iVar5 = iParam3;
	iVar7 = 0;
	while (iVar7 < iParam3)
	{
		iVar6 = uParam2[iVar7];
		if (!func_171(&uVar0, iVar6))
		{
			iVar5 = (iVar5 - 1);
		}
		else
		{
			iVar8 = 0;
			while (iVar8 < iVar7)
			{
				if (uParam2[iVar8] == iVar6)
				{
					iVar5 = (iVar5 - 1);
				}
				else
				{
					iVar8++;
				}
			}
		}
		iVar7++;
	}
	if (iVar4 > iVar5)
	{
		iVar10 = 0;
		iVar9 = (iVar4 - iVar5);
	}
	else
	{
		iVar10 = -1;
		iVar9 = 0;
		iVar7 = 0;
		while (iVar7 < iParam3)
		{
			iVar6 = uParam2[iVar7];
			if (func_171(&uVar0, iVar6))
			{
				iVar11 = 0;
				iVar8 = 0;
				while (iVar8 < iParam3)
				{
					if (uParam2[iVar8] == iVar6)
					{
						iVar11++;
					}
					iVar8++;
				}
				if (iVar10 == -1 || iVar10 > iVar11)
				{
					iVar10 = iVar11;
					iVar9 = 1;
				}
				else if (iVar10 == iVar11)
				{
					iVar9++;
				}
			}
			iVar7++;
		}
	}
	if (iVar9 == 0)
	{
		return 0;
	}
	iVar12 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar9);
	iVar13 = 0;
	iVar6 = 0;
	while (iVar6 < 92)
	{
		if (func_171(&uVar0, iVar6))
		{
			iVar11 = 0;
			iVar7 = 0;
			while (iVar7 < iParam3)
			{
				if (uParam2[iVar7] == iVar6)
				{
					iVar11++;
				}
				iVar7++;
			}
			if (iVar11 == iVar10)
			{
				if (iVar13 == iVar12)
				{
					*iParam4 = iVar6;
					return 1;
				}
				iVar13++;
			}
		}
		iVar6++;
	}
	return 0;
}

int func_100(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam2))
	{
		return 0;
	}
	if (iParam5 == 0)
	{
		if (*uParam1 == 1)
		{
			return 1;
		}
	}
	*uParam1 = 1;
	uParam1->f_11 = iParam2;
	uParam1->f_13 = iParam3;
	uParam1->f_14 = 0;
	uParam1->f_18 = iParam6;
	uParam1->f_19 = iParam7;
	uParam1->f_20 = 0;
	if (bParam4)
	{
		uParam1->f_12 = iParam3;
		uParam0->f_84[iParam3] = iParam3;
		MISC::SET_BIT(&(uParam0->f_82), iParam3);
	}
	else
	{
		uParam1->f_12 = -1;
	}
	if (!PED::IS_PED_A_PLAYER(iParam2))
	{
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam2, true))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam2, true, true);
		}
	}
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam2, -225988669);
	PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, true);
	PED::SET_PED_CONFIG_FLAG(iParam2, 453, true);
	PED::SET_PED_CONFIG_FLAG(iParam2, 130, false);
	PED::SET_PED_CONFIG_FLAG(iParam2, 168, true);
	PED::SET_PED_CONFIG_FLAG(iParam2, 458, true);
	PED::SET_PED_CONFIG_FLAG(iParam2, 26, true);
	PED::SET_PED_CONFIG_FLAG(iParam2, 146, false);
	PED::_0xB8DE69D9473B7593(iParam2, 0);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam2, 319488);
	if (uParam0->f_1 == 2)
	{
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iParam2, "Poker_NPC_Group", 0f);
	}
	if (bParam4)
	{
		func_173(iParam2);
		func_103(uParam1, 4);
	}
	else
	{
		func_103(uParam1, 3);
	}
	uParam0->f_81++;
	return 1;
}

int func_101(var uParam0, var uParam1)
{
	int iVar0;

	switch (uParam1->f_3)
	{
		case 0:
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uParam1->f_11, uParam0->f_3, 1f, 20000, 2f, false, 40000f);
			func_174(uParam1);
			break;
		case 1:
			if (func_175(uParam1->f_11, 713668775))
			{
				func_174(uParam1);
			}
			break;
		case 2:
			if (!func_175(uParam1->f_11, 713668775))
			{
				func_57(uParam0, uParam1);
				return 2;
			}
			if (uParam0->f_2889)
			{
				func_57(uParam0, uParam1);
				return 2;
			}
			if (func_176(uParam1->f_11, uParam0->f_3, 1) > 3f)
			{
				return 0;
			}
			if (uParam0->f_1 == 0 && func_169(uParam1->f_11))
			{
				iVar0 = 4;
				if (!MISC::IS_BIT_SET(uParam0->f_82, iVar0))
				{
					MISC::SET_BIT(&(uParam0->f_82), iVar0);
					uParam0->f_84[iVar0] = uParam1->f_13;
					uParam1->f_12 = iVar0;
					if (!TASK::_0x841475AC96E794D1((uParam0->f_23[uParam1->f_12 /*11*/])->f_10))
					{
						func_57(uParam0, uParam1);
						return 2;
					}
					TASK::_TASK_USE_SCENARIO_POINT(uParam1->f_11, (uParam0->f_23[uParam1->f_12 /*11*/])->f_10, 0, 0, 1, 0, 0, 0, -1082130432, 0);
					func_174(uParam1);
				}
				else
				{
					func_57(uParam0, uParam1);
					return 2;
				}
			}
			if (func_177(uParam0, ENTITY::GET_ENTITY_COORDS(uParam1->f_11, true, false), &iVar0))
			{
				MISC::SET_BIT(&(uParam0->f_82), iVar0);
				uParam0->f_84[iVar0] = uParam1->f_13;
				uParam1->f_12 = iVar0;
				if (!TASK::_0x841475AC96E794D1((uParam0->f_23[uParam1->f_12 /*11*/])->f_10))
				{
					func_57(uParam0, uParam1);
					return 2;
				}
				TASK::_TASK_USE_SCENARIO_POINT(uParam1->f_11, (uParam0->f_23[uParam1->f_12 /*11*/])->f_10, 0, 0, 1, 0, 0, 0, -1082130432, 0);
				func_174(uParam1);
			}
			else
			{
				func_57(uParam0, uParam1);
				return 2;
			}
			break;
		case 3:
			if (TASK::IS_PED_ACTIVE_IN_SCENARIO(uParam1->f_11, 0))
			{
				func_174(uParam1);
			}
			break;
		case 4:
			if (func_6() == -1 && uParam0->f_1 == 0)
			{
				if (func_111(uParam0, 4))
				{
					func_35(uParam0->f_2);
				}
				else
				{
					func_1(uParam0->f_2);
				}
			}
			func_173(uParam1->f_11);
			func_178(uParam1);
			func_103(uParam1, 4);
			return 1;
	}
	return 0;
}

int func_102(var uParam0, var uParam1)
{
	var uVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	char* sVar9;

	iVar8 = (0 + uParam1->f_12);
	switch (uParam1->f_3)
	{
		case 0:
			WEAPON::REMOVE_ALL_PED_WEAPONS(uParam1->f_11, true, true);
			if ((Local_1.f_5[uParam1->f_12 /*37*/])->f_1 == -1)
			{
				if (func_179())
				{
					(Local_1.f_5[uParam1->f_12 /*37*/])->f_1 = 0;
				}
				else
				{
					(Local_1.f_5[uParam1->f_12 /*37*/])->f_1 = 1;
				}
			}
			if (uParam1->f_12 != 4)
			{
				(Local_1.f_5[uParam1->f_12 /*37*/])->f_10 = MISC::GET_RANDOM_INT_IN_RANGE(0, 200);
				func_180(uParam0, uParam1->f_12, (Local_1.f_5[uParam1->f_12 /*37*/])->f_10);
			}
			else
			{
				iVar7 = 0;
				while (iVar7 < 5)
				{
					func_128(uParam0, iVar7, &vVar1, &vVar4, 1);
					func_125(uParam0, (63 + iVar7), func_129(), vVar1, vVar4, iVar7, 0);
					iVar7++;
				}
			}
			if (uParam1->f_12 == 4)
			{
				sVar9 = func_181(iVar8, 0);
			}
			else
			{
				sVar9 = func_182((Local_1.f_5[uParam1->f_12 /*37*/])->f_1);
			}
			if (func_183(uParam0, iVar8, sVar9, "PBL_Idle", 2))
			{
				func_174(uParam1);
			}
			break;
		case 1:
			if (!func_184(uParam0, iVar8))
			{
				return 0;
			}
			ANIMSCENE::_0x99B2A2E3655DEAF1(uParam1->f_11, "BlackjackSeatedNoCards");
			if (uParam1->f_12 == 4)
			{
				if (ENTITY::_0x0B7CB1300CBFE19C(uParam1->f_11, 1))
				{
					TASK::STOP_ANIM_PLAYBACK(uParam1->f_11, 0, false);
				}
				if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED((uParam0->f_240[61 /*24*/])->f_4))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY((uParam0->f_240[61 /*24*/])->f_4, uParam1->f_11, PED::GET_PED_BONE_INDEX((uParam0->f_94[4 /*29*/])->f_11, 37709), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0, 0);
				}
				func_185(uParam0, iVar8, uParam1, "DEALER");
				if (!func_186(uParam0, iVar8, uParam0->f_3, 0f, 0f, uParam0->f_6))
				{
					return 0;
				}
			}
			else
			{
				func_185(uParam0, iVar8, uParam1, "pre_postgame_blackjack_player");
				func_187(0, uParam0->f_3, uParam0->f_6, uParam1->f_12, &vVar1, &uVar0, 0);
				if (!func_186(uParam0, iVar8, vVar1 + Vector(Local_1.f_300, 0f, 0f), 0f, 0f, uVar0))
				{
					return 0;
				}
			}
			func_174(uParam1);
			break;
		case 2:
			if (func_47(uParam0))
			{
				if (uParam1->f_12 != 4)
				{
					func_180(uParam0, uParam1->f_12, (Local_1.f_5[uParam1->f_12 /*37*/])->f_10);
				}
				else
				{
					func_188((uParam0->f_240[63 /*24*/])->f_4, 10, 0);
					func_189((uParam0->f_240[63 /*24*/])->f_4, 1);
					func_188((uParam0->f_240[64 /*24*/])->f_4, 10, 0);
					func_189((uParam0->f_240[64 /*24*/])->f_4, 2);
					func_188((uParam0->f_240[65 /*24*/])->f_4, 8, 0);
					func_189((uParam0->f_240[65 /*24*/])->f_4, 1);
					func_188((uParam0->f_240[66 /*24*/])->f_4, 7, 0);
					func_189((uParam0->f_240[66 /*24*/])->f_4, 2);
					func_188((uParam0->f_240[67 /*24*/])->f_4, 6, 0);
					func_189((uParam0->f_240[67 /*24*/])->f_4, 3);
				}
				return 1;
			}
			break;
	}
	return 0;
}

void func_103(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
	uParam0->f_3 = 0;
	func_72(&(uParam0->f_4));
}

int func_104(var uParam0)
{
	if (!func_146(uParam0))
	{
		return 0;
	}
	if (PED::IS_PED_RAGDOLL(uParam0->f_11))
	{
		return 0;
	}
	if (PED::IS_PED_USING_ANY_SCENARIO(uParam0->f_11))
	{
		return 0;
	}
	if (uParam0->f_16)
	{
		return 1;
	}
	if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(uParam0->f_11))
	{
		return 1;
	}
	return 0;
}

int func_105(var uParam0, var uParam1, bool bParam2)
{
	if (!func_190(uParam0, uParam1->f_11))
	{
		return 0;
	}
	if (uParam1->f_1 == 7)
	{
		return 0;
	}
	if (bParam2)
	{
		if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(uParam1->f_11))
		{
		}
	}
	if (ENTITY::_0x083D497D57B7400F(uParam1->f_11))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_11, false);
	}
	if (!uParam0->f_2889)
	{
		DECORATOR::DECOR_SET_BOOL(uParam1->f_11, "DontGrabThisPedForMinigame", true);
	}
	ANIMSCENE::_0xBC781D24AA11F179(uParam1->f_11);
	func_191(uParam0, uParam1->f_12, 1);
	func_192(uParam0, uParam1->f_20, 1);
	if (PED::IS_PED_RAGDOLL(uParam1->f_11))
	{
		func_10(uParam0, uParam1, 0, 1, 0, 1);
	}
	else
	{
		func_103(uParam1, 7);
	}
	return 1;
}

int func_106(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = uParam1->f_12;
	if (uParam0->f_2881 == 0 && uParam0->f_2880 == 0)
	{
		if (uParam0->f_79 > 8f && (Local_1.f_5[iVar0 /*37*/])->f_5 == 0)
		{
			return 1;
		}
	}
	switch (&Local_1.f_5[iVar0 /*37*/])
	{
		case 2:
			func_193(uParam0, uParam1, &Local_1);
			break;
		case 3:
			func_194(uParam0, uParam1, &Local_1);
			break;
		case 4:
			func_195(uParam0, uParam1, &Local_1);
			break;
		case 5:
			func_196(uParam0, uParam1, &Local_1);
			break;
		case 6:
			func_197(uParam0, uParam1, &Local_1);
			break;
		case 7:
			func_198(uParam0, uParam1, &Local_1);
			break;
		case 1:
			func_199(uParam0, uParam1, &Local_1);
			break;
		case 11:
			func_200(uParam0, uParam1, &Local_1);
			break;
		case 10:
			func_201(uParam0, uParam1, &Local_1);
			break;
		case 8:
			func_202(uParam0, uParam1, &Local_1);
			break;
		case 13:
			func_203(uParam0, uParam1, &Local_1);
			break;
		case 14:
			func_204(uParam0, uParam1, &Local_1);
			break;
		case 12:
			func_205(uParam0, uParam1, &Local_1);
			break;
	}
	return 1;
}

int func_107(var uParam0, var uParam1)
{
	switch (uParam1->f_3)
	{
		case 0:
			TASK::CLEAR_PED_TASKS(uParam1->f_11, 1, 0);
			func_191(uParam0, uParam1->f_12, 0);
			func_206(uParam1->f_11);
			func_174(uParam1);
			break;
		case 1:
			func_57(uParam0, uParam1);
			func_174(uParam1);
			break;
		case 2:
			return 1;
	}
	return 0;
}

int func_108(vector3 vParam0, float fParam3, bool bParam4)
{
	if (bParam4)
	{
		if (MISC::_IS_PROJECTILE_TYPE_IN_RADIUS(vParam0, joaat("weapon_thrown_dynamite"), fParam3, false) || MISC::_IS_PROJECTILE_TYPE_IN_RADIUS(vParam0, joaat("weapon_thrown_molotov"), fParam3, false))
		{
			return 1;
		}
	}
	if ((((((FIRE::IS_EXPLOSION_IN_SPHERE(25, vParam0, fParam3) || FIRE::IS_EXPLOSION_IN_SPHERE(0, vParam0, fParam3)) || FIRE::IS_EXPLOSION_IN_SPHERE(2, vParam0, fParam3)) || FIRE::IS_EXPLOSION_IN_SPHERE(30, vParam0, fParam3)) || FIRE::IS_EXPLOSION_IN_SPHERE(31, vParam0, fParam3)) || FIRE::IS_EXPLOSION_IN_SPHERE(29, vParam0, fParam3)) || FIRE::IS_EXPLOSION_IN_SPHERE(26, vParam0, fParam3))
	{
		return 1;
	}
	return 0;
}

void func_109(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(*uParam0))
	{
		*uParam0 = VOLUME::_0x10157BC3247FF3BA(vParam1, vParam4, vParam7, func_207());
	}
}

int func_110(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case joaat("p_windsorchair03x"):
					return 1;
				case joaat("p_windsorchair01x"):
				case 1609095284:
					return 1;
				case joaat("p_chair24x"):
				case joaat("p_chair22x"):
					return 1;
				default:
					break;
			}
			break;
		case 2:
			if (iParam1 == joaat("p_chair13x"))
			{
				return 1;
			}
			if (iParam1 == joaat("p_chair05x"))
			{
				return 1;
			}
			if (iParam1 == joaat("p_chair06x"))
			{
				return 1;
			}
			if (iParam1 == joaat("p_windsorchair03x"))
			{
				return 1;
			}
			if (iParam1 == -1763848034)
			{
				return 1;
			}
			if (iParam1 == 2096698905)
			{
				return 1;
			}
			if (iParam1 == joaat("p_chair11x"))
			{
				return 1;
			}
			if (iParam1 == 1999055955)
			{
				return 1;
			}
			break;
		case 1:
			if (iParam1 == joaat("p_chair02x"))
			{
				return 1;
			}
			if (iParam1 == joaat("p_stool02x"))
			{
				return 1;
			}
			if (iParam1 == joaat("p_stool03x"))
			{
				return 1;
			}
			if (iParam1 == joaat("p_stoolwinter01x"))
			{
				return 1;
			}
			if (iParam1 == joaat("p_stoolfolding01x"))
			{
				return 1;
			}
			if (iParam1 == joaat("p_chair_barrel04b"))
			{
				return 1;
			}
			if (iParam1 == joaat("p_chairfolding02x"))
			{
				return 1;
			}
			break;
		case 3:
			if (iParam1 == joaat("p_chair06x"))
			{
				return 1;
			}
			if (iParam1 == -1618805595)
			{
				return 1;
			}
			if (iParam1 == joaat("p_chair_crate02x"))
			{
				return 1;
			}
			if (iParam1 == joaat("p_stoolfolding01x"))
			{
				return 1;
			}
			if (iParam1 == joaat("p_chairfolding02x"))
			{
				return 1;
			}
			break;
		default:
			return 1;
	}
	return 0;
}

bool func_111(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_94)
	{
		return false;
	}
	if (&uParam0->f_84[iParam1] == -1)
	{
		return false;
	}
	return (uParam0->f_94[&uParam0->f_84[iParam1] /*29*/] && (uParam0->f_94[&uParam0->f_84[iParam1] /*29*/])->f_1 == 5);
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

int func_113()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 13)
	{
		if (Global_1572887->f_12 == -1)
		{
			if (&Global_1934765->f_39[iVar0] != &Global_40.f_283[iVar0])
			{
				return 1;
			}
		}
		else if (&Global_1934765->f_39[iVar0] != &Global_1058888->f_40567[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_114(var uParam0)
{
	func_208(uParam0, uParam0->f_11 + 1);
}

void func_115(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(*uParam0))
	{
		*uParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, func_207());
	}
}

int func_116(int iParam0, vector3 vParam1, float fParam4, int iParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;

	iVar3 = ITEMSET::CREATE_ITEMSET(true);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar3))
	{
		return 0;
	}
	func_209(iParam0, vParam1, fParam4, iParam5, &vVar5, 0);
	func_115(&iVar2, vVar5, 0f, 0f, 0f, (fParam6 * 2f), (fParam6 * 2f), 1.2f);
	iVar1 = ENTITY::_0x886171A12F400B89(iVar2, iVar3, 3);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar4 = MISC::_0x18013392501CE5DC(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, iVar3));
		if (!ENTITY::IS_ENTITY_DEAD(iVar4))
		{
			if (func_110(iParam0, ENTITY::GET_ENTITY_MODEL(iVar4)))
			{
				if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar4) > 0.95f)
				{
					func_59(iVar2);
					ITEMSET::_0x20A4BF0E09BEE146(iVar3);
					ITEMSET::DESTROY_ITEMSET(iVar3);
					return iVar4;
				}
			}
		}
		iVar0++;
	}
	func_59(iVar2);
	ITEMSET::_0x20A4BF0E09BEE146(iVar3);
	ITEMSET::DESTROY_ITEMSET(iVar3);
	return 0;
}

int func_117(int iParam0, vector3 vParam1, float fParam4, int iParam5, var uParam6, var uParam7)
{
	if (!func_210(iParam0))
	{
		return 0;
	}
	if (!func_187(iParam0, vParam1, fParam4, iParam5, uParam6, uParam7, 0))
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		*uParam6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam6, *uParam7, 0f, 0f, -0.5f) };
	}
	else if (iParam0 == 3)
	{
		*uParam6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam6, *uParam7, 0f, 0.05f, -0.5f) };
	}
	return 1;
}

void func_118(var uParam0)
{
}

int func_119(var uParam0)
{
	return 1;
}

int func_120(int iParam0, int iParam1, int iParam2)
{
	int iVar0[4];
	int iVar5;

	iVar5 = 0;
	if (iParam0 == 3)
	{
		return joaat("a_m_m_fivefingerfilletplayers_01");
	}
	else if (iParam0 == 2 || iParam0 == 0)
	{
		return joaat("a_m_m_cardgameplayers_01");
	}
	else if (iParam0 == 1)
	{
		return joaat("a_m_m_dominoesplayers_01");
	}
	switch (iParam1)
	{
		case 76:
			iVar0[0] = joaat("a_m_m_valtownfolk_01");
			iVar0[1] = joaat("a_m_m_valtownfolk_02");
			iVar5 = 2;
			break;
		case 105:
			iVar0[0] = joaat("a_m_m_rhdupperclass_01");
			iVar5 = 1;
			break;
		case 38:
			if (iParam0 == 1)
			{
				iVar0[0] = joaat("a_m_m_blwlaborer_01");
				iVar0[1] = joaat("a_m_m_blwlaborer_02");
				iVar5 = 2;
			}
			else
			{
				iVar0[0] = joaat("a_m_m_blwupperclass_01");
				iVar5 = 1;
			}
			break;
		case 115:
			iVar0[0] = joaat("a_m_m_tumtownfolk_01");
			iVar0[1] = joaat("a_m_m_tumtownfolk_02");
			iVar5 = 2;
			break;
		case 26:
			iVar0[0] = joaat("s_m_m_strlumberjack_01");
			iVar5 = 1;
			break;
		case 5:
			if (iParam0 == 1)
			{
				iVar0[0] = joaat("a_m_m_middlesdtownfolk_01");
				iVar0[1] = joaat("a_m_m_middlesdtownfolk_02");
				iVar0[2] = joaat("a_m_m_middlesdtownfolk_03");
				iVar5 = 3;
			}
			else
			{
				iVar0[0] = joaat("a_m_o_sdupperclass_01");
				iVar0[1] = joaat("a_m_o_sdupperclass_01");
				iVar5 = 2;
			}
			break;
		case 92:
			iVar0[0] = joaat("a_m_m_vhttownfolk_01");
			iVar5 = 1;
			break;
		case 69:
			if (iParam0 == 1)
			{
				iVar0[0] = joaat("a_m_m_emrfarmhand_01");
				iVar5 = 1;
			}
			else
			{
				iVar0[0] = joaat("a_m_m_emrfarmhand_01");
				iVar5 = 1;
			}
			break;
		case 75:
			iVar0[0] = joaat("a_m_m_valtownfolk_01");
			iVar0[1] = joaat("a_m_m_valtownfolk_02");
			iVar0[2] = joaat("s_m_m_valcowpoke_01");
			iVar5 = 3;
			break;
	}
	if (iVar5 == 0)
	{
		return 0;
	}
	else
	{
		if (iParam2 == -1)
		{
			iParam2 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar5);
		}
		if (iParam2 < iVar5)
		{
			return &(iVar0[iParam2]);
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_121(int iParam0)
{
	switch (iParam0)
	{
		case 105:
			return joaat("s_m_m_rhddealer_01");
		case 5:
			return joaat("s_m_m_sddealer_01");
		case 26:
			return joaat("s_m_m_strdealer_01");
		case 76:
			return joaat("s_m_m_valdealer_01");
		case 92:
			return joaat("s_m_m_vhtdealer_01");
		case 78:
			return joaat("s_m_m_asbdealer_01");
		case 38:
			return joaat("s_m_m_blwdealer_01");
		case 75:
			return joaat("s_m_m_valdealer_01");
		default:
			break;
	}
	return 0;
}

int func_122(int iParam0, vector3 vParam1, float fParam4, int iParam5, vector3 vParam6, var uParam9, int iParam10)
{
	vector3 vVar0;
	float fVar3;

	if (!func_160(iParam0))
	{
		return 0;
	}
	if (!func_187(iParam0, vParam1, fParam4, iParam5, &vVar0, &fVar3, iParam10))
	{
		return 0;
	}
	*uParam9 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar3, vParam6) };
	return 1;
}

int func_123(int iParam0, float fParam1, int iParam2, var uParam3)
{
	float fVar0;

	if (!func_160(iParam0))
	{
		return 0;
	}
	if (!func_211(iParam0, iParam2, &fVar0))
	{
		return 0;
	}
	*uParam3 = (fParam1 + fVar0);
	if (*uParam3 > 360f)
	{
		*uParam3 = (*uParam3 - 360f);
	}
	if (*uParam3 < -360f)
	{
		*uParam3 = (*uParam3 + 360f);
	}
	return 1;
}

int func_124(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;

	bVar0 = true;
	vVar1 = { Vector(79.91527f, 35.75516f, -45.47359f) / Vector(100f, 100f, 100f) };
	vVar4 = { 0f, 0f, -22f };
	if (!bVar0)
	{
		return 0;
	}
	else if (bParam3)
	{
		func_212(uParam0->f_3, uParam0->f_6, vVar1, vVar4, uParam1, uParam2);
	}
	else
	{
		*uParam1 = { vVar1 };
		*uParam2 = { vVar4 };
	}
	return 1;
}

void func_125(var uParam0, int iParam1, int iParam2, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10)
{
	uParam0->f_240[iParam1 /*24*/] = 2;
	(uParam0->f_240[iParam1 /*24*/])->f_16 = { vParam3 };
	(uParam0->f_240[iParam1 /*24*/])->f_19 = { vParam6 };
	(uParam0->f_240[iParam1 /*24*/])->f_1 = iParam2;
	(uParam0->f_240[iParam1 /*24*/])->f_13 = iParam10;
	if (ENTITY::DOES_ENTITY_EXIST((uParam0->f_240[iParam1 /*24*/])->f_4))
	{
		if (ENTITY::GET_ENTITY_MODEL((uParam0->f_240[iParam1 /*24*/])->f_4) == iParam2)
		{
			if (!func_213((uParam0->f_240[iParam1 /*24*/])->f_16, ENTITY::GET_ENTITY_COORDS((uParam0->f_240[iParam1 /*24*/])->f_4, true, false)))
			{
				ENTITY::SET_ENTITY_COORDS((uParam0->f_240[iParam1 /*24*/])->f_4, (uParam0->f_240[iParam1 /*24*/])->f_16, true, false, false, true);
			}
			ENTITY::SET_ENTITY_ROTATION((uParam0->f_240[iParam1 /*24*/])->f_4, (uParam0->f_240[iParam1 /*24*/])->f_19, 2, true);
			uParam0->f_240[iParam1 /*24*/] = 5;
		}
		else
		{
			uParam0->f_240[iParam1 /*24*/] = 4;
		}
		if ((uParam0->f_240[iParam1 /*24*/])->f_13)
		{
			ENTITY::SET_ENTITY_VISIBLE((uParam0->f_240[iParam1 /*24*/])->f_4, false);
		}
		return;
	}
	if (iParam9 > 0)
	{
		uParam0->f_240[iParam1 /*24*/] = 1;
		(uParam0->f_240[iParam1 /*24*/])->f_2 = (MISC::GET_FRAME_COUNT() + iParam9);
	}
}

int func_126(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;

	bVar0 = true;
	vVar1 = { 0.0537f, 0.3153f, 0.8006f };
	vVar4 = { 0.0247f, -0.0879f, 164.3123f };
	if (!bVar0)
	{
		return 0;
	}
	else if (bParam3)
	{
		func_212(uParam0->f_3, uParam0->f_6, vVar1, vVar4, uParam1, uParam2);
	}
	else
	{
		*uParam1 = { vVar1 };
		*uParam2 = { vVar4 };
	}
	return 1;
}

int func_127(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	struct<2> Var2;

	iVar0 = iParam0;
	switch (iVar0)
	{
		case 62:
			return 1598471465;
		case 0:
		case 84:
		case 85:
		case 86:
		case 87:
			Var2 = 11;
			Var2.f_1 = 0;
			if (func_214(&uVar1, Var2, iLocal_0, 0))
			{
				return uVar1;
			}
			return -1360732541;
		case 61:
			if (func_215(&uVar1, iLocal_0))
			{
				return uVar1;
			}
			return 470485448;
		case 55:
		case 56:
		case 57:
		case 58:
			return func_129();
		case 60:
			return func_129();
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
			return func_129();
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
			return func_129();
		default:
			break;
	}
	return -1069761451;
	return 0;
}

int func_128(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;

	bVar0 = true;
	if (iParam1 == 0)
	{
		vVar1 = { Vector(84.27908f, 37.08674f, -34.37373f) / Vector(100f, 100f, 100f) };
		vVar4 = { 90f, 0f, -22f };
	}
	else if (iParam1 == 1)
	{
		vVar1 = { Vector(84.27908f, 38.90664f, -38.96327f) / Vector(100f, 100f, 100f) };
		vVar4 = { 90f, 0f, -22f };
	}
	else if (iParam1 == 2)
	{
		vVar1 = { Vector(84.27908f, 40.71551f, -43.35525f) / Vector(100f, 100f, 100f) };
		vVar4 = { 90f, 0f, -22f };
	}
	else if (iParam1 == 3)
	{
		vVar1 = { Vector(84.27908f, 42.49949f, -47.77074f) / Vector(100f, 100f, 100f) };
		vVar4 = { 90f, 0f, -22f };
	}
	else if (iParam1 == 4)
	{
		vVar1 = { Vector(84.27908f, 44.32357f, -52.2855f) / Vector(100f, 100f, 100f) };
		vVar4 = { 90f, 0f, -22f };
	}
	else
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return 0;
	}
	if (bParam4)
	{
		func_212(uParam0->f_3, uParam0->f_6, vVar1, vVar4, uParam2, uParam3);
	}
	else
	{
		*uParam2 = { vVar1 };
		*uParam3 = { vVar4 };
	}
	return 1;
}

int func_129()
{
	int iVar0;

	iVar0 = 1590697544;
	if (func_216(&iVar0, iLocal_0))
	{
		return iVar0;
	}
	return iVar0;
}

void func_130(int iParam0, int iParam1)
{
	if (*iParam0 != iParam1)
	{
	}
	*iParam0 = iParam1;
	iParam0->f_4 = 0;
	func_72(&(iParam0->f_1));
}

int func_131(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < uParam0->f_94)
	{
		if (uParam0->f_94[iVar1 /*29*/] && (uParam0->f_94[iVar1 /*29*/])->f_1 == iParam1)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_132(var uParam0, var uParam1, char* sParam2)
{
	if (uParam0->f_2879 == 0)
	{
		return 0;
	}
	return func_217(uParam1, sParam2, -1454469014, 0, 1, 0, 0, 1);
}

void func_133(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam3 == 0)
	{
	}
	*uParam0 = iParam1;
	uParam0->f_5 = 0;
	uParam0->f_6 = iParam2;
	func_72(&(uParam0->f_2));
}

bool func_134(var uParam0)
{
	return ((uParam0->f_5 == 100 || *uParam0 == 1) || *uParam0 == 0);
}

int func_135(int iParam0, var uParam1)
{
	switch (iParam0->f_4)
	{
		case 0:
			func_133(Local_1.f_5[4 /*37*/], 3, 0, 0);
			func_218(iParam0);
			break;
		case 1:
			if (!func_134(Local_1.f_5[4 /*37*/]))
			{
				return 0;
			}
			func_218(iParam0);
			break;
		case 2:
			return 1;
	}
	return 0;
}

void func_136(int iParam0, var uParam1)
{
	switch (iParam0->f_4)
	{
		case 0:
			if (!func_219(uParam1, iParam0, iParam0->f_301))
			{
				iParam0->f_301++;
				if (iParam0->f_301 == 4)
				{
					func_130(iParam0, 6);
				}
				return;
			}
			(iParam0->f_5[iParam0->f_301 /*37*/])->f_11 = func_220(iParam0, iParam0->f_301);
			func_218(iParam0);
			break;
		case 1:
			if (!func_134(iParam0->f_5[iParam0->f_301 /*37*/]))
			{
				return;
			}
			if (!func_134(iParam0->f_5[4 /*37*/]))
			{
				return;
			}
			if ((iParam0->f_5[iParam0->f_301 /*37*/])->f_11 == 1)
			{
				func_133(iParam0->f_5[4 /*37*/], 4, 0, 0);
			}
			func_218(iParam0);
			break;
		case 2:
			if (!func_134(iParam0->f_5[4 /*37*/]))
			{
				return;
			}
			iParam0->f_301++;
			func_221(iParam0, 0);
			if (iParam0->f_301 == 4)
			{
				func_130(iParam0, 6);
			}
			break;
	}
}

void func_137(int iParam0, var uParam1)
{
	switch (iParam0->f_4)
	{
		case 0:
			iParam0->f_301 = 4;
			func_133(iParam0->f_5[4 /*37*/], 5, 0, 0);
			func_218(iParam0);
			break;
		case 1:
			if (!func_134(iParam0->f_5[4 /*37*/]))
			{
				return;
			}
			iParam0->f_301 = 0;
			if ((iParam0->f_5[4 /*37*/])->f_12.f_23 > 3)
			{
				func_130(iParam0, 7);
			}
			else
			{
				func_130(iParam0, 5);
			}
			break;
	}
}

void func_138(int iParam0, var uParam1)
{
	switch (iParam0->f_4)
	{
		case 0:
			if (!func_134(iParam0->f_5[4 /*37*/]))
			{
				return;
			}
			iParam0->f_302 = -1;
			func_218(iParam0);
			break;
		case 1:
			iParam0->f_302++;
			if (iParam0->f_302 == 4)
			{
				func_221(iParam0, 3);
			}
			else if (func_111(uParam1, iParam0->f_302))
			{
				func_133(iParam0->f_5[4 /*37*/], 7, 0, 0);
				func_218(iParam0);
			}
			break;
		case 2:
			if (func_134(iParam0->f_5[4 /*37*/]))
			{
				func_221(iParam0, 1);
			}
			break;
		case 3:
			func_133(iParam0->f_5[4 /*37*/], 12, 0, 0);
			func_218(iParam0);
			break;
		case 4:
			if (!func_134(iParam0->f_5[4 /*37*/]))
			{
				return;
			}
			func_130(iParam0, 1);
			break;
	}
}

void func_139(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	switch (iParam0->f_4)
	{
		case 0:
			func_222(Global_1899750, uParam1->f_3 - Vector(2f, 0f, 0f));
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (func_147(uParam1->f_1, uParam1->f_3, uParam1->f_6, iVar0, &iVar1, 1, 0))
				{
					if (!func_169(iVar1))
					{
						func_223(Global_1899750, iVar1, iVar0, 0);
					}
					PED::SET_PED_CONFIG_FLAG(iVar1, 113, true);
				}
				iVar0++;
			}
			func_224(4);
			func_143(0);
			func_225(1);
			func_218(iParam0);
			break;
		case 1:
			if (func_50() == 2)
			{
				iVar0 = 0;
				while (iVar0 < 5)
				{
					if ((uParam1->f_94[iVar0 /*29*/])->f_12 != -1)
					{
						func_226(uParam1->f_1, (uParam1->f_94[iVar0 /*29*/])->f_11, iVar0, (Local_1.f_5[iVar0 /*37*/])->f_10, (Local_1.f_5[iVar0 /*37*/])->f_1, (uParam1->f_94[iVar0 /*29*/])->f_18, (uParam1->f_94[iVar0 /*29*/])->f_19);
					}
					else
					{
						func_226(uParam1->f_1, 0, iVar0, 0, 0, 0, 92);
					}
					iVar0++;
				}
				func_225(3);
				func_218(iParam0);
			}
			break;
		case 2:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (func_111(uParam1, iVar0))
				{
					if (!func_134(iParam0->f_5[iVar0 /*37*/]))
					{
						return;
					}
				}
				iVar0++;
			}
			if (!func_134(iParam0->f_5[4 /*37*/]))
			{
				return;
			}
			iParam0->f_302 = -1;
			func_218(iParam0);
			break;
		case 3:
			iParam0->f_302++;
			if (iParam0->f_302 == 4)
			{
				func_221(iParam0, 5);
			}
			else if (func_111(uParam1, iParam0->f_302))
			{
				func_133(iParam0->f_5[4 /*37*/], 7, 0, 0);
				func_218(iParam0);
			}
			break;
		case 4:
			if (func_134(iParam0->f_5[4 /*37*/]))
			{
				func_221(iParam0, 3);
			}
			break;
		case 5:
			func_133(Local_1.f_5[4 /*37*/], 12, 0, 0);
			func_218(iParam0);
			break;
		case 6:
			if (func_134(Local_1.f_5[4 /*37*/]))
			{
				func_225(4);
				func_218(iParam0);
			}
			break;
		case 7:
			if (func_50() == 5)
			{
				func_3(uParam1, 1, 0);
				func_21(uParam1, 10);
				func_71(iParam0);
			}
			break;
	}
}

int func_140(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (Global_1899528->f_61.f_1 != iParam0)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	*uParam2 = &Global_1899528->f_61.f_7[iParam1];
	*uParam3 = &Global_1899528->f_61.f_14[iParam1];
	*uParam4 = &Global_1899528->f_61.f_21[iParam1];
	*uParam5 = &Global_1899528->f_61.f_28[iParam1];
	return &(Global_1899528->f_61.f_134[iParam1]);
}

void func_141()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1899528->f_61.f_134[iVar0] = 0;
		iVar0++;
	}
}

void func_142()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1899528->f_61.f_101[iVar0] = 0;
		iVar0++;
	}
}

void func_143(int iParam0)
{
	Global_1899528->f_61.f_1 = iParam0;
}

void func_144(int iParam0)
{
	Global_1899528->f_61.f_2 = iParam0;
}

int func_145()
{
	return Global_1899528->f_61.f_1;
}

int func_146(var uParam0)
{
	if (*uParam0 == 0)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_11))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_11))
	{
		return 0;
	}
	return 1;
}

int func_147(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;

	fVar8 = (0.25f * 2f);
	if (!func_209(iParam0, vParam1, fParam4, iParam5, &vVar0, 1))
	{
		return 0;
	}
	iVar4 = ITEMSET::CREATE_ITEMSET(true);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar4))
	{
		return 0;
	}
	vVar0.f_2 = (vVar0.z + 0.9f);
	func_115(&iVar5, vVar0, 0f, 0f, 0f, fVar8, fVar8, 1.8f);
	iVar6 = ENTITY::_0x886171A12F400B89(iVar5, iVar4, 1);
	iVar7 = 0;
	while (iVar7 < iVar6)
	{
		iVar3 = MISC::_0x3FFB15534067DCD4(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar7, iVar4));
		if (func_227(iParam0, iVar3) || iParam8 == 1)
		{
			if (iParam7 == 0 || (iParam7 == 1 && !PED::IS_PED_A_PLAYER(iVar3)))
			{
				func_59(iVar5);
				ITEMSET::_0x20A4BF0E09BEE146(iVar4);
				ITEMSET::DESTROY_ITEMSET(iVar4);
				*iParam6 = iVar3;
				return 1;
			}
		}
		iVar7++;
	}
	func_59(iVar5);
	ITEMSET::_0x20A4BF0E09BEE146(iVar4);
	ITEMSET::DESTROY_ITEMSET(iVar4);
	return 0;
}

bool func_148(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_94)
	{
		return false;
	}
	if (&uParam0->f_84[iParam1] == -1)
	{
		return false;
	}
	return (uParam0->f_94[&uParam0->f_84[iParam1] /*29*/])->f_1 != 0;
}

bool func_149(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 18)
	{
		return false;
	}
	return &uParam0->f_2353[iParam1 /*29*/] >= 4;
}

void func_150(var uParam0, int iParam1)
{
	if (iParam1 != *uParam0)
	{
	}
	if (iParam1 == 1 || iParam1 == 4)
	{
		uParam0->f_2 = 0f;
	}
	*uParam0 = iParam1;
}

int func_151(int iParam0)
{
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return -1;
	}
	return &(Global_1899528->f_11[iParam0]);
}

void func_152(var uParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	vector3 vVar3;

	if (iParam1 < 0 || iParam1 >= 88)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&((uParam0->f_240[iParam1 /*24*/])->f_5)))
	{
		return;
	}
	if ((uParam0->f_240[iParam1 /*24*/])->f_3 == -1)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST((uParam0->f_240[iParam1 /*24*/])->f_4))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS((uParam0->f_240[iParam1 /*24*/])->f_4, true, false) };
		vVar3 = { ENTITY::GET_ENTITY_ROTATION((uParam0->f_240[iParam1 /*24*/])->f_4, 2) };
		if (ANIMSCENE::_0x25557E324489393C((uParam0->f_240[iParam1 /*24*/])->f_3))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY((uParam0->f_240[iParam1 /*24*/])->f_3, &((uParam0->f_240[iParam1 /*24*/])->f_5), (uParam0->f_240[iParam1 /*24*/])->f_4);
		}
		if ((uParam0->f_240[iParam1 /*24*/])->f_15)
		{
			ANIMSCENE::_0xC1193521E3B9FADD((uParam0->f_240[iParam1 /*24*/])->f_4, 0);
			(uParam0->f_240[iParam1 /*24*/])->f_15 = 0;
		}
		if (bParam2)
		{
			func_153(uParam0, iParam1);
		}
		else if (!ENTITY::IS_ENTITY_ATTACHED((uParam0->f_240[iParam1 /*24*/])->f_4))
		{
			ENTITY::FREEZE_ENTITY_POSITION((uParam0->f_240[iParam1 /*24*/])->f_4, true);
			ENTITY::SET_ENTITY_COORDS((uParam0->f_240[iParam1 /*24*/])->f_4, vVar0, true, false, false, true);
			ENTITY::SET_ENTITY_ROTATION((uParam0->f_240[iParam1 /*24*/])->f_4, vVar3, 2, true);
			ENTITY::SET_ENTITY_COLLISION((uParam0->f_240[iParam1 /*24*/])->f_4, false, false);
		}
	}
	(uParam0->f_240[iParam1 /*24*/])->f_3 = -1;
	StringCopy(&((uParam0->f_240[iParam1 /*24*/])->f_5), "", 64);
}

void func_153(var uParam0, int iParam1)
{
	ENTITY::SET_ENTITY_COLLISION((uParam0->f_240[iParam1 /*24*/])->f_4, true, false);
	if (ENTITY::IS_ENTITY_ATTACHED((uParam0->f_240[iParam1 /*24*/])->f_4))
	{
		func_228((uParam0->f_240[iParam1 /*24*/])->f_4, 1, 1);
	}
	ENTITY::FREEZE_ENTITY_POSITION((uParam0->f_240[iParam1 /*24*/])->f_4, false);
	ENTITY::SET_ENTITY_DYNAMIC((uParam0->f_240[iParam1 /*24*/])->f_4, true);
	PHYSICS::ACTIVATE_PHYSICS((uParam0->f_240[iParam1 /*24*/])->f_4);
	ENTITY::SET_ENTITY_HAS_GRAVITY((uParam0->f_240[iParam1 /*24*/])->f_4, true);
}

void func_154(int* iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
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
	if (bParam1)
	{
		if (ENTITY::IS_ENTITY_ATTACHED(*iParam0))
		{
			ENTITY::DETACH_ENTITY(*iParam0, true, true);
		}
	}
	if (bParam2)
	{
		OBJECT::_MARK_OBJECT_FOR_DELETION(*iParam0);
	}
	else
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(iParam0);
	}
}

void func_155(var uParam0, int iParam1, var uParam2, char* sParam3)
{
	(uParam0->f_23[iParam1 /*11*/])->f_1 = uParam2;
	(uParam0->f_23[iParam1 /*11*/])->f_2 = { func_229(sParam3) };
}

void func_156(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_77() - fParam1);
	func_230(uParam0, 1);
	func_231(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_157(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_158(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_232(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

bool func_159(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_160(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

int func_161()
{
	return 1;
	if (Global_1572887->f_12 == 0)
	{
		return 1;
	}
	return Global_40.f_1;
}

var func_162(int iParam0)
{
	return ((*Global_1392915)[iParam0 /*12*/])->f_1;
}

bool func_163(var uParam0)
{
	return (Global_1935630 && uParam0) != 0;
}

bool func_164(int iParam0)
{
	return (MISC::GET_GAME_TIMER() - iParam0) < &Global_1898438;
}

int func_165(int iParam0)
{
	return (Global_1898164->f_1[iParam0 /*5*/])->f_2;
}

void func_166(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_233(iParam1))
		{
			func_234(iParam0, 41788943);
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
			func_235(iParam0, 0, 1);
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
			func_236(iParam0, 0);
			bVar0 = true;
		}
		func_237(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	}
}

int func_167(int iParam0)
{
	if (iParam0 == 1)
	{
		return 6;
	}
	else if (iParam0 == 3)
	{
		return 4;
	}
	else if (iParam0 == 2 || iParam0 == 0)
	{
		return 12;
	}
	return 0;
}

int func_168(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 1)
	{
		if (iParam2 == -1)
		{
			iParam2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
		}
		switch (iParam1)
		{
			case 69:
				switch (iParam2)
				{
					case 0:
						return -1043092861;
					case 1:
						return -855293722;
					case 2:
						return 1321911407;
					case 3:
						return 1633413521;
					case 4:
						return -216756988;
					case 5:
						return 368759504;
					default:
						break;
				}
				return -1043092861;
			case 5:
				switch (iParam2)
				{
					case 0:
						return 68127406;
					case 1:
						return 912158539;
					case 2:
						return 629329300;
					case 3:
						return 1371088384;
					case 4:
						return 1263868216;
					case 5:
						return 2106064285;
					default:
						break;
				}
				return 68127406;
			case 38:
				switch (iParam2)
				{
					case 0:
						return 316456870;
					case 1:
						return -661468397;
					case 2:
						return -431954321;
					case 3:
						return -1139797490;
					case 4:
						return -875384429;
					case 5:
						return 436555239;
					default:
						break;
				}
				return 316456870;
		}
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == -1)
		{
			iParam2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
		}
		switch (iParam1)
		{
			case 76:
				switch (iParam2)
				{
					case 0:
						return -435547108;
					case 1:
						return -128698192;
					case 2:
						return 226255616;
					case 3:
						return -478015708;
					default:
						break;
				}
				return -435547108;
			case 26:
				switch (iParam2)
				{
					case 0:
						return 1752053992;
					case 1:
						return 2013845533;
					case 2:
						return -1950122094;
					case 3:
						return 496214832;
					default:
						break;
				}
				return 1752053992;
			case 92:
				switch (iParam2)
				{
					case 0:
						return 1194574257;
					case 1:
						return 2093821155;
					case 2:
						return -1582008655;
					case 3:
						return -1887776194;
					default:
						break;
				}
				return 1194574257;
		}
	}
	else if (iParam0 == 2 || iParam0 == 0)
	{
		if (iParam2 == -1)
		{
			iParam2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 12);
		}
		switch (iParam1)
		{
			case 5:
				switch (iParam2)
				{
					case 0:
						return 68127406;
					case 1:
						return 912158539;
					case 2:
						return 629329300;
					case 3:
						return 1371088384;
					case 4:
						return 1263868216;
					case 5:
						return 2106064285;
					case 6:
						return 1754977219;
					case 7:
						return -1726696266;
					case 8:
						return -1978394955;
					case 9:
						return -820633060;
					case 10:
						return -44073298;
					case 11:
						return -342303967;
					default:
						break;
				}
				return 68127406;
			case 38:
				switch (iParam2)
				{
					case 0:
						return 316456870;
					case 1:
						return -661468397;
					case 2:
						return -431954321;
					case 3:
						return -1139797490;
					case 4:
						return -875384429;
					case 5:
						return 436555239;
					case 6:
						return 666823002;
					case 7:
						return 4921971;
					case 8:
						return 251738079;
					case 9:
						return 478204342;
					case 10:
						return 777155929;
					case 11:
						return 1841389;
					default:
						break;
				}
				return 316456870;
			case 115:
				switch (iParam2)
				{
					case 0:
						return 2098938291;
					case 1:
						return 1839440580;
					case 2:
						return 680401050;
					case 3:
						return -1892751910;
					case 4:
						return 1174655877;
					case 5:
						return 979024947;
					case 6:
						return -240866616;
					case 7:
						return 1469806260;
					case 8:
						return 317713758;
					case 9:
						return 1934601404;
					case 10:
						return 487194674;
					case 11:
						return -1833636986;
					default:
						break;
				}
				return 2098938291;
			case 76:
				switch (iParam2)
				{
					case 0:
						return -435547108;
					case 1:
						return -128698192;
					case 2:
						return 226255616;
					case 3:
						return -478015708;
					case 4:
						return -194891548;
					case 5:
						return 112776593;
					case 6:
						return 411040031;
					case 7:
						return -1387257155;
					case 8:
						return -1087322498;
					case 9:
						return 2089668521;
					case 10:
						return 1791437852;
					case 11:
						return 1426194578;
					default:
						break;
				}
				return -435547108;
			case 92:
				switch (iParam2)
				{
					case 0:
						return 1194574257;
					case 1:
						return 2093821155;
					case 2:
						return -1582008655;
					case 3:
						return -1887776194;
					case 4:
						return -967360518;
					case 5:
						return -1276208343;
					case 6:
						return -506398995;
					case 7:
						return -815574510;
					case 8:
						return 104710086;
					case 9:
						return -1562249180;
					case 10:
						return -1812506033;
					case 11:
						return -1431009331;
					default:
						break;
				}
				return 1194574257;
			case 105:
				switch (iParam2)
				{
					case 0:
						return -1449777556;
					case 1:
						return 1700437490;
					case 2:
						return -2029723322;
					case 3:
						return 1088279801;
					case 4:
						return 1949514659;
					case 5:
						return 772091720;
					case 6:
						return 1338340040;
					case 7:
						return -321409750;
					case 8:
						return -1233239944;
					case 9:
						return 1051251111;
					case 10:
						return -262949646;
					case 11:
						return -726499920;
					default:
						break;
				}
				return -1449777556;
			case 75:
				switch (iParam2)
				{
					case 0:
						return -1600439903;
					case 1:
						return 1508387900;
					case 2:
						return 1147797824;
					case 3:
						return 1947066503;
					case 4:
						return 1716995354;
					case 5:
						return 401713232;
					case 6:
						return 163056605;
					case 7:
						return 1032745865;
					case 8:
						return 793499396;
					case 9:
						return 883482182;
					case 10:
						return 1123711721;
					case 11:
						return -903083698;
					default:
						break;
				}
				return -1600439903;
		}
	}
	return 0;
}

int func_169(int iParam0)
{
	int iVar0;

	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar0)
	{
		case joaat("s_m_m_blwdealer_01"):
		case joaat("s_m_m_valdealer_01"):
		case joaat("s_m_m_asbdealer_01"):
		case joaat("s_m_m_rhddealer_01"):
		case joaat("s_m_m_vhtdealer_01"):
		case joaat("s_m_m_strdealer_01"):
		case joaat("s_m_m_sddealer_01"):
			return 1;
		default:
			break;
	}
	return 0;
}

int func_170(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4)
{
	if (*uParam3 < ((92 + 31) / 32))
	{
		return 0;
	}
	*iParam4 = 0;
	if (iParam1 == 1 && iParam0 == joaat("a_m_m_dominoesplayers_01"))
	{
		switch (iParam2)
		{
			case -1139797490:
			case -875384429:
			case -661468397:
			case -431954321:
			case 316456870:
			case 436555239:
				func_238(uParam3, 35);
				*iParam4++;
				func_238(uParam3, 36);
				*iParam4++;
				func_238(uParam3, 37);
				*iParam4++;
				func_238(uParam3, 38);
				*iParam4++;
				func_238(uParam3, 39);
				*iParam4++;
				func_238(uParam3, 45);
				*iParam4++;
				func_238(uParam3, 46);
				*iParam4++;
				func_238(uParam3, 47);
				*iParam4++;
				func_238(uParam3, 48);
				*iParam4++;
				func_238(uParam3, 50);
				*iParam4++;
				func_238(uParam3, 51);
				*iParam4++;
				func_238(uParam3, 52);
				*iParam4++;
				func_238(uParam3, 53);
				*iParam4++;
				if (iParam2 == 316456870)
				{
					func_238(uParam3, 63);
					*iParam4++;
					func_238(uParam3, 64);
					*iParam4++;
				}
				func_238(uParam3, 75);
				*iParam4++;
				break;
			case -1043092861:
			case -855293722:
			case -216756988:
			case 368759504:
			case 1321911407:
			case 1633413521:
				func_238(uParam3, 35);
				*iParam4++;
				func_238(uParam3, 36);
				*iParam4++;
				func_238(uParam3, 37);
				*iParam4++;
				func_238(uParam3, 38);
				*iParam4++;
				func_238(uParam3, 45);
				*iParam4++;
				func_238(uParam3, 46);
				*iParam4++;
				func_238(uParam3, 47);
				*iParam4++;
				func_238(uParam3, 48);
				*iParam4++;
				func_238(uParam3, 50);
				*iParam4++;
				func_238(uParam3, 51);
				*iParam4++;
				func_238(uParam3, 52);
				*iParam4++;
				func_238(uParam3, 53);
				*iParam4++;
				func_238(uParam3, 56);
				*iParam4++;
				if (iParam2 == -855293722)
				{
					func_238(uParam3, 63);
					*iParam4++;
					func_238(uParam3, 64);
					*iParam4++;
				}
				func_238(uParam3, 66);
				*iParam4++;
				func_238(uParam3, 67);
				*iParam4++;
				func_238(uParam3, 68);
				*iParam4++;
				func_238(uParam3, 71);
				*iParam4++;
				func_238(uParam3, 75);
				*iParam4++;
				break;
			case 68127406:
			case 629329300:
			case 1371088384:
			case 2106064285:
				func_238(uParam3, 37);
				*iParam4++;
				func_238(uParam3, 38);
				*iParam4++;
				func_238(uParam3, 39);
				*iParam4++;
				func_238(uParam3, 41);
				*iParam4++;
				func_238(uParam3, 50);
				*iParam4++;
				func_238(uParam3, 51);
				*iParam4++;
				func_238(uParam3, 52);
				*iParam4++;
				func_238(uParam3, 53);
				*iParam4++;
				break;
			case 912158539:
			case 1263868216:
				func_238(uParam3, 34);
				*iParam4++;
				func_238(uParam3, 58);
				*iParam4++;
				func_238(uParam3, 61);
				*iParam4++;
				func_238(uParam3, 73);
				*iParam4++;
				func_238(uParam3, 76);
				*iParam4++;
				break;
			default:
				func_238(uParam3, 1);
				*iParam4++;
				func_238(uParam3, 2);
				*iParam4++;
				func_238(uParam3, 3);
				*iParam4++;
				func_238(uParam3, 4);
				*iParam4++;
				func_238(uParam3, 5);
				*iParam4++;
				func_238(uParam3, 6);
				*iParam4++;
				return 0;
		}
	}
	else if (iParam1 == 0 && iParam0 == joaat("a_m_m_cardgameplayers_01"))
	{
		switch (iParam2)
		{
			case -2029723322:
			case -1449777556:
			case -1233239944:
			case -726499920:
			case -321409750:
			case -262949646:
			case 772091720:
			case 1051251111:
			case 1088279801:
			case 1338340040:
			case 1700437490:
			case 1949514659:
				func_238(uParam3, 2);
				*iParam4++;
				func_238(uParam3, 12);
				*iParam4++;
				func_238(uParam3, 16);
				*iParam4++;
				func_238(uParam3, 18);
				*iParam4++;
				func_238(uParam3, 26);
				*iParam4++;
				func_238(uParam3, 37);
				*iParam4++;
				func_238(uParam3, 38);
				*iParam4++;
				func_238(uParam3, 39);
				*iParam4++;
				func_238(uParam3, 48);
				*iParam4++;
				func_238(uParam3, 50);
				*iParam4++;
				break;
			case -1139797490:
			case -875384429:
			case -661468397:
			case -431954321:
			case 1841389:
			case 4921971:
			case 251738079:
			case 316456870:
			case 436555239:
			case 478204342:
			case 666823002:
			case 777155929:
				func_238(uParam3, 1);
				*iParam4++;
				func_238(uParam3, 2);
				*iParam4++;
				func_238(uParam3, 16);
				*iParam4++;
				func_238(uParam3, 18);
				*iParam4++;
				func_238(uParam3, 26);
				*iParam4++;
				func_238(uParam3, 37);
				*iParam4++;
				func_238(uParam3, 38);
				*iParam4++;
				func_238(uParam3, 39);
				*iParam4++;
				func_238(uParam3, 48);
				*iParam4++;
				func_238(uParam3, 50);
				*iParam4++;
				break;
			case -1887776194:
			case -1582008655:
			case -1562249180:
			case -1431009331:
			case -1276208343:
			case -815574510:
			case -506398995:
			case 104710086:
			case 1194574257:
			case 2093821155:
				func_238(uParam3, 3);
				*iParam4++;
				func_238(uParam3, 4);
				*iParam4++;
				func_238(uParam3, 5);
				*iParam4++;
				func_238(uParam3, 6);
				*iParam4++;
				func_238(uParam3, 7);
				*iParam4++;
				func_238(uParam3, 8);
				*iParam4++;
				func_238(uParam3, 9);
				*iParam4++;
				func_238(uParam3, 10);
				*iParam4++;
				func_238(uParam3, 11);
				*iParam4++;
				func_238(uParam3, 12);
				*iParam4++;
				func_238(uParam3, 35);
				*iParam4++;
				func_238(uParam3, 36);
				*iParam4++;
				func_238(uParam3, 45);
				*iParam4++;
				func_238(uParam3, 46);
				*iParam4++;
				func_238(uParam3, 47);
				*iParam4++;
				func_238(uParam3, 51);
				*iParam4++;
				func_238(uParam3, 52);
				*iParam4++;
				func_238(uParam3, 53);
				*iParam4++;
				func_238(uParam3, 56);
				*iParam4++;
				func_238(uParam3, 63);
				*iParam4++;
				func_238(uParam3, 64);
				*iParam4++;
				func_238(uParam3, 66);
				*iParam4++;
				func_238(uParam3, 67);
				*iParam4++;
				func_238(uParam3, 68);
				*iParam4++;
				func_238(uParam3, 71);
				*iParam4++;
				func_238(uParam3, 75);
				*iParam4++;
				break;
			case -1812506033:
			case -967360518:
				func_238(uParam3, 7);
				*iParam4++;
				func_238(uParam3, 8);
				*iParam4++;
				func_238(uParam3, 9);
				*iParam4++;
				func_238(uParam3, 10);
				*iParam4++;
				func_238(uParam3, 11);
				*iParam4++;
				func_238(uParam3, 12);
				*iParam4++;
				func_238(uParam3, 14);
				*iParam4++;
				func_238(uParam3, 17);
				*iParam4++;
				func_238(uParam3, 34);
				*iParam4++;
				func_238(uParam3, 58);
				*iParam4++;
				func_238(uParam3, 73);
				*iParam4++;
				func_238(uParam3, 76);
				*iParam4++;
				break;
			default:
				return 0;
		}
	}
	else if (iParam1 == 2 && iParam0 == joaat("a_m_m_cardgameplayers_01"))
	{
		switch (iParam2)
		{
			case -1387257155:
			case -1087322498:
			case -478015708:
			case -435547108:
			case -194891548:
			case -128698192:
			case 112776593:
			case 226255616:
			case 411040031:
			case 1426194578:
			case 1791437852:
			case 2089668521:
				func_238(uParam3, 1);
				*iParam4++;
				func_238(uParam3, 2);
				*iParam4++;
				func_238(uParam3, 3);
				*iParam4++;
				func_238(uParam3, 4);
				*iParam4++;
				func_238(uParam3, 5);
				*iParam4++;
				func_238(uParam3, 6);
				*iParam4++;
				func_238(uParam3, 7);
				*iParam4++;
				func_238(uParam3, 8);
				*iParam4++;
				func_238(uParam3, 9);
				*iParam4++;
				func_238(uParam3, 10);
				*iParam4++;
				func_238(uParam3, 11);
				*iParam4++;
				func_238(uParam3, 12);
				*iParam4++;
				func_238(uParam3, 16);
				*iParam4++;
				func_238(uParam3, 18);
				*iParam4++;
				func_238(uParam3, 29);
				*iParam4++;
				func_238(uParam3, 35);
				*iParam4++;
				func_238(uParam3, 36);
				*iParam4++;
				func_238(uParam3, 39);
				*iParam4++;
				func_238(uParam3, 45);
				*iParam4++;
				func_238(uParam3, 46);
				*iParam4++;
				func_238(uParam3, 47);
				*iParam4++;
				func_238(uParam3, 48);
				*iParam4++;
				func_238(uParam3, 50);
				*iParam4++;
				func_238(uParam3, 51);
				*iParam4++;
				func_238(uParam3, 52);
				*iParam4++;
				func_238(uParam3, 53);
				*iParam4++;
				func_238(uParam3, 56);
				*iParam4++;
				func_238(uParam3, 63);
				*iParam4++;
				func_238(uParam3, 64);
				*iParam4++;
				func_238(uParam3, 66);
				*iParam4++;
				func_238(uParam3, 67);
				*iParam4++;
				func_238(uParam3, 68);
				*iParam4++;
				func_238(uParam3, 71);
				*iParam4++;
				func_238(uParam3, 75);
				*iParam4++;
				break;
			case -1139797490:
			case -875384429:
			case -661468397:
			case -431954321:
			case 1841389:
			case 4921971:
			case 251738079:
			case 316456870:
			case 436555239:
			case 478204342:
			case 666823002:
			case 777155929:
				func_238(uParam3, 1);
				*iParam4++;
				func_238(uParam3, 2);
				*iParam4++;
				func_238(uParam3, 16);
				*iParam4++;
				func_238(uParam3, 18);
				*iParam4++;
				func_238(uParam3, 26);
				*iParam4++;
				func_238(uParam3, 37);
				*iParam4++;
				func_238(uParam3, 38);
				*iParam4++;
				func_238(uParam3, 39);
				*iParam4++;
				func_238(uParam3, 48);
				*iParam4++;
				func_238(uParam3, 50);
				*iParam4++;
				break;
			case -1978394955:
			case -1726696266:
			case -820633060:
			case -342303967:
			case -44073298:
			case 68127406:
			case 629329300:
			case 912158539:
			case 1263868216:
			case 1371088384:
			case 1754977219:
			case 2106064285:
				func_238(uParam3, 26);
				*iParam4++;
				func_238(uParam3, 28);
				*iParam4++;
				func_238(uParam3, 37);
				*iParam4++;
				func_238(uParam3, 38);
				*iParam4++;
				func_238(uParam3, 41);
				*iParam4++;
				func_238(uParam3, 50);
				*iParam4++;
				break;
			case -1600439903:
			case -903083698:
			case 163056605:
			case 401713232:
			case 793499396:
			case 883482182:
			case 1032745865:
			case 1123711721:
			case 1147797824:
			case 1508387900:
			case 1716995354:
			case 1947066503:
				func_238(uParam3, 1);
				*iParam4++;
				func_238(uParam3, 2);
				*iParam4++;
				func_238(uParam3, 7);
				*iParam4++;
				func_238(uParam3, 8);
				*iParam4++;
				func_238(uParam3, 9);
				*iParam4++;
				func_238(uParam3, 10);
				*iParam4++;
				func_238(uParam3, 11);
				*iParam4++;
				func_238(uParam3, 12);
				*iParam4++;
				func_238(uParam3, 15);
				*iParam4++;
				func_238(uParam3, 16);
				*iParam4++;
				func_238(uParam3, 35);
				*iParam4++;
				func_238(uParam3, 36);
				*iParam4++;
				func_238(uParam3, 39);
				*iParam4++;
				func_238(uParam3, 48);
				*iParam4++;
				func_238(uParam3, 51);
				*iParam4++;
				func_238(uParam3, 52);
				*iParam4++;
				func_238(uParam3, 53);
				*iParam4++;
				func_238(uParam3, 56);
				*iParam4++;
				func_238(uParam3, 63);
				*iParam4++;
				func_238(uParam3, 64);
				*iParam4++;
				func_238(uParam3, 66);
				*iParam4++;
				func_238(uParam3, 67);
				*iParam4++;
				func_238(uParam3, 68);
				*iParam4++;
				func_238(uParam3, 71);
				*iParam4++;
				func_238(uParam3, 75);
				*iParam4++;
				break;
			case -1892751910:
			case -1833636986:
			case 317713758:
			case 680401050:
			case 979024947:
			case 1174655877:
			case 1469806260:
			case 2098938291:
				func_238(uParam3, 1);
				*iParam4++;
				func_238(uParam3, 2);
				*iParam4++;
				func_238(uParam3, 3);
				*iParam4++;
				func_238(uParam3, 4);
				*iParam4++;
				func_238(uParam3, 5);
				*iParam4++;
				func_238(uParam3, 6);
				*iParam4++;
				func_238(uParam3, 7);
				*iParam4++;
				func_238(uParam3, 8);
				*iParam4++;
				func_238(uParam3, 9);
				*iParam4++;
				func_238(uParam3, 10);
				*iParam4++;
				func_238(uParam3, 11);
				*iParam4++;
				func_238(uParam3, 12);
				*iParam4++;
				func_238(uParam3, 16);
				*iParam4++;
				func_238(uParam3, 18);
				*iParam4++;
				func_238(uParam3, 29);
				*iParam4++;
				func_238(uParam3, 35);
				*iParam4++;
				func_238(uParam3, 36);
				*iParam4++;
				func_238(uParam3, 39);
				*iParam4++;
				func_238(uParam3, 45);
				*iParam4++;
				func_238(uParam3, 46);
				*iParam4++;
				func_238(uParam3, 47);
				*iParam4++;
				func_238(uParam3, 48);
				*iParam4++;
				func_238(uParam3, 50);
				*iParam4++;
				func_238(uParam3, 51);
				*iParam4++;
				func_238(uParam3, 52);
				*iParam4++;
				func_238(uParam3, 53);
				*iParam4++;
				func_238(uParam3, 56);
				*iParam4++;
				func_238(uParam3, 63);
				*iParam4++;
				func_238(uParam3, 64);
				*iParam4++;
				func_238(uParam3, 66);
				*iParam4++;
				func_238(uParam3, 67);
				*iParam4++;
				func_238(uParam3, 68);
				*iParam4++;
				func_238(uParam3, 71);
				*iParam4++;
				func_238(uParam3, 75);
				*iParam4++;
				break;
			case -240866616:
			case 487194674:
			case 1839440580:
			case 1934601404:
				func_238(uParam3, 14);
				*iParam4++;
				func_238(uParam3, 17);
				*iParam4++;
				func_238(uParam3, 34);
				*iParam4++;
				func_238(uParam3, 58);
				*iParam4++;
				func_238(uParam3, 73);
				*iParam4++;
				func_238(uParam3, 76);
				*iParam4++;
				break;
			default:
				return 0;
		}
	}
	return 1;
}

bool func_171(var uParam0, int iParam1)
{
	return MISC::_0x8F4F050054005C27(uParam0, iParam1);
}

int func_172(int iParam0, int iParam1, var uParam2, int iParam3)
{
	if (*uParam2 < ((92 + 31) / 32))
	{
		return 0;
	}
	*iParam3 = 0;
	if (iParam1 == 3)
	{
		switch (iParam0)
		{
			case joaat("a_m_m_fivefingerfilletplayers_01"):
				func_238(uParam2, 43);
				*iParam3++;
				func_238(uParam2, 44);
				*iParam3++;
				func_238(uParam2, 54);
				*iParam3++;
				func_238(uParam2, 70);
				*iParam3++;
				break;
			default:
				func_238(uParam2, 43);
				*iParam3++;
				func_238(uParam2, 44);
				*iParam3++;
				func_238(uParam2, 54);
				*iParam3++;
				func_238(uParam2, 70);
				*iParam3++;
				return 0;
		}
	}
	else
	{
		switch (iParam0)
		{
			case joaat("a_m_m_cardgameplayers_01"):
				func_238(uParam2, 1);
				*iParam3++;
				func_238(uParam2, 2);
				*iParam3++;
				func_238(uParam2, 3);
				*iParam3++;
				func_238(uParam2, 4);
				*iParam3++;
				func_238(uParam2, 5);
				*iParam3++;
				func_238(uParam2, 6);
				*iParam3++;
				func_238(uParam2, 7);
				*iParam3++;
				func_238(uParam2, 8);
				*iParam3++;
				func_238(uParam2, 9);
				*iParam3++;
				func_238(uParam2, 10);
				*iParam3++;
				func_238(uParam2, 11);
				*iParam3++;
				func_238(uParam2, 12);
				*iParam3++;
				func_238(uParam2, 13);
				*iParam3++;
				func_238(uParam2, 14);
				*iParam3++;
				func_238(uParam2, 15);
				*iParam3++;
				func_238(uParam2, 16);
				*iParam3++;
				func_238(uParam2, 17);
				*iParam3++;
				func_238(uParam2, 18);
				*iParam3++;
				func_238(uParam2, 29);
				*iParam3++;
				func_238(uParam2, 30);
				*iParam3++;
				func_238(uParam2, 31);
				*iParam3++;
				func_238(uParam2, 35);
				*iParam3++;
				func_238(uParam2, 36);
				*iParam3++;
				func_238(uParam2, 37);
				*iParam3++;
				func_238(uParam2, 38);
				*iParam3++;
				func_238(uParam2, 39);
				*iParam3++;
				func_238(uParam2, 45);
				*iParam3++;
				func_238(uParam2, 46);
				*iParam3++;
				func_238(uParam2, 47);
				*iParam3++;
				func_238(uParam2, 48);
				*iParam3++;
				func_238(uParam2, 49);
				*iParam3++;
				func_238(uParam2, 50);
				*iParam3++;
				func_238(uParam2, 51);
				*iParam3++;
				func_238(uParam2, 52);
				*iParam3++;
				func_238(uParam2, 53);
				*iParam3++;
				func_238(uParam2, 55);
				*iParam3++;
				func_238(uParam2, 56);
				*iParam3++;
				func_238(uParam2, 58);
				*iParam3++;
				func_238(uParam2, 61);
				*iParam3++;
				func_238(uParam2, 63);
				*iParam3++;
				func_238(uParam2, 64);
				*iParam3++;
				func_238(uParam2, 65);
				*iParam3++;
				func_238(uParam2, 66);
				*iParam3++;
				func_238(uParam2, 67);
				*iParam3++;
				func_238(uParam2, 68);
				*iParam3++;
				func_238(uParam2, 71);
				*iParam3++;
				func_238(uParam2, 73);
				*iParam3++;
				func_238(uParam2, 75);
				*iParam3++;
				func_238(uParam2, 76);
				*iParam3++;
				func_238(uParam2, 82);
				*iParam3++;
				func_238(uParam2, 84);
				*iParam3++;
				func_238(uParam2, 26);
				*iParam3++;
				func_238(uParam2, 28);
				*iParam3++;
				func_238(uParam2, 41);
				*iParam3++;
				break;
			case joaat("a_m_m_valtownfolk_01"):
			case joaat("a_m_m_valtownfolk_02"):
			case joaat("s_m_m_valcowpoke_01"):
				func_238(uParam2, 1);
				*iParam3++;
				func_238(uParam2, 2);
				*iParam3++;
				func_238(uParam2, 3);
				*iParam3++;
				func_238(uParam2, 4);
				*iParam3++;
				func_238(uParam2, 5);
				*iParam3++;
				func_238(uParam2, 6);
				*iParam3++;
				func_238(uParam2, 7);
				*iParam3++;
				func_238(uParam2, 8);
				*iParam3++;
				func_238(uParam2, 9);
				*iParam3++;
				func_238(uParam2, 10);
				*iParam3++;
				func_238(uParam2, 11);
				*iParam3++;
				func_238(uParam2, 12);
				*iParam3++;
				func_238(uParam2, 13);
				*iParam3++;
				func_238(uParam2, 14);
				*iParam3++;
				func_238(uParam2, 15);
				*iParam3++;
				func_238(uParam2, 16);
				*iParam3++;
				func_238(uParam2, 17);
				*iParam3++;
				func_238(uParam2, 18);
				*iParam3++;
				func_238(uParam2, 29);
				*iParam3++;
				func_238(uParam2, 30);
				*iParam3++;
				func_238(uParam2, 31);
				*iParam3++;
				func_238(uParam2, 35);
				*iParam3++;
				func_238(uParam2, 36);
				*iParam3++;
				func_238(uParam2, 37);
				*iParam3++;
				func_238(uParam2, 38);
				*iParam3++;
				func_238(uParam2, 39);
				*iParam3++;
				func_238(uParam2, 45);
				*iParam3++;
				func_238(uParam2, 46);
				*iParam3++;
				func_238(uParam2, 47);
				*iParam3++;
				func_238(uParam2, 48);
				*iParam3++;
				func_238(uParam2, 49);
				*iParam3++;
				func_238(uParam2, 50);
				*iParam3++;
				func_238(uParam2, 51);
				*iParam3++;
				func_238(uParam2, 52);
				*iParam3++;
				func_238(uParam2, 53);
				*iParam3++;
				func_238(uParam2, 55);
				*iParam3++;
				func_238(uParam2, 56);
				*iParam3++;
				func_238(uParam2, 58);
				*iParam3++;
				func_238(uParam2, 61);
				*iParam3++;
				func_238(uParam2, 63);
				*iParam3++;
				func_238(uParam2, 64);
				*iParam3++;
				func_238(uParam2, 65);
				*iParam3++;
				func_238(uParam2, 66);
				*iParam3++;
				func_238(uParam2, 67);
				*iParam3++;
				func_238(uParam2, 68);
				*iParam3++;
				func_238(uParam2, 71);
				*iParam3++;
				func_238(uParam2, 73);
				*iParam3++;
				func_238(uParam2, 75);
				*iParam3++;
				func_238(uParam2, 76);
				*iParam3++;
				func_238(uParam2, 82);
				*iParam3++;
				func_238(uParam2, 84);
				*iParam3++;
				break;
			case joaat("u_m_m_valgunsmith_01"):
				func_238(uParam2, 84);
				*iParam3++;
				break;
			case joaat("u_m_m_valdoctor_01"):
				func_238(uParam2, 82);
				*iParam3++;
				break;
			case joaat("a_m_m_blwupperclass_01"):
				func_238(uParam2, 2);
				*iParam3++;
				func_238(uParam2, 12);
				*iParam3++;
				func_238(uParam2, 16);
				*iParam3++;
				func_238(uParam2, 18);
				*iParam3++;
				func_238(uParam2, 26);
				*iParam3++;
				func_238(uParam2, 30);
				*iParam3++;
				func_238(uParam2, 37);
				*iParam3++;
				func_238(uParam2, 39);
				*iParam3++;
				func_238(uParam2, 49);
				*iParam3++;
				func_238(uParam2, 50);
				*iParam3++;
				func_238(uParam2, 75);
				*iParam3++;
				func_238(uParam2, 76);
				*iParam3++;
				break;
			case joaat("a_m_o_blwupperclass_01"):
				func_238(uParam2, 2);
				*iParam3++;
				func_238(uParam2, 12);
				*iParam3++;
				func_238(uParam2, 16);
				*iParam3++;
				func_238(uParam2, 18);
				*iParam3++;
				func_238(uParam2, 26);
				*iParam3++;
				func_238(uParam2, 39);
				*iParam3++;
				func_238(uParam2, 50);
				*iParam3++;
				func_238(uParam2, 75);
				*iParam3++;
				func_238(uParam2, 76);
				*iParam3++;
				break;
			case joaat("u_m_o_blwgeneralstoreowner_01"):
				func_238(uParam2, 86);
				*iParam3++;
				break;
			case joaat("a_m_m_blwforeman_01"):
				func_238(uParam2, 1);
				*iParam3++;
				func_238(uParam2, 2);
				*iParam3++;
				func_238(uParam2, 7);
				*iParam3++;
				func_238(uParam2, 8);
				*iParam3++;
				func_238(uParam2, 9);
				*iParam3++;
				func_238(uParam2, 10);
				*iParam3++;
				func_238(uParam2, 11);
				*iParam3++;
				func_238(uParam2, 12);
				*iParam3++;
				func_238(uParam2, 13);
				*iParam3++;
				func_238(uParam2, 14);
				*iParam3++;
				func_238(uParam2, 15);
				*iParam3++;
				func_238(uParam2, 16);
				*iParam3++;
				func_238(uParam2, 17);
				*iParam3++;
				func_238(uParam2, 18);
				*iParam3++;
				func_238(uParam2, 26);
				*iParam3++;
				func_238(uParam2, 30);
				*iParam3++;
				func_238(uParam2, 31);
				*iParam3++;
				func_238(uParam2, 37);
				*iParam3++;
				func_238(uParam2, 38);
				*iParam3++;
				func_238(uParam2, 39);
				*iParam3++;
				func_238(uParam2, 48);
				*iParam3++;
				func_238(uParam2, 49);
				*iParam3++;
				func_238(uParam2, 50);
				*iParam3++;
				func_238(uParam2, 61);
				*iParam3++;
				func_238(uParam2, 75);
				*iParam3++;
				func_238(uParam2, 76);
				*iParam3++;
				break;
			case joaat("a_m_o_sdupperclass_01"):
				func_238(uParam2, 2);
				*iParam3++;
				func_238(uParam2, 26);
				*iParam3++;
				func_238(uParam2, 28);
				*iParam3++;
				func_238(uParam2, 37);
				*iParam3++;
				func_238(uParam2, 41);
				*iParam3++;
				func_238(uParam2, 50);
				*iParam3++;
				break;
			case joaat("a_m_m_rhdupperclass_01"):
				func_238(uParam2, 2);
				*iParam3++;
				func_238(uParam2, 12);
				*iParam3++;
				func_238(uParam2, 16);
				*iParam3++;
				func_238(uParam2, 18);
				*iParam3++;
				func_238(uParam2, 26);
				*iParam3++;
				func_238(uParam2, 28);
				*iParam3++;
				func_238(uParam2, 29);
				*iParam3++;
				func_238(uParam2, 30);
				*iParam3++;
				func_238(uParam2, 31);
				*iParam3++;
				func_238(uParam2, 37);
				*iParam3++;
				func_238(uParam2, 39);
				*iParam3++;
				func_238(uParam2, 49);
				*iParam3++;
				func_238(uParam2, 50);
				*iParam3++;
				func_238(uParam2, 75);
				*iParam3++;
				break;
			case joaat("a_m_m_rhdforeman_01"):
				func_238(uParam2, 1);
				*iParam3++;
				func_238(uParam2, 2);
				*iParam3++;
				func_238(uParam2, 26);
				*iParam3++;
				func_238(uParam2, 28);
				*iParam3++;
				func_238(uParam2, 29);
				*iParam3++;
				func_238(uParam2, 30);
				*iParam3++;
				func_238(uParam2, 31);
				*iParam3++;
				func_238(uParam2, 37);
				*iParam3++;
				func_238(uParam2, 38);
				*iParam3++;
				func_238(uParam2, 39);
				*iParam3++;
				func_238(uParam2, 49);
				*iParam3++;
				func_238(uParam2, 50);
				*iParam3++;
				func_238(uParam2, 51);
				*iParam3++;
				func_238(uParam2, 52);
				*iParam3++;
				func_238(uParam2, 53);
				*iParam3++;
				func_238(uParam2, 63);
				*iParam3++;
				func_238(uParam2, 64);
				*iParam3++;
				break;
			case joaat("u_m_m_rhdgenstoreowner_01"):
				func_238(uParam2, 80);
				*iParam3++;
				break;
			case joaat("a_m_m_vhtthug_01"):
			case joaat("a_m_m_vhttownfolk_01"):
				func_238(uParam2, 3);
				*iParam3++;
				func_238(uParam2, 4);
				*iParam3++;
				func_238(uParam2, 5);
				*iParam3++;
				func_238(uParam2, 6);
				*iParam3++;
				func_238(uParam2, 14);
				*iParam3++;
				func_238(uParam2, 15);
				*iParam3++;
				func_238(uParam2, 16);
				*iParam3++;
				func_238(uParam2, 17);
				*iParam3++;
				func_238(uParam2, 18);
				*iParam3++;
				func_238(uParam2, 29);
				*iParam3++;
				func_238(uParam2, 30);
				*iParam3++;
				func_238(uParam2, 31);
				*iParam3++;
				func_238(uParam2, 35);
				*iParam3++;
				func_238(uParam2, 36);
				*iParam3++;
				func_238(uParam2, 37);
				*iParam3++;
				func_238(uParam2, 38);
				*iParam3++;
				func_238(uParam2, 45);
				*iParam3++;
				func_238(uParam2, 46);
				*iParam3++;
				func_238(uParam2, 47);
				*iParam3++;
				func_238(uParam2, 48);
				*iParam3++;
				func_238(uParam2, 49);
				*iParam3++;
				func_238(uParam2, 50);
				*iParam3++;
				func_238(uParam2, 51);
				*iParam3++;
				func_238(uParam2, 52);
				*iParam3++;
				func_238(uParam2, 53);
				*iParam3++;
				func_238(uParam2, 55);
				*iParam3++;
				func_238(uParam2, 56);
				*iParam3++;
				func_238(uParam2, 58);
				*iParam3++;
				func_238(uParam2, 61);
				*iParam3++;
				func_238(uParam2, 62);
				*iParam3++;
				func_238(uParam2, 63);
				*iParam3++;
				func_238(uParam2, 64);
				*iParam3++;
				func_238(uParam2, 65);
				*iParam3++;
				func_238(uParam2, 66);
				*iParam3++;
				func_238(uParam2, 67);
				*iParam3++;
				func_238(uParam2, 68);
				*iParam3++;
				func_238(uParam2, 71);
				*iParam3++;
				func_238(uParam2, 73);
				*iParam3++;
				func_238(uParam2, 79);
				*iParam3++;
				break;
			case joaat("a_m_m_blwlaborer_01"):
			case joaat("a_m_m_blwlaborer_02"):
				func_238(uParam2, 1);
				*iParam3++;
				func_238(uParam2, 2);
				*iParam3++;
				func_238(uParam2, 3);
				*iParam3++;
				func_238(uParam2, 4);
				*iParam3++;
				func_238(uParam2, 5);
				*iParam3++;
				func_238(uParam2, 6);
				*iParam3++;
				func_238(uParam2, 7);
				*iParam3++;
				func_238(uParam2, 8);
				*iParam3++;
				func_238(uParam2, 9);
				*iParam3++;
				func_238(uParam2, 10);
				*iParam3++;
				func_238(uParam2, 11);
				*iParam3++;
				func_238(uParam2, 12);
				*iParam3++;
				func_238(uParam2, 13);
				*iParam3++;
				func_238(uParam2, 14);
				*iParam3++;
				func_238(uParam2, 15);
				*iParam3++;
				func_238(uParam2, 16);
				*iParam3++;
				func_238(uParam2, 17);
				*iParam3++;
				func_238(uParam2, 18);
				*iParam3++;
				func_238(uParam2, 30);
				*iParam3++;
				func_238(uParam2, 31);
				*iParam3++;
				func_238(uParam2, 35);
				*iParam3++;
				func_238(uParam2, 36);
				*iParam3++;
				func_238(uParam2, 37);
				*iParam3++;
				func_238(uParam2, 38);
				*iParam3++;
				func_238(uParam2, 39);
				*iParam3++;
				func_238(uParam2, 45);
				*iParam3++;
				func_238(uParam2, 46);
				*iParam3++;
				func_238(uParam2, 47);
				*iParam3++;
				func_238(uParam2, 48);
				*iParam3++;
				func_238(uParam2, 49);
				*iParam3++;
				func_238(uParam2, 50);
				*iParam3++;
				func_238(uParam2, 51);
				*iParam3++;
				func_238(uParam2, 52);
				*iParam3++;
				func_238(uParam2, 53);
				*iParam3++;
				func_238(uParam2, 61);
				*iParam3++;
				func_238(uParam2, 75);
				*iParam3++;
				func_238(uParam2, 76);
				*iParam3++;
				break;
			case joaat("a_m_m_middlesdtownfolk_03"):
			case joaat("a_m_m_middlesdtownfolk_02"):
			case joaat("a_m_m_middlesdtownfolk_01"):
				func_238(uParam2, 1);
				*iParam3++;
				func_238(uParam2, 2);
				*iParam3++;
				func_238(uParam2, 26);
				*iParam3++;
				func_238(uParam2, 28);
				*iParam3++;
				func_238(uParam2, 29);
				*iParam3++;
				func_238(uParam2, 30);
				*iParam3++;
				func_238(uParam2, 31);
				*iParam3++;
				func_238(uParam2, 34);
				*iParam3++;
				func_238(uParam2, 37);
				*iParam3++;
				func_238(uParam2, 38);
				*iParam3++;
				func_238(uParam2, 39);
				*iParam3++;
				func_238(uParam2, 41);
				*iParam3++;
				func_238(uParam2, 49);
				*iParam3++;
				func_238(uParam2, 50);
				*iParam3++;
				func_238(uParam2, 51);
				*iParam3++;
				func_238(uParam2, 52);
				*iParam3++;
				func_238(uParam2, 53);
				*iParam3++;
				break;
			case joaat("a_m_m_emrfarmhand_01"):
				func_238(uParam2, 1);
				*iParam3++;
				func_238(uParam2, 2);
				*iParam3++;
				func_238(uParam2, 3);
				*iParam3++;
				func_238(uParam2, 4);
				*iParam3++;
				func_238(uParam2, 5);
				*iParam3++;
				func_238(uParam2, 6);
				*iParam3++;
				func_238(uParam2, 7);
				*iParam3++;
				func_238(uParam2, 8);
				*iParam3++;
				func_238(uParam2, 9);
				*iParam3++;
				func_238(uParam2, 10);
				*iParam3++;
				func_238(uParam2, 11);
				*iParam3++;
				func_238(uParam2, 12);
				*iParam3++;
				func_238(uParam2, 13);
				*iParam3++;
				func_238(uParam2, 14);
				*iParam3++;
				func_238(uParam2, 15);
				*iParam3++;
				func_238(uParam2, 16);
				*iParam3++;
				func_238(uParam2, 17);
				*iParam3++;
				func_238(uParam2, 18);
				*iParam3++;
				func_238(uParam2, 29);
				*iParam3++;
				func_238(uParam2, 30);
				*iParam3++;
				func_238(uParam2, 31);
				*iParam3++;
				func_238(uParam2, 35);
				*iParam3++;
				func_238(uParam2, 36);
				*iParam3++;
				func_238(uParam2, 37);
				*iParam3++;
				func_238(uParam2, 38);
				*iParam3++;
				func_238(uParam2, 45);
				*iParam3++;
				func_238(uParam2, 46);
				*iParam3++;
				func_238(uParam2, 47);
				*iParam3++;
				func_238(uParam2, 48);
				*iParam3++;
				func_238(uParam2, 49);
				*iParam3++;
				func_238(uParam2, 50);
				*iParam3++;
				func_238(uParam2, 51);
				*iParam3++;
				func_238(uParam2, 52);
				*iParam3++;
				func_238(uParam2, 53);
				*iParam3++;
				func_238(uParam2, 55);
				*iParam3++;
				func_238(uParam2, 56);
				*iParam3++;
				func_238(uParam2, 58);
				*iParam3++;
				func_238(uParam2, 61);
				*iParam3++;
				func_238(uParam2, 65);
				*iParam3++;
				func_238(uParam2, 66);
				*iParam3++;
				func_238(uParam2, 67);
				*iParam3++;
				func_238(uParam2, 68);
				*iParam3++;
				func_238(uParam2, 71);
				*iParam3++;
				func_238(uParam2, 73);
				*iParam3++;
				func_238(uParam2, 75);
				*iParam3++;
				func_238(uParam2, 76);
				*iParam3++;
				break;
			case joaat("a_m_m_tumtownfolk_01"):
			case joaat("a_m_m_tumtownfolk_02"):
				func_238(uParam2, 45);
				*iParam3++;
				func_238(uParam2, 46);
				*iParam3++;
				func_238(uParam2, 47);
				*iParam3++;
				func_238(uParam2, 48);
				*iParam3++;
				func_238(uParam2, 49);
				*iParam3++;
				func_238(uParam2, 50);
				*iParam3++;
				func_238(uParam2, 51);
				*iParam3++;
				func_238(uParam2, 52);
				*iParam3++;
				func_238(uParam2, 53);
				*iParam3++;
				func_238(uParam2, 55);
				*iParam3++;
				func_238(uParam2, 56);
				*iParam3++;
				func_238(uParam2, 58);
				*iParam3++;
				func_238(uParam2, 61);
				*iParam3++;
				func_238(uParam2, 63);
				*iParam3++;
				func_238(uParam2, 64);
				*iParam3++;
				func_238(uParam2, 65);
				*iParam3++;
				func_238(uParam2, 66);
				*iParam3++;
				func_238(uParam2, 67);
				*iParam3++;
				func_238(uParam2, 68);
				*iParam3++;
				func_238(uParam2, 71);
				*iParam3++;
				func_238(uParam2, 73);
				*iParam3++;
				func_238(uParam2, 74);
				*iParam3++;
				func_238(uParam2, 75);
				*iParam3++;
				func_238(uParam2, 76);
				*iParam3++;
				break;
			case joaat("s_m_m_blwdealer_01"):
			case joaat("s_m_m_rhddealer_01"):
				func_238(uParam2, 87);
				*iParam3++;
				func_238(uParam2, 89);
				*iParam3++;
				func_238(uParam2, 90);
				*iParam3++;
				func_238(uParam2, 91);
				*iParam3++;
				break;
			case joaat("s_m_m_vhtdealer_01"):
				func_238(uParam2, 62);
				*iParam3++;
				func_238(uParam2, 79);
				*iParam3++;
				break;
			default:
				func_238(uParam2, 1);
				*iParam3++;
				func_238(uParam2, 2);
				*iParam3++;
				func_238(uParam2, 3);
				*iParam3++;
				func_238(uParam2, 4);
				*iParam3++;
				func_238(uParam2, 5);
				*iParam3++;
				func_238(uParam2, 6);
				*iParam3++;
				return 0;
		}
	}
	return 1;
}

void func_173(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	DECORATOR::DECOR_SET_BOOL(iParam0, "PedSeatedForMinigame", true);
}

void func_174(var uParam0)
{
	func_239(uParam0, uParam0->f_3 + 1);
}

int func_175(int iParam0, int iParam1)
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

float func_176(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

bool func_177(var uParam0, vector3 vParam1, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	vector3 vVar3;

	fVar2 = -1f;
	*iParam4 = -1;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!MISC::IS_BIT_SET(uParam0->f_83, iVar0) && !MISC::IS_BIT_SET(uParam0->f_82, iVar0))
		{
			func_209(uParam0->f_1, uParam0->f_3, uParam0->f_6, iVar0, &vVar3, 0);
			fVar1 = func_240(vParam1, vVar3);
			if (fVar1 < fVar2 || fVar2 == -1f)
			{
				fVar2 = fVar1;
				*iParam4 = iVar0;
			}
		}
		iVar0++;
	}
	return *iParam4 != -1;
}

void func_178(var uParam0)
{
	uParam0->f_3 = 100;
}

int func_179()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
	{
		return 1;
	}
	return 0;
}

void func_180(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1[4];
	var uVar6[4];

	func_241(iParam2, &uVar1, &uVar6, 4, 10);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_242(uParam0, iParam1, iVar0, &(uVar1[iVar0]), &(uVar6[iVar0]), 0);
		iVar0++;
	}
}

char* func_181(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	switch (iVar0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return "SCRIPT@MINI_GAME@BLACKJACK@PREPOSTGAME_PLAYER";
		case 4:
			return "SCRIPT@MINI_GAME@BLACKJACK@PREPOSTGAME_DEALER";
		case 10:
			return "SCRIPT@MINI_GAME@BLACKJACK@PREPOSTGAME_DEAL";
		case 11:
			return "SCRIPT@MINI_GAME@BLACKJACK@PREPOSTGAME_RETRIEVE_CARDS";
		case 12:
			return "SCRIPT@MINI_GAME@BLACKJACK@PREPOSTGAME_RETRIEVE_ORIGINAL_BETS";
		case 5:
			return "SCRIPT@MINI_GAME@BLACKJACK@PREPOSTGAME_HIT_SEAT_01";
		case 6:
			return "SCRIPT@MINI_GAME@BLACKJACK@PREPOSTGAME_HIT_SEAT_02";
		case 7:
			return "SCRIPT@MINI_GAME@BLACKJACK@PREPOSTGAME_HIT_SEAT_03";
		case 8:
			return "SCRIPT@MINI_GAME@BLACKJACK@PREPOSTGAME_HIT_SEAT_04";
		case 9:
			return "SCRIPT@MINI_GAME@BLACKJACK@PREPOSTGAME_HIT_SELF";
		case 13:
			return "SCRIPT@MINI_GAME@BLACKJACK@PREPOSTGAME_CLEANUP";
		case 14:
			return "SCRIPT@MINI_GAME@BLACKJACK@PREPOSTGAME_OUTCOME_SEAT_01";
		case 15:
			return "SCRIPT@MINI_GAME@BLACKJACK@PREPOSTGAME_OUTCOME_SEAT_02";
		case 16:
			return "SCRIPT@MINI_GAME@BLACKJACK@PREPOSTGAME_OUTCOME_SEAT_03";
		case 17:
			return "SCRIPT@MINI_GAME@BLACKJACK@PREPOSTGAME_OUTCOME_SEAT_04";
		default:
			break;
	}
	return "";
}

char* func_182(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SCRIPT@MINI_GAME@BLACKJACK@PREPOSTGAME_PLAYER";
		case 1:
			return "SCRIPT@MINI_GAME@BLACKJACK@PREPOSTGAME_PLAYER_02";
		default:
			break;
	}
	return "SCRIPT@MINI_GAME@BLACKJACK@PREPOSTGAME_PLAYER";
}

int func_183(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
{
	if (iParam1 < 0 || iParam1 >= 18)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	func_150(uParam0->f_2353[iParam1 /*29*/], 1);
	if ((uParam0->f_2353[iParam1 /*29*/])->f_1 == -1 || !ANIMSCENE::_0x25557E324489393C((uParam0->f_2353[iParam1 /*29*/])->f_1))
	{
		(uParam0->f_2353[iParam1 /*29*/])->f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam2, iParam4, sParam3, false, true);
		if (!ANIMSCENE::_0x25557E324489393C((uParam0->f_2353[iParam1 /*29*/])->f_1))
		{
			return 0;
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		{
		}
		ANIMSCENE::LOAD_ANIM_SCENE((uParam0->f_2353[iParam1 /*29*/])->f_1);
	}
	StringCopy(&((uParam0->f_2353[iParam1 /*29*/])->f_12), sParam3, 64);
	if (ANIMSCENE::_0x25557E324489393C((uParam0->f_2353[iParam1 /*29*/])->f_1))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		{
		}
		StringCopy(&((uParam0->f_2353[iParam1 /*29*/])->f_4), sParam2, 64);
		func_150(uParam0->f_2353[iParam1 /*29*/], 2);
		return 1;
	}
	return 0;
}

bool func_184(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 18)
	{
		return false;
	}
	return &uParam0->f_2353[iParam1 /*29*/] == 4;
}

int func_185(var uParam0, int iParam1, var uParam2, char* sParam3)
{
	if (ENTITY::IS_ENTITY_DEAD(uParam2->f_11))
	{
		return 0;
	}
	if (!func_243(uParam0, iParam1, uParam2->f_11) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uParam2->f_11, -1))
	{
		func_60(uParam0, uParam2, 0);
	}
	if (uParam2->f_1 < 4 || uParam2->f_1 > 5)
	{
		return 0;
	}
	uParam2->f_20 = iParam1;
	StringCopy(&(uParam2->f_21), sParam3, 64);
	MISC::SET_BIT(&((uParam0->f_2353[uParam2->f_20 /*29*/])->f_3), uParam2->f_13);
	if (ANIMSCENE::_GET_ANIM_SCENE_PED((uParam0->f_2353[iParam1 /*29*/])->f_1, sParam3, false) != uParam2->f_11)
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY((uParam0->f_2353[iParam1 /*29*/])->f_1, sParam3, uParam2->f_11, 0);
	}
	return 1;
}

int func_186(var uParam0, int iParam1, vector3 vParam2, vector3 vParam5)
{
	int iVar0;

	if (iParam1 < 0 || iParam1 >= 18)
	{
		return 0;
	}
	if (!ANIMSCENE::_0xCBFC7725DE6CE2E0((uParam0->f_2353[iParam1 /*29*/])->f_1, 0))
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN((uParam0->f_2353[iParam1 /*29*/])->f_1, vParam2, vParam5, 2);
		ANIMSCENE::START_ANIM_SCENE((uParam0->f_2353[iParam1 /*29*/])->f_1);
		(uParam0->f_2353[iParam1 /*29*/])->f_20 = { (uParam0->f_2353[iParam1 /*29*/])->f_12 };
		StringCopy(&((uParam0->f_2353[iParam1 /*29*/])->f_12), "", 64);
		(uParam0->f_2353[iParam1 /*29*/])->f_2 = 0f;
		iVar0 = 0;
		while (iVar0 < 88)
		{
			if ((uParam0->f_240[iVar0 /*24*/])->f_14 == 1)
			{
				ANIMSCENE::_0xC1193521E3B9FADD((uParam0->f_240[iVar0 /*24*/])->f_4, 1);
				(uParam0->f_240[iVar0 /*24*/])->f_14 = 0;
				(uParam0->f_240[iVar0 /*24*/])->f_15 = 1;
			}
			iVar0++;
		}
		func_150(uParam0->f_2353[iParam1 /*29*/], 5);
		return 1;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&((uParam0->f_2353[iParam1 /*29*/])->f_12)))
	{
		if (!ANIMSCENE::_0xDF7B5144E25CD3FE((uParam0->f_2353[iParam1 /*29*/])->f_1, &((uParam0->f_2353[iParam1 /*29*/])->f_12)))
		{
			return 0;
		}
		if (!ANIMSCENE::_0x23E33CB9F4A3F547((uParam0->f_2353[iParam1 /*29*/])->f_1, &((uParam0->f_2353[iParam1 /*29*/])->f_12)))
		{
			return 0;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&((uParam0->f_2353[iParam1 /*29*/])->f_20)))
		{
			ANIMSCENE::_0xAE6ADA8FE7E84ACC((uParam0->f_2353[iParam1 /*29*/])->f_1, &((uParam0->f_2353[iParam1 /*29*/])->f_20));
		}
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL((uParam0->f_2353[iParam1 /*29*/])->f_1, &((uParam0->f_2353[iParam1 /*29*/])->f_12), true);
		(uParam0->f_2353[iParam1 /*29*/])->f_20 = { (uParam0->f_2353[iParam1 /*29*/])->f_12 };
		StringCopy(&((uParam0->f_2353[iParam1 /*29*/])->f_12), "", 64);
		(uParam0->f_2353[iParam1 /*29*/])->f_2 = 0f;
		iVar0 = 0;
		while (iVar0 < 88)
		{
			if ((uParam0->f_240[iVar0 /*24*/])->f_14 == 1)
			{
				ANIMSCENE::_0xC1193521E3B9FADD((uParam0->f_240[iVar0 /*24*/])->f_4, 1);
				(uParam0->f_240[iVar0 /*24*/])->f_14 = 0;
			}
			iVar0++;
		}
		func_150(uParam0->f_2353[iParam1 /*29*/], 5);
		return 1;
	}
	return 0;
}

int func_187(int iParam0, vector3 vParam1, float fParam4, int iParam5, var uParam6, var uParam7, int iParam8)
{
	vector3 vVar0;
	float fVar3;
	var uVar4;

	if (!func_160(iParam0))
	{
		return 0;
	}
	if (!func_244(iParam0, iParam5, &vVar0))
	{
		return 0;
	}
	*uParam6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, fParam4, vVar0) };
	if (iParam8 == 1)
	{
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam6 + Vector(0.1f, 0f, 0f), &uVar4, 0))
		{
			uParam6->f_2 = uVar4;
		}
	}
	if (!func_211(iParam0, iParam5, &fVar3))
	{
		return 0;
	}
	*uParam7 = (fParam4 + fVar3);
	if (*uParam7 > 360f)
	{
		*uParam7 = (*uParam7 - 360f);
	}
	if (*uParam7 < -360f)
	{
		*uParam7 = (*uParam7 + 360f);
	}
	return 1;
}

void func_188(int iParam0, int iParam1, int iParam2)
{
	float fVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 10)
	{
		if (iVar1 >= iParam2 && iVar1 < (iParam2 + iParam1))
		{
			fVar0 = 0f;
		}
		else
		{
			fVar0 = 1f;
		}
		switch (iVar1)
		{
			case 0:
				ENTITY::_0x669655FFB29EF1A9(iParam0, 2, "Chip01_Ctrl", fVar0);
				break;
			case 1:
				ENTITY::_0x669655FFB29EF1A9(iParam0, 2, "Chip02_Ctrl", fVar0);
				break;
			case 2:
				ENTITY::_0x669655FFB29EF1A9(iParam0, 2, "Chip03_Ctrl", fVar0);
				break;
			case 3:
				ENTITY::_0x669655FFB29EF1A9(iParam0, 2, "Chip04_Ctrl", fVar0);
				break;
			case 4:
				ENTITY::_0x669655FFB29EF1A9(iParam0, 2, "Chip05_Ctrl", fVar0);
				break;
			case 5:
				ENTITY::_0x669655FFB29EF1A9(iParam0, 2, "Chip06_Ctrl", fVar0);
				break;
			case 6:
				ENTITY::_0x669655FFB29EF1A9(iParam0, 2, "Chip07_Ctrl", fVar0);
				break;
			case 7:
				ENTITY::_0x669655FFB29EF1A9(iParam0, 2, "Chip08_Ctrl", fVar0);
				break;
			case 8:
				ENTITY::_0x669655FFB29EF1A9(iParam0, 2, "Chip09_Ctrl", fVar0);
				break;
			case 9:
				ENTITY::_0x669655FFB29EF1A9(iParam0, 2, "Chip10_Ctrl", fVar0);
				break;
		}
		iVar1++;
	}
}

void func_189(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	switch (iParam1)
	{
		case 0:
			OBJECT::_SET_OBJECT_TEXTURE_VARIATION(iParam0, 3);
			break;
		case 1:
			OBJECT::_SET_OBJECT_TEXTURE_VARIATION(iParam0, 18);
			break;
		case 2:
			OBJECT::_SET_OBJECT_TEXTURE_VARIATION(iParam0, 21);
			break;
		case 3:
			OBJECT::_SET_OBJECT_TEXTURE_VARIATION(iParam0, 24);
			break;
		case 4:
			OBJECT::_SET_OBJECT_TEXTURE_VARIATION(iParam0, 27);
			break;
		case 5:
			OBJECT::_SET_OBJECT_TEXTURE_VARIATION(iParam0, 15);
			break;
		default:
			break;
	}
}

int func_190(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_94)
	{
		if (uParam0->f_94[iVar0 /*29*/] && (uParam0->f_94[iVar0 /*29*/])->f_11 == iParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_191(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 == 4)
	{
		if (func_245(uParam0, &Local_1))
		{
			uParam0->f_2885 = 1;
		}
		func_1(uParam0->f_2);
		if (ENTITY::DOES_ENTITY_EXIST((uParam0->f_240[61 /*24*/])->f_4))
		{
			func_228((uParam0->f_240[61 /*24*/])->f_4, 1, 1);
			func_152(uParam0, 61, 1);
			func_13(uParam0, 1);
		}
	}
}

void func_192(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 88)
	{
		if ((uParam0->f_240[iVar0 /*24*/])->f_3 == (uParam0->f_2353[iParam1 /*29*/])->f_1)
		{
			func_152(uParam0, iVar0, bParam2);
		}
		iVar0++;
	}
}

void func_193(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	var uVar8;
	char* sVar9;

	iVar0 = uParam1->f_12;
	iVar1 = (0 + iVar0);
	if (iVar0 < 0 || iVar0 >= 4)
	{
		return;
	}
	switch ((uParam2->f_5[iVar0 /*37*/])->f_5)
	{
		case 0:
			func_246(uParam2->f_5[iVar0 /*37*/]);
			break;
		case 1:
			sVar9 = func_182((uParam2->f_5[iVar0 /*37*/])->f_1);
			if (func_183(uParam0, iVar1, sVar9, "PBL_Bet", 2))
			{
				func_246(uParam2->f_5[iVar0 /*37*/]);
			}
			break;
		case 2:
			if (func_25(&((uParam2->f_5[iVar0 /*37*/])->f_2)) < (uParam2->f_5[iVar0 /*37*/])->f_6)
			{
				return;
			}
			func_247(uParam0, iVar0, 0, &vVar2, &vVar5, 0, 1);
			func_125(uParam0, (55 + iVar0), func_127((55 + iVar0), 0), vVar2, vVar5, 0, 0);
			func_246(uParam2->f_5[iVar0 /*37*/]);
			break;
		case 3:
			if (func_248(uParam0, (55 + iVar0)))
			{
				func_249((uParam0->f_240[(55 + iVar0) /*24*/])->f_4, 5, 4);
				sVar9 = func_182((uParam2->f_5[iVar0 /*37*/])->f_1);
				func_246(uParam2->f_5[iVar0 /*37*/]);
			}
			break;
		case 4:
			if (!func_184(uParam0, iVar1))
			{
				return;
			}
			func_250(uParam0, iVar1, (55 + iVar0), "PREPOSTGAMECHIPS", 0);
			if (iVar0 == 4)
			{
				func_185(uParam0, iVar1, uParam1, "DEALER");
				if (!func_186(uParam0, iVar1, uParam0->f_3, 0f, 0f, uParam0->f_6))
				{
					return;
				}
			}
			else
			{
				func_185(uParam0, iVar1, uParam1, "pre_postgame_blackjack_player");
				func_187(0, uParam0->f_3, uParam0->f_6, iVar0, &vVar2, &uVar8, 0);
				if (!func_186(uParam0, iVar1, vVar2 + Vector(uParam2->f_300, 0f, 0f), 0f, 0f, uVar8))
				{
					return;
				}
			}
			func_132(uParam0, uParam1->f_11, "MINIGAME_PLACE_BID");
			func_246(uParam2->f_5[iVar0 /*37*/]);
			break;
		case 5:
			if (func_251(uParam0, iVar1, "S_Idle") || ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_11, -1921404755))
			{
				(uParam2->f_5[iVar0 /*37*/])->f_9 = 1;
				func_133(uParam2->f_5[iVar0 /*37*/], 1, 0, 0);
			}
			break;
	}
}

void func_194(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar8;
	char* sVar11;
	var uVar12;
	int iVar14;

	iVar2 = uParam1->f_12;
	iVar3 = 10;
	iVar4 = 4;
	if (iVar2 != 4)
	{
		func_252(uParam2->f_5[iVar2 /*37*/]);
		return;
	}
	switch ((uParam2->f_5[iVar2 /*37*/])->f_5)
	{
		case 0:
			func_246(uParam2->f_5[iVar2 /*37*/]);
			break;
		case 1:
			func_253(&(uParam2->f_193));
			func_254(&(uParam2->f_193));
			iVar0 = 0;
			while (iVar0 < 5)
			{
				func_255(&((uParam2->f_5[iVar0 /*37*/])->f_12));
				(uParam2->f_5[iVar0 /*37*/])->f_36 = 0;
				if (func_148(uParam0, iVar0))
				{
					if (func_256(&(uParam2->f_193), &uVar12))
					{
						func_257(&((uParam2->f_5[iVar0 /*37*/])->f_12), &uVar12);
					}
					if (func_256(&(uParam2->f_193), &uVar12))
					{
						func_257(&((uParam2->f_5[iVar0 /*37*/])->f_12), &uVar12);
					}
					(uParam2->f_5[iVar0 /*37*/])->f_36 = func_258(&((uParam2->f_5[iVar0 /*37*/])->f_12), -1);
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (func_148(uParam0, iVar0))
				{
					func_214(&iVar14, *((uParam2->f_5[iVar0 /*37*/])->f_12[0 /*2*/]), iLocal_0, 0);
					iVar1 = (11 + iVar0);
					func_259(uParam0, iVar1, iVar14, iVar0, 1);
					func_214(&iVar14, *((uParam2->f_5[iVar0 /*37*/])->f_12[1 /*2*/]), iLocal_0, 0);
					iVar1 = (15 + iVar0);
					func_259(uParam0, iVar1, iVar14, iVar0, 1);
				}
				iVar0++;
			}
			func_214(&iVar14, *((uParam2->f_5[4 /*37*/])->f_12[0 /*2*/]), iLocal_0, 0);
			iVar1 = 0;
			func_259(uParam0, iVar1, iVar14, 4, 1);
			func_214(&iVar14, *((uParam2->f_5[4 /*37*/])->f_12[1 /*2*/]), iLocal_0, 0);
			iVar1 = 1;
			func_259(uParam0, iVar1, iVar14, 4, 1);
			func_246(uParam2->f_5[iVar2 /*37*/]);
			break;
		case 2:
			if (func_25(&((uParam2->f_5[iVar2 /*37*/])->f_2)) < (uParam2->f_5[iVar2 /*37*/])->f_6)
			{
				return;
			}
			func_132(uParam0, uParam1->f_11, "MINIGAME_DEALER_CLOSED_BETS");
			sVar11 = func_181(iVar4, 0);
			if (!func_183(uParam0, iVar4, sVar11, "PBL_Shuffle", 2))
			{
				return;
			}
			func_260(uParam0);
			func_126(uParam0, &uVar5, &uVar8, 1);
			uParam2->f_303 = func_261(uParam0, 4);
			func_246(uParam2->f_5[iVar2 /*37*/]);
			break;
		case 3:
			if (!func_47(uParam0))
			{
				return;
			}
			if (!func_184(uParam0, iVar4))
			{
				return;
			}
			func_250(uParam0, iVar4, 61, func_262(61), 0);
			func_185(uParam0, iVar4, uParam1, "DEALER");
			if (func_186(uParam0, iVar4, uParam0->f_3, 0f, 0f, uParam0->f_6))
			{
				func_246(uParam2->f_5[iVar2 /*37*/]);
			}
			break;
		case 4:
			if (func_263(uParam0, iVar4))
			{
				if (func_260(uParam0))
				{
					func_246(uParam2->f_5[iVar2 /*37*/]);
				}
			}
			break;
		case 5:
			if (!func_264(uParam0, uParam2))
			{
				return;
			}
			if (ENTITY::_0x0B7CB1300CBFE19C(uParam1->f_11, 1))
			{
				TASK::STOP_ANIM_PLAYBACK(uParam1->f_11, 0, false);
			}
			if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED((uParam0->f_240[61 /*24*/])->f_4))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY((uParam0->f_240[61 /*24*/])->f_4, uParam1->f_11, PED::GET_PED_BONE_INDEX(uParam1->f_11, 37709), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0, 0);
			}
			func_246(uParam2->f_5[iVar2 /*37*/]);
			break;
		case 6:
			if (func_263(uParam0, iVar3))
			{
				func_133(uParam2->f_5[iVar2 /*37*/], 1, 0, 0);
			}
			break;
	}
}

void func_195(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar4;
	int iVar5;
	char* sVar6;

	iVar0 = uParam1->f_12;
	iVar1 = (5 + uParam2->f_301);
	if (iVar0 != 4)
	{
		func_252(uParam2->f_5[iVar0 /*37*/]);
		return;
	}
	switch ((uParam2->f_5[iVar0 /*37*/])->f_5)
	{
		case 0:
			func_246(uParam2->f_5[iVar0 /*37*/]);
			break;
		case 1:
			iVar5 = ((11 + (4 * (uParam2->f_5[uParam2->f_301 /*37*/])->f_12.f_23)) + uParam2->f_301);
			if (func_256(&(uParam2->f_193), &Var2))
			{
				func_257(&((uParam2->f_5[uParam2->f_301 /*37*/])->f_12), &Var2);
				(uParam2->f_5[uParam2->f_301 /*37*/])->f_36 = func_258(&((uParam2->f_5[uParam2->f_301 /*37*/])->f_12), -1);
			}
			func_214(&iVar4, Var2, iLocal_0, 0);
			func_259(uParam0, iVar5, iVar4, 0, 1);
			func_246(uParam2->f_5[iVar0 /*37*/]);
			break;
		case 2:
			if (func_25(&((uParam2->f_5[iVar0 /*37*/])->f_2)) < (uParam2->f_5[iVar0 /*37*/])->f_6)
			{
				return;
			}
			func_246(uParam2->f_5[iVar0 /*37*/]);
			break;
		case 3:
			iVar5 = ((11 + (4 * ((uParam2->f_5[uParam2->f_301 /*37*/])->f_12.f_23 - 1))) + uParam2->f_301);
			if (func_248(uParam0, iVar5))
			{
				if (func_265(uParam0, uParam2))
				{
					func_246(uParam2->f_5[iVar0 /*37*/]);
				}
			}
			break;
		case 4:
			if (!func_266(uParam0, uParam2))
			{
				return;
			}
			func_246(uParam2->f_5[iVar0 /*37*/]);
			break;
		case 5:
			if (func_263(uParam0, iVar1))
			{
				sVar6 = func_267((uParam2->f_5[iVar0 /*37*/])->f_36);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar6))
				{
					func_132(uParam0, uParam1->f_11, sVar6);
				}
				if (func_268(uParam2->f_5[uParam2->f_301 /*37*/]))
				{
					func_133(uParam2->f_5[iVar0 /*37*/], 1, 0, 0);
					return;
				}
				func_246(uParam2->f_5[iVar0 /*37*/]);
			}
			break;
		case 6:
			func_133(uParam2->f_5[iVar0 /*37*/], 1, 0, 0);
			break;
	}
}

void func_196(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar4;
	int iVar5;

	iVar0 = uParam1->f_12;
	iVar1 = 9;
	if (iVar0 != 4 || (uParam2->f_5[iVar0 /*37*/])->f_12.f_23 > 11)
	{
		func_252(uParam2->f_5[iVar0 /*37*/]);
		return;
	}
	switch ((uParam2->f_5[iVar0 /*37*/])->f_5)
	{
		case 0:
			func_246(uParam2->f_5[iVar0 /*37*/]);
			break;
		case 1:
			if (func_25(&((uParam2->f_5[iVar0 /*37*/])->f_2)) < (uParam2->f_5[iVar0 /*37*/])->f_6)
			{
				return;
			}
			if ((uParam2->f_5[4 /*37*/])->f_12.f_23 == 2)
			{
				if (func_269(uParam0))
				{
					func_246(uParam2->f_5[iVar0 /*37*/]);
				}
			}
			else
			{
				func_270(uParam2->f_5[iVar0 /*37*/], 4);
			}
			break;
		case 2:
			if (!func_271(uParam0))
			{
				return;
			}
			func_246(uParam2->f_5[iVar0 /*37*/]);
			break;
		case 3:
			if (func_263(uParam0, iVar1))
			{
				func_246(uParam2->f_5[iVar0 /*37*/]);
			}
			break;
		case 4:
			iVar5 = (0 + (uParam2->f_5[4 /*37*/])->f_12.f_23);
			if (func_256(&(uParam2->f_193), &Var2))
			{
				func_257(&((uParam2->f_5[4 /*37*/])->f_12), &Var2);
				(uParam2->f_5[4 /*37*/])->f_36 = func_258(&((uParam2->f_5[4 /*37*/])->f_12), -1);
			}
			func_214(&iVar4, Var2, iLocal_0, 0);
			func_259(uParam0, iVar5, iVar4, 0, 1);
			func_246(uParam2->f_5[iVar0 /*37*/]);
			break;
		case 5:
			iVar5 = (0 + ((uParam2->f_5[4 /*37*/])->f_12.f_23 - 1));
			if (func_248(uParam0, iVar5))
			{
				if (func_272(uParam0, uParam2))
				{
					func_246(uParam2->f_5[iVar0 /*37*/]);
				}
			}
			break;
		case 6:
			if (!func_273(uParam0, uParam2))
			{
				return;
			}
			func_246(uParam2->f_5[iVar0 /*37*/]);
			break;
		case 7:
			if (func_263(uParam0, iVar1))
			{
				func_133(uParam2->f_5[iVar0 /*37*/], 1, 0, 0);
			}
			break;
	}
}

void func_197(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;
	int iVar10;

	iVar2 = uParam1->f_12;
	iVar3 = (14 + uParam2->f_302);
	if (iVar2 != 4)
	{
		func_252(uParam2->f_5[iVar2 /*37*/]);
		return;
	}
	switch ((uParam2->f_5[iVar2 /*37*/])->f_5)
	{
		case 0:
			func_246(uParam2->f_5[iVar2 /*37*/]);
			break;
		case 1:
			if (func_274(uParam0, uParam2, 0))
			{
				func_246(uParam2->f_5[iVar2 /*37*/]);
			}
			break;
		case 2:
			if (!func_275(uParam0, uParam2))
			{
				return;
			}
			func_246(uParam2->f_5[iVar2 /*37*/]);
			break;
		case 3:
			if (func_263(uParam0, iVar3))
			{
				func_246(uParam2->f_5[iVar2 /*37*/]);
			}
			break;
		case 4:
			if (func_274(uParam0, uParam2, 6))
			{
				func_246(uParam2->f_5[iVar2 /*37*/]);
			}
			break;
		case 5:
			if (!func_275(uParam0, uParam2))
			{
				return;
			}
			func_246(uParam2->f_5[iVar2 /*37*/]);
			break;
		case 6:
			if (func_263(uParam0, iVar3) || func_276(uParam0, iVar3) > 0.85f)
			{
				iVar0 = func_277(uParam2->f_302, 0);
				vVar4 = { ENTITY::GET_ENTITY_COORDS((uParam0->f_240[iVar0 /*24*/])->f_4, true, false) };
				vVar7 = { ENTITY::GET_ENTITY_ROTATION((uParam0->f_240[iVar0 /*24*/])->f_4, 2) };
				iVar0 = (84 + uParam2->f_302);
				iVar10 = func_127(84, 0);
				func_125(uParam0, iVar0, iVar10, vVar4, vVar7, 0, 0);
				func_246(uParam2->f_5[iVar2 /*37*/]);
			}
			break;
		case 7:
			if (func_47(uParam0))
			{
				iVar1 = 0;
				while (iVar1 < 11)
				{
					iVar0 = func_277(uParam2->f_302, iVar1);
					func_65(uParam0, iVar0);
					iVar1++;
				}
				func_278(uParam2->f_5[uParam2->f_302 /*37*/]);
				(uParam2->f_5[uParam2->f_302 /*37*/])->f_9 = 0;
				func_133(uParam2->f_5[iVar2 /*37*/], 1, 0, 0);
			}
			break;
	}
}

void func_198(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;
	int iVar10;

	iVar2 = uParam1->f_12;
	iVar3 = (14 + uParam2->f_302);
	if (iVar2 != 4)
	{
		func_252(uParam2->f_5[iVar2 /*37*/]);
		return;
	}
	if ((uParam2->f_5[uParam2->f_302 /*37*/])->f_9 == 0)
	{
		func_252(uParam2->f_5[iVar2 /*37*/]);
		return;
	}
	if ((uParam2->f_5[uParam2->f_302 /*37*/])->f_12.f_23 == 0)
	{
		func_252(uParam2->f_5[iVar2 /*37*/]);
		return;
	}
	switch ((uParam2->f_5[iVar2 /*37*/])->f_5)
	{
		case 0:
			func_246(uParam2->f_5[iVar2 /*37*/]);
			break;
		case 1:
			if (func_274(uParam0, uParam2, 1))
			{
				func_246(uParam2->f_5[iVar2 /*37*/]);
			}
			break;
		case 2:
			if (!func_275(uParam0, uParam2))
			{
				return;
			}
			func_246(uParam2->f_5[iVar2 /*37*/]);
			break;
		case 3:
			if (func_263(uParam0, iVar3))
			{
				func_246(uParam2->f_5[iVar2 /*37*/]);
			}
			break;
		case 4:
			if (func_274(uParam0, uParam2, 6))
			{
				func_246(uParam2->f_5[iVar2 /*37*/]);
			}
			break;
		case 5:
			if (!func_275(uParam0, uParam2))
			{
				return;
			}
			func_246(uParam2->f_5[iVar2 /*37*/]);
			break;
		case 6:
			if (func_263(uParam0, iVar3) || func_276(uParam0, iVar3) > 0.85f)
			{
				iVar0 = func_277(uParam2->f_302, 0);
				vVar4 = { ENTITY::GET_ENTITY_COORDS((uParam0->f_240[iVar0 /*24*/])->f_4, true, false) };
				vVar7 = { ENTITY::GET_ENTITY_ROTATION((uParam0->f_240[iVar0 /*24*/])->f_4, 2) };
				iVar0 = (84 + uParam2->f_302);
				iVar10 = func_127(84, 0);
				func_125(uParam0, iVar0, iVar10, vVar4, vVar7, 0, 0);
				func_246(uParam2->f_5[iVar2 /*37*/]);
			}
			break;
		case 7:
			if (func_47(uParam0))
			{
				iVar1 = 0;
				while (iVar1 < 11)
				{
					iVar0 = func_277(uParam2->f_302, iVar1);
					func_65(uParam0, iVar0);
					iVar1++;
				}
				func_278(uParam2->f_5[uParam2->f_302 /*37*/]);
				(uParam2->f_5[uParam2->f_302 /*37*/])->f_9 = 0;
				func_133(uParam2->f_5[iVar2 /*37*/], 1, 0, 0);
			}
			break;
	}
}

void func_199(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	var uVar5;
	char* sVar6;

	iVar0 = uParam1->f_12;
	iVar1 = (0 + uParam1->f_12);
	switch ((uParam2->f_5[iVar0 /*37*/])->f_5)
	{
		case 0:
			func_246(uParam2->f_5[iVar0 /*37*/]);
			break;
		case 1:
			if (iVar0 == 4)
			{
				sVar6 = func_181(iVar1, 0);
			}
			else
			{
				sVar6 = func_182((uParam2->f_5[iVar0 /*37*/])->f_1);
			}
			if (func_183(uParam0, iVar1, sVar6, "PBL_Idle", 2))
			{
				func_246(uParam2->f_5[iVar0 /*37*/]);
			}
			break;
		case 2:
			if (!func_184(uParam0, iVar1))
			{
				return;
			}
			if (iVar0 == 4)
			{
				if (ENTITY::_0x0B7CB1300CBFE19C(uParam1->f_11, 1))
				{
					TASK::STOP_ANIM_PLAYBACK(uParam1->f_11, 0, false);
				}
				if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED((uParam0->f_240[61 /*24*/])->f_4))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY((uParam0->f_240[61 /*24*/])->f_4, uParam1->f_11, PED::GET_PED_BONE_INDEX(uParam1->f_11, 37709), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0, 0);
				}
				func_185(uParam0, iVar1, uParam1, "DEALER");
				if (!func_186(uParam0, iVar1, uParam0->f_3, 0f, 0f, uParam0->f_6))
				{
					return;
				}
			}
			else
			{
				func_185(uParam0, iVar1, uParam1, "pre_postgame_blackjack_player");
				func_187(0, uParam0->f_3, uParam0->f_6, iVar0, &vVar2, &uVar5, 0);
				if (!func_186(uParam0, iVar1, vVar2 + Vector(uParam2->f_300, 0f, 0f), 0f, 0f, uVar5))
				{
					return;
				}
			}
			func_252(uParam2->f_5[iVar0 /*37*/]);
			break;
	}
}

void func_200(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = uParam1->f_12;
	iVar1 = 11;
	if (iVar0 != 4)
	{
		func_133(uParam2->f_5[iVar0 /*37*/], 1, 0, 0);
		return;
	}
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if ((uParam2->f_5[iVar2 /*37*/])->f_12.f_23 > 0)
		{
			MISC::SET_BIT(&iVar4, iVar2);
		}
		iVar2++;
	}
	if (iVar4 == 0)
	{
		func_133(uParam2->f_5[iVar0 /*37*/], 1, 0, 0);
		return;
	}
	switch ((uParam2->f_5[iVar0 /*37*/])->f_5)
	{
		case 0:
			func_246(uParam2->f_5[iVar0 /*37*/]);
			break;
		case 1:
			if (func_25(&((uParam2->f_5[iVar0 /*37*/])->f_2)) < (uParam2->f_5[iVar0 /*37*/])->f_6)
			{
				return;
			}
			if (func_279(uParam0, uParam2))
			{
				func_246(uParam2->f_5[iVar0 /*37*/]);
			}
			break;
		case 2:
			if (!func_280(uParam0, uParam2))
			{
				return;
			}
			func_246(uParam2->f_5[iVar0 /*37*/]);
			break;
		case 3:
			if (func_276(uParam0, iVar1) >= 1f || ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_11, -1921404755))
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					if ((uParam2->f_5[iVar2 /*37*/])->f_12.f_23 > 0)
					{
						func_259(uParam0, (84 + iVar2), func_127((84 + iVar2), 0), 0, 1);
						iVar3 = 0;
						while (iVar3 < 11)
						{
							iVar5 = func_277(iVar2, iVar3);
							func_281(uParam0, iVar5, -0.125f);
							iVar3++;
						}
					}
					iVar2++;
				}
				if ((uParam2->f_5[4 /*37*/])->f_12.f_23 > 0)
				{
					iVar3 = 0;
					while (iVar3 < 11)
					{
						iVar5 = func_282(iVar3);
						func_281(uParam0, iVar5, -0.125f);
						iVar3++;
					}
				}
				iVar2 = 0;
				while (iVar2 < 5)
				{
					func_255(&((uParam2->f_5[iVar2 /*37*/])->f_12));
					iVar2++;
				}
				func_133(uParam2->f_5[iVar0 /*37*/], 1, 0, 0);
			}
			break;
	}
}

void func_201(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = uParam1->f_12;
	iVar1 = 12;
	if (iVar0 != 4)
	{
		func_133(uParam2->f_5[iVar0 /*37*/], 1, 0, 0);
		return;
	}
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if ((uParam2->f_5[iVar2 /*37*/])->f_9)
		{
			MISC::SET_BIT(&iVar3, iVar2);
		}
		iVar2++;
	}
	if (iVar3 == 0)
	{
		func_133(uParam2->f_5[iVar0 /*37*/], 1, 0, 0);
		return;
	}
	switch ((uParam2->f_5[iVar0 /*37*/])->f_5)
	{
		case 0:
			func_246(uParam2->f_5[iVar0 /*37*/]);
			break;
		case 1:
			if (func_25(&((uParam2->f_5[iVar0 /*37*/])->f_2)) < (uParam2->f_5[iVar0 /*37*/])->f_6)
			{
				return;
			}
			if (func_283(uParam0, uParam2))
			{
				func_246(uParam2->f_5[iVar0 /*37*/]);
			}
			break;
		case 2:
			if (!func_284(uParam0, uParam2))
			{
				return;
			}
			func_246(uParam2->f_5[iVar0 /*37*/]);
			break;
		case 3:
			if (func_263(uParam0, iVar1))
			{
				iVar2 = 0;
				while (iVar2 < 5)
				{
					(uParam2->f_5[iVar2 /*37*/])->f_9 = 0;
					iVar2++;
				}
				func_133(uParam2->f_5[iVar0 /*37*/], 1, 0, 0);
			}
			break;
	}
}

void func_202(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	var uVar5;
	char* sVar6;

	iVar0 = uParam1->f_12;
	iVar1 = (0 + iVar0);
	if (iVar0 < 0 || iVar0 >= 4)
	{
		return;
	}
	switch ((uParam2->f_5[iVar0 /*37*/])->f_5)
	{
		case 0:
			func_246(uParam2->f_5[iVar0 /*37*/]);
			break;
		case 1:
			if (func_25(&((uParam2->f_5[iVar0 /*37*/])->f_2)) < (uParam2->f_5[iVar0 /*37*/])->f_6)
			{
				return;
			}
			sVar6 = func_182((uParam2->f_5[iVar0 /*37*/])->f_1);
			if (func_183(uParam0, iVar1, sVar6, "PBL_Hit", 2))
			{
				func_246(uParam2->f_5[iVar0 /*37*/]);
			}
			break;
		case 2:
			if (!func_184(uParam0, iVar1))
			{
				return;
			}
			func_185(uParam0, iVar1, uParam1, "pre_postgame_blackjack_player");
			func_187(0, uParam0->f_3, uParam0->f_6, iVar0, &vVar2, &uVar5, 0);
			if (!func_186(uParam0, iVar1, vVar2 + Vector(uParam2->f_300, 0f, 0f), 0f, 0f, uVar5))
			{
				return;
			}
			func_132(uParam0, uParam1->f_11, "BJACK_HIT");
			func_246(uParam2->f_5[iVar0 /*37*/]);
			break;
		case 3:
			if (func_251(uParam0, iVar1, "S_Idle"))
			{
				func_133(uParam2->f_5[iVar0 /*37*/], 1, 0, 0);
			}
			break;
	}
}

void func_203(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	var uVar5;
	char* sVar6;

	iVar0 = uParam1->f_12;
	iVar1 = (0 + iVar0);
	if (iVar0 < 0 || iVar0 >= 4)
	{
		return;
	}
	switch ((uParam2->f_5[iVar0 /*37*/])->f_5)
	{
		case 0:
			func_246(uParam2->f_5[iVar0 /*37*/]);
			break;
		case 1:
			if (func_25(&((uParam2->f_5[iVar0 /*37*/])->f_2)) < (uParam2->f_5[iVar0 /*37*/])->f_6)
			{
				return;
			}
			sVar6 = func_182((uParam2->f_5[iVar0 /*37*/])->f_1);
			if (func_183(uParam0, iVar1, sVar6, "PBL_Stand", 2))
			{
				func_246(uParam2->f_5[iVar0 /*37*/]);
			}
			break;
		case 2:
			if (!func_184(uParam0, iVar1))
			{
				return;
			}
			func_185(uParam0, iVar1, uParam1, "pre_postgame_blackjack_player");
			func_187(0, uParam0->f_3, uParam0->f_6, iVar0, &vVar2, &uVar5, 0);
			if (!func_186(uParam0, iVar1, vVar2 + Vector(uParam2->f_300, 0f, 0f), 0f, 0f, uVar5))
			{
				return;
			}
			func_132(uParam0, uParam1->f_11, "BJACK_STAND");
			func_246(uParam2->f_5[iVar0 /*37*/]);
			break;
		case 3:
			if (func_251(uParam0, iVar1, "S_Idle"))
			{
				func_133(uParam2->f_5[iVar0 /*37*/], 1, 0, 0);
			}
			break;
	}
}

void func_204(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	var uVar8;
	char* sVar9;

	iVar0 = uParam1->f_12;
	iVar1 = (0 + iVar0);
	if (iVar0 < 0 || iVar0 >= 4)
	{
		return;
	}
	switch ((uParam2->f_5[iVar0 /*37*/])->f_5)
	{
		case 0:
			func_246(uParam2->f_5[iVar0 /*37*/]);
			break;
		case 1:
			sVar9 = func_182((uParam2->f_5[iVar0 /*37*/])->f_1);
			if (func_183(uParam0, iVar1, sVar9, "PBL_Take", 2))
			{
				func_246(uParam2->f_5[iVar0 /*37*/]);
			}
			break;
		case 2:
			if (func_25(&((uParam2->f_5[iVar0 /*37*/])->f_2)) < (uParam2->f_5[iVar0 /*37*/])->f_6)
			{
				return;
			}
			func_125(uParam0, (55 + iVar0), func_127((55 + iVar0), 0), vVar2, vVar5, 0, 0);
			func_246(uParam2->f_5[iVar0 /*37*/]);
			break;
		case 3:
			if (func_248(uParam0, (55 + iVar0)))
			{
				func_249((uParam0->f_240[(55 + iVar0) /*24*/])->f_4, 5, 4);
				sVar9 = func_182((uParam2->f_5[iVar0 /*37*/])->f_1);
				func_246(uParam2->f_5[iVar0 /*37*/]);
			}
			break;
		case 4:
			if (!func_184(uParam0, iVar1))
			{
				return;
			}
			func_250(uParam0, iVar1, (55 + iVar0), "PREPOSTGAMECHIPS", 0);
			func_185(uParam0, iVar1, uParam1, "pre_postgame_blackjack_player");
			func_187(0, uParam0->f_3, uParam0->f_6, iVar0, &vVar2, &uVar8, 0);
			if (!func_186(uParam0, iVar1, vVar2 + Vector(uParam2->f_300, 0f, 0f), 0f, 0f, uVar8))
			{
				return;
			}
			func_246(uParam2->f_5[iVar0 /*37*/]);
			break;
		case 5:
			if (func_251(uParam0, iVar1, "S_Idle"))
			{
				(uParam2->f_5[iVar0 /*37*/])->f_9 = 0;
				func_133(uParam2->f_5[iVar0 /*37*/], 1, 0, 0);
			}
			break;
	}
}

void func_205(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = uParam1->f_12;
	iVar1 = 13;
	iVar4 = 0;
	if (iVar0 != 4)
	{
		func_133(uParam2->f_5[iVar0 /*37*/], 1, 0, 0);
		return;
	}
	switch ((uParam2->f_5[iVar0 /*37*/])->f_5)
	{
		case 0:
			func_246(uParam2->f_5[iVar0 /*37*/]);
			break;
		case 1:
			iVar2 = 0;
			while (iVar2 < 5)
			{
				if (func_111(uParam0, iVar2))
				{
					if ((uParam2->f_5[iVar2 /*37*/])->f_12.f_23 > 0)
					{
						iVar4 = 1;
					}
				}
				iVar2++;
			}
			if (iVar4 == 0)
			{
				func_133(uParam2->f_5[iVar0 /*37*/], 1, 0, 0);
				return;
			}
			if (func_285(uParam0, uParam2, 3))
			{
				func_246(uParam2->f_5[iVar0 /*37*/]);
			}
			break;
		case 2:
			if (!func_286(uParam0, uParam2))
			{
				return;
			}
			func_246(uParam2->f_5[iVar0 /*37*/]);
			break;
		case 3:
			if (func_276(uParam0, iVar1) >= 0.495f)
			{
				iVar3 = 0;
				while (iVar3 < 4)
				{
					func_65(uParam0, (84 + iVar3));
					iVar3++;
				}
				func_246(uParam2->f_5[iVar0 /*37*/]);
			}
			break;
		case 4:
			if (func_263(uParam0, iVar1) || ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_11, -1921404755))
			{
				iVar3 = 0;
				while (iVar3 < 11)
				{
					iVar5 = func_282(iVar3);
					func_65(uParam0, iVar5);
					iVar3++;
				}
				iVar2 = 0;
				while (iVar2 < 4)
				{
					iVar3 = 0;
					while (iVar3 < 11)
					{
						iVar5 = func_277(iVar2, iVar3);
						func_65(uParam0, iVar5);
						iVar3++;
					}
					iVar2++;
				}
				iVar3 = 0;
				while (iVar3 < 4)
				{
					func_65(uParam0, (84 + iVar3));
					iVar3++;
				}
				iVar2 = 0;
				while (iVar2 < 5)
				{
					func_255(&((uParam2->f_5[iVar2 /*37*/])->f_12));
					iVar2++;
				}
				func_133(uParam2->f_5[iVar0 /*37*/], 1, 0, 0);
			}
			break;
	}
}

void func_206(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	DECORATOR::DECOR_REMOVE(iParam0, "PedSeatedForMinigame");
}

char* func_207()
{
	return "unnamed";
}

void func_208(var uParam0, var uParam1)
{
	uParam0->f_11 = uParam1;
	func_72(&(uParam0->f_12));
}

int func_209(int iParam0, vector3 vParam1, float fParam4, int iParam5, var uParam6, int iParam7)
{
	vector3 vVar0;
	var uVar3;

	if (!func_160(iParam0))
	{
		return 0;
	}
	if (!func_244(iParam0, iParam5, &vVar0))
	{
		return 0;
	}
	*uParam6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, fParam4, vVar0) };
	if (iParam7 == 1)
	{
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam6 + Vector(0.1f, 0f, 0f), &uVar3, 0))
		{
			uParam6->f_2 = uVar3;
		}
	}
	return 1;
}

int func_210(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_211(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 2:
			if (iParam1 < 0 || iParam1 >= 6)
			{
				return 0;
			}
			switch (iParam1)
			{
				case 0:
					*uParam2 = 180f;
					return 1;
				case 1:
					*uParam2 = 120f;
					return 1;
				case 2:
					*uParam2 = 60f;
					return 1;
				case 3:
					*uParam2 = 0f;
					return 1;
				case 4:
					*uParam2 = -60f;
					return 1;
				case 5:
					*uParam2 = -120f;
					return 1;
				default:
					break;
			}
			return 1;
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = (-112.4086f + 180f);
					return 1;
				case 1:
					*uParam2 = (-157.4087f + 180f);
					return 1;
				case 2:
					*uParam2 = (157.5913f + 180f);
					return 1;
				case 3:
					*uParam2 = (112.5913f + 180f);
					return 1;
				case 4:
					*uParam2 = 180f;
					return 1;
				default:
					break;
			}
			return 0;
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 180f;
					return 1;
				case 1:
					*uParam2 = 0f;
					return 1;
				case 2:
					*uParam2 = 90f;
					return 1;
				case 3:
					*uParam2 = 270f;
					return 1;
				default:
					break;
			}
			return 0;
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 90f;
					return 1;
				case 1:
					*uParam2 = 270f;
					return 1;
				default:
					break;
			}
			return 0;
		default:
			break;
	}
	return 1;
}

void func_212(vector3 vParam0, float fParam3, vector3 vParam4, vector3 vParam7, var uParam10, var uParam11)
{
	vector3 vVar0;

	vVar0.x = ((vParam4.x * BUILTIN::COS(fParam3)) - (vParam4.y * BUILTIN::SIN(fParam3)));
	vVar0.f_1 = ((vParam4.x * BUILTIN::SIN(fParam3)) + (vParam4.y * BUILTIN::COS(fParam3)));
	vVar0.f_2 = vParam4.z;
	*uParam10 = { vVar0 + vParam0 };
	*uParam11 = vParam7.x;
	uParam11->f_1 = vParam7.y;
	uParam11->f_2 = (vParam7.z + fParam3);
}

bool func_213(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_214(int iParam0, struct<2> Param1, int iParam3, bool bParam4)
{
	switch (iParam3)
	{
		case 0:
			switch (Param1.f_1)
			{
				case 3:
					switch (Param1)
					{
						case 2:
							*iParam0 = 1909758928;
							return 1;
						case 3:
							*iParam0 = 1162468676;
							return 1;
						case 4:
							*iParam0 = -1354372995;
							return 1;
						case 5:
							*iParam0 = 127662037;
							return 1;
						case 6:
							*iParam0 = -858857622;
							return 1;
						case 7:
							*iParam0 = -2062492572;
							return 1;
						case 8:
							*iParam0 = -542504583;
							return 1;
						case 9:
							*iParam0 = -1827263623;
							return 1;
						case 10:
							*iParam0 = -674570242;
							return 1;
						case 11:
							*iParam0 = 828828635;
							return 1;
						case 12:
							*iParam0 = 1774527635;
							return 1;
						case 13:
							*iParam0 = -880550872;
							return 1;
						case 14:
							*iParam0 = 1118659955;
							return 1;
						default:
							break;
					}
					break;
				case 1:
					switch (Param1)
					{
						case 2:
							*iParam0 = 1377685326;
							return 1;
						case 3:
							*iParam0 = 2122521996;
							return 1;
						case 4:
							*iParam0 = -905735271;
							return 1;
						case 5:
							*iParam0 = -2041734073;
							return 1;
						case 6:
							*iParam0 = 1336229167;
							return 1;
						case 7:
							*iParam0 = -142928476;
							return 1;
						case 8:
							*iParam0 = 1949899020;
							return 1;
						case 9:
							*iParam0 = -1016355603;
							return 1;
						case 10:
							*iParam0 = -2060997082;
							return 1;
						case 11:
							*iParam0 = 679836386;
							return 1;
						case 12:
							*iParam0 = 205850401;
							return 1;
						case 13:
							*iParam0 = -9762481;
							return 1;
						case 14:
							*iParam0 = -1889013498;
							return 1;
						default:
							break;
					}
					break;
				case 0:
					switch (Param1)
					{
						case 2:
							*iParam0 = 490528894;
							return 1;
						case 3:
							*iParam0 = 1857377268;
							return 1;
						case 4:
							*iParam0 = 306779471;
							return 1;
						case 5:
							*iParam0 = -265576506;
							return 1;
						case 6:
							*iParam0 = 1764499352;
							return 1;
						case 7:
							*iParam0 = 343197067;
							return 1;
						case 8:
							*iParam0 = 611917374;
							return 1;
						case 9:
							*iParam0 = 1319922984;
							return 1;
						case 10:
							*iParam0 = 1496774356;
							return 1;
						case 11:
							*iParam0 = 241847248;
							return 1;
						case 12:
							*iParam0 = 1715260480;
							return 1;
						case 13:
							*iParam0 = -972291366;
							return 1;
						case 14:
							*iParam0 = -983269631;
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (Param1)
					{
						case 2:
							*iParam0 = 890959011;
							return 1;
						case 3:
							*iParam0 = -1889927490;
							return 1;
						case 4:
							*iParam0 = 231465939;
							return 1;
						case 5:
							*iParam0 = 551112092;
							return 1;
						case 6:
							*iParam0 = -1081501637;
							return 1;
						case 7:
							*iParam0 = -1816049069;
							return 1;
						case 8:
							*iParam0 = 888381965;
							return 1;
						case 9:
							*iParam0 = -804165125;
							return 1;
						case 10:
							*iParam0 = -741495176;
							return 1;
						case 11:
							*iParam0 = -1801783288;
							return 1;
						case 12:
							*iParam0 = -2006996000;
							return 1;
						case 13:
							*iParam0 = -1114933352;
							return 1;
						case 14:
							*iParam0 = 1487250557;
							return 1;
						default:
							break;
					}
					break;
			}
			break;
		case 1:
			switch (Param1.f_1)
			{
				case 3:
					switch (Param1)
					{
						case 2:
							*iParam0 = 2003217523;
							return 1;
						case 3:
							*iParam0 = -399697037;
							return 1;
						case 4:
							*iParam0 = -1518699789;
							return 1;
						case 5:
							*iParam0 = -997552329;
							return 1;
						case 6:
							*iParam0 = 1652001878;
							return 1;
						case 7:
							*iParam0 = 186320325;
							return 1;
						case 8:
							*iParam0 = -1326803989;
							return 1;
						case 9:
							*iParam0 = 737551253;
							return 1;
						case 10:
							*iParam0 = 668030318;
							return 1;
						case 11:
							*iParam0 = 859105085;
							return 1;
						case 12:
							*iParam0 = -594986572;
							return 1;
						case 13:
							*iParam0 = -1754685568;
							return 1;
						case 14:
							*iParam0 = 570384605;
							return 1;
						default:
							break;
					}
					break;
				case 1:
					switch (Param1)
					{
						case 2:
							*iParam0 = 496728947;
							return 1;
						case 3:
							*iParam0 = 1921848184;
							return 1;
						case 4:
							*iParam0 = -546878645;
							return 1;
						case 5:
							*iParam0 = -821118254;
							return 1;
						case 6:
							*iParam0 = -361944149;
							return 1;
						case 7:
							*iParam0 = -1874474629;
							return 1;
						case 8:
							*iParam0 = -318877148;
							return 1;
						case 9:
							*iParam0 = 932665613;
							return 1;
						case 10:
							*iParam0 = -2038176093;
							return 1;
						case 11:
							*iParam0 = -667785661;
							return 1;
						case 12:
							*iParam0 = 208099752;
							return 1;
						case 13:
							*iParam0 = -581256491;
							return 1;
						case 14:
							*iParam0 = 894832080;
							return 1;
						default:
							break;
					}
					break;
				case 0:
					switch (Param1)
					{
						case 2:
							*iParam0 = 1051290148;
							return 1;
						case 3:
							*iParam0 = -1005545109;
							return 1;
						case 4:
							*iParam0 = 1821478065;
							return 1;
						case 5:
							*iParam0 = 540188127;
							return 1;
						case 6:
							*iParam0 = -1480085904;
							return 1;
						case 7:
							*iParam0 = 825496160;
							return 1;
						case 8:
							*iParam0 = -628192245;
							return 1;
						case 9:
							*iParam0 = -215756895;
							return 1;
						case 10:
							*iParam0 = 793896324;
							return 1;
						case 11:
							*iParam0 = 1121466671;
							return 1;
						case 12:
							*iParam0 = 1834923532;
							return 1;
						case 13:
							*iParam0 = -1282408094;
							return 1;
						case 14:
							*iParam0 = 383127860;
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (Param1)
					{
						case 2:
							*iParam0 = 684527193;
							return 1;
						case 3:
							*iParam0 = -263420923;
							return 1;
						case 4:
							*iParam0 = -249784185;
							return 1;
						case 5:
							*iParam0 = 1143187053;
							return 1;
						case 6:
							*iParam0 = 827657438;
							return 1;
						case 7:
							*iParam0 = -1102425647;
							return 1;
						case 8:
							*iParam0 = 853839925;
							return 1;
						case 9:
							*iParam0 = -1261345136;
							return 1;
						case 10:
							*iParam0 = -1516404361;
							return 1;
						case 11:
							*iParam0 = 1432174202;
							return 1;
						case 12:
							*iParam0 = 1131319157;
							return 1;
						case 13:
							*iParam0 = 186094910;
							return 1;
						case 14:
							*iParam0 = -1567460112;
							return 1;
						default:
							break;
					}
					break;
			}
			break;
		case 2:
			switch (Param1.f_1)
			{
				case 3:
					switch (Param1)
					{
						case 2:
							*iParam0 = joaat("p_crd_2_c01x_gk");
							return 1;
						case 3:
							*iParam0 = -1306858058;
							return 1;
						case 4:
							*iParam0 = -1611982353;
							return 1;
						case 5:
							*iParam0 = 739756370;
							return 1;
						case 6:
							*iParam0 = 1801166233;
							return 1;
						case 7:
							*iParam0 = -644313522;
							return 1;
						case 8:
							*iParam0 = -832951172;
							return 1;
						case 9:
							*iParam0 = 1988315838;
							return 1;
						case 10:
							*iParam0 = -1001399461;
							return 1;
						case 11:
							*iParam0 = 583972710;
							return 1;
						case 12:
							*iParam0 = 854868500;
							return 1;
						case 13:
							*iParam0 = 629055820;
							return 1;
						case 14:
							*iParam0 = -833244723;
							return 1;
						default:
							break;
					}
					break;
				case 1:
					switch (Param1)
					{
						case 2:
							*iParam0 = 1280053851;
							return 1;
						case 3:
							*iParam0 = -633466200;
							return 1;
						case 4:
							*iParam0 = -1836575021;
							return 1;
						case 5:
							*iParam0 = -1110186928;
							return 1;
						case 6:
							*iParam0 = 1672340679;
							return 1;
						case 7:
							*iParam0 = 2003108760;
							return 1;
						case 8:
							*iParam0 = 1877192539;
							return 1;
						case 9:
							*iParam0 = -1703049832;
							return 1;
						case 10:
							*iParam0 = -1497400706;
							return 1;
						case 11:
							*iParam0 = 1971631392;
							return 1;
						case 12:
							*iParam0 = -2127206140;
							return 1;
						case 13:
							*iParam0 = -2048927458;
							return 1;
						case 14:
							*iParam0 = 1630107168;
							return 1;
						default:
							break;
					}
					break;
				case 0:
					switch (Param1)
					{
						case 2:
							*iParam0 = -949698496;
							return 1;
						case 3:
							*iParam0 = 355316014;
							return 1;
						case 4:
							*iParam0 = 1604154240;
							return 1;
						case 5:
							*iParam0 = -1789343904;
							return 1;
						case 6:
							*iParam0 = -50867196;
							return 1;
						case 7:
							*iParam0 = -1012504675;
							return 1;
						case 8:
							*iParam0 = -159578860;
							return 1;
						case 9:
							*iParam0 = 1097950533;
							return 1;
						case 10:
							*iParam0 = -1819094497;
							return 1;
						case 11:
							*iParam0 = 763417437;
							return 1;
						case 12:
							*iParam0 = -1643922980;
							return 1;
						case 13:
							*iParam0 = 1726242611;
							return 1;
						case 14:
							*iParam0 = -982898598;
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (Param1)
					{
						case 2:
							*iParam0 = -597281244;
							return 1;
						case 3:
							*iParam0 = 1859837183;
							return 1;
						case 4:
							*iParam0 = -717777272;
							return 1;
						case 5:
							*iParam0 = -384065410;
							return 1;
						case 6:
							*iParam0 = -426226845;
							return 1;
						case 7:
							*iParam0 = -1560133449;
							return 1;
						case 8:
							*iParam0 = -1724719987;
							return 1;
						case 9:
							*iParam0 = -1506573666;
							return 1;
						case 10:
							*iParam0 = -833467841;
							return 1;
						case 11:
							*iParam0 = 1913040302;
							return 1;
						case 12:
							*iParam0 = -970236810;
							return 1;
						case 13:
							*iParam0 = 990091302;
							return 1;
						case 14:
							*iParam0 = 918658043;
							return 1;
						default:
							break;
					}
					break;
			}
			break;
		case 3:
			switch (Param1.f_1)
			{
				case 3:
					switch (Param1)
					{
						case 2:
							*iParam0 = -403301546;
							return 1;
						case 3:
							*iParam0 = 1871423067;
							return 1;
						case 4:
							*iParam0 = 1337869136;
							return 1;
						case 5:
							*iParam0 = -1544981815;
							return 1;
						case 6:
							*iParam0 = 1935838007;
							return 1;
						case 7:
							*iParam0 = 1362450780;
							return 1;
						case 8:
							*iParam0 = -311392807;
							return 1;
						case 9:
							*iParam0 = 1979302072;
							return 1;
						case 10:
							*iParam0 = 527759776;
							return 1;
						case 11:
							*iParam0 = 972511286;
							return 1;
						case 12:
							*iParam0 = 866723984;
							return 1;
						case 13:
							*iParam0 = -1501906712;
							return 1;
						case 14:
							*iParam0 = 1657044585;
							return 1;
						default:
							break;
					}
					break;
				case 1:
					switch (Param1)
					{
						case 2:
							*iParam0 = 696549872;
							return 1;
						case 3:
							*iParam0 = 1029329299;
							return 1;
						case 4:
							*iParam0 = -204176389;
							return 1;
						case 5:
							*iParam0 = -605490871;
							return 1;
						case 6:
							*iParam0 = -752686013;
							return 1;
						case 7:
							*iParam0 = -2098928623;
							return 1;
						case 8:
							*iParam0 = 673396831;
							return 1;
						case 9:
							*iParam0 = 61996838;
							return 1;
						case 10:
							*iParam0 = 707385061;
							return 1;
						case 11:
							*iParam0 = -1336887993;
							return 1;
						case 12:
							*iParam0 = 1986014158;
							return 1;
						case 13:
							*iParam0 = -1279519199;
							return 1;
						case 14:
							*iParam0 = -404939929;
							return 1;
						default:
							break;
					}
					break;
				case 0:
					switch (Param1)
					{
						case 2:
							*iParam0 = 1766621235;
							return 1;
						case 3:
							*iParam0 = 639465642;
							return 1;
						case 4:
							*iParam0 = 538279577;
							return 1;
						case 5:
							*iParam0 = 1589664504;
							return 1;
						case 6:
							*iParam0 = 1277241365;
							return 1;
						case 7:
							*iParam0 = 464078840;
							return 1;
						case 8:
							*iParam0 = 1382365335;
							return 1;
						case 9:
							*iParam0 = -1642414969;
							return 1;
						case 10:
							*iParam0 = 51231304;
							return 1;
						case 11:
							*iParam0 = 1283399627;
							return 1;
						case 12:
							*iParam0 = 1832068833;
							return 1;
						case 13:
							*iParam0 = -1516046037;
							return 1;
						case 14:
							*iParam0 = 663524178;
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (Param1)
					{
						case 2:
							*iParam0 = -305746106;
							return 1;
						case 3:
							*iParam0 = -208088591;
							return 1;
						case 4:
							*iParam0 = 1937181298;
							return 1;
						case 5:
							*iParam0 = 707745297;
							return 1;
						case 6:
							*iParam0 = -318896190;
							return 1;
						case 7:
							*iParam0 = -954744024;
							return 1;
						case 8:
							*iParam0 = 930365499;
							return 1;
						case 9:
							*iParam0 = -1247282198;
							return 1;
						case 10:
							*iParam0 = 1370939361;
							return 1;
						case 11:
							*iParam0 = -753399062;
							return 1;
						case 12:
							*iParam0 = -977688234;
							return 1;
						case 13:
							*iParam0 = -1596094065;
							return 1;
						case 14:
							*iParam0 = -373053921;
							return 1;
						default:
							break;
					}
					break;
			}
			break;
		case 4:
			switch (Param1.f_1)
			{
				case 3:
					switch (Param1)
					{
						case 2:
							*iParam0 = 1387954345;
							return 1;
						case 3:
							*iParam0 = -1354962655;
							return 1;
						case 4:
							*iParam0 = -804464549;
							return 1;
						case 5:
							*iParam0 = 1348814278;
							return 1;
						case 6:
							*iParam0 = 657062187;
							return 1;
						case 7:
							*iParam0 = 1510162208;
							return 1;
						case 8:
							*iParam0 = 2009701297;
							return 1;
						case 9:
							*iParam0 = 1853223245;
							return 1;
						case 10:
							*iParam0 = -1775176139;
							return 1;
						case 11:
							*iParam0 = 617703278;
							return 1;
						case 12:
							*iParam0 = -1298938137;
							return 1;
						case 13:
							*iParam0 = -1941521224;
							return 1;
						case 14:
							*iParam0 = -1676024061;
							return 1;
						default:
							break;
					}
					break;
				case 1:
					switch (Param1)
					{
						case 2:
							*iParam0 = 391724922;
							return 1;
						case 3:
							*iParam0 = 671459626;
							return 1;
						case 4:
							*iParam0 = -1487277617;
							return 1;
						case 5:
							*iParam0 = -907221559;
							return 1;
						case 6:
							*iParam0 = -2131404875;
							return 1;
						case 7:
							*iParam0 = 1136582530;
							return 1;
						case 8:
							*iParam0 = -2120550211;
							return 1;
						case 9:
							*iParam0 = -281297502;
							return 1;
						case 10:
							*iParam0 = 892072825;
							return 1;
						case 11:
							*iParam0 = 1611660243;
							return 1;
						case 12:
							*iParam0 = -1248904689;
							return 1;
						case 13:
							*iParam0 = -2000963135;
							return 1;
						case 14:
							*iParam0 = -328923850;
							return 1;
						default:
							break;
					}
					break;
				case 0:
					switch (Param1)
					{
						case 2:
							*iParam0 = 2037189536;
							return 1;
						case 3:
							*iParam0 = -2045530267;
							return 1;
						case 4:
							*iParam0 = 2045295050;
							return 1;
						case 5:
							*iParam0 = 1726116464;
							return 1;
						case 6:
							*iParam0 = 136818655;
							return 1;
						case 7:
							*iParam0 = 657382278;
							return 1;
						case 8:
							*iParam0 = 1404937476;
							return 1;
						case 9:
							*iParam0 = -1888826317;
							return 1;
						case 10:
							*iParam0 = 681653557;
							return 1;
						case 11:
							*iParam0 = -721735422;
							return 1;
						case 12:
							*iParam0 = 965390753;
							return 1;
						case 13:
							*iParam0 = 72733444;
							return 1;
						case 14:
							*iParam0 = 2080330127;
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (Param1)
					{
						case 2:
							*iParam0 = -446539351;
							return 1;
						case 3:
							*iParam0 = -1722641930;
							return 1;
						case 4:
							*iParam0 = 243348692;
							return 1;
						case 5:
							*iParam0 = -2096430697;
							return 1;
						case 6:
							*iParam0 = 1941234074;
							return 1;
						case 7:
							*iParam0 = 990323913;
							return 1;
						case 8:
							*iParam0 = -1593509009;
							return 1;
						case 9:
							*iParam0 = -1941079438;
							return 1;
						case 10:
							*iParam0 = 948933843;
							return 1;
						case 11:
							*iParam0 = -1393933166;
							return 1;
						case 12:
							*iParam0 = 1865479666;
							return 1;
						case 13:
							*iParam0 = 1475987833;
							return 1;
						case 14:
							*iParam0 = 1464992706;
							return 1;
						default:
							break;
					}
					break;
			}
			break;
		case 5:
			switch (Param1.f_1)
			{
				case 3:
					switch (Param1)
					{
						case 2:
							*iParam0 = 940287542;
							return 1;
						case 3:
							*iParam0 = 790418313;
							return 1;
						case 4:
							*iParam0 = -2116754376;
							return 1;
						case 5:
							*iParam0 = 1317169409;
							return 1;
						case 6:
							*iParam0 = 1033660954;
							return 1;
						case 7:
							*iParam0 = 124978929;
							return 1;
						case 8:
							*iParam0 = -725520485;
							return 1;
						case 9:
							*iParam0 = -1172744195;
							return 1;
						case 10:
							*iParam0 = 1815096273;
							return 1;
						case 11:
							*iParam0 = 1304006097;
							return 1;
						case 12:
							*iParam0 = -1300766016;
							return 1;
						case 13:
							*iParam0 = -250573840;
							return 1;
						case 14:
							*iParam0 = -1824431250;
							return 1;
						default:
							break;
					}
					break;
				case 1:
					switch (Param1)
					{
						case 2:
							*iParam0 = 80437487;
							return 1;
						case 3:
							*iParam0 = -11479234;
							return 1;
						case 4:
							*iParam0 = 1490589553;
							return 1;
						case 5:
							*iParam0 = -1110583329;
							return 1;
						case 6:
							*iParam0 = -1753679949;
							return 1;
						case 7:
							*iParam0 = 1137688840;
							return 1;
						case 8:
							*iParam0 = -1710863708;
							return 1;
						case 9:
							*iParam0 = 2130883601;
							return 1;
						case 10:
							*iParam0 = -1779427821;
							return 1;
						case 11:
							*iParam0 = -48560774;
							return 1;
						case 12:
							*iParam0 = -1378832890;
							return 1;
						case 13:
							*iParam0 = -1337061193;
							return 1;
						case 14:
							*iParam0 = -962473954;
							return 1;
						default:
							break;
					}
					break;
				case 0:
					switch (Param1)
					{
						case 2:
							*iParam0 = -140928778;
							return 1;
						case 3:
							*iParam0 = 1767974563;
							return 1;
						case 4:
							*iParam0 = 701349000;
							return 1;
						case 5:
							*iParam0 = -2012550923;
							return 1;
						case 6:
							*iParam0 = -802659006;
							return 1;
						case 7:
							*iParam0 = 1535788576;
							return 1;
						case 8:
							*iParam0 = -539132616;
							return 1;
						case 9:
							*iParam0 = -355413556;
							return 1;
						case 10:
							*iParam0 = 125575728;
							return 1;
						case 11:
							*iParam0 = 1392136522;
							return 1;
						case 12:
							*iParam0 = -1089443358;
							return 1;
						case 13:
							*iParam0 = 1496031634;
							return 1;
						case 14:
							*iParam0 = -1494400830;
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (Param1)
					{
						case 2:
							*iParam0 = 877243702;
							return 1;
						case 3:
							*iParam0 = -30406831;
							return 1;
						case 4:
							*iParam0 = 1507721315;
							return 1;
						case 5:
							*iParam0 = 220923946;
							return 1;
						case 6:
							*iParam0 = 386780259;
							return 1;
						case 7:
							*iParam0 = 679225015;
							return 1;
						case 8:
							*iParam0 = -130832693;
							return 1;
						case 9:
							*iParam0 = -1857759931;
							return 1;
						case 10:
							*iParam0 = -1549381684;
							return 1;
						case 11:
							*iParam0 = -1306599616;
							return 1;
						case 12:
							*iParam0 = -1317905551;
							return 1;
						case 13:
							*iParam0 = -1489968742;
							return 1;
						case 14:
							*iParam0 = 274824986;
							return 1;
						default:
							break;
					}
					break;
			}
			break;
		case 6:
			switch (Param1.f_1)
			{
				case 3:
					switch (Param1)
					{
						case 2:
							*iParam0 = 345349862;
							return 1;
						case 3:
							*iParam0 = 233738904;
							return 1;
						case 4:
							*iParam0 = 1509393818;
							return 1;
						case 5:
							*iParam0 = 60813080;
							return 1;
						case 6:
							*iParam0 = -1588867364;
							return 1;
						case 7:
							*iParam0 = -741971058;
							return 1;
						case 8:
							*iParam0 = -1901598027;
							return 1;
						case 9:
							*iParam0 = 216857924;
							return 1;
						case 10:
							*iParam0 = -1696859616;
							return 1;
						case 11:
							*iParam0 = 1250297936;
							return 1;
						case 12:
							*iParam0 = -1324063231;
							return 1;
						case 13:
							*iParam0 = 1618412160;
							return 1;
						case 14:
							*iParam0 = -628673108;
							return 1;
						default:
							break;
					}
					break;
				case 1:
					switch (Param1)
					{
						case 2:
							*iParam0 = -1336484459;
							return 1;
						case 3:
							*iParam0 = 776262968;
							return 1;
						case 4:
							*iParam0 = 1952745955;
							return 1;
						case 5:
							*iParam0 = -1067714914;
							return 1;
						case 6:
							*iParam0 = 251115602;
							return 1;
						case 7:
							*iParam0 = 1575451247;
							return 1;
						case 8:
							*iParam0 = -746735956;
							return 1;
						case 9:
							*iParam0 = 326673134;
							return 1;
						case 10:
							*iParam0 = 1872027280;
							return 1;
						case 11:
							*iParam0 = -1718732108;
							return 1;
						case 12:
							*iParam0 = -1092024524;
							return 1;
						case 13:
							*iParam0 = 2071887039;
							return 1;
						case 14:
							*iParam0 = -1106339162;
							return 1;
						default:
							break;
					}
					break;
				case 0:
					switch (Param1)
					{
						case 2:
							*iParam0 = 1066627194;
							return 1;
						case 3:
							*iParam0 = -799997502;
							return 1;
						case 4:
							*iParam0 = 398382432;
							return 1;
						case 5:
							*iParam0 = -766490354;
							return 1;
						case 6:
							*iParam0 = 834493370;
							return 1;
						case 7:
							*iParam0 = -627280631;
							return 1;
						case 8:
							*iParam0 = -1689944957;
							return 1;
						case 9:
							*iParam0 = -1081837586;
							return 1;
						case 10:
							*iParam0 = 1994269490;
							return 1;
						case 11:
							*iParam0 = 98506870;
							return 1;
						case 12:
							*iParam0 = 828661392;
							return 1;
						case 13:
							*iParam0 = -1902382615;
							return 1;
						case 14:
							*iParam0 = -1749931149;
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (Param1)
					{
						case 2:
							*iParam0 = -1612375921;
							return 1;
						case 3:
							*iParam0 = -464036502;
							return 1;
						case 4:
							*iParam0 = -1734626244;
							return 1;
						case 5:
							*iParam0 = 1432065580;
							return 1;
						case 6:
							*iParam0 = -269373164;
							return 1;
						case 7:
							*iParam0 = -1462036161;
							return 1;
						case 8:
							*iParam0 = 9214594;
							return 1;
						case 9:
							*iParam0 = -449150372;
							return 1;
						case 10:
							*iParam0 = -676777548;
							return 1;
						case 11:
							*iParam0 = 2045572790;
							return 1;
						case 12:
							*iParam0 = 247170975;
							return 1;
						case 13:
							*iParam0 = 2011504438;
							return 1;
						case 14:
							*iParam0 = 1380910900;
							return 1;
						default:
							break;
					}
					break;
			}
			break;
		case 7:
			switch (Param1.f_1)
			{
				case 3:
					switch (Param1)
					{
						case 2:
							*iParam0 = -1327784484;
							return 1;
						case 3:
							*iParam0 = -1496419081;
							return 1;
						case 4:
							*iParam0 = 769946245;
							return 1;
						case 5:
							*iParam0 = -744715350;
							return 1;
						case 6:
							*iParam0 = -1578164439;
							return 1;
						case 7:
							*iParam0 = 124531649;
							return 1;
						case 8:
							*iParam0 = 28598465;
							return 1;
						case 9:
							*iParam0 = 1620556079;
							return 1;
						case 10:
							*iParam0 = 1251463005;
							return 1;
						case 11:
							*iParam0 = -602401997;
							return 1;
						case 12:
							*iParam0 = -363611516;
							return 1;
						case 13:
							*iParam0 = -1631692560;
							return 1;
						case 14:
							*iParam0 = -771839452;
							return 1;
						default:
							break;
					}
					break;
				case 1:
					switch (Param1)
					{
						case 2:
							*iParam0 = 729415757;
							return 1;
						case 3:
							*iParam0 = 946889695;
							return 1;
						case 4:
							*iParam0 = 1738209787;
							return 1;
						case 5:
							*iParam0 = 609774326;
							return 1;
						case 6:
							*iParam0 = -814389520;
							return 1;
						case 7:
							*iParam0 = -1586099842;
							return 1;
						case 8:
							*iParam0 = 1273393517;
							return 1;
						case 9:
							*iParam0 = -1140616583;
							return 1;
						case 10:
							*iParam0 = 675667608;
							return 1;
						case 11:
							*iParam0 = -359677198;
							return 1;
						case 12:
							*iParam0 = 1703181487;
							return 1;
						case 13:
							*iParam0 = -1127742830;
							return 1;
						case 14:
							*iParam0 = -1294625031;
							return 1;
						default:
							break;
					}
					break;
				case 0:
					switch (Param1)
					{
						case 2:
							*iParam0 = -238808491;
							return 1;
						case 3:
							*iParam0 = -610087366;
							return 1;
						case 4:
							*iParam0 = -2113376606;
							return 1;
						case 5:
							*iParam0 = -1658822997;
							return 1;
						case 6:
							*iParam0 = 458077008;
							return 1;
						case 7:
							*iParam0 = -1479991672;
							return 1;
						case 8:
							*iParam0 = -974205616;
							return 1;
						case 9:
							*iParam0 = -1915480358;
							return 1;
						case 10:
							*iParam0 = -1427302413;
							return 1;
						case 11:
							*iParam0 = 1297056981;
							return 1;
						case 12:
							*iParam0 = -1238217619;
							return 1;
						case 13:
							*iParam0 = 1844773640;
							return 1;
						case 14:
							*iParam0 = 1541545551;
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (Param1)
					{
						case 2:
							*iParam0 = 461545493;
							return 1;
						case 3:
							*iParam0 = 760481963;
							return 1;
						case 4:
							*iParam0 = -1747528191;
							return 1;
						case 5:
							*iParam0 = 1706339276;
							return 1;
						case 6:
							*iParam0 = -787395957;
							return 1;
						case 7:
							*iParam0 = 1254414564;
							return 1;
						case 8:
							*iParam0 = -973839534;
							return 1;
						case 9:
							*iParam0 = 964732302;
							return 1;
						case 10:
							*iParam0 = 1965573369;
							return 1;
						case 11:
							*iParam0 = 1273174558;
							return 1;
						case 12:
							*iParam0 = -1366850746;
							return 1;
						case 13:
							*iParam0 = 640816886;
							return 1;
						case 14:
							*iParam0 = 1582547899;
							return 1;
						default:
							break;
					}
					break;
			}
			break;
		case 8:
			switch (Param1.f_1)
			{
				case 3:
					switch (Param1)
					{
						case 2:
							*iParam0 = -1806179115;
							return 1;
						case 3:
							*iParam0 = 1395346866;
							return 1;
						case 4:
							*iParam0 = -109213256;
							return 1;
						case 5:
							*iParam0 = -1416742002;
							return 1;
						case 6:
							*iParam0 = -1615357250;
							return 1;
						case 7:
							*iParam0 = -486577432;
							return 1;
						case 8:
							*iParam0 = 1488031426;
							return 1;
						case 9:
							*iParam0 = -1158386201;
							return 1;
						case 10:
							*iParam0 = -685512585;
							return 1;
						case 11:
							*iParam0 = -545482240;
							return 1;
						case 12:
							*iParam0 = 1170207075;
							return 1;
						case 13:
							*iParam0 = 829062722;
							return 1;
						case 14:
							*iParam0 = 913568525;
							return 1;
						default:
							break;
					}
					break;
				case 1:
					switch (Param1)
					{
						case 2:
							*iParam0 = 1372376306;
							return 1;
						case 3:
							*iParam0 = -1994390239;
							return 1;
						case 4:
							*iParam0 = 1200601581;
							return 1;
						case 5:
							*iParam0 = -1632804958;
							return 1;
						case 6:
							*iParam0 = -470085637;
							return 1;
						case 7:
							*iParam0 = -53460943;
							return 1;
						case 8:
							*iParam0 = 793294898;
							return 1;
						case 9:
							*iParam0 = -525444146;
							return 1;
						case 10:
							*iParam0 = 1136760211;
							return 1;
						case 11:
							*iParam0 = -418497553;
							return 1;
						case 12:
							*iParam0 = -2106116472;
							return 1;
						case 13:
							*iParam0 = 677599687;
							return 1;
						case 14:
							*iParam0 = 150094641;
							return 1;
						default:
							break;
					}
					break;
				case 0:
					switch (Param1)
					{
						case 2:
							*iParam0 = 372300590;
							return 1;
						case 3:
							*iParam0 = -1894075093;
							return 1;
						case 4:
							*iParam0 = -807400872;
							return 1;
						case 5:
							*iParam0 = 850233799;
							return 1;
						case 6:
							*iParam0 = 1063877511;
							return 1;
						case 7:
							*iParam0 = -1378538896;
							return 1;
						case 8:
							*iParam0 = -125455747;
							return 1;
						case 9:
							*iParam0 = -111972905;
							return 1;
						case 10:
							*iParam0 = 861776066;
							return 1;
						case 11:
							*iParam0 = 1904627018;
							return 1;
						case 12:
							*iParam0 = -1833532042;
							return 1;
						case 13:
							*iParam0 = -1778822384;
							return 1;
						case 14:
							*iParam0 = 1868940630;
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (Param1)
					{
						case 2:
							*iParam0 = 1059972971;
							return 1;
						case 3:
							*iParam0 = 1245102704;
							return 1;
						case 4:
							*iParam0 = 857443476;
							return 1;
						case 5:
							*iParam0 = -1967131166;
							return 1;
						case 6:
							*iParam0 = 2056035715;
							return 1;
						case 7:
							*iParam0 = 692065755;
							return 1;
						case 8:
							*iParam0 = 962251301;
							return 1;
						case 9:
							*iParam0 = 487320741;
							return 1;
						case 10:
							*iParam0 = 1501334946;
							return 1;
						case 11:
							*iParam0 = 820339735;
							return 1;
						case 12:
							*iParam0 = 285984845;
							return 1;
						case 13:
							*iParam0 = 1972352444;
							return 1;
						case 14:
							*iParam0 = 1101400672;
							return 1;
						default:
							break;
					}
					break;
			}
			break;
		default:
			return 0;
	}
	switch (iParam3)
	{
		case 0:
			*iParam0 = -1360732541;
			return 0;
		case 1:
			*iParam0 = 319638501;
			return 0;
		case 2:
			*iParam0 = -97213200;
			return 0;
		case 3:
			*iParam0 = 1884526773;
			return 0;
		case 4:
			*iParam0 = -1797228166;
			return 0;
		case 5:
			*iParam0 = -1385386118;
			return 0;
		case 6:
			*iParam0 = -2065276132;
			return 0;
		case 7:
			*iParam0 = -273401568;
			return 0;
		case 8:
			*iParam0 = 188870715;
			return 0;
		default:
			break;
	}
	return 0;
	if (bParam4)
	{
	}
	return 0;
}

int func_215(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 470485448;
			return 1;
		case 1:
			*uParam0 = -291109262;
			return 1;
		case 2:
			*uParam0 = 210029681;
			return 1;
		case 3:
			*uParam0 = 2037482211;
			return 1;
		case 4:
			*uParam0 = 877666613;
			return 1;
		case 5:
			*uParam0 = -1127201651;
			return 1;
		case 6:
			*uParam0 = 1941338030;
			return 1;
		case 7:
			*uParam0 = 181651164;
			return 1;
		case 8:
			*uParam0 = -1328475408;
			return 1;
		default:
			break;
	}
	return 0;
	return 0;
}

int func_216(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			*iParam0 = -1587988328;
			return 1;
		case 1:
			*iParam0 = -1993750510;
			return 1;
		case 2:
			*iParam0 = 1069538232;
			return 1;
		case 3:
			*iParam0 = 1590697544;
			return 1;
		case 4:
			*iParam0 = 335130626;
			return 1;
		case 5:
			*iParam0 = 855344262;
			return 1;
		case 6:
			*iParam0 = -1884742536;
			return 1;
		case 7:
			*iParam0 = -1499241424;
			return 1;
		case 8:
			*iParam0 = -1499241424;
			return 1;
		default:
			break;
	}
	return 0;
	return 0;
}

var func_217(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<7> Var0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = uParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_287(uParam0, &Var0);
}

void func_218(int iParam0)
{
	func_221(iParam0, iParam0->f_4 + 1);
}

int func_219(var uParam0, var uParam1, int iParam2)
{
	if (iParam2 < 0 || iParam2 >= 5)
	{
		return 0;
	}
	if (!(uParam1->f_5[iParam2 /*37*/])->f_8)
	{
		return 0;
	}
	return func_111(uParam0, iParam2);
}

int func_220(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
	iVar1 = func_288(&((iParam0->f_5[iParam1 /*37*/])->f_12), -1);
	iVar2 = 2;
	if (iVar1 == 0)
	{
		if ((iParam0->f_5[iParam1 /*37*/])->f_36 < 11)
		{
			iVar2 = 1;
		}
		else if ((iParam0->f_5[iParam1 /*37*/])->f_36 >= 17)
		{
			iVar2 = 1;
		}
	}
	else if ((iParam0->f_5[iParam1 /*37*/])->f_36 >= 19)
	{
		iVar2 = 1;
	}
	else if ((iParam0->f_5[iParam1 /*37*/])->f_36 <= 17)
	{
		iVar2 = 1;
	}
	if (iVar2 == 1 && MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.25f)
	{
		iVar2 = 2;
	}
	if (iVar2 == 1)
	{
		func_133(iParam0->f_5[iParam1 /*37*/], 8, iVar0, 0);
	}
	else
	{
		func_133(iParam0->f_5[iParam1 /*37*/], 13, iVar0, 0);
	}
	return iVar2;
}

void func_221(int iParam0, int iParam1)
{
	iParam0->f_4 = iParam1;
	func_72(&(iParam0->f_1));
}

void func_222(var uParam0, vector3 vParam1)
{
	uParam0->f_11 = { vParam1 };
}

int func_223(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (&uParam0->f_14[iParam2] == iParam1 && iParam3 == 0)
	{
		if (MISC::IS_BIT_SET(uParam0->f_22, iParam2))
		{
			return 1;
		}
	}
	uParam0->f_14[iParam2] = iParam1;
	MISC::SET_BIT(&(uParam0->f_22), iParam2);
	MISC::CLEAR_BIT(&(uParam0->f_23), iParam2);
	return 1;
}

void func_224(int iParam0)
{
	Global_1899528->f_61.f_5 = iParam0;
}

void func_225(int iParam0)
{
	Global_1899528->f_61 = iParam0;
}

void func_226(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	Global_1899528->f_61.f_1 = uParam0;
	if (iParam2 < 6)
	{
		Global_1899528->f_61.f_134[iParam2] = iParam1;
		Global_1899528->f_61.f_7[iParam2] = iParam3;
		Global_1899528->f_61.f_14[iParam2] = iParam4;
		Global_1899528->f_61.f_21[iParam2] = iParam5;
		Global_1899528->f_61.f_28[iParam2] = iParam6;
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
		}
	}
}

int func_227(int iParam0, int iParam1)
{
	int iVar0;
	char cVar1[64];

	if (func_289(iParam1))
	{
		return 0;
	}
	if (func_290(iParam1))
	{
		return 1;
	}
	if (iParam0 == 2)
	{
		if (!PED::IS_PED_MALE(iParam1))
		{
			return 0;
		}
		if (PED::_0xBD0E4F52F6D95242(iParam1))
		{
			return 0;
		}
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iParam1, 0))
		{
			if (PED::_0x34D6AC1157C8226C(iParam1, -55367021))
			{
				return 1;
			}
			if (PED::_0x34D6AC1157C8226C(iParam1, -2043611403))
			{
				return 1;
			}
			if (PED::_0x34D6AC1157C8226C(iParam1, -1426662425))
			{
				return 1;
			}
		}
		if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iParam1, -1))
		{
			return 1;
		}
		if (func_291(iParam1))
		{
			return 1;
		}
		if (((!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam1, "mini_games@poker_mg@base", "no_cards_idle_a", 1) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iParam1, "mini_games@poker_mg@base", "no_cards_idle_b", 1)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iParam1, "mini_games@poker_mg@base", "no_cards_idle_c", 1)) && !(TASK::IS_TASK_MOVE_NETWORK_ACTIVE(iParam1) && TASK::_0xCACC2F9D994504B7(iParam1) == 319699045))
		{
			return 0;
		}
	}
	else if (iParam0 == 1)
	{
		if (PED::_0xBD0E4F52F6D95242(iParam1))
		{
			return 0;
		}
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iParam1, 0))
		{
			if (PED::_0x34D6AC1157C8226C(iParam1, -402120378))
			{
				return 1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			StringCopy(&cVar1, "mini_games@dominoes@enter_exit@player_0", 64);
			StringIntConCat(&cVar1, iVar0, 64);
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam1, &cVar1, "player_00_idle", 1))
			{
				return 1;
			}
			StringCopy(&cVar1, "mini_games@dominoes@game@player_0", 64);
			StringIntConCat(&cVar1, iVar0, 64);
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam1, &cVar1, "player_00_idle", 1))
			{
				return 1;
			}
			iVar0++;
		}
		if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(iParam1))
		{
			return TASK::_0xCACC2F9D994504B7(iParam1) == -672963996;
		}
		return func_291(iParam1);
	}
	else if (iParam0 == 0)
	{
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iParam1, 0))
		{
			if (PED::_0x34D6AC1157C8226C(iParam1, -1473436841))
			{
				return 1;
			}
		}
		if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iParam1, -1))
		{
			return 1;
		}
		return func_291(iParam1);
	}
	return 1;
}

void func_228(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			ENTITY::DETACH_ENTITY(iParam0, bParam1, bParam2);
		}
	}
}

struct<8> func_229(char* sParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, sParam0, 64);
	return cVar0;
}

void func_230(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_231(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_232(int iParam0)
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

int func_233(int iParam0)
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

void func_234(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_292(iParam0, iParam1))
		{
			if (func_293(iParam0, iParam1))
			{
				if (func_294(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_295(iParam0);
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

void func_235(int iParam0, int iParam1, bool bParam2)
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

void func_236(int iParam0, bool bParam1)
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

void func_237(int iParam0, int iParam1)
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

void func_238(var uParam0, int iParam1)
{
	MISC::_0xE84AAC1B22A73E99(uParam0, iParam1);
}

void func_239(var uParam0, var uParam1)
{
	uParam0->f_3 = uParam1;
	func_72(&(uParam0->f_4));
}

float func_240(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

void func_241(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;

	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		iVar0 = 0;
		iVar1 = 0;
		iVar3 = iVar2 + 1;
		if (iVar2 == 0 && iParam0 <= func_296(iVar2) * 2)
		{
			iVar0 = 2;
			iVar1 = 0;
		}
		else
		{
			if (iVar3 == 6)
			{
				iVar0 = 4;
				iVar1 = 0;
			}
			else if (iParam0 <= (func_296(iVar2) * 3 + func_296(iVar3) * 1) && iVar2 != 0)
			{
				iVar0 = 3;
				iVar1 = 1;
			}
			else if (iParam0 <= (func_296(iVar2) * 2 + func_296(iVar3) * 2) && iVar2 != 0)
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else if (iParam0 <= (func_296(iVar2) * 1 + func_296(iVar3) * 3))
			{
				iVar0 = 1;
				iVar1 = 3;
			}
			if (iVar0 > 0)
			{
			}
			else
			{
				iVar2++;
			}
		}
	}
	fVar4 = (IntToFloat(iParam0) / (((BUILTIN::TO_FLOAT(iVar0) * BUILTIN::TO_FLOAT(func_296(iVar2))) / BUILTIN::TO_FLOAT(iParam4)) + ((BUILTIN::TO_FLOAT(iVar1) * BUILTIN::TO_FLOAT(func_296(iVar3))) / BUILTIN::TO_FLOAT(iParam4))));
	iVar5 = BUILTIN::CEIL(fVar4);
	if (iVar5 > iParam4)
	{
		iVar5 = iParam4;
	}
	if (iVar5 < 0)
	{
		iVar5 = 0;
	}
	iVar6 = 0;
	while (iVar6 < iParam3)
	{
		if (iVar6 < iVar0)
		{
			(*uParam1)[iVar6] = iVar2;
			(*uParam2)[iVar6] = iVar5;
		}
		else
		{
			(*uParam1)[iVar6] = iVar3;
			(*uParam2)[iVar6] = iVar5;
		}
		iVar6++;
	}
}

void func_242(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;

	iVar6 = func_297(iParam1, iParam2);
	if (iVar6 >= uParam0->f_240)
	{
		return;
	}
	func_247(uParam0, iParam1, iParam2, &vVar0, &vVar3, 0, 1);
	func_125(uParam0, iVar6, func_129(), vVar0, vVar3, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST((uParam0->f_240[iVar6 /*24*/])->f_4))
	{
		func_188((uParam0->f_240[iVar6 /*24*/])->f_4, iParam4, iParam5);
		func_189((uParam0->f_240[iVar6 /*24*/])->f_4, iParam3);
	}
}

int func_243(var uParam0, int iParam1, int iParam2)
{
	if (&uParam0->f_2353[iParam1 /*29*/] > 4)
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam2))
		{
			return 0;
		}
		return ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iParam2, (uParam0->f_2353[iParam1 /*29*/])->f_1);
	}
	return 0;
}

int func_244(int iParam0, int iParam1, var uParam2)
{
	float fVar0;

	switch (iParam0)
	{
		case 2:
			if (iParam1 < 0 || iParam1 >= 6)
			{
				return 0;
			}
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 0.008654f, 1.171513f, 0.4999996f };
					return 1;
				case 1:
					*uParam2 = { 1.018887f, 0.5782621f, 0.4999996f };
					return 1;
				case 2:
					*uParam2 = { 1.010233f, -0.5932513f, 0.4999996f };
					return 1;
				case 3:
					*uParam2 = { -0.008654f, -1.171513f, 0.4999996f };
					return 1;
				case 4:
					*uParam2 = { -1.018887f, -0.5782621f, 0.4999996f };
					return 1;
				case 5:
					*uParam2 = { -1.010233f, 0.5932513f, 0.4999996f };
					return 1;
				default:
					break;
			}
			return 1;
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { Vector(50f, -7.9116f, 112.5219f) / Vector(100f, 100f, 100f) };
					return 1;
				case 1:
					*uParam2 = { Vector(50f, -73.55062f, 45.94575f) / Vector(100f, 100f, 100f) };
					return 1;
				case 2:
					*uParam2 = { Vector(50f, -72.85871f, -47.61618f) / Vector(100f, 100f, 100f) };
					return 1;
				case 3:
					*uParam2 = { Vector(50f, -6.31211f, -113.1842f) / Vector(100f, 100f, 100f) };
					return 1;
				case 4:
					*uParam2 = { Vector(50f, 82.1513f, 0.8654f) / Vector(100f, 100f, 100f) };
					return 1;
				default:
					break;
			}
			return 0;
		case 1:
			fVar0 = 0.98f;
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 0f, 0.66f, fVar0 };
					return 1;
				case 1:
					*uParam2 = { 0f, -0.66f, fVar0 };
					return 1;
				case 2:
					*uParam2 = { 0.66f, 0f, fVar0 };
					return 1;
				case 3:
					*uParam2 = { -0.66f, 0f, fVar0 };
					return 1;
				default:
					break;
			}
			return 0;
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1f, 0f, 0f };
					return 1;
				case 1:
					*uParam2 = { 1f, 0f, 0f };
					return 1;
				default:
					break;
			}
			return 1;
		default:
			break;
	}
	return 1;
}

bool func_245(var uParam0, var uParam1)
{
	if (!uParam0->f_2883)
	{
		return false;
	}
	return (*uParam1 >= 2 && *uParam1 <= 6);
}

void func_246(var uParam0)
{
	func_270(uParam0, uParam0->f_5 + 1);
}

int func_247(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;

	bVar0 = true;
	if (iParam1 == 0)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.7925f, 0.0618f, 0.803f };
			vVar4 = { 0f, 0f, 68.7678f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.7855f, 0.1025f, 0.803f };
			vVar4 = { 0f, 0f, 68.7761f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.7601f, 0.0273f, 0.803f };
			vVar4 = { 0.0021f, 0.0028f, 68.7741f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.7523f, 0.0761f, 0.803f };
			vVar4 = { -0.0001f, -0.0003f, 68.7658f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 1)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.3238f, -0.4005f, 0.803f };
			vVar4 = { 0f, 0f, 23.7677f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.3477f, -0.3669f, 0.803f };
			vVar4 = { 0f, 0f, 23.776f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.2765f, -0.4021f, 0.803f };
			vVar4 = { 0.0021f, 0.0028f, 23.774f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.3055f, -0.3621f, 0.803f };
			vVar4 = { -0.0001f, -0.0003f, 23.7657f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 2)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.3352f, -0.3958f, 0.803f };
			vVar4 = { 0f, 0f, -21.2323f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.2945f, -0.3889f, 0.803f };
			vVar4 = { 0f, 0f, -21.224f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.3698f, -0.3634f, 0.803f };
			vVar4 = { 0.0021f, 0.0028f, -21.226f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.321f, -0.3557f, 0.803f };
			vVar4 = { -0.0001f, -0.0003f, -21.2343f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 3)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.7969f, 0.0725f, 0.803f };
			vVar4 = { 0f, 0f, -66.2323f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.7632f, 0.0486f, 0.803f };
			vVar4 = { 0f, 0f, -66.224f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.7984f, 0.1198f, 0.803f };
			vVar4 = { 0.0021f, 0.0028f, -66.226f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.7584f, 0.0908f, 0.803f };
			vVar4 = { -0.0001f, -0.0003f, -66.2343f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return 0;
	}
	if (iParam5 < 0 || iParam5 >= 10)
	{
		return 0;
	}
	if (bParam6)
	{
		func_212(uParam0->f_3, uParam0->f_6, vVar1, vVar4, uParam3, uParam4);
	}
	else
	{
		*uParam3 = { vVar1 };
		*uParam4 = { vVar4 };
	}
	uParam3->f_2 = (uParam3->f_2 + (BUILTIN::TO_FLOAT(iParam5) * 0.006f));
	return 1;
}

bool func_248(var uParam0, int iParam1)
{
	return &uParam0->f_240[iParam1 /*24*/] == 5;
}

void func_249(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	iVar0 = func_298(iParam1);
	func_188(iParam0, func_299(iParam1, iParam2), 0);
	func_189(iParam0, iVar0);
}

void func_250(var uParam0, int iParam1, int iParam2, char* sParam3, bool bParam4)
{
	struct<4> Var0;

	if (iParam2 < 0 || iParam2 >= 88)
	{
		return;
	}
	if (&uParam0->f_2353[iParam1 /*29*/] < 4)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST((uParam0->f_240[iParam2 /*24*/])->f_4))
	{
		return;
	}
	if ((uParam0->f_240[iParam2 /*24*/])->f_3 != -1 && (uParam0->f_240[iParam2 /*24*/])->f_3 != (uParam0->f_2353[iParam1 /*29*/])->f_1)
	{
		func_152(uParam0, iParam2, 0);
	}
	(uParam0->f_240[iParam2 /*24*/])->f_3 = (uParam0->f_2353[iParam1 /*29*/])->f_1;
	StringCopy(&((uParam0->f_240[iParam2 /*24*/])->f_5), sParam3, 64);
	ENTITY::SET_ENTITY_COLLISION((uParam0->f_240[iParam2 /*24*/])->f_4, false, false);
	if (!ENTITY::IS_ENTITY_ATTACHED((uParam0->f_240[iParam2 /*24*/])->f_4))
	{
		ENTITY::FREEZE_ENTITY_POSITION((uParam0->f_240[iParam2 /*24*/])->f_4, true);
	}
	if (bParam4)
	{
		if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX((uParam0->f_2353[iParam1 /*29*/])->f_1, sParam3, &Var0, false, 0, 2))
		{
			ENTITY::SET_ENTITY_COORDS((uParam0->f_240[iParam2 /*24*/])->f_4, Var0, true, false, false, true);
			ENTITY::SET_ENTITY_ROTATION((uParam0->f_240[iParam2 /*24*/])->f_4, Var0.f_3, 2, true);
		}
	}
	(uParam0->f_240[iParam2 /*24*/])->f_14 = 1;
	ANIMSCENE::SET_ANIM_SCENE_ENTITY((uParam0->f_2353[iParam1 /*29*/])->f_1, sParam3, (uParam0->f_240[iParam2 /*24*/])->f_4, 0);
	ENTITY::SET_ENTITY_VISIBLE((uParam0->f_240[iParam2 /*24*/])->f_4, true);
}

int func_251(var uParam0, int iParam1, char* sParam2)
{
	if (iParam1 < 0 || iParam1 >= 18)
	{
		return 0;
	}
	if (&uParam0->f_2353[iParam1 /*29*/] == 5)
	{
		return ANIMSCENE::_0x8D81E7824B7753F7((uParam0->f_2353[iParam1 /*29*/])->f_1, sParam2, 1);
	}
	return 0;
}

void func_252(var uParam0)
{
	uParam0->f_5 = 100;
	func_72(&(uParam0->f_2));
}

void func_253(var uParam0)
{
	struct<2> Var0;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar4 = 0;
	iVar2 = 0;
	while (iVar2 < 4)
	{
		iVar3 = 0;
		while (iVar3 < 15)
		{
			if (iVar3 >= 2)
			{
				Var0.f_1 = iVar2;
				Var0 = iVar3;
				*((*uParam0)[iVar4 /*2*/]) = { Var0 };
				iVar4++;
			}
			iVar3++;
		}
		iVar2++;
	}
	uParam0->f_105 = 0;
	uParam0->f_106 = iVar4;
}

void func_254(var uParam0)
{
	struct<2> Var0;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar4 = 0;
	while (iVar4 < 5)
	{
		iVar2 = 0;
		while (iVar2 < uParam0->f_106)
		{
			iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, uParam0->f_106);
			Var0 = { *((*uParam0)[iVar2 /*2*/]) };
			*((*uParam0)[iVar2 /*2*/]) = { *((*uParam0)[iVar3 /*2*/]) };
			*((*uParam0)[iVar3 /*2*/]) = { Var0 };
			iVar2++;
		}
		iVar4++;
	}
}

void func_255(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		(*uParam0)[iVar0 /*2*/] = -1;
		((*uParam0)[iVar0 /*2*/])->f_1 = -1;
		iVar0++;
	}
	uParam0->f_23 = 0;
}

int func_256(var uParam0, var uParam1)
{
	if (uParam0->f_105 >= uParam0->f_106)
	{
		return 0;
	}
	*uParam1 = { *((*uParam0)[uParam0->f_105 /*2*/]) };
	uParam0->f_105++;
	return 1;
}

int func_257(var uParam0, var uParam1)
{
	if (func_300(uParam0, *uParam1))
	{
		return 0;
	}
	if (uParam0->f_23 == 11)
	{
		return 0;
	}
	*((*uParam0)[uParam0->f_23 /*2*/]) = { *uParam1 };
	uParam0->f_23++;
	return 1;
}

int func_258(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 == -1)
	{
		iParam1 = uParam0->f_23;
	}
	else
	{
		iParam1 = func_299(uParam0->f_23, iParam1);
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		iVar0 = (iVar0 + func_301(*((*uParam0)[iVar2 /*2*/])));
		if (uParam0[iVar2 /*2*/] == 14)
		{
			iVar1++;
		}
		iVar2++;
	}
	while (iVar0 > 21 && iVar1 > 0)
	{
		iVar0 = (iVar0 - 10);
		iVar1 = (iVar1 - 1);
	}
	return iVar0;
}

void func_259(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam2 == 0)
	{
		iParam2 = func_127(iParam1, 0);
	}
	func_125(uParam0, iParam1, iParam2, uParam0->f_3 - Vector(0.1f, 0f, 0f), 0f, 0f, 0f, iParam3, iParam4);
}

bool func_260(var uParam0)
{
	struct<4> Var0;
	char* sVar4;

	Var0 = { func_302(uParam0) };
	sVar4 = func_181(10, 0);
	return func_183(uParam0, 10, sVar4, &Var0, 2);
}

int func_261(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
		if (iVar1 != iParam1)
		{
			if (uParam0->f_94[iVar1 /*29*/] && (uParam0->f_94[iVar1 /*29*/])->f_1 == 5)
			{
				return iVar1;
			}
		}
		iVar0++;
	}
	return -1;
}

char* func_262(int iParam0)
{
	int iVar0;
	char cVar1[64];
	int iVar9;

	iVar0 = iParam0;
	switch (iVar0)
	{
		case 59:
			return "HIT_CARD";
		case 55:
			return "S1_A01_CHIPS";
		case 56:
			return "S2_A01_CHIPS";
		case 57:
			return "S3_A01_CHIPS";
		case 58:
			return "S4_A01_CHIPS";
		case 60:
			return "PREPOSTGAMECHIPS";
		case 61:
			return "DECK";
		case 62:
			return "CADDY";
		case 63:
			return "CADDYSTACK0";
		case 64:
			return "CADDYSTACK1";
		case 65:
			return "CADDYSTACK2";
		case 66:
			return "CADDYSTACK3";
		case 67:
			return "CADDYSTACK4";
		case 0:
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
			iVar9 = (iVar0 - 0) + 1;
			if (iVar9 < 10)
			{
				StringCopy(&cVar1, "DLR_CARD_0", 64);
			}
			else
			{
				StringCopy(&cVar1, "DLR_CARD_", 64);
			}
			StringIntConCat(&cVar1, iVar9, 64);
			return func_303(cVar1);
		case 11:
		case 12:
		case 13:
		case 14:
			iVar9 = (iVar0 - 11) + 1;
			StringCopy(&cVar1, "S", 64);
			StringIntConCat(&cVar1, iVar9, 64);
			StringConCat(&cVar1, "_CARD_A01", 64);
			return func_303(cVar1);
		case 15:
		case 16:
		case 17:
		case 18:
			iVar9 = (iVar0 - 15) + 1;
			StringCopy(&cVar1, "S", 64);
			StringIntConCat(&cVar1, iVar9, 64);
			StringConCat(&cVar1, "_CARD_A02", 64);
			return func_303(cVar1);
		case 19:
		case 20:
		case 21:
		case 22:
			iVar9 = (iVar0 - 19) + 1;
			StringCopy(&cVar1, "S", 64);
			StringIntConCat(&cVar1, iVar9, 64);
			StringConCat(&cVar1, "_CARD_A03", 64);
			return func_303(cVar1);
		case 23:
		case 24:
		case 25:
		case 26:
			iVar9 = (iVar0 - 23) + 1;
			StringCopy(&cVar1, "S", 64);
			StringIntConCat(&cVar1, iVar9, 64);
			StringConCat(&cVar1, "_CARD_A04", 64);
			return func_303(cVar1);
		case 27:
		case 28:
		case 29:
		case 30:
			iVar9 = (iVar0 - 27) + 1;
			StringCopy(&cVar1, "S", 64);
			StringIntConCat(&cVar1, iVar9, 64);
			StringConCat(&cVar1, "_CARD_A05", 64);
			return func_303(cVar1);
		case 31:
		case 32:
		case 33:
		case 34:
			iVar9 = (iVar0 - 31) + 1;
			StringCopy(&cVar1, "S", 64);
			StringIntConCat(&cVar1, iVar9, 64);
			StringConCat(&cVar1, "_CARD_A06", 64);
			return func_303(cVar1);
		case 35:
		case 36:
		case 37:
		case 38:
			iVar9 = (iVar0 - 35) + 1;
			StringCopy(&cVar1, "S", 64);
			StringIntConCat(&cVar1, iVar9, 64);
			StringConCat(&cVar1, "_CARD_A07", 64);
			return func_303(cVar1);
		case 39:
		case 40:
		case 41:
		case 42:
			iVar9 = (iVar0 - 39) + 1;
			StringCopy(&cVar1, "S", 64);
			StringIntConCat(&cVar1, iVar9, 64);
			StringConCat(&cVar1, "_CARD_A08", 64);
			return func_303(cVar1);
		case 43:
		case 44:
		case 45:
		case 46:
			iVar9 = (iVar0 - 43) + 1;
			StringCopy(&cVar1, "S", 64);
			StringIntConCat(&cVar1, iVar9, 64);
			StringConCat(&cVar1, "_CARD_A09", 64);
			return func_303(cVar1);
		case 47:
		case 48:
		case 49:
		case 50:
			iVar9 = (iVar0 - 47) + 1;
			StringCopy(&cVar1, "S", 64);
			StringIntConCat(&cVar1, iVar9, 64);
			StringConCat(&cVar1, "_CARD_A10", 64);
			return func_303(cVar1);
		case 51:
		case 52:
		case 53:
		case 54:
			iVar9 = (iVar0 - 51) + 1;
			StringCopy(&cVar1, "S", 64);
			StringIntConCat(&cVar1, iVar9, 64);
			StringConCat(&cVar1, "_CARD_A11", 64);
			return func_303(cVar1);
		case 68:
		case 69:
		case 70:
		case 71:
			iVar9 = (iVar0 - 68) + 1;
			StringCopy(&cVar1, "S", 64);
			StringIntConCat(&cVar1, iVar9, 64);
			StringConCat(&cVar1, "_BETSTACK_0", 64);
			return func_303(cVar1);
		case 72:
		case 73:
		case 74:
		case 75:
			iVar9 = (iVar0 - 72) + 1;
			StringCopy(&cVar1, "S", 64);
			StringIntConCat(&cVar1, iVar9, 64);
			StringConCat(&cVar1, "_BETSTACK_0", 64);
			return func_303(cVar1);
		case 76:
		case 77:
		case 78:
		case 79:
			iVar9 = (iVar0 - 76) + 1;
			StringCopy(&cVar1, "S", 64);
			StringIntConCat(&cVar1, iVar9, 64);
			StringConCat(&cVar1, "_BETSTACK_0", 64);
			return func_303(cVar1);
		case 80:
		case 81:
		case 82:
		case 83:
			iVar9 = (iVar0 - 80) + 1;
			StringCopy(&cVar1, "S", 64);
			StringIntConCat(&cVar1, iVar9, 64);
			StringConCat(&cVar1, "_BETSTACK_0", 64);
			return func_303(cVar1);
		case 84:
		case 85:
		case 86:
		case 87:
			iVar9 = (iVar0 - 84) + 1;
			StringCopy(&cVar1, "MGSOBJ_DISCARD_0", 64);
			StringIntConCat(&cVar1, iVar9, 64);
			return func_303(cVar1);
		default:
			break;
	}
	return "";
}

int func_263(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 18)
	{
		return 0;
	}
	if (&uParam0->f_2353[iParam1 /*29*/] == 5)
	{
		return (uParam0->f_2353[iParam1 /*29*/])->f_2 >= 0.995f;
	}
	if (&uParam0->f_2353[iParam1 /*29*/] == 6)
	{
		return 1;
	}
	return 0;
}

int func_264(var uParam0, var uParam1)
{
	int iVar0;
	struct<8> Var1;
	int iVar9;

	iVar0 = 10;
	if (!func_148(uParam0, 4))
	{
		return 0;
	}
	if (!func_184(uParam0, iVar0))
	{
		return 0;
	}
	uParam1->f_301 = -1;
	iVar9 = 0;
	while (iVar9 < 4)
	{
		if (func_148(uParam0, iVar9))
		{
			StringCopy(&Var1, func_262((11 + iVar9)), 64);
			func_250(uParam0, iVar0, (11 + iVar9), &Var1, 0);
			StringCopy(&Var1, func_262((15 + iVar9)), 64);
			func_250(uParam0, iVar0, (15 + iVar9), &Var1, 0);
			(uParam1->f_5[iVar9 /*37*/])->f_8 = 1;
			if (uParam1->f_301 == -1)
			{
				uParam1->f_301 = iVar9;
			}
		}
		else
		{
			(uParam1->f_5[iVar9 /*37*/])->f_8 = 0;
		}
		iVar9++;
	}
	StringCopy(&Var1, func_262(0), 64);
	func_250(uParam0, iVar0, 0, &Var1, 0);
	StringCopy(&Var1, func_262(1), 64);
	func_250(uParam0, iVar0, 1, &Var1, 0);
	StringCopy(&Var1, func_304(4), 64);
	func_185(uParam0, iVar0, uParam0->f_94[4 /*29*/], &Var1);
	return func_186(uParam0, iVar0, uParam0->f_3, 0f, 0f, uParam0->f_6);
}

bool func_265(var uParam0, var uParam1)
{
	struct<4> Var0;
	char* sVar4;

	Var0 = { func_305((uParam1->f_5[uParam1->f_301 /*37*/])->f_12.f_23, 0) };
	sVar4 = func_181((5 + uParam1->f_301), 0);
	return func_183(uParam0, (5 + uParam1->f_301), sVar4, &Var0, 2);
}

int func_266(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	struct<8> Var2;

	iVar1 = (5 + uParam1->f_301);
	if (!func_148(uParam0, 4))
	{
		return 0;
	}
	if (!func_184(uParam0, iVar1))
	{
		return 0;
	}
	StringCopy(&Var2, func_262(59), 64);
	iVar0 = ((11 + (4 * ((uParam1->f_5[uParam1->f_301 /*37*/])->f_12.f_23 - 1))) + uParam1->f_301);
	func_250(uParam0, iVar1, iVar0, &Var2, 0);
	StringCopy(&Var2, func_304(4), 64);
	func_185(uParam0, iVar1, uParam0->f_94[4 /*29*/], &Var2);
	return func_186(uParam0, iVar1, uParam0->f_3, 0f, 0f, uParam0->f_6);
}

char* func_267(int iParam0)
{
	char cVar0[32];

	if (iParam0 < 1)
	{
		return "";
	}
	if (iParam0 > 21)
	{
		return "MINIGAME_BJACK_DEALER_BUST";
	}
	StringCopy(&cVar0, "MINIGAME_BJACK_DEALER_", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	return func_306(cVar0);
}

int func_268(var uParam0)
{
	if (uParam0->f_36 > 21)
	{
		return 1;
	}
	return 0;
}

bool func_269(var uParam0)
{
	char* sVar0;

	sVar0 = func_181(9, 0);
	return func_183(uParam0, 9, sVar0, "PBL_Reveal", 2);
}

void func_270(var uParam0, int iParam1)
{
	uParam0->f_5 = iParam1;
	func_72(&(uParam0->f_2));
}

int func_271(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<8> Var2;

	iVar1 = 9;
	if (!func_148(uParam0, 4))
	{
		return 0;
	}
	if (!func_184(uParam0, iVar1))
	{
		return 0;
	}
	StringCopy(&Var2, func_262(59), 64);
	iVar0 = 0;
	func_250(uParam0, iVar1, iVar0, &Var2, 0);
	StringCopy(&Var2, func_304(4), 64);
	func_185(uParam0, iVar1, uParam0->f_94[4 /*29*/], &Var2);
	return func_186(uParam0, iVar1, uParam0->f_3, 0f, 0f, uParam0->f_6);
}

bool func_272(var uParam0, var uParam1)
{
	struct<4> Var0;
	char* sVar4;

	Var0 = { func_307((uParam1->f_5[4 /*37*/])->f_12.f_23) };
	sVar4 = func_181(9, 0);
	return func_183(uParam0, 9, sVar4, &Var0, 2);
}

int func_273(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	struct<8> Var2;

	iVar1 = 9;
	if (!func_148(uParam0, 4))
	{
		return 0;
	}
	if (!func_184(uParam0, iVar1))
	{
		return 0;
	}
	StringCopy(&Var2, func_262(59), 64);
	iVar0 = (0 + ((uParam1->f_5[4 /*37*/])->f_12.f_23 - 1));
	func_250(uParam0, iVar1, iVar0, &Var2, 0);
	StringCopy(&Var2, func_304(4), 64);
	func_185(uParam0, iVar1, uParam0->f_94[4 /*29*/], &Var2);
	return func_186(uParam0, iVar1, uParam0->f_3, 0f, 0f, uParam0->f_6);
}

bool func_274(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	char* sVar1;

	iVar0 = (14 + uParam1->f_302);
	sVar1 = func_181(iVar0, 0);
	if (iParam2 != 7)
	{
		uParam1->f_192 = iParam2;
	}
	switch (uParam1->f_192)
	{
		case 0:
			return func_183(uParam0, iVar0, sVar1, "PBL_A_WIN", 2);
		case 1:
			return func_183(uParam0, iVar0, sVar1, "PBL_A_LOSS", 2);
		case 2:
			return func_183(uParam0, iVar0, sVar1, "PBL_EXIT_TO_SEAT_01", 2);
		case 3:
			return func_183(uParam0, iVar0, sVar1, "PBL_EXIT_TO_SEAT_02", 2);
		case 4:
			return func_183(uParam0, iVar0, sVar1, "PBL_EXIT_TO_SEAT_03", 2);
		case 5:
			return func_183(uParam0, iVar0, sVar1, "PBL_EXIT_TO_SEAT_04", 2);
		default:
			break;
	}
	return func_183(uParam0, iVar0, sVar1, "PBL_EXIT_TO_SELF", 2);
}

int func_275(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	char cVar2[16];
	int iVar4;

	iVar4 = (14 + uParam1->f_302);
	if (!func_184(uParam0, iVar4))
	{
		return 0;
	}
	if (!func_148(uParam0, 4))
	{
		return 0;
	}
	if ((uParam1->f_5[uParam1->f_302 /*37*/])->f_12.f_23 > 0)
	{
		iVar0 = 0;
		while (iVar0 < (uParam1->f_5[uParam1->f_302 /*37*/])->f_12.f_23)
		{
			iVar1 = func_277(uParam1->f_302, iVar0);
			if (iVar0 + 1 < 10)
			{
				StringCopy(&cVar2, "CARD_A0", 16);
				StringIntConCat(&cVar2, iVar0 + 1, 16);
			}
			else
			{
				StringCopy(&cVar2, "CARD_A", 16);
				IntToString(&cVar2, iVar0 + 1, 16);
			}
			func_250(uParam0, iVar4, iVar1, func_308(cVar2), 0);
			iVar0++;
		}
	}
	if (uParam1->f_192 == 1)
	{
		iVar1 = (55 + uParam1->f_302);
		func_250(uParam0, iVar4, iVar1, "CHIPS_A01", 0);
	}
	if (uParam1->f_192 == 0)
	{
		iVar1 = 60;
		func_250(uParam0, iVar4, iVar1, "CHIPS_A01", 0);
	}
	func_185(uParam0, iVar4, uParam0->f_94[4 /*29*/], "PLAYER");
	return func_186(uParam0, iVar4, uParam0->f_3, 0f, 0f, uParam0->f_6);
}

float func_276(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 18)
	{
		return 0f;
	}
	if (&uParam0->f_2353[iParam1 /*29*/] == 5)
	{
		return (uParam0->f_2353[iParam1 /*29*/])->f_2;
	}
	if (&uParam0->f_2353[iParam1 /*29*/] == 6)
	{
		return 1f;
	}
	return 0f;
}

int func_277(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = ((11 + (4 * iParam1)) + iParam0);
	return iVar0;
}

void func_278(var uParam0)
{
	func_255(&(uParam0->f_12));
	uParam0->f_36 = 0;
}

bool func_279(var uParam0, var uParam1)
{
	struct<4> Var0;
	char* sVar4;

	Var0 = { func_309(uParam0, uParam1) };
	sVar4 = func_181(11, 0);
	return func_183(uParam0, 11, sVar4, &Var0, 2);
}

int func_280(var uParam0, var uParam1)
{
	int iVar0;
	struct<8> Var1;
	int iVar9;
	int iVar10;
	int iVar11;

	iVar0 = 11;
	if (!func_184(uParam0, iVar0))
	{
		return 0;
	}
	if (!func_148(uParam0, 4))
	{
		return 0;
	}
	uParam1->f_304 = 0;
	iVar9 = 0;
	while (iVar9 < 4)
	{
		if (func_148(uParam0, iVar9) && (uParam1->f_5[iVar9 /*37*/])->f_12.f_23 > 0)
		{
			iVar10 = 0;
			while (iVar10 < (uParam1->f_5[iVar9 /*37*/])->f_12.f_23)
			{
				MISC::SET_BIT(&(uParam1->f_304), iVar9);
				iVar11 = ((11 + (4 * iVar10)) + iVar9);
				StringCopy(&Var1, func_262(iVar11), 64);
				func_250(uParam0, iVar0, iVar11, &Var1, 0);
				iVar10++;
			}
		}
		iVar9++;
	}
	if ((uParam1->f_5[4 /*37*/])->f_12.f_23 > 0)
	{
		MISC::SET_BIT(&(uParam1->f_304), 4);
		iVar10 = 0;
		while (iVar10 < (uParam1->f_5[4 /*37*/])->f_12.f_23)
		{
			iVar11 = (0 + iVar10);
			StringCopy(&Var1, func_262(iVar11), 64);
			func_250(uParam0, iVar0, iVar11, &Var1, 0);
			iVar10++;
		}
	}
	StringCopy(&Var1, func_304(4), 64);
	func_185(uParam0, iVar0, uParam0->f_94[4 /*29*/], &Var1);
	return func_186(uParam0, iVar0, uParam0->f_3, 0f, 0f, uParam0->f_6);
}

void func_281(var uParam0, int iParam1, float fParam2)
{
	if (iParam1 < 0 || iParam1 >= 88)
	{
		return;
	}
	if (&uParam0->f_240[iParam1 /*24*/] != 5)
	{
		(uParam0->f_240[iParam1 /*24*/])->f_22 = 0f;
	}
	else
	{
		(uParam0->f_240[iParam1 /*24*/])->f_22 = fParam2;
	}
}

int func_282(int iParam0)
{
	int iVar0;

	iVar0 = (0 + iParam0);
	return iVar0;
}

bool func_283(var uParam0, var uParam1)
{
	struct<4> Var0;
	char* sVar4;

	Var0 = { func_310(uParam0, uParam1) };
	sVar4 = func_181(12, 0);
	return func_183(uParam0, 12, sVar4, &Var0, 2);
}

int func_284(var uParam0, var uParam1)
{
	int iVar0;
	struct<8> Var1;
	int iVar9;
	int iVar10;

	iVar0 = 12;
	if (!func_184(uParam0, iVar0))
	{
		return 0;
	}
	if (!func_148(uParam0, 4))
	{
		return 0;
	}
	iVar9 = 0;
	while (iVar9 < 4)
	{
		if (func_148(uParam0, iVar9) && (uParam1->f_5[iVar9 /*37*/])->f_9)
		{
			iVar10 = (55 + iVar9);
			StringCopy(&Var1, func_262(iVar10), 64);
			func_250(uParam0, iVar0, iVar10, &Var1, 0);
		}
		iVar9++;
	}
	StringCopy(&Var1, func_304(4), 64);
	func_185(uParam0, iVar0, uParam0->f_94[4 /*29*/], &Var1);
	return func_186(uParam0, iVar0, uParam0->f_3, 0f, 0f, uParam0->f_6);
}

bool func_285(var uParam0, var uParam1, int iParam2)
{
	char* sVar0;

	sVar0 = func_181(13, 0);
	if (iParam2 != 3)
	{
		uParam1->f_191 = iParam2;
	}
	switch (uParam1->f_191)
	{
		case 0:
			return func_183(uParam0, 13, sVar0, "PBL_Cleanup", 2);
		case 1:
			return func_183(uParam0, 13, sVar0, "PBL_Cleanup_Discard", 2);
		case 2:
			return func_183(uParam0, 13, sVar0, "PBL_Cleanup_To_Shuffle", 2);
		default:
			break;
	}
	return func_183(uParam0, 13, sVar0, "PBL_Cleanup", 2);
}

int func_286(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	int iVar5;

	iVar5 = 13;
	if (!func_184(uParam0, iVar5))
	{
		return 0;
	}
	if (!func_148(uParam0, 4))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (MISC::IS_BIT_SET(uParam1->f_304, iVar0) || (uParam1->f_5[iVar0 /*37*/])->f_12.f_23 > 0)
		{
			iVar1 = (84 + iVar0);
			func_250(uParam0, iVar5, iVar1, func_262(iVar0), 0);
		}
		iVar0++;
	}
	if ((uParam1->f_5[4 /*37*/])->f_12.f_23 > 0)
	{
		MISC::SET_BIT(&(uParam1->f_304), 4);
		iVar2 = 0;
		while (iVar2 < (uParam1->f_5[4 /*37*/])->f_12.f_23)
		{
			iVar1 = (0 + iVar2);
			if (iVar2 + 1 < 10)
			{
				StringCopy(&cVar3, "0", 16);
				StringIntConCat(&cVar3, iVar2 + 1, 16);
			}
			else
			{
				IntToString(&cVar3, iVar2 + 1, 16);
			}
			StringConCat(&cVar3, "_CARD", 16);
			func_250(uParam0, iVar5, iVar1, func_308(cVar3), 0);
			iVar2++;
		}
	}
	func_185(uParam0, iVar5, uParam0->f_94[4 /*29*/], func_304(4));
	return func_186(uParam0, iVar5, uParam0->f_3, 0f, 0f, uParam0->f_6);
}

var func_287(var uParam0, var uParam1)
{
	return AUDIO::_PLAY_AMBIENT_SPEECH1(uParam0, uParam1);
}

bool func_288(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 == -1)
	{
		iParam1 = uParam0->f_23;
	}
	else
	{
		iParam1 = func_299(uParam0->f_23, iParam1);
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		iVar0 = (iVar0 + func_301(*((*uParam0)[iVar2 /*2*/])));
		if (uParam0[iVar2 /*2*/] == 14)
		{
			iVar1++;
		}
		iVar2++;
	}
	while (iVar0 > 21 && iVar1 > 0)
	{
		iVar0 = (iVar0 - 10);
		iVar1 = (iVar1 - 1);
	}
	return iVar1 > 0;
}

int func_289(int iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 1;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 1;
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 1;
	}
	if (PED::IS_PED_ON_MOUNT(iParam0))
	{
		return 1;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		return 1;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iParam0, true))
	{
		return 1;
	}
	if (PED::_0xB086C8C0F5701D14(iParam0))
	{
		return 1;
	}
	if (PED::IS_PED_IN_COMBAT(iParam0, 0))
	{
		return 1;
	}
	if (PED::_0x9682F850056C9ADE(iParam0) || PED::_0x3AA24CCC0D451379(iParam0))
	{
		return 1;
	}
	if (PED::IS_PED_SHOOTING(iParam0))
	{
		return 1;
	}
	if (PED::IS_PED_FLEEING(iParam0))
	{
		return 1;
	}
	if (!ENTITY::IS_ENTITY_UPRIGHT(iParam0, 90f) || ENTITY::IS_ENTITY_UPSIDEDOWN(iParam0))
	{
		return 1;
	}
	if (PED::_0x3E592D0486DEC0F6(iParam0) || PED::IS_PED_FALLING(iParam0))
	{
		return 1;
	}
	if (TASK::IS_PED_GETTING_UP(iParam0) || PED::IS_PED_GETTING_INTO_A_VEHICLE(iParam0))
	{
		return 1;
	}
	if (PED::_0xA911EE21EDF69DAF(iParam0))
	{
		return 1;
	}
	if (PED::_0x0E99E3BF11BB6367(iParam0) || PED::_0x3BDFCF25B58B0415(iParam0))
	{
		return 1;
	}
	if (PED::IS_PED_IN_COVER(iParam0, 0, 0))
	{
		return 1;
	}
	if (PED::IS_PED_DIVING(iParam0))
	{
		return 1;
	}
	if (PED::_0xC48A9EB0D499B3E5(iParam0))
	{
		return 1;
	}
	if (PED::IS_PED_CLIMBING(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_290(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "PedSeatedForMinigame"))
	{
		return DECORATOR::DECOR_GET_BOOL(iParam0, "PedSeatedForMinigame");
	}
	return 0;
}

int func_291(int iParam0)
{
	vector3 vVar0[3];
	vector3 vVar10;
	float fVar13;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iParam0))
	{
		return 1;
	}
	if (!TASK::IS_PED_STILL(iParam0))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_UPRIGHT(iParam0, 90f))
	{
		return 0;
	}
	if (PED::_0xD5FE956C70FF370B(iParam0))
	{
		return 0;
	}
	if (PED::GET_PED_STEALTH_MOVEMENT(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_JUMPING(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_RAGDOLL(iParam0))
	{
		return 0;
	}
	vVar10 = { PED::GET_PED_BONE_COORDS(iParam0, 56200, 0f, 0f, 0f) };
	*(vVar0[2 /*3*/]) = { PED::GET_PED_BONE_COORDS(iParam0, 45454, 0f, 0f, 0f) };
	if ((vVar10.z - (vVar0[2 /*3*/])->f_2) > 0.7f)
	{
		return 0;
	}
	*(vVar0[0 /*3*/]) = { PED::GET_PED_BONE_COORDS(iParam0, 65478, 0f, 0f, 0f) };
	*(vVar0[1 /*3*/]) = { PED::GET_PED_BONE_COORDS(iParam0, 55120, 0f, 0f, 0f) };
	fVar13 = func_311(*(vVar0[2 /*3*/]) - *(vVar0[1 /*3*/]), *(vVar0[1 /*3*/]) - *(vVar0[0 /*3*/]));
	if (fVar13 < -0.173648f && fVar13 > 0.173648f)
	{
		return 0;
	}
	*(vVar0[0 /*3*/]) = { PED::GET_PED_BONE_COORDS(iParam0, 6884, 0f, 0f, 0f) };
	*(vVar0[1 /*3*/]) = { PED::GET_PED_BONE_COORDS(iParam0, 43312, 0f, 0f, 0f) };
	*(vVar0[2 /*3*/]) = { PED::GET_PED_BONE_COORDS(iParam0, 33646, 0f, 0f, 0f) };
	fVar13 = func_311(*(vVar0[2 /*3*/]) - *(vVar0[1 /*3*/]), *(vVar0[1 /*3*/]) - *(vVar0[0 /*3*/]));
	if (fVar13 < -0.173648f && fVar13 > 0.173648f)
	{
		return 0;
	}
	return 1;
}

bool func_292(int iParam0, int iParam1)
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

int func_293(int iParam0, int iParam1)
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

bool func_294(int iParam0, int iParam1)
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
	if (!func_292(iParam0, iVar0))
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

void func_295(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

int func_296(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
		case 1:
			return 30;
		case 2:
			return 75;
		case 3:
			return 175;
		case 4:
			return 625;
		case 5:
			return 1000;
		default:
			break;
	}
	return 30;
}

int func_297(int iParam0, int iParam1)
{
	return ((68 + (4 * iParam1)) + iParam0);
}

int func_298(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam0 <= func_296(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return (6 - 1);
}

int func_299(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_300(var uParam0, struct<2> Param1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_23)
	{
		if (uParam0[iVar0 /*2*/] == Param1 && ((*uParam0)[iVar0 /*2*/])->f_1 == Param1.f_1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_301(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 2:
			return 2;
		case 3:
			return 3;
		case 4:
			return 4;
		case 5:
			return 5;
		case 6:
			return 6;
		case 7:
			return 7;
		case 8:
			return 8;
		case 9:
			return 9;
		case 10:
			return 10;
		case 11:
			return 10;
		case 12:
			return 10;
		case 13:
			return 10;
		case 14:
			return 11;
		default:
			break;
	}
	return 0;
}

struct<4> func_302(var uParam0)
{
	int iVar0;
	char cVar1[32];

	StringCopy(&cVar1, "PBL_DEAL_", 32);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_148(uParam0, iVar0))
		{
			StringIntConCat(&cVar1, iVar0 + 1, 32);
		}
		iVar0++;
	}
	return cVar1;
}

var func_303(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

char* func_304(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	switch (iVar0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return "Pre_PostGame_Blackjack_Player";
		case 4:
			return "Dealer";
		default:
			break;
	}
	return "";
}

struct<4> func_305(int iParam0, int iParam1)
{
	char cVar0[32];

	if (iParam1 == 0)
	{
		if (iParam0 < 10)
		{
			StringCopy(&cVar0, "PBL_A0", 32);
		}
		else
		{
			StringCopy(&cVar0, "PBL_A", 32);
		}
	}
	else if (iParam0 < 10)
	{
		StringCopy(&cVar0, "PBL_B0", 32);
	}
	else
	{
		StringCopy(&cVar0, "PBL_B", 32);
	}
	StringIntConCat(&cVar0, iParam0, 32);
	return cVar0;
}

var func_306(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

struct<4> func_307(int iParam0)
{
	char cVar0[32];

	if (iParam0 < 10)
	{
		StringCopy(&cVar0, "PBL_0", 32);
	}
	else
	{
		StringCopy(&cVar0, "PBL_", 32);
	}
	StringIntConCat(&cVar0, iParam0, 32);
	return cVar0;
}

var func_308(char[4] cParam0, char[4] cParam1)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

struct<4> func_309(var uParam0, var uParam1)
{
	int iVar0;
	char cVar1[32];

	StringCopy(&cVar1, "PBL_RETRIEVE_", 32);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_148(uParam0, iVar0) && (uParam1->f_5[iVar0 /*37*/])->f_12.f_23 > 0)
		{
			StringIntConCat(&cVar1, iVar0 + 1, 32);
		}
		iVar0++;
	}
	return cVar1;
}

struct<4> func_310(var uParam0, var uParam1)
{
	int iVar0;
	char cVar1[32];

	StringCopy(&cVar1, "PBL_LOSS_", 32);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_148(uParam0, iVar0) && (uParam1->f_5[iVar0 /*37*/])->f_9)
		{
			StringIntConCat(&cVar1, iVar0 + 1, 32);
		}
		iVar0++;
	}
	return cVar1;
}

float func_311(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

